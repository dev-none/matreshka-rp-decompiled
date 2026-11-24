// =========================================================================
// Function: FUN_718c0320
// Entry: 0x718c0320 | Size: 48 bytes
// =========================================================================

void FUN_718c0320(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int param_6)

{
  *(undefined4 *)(param_1 + 0x6b8) = param_3;
  *(int *)(param_1 + 0x6c4) = param_6;
  *(int *)(param_1 + 0x6c0) = param_5;
  *(undefined4 *)(param_1 + 0x6bc) = param_4;
  if (*(uint *)(param_1 + 0x300) < (uint)((param_6 + param_5) * 2)) {
    *(int *)(param_1 + 0x300) = (param_6 + param_5) * 2;
  }
  return;
}


// =========================================================================
// Function: FUN_718c0368
// Entry: 0x718c0368 | Size: 8 bytes
// =========================================================================

void FUN_718c0368(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return;
}


// =========================================================================
// Function: FUN_718c0388
// Entry: 0x718c0388 | Size: 16 bytes
// =========================================================================

void FUN_718c0388(int param_1,uint param_2)

{
  *(ulonglong *)(param_1 + 0x38) = (ulonglong)param_2 * 1000;
  return;
}


// =========================================================================
// Function: FUN_718c03b0
// Entry: 0x718c03b0 | Size: 784 bytes
// =========================================================================

int FUN_718c03b0(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  char cStack_29;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  
  iVar8 = *(int *)(param_1 + 0x10);
  iVar4 = 0;
  if (iVar8 != 0) {
    uStack_24 = 0;
    cStack_29 = '\0';
    if (iVar8 == *(int *)(param_1 + 0x14)) {
      iVar7 = *(int *)(iVar8 + 4) + -1;
      iVar1 = *(int *)(iVar8 + 4) / 2;
      do {
        uVar3 = (uint)*(ushort *)(iVar8 + 8 + iVar1 * 2);
        if (uVar3 == param_2) {
          *param_3 = *(undefined4 *)(iVar8 + iVar1 * 4 + 0x48);
          pcVar2 = *(char **)(param_1 + 0x10);
          iVar4 = *(int *)(pcVar2 + 4) + -1;
          if (iVar1 < iVar4) {
            iVar8 = iVar1;
            pcVar6 = pcVar2 + iVar1 * 2 + 8;
            do {
              iVar8 = iVar8 + 1;
              *(undefined2 *)pcVar6 = *(undefined2 *)(pcVar6 + 2);
              iVar4 = *(int *)(pcVar2 + 4) + -1;
              pcVar6 = pcVar6 + 2;
            } while (iVar8 < iVar4);
          }
          if (*pcVar2 == '\0') {
            if (iVar1 < iVar4) {
              do {
                iVar8 = iVar1 + 1;
                *(undefined4 *)(pcVar2 + iVar1 * 4 + 0xd4) =
                     *(undefined4 *)(pcVar2 + iVar1 * 4 + 0xd8);
                iVar4 = *(int *)(pcVar2 + 4) + -1;
                iVar1 = iVar8;
              } while (iVar8 < iVar4);
            }
          }
          else if (iVar1 < iVar4) {
            do {
              iVar8 = iVar1 + 1;
              *(undefined4 *)(pcVar2 + iVar1 * 4 + 0x48) =
                   *(undefined4 *)(pcVar2 + iVar1 * 4 + 0x4c);
              iVar4 = *(int *)(pcVar2 + 4) + -1;
              iVar1 = iVar8;
            } while (iVar8 < iVar4);
          }
          *(int *)(pcVar2 + 4) = iVar4;
          iVar4 = *(int *)(param_1 + 0x10);
          if (*(int *)(iVar4 + 4) != 0) {
            return 1;
          }
          iVar8 = *(int *)(param_1 + 8);
          if (iVar8 == *(int *)(param_1 + 0xc)) {
            uVar3 = iVar8 << 1;
            if (iVar8 == 0) {
              uVar3 = 0x10;
            }
            iVar1 = uVar3 << 2;
            *(uint *)(param_1 + 0xc) = uVar3;
            if (0x3fffffff < uVar3) {
              iVar1 = -1;
            }
            iVar1 = thunk__IBDl(iVar1);
            iVar7 = *(int *)(param_1 + 4);
            imp___aeabi_memcpy(iVar1,iVar7,iVar8 << 2);
            if (iVar7 != 0) {
              dGrRHE(iVar7);
              iVar8 = *(int *)(param_1 + 8);
            }
            *(int *)(param_1 + 4) = iVar1;
          }
          else {
            iVar1 = *(int *)(param_1 + 4);
          }
          *(int *)(iVar1 + iVar8 * 4) = iVar4;
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
          **(undefined4 **)(param_1 + 0x10) = 0;
          *(undefined4 *)(param_1 + 0x10) = 0;
          *(undefined4 *)(param_1 + 0x14) = 0;
          return 1;
        }
        if (uVar3 < param_2) {
          iVar4 = iVar1 + 1;
        }
        if (param_2 < uVar3) {
          iVar7 = iVar1 + -1;
        }
        iVar1 = iVar4 + (iVar7 - iVar4) / 2;
      } while (iVar4 <= iVar7);
      iVar4 = 0;
    }
    else {
      iVar8 = FUN_718c1e9c(param_1,param_2,iVar8,&cStack_29,*(undefined2 *)(iVar8 + 8),auStack_28,
                           param_3);
      if (((iVar8 != 0) && (iVar4 = 1, cStack_29 != '\0')) &&
         (puVar5 = *(undefined4 **)(param_1 + 0x10), puVar5[1] == 0)) {
        iVar8 = *(int *)(param_1 + 8);
        *(undefined4 *)(param_1 + 0x10) = puVar5[0x34];
        if (iVar8 == *(int *)(param_1 + 0xc)) {
          uVar3 = iVar8 << 1;
          if (iVar8 == 0) {
            uVar3 = 0x10;
          }
          iVar1 = uVar3 << 2;
          *(uint *)(param_1 + 0xc) = uVar3;
          if (0x3fffffff < uVar3) {
            iVar1 = -1;
          }
          iVar1 = thunk__IBDl(iVar1);
          iVar7 = *(int *)(param_1 + 4);
          imp___aeabi_memcpy(iVar1,iVar7,iVar8 << 2);
          if (iVar7 != 0) {
            dGrRHE(iVar7);
            iVar8 = *(int *)(param_1 + 8);
          }
          *(int *)(param_1 + 4) = iVar1;
        }
        else {
          iVar1 = *(int *)(param_1 + 4);
        }
        *(undefined4 **)(iVar1 + iVar8 * 4) = puVar5;
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        *puVar5 = 0;
      }
    }
  }
  return iVar4;
}


// =========================================================================
// Function: FUN_718c0748
// Entry: 0x718c0748 | Size: 616 bytes
// =========================================================================

void FUN_718c0748(int *param_1,uint param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ushort *puVar8;
  bool bVar9;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  int iStack_14;
  
  uVar6 = param_1[1];
  uStack_16 = (undefined2)param_2;
  if (uVar6 == 0) {
    puVar1 = &uStack_1a;
    uStack_1a = uStack_16;
    uStack_18 = uStack_16;
LAB_718c07d8:
    FUN_718c27b0(param_1,&uStack_16,puVar1);
    return;
  }
  iVar7 = *param_1;
  iVar3 = uVar6 - 1;
  uVar4 = (int)uVar6 / 2;
  uVar2 = 0;
  do {
    uVar5 = (uint)*(ushort *)(iVar7 + uVar4 * 4);
    if (uVar5 == param_2) {
      if (uVar4 == uVar6) goto LAB_718c07ac;
      goto LAB_718c07f4;
    }
    if (uVar5 < param_2) {
      uVar2 = uVar4 + 1;
    }
    if (param_2 < uVar5) {
      iVar3 = uVar4 - 1;
    }
    uVar4 = uVar2 + (int)(iVar3 - uVar2) / 2;
  } while ((int)uVar2 <= iVar3);
  uVar4 = uVar2;
  if (uVar2 == uVar6) {
LAB_718c07ac:
    iVar7 = iVar7 + uVar6 * 4;
    uVar6 = *(ushort *)(iVar7 + -2) + 1;
    if (uVar6 == param_2) {
      *(short *)(iVar7 + -2) = (short)uVar6;
      return;
    }
    if (uVar6 < param_2) {
      puVar1 = &uStack_1e;
      uStack_1e = uStack_16;
      uStack_1c = uStack_16;
      goto LAB_718c07d8;
    }
  }
  else {
LAB_718c07f4:
    puVar8 = (ushort *)(iVar7 + uVar4 * 4);
    uVar2 = (uint)*puVar8;
    uVar6 = uVar2 - 1;
    if ((int)param_2 < (int)uVar6) {
      iStack_14 = param_2 * 0x10001;
      FUN_718c29ec(param_1,&iStack_14);
      return;
    }
    if (uVar6 == param_2) {
      *puVar8 = (ushort)uVar6;
      if ((uVar4 != 0) &&
         (puVar8 = (ushort *)(*param_1 + uVar4 * 4), puVar8[-1] + 1 == (uint)*puVar8)) {
        puVar8[-1] = puVar8[1];
        if (uVar4 < (uint)param_1[1]) {
          iVar7 = *param_1 + uVar4 * 4;
          imp___aeabi_memmove(iVar7,iVar7 + 4,(param_1[1] + ~uVar4) * 4);
          param_1[1] = param_1[1] + -1;
          return;
        }
      }
    }
    else {
      uVar6 = (uint)puVar8[1];
      bVar9 = param_2 < uVar2 || uVar6 < param_2;
      if (param_2 < uVar2 || uVar6 < param_2) {
        uVar6 = uVar6 + 1;
        bVar9 = uVar6 == param_2;
      }
      if (((bVar9) && (puVar8[1] = (ushort)uVar6, uVar4 < param_1[1] - 1U)) &&
         (puVar1 = (undefined2 *)(*param_1 + uVar4 * 4),
         (ushort)puVar1[1] + 1 == (uint)(ushort)puVar1[2])) {
        puVar1[2] = *puVar1;
        if (uVar4 < (uint)param_1[1]) {
          iVar7 = *param_1 + uVar4 * 4;
          imp___aeabi_memmove(iVar7,iVar7 + 4,(param_1[1] + ~uVar4) * 4);
          param_1[1] = param_1[1] + -1;
          return;
        }
        return;
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_718c09b0
// Entry: 0x718c09b0 | Size: 328 bytes
// =========================================================================

uint FUN_718c09b0(int *param_1,ushort *param_2,undefined4 *param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = param_1[1];
  if (uVar6 == 0) {
    uVar4 = 0;
  }
  else {
    iVar5 = uVar6 - 1;
    iVar2 = (int)uVar6 / 2;
    uVar4 = 0;
    do {
      uVar1 = *(ushort *)(**(int **)(*(int *)(*param_1 + iVar2 * 4) + 8) + 0x14);
      if (*param_2 == uVar1) {
        return 0xffffffff;
      }
      if (*param_2 < uVar1) {
        iVar5 = iVar2 + -1;
      }
      else {
        uVar4 = iVar2 + 1;
      }
      iVar2 = uVar4 + (int)(iVar5 - uVar4) / 2;
    } while ((int)uVar4 <= iVar5);
  }
  uVar3 = *param_3;
  if (uVar4 < uVar6) {
    FUN_718c2b30(param_1,uVar3,uVar4);
    return uVar4;
  }
  if (uVar6 == param_1[2]) {
    uVar4 = uVar6 << 1;
    if (uVar6 == 0) {
      uVar4 = 0x10;
    }
    iVar2 = uVar4 << 2;
    param_1[2] = uVar4;
    if (0x3fffffff < uVar4) {
      iVar2 = -1;
    }
    iVar2 = thunk__IBDl(iVar2);
    iVar5 = *param_1;
    imp___aeabi_memcpy(iVar2,iVar5,uVar6 << 2);
    if (iVar5 != 0) {
      dGrRHE(iVar5);
      uVar6 = param_1[1];
    }
    *param_1 = iVar2;
  }
  else {
    iVar2 = *param_1;
  }
  *(undefined4 *)(iVar2 + uVar6 * 4) = uVar3;
  uVar6 = param_1[1];
  param_1[1] = uVar6 + 1;
  return uVar6;
}


// =========================================================================
// Function: FUN_718c0b50
// Entry: 0x718c0b50 | Size: 320 bytes
// =========================================================================

uint FUN_718c0b50(int *param_1,uint *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = param_1[1];
  if (uVar6 == 0) {
    uVar3 = 0;
  }
  else {
    iVar4 = uVar6 - 1;
    iVar1 = (int)uVar6 / 2;
    uVar3 = 0;
    do {
      uVar5 = *(uint *)(*(int *)(*param_1 + iVar1 * 4) + 0x18);
      if (*param_2 == uVar5) {
        return 0xffffffff;
      }
      if (*param_2 < uVar5) {
        iVar4 = iVar1 + -1;
      }
      else {
        uVar3 = iVar1 + 1;
      }
      iVar1 = uVar3 + (int)(iVar4 - uVar3) / 2;
    } while ((int)uVar3 <= iVar4);
  }
  uVar2 = *param_3;
  if (uVar3 < uVar6) {
    FUN_718c2c58(param_1,uVar2,uVar3);
    return uVar3;
  }
  if (uVar6 == param_1[2]) {
    uVar3 = uVar6 << 1;
    if (uVar6 == 0) {
      uVar3 = 0x10;
    }
    iVar1 = uVar3 << 2;
    param_1[2] = uVar3;
    if (0x3fffffff < uVar3) {
      iVar1 = -1;
    }
    iVar1 = thunk__IBDl(iVar1);
    iVar4 = *param_1;
    imp___aeabi_memcpy(iVar1,iVar4,uVar6 << 2);
    if (iVar4 != 0) {
      dGrRHE(iVar4);
      uVar6 = param_1[1];
    }
    *param_1 = iVar1;
  }
  else {
    iVar1 = *param_1;
  }
  *(undefined4 *)(iVar1 + uVar6 * 4) = uVar2;
  uVar6 = param_1[1];
  param_1[1] = uVar6 + 1;
  return uVar6;
}


// =========================================================================
// Function: FUN_718c0ce8
// Entry: 0x718c0ce8 | Size: 8 bytes
// =========================================================================

undefined1 FUN_718c0ce8(int param_1)

{
  return *(undefined1 *)(param_1 + 0x2ff);
}


// =========================================================================
// Function: FUN_718c0d08
// Entry: 0x718c0d08 | Size: 8 bytes
// =========================================================================

undefined1 FUN_718c0d08(int param_1)

{
  return *(undefined1 *)(param_1 + 0x2fe);
}


// =========================================================================
// Function: FUN_718c0d28
// Entry: 0x718c0d28 | Size: 232 bytes
// =========================================================================

int * FUN_718c0d28(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = *(uint *)(param_1 + 0x70) - *(uint *)(param_1 + 0x6c);
  if (*(uint *)(param_1 + 0x70) < *(uint *)(param_1 + 0x6c)) {
    iVar1 = iVar1 + *(int *)(param_1 + 0x74);
  }
  *(int *)(param_1 + 0x310) = iVar1;
  iVar1 = *(uint *)(param_1 + 0x80) - *(uint *)(param_1 + 0x7c);
  if (*(uint *)(param_1 + 0x80) < *(uint *)(param_1 + 0x7c)) {
    iVar1 = iVar1 + *(int *)(param_1 + 0x84);
  }
  iVar2 = *(uint *)(param_1 + 0x90) - *(uint *)(param_1 + 0x8c);
  *(undefined4 *)(param_1 + 0x358) = *(undefined4 *)(param_1 + 0x20);
  if (*(uint *)(param_1 + 0x90) < *(uint *)(param_1 + 0x8c)) {
    iVar2 = iVar2 + *(int *)(param_1 + 0x94);
  }
  iVar4 = *(uint *)(param_1 + 0xa0) - *(uint *)(param_1 + 0x9c);
  *(int *)(param_1 + 0x314) = iVar1;
  if (*(uint *)(param_1 + 0xa0) < *(uint *)(param_1 + 0x9c)) {
    iVar4 = iVar4 + *(int *)(param_1 + 0xa4);
  }
  *(int *)(param_1 + 0x31c) = iVar4;
  iVar4 = *(int *)(param_1 + 0xac);
  iVar1 = 0;
  *(int *)(param_1 + 0x318) = iVar2;
  *(undefined4 *)(param_1 + 0x3c0) = 0;
  if (iVar4 != 0) {
    piVar3 = *(int **)(param_1 + 0xa8);
    do {
      iVar4 = iVar4 + -1;
      iVar1 = iVar1 + *(int *)(*piVar3 + 0xc);
      *(int *)(param_1 + 0x3c0) = iVar1;
      piVar3 = piVar3 + 1;
    } while (iVar4 != 0);
  }
  *(undefined4 *)(param_1 + 0x3c8) = *(undefined4 *)(param_1 + 0x428);
  *(undefined4 *)(param_1 + 0x3cc) = *(undefined4 *)(param_1 + 0x42c);
  iVar2 = *(uint *)(param_1 + 0x14) - *(uint *)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0x54);
  if (*(uint *)(param_1 + 0x14) < *(uint *)(param_1 + 0x10)) {
    iVar2 = iVar2 + *(int *)(param_1 + 0x18);
  }
  *(int *)(param_1 + 0x3c4) = iVar2;
  iVar2 = 0;
  for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 200)) {
    iVar2 = *(int *)(iVar1 + 4) + iVar2;
  }
  *(int *)(param_1 + 0x370) = iVar2;
  return (int *)(param_1 + 0x310);
}


// =========================================================================
// Function: FUN_718c0f58
// Entry: 0x718c0f58 | Size: 624 bytes
// =========================================================================

void FUN_718c0f58(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int extraout_r1;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  int iVar11;
  
  puVar4 = (undefined4 *)thunk__IBDl(0x40);
  uVar7 = 0x10;
  uVar10 = 1;
  uVar6 = 0;
  *puVar4 = *(undefined4 *)(param_1 + 0x10);
  do {
    uVar2 = uVar6 + 1;
    uVar6 = 0;
    if (uVar2 != uVar7) {
      uVar6 = uVar2;
    }
    uVar2 = uVar6;
    if (uVar6 == 0) {
      uVar2 = uVar7;
    }
    pcVar9 = (char *)puVar4[uVar2 - 1];
    if ((*pcVar9 == '\0') && (-1 < *(int *)(pcVar9 + 4))) {
      iVar11 = 0;
      uVar2 = uVar7;
      do {
        if (uVar2 == 0) {
          puVar4 = (undefined4 *)thunk__IBDl(0x40);
          uVar6 = 0;
          uVar10 = 1;
          *puVar4 = *(undefined4 *)(pcVar9 + iVar11 * 4 + 0xd0);
          uVar7 = 0x10;
        }
        else {
          puVar4[uVar10] = *(undefined4 *)(pcVar9 + iVar11 * 4 + 0xd0);
          uVar7 = uVar10 + 1;
          uVar10 = 0;
          if (uVar7 != uVar2) {
            uVar10 = uVar7;
          }
          uVar7 = uVar2;
          if (uVar10 == uVar6) {
            iVar3 = -1;
            if ((uVar2 & 0x60000000) == 0) {
              iVar3 = uVar2 << 3;
            }
            puVar5 = (undefined4 *)thunk__IBDl(iVar3);
            uVar7 = 0;
            do {
              FUN_71ba33fc(uVar6 + uVar7,uVar2);
              puVar5[uVar7] = puVar4[extraout_r1];
              uVar7 = uVar7 + 1;
            } while (uVar2 != uVar7);
            dGrRHE(puVar4);
            uVar6 = 0;
            uVar7 = uVar2 << 1;
            uVar10 = uVar2;
            puVar4 = puVar5;
          }
        }
        bVar1 = iVar11 < *(int *)(pcVar9 + 4);
        iVar11 = iVar11 + 1;
        uVar2 = uVar7;
      } while (bVar1);
    }
    iVar11 = *(int *)(param_1 + 8);
    if (iVar11 == *(int *)(param_1 + 0xc)) {
      uVar2 = iVar11 << 1;
      if (iVar11 == 0) {
        uVar2 = 0x10;
      }
      iVar3 = uVar2 << 2;
      *(uint *)(param_1 + 0xc) = uVar2;
      if (0x3fffffff < uVar2) {
        iVar3 = -1;
      }
      iVar3 = thunk__IBDl(iVar3);
      iVar8 = *(int *)(param_1 + 4);
      imp___aeabi_memcpy(iVar3,iVar8,iVar11 << 2);
      if (iVar8 != 0) {
        dGrRHE(iVar8);
        iVar11 = *(int *)(param_1 + 8);
      }
      *(int *)(param_1 + 4) = iVar3;
    }
    else {
      iVar3 = *(int *)(param_1 + 4);
    }
    *(char **)(iVar3 + iVar11 * 4) = pcVar9;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    iVar11 = 0;
    pcVar9[0] = '\0';
    pcVar9[1] = '\0';
    pcVar9[2] = '\0';
    pcVar9[3] = '\0';
    if (uVar10 < uVar6) {
      iVar11 = -uVar7;
    }
  } while (uVar10 - uVar6 != iVar11);
  if (uVar7 == 0) {
    return;
  }
  thunk_dGrRHE(puVar4);
  return;
}


// =========================================================================
// Function: FUN_718c1274
// Entry: 0x718c1274 | Size: 1004 bytes
// =========================================================================

undefined4
FUN_718c1274(undefined4 param_1,uint param_2,undefined4 *param_3,char *param_4,ushort *param_5,
            undefined1 *param_6)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  
  iVar10 = *(int *)(param_4 + 4);
  iVar5 = 0;
  iVar9 = iVar10 + -1;
  iVar8 = iVar10 / 2;
  do {
    uVar6 = (uint)*(ushort *)(param_4 + iVar8 * 2 + 8);
    if (uVar6 == param_2) {
      if (*param_4 != '\0') goto LAB_718c12f4;
      iVar5 = iVar8 + 1;
      goto LAB_718c1304;
    }
    if (uVar6 < param_2) {
      iVar5 = iVar8 + 1;
    }
    if (param_2 < uVar6) {
      iVar9 = iVar8 + -1;
    }
    iVar8 = iVar5 + (iVar9 - iVar5) / 2;
  } while (iVar5 <= iVar9);
  if (*param_4 != '\0') {
    pcVar12 = (char *)0x0;
    goto LAB_718c1514;
  }
LAB_718c1304:
  if ((**(char **)(param_4 + iVar5 * 4 + 0xd0) == '\0') ||
     (*(int *)(*(char **)(param_4 + iVar5 * 4 + 0xd0) + 4) != 0x20)) {
LAB_71c163ec:
    pcVar12 = (char *)FUN_718c1274();
    if (((0 < iVar5) && (*(int *)(param_5 + 2) == 1)) &&
       (*(ushort *)(param_4 + iVar5 * 2 + 6) == *param_5)) {
      *(ushort *)(param_4 + iVar5 * 2 + 6) = param_5[1];
    }
    if (pcVar12 != (char *)0x0) {
      if (*pcVar12 == '\0') {
        *(int *)(pcVar12 + 4) = *(int *)(pcVar12 + 4) + -1;
        uVar2 = *param_5;
      }
      else {
        uVar2 = *(ushort *)(pcVar12 + 8);
      }
      param_2 = (uint)uVar2;
LAB_718c1514:
      uVar3 = FUN_718c179c(param_1,param_2,param_3,iVar5,pcVar12,param_4,param_5);
      return uVar3;
    }
  }
  else {
    if (uVar6 == param_2) {
LAB_718c12f4:
      *param_6 = 0;
      return 0;
    }
    uVar2 = (ushort)param_2;
    if ((iVar5 < 1) ||
       (iVar8 = iVar5 + -1, 0x1f < *(int *)(*(int *)(param_4 + iVar8 * 4 + 0xd0) + 4))) {
      if ((iVar10 <= iVar5) ||
         (iVar8 = iVar5 + 1, 0x1f < *(int *)(*(int *)(param_4 + iVar8 * 4 + 0xd0) + 4)))
      goto LAB_71c163ec;
      param_5[2] = 1;
      param_5[3] = 0;
      if (param_2 < *(ushort *)
                     (*(int *)(param_4 + iVar5 * 4 + 0xd0) +
                      *(int *)(*(int *)(param_4 + iVar5 * 4 + 0xd0) + 4) * 2 + 6)) {
        FUN_718c1de4(param_1,param_4,iVar5,param_5);
        iVar11 = *(int *)(param_4 + iVar5 * 4 + 0xd0);
        iVar10 = 0;
        iVar7 = *(int *)(iVar11 + 4) + -1;
        iVar9 = *(int *)(iVar11 + 4) / 2;
        do {
          uVar6 = (uint)*(ushort *)(iVar11 + 8 + iVar9 * 2);
          iVar4 = iVar9;
          if (uVar6 == param_2) break;
          if (uVar6 < param_2) {
            iVar10 = iVar9 + 1;
          }
          if (param_2 < uVar6) {
            iVar7 = iVar9 + -1;
          }
          iVar9 = iVar10 + (iVar7 - iVar10) / 2;
          iVar4 = iVar10;
        } while (iVar10 <= iVar7);
        FUN_718c179c(param_1,param_2,param_3,iVar4,0,iVar11,0);
      }
      else {
        *param_5 = *(ushort *)(*(int *)(param_4 + iVar8 * 4 + 0xd0) + 8);
        FUN_718c179c();
        param_5[1] = uVar2;
      }
      iVar9 = *(int *)(param_4 + iVar8 * 4 + 0xd0);
    }
    else {
      param_5[2] = 1;
      param_5[3] = 0;
      iVar9 = *(int *)(param_4 + iVar5 * 4 + 0xd0);
      uVar1 = *(ushort *)(iVar9 + 8);
      if (uVar1 < param_2) {
        FUN_718c16e8(param_1,param_4,iVar5,param_5);
        iVar11 = *(int *)(param_4 + iVar5 * 4 + 0xd0);
        iVar10 = 0;
        iVar7 = *(int *)(iVar11 + 4) + -1;
        iVar9 = *(int *)(iVar11 + 4) / 2;
        do {
          uVar6 = (uint)*(ushort *)(iVar11 + 8 + iVar9 * 2);
          iVar4 = iVar9;
          if (uVar6 == param_2) break;
          if (uVar6 < param_2) {
            iVar10 = iVar9 + 1;
          }
          if (param_2 < uVar6) {
            iVar7 = iVar9 + -1;
          }
          iVar9 = iVar10 + (iVar7 - iVar10) / 2;
          iVar4 = iVar10;
        } while (iVar10 <= iVar7);
        FUN_718c179c(param_1,param_2,param_3,iVar4,0,iVar11,0);
      }
      else {
        iVar10 = *(int *)(param_4 + iVar8 * 4 + 0xd0);
        param_5[1] = uVar2;
        *param_5 = uVar1;
        *(undefined2 *)(iVar10 + *(int *)(iVar10 + 4) * 2 + 8) = *(undefined2 *)(iVar9 + 8);
        *(undefined4 *)(iVar10 + *(int *)(iVar10 + 4) * 4 + 0x48) = *(undefined4 *)(iVar9 + 0x48);
        *(int *)(iVar10 + 4) = *(int *)(iVar10 + 4) + 1;
        *(ushort *)(iVar9 + 8) = uVar2;
        *(undefined4 *)(iVar9 + 0x48) = *param_3;
      }
      iVar9 = *(int *)(param_4 + iVar5 * 4 + 0xd0);
      iVar5 = iVar8;
    }
    *(undefined2 *)(param_4 + iVar5 * 2 + 8) = *(undefined2 *)(iVar9 + 8);
  }
  return 0;
}


// =========================================================================
// Function: FUN_718c16e8
// Entry: 0x718c16e8 | Size: 156 bytes
// =========================================================================

void FUN_718c16e8(undefined4 param_1,int param_2,int param_3,undefined2 *param_4)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = *(int *)(param_2 + 0xd0 + param_3 * 4);
  iVar4 = *(int *)(param_2 + 0xd0 + (param_3 + -1) * 4);
  uVar1 = *(undefined2 *)(iVar3 + 8);
  *param_4 = uVar1;
  *(undefined2 *)(iVar4 + *(int *)(iVar4 + 4) * 2 + 8) = uVar1;
  *(undefined4 *)(iVar4 + *(int *)(iVar4 + 4) * 4 + 0x48) = *(undefined4 *)(iVar3 + 0x48);
  *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
  iVar4 = *(int *)(iVar3 + 4) + -1;
  if (1 < *(int *)(iVar3 + 4)) {
    iVar2 = 0;
    iVar5 = iVar4;
    do {
      iVar5 = iVar5 + -1;
      *(undefined2 *)((iVar3 - iVar2) + 8) = *(undefined2 *)((iVar3 - iVar2) + 10);
      iVar6 = iVar3 + iVar2 * -2;
      iVar2 = iVar2 + -2;
      *(undefined4 *)(iVar6 + 0x48) = *(undefined4 *)(iVar6 + 0x4c);
    } while (iVar5 != 0);
  }
  uVar1 = *(undefined2 *)(iVar3 + 8);
  *(int *)(iVar3 + 4) = iVar4;
  *(undefined2 *)(param_2 + (param_3 + -1) * 2 + 8) = uVar1;
  param_4[1] = uVar1;
  return;
}


// =========================================================================
// Function: FUN_718c179c
// Entry: 0x718c179c | Size: 1520 bytes
// =========================================================================

char * FUN_718c179c(int param_1,uint param_2,undefined4 *param_3,uint param_4,undefined4 param_5,
                   char *param_6,undefined2 *param_7)

{
  bool bVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  uint uVar11;
  
  iVar4 = *(int *)(param_6 + 4);
  uVar3 = (undefined2)param_2;
  if (iVar4 < 0x20) {
    if ((int)param_4 < iVar4) {
      pcVar5 = param_6 + iVar4 * 2 + 8;
      do {
        iVar4 = iVar4 + -1;
        *(undefined2 *)pcVar5 = *(undefined2 *)(pcVar5 + -2);
        pcVar5 = pcVar5 + -2;
      } while ((int)param_4 < iVar4);
    }
    iVar4 = *(int *)(param_6 + 4);
    if (*param_6 == '\0') {
      if ((int)param_4 < iVar4) {
        do {
          *(undefined4 *)(param_6 + iVar4 * 4 + 0xd4) = *(undefined4 *)(param_6 + iVar4 * 4 + 0xd0);
          bVar1 = (int)(param_4 + 1) < iVar4;
          iVar4 = iVar4 + -1;
        } while (bVar1);
      }
    }
    else {
      for (; (int)param_4 < iVar4; iVar4 = iVar4 + -1) {
        *(undefined4 *)(param_6 + iVar4 * 4 + 0x48) = *(undefined4 *)(param_6 + iVar4 * 4 + 0x44);
      }
    }
    *(undefined2 *)(param_6 + param_4 * 2 + 8) = uVar3;
    if (*param_6 == '\0') {
      *(undefined4 *)(param_6 + param_4 * 4 + 0xd4) = param_5;
    }
    else {
      *(undefined4 *)(param_6 + param_4 * 4 + 0x48) = *param_3;
    }
    *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
    return (char *)0x0;
  }
  iVar4 = *(int *)(param_1 + 8);
  if (iVar4 == 0) {
    pcVar5 = (char *)thunk_MwhHq(0x154);
  }
  else {
    pcVar5 = *(char **)(*(int *)(param_1 + 4) + iVar4 * 4 + -4);
    *(int *)(param_1 + 8) = iVar4 + -1;
  }
  cVar2 = *param_6;
  *pcVar5 = cVar2;
  if (cVar2 != '\0') {
    iVar4 = *(int *)(param_6 + 200);
    *(int *)(pcVar5 + 200) = iVar4;
    if (iVar4 != 0) {
      *(char **)(iVar4 + 0xcc) = pcVar5;
    }
    *(char **)(pcVar5 + 0xcc) = param_6;
    *(char **)(param_6 + 200) = pcVar5;
  }
  if ((int)param_4 < 0x10) {
    *(undefined2 *)(pcVar5 + 8) = *(undefined2 *)(param_6 + 0x26);
    *(undefined2 *)(pcVar5 + 10) = *(undefined2 *)(param_6 + 0x28);
    *(undefined2 *)(pcVar5 + 0xc) = *(undefined2 *)(param_6 + 0x2a);
    *(undefined2 *)(pcVar5 + 0xe) = *(undefined2 *)(param_6 + 0x2c);
    *(undefined2 *)(pcVar5 + 0x10) = *(undefined2 *)(param_6 + 0x2e);
    *(undefined2 *)(pcVar5 + 0x12) = *(undefined2 *)(param_6 + 0x30);
    *(undefined2 *)(pcVar5 + 0x14) = *(undefined2 *)(param_6 + 0x32);
    *(undefined2 *)(pcVar5 + 0x16) = *(undefined2 *)(param_6 + 0x34);
    *(undefined2 *)(pcVar5 + 0x18) = *(undefined2 *)(param_6 + 0x36);
    *(undefined2 *)(pcVar5 + 0x1a) = *(undefined2 *)(param_6 + 0x38);
    *(undefined2 *)(pcVar5 + 0x1c) = *(undefined2 *)(param_6 + 0x3a);
    *(undefined2 *)(pcVar5 + 0x1e) = *(undefined2 *)(param_6 + 0x3c);
    *(undefined2 *)(pcVar5 + 0x20) = *(undefined2 *)(param_6 + 0x3e);
    *(undefined2 *)(pcVar5 + 0x22) = *(undefined2 *)(param_6 + 0x40);
    *(undefined2 *)(pcVar5 + 0x24) = *(undefined2 *)(param_6 + 0x42);
    *(undefined2 *)(pcVar5 + 0x26) = *(undefined2 *)(param_6 + 0x44);
    *(undefined2 *)(pcVar5 + 0x28) = *(undefined2 *)(param_6 + 0x46);
    if (*param_6 == '\0') {
      *(undefined4 *)(pcVar5 + 0xd0) = *(undefined4 *)(param_6 + 0x110);
      *(undefined4 *)(pcVar5 + 0xd4) = *(undefined4 *)(param_6 + 0x114);
      *(undefined4 *)(pcVar5 + 0xd8) = *(undefined4 *)(param_6 + 0x118);
      *(undefined4 *)(pcVar5 + 0xdc) = *(undefined4 *)(param_6 + 0x11c);
      *(undefined4 *)(pcVar5 + 0xe0) = *(undefined4 *)(param_6 + 0x120);
      *(undefined4 *)(pcVar5 + 0xe4) = *(undefined4 *)(param_6 + 0x124);
      *(undefined4 *)(pcVar5 + 0xe8) = *(undefined4 *)(param_6 + 0x128);
      *(undefined4 *)(pcVar5 + 0xec) = *(undefined4 *)(param_6 + 300);
      *(undefined4 *)(pcVar5 + 0xf0) = *(undefined4 *)(param_6 + 0x130);
      *(undefined4 *)(pcVar5 + 0xf4) = *(undefined4 *)(param_6 + 0x134);
      *(undefined4 *)(pcVar5 + 0xf8) = *(undefined4 *)(param_6 + 0x138);
      *(undefined4 *)(pcVar5 + 0xfc) = *(undefined4 *)(param_6 + 0x13c);
      *(undefined4 *)(pcVar5 + 0x100) = *(undefined4 *)(param_6 + 0x140);
      *(undefined4 *)(pcVar5 + 0x104) = *(undefined4 *)(param_6 + 0x144);
      *(undefined4 *)(pcVar5 + 0x108) = *(undefined4 *)(param_6 + 0x148);
      *(undefined4 *)(pcVar5 + 0x10c) = *(undefined4 *)(param_6 + 0x14c);
      *(undefined4 *)(pcVar5 + 0x110) = *(undefined4 *)(param_6 + 0x150);
      *(undefined4 *)(param_7 + 2) = 2;
      *param_7 = *(undefined2 *)(pcVar5 + 8);
      imp___aeabi_memmove(pcVar5 + 8,pcVar5 + 10,0x20);
    }
    else {
      *(undefined4 *)(pcVar5 + 0x48) = *(undefined4 *)(param_6 + 0x84);
      *(undefined4 *)(pcVar5 + 0x4c) = *(undefined4 *)(param_6 + 0x88);
      *(undefined4 *)(pcVar5 + 0x50) = *(undefined4 *)(param_6 + 0x8c);
      *(undefined4 *)(pcVar5 + 0x54) = *(undefined4 *)(param_6 + 0x90);
      *(undefined4 *)(pcVar5 + 0x58) = *(undefined4 *)(param_6 + 0x94);
      *(undefined4 *)(pcVar5 + 0x5c) = *(undefined4 *)(param_6 + 0x98);
      *(undefined4 *)(pcVar5 + 0x60) = *(undefined4 *)(param_6 + 0x9c);
      *(undefined4 *)(pcVar5 + 100) = *(undefined4 *)(param_6 + 0xa0);
      *(undefined4 *)(pcVar5 + 0x68) = *(undefined4 *)(param_6 + 0xa4);
      *(undefined4 *)(pcVar5 + 0x6c) = *(undefined4 *)(param_6 + 0xa8);
      *(undefined4 *)(pcVar5 + 0x70) = *(undefined4 *)(param_6 + 0xac);
      *(undefined4 *)(pcVar5 + 0x74) = *(undefined4 *)(param_6 + 0xb0);
      *(undefined4 *)(pcVar5 + 0x78) = *(undefined4 *)(param_6 + 0xb4);
      *(undefined4 *)(pcVar5 + 0x7c) = *(undefined4 *)(param_6 + 0xb8);
      *(undefined4 *)(pcVar5 + 0x80) = *(undefined4 *)(param_6 + 0xbc);
      *(undefined4 *)(pcVar5 + 0x84) = *(undefined4 *)(param_6 + 0xc0);
      *(undefined4 *)(pcVar5 + 0x88) = *(undefined4 *)(param_6 + 0xc4);
    }
    param_6[4] = '\x0f';
    param_6[5] = '\0';
    param_6[6] = '\0';
    param_6[7] = '\0';
    iVar4 = 0;
    iVar7 = 0xe;
    iVar8 = 7;
    do {
      uVar11 = (uint)*(ushort *)(param_6 + iVar8 * 2 + 8);
      iVar9 = iVar8;
      if (uVar11 == param_2) break;
      if (uVar11 < param_2) {
        iVar4 = iVar8 + 1;
      }
      if (param_2 < uVar11) {
        iVar7 = iVar8 + -1;
      }
      iVar8 = iVar4 + (iVar7 - iVar4) / 2;
      iVar9 = iVar4;
    } while (iVar4 <= iVar7);
    FUN_718c179c(param_1,param_2,param_3,iVar9,param_5,param_6,param_7);
    iVar4 = 0x11;
    goto LAB_718c1d50;
  }
  iVar4 = param_4 - 0x10;
  if (iVar4 == 0) {
    iVar4 = 0;
    *(undefined2 *)(pcVar5 + 8) = uVar3;
    uVar11 = 0x10;
LAB_718c1a70:
    iVar7 = uVar11 << 1;
    pcVar6 = pcVar5 + iVar4 * 2 + 10;
    do {
      iVar4 = iVar7 + 8;
      iVar7 = iVar7 + 2;
      *(undefined2 *)pcVar6 = *(undefined2 *)(param_6 + iVar4);
      pcVar6 = pcVar6 + 2;
    } while (iVar7 != 0x40);
  }
  else {
    uVar11 = 0x10;
    pcVar6 = pcVar5 + 8;
    pcVar10 = param_6 + 0x28;
    do {
      uVar11 = uVar11 + 1;
      *(undefined2 *)pcVar6 = *(undefined2 *)pcVar10;
      pcVar6 = pcVar6 + 2;
      pcVar10 = pcVar10 + 2;
    } while (param_4 != uVar11);
    *(undefined2 *)(pcVar5 + iVar4 * 2 + 8) = uVar3;
    uVar11 = param_4;
    if (param_4 < 0x20) goto LAB_718c1a70;
  }
  pcVar6 = pcVar5 + 8;
  if (*param_6 == '\0') {
    if (param_4 == 0x10) {
      iVar8 = 0x10;
      iVar7 = 0;
    }
    else {
      if ((int)param_4 < 0x12) {
        param_4 = 0x11;
      }
      iVar7 = param_4 - 0x10;
      iVar4 = 0;
      do {
        iVar8 = iVar4;
        *(undefined4 *)(pcVar5 + iVar8 * 4 + 0xd0) = *(undefined4 *)(param_6 + iVar8 * 4 + 0x114);
        iVar4 = iVar8 + 1;
      } while (iVar7 != iVar8 + 1);
      iVar8 = iVar8 + 0x11;
    }
    *(undefined4 *)(pcVar5 + iVar7 * 4 + 0xd0) = param_5;
    if (iVar8 < *(int *)(param_6 + 4)) {
      do {
        iVar4 = iVar7;
        iVar7 = iVar8 * 4;
        iVar8 = iVar8 + 1;
        *(undefined4 *)(pcVar5 + iVar4 * 4 + 0xd4) = *(undefined4 *)(param_6 + iVar7 + 0xd4);
        iVar7 = iVar4 + 1;
      } while (iVar8 < *(int *)(param_6 + 4));
      iVar4 = iVar4 + 2;
      *(undefined4 *)(param_7 + 2) = 2;
      *param_7 = *(undefined2 *)pcVar6;
    }
    else {
      iVar4 = iVar7 + 1;
      *(undefined4 *)(param_7 + 2) = 2;
      *param_7 = *(undefined2 *)pcVar6;
      if (iVar7 == 0) goto LAB_718c1d48;
    }
    imp___aeabi_memmove(pcVar6,pcVar5 + 10,iVar7 << 1);
  }
  else {
    if (param_4 == 0x10) {
      iVar8 = 0x10;
      *(undefined4 *)(pcVar5 + 0x48) = *param_3;
      iVar7 = 0;
      iVar9 = 1;
    }
    else {
      if ((int)param_4 < 0x12) {
        param_4 = 0x11;
      }
      iVar7 = param_4 - 0x10;
      iVar4 = 0;
      do {
        iVar8 = iVar4;
        *(undefined4 *)(pcVar5 + 0x48 + iVar8 * 4) = *(undefined4 *)(param_6 + iVar8 * 4 + 0x88);
        iVar4 = iVar8 + 1;
      } while (iVar7 != iVar8 + 1);
      iVar4 = param_4 - 0xf;
      *(undefined4 *)(pcVar5 + iVar7 * 4 + 0x48) = *param_3;
      if (0x1e < iVar8 + 0x10U) goto LAB_718c1d48;
      iVar8 = iVar8 + 0x11;
      iVar9 = iVar4;
    }
    iVar4 = (iVar7 + 0x21) - iVar8;
    iVar7 = ((iVar7 + 0x21) - iVar9) - iVar8;
    pcVar6 = param_6 + iVar8 * 4 + 0x48;
    pcVar10 = pcVar5 + iVar9 * 4 + 0x48;
    do {
      iVar7 = iVar7 + -1;
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar10 = pcVar10 + 4;
    } while (iVar7 != 0);
  }
LAB_718c1d48:
  param_6[4] = '\x10';
  param_6[5] = '\0';
  param_6[6] = '\0';
  param_6[7] = '\0';
LAB_718c1d50:
  *(int *)(pcVar5 + 4) = iVar4;
  return pcVar5;
}


// =========================================================================
// Function: FUN_718c1de4
// Entry: 0x718c1de4 | Size: 160 bytes
// =========================================================================

void FUN_718c1de4(undefined4 param_1,int param_2,int param_3,undefined2 *param_4)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = param_2 + param_3 * 4;
  iVar6 = *(int *)(iVar2 + 0xd0);
  iVar7 = *(int *)(iVar2 + 0xd4);
  *param_4 = *(undefined2 *)(iVar7 + 8);
  iVar2 = *(int *)(iVar7 + 4);
  if (0 < iVar2) {
    iVar3 = iVar2 << 1;
    uVar5 = iVar2 + 1;
    do {
      uVar5 = uVar5 - 1;
      *(undefined2 *)(iVar7 + iVar3 + 8) = *(undefined2 *)(iVar7 + iVar3 + 6);
      iVar2 = iVar7 + iVar3 * 2;
      iVar3 = iVar3 + -2;
      *(undefined4 *)(iVar2 + 0x48) = *(undefined4 *)(iVar2 + 0x44);
    } while (1 < uVar5);
    iVar2 = *(int *)(iVar7 + 4);
  }
  *(undefined2 *)(iVar7 + 8) = *(undefined2 *)(iVar6 + *(int *)(iVar6 + 4) * 2 + 6);
  uVar4 = *(undefined4 *)(iVar6 + *(int *)(iVar6 + 4) * 4 + 0x44);
  *(int *)(iVar7 + 4) = iVar2 + 1;
  *(undefined4 *)(iVar7 + 0x48) = uVar4;
  *(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + -1;
  uVar1 = *(undefined2 *)(iVar7 + 8);
  *(undefined2 *)(param_2 + param_3 * 2 + 8) = uVar1;
  param_4[1] = uVar1;
  return;
}


// =========================================================================
// Function: FUN_718c1e9c
// Entry: 0x718c1e9c | Size: 784 bytes
// =========================================================================

undefined4
FUN_718c1e9c(undefined4 param_1,uint param_2,int param_3,char *param_4,uint param_5,
            undefined2 *param_6,undefined4 *param_7)

{
  char cVar1;
  ushort *puVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  ushort *puVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  
  iVar11 = param_3 + 8;
  iVar12 = 0;
  iVar5 = *(int *)(param_3 + 4) + -1;
  iVar9 = *(int *)(param_3 + 4) / 2;
  do {
    uVar8 = (uint)*(ushort *)(iVar11 + iVar9 * 2);
    iVar6 = iVar9;
    if (uVar8 == param_2) break;
    if (uVar8 < param_2) {
      iVar12 = iVar9 + 1;
    }
    if (param_2 < uVar8) {
      iVar5 = iVar9 + -1;
    }
    iVar9 = iVar12 + (iVar5 - iVar12) / 2;
    iVar6 = iVar12;
  } while (iVar12 <= iVar5);
  iVar9 = iVar6;
  if (uVar8 == param_2) {
    iVar9 = iVar6 + 1;
  }
  piVar13 = (int *)(param_3 + 0xd0);
  pcVar3 = (char *)piVar13[iVar9];
  if (*pcVar3 == '\0') {
    puVar10 = (ushort *)(iVar11 + iVar9 * 2);
    iVar5 = FUN_718c1e9c();
    if (iVar5 == 0) {
      return 0;
    }
    puVar2 = puVar10 + -1;
    if (iVar9 < *(int *)(param_3 + 4)) {
      puVar2 = puVar10;
    }
    if ((uVar8 == param_2) && (*(int *)(param_6 + 2) == 3)) {
      *(undefined4 *)(param_6 + 2) = 0;
      *(undefined2 *)(iVar11 + iVar6 * 2) = *param_6;
      puVar2 = puVar10 + -1;
      if (iVar9 < *(int *)(param_3 + 4)) {
        puVar2 = puVar10;
      }
    }
    if (*param_4 == '\0') {
      return 1;
    }
    param_5 = (uint)*puVar2;
  }
  else {
    iVar6 = *(int *)(pcVar3 + 4) + -1;
    iVar5 = *(int *)(pcVar3 + 4) / 2;
    iVar12 = 0;
    while( true ) {
      uVar8 = (uint)*(ushort *)(pcVar3 + iVar5 * 2 + 8);
      if (uVar8 == param_2) break;
      if (uVar8 < param_2) {
        iVar12 = iVar5 + 1;
      }
      if (param_2 < uVar8) {
        iVar6 = iVar5 + -1;
      }
      iVar5 = iVar12 + (iVar6 - iVar12) / 2;
      if (iVar6 < iVar12) {
        return 0;
      }
    }
    *param_7 = *(undefined4 *)(pcVar3 + iVar5 * 4 + 0x48);
    pcVar3 = (char *)piVar13[iVar9];
    iVar12 = *(int *)(pcVar3 + 4) + -1;
    if (iVar5 < iVar12) {
      iVar6 = iVar5;
      pcVar7 = pcVar3 + iVar5 * 2 + 8;
      do {
        iVar6 = iVar6 + 1;
        *(undefined2 *)pcVar7 = *(undefined2 *)(pcVar7 + 2);
        iVar12 = *(int *)(pcVar3 + 4) + -1;
        pcVar7 = pcVar7 + 2;
      } while (iVar6 < iVar12);
    }
    if (*pcVar3 == '\0') {
      iVar6 = iVar5;
      if (iVar5 < iVar12) {
        do {
          iVar4 = iVar6 + 1;
          *(undefined4 *)(pcVar3 + iVar6 * 4 + 0xd4) = *(undefined4 *)(pcVar3 + iVar6 * 4 + 0xd8);
          iVar12 = *(int *)(pcVar3 + 4) + -1;
          iVar6 = iVar4;
        } while (iVar4 < iVar12);
      }
    }
    else {
      iVar6 = iVar5;
      if (iVar5 < iVar12) {
        do {
          iVar4 = iVar6 + 1;
          *(undefined4 *)(pcVar3 + iVar6 * 4 + 0x48) = *(undefined4 *)(pcVar3 + iVar6 * 4 + 0x4c);
          iVar12 = *(int *)(pcVar3 + 4) + -1;
          iVar6 = iVar4;
        } while (iVar4 < iVar12);
      }
    }
    *(int *)(pcVar3 + 4) = iVar12;
    if (iVar5 == 0) {
      if (iVar9 < 1) {
        if (iVar9 == 0) {
          *(undefined4 *)(param_6 + 2) = 3;
          *param_6 = *(undefined2 *)(*piVar13 + 8);
        }
      }
      else {
        *(undefined2 *)(iVar11 + iVar9 * 2 + -2) = *(undefined2 *)(piVar13[iVar9] + 8);
      }
    }
    cVar1 = '\0';
    if (0xf < *(int *)(piVar13[iVar9] + 4)) goto LAB_718c2184;
    *param_4 = '\x01';
  }
  cVar1 = FUN_718c21e4(param_1,iVar9,param_3,param_5,param_6);
LAB_718c2184:
  *param_4 = cVar1;
  return 1;
}


// =========================================================================
// Function: FUN_718c21e4
// Entry: 0x718c21e4 | Size: 1348 bytes
// =========================================================================

bool FUN_718c21e4(int param_1,int param_2,char *param_3,undefined2 param_4,undefined2 *param_5)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 uVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  
  iVar11 = param_2 + -1;
  if ((param_2 < 1) ||
     (pcVar6 = *(char **)(param_3 + iVar11 * 4 + 0xd0), *(int *)(pcVar6 + 4) < 0x11)) {
    if ((*(int *)(param_3 + 4) <= param_2) ||
       (pcVar6 = *(char **)(param_3 + (param_2 + 1) * 4 + 0xd0), *(int *)(pcVar6 + 4) < 0x11)) {
      iVar9 = param_2;
      if (param_2 < *(int *)(param_3 + 4)) {
        iVar11 = param_2;
        iVar9 = param_2 + 1;
      }
      pcVar10 = *(char **)(param_3 + iVar9 * 4 + 0xd0);
      pcVar6 = *(char **)(param_3 + iVar11 * 4 + 0xd0);
      if (*pcVar6 == '\0') {
        *(undefined2 *)(pcVar6 + *(int *)(pcVar6 + 4) * 2 + 8) = param_4;
        iVar11 = *(int *)(pcVar6 + 4);
        uVar8 = *(undefined4 *)(pcVar10 + 0xd0);
        *(int *)(pcVar6 + 4) = iVar11 + 1;
        *(undefined4 *)(pcVar6 + (iVar11 + 1) * 4 + 0xd0) = uVar8;
        if (0 < *(int *)(pcVar10 + 4)) {
          iVar9 = 0;
          iVar11 = 8;
          do {
            pcVar7 = pcVar10 + iVar11;
            iVar11 = iVar11 + 2;
            *(undefined2 *)(pcVar6 + *(int *)(pcVar6 + 4) * 2 + 8) = *(undefined2 *)pcVar7;
            iVar4 = iVar9 * 4;
            iVar5 = *(int *)(pcVar6 + 4);
            iVar9 = iVar9 + 1;
            uVar8 = *(undefined4 *)(pcVar10 + iVar4 + 0xd4);
            *(int *)(pcVar6 + 4) = iVar5 + 1;
            *(undefined4 *)(pcVar6 + (iVar5 + 1) * 4 + 0xd0) = uVar8;
          } while (iVar9 < *(int *)(pcVar10 + 4));
        }
      }
      else if (0 < *(int *)(pcVar10 + 4)) {
        iVar9 = 0;
        iVar11 = 8;
        do {
          pcVar7 = pcVar10 + iVar11;
          iVar11 = iVar11 + 2;
          *(undefined2 *)(pcVar6 + *(int *)(pcVar6 + 4) * 2 + 8) = *(undefined2 *)pcVar7;
          iVar4 = iVar9 * 4;
          iVar5 = *(int *)(pcVar6 + 4);
          iVar9 = iVar9 + 1;
          uVar8 = *(undefined4 *)(pcVar10 + iVar4 + 0x48);
          *(int *)(pcVar6 + 4) = iVar5 + 1;
          *(undefined4 *)(pcVar6 + iVar5 * 4 + 0x48) = uVar8;
        } while (iVar9 < *(int *)(pcVar10 + 4));
      }
      iVar11 = *(int *)(param_3 + 4);
      if (param_2 < iVar11) {
        iVar11 = iVar11 + -1;
        if (param_2 < iVar11) {
          iVar9 = param_2;
          pcVar7 = param_3 + param_2 * 2 + 8;
          do {
            iVar9 = iVar9 + 1;
            *(undefined2 *)pcVar7 = *(undefined2 *)(pcVar7 + 2);
            iVar11 = *(int *)(param_3 + 4) + -1;
            pcVar7 = pcVar7 + 2;
          } while (iVar9 < iVar11);
        }
        if (*param_3 == '\0') {
          iVar9 = param_2;
          if (param_2 < iVar11) {
            do {
              iVar4 = iVar9 + 1;
              *(undefined4 *)(param_3 + iVar9 * 4 + 0xd4) =
                   *(undefined4 *)(param_3 + iVar9 * 4 + 0xd8);
              iVar11 = *(int *)(param_3 + 4) + -1;
              iVar9 = iVar4;
            } while (iVar4 < iVar11);
          }
        }
        else {
          iVar9 = param_2;
          if (param_2 < iVar11) {
            do {
              iVar4 = iVar9 + 1;
              *(undefined4 *)(param_3 + iVar9 * 4 + 0x48) =
                   *(undefined4 *)(param_3 + iVar9 * 4 + 0x4c);
              iVar11 = *(int *)(param_3 + 4) + -1;
              iVar9 = iVar4;
            } while (iVar4 < iVar11);
          }
        }
        *(int *)(param_3 + 4) = iVar11;
      }
      else if (0 < param_2) {
        *(int *)(param_3 + 4) = iVar11 + -1;
        goto LAB_718c2514;
      }
      if ((param_2 == 0) && (*pcVar6 != '\0')) {
        *(undefined4 *)(param_5 + 2) = 3;
        *param_5 = *(undefined2 *)(pcVar6 + 8);
      }
LAB_718c2514:
      if (pcVar10 == *(char **)(param_1 + 0x14)) {
        *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(pcVar10 + 200);
      }
      if (*pcVar10 != '\0') {
        iVar11 = *(int *)(pcVar10 + 200);
        if (*(int *)(pcVar10 + 0xcc) != 0) {
          *(int *)(*(int *)(pcVar10 + 0xcc) + 200) = iVar11;
        }
        if (iVar11 != 0) {
          *(undefined4 *)(iVar11 + 0xcc) = *(undefined4 *)(pcVar10 + 0xcc);
        }
      }
      iVar11 = *(int *)(param_1 + 8);
      if (iVar11 == *(int *)(param_1 + 0xc)) {
        uVar3 = iVar11 << 1;
        if (iVar11 == 0) {
          uVar3 = 0x10;
        }
        iVar9 = uVar3 << 2;
        *(uint *)(param_1 + 0xc) = uVar3;
        if (0x3fffffff < uVar3) {
          iVar9 = -1;
        }
        iVar9 = thunk__IBDl(iVar9);
        iVar4 = *(int *)(param_1 + 4);
        imp___aeabi_memcpy(iVar9,iVar4,iVar11 << 2);
        if (iVar4 != 0) {
          dGrRHE(iVar4);
          iVar11 = *(int *)(param_1 + 8);
        }
        *(int *)(param_1 + 4) = iVar9;
      }
      else {
        iVar9 = *(int *)(param_1 + 4);
      }
      *(char **)(iVar9 + iVar11 * 4) = pcVar10;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      pcVar10[0] = '\0';
      pcVar10[1] = '\0';
      pcVar10[2] = '\0';
      pcVar10[3] = '\0';
      return *(int *)(param_3 + 4) < 0x10;
    }
    pcVar10 = *(char **)(param_3 + param_2 * 4 + 0xd0);
    if (*pcVar10 == '\0') {
      if (*(int *)(param_5 + 2) == 0) {
        *(undefined4 *)(param_5 + 2) = 3;
        *param_5 = *(undefined2 *)(pcVar10 + 8);
      }
      piVar2 = (int *)(pcVar10 + 4);
      *(undefined2 *)(pcVar10 + *piVar2 * 2 + 8) = param_4;
      piVar2[*piVar2 + 0x34] = *(int *)(pcVar6 + 0xd0);
      iVar11 = 8;
    }
    else {
      *(undefined2 *)(pcVar10 + *(int *)(pcVar10 + 4) * 2 + 8) = *(undefined2 *)(pcVar6 + 8);
      *(undefined4 *)(pcVar10 + *(int *)(pcVar10 + 4) * 4 + 0x48) = *(undefined4 *)(pcVar6 + 0x48);
      iVar11 = 10;
    }
    *(undefined2 *)(param_3 + param_2 * 2 + 8) = *(undefined2 *)(pcVar6 + iVar11);
    *(int *)(pcVar10 + 4) = *(int *)(pcVar10 + 4) + 1;
    iVar11 = *(int *)(pcVar6 + 4);
    if (iVar11 < 2) {
      if (iVar11 != 1) goto LAB_718c26c4;
    }
    else {
      imp___aeabi_memmove(pcVar6 + 8,pcVar6 + 10,iVar11 * 2 + -2);
    }
    iVar9 = 0x48;
    if (*pcVar6 == '\0') {
      iVar9 = 0xd0;
    }
    iVar4 = 0x4c;
    if (*pcVar6 == '\0') {
      iVar4 = 0xd4;
    }
    imp___aeabi_memmove4(pcVar6 + iVar9,pcVar6 + iVar4,iVar11 << 2);
    goto LAB_718c26c4;
  }
  pcVar10 = *(char **)(param_3 + param_2 * 4 + 0xd0);
  iVar9 = *(int *)(pcVar10 + 4);
  if (iVar9 < 1) {
    cVar1 = *pcVar10;
    if (iVar9 == 0 && cVar1 == '\0') goto LAB_718c2464;
LAB_718c248c:
    *(int *)(pcVar10 + 4) = iVar9 + 1;
    if (cVar1 != '\0') goto LAB_718c249c;
    *(undefined4 *)(pcVar10 + 0xd0) = *(undefined4 *)(pcVar6 + *(int *)(pcVar6 + 4) * 4 + 0xd0);
    *(undefined2 *)(pcVar10 + 8) = *(undefined2 *)(param_3 + iVar11 * 2 + 8);
  }
  else {
    imp___aeabi_memmove(pcVar10 + 10,pcVar10 + 8,iVar9 << 1);
    if (*pcVar10 == '\0') {
LAB_718c2464:
      do {
        *(undefined4 *)(pcVar10 + iVar9 * 4 + 0xd4) = *(undefined4 *)(pcVar10 + iVar9 * 4 + 0xd0);
        uVar3 = iVar9 + 1;
        iVar9 = iVar9 + -1;
      } while (1 < uVar3);
      cVar1 = *pcVar10;
      iVar9 = *(int *)(pcVar10 + 4);
      goto LAB_718c248c;
    }
    imp___aeabi_memmove4(pcVar10 + 0x4c,pcVar10 + 0x48,iVar9 << 2);
    *(int *)(pcVar10 + 4) = iVar9 + 1;
LAB_718c249c:
    *(undefined2 *)(pcVar10 + 8) = *(undefined2 *)(pcVar6 + *(int *)(pcVar6 + 4) * 2 + 6);
    *(undefined4 *)(pcVar10 + 0x48) = *(undefined4 *)(pcVar6 + *(int *)(pcVar6 + 4) * 4 + 0x44);
  }
  *(undefined2 *)(param_3 + iVar11 * 2 + 8) = *(undefined2 *)(pcVar6 + *(int *)(pcVar6 + 4) * 2 + 6)
  ;
  iVar11 = *(int *)(pcVar6 + 4);
LAB_718c26c4:
  *(int *)(pcVar6 + 4) = iVar11 + -1;
  return false;
}


// =========================================================================
// Function: FUN_718c27b0
// Entry: 0x718c27b0 | Size: 352 bytes
// =========================================================================

uint FUN_718c27b0(int *param_1,ushort *param_2,undefined4 *param_3)

{
  ushort uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uStack_24;
  
  uVar8 = param_1[1];
  if (uVar8 == 0) {
    uVar4 = 0;
  }
  else {
    iVar6 = uVar8 - 1;
    iVar5 = (int)uVar8 / 2;
    uVar4 = 0;
    do {
      uVar1 = *(ushort *)(*param_1 + iVar5 * 4);
      if (*param_2 == uVar1) {
        return 0xffffffff;
      }
      if (*param_2 < uVar1) {
        iVar6 = iVar5 + -1;
      }
      else {
        uVar4 = iVar5 + 1;
      }
      iVar5 = uVar4 + (int)(iVar6 - uVar4) / 2;
    } while ((int)uVar4 <= iVar6);
  }
  uVar7 = *param_3;
  if (uVar4 < uVar8) {
    uStack_24 = uVar7;
    FUN_718c29ec(param_1,&uStack_24,uVar4);
  }
  else {
    if (uVar8 == param_1[2]) {
      uVar4 = uVar8 << 1;
      if (uVar8 == 0) {
        uVar4 = 0x10;
      }
      uVar3 = uVar4 * 4 + 8;
      param_1[2] = uVar4;
      if (uVar3 < uVar4 << 2) {
        uVar3 = 0xffffffff;
      }
      if (0x3fffffff < uVar4) {
        uVar3 = 0xffffffff;
      }
      puVar2 = (undefined4 *)thunk__IBDl(uVar3);
      *puVar2 = 4;
      puVar2[1] = uVar4;
      puVar2 = puVar2 + 2;
      iVar5 = *param_1;
      imp___aeabi_memcpy(puVar2,iVar5,uVar8 << 2);
      if (iVar5 != 0) {
        dGrRHE(iVar5 + -8);
        uVar8 = param_1[1];
      }
      *param_1 = (int)puVar2;
    }
    else {
      puVar2 = (undefined4 *)*param_1;
    }
    puVar2[uVar8] = uVar7;
    uVar4 = param_1[1];
    param_1[1] = uVar4 + 1;
  }
  return uVar4;
}


// =========================================================================
// Function: FUN_718c29ec
// Entry: 0x718c29ec | Size: 236 bytes
// =========================================================================

void FUN_718c29ec(int *param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar5 = param_1[1];
  if (iVar5 == param_1[2]) {
    uVar3 = iVar5 << 1;
    if (iVar5 == 0) {
      uVar3 = 0x10;
    }
    uVar1 = uVar3 * 4 + 8;
    param_1[2] = uVar3;
    if (uVar1 < uVar3 << 2) {
      uVar1 = 0xffffffff;
    }
    if (0x3fffffff < uVar3) {
      uVar1 = 0xffffffff;
    }
    puVar2 = (undefined4 *)thunk__IBDl(uVar1);
    puVar6 = puVar2 + 2;
    *puVar2 = 4;
    puVar2[1] = uVar3;
    iVar4 = *param_1;
    imp___aeabi_memcpy(puVar6,iVar4,iVar5 << 2);
    if (iVar4 != 0) {
      dGrRHE(iVar4 + -8);
      iVar5 = param_1[1];
    }
    *param_1 = (int)puVar6;
  }
  else {
    puVar6 = (undefined4 *)*param_1;
  }
  imp___aeabi_memmove(puVar6 + param_3 + 1,puVar6 + param_3,(iVar5 - param_3) * 4);
  *(undefined4 *)(*param_1 + param_3 * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}


// =========================================================================
// Function: FUN_718c2b30
// Entry: 0x718c2b30 | Size: 208 bytes
// =========================================================================

void FUN_718c2b30(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_1[1];
  if (iVar4 == param_1[2]) {
    uVar2 = iVar4 << 1;
    if (iVar4 == 0) {
      uVar2 = 0x10;
    }
    iVar1 = uVar2 << 2;
    param_1[2] = uVar2;
    if (0x3fffffff < uVar2) {
      iVar1 = -1;
    }
    iVar1 = thunk__IBDl(iVar1);
    iVar3 = *param_1;
    imp___aeabi_memcpy(iVar1,iVar3,iVar4 << 2);
    if (iVar3 != 0) {
      dGrRHE(iVar3);
      iVar4 = param_1[1];
    }
    *param_1 = iVar1;
  }
  else {
    iVar1 = *param_1;
  }
  iVar1 = iVar1 + param_3 * 4;
  imp___aeabi_memmove(iVar1 + 4,iVar1,(iVar4 - param_3) * 4);
  *(undefined4 *)(*param_1 + param_3 * 4) = param_2;
  param_1[1] = param_1[1] + 1;
  return;
}


// =========================================================================
// Function: FUN_718c2c58
// Entry: 0x718c2c58 | Size: 208 bytes
// =========================================================================

void FUN_718c2c58(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_1[1];
  if (iVar4 == param_1[2]) {
    uVar2 = iVar4 << 1;
    if (iVar4 == 0) {
      uVar2 = 0x10;
    }
    iVar1 = uVar2 << 2;
    param_1[2] = uVar2;
    if (0x3fffffff < uVar2) {
      iVar1 = -1;
    }
    iVar1 = thunk__IBDl(iVar1);
    iVar3 = *param_1;
    imp___aeabi_memcpy(iVar1,iVar3,iVar4 << 2);
    if (iVar3 != 0) {
      dGrRHE(iVar3);
      iVar4 = param_1[1];
    }
    *param_1 = iVar1;
  }
  else {
    iVar1 = *param_1;
  }
  iVar1 = iVar1 + param_3 * 4;
  imp___aeabi_memmove(iVar1 + 4,iVar1,(iVar4 - param_3) * 4);
  *(undefined4 *)(*param_1 + param_3 * 4) = param_2;
  param_1[1] = param_1[1] + 1;
  return;
}


// =========================================================================
// Function: FUN_718c2d80
// Entry: 0x718c2d80 | Size: 116 bytes
// =========================================================================

void FUN_718c2d80(undefined4 *param_1)

{
  *param_1 = &DAT_70b0fdac;
  param_1[1] = 0x67452301;
  param_1[2] = 0xefcdab89;
  param_1[3] = 0x98badcfe;
  param_1[4] = 0x10325476;
  param_1[5] = 0xc3d2e1f0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}


// =========================================================================
// Function: FUN_718c2e1c
// Entry: 0x718c2e1c | Size: 84 bytes
// =========================================================================

void FUN_718c2e1c(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0xefcdab89;
  *(undefined4 *)(param_1 + 4) = 0x67452301;
  *(undefined4 *)(param_1 + 0xc) = 0x98badcfe;
  *(undefined4 *)(param_1 + 0x10) = 0x10325476;
  *(undefined4 *)(param_1 + 0x14) = 0xc3d2e1f0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


// =========================================================================
// Function: FUN_718c2e88
// Entry: 0x718c2e88 | Size: 116 bytes
// =========================================================================

void FUN_718c2e88(undefined4 *param_1)

{
  *param_1 = &DAT_70b0fdac;
  param_1[1] = 0x67452301;
  param_1[2] = 0xefcdab89;
  param_1[3] = 0x98badcfe;
  param_1[4] = 0x10325476;
  param_1[5] = 0xc3d2e1f0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}


// =========================================================================
// Function: FUN_718c2f5c
// Entry: 0x718c2f5c | Size: 4832 bytes
// =========================================================================

void FUN_718c2f5c(int param_1,uint *param_2,undefined4 param_3)

{
  uint uVar1;
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
  uint uVar13;
  uint uVar14;
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
  int iVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  int iVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  int iVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  int iVar64;
  uint uVar65;
  uint uVar66;
  uint uVar67;
  uint uVar68;
  uint uVar69;
  uint uVar70;
  uint uVar71;
  uint uVar72;
  uint uVar73;
  uint uVar74;
  int iVar75;
  uint uVar76;
  uint uVar77;
  uint uVar78;
  uint uVar79;
  uint uVar80;
  uint uVar81;
  uint uVar82;
  uint uVar83;
  uint uVar84;
  uint uVar85;
  uint uVar86;
  uint uVar87;
  uint uVar88;
  uint uVar89;
  uint uVar90;
  uint uVar91;
  uint uVar92;
  uint uVar93;
  uint uVar94;
  uint uVar95;
  uint uVar96;
  
  imp___aeabi_memcpy(param_1 + 0x74,param_3,0x40);
  uVar18 = *(uint *)(param_1 + 0x88);
  uVar8 = *(uint *)(param_1 + 0x90);
  uVar19 = *(uint *)(param_1 + 0xa8);
  uVar29 = *(uint *)(param_1 + 0x84);
  uVar9 = *(uint *)(param_1 + 0x7c);
  uVar65 = *(uint *)(param_1 + 0x9c);
  uVar20 = *(uint *)(param_1 + 0x74);
  uVar30 = *(uint *)(param_1 + 0xb0);
  uVar52 = *(uint *)(param_1 + 0x94);
  uVar31 = uVar29 ^ uVar9 ^ uVar65 ^ uVar30;
  uVar21 = uVar9 ^ uVar20 ^ uVar52 ^ uVar19;
  uVar80 = *(uint *)(param_1 + 0x80);
  uVar32 = uVar8 ^ uVar18 ^ uVar19 ^ (uVar31 >> 0x1f | uVar31 << 1);
  uVar53 = *(uint *)(param_1 + 0xa0);
  uVar58 = uVar65 ^ uVar52 ^ (uVar21 >> 0x1f | uVar21 << 1) ^ (uVar32 >> 0x1f | uVar32 << 1);
  uVar93 = *(uint *)(param_1 + 0x8c);
  uVar83 = *(uint *)(param_1 + 0x78);
  uVar88 = uVar18 ^ uVar80 ^ uVar53 ^ (uVar21 >> 0x1f | uVar21 << 1);
  uVar76 = uVar19 ^ uVar53 ^ (uVar88 >> 0x1f | uVar88 << 1) ^ (uVar58 >> 0x1f | uVar58 << 1);
  uVar66 = *(uint *)(param_1 + 0xac);
  uVar10 = uVar52 ^ uVar93 ^ uVar66 ^ (uVar88 >> 0x1f | uVar88 << 1);
  uVar59 = uVar66 ^ (uVar21 >> 0x1f | uVar21 << 1) ^ (uVar10 >> 0x1f | uVar10 << 1) ^
           (uVar76 >> 0x1f | uVar76 << 1);
  uVar77 = *(uint *)(param_1 + 0x98);
  uVar22 = uVar80 ^ uVar83 ^ uVar77 ^ uVar66;
  uVar84 = uVar53 ^ uVar77 ^ (uVar22 >> 0x1f | uVar22 << 1) ^ (uVar10 >> 0x1f | uVar10 << 1);
  uVar27 = uVar88 >> 0x1f | uVar88 << 1;
  uVar89 = *(uint *)(param_1 + 0xa4);
  uVar33 = uVar27 ^ (uVar22 >> 0x1f | uVar22 << 1) ^ (uVar84 >> 0x1f | uVar84 << 1) ^
           (uVar59 >> 0x1f | uVar59 << 1);
  uVar42 = uVar10 >> 0x1f | uVar10 << 1;
  uVar44 = uVar93 ^ uVar29 ^ uVar89 ^ (uVar22 >> 0x1f | uVar22 << 1);
  uVar54 = uVar66 ^ uVar89 ^ (uVar44 >> 0x1f | uVar44 << 1) ^ (uVar84 >> 0x1f | uVar84 << 1);
  uVar60 = uVar42 ^ (uVar44 >> 0x1f | uVar44 << 1) ^ (uVar54 >> 0x1f | uVar54 << 1) ^
           (uVar33 >> 0x1f | uVar33 << 1);
  uVar11 = uVar77 ^ uVar8 ^ uVar30 ^ (uVar44 >> 0x1f | uVar44 << 1);
  uVar50 = uVar84 >> 0x1f | uVar84 << 1;
  uVar34 = uVar30 ^ (uVar22 >> 0x1f | uVar22 << 1) ^ (uVar11 >> 0x1f | uVar11 << 1) ^
           (uVar54 >> 0x1f | uVar54 << 1);
  uVar85 = uVar50 ^ (uVar11 >> 0x1f | uVar11 << 1) ^ (uVar34 >> 0x1f | uVar34 << 1) ^
           (uVar60 >> 0x1f | uVar60 << 1);
  uVar44 = uVar44 >> 0x1f | uVar44 << 1;
  uVar67 = uVar89 ^ uVar65 ^ (uVar31 >> 0x1f | uVar31 << 1) ^ (uVar11 >> 0x1f | uVar11 << 1);
  uVar57 = uVar54 >> 0x1f | uVar54 << 1;
  uVar55 = uVar44 ^ (uVar31 >> 0x1f | uVar31 << 1) ^ (uVar67 >> 0x1f | uVar67 << 1) ^
           (uVar34 >> 0x1f | uVar34 << 1);
  uVar35 = uVar57 ^ (uVar67 >> 0x1f | uVar67 << 1) ^ (uVar55 >> 0x1f | uVar55 << 1) ^
           (uVar85 >> 0x1f | uVar85 << 1);
  uVar11 = uVar11 >> 0x1f | uVar11 << 1;
  uVar31 = uVar31 >> 0x1f | uVar31 << 1;
  uVar90 = uVar30 ^ uVar19 ^ (uVar32 >> 0x1f | uVar32 << 1) ^ (uVar67 >> 0x1f | uVar67 << 1);
  uVar45 = uVar11 ^ (uVar32 >> 0x1f | uVar32 << 1) ^ (uVar90 >> 0x1f | uVar90 << 1) ^
           (uVar55 >> 0x1f | uVar55 << 1);
  uVar1 = uVar34 >> 0x1f | uVar34 << 1;
  uVar94 = uVar1 ^ (uVar90 >> 0x1f | uVar90 << 1) ^ (uVar45 >> 0x1f | uVar45 << 1) ^
           (uVar35 >> 0x1f | uVar35 << 1);
  uVar67 = uVar67 >> 0x1f | uVar67 << 1;
  uVar12 = uVar31 ^ (uVar21 >> 0x1f | uVar21 << 1) ^ (uVar58 >> 0x1f | uVar58 << 1) ^
           (uVar90 >> 0x1f | uVar90 << 1);
  uVar68 = uVar67 ^ (uVar58 >> 0x1f | uVar58 << 1) ^ (uVar12 >> 0x1f | uVar12 << 1) ^
           (uVar45 >> 0x1f | uVar45 << 1);
  uVar2 = uVar55 >> 0x1f | uVar55 << 1;
  uVar61 = uVar2 ^ (uVar12 >> 0x1f | uVar12 << 1) ^ (uVar68 >> 0x1f | uVar68 << 1) ^
           (uVar94 >> 0x1f | uVar94 << 1);
  uVar32 = uVar32 >> 0x1f | uVar32 << 1;
  uVar95 = uVar32 ^ (uVar88 >> 0x1f | uVar88 << 1) ^ (uVar76 >> 0x1f | uVar76 << 1) ^
           (uVar12 >> 0x1f | uVar12 << 1);
  uVar88 = uVar90 >> 0x1f | uVar90 << 1;
  uVar90 = uVar45 >> 0x1f | uVar45 << 1;
  uVar46 = uVar88 ^ (uVar76 >> 0x1f | uVar76 << 1) ^ (uVar95 >> 0x1f | uVar95 << 1) ^
           (uVar68 >> 0x1f | uVar68 << 1);
  uVar58 = uVar58 >> 0x1f | uVar58 << 1;
  uVar56 = uVar90 ^ (uVar95 >> 0x1f | uVar95 << 1) ^ (uVar46 >> 0x1f | uVar46 << 1) ^
           (uVar61 >> 0x1f | uVar61 << 1);
  uVar12 = uVar12 >> 0x1f | uVar12 << 1;
  uVar91 = uVar58 ^ (uVar10 >> 0x1f | uVar10 << 1) ^ (uVar59 >> 0x1f | uVar59 << 1) ^
           (uVar95 >> 0x1f | uVar95 << 1);
  uVar36 = uVar12 ^ (uVar59 >> 0x1f | uVar59 << 1) ^ (uVar91 >> 0x1f | uVar91 << 1) ^
           (uVar46 >> 0x1f | uVar46 << 1);
  uVar10 = uVar68 >> 0x1f | uVar68 << 1;
  uVar69 = uVar10 ^ (uVar91 >> 0x1f | uVar91 << 1) ^ (uVar36 >> 0x1f | uVar36 << 1) ^
           (uVar56 >> 0x1f | uVar56 << 1);
  uVar76 = uVar76 >> 0x1f | uVar76 << 1;
  uVar78 = uVar76 ^ (uVar84 >> 0x1f | uVar84 << 1) ^ (uVar33 >> 0x1f | uVar33 << 1) ^
           (uVar91 >> 0x1f | uVar91 << 1);
  uVar84 = uVar95 >> 0x1f | uVar95 << 1;
  uVar95 = uVar46 >> 0x1f | uVar46 << 1;
  uVar96 = uVar84 ^ (uVar33 >> 0x1f | uVar33 << 1) ^ (uVar78 >> 0x1f | uVar78 << 1) ^
           (uVar36 >> 0x1f | uVar36 << 1);
  uVar62 = uVar95 ^ (uVar78 >> 0x1f | uVar78 << 1) ^ (uVar96 >> 0x1f | uVar96 << 1) ^
           (uVar69 >> 0x1f | uVar69 << 1);
  uVar59 = uVar59 >> 0x1f | uVar59 << 1;
  uVar86 = uVar59 ^ (uVar54 >> 0x1f | uVar54 << 1) ^ (uVar60 >> 0x1f | uVar60 << 1) ^
           (uVar78 >> 0x1f | uVar78 << 1);
  uVar54 = uVar91 >> 0x1f | uVar91 << 1;
  uVar81 = uVar54 ^ (uVar60 >> 0x1f | uVar60 << 1) ^ (uVar86 >> 0x1f | uVar86 << 1) ^
           (uVar96 >> 0x1f | uVar96 << 1);
  uVar91 = uVar36 >> 0x1f | uVar36 << 1;
  uVar70 = uVar91 ^ (uVar86 >> 0x1f | uVar86 << 1) ^ (uVar81 >> 0x1f | uVar81 << 1) ^
           (uVar62 >> 0x1f | uVar62 << 1);
  uVar33 = uVar33 >> 0x1f | uVar33 << 1;
  uVar78 = uVar78 >> 0x1f | uVar78 << 1;
  uVar47 = uVar33 ^ (uVar34 >> 0x1f | uVar34 << 1) ^ (uVar85 >> 0x1f | uVar85 << 1) ^
           (uVar86 >> 0x1f | uVar86 << 1);
  uVar34 = uVar96 >> 0x1f | uVar96 << 1;
  uVar13 = uVar78 ^ (uVar85 >> 0x1f | uVar85 << 1) ^ (uVar47 >> 0x1f | uVar47 << 1) ^
           (uVar81 >> 0x1f | uVar81 << 1);
  uVar60 = uVar60 >> 0x1f | uVar60 << 1;
  uVar37 = uVar34 ^ (uVar47 >> 0x1f | uVar47 << 1) ^ (uVar13 >> 0x1f | uVar13 << 1) ^
           (uVar70 >> 0x1f | uVar70 << 1);
  uVar86 = uVar86 >> 0x1f | uVar86 << 1;
  uVar79 = uVar60 ^ (uVar55 >> 0x1f | uVar55 << 1) ^ (uVar35 >> 0x1f | uVar35 << 1) ^
           (uVar47 >> 0x1f | uVar47 << 1);
  uVar14 = uVar86 ^ (uVar35 >> 0x1f | uVar35 << 1) ^ (uVar79 >> 0x1f | uVar79 << 1) ^
           (uVar13 >> 0x1f | uVar13 << 1);
  uVar55 = uVar81 >> 0x1f | uVar81 << 1;
  uVar23 = uVar55 ^ (uVar79 >> 0x1f | uVar79 << 1) ^ (uVar14 >> 0x1f | uVar14 << 1) ^
           (uVar37 >> 0x1f | uVar37 << 1);
  uVar3 = uVar23 >> 0x1f | uVar23 << 1;
  uVar71 = *param_2;
  uVar72 = param_2[1];
  uVar73 = param_2[2];
  uVar74 = param_2[3];
  uVar15 = param_2[4];
  uVar4 = uVar56 >> 0x1f | uVar56 << 1;
  uVar35 = uVar35 >> 0x1f | uVar35 << 1;
  *(uint *)(param_1 + 0x7c) = uVar3;
  uVar5 = uVar94 >> 0x1f | uVar94 << 1;
  uVar85 = uVar85 >> 0x1f | uVar85 << 1;
  uVar16 = uVar85 ^ (uVar45 >> 0x1f | uVar45 << 1) ^ (uVar94 >> 0x1f | uVar94 << 1) ^
           (uVar79 >> 0x1f | uVar79 << 1);
  uVar82 = uVar35 ^ (uVar68 >> 0x1f | uVar68 << 1) ^ (uVar61 >> 0x1f | uVar61 << 1) ^
           (uVar16 >> 0x1f | uVar16 << 1);
  uVar24 = uVar5 ^ (uVar46 >> 0x1f | uVar46 << 1) ^ (uVar56 >> 0x1f | uVar56 << 1) ^
           (uVar82 >> 0x1f | uVar82 << 1);
  uVar45 = uVar61 >> 0x1f | uVar61 << 1;
  uVar38 = uVar45 ^ (uVar36 >> 0x1f | uVar36 << 1) ^ (uVar69 >> 0x1f | uVar69 << 1) ^
           (uVar24 >> 0x1f | uVar24 << 1);
  uVar48 = uVar4 ^ (uVar96 >> 0x1f | uVar96 << 1) ^ (uVar62 >> 0x1f | uVar62 << 1) ^
           (uVar38 >> 0x1f | uVar38 << 1);
  uVar36 = uVar48 >> 0x1f | uVar48 << 1;
  *(uint *)(param_1 + 0x78) = uVar36;
  uVar46 = uVar79 >> 0x1f | uVar79 << 1;
  uVar47 = uVar47 >> 0x1f | uVar47 << 1;
  uVar63 = uVar47 ^ (uVar94 >> 0x1f | uVar94 << 1) ^ (uVar16 >> 0x1f | uVar16 << 1) ^
           (uVar14 >> 0x1f | uVar14 << 1);
  uVar39 = uVar46 ^ (uVar61 >> 0x1f | uVar61 << 1) ^ (uVar82 >> 0x1f | uVar82 << 1) ^
           (uVar63 >> 0x1f | uVar63 << 1);
  uVar61 = uVar39 >> 0x1f | uVar39 << 1;
  *(uint *)(param_1 + 0x74) = uVar61;
  uVar68 = uVar13 >> 0x1f | uVar13 << 1;
  uVar79 = uVar16 >> 0x1f | uVar16 << 1;
  uVar49 = uVar68 ^ (uVar16 >> 0x1f | uVar16 << 1) ^ (uVar63 >> 0x1f | uVar63 << 1) ^
           (uVar23 >> 0x1f | uVar23 << 1);
  uVar16 = uVar49 >> 0x1f | uVar49 << 1;
  uVar94 = uVar69 >> 0x1f | uVar69 << 1;
  *(uint *)(param_1 + 0x88) = uVar16;
  uVar25 = uVar94 ^ (uVar81 >> 0x1f | uVar81 << 1) ^ (uVar70 >> 0x1f | uVar70 << 1) ^
           (uVar48 >> 0x1f | uVar48 << 1);
  uVar81 = uVar25 >> 0x1f | uVar25 << 1;
  *(uint *)(param_1 + 0x84) = uVar81;
  uVar92 = uVar79 ^ (uVar56 >> 0x1f | uVar56 << 1) ^ (uVar24 >> 0x1f | uVar24 << 1) ^
           (uVar39 >> 0x1f | uVar39 << 1);
  uVar56 = uVar14 >> 0x1f | uVar14 << 1;
  uVar96 = uVar92 >> 0x1f | uVar92 << 1;
  *(uint *)(param_1 + 0x80) = uVar96;
  uVar40 = uVar56 ^ (uVar82 >> 0x1f | uVar82 << 1) ^ (uVar39 >> 0x1f | uVar39 << 1) ^
           (uVar49 >> 0x1f | uVar49 << 1);
  uVar39 = uVar40 >> 0x1f | uVar40 << 1;
  uVar6 = uVar62 >> 0x1f | uVar62 << 1;
  *(uint *)(param_1 + 0x94) = uVar39;
  uVar82 = uVar82 >> 0x1f | uVar82 << 1;
  uVar87 = uVar6 ^ (uVar13 >> 0x1f | uVar13 << 1) ^ (uVar37 >> 0x1f | uVar37 << 1) ^
           (uVar25 >> 0x1f | uVar25 << 1);
  uVar13 = uVar87 >> 0x1f | uVar87 << 1;
  *(uint *)(param_1 + 0x90) = uVar13;
  uVar26 = uVar82 ^ (uVar69 >> 0x1f | uVar69 << 1) ^ (uVar38 >> 0x1f | uVar38 << 1) ^
           (uVar92 >> 0x1f | uVar92 << 1);
  uVar69 = uVar63 >> 0x1f | uVar63 << 1;
  uVar7 = uVar26 >> 0x1f | uVar26 << 1;
  *(uint *)(param_1 + 0x8c) = uVar7;
  uVar17 = uVar69 ^ (uVar24 >> 0x1f | uVar24 << 1) ^ (uVar92 >> 0x1f | uVar92 << 1) ^
           (uVar40 >> 0x1f | uVar40 << 1);
  uVar40 = uVar17 >> 0x1f | uVar17 << 1;
  *(uint *)(param_1 + 0xa0) = uVar40;
  uVar92 = uVar70 >> 0x1f | uVar70 << 1;
  uVar24 = uVar24 >> 0x1f | uVar24 << 1;
  uVar41 = uVar92 ^ (uVar14 >> 0x1f | uVar14 << 1) ^ (uVar23 >> 0x1f | uVar23 << 1) ^
           (uVar87 >> 0x1f | uVar87 << 1);
  uVar14 = uVar41 >> 0x1f | uVar41 << 1;
  *(uint *)(param_1 + 0x9c) = uVar14;
  uVar48 = uVar24 ^ (uVar62 >> 0x1f | uVar62 << 1) ^ (uVar48 >> 0x1f | uVar48 << 1) ^
           (uVar26 >> 0x1f | uVar26 << 1);
  uVar23 = uVar48 >> 0x1f | uVar48 << 1;
  *(uint *)(param_1 + 0x98) = uVar23;
  uVar17 = uVar61 ^ (uVar38 >> 0x1f | uVar38 << 1) ^ (uVar26 >> 0x1f | uVar26 << 1) ^
           (uVar17 >> 0x1f | uVar17 << 1);
  uVar17 = uVar17 >> 0x1f | uVar17 << 1;
  *(uint *)(param_1 + 0xac) = uVar17;
  uVar26 = uVar37 >> 0x1f | uVar37 << 1;
  uVar41 = uVar26 ^ (uVar63 >> 0x1f | uVar63 << 1) ^ (uVar49 >> 0x1f | uVar49 << 1) ^
           (uVar41 >> 0x1f | uVar41 << 1);
  uVar41 = uVar41 >> 0x1f | uVar41 << 1;
  *(uint *)(param_1 + 0xa8) = uVar41;
  uVar38 = uVar38 >> 0x1f | uVar38 << 1;
  uVar48 = uVar38 ^ (uVar70 >> 0x1f | uVar70 << 1) ^ (uVar25 >> 0x1f | uVar25 << 1) ^
           (uVar48 >> 0x1f | uVar48 << 1);
  uVar25 = uVar48 >> 0x1f | uVar48 << 1;
  *(uint *)(param_1 + 0xa4) = uVar25;
  uVar48 = uVar36 ^ (uVar37 >> 0x1f | uVar37 << 1) ^ (uVar87 >> 0x1f | uVar87 << 1) ^
           (uVar48 >> 0x1f | uVar48 << 1);
  *(uint *)(param_1 + 0xb0) = uVar48 >> 0x1f | uVar48 << 1;
  uVar49 = uVar15 + (uVar71 >> 0x1b | uVar71 << 5) + uVar20 + ((uVar74 ^ uVar73) & uVar72 ^ uVar74)
           + 0x5a827999;
  uVar15 = uVar74 + ((uVar73 ^ (uVar72 >> 2 | uVar72 << 0x1e)) & uVar71 ^ uVar73) + uVar83 +
           (uVar49 >> 0x1b | uVar49 * 0x20) + 0x5a827999;
  uVar20 = uVar73 + uVar9 +
           (uVar49 & ((uVar72 >> 2 | uVar72 << 0x1e) ^ (uVar71 >> 2 | uVar71 << 0x1e)) ^
           (uVar72 >> 2 | uVar72 << 0x1e)) + (uVar15 >> 0x1b | uVar15 * 0x20) + 0x5a827999;
  uVar37 = uVar80 + (uVar72 >> 2 | uVar72 << 0x1e) +
           (uVar15 & ((uVar49 >> 2 | uVar49 * 0x40000000) ^ (uVar71 >> 2 | uVar71 << 0x1e)) ^
           (uVar71 >> 2 | uVar71 << 0x1e)) + (uVar20 >> 0x1b | uVar20 * 0x20) + 0x5a827999;
  uVar29 = uVar29 + (uVar71 >> 2 | uVar71 << 0x1e) +
           (uVar20 & ((uVar15 >> 2 | uVar15 * 0x40000000) ^ (uVar49 >> 2 | uVar49 * 0x40000000)) ^
           (uVar49 >> 2 | uVar49 * 0x40000000)) + (uVar37 >> 0x1b | uVar37 * 0x20) + 0x5a827999;
  uVar18 = uVar18 + (uVar49 >> 2 | uVar49 * 0x40000000) +
           (uVar37 & ((uVar20 >> 2 | uVar20 * 0x40000000) ^ (uVar15 >> 2 | uVar15 * 0x40000000)) ^
           (uVar15 >> 2 | uVar15 * 0x40000000)) + (uVar29 >> 0x1b | uVar29 * 0x20) + 0x5a827999;
  uVar9 = uVar93 + (uVar15 >> 2 | uVar15 * 0x40000000) +
          (uVar29 & ((uVar37 >> 2 | uVar37 * 0x40000000) ^ (uVar20 >> 2 | uVar20 * 0x40000000)) ^
          (uVar20 >> 2 | uVar20 * 0x40000000)) + (uVar18 >> 0x1b | uVar18 * 0x20) + 0x5a827999;
  uVar8 = uVar8 + (uVar20 >> 2 | uVar20 * 0x40000000) +
          (uVar18 & ((uVar29 >> 2 | uVar29 * 0x40000000) ^ (uVar37 >> 2 | uVar37 * 0x40000000)) ^
          (uVar37 >> 2 | uVar37 * 0x40000000)) + (uVar9 >> 0x1b | uVar9 * 0x20) + 0x5a827999;
  uVar15 = uVar52 + (uVar37 >> 2 | uVar37 * 0x40000000) +
           (uVar9 & ((uVar18 >> 2 | uVar18 * 0x40000000) ^ (uVar29 >> 2 | uVar29 * 0x40000000)) ^
           (uVar29 >> 2 | uVar29 * 0x40000000)) + (uVar8 >> 0x1b | uVar8 * 0x20) + 0x5a827999;
  uVar20 = uVar77 + (uVar29 >> 2 | uVar29 * 0x40000000) +
           (uVar8 & ((uVar9 >> 2 | uVar9 * 0x40000000) ^ (uVar18 >> 2 | uVar18 * 0x40000000)) ^
           (uVar18 >> 2 | uVar18 * 0x40000000)) + (uVar15 >> 0x1b | uVar15 * 0x20) + 0x5a827999;
  uVar29 = uVar65 + (uVar18 >> 2 | uVar18 * 0x40000000) +
           (uVar15 & ((uVar8 >> 2 | uVar8 * 0x40000000) ^ (uVar9 >> 2 | uVar9 * 0x40000000)) ^
           (uVar9 >> 2 | uVar9 * 0x40000000)) + (uVar20 >> 0x1b | uVar20 * 0x20) + 0x5a827999;
  uVar18 = uVar53 + (uVar9 >> 2 | uVar9 * 0x40000000) +
           (uVar20 & ((uVar15 >> 2 | uVar15 * 0x40000000) ^ (uVar8 >> 2 | uVar8 * 0x40000000)) ^
           (uVar8 >> 2 | uVar8 * 0x40000000)) + (uVar29 >> 0x1b | uVar29 * 0x20) + 0x5a827999;
  uVar8 = uVar89 + (uVar8 >> 2 | uVar8 * 0x40000000) +
          (uVar29 & ((uVar20 >> 2 | uVar20 * 0x40000000) ^ (uVar15 >> 2 | uVar15 * 0x40000000)) ^
          (uVar15 >> 2 | uVar15 * 0x40000000)) + (uVar18 >> 0x1b | uVar18 * 0x20) + 0x5a827999;
  uVar9 = uVar19 + (uVar15 >> 2 | uVar15 * 0x40000000) +
          (uVar18 & ((uVar29 >> 2 | uVar29 * 0x40000000) ^ (uVar20 >> 2 | uVar20 * 0x40000000)) ^
          (uVar20 >> 2 | uVar20 * 0x40000000)) + (uVar8 >> 0x1b | uVar8 * 0x20) + 0x5a827999;
  uVar15 = uVar66 + (uVar20 >> 2 | uVar20 * 0x40000000) +
           (uVar8 & ((uVar18 >> 2 | uVar18 * 0x40000000) ^ (uVar29 >> 2 | uVar29 * 0x40000000)) ^
           (uVar29 >> 2 | uVar29 * 0x40000000)) + (uVar9 >> 0x1b | uVar9 * 0x20) + 0x5a827999;
  uVar20 = uVar30 + (uVar29 >> 2 | uVar29 * 0x40000000) +
           (uVar9 & ((uVar8 >> 2 | uVar8 * 0x40000000) ^ (uVar18 >> 2 | uVar18 * 0x40000000)) ^
           (uVar18 >> 2 | uVar18 * 0x40000000)) + (uVar15 >> 0x1b | uVar15 * 0x20) + 0x5a827999;
  uVar18 = (uVar21 >> 0x1f | uVar21 << 1) + (uVar18 >> 2 | uVar18 * 0x40000000) +
           (uVar15 & ((uVar9 >> 2 | uVar9 * 0x40000000) ^ (uVar8 >> 2 | uVar8 * 0x40000000)) ^
           (uVar8 >> 2 | uVar8 * 0x40000000)) + (uVar20 >> 0x1b | uVar20 * 0x20) + 0x5a827999;
  uVar19 = (uVar22 >> 0x1f | uVar22 << 1) + (uVar8 >> 2 | uVar8 * 0x40000000) +
           (uVar20 & ((uVar15 >> 2 | uVar15 * 0x40000000) ^ (uVar9 >> 2 | uVar9 * 0x40000000)) ^
           (uVar9 >> 2 | uVar9 * 0x40000000)) + (uVar18 >> 0x1b | uVar18 * 0x20) + 0x5a827999;
  uVar31 = uVar31 + (uVar9 >> 2 | uVar9 * 0x40000000) +
           (uVar18 & ((uVar20 >> 2 | uVar20 * 0x40000000) ^ (uVar15 >> 2 | uVar15 * 0x40000000)) ^
           (uVar15 >> 2 | uVar15 * 0x40000000)) + (uVar19 >> 0x1b | uVar19 * 0x20) + 0x5a827999;
  uVar8 = uVar27 + (uVar15 >> 2 | uVar15 * 0x40000000) +
          (uVar19 & ((uVar18 >> 2 | uVar18 * 0x40000000) ^ (uVar20 >> 2 | uVar20 * 0x40000000)) ^
          (uVar20 >> 2 | uVar20 * 0x40000000)) + (uVar31 >> 0x1b | uVar31 * 0x20) + 0x5a827999;
  uVar9 = uVar44 + (uVar20 >> 2 | uVar20 * 0x40000000) +
          ((uVar19 >> 2 | uVar19 * 0x40000000) ^ (uVar18 >> 2 | uVar18 * 0x40000000) ^ uVar31) +
          (uVar8 >> 0x1b | uVar8 * 0x20) + 0x6ed9eba1;
  uVar44 = uVar32 + (uVar18 >> 2 | uVar18 * 0x40000000) +
           ((uVar31 >> 2 | uVar31 * 0x40000000) ^ (uVar19 >> 2 | uVar19 * 0x40000000) ^ uVar8) +
           (uVar9 >> 0x1b | uVar9 * 0x20) + 0x6ed9eba1;
  uVar32 = uVar42 + (uVar19 >> 2 | uVar19 * 0x40000000) +
           ((uVar8 >> 2 | uVar8 * 0x40000000) ^ (uVar31 >> 2 | uVar31 * 0x40000000) ^ uVar9) +
           (uVar44 >> 0x1b | uVar44 * 0x20) + 0x6ed9eba1;
  uVar27 = uVar11 + (uVar31 >> 2 | uVar31 * 0x40000000) +
           ((uVar9 >> 2 | uVar9 * 0x40000000) ^ (uVar8 >> 2 | uVar8 * 0x40000000) ^ uVar44) +
           (uVar32 >> 0x1b | uVar32 * 0x20) + 0x6ed9eba1;
  uVar42 = uVar58 + (uVar8 >> 2 | uVar8 * 0x40000000) +
           ((uVar44 >> 2 | uVar44 * 0x40000000) ^ (uVar9 >> 2 | uVar9 * 0x40000000) ^ uVar32) +
           (uVar27 >> 0x1b | uVar27 * 0x20) + 0x6ed9eba1;
  uVar11 = uVar50 + (uVar9 >> 2 | uVar9 * 0x40000000) +
           ((uVar32 >> 2 | uVar32 * 0x40000000) ^ (uVar44 >> 2 | uVar44 * 0x40000000) ^ uVar27) +
           (uVar42 >> 0x1b | uVar42 * 0x20) + 0x6ed9eba1;
  uVar50 = uVar67 + (uVar44 >> 2 | uVar44 * 0x40000000) +
           ((uVar27 >> 2 | uVar27 * 0x40000000) ^ (uVar32 >> 2 | uVar32 * 0x40000000) ^ uVar42) +
           (uVar11 >> 0x1b | uVar11 * 0x20) + 0x6ed9eba1;
  uVar44 = uVar76 + (uVar32 >> 2 | uVar32 * 0x40000000) +
           ((uVar42 >> 2 | uVar42 * 0x40000000) ^ (uVar27 >> 2 | uVar27 * 0x40000000) ^ uVar11) +
           (uVar50 >> 0x1b | uVar50 * 0x20) + 0x6ed9eba1;
  uVar27 = uVar57 + (uVar27 >> 2 | uVar27 * 0x40000000) +
           ((uVar11 >> 2 | uVar11 * 0x40000000) ^ (uVar42 >> 2 | uVar42 * 0x40000000) ^ uVar50) +
           (uVar44 >> 0x1b | uVar44 * 0x20) + 0x6ed9eba1;
  uVar42 = uVar88 + (uVar42 >> 2 | uVar42 * 0x40000000) +
           ((uVar50 >> 2 | uVar50 * 0x40000000) ^ (uVar11 >> 2 | uVar11 * 0x40000000) ^ uVar44) +
           (uVar27 >> 0x1b | uVar27 * 0x20) + 0x6ed9eba1;
  uVar31 = uVar59 + (uVar11 >> 2 | uVar11 * 0x40000000) +
           ((uVar44 >> 2 | uVar44 * 0x40000000) ^ (uVar50 >> 2 | uVar50 * 0x40000000) ^ uVar27) +
           (uVar42 >> 0x1b | uVar42 * 0x20) + 0x6ed9eba1;
  uVar57 = uVar1 + (uVar50 >> 2 | uVar50 * 0x40000000) +
           ((uVar27 >> 2 | uVar27 * 0x40000000) ^ (uVar44 >> 2 | uVar44 * 0x40000000) ^ uVar42) +
           (uVar31 >> 0x1b | uVar31 * 0x20) + 0x6ed9eba1;
  uVar11 = uVar12 + (uVar44 >> 2 | uVar44 * 0x40000000) +
           ((uVar42 >> 2 | uVar42 * 0x40000000) ^ (uVar27 >> 2 | uVar27 * 0x40000000) ^ uVar31) +
           (uVar57 >> 0x1b | uVar57 * 0x20) + 0x6ed9eba1;
  uVar27 = uVar33 + (uVar27 >> 2 | uVar27 * 0x40000000) +
           ((uVar31 >> 2 | uVar31 * 0x40000000) ^ (uVar42 >> 2 | uVar42 * 0x40000000) ^ uVar57) +
           (uVar11 >> 0x1b | uVar11 * 0x20) + 0x6ed9eba1;
  uVar44 = uVar2 + (uVar42 >> 2 | uVar42 * 0x40000000) +
           ((uVar57 >> 2 | uVar57 * 0x40000000) ^ (uVar31 >> 2 | uVar31 * 0x40000000) ^ uVar11) +
           (uVar27 >> 0x1b | uVar27 * 0x20) + 0x6ed9eba1;
  uVar50 = uVar84 + (uVar31 >> 2 | uVar31 * 0x40000000) +
           ((uVar11 >> 2 | uVar11 * 0x40000000) ^ (uVar57 >> 2 | uVar57 * 0x40000000) ^ uVar27) +
           (uVar44 >> 0x1b | uVar44 * 0x20) + 0x6ed9eba1;
  uVar31 = uVar60 + (uVar57 >> 2 | uVar57 * 0x40000000) +
           ((uVar27 >> 2 | uVar27 * 0x40000000) ^ (uVar11 >> 2 | uVar11 * 0x40000000) ^ uVar44) +
           (uVar50 >> 0x1b | uVar50 * 0x20) + 0x6ed9eba1;
  uVar57 = uVar90 + (uVar11 >> 2 | uVar11 * 0x40000000) +
           ((uVar44 >> 2 | uVar44 * 0x40000000) ^ (uVar27 >> 2 | uVar27 * 0x40000000) ^ uVar50) +
           (uVar31 >> 0x1b | uVar31 * 0x20) + 0x6ed9eba1;
  uVar42 = uVar54 + (uVar27 >> 2 | uVar27 * 0x40000000) +
           ((uVar50 >> 2 | uVar50 * 0x40000000) ^ (uVar44 >> 2 | uVar44 * 0x40000000) ^ uVar31) +
           (uVar57 >> 0x1b | uVar57 * 0x20) + 0x6ed9eba1;
  uVar27 = uVar85 + (uVar44 >> 2 | uVar44 * 0x40000000) +
           ((uVar31 >> 2 | uVar31 * 0x40000000) ^ (uVar50 >> 2 | uVar50 * 0x40000000) ^ uVar57) +
           (uVar42 >> 0x1b | uVar42 * 0x20) + 0x6ed9eba1;
  iVar51 = uVar10 + (uVar50 >> 2 | uVar50 * 0x40000000) +
           ((uVar42 | uVar57 >> 2 | uVar57 * 0x40000000) & (uVar31 >> 2 | uVar31 * 0x40000000) |
           uVar42 & (uVar57 >> 2 | uVar57 * 0x40000000)) + (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar50 = iVar51 + 0x8f1bbcdc;
  iVar75 = uVar78 + (uVar31 >> 2 | uVar31 * 0x40000000) +
           ((uVar27 | uVar42 >> 2 | uVar42 * 0x40000000) & (uVar57 >> 2 | uVar57 * 0x40000000) |
           uVar27 & (uVar42 >> 2 | uVar42 * 0x40000000)) + (uVar50 >> 0x1b | uVar50 * 0x20);
  uVar11 = iVar75 + 0x8f1bbcdc;
  iVar64 = uVar35 + (uVar57 >> 2 | uVar57 * 0x40000000) +
           ((uVar50 | uVar27 >> 2 | uVar27 * 0x40000000) & (uVar42 >> 2 | uVar42 * 0x40000000) |
           uVar50 & (uVar27 >> 2 | uVar27 * 0x40000000)) + (uVar11 >> 0x1b | uVar11 * 0x20);
  uVar44 = iVar64 + 0x8f1bbcdc;
  iVar43 = uVar95 + (uVar42 >> 2 | uVar42 * 0x40000000) +
           ((uVar11 | uVar50 >> 2 | iVar51 * 0x40000000) & (uVar27 >> 2 | uVar27 * 0x40000000) |
           uVar11 & (uVar50 >> 2 | iVar51 * 0x40000000)) + (uVar44 >> 0x1b | uVar44 * 0x20);
  uVar42 = iVar43 + 0x8f1bbcdc;
  iVar28 = uVar86 + (uVar27 >> 2 | uVar27 * 0x40000000) +
           ((uVar44 | uVar11 >> 2 | iVar75 * 0x40000000) & (uVar50 >> 2 | iVar51 * 0x40000000) |
           uVar44 & (uVar11 >> 2 | iVar75 * 0x40000000)) + (uVar42 >> 0x1b | uVar42 * 0x20);
  uVar27 = iVar28 + 0x8f1bbcdc;
  iVar51 = uVar5 + (uVar50 >> 2 | iVar51 * 0x40000000) +
           ((uVar42 | uVar44 >> 2 | iVar64 * 0x40000000) & (uVar11 >> 2 | iVar75 * 0x40000000) |
           uVar42 & (uVar44 >> 2 | iVar64 * 0x40000000)) + (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar50 = iVar51 + 0x8f1bbcdc;
  iVar75 = uVar91 + (uVar11 >> 2 | iVar75 * 0x40000000) +
           ((uVar27 | uVar42 >> 2 | iVar43 * 0x40000000) & (uVar44 >> 2 | iVar64 * 0x40000000) |
           uVar27 & (uVar42 >> 2 | iVar43 * 0x40000000)) + (uVar50 >> 0x1b | uVar50 * 0x20);
  uVar57 = iVar75 + 0x8f1bbcdc;
  iVar64 = uVar47 + (uVar44 >> 2 | iVar64 * 0x40000000) +
           ((uVar50 | uVar27 >> 2 | iVar28 * 0x40000000) & (uVar42 >> 2 | iVar43 * 0x40000000) |
           uVar50 & (uVar27 >> 2 | iVar28 * 0x40000000)) + (uVar57 >> 0x1b | uVar57 * 0x20);
  uVar44 = iVar64 + 0x8f1bbcdc;
  iVar43 = uVar45 + (uVar42 >> 2 | iVar43 * 0x40000000) +
           ((uVar57 | uVar50 >> 2 | iVar51 * 0x40000000) & (uVar27 >> 2 | iVar28 * 0x40000000) |
           uVar57 & (uVar50 >> 2 | iVar51 * 0x40000000)) + (uVar44 >> 0x1b | uVar44 * 0x20);
  uVar42 = iVar43 + 0x8f1bbcdc;
  iVar28 = uVar34 + (uVar27 >> 2 | iVar28 * 0x40000000) +
           ((uVar44 | uVar57 >> 2 | iVar75 * 0x40000000) & (uVar50 >> 2 | iVar51 * 0x40000000) |
           uVar44 & (uVar57 >> 2 | iVar75 * 0x40000000)) + (uVar42 >> 0x1b | uVar42 * 0x20);
  uVar27 = iVar28 + 0x8f1bbcdc;
  iVar51 = uVar46 + (uVar50 >> 2 | iVar51 * 0x40000000) +
           ((uVar42 | uVar44 >> 2 | iVar64 * 0x40000000) & (uVar57 >> 2 | iVar75 * 0x40000000) |
           uVar42 & (uVar44 >> 2 | iVar64 * 0x40000000)) + (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar50 = iVar51 + 0x8f1bbcdc;
  iVar75 = uVar4 + (uVar57 >> 2 | iVar75 * 0x40000000) +
           ((uVar27 | uVar42 >> 2 | iVar43 * 0x40000000) & (uVar44 >> 2 | iVar64 * 0x40000000) |
           uVar27 & (uVar42 >> 2 | iVar43 * 0x40000000)) + (uVar50 >> 0x1b | uVar50 * 0x20);
  uVar57 = iVar75 + 0x8f1bbcdc;
  iVar64 = uVar55 + (uVar44 >> 2 | iVar64 * 0x40000000) +
           ((uVar50 | uVar27 >> 2 | iVar28 * 0x40000000) & (uVar42 >> 2 | iVar43 * 0x40000000) |
           uVar50 & (uVar27 >> 2 | iVar28 * 0x40000000)) + (uVar57 >> 0x1b | uVar57 * 0x20);
  uVar44 = iVar64 + 0x8f1bbcdc;
  iVar43 = uVar79 + (uVar42 >> 2 | iVar43 * 0x40000000) +
           ((uVar57 | uVar50 >> 2 | iVar51 * 0x40000000) & (uVar27 >> 2 | iVar28 * 0x40000000) |
           uVar57 & (uVar50 >> 2 | iVar51 * 0x40000000)) + (uVar44 >> 0x1b | uVar44 * 0x20);
  uVar42 = iVar43 + 0x8f1bbcdc;
  iVar28 = uVar94 + (uVar27 >> 2 | iVar28 * 0x40000000) +
           ((uVar44 | uVar57 >> 2 | iVar75 * 0x40000000) & (uVar50 >> 2 | iVar51 * 0x40000000) |
           uVar44 & (uVar57 >> 2 | iVar75 * 0x40000000)) + (uVar42 >> 0x1b | uVar42 * 0x20);
  uVar27 = iVar28 + 0x8f1bbcdc;
  iVar51 = uVar68 + (uVar50 >> 2 | iVar51 * 0x40000000) +
           ((uVar42 | uVar44 >> 2 | iVar64 * 0x40000000) & (uVar57 >> 2 | iVar75 * 0x40000000) |
           uVar42 & (uVar44 >> 2 | iVar64 * 0x40000000)) + (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar50 = iVar51 + 0x8f1bbcdc;
  iVar75 = uVar82 + (uVar57 >> 2 | iVar75 * 0x40000000) +
           ((uVar27 | uVar42 >> 2 | iVar43 * 0x40000000) & (uVar44 >> 2 | iVar64 * 0x40000000) |
           uVar27 & (uVar42 >> 2 | iVar43 * 0x40000000)) + (uVar50 >> 0x1b | uVar50 * 0x20);
  uVar57 = iVar75 + 0x8f1bbcdc;
  iVar64 = uVar6 + (uVar44 >> 2 | iVar64 * 0x40000000) +
           ((uVar50 | uVar27 >> 2 | iVar28 * 0x40000000) & (uVar42 >> 2 | iVar43 * 0x40000000) |
           uVar50 & (uVar27 >> 2 | iVar28 * 0x40000000)) + (uVar57 >> 0x1b | uVar57 * 0x20);
  uVar44 = iVar64 + 0x8f1bbcdc;
  iVar43 = uVar56 + (uVar42 >> 2 | iVar43 * 0x40000000) +
           ((uVar57 | uVar50 >> 2 | iVar51 * 0x40000000) & (uVar27 >> 2 | iVar28 * 0x40000000) |
           uVar57 & (uVar50 >> 2 | iVar51 * 0x40000000)) + (uVar44 >> 0x1b | uVar44 * 0x20);
  uVar42 = iVar43 + 0x8f1bbcdc;
  iVar28 = uVar24 + (uVar27 >> 2 | iVar28 * 0x40000000) +
           ((uVar44 | uVar57 >> 2 | iVar75 * 0x40000000) & (uVar50 >> 2 | iVar51 * 0x40000000) |
           uVar44 & (uVar57 >> 2 | iVar75 * 0x40000000)) + (uVar42 >> 0x1b | uVar42 * 0x20);
  uVar27 = iVar28 + 0x8f1bbcdc;
  uVar50 = uVar92 + (uVar50 >> 2 | iVar51 * 0x40000000) +
           ((uVar44 >> 2 | iVar64 * 0x40000000) ^ (uVar57 >> 2 | iVar75 * 0x40000000) ^ uVar42) +
           (uVar27 >> 0x1b | uVar27 * 0x20) + 0xca62c1d6;
  uVar57 = uVar69 + (uVar57 >> 2 | iVar75 * 0x40000000) +
           ((uVar42 >> 2 | iVar43 * 0x40000000) ^ (uVar44 >> 2 | iVar64 * 0x40000000) ^ uVar27) +
           (uVar50 >> 0x1b | uVar50 * 0x20) + 0xca62c1d6;
  uVar44 = uVar38 + (uVar44 >> 2 | iVar64 * 0x40000000) +
           ((uVar27 >> 2 | iVar28 * 0x40000000) ^ (uVar42 >> 2 | iVar43 * 0x40000000) ^ uVar50) +
           (uVar57 >> 0x1b | uVar57 * 0x20) + 0xca62c1d6;
  uVar42 = uVar26 + (uVar42 >> 2 | iVar43 * 0x40000000) +
           ((uVar50 >> 2 | uVar50 * 0x40000000) ^ (uVar27 >> 2 | iVar28 * 0x40000000) ^ uVar57) +
           (uVar44 >> 0x1b | uVar44 * 0x20) + 0xca62c1d6;
  uVar27 = uVar61 + (uVar27 >> 2 | iVar28 * 0x40000000) +
           ((uVar57 >> 2 | uVar57 * 0x40000000) ^ (uVar50 >> 2 | uVar50 * 0x40000000) ^ uVar44) +
           (uVar42 >> 0x1b | uVar42 * 0x20) + 0xca62c1d6;
  uVar50 = uVar36 + (uVar50 >> 2 | uVar50 * 0x40000000) +
           ((uVar44 >> 2 | uVar44 * 0x40000000) ^ (uVar57 >> 2 | uVar57 * 0x40000000) ^ uVar42) +
           (uVar27 >> 0x1b | uVar27 * 0x20) + 0xca62c1d6;
  uVar11 = uVar3 + (uVar57 >> 2 | uVar57 * 0x40000000) +
           ((uVar42 >> 2 | uVar42 * 0x40000000) ^ (uVar44 >> 2 | uVar44 * 0x40000000) ^ uVar27) +
           (uVar50 >> 0x1b | uVar50 * 0x20) + 0xca62c1d6;
  uVar57 = uVar96 + (uVar44 >> 2 | uVar44 * 0x40000000) +
           ((uVar27 >> 2 | uVar27 * 0x40000000) ^ (uVar42 >> 2 | uVar42 * 0x40000000) ^ uVar50) +
           (uVar11 >> 0x1b | uVar11 * 0x20) + 0xca62c1d6;
  uVar42 = uVar81 + (uVar42 >> 2 | uVar42 * 0x40000000) +
           ((uVar50 >> 2 | uVar50 * 0x40000000) ^ (uVar27 >> 2 | uVar27 * 0x40000000) ^ uVar11) +
           (uVar57 >> 0x1b | uVar57 * 0x20) + 0xca62c1d6;
  uVar27 = uVar16 + (uVar27 >> 2 | uVar27 * 0x40000000) +
           ((uVar11 >> 2 | uVar11 * 0x40000000) ^ (uVar50 >> 2 | uVar50 * 0x40000000) ^ uVar57) +
           (uVar42 >> 0x1b | uVar42 * 0x20) + 0xca62c1d6;
  uVar44 = uVar7 + (uVar50 >> 2 | uVar50 * 0x40000000) +
           ((uVar57 >> 2 | uVar57 * 0x40000000) ^ (uVar11 >> 2 | uVar11 * 0x40000000) ^ uVar42) +
           (uVar27 >> 0x1b | uVar27 * 0x20) + 0xca62c1d6;
  uVar11 = uVar13 + (uVar11 >> 2 | uVar11 * 0x40000000) +
           ((uVar42 >> 2 | uVar42 * 0x40000000) ^ (uVar57 >> 2 | uVar57 * 0x40000000) ^ uVar27) +
           (uVar44 >> 0x1b | uVar44 * 0x20) + 0xca62c1d6;
  uVar50 = uVar39 + (uVar57 >> 2 | uVar57 * 0x40000000) +
           ((uVar27 >> 2 | uVar27 * 0x40000000) ^ (uVar42 >> 2 | uVar42 * 0x40000000) ^ uVar44) +
           (uVar11 >> 0x1b | uVar11 * 0x20) + 0xca62c1d6;
  uVar42 = uVar23 + (uVar42 >> 2 | uVar42 * 0x40000000) +
           ((uVar44 >> 2 | uVar44 * 0x40000000) ^ (uVar27 >> 2 | uVar27 * 0x40000000) ^ uVar11) +
           (uVar50 >> 0x1b | uVar50 * 0x20) + 0xca62c1d6;
  uVar27 = uVar14 + (uVar27 >> 2 | uVar27 * 0x40000000) +
           ((uVar11 >> 2 | uVar11 * 0x40000000) ^ (uVar44 >> 2 | uVar44 * 0x40000000) ^ uVar50) +
           (uVar42 >> 0x1b | uVar42 * 0x20) + 0xca62c1d6;
  uVar57 = uVar40 + (uVar44 >> 2 | uVar44 * 0x40000000) +
           ((uVar50 >> 2 | uVar50 * 0x40000000) ^ (uVar11 >> 2 | uVar11 * 0x40000000) ^ uVar42) +
           (uVar27 >> 0x1b | uVar27 * 0x20) + 0xca62c1d6;
  param_2[4] = param_2[4] + (uVar57 >> 2 | uVar57 * 0x40000000);
  uVar44 = uVar25 + (uVar11 >> 2 | uVar11 * 0x40000000) +
           ((uVar42 >> 2 | uVar42 * 0x40000000) ^ (uVar50 >> 2 | uVar50 * 0x40000000) ^ uVar27) +
           (uVar57 >> 0x1b | uVar57 * 0x20) + 0xca62c1d6;
  param_2[3] = param_2[3] + (uVar44 >> 2 | uVar44 * 0x40000000);
  uVar50 = uVar41 + (uVar50 >> 2 | uVar50 * 0x40000000) +
           ((uVar27 >> 2 | uVar27 * 0x40000000) ^ (uVar42 >> 2 | uVar42 * 0x40000000) ^ uVar57) +
           (uVar44 >> 0x1b | uVar44 * 0x20) + 0xca62c1d6;
  param_2[2] = param_2[2] + (uVar50 >> 2 | uVar50 * 0x40000000);
  uVar42 = uVar17 + (uVar42 >> 2 | uVar42 * 0x40000000) +
           ((uVar57 >> 2 | uVar57 * 0x40000000) ^ (uVar27 >> 2 | uVar27 * 0x40000000) ^ uVar44) +
           (uVar50 >> 0x1b | uVar50 * 0x20) + 0xca62c1d6;
  param_2[1] = uVar42 + param_2[1];
  *param_2 = *param_2 + (uVar48 >> 0x1f | uVar48 << 1) + (uVar27 >> 2 | uVar27 * 0x40000000) +
             ((uVar44 >> 2 | uVar44 * 0x40000000) ^ (uVar57 >> 2 | uVar57 * 0x40000000) ^ uVar50) +
             (uVar42 >> 0x1b | uVar42 * 0x20) + 0xca62c1d6;
  return;
}


// =========================================================================
// Function: FUN_718c4264
// Entry: 0x718c4264 | Size: 240 bytes
// =========================================================================

void FUN_718c4264(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = uVar1 + param_3 * 8;
  *(uint *)(param_1 + 0x1c) =
       (param_3 >> 0x1d) + *(int *)(param_1 + 0x1c) + (uint)CARRY4(uVar1,param_3 * 8);
  uVar1 = (uVar1 & 0x1ff) >> 3;
  if (uVar1 + param_3 < 0x40) {
    iVar3 = 0;
  }
  else {
    imp___aeabi_memcpy(param_1 + 0x20 + uVar1,param_2,0x40 - uVar1);
    FUN_718c2f5c(param_1,param_1 + 4,param_1 + 0x20);
    uVar2 = uVar1 ^ 0x7f;
    iVar3 = 0x40 - uVar1;
    while (uVar1 = 0, uVar2 < param_3) {
      FUN_718c2f5c(param_1,param_1 + 4,param_2 + iVar3);
      uVar2 = iVar3 + 0x7f;
      iVar3 = iVar3 + 0x40;
    }
  }
  imp___aeabi_memcpy(param_1 + uVar1 + 0x20,param_2 + iVar3,param_3 - iVar3);
  return;
}


// =========================================================================
// Function: FUN_718c43b0
// Entry: 0x718c43b0 | Size: 432 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_718c43b0(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint uStack_24;
  uint uStack_20;
  int iStack_1c;
  
  iStack_1c = _ext___stack_chk_guard;
  uVar1 = *(uint *)(param_1 + 0x1c);
  uStack_24 = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
              uVar1 >> 0x18;
  puVar7 = (uint *)(param_1 + 0x18);
  uVar1 = *puVar7;
  uStack_20 = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
              uVar1 >> 0x18;
  FUN_718c4264(param_1,&DAT_700686e9,1);
  uVar1 = *puVar7;
  while ((uVar1 & 0x1f8) != 0x1c0) {
    FUN_718c4264(param_1,&DAT_70086ed8,1);
    uVar1 = *(uint *)(param_1 + 0x18);
  }
  FUN_718c4264(param_1,&uStack_24,8);
  puVar5 = (uint *)(param_1 + 4);
  uVar1 = *puVar5;
  uVar2 = *(uint *)(param_1 + 8);
  uVar3 = *(uint *)(param_1 + 0xc);
  uVar4 = *(uint *)(param_1 + 0x10);
  uVar6 = *(uint *)(param_1 + 0x14);
  *(uint *)(param_1 + 0x60) =
       uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18;
  *(uint *)(param_1 + 100) =
       uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 | uVar2 >> 0x18;
  *(uint *)(param_1 + 0x68) =
       uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18;
  *(uint *)(param_1 + 0x6c) =
       uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18;
  *(uint *)(param_1 + 0x70) =
       uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18;
  imp___aeabi_memclr4(param_1 + 0x20,0x40);
  *puVar7 = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *puVar5 = 0;
  if (_ext___stack_chk_guard == iStack_1c) {
    FUN_718c2f5c(param_1,puVar5,param_1 + 0x20);
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_718c4620
// Entry: 0x718c4620 | Size: 8 bytes
// =========================================================================

int FUN_718c4620(int param_1)

{
  return param_1 + 0x60;
}


// =========================================================================
// Function: FUN_718c4640
// Entry: 0x718c4640 | Size: 40 bytes
// =========================================================================

undefined4 FUN_718c4640(undefined4 param_1)

{
  imp_pthread_mutex_init(param_1,0);
  return param_1;
}


// =========================================================================
// Function: imp_pthread_mutex_lock
// Entry: 0x718c46dc | Size: 4 bytes
// =========================================================================

void imp_pthread_mutex_lock(void)

{
  return;
}


// =========================================================================
// Function: imp_pthread_mutex_lock
// Entry: 0x718c46f8 | Size: 4 bytes
// =========================================================================

void imp_pthread_mutex_lock(void)

{
  return;
}


// =========================================================================
// Function: imp_pthread_mutex_unlock
// Entry: 0x718c4714 | Size: 4 bytes
// =========================================================================

void imp_pthread_mutex_unlock(void)

{
  return;
}


// =========================================================================
// Function: imp_pthread_mutex_unlock
// Entry: 0x718c4730 | Size: 4 bytes
// =========================================================================

void imp_pthread_mutex_unlock(void)

{
  return;
}


// =========================================================================
// Function: FUN_718c47a0
// Entry: 0x718c47a0 | Size: 484 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_718c47a0(undefined4 param_1,uint param_2,undefined4 param_3,byte *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint extraout_r1;
  undefined4 uStack_38;
  undefined2 uStack_34;
  ushort uStack_32;
  undefined4 uStack_30;
  int iStack_24;
  
  iStack_24 = _ext___stack_chk_guard;
  iVar2 = imp_socket(2,2,0);
  if (iVar2 == -1) {
    iVar1 = -1;
  }
  else {
    uStack_38 = 1;
    imp_setsockopt(iVar2,1,2,&uStack_38,4);
    uStack_38 = 0x40000;
    imp_setsockopt(iVar2,1,8,&uStack_38,4);
    uStack_38 = 0x4000;
    imp_setsockopt(iVar2,1,7,&uStack_38,4);
    iVar3 = imp_fcntl(iVar2,4,0x800);
    iVar1 = -1;
    if (iVar3 == 0) {
      imp_setsockopt(iVar2,1,6,&uStack_38,4);
      uStack_32 = (ushort)((param_2 & 0xff) << 8) | (ushort)(param_2 >> 8) & 0xff;
      uVar4 = extraout_r1;
      if (param_4 != (byte *)0x0) {
        uVar4 = (uint)*param_4;
      }
      uStack_30 = 0;
      uStack_34 = 2;
      if (param_4 != (byte *)0x0 && uVar4 != 0) {
        uStack_30 = imp_inet_addr(param_4);
      }
      iVar3 = imp_bind(iVar2,&uStack_34,0x10);
      iVar1 = iVar2;
      if (iVar3 == -1) {
        iVar1 = -1;
      }
    }
  }
  if (_ext___stack_chk_guard != iStack_24) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail(iVar1);
  }
  return;
}


// =========================================================================
// Function: FUN_718c4a50
// Entry: 0x718c4a50 | Size: 72 bytes
// =========================================================================

void FUN_718c4a50(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = imp_gethostbyname(param_2);
  puVar1 = (undefined4 *)0x0;
  if (iVar2 != 0) {
    puVar1 = (undefined4 *)**(int **)(iVar2 + 0x10);
  }
  if (iVar2 != 0 && puVar1 != (undefined4 *)0x0) {
    imp_inet_ntoa(*puVar1);
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_718c4ad4
// Entry: 0x718c4ad4 | Size: 288 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_718c4ad4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_270;
  undefined2 uStack_26c;
  ushort uStack_26a;
  undefined4 uStack_268;
  undefined1 auStack_25c [576];
  int iStack_1c;
  
  iStack_1c = _ext___stack_chk_guard;
  uStack_26c = 2;
  uStack_270 = 0x10;
  if (param_2 == -1) {
LAB_718c4b80:
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = imp_recvfrom(param_2,auStack_25c,0x240,0,&uStack_26c,&uStack_270);
    uVar1 = 1;
    if ((iVar2 < 1) && (iVar2 != -1)) goto LAB_718c4b88;
    if (iVar2 == 0) goto LAB_718c4b80;
    if (iVar2 != -1) {
      FUN_718a708c(uStack_268,uStack_26a << 8 | uStack_26a >> 8,auStack_25c,iVar2,param_3);
      uVar1 = 1;
      goto LAB_718c4b88;
    }
    uVar1 = 0;
  }
  *param_4 = uVar1;
LAB_718c4b88:
  if (_ext___stack_chk_guard != iStack_1c) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail(uVar1);
  }
  return;
}


// =========================================================================
// Function: FUN_718c4c60
// Entry: 0x718c4c60 | Size: 64 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x718c4dd8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_718c4c60(undefined4 param_1,int param_2,char *param_3,int param_4,undefined4 param_5,
                 uint param_6)

{
  char cVar1;
  undefined2 uVar2;
  uint uVar3;
  char *pcVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined1 *unaff_r9;
  undefined2 uStack_38;
  ushort uStack_36;
  undefined4 uStack_34;
  int iStack_28;
  
  iStack_28 = _ext___stack_chk_guard;
  if (param_2 == -1) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar1 = '\0';
    if (*param_3 != '\0') {
      unaff_r9 = &DAT_711f6d5c;
      cVar1 = DAT_711f6d5c;
    }
    if (*param_3 != '\0' && cVar1 != '\0') {
      pcVar4 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_70102524);
      if (*pcVar4 == '\0') {
        puVar7 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_70102514);
        *puVar7 = 0x56b31d75;
        *(undefined1 *)((int)puVar7 + 7) = 1;
        *(undefined4 *)((int)puVar7 + 3) = 0xb7209556;
        GFDIUClbc_QcPNgD_wH(&LAB_718c544c,puVar7,&DAT_70b0e000);
        puVar8 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_70102524);
        *puVar8 = 1;
      }
      pbVar5 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_70102514);
      if (pbVar5[7] != 0) {
        pbVar5[7] = 0;
        *pbVar5 = *pbVar5 ^ 0x45;
        pbVar5[1] = pbVar5[1] ^ 0x65;
        pbVar5[2] = pbVar5[2] ^ 0x85;
        pbVar5[3] = pbVar5[3] ^ 0x6f;
        pbVar5[4] = pbVar5[4] ^ 0xa3;
        pbVar5[5] = pbVar5[5] ^ 0x19;
        pbVar5[6] = pbVar5[6] ^ 0xb7;
      }
      uVar2 = imp_strtoul(pbVar5,0,0x10);
      *(undefined2 *)(param_3 + 1) = uVar2;
      *unaff_r9 = 0;
    }
    uStack_36 = (ushort)((param_6 & 0xff) << 8) | (ushort)(param_6 >> 8) & 0xff;
    uStack_34 = param_5;
    uStack_38 = 2;
    FUN_71892b24(param_3,param_4,param_6,0);
    do {
      iVar6 = imp___sendto_chk(param_2,&DAT_71202750,param_4 + 1,0xffc,0,&uStack_38,0x10);
    } while (iVar6 == 0);
    uVar3 = (uint)(iVar6 == -1);
  }
  if (_ext___stack_chk_guard != iStack_28) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail(uVar3);
  }
  return;
}


// =========================================================================
// Function: FUN_718c5118
// Entry: 0x718c5118 | Size: 88 bytes
// =========================================================================

void FUN_718c5118(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  uVar1 = imp_inet_addr(param_5);
  FUN_718c4c60(uVar1,param_2,param_3,param_4,uVar1,param_6);
  return;
}


// =========================================================================
// Function: FUN_718c51a8
// Entry: 0x718c51a8 | Size: 276 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_718c51a8(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 auStack_6c [80];
  int iStack_1c;
  
  iStack_1c = _ext___stack_chk_guard;
  iVar3 = imp_gethostname(auStack_6c,0x50);
  if (((iVar3 != -1) && (iVar3 = imp_gethostbyname(auStack_6c), iVar3 != 0)) &&
     (puVar2 = (undefined4 *)**(int **)(iVar3 + 0x10), puVar2 != (undefined4 *)0x0)) {
    uVar5 = 0;
    do {
      uVar4 = imp_inet_ntoa(*puVar2);
      imp_strcpy(param_2,uVar4);
      if (8 < uVar5) break;
      param_2 = param_2 + 0x10;
      iVar1 = uVar5 * 4;
      uVar5 = uVar5 + 1;
      puVar2 = *(undefined4 **)(*(int *)(iVar3 + 0x10) + iVar1 + 4);
    } while (puVar2 != (undefined4 *)0x0);
  }
  if (_ext___stack_chk_guard != iStack_1c) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail();
  }
  return;
}


// =========================================================================
// Function: FUN_718c5348
// Entry: 0x718c5348 | Size: 168 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_718c5348(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uStack_20;
  undefined1 auStack_1c [2];
  ushort uStack_1a;
  int iStack_c;
  
  iStack_c = _ext___stack_chk_guard;
  uStack_20 = 0x10;
  iVar2 = imp_getsockname(param_2,auStack_1c,&uStack_20);
  uVar1 = 0;
  if (iVar2 == 0) {
    uVar1 = ((uint)uStack_1a << 0x18 | (uint)(uStack_1a >> 8) << 0x10) >> 0x10;
  }
  if (_ext___stack_chk_guard != iStack_c) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail(uVar1);
  }
  return;
}


// =========================================================================
// Function: FUN_718c555c
// Entry: 0x718c555c | Size: 148 bytes
// =========================================================================

void FUN_718c555c(void)

{
  bool bVar1;
  
  bVar1 = DAT_71204298 != 0;
  DAT_71204298 = DAT_71204298 + 1;
  if (bVar1) {
    return;
  }
  thunk_MwhHq(0x18);
  DAT_71204294 = FUN_718c57c4();
  return;
}


// =========================================================================
// Function: FUN_718c5780
// Entry: 0x718c5780 | Size: 32 bytes
// =========================================================================

undefined4 FUN_718c5780(void)

{
  return DAT_71204294;
}


// =========================================================================
// Function: FUN_718c57c4
// Entry: 0x718c57c4 | Size: 328 bytes
// =========================================================================

/* WARNING: Type propagation algorithm not settling */

int * FUN_718c57c4(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int aiStack_24 [3];
  
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar2 = thunk_MwhHq(0x804);
  uVar3 = FUN_71888614();
  FUN_71888a28(uVar3,&DAT_70102534);
  aiStack_24[0] = 0;
  if (((char)param_1[5] == '\0') || (param_1[4] != 0)) {
    iVar5 = param_1[1];
    if (iVar5 != 0) {
      iVar4 = iVar5 + -1;
      iVar1 = 0;
      iVar5 = iVar5 / 2;
      do {
        iVar6 = *(int *)(*param_1 + iVar5 * 8);
        if (iVar6 == 0) {
          iVar1 = *param_1 + iVar5 * 8;
          *(undefined1 *)(param_1 + 5) = 1;
          param_1[3] = iVar5;
          param_1[4] = 0;
          goto LAB_718c58bc;
        }
        if (iVar6 < 1) {
          iVar1 = iVar5 + 1;
        }
        else {
          iVar4 = iVar5 + -1;
        }
        iVar5 = iVar1 + (iVar4 - iVar1) / 2;
      } while (iVar1 <= iVar4);
    }
    aiStack_24[1] = 0;
    aiStack_24[2] = uVar2;
    iVar5 = FUN_718c5d20(param_1,aiStack_24,aiStack_24 + 1);
    *(undefined1 *)(param_1 + 5) = 1;
    param_1[3] = iVar5;
    param_1[4] = aiStack_24[0];
  }
  else {
    iVar1 = *param_1 + param_1[3] * 8;
LAB_718c58bc:
    *(undefined4 *)(iVar1 + 4) = uVar2;
  }
  return param_1;
}


// =========================================================================
// Function: FUN_718c5ab0
// Entry: 0x718c5ab0 | Size: 128 bytes
// =========================================================================

undefined4 FUN_718c5ab0(int *param_1,undefined1 *param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  byte *pbVar12;
  char *pcVar13;
  byte bStack_27;
  byte bStack_26;
  
  if (((char)param_1[5] == '\0') || (param_1[4] != param_5)) {
    iVar6 = param_1[1];
    if (iVar6 != 0) {
      iVar4 = iVar6 + -1;
      iVar6 = iVar6 / 2;
      iVar7 = 0;
      do {
        iVar3 = *(int *)(*param_1 + iVar6 * 8);
        if (iVar3 == param_5) {
          param_1[3] = iVar6;
          *(undefined1 *)(param_1 + 5) = 1;
          param_1[4] = param_5;
          goto LAB_718c5b38;
        }
        if (iVar3 < param_5) {
          iVar7 = iVar6 + 1;
        }
        if (param_5 < iVar3) {
          iVar4 = iVar6 + -1;
        }
        iVar6 = iVar7 + (iVar4 - iVar7) / 2;
      } while (iVar7 <= iVar4);
    }
    uVar11 = 0;
  }
  else {
LAB_718c5b38:
    uVar11 = 0;
    uVar2 = *(undefined4 *)(*param_1 + param_1[3] * 8 + 4);
    *param_2 = 0;
    iVar6 = *(int *)(param_4 + 0x12);
    uVar10 = *(uint *)(param_4 + 0x129);
    if ((int)uVar10 < iVar6) {
      iVar4 = *(int *)(param_4 + 3);
      uVar8 = uVar10 + 1;
      bVar1 = *(byte *)(iVar4 + ((int)uVar10 >> 3));
      *(uint *)(param_4 + 0x129) = uVar8;
      if (((uint)bVar1 << (uVar10 & 7) & 0x80) == 0) {
        uVar5 = uVar10 + 0x11;
        if (iVar6 < (int)uVar5) {
          return 0;
        }
        pcVar13 = (char *)(iVar4 + ((int)uVar8 >> 3));
        uVar8 = uVar8 & 7;
        if (uVar8 != 0) {
          uVar5 = (uint)(byte)pcVar13[1];
        }
        bStack_26 = *pcVar13 << uVar8;
        iVar7 = 0x11;
        if (uVar8 != 0) {
          bStack_26 = bStack_26 | (byte)(uVar5 >> (8 - uVar8 & 0xff));
        }
        *(uint *)(param_4 + 0x129) = uVar10 + 9;
        pcVar13 = (char *)(iVar4 + ((int)(uVar10 + 9) >> 3));
        bStack_27 = *pcVar13 << uVar8;
        if (uVar8 != 0) {
          bStack_27 = bStack_27 | (byte)pcVar13[1] >> (8 - uVar8 & 0xff);
        }
      }
      else {
        bStack_27 = 0;
        if (iVar6 <= (int)uVar8) {
          return 0;
        }
        bVar1 = *(byte *)(iVar4 + ((int)uVar8 >> 3));
        uVar8 = uVar8 & 7;
        uVar5 = uVar10 + 2;
        *(uint *)(param_4 + 0x129) = uVar5;
        if (((uint)bVar1 << uVar8 & 0x80) == 0) {
          if (iVar6 < (int)(uVar10 + 10)) {
            return 0;
          }
          pcVar13 = (char *)(iVar4 + ((int)uVar5 >> 3));
          uVar5 = uVar5 & 7;
          iVar7 = 10;
          if (uVar5 != 0) {
            uVar8 = (uint)(byte)pcVar13[1];
          }
          bStack_26 = *pcVar13 << uVar5;
          if (uVar5 != 0) {
            bStack_26 = bStack_26 | (byte)(uVar8 >> (8 - uVar5 & 0xff));
          }
        }
        else {
          if (iVar6 < (int)(uVar10 + 6)) {
            return 0;
          }
          iVar7 = 6;
          pbVar12 = (byte *)(iVar4 + ((int)uVar5 >> 3));
          uVar5 = uVar5 & 7;
          if (4 < uVar5) {
            uVar8 = (uint)pbVar12[1];
          }
          uVar9 = (uint)*pbVar12 << uVar5;
          if (4 < uVar5) {
            uVar9 = uVar9 | uVar8 >> (8 - uVar5 & 0xff);
          }
          bStack_26 = (byte)((uVar9 & 0xff) >> 4);
        }
      }
      uVar11 = 0;
      *(uint *)(param_4 + 0x129) = uVar10 + iVar7;
      if ((int)(uint)CONCAT11(bStack_27,bStack_26) <= (int)(iVar6 - (uVar10 + iVar7))) {
        iVar4 = FUN_718896d0(uVar2,param_4,(uint)CONCAT11(bStack_27,bStack_26),param_3,param_2);
        uVar11 = 1;
        iVar6 = param_3 + -1;
        if (iVar4 < param_3) {
          iVar6 = iVar4;
        }
        param_2[iVar6] = 0;
      }
    }
  }
  return uVar11;
}


// =========================================================================
// Function: FUN_718c5b30
// Entry: 0x718c5b30 | Size: 456 bytes
// =========================================================================

undefined4 FUN_718c5b30(int *param_1,undefined1 *param_2,int param_3,int param_4)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 unaff_r7;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int unaff_r9;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  byte *pbVar11;
  char *pcVar12;
  undefined1 *puStack00000000;
  byte bStack00000009;
  byte bStack0000000a;
  
  *(undefined1 *)(param_1 + 5) = unaff_r7;
  param_1[4] = unaff_r9;
  uVar9 = 0;
  uVar2 = *(undefined4 *)(*param_1 + param_1[3] * 8 + 4);
  *param_2 = 0;
  iVar7 = *(int *)(param_4 + 0x12);
  uVar8 = *(uint *)(param_4 + 0x129);
  if ((int)uVar8 < iVar7) {
    iVar10 = *(int *)(param_4 + 3);
    uVar4 = uVar8 + 1;
    bVar1 = *(byte *)(iVar10 + ((int)uVar8 >> 3));
    *(uint *)(param_4 + 0x129) = uVar4;
    if (((uint)bVar1 << (uVar8 & 7) & 0x80) == 0) {
      uVar3 = uVar8 + 0x11;
      if (iVar7 < (int)uVar3) {
        return 0;
      }
      pcVar12 = (char *)(iVar10 + ((int)uVar4 >> 3));
      uVar4 = uVar4 & 7;
      if (uVar4 != 0) {
        uVar3 = (uint)(byte)pcVar12[1];
      }
      bStack0000000a = *pcVar12 << uVar4;
      iVar6 = 0x11;
      if (uVar4 != 0) {
        bStack0000000a = bStack0000000a | (byte)(uVar3 >> (8 - uVar4 & 0xff));
      }
      *(uint *)(param_4 + 0x129) = uVar8 + 9;
      pcVar12 = (char *)(iVar10 + ((int)(uVar8 + 9) >> 3));
      bStack00000009 = *pcVar12 << uVar4;
      if (uVar4 != 0) {
        bStack00000009 = bStack00000009 | (byte)pcVar12[1] >> (8 - uVar4 & 0xff);
      }
    }
    else {
      bStack00000009 = 0;
      if (iVar7 <= (int)uVar4) {
        return 0;
      }
      bVar1 = *(byte *)(iVar10 + ((int)uVar4 >> 3));
      uVar4 = uVar4 & 7;
      uVar3 = uVar8 + 2;
      *(uint *)(param_4 + 0x129) = uVar3;
      if (((uint)bVar1 << uVar4 & 0x80) == 0) {
        if (iVar7 < (int)(uVar8 + 10)) {
          return 0;
        }
        pcVar12 = (char *)(iVar10 + ((int)uVar3 >> 3));
        uVar3 = uVar3 & 7;
        iVar6 = 10;
        if (uVar3 != 0) {
          uVar4 = (uint)(byte)pcVar12[1];
        }
        bStack0000000a = *pcVar12 << uVar3;
        if (uVar3 != 0) {
          bStack0000000a = bStack0000000a | (byte)(uVar4 >> (8 - uVar3 & 0xff));
        }
      }
      else {
        if (iVar7 < (int)(uVar8 + 6)) {
          return 0;
        }
        iVar6 = 6;
        pbVar11 = (byte *)(iVar10 + ((int)uVar3 >> 3));
        uVar3 = uVar3 & 7;
        if (4 < uVar3) {
          uVar4 = (uint)pbVar11[1];
        }
        uVar5 = (uint)*pbVar11 << uVar3;
        if (4 < uVar3) {
          uVar5 = uVar5 | uVar4 >> (8 - uVar3 & 0xff);
        }
        bStack0000000a = (byte)((uVar5 & 0xff) >> 4);
      }
    }
    uVar9 = 0;
    *(uint *)(param_4 + 0x129) = uVar8 + iVar6;
    if ((int)(uint)CONCAT11(bStack00000009,bStack0000000a) <= (int)(iVar7 - (uVar8 + iVar6))) {
      puStack00000000 = param_2;
      iVar10 = FUN_718896d0(uVar2,param_4,(uint)CONCAT11(bStack00000009,bStack0000000a),param_3);
      uVar9 = 1;
      iVar7 = param_3 + -1;
      if (iVar10 < param_3) {
        iVar7 = iVar10;
      }
      param_2[iVar7] = 0;
    }
  }
  return uVar9;
}


// =========================================================================
// Function: FUN_718c5d20
// Entry: 0x718c5d20 | Size: 332 bytes
// =========================================================================

uint FUN_718c5d20(int *param_1,int *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  
  uVar8 = param_1[1];
  if (uVar8 == 0) {
    uVar1 = 0;
  }
  else {
    iVar5 = uVar8 - 1;
    iVar3 = (int)uVar8 / 2;
    uVar1 = 0;
    do {
      iVar4 = *(int *)(*param_1 + iVar3 * 8);
      if (*param_2 == iVar4) {
        return 0xffffffff;
      }
      if (*param_2 < iVar4) {
        iVar5 = iVar3 + -1;
      }
      else {
        uVar1 = iVar3 + 1;
      }
      iVar3 = uVar1 + (int)(iVar5 - uVar1) / 2;
    } while ((int)uVar1 <= iVar5);
  }
  uVar7 = *param_3;
  uVar6 = param_3[1];
  if (uVar1 < uVar8) {
    FUN_718c5ec4(param_1,uVar7,uVar6,uVar1);
  }
  else {
    if (uVar8 == param_1[2]) {
      uVar1 = uVar8 << 1;
      if (uVar8 == 0) {
        uVar1 = 0x10;
      }
      iVar3 = uVar1 << 3;
      param_1[2] = uVar1;
      if (0x1fffffff < uVar1) {
        iVar3 = -1;
      }
      iVar3 = thunk__IBDl(iVar3);
      iVar5 = *param_1;
      imp___aeabi_memcpy(iVar3,iVar5,uVar8 << 3);
      if (iVar5 != 0) {
        dGrRHE(iVar5);
        uVar8 = param_1[1];
      }
      *param_1 = iVar3;
    }
    else {
      iVar3 = *param_1;
    }
    puVar2 = (undefined4 *)(iVar3 + uVar8 * 8);
    *puVar2 = uVar7;
    puVar2[1] = uVar6;
    uVar1 = param_1[1];
    param_1[1] = uVar1 + 1;
  }
  return uVar1;
}


// =========================================================================
// Function: FUN_718c5ec4
// Entry: 0x718c5ec4 | Size: 224 bytes
// =========================================================================

void FUN_718c5ec4(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = param_1[1];
  if (iVar4 == param_1[2]) {
    uVar3 = iVar4 << 1;
    if (iVar4 == 0) {
      uVar3 = 0x10;
    }
    iVar1 = uVar3 << 3;
    param_1[2] = uVar3;
    if (0x1fffffff < uVar3) {
      iVar1 = -1;
    }
    iVar1 = thunk__IBDl(iVar1);
    iVar5 = *param_1;
    imp___aeabi_memcpy(iVar1,iVar5,iVar4 << 3);
    if (iVar5 != 0) {
      dGrRHE(iVar5);
      iVar4 = param_1[1];
    }
    *param_1 = iVar1;
  }
  else {
    iVar1 = *param_1;
  }
  iVar1 = iVar1 + param_4 * 8;
  imp___aeabi_memmove(iVar1 + 8,iVar1,(iVar4 - param_4) * 8);
  puVar2 = (undefined4 *)(*param_1 + param_4 * 8);
  *puVar2 = param_2;
  puVar2[1] = param_3;
  param_1[1] = param_1[1] + 1;
  return;
}


// =========================================================================
// Function: FUN_718c5ffc
// Entry: 0x718c5ffc | Size: 148 bytes
// =========================================================================

void FUN_718c5ffc(void)

{
  bool bVar1;
  
  bVar1 = DAT_712042a0 != 0;
  DAT_712042a0 = DAT_712042a0 + 1;
  if (bVar1) {
    return;
  }
  DAT_7120429c = (undefined4 *)thunk_MwhHq(0xc);
  *DAT_7120429c = 0;
  DAT_7120429c[1] = 0;
  DAT_7120429c[2] = 0;
  return;
}


// =========================================================================
// Function: FUN_718c62b4
// Entry: 0x718c62b4 | Size: 44 bytes
// =========================================================================

undefined4 FUN_718c62b4(undefined4 param_1,undefined4 param_2)

{
  dGrRHE(param_2);
  return param_1;
}


// =========================================================================
// Function: FUN_718c63c8
// Entry: 0x718c63c8 | Size: 972 bytes
// =========================================================================

undefined4 FUN_718c63c8(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  iVar1 = DAT_712042b0;
  iVar10 = 0;
  iVar9 = 0;
  iVar11 = DAT_712042b0 + -6;
  iVar2 = DAT_712042b0;
  if (6 < DAT_712042b0) {
    imp___aeabi_memcpy4(&uStack_48,param_1,DAT_712042b0 * 4 + -0x18);
    uVar3 = 0;
    iVar2 = iVar1;
    do {
      if (iVar9 < 4) {
        iVar13 = uVar3 + 1;
        iVar2 = iVar13;
        if (iVar13 < iVar11) {
          iVar2 = iVar11;
        }
        uVar7 = 3U - iVar9;
        if (iVar2 + ~uVar3 < 3U - iVar9) {
          uVar7 = iVar2 + ~uVar3;
        }
        imp___aeabi_memcpy4(param_3 + iVar10 * 0x10 + iVar9 * 4,&uStack_48 + uVar3,uVar7 * 4 + 4);
        uVar3 = iVar13 + uVar7;
        iVar9 = iVar9 + uVar7 + 1;
        iVar2 = DAT_712042b0;
      }
      if (iVar9 == 4) {
        iVar10 = iVar10 + 1;
        iVar9 = 0;
      }
    } while (((int)uVar3 < iVar11) && (iVar10 <= iVar2));
  }
  if (iVar10 <= iVar2) {
    iVar12 = 0;
    iVar4 = iVar1 + -7;
    iVar13 = iVar4 * 4;
    uStack_54 = uStack_48 & 0xff;
    uStack_50 = uStack_48 >> 8 & 0xff;
    uStack_4c = uStack_48 >> 0x10 & 0xff;
    uStack_58 = uStack_48 >> 0x18;
    do {
      uVar3 = uStack_38;
      uStack_4c = uStack_4c ^ (byte)(&DAT_70102934)[*(byte *)((int)&uStack_48 + iVar13 + 3)];
      uStack_50 = uStack_50 ^ (byte)(&DAT_70102934)[*(byte *)((int)&uStack_48 + iVar13 + 2)];
      uStack_54 = uStack_54 ^ (byte)(&DAT_70102934)[*(byte *)((int)&uStack_48 + iVar13 + 1)] ^
                  (uint)(byte)(&DAT_70105b34)[iVar12 * 4];
      uStack_58 = uStack_58 ^ (byte)(&DAT_70102934)[*(byte *)(&uStack_48 + iVar4)];
      uStack_48 = CONCAT13((char)uStack_58,
                           (int3)CONCAT31(CONCAT21((short)uStack_4c,(char)uStack_50),(char)uStack_54
                                         ));
      if (iVar11 == 8) {
        uStack_44 = uStack_44 ^ uStack_48;
        uStack_40 = uStack_40 ^ uStack_44;
        uStack_3c = uStack_3c ^ uStack_40;
        bVar6 = (byte)uStack_38 ^ (&DAT_70102934)[uStack_3c & 0xff];
        uStack_38._1_1_ = uStack_38._1_1_ ^ (&DAT_70102934)[(uStack_3c & 0xffff) >> 8];
        uStack_38._0_2_ = CONCAT11(uStack_38._1_1_,bVar6);
        uStack_38._2_1_ = SUB41(uVar3,2);
        uStack_38._2_1_ = uStack_38._2_1_ ^ (&DAT_70102934)[(uStack_3c & 0xffffff) >> 0x10];
        uStack_38 = CONCAT13(uStack_38._3_1_ ^ (&DAT_70102934)[uStack_3c >> 0x18],
                             CONCAT12(uStack_38._2_1_,(undefined2)uStack_38));
        uStack_34 = uStack_34 ^ uStack_38;
        uStack_30 = uStack_30 ^ uStack_34;
        uStack_2c = uStack_2c ^ uStack_30;
        uStack_4c = uStack_48 >> 0x10;
        uStack_50 = uStack_48 >> 8;
      }
      else {
        uVar3 = uStack_48;
        puVar5 = (uint *)((uint)&uStack_48 | 4);
        iVar8 = iVar4;
        if (7 < iVar1) {
          do {
            uVar7 = *puVar5;
            iVar8 = iVar8 + -1;
            *puVar5 = uVar7 ^ uVar3;
            uVar3 = uVar7 ^ uVar3;
            puVar5 = puVar5 + 1;
          } while (iVar8 != 0);
        }
      }
      if ((6 < iVar1) && (iVar10 <= iVar2)) {
        uVar3 = 0;
        do {
          if (iVar9 < 4) {
            iVar8 = uVar3 + 1;
            iVar2 = iVar8;
            if (iVar8 < iVar11) {
              iVar2 = iVar11;
            }
            uVar7 = 3U - iVar9;
            if (iVar2 + ~uVar3 < 3U - iVar9) {
              uVar7 = iVar2 + ~uVar3;
            }
            imp___aeabi_memcpy4(param_3 + iVar10 * 0x10 + iVar9 * 4,&uStack_48 + uVar3,uVar7 * 4 + 4
                               );
            uVar3 = iVar8 + uVar7;
            iVar9 = iVar9 + uVar7 + 1;
            iVar2 = DAT_712042b0;
          }
          if (iVar9 == 4) {
            iVar10 = iVar10 + 1;
            iVar9 = 0;
          }
        } while (((int)uVar3 < iVar11) && (iVar10 <= iVar2));
      }
      iVar12 = iVar12 + 1;
    } while (iVar10 <= iVar2);
  }
  return 0;
}


// =========================================================================
// Function: FUN_718c6820
// Entry: 0x718c6820 | Size: 400 bytes
// =========================================================================

undefined4 FUN_718c6820(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (1 < DAT_712042b0) {
    iVar1 = 0;
    do {
      iVar2 = param_2 + iVar1 * 0x10;
      *(uint *)(iVar2 + 0x10) =
           *(uint *)(&DAT_70104f34 + (uint)*(byte *)(iVar2 + 0x11) * 4) ^
           *(uint *)(&DAT_70104b34 + (uint)*(byte *)(iVar2 + 0x10) * 4) ^
           *(uint *)(&DAT_70105334 + (uint)*(byte *)(iVar2 + 0x12) * 4) ^
           *(uint *)(&DAT_70105734 + (uint)*(byte *)(iVar2 + 0x13) * 4);
      *(uint *)(iVar2 + 0x14) =
           *(uint *)(&DAT_70104f34 + (uint)*(byte *)(iVar2 + 0x15) * 4) ^
           *(uint *)(&DAT_70104b34 + (uint)*(byte *)(iVar2 + 0x14) * 4) ^
           *(uint *)(&DAT_70105334 + (uint)*(byte *)(iVar2 + 0x16) * 4) ^
           *(uint *)(&DAT_70105734 + (uint)*(byte *)(iVar2 + 0x17) * 4);
      *(uint *)(iVar2 + 0x18) =
           *(uint *)(&DAT_70104f34 + (uint)*(byte *)(iVar2 + 0x19) * 4) ^
           *(uint *)(&DAT_70104b34 + (uint)*(byte *)(iVar2 + 0x18) * 4) ^
           *(uint *)(&DAT_70105334 + (uint)*(byte *)(iVar2 + 0x1a) * 4) ^
           *(uint *)(&DAT_70105734 + (uint)*(byte *)(iVar2 + 0x1b) * 4);
      *(uint *)(iVar2 + 0x1c) =
           *(uint *)(&DAT_70104f34 + (uint)*(byte *)(iVar2 + 0x1d) * 4) ^
           *(uint *)(&DAT_70104b34 + (uint)*(byte *)(iVar2 + 0x1c) * 4) ^
           *(uint *)(&DAT_70105334 + (uint)*(byte *)(iVar2 + 0x1e) * 4) ^
           *(uint *)(&DAT_70105734 + (uint)*(byte *)(iVar2 + 0x1f) * 4);
      iVar2 = iVar1 + 2;
      iVar1 = iVar1 + 1;
    } while (iVar2 < DAT_712042b0);
  }
  return 0;
}


// =========================================================================
// Function: FUN_718c6a20
// Entry: 0x718c6a20 | Size: 1328 bytes
// =========================================================================

undefined4 FUN_718c6a20(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  uVar7 = param_3[1] ^ param_1[1];
  uVar9 = *param_3 ^ *param_1;
  uVar1 = param_3[2] ^ param_1[2];
  uVar6 = param_3[3] ^ param_1[3];
  uStack_28 = *(uint *)(&DAT_70102e34 + ((uVar7 & 0xffff) >> 8) * 4) ^
              *(uint *)(&DAT_70102a34 + (uVar9 & 0xff) * 4) ^
              *(uint *)(&DAT_70103234 + ((uVar1 & 0xffffff) >> 0x10) * 4) ^
              *(uint *)(&DAT_70103634 + (uVar6 >> 0x18) * 4);
  *param_2 = uStack_28;
  uVar4 = *(uint *)(&DAT_70102e34 + ((uVar1 & 0xffff) >> 8) * 4) ^
          *(uint *)(&DAT_70102a34 + (uVar7 & 0xff) * 4) ^
          *(uint *)(&DAT_70103234 + ((uVar6 & 0xffffff) >> 0x10) * 4) ^
          *(uint *)(&DAT_70103634 + (uVar9 >> 0x18) * 4);
  param_2[1] = uVar4;
  uStack_30 = *(uint *)(&DAT_70102e34 + ((uVar6 & 0xffff) >> 8) * 4) ^
              *(uint *)(&DAT_70102a34 + (uVar1 & 0xff) * 4) ^
              *(uint *)(&DAT_70103234 + ((uVar9 & 0xffffff) >> 0x10) * 4) ^
              *(uint *)(&DAT_70103634 + (uVar7 >> 0x18) * 4);
  param_2[2] = uStack_30;
  uStack_2c = *(uint *)(&DAT_70102e34 + ((uVar9 & 0xffff) >> 8) * 4) ^
              *(uint *)(&DAT_70102a34 + (uVar6 & 0xff) * 4) ^
              *(uint *)(&DAT_70103234 + ((uVar7 & 0xffffff) >> 0x10) * 4) ^
              *(uint *)(&DAT_70103634 + (uVar1 >> 0x18) * 4);
  param_2[3] = uStack_2c;
  if (DAT_712042b0 < 3) {
    iVar5 = DAT_712042b0 + -1;
  }
  else {
    iVar8 = 0;
    do {
      uVar6 = param_3[iVar8 * 4 + 4] ^ uStack_28;
      uVar1 = param_3[iVar8 * 4 + 5] ^ uVar4;
      uVar7 = param_3[iVar8 * 4 + 6] ^ uStack_30;
      uStack_2c = param_3[iVar8 * 4 + 7] ^ uStack_2c;
      uStack_28 = *(uint *)(&DAT_70102e34 + ((uVar1 & 0xffff) >> 8) * 4) ^
                  *(uint *)(&DAT_70102a34 + (uVar6 & 0xff) * 4) ^
                  *(uint *)(&DAT_70103234 + ((uVar7 & 0xffffff) >> 0x10) * 4) ^
                  *(uint *)(&DAT_70103634 + (uStack_2c >> 0x18) * 4);
      *param_2 = uStack_28;
      uVar4 = *(uint *)(&DAT_70102e34 + ((uVar7 & 0xffff) >> 8) * 4) ^
              *(uint *)(&DAT_70102a34 + (uVar1 & 0xff) * 4) ^
              *(uint *)(&DAT_70103234 + ((uStack_2c & 0xffffff) >> 0x10) * 4) ^
              *(uint *)(&DAT_70103634 + (uVar6 >> 0x18) * 4);
      param_2[1] = uVar4;
      uStack_30 = *(uint *)(&DAT_70102e34 + ((uStack_2c & 0xffff) >> 8) * 4) ^
                  *(uint *)(&DAT_70102a34 + (uVar7 & 0xff) * 4) ^
                  *(uint *)(&DAT_70103234 + ((uVar6 & 0xffffff) >> 0x10) * 4) ^
                  *(uint *)(&DAT_70103634 + (uVar1 >> 0x18) * 4);
      param_2[2] = uStack_30;
      uStack_2c = *(uint *)(&DAT_70102e34 + ((uVar6 & 0xffff) >> 8) * 4) ^
                  *(uint *)(&DAT_70102a34 + (uStack_2c & 0xff) * 4) ^
                  *(uint *)(&DAT_70103234 + ((uVar1 & 0xffffff) >> 0x10) * 4) ^
                  *(uint *)(&DAT_70103634 + (uVar7 >> 0x18) * 4);
      param_2[3] = uStack_2c;
      iVar2 = iVar8 + 2;
      iVar5 = DAT_712042b0 + -1;
      iVar8 = iVar8 + 1;
    } while (iVar2 < iVar5);
  }
  puVar3 = param_3 + iVar5 * 4;
  uVar1 = puVar3[2];
  uVar6 = puVar3[3];
  uVar4 = puVar3[1] ^ uVar4;
  uStack_28 = *puVar3 ^ uStack_28;
  *(undefined *)param_2 = (&DAT_70102a35)[(uStack_28 & 0xff) * 4];
  *(undefined *)((int)param_2 + 1) = (&DAT_70102a35)[((uVar4 & 0xffff) >> 8) * 4];
  uVar1 = uVar1 ^ uStack_30;
  uVar6 = uVar6 ^ uStack_2c;
  *(undefined *)((int)param_2 + 2) = (&DAT_70102a35)[((uVar1 & 0xffffff) >> 0x10) * 4];
  *(undefined *)((int)param_2 + 3) = (&DAT_70102a35)[(uVar6 >> 0x18) * 4];
  *(undefined *)(param_2 + 1) = (&DAT_70102a35)[(uVar4 & 0xff) * 4];
  *(undefined *)((int)param_2 + 5) = (&DAT_70102a35)[((uVar1 & 0xffff) >> 8) * 4];
  *(undefined *)((int)param_2 + 6) = (&DAT_70102a35)[((uVar6 & 0xffffff) >> 0x10) * 4];
  *(undefined *)((int)param_2 + 7) = (&DAT_70102a35)[(uStack_28 >> 0x18) * 4];
  *(undefined *)(param_2 + 2) = (&DAT_70102a35)[(uVar1 & 0xff) * 4];
  *(undefined *)((int)param_2 + 9) = (&DAT_70102a35)[((uVar6 & 0xffff) >> 8) * 4];
  *(undefined *)((int)param_2 + 10) = (&DAT_70102a35)[((uStack_28 & 0xffffff) >> 0x10) * 4];
  *(undefined *)((int)param_2 + 0xb) = (&DAT_70102a35)[(uVar4 >> 0x18) * 4];
  *(undefined *)(param_2 + 3) = (&DAT_70102a35)[(uVar6 & 0xff) * 4];
  *(undefined *)((int)param_2 + 0xd) = (&DAT_70102a35)[((uStack_28 & 0xffff) >> 8) * 4];
  *(undefined *)((int)param_2 + 0xe) = (&DAT_70102a35)[((uVar4 & 0xffffff) >> 0x10) * 4];
  *(undefined *)((int)param_2 + 0xf) = (&DAT_70102a35)[(uVar1 >> 0x18) * 4];
  *param_2 = *param_2 ^ param_3[DAT_712042b0 * 4];
  iVar5 = DAT_712042b0;
  param_2[1] = param_2[1] ^ param_3[DAT_712042b0 * 4 + 1];
  param_2[2] = param_2[2] ^ param_3[iVar5 * 4 + 2];
  param_2[3] = param_2[3] ^ param_3[iVar5 * 4 + 3];
  return 0;
}


// =========================================================================
// Function: FUN_718c7028
// Entry: 0x718c7028 | Size: 1224 bytes
// =========================================================================

undefined4 FUN_718c7028(uint *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  uint uStack_28;
  
  puVar9 = param_3 + DAT_712042b0 * 4;
  uVar2 = *puVar9 ^ *param_1;
  uVar8 = puVar9[1] ^ param_1[1];
  uVar4 = puVar9[3] ^ param_1[3];
  uVar5 = puVar9[2] ^ param_1[2];
  uStack_28 = *(uint *)(&DAT_70103e34 + ((uVar4 & 0xffff) >> 8) * 4) ^
              *(uint *)(&DAT_70103a34 + (uVar2 & 0xff) * 4) ^
              *(uint *)(&DAT_70104234 + ((uVar5 & 0xffffff) >> 0x10) * 4) ^
              *(uint *)(&DAT_70104634 + (uVar8 >> 0x18) * 4);
  *param_2 = uStack_28;
  uVar10 = *(uint *)(&DAT_70103e34 + ((uVar2 & 0xffff) >> 8) * 4) ^
           *(uint *)(&DAT_70103a34 + (uVar8 & 0xff) * 4) ^
           *(uint *)(&DAT_70104234 + ((uVar4 & 0xffffff) >> 0x10) * 4) ^
           *(uint *)(&DAT_70104634 + (uVar5 >> 0x18) * 4);
  param_2[1] = uVar10;
  uVar3 = *(uint *)(&DAT_70103e34 + ((uVar8 & 0xffff) >> 8) * 4) ^
          *(uint *)(&DAT_70103a34 + (uVar5 & 0xff) * 4) ^
          *(uint *)(&DAT_70104234 + ((uVar2 & 0xffffff) >> 0x10) * 4) ^
          *(uint *)(&DAT_70104634 + (uVar4 >> 0x18) * 4);
  param_2[2] = uVar3;
  uVar2 = *(uint *)(&DAT_70103e34 + ((uVar5 & 0xffff) >> 8) * 4) ^
          *(uint *)(&DAT_70103a34 + (uVar4 & 0xff) * 4) ^
          *(uint *)(&DAT_70104234 + ((uVar8 & 0xffffff) >> 0x10) * 4) ^
          *(uint *)(&DAT_70104634 + (uVar2 >> 0x18) * 4);
  param_2[3] = uVar2;
  if (2 < DAT_712042b0) {
    uVar4 = DAT_712042b0 + 1;
    puVar9 = param_3 + DAT_712042b0 * 4 + -2;
    do {
      puVar7 = puVar9 + -1;
      puVar1 = puVar9 + -2;
      uVar4 = uVar4 - 1;
      uVar6 = *puVar9;
      puVar11 = puVar9 + 1;
      puVar9 = puVar9 + -4;
      uVar8 = *puVar1 ^ uStack_28;
      uVar2 = *puVar11 ^ uVar2;
      uVar6 = uVar6 ^ uVar3;
      uVar5 = *puVar7 ^ uVar10;
      uStack_28 = *(uint *)(&DAT_70103e34 + ((uVar2 & 0xffff) >> 8) * 4) ^
                  *(uint *)(&DAT_70103a34 + (uVar8 & 0xff) * 4) ^
                  *(uint *)(&DAT_70104234 + ((uVar6 & 0xffffff) >> 0x10) * 4) ^
                  *(uint *)(&DAT_70104634 + (uVar5 >> 0x18) * 4);
      *param_2 = uStack_28;
      uVar10 = *(uint *)(&DAT_70103e34 + ((uVar8 & 0xffff) >> 8) * 4) ^
               *(uint *)(&DAT_70103a34 + (uVar5 & 0xff) * 4) ^
               *(uint *)(&DAT_70104234 + ((uVar2 & 0xffffff) >> 0x10) * 4) ^
               *(uint *)(&DAT_70104634 + (uVar6 >> 0x18) * 4);
      param_2[1] = uVar10;
      uVar3 = *(uint *)(&DAT_70103e34 + ((uVar5 & 0xffff) >> 8) * 4) ^
              *(uint *)(&DAT_70103a34 + (uVar6 & 0xff) * 4) ^
              *(uint *)(&DAT_70104234 + ((uVar8 & 0xffffff) >> 0x10) * 4) ^
              *(uint *)(&DAT_70104634 + (uVar2 >> 0x18) * 4);
      param_2[2] = uVar3;
      uVar2 = *(uint *)(&DAT_70103e34 + ((uVar6 & 0xffff) >> 8) * 4) ^
              *(uint *)(&DAT_70103a34 + (uVar2 & 0xff) * 4) ^
              *(uint *)(&DAT_70104234 + ((uVar5 & 0xffffff) >> 0x10) * 4) ^
              *(uint *)(&DAT_70104634 + (uVar8 >> 0x18) * 4);
      param_2[3] = uVar2;
    } while (3 < uVar4);
  }
  uVar5 = param_3[5];
  uStack_28 = param_3[4] ^ uStack_28;
  uVar4 = param_3[6];
  uVar2 = param_3[7] ^ uVar2;
  *(undefined *)param_2 = (&DAT_70104a34)[uStack_28 & 0xff];
  uVar5 = uVar5 ^ uVar10;
  *(undefined *)((int)param_2 + 1) = (&DAT_70104a34)[(uVar2 & 0xffff) >> 8];
  uVar4 = uVar4 ^ uVar3;
  *(undefined *)((int)param_2 + 2) = (&DAT_70104a34)[(uVar4 & 0xffffff) >> 0x10];
  *(undefined *)((int)param_2 + 3) = (&DAT_70104a34)[uVar5 >> 0x18];
  *(undefined *)(param_2 + 1) = (&DAT_70104a34)[uVar5 & 0xff];
  *(undefined *)((int)param_2 + 5) = (&DAT_70104a34)[(uStack_28 & 0xffff) >> 8];
  *(undefined *)((int)param_2 + 6) = (&DAT_70104a34)[(uVar2 & 0xffffff) >> 0x10];
  *(undefined *)((int)param_2 + 7) = (&DAT_70104a34)[uVar4 >> 0x18];
  *(undefined *)(param_2 + 2) = (&DAT_70104a34)[uVar4 & 0xff];
  *(undefined *)((int)param_2 + 9) = (&DAT_70104a34)[(uVar5 & 0xffff) >> 8];
  *(undefined *)((int)param_2 + 10) = (&DAT_70104a34)[(uStack_28 & 0xffffff) >> 0x10];
  *(undefined *)((int)param_2 + 0xb) = (&DAT_70104a34)[uVar2 >> 0x18];
  *(undefined *)(param_2 + 3) = (&DAT_70104a34)[uVar2 & 0xff];
  *(undefined *)((int)param_2 + 0xd) = (&DAT_70104a34)[(uVar4 & 0xffff) >> 8];
  *(undefined *)((int)param_2 + 0xe) = (&DAT_70104a34)[(uVar5 & 0xffffff) >> 0x10];
  *(undefined *)((int)param_2 + 0xf) = (&DAT_70104a34)[uStack_28 >> 0x18];
  *param_2 = *param_2 ^ *param_3;
  param_2[1] = param_2[1] ^ param_3[1];
  param_2[2] = param_2[2] ^ param_3[2];
  param_2[3] = param_2[3] ^ param_3[3];
  return 0;
}


// =========================================================================
// Function: FUN_718c75f0
// Entry: 0x718c75f0 | Size: 320 bytes
// =========================================================================

undefined4 FUN_718c75f0(undefined1 *param_1,uint param_2,uint param_3,int param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined1 auStack_40 [32];
  
  if (param_1 == (undefined1 *)0x0) {
    return 0xfffffffd;
  }
  uVar2 = 0xffffffff;
  if (param_2 < 2) {
    uVar2 = 0xfffffffe;
    *param_1 = (char)param_2;
    if (param_3 - 0x10 < 0x11) {
      bVar7 = (1 << (param_3 - 0x10 & 0xff) & 0x10101U) != 0;
      if (bVar7) {
        *(uint *)(param_1 + 4) = param_3 << 3;
      }
      if (bVar7 && param_4 != 0) {
        imp___strncpy_chk(param_1 + 8,param_4,param_3,0x21);
        DAT_712042b0 = (param_3 >> 2) + 6;
        uVar3 = *(uint *)(param_1 + 4);
        if (7 < (int)uVar3) {
          uVar4 = 0;
          uVar3 = (int)(uVar3 + ((uint)((int)uVar3 >> 0x1f) >> 0x1d)) >> 3;
          do {
            uVar5 = uVar4 & 0xfffffffc;
            puVar1 = param_1 + 8 + uVar4;
            uVar6 = uVar4 & 3;
            uVar4 = uVar4 + 1;
            auStack_40[uVar6 + uVar5] = *puVar1;
          } while (uVar3 != uVar4);
        }
        FUN_718c63c8(auStack_40,uVar3,param_1 + 0x30);
        uVar2 = 1;
        if (param_2 == 1) {
          FUN_718c6820(1,param_1 + 0x30);
          return 1;
        }
      }
    }
  }
  return uVar2;
}


// =========================================================================
// Function: FUN_718c7a90
// Entry: 0x718c7a90 | Size: 816 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_718c7a90(char *param_1,byte *param_2,uint *param_3,int param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint unaff_r7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  int iStack_40;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  int iStack_28;
  uint *puVar15;
  uint *puVar16;
  
  iStack_28 = _ext___stack_chk_guard;
  iVar4 = -5;
  if (param_1 != (char *)0x0) {
    if (param_2 != (byte *)0x0) {
      unaff_r7 = (uint)*param_2;
    }
    if (param_2 != (byte *)0x0 && unaff_r7 != 1) {
      iStack_40 = param_5;
      iVar2 = (int)(param_4 + ((uint)(param_4 >> 0x1f) >> 0x1c)) >> 4;
      cVar3 = *param_1;
      if (cVar3 == '\x03') {
        if (0xf < param_4) {
          uVar11 = *(uint *)(param_1 + 1);
          uVar9 = *(uint *)(param_1 + 5);
          uVar7 = *(uint *)(param_1 + 9);
          uVar8 = *(uint *)(param_1 + 0xd);
          iVar4 = iVar2;
          do {
            uVar13 = 0;
            uVar5 = uVar8;
            uVar10 = uVar9;
            uVar12 = uVar7;
            do {
              uStack_38 = uVar11;
              uStack_34 = uVar10;
              uStack_30 = uVar12;
              uStack_2c = uVar5;
              FUN_718c6a20(&uStack_38,&uStack_38,param_2 + 0x30);
              uVar8 = uVar13 & 7;
              uVar7 = (uint)*(byte *)(param_5 + (uVar13 >> 3)) ^ (uStack_38 & 0x80) >> uVar8;
              *(char *)(param_5 + (uVar13 >> 3)) = (char)uVar7;
              uVar13 = uVar13 + 1;
              uVar8 = (uVar5 & 0xffff) >> 0xf | (uVar5 & 0x7f) << 1 |
                      (uVar5 >> 7 & 0xfe | (uVar5 & 0xffffff) >> 0x17) << 8 |
                      (uVar5 >> 0xf & 0xfe | uVar5 >> 0x1f) << 0x10 |
                      ((uVar7 & 0xff) >> (uVar8 ^ 7) & 1 | uVar5 >> 0x17 & 0xfe) << 0x18;
              uVar7 = (uVar12 & 0xffff) >> 0xf | (uVar12 & 0x7f) << 1 |
                      (uVar12 >> 7 & 0xfe | (uVar12 & 0xffffff) >> 0x17) << 8 |
                      (uVar12 >> 0xf & 0xfe | uVar12 >> 0x1f) << 0x10 |
                      (uVar12 >> 0x17 & 0xfe | (uVar5 & 0xff) >> 7) << 0x18;
              uVar9 = (uVar10 & 0xffff) >> 0xf | (uVar10 & 0x7f) << 1 |
                      (uVar10 >> 7 & 0xfe | (uVar10 & 0xffffff) >> 0x17) << 8 |
                      (uVar10 >> 0xf & 0xfe | uVar10 >> 0x1f) << 0x10 |
                      (uVar10 >> 0x17 & 0xfe | (uVar12 & 0xff) >> 7) << 0x18;
              uVar11 = (uVar11 & 0xffff) >> 0xf | (uVar11 & 0x7f) << 1 |
                       (uVar11 >> 7 & 0xfe | (uVar11 & 0xffffff) >> 0x17) << 8 |
                       (uVar11 >> 0xf & 0xfe | uVar11 >> 0x1f) << 0x10 |
                       (uVar11 >> 0x17 & 0xfe | (uVar10 & 0xff) >> 7) << 0x18;
              uVar5 = uVar8;
              uVar10 = uVar9;
              uVar12 = uVar7;
            } while (uVar13 != 0x80);
            iVar6 = iVar4 + -1;
            bVar1 = 0 < iVar4;
            iVar4 = iVar6;
          } while (iVar6 != 0 && bVar1);
        }
      }
      else if (cVar3 == '\x02') {
        if (0xf < param_4) {
          uVar7 = *(uint *)(param_1 + 1);
          iVar4 = iVar2 + 1;
          uVar8 = *(uint *)(param_1 + 5);
          uVar9 = *(uint *)(param_1 + 9);
          uVar11 = *(uint *)(param_1 + 0xd);
          do {
            uVar5 = *param_3;
            puVar14 = param_3 + 1;
            puVar15 = param_3 + 2;
            puVar16 = param_3 + 3;
            param_3 = param_3 + 4;
            uVar9 = uVar9 ^ *puVar15;
            uVar8 = uVar8 ^ *puVar14;
            uVar7 = uVar7 ^ uVar5;
            uVar11 = uVar11 ^ *puVar16;
            uStack_38 = uVar7;
            uStack_34 = uVar8;
            uStack_30 = uVar9;
            uStack_2c = uVar11;
            FUN_718c6a20(&uStack_38,iStack_40,param_2 + 0x30);
            iVar4 = iVar4 + -1;
            iStack_40 = iStack_40 + 0x10;
          } while (1 < iVar4);
        }
      }
      else {
        if (cVar3 != '\x01') goto LAB_718c7ad0;
        if (0xf < param_4) {
          iVar4 = iVar2 + 1;
          do {
            FUN_718c6a20(param_3,iStack_40,param_2 + 0x30);
            iVar4 = iVar4 + -1;
            param_3 = param_3 + 4;
            iStack_40 = iStack_40 + 0x10;
          } while (1 < iVar4);
        }
      }
      iVar4 = iVar2 << 7;
    }
  }
LAB_718c7ad0:
  if (_ext___stack_chk_guard == iStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail(iVar4);
}


// =========================================================================
// Function: FUN_718c7e3c
// Entry: 0x718c7e3c | Size: 928 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_718c7e3c(char *param_1,char *param_2,int param_3,int param_4,uint *param_5)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  int iStack_28;
  
  iStack_28 = _ext___stack_chk_guard;
  iVar4 = -5;
  if (param_1 != (char *)0x0 && param_2 != (char *)0x0) {
    cVar2 = *param_1;
    if (cVar2 == '\x03') {
      iVar15 = (int)(param_4 + ((uint)(param_4 >> 0x1f) >> 0x1c)) >> 4;
      if (0xf < param_4) {
        uVar5 = *(uint *)(param_1 + 1);
        uVar12 = *(uint *)(param_1 + 5);
        uVar10 = *(uint *)(param_1 + 9);
        uVar7 = *(uint *)(param_1 + 0xd);
        iVar4 = iVar15;
        do {
          uVar13 = 0;
          uVar8 = uVar7;
          uVar11 = uVar10;
          do {
            uStack_38 = uVar5;
            uStack_34 = uVar12;
            uStack_30 = uVar11;
            uStack_2c = uVar8;
            FUN_718c6a20(&uStack_38,&uStack_38,param_2 + 0x30);
            uVar7 = uVar13 & 7;
            bVar3 = *(byte *)(param_3 + (uVar13 >> 3));
            *(byte *)((int)param_5 + (uVar13 >> 3)) =
                 *(byte *)((int)param_5 + (uVar13 >> 3)) ^ (byte)((uStack_38 & 0x80) >> uVar7);
            uVar13 = uVar13 + 1;
            uVar6 = uVar12 & 0xff;
            uVar7 = (uVar8 & 0xffff) >> 0xf | (uVar8 & 0x7f) << 1 |
                    (uVar8 >> 7 & 0xfe | (uVar8 & 0xffffff) >> 0x17) << 8 |
                    (uVar8 >> 0xf & 0xfe | uVar8 >> 0x1f) << 0x10 |
                    (bVar3 >> (uVar7 ^ 7) & 1 | uVar8 >> 0x17 & 0xfe) << 0x18;
            uVar10 = (uVar11 & 0xffff) >> 0xf | (uVar11 & 0x7f) << 1 |
                     (uVar11 >> 7 & 0xfe | (uVar11 & 0xffffff) >> 0x17) << 8 |
                     (uVar11 >> 0xf & 0xfe | uVar11 >> 0x1f) << 0x10 |
                     (uVar11 >> 0x17 & 0xfe | (uVar8 & 0xff) >> 7) << 0x18;
            uVar12 = (uVar12 & 0xffff) >> 0xf | (uVar12 & 0x7f) << 1 |
                     (uVar12 >> 7 & 0xfe | (uVar12 & 0xffffff) >> 0x17) << 8 |
                     (uVar12 >> 0xf & 0xfe | uVar12 >> 0x1f) << 0x10 |
                     (uVar12 >> 0x17 & 0xfe | (uVar11 & 0xff) >> 7) << 0x18;
            uVar5 = (uVar5 & 0xffff) >> 0xf | (uVar5 & 0x7f) << 1 |
                    (uVar5 >> 7 & 0xfe | (uVar5 & 0xffffff) >> 0x17) << 8 |
                    (uVar5 >> 0xf & 0xfe | uVar5 >> 0x1f) << 0x10 |
                    (uVar5 >> 0x17 & 0xfe | uVar6 >> 7) << 0x18;
            uVar8 = uVar7;
            uVar11 = uVar10;
          } while (uVar13 != 0x80);
          iVar14 = iVar4 + -1;
          bVar1 = 0 < iVar4;
          iVar4 = iVar14;
        } while (iVar14 != 0 && bVar1);
      }
    }
    else {
      if (*param_2 == '\0') goto LAB_718c7e70;
      iVar15 = (int)(param_4 + ((uint)(param_4 >> 0x1f) >> 0x1c)) >> 4;
      if (cVar2 == '\x02') {
        FUN_718c7028(param_3,&uStack_38,param_2 + 0x30);
        *param_5 = *(uint *)(param_1 + 1) ^ uStack_38;
        param_5[1] = *(uint *)(param_1 + 5) ^ uStack_34;
        param_5[2] = *(uint *)(param_1 + 9) ^ uStack_30;
        param_5[3] = *(uint *)(param_1 + 0xd) ^ uStack_2c;
        if (0x1f < param_4) {
          iVar14 = iVar15 + 1;
          iVar4 = 0;
          do {
            iVar9 = param_3 + iVar4;
            FUN_718c7028(iVar9,&uStack_38,param_2 + 0x30);
            iVar14 = iVar14 + -1;
            *(uint *)((int)param_5 + iVar4 + 0x10) = *(uint *)(iVar9 + -0x10) ^ uStack_38;
            *(uint *)((int)param_5 + iVar4 + 0x14) = *(uint *)(iVar9 + -0xc) ^ uStack_34;
            *(uint *)((int)param_5 + iVar4 + 0x18) = *(uint *)(iVar9 + -8) ^ uStack_30;
            *(uint *)((int)param_5 + iVar4 + 0x1c) = *(uint *)(iVar9 + -4) ^ uStack_2c;
            iVar4 = iVar4 + 0x10;
          } while (2 < iVar14);
        }
      }
      else {
        if (cVar2 != '\x01') goto LAB_718c7e70;
        if (0xf < param_4) {
          iVar4 = iVar15 + 1;
          do {
            FUN_718c7028(param_3,param_5,param_2 + 0x30);
            iVar4 = iVar4 + -1;
            param_5 = param_5 + 4;
            param_3 = param_3 + 0x10;
          } while (1 < iVar4);
        }
      }
    }
    iVar4 = iVar15 << 7;
  }
LAB_718c7e70:
  if (_ext___stack_chk_guard != iStack_28) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail(iVar4);
  }
  return;
}


// =========================================================================
// Function: FUN_718c8268
// Entry: 0x718c8268 | Size: 472 bytes
// =========================================================================

undefined4 * FUN_718c8268(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  imp___aeabi_memclr8(param_1,0x1510);
  param_1[8] = 0x3e99999a;
  param_1[9] = 0x40c00000;
  param_1[7] = s_imgui_log_txt_7006eeb7;
  param_1[5] = 0x40a00000;
  param_1[6] = s_imgui_ini_70063421;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xbf800000;
  param_1[3] = 0xbf800000;
  param_1[4] = 0x3c888889;
  imp___aeabi_memset4(param_1 + 0xb,0x58,0xff);
  param_1[0x21] = 0x3e8ccccd;
  param_1[0x25] = 0x3f800000;
  param_1[0x29] = 0x3f800000;
  param_1[0x28] = 0x3f800000;
  param_1[0x22] = 0x3d4ccccd;
  param_1[0x27] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined2 *)(param_1 + 0x2b) = 1;
  *(undefined1 *)((int)param_1 + 0xaa) = 1;
  *(undefined2 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  param_1[0xde] = 0xff7fffff;
  param_1[0xdf] = 0xff7fffff;
  param_1[0x34] = 0;
  param_1[0x35] = &DAT_718c884c;
  param_1[0x36] = 0;
  param_1[0x37] = 0xff7fffff;
  param_1[0x38] = 0xff7fffff;
  param_1[0x33] = FUN_718c8588;
  param_1[0x2c] = 0x42700000;
  iVar1 = 0x450;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = &LAB_718c8530;
  param_1[10] = 0x40c00000;
  param_1[0x103] = 0xbf800000;
  param_1[0x104] = 0xbf800000;
  param_1[0xfb] = 0xbf800000;
  param_1[0xfc] = 0xbf800000;
  param_1[0xfd] = 0xbf800000;
  param_1[0xfe] = 0xbf800000;
  param_1[0xff] = 0xbf800000;
  param_1[0x100] = 0xbf800000;
  param_1[0x101] = 0xbf800000;
  param_1[0x102] = 0xbf800000;
  do {
    puVar2 = (undefined4 *)((int)param_1 + iVar1);
    *puVar2 = 0xbf800000;
    iVar1 = iVar1 + 4;
    puVar2[0x200] = 0xbf800000;
  } while (iVar1 != 0xc50);
  param_1[0x524] = 0xbf800000;
  param_1[0x525] = 0xbf800000;
  param_1[0x526] = 0xbf800000;
  param_1[0x527] = 0xbf800000;
  param_1[0x528] = 0xbf800000;
  param_1[0x51c] = 0xbf800000;
  param_1[0x51d] = 0xbf800000;
  param_1[0x51e] = 0xbf800000;
  param_1[0x51f] = 0xbf800000;
  param_1[0x520] = 0xbf800000;
  param_1[0x521] = 0xbf800000;
  param_1[0x522] = 0xbf800000;
  param_1[0x523] = 0xbf800000;
  param_1[0x514] = 0xbf800000;
  param_1[0x515] = 0xbf800000;
  param_1[0x516] = 0xbf800000;
  param_1[0x517] = 0xbf800000;
  param_1[0x518] = 0xbf800000;
  param_1[0x519] = 0xbf800000;
  param_1[0x51a] = 0xbf800000;
  param_1[0x51b] = 0xbf800000;
  return param_1;
}


// =========================================================================
// Function: FUN_718c8588
// Entry: 0x718c8588 | Size: 312 bytes
// =========================================================================

void FUN_718c8588(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_r1;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  
  iVar1 = DAT_712042b4;
  piVar5 = (int *)(DAT_712042b4 + 0x2d40);
  iVar2 = *(int *)(DAT_712042b4 + 0x2d48);
  if (iVar2 != 0) {
    iVar4 = *(int *)(DAT_712042b4 + 0x370);
    *piVar5 = 0;
    *(undefined4 *)(iVar1 + 0x2d44) = 0;
    *(int *)(iVar1 + 0x370) = iVar4 + -1;
    (*DAT_70105bb0)(iVar2,DAT_712042bc);
    *(undefined4 *)(iVar1 + 0x2d48) = 0;
  }
  iVar2 = imp_strlen(param_2);
  iVar4 = *(int *)(iVar1 + 0x2d44);
  iVar6 = iVar2 + 1;
  if (iVar2 < iVar4) {
    uVar8 = *(undefined4 *)(iVar1 + 0x2d48);
  }
  else {
    iVar7 = iVar4 + iVar4 / 2;
    if (iVar4 == 0) {
      iVar7 = 8;
    }
    if (iVar7 <= iVar6) {
      iVar7 = iVar6;
    }
    if (DAT_712042b4 != 0) {
      *(int *)(DAT_712042b4 + 0x370) = *(int *)(DAT_712042b4 + 0x370) + 1;
    }
    uVar8 = (*DAT_70105bac)(iVar7,DAT_712042bc);
    if (*(int *)(iVar1 + 0x2d48) != 0) {
      imp___aeabi_memcpy(uVar8,*(int *)(iVar1 + 0x2d48),*piVar5);
      iVar3 = *(int *)(iVar1 + 0x2d48);
      iVar4 = extraout_r1;
      if (iVar3 != 0) {
        iVar4 = DAT_712042b4;
      }
      if (iVar3 != 0 && iVar4 != 0) {
        *(int *)(iVar4 + 0x370) = *(int *)(iVar4 + 0x370) + -1;
      }
      (*DAT_70105bb0)(iVar3,DAT_712042bc);
    }
    *(int *)(iVar1 + 0x2d44) = iVar7;
    *(undefined4 *)(iVar1 + 0x2d48) = uVar8;
  }
  *piVar5 = iVar6;
  imp___aeabi_memcpy(uVar8,param_2,iVar2);
  *(undefined1 *)(*(int *)(iVar1 + 0x2d48) + iVar2) = 0;
  return;
}


// =========================================================================
// Function: FUN_718c8868
// Entry: 0x718c8868 | Size: 336 bytes
// =========================================================================

uint FUN_718c8868(uint *param_1,byte *param_2,byte *param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  bVar2 = *param_2;
  uVar3 = (uint)bVar2;
  uVar10 = 0;
  uVar9 = 0;
  uVar7 = (uint)(byte)(&DAT_70060cf8)[bVar2 >> 3];
  uVar11 = (0x80ff0000U >> (uint)(bVar2 >> 3) & 1) + uVar7;
  if (param_3 == (byte *)0x0) {
    param_3 = param_2 + uVar11;
  }
  if (param_3 <= param_2) {
    uVar3 = 0;
  }
  if (param_2 + 1 < param_3) {
    uVar9 = (uint)param_2[1];
  }
  if (param_2 + 2 < param_3) {
    uVar10 = (uint)param_2[2];
  }
  uVar4 = 0;
  if (param_2 + 3 < param_3) {
    uVar4 = (uint)param_2[3];
  }
  uVar6 = uVar10 >> 4 & 0xc | uVar9 >> 2 & 0x30 | uVar4 >> 6;
  uVar5 = (uVar9 & 0x3f) << 0xc | (*(uint *)(&DAT_700872dc + uVar7 * 4) & uVar3) << 0x12 |
          (uVar10 & 0x3f) << 6 | uVar4 & 0x3f;
  uVar8 = *(uint *)(&DAT_70087304 + uVar7 * 4);
  uVar1 = uVar5 >> (uVar8 & 0xff);
  *param_1 = uVar1;
  if (uVar5 >> (uVar8 & 0xff) < *(uint *)(&DAT_700872f0 + uVar7 * 4)) {
    uVar6 = uVar6 | 0x40;
  }
  if (uVar1 >> 0x10 != 0) {
    uVar6 = uVar6 | 0x100;
  }
  if ((uVar5 >> (uVar8 & 0xff) & 0x7ffff800) == 0xd800) {
    uVar6 = uVar6 | 0x80;
  }
  if ((uVar6 ^ 0x2a) >> (*(uint *)(&DAT_70087318 + uVar7 * 4) & 0xff) != 0) {
    uVar3 = (uint)(uVar3 != 0);
    if (uVar9 != 0) {
      uVar3 = uVar3 + 1;
    }
    if (uVar10 != 0) {
      uVar3 = uVar3 + 1;
    }
    if (uVar4 != 0) {
      uVar3 = uVar3 + 1;
    }
    *param_1 = 0xfffd;
    if (uVar11 < uVar3) {
      uVar3 = uVar11;
    }
    return uVar3;
  }
  return uVar11;
}


// =========================================================================
// Function: FUN_718c8a70
// Entry: 0x718c8a70 | Size: 44 bytes
// =========================================================================

void FUN_718c8a70(undefined4 param_1)

{
  if (DAT_712042b4 != 0) {
    *(int *)(DAT_712042b4 + 0x370) = *(int *)(DAT_712042b4 + 0x370) + 1;
  }
  (*DAT_70105bac)(param_1,DAT_712042bc);
  return;
}


// =========================================================================
// Function: FUN_718c8b14
// Entry: 0x718c8b14 | Size: 48 bytes
// =========================================================================

void FUN_718c8b14(int param_1,int param_2)

{
  if (param_1 != 0) {
    param_2 = DAT_712042b4;
  }
  if (param_1 != 0 && param_2 != 0) {
    *(int *)(param_2 + 0x370) = *(int *)(param_2 + 0x370) + -1;
  }
  (*DAT_70105bb0)(param_1,DAT_712042bc);
  return;
}


// =========================================================================
// Function: FUN_718c8bbc
// Entry: 0x718c8bbc | Size: 24 bytes
// =========================================================================

void FUN_718c8bbc(char *param_1)

{
  for (; *param_1 == ' ' || *param_1 == '\t'; param_1 = param_1 + 1) {
  }
  return;
}


// =========================================================================
// Function: FUN_718c8bec
// Entry: 0x718c8bec | Size: 112 bytes
// =========================================================================

int FUN_718c8bec(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 uStack_4;
  
  uStack_4 = param_4;
  iVar1 = imp___vsnprintf_chk(param_1,param_2,0,0xffffffff,param_3,&uStack_4,&uStack_4);
  if (param_1 != 0) {
    iVar2 = param_2 + -1;
    if (iVar1 < param_2) {
      iVar2 = iVar1;
    }
    bVar3 = iVar1 == -1;
    iVar1 = iVar2;
    if (bVar3) {
      iVar1 = param_2 + -1;
    }
    *(undefined1 *)(param_1 + iVar1) = 0;
  }
  return iVar1;
}


// =========================================================================
// Function: FUN_718c8c90
// Entry: 0x718c8c90 | Size: 88 bytes
// =========================================================================

int FUN_718c8c90(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = imp___vsnprintf_chk(param_1,param_2,0,0xffffffff,param_3,param_4);
  if (param_1 != 0) {
    iVar2 = param_2 + -1;
    if (iVar1 < param_2) {
      iVar2 = iVar1;
    }
    bVar3 = iVar1 == -1;
    iVar1 = iVar2;
    if (bVar3) {
      iVar1 = param_2 + -1;
    }
    *(undefined1 *)(param_1 + iVar1) = 0;
  }
  return iVar1;
}


// =========================================================================
// Function: FUN_718c8d1c
// Entry: 0x718c8d1c | Size: 232 bytes
// =========================================================================

uint FUN_718c8d1c(byte *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint unaff_r4;
  uint uVar4;
  
  uVar4 = ~param_3;
  uVar1 = uVar4;
  if (param_2 == 0) {
    uVar2 = (uint)*param_1;
    if (uVar2 == 0) {
      return param_3;
    }
    do {
      uVar3 = (uint)param_1[1];
      if ((uVar2 == 0x23 && uVar3 == 0x23) && (param_1[2] == 0x23)) {
        uVar1 = uVar4;
      }
      uVar1 = *(uint *)(&DAT_70086edc + (uVar1 & 0xff ^ uVar2) * 4) ^ uVar1 >> 8;
      uVar2 = uVar3;
      param_1 = param_1 + 1;
    } while (uVar3 != 0);
  }
  else {
    uVar2 = param_2 - 1;
    do {
      uVar3 = (uint)*param_1;
      if (1 < uVar2) {
        if (uVar3 == 0x23) {
          unaff_r4 = (uint)param_1[1];
        }
        if ((uVar3 == 0x23 && unaff_r4 == 0x23) && (param_1[2] == 0x23)) {
          uVar1 = uVar4;
        }
      }
      unaff_r4 = uVar1 & 0xff;
      uVar2 = uVar2 - 1;
      uVar1 = *(uint *)(&DAT_70086edc + (unaff_r4 ^ uVar3) * 4) ^ uVar1 >> 8;
      param_1 = param_1 + 1;
    } while (uVar2 != 0xffffffff);
  }
  return ~uVar1;
}


// =========================================================================
// Function: FUN_718c8e5c
// Entry: 0x718c8e5c | Size: 340 bytes
// =========================================================================

int FUN_718c8e5c(undefined4 param_1,undefined4 param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  iVar1 = imp_fopen();
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = imp_ftell();
  if ((((iVar2 != -1) && (iVar3 = imp_fseek(iVar1,0,2), iVar3 == 0)) &&
      (iVar3 = imp_ftell(iVar1), iVar3 != -1)) && (iVar2 = imp_fseek(iVar1,iVar2,0), iVar2 == 0)) {
    if (DAT_712042b4 != 0) {
      *(int *)(DAT_712042b4 + 0x370) = *(int *)(DAT_712042b4 + 0x370) + 1;
    }
    iVar2 = (*DAT_70105bac)(iVar3 + param_4,DAT_712042bc);
    if (iVar2 != 0) {
      iVar4 = imp_fread(iVar2,1,iVar3,iVar1);
      if (iVar4 != iVar3) {
        imp_fclose(iVar1);
        if (DAT_712042b4 != 0) {
          *(int *)(DAT_712042b4 + 0x370) = *(int *)(DAT_712042b4 + 0x370) + -1;
        }
        (*DAT_70105bb0)(iVar2,DAT_712042bc);
        return 0;
      }
      if (0 < param_4) {
        imp___aeabi_memclr(iVar2 + iVar3,param_4);
      }
      imp_fclose(iVar1);
      if (param_3 == (int *)0x0) {
        return iVar2;
      }
      *param_3 = iVar3;
      return iVar2;
    }
  }
  imp_fclose(iVar1);
  return 0;
}


// =========================================================================
// Function: FUN_718c91a0
// Entry: 0x718c91a0 | Size: 320 bytes
// =========================================================================

uint FUN_718c91a0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar6 = *param_1;
  uVar8 = param_1[1];
  uVar7 = param_1[2];
  uVar9 = param_1[3];
  iVar1 = FUN_71ba2d10(uVar6,0);
  iVar2 = FUN_71ba2d70(uVar6,0x3f800000);
  if (iVar2 != 0) {
    uVar6 = 0x3f800000;
  }
  if (iVar1 != 0) {
    uVar6 = 0;
  }
  uVar6 = FUN_71ba21e8(uVar6,0x437f0000);
  FUN_71ba0b38(uVar6,0x3f000000);
  uVar3 = FUN_71ba17bc();
  iVar1 = FUN_71ba2d10(uVar8,0);
  iVar2 = FUN_71ba2d70(uVar8,0x3f800000);
  if (iVar2 != 0) {
    uVar8 = 0x3f800000;
  }
  if (iVar1 != 0) {
    uVar8 = 0;
  }
  uVar6 = FUN_71ba21e8(uVar8,0x437f0000);
  FUN_71ba0b38(uVar6,0x3f000000);
  iVar1 = FUN_71ba17bc();
  iVar2 = FUN_71ba2d10(uVar7,0);
  iVar4 = FUN_71ba2d70(uVar7,0x3f800000);
  if (iVar4 != 0) {
    uVar7 = 0x3f800000;
  }
  if (iVar2 != 0) {
    uVar7 = 0;
  }
  uVar6 = FUN_71ba21e8(uVar7,0x437f0000);
  FUN_71ba0b38(uVar6,0x3f000000);
  iVar2 = FUN_71ba17bc();
  iVar4 = FUN_71ba2d10(uVar9,0);
  iVar5 = FUN_71ba2d70(uVar9,0x3f800000);
  if (iVar5 != 0) {
    uVar9 = 0x3f800000;
  }
  if (iVar4 != 0) {
    uVar9 = 0;
  }
  uVar6 = FUN_71ba21e8(uVar9,0x437f0000);
  FUN_71ba0b38(uVar6,0x3f000000);
  iVar4 = FUN_71ba17bc();
  return uVar3 | iVar1 << 8 | iVar2 << 0x10 | iVar4 << 0x18;
}


// =========================================================================
// Function: FUN_718c9528
// Entry: 0x718c9528 | Size: 280 bytes
// =========================================================================

int FUN_718c9528(int *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int extraout_r1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = param_1[2];
  iVar3 = *param_1;
  param_2 = param_2 - iVar5;
  if (iVar3 == param_1[1]) {
    iVar4 = iVar3 + iVar3 / 2;
    if (iVar3 == 0) {
      iVar4 = 8;
    }
    if (iVar4 <= iVar3 + 1) {
      iVar4 = iVar3 + 1;
    }
    if (DAT_712042b4 != 0) {
      iVar3 = *(int *)(DAT_712042b4 + 0x370);
    }
    if (DAT_712042b4 != 0) {
      *(int *)(DAT_712042b4 + 0x370) = iVar3 + 1;
    }
    iVar5 = (*DAT_70105bac)(iVar4 << 3,DAT_712042bc);
    if (param_1[2] != 0) {
      imp___aeabi_memcpy(iVar5,param_1[2],*param_1 << 3);
      iVar1 = param_1[2];
      iVar3 = extraout_r1;
      if (iVar1 != 0) {
        iVar3 = DAT_712042b4;
      }
      if (iVar1 != 0 && iVar3 != 0) {
        *(int *)(iVar3 + 0x370) = *(int *)(iVar3 + 0x370) + -1;
      }
      (*DAT_70105bb0)(iVar1,DAT_712042bc);
    }
    iVar3 = *param_1;
    param_1[1] = iVar4;
    param_1[2] = iVar5;
  }
  if (param_2 >> 3 < iVar3) {
    imp___aeabi_memmove(iVar5 + param_2 + 8,iVar5 + param_2,(iVar3 - (param_2 >> 3)) * 8);
    iVar5 = param_1[2];
  }
  uVar2 = param_3[1];
  *(undefined4 *)(iVar5 + param_2) = *param_3;
  ((undefined4 *)(iVar5 + param_2))[1] = uVar2;
  *param_1 = *param_1 + 1;
  return param_1[2] + param_2;
}


// =========================================================================
// Function: FUN_718c9750
// Entry: 0x718c9750 | Size: 452 bytes
// =========================================================================

void FUN_718c9750(uint *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int extraout_r1;
  int extraout_r1_00;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_3 == 0) {
    param_3 = imp_strlen(param_2);
  }
  else {
    param_3 = param_3 - param_2;
  }
  uVar6 = *param_1;
  uVar3 = param_1[1];
  if (uVar6 < 2) {
    uVar6 = 1;
  }
  uVar5 = uVar6 + param_3;
  if ((int)uVar5 < (int)uVar3) {
LAB_718c9838:
    if ((int)uVar3 < (int)uVar5) {
      uVar4 = uVar3 + (int)uVar3 / 2;
      if (uVar3 == 0) {
        uVar4 = 8;
      }
      if ((int)uVar4 <= (int)uVar5) {
        uVar4 = uVar5;
      }
      if (DAT_712042b4 != 0) {
        *(int *)(DAT_712042b4 + 0x370) = *(int *)(DAT_712042b4 + 0x370) + 1;
      }
      uVar3 = (*DAT_70105bac)(uVar4,DAT_712042bc);
      if (param_1[2] != 0) {
        imp___aeabi_memcpy(uVar3,param_1[2],*param_1);
        uVar2 = param_1[2];
        iVar1 = extraout_r1_00;
        if (uVar2 != 0) {
          iVar1 = DAT_712042b4;
        }
        if (uVar2 != 0 && iVar1 != 0) {
          *(int *)(iVar1 + 0x370) = *(int *)(iVar1 + 0x370) + -1;
        }
        (*DAT_70105bb0)(uVar2,DAT_712042bc);
      }
      param_1[1] = uVar4;
      param_1[2] = uVar3;
      goto LAB_718c98e4;
    }
  }
  else {
    uVar4 = uVar5;
    if ((int)uVar5 <= (int)(uVar3 * 2)) {
      uVar4 = uVar3 << 1;
    }
    if ((int)uVar4 <= (int)uVar3) goto LAB_718c9838;
    if (DAT_712042b4 != 0) {
      *(int *)(DAT_712042b4 + 0x370) = *(int *)(DAT_712042b4 + 0x370) + 1;
    }
    uVar3 = (*DAT_70105bac)(uVar4,DAT_712042bc);
    if (param_1[2] != 0) {
      imp___aeabi_memcpy(uVar3,param_1[2],*param_1);
      uVar2 = param_1[2];
      iVar1 = extraout_r1;
      if (uVar2 != 0) {
        iVar1 = DAT_712042b4;
      }
      if (uVar2 != 0 && iVar1 != 0) {
        *(int *)(iVar1 + 0x370) = *(int *)(iVar1 + 0x370) + -1;
      }
      (*DAT_70105bb0)(uVar2,DAT_712042bc);
    }
    param_1[1] = uVar4;
    param_1[2] = uVar3;
  }
  uVar3 = param_1[2];
LAB_718c98e4:
  *param_1 = uVar5;
  imp___aeabi_memcpy(uVar3 + (uVar6 - 1),param_2,param_3);
  *(undefined1 *)(param_1[2] + (uVar6 - 1) + param_3) = 0;
  return;
}


// =========================================================================
// Function: FUN_718c9b1c
// Entry: 0x718c9b1c | Size: 52 bytes
// =========================================================================

void FUN_718c9b1c(void)

{
  FUN_718c9b84();
  return;
}


// =========================================================================
// Function: FUN_718c9b84
// Entry: 0x718c9b84 | Size: 520 bytes
// =========================================================================

void FUN_718c9b84(uint *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int extraout_r1;
  int extraout_r1_00;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  iVar1 = imp___vsnprintf_chk(0,0,0,0xffffffff,param_2,param_3);
  if (iVar1 < 1) {
    return;
  }
  uVar9 = *param_1;
  uVar4 = param_1[1];
  if (uVar9 < 2) {
    uVar9 = 1;
  }
  uVar8 = uVar9 + iVar1;
  if ((int)uVar8 < (int)uVar4) {
LAB_718c9c84:
    if ((int)uVar4 < (int)uVar8) {
      uVar6 = uVar4 + (int)uVar4 / 2;
      if (uVar4 == 0) {
        uVar6 = 8;
      }
      if ((int)uVar6 <= (int)uVar8) {
        uVar6 = uVar8;
      }
      if (DAT_712042b4 != 0) {
        *(int *)(DAT_712042b4 + 0x370) = *(int *)(DAT_712042b4 + 0x370) + 1;
      }
      uVar4 = (*DAT_70105bac)(uVar6,DAT_712042bc);
      if (param_1[2] != 0) {
        imp___aeabi_memcpy(uVar4,param_1[2],*param_1);
        uVar2 = param_1[2];
        iVar3 = extraout_r1_00;
        if (uVar2 != 0) {
          iVar3 = DAT_712042b4;
        }
        if (uVar2 != 0 && iVar3 != 0) {
          *(int *)(iVar3 + 0x370) = *(int *)(iVar3 + 0x370) + -1;
        }
        (*DAT_70105bb0)(uVar2,DAT_712042bc);
      }
      param_1[1] = uVar6;
      param_1[2] = uVar4;
      goto LAB_718c9d30;
    }
  }
  else {
    uVar6 = uVar8;
    if ((int)uVar8 <= (int)(uVar4 * 2)) {
      uVar6 = uVar4 << 1;
    }
    if ((int)uVar6 <= (int)uVar4) goto LAB_718c9c84;
    if (DAT_712042b4 != 0) {
      *(int *)(DAT_712042b4 + 0x370) = *(int *)(DAT_712042b4 + 0x370) + 1;
    }
    uVar4 = (*DAT_70105bac)(uVar6,DAT_712042bc);
    if (param_1[2] != 0) {
      imp___aeabi_memcpy(uVar4,param_1[2],*param_1);
      uVar2 = param_1[2];
      iVar3 = extraout_r1;
      if (uVar2 != 0) {
        iVar3 = DAT_712042b4;
      }
      if (uVar2 != 0 && iVar3 != 0) {
        *(int *)(iVar3 + 0x370) = *(int *)(iVar3 + 0x370) + -1;
      }
      (*DAT_70105bb0)(uVar2,DAT_712042bc);
    }
    param_1[1] = uVar6;
    param_1[2] = uVar4;
  }
  uVar4 = param_1[2];
LAB_718c9d30:
  *param_1 = uVar8;
  iVar7 = uVar4 + uVar9 + -1;
  iVar3 = imp___vsnprintf_chk(iVar7,iVar1 + 1,0,0xffffffff,param_2,param_3);
  if (iVar7 != 0) {
    iVar5 = iVar1;
    if (iVar3 < iVar1 + 1) {
      iVar5 = iVar3;
    }
    if (iVar3 == -1) {
      iVar5 = iVar1;
    }
    *(undefined1 *)(iVar7 + iVar5) = 0;
  }
  return;
}


// =========================================================================
// Function: FUN_718c9f94
// Entry: 0x718c9f94 | Size: 20 bytes
// =========================================================================

int FUN_718c9f94(void)

{
  return DAT_712042b4 + 0x1518;
}


// =========================================================================
// Function: FUN_718c9fe0
// Entry: 0x718c9fe0 | Size: 388 bytes
// =========================================================================

uint FUN_718c9fe0(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar4 = DAT_712042b4;
  iVar7 = DAT_712042b4 + param_1 * 0x10;
  uVar5 = *(undefined4 *)(iVar7 + 0x15dc);
  iVar1 = FUN_71ba2d70(uVar5,0x3f800000);
  uVar6 = uVar5;
  if (iVar1 != 0) {
    uVar6 = 0x3f800000;
  }
  iVar1 = FUN_71ba2d10(uVar5,0);
  if (iVar1 != 0) {
    uVar6 = 0;
  }
  uVar6 = FUN_71ba21e8(uVar6,0x437f0000);
  FUN_71ba0b38(uVar6,0x3f000000);
  uVar2 = FUN_71ba17bc();
  uVar5 = *(undefined4 *)(iVar7 + 0x15e0);
  iVar1 = FUN_71ba2d70(uVar5,0x3f800000);
  uVar6 = uVar5;
  if (iVar1 != 0) {
    uVar6 = 0x3f800000;
  }
  iVar1 = FUN_71ba2d10(uVar5,0);
  if (iVar1 != 0) {
    uVar6 = 0;
  }
  uVar6 = FUN_71ba21e8(uVar6,0x437f0000);
  FUN_71ba0b38(uVar6,0x3f000000);
  iVar1 = FUN_71ba17bc();
  uVar5 = *(undefined4 *)(iVar7 + 0x15e4);
  iVar3 = FUN_71ba2d70(uVar5,0x3f800000);
  uVar6 = uVar5;
  if (iVar3 != 0) {
    uVar6 = 0x3f800000;
  }
  iVar3 = FUN_71ba2d10(uVar5,0);
  if (iVar3 != 0) {
    uVar6 = 0;
  }
  uVar6 = FUN_71ba21e8(uVar6,0x437f0000);
  FUN_71ba0b38(uVar6,0x3f000000);
  iVar3 = FUN_71ba17bc();
  uVar6 = FUN_71ba21e8(*(undefined4 *)(iVar4 + 0x1518),param_2);
  uVar5 = FUN_71ba21e8(*(undefined4 *)(iVar7 + 0x15e8),uVar6);
  iVar4 = FUN_71ba2d70(uVar5,0x3f800000);
  uVar6 = uVar5;
  if (iVar4 != 0) {
    uVar6 = 0x3f800000;
  }
  iVar4 = FUN_71ba2d10(uVar5,0);
  if (iVar4 != 0) {
    uVar6 = 0;
  }
  uVar6 = FUN_71ba21e8(uVar6,0x437f0000);
  FUN_71ba0b38(uVar6,0x3f000000);
  iVar4 = FUN_71ba17bc();
  return uVar2 | iVar1 << 8 | iVar3 << 0x10 | iVar4 << 0x18;
}


// =========================================================================
// Function: FUN_718ca404
// Entry: 0x718ca404 | Size: 304 bytes
// =========================================================================

void FUN_718ca404(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int extraout_r1;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  
  iVar6 = DAT_712042b4;
  iVar9 = DAT_712042b4 + param_1 * 0x10;
  iVar1 = *(int *)(iVar9 + 0x15dc);
  iVar2 = *(int *)(iVar9 + 0x15e0);
  iVar7 = *(int *)(iVar9 + 0x15e4);
  iVar8 = *(int *)(iVar9 + 0x15e8);
  piVar10 = (int *)(DAT_712042b4 + 0x1b64);
  iVar3 = *piVar10;
  if (iVar3 == *(int *)(DAT_712042b4 + 0x1b68)) {
    *(int *)(DAT_712042b4 + 0x370) = *(int *)(DAT_712042b4 + 0x370) + 1;
    iVar11 = iVar3 + iVar3 / 2;
    if (iVar3 == 0) {
      iVar11 = 8;
    }
    if (iVar11 <= iVar3 + 1) {
      iVar11 = iVar3 + 1;
    }
    iVar4 = (*DAT_70105bac)(iVar11 * 0x14,DAT_712042bc);
    if (*(int *)(iVar6 + 0x1b6c) != 0) {
      imp___aeabi_memcpy(iVar4,*(int *)(iVar6 + 0x1b6c),*piVar10 * 0x14);
      iVar5 = *(int *)(iVar6 + 0x1b6c);
      iVar3 = extraout_r1;
      if (iVar5 != 0) {
        iVar3 = DAT_712042b4;
      }
      if (iVar5 != 0 && iVar3 != 0) {
        *(int *)(iVar3 + 0x370) = *(int *)(iVar3 + 0x370) + -1;
      }
      (*DAT_70105bb0)(iVar5,DAT_712042bc);
    }
    iVar3 = *piVar10;
    *(int *)(iVar6 + 0x1b68) = iVar11;
    *(int *)(iVar6 + 0x1b6c) = iVar4;
  }
  else {
    iVar4 = *(int *)(DAT_712042b4 + 0x1b6c);
  }
  piVar12 = (int *)(iVar4 + iVar3 * 0x14);
  *piVar12 = param_1;
  piVar12[1] = iVar1;
  piVar12[2] = iVar2;
  piVar12[3] = iVar7;
  piVar12[4] = iVar8;
  *piVar10 = *piVar10 + 1;
  iVar6 = param_2[1];
  iVar1 = param_2[2];
  iVar2 = param_2[3];
  *(int *)(iVar9 + 0x15dc) = *param_2;
  *(int *)(iVar9 + 0x15e0) = iVar6;
  *(int *)(iVar9 + 0x15e4) = iVar1;
  *(int *)(iVar9 + 0x15e8) = iVar2;
  return;
}


// =========================================================================
// Function: FUN_718ca628
// Entry: 0x718ca628 | Size: 120 bytes
// =========================================================================

void FUN_718ca628(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  
  iVar1 = DAT_712042b4;
  if (param_1 < 1) {
    return;
  }
  uVar2 = param_1 + 1;
  piVar9 = (int *)(DAT_712042b4 + 0x1b64);
  iVar4 = *piVar9;
  iVar8 = DAT_712042b4 + 0x15dc;
  do {
    uVar2 = uVar2 - 1;
    iVar4 = *(int *)(iVar1 + 0x1b6c) + iVar4 * 0x14;
    uVar5 = *(undefined4 *)(iVar4 + -0xc);
    uVar6 = *(undefined4 *)(iVar4 + -8);
    puVar7 = (undefined4 *)(iVar8 + *(int *)(iVar4 + -0x14) * 0x10);
    *puVar7 = *(undefined4 *)(iVar4 + -0x10);
    uVar3 = *(undefined4 *)(iVar4 + -4);
    puVar7[1] = uVar5;
    puVar7[2] = uVar6;
    puVar7[3] = uVar3;
    iVar4 = *piVar9 + -1;
    *piVar9 = iVar4;
  } while (1 < uVar2);
  return;
}


// =========================================================================
// Function: FUN_718ca6d8
// Entry: 0x718ca6d8 | Size: 332 bytes
// =========================================================================

void FUN_718ca6d8(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int extraout_r1;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  
  iVar3 = DAT_712042b4;
  if (*(int *)(&DAT_70087878 + param_1 * 0xc) == 2) {
    iVar7 = DAT_712042b4 + *(int *)(&DAT_7008787c + param_1 * 0xc);
    iVar10 = *(int *)(iVar7 + 0x1518);
    piVar6 = (int *)(DAT_712042b4 + 0x1b70);
    iVar4 = *piVar6;
    iVar9 = *(int *)(iVar7 + 0x151c);
    if (iVar4 == *(int *)(DAT_712042b4 + 0x1b74)) {
      *(int *)(DAT_712042b4 + 0x370) = *(int *)(DAT_712042b4 + 0x370) + 1;
      iVar5 = iVar4 + iVar4 / 2;
      if (iVar4 == 0) {
        iVar5 = 8;
      }
      if (iVar5 <= iVar4 + 1) {
        iVar5 = iVar4 + 1;
      }
      iVar1 = (*DAT_70105bac)(iVar5 * 0xc,DAT_712042bc);
      if (*(int *)(iVar3 + 0x1b78) != 0) {
        imp___aeabi_memcpy(iVar1,*(int *)(iVar3 + 0x1b78),*piVar6 * 0xc);
        iVar2 = *(int *)(iVar3 + 0x1b78);
        iVar4 = extraout_r1;
        if (iVar2 != 0) {
          iVar4 = DAT_712042b4;
        }
        if (iVar2 != 0 && iVar4 != 0) {
          *(int *)(iVar4 + 0x370) = *(int *)(iVar4 + 0x370) + -1;
        }
        (*DAT_70105bb0)(iVar2,DAT_712042bc);
      }
      iVar4 = *piVar6;
      *(int *)(iVar3 + 0x1b74) = iVar5;
      *(int *)(iVar3 + 0x1b78) = iVar1;
    }
    else {
      iVar1 = *(int *)(DAT_712042b4 + 0x1b78);
    }
    piVar8 = (int *)(iVar1 + iVar4 * 0xc);
    *piVar8 = param_1;
    piVar8[2] = iVar9;
    piVar8[1] = iVar10;
    *piVar6 = *piVar6 + 1;
    iVar3 = param_2[1];
    *(int *)(iVar7 + 0x1518) = *param_2;
    *(int *)(iVar7 + 0x151c) = iVar3;
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_718ca938
// Entry: 0x718ca938 | Size: 640 bytes
// =========================================================================

void FUN_718ca938(undefined4 param_1,undefined4 param_2,char *param_3,char *param_4,int param_5)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar1 = DAT_712042b4;
  puVar11 = (undefined4 *)(DAT_712042b4 + 0x192c);
  iVar9 = *(int *)(DAT_712042b4 + 0x1a6c);
  uStack_2c = param_1;
  uStack_28 = param_2;
  if (param_5 == 0) {
    pcVar8 = param_4;
    if (param_4 == (char *)0x0) {
      iVar7 = imp_strlen(param_3);
      pcVar8 = param_3 + iVar7;
    }
  }
  else {
    if (param_4 == (char *)0x0) {
      param_4 = (char *)0xffffffff;
    }
    pcVar2 = param_3;
    if (param_4 <= param_3) {
      return;
    }
    do {
      pcVar8 = pcVar2;
      if (*pcVar2 == '#') {
        if (pcVar2[1] == '#') break;
      }
      else if (*pcVar2 == '\0') break;
      pcVar2 = pcVar2 + 1;
      pcVar8 = param_4;
    } while (pcVar2 != param_4);
  }
  iVar7 = DAT_712042b4;
  if (pcVar8 != param_3) {
    uVar3 = FUN_71ba21e8(*(undefined4 *)(DAT_712042b4 + 0x15e8),
                         *(undefined4 *)(DAT_712042b4 + 0x1518));
    iVar4 = FUN_71ba2d70(uVar3,0x3f800000);
    uVar10 = uVar3;
    if (iVar4 != 0) {
      uVar10 = 0x3f800000;
    }
    iVar4 = FUN_71ba2d10(uVar3,0);
    if (iVar4 != 0) {
      uVar10 = 0;
    }
    uVar10 = FUN_71ba21e8(uVar10,0x437f0000);
    FUN_71ba0b38(uVar10,0x3f000000);
    iVar4 = FUN_71ba17bc();
    uVar3 = *(undefined4 *)(iVar7 + 0x15dc);
    iVar5 = FUN_71ba2d70(uVar3,0x3f800000);
    uVar10 = uVar3;
    if (iVar5 != 0) {
      uVar10 = 0x3f800000;
    }
    iVar5 = FUN_71ba2d10(uVar3,0);
    if (iVar5 != 0) {
      uVar10 = 0;
    }
    uVar10 = FUN_71ba21e8(uVar10,0x437f0000);
    FUN_71ba0b38(uVar10,0x3f000000);
    uVar6 = FUN_71ba17bc();
    uVar3 = *(undefined4 *)(iVar7 + 0x15e0);
    iVar5 = FUN_71ba2d70(uVar3,0x3f800000);
    uVar10 = uVar3;
    if (iVar5 != 0) {
      uVar10 = 0x3f800000;
    }
    iVar5 = FUN_71ba2d10(uVar3,0);
    if (iVar5 != 0) {
      uVar10 = 0;
    }
    uVar10 = FUN_71ba21e8(uVar10,0x437f0000);
    FUN_71ba0b38(uVar10,0x3f000000);
    iVar5 = FUN_71ba17bc();
    uVar3 = *(undefined4 *)(iVar7 + 0x15e4);
    iVar7 = FUN_71ba2d70(uVar3,0x3f800000);
    uVar10 = uVar3;
    if (iVar7 != 0) {
      uVar10 = 0x3f800000;
    }
    iVar7 = FUN_71ba2d10(uVar3,0);
    if (iVar7 != 0) {
      uVar10 = 0;
    }
    uVar10 = FUN_71ba21e8(uVar10,0x437f0000);
    FUN_71ba0b38(uVar10,0x3f000000);
    iVar7 = FUN_71ba17bc();
    FUN_718fb9d0(*(undefined4 *)(iVar9 + 0x288),*puVar11,*(undefined4 *)(iVar1 + 0x1930),&uStack_2c,
                 uVar6 | iVar5 << 8 | iVar7 << 0x10 | iVar4 << 0x18,param_3,pcVar8,0,0);
    if (*(char *)(iVar1 + 0x2db0) != '\0') {
      FUN_718caeb0(&uStack_2c,param_3,pcVar8);
    }
  }
  return;
}


// =========================================================================
// Function: FUN_718caeb0
// Entry: 0x718caeb0 | Size: 512 bytes
// =========================================================================

void FUN_718caeb0(int param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  bool bVar11;
  
  do {
    iVar5 = DAT_712042b4;
    iVar8 = *(int *)(DAT_712042b4 + 0x2dc8);
    pcVar1 = *(char **)(DAT_712042b4 + 0x2dcc);
    puVar6 = (undefined4 *)(DAT_712042b4 + 0x1554);
    *(int *)(DAT_712042b4 + 0x2dc8) = 0;
    *(undefined4 *)(iVar5 + 0x2dcc) = 0;
    iVar10 = *(int *)(iVar5 + 0x1a6c);
    if (param_3 == (char *)0x0) {
      param_3 = param_2;
      if (param_2 != (char *)0xffffffff) {
        do {
          if (*param_3 == '#') {
            if (param_3[1] == '#') goto LAB_718caf54;
          }
          else if (*param_3 == '\0') goto LAB_718caf54;
          bVar11 = param_3 != (char *)0xfffffffe;
          param_3 = param_3 + 1;
        } while (bVar11);
      }
      param_3 = (char *)0xffffffff;
    }
LAB_718caf54:
    if (param_1 != 0) {
      uVar2 = *(undefined4 *)(iVar5 + 0x2dd0);
      uVar7 = *puVar6;
      uVar9 = *(undefined4 *)(param_1 + 4);
      *(undefined4 *)(iVar5 + 0x2dd0) = uVar9;
      uVar2 = FUN_71ba0b38(uVar2,uVar7);
      uVar2 = FUN_71ba0b38(uVar2,0x3f800000);
      iVar3 = FUN_71ba2d70(uVar9,uVar2);
      if (iVar3 != 0) {
        FUN_718f262c(&DAT_7006c898);
        *(undefined1 *)(iVar5 + 0x2dd4) = 1;
      }
    }
    if (iVar8 != 0) {
      iVar3 = imp_strlen(iVar8);
      FUN_718caeb0(param_1,iVar8,iVar8 + iVar3);
    }
    iVar3 = *(int *)(iVar10 + 0x180);
    iVar8 = *(int *)(iVar5 + 0x2dd8);
    if (iVar3 < iVar8) {
      *(int *)(iVar5 + 0x2dd8) = iVar3;
      iVar8 = iVar3;
      iVar3 = *(int *)(iVar10 + 0x180);
    }
    do {
      pcVar4 = (char *)imp_memchr(param_2,10,(int)param_3 - (int)param_2);
      if (pcVar4 == (char *)0x0) {
        pcVar4 = param_3;
      }
      if (param_2 != pcVar4 || pcVar4 != param_3) {
        iVar10 = (iVar3 - iVar8) * 4;
        if (*(char *)(iVar5 + 0x2dd4) == '\0') {
          iVar10 = 1;
        }
        FUN_718f262c(s___s___s_7006aee5,iVar10,&DAT_70064a63,(int)pcVar4 - (int)param_2,param_2);
        *(undefined1 *)(iVar5 + 0x2dd4) = 0;
        if (*pcVar4 == '\n') {
          FUN_718f262c(&DAT_7006c898);
          *(undefined1 *)(iVar5 + 0x2dd4) = 1;
        }
      }
      param_2 = pcVar4 + 1;
    } while (pcVar4 != param_3);
    if (pcVar1 == (char *)0x0) {
      return;
    }
    iVar5 = imp_strlen(pcVar1);
    param_3 = pcVar1 + iVar5;
    param_2 = pcVar1;
  } while( true );
}


// =========================================================================
// Function: FUN_718cb280
// Entry: 0x718cb280 | Size: 556 bytes
// =========================================================================

void FUN_718cb280(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar1 = DAT_712042b4;
  puVar9 = (undefined4 *)(DAT_712042b4 + 0x192c);
  iVar7 = *(int *)(DAT_712042b4 + 0x1a6c);
  uStack_2c = param_1;
  uStack_28 = param_2;
  if (param_4 == 0) {
    param_4 = imp_strlen(param_3);
    param_4 = param_3 + param_4;
  }
  iVar6 = DAT_712042b4;
  if (param_4 != param_3) {
    uVar2 = FUN_71ba21e8(*(undefined4 *)(DAT_712042b4 + 0x15e8),
                         *(undefined4 *)(DAT_712042b4 + 0x1518));
    iVar3 = FUN_71ba2d70(uVar2,0x3f800000);
    uVar8 = uVar2;
    if (iVar3 != 0) {
      uVar8 = 0x3f800000;
    }
    iVar3 = FUN_71ba2d10(uVar2,0);
    if (iVar3 != 0) {
      uVar8 = 0;
    }
    uVar8 = FUN_71ba21e8(uVar8,0x437f0000);
    FUN_71ba0b38(uVar8,0x3f000000);
    iVar3 = FUN_71ba17bc();
    uVar2 = *(undefined4 *)(iVar6 + 0x15dc);
    iVar4 = FUN_71ba2d70(uVar2,0x3f800000);
    uVar8 = uVar2;
    if (iVar4 != 0) {
      uVar8 = 0x3f800000;
    }
    iVar4 = FUN_71ba2d10(uVar2,0);
    if (iVar4 != 0) {
      uVar8 = 0;
    }
    uVar8 = FUN_71ba21e8(uVar8,0x437f0000);
    FUN_71ba0b38(uVar8,0x3f000000);
    uVar5 = FUN_71ba17bc();
    uVar2 = *(undefined4 *)(iVar6 + 0x15e0);
    iVar4 = FUN_71ba2d70(uVar2,0x3f800000);
    uVar8 = uVar2;
    if (iVar4 != 0) {
      uVar8 = 0x3f800000;
    }
    iVar4 = FUN_71ba2d10(uVar2,0);
    if (iVar4 != 0) {
      uVar8 = 0;
    }
    uVar8 = FUN_71ba21e8(uVar8,0x437f0000);
    FUN_71ba0b38(uVar8,0x3f000000);
    iVar4 = FUN_71ba17bc();
    uVar2 = *(undefined4 *)(iVar6 + 0x15e4);
    iVar6 = FUN_71ba2d70(uVar2,0x3f800000);
    uVar8 = uVar2;
    if (iVar6 != 0) {
      uVar8 = 0x3f800000;
    }
    iVar6 = FUN_71ba2d10(uVar2,0);
    if (iVar6 != 0) {
      uVar8 = 0;
    }
    uVar8 = FUN_71ba21e8(uVar8,0x437f0000);
    FUN_71ba0b38(uVar8,0x3f000000);
    iVar6 = FUN_71ba17bc();
    FUN_718fb9d0(*(undefined4 *)(iVar7 + 0x288),*puVar9,*(undefined4 *)(iVar1 + 0x1930),&uStack_2c,
                 uVar5 | iVar4 << 8 | iVar6 << 0x10 | iVar3 << 0x18,param_3,param_4,param_5,0);
    if (*(char *)(iVar1 + 0x2db0) != '\0') {
      FUN_718caeb0(&uStack_2c,param_3,param_4);
    }
  }
  return;
}


// =========================================================================
// Function: FUN_718cb7a4
// Entry: 0x718cb7a4 | Size: 1396 bytes
// =========================================================================

void FUN_718cb7a4(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,int param_4,int param_5
                 ,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8)

{
  bool bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar3 = param_2[1];
  uVar11 = *param_2;
  uStack_30 = uVar11;
  uStack_2c = uVar3;
  if (param_6 == (undefined4 *)0x0) {
    if (param_5 == param_4) {
      uVar12 = 0;
      uStack_34 = *(undefined4 *)(DAT_712042b4 + 0x1930);
    }
    else {
      FUN_719083a4(&uStack_38,*(undefined4 *)(DAT_712042b4 + 0x192c),
                   *(undefined4 *)(DAT_712042b4 + 0x1930),0x7f7fffff,0,param_4,param_5,0);
      FUN_71ba0b38(uStack_38,0x3f733333);
      FUN_71ba17bc();
      uVar12 = FUN_71ba1b94();
    }
  }
  else {
    uVar12 = *param_6;
    uStack_34 = param_6[1];
  }
  puVar13 = param_3;
  if (param_8 != (undefined4 *)0x0) {
    puVar13 = param_8 + 2;
  }
  uStack_38 = uVar12;
  FUN_71ba0b38(uVar12,uVar11);
  uVar10 = *puVar13;
  iVar4 = FUN_71ba2d50();
  if (param_8 != (undefined4 *)0x0) {
    param_2 = param_8;
  }
  bVar1 = true;
  if (iVar4 == 0) {
    uVar5 = FUN_71ba0b38(uStack_34,uVar3);
    iVar4 = FUN_71ba2d50(uVar5,puVar13[1]);
    bVar1 = false;
    if (iVar4 != 0) {
      bVar1 = true;
    }
  }
  if (param_8 != (undefined4 *)0x0) {
    iVar4 = FUN_71ba2d70(*param_8,uVar11);
    bVar2 = 1;
    if (iVar4 == 0) {
      iVar4 = FUN_71ba2d70(param_8[1],uVar3);
      bVar2 = 0;
      if (iVar4 != 0) {
        bVar2 = 1;
      }
    }
    bVar1 = (bool)(bVar1 | bVar2);
  }
  uVar5 = *param_7;
  iVar4 = FUN_71ba2d70(uVar5,0);
  if (iVar4 != 0) {
    uVar6 = FUN_71ba240c(*param_3,uVar11);
    uVar12 = FUN_71ba240c(uVar6,uVar12);
    uVar12 = FUN_71ba21e8(uVar12,uVar5);
    uVar12 = FUN_71ba0b38(uVar12,uVar11);
    iVar4 = FUN_71ba2d30(uVar12,uVar11);
    uStack_30 = uVar12;
    if (iVar4 != 0) {
      uStack_30 = uVar11;
    }
  }
  uVar11 = param_7[1];
  iVar4 = FUN_71ba2d70(uVar11,0);
  if (iVar4 != 0) {
    uVar12 = FUN_71ba240c(param_3[1],uVar3);
    uVar12 = FUN_71ba240c(uVar12,uStack_34);
    uVar11 = FUN_71ba21e8(uVar12,uVar11);
    uVar11 = FUN_71ba0b38(uVar11,uVar3);
    iVar4 = FUN_71ba2d30(uVar11,uVar3);
    uStack_2c = uVar11;
    if (iVar4 != 0) {
      uStack_2c = uVar3;
    }
  }
  iVar4 = DAT_712042b4;
  if (bVar1) {
    uStack_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_3c = puVar13[1];
    uStack_40 = uVar10;
    uVar11 = FUN_71ba21e8(*(undefined4 *)(DAT_712042b4 + 0x15e8),
                          *(undefined4 *)(DAT_712042b4 + 0x1518));
    iVar7 = FUN_71ba2d70(uVar11,0x3f800000);
    uVar3 = uVar11;
    if (iVar7 != 0) {
      uVar3 = 0x3f800000;
    }
    iVar7 = FUN_71ba2d10(uVar11,0);
    if (iVar7 != 0) {
      uVar3 = 0;
    }
    uVar3 = FUN_71ba21e8(uVar3,0x437f0000);
    FUN_71ba0b38(uVar3,0x3f000000);
    iVar7 = FUN_71ba17bc();
    uVar11 = *(undefined4 *)(iVar4 + 0x15dc);
    iVar8 = FUN_71ba2d70(uVar11,0x3f800000);
    uVar3 = uVar11;
    if (iVar8 != 0) {
      uVar3 = 0x3f800000;
    }
    iVar8 = FUN_71ba2d10(uVar11,0);
    if (iVar8 != 0) {
      uVar3 = 0;
    }
    uVar3 = FUN_71ba21e8(uVar3,0x437f0000);
    FUN_71ba0b38(uVar3,0x3f000000);
    uVar9 = FUN_71ba17bc();
    uVar11 = *(undefined4 *)(iVar4 + 0x15e0);
    iVar8 = FUN_71ba2d70(uVar11,0x3f800000);
    uVar3 = uVar11;
    if (iVar8 != 0) {
      uVar3 = 0x3f800000;
    }
    iVar8 = FUN_71ba2d10(uVar11,0);
    if (iVar8 != 0) {
      uVar3 = 0;
    }
    uVar3 = FUN_71ba21e8(uVar3,0x437f0000);
    FUN_71ba0b38(uVar3,0x3f000000);
    iVar8 = FUN_71ba17bc();
    uVar11 = *(undefined4 *)(iVar4 + 0x15e4);
    iVar4 = FUN_71ba2d70(uVar11,0x3f800000);
    uVar3 = uVar11;
    if (iVar4 != 0) {
      uVar3 = 0x3f800000;
    }
    iVar4 = FUN_71ba2d10(uVar11,0);
    if (iVar4 != 0) {
      uVar3 = 0;
    }
    uVar3 = FUN_71ba21e8(uVar3,0x437f0000);
    FUN_71ba0b38(uVar3,0x3f000000);
    iVar4 = FUN_71ba17bc();
    uVar9 = uVar9 | iVar8 << 8 | iVar4 << 0x10 | iVar7 << 0x18;
    puVar13 = &uStack_48;
  }
  else {
    uVar11 = FUN_71ba21e8(*(undefined4 *)(DAT_712042b4 + 0x15e8),
                          *(undefined4 *)(DAT_712042b4 + 0x1518));
    iVar7 = FUN_71ba2d70(uVar11,0x3f800000);
    uVar3 = uVar11;
    if (iVar7 != 0) {
      uVar3 = 0x3f800000;
    }
    iVar7 = FUN_71ba2d10(uVar11,0);
    if (iVar7 != 0) {
      uVar3 = 0;
    }
    uVar3 = FUN_71ba21e8(uVar3,0x437f0000);
    FUN_71ba0b38(uVar3,0x3f000000);
    iVar7 = FUN_71ba17bc();
    uVar11 = *(undefined4 *)(iVar4 + 0x15dc);
    iVar8 = FUN_71ba2d70(uVar11,0x3f800000);
    uVar3 = uVar11;
    if (iVar8 != 0) {
      uVar3 = 0x3f800000;
    }
    iVar8 = FUN_71ba2d10(uVar11,0);
    if (iVar8 != 0) {
      uVar3 = 0;
    }
    uVar3 = FUN_71ba21e8(uVar3,0x437f0000);
    FUN_71ba0b38(uVar3,0x3f000000);
    uVar9 = FUN_71ba17bc();
    uVar11 = *(undefined4 *)(iVar4 + 0x15e0);
    iVar8 = FUN_71ba2d70(uVar11,0x3f800000);
    uVar3 = uVar11;
    if (iVar8 != 0) {
      uVar3 = 0x3f800000;
    }
    iVar8 = FUN_71ba2d10(uVar11,0);
    if (iVar8 != 0) {
      uVar3 = 0;
    }
    uVar3 = FUN_71ba21e8(uVar3,0x437f0000);
    FUN_71ba0b38(uVar3,0x3f000000);
    iVar8 = FUN_71ba17bc();
    uVar11 = *(undefined4 *)(iVar4 + 0x15e4);
    iVar4 = FUN_71ba2d70(uVar11,0x3f800000);
    uVar3 = uVar11;
    if (iVar4 != 0) {
      uVar3 = 0x3f800000;
    }
    iVar4 = FUN_71ba2d10(uVar11,0);
    if (iVar4 != 0) {
      uVar3 = 0;
    }
    uVar3 = FUN_71ba21e8(uVar3,0x437f0000);
    FUN_71ba0b38(uVar3,0x3f000000);
    iVar4 = FUN_71ba17bc();
    puVar13 = (undefined4 *)0x0;
    uVar9 = uVar9 | iVar8 << 8 | iVar4 << 0x10 | iVar7 << 0x18;
  }
  FUN_718fb9d0(param_1,0,0,&uStack_30,uVar9,param_4,param_5,0,puVar13);
  return;
}


// =========================================================================
// Function: FUN_718cc4ac
// Entry: 0x718cc4ac | Size: 228 bytes
// =========================================================================

void FUN_718cc4ac(undefined4 *param_1,char *param_2,char *param_3,int param_4,undefined4 param_5)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar1 = param_3;
  if (param_4 == 0) {
joined_r0x718cc578:
    if (pcVar1 != param_2) {
      FUN_719083a4(param_1,*(undefined4 *)(DAT_712042b4 + 0x192c),
                   *(undefined4 *)(DAT_712042b4 + 0x1930),0x7f7fffff,param_5,param_2,pcVar1,0);
      FUN_71ba0b38(*param_1,0x3f733333);
      FUN_71ba17bc();
      uVar3 = FUN_71ba1b94();
      goto LAB_718cc584;
    }
  }
  else {
    if (param_3 == (char *)0x0) {
      param_3 = (char *)0xffffffff;
    }
    pcVar2 = param_2;
    if (param_2 < param_3) {
      do {
        pcVar1 = pcVar2;
        if (*pcVar2 == '#') {
          if (pcVar2[1] == '#') break;
        }
        else if (*pcVar2 == '\0') break;
        pcVar2 = pcVar2 + 1;
        pcVar1 = param_3;
      } while (pcVar2 != param_3);
      goto joined_r0x718cc578;
    }
  }
  param_1[1] = *(undefined4 *)(DAT_712042b4 + 0x1930);
  uVar3 = 0;
LAB_718cc584:
  *param_1 = uVar3;
  return;
}


// =========================================================================
// Function: FUN_718cc638
// Entry: 0x718cc638 | Size: 220 bytes
// =========================================================================

void FUN_718cc638(undefined4 param_1,undefined4 param_2,char *param_3,char *param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = DAT_712042b4;
  if (param_4 == (char *)0x0) {
    param_4 = (char *)0xffffffff;
  }
  pcVar2 = param_3;
  if (param_3 < param_4) {
    do {
      if (*pcVar2 == '#') {
        if (pcVar2[1] == '#') goto LAB_718cc6a0;
      }
      else if (*pcVar2 == '\0') {
LAB_718cc6a0:
        param_4 = pcVar2;
        if (pcVar2 == param_3) {
          return;
        }
        goto LAB_718cc6b8;
      }
      pcVar2 = pcVar2 + 1;
    } while (pcVar2 != param_4);
    if (param_4 != param_3) {
LAB_718cc6b8:
      FUN_718cb7a4(*(undefined4 *)(*(int *)(DAT_712042b4 + 0x1a6c) + 0x288),param_1,param_2,param_3,
                   param_4,param_5,param_6,param_7);
      if (*(char *)(iVar1 + 0x2db0) != '\0') {
        FUN_718caeb0(param_1,param_3,param_4);
        return;
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_718cc784
// Entry: 0x718cc784 | Size: 1012 bytes
// =========================================================================

void FUN_718cc784(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar1 = DAT_712042b4;
  iVar8 = *(int *)(DAT_712042b4 + 0x1a6c);
  uStack_34 = param_3;
  uStack_30 = param_4;
  uStack_2c = param_1;
  uStack_28 = param_2;
  FUN_718fb1d0(*(undefined4 *)(iVar8 + 0x288),&uStack_2c,&uStack_34,param_5,param_7,0xf);
  if (param_6 != 0) {
    uVar9 = *(undefined4 *)(iVar1 + 0x155c);
    iVar1 = FUN_71ba2d70(uVar9,0);
    if (iVar1 != 0) {
      uStack_3c = FUN_71ba0b38(uStack_2c,0x3f800000);
      uVar6 = *(undefined4 *)(iVar8 + 0x288);
      uStack_38 = FUN_71ba0b38(uStack_28,0x3f800000);
      uStack_44 = FUN_71ba0b38(uStack_34,0x3f800000);
      uStack_40 = FUN_71ba0b38(uStack_30,0x3f800000);
      iVar1 = DAT_712042b4;
      uVar2 = FUN_71ba21e8(*(undefined4 *)(DAT_712042b4 + 0x1648),
                           *(undefined4 *)(DAT_712042b4 + 0x1518));
      iVar3 = FUN_71ba2d70(uVar2,0x3f800000);
      uVar7 = uVar2;
      if (iVar3 != 0) {
        uVar7 = 0x3f800000;
      }
      iVar3 = FUN_71ba2d10(uVar2,0);
      if (iVar3 != 0) {
        uVar7 = 0;
      }
      uVar7 = FUN_71ba21e8(uVar7,0x437f0000);
      FUN_71ba0b38(uVar7,0x3f000000);
      iVar3 = FUN_71ba17bc();
      uVar2 = *(undefined4 *)(iVar1 + 0x163c);
      iVar4 = FUN_71ba2d70(uVar2,0x3f800000);
      uVar7 = uVar2;
      if (iVar4 != 0) {
        uVar7 = 0x3f800000;
      }
      iVar4 = FUN_71ba2d10(uVar2,0);
      if (iVar4 != 0) {
        uVar7 = 0;
      }
      uVar7 = FUN_71ba21e8(uVar7,0x437f0000);
      FUN_71ba0b38(uVar7,0x3f000000);
      uVar5 = FUN_71ba17bc();
      uVar2 = *(undefined4 *)(iVar1 + 0x1640);
      iVar4 = FUN_71ba2d70(uVar2,0x3f800000);
      uVar7 = uVar2;
      if (iVar4 != 0) {
        uVar7 = 0x3f800000;
      }
      iVar4 = FUN_71ba2d10(uVar2,0);
      if (iVar4 != 0) {
        uVar7 = 0;
      }
      uVar7 = FUN_71ba21e8(uVar7,0x437f0000);
      FUN_71ba0b38(uVar7,0x3f000000);
      iVar4 = FUN_71ba17bc();
      uVar2 = *(undefined4 *)(iVar1 + 0x1644);
      iVar1 = FUN_71ba2d70(uVar2,0x3f800000);
      uVar7 = uVar2;
      if (iVar1 != 0) {
        uVar7 = 0x3f800000;
      }
      iVar1 = FUN_71ba2d10(uVar2,0);
      if (iVar1 != 0) {
        uVar7 = 0;
      }
      uVar7 = FUN_71ba21e8(uVar7,0x437f0000);
      FUN_71ba0b38(uVar7,0x3f000000);
      iVar1 = FUN_71ba17bc();
      FUN_718fafb0(uVar6,&uStack_3c,&uStack_44,uVar5 | iVar4 << 8 | iVar1 << 0x10 | iVar3 << 0x18,
                   param_7,0xf,uVar9);
      iVar1 = DAT_712042b4;
      uVar2 = FUN_71ba21e8(*(undefined4 *)(DAT_712042b4 + 0x1638),
                           *(undefined4 *)(DAT_712042b4 + 0x1518));
      iVar3 = FUN_71ba2d70(uVar2,0x3f800000);
      uVar7 = uVar2;
      if (iVar3 != 0) {
        uVar7 = 0x3f800000;
      }
      iVar3 = FUN_71ba2d10(uVar2,0);
      if (iVar3 != 0) {
        uVar7 = 0;
      }
      uVar7 = FUN_71ba21e8(uVar7,0x437f0000);
      FUN_71ba0b38(uVar7,0x3f000000);
      iVar3 = FUN_71ba17bc();
      uVar2 = *(undefined4 *)(iVar1 + 0x162c);
      iVar4 = FUN_71ba2d70(uVar2,0x3f800000);
      uVar7 = uVar2;
      if (iVar4 != 0) {
        uVar7 = 0x3f800000;
      }
      iVar4 = FUN_71ba2d10(uVar2,0);
      if (iVar4 != 0) {
        uVar7 = 0;
      }
      uVar7 = FUN_71ba21e8(uVar7,0x437f0000);
      FUN_71ba0b38(uVar7,0x3f000000);
      uVar5 = FUN_71ba17bc();
      uVar2 = *(undefined4 *)(iVar1 + 0x1630);
      iVar4 = FUN_71ba2d70(uVar2,0x3f800000);
      uVar7 = uVar2;
      if (iVar4 != 0) {
        uVar7 = 0x3f800000;
      }
      iVar4 = FUN_71ba2d10(uVar2,0);
      if (iVar4 != 0) {
        uVar7 = 0;
      }
      uVar7 = FUN_71ba21e8(uVar7,0x437f0000);
      FUN_71ba0b38(uVar7,0x3f000000);
      iVar4 = FUN_71ba17bc();
      uVar2 = *(undefined4 *)(iVar1 + 0x1634);
      iVar1 = FUN_71ba2d70(uVar2,0x3f800000);
      uVar7 = uVar2;
      if (iVar1 != 0) {
        uVar7 = 0x3f800000;
      }
      iVar1 = FUN_71ba2d10(uVar2,0);
      if (iVar1 != 0) {
        uVar7 = 0;
      }
      uVar7 = FUN_71ba21e8(uVar7,0x437f0000);
      FUN_71ba0b38(uVar7,0x3f000000);
      iVar1 = FUN_71ba17bc();
      FUN_718fafb0(*(undefined4 *)(iVar8 + 0x288),&uStack_2c,&uStack_34,
                   uVar5 | iVar4 << 8 | iVar1 << 0x10 | iVar3 << 0x18,param_7,0xf,uVar9);
    }
  }
  return;
}


// =========================================================================
// Function: FUN_718cd168
// Entry: 0x718cd168 | Size: 1500 bytes
// =========================================================================

void FUN_718cd168(undefined4 *param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 uVar20;
  bool bVar21;
  undefined4 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar8 = DAT_712042b4;
  if ((*(int *)(DAT_712042b4 + 0x1bd4) == param_2) &&
     ((((param_3 & 4) != 0 || (*(char *)(DAT_712042b4 + 0x1c22) == '\0')) &&
      (iVar16 = *(int *)(DAT_712042b4 + 0x1a6c), *(char *)(iVar16 + 0x150) == '\0')))) {
    bVar21 = (param_3 & 8) == 0;
    puVar19 = (undefined4 *)((uint)&uStack_38 | 4);
    uVar9 = 0;
    uStack_50 = 0;
    if (bVar21) {
      uVar9 = *(undefined4 *)(DAT_712042b4 + 0x1558);
    }
    uVar12 = *param_1;
    if (bVar21) {
      uStack_50 = uVar9;
    }
    uStack_34 = param_1[1];
    uStack_30 = param_1[2];
    uStack_2c = param_1[3];
    uVar9 = *puVar19;
    uVar10 = *(undefined4 *)(iVar16 + 0x238);
    uVar13 = *(undefined4 *)(iVar16 + 0x234);
    uStack_38 = uVar12;
    iVar1 = FUN_71ba2d50(uVar9,uVar10);
    if (iVar1 == 0) {
      uVar9 = uVar10;
    }
    *puVar19 = uVar9;
    iVar1 = FUN_71ba2d50(uVar12,uVar13);
    if (iVar1 == 0) {
      uVar12 = uVar13;
    }
    puVar17 = puVar19 + 2;
    uVar11 = *puVar17;
    uVar14 = *(undefined4 *)(iVar16 + 0x240);
    uVar20 = *(undefined4 *)(iVar16 + 0x23c);
    uStack_38 = uVar12;
    iVar1 = FUN_71ba2d10(uVar11,uVar14);
    if (iVar1 == 0) {
      uVar11 = uVar14;
    }
    *puVar17 = uVar11;
    puVar18 = puVar19 + 1;
    uVar15 = *puVar18;
    iVar1 = FUN_71ba2d10(uVar15,uVar20);
    if (iVar1 == 0) {
      uVar15 = uVar20;
    }
    *puVar18 = uVar15;
    if ((param_3 & 1) != 0) {
      uVar9 = FUN_71ba0b38(uVar9,0xc0800000);
      *puVar19 = uVar9;
      uVar15 = FUN_71ba0b38(uVar15,0x40800000);
      *puVar18 = uVar15;
      uVar11 = FUN_71ba0b38(uVar11,0x40800000);
      *puVar17 = uVar11;
      uVar12 = FUN_71ba0b38(uVar12,0xc0800000);
      uStack_38 = uVar12;
      iVar1 = FUN_71ba2d50(uVar12,uVar13);
      iVar2 = FUN_71ba2d50(uVar9,uVar10);
      iVar3 = FUN_71ba2d30(uVar15,uVar20);
      iVar4 = FUN_71ba2d30(uVar11,uVar14);
      if (((iVar1 == 0 || iVar2 == 0) || iVar3 == 0) || iVar4 == 0) {
        FUN_718f6c58(*(undefined4 *)(iVar16 + 0x288),uVar12,uVar9,uVar15,uVar11,0);
        iVar8 = DAT_712042b4;
      }
      uStack_3c = FUN_71ba0b38(uVar9,0x3f800000);
      uVar10 = *(undefined4 *)(iVar16 + 0x288);
      uStack_40 = FUN_71ba0b38(uVar12,0x3f800000);
      uStack_44 = FUN_71ba0b38(uVar11,0xbf800000);
      uStack_48 = FUN_71ba0b38(uVar15,0xbf800000);
      uVar12 = FUN_71ba21e8(*(undefined4 *)(iVar8 + 0x18f8),*(undefined4 *)(iVar8 + 0x1518));
      iVar5 = FUN_71ba2d70(uVar12,0x3f800000);
      uVar9 = uVar12;
      if (iVar5 != 0) {
        uVar9 = 0x3f800000;
      }
      iVar5 = FUN_71ba2d10(uVar12,0);
      if (iVar5 != 0) {
        uVar9 = 0;
      }
      uVar9 = FUN_71ba21e8(uVar9,0x437f0000);
      FUN_71ba0b38(uVar9,0x3f000000);
      iVar5 = FUN_71ba17bc();
      uVar12 = *(undefined4 *)(iVar8 + 0x18ec);
      iVar6 = FUN_71ba2d70(uVar12,0x3f800000);
      uVar9 = uVar12;
      if (iVar6 != 0) {
        uVar9 = 0x3f800000;
      }
      iVar6 = FUN_71ba2d10(uVar12,0);
      if (iVar6 != 0) {
        uVar9 = 0;
      }
      uVar9 = FUN_71ba21e8(uVar9,0x437f0000);
      FUN_71ba0b38(uVar9,0x3f000000);
      uVar7 = FUN_71ba17bc();
      uVar12 = *(undefined4 *)(iVar8 + 0x18f0);
      iVar6 = FUN_71ba2d70(uVar12,0x3f800000);
      uVar9 = uVar12;
      if (iVar6 != 0) {
        uVar9 = 0x3f800000;
      }
      iVar6 = FUN_71ba2d10(uVar12,0);
      if (iVar6 != 0) {
        uVar9 = 0;
      }
      uVar9 = FUN_71ba21e8(uVar9,0x437f0000);
      FUN_71ba0b38(uVar9,0x3f000000);
      iVar6 = FUN_71ba17bc();
      uVar12 = *(undefined4 *)(iVar8 + 0x18f4);
      iVar8 = FUN_71ba2d70(uVar12,0x3f800000);
      uVar9 = uVar12;
      if (iVar8 != 0) {
        uVar9 = 0x3f800000;
      }
      iVar8 = FUN_71ba2d10(uVar12,0);
      if (iVar8 != 0) {
        uVar9 = 0;
      }
      uVar9 = FUN_71ba21e8(uVar9,0x437f0000);
      FUN_71ba0b38(uVar9,0x3f000000);
      iVar8 = FUN_71ba17bc();
      FUN_718fafb0(uVar10,&uStack_40,&uStack_48,uVar7 | iVar6 << 8 | iVar8 << 0x10 | iVar5 << 0x18,
                   uStack_50,0xf,0x40000000);
      if (((iVar1 == 0 || iVar2 == 0) || iVar3 == 0) || iVar4 == 0) {
        FUN_718f7014(*(undefined4 *)(iVar16 + 0x288));
      }
    }
    iVar8 = DAT_712042b4;
    if ((param_3 & 2) != 0) {
      uVar12 = FUN_71ba21e8(*(undefined4 *)(DAT_712042b4 + 0x18f8),
                            *(undefined4 *)(DAT_712042b4 + 0x1518));
      iVar1 = FUN_71ba2d70(uVar12,0x3f800000);
      uVar9 = uVar12;
      if (iVar1 != 0) {
        uVar9 = 0x3f800000;
      }
      iVar1 = FUN_71ba2d10(uVar12,0);
      if (iVar1 != 0) {
        uVar9 = 0;
      }
      uVar9 = FUN_71ba21e8(uVar9,0x437f0000);
      FUN_71ba0b38(uVar9,0x3f000000);
      iVar1 = FUN_71ba17bc();
      uVar12 = *(undefined4 *)(iVar8 + 0x18ec);
      iVar2 = FUN_71ba2d70(uVar12,0x3f800000);
      uVar9 = uVar12;
      if (iVar2 != 0) {
        uVar9 = 0x3f800000;
      }
      iVar2 = FUN_71ba2d10(uVar12,0);
      if (iVar2 != 0) {
        uVar9 = 0;
      }
      uVar9 = FUN_71ba21e8(uVar9,0x437f0000);
      FUN_71ba0b38(uVar9,0x3f000000);
      uVar7 = FUN_71ba17bc();
      uVar12 = *(undefined4 *)(iVar8 + 0x18f0);
      iVar2 = FUN_71ba2d70(uVar12,0x3f800000);
      uVar9 = uVar12;
      if (iVar2 != 0) {
        uVar9 = 0x3f800000;
      }
      iVar2 = FUN_71ba2d10(uVar12,0);
      if (iVar2 != 0) {
        uVar9 = 0;
      }
      uVar9 = FUN_71ba21e8(uVar9,0x437f0000);
      FUN_71ba0b38(uVar9,0x3f000000);
      iVar2 = FUN_71ba17bc();
      uVar12 = *(undefined4 *)(iVar8 + 0x18f4);
      iVar8 = FUN_71ba2d70(uVar12,0x3f800000);
      uVar9 = uVar12;
      if (iVar8 != 0) {
        uVar9 = 0x3f800000;
      }
      iVar8 = FUN_71ba2d10(uVar12,0);
      if (iVar8 != 0) {
        uVar9 = 0;
      }
      uVar9 = FUN_71ba21e8(uVar9,0x437f0000);
      FUN_71ba0b38(uVar9,0x3f000000);
      iVar8 = FUN_71ba17bc();
      FUN_718fafb0(*(undefined4 *)(iVar16 + 0x288),&uStack_38,puVar18,
                   uVar7 | iVar2 << 8 | iVar8 << 0x10 | iVar1 << 0x18,uStack_50,0xffffffff,
                   0x3f800000);
      return;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_718cde84
// Entry: 0x718cde84 | Size: 808 bytes
// =========================================================================

undefined4 * FUN_718cde84(undefined4 *param_1,int param_2,byte *param_3)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int extraout_r1;
  int iVar8;
  uint uVar9;
  
  imp___aeabi_memclr4(param_1 + 0x57,0x24);
  uVar9 = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  *(undefined2 *)(param_1 + 0x78) = 0;
  param_1[0x77] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  imp___aeabi_memclr4(param_1 + 0xa3,0x90);
  imp___aeabi_memclr4(param_1,0x364);
  iVar2 = imp_strlen(param_3);
  if (DAT_712042b4 != 0) {
    *(int *)(DAT_712042b4 + 0x370) = *(int *)(DAT_712042b4 + 0x370) + 1;
  }
  uVar3 = (*DAT_70105bac)(iVar2 + 1,DAT_712042bc);
  imp___aeabi_memcpy(uVar3,param_3,iVar2 + 1);
  *param_1 = uVar3;
  iVar2 = imp_strlen(param_3);
  param_1[0x13] = iVar2 + 1;
  if (*param_3 != 0) {
    uVar9 = 0xffffffff;
    uVar4 = (uint)*param_3;
    do {
      uVar5 = (uint)param_3[1];
      if ((uVar4 == 0x23 && uVar5 == 0x23) && (param_3[2] == 0x23)) {
        uVar9 = 0xffffffff;
      }
      uVar9 = *(uint *)(&DAT_70086edc + (uVar9 & 0xff ^ uVar4) * 4) ^ uVar9 >> 8;
      uVar4 = uVar5;
      param_3 = param_3 + 1;
    } while (uVar5 != 0);
    uVar9 = ~uVar9;
  }
  iVar2 = param_1[0x30];
  param_1[1] = uVar9;
  if (iVar2 == param_1[0x31]) {
    iVar8 = iVar2 + iVar2 / 2;
    if (iVar2 == 0) {
      iVar8 = 8;
    }
    if (iVar8 <= iVar2 + 1) {
      iVar8 = iVar2 + 1;
    }
    if (DAT_712042b4 != 0) {
      *(int *)(DAT_712042b4 + 0x370) = *(int *)(DAT_712042b4 + 0x370) + 1;
    }
    iVar6 = (*DAT_70105bac)(iVar8 << 2,DAT_712042bc);
    if (param_1[0x32] != 0) {
      imp___aeabi_memcpy(iVar6,param_1[0x32],param_1[0x30] << 2);
      iVar7 = param_1[0x32];
      iVar2 = extraout_r1;
      if (iVar7 != 0) {
        iVar2 = DAT_712042b4;
      }
      if (iVar7 != 0 && iVar2 != 0) {
        *(int *)(iVar2 + 0x370) = *(int *)(iVar2 + 0x370) + -1;
      }
      (*DAT_70105bb0)(iVar7,DAT_712042bc);
    }
    iVar2 = param_1[0x30];
    param_1[0x31] = iVar8;
    param_1[0x32] = iVar6;
  }
  else {
    iVar6 = param_1[0x32];
  }
  *(undefined4 *)(iVar6 + iVar2 * 4) = param_1[1];
  iVar6 = param_1[0x30];
  param_1[0x30] = iVar6 + 1;
  iVar2 = DAT_712042b4;
  uVar9 = *(uint *)(param_1[0x32] + (iVar6 + 1) * 4 + -4);
  uVar9 = *(uint *)(&DAT_70086edc + (uVar9 & 0xff ^ 0xdc) * 4) ^ ~uVar9 >> 8;
  uVar9 = *(uint *)(&DAT_70086edc + (uVar9 & 0xff ^ 0x4d) * 4) ^ uVar9 >> 8;
  uVar9 = *(uint *)(&DAT_70086edc + (uVar9 & 0xff ^ 0x4f) * 4) ^ uVar9 >> 8;
  uVar9 = *(uint *)(&DAT_70086edc + (uVar9 & 0xff ^ 0x56) * 4) ^ uVar9 >> 8;
  uVar9 = ~(*(uint *)(&DAT_70086edc + (uVar9 & 0xff ^ 0x45) * 4) ^ uVar9 >> 8);
  puVar1 = (uint *)(DAT_712042b4 + 0x1adc);
  if (*(uint *)(DAT_712042b4 + 0x1aa4) == uVar9) {
    *(uint *)(DAT_712042b4 + 0x1aa8) = uVar9;
  }
  if (*puVar1 == uVar9) {
    *(undefined1 *)(iVar2 + 0x1ae0) = 1;
  }
  param_1[0x1c] = 0x3f000000;
  param_1[0x1d] = 0x3f000000;
  *(undefined2 *)(param_1 + 0x28) = 0xffff;
  param_1[0x14] = uVar9;
  param_1[0xa0] = 0x3f800000;
  param_1[0x29] = 0xffffffff;
  param_1[0x97] = 0xffffffff;
  param_1[0xa1] = 0xffffffff;
  param_1[0x98] = 0xbf800000;
  *(uint *)((int)param_1 + 0xab) = *(uint *)((int)param_1 + 0xab) & 0xff000000 | 0xf0f0f;
  param_1[0xae] = param_2 + 0x1938;
  param_1[0x1a] = 0x7f7fffff;
  param_1[0x1b] = 0x7f7fffff;
  param_1[0x2c] = 0x7f7fffff;
  param_1[0x2d] = 0x7f7fffff;
  param_1[0x2e] = 0x7f7fffff;
  param_1[0x2f] = 0x7f7fffff;
  param_1[0xa2] = param_1 + 0xa3;
  param_1[0xaf] = *param_1;
  return param_1;
}


// =========================================================================
// Function: FUN_718ce3e8
// Entry: 0x718ce3e8 | Size: 292 bytes
// =========================================================================

void FUN_718ce3e8(int param_1,byte *param_2,byte *param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  uint unaff_r4;
  uint uVar7;
  
  iVar2 = DAT_712042b4;
  uVar7 = ~*(uint *)(*(int *)(param_1 + 200) + *(int *)(param_1 + 0xc0) * 4 + -4);
  uVar4 = uVar7;
  if (param_3 == (byte *)0x0 || param_3 == param_2) {
    uVar3 = (uint)*param_2;
    while (uVar3 != 0) {
      uVar5 = (uint)param_2[1];
      if ((uVar3 == 0x23 && uVar5 == 0x23) && (param_2[2] == 0x23)) {
        uVar4 = uVar7;
      }
      uVar4 = *(uint *)(&DAT_70086edc + (uVar4 & 0xff ^ uVar3) * 4) ^ uVar4 >> 8;
      uVar3 = uVar5;
      param_2 = param_2 + 1;
    }
  }
  else {
    pbVar6 = param_2 + 2;
    param_3 = param_3 + ~(uint)param_2;
    do {
      uVar3 = (uint)pbVar6[-2];
      if ((byte *)0x1 < param_3) {
        if (uVar3 == 0x23) {
          unaff_r4 = (uint)pbVar6[-1];
        }
        if ((uVar3 == 0x23 && unaff_r4 == 0x23) && (*pbVar6 == 0x23)) {
          uVar4 = uVar7;
        }
      }
      unaff_r4 = uVar4 & 0xff;
      param_3 = param_3 + -1;
      pbVar6 = pbVar6 + 1;
      uVar4 = *(uint *)(&DAT_70086edc + (unaff_r4 ^ uVar3) * 4) ^ uVar4 >> 8;
    } while (param_3 != (byte *)0xffffffff);
  }
  uVar4 = ~uVar4;
  puVar1 = (uint *)(DAT_712042b4 + 0x1adc);
  if (*(uint *)(DAT_712042b4 + 0x1aa4) == uVar4) {
    *(uint *)(DAT_712042b4 + 0x1aa8) = uVar4;
  }
  if (*puVar1 == uVar4) {
    *(undefined1 *)(iVar2 + 0x1ae0) = 1;
  }
  return;
}


// =========================================================================
// Function: FUN_718ce584
// Entry: 0x718ce584 | Size: 44 bytes
// =========================================================================

void FUN_718ce584(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = DAT_712042b4;
  piVar1 = (int *)(DAT_712042b4 + 0x1adc);
  if (*(int *)(DAT_712042b4 + 0x1aa4) == param_1) {
    *(int *)(DAT_712042b4 + 0x1aa8) = param_1;
  }
  if (*piVar1 == param_1) {
    *(undefined1 *)(iVar2 + 0x1ae0) = 1;
  }
  return;
}


// =========================================================================
// Function: FUN_718ce5e8
// Entry: 0x718ce5e8 | Size: 256 bytes
// =========================================================================

uint FUN_718ce5e8(int param_1,byte *param_2,byte *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  uint unaff_r4;
  uint uVar5;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 200) + *(int *)(param_1 + 0xc0) * 4 + -4);
  uVar5 = ~uVar1;
  uVar2 = uVar5;
  if (param_3 == (byte *)0x0 || param_3 == param_2) {
    uVar3 = (uint)*param_2;
    if (uVar3 == 0) {
      return uVar1;
    }
    do {
      uVar1 = (uint)param_2[1];
      if ((uVar3 == 0x23 && uVar1 == 0x23) && (param_2[2] == 0x23)) {
        uVar2 = uVar5;
      }
      uVar2 = *(uint *)(&DAT_70086edc + (uVar2 & 0xff ^ uVar3) * 4) ^ uVar2 >> 8;
      uVar3 = uVar1;
      param_2 = param_2 + 1;
    } while (uVar1 != 0);
  }
  else {
    pbVar4 = param_2 + 2;
    param_3 = param_3 + ~(uint)param_2;
    do {
      uVar1 = (uint)pbVar4[-2];
      if ((byte *)0x1 < param_3) {
        if (uVar1 == 0x23) {
          unaff_r4 = (uint)pbVar4[-1];
        }
        if ((uVar1 == 0x23 && unaff_r4 == 0x23) && (*pbVar4 == 0x23)) {
          uVar2 = uVar5;
        }
      }
      unaff_r4 = uVar2 & 0xff;
      param_3 = param_3 + -1;
      pbVar4 = pbVar4 + 1;
      uVar2 = *(uint *)(&DAT_70086edc + (unaff_r4 ^ uVar1) * 4) ^ uVar2 >> 8;
    } while (param_3 != (byte *)0xffffffff);
  }
  return ~uVar2;
}


// =========================================================================
// Function: FUN_718ce740
// Entry: 0x718ce740 | Size: 344 bytes
// =========================================================================

void FUN_718ce740(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x288);
  *(undefined1 *)(param_1 + 0x360) = 1;
  iVar1 = *(int *)(param_1 + 200);
  *(undefined4 *)(param_1 + 0x358) = *(undefined4 *)(iVar2 + 0x10);
  *(undefined4 *)(param_1 + 0x35c) = *(undefined4 *)(iVar2 + 0x1c);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined4 *)(param_1 + 0xc4) = 0;
    if (DAT_712042b4 != 0) {
      *(int *)(DAT_712042b4 + 0x370) = *(int *)(DAT_712042b4 + 0x370) + -1;
    }
    (*DAT_70105bb0)(iVar1,DAT_712042bc);
    iVar2 = *(int *)(param_1 + 0x288);
    *(undefined4 *)(param_1 + 200) = 0;
  }
  FUN_718f679c(iVar2);
  iVar1 = *(int *)(param_1 + 400);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x188) = 0;
    *(undefined4 *)(param_1 + 0x18c) = 0;
    if (DAT_712042b4 != 0) {
      *(int *)(DAT_712042b4 + 0x370) = *(int *)(DAT_712042b4 + 0x370) + -1;
    }
    (*DAT_70105bb0)(iVar1,DAT_712042bc);
    *(undefined4 *)(param_1 + 400) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x1c4);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x1bc) = 0;
    *(undefined4 *)(param_1 + 0x1c0) = 0;
    if (DAT_712042b4 != 0) {
      *(int *)(DAT_712042b4 + 0x370) = *(int *)(DAT_712042b4 + 0x370) + -1;
    }
    (*DAT_70105bb0)(iVar1,DAT_712042bc);
    *(undefined4 *)(param_1 + 0x1c4) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x1d0);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x1c8) = 0;
    *(undefined4 *)(param_1 + 0x1cc) = 0;
    if (DAT_712042b4 != 0) {
      *(int *)(DAT_712042b4 + 0x370) = *(int *)(DAT_712042b4 + 0x370) + -1;
    }
    (*DAT_70105bb0)(iVar1,DAT_712042bc);
    *(undefined4 *)(param_1 + 0x1d0) = 0;
  }
  return;
}


// =========================================================================
// Function: FUN_718cea4c
// Entry: 0x718cea4c | Size: 356 bytes
// =========================================================================

void FUN_718cea4c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_r1;
  int extraout_r1_00;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 0x288);
  *(undefined1 *)(param_1 + 0x360) = 0;
  iVar5 = *(int *)(param_1 + 0x358);
  if (*(int *)(iVar4 + 0x10) < iVar5) {
    if (DAT_712042b4 != 0) {
      *(int *)(DAT_712042b4 + 0x370) = *(int *)(DAT_712042b4 + 0x370) + 1;
    }
    uVar2 = (*DAT_70105bac)(iVar5 << 1,DAT_712042bc);
    if (*(int *)(iVar4 + 0x14) != 0) {
      imp___aeabi_memcpy(uVar2,*(int *)(iVar4 + 0x14),*(int *)(iVar4 + 0xc) << 1);
      iVar3 = *(int *)(iVar4 + 0x14);
      iVar1 = extraout_r1;
      if (iVar3 != 0) {
        iVar1 = DAT_712042b4;
      }
      if (iVar3 != 0 && iVar1 != 0) {
        *(int *)(iVar1 + 0x370) = *(int *)(iVar1 + 0x370) + -1;
      }
      (*DAT_70105bb0)(iVar3,DAT_712042bc);
    }
    *(int *)(iVar4 + 0x10) = iVar5;
    *(undefined4 *)(iVar4 + 0x14) = uVar2;
    iVar4 = *(int *)(param_1 + 0x288);
  }
  iVar5 = *(int *)(param_1 + 0x35c);
  if (*(int *)(iVar4 + 0x1c) < iVar5) {
    if (DAT_712042b4 != 0) {
      *(int *)(DAT_712042b4 + 0x370) = *(int *)(DAT_712042b4 + 0x370) + 1;
    }
    uVar2 = (*DAT_70105bac)(iVar5 * 0x14,DAT_712042bc);
    if (*(int *)(iVar4 + 0x20) != 0) {
      imp___aeabi_memcpy(uVar2,*(int *)(iVar4 + 0x20),*(int *)(iVar4 + 0x18) * 0x14);
      iVar3 = *(int *)(iVar4 + 0x20);
      iVar1 = extraout_r1_00;
      if (iVar3 != 0) {
        iVar1 = DAT_712042b4;
      }
      if (iVar3 != 0 && iVar1 != 0) {
        *(int *)(iVar1 + 0x370) = *(int *)(iVar1 + 0x370) + -1;
      }
      (*DAT_70105bb0)(iVar3,DAT_712042bc);
    }
    *(int *)(iVar4 + 0x1c) = iVar5;
    *(undefined4 *)(iVar4 + 0x20) = uVar2;
  }
  *(undefined4 *)(param_1 + 0x358) = 0;
  *(undefined4 *)(param_1 + 0x35c) = 0;
  return;
}


// =========================================================================
// Function: FUN_718ced80
// Entry: 0x718ced80 | Size: 192 bytes
// =========================================================================

void FUN_718ced80(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  
  iVar1 = DAT_712042b4;
  piVar2 = (int *)(DAT_712042b4 + 0x1aa4);
  iVar3 = *piVar2;
  *(bool *)(DAT_712042b4 + 0x1ab0) = iVar3 != param_1;
  if (iVar3 != param_1) {
    *(undefined2 *)(iVar1 + 0x1ab3) = 0;
    *(undefined4 *)(iVar1 + 0x1aac) = 0;
    if (param_1 != 0) {
      *(int *)(iVar1 + 0x1ae8) = param_1;
      *(undefined4 *)(iVar1 + 0x1aec) = 0;
    }
  }
  *(undefined4 *)(iVar1 + 0x1ad0) = param_2;
  *(undefined2 *)(iVar1 + 0x1ab1) = 0;
  *piVar2 = param_1;
  *(undefined1 *)(iVar1 + 0x1ab5) = 0;
  if (param_1 != 0) {
    uVar4 = 2;
    *(int *)(iVar1 + 0x1aa8) = param_1;
    if (*(int *)(iVar1 + 0x1bdc) != param_1) {
      iVar3 = *(int *)(iVar1 + 0x1be8);
      bVar5 = iVar3 != param_1;
      if (bVar5) {
        iVar3 = *(int *)(iVar1 + 0x1bec);
      }
      if ((bVar5 && iVar3 != param_1) && (uVar4 = 1, *(int *)(iVar1 + 0x1bf0) == param_1)) {
        uVar4 = 2;
      }
    }
    *(undefined4 *)(iVar1 + 0x1ad4) = uVar4;
  }
  *(undefined1 *)(iVar1 + 0x1ab6) = 0;
  *(undefined4 *)(iVar1 + 0x1ab8) = 0;
  *(undefined4 *)(iVar1 + 0x1abc) = 0;
  *(undefined4 *)(iVar1 + 0x1ac0) = 0;
  *(undefined4 *)(iVar1 + 0x1ac4) = 0;
  return;
}


// =========================================================================
// Function: FUN_718cee78
// Entry: 0x718cee78 | Size: 88 bytes
// =========================================================================

void FUN_718cee78(void)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  
  iVar1 = DAT_712042b4;
  piVar2 = (int *)(DAT_712042b4 + 0x1aa4);
  bVar3 = *piVar2 != 0;
  *(bool *)(DAT_712042b4 + 0x1ab0) = bVar3;
  if (bVar3) {
    *(undefined2 *)(iVar1 + 0x1ab3) = 0;
    *(undefined4 *)(iVar1 + 0x1aac) = 0;
  }
  *(undefined4 *)(iVar1 + 0x1ad0) = 0;
  *(undefined2 *)(iVar1 + 0x1ab1) = 0;
  *piVar2 = 0;
  *(undefined2 *)(iVar1 + 0x1ab5) = 0;
  *(undefined4 *)(iVar1 + 0x1ab8) = 0;
  *(undefined4 *)(iVar1 + 0x1abc) = 0;
  *(undefined4 *)(iVar1 + 0x1ac0) = 0;
  *(undefined4 *)(iVar1 + 0x1ac4) = 0;
  return;
}


// =========================================================================
// Function: FUN_718cef08
// Entry: 0x718cef08 | Size: 52 bytes
// =========================================================================

void FUN_718cef08(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_712042b4;
  *(int *)(DAT_712042b4 + 0x1a90) = param_1;
  iVar2 = 0;
  *(undefined2 *)(iVar1 + 0x1a98) = 0;
  if (param_1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x1a94);
  }
  if (param_1 != 0 && iVar2 != param_1) {
    *(undefined4 *)(iVar1 + 0x1a9c) = 0;
    *(undefined4 *)(iVar1 + 0x1aa0) = 0;
  }
  return;
}


// =========================================================================
// Function: FUN_718cef74
// Entry: 0x718cef74 | Size: 40 bytes
// =========================================================================

void FUN_718cef74(void)

{
  int *piVar1;
  
  piVar1 = (int *)(DAT_712042b4 + 0x1a6c);
  *(undefined2 *)(DAT_712042b4 + 0x1ab4) = 0x101;
  *(uint *)(*piVar1 + 0x11c) = *(uint *)(*piVar1 + 0x11c) | 4;
  return;
}


// =========================================================================
// Function: FUN_718cefd4
// Entry: 0x718cefd4 | Size: 316 bytes
// =========================================================================

bool FUN_718cefd4(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = *(int *)(DAT_712042b4 + 0x1a6c);
  if ((*(char *)(DAT_712042b4 + 0x1c23) != '\0') && (*(char *)(DAT_712042b4 + 0x1c22) == '\0')) {
    return *(int *)(DAT_712042b4 + 0x1bd4) != 0 &&
           *(int *)(DAT_712042b4 + 0x1bd4) == *(int *)(iVar2 + 0x118);
  }
  uVar1 = (uint)*(byte *)(iVar2 + 0x11c);
  if (((*(byte *)(iVar2 + 0x11c) & 1) != 0) &&
     ((uVar4 = *(uint *)(iVar2 + 800), (param_1 & 0x40) != 0 ||
      (uVar1 = *(uint *)(DAT_712042b4 + 0x1a74), uVar1 == uVar4)))) {
    if ((param_1 & 0x20) == 0) {
      uVar5 = *(uint *)(DAT_712042b4 + 0x1aa4);
      if (uVar5 != 0) {
        uVar1 = *(uint *)(iVar2 + 0x118);
      }
      if (((uVar5 != 0 && uVar5 != uVar1) &&
          (uVar1 = (uint)*(byte *)(DAT_712042b4 + 0x1ab1), uVar1 == 0)) &&
         (uVar1 = *(uint *)(iVar2 + 0x50), uVar5 != uVar1)) {
        return false;
      }
    }
    iVar3 = *(int *)(DAT_712042b4 + 0x1bd0);
    uVar5 = 0;
    if (iVar3 != 0) {
      uVar5 = *(uint *)(iVar3 + 800);
    }
    if (iVar3 != 0 && uVar5 != 0) {
      if (uVar5 != uVar4) {
        uVar1 = (uint)*(byte *)(uVar5 + 0x8b);
      }
      if (uVar5 != uVar4 && uVar1 != 0) {
        if ((*(uint *)(uVar5 + 8) & 0x8000000) != 0) {
          return false;
        }
        if (((param_1 & 8) == 0) && ((*(uint *)(uVar5 + 8) & 0x4000000) != 0)) {
          return false;
        }
      }
    }
    if (((param_1 & 0x80) == 0) && ((*(uint *)(iVar2 + 0x1b0) & 4) != 0)) {
      return false;
    }
    if (*(int *)(iVar2 + 0x118) == *(int *)(iVar2 + 0x50)) {
      return *(char *)(iVar2 + 0x8c) == '\0';
    }
    return true;
  }
  return false;
}


// =========================================================================
// Function: FUN_718cf148
// Entry: 0x718cf148 | Size: 752 bytes
// =========================================================================

undefined4 FUN_718cf148(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  bool bVar17;
  
  iVar1 = DAT_712042b4;
  puVar16 = (undefined4 *)(DAT_712042b4 + 0x1578);
  if ((*(int *)(DAT_712042b4 + 0x1a90) != 0 && *(int *)(DAT_712042b4 + 0x1a90) != param_2) &&
     (*(char *)(DAT_712042b4 + 0x1a98) == '\0')) {
    return 0;
  }
  iVar12 = *(int *)(DAT_712042b4 + 0x1a6c);
  uVar2 = 0;
  if ((*(int *)(DAT_712042b4 + 0x1a70) == iVar12) &&
     ((*(int *)(DAT_712042b4 + 0x1aa4) == 0 || *(int *)(DAT_712042b4 + 0x1aa4) == param_2 ||
      (*(char *)(DAT_712042b4 + 0x1ab1) != '\0')))) {
    uVar9 = *param_1;
    puVar14 = (undefined4 *)(DAT_712042b4 + 0xe4);
    uVar2 = *(undefined4 *)(iVar12 + 0x234);
    iVar3 = FUN_71ba2d50(uVar9,uVar2);
    uVar8 = *puVar16;
    if (iVar3 != 0) {
      uVar2 = uVar9;
    }
    uVar2 = FUN_71ba240c(uVar2);
    uVar9 = *puVar14;
    iVar3 = FUN_71ba2d50(uVar9,uVar2);
    if (iVar3 == 0) {
      return 0;
    }
    uVar2 = *(undefined4 *)(iVar12 + 0x238);
    uVar15 = *(undefined4 *)(iVar12 + 0x23c);
    uVar11 = *(undefined4 *)(iVar12 + 0x240);
    uVar13 = param_1[1];
    uVar4 = param_1[3];
    iVar3 = FUN_71ba2d10(uVar4,uVar11);
    uVar5 = param_1[2];
    iVar6 = FUN_71ba2d10(uVar5,uVar15);
    iVar7 = FUN_71ba2d50(uVar13,uVar2);
    uVar10 = *(undefined4 *)(iVar1 + 0x157c);
    if (iVar3 != 0) {
      uVar11 = uVar4;
    }
    uVar11 = FUN_71ba0b38(uVar11,uVar10);
    if (iVar6 != 0) {
      uVar15 = uVar5;
    }
    uVar8 = FUN_71ba0b38(uVar8,uVar15);
    if (iVar7 != 0) {
      uVar2 = uVar13;
    }
    uVar2 = FUN_71ba240c(uVar2,uVar10);
    uVar15 = *(undefined4 *)(iVar1 + 0xe8);
    iVar3 = FUN_71ba2d50(uVar15,uVar2);
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = FUN_71ba2d10(uVar9,uVar8);
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = FUN_71ba2d10(uVar15,uVar11);
    if (iVar3 == 0) {
      return 0;
    }
    if (*(char *)(iVar1 + 0x1c23) != '\0') {
      return 0;
    }
    iVar6 = *(int *)(iVar1 + 0x1bd0);
    iVar3 = 0;
    if (iVar6 != 0) {
      iVar3 = *(int *)(iVar6 + 800);
    }
    if (iVar6 != 0 && iVar3 != 0) {
      bVar17 = *(char *)(iVar3 + 0x8b) != '\0';
      iVar6 = 0;
      if (bVar17) {
        iVar6 = *(int *)(iVar12 + 800);
      }
      if ((bVar17 && iVar3 != iVar6) && ((*(byte *)(iVar3 + 0xb) & 0xc) != 0)) goto LAB_718cf428;
    }
    if ((*(byte *)(iVar12 + 0x1b0) & 4) != 0) {
LAB_718cf428:
      *(undefined1 *)(iVar1 + 0x1a9b) = 1;
      return 0;
    }
    uVar2 = 1;
    if (param_2 != 0) {
      *(undefined2 *)(iVar1 + 0x1a98) = 0;
      *(int *)(iVar1 + 0x1a90) = param_2;
      if (*(int *)(iVar1 + 0x1a94) == param_2) {
        if (*(char *)(iVar1 + 0x2de4) != '\0') {
          uVar2 = FUN_718d0df0(**(undefined4 **)(iVar1 + 0x1bcc),1,s___Foreground_7006aed8);
          FUN_718fafb0(uVar2,param_1,param_1 + 2,0xff00ffff,0,0xf,0x3f800000);
        }
      }
      else {
        *(undefined4 *)(iVar1 + 0x1a9c) = 0;
        *(undefined4 *)(iVar1 + 0x1aa0) = 0;
      }
      uVar2 = 1;
      if (*(int *)(iVar1 + 0x2de8) == param_2) {
        software_bkpt(0);
        return 1;
      }
    }
  }
  return uVar2;
}


// =========================================================================
// Function: FUN_718cf618
// Entry: 0x718cf618 | Size: 396 bytes
// =========================================================================

bool FUN_718cf618(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uStack_2c;
  
  iVar7 = DAT_712042b4;
  uVar10 = *param_2;
  uVar11 = param_2[1];
  uVar15 = *param_1;
  puVar9 = (undefined4 *)(DAT_712042b4 + 0x1578);
  uVar12 = param_1[1];
  puVar2 = (undefined4 *)(DAT_712042b4 + 0xe4);
  uVar8 = uVar15;
  uVar13 = uVar11;
  uVar14 = uVar10;
  uStack_2c = uVar12;
  if (param_3 != 0) {
    iVar3 = *(int *)(DAT_712042b4 + 0x1a6c);
    uVar8 = *(undefined4 *)(iVar3 + 0x234);
    uStack_2c = *(undefined4 *)(iVar3 + 0x238);
    uVar14 = *(undefined4 *)(iVar3 + 0x23c);
    uVar13 = *(undefined4 *)(iVar3 + 0x240);
    iVar3 = FUN_71ba2d50(uVar15);
    iVar4 = FUN_71ba2d50(uVar12,uStack_2c);
    iVar5 = FUN_71ba2d10(uVar10,uVar14);
    iVar6 = FUN_71ba2d10(uVar11,uVar13);
    if (iVar6 != 0) {
      uVar13 = uVar11;
    }
    if (iVar5 != 0) {
      uVar14 = uVar10;
    }
    if (iVar4 != 0) {
      uStack_2c = uVar12;
    }
    if (iVar3 != 0) {
      uVar8 = uVar15;
    }
  }
  uVar11 = *puVar9;
  uVar8 = FUN_71ba240c(uVar8,uVar11);
  uVar10 = *puVar2;
  iVar3 = FUN_71ba2d50(uVar10,uVar8);
  bVar1 = false;
  if (iVar3 != 0) {
    uVar8 = FUN_71ba0b38(uVar14,uVar11);
    iVar3 = FUN_71ba2d10(uVar10,uVar8);
    uVar14 = *(undefined4 *)(iVar7 + 0x157c);
    uVar8 = FUN_71ba0b38(uVar13,uVar14);
    uVar13 = *(undefined4 *)(iVar7 + 0xe8);
    iVar7 = FUN_71ba2d10(uVar13,uVar8);
    uVar8 = FUN_71ba240c(uStack_2c,uVar14);
    iVar4 = FUN_71ba2d50(uVar13,uVar8);
    bVar1 = (iVar3 != 0 && iVar7 != 0) && iVar4 != 0;
  }
  return bVar1;
}


// =========================================================================
// Function: FUN_718cf92c
// Entry: 0x718cf92c | Size: 36 bytes
// =========================================================================

void FUN_718cf92c(void)

{
  FUN_718d0df0(**(undefined4 **)(DAT_712042b4 + 0x1bcc),1,s___Foreground_7006aed8);
  return;
}


// =========================================================================
// Function: FUN_718cf9c4
// Entry: 0x718cf9c4 | Size: 204 bytes
// =========================================================================

bool FUN_718cf9c4(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar1 = DAT_712042b4;
  iVar3 = *(int *)(DAT_712042b4 + 0x1a6c);
  iVar2 = FUN_71ba2d10(*(undefined4 *)(iVar3 + 0x238),param_1[3]);
  if (iVar2 == 0) {
LAB_718cfa48:
    if (param_2 != 0) {
      iVar2 = *(int *)(iVar1 + 0x1aa4);
      bVar4 = iVar2 != param_2;
      if (bVar4) {
        iVar2 = *(int *)(iVar1 + 0x1bd4);
      }
      if (!bVar4 || iVar2 == param_2) goto LAB_718cfa64;
    }
    bVar4 = true;
    if (param_3 == 0) {
      return *(char *)(iVar1 + 0x2db0) == '\0';
    }
  }
  else {
    iVar2 = FUN_71ba2d70(*(undefined4 *)(iVar3 + 0x240),param_1[1]);
    if (((iVar2 == 0) ||
        (iVar2 = FUN_71ba2d10(*(undefined4 *)(iVar3 + 0x234),param_1[2]), iVar2 == 0)) ||
       (iVar2 = FUN_71ba2d70(*(undefined4 *)(iVar3 + 0x23c),*param_1), iVar2 == 0))
    goto LAB_718cfa48;
LAB_718cfa64:
    bVar4 = false;
  }
  return bVar4;
}


// =========================================================================
// Function: FUN_718cfb38
// Entry: 0x718cfb38 | Size: 176 bytes
// =========================================================================

undefined4 FUN_718cfb38(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_71ba2d10(param_2,0);
  uVar3 = 0;
  if (iVar1 == 0) {
    iVar1 = *(int *)(DAT_712042b4 + 0x1a6c);
    iVar2 = FUN_71ba2cf0(param_2,0);
    if (iVar2 == 0) {
      iVar2 = FUN_71ba2d70(param_2,0);
      if (iVar2 != 0) {
        uVar3 = FUN_71ba240c(*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0x58));
        param_2 = FUN_71ba0b38(uVar3,param_2);
      }
    }
    else {
      param_2 = *(undefined4 *)(iVar1 + 0x21c);
    }
    uVar4 = FUN_71ba240c(param_2,*param_1);
    iVar1 = FUN_71ba2d50(uVar4,0x3f800000);
    uVar3 = 0x3f800000;
    if (iVar1 != 0) {
      uVar3 = uVar4;
    }
  }
  return uVar3;
}


// =========================================================================
// Function: FUN_718cfce4
// Entry: 0x718cfce4 | Size: 112 bytes
// =========================================================================

int FUN_718cfce4(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_712042b4 != 0) {
    *(int *)(DAT_712042b4 + 0x370) = *(int *)(DAT_712042b4 + 0x370) + 1;
  }
  iVar1 = (*DAT_70105bac)(0x3bf8,DAT_712042bc);
  FUN_718cfe44(iVar1,param_1);
  if (DAT_712042b4 == 0) {
    DAT_712042b4 = iVar1;
  }
  FUN_718d0748(iVar1);
  return iVar1;
}


// =========================================================================
// Function: FUN_718cfe44
// Entry: 0x718cfe44 | Size: 1656 bytes
// =========================================================================

undefined1 * FUN_718cfe44(undefined1 *param_1,int param_2)

{
  FUN_718c8268(param_1 + 8);
  imp___aeabi_memclr4(param_1 + 0x15dc,0x350);
  *(undefined4 *)(param_1 + 0x1518) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x15d4) = 0x3fa00000;
  *(undefined4 *)(param_1 + 0x15d8) = 0x3fcccccd;
  *(undefined2 *)(param_1 + 0x15d0) = 0x101;
  *(undefined4 *)(param_1 + 0x15bc) = 0x41980000;
  *(undefined4 *)(param_1 + 0x15c0) = 0x41980000;
  param_1[0x15d2] = 1;
  *(undefined4 *)(param_1 + 0x15a8) = 1;
  *(undefined4 *)(param_1 + 0x1590) = 0x41200000;
  *(undefined4 *)(param_1 + 0x1580) = 0x41a80000;
  *(undefined4 *)(param_1 + 0x1584) = 0x40c00000;
  *(undefined4 *)(param_1 + 0x1588) = 0x41600000;
  *(undefined4 *)(param_1 + 0x158c) = 0x41100000;
  *(undefined4 *)(param_1 + 0x1570) = 0x40800000;
  *(undefined4 *)(param_1 + 0x1574) = 0x40000000;
  *(undefined4 *)(param_1 + 0x1578) = 0;
  *(undefined4 *)(param_1 + 0x15cc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x159c) = 0x40800000;
  *(undefined4 *)(param_1 + 0x1598) = 0x40800000;
  *(undefined4 *)(param_1 + 0x1564) = 0x40800000;
  *(undefined4 *)(param_1 + 0x1568) = 0x40800000;
  *(undefined4 *)(param_1 + 0x156c) = 0x40800000;
  *(undefined4 *)(param_1 + 0x154c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1550) = 0x40800000;
  *(undefined4 *)(param_1 + 0x1554) = 0x40400000;
  *(undefined4 *)(param_1 + 0x1558) = 0;
  *(undefined4 *)(param_1 + 0x1544) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1528) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1530) = 0x42000000;
  *(undefined4 *)(param_1 + 0x1534) = 0;
  *(undefined4 *)(param_1 + 0x1538) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x15c4) = 0x40400000;
  *(undefined4 *)(param_1 + 0x15c8) = 0x40400000;
  *(undefined4 *)(param_1 + 0x15a0) = 0;
  *(undefined4 *)(param_1 + 0x15a4) = 0;
  *(undefined4 *)(param_1 + 0x15ac) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x15b0) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x15b4) = 0;
  *(undefined4 *)(param_1 + 0x15b8) = 0;
  *(undefined4 *)(param_1 + 0x157c) = 0;
  *(undefined4 *)(param_1 + 0x1594) = 0;
  *(undefined4 *)(param_1 + 0x155c) = 0;
  *(undefined4 *)(param_1 + 0x1560) = 0x41000000;
  *(undefined4 *)(param_1 + 0x153c) = 0;
  *(undefined4 *)(param_1 + 0x1540) = 0;
  *(undefined4 *)(param_1 + 0x1548) = 0;
  *(undefined4 *)(param_1 + 0x151c) = 0x41000000;
  *(undefined4 *)(param_1 + 0x1520) = 0x41000000;
  *(undefined4 *)(param_1 + 0x1524) = 0;
  *(undefined4 *)(param_1 + 0x152c) = 0x42000000;
  FUN_718f592c(param_1 + 0x1518);
  FUN_718f5f98(param_1 + 0x1938);
  *(undefined4 *)(param_1 + 0x1a84) = 0;
  *(undefined4 *)(param_1 + 0x1a88) = 0;
  *(undefined4 *)(param_1 + 0x1ac8) = 0;
  *(undefined4 *)(param_1 + 0x1acc) = 0;
  imp___aeabi_memclr4(param_1 + 0x1a2c,0x3c);
  imp___aeabi_memclr8(param_1 + 0x1af0,0x60);
  *(undefined4 *)(param_1 + 0x1c58) = 0;
  *(undefined4 *)(param_1 + 0x1c5c) = 0;
  *(undefined4 *)(param_1 + 0x1c60) = 0;
  *(undefined4 *)(param_1 + 0x1b50) = 0;
  *(undefined4 *)(param_1 + 0x1b54) = 0;
  *(undefined4 *)(param_1 + 7000) = 0;
  *(undefined4 *)(param_1 + 0x1b5c) = 0;
  *(undefined4 *)(param_1 + 0x1b60) = 0;
  *(undefined4 *)(param_1 + 0x1c04) = 0;
  *(undefined4 *)(param_1 + 0x1c08) = 0;
  *(undefined4 *)(param_1 + 0x1c0c) = 0;
  *(undefined4 *)(param_1 + 0x1c10) = 0;
  *(undefined4 *)(param_1 + 0x1c2c) = 0;
  *(undefined4 *)(param_1 + 0x1c30) = 0;
  *(undefined4 *)(param_1 + 0x1c34) = 0;
  *(undefined4 *)(param_1 + 0x1c38) = 0;
  imp___aeabi_memclr4(param_1 + 0x1b64,0x6c);
  *(undefined4 *)(param_1 + 0x1c64) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x1c68) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x1c6c) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x1c8c) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x1c90) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x1c94) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x1c70) = 0;
  *(undefined4 *)(param_1 + 0x1c74) = 0;
  *(undefined4 *)(param_1 + 0x1c78) = 0;
  *(undefined4 *)(param_1 + 0x1c7c) = 0;
  *(undefined4 *)(param_1 + 0x1c80) = 0;
  *(undefined4 *)(param_1 + 0x1c84) = 0;
  *(undefined4 *)(param_1 + 0x1c88) = 0;
  *(undefined4 *)(param_1 + 0x1c98) = 0;
  *(undefined4 *)(param_1 + 0x1cb4) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x1c9c) = 0;
  *(undefined4 *)(param_1 + 0x1ca0) = 0;
  *(undefined4 *)(param_1 + 0x1ca4) = 0;
  *(undefined4 *)(param_1 + 0x1ca8) = 0;
  *(undefined4 *)(param_1 + 0x1cac) = 0;
  *(undefined4 *)(param_1 + 0x1cb0) = 0;
  *(undefined4 *)(param_1 + 0x1cb8) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x1cbc) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x1cc0) = 0;
  *(undefined4 *)(param_1 + 0x1cc4) = 0;
  *(undefined4 *)(param_1 + 0x1cc8) = 0;
  *(undefined4 *)(param_1 + 0x1ccc) = 0;
  *(undefined4 *)(param_1 + 0x1d24) = 0;
  *(undefined4 *)(param_1 + 0x1d28) = 0;
  *(undefined4 *)(param_1 + 0x1d2c) = 0;
  *(undefined4 *)(param_1 + 0x1d30) = 0;
  imp___aeabi_memclr8(param_1 + 0x1d38,0x21);
  *(undefined2 *)(param_1 + 0x1d59) = 0;
  *(undefined4 *)(param_1 + 0x1d34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1d88) = 0;
  *(undefined4 *)(param_1 + 0x1d8c) = 0;
  *(undefined4 *)(param_1 + 0x1d90) = 0;
  *(undefined4 *)(param_1 + 0x1d5c) = 0;
  *(undefined4 *)(param_1 + 0x1d60) = 0;
  *(undefined4 *)(param_1 + 0x1d64) = 0;
  *(undefined4 *)(param_1 + 0x1d68) = 0;
  imp___aeabi_memclr8(param_1 + 0x1da8,0x40);
  imp___aeabi_memclr4(param_1 + 0x1dec,0x3c);
  imp___aeabi_memclr8(param_1 + 0x1e28,0xe7c);
  FUN_71907da0(param_1 + 0x2ca4);
  param_1[0x2dee] = 0;
  *(undefined2 *)(param_1 + 0x2dec) = 0;
  *(undefined4 *)(param_1 + 0x2dbc) = 0;
  *(undefined4 *)(param_1 + 0x2dc0) = 0;
  *(undefined4 *)(param_1 + 0x2dc4) = 0;
  *(undefined4 *)(param_1 + 0x2d14) = 0;
  *(undefined4 *)(param_1 + 0x2d18) = 0;
  *(undefined4 *)(param_1 + 0x2d1c) = 0;
  *(undefined4 *)(param_1 + 0x2d20) = 0;
  imp___aeabi_memclr8(param_1 + 0x2d40,0x28);
  imp___aeabi_memclr8(param_1 + 0x2d70,0x3c);
  *(undefined2 *)(param_1 + 0x2def) = 0x101;
  *(undefined4 *)(param_1 + 0x2df4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2df8) = 0xffffffff;
  param_1[1] = param_2 == 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x192c) = 0;
  *(undefined4 *)(param_1 + 0x1930) = 0;
  *(undefined4 *)(param_1 + 0x1934) = 0;
  if (param_2 == 0) {
    if (DAT_712042b4 != 0) {
      *(int *)(DAT_712042b4 + 0x370) = *(int *)(DAT_712042b4 + 0x370) + 1;
    }
    (*DAT_70105bac)(0x468,DAT_712042bc);
    param_2 = FUN_718fdd38();
  }
  *(int *)(param_1 + 0x98) = param_2;
  *(undefined4 *)(param_1 + 0x1a24) = 0;
  *(undefined4 *)(param_1 + 0x1a28) = 0;
  *(undefined4 *)(param_1 + 0x1a08) = 0;
  *(undefined4 *)(param_1 + 0x1a0c) = 0;
  *(undefined4 *)(param_1 + 0x1a10) = 0;
  *(undefined4 *)(param_1 + 0x1a14) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1a18) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1a1c) = 0;
  param_1[0x1a20] = 0;
  *(undefined4 *)(param_1 + 0x1a68) = 0;
  *(undefined4 *)(param_1 + 0x1a6c) = 0;
  *(undefined4 *)(param_1 + 0x1a70) = 0;
  *(undefined4 *)(param_1 + 0x1a74) = 0;
  *(undefined4 *)(param_1 + 0x1a78) = 0;
  *(undefined4 *)(param_1 + 0x1a7c) = 0;
  *(undefined4 *)(param_1 + 0x1a80) = 0;
  imp___aeabi_memclr4(param_1 + 0x1a8c,0x2b);
  *(undefined4 *)(param_1 + 0x1ac8) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x1acc) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x1ae4) = 0;
  *(undefined4 *)(param_1 + 0x1ae8) = 0;
  *(undefined4 *)(param_1 + 0x1aec) = 0;
  *(undefined4 *)(param_1 + 0x1ab8) = 0;
  *(undefined4 *)(param_1 + 0x1abc) = 0;
  *(undefined4 *)(param_1 + 0x1ac0) = 0;
  *(undefined4 *)(param_1 + 0x1ac4) = 0;
  *(undefined4 *)(param_1 + 0x1ad0) = 0;
  *(undefined4 *)(param_1 + 0x1ad4) = 0;
  *(undefined4 *)(param_1 + 0x1ad8) = 0;
  *(undefined4 *)(param_1 + 0x1adc) = 0;
  *(undefined2 *)(param_1 + 0x1ae0) = 0;
  imp___aeabi_memclr8(param_1 + 0x1bd0,0x34);
  *(undefined2 *)(param_1 + 0x1c20) = 0;
  param_1[0x1c22] = 1;
  *(undefined4 *)(param_1 + 0x1c1c) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x1cf8) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x1cfc) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x1d00) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x1d04) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x1c04) = 0;
  *(undefined4 *)(param_1 + 0x1c08) = 0;
  *(undefined4 *)(param_1 + 0x1c0c) = 0;
  *(undefined4 *)(param_1 + 0x1c10) = 0;
  param_1[0x1c3c] = 0;
  *(undefined4 *)(param_1 + 0x1c28) = 0;
  *(undefined4 *)(param_1 + 0x1c14) = 0;
  *(undefined4 *)(param_1 + 0x1c18) = 0;
  *(undefined4 *)(param_1 + 0x1c23) = 0;
  *(undefined4 *)(param_1 + 0x1c40) = 0;
  *(undefined4 *)(param_1 + 0x1c44) = 0;
  *(undefined4 *)(param_1 + 0x1c48) = 0;
  *(undefined4 *)(param_1 + 0x1c4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1cf0) = 0;
  *(undefined4 *)(param_1 + 0x1cf4) = 0;
  *(undefined4 *)(param_1 + 0x1d18) = 0;
  param_1[0x1d08] = 0;
  *(undefined4 *)(param_1 + 0x1cd0) = 0;
  *(undefined4 *)(param_1 + 0x1cd4) = 0;
  *(undefined4 *)(param_1 + 0x1cd8) = 0;
  *(undefined4 *)(param_1 + 0x1cdc) = 0;
  *(undefined4 *)(param_1 + 0x1ce0) = 0;
  *(undefined4 *)(param_1 + 0x1ce4) = 0;
  *(undefined4 *)(param_1 + 0x1ce8) = 0;
  param_1[0x1cec] = 0;
  *(undefined4 *)(param_1 + 0x1d0c) = 0;
  *(undefined4 *)(param_1 + 0x2cfc) = 0xa900000;
  *(undefined4 *)(param_1 + 0x1d10) = 0;
  *(undefined4 *)(param_1 + 0x1d13) = 0;
  *(undefined4 *)(param_1 + 0x1d20) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1d1c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1d80) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1d84) = 0;
  *(undefined4 *)(param_1 + 0x1e20) = 0;
  *(undefined4 *)(param_1 + 0x1e24) = 0;
  *(undefined4 *)(param_1 + 0x1de8) = 0;
  *(undefined4 *)(param_1 + 0x1da4) = 0;
  *(undefined4 *)(param_1 + 0x2cf8) = 0;
  *(undefined4 *)(param_1 + 0x2d04) = 0;
  *(undefined4 *)(param_1 + 0x1d6c) = 0;
  *(undefined4 *)(param_1 + 0x1d70) = 0;
  *(undefined4 *)(param_1 + 0x1d74) = 0;
  *(undefined4 *)(param_1 + 0x1d78) = 0;
  *(undefined4 *)(param_1 + 0x1d7c) = 0;
  *(undefined4 *)(param_1 + 0x1d94) = 0;
  *(undefined4 *)(param_1 + 0x2d10) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x2d30) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 0x2d3c) = 0x3f000000;
  *(undefined2 *)(param_1 + 0x2d68) = 0x2e;
  *(undefined4 *)(param_1 + 0x2ddc) = 2;
  *(undefined4 *)(param_1 + 0x2de0) = 2;
  *(undefined4 *)(param_1 + 0x1d98) = 0;
  *(undefined4 *)(param_1 + 0x1d9c) = 0;
  *(undefined4 *)(param_1 + 0x1da0) = 0;
  *(undefined4 *)(param_1 + 0x2d00) = 0;
  *(undefined4 *)(param_1 + 0x2d0c) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x2d64) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x2d60) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x2d2c) = 0;
  *(undefined4 *)(param_1 + 0x2d34) = 0;
  *(undefined4 *)(param_1 + 0x2d38) = 0;
  *(undefined2 *)(param_1 + 0x2d28) = 0;
  *(undefined4 *)(param_1 + 0x2d24) = 0;
  *(undefined4 *)(param_1 + 0x2d08) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x2dcc) = 0;
  *(undefined4 *)(param_1 + 0x2db4) = 0;
  param_1[0x2db0] = 0;
  *(undefined4 *)(param_1 + 0x2dac) = 0;
  *(undefined4 *)(param_1 + 0x2d6c) = 0;
  *(undefined4 *)(param_1 + 0x2d5c) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x2d58) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x2dc8) = 0;
  param_1[0x2dd4] = 0;
  *(undefined4 *)(param_1 + 0x2dd0) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x2db8) = 0;
  *(undefined4 *)(param_1 + 0x2de8) = 0;
  param_1[0x2de4] = 0;
  *(undefined4 *)(param_1 + 0x2dd8) = 0;
  imp___aeabi_memclr4(param_1 + 0x2dfc,0x1e0);
  *(undefined4 *)(param_1 + 0x2fdc) = 0;
  *(undefined4 *)(param_1 + 0x2fe0) = 0;
  *(undefined4 *)(param_1 + 0x2fe4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2fe8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2fec) = 0xffffffff;
  imp___aeabi_memclr8(param_1 + 0x2ff0,0xc01);
  return param_1;
}


// =========================================================================
// Function: FUN_718d0748
// Entry: 0x718d0748 | Size: 676 bytes
// =========================================================================

void FUN_718d0748(undefined1 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int extraout_r1;
  int extraout_r1_00;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  
  piVar5 = (int *)(param_1 + 0x2d7c);
  iVar1 = *piVar5;
  if (iVar1 == *(int *)(param_1 + 0x2d80)) {
    iVar8 = iVar1 + iVar1 / 2;
    if (iVar1 == 0) {
      iVar8 = 8;
    }
    if (iVar8 <= iVar1 + 1) {
      iVar8 = iVar1 + 1;
    }
    if (DAT_712042b4 != 0) {
      param_3 = *(int *)(DAT_712042b4 + 0x370);
    }
    if (DAT_712042b4 != 0) {
      *(int *)(DAT_712042b4 + 0x370) = param_3 + 1;
    }
    iVar2 = (*DAT_70105bac)(iVar8 * 0x24,DAT_712042bc);
    if (*(int *)(param_1 + 0x2d84) != 0) {
      imp___aeabi_memcpy(iVar2,*(int *)(param_1 + 0x2d84),*piVar5 * 0x24);
      iVar3 = *(int *)(param_1 + 0x2d84);
      iVar1 = extraout_r1;
      if (iVar3 != 0) {
        iVar1 = DAT_712042b4;
      }
      if (iVar3 != 0 && iVar1 != 0) {
        *(int *)(iVar1 + 0x370) = *(int *)(iVar1 + 0x370) + -1;
      }
      (*DAT_70105bb0)(iVar3,DAT_712042bc);
    }
    iVar1 = *piVar5;
    *(int *)(param_1 + 0x2d80) = iVar8;
    *(int *)(param_1 + 0x2d84) = iVar2;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x2d84);
  }
  piVar6 = (int *)(param_1 + 0x1bc4);
  puVar7 = (undefined4 *)(iVar2 + iVar1 * 0x24);
  *puVar7 = s_Window_7006659a;
  puVar7[8] = 0;
  puVar7[7] = FUN_718e7a38;
  puVar7[6] = FUN_718e7848;
  puVar7[5] = FUN_718e76c4;
  puVar7[3] = 0;
  puVar7[4] = FUN_718e756c;
  puVar7[2] = FUN_718e7464;
  puVar7[1] = 0x8c48fceb;
  *piVar5 = *piVar5 + 1;
  FUN_7191221c(param_1);
  if (DAT_712042b4 != 0) {
    *(int *)(DAT_712042b4 + 0x370) = *(int *)(DAT_712042b4 + 0x370) + 1;
  }
  iVar1 = (*DAT_70105bac)(0x98,DAT_712042bc);
  imp___aeabi_memclr(iVar1,0x24);
  imp___aeabi_memclr(iVar1 + 0x34,0x2c);
  imp___aeabi_memclr4(iVar1 + 0x60,0x38);
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x28) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  iVar2 = *piVar6;
  if (iVar2 == *(int *)(param_1 + 0x1bc8)) {
    iVar3 = iVar2 + iVar2 / 2;
    if (iVar2 == 0) {
      iVar3 = 8;
    }
    if (iVar3 <= iVar2 + 1) {
      iVar3 = iVar2 + 1;
    }
    if (DAT_712042b4 != 0) {
      *(int *)(DAT_712042b4 + 0x370) = *(int *)(DAT_712042b4 + 0x370) + 1;
    }
    iVar8 = (*DAT_70105bac)(iVar3 << 2,DAT_712042bc);
    if (*(int *)(param_1 + 0x1bcc) != 0) {
      imp___aeabi_memcpy(iVar8,*(int *)(param_1 + 0x1bcc),*piVar6 << 2);
      iVar4 = *(int *)(param_1 + 0x1bcc);
      iVar2 = extraout_r1_00;
      if (iVar4 != 0) {
        iVar2 = DAT_712042b4;
      }
      if (iVar4 != 0 && iVar2 != 0) {
        *(int *)(iVar2 + 0x370) = *(int *)(iVar2 + 0x370) + -1;
      }
      (*DAT_70105bb0)(iVar4,DAT_712042bc);
    }
    iVar2 = *piVar6;
    *(int *)(param_1 + 0x1bc8) = iVar3;
    *(int *)(param_1 + 0x1bcc) = iVar8;
  }
  else {
    iVar8 = *(int *)(param_1 + 0x1bcc);
  }
  *(int *)(iVar8 + iVar2 * 4) = iVar1;
  *param_1 = 1;
  *piVar6 = *piVar6 + 1;
  return;
}


// =========================================================================
// Function: FUN_718d0d4c
// Entry: 0x718d0d4c | Size: 16 bytes
// =========================================================================

int FUN_718d0d4c(void)

{
  return DAT_712042b4 + 8;
}


// =========================================================================
// Function: FUN_718d0d94
// Entry: 0x718d0d94 | Size: 36 bytes
// =========================================================================

char * FUN_718d0d94(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)(**(int **)(DAT_712042b4 + 0x1bcc) + 0x34);
  if (*pcVar1 == '\0') {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}


// =========================================================================
// Function: FUN_718d0df0
// Entry: 0x718d0df0 | Size: 300 bytes
// =========================================================================

int FUN_718d0df0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar1 = DAT_712042b4;
  iVar4 = *(int *)(param_1 + 0x2c + param_2 * 4);
  if (iVar4 == 0) {
    if (DAT_712042b4 != 0) {
      *(int *)(DAT_712042b4 + 0x370) = *(int *)(DAT_712042b4 + 0x370) + 1;
    }
    iVar4 = (*DAT_70105bac)(0x90,DAT_712042bc);
    *(undefined4 *)(iVar4 + 0x78) = 0;
    *(undefined4 *)(iVar4 + 0x7c) = 0;
    *(undefined4 *)(iVar4 + 0x80) = 0;
    *(undefined4 *)(iVar4 + 0x84) = 0;
    *(undefined4 *)(iVar4 + 0x88) = 0;
    imp___aeabi_memclr(iVar4,0x90);
    *(int *)(iVar4 + 0x2c) = iVar1 + 0x1938;
    *(undefined4 *)(iVar4 + 0x30) = param_3;
    *(int *)(param_1 + 0x2c + param_2 * 4) = iVar4;
  }
  if (*(int *)(param_1 + 0x24 + param_2 * 4) != *(int *)(iVar1 + 0x1a10)) {
    FUN_718f624c(iVar4);
    FUN_718f7148(iVar4,*(undefined4 *)(*(int *)(iVar1 + 0x98) + 8));
    uVar3 = *(undefined4 *)(param_1 + 8);
    uVar6 = *(undefined4 *)(param_1 + 0xc);
    uVar5 = *(undefined4 *)(param_1 + 4);
    uVar2 = FUN_71ba0b38(*(undefined4 *)(param_1 + 0x10),uVar3);
    uVar6 = FUN_71ba0b38(uVar6,uVar5);
    FUN_718f6c58(iVar4,uVar5,uVar3,uVar6,uVar2,0);
    *(int *)(param_1 + 0x24 + param_2 * 4) = *(int *)(iVar1 + 0x1a10);
  }
  return iVar4;
}


// =========================================================================
// Function: FUN_718d103c
// Entry: 0x718d103c | Size: 36 bytes
// =========================================================================

void FUN_718d103c(void)

{
  FUN_718d0df0(**(undefined4 **)(DAT_712042b4 + 0x1bcc),0,s___Background_7006d776);
  return;
}


// =========================================================================
// Function: FUN_718d10d4
// Entry: 0x718d10d4 | Size: 308 bytes
// =========================================================================

void FUN_718d10d4(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  
  iVar1 = DAT_712042b4;
  FUN_718d12b4();
  iVar2 = DAT_712042b4;
  iVar5 = *(int *)(param_1 + 0x50);
  piVar3 = (int *)(DAT_712042b4 + 0x1aa4);
  iVar4 = *piVar3;
  *(bool *)(DAT_712042b4 + 0x1ab0) = iVar4 != iVar5;
  if (iVar4 != iVar5) {
    if (iVar5 != 0) {
      *(int *)(iVar2 + 0x1ae8) = iVar5;
    }
    *(undefined2 *)(iVar2 + 0x1ab3) = 0;
    *(undefined4 *)(iVar2 + 0x1aac) = 0;
    if (iVar5 != 0) {
      *(undefined4 *)(iVar2 + 0x1aec) = 0;
    }
  }
  *(int *)(iVar2 + 0x1ad0) = param_1;
  *(undefined2 *)(iVar2 + 0x1ab1) = 0;
  *piVar3 = iVar5;
  *(undefined1 *)(iVar2 + 0x1ab5) = 0;
  if (iVar5 != 0) {
    uVar7 = 2;
    *(int *)(iVar2 + 0x1aa8) = iVar5;
    if (*(int *)(iVar2 + 0x1bdc) != iVar5) {
      iVar4 = *(int *)(iVar2 + 0x1be8);
      bVar9 = iVar4 != iVar5;
      if (bVar9) {
        iVar4 = *(int *)(iVar2 + 0x1bec);
      }
      if ((bVar9 && iVar4 != iVar5) && (uVar7 = 1, *(int *)(iVar2 + 0x1bf0) == iVar5)) {
        uVar7 = 2;
      }
    }
    *(undefined4 *)(iVar2 + 0x1ad4) = uVar7;
  }
  *(undefined1 *)(iVar2 + 0x1ab6) = 0;
  *(undefined4 *)(iVar2 + 0x1ab8) = 0;
  *(undefined4 *)(iVar2 + 0x1abc) = 0;
  *(undefined4 *)(iVar2 + 0x1ac0) = 0;
  *(undefined4 *)(iVar2 + 0x1ac4) = 0;
  *(undefined1 *)(iVar1 + 0x1ab2) = 1;
  *(undefined1 *)(iVar1 + 0x1c22) = 1;
  uVar6 = *(undefined4 *)(iVar1 + 0xe4);
  uVar8 = *(undefined4 *)(*(int *)(param_1 + 800) + 0xc);
  uVar7 = FUN_71ba240c(*(undefined4 *)(iVar1 + 0xe8),*(undefined4 *)(*(int *)(param_1 + 800) + 0x10)
                      );
  *(undefined4 *)(iVar1 + 0x1acc) = uVar7;
  uVar7 = FUN_71ba240c(uVar6,uVar8);
  *(undefined4 *)(iVar1 + 0x1ac8) = uVar7;
  if (((*(byte *)(param_1 + 8) & 4) == 0) && ((*(byte *)(*(int *)(param_1 + 800) + 8) & 4) == 0)) {
    *(int *)(iVar1 + 0x1a7c) = param_1;
  }
  return;
}


// =========================================================================
// Function: FUN_718d12b4
// Entry: 0x718d12b4 | Size: 544 bytes
// =========================================================================

void FUN_718d12b4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  bool bVar9;
  
  iVar1 = DAT_712042b4;
  piVar8 = (int *)(DAT_712042b4 + 0x1aa4);
  if (*(int *)(DAT_712042b4 + 0x1bd0) != param_1) {
    *(int *)(DAT_712042b4 + 0x1bd0) = param_1;
    if (param_1 == 0) {
      uVar2 = 0;
      *(undefined1 *)(iVar1 + 0x1c25) = 0;
    }
    else {
      if (*(char *)(iVar1 + 0x1c23) != '\0') {
        *(undefined1 *)(iVar1 + 0x1c21) = 1;
      }
      *(undefined1 *)(iVar1 + 0x1c25) = 0;
      uVar2 = *(undefined4 *)(param_1 + 0x330);
    }
    *(undefined4 *)(iVar1 + 0x1bd4) = uVar2;
    *(undefined1 *)(iVar1 + 0x1c20) = 0;
    *(undefined4 *)(iVar1 + 0x1bd8) = 0;
    *(undefined4 *)(iVar1 + 0x1c18) = 0;
  }
  iVar7 = 0;
  FUN_718d21e8(param_1,0);
  iVar5 = DAT_712042b4;
  if (param_1 != 0) {
    iVar7 = *(int *)(param_1 + 800);
  }
  if (*piVar8 != 0) {
    iVar3 = *(int *)(iVar1 + 0x1ad0);
    iVar4 = 0;
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + 800);
    }
    if ((iVar3 != 0 && iVar4 != iVar7) && (*(char *)(iVar1 + 0x1ab2) == '\0')) {
      piVar8 = (int *)(DAT_712042b4 + 0x1aa4);
      bVar9 = *piVar8 != 0;
      *(bool *)(DAT_712042b4 + 0x1ab0) = bVar9;
      if (bVar9) {
        *(undefined2 *)(iVar5 + 0x1ab3) = 0;
        *(undefined4 *)(iVar5 + 0x1aac) = 0;
      }
      *(undefined4 *)(iVar5 + 0x1ad0) = 0;
      *(undefined2 *)(iVar5 + 0x1ab1) = 0;
      *piVar8 = 0;
      *(undefined2 *)(iVar5 + 0x1ab5) = 0;
      *(undefined4 *)(iVar5 + 0x1ab8) = 0;
      *(undefined4 *)(iVar5 + 0x1abc) = 0;
      *(undefined4 *)(iVar5 + 0x1ac0) = 0;
      *(undefined4 *)(iVar5 + 0x1ac4) = 0;
    }
  }
  iVar1 = DAT_712042b4;
  if (param_1 != 0) {
    piVar8 = (int *)(DAT_712042b4 + 0x1a38);
    iVar5 = *piVar8;
    if ((1 < iVar5) &&
       (iVar4 = *(int *)(DAT_712042b4 + 0x1a40) + iVar5 * 4, *(int *)(iVar4 + -4) != iVar7)) {
      iVar5 = iVar5 + -1;
      iVar3 = -4;
      do {
        iVar6 = iVar4 + iVar3;
        if (*(int *)(iVar6 + -4) == iVar7) {
          imp___aeabi_memmove(iVar6 + -4,iVar6,-iVar3);
          *(int *)(*(int *)(iVar1 + 0x1a40) + *piVar8 * 4 + -4) = iVar7;
          break;
        }
        iVar5 = iVar5 + -1;
        iVar3 = iVar3 + -4;
      } while (0 < iVar5);
    }
    iVar1 = DAT_712042b4;
    if (((*(uint *)(iVar7 + 8) | *(uint *)(param_1 + 8)) & 0x2000) == 0) {
      piVar8 = (int *)(DAT_712042b4 + 0x1a2c);
      iVar4 = *piVar8;
      iVar5 = *(int *)(DAT_712042b4 + 0x1a34) + iVar4 * 4;
      iVar3 = *(int *)(iVar5 + -4);
      if (((iVar3 != iVar7) && (1 < iVar4)) && (*(int *)(iVar3 + 800) != iVar7)) {
        iVar4 = iVar4 + -1;
        iVar3 = -4;
        do {
          iVar6 = iVar5 + iVar3;
          if (*(int *)(iVar6 + -4) == iVar7) {
            imp___aeabi_memmove(iVar6 + -4,iVar6,-iVar3);
            *(int *)(*(int *)(iVar1 + 0x1a34) + *piVar8 * 4 + -4) = iVar7;
            return;
          }
          iVar4 = iVar4 + -1;
          iVar3 = iVar3 + -4;
        } while (0 < iVar4);
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_718d15c0
// Entry: 0x718d15c0 | Size: 512 bytes
// =========================================================================

void FUN_718d15c0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar2 = DAT_712042b4;
  piVar7 = (int *)(DAT_712042b4 + 0x1a7c);
  iVar4 = *piVar7;
  if (iVar4 != 0) {
    iVar5 = *(int *)(DAT_712042b4 + 0x1aa4);
    piVar1 = (int *)(DAT_712042b4 + 0x1adc);
    *(int *)(DAT_712042b4 + 0x1aa8) = iVar5;
    if (*piVar1 == iVar5) {
      *(undefined1 *)(iVar2 + 0x1ae0) = 1;
    }
    if (*(char *)(iVar2 + 0xec) != '\0') {
      uVar10 = *(undefined4 *)(iVar2 + 0xe4);
      uVar9 = *(undefined4 *)(iVar2 + 0xe8);
      iVar8 = *(int *)(iVar4 + 800);
      iVar3 = FUN_71ba2d50(uVar10,0xc87a0000);
      if ((iVar3 != 0) && (iVar3 = FUN_71ba2d50(uVar9,0xc87a0000), iVar3 != 0)) {
        uVar6 = *(undefined4 *)(iVar2 + 0x1ac8);
        uVar9 = FUN_71ba240c(uVar9,*(undefined4 *)(iVar2 + 0x1acc));
        uStack_28 = uVar9;
        uStack_2c = FUN_71ba240c(uVar10,uVar6);
        iVar5 = FUN_71ba2cf0(*(undefined4 *)(iVar8 + 0xc),uStack_2c);
        if ((iVar5 == 0) || (iVar5 = FUN_71ba2cf0(*(undefined4 *)(iVar8 + 0x10),uVar9), iVar5 == 0))
        {
          if ((*(byte *)(iVar8 + 9) & 1) == 0) {
            iVar4 = FUN_71ba2d30(*(undefined4 *)(iVar2 + 0x2d6c),0);
            if (iVar4 != 0) {
              *(undefined4 *)(iVar2 + 0x2d6c) = *(undefined4 *)(iVar2 + 0x1c);
            }
          }
          FUN_718d18f4(iVar8,&uStack_2c,1);
          iVar4 = *piVar7;
        }
        FUN_718d12b4(iVar4);
        return;
      }
    }
    if (iVar5 != 0) {
      *(undefined2 *)(iVar2 + 0x1ab3) = 0;
      *(undefined4 *)(iVar2 + 0x1aac) = 0;
    }
    *(bool *)(iVar2 + 0x1ab0) = iVar5 != 0;
    *(undefined4 *)(iVar2 + 0x1ad0) = 0;
    *(undefined2 *)(iVar2 + 0x1ab1) = 0;
    *(undefined4 *)(iVar2 + 0x1aa4) = 0;
    *(undefined2 *)(iVar2 + 0x1ab5) = 0;
    *piVar7 = 0;
LAB_718d1730:
    *(undefined4 *)(iVar2 + 0x1ab8) = 0;
    *(undefined4 *)(iVar2 + 0x1abc) = 0;
    *(undefined4 *)(iVar2 + 0x1ac0) = 0;
    *(undefined4 *)(iVar2 + 0x1ac4) = 0;
    return;
  }
  if ((*(int *)(DAT_712042b4 + 0x1ad0) != 0) &&
     (iVar4 = *(int *)(*(int *)(DAT_712042b4 + 0x1ad0) + 0x50),
     iVar4 == *(int *)(DAT_712042b4 + 0x1aa4))) {
    piVar7 = (int *)(DAT_712042b4 + 0x1adc);
    *(int *)(DAT_712042b4 + 0x1aa8) = iVar4;
    if (*piVar7 == iVar4) {
      *(undefined1 *)(iVar2 + 0x1ae0) = 1;
    }
    if (*(char *)(iVar2 + 0xec) == '\0') {
      *(bool *)(iVar2 + 0x1ab0) = iVar4 != 0;
      if (iVar4 != 0) {
        *(undefined2 *)(iVar2 + 0x1ab3) = 0;
        *(undefined4 *)(iVar2 + 0x1aac) = 0;
      }
      *(undefined4 *)(iVar2 + 0x1ad0) = 0;
      *(undefined2 *)(iVar2 + 0x1ab1) = 0;
      *(undefined4 *)(iVar2 + 0x1aa4) = 0;
      *(undefined2 *)(iVar2 + 0x1ab5) = 0;
      goto LAB_718d1730;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_718d18f4
// Entry: 0x718d18f4 | Size: 272 bytes
// =========================================================================

void FUN_718d18f4(int param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((param_3 == 0) || (((int)(char)*(uint *)(param_1 + 0xab) & param_3) != 0)) {
    *(undefined4 *)(param_1 + 0xb0) = 0x7f7fffff;
    *(undefined4 *)(param_1 + 0xb4) = 0x7f7fffff;
    *(uint *)(param_1 + 0xab) = *(uint *)(param_1 + 0xab) & 0xfffffff1;
    uVar2 = *param_2;
    FUN_71ba17bc(param_2[1]);
    uVar1 = FUN_71ba1b94();
    uVar4 = *(undefined4 *)(param_1 + 0xc);
    uVar5 = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x10) = uVar1;
    uVar3 = *(undefined4 *)(param_1 + 0xcc);
    uVar6 = *(undefined4 *)(param_1 + 0xd0);
    FUN_71ba17bc(uVar2);
    uVar2 = FUN_71ba1b94();
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    uVar2 = FUN_71ba240c(uVar2,uVar4);
    uVar3 = FUN_71ba0b38(uVar2,uVar3);
    *(undefined4 *)(param_1 + 0xcc) = uVar3;
    uVar1 = FUN_71ba240c(uVar1,uVar5);
    uVar3 = FUN_71ba0b38(uVar1,uVar6);
    *(undefined4 *)(param_1 + 0xd0) = uVar3;
    uVar3 = FUN_71ba0b38(uVar2,*(undefined4 *)(param_1 + 0xe4));
    *(undefined4 *)(param_1 + 0xe4) = uVar3;
    uVar3 = FUN_71ba0b38(uVar1,*(undefined4 *)(param_1 + 0xe8));
    *(undefined4 *)(param_1 + 0xe8) = uVar3;
    uVar3 = FUN_71ba0b38(uVar2,*(undefined4 *)(param_1 + 0xec));
    *(undefined4 *)(param_1 + 0xec) = uVar3;
    uVar3 = FUN_71ba0b38(uVar1,*(undefined4 *)(param_1 + 0xf0));
    *(undefined4 *)(param_1 + 0xf0) = uVar3;
    uVar2 = FUN_71ba0b38(uVar2,*(undefined4 *)(param_1 + 0xdc));
    *(undefined4 *)(param_1 + 0xdc) = uVar2;
    uVar1 = FUN_71ba0b38(uVar1,*(undefined4 *)(param_1 + 0xe0));
    *(undefined4 *)(param_1 + 0xe0) = uVar1;
  }
  return;
}


// =========================================================================
// Function: FUN_718d1ba4
// Entry: 0x718d1ba4 | Size: 692 bytes
// =========================================================================

void FUN_718d1ba4(undefined4 param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  bool bVar13;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uVar10 = DAT_712042b4;
  piVar9 = (int *)(DAT_712042b4 + 0x1a70);
  iVar1 = *(int *)(DAT_712042b4 + 0x1aa4);
  bVar13 = iVar1 == 0;
  if (bVar13) {
    iVar1 = *(int *)(DAT_712042b4 + 0x1a90);
  }
  if (!bVar13 || iVar1 != 0) {
    return;
  }
  iVar1 = *(int *)(DAT_712042b4 + 0x1bd0);
  if (iVar1 != 0) {
    param_2 = (uint)*(byte *)(iVar1 + 0x90);
  }
  if (iVar1 != 0 && param_2 != 0) {
    return;
  }
  if (*(char *)(DAT_712042b4 + 0x3d8) == '\0') goto LAB_718d1d04;
  iVar7 = *(int *)(DAT_712042b4 + 0x1a74);
  if (iVar7 == 0) {
    if ((iVar1 != 0) && (iVar1 = FUN_718d2158(), iVar1 == 0)) {
      FUN_718d12b4(0);
    }
    goto LAB_718d1d04;
  }
  if ((*(byte *)(iVar7 + 0xb) & 4) != 0) {
    iVar1 = *(int *)(DAT_712042b4 + 0x1bac);
    if (0 < iVar1) {
      piVar2 = *(int **)(DAT_712042b4 + 0x1bb4);
      do {
        if (*piVar2 == *(int *)(iVar7 + 0x9c)) goto LAB_718d1c14;
        iVar1 = iVar1 + -1;
        piVar2 = piVar2 + 9;
      } while (iVar1 != 0);
    }
    goto LAB_718d1d04;
  }
LAB_718d1c14:
  FUN_718d10d4(*piVar9);
  if ((*(char *)(uVar10 + 0xb5) != '\0') && ((*(byte *)(iVar7 + 8) & 1) == 0)) {
    FUN_718d1fac(&uStack_30,iVar7);
    uVar8 = *(undefined4 *)(uVar10 + 0x388);
    iVar1 = FUN_71ba2d50(uVar8,uStack_30);
    if (iVar1 != 0) {
      uVar12 = *(undefined4 *)(uVar10 + 0x38c);
      iVar1 = FUN_71ba2d50(uVar12,uStack_2c);
      if (((iVar1 != 0) && (iVar1 = FUN_71ba2d10(uVar8,uStack_28), iVar1 != 0)) &&
         (iVar1 = FUN_71ba2d10(uVar12,uStack_24), iVar1 != 0)) goto LAB_718d1cac;
    }
    *(undefined4 *)(uVar10 + 0x1a7c) = 0;
  }
LAB_718d1cac:
  if (*(char *)(uVar10 + 0x1a9b) != '\0') {
    *(undefined4 *)(uVar10 + 0x1a7c) = 0;
  }
LAB_718d1d04:
  if (*(char *)(uVar10 + 0x3d9) != '\0') {
    iVar1 = *(int *)(DAT_712042b4 + 0x1bac);
    if (0 < iVar1) {
      uVar4 = iVar1 + 1;
      piVar2 = (int *)(*(int *)(DAT_712042b4 + 0x1bb4) + iVar1 * 0x24 + -0x20);
      do {
        iVar7 = *piVar2;
        if (iVar7 != 0) {
          uVar10 = (uint)*(byte *)(iVar7 + 0xb);
        }
        if (iVar7 != 0 && (uVar10 & 8) != 0) goto LAB_718d1d68;
        uVar4 = uVar4 - 1;
        piVar2 = piVar2 + -9;
      } while (1 < uVar4);
    }
    iVar7 = 0;
LAB_718d1d68:
    iVar3 = *piVar9;
    iVar6 = iVar7;
    if (iVar3 != 0) {
      iVar5 = *(int *)(DAT_712042b4 + 0x1a2c);
      do {
        iVar6 = iVar7;
        if ((iVar5 < 1) ||
           (iVar11 = *(int *)(*(int *)(DAT_712042b4 + 0x1a34) + (iVar5 + -1) * 4), iVar6 = iVar3,
           iVar11 == iVar3)) break;
        iVar6 = iVar7;
        iVar5 = iVar5 + -1;
      } while (iVar11 != iVar7);
    }
    if (iVar1 != 0) {
      iVar7 = 0;
      if ((iVar1 < 1) || (iVar6 == 0)) {
LAB_718d1e44:
        if (iVar7 < iVar1) {
          FUN_718f0650(iVar7,1);
        }
        return;
      }
      piVar9 = (int *)(*(int *)(DAT_712042b4 + 0x1bb4) + 4);
      iVar3 = iVar1;
      do {
        iVar5 = *(int *)(*(int *)(DAT_712042b4 + 0x1bb4) + iVar7 * 0x24 + 4);
        if ((iVar5 != 0) && (iVar11 = iVar3, piVar2 = piVar9, (*(byte *)(iVar5 + 0xb) & 1) == 0)) {
          while ((*piVar2 == 0 || (*(int *)(*piVar2 + 800) != *(int *)(iVar6 + 800)))) {
            iVar11 = iVar11 + -1;
            piVar2 = piVar2 + 9;
            if (iVar11 == 0) goto LAB_718d1e44;
          }
        }
        iVar7 = iVar7 + 1;
        piVar9 = piVar9 + 9;
        iVar3 = iVar3 + -1;
      } while (iVar7 != iVar1);
    }
  }
  return;
}


// =========================================================================
// Function: FUN_718d1fac
// Entry: 0x718d1fac | Size: 204 bytes
// =========================================================================

void FUN_718d1fac(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar4 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = 0;
  uVar6 = *(undefined4 *)(param_2 + 0x10);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    puVar1 = (undefined4 *)(DAT_712042b4 + 0x1554);
    uVar3 = FUN_71ba21e8(*(undefined4 *)(DAT_712042b4 + 0x1934),*(undefined4 *)(param_2 + 0x280));
    if (*(int *)(param_2 + 0x31c) != 0) {
      uVar3 = FUN_71ba21e8(uVar3,*(undefined4 *)(*(int *)(param_2 + 0x31c) + 0x280));
    }
    uVar2 = FUN_71ba0b38(*puVar1,*puVar1);
    uVar3 = FUN_71ba0b38(uVar2,uVar3);
  }
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  *param_1 = *(undefined4 *)(param_2 + 0xc);
  param_1[1] = uVar2;
  uVar3 = FUN_71ba0b38(uVar6,uVar3);
  param_1[3] = uVar3;
  uVar3 = FUN_71ba0b38(uVar4,uVar5);
  param_1[2] = uVar3;
  return;
}


// =========================================================================
// Function: FUN_718d2158
// Entry: 0x718d2158 | Size: 88 bytes
// =========================================================================

int FUN_718d2158(void)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  byte in_r3;
  
  iVar1 = *(int *)(DAT_712042b4 + 0x1bac);
  if (0 < iVar1) {
    uVar3 = iVar1 + 1;
    piVar2 = (int *)(*(int *)(DAT_712042b4 + 0x1bb4) + iVar1 * 0x24 + -0x20);
    do {
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        in_r3 = *(byte *)(iVar1 + 0xb);
      }
      if (iVar1 != 0 && (in_r3 & 8) != 0) {
        return iVar1;
      }
      uVar3 = uVar3 - 1;
      piVar2 = piVar2 + -9;
    } while (1 < uVar3);
  }
  return 0;
}


// =========================================================================
// Function: FUN_718d21e8
// Entry: 0x718d21e8 | Size: 200 bytes
// =========================================================================

void FUN_718d21e8(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(DAT_712042b4 + 0x1bac);
  if (iVar7 != 0) {
    iVar1 = 0;
    if ((param_1 == 0) || (iVar7 < 1)) {
LAB_718d229c:
      if (iVar1 < iVar7) {
        FUN_718f0650();
        return;
      }
    }
    else {
      piVar2 = (int *)(*(int *)(DAT_712042b4 + 0x1bb4) + 4);
      iVar3 = iVar7;
      do {
        iVar4 = *(int *)(*(int *)(DAT_712042b4 + 0x1bb4) + iVar1 * 0x24 + 4);
        if ((iVar4 != 0) && (piVar5 = piVar2, iVar6 = iVar3, (*(byte *)(iVar4 + 0xb) & 1) == 0)) {
          while ((*piVar5 == 0 || (*(int *)(*piVar5 + 800) != *(int *)(param_1 + 800)))) {
            iVar6 = iVar6 + -1;
            piVar5 = piVar5 + 9;
            if (iVar6 == 0) goto LAB_718d229c;
          }
        }
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 9;
        iVar3 = iVar3 + -1;
      } while (iVar1 != iVar7);
    }
  }
  return;
}


// =========================================================================
// Function: FUN_718d2304
// Entry: 0x718d2304 | Size: 1932 bytes
// =========================================================================

void FUN_718d2304(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 uVar17;
  int iVar18;
  char cVar19;
  byte bVar20;
  int *piVar21;
  undefined4 uVar22;
  uint uVar23;
  undefined4 uVar24;
  uint uVar25;
  undefined4 uVar26;
  uint uVar27;
  undefined4 uVar28;
  uint uVar29;
  uint uVar30;
  bool bVar31;
  bool bVar32;
  byte bStack_3c;
  uint uStack_2c;
  
  iVar6 = DAT_712042b4;
  uVar30 = *(uint *)(DAT_712042b4 + 0x1a7c);
  uStack_2c = 0;
  if ((uVar30 != 0) && (uStack_2c = uVar30, (*(byte *)(uVar30 + 9) & 2) != 0)) {
    uStack_2c = 0;
  }
  uVar22 = *(undefined4 *)(DAT_712042b4 + 0x1578);
  uVar28 = *(undefined4 *)(DAT_712042b4 + 0x157c);
  puVar7 = (undefined4 *)(DAT_712042b4 + 0xe4);
  iVar8 = FUN_71ba2d50(uVar22,0x40800000);
  iVar9 = FUN_71ba2d50(uVar28,0x40800000);
  uVar17 = 0x40800000;
  if (iVar9 != 0) {
    uVar17 = uVar28;
  }
  if (*(char *)(iVar6 + 0xb4) == '\0') {
    uVar17 = uVar28;
  }
  uVar24 = 0x40800000;
  if (iVar8 != 0) {
    uVar24 = uVar22;
  }
  if (*(char *)(iVar6 + 0xb4) == '\0') {
    uVar24 = uVar22;
  }
  if ((int)*(uint *)(iVar6 + 0x1a2c) < 1) {
    uVar10 = 0;
  }
  else {
    iVar8 = *(int *)(iVar6 + 0x1a34);
    uVar25 = 0;
    uVar29 = *(uint *)(iVar6 + 0x1a2c);
    do {
      uVar23 = *(uint *)(iVar8 + -4 + uVar29 * 4);
      if (*(char *)(uVar23 + 0x8a) != '\0') {
        uVar10 = (uint)*(byte *)(uVar23 + 0x91);
        bVar31 = uVar10 == 0;
        if (bVar31) {
          uVar10 = *(uint *)(uVar23 + 8);
        }
        if (bVar31 && (uVar10 & 0x200) == 0) {
          uVar15 = uVar22;
          if ((uVar10 & 0x1000042) == 0) {
            uVar15 = uVar24;
          }
          uVar11 = FUN_71ba240c(*(undefined4 *)(uVar23 + 0x1e4),uVar15);
          uVar12 = *puVar7;
          iVar9 = FUN_71ba2d50(uVar12,uVar11);
          if (iVar9 != 0) {
            uVar11 = uVar28;
            if ((uVar10 & 0x1000042) == 0) {
              uVar11 = uVar17;
            }
            uVar13 = *(undefined4 *)(uVar23 + 0x1ec);
            uVar26 = *(undefined4 *)(uVar23 + 0x1e8);
            uVar14 = FUN_71ba0b38(uVar11,*(undefined4 *)(uVar23 + 0x1f0));
            uVar11 = FUN_71ba240c(uVar26,uVar11);
            uVar27 = *(uint *)(iVar6 + 0xe8);
            iVar9 = FUN_71ba2d50(uVar27,uVar11);
            uVar15 = FUN_71ba0b38(uVar15,uVar13);
            if (((iVar9 != 0) && (iVar9 = FUN_71ba2d10(uVar12,uVar15), iVar9 != 0)) &&
               (iVar9 = FUN_71ba2d10(uVar27,uVar14), iVar9 != 0)) {
              sVar5 = *(short *)(uVar23 + 0x254);
              if (sVar5 != 0) {
                uVar11 = *(undefined4 *)(uVar23 + 0xc);
                uVar15 = FUN_71ba1b94((int)*(short *)(uVar23 + 600));
                uVar15 = FUN_71ba0b38(uVar11,uVar15);
                iVar9 = FUN_71ba2d50(uVar12,uVar15);
                if (iVar9 != 0) {
                  uVar11 = FUN_71ba1b94((int)*(short *)(uVar23 + 0x25a));
                  uVar11 = FUN_71ba0b38(*(undefined4 *)(uVar23 + 0x10),uVar11);
                  uVar13 = FUN_71ba1b94((int)*(short *)(uVar23 + 0x256));
                  uVar13 = FUN_71ba0b38(uVar11,uVar13);
                  uVar14 = FUN_71ba1b94((int)sVar5);
                  uVar15 = FUN_71ba0b38(uVar15,uVar14);
                  iVar9 = FUN_71ba2d10(uVar12,uVar15);
                  if (((iVar9 != 0) && (iVar9 = FUN_71ba2d50(uVar27,uVar11), iVar9 != 0)) &&
                     (iVar9 = FUN_71ba2d10(uVar27,uVar13), iVar9 != 0)) goto LAB_718d23e4;
                }
              }
              uVar10 = uVar23;
              if (uVar25 != 0) {
                uVar10 = uVar25;
              }
              if (uStack_2c == 0) {
                uStack_2c = uVar23;
              }
              if (((uVar30 == 0) || (uVar25 != 0)) ||
                 (uVar10 = uVar23, *(int *)(uVar23 + 800) != *(int *)(uVar30 + 800))) {
                if (uStack_2c != 0) {
                  *(uint *)(iVar6 + 0x1a70) = uStack_2c;
                  goto LAB_718d2650;
                }
                uStack_2c = 0;
                uVar25 = uVar10;
              }
              else {
                uVar25 = 0;
              }
            }
          }
        }
      }
LAB_718d23e4:
      bVar31 = 1 < uVar29;
      uVar10 = uVar25;
      uVar29 = uVar29 - 1;
    } while (bVar31);
  }
  *(uint *)(iVar6 + 0x1a70) = uStack_2c;
  uVar27 = uVar10;
  if (uStack_2c == 0) {
    uStack_2c = 0;
    iVar8 = 0;
  }
  else {
LAB_718d2650:
    iVar8 = *(int *)(uStack_2c + 800);
  }
  iVar9 = *(int *)(iVar6 + 0x1bac);
  uVar30 = 0;
  *(int *)(iVar6 + 0x1a74) = iVar8;
  *(uint *)(iVar6 + 0x1a78) = uVar10;
  if (0 < iVar9) {
    uVar10 = iVar9 + 1;
    piVar21 = (int *)(*(int *)(iVar6 + 0x1bb4) + iVar9 * 0x24 + -0x20);
    do {
      iVar18 = *piVar21;
      if (iVar18 != 0) {
        uVar27 = (uint)*(byte *)(iVar18 + 0xb);
      }
      if (iVar18 != 0 && (uVar27 & 8) != 0) {
        iVar16 = 1;
        bStack_3c = 1;
        if (iVar8 != 0) {
          iVar16 = *(int *)(iVar8 + 800);
        }
        if (iVar8 != 0 && iVar16 != iVar18) {
          do {
            uVar30 = (uint)(iVar8 != iVar18);
            bVar31 = iVar8 != iVar18;
            if (bVar31) {
              iVar8 = *(int *)(iVar8 + 0x31c);
            }
          } while (bVar31 && iVar8 != 0);
        }
        goto LAB_718d26f8;
      }
      uVar10 = uVar10 - 1;
      piVar21 = piVar21 + -9;
    } while (1 < uVar10);
  }
  bStack_3c = 0;
LAB_718d26f8:
  if (*(char *)(iVar6 + 0x3d8) != '\0') {
    *(bool *)(iVar6 + 999) = uStack_2c != 0 || 0 < iVar9;
  }
  bVar20 = *(byte *)(iVar6 + 0xec);
  iVar8 = 0;
  if (bVar20 == 0) {
    iVar8 = -1;
  }
  if (*(char *)(iVar6 + 0x3d9) != '\0') {
    *(bool *)(iVar6 + 1000) = uStack_2c != 0 || 0 < iVar9;
  }
  uVar10 = *(uint *)(iVar6 + 8);
  iVar18 = iVar6 + 0x3b0;
  bVar1 = *(byte *)(iVar6 + 0xed);
  if (bVar1 != 0) {
    if (bVar20 == 0) {
      iVar8 = 1;
    }
    else {
      puVar7 = (undefined4 *)(iVar18 + iVar8 * 8);
      iVar16 = FUN_71ba2c3c(*(undefined4 *)(iVar6 + 0x3b8),*(undefined4 *)(iVar6 + 0x3bc),*puVar7,
                            puVar7[1]);
      if (iVar16 != 0) {
        iVar8 = 1;
      }
    }
  }
  if (*(char *)(iVar6 + 0x3da) != '\0') {
    *(bool *)(iVar6 + 0x3e9) = uStack_2c != 0 || 0 < iVar9;
  }
  bVar2 = *(byte *)(iVar6 + 0xee);
  if (bVar2 != 0) {
    if (iVar8 == -1) {
      iVar8 = 2;
    }
    else {
      puVar7 = (undefined4 *)(iVar18 + iVar8 * 8);
      iVar16 = FUN_71ba2c3c(*(undefined4 *)(iVar6 + 0x3c0),*(undefined4 *)(iVar6 + 0x3c4),*puVar7,
                            puVar7[1]);
      if (iVar16 != 0) {
        iVar8 = 2;
      }
    }
  }
  if (*(char *)(iVar6 + 0x3db) != '\0') {
    *(bool *)(iVar6 + 0x3ea) = uStack_2c != 0 || 0 < iVar9;
  }
  bVar3 = *(byte *)(iVar6 + 0xef);
  if (bVar3 != 0) {
    if (iVar8 == -1) {
      iVar8 = 3;
    }
    else {
      puVar7 = (undefined4 *)(iVar18 + iVar8 * 8);
      iVar16 = FUN_71ba2c3c(*(undefined4 *)(iVar6 + 0x3c8),*(undefined4 *)(iVar6 + 0x3cc),*puVar7,
                            puVar7[1]);
      if (iVar16 != 0) {
        iVar8 = 3;
      }
    }
  }
  if (*(char *)(iVar6 + 0x3dc) != '\0') {
    *(bool *)(iVar6 + 0x3eb) = uStack_2c != 0 || 0 < iVar9;
  }
  cVar4 = *(char *)(iVar6 + 0xf0);
  if (cVar4 == '\0') {
    uVar30 = uVar30 | (uVar10 & 0x10) >> 4;
    if (iVar8 != -1) goto LAB_718d2938;
    cVar19 = '\x01';
  }
  else {
    if (iVar8 == -1) {
      iVar8 = 4;
    }
    else {
      puVar7 = (undefined4 *)(iVar18 + iVar8 * 8);
      iVar18 = FUN_71ba2c3c(*(undefined4 *)(iVar6 + 0x3d0),*(undefined4 *)(iVar6 + 0x3d4),*puVar7,
                            puVar7[1]);
      if (iVar18 != 0) {
        iVar8 = 4;
      }
    }
    uVar30 = uVar30 | (uVar10 & 0x10) >> 4;
LAB_718d2938:
    cVar19 = *(char *)(iVar6 + 999 + iVar8);
  }
  if (*(char *)(iVar6 + 0x1d14) == '\0') {
    uVar25 = 1;
  }
  else {
    uVar25 = (*(byte *)(iVar6 + 0x1d18) & 0x10) >> 4 ^ 1;
  }
  if (cVar19 == '\0') {
    if (uVar25 != 0 || uVar30 != 0) {
      *(undefined4 *)(iVar6 + 0x1a70) = 0;
      *(undefined4 *)(iVar6 + 0x1a74) = 0;
      *(undefined4 *)(iVar6 + 0x1a78) = 0;
    }
    iVar8 = *(int *)(iVar6 + 0x2fe4);
    if (iVar8 != -1) goto LAB_718d29fc;
  }
  else {
    if (uVar30 != 0) {
      *(undefined4 *)(iVar6 + 0x1a70) = 0;
      *(undefined4 *)(iVar6 + 0x1a74) = 0;
      uStack_2c = 0;
      *(undefined4 *)(iVar6 + 0x1a78) = 0;
    }
    iVar8 = *(int *)(iVar6 + 0x2fe4);
    if (iVar8 != -1) {
LAB_718d29fc:
      bVar31 = iVar8 != 0;
      goto LAB_718d2a14;
    }
    bVar31 = true;
    bVar32 = uStack_2c != 0;
    if (!bVar32) {
      uStack_2c = (uint)(byte)(bVar3 | bVar2 | bVar1 | bVar20);
    }
    if (bVar32 || (cVar4 != '\0' || uStack_2c != 0)) goto LAB_718d2a14;
  }
  bVar31 = false;
  if (0 < iVar9) {
    bVar31 = true;
  }
LAB_718d2a14:
  *(bool *)(iVar6 + 0x354) = bVar31;
  if (*(int *)(iVar6 + 0x2fe8) == -1) {
    bVar31 = (bool)(bStack_3c | *(int *)(iVar6 + 0x1aa4) != 0);
  }
  else {
    bVar31 = *(int *)(iVar6 + 0x2fe8) != 0;
  }
  bVar20 = (byte)(uVar10 & 9);
  if ((uVar10 & 9) != 1) {
    bVar20 = bVar31;
  }
  if (*(char *)(iVar6 + 0x359) == '\0') {
    bVar20 = bVar31;
  }
  *(byte *)(iVar6 + 0x355) = bVar20;
  *(bool *)(iVar6 + 0x356) = *(int *)(iVar6 + 0x2fec) - 1U < 0xfffffffe;
  return;
}


// =========================================================================
// Function: FUN_718d2da0
// Entry: 0x718d2da0 | Size: 16944 bytes
// =========================================================================

void FUN_718d2da0(void)

{
  uint uVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint extraout_r1;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  uint extraout_r1_02;
  uint extraout_r1_03;
  uint extraout_r1_04;
  uint extraout_r1_05;
  uint extraout_r1_06;
  int iVar12;
  uint extraout_r2;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int *piVar16;
  uint *puVar17;
  int iVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  byte bVar22;
  uint uVar23;
  char *pcVar24;
  undefined4 *puVar25;
  int *piVar26;
  byte *pbVar27;
  int *piVar28;
  undefined4 uVar29;
  uint uVar30;
  undefined4 *puVar31;
  undefined4 *puVar32;
  uint *puVar33;
  undefined4 uVar34;
  undefined4 *puVar35;
  undefined4 uVar36;
  int *piVar37;
  int *piVar38;
  int iVar39;
  undefined4 uVar40;
  undefined8 *puVar41;
  undefined4 *puVar42;
  uint uVar43;
  bool bVar44;
  bool bVar45;
  undefined8 uVar46;
  undefined4 uStack_7c;
  uint uStack_54;
  int iStack_50;
  char *pcStack_4c;
  int iStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar1 = DAT_712042b4;
  piVar28 = (int *)(DAT_712042b4 + 0x2cf8);
  iVar12 = *(int *)(DAT_712042b4 + 0x2da0);
  if (0 < iVar12) {
    iVar18 = -iVar12;
    uVar23 = iVar12 + 1;
    iVar13 = iVar12 * 0x14;
    do {
      iVar13 = iVar13 + -0x14;
      iVar4 = *(int *)(uVar1 + 0x2da8) + iVar13;
      if (*(int *)(iVar4 + 4) == 7) {
        imp___aeabi_memmove(iVar4,iVar4 + 0x14,(iVar12 + iVar18) * 0x14);
        iVar12 = *(int *)(uVar1 + 0x2da0) + -1;
        *(int *)(uVar1 + 0x2da0) = iVar12;
      }
      uVar23 = uVar23 - 1;
      iVar18 = iVar18 + 1;
    } while (1 < uVar23);
    if (0 < iVar12) {
      iVar13 = 0;
      iVar18 = 0;
      do {
        iVar4 = *(int *)(uVar1 + 0x2da8) + iVar13;
        if (*(int *)(iVar4 + 4) == 0) {
          (**(code **)(iVar4 + 0xc))(uVar1);
          iVar12 = *(int *)(uVar1 + 0x2da0);
        }
        iVar18 = iVar18 + 1;
        iVar13 = iVar13 + 0x14;
      } while (iVar18 < iVar12);
    }
  }
  uVar23 = DAT_712042b4;
  pcVar24 = (char *)(DAT_712042b4 + 0x2d69);
  if ((*(char *)(DAT_712042b4 + 0xb4) != '\0') && ((*(byte *)(DAT_712042b4 + 0xc) & 2) == 0)) {
    *(undefined1 *)(DAT_712042b4 + 0xb4) = 0;
  }
  if (*pcVar24 == '\0') {
    if (*(int *)(uVar23 + 0x20) != 0) {
      uStack_38 = 0;
      iVar12 = FUN_718c8e5c(*(int *)(uVar23 + 0x20),&DAT_70068f6e,&uStack_38,0);
      if (iVar12 != 0) {
        FUN_718f2d34(iVar12,uStack_38);
        if (DAT_712042b4 != 0) {
          *(int *)(DAT_712042b4 + 0x370) = *(int *)(DAT_712042b4 + 0x370) + -1;
        }
        (*DAT_70105bb0)(iVar12,DAT_712042bc);
      }
    }
    *pcVar24 = '\x01';
  }
  puVar25 = (undefined4 *)(uVar23 + 0x2d6c);
  uVar14 = *puVar25;
  puVar35 = (undefined4 *)(uVar1 + 0x18);
  iVar12 = FUN_71ba2d70(uVar14,0);
  if (iVar12 != 0) {
    uVar14 = FUN_71ba240c(uVar14,*(undefined4 *)(uVar23 + 0x18));
    *puVar25 = uVar14;
    iVar12 = FUN_71ba2d30(uVar14,0);
    if (iVar12 != 0) {
      iVar12 = *(int *)(uVar23 + 0x20);
      if (iVar12 == 0) {
        *(undefined1 *)(uVar23 + 0x358) = 1;
      }
      else {
        uStack_38 = 0;
        *(undefined4 *)(DAT_712042b4 + 0x2d6c) = 0;
        uVar14 = FUN_718f32f8(&uStack_38);
        iVar12 = imp_fopen(iVar12,&DAT_70070a1a);
        if (iVar12 != 0) {
          imp_fwrite(uVar14,1,uStack_38,iVar12);
          imp_fclose(iVar12);
        }
      }
      *puVar25 = 0;
    }
  }
  *(undefined4 *)(uVar1 + 0x2d38) = 0;
  uVar14 = *puVar35;
  puVar41 = (undefined8 *)(uVar1 + 0x1a08);
  uVar34 = *(undefined4 *)puVar41;
  *(undefined1 *)(uVar1 + 0x1a1c) = 1;
  *(undefined4 *)(uVar1 + 0x1a68) = 0;
  uVar46 = FUN_71ba1638(uVar14);
  iVar12 = *(int *)(uVar1 + 0x1a10);
  uVar46 = FUN_71ba0670(uVar34,*(undefined4 *)(uVar1 + 0x1a0c),(int)uVar46,
                        (int)((ulonglong)uVar46 >> 0x20));
  *puVar41 = uVar46;
  *(int *)(uVar1 + 0x1a10) = iVar12 + 1;
  if (0x7fffffff < *(uint *)(uVar1 + 0x2d50)) {
    if (DAT_712042b4 != 0) {
      *(int *)(DAT_712042b4 + 0x370) = *(int *)(DAT_712042b4 + 0x370) + 1;
    }
    uVar14 = (*DAT_70105bac)(0,DAT_712042bc);
    if (*(int *)(uVar1 + 0x2d54) != 0) {
      imp___aeabi_memcpy(uVar14,*(int *)(uVar1 + 0x2d54),*(int *)(uVar1 + 0x2d4c) << 2);
      iVar12 = *(int *)(uVar1 + 0x2d54);
      uVar23 = extraout_r1;
      if (iVar12 != 0) {
        uVar23 = DAT_712042b4;
      }
      if (iVar12 != 0 && uVar23 != 0) {
        *(int *)(uVar23 + 0x370) = *(int *)(uVar23 + 0x370) + -1;
      }
      (*DAT_70105bb0)(iVar12,DAT_712042bc);
    }
    *(undefined4 *)(uVar1 + 0x2d50) = 0;
    *(undefined4 *)(uVar1 + 0x2d54) = uVar14;
    uVar14 = *puVar35;
  }
  uVar19 = *(undefined4 *)(uVar1 + 0x2fe0);
  *(undefined4 *)(uVar1 + 0x2d4c) = 0;
  puVar25 = (undefined4 *)(uVar1 + *(int *)(uVar1 + 0x2fdc) * 4 + 0x2dfc);
  uVar34 = FUN_71ba240c(uVar14,*puVar25);
  uVar34 = FUN_71ba0b38(uVar19,uVar34);
  *(undefined4 *)(uVar1 + 0x2fe0) = uVar34;
  *puVar25 = uVar14;
  uVar14 = *(undefined4 *)(uVar1 + 0x2fe0);
  iVar13 = *(int *)(uVar1 + 0x2fdc);
  iVar12 = FUN_71ba2d70(uVar14,0);
  uVar14 = FUN_71ba13e0(uVar14,0x42f00000);
  uVar14 = FUN_71ba13e0(0x3f800000,uVar14);
  if (iVar12 == 0) {
    uVar14 = 0x7f7fffff;
  }
  *(undefined4 *)(uVar1 + 0x35c) = uVar14;
  uVar23 = iVar13 + 1;
  iVar12 = (int)(((ulonglong)uVar23 << 0x20) + (longlong)(int)uVar23 * -0x77777777 >> 0x20);
  *(uint *)(uVar1 + 0x2fdc) = uVar23 + ((iVar12 >> 6) - (iVar12 >> 0x1f)) * -0x78;
  uVar23 = DAT_712042b4;
  piVar26 = (int *)(DAT_712042b4 + 0x1bc4);
  puVar25 = (undefined4 *)**(undefined4 **)(DAT_712042b4 + 0x1bcc);
  *puVar25 = 5;
  puVar25[2] = 0;
  puVar25[1] = 0;
  uVar14 = *(undefined4 *)(uVar23 + 0x14);
  puVar25[3] = *(undefined4 *)(uVar23 + 0x10);
  puVar25[4] = uVar14;
  if (0 < *(int *)(uVar23 + 0x1bc4)) {
    iVar12 = 0;
    do {
      iVar18 = *(int *)(*(int *)(uVar23 + 0x1bcc) + iVar12 * 4);
      uVar14 = *(undefined4 *)(iVar18 + 0x90);
      uVar20 = *(undefined4 *)(iVar18 + 0x8c);
      uVar19 = *(undefined4 *)(iVar18 + 0xc);
      *(undefined4 *)(iVar18 + 0x80) = uVar14;
      uVar9 = *(undefined4 *)(iVar18 + 0x10);
      uVar15 = *(undefined4 *)(iVar18 + 0x88);
      uVar29 = *(undefined4 *)(iVar18 + 0x94);
      *(undefined4 *)(iVar18 + 0x8c) = 0;
      *(undefined4 *)(iVar18 + 0x88) = 0;
      *(undefined4 *)(iVar18 + 0x90) = 0;
      *(undefined4 *)(iVar18 + 0x94) = 0;
      *(undefined4 *)(iVar18 + 0x7c) = uVar20;
      *(undefined4 *)(iVar18 + 0x78) = uVar15;
      *(undefined4 *)(iVar18 + 0x84) = uVar29;
      uVar36 = *(undefined4 *)(iVar18 + 4);
      uVar34 = FUN_71ba0b38(*(undefined4 *)(iVar18 + 8),uVar20);
      *(undefined4 *)(iVar18 + 0x18) = uVar34;
      uVar34 = FUN_71ba0b38(uVar36,uVar15);
      *(undefined4 *)(iVar18 + 0x14) = uVar34;
      uVar34 = FUN_71ba240c(uVar9,uVar20);
      uVar34 = FUN_71ba0b38(uVar34,uVar29);
      iVar13 = FUN_71ba2d30(uVar34,0);
      if (iVar13 != 0) {
        uVar34 = 0;
      }
      *(undefined4 *)(iVar18 + 0x20) = uVar34;
      uVar34 = FUN_71ba240c(uVar19,uVar15);
      uVar14 = FUN_71ba0b38(uVar34,uVar14);
      iVar13 = FUN_71ba2d30(uVar14,0);
      iVar12 = iVar12 + 1;
      if (iVar13 != 0) {
        uVar14 = 0;
      }
      *(undefined4 *)(iVar18 + 0x1c) = uVar14;
    } while (iVar12 < *piVar26);
  }
  **(undefined1 **)(uVar1 + 0x98) = 1;
  uVar23 = DAT_712042b4;
  puVar25 = (undefined4 *)(DAT_712042b4 + 0x9c);
  iVar12 = *(int *)(DAT_712042b4 + 0xa4);
  if (iVar12 == 0) {
    iVar12 = **(int **)(*(int *)(DAT_712042b4 + 0x98) + 0x3c);
  }
  *(int *)(DAT_712042b4 + 0x192c) = iVar12;
  uVar34 = *(undefined4 *)(iVar12 + 0x40);
  uVar14 = FUN_71ba21e8(*puVar25,*(undefined4 *)(iVar12 + 0x10));
  uVar14 = FUN_71ba21e8(uVar14,uVar34);
  iVar13 = FUN_71ba2d30(uVar14,0x3f800000);
  iVar18 = *(int *)(uVar23 + 0x1a6c);
  if (iVar13 != 0) {
    uVar14 = 0x3f800000;
  }
  *(undefined4 *)(uVar23 + 0x1934) = uVar14;
  if (iVar18 == 0) {
    uVar14 = 0;
  }
  else {
    iVar13 = *(int *)(iVar18 + 0x31c);
    uVar14 = FUN_71ba21e8(uVar14,*(undefined4 *)(iVar18 + 0x280));
    if (iVar13 != 0) {
      uVar14 = FUN_71ba21e8(uVar14,*(undefined4 *)(iVar13 + 0x280));
    }
  }
  *(undefined4 *)(uVar23 + 0x1930) = uVar14;
  iVar13 = *(int *)(iVar12 + 0x30);
  uVar34 = 0x7f7fffff;
  uVar19 = *(undefined4 *)(iVar13 + 0x2c);
  uVar9 = *(undefined4 *)(iVar13 + 0x30);
  *(int *)(uVar23 + 0x1a04) = iVar13 + 0x58;
  *(undefined4 *)(uVar23 + 0x1938) = uVar19;
  *(undefined4 *)(uVar23 + 0x193c) = uVar9;
  *(int *)(uVar23 + 0x1940) = iVar12;
  *(undefined4 *)(uVar23 + 0x1944) = uVar14;
  iVar12 = *(int *)(uVar1 + 0x1bc4);
  if (iVar12 < 1) {
    uVar14 = 0xff7fffff;
    uVar19 = 0xff7fffff;
    uVar9 = uVar34;
  }
  else {
    uVar34 = 0x7f7fffff;
    uVar19 = 0xff7fffff;
    uVar14 = 0xff7fffff;
    piVar26 = *(int **)(uVar1 + 0x1bcc);
    uVar9 = uVar34;
    do {
      iVar13 = *piVar26;
      uVar36 = *(undefined4 *)(iVar13 + 4);
      uVar20 = *(undefined4 *)(iVar13 + 0xc);
      uVar29 = *(undefined4 *)(iVar13 + 8);
      uVar15 = *(undefined4 *)(iVar13 + 0x10);
      iVar13 = FUN_71ba2d70(uVar34,uVar36);
      iVar18 = FUN_71ba2d70(uVar9,uVar29);
      if (iVar18 != 0) {
        uVar9 = uVar29;
      }
      if (iVar13 != 0) {
        uVar34 = uVar36;
      }
      uVar20 = FUN_71ba0b38(uVar36,uVar20);
      iVar13 = FUN_71ba2d10(uVar14,uVar20);
      uVar15 = FUN_71ba0b38(uVar29,uVar15);
      iVar18 = FUN_71ba2d10(uVar19,uVar15);
      if (iVar18 != 0) {
        uVar19 = uVar15;
      }
      if (iVar13 != 0) {
        uVar14 = uVar20;
      }
      iVar12 = iVar12 + -1;
      piVar26 = piVar26 + 1;
    } while (iVar12 != 0);
  }
  *(undefined4 *)(uVar1 + 0x1954) = uVar9;
  *(undefined4 *)(uVar1 + 0x1948) = *(undefined4 *)(uVar1 + 0x15d4);
  *(undefined4 *)(uVar1 + 0x1950) = uVar34;
  *(undefined4 *)(uVar1 + 0x1958) = uVar14;
  *(undefined4 *)(uVar1 + 0x195c) = uVar19;
  FUN_718f60d4(uVar1 + 0x1938,*(undefined4 *)(uVar1 + 0x15d8));
  uVar23 = (uint)*(byte *)(uVar1 + 0x15d0);
  *(uint *)(uVar1 + 0x1960) = uVar23;
  if ((*(char *)(uVar1 + 0x15d1) != '\0') &&
     ((*(byte *)(*(int *)(*(int *)(uVar1 + 0x192c) + 0x30) + 4) & 4) == 0)) {
    uVar23 = uVar23 | 2;
    *(uint *)(uVar1 + 0x1960) = uVar23;
  }
  if (*(char *)(uVar1 + 0x15d2) != '\0') {
    uVar23 = uVar23 | 4;
    *(uint *)(uVar1 + 0x1960) = uVar23;
  }
  if ((*(byte *)(uVar1 + 0xc) & 8) != 0) {
    *(uint *)(uVar1 + 0x1960) = uVar23 | 8;
  }
  if (0 < *(int *)(uVar1 + 0x1bc4)) {
    iVar12 = 0;
    do {
      imp___aeabi_memclr(*(int *)(*(int *)(uVar1 + 0x1bcc) + iVar12 * 4) + 0x34,0x2c);
      iVar12 = iVar12 + 1;
    } while (iVar12 < *(int *)(uVar1 + 0x1bc4));
  }
  uVar23 = DAT_712042b4;
  if ((*(char *)(uVar1 + 0x1d14) != '\0') &&
     (iVar12 = *(int *)(uVar1 + 0x1d2c), iVar12 == *(int *)(uVar1 + 0x1aa4))) {
    piVar26 = (int *)(DAT_712042b4 + 0x1adc);
    if (*(int *)(DAT_712042b4 + 0x1aa4) == iVar12) {
      *(int *)(DAT_712042b4 + 0x1aa8) = iVar12;
    }
    if (*piVar26 == iVar12) {
      *(undefined1 *)(uVar23 + 0x1ae0) = 1;
    }
  }
  if (*(int *)(uVar1 + 0x1a94) == 0) {
    iVar13 = 0;
    *(undefined4 *)(uVar1 + 0x1a9c) = 0;
    *(undefined4 *)(uVar1 + 0x1aa0) = 0;
    iVar12 = *(int *)(uVar1 + 0x1a90);
    if (*(int *)(uVar1 + 0x1a90) != 0) goto LAB_718d35a8;
  }
  else {
    iVar12 = *(int *)(uVar1 + 0x1a90);
    if (iVar12 == 0) {
      iVar13 = 0;
    }
    else {
      if (*(int *)(uVar1 + 0x1aa4) == iVar12) {
        *(undefined4 *)(uVar1 + 0x1aa0) = 0;
      }
LAB_718d35a8:
      iVar13 = iVar12;
      iVar12 = *(int *)(uVar1 + 0x1aa4);
      uVar34 = *puVar35;
      uVar14 = FUN_71ba0b38(uVar34,*(undefined4 *)(uVar1 + 0x1a9c));
      *(undefined4 *)(uVar1 + 0x1a9c) = uVar14;
      if (iVar12 != iVar13) {
        uVar14 = FUN_71ba0b38(uVar34,*(undefined4 *)(uVar1 + 0x1aa0));
        *(undefined4 *)(uVar1 + 0x1aa0) = uVar14;
      }
    }
  }
  *(int *)(uVar1 + 0x1a94) = iVar13;
  iVar13 = *(int *)(uVar1 + 0x1aa4);
  *(undefined2 *)(uVar1 + 0x1a98) = 0;
  *(undefined1 *)(uVar1 + 0x1a9b) = 0;
  *(undefined4 *)(uVar1 + 0x1a90) = 0;
  *(undefined1 *)(uVar1 + 0x1a9a) = *(undefined1 *)(uVar1 + 0x1a99);
  uVar23 = DAT_712042b4;
  iVar12 = *(int *)(uVar1 + 0x1aa8);
  if (((*(int *)(uVar1 + 0x1aa8) != iVar13) && (iVar12 = iVar13, iVar13 != 0)) &&
     (*(int *)(uVar1 + 0x1adc) == iVar13)) {
    piVar26 = (int *)(DAT_712042b4 + 0x1aa4);
    bVar44 = *piVar26 != 0;
    *(bool *)(DAT_712042b4 + 0x1ab0) = bVar44;
    if (bVar44) {
      *(undefined2 *)(uVar23 + 0x1ab3) = 0;
      *(undefined4 *)(uVar23 + 0x1aac) = 0;
    }
    *(undefined4 *)(uVar23 + 0x1ad0) = 0;
    *(undefined2 *)(uVar23 + 0x1ab1) = 0;
    *piVar26 = 0;
    *(undefined2 *)(uVar23 + 0x1ab5) = 0;
    *(undefined4 *)(uVar23 + 0x1ab8) = 0;
    *(undefined4 *)(uVar23 + 0x1abc) = 0;
    *(undefined4 *)(uVar23 + 0x1ac0) = 0;
    *(undefined4 *)(uVar23 + 0x1ac4) = 0;
    iVar12 = *(int *)(uVar1 + 0x1aa4);
  }
  uVar14 = *puVar35;
  if (iVar12 != 0) {
    uVar34 = FUN_71ba0b38(uVar14,*(undefined4 *)(uVar1 + 0x1aac));
    *(undefined4 *)(uVar1 + 0x1aac) = uVar34;
  }
  *(undefined1 *)(uVar1 + 0x1ae0) = 0;
  *(undefined1 *)(uVar1 + 0x1ab5) = 0;
  *(undefined4 *)(uVar1 + 0x1aa8) = 0;
  *(undefined1 *)(uVar1 + 0x1ab0) = 0;
  *(undefined4 *)(uVar1 + 0x1ae4) = *(undefined4 *)(uVar1 + 0x1ad0);
  *(undefined1 *)(uVar1 + 0x1ae1) = *(undefined1 *)(uVar1 + 0x1ab4);
  *(int *)(uVar1 + 0x1adc) = iVar12;
  uVar34 = FUN_71ba0b38(uVar14,*(undefined4 *)(uVar1 + 0x1aec));
  *(undefined4 *)(uVar1 + 0x1aec) = uVar34;
  iVar13 = *piVar28;
  if (iVar13 != 0 && iVar12 != iVar13) {
    *piVar28 = 0;
  }
  if (iVar12 == 0) {
    *(undefined4 *)(uVar1 + 0x1ab8) = 0;
    *(undefined4 *)(uVar1 + 0x1abc) = 0;
    *(undefined4 *)(uVar1 + 0x1ac0) = 0;
    *(undefined4 *)(uVar1 + 0x1ac4) = 0;
  }
  *(undefined2 *)(uVar1 + 0x1d15) = 0;
  *(undefined4 *)(uVar1 + 0x1d84) = 0;
  uStack_7c = 0x7f7fffff;
  *(undefined4 *)(uVar1 + 0x1d74) = 0x7f7fffff;
  *(undefined4 *)(uVar1 + 0x1d7c) = *(undefined4 *)(uVar1 + 0x1d78);
  *(undefined4 *)(uVar1 + 0x1d78) = 0;
  uVar23 = (uint)*(byte *)(DAT_712042b4 + 0xfc);
  if (*(char *)(DAT_712042b4 + 0xfd) != '\0') {
    uVar23 = uVar23 | 2;
  }
  if (*(char *)(DAT_712042b4 + 0xfe) != '\0') {
    uVar23 = uVar23 | 4;
  }
  if (*(char *)(DAT_712042b4 + 0xff) != '\0') {
    uVar23 = uVar23 | 8;
  }
  *(uint *)(uVar1 + 0x37c) = uVar23;
  imp___aeabi_memcpy(uVar1 + 0xc58,(undefined4 *)(uVar1 + 0x458),0x800);
  iVar12 = 0x100;
  puVar25 = (undefined4 *)(uVar1 + 0x458);
  do {
    if (*(char *)(uVar1 + iVar12) == '\0') {
      uVar34 = 0xbf800000;
    }
    else {
      uVar19 = *puVar25;
      uVar34 = 0;
      iVar13 = FUN_71ba2d10(uVar19,0);
      if (iVar13 == 0) {
        uVar34 = FUN_71ba0b38(uVar19,uVar14);
      }
    }
    iVar12 = iVar12 + 1;
    *puVar25 = uVar34;
    uVar23 = DAT_712042b4;
    puVar25 = puVar25 + 1;
  } while (iVar12 != 0x300);
  piVar28 = (int *)(DAT_712042b4 + 0x1aa4);
  uStack_54 = 0;
  puVar25 = (undefined4 *)(DAT_712042b4 + 0x18);
  uVar5 = *(uint *)(DAT_712042b4 + 8);
  bVar44 = (uVar5 & 2) != 0;
  *(undefined1 *)(DAT_712042b4 + 0x357) = 0;
  uVar6 = uVar5;
  if (bVar44) {
    uVar6 = (uint)*(byte *)(uVar23 + 0xc);
  }
  *(undefined4 *)(uVar23 + 0x1cd0) = 0;
  *(undefined4 *)(uVar23 + 0x1cd4) = 0;
  if (((bVar44 && (uVar6 & 1) != 0) && (uStack_54 = 1, *(int *)(uVar23 + 0x1c00) != 4)) &&
     ((((iVar12 = FUN_71ba2d70(*(undefined4 *)(uVar23 + 0x300),0), iVar12 != 0 ||
        ((iVar12 = FUN_71ba2d70(*(undefined4 *)(uVar23 + 0x308),0), iVar12 != 0 ||
         (iVar12 = FUN_71ba2d70(*(undefined4 *)(uVar23 + 0x304),0), iVar12 != 0)))) ||
       (iVar12 = FUN_71ba2d70(*(undefined4 *)(uVar23 + 0x30c),0), iVar12 != 0)) ||
      ((((iVar12 = FUN_71ba2d70(*(undefined4 *)(uVar23 + 0x310),0), iVar12 != 0 ||
         (iVar12 = FUN_71ba2d70(*(undefined4 *)(uVar23 + 0x314),0), iVar12 != 0)) ||
        (iVar12 = FUN_71ba2d70(*(undefined4 *)(uVar23 + 0x318),0), iVar12 != 0)) ||
       (iVar12 = FUN_71ba2d70(*(undefined4 *)(uVar23 + 0x31c),0), iVar12 != 0)))))) {
    *(undefined4 *)(uVar23 + 0x1c00) = 4;
  }
  if ((uVar5 & 1) != 0) {
    if ((-1 < *(int *)(uVar23 + 100)) &&
       (*(char *)(uVar23 + *(int *)(uVar23 + 100) + 0x100) != '\0')) {
      *(undefined4 *)(uVar23 + 0x1c00) = 3;
      *(undefined4 *)(uVar23 + 0x300) = 0x3f800000;
    }
    if ((-1 < *(int *)(uVar23 + 0x68)) &&
       (*(char *)(uVar23 + *(int *)(uVar23 + 0x68) + 0x100) != '\0')) {
      *(undefined4 *)(uVar23 + 0x1c00) = 3;
      *(undefined4 *)(uVar23 + 0x308) = 0x3f800000;
    }
    if ((-1 < *(int *)(uVar23 + 0x6c)) &&
       (*(char *)(uVar23 + *(int *)(uVar23 + 0x6c) + 0x100) != '\0')) {
      *(undefined4 *)(uVar23 + 0x1c00) = 3;
      *(undefined4 *)(uVar23 + 0x304) = 0x3f800000;
    }
    if ((-1 < *(int *)(uVar23 + 0x38)) &&
       (*(char *)(uVar23 + *(int *)(uVar23 + 0x38) + 0x100) != '\0')) {
      *(undefined4 *)(uVar23 + 0x1c00) = 3;
      *(undefined4 *)(uVar23 + 0x344) = 0x3f800000;
    }
    if ((-1 < *(int *)(uVar23 + 0x3c)) &&
       (*(char *)(uVar23 + *(int *)(uVar23 + 0x3c) + 0x100) != '\0')) {
      *(undefined4 *)(uVar23 + 0x1c00) = 3;
      *(undefined4 *)(uVar23 + 0x348) = 0x3f800000;
    }
    if ((-1 < *(int *)(uVar23 + 0x40)) &&
       (*(char *)(uVar23 + *(int *)(uVar23 + 0x40) + 0x100) != '\0')) {
      *(undefined4 *)(uVar23 + 0x1c00) = 3;
      *(undefined4 *)(uVar23 + 0x34c) = 0x3f800000;
    }
    if ((-1 < *(int *)(uVar23 + 0x44)) &&
       (*(char *)(uVar23 + *(int *)(uVar23 + 0x44) + 0x100) != '\0')) {
      *(undefined4 *)(uVar23 + 0x1c00) = 3;
      *(undefined4 *)(uVar23 + 0x350) = 0x3f800000;
    }
    if (*(char *)(uVar23 + 0xfc) != '\0') {
      *(undefined4 *)(uVar23 + 0x338) = 0x3f800000;
    }
    if (*(char *)(uVar23 + 0xfd) != '\0') {
      *(undefined4 *)(uVar23 + 0x33c) = 0x3f800000;
    }
    if ((*(char *)(uVar23 + 0xfc) == '\0') && (*(char *)(uVar23 + 0xfe) != '\0')) {
      *(undefined4 *)(uVar23 + 0x340) = 0x3f800000;
    }
  }
  iVar12 = uVar23 + 0x1458;
  imp___aeabi_memcpy(uVar23 + 0x14ac,iVar12,0x54);
  iVar13 = 0;
  do {
    iVar18 = FUN_71ba2d70(*(undefined4 *)(uVar23 + 0x300 + iVar13),0);
    if (iVar18 == 0) {
      uVar14 = 0xbf800000;
    }
    else {
      uVar34 = *(undefined4 *)(iVar12 + iVar13);
      uVar14 = 0;
      iVar18 = FUN_71ba2d10(uVar34,0);
      if (iVar18 == 0) {
        uVar14 = FUN_71ba0b38(uVar34,*puVar25);
      }
    }
    *(undefined4 *)(iVar12 + iVar13) = uVar14;
    uVar6 = DAT_712042b4;
    iVar13 = iVar13 + 4;
  } while (iVar13 != 0x54);
  if ((*(int *)(uVar23 + 0x1c28) != 0) &&
     ((*(char *)(uVar23 + 0x1c22) == '\0' || (*(char *)(uVar23 + 0x1c26) != '\0')))) {
    piVar26 = (int *)(DAT_712042b4 + 0x1bd0);
    if (*piVar26 != 0) {
      iVar12 = *(int *)(DAT_712042b4 + 0x1c18);
      uVar14 = *(undefined4 *)(DAT_712042b4 + 0x1c28);
      iVar13 = *piVar26 + iVar12 * 4;
      if (*(char *)(DAT_712042b4 + 0x1c26) == '\0') {
        *(undefined4 *)(DAT_712042b4 + 0x1bd4) = uVar14;
        *(undefined4 *)(uVar6 + 0x1bd8) = 0;
        *(undefined4 *)(iVar13 + 0x330) = uVar14;
      }
      else {
        *(undefined4 *)(DAT_712042b4 + 0x1bd4) = uVar14;
        *(undefined4 *)(uVar6 + 0x1bd8) = 0;
        *(undefined4 *)(iVar13 + 0x330) = uVar14;
        iVar12 = *piVar26 + iVar12 * 0x10;
        uVar14 = *(undefined4 *)(uVar6 + 0x1c2c);
        uVar19 = *(undefined4 *)(uVar6 + 0x1c30);
        uVar34 = *(undefined4 *)(uVar6 + 0x1c34);
        *(undefined4 *)(iVar12 + 0x344) = *(undefined4 *)(uVar6 + 0x1c38);
        *(undefined4 *)(iVar12 + 0x338) = uVar14;
        *(undefined4 *)(iVar12 + 0x33c) = uVar19;
        *(undefined4 *)(iVar12 + 0x340) = uVar34;
        *(undefined1 *)(uVar6 + 0x1c23) = 1;
        *(undefined2 *)(uVar6 + 0x1c21) = 1;
      }
      iVar12 = *piVar26 + *(int *)(uVar6 + 0x1c18) * 0x10;
      uVar14 = *(undefined4 *)(uVar6 + 0x1c30);
      uVar34 = *(undefined4 *)(uVar6 + 0x1c34);
      uVar19 = *(undefined4 *)(uVar6 + 0x1c38);
      *(undefined4 *)(iVar12 + 0x338) = *(undefined4 *)(uVar6 + 0x1c2c);
      *(undefined4 *)(iVar12 + 0x33c) = uVar14;
      *(undefined4 *)(iVar12 + 0x340) = uVar34;
      *(undefined4 *)(iVar12 + 0x344) = uVar19;
    }
  }
  iVar12 = 0;
  *(undefined2 *)(uVar23 + 0x1c25) = 0;
  *(undefined4 *)(uVar23 + 0x1c28) = 0;
  *(undefined4 *)(uVar23 + 0x1bf0) = 0;
  uVar6 = DAT_712042b4;
  if (*(char *)(uVar23 + 0x1c3c) != '\0') {
    piVar26 = (int *)(DAT_712042b4 + 0x1bd0);
    iVar13 = *(int *)(DAT_712042b4 + 0x1c5c);
    if (iVar13 == 0) {
      iVar12 = *(int *)(DAT_712042b4 + 0x1cac);
    }
    if (iVar13 == 0 && iVar12 == 0) {
      uVar10 = DAT_712042b4;
      if (*(int *)(DAT_712042b4 + 0x1bd4) == 0) goto LAB_718d3ef0;
    }
    else {
      piVar16 = (int *)(DAT_712042b4 + 0x1ca8);
      uVar30 = *(uint *)(DAT_712042b4 + 0x1c40);
      piVar37 = piVar16;
      if (iVar13 != 0) {
        piVar37 = (int *)(DAT_712042b4 + 0x1c58);
      }
      bVar44 = (uVar30 & 0x20) != 0;
      if (bVar44) {
        iVar13 = *(int *)(DAT_712042b4 + 0x1c84);
      }
      if ((bVar44 && iVar13 != 0) && (iVar13 != *(int *)(DAT_712042b4 + 0x1bd4))) {
        piVar37 = (int *)(DAT_712042b4 + 0x1c80);
      }
      piVar38 = piVar16;
      if (((piVar37 != piVar16) && (piVar38 = piVar37, *(int *)(DAT_712042b4 + 0x1cac) != 0)) &&
         (*(int *)(*(int *)(DAT_712042b4 + 0x1ca8) + 0x31c) == *piVar26)) {
        uVar14 = *(undefined4 *)(DAT_712042b4 + 0x1cb4);
        iVar13 = piVar37[3];
        iVar12 = FUN_71ba2d10(uVar14,iVar13);
        piVar38 = piVar16;
        if (((iVar12 == 0) && (iVar12 = FUN_71ba2cf0(uVar14,iVar13), piVar38 = piVar37, iVar12 != 0)
            ) && (iVar12 = FUN_71ba2d10(*(undefined4 *)(uVar6 + 0x1cb8),piVar37[4]), iVar12 != 0)) {
          piVar38 = piVar16;
        }
      }
      uVar10 = uVar6;
      if (*(int *)(uVar6 + 0x1c18) == 0) {
        piVar37 = piVar38 + 6;
        if ((uVar30 & 0x40) == 0) {
          iVar12 = *piVar37;
          iVar13 = piVar38[7];
          iVar18 = piVar38[8];
          uVar34 = *(undefined4 *)(*piVar38 + 0x10);
          uVar14 = *(undefined4 *)(*piVar38 + 0xc);
          uStack_2c = FUN_71ba0b38(uVar34,piVar38[9]);
          uStack_30 = FUN_71ba0b38(uVar14,iVar18);
          uStack_34 = FUN_71ba0b38(iVar13,uVar34);
          uStack_38 = FUN_71ba0b38(iVar12,uVar14);
          FUN_718ef384(&uStack_40,*piVar38,&uStack_38);
          iStack_50 = uStack_3c;
          uVar14 = uStack_40;
          uVar10 = DAT_712042b4;
        }
        else {
          iVar12 = *piVar38;
          uVar14 = 0;
          uVar34 = 0;
          if (*(int *)(uVar6 + 0x1c4c) == 2) {
            uVar34 = *(undefined4 *)(iVar12 + 100);
          }
          *(undefined4 *)(iVar12 + 0x7c) = 0;
          *(undefined4 *)(iVar12 + 0x74) = 0;
          *(undefined4 *)(iVar12 + 0x6c) = uVar34;
          iStack_50 = FUN_71ba240c(*(undefined4 *)(iVar12 + 0x5c));
        }
        iVar13 = piVar38[7];
        iVar18 = piVar38[9];
        iVar4 = piVar38[8];
        iVar12 = FUN_71ba240c(*piVar37,uVar14);
        *piVar37 = iVar12;
        iVar12 = FUN_71ba240c(iVar4,uVar14);
        piVar38[8] = iVar12;
        iVar12 = FUN_71ba240c(iVar13,iStack_50);
        piVar38[7] = iVar12;
        iVar12 = FUN_71ba240c(iVar18,iStack_50);
        piVar38[9] = iVar12;
      }
      bVar44 = *(int *)(uVar10 + 0x1aa4) != 0;
      *(bool *)(uVar10 + 0x1ab0) = bVar44;
      if (bVar44) {
        *(undefined2 *)(uVar10 + 0x1ab3) = 0;
        *(undefined4 *)(uVar10 + 0x1aac) = 0;
      }
      *(undefined4 *)(uVar10 + 0x1ad0) = 0;
      *(undefined2 *)(uVar10 + 0x1ab1) = 0;
      *(int *)(uVar10 + 0x1aa4) = 0;
      *(undefined2 *)(uVar10 + 0x1ab5) = 0;
      *(undefined4 *)(uVar10 + 0x1ab8) = 0;
      *(undefined4 *)(uVar10 + 0x1abc) = 0;
      *(undefined4 *)(uVar10 + 0x1ac0) = 0;
      *(undefined4 *)(uVar10 + 0x1ac4) = 0;
      *piVar26 = *piVar38;
      iVar12 = *(int *)(uVar6 + 0x1bd4);
      if (iVar12 != piVar38[1]) {
        *(int *)(uVar6 + 0x1bf0) = piVar38[1];
        *(int *)(uVar6 + 0x1bf4) = piVar38[2];
        *(undefined4 *)(uVar6 + 0x1bf8) = *(undefined4 *)(uVar6 + 0x1c48);
        iVar12 = piVar38[1];
      }
      iVar13 = *(int *)(uVar6 + 0x1c18);
      *(int *)(uVar10 + 0x1bd8) = piVar38[2];
      *(int *)(uVar10 + 0x1bd4) = iVar12;
      *(int *)(*(int *)(uVar10 + 0x1bd0) + iVar13 * 4 + 0x330) = iVar12;
      iVar12 = *(int *)(uVar10 + 0x1bd0) + iVar13 * 0x10;
      iVar13 = piVar38[6];
      iVar18 = piVar38[7];
      iVar4 = piVar38[8];
      *(int *)(iVar12 + 0x344) = piVar38[9];
      *(int *)(iVar12 + 0x338) = iVar13;
      *(int *)(iVar12 + 0x33c) = iVar18;
      *(int *)(iVar12 + 0x340) = iVar4;
      *(undefined1 *)(uVar10 + 0x1c21) = 1;
    }
    *(undefined2 *)(uVar10 + 0x1c22) = 0x100;
  }
LAB_718d3ef0:
  if (*(int *)(uVar23 + 0x1c44) == 2) {
    iVar12 = *(int *)(uVar23 + 0x1c5c);
    bVar44 = iVar12 == 0;
    if (bVar44) {
      iVar12 = *(int *)(uVar23 + 0x1cac);
    }
    if (bVar44 && iVar12 == 0) {
      *(undefined1 *)(uVar23 + 0x1c22) = 0;
    }
    *(undefined4 *)(uVar23 + 0x1c44) = 0;
  }
  bVar44 = *(char *)(uVar23 + 0x1c21) != '\0';
  cVar3 = '\0';
  if (bVar44) {
    cVar3 = *(char *)(uVar23 + 0x1c20);
  }
  if (bVar44 && cVar3 != '\0') {
    bVar22 = *(byte *)(uVar23 + 8);
    bVar44 = (bVar22 & 4) != 0;
    if (bVar44) {
      bVar22 = *(byte *)(uVar23 + 0xc);
    }
    if ((bVar44 && (bVar22 & 4) != 0) && (*(char *)(uVar23 + 0x1c22) == '\0')) {
      bVar44 = *(char *)(uVar23 + 0x1c23) != '\0';
      iVar12 = 0;
      if (bVar44) {
        iVar12 = *(int *)(uVar23 + 0x1bd0);
      }
      if (bVar44 && iVar12 != 0) {
        FUN_718f01cc(&uStack_38);
        *(undefined4 *)(uVar23 + 0x380) = uStack_38;
        *(undefined4 *)(uVar23 + 0xe4) = uStack_38;
        *(undefined4 *)(uVar23 + 0xe8) = uStack_34;
        *(undefined4 *)(uVar23 + 900) = uStack_34;
        *(undefined1 *)(uVar23 + 0x357) = 1;
      }
    }
    *(undefined1 *)(uVar23 + 0x1c21) = 0;
  }
  *(undefined4 *)(uVar23 + 0x1bec) = 0;
  *(undefined1 *)(uVar23 + 0x1c20) = 0;
  iVar13 = *(int *)(uVar23 + 0x1bd0);
  iVar12 = iVar13;
  if (iVar13 != 0) {
    do {
      if ((*(uint *)(iVar12 + 8) & 0x15000000) != 0x1000000) {
        if (iVar12 != iVar13) {
          *(int *)(iVar12 + 0x32c) = iVar13;
          iVar13 = *(int *)(uVar23 + 0x1bd0);
        }
        break;
      }
      iVar12 = *(int *)(iVar12 + 0x31c);
    } while (iVar12 != 0);
    if (iVar13 != 0) {
      iVar12 = *(int *)(iVar13 + 0x32c);
    }
    if ((iVar13 != 0 && iVar12 != 0) && (*(int *)(uVar23 + 0x1c18) == 0)) {
      *(undefined4 *)(iVar13 + 0x32c) = 0;
    }
  }
  uVar6 = DAT_712042b4;
  bVar44 = true;
  puVar42 = (undefined4 *)(DAT_712042b4 + 0x1464);
  iVar12 = *(int *)(DAT_712042b4 + 0x1bac);
  if (0 < iVar12) {
    uVar10 = iVar12 + 1;
    piVar26 = (int *)(*(int *)(DAT_712042b4 + 0x1bb4) + iVar12 * 0x24 + -0x20);
    do {
      iVar12 = *piVar26;
      bVar22 = 0;
      if (iVar12 != 0) {
        bVar22 = *(byte *)(iVar12 + 0xb);
      }
      if (iVar12 != 0 && (bVar22 & 8) != 0) {
        bVar44 = false;
        *(undefined4 *)(DAT_712042b4 + 0x1cd8) = 0;
        break;
      }
      uVar10 = uVar10 - 1;
      piVar26 = piVar26 + -9;
    } while (1 < uVar10);
  }
  puVar31 = (undefined4 *)(uVar6 + 0x18);
  if ((*(int *)(uVar6 + 0x1cdc) != 0) && (*(int *)(uVar6 + 0x1cd8) == 0)) {
    uVar14 = FUN_71ba21e8(*puVar31,0xc1200000);
    uVar19 = *(undefined4 *)(uVar6 + 0x1d0c);
    uVar34 = FUN_71ba0b38(*(undefined4 *)(uVar6 + 0x1ce8),uVar14);
    iVar12 = FUN_71ba2d50(uVar34,0);
    uVar14 = 0;
    if (iVar12 != 0) {
      uVar14 = uVar34;
    }
    *(undefined4 *)(uVar6 + 0x1ce8) = uVar14;
    iVar12 = FUN_71ba2d30(uVar19,0);
    if ((iVar12 != 0) && (iVar12 = FUN_71ba2d30(uVar14,0), iVar12 != 0)) {
      *(undefined4 *)(uVar6 + 0x1cdc) = 0;
    }
  }
  bVar45 = false;
  if (bVar44) {
    bVar22 = 0;
    if (*(int *)(uVar6 + 0x1cd8) == 0) {
      uVar14 = *puVar42;
      iVar12 = FUN_71ba2d10(uVar14,0);
      iVar13 = FUN_71ba2cf0(uVar14,0);
      uVar14 = 0;
      if (iVar13 != 0) {
        uVar14 = 0x3f800000;
      }
      if (iVar12 != 0) {
        uVar14 = 0;
      }
      iVar12 = FUN_71ba2d70(uVar14,0);
      bVar45 = iVar12 != 0;
      if (((*(char *)(uVar6 + 0xfc) != '\0') && (-1 < *(int *)(uVar6 + 0x34))) &&
         (iVar12 = FUN_718eb140(*(int *)(uVar6 + 0x34),1), iVar12 != 0)) {
        bVar22 = *(byte *)(uVar6 + 8) & 1;
      }
    }
  }
  else {
    bVar22 = 0;
  }
  if (bVar45 || bVar22 != 0) {
    if (*(int *)(uVar6 + 0x1bd0) == 0) {
      if (0 < (int)*(uint *)(uVar6 + 0x1a38)) {
        uVar10 = *(uint *)(uVar6 + 0x1a38);
        do {
          uVar30 = *(uint *)(*(int *)(uVar6 + 0x1a40) + -4 + uVar10 * 4);
          if (*(char *)(uVar30 + 0x8b) != '\0') {
            uVar8 = *(uint *)(uVar30 + 800);
            bVar44 = uVar8 == uVar30;
            if (bVar44) {
              uVar8 = (uint)*(byte *)(uVar30 + 10);
            }
            if (bVar44 && (uVar8 & 8) == 0) goto LAB_718d4184;
          }
          bVar44 = 1 < uVar10;
          uVar10 = uVar10 - 1;
        } while (bVar44);
      }
    }
    else {
      uVar30 = *(uint *)(*(int *)(uVar6 + 0x1bd0) + 800);
LAB_718d4184:
      *(undefined4 *)(uVar6 + 0x1ce4) = 0;
      *(undefined4 *)(uVar6 + 0x1ce8) = 0;
      *(byte *)(uVar6 + 0x1cec) = bVar22 ^ 1;
      uVar14 = 4;
      if (bVar22 != 0) {
        uVar14 = 3;
      }
      *(uint *)(uVar6 + 0x1cd8) = uVar30;
      *(uint *)(uVar6 + 0x1cdc) = uVar30;
      *(undefined4 *)(uVar6 + 0x1c00) = uVar14;
    }
  }
  puVar42 = (undefined4 *)(uVar6 + 0x1ce4);
  uVar14 = FUN_71ba0b38(*puVar31,*puVar42);
  *puVar42 = uVar14;
  if (*(int *)(uVar6 + 0x1cd8) == 0) {
LAB_718d439c:
    bVar44 = false;
    iVar13 = 0;
  }
  else {
    iVar12 = *(int *)(uVar6 + 0x1c00);
    uVar10 = uVar6;
    if (iVar12 == 4) {
      uVar14 = FUN_71ba0b38(uVar14,0xbe4ccccd);
      uVar34 = FUN_71ba13e0(uVar14,0x3d4ccccd);
      iVar12 = FUN_71ba2d70(uVar34,0x3f800000);
      uVar14 = uVar34;
      if (iVar12 != 0) {
        uVar14 = 0x3f800000;
      }
      iVar12 = FUN_71ba2d10(uVar34,0);
      puVar32 = (undefined4 *)(uVar6 + 0x1ce8);
      uVar34 = *puVar32;
      if (iVar12 != 0) {
        uVar14 = 0;
      }
      iVar12 = FUN_71ba2d50(uVar34,uVar14);
      if (iVar12 != 0) {
        uVar14 = uVar34;
      }
      *puVar32 = uVar14;
      uVar34 = FUN_718f1850(0xc,4);
      iVar12 = FUN_71ba2d70(uVar34,0);
      uVar30 = (uint)(iVar12 != 0);
      uVar34 = FUN_718f1850(0xd,4);
      iVar12 = FUN_71ba2d70(uVar34,0);
      if (iVar12 != 0) {
        uVar30 = uVar30 - 1;
      }
      if (uVar30 != 0) {
        FUN_718f57d4(uVar30,iVar12);
        uVar14 = 0x3f800000;
        *puVar32 = 0x3f800000;
        uVar10 = DAT_712042b4;
      }
      bVar44 = false;
      iVar12 = FUN_71ba2d70(*(undefined4 *)(uVar10 + 0x30c),0);
      if (iVar12 == 0) {
        iVar12 = FUN_71ba2d10(uVar14,0x3f800000);
        bVar22 = iVar12 != 0 & *(byte *)(uVar6 + 0x1cec);
        *(byte *)(uVar6 + 0x1cec) = bVar22;
        if (bVar22 == 1) {
          iVar13 = 0;
          bVar44 = *(int *)(uVar6 + 0x1bd0) != 0;
        }
        else {
          iVar13 = *(int *)(uVar6 + 0x1cd8);
        }
        *(undefined4 *)(uVar6 + 0x1cd8) = 0;
        goto LAB_718d4440;
      }
      if (*(int *)(uVar6 + 0x1cd8) == 0) goto LAB_718d439c;
      iVar12 = *(int *)(uVar6 + 0x1c00);
    }
    bVar44 = false;
    iVar13 = 0;
    if (iVar12 == 3) {
      uVar14 = FUN_71ba0b38(*puVar42,0xbe4ccccd);
      uVar34 = FUN_71ba13e0(uVar14,0x3d4ccccd);
      iVar12 = FUN_71ba2d70(uVar34,0x3f800000);
      uVar14 = uVar34;
      if (iVar12 != 0) {
        uVar14 = 0x3f800000;
      }
      iVar12 = FUN_71ba2d10(uVar34,0);
      uVar34 = *(undefined4 *)(uVar6 + 0x1ce8);
      if (iVar12 != 0) {
        uVar14 = 0;
      }
      iVar12 = FUN_71ba2d50(uVar34,uVar14);
      if (iVar12 != 0) {
        uVar14 = uVar34;
      }
      *(undefined4 *)(uVar6 + 0x1ce8) = uVar14;
      if (-1 < *(int *)(uVar10 + 0x34)) {
        uVar14 = 1;
        iVar12 = FUN_718eb140(*(int *)(uVar10 + 0x34),1);
        if (iVar12 != 0) {
          if (*(char *)(uVar6 + 0xfd) == '\0') {
            uVar14 = 0xffffffff;
          }
          FUN_718f57d4(uVar14);
        }
      }
      iVar13 = 0;
      bVar44 = false;
      if (*(char *)(uVar6 + 0xfc) == '\0') {
        iVar13 = *(int *)(uVar6 + 0x1cd8);
      }
    }
  }
LAB_718d4440:
  uVar10 = DAT_712042b4;
  puVar42 = (undefined4 *)(DAT_712042b4 + 0x1498);
  iVar12 = FUN_71ba2cf0(*puVar42,0);
  if (iVar12 != 0) {
    *(undefined1 *)(uVar6 + 0x1cec) = 1;
  }
  if (((*(int *)(uVar6 + 0x1aa4) == 0) || (*(char *)(uVar6 + 0x1ab1) != '\0')) &&
     ((*(char *)(uVar6 + 0x1cec) != '\0' &&
      ((iVar12 = FUN_71ba2d10(*puVar42,0), iVar12 != 0 &&
       (iVar12 = FUN_71ba2d50(*(undefined4 *)(uVar10 + 0x14ec),0), iVar12 != 0)))))) {
    iVar12 = FUN_71ba2d50(*(undefined4 *)(uVar6 + 0x380),0xc87a0000);
    iVar18 = FUN_71ba2d50(*(undefined4 *)(uVar6 + 900),0xc87a0000);
    uVar14 = *(undefined4 *)(uVar6 + 0xe8);
    iVar4 = FUN_71ba2d50(*(undefined4 *)(uVar6 + 0xe4),0xc87a0000);
    iVar7 = FUN_71ba2d50(uVar14,0xc87a0000);
    bVar44 = (bool)((iVar4 != 0 && iVar7 != 0) == (iVar12 != 0 && iVar18 != 0) | bVar44);
  }
  iVar12 = *(int *)(uVar6 + 0x1cd8);
  uVar30 = uVar6;
  if ((iVar12 != 0) && ((*(byte *)(iVar12 + 8) & 4) == 0)) {
    uVar8 = *(uint *)(uVar6 + 0x1c00);
    if (uVar8 == 4) {
      iVar4 = 0x328;
      iVar18 = 0x32c;
      iVar39 = 800;
      iVar7 = 0x324;
    }
    else {
      bVar45 = uVar8 != 3;
      if (!bVar45) {
        uVar8 = (uint)*(byte *)(uVar6 + 0xfd);
      }
      if (bVar45 || uVar8 != 0) goto LAB_718d46fc;
      iVar4 = 0x34c;
      iVar18 = 0x350;
      iVar39 = 0x344;
      iVar7 = 0x348;
    }
    uVar14 = FUN_71ba240c(*(undefined4 *)(uVar10 + iVar18),*(undefined4 *)(uVar10 + iVar4));
    uVar14 = FUN_71ba0b38(uVar14,0);
    uVar34 = FUN_71ba240c(*(undefined4 *)(uVar10 + iVar7),*(undefined4 *)(uVar10 + iVar39));
    uVar8 = FUN_71ba0b38(uVar34,0);
    iVar18 = FUN_71ba2cf0(uVar8,0);
    if ((iVar18 == 0) || (iVar18 = FUN_71ba2cf0(uVar14,0), uVar30 = uVar8, iVar18 == 0)) {
      uVar10 = *(uint *)(uVar6 + 0xa8);
      uVar30 = *(uint *)(uVar6 + 0xac);
      uVar34 = *puVar31;
      iVar18 = FUN_71ba2d10(uVar10,uVar30);
      uVar34 = FUN_71ba21e8(uVar34,0x44480000);
      if (iVar18 != 0) {
        uVar30 = uVar10;
      }
      FUN_71ba21e8(uVar34,uVar30);
      FUN_71ba17bc();
      uVar34 = FUN_71ba1b94();
      uVar14 = FUN_71ba21e8(uVar14,uVar34);
      iVar12 = *(int *)(iVar12 + 800);
      uVar19 = *(undefined4 *)(iVar12 + 0xc);
      uStack_34 = FUN_71ba0b38(*(undefined4 *)(iVar12 + 0x10),uVar14);
      uVar14 = FUN_71ba21e8(uVar8,uVar34);
      uStack_38 = FUN_71ba0b38(uVar19,uVar14);
      FUN_718d18f4(iVar12,&uStack_38,1);
      uVar10 = DAT_712042b4;
      if ((*(byte *)(iVar12 + 9) & 1) == 0) {
        puVar42 = (undefined4 *)(DAT_712042b4 + 0x2d6c);
        iVar12 = FUN_71ba2d30(*puVar42,0);
        if (iVar12 != 0) {
          *puVar42 = *(undefined4 *)(uVar10 + 0x1c);
        }
      }
      *(undefined1 *)(uVar6 + 0x1c23) = 1;
    }
  }
LAB_718d46fc:
  if (iVar13 != 0) {
    if ((*(int *)(uVar6 + 0x1bd0) == 0) || (iVar13 != *(int *)(*(int *)(uVar6 + 0x1bd0) + 800))) {
      bVar45 = *(int *)(uVar10 + 0x1aa4) != 0;
      *(bool *)(uVar10 + 0x1ab0) = bVar45;
      if (bVar45) {
        *(undefined2 *)(uVar10 + 0x1ab3) = 0;
        *(undefined4 *)(uVar10 + 0x1aac) = 0;
      }
      *(undefined4 *)(uVar10 + 0x1ad0) = 0;
      *(undefined2 *)(uVar10 + 0x1ab1) = 0;
      *(int *)(uVar10 + 0x1aa4) = 0;
      *(undefined2 *)(uVar10 + 0x1ab5) = 0;
      *(undefined4 *)(uVar10 + 0x1ab8) = 0;
      *(undefined4 *)(uVar10 + 0x1abc) = 0;
      *(undefined4 *)(uVar10 + 0x1ac0) = 0;
      *(undefined4 *)(uVar10 + 0x1ac4) = 0;
      uVar8 = 0x7be;
      *(undefined2 *)(uVar6 + 0x1c22) = 0x100;
      iVar12 = *(int *)(iVar13 + 0x32c);
      uVar43 = *(uint *)(uVar10 + 0x1bac);
      if (iVar12 != 0) {
        uVar8 = (uint)*(byte *)(iVar12 + 0x8b);
      }
      if (iVar12 == 0 || uVar8 == 0) {
        iVar12 = iVar13;
      }
      if (uVar43 != 0) {
        if ((int)uVar43 < 1) {
          uVar8 = 0;
LAB_718d482c:
          if ((int)uVar8 < (int)uVar43) {
            FUN_718f0650(uVar8,0);
          }
        }
        else {
          uVar8 = 0;
          piVar26 = (int *)(*(int *)(uVar10 + 0x1bb4) + 4);
          uVar30 = uVar43;
          do {
            iVar13 = *(int *)(*(int *)(uVar10 + 0x1bb4) + uVar8 * 0x24 + 4);
            if ((iVar13 != 0) &&
               (uVar11 = uVar30, piVar37 = piVar26, (*(byte *)(iVar13 + 0xb) & 1) == 0)) {
              while ((*piVar37 == 0 || (*(int *)(*piVar37 + 800) != *(int *)(iVar12 + 800)))) {
                uVar11 = uVar11 - 1;
                piVar37 = piVar37 + 9;
                if (uVar11 == 0) goto LAB_718d482c;
              }
            }
            uVar8 = uVar8 + 1;
            piVar26 = piVar26 + 9;
            uVar30 = uVar30 - 1;
          } while (uVar8 != uVar43);
        }
      }
      FUN_718d12b4(iVar12);
      uVar10 = DAT_712042b4;
      if (*(int *)(iVar12 + 0x330) == 0) {
        if ((*(byte *)(iVar12 + 10) & 4) == 0) {
          uVar30 = *(uint *)(DAT_712042b4 + 0x1c18);
          iVar13 = *(int *)(DAT_712042b4 + 0x1bd0);
          *(undefined4 *)(DAT_712042b4 + 0x1bd4) = 0;
          *(undefined4 *)(uVar10 + 0x1bd8) = 0;
          *(undefined4 *)(iVar13 + uVar30 * 4 + 0x330) = 0;
          uVar2 = 1;
          *(undefined2 *)(uVar10 + 0x1c25) = 1;
          *(undefined4 *)(uVar10 + 0x1c28) = 0;
          *(undefined4 *)(uVar10 + 0x1c2c) = 0;
          *(undefined4 *)(uVar10 + 0x1c30) = 0;
          *(undefined4 *)(uVar10 + 0x1c34) = 0;
          *(undefined4 *)(uVar10 + 0x1c38) = 0;
          if (*(char *)(DAT_712042b4 + 0x1c3c) == '\0') {
            uVar2 = *(undefined1 *)(DAT_712042b4 + 0x1c25);
          }
          *(undefined1 *)(DAT_712042b4 + 0x1c24) = uVar2;
        }
        else {
          *(undefined4 *)(DAT_712042b4 + 0x1bd4) = 0;
          *(undefined4 *)(uVar10 + 0x1bd8) = 0;
        }
      }
      if (*(int *)(iVar12 + 0x144) == 2) {
        *(undefined4 *)(uVar6 + 0x1c18) = 1;
      }
    }
    *(undefined4 *)(uVar6 + 0x1cd8) = 0;
  }
  iVar12 = 0;
  if (bVar44) {
    iVar12 = *(int *)(uVar6 + 0x1bd0);
  }
  iVar13 = iVar12;
  if (bVar44 && iVar12 != 0) {
    do {
      iVar18 = iVar13;
      if (*(int *)(iVar18 + 0x31c) == 0) break;
      uVar10 = (uint)*(byte *)(iVar18 + 0x144);
      bVar44 = (*(byte *)(iVar18 + 0x144) & 2) == 0;
      if (bVar44) {
        uVar10 = *(uint *)(iVar18 + 8) & 0x15000000;
      }
      iVar13 = *(int *)(iVar18 + 0x31c);
    } while (bVar44 && uVar10 == 0x1000000);
    if (iVar18 != iVar12) {
      FUN_718d12b4(iVar18);
      *(int *)(iVar18 + 0x32c) = iVar12;
      iVar12 = *(int *)(uVar6 + 0x1bd0);
    }
    *(undefined2 *)(uVar6 + 0x1c22) = 0x100;
    uVar10 = DAT_712042b4;
    if ((*(byte *)(iVar12 + 0x144) & 2) == 0) {
      iVar12 = *(int *)(DAT_712042b4 + 0x1bd0);
      *(undefined4 *)(DAT_712042b4 + 0x1c18) = 0;
LAB_718d4b50:
      iVar13 = *(int *)(iVar12 + 0x32c);
      if (iVar13 != 0) {
        uVar30 = (uint)*(byte *)(iVar13 + 0x8b);
      }
      if (iVar13 == 0 || uVar30 == 0) {
        iVar13 = iVar12;
      }
      iVar12 = iVar13;
      *(int *)(uVar10 + 0x1bd0) = iVar12;
      iVar13 = *(int *)(iVar12 + 0x330);
      if (iVar13 != 0) {
        *(int *)(uVar10 + 0x1bd4) = iVar13;
        *(undefined4 *)(uVar10 + 0x1bd8) = 0;
        *(int *)(iVar12 + 0x330) = iVar13;
        iVar13 = *(int *)(uVar10 + 0x1bd0);
        uVar19 = *(undefined4 *)(iVar12 + 0x33c);
        uVar34 = *(undefined4 *)(iVar12 + 0x340);
        uVar14 = *(undefined4 *)(iVar12 + 0x344);
        *(undefined4 *)(iVar13 + 0x338) = *(undefined4 *)(iVar12 + 0x338);
        *(undefined4 *)(iVar13 + 0x33c) = uVar19;
        *(undefined4 *)(iVar13 + 0x340) = uVar34;
        *(undefined4 *)(iVar13 + 0x344) = uVar14;
        *(undefined1 *)(uVar10 + 0x1c23) = 1;
        *(undefined2 *)(uVar10 + 0x1c21) = 1;
        goto LAB_718d4900;
      }
      uVar6 = 0;
    }
    else {
      uVar6 = *(uint *)(uVar6 + 0x1c18) ^ 1;
      iVar12 = *(int *)(DAT_712042b4 + 0x1bd0);
      *(uint *)(DAT_712042b4 + 0x1c18) = uVar6;
      uVar30 = 0;
      if (uVar6 == 0) goto LAB_718d4b50;
    }
    if ((*(byte *)(iVar12 + 10) & 4) == 0) {
      *(undefined4 *)(uVar10 + 0x1bd4) = 0;
      *(undefined4 *)(uVar10 + 0x1bd8) = 0;
      *(undefined4 *)(iVar12 + uVar6 * 4 + 0x330) = 0;
      uVar2 = 1;
      *(undefined2 *)(uVar10 + 0x1c25) = 1;
      *(undefined4 *)(uVar10 + 0x1c28) = 0;
      *(undefined4 *)(uVar10 + 0x1c2c) = 0;
      *(undefined4 *)(uVar10 + 0x1c30) = 0;
      *(undefined4 *)(uVar10 + 0x1c34) = 0;
      *(undefined4 *)(uVar10 + 0x1c38) = 0;
      if (*(char *)(DAT_712042b4 + 0x1c3c) == '\0') {
        uVar2 = *(undefined1 *)(DAT_712042b4 + 0x1c25);
      }
      *(undefined1 *)(DAT_712042b4 + 0x1c24) = uVar2;
    }
    else {
      *(undefined4 *)(uVar10 + 0x1bd4) = *(undefined4 *)(iVar12 + 0x330);
      *(undefined4 *)(uVar10 + 0x1bd8) = 0;
    }
  }
LAB_718d4900:
  if (((~uVar5 & 1 & (uStack_54 ^ 1)) == 0) && (*(int *)(uVar23 + 0x1bd0) != 0)) {
    uVar6 = *(uint *)(*(int *)(uVar23 + 0x1bd0) + 8) & 0x40000;
    *(byte *)(uVar23 + 0x359) = (byte)(uVar6 >> 0x12) ^ 1;
    if (((uVar6 != 0) || (*(int *)(uVar23 + 0x1bd4) == 0)) || (*(char *)(uVar23 + 0x1c22) != '\0'))
    goto LAB_718d4970;
    uVar2 = 1;
  }
  else {
    *(undefined1 *)(uVar23 + 0x359) = 0;
LAB_718d4970:
    uVar2 = 0;
    if (*(int *)(uVar23 + 0x1cd8) != 0) {
      uVar2 = 1;
    }
  }
  *(undefined1 *)(uVar23 + 0x35a) = uVar2;
  uVar6 = DAT_712042b4;
  uVar46 = FUN_71ba2cf0(*(undefined4 *)(DAT_712042b4 + 0x145c),0);
  uVar14 = (undefined4)((ulonglong)uVar46 >> 0x20);
  if ((int)uVar46 != 0) {
    if (*piVar28 == 0) {
      iVar12 = *(int *)(uVar23 + 0x1bd0);
      if (((iVar12 == 0) || ((*(uint *)(iVar12 + 8) & 0x5000000) != 0x1000000)) ||
         (*(int *)(iVar12 + 0x31c) == 0)) {
        iVar13 = *(int *)(uVar23 + 0x1bac);
        if (iVar13 < 1) {
          if (*(int *)(uVar23 + 0x1c18) == 0) {
            uVar6 = 0;
            if (iVar12 != 0) {
              uVar6 = *(uint *)(iVar12 + 8) & 0x5000000;
            }
            if (iVar12 != 0 && uVar6 != 0x1000000) {
              *(undefined4 *)(iVar12 + 0x330) = 0;
            }
            *(undefined4 *)(uVar23 + 0x1bd4) = 0;
            *(undefined4 *)(uVar23 + 0x1bd8) = 0;
          }
          else {
            *(undefined4 *)(uVar6 + 0x1c18) = 0;
            iVar12 = *(int *)(*(int *)(uVar6 + 0x1bd0) + 0x32c);
            uVar10 = extraout_r2;
            if (iVar12 != 0) {
              uVar10 = (uint)*(byte *)(iVar12 + 0x8b);
            }
            if (iVar12 == 0 || uVar10 == 0) {
              iVar12 = *(int *)(uVar6 + 0x1bd0);
            }
            *(int *)(uVar6 + 0x1bd0) = iVar12;
            iVar13 = *(int *)(iVar12 + 0x330);
            if (iVar13 == 0) {
              uVar10 = *(uint *)(iVar12 + 8);
              *(undefined4 *)(uVar6 + 0x1bd4) = 0;
              *(undefined4 *)(uVar6 + 0x1bd8) = 0;
              if ((uVar10 & 0x40000) == 0) {
                *(undefined4 *)(iVar12 + 0x330) = 0;
                *(undefined1 *)(uVar6 + 0x1c26) = 0;
                *(undefined2 *)(uVar6 + 0x1c24) = 0x101;
                *(undefined4 *)(uVar6 + 0x1c28) = 0;
                *(undefined4 *)(uVar6 + 0x1c2c) = 0;
                *(undefined4 *)(uVar6 + 0x1c30) = 0;
                *(undefined4 *)(uVar6 + 0x1c34) = 0;
                *(undefined4 *)(uVar6 + 0x1c38) = 0;
              }
            }
            else {
              *(int *)(uVar6 + 0x1bd4) = iVar13;
              *(undefined4 *)(uVar6 + 0x1bd8) = 0;
              *(int *)(iVar12 + 0x330) = iVar13;
              iVar13 = *(int *)(uVar6 + 0x1bd0);
              uVar34 = *(undefined4 *)(iVar12 + 0x33c);
              uVar19 = *(undefined4 *)(iVar12 + 0x340);
              uVar14 = *(undefined4 *)(iVar12 + 0x344);
              *(undefined4 *)(iVar13 + 0x338) = *(undefined4 *)(iVar12 + 0x338);
              *(undefined4 *)(iVar13 + 0x33c) = uVar34;
              *(undefined4 *)(iVar13 + 0x340) = uVar19;
              *(undefined4 *)(iVar13 + 0x344) = uVar14;
              *(undefined2 *)(uVar6 + 0x1c21) = 1;
              *(undefined1 *)(uVar6 + 0x1c23) = 1;
            }
          }
        }
        else if ((*(byte *)(*(int *)(*(int *)(uVar23 + 0x1bb4) + iVar13 * 0x24 + -0x20) + 0xb) & 8)
                 == 0) {
          FUN_718f0650(iVar13 + -1,1);
        }
      }
      else {
        FUN_718d12b4();
        uVar6 = DAT_712042b4;
        uVar14 = *(undefined4 *)(iVar12 + 0x54);
        iVar12 = *(int *)(DAT_712042b4 + 0x1bd0);
        *(undefined4 *)(DAT_712042b4 + 0x1bd4) = uVar14;
        *(undefined4 *)(uVar6 + 0x1bd8) = 0;
        *(undefined4 *)(iVar12 + 0x330) = uVar14;
        *(undefined1 *)(uVar23 + 0x1c20) = 0;
        if (*(char *)(uVar23 + 0x1c23) != '\0') {
          *(undefined1 *)(uVar23 + 0x1c21) = 1;
        }
      }
    }
    else if ((*(byte *)(uVar6 + 0x1abc) & 2) == 0) {
      bVar44 = *(int *)(uVar6 + 0x1aa4) != 0;
      if (bVar44) {
        uVar14 = 0;
      }
      *(bool *)(uVar6 + 0x1ab0) = bVar44;
      if (bVar44) {
        *(short *)(uVar6 + 0x1ab3) = (short)uVar14;
        *(undefined4 *)(uVar6 + 0x1aac) = uVar14;
      }
      *(undefined2 *)(uVar6 + 0x1ab1) = 0;
      *(undefined2 *)(uVar6 + 0x1ab5) = 0;
      *(undefined4 *)(uVar6 + 0x1ad0) = 0;
      *(undefined4 *)(uVar6 + 0x1aa4) = 0;
      *(undefined4 *)(uVar6 + 0x1ab8) = 0;
      *(undefined4 *)(uVar6 + 0x1abc) = 0;
      *(undefined4 *)(uVar6 + 0x1ac0) = 0;
      *(undefined4 *)(uVar6 + 0x1ac4) = 0;
    }
  }
  *(int *)(uVar23 + 0x1bdc) = 0;
  iVar12 = *(int *)(uVar23 + 0x1bd4);
  *(undefined4 *)(uVar23 + 0x1be0) = 0;
  *(undefined4 *)(uVar23 + 0x1be4) = 0;
  *(undefined4 *)(uVar23 + 0x1be8) = 0;
  uVar6 = DAT_712042b4;
  if (iVar12 == 0) {
LAB_718d4dc0:
    uVar6 = *(uint *)(uVar23 + 0x1bd0);
    if (uVar6 == 0) goto LAB_718d4e34;
    if ((*(byte *)(uVar6 + 10) & 4) != 0) {
      *(undefined1 *)(uVar23 + 0x1c22) = 1;
    }
  }
  else {
    uVar10 = (uint)*(byte *)(uVar23 + 0x1c22);
    bVar44 = uVar10 == 0;
    if (bVar44) {
      uVar10 = *(uint *)(uVar23 + 0x1cd8);
    }
    if (!bVar44 || uVar10 != 0) goto LAB_718d4dc0;
    if (*(int *)(uVar23 + 0x1bd0) != 0) {
      if ((*(byte *)(*(int *)(uVar23 + 0x1bd0) + 10) & 4) == 0) {
        puVar42 = (undefined4 *)(DAT_712042b4 + 0x1458);
        iVar13 = FUN_71ba2d70(*(undefined4 *)(DAT_712042b4 + 0x300),0);
        if (iVar13 == 0) {
          iVar18 = *piVar28;
          if (iVar18 != 0) {
LAB_718d4e28:
            if (iVar18 != iVar12) goto LAB_718d4dc0;
          }
        }
        else {
          uVar14 = *puVar42;
          iVar13 = FUN_71ba2d10(uVar14,0);
          iVar18 = FUN_71ba2cf0(uVar14,0);
          uVar14 = 0;
          if (iVar18 != 0) {
            uVar14 = 0x3f800000;
          }
          if (iVar13 != 0) {
            uVar14 = 0;
          }
          iVar13 = FUN_71ba2d70(uVar14,0);
          iVar18 = *piVar28;
          if ((iVar18 == 0) && (iVar4 = FUN_71ba2d70(uVar14,0), iVar4 != 0)) {
            *(int *)(uVar23 + 0x1bdc) = iVar12;
          }
          else if (iVar18 != 0 && iVar18 != iVar12) goto LAB_718d4e28;
          *(int *)(uVar23 + 0x1be0) = iVar12;
          if (iVar13 != 0) {
            *(int *)(uVar23 + 0x1be4) = iVar12;
          }
        }
        iVar13 = FUN_71ba2cf0(*(undefined4 *)(uVar6 + 0x1460),0);
        if (iVar13 != 0) {
          *(int *)(uVar23 + 0x1be8) = iVar12;
        }
      }
      goto LAB_718d4dc0;
    }
LAB_718d4e34:
    uVar6 = 0;
  }
  iVar12 = *(int *)(uVar23 + 0x1bfc);
  *(undefined1 *)(uVar23 + 0x1c3c) = 0;
  *(undefined4 *)(uVar23 + 0x1bfc) = 0;
  if (iVar12 != 0) {
    *(int *)(uVar23 + 0x1bdc) = iVar12;
    *(int *)(uVar23 + 0x1be0) = iVar12;
    *(int *)(uVar23 + 0x1be4) = iVar12;
    *(int *)(uVar23 + 0x1be8) = iVar12;
  }
  if (*(int *)(uVar23 + 0x1c44) == 0) {
    uVar14 = 0xffffffff;
    *(undefined4 *)(uVar23 + 0x1c40) = 0;
    *(undefined4 *)(uVar23 + 0x1c4c) = 0xffffffff;
    if (uVar6 != 0) {
      bVar44 = *(int *)(uVar23 + 0x1cd8) == 0;
      if (bVar44) {
        uVar6 = (uint)*(byte *)(uVar6 + 10);
      }
      if (bVar44 && (uVar6 & 4) == 0) {
        puVar17 = (uint *)(DAT_712042b4 + 0x1ab8);
        uVar6 = *puVar17;
        if ((uVar6 & 1) == 0) {
          uVar34 = FUN_718f1850(4,3);
          iVar12 = FUN_71ba2d70(uVar34,0);
          if (iVar12 == 0) {
            uVar34 = FUN_718f1850(0x11,3);
            iVar12 = FUN_71ba2d70(uVar34,0);
            if (iVar12 == 0) goto LAB_718d69a0;
          }
          *(undefined4 *)(uVar23 + 0x1c4c) = 0;
          uVar14 = 0;
          uVar6 = *puVar17;
        }
LAB_718d69a0:
        if ((uVar6 & 2) == 0) {
          uVar34 = FUN_718f1850(5,3);
          iVar12 = FUN_71ba2d70(uVar34,0);
          if (iVar12 == 0) {
            uVar34 = FUN_718f1850(0x12,3);
            iVar12 = FUN_71ba2d70(uVar34,0);
            if (iVar12 == 0) goto LAB_718d69ec;
          }
          uVar14 = 1;
          *(undefined4 *)(uVar23 + 0x1c4c) = 1;
          uVar6 = *puVar17;
        }
LAB_718d69ec:
        if ((uVar6 & 4) == 0) {
          uVar34 = FUN_718f1850(6,3);
          iVar12 = FUN_71ba2d70(uVar34,0);
          if (iVar12 == 0) {
            uVar34 = FUN_718f1850(0x13,3);
            iVar12 = FUN_71ba2d70(uVar34,0);
            if (iVar12 == 0) goto LAB_718d6a38;
          }
          uVar14 = 2;
          *(undefined4 *)(uVar23 + 0x1c4c) = 2;
          uVar6 = *puVar17;
        }
LAB_718d6a38:
        if ((uVar6 & 8) == 0) {
          uVar34 = FUN_718f1850(7,3);
          iVar12 = FUN_71ba2d70(uVar34,0);
          if (iVar12 == 0) {
            uVar34 = FUN_718f1850(0x14,3);
            iVar12 = FUN_71ba2d70(uVar34,0);
            if (iVar12 == 0) goto LAB_718d4ea4;
          }
          uVar14 = 3;
          *(undefined4 *)(uVar23 + 0x1c4c) = 3;
        }
      }
    }
LAB_718d4ea4:
    *(undefined4 *)(uVar23 + 0x1c54) = uVar14;
  }
  else {
    *(undefined4 *)(uVar23 + 0x1c44) = 2;
  }
  uVar6 = DAT_712042b4;
  uVar10 = 0;
  if (((((uVar5 & 1) != 0) &&
       (pbVar27 = (byte *)(DAT_712042b4 + 0x1ac0), *(int *)(DAT_712042b4 + 0x1c4c) == -1)) &&
      (iVar12 = *(int *)(DAT_712042b4 + 0x1bd0), iVar12 != 0)) &&
     ((*(byte *)(iVar12 + 10) & 4) == 0)) {
    iVar13 = *(int *)(DAT_712042b4 + 0x1cd8);
    bVar44 = iVar13 == 0;
    if (bVar44) {
      iVar13 = *(int *)(DAT_712042b4 + 0x1c18);
    }
    if (bVar44 && iVar13 == 0) {
      iVar13 = *(int *)(DAT_712042b4 + 0x48);
      uVar5 = 0;
      if (-1 < iVar13) {
        bVar44 = *(char *)(DAT_712042b4 + iVar13 + 0x100) != '\0';
        uVar10 = 0;
        if (bVar44) {
          uVar10 = (uint)*pbVar27;
        }
        uVar5 = (uint)bVar44;
        if (bVar44) {
          uVar5 = (uVar10 & 0x20) >> 5 ^ 1;
        }
      }
      iVar18 = *(int *)(DAT_712042b4 + 0x4c);
      uVar10 = 1;
      if ((-1 < iVar18) && (*(char *)(DAT_712042b4 + iVar18 + 0x100) != '\0')) {
        uVar10 = (*pbVar27 & 0x7f) >> 6;
      }
      uVar46 = FUN_718eb140(*(undefined4 *)(DAT_712042b4 + 0x50),1);
      uVar30 = (uint)((ulonglong)uVar46 >> 0x20);
      bVar44 = (int)uVar46 != 0;
      uVar8 = 0;
      pcStack_4c = (char *)0x0;
      if (bVar44) {
        uVar30 = 1;
        uVar8 = (uint)*pbVar27;
      }
      uVar43 = 0;
      if (bVar44) {
        pcStack_4c = (char *)(uVar30 ^ uVar8 >> 7);
      }
      iVar4 = FUN_718eb140(*(undefined4 *)(uVar6 + 0x54),1);
      if (iVar4 != 0) {
        uVar43 = ~(uint)*(byte *)(uVar6 + 0x1ac1) & 1;
      }
      if ((pcStack_4c == (char *)uVar43) && (uVar5 != uVar10)) {
LAB_718d5ad8:
        uVar10 = 0;
      }
      else if ((*(int *)(iVar12 + 0x144) == 0) && (*(char *)(iVar12 + 0x151) != '\0')) {
        iVar13 = FUN_718eb140(iVar13,1);
        if (iVar13 == 0) {
          iVar13 = FUN_718eb140(iVar18,1);
          if (iVar13 == 0) {
            if (pcStack_4c == (char *)0x0) {
              uVar10 = 0;
              if (uVar43 != 0) {
                *(undefined4 *)(iVar12 + 0x7c) = 0;
                *(undefined4 *)(iVar12 + 0x74) = 0;
                *(undefined4 *)(iVar12 + 0x6c) = *(undefined4 *)(iVar12 + 100);
              }
            }
            else {
              uVar10 = 0;
              *(undefined4 *)(iVar12 + 0x7c) = 0;
              *(undefined4 *)(iVar12 + 0x74) = 0;
              *(undefined4 *)(iVar12 + 0x6c) = 0;
            }
          }
          else {
            uVar10 = 0;
            *(undefined4 *)(iVar12 + 0x7c) = 0;
            *(undefined4 *)(iVar12 + 0x74) = 0;
            uVar34 = *(undefined4 *)(iVar12 + 0x5c);
            uVar14 = FUN_71ba240c(*(undefined4 *)(iVar12 + 0x200),*(undefined4 *)(iVar12 + 0x1f8));
            uVar14 = FUN_71ba0b38(uVar34,uVar14);
            *(undefined4 *)(iVar12 + 0x6c) = uVar14;
          }
        }
        else {
          uVar10 = 0;
          *(undefined4 *)(iVar12 + 0x7c) = 0;
          *(undefined4 *)(iVar12 + 0x74) = 0;
          uVar34 = *(undefined4 *)(iVar12 + 0x5c);
          uVar14 = FUN_71ba240c(*(undefined4 *)(iVar12 + 0x200),*(undefined4 *)(iVar12 + 0x1f8));
          uVar14 = FUN_71ba240c(uVar34,uVar14);
          *(undefined4 *)(iVar12 + 0x6c) = uVar14;
        }
      }
      else {
        uVar14 = FUN_71ba240c(*(undefined4 *)(iVar12 + 0x200),*(undefined4 *)(iVar12 + 0x1f8));
        uVar34 = FUN_718eeef4(iVar12);
        uVar14 = FUN_71ba240c(uVar14,uVar34);
        puVar33 = (uint *)(iVar12 + 0x33c);
        puVar17 = (uint *)(iVar12 + 0x344);
        uVar34 = FUN_71ba240c(*puVar17,*puVar33);
        uVar10 = FUN_71ba0b38(uVar14,uVar34);
        iVar13 = FUN_71ba2d30(uVar10,0);
        if (iVar13 != 0) {
          uVar10 = 0;
        }
        iVar13 = FUN_718eb140(*(undefined4 *)(uVar6 + 0x48),1);
        if (iVar13 == 0) {
          iVar13 = FUN_718eb140(*(undefined4 *)(uVar6 + 0x4c),1);
          if (iVar13 == 0) {
            puVar42 = (undefined4 *)(iVar12 + 0x338);
            if (pcStack_4c == (char *)0x0) {
              if (uVar43 == 0) goto LAB_718d5ad8;
              uVar14 = *(undefined4 *)(iVar12 + 0x5c);
              uVar34 = FUN_71ba0b38(*(undefined4 *)(iVar12 + 100),*(undefined4 *)(iVar12 + 0x20));
              uVar5 = FUN_71ba240c(uVar34,uVar14);
              *puVar17 = uVar5;
              *puVar33 = uVar5;
              iVar13 = FUN_71ba2d70(*puVar42,*(undefined4 *)(iVar12 + 0x340));
              if (iVar13 != 0) {
                *puVar42 = 0;
                *(undefined4 *)(iVar12 + 0x340) = 0;
              }
              *(undefined4 *)(uVar6 + 0x1c40) = 0x50;
              uVar14 = 2;
            }
            else {
              uVar5 = *(uint *)(iVar12 + 0x5c) ^ 0x80000000;
              *puVar17 = uVar5;
              *puVar33 = uVar5;
              iVar13 = FUN_71ba2d70(*puVar42,*(undefined4 *)(iVar12 + 0x340));
              if (iVar13 != 0) {
                *puVar42 = 0;
                *(undefined4 *)(iVar12 + 0x340) = 0;
              }
              *(undefined4 *)(uVar6 + 0x1c40) = 0x50;
              uVar14 = 3;
            }
            *(undefined4 *)(uVar6 + 0x1c4c) = uVar14;
            goto LAB_718d5ad8;
          }
          *(undefined4 *)(uVar6 + 0x1c54) = 3;
          uVar14 = 2;
        }
        else {
          uVar10 = uVar10 ^ 0x80000000;
          *(undefined4 *)(uVar6 + 0x1c54) = 2;
          uVar14 = 3;
        }
        *(undefined4 *)(uVar6 + 0x1c4c) = uVar14;
        *(undefined4 *)(uVar6 + 0x1c40) = 0x30;
      }
    }
  }
  if (*(int *)(uVar23 + 0x1c4c) == -1) {
    if (*(char *)(uVar23 + 0x1c3c) != '\0') goto LAB_718d4f04;
  }
  else {
    *(int *)(uVar23 + 0x1c50) = *(int *)(uVar23 + 0x1c4c);
    *(undefined1 *)(uVar23 + 0x1c3c) = 1;
    *(undefined4 *)(uVar23 + 0x1c48) = *(undefined4 *)(uVar23 + 0x37c);
LAB_718d4f04:
    if (*(int *)(uVar23 + 0x1bd4) == 0) {
      *(undefined2 *)(uVar23 + 0x1c25) = 0x101;
      *(undefined4 *)(uVar23 + 0x1c28) = 0;
      *(undefined1 *)(uVar23 + 0x1c22) = 0;
    }
  }
  uVar6 = DAT_712042b4;
  puVar42 = (undefined4 *)(DAT_712042b4 + 0x1934);
  uVar2 = 1;
  if (*(char *)(DAT_712042b4 + 0x1c3c) == '\0') {
    uVar2 = *(undefined1 *)(DAT_712042b4 + 0x1c25);
  }
  *(undefined1 *)(DAT_712042b4 + 0x1c24) = uVar2;
  iVar12 = *(int *)(uVar23 + 0x1bd0);
  if (iVar12 != 0) {
    uVar5 = (uint)*(byte *)(iVar12 + 10);
    bVar44 = (*(byte *)(iVar12 + 10) & 4) == 0;
    if (bVar44) {
      uVar5 = *(uint *)(uVar23 + 0x1cd8);
    }
    if (bVar44 && uVar5 == 0) {
      uVar14 = FUN_71ba21e8(*puVar42,*(undefined4 *)(iVar12 + 0x280));
      if (*(int *)(iVar12 + 0x31c) != 0) {
        uVar14 = FUN_71ba21e8(uVar14,*(undefined4 *)(*(int *)(iVar12 + 0x31c) + 0x280));
      }
      uVar14 = FUN_71ba21e8(uVar14,0x42c80000);
      uVar14 = FUN_71ba21e8(uVar14,*puVar25);
      FUN_71ba0b38(uVar14,0x3f000000);
      FUN_71ba17bc();
      uVar14 = FUN_71ba1b94();
      if (*(int *)(iVar12 + 0x144) == 0) {
        bVar44 = *(char *)(iVar12 + 0x151) != '\0';
        cVar3 = '\0';
        if (bVar44) {
          cVar3 = *(char *)(uVar23 + 0x1c3c);
        }
        if (bVar44 && cVar3 != '\0') {
          uVar5 = *(uint *)(uVar23 + 0x1c4c);
          if (uVar5 < 2) {
            *(undefined4 *)(iVar12 + 0x78) = 0;
            *(undefined4 *)(iVar12 + 0x70) = 0;
            uVar34 = 0x3f800000;
            if (uVar5 == 0) {
              uVar34 = 0xbf800000;
            }
            uVar34 = FUN_71ba21e8(uVar34,uVar14);
            FUN_71ba0b38(uVar34,*(undefined4 *)(iVar12 + 0x58));
            FUN_71ba17bc();
            uVar34 = FUN_71ba1b94();
            *(undefined4 *)(iVar12 + 0x68) = uVar34;
            uVar5 = *(uint *)(uVar23 + 0x1c4c);
          }
          if ((uVar5 & 0xfffffffe) == 2) {
            *(undefined4 *)(iVar12 + 0x7c) = 0;
            *(undefined4 *)(iVar12 + 0x74) = 0;
            uVar34 = 0x3f800000;
            if (uVar5 == 2) {
              uVar34 = 0xbf800000;
            }
            uVar34 = FUN_71ba21e8(uVar34,uVar14);
            FUN_71ba0b38(uVar34,*(undefined4 *)(iVar12 + 0x5c));
            FUN_71ba17bc();
            uVar34 = FUN_71ba1b94();
            *(undefined4 *)(iVar12 + 0x6c) = uVar34;
          }
        }
      }
      FUN_718f1fdc(&uStack_38,4,0,0x3dcccccd,0x41200000);
      uVar34 = uStack_38;
      iVar13 = FUN_71ba2cf0(uStack_38,0);
      if ((iVar13 == 0) && (*(char *)(iVar12 + 0x88) != '\0')) {
        *(undefined4 *)(iVar12 + 0x78) = 0;
        *(undefined4 *)(iVar12 + 0x70) = 0;
        uVar34 = FUN_71ba21e8(uVar34,uVar14);
        FUN_71ba0b38(uVar34,*(undefined4 *)(iVar12 + 0x58));
        FUN_71ba17bc();
        uVar34 = FUN_71ba1b94();
        *(undefined4 *)(iVar12 + 0x68) = uVar34;
      }
      uVar34 = uStack_34;
      iVar13 = FUN_71ba2cf0(uStack_34,0);
      if (iVar13 == 0) {
        *(undefined4 *)(iVar12 + 0x7c) = 0;
        *(undefined4 *)(iVar12 + 0x74) = 0;
        uVar14 = FUN_71ba21e8(uVar34,uVar14);
        FUN_71ba0b38(uVar14,*(undefined4 *)(iVar12 + 0x5c));
        FUN_71ba17bc();
        uVar14 = FUN_71ba1b94();
        *(undefined4 *)(iVar12 + 0x6c) = uVar14;
      }
    }
  }
  uVar14 = 0;
  *(undefined4 *)(uVar23 + 0x1c58) = 0;
  *(undefined4 *)(uVar23 + 0x1c5c) = 0;
  *(undefined4 *)(uVar23 + 0x1c60) = 0;
  *(undefined4 *)(uVar23 + 0x1c64) = 0x7f7fffff;
  *(undefined4 *)(uVar23 + 0x1c68) = 0x7f7fffff;
  *(undefined4 *)(uVar23 + 0x1c6c) = 0x7f7fffff;
  *(undefined4 *)(uVar23 + 0x1c8c) = 0x7f7fffff;
  *(undefined4 *)(uVar23 + 0x1c90) = 0x7f7fffff;
  *(undefined4 *)(uVar23 + 0x1c94) = 0x7f7fffff;
  *(undefined4 *)(uVar23 + 0x1c70) = 0;
  *(undefined4 *)(uVar23 + 0x1c74) = 0;
  *(undefined4 *)(uVar23 + 0x1c78) = 0;
  *(undefined4 *)(uVar23 + 0x1c7c) = 0;
  *(undefined4 *)(uVar23 + 0x1c80) = 0;
  *(undefined4 *)(uVar23 + 0x1c84) = 0;
  *(undefined4 *)(uVar23 + 0x1c88) = 0;
  *(undefined4 *)(uVar23 + 0x1c98) = 0;
  *(undefined4 *)(uVar23 + 0x1cb4) = 0x7f7fffff;
  *(undefined4 *)(uVar23 + 0x1c9c) = 0;
  *(undefined4 *)(uVar23 + 0x1ca0) = 0;
  *(undefined4 *)(uVar23 + 0x1ca4) = 0;
  *(undefined4 *)(uVar23 + 0x1ca8) = 0;
  *(undefined4 *)(uVar23 + 0x1cac) = 0;
  *(undefined4 *)(uVar23 + 0x1cb0) = 0;
  *(undefined4 *)(uVar23 + 0x1cb8) = 0x7f7fffff;
  *(undefined4 *)(uVar23 + 0x1cbc) = 0x7f7fffff;
  *(undefined4 *)(uVar23 + 0x1cc0) = 0;
  *(undefined4 *)(uVar23 + 0x1cc4) = 0;
  *(undefined4 *)(uVar23 + 0x1cc8) = 0;
  *(undefined4 *)(uVar23 + 0x1ccc) = 0;
  if (*(char *)(uVar23 + 0x1c3c) != '\0') {
    iVar12 = *(int *)(uVar23 + 0x1c00);
    bVar44 = iVar12 == 4;
    if (bVar44) {
      iVar12 = *(int *)(uVar23 + 0x1c18);
    }
    if (bVar44 && iVar12 == 0) {
      iVar13 = *(int *)(uVar23 + 0x1bd0);
      uVar9 = *(undefined4 *)(iVar13 + 0x10);
      uVar15 = *(undefined4 *)(iVar13 + 500);
      uVar19 = *(undefined4 *)(iVar13 + 0x1fc);
      uVar34 = FUN_71ba240c(*(undefined4 *)(iVar13 + 0x1f8),uVar9);
      uVar34 = FUN_71ba0b38(uVar34,0xbf800000);
      uVar20 = *(undefined4 *)(iVar13 + 0xc);
      uVar19 = FUN_71ba240c(uVar19,uVar20);
      uVar19 = FUN_71ba0b38(uVar19,0x3f800000);
      uVar9 = FUN_71ba240c(*(undefined4 *)(iVar13 + 0x200),uVar9);
      uVar9 = FUN_71ba0b38(uVar9,0x3f800000);
      uVar15 = FUN_71ba240c(uVar15,uVar20);
      uVar15 = FUN_71ba0b38(uVar15,0xbf800000);
      uVar20 = *(undefined4 *)(iVar13 + 0x338);
      iVar12 = FUN_71ba2d50();
      if ((((iVar12 == 0) ||
           (iVar12 = FUN_71ba2d50(*(undefined4 *)(iVar13 + 0x33c),uVar34), iVar12 == 0)) ||
          (iVar12 = FUN_71ba2d30(*(undefined4 *)(iVar13 + 0x340),uVar19), iVar12 == 0)) ||
         (iVar12 = FUN_71ba2d30(*(undefined4 *)(iVar13 + 0x344),uVar9), iVar12 == 0)) {
        uVar29 = FUN_71ba21e8(*puVar42,*(undefined4 *)(iVar13 + 0x280));
        if (*(int *)(iVar13 + 0x31c) != 0) {
          uVar29 = FUN_71ba21e8(uVar29,*(undefined4 *)(*(int *)(iVar13 + 0x31c) + 0x280));
        }
        uVar29 = FUN_71ba21e8(uVar29,0x3f000000);
        uVar36 = FUN_71ba240c(uVar19,uVar15);
        iVar12 = FUN_71ba2d10(uVar36,uVar29);
        if (iVar12 == 0) {
          uVar36 = uVar29;
        }
        uVar40 = FUN_71ba240c(uVar19,uVar36);
        iVar12 = FUN_71ba2d70(uVar20,uVar40);
        uVar19 = uVar20;
        if (iVar12 != 0) {
          uVar19 = uVar40;
        }
        uVar15 = FUN_71ba0b38(uVar15,uVar36);
        iVar12 = FUN_71ba2d10(uVar20,uVar15);
        if (iVar12 != 0) {
          uVar19 = uVar15;
        }
        *(undefined4 *)(iVar13 + 0x338) = uVar19;
        uVar19 = FUN_71ba240c(uVar9,uVar34);
        iVar12 = FUN_71ba2d10(uVar19,uVar29);
        if (iVar12 != 0) {
          uVar29 = uVar19;
        }
        uVar19 = FUN_71ba240c(uVar9,uVar29);
        uVar21 = *(undefined4 *)(iVar13 + 0x33c);
        uVar20 = *(undefined4 *)(iVar13 + 0x340);
        uVar36 = *(undefined4 *)(iVar13 + 0x344);
        iVar12 = FUN_71ba2d70(uVar21,uVar19);
        uVar9 = uVar21;
        if (iVar12 != 0) {
          uVar9 = uVar19;
        }
        uVar34 = FUN_71ba0b38(uVar34,uVar29);
        iVar12 = FUN_71ba2d10(uVar21);
        if (iVar12 != 0) {
          uVar9 = uVar34;
        }
        *(undefined4 *)(iVar13 + 0x33c) = uVar9;
        iVar12 = FUN_71ba2d70(uVar20,uVar40);
        if (iVar12 == 0) {
          uVar40 = uVar20;
        }
        iVar12 = FUN_71ba2d10(uVar20,uVar15);
        if (iVar12 != 0) {
          uVar40 = uVar15;
        }
        *(undefined4 *)(iVar13 + 0x340) = uVar40;
        iVar12 = FUN_71ba2d70(uVar36,uVar19);
        if (iVar12 == 0) {
          uVar19 = uVar36;
        }
        iVar12 = FUN_71ba2d10(uVar36,uVar34);
        if (iVar12 != 0) {
          uVar19 = uVar34;
        }
        *(undefined4 *)(iVar13 + 0x344) = uVar19;
        *(undefined4 *)(uVar23 + 0x1bd4) = 0;
        *(undefined4 *)(uVar23 + 0x1bd8) = 0;
      }
    }
  }
  iVar12 = *(int *)(uVar23 + 0x1bd0);
  if (iVar12 == 0) {
    uVar9 = 0x3f800000;
    uVar34 = 0;
    uVar19 = 0;
  }
  else {
    uVar15 = *(undefined4 *)(iVar12 + 0xc);
    uVar20 = *(undefined4 *)(iVar12 + 0x10);
    iVar12 = iVar12 + *(int *)(uVar23 + 0x1c18) * 0x10;
    uVar29 = *(undefined4 *)(iVar12 + 0x338);
    uVar14 = *(undefined4 *)(iVar12 + 0x340);
    uVar9 = *(undefined4 *)(iVar12 + 0x344);
    uVar19 = FUN_71ba0b38(*(undefined4 *)(iVar12 + 0x33c),uVar20);
    uVar34 = FUN_71ba0b38(uVar14,uVar15);
    uVar14 = FUN_71ba0b38(uVar9,uVar20);
    uVar9 = FUN_71ba0b38(uVar29,uVar15);
    uVar9 = FUN_71ba0b38(uVar9,0x3f800000);
  }
  *(undefined4 *)(uVar23 + 0x1c14) = 0;
  uVar14 = FUN_71ba0b38(uVar10,uVar14);
  *(undefined4 *)(uVar23 + 0x1c10) = uVar14;
  uVar14 = FUN_71ba0b38(uVar10,uVar19);
  *(undefined4 *)(uVar23 + 0x1c08) = uVar14;
  iVar12 = FUN_71ba2d10(uVar9,uVar34);
  if (iVar12 != 0) {
    uVar34 = uVar9;
  }
  *(undefined4 *)(uVar23 + 0x1c0c) = uVar34;
  *(undefined4 *)(uVar23 + 0x1c04) = uVar34;
  uVar14 = *(undefined4 *)(uVar6 + 0xe8);
  puVar25 = (undefined4 *)(uVar6 + 0xe4);
  uVar34 = *puVar25;
  iVar12 = FUN_71ba2d50(uVar34,0xc87a0000);
  if ((iVar12 != 0) && (iVar12 = FUN_71ba2d50(uVar14,0xc87a0000), iVar12 != 0)) {
    FUN_71ba17bc(uVar14);
    uVar14 = FUN_71ba1b94();
    *(undefined4 *)(uVar6 + 0x1e24) = uVar14;
    FUN_71ba17bc(uVar34);
    uVar34 = FUN_71ba1b94();
    *(undefined4 *)(uVar6 + 0x1e20) = uVar34;
    *puVar25 = uVar34;
    *(undefined4 *)(uVar6 + 0xe8) = uVar14;
  }
  iVar12 = FUN_71ba2d50(uVar34,0xc87a0000);
  iVar13 = FUN_71ba2d50(uVar14,0xc87a0000);
  if ((iVar12 == 0) || (iVar12 = FUN_71ba2d50(uVar14,0xc87a0000), iVar12 == 0)) {
LAB_718d5270:
    *(undefined4 *)(uVar6 + 0x374) = 0;
    *(undefined4 *)(uVar6 + 0x378) = 0;
  }
  else {
    uVar9 = *(undefined4 *)(uVar6 + 0x380);
    uVar19 = *(undefined4 *)(uVar6 + 900);
    iVar12 = FUN_71ba2d50(uVar9,0xc87a0000);
    if ((iVar12 == 0) || (iVar12 = FUN_71ba2d50(uVar19,0xc87a0000), iVar12 == 0)) goto LAB_718d5270;
    uVar19 = FUN_71ba240c(uVar14,uVar19);
    *(undefined4 *)(uVar6 + 0x378) = uVar19;
    uVar34 = FUN_71ba240c(uVar34,uVar9);
    *(undefined4 *)(uVar6 + 0x374) = uVar34;
    iVar12 = FUN_71ba2cf0(uVar34,0);
    if (iVar12 == 0) {
      *(undefined1 *)(uVar6 + 0x1c23) = 0;
    }
    else {
      iVar12 = FUN_71ba2cf0(uVar19,0);
      if (iVar12 == 0) {
        *(undefined1 *)(uVar6 + 0x1c23) = 0;
      }
    }
  }
  uVar34 = *puVar25;
  uVar19 = *(undefined4 *)(uVar6 + 0xe8);
  *(undefined4 *)(uVar6 + 900) = uVar19;
  *(undefined4 *)(uVar6 + 0x380) = uVar34;
  iVar12 = FUN_71ba2d50(uVar34,0xc87a0000);
  iVar18 = 0x3f4;
  iVar4 = 0;
  bVar44 = iVar12 != 0 && iVar13 != 0;
  iVar12 = 0x408;
  iStack_50 = -0x28;
  iStack_44 = 0x107;
  iStack_48 = 0x444;
  do {
    iVar13 = uVar6 + iVar4;
    if (*(char *)(iVar13 + 0xec) == '\0') {
      pcStack_4c = (char *)(iVar13 + 0x3d8);
      *pcStack_4c = '\0';
      iVar7 = FUN_71ba2d50(*(undefined4 *)(uVar6 + iVar18),0);
      uVar2 = (undefined1)iVar7;
      if (iVar7 != 0) {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 0;
      iVar7 = FUN_71ba2d10(*(undefined4 *)(uVar6 + iVar18),0);
      *(bool *)(iVar13 + 0x3d8) = iVar7 != 0;
      pcStack_4c = (char *)(uVar6 + 0x3d8 + iVar4);
    }
    *(undefined1 *)(iVar13 + 0x3e2) = uVar2;
    uVar9 = *(undefined4 *)(uVar6 + iVar18);
    *(undefined4 *)(uVar6 + iVar12) = uVar9;
    if (*(char *)(iVar13 + 0xec) == '\0') {
      uVar15 = 0xbf800000;
    }
    else {
      uVar15 = 0;
      iVar7 = FUN_71ba2d10(uVar9,0);
      if (iVar7 == 0) {
        uVar15 = FUN_71ba0b38(uVar9,*(undefined4 *)(uVar6 + 0x18));
      }
    }
    *(undefined4 *)(uVar6 + iVar18) = uVar15;
    *(undefined1 *)(iVar13 + 0x3dd) = 0;
    if (*pcStack_4c == '\0') {
      if (*(char *)(iVar13 + 0xec) != '\0') {
        uVar23 = 0;
        uVar5 = 0;
        if (bVar44) {
          uVar5 = FUN_71ba240c(uVar34,*(undefined4 *)(uVar6 + iVar4 * 8 + 0x388));
          uVar23 = FUN_71ba240c(uVar14,*(undefined4 *)(uVar6 + iStack_50 + 0x3b4));
        }
        uVar9 = FUN_71ba21e8(uVar23,uVar23);
        uVar15 = FUN_71ba21e8(uVar5,uVar5);
        uVar9 = FUN_71ba0b38(uVar15,uVar9);
        uVar15 = *(undefined4 *)(uVar6 + iStack_48);
        iVar7 = FUN_71ba2d50(uVar15,uVar9);
        if (iVar7 != 0) {
          uVar9 = uVar15;
        }
        *(undefined4 *)(uVar6 + iStack_48) = uVar9;
        iVar7 = FUN_71ba2d10(uVar5,0);
        if (iVar7 != 0) {
          uVar5 = uVar5 ^ 0x80000000;
        }
        uVar10 = *(uint *)(uVar6 + iStack_44 * 4);
        iVar7 = FUN_71ba2d50(uVar10,uVar5);
        if (iVar7 != 0) {
          uVar5 = uVar10;
        }
        *(uint *)(uVar6 + iStack_44 * 4) = uVar5;
        iVar7 = FUN_71ba2d10(uVar23,0);
        iVar39 = uVar6 + iVar4 * 8;
        if (iVar7 != 0) {
          uVar23 = uVar23 ^ 0x80000000;
        }
        uVar5 = *(uint *)(iVar39 + 0x420);
        iVar7 = FUN_71ba2d50(uVar5,uVar23);
        if (iVar7 != 0) {
          uVar23 = uVar5;
        }
        *(uint *)(iVar39 + 0x420) = uVar23;
        goto LAB_718d566c;
      }
LAB_718d52fc:
      if (*(char *)(iVar13 + 0x3e2) == '\0') {
        *(undefined1 *)(iVar13 + 0x3ec) = 0;
      }
    }
    else {
      iVar39 = uVar6 + iStack_50;
      uVar46 = *(undefined8 *)(uVar6 + 0x1a08);
      FUN_71ba23ec(*(undefined4 *)(uVar6 + 0x1a08),*(undefined4 *)(uVar6 + 0x1a0c),
                   *(undefined4 *)(iVar39 + 0x3d8),*(undefined4 *)(iVar39 + 0x3dc));
      uVar9 = FUN_71ba242c();
      uVar15 = *(undefined4 *)(uVar6 + 0x28);
      iVar7 = FUN_71ba2d70(uVar15,uVar9);
      if (iVar7 != 0) {
        uVar9 = 0;
        uVar20 = 0;
        if (bVar44) {
          uVar9 = FUN_71ba240c(uVar34,*(undefined4 *)(uVar6 + iVar4 * 8 + 0x388));
          uVar20 = FUN_71ba240c(uVar14,*(undefined4 *)(iVar39 + 0x3b4));
        }
        uVar20 = FUN_71ba21e8(uVar20,uVar20);
        uVar9 = FUN_71ba21e8(uVar9,uVar9);
        uVar9 = FUN_71ba0b38(uVar9,uVar20);
        uVar20 = FUN_71ba21e8(*(undefined4 *)(uVar6 + 0x2c),*(undefined4 *)(uVar6 + 0x2c));
        iVar7 = FUN_71ba2d10(uVar9,uVar20);
        if (iVar7 != 0) {
          *(undefined1 *)(iVar13 + 0x3dd) = 1;
        }
        FUN_71ba21e8(uVar15,0xc0000000);
        uVar46 = FUN_71ba1638();
      }
      *(undefined8 *)(iVar39 + 0x3d8) = uVar46;
      iVar7 = uVar6 + iVar4 * 8;
      *(undefined4 *)(iVar7 + 0x388) = uVar34;
      *(undefined4 *)(iVar7 + 0x38c) = uVar19;
      *(undefined1 *)(iVar13 + 0x3ec) = *(undefined1 *)(iVar13 + 0x3dd);
      *(undefined4 *)(uVar6 + iStack_44 * 4) = 0;
      *(undefined4 *)(iVar7 + 0x420) = 0;
      *(undefined4 *)(uVar6 + iStack_48) = 0;
LAB_718d566c:
      if (*(char *)(iVar13 + 0xec) == '\0') goto LAB_718d52fc;
    }
    iVar12 = iVar12 + 4;
    iVar18 = iVar18 + 4;
    iVar4 = iVar4 + 1;
    if (*pcStack_4c != '\0') {
      *(undefined1 *)(uVar6 + 0x1c23) = 0;
    }
    iStack_48 = iStack_48 + 4;
    iStack_44 = iStack_44 + 2;
    iStack_50 = iStack_50 + 8;
  } while (iVar4 != 5);
  FUN_718d2304();
  FUN_718d15c0();
  uVar23 = DAT_712042b4;
  piVar28 = (int *)(DAT_712042b4 + 0x1a70);
  iVar12 = *(int *)(DAT_712042b4 + 0x1bac);
  if (0 < iVar12) {
    uVar6 = iVar12 + 1;
    piVar26 = (int *)(*(int *)(DAT_712042b4 + 0x1bb4) + iVar12 * 0x24 + -0x20);
    do {
      iVar12 = *piVar26;
      bVar22 = 0;
      if (iVar12 != 0) {
        bVar22 = *(byte *)(iVar12 + 0xb);
      }
      if (iVar12 != 0 && (bVar22 & 8) != 0) goto LAB_718d5710;
      uVar6 = uVar6 - 1;
      piVar26 = piVar26 + -9;
    } while (1 < uVar6);
  }
  if ((*(int *)(uVar1 + 0x1cd8) == 0) ||
     (iVar12 = FUN_71ba2d70(*(undefined4 *)(uVar1 + 0x1ce8),0), iVar12 == 0)) {
    uVar14 = FUN_71ba21e8(*puVar35,0xc1200000);
    uVar34 = FUN_71ba0b38(*(undefined4 *)(uVar1 + 0x1d0c),uVar14);
    iVar12 = FUN_71ba2d50(uVar34,0);
    uVar14 = 0;
    if (iVar12 != 0) {
      uVar14 = uVar34;
    }
    *(undefined4 *)(uVar1 + 0x1d0c) = uVar14;
  }
  else {
LAB_718d5710:
    uVar14 = FUN_71ba21e8(*puVar35,0x40c00000);
    uVar34 = FUN_71ba0b38(uVar14,*(undefined4 *)(uVar1 + 0x1d0c));
    iVar12 = FUN_71ba2d10(uVar34,0x3f800000);
    uVar14 = 0x3f800000;
    if (iVar12 != 0) {
      uVar14 = uVar34;
    }
    *(undefined4 *)(uVar1 + 0x1d0c) = uVar14;
  }
  *(undefined4 *)(uVar1 + 0x2fe4) = 0xffffffff;
  *(undefined4 *)(uVar1 + 0x2fe8) = 0xffffffff;
  *(undefined4 *)(uVar1 + 0x2fec) = 0xffffffff;
  *(undefined4 *)(uVar1 + 0x1d10) = 0;
  *(undefined4 *)(uVar1 + 0x2d58) = 0x3f800000;
  *(undefined4 *)(uVar1 + 0x2d5c) = 0x3f800000;
  iVar13 = *(int *)(uVar23 + 0x1a80);
  iVar12 = 0;
  if (iVar13 != 0) {
    puVar25 = (undefined4 *)(uVar23 + 0x1a8c);
    uVar19 = *(undefined4 *)(uVar23 + 0xe4);
    uVar34 = *(undefined4 *)(uVar23 + 0xe8);
    uVar14 = FUN_71ba240c(*puVar25,*(undefined4 *)(uVar23 + 0x18));
    *puVar25 = uVar14;
    iVar12 = FUN_71ba2d50(uVar19,0xc87a0000);
    if ((iVar12 == 0) || (iVar12 = FUN_71ba2d50(uVar34,0xc87a0000), iVar12 == 0)) {
LAB_718d5888:
      iVar18 = FUN_71ba2d30(uVar14,0);
      iVar12 = iVar13;
      if (iVar18 == 0) goto LAB_718d58ac;
    }
    else {
      uVar9 = *(undefined4 *)(uVar23 + 0x1a88);
      uVar19 = FUN_71ba240c(uVar19,*(undefined4 *)(uVar23 + 0x1a84));
      uVar34 = FUN_71ba240c(uVar34,uVar9);
      uVar34 = FUN_71ba21e8(uVar34,uVar34);
      uVar19 = FUN_71ba21e8(uVar19,uVar19);
      uVar34 = FUN_71ba0b38(uVar19,uVar34);
      uVar19 = FUN_71ba21e8(*(undefined4 *)(uVar23 + 0x30),*(undefined4 *)(uVar23 + 0x30));
      iVar12 = FUN_71ba2d70(uVar34,uVar19);
      if (iVar12 == 0) goto LAB_718d5888;
    }
    iVar12 = 0;
    *puVar25 = 0;
    *(undefined4 *)(uVar23 + 0x1a80) = 0;
  }
LAB_718d58ac:
  uVar14 = *(undefined4 *)(uVar23 + 0xf4);
  iVar13 = FUN_71ba2cf0(uVar14,0);
  if ((iVar13 == 0) || (iVar13 = FUN_71ba2cf0(*(undefined4 *)(uVar23 + 0xf8),0), iVar13 == 0)) {
    bVar44 = *(int *)(uVar23 + 0x1aa4) != 0;
    cVar3 = '\0';
    if (bVar44) {
      cVar3 = *(char *)(uVar23 + 0x1ab6);
    }
    if (!bVar44 || cVar3 == '\0') {
      bVar44 = *(int *)(uVar23 + 0x1a94) != 0;
      cVar3 = '\0';
      if (bVar44) {
        cVar3 = *(char *)(uVar23 + 0x1a9a);
      }
      if (!bVar44 || cVar3 == '\0') {
        iVar13 = iVar12;
        if (iVar12 == 0) {
          iVar13 = *piVar28;
        }
        if ((iVar12 != 0 || iVar13 != 0) && (*(char *)(iVar13 + 0x8d) == '\0')) {
          iVar18 = FUN_71ba2cf0(uVar14,0);
          if (iVar18 == 0) {
            if (*(char *)(uVar23 + 0xfc) == '\0') {
              if (*(char *)(uVar23 + 0xfd) == '\0') {
                if (iVar12 != iVar13) {
                  *(int *)(uVar23 + 0x1a80) = iVar13;
                  *(undefined4 *)(uVar23 + 0x1a8c) = 0x40000000;
                  *(undefined4 *)(uVar23 + 0x1a84) = *(undefined4 *)(uVar23 + 0xe4);
                  *(undefined4 *)(uVar23 + 0x1a88) = *(undefined4 *)(uVar23 + 0xe8);
                }
                while ((uVar6 = *(uint *)(iVar13 + 8), (uVar6 & 0x1000000) != 0 &&
                       (((uVar6 & 0x210) == 0x10 ||
                        (iVar12 = FUN_71ba2cf0(*(undefined4 *)(iVar13 + 100),0), iVar12 != 0))))) {
                  iVar13 = *(int *)(iVar13 + 0x31c);
                }
                if ((uVar6 & 0x210) == 0) {
                  uVar34 = *(undefined4 *)(iVar13 + 0x1f8);
                  uVar9 = *(undefined4 *)(iVar13 + 0x200);
                  uVar19 = FUN_718eeef4(iVar13);
                  *(undefined4 *)(iVar13 + 0x7c) = 0;
                  *(undefined4 *)(iVar13 + 0x74) = 0;
                  uVar34 = FUN_71ba240c(uVar9,uVar34);
                  uVar34 = FUN_71ba21e8(uVar34,0x3f2b851f);
                  uVar19 = FUN_71ba21e8(uVar19,0x40a00000);
                  iVar12 = FUN_71ba2d10(uVar19,uVar34);
                  if (iVar12 != 0) {
                    uVar34 = uVar19;
                  }
                  FUN_71ba17bc(uVar34);
                  uVar34 = FUN_71ba1b94();
                  uVar14 = FUN_71ba21e8(uVar14,uVar34);
                  uVar14 = FUN_71ba240c(*(undefined4 *)(iVar13 + 0x5c),uVar14);
                  *(undefined4 *)(iVar13 + 0x6c) = uVar14;
                }
              }
            }
            else if (*(char *)(uVar23 + 0xa0) != '\0') {
              if (iVar12 != iVar13) {
                *(int *)(uVar23 + 0x1a80) = iVar13;
                *(undefined4 *)(uVar23 + 0x1a8c) = 0x40000000;
                *(undefined4 *)(uVar23 + 0x1a84) = *(undefined4 *)(uVar23 + 0xe4);
                *(undefined4 *)(uVar23 + 0x1a88) = *(undefined4 *)(uVar23 + 0xe8);
              }
              uVar14 = FUN_71ba21e8(uVar14,0x3dcccccd);
              uVar19 = *(undefined4 *)(iVar13 + 0x280);
              uVar34 = FUN_71ba0b38(uVar14,uVar19);
              iVar12 = FUN_71ba2d70(uVar34,0x40200000);
              uVar14 = uVar34;
              if (iVar12 != 0) {
                uVar14 = 0x40200000;
              }
              iVar12 = FUN_71ba2d10(uVar34,0x3f000000);
              if (iVar12 != 0) {
                uVar14 = 0x3f000000;
              }
              *(undefined4 *)(iVar13 + 0x280) = uVar14;
              if ((*(byte *)(iVar13 + 0xb) & 1) == 0) {
                uVar14 = FUN_71ba13e0(uVar14,uVar19);
                uVar34 = FUN_71ba240c(0x3f800000,uVar14);
                uVar29 = *(undefined4 *)(iVar13 + 0x18);
                uVar19 = *(undefined4 *)(iVar13 + 0xc);
                uVar9 = *(undefined4 *)(iVar13 + 0x14);
                uVar36 = *(undefined4 *)(iVar13 + 0x10);
                uVar15 = FUN_71ba21e8(uVar34,uVar29);
                uVar40 = *(undefined4 *)(uVar23 + 0xe4);
                uVar20 = FUN_71ba240c(*(undefined4 *)(uVar23 + 0xe8),uVar36);
                uVar15 = FUN_71ba21e8(uVar15,uVar20);
                uVar15 = FUN_71ba13e0(uVar15,uVar29);
                uStack_34 = FUN_71ba0b38(uVar36,uVar15);
                uVar34 = FUN_71ba21e8(uVar34,uVar9);
                uVar15 = FUN_71ba240c(uVar40,uVar19);
                uVar34 = FUN_71ba21e8(uVar34,uVar15);
                uVar34 = FUN_71ba13e0(uVar34,uVar9);
                uStack_38 = FUN_71ba0b38(uVar19,uVar34);
                FUN_718d18f4(iVar13,&uStack_38,0);
                uVar15 = *(undefined4 *)(iVar13 + 0x14);
                uVar9 = *(undefined4 *)(iVar13 + 0x1c);
                uVar19 = *(undefined4 *)(iVar13 + 0x20);
                FUN_71ba21e8(uVar14,*(undefined4 *)(iVar13 + 0x18));
                FUN_71ba17bc();
                uVar34 = FUN_71ba1b94();
                *(undefined4 *)(iVar13 + 0x18) = uVar34;
                FUN_71ba21e8(uVar14,uVar15);
                FUN_71ba17bc();
                uVar34 = FUN_71ba1b94();
                *(undefined4 *)(iVar13 + 0x14) = uVar34;
                FUN_71ba21e8(uVar14,uVar9);
                FUN_71ba17bc();
                uVar34 = FUN_71ba1b94();
                *(undefined4 *)(iVar13 + 0x1c) = uVar34;
                FUN_71ba21e8(uVar14,uVar19);
                FUN_71ba17bc();
                uVar14 = FUN_71ba1b94();
                *(undefined4 *)(iVar13 + 0x20) = uVar14;
              }
              goto LAB_718d5924;
            }
          }
          uVar14 = *(undefined4 *)(uVar23 + 0xf8);
          uVar6 = FUN_71ba2cf0(uVar14,0);
          bVar44 = uVar6 == 0;
          if (bVar44) {
            uVar6 = (uint)*(byte *)(uVar23 + 0xfd);
          }
          if (!bVar44 || uVar6 != 0) {
            uVar14 = *(undefined4 *)(uVar23 + 0xf4);
            iVar12 = FUN_71ba2cf0(uVar14,0);
            if ((iVar12 != 0) || (*(char *)(uVar23 + 0xfd) == '\0')) goto LAB_718d5924;
          }
          uVar6 = DAT_712042b4;
          if (*(char *)(uVar23 + 0xfc) == '\0') {
            if (*(int *)(DAT_712042b4 + 0x1a80) != iVar13) {
              puVar25 = (undefined4 *)(DAT_712042b4 + 0xe4);
              *(int *)(DAT_712042b4 + 0x1a80) = iVar13;
              *(undefined4 *)(uVar6 + 0x1a8c) = 0x40000000;
              *(undefined4 *)(uVar6 + 0x1a84) = *puVar25;
              *(undefined4 *)(uVar6 + 0x1a88) = *(undefined4 *)(uVar6 + 0xe8);
            }
            while ((uVar23 = *(uint *)(iVar13 + 8), (uVar23 & 0x1000000) != 0 &&
                   (((uVar23 & 0x210) == 0x10 ||
                    (iVar12 = FUN_71ba2cf0(*(undefined4 *)(iVar13 + 0x60),0), iVar12 != 0))))) {
              iVar13 = *(int *)(iVar13 + 0x31c);
            }
            if ((uVar23 & 0x210) == 0) {
              uVar34 = *(undefined4 *)(iVar13 + 500);
              uVar9 = *(undefined4 *)(iVar13 + 0x1fc);
              uVar19 = FUN_718eeef4(iVar13);
              *(undefined4 *)(iVar13 + 0x78) = 0;
              *(undefined4 *)(iVar13 + 0x70) = 0;
              uVar34 = FUN_71ba240c(uVar9,uVar34);
              uVar34 = FUN_71ba21e8(uVar34,0x3f2b851f);
              uVar19 = FUN_71ba0b38(uVar19,uVar19);
              iVar12 = FUN_71ba2d10(uVar19,uVar34);
              if (iVar12 != 0) {
                uVar34 = uVar19;
              }
              FUN_71ba17bc(uVar34);
              uVar34 = FUN_71ba1b94();
              uVar14 = FUN_71ba21e8(uVar14,uVar34);
              uVar14 = FUN_71ba240c(*(undefined4 *)(iVar13 + 0x58),uVar14);
              *(undefined4 *)(iVar13 + 0x68) = uVar14;
            }
          }
        }
      }
    }
  }
LAB_718d5924:
  uVar23 = DAT_712042b4;
  piVar28 = (int *)(DAT_712042b4 + 0x1aa4);
  iVar12 = 0;
  iVar13 = *(int *)(DAT_712042b4 + 0x1bd0);
  if ((iVar13 != 0) && (*(char *)(iVar13 + 0x8a) != '\0')) {
    bVar22 = *(byte *)(iVar13 + 10);
    bVar44 = (bVar22 & 4) == 0;
    if (bVar44) {
      bVar22 = *(byte *)(DAT_712042b4 + 0xfc);
    }
    if ((bVar44 && bVar22 == 0) && (-1 < *(int *)(DAT_712042b4 + 0x34))) {
      iVar12 = FUN_718eb140();
    }
  }
  *(char *)(uVar23 + 0x1d08) = (char)iVar12;
  if ((iVar12 == 0) || (*piVar28 != 0)) {
    iVar13 = *(int *)(uVar23 + 0x1cf4);
  }
  else {
    *(int *)(uVar23 + 0x1cf4) = iVar13;
    *(undefined4 *)(uVar23 + 0x1d00) = 0x7fffffff;
    bVar44 = *(int *)(uVar23 + 0x1bd4) != 0;
    iVar12 = 0;
    if (bVar44) {
      iVar12 = *(int *)(uVar23 + 0x1c1c);
    }
    if (bVar44 && iVar12 != 0x7fffffff) {
      iVar18 = -1;
      if (*(char *)(uVar23 + 0xfd) == '\0') {
        iVar18 = 1;
      }
      iVar12 = iVar12 + iVar18 + 1;
    }
    else {
      iVar12 = (int)-*(char *)(uVar23 + 0xfd);
    }
    *(int *)(uVar23 + 0x1d04) = iVar12;
  }
  *(undefined4 *)(uVar23 + 0x1cf0) = 0;
  *(undefined4 *)(uVar23 + 0x1cf8) = 0x7fffffff;
  *(undefined4 *)(uVar23 + 0x1cfc) = 0x7fffffff;
  if (iVar13 != 0) {
    *(int *)(uVar23 + 0x1cf0) = iVar13;
    if ((*(int *)(uVar23 + 0x1d00) != 0x7fffffff) && (*(int *)(iVar13 + 0x1a8) != -1)) {
      FUN_71ba2da8(*(int *)(iVar13 + 0x1a8) + 1 + *(int *)(uVar23 + 0x1d00));
      *(undefined4 *)(uVar23 + 0x1cf8) = extraout_r1_00;
    }
    if ((*(int *)(uVar23 + 0x1d04) != 0x7fffffff) && (*(int *)(iVar13 + 0x1ac) != -1)) {
      FUN_71ba2da8(*(int *)(iVar13 + 0x1ac) + 1 + *(int *)(uVar23 + 0x1d04));
      *(undefined4 *)(uVar23 + 0x1cfc) = extraout_r1_01;
    }
    *(undefined4 *)(uVar23 + 0x1cf4) = 0;
    *(undefined4 *)(uVar23 + 0x1d00) = 0x7fffffff;
    *(undefined4 *)(uVar23 + 0x1d04) = 0x7fffffff;
  }
  *(undefined4 *)(uVar23 + 0x1c1c) = 0x7fffffff;
  if (*(char *)(uVar1 + 0x1a1f) == '\0') {
    uVar14 = *(undefined4 *)(uVar1 + 0xb8);
    iVar12 = FUN_71ba2d10(uVar14,0);
    if (iVar12 == 0) {
      uVar34 = FUN_71ba242c(*(undefined4 *)puVar41,*(undefined4 *)(uVar1 + 0x1a0c));
      uStack_7c = FUN_71ba240c(uVar34,uVar14);
    }
  }
  if (*(int *)(uVar1 + 0x1a2c) != 0) {
    iVar12 = 0;
    do {
      iVar13 = *(int *)(*(int *)(uVar1 + 0x1a34) + iVar12 * 4);
      cVar3 = *(char *)(iVar13 + 0x8a);
      *(char *)(iVar13 + 0x8b) = cVar3;
      bVar44 = cVar3 == '\0';
      *(undefined2 *)(iVar13 + 0x96) = 0;
      if (bVar44) {
        cVar3 = *(char *)(iVar13 + 0x360);
      }
      *(undefined1 *)(iVar13 + 0x8c) = 0;
      *(undefined1 *)(iVar13 + 0x8a) = 0;
      if ((bVar44 && cVar3 == '\0') &&
         (iVar18 = FUN_71ba2d10(*(undefined4 *)(iVar13 + 0x260),uStack_7c), iVar18 != 0)) {
        FUN_718ce740(iVar13);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 != *(int *)(uVar1 + 0x1a2c));
  }
  iVar12 = *(int *)(uVar1 + 0x1dd0);
  if (0 < iVar12) {
    iVar13 = 0;
    iVar18 = 0;
    iVar4 = 0;
    do {
      uVar14 = *(undefined4 *)(*(int *)(uVar1 + 0x1dd8) + iVar18);
      iVar7 = FUN_71ba2d50(uVar14,0);
      if ((iVar7 != 0) && (iVar7 = FUN_71ba2d10(uVar14,uStack_7c), iVar7 != 0)) {
        FUN_7191327c(*(int *)(uVar1 + 0x1db0) + iVar13);
        iVar12 = *(int *)(uVar1 + 0x1dd0);
      }
      iVar4 = iVar4 + 1;
      iVar13 = iVar13 + 0x228;
      iVar18 = iVar18 + 4;
    } while (iVar4 < iVar12);
  }
  uVar23 = DAT_712042b4;
  if (*(char *)(uVar1 + 0x1a1f) != '\0') {
    iVar12 = *(int *)(DAT_712042b4 + 0x1b9c);
    if (iVar12 != 0) {
      iVar13 = *(int *)(DAT_712042b4 + 0x370);
      *(undefined4 *)(DAT_712042b4 + 0x1b94) = 0;
      *(undefined4 *)(uVar23 + 0x1b98) = 0;
      *(int *)(uVar23 + 0x370) = iVar13 + -1;
      (*DAT_70105bb0)(iVar12,DAT_712042bc);
      *(undefined4 *)(uVar23 + 0x1b9c) = 0;
    }
    iVar12 = *(int *)(uVar23 + 0x1ba8);
    if (iVar12 != 0) {
      *(undefined4 *)(uVar23 + 0x1ba0) = 0;
      *(undefined4 *)(uVar23 + 0x1ba4) = 0;
      if (DAT_712042b4 != 0) {
        *(int *)(DAT_712042b4 + 0x370) = *(int *)(DAT_712042b4 + 0x370) + -1;
      }
      (*DAT_70105bb0)(iVar12,DAT_712042bc);
      *(undefined4 *)(uVar23 + 0x1ba8) = 0;
    }
    FUN_719133e4();
  }
  *(undefined1 *)(uVar1 + 0x1a1f) = 0;
  if ((*(int *)(uVar1 + 0x1bd0) != 0) && (*(char *)(*(int *)(uVar1 + 0x1bd0) + 0x8b) == '\0')) {
    FUN_718da434(0,0);
  }
  if (0x7fffffff < *(uint *)(uVar1 + 0x1a54)) {
    if (DAT_712042b4 != 0) {
      *(int *)(DAT_712042b4 + 0x370) = *(int *)(DAT_712042b4 + 0x370) + 1;
    }
    uVar14 = (*DAT_70105bac)(0,DAT_712042bc);
    if (*(int *)(uVar1 + 0x1a58) != 0) {
      imp___aeabi_memcpy(uVar14,*(int *)(uVar1 + 0x1a58),*(int *)(uVar1 + 0x1a50) << 2);
      iVar12 = *(int *)(uVar1 + 0x1a58);
      uVar23 = extraout_r1_02;
      if (iVar12 != 0) {
        uVar23 = DAT_712042b4;
      }
      if (iVar12 != 0 && uVar23 != 0) {
        *(int *)(uVar23 + 0x370) = *(int *)(uVar23 + 0x370) + -1;
      }
      (*DAT_70105bb0)(iVar12,DAT_712042bc);
    }
    *(undefined4 *)(uVar1 + 0x1a54) = 0;
    *(undefined4 *)(uVar1 + 0x1a58) = uVar14;
  }
  *(undefined4 *)(uVar1 + 0x1a50) = 0;
  if (0x7fffffff < *(uint *)(uVar1 + 0x1bbc)) {
    if (DAT_712042b4 != 0) {
      *(int *)(DAT_712042b4 + 0x370) = *(int *)(DAT_712042b4 + 0x370) + 1;
    }
    uVar14 = (*DAT_70105bac)(0,DAT_712042bc);
    if (*(int *)(uVar1 + 0x1bc0) != 0) {
      imp___aeabi_memcpy(uVar14,*(int *)(uVar1 + 0x1bc0),*(int *)(uVar1 + 0x1bb8) * 0x24);
      iVar12 = *(int *)(uVar1 + 0x1bc0);
      uVar23 = extraout_r1_03;
      if (iVar12 != 0) {
        uVar23 = DAT_712042b4;
      }
      if (iVar12 != 0 && uVar23 != 0) {
        *(int *)(uVar23 + 0x370) = *(int *)(uVar23 + 0x370) + -1;
      }
      (*DAT_70105bb0)(iVar12,DAT_712042bc);
    }
    *(undefined4 *)(uVar1 + 0x1bbc) = 0;
    *(undefined4 *)(uVar1 + 0x1bc0) = uVar14;
  }
  *(undefined4 *)(uVar1 + 0x1bb8) = 0;
  if (*(int *)(uVar1 + 0x1b98) < 0) {
    if (DAT_712042b4 != 0) {
      *(int *)(DAT_712042b4 + 0x370) = *(int *)(DAT_712042b4 + 0x370) + 1;
    }
    uVar14 = (*DAT_70105bac)(0,DAT_712042bc);
    if (*(int *)(uVar1 + 0x1b9c) != 0) {
      imp___aeabi_memcpy(uVar14,*(int *)(uVar1 + 0x1b9c),*(int *)(uVar1 + 0x1b94) << 2);
      iVar12 = *(int *)(uVar1 + 0x1b9c);
      uVar23 = extraout_r1_04;
      if (iVar12 != 0) {
        uVar23 = DAT_712042b4;
      }
      if (iVar12 != 0 && uVar23 != 0) {
        *(int *)(uVar23 + 0x370) = *(int *)(uVar23 + 0x370) + -1;
      }
      (*DAT_70105bb0)(iVar12,DAT_712042bc);
    }
    *(undefined4 *)(uVar1 + 0x1b94) = 0;
    *(undefined4 *)(uVar1 + 0x1b98) = 0;
    *(undefined4 *)(uVar1 + 0x1b9c) = uVar14;
  }
  else {
    iVar12 = 0;
    *(undefined4 *)(uVar1 + 0x1b94) = 0;
    if (*(int *)(uVar1 + 0x1b98) != 0) {
      iVar13 = *(int *)(uVar1 + 0x1b9c);
      goto LAB_718d6020;
    }
  }
  if (DAT_712042b4 != 0) {
    *(int *)(DAT_712042b4 + 0x370) = *(int *)(DAT_712042b4 + 0x370) + 1;
  }
  iVar13 = (*DAT_70105bac)(0x20,DAT_712042bc);
  if (*(int *)(uVar1 + 0x1b9c) != 0) {
    imp___aeabi_memcpy(iVar13,*(int *)(uVar1 + 0x1b9c),*(int *)(uVar1 + 0x1b94) << 2);
    iVar12 = *(int *)(uVar1 + 0x1b9c);
    uVar23 = extraout_r1_05;
    if (iVar12 != 0) {
      uVar23 = DAT_712042b4;
    }
    if (iVar12 != 0 && uVar23 != 0) {
      *(int *)(uVar23 + 0x370) = *(int *)(uVar23 + 0x370) + -1;
    }
    (*DAT_70105bb0)(iVar12,DAT_712042bc);
  }
  *(int *)(uVar1 + 0x1b9c) = iVar13;
  *(undefined4 *)(uVar1 + 0x1b98) = 8;
  iVar12 = *(int *)(uVar1 + 0x1b94);
LAB_718d6020:
  *(undefined4 *)(iVar13 + iVar12 * 4) = 0;
  *(int *)(uVar1 + 0x1b94) = *(int *)(uVar1 + 0x1b94) + 1;
  if (0x7fffffff < *(uint *)(uVar1 + 0x1ba4)) {
    if (DAT_712042b4 != 0) {
      *(int *)(DAT_712042b4 + 0x370) = *(int *)(DAT_712042b4 + 0x370) + 1;
    }
    uVar14 = (*DAT_70105bac)(0,DAT_712042bc);
    if (*(int *)(uVar1 + 0x1ba8) != 0) {
      imp___aeabi_memcpy(uVar14,*(int *)(uVar1 + 0x1ba8),*(int *)(uVar1 + 0x1ba0) * 0x30);
      iVar12 = *(int *)(uVar1 + 0x1ba8);
      uVar23 = extraout_r1_06;
      if (iVar12 != 0) {
        uVar23 = DAT_712042b4;
      }
      if (iVar12 != 0 && uVar23 != 0) {
        *(int *)(uVar23 + 0x370) = *(int *)(uVar23 + 0x370) + -1;
      }
      (*DAT_70105bb0)(iVar12,DAT_712042bc);
    }
    *(undefined4 *)(uVar1 + 0x1ba4) = 0;
    *(undefined4 *)(uVar1 + 0x1ba8) = uVar14;
  }
  *(undefined4 *)(uVar1 + 0x1ba0) = 0;
  iVar12 = *(int *)(DAT_712042b4 + 0x1bac);
  if (iVar12 != 0) {
    iVar13 = 0;
    if ((*(int *)(uVar1 + 0x1bd0) == 0) || (iVar12 < 1)) {
LAB_718d6184:
      if (iVar13 < iVar12) {
        FUN_718f0650(iVar13,0);
      }
    }
    else {
      piVar28 = (int *)(*(int *)(DAT_712042b4 + 0x1bb4) + 4);
      iVar18 = iVar12;
      do {
        iVar4 = *(int *)(*(int *)(DAT_712042b4 + 0x1bb4) + iVar13 * 0x24 + 4);
        if ((iVar4 != 0) && (iVar7 = iVar18, piVar26 = piVar28, (*(byte *)(iVar4 + 0xb) & 1) == 0))
        {
          while ((*piVar26 == 0 ||
                 (*(int *)(*piVar26 + 800) != *(int *)(*(int *)(uVar1 + 0x1bd0) + 800)))) {
            iVar7 = iVar7 + -1;
            piVar26 = piVar26 + 9;
            if (iVar7 == 0) goto LAB_718d6184;
          }
        }
        iVar13 = iVar13 + 1;
        piVar28 = piVar28 + 9;
        iVar18 = iVar18 + -1;
      } while (iVar13 != iVar12);
    }
  }
  uVar23 = DAT_712042b4;
  pcVar24 = (char *)(DAT_712042b4 + 0x2de4);
  *(undefined4 *)(DAT_712042b4 + 0x2de8) = 0;
  if (*pcVar24 != '\0') {
    *(undefined4 *)(uVar23 + 0x1d10) = 7;
    iVar12 = *(int *)(uVar23 + 0x1a94);
    if ((-1 < *(int *)(uVar23 + 0x6c)) &&
       (iVar13 = FUN_718eb140(*(int *)(uVar23 + 0x6c),1), iVar13 != 0)) {
      *pcVar24 = '\0';
    }
    iVar13 = FUN_71ba2cf0(*(undefined4 *)(uVar23 + 0x3f4),0);
    if (iVar13 == 0) {
      uVar6 = (uint)(iVar12 == 0);
    }
    else if (iVar12 == 0) {
      uVar6 = 1;
    }
    else {
      uVar6 = 0;
      *(int *)(uVar23 + 0x2de8) = iVar12;
      *pcVar24 = '\0';
    }
    *(undefined4 *)(uVar23 + 0x1b44) = 0x3f19999a;
    *(uint *)(uVar23 + 0x1af0) = *(uint *)(uVar23 + 0x1af0) | 0x40;
    FUN_718efd98(0,0);
    FUN_71914f14(s_HoveredId__0x_08X_70065d4e,iVar12);
    FUN_71914f14(s_Press_ESC_to_abort_picking__7006134b);
    FUN_719150ec(DAT_712042b4 + uVar6 * 0x10 + 0x15dc,s_Click_to_break_in_debugger__70063e6b);
    FUN_718e9c80();
    uVar23 = DAT_712042b4;
  }
  iVar13 = 0;
  *(undefined1 *)(uVar1 + 0x1a1d) = 1;
  *(undefined4 *)(uVar23 + 0x1b10) = 0x43c80000;
  *(undefined4 *)(uVar23 + 0x1b14) = 0x43c80000;
  *(undefined4 *)(uVar23 + 0x1af8) = 4;
  *(uint *)(uVar23 + 0x1af0) = *(uint *)(uVar23 + 0x1af0) | 2;
  FUN_718da658(s_Debug__Default_7006f72c,0,0);
  iVar12 = *(int *)(uVar1 + 0x2da0);
  if (0 < iVar12) {
    iVar18 = 0;
    do {
      iVar4 = *(int *)(uVar1 + 0x2da8) + iVar13;
      if (*(int *)(iVar4 + 4) == 1) {
        (**(code **)(iVar4 + 0xc))(uVar1);
        iVar12 = *(int *)(uVar1 + 0x2da0);
      }
      iVar18 = iVar18 + 1;
      iVar13 = iVar13 + 0x14;
    } while (iVar18 < iVar12);
  }
  return;
}


// =========================================================================
// Function: FUN_718da434
// Entry: 0x718da434 | Size: 404 bytes
// =========================================================================

void FUN_718da434(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint unaff_r4;
  bool bVar7;
  
  iVar1 = DAT_712042b4;
  iVar6 = *(int *)(DAT_712042b4 + 0x1a38) + -1;
  iVar4 = iVar6;
  if (param_1 != 0) {
    do {
      unaff_r4 = iVar4 + 1;
      if ((int)unaff_r4 < 1) {
        if (iVar6 < 0) goto LAB_718da504;
        goto LAB_718da49c;
      }
      unaff_r4 = *(uint *)(*(int *)(DAT_712042b4 + 0x1a40) + iVar4 * 4);
      iVar4 = iVar4 + -1;
    } while (unaff_r4 != param_1);
  }
  iVar6 = iVar4;
  if (-1 < iVar6) {
LAB_718da49c:
    do {
      uVar5 = *(uint *)(*(int *)(DAT_712042b4 + 0x1a40) + iVar6 * 4);
      if (uVar5 != param_2) {
        unaff_r4 = (uint)*(byte *)(uVar5 + 0x8b);
      }
      if (((uVar5 != param_2 && unaff_r4 != 0) &&
          (unaff_r4 = *(uint *)(uVar5 + 8), (unaff_r4 & 0x1000000) == 0)) &&
         (unaff_r4 = unaff_r4 & 0x40200, unaff_r4 != 0x40200)) {
        uVar2 = *(uint *)(uVar5 + 0x32c);
        if (uVar2 != 0) {
          param_2 = (uint)*(byte *)(uVar2 + 0x8b);
        }
        if (uVar2 == 0 || param_2 == 0) {
          uVar2 = uVar5;
        }
        FUN_718d12b4(uVar2);
        return;
      }
      bVar7 = 0 < iVar6;
      iVar6 = iVar6 + -1;
    } while (bVar7);
  }
LAB_718da504:
  if (*(int *)(DAT_712042b4 + 0x1bd0) != 0) {
    *(undefined1 *)(DAT_712042b4 + 0x1c25) = 0;
    *(undefined1 *)(iVar1 + 0x1c20) = 0;
    *(undefined4 *)(iVar1 + 0x1bd0) = 0;
    *(undefined4 *)(iVar1 + 0x1bd4) = 0;
    *(undefined4 *)(iVar1 + 0x1bd8) = 0;
    *(undefined4 *)(iVar1 + 0x1c18) = 0;
  }
  if (0 < *(int *)(iVar1 + 0x1bac)) {
    FUN_718f0650(0,0);
  }
  iVar6 = DAT_712042b4;
  if (((*(int *)(iVar1 + 0x1aa4) != 0) && (*(int *)(iVar1 + 0x1ad0) != 0)) &&
     (*(int *)(*(int *)(iVar1 + 0x1ad0) + 800) != 0)) {
    if (*(char *)(iVar1 + 0x1ab2) != '\0') {
      return;
    }
    piVar3 = (int *)(DAT_712042b4 + 0x1aa4);
    bVar7 = *piVar3 != 0;
    *(bool *)(DAT_712042b4 + 0x1ab0) = bVar7;
    if (bVar7) {
      *(undefined2 *)(iVar6 + 0x1ab3) = 0;
      *(undefined4 *)(iVar6 + 0x1aac) = 0;
    }
    *(undefined4 *)(iVar6 + 0x1ad0) = 0;
    *(undefined2 *)(iVar6 + 0x1ab1) = 0;
    *piVar3 = 0;
    *(undefined2 *)(iVar6 + 0x1ab5) = 0;
    *(undefined4 *)(iVar6 + 0x1ab8) = 0;
    *(undefined4 *)(iVar6 + 0x1abc) = 0;
    *(undefined4 *)(iVar6 + 0x1ac0) = 0;
    *(undefined4 *)(iVar6 + 0x1ac4) = 0;
  }
  return;
}


// =========================================================================
// Function: FUN_718da658
// Entry: 0x718da658 | Size: 26136 bytes
// =========================================================================
// Decompile failed: Exception while decompiling 718da658: process: timeout


// =========================================================================
// Function: FUN_718e7464
// Entry: 0x718e7464 | Size: 144 bytes
// =========================================================================

void FUN_718e7464(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x1a2c) != 0) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 * 4;
      iVar2 = iVar2 + 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1a34) + iVar1) + 0x284) = 0xffffffff;
    } while (iVar2 != *(int *)(param_1 + 0x1a2c));
  }
  iVar2 = *(int *)(param_1 + 0x2d90);
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x2d88) = 0;
    *(undefined4 *)(param_1 + 0x2d8c) = 0;
    if (DAT_712042b4 != 0) {
      *(int *)(DAT_712042b4 + 0x370) = *(int *)(DAT_712042b4 + 0x370) + -1;
    }
    (*DAT_70105bb0)(iVar2,DAT_712042bc);
    *(undefined4 *)(param_1 + 0x2d90) = 0;
  }
  return;
}


// =========================================================================
// Function: FUN_718e756c
// Entry: 0x718e756c | Size: 228 bytes
// =========================================================================

void FUN_718e756c(undefined4 param_1,undefined4 param_2,byte *param_3)

{
  byte *pbVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  
  if (*param_3 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0xffffffff;
    uVar4 = (uint)*param_3;
    pbVar1 = param_3;
    do {
      uVar5 = (uint)pbVar1[1];
      if ((uVar4 == 0x23 && uVar5 == 0x23) && (pbVar1[2] == 0x23)) {
        uVar3 = 0xffffffff;
      }
      uVar3 = *(uint *)(&DAT_70086edc + (uVar3 & 0xff ^ uVar4) * 4) ^ uVar3 >> 8;
      uVar4 = uVar5;
      pbVar1 = pbVar1 + 1;
    } while (uVar5 != 0);
  }
  if (*(int *)(DAT_712042b4 + 0x2d90) != 0) {
    puVar6 = (uint *)(*(int *)(DAT_712042b4 + 0x2d90) + 4);
    puVar2 = puVar6;
    do {
      uVar4 = *puVar2;
      if ((uVar4 ^ uVar3) == 0xffffffff) goto LAB_718e7630;
      puVar2 = (uint *)((int)puVar2 + puVar2[-1]);
    } while (puVar2 != (uint *)((int)puVar6 + *(int *)(DAT_712042b4 + 0x2d88)));
  }
  puVar2 = (uint *)FUN_718f2900(param_3);
  uVar4 = *puVar2;
LAB_718e7630:
  *puVar2 = uVar4;
  *(undefined2 *)(puVar2 + 3) = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *(undefined1 *)((int)puVar2 + 0xd) = 1;
  return;
}


// =========================================================================
// Function: FUN_718e76c4
// Entry: 0x718e76c4 | Size: 184 bytes
// =========================================================================

void FUN_718e76c4(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iStack_1c;
  int iStack_18;
  ushort auStack_14 [2];
  
  iVar1 = imp_sscanf(param_4,s_Pos__i__i_7006aeed,auStack_14,&iStack_18);
  if (iVar1 == 2) {
    *(uint *)(param_3 + 4) = (uint)auStack_14[0] | iStack_18 << 0x10;
    return;
  }
  iVar1 = imp_sscanf(param_4,s_Size__i__i_70070a25,auStack_14,&iStack_18);
  if (iVar1 == 2) {
    *(uint *)(param_3 + 8) = (uint)auStack_14[0] | iStack_18 << 0x10;
    return;
  }
  iVar1 = imp_sscanf(param_4,s_Collapsed__d_70064ce3,&iStack_1c);
  if (iVar1 == 1) {
    *(bool *)(param_3 + 0xc) = iStack_1c != 0;
  }
  return;
}


// =========================================================================
// Function: FUN_718e7848
// Entry: 0x718e7848 | Size: 328 bytes
// =========================================================================

void FUN_718e7848(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  
  iVar2 = DAT_712042b4;
  iVar3 = *(int *)(param_1 + 0x2d90);
  if (iVar3 != 0) {
    puVar10 = (uint *)(iVar3 + 4);
    puVar11 = (uint *)(DAT_712042b4 + 0x1a5c);
    do {
      if (*(char *)((int)puVar10 + 0xd) != '\0') {
        puVar7 = *(uint **)(iVar2 + 0x1a64);
        uVar8 = *puVar11;
        while (uVar9 = uVar8, uVar9 != 0) {
          uVar8 = uVar9 >> 1;
          if (puVar7[(uVar9 >> 1) * 2] < *puVar10) {
            puVar7 = puVar7 + (uVar9 >> 1) * 2 + 2;
            uVar8 = uVar9 + ~(uVar9 >> 1);
          }
        }
        if (((puVar7 != *(uint **)(iVar2 + 0x1a64) + *puVar11 * 2) && (*puVar7 == *puVar10)) &&
           (uVar8 = puVar7[1], uVar8 != 0)) {
          uVar4 = FUN_71ba1b94((int)*(short *)((int)puVar10 + 6));
          uVar9 = puVar10[1];
          *(undefined4 *)(uVar8 + 0x10) = uVar4;
          uVar5 = FUN_71ba1b94((int)(short)uVar9);
          *(uint *)(uVar8 + 0xc) = uVar5;
          uVar1 = puVar10[2];
          uVar9 = (uint)(short)uVar1;
          if (0 < (int)uVar9) {
            uVar9 = (uint)*(short *)((int)puVar10 + 10);
            uVar5 = uVar9;
          }
          if (0 < (int)uVar9) {
            uVar4 = FUN_71ba1e0c(uVar5 & 0xffff);
            *(undefined4 *)(uVar8 + 0x20) = uVar4;
            uVar6 = FUN_71ba1e0c((short)uVar1);
            *(undefined4 *)(uVar8 + 0x14) = uVar6;
            *(undefined4 *)(uVar8 + 0x18) = uVar4;
            *(undefined4 *)(uVar8 + 0x1c) = uVar6;
          }
          *(char *)(uVar8 + 0x8d) = (char)puVar10[3];
        }
        *(undefined1 *)((int)puVar10 + 0xd) = 0;
        iVar3 = *(int *)(param_1 + 0x2d90);
      }
      puVar10 = (uint *)((int)puVar10 + puVar10[-1]);
    } while (puVar10 != (uint *)(iVar3 + *(int *)(param_1 + 0x2d88) + 4));
  }
  return;
}


// =========================================================================
// Function: FUN_718e7a38
// Entry: 0x718e7a38 | Size: 664 bytes
// =========================================================================

void FUN_718e7a38(int param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int extraout_r1;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  
  iVar5 = *(int *)(param_1 + 0x1a2c);
  if (iVar5 != 0) {
    iVar7 = 0;
    do {
      puVar9 = *(undefined4 **)(*(int *)(param_1 + 0x1a34) + iVar7 * 4);
      if ((*(byte *)((int)puVar9 + 9) & 1) == 0) {
        if (puVar9[0xa1] == -1) {
          if (*(int *)(DAT_712042b4 + 0x2d90) != 0) {
            piVar4 = (int *)(*(int *)(DAT_712042b4 + 0x2d90) + 4);
            piVar6 = piVar4;
            do {
              if (*piVar6 == puVar9[1]) goto LAB_718e7a8c;
              piVar6 = (int *)((int)piVar6 + piVar6[-1]);
            } while (piVar6 != (int *)((int)piVar4 + *(int *)(DAT_712042b4 + 0x2d88)));
          }
LAB_718e7a74:
          piVar6 = (int *)FUN_718f2900(*puVar9);
          puVar9[0xa1] = (int)piVar6 - *(int *)(param_1 + 0x2d90);
        }
        else {
          if (*(int *)(param_1 + 0x2d90) == 0) goto LAB_718e7a74;
          piVar6 = (int *)(*(int *)(param_1 + 0x2d90) + puVar9[0xa1]);
        }
LAB_718e7a8c:
        uVar8 = puVar9[4];
        uVar2 = FUN_71ba17bc(puVar9[3]);
        iVar5 = FUN_71ba17bc(uVar8);
        piVar6[1] = (uVar2 & 0xffff) + iVar5 * 0x10000;
        uVar8 = puVar9[8];
        uVar2 = FUN_71ba17bc(puVar9[7]);
        iVar5 = FUN_71ba17bc(uVar8);
        piVar6[2] = (uVar2 & 0xffff) + iVar5 * 0x10000;
        *(undefined1 *)(piVar6 + 3) = *(undefined1 *)((int)puVar9 + 0x8d);
        iVar5 = *(int *)(param_1 + 0x1a2c);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 != iVar5);
  }
  iVar5 = *param_3 + -1;
  if (*param_3 == 0) {
    iVar5 = 0;
  }
  iVar5 = iVar5 + *(int *)(param_1 + 0x2d88) * 6;
  if (param_3[1] < iVar5) {
    if (DAT_712042b4 != 0) {
      *(int *)(DAT_712042b4 + 0x370) = *(int *)(DAT_712042b4 + 0x370) + 1;
    }
    iVar7 = (*DAT_70105bac)(iVar5,DAT_712042bc);
    if (param_3[2] != 0) {
      imp___aeabi_memcpy(iVar7,param_3[2],*param_3);
      iVar3 = param_3[2];
      iVar1 = extraout_r1;
      if (iVar3 != 0) {
        iVar1 = DAT_712042b4;
      }
      if (iVar3 != 0 && iVar1 != 0) {
        *(int *)(iVar1 + 0x370) = *(int *)(iVar1 + 0x370) + -1;
      }
      (*DAT_70105bb0)(iVar3,DAT_712042bc);
    }
    param_3[1] = iVar5;
    param_3[2] = iVar7;
  }
  if (*(int *)(param_1 + 0x2d90) != 0) {
    iVar5 = *(int *)(param_1 + 0x2d90) + 4;
    do {
      FUN_718c9b1c(param_3,s___s___s__7006342b,*param_2,iVar5 + 0x10);
      FUN_718c9b1c(param_3,s_Pos__d__d_70067733,(int)*(short *)(iVar5 + 4),
                   (int)*(short *)(iVar5 + 6));
      FUN_718c9b1c(param_3,s_Size__d__d_7006543c,(int)*(short *)(iVar5 + 8),
                   (int)*(short *)(iVar5 + 10));
      FUN_718c9b1c(param_3,s_Collapsed__d_7006773e,*(undefined1 *)(iVar5 + 0xc));
      FUN_718c9750(param_3,&DAT_7006c898,0);
      iVar5 = iVar5 + *(int *)(iVar5 + -4);
    } while (iVar5 != *(int *)(param_1 + 0x2d90) + *(int *)(param_1 + 0x2d88) + 4);
  }
  return;
}


// =========================================================================
// Function: FUN_718e7f9c
// Entry: 0x718e7f9c | Size: 392 bytes
// =========================================================================

void FUN_718e7f9c(int *param_1)

{
  int iVar1;
  int extraout_r1;
  int extraout_r1_00;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = *param_1;
  iVar5 = param_1[1];
  iVar2 = param_1[3];
  iVar3 = iVar2 + iVar4;
  if (iVar5 < iVar3) {
    iVar6 = iVar5 + iVar5 / 2;
    if (iVar5 == 0) {
      iVar6 = 8;
    }
    if (iVar6 <= iVar3) {
      iVar6 = iVar3;
    }
    if (DAT_712042b4 != 0) {
      iVar2 = *(int *)(DAT_712042b4 + 0x370);
    }
    if (DAT_712042b4 != 0) {
      *(int *)(DAT_712042b4 + 0x370) = iVar2 + 1;
    }
    iVar5 = (*DAT_70105bac)(iVar6 << 2,DAT_712042bc);
    if (param_1[2] != 0) {
      imp___aeabi_memcpy(iVar5,param_1[2],*param_1 << 2);
      iVar1 = param_1[2];
      iVar2 = extraout_r1;
      if (iVar1 != 0) {
        iVar2 = DAT_712042b4;
      }
      if (iVar1 != 0 && iVar2 != 0) {
        *(int *)(iVar2 + 0x370) = *(int *)(iVar2 + 0x370) + -1;
      }
      (*DAT_70105bb0)(iVar1,DAT_712042bc);
    }
    iVar2 = param_1[3];
    param_1[1] = iVar6;
    param_1[2] = iVar5;
  }
  *param_1 = iVar3;
  if (iVar2 != 0) {
    imp___aeabi_memcpy(param_1[2] + iVar4 * 4,param_1[5],iVar2 << 2);
    if (0x7fffffff < (uint)param_1[4]) {
      if (DAT_712042b4 != 0) {
        *(int *)(DAT_712042b4 + 0x370) = *(int *)(DAT_712042b4 + 0x370) + 1;
      }
      iVar2 = (*DAT_70105bac)(0,DAT_712042bc);
      if (param_1[5] != 0) {
        imp___aeabi_memcpy(iVar2,param_1[5],param_1[3] << 2);
        iVar4 = param_1[5];
        iVar3 = extraout_r1_00;
        if (iVar4 != 0) {
          iVar3 = DAT_712042b4;
        }
        if (iVar4 != 0 && iVar3 != 0) {
          *(int *)(iVar3 + 0x370) = *(int *)(iVar3 + 0x370) + -1;
        }
        (*DAT_70105bb0)(iVar4,DAT_712042bc);
      }
      param_1[4] = 0;
      param_1[5] = iVar2;
    }
    param_1[3] = 0;
  }
  return;
}


// =========================================================================
// Function: FUN_718e8310
// Entry: 0x718e8310 | Size: 88 bytes
// =========================================================================

void FUN_718e8310(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  piVar2 = (int *)(DAT_712042b4 + 0x1a6c);
  *(undefined1 *)(*piVar2 + 0x8c) = 1;
  iVar6 = *piVar2;
  FUN_718f7014(*(undefined4 *)(iVar6 + 0x288));
  iVar1 = *(int *)(*(int *)(iVar6 + 0x288) + 0x44) + *(int *)(*(int *)(iVar6 + 0x288) + 0x3c) * 0x10
  ;
  uVar3 = *(undefined4 *)(iVar1 + -0x10);
  uVar4 = *(undefined4 *)(iVar1 + -0xc);
  uVar5 = *(undefined4 *)(iVar1 + -8);
  *(undefined4 *)(iVar6 + 0x240) = *(undefined4 *)(iVar1 + -4);
  *(undefined4 *)(iVar6 + 0x234) = uVar3;
  *(undefined4 *)(iVar6 + 0x238) = uVar4;
  *(undefined4 *)(iVar6 + 0x23c) = uVar5;
  return;
}


// =========================================================================
// Function: FUN_718e83bc
// Entry: 0x718e83bc | Size: 3584 bytes
// =========================================================================

void FUN_718e83bc(void)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  uint extraout_r1;
  uint extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int extraout_r1_03;
  byte bVar11;
  uint uVar12;
  char *pcVar13;
  char *pcVar14;
  uint *puVar15;
  int iVar16;
  int *piVar17;
  undefined4 uVar18;
  int iVar19;
  undefined4 uVar20;
  code *pcVar21;
  uint uVar22;
  int *piVar23;
  undefined4 *puVar24;
  bool bVar25;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar2 = DAT_712042b4;
  piVar23 = (int *)(DAT_712042b4 + 0x1508);
  if (*(int *)(DAT_712042b4 + 0x1a14) == *(int *)(DAT_712042b4 + 0x1a10)) {
    return;
  }
  puVar24 = (undefined4 *)(DAT_712042b4 + 0x2d58);
  iVar3 = *(int *)(DAT_712042b4 + 0x2da0);
  if (0 < iVar3) {
    iVar16 = 0;
    iVar19 = 0;
    do {
      iVar9 = *(int *)(iVar2 + 0x2da8) + iVar16;
      if (*(int *)(iVar9 + 4) == 2) {
        (**(code **)(iVar9 + 0xc))(iVar2);
        iVar3 = *(int *)(iVar2 + 0x2da0);
      }
      iVar19 = iVar19 + 1;
      iVar16 = iVar16 + 0x14;
    } while (iVar19 < iVar3);
  }
  piVar17 = (int *)(DAT_712042b4 + 0x1a50);
  iVar3 = *piVar17;
  while (1 < iVar3) {
    FUN_718e9c80();
    iVar3 = *piVar17;
  }
  pcVar21 = *(code **)(iVar2 + 0xdc);
  if (pcVar21 != (code *)0x0) {
    uVar18 = *(undefined4 *)(iVar2 + 0x2d60);
    iVar3 = FUN_71ba2cf0(uVar18,0x7f7fffff);
    if (iVar3 == 0) {
      uVar4 = *(undefined4 *)(iVar2 + 0x2d64);
      uVar10 = *puVar24;
      uStack_30 = *(undefined4 *)(iVar2 + 0x2d5c);
      uVar18 = FUN_71ba240c(uVar18);
      uVar4 = FUN_71ba240c(uVar4,uStack_30);
      uVar4 = FUN_71ba21e8(uVar4,uVar4);
      uVar18 = FUN_71ba21e8(uVar18,uVar18);
      uVar18 = FUN_71ba0b38(uVar18,uVar4);
      iVar3 = FUN_71ba2d70(uVar18,0x38d1b717);
      if (iVar3 == 0) goto LAB_718e8534;
    }
    else {
      uStack_30 = *(undefined4 *)(iVar2 + 0x2d5c);
      uVar10 = *puVar24;
    }
    uVar18 = FUN_71ba17bc(uVar10);
    uVar4 = FUN_71ba17bc(uStack_30);
    (*pcVar21)(uVar18,uVar4);
    *(undefined4 *)(iVar2 + 0x2d60) = *puVar24;
    *(undefined4 *)(iVar2 + 0x2d64) = *(undefined4 *)(iVar2 + 0x2d5c);
  }
LAB_718e8534:
  *(undefined1 *)(iVar2 + 0x1a1d) = 0;
  iVar3 = *(int *)(iVar2 + 0x1a6c);
  if ((iVar3 != 0) && (*(char *)(iVar3 + 0x8c) == '\0')) {
    *(undefined1 *)(iVar3 + 0x8a) = 0;
  }
  FUN_718e9c80();
  iVar3 = DAT_712042b4;
  puVar24 = (undefined4 *)(DAT_712042b4 + 0x151c);
  if ((*(int *)(DAT_712042b4 + 0x1cd8) != 0) &&
     (iVar16 = FUN_71ba2d10(*(undefined4 *)(DAT_712042b4 + 0x1ce4),0x3e19999a), iVar16 == 0)) {
    if (*(int *)(iVar3 + 0x1ce0) == 0) {
      iVar16 = 0;
      uVar5 = 0xffffffff;
      uVar12 = 0x23;
      do {
        pbVar1 = &DAT_70061368 + iVar16;
        if ((uVar12 == 0x23 && *pbVar1 == 0x23) && ((&DAT_70061369)[iVar16] == '#')) {
          uVar5 = 0xffffffff;
        }
        iVar16 = iVar16 + 1;
        uVar5 = *(uint *)(&DAT_70086edc + (uVar5 & 0xff ^ uVar12) * 4) ^ uVar5 >> 8;
        uVar12 = (uint)*pbVar1;
      } while (iVar16 != 0x13);
      puVar15 = *(uint **)(iVar3 + 0x1a64);
      uVar12 = *(uint *)(iVar3 + 0x1a5c);
      while (uVar22 = uVar12, uVar22 != 0) {
        uVar12 = uVar22 >> 1;
        if (puVar15[(uVar22 >> 1) * 2] < ~uVar5) {
          puVar15 = puVar15 + (uVar22 >> 1) * 2 + 2;
          uVar12 = uVar22 + ~(uVar22 >> 1);
        }
      }
      uVar12 = 0;
      if ((puVar15 != *(uint **)(iVar3 + 0x1a64) + *(uint *)(iVar3 + 0x1a5c) * 2) &&
         (*puVar15 == ~uVar5)) {
        uVar12 = puVar15[1];
      }
      *(uint *)(iVar3 + 0x1ce0) = uVar12;
    }
    uVar12 = *(uint *)(iVar3 + 0x1af0);
    iVar16 = **(int **)(iVar3 + 0x1bcc);
    uVar18 = *(undefined4 *)(iVar16 + 0x10);
    uVar4 = *(undefined4 *)(iVar16 + 0xc);
    *(undefined4 *)(iVar3 + 0x1b34) = 0x7f7fffff;
    *(undefined4 *)(iVar3 + 0x1b38) = 0x7f7fffff;
    *(uint *)(iVar3 + 0x1af0) = uVar12 | 0x10;
    *(undefined4 *)(iVar3 + 0x1b3c) = 0;
    *(undefined4 *)(iVar3 + 0x1b40) = 0;
    uVar18 = FUN_71ba21e8(uVar18,0x3e4ccccd);
    *(undefined4 *)(iVar3 + 0x1b30) = uVar18;
    uVar18 = FUN_71ba21e8(uVar4,0x3e4ccccd);
    *(undefined4 *)(iVar3 + 0x1b2c) = uVar18;
    uVar18 = *(undefined4 *)(iVar16 + 4);
    uVar4 = *(undefined4 *)(iVar16 + 0xc);
    uVar10 = *(undefined4 *)(iVar16 + 0x10);
    uVar20 = *(undefined4 *)(iVar16 + 8);
    *(undefined4 *)(iVar3 + 0x1b08) = 0x3f000000;
    *(undefined4 *)(iVar3 + 0x1b0c) = 0x3f000000;
    *(undefined4 *)(iVar3 + 0x1af4) = 1;
    *(uint *)(iVar3 + 0x1af0) = uVar12 | 0x11;
    uVar10 = FUN_71ba21e8(uVar10,0x3f000000);
    uVar10 = FUN_71ba0b38(uVar10,uVar20);
    *(undefined4 *)(iVar3 + 0x1b04) = uVar10;
    uVar4 = FUN_71ba21e8(uVar4,0x3f000000);
    uVar18 = FUN_71ba0b38(uVar4,uVar18);
    uVar4 = *puVar24;
    *(undefined4 *)(iVar3 + 0x1b00) = uVar18;
    uStack_28 = FUN_71ba0b38(*(undefined4 *)(iVar3 + 0x1520),*(undefined4 *)(iVar3 + 0x1520));
    uStack_2c = FUN_71ba0b38(uVar4,uVar4);
    FUN_718ca6d8(1,&uStack_2c);
    FUN_718da658(&DAT_70061367,0,0xc1347);
    iVar16 = *(int *)(iVar3 + 0x1a38);
    uVar12 = extraout_r1;
    if (0 < iVar16) {
      do {
        puVar24 = *(undefined4 **)(*(int *)(iVar3 + 0x1a40) + (iVar16 + -1) * 4);
        if (*(char *)((int)puVar24 + 0x8b) != '\0') {
          if ((undefined4 *)puVar24[200] == puVar24) {
            uVar12 = puVar24[2];
          }
          if ((undefined4 *)puVar24[200] == puVar24 && (uVar12 & 0x80000) == 0) {
            pcVar6 = (char *)*puVar24;
            pcVar14 = pcVar6;
            if (pcVar6 == (char *)0xffffffff) {
LAB_718e8858:
              pcVar13 = s__Popup__70070a1d;
              if ((uVar12 & 0x4000000) == 0) {
                if ((uVar12 & 0x400) != 0) {
                  iVar19 = imp_strcmp(pcVar6,s___MainMenuBar_70067fb1);
                  pcVar13 = s__Main_menu_bar__7006d054;
                  if (iVar19 == 0) goto LAB_718e8794;
                }
                pcVar13 = s__Untitled__7006d785;
              }
            }
            else {
              do {
                pcVar13 = pcVar6;
                if (*pcVar14 == '#') {
                  if (pcVar14[1] == '#') goto LAB_718e883c;
                }
                else if (*pcVar14 == '\0') {
LAB_718e883c:
                  if (pcVar6 != pcVar14) goto LAB_718e8794;
                  goto LAB_718e8858;
                }
                bVar25 = pcVar14 != (char *)0xfffffffe;
                pcVar14 = pcVar14 + 1;
              } while (bVar25);
              if (pcVar6 == (char *)0xffffffff) goto LAB_718e8858;
            }
LAB_718e8794:
            uStack_2c = 0;
            uStack_28 = 0;
            FUN_71917e58(pcVar13,*(undefined4 **)(iVar3 + 0x1cd8) == puVar24,0,&uStack_2c);
            uVar12 = extraout_r1_00;
          }
        }
        bVar25 = 1 < iVar16;
        iVar16 = iVar16 + -1;
      } while (bVar25);
    }
    FUN_718e9c80();
    piVar17 = (int *)(DAT_712042b4 + 0x1b70);
    iVar19 = *(int *)(DAT_712042b4 + 0x1b78) + *piVar17 * 0xc;
    iVar16 = *(int *)(iVar19 + -0xc) * 0xc;
    iVar9 = DAT_712042b4 + *(int *)(&DAT_7008787c + iVar16);
    puVar24 = (undefined4 *)(iVar9 + 0x1518);
    if (*(int *)(&DAT_70087878 + iVar16) == 2) {
      *puVar24 = *(undefined4 *)(iVar19 + -8);
      *(undefined4 *)(iVar9 + 0x151c) = *(undefined4 *)(iVar19 + -4);
    }
    else if (*(int *)(&DAT_70087878 + iVar16) == 1) {
      *puVar24 = *(undefined4 *)(iVar19 + -8);
    }
    *piVar17 = *piVar17 + -1;
  }
  iVar16 = DAT_712042b4;
  iVar19 = *(int *)(iVar3 + 0x1cd0);
  if (((iVar19 != 0) && (*(int *)(iVar3 + 0x1bd0) == iVar19)) &&
     (piVar17 = (int *)(DAT_712042b4 + 0x1bd0), *(char *)(DAT_712042b4 + 0x1c3c) != '\0')) {
    iVar9 = *(int *)(DAT_712042b4 + 0x1c5c);
    bVar25 = iVar9 == 0;
    if (bVar25) {
      iVar9 = *(int *)(DAT_712042b4 + 0x1cac);
    }
    if (bVar25 && iVar9 == 0) {
      iVar9 = *(int *)(iVar3 + 0x1c44);
      bVar25 = iVar9 == 0;
      if (bVar25) {
        iVar9 = *(int *)(iVar3 + 0x1c18);
      }
      if (bVar25 && iVar9 == 0) {
        uVar5 = *(uint *)(iVar3 + 0x1cd4);
        uVar12 = *(uint *)(iVar3 + 0x1c4c);
        uVar4 = *(undefined4 *)(iVar19 + 0x33c);
        uVar18 = *(undefined4 *)(iVar19 + 0x344);
        if (uVar12 == 0) {
          if ((uVar5 & 5) == 0) goto LAB_718e8954;
          uVar20 = *(undefined4 *)(iVar19 + 0x1c);
          uVar10 = *(undefined4 *)(iVar19 + 0x24);
          uVar7 = *(undefined4 *)(iVar19 + 0x3c);
          uVar8 = *(undefined4 *)(iVar19 + 0x58);
          uStack_30 = uVar5 >> 1 & 2;
          *(uint *)(DAT_712042b4 + 0x1c54) = uStack_30;
          *(undefined1 *)(iVar16 + 0x1c24) = *(undefined1 *)(iVar16 + 0x1c25);
          *(uint *)(iVar16 + 0x1c40) = uVar5;
          *(undefined1 *)(iVar16 + 0x1c3c) = 0;
          *(undefined4 *)(iVar16 + 0x1c4c) = 0;
          *(undefined4 *)(iVar16 + 0x1c44) = 1;
          uVar12 = FUN_71ba240c(uVar18);
          uVar12 = uVar12 & (int)(uVar5 << 0x1d) >> 0x1f;
          uVar18 = FUN_71ba240c(uVar18,uVar12);
          iVar9 = *piVar17 + *(int *)(iVar16 + 0x1c18) * 0x10;
          *(undefined4 *)(iVar9 + 0x344) = uVar18;
          uVar4 = FUN_71ba240c(uVar4,uVar12);
          *(undefined4 *)(iVar9 + 0x33c) = uVar4;
          uVar7 = FUN_71ba0b38(uVar7,uVar7);
          uVar10 = FUN_71ba0b38(uVar7,uVar10);
          iVar16 = FUN_71ba2d50(uVar20,uVar10);
          if (iVar16 != 0) {
            uVar10 = uVar20;
          }
          uStack_40 = FUN_71ba240c(uVar10,uVar8);
          bVar25 = false;
          *(uint *)(iVar9 + 0x340) = uStack_40;
          *(uint *)(iVar9 + 0x338) = uStack_40;
          uVar12 = *(uint *)(iVar3 + 0x1c4c);
          uStack_3c = uStack_40;
        }
        else {
          uStack_40 = *(uint *)(iVar19 + 0x340);
          bVar25 = (uVar5 & 5) == 0;
          uStack_30 = uVar12;
          uStack_3c = *(uint *)(iVar19 + 0x338);
        }
        iVar16 = DAT_712042b4;
        if ((uVar12 == 1) && (!bVar25)) {
          uStack_40 = *(uint *)(iVar19 + 0x58);
          iVar9 = *(int *)(DAT_712042b4 + 0x1bd0);
          *(undefined1 *)(DAT_712042b4 + 0x1c3c) = 0;
          if ((uVar5 & 4) != 0) {
            uStack_30 = 3;
          }
          *(uint *)(iVar16 + 0x1c40) = uVar5;
          *(undefined4 *)(iVar16 + 0x1c4c) = 1;
          *(undefined4 *)(iVar16 + 0x1c44) = 1;
          *(uint *)(iVar16 + 0x1c54) = uStack_30;
          *(undefined1 *)(iVar16 + 0x1c24) = *(undefined1 *)(iVar16 + 0x1c25);
          iVar9 = iVar9 + *(int *)(iVar16 + 0x1c18) * 0x10;
          uVar10 = FUN_71ba240c(uVar18);
          if ((uVar5 & 4) == 0) {
            uVar10 = 0x80000000;
          }
          uVar18 = FUN_71ba0b38(uVar18,uVar10);
          *(undefined4 *)(iVar9 + 0x344) = uVar18;
          uStack_40 = uStack_40 ^ 0x80000000;
          *(uint *)(iVar9 + 0x340) = uStack_40;
          uVar18 = FUN_71ba0b38(uVar4,uVar10);
          *(uint *)(iVar9 + 0x338) = uStack_40;
          *(undefined4 *)(iVar9 + 0x33c) = uVar18;
          uVar12 = *(uint *)(iVar3 + 0x1c4c);
          uStack_3c = uStack_40;
        }
        iVar16 = DAT_712042b4;
        if ((uVar12 == 2) && ((uVar5 & 10) != 0)) {
          uVar4 = *(undefined4 *)(iVar19 + 0x20);
          uVar10 = *(undefined4 *)(iVar19 + 0x28);
          uVar20 = *(undefined4 *)(iVar19 + 0x40);
          uVar18 = *(undefined4 *)(iVar19 + 0x5c);
          iVar9 = *(int *)(DAT_712042b4 + 0x1bd0);
          if ((uVar5 & 8) != 0) {
            uStack_30 = 0;
          }
          *(undefined1 *)(DAT_712042b4 + 0x1c3c) = 0;
          *(uint *)(iVar16 + 0x1c54) = uStack_30;
          *(undefined4 *)(iVar16 + 0x1c4c) = 2;
          *(uint *)(iVar16 + 0x1c40) = uVar5;
          *(undefined4 *)(iVar16 + 0x1c44) = 1;
          *(undefined1 *)(iVar16 + 0x1c24) = *(undefined1 *)(iVar16 + 0x1c25);
          iVar9 = iVar9 + *(int *)(iVar16 + 0x1c18) * 0x10;
          uVar12 = FUN_71ba240c(uStack_40,uStack_3c);
          uVar12 = uVar12 & (int)(uVar5 << 0x1c) >> 0x1f;
          uStack_40 = FUN_71ba240c(uStack_40,uVar12);
          *(uint *)(iVar9 + 0x340) = uStack_40;
          uStack_3c = FUN_71ba240c(uStack_3c,uVar12);
          *(uint *)(iVar9 + 0x338) = uStack_3c;
          uVar20 = FUN_71ba0b38(uVar20,uVar20);
          uVar10 = FUN_71ba0b38(uVar20,uVar10);
          iVar16 = FUN_71ba2d50(uVar4,uVar10);
          if (iVar16 != 0) {
            uVar10 = uVar4;
          }
          uVar18 = FUN_71ba240c(uVar10,uVar18);
          *(undefined4 *)(iVar9 + 0x344) = uVar18;
          *(undefined4 *)(iVar9 + 0x33c) = uVar18;
          uVar12 = *(uint *)(iVar3 + 0x1c4c);
        }
        iVar3 = DAT_712042b4;
        if ((uVar12 == 3) && ((uVar5 & 10) != 0)) {
          uVar12 = *(uint *)(iVar19 + 0x5c);
          iVar16 = *(int *)(DAT_712042b4 + 0x1bd0);
          *(undefined1 *)(DAT_712042b4 + 0x1c3c) = 0;
          *(undefined4 *)(iVar3 + 0x1c4c) = 3;
          *(uint *)(iVar3 + 0x1c40) = uVar5;
          if ((uVar5 & 8) != 0) {
            uStack_30 = 1;
          }
          *(undefined4 *)(iVar3 + 0x1c44) = 1;
          *(uint *)(iVar3 + 0x1c54) = uStack_30;
          *(undefined1 *)(iVar3 + 0x1c24) = *(undefined1 *)(iVar3 + 0x1c25);
          iVar16 = iVar16 + *(int *)(iVar3 + 0x1c18) * 0x10;
          uVar12 = uVar12 ^ 0x80000000;
          *(uint *)(iVar16 + 0x344) = uVar12;
          uVar18 = FUN_71ba240c(uStack_40,uStack_3c);
          if ((uVar5 & 8) == 0) {
            uVar18 = 0x80000000;
          }
          uVar4 = FUN_71ba0b38(uStack_40,uVar18);
          *(uint *)(iVar16 + 0x33c) = uVar12;
          *(undefined4 *)(iVar16 + 0x340) = uVar4;
          uVar18 = FUN_71ba0b38(uStack_3c,uVar18);
          *(undefined4 *)(iVar16 + 0x338) = uVar18;
        }
      }
    }
  }
LAB_718e8954:
  iVar3 = DAT_712042b4;
  iVar16 = *(int *)(iVar2 + 0x1a10);
  if (*(char *)(iVar2 + 0x1d14) == '\0') goto LAB_718e8a9c;
  bVar11 = 0;
  if (*(int *)(iVar2 + 0x1d34) + 1 < iVar16) {
    if ((*(byte *)(iVar2 + 0x1d18) & 0x20) == 0) {
      bVar11 = *(byte *)(DAT_712042b4 + *(int *)(iVar2 + 0x1d20) + 0xec) ^ 1;
      goto LAB_718e89a0;
    }
LAB_718e89b4:
    *(undefined1 *)(DAT_712042b4 + 0x1d14) = 0;
    *(undefined4 *)(iVar3 + 0x1d24) = 0;
    *(undefined4 *)(iVar3 + 0x1d28) = 0;
    *(undefined4 *)(iVar3 + 0x1d2c) = 0;
    *(undefined4 *)(iVar3 + 0x1d30) = 0;
    imp___aeabi_memclr(iVar3 + 0x1d38,0x21);
    *(undefined4 *)(iVar3 + 0x1d34) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x1d80) = 0xffffffff;
    *(undefined2 *)(iVar3 + 0x1d59) = 0;
    *(undefined4 *)(iVar3 + 0x1d70) = 0;
    *(undefined4 *)(iVar3 + 0x1d74) = 0x7f7fffff;
    *(undefined4 *)(iVar3 + 0x1d78) = 0;
    *(undefined4 *)(iVar3 + 0x1d7c) = 0;
    if (*(int *)(iVar3 + 0x1d90) != 0) {
      *(undefined4 *)(iVar3 + 0x1d88) = 0;
      *(undefined4 *)(iVar3 + 0x1d8c) = 0;
      *(int *)(iVar3 + 0x370) = *(int *)(iVar3 + 0x370) + -1;
      (*DAT_70105bb0)(*(int *)(iVar3 + 0x1d90),DAT_712042bc);
      *(undefined4 *)(iVar3 + 0x1d90) = 0;
    }
    *(undefined4 *)(iVar3 + 0x1d94) = 0;
    *(undefined4 *)(iVar3 + 0x1da0) = 0;
    *(undefined4 *)(iVar3 + 0x1d9c) = 0;
    *(undefined4 *)(iVar3 + 0x1d98) = 0;
    iVar16 = *(int *)(iVar2 + 0x1a10);
    if (*(char *)(iVar2 + 0x1d14) == '\0') goto LAB_718e8a9c;
  }
  else {
LAB_718e89a0:
    if (*(char *)(iVar2 + 0x1d5a) != '\0' || bVar11 != 0) goto LAB_718e89b4;
  }
  if ((*(int *)(iVar2 + 0x1d1c) < iVar16) && ((*(byte *)(iVar2 + 0x1d18) & 1) == 0)) {
    *(undefined1 *)(iVar2 + 0x1d15) = 1;
    FUN_718e9f0c(&DAT_700665a1);
    *(undefined1 *)(iVar2 + 0x1d15) = 0;
    iVar16 = *(int *)(iVar2 + 0x1a10);
  }
LAB_718e8a9c:
  *(int *)(iVar2 + 0x1a14) = iVar16;
  *(undefined1 *)(iVar2 + 0x1a1c) = 0;
  FUN_718d1ba4();
  uVar12 = *(uint *)(iVar2 + 0x1a48);
  if (0x7fffffff < uVar12) {
    uVar12 = 0;
    if (DAT_712042b4 != 0) {
      *(int *)(DAT_712042b4 + 0x370) = *(int *)(DAT_712042b4 + 0x370) + 1;
    }
    uVar18 = (*DAT_70105bac)(0,DAT_712042bc);
    if (*(int *)(iVar2 + 0x1a4c) != 0) {
      imp___aeabi_memcpy(uVar18,*(int *)(iVar2 + 0x1a4c),*(int *)(iVar2 + 0x1a44) << 2);
      iVar16 = *(int *)(iVar2 + 0x1a4c);
      iVar3 = extraout_r1_01;
      if (iVar16 != 0) {
        iVar3 = DAT_712042b4;
      }
      if (iVar16 != 0 && iVar3 != 0) {
        *(int *)(iVar3 + 0x370) = *(int *)(iVar3 + 0x370) + -1;
      }
      (*DAT_70105bb0)(iVar16,DAT_712042bc);
    }
    *(undefined4 *)(iVar2 + 0x1a48) = 0;
    *(undefined4 *)(iVar2 + 0x1a4c) = uVar18;
  }
  *(undefined4 *)(iVar2 + 0x1a44) = 0;
  uVar22 = *(uint *)(iVar2 + 0x1a2c);
  uVar5 = uVar22;
  if ((int)uVar12 < (int)uVar22) {
    if (DAT_712042b4 != 0) {
      *(int *)(DAT_712042b4 + 0x370) = *(int *)(DAT_712042b4 + 0x370) + 1;
    }
    uVar18 = (*DAT_70105bac)(uVar22 << 2,DAT_712042bc);
    if (*(int *)(iVar2 + 0x1a4c) != 0) {
      imp___aeabi_memcpy(uVar18,*(int *)(iVar2 + 0x1a4c),*(int *)(iVar2 + 0x1a44) << 2);
      iVar16 = *(int *)(iVar2 + 0x1a4c);
      iVar3 = extraout_r1_02;
      if (iVar16 != 0) {
        iVar3 = DAT_712042b4;
      }
      if (iVar16 != 0 && iVar3 != 0) {
        *(int *)(iVar3 + 0x370) = *(int *)(iVar3 + 0x370) + -1;
      }
      (*DAT_70105bb0)(iVar16,DAT_712042bc);
    }
    *(uint *)(iVar2 + 0x1a48) = uVar22;
    *(undefined4 *)(iVar2 + 0x1a4c) = uVar18;
    uVar5 = *(uint *)(iVar2 + 0x1a2c);
    uVar12 = uVar22;
  }
  uVar22 = 0;
  if (uVar5 != 0) {
    uVar12 = 0;
    do {
      iVar3 = *(int *)(*(int *)(iVar2 + 0x1a34) + uVar12 * 4);
      bVar25 = *(char *)(iVar3 + 0x8a) != '\0';
      bVar11 = 0;
      if (bVar25) {
        bVar11 = *(byte *)(iVar3 + 0xb);
      }
      if (!bVar25 || (bVar11 & 1) == 0) {
        FUN_718e9fc8(iVar2 + 0x1a44);
        uVar5 = *(uint *)(iVar2 + 0x1a2c);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar5);
    uVar12 = *(uint *)(iVar2 + 0x1a48);
    uVar22 = uVar5;
  }
  *(undefined4 *)(iVar2 + 0x1a48) = *(undefined4 *)(iVar2 + 0x1a30);
  *(undefined4 *)(iVar2 + 0x36c) = *(undefined4 *)(iVar2 + 0x1a68);
  uVar18 = *(undefined4 *)(iVar2 + 0x1a44);
  uVar4 = *(undefined4 *)(iVar2 + 0x1a4c);
  *(uint *)(iVar2 + 0x1a44) = uVar22;
  *(undefined4 *)(iVar2 + 0x1a4c) = *(undefined4 *)(iVar2 + 0x1a34);
  *(undefined4 *)(iVar2 + 0x1a2c) = uVar18;
  *(uint *)(iVar2 + 0x1a30) = uVar12;
  *(undefined4 *)(iVar2 + 0x1a34) = uVar4;
  **(undefined1 **)(iVar2 + 0x98) = 0;
  *(undefined4 *)(iVar2 + 0xf4) = 0;
  *(undefined4 *)(iVar2 + 0xf8) = 0;
  if (0x7fffffff < *(uint *)(iVar2 + 0x150c)) {
    if (DAT_712042b4 != 0) {
      *(int *)(DAT_712042b4 + 0x370) = *(int *)(DAT_712042b4 + 0x370) + 1;
    }
    uVar18 = (*DAT_70105bac)(0,DAT_712042bc);
    if (*(int *)(iVar2 + 0x1510) != 0) {
      imp___aeabi_memcpy(uVar18,*(int *)(iVar2 + 0x1510),*piVar23 << 1);
      iVar16 = *(int *)(iVar2 + 0x1510);
      iVar3 = extraout_r1_03;
      if (iVar16 != 0) {
        iVar3 = DAT_712042b4;
      }
      if (iVar16 != 0 && iVar3 != 0) {
        *(int *)(iVar3 + 0x370) = *(int *)(iVar3 + 0x370) + -1;
      }
      (*DAT_70105bb0)(iVar16,DAT_712042bc);
    }
    *(undefined4 *)(iVar2 + 0x150c) = 0;
    *(undefined4 *)(iVar2 + 0x1510) = uVar18;
  }
  iVar16 = 0;
  *piVar23 = 0;
  imp___aeabi_memclr(iVar2 + 0x300,0x54);
  iVar3 = *(int *)(iVar2 + 0x2da0);
  if (0 < iVar3) {
    iVar19 = 0;
    do {
      iVar9 = *(int *)(iVar2 + 0x2da8) + iVar16;
      if (*(int *)(iVar9 + 4) == 3) {
        (**(code **)(iVar9 + 0xc))(iVar2);
        iVar3 = *(int *)(iVar2 + 0x2da0);
      }
      iVar19 = iVar19 + 1;
      iVar16 = iVar16 + 0x14;
    } while (iVar19 < iVar3);
  }
  return;
}


// =========================================================================
// Function: FUN_718e9c80
// Entry: 0x718e9c80 | Size: 360 bytes
// =========================================================================

void FUN_718e9c80(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  
  iVar4 = DAT_712042b4;
  iVar6 = *(int *)(DAT_712042b4 + 0x1a6c);
  if ((*(int *)(DAT_712042b4 + 0x1a50) < 2) && (*(char *)(DAT_712042b4 + 0x1a1d) != '\0')) {
    return;
  }
  iVar1 = iVar6;
  if (*(int *)(iVar6 + 0x198) != 0) {
    FUN_71913b60();
    iVar1 = *(int *)(DAT_712042b4 + 0x1a6c);
  }
  iVar8 = DAT_712042b4;
  *(undefined1 *)(iVar1 + 0x8c) = 1;
  iVar8 = *(int *)(iVar8 + 0x1a6c);
  FUN_718f7014(*(undefined4 *)(iVar8 + 0x288));
  iVar1 = *(int *)(*(int *)(iVar8 + 0x288) + 0x44) + *(int *)(*(int *)(iVar8 + 0x288) + 0x3c) * 0x10
  ;
  uVar2 = *(undefined4 *)(iVar1 + -0x10);
  uVar3 = *(undefined4 *)(iVar1 + -0xc);
  uVar5 = *(undefined4 *)(iVar1 + -8);
  *(undefined4 *)(iVar8 + 0x240) = *(undefined4 *)(iVar1 + -4);
  *(undefined4 *)(iVar8 + 0x234) = uVar2;
  *(undefined4 *)(iVar8 + 0x238) = uVar3;
  *(undefined4 *)(iVar8 + 0x23c) = uVar5;
  if ((*(byte *)(iVar6 + 0xb) & 1) == 0) {
    FUN_718eecb0();
  }
  iVar1 = *(int *)(iVar4 + 0x1a50) + -1;
  *(int *)(iVar4 + 0x1a50) = iVar1;
  if ((*(byte *)(iVar6 + 0xb) & 4) != 0) {
    *(int *)(iVar4 + 0x1bb8) = *(int *)(iVar4 + 0x1bb8) + -1;
  }
  iVar6 = DAT_712042b4;
  if (iVar1 == 0) {
    *(undefined4 *)(DAT_712042b4 + 0x1a6c) = 0;
  }
  else {
    puVar7 = (undefined4 *)(DAT_712042b4 + 0x1930);
    iVar4 = *(int *)(*(int *)(iVar4 + 0x1a58) + iVar1 * 4 + -4);
    *(int *)(DAT_712042b4 + 0x1a6c) = iVar4;
    if (iVar4 != 0) {
      if (*(int *)(iVar4 + 0x19c) == -1) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(iVar4 + 0x19c) * 0x228 + *(int *)(iVar6 + 0x1db0);
      }
      *(int *)(iVar6 + 0x1da4) = iVar1;
      iVar1 = *(int *)(iVar4 + 0x31c);
      uVar2 = FUN_71ba21e8(*(undefined4 *)(iVar6 + 0x1934),*(undefined4 *)(iVar4 + 0x280));
      if (iVar1 != 0) {
        uVar2 = FUN_71ba21e8(uVar2,*(undefined4 *)(iVar1 + 0x280));
      }
      *puVar7 = uVar2;
      *(undefined4 *)(iVar6 + 0x1944) = uVar2;
      return;
    }
  }
  *(undefined4 *)(iVar6 + 0x1da4) = 0;
  return;
}


// =========================================================================
// Function: FUN_718e9f0c
// Entry: 0x718e9f0c | Size: 80 bytes
// =========================================================================

void FUN_718e9f0c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_718efd98(0,1,param_3,param_4,&uStack_c);
  FUN_71915010(param_1,&uStack_c);
  FUN_718e9c80();
  return;
}


// =========================================================================
// Function: FUN_718e9fc8
// Entry: 0x718e9fc8 | Size: 324 bytes
// =========================================================================

void FUN_718e9fc8(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_r1;
  int iVar4;
  
  iVar1 = *param_1;
  if (iVar1 == param_1[1]) {
    iVar4 = iVar1 + iVar1 / 2;
    if (iVar1 == 0) {
      iVar4 = 8;
    }
    if (iVar4 <= iVar1 + 1) {
      iVar4 = iVar1 + 1;
    }
    if (DAT_712042b4 != 0) {
      *(int *)(DAT_712042b4 + 0x370) = *(int *)(DAT_712042b4 + 0x370) + 1;
    }
    iVar2 = (*DAT_70105bac)(iVar4 << 2,DAT_712042bc);
    if (param_1[2] != 0) {
      imp___aeabi_memcpy(iVar2,param_1[2],*param_1 << 2);
      iVar3 = param_1[2];
      iVar1 = extraout_r1;
      if (iVar3 != 0) {
        iVar1 = DAT_712042b4;
      }
      if (iVar3 != 0 && iVar1 != 0) {
        *(int *)(iVar1 + 0x370) = *(int *)(iVar1 + 0x370) + -1;
      }
      (*DAT_70105bb0)(iVar3,DAT_712042bc);
    }
    iVar1 = *param_1;
    param_1[1] = iVar4;
    param_1[2] = iVar2;
  }
  else {
    iVar2 = param_1[2];
  }
  *(int *)(iVar2 + iVar1 * 4) = param_2;
  *param_1 = *param_1 + 1;
  if (*(char *)(param_2 + 0x8a) != '\0') {
    iVar1 = *(int *)(param_2 + 0x188);
    if (iVar1 < 2) {
      if (iVar1 != 1) {
        return;
      }
    }
    else {
      imp_qsort(*(undefined4 *)(param_2 + 400),iVar1,4,FUN_718f3740);
    }
    iVar2 = 0;
    do {
      if (*(char *)(*(int *)(*(int *)(param_2 + 400) + iVar2 * 4) + 0x8a) != '\0') {
        FUN_718e9fc8(param_1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar1 != iVar2);
  }
  return;
}


// =========================================================================
// Function: FUN_718ea258
// Entry: 0x718ea258 | Size: 976 bytes
// =========================================================================

void FUN_718ea258(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined4 *puVar15;
  bool bVar16;
  
  iVar2 = DAT_712042b4;
  piVar10 = (int *)(DAT_712042b4 + 0x2da0);
  puVar15 = (undefined4 *)(DAT_712042b4 + 0x15cc);
  iVar3 = *(int *)(DAT_712042b4 + 0x1a14);
  if (iVar3 != *(int *)(DAT_712042b4 + 0x1a10)) {
    FUN_718e83bc();
    iVar3 = *(int *)(iVar2 + 0x1a10);
  }
  *(int *)(iVar2 + 0x1a18) = iVar3;
  iVar9 = 0;
  iVar3 = *piVar10;
  *(undefined4 *)(iVar2 + 0x368) = 0;
  if (0 < iVar3) {
    iVar11 = 0;
    do {
      iVar6 = *(int *)(iVar2 + 0x2da8) + iVar9;
      if (*(int *)(iVar6 + 4) == 4) {
        (**(code **)(iVar6 + 0xc))(iVar2);
        iVar3 = *piVar10;
      }
      iVar11 = iVar11 + 1;
      iVar9 = iVar9 + 0x14;
    } while (iVar11 < iVar3);
  }
  if (*(int *)(iVar2 + 0x1bc4) != 0) {
    iVar3 = 0;
    do {
      iVar9 = *(int *)(*(int *)(iVar2 + 0x1bcc) + iVar3 * 4);
      FUN_718ea830(iVar9 + 0x60);
      if (*(int *)(iVar9 + 0x2c) != 0) {
        uVar4 = FUN_718d0df0(iVar9,0,s___Background_7006d776);
        FUN_718eab54(iVar9 + 0x60,uVar4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != *(int *)(iVar2 + 0x1bc4));
  }
  uVar5 = *(uint *)(iVar2 + 0x1cd8);
  if (uVar5 == 0) {
    uVar12 = 0;
    uVar13 = 0;
  }
  else {
    uVar12 = 0;
    uVar13 = *(uint *)(iVar2 + 0x1ce0);
    if ((*(byte *)(uVar5 + 9) & 0x20) == 0) {
      uVar12 = *(uint *)(uVar5 + 800);
    }
  }
  iVar3 = *(int *)(iVar2 + 0x1a2c);
  if (iVar3 != 0) {
    iVar9 = 0;
    do {
      uVar5 = *(uint *)(*(int *)(iVar2 + 0x1a34) + iVar9 * 4);
      if (*(char *)(uVar5 + 0x8a) != '\0') {
        uVar8 = (uint)*(byte *)(uVar5 + 0x91);
        bVar16 = uVar8 == 0;
        if (bVar16) {
          uVar8 = *(uint *)(uVar5 + 8);
        }
        if ((bVar16 && (uVar8 & 0x1000000) == 0) && (uVar5 != uVar12 && uVar5 != uVar13)) {
          uVar5 = FUN_718f3798(uVar5,(uVar8 & 0x3ffffff) >> 0x19);
          iVar3 = *(int *)(iVar2 + 0x1a2c);
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != iVar3);
  }
  if (uVar12 != 0) {
    uVar5 = (uint)*(byte *)(uVar12 + 0x8a);
  }
  if ((uVar12 != 0 && uVar5 != 0) && (uVar5 = (uint)*(byte *)(uVar12 + 0x91), uVar5 == 0)) {
    uVar5 = FUN_718f3798(uVar12,(*(uint *)(uVar12 + 8) & 0x3ffffff) >> 0x19);
  }
  if (uVar13 != 0) {
    uVar5 = (uint)*(byte *)(uVar13 + 0x8a);
  }
  if ((uVar13 != 0 && uVar5 != 0) && (*(char *)(uVar13 + 0x91) == '\0')) {
    FUN_718f3798(uVar13,(*(uint *)(uVar13 + 8) & 0x3ffffff) >> 0x19);
  }
  iVar3 = 0;
  *(undefined4 *)(iVar2 + 0x360) = 0;
  *(undefined4 *)(iVar2 + 0x364) = 0;
  if (0 < *(int *)(iVar2 + 0x1bc4)) {
    do {
      iVar9 = *(int *)(*(int *)(iVar2 + 0x1bcc) + iVar3 * 4);
      FUN_718e7f9c(iVar9 + 0x60);
      if (*(char *)(iVar2 + 0xb0) != '\0') {
        uVar4 = FUN_718d0df0(iVar9,1,s___Foreground_7006aed8);
        FUN_71908d04(uVar4,*(undefined4 *)(iVar2 + 0xe4),*(undefined4 *)(iVar2 + 0xe8),*puVar15,
                     *(undefined4 *)(iVar2 + 0x1d10),0xffffffff,0xff000000,0x30000000);
      }
      if (*(int *)(iVar9 + 0x30) != 0) {
        uVar4 = FUN_718d0df0(iVar9,1,s___Foreground_7006aed8);
        FUN_718eab54(iVar9 + 0x60,uVar4);
      }
      uVar4 = 0;
      *(undefined1 *)(iVar9 + 0x34) = 1;
      iVar11 = DAT_712042b4;
      iVar6 = *(int *)(iVar9 + 0x60);
      iVar7 = 0;
      if (0 < iVar6) {
        uVar4 = *(undefined4 *)(iVar9 + 0x68);
      }
      *(undefined4 *)(iVar9 + 0x44) = uVar4;
      *(int *)(iVar9 + 0x38) = iVar6;
      *(undefined4 *)(iVar9 + 0x3c) = 0;
      *(undefined4 *)(iVar9 + 0x40) = 0;
      *(undefined4 *)(iVar9 + 0x4c) = *(undefined4 *)(iVar9 + 8);
      *(undefined4 *)(iVar9 + 0x48) = *(undefined4 *)(iVar9 + 4);
      *(undefined4 *)(iVar9 + 0x54) = *(undefined4 *)(iVar9 + 0x10);
      *(undefined4 *)(iVar9 + 0x50) = *(undefined4 *)(iVar9 + 0xc);
      uVar4 = *(undefined4 *)(iVar11 + 0xac);
      *(undefined4 *)(iVar9 + 0x58) = *(undefined4 *)(iVar11 + 0xa8);
      *(undefined4 *)(iVar9 + 0x5c) = uVar4;
      if (0 < iVar6) {
        iVar11 = 0;
        iVar14 = 0;
        do {
          iVar7 = *(int *)(*(int *)(*(int *)(iVar9 + 0x68) + iVar14 * 4) + 0x18) + iVar7;
          *(int *)(iVar9 + 0x40) = iVar7;
          iVar1 = iVar14 * 4;
          iVar14 = iVar14 + 1;
          iVar11 = *(int *)(*(int *)(*(int *)(iVar9 + 0x68) + iVar1) + 0xc) + iVar11;
          *(int *)(iVar9 + 0x3c) = iVar11;
        } while (iVar14 < iVar6);
      }
      iVar3 = iVar3 + 1;
      *(int *)(iVar2 + 0x360) = *(int *)(iVar2 + 0x360) + iVar7;
      *(int *)(iVar2 + 0x364) = *(int *)(iVar2 + 0x364) + *(int *)(iVar9 + 0x3c);
    } while (iVar3 < *(int *)(iVar2 + 0x1bc4));
  }
  iVar3 = *piVar10;
  if (0 < iVar3) {
    iVar9 = 0;
    iVar11 = 0;
    do {
      iVar6 = *(int *)(iVar2 + 0x2da8) + iVar9;
      if (*(int *)(iVar6 + 4) == 5) {
        (**(code **)(iVar6 + 0xc))(iVar2);
        iVar3 = *piVar10;
      }
      iVar11 = iVar11 + 1;
      iVar9 = iVar9 + 0x14;
    } while (iVar11 < iVar3);
  }
  return;
}


// =========================================================================
// Function: FUN_718ea830
// Entry: 0x718ea830 | Size: 340 bytes
// =========================================================================

void FUN_718ea830(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_r1;
  int extraout_r1_00;
  
  if (0x7fffffff < (uint)param_1[1]) {
    if (DAT_712042b4 != 0) {
      *(int *)(DAT_712042b4 + 0x370) = *(int *)(DAT_712042b4 + 0x370) + 1;
    }
    iVar2 = (*DAT_70105bac)(0,DAT_712042bc);
    if (param_1[2] != 0) {
      imp___aeabi_memcpy(iVar2,param_1[2],*param_1 << 2);
      iVar3 = param_1[2];
      iVar1 = extraout_r1;
      if (iVar3 != 0) {
        iVar1 = DAT_712042b4;
      }
      if (iVar3 != 0 && iVar1 != 0) {
        *(int *)(iVar1 + 0x370) = *(int *)(iVar1 + 0x370) + -1;
      }
      (*DAT_70105bb0)(iVar3,DAT_712042bc);
    }
    param_1[1] = 0;
    param_1[2] = iVar2;
  }
  *param_1 = 0;
  if (param_1[4] < 0) {
    if (DAT_712042b4 != 0) {
      *(int *)(DAT_712042b4 + 0x370) = *(int *)(DAT_712042b4 + 0x370) + 1;
    }
    iVar2 = (*DAT_70105bac)(0,DAT_712042bc);
    if (param_1[5] != 0) {
      imp___aeabi_memcpy(iVar2,param_1[5],param_1[3] << 2);
      iVar3 = param_1[5];
      iVar1 = extraout_r1_00;
      if (iVar3 != 0) {
        iVar1 = DAT_712042b4;
      }
      if (iVar3 != 0 && iVar1 != 0) {
        *(int *)(iVar1 + 0x370) = *(int *)(iVar1 + 0x370) + -1;
      }
      (*DAT_70105bb0)(iVar3,DAT_712042bc);
    }
    param_1[4] = 0;
    param_1[5] = iVar2;
    param_1[3] = 0;
    return;
  }
  param_1[3] = 0;
  return;
}


// =========================================================================
// Function: FUN_718eab54
// Entry: 0x718eab54 | Size: 244 bytes
// =========================================================================

void FUN_718eab54(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_r1;
  int iVar4;
  
  FUN_718f6c0c(param_2);
  if (*param_2 != 0) {
    iVar1 = *param_1;
    if (iVar1 == param_1[1]) {
      iVar4 = iVar1 + iVar1 / 2;
      if (iVar1 == 0) {
        iVar4 = 8;
      }
      if (iVar4 <= iVar1 + 1) {
        iVar4 = iVar1 + 1;
      }
      if (DAT_712042b4 != 0) {
        *(int *)(DAT_712042b4 + 0x370) = *(int *)(DAT_712042b4 + 0x370) + 1;
      }
      iVar2 = (*DAT_70105bac)(iVar4 << 2,DAT_712042bc);
      if (param_1[2] != 0) {
        imp___aeabi_memcpy(iVar2,param_1[2],*param_1 << 2);
        iVar3 = param_1[2];
        iVar1 = extraout_r1;
        if (iVar3 != 0) {
          iVar1 = DAT_712042b4;
        }
        if (iVar3 != 0 && iVar1 != 0) {
          *(int *)(iVar1 + 0x370) = *(int *)(iVar1 + 0x370) + -1;
        }
        (*DAT_70105bb0)(iVar3,DAT_712042bc);
      }
      iVar1 = *param_1;
      param_1[1] = iVar4;
      param_1[2] = iVar2;
    }
    else {
      iVar2 = param_1[2];
    }
    *(int **)(iVar2 + iVar1 * 4) = param_2;
    *param_1 = *param_1 + 1;
  }
  return;
}


// =========================================================================
// Function: FUN_718ead58
// Entry: 0x718ead58 | Size: 228 bytes
// =========================================================================

void FUN_718ead58(undefined4 *param_1,int param_2,undefined4 param_3,char *param_4,char *param_5,
                 int param_6,undefined4 param_7)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = param_5;
  if (param_6 != 0) {
    if (param_5 == (char *)0x0) {
      param_5 = (char *)0xffffffff;
    }
    pcVar1 = param_4;
    pcVar2 = param_4;
    if (param_4 < param_5) {
      do {
        pcVar2 = pcVar1;
        if (*pcVar1 == '#') {
          if (pcVar1[1] == '#') break;
        }
        else if (*pcVar1 == '\0') break;
        pcVar1 = pcVar1 + 1;
        pcVar2 = param_5;
      } while (pcVar1 != param_5);
    }
  }
  if (param_2 == 0) {
    param_2 = *(int *)(DAT_712042b4 + 0x192c);
  }
  if (pcVar2 == param_4) {
    param_1[1] = param_3;
    uVar3 = 0;
  }
  else {
    FUN_719083a4(param_1,param_2,param_3,0x7f7fffff,param_7,param_4,pcVar2,0);
    FUN_71ba0b38(*param_1,0x3f733333);
    FUN_71ba17bc();
    uVar3 = FUN_71ba1b94();
  }
  *param_1 = uVar3;
  return;
}


// =========================================================================
// Function: FUN_718eaee4
// Entry: 0x718eaee4 | Size: 244 bytes
// =========================================================================

uint FUN_718eaee4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar1 = FUN_71ba2cf0(param_2,0);
  uVar2 = 1;
  if (iVar1 == 0) {
    iVar1 = FUN_71ba2d50(param_1,param_2);
    uVar2 = 0;
    if (iVar1 == 0) {
      iVar1 = FUN_71ba2d30(param_4,0);
      iVar3 = FUN_71ba2d10(param_1,param_3);
      if (iVar1 == 0) {
        uVar4 = FUN_71ba240c(param_2,param_3);
        FUN_71ba13e0(uVar4,param_4);
        iVar1 = FUN_71ba17bc();
        iVar5 = FUN_71ba2d10(param_2,param_3);
        if (iVar5 != 0) {
          iVar1 = -1;
        }
        uVar4 = FUN_71ba240c(param_1,param_3);
        FUN_71ba13e0(uVar4,param_4);
        iVar5 = FUN_71ba17bc();
        if (iVar3 != 0) {
          iVar5 = -1;
        }
        return iVar1 - iVar5;
      }
      iVar1 = FUN_71ba2d50(param_2,param_3);
      return (uint)(iVar3 != 0 && iVar1 != 0);
    }
  }
  return uVar2;
}


// =========================================================================
// Function: FUN_718eb140
// Entry: 0x718eb140 | Size: 324 bytes
// =========================================================================

bool FUN_718eb140(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  iVar4 = DAT_712042b4;
  if (param_1 < 0) {
    return false;
  }
  uVar7 = *(undefined4 *)(DAT_712042b4 + param_1 * 4 + 0x458);
  iVar2 = FUN_71ba2cf0(uVar7,0);
  if (iVar2 == 0) {
    bVar1 = false;
    if (param_2 != 0) {
      uVar8 = *(undefined4 *)(iVar4 + 0x8c);
      iVar2 = FUN_71ba2d70(uVar7,uVar8);
      bVar1 = false;
      if (iVar2 != 0) {
        uVar9 = *(undefined4 *)(iVar4 + 0x90);
        uVar3 = FUN_71ba240c(uVar7,*(undefined4 *)(iVar4 + 0x18));
        iVar4 = FUN_71ba2d50(uVar3,uVar7);
        bVar1 = false;
        if (iVar4 == 0) {
          iVar4 = FUN_71ba2d30(uVar9,0);
          iVar2 = FUN_71ba2d10(uVar3,uVar8);
          if (iVar4 != 0) {
            iVar4 = FUN_71ba2d50(uVar7,uVar8);
            return iVar4 != 0 && iVar2 != 0;
          }
          uVar5 = FUN_71ba240c(uVar7,uVar8);
          FUN_71ba13e0(uVar5,uVar9);
          iVar4 = FUN_71ba17bc();
          iVar6 = FUN_71ba2d10(uVar7,uVar8);
          if (iVar6 != 0) {
            iVar4 = -1;
          }
          uVar7 = FUN_71ba240c(uVar3,uVar8);
          FUN_71ba13e0(uVar7,uVar9);
          iVar6 = FUN_71ba17bc();
          if (iVar2 != 0) {
            iVar6 = -1;
          }
          bVar1 = false;
          if (iVar6 < iVar4) {
            bVar1 = true;
          }
        }
      }
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


// =========================================================================
// Function: FUN_718eb444
// Entry: 0x718eb444 | Size: 332 bytes
// =========================================================================

bool FUN_718eb444(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  iVar3 = DAT_712042b4;
  uVar7 = *(undefined4 *)(DAT_712042b4 + param_1 * 4 + 0x3f4);
  iVar1 = FUN_71ba2cf0(uVar7,0);
  if (iVar1 != 0) {
    return true;
  }
  if (param_2 != 0) {
    uVar8 = *(undefined4 *)(iVar3 + 0x8c);
    iVar1 = FUN_71ba2d70(uVar7,uVar8);
    if (iVar1 != 0) {
      uVar9 = *(undefined4 *)(iVar3 + 0x18);
      uVar2 = FUN_71ba21e8(*(undefined4 *)(iVar3 + 0x90),0x3f000000);
      uVar9 = FUN_71ba240c(uVar7,uVar9);
      iVar3 = FUN_71ba2d50(uVar9,uVar7);
      if (iVar3 == 0) {
        iVar3 = FUN_71ba2d30(uVar2,0);
        iVar1 = FUN_71ba2d10(uVar9,uVar8);
        if (iVar3 == 0) {
          uVar4 = FUN_71ba240c(uVar7,uVar8);
          FUN_71ba13e0(uVar4,uVar2);
          iVar3 = FUN_71ba17bc();
          iVar5 = FUN_71ba2d10(uVar7,uVar8);
          if (iVar5 != 0) {
            iVar3 = -1;
          }
          uVar7 = FUN_71ba240c(uVar9,uVar8);
          FUN_71ba13e0(uVar7,uVar2);
          iVar5 = FUN_71ba17bc();
          if (iVar1 != 0) {
            iVar5 = -1;
          }
          uVar6 = iVar3 - iVar5;
        }
        else {
          iVar3 = FUN_71ba2d50(uVar7,uVar8);
          uVar6 = (uint)(iVar3 != 0 && iVar1 != 0);
        }
        return 0 < (int)uVar6;
      }
    }
  }
  return false;
}


// =========================================================================
// Function: FUN_718eb76c
// Entry: 0x718eb76c | Size: 108 bytes
// =========================================================================

bool FUN_718eb76c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = DAT_712042b4;
  if (*(char *)(DAT_712042b4 + param_1 + 0xec) != '\0') {
    iVar1 = FUN_71ba2d10(param_2,0);
    if (iVar1 != 0) {
      param_2 = *(undefined4 *)(iVar3 + 0x30);
    }
    uVar2 = FUN_71ba21e8(param_2,param_2);
    iVar3 = FUN_71ba2d50(*(undefined4 *)(iVar3 + param_1 * 4 + 0x444),uVar2);
    return iVar3 != 0;
  }
  return false;
}


// =========================================================================
// Function: FUN_718eb864
// Entry: 0x718eb864 | Size: 56 bytes
// =========================================================================

bool FUN_718eb864(void)

{
  if (*(int *)(DAT_712042b4 + 0x1aa4) == 0) {
    return false;
  }
  return *(int *)(DAT_712042b4 + 0x1aa4) == *(int *)(*(int *)(DAT_712042b4 + 0x1a6c) + 0x118);
}


// =========================================================================
// Function: FUN_718eb8d4
// Entry: 0x718eb8d4 | Size: 56 bytes
// =========================================================================

void FUN_718eb8d4(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_712042b4;
  iVar2 = *(int *)(*(int *)(DAT_712042b4 + 0x1a6c) + 0x118);
  if (*(int *)(DAT_712042b4 + 0x1a90) == iVar2) {
    *(undefined1 *)(DAT_712042b4 + 0x1a98) = 1;
  }
  if (*(int *)(iVar1 + 0x1aa4) == iVar2) {
    *(undefined1 *)(iVar1 + 0x1ab1) = 1;
  }
  return;
}


// =========================================================================
// Function: FUN_718eb944
// Entry: 0x718eb944 | Size: 484 bytes
// =========================================================================

void FUN_718eb944(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  
  iVar4 = DAT_712042b4;
  puVar10 = (undefined4 *)(DAT_712042b4 + 0x1560);
  iVar6 = *(int *)(DAT_712042b4 + 0x1a6c);
  if (*(char *)(iVar6 + 0x8f) == '\0') {
    uVar7 = *param_1;
    uVar1 = param_1[1];
    uVar5 = *(undefined4 *)(iVar6 + 0xd0);
    uVar9 = *(undefined4 *)(iVar6 + 0xc);
    *(undefined4 *)(iVar6 + 0xd8) = uVar5;
    uVar8 = *(undefined4 *)(iVar6 + 0xe4);
    uVar7 = FUN_71ba0b38(*(undefined4 *)(iVar6 + 0xcc),uVar7);
    *(undefined4 *)(iVar6 + 0xd4) = uVar7;
    uVar9 = FUN_71ba0b38(uVar9,*(undefined4 *)(iVar6 + 0x10c));
    FUN_71ba0b38(uVar9,*(undefined4 *)(iVar6 + 0x110));
    FUN_71ba17bc();
    uVar9 = FUN_71ba1b94();
    *(undefined4 *)(iVar6 + 0xcc) = uVar9;
    iVar2 = FUN_71ba2d50(uVar8,uVar7);
    uVar9 = *(undefined4 *)(iVar6 + 0x104);
    if (iVar2 != 0) {
      uVar7 = uVar8;
    }
    uVar8 = *(undefined4 *)(iVar4 + 0x1564);
    *(undefined4 *)(iVar6 + 0xe4) = uVar7;
    uVar7 = FUN_71ba240c(uVar9,param_2);
    iVar2 = FUN_71ba2d30(uVar7,0);
    if (iVar2 != 0) {
      uVar7 = 0;
    }
    iVar2 = FUN_71ba2d50(param_2,0);
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = uVar7;
    }
    uVar7 = FUN_71ba0b38(uVar3,uVar1);
    uVar1 = *(undefined4 *)(iVar6 + 0xf8);
    iVar2 = FUN_71ba2d50(uVar1,uVar7);
    if (iVar2 != 0) {
      uVar7 = uVar1;
    }
    uVar1 = FUN_71ba0b38(uVar7,uVar5);
    FUN_71ba0b38(uVar1,uVar8);
    FUN_71ba17bc();
    uVar1 = FUN_71ba1b94();
    *(undefined4 *)(iVar6 + 0xd0) = uVar1;
    uVar5 = *(undefined4 *)(iVar4 + 0x1564);
    *(undefined4 *)(iVar6 + 0xf8) = 0;
    *(undefined4 *)(iVar6 + 0x104) = 0;
    iVar2 = FUN_71ba2d50(uVar9,param_2);
    if (iVar2 != 0) {
      param_2 = uVar9;
    }
    *(undefined4 *)(iVar6 + 0x108) = param_2;
    *(undefined4 *)(iVar6 + 0x100) = uVar7;
    uVar7 = FUN_71ba240c(uVar1,uVar5);
    uVar1 = *(undefined4 *)(iVar6 + 0xe8);
    iVar2 = FUN_71ba2d50(uVar1,uVar7);
    if (iVar2 != 0) {
      uVar7 = uVar1;
    }
    *(undefined4 *)(iVar6 + 0xe8) = uVar7;
    if (*(int *)(iVar6 + 0x1a0) == 0) {
      *(undefined1 *)(*(int *)(iVar4 + 0x1a6c) + 0x8c) = 1;
      iVar4 = *(int *)(iVar4 + 0x1a6c);
      if (*(char *)(iVar4 + 0x8f) == '\0') {
        uVar7 = *puVar10;
        *(undefined4 *)(iVar4 + 0x104) = *(undefined4 *)(iVar4 + 0x108);
        *(undefined4 *)(iVar4 + 0xf4) = *(undefined4 *)(iVar4 + 0xfc);
        *(undefined4 *)(iVar4 + 0xf8) = *(undefined4 *)(iVar4 + 0x100);
        *(undefined4 *)(iVar4 + 0xd0) = *(undefined4 *)(iVar4 + 0xd8);
        uVar7 = FUN_71ba0b38(uVar7,*(undefined4 *)(iVar4 + 0xd4));
        *(undefined4 *)(iVar4 + 0xcc) = uVar7;
        return;
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_718ebd74
// Entry: 0x718ebd74 | Size: 1724 bytes
// =========================================================================

undefined4 FUN_718ebd74(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 uVar17;
  int *piVar18;
  uint uVar19;
  undefined4 *puVar20;
  undefined4 uVar21;
  bool bVar22;
  
  iVar3 = DAT_712042b4;
  iVar12 = *(int *)(DAT_712042b4 + 0x1a6c);
  if (param_2 != 0) {
    uVar19 = *(uint *)(iVar12 + 0x140);
    *(uint *)(iVar12 + 0x148) = *(uint *)(iVar12 + 0x148) | 1 << (uVar19 & 0xff);
    iVar14 = *(int *)(iVar3 + 0x1bd4);
    if ((((iVar14 == param_2) || (*(char *)(iVar3 + 0x1c24) != '\0')) &&
        (iVar16 = *(int *)(iVar3 + 0x1bd0), *(int *)(iVar16 + 0x328) == *(int *)(iVar12 + 0x328)))
       && ((iVar12 == iVar16 || (((*(uint *)(iVar16 + 8) | *(uint *)(iVar12 + 8)) & 0x800000) != 0))
          )) {
      if (param_3 == (undefined4 *)0x0) {
        param_3 = param_1;
      }
      uVar8 = *(undefined4 *)(iVar12 + 0xc);
      uVar9 = *(undefined4 *)(iVar12 + 0x10);
      iVar2 = FUN_71ba240c(*param_3);
      iVar4 = FUN_71ba240c(param_3[1],uVar9);
      iVar5 = FUN_71ba240c(param_3[2],uVar8);
      iVar6 = FUN_71ba240c(param_3[3],uVar9);
      uVar7 = *(uint *)(iVar12 + 0x1b0);
      if ((*(char *)(iVar3 + 0x1c25) != '\0') && (*(uint *)(iVar3 + 0x1c18) == uVar19)) {
        if ((uVar7 & 0x10) == 0) {
          *(int *)(iVar3 + 0x1c2c) = iVar2;
          *(int *)(iVar3 + 0x1c30) = iVar4;
          *(int *)(iVar3 + 0x1c34) = iVar5;
          *(undefined1 *)(iVar3 + 0x1c25) = 0;
          *(int *)(iVar3 + 0x1c28) = param_2;
          *(int *)(iVar3 + 0x1c38) = iVar6;
          *(undefined1 *)(iVar3 + 0x1c24) = *(undefined1 *)(iVar3 + 0x1c3c);
        }
        else if (*(int *)(iVar3 + 0x1c28) == 0) {
          *(int *)(iVar3 + 0x1c2c) = iVar2;
          *(int *)(iVar3 + 0x1c30) = iVar4;
          *(int *)(iVar3 + 0x1c28) = param_2;
          *(int *)(iVar3 + 0x1c34) = iVar5;
          *(int *)(iVar3 + 0x1c38) = iVar6;
        }
      }
      if (((iVar14 != param_2) || ((*(byte *)(iVar3 + 0x1c40) & 0x10) != 0)) && ((uVar7 & 0xc) == 0)
         ) {
        iVar14 = 0x1ca8;
        if (iVar12 == iVar16) {
          iVar14 = 0x1c58;
        }
        if (*(char *)(iVar3 + 0x1c3c) != '\0') {
          piVar18 = (int *)(iVar3 + iVar14);
          iVar14 = FUN_718f480c(piVar18,*param_3,param_3[1],param_3[2],param_3[3]);
          if (iVar14 != 0) {
            piVar18[1] = param_2;
            *piVar18 = iVar12;
            iVar14 = *(int *)(iVar12 + 0x14c);
            piVar18[6] = iVar2;
            piVar18[7] = iVar4;
            piVar18[8] = iVar5;
            piVar18[9] = iVar6;
            piVar18[2] = iVar14;
          }
        }
        if ((*(byte *)(iVar3 + 0x1c40) & 0x20) != 0) {
          uVar9 = param_3[1];
          uVar8 = *(undefined4 *)(iVar12 + 0x240);
          iVar14 = FUN_71ba2d10(uVar9,uVar8);
          if (iVar14 != 0) {
            uVar11 = param_3[3];
            uVar10 = *(undefined4 *)(iVar12 + 0x238);
            iVar14 = FUN_71ba2d70(uVar11);
            if (iVar14 != 0) {
              uVar15 = *param_3;
              iVar14 = FUN_71ba2d10(uVar15,*(undefined4 *)(iVar12 + 0x23c));
              if (iVar14 != 0) {
                uVar13 = param_3[2];
                iVar14 = FUN_71ba2d70(uVar13,*(undefined4 *)(iVar12 + 0x234));
                if (iVar14 != 0) {
                  iVar14 = FUN_71ba2d10(uVar11,uVar10);
                  iVar16 = FUN_71ba2d70(uVar11,uVar8);
                  uVar1 = uVar11;
                  if (iVar16 != 0) {
                    uVar1 = uVar8;
                  }
                  if (iVar14 != 0) {
                    uVar1 = uVar10;
                  }
                  iVar14 = FUN_71ba2d10(uVar9);
                  iVar16 = FUN_71ba2d70(uVar9,uVar8);
                  if (iVar16 == 0) {
                    uVar8 = uVar9;
                  }
                  if (iVar14 != 0) {
                    uVar8 = uVar10;
                  }
                  uVar8 = FUN_71ba240c(uVar1,uVar8);
                  uVar10 = FUN_71ba240c(uVar11,uVar9);
                  uVar10 = FUN_71ba21e8(uVar10,0x3f333333);
                  iVar14 = FUN_71ba2d50(uVar8,uVar10);
                  if ((iVar14 != 0) &&
                     (iVar14 = FUN_718f480c(iVar3 + 0x1c80,uVar15,uVar9,uVar13,uVar11), iVar14 != 0)
                     ) {
                    *(int *)(iVar3 + 0x1c84) = param_2;
                    *(int *)(iVar3 + 0x1c80) = iVar12;
                    uVar8 = *(undefined4 *)(iVar12 + 0x14c);
                    *(int *)(iVar3 + 0x1c98) = iVar2;
                    *(int *)(iVar3 + 0x1c9c) = iVar4;
                    *(int *)(iVar3 + 0x1ca0) = iVar5;
                    *(int *)(iVar3 + 0x1ca4) = iVar6;
                    *(undefined4 *)(iVar3 + 0x1c88) = uVar8;
                  }
                }
              }
            }
          }
        }
      }
      if (*(int *)(iVar3 + 0x1bd4) == param_2) {
        *(int *)(iVar3 + 0x1bd0) = iVar12;
        *(undefined4 *)(iVar3 + 0x1c18) = *(undefined4 *)(iVar12 + 0x140);
        uVar8 = *(undefined4 *)(iVar12 + 0x14c);
        *(undefined1 *)(iVar3 + 0x1c20) = 1;
        *(undefined4 *)(iVar3 + 0x1bd8) = uVar8;
        *(undefined4 *)(iVar3 + 0x1c1c) = *(undefined4 *)(iVar12 + 0x1ac);
        iVar14 = iVar12 + *(int *)(iVar12 + 0x140) * 0x10;
        *(int *)(iVar14 + 0x338) = iVar2;
        *(int *)(iVar14 + 0x33c) = iVar4;
        *(int *)(iVar14 + 0x340) = iVar5;
        *(int *)(iVar14 + 0x344) = iVar6;
      }
    }
  }
  *(int *)(iVar12 + 0x118) = param_2;
  uVar8 = param_1[1];
  uVar9 = param_1[2];
  uVar10 = param_1[3];
  *(undefined4 *)(iVar12 + 0x120) = *param_1;
  *(undefined4 *)(iVar12 + 0x124) = uVar8;
  *(undefined4 *)(iVar12 + 0x128) = uVar9;
  *(undefined4 *)(iVar12 + 300) = uVar10;
  *(undefined4 *)(iVar12 + 0x11c) = 0;
  *(undefined4 *)(iVar3 + 0x1b50) = 0;
  iVar3 = DAT_712042b4;
  puVar20 = (undefined4 *)(DAT_712042b4 + 0x1578);
  iVar14 = *(int *)(DAT_712042b4 + 0x1a6c);
  uVar9 = param_1[3];
  uVar8 = *(undefined4 *)(iVar14 + 0x238);
  iVar16 = FUN_71ba2d10(uVar8,uVar9);
  if (((iVar16 == 0) ||
      (iVar16 = FUN_71ba2d70(*(undefined4 *)(iVar14 + 0x240),param_1[1]), iVar16 == 0)) ||
     ((iVar16 = FUN_71ba2d10(*(undefined4 *)(iVar14 + 0x234),param_1[2]), iVar16 == 0 ||
      (iVar16 = FUN_71ba2d70(*(undefined4 *)(iVar14 + 0x23c),*param_1), iVar16 == 0)))) {
    if (param_2 != 0) {
      iVar16 = *(int *)(iVar3 + 0x1aa4);
      bVar22 = iVar16 == param_2;
      if (!bVar22) {
        iVar16 = *(int *)(iVar3 + 0x1bd4);
      }
      if (bVar22 || iVar16 == param_2) goto LAB_718ebedc;
    }
    if (*(char *)(iVar3 + 0x2db0) == '\0') {
      return 0;
    }
  }
LAB_718ebedc:
  uVar10 = *(undefined4 *)(iVar14 + 0x234);
  uVar11 = *param_1;
  iVar16 = FUN_71ba2d50(uVar11,uVar10);
  uVar15 = *puVar20;
  if (iVar16 != 0) {
    uVar10 = uVar11;
  }
  uVar10 = FUN_71ba240c(uVar10,uVar15);
  uVar11 = *(undefined4 *)(iVar3 + 0xe4);
  iVar16 = FUN_71ba2d50(uVar11,uVar10);
  if (iVar16 != 0) {
    uVar10 = *(undefined4 *)(iVar14 + 0x23c);
    uVar13 = *(undefined4 *)(iVar14 + 0x240);
    iVar14 = FUN_71ba2d10(uVar9,uVar13);
    uVar17 = param_1[2];
    iVar16 = FUN_71ba2d10(uVar17,uVar10);
    uVar1 = param_1[1];
    iVar2 = FUN_71ba2d50(uVar1,uVar8);
    uVar21 = *(undefined4 *)(iVar3 + 0x157c);
    if (iVar14 != 0) {
      uVar13 = uVar9;
    }
    uVar9 = FUN_71ba0b38(uVar13,uVar21);
    if (iVar16 != 0) {
      uVar10 = uVar17;
    }
    uVar10 = FUN_71ba0b38(uVar15,uVar10);
    if (iVar2 != 0) {
      uVar8 = uVar1;
    }
    uVar8 = FUN_71ba240c(uVar8,uVar21);
    uVar15 = *(undefined4 *)(iVar3 + 0xe8);
    iVar3 = FUN_71ba2d50(uVar15,uVar8);
    if (((iVar3 != 0) && (iVar3 = FUN_71ba2d10(uVar11,uVar10), iVar3 != 0)) &&
       (iVar3 = FUN_71ba2d10(uVar15,uVar9), iVar3 != 0)) {
      *(uint *)(iVar12 + 0x11c) = *(uint *)(iVar12 + 0x11c) | 1;
    }
  }
  return 1;
}


// =========================================================================
// Function: FUN_718ec840
// Entry: 0x718ec840 | Size: 404 bytes
// =========================================================================

void FUN_718ec840(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (*(char *)(param_1 + 0x8d) != '\0') {
    iVar2 = (int)*(char *)(param_1 + 0xa0);
    iVar1 = iVar2;
    iVar3 = iVar2;
    if (iVar2 < 1) {
      iVar3 = (int)*(char *)(param_1 + 0xa1);
      iVar1 = iVar3 + -1;
    }
    if (iVar1 < 0 != (iVar2 < 1 && SBORROW4(iVar3,1))) goto LAB_718ec9bc;
  }
  if (((*(char *)(param_1 + 0x91) == '\0') || (*(char *)(param_1 + 0xa9) != '\0')) ||
     (*(char *)(param_1 + 0xa8) < '\x01')) {
    uVar5 = *(undefined4 *)(param_1 + 0x34);
    iVar1 = FUN_71ba2cf0(uVar5,0);
    if (iVar1 != 0) {
      FUN_71ba240c(*(undefined4 *)(param_1 + 0xe4),*(undefined4 *)(param_1 + 0xdc));
      FUN_71ba17bc();
      uVar5 = FUN_71ba1b94();
    }
    *param_2 = uVar5;
    uVar5 = *(undefined4 *)(param_1 + 0x38);
    iVar1 = FUN_71ba2cf0(uVar5,0);
    if (iVar1 != 0) {
      FUN_71ba240c(*(undefined4 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xe0));
      FUN_71ba17bc();
      uVar5 = FUN_71ba1b94();
    }
    param_2[1] = uVar5;
    uVar5 = *(undefined4 *)(param_1 + 0x34);
    iVar1 = FUN_71ba2cf0(uVar5,0);
    if (iVar1 != 0) {
      uVar6 = *(undefined4 *)(param_1 + 0xe4);
      uVar5 = *(undefined4 *)(param_1 + 0xec);
      uVar4 = *(undefined4 *)(param_1 + 0xdc);
      iVar1 = FUN_71ba2d50(uVar6,uVar5);
      if (iVar1 != 0) {
        uVar5 = uVar6;
      }
      FUN_71ba240c(uVar5,uVar4);
      FUN_71ba17bc();
      uVar5 = FUN_71ba1b94();
    }
    *param_3 = uVar5;
    uVar5 = *(undefined4 *)(param_1 + 0x38);
    iVar1 = FUN_71ba2cf0(uVar5,0);
    if (iVar1 != 0) {
      uVar6 = *(undefined4 *)(param_1 + 0xe8);
      uVar5 = *(undefined4 *)(param_1 + 0xf0);
      uVar4 = *(undefined4 *)(param_1 + 0xe0);
      iVar1 = FUN_71ba2d50(uVar6,uVar5);
      if (iVar1 != 0) {
        uVar5 = uVar6;
      }
      FUN_71ba240c(uVar5,uVar4);
      FUN_71ba17bc();
      uVar5 = FUN_71ba1b94();
      param_3[1] = uVar5;
      return;
    }
    param_3[1] = uVar5;
    return;
  }
LAB_718ec9bc:
  uVar5 = *(undefined4 *)(param_1 + 0x28);
  *param_2 = *(undefined4 *)(param_1 + 0x24);
  param_2[1] = uVar5;
  uVar5 = *(undefined4 *)(param_1 + 0x30);
  *param_3 = *(undefined4 *)(param_1 + 0x2c);
  param_3[1] = uVar5;
  return;
}


// =========================================================================
// Function: FUN_718ecbe4
// Entry: 0x718ecbe4 | Size: 968 bytes
// =========================================================================

void FUN_718ecbe4(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar1 = DAT_712042b4;
  uVar10 = 0;
  puVar16 = (undefined4 *)(DAT_712042b4 + 0x152c);
  uVar9 = *(uint *)(param_2 + 8);
  uVar2 = 0;
  if ((uVar9 & 1) == 0) {
    uVar2 = FUN_71ba21e8(*(undefined4 *)(DAT_712042b4 + 0x1934),*(undefined4 *)(param_2 + 0x280));
    if (*(int *)(param_2 + 0x31c) != 0) {
      uVar2 = FUN_71ba21e8(uVar2,*(undefined4 *)(*(int *)(param_2 + 0x31c) + 0x280));
    }
    uVar3 = FUN_71ba0b38(*(undefined4 *)(iVar1 + 0x1554),*(undefined4 *)(iVar1 + 0x1554));
    uVar2 = FUN_71ba0b38(uVar3,uVar2);
  }
  if ((uVar9 & 0x400) != 0) {
    uVar3 = *(undefined4 *)(param_2 + 0x158);
    uVar10 = FUN_71ba21e8(*(undefined4 *)(iVar1 + 0x1934),*(undefined4 *)(param_2 + 0x280));
    if (*(int *)(param_2 + 0x31c) != 0) {
      uVar10 = FUN_71ba21e8(uVar10,*(undefined4 *)(*(int *)(param_2 + 0x31c) + 0x280));
    }
    uVar10 = FUN_71ba0b38(uVar3,uVar10);
    uVar3 = FUN_71ba0b38(*(undefined4 *)(iVar1 + 0x1554),*(undefined4 *)(iVar1 + 0x1554));
    uVar10 = FUN_71ba0b38(uVar3,uVar10);
  }
  uVar2 = FUN_71ba0b38(uVar2,uVar10);
  uVar11 = *(undefined4 *)(param_2 + 0x3c);
  uVar10 = FUN_71ba0b38(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x40));
  uVar3 = FUN_71ba0b38(uVar10,param_3[1]);
  uVar3 = FUN_71ba0b38(uVar2,uVar3);
  uVar11 = FUN_71ba0b38(uVar11,uVar11);
  uVar4 = FUN_71ba0b38(uVar11,*param_3);
  uVar4 = FUN_71ba0b38(uVar4,0);
  if ((uVar9 & 0x2000000) != 0) {
    *param_1 = uVar4;
    param_1[1] = uVar3;
    return;
  }
  uVar13 = *puVar16;
  uVar5 = *(undefined4 *)(iVar1 + 0x1530);
  uVar6 = *(undefined4 *)(iVar1 + 0x15c8);
  uVar14 = *(undefined4 *)(iVar1 + 0x15c4);
  iVar7 = FUN_71ba2d10(uVar13,0x40800000);
  uVar8 = 0x40800000;
  if (iVar7 != 0) {
    uVar8 = uVar13;
  }
  uVar14 = FUN_71ba0b38(uVar14,uVar14);
  uVar17 = *(undefined4 *)(**(int **)(iVar1 + 0x1bcc) + 0x10);
  uVar14 = FUN_71ba240c(*(undefined4 *)(**(int **)(iVar1 + 0x1bcc) + 0xc),uVar14);
  if ((uVar9 & 0x14000000) == 0) {
    uVar8 = uVar13;
  }
  iVar7 = FUN_71ba2d50(uVar8,uVar14);
  if (iVar7 != 0) {
    uVar14 = uVar8;
  }
  iVar7 = FUN_71ba2d70(uVar4,uVar14);
  uVar13 = uVar4;
  if (iVar7 != 0) {
    uVar13 = uVar14;
  }
  iVar7 = FUN_71ba2d10(uVar4,uVar8);
  if (iVar7 != 0) {
    uVar13 = uVar8;
  }
  *param_1 = uVar13;
  iVar7 = FUN_71ba2d10(uVar5,0x40800000);
  uVar4 = 0x40800000;
  if (iVar7 != 0) {
    uVar4 = uVar5;
  }
  uVar8 = FUN_71ba0b38(uVar6,uVar6);
  uVar8 = FUN_71ba240c(uVar17,uVar8);
  if ((uVar9 & 0x14000000) == 0) {
    uVar4 = uVar5;
  }
  iVar7 = FUN_71ba2d50(uVar4,uVar8);
  if (iVar7 != 0) {
    uVar8 = uVar4;
  }
  iVar7 = FUN_71ba2d70(uVar3,uVar8);
  uVar5 = uVar3;
  if (iVar7 != 0) {
    uVar5 = uVar8;
  }
  iVar7 = FUN_71ba2d10(uVar3,uVar4);
  if (iVar7 != 0) {
    uVar5 = uVar4;
  }
  param_1[1] = uVar5;
  FUN_718ed3d4(&uStack_2c,param_2,uVar13,uVar5);
  uVar3 = FUN_71ba240c(uStack_2c,uVar11);
  iVar7 = FUN_71ba2d10(uVar3,*param_3);
  uVar9 = *(uint *)(param_2 + 8);
  if ((iVar7 == 0) || (uVar15 = 1, (uVar9 & 0x808) != 0x800)) {
    uVar15 = (uVar9 & 0xffff) >> 0xf;
  }
  uVar10 = FUN_71ba240c(uStack_28,uVar10);
  uVar2 = FUN_71ba240c(uVar10,uVar2);
  iVar7 = FUN_71ba2d10(uVar2,param_3[1]);
  if (iVar7 == 0) {
    uVar12 = (uVar9 & 0x7fff) >> 0xe;
  }
  else {
    uVar12 = 1;
    if ((uVar9 & 8) != 0) {
      uVar12 = (uVar9 & 0x7fff) >> 0xe;
    }
  }
  if (uVar15 != 0) {
    uVar2 = FUN_71ba0b38(*(undefined4 *)(iVar1 + 0x1588),uVar5);
    param_1[1] = uVar2;
  }
  if (uVar12 != 0) {
    uVar2 = FUN_71ba0b38(*(undefined4 *)(iVar1 + 0x1588),uVar13);
    *param_1 = uVar2;
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_718ed3d4
// Entry: 0x718ed3d4 | Size: 828 bytes
// =========================================================================

void FUN_718ed3d4(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar5 = DAT_712042b4;
  puVar8 = (undefined4 *)(DAT_712042b4 + 0x1524);
  if ((*(byte *)(DAT_712042b4 + 0x1af0) & 0x10) != 0) {
    uVar11 = *(undefined4 *)(DAT_712042b4 + 0x1b2c);
    uVar1 = *(undefined4 *)(DAT_712042b4 + 0x1b30);
    uVar2 = *(undefined4 *)(DAT_712042b4 + 0x1b38);
    uVar9 = *(undefined4 *)(DAT_712042b4 + 0x1b34);
    iVar3 = FUN_71ba2d50(uVar11,0);
    if ((iVar3 == 0) || (iVar3 = FUN_71ba2d50(uVar9,0), iVar3 == 0)) {
      param_3 = *(undefined4 *)(param_2 + 0x1c);
    }
    else {
      iVar3 = FUN_71ba2d70(uVar11,param_3);
      iVar4 = FUN_71ba2d10(uVar9,param_3);
      if (iVar4 != 0) {
        param_3 = uVar9;
      }
      if (iVar3 != 0) {
        param_3 = uVar11;
      }
    }
    iVar3 = FUN_71ba2d50(uVar1,0);
    if ((iVar3 == 0) || (iVar3 = FUN_71ba2d50(uVar2,0), iVar3 == 0)) {
      param_4 = *(undefined4 *)(param_2 + 0x20);
    }
    else {
      iVar3 = FUN_71ba2d70(uVar1,param_4);
      iVar4 = FUN_71ba2d10(uVar2,param_4);
      if (iVar4 != 0) {
        param_4 = uVar2;
      }
      if (iVar3 != 0) {
        param_4 = uVar1;
      }
    }
    if (*(code **)(iVar5 + 0x1b3c) != (code *)0x0) {
      uStack_40 = *(undefined4 *)(iVar5 + 0x1b40);
      uStack_34 = *(undefined4 *)(param_2 + 0x1c);
      uStack_3c = *(undefined4 *)(param_2 + 0xc);
      uStack_38 = *(undefined4 *)(param_2 + 0x10);
      uStack_30 = *(undefined4 *)(param_2 + 0x20);
      uStack_2c = param_3;
      uStack_28 = param_4;
      (**(code **)(iVar5 + 0x1b3c))(&uStack_40);
      param_3 = uStack_2c;
      param_4 = uStack_28;
    }
    FUN_71ba17bc(param_3);
    param_3 = FUN_71ba1b94();
    FUN_71ba17bc(param_4);
    param_4 = FUN_71ba1b94();
  }
  uVar10 = *(uint *)(param_2 + 8);
  if ((uVar10 & 0x1000040) == 0) {
    uVar1 = *(undefined4 *)(iVar5 + 0x152c);
    uVar2 = *(undefined4 *)(iVar5 + 0x1530);
    iVar5 = FUN_71ba2d50(param_3,uVar1);
    iVar3 = FUN_71ba2d50(param_4,uVar2);
    uVar9 = 0;
    if (iVar3 != 0) {
      uVar2 = param_4;
    }
    if (iVar5 != 0) {
      uVar1 = param_3;
    }
    uVar11 = 0;
    if ((uVar10 & 1) == 0) {
      puVar7 = (undefined4 *)(DAT_712042b4 + 0x1554);
      uVar9 = FUN_71ba21e8(*(undefined4 *)(DAT_712042b4 + 0x1934),*(undefined4 *)(param_2 + 0x280));
      if (*(int *)(param_2 + 0x31c) != 0) {
        uVar9 = FUN_71ba21e8(uVar9,*(undefined4 *)(*(int *)(param_2 + 0x31c) + 0x280));
      }
      uVar6 = FUN_71ba0b38(*puVar7,*puVar7);
      uVar9 = FUN_71ba0b38(uVar6,uVar9);
    }
    if ((uVar10 & 0x400) != 0) {
      puVar7 = (undefined4 *)(DAT_712042b4 + 0x1554);
      uVar6 = *(undefined4 *)(param_2 + 0x158);
      uVar11 = FUN_71ba21e8(*(undefined4 *)(DAT_712042b4 + 0x1934),*(undefined4 *)(param_2 + 0x280))
      ;
      if (*(int *)(param_2 + 0x31c) != 0) {
        uVar11 = FUN_71ba21e8(uVar11,*(undefined4 *)(*(int *)(param_2 + 0x31c) + 0x280));
      }
      uVar11 = FUN_71ba0b38(uVar6,uVar11);
      uVar6 = FUN_71ba0b38(*puVar7,*puVar7);
      uVar11 = FUN_71ba0b38(uVar6,uVar11);
    }
    uVar6 = FUN_71ba0b38(*puVar8,0xbf800000);
    iVar5 = FUN_71ba2d30(uVar6,0);
    uVar9 = FUN_71ba0b38(uVar9,uVar11);
    if (iVar5 != 0) {
      uVar6 = 0;
    }
    param_4 = FUN_71ba0b38(uVar9,uVar6);
    iVar5 = FUN_71ba2d50(uVar2,param_4);
    param_3 = uVar1;
    if (iVar5 != 0) {
      param_4 = uVar2;
    }
  }
  *param_1 = param_3;
  param_1[1] = param_4;
  return;
}


// =========================================================================
// Function: FUN_718eda98
// Entry: 0x718eda98 | Size: 884 bytes
// =========================================================================

void FUN_718eda98(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar6 = DAT_712042b4;
  puVar1 = (undefined4 *)(DAT_712042b4 + 0x1568);
  iVar2 = **(int **)(DAT_712042b4 + 0x1bcc);
  uVar12 = *(undefined4 *)(iVar2 + 4);
  uVar13 = *(undefined4 *)(iVar2 + 8);
  uVar8 = *(undefined4 *)(iVar2 + 0xc);
  uVar3 = FUN_71ba0b38(uVar13,*(undefined4 *)(iVar2 + 0x10));
  uVar4 = FUN_71ba240c(uVar3,uVar13);
  uVar11 = *(uint *)(iVar6 + 0x15c8);
  uVar5 = FUN_71ba0b38(uVar11,uVar11);
  iVar2 = FUN_71ba2d70(uVar4,uVar5);
  uVar7 = 0;
  if (iVar2 != 0) {
    uVar7 = uVar11 ^ 0x80000000;
  }
  uStack_28 = FUN_71ba0b38(uVar3,uVar7);
  uVar3 = FUN_71ba0b38(uVar12,uVar8);
  uVar4 = FUN_71ba240c(uVar3,uVar12);
  uVar10 = *(uint *)(iVar6 + 0x15c4);
  uVar5 = FUN_71ba0b38(uVar10,uVar10);
  iVar2 = FUN_71ba2d70(uVar4,uVar5);
  uVar11 = 0;
  if (iVar2 != 0) {
    uVar11 = uVar10 ^ 0x80000000;
  }
  uStack_2c = FUN_71ba0b38(uVar3,uVar11);
  uStack_30 = FUN_71ba240c(uVar13,uVar7);
  uStack_34 = FUN_71ba240c(uVar12,uVar11);
  uVar7 = *(uint *)(param_2 + 8);
  puVar9 = (undefined4 *)(param_2 + 0xc);
  if ((uVar7 & 0x10000000) == 0) {
    if ((uVar7 & 0x4000000) == 0) {
      if ((uVar7 & 0x2000000) == 0) {
        uVar3 = *(undefined4 *)(param_2 + 0x10);
        *param_1 = *puVar9;
        param_1[1] = uVar3;
        return;
      }
      puVar1 = (undefined4 *)((uint)&uStack_48 | 4);
      uVar3 = *(undefined4 *)(iVar6 + 0x15cc);
      FUN_718f01cc(&uStack_50);
      uStack_3c = 0;
      uStack_40 = 0;
      uStack_44 = 0;
      uStack_48 = 0;
      if (((*(char *)(iVar6 + 0x1c22) == '\0') && (*(char *)(iVar6 + 0x1c23) != '\0')) &&
         ((*(byte *)(iVar6 + 8) & 4) == 0)) {
        uVar12 = FUN_71ba0b38(uStack_50,0x41800000);
        uVar4 = 0x41000000;
        uVar3 = uStack_4c;
        uVar5 = uStack_4c;
        uVar8 = uStack_50;
      }
      else {
        uVar3 = FUN_71ba21e8(uVar3,0x41c00000);
        uVar12 = FUN_71ba0b38(uVar3,uStack_50);
        uVar4 = uStack_4c;
        uVar5 = uStack_4c;
        uVar8 = uStack_50;
      }
      uVar3 = FUN_71ba0b38(uVar3,uVar4);
      puVar1[1] = uVar12;
      puVar1[2] = uVar3;
      uVar3 = FUN_71ba0b38(uVar5,0xc1000000);
      *puVar1 = uVar3;
      uStack_48 = FUN_71ba0b38(uVar8,0xc1800000);
      uVar3 = 2;
      puVar9 = &uStack_50;
      goto LAB_718edcf8;
    }
    uVar3 = *puVar9;
    uVar4 = *(undefined4 *)(param_2 + 0x10);
    uStack_3c = FUN_71ba0b38(uVar4,0x3f800000);
    uStack_40 = FUN_71ba0b38(uVar3,0x3f800000);
    uStack_44 = FUN_71ba0b38(uVar4,0xbf800000);
    uStack_48 = FUN_71ba0b38(uVar3,0xbf800000);
  }
  else {
    iVar6 = *(int *)(*(int *)(iVar6 + 0x1a58) + *(int *)(iVar6 + 0x1a50) * 4 + -8);
    if (*(char *)(iVar6 + 0x152) == '\0') {
      uVar5 = *(undefined4 *)(iVar6 + 0xc);
      uVar8 = *puVar1;
      uVar12 = *(undefined4 *)(iVar6 + 0x14);
      uVar3 = *(undefined4 *)(iVar6 + 0x80);
      uVar4 = FUN_71ba0b38(uVar8,uVar5);
      uVar5 = FUN_71ba0b38(uVar5,uVar12);
      uVar5 = FUN_71ba240c(uVar5,uVar8);
      uStack_40 = FUN_71ba240c(uVar5,uVar3);
      uStack_44 = 0xff7fffff;
      uStack_3c = 0x7f7fffff;
      uStack_48 = uVar4;
    }
    else {
      uStack_44 = *(undefined4 *)(iVar6 + 0x238);
      uStack_3c = *(undefined4 *)(iVar6 + 0x240);
      uStack_40 = 0x7f7fffff;
      uStack_48 = 0xff7fffff;
    }
  }
  uVar3 = 0;
LAB_718edcf8:
  FUN_718f0a08(param_1,puVar9,param_2 + 0x14,param_2 + 0xa4,&uStack_34,&uStack_48,uVar3);
  return;
}


// =========================================================================
// Function: FUN_718ee154
// Entry: 0x718ee154 | Size: 300 bytes
// =========================================================================

void FUN_718ee154(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar5 = *(undefined4 *)(param_1 + 0x14);
  uVar6 = *(undefined4 *)(param_1 + 0x18);
  if ((*(char *)(DAT_712042b4 + 0xb5) != '\0') && ((*(byte *)(param_1 + 8) & 1) == 0)) {
    puVar7 = (undefined4 *)(DAT_712042b4 + 0x1554);
    uVar6 = FUN_71ba21e8(*(undefined4 *)(DAT_712042b4 + 0x1934),*(undefined4 *)(param_1 + 0x280));
    if (*(int *)(param_1 + 0x31c) != 0) {
      uVar6 = FUN_71ba21e8(uVar6,*(undefined4 *)(*(int *)(param_1 + 0x31c) + 0x280));
    }
    uVar1 = FUN_71ba0b38(*puVar7,*puVar7);
    uVar6 = FUN_71ba0b38(uVar1,uVar6);
  }
  uVar9 = param_2[2];
  uVar8 = param_2[3];
  uVar2 = FUN_71ba240c(param_2[1],uVar6);
  uVar6 = *(undefined4 *)(param_1 + 0xc);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  iVar3 = FUN_71ba2d10(uVar1,uVar2);
  iVar4 = FUN_71ba2d70(uVar1,uVar8);
  if (iVar4 != 0) {
    uVar1 = uVar8;
  }
  uVar8 = *param_2;
  if (iVar3 != 0) {
    uVar1 = uVar2;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar5 = FUN_71ba240c(uVar8,uVar5);
  iVar3 = FUN_71ba2d10(uVar6,uVar5);
  iVar4 = FUN_71ba2d70(uVar6,uVar9);
  if (iVar4 != 0) {
    uVar6 = uVar9;
  }
  if (iVar3 != 0) {
    uVar6 = uVar5;
  }
  *(undefined4 *)(param_1 + 0xc) = uVar6;
  return;
}


// =========================================================================
// Function: FUN_718ee3d0
// Entry: 0x718ee3d0 | Size: 896 bytes
// =========================================================================

void FUN_718ee3d0(undefined4 *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  
  uVar6 = *(undefined4 *)(param_2 + 0x68);
  uVar9 = *(undefined4 *)(param_2 + 0x58);
  uVar7 = *(undefined4 *)(param_2 + 0x5c);
  iVar2 = FUN_71ba2d10(uVar6,0x7f7fffff);
  if (iVar2 != 0) {
    uVar9 = *(undefined4 *)(param_2 + 0x78);
    uVar10 = *(undefined4 *)(param_2 + 0x70);
    iVar2 = FUN_71ba2d70(uVar9,0);
    if (iVar2 != 0) {
      iVar2 = FUN_71ba2d50(uVar9,uVar6);
      uVar3 = FUN_71ba0b38(*(undefined4 *)(param_2 + 0x60),*(undefined4 *)(param_2 + 0x14));
      if (iVar2 == 0) {
        uVar9 = FUN_71ba240c(uVar3,uVar9);
        iVar2 = FUN_71ba2d30(uVar9,uVar6);
        if (iVar2 == 0) goto LAB_718ee4a0;
        uVar9 = FUN_71ba240c(uVar3,uVar6);
        uVar9 = FUN_71ba21e8(uVar9,uVar10);
      }
      else {
        uVar9 = FUN_71ba21e8(uVar6,uVar10);
        uVar6 = 0;
      }
      uVar6 = FUN_71ba0b38(uVar9,uVar6);
    }
LAB_718ee4a0:
    uVar9 = FUN_71ba240c(*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x80));
    uVar9 = FUN_71ba21e8(uVar10,uVar9);
    uVar9 = FUN_71ba240c(uVar6,uVar9);
  }
  uVar6 = *(undefined4 *)(param_2 + 0x6c);
  iVar2 = FUN_71ba2d10(uVar6,0x7f7fffff);
  if (iVar2 == 0) goto LAB_718ee6ac;
  uVar8 = *(uint *)(param_2 + 8);
  uVar10 = 0;
  uVar7 = 0;
  if ((uVar8 & 1) == 0) {
    puVar4 = (undefined4 *)(DAT_712042b4 + 0x1554);
    uVar7 = FUN_71ba21e8(*(undefined4 *)(DAT_712042b4 + 0x1934),*(undefined4 *)(param_2 + 0x280));
    if (*(int *)(param_2 + 0x31c) != 0) {
      uVar7 = FUN_71ba21e8(uVar7,*(undefined4 *)(*(int *)(param_2 + 0x31c) + 0x280));
    }
    uVar3 = FUN_71ba0b38(*puVar4,*puVar4);
    uVar7 = FUN_71ba0b38(uVar3,uVar7);
  }
  if ((uVar8 & 0x400) != 0) {
    uVar3 = *(undefined4 *)(param_2 + 0x158);
    puVar4 = (undefined4 *)(DAT_712042b4 + 0x1554);
    uVar10 = FUN_71ba21e8(*(undefined4 *)(DAT_712042b4 + 0x1934),*(undefined4 *)(param_2 + 0x280));
    if (*(int *)(param_2 + 0x31c) != 0) {
      uVar10 = FUN_71ba21e8(uVar10,*(undefined4 *)(*(int *)(param_2 + 0x31c) + 0x280));
    }
    uVar10 = FUN_71ba0b38(uVar3,uVar10);
    uVar3 = FUN_71ba0b38(*puVar4,*puVar4);
    uVar10 = FUN_71ba0b38(uVar3,uVar10);
  }
  uVar7 = FUN_71ba0b38(uVar7,uVar10);
  uVar3 = *(undefined4 *)(param_2 + 0x7c);
  uVar10 = *(undefined4 *)(param_2 + 0x74);
  iVar2 = FUN_71ba2d70(uVar3,0);
  if (iVar2 != 0) {
    uVar5 = FUN_71ba0b38(*(undefined4 *)(param_2 + 100),*(undefined4 *)(param_2 + 0x18));
    uVar5 = FUN_71ba240c(uVar5,uVar7);
    iVar2 = FUN_71ba2d50(uVar3,uVar6);
    if (iVar2 == 0) {
      uVar3 = FUN_71ba240c(uVar5,uVar3);
      iVar2 = FUN_71ba2d30(uVar3,uVar6);
      if (iVar2 == 0) goto LAB_718ee678;
      uVar3 = FUN_71ba240c(uVar5,uVar6);
      uVar3 = FUN_71ba21e8(uVar3,uVar10);
    }
    else {
      uVar3 = FUN_71ba21e8(uVar6,uVar10);
      uVar6 = 0;
    }
    uVar6 = FUN_71ba0b38(uVar3,uVar6);
  }
LAB_718ee678:
  uVar3 = FUN_71ba240c(*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x84));
  uVar7 = FUN_71ba240c(uVar3,uVar7);
  uVar7 = FUN_71ba21e8(uVar10,uVar7);
  uVar7 = FUN_71ba240c(uVar6,uVar7);
LAB_718ee6ac:
  iVar2 = FUN_71ba2d50(uVar9,0);
  uVar6 = 0;
  if (iVar2 != 0) {
    uVar6 = uVar9;
  }
  FUN_71ba17bc(uVar6);
  uVar9 = FUN_71ba1b94();
  *param_1 = uVar9;
  iVar2 = FUN_71ba2d50(uVar7,0);
  uVar6 = 0;
  if (iVar2 != 0) {
    uVar6 = uVar7;
  }
  FUN_71ba17bc(uVar6);
  uVar6 = FUN_71ba1b94();
  cVar1 = *(char *)(param_2 + 0x8d);
  param_1[1] = uVar6;
  bVar11 = cVar1 == '\0';
  if (bVar11) {
    cVar1 = *(char *)(param_2 + 0x8f);
  }
  if (bVar11 && cVar1 == '\0') {
    uVar7 = *(undefined4 *)(param_2 + 0x60);
    uVar10 = *(undefined4 *)(param_2 + 100);
    iVar2 = FUN_71ba2d70(uVar7,uVar9);
    if (iVar2 != 0) {
      uVar7 = uVar9;
    }
    *param_1 = uVar7;
    iVar2 = FUN_71ba2d70(uVar10,uVar6);
    if (iVar2 != 0) {
      uVar10 = uVar6;
    }
    param_1[1] = uVar10;
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_718eecb0
// Entry: 0x718eecb0 | Size: 248 bytes
// =========================================================================

void FUN_718eecb0(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  char *pcVar4;
  
  iVar1 = DAT_712042b4;
  pcVar4 = (char *)(DAT_712042b4 + 0x2db0);
  if (*pcVar4 != '\0') {
    FUN_718f262c(&DAT_7006c898);
    iVar2 = *(int *)(iVar1 + 0x2db4);
    if (iVar2 == 4) {
      if (1 < *(int *)(iVar1 + 0x2dbc)) {
        if (*(code **)(DAT_712042b4 + 0xd4) != (code *)0x0) {
          puVar3 = &DAT_712042b8;
          if (*(undefined **)(iVar1 + 0x2dc4) != (undefined *)0x0) {
            puVar3 = *(undefined **)(iVar1 + 0x2dc4);
          }
          (**(code **)(DAT_712042b4 + 0xd4))(*(undefined4 *)(DAT_712042b4 + 0xd8),puVar3);
        }
      }
    }
    else if (iVar2 == 2) {
      imp_fclose(*(undefined4 *)(iVar1 + 0x2db8));
    }
    else if (iVar2 == 1) {
      imp_fflush(*(undefined4 *)(iVar1 + 0x2db8));
    }
    iVar2 = *(int *)(iVar1 + 0x2dc4);
    *(undefined4 *)(iVar1 + 0x2db4) = 0;
    *(undefined4 *)(iVar1 + 0x2db8) = 0;
    *pcVar4 = '\0';
    if (iVar2 != 0) {
      *(undefined4 *)(iVar1 + 0x2dbc) = 0;
      *(undefined4 *)(iVar1 + 0x2dc0) = 0;
      if (DAT_712042b4 != 0) {
        *(int *)(DAT_712042b4 + 0x370) = *(int *)(DAT_712042b4 + 0x370) + -1;
      }
      (*DAT_70105bb0)(iVar2,DAT_712042bc);
      *(undefined4 *)(iVar1 + 0x2dc4) = 0;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_718eeef4
// Entry: 0x718eeef4 | Size: 60 bytes
// =========================================================================

void FUN_718eeef4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x31c);
  uVar1 = FUN_71ba21e8(*(undefined4 *)(DAT_712042b4 + 0x1934),*(undefined4 *)(param_1 + 0x280));
  if (iVar2 != 0) {
    FUN_71ba21e8(uVar1,*(undefined4 *)(iVar2 + 0x280));
  }
  return;
}


// =========================================================================
// Function: FUN_718eefa0
// Entry: 0x718eefa0 | Size: 344 bytes
// =========================================================================

void FUN_718eefa0(byte *param_1)

{
  int iVar1;
  undefined *puVar2;
  int extraout_r1;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar10 = *(int *)(DAT_712042b4 + 0x1a6c);
  iVar3 = *(int *)(iVar10 + 0xc0);
  iVar9 = *(int *)(iVar10 + 200);
  puVar2 = (undefined *)(iVar9 + iVar3 * 4);
  uVar6 = *(uint *)(puVar2 + -4);
  if (*param_1 != 0) {
    puVar2 = &DAT_70086edc;
    uVar4 = (uint)*param_1;
    uVar7 = ~uVar6;
    do {
      uVar5 = (uint)param_1[1];
      if ((uVar4 == 0x23 && uVar5 == 0x23) && (param_1[2] == 0x23)) {
        uVar7 = ~uVar6;
      }
      uVar7 = *(uint *)(&DAT_70086edc + (uVar7 & 0xff ^ uVar4) * 4) ^ uVar7 >> 8;
      uVar4 = uVar5;
      param_1 = param_1 + 1;
    } while (uVar5 != 0);
    uVar6 = ~uVar7;
  }
  if (iVar3 == *(int *)(iVar10 + 0xc4)) {
    iVar8 = iVar3 + iVar3 / 2;
    if (iVar3 == 0) {
      iVar8 = 8;
    }
    if (iVar8 <= iVar3 + 1) {
      iVar8 = iVar3 + 1;
    }
    if (DAT_712042b4 != 0) {
      puVar2 = *(undefined **)(DAT_712042b4 + 0x370);
    }
    if (DAT_712042b4 != 0) {
      *(undefined **)(DAT_712042b4 + 0x370) = puVar2 + 1;
    }
    iVar9 = (*DAT_70105bac)(iVar8 << 2,DAT_712042bc);
    if (*(int *)(iVar10 + 200) != 0) {
      imp___aeabi_memcpy(iVar9,*(int *)(iVar10 + 200),*(int *)(iVar10 + 0xc0) << 2);
      iVar1 = *(int *)(iVar10 + 200);
      iVar3 = extraout_r1;
      if (iVar1 != 0) {
        iVar3 = DAT_712042b4;
      }
      if (iVar1 != 0 && iVar3 != 0) {
        *(int *)(iVar3 + 0x370) = *(int *)(iVar3 + 0x370) + -1;
      }
      (*DAT_70105bb0)(iVar1,DAT_712042bc);
    }
    iVar3 = *(int *)(iVar10 + 0xc0);
    *(int *)(iVar10 + 0xc4) = iVar8;
    *(int *)(iVar10 + 200) = iVar9;
  }
  *(uint *)(iVar9 + iVar3 * 4) = uVar6;
  *(int *)(iVar10 + 0xc0) = *(int *)(iVar10 + 0xc0) + 1;
  return;
}


// =========================================================================
// Function: FUN_718ef20c
// Entry: 0x718ef20c | Size: 100 bytes
// =========================================================================

bool FUN_718ef20c(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  int iVar1;
  
  iVar1 = imp_strcmp(param_1,&DAT_700619bf);
  return (param_7 == 2 &&
         (param_6 == 0x14 &&
         (param_5 == 0x10 && (param_4 == 8 && (param_2 == 0x1510 && param_3 == 0x414))))) &&
         iVar1 == 0;
}


// =========================================================================
// Function: FUN_718ef2c4
// Entry: 0x718ef2c4 | Size: 60 bytes
// =========================================================================

void FUN_718ef2c4(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  piVar2 = (int *)(DAT_712042b4 + 0x1a6c);
  *(undefined1 *)(*piVar2 + 0x8c) = 1;
  iVar1 = *piVar2;
  uVar3 = *(undefined4 *)(*(int *)(iVar1 + 0x1c4) + *(int *)(iVar1 + 0x1bc) * 4 + -4);
  *(int *)(iVar1 + 0x1bc) = *(int *)(iVar1 + 0x1bc) + -1;
  *(undefined4 *)(iVar1 + 0x1b4) = uVar3;
  return;
}


// =========================================================================
// Function: FUN_718ef338
// Entry: 0x718ef338 | Size: 20 bytes
// =========================================================================

undefined4 FUN_718ef338(void)

{
  return *(undefined4 *)(DAT_712042b4 + 0x1930);
}


// =========================================================================
// Function: FUN_718ef384
// Entry: 0x718ef384 | Size: 764 bytes
// =========================================================================

void FUN_718ef384(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar11 = 0;
  *param_1 = 0;
  uVar5 = *(undefined4 *)(param_2 + 500);
  uVar7 = *(undefined4 *)(param_2 + 0x1f8);
  uVar10 = *(undefined4 *)(param_2 + 0x1fc);
  uVar2 = FUN_71ba0b38(*(undefined4 *)(param_2 + 0x200),0x3f800000);
  puVar8 = param_1 + 1;
  *puVar8 = 0;
  iVar1 = DAT_712042b4;
  uVar7 = FUN_71ba0b38(uVar7,0xbf800000);
  uVar10 = FUN_71ba0b38(uVar10,0x3f800000);
  uVar5 = FUN_71ba0b38(uVar5,0xbf800000);
  puVar9 = param_3 + 1;
  uVar6 = *param_3;
  iVar3 = FUN_71ba2d50(uVar6,uVar5);
  if (((iVar3 != 0) && (iVar3 = FUN_71ba2d50(*puVar9,uVar7), iVar3 != 0)) &&
     (iVar3 = FUN_71ba2d30(param_3[2],uVar10), iVar3 != 0)) {
    iVar3 = FUN_71ba2d30(param_3[3],uVar2);
    uVar4 = 0;
    if (iVar3 != 0) goto LAB_718ef5d4;
  }
  if (*(char *)(param_2 + 0x88) != '\0') {
    iVar3 = FUN_71ba2d10(uVar6,uVar5);
    if (iVar3 == 0) {
      uVar5 = param_3[2];
      iVar3 = FUN_71ba2d50(uVar5,uVar10);
      if (iVar3 == 0) goto LAB_718ef518;
      uVar10 = FUN_71ba240c(uVar5,*(undefined4 *)(param_2 + 0xc));
      uVar10 = FUN_71ba0b38(uVar10,*(undefined4 *)(iVar1 + 0x1560));
      uVar5 = 0x3f800000;
    }
    else {
      uVar10 = FUN_71ba240c(uVar6,*(undefined4 *)(param_2 + 0xc));
      uVar10 = FUN_71ba240c(uVar10,*(undefined4 *)(iVar1 + 0x1560));
      uVar5 = 0;
    }
    *(undefined4 *)(param_2 + 0x70) = uVar5;
    *(undefined4 *)(param_2 + 0x78) = 0;
    FUN_71ba0b38(*(undefined4 *)(param_2 + 0x58),uVar10);
    FUN_71ba17bc();
    uVar10 = FUN_71ba1b94();
    *(undefined4 *)(param_2 + 0x68) = uVar10;
  }
LAB_718ef518:
  uVar10 = *puVar9;
  iVar3 = FUN_71ba2d10(uVar10,uVar7);
  if (iVar3 == 0) {
    uVar7 = param_3[3];
    iVar3 = FUN_71ba2d50(uVar7,uVar2);
    if (iVar3 != 0) {
      uVar2 = FUN_71ba240c(uVar7,*(undefined4 *)(param_2 + 0x10));
      uVar2 = FUN_71ba0b38(uVar2,*(undefined4 *)(iVar1 + 0x1564));
      uVar7 = 0x3f800000;
      goto LAB_718ef58c;
    }
  }
  else {
    uVar2 = FUN_71ba240c(uVar10,*(undefined4 *)(param_2 + 0x10));
    uVar2 = FUN_71ba240c(uVar2,*(undefined4 *)(iVar1 + 0x1564));
    uVar7 = 0;
LAB_718ef58c:
    FUN_718efa70(param_2,uVar2,uVar7);
  }
  FUN_718ee3d0(&uStack_3c,param_2);
  uVar2 = *(undefined4 *)(param_2 + 0x5c);
  uVar11 = FUN_71ba240c(uStack_3c,*(undefined4 *)(param_2 + 0x58));
  *param_1 = uVar11;
  uVar4 = FUN_71ba240c(uStack_38,uVar2);
  *puVar8 = uVar4;
LAB_718ef5d4:
  if ((*(byte *)(param_2 + 0xb) & 1) != 0) {
    uVar2 = *puVar9;
    uVar7 = param_3[2];
    uVar10 = *(undefined4 *)(param_2 + 0x31c);
    uStack_30 = FUN_71ba240c(param_3[3],uVar4);
    uStack_34 = FUN_71ba240c(uVar7,uVar11);
    uStack_38 = FUN_71ba240c(uVar2,uVar4);
    uStack_3c = FUN_71ba240c(*param_3,uVar11);
    FUN_718ef384(&uStack_2c,uVar10,&uStack_3c);
    uVar2 = FUN_71ba0b38(uVar11,uStack_2c);
    *param_1 = uVar2;
    uVar2 = FUN_71ba0b38(uVar4,uStack_28);
    *puVar8 = uVar2;
  }
  return;
}


// =========================================================================
// Function: FUN_718efa70
// Entry: 0x718efa70 | Size: 328 bytes
// =========================================================================

void FUN_718efa70(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar5 = 0;
  uVar1 = 0;
  if ((uVar3 & 1) == 0) {
    puVar4 = (undefined4 *)(DAT_712042b4 + 0x1554);
    uVar1 = FUN_71ba21e8(*(undefined4 *)(DAT_712042b4 + 0x1934),*(undefined4 *)(param_1 + 0x280));
    if (*(int *)(param_1 + 0x31c) != 0) {
      uVar1 = FUN_71ba21e8(uVar1,*(undefined4 *)(*(int *)(param_1 + 0x31c) + 0x280));
    }
    uVar2 = FUN_71ba0b38(*puVar4,*puVar4);
    uVar1 = FUN_71ba0b38(uVar2,uVar1);
  }
  if ((uVar3 & 0x400) != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x158);
    puVar4 = (undefined4 *)(DAT_712042b4 + 0x1554);
    uVar5 = FUN_71ba21e8(*(undefined4 *)(DAT_712042b4 + 0x1934),*(undefined4 *)(param_1 + 0x280));
    if (*(int *)(param_1 + 0x31c) != 0) {
      uVar5 = FUN_71ba21e8(uVar5,*(undefined4 *)(*(int *)(param_1 + 0x31c) + 0x280));
    }
    uVar5 = FUN_71ba0b38(uVar2,uVar5);
    uVar2 = FUN_71ba0b38(*puVar4,*puVar4);
    uVar5 = FUN_71ba0b38(uVar2,uVar5);
  }
  *(undefined4 *)(param_1 + 0x74) = param_3;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  uVar1 = FUN_71ba0b38(uVar1,uVar5);
  uVar1 = FUN_71ba240c(param_2,uVar1);
  FUN_71ba0b38(*(undefined4 *)(param_1 + 0x5c),uVar1);
  FUN_71ba17bc();
  uVar1 = FUN_71ba1b94();
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  return;
}


// =========================================================================
// Function: FUN_718efd98
// Entry: 0x718efd98 | Size: 576 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_718efd98(uint param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  uint uVar12;
  int *piVar13;
  bool bVar14;
  byte bStack_34;
  byte abStack_33 [15];
  int iStack_24;
  
  iVar2 = DAT_712042b4;
  iStack_24 = _ext___stack_chk_guard;
  piVar13 = (int *)(DAT_712042b4 + 0x2d38);
  puVar8 = (undefined4 *)(DAT_712042b4 + 0x15cc);
  cVar1 = *(char *)(DAT_712042b4 + 0x1d15);
  bVar14 = cVar1 == '\0';
  if (bVar14) {
    cVar1 = *(char *)(DAT_712042b4 + 0x1d16);
  }
  if (!bVar14 || cVar1 != '\0') {
    puVar10 = (undefined4 *)(DAT_712042b4 + 0xe4);
    *(undefined4 *)(DAT_712042b4 + 0x1b08) = 0;
    *(undefined4 *)(iVar2 + 0x1b0c) = 0;
    param_2 = 1;
    *(undefined4 *)(iVar2 + 0x1af4) = 1;
    uVar9 = *puVar8;
    uVar3 = FUN_71ba21e8(*(undefined4 *)(iVar2 + 0x1628),0x3f19999a);
    *(undefined4 *)(iVar2 + 0x1b44) = uVar3;
    *(uint *)(iVar2 + 0x1af0) = *(uint *)(iVar2 + 0x1af0) | 0x41;
    uVar3 = FUN_71ba21e8(uVar9,0x41000000);
    uVar11 = *puVar10;
    uVar3 = FUN_71ba0b38(uVar3,*(undefined4 *)(iVar2 + 0xe8));
    *(undefined4 *)(iVar2 + 0x1b04) = uVar3;
    uVar3 = FUN_71ba21e8(uVar9,0x41800000);
    uVar3 = FUN_71ba0b38(uVar11,uVar3);
    *(undefined4 *)(iVar2 + 0x1b00) = uVar3;
  }
  FUN_718c8bec(&bStack_34,0x10,s___Tooltip__02d_70067fa2,*piVar13);
  if ((param_2 & 1) != 0) {
    if (bStack_34 == 0) {
      uVar4 = 0;
    }
    else {
      pbVar6 = abStack_33;
      uVar4 = 0xffffffff;
      uVar5 = (uint)bStack_34;
      do {
        uVar12 = (uint)*pbVar6;
        if ((uVar5 == 0x23 && uVar12 == 0x23) && (pbVar6[1] == 0x23)) {
          uVar4 = 0xffffffff;
        }
        pbVar6 = pbVar6 + 1;
        uVar4 = *(uint *)(&DAT_70086edc + (uVar4 & 0xff ^ uVar5) * 4) ^ uVar4 >> 8;
        uVar5 = uVar12;
      } while (uVar12 != 0);
      uVar4 = ~uVar4;
    }
    uVar5 = *(uint *)(DAT_712042b4 + 0x1a5c);
    puVar7 = *(uint **)(DAT_712042b4 + 0x1a64);
    while (uVar12 = uVar5, uVar12 != 0) {
      uVar5 = uVar12 >> 1;
      if (puVar7[(uVar12 >> 1) * 2] < uVar4) {
        puVar7 = puVar7 + (uVar12 >> 1) * 2 + 2;
        uVar5 = uVar12 + ~(uVar12 >> 1);
      }
    }
    if ((puVar7 != *(uint **)(DAT_712042b4 + 0x1a64) + *(uint *)(DAT_712042b4 + 0x1a5c) * 2) &&
       (uVar5 = *puVar7, uVar5 == uVar4)) {
      uVar4 = puVar7[1];
      if (uVar4 != 0) {
        uVar5 = (uint)*(byte *)(uVar4 + 0x8a);
      }
      if (uVar4 != 0 && uVar5 != 0) {
        *(undefined1 *)(uVar4 + 0xa8) = 1;
        *(undefined1 *)(uVar4 + 0x91) = 1;
        *piVar13 = *piVar13 + 1;
        FUN_718c8bec(&bStack_34,0x10,s___Tooltip__02d_70067fa2);
      }
    }
  }
  FUN_718da658(&bStack_34,0,param_1 | 0x20c0347);
  if (_ext___stack_chk_guard == iStack_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_718f01cc
// Entry: 0x718f01cc | Size: 512 bytes
// =========================================================================

void FUN_718f01cc(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  bool bVar14;
  
  iVar2 = DAT_712042b4;
  puVar6 = (undefined4 *)(DAT_712042b4 + 0x1550);
  if (*(char *)(DAT_712042b4 + 0x1c22) == '\0') {
    bVar14 = *(char *)(DAT_712042b4 + 0x1c23) != '\0';
    iVar3 = 0;
    if (bVar14) {
      iVar3 = *(int *)(DAT_712042b4 + 0x1bd0);
    }
    if (bVar14 && iVar3 != 0) {
      iVar1 = iVar3 + *(int *)(DAT_712042b4 + 0x1c18) * 0x10;
      uVar8 = *(undefined4 *)(iVar1 + 0x344);
      uVar5 = *(undefined4 *)(iVar1 + 0x340);
      uVar13 = *(undefined4 *)(iVar1 + 0x338);
      uVar10 = FUN_71ba240c(uVar8,*(undefined4 *)(iVar1 + 0x33c));
      uVar4 = *puVar6;
      uVar11 = *(undefined4 *)(iVar2 + 0x1554);
      iVar1 = FUN_71ba2d10(uVar11,uVar10);
      if (iVar1 != 0) {
        uVar10 = uVar11;
      }
      uVar10 = FUN_71ba240c(uVar8,uVar10);
      uVar12 = *(undefined4 *)(iVar3 + 0xc);
      uVar8 = FUN_71ba0b38(*(undefined4 *)(iVar3 + 0x10),uVar10);
      iVar2 = **(int **)(iVar2 + 0x1bcc);
      uVar11 = *(undefined4 *)(iVar2 + 0xc);
      uVar7 = *(undefined4 *)(iVar2 + 8);
      uVar9 = *(undefined4 *)(iVar2 + 4);
      uVar10 = FUN_71ba0b38(uVar7,*(undefined4 *)(iVar2 + 0x10));
      iVar2 = FUN_71ba2d70(uVar8,uVar10);
      if (iVar2 == 0) {
        uVar10 = uVar8;
      }
      iVar2 = FUN_71ba2d10(uVar8,uVar7);
      if (iVar2 != 0) {
        uVar10 = uVar7;
      }
      FUN_71ba17bc(uVar10);
      uVar10 = FUN_71ba1b94();
      param_1[1] = uVar10;
      uVar4 = FUN_71ba21e8(uVar4,0x40800000);
      uVar10 = FUN_71ba240c(uVar5,uVar13);
      iVar2 = FUN_71ba2d10(uVar4,uVar10);
      if (iVar2 != 0) {
        uVar10 = uVar4;
      }
      uVar10 = FUN_71ba0b38(uVar13,uVar10);
      uVar4 = FUN_71ba0b38(uVar12,uVar10);
      uVar10 = FUN_71ba0b38(uVar9,uVar11);
      iVar2 = FUN_71ba2d70(uVar4,uVar10);
      if (iVar2 == 0) {
        uVar10 = uVar4;
      }
      iVar2 = FUN_71ba2d10(uVar4,uVar9);
      if (iVar2 != 0) {
        uVar10 = uVar9;
      }
      FUN_71ba17bc(uVar10);
      uVar10 = FUN_71ba1b94();
      *param_1 = uVar10;
      return;
    }
  }
  puVar6 = (undefined4 *)(DAT_712042b4 + 0xe4);
  uVar10 = *(undefined4 *)(DAT_712042b4 + 0xe8);
  iVar3 = FUN_71ba2d50(*puVar6,0xc87a0000);
  if ((iVar3 == 0) || (iVar3 = FUN_71ba2d50(uVar10,0xc87a0000), iVar3 == 0)) {
    uVar10 = *(undefined4 *)(iVar2 + 0x1e20);
    uVar4 = *(undefined4 *)(iVar2 + 0x1e24);
  }
  else {
    uVar10 = *puVar6;
    uVar4 = *(undefined4 *)(iVar2 + 0xe8);
  }
  *param_1 = uVar10;
  param_1[1] = uVar4;
  return;
}


// =========================================================================
// Function: FUN_718f0650
// Entry: 0x718f0650 | Size: 352 bytes
// =========================================================================

void FUN_718f0650(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  
  uVar1 = DAT_712042b4;
  piVar7 = (int *)(DAT_712042b4 + 0x1bac);
  iVar2 = *(int *)(DAT_712042b4 + 0x1bb0);
  iVar5 = *(int *)(DAT_712042b4 + 0x1bb4) + param_1 * 0x24;
  iVar8 = *(int *)(iVar5 + 4);
  iVar5 = *(int *)(iVar5 + 8);
  uVar4 = DAT_712042b4;
  if (iVar2 < param_1) {
    *(int *)(DAT_712042b4 + 0x370) = *(int *)(DAT_712042b4 + 0x370) + 1;
    iVar6 = iVar2 + iVar2 / 2;
    if (iVar2 == 0) {
      iVar6 = 8;
    }
    if (iVar6 <= param_1) {
      iVar6 = param_1;
    }
    uVar3 = (*DAT_70105bac)(iVar6 * 0x24,DAT_712042bc);
    uVar4 = 0;
    if (*(int *)(uVar1 + 0x1bb4) != 0) {
      imp___aeabi_memcpy(uVar3,*(int *)(uVar1 + 0x1bb4),*piVar7 * 0x24);
      iVar2 = *(int *)(uVar1 + 0x1bb4);
      uVar4 = extraout_r1;
      if (iVar2 != 0) {
        uVar4 = DAT_712042b4;
      }
      if (iVar2 != 0 && uVar4 != 0) {
        *(int *)(uVar4 + 0x370) = *(int *)(uVar4 + 0x370) + -1;
      }
      (*DAT_70105bb0)(iVar2,DAT_712042bc);
      uVar4 = extraout_r1_00;
    }
    *(int *)(uVar1 + 0x1bb0) = iVar6;
    *(undefined4 *)(uVar1 + 0x1bb4) = uVar3;
  }
  *piVar7 = param_1;
  if (param_2 != 0) {
    if (iVar5 == 0) {
      iVar2 = 0;
    }
    else {
      if ((*(char *)(iVar5 + 0x8b) == '\0') && (iVar8 != 0)) {
        FUN_718da434(iVar8,0);
        return;
      }
      iVar2 = iVar5;
      if (*(int *)(uVar1 + 0x1c18) == 0) {
        iVar2 = *(int *)(iVar5 + 0x32c);
        if (iVar2 != 0) {
          uVar4 = (uint)*(byte *)(iVar2 + 0x8b);
        }
        if (iVar2 == 0 || uVar4 == 0) {
          iVar2 = iVar5;
        }
      }
    }
    FUN_718d12b4(iVar2);
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_718f08dc
// Entry: 0x718f08dc | Size: 216 bytes
// =========================================================================

void FUN_718f08dc(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  byte unaff_r5;
  int iVar7;
  
  iVar1 = DAT_712042b4;
  uVar3 = *(uint *)(DAT_712042b4 + 0x1bb8);
  if ((0 < (int)uVar3) && ((int)uVar3 <= *(int *)(DAT_712042b4 + 0x1bac))) {
    iVar4 = uVar3 - 1;
    iVar7 = *(int *)(DAT_712042b4 + 0x1bb4);
    if (*(int *)(*(int *)(DAT_712042b4 + 0x1bc0) + iVar4 * 0x24) == *(int *)(iVar7 + iVar4 * 0x24))
    {
      iVar2 = 0;
      if (uVar3 != 1) {
        iVar6 = *(int *)(iVar7 + iVar4 * 0x24 + 4);
        piVar5 = (int *)(iVar7 + uVar3 * 0x24 + -0x44);
        do {
          if (iVar6 == 0) {
            iVar2 = uVar3 - 1;
            break;
          }
          iVar2 = iVar4;
          if ((*(byte *)(iVar6 + 0xb) & 0x10) == 0) break;
          iVar6 = *piVar5;
          if (iVar6 != 0) {
            unaff_r5 = *(byte *)(iVar6 + 0xb);
          }
          if (iVar6 != 0 && (unaff_r5 & 8) != 0) break;
          uVar3 = uVar3 - 1;
          iVar4 = iVar4 + -1;
          piVar5 = piVar5 + -9;
          iVar2 = 0;
        } while (1 < uVar3);
      }
      FUN_718f0650(iVar2,1);
      if (*(int *)(iVar1 + 0x1bd0) != 0) {
        *(undefined1 *)(*(int *)(iVar1 + 0x1bd0) + 0x150) = 1;
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_718f0a08
// Entry: 0x718f0a08 | Size: 1832 bytes
// =========================================================================

void FUN_718f0a08(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,uint *param_4,
                 undefined4 *param_5,undefined4 *param_6,uint param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint *puVar6;
  undefined4 uVar7;
  int iVar8;
  uint *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  bool bVar26;
  
  uVar1 = param_5[3];
  uVar10 = param_3[1];
  uVar2 = FUN_71ba240c();
  uVar15 = param_2[1];
  iVar3 = FUN_71ba2d70(uVar15,uVar2);
  uVar20 = param_5[1];
  if (iVar3 == 0) {
    uVar2 = uVar15;
  }
  iVar3 = FUN_71ba2d10(uVar15,uVar20);
  uVar15 = param_5[2];
  if (iVar3 != 0) {
    uVar2 = uVar20;
  }
  uVar11 = *param_3;
  uVar4 = FUN_71ba240c();
  uVar16 = *param_2;
  iVar3 = FUN_71ba2d70(uVar16,uVar4);
  uVar21 = *param_5;
  if (iVar3 == 0) {
    uVar4 = uVar16;
  }
  iVar3 = FUN_71ba2d10(uVar16,uVar21);
  if (iVar3 != 0) {
    uVar4 = uVar21;
  }
  if (param_7 == 1) {
    uVar22 = *param_4;
    iVar3 = 0;
    if (uVar22 != 0xffffffff) {
      iVar3 = -1;
    }
    puVar9 = &DAT_70086e28 + iVar3;
    uVar17 = param_6[1];
    uVar16 = FUN_71ba240c(param_6[2],uVar11);
    uVar17 = FUN_71ba240c(uVar17,uVar10);
    iVar3 = -4;
    if (uVar22 != 0xffffffff) {
      iVar3 = -5;
    }
    uVar12 = *param_6;
    uVar5 = param_6[3];
    do {
      puVar6 = param_4;
      if (iVar3 != -5) {
        puVar6 = puVar9;
      }
      uVar23 = *puVar6;
      if ((iVar3 != -5) && (uVar23 == uVar22)) goto LAB_718f0b88;
      uVar18 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      uVar13 = 0;
      switch(uVar23) {
      case 0:
        uVar18 = uVar16;
        break;
      case 1:
        uVar18 = uVar12;
        goto LAB_718f0c20;
      case 2:
        uVar18 = uVar16;
LAB_718f0c20:
        param_1[1] = uVar17;
        *param_1 = uVar18;
        uVar13 = uVar17;
        goto switchD_718f0bd8_default;
      case 3:
        uVar18 = uVar12;
        break;
      default:
        goto switchD_718f0bd8_default;
      }
      *param_1 = uVar18;
      param_1[1] = uVar5;
      uVar13 = uVar5;
switchD_718f0bd8_default:
      uVar7 = FUN_71ba0b38(uVar11,uVar18);
      iVar8 = FUN_71ba2d50(uVar18,uVar21);
      uVar18 = FUN_71ba0b38(uVar10,uVar13);
      if ((((iVar8 != 0) && (iVar8 = FUN_71ba2d50(uVar13,uVar20), iVar8 != 0)) &&
          (iVar8 = FUN_71ba2d30(uVar7,uVar15), iVar8 != 0)) &&
         (iVar8 = FUN_71ba2d30(uVar18,uVar1), iVar8 != 0)) {
        *param_4 = uVar23;
        return;
      }
LAB_718f0b88:
      puVar9 = puVar9 + 1;
      bVar26 = iVar3 != -1;
      iVar3 = iVar3 + 1;
    } while (bVar26);
  }
  if ((param_7 | 2) != 2) goto LAB_718f0f48;
  uVar22 = *param_4;
  puVar9 = &DAT_70087838;
  if (uVar22 != 0xffffffff) {
    puVar9 = param_4;
  }
  uVar23 = *puVar9;
  uVar17 = param_6[2];
  uVar5 = *param_6;
  uVar16 = uVar15;
  if (uVar23 == 0) {
    uVar16 = uVar5;
  }
  uVar18 = param_6[1];
  uVar13 = param_6[3];
  uVar12 = uVar21;
  if (uVar23 == 1) {
    uVar12 = uVar17;
  }
  uVar16 = FUN_71ba240c(uVar16,uVar12);
  iVar3 = FUN_71ba2d10(uVar16,uVar11);
  uVar24 = (uint)(uVar22 != 0xffffffff);
  if ((iVar3 == 0) || (1 < uVar23)) {
    bVar26 = uVar23 == 0;
    uVar16 = uVar1;
    if (uVar23 == 2) {
      uVar16 = uVar18;
    }
    uVar12 = uVar20;
    if (uVar23 == 3) {
      uVar12 = uVar13;
    }
    uVar16 = FUN_71ba240c(uVar16,uVar12);
    iVar3 = FUN_71ba2d10(uVar16,uVar10);
    uVar19 = (uint)(uVar23 == 3);
    uVar14 = (uint)(uVar23 == 2);
    uVar25 = (uint)(uVar23 == 1);
    if ((iVar3 == 0) || ((uVar23 & 0xfffffffe) != 2)) goto LAB_718f1084;
  }
  uVar19 = (uint)(uVar22 == 0xffffffff);
  uVar23 = (&DAT_70087838)[uVar19];
  if (uVar23 != uVar22) {
    uVar16 = uVar21;
    if (uVar22 != 0xffffffff) {
      uVar16 = uVar17;
    }
    uVar16 = FUN_71ba240c(uVar15,uVar16);
    iVar3 = FUN_71ba2d10(uVar16,uVar11);
    if (iVar3 == 0 || uVar22 == 0xffffffff) {
      uVar16 = uVar13;
      if (uVar22 != 0xffffffff) {
        uVar16 = uVar20;
      }
      uVar16 = FUN_71ba240c(uVar1,uVar16);
      iVar3 = FUN_71ba2d10(uVar16,uVar10);
      uVar14 = 0;
      if ((iVar3 == 0) || (uVar22 != 0xffffffff)) {
        bVar26 = false;
        uVar25 = uVar24;
        goto LAB_718f1084;
      }
    }
  }
  iVar3 = 8;
  if (uVar22 != 0xffffffff) {
    iVar3 = 4;
  }
  uVar23 = *(uint *)((int)&DAT_70087838 + iVar3);
  if (uVar23 == uVar22) {
LAB_718f0e7c:
    iVar3 = 0xc;
    if (uVar22 != 0xffffffff) {
      iVar3 = 8;
    }
    uVar23 = *(uint *)((int)&DAT_70087838 + iVar3);
    if (uVar23 != uVar22) {
      if (uVar22 == 0xffffffff) {
        uVar15 = uVar5;
      }
      uVar15 = FUN_71ba240c(uVar15,uVar21);
      iVar3 = FUN_71ba2d10(uVar15,uVar11);
      if ((iVar3 == 0) || (uVar22 != 0xffffffff)) {
        if (uVar22 != 0xffffffff) {
          uVar1 = uVar18;
        }
        uVar1 = FUN_71ba240c(uVar1,uVar20);
        iVar3 = FUN_71ba2d10(uVar1,uVar10);
        bVar26 = uVar22 == 0xffffffff;
        uVar19 = 0;
        uVar14 = uVar24;
        if (iVar3 == 0) goto LAB_718f1074;
        uVar25 = 0;
        if (uVar22 == 0xffffffff) goto LAB_718f1084;
      }
    }
    if (((uVar22 == 0xffffffff) || (uVar1 = FUN_71ba240c(uVar5,uVar21), uVar22 == 0)) ||
       (iVar3 = FUN_71ba2d10(uVar1,uVar11), iVar3 != 0)) {
LAB_718f0f48:
      *param_4 = 0xffffffff;
      if (param_7 != 2) {
        uVar20 = *param_3;
        uVar10 = param_2[1];
        uVar2 = FUN_71ba0b38(uVar20,*param_2);
        uVar1 = param_5[2];
        iVar3 = FUN_71ba2d10(uVar2,uVar1);
        if (iVar3 != 0) {
          uVar1 = uVar2;
        }
        uVar2 = FUN_71ba240c(uVar1,uVar20);
        uVar1 = *param_5;
        iVar3 = FUN_71ba2d50(uVar2,uVar1);
        if (iVar3 != 0) {
          uVar1 = uVar2;
        }
        *param_1 = uVar1;
        uVar20 = param_3[1];
        uVar2 = FUN_71ba0b38(uVar20,uVar10);
        uVar1 = param_5[3];
        iVar3 = FUN_71ba2d10(uVar2,uVar1);
        if (iVar3 != 0) {
          uVar1 = uVar2;
        }
        uVar2 = FUN_71ba240c(uVar1,uVar20);
        uVar1 = param_5[1];
        iVar3 = FUN_71ba2d50(uVar2,uVar1);
        if (iVar3 != 0) {
          uVar1 = uVar2;
        }
        param_1[1] = uVar1;
        return;
      }
      uVar1 = FUN_71ba0b38(param_2[1],0x40000000);
      param_1[1] = uVar1;
      uVar1 = FUN_71ba0b38(*param_2,0x40000000);
      *param_1 = uVar1;
      return;
    }
    bVar26 = true;
    uVar23 = 0;
    uVar14 = 0;
    uVar19 = 0;
  }
  else {
    uVar12 = uVar20;
    uVar16 = uVar18;
    if (uVar22 != 0xffffffff) {
      uVar12 = uVar13;
      uVar16 = uVar1;
    }
    uVar16 = FUN_71ba240c(uVar16,uVar12);
    iVar3 = FUN_71ba2d10(uVar16,uVar10);
    if (iVar3 != 0) goto LAB_718f0e7c;
    bVar26 = false;
    uVar14 = (uint)(uVar22 == 0xffffffff);
    uVar19 = uVar24;
  }
LAB_718f1074:
  uVar25 = 0;
LAB_718f1084:
  if (bVar26) {
    uVar17 = FUN_71ba240c(uVar5,uVar11);
  }
  else if (uVar25 == 0) {
    uVar17 = uVar4;
    if (uVar14 == 0) {
      if (uVar19 != 0) {
        uVar2 = uVar13;
      }
    }
    else {
      uVar2 = FUN_71ba240c(uVar18,uVar10);
    }
  }
  *param_4 = uVar23;
  iVar3 = FUN_71ba2d50(uVar2,uVar20);
  if (iVar3 != 0) {
    uVar20 = uVar2;
  }
  param_1[1] = uVar20;
  iVar3 = FUN_71ba2d50(uVar17,uVar21);
  if (iVar3 != 0) {
    uVar21 = uVar17;
  }
  *param_1 = uVar21;
  return;
}


// =========================================================================
// Function: FUN_718f1668
// Entry: 0x718f1668 | Size: 52 bytes
// =========================================================================

void FUN_718f1668(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_712042b4;
  iVar2 = *(int *)(DAT_712042b4 + 0x1bd0);
  *(undefined4 *)(DAT_712042b4 + 0x1bd4) = param_1;
  *(undefined4 *)(iVar1 + 0x1bd8) = param_3;
  *(undefined4 *)(iVar2 + param_2 * 4 + 0x330) = param_1;
  return;
}


// =========================================================================
// Function: FUN_718f16d4
// Entry: 0x718f16d4 | Size: 212 bytes
// =========================================================================

void FUN_718f16d4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  
  iVar1 = DAT_712042b4;
  iVar7 = *(int *)(param_2 + 0x140);
  piVar6 = (int *)(DAT_712042b4 + 0x1ad4);
  iVar3 = *(int *)(DAT_712042b4 + 0x1bd0);
  *(int *)(DAT_712042b4 + 0x1c18) = iVar7;
  bVar10 = iVar3 != param_2;
  *(int *)(iVar1 + 0x1bd4) = param_1;
  if (bVar10) {
    iVar3 = 0;
  }
  *(int *)(iVar1 + 0x1bd0) = param_2;
  if (bVar10) {
    *(char *)(iVar1 + 0x1c25) = (char)iVar3;
  }
  *(undefined4 *)(iVar1 + 0x1bd8) = *(undefined4 *)(param_2 + 0x14c);
  *(int *)(param_2 + iVar7 * 4 + 0x330) = param_1;
  if (*(int *)(param_2 + 0x118) == param_1) {
    uVar5 = *(undefined4 *)(param_2 + 0x10);
    uVar4 = *(undefined4 *)(param_2 + 0x120);
    uVar8 = *(undefined4 *)(param_2 + 0xc);
    uVar9 = *(undefined4 *)(param_2 + 0x124);
    uVar2 = FUN_71ba240c(*(undefined4 *)(param_2 + 300),uVar5);
    iVar3 = param_2 + iVar7 * 0x10;
    *(undefined4 *)(iVar3 + 0x344) = uVar2;
    uVar2 = FUN_71ba240c(*(undefined4 *)(param_2 + 0x128),uVar8);
    *(undefined4 *)(iVar3 + 0x340) = uVar2;
    uVar2 = FUN_71ba240c(uVar9,uVar5);
    *(undefined4 *)(iVar3 + 0x33c) = uVar2;
    uVar2 = FUN_71ba240c(uVar4,uVar8);
    *(undefined4 *)(iVar3 + 0x338) = uVar2;
  }
  if (*piVar6 == 2) {
    *(undefined1 *)(iVar1 + 0x1c23) = 1;
  }
  else {
    *(undefined1 *)(iVar1 + 0x1c22) = 1;
  }
  return;
}


// =========================================================================
// Function: FUN_718f1850
// Entry: 0x718f1850 | Size: 820 bytes
// =========================================================================

undefined4 FUN_718f1850(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  bool bVar12;
  
  iVar3 = DAT_712042b4;
  if (param_2 == 0) {
    return *(undefined4 *)(DAT_712042b4 + param_1 * 4 + 0x300);
  }
  iVar8 = DAT_712042b4 + param_1 * 4;
  uVar11 = *(undefined4 *)(iVar8 + 0x1458);
  iVar1 = FUN_71ba2d10(uVar11,0);
  if ((param_2 == 2) && (iVar2 = FUN_71ba2d10(uVar11,0), iVar2 != 0)) {
    iVar3 = FUN_71ba2d50(*(undefined4 *)(iVar8 + 0x14ac),0);
LAB_718f18c0:
    uVar11 = 0;
    if (iVar3 != 0) {
      uVar11 = 0x3f800000;
    }
    return uVar11;
  }
  if (iVar1 != 0) {
    return 0;
  }
  if (4 < param_2 - 1U) {
    return 0;
  }
  puVar7 = (undefined4 *)(iVar3 + 0x18);
  uVar4 = 0;
  switch(param_2) {
  case 1:
    iVar3 = FUN_71ba2cf0(uVar11,0);
    goto LAB_718f18c0;
  case 2:
    goto switchD_718f1910_caseD_2;
  case 3:
    uVar9 = *(undefined4 *)(iVar3 + 0x8c);
    uVar10 = *(undefined4 *)(iVar3 + 0x90);
    uVar4 = FUN_71ba240c(uVar11,*puVar7);
    uVar9 = FUN_71ba21e8(uVar9,0x3f3851ec);
    uVar6 = 0x3f4ccccd;
    break;
  case 4:
    uVar9 = *(undefined4 *)(iVar3 + 0x8c);
    uVar6 = *(undefined4 *)(iVar3 + 0x90);
    uVar4 = FUN_71ba240c(uVar11,*puVar7);
    uVar9 = FUN_71ba21e8(uVar9,0x3fa00000);
    iVar3 = FUN_71ba2cf0(uVar11,0);
    uVar6 = FUN_71ba0b38(uVar6,uVar6);
    uVar5 = 1;
    if (iVar3 == 0) {
      iVar3 = FUN_71ba2d50(uVar4,uVar11);
      uVar5 = 0;
      if (iVar3 != 0) goto LAB_718f1b8c;
      iVar3 = FUN_71ba2d30(uVar6,0);
      iVar1 = FUN_71ba2d10(uVar4,uVar9);
      bVar12 = iVar1 != 0;
      if (iVar3 != 0) {
        iVar3 = FUN_71ba2d50(uVar11,uVar9);
        uVar5 = (uint)(bVar12 && iVar3 != 0);
        goto LAB_718f1b8c;
      }
      uVar10 = FUN_71ba240c(uVar11,uVar9);
      FUN_71ba13e0(uVar10,uVar6);
      iVar1 = FUN_71ba17bc();
      iVar3 = FUN_71ba2d10(uVar11,uVar9);
      if (iVar3 != 0) {
        iVar1 = -1;
      }
      uVar11 = FUN_71ba240c(uVar4,uVar9);
      FUN_71ba13e0(uVar11,uVar6);
      iVar3 = FUN_71ba17bc();
      goto LAB_718f1b4c;
    }
    goto LAB_718f1b8c;
  case 5:
    uVar9 = *(undefined4 *)(iVar3 + 0x8c);
    uVar10 = *(undefined4 *)(iVar3 + 0x90);
    uVar4 = FUN_71ba240c(uVar11,*puVar7);
    uVar9 = FUN_71ba21e8(uVar9,0x3f3851ec);
    uVar6 = 0x3e99999a;
  }
  uVar6 = FUN_71ba21e8(uVar10,uVar6);
  iVar3 = FUN_71ba2cf0(uVar11,0);
  uVar5 = 1;
  if (iVar3 == 0) {
    iVar3 = FUN_71ba2d50(uVar4,uVar11);
    uVar5 = 0;
    if (iVar3 == 0) {
      iVar3 = FUN_71ba2d30(uVar6,0);
      iVar1 = FUN_71ba2d10(uVar4,uVar9);
      bVar12 = iVar1 != 0;
      if (iVar3 == 0) {
        uVar10 = FUN_71ba240c(uVar11,uVar9);
        FUN_71ba13e0(uVar10,uVar6);
        iVar1 = FUN_71ba17bc();
        iVar3 = FUN_71ba2d10(uVar11,uVar9);
        if (iVar3 != 0) {
          iVar1 = -1;
        }
        uVar11 = FUN_71ba240c(uVar4,uVar9);
        FUN_71ba13e0(uVar11,uVar6);
        iVar3 = FUN_71ba17bc();
LAB_718f1b4c:
        if (bVar12) {
          iVar3 = -1;
        }
        uVar5 = iVar1 - iVar3;
      }
      else {
        iVar3 = FUN_71ba2d50(uVar11,uVar9);
        uVar5 = (uint)(bVar12 && iVar3 != 0);
      }
    }
  }
LAB_718f1b8c:
  uVar4 = FUN_71ba1b94(uVar5);
switchD_718f1910_caseD_2:
  return uVar4;
}


// =========================================================================
// Function: FUN_718f1fdc
// Entry: 0x718f1fdc | Size: 632 bytes
// =========================================================================

void FUN_718f1fdc(undefined4 *param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  uVar4 = 0;
  puVar5 = param_1 + 1;
  *puVar5 = 0;
  uVar6 = 0;
  *param_1 = 0;
  if ((param_2 & 1) != 0) {
    uVar4 = FUN_718f1850(0x12,param_3);
    uVar6 = FUN_718f1850(0x11,param_3);
    uVar4 = FUN_71ba240c(uVar4,uVar6);
    uVar6 = FUN_71ba0b38(uVar4,0);
    uVar4 = FUN_718f1850(0x14,param_3);
    uVar1 = FUN_718f1850(0x13,param_3);
    *param_1 = uVar6;
    uVar4 = FUN_71ba240c(uVar4,uVar1);
    uVar4 = FUN_71ba0b38(uVar4,0);
    *puVar5 = uVar4;
  }
  if ((param_2 & 2) != 0) {
    uVar1 = FUN_718f1850(5,param_3);
    uVar2 = FUN_718f1850(4,param_3);
    uVar1 = FUN_71ba240c(uVar1,uVar2);
    uVar6 = FUN_71ba0b38(uVar1,uVar6);
    uVar1 = FUN_718f1850(7,param_3);
    uVar2 = FUN_718f1850(6,param_3);
    *param_1 = uVar6;
    uVar1 = FUN_71ba240c(uVar1,uVar2);
    uVar4 = FUN_71ba0b38(uVar1,uVar4);
    *puVar5 = uVar4;
  }
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_718f1850(9,param_3);
    uVar2 = FUN_718f1850(8,param_3);
    uVar1 = FUN_71ba240c(uVar1,uVar2);
    uVar6 = FUN_71ba0b38(uVar1,uVar6);
    uVar1 = FUN_718f1850(0xb,param_3);
    uVar2 = FUN_718f1850(10,param_3);
    *param_1 = uVar6;
    uVar1 = FUN_71ba240c(uVar1,uVar2);
    uVar4 = FUN_71ba0b38(uVar1,uVar4);
    *puVar5 = uVar4;
  }
  iVar3 = FUN_71ba2cf0(param_4,0);
  if ((iVar3 == 0) && (iVar3 = FUN_71ba2d70(*(undefined4 *)(DAT_712042b4 + 0x338),0), iVar3 != 0)) {
    uVar4 = FUN_71ba21e8(uVar4,param_4);
    *puVar5 = uVar4;
    uVar6 = FUN_71ba21e8(uVar6,param_4);
    *param_1 = uVar6;
  }
  iVar3 = FUN_71ba2cf0(param_5,0);
  if ((iVar3 == 0) && (iVar3 = FUN_71ba2d70(*(undefined4 *)(DAT_712042b4 + 0x33c),0), iVar3 != 0)) {
    uVar4 = FUN_71ba21e8(uVar4,param_5);
    *puVar5 = uVar4;
    uVar4 = FUN_71ba21e8(uVar6,param_5);
    *param_1 = uVar4;
  }
  return;
}


// =========================================================================
// Function: FUN_718f262c
// Entry: 0x718f262c | Size: 332 bytes
// =========================================================================

void FUN_718f262c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined *puVar6;
  int extraout_r1;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar2 = DAT_712042b4;
  if (*(char *)(DAT_712042b4 + 0x2db0) != '\0') {
    iVar3 = DAT_712042b4 + 0x2dbc;
    uStack_c = param_2;
    uStack_8 = param_3;
    uStack_4 = param_4;
    if (*(int *)(DAT_712042b4 + 0x2db8) == 0) {
      FUN_718c9b84(iVar3,param_1,&uStack_c);
    }
    else {
      if (0x7fffffff < *(uint *)(DAT_712042b4 + 0x2dc0)) {
        if (DAT_712042b4 != 0) {
          *(int *)(DAT_712042b4 + 0x370) = *(int *)(DAT_712042b4 + 0x370) + 1;
        }
        uVar4 = (*DAT_70105bac)(0,DAT_712042bc);
        if (*(int *)(iVar2 + 0x2dc4) != 0) {
          imp___aeabi_memcpy(uVar4,*(int *)(iVar2 + 0x2dc4),*(undefined4 *)(iVar2 + 0x2dbc));
          iVar5 = *(int *)(iVar2 + 0x2dc4);
          iVar1 = extraout_r1;
          if (iVar5 != 0) {
            iVar1 = DAT_712042b4;
          }
          if (iVar5 != 0 && iVar1 != 0) {
            *(int *)(iVar1 + 0x370) = *(int *)(iVar1 + 0x370) + -1;
          }
          (*DAT_70105bb0)(iVar5,DAT_712042bc);
        }
        *(undefined4 *)(iVar2 + 0x2dc0) = 0;
        *(undefined4 *)(iVar2 + 0x2dc4) = uVar4;
      }
      *(undefined4 *)(iVar2 + 0x2dbc) = 0;
      FUN_718c9b84(iVar3,param_1,&uStack_c);
      iVar3 = *(int *)(iVar2 + 0x2dbc) + -1;
      if (*(int *)(iVar2 + 0x2dbc) == 0) {
        iVar3 = 0;
      }
      puVar6 = &DAT_712042b8;
      if (*(undefined **)(iVar2 + 0x2dc4) != (undefined *)0x0) {
        puVar6 = *(undefined **)(iVar2 + 0x2dc4);
      }
      imp_fwrite(puVar6,1,iVar3,*(undefined4 *)(iVar2 + 0x2db8));
    }
  }
  return;
}


// =========================================================================
// Function: FUN_718f2900
// Entry: 0x718f2900 | Size: 340 bytes
// =========================================================================

uint * FUN_718f2900(byte *param_1)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint unaff_r7;
  
  iVar2 = DAT_712042b4;
  pbVar3 = (byte *)imp_strstr(param_1,&DAT_70062240);
  if (pbVar3 == (byte *)0x0) {
    pbVar3 = param_1;
  }
  iVar4 = imp_strlen(pbVar3);
  puVar5 = (uint *)FUN_718f2b5c(iVar2 + 0x2d88,iVar4 + 0x11);
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  if (iVar4 == 0) {
    if (*pbVar3 == 0) {
      uVar6 = 0xffffffff;
    }
    else {
      uVar6 = 0xffffffff;
      uVar7 = (uint)*pbVar3;
      pbVar1 = pbVar3;
      do {
        uVar8 = (uint)pbVar1[1];
        if ((uVar7 == 0x23 && uVar8 == 0x23) && (pbVar1[2] == 0x23)) {
          uVar6 = 0xffffffff;
        }
        uVar6 = *(uint *)(&DAT_70086edc + (uVar6 & 0xff ^ uVar7) * 4) ^ uVar6 >> 8;
        uVar7 = uVar8;
        pbVar1 = pbVar1 + 1;
      } while (uVar8 != 0);
    }
  }
  else {
    uVar7 = iVar4 - 1;
    uVar6 = 0xffffffff;
    pbVar1 = pbVar3;
    do {
      uVar8 = (uint)*pbVar1;
      if (1 < uVar7) {
        if (uVar8 == 0x23) {
          unaff_r7 = (uint)pbVar1[1];
        }
        if ((uVar8 == 0x23 && unaff_r7 == 0x23) && (pbVar1[2] == 0x23)) {
          uVar6 = 0xffffffff;
        }
      }
      uVar7 = uVar7 - 1;
      unaff_r7 = *(uint *)(&DAT_70086edc + (uVar6 & 0xff ^ uVar8) * 4);
      uVar6 = unaff_r7 ^ uVar6 >> 8;
      pbVar1 = pbVar1 + 1;
    } while (uVar7 != 0xffffffff);
  }
  *puVar5 = ~uVar6;
  imp___aeabi_memcpy(puVar5 + 4,pbVar3,iVar4 + 1);
  return puVar5;
}


// =========================================================================
// Function: FUN_718f2b5c
// Entry: 0x718f2b5c | Size: 228 bytes
// =========================================================================

int FUN_718f2b5c(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int extraout_r1;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = *param_1;
  iVar3 = param_1[1];
  uVar4 = param_2 + 7U & 0xfffffffc;
  iVar6 = iVar5 + uVar4;
  if (iVar3 < iVar6) {
    iVar7 = iVar3 + iVar3 / 2;
    if (iVar3 == 0) {
      iVar7 = 8;
    }
    if (iVar7 <= iVar6) {
      iVar7 = iVar6;
    }
    if (DAT_712042b4 != 0) {
      *(int *)(DAT_712042b4 + 0x370) = *(int *)(DAT_712042b4 + 0x370) + 1;
    }
    iVar3 = (*DAT_70105bac)(iVar7,DAT_712042bc);
    if (param_1[2] != 0) {
      imp___aeabi_memcpy(iVar3,param_1[2],*param_1);
      iVar2 = param_1[2];
      iVar1 = extraout_r1;
      if (iVar2 != 0) {
        iVar1 = DAT_712042b4;
      }
      if (iVar2 != 0 && iVar1 != 0) {
        *(int *)(iVar1 + 0x370) = *(int *)(iVar1 + 0x370) + -1;
      }
      (*DAT_70105bb0)(iVar2,DAT_712042bc);
    }
    param_1[1] = iVar7;
    param_1[2] = iVar3;
  }
  else {
    iVar3 = param_1[2];
  }
  *param_1 = iVar6;
  *(uint *)(iVar3 + iVar5) = uVar4;
  return param_1[2] + iVar5 + 4;
}


// =========================================================================
// Function: FUN_718f2d34
// Entry: 0x718f2d34 | Size: 996 bytes
// =========================================================================

void FUN_718f2d34(undefined4 param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  int extraout_r1;
  uint uVar8;
  code *pcVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  int iVar15;
  uint uVar16;
  undefined1 *puVar17;
  byte *pbVar18;
  byte *pbVar19;
  
  iVar3 = DAT_712042b4;
  puVar17 = (undefined1 *)(DAT_712042b4 + 0x2d69);
  if (param_2 == 0) {
    param_2 = imp_strlen(param_1);
  }
  iVar4 = *(int *)(iVar3 + 0x2d74);
  iVar10 = param_2 + 1;
  if (param_2 < iVar4) {
    pbVar5 = *(byte **)(iVar3 + 0x2d78);
  }
  else {
    iVar11 = iVar4 + iVar4 / 2;
    if (iVar4 == 0) {
      iVar11 = 8;
    }
    if (iVar11 <= iVar10) {
      iVar11 = iVar10;
    }
    if (DAT_712042b4 != 0) {
      *(int *)(DAT_712042b4 + 0x370) = *(int *)(DAT_712042b4 + 0x370) + 1;
    }
    pbVar5 = (byte *)(*DAT_70105bac)(iVar11,DAT_712042bc);
    if (*(int *)(iVar3 + 0x2d78) != 0) {
      imp___aeabi_memcpy(pbVar5,*(int *)(iVar3 + 0x2d78),*(undefined4 *)(iVar3 + 0x2d70));
      iVar15 = *(int *)(iVar3 + 0x2d78);
      iVar4 = extraout_r1;
      if (iVar15 != 0) {
        iVar4 = DAT_712042b4;
      }
      if (iVar15 != 0 && iVar4 != 0) {
        *(int *)(iVar4 + 0x370) = *(int *)(iVar4 + 0x370) + -1;
      }
      (*DAT_70105bb0)(iVar15,DAT_712042bc);
    }
    *(int *)(iVar3 + 0x2d74) = iVar11;
    *(byte **)(iVar3 + 0x2d78) = pbVar5;
  }
  *(int *)(iVar3 + 0x2d70) = iVar10;
  imp___aeabi_memcpy(pbVar5,param_1,param_2);
  iVar10 = 0;
  pbVar18 = pbVar5 + param_2;
  *pbVar18 = 0;
  iVar4 = *(int *)(iVar3 + 0x2d7c);
  if (0 < iVar4) {
    iVar11 = 0;
    do {
      pcVar9 = *(code **)(*(int *)(iVar3 + 0x2d84) + iVar10 + 0xc);
      if (pcVar9 != (code *)0x0) {
        (*pcVar9)(iVar3);
        iVar4 = *(int *)(iVar3 + 0x2d7c);
      }
      iVar11 = iVar11 + 1;
      iVar10 = iVar10 + 0x24;
    } while (iVar11 < iVar4);
  }
  if (0 < param_2) {
    iVar4 = 0;
    iVar10 = 0;
    pbVar6 = pbVar5;
    do {
      pbVar12 = pbVar6 + 2;
      pbVar13 = pbVar12;
      while (pbVar14 = pbVar6 + 1, pbVar19 = pbVar6, pbVar2 = pbVar6,
            *pbVar6 == 10 || *pbVar6 == 0xd) {
        pbVar13 = pbVar13 + 1;
        pbVar12 = pbVar12 + 1;
        pbVar6 = pbVar14;
      }
      for (; (pbVar2 < pbVar18 && (pbVar19 = pbVar2, *pbVar2 != 10 && *pbVar2 != 0xd));
          pbVar2 = pbVar2 + 1) {
        pbVar19 = pbVar5 + param_2;
      }
      *pbVar19 = 0;
      if (*pbVar6 != 0x3b) {
        if (((*pbVar6 == 0x5b) && (pbVar6 < pbVar19)) && (pbVar19[-1] == 0x5d)) {
          pbVar19[-1] = 0;
          puVar7 = (undefined1 *)imp_memchr(pbVar14,0x5d,(int)pbVar19 - (int)pbVar12);
          if ((puVar7 != (undefined1 *)0x0) &&
             (iVar11 = imp_memchr(puVar7 + 1,0x5b,(int)(pbVar19 + -1) - (int)(puVar7 + 1)),
             iVar11 != 0)) {
            *puVar7 = 0;
            uVar8 = 0xffffffff;
            uVar16 = (uint)*pbVar14;
            while (uVar16 != 0) {
              bVar1 = *pbVar13;
              if ((uVar16 == 0x23 && bVar1 == 0x23) && (pbVar13[1] == 0x23)) {
                uVar8 = 0xffffffff;
              }
              pbVar13 = pbVar13 + 1;
              uVar8 = *(uint *)(&DAT_70086edc + (uVar8 & 0xff ^ uVar16) * 4) ^ uVar8 >> 8;
              uVar16 = (uint)bVar1;
            }
            iVar4 = 0;
            iVar15 = *(int *)(DAT_712042b4 + 0x2d7c);
            if (0 < iVar15) {
              iVar10 = *(int *)(DAT_712042b4 + 0x2d84);
              do {
                if ((*(uint *)(iVar10 + 4) ^ uVar8) == 0xffffffff) {
                  iVar4 = (**(code **)(iVar10 + 0x10))(iVar3,iVar10,iVar11 + 1);
                  goto LAB_718f2ed8;
                }
                iVar10 = iVar10 + 0x24;
                iVar15 = iVar15 + -1;
              } while (iVar15 != 0);
            }
            iVar10 = 0;
          }
        }
        else if (iVar10 != 0 && iVar4 != 0) {
          (**(code **)(iVar10 + 0x14))(iVar3,iVar10);
        }
      }
LAB_718f2ed8:
      pbVar6 = pbVar19 + 1;
    } while (pbVar6 < pbVar18);
  }
  *puVar17 = 1;
  imp___aeabi_memcpy(pbVar5,param_1,param_2);
  iVar4 = *(int *)(iVar3 + 0x2d7c);
  if (0 < iVar4) {
    iVar10 = 0;
    iVar11 = 0;
    do {
      pcVar9 = *(code **)(*(int *)(iVar3 + 0x2d84) + iVar10 + 0x18);
      if (pcVar9 != (code *)0x0) {
        (*pcVar9)(iVar3);
        iVar4 = *(int *)(iVar3 + 0x2d7c);
      }
      iVar11 = iVar11 + 1;
      iVar10 = iVar10 + 0x24;
    } while (iVar11 < iVar4);
  }
  return;
}


// =========================================================================
// Function: FUN_718f32f8
// Entry: 0x718f32f8 | Size: 488 bytes
// =========================================================================

undefined * FUN_718f32f8(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  int extraout_r1;
  int extraout_r1_00;
  int iVar6;
  int *piVar7;
  
  iVar1 = DAT_712042b4;
  iVar2 = 0;
  piVar7 = (int *)(DAT_712042b4 + 0x2d70);
  *(undefined4 *)(DAT_712042b4 + 0x2d6c) = 0;
  iVar5 = *(int *)(iVar1 + 0x2d74);
  if (iVar5 < 0) {
    *(int *)(iVar1 + 0x370) = *(int *)(iVar1 + 0x370) + 1;
    uVar3 = (*DAT_70105bac)(0,DAT_712042bc);
    if (*(int *)(iVar1 + 0x2d78) != 0) {
      imp___aeabi_memcpy(uVar3,*(int *)(iVar1 + 0x2d78),*(undefined4 *)(iVar1 + 0x2d70));
      iVar5 = *(int *)(iVar1 + 0x2d78);
      iVar2 = extraout_r1;
      if (iVar5 != 0) {
        iVar2 = DAT_712042b4;
      }
      if (iVar5 != 0 && iVar2 != 0) {
        *(int *)(iVar2 + 0x370) = *(int *)(iVar2 + 0x370) + -1;
      }
      (*DAT_70105bb0)(iVar5,DAT_712042bc);
    }
    *(undefined4 *)(iVar1 + 0x2d70) = 0;
    *(undefined4 *)(iVar1 + 0x2d74) = 0;
    *(undefined4 *)(iVar1 + 0x2d78) = uVar3;
  }
  else {
    *piVar7 = 0;
    if (iVar5 != 0) {
      iVar5 = *(int *)(iVar1 + 0x2d78);
      goto LAB_718f345c;
    }
  }
  if (DAT_712042b4 != 0) {
    *(int *)(DAT_712042b4 + 0x370) = *(int *)(DAT_712042b4 + 0x370) + 1;
  }
  iVar5 = (*DAT_70105bac)(8,DAT_712042bc);
  if (*(int *)(iVar1 + 0x2d78) != 0) {
    imp___aeabi_memcpy(iVar5,*(int *)(iVar1 + 0x2d78),*(undefined4 *)(iVar1 + 0x2d70));
    iVar6 = *(int *)(iVar1 + 0x2d78);
    iVar2 = extraout_r1_00;
    if (iVar6 != 0) {
      iVar2 = DAT_712042b4;
    }
    if (iVar6 != 0 && iVar2 != 0) {
      *(int *)(iVar2 + 0x370) = *(int *)(iVar2 + 0x370) + -1;
    }
    (*DAT_70105bb0)(iVar6,DAT_712042bc);
  }
  *(undefined4 *)(iVar1 + 0x2d74) = 8;
  *(int *)(iVar1 + 0x2d78) = iVar5;
  iVar2 = *(int *)(iVar1 + 0x2d70);
LAB_718f345c:
  iVar6 = 0;
  *(undefined1 *)(iVar5 + iVar2) = 0;
  *(int *)(iVar1 + 0x2d70) = *(int *)(iVar1 + 0x2d70) + 1;
  if (0 < *(int *)(iVar1 + 0x2d7c)) {
    iVar2 = 0;
    do {
      iVar5 = *(int *)(iVar1 + 0x2d84) + iVar6;
      (**(code **)(iVar5 + 0x1c))(iVar1,iVar5,piVar7);
      iVar2 = iVar2 + 1;
      iVar6 = iVar6 + 0x24;
    } while (iVar2 < *(int *)(iVar1 + 0x2d7c));
  }
  if (param_1 != (int *)0x0) {
    iVar2 = *piVar7 + -1;
    if (*piVar7 == 0) {
      iVar2 = 0;
    }
    *param_1 = iVar2;
  }
  puVar4 = &DAT_712042b8;
  if (*(undefined **)(iVar1 + 0x2d78) != (undefined *)0x0) {
    puVar4 = *(undefined **)(iVar1 + 0x2d78);
  }
  return puVar4;
}


// =========================================================================
// Function: imp_malloc
// Entry: 0x718f36d0 | Size: 4 bytes
// =========================================================================

void imp_malloc(void)

{
  imp_malloc();
  return;
}


// =========================================================================
// Function: imp_free
// Entry: 0x718f3708 | Size: 4 bytes
// =========================================================================

void imp_free(void)

{
  imp_free();
  return;
}


// =========================================================================
// Function: FUN_718f3740
// Entry: 0x718f3740 | Size: 64 bytes
// =========================================================================

int FUN_718f3740(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = *(uint *)(*param_2 + 8);
  uVar2 = *(uint *)(*param_1 + 8);
  iVar1 = (uVar2 & 0x4000000) - (uVar3 & 0x4000000);
  bVar4 = false;
  if (iVar1 == 0) {
    iVar1 = (uVar2 & 0x2000000) - (uVar3 & 0x2000000);
    bVar4 = iVar1 == 0;
  }
  if (bVar4) {
    iVar1 = (int)*(short *)(*param_1 + 0x98) - (int)*(short *)(*param_2 + 0x98);
  }
  return iVar1;
}


// =========================================================================
// Function: FUN_718f3798
// Entry: 0x718f3798 | Size: 152 bytes
// =========================================================================

void FUN_718f3798(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = **(int **)(DAT_712042b4 + 0x1bcc);
  *(int *)(DAT_712042b4 + 0x368) = *(int *)(DAT_712042b4 + 0x368) + 1;
  FUN_718eab54(iVar1 + param_2 * 0xc + 0x60,*(undefined4 *)(param_1 + 0x288));
  iVar1 = *(int *)(param_1 + 0x188);
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 400) + iVar3 * 4);
      if ((*(char *)(iVar2 + 0x8a) != '\0') && (*(char *)(iVar2 + 0x91) == '\0')) {
        FUN_718f3798(iVar2,param_2);
        iVar1 = *(int *)(param_1 + 0x188);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return;
}


// =========================================================================
// Function: FUN_718f38a0
// Entry: 0x718f38a0 | Size: 524 bytes
// =========================================================================

int * FUN_718f38a0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int extraout_r1;
  int extraout_r1_00;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*param_1 == 0) {
    if (param_1[1] == 0) {
      if (DAT_712042b4 != 0) {
        *(int *)(DAT_712042b4 + 0x370) = *(int *)(DAT_712042b4 + 0x370) + 1;
      }
      iVar5 = (*DAT_70105bac)(0x20,DAT_712042bc);
      if (param_1[2] != 0) {
        imp___aeabi_memcpy(iVar5,param_1[2],*param_1 << 2);
        iVar3 = param_1[2];
        iVar2 = extraout_r1;
        if (iVar3 != 0) {
          iVar2 = DAT_712042b4;
        }
        if (iVar3 != 0 && iVar2 != 0) {
          *(int *)(iVar2 + 0x370) = *(int *)(iVar2 + 0x370) + -1;
        }
        (*DAT_70105bb0)(iVar3,DAT_712042bc);
      }
      iVar2 = *param_1;
      param_1[1] = 8;
      param_1[2] = iVar5;
    }
    else {
      iVar5 = param_1[2];
      iVar2 = 0;
    }
    *(undefined4 *)(iVar5 + iVar2 * 4) = *param_2;
    *param_1 = *param_1 + 1;
    return param_1;
  }
  iVar5 = param_1[2];
  iVar2 = *param_1;
  iVar3 = param_1[2] - iVar5;
  if (iVar2 == param_1[1]) {
    iVar4 = iVar2 + iVar2 / 2;
    if (iVar2 == 0) {
      iVar4 = 8;
    }
    if (iVar4 <= iVar2 + 1) {
      iVar4 = iVar2 + 1;
    }
    if (DAT_712042b4 != 0) {
      iVar2 = *(int *)(DAT_712042b4 + 0x370);
    }
    if (DAT_712042b4 != 0) {
      *(int *)(DAT_712042b4 + 0x370) = iVar2 + 1;
    }
    iVar5 = (*DAT_70105bac)(iVar4 << 2,DAT_712042bc);
    if (param_1[2] != 0) {
      imp___aeabi_memcpy(iVar5,param_1[2],*param_1 << 2);
      iVar1 = param_1[2];
      iVar2 = extraout_r1_00;
      if (iVar1 != 0) {
        iVar2 = DAT_712042b4;
      }
      if (iVar1 != 0 && iVar2 != 0) {
        *(int *)(iVar2 + 0x370) = *(int *)(iVar2 + 0x370) + -1;
      }
      (*DAT_70105bb0)(iVar1,DAT_712042bc);
    }
    iVar2 = *param_1;
    param_1[1] = iVar4;
    param_1[2] = iVar5;
  }
  if (iVar3 >> 2 < iVar2) {
    imp___aeabi_memmove(iVar5 + iVar3 + 4,iVar5 + iVar3,(iVar2 - (iVar3 >> 2)) * 4);
    iVar5 = param_1[2];
  }
  *(undefined4 *)(iVar5 + iVar3) = *param_2;
  *param_1 = *param_1 + 1;
  return (int *)(param_1[2] + iVar3);
}


// =========================================================================
// Function: FUN_718f3ccc
// Entry: 0x718f3ccc | Size: 428 bytes
// =========================================================================

void FUN_718f3ccc(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar8 = *param_2;
  uVar10 = param_2[1];
  uVar11 = *(undefined4 *)(param_1 + 0xc);
  uVar9 = *(undefined4 *)(param_1 + 0x10);
  uVar7 = *(undefined4 *)(param_1 + 0x14);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  FUN_71ba240c(uVar11,uVar8);
  uVar5 = *param_3;
  uVar2 = FUN_71ba21e8();
  uVar2 = FUN_71ba0b38(uVar2,uVar8);
  FUN_71ba240c(uVar9,uVar10);
  uVar6 = param_3[1];
  uVar3 = FUN_71ba21e8();
  uVar3 = FUN_71ba0b38(uVar3,uVar10);
  uVar7 = FUN_71ba0b38(uVar11,uVar7);
  uVar1 = FUN_71ba0b38(uVar9,uVar1);
  uVar8 = FUN_71ba240c(uVar8,uVar7);
  uVar8 = FUN_71ba21e8(uVar8,uVar5);
  uVar7 = FUN_71ba0b38(uVar8,uVar7);
  uVar8 = FUN_71ba240c(uVar10,uVar1);
  uVar8 = FUN_71ba21e8(uVar8,uVar6);
  uVar1 = FUN_71ba0b38(uVar8,uVar1);
  uVar7 = FUN_71ba240c(uVar7,uVar2);
  uVar1 = FUN_71ba240c(uVar1,uVar3);
  FUN_718ed3d4(&uStack_30,param_1,uVar7,uVar1);
  *param_4 = uVar2;
  param_4[1] = uVar3;
  iVar4 = FUN_71ba2cf0(*param_3,0);
  if (iVar4 != 0) {
    uVar7 = FUN_71ba240c(uStack_30,uVar7);
    uVar2 = FUN_71ba240c(uVar2,uVar7);
    *param_4 = uVar2;
  }
  iVar4 = FUN_71ba2cf0(param_3[1],0);
  if (iVar4 != 0) {
    uVar1 = FUN_71ba240c(uStack_2c,uVar1);
    uVar1 = FUN_71ba240c(uVar3,uVar1);
    param_4[1] = uVar1;
  }
  *param_5 = uStack_30;
  param_5[1] = uStack_2c;
  return;
}


// =========================================================================
// Function: FUN_718f4114
// Entry: 0x718f4114 | Size: 480 bytes
// =========================================================================

void FUN_718f4114(undefined4 *param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5
                 )

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  
  iVar1 = FUN_71ba2cf0(param_5,0);
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  uVar5 = *(undefined4 *)(param_2 + 0xc);
  uVar7 = *(undefined4 *)(param_2 + 0x14);
  uVar3 = FUN_71ba0b38(uVar2,*(undefined4 *)(param_2 + 0x18));
  uVar4 = FUN_71ba0b38(uVar3,0xbf800000);
  if (iVar1 == 0) {
    uVar4 = uVar3;
  }
  uVar7 = FUN_71ba0b38(uVar5,uVar7);
  uVar3 = FUN_71ba0b38(uVar7,0xbf800000);
  if (iVar1 == 0) {
    uVar3 = uVar7;
  }
  if (3 < param_3) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    return;
  }
  puVar6 = param_1 + 1;
  switch(param_3) {
  case 0:
    uVar4 = FUN_71ba0b38(uVar2,param_5);
    param_1[3] = uVar4;
    uVar4 = FUN_71ba240c(uVar3,param_4);
    param_1[2] = uVar4;
    break;
  case 1:
    uVar4 = FUN_71ba240c(uVar4,param_4);
    param_1[3] = uVar4;
    uVar4 = FUN_71ba0b38(uVar3,param_5);
    param_1[2] = uVar4;
    uVar2 = FUN_71ba0b38(uVar2,param_4);
    *puVar6 = uVar2;
    goto LAB_718f42d4;
  case 2:
    uVar2 = FUN_71ba0b38(uVar4,param_5);
    param_1[3] = uVar2;
    uVar2 = FUN_71ba240c(uVar3,param_4);
    param_1[2] = uVar2;
    uVar2 = uVar4;
    break;
  case 3:
    uVar4 = FUN_71ba240c(uVar4,param_4);
    param_1[3] = uVar4;
    uVar4 = FUN_71ba0b38(uVar5,param_5);
    param_1[2] = uVar4;
    uVar2 = FUN_71ba0b38(uVar2,param_4);
    *puVar6 = uVar2;
    uVar3 = uVar5;
LAB_718f42d4:
    uVar2 = FUN_71ba240c(uVar3,param_5);
    goto LAB_718f42d8;
  }
  uVar2 = FUN_71ba240c(uVar2,param_5);
  *puVar6 = uVar2;
  uVar2 = FUN_71ba0b38(uVar5,param_4);
LAB_718f42d8:
  *param_1 = uVar2;
  return;
}


// =========================================================================
// Function: FUN_718f4514
// Entry: 0x718f4514 | Size: 336 bytes
// =========================================================================

void FUN_718f4514(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  
  uVar8 = *(uint *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = 0;
  uVar6 = 0;
  if ((uVar8 & 1) == 0) {
    puVar7 = (undefined4 *)(DAT_712042b4 + 0x1554);
    uVar6 = FUN_71ba21e8(*(undefined4 *)(DAT_712042b4 + 0x1934),*(undefined4 *)(param_2 + 0x280));
    if (*(int *)(param_2 + 0x31c) != 0) {
      uVar6 = FUN_71ba21e8(uVar6,*(undefined4 *)(*(int *)(param_2 + 0x31c) + 0x280));
    }
    uVar2 = FUN_71ba0b38(*puVar7,*puVar7);
    uVar6 = FUN_71ba0b38(uVar2,uVar6);
  }
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 0x1c);
  if ((uVar8 & 0x400) != 0) {
    uVar5 = *(undefined4 *)(param_2 + 0x158);
    puVar7 = (undefined4 *)(DAT_712042b4 + 0x1554);
    uVar4 = FUN_71ba21e8(*(undefined4 *)(DAT_712042b4 + 0x1934),*(undefined4 *)(param_2 + 0x280));
    if (*(int *)(param_2 + 0x31c) != 0) {
      uVar4 = FUN_71ba21e8(uVar4,*(undefined4 *)(*(int *)(param_2 + 0x31c) + 0x280));
    }
    uVar4 = FUN_71ba0b38(uVar5,uVar4);
    uVar5 = FUN_71ba0b38(*puVar7,*puVar7);
    uVar4 = FUN_71ba0b38(uVar5,uVar4);
  }
  *param_1 = uVar3;
  uVar2 = FUN_71ba0b38(uVar3,uVar2);
  param_1[2] = uVar2;
  uVar1 = FUN_71ba0b38(uVar1,uVar6);
  param_1[1] = uVar1;
  uVar1 = FUN_71ba0b38(uVar1,uVar4);
  param_1[3] = uVar1;
  return;
}


// =========================================================================
// Function: FUN_718f480c
// Entry: 0x718f480c | Size: 2024 bytes
// =========================================================================

undefined4
FUN_718f480c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  
  iVar10 = DAT_712042b4;
  iVar9 = *(int *)(DAT_712042b4 + 0x1a6c);
  if (*(int *)(DAT_712042b4 + 0x1c18) != *(int *)(iVar9 + 0x140)) {
    return 0;
  }
  *(int *)(DAT_712042b4 + 0x1c14) = *(int *)(DAT_712042b4 + 0x1c14) + 1;
  uStack_2c = param_5;
  uStack_30 = param_4;
  uStack_28 = param_2;
  if (*(int *)(iVar9 + 0x31c) == *(int *)(iVar10 + 0x1bd0)) {
    uVar11 = *(undefined4 *)(iVar9 + 0x240);
    iVar1 = FUN_71ba2d70(uVar11,param_3);
    if (iVar1 == 0) {
      return 0;
    }
    uVar12 = *(undefined4 *)(iVar9 + 0x238);
    iVar1 = FUN_71ba2d10(uVar12,param_5);
    if (iVar1 == 0) {
      return 0;
    }
    uVar13 = *(undefined4 *)(iVar9 + 0x23c);
    iVar1 = FUN_71ba2d70(uVar13,param_2);
    if (iVar1 == 0) {
      return 0;
    }
    uVar14 = *(undefined4 *)(iVar9 + 0x234);
    iVar1 = FUN_71ba2d10(uVar14,param_4);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_71ba2d70(uVar12,param_5);
    iVar2 = FUN_71ba2d10(uVar11,param_5);
    if (iVar2 != 0) {
      param_5 = uVar11;
    }
    uStack_2c = param_5;
    if (iVar1 != 0) {
      uStack_2c = uVar12;
    }
    iVar1 = FUN_71ba2d70(uVar14,param_4);
    iVar2 = FUN_71ba2d10(uVar13,param_4);
    if (iVar2 != 0) {
      param_4 = uVar13;
    }
    uStack_30 = param_4;
    if (iVar1 != 0) {
      uStack_30 = uVar14;
    }
    iVar1 = FUN_71ba2d70(uVar12,param_3);
    iVar2 = FUN_71ba2d10(uVar11,param_3);
    if (iVar2 != 0) {
      param_3 = uVar11;
    }
    if (iVar1 != 0) {
      param_3 = uVar12;
    }
    iVar1 = FUN_71ba2d70(uVar14,param_2);
    iVar2 = FUN_71ba2d10(uVar13,param_2);
    if (iVar2 != 0) {
      param_2 = uVar13;
    }
    uStack_28 = param_2;
    if (iVar1 != 0) {
      uStack_28 = uVar14;
    }
  }
  if (*(uint *)(iVar10 + 0x1c54) < 2) {
    uVar12 = *(undefined4 *)(iVar9 + 0x238);
    uVar11 = *(undefined4 *)(iVar9 + 0x240);
    iVar1 = FUN_71ba2d10(uStack_2c,uVar12);
    iVar2 = FUN_71ba2d70(uStack_2c,uVar11);
    if (iVar2 != 0) {
      uStack_2c = uVar11;
    }
    if (iVar1 != 0) {
      uStack_2c = uVar12;
    }
    iVar1 = FUN_71ba2d10(param_3,uVar12);
    iVar2 = FUN_71ba2d70(param_3,uVar11);
    if (iVar2 != 0) {
      param_3 = uVar11;
    }
    if (iVar1 != 0) {
      param_3 = uVar12;
    }
  }
  else {
    uVar11 = *(undefined4 *)(iVar9 + 0x234);
    uVar12 = *(undefined4 *)(iVar9 + 0x23c);
    iVar1 = FUN_71ba2d10(uStack_30,uVar11);
    iVar2 = FUN_71ba2d70(uStack_30,uVar12);
    if (iVar2 != 0) {
      uStack_30 = uVar12;
    }
    if (iVar1 != 0) {
      uStack_30 = uVar11;
    }
    iVar1 = FUN_71ba2d10(uStack_28,uVar11);
    iVar2 = FUN_71ba2d70(uStack_28,uVar12);
    if (iVar2 != 0) {
      uStack_28 = uVar12;
    }
    if (iVar1 != 0) {
      uStack_28 = uVar11;
    }
  }
  uVar13 = *(undefined4 *)(iVar10 + 0x1c04);
  iVar1 = FUN_71ba2d10(uStack_30,uVar13);
  uVar14 = *(undefined4 *)(iVar10 + 0x1c0c);
  uVar11 = uStack_30;
  uVar12 = uVar13;
  if (iVar1 == 0) {
    iVar1 = FUN_71ba2d10(uVar14,uStack_28);
    uVar3 = 0;
    uVar11 = uStack_28;
    uVar12 = uVar14;
    if (iVar1 == 0) goto LAB_718f4b20;
  }
  uVar3 = FUN_71ba240c(uVar11,uVar12);
LAB_718f4b20:
  uVar11 = FUN_71ba240c(uStack_2c,param_3);
  uVar12 = FUN_71ba21e8(uVar11,0x3f4ccccd);
  uVar12 = FUN_71ba0b38(uVar12,param_3);
  uVar15 = *(undefined4 *)(iVar10 + 0x1c08);
  uVar4 = *(undefined4 *)(iVar10 + 0x1c10);
  uVar5 = FUN_71ba240c(uVar4,uVar15);
  uVar6 = FUN_71ba21e8(uVar5,0x3e4ccccd);
  uVar6 = FUN_71ba0b38(uVar6,uVar15);
  iVar1 = FUN_71ba2d10(uVar12,uVar6);
  uVar11 = FUN_71ba21e8(uVar11,0x3e4ccccd);
  uVar11 = FUN_71ba0b38(uVar11,param_3);
  uVar5 = FUN_71ba21e8(uVar5,0x3f4ccccd);
  uVar5 = FUN_71ba0b38(uVar5,uVar15);
  if (iVar1 == 0) {
    iVar1 = FUN_71ba2d10(uVar5,uVar11);
    uVar7 = 0;
    if (iVar1 != 0) {
      uVar7 = FUN_71ba240c(uVar11,uVar5);
    }
  }
  else {
    uVar7 = FUN_71ba240c(uVar12,uVar6);
  }
  uVar11 = FUN_71ba0b38(uStack_30,uStack_28);
  uVar12 = FUN_71ba0b38(uVar13,uVar14);
  uStack_40 = FUN_71ba240c(uVar11,uVar12);
  uVar11 = FUN_71ba0b38(uStack_2c,param_3);
  uVar12 = FUN_71ba0b38(uVar15,uVar4);
  uStack_28 = FUN_71ba240c(uVar11,uVar12);
  uVar11 = FUN_71ba0b38();
  iVar1 = FUN_71ba2d70(uVar3,0);
  uVar12 = FUN_71ba13e0(uVar3,0x447a0000);
  uVar13 = 0xbf800000;
  if (iVar1 != 0) {
    uVar13 = 0x3f800000;
  }
  uVar8 = FUN_71ba0b38(uVar12,uVar13);
  iVar1 = FUN_71ba2cf0(uVar7,0);
  if (iVar1 != 0) {
    uVar8 = uVar3;
  }
  iVar2 = FUN_71ba2cf0(uVar3,0);
  if (iVar2 != 0) {
    uVar8 = uVar3;
  }
  uVar12 = FUN_71ba0b38(uVar7 & 0x7fffffff,uVar8 & 0x7fffffff);
  if ((iVar1 == 0) || (iVar1 = FUN_71ba2cf0(uVar8,0), iVar1 == 0)) {
    iVar9 = FUN_71ba2d70(uVar8,0);
    iVar1 = FUN_71ba2d70(uVar7,0);
    uVar3 = 2;
    if (iVar1 != 0) {
      uVar3 = 3;
    }
    iVar1 = FUN_71ba2d70(uVar8 & 0x7fffffff,uVar7 & 0x7fffffff);
    uVar16 = (uint)(iVar9 != 0);
    uStack_40 = uVar8;
    uStack_3c = uVar12;
    uStack_28 = uVar7;
    if (iVar1 == 0) {
      uVar16 = uVar3;
    }
  }
  else {
    iVar1 = FUN_71ba2cf0(uStack_40,0);
    if ((iVar1 == 0) || (iVar1 = FUN_71ba2cf0(uStack_28,0), iVar1 == 0)) {
      iVar9 = FUN_71ba2d70(uStack_40,0);
      iVar1 = FUN_71ba2d70(uStack_28,0);
      uVar3 = 2;
      if (iVar1 != 0) {
        uVar3 = 3;
      }
      iVar1 = FUN_71ba2d70(uStack_40 & 0x7fffffff,uStack_28 & 0x7fffffff);
      uVar16 = (uint)(iVar9 != 0);
      uStack_3c = uVar11;
      if (iVar1 == 0) {
        uVar16 = uVar3;
      }
    }
    else {
      uStack_3c = 0;
      uStack_40 = 0;
      uStack_28 = 0;
      uVar16 = (uint)(*(uint *)(iVar10 + 0x1bd4) <= *(uint *)(iVar9 + 0x118));
    }
  }
  uVar13 = *(undefined4 *)(param_1 + 0xc);
  uVar14 = 0;
  if (uVar16 == *(uint *)(iVar10 + 0x1c4c)) {
    iVar9 = FUN_71ba2d10(uVar12,uVar13);
    if (iVar9 != 0) {
      *(undefined4 *)(param_1 + 0xc) = uVar12;
      *(undefined4 *)(param_1 + 0x10) = uVar11;
      return 1;
    }
    iVar9 = FUN_71ba2cf0(uVar12,uVar13);
    if (iVar9 != 0) {
      uVar12 = *(undefined4 *)(param_1 + 0x10);
      iVar9 = FUN_71ba2d10(uVar11,uVar12);
      if (iVar9 == 0) {
        iVar9 = FUN_71ba2cf0(uVar11,uVar12);
        if (iVar9 != 0) {
          if ((uVar16 & 2) != 0) {
            uVar8 = uVar7;
          }
          iVar9 = FUN_71ba2d10(uVar8,0);
          if (iVar9 != 0) {
            uVar14 = 1;
          }
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x10) = uVar11;
        uVar14 = 1;
      }
    }
  }
  iVar9 = FUN_71ba2cf0(uVar13,0x7f7fffff);
  if (iVar9 == 0) {
    return uVar14;
  }
  iVar9 = FUN_71ba2d10(uStack_3c,*(undefined4 *)(param_1 + 0x14));
  if (iVar9 == 0) {
    return uVar14;
  }
  if (*(int *)(iVar10 + 0x1c18) == 1) {
    if ((*(byte *)(*(int *)(iVar10 + 0x1bd0) + 0xb) & 0x10) != 0) {
      return uVar14;
    }
    iVar10 = *(int *)(iVar10 + 0x1c4c);
    if ((((iVar10 != 0) || (iVar9 = FUN_71ba2d10(uStack_40,0), iVar9 == 0)) &&
        ((iVar10 != 1 || (iVar9 = FUN_71ba2d70(uStack_40,0), iVar9 == 0)))) &&
       ((iVar10 != 2 || (iVar9 = FUN_71ba2d10(uStack_28,0), iVar9 == 0)))) {
      if (iVar10 != 3) {
        return uVar14;
      }
      iVar10 = FUN_71ba2d70(uStack_28,0);
      if (iVar10 == 0) {
        return uVar14;
      }
    }
    *(undefined4 *)(param_1 + 0x14) = uStack_3c;
    return 1;
  }
  return uVar14;
}


// =========================================================================
// Function: FUN_718f57d4
// Entry: 0x718f57d4 | Size: 288 bytes
// =========================================================================

void FUN_718f57d4(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  iVar1 = DAT_712042b4;
  if ((*(byte *)(*(int *)(DAT_712042b4 + 0x1cd8) + 0xb) & 8) != 0) {
    return;
  }
  iVar6 = *(int *)(DAT_712042b4 + 0x1a38);
  iVar5 = iVar6;
  do {
    iVar4 = iVar5 + -1;
    if (iVar5 < 1) {
      iVar4 = -1;
      iVar5 = param_1 - 1;
      goto joined_r0x718f582c;
    }
    iVar5 = iVar4;
  } while (*(int *)(*(int *)(DAT_712042b4 + 0x1a40) + iVar4 * 4) != *(int *)(DAT_712042b4 + 0x1cd8))
  ;
  iVar5 = iVar4 + param_1;
joined_r0x718f582c:
  do {
    if ((iVar5 < 0) || (iVar6 <= iVar5)) break;
    uVar3 = *(uint *)(*(int *)(DAT_712042b4 + 0x1a40) + iVar5 * 4);
    if (*(char *)(uVar3 + 0x8b) != '\0') {
      uVar2 = *(uint *)(uVar3 + 800);
      bVar7 = uVar2 == uVar3;
      if (bVar7) {
        uVar2 = (uint)*(byte *)(uVar3 + 10);
      }
      if (bVar7 && (uVar2 & 8) == 0) goto LAB_718f58e0;
    }
    iVar5 = iVar5 + param_1;
  } while( true );
  iVar5 = 0;
  if (0x7fffffff < param_1) {
    if (iVar6 < 1) goto LAB_718f58e8;
    iVar5 = iVar6 + -1;
  }
  do {
    if ((iVar4 == iVar5) || (iVar6 <= iVar5)) break;
    uVar3 = *(uint *)(*(int *)(DAT_712042b4 + 0x1a40) + iVar5 * 4);
    if (*(char *)(uVar3 + 0x8b) != '\0') {
      uVar2 = *(uint *)(uVar3 + 800);
      bVar7 = uVar2 == uVar3;
      if (bVar7) {
        uVar2 = (uint)*(byte *)(uVar3 + 10);
      }
      if (bVar7 && (uVar2 & 8) == 0) goto LAB_718f58e0;
    }
    iVar5 = iVar5 + param_1;
  } while (-1 < iVar5);
  goto LAB_718f58e8;
LAB_718f58e0:
  *(uint *)(DAT_712042b4 + 0x1cd8) = uVar3;
  *(uint *)(iVar1 + 0x1cdc) = uVar3;
LAB_718f58e8:
  *(undefined1 *)(iVar1 + 0x1cec) = 0;
  return;
}


// =========================================================================
// Function: FUN_718f592c
// Entry: 0x718f592c | Size: 1424 bytes
// =========================================================================

void FUN_718f592c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    param_1 = FUN_718c9f94();
  }
  *(undefined4 *)(param_1 + 0xec) = 0x3d75c28f;
  *(undefined4 *)(param_1 + 0xf0) = 0x3f70a3d7;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0x3f70a3d7;
  *(undefined4 *)(param_1 + 0x104) = 0x3da3d70a;
  *(undefined4 *)(param_1 + 0x108) = 0x3da3d70a;
  *(undefined4 *)(param_1 + 0x10c) = 0x3da3d70a;
  *(undefined4 *)(param_1 + 0x260) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0x234) = 0x3d75c28f;
  *(undefined4 *)(param_1 + 0x238) = 0x3f07ae14;
  *(undefined4 *)(param_1 + 0x23c) = 0x3f7ae148;
  *(undefined4 *)(param_1 + 0xe4) = 0x3d75c28f;
  *(undefined4 *)(param_1 + 0xe8) = 0x3d75c28f;
  *(undefined4 *)(param_1 + 0x268) = 0x3f170a3d;
  *(undefined4 *)(param_1 + 0x248) = 0x3f170a3d;
  *(undefined4 *)(param_1 + 600) = 0x3f170a3d;
  *(undefined4 *)(param_1 + 0x228) = 0x3f170a3d;
  *(undefined4 *)(param_1 + 0x208) = 0x3f170a3d;
  *(undefined4 *)(param_1 + 0x218) = 0x3f170a3d;
  *(undefined4 *)(param_1 + 0x114) = 0x3edc28f6;
  *(undefined4 *)(param_1 + 0x118) = 0x3edc28f6;
  *(undefined4 *)(param_1 + 500) = 0x3e75c28f;
  *(undefined4 *)(param_1 + 0x1f8) = 0x3f051eb8;
  *(undefined4 *)(param_1 + 0x1fc) = 0x3f6147ae;
  *(undefined4 *)(param_1 + 0x1b0) = 0x3f07ae14;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f000000;
  *(undefined4 *)(param_1 + 0xd8) = 0x3f000000;
  *(undefined4 *)(param_1 + 0xdc) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x11c) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x120) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x1c4) = 0x3ed1eb85;
  *(undefined4 *)(param_1 + 0x1c8) = 0x3ed1eb85;
  *(undefined4 *)(param_1 + 0x1cc) = 0x3ed1eb85;
  *(undefined4 *)(param_1 + 0x1d4) = 0x3f028f5c;
  *(undefined4 *)(param_1 + 0x1d8) = 0x3f028f5c;
  *(undefined4 *)(param_1 + 0x1dc) = 0x3f028f5c;
  *(undefined4 *)(param_1 + 400) = 0x3f028f5c;
  *(undefined4 *)(param_1 + 0x194) = 0x3e0f5c29;
  *(undefined4 *)(param_1 + 0x198) = 0x3e0f5c29;
  *(undefined4 *)(param_1 + 0x19c) = 0x3e0f5c29;
  *(undefined4 *)(param_1 + 0x250) = 0x3e9eb852;
  *(undefined4 *)(param_1 + 0x1a4) = 0x3ca3d70a;
  *(undefined4 *)(param_1 + 0x1a8) = 0x3ca3d70a;
  *(undefined4 *)(param_1 + 0x1ac) = 0x3ca3d70a;
  *(undefined4 *)(param_1 + 0x1b4) = 0x3e9eb852;
  *(undefined4 *)(param_1 + 0x1b8) = 0x3e9eb852;
  *(undefined4 *)(param_1 + 0x1bc) = 0x3e9eb852;
  *(undefined4 *)(param_1 + 0x16c) = 0x3d23d70a;
  *(undefined4 *)(param_1 + 0x170) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x174) = 0x3e23d70a;
  *(undefined4 *)(param_1 + 0x178) = 0x3e947ae1;
  *(undefined4 *)(param_1 + 0x164) = 0x3d23d70a;
  *(undefined4 *)(param_1 + 0x168) = 0x3d23d70a;
  *(undefined4 *)(param_1 + 0x17c) = 0x3ef5c28f;
  *(undefined4 *)(param_1 + 0x13c) = 0x3ef5c28f;
  *(undefined4 *)(param_1 + 0x148) = 0x3f170a3d;
  *(undefined4 *)(param_1 + 0x14c) = 0x3f7ae148;
  *(undefined4 *)(param_1 + 0x150) = 0x3ecccccd;
  *(undefined4 *)(param_1 + 0x158) = 0x3f170a3d;
  *(undefined4 *)(param_1 + 0x15c) = 0x3f7ae148;
  *(undefined4 *)(param_1 + 0x160) = 0x3f2b851f;
  *(undefined4 *)(param_1 + 0x140) = 0x3f0a3d71;
  *(undefined4 *)(param_1 + 0x134) = 0x3e23d70a;
  *(undefined4 *)(param_1 + 0x2e0) = 0x3f5cac08;
  *(undefined4 *)(param_1 + 0x2d4) = 0x3e3851eb;
  *(undefined4 *)(param_1 + 0x2d8) = 0x3eb33333;
  *(undefined4 *)(param_1 + 0x2dc) = 0x3f147ae2;
  *(undefined4 *)(param_1 + 0x2b0) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x2b8) = 0x3f170a3d;
  *(undefined4 *)(param_1 + 700) = 0x3f7ae148;
  *(undefined4 *)(param_1 + 0x2c0) = 0x3f2b851f;
  *(undefined4 *)(param_1 + 0x284) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x28c) = 0x3f400000;
  *(undefined4 *)(param_1 + 0x290) = 0x3f47ae14;
  *(undefined4 *)(param_1 + 0x294) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x29c) = 0x3f400000;
  *(undefined4 *)(param_1 + 0x220) = 0x3ecccccd;
  *(undefined4 *)(param_1 + 0x288) = 0x3ecccccd;
  *(undefined4 *)(param_1 + 0x298) = 0x3ecccccd;
  *(undefined4 *)(param_1 + 0x274) = *(undefined4 *)(param_1 + 0x114);
  *(undefined4 *)(param_1 + 0x278) = *(undefined4 *)(param_1 + 0x118);
  *(undefined4 *)(param_1 + 0x27c) = *(undefined4 *)(param_1 + 0x11c);
  *(undefined4 *)(param_1 + 0x280) = *(undefined4 *)(param_1 + 0x120);
  *(undefined4 *)(param_1 + 0x254) = 0x3e851eb8;
  *(undefined4 *)(param_1 + 0x25c) = 0x3f7ae148;
  *(undefined4 *)(param_1 + 0x308) = 0x3dd0e55f;
  *(undefined4 *)(param_1 + 0x310) = 0x3f78ef35;
  *(undefined4 *)(param_1 + 0x2e4) = *(undefined4 *)(param_1 + 0x254);
  *(undefined4 *)(param_1 + 0x1e8) = 0x3f170a3d;
  *(undefined4 *)(param_1 + 0x2c8) = 0x3f170a3d;
  *(undefined4 *)(param_1 + 0x2a8) = 0x3f170a3d;
  *(undefined4 *)(param_1 + 0x30c) = 0x3e178d51;
  *(undefined4 *)(param_1 + 0x2ec) = *(undefined4 *)(param_1 + 0x25c);
  *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(param_1 + 0x260);
  *(undefined4 *)(param_1 + 0x2f4) = 0x3e4ccccc;
  *(undefined4 *)(param_1 + 0x2f8) = 0x3ed1eb84;
  *(undefined4 *)(param_1 + 0x2fc) = 0x3f2e147b;
  *(undefined4 *)(param_1 + 0x38c) = 0x3e800000;
  *(undefined4 *)(param_1 + 0x364) = 0x3e428f5c;
  *(undefined4 *)(param_1 + 0x368) = 0x3e428f5c;
  *(undefined4 *)(param_1 + 0x138) = 0x3e947ae1;
  *(undefined4 *)(param_1 + 0x36c) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x374) = 0x3e9eb852;
  *(undefined4 *)(param_1 + 0x378) = 0x3e9eb852;
  *(undefined4 *)(param_1 + 0x358) = 0x3f19999a;
  *(undefined4 *)(param_1 + 0x2d0) = 0x3f733333;
  *(undefined4 *)(param_1 + 0x304) = 0x3d8b4396;
  uVar2 = *(undefined4 *)(param_1 + 0x164);
  *(undefined4 *)(param_1 + 900) = 0x3e6b851f;
  *(undefined4 *)(param_1 + 0x388) = 0x3e6b851f;
  *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(param_1 + 600);
  *(undefined4 *)(param_1 + 0x37c) = 0x3eb33333;
  *(undefined4 *)(param_1 + 0x33c) = 0x3eb33333;
  *(undefined4 *)(param_1 + 0x324) = 0x3f1c28f6;
  *(undefined4 *)(param_1 + 0x328) = 0x3f1c28f6;
  *(undefined4 *)(param_1 + 0x32c) = 0x3f1c28f6;
  *(undefined4 *)(param_1 + 0x344) = 0x3f666666;
  *(undefined4 *)(param_1 + 0x348) = 0x3f333333;
  *(undefined4 *)(param_1 + 0x34c) = 0;
  *(undefined4 *)(param_1 + 0x338) = 0x3edc28f6;
  *(undefined4 *)(param_1 + 0xc4) = 0x3f800000;
  *(undefined4 *)(param_1 + 200) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xe0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x270) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x26c) = 0x3f7ae148;
  *(undefined4 *)(param_1 + 0x264) = 0x3e851eb8;
  *(undefined4 *)(param_1 + 0x244) = 0x3e851eb8;
  *(undefined4 *)(param_1 + 0x24c) = 0x3f7ae148;
  *(undefined4 *)(param_1 + 0x224) = 0x3e851eb8;
  *(undefined4 *)(param_1 + 0x22c) = 0x3f7ae148;
  *(undefined4 *)(param_1 + 0x230) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x240) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x204) = 0x3e851eb8;
  *(undefined4 *)(param_1 + 0x20c) = 0x3f7ae148;
  *(undefined4 *)(param_1 + 0x210) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x214) = 0x3e851eb8;
  *(undefined4 *)(param_1 + 0x21c) = 0x3f7ae148;
  *(undefined4 *)(param_1 + 0x1e4) = 0x3e851eb8;
  *(undefined4 *)(param_1 + 0x1ec) = 0x3f7ae148;
  *(undefined4 *)(param_1 + 0x1f0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x200) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1d0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1e0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1c0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x180) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x144) = 0x3e851eb8;
  *(undefined4 *)(param_1 + 0x154) = 0x3e851eb8;
  *(undefined4 *)(param_1 + 0x2c4) = 0x3e851eb8;
  *(undefined4 *)(param_1 + 0x2cc) = 0x3f7ae148;
  *(undefined4 *)(param_1 + 0x2a4) = 0x3e851eb8;
  *(undefined4 *)(param_1 + 0x2ac) = 0x3f7ae148;
  *(undefined4 *)(param_1 + 0x2b4) = 0x3e851eb8;
  *(undefined4 *)(param_1 + 0x2a0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x300) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x380) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x390) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x35c) = 0;
  *(undefined4 *)(param_1 + 0x360) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x370) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x340) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x350) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x354) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x31c) = 0x3ed91687;
  *(undefined4 *)(param_1 + 800) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x330) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x334) = 0x3f800000;
  uVar1 = FUN_71ba0b38(*(undefined4 *)(param_1 + 0x168),0xbed1eb84);
  uVar1 = FUN_71ba21e8(uVar1,0x3ecccccd);
  uVar1 = FUN_71ba0b38(uVar1,0x3ed1eb84);
  *(undefined4 *)(param_1 + 0x318) = uVar1;
  uVar1 = FUN_71ba0b38(uVar2,0xbe4ccccc);
  uVar1 = FUN_71ba21e8(uVar1,0x3ecccccd);
  uVar1 = FUN_71ba0b38(uVar1,0x3e4ccccc);
  *(undefined4 *)(param_1 + 0x314) = uVar1;
  *(undefined4 *)(param_1 + 0x3f4) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0x3f8) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0x3fc) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0x404) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0x408) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0x40c) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0x400) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x3d8) = 0x3f170a3d;
  *(undefined4 *)(param_1 + 0x3b8) = 0x3f170a3d;
  *(undefined4 *)(param_1 + 0x410) = 0x3eb33333;
  *(undefined4 *)(param_1 + 0x3d0) = 0x3f666666;
  *(undefined4 *)(param_1 + 0x3d4) = 0x3e851eb8;
  *(undefined4 *)(param_1 + 0x3dc) = 0x3f7ae148;
  *(undefined4 *)(param_1 + 0x3e0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3e4) = 0x3f800000;
  *(undefined4 *)(param_1 + 1000) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3ec) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3f0) = 0x3f333333;
  *(undefined4 *)(param_1 + 0x3b4) = 0x3e851eb8;
  *(undefined4 *)(param_1 + 0x3bc) = 0x3f7ae148;
  *(undefined4 *)(param_1 + 0x3c0) = 0x3eb33333;
  *(undefined4 *)(param_1 + 0x3c4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3c8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3cc) = 0;
  *(undefined4 *)(param_1 + 0x394) = 0;
  *(undefined4 *)(param_1 + 0x398) = 0;
  *(undefined4 *)(param_1 + 0x39c) = 0;
  *(undefined4 *)(param_1 + 0x3a0) = 0;
  *(undefined4 *)(param_1 + 0x3a4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3a8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3ac) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3b0) = 0x3d75c28f;
  return;
}


// =========================================================================
// Function: FUN_718f5f98
// Entry: 0x718f5f98 | Size: 264 bytes
// =========================================================================

int FUN_718f5f98(int param_1)

{
  imp___aeabi_memclr4(param_1,0xd0);
  *(undefined4 *)(param_1 + 0x80) = 0xbf5db3d4;
  *(undefined4 *)(param_1 + 0x74) = 0x324cde2e;
  *(undefined4 *)(param_1 + 0x6c) = 0xbefffffd;
  *(undefined4 *)(param_1 + 0x70) = 0xbf5db3d8;
  *(undefined4 *)(param_1 + 0x7c) = 0x3f000006;
  *(undefined4 *)(param_1 + 0x88) = 0xbefffff8;
  *(undefined4 *)(param_1 + 0x4c) = 0xbf000001;
  *(undefined4 *)(param_1 + 0x84) = 0x3f5db3da;
  *(undefined4 *)(param_1 + 0x50) = 0x3f5db3d7;
  *(undefined4 *)(param_1 + 0x54) = 0xbf5db3d9;
  *(undefined4 *)(param_1 + 0x58) = 0x3efffffa;
  *(undefined4 *)(param_1 + 0x5c) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x60) = 0xb3bbbd2e;
  *(undefined4 *)(param_1 + 100) = 0xbf5db3d5;
  *(undefined4 *)(param_1 + 0x78) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x68) = 0xbf000003;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x48) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x34) = 0x3f5db3d7;
  *(undefined4 *)(param_1 + 0x38) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x3c) = 0x3effffff;
  *(undefined4 *)(param_1 + 0x40) = 0x3f5db3d8;
  *(undefined4 *)(param_1 + 0x44) = 0xb33bbd2e;
  return param_1;
}


// =========================================================================
// Function: FUN_718f60d4
// Entry: 0x718f60d4 | Size: 156 bytes
// =========================================================================

void FUN_718f60d4(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = FUN_71ba2cf0(*(undefined4 *)(param_1 + 0x14));
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x14) = param_2;
    *(undefined1 *)(param_1 + 0x8c) = 0;
    iVar1 = 0;
    do {
      iVar5 = iVar1 + 1;
      uVar2 = FUN_71ba1b94(iVar5);
      uVar3 = FUN_71ba240c(uVar2,param_2);
      FUN_71ba13e0(uVar3,uVar2);
      uVar2 = imp_acosf();
      FUN_71ba13e0(0x40c90fdb,uVar2);
      uVar4 = FUN_71ba17bc();
      if (0x1ff < (int)uVar4) {
        uVar4 = 0x200;
      }
      if ((int)uVar4 < 0xd) {
        uVar4 = 0xc;
      }
      if (0xfe < uVar4) {
        uVar4 = 0xff;
      }
      *(char *)(param_1 + 0x8d + iVar1) = (char)uVar4;
      iVar1 = iVar5;
    } while (iVar5 != 0x3f);
  }
  return;
}


// =========================================================================
// Function: FUN_718f624c
// Entry: 0x718f624c | Size: 692 bytes
// =========================================================================

void FUN_718f624c(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_48 [40];
  
  if (0x7fffffff < (uint)param_1[1]) {
    iVar1 = FUN_718c8a70(0);
    if (param_1[2] != 0) {
      imp___aeabi_memcpy(iVar1,param_1[2],*param_1 * 0x28);
      FUN_718c8b14(param_1[2]);
    }
    param_1[1] = 0;
    param_1[2] = iVar1;
  }
  *param_1 = 0;
  if (0x7fffffff < (uint)param_1[4]) {
    iVar1 = FUN_718c8a70(0);
    if (param_1[5] != 0) {
      imp___aeabi_memcpy(iVar1,param_1[5],param_1[3] << 1);
      FUN_718c8b14(param_1[5]);
    }
    param_1[4] = 0;
    param_1[5] = iVar1;
  }
  param_1[3] = 0;
  if (0x7fffffff < (uint)param_1[7]) {
    iVar1 = FUN_718c8a70(0);
    if (param_1[8] != 0) {
      imp___aeabi_memcpy(iVar1,param_1[8],param_1[6] * 0x14);
      FUN_718c8b14(param_1[8]);
    }
    param_1[7] = 0;
    param_1[8] = iVar1;
  }
  param_1[6] = 0;
  param_1[9] = *(int *)(param_1[0xb] + 0x28);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[10] = 0;
  if (0x7fffffff < (uint)param_1[0x10]) {
    iVar1 = FUN_718c8a70(0);
    if (param_1[0x11] != 0) {
      imp___aeabi_memcpy(iVar1,param_1[0x11],param_1[0xf] << 4);
      FUN_718c8b14(param_1[0x11]);
    }
    param_1[0x10] = 0;
    param_1[0x11] = iVar1;
  }
  param_1[0xf] = 0;
  if (0x7fffffff < (uint)param_1[0x13]) {
    iVar1 = FUN_718c8a70(0);
    if (param_1[0x14] != 0) {
      imp___aeabi_memcpy(iVar1,param_1[0x14],param_1[0x12] << 2);
      FUN_718c8b14(param_1[0x14]);
    }
    param_1[0x13] = 0;
    param_1[0x14] = iVar1;
  }
  param_1[0x12] = 0;
  if (0x7fffffff < (uint)param_1[0x16]) {
    iVar1 = FUN_718c8a70(0);
    if (param_1[0x17] != 0) {
      imp___aeabi_memcpy(iVar1,param_1[0x17],param_1[0x15] << 3);
      FUN_718c8b14(param_1[0x17]);
    }
    param_1[0x16] = 0;
    param_1[0x17] = iVar1;
  }
  param_1[0x1e] = 0;
  param_1[0x1f] = 1;
  param_1[0x15] = 0;
  imp___aeabi_memclr8(auStack_48,0x28);
  iVar1 = *param_1;
  if (iVar1 == param_1[1]) {
    iVar3 = iVar1 + iVar1 / 2;
    if (iVar1 == 0) {
      iVar3 = 8;
    }
    if (iVar3 <= iVar1 + 1) {
      iVar3 = iVar1 + 1;
    }
    iVar2 = FUN_718c8a70(iVar3 * 0x28);
    if (param_1[2] != 0) {
      imp___aeabi_memcpy(iVar2,param_1[2],*param_1 * 0x28);
      FUN_718c8b14(param_1[2]);
    }
    iVar1 = *param_1;
    param_1[1] = iVar3;
    param_1[2] = iVar2;
  }
  else {
    iVar2 = param_1[2];
  }
  imp___aeabi_memcpy(iVar2 + iVar1 * 0x28,auStack_48,0x28);
  *param_1 = *param_1 + 1;
  param_1[0x23] = 0x3f800000;
  return;
}


// =========================================================================
// Function: FUN_718f679c
// Entry: 0x718f679c | Size: 224 bytes
// =========================================================================

void FUN_718f679c(undefined4 *param_1)

{
  if (param_1[2] != 0) {
    *param_1 = 0;
    param_1[1] = 0;
    FUN_718c8b14();
    param_1[2] = 0;
  }
  if (param_1[5] != 0) {
    param_1[3] = 0;
    param_1[4] = 0;
    FUN_718c8b14();
    param_1[5] = 0;
  }
  if (param_1[8] != 0) {
    param_1[6] = 0;
    param_1[7] = 0;
    FUN_718c8b14();
    param_1[8] = 0;
  }
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  if (param_1[0x11] != 0) {
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    FUN_718c8b14();
    param_1[0x11] = 0;
  }
  if (param_1[0x14] != 0) {
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    FUN_718c8b14();
    param_1[0x14] = 0;
  }
  if (param_1[0x17] != 0) {
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    FUN_718c8b14();
    param_1[0x17] = 0;
  }
  FUN_718f6958(param_1 + 0x1e);
  return;
}


// =========================================================================
// Function: FUN_718f6958
// Entry: 0x718f6958 | Size: 220 bytes
// =========================================================================

void FUN_718f6958(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  if (0 < param_1[2]) {
    iVar3 = 0;
    iVar4 = 0;
    do {
      iVar1 = param_1[4];
      if (iVar4 == *param_1) {
        puVar2 = (undefined4 *)(iVar1 + iVar3);
        *puVar2 = 0;
        puVar2[5] = 0;
        puVar2[4] = 0;
        puVar2[3] = 0;
        puVar2[2] = 0;
        puVar2[1] = 0;
        iVar1 = param_1[4];
      }
      if (*(int *)(iVar1 + iVar3 + 8) != 0) {
        *(undefined4 *)(iVar1 + iVar3) = 0;
        ((undefined4 *)(iVar1 + iVar3))[1] = 0;
        FUN_718c8b14();
        *(undefined4 *)(iVar1 + iVar3 + 8) = 0;
        iVar1 = param_1[4];
      }
      iVar1 = iVar1 + iVar3;
      if (*(int *)(iVar1 + 0x14) != 0) {
        *(undefined4 *)(iVar1 + 0xc) = 0;
        *(undefined4 *)(iVar1 + 0x10) = 0;
        FUN_718c8b14();
        *(undefined4 *)(iVar1 + 0x14) = 0;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x18;
    } while (iVar4 < param_1[2]);
  }
  *param_1 = 0;
  param_1[1] = 1;
  if (param_1[4] != 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    FUN_718c8b14();
    param_1[4] = 0;
  }
  return;
}


// =========================================================================
// Function: FUN_718f6aa0
// Entry: 0x718f6aa0 | Size: 256 bytes
// =========================================================================

void FUN_718f6aa0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  
  iVar11 = param_1[3];
  iVar3 = param_1[0x18];
  iVar4 = param_1[0x19];
  iVar5 = param_1[0x1a];
  iVar6 = param_1[0x1b];
  iVar7 = param_1[0x1c];
  iVar10 = param_1[0x1d];
  iVar1 = *param_1;
  if (iVar1 == param_1[1]) {
    iVar8 = iVar1 + iVar1 / 2;
    if (iVar1 == 0) {
      iVar8 = 8;
    }
    if (iVar8 <= iVar1 + 1) {
      iVar8 = iVar1 + 1;
    }
    iVar2 = FUN_718c8a70(iVar8 * 0x28);
    if (param_1[2] != 0) {
      imp___aeabi_memcpy(iVar2,param_1[2],*param_1 * 0x28);
      FUN_718c8b14(param_1[2]);
    }
    iVar1 = *param_1;
    param_1[1] = iVar8;
    param_1[2] = iVar2;
  }
  else {
    iVar2 = param_1[2];
  }
  piVar9 = (int *)(iVar2 + iVar1 * 0x28);
  *piVar9 = iVar3;
  piVar9[1] = iVar4;
  piVar9[3] = iVar6;
  piVar9[2] = iVar5;
  piVar9[6] = iVar11;
  piVar9[5] = iVar10;
  piVar9[4] = iVar7;
  piVar9[7] = 0;
  piVar9[8] = 0;
  piVar9[9] = 0;
  *param_1 = *param_1 + 1;
  return;
}


// =========================================================================
// Function: FUN_718f6c0c
// Entry: 0x718f6c0c | Size: 52 bytes
// =========================================================================

void FUN_718f6c0c(int *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    iVar2 = param_1[2] + iVar1 * 0x28;
    bVar3 = *(int *)(iVar2 + -0xc) == 0;
    if (bVar3) {
      iVar2 = *(int *)(iVar2 + -8);
    }
    if (bVar3 && iVar2 == 0) {
      *param_1 = iVar1 + -1;
    }
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_718f6c58
// Entry: 0x718f6c58 | Size: 596 bytes
// =========================================================================

void FUN_718f6c58(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  bool bVar10;
  int iStack_28;
  
  piVar5 = param_1 + 0x18;
  iVar6 = param_5;
  iStack_28 = param_3;
  if (param_6 != 0) {
    iVar1 = *piVar5;
    iVar7 = param_1[0x19];
    iVar9 = param_1[0x1a];
    iVar6 = param_1[0x1b];
    iVar2 = FUN_71ba2d70(iVar1,param_2);
    iVar3 = FUN_71ba2d70(iVar7,param_3);
    iVar4 = FUN_71ba2d10(iVar9,param_4);
    if (iVar4 != 0) {
      param_4 = iVar9;
    }
    if (iVar3 != 0) {
      iStack_28 = iVar7;
    }
    if (iVar2 != 0) {
      param_2 = iVar1;
    }
    iVar1 = FUN_71ba2d10(iVar6);
    if (iVar1 == 0) {
      iVar6 = param_5;
    }
  }
  iVar1 = FUN_71ba2d50(param_2,param_4);
  iVar2 = FUN_71ba2d50(iStack_28,iVar6);
  iVar3 = param_1[0xf];
  if (iVar2 != 0) {
    iVar6 = iStack_28;
  }
  if (iVar1 != 0) {
    param_4 = param_2;
  }
  if (iVar3 == param_1[0x10]) {
    iVar2 = iVar3 + iVar3 / 2;
    if (iVar3 == 0) {
      iVar2 = 8;
    }
    if (iVar2 <= iVar3 + 1) {
      iVar2 = iVar3 + 1;
    }
    iVar1 = FUN_718c8a70(iVar2 << 4);
    if (param_1[0x11] != 0) {
      imp___aeabi_memcpy(iVar1,param_1[0x11],param_1[0xf] << 4);
      FUN_718c8b14(param_1[0x11]);
    }
    iVar3 = param_1[0xf];
    param_1[0x10] = iVar2;
    param_1[0x11] = iVar1;
  }
  else {
    iVar1 = param_1[0x11];
  }
  piVar8 = (int *)(iVar1 + iVar3 * 0x10);
  *piVar8 = param_2;
  piVar8[3] = iVar6;
  piVar8[2] = param_4;
  piVar8[1] = iStack_28;
  iVar2 = *param_1;
  param_1[0x1a] = param_4;
  param_1[0xf] = param_1[0xf] + 1;
  *piVar5 = param_2;
  iVar1 = param_1[2] + iVar2 * 0x28;
  param_1[0x19] = iStack_28;
  param_1[0x1b] = iVar6;
  if (*(int *)(iVar1 + -0xc) == 0) {
    if (1 < iVar2) {
      iVar3 = imp_memcmp(piVar5,iVar1 + -0x50,0x18);
      bVar10 = iVar3 == 0;
      if (bVar10) {
        iVar3 = *(int *)(iVar1 + -0x30);
      }
      if (bVar10 && iVar3 == 0) {
        *param_1 = iVar2 + -1;
        return;
      }
    }
  }
  else {
    iVar2 = imp_memcmp((int *)(iVar1 + -0x28),piVar5,0x10);
    if (iVar2 != 0) {
      FUN_718f6aa0(param_1);
      return;
    }
  }
  *(int *)(iVar1 + -0x24) = iStack_28;
  *(int *)(iVar1 + -0x20) = param_4;
  *(int *)(iVar1 + -0x1c) = iVar6;
  *(int *)(iVar1 + -0x28) = param_2;
  return;
}


// =========================================================================
// Function: FUN_718f7014
// Entry: 0x718f7014 | Size: 200 bytes
// =========================================================================

void FUN_718f7014(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  iVar6 = *param_1;
  iVar2 = param_1[0xf] + -1;
  param_1[0xf] = iVar2;
  piVar4 = (int *)(param_1[0x11] + iVar2 * 0x10 + -0x10);
  if (iVar2 == 0) {
    piVar4 = (int *)(param_1[0xb] + 0x18);
  }
  iVar3 = piVar4[2];
  iVar5 = piVar4[3];
  iVar2 = *piVar4;
  param_1[0x19] = piVar4[1];
  param_1[0x1a] = iVar3;
  param_1[0x1b] = iVar5;
  piVar1 = param_1 + 0x18;
  *piVar1 = iVar2;
  iVar2 = param_1[2] + iVar6 * 0x28;
  if (*(int *)(iVar2 + -0xc) == 0) {
    if (1 < iVar6) {
      iVar3 = imp_memcmp(piVar1,iVar2 + -0x50,0x18);
      bVar7 = iVar3 == 0;
      if (bVar7) {
        iVar3 = *(int *)(iVar2 + -0x30);
      }
      if (bVar7 && iVar3 == 0) {
        *param_1 = iVar6 + -1;
        return;
      }
    }
  }
  else {
    iVar6 = imp_memcmp((int *)(iVar2 + -0x28),piVar1,0x10);
    if (iVar6 != 0) {
      FUN_718f6aa0(param_1);
      return;
    }
  }
  iVar6 = piVar4[1];
  iVar3 = piVar4[2];
  iVar5 = piVar4[3];
  *(int *)(iVar2 + -0x28) = *piVar4;
  *(int *)(iVar2 + -0x24) = iVar6;
  *(int *)(iVar2 + -0x20) = iVar3;
  *(int *)(iVar2 + -0x1c) = iVar5;
  return;
}


// =========================================================================
// Function: FUN_718f7148
// Entry: 0x718f7148 | Size: 252 bytes
// =========================================================================

void FUN_718f7148(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar1 = param_1[0x12];
  if (iVar1 == param_1[0x13]) {
    iVar3 = iVar1 + iVar1 / 2;
    if (iVar1 == 0) {
      iVar3 = 8;
    }
    if (iVar3 <= iVar1 + 1) {
      iVar3 = iVar1 + 1;
    }
    iVar2 = FUN_718c8a70(iVar3 << 2);
    if (param_1[0x14] != 0) {
      imp___aeabi_memcpy(iVar2,param_1[0x14],param_1[0x12] << 2);
      FUN_718c8b14(param_1[0x14]);
    }
    iVar1 = param_1[0x12];
    param_1[0x13] = iVar3;
    param_1[0x14] = iVar2;
  }
  else {
    iVar2 = param_1[0x14];
  }
  *(int *)(iVar2 + iVar1 * 4) = param_2;
  iVar1 = *param_1;
  param_1[0x12] = param_1[0x12] + 1;
  param_1[0x1c] = param_2;
  iVar2 = param_1[2] + iVar1 * 0x28;
  if (*(int *)(iVar2 + -0xc) == 0) {
    if (1 < iVar1) {
      iVar3 = imp_memcmp(param_1 + 0x18,iVar2 + -0x50,0x18);
      bVar4 = iVar3 == 0;
      if (bVar4) {
        iVar3 = *(int *)(iVar2 + -0x30);
      }
      if (bVar4 && iVar3 == 0) {
        *param_1 = iVar1 + -1;
        return;
      }
    }
  }
  else if (*(int *)(iVar2 + -0x18) != param_2) {
    FUN_718f6aa0(param_1);
    return;
  }
  *(int *)(iVar2 + -0x18) = param_2;
  return;
}


// =========================================================================
// Function: FUN_718f72e8
// Entry: 0x718f72e8 | Size: 384 bytes
// =========================================================================

void FUN_718f72e8(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((0xffff < (uint)(param_1[10] + param_3)) && ((*(byte *)(param_1 + 9) & 8) != 0)) {
    param_1[10] = 0;
    param_1[0x1d] = param_1[6];
    iVar1 = param_1[2] + *param_1 * 0x28;
    if (*(int *)(iVar1 + -0xc) == 0) {
      *(int *)(iVar1 + -0x14) = param_1[6];
    }
    else {
      FUN_718f6aa0(param_1);
    }
  }
  iVar1 = param_1[2] + *param_1 * 0x28;
  *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + param_2;
  iVar2 = param_1[6];
  iVar1 = param_1[7];
  param_3 = iVar2 + param_3;
  if (iVar1 < param_3) {
    iVar4 = iVar1 + iVar1 / 2;
    if (iVar1 == 0) {
      iVar4 = 8;
    }
    if (iVar4 <= param_3) {
      iVar4 = param_3;
    }
    iVar1 = FUN_718c8a70(iVar4 * 0x14);
    if (param_1[8] != 0) {
      imp___aeabi_memcpy(iVar1,param_1[8],param_1[6] * 0x14);
      FUN_718c8b14(param_1[8]);
    }
    param_1[7] = iVar4;
    param_1[8] = iVar1;
  }
  else {
    iVar1 = param_1[8];
  }
  param_1[6] = param_3;
  iVar4 = param_1[3];
  iVar3 = param_1[4];
  param_1[0xd] = iVar1 + iVar2 * 0x14;
  param_2 = iVar4 + param_2;
  if (iVar3 < param_2) {
    iVar2 = iVar3 + iVar3 / 2;
    if (iVar3 == 0) {
      iVar2 = 8;
    }
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    iVar1 = FUN_718c8a70(iVar2 << 1);
    if (param_1[5] != 0) {
      imp___aeabi_memcpy(iVar1,param_1[5],param_1[3] << 1);
      FUN_718c8b14(param_1[5]);
    }
    param_1[4] = iVar2;
    param_1[5] = iVar1;
  }
  else {
    iVar1 = param_1[5];
  }
  param_1[3] = param_2;
  param_1[0xe] = iVar1 + iVar4 * 2;
  return;
}


// =========================================================================
// Function: FUN_718f7544
// Entry: 0x718f7544 | Size: 4004 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_718f7544(int param_1,undefined4 *param_2,undefined4 *param_3,uint param_4,int param_5,
                 undefined4 param_6)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  short *psVar12;
  short *psVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  uint uVar16;
  undefined4 *puVar17;
  undefined4 uVar18;
  undefined4 *puVar19;
  uint *puVar20;
  uint uVar21;
  undefined4 uVar22;
  undefined4 *puVar23;
  int *piVar24;
  uint auStack_80 [4];
  undefined4 *puStack_70;
  int iStack_6c;
  int iStack_68;
  uint uStack_64;
  short *psStack_60;
  undefined4 *puStack_5c;
  undefined4 *puStack_58;
  undefined4 *puStack_54;
  undefined4 *puStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  undefined4 *puStack_44;
  undefined4 *puStack_40;
  undefined4 *puStack_3c;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  if (1 < (int)param_3) {
    puVar23 = (undefined4 *)((int)param_3 - 1);
    psStack_60 = *(short **)(param_1 + 0x8c);
    puVar14 = puVar23;
    if (param_5 != 0) {
      puVar14 = param_3;
    }
    uVar21 = *(uint *)(param_1 + 0x24);
    puVar17 = *(undefined4 **)(param_1 + 0x2c);
    puStack_70 = param_3;
    uStack_48 = param_4;
    iVar6 = FUN_71ba2d10(psStack_60,param_6);
    uStack_30 = *puVar17;
    uStack_4c = puVar17[1];
    puStack_40 = (undefined4 *)uVar21;
    puStack_3c = puVar23;
    puStack_38 = puVar14;
    puStack_34 = param_2;
    if ((uVar21 & 1) == 0) {
      FUN_718f72e8(param_1,(int)puVar14 * 6,(int)puVar14 << 2);
      puStack_50 = (undefined4 *)FUN_71ba21e8(param_6,0x3f000000);
      puStack_40 = (undefined4 *)0x0;
      do {
        puVar14 = (undefined4 *)0x0;
        if (puVar23 != puStack_40) {
          puVar14 = (undefined4 *)((int)puStack_40 + 1U);
        }
        puStack_44 = (undefined4 *)*param_2;
        uVar18 = param_2[1];
        puVar14 = puStack_34 + (int)puVar14 * 2;
        puStack_40 = (undefined4 *)((int)puStack_40 + 1U);
        uVar7 = FUN_71ba240c(*puVar14);
        uVar18 = FUN_71ba240c(puVar14[1],uVar18);
        uVar8 = FUN_71ba21e8(uVar18,uVar18);
        uVar9 = FUN_71ba21e8(uVar7,uVar7);
        uVar8 = FUN_71ba0b38(uVar9,uVar8);
        iVar6 = FUN_71ba2d70(uVar8,0);
        uVar8 = imp_sqrtf(uVar8);
        uVar8 = FUN_71ba13e0(0x3f800000,uVar8);
        if (iVar6 == 0) {
          uVar8 = 0x3f800000;
        }
        uVar18 = FUN_71ba21e8(uVar18,uVar8);
        puVar23 = puStack_50;
        uVar18 = FUN_71ba21e8(puStack_50,uVar18);
        uVar9 = FUN_71ba0b38(puStack_44,uVar18);
        **(undefined4 **)(param_1 + 0x34) = uVar9;
        uVar7 = FUN_71ba21e8(uVar7,uVar8);
        uVar8 = FUN_71ba21e8(puVar23,uVar7);
        uVar9 = FUN_71ba240c(param_2[1],uVar8);
        uVar21 = uStack_48;
        uVar7 = uStack_4c;
        *(undefined4 *)(*(int *)(param_1 + 0x34) + 4) = uVar9;
        iVar6 = *(int *)(param_1 + 0x34);
        *(undefined4 *)(iVar6 + 8) = uStack_30;
        *(undefined4 *)(iVar6 + 0xc) = uStack_4c;
        *(uint *)(*(int *)(param_1 + 0x34) + 0x10) = uStack_48;
        uVar9 = FUN_71ba0b38(uVar18,*puVar14);
        *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x14) = uVar9;
        uVar9 = FUN_71ba240c(puVar14[1],uVar8);
        *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x18) = uVar9;
        iVar6 = *(int *)(param_1 + 0x34);
        *(undefined4 *)(iVar6 + 0x1c) = uStack_30;
        *(undefined4 *)(iVar6 + 0x20) = uVar7;
        *(uint *)(*(int *)(param_1 + 0x34) + 0x24) = uVar21;
        uVar9 = FUN_71ba240c(*puVar14,uVar18);
        puVar23 = puStack_3c;
        *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x28) = uVar9;
        uVar9 = FUN_71ba0b38(uVar8,puVar14[1]);
        *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x2c) = uVar9;
        iVar6 = *(int *)(param_1 + 0x34);
        *(undefined4 *)(iVar6 + 0x30) = uStack_30;
        *(undefined4 *)(iVar6 + 0x34) = uVar7;
        *(uint *)(*(int *)(param_1 + 0x34) + 0x38) = uVar21;
        uVar9 = FUN_71ba240c(*param_2,uVar18);
        uVar18 = uStack_30;
        *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x3c) = uVar9;
        uVar8 = FUN_71ba0b38(uVar8,param_2[1]);
        param_2 = param_2 + 2;
        *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x40) = uVar8;
        iVar6 = *(int *)(param_1 + 0x34);
        *(undefined4 *)(iVar6 + 0x44) = uVar18;
        *(undefined4 *)(iVar6 + 0x48) = uVar7;
        *(uint *)(*(int *)(param_1 + 0x34) + 0x4c) = uVar21;
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 0x50;
        **(undefined2 **)(param_1 + 0x38) = (short)*(undefined4 *)(param_1 + 0x28);
        *(short *)(*(int *)(param_1 + 0x38) + 2) = *(short *)(param_1 + 0x28) + 1;
        *(short *)(*(int *)(param_1 + 0x38) + 4) = *(short *)(param_1 + 0x28) + 2;
        *(short *)(*(int *)(param_1 + 0x38) + 6) = (short)*(undefined4 *)(param_1 + 0x28);
        *(short *)(*(int *)(param_1 + 0x38) + 8) = *(short *)(param_1 + 0x28) + 2;
        *(short *)(*(int *)(param_1 + 0x38) + 10) = *(short *)(param_1 + 0x28) + 3;
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 0xc;
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 4;
      } while (puStack_38 != puStack_40);
    }
    else {
      puVar23 = (undefined4 *)(uint)(iVar6 == 0);
      iVar6 = FUN_71ba2d50(param_6,0x3f800000);
      if (iVar6 == 0) {
        param_6 = 0x3f800000;
      }
      iVar6 = FUN_71ba17bc(param_6);
      uVar7 = FUN_71ba1b94();
      uVar7 = FUN_71ba240c(param_6,uVar7);
      iVar10 = FUN_71ba2d30(uVar7,0x3727c5ac);
      uVar21 = (uint)puStack_40 >> 1;
      iStack_6c = iVar6;
      iVar11 = FUN_71ba2cf0(psStack_60,0x3f800000);
      puVar17 = puStack_70;
      uStack_64 = iVar10 != 0 & uVar21 & (uint)(iVar6 < 0x3f) & (uint)(iVar11 != 0);
      iVar6 = 0x12;
      if (puVar23 != (undefined4 *)0x0) {
        iVar6 = 0xc;
      }
      if (uStack_64 != 0) {
        iVar6 = 6;
      }
      if (uStack_64 == 1) {
        iVar10 = 3;
        auStack_80[1] = (int)puStack_70 << 1;
      }
      else {
        iVar10 = 5;
        if (puVar23 != (undefined4 *)0x0) {
          iVar10 = 3;
        }
        auStack_80[1] = (int)puStack_70 << 2;
        if (puVar23 != (undefined4 *)0x0) {
          auStack_80[1] = (int)puStack_70 * 3;
        }
      }
      auStack_80[0] = uStack_48 & 0xffffff;
      puStack_54 = puVar23;
      puStack_50 = (undefined4 *)param_6;
      FUN_718f72e8(param_1,iVar6 * (int)puVar14);
      puStack_40 = (undefined4 *)((int)auStack_80 - (int)puVar17 * 8 * iVar10);
      puStack_44 = puStack_40 + (int)puVar17 * 2;
      iVar6 = 0;
      puVar23 = (undefined4 *)0x0;
      do {
        puVar17 = (undefined4 *)((int)puVar23 + 1);
        puVar14 = (undefined4 *)0x0;
        if (puStack_3c != puVar23) {
          puVar14 = puVar17;
        }
        puVar19 = (undefined4 *)((int)puStack_34 + iVar6);
        puVar23 = puStack_34 + (int)puVar14 * 2;
        uVar21 = FUN_71ba240c(*puVar23,*puVar19);
        uVar7 = FUN_71ba240c(puVar23[1],puVar19[1]);
        uVar18 = FUN_71ba21e8(uVar7,uVar7);
        uVar8 = FUN_71ba21e8(uVar21,uVar21);
        uVar18 = FUN_71ba0b38(uVar8,uVar18);
        iVar10 = FUN_71ba2d70(uVar18,0);
        uVar18 = imp_sqrtf(uVar18);
        uVar18 = FUN_71ba13e0(0x3f800000,uVar18);
        if (iVar10 == 0) {
          uVar18 = 0x3f800000;
        }
        uVar7 = FUN_71ba21e8(uVar7,uVar18);
        puVar23 = (undefined4 *)((int)puStack_40 + iVar6);
        *puVar23 = uVar7;
        uVar7 = FUN_71ba21e8(uVar18,uVar21 ^ 0x80000000);
        puVar15 = puStack_34;
        puVar19 = puStack_40;
        puVar14 = puStack_44;
        psVar12 = psStack_60;
        uVar21 = uStack_64;
        puVar23[1] = uVar7;
        iVar6 = iVar6 + 8;
        puVar23 = puVar17;
      } while (puStack_38 != puVar17);
      if (param_5 == 0) {
        puVar23 = (undefined4 *)puStack_44[-4];
        uVar16 = puStack_44[-3];
        puStack_40[(int)puStack_3c * 2] = puVar23;
        (puStack_40 + (int)puStack_3c * 2)[1] = uVar16;
        puStack_58 = puVar23;
        if (uStack_64 != 0 || puStack_54 != (undefined4 *)0x0) {
          uVar7 = FUN_71ba21e8(puStack_50,0x3f000000);
          psVar13 = (short *)FUN_71ba0b38(uVar7,0x3f800000);
          psVar12 = psStack_60;
          if (uVar21 != 0) {
            psVar12 = psVar13;
          }
          puStack_50 = (undefined4 *)FUN_71ba21e8(psVar12,*puVar19);
          uVar8 = *puStack_34;
          uVar9 = puStack_34[1];
          uVar7 = FUN_71ba0b38(puStack_50,uVar8);
          puVar17 = puStack_40;
          *puVar14 = uVar7;
          uVar7 = FUN_71ba21e8(psVar12,puVar17[1]);
          uVar18 = FUN_71ba0b38(uVar7,uVar9);
          puVar23 = puStack_50;
          puVar14[1] = uVar18;
          uVar18 = FUN_71ba240c(uVar8,puVar23);
          puVar14[2] = uVar18;
          uVar7 = FUN_71ba240c(uVar9,uVar7);
          puVar23 = puStack_58;
          puVar14[3] = uVar7;
          puStack_50 = (undefined4 *)FUN_71ba21e8(psVar12,puVar23);
          puVar23 = puStack_3c;
          puVar19 = puStack_34 + (int)puStack_3c * 2;
          uVar18 = *puVar19;
          puStack_54 = (undefined4 *)FUN_71ba0b38(puStack_50,uVar18);
          psStack_60 = psVar12;
          uVar7 = FUN_71ba21e8(psVar12,(puVar17 + 1)[(int)puVar23 * 2]);
          uVar8 = puVar19[1];
          uVar16 = FUN_71ba0b38(uVar7,uVar8);
          puVar15 = puStack_34;
          uVar21 = uStack_64;
          puVar20 = puVar14 + (int)puVar23 * 4;
          *puVar20 = (uint)puStack_54;
          puVar20[1] = uVar16;
          uVar16 = FUN_71ba240c(uVar18,puStack_50);
          puVar19 = puStack_40;
          puVar20[2] = uVar16;
          uVar16 = FUN_71ba240c(uVar8,uVar7);
          puVar20[3] = uVar16;
          goto LAB_718f7bc4;
        }
        uVar7 = FUN_71ba240c(puStack_50,psStack_60);
        uVar7 = FUN_71ba21e8(uVar7,0x3f000000);
        puStack_50 = puVar19 + 1;
        uVar8 = *puStack_50;
        uVar18 = FUN_71ba21e8(uVar7,uVar8);
        puStack_54 = (undefined4 *)*puVar15;
        uVar22 = puVar15[1];
        uVar18 = FUN_71ba0b38(uVar18,uVar22);
        puVar14[3] = uVar18;
        uVar18 = FUN_71ba0b38(psVar12,uVar7);
        uVar8 = FUN_71ba21e8(uVar18,uVar8);
        uVar8 = FUN_71ba0b38(uVar8,uVar22);
        puVar14[1] = uVar8;
        uVar9 = *puStack_40;
        auStack_80[3] = uVar7;
        uVar8 = FUN_71ba21e8(uVar7,uVar9);
        puVar23 = puStack_54;
        uVar8 = FUN_71ba0b38(uVar8,puStack_54);
        puVar14[2] = uVar8;
        uVar8 = FUN_71ba21e8(uVar9,uVar18);
        uVar8 = FUN_71ba0b38(uVar8,puVar23);
        puVar17 = puStack_50;
        *puVar14 = uVar8;
        uVar8 = FUN_71ba21e8(uVar7,*puVar17);
        uVar8 = FUN_71ba240c(uVar22,uVar8);
        puVar14[5] = uVar8;
        uVar7 = FUN_71ba21e8(uVar7,*puStack_40);
        uVar7 = FUN_71ba240c(puVar23,uVar7);
        uVar8 = *puVar17;
        puVar14[4] = uVar7;
        uVar7 = FUN_71ba21e8(uVar18,uVar8);
        uVar7 = FUN_71ba240c(uVar22,uVar7);
        puVar14[7] = uVar7;
        uVar7 = FUN_71ba21e8(uVar18,*puStack_40);
        uVar7 = FUN_71ba240c(puVar23,uVar7);
        puVar23 = puStack_58;
        puVar14[6] = uVar7;
        puStack_54 = (undefined4 *)FUN_71ba21e8(uVar18,puVar23);
        puVar23 = puStack_3c;
        puVar14 = puStack_34 + (int)puStack_3c * 2;
        uVar22 = *puVar14;
        uVar7 = FUN_71ba0b38(puStack_54,uVar22);
        uVar8 = puStack_50[(int)puVar23 * 2];
        puStack_50 = (undefined4 *)FUN_71ba21e8(uVar18,uVar8);
        uVar9 = puVar14[1];
        uVar18 = FUN_71ba0b38(puStack_50,uVar9);
        uVar21 = auStack_80[3];
        puVar14 = puStack_44 + (int)puVar23 * 8;
        *puVar14 = uVar7;
        puVar14[1] = uVar18;
        uVar7 = FUN_71ba21e8(auStack_80[3],uVar8);
        uVar18 = FUN_71ba0b38(uVar7,uVar9);
        puVar14[3] = uVar18;
        uVar7 = FUN_71ba240c(uVar9,uVar7);
        puVar14[5] = uVar7;
        uVar7 = FUN_71ba240c(uVar22,puStack_54);
        puVar14[6] = uVar7;
        uVar7 = FUN_71ba21e8(uVar21,puStack_58);
        uVar18 = FUN_71ba0b38(uVar7,uVar22);
        psVar12 = psStack_60;
        puVar14[2] = uVar18;
        uVar7 = FUN_71ba240c(uVar22,uVar7);
        puVar14[4] = uVar7;
        uVar7 = FUN_71ba240c(uVar9,puStack_50);
        puVar14[7] = uVar7;
        puVar19 = puStack_40;
      }
      else {
        if (uStack_64 != 0 || puStack_54 != (undefined4 *)0x0) {
          uVar7 = FUN_71ba21e8(puStack_50,0x3f000000);
          psVar12 = (short *)FUN_71ba0b38(uVar7,0x3f800000);
          if (uVar21 != 0) {
            psStack_60 = psVar12;
          }
LAB_718f7bc4:
          iStack_68 = 3;
          if (uVar21 != 0) {
            iStack_68 = 2;
          }
          puStack_3c = (undefined4 *)0x1;
          puVar23 = puVar19;
          puStack_50 = *(undefined4 **)(param_1 + 0x28);
LAB_718f7c3c:
          puVar14 = (undefined4 *)0x0;
          if (puStack_70 != puStack_3c) {
            puVar14 = puStack_3c;
          }
          puStack_58 = puVar14;
          uVar7 = FUN_71ba0b38(*puVar19,puVar23[(int)puVar14 * 2]);
          uVar7 = FUN_71ba21e8(uVar7,0x3f000000);
          puStack_5c = puVar19 + 1;
          uVar18 = FUN_71ba0b38(*puStack_5c,(puVar23 + (int)puVar14 * 2)[1]);
          puStack_54 = (undefined4 *)FUN_71ba21e8(uVar18,0x3f000000);
          uVar18 = FUN_71ba21e8(puStack_54,puStack_54);
          uVar8 = FUN_71ba21e8(uVar7,uVar7);
          uVar18 = FUN_71ba0b38(uVar8,uVar18);
          iVar6 = FUN_71ba2d10(uVar18,0x3f000000);
          if (iVar6 != 0) {
            uVar18 = 0x3f000000;
          }
          uVar18 = FUN_71ba13e0(0x3f800000,uVar18);
          uVar7 = FUN_71ba21e8(uVar7,uVar18);
          psVar12 = psStack_60;
          uVar7 = FUN_71ba21e8(psStack_60,uVar7);
          uVar22 = puVar15[(int)puVar14 * 2];
          uVar8 = FUN_71ba0b38(uVar22,uVar7);
          uVar18 = FUN_71ba21e8(puStack_54,uVar18);
          uVar18 = FUN_71ba21e8(psVar12,uVar18);
          puVar23 = puStack_44 + (int)puStack_58 * 4;
          *puVar23 = uVar8;
          uVar9 = (puVar15 + (int)puVar14 * 2)[1];
          uVar8 = FUN_71ba240c(uVar9,uVar18);
          puVar23[3] = uVar8;
          uVar7 = FUN_71ba240c(uVar22,uVar7);
          puVar23[2] = uVar7;
          uVar7 = FUN_71ba0b38(uVar9,uVar18);
          psVar12 = *(short **)(param_1 + 0x38);
          puVar23[1] = uVar7;
          puVar14 = *(undefined4 **)(param_1 + 0x28);
          if (puStack_70 != puStack_3c) {
            puVar14 = (undefined4 *)((int)puStack_50 + iStack_68);
          }
          sVar1 = (short)puVar14;
          *psVar12 = sVar1;
          sVar4 = (short)puStack_50;
          sVar2 = sVar4 + 1;
          *(short *)(*(int *)(param_1 + 0x38) + 2) = sVar4;
          sVar3 = sVar1 + 1;
          if (uStack_64 == 0) {
            *(short *)(*(int *)(param_1 + 0x38) + 4) = sVar4 + 2;
            *(short *)(*(int *)(param_1 + 0x38) + 6) = sVar4 + 2;
            *(short *)(*(int *)(param_1 + 0x38) + 8) = sVar1 + 2;
            *(short *)(*(int *)(param_1 + 0x38) + 10) = sVar1;
            *(short *)(*(int *)(param_1 + 0x38) + 0xc) = sVar3;
            *(short *)(*(int *)(param_1 + 0x38) + 0xe) = sVar2;
            *(short *)(*(int *)(param_1 + 0x38) + 0x10) = sVar4;
            *(short *)(*(int *)(param_1 + 0x38) + 0x12) = sVar4;
            *(short *)(*(int *)(param_1 + 0x38) + 0x14) = sVar1;
            *(short *)(*(int *)(param_1 + 0x38) + 0x16) = sVar3;
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 0x18;
            if (puStack_38 != puStack_3c) goto LAB_718f7c24;
            puVar19 = *(undefined4 **)(param_1 + 0x34);
            puVar23 = puStack_34;
            puVar14 = puStack_70;
            puVar17 = puStack_44;
            if ((int)puStack_70 < 2) {
              puVar14 = (undefined4 *)0x1;
            }
            do {
              uVar7 = puVar23[1];
              *puVar19 = *puVar23;
              puVar19[1] = uVar7;
              puVar14 = (undefined4 *)((int)puVar14 - 1);
              iVar6 = *(int *)(param_1 + 0x34);
              *(undefined4 *)(iVar6 + 8) = uStack_30;
              *(undefined4 *)(iVar6 + 0xc) = uStack_4c;
              *(uint *)(*(int *)(param_1 + 0x34) + 0x10) = uStack_48;
              iVar6 = *(int *)(param_1 + 0x34);
              uVar7 = puVar17[1];
              *(undefined4 *)(iVar6 + 0x14) = *puVar17;
              *(undefined4 *)(iVar6 + 0x18) = uVar7;
              iVar6 = *(int *)(param_1 + 0x34);
              *(undefined4 *)(iVar6 + 0x1c) = uStack_30;
              *(undefined4 *)(iVar6 + 0x20) = uStack_4c;
              *(uint *)(*(int *)(param_1 + 0x34) + 0x24) = auStack_80[0];
              iVar6 = *(int *)(param_1 + 0x34);
              uVar7 = puVar17[3];
              *(undefined4 *)(iVar6 + 0x28) = puVar17[2];
              *(undefined4 *)(iVar6 + 0x2c) = uVar7;
              iVar6 = *(int *)(param_1 + 0x34);
              *(undefined4 *)(iVar6 + 0x30) = uStack_30;
              *(undefined4 *)(iVar6 + 0x34) = uStack_4c;
              *(uint *)(*(int *)(param_1 + 0x34) + 0x38) = auStack_80[0];
              puVar19 = (undefined4 *)(*(int *)(param_1 + 0x34) + 0x3c);
              *(undefined4 **)(param_1 + 0x34) = puVar19;
              puVar23 = puVar23 + 2;
              puVar17 = puVar17 + 4;
            } while (puVar14 != (undefined4 *)0x0);
          }
          else {
            *(short *)(*(int *)(param_1 + 0x38) + 4) = sVar2;
            *(short *)(*(int *)(param_1 + 0x38) + 6) = sVar3;
            *(short *)(*(int *)(param_1 + 0x38) + 8) = sVar2;
            *(short *)(*(int *)(param_1 + 0x38) + 10) = sVar1;
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 0xc;
            if (puStack_38 != puStack_3c) goto LAB_718f7c24;
            puVar14 = *(undefined4 **)(param_1 + 0x34);
            puVar23 = puStack_70;
            if ((int)puStack_70 < 2) {
              puVar23 = (undefined4 *)0x1;
            }
            puVar17 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0x2c) + 0xcc) + iStack_6c * 0x10);
            uVar9 = *puVar17;
            uVar8 = puVar17[1];
            uVar7 = puVar17[2];
            uVar18 = puVar17[3];
            puVar17 = puStack_44;
            do {
              uVar22 = puVar17[1];
              puVar23 = (undefined4 *)((int)puVar23 - 1);
              *puVar14 = *puVar17;
              puVar14[1] = uVar22;
              iVar6 = *(int *)(param_1 + 0x34);
              *(undefined4 *)(iVar6 + 8) = uVar9;
              *(undefined4 *)(iVar6 + 0xc) = uVar8;
              *(uint *)(*(int *)(param_1 + 0x34) + 0x10) = uStack_48;
              iVar6 = *(int *)(param_1 + 0x34);
              puVar14 = puVar17 + 2;
              uVar22 = puVar17[3];
              puVar17 = puVar17 + 4;
              *(undefined4 *)(iVar6 + 0x14) = *puVar14;
              *(undefined4 *)(iVar6 + 0x18) = uVar22;
              iVar6 = *(int *)(param_1 + 0x34);
              *(undefined4 *)(iVar6 + 0x1c) = uVar7;
              *(undefined4 *)(iVar6 + 0x20) = uVar18;
              *(uint *)(*(int *)(param_1 + 0x34) + 0x24) = uStack_48;
              puVar14 = (undefined4 *)(*(int *)(param_1 + 0x34) + 0x28);
              *(undefined4 **)(param_1 + 0x34) = puVar14;
            } while (puVar23 != (undefined4 *)0x0);
          }
          goto LAB_718f84b4;
        }
        uVar7 = FUN_71ba240c(puStack_50,psStack_60);
        auStack_80[3] = FUN_71ba21e8(uVar7,0x3f000000);
        puVar23 = puStack_3c;
      }
      auStack_80[2] = FUN_71ba0b38(psVar12,auStack_80[3]);
      puStack_54 = (undefined4 *)0x0;
      puVar17 = *(undefined4 **)(param_1 + 0x28);
      psVar12 = *(short **)(param_1 + 0x38);
      puVar14 = puVar19;
      do {
        puVar15 = (undefined4 *)0x0;
        if (puVar23 != puStack_54) {
          puVar15 = (undefined4 *)((int)puStack_54 + 1U);
        }
        uVar18 = puVar19[1];
        psStack_60 = psVar12;
        puStack_5c = puVar17;
        puStack_58 = puStack_54;
        puStack_54 = (undefined4 *)((int)puStack_54 + 1U);
        puStack_50 = puVar19;
        uVar7 = FUN_71ba0b38(*puVar19,puVar14[(int)puVar15 * 2]);
        uVar7 = FUN_71ba21e8(uVar7,0x3f000000);
        uVar18 = FUN_71ba0b38(uVar18,(puVar14 + (int)puVar15 * 2)[1]);
        iStack_68 = FUN_71ba21e8(uVar18,0x3f000000);
        uVar18 = FUN_71ba21e8(iStack_68,iStack_68);
        uVar8 = FUN_71ba21e8(uVar7,uVar7);
        uVar18 = FUN_71ba0b38(uVar8,uVar18);
        iVar6 = FUN_71ba2d10(uVar18,0x3f000000);
        if (iVar6 != 0) {
          uVar18 = 0x3f000000;
        }
        uVar18 = FUN_71ba13e0(0x3f800000,uVar18);
        uStack_64 = FUN_71ba21e8(uVar7,uVar18);
        uVar21 = auStack_80[2];
        uVar7 = FUN_71ba21e8(auStack_80[2],uStack_64);
        piVar24 = puStack_34 + (int)puVar15 * 2;
        iStack_6c = *piVar24;
        uVar8 = FUN_71ba0b38(iStack_6c,uVar7);
        uVar18 = FUN_71ba21e8(iStack_68,uVar18);
        iVar6 = FUN_71ba21e8(uVar21,uVar18);
        puVar14 = puStack_44 + (int)puVar15 * 8;
        *puVar14 = uVar8;
        iVar10 = piVar24[1];
        iStack_68 = iVar6;
        uVar8 = FUN_71ba240c(iVar10,iVar6);
        iVar6 = iStack_6c;
        puVar14[7] = uVar8;
        uVar7 = FUN_71ba240c(iStack_6c,uVar7);
        uVar21 = auStack_80[3];
        puVar14[6] = uVar7;
        uVar7 = FUN_71ba21e8(auStack_80[3],uVar18);
        uVar18 = FUN_71ba240c(iVar10,uVar7);
        puVar14[5] = uVar18;
        uVar18 = FUN_71ba21e8(uVar21,uStack_64);
        uVar8 = FUN_71ba240c(iVar6,uVar18);
        puVar14[4] = uVar8;
        uVar7 = FUN_71ba0b38(iVar10,uVar7);
        puVar14[3] = uVar7;
        uVar7 = FUN_71ba0b38(iVar6,uVar18);
        puVar23 = puStack_3c;
        puVar14[2] = uVar7;
        uVar7 = FUN_71ba0b38(iVar10,iStack_68);
        puVar14[1] = uVar7;
        puVar17 = *(undefined4 **)(param_1 + 0x28);
        sVar1 = (short)puStack_5c;
        if (puVar23 != puStack_58) {
          puVar17 = puStack_5c + 1;
        }
        sVar2 = sVar1 + 2;
        sVar5 = (short)puVar17;
        sVar3 = sVar5 + 1;
        *psStack_60 = sVar3;
        *(short *)(*(int *)(param_1 + 0x38) + 2) = sVar1 + 1;
        *(short *)(*(int *)(param_1 + 0x38) + 4) = sVar2;
        *(short *)(*(int *)(param_1 + 0x38) + 6) = sVar2;
        sVar4 = sVar5 + 2;
        *(short *)(*(int *)(param_1 + 0x38) + 8) = sVar4;
        *(short *)(*(int *)(param_1 + 0x38) + 10) = sVar3;
        *(short *)(*(int *)(param_1 + 0x38) + 0xc) = sVar3;
        *(short *)(*(int *)(param_1 + 0x38) + 0xe) = sVar1 + 1;
        *(short *)(*(int *)(param_1 + 0x38) + 0x10) = sVar1;
        *(short *)(*(int *)(param_1 + 0x38) + 0x12) = sVar1;
        *(short *)(*(int *)(param_1 + 0x38) + 0x14) = sVar5;
        *(short *)(*(int *)(param_1 + 0x38) + 0x16) = sVar3;
        *(short *)(*(int *)(param_1 + 0x38) + 0x18) = sVar4;
        *(short *)(*(int *)(param_1 + 0x38) + 0x1a) = sVar2;
        *(short *)(*(int *)(param_1 + 0x38) + 0x1c) = sVar1 + 3;
        *(short *)(*(int *)(param_1 + 0x38) + 0x1e) = sVar1 + 3;
        *(short *)(*(int *)(param_1 + 0x38) + 0x20) = sVar5 + 3;
        *(short *)(*(int *)(param_1 + 0x38) + 0x22) = sVar4;
        psVar12 = (short *)(*(int *)(param_1 + 0x38) + 0x24);
        puVar19 = puStack_50 + 2;
        *(short **)(param_1 + 0x38) = psVar12;
        puVar14 = puStack_40;
      } while (puStack_38 != puStack_54);
      puVar17 = *(undefined4 **)(param_1 + 0x34);
      puVar23 = puStack_70;
      puVar14 = puStack_44;
      if ((int)puStack_70 < 2) {
        puVar23 = (undefined4 *)0x1;
      }
      do {
        uVar7 = puVar14[1];
        puVar23 = (undefined4 *)((int)puVar23 - 1);
        *puVar17 = *puVar14;
        puVar17[1] = uVar7;
        iVar6 = *(int *)(param_1 + 0x34);
        *(undefined4 *)(iVar6 + 8) = uStack_30;
        *(undefined4 *)(iVar6 + 0xc) = uStack_4c;
        *(uint *)(*(int *)(param_1 + 0x34) + 0x10) = auStack_80[0];
        iVar6 = *(int *)(param_1 + 0x34);
        uVar7 = puVar14[3];
        *(undefined4 *)(iVar6 + 0x14) = puVar14[2];
        *(undefined4 *)(iVar6 + 0x18) = uVar7;
        iVar6 = *(int *)(param_1 + 0x34);
        *(undefined4 *)(iVar6 + 0x1c) = uStack_30;
        *(undefined4 *)(iVar6 + 0x20) = uStack_4c;
        *(uint *)(*(int *)(param_1 + 0x34) + 0x24) = uStack_48;
        iVar6 = *(int *)(param_1 + 0x34);
        uVar7 = puVar14[5];
        *(undefined4 *)(iVar6 + 0x28) = puVar14[4];
        *(undefined4 *)(iVar6 + 0x2c) = uVar7;
        iVar6 = *(int *)(param_1 + 0x34);
        *(undefined4 *)(iVar6 + 0x30) = uStack_30;
        *(undefined4 *)(iVar6 + 0x34) = uStack_4c;
        *(uint *)(*(int *)(param_1 + 0x34) + 0x38) = uStack_48;
        iVar6 = *(int *)(param_1 + 0x34);
        uVar7 = puVar14[7];
        *(undefined4 *)(iVar6 + 0x3c) = puVar14[6];
        *(undefined4 *)(iVar6 + 0x40) = uVar7;
        iVar6 = *(int *)(param_1 + 0x34);
        *(undefined4 *)(iVar6 + 0x44) = uStack_30;
        *(undefined4 *)(iVar6 + 0x48) = uStack_4c;
        *(uint *)(*(int *)(param_1 + 0x34) + 0x4c) = auStack_80[0];
        puVar17 = (undefined4 *)(*(int *)(param_1 + 0x34) + 0x50);
        *(undefined4 **)(param_1 + 0x34) = puVar17;
        puVar14 = puVar14 + 8;
      } while (puVar23 != (undefined4 *)0x0);
LAB_718f84b4:
      *(uint *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + (auStack_80[1] & 0xffff);
    }
  }
  if (_ext___stack_chk_guard != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail();
  }
  return;
LAB_718f7c24:
  puStack_3c = (undefined4 *)((int)puStack_3c + 1);
  puVar19 = puStack_5c + 1;
  puVar15 = puStack_34;
  puVar23 = puStack_40;
  puStack_50 = puVar14;
  goto LAB_718f7c3c;
}


// =========================================================================
// Function: FUN_718f9394
// Entry: 0x718f9394 | Size: 1248 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_718f9394(int param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined2 *puVar13;
  int *piVar14;
  undefined4 uVar15;
  uint *puVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined4 uVar19;
  uint auStack_78 [3];
  int *piStack_6c;
  undefined4 *puStack_68;
  uint uStack_64;
  int iStack_60;
  uint uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  int iStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  int iStack_38;
  uint uStack_34;
  uint *puStack_30;
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  if (2 < (int)param_3) {
    uVar19 = **(undefined4 **)(param_1 + 0x2c);
    uVar17 = (*(undefined4 **)(param_1 + 0x2c))[1];
    if ((*(byte *)(param_1 + 0x24) & 4) == 0) {
      FUN_718f72e8(param_1,param_3 * 3 + -6,param_3);
      puVar8 = *(undefined4 **)(param_1 + 0x34);
      uVar4 = param_3;
      do {
        uVar12 = *param_2;
        uVar15 = param_2[1];
        param_2 = param_2 + 2;
        *puVar8 = uVar12;
        puVar8[1] = uVar15;
        uVar4 = uVar4 - 1;
        iVar9 = *(int *)(param_1 + 0x34);
        *(undefined4 *)(iVar9 + 8) = uVar19;
        *(undefined4 *)(iVar9 + 0xc) = uVar17;
        *(uint *)(*(int *)(param_1 + 0x34) + 0x10) = param_4;
        puVar8 = (undefined4 *)(*(int *)(param_1 + 0x34) + 0x14);
        *(undefined4 **)(param_1 + 0x34) = puVar8;
      } while (uVar4 != 0);
      puVar13 = *(undefined2 **)(param_1 + 0x38);
      uVar10 = 2;
      uVar4 = param_3;
      if ((int)param_3 < 4) {
        uVar4 = 3;
      }
      do {
        *puVar13 = (short)*(undefined4 *)(param_1 + 0x28);
        *(short *)(*(int *)(param_1 + 0x38) + 2) =
             (short)uVar10 + (short)*(undefined4 *)(param_1 + 0x28) + -1;
        *(short *)(*(int *)(param_1 + 0x38) + 4) =
             (short)uVar10 + (short)*(undefined4 *)(param_1 + 0x28);
        uVar10 = uVar10 + 1;
        puVar13 = (undefined2 *)(*(int *)(param_1 + 0x38) + 6);
        *(undefined2 **)(param_1 + 0x38) = puVar13;
      } while (uVar4 != uVar10);
      param_3 = param_3 & 0xffff;
      piVar14 = (int *)(param_1 + 0x28);
    }
    else {
      auStack_78[1] = *(undefined4 *)(param_1 + 0x8c);
      auStack_78[2] = param_3 << 1;
      uStack_58 = uVar17;
      uStack_54 = uVar19;
      FUN_718f72e8(param_1,param_3 * 9 + -6);
      uStack_5c = param_4 & 0xffffff;
      iVar5 = param_3 - 2;
      piStack_6c = (int *)(param_1 + 0x28);
      iStack_4c = *piStack_6c;
      puVar13 = *(undefined2 **)(param_1 + 0x38);
      iStack_60 = iStack_4c + 1;
      iVar9 = iStack_4c;
      do {
        *puVar13 = (short)iStack_4c;
        sVar1 = (short)iVar9;
        iVar5 = iVar5 + -1;
        *(short *)(*(int *)(param_1 + 0x38) + 2) = sVar1 + 2;
        iVar9 = iVar9 + 2;
        *(short *)(*(int *)(param_1 + 0x38) + 4) = sVar1 + 4;
        puVar13 = (undefined2 *)(*(int *)(param_1 + 0x38) + 6);
        *(undefined2 **)(param_1 + 0x38) = puVar13;
      } while (iVar5 != 0);
      puStack_30 = auStack_78 + param_3 * -2;
      uVar4 = param_3;
      if ((int)param_3 < 2) {
        uVar4 = 1;
      }
      uStack_3c = param_3 - 1;
      iStack_38 = param_2[uStack_3c * 2];
      uVar6 = 0;
      uVar10 = (param_2 + uStack_3c * 2)[1];
      puStack_68 = param_2;
      uStack_64 = uVar4;
      uStack_50 = param_4;
      uStack_34 = uStack_3c;
      do {
        uVar19 = param_2[1];
        uStack_44 = uStack_3c;
        uStack_40 = uVar19;
        uStack_3c = uVar6;
        uVar17 = iStack_38;
        iStack_38 = *param_2;
        uVar6 = FUN_71ba240c(*param_2,uVar17);
        uVar17 = FUN_71ba240c(uVar19,uVar10);
        uVar19 = FUN_71ba21e8(uVar17,uVar17);
        uStack_48 = uVar6;
        uVar12 = FUN_71ba21e8(uVar6,uVar6);
        uVar19 = FUN_71ba0b38(uVar12,uVar19);
        iVar9 = FUN_71ba2d70(uVar19,0);
        uVar19 = imp_sqrtf(uVar19);
        uVar19 = FUN_71ba13e0(0x3f800000,uVar19);
        if (iVar9 == 0) {
          uVar19 = 0x3f800000;
        }
        uVar10 = FUN_71ba21e8(uVar17,uVar19);
        puVar16 = puStack_30 + uStack_44 * 2;
        *puVar16 = uVar10;
        uVar10 = FUN_71ba21e8(uVar19,uStack_48 ^ 0x80000000);
        param_2 = param_2 + 2;
        uVar4 = uVar4 - 1;
        puVar16[1] = uVar10;
        uVar6 = uStack_3c + 1;
        uVar10 = uStack_40;
      } while (uVar4 != 0);
      uVar6 = FUN_71ba21e8(auStack_78[1],0x3f000000);
      uStack_40 = puStack_30[uStack_34 * 2];
      uVar11 = 0;
      uVar4 = uStack_34;
      iVar9 = iStack_4c;
      uVar10 = (puStack_30 + uStack_34 * 2)[1];
      puVar8 = puStack_68;
      uStack_48 = uVar6;
      do {
        uVar18 = puStack_30[1];
        uStack_44 = uVar18;
        uVar3 = uStack_40;
        uStack_40 = *puStack_30;
        uStack_3c = uVar11;
        iStack_38 = iVar9;
        uStack_34 = uVar4;
        uVar17 = FUN_71ba0b38(uVar3);
        uVar17 = FUN_71ba21e8(uVar17,0x3f000000);
        uVar19 = FUN_71ba0b38(uVar10,uVar18);
        uVar19 = FUN_71ba21e8(uVar19,0x3f000000);
        uVar12 = FUN_71ba21e8(uVar19,uVar19);
        uVar15 = FUN_71ba21e8(uVar17,uVar17);
        uVar12 = FUN_71ba0b38(uVar15,uVar12);
        iVar9 = FUN_71ba2d10(uVar12,0x3f000000);
        if (iVar9 != 0) {
          uVar12 = 0x3f000000;
        }
        uVar12 = FUN_71ba13e0(0x3f800000,uVar12);
        uVar17 = FUN_71ba21e8(uVar17,uVar12);
        uVar15 = FUN_71ba21e8(uVar6,uVar17);
        uVar17 = FUN_71ba240c(*puVar8,uVar15);
        **(undefined4 **)(param_1 + 0x34) = uVar17;
        uVar17 = FUN_71ba21e8(uVar19,uVar12);
        uVar12 = FUN_71ba21e8(uVar6,uVar17);
        uVar7 = FUN_71ba240c(puVar8[1],uVar12);
        uVar19 = uStack_54;
        uVar17 = uStack_58;
        *(undefined4 *)(*(int *)(param_1 + 0x34) + 4) = uVar7;
        iVar9 = *(int *)(param_1 + 0x34);
        *(undefined4 *)(iVar9 + 8) = uStack_54;
        *(undefined4 *)(iVar9 + 0xc) = uStack_58;
        *(uint *)(*(int *)(param_1 + 0x34) + 0x10) = uStack_50;
        uVar15 = FUN_71ba0b38(uVar15,*puVar8);
        *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x14) = uVar15;
        uVar12 = FUN_71ba0b38(uVar12,puVar8[1]);
        puVar8 = puVar8 + 2;
        *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x18) = uVar12;
        iVar9 = *(int *)(param_1 + 0x34);
        *(undefined4 *)(iVar9 + 0x1c) = uVar19;
        *(undefined4 *)(iVar9 + 0x20) = uVar17;
        *(uint *)(*(int *)(param_1 + 0x34) + 0x24) = uStack_5c;
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 0x28;
        sVar1 = (short)iStack_38;
        **(short **)(param_1 + 0x38) = sVar1;
        *(short *)(*(int *)(param_1 + 0x38) + 2) = (short)iStack_4c + (short)uStack_34 * 2;
        sVar2 = (short)iStack_60 + (short)uStack_34 * 2;
        *(short *)(*(int *)(param_1 + 0x38) + 4) = sVar2;
        *(short *)(*(int *)(param_1 + 0x38) + 6) = sVar2;
        *(short *)(*(int *)(param_1 + 0x38) + 8) = sVar1 + 1;
        uVar11 = uStack_3c + 1;
        *(short *)(*(int *)(param_1 + 0x38) + 10) = sVar1;
        iVar9 = iStack_38 + 2;
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 0xc;
        puStack_30 = puStack_30 + 2;
        uVar4 = uStack_3c;
        uVar10 = uStack_44;
      } while (uStack_64 != uVar11);
      param_3 = auStack_78[2] & 0xfffe;
      piVar14 = piStack_6c;
    }
    *piVar14 = *piVar14 + param_3;
  }
  if (_ext___stack_chk_guard != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail();
  }
  return;
}


// =========================================================================
// Function: FUN_718f9c30
// Entry: 0x718f9c30 | Size: 568 bytes
// =========================================================================

void FUN_718f9c30(int param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar1 = FUN_71ba2cf0(param_3,0);
  iVar2 = *(int *)(param_1 + 0x54);
  if (iVar1 != 0) {
    if (iVar2 == *(int *)(param_1 + 0x58)) {
      iVar6 = iVar2 + iVar2 / 2;
      if (iVar2 == 0) {
        iVar6 = 8;
      }
      if (iVar6 <= iVar2 + 1) {
        iVar6 = iVar2 + 1;
      }
      iVar1 = FUN_718c8a70(iVar6 << 3);
      if (*(int *)(param_1 + 0x5c) != 0) {
        imp___aeabi_memcpy(iVar1,*(int *)(param_1 + 0x5c),*(int *)(param_1 + 0x54) << 3);
        FUN_718c8b14(*(undefined4 *)(param_1 + 0x5c));
      }
      iVar2 = *(int *)(param_1 + 0x54);
      *(int *)(param_1 + 0x58) = iVar6;
      *(int *)(param_1 + 0x5c) = iVar1;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x5c);
    }
    uVar3 = param_2[1];
    puVar4 = (undefined4 *)(iVar1 + iVar2 * 8);
    *puVar4 = *param_2;
    puVar4[1] = uVar3;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
    return;
  }
  iVar1 = (param_5 - param_4) + iVar2 + 1;
  if (*(int *)(param_1 + 0x58) < iVar1) {
    uVar3 = FUN_718c8a70(iVar1 * 8);
    if (*(int *)(param_1 + 0x5c) != 0) {
      imp___aeabi_memcpy(uVar3,*(int *)(param_1 + 0x5c),*(int *)(param_1 + 0x54) << 3);
      FUN_718c8b14(*(undefined4 *)(param_1 + 0x5c));
    }
    *(int *)(param_1 + 0x58) = iVar1;
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
  }
  if (param_4 <= param_5) {
    iVar1 = *(int *)(param_1 + 0x54);
    do {
      iVar6 = *(int *)(param_1 + 0x58);
      iVar2 = *(int *)(param_1 + 0x2c) + (param_4 % 0xc) * 8;
      uVar5 = *(undefined4 *)(iVar2 + 0x30);
      uVar3 = FUN_71ba21e8(*(undefined4 *)(iVar2 + 0x2c),param_3);
      uVar3 = FUN_71ba0b38(uVar3,*param_2);
      uVar5 = FUN_71ba21e8(uVar5,param_3);
      uVar5 = FUN_71ba0b38(uVar5,param_2[1]);
      if (iVar1 == iVar6) {
        iVar6 = iVar1 + iVar1 / 2;
        if (iVar1 == 0) {
          iVar6 = 8;
        }
        if (iVar6 <= iVar1 + 1) {
          iVar6 = iVar1 + 1;
        }
        iVar2 = FUN_718c8a70(iVar6 << 3);
        if (*(int *)(param_1 + 0x5c) != 0) {
          imp___aeabi_memcpy(iVar2,*(int *)(param_1 + 0x5c),*(int *)(param_1 + 0x54) << 3);
          FUN_718c8b14(*(undefined4 *)(param_1 + 0x5c));
        }
        iVar1 = *(int *)(param_1 + 0x54);
        *(int *)(param_1 + 0x58) = iVar6;
        *(int *)(param_1 + 0x5c) = iVar2;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x5c);
      }
      puVar4 = (undefined4 *)(iVar2 + iVar1 * 8);
      *puVar4 = uVar3;
      param_4 = param_4 + 1;
      puVar4[1] = uVar5;
      iVar1 = *(int *)(param_1 + 0x54) + 1;
      *(int *)(param_1 + 0x54) = iVar1;
    } while (param_5 + 1 != param_4);
  }
  return;
}


// =========================================================================
// Function: FUN_718fa008
// Entry: 0x718fa008 | Size: 604 bytes
// =========================================================================

void FUN_718fa008(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  
  iVar1 = FUN_71ba2cf0(param_3,0);
  iVar5 = *(int *)(param_1 + 0x54);
  if (iVar1 != 0) {
    if (iVar5 == *(int *)(param_1 + 0x58)) {
      iVar9 = iVar5 + iVar5 / 2;
      if (iVar5 == 0) {
        iVar9 = 8;
      }
      if (iVar9 <= iVar5 + 1) {
        iVar9 = iVar5 + 1;
      }
      iVar1 = FUN_718c8a70(iVar9 << 3);
      if (*(int *)(param_1 + 0x5c) != 0) {
        imp___aeabi_memcpy(iVar1,*(int *)(param_1 + 0x5c),*(int *)(param_1 + 0x54) << 3);
        FUN_718c8b14(*(undefined4 *)(param_1 + 0x5c));
      }
      iVar5 = *(int *)(param_1 + 0x54);
      *(int *)(param_1 + 0x58) = iVar9;
      *(int *)(param_1 + 0x5c) = iVar1;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x5c);
    }
    uVar6 = param_2[1];
    puVar8 = (undefined4 *)(iVar1 + iVar5 * 8);
    *puVar8 = *param_2;
    puVar8[1] = uVar6;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
    return;
  }
  iVar1 = param_6 + iVar5 + 1;
  if (*(int *)(param_1 + 0x58) < iVar1) {
    uVar6 = FUN_718c8a70(iVar1 * 8);
    if (*(int *)(param_1 + 0x5c) != 0) {
      imp___aeabi_memcpy(uVar6,*(int *)(param_1 + 0x5c),*(int *)(param_1 + 0x54) << 3);
      FUN_718c8b14(*(undefined4 *)(param_1 + 0x5c));
    }
    *(int *)(param_1 + 0x58) = iVar1;
    *(undefined4 *)(param_1 + 0x5c) = uVar6;
  }
  if (-1 < param_6) {
    uVar6 = FUN_71ba240c(param_5,param_4);
    uVar2 = FUN_71ba1b94(param_6);
    iVar5 = *(int *)(param_1 + 0x54);
    iVar1 = 0;
    do {
      uVar3 = FUN_71ba1b94(iVar1);
      uVar3 = FUN_71ba13e0(uVar3,uVar2);
      uVar3 = FUN_71ba21e8(uVar3,uVar6);
      uVar3 = FUN_71ba0b38(uVar3,param_4);
      uVar4 = imp_cosf();
      uVar4 = FUN_71ba21e8(uVar4,param_3);
      uVar4 = FUN_71ba0b38(uVar4,*param_2);
      uVar3 = imp_sinf(uVar3);
      uVar3 = FUN_71ba21e8(uVar3,param_3);
      uVar3 = FUN_71ba0b38(uVar3,param_2[1]);
      if (iVar5 == *(int *)(param_1 + 0x58)) {
        iVar7 = iVar5 + iVar5 / 2;
        if (iVar5 == 0) {
          iVar7 = 8;
        }
        if (iVar7 <= iVar5 + 1) {
          iVar7 = iVar5 + 1;
        }
        iVar9 = FUN_718c8a70(iVar7 << 3);
        if (*(int *)(param_1 + 0x5c) != 0) {
          imp___aeabi_memcpy(iVar9,*(int *)(param_1 + 0x5c),*(int *)(param_1 + 0x54) << 3);
          FUN_718c8b14(*(undefined4 *)(param_1 + 0x5c));
        }
        iVar5 = *(int *)(param_1 + 0x54);
        *(int *)(param_1 + 0x58) = iVar7;
        *(int *)(param_1 + 0x5c) = iVar9;
      }
      else {
        iVar9 = *(int *)(param_1 + 0x5c);
      }
      puVar8 = (undefined4 *)(iVar9 + iVar5 * 8);
      *puVar8 = uVar4;
      iVar1 = iVar1 + 1;
      puVar8[1] = uVar3;
      iVar5 = *(int *)(param_1 + 0x54) + 1;
      *(int *)(param_1 + 0x54) = iVar5;
    } while (param_6 + 1 != iVar1);
  }
  return;
}


// =========================================================================
// Function: FUN_718fa4e4
// Entry: 0x718fa4e4 | Size: 1084 bytes
// =========================================================================

void FUN_718fa4e4(int param_1,undefined4 *param_2,undefined4 *param_3,uint param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar5 = *param_2;
  uVar1 = FUN_71ba240c(*param_3);
  uVar7 = 0x3f800000;
  uVar6 = 0x3f800000;
  if ((param_5 & 0xc) == 0xc) {
    uVar6 = 0x3f000000;
  }
  if ((param_5 & 3) == 3) {
    uVar6 = 0x3f000000;
  }
  uVar6 = FUN_71ba21e8(uVar1 & 0x7fffffff,uVar6);
  uVar1 = FUN_71ba0b38(uVar6,0xbf800000);
  iVar2 = FUN_71ba2d70(uVar1,param_4);
  if (iVar2 != 0) {
    uVar1 = param_4;
  }
  uVar6 = param_2[1];
  puVar8 = param_3 + 1;
  uVar3 = FUN_71ba240c(*puVar8,uVar6);
  if ((param_5 & 10) == 10) {
    uVar7 = 0x3f000000;
  }
  if ((param_5 & 5) == 5) {
    uVar7 = 0x3f000000;
  }
  uVar7 = FUN_71ba21e8(uVar3 & 0x7fffffff,uVar7);
  uVar3 = FUN_71ba0b38(uVar7,0xbf800000);
  iVar2 = FUN_71ba2d10(uVar1,uVar3);
  if (iVar2 == 0) {
    uVar1 = uVar3;
  }
  if ((param_5 != 0) && (iVar2 = FUN_71ba2d30(uVar1,0), iVar2 == 0)) {
    uVar3 = -(param_5 & 1) & uVar1;
    uStack_28 = FUN_71ba0b38(uVar6,uVar3);
    uStack_2c = FUN_71ba0b38(uVar5,uVar3);
    FUN_718f9c30(param_1,&uStack_2c,uVar3,6,9);
    uVar3 = uVar1 & (int)(param_5 << 0x1e) >> 0x1f;
    uStack_28 = FUN_71ba0b38(uVar3,param_2[1]);
    uStack_2c = FUN_71ba240c(*param_3,uVar3);
    FUN_718f9c30(param_1,&uStack_2c,uVar3,9,0xc);
    uVar3 = uVar1 & (int)(param_5 << 0x1c) >> 0x1f;
    uStack_28 = FUN_71ba240c(*puVar8,uVar3);
    uStack_2c = FUN_71ba240c(*param_3,uVar3);
    FUN_718f9c30(param_1,&uStack_2c,uVar3,0,3);
    uVar1 = uVar1 & (int)(param_5 << 0x1d) >> 0x1f;
    uStack_28 = FUN_71ba240c(*puVar8,uVar1);
    uStack_2c = FUN_71ba0b38(uVar1,*param_2);
    FUN_718f9c30(param_1,&uStack_2c,uVar1,3,6);
    return;
  }
  iVar2 = *(int *)(param_1 + 0x54);
  if (iVar2 == *(int *)(param_1 + 0x58)) {
    iVar9 = iVar2 + iVar2 / 2;
    if (iVar2 == 0) {
      iVar9 = 8;
    }
    if (iVar9 <= iVar2 + 1) {
      iVar9 = iVar2 + 1;
    }
    iVar4 = FUN_718c8a70(iVar9 << 3);
    if (*(int *)(param_1 + 0x5c) != 0) {
      imp___aeabi_memcpy(iVar4,*(int *)(param_1 + 0x5c),*(int *)(param_1 + 0x54) << 3);
      FUN_718c8b14(*(undefined4 *)(param_1 + 0x5c));
    }
    iVar2 = *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x58) = iVar9;
    *(int *)(param_1 + 0x5c) = iVar4;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x5c);
  }
  uVar5 = param_2[1];
  puVar8 = (undefined4 *)(iVar4 + iVar2 * 8);
  *puVar8 = *param_2;
  puVar8[1] = uVar5;
  iVar2 = *(int *)(param_1 + 0x54);
  iVar4 = iVar2 + 1;
  *(int *)(param_1 + 0x54) = iVar4;
  uVar5 = param_2[1];
  uVar6 = *param_3;
  if (iVar4 == *(int *)(param_1 + 0x58)) {
    iVar9 = iVar4 + iVar4 / 2;
    iVar2 = iVar2 + 2;
    if (iVar4 == 0) {
      iVar9 = 8;
    }
    if (iVar9 <= iVar2) {
      iVar9 = iVar2;
    }
    iVar2 = FUN_718c8a70(iVar9 << 3);
    if (*(int *)(param_1 + 0x5c) != 0) {
      imp___aeabi_memcpy(iVar2,*(int *)(param_1 + 0x5c),*(int *)(param_1 + 0x54) << 3);
      FUN_718c8b14(*(undefined4 *)(param_1 + 0x5c));
    }
    iVar4 = *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x58) = iVar9;
    *(int *)(param_1 + 0x5c) = iVar2;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x5c);
  }
  puVar8 = (undefined4 *)(iVar2 + iVar4 * 8);
  *puVar8 = uVar6;
  puVar8[1] = uVar5;
  iVar2 = *(int *)(param_1 + 0x54);
  iVar4 = iVar2 + 1;
  *(int *)(param_1 + 0x54) = iVar4;
  if (iVar4 == *(int *)(param_1 + 0x58)) {
    iVar9 = iVar4 + iVar4 / 2;
    iVar2 = iVar2 + 2;
    if (iVar4 == 0) {
      iVar9 = 8;
    }
    if (iVar9 <= iVar2) {
      iVar9 = iVar2;
    }
    iVar2 = FUN_718c8a70(iVar9 << 3);
    if (*(int *)(param_1 + 0x5c) != 0) {
      imp___aeabi_memcpy(iVar2,*(int *)(param_1 + 0x5c),*(int *)(param_1 + 0x54) << 3);
      FUN_718c8b14(*(undefined4 *)(param_1 + 0x5c));
    }
    iVar4 = *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x58) = iVar9;
    *(int *)(param_1 + 0x5c) = iVar2;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x5c);
  }
  uVar5 = param_3[1];
  puVar8 = (undefined4 *)(iVar2 + iVar4 * 8);
  *puVar8 = *param_3;
  puVar8[1] = uVar5;
  iVar2 = *(int *)(param_1 + 0x54);
  iVar4 = iVar2 + 1;
  *(int *)(param_1 + 0x54) = iVar4;
  uVar5 = param_3[1];
  uVar6 = *param_2;
  if (iVar4 == *(int *)(param_1 + 0x58)) {
    iVar9 = iVar4 + iVar4 / 2;
    iVar2 = iVar2 + 2;
    if (iVar4 == 0) {
      iVar9 = 8;
    }
    if (iVar9 <= iVar2) {
      iVar9 = iVar2;
    }
    iVar2 = FUN_718c8a70(iVar9 << 3);
    if (*(int *)(param_1 + 0x5c) != 0) {
      imp___aeabi_memcpy(iVar2,*(int *)(param_1 + 0x5c),*(int *)(param_1 + 0x54) << 3);
      FUN_718c8b14(*(undefined4 *)(param_1 + 0x5c));
    }
    iVar4 = *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x58) = iVar9;
    *(int *)(param_1 + 0x5c) = iVar2;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x5c);
  }
  puVar8 = (undefined4 *)(iVar2 + iVar4 * 8);
  *puVar8 = uVar6;
  puVar8[1] = uVar5;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
  return;
}


// =========================================================================
// Function: FUN_718facd4
// Entry: 0x718facd4 | Size: 400 bytes
// =========================================================================

void FUN_718facd4(int param_1,undefined4 *param_2,undefined4 *param_3,uint param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  
  if (param_4 < 0x1000000) {
    return;
  }
  uVar4 = param_2[1];
  uVar1 = FUN_71ba0b38(*param_2,0x3f000000);
  uVar4 = FUN_71ba0b38(uVar4,0x3f000000);
  iVar2 = *(int *)(param_1 + 0x54);
  if (iVar2 == *(int *)(param_1 + 0x58)) {
    iVar6 = iVar2 + iVar2 / 2;
    if (iVar2 == 0) {
      iVar6 = 8;
    }
    if (iVar6 <= iVar2 + 1) {
      iVar6 = iVar2 + 1;
    }
    iVar3 = FUN_718c8a70(iVar6 << 3);
    if (*(int *)(param_1 + 0x5c) != 0) {
      imp___aeabi_memcpy(iVar3,*(int *)(param_1 + 0x5c),*(int *)(param_1 + 0x54) << 3);
      FUN_718c8b14(*(undefined4 *)(param_1 + 0x5c));
    }
    iVar2 = *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x58) = iVar6;
    *(int *)(param_1 + 0x5c) = iVar3;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x5c);
  }
  puVar5 = (undefined4 *)(iVar3 + iVar2 * 8);
  *puVar5 = uVar1;
  puVar5[1] = uVar4;
  iVar2 = *(int *)(param_1 + 0x54);
  iVar3 = *(int *)(param_1 + 0x58);
  iVar6 = iVar2 + 1;
  *(int *)(param_1 + 0x54) = iVar6;
  uVar4 = param_3[1];
  uVar1 = FUN_71ba0b38(*param_3,0x3f000000);
  uVar4 = FUN_71ba0b38(uVar4,0x3f000000);
  if (iVar6 == iVar3) {
    iVar3 = iVar6 + iVar6 / 2;
    iVar2 = iVar2 + 2;
    if (iVar6 == 0) {
      iVar3 = 8;
    }
    if (iVar3 <= iVar2) {
      iVar3 = iVar2;
    }
    iVar2 = FUN_718c8a70(iVar3 << 3);
    if (*(int *)(param_1 + 0x5c) != 0) {
      imp___aeabi_memcpy(iVar2,*(int *)(param_1 + 0x5c),*(int *)(param_1 + 0x54) << 3);
      FUN_718c8b14(*(undefined4 *)(param_1 + 0x5c));
    }
    iVar6 = *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x58) = iVar3;
    *(int *)(param_1 + 0x5c) = iVar2;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x5c);
  }
  puVar5 = (undefined4 *)(iVar2 + iVar6 * 8);
  *puVar5 = uVar1;
  puVar5[1] = uVar4;
  iVar2 = *(int *)(param_1 + 0x54) + 1;
  *(int *)(param_1 + 0x54) = iVar2;
  FUN_718f7544(param_1,*(undefined4 *)(param_1 + 0x5c),iVar2,param_4,0,param_5);
  *(undefined4 *)(param_1 + 0x54) = 0;
  return;
}


// =========================================================================
// Function: FUN_718fafb0
// Entry: 0x718fafb0 | Size: 268 bytes
// =========================================================================

void FUN_718fafb0(int param_1,undefined4 *param_2,undefined4 *param_3,uint param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (param_4 < 0x1000000) {
    return;
  }
  if ((*(byte *)(param_1 + 0x24) & 1) == 0) {
    uStack_28 = FUN_71ba0b38(param_2[1],0x3f000000);
    uStack_2c = FUN_71ba0b38(*param_2,0x3f000000);
    uVar1 = 0xbefae148;
    uStack_30 = FUN_71ba0b38(param_3[1],0xbefae148);
  }
  else {
    uStack_28 = FUN_71ba0b38(param_2[1],0x3f000000);
    uStack_2c = FUN_71ba0b38(*param_2,0x3f000000);
    uStack_30 = FUN_71ba0b38(param_3[1],0xbf000000);
    uVar1 = 0xbf000000;
  }
  uStack_34 = FUN_71ba0b38(*param_3,uVar1);
  FUN_718fa4e4(param_1,&uStack_2c,&uStack_34,param_5,param_6);
  FUN_718f7544(param_1,*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x54),param_4,1,
               param_7);
  *(undefined4 *)(param_1 + 0x54) = 0;
  return;
}


// =========================================================================
// Function: FUN_718fb1d0
// Entry: 0x718fb1d0 | Size: 384 bytes
// =========================================================================

void FUN_718fb1d0(int param_1,undefined4 *param_2,undefined4 *param_3,uint param_4,
                 undefined4 param_5,undefined4 param_6)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if (param_4 < 0x1000000) {
    return;
  }
  iVar2 = FUN_71ba2d70(param_5,0);
  if (iVar2 == 0) {
    FUN_718f72e8(param_1,6,4);
    uVar3 = param_3[1];
    sVar1 = *(short *)(param_1 + 0x28);
    uVar8 = *param_3;
    uVar10 = *param_2;
    uVar9 = param_2[1];
    uVar5 = **(undefined4 **)(param_1 + 0x2c);
    uVar6 = (*(undefined4 **)(param_1 + 0x2c))[1];
    **(short **)(param_1 + 0x38) = sVar1;
    *(short *)(*(int *)(param_1 + 0x38) + 2) = sVar1 + 1;
    *(short *)(*(int *)(param_1 + 0x38) + 4) = sVar1 + 2;
    *(short *)(*(int *)(param_1 + 0x38) + 6) = sVar1;
    *(short *)(*(int *)(param_1 + 0x38) + 8) = sVar1 + 2;
    *(short *)(*(int *)(param_1 + 0x38) + 10) = sVar1 + 3;
    puVar7 = *(undefined4 **)(param_1 + 0x34);
    uVar4 = param_2[1];
    *puVar7 = *param_2;
    puVar7[1] = uVar4;
    iVar2 = *(int *)(param_1 + 0x34);
    *(undefined4 *)(iVar2 + 8) = uVar5;
    *(undefined4 *)(iVar2 + 0xc) = uVar6;
    *(uint *)(*(int *)(param_1 + 0x34) + 0x10) = param_4;
    iVar2 = *(int *)(param_1 + 0x34);
    *(undefined4 *)(iVar2 + 0x14) = uVar8;
    *(undefined4 *)(iVar2 + 0x18) = uVar9;
    iVar2 = *(int *)(param_1 + 0x34);
    *(undefined4 *)(iVar2 + 0x1c) = uVar5;
    *(undefined4 *)(iVar2 + 0x20) = uVar6;
    *(uint *)(*(int *)(param_1 + 0x34) + 0x24) = param_4;
    iVar2 = *(int *)(param_1 + 0x34);
    uVar4 = param_3[1];
    *(undefined4 *)(iVar2 + 0x28) = *param_3;
    *(undefined4 *)(iVar2 + 0x2c) = uVar4;
    iVar2 = *(int *)(param_1 + 0x34);
    *(undefined4 *)(iVar2 + 0x30) = uVar5;
    *(undefined4 *)(iVar2 + 0x34) = uVar6;
    *(uint *)(*(int *)(param_1 + 0x34) + 0x38) = param_4;
    iVar2 = *(int *)(param_1 + 0x34);
    *(undefined4 *)(iVar2 + 0x3c) = uVar10;
    *(undefined4 *)(iVar2 + 0x40) = uVar3;
    iVar2 = *(int *)(param_1 + 0x34);
    *(undefined4 *)(iVar2 + 0x44) = uVar5;
    *(undefined4 *)(iVar2 + 0x48) = uVar6;
    *(uint *)(*(int *)(param_1 + 0x34) + 0x4c) = param_4;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 4;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 0x50;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 0xc;
  }
  else {
    FUN_718fa4e4(param_1,param_2,param_3,param_5,param_6);
    FUN_718f9394(param_1,*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x54),param_4);
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  return;
}


// =========================================================================
// Function: FUN_718fb3d8
// Entry: 0x718fb3d8 | Size: 468 bytes
// =========================================================================

void FUN_718fb3d8(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 uint param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (0xffffff < param_5) {
    iVar1 = *(int *)(param_1 + 0x54);
    if (iVar1 == *(int *)(param_1 + 0x58)) {
      iVar4 = iVar1 + iVar1 / 2;
      if (iVar1 == 0) {
        iVar4 = 8;
      }
      if (iVar4 <= iVar1 + 1) {
        iVar4 = iVar1 + 1;
      }
      iVar2 = FUN_718c8a70(iVar4 << 3);
      if (*(int *)(param_1 + 0x5c) != 0) {
        imp___aeabi_memcpy(iVar2,*(int *)(param_1 + 0x5c),*(int *)(param_1 + 0x54) << 3);
        FUN_718c8b14(*(undefined4 *)(param_1 + 0x5c));
      }
      iVar1 = *(int *)(param_1 + 0x54);
      *(int *)(param_1 + 0x58) = iVar4;
      *(int *)(param_1 + 0x5c) = iVar2;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x5c);
    }
    uVar3 = param_2[1];
    puVar5 = (undefined4 *)(iVar2 + iVar1 * 8);
    *puVar5 = *param_2;
    puVar5[1] = uVar3;
    iVar1 = *(int *)(param_1 + 0x54);
    iVar2 = iVar1 + 1;
    *(int *)(param_1 + 0x54) = iVar2;
    if (iVar2 == *(int *)(param_1 + 0x58)) {
      iVar4 = iVar2 + iVar2 / 2;
      iVar1 = iVar1 + 2;
      if (iVar2 == 0) {
        iVar4 = 8;
      }
      if (iVar4 <= iVar1) {
        iVar4 = iVar1;
      }
      iVar1 = FUN_718c8a70(iVar4 << 3);
      if (*(int *)(param_1 + 0x5c) != 0) {
        imp___aeabi_memcpy(iVar1,*(int *)(param_1 + 0x5c),*(int *)(param_1 + 0x54) << 3);
        FUN_718c8b14(*(undefined4 *)(param_1 + 0x5c));
      }
      iVar2 = *(int *)(param_1 + 0x54);
      *(int *)(param_1 + 0x58) = iVar4;
      *(int *)(param_1 + 0x5c) = iVar1;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x5c);
    }
    uVar3 = param_3[1];
    puVar5 = (undefined4 *)(iVar1 + iVar2 * 8);
    *puVar5 = *param_3;
    puVar5[1] = uVar3;
    iVar1 = *(int *)(param_1 + 0x54);
    iVar2 = iVar1 + 1;
    *(int *)(param_1 + 0x54) = iVar2;
    if (iVar2 == *(int *)(param_1 + 0x58)) {
      iVar4 = iVar2 + iVar2 / 2;
      iVar1 = iVar1 + 2;
      if (iVar2 == 0) {
        iVar4 = 8;
      }
      if (iVar4 <= iVar1) {
        iVar4 = iVar1;
      }
      iVar1 = FUN_718c8a70(iVar4 << 3);
      if (*(int *)(param_1 + 0x5c) != 0) {
        imp___aeabi_memcpy(iVar1,*(int *)(param_1 + 0x5c),*(int *)(param_1 + 0x54) << 3);
        FUN_718c8b14(*(undefined4 *)(param_1 + 0x5c));
      }
      iVar2 = *(int *)(param_1 + 0x54);
      *(int *)(param_1 + 0x58) = iVar4;
      *(int *)(param_1 + 0x5c) = iVar1;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x5c);
    }
    uVar3 = param_4[1];
    puVar5 = (undefined4 *)(iVar1 + iVar2 * 8);
    *puVar5 = *param_4;
    puVar5[1] = uVar3;
    iVar1 = *(int *)(param_1 + 0x54) + 1;
    *(int *)(param_1 + 0x54) = iVar1;
    FUN_718f9394(param_1,*(undefined4 *)(param_1 + 0x5c),iVar1,param_5);
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  return;
}


// =========================================================================
// Function: FUN_718fb6dc
// Entry: 0x718fb6dc | Size: 340 bytes
// =========================================================================

void FUN_718fb6dc(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = FUN_71ba2d30(param_3,0);
  if (iVar1 != 0) {
    return;
  }
  if (param_4 < 0x1000000) {
    return;
  }
  if ((int)param_5 < 1) {
    iVar1 = FUN_71ba17bc(param_3);
    if (iVar1 < 0x40) {
      uVar4 = (uint)*(byte *)(*(int *)(param_1 + 0x2c) + iVar1 + 0x8c);
LAB_718fb79c:
      uVar5 = uVar4;
      if (uVar4 != 0xc) goto LAB_718fb7c8;
    }
    else {
      uVar2 = FUN_71ba240c(param_3,*(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x14));
      FUN_71ba13e0(uVar2,param_3);
      uVar2 = imp_acosf();
      FUN_71ba13e0(0x40c90fdb,uVar2);
      uVar5 = FUN_71ba17bc();
      uVar4 = uVar5;
      if (0x1ff < uVar5) {
        uVar4 = 0x200;
      }
      if (0xb < (int)uVar5) goto LAB_718fb79c;
    }
    FUN_718f9c30(param_1,param_2,param_3,0,0xb);
  }
  else {
    uVar4 = param_5;
    if (0x1ff < param_5) {
      uVar4 = 0x200;
    }
    uVar5 = 3;
    if (2 < param_5) goto LAB_718fb79c;
LAB_718fb7c8:
    uVar2 = FUN_71ba1b94(uVar5);
    uVar3 = FUN_71ba1b94(uVar5 - 1);
    uVar3 = FUN_71ba21e8(uVar3,0x40c90fdb);
    uVar2 = FUN_71ba13e0(uVar3,uVar2);
    FUN_718fa008(param_1,param_2,param_3,0,uVar2,uVar5 - 1);
  }
  FUN_718f9394(param_1,*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x54),param_4);
  *(undefined4 *)(param_1 + 0x54) = 0;
  return;
}


// =========================================================================
// Function: FUN_718fb9d0
// Entry: 0x718fb9d0 | Size: 916 bytes
// =========================================================================

void FUN_718fb9d0(int param_1,int param_2,undefined4 param_3,undefined4 *param_4,uint param_5,
                 int param_6,int param_7,undefined4 param_8,undefined4 *param_9)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (0xffffff < param_5) {
    if (param_7 == 0) {
      param_7 = imp_strlen(param_6);
      param_7 = param_6 + param_7;
    }
    if (param_7 != param_6) {
      if (param_2 == 0) {
        param_2 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
      }
      iVar1 = FUN_71ba2cf0(param_3,0);
      if (iVar1 != 0) {
        param_3 = *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0xc);
      }
      uStack_38 = *(undefined4 *)(param_1 + 0x60);
      uStack_34 = *(undefined4 *)(param_1 + 100);
      uStack_30 = *(undefined4 *)(param_1 + 0x68);
      uStack_2c = *(undefined4 *)(param_1 + 0x6c);
      if (param_9 != (undefined4 *)0x0) {
        puVar6 = (undefined4 *)((uint)&uStack_38 | 4);
        uVar8 = param_9[1];
        uVar2 = *puVar6;
        uVar3 = puVar6[1];
        uVar4 = puVar6[2];
        uVar5 = param_9[2];
        uVar7 = param_9[3];
        iVar1 = FUN_71ba2d50(uVar2,uVar8);
        if (iVar1 != 0) {
          uVar8 = uVar2;
        }
        *puVar6 = uVar8;
        iVar1 = FUN_71ba2d10(uVar3,uVar5);
        if (iVar1 != 0) {
          uVar5 = uVar3;
        }
        puVar6[1] = uVar5;
        iVar1 = FUN_71ba2d10(uVar4,uVar7);
        uVar5 = uStack_38;
        if (iVar1 != 0) {
          uVar7 = uVar4;
        }
        uVar8 = *param_9;
        puVar6[2] = uVar7;
        iVar1 = FUN_71ba2d50(uStack_38,uVar8);
        uStack_38 = uVar8;
        if (iVar1 != 0) {
          uStack_38 = uVar5;
        }
      }
      if (DAT_712042c0 != '\0') {
        uVar5 = FUN_71ba1e0c(DAT_712042c4);
        uVar8 = param_4[1];
        uVar5 = FUN_71ba240c(*param_4,uVar5);
        bVar9 = param_9 != (undefined4 *)0x0;
        FUN_718fc104(param_2,param_1,param_3,uVar5,uVar8,DAT_712042c8,&uStack_38,param_6,param_7,
                     param_8,bVar9);
        uVar7 = FUN_71ba1e0c(DAT_712042c4);
        uVar5 = FUN_71ba0b38(uVar5,uVar7);
        uVar5 = FUN_71ba0b38(uVar5,uVar7);
        FUN_718fc104(param_2,param_1,param_3,uVar5,uVar8,DAT_712042c8,&uStack_38,param_6,param_7,
                     param_8,bVar9);
        uVar7 = FUN_71ba1e0c(DAT_712042c4);
        uVar5 = FUN_71ba240c(uVar5,uVar7);
        uVar7 = FUN_71ba240c(uVar8,uVar7);
        FUN_718fc104(param_2,param_1,param_3,uVar5,uVar7,DAT_712042c8,&uStack_38,param_6,param_7,
                     param_8,bVar9);
        uVar8 = FUN_71ba1e0c(DAT_712042c4);
        uVar7 = FUN_71ba0b38(uVar7,uVar8);
        uVar7 = FUN_71ba0b38(uVar7,uVar8);
        FUN_718fc104(param_2,param_1,param_3,uVar5,uVar7,DAT_712042c8,&uStack_38,param_6,param_7,
                     param_8,bVar9);
      }
      FUN_718fc104(param_2,param_1,param_3,*param_4,param_4[1],param_5,&uStack_38,param_6,param_7,
                   param_8,param_9 != (undefined4 *)0x0);
    }
  }
  return;
}


// =========================================================================
// Function: FUN_718fc104
// Entry: 0x718fc104 | Size: 2300 bytes
// =========================================================================

void FUN_718fc104(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 uint param_6,undefined4 *param_7,byte *param_8,byte *param_9,undefined4 param_10,
                 int param_11)

{
  byte bVar1;
  short sVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  byte *pbVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 *puVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 *puVar21;
  uint uVar22;
  undefined4 uVar23;
  byte *pbVar24;
  uint *puVar25;
  uint uVar26;
  byte *pbVar27;
  byte *pbVar28;
  uint uStack_98;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  short *psStack_5c;
  int iStack_58;
  byte *pbStack_4c;
  undefined4 uStack_40;
  uint uStack_28;
  
  if (param_9 == (byte *)0x0) {
    iVar4 = imp_strlen(param_8);
    param_9 = param_8 + iVar4;
  }
  FUN_71ba17bc(param_5);
  uVar5 = FUN_71ba1b94();
  puVar18 = param_7 + 3;
  iVar4 = FUN_71ba2d10(*puVar18,uVar5);
  FUN_71ba17bc(param_4);
  uVar6 = FUN_71ba1b94();
  if (iVar4 == 0) {
    iVar4 = FUN_71ba2d70(param_10,0);
    uVar20 = *(undefined4 *)(param_1 + 0x10);
    uVar7 = FUN_71ba13e0(param_3,uVar20);
    uVar8 = FUN_71ba21e8(uVar20,uVar7);
    uVar20 = FUN_71ba0b38(uVar8,uVar5);
    if (iVar4 == 0) {
      uVar23 = param_7[1];
      iVar9 = FUN_71ba2d10(uVar20,uVar23);
      while ((iVar9 != 0 && (param_8 < param_9))) {
        iVar9 = imp_memchr(param_8,10,(int)param_9 - (int)param_8);
        param_8 = param_9;
        if (iVar9 != 0) {
          param_8 = (byte *)(iVar9 + 1);
        }
        uVar10 = FUN_71ba0b38(uVar8,uVar20);
        iVar9 = FUN_71ba2d10(uVar10,uVar23);
        uVar5 = uVar20;
        uVar20 = uVar10;
      }
    }
    pbVar24 = param_9;
    if (iVar4 == 0 && 10000 < (int)param_9 - (int)param_8) {
      uVar23 = *puVar18;
      iVar9 = FUN_71ba2d10(uVar5,uVar23);
      pbVar24 = param_8;
      uVar20 = uVar5;
      while ((iVar9 != 0 && (pbVar24 < param_9))) {
        iVar9 = imp_memchr(pbVar24,10,(int)param_9 - (int)pbVar24);
        pbVar24 = param_9;
        if (iVar9 != 0) {
          pbVar24 = (byte *)(iVar9 + 1);
        }
        uVar20 = FUN_71ba0b38(uVar8,uVar20);
        iVar9 = FUN_71ba2d10(uVar20,uVar23);
      }
    }
    if (param_8 != pbVar24) {
      iVar9 = ((int)pbVar24 - (int)param_8) * 6;
      iVar11 = param_2[3];
      FUN_718f72e8(param_2,iVar9,((int)pbVar24 - (int)param_8) * 4);
      iStack_58 = param_2[10];
      psStack_5c = (short *)param_2[0xe];
      pbStack_4c = (byte *)0x0;
      puVar21 = (undefined4 *)param_2[0xd];
      uStack_40 = uVar6;
LAB_718fc2e4:
      do {
        do {
          do {
            uVar20 = uVar5;
            pbVar12 = pbStack_4c;
            uVar23 = uStack_40;
            uVar10 = uVar5;
            pbVar27 = param_8;
joined_r0x718fc2f4:
            while( true ) {
              if (pbVar24 <= param_8) goto LAB_718fc908;
              pbVar28 = pbVar27;
              uVar5 = uVar10;
              pbVar3 = pbStack_4c;
              uVar19 = uStack_40;
              if (iVar4 == 0) break;
              if (pbVar12 == (byte *)0x0) {
                uVar5 = FUN_71ba240c(uVar6,uVar23);
                uVar5 = FUN_71ba0b38(uVar5,param_10);
                pbVar12 = (byte *)FUN_7190801c(param_1,uVar7,param_8,pbVar24,uVar5);
                if (pbVar12 == param_8) {
                  pbVar12 = pbVar12 + 1;
                }
              }
              pbVar28 = param_8;
              uVar5 = uVar20;
              pbVar3 = pbVar12;
              uVar19 = uVar23;
              if (param_8 < pbVar12) break;
              uVar20 = FUN_71ba0b38(uVar8,uVar20);
              if (param_8 < pbVar24) {
                iVar13 = (int)pbVar24 - (int)param_8;
                pbVar12 = param_8;
                do {
                  bVar1 = *pbVar12;
                  if (bVar1 != 0x20 && bVar1 != 9) {
                    param_8 = pbVar12;
                    if (bVar1 == 10) {
                      param_8 = pbVar12 + 1;
                    }
                    break;
                  }
                  iVar13 = iVar13 + -1;
                  param_8 = pbVar24;
                  pbVar12 = pbVar12 + 1;
                } while (iVar13 != 0);
              }
              pbVar12 = (byte *)0x0;
              uVar23 = uVar6;
            }
            uStack_40 = uVar19;
            pbStack_4c = pbVar3;
            uStack_28 = (uint)*pbVar28;
            if ((char)*pbVar28 < '\0') {
              iVar13 = FUN_718c8868(&uStack_28,pbVar28,pbVar24);
              if (uStack_28 == 0) goto LAB_718fc908;
              param_8 = pbVar28 + iVar13;
            }
            else {
              param_8 = pbVar28 + 1;
            }
            if (0x1f < uStack_28) break;
            if (uStack_28 == 10) {
              uVar20 = FUN_71ba0b38(uVar8,uVar5);
              iVar13 = FUN_71ba2d70(uVar20,*puVar18);
              pbVar12 = pbStack_4c;
              uVar23 = uVar6;
              uStack_40 = uVar6;
              uVar10 = uVar20;
              pbVar27 = param_8;
              if (iVar13 != 0) {
LAB_718fc908:
                iVar4 = (int)psStack_5c - param_2[5] >> 1;
                param_2[3] = iVar4;
                iVar13 = param_2[2] + *param_2 * 0x28;
                param_2[6] = ((int)puVar21 - param_2[8] >> 2) * -0x33333333;
                *(int *)(iVar13 + -0xc) = (iVar4 - (iVar11 + iVar9)) + *(int *)(iVar13 + -0xc);
                param_2[0xd] = (int)puVar21;
                param_2[0xe] = (int)psStack_5c;
                param_2[10] = iStack_58;
                return;
              }
              goto joined_r0x718fc2f4;
            }
          } while (uStack_28 == 0xd);
          if ((uStack_28 & 0xffff) < *(uint *)(param_1 + 0x14)) {
            puVar25 = *(uint **)(param_1 + 0x2c);
            uVar14 = (uint)*(ushort *)(*(int *)(param_1 + 0x1c) + (uStack_28 & 0xffff) * 2);
            if (uVar14 != 0xffff) {
              puVar25 = (uint *)(*(int *)(param_1 + 0x28) + uVar14 * 0x28);
            }
          }
          else {
            puVar25 = *(uint **)(param_1 + 0x2c);
          }
        } while (puVar25 == (uint *)0x0);
        uVar20 = FUN_71ba21e8(uVar7,puVar25[1]);
        uVar14 = *puVar25;
        if ((uVar14 & 2) == 0) {
LAB_718fc5a0:
          uStack_40 = FUN_71ba0b38(uStack_40,uVar20);
          goto LAB_718fc2e4;
        }
        uVar15 = puVar25[2];
        uVar26 = puVar25[3];
        uVar22 = puVar25[5];
        uVar23 = FUN_71ba21e8(puVar25[4],uVar7);
        uStack_74 = FUN_71ba0b38(uVar23,uStack_40);
        uVar23 = FUN_71ba21e8(uVar26,uVar7);
        uVar23 = FUN_71ba0b38(uVar23,uVar5);
        uVar10 = FUN_71ba21e8(uVar22,uVar7);
        uStack_78 = FUN_71ba0b38(uVar10,uVar5);
        uVar10 = FUN_71ba21e8(uVar15,uVar7);
        uStack_7c = FUN_71ba0b38(uVar10,uStack_40);
        uVar10 = param_7[2];
        iVar13 = FUN_71ba2d30(uStack_7c);
        if (iVar13 == 0) goto LAB_718fc5a0;
        uVar19 = *param_7;
        iVar13 = FUN_71ba2d50(uStack_74);
        if (iVar13 == 0) goto LAB_718fc5a0;
        uStack_90 = puVar25[7];
        uStack_8c = puVar25[8];
        uStack_98 = puVar25[6];
        uStack_88 = puVar25[9];
        if (param_11 == 0) {
LAB_718fc834:
          sVar2 = (short)iStack_58;
          psStack_5c[5] = sVar2 + 3;
          psStack_5c[4] = sVar2 + 2;
          psStack_5c[2] = sVar2 + 2;
          psStack_5c[1] = sVar2 + 1;
          psStack_5c[3] = sVar2;
          *psStack_5c = sVar2;
          psStack_5c = psStack_5c + 6;
          *puVar21 = uStack_7c;
          uVar15 = param_6;
          if ((uVar14 & 1) != 0) {
            uVar15 = param_6 | 0xffffff;
          }
          iStack_58 = iStack_58 + 4;
          puVar21[4] = uVar15;
          puVar21[9] = uVar15;
          puVar21[0xe] = uVar15;
          puVar21[0x13] = uVar15;
          puVar21[1] = uVar23;
          puVar21[2] = uStack_98;
          puVar21[6] = uVar23;
          puVar21[3] = uStack_90;
          puVar21[8] = uStack_90;
          puVar21[5] = uStack_74;
          puVar21[10] = uStack_74;
          puVar21[7] = uStack_8c;
          puVar21[0xb] = uStack_78;
          puVar21[0xc] = uStack_8c;
          puVar21[0xd] = uStack_88;
          puVar21[0xf] = uStack_7c;
          puVar21[0x10] = uStack_78;
          puVar21[0x11] = uStack_98;
          puVar21[0x12] = uStack_88;
          puVar21 = puVar21 + 0x14;
          goto LAB_718fc5a0;
        }
        iVar13 = FUN_71ba2d10(uStack_7c,uVar19);
        if (iVar13 != 0) {
          uVar16 = FUN_71ba240c(uStack_74,uVar19);
          uVar17 = FUN_71ba240c(uStack_74,uStack_7c);
          uVar16 = FUN_71ba13e0(uVar16,uVar17);
          uVar16 = FUN_71ba240c(0x3f800000,uVar16);
          uVar17 = FUN_71ba240c(uStack_8c,uStack_98);
          uVar16 = FUN_71ba21e8(uVar16,uVar17);
          uStack_98 = FUN_71ba0b38(uVar16,uStack_98);
          uStack_7c = uVar19;
        }
        uVar19 = param_7[1];
        iVar13 = FUN_71ba2d10(uVar23,uVar19);
        if (iVar13 != 0) {
          uVar16 = FUN_71ba240c(uStack_78,uVar19);
          uVar23 = FUN_71ba240c(uStack_78,uVar23);
          uVar23 = FUN_71ba13e0(uVar16,uVar23);
          uVar23 = FUN_71ba240c(0x3f800000,uVar23);
          uVar16 = FUN_71ba240c(uStack_88,uStack_90);
          uVar23 = FUN_71ba21e8(uVar23,uVar16);
          uStack_90 = FUN_71ba0b38(uVar23,uStack_90);
          uVar23 = uVar19;
        }
        iVar13 = FUN_71ba2d70(uStack_74,uVar10);
        if (iVar13 != 0) {
          uVar19 = FUN_71ba240c(uVar10,uStack_7c);
          uVar16 = FUN_71ba240c(uStack_74,uStack_7c);
          uVar19 = FUN_71ba13e0(uVar19,uVar16);
          uVar16 = FUN_71ba240c(uStack_8c,uStack_98);
          uVar19 = FUN_71ba21e8(uVar19,uVar16);
          uStack_8c = FUN_71ba0b38(uVar19,uStack_98);
          uStack_74 = uVar10;
        }
        uVar10 = *puVar18;
        iVar13 = FUN_71ba2d70(uStack_78);
        if (iVar13 != 0) {
          uVar19 = FUN_71ba240c(uVar10,uVar23);
          uVar16 = FUN_71ba240c(uStack_78,uVar23);
          uVar19 = FUN_71ba13e0(uVar19,uVar16);
          uVar16 = FUN_71ba240c(uStack_88,uStack_90);
          uVar19 = FUN_71ba21e8(uVar19,uVar16);
          uStack_88 = FUN_71ba0b38(uVar19,uStack_90);
          uStack_78 = uVar10;
        }
        iVar13 = FUN_71ba2d50(uVar23,uStack_78);
        if (iVar13 == 0) goto LAB_718fc834;
        uStack_40 = FUN_71ba0b38(uStack_40,uVar20);
      } while( true );
    }
  }
  return;
}


// =========================================================================
// Function: FUN_718fd1c0
// Entry: 0x718fd1c0 | Size: 848 bytes
// =========================================================================

void FUN_718fd1c0(int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6,uint param_7)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  bool bVar16;
  
  if (0xffffff < param_7) {
    if (param_1[0x1c] != param_2) {
      FUN_718f7148(param_1);
      FUN_718f72e8(param_1,6,4);
      uVar7 = *param_6;
      uVar2 = param_6[1];
      uVar3 = *param_5;
      uVar15 = param_5[1];
      uVar4 = param_4[1];
      uVar9 = *param_4;
      sVar1 = (short)param_1[10];
      uVar5 = *param_3;
      uVar8 = param_3[1];
      *(short *)param_1[0xe] = sVar1;
      *(short *)(param_1[0xe] + 2) = sVar1 + 1;
      *(short *)(param_1[0xe] + 4) = sVar1 + 2;
      *(short *)(param_1[0xe] + 6) = sVar1;
      *(short *)(param_1[0xe] + 8) = sVar1 + 2;
      *(short *)(param_1[0xe] + 10) = sVar1 + 3;
      uVar10 = param_3[1];
      puVar11 = (undefined4 *)param_1[0xd];
      *puVar11 = *param_3;
      puVar11[1] = uVar10;
      iVar12 = param_1[0xd];
      uVar10 = param_5[1];
      *(undefined4 *)(iVar12 + 8) = *param_5;
      *(undefined4 *)(iVar12 + 0xc) = uVar10;
      *(uint *)(param_1[0xd] + 0x10) = param_7;
      iVar12 = param_1[0xd];
      *(undefined4 *)(iVar12 + 0x14) = uVar9;
      *(undefined4 *)(iVar12 + 0x18) = uVar8;
      iVar12 = param_1[0xd];
      *(undefined4 *)(iVar12 + 0x1c) = uVar7;
      *(undefined4 *)(iVar12 + 0x20) = uVar15;
      *(uint *)(param_1[0xd] + 0x24) = param_7;
      iVar12 = param_1[0xd];
      uVar7 = param_4[1];
      *(undefined4 *)(iVar12 + 0x28) = *param_4;
      *(undefined4 *)(iVar12 + 0x2c) = uVar7;
      iVar12 = param_1[0xd];
      uVar7 = param_6[1];
      *(undefined4 *)(iVar12 + 0x30) = *param_6;
      *(undefined4 *)(iVar12 + 0x34) = uVar7;
      *(uint *)(param_1[0xd] + 0x38) = param_7;
      iVar12 = param_1[0xd];
      *(undefined4 *)(iVar12 + 0x3c) = uVar5;
      *(undefined4 *)(iVar12 + 0x40) = uVar4;
      iVar12 = param_1[0xd];
      *(undefined4 *)(iVar12 + 0x44) = uVar3;
      *(undefined4 *)(iVar12 + 0x48) = uVar2;
      *(uint *)(param_1[0xd] + 0x4c) = param_7;
      param_1[10] = param_1[10] + 4;
      iVar12 = param_1[0x12] + -1;
      param_1[0x12] = iVar12;
      param_1[0xd] = param_1[0xd] + 0x50;
      param_1[0xe] = param_1[0xe] + 0xc;
      if (iVar12 == 0) {
        iVar12 = 0;
      }
      else {
        iVar12 = *(int *)(param_1[0x14] + iVar12 * 4 + -4);
      }
      iVar14 = *param_1;
      param_1[0x1c] = iVar12;
      iVar13 = param_1[2] + iVar14 * 0x28;
      if (*(int *)(iVar13 + -0xc) == 0) {
        if (1 < iVar14) {
          iVar6 = imp_memcmp(param_1 + 0x18,iVar13 + -0x50,0x18);
          bVar16 = iVar6 == 0;
          if (bVar16) {
            iVar6 = *(int *)(iVar13 + -0x30);
          }
          if (bVar16 && iVar6 == 0) {
            *param_1 = iVar14 + -1;
            return;
          }
        }
      }
      else if (*(int *)(iVar13 + -0x18) != iVar12) {
        FUN_718f6aa0(param_1);
        return;
      }
      *(int *)(iVar13 + -0x18) = iVar12;
      return;
    }
    FUN_718f72e8(param_1,6,4);
    uVar7 = *param_6;
    uVar2 = param_6[1];
    uVar3 = *param_5;
    uVar15 = param_5[1];
    uVar4 = param_4[1];
    uVar5 = *param_3;
    uVar10 = param_3[1];
    sVar1 = (short)param_1[10];
    uVar9 = *param_4;
    *(short *)param_1[0xe] = sVar1;
    *(short *)(param_1[0xe] + 2) = sVar1 + 1;
    *(short *)(param_1[0xe] + 4) = sVar1 + 2;
    *(short *)(param_1[0xe] + 6) = sVar1;
    *(short *)(param_1[0xe] + 8) = sVar1 + 2;
    *(short *)(param_1[0xe] + 10) = sVar1 + 3;
    puVar11 = (undefined4 *)param_1[0xd];
    uVar8 = param_3[1];
    *puVar11 = *param_3;
    puVar11[1] = uVar8;
    iVar12 = param_1[0xd];
    uVar8 = param_5[1];
    *(undefined4 *)(iVar12 + 8) = *param_5;
    *(undefined4 *)(iVar12 + 0xc) = uVar8;
    *(uint *)(param_1[0xd] + 0x10) = param_7;
    iVar12 = param_1[0xd];
    *(undefined4 *)(iVar12 + 0x14) = uVar9;
    *(undefined4 *)(iVar12 + 0x18) = uVar10;
    iVar12 = param_1[0xd];
    *(undefined4 *)(iVar12 + 0x1c) = uVar7;
    *(undefined4 *)(iVar12 + 0x20) = uVar15;
    *(uint *)(param_1[0xd] + 0x24) = param_7;
    iVar12 = param_1[0xd];
    uVar7 = param_4[1];
    *(undefined4 *)(iVar12 + 0x28) = *param_4;
    *(undefined4 *)(iVar12 + 0x2c) = uVar7;
    iVar12 = param_1[0xd];
    uVar7 = param_6[1];
    *(undefined4 *)(iVar12 + 0x30) = *param_6;
    *(undefined4 *)(iVar12 + 0x34) = uVar7;
    *(uint *)(param_1[0xd] + 0x38) = param_7;
    iVar12 = param_1[0xd];
    *(undefined4 *)(iVar12 + 0x3c) = uVar5;
    *(undefined4 *)(iVar12 + 0x40) = uVar4;
    iVar12 = param_1[0xd];
    *(undefined4 *)(iVar12 + 0x44) = uVar3;
    *(undefined4 *)(iVar12 + 0x48) = uVar2;
    *(uint *)(param_1[0xd] + 0x4c) = param_7;
    param_1[10] = param_1[10] + 4;
    param_1[0xd] = param_1[0xd] + 0x50;
    param_1[0xe] = param_1[0xe] + 0xc;
  }
  return;
}


// =========================================================================
// Function: FUN_718fd5b4
// Entry: 0x718fd5b4 | Size: 1100 bytes
// =========================================================================

void FUN_718fd5b4(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  if (*(int *)(param_1 + 4) < 2) {
    return;
  }
  iVar9 = 0;
  FUN_718fdbbc(param_1,param_2,0);
  iVar1 = *param_2;
  if (iVar1 == 0) {
    uVar3 = *(uint *)(param_1 + 4);
    iVar2 = 0;
    iVar1 = 0;
    iVar12 = 0;
    iVar8 = 0;
    if ((int)uVar3 < 1) goto LAB_718fd7f0;
  }
  else {
    iVar2 = param_2[2] + iVar1 * 0x28;
    iVar9 = iVar1;
    if ((*(int *)(iVar2 + -0xc) == 0) && (*(int *)(iVar2 + -8) == 0)) {
      *param_2 = iVar1 + -1;
      iVar9 = iVar1 + -1;
    }
    uVar3 = *(uint *)(param_1 + 4);
    if ((int)uVar3 < 1) {
      iVar12 = 0;
      iVar8 = 0;
      goto LAB_718fd7f0;
    }
    if (0 < iVar9) {
      iVar1 = param_2[2] + iVar9 * 0x28;
      iVar2 = iVar1 + -0x28;
      if (iVar2 != 0) {
        iVar1 = *(int *)(iVar1 + -0xc) + *(int *)(iVar1 + -0x10);
        goto LAB_718fd680;
      }
    }
    iVar2 = 0;
    iVar1 = 0;
  }
LAB_718fd680:
  iVar12 = 0;
  iVar8 = 0;
  if (1 < uVar3) {
    iVar9 = 1;
    do {
      piVar10 = (int *)(*(int *)(param_1 + 0x10) + iVar9 * 0x18);
      iVar11 = *piVar10;
      if (iVar11 < 1) {
LAB_718fd6a0:
        iVar13 = piVar10[3];
      }
      else {
        if (*(int *)(piVar10[2] + iVar11 * 0x28 + -0xc) == 0) {
          iVar11 = iVar11 + -1;
          *piVar10 = iVar11;
        }
        if (iVar11 == 0 || iVar2 == 0) {
joined_r0x718fd784:
          if (iVar11 < 1) goto LAB_718fd6a0;
        }
        else {
          iVar4 = piVar10[2];
          iVar13 = imp_memcmp(iVar2,iVar4,0x18);
          if ((iVar13 == 0) && (*(int *)(iVar2 + 0x20) == 0 && *(int *)(iVar4 + 0x20) == 0)) {
            *(int *)(iVar2 + 0x1c) = *(int *)(iVar2 + 0x1c) + *(int *)(iVar4 + 0x1c);
            iVar11 = *(int *)(iVar4 + 0x1c);
            imp___aeabi_memmove(piVar10[2],piVar10[2] + 0x28,*piVar10 * 0x28 + -0x28);
            iVar1 = iVar11 + iVar1;
            iVar11 = *piVar10 + -1;
            *piVar10 = iVar11;
            goto joined_r0x718fd784;
          }
        }
        iVar5 = piVar10[2];
        iVar13 = piVar10[3];
        iVar4 = 0;
        iVar6 = 0;
        iVar2 = iVar5 + iVar11 * 0x28 + -0x28;
        do {
          iVar6 = iVar6 + 1;
          *(int *)(iVar5 + iVar4 + 0x18) = iVar1;
          iVar5 = piVar10[2];
          iVar7 = iVar5 + iVar4;
          iVar4 = iVar4 + 0x28;
          iVar1 = *(int *)(iVar7 + 0x1c) + iVar1;
        } while (iVar6 < *piVar10);
      }
      iVar8 = iVar11 + iVar8;
      iVar12 = iVar13 + iVar12;
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(param_1 + 4));
    iVar9 = *param_2;
  }
LAB_718fd7f0:
  iVar1 = param_2[1];
  iVar9 = iVar9 + iVar8;
  if (iVar1 < iVar9) {
    iVar2 = iVar1 + iVar1 / 2;
    if (iVar1 == 0) {
      iVar2 = 8;
    }
    if (iVar2 <= iVar9) {
      iVar2 = iVar9;
    }
    iVar1 = FUN_718c8a70(iVar2 * 0x28);
    if (param_2[2] != 0) {
      imp___aeabi_memcpy(iVar1,param_2[2],*param_2 * 0x28);
      FUN_718c8b14(param_2[2]);
    }
    param_2[1] = iVar2;
    param_2[2] = iVar1;
  }
  iVar1 = param_2[3];
  iVar2 = param_2[4];
  iVar12 = iVar1 + iVar12;
  *param_2 = iVar9;
  if (iVar2 < iVar12) {
    iVar9 = iVar2 + iVar2 / 2;
    if (iVar2 == 0) {
      iVar9 = 8;
    }
    if (iVar9 <= iVar12) {
      iVar9 = iVar12;
    }
    iVar2 = FUN_718c8a70(iVar9 << 1);
    if (param_2[5] != 0) {
      imp___aeabi_memcpy(iVar2,param_2[5],param_2[3] << 1);
      FUN_718c8b14(param_2[5]);
    }
    param_2[4] = iVar9;
    iVar9 = *param_2;
    param_2[5] = iVar2;
  }
  else {
    iVar2 = param_2[5];
  }
  param_2[3] = iVar12;
  iVar2 = iVar2 + iVar1 * 2;
  if (1 < *(int *)(param_1 + 4)) {
    iVar1 = 1;
    iVar12 = 0;
    iVar9 = param_2[2] + iVar9 * 0x28 + iVar8 * -0x28;
    do {
      iVar11 = *(int *)(param_1 + 0x10) + iVar12;
      iVar8 = *(int *)(iVar11 + 0x18);
      if (iVar8 != 0) {
        imp___aeabi_memcpy(iVar9,*(undefined4 *)(iVar11 + 0x20),iVar8 * 0x28);
        iVar9 = iVar9 + iVar8 * 0x28;
      }
      iVar8 = *(int *)(iVar11 + 0x24);
      if (iVar8 != 0) {
        imp___aeabi_memcpy(iVar2,*(undefined4 *)(iVar11 + 0x2c),iVar8 << 1);
        iVar2 = iVar2 + iVar8 * 2;
      }
      iVar1 = iVar1 + 1;
      iVar12 = iVar12 + 0x18;
    } while (iVar1 < *(int *)(param_1 + 4));
    iVar9 = *param_2;
  }
  param_2[0xe] = iVar2;
  if ((iVar9 == 0) || (iVar1 = param_2[2], *(int *)(iVar1 + iVar9 * 0x28 + -8) != 0)) {
    FUN_718f6aa0(param_2);
    iVar9 = *param_2;
    iVar1 = param_2[2];
  }
  iVar1 = iVar1 + iVar9 * 0x28;
  iVar9 = iVar1 + -0x28;
  if (*(int *)(iVar1 + -0xc) == 0) {
    imp___aeabi_memcpy(iVar9,param_2 + 0x18,0x18);
  }
  else {
    iVar9 = imp_memcmp(iVar9,param_2 + 0x18,0x18);
    if (iVar9 != 0) {
      FUN_718f6aa0(param_2);
    }
  }
  *(undefined4 *)(param_1 + 4) = 1;
  return;
}


// =========================================================================
// Function: FUN_718fdbbc
// Entry: 0x718fdbbc | Size: 272 bytes
// =========================================================================

void FUN_718fdbbc(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  if (*param_1 == param_3) {
    return;
  }
  iVar6 = param_2[1];
  iVar3 = param_2[2];
  piVar2 = (int *)(param_1[4] + *param_1 * 0x18);
  *piVar2 = *param_2;
  piVar2[2] = iVar3;
  piVar2[1] = iVar6;
  iVar5 = param_2[3];
  iVar6 = param_2[4];
  iVar3 = param_1[4] + *param_1 * 0x18;
  *(int *)(iVar3 + 0x14) = param_2[5];
  *(int *)(iVar3 + 0x10) = iVar6;
  *(int *)(iVar3 + 0xc) = iVar5;
  *param_1 = param_3;
  piVar2 = (int *)(param_1[4] + param_3 * 0x18);
  iVar5 = *piVar2;
  *param_2 = iVar5;
  iVar3 = piVar2[1];
  bVar7 = iVar5 == 0;
  param_2[2] = piVar2[2];
  param_2[1] = iVar3;
  iVar3 = param_1[4] + param_3 * 0x18;
  iVar1 = *(int *)(iVar3 + 0xc);
  iVar4 = *(int *)(iVar3 + 0x10);
  iVar3 = *(int *)(iVar3 + 0x14);
  param_2[5] = iVar3;
  iVar3 = iVar3 + iVar1 * 2;
  param_2[0xe] = iVar3;
  iVar6 = 0;
  if (!bVar7) {
    iVar3 = iVar5 * 5;
    iVar6 = param_2[2];
  }
  param_2[3] = iVar1;
  if (!bVar7) {
    iVar1 = iVar6 + iVar3 * 8;
  }
  param_2[4] = iVar4;
  if (!bVar7) {
    iVar3 = iVar1 + -0x28;
    bVar7 = iVar3 == 0;
  }
  if (!bVar7) {
    if (*(int *)(iVar1 + -0xc) == 0) {
      imp___aeabi_memcpy(iVar3,param_2 + 0x18,0x18);
      return;
    }
    iVar3 = imp_memcmp(iVar3,param_2 + 0x18,0x18);
    if (iVar3 == 0) {
      return;
    }
  }
  FUN_718f6aa0(param_2);
  return;
}


// =========================================================================
// Function: FUN_718fdd38
// Entry: 0x718fdd38 | Size: 48 bytes
// =========================================================================

int FUN_718fdd38(int param_1)

{
  imp___aeabi_memclr4(param_1,0x468);
  *(undefined4 *)(param_1 + 0x460) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x464) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 1;
  return param_1;
}


// =========================================================================
// Function: FUN_718fdd9c
// Entry: 0x718fdd9c | Size: 60 bytes
// =========================================================================

void FUN_718fdd9c(int param_1)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_718c8b14();
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_718c8b14();
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}


// =========================================================================
// Function: FUN_718fde28
// Entry: 0x718fde28 | Size: 332 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_718fde28(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_98 [8];
  undefined1 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined1 uStack_7c;
  undefined4 uStack_6c;
  undefined2 *puStack_68;
  undefined4 uStack_60;
  undefined4 uStack_54;
  undefined2 uStack_50;
  char acStack_4e [50];
  int iStack_1c;
  
  iStack_1c = _ext___stack_chk_guard;
  if (param_2 == 0) {
    imp___aeabi_memclr8(auStack_98,0x78);
    uStack_54 = 0x3f800000;
    uStack_50 = 0xffff;
    uStack_60 = 0x7f7fffff;
    uStack_90 = 1;
    uStack_80 = 1;
    uStack_7c = 1;
    uStack_84 = 1;
  }
  else {
    imp___aeabi_memcpy4(auStack_98,param_2,0x78);
    uVar2 = uStack_88;
    iVar1 = FUN_71ba2d30(uStack_88,0);
    if (iVar1 == 0) goto LAB_718fdec8;
  }
  uVar2 = 0x41500000;
  uStack_88 = 0x41500000;
LAB_718fdec8:
  if (acStack_4e[0] == '\0') {
    uVar2 = FUN_71ba17bc(uVar2);
    FUN_718c8bec(acStack_4e,0x28,s_ProggyClean_ttf___dpx_7006a44b,uVar2);
    uVar2 = uStack_88;
  }
  FUN_71ba13e0(uVar2,0x41500000);
  FUN_71ba17bc();
  uStack_6c = FUN_71ba1b94();
  uStack_50 = 0x85;
  puVar3 = &DAT_70087a6c;
  if (puStack_68 != (undefined2 *)0x0) {
    puVar3 = puStack_68;
  }
  FUN_718fe6dc(param_1,&DAT_70087a72,uVar2,auStack_98,puVar3);
  if (_ext___stack_chk_guard == iStack_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_718fe144
// Entry: 0x718fe144 | Size: 48 bytes
// =========================================================================

void FUN_718fe144(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x458);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_7191193c();
  }
                    /* WARNING: Could not recover jumptable at 0x718fe170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(param_1);
  return;
}


// =========================================================================
// Function: FUN_718fe1a8
// Entry: 0x718fe1a8 | Size: 232 bytes
// =========================================================================

void FUN_718fe1a8(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    pbVar5 = *(byte **)(param_1 + 0x14);
    if (pbVar5 == (byte *)0x0) {
      if (*(int *)(param_1 + 0x4c) == 0) {
        FUN_718fde28(param_1,0);
      }
      puVar1 = *(undefined4 **)(param_1 + 0x458);
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)FUN_7191193c();
      }
      (*(code *)*puVar1)(param_1);
      pbVar5 = *(byte **)(param_1 + 0x14);
      if (pbVar5 == (byte *)0x0) goto LAB_718fe25c;
    }
    puVar2 = (uint *)FUN_718c8a70(*(int *)(param_1 + 0x1c) * *(int *)(param_1 + 0x20) * 4);
    *(uint **)(param_1 + 0x18) = puVar2;
    iVar3 = *(int *)(param_1 + 0x20) * *(int *)(param_1 + 0x1c);
    if (0 < iVar3) {
      uVar4 = iVar3 + 1;
      do {
        uVar4 = uVar4 - 1;
        *puVar2 = (uint)*pbVar5 << 0x18 | 0xffffff;
        puVar2 = puVar2 + 1;
        pbVar5 = pbVar5 + 1;
      } while (1 < uVar4);
    }
  }
LAB_718fe25c:
  *param_2 = *(undefined4 *)(param_1 + 0x18);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x1c);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(param_1 + 0x20);
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 4;
  }
  return;
}


// =========================================================================
// Function: FUN_718fe2fc
// Entry: 0x718fe2fc | Size: 536 bytes
// =========================================================================

undefined4 FUN_718fe2fc(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (*(char *)(param_2 + 0xf) == '\0') {
    iVar1 = FUN_718c8a70(0x54);
    imp___aeabi_memclr4(iVar1,0x2c);
    *(undefined4 *)(iVar1 + 0x38) = 0x3f0000;
    *(undefined1 *)(iVar1 + 0x3e) = 0;
    *(undefined2 *)(iVar1 + 0x3c) = 0xffff;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x34) = 0;
    *(undefined2 *)(iVar1 + 0x50) = 0;
    *(undefined4 *)(iVar1 + 0x40) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0x44) = 0;
    *(undefined4 *)(iVar1 + 0x48) = 0;
    *(undefined4 *)(iVar1 + 0x4c) = 0;
    iVar2 = *(int *)(param_1 + 0x34);
    if (iVar2 == *(int *)(param_1 + 0x38)) {
      iVar5 = iVar2 + iVar2 / 2;
      if (iVar2 == 0) {
        iVar5 = 8;
      }
      if (iVar5 <= iVar2 + 1) {
        iVar5 = iVar2 + 1;
      }
      iVar3 = FUN_718c8a70(iVar5 << 2);
      if (*(int *)(param_1 + 0x3c) != 0) {
        imp___aeabi_memcpy(iVar3,*(int *)(param_1 + 0x3c),*(int *)(param_1 + 0x34) << 2);
        FUN_718c8b14(*(undefined4 *)(param_1 + 0x3c));
      }
      iVar2 = *(int *)(param_1 + 0x34);
      *(int *)(param_1 + 0x38) = iVar5;
      *(int *)(param_1 + 0x3c) = iVar3;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x3c);
    }
    *(int *)(iVar3 + iVar2 * 4) = iVar1;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  }
  iVar1 = *(int *)(param_1 + 0x4c);
  if (iVar1 == *(int *)(param_1 + 0x50)) {
    iVar3 = iVar1 + iVar1 / 2;
    if (iVar1 == 0) {
      iVar3 = 8;
    }
    if (iVar3 <= iVar1 + 1) {
      iVar3 = iVar1 + 1;
    }
    iVar2 = FUN_718c8a70(iVar3 * 0x78);
    if (*(int *)(param_1 + 0x54) != 0) {
      imp___aeabi_memcpy(iVar2,*(int *)(param_1 + 0x54),*(int *)(param_1 + 0x4c) * 0x78);
      FUN_718c8b14(*(undefined4 *)(param_1 + 0x54));
    }
    iVar1 = *(int *)(param_1 + 0x4c);
    *(int *)(param_1 + 0x50) = iVar3;
    *(int *)(param_1 + 0x54) = iVar2;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x54);
  }
  imp___aeabi_memcpy(iVar2 + iVar1 * 0x78,param_2,0x78);
  iVar1 = *(int *)(param_1 + 0x4c) + 1;
  *(int *)(param_1 + 0x4c) = iVar1;
  iVar2 = *(int *)(param_1 + 0x54) + iVar1 * 0x78;
  iVar1 = *(int *)(iVar2 + -4);
  if (iVar1 == 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x34) * 4 + -4);
    *(int *)(iVar2 + -4) = iVar1;
  }
  if (*(char *)(iVar2 + -0x70) == '\0') {
    uVar4 = FUN_718c8a70(*(undefined4 *)(iVar2 + -0x74));
    *(undefined4 *)(iVar2 + -0x78) = uVar4;
    *(undefined1 *)(iVar2 + -0x70) = 1;
    imp___aeabi_memcpy(uVar4,*param_2,*(undefined4 *)(iVar2 + -0x74));
    iVar1 = *(int *)(iVar2 + -4);
  }
  if (*(short *)(iVar1 + 0x3c) == -1) {
    *(undefined2 *)(iVar1 + 0x3c) = *(undefined2 *)(param_2 + 0x12);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_718c8b14();
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_718c8b14();
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return *(undefined4 *)(iVar2 + -4);
}


// =========================================================================
// Function: FUN_718fe698
// Entry: 0x718fe698 | Size: 12 bytes
// =========================================================================

undefined2 * FUN_718fe698(void)

{
  return &DAT_70087a6c;
}


// =========================================================================
// Function: FUN_718fe6dc
// Entry: 0x718fe6dc | Size: 280 bytes
// =========================================================================

undefined4 FUN_718fe6dc(undefined4 param_1,byte *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  int iVar10;
  
  iVar1 = imp_strlen(param_2);
  piVar2 = (int *)FUN_718c8a70(((uint)((ulonglong)((longlong)(iVar1 + 4) * 0x66666667) >> 0x21) -
                               (iVar1 + 4 >> 0x1f)) * 4);
  uVar3 = (uint)*param_2;
  if (uVar3 != 0) {
    pbVar5 = param_2 + 2;
    piVar6 = piVar2;
    do {
      iVar1 = -0x23;
      if (0x5b < pbVar5[1]) {
        iVar1 = -0x24;
      }
      sVar9 = -0x23;
      if (0x5b < pbVar5[2]) {
        sVar9 = -0x24;
      }
      iVar10 = -0x23;
      if (0x5b < *pbVar5) {
        iVar10 = -0x24;
      }
      iVar7 = -0x23;
      if (0x5b < pbVar5[-1]) {
        iVar7 = -0x24;
      }
      iVar8 = -0x23;
      if (0x5b < uVar3) {
        iVar8 = -0x24;
      }
      *piVar6 = ((((short)(sVar9 + (ushort)pbVar5[2]) * 0x55 + iVar1 + (uint)pbVar5[1]) * 0x55 +
                 iVar10 + (uint)*pbVar5) * 0x55 + iVar7 + (uint)pbVar5[-1]) * 0x55 + iVar8 + uVar3;
      uVar3 = (uint)pbVar5[3];
      pbVar5 = pbVar5 + 5;
      piVar6 = piVar6 + 1;
    } while (uVar3 != 0);
  }
  uVar4 = FUN_718fea18(param_1,piVar2);
  FUN_718c8b14(piVar2);
  return uVar4;
}


// =========================================================================
// Function: FUN_718fe87c
// Entry: 0x718fe87c | Size: 212 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_718fe87c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,int param_6)

{
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 auStack_98 [8];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  int iStack_70;
  undefined4 uStack_68;
  undefined4 uStack_5c;
  undefined2 uStack_58;
  int iStack_24;
  
  iStack_24 = _ext___stack_chk_guard;
  if (param_5 == 0) {
    imp___aeabi_memclr8(auStack_98,0x70);
    uStack_5c = 0x3f800000;
    uStack_8c = 3;
    uStack_68 = 0x7f7fffff;
    uStack_88 = 1;
    auStack_98[0] = 1;
    uStack_58 = 0xffff;
  }
  else {
    imp___aeabi_memcpy4(&uStack_a0,param_5,0x78);
  }
  if (param_6 != 0) {
    iStack_70 = param_6;
  }
  uStack_a0 = param_2;
  uStack_9c = param_3;
  uStack_90 = param_4;
  FUN_718fe2fc(param_1,&uStack_a0);
  if (_ext___stack_chk_guard != iStack_24) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail();
  }
  return;
}


// =========================================================================
// Function: FUN_718fea18
// Entry: 0x718fea18 | Size: 1616 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_718fea18(undefined4 param_1,uint *param_2,undefined4 param_3,undefined4 param_4,int param_5
                 ,int param_6)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  int iStack_ec;
  undefined4 uStack_e8;
  undefined1 auStack_e0 [48];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined3 uStack_a8;
  undefined1 *puStack_a4;
  uint uStack_a0;
  undefined1 uStack_9c;
  undefined4 uStack_9b;
  undefined3 uStack_97;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  int iStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined2 uStack_5c;
  undefined1 auStack_5a [46];
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  uVar6 = param_2[2];
  puVar7 = (undefined1 *)FUN_718c8a70();
  uVar8 = *param_2;
  if (((uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18)
       == 0x57bc0000) &&
     (uVar8 = param_2[1],
     (((uVar8 & 0xff) == 0 && (uVar8 >> 8 & 0xff) == 0) && (uVar8 >> 0x10 & 0xff) == 0) &&
     uVar8 >> 0x18 == 0)) {
    uVar8 = param_2[2];
    puVar15 = puVar7 + (uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
                       uVar8 >> 0x18);
    puVar9 = puVar15 + 1;
    puVar10 = param_2 + 4;
    puVar17 = puVar7;
    DAT_712042d0 = param_2;
    DAT_712042d4 = puVar15;
    DAT_712042d8 = puVar7;
    DAT_712042dc = puVar7;
    do {
      bVar2 = (byte)*puVar10;
      uVar8 = (uint)bVar2;
      if (uVar8 < 0x20) {
        if (uVar8 < 0x18) {
          if (uVar8 < 0x10) {
            if (uVar8 < 8) {
              if (uVar8 == 4) {
                iVar12 = (((uint)(ushort)puVar10[1] << 0x18 |
                          (uint)(ushort)((ushort)puVar10[1] >> 8) << 0x10) >> 0x10) + 1;
                puVar16 = puVar17 + iVar12;
                if (puVar17 + iVar12 <= puVar15) {
                  bVar2 = *(byte *)((int)puVar10 + 1);
                  bVar1 = *(byte *)((int)puVar10 + 3);
                  bVar3 = *(byte *)((int)puVar10 + 2);
                  puVar16 = puVar9;
                  if (puVar7 <= puVar17 + ~((uint)bVar1 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8)) {
                    puVar16 = puVar17;
                    do {
                      iVar12 = iVar12 + -1;
                      *puVar16 = puVar16[~((uint)bVar1 + (uint)bVar3 * 0x100) +
                                         (uint)bVar2 * -0x10000];
                      puVar16 = puVar16 + 1;
                    } while (iVar12 != 0);
                  }
                }
                puVar11 = (uint *)((int)puVar10 + 6);
                DAT_712042dc = puVar16;
                goto LAB_718fec74;
              }
              if (uVar8 == 6) {
                iVar12 = (byte)puVar10[1] + 1;
                puVar16 = puVar17 + iVar12;
                if (puVar17 + iVar12 <= puVar15) {
                  bVar2 = *(byte *)((int)puVar10 + 1);
                  bVar1 = *(byte *)((int)puVar10 + 3);
                  bVar3 = *(byte *)((int)puVar10 + 2);
                  puVar16 = puVar9;
                  if (puVar7 <= puVar17 + ~((uint)bVar1 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8)) {
                    puVar16 = puVar17;
                    do {
                      iVar12 = iVar12 + -1;
                      *puVar16 = puVar16[~((uint)bVar1 + (uint)bVar3 * 0x100) +
                                         (uint)bVar2 * -0x10000];
                      puVar16 = puVar16 + 1;
                    } while (iVar12 != 0);
                  }
                }
                goto LAB_718fefe0;
              }
              if (uVar8 != 7) break;
              uVar4 = *(ushort *)((int)puVar10 + 1);
              iVar13 = 4;
              uVar8 = (uVar4 & 0xff) << 8 | (uint)(uVar4 >> 8);
              puVar17 = puVar17 + (((uint)uVar4 << 0x18 | (uint)(uVar4 >> 8) << 0x10) >> 0x10) + 1;
              puVar16 = puVar17;
              if ((puVar17 <= puVar15) && (puVar16 = puVar9, param_2 <= (uint *)((int)puVar10 + 3)))
              {
                imp___aeabi_memcpy();
                uVar8 = (*(ushort *)((int)puVar10 + 1) & 0xff) << 8 |
                        (uint)(*(ushort *)((int)puVar10 + 1) >> 8);
                puVar16 = puVar17;
              }
            }
            else {
              uVar8 = (uint)CONCAT11(bVar2,*(byte *)((int)puVar10 + 1));
              iVar12 = uVar8 - 0x7ff;
              if (puVar17 + iVar12 <= puVar15) {
                iVar13 = -0x7fd;
                puVar16 = puVar9;
                if ((uint *)((int)puVar10 + 2) < param_2) goto LAB_718fef60;
                imp___aeabi_memcpy();
                uVar8 = ((ushort)*puVar10 & 0xff) << 8 | (uint)(ushort)((ushort)*puVar10 >> 8);
              }
              iVar13 = -0x7fd;
              puVar16 = puVar17 + iVar12;
            }
LAB_718fef60:
            puVar11 = (uint *)((int)puVar10 + iVar13 + uVar8);
            DAT_712042dc = puVar16;
            if (puVar11 == puVar10) break;
          }
          else {
            iVar12 = (((uint)*(ushort *)((int)puVar10 + 3) << 0x18 |
                      (uint)(*(ushort *)((int)puVar10 + 3) >> 8) << 0x10) >> 0x10) + 1;
            puVar16 = puVar17 + iVar12;
            if (puVar17 + iVar12 <= puVar15) {
              bVar2 = *(byte *)((int)puVar10 + 2);
              bVar1 = *(byte *)((int)puVar10 + 1);
              puVar16 = puVar9;
              if (puVar7 <= puVar17 + (0xfffff - ((uint)bVar2 | uVar8 << 0x10 | (uint)bVar1 << 8)))
              {
                puVar16 = puVar17;
                do {
                  iVar12 = iVar12 + -1;
                  *puVar16 = puVar16[(0xfffff - (uint)bVar2) + (uint)bVar1 * -0x100 +
                                     uVar8 * -0x10000];
                  puVar16 = puVar16 + 1;
                } while (iVar12 != 0);
              }
            }
LAB_718fefe0:
            puVar11 = (uint *)((int)puVar10 + 5);
            DAT_712042dc = puVar16;
          }
        }
        else {
          iVar12 = *(byte *)((int)puVar10 + 3) + 1;
          puVar16 = puVar17 + iVar12;
          if (puVar17 + iVar12 <= puVar15) {
            bVar2 = *(byte *)((int)puVar10 + 2);
            bVar1 = *(byte *)((int)puVar10 + 1);
            puVar16 = puVar9;
            if (puVar7 <= puVar17 + (0x17ffff - ((uint)bVar2 | uVar8 << 0x10 | (uint)bVar1 << 8))) {
              do {
                iVar12 = iVar12 + -1;
                *puVar17 = puVar17[((uint)bVar1 * -0x100 - (uint)bVar2) + uVar8 * -0x10000 +
                                   0x17ffff];
                puVar17 = puVar17 + 1;
                puVar16 = puVar17;
              } while (iVar12 != 0);
            }
          }
          puVar11 = puVar10 + 1;
          DAT_712042dc = puVar16;
        }
      }
      else if ((char)bVar2 < '\0') {
        iVar12 = uVar8 - 0x7f;
        puVar16 = puVar17 + iVar12;
        puVar5 = puVar16;
        if ((puVar16 <= puVar15) &&
           (bVar2 = *(byte *)((int)puVar10 + 1), puVar16 = puVar9, puVar5 = puVar9,
           puVar7 <= puVar17 + ~(uint)bVar2)) {
          for (; puVar16 = puVar17, puVar5 = DAT_712042dc, iVar12 != 0; iVar12 = iVar12 + -1) {
            *puVar17 = puVar17[~(uint)bVar2];
            puVar17 = puVar17 + 1;
            DAT_712042dc = puVar17;
          }
        }
        DAT_712042dc = puVar5;
        puVar11 = (uint *)((int)puVar10 + 2);
      }
      else {
        if (uVar8 < 0x40) {
          iVar13 = -0x1e;
          puVar17 = puVar17 + (uVar8 - 0x1f);
          puVar16 = puVar17;
          if ((puVar17 <= puVar15) && (puVar16 = puVar9, param_2 <= (uint *)((int)puVar10 + 1))) {
            imp___aeabi_memcpy();
            uVar8 = (uint)(byte)*puVar10;
            puVar16 = puVar17;
          }
          goto LAB_718fef60;
        }
        iVar12 = *(byte *)((int)puVar10 + 2) + 1;
        puVar16 = puVar17 + iVar12;
        if ((puVar17 + iVar12 <= puVar15) &&
           (iVar13 = 0x3fff - (uint)CONCAT11(bVar2,*(byte *)((int)puVar10 + 1)), puVar16 = puVar9,
           puVar7 <= puVar17 + iVar13)) {
          do {
            iVar12 = iVar12 + -1;
            *puVar17 = puVar17[iVar13];
            puVar16 = puVar17 + 1;
            puVar17 = puVar16;
          } while (iVar12 != 0);
        }
        puVar11 = (uint *)((int)puVar10 + 3);
        DAT_712042dc = puVar16;
      }
LAB_718fec74:
      puVar10 = puVar11;
      puVar17 = puVar16;
    } while (puVar16 <= puVar15);
  }
  if (param_5 == 0) {
    uVar14 = 0;
    uStack_a8 = 0;
    uStack_ac = 0;
    uStack_b0 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    uStack_f8 = 0;
    uStack_f4 = 0;
    uStack_f0 = 0;
    iStack_ec = 0;
    uStack_e8 = 0;
    imp___aeabi_memclr8(auStack_e0,0x2e);
    uStack_5c = 0xffff;
    uStack_60 = 0x3f800000;
    uStack_6c = 0x7f7fffff;
    uStack_8c = 1;
    uStack_90 = 3;
    uStack_64 = 0;
  }
  else {
    uStack_b0 = *(undefined4 *)(param_5 + 9);
    uStack_90 = *(undefined4 *)(param_5 + 0x14);
    uStack_8c = *(undefined4 *)(param_5 + 0x18);
    uStack_ac = *(undefined4 *)(param_5 + 0xd);
    uStack_a8 = (undefined3)((uint)*(undefined4 *)(param_5 + 0x10) >> 8);
    uStack_100 = *(undefined4 *)(param_5 + 0x1c);
    uStack_fc = *(undefined4 *)(param_5 + 0x20);
    uStack_f8 = *(undefined4 *)(param_5 + 0x24);
    uStack_f4 = *(undefined4 *)(param_5 + 0x28);
    uStack_f0 = *(undefined4 *)(param_5 + 0x2c);
    iStack_ec = *(int *)(param_5 + 0x30);
    uStack_e8 = *(undefined4 *)(param_5 + 0x34);
    uStack_6c = *(undefined4 *)(param_5 + 0x38);
    uVar14 = *(undefined4 *)(param_5 + 0x3c);
    uStack_64 = *(undefined4 *)(param_5 + 0x40);
    uStack_60 = *(undefined4 *)(param_5 + 0x44);
    uStack_5c = *(undefined2 *)(param_5 + 0x48);
    imp___aeabi_memcpy(auStack_e0,param_5 + 0x4a,0x2e,uStack_f4,uStack_8c);
  }
  uStack_9c = 1;
  uStack_9b = uStack_b0;
  uStack_97 = (undefined3)uStack_ac;
  uStack_88 = uStack_100;
  uStack_84 = uStack_fc;
  uStack_80 = uStack_f8;
  uStack_7c = uStack_f4;
  uStack_78 = uStack_f0;
  iStack_74 = iStack_ec;
  uStack_70 = uStack_e8;
  uStack_68 = uVar14;
  imp___aeabi_memcpy(auStack_5a,auStack_e0,0x2e);
  if (param_6 != 0) {
    iStack_74 = param_6;
  }
  puStack_a4 = puVar7;
  uStack_a0 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
              uVar6 >> 0x18;
  uStack_94 = param_4;
  FUN_718fe2fc(param_1,&puStack_a4);
  if (_ext___stack_chk_guard == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_718ff23c
// Entry: 0x718ff23c | Size: 224 bytes
// =========================================================================

void FUN_718ff23c(int param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_34 = 0;
  uStack_38 = 0;
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 == *(int *)(param_1 + 0x44)) {
    iVar4 = iVar1 + iVar1 / 2;
    if (iVar1 == 0) {
      iVar4 = 8;
    }
    if (iVar4 <= iVar1 + 1) {
      iVar4 = iVar1 + 1;
    }
    iVar2 = FUN_718c8a70(iVar4 * 0x1c);
    if (*(int *)(param_1 + 0x48) != 0) {
      imp___aeabi_memcpy(iVar2,*(int *)(param_1 + 0x48),*(int *)(param_1 + 0x40) * 0x1c);
      FUN_718c8b14(*(undefined4 *)(param_1 + 0x48));
    }
    iVar1 = *(int *)(param_1 + 0x40);
    *(int *)(param_1 + 0x44) = iVar4;
    *(int *)(param_1 + 0x48) = iVar2;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x48);
  }
  puVar3 = (undefined2 *)(iVar2 + iVar1 * 0x1c);
  *puVar3 = param_2;
  *(undefined4 *)(puVar3 + 2) = 0xffffffff;
  puVar3[1] = param_3;
  imp___aeabi_memcpy(puVar3 + 4,&uStack_38,0x14);
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  return;
}


// =========================================================================
// Function: FUN_718ff3a4
// Entry: 0x718ff3a4 | Size: 240 bytes
// =========================================================================

void FUN_718ff3a4(int param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
                 undefined2 param_5,undefined4 param_6,undefined4 *param_7)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar6 = *param_7;
  uVar5 = param_7[1];
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 == *(int *)(param_1 + 0x44)) {
    iVar4 = iVar1 + iVar1 / 2;
    if (iVar1 == 0) {
      iVar4 = 8;
    }
    if (iVar4 <= iVar1 + 1) {
      iVar4 = iVar1 + 1;
    }
    iVar2 = FUN_718c8a70(iVar4 * 0x1c);
    if (*(int *)(param_1 + 0x48) != 0) {
      imp___aeabi_memcpy(iVar2,*(int *)(param_1 + 0x48),*(int *)(param_1 + 0x40) * 0x1c);
      FUN_718c8b14(*(undefined4 *)(param_1 + 0x48));
    }
    *(int *)(param_1 + 0x44) = iVar4;
    iVar1 = *(int *)(param_1 + 0x40);
    *(int *)(param_1 + 0x48) = iVar2;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x48);
  }
  puVar3 = (undefined2 *)(iVar2 + iVar1 * 0x1c);
  *puVar3 = param_4;
  *(undefined4 *)(puVar3 + 10) = uVar5;
  *(undefined4 *)(puVar3 + 8) = uVar6;
  *(undefined4 *)(puVar3 + 0xc) = param_2;
  *(undefined4 *)(puVar3 + 6) = param_6;
  *(undefined4 *)(puVar3 + 4) = param_3;
  *(undefined4 *)(puVar3 + 2) = 0xffffffff;
  puVar3[1] = param_5;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  return;
}


// =========================================================================
// Function: FUN_718ff500
// Entry: 0x718ff500 | Size: 392 bytes
// =========================================================================

undefined4
FUN_718ff500(int param_1,uint param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5,
            undefined4 *param_6)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  
  uVar7 = 0;
  if ((param_2 < 9) && ((*(byte *)(param_1 + 4) & 2) == 0)) {
    puVar9 = (undefined4 *)(param_1 + 0x24);
    iVar3 = *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x460) * 0x1c;
    uVar1 = *(undefined2 *)(iVar3 + 4);
    uVar2 = *(undefined2 *)(iVar3 + 6);
    iVar3 = param_2 * 0x18;
    uVar10 = *(undefined4 *)(&DAT_70087994 + iVar3);
    uVar6 = *(undefined4 *)(&DAT_700879a0 + iVar3);
    uVar7 = *(undefined4 *)(&DAT_700879a4 + iVar3);
    uVar5 = *(undefined4 *)(&DAT_70087998 + iVar3);
    uVar8 = *(undefined4 *)(&DAT_7008799c + iVar3);
    *param_4 = uVar8;
    param_4[1] = uVar6;
    uVar4 = *(undefined4 *)(&DAT_700879a8 + iVar3);
    *param_3 = uVar7;
    param_3[1] = uVar4;
    uVar7 = FUN_71ba1e0c(uVar2);
    uVar7 = FUN_71ba0b38(uVar5,uVar7);
    uVar5 = *puVar9;
    uVar4 = FUN_71ba21e8(uVar7,*(undefined4 *)(param_1 + 0x28));
    param_5[1] = uVar4;
    uVar4 = FUN_71ba1e0c(uVar1);
    uVar4 = FUN_71ba0b38(uVar10,uVar4);
    uVar5 = FUN_71ba21e8(uVar4,uVar5);
    *param_5 = uVar5;
    uVar5 = FUN_71ba0b38(uVar7,uVar6);
    uVar10 = *puVar9;
    uVar6 = FUN_71ba21e8(uVar5,*(undefined4 *)(param_1 + 0x28));
    param_5[3] = uVar6;
    uVar6 = FUN_71ba0b38(uVar4,uVar8);
    uVar6 = FUN_71ba21e8(uVar6,uVar10);
    param_5[2] = uVar6;
    uVar6 = *puVar9;
    uVar7 = FUN_71ba21e8(uVar7,*(undefined4 *)(param_1 + 0x28));
    param_6[1] = uVar7;
    uVar7 = FUN_71ba0b38(uVar4,0x42da0000);
    uVar4 = FUN_71ba21e8(uVar7,uVar6);
    *param_6 = uVar4;
    uVar6 = *puVar9;
    uVar4 = FUN_71ba21e8(uVar5,*(undefined4 *)(param_1 + 0x28));
    param_6[3] = uVar4;
    uVar7 = FUN_71ba0b38(uVar7,uVar8);
    uVar4 = FUN_71ba21e8(uVar7,uVar6);
    uVar7 = 1;
    param_6[2] = uVar4;
  }
  return uVar7;
}


// =========================================================================
// Function: FUN_718ff880
// Entry: 0x718ff880 | Size: 68 bytes
// =========================================================================

void FUN_718ff880(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    uVar1 = FUN_71ba1e0c(iVar3);
    FUN_71ba21e8(uVar1,param_2);
    uVar2 = FUN_71ba1910();
    if (0xfe < uVar2) {
      uVar2 = 0xff;
    }
    *(char *)(param_1 + iVar3) = (char)uVar2;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x100);
  return;
}


// =========================================================================
// Function: FUN_718ff930
// Entry: 0x718ff930 | Size: 24 bytes
// =========================================================================

void FUN_718ff930(void)

{
  DAT_712042cc = FUN_718ff9a0;
  return;
}


// =========================================================================
// Function: FUN_718ff9a0
// Entry: 0x718ff9a0 | Size: 16040 bytes
// =========================================================================

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_718ff9a0(int param_1)

{
  byte *pbVar1;
  ushort *puVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  ushort uVar7;
  ushort uVar8;
  short sVar9;
  short sVar10;
  ushort uVar11;
  ushort uVar12;
  undefined1 uVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  uint *puVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  int iVar21;
  undefined1 *puVar22;
  int iVar23;
  int iVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int ******ppppppiVar31;
  int ******ppppppiVar32;
  int ******ppppppiVar33;
  int ******ppppppiVar34;
  int ******ppppppiVar35;
  int ******ppppppiVar36;
  int ******ppppppiVar37;
  int *piVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  bool bVar42;
  undefined4 uVar43;
  int iVar44;
  short *psVar45;
  short *psVar46;
  int iVar47;
  int iVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 *puVar51;
  uint uVar52;
  int *piVar53;
  uint uVar54;
  byte *pbVar55;
  uint uVar56;
  short *psVar57;
  int iVar58;
  int iVar59;
  undefined1 *puVar60;
  bool bVar61;
  int iVar62;
  uint uVar63;
  int iVar64;
  undefined2 *puVar65;
  uint uVar66;
  int iVar67;
  int *******pppppppiVar68;
  int ******ppppppiVar69;
  int *piVar70;
  uint uVar71;
  int iVar72;
  undefined4 uVar73;
  uint uVar74;
  int iVar75;
  int iVar76;
  int ******ppppppiVar77;
  int *******pppppppiVar78;
  uint *puVar79;
  uint uVar80;
  uint uVar81;
  undefined4 *puVar82;
  int *******pppppppiVar83;
  int iVar84;
  uint uVar85;
  uint uVar86;
  int iVar87;
  undefined4 *puVar88;
  undefined4 uVar89;
  uint uVar90;
  ushort *puVar91;
  int iVar92;
  int iVar93;
  int iVar94;
  uint uVar95;
  int *piVar96;
  uint uVar97;
  short *psVar98;
  undefined4 *puVar99;
  uint uVar100;
  bool bVar101;
  int iStack_374;
  int iStack_33c;
  undefined4 *puStack_32c;
  int iStack_328;
  uint uStack_310;
  uint uStack_30c;
  undefined1 *puStack_300;
  int iStack_2f8;
  int *piStack_2e0;
  int iStack_2d4;
  int *******pppppppiStack_2b0;
  uint uStack_29c;
  int ******ppppppiStack_294;
  int iStack_288;
  int *piStack_280;
  int ******ppppppiStack_278;
  int iStack_274;
  int iStack_268;
  int ******ppppppiStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  int *******pppppppiStack_254;
  undefined4 uStack_250;
  uint uStack_24c;
  undefined1 auStack_248 [4];
  undefined1 auStack_244 [4];
  uint uStack_240;
  short *psStack_23c;
  short *psStack_238;
  int iStack_234;
  int iStack_230;
  short *psStack_22c;
  short *psStack_228;
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  if (0x7fffffff < *(uint *)(param_1 + 0x460)) {
    if ((*(byte *)(param_1 + 4) & 2) == 0) {
      uVar43 = 0xd9;
      uVar50 = 0x1b;
    }
    else {
      uVar43 = 2;
      uVar50 = 2;
    }
    uVar43 = FUN_718ff23c(param_1,uVar43,uVar50);
    *(undefined4 *)(param_1 + 0x460) = uVar43;
  }
  if ((0x7fffffff < *(uint *)(param_1 + 0x464)) && ((*(byte *)(param_1 + 4) & 4) == 0)) {
    uVar43 = FUN_718ff23c(param_1,0x41,0x40);
    *(undefined4 *)(param_1 + 0x464) = uVar43;
  }
  *(int *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_718c8b14();
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_718c8b14();
  }
  iStack_33c = 0;
  uVar71 = *(uint *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  iStack_2f8 = 0;
  if (0 < (int)uVar71) {
    uVar14 = uVar71;
    if (uVar71 < 9) {
      uVar14 = 8;
    }
    iStack_2f8 = FUN_718c8a70(uVar14 * 0xc4);
  }
  uVar14 = *(uint *)(param_1 + 0x34);
  if (0 < (int)uVar14) {
    uVar15 = uVar14;
    if (uVar14 < 9) {
      uVar15 = 8;
    }
    iStack_33c = FUN_718c8a70(uVar15 * 0x18);
  }
  imp___aeabi_memclr(iStack_2f8,uVar71 * 0xc4);
  imp___aeabi_memclr(iStack_33c,uVar14 * 0x18);
  if (0 < *(int *)(param_1 + 0x4c)) {
    iVar62 = 0;
LAB_718ffb28:
    iVar72 = iVar62 * 0xc4 + iStack_2f8;
    iVar44 = *(int *)(param_1 + 0x54);
    *(undefined4 *)(iVar72 + 0xa0) = 0xffffffff;
    if (0 < *(int *)(param_1 + 0x34)) {
      puVar51 = (undefined4 *)(iVar44 + iVar62 * 0x78);
      iVar44 = 0;
      while (iVar84 = *(int *)(*(int *)(param_1 + 0x3c) + iVar44 * 4), puVar51[0x1d] != iVar84) {
        iVar44 = iVar44 + 1;
        if ((*(int *)(param_1 + 0x34) <= iVar44) || (puVar51[0x1d] == iVar84)) goto LAB_71903838;
      }
      uVar15 = 0xffffffff;
      *(int *)(iVar72 + 0xa0) = iVar44;
      pbVar55 = (byte *)*puVar51;
      iVar44 = puVar51[3];
      bVar3 = *pbVar55;
      if (bVar3 < 0x4f) {
        if (bVar3 == 0) {
          if (pbVar55[1] == 1) goto LAB_718ffc14;
        }
        else {
          bVar101 = bVar3 == 0x31;
          if (bVar101) {
            bVar3 = pbVar55[1];
          }
          if (bVar101 && bVar3 == 0) {
LAB_718ffc14:
            if ((pbVar55[2] == 0) && (pbVar55[3] == 0)) {
LAB_718ffcac:
              uVar15 = 0;
              if (iVar44 != 0) {
                uVar15 = 0xffffffff;
              }
            }
          }
        }
      }
      else if (bVar3 == 0x4f) {
        bVar3 = pbVar55[1];
        bVar101 = bVar3 == 0x54;
        if (bVar101) {
          bVar3 = pbVar55[2];
        }
        if ((bVar101 && bVar3 == 0x54) && (pbVar55[3] == 0x4f)) goto LAB_718ffcac;
      }
      else if (bVar3 == 0x74) {
        bVar3 = pbVar55[1];
        if (bVar3 == 0x72) {
          bVar3 = pbVar55[2];
          bVar101 = bVar3 == 0x75;
          if (bVar101) {
            bVar3 = pbVar55[3];
          }
          if (bVar101 && bVar3 == 0x65) goto LAB_718ffcac;
        }
        else if (bVar3 == 0x74) {
          bVar3 = pbVar55[2];
          bVar101 = bVar3 == 99;
          if (bVar101) {
            bVar3 = pbVar55[3];
          }
          if (((bVar101 && bVar3 == 0x66) &&
              (uVar85 = *(uint *)(pbVar55 + 4),
              uVar85 = uVar85 << 0x18 | (uVar85 >> 8 & 0xff) << 0x10 | (uVar85 >> 0x10 & 0xff) << 8
                       | uVar85 >> 0x18, uVar85 == 0x20000 || uVar85 == 0x10000)) &&
             (uVar85 = *(uint *)(pbVar55 + 8),
             iVar44 < (int)(uVar85 << 0x18 | (uVar85 >> 8 & 0xff) << 0x10 |
                            (uVar85 >> 0x10 & 0xff) << 8 | uVar85 >> 0x18))) {
            uVar15 = *(uint *)(pbVar55 + iVar44 * 4 + 0xc);
            uVar15 = uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
                     uVar15 >> 0x18;
          }
        }
        else {
          bVar101 = bVar3 == 0x79;
          if (bVar101) {
            bVar3 = pbVar55[2];
          }
          if ((bVar101 && bVar3 == 0x70) && (pbVar55[3] == 0x31)) goto LAB_718ffcac;
        }
      }
      uVar85 = 0;
      *(int *)(iVar72 + 0x34) = 0;
      uVar90 = 0;
      uVar100 = 0;
      *(byte **)(iVar72 + 4) = pbVar55;
      *(undefined4 *)(iVar72 + 0x38) = 0;
      *(undefined4 *)(iVar72 + 0x3c) = 0;
      *(uint *)(iVar72 + 8) = uVar15;
      if (CONCAT11(pbVar55[uVar15 + 4],pbVar55[uVar15 + 5]) != 0) {
        iVar84 = 0;
        iVar44 = (uint)pbVar55[uVar15 + 5] + (uint)pbVar55[uVar15 + 4] * 0x100;
        do {
          iVar64 = iVar84 * -0x10 + uVar15;
          if (pbVar55[iVar64 + 0xc] == 99) {
            bVar3 = pbVar55[iVar64 + 0xd];
            bVar101 = bVar3 == 0x6d;
            if (bVar101) {
              bVar3 = pbVar55[iVar64 + 0xe];
            }
            if ((bVar101 && bVar3 == 0x61) && (pbVar55[iVar64 + 0xf] == 0x70)) {
              uVar90 = *(uint *)(pbVar55 + iVar64 + 0x14);
              uVar90 = uVar90 << 0x18 | (uVar90 >> 8 & 0xff) << 0x10 | (uVar90 >> 0x10 & 0xff) << 8
                       | uVar90 >> 0x18;
              goto LAB_718ffd54;
            }
          }
          iVar84 = iVar84 + -1;
        } while (-iVar84 != iVar44);
        uVar90 = 0;
LAB_718ffd54:
        iVar84 = 0;
        do {
          iVar64 = iVar84 * -0x10 + uVar15;
          bVar3 = pbVar55[iVar64 + 0xc];
          bVar101 = bVar3 == 0x6c;
          if (bVar101) {
            bVar3 = pbVar55[iVar64 + 0xd];
          }
          if (bVar101 && bVar3 == 0x6f) {
            bVar3 = pbVar55[iVar64 + 0xe];
            bVar101 = bVar3 == 99;
            if (bVar101) {
              bVar3 = pbVar55[iVar64 + 0xf];
            }
            if (bVar101 && bVar3 == 0x61) {
              uVar100 = *(uint *)(pbVar55 + iVar64 + 0x14);
              uVar100 = uVar100 << 0x18 | (uVar100 >> 8 & 0xff) << 0x10 |
                        (uVar100 >> 0x10 & 0xff) << 8 | uVar100 >> 0x18;
              goto LAB_718ffda4;
            }
          }
          iVar84 = iVar84 + -1;
        } while (-iVar84 != iVar44);
        uVar100 = 0;
      }
LAB_718ffda4:
      *(uint *)(iVar72 + 0x10) = uVar100;
      if (CONCAT11(pbVar55[uVar15 + 4],pbVar55[uVar15 + 5]) != 0) {
        iVar44 = 0;
        do {
          iVar84 = iVar44 * -0x10 + uVar15;
          bVar3 = pbVar55[iVar84 + 0xc];
          bVar101 = bVar3 == 0x68;
          if (bVar101) {
            bVar3 = pbVar55[iVar84 + 0xd];
          }
          if (bVar101 && bVar3 == 0x65) {
            bVar3 = pbVar55[iVar84 + 0xe];
            bVar101 = bVar3 == 0x61;
            if (bVar101) {
              bVar3 = pbVar55[iVar84 + 0xf];
            }
            if (bVar101 && bVar3 == 100) {
              uVar85 = *(uint *)(pbVar55 + iVar84 + 0x14);
              uVar85 = uVar85 << 0x18 | (uVar85 >> 8 & 0xff) << 0x10 | (uVar85 >> 0x10 & 0xff) << 8
                       | uVar85 >> 0x18;
              goto LAB_718ffe14;
            }
          }
          iVar44 = iVar44 + -1;
        } while (-iVar44 != (uint)pbVar55[uVar15 + 5] + (uint)pbVar55[uVar15 + 4] * 0x100);
        uVar85 = 0;
      }
LAB_718ffe14:
      *(uint *)(iVar72 + 0x14) = uVar85;
      uVar56 = 0;
      uVar97 = 0;
      uVar52 = 0;
      if (CONCAT11(pbVar55[uVar15 + 4],pbVar55[uVar15 + 5]) != 0) {
        iVar84 = 0;
        iVar44 = (uint)pbVar55[uVar15 + 5] + (uint)pbVar55[uVar15 + 4] * 0x100;
        uVar52 = -iVar44;
        do {
          iVar64 = iVar84 * -0x10 + uVar15;
          bVar3 = pbVar55[iVar64 + 0xc];
          bVar101 = bVar3 == 0x67;
          if (bVar101) {
            bVar3 = pbVar55[iVar64 + 0xd];
          }
          if (bVar101 && bVar3 == 0x6c) {
            bVar3 = pbVar55[iVar64 + 0xe];
            bVar101 = bVar3 == 0x79;
            if (bVar101) {
              bVar3 = pbVar55[iVar64 + 0xf];
            }
            if (bVar101 && bVar3 == 0x66) {
              uVar97 = *(uint *)(pbVar55 + iVar64 + 0x14);
              uVar97 = uVar97 << 0x18 | (uVar97 >> 8 & 0xff) << 0x10 | (uVar97 >> 0x10 & 0xff) << 8
                       | uVar97 >> 0x18;
              goto LAB_718ffe90;
            }
          }
          iVar84 = iVar84 + -1;
        } while (-iVar84 != iVar44);
        uVar97 = 0;
      }
LAB_718ffe90:
      *(uint *)(iVar72 + 0x18) = uVar97;
      if (CONCAT11(pbVar55[uVar15 + 4],pbVar55[uVar15 + 5]) != 0) {
        iVar44 = 0;
        do {
          iVar84 = iVar44 * -0x10 + uVar15;
          bVar3 = pbVar55[iVar84 + 0xc];
          bVar101 = bVar3 == 0x68;
          if (bVar101) {
            bVar3 = pbVar55[iVar84 + 0xd];
          }
          if (bVar101 && bVar3 == 0x68) {
            bVar3 = pbVar55[iVar84 + 0xe];
            bVar101 = bVar3 == 0x65;
            if (bVar101) {
              bVar3 = pbVar55[iVar84 + 0xf];
            }
            if (bVar101 && bVar3 == 0x61) {
              uVar56 = *(uint *)(pbVar55 + iVar84 + 0x14);
              uVar56 = uVar56 << 0x18 | (uVar56 >> 8 & 0xff) << 0x10 | (uVar56 >> 0x10 & 0xff) << 8
                       | uVar56 >> 0x18;
              goto LAB_718fff04;
            }
          }
          iVar44 = iVar44 + -1;
        } while (-iVar44 != (uint)pbVar55[uVar15 + 5] + (uint)pbVar55[uVar15 + 4] * 0x100);
        uVar56 = 0;
      }
LAB_718fff04:
      *(uint *)(iVar72 + 0x1c) = uVar56;
      uVar86 = 0;
      uVar63 = 0;
      if (CONCAT11(pbVar55[uVar15 + 4],pbVar55[uVar15 + 5]) != 0) {
        iVar44 = 0;
        do {
          iVar84 = iVar44 * -0x10 + uVar15;
          if (pbVar55[iVar84 + 0xc] == 0x68) {
            uVar52 = (uint)pbVar55[iVar84 + 0xd];
          }
          if (pbVar55[iVar84 + 0xc] == 0x68 && uVar52 == 0x6d) {
            uVar52 = (uint)pbVar55[iVar84 + 0xe];
            bVar101 = uVar52 == 0x74;
            if (bVar101) {
              uVar52 = (uint)pbVar55[iVar84 + 0xf];
            }
            if (bVar101 && uVar52 == 0x78) {
              uVar52 = *(uint *)(pbVar55 + iVar84 + 0x14);
              uVar86 = uVar52 << 0x18 | (uVar52 >> 8 & 0xff) << 0x10 | (uVar52 >> 0x10 & 0xff) << 8
                       | uVar52 >> 0x18;
              goto LAB_718fff7c;
            }
          }
          iVar44 = iVar44 + -1;
        } while (-iVar44 != (uint)pbVar55[uVar15 + 5] + (uint)pbVar55[uVar15 + 4] * 0x100);
        uVar86 = 0;
      }
LAB_718fff7c:
      *(uint *)(iVar72 + 0x20) = uVar86;
      if (CONCAT11(pbVar55[uVar15 + 4],pbVar55[uVar15 + 5]) != 0) {
        iVar44 = 0;
        do {
          iVar84 = iVar44 * -0x10 + uVar15;
          bVar3 = pbVar55[iVar84 + 0xc];
          bVar101 = bVar3 == 0x6b;
          if (bVar101) {
            bVar3 = pbVar55[iVar84 + 0xd];
          }
          if (bVar101 && bVar3 == 0x65) {
            bVar3 = pbVar55[iVar84 + 0xe];
            bVar101 = bVar3 == 0x72;
            if (bVar101) {
              bVar3 = pbVar55[iVar84 + 0xf];
            }
            if (bVar101 && bVar3 == 0x6e) {
              uVar52 = *(uint *)(pbVar55 + iVar84 + 0x14);
              uVar63 = uVar52 << 0x18 | (uVar52 >> 8 & 0xff) << 0x10 | (uVar52 >> 0x10 & 0xff) << 8
                       | uVar52 >> 0x18;
              goto LAB_718fffec;
            }
          }
          iVar44 = iVar44 + -1;
        } while (-iVar44 != (uint)pbVar55[uVar15 + 5] + (uint)pbVar55[uVar15 + 4] * 0x100);
        uVar63 = 0;
      }
LAB_718fffec:
      *(uint *)(iVar72 + 0x24) = uVar63;
      if (CONCAT11(pbVar55[uVar15 + 4],pbVar55[uVar15 + 5]) != 0) {
        iVar44 = 0;
        do {
          iVar84 = iVar44 * -0x10 + uVar15;
          bVar3 = pbVar55[iVar84 + 0xc];
          bVar101 = bVar3 == 0x47;
          if (bVar101) {
            bVar3 = pbVar55[iVar84 + 0xd];
          }
          if (bVar101 && bVar3 == 0x50) {
            bVar3 = pbVar55[iVar84 + 0xe];
            bVar101 = bVar3 == 0x4f;
            if (bVar101) {
              bVar3 = pbVar55[iVar84 + 0xf];
            }
            if (bVar101 && bVar3 == 0x53) {
              uVar52 = *(uint *)(pbVar55 + iVar84 + 0x14);
              uVar52 = uVar52 << 0x18 | (uVar52 >> 8 & 0xff) << 0x10 | (uVar52 >> 0x10 & 0xff) << 8
                       | uVar52 >> 0x18;
              goto LAB_7190005c;
            }
          }
          iVar44 = iVar44 + -1;
        } while (-iVar44 != (uint)pbVar55[uVar15 + 5] + (uint)pbVar55[uVar15 + 4] * 0x100);
      }
      uVar52 = 0;
LAB_7190005c:
      *(uint *)(iVar72 + 0x28) = uVar52;
      if (uVar90 != 0) {
        uVar52 = uVar85;
      }
      if ((uVar90 != 0 && uVar52 != 0) && (uVar56 != 0 && uVar86 != 0)) {
        if (uVar97 == 0) {
          iStack_234 = 2;
          psStack_23c = (short *)0x0;
          uStack_240 = 0;
          psStack_238 = (short *)0x0;
          if (CONCAT11(pbVar55[uVar15 + 4],pbVar55[uVar15 + 5]) != 0) {
            iVar44 = 0;
            do {
              iVar84 = iVar44 * -0x10 + uVar15;
              if (pbVar55[iVar84 + 0xc] == 0x43) {
                bVar3 = pbVar55[iVar84 + 0xd];
                bVar101 = bVar3 == 0x46;
                if (bVar101) {
                  bVar3 = pbVar55[iVar84 + 0xe];
                }
                if ((bVar101 && bVar3 == 0x46) && (pbVar55[iVar84 + 0xf] == 0x20))
                goto code_r0x719002f0;
              }
              iVar44 = iVar44 + -1;
              if (-iVar44 == (uint)pbVar55[uVar15 + 5] + (uint)pbVar55[uVar15 + 4] * 0x100) break;
            } while( true );
          }
        }
        else if (uVar100 != 0) goto LAB_71900090;
      }
    }
    goto LAB_71903838;
  }
LAB_71900acc:
  if ((int)uVar71 < 1) {
    ppppppiStack_264 = (int ******)0x0;
  }
  else {
    uVar15 = 0;
    ppppppiStack_264 = (int ******)0x0;
    do {
      iVar62 = uVar15 * 0xc4 + iStack_2f8;
      iVar44 = *(int *)(iVar62 + 0xa0);
      FUN_7190938c(iVar62 + 0xac,*(int *)(iVar62 + 0xa4) + 1);
      iVar44 = iStack_33c + iVar44 * 0x18;
      if (*(int *)(iVar44 + 0xc) == 0) {
        FUN_7190938c((int *)(iVar44 + 0xc),*(int *)(iVar44 + 4) + 1);
      }
      puVar91 = *(ushort **)(iVar62 + 0x9c);
      uVar7 = *puVar91;
      while ((uVar85 = (uint)uVar7, uVar85 != 0 && (uVar90 = (uint)puVar91[1], uVar90 != 0))) {
        if (uVar85 <= uVar90) {
          do {
            uVar100 = uVar85 >> 5;
            if (((*(uint *)(*(int *)(iVar44 + 0x14) + uVar100 * 4) & 1 << (uVar85 & 0x1f)) == 0) &&
               (iVar72 = FUN_7190949c(iVar62,uVar85), iVar72 != 0)) {
              uVar90 = 1 << (uVar85 & 0x1f);
              *(int *)(iVar62 + 0xa8) = *(int *)(iVar62 + 0xa8) + 1;
              *(int *)(iVar44 + 8) = *(int *)(iVar44 + 8) + 1;
              *(uint *)(*(int *)(iVar62 + 0xb4) + uVar100 * 4) =
                   *(uint *)(*(int *)(iVar62 + 0xb4) + uVar100 * 4) | uVar90;
              *(uint *)(*(int *)(iVar44 + 0x14) + uVar100 * 4) =
                   *(uint *)(*(int *)(iVar44 + 0x14) + uVar100 * 4) | uVar90;
              uVar90 = (uint)puVar91[1];
              ppppppiStack_264 = (int ******)((int)ppppppiStack_264 + 1);
            }
            bVar101 = uVar85 < uVar90;
            uVar85 = uVar85 + 1;
          } while (bVar101);
        }
        puVar91 = puVar91 + 2;
        uVar7 = *puVar91;
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar71);
    if (0 < (int)uVar71) {
      uVar15 = 0;
      do {
        iVar44 = uVar15 * 0xc4 + iStack_2f8;
        iVar62 = *(int *)(iVar44 + 0xa8);
        if (*(int *)(iVar44 + 0xbc) < iVar62) {
          uVar43 = FUN_718c8a70(iVar62 << 2);
          if (*(int *)(iVar44 + 0xc0) != 0) {
            imp___aeabi_memcpy(uVar43,*(int *)(iVar44 + 0xc0),*(int *)(iVar44 + 0xb8) << 2);
            FUN_718c8b14(*(undefined4 *)(iVar44 + 0xc0));
          }
          *(int *)(iVar44 + 0xbc) = iVar62;
          *(undefined4 *)(iVar44 + 0xc0) = uVar43;
        }
        puVar79 = *(uint **)(iVar44 + 0xb4);
        if (0 < *(int *)(iVar44 + 0xac)) {
          iVar62 = 0;
          puVar17 = puVar79 + *(int *)(iVar44 + 0xac);
          do {
            uVar85 = *puVar79;
            if (uVar85 != 0) {
              uVar90 = 0;
              do {
                if ((uVar85 >> (uVar90 & 0xff) & 1) != 0) {
                  iVar72 = *(int *)(iVar44 + 0xb8);
                  if (iVar72 == *(int *)(iVar44 + 0xbc)) {
                    iVar64 = iVar72 + iVar72 / 2;
                    if (iVar72 == 0) {
                      iVar64 = 8;
                    }
                    if (iVar64 <= iVar72 + 1) {
                      iVar64 = iVar72 + 1;
                    }
                    iVar84 = FUN_718c8a70(iVar64 << 2);
                    if (*(int *)(iVar44 + 0xc0) != 0) {
                      imp___aeabi_memcpy(iVar84,*(int *)(iVar44 + 0xc0),*(int *)(iVar44 + 0xb8) << 2
                                        );
                      FUN_718c8b14(*(undefined4 *)(iVar44 + 0xc0));
                    }
                    iVar72 = *(int *)(iVar44 + 0xb8);
                    *(int *)(iVar44 + 0xbc) = iVar64;
                    *(int *)(iVar44 + 0xc0) = iVar84;
                  }
                  else {
                    iVar84 = *(int *)(iVar44 + 0xc0);
                  }
                  *(uint *)(iVar84 + iVar72 * 4) = iVar62 + uVar90;
                  *(int *)(iVar44 + 0xb8) = *(int *)(iVar44 + 0xb8) + 1;
                }
                uVar90 = uVar90 + 1;
              } while (uVar90 != 0x20);
            }
            puVar79 = puVar79 + 1;
            iVar62 = iVar62 + 0x20;
          } while (puVar79 < puVar17);
          puVar79 = *(uint **)(iVar44 + 0xb4);
        }
        if (puVar79 != (uint *)0x0) {
          *(undefined4 *)(iVar44 + 0xac) = 0;
          *(undefined4 *)(iVar44 + 0xb0) = 0;
          FUN_718c8b14(puVar79);
          *(undefined4 *)(iVar44 + 0xb4) = 0;
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 != uVar71);
    }
  }
  if ((int)uVar14 < 1) {
    if (iStack_33c == 0) goto LAB_71900e08;
  }
  else {
    piVar16 = (int *)(iStack_33c + 0x14);
    do {
      if (*piVar16 != 0) {
        piVar16[-2] = 0;
        piVar16[-1] = 0;
        FUN_718c8b14();
        *piVar16 = 0;
      }
      piVar16 = piVar16 + 6;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  FUN_718c8b14(iStack_33c);
LAB_71900e08:
  iVar44 = 0;
  iVar62 = 0;
  iStack_33c = 0;
  if (0 < (int)ppppppiStack_264) {
    uVar14 = (uint)ppppppiStack_264;
    if (ppppppiStack_264 < 9) {
      uVar14 = 8;
    }
    iVar62 = FUN_718c8a70(uVar14 << 4);
    iStack_33c = FUN_718c8a70(uVar14 * 0x1c);
  }
  imp___aeabi_memclr(iVar62,(int)ppppppiStack_264 << 4);
  imp___aeabi_memclr(iStack_33c,(int)ppppppiStack_264 * 0x1c);
  if (0 < (int)uVar71) {
    uVar14 = 0;
    iStack_274 = 0;
    ppppppiStack_278 = (int ******)0x0;
    do {
      iVar84 = uVar14 * 0xc4 + iStack_2f8;
      iVar72 = *(int *)(iVar84 + 0xa8);
      if (iVar72 != 0) {
        iVar92 = *(int *)(iVar84 + 0xb8);
        iVar64 = iStack_33c + (int)ppppppiStack_278 * 0x1c;
        *(int *)(iVar84 + 0x94) = iVar62 + iStack_274 * 0x10;
        *(int *)(iVar84 + 0x98) = iVar64;
        iVar58 = *(int *)(param_1 + 0x54) + uVar14 * 0x78;
        *(undefined4 *)(iVar84 + 0x7c) = *(undefined4 *)(iVar58 + 0x10);
        *(int *)(iVar84 + 0x8c) = iVar64;
        *(undefined4 *)(iVar84 + 0x80) = 0;
        *(undefined4 *)(iVar84 + 0x84) = *(undefined4 *)(iVar84 + 0xc0);
        *(int *)(iVar84 + 0x88) = iVar92;
        *(char *)(iVar84 + 0x90) = (char)*(undefined4 *)(iVar58 + 0x14);
        *(char *)(iVar84 + 0x91) = (char)*(undefined4 *)(iVar58 + 0x18);
        uVar15 = *(uint *)(iVar58 + 0x10);
        iVar64 = FUN_71ba2d70(uVar15,0);
        if (iVar64 == 0) {
          uVar7 = *(ushort *)(*(int *)(iVar84 + 4) + *(int *)(iVar84 + 0x14) + 0x12);
          uVar43 = FUN_71ba1e0c(uVar7 << 8 | uVar7 >> 8);
          uVar15 = uVar15 ^ 0x80000000;
        }
        else {
          iVar64 = *(int *)(iVar84 + 4) + *(int *)(iVar84 + 0x1c);
          uVar7 = *(ushort *)(iVar64 + 6);
          uVar8 = *(ushort *)(iVar64 + 4);
          uVar43 = FUN_71ba1b94((int)(short)(uVar8 << 8 | uVar8 >> 8) -
                                ((int)((uint)uVar7 << 0x18 | (uint)(uVar7 >> 8) << 0x10) >> 0x10));
        }
        uVar43 = FUN_71ba13e0(uVar15,uVar43);
        ppppppiStack_278 = (int ******)(iVar72 + (int)ppppppiStack_278);
        iStack_274 = iVar72 + iStack_274;
        if (0 < iVar92) {
          uVar50 = *(undefined4 *)(param_1 + 0x10);
          iVar72 = 0;
          iVar64 = 0;
          do {
            uVar18 = FUN_7190949c(iVar84,*(undefined4 *)(*(int *)(iVar84 + 0xc0) + iVar64 * 4));
            uVar73 = *(undefined4 *)(iVar58 + 0x18);
            uVar19 = FUN_71ba1b94(*(undefined4 *)(iVar58 + 0x14));
            uVar19 = FUN_71ba21e8(uVar43,uVar19);
            uVar73 = FUN_71ba1b94(uVar73);
            uVar73 = FUN_71ba21e8(uVar43,uVar73);
            FUN_7190972c(iVar84,uVar18,uVar19,uVar73,&iStack_230,&pppppppiStack_254,&uStack_260,
                         &iStack_234);
            iVar64 = iVar64 + 1;
            sVar10 = (short)uVar50;
            *(short *)(*(int *)(iVar84 + 0x94) + iVar72 + 4) =
                 (((short)uStack_260 + sVar10) - (short)iStack_230) +
                 (short)*(undefined4 *)(iVar58 + 0x14) + -1;
            *(short *)(*(int *)(iVar84 + 0x94) + iVar72 + 6) =
                 (((short)iStack_234 + sVar10) - (short)pppppppiStack_254) +
                 (short)*(undefined4 *)(iVar58 + 0x18) + -1;
            iVar92 = *(int *)(iVar84 + 0x94) + iVar72;
            iVar72 = iVar72 + 0x10;
            iVar44 = (uint)*(ushort *)(iVar92 + 6) * (uint)*(ushort *)(iVar92 + 4) + iVar44;
          } while (iVar64 < *(int *)(iVar84 + 0xb8));
        }
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar71);
  }
  iStack_288 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (iStack_288 < 1) {
    FUN_71ba1b94(iVar44);
    imp_sqrtf();
    iVar44 = FUN_71ba17bc();
    iStack_288 = 0x1000;
    if (((iVar44 < 0xb33) && (iStack_288 = 0x800, iVar44 < 0x599)) &&
       (iStack_288 = 0x200, 0x2cb < iVar44)) {
      iStack_288 = 0x400;
    }
  }
  iStack_328 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x1c) = iStack_288;
  iVar44 = iStack_288 - iStack_328;
  piVar16 = (int *)FUN_718c8a70(0x30);
  iStack_374 = FUN_718c8a70(iVar44 * 8);
  if (piVar16 == (int *)0x0 || iStack_374 == 0) {
    if (piVar16 != (int *)0x0) {
      FUN_718c8b14(piVar16);
    }
    if (iStack_374 != 0) {
      FUN_718c8b14();
    }
    piVar16 = (int *)0x0;
    iStack_288 = 0;
    iStack_328 = 0;
    iStack_374 = 0;
  }
  else {
    iVar84 = iVar44 + -1;
    iVar72 = 0;
    if (1 < iVar44) {
      piVar53 = (int *)(iStack_374 + 4);
      iVar64 = iVar84;
      do {
        *piVar53 = (int)(piVar53 + 1);
        iVar64 = iVar64 + -1;
        iVar72 = iVar84;
        piVar53 = piVar53 + 2;
      } while (iVar64 != 0);
    }
    *(undefined4 *)(iStack_374 + iVar72 * 8 + 4) = 0;
    *piVar16 = iVar44;
    piVar16[1] = 0x8000 - iStack_328;
    *(undefined2 *)((int)piVar16 + 0x2a) = 0xffff;
    piVar16[7] = iStack_374;
    piVar16[3] = 1;
    piVar16[4] = 0;
    piVar16[5] = iVar44;
    piVar16[0xb] = 0;
    iVar72 = FUN_71ba0440(iVar84 + iVar44,iVar44);
    piVar16[2] = iVar72;
    piVar16[8] = 0;
    piVar16[6] = (int)(piVar16 + 8);
    *(short *)(piVar16 + 10) = (short)iVar44;
    piVar16[9] = (int)(piVar16 + 10);
  }
  FUN_71905db4();
  if (0 < (int)uVar71) {
    uVar14 = 0;
    do {
      iVar44 = uVar14 * 0xc4 + iStack_2f8;
      if (*(int *)(iVar44 + 0xa8) != 0) {
        FUN_71905f68(piVar16,*(undefined4 *)(iVar44 + 0x94));
        iVar72 = *(int *)(iVar44 + 0xa8);
        if (0 < iVar72) {
          iVar84 = 0;
          iVar64 = 0;
          do {
            iVar58 = *(int *)(iVar44 + 0x94) + iVar84;
            if (*(int *)(iVar58 + 0xc) != 0) {
              iVar72 = (uint)*(ushort *)(iVar58 + 6) + (uint)*(ushort *)(iVar58 + 10);
              if (iVar72 < *(int *)(param_1 + 0x20)) {
                iVar72 = *(int *)(param_1 + 0x20);
              }
              *(int *)(param_1 + 0x20) = iVar72;
              iVar72 = *(int *)(iVar44 + 0xa8);
            }
            iVar64 = iVar64 + 1;
            iVar84 = iVar84 + 0x10;
          } while (iVar64 < iVar72);
        }
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar71);
  }
  uVar14 = *(uint *)(param_1 + 0x20);
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    uVar14 = uVar14 - 1 | (int)(uVar14 - 1) >> 1;
    uVar14 = uVar14 | (int)uVar14 >> 2;
    uVar14 = uVar14 | (int)uVar14 >> 4;
    uVar14 = uVar14 | (int)uVar14 >> 8;
    uVar14 = uVar14 | (int)uVar14 >> 0x10;
  }
  iVar44 = uVar14 + 1;
  iVar72 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x20) = iVar44;
  uVar43 = FUN_71ba1b94(iVar72);
  uVar43 = FUN_71ba13e0(0x3f800000,uVar43);
  *(undefined4 *)(param_1 + 0x24) = uVar43;
  uVar43 = FUN_71ba1b94(iVar44);
  uVar43 = FUN_71ba13e0(0x3f800000,uVar43);
  *(undefined4 *)(param_1 + 0x28) = uVar43;
  uVar43 = FUN_718c8a70(iVar72 * iVar44);
  *(undefined4 *)(param_1 + 0x14) = uVar43;
  imp___aeabi_memclr(uVar43,*(int *)(param_1 + 0x20) * *(int *)(param_1 + 0x1c));
  if (0 < (int)uVar71) {
    uVar14 = 0;
    iVar44 = *(int *)(param_1 + 0x14);
    do {
      iVar72 = uVar14 * 0xc4 + iStack_2f8;
      if (*(int *)(iVar72 + 0xa8) != 0) {
        uVar15 = *(uint *)(iVar72 + 0x7c);
        iVar84 = *(int *)(param_1 + 0x54);
        iVar64 = *(int *)(iVar72 + 0x94);
        iVar58 = FUN_71ba2d70(uVar15,0);
        if (iVar58 == 0) {
          uVar7 = *(ushort *)(*(int *)(iVar72 + 4) + *(int *)(iVar72 + 0x14) + 0x12);
          uVar43 = FUN_71ba1e0c(uVar7 << 8 | uVar7 >> 8);
          uVar15 = uVar15 ^ 0x80000000;
        }
        else {
          iVar58 = *(int *)(iVar72 + 4) + *(int *)(iVar72 + 0x1c);
          uVar7 = *(ushort *)(iVar58 + 6);
          uVar8 = *(ushort *)(iVar58 + 4);
          uVar43 = FUN_71ba1b94((int)(short)(uVar8 << 8 | uVar8 >> 8) -
                                ((int)((uint)uVar7 << 0x18 | (uint)(uVar7 >> 8) << 0x10) >> 0x10));
        }
        uVar85 = FUN_71ba13e0(uVar15,uVar43);
        uVar90 = (uint)*(byte *)(iVar72 + 0x90);
        uVar50 = FUN_71ba1e0c(uVar90);
        uVar18 = FUN_71ba13e0(0x3f800000,uVar50);
        uVar100 = (uint)*(byte *)(iVar72 + 0x91);
        uVar19 = FUN_71ba1e0c(uVar100);
        uVar73 = FUN_71ba13e0(0x3f800000,uVar19);
        uVar43 = FUN_71ba1b94();
        uVar20 = FUN_71ba0b38(uVar50,uVar50);
        uVar15 = FUN_71ba13e0(uVar43,uVar20);
        uVar43 = FUN_71ba1b94();
        uVar20 = FUN_71ba0b38(uVar19,uVar19);
        uVar43 = FUN_71ba13e0(uVar43,uVar20);
        if (uVar100 == 0) {
          uVar43 = 0;
        }
        if (uVar90 == 0) {
          uVar15 = 0;
        }
        iVar58 = *(int *)(iVar72 + 0x88);
        if (0 < iVar58) {
          uVar56 = FUN_71ba21e8(uVar85,uVar50);
          uVar97 = FUN_71ba21e8(uVar85,uVar19);
          iVar92 = FUN_71ba2d70(uVar56,uVar97);
          uVar52 = uVar56;
          if (iVar92 != 0) {
            uVar52 = uVar97;
          }
          uVar50 = FUN_71ba13e0(0x3eb33333,uVar52);
          uVar50 = FUN_71ba21e8(uVar50,uVar50);
          iVar92 = 0;
          uVar52 = uVar85;
          do {
            iVar59 = iVar64 + iVar92 * 0x10;
            if (*(int *)(iVar59 + 0xc) != 0) {
              sVar10 = *(short *)(iVar59 + 4);
              if (sVar10 != 0) {
                uVar52 = (uint)*(ushort *)(iVar59 + 6);
              }
              if (sVar10 != 0 && uVar52 != 0) {
                if (*(int *)(iVar72 + 0x84) == 0) {
                  iVar58 = *(int *)(iVar72 + 0x80) + iVar92;
                }
                else {
                  iVar58 = *(int *)(*(int *)(iVar72 + 0x84) + iVar92 * 4);
                }
                iVar21 = *(int *)(iVar72 + 0x8c);
                iVar58 = FUN_7190949c(iVar72,iVar58);
                sVar9 = (short)iStack_328;
                *(short *)(iVar59 + 6) = (short)uVar52 - sVar9;
                *(short *)(iVar59 + 4) = sVar10 - sVar9;
                *(short *)(iVar59 + 8) = *(short *)(iVar59 + 8) + sVar9;
                *(short *)(iVar59 + 10) = *(short *)(iVar59 + 10) + sVar9;
                iVar47 = *(int *)(iVar72 + 4) + *(int *)(iVar72 + 0x20);
                puVar60 = (undefined1 *)(iVar47 + iVar58 * 4);
                uVar7 = *(ushort *)(*(int *)(iVar72 + 4) + *(int *)(iVar72 + 0x1c) + 0x22);
                iVar47 = iVar47 + ((uVar7 & 0xff) << 8 | (uint)(uVar7 >> 8)) * 4;
                uVar52 = ((uint)uVar7 << 0x18 | (uint)(uVar7 >> 8) << 0x10) >> 0x10;
                puVar22 = puVar60;
                if ((int)uVar52 <= iVar58) {
                  puVar22 = (undefined1 *)(iVar47 + -4);
                }
                uVar5 = *puVar22;
                puVar22 = (undefined1 *)(iVar47 + -3);
                if (iVar58 < (int)uVar52) {
                  puVar22 = puVar60 + 1;
                }
                uVar6 = *puVar22;
                FUN_7190972c(iVar72,iVar58,uVar56,uVar97,&psStack_23c,&uStack_240,auStack_244,
                             auStack_248);
                uVar7 = *(ushort *)(iVar59 + 6);
                uVar8 = *(ushort *)(iVar59 + 10);
                uVar11 = *(ushort *)(iVar59 + 4);
                uVar12 = *(ushort *)(iVar59 + 8);
                iVar23 = FUN_7190c28c(iVar72,iVar58,&psStack_238);
                FUN_7190972c(iVar72,iVar58,uVar56,uVar97,&uStack_260,&iStack_234,0,0);
                iVar47 = iStack_234;
                psVar46 = psStack_238;
                uVar19 = uStack_260;
                uVar52 = uVar11 - uVar90;
                iVar24 = uVar52 + 1;
                bVar101 = iVar24 == 0;
                iVar58 = 0;
                if (!bVar101) {
                  uStack_30c = uVar7 - uVar100;
                  iVar58 = uStack_30c + 1;
                  bVar101 = iVar58 == 0;
                }
                if ((!bVar101) && (0 < iVar23)) {
                  puStack_300 = (undefined1 *)(iStack_288 * (uint)uVar8 + iVar44 + (uint)uVar12);
                  psVar98 = psStack_238 + 6;
                  iVar48 = iVar23;
                  iVar76 = 0;
                  do {
                    iVar67 = iVar76;
                    sVar10 = *psVar98;
                    iVar76 = iVar67;
                    if ((char)sVar10 == '\x01') {
                      iVar76 = iVar67 + 1;
                    }
                    iVar48 = iVar48 + -1;
                    psVar98 = psVar98 + 7;
                  } while (iVar48 != 0);
                  if ((iVar76 != 0) && (iVar48 = FUN_718c8a70(iVar76 << 2), iVar48 != 0)) {
                    bVar42 = false;
                    iVar93 = 0;
                    ppppppiStack_278 = (int ******)0x0;
                    iVar87 = 0;
                    bVar101 = true;
                    do {
                      bVar61 = bVar101;
                      if ((bVar42) && (iVar93 = FUN_718c8a70(iVar87 << 3), iVar93 == 0)) {
                        FUN_718c8b14(0);
                        goto LAB_719033b8;
                      }
                      uVar39 = 0;
                      uVar20 = 0;
                      iStack_230 = 0;
                      iStack_268 = -1;
                      iVar87 = iVar23;
                      psVar98 = psVar46;
                      do {
                        iVar75 = iStack_230;
                        switch((char)psVar98[6]) {
                        case '\x01':
                          if (-1 < iStack_268) {
                            *(int *)(iVar48 + iStack_268 * 4) = iStack_230 - (int)ppppppiStack_278;
                          }
                          iStack_230 = iStack_230 + 1;
                          iStack_268 = iStack_268 + 1;
                          uVar20 = FUN_71ba1b94((int)*psVar98);
                          uVar39 = FUN_71ba1b94((int)psVar98[1]);
                          ppppppiStack_278 = (int ******)iVar75;
                          if (iVar93 != 0) {
                            puVar51 = (undefined4 *)(iVar93 + iVar75 * 8);
                            *puVar51 = uVar20;
                            puVar51[1] = uVar39;
                          }
                          break;
                        case '\x02':
                          iStack_230 = iStack_230 + 1;
                          uVar20 = FUN_71ba1b94((int)*psVar98);
                          uVar39 = FUN_71ba1b94((int)psVar98[1]);
                          if (iVar93 != 0) {
                            puVar51 = (undefined4 *)(iVar93 + iVar75 * 8);
                            *puVar51 = uVar20;
                            puVar51[1] = uVar39;
                          }
                          break;
                        case '\x03':
                          uVar40 = FUN_71ba1b94((int)psVar98[2]);
                          uVar89 = FUN_71ba1b94((int)psVar98[3]);
                          uVar41 = FUN_71ba1b94((int)*psVar98);
                          uVar49 = FUN_71ba1b94((int)psVar98[1]);
                          FUN_7190d594(iVar93,&iStack_230,uVar20,uVar39,uVar40,uVar89,uVar41,uVar49,
                                       uVar50,0);
                          goto LAB_71901d54;
                        case '\x04':
                          uVar40 = FUN_71ba1b94((int)psVar98[2]);
                          uVar89 = FUN_71ba1b94((int)psVar98[3]);
                          uVar41 = FUN_71ba1b94((int)psVar98[4]);
                          uVar49 = FUN_71ba1b94((int)psVar98[5]);
                          uVar25 = FUN_71ba1b94((int)*psVar98);
                          uVar26 = FUN_71ba1b94((int)psVar98[1]);
                          FUN_7190db50(iVar93,&iStack_230,uVar20,uVar39,uVar40,uVar89,uVar41,uVar49,
                                       uVar25,uVar26,uVar50,0);
LAB_71901d54:
                          uVar20 = FUN_71ba1b94((int)*psVar98);
                          uVar39 = FUN_71ba1b94((int)psVar98[1]);
                        }
                        psVar98 = psVar98 + 7;
                        iVar87 = iVar87 + -1;
                      } while (iVar87 != 0);
                      *(int *)(iVar48 + iStack_268 * 4) = iStack_230 - (int)ppppppiStack_278;
                      bVar42 = true;
                      iVar87 = iStack_230;
                      bVar101 = false;
                    } while (bVar61);
                    if (iVar93 != 0) {
                      iVar23 = 0;
                      if ((char)sVar10 == '\x01') {
                        iVar67 = iVar67 + 1;
                      }
                      iVar87 = 0;
                      do {
                        iVar75 = iVar23 * 4;
                        iVar23 = iVar23 + 1;
                        iVar87 = *(int *)(iVar48 + iVar75) + iVar87;
                      } while (iVar67 != iVar23);
                      puVar51 = (undefined4 *)FUN_718c8a70(iVar87 * 0x14 + 0x14);
                      if (puVar51 != (undefined4 *)0x0) {
                        iVar87 = 0;
                        iVar67 = 0;
                        iVar23 = 0;
                        do {
                          iVar75 = *(int *)(iVar48 + iVar67 * 4);
                          if (0 < iVar75) {
                            iVar27 = iVar93 + iVar23 * 8;
                            puVar88 = (undefined4 *)(iVar93 + 4 + iVar23 * 8);
                            iVar29 = 0;
                            iVar30 = iVar75;
                            iVar94 = iVar75 + -1;
                            do {
                              iVar28 = iVar29;
                              puVar82 = (undefined4 *)(iVar27 + iVar94 * 8 + 4);
                              iVar29 = FUN_71ba2cf0(*puVar82,*puVar88);
                              if (iVar29 == 0) {
                                puVar99 = puVar51 + iVar87 * 5;
                                puVar99[4] = 0;
                                iVar30 = FUN_71ba2d70(*puVar82,*puVar88);
                                iVar29 = iVar28;
                                if (iVar30 != 0) {
                                  puVar99[4] = 1;
                                  iVar29 = iVar94;
                                  iVar94 = iVar28;
                                }
                                puVar82 = (undefined4 *)(iVar27 + iVar29 * 8);
                                uVar20 = FUN_71ba21e8(*puVar82,uVar56);
                                uVar20 = FUN_71ba0b38(uVar20,0);
                                *puVar99 = uVar20;
                                uVar20 = FUN_71ba21e8(puVar82[1],uVar97 ^ 0x80000000);
                                uVar20 = FUN_71ba0b38(uVar20,0);
                                puVar99[1] = uVar20;
                                puVar82 = (undefined4 *)(iVar27 + iVar94 * 8);
                                uVar20 = FUN_71ba21e8(*puVar82,uVar56);
                                uVar20 = FUN_71ba0b38(uVar20,0);
                                puVar99[2] = uVar20;
                                uVar20 = FUN_71ba21e8(puVar82[1],uVar97 ^ 0x80000000);
                                uVar20 = FUN_71ba0b38(uVar20,0);
                                puVar99[3] = uVar20;
                                iVar30 = *(int *)(iVar48 + iVar67 * 4);
                                iVar87 = iVar87 + 1;
                              }
                              puVar88 = puVar88 + 2;
                              iVar29 = iVar28 + 1;
                              iVar94 = iVar28;
                            } while (iVar28 + 1 < iVar30);
                          }
                          iVar67 = iVar67 + 1;
                          iVar23 = iVar75 + iVar23;
                        } while (iVar67 != iVar76);
                        FUN_7190e4f8(puVar51,iVar87);
                        if (1 < iVar87) {
                          iVar23 = 1;
                          puVar88 = puVar51;
                          do {
                            puVar88 = puVar88 + 5;
                            puVar82 = puVar51 + iVar23 * 5;
                            uVar39 = *puVar82;
                            uVar20 = puVar82[1];
                            iStack_230 = puVar82[2];
                            psStack_22c = (short *)puVar82[3];
                            psStack_228 = (short *)puVar82[4];
                            puVar82 = puVar88;
                            iVar76 = iVar23;
                            do {
                              iVar67 = FUN_71ba2d10(uVar20,puVar82[-4]);
                              if (iVar67 == 0) goto LAB_719024fc;
                              iVar67 = iVar76 + -1;
                              *puVar82 = puVar82[-5];
                              puVar82[1] = puVar82[-4];
                              puVar82[2] = puVar82[-3];
                              puVar82[3] = puVar82[-2];
                              puVar82[4] = puVar82[-1];
                              bVar101 = 0 < iVar76;
                              puVar82 = puVar82 + -5;
                              iVar76 = iVar67;
                            } while (iVar67 != 0 && bVar101);
                            iVar76 = 0;
LAB_719024fc:
                            if (iVar23 != iVar76) {
                              puVar82 = puVar51 + iVar76 * 5;
                              *puVar82 = uVar39;
                              puVar82[1] = uVar20;
                              puVar82[2] = iStack_230;
                              puVar82[3] = psStack_22c;
                              puVar82[4] = psStack_228;
                            }
                            iVar23 = iVar23 + 1;
                          } while (iVar23 != iVar87);
                        }
                        pppppppiStack_254 = (int *******)0x0;
                        piStack_280 = &iStack_230;
                        if (0x3f < (int)uVar52) {
                          piStack_280 = (int *)FUN_718c8a70(iVar24 * 8 | 4);
                        }
                        uVar20 = FUN_71ba1b94(iVar47 + iVar58);
                        uVar20 = FUN_71ba0b38(uVar20,0x3f800000);
                        puVar51[iVar87 * 5 + 1] = uVar20;
                        if (uStack_30c < 0x7fffffff) {
                          piVar53 = piStack_280 + iVar24;
                          uVar19 = FUN_71ba1b94(uVar19);
                          uVar20 = FUN_71ba1b94(iVar24);
                          pppppppiVar68 = (int *******)0x0;
                          uStack_310 = 0;
                          iStack_2d4 = 0;
                          pppppppiStack_2b0 = (int *******)0x0;
                          piStack_2e0 = (int *)0x0;
                          iVar58 = iVar47;
                          puStack_32c = puVar51;
                          do {
                            imp___aeabi_memclr(piStack_280,iVar24 * 4);
                            imp___aeabi_memclr(piVar53,iVar24 * 4 + 4);
                            ppppppiVar31 = (int ******)FUN_71ba1b94(iVar58);
                            ppppppiVar32 = (int ******)FUN_71ba0b38(ppppppiVar31,0x3f800000);
                            if (pppppppiVar68 != (int *******)0x0) {
                              pppppppiVar83 = (int *******)&pppppppiStack_254;
                              do {
                                iVar23 = FUN_71ba2d30(pppppppiVar68[6],ppppppiVar31);
                                pppppppiVar78 = pppppppiVar68;
                                if (iVar23 != 0) {
                                  *pppppppiVar83 = *pppppppiVar68;
                                  *pppppppiVar68 = (int ******)pppppppiStack_2b0;
                                  pppppppiVar68[4] = (int ******)0x0;
                                  pppppppiVar78 = pppppppiVar83;
                                  pppppppiStack_2b0 = pppppppiVar68;
                                }
                                pppppppiVar68 = (int *******)*pppppppiVar78;
                                pppppppiVar83 = pppppppiVar78;
                              } while (pppppppiVar68 != (int *******)0x0);
                            }
                            iVar76 = puStack_32c[1];
                            iVar23 = FUN_71ba2d30(iVar76,ppppppiVar32);
                            pppppppiVar68 = pppppppiStack_254;
                            if (iVar23 != 0) {
                              do {
                                piVar70 = puStack_32c + 3;
                                iVar67 = *piVar70;
                                iVar23 = FUN_71ba2cf0(iVar76,iVar67);
                                piVar96 = puStack_32c + 1;
                                pppppppiVar68 = pppppppiStack_2b0;
                                if (iVar23 == 0) {
                                  if (pppppppiStack_2b0 == (int *******)0x0) {
                                    if (iStack_2d4 == 0) {
                                      piVar38 = (int *)FUN_718c8a70(0xdac4);
                                      if (piVar38 == (int *)0x0) {
                                        pppppppiStack_2b0 = (int *******)0x0;
                                        iStack_2d4 = 0;
                                        pppppppiVar68 = pppppppiStack_2b0;
                                        goto LAB_719032b8;
                                      }
                                      iStack_2d4 = 1999;
                                      *piVar38 = (int)piStack_2e0;
                                      iVar76 = *piVar96;
                                      iVar67 = *piVar70;
                                    }
                                    else {
                                      iStack_2d4 = iStack_2d4 + -1;
                                      piVar38 = piStack_2e0;
                                    }
                                    pppppppiStack_2b0 = (int *******)(piVar38 + iStack_2d4 * 7 + 1);
                                    pppppppiVar68 = (int *******)0x0;
                                    piStack_2e0 = piVar38;
                                  }
                                  else {
                                    pppppppiVar68 = (int *******)*pppppppiStack_2b0;
                                  }
                                  uVar39 = FUN_71ba240c(puStack_32c[2],*puStack_32c);
                                  uVar40 = FUN_71ba240c(iVar67,iVar76);
                                  ppppppiVar77 = (int ******)FUN_71ba13e0(uVar39,uVar40);
                                  pppppppiStack_2b0[2] = ppppppiVar77;
                                  iVar23 = FUN_71ba2cf0(ppppppiVar77,0);
                                  ppppppiVar69 = (int ******)FUN_71ba13e0(0x3f800000,ppppppiVar77);
                                  if (iVar23 != 0) {
                                    ppppppiVar69 = (int ******)0x0;
                                  }
                                  pppppppiStack_2b0[3] = ppppppiVar69;
                                  uVar39 = FUN_71ba240c(ppppppiVar31,*piVar96);
                                  uVar39 = FUN_71ba21e8(ppppppiVar77,uVar39);
                                  uVar39 = FUN_71ba0b38(uVar39,*puStack_32c);
                                  ppppppiVar77 = (int ******)FUN_71ba240c(uVar39,uVar19);
                                  pppppppiStack_2b0[1] = ppppppiVar77;
                                  ppppppiVar77 = (int ******)0x3f800000;
                                  if (puStack_32c[4] == 0) {
                                    ppppppiVar77 = (int ******)0xbf800000;
                                  }
                                  pppppppiStack_2b0[4] = ppppppiVar77;
                                  pppppppiStack_2b0[5] = (int ******)*piVar96;
                                  ppppppiVar77 = (int ******)*piVar70;
                                  *pppppppiStack_2b0 = (int ******)0x0;
                                  pppppppiStack_2b0[6] = ppppppiVar77;
                                  iVar23 = FUN_71ba2d10(ppppppiVar77,ppppppiVar31);
                                  if ((iVar47 != 0 && uStack_310 == 0) && iVar23 != 0) {
                                    pppppppiStack_2b0[6] = ppppppiVar31;
                                  }
                                  *pppppppiStack_2b0 = (int ******)pppppppiStack_254;
                                  pppppppiStack_254 = pppppppiStack_2b0;
                                }
LAB_719032b8:
                                pppppppiStack_2b0 = pppppppiVar68;
                                iVar76 = puStack_32c[6];
                                iVar23 = FUN_71ba2d30(iVar76,ppppppiVar32);
                                puStack_32c = puStack_32c + 5;
                                pppppppiVar68 = pppppppiStack_254;
                              } while (iVar23 != 0);
                            }
                            while (pppppppiVar68 != (int *******)0x0) {
                              ppppppiVar77 = pppppppiVar68[1];
                              ppppppiVar69 = pppppppiVar68[2];
                              iVar23 = FUN_71ba2cf0(ppppppiVar69,0);
                              if (iVar23 == 0) {
                                ppppppiVar33 = (int ******)FUN_71ba0b38(ppppppiVar69,ppppppiVar77);
                                ppppppiStack_278 = pppppppiVar68[6];
                                ppppppiVar34 = pppppppiVar68[3];
                                ppppppiVar35 = pppppppiVar68[5];
                                iVar23 = FUN_71ba2d10(ppppppiStack_278,ppppppiVar32);
                                uVar39 = FUN_71ba240c(ppppppiStack_278,ppppppiVar31);
                                uVar39 = FUN_71ba21e8(ppppppiVar69,uVar39);
                                ppppppiVar36 = (int ******)FUN_71ba0b38(uVar39,ppppppiVar77);
                                if (iVar23 == 0) {
                                  ppppppiVar36 = ppppppiVar33;
                                }
                                iVar76 = FUN_71ba2d70(ppppppiVar35,ppppppiVar31);
                                uVar39 = FUN_71ba240c(ppppppiVar35,ppppppiVar31);
                                uVar39 = FUN_71ba21e8(ppppppiVar69,uVar39);
                                ppppppiStack_264 = (int ******)FUN_71ba0b38(uVar39,ppppppiVar77);
                                if (iVar76 == 0) {
                                  ppppppiStack_264 = ppppppiVar77;
                                }
                                iVar67 = FUN_71ba2d50(ppppppiStack_264,0);
                                if (iVar23 == 0) {
                                  ppppppiStack_278 = ppppppiVar32;
                                }
                                if (iVar76 == 0) {
                                  ppppppiVar35 = ppppppiVar31;
                                }
                                if ((((iVar67 == 0) ||
                                     (iVar23 = FUN_71ba2d50(ppppppiVar36,0), iVar23 == 0)) ||
                                    (iVar23 = FUN_71ba2d10(ppppppiStack_264,uVar20), iVar23 == 0))
                                   || (iVar23 = FUN_71ba2d10(ppppppiVar36,uVar20), iVar23 == 0)) {
                                  if (uVar52 < 0x7fffffff) {
                                    iVar23 = 0;
                                    do {
                                      ppppppiVar36 = (int ******)FUN_71ba1b94(iVar23);
                                      uVar39 = FUN_71ba240c(ppppppiVar36,ppppppiVar77);
                                      uVar39 = FUN_71ba13e0(uVar39,ppppppiVar69);
                                      ppppppiVar35 = (int ******)FUN_71ba0b38(uVar39,ppppppiVar31);
                                      iVar76 = iVar23 + 1;
                                      ppppppiVar34 = (int ******)FUN_71ba1b94();
                                      uVar39 = FUN_71ba240c(ppppppiVar34,ppppppiVar77);
                                      uVar39 = FUN_71ba13e0(uVar39,ppppppiVar69);
                                      ppppppiVar37 = (int ******)FUN_71ba0b38(uVar39,ppppppiVar31);
                                      iVar67 = FUN_71ba2d10(ppppppiVar77,ppppppiVar36);
                                      iVar87 = FUN_71ba2d10(ppppppiVar77,ppppppiVar36);
                                      iVar75 = FUN_71ba2d70(ppppppiVar33,ppppppiVar34);
                                      if ((iVar67 == 0) ||
                                         (iVar67 = FUN_71ba2d70(ppppppiVar33,ppppppiVar34),
                                         iVar67 == 0)) {
                                        iVar67 = FUN_71ba2d10(ppppppiVar33,ppppppiVar36);
                                        iVar29 = FUN_71ba2d10(ppppppiVar33,ppppppiVar36);
                                        iVar30 = FUN_71ba2d70(ppppppiVar77,ppppppiVar34);
                                        if ((iVar67 == 0) ||
                                           (iVar67 = FUN_71ba2d70(ppppppiVar77,ppppppiVar34),
                                           iVar67 == 0)) {
                                          iVar67 = FUN_71ba2d70(ppppppiVar33,ppppppiVar36);
                                          if (iVar87 == 0 || iVar67 == 0) {
                                            iVar67 = FUN_71ba2d70(ppppppiVar77,ppppppiVar36);
                                            if (iVar29 == 0 || iVar67 == 0) {
                                              iVar67 = FUN_71ba2d10(ppppppiVar77,ppppppiVar34);
                                              if (iVar67 == 0 || iVar75 == 0) {
                                                iVar67 = FUN_71ba2d10(ppppppiVar33,ppppppiVar34);
                                                ppppppiVar36 = ppppppiVar77;
                                                ppppppiVar35 = ppppppiVar31;
                                                if (iVar67 != 0 && iVar30 != 0) {
                                                  FUN_7190e7e4(piStack_280,iVar23,pppppppiVar68,
                                                               ppppppiVar77,ppppppiVar31,
                                                               ppppppiVar34,ppppppiVar37);
                                                  ppppppiVar36 = ppppppiVar34;
                                                  ppppppiVar35 = ppppppiVar37;
                                                }
                                              }
                                              else {
                                                FUN_7190e7e4(piStack_280,iVar23,pppppppiVar68,
                                                             ppppppiVar77,ppppppiVar31,ppppppiVar34,
                                                             ppppppiVar37);
                                                ppppppiVar36 = ppppppiVar34;
                                                ppppppiVar35 = ppppppiVar37;
                                              }
                                            }
                                            else {
                                              FUN_7190e7e4(piStack_280,iVar23,pppppppiVar68,
                                                           ppppppiVar77,ppppppiVar31,ppppppiVar36,
                                                           ppppppiVar35);
                                            }
                                            FUN_7190e7e4(piStack_280,iVar23,pppppppiVar68,
                                                         ppppppiVar36,ppppppiVar35,ppppppiVar33,
                                                         ppppppiVar32);
                                          }
                                          else {
                                            FUN_7190e7e4(piStack_280,iVar23,pppppppiVar68,
                                                         ppppppiVar77,ppppppiVar31,ppppppiVar36,
                                                         ppppppiVar35);
                                            FUN_7190e7e4(piStack_280,iVar23,pppppppiVar68,
                                                         ppppppiVar36,ppppppiVar35,ppppppiVar33,
                                                         ppppppiVar32);
                                          }
                                        }
                                        else {
                                          FUN_7190e7e4(piStack_280,iVar23,pppppppiVar68,ppppppiVar77
                                                       ,ppppppiVar31,ppppppiVar34,ppppppiVar37);
                                          FUN_7190e7e4(piStack_280,iVar23,pppppppiVar68,ppppppiVar34
                                                       ,ppppppiVar37,ppppppiVar36,ppppppiVar35);
                                          FUN_7190e7e4(piStack_280,iVar23,pppppppiVar68,ppppppiVar36
                                                       ,ppppppiVar35,ppppppiVar33,ppppppiVar32);
                                        }
                                      }
                                      else {
                                        FUN_7190e7e4(piStack_280,iVar23,pppppppiVar68,ppppppiVar77,
                                                     ppppppiVar31,ppppppiVar36,ppppppiVar35);
                                        FUN_7190e7e4(piStack_280,iVar23,pppppppiVar68,ppppppiVar36,
                                                     ppppppiVar35,ppppppiVar34,ppppppiVar37);
                                        FUN_7190e7e4(piStack_280,iVar23,pppppppiVar68,ppppppiVar34,
                                                     ppppppiVar37,ppppppiVar33,ppppppiVar32);
                                      }
                                      iVar23 = iVar76;
                                    } while (iVar24 != iVar76);
                                  }
                                  goto LAB_7190271c;
                                }
                                uVar63 = FUN_71ba17bc(ppppppiStack_264);
                                uStack_29c = FUN_71ba17bc(ppppppiVar36);
                                if (uVar63 == uStack_29c) {
                                  uVar39 = FUN_71ba240c(ppppppiStack_278,ppppppiVar35);
                                  uVar40 = FUN_71ba1b94(uVar63);
                                  uVar89 = FUN_71ba240c(ppppppiStack_264,uVar40);
                                  uVar40 = FUN_71ba240c(ppppppiVar36,uVar40);
                                  uVar40 = FUN_71ba0b38(uVar89,uVar40);
                                  uVar40 = FUN_71ba21e8(uVar40,0xbf000000);
                                  uVar40 = FUN_71ba0b38(uVar40,0x3f800000);
                                  uVar40 = FUN_71ba21e8(uVar40,pppppppiVar68[4]);
                                  uVar40 = FUN_71ba21e8(uVar40,uVar39);
                                  iVar23 = FUN_71ba0b38(uVar40,piStack_280[uVar63]);
                                  piStack_280[uVar63] = iVar23;
                                  uVar39 = FUN_71ba21e8(pppppppiVar68[4],uVar39);
                                  iVar23 = FUN_71ba0b38(uVar39,piVar53[uVar63 + 1]);
                                  piVar53[uVar63 + 1] = iVar23;
                                }
                                else {
                                  iVar23 = FUN_71ba2d70(ppppppiStack_264,ppppppiVar36);
                                  uVar86 = uVar63;
                                  ppppppiStack_294 = ppppppiVar36;
                                  if (iVar23 != 0) {
                                    uVar39 = FUN_71ba240c(ppppppiVar31,ppppppiVar35);
                                    ppppppiVar69 = (int ******)FUN_71ba0b38(ppppppiVar32,uVar39);
                                    uVar39 = FUN_71ba240c(ppppppiVar31,ppppppiStack_278);
                                    ppppppiVar35 = (int ******)FUN_71ba0b38(ppppppiVar32,uVar39);
                                    ppppppiVar34 = (int ******)((uint)ppppppiVar34 ^ 0x80000000);
                                    uVar86 = uStack_29c;
                                    ppppppiVar77 = ppppppiVar33;
                                    uStack_29c = uVar63;
                                    ppppppiStack_294 = ppppppiStack_264;
                                    ppppppiStack_278 = ppppppiVar69;
                                    ppppppiStack_264 = ppppppiVar36;
                                  }
                                  iVar76 = uVar86 + 1;
                                  uVar39 = FUN_71ba1b94(iVar76);
                                  uVar39 = FUN_71ba240c(uVar39,ppppppiVar77);
                                  uVar39 = FUN_71ba21e8(uVar39,ppppppiVar34);
                                  uVar39 = FUN_71ba0b38(uVar39,ppppppiVar31);
                                  uVar40 = FUN_71ba240c(uVar39,ppppppiVar35);
                                  ppppppiVar77 = pppppppiVar68[4];
                                  uVar40 = FUN_71ba21e8(ppppppiVar77,uVar40);
                                  uVar89 = FUN_71ba1b94(uVar86);
                                  uVar89 = FUN_71ba240c(ppppppiStack_264,uVar89);
                                  uVar89 = FUN_71ba0b38(uVar89,0x3f800000);
                                  uVar89 = FUN_71ba21e8(uVar89,0xbf000000);
                                  uVar89 = FUN_71ba0b38(uVar89,0x3f800000);
                                  uVar89 = FUN_71ba21e8(uVar40,uVar89);
                                  iVar23 = FUN_71ba0b38(uVar89,piStack_280[uVar86]);
                                  piStack_280[uVar86] = iVar23;
                                  uVar89 = FUN_71ba21e8(ppppppiVar34,ppppppiVar77);
                                  if (iVar76 < (int)uStack_29c) {
                                    uVar41 = FUN_71ba21e8(uVar89,0x3f000000);
                                    iVar23 = ~uVar86 + uStack_29c;
                                    piVar70 = piStack_280 + uVar86 + 1;
                                    do {
                                      uVar49 = FUN_71ba0b38(uVar41,uVar40);
                                      iVar67 = FUN_71ba0b38(uVar49,*piVar70);
                                      *piVar70 = iVar67;
                                      uVar40 = FUN_71ba0b38(uVar89,uVar40);
                                      iVar23 = iVar23 + -1;
                                      piVar70 = piVar70 + 1;
                                    } while (iVar23 != 0);
                                  }
                                  uVar89 = FUN_71ba1b94(uStack_29c - iVar76);
                                  uVar89 = FUN_71ba21e8(ppppppiVar34,uVar89);
                                  uVar39 = FUN_71ba0b38(uVar89,uVar39);
                                  uVar89 = FUN_71ba1b94(uStack_29c);
                                  uVar89 = FUN_71ba240c(ppppppiStack_294,uVar89);
                                  uVar89 = FUN_71ba0b38(uVar89,0);
                                  uVar89 = FUN_71ba21e8(uVar89,0xbf000000);
                                  uVar89 = FUN_71ba0b38(uVar89,0x3f800000);
                                  uVar89 = FUN_71ba21e8(ppppppiVar77,uVar89);
                                  uVar39 = FUN_71ba240c(ppppppiStack_278,uVar39);
                                  uVar39 = FUN_71ba21e8(uVar89,uVar39);
                                  uVar39 = FUN_71ba0b38(uVar39,uVar40);
                                  iVar23 = FUN_71ba0b38(uVar39,piStack_280[uStack_29c]);
                                  piStack_280[uStack_29c] = iVar23;
                                  uVar39 = FUN_71ba240c(ppppppiStack_278,ppppppiVar35);
                                  uVar39 = FUN_71ba21e8(ppppppiVar77,uVar39);
                                  iVar23 = FUN_71ba0b38(uVar39,piVar53[uStack_29c + 1]);
                                  piVar53[uStack_29c + 1] = iVar23;
                                }
                                pppppppiVar68 = (int *******)*pppppppiVar68;
                              }
                              else {
                                iVar23 = FUN_71ba2d10(ppppppiVar77,uVar20);
                                if (iVar23 == 0) {
LAB_7190271c:
                                  pppppppiVar68 = (int *******)*pppppppiVar68;
                                }
                                else {
                                  iVar23 = FUN_71ba2d50(ppppppiVar77,0);
                                  if (iVar23 == 0) {
                                    iVar23 = 0;
                                  }
                                  else {
                                    iVar23 = FUN_71ba17bc(ppppppiVar77);
                                    FUN_7190e7e4(piStack_280,iVar23,pppppppiVar68,ppppppiVar77,
                                                 ppppppiVar31,ppppppiVar77,ppppppiVar32);
                                    iVar23 = iVar23 + 1;
                                  }
                                  FUN_7190e7e4(piVar53,iVar23,pppppppiVar68,ppppppiVar77,
                                               ppppppiVar31,ppppppiVar77,ppppppiVar32);
                                  pppppppiVar68 = (int *******)*pppppppiVar68;
                                }
                              }
                            }
                            if (uVar52 < 0x7fffffff) {
                              uVar39 = 0;
                              piVar70 = piStack_280;
                              puVar22 = puStack_300;
                              iVar23 = iVar24;
                              do {
                                uVar39 = FUN_71ba0b38(uVar39,piVar70[(uint)uVar11 + (1 - uVar90)]);
                                uVar63 = FUN_71ba0b38(*piVar70,uVar39);
                                uVar40 = FUN_71ba21e8(uVar63 & 0x7fffffff,0x437f0000);
                                FUN_71ba0b38(uVar40,0x3f000000);
                                iVar76 = FUN_71ba17bc();
                                if (0xfe < iVar76) {
                                  iVar76 = 0xff;
                                }
                                iVar23 = iVar23 + -1;
                                *puVar22 = (char)iVar76;
                                piVar70 = piVar70 + 1;
                                puVar22 = puVar22 + 1;
                              } while (iVar23 != 0);
                            }
                            pppppppiVar68 = pppppppiStack_254;
                            if (pppppppiStack_254 != (int *******)0x0) {
                              pppppppiVar78 = (int *******)&pppppppiStack_254;
                              pppppppiVar83 = pppppppiStack_254;
                              do {
                                ppppppiVar31 = (int ******)
                                               FUN_71ba0b38(pppppppiVar83[2],pppppppiVar83[1]);
                                pppppppiVar83[1] = ppppppiVar31;
                                pppppppiVar78 = (int *******)*pppppppiVar78;
                                pppppppiVar83 = (int *******)*pppppppiVar78;
                              } while (pppppppiVar83 != (int *******)0x0);
                            }
                            puStack_300 = puStack_300 + iStack_288;
                            iVar58 = iVar58 + 1;
                            bVar101 = uStack_310 != uStack_30c;
                            uStack_310 = uStack_310 + 1;
                          } while (bVar101);
                          while (piStack_2e0 != (int *)0x0) {
                            piStack_2e0 = (int *)*piStack_2e0;
                            FUN_718c8b14();
                          }
                        }
                        if (piStack_280 != &iStack_230) {
                          FUN_718c8b14(piStack_280);
                        }
                        FUN_718c8b14(puVar51);
                      }
                      FUN_718c8b14(iVar48);
                      iVar48 = iVar93;
LAB_719033b8:
                      FUN_718c8b14(iVar48);
                    }
                  }
                }
                FUN_718c8b14(psStack_238);
                uVar52 = (uint)*(ushort *)(iVar59 + 8);
                if (1 < uVar90) {
                  uVar7 = *(ushort *)(iVar59 + 6);
                  uVar63 = (uint)*(ushort *)(iVar59 + 4);
                  psStack_22c = (short *)0x0;
                  iStack_230 = 0;
                  if (uVar7 != 0) {
                    iVar47 = iStack_288 * (uint)*(ushort *)(iVar59 + 10) + iVar44 + uVar52;
                    uVar86 = 0;
                    uVar74 = (1 - uVar90) + uVar63;
                    iVar58 = uVar63 - uVar90;
                    uVar52 = iVar58 + 1;
                    do {
                      imp___memset_chk(&iStack_230,0,uVar90,8);
                      uVar95 = uVar52;
                      switch(uVar90) {
                      case 2:
                        if (iVar58 < 0) {
LAB_71901b4c:
                          uVar66 = 0;
                          uVar95 = 0;
                        }
                        else {
                          uVar66 = 0;
                          uVar80 = 0;
                          do {
                            uVar66 = ((uint)*(byte *)(iVar47 + uVar80) -
                                     (uint)*(byte *)((uint)&iStack_230 | uVar80 & 7)) + uVar66;
                            *(byte *)((uint)&iStack_230 | uVar80 + 2 & 7) =
                                 *(byte *)(iVar47 + uVar80);
                            *(char *)(iVar47 + uVar80) = (char)(uVar66 >> 1);
                            uVar80 = uVar80 + 1;
                          } while (uVar74 != uVar80);
                        }
                        break;
                      case 3:
                        if (iVar58 < 0) {
LAB_71901b58:
                          uVar66 = 0;
                          uVar95 = 0;
                        }
                        else {
                          uVar66 = 0;
                          uVar80 = 0;
                          do {
                            uVar66 = ((uint)*(byte *)(iVar47 + uVar80) -
                                     (uint)*(byte *)((uint)&iStack_230 | uVar80 & 7)) + uVar66;
                            *(byte *)((uint)&iStack_230 | uVar80 + 3 & 7) =
                                 *(byte *)(iVar47 + uVar80);
                            *(char *)(iVar47 + uVar80) = (char)(uVar66 / 3);
                            uVar80 = uVar80 + 1;
                          } while (uVar74 != uVar80);
                        }
                        break;
                      case 4:
                        if (iVar58 < 0) goto LAB_71901b4c;
                        uVar66 = 0;
                        uVar80 = 0;
                        do {
                          bVar3 = *(byte *)(iVar47 + uVar80);
                          bVar4 = *(byte *)((uint)&iStack_230 | uVar80 & 7);
                          *(byte *)((uint)&iStack_230 | uVar80 & 7 ^ 4) = bVar3;
                          uVar66 = ((uint)bVar3 - (uint)bVar4) + uVar66;
                          *(char *)(iVar47 + uVar80) = (char)(uVar66 >> 2);
                          uVar80 = uVar80 + 1;
                        } while (uVar74 != uVar80);
                        break;
                      case 5:
                        if (iVar58 < 0) goto LAB_71901b58;
                        uVar66 = 0;
                        uVar80 = 0;
                        do {
                          uVar66 = ((uint)*(byte *)(iVar47 + uVar80) -
                                   (uint)*(byte *)((uint)&iStack_230 | uVar80 & 7)) + uVar66;
                          *(byte *)((uint)&iStack_230 | uVar80 + 5 & 7) = *(byte *)(iVar47 + uVar80)
                          ;
                          *(char *)(iVar47 + uVar80) = (char)(uVar66 / 5);
                          uVar80 = uVar80 + 1;
                        } while (uVar74 != uVar80);
                        break;
                      default:
                        if (iVar58 < 0) {
                          uVar66 = 0;
                          uVar95 = 0;
                        }
                        else {
                          uVar66 = 0;
                          uVar80 = 0;
                          do {
                            uVar66 = ((uint)*(byte *)(iVar47 + uVar80) -
                                     (uint)*(byte *)((uint)&iStack_230 | uVar80 & 7)) + uVar66;
                            *(byte *)((uint)&iStack_230 | uVar90 + uVar80 & 7) =
                                 *(byte *)(iVar47 + uVar80);
                            uVar13 = FUN_71ba0484(uVar66,uVar90);
                            *(undefined1 *)(iVar47 + uVar80) = uVar13;
                            uVar80 = uVar80 + 1;
                          } while (uVar74 != uVar80);
                        }
                      }
                      if ((int)uVar95 < (int)uVar63) {
                        do {
                          uVar66 = uVar66 - *(byte *)((uint)&iStack_230 | uVar95 & 7);
                          uVar13 = FUN_71ba0484(uVar66,uVar90);
                          *(undefined1 *)(iVar47 + uVar95) = uVar13;
                          uVar95 = uVar95 + 1;
                        } while (uVar63 != uVar95);
                      }
                      uVar86 = uVar86 + 1;
                      iVar47 = iVar47 + iStack_288;
                    } while (uVar86 != uVar7);
                    uVar52 = (uint)*(ushort *)(iVar59 + 8);
                  }
                }
                if (1 < uVar100) {
                  uVar7 = *(ushort *)(iVar59 + 4);
                  uVar63 = (uint)*(ushort *)(iVar59 + 6);
                  psStack_22c = (short *)0x0;
                  iStack_230 = 0;
                  if (uVar7 != 0) {
                    uVar74 = 0;
                    iVar47 = iStack_288 * (uint)*(ushort *)(iVar59 + 10) + iVar44 + uVar52;
                    uVar52 = (1 - uVar100) + uVar63;
                    iVar58 = uVar63 - uVar100;
                    uVar86 = iVar58 + 1;
                    do {
                      imp___memset_chk(&iStack_230,0,uVar100,8);
                      uVar95 = uVar86;
                      switch(uVar100) {
                      case 2:
                        if (iVar58 < 0) {
LAB_719021d8:
                          uVar66 = 0;
                          uVar95 = 0;
                        }
                        else {
                          iVar23 = 0;
                          uVar66 = 0;
                          uVar80 = 0;
                          do {
                            uVar54 = uVar80 & 7;
                            uVar81 = uVar80 + 2;
                            uVar80 = uVar80 + 1;
                            uVar66 = ((uint)*(byte *)(iVar47 + iVar23) -
                                     (uint)*(byte *)((uint)&iStack_230 | uVar54)) + uVar66;
                            *(byte *)((uint)&iStack_230 | uVar81 & 7) = *(byte *)(iVar47 + iVar23);
                            *(char *)(iVar47 + iVar23) = (char)(uVar66 >> 1);
                            iVar23 = iVar23 + iStack_288;
                          } while (uVar52 != uVar80);
                        }
                        break;
                      case 3:
                        if (iVar58 < 0) {
LAB_719021e4:
                          uVar66 = 0;
                          uVar95 = 0;
                        }
                        else {
                          iVar23 = 0;
                          uVar66 = 0;
                          uVar80 = 0;
                          do {
                            uVar54 = uVar80 & 7;
                            uVar81 = uVar80 + 3;
                            uVar80 = uVar80 + 1;
                            uVar66 = ((uint)*(byte *)(iVar47 + iVar23) -
                                     (uint)*(byte *)((uint)&iStack_230 | uVar54)) + uVar66;
                            *(byte *)((uint)&iStack_230 | uVar81 & 7) = *(byte *)(iVar47 + iVar23);
                            *(char *)(iVar47 + iVar23) = (char)(uVar66 / 3);
                            iVar23 = iVar23 + iStack_288;
                          } while (uVar52 != uVar80);
                        }
                        break;
                      case 4:
                        if (iVar58 < 0) goto LAB_719021d8;
                        iVar23 = 0;
                        uVar66 = 0;
                        uVar80 = 0;
                        do {
                          uVar54 = uVar80 & 7;
                          bVar3 = *(byte *)(iVar47 + iVar23);
                          uVar80 = uVar80 + 1;
                          bVar4 = *(byte *)((uint)&iStack_230 | uVar54);
                          *(byte *)((uint)&iStack_230 | uVar54 ^ 4) = bVar3;
                          uVar66 = ((uint)bVar3 - (uint)bVar4) + uVar66;
                          *(char *)(iVar47 + iVar23) = (char)(uVar66 >> 2);
                          iVar23 = iVar23 + iStack_288;
                        } while (uVar52 != uVar80);
                        break;
                      case 5:
                        if (iVar58 < 0) goto LAB_719021e4;
                        iVar23 = 0;
                        uVar66 = 0;
                        uVar80 = 0;
                        do {
                          uVar54 = uVar80 & 7;
                          uVar81 = uVar80 + 5;
                          uVar80 = uVar80 + 1;
                          uVar66 = ((uint)*(byte *)(iVar47 + iVar23) -
                                   (uint)*(byte *)((uint)&iStack_230 | uVar54)) + uVar66;
                          *(byte *)((uint)&iStack_230 | uVar81 & 7) = *(byte *)(iVar47 + iVar23);
                          *(char *)(iVar47 + iVar23) = (char)(uVar66 / 5);
                          iVar23 = iVar23 + iStack_288;
                        } while (uVar52 != uVar80);
                        break;
                      default:
                        if (iVar58 < 0) {
                          uVar66 = 0;
                          uVar95 = 0;
                        }
                        else {
                          iVar23 = 0;
                          uVar66 = 0;
                          uVar80 = 0;
                          do {
                            uVar66 = ((uint)*(byte *)(iVar47 + iVar23) -
                                     (uint)*(byte *)((uint)&iStack_230 | uVar80 & 7)) + uVar66;
                            *(byte *)((uint)&iStack_230 | uVar100 + uVar80 & 7) =
                                 *(byte *)(iVar47 + iVar23);
                            uVar13 = FUN_71ba0484(uVar66,uVar100);
                            *(undefined1 *)(iVar47 + iVar23) = uVar13;
                            uVar80 = uVar80 + 1;
                            iVar23 = iVar23 + iStack_288;
                          } while (uVar52 != uVar80);
                        }
                      }
                      if ((int)uVar95 < (int)uVar63) {
                        iVar23 = iStack_288 * uVar95;
                        do {
                          uVar66 = uVar66 - *(byte *)((uint)&iStack_230 | uVar95 & 7);
                          uVar13 = FUN_71ba0484(uVar66,uVar100);
                          uVar95 = uVar95 + 1;
                          *(undefined1 *)(iVar47 + iVar23) = uVar13;
                          iVar23 = iVar23 + iStack_288;
                        } while (uVar63 != uVar95);
                      }
                      iVar47 = iVar47 + 1;
                      uVar74 = uVar74 + 1;
                    } while (uVar74 != uVar7);
                    uVar52 = (uint)*(ushort *)(iVar59 + 8);
                  }
                }
                puVar65 = (undefined2 *)(iVar21 + iVar92 * 0x1c);
                *puVar65 = (short)uVar52;
                puVar65[1] = *(undefined2 *)(iVar59 + 10);
                puVar65[2] = *(short *)(iVar59 + 4) + *(short *)(iVar59 + 8);
                uVar19 = FUN_71ba1b94((int)CONCAT11(uVar5,uVar6));
                uVar19 = FUN_71ba21e8(uVar85,uVar19);
                sVar10 = *(short *)(iVar59 + 6);
                sVar9 = *(short *)(iVar59 + 10);
                *(undefined4 *)(puVar65 + 8) = uVar19;
                puVar65[3] = sVar10 + sVar9;
                uVar19 = FUN_71ba1b94(psStack_23c);
                uVar19 = FUN_71ba21e8(uVar19,uVar18);
                uVar19 = FUN_71ba0b38(uVar19,uVar15);
                *(undefined4 *)(puVar65 + 4) = uVar19;
                uVar19 = FUN_71ba1b94(uStack_240);
                uVar19 = FUN_71ba21e8(uVar19,uVar73);
                uVar19 = FUN_71ba0b38(uVar19,uVar43);
                *(undefined4 *)(puVar65 + 6) = uVar19;
                uVar19 = FUN_71ba1b94((int)psStack_23c + (uint)*(ushort *)(iVar59 + 4));
                uVar19 = FUN_71ba21e8(uVar19,uVar18);
                uVar19 = FUN_71ba0b38(uVar19,uVar15);
                *(undefined4 *)(puVar65 + 10) = uVar19;
                uVar19 = FUN_71ba1b94(uStack_240 + *(ushort *)(iVar59 + 6));
                uVar19 = FUN_71ba21e8(uVar19,uVar73);
                uVar19 = FUN_71ba0b38(uVar19,uVar43);
                *(undefined4 *)(puVar65 + 0xc) = uVar19;
                iVar58 = *(int *)(iVar72 + 0x88);
                uVar52 = uVar15;
              }
            }
            iVar92 = iVar92 + 1;
          } while (iVar92 < iVar58);
        }
        uVar43 = *(undefined4 *)(iVar84 + uVar14 * 0x78 + 0x44);
        iVar84 = FUN_71ba2cf0(uVar43,0x3f800000);
        if (iVar84 == 0) {
          iVar84 = 0;
          do {
            uVar50 = FUN_71ba1e0c(iVar84);
            FUN_71ba21e8(uVar43,uVar50);
            uVar15 = FUN_71ba1910();
            if (0xfe < uVar15) {
              uVar15 = 0xff;
            }
            *(char *)((int)&iStack_230 + iVar84) = (char)uVar15;
            iVar84 = iVar84 + 1;
          } while (iVar84 != 0x100);
          iVar84 = *(int *)(iVar72 + 0xa8);
          if (0 < iVar84) {
            iVar58 = 0;
            iVar64 = *(int *)(iVar72 + 0x94);
            do {
              bVar101 = *(int *)(iVar64 + 0xc) != 0;
              uVar15 = 0;
              if (bVar101) {
                uVar15 = (uint)*(ushort *)(iVar64 + 6);
              }
              if (bVar101 && uVar15 != 0) {
                iVar84 = *(int *)(param_1 + 0x1c);
                uVar7 = *(ushort *)(iVar64 + 4);
                iVar92 = iVar84 * (uint)*(ushort *)(iVar64 + 10) +
                         *(int *)(param_1 + 0x14) + (uint)*(ushort *)(iVar64 + 8);
                do {
                  if (uVar7 != 0) {
                    uVar85 = 0;
                    do {
                      *(undefined1 *)(iVar92 + uVar85) =
                           *(undefined1 *)((int)&iStack_230 + (uint)*(byte *)(iVar92 + uVar85));
                      uVar85 = uVar85 + 1;
                    } while (uVar7 != uVar85);
                  }
                  iVar92 = iVar92 + iVar84;
                  uVar85 = uVar15 - 1;
                  bVar101 = 0 < (int)uVar15;
                  uVar15 = uVar85;
                } while (uVar85 != 0 && bVar101);
                iVar84 = *(int *)(iVar72 + 0xa8);
              }
              iVar58 = iVar58 + 1;
              iVar64 = iVar64 + 0x10;
            } while (iVar58 < iVar84);
          }
        }
        *(undefined4 *)(iVar72 + 0x94) = 0;
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar71);
  }
  FUN_718c8b14(iStack_374);
  FUN_718c8b14(piVar16);
  if (iVar62 != 0) {
    FUN_718c8b14();
  }
  if (0 < (int)uVar71) {
    uVar14 = 0;
    do {
      iVar62 = uVar14 * 0xc4 + iStack_2f8;
      if (*(int *)(iVar62 + 0xa8) != 0) {
        iVar44 = *(int *)(iVar62 + 4) + *(int *)(iVar62 + 0x1c);
        uVar7 = *(ushort *)(iVar44 + 6);
        uVar8 = *(ushort *)(iVar44 + 4);
        iVar72 = (int)(short)(uVar8 << 8 | uVar8 >> 8);
        uVar43 = FUN_71ba1b94(iVar72 - ((int)((uint)uVar7 << 0x18 | (uint)(uVar7 >> 8) << 0x10) >>
                                       0x10));
        iVar64 = *(int *)(param_1 + 0x54) + uVar14 * 0x78;
        iVar44 = *(int *)(iVar64 + 0x74);
        uVar43 = FUN_71ba13e0(*(undefined4 *)(iVar64 + 0x10),uVar43);
        iVar84 = (int)(short)(uVar7 << 8 | uVar7 >> 8);
        uVar50 = FUN_71ba1b94(iVar84);
        uVar50 = FUN_71ba21e8(uVar50,uVar43);
        uVar18 = 0x3f800000;
        if (iVar84 < 1) {
          uVar18 = 0xbf800000;
        }
        FUN_71ba0b38(uVar50,uVar18);
        FUN_71ba17bc();
        uVar50 = FUN_71ba1b94();
        uVar18 = FUN_71ba1b94(iVar72);
        uVar43 = FUN_71ba21e8(uVar18,uVar43);
        uVar18 = 0x3f800000;
        if (iVar72 < 1) {
          uVar18 = 0xbf800000;
        }
        FUN_71ba0b38(uVar43,uVar18);
        FUN_71ba17bc();
        uVar43 = FUN_71ba1b94();
        FUN_71905c60(param_1,iVar44,iVar64,uVar43,uVar50);
        FUN_71ba0b38(*(undefined4 *)(iVar44 + 0x44),0x3f000000);
        FUN_71ba17bc();
        uVar43 = FUN_71ba1b94();
        uVar50 = *(undefined4 *)(iVar64 + 0x28);
        uVar43 = FUN_71ba0b38(*(undefined4 *)(iVar64 + 0x2c),uVar43);
        if (0 < *(int *)(iVar62 + 0xa8)) {
          iVar72 = 0;
          iVar84 = 0;
          do {
            uVar73 = *(undefined4 *)(param_1 + 0x20);
            uVar18 = FUN_71ba1b94(*(undefined4 *)(param_1 + 0x1c));
            uVar18 = FUN_71ba13e0(0x3f800000,uVar18);
            iVar58 = *(int *)(iVar62 + 0xc0);
            puVar65 = (undefined2 *)(*(int *)(iVar62 + 0x98) + iVar72);
            uVar19 = FUN_71ba1e0c(*puVar65);
            uVar19 = FUN_71ba21e8(uVar18,uVar19);
            uVar73 = FUN_71ba1b94(uVar73);
            uVar73 = FUN_71ba13e0(0x3f800000,uVar73);
            uVar20 = FUN_71ba1e0c(puVar65[1]);
            uVar20 = FUN_71ba21e8(uVar73,uVar20);
            uVar39 = FUN_71ba1e0c(puVar65[2]);
            uVar18 = FUN_71ba21e8(uVar18,uVar39);
            uVar39 = FUN_71ba1e0c(puVar65[3]);
            uVar73 = FUN_71ba21e8(uVar73,uVar39);
            uVar39 = *(undefined4 *)(puVar65 + 4);
            uVar49 = *(undefined4 *)(puVar65 + 8);
            uVar89 = *(undefined4 *)(puVar65 + 10);
            uVar40 = FUN_71ba0b38(*(undefined4 *)(puVar65 + 6),0);
            uVar40 = FUN_71ba0b38(uVar43,uVar40);
            uVar89 = FUN_71ba0b38(uVar89,0);
            uVar89 = FUN_71ba0b38(uVar50,uVar89);
            uVar41 = FUN_71ba0b38(*(undefined4 *)(puVar65 + 0xc),0);
            uVar41 = FUN_71ba0b38(uVar43,uVar41);
            uVar39 = FUN_71ba0b38(uVar39,0);
            uVar39 = FUN_71ba0b38(uVar50,uVar39);
            FUN_71907320(iVar44,iVar64,*(undefined2 *)(iVar58 + iVar84 * 4),uVar39,uVar40,uVar89,
                         uVar41,uVar19,uVar20,uVar18,uVar73,uVar49);
            iVar84 = iVar84 + 1;
            iVar72 = iVar72 + 0x1c;
          } while (iVar84 < *(int *)(iVar62 + 0xa8));
        }
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar71);
    if (0 < (int)uVar71) {
      piVar16 = (int *)(iStack_2f8 + 0xb4);
      do {
        if (piVar16[3] != 0) {
          FUN_718c8b14();
        }
        if (*piVar16 != 0) {
          FUN_718c8b14();
        }
        piVar16 = piVar16 + 0x31;
        uVar71 = uVar71 - 1;
      } while (uVar71 != 0);
    }
  }
  FUN_7190673c(param_1);
LAB_71903838:
  if (iStack_33c != 0) {
    FUN_718c8b14();
  }
  if (iStack_2f8 != 0) {
    FUN_718c8b14();
  }
  if (_ext___stack_chk_guard != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail(iStack_2c);
  }
  return;
code_r0x719002f0:
  uVar100 = *(uint *)(pbVar55 + iVar84 + 0x14);
  uVar100 = uVar100 << 0x18 | (uVar100 >> 8 & 0xff) << 0x10 | (uVar100 >> 0x10 & 0xff) << 8 |
            uVar100 >> 0x18;
  if (uVar100 == 0) goto LAB_71903838;
  uVar52 = 0;
  *(undefined4 *)(iVar72 + 100) = 0;
  *(byte **)(iVar72 + 0x34) = pbVar55 + uVar100;
  *(undefined4 *)(iVar72 + 0x3c) = 0x20000000;
  iStack_230 = *(int *)(iVar72 + 0x34);
  *(undefined4 *)(iVar72 + 0x38) = 0;
  *(undefined4 *)(iVar72 + 0x68) = 0;
  *(undefined4 *)(iVar72 + 0x6c) = 0;
  *(undefined4 *)(iVar72 + 0x70) = 0;
  *(undefined4 *)(iVar72 + 0x74) = 0;
  *(undefined4 *)(iVar72 + 0x78) = 0;
  psStack_22c = *(short **)(iVar72 + 0x38);
  psVar98 = *(short **)(iVar72 + 0x3c);
  psVar46 = psStack_22c + 1;
  if ((int)psVar98 < (int)(psStack_22c + 1)) {
    psVar46 = psVar98;
  }
  if ((int)psStack_22c < -2) {
    psVar46 = psVar98;
  }
  psVar45 = (short *)0x0;
  if ((int)psVar46 < (int)psVar98) {
    psVar45 = (short *)(uint)*(byte *)(iStack_230 + (int)psVar46);
  }
  psVar46 = psVar45;
  if ((int)psVar98 < (int)psVar45) {
    psVar46 = psVar98;
  }
  if ((int)psVar45 < (int)psVar98) {
    pbVar1 = (byte *)(iStack_230 + (int)psVar46);
    psVar46 = (short *)((int)psVar46 + 1);
    uVar52 = (uint)*pbVar1 << 8;
  }
  uVar100 = 0;
  if ((int)psVar46 < (int)psVar98) {
    uVar100 = (uint)*(byte *)(iStack_230 + (int)psVar46);
    psVar46 = (short *)((int)psVar46 + 1);
  }
  if ((uVar100 | uVar52) != 0) {
    uVar56 = 0;
    if ((int)psVar46 < (int)psVar98) {
      uVar56 = (uint)*(byte *)(iStack_230 + (int)psVar46);
      psVar46 = (short *)((int)psVar46 + 1);
    }
    psVar57 = (short *)(uVar56 * (uVar100 | uVar52) + (int)psVar46);
    psVar45 = psVar57;
    if ((int)psVar98 < (int)psVar57) {
      psVar45 = psVar98;
    }
    if ((int)psVar57 < 0) {
      psVar45 = psVar98;
    }
    if (uVar56 == 0) {
      iVar44 = -1;
    }
    else {
      uVar100 = 0;
      do {
        if ((int)psVar45 < (int)psVar98) {
          uVar52 = (uint)*(byte *)(iStack_230 + (int)psVar45);
          psVar46 = (short *)((int)psVar45 + 1);
          psVar45 = psVar46;
        }
        else {
          uVar52 = 0;
        }
        uVar56 = uVar56 - 1;
        uVar100 = uVar100 << 8 | uVar52;
      } while (uVar56 != 0);
      iVar44 = uVar100 - 1;
      psStack_22c = psVar46;
    }
    psVar45 = (short *)(iVar44 + (int)psVar45);
    psVar46 = psVar45;
    if ((int)psVar98 < (int)psVar45) {
      psVar46 = psVar98;
    }
    if ((int)psVar45 < 0) {
      psVar46 = psVar98;
    }
  }
  uVar52 = 0;
  uVar100 = 0;
  psVar45 = psVar46;
  if ((int)psVar46 < (int)psVar98) {
    psVar45 = (short *)((int)psVar46 + 1);
    uVar100 = (uint)*(byte *)(iStack_230 + (int)psVar46) << 8;
  }
  if ((int)psVar45 < (int)psVar98) {
    uVar52 = (uint)*(byte *)(iStack_230 + (int)psVar45);
    psVar45 = (short *)((int)psVar45 + 1);
  }
  if ((uVar52 | uVar100) != 0) {
    uVar56 = 0;
    if ((int)psVar45 < (int)psVar98) {
      uVar56 = (uint)*(byte *)(iStack_230 + (int)psVar45);
      psVar45 = (short *)((int)psVar45 + 1);
    }
    psVar45 = (short *)(uVar56 * (uVar52 | uVar100) + (int)psVar45);
    psVar57 = psVar45;
    if ((int)psVar98 < (int)psVar45) {
      psVar57 = psVar98;
    }
    if ((int)psVar45 < 0) {
      psVar57 = psVar98;
    }
    if (uVar56 == 0) {
      iVar44 = -1;
    }
    else {
      uVar100 = 0;
      do {
        if ((int)psVar57 < (int)psVar98) {
          uVar52 = (uint)*(byte *)(iStack_230 + (int)psVar57);
          psVar57 = (short *)((int)psVar57 + 1);
        }
        else {
          uVar52 = 0;
        }
        uVar56 = uVar56 - 1;
        uVar100 = uVar100 << 8 | uVar52;
      } while (uVar56 != 0);
      iVar44 = uVar100 - 1;
    }
    psVar57 = (short *)(iVar44 + (int)psVar57);
    psVar45 = psVar57;
    if ((int)psVar98 < (int)psVar57) {
      psVar45 = psVar98;
    }
    if ((int)psVar57 < 0) {
      psVar45 = psVar98;
    }
  }
  uVar100 = (int)psVar45 - (int)psVar46;
  if (-1 < (int)(uVar100 | (uint)psVar46)) {
    uVar52 = 0;
    ppppppiStack_278 = (int ******)0x0;
    if ((int)psVar46 <= (int)psVar98) {
      iVar44 = 0;
      uVar56 = 0;
      uStack_24c = 0;
      uVar97 = 0;
      if ((int)psVar45 <= (int)psVar98) {
        if ((int)uVar100 < 0) {
          uVar56 = uVar100;
        }
        iVar44 = iStack_230 + (int)psVar46;
        if ((int)uVar100 < 1) {
          uVar97 = 0;
        }
        else {
          pbVar1 = (byte *)(iVar44 + uVar56);
          uVar56 = 1;
          uVar97 = (uint)*pbVar1 << 8;
        }
        if ((int)uVar56 < (int)uVar100) {
          uVar52 = (uint)*(byte *)(iVar44 + uVar56);
          uVar56 = uVar56 + 1;
        }
        ppppppiStack_278 = (int ******)(uVar52 | uVar97);
        uVar52 = uVar100;
        if (((int)uVar56 < (int)uVar100) && (uVar97 = (uint)*(byte *)(iVar44 + uVar56), uVar97 != 0)
           ) {
          uVar63 = uVar100;
          if (-2 < (int)uVar56) {
            uVar63 = uVar56 + 1;
          }
          uVar56 = 0;
          uVar86 = uVar97;
          do {
            if ((int)uVar63 < (int)uVar100) {
              uVar74 = (uint)*(byte *)(iVar44 + uVar63);
              uVar63 = uVar63 + 1;
            }
            else {
              uVar74 = 0;
            }
            uVar86 = uVar86 - 1;
            uVar56 = uVar56 << 8 | uVar74;
          } while (uVar86 != 0);
          uStack_24c = 0;
          uVar86 = uVar97;
          do {
            if ((int)uVar63 < (int)uVar100) {
              uVar74 = (uint)*(byte *)(iVar44 + uVar63);
              uVar63 = uVar63 + 1;
            }
            else {
              uVar74 = 0;
            }
            uStack_24c = uStack_24c << 8 | uVar74;
            uVar86 = uVar86 - 1;
          } while (uVar86 != 0);
        }
        else {
          uVar56 = 0;
          uVar97 = 0;
        }
      }
      goto LAB_7190063c;
    }
  }
  ppppppiStack_278 = (int ******)0x0;
  iVar44 = 0;
  uVar97 = 0;
  uVar56 = 0;
  uStack_24c = 0;
  uVar52 = 0;
LAB_7190063c:
  uStack_24c = uStack_24c - uVar56;
  uVar100 = uVar97 * ((int)ppppppiStack_278 + 1U) + uVar56 + 2;
  if ((int)(uStack_24c | uVar100) < 0) {
    pppppppiStack_254 = (int *******)0x0;
    uStack_24c = 0;
  }
  else {
    pppppppiStack_254 = (int *******)(iVar44 + uVar100);
    if ((int)uVar52 < (int)uVar100 || (int)(uVar52 - uVar100) < (int)uStack_24c) {
      uStack_24c = 0;
      pppppppiStack_254 = (int *******)0x0;
    }
  }
  uVar100 = 0;
  uStack_250 = 0;
  if ((int)psVar45 < (int)psVar98) {
    pbVar1 = (byte *)(iStack_230 + (int)psVar45);
    psVar45 = (short *)((int)psVar45 + 1);
    uVar52 = (uint)*pbVar1 << 8;
  }
  else {
    uVar52 = 0;
  }
  if ((int)psVar45 < (int)psVar98) {
    uVar100 = (uint)*(byte *)(iStack_230 + (int)psVar45);
    psVar45 = (short *)((int)psVar45 + 1);
  }
  if ((uVar100 | uVar52) != 0) {
    uVar56 = 0;
    if ((int)psVar45 < (int)psVar98) {
      uVar56 = (uint)*(byte *)(iStack_230 + (int)psVar45);
      psVar45 = (short *)((int)psVar45 + 1);
    }
    psVar57 = (short *)(uVar56 * (uVar100 | uVar52) + (int)psVar45);
    psVar46 = psVar57;
    if ((int)psVar98 < (int)psVar57) {
      psVar46 = psVar98;
    }
    if ((int)psVar57 < 0) {
      psVar46 = psVar98;
    }
    if (uVar56 == 0) {
      iVar44 = -1;
    }
    else {
      uVar100 = 0;
      do {
        if ((int)psVar46 < (int)psVar98) {
          uVar52 = (uint)*(byte *)(iStack_230 + (int)psVar46);
          psVar46 = (short *)((int)psVar46 + 1);
          psVar45 = psVar46;
        }
        else {
          uVar52 = 0;
        }
        uVar56 = uVar56 - 1;
        uVar100 = uVar100 << 8 | uVar52;
      } while (uVar56 != 0);
      iVar44 = uVar100 - 1;
      psStack_22c = psVar45;
    }
    psVar46 = (short *)(iVar44 + (int)psVar46);
    psVar45 = psVar46;
    if ((int)psVar98 < (int)psVar46) {
      psVar45 = psVar98;
    }
    if ((int)psVar46 < 0) {
      psVar45 = psVar98;
    }
  }
  uVar52 = 0;
  uVar100 = 0;
  psVar46 = psVar45;
  if ((int)psVar45 < (int)psVar98) {
    psVar46 = (short *)((int)psVar45 + 1);
    uVar100 = (uint)*(byte *)(iStack_230 + (int)psVar45) << 8;
  }
  if ((int)psVar46 < (int)psVar98) {
    uVar52 = (uint)*(byte *)(iStack_230 + (int)psVar46);
    psVar46 = (short *)((int)psVar46 + 1);
  }
  if ((uVar52 | uVar100) != 0) {
    uVar56 = 0;
    if ((int)psVar46 < (int)psVar98) {
      uVar56 = (uint)*(byte *)(iStack_230 + (int)psVar46);
      psVar46 = (short *)((int)psVar46 + 1);
    }
    psVar46 = (short *)(uVar56 * (uVar52 | uVar100) + (int)psVar46);
    psVar57 = psVar46;
    if ((int)psVar98 < (int)psVar46) {
      psVar57 = psVar98;
    }
    if ((int)psVar46 < 0) {
      psVar57 = psVar98;
    }
    if (uVar56 == 0) {
      iVar44 = -1;
    }
    else {
      uVar100 = 0;
      do {
        if ((int)psVar57 < (int)psVar98) {
          uVar52 = (uint)*(byte *)(iStack_230 + (int)psVar57);
          psVar57 = (short *)((int)psVar57 + 1);
        }
        else {
          uVar52 = 0;
        }
        uVar56 = uVar56 - 1;
        uVar100 = uVar100 << 8 | uVar52;
      } while (uVar56 != 0);
      iVar44 = uVar100 - 1;
    }
    psVar57 = (short *)(iVar44 + (int)psVar57);
    psVar46 = psVar57;
    if ((int)psVar98 < (int)psVar57) {
      psVar46 = psVar98;
    }
    if ((int)psVar57 < 0) {
      psVar46 = psVar98;
    }
  }
  uVar100 = 0;
  if (((int)((int)psVar46 - (int)psVar45 | (uint)psVar45) < 0) || ((int)psVar98 < (int)psVar45)) {
    iVar44 = 0;
  }
  else {
    iVar44 = 0;
    if ((int)psVar46 <= (int)psVar98) {
      iVar44 = iStack_230 + (int)psVar45;
      uVar100 = (int)psVar46 - (int)psVar45;
    }
  }
  *(int *)(iVar72 + 0x4c) = iVar44;
  *(undefined4 *)(iVar72 + 0x50) = 0;
  *(uint *)(iVar72 + 0x54) = uVar100;
  psStack_228 = psVar98;
  FUN_71909e78(&pppppppiStack_254,0x11,1,&psStack_238);
  FUN_71909e78(&pppppppiStack_254,0x106,1,&iStack_234);
  FUN_71909e78(&pppppppiStack_254,0x124,1,&psStack_23c);
  FUN_71909e78(&pppppppiStack_254,0x125,1,&uStack_240);
  iVar44 = iStack_230;
  FUN_7190a080(&uStack_260,iStack_230,psVar46,psVar98,pppppppiStack_254,uStack_250,uStack_24c);
  psVar46 = psStack_238;
  uVar100 = uStack_240;
  *(undefined4 *)(iVar72 + 0x58) = uStack_260;
  *(undefined4 *)(iVar72 + 0x5c) = uStack_25c;
  *(undefined4 *)(iVar72 + 0x60) = uStack_258;
  if ((iStack_234 != 2) || (psStack_238 == (short *)0x0)) goto LAB_71903838;
  if (psStack_23c != (short *)0x0) {
    if (uStack_240 == 0) goto LAB_71903838;
    psStack_22c = psStack_23c;
    if ((int)psVar98 < (int)psStack_23c) {
      psStack_22c = psVar98;
    }
    if ((int)psStack_23c < 0) {
      psStack_22c = psVar98;
    }
    FUN_71909bd4(&uStack_260,&iStack_230);
    *(undefined4 *)(iVar72 + 100) = uStack_260;
    *(undefined4 *)(iVar72 + 0x68) = uStack_25c;
    *(undefined4 *)(iVar72 + 0x6c) = uStack_258;
    *(undefined4 *)(iVar72 + 0x74) = 0;
    uVar52 = (int)psStack_228 - uVar100;
    iVar44 = iStack_230 + uVar100;
    if ((int)psStack_228 < (int)uVar100 || (int)(uVar52 | uVar100) < 0) {
      uVar52 = 0;
      iVar44 = 0;
    }
    *(uint *)(iVar72 + 0x78) = uVar52;
    *(int *)(iVar72 + 0x70) = iVar44;
    psVar98 = psStack_228;
    iVar44 = iStack_230;
  }
  psVar45 = psVar46;
  if ((int)psVar98 < (int)psVar46) {
    psVar45 = psVar98;
  }
  if ((int)psVar46 < 0) {
    psVar45 = psVar98;
  }
  uVar100 = 0;
  psVar46 = psVar45;
  if ((int)psVar45 < (int)psVar98) {
    psVar46 = (short *)(uint)*(byte *)(iVar44 + (int)psVar45);
  }
  uVar52 = 0;
  if ((int)psVar45 < (int)psVar98) {
    uVar100 = (int)psVar46 << 8;
    psVar46 = (short *)((int)psVar45 + 1);
  }
  if ((int)psVar46 < (int)psVar98) {
    uVar52 = (uint)*(byte *)(iVar44 + (int)psVar46);
    psVar46 = (short *)((int)psVar46 + 1);
  }
  if ((uVar52 | uVar100) != 0) {
    uVar56 = 0;
    if ((int)psVar46 < (int)psVar98) {
      uVar56 = (uint)*(byte *)(iVar44 + (int)psVar46);
      psVar46 = (short *)((int)psVar46 + 1);
    }
    psVar46 = (short *)(uVar56 * (uVar52 | uVar100) + (int)psVar46);
    psVar57 = psVar46;
    if ((int)psVar98 < (int)psVar46) {
      psVar57 = psVar98;
    }
    if ((int)psVar46 < 0) {
      psVar57 = psVar98;
    }
    if (uVar56 == 0) {
      iVar84 = -1;
    }
    else {
      uVar100 = 0;
      do {
        if ((int)psVar57 < (int)psVar98) {
          uVar52 = (uint)*(byte *)(iVar44 + (int)psVar57);
          psVar57 = (short *)((int)psVar57 + 1);
        }
        else {
          uVar52 = 0;
        }
        uVar56 = uVar56 - 1;
        uVar100 = uVar100 << 8 | uVar52;
      } while (uVar56 != 0);
      iVar84 = uVar100 - 1;
    }
    psVar57 = (short *)(iVar84 + (int)psVar57);
    psVar46 = psVar57;
    if ((int)psVar98 < (int)psVar57) {
      psVar46 = psVar98;
    }
    if ((int)psVar57 < 0) {
      psVar46 = psVar98;
    }
  }
  uVar100 = (int)psVar46 - (int)psVar45;
  iVar44 = iVar44 + (int)psVar45;
  if ((int)(uVar100 | (uint)psVar45) < 0 || (int)psVar98 < (int)psVar46) {
    iVar44 = 0;
    uVar100 = 0;
  }
  *(int *)(iVar72 + 0x40) = iVar44;
  *(undefined4 *)(iVar72 + 0x44) = 0;
  *(uint *)(iVar72 + 0x48) = uVar100;
LAB_71900090:
  uVar100 = 0xffff;
  if (CONCAT11(pbVar55[uVar15 + 4],pbVar55[uVar15 + 5]) != 0) {
    iVar44 = 0;
    do {
      iVar84 = iVar44 * -0x10 + uVar15;
      if (pbVar55[iVar84 + 0xc] == 0x6d) {
        bVar3 = pbVar55[iVar84 + 0xd];
        bVar101 = bVar3 == 0x61;
        if (bVar101) {
          bVar3 = pbVar55[iVar84 + 0xe];
        }
        if ((bVar101 && bVar3 == 0x78) && (pbVar55[iVar84 + 0xf] == 0x70)) {
          uVar15 = *(uint *)(pbVar55 + iVar84 + 0x14);
          uVar15 = uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
                   uVar15 >> 0x18;
          if (uVar15 != 0) {
            uVar100 = (*(ushort *)(pbVar55 + uVar15 + 4) & 0xff) << 8 |
                      (uint)(*(ushort *)(pbVar55 + uVar15 + 4) >> 8);
          }
          break;
        }
      }
      iVar44 = iVar44 + -1;
    } while (-iVar44 != (uint)pbVar55[uVar15 + 5] + (uint)pbVar55[uVar15 + 4] * 0x100);
  }
  *(uint *)(iVar72 + 0xc) = uVar100;
  bVar3 = pbVar55[uVar90 + 2];
  bVar4 = pbVar55[uVar90 + 3];
  *(undefined4 *)(iVar72 + 0x2c) = 0;
  if (CONCAT11(bVar3,bVar4) == 0) goto LAB_71903838;
  iVar84 = 0;
  iVar44 = 0;
  do {
    iVar64 = iVar44 * -8 + uVar90;
    uVar15 = ((uint)*(ushort *)(pbVar55 + iVar64 + 4) << 0x18 |
             (uint)(*(ushort *)(pbVar55 + iVar64 + 4) >> 8) << 0x10) >> 0x10;
    if (uVar15 == 0) {
LAB_71900154:
      uVar15 = *(uint *)(pbVar55 + iVar64 + 8);
      iVar84 = (uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
               uVar15 >> 0x18) + uVar90;
      *(int *)(iVar72 + 0x2c) = iVar84;
    }
    else if (uVar15 == 3) {
      uVar15 = (uint)*(ushort *)(pbVar55 + iVar64 + 6) << 0x18 |
               (uint)(*(ushort *)(pbVar55 + iVar64 + 6) >> 8) << 0x10;
      bVar101 = uVar15 == 0xa0000;
      if (!bVar101) {
        uVar15 = uVar15 >> 0x10;
      }
      if (bVar101 || uVar15 == 1) goto LAB_71900154;
    }
    iVar44 = iVar44 + -1;
  } while (-iVar44 != (uint)bVar4 + (uint)bVar3 * 0x100);
  if (iVar84 == 0) goto LAB_71903838;
  *(uint *)(iVar72 + 0x30) =
       (*(ushort *)(pbVar55 + uVar85 + 0x32) & 0xff) << 8 |
       (uint)(*(ushort *)(pbVar55 + uVar85 + 0x32) >> 8);
  psVar46 = (short *)puVar51[0xc];
  if ((short *)puVar51[0xc] == (short *)0x0) {
    psVar46 = &DAT_70087a6c;
  }
  *(short **)(iVar72 + 0x9c) = psVar46;
  if (*psVar46 != 0) {
    puVar91 = (ushort *)(psVar46 + 1);
    do {
      uVar15 = (uint)*puVar91;
      if (uVar15 == 0) break;
      if ((int)uVar15 < (int)*(uint *)(iVar72 + 0xa4)) {
        uVar15 = *(uint *)(iVar72 + 0xa4);
      }
      *(uint *)(iVar72 + 0xa4) = uVar15;
      puVar2 = puVar91 + 1;
      puVar91 = puVar91 + 2;
    } while (*puVar2 != 0);
  }
  iVar62 = iVar62 + 1;
  piVar16 = (int *)(iStack_33c + *(int *)(iVar72 + 0xa0) * 0x18);
  *piVar16 = *piVar16 + 1;
  iVar44 = *(int *)(iVar72 + 0xa4);
  if (*(int *)(iVar72 + 0xa4) < piVar16[1]) {
    iVar44 = piVar16[1];
  }
  piVar16[1] = iVar44;
  if (*(int *)(param_1 + 0x4c) <= iVar62) goto LAB_71900acc;
  goto LAB_718ffb28;
}


// =========================================================================
// Function: FUN_71905c60
// Entry: 0x71905c60 | Size: 232 bytes
// =========================================================================

void FUN_71905c60(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 param_4,
                 undefined4 param_5)

{
  short sVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_3 + 0x3c) == '\0') {
    param_2[4] = 0;
    param_2[3] = 0;
    if (param_2[10] != 0) {
      param_2[8] = 0;
      param_2[9] = 0;
      FUN_718c8b14();
      param_2[10] = 0;
    }
    if (param_2[2] != 0) {
      *param_2 = 0;
      param_2[1] = 0;
      FUN_718c8b14();
      param_2[2] = 0;
    }
    if (param_2[7] != 0) {
      param_2[5] = 0;
      param_2[6] = 0;
      FUN_718c8b14();
      param_2[7] = 0;
    }
    sVar1 = 1;
    *(undefined1 *)((int)param_2 + 0x3e) = 1;
    param_2[0xc] = 0;
    param_2[0xb] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    uVar2 = *(undefined4 *)(param_3 + 0x10);
    param_2[0x11] = param_4;
    param_2[0xd] = param_3;
    param_2[4] = uVar2;
    param_2[0xc] = param_1;
    param_2[0x12] = param_5;
  }
  else {
    sVar1 = *(short *)(param_2 + 0xe) + 1;
  }
  *(short *)(param_2 + 0xe) = sVar1;
  return;
}


// =========================================================================
// Function: FUN_71905db4
// Entry: 0x71905db4 | Size: 300 bytes
// =========================================================================

void FUN_71905db4(int param_1,undefined4 param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined2 *puVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  uVar9 = *(uint *)(param_1 + 0x40);
  if ((int)uVar9 < 1) {
    iVar3 = 0;
  }
  else {
    uVar2 = uVar9;
    if (uVar9 < 9) {
      uVar2 = 8;
    }
    iVar3 = FUN_718c8a70(uVar2 << 4);
  }
  imp___aeabi_memclr(iVar3,uVar9 << 4);
  if (0 < *(int *)(param_1 + 0x40)) {
    puVar4 = (undefined2 *)(iVar3 + 4);
    iVar6 = 0;
    iVar7 = 0;
    do {
      iVar7 = iVar7 + 1;
      *puVar4 = *(undefined2 *)(*(int *)(param_1 + 0x48) + iVar6);
      iVar8 = *(int *)(param_1 + 0x48) + iVar6;
      iVar6 = iVar6 + 0x1c;
      puVar4[1] = *(undefined2 *)(iVar8 + 2);
      puVar4 = puVar4 + 8;
    } while (iVar7 < *(int *)(param_1 + 0x40));
  }
  FUN_71905f68(param_2,iVar3,uVar9);
  if ((int)uVar9 < 1) {
    if (iVar3 == 0) {
      return;
    }
  }
  else {
    puVar5 = (ushort *)(iVar3 + 6);
    iVar6 = 0;
    do {
      if (*(int *)(puVar5 + 3) != 0) {
        *(ushort *)(*(int *)(param_1 + 0x48) + iVar6 + 4) = puVar5[1];
        uVar1 = puVar5[2];
        *(ushort *)(*(int *)(param_1 + 0x48) + iVar6 + 6) = uVar1;
        iVar7 = (uint)*puVar5 + (uint)uVar1;
        if (iVar7 < *(int *)(param_1 + 0x20)) {
          iVar7 = *(int *)(param_1 + 0x20);
        }
        *(int *)(param_1 + 0x20) = iVar7;
      }
      iVar6 = iVar6 + 0x1c;
      puVar5 = puVar5 + 8;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  FUN_718c8b14(iVar3);
  return;
}


// =========================================================================
// Function: FUN_71905f68
// Entry: 0x71905f68 | Size: 1508 bytes
// =========================================================================

void FUN_71905f68(int *param_1,int param_2,int param_3)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  undefined2 *puVar4;
  short *psVar5;
  uint extraout_r1;
  uint uVar6;
  uint extraout_r1_00;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ushort *puVar10;
  ushort *puVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  ushort *puVar22;
  ushort *puVar23;
  int iVar24;
  ushort *puVar25;
  uint uVar26;
  int iStack_44;
  uint uStack_40;
  ushort *puStack_3c;
  uint uStack_30;
  uint uStack_2c;
  
  if (param_3 < 1) {
    imp_qsort(param_2,param_3,0x10,&LAB_7190ede4);
  }
  else {
    iVar1 = 0;
    do {
      *(int *)(param_2 + iVar1 * 0x10 + 0xc) = iVar1;
      iVar1 = iVar1 + 1;
    } while (param_3 != iVar1);
    imp_qsort(param_2,param_3,0x10,&LAB_7190ede4);
    if (0 < param_3) {
      iVar1 = 0;
      puVar2 = (ushort *)(param_1 + 6);
      uVar6 = extraout_r1;
      do {
        iVar13 = param_2 + iVar1 * 0x10;
        uVar19 = (uint)*(ushort *)(iVar13 + 4);
        if (uVar19 != 0) {
          uVar6 = (uint)*(ushort *)(iVar13 + 6);
          uStack_30 = uVar6;
        }
        if (uVar19 == 0 || uVar6 == 0) {
          uVar6 = 0;
          *(undefined4 *)(iVar13 + 8) = 0;
        }
        else {
          iVar15 = *param_1;
          iVar20 = uVar19 + param_1[2] + -1;
          FUN_71ba2da8(iVar20);
          iVar20 = iVar20 - extraout_r1_00;
          uVar6 = extraout_r1_00;
          if ((iVar20 <= iVar15) &&
             (uVar7 = param_1[1], uVar6 = uVar7, (int)uStack_30 <= (int)uVar7)) {
            puVar25 = *(ushort **)puVar2;
            uVar6 = (uint)*puVar25;
            uVar21 = iVar20 + uVar6;
            if (iVar15 < (int)uVar21) {
              iVar18 = param_1[4];
              puStack_3c = (ushort *)0x0;
              iStack_44 = 0x40000000;
              uStack_2c = 0x40000000;
              uStack_40 = 0;
            }
            else {
              iVar18 = param_1[4];
              puStack_3c = (ushort *)0x0;
              iStack_44 = 0x40000000;
              uStack_2c = 0x40000000;
              uVar26 = uVar6;
              puVar10 = puVar25;
              puVar23 = puVar2;
              do {
                uVar8 = 0;
                iVar12 = 0;
                if (0 < iVar20) {
                  iVar3 = 0;
                  uVar16 = uVar26;
                  puVar22 = puVar10;
                  do {
                    uVar14 = (uint)puVar22[1];
                    if (uVar8 < uVar14) {
                      puVar22 = *(ushort **)(puVar22 + 2);
                      iVar17 = (uVar14 - uVar8) * iVar3;
                      uVar9 = (uint)*puVar22;
                      uVar8 = uVar26;
                      if (uVar26 <= uVar16) {
                        uVar8 = uVar16;
                      }
                      iVar24 = uVar9 - uVar8;
                      uVar8 = uVar14;
                    }
                    else {
                      puVar22 = *(ushort **)(puVar22 + 2);
                      uVar9 = (uint)*puVar22;
                      iVar24 = uVar9 - uVar16;
                      if (iVar20 < iVar24 + iVar3) {
                        iVar24 = iVar20 - iVar3;
                      }
                      iVar17 = iVar24 * (uVar8 - uVar14);
                    }
                    iVar3 = iVar24 + iVar3;
                    iVar12 = iVar17 + iVar12;
                    uVar16 = uVar9;
                  } while (uVar9 < uVar21);
                }
                if (iVar18 == 0) {
                  if (uVar8 < uStack_2c) {
                    puStack_3c = puVar23;
                    uStack_2c = uVar8;
                  }
                }
                else if (((int)(uVar8 + uStack_30) <= (int)uVar7) &&
                        ((uVar8 < uStack_2c || ((uVar8 == uStack_2c && (iVar12 < iStack_44)))))) {
                  iStack_44 = iVar12;
                  puStack_3c = puVar23;
                  uStack_2c = uVar8;
                }
                puVar23 = puVar10 + 2;
                puVar10 = *(ushort **)puVar23;
                uVar26 = (uint)*puVar10;
                uVar21 = iVar20 + uVar26;
              } while ((int)uVar21 <= iVar15);
              if (puStack_3c == (ushort *)0x0) {
                uStack_40 = 0;
                puStack_3c = (ushort *)0x0;
              }
              else {
                uStack_40 = (uint)**(ushort **)puStack_3c;
              }
            }
            puVar10 = puVar25;
            if (iVar18 == 1) {
              while (puVar23 = puVar2, (int)uVar6 < iVar20) {
                uVar6 = (uint)**(ushort **)(puVar10 + 2);
                puVar10 = *(ushort **)(puVar10 + 2);
              }
              do {
                uVar6 = (uint)*puVar10;
                uVar21 = uVar6 - iVar20;
                puVar22 = puVar23;
                puVar11 = puVar25;
                do {
                  puVar25 = puVar11;
                  puVar23 = puVar22;
                  puVar11 = *(ushort **)(puVar25 + 2);
                  puVar22 = puVar25 + 2;
                } while ((int)(uint)*puVar11 <= (int)uVar21);
                uVar26 = 0;
                iVar15 = 0;
                if (*puVar25 < uVar6) {
                  iVar18 = 0;
                  puVar22 = puVar25;
                  uVar8 = (uint)*puVar25;
                  do {
                    uVar16 = (uint)puVar22[1];
                    if (uVar26 < uVar16) {
                      puVar22 = *(ushort **)(puVar22 + 2);
                      iVar3 = (uVar16 - uVar26) * iVar18;
                      uVar14 = (uint)*puVar22;
                      uVar26 = uVar21;
                      if ((int)uVar21 <= (int)uVar8) {
                        uVar26 = uVar8;
                      }
                      iVar12 = uVar14 - uVar26;
                      uVar26 = uVar16;
                    }
                    else {
                      puVar22 = *(ushort **)(puVar22 + 2);
                      uVar14 = (uint)*puVar22;
                      iVar12 = uVar14 - uVar8;
                      if (iVar20 < iVar12 + iVar18) {
                        iVar12 = iVar20 - iVar18;
                      }
                      iVar3 = iVar12 * (uVar26 - uVar16);
                    }
                    iVar18 = iVar12 + iVar18;
                    iVar15 = iVar3 + iVar15;
                    uVar8 = uVar14;
                  } while (uVar14 < uVar6);
                }
                iVar18 = iStack_44;
                uVar8 = uStack_40;
                puVar22 = puStack_3c;
                uVar16 = uStack_2c;
                if ((((((int)(uVar26 + uStack_30) <= (int)uVar7) && (uVar26 <= uStack_2c)) &&
                     (iVar18 = iVar15, uVar8 = uVar21, puVar22 = puVar23, uVar16 = uVar26,
                     uStack_2c <= uVar26)) &&
                    ((iStack_44 <= iVar15 &&
                     (iVar18 = iStack_44, uVar8 = uStack_40, puVar22 = puStack_3c,
                     uVar16 = uStack_2c, iVar15 == iStack_44)))) &&
                   (iVar18 = iVar15, uVar8 = uVar21, puVar22 = puVar23, uVar16 = uVar26,
                   (int)uStack_40 <= (int)uVar21)) {
                  iVar18 = iStack_44;
                  uVar8 = uStack_40;
                  puVar22 = puStack_3c;
                  uVar16 = uStack_2c;
                }
                uStack_2c = uVar16;
                puStack_3c = puVar22;
                uStack_40 = uVar8;
                iStack_44 = iVar18;
                puVar10 = *(ushort **)(puVar10 + 2);
              } while (puVar10 != (ushort *)0x0);
            }
            if (((puStack_3c != (ushort *)0x0) &&
                (uVar6 = uStack_2c + uStack_30, (int)uVar6 <= (int)uVar7)) &&
               (puVar4 = (undefined2 *)param_1[7], puVar4 != (undefined2 *)0x0)) {
              puVar4[1] = (short)uVar6;
              *puVar4 = (short)uStack_40;
              param_1[7] = *(int *)(puVar4 + 2);
              puVar25 = *(ushort **)puStack_3c;
              if ((int)(uint)*puVar25 < (int)uStack_40) {
                puStack_3c = puVar25 + 2;
                puVar25 = *(ushort **)puStack_3c;
              }
              *(undefined2 **)puStack_3c = puVar4;
              uVar6 = uStack_40 + uVar19;
              puVar10 = puVar25 + 2;
              puVar23 = *(ushort **)puVar10;
              while ((puVar22 = puVar23, puVar22 != (ushort *)0x0 &&
                     ((int)(uint)*puVar22 <= (int)uVar6))) {
                *(int *)puVar10 = param_1[7];
                param_1[7] = (int)puVar25;
                puVar10 = puVar22 + 2;
                puVar25 = puVar22;
                puVar23 = *(ushort **)puVar10;
              }
              *(ushort **)(puVar4 + 2) = puVar25;
              if ((int)(uint)*puVar25 < (int)uVar6) {
                *puVar25 = (ushort)uVar6;
              }
              *(short *)(iVar13 + 10) = (short)uStack_2c;
              *(short *)(iVar13 + 8) = (short)uStack_40;
              goto LAB_71905fe8;
            }
          }
          *(undefined2 *)(iVar13 + 8) = 0xffff;
          *(undefined2 *)(iVar13 + 10) = 0xffff;
        }
LAB_71905fe8:
        iVar1 = iVar1 + 1;
        if (iVar1 == param_3) {
          imp_qsort(param_2,param_3,0x10,&LAB_7190ee38);
          if (0 < param_3) {
            psVar5 = (short *)(param_2 + 8);
            do {
              if (*psVar5 == -1) {
                uVar6 = (uint)(psVar5[1] != -1);
              }
              else {
                uVar6 = 1;
              }
              *(uint *)(psVar5 + 2) = uVar6;
              psVar5 = psVar5 + 8;
              param_3 = param_3 + -1;
            } while (param_3 != 0);
          }
          return;
        }
      } while( true );
    }
  }
  imp_qsort(param_2,param_3,0x10,&LAB_7190ee38);
  return;
}


// =========================================================================
// Function: FUN_71906670
// Entry: 0x71906670 | Size: 124 bytes
// =========================================================================

void FUN_71906670(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (0x7fffffff < *(uint *)(param_1 + 0x460)) {
    if ((*(byte *)(param_1 + 4) & 2) == 0) {
      uVar1 = 0xd9;
      uVar2 = 0x1b;
    }
    else {
      uVar1 = 2;
      uVar2 = 2;
    }
    uVar1 = FUN_718ff23c(param_1,uVar1,uVar2);
    *(undefined4 *)(param_1 + 0x460) = uVar1;
  }
  if (-1 < *(int *)(param_1 + 0x464)) {
    return;
  }
  if ((*(byte *)(param_1 + 4) & 4) != 0) {
    return;
  }
  uVar1 = FUN_718ff23c(param_1,0x41,0x40);
  *(undefined4 *)(param_1 + 0x464) = uVar1;
  return;
}


// =========================================================================
// Function: FUN_7190673c
// Entry: 0x7190673c | Size: 1884 bytes
// =========================================================================

void FUN_7190673c(int param_1)

{
  undefined2 uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 *puVar15;
  int iVar16;
  undefined4 *puVar17;
  uint uVar18;
  int iVar19;
  ushort uVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  undefined1 uVar24;
  ushort *puVar25;
  uint unaff_r7;
  int iVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  uint uVar29;
  undefined4 *puVar30;
  undefined4 uVar31;
  bool bVar32;
  int iStack_30;
  
  iVar16 = *(int *)(param_1 + 0x1c);
  iVar21 = *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x460) * 0x1c;
  puVar5 = (undefined4 *)(param_1 + 0x24);
  uVar18 = (uint)*(ushort *)(iVar21 + 4);
  if ((*(byte *)(param_1 + 4) & 2) == 0) {
    if (*(int *)(param_1 + 0x14) == 0) {
      iVar19 = 0;
      iVar16 = *(int *)(param_1 + 0x18) + uVar18 * 4 + iVar16 * (uint)*(ushort *)(iVar21 + 6) * 4;
      puVar15 = &DAT_700690d5;
      do {
        iVar26 = 0;
        do {
          uVar6 = 0;
          if (puVar15[-iVar26] == '.') {
            uVar6 = 0xffffffff;
          }
          *(undefined4 *)(iVar16 + iVar26 * -4) = uVar6;
          iVar26 = iVar26 + -1;
        } while (iVar26 != -0x6c);
        iVar19 = iVar19 + 1;
        puVar15 = puVar15 + 0x6c;
        iVar16 = iVar16 + *(int *)(param_1 + 0x1c) * 4;
      } while (iVar19 != 0x1b);
      iVar19 = 0;
      iVar16 = *(int *)(param_1 + 0x18) + (uVar18 + 0x6d) * 4 +
               *(int *)(param_1 + 0x1c) * (uint)*(ushort *)(iVar21 + 6) * 4;
      puVar15 = &DAT_700690d5;
      do {
        iVar26 = 0;
        do {
          unaff_r7 = 0;
          if (puVar15[-iVar26] == 'X') {
            unaff_r7 = 0xffffffff;
          }
          *(uint *)(iVar16 + iVar26 * -4) = unaff_r7;
          iVar26 = iVar26 + -1;
        } while (iVar26 != -0x6c);
        iVar19 = iVar19 + 1;
        puVar15 = puVar15 + 0x6c;
        iVar16 = iVar16 + *(int *)(param_1 + 0x1c) * 4;
      } while (iVar19 != 0x1b);
    }
    else {
      iVar16 = iVar16 * (uint)*(ushort *)(iVar21 + 6) + *(int *)(param_1 + 0x14) + uVar18;
      iVar19 = 0;
      puVar15 = &DAT_700690d5;
      do {
        iVar26 = 0;
        do {
          uVar24 = 0;
          if (puVar15[-iVar26] == '.') {
            uVar24 = 0xff;
          }
          *(undefined1 *)(iVar16 - iVar26) = uVar24;
          iVar26 = iVar26 + -1;
        } while (iVar26 != -0x6c);
        iVar19 = iVar19 + 1;
        puVar15 = puVar15 + 0x6c;
        iVar16 = iVar16 + *(int *)(param_1 + 0x1c);
      } while (iVar19 != 0x1b);
      iVar19 = 0;
      iVar16 = *(int *)(param_1 + 0x1c) * (uint)*(ushort *)(iVar21 + 6) +
               *(int *)(param_1 + 0x14) + uVar18 + 0x6d;
      puVar15 = &DAT_700690d5;
      do {
        iVar26 = 0;
        do {
          unaff_r7 = 0;
          if (puVar15[-iVar26] == 'X') {
            unaff_r7 = 0xffffffff;
          }
          *(char *)(iVar16 - iVar26) = (char)unaff_r7;
          iVar26 = iVar26 + -1;
        } while (iVar26 != -0x6c);
        iVar19 = iVar19 + 1;
        puVar15 = puVar15 + 0x6c;
        iVar16 = iVar16 + *(int *)(param_1 + 0x1c);
      } while (iVar19 != 0x1b);
    }
  }
  else {
    iVar19 = iVar16 * (uint)*(ushort *)(iVar21 + 6) + uVar18;
    iVar16 = iVar19 + iVar16;
    if (*(int *)(param_1 + 0x14) == 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar16 * 4 + 4) = 0xffffffff;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar16 * 4) = 0xffffffff;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar19 * 4 + 4) = 0xffffffff;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar19 * 4) = 0xffffffff;
    }
    else {
      *(undefined1 *)(*(int *)(param_1 + 0x14) + iVar16 + 1) = 0xff;
      *(undefined1 *)(*(int *)(param_1 + 0x14) + iVar16) = 0xff;
      *(undefined1 *)(*(int *)(param_1 + 0x14) + iVar19 + 1) = 0xff;
      *(undefined1 *)(*(int *)(param_1 + 0x14) + iVar19) = 0xff;
    }
  }
  uVar6 = FUN_71ba1e0c(*(undefined2 *)(iVar21 + 6));
  uVar6 = FUN_71ba0b38(uVar6,0x3f000000);
  puVar17 = (undefined4 *)(param_1 + 0x28);
  uVar6 = FUN_71ba21e8(*puVar17,uVar6);
  uVar1 = *(undefined2 *)(iVar21 + 4);
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  uVar6 = FUN_71ba1e0c(uVar1);
  uVar6 = FUN_71ba0b38(uVar6,0x3f000000);
  uVar6 = FUN_71ba21e8(*puVar5,uVar6);
  *(undefined4 *)(param_1 + 0x2c) = uVar6;
  if ((*(byte *)(param_1 + 4) & 4) == 0) {
    iVar21 = 0;
    puVar25 = (ushort *)(*(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x464) * 0x1c);
    puVar30 = (undefined4 *)(param_1 + 100);
    iStack_30 = 0;
    iVar16 = 0;
    do {
      uVar23 = (uint)*puVar25;
      iVar19 = *(int *)(param_1 + 0x14);
      uVar29 = iVar21 + uVar23;
      uVar7 = iVar16 + (uVar29 >> 1);
      uVar8 = iVar21 + (uVar23 - (uVar29 >> 1));
      uVar18 = uVar29 >> 1;
      if (iVar19 == 0) {
        iVar22 = *(int *)(param_1 + 0x18);
        uVar20 = puVar25[2];
        iVar19 = (iVar16 + (uint)puVar25[3]) * *(int *)(param_1 + 0x1c);
        iVar26 = iVar22 + iVar19 * 4 + (uint)uVar20 * 4;
        if (1 < uVar29) {
          uVar9 = 1;
          if (1 < uVar18) {
            uVar9 = uVar18;
          }
          imp___aeabi_memclr4(iVar26,uVar9 << 2);
        }
        if (iVar16 != 0) {
          imp___aeabi_memset4(iVar26 + uVar18 * 4,iStack_30,0xff);
        }
        if (uVar7 != uVar23) {
          if (uVar8 < 2) {
            uVar8 = 1;
          }
          imp___aeabi_memclr4(iVar22 + (uVar29 * 2 & 0xfffffffd) + iVar19 * 4 + (uint)uVar20 * 4 +
                              iVar16 * 4,uVar8 << 2);
        }
      }
      else {
        uVar20 = puVar25[3];
        iVar26 = *(int *)(param_1 + 0x1c);
        uVar2 = puVar25[2];
        iVar22 = (iVar16 + (uint)uVar20) * iVar26 + iVar19 + (uint)uVar2;
        if (1 < uVar29) {
          uVar9 = 1;
          if (1 < uVar18) {
            uVar9 = uVar18;
          }
          imp___aeabi_memclr(iVar22,uVar9);
        }
        if (iVar16 != 0) {
          imp___aeabi_memset(iVar22 + uVar18,iVar16,0xff);
        }
        if (uVar7 != uVar23) {
          if (uVar8 < 2) {
            uVar8 = 1;
          }
          imp___aeabi_memclr(iVar19 + iVar26 * (iVar16 + (uint)uVar20) + (uVar29 >> 1) + (uint)uVar2
                             + iVar16,uVar8);
        }
      }
      uVar20 = puVar25[2];
      iVar19 = iVar16 + 1;
      uVar6 = FUN_71ba1e0c(iVar19 + (uint)uVar20 + (uVar29 >> 1));
      uVar27 = *puVar5;
      uVar6 = FUN_71ba21e8(uVar27,uVar6);
      uVar2 = puVar25[3];
      uVar28 = *puVar17;
      puVar30[-1] = uVar6;
      uVar6 = FUN_71ba1e0c(uVar18 + uVar20 + -1);
      uVar6 = FUN_71ba21e8(uVar27,uVar6);
      puVar30[-3] = uVar6;
      uVar6 = FUN_71ba1e0c(iVar16 + (uint)uVar2);
      unaff_r7 = FUN_71ba21e8(uVar28,uVar6);
      uVar6 = FUN_71ba1e0c(iVar16 + (uint)uVar2 + 1);
      uVar6 = FUN_71ba21e8(uVar28,uVar6);
      uVar6 = FUN_71ba0b38(unaff_r7,uVar6);
      uVar6 = FUN_71ba21e8(uVar6,0x3f000000);
      *puVar30 = uVar6;
      iVar21 = iVar21 + -1;
      puVar30[-2] = uVar6;
      puVar30 = puVar30 + 4;
      iStack_30 = iStack_30 + 4;
      iVar16 = iVar19;
    } while (iVar19 != 0x40);
  }
  iVar16 = *(int *)(param_1 + 0x40);
  if (0 < iVar16) {
    iVar21 = 0;
    iVar19 = 0;
    do {
      uVar18 = *(int *)(param_1 + 0x48) + iVar21;
      iVar26 = *(int *)(uVar18 + 0x18);
      if (iVar26 != 0) {
        uVar18 = *(uint *)(uVar18 + 8);
      }
      if (iVar26 != 0 && uVar18 != 0) {
        puVar25 = (ushort *)(*(int *)(param_1 + 0x48) + iVar21);
        uVar20 = *puVar25;
        uVar2 = puVar25[2];
        uVar6 = FUN_71ba1b94((uint)uVar20 + (uint)uVar2);
        uVar27 = *puVar5;
        uVar6 = FUN_71ba21e8(uVar27,uVar6);
        uVar3 = puVar25[3];
        uVar4 = puVar25[1];
        uVar28 = FUN_71ba1b94((uint)uVar4 + (uint)uVar3);
        uVar10 = *puVar17;
        uVar28 = FUN_71ba21e8(uVar10,uVar28);
        uVar11 = FUN_71ba1e0c((uint)uVar20);
        unaff_r7 = *(uint *)(puVar25 + 8);
        uVar12 = *(undefined4 *)(puVar25 + 6);
        uVar31 = *(undefined4 *)(puVar25 + 10);
        uVar11 = FUN_71ba0b38(unaff_r7,uVar11);
        uVar13 = FUN_71ba1e0c((uint)uVar4);
        uVar13 = FUN_71ba0b38(uVar31,uVar13);
        uVar14 = FUN_71ba1e0c((uint)uVar2);
        uVar27 = FUN_71ba21e8(uVar27,uVar14);
        uVar14 = FUN_71ba1e0c((uint)uVar3);
        uVar10 = FUN_71ba21e8(uVar10,uVar14);
        FUN_71907320(iVar26,0,uVar18 & 0xffff,unaff_r7,uVar31,uVar11,uVar13,uVar27,uVar10,uVar6,
                     uVar28,uVar12);
        iVar16 = *(int *)(param_1 + 0x40);
      }
      iVar19 = iVar19 + 1;
      iVar21 = iVar21 + 0x1c;
    } while (iVar19 < iVar16);
  }
  iVar16 = *(int *)(param_1 + 0x34);
  if (0 < iVar16) {
    iVar21 = 0;
    do {
      if (*(char *)(*(int *)(*(int *)(param_1 + 0x3c) + iVar21 * 4) + 0x3e) != '\0') {
        FUN_71907938();
        iVar16 = *(int *)(param_1 + 0x34);
      }
      iVar21 = iVar21 + 1;
    } while (iVar21 < iVar16);
    if (0 < iVar16) {
      iVar21 = 0;
      do {
        iVar19 = *(int *)(*(int *)(param_1 + 0x3c) + iVar21 * 4);
        if (*(short *)(iVar19 + 0x3c) == -1) {
          uVar18 = *(uint *)(iVar19 + 0x14);
          if (uVar18 < 0x2027) {
            if (0x85 < uVar18) goto LAB_71906e70;
          }
          else {
            uVar20 = *(ushort *)(*(int *)(iVar19 + 0x1c) + 0x404c);
            uVar18 = (uint)uVar20;
            bVar32 = uVar18 == 0xffff;
            if (!bVar32) {
              unaff_r7 = *(uint *)(iVar19 + 0x28);
              uVar18 = 0x2026;
              uVar20 = 0x2026;
            }
            if (bVar32 || unaff_r7 == 0) {
LAB_71906e70:
              uVar20 = (ushort)uVar18;
              unaff_r7 = (uint)*(ushort *)(*(int *)(iVar19 + 0x1c) + 0x10a);
              bVar32 = unaff_r7 != 0xffff;
              if (bVar32) {
                unaff_r7 = *(uint *)(iVar19 + 0x28);
                uVar20 = 0x85;
              }
              if (!bVar32 || unaff_r7 == 0) goto LAB_71906e1c;
            }
            *(ushort *)(iVar19 + 0x3c) = uVar20;
            iVar16 = *(int *)(param_1 + 0x34);
          }
        }
LAB_71906e1c:
        iVar21 = iVar21 + 1;
      } while (iVar21 < iVar16);
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71907320
// Entry: 0x71907320 | Size: 696 bytes
// =========================================================================

void FUN_71907320(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uStack_2c = param_6;
  uStack_28 = param_4;
  if (param_2 != 0) {
    uVar6 = *(undefined4 *)(param_2 + 0x34);
    uVar5 = *(undefined4 *)(param_2 + 0x38);
    iVar2 = FUN_71ba2d70(uVar6,param_12);
    iVar3 = FUN_71ba2d10(uVar5,param_12);
    if (iVar3 == 0) {
      uVar5 = param_12;
    }
    if (iVar2 != 0) {
      uVar5 = uVar6;
    }
    iVar2 = FUN_71ba2cf0(uVar5,param_12);
    cVar1 = *(char *)(param_2 + 0x1c);
    if (iVar2 == 0) {
      uVar6 = FUN_71ba240c(uVar5,param_12);
      uVar4 = FUN_71ba21e8(uVar6,0x3f000000);
      FUN_71ba17bc();
      uVar6 = FUN_71ba1b94();
      if (cVar1 == '\0') {
        uVar6 = uVar4;
      }
      uStack_28 = FUN_71ba0b38(uVar6,param_4);
      uStack_2c = FUN_71ba0b38(uVar6,param_6);
    }
    FUN_71ba0b38(uVar5,0x3f000000);
    FUN_71ba17bc();
    uVar6 = FUN_71ba1b94();
    if (cVar1 != '\0') {
      uVar5 = uVar6;
    }
    param_12 = FUN_71ba0b38(*(undefined4 *)(param_2 + 0x20),uVar5);
  }
  iVar2 = *(int *)(param_1 + 0x24);
  iVar3 = *(int *)(param_1 + 0x20) + 1;
  if (*(int *)(param_1 + 0x20) < iVar2) {
    iVar2 = *(int *)(param_1 + 0x28);
  }
  else {
    iVar10 = iVar2 + iVar2 / 2;
    if (iVar2 == 0) {
      iVar10 = 8;
    }
    if (iVar10 <= iVar3) {
      iVar10 = iVar3;
    }
    iVar2 = FUN_718c8a70(iVar10 * 0x28);
    if (*(int *)(param_1 + 0x28) != 0) {
      imp___aeabi_memcpy(iVar2,*(int *)(param_1 + 0x28),*(int *)(param_1 + 0x20) * 0x28);
      FUN_718c8b14(*(undefined4 *)(param_1 + 0x28));
    }
    *(int *)(param_1 + 0x24) = iVar10;
    *(int *)(param_1 + 0x28) = iVar2;
  }
  *(int *)(param_1 + 0x20) = iVar3;
  iVar2 = iVar2 + iVar3 * 0x28;
  *(undefined4 *)(iVar2 + -4) = param_11;
  *(undefined4 *)(iVar2 + -0x24) = param_12;
  *(undefined4 *)(iVar2 + -0x20) = uStack_28;
  *(undefined4 *)(iVar2 + -0x1c) = param_5;
  *(undefined4 *)(iVar2 + -0x18) = uStack_2c;
  *(undefined4 *)(iVar2 + -0x14) = param_7;
  *(undefined4 *)(iVar2 + -0x10) = param_8;
  *(undefined4 *)(iVar2 + -0xc) = param_9;
  *(undefined4 *)(iVar2 + -8) = param_10;
  iVar3 = FUN_71ba2cf0();
  uVar7 = param_3 << 2;
  if (iVar3 == 0) {
    uVar7 = param_3 << 2 | 2;
  }
  iVar3 = FUN_71ba2cf0(param_5,param_7);
  if (iVar3 != 0) {
    uVar7 = param_3 << 2;
  }
  *(uint *)(iVar2 + -0x28) = uVar7;
  iVar3 = *(int *)(param_1 + 0x30);
  iVar10 = *(int *)(param_1 + 0x4c);
  uVar5 = *(undefined4 *)(iVar3 + 0x10);
  *(undefined1 *)(param_1 + 0x3e) = 1;
  uVar5 = FUN_71ba1b94(uVar5);
  uVar5 = FUN_71ba0b38(uVar5,0x3f7d70a4);
  uVar8 = *(undefined4 *)(iVar2 + -4);
  uVar11 = *(undefined4 *)(iVar2 + -0xc);
  uVar6 = FUN_71ba240c(*(undefined4 *)(iVar2 + -8),*(undefined4 *)(iVar2 + -0x10));
  uVar9 = *(undefined4 *)(iVar3 + 0x20);
  uVar4 = FUN_71ba1b94(*(undefined4 *)(iVar3 + 0x1c));
  uVar6 = FUN_71ba21e8(uVar6,uVar4);
  FUN_71ba0b38(uVar6,uVar5);
  iVar2 = FUN_71ba17bc();
  uVar6 = FUN_71ba240c(uVar8,uVar11);
  uVar4 = FUN_71ba1b94(uVar9);
  uVar6 = FUN_71ba21e8(uVar6,uVar4);
  FUN_71ba0b38(uVar6,uVar5);
  iVar3 = FUN_71ba17bc();
  *(int *)(param_1 + 0x4c) = iVar3 * iVar2 + iVar10;
  return;
}


// =========================================================================
// Function: FUN_71907938
// Entry: 0x71907938 | Size: 880 bytes
// =========================================================================

void FUN_71907938(undefined4 *param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  iVar1 = param_1[8];
  if (iVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    puVar2 = (uint *)param_1[10];
    do {
      if (uVar5 <= *puVar2 >> 2) {
        uVar5 = *puVar2 >> 2;
      }
      iVar1 = iVar1 + -1;
      puVar2 = puVar2 + 10;
    } while (iVar1 != 0);
  }
  if (param_1[2] != 0) {
    *param_1 = 0;
    param_1[1] = 0;
    FUN_718c8b14();
    param_1[2] = 0;
  }
  if (param_1[7] != 0) {
    param_1[5] = 0;
    param_1[6] = 0;
    FUN_718c8b14();
    param_1[7] = 0;
  }
  iVar6 = uVar5 + 1;
  iVar7 = 0;
  *(undefined1 *)((int)param_1 + 0x3e) = 0;
  puVar10 = param_1 + 0x14;
  *(undefined2 *)puVar10 = 0;
  FUN_71907e2c(param_1,iVar6);
  iVar1 = param_1[8];
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      puVar2 = (uint *)(param_1[10] + iVar7);
      uVar5 = *puVar2;
      iVar7 = iVar7 + 0x28;
      *(uint *)(param_1[2] + (uVar5 & 0xfffffffc)) = puVar2[1];
      *(short *)(param_1[7] + (uVar5 >> 1 & 0xfffffffe)) = (short)iVar3;
      iVar3 = iVar3 + 1;
      iVar1 = param_1[8];
      *(byte *)((int)puVar10 + (uVar5 >> 0x11)) =
           *(byte *)((int)puVar10 + (uVar5 >> 0x11)) | (byte)(1 << ((uVar5 & 0x1ffff) >> 0xe));
    } while (iVar3 < iVar1);
  }
  uVar5 = param_1[5];
  if (uVar5 < 0x21) {
    iVar7 = param_1[0xb];
  }
  else {
    iVar7 = param_1[0xb];
    if (*(ushort *)(param_1[7] + 0x40) != 0xffff) {
      iVar7 = param_1[10] + (uint)*(ushort *)(param_1[7] + 0x40) * 0x28;
    }
  }
  if (iVar7 != 0) {
    iVar7 = param_1[10];
    if ((*(uint *)(iVar7 + iVar1 * 0x28 + -0x28) & 0xfffffffc) != 0x24) {
      iVar3 = param_1[9];
      iVar8 = iVar1 + 1;
      if (iVar3 <= iVar1) {
        iVar1 = iVar3 + iVar3 / 2;
        if (iVar3 == 0) {
          iVar1 = 8;
        }
        if (iVar1 <= iVar8) {
          iVar1 = iVar8;
        }
        iVar7 = FUN_718c8a70(iVar1 * 0x28);
        if (param_1[10] != 0) {
          imp___aeabi_memcpy(iVar7,param_1[10],param_1[8] * 0x28);
          FUN_718c8b14(param_1[10]);
        }
        uVar5 = param_1[5];
        param_1[9] = iVar1;
        param_1[10] = iVar7;
      }
      param_1[8] = iVar8;
      iVar1 = iVar8;
    }
    iVar1 = iVar7 + iVar1 * 0x28;
    if (uVar5 < 0x21) {
      puVar10 = (undefined4 *)param_1[0xb];
    }
    else {
      puVar10 = (undefined4 *)param_1[0xb];
      if (*(ushort *)(param_1[7] + 0x40) != 0xffff) {
        puVar10 = (undefined4 *)(iVar7 + (uint)*(ushort *)(param_1[7] + 0x40) * 0x28);
      }
    }
    uVar12 = puVar10[1];
    uVar4 = puVar10[2];
    uVar9 = puVar10[3];
    uVar11 = puVar10[4];
    *(undefined4 *)(iVar1 + -0x28) = *puVar10;
    *(undefined4 *)(iVar1 + -0x24) = uVar12;
    *(undefined4 *)(iVar1 + -0x20) = uVar4;
    *(undefined4 *)(iVar1 + -0x1c) = uVar9;
    *(undefined4 *)(iVar1 + -0x18) = uVar11;
    uVar12 = puVar10[6];
    uVar4 = puVar10[7];
    uVar9 = puVar10[8];
    uVar11 = puVar10[9];
    *(undefined4 *)(iVar1 + -0x14) = puVar10[5];
    *(undefined4 *)(iVar1 + -0x10) = uVar12;
    *(undefined4 *)(iVar1 + -0xc) = uVar4;
    *(undefined4 *)(iVar1 + -8) = uVar9;
    *(undefined4 *)(iVar1 + -4) = uVar11;
    *(uint *)(iVar1 + -0x28) = *(uint *)(iVar1 + -0x28) & 3 | 0x24;
    uVar12 = FUN_71ba21e8(*(undefined4 *)(iVar1 + -0x24),0x40800000);
    *(undefined4 *)(iVar1 + -0x24) = uVar12;
    *(undefined4 *)(param_1[2] + 0x24) = uVar12;
    *(short *)(param_1[7] + (*(uint *)(iVar1 + -0x28) >> 1 & 0xfffffffe)) =
         *(short *)(param_1 + 8) + -1;
    uVar5 = param_1[5];
  }
  if (uVar5 < 0x21) {
    puVar2 = (uint *)param_1[0xb];
  }
  else {
    puVar2 = (uint *)param_1[0xb];
    if (*(ushort *)(param_1[7] + 0x40) != 0xffff) {
      puVar2 = (uint *)(param_1[10] + (uint)*(ushort *)(param_1[7] + 0x40) * 0x28);
    }
  }
  if (puVar2 != (uint *)0x0) {
    *puVar2 = *puVar2 & 0xfffffffd;
    uVar5 = param_1[5];
  }
  if (uVar5 < 10) {
    puVar2 = (uint *)param_1[0xb];
  }
  else {
    puVar2 = (uint *)param_1[0xb];
    if (*(ushort *)(param_1[7] + 0x12) != 0xffff) {
      puVar2 = (uint *)(param_1[10] + (uint)*(ushort *)(param_1[7] + 0x12) * 0x28);
    }
  }
  if (puVar2 != (uint *)0x0) {
    *puVar2 = *puVar2 & 0xfffffffd;
    uVar5 = param_1[5];
  }
  if ((*(ushort *)((int)param_1 + 0x3a) < uVar5) &&
     (uVar5 = (uint)*(ushort *)(param_1[7] + (uint)*(ushort *)((int)param_1 + 0x3a) * 2),
     uVar5 != 0xffff)) {
    iVar1 = param_1[10] + uVar5 * 0x28;
    param_1[0xb] = iVar1;
    if (param_1[10] == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(undefined4 *)(iVar1 + 4);
    }
  }
  else {
    uVar12 = 0;
    param_1[0xb] = 0;
  }
  iVar1 = 0;
  param_1[3] = uVar12;
  do {
    puVar10 = (undefined4 *)(param_1[2] + iVar1);
    iVar7 = FUN_71ba2d10(*puVar10,0);
    iVar1 = iVar1 + 4;
    if (iVar7 != 0) {
      *puVar10 = uVar12;
    }
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return;
}


// =========================================================================
// Function: FUN_71907da0
// Entry: 0x71907da0 | Size: 88 bytes
// =========================================================================

int FUN_71907da0(int param_1)

{
  imp___aeabi_memclr4(param_1,0x2c);
  *(undefined2 *)(param_1 + 0x3c) = 0xffff;
  *(undefined4 *)(param_1 + 0x38) = 0x3f0000;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined2 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
  return param_1;
}


// =========================================================================
// Function: FUN_71907e2c
// Entry: 0x71907e2c | Size: 304 bytes
// =========================================================================

void FUN_71907e2c(int *param_1,int param_2)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  
  if (param_1[5] < param_2) {
    iVar1 = param_1[1];
    if (iVar1 < param_2) {
      iVar3 = iVar1 + iVar1 / 2;
      if (iVar1 == 0) {
        iVar3 = 8;
      }
      if (iVar3 <= param_2) {
        iVar3 = param_2;
      }
      iVar1 = FUN_718c8a70(iVar3 << 2);
      if (param_1[2] != 0) {
        imp___aeabi_memcpy(iVar1,param_1[2],*param_1 << 2);
        FUN_718c8b14(param_1[2]);
      }
      param_1[1] = iVar3;
      param_1[2] = iVar1;
    }
    iVar1 = *param_1;
    if (iVar1 < param_2) {
      do {
        *(undefined4 *)(param_1[2] + iVar1 * 4) = 0xbf800000;
        iVar1 = iVar1 + 1;
      } while (param_2 != iVar1);
    }
    iVar1 = param_1[6];
    *param_1 = param_2;
    if (iVar1 < param_2) {
      iVar3 = iVar1 + iVar1 / 2;
      if (iVar1 == 0) {
        iVar3 = 8;
      }
      if (iVar3 <= param_2) {
        iVar3 = param_2;
      }
      iVar1 = FUN_718c8a70(iVar3 << 1);
      if (param_1[7] != 0) {
        imp___aeabi_memcpy(iVar1,param_1[7],param_1[5] << 1);
        FUN_718c8b14(param_1[7]);
      }
      param_1[6] = iVar3;
      param_1[7] = iVar1;
    }
    iVar1 = param_1[5];
    if (iVar1 < param_2) {
      iVar3 = param_2 - iVar1;
      iVar1 = iVar1 << 1;
      do {
        iVar3 = iVar3 + -1;
        puVar2 = (undefined2 *)(param_1[7] + iVar1);
        iVar1 = iVar1 + 2;
        *puVar2 = 0xffff;
      } while (iVar3 != 0);
    }
    param_1[5] = param_2;
  }
  return;
}


// =========================================================================
// Function: FUN_7190801c
// Entry: 0x7190801c | Size: 600 bytes
// =========================================================================

byte * FUN_7190801c(int *param_1,undefined4 param_2,byte *param_3,byte *param_4,undefined4 param_5)

{
  bool bVar1;
  uint uVar2;
  byte *pbVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  byte *pbVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  byte *pbStack_48;
  byte *pbStack_38;
  undefined4 uStack_30;
  uint uStack_28;
  
  uVar4 = FUN_71ba13e0(param_5);
  if (param_3 < param_4) {
    uVar9 = 0;
    pbStack_48 = (byte *)0x0;
    bVar1 = true;
    uVar8 = 0;
    uStack_30 = 0;
    pbVar7 = param_3;
    pbStack_38 = param_3;
    do {
      uStack_28 = (uint)*pbVar7;
      if ((char)*pbVar7 < '\0') {
        iVar10 = FUN_718c8868(&uStack_28,pbVar7,param_4);
        param_3 = pbVar7 + iVar10;
        uVar2 = uStack_28;
      }
      else {
        param_3 = pbVar7 + 1;
        uVar2 = uStack_28;
      }
      if (uVar2 == 0) {
        return pbVar7;
      }
      if (uVar2 < 0x20) {
        if (uVar2 == 10) {
          uVar8 = 0;
          bVar1 = true;
          uVar9 = 0;
          uStack_30 = 0;
        }
        else if (uVar2 != 0xd) goto LAB_719080fc;
      }
      else {
LAB_719080fc:
        piVar5 = param_1 + 3;
        if ((int)uVar2 < *param_1) {
          piVar5 = (int *)(param_1[2] + uVar2 * 4);
        }
        iVar10 = *piVar5;
        uStack_28 = uVar2;
        if ((uVar2 == 9 || uVar2 == 0x3000) || (uVar2 == 0x20)) {
          uVar6 = uStack_30;
          if (!bVar1) {
            uVar6 = 0x80000000;
          }
          uVar8 = FUN_71ba0b38(uVar8,uVar6);
          if (bVar1) {
            uStack_30 = 0;
            pbStack_38 = pbVar7;
          }
          uStack_30 = FUN_71ba0b38(uStack_30,iVar10);
          bVar1 = false;
        }
        else {
          uVar9 = FUN_71ba0b38(uVar9,iVar10);
          pbVar3 = param_3;
          if (!bVar1) {
            uVar9 = FUN_71ba0b38(uStack_30,uVar9);
            uVar8 = FUN_71ba0b38(uVar8,uVar9);
            uVar9 = 0;
            uStack_30 = 0;
            pbStack_48 = pbStack_38;
            pbVar3 = pbStack_38;
          }
          pbStack_38 = pbVar3;
          if ((uVar2 - 0x21 < 0x1f) && ((1 << (uVar2 - 0x21 & 0xff) & 0x44002803U) != 0)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
        }
        uVar6 = FUN_71ba0b38(uVar8,uVar9);
        iVar10 = FUN_71ba2d70(uVar6,uVar4);
        if (iVar10 != 0) {
          if (pbStack_48 != (byte *)0x0) {
            pbStack_38 = pbStack_48;
          }
          iVar10 = FUN_71ba2d10(uVar9,uVar4);
          if (iVar10 == 0) {
            return pbVar7;
          }
          return pbStack_38;
        }
      }
      pbVar7 = param_3;
    } while (param_3 < param_4);
  }
  return param_3;
}


// =========================================================================
// Function: FUN_719083a4
// Entry: 0x719083a4 | Size: 720 bytes
// =========================================================================

void FUN_719083a4(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,byte *param_6,byte *param_7,undefined4 *param_8)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  undefined4 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uStack_28;
  
  if (param_7 == (byte *)0x0) {
    iVar2 = imp_strlen(param_6);
    param_7 = param_6 + iVar2;
  }
  iVar2 = param_2[4];
  *param_1 = 0;
  uVar3 = FUN_71ba13e0(param_3,iVar2);
  puVar7 = param_1 + 1;
  *puVar7 = 0;
  iVar2 = FUN_71ba2d70(param_5,0);
  uVar9 = 0;
  if (param_6 < param_7) {
    pbVar11 = (byte *)0x0;
    pbVar10 = param_6;
    do {
      if (iVar2 == 0) {
LAB_71908470:
        uStack_28 = (uint)*pbVar10;
        if ((char)*pbVar10 < '\0') {
          iVar5 = FUN_718c8868(&uStack_28,pbVar10,param_7);
          pbVar8 = pbVar10 + iVar5;
          param_6 = pbVar8;
          if (uStack_28 == 0) break;
        }
        else {
          pbVar8 = pbVar10 + 1;
        }
        if (uStack_28 < 0x20) {
          uVar4 = uVar9;
          if (uStack_28 != 0xd) {
            if (uStack_28 != 10) goto LAB_71908504;
            uVar4 = FUN_71ba0b38(*puVar7,param_3);
            *puVar7 = uVar4;
            uVar4 = *param_1;
            iVar5 = FUN_71ba2d50(uVar4,uVar9);
            if (iVar5 != 0) {
              uVar9 = uVar4;
            }
            *param_1 = uVar9;
            uVar4 = 0;
          }
        }
        else {
LAB_71908504:
          piVar6 = param_2 + 3;
          if ((int)uStack_28 < *param_2) {
            piVar6 = (int *)(param_2[2] + uStack_28 * 4);
          }
          uVar4 = FUN_71ba21e8(uVar3,*piVar6);
          uVar4 = FUN_71ba0b38(uVar9,uVar4);
          iVar5 = FUN_71ba2d50(uVar4,param_4);
          param_6 = pbVar10;
          if (iVar5 != 0) break;
        }
      }
      else {
        if (pbVar11 == (byte *)0x0) {
          uVar4 = FUN_71ba240c(param_5,uVar9);
          pbVar11 = (byte *)FUN_7190801c(param_2,uVar3,pbVar10,param_7,uVar4);
          if (pbVar11 == pbVar10) {
            pbVar11 = pbVar11 + 1;
          }
        }
        if (pbVar10 < pbVar11) goto LAB_71908470;
        iVar5 = FUN_71ba2d10(*param_1,uVar9);
        if (iVar5 != 0) {
          *param_1 = uVar9;
        }
        uVar9 = FUN_71ba0b38(*puVar7,param_3);
        *puVar7 = uVar9;
        pbVar8 = pbVar10;
        if (pbVar10 < param_7) {
          iVar5 = (int)param_7 - (int)pbVar10;
          do {
            bVar1 = *pbVar10;
            if (bVar1 != 0x20 && bVar1 != 9) {
              pbVar8 = pbVar10;
              if (bVar1 == 10) {
                pbVar8 = pbVar10 + 1;
              }
              break;
            }
            iVar5 = iVar5 + -1;
            pbVar8 = param_7;
            pbVar10 = pbVar10 + 1;
          } while (iVar5 != 0);
        }
        pbVar11 = (byte *)0x0;
        uVar4 = 0;
      }
      uVar9 = uVar4;
      param_6 = pbVar8;
      pbVar10 = pbVar8;
    } while (pbVar8 < param_7);
  }
  iVar2 = FUN_71ba2d10(*param_1,uVar9);
  if (iVar2 != 0) {
    *param_1 = uVar9;
  }
  iVar2 = FUN_71ba2d70(uVar9,0);
  uVar9 = *puVar7;
  if ((iVar2 != 0) || (iVar2 = FUN_71ba2cf0(uVar9,0), iVar2 != 0)) {
    uVar9 = FUN_71ba0b38(uVar9,param_3);
    *puVar7 = uVar9;
  }
  if (param_8 != (undefined4 *)0x0) {
    *param_8 = param_6;
  }
  return;
}


// =========================================================================
// Function: FUN_71908868
// Entry: 0x71908868 | Size: 496 bytes
// =========================================================================

void FUN_71908868(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uStack_50;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0xc);
  uVar1 = FUN_71ba21e8(uVar5,0x3ecccccd);
  uVar2 = FUN_71ba21e8(uVar1,param_6);
  switch(param_5) {
  case 0:
    uVar2 = uVar2 ^ 0x80000000;
  case 1:
    uVar8 = FUN_71ba21e8(uVar2,0x3f400000);
    uStack_50 = FUN_71ba21e8(uVar2,0);
    uVar6 = FUN_71ba21e8(uVar2,0xbf400000);
    uVar3 = FUN_71ba21e8(uVar2,0x3f5db22d);
    uVar7 = FUN_71ba21e8(uVar2,0xbf5db22d);
    uVar1 = uVar6;
    break;
  case 2:
    uVar2 = uVar2 ^ 0x80000000;
  case 3:
    uVar8 = FUN_71ba21e8(uVar2,0);
    uStack_50 = FUN_71ba21e8(uVar2,0x3f400000);
    uVar6 = FUN_71ba21e8(uVar2,0xbf5db22d);
    uVar7 = FUN_71ba21e8(uVar2,0xbf400000);
    uVar1 = FUN_71ba21e8(uVar2,0x3f5db22d);
    uVar3 = uVar7;
    break;
  default:
    uVar7 = 0;
    uVar6 = 0;
    uVar8 = 0;
    uStack_50 = 0;
    uVar1 = 0;
    uVar3 = 0;
  }
  uVar5 = FUN_71ba21e8(uVar5,0x3f000000);
  uVar4 = FUN_71ba0b38(uVar5,param_2);
  uStack_2c = FUN_71ba0b38(uVar4,uVar8);
  uVar5 = FUN_71ba21e8(uVar5,param_6);
  uVar5 = FUN_71ba0b38(uVar5,param_3);
  uStack_28 = FUN_71ba0b38(uVar5,uStack_50);
  uStack_30 = FUN_71ba0b38(uVar5,uVar3);
  uStack_34 = FUN_71ba0b38(uVar4,uVar6);
  uStack_38 = FUN_71ba0b38(uVar5,uVar7);
  uStack_3c = FUN_71ba0b38(uVar4,uVar1);
  FUN_718fb3d8(param_1,&uStack_2c,&uStack_34,&uStack_3c,param_4);
  return;
}


// =========================================================================
// Function: FUN_71908d04
// Entry: 0x71908d04 | Size: 864 bytes
// =========================================================================

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_71908d04(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
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
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (param_5 != -1) {
    iVar11 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    iVar10 = *(int *)(*(int *)(param_1[0xb] + 8) + 0x30);
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_44 = 0;
    uStack_48 = 0;
    uStack_4c = 0;
    uStack_50 = 0;
    uStack_54 = 0;
    uStack_58 = 0;
    uStack_5c = 0;
    uStack_60 = 0;
    iVar1 = FUN_718ff500(iVar10,param_5,&uStack_34,&uStack_3c,&uStack_60,&uStack_50);
    if (iVar1 != 0) {
      uVar2 = FUN_71ba240c(param_3,uStack_30);
      uStack_28 = uVar2;
      uVar3 = FUN_71ba240c(param_2,uStack_34);
      uVar9 = *(undefined4 *)(iVar10 + 8);
      uStack_2c = uVar3;
      FUN_718f7148(param_1,uVar9);
      uVar4 = FUN_71ba21e8(param_4,0);
      uVar5 = FUN_71ba0b38(uVar4,uVar2);
      uStack_64 = uVar5;
      uStack_68 = FUN_71ba0b38(uVar3,param_4);
      uVar4 = uStack_3c;
      uVar6 = FUN_71ba0b38(uStack_3c,0x3f800000);
      uVar6 = FUN_71ba21e8(uVar6,param_4);
      uStack_70 = FUN_71ba0b38(uVar3,uVar6);
      uVar6 = uStack_38;
      uVar7 = FUN_71ba0b38(uStack_38,0);
      uVar7 = FUN_71ba21e8(uVar7,param_4);
      uVar7 = FUN_71ba0b38(uVar2,uVar7);
      uStack_6c = uVar7;
      FUN_718fd1c0(param_1,uVar9,&uStack_68,&uStack_70,&uStack_50,&uStack_48,param_8);
      uStack_64 = uVar5;
      uVar5 = FUN_71ba0b38(param_4,param_4);
      uStack_68 = FUN_71ba0b38(uVar5,uVar3);
      uStack_6c = uVar7;
      uVar5 = FUN_71ba0b38(uVar4,0x40000000);
      uVar5 = FUN_71ba21e8(uVar5,param_4);
      uStack_70 = FUN_71ba0b38(uVar3,uVar5);
      FUN_718fd1c0(param_1,uVar9,&uStack_68,&uStack_70,&uStack_50,&uStack_48,param_8);
      uVar6 = FUN_71ba21e8(uVar6,param_4);
      uVar6 = FUN_71ba0b38(uVar2,uVar6);
      uStack_64 = uVar6;
      uVar4 = FUN_71ba21e8(uVar4,param_4);
      uVar4 = FUN_71ba0b38(uVar3,uVar4);
      uStack_68 = uVar4;
      FUN_718fd1c0(param_1,uVar9,&uStack_2c,&uStack_68,&uStack_50,&uStack_48,param_7);
      uStack_68 = uVar4;
      uStack_64 = uVar6;
      FUN_718fd1c0(param_1,uVar9,&uStack_2c,&uStack_68,&uStack_60,&uStack_58,param_6);
      iVar10 = *param_1;
      iVar1 = param_1[0x12] + -1;
      param_1[0x12] = iVar1;
      if (iVar1 != 0) {
        iVar11 = *(int *)(param_1[0x14] + iVar1 * 4 + -4);
      }
      param_1[0x1c] = iVar11;
      iVar1 = param_1[2] + iVar10 * 0x28;
      if (*(int *)(iVar1 + -0xc) == 0) {
        if (1 < iVar10) {
          iVar8 = imp_memcmp(param_1 + 0x18,iVar1 + -0x50,0x18);
          bVar12 = iVar8 == 0;
          if (bVar12) {
            iVar8 = *(int *)(iVar1 + -0x30);
          }
          if (bVar12 && iVar8 == 0) {
            *param_1 = iVar10 + -1;
            return;
          }
        }
      }
      else if (*(int *)(iVar1 + -0x18) != iVar11) {
        FUN_718f6aa0(param_1);
        return;
      }
      *(int *)(iVar1 + -0x18) = iVar11;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_7190938c
// Entry: 0x7190938c | Size: 136 bytes
// =========================================================================

void FUN_7190938c(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[1];
  iVar1 = param_2 + 0x1f >> 5;
  if (iVar2 < iVar1) {
    iVar3 = iVar2 + iVar2 / 2;
    if (iVar2 == 0) {
      iVar3 = 8;
    }
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    iVar2 = FUN_718c8a70(iVar3 << 2);
    if (param_1[2] != 0) {
      imp___aeabi_memcpy(iVar2,param_1[2],*param_1 << 2);
      FUN_718c8b14(param_1[2]);
    }
    param_1[1] = iVar3;
    param_1[2] = iVar2;
  }
  else {
    iVar2 = param_1[2];
  }
  *param_1 = iVar1;
  imp___aeabi_memclr(iVar2,iVar1 << 2);
  return;
}


// =========================================================================
// Function: FUN_7190949c
// Entry: 0x7190949c | Size: 604 bytes
// =========================================================================

uint FUN_7190949c(int param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint *puVar4;
  ushort uVar5;
  ushort *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  
  iVar8 = *(int *)(param_1 + 4);
  iVar13 = *(int *)(param_1 + 0x2c);
  puVar6 = (ushort *)(iVar8 + iVar13);
  uVar1 = *puVar6 >> 8;
  uVar2 = *puVar6 << 8;
  uVar5 = uVar2 | uVar1;
  switch(uVar5) {
  case 0:
    if ((int)param_2 <
        (int)((((uint)puVar6[1] << 0x18 | (uint)(puVar6[1] >> 8) << 0x10) >> 0x10) - 6)) {
      return (uint)*(byte *)((int)puVar6 + param_2 + 6);
    }
    break;
  default:
    if ((uVar2 | uVar1 & 0xfffe) == 0xc) {
      uVar12 = *(uint *)(puVar6 + 6);
      uVar12 = uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
               uVar12 >> 0x18;
      if (0 < (int)uVar12) {
        iVar8 = 0;
        do {
          while( true ) {
            uVar11 = iVar8 + ((int)(uVar12 - iVar8) >> 1);
            puVar4 = (uint *)(puVar6 + uVar11 * 6 + 8);
            uVar9 = *puVar4;
            uVar9 = uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
                    uVar9 >> 0x18;
            if (param_2 < uVar9) break;
            uVar7 = puVar4[1];
            if (param_2 <=
                (uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
                uVar7 >> 0x18)) {
              uVar12 = puVar4[2];
              uVar12 = uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8
                       | uVar12 >> 0x18;
              if (uVar5 == 0xc) {
                uVar12 = uVar12 + (param_2 - uVar9);
              }
              return uVar12;
            }
            iVar8 = uVar11 + 1;
            if ((int)uVar12 <= iVar8) {
              return 0;
            }
          }
          uVar12 = uVar11;
        } while (iVar8 < (int)uVar11);
      }
    }
    break;
  case 2:
    break;
  case 4:
    if ((int)param_2 < 0x10000) {
      uVar2 = puVar6[3];
      uVar12 = *(byte *)((int)puVar6 + 0xd) & 0xfe | (uint)(byte)puVar6[6] << 8;
      uVar1 = *(ushort *)((int)puVar6 + uVar12 + 0xe);
      iVar10 = iVar13;
      if ((int)(((uint)uVar1 << 0x18 | (uint)(uVar1 >> 8) << 0x10) >> 0x10) <= (int)param_2) {
        iVar10 = iVar13 + uVar12;
      }
      iVar10 = iVar10 + 0xc;
      uVar12 = ((uint)puVar6[5] << 0x18 | (uint)(puVar6[5] >> 8) << 0x10) >> 0x10;
      if (uVar12 != 0) {
        uVar9 = (puVar6[4] & 0xff) << 8 | (uint)(puVar6[4] >> 8);
        do {
          uVar12 = uVar12 - 1;
          iVar3 = iVar10 + (uVar9 >> 1 & 0x7ffe);
          uVar1 = *(ushort *)(iVar3 + iVar8);
          uVar9 = uVar9 >> 1;
          if ((int)(((uint)uVar1 << 0x18 | (uint)(uVar1 >> 8) << 0x10) >> 0x10) < (int)param_2) {
            iVar10 = iVar3;
          }
        } while ((uVar12 & 0xffff) != 0);
      }
      uVar12 = (iVar10 - iVar13) + 0x1fff4U & 0x1fffe;
      uVar9 = 0;
      uVar1 = *(ushort *)
               ((int)puVar6 + uVar12 + ((uVar2 & 0xff) << 8 | uVar2 >> 8 & 0xfffffffe) + 0x10);
      if ((int)(((uint)uVar1 << 0x18 | (uint)(uVar1 >> 8) << 0x10) >> 0x10) <= (int)param_2) {
        uVar9 = ((uint)uVar2 << 0x18 | (uint)(uVar2 >> 8) << 0x10) >> 0x11;
        uVar2 = *(ushort *)((int)puVar6 + uVar12 + uVar9 * 6 + 0x10);
        if ((uVar2 & 0xff) == 0 && uVar2 >> 8 == 0) {
          uVar2 = *(ushort *)((int)puVar6 + uVar12 + uVar9 * 4 + 0x10);
          return param_2 + (((uint)uVar2 << 0x18 | (uint)(uVar2 >> 8) << 0x10) >> 0x10) & 0xffff;
        }
        uVar2 = *(ushort *)
                 (iVar8 + ((uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8)) +
                  (param_2 - ((uVar1 & 0xff) << 8 | (uint)(uVar1 >> 8))) * 2 + iVar13 + uVar9 * 6 +
                  uVar12 + 0x10);
        uVar9 = (uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8);
      }
      return uVar9;
    }
    break;
  case 6:
    uVar2 = puVar6[3];
    if ((((uint)uVar2 << 0x18 | (uint)(uVar2 >> 8) << 0x10) >> 0x10 <= param_2) &&
       (uVar12 = (uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8),
       param_2 < uVar12 + (((uint)puVar6[4] << 0x18 | (uint)(puVar6[4] >> 8) << 0x10) >> 0x10))) {
      return (puVar6[(param_2 - uVar12) + 5] & 0xff) << 8 |
             (uint)(puVar6[(param_2 - uVar12) + 5] >> 8);
    }
  }
  return 0;
}


// =========================================================================
// Function: FUN_7190972c
// Entry: 0x7190972c | Size: 552 bytes
// =========================================================================

void FUN_7190972c(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5,
                 undefined4 *param_6,undefined4 *param_7,undefined4 *param_8)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  byte *pbVar8;
  undefined4 uStack_54;
  undefined1 auStack_50 [20];
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  
  if (*(int *)(param_1 + 0x3c) != 0) {
    imp___aeabi_memclr4(auStack_50,0x2c);
    uStack_54 = 1;
    iVar2 = FUN_7190a464(param_1,param_2,&uStack_54);
    iVar1 = iStack_38;
    iVar5 = iStack_34;
    if (iVar2 == 0) {
      iStack_3c = 0;
      iStack_30 = 0;
      iVar5 = 0;
      iVar1 = 0;
    }
joined_r0x7190994c:
    if (param_5 != (undefined4 *)0x0) {
      uVar3 = FUN_71ba1b94(iStack_3c);
      uVar3 = FUN_71ba21e8(uVar3,param_3);
      FUN_71ba0b38(uVar3,0);
      imp_floorf();
      uVar3 = FUN_71ba17bc();
      *param_5 = uVar3;
    }
    if (param_6 != (undefined4 *)0x0) {
      uVar3 = FUN_71ba1b94(-iStack_30);
      uVar3 = FUN_71ba21e8(uVar3,param_4);
      FUN_71ba0b38(uVar3,0);
      imp_floorf();
      uVar3 = FUN_71ba17bc();
      *param_6 = uVar3;
    }
    if (param_7 != (undefined4 *)0x0) {
      uVar3 = FUN_71ba1b94(iVar1);
      uVar3 = FUN_71ba21e8(uVar3,param_3);
      FUN_71ba0b38(uVar3,0);
      imp_ceilf();
      uVar3 = FUN_71ba17bc();
      *param_7 = uVar3;
    }
    if (param_8 != (undefined4 *)0x0) {
      uVar3 = FUN_71ba1b94(-iVar5);
      uVar3 = FUN_71ba21e8(uVar3,param_4);
      FUN_71ba0b38(uVar3,0);
      imp_ceilf();
      uVar3 = FUN_71ba17bc();
      *param_8 = uVar3;
    }
    return;
  }
  if ((param_2 < *(int *)(param_1 + 0xc)) && (*(int *)(param_1 + 0x30) < 2)) {
    iVar5 = *(int *)(param_1 + 4) + *(int *)(param_1 + 0x10);
    if (*(int *)(param_1 + 0x30) == 0) {
      pbVar8 = (byte *)(iVar5 + param_2 * 2);
      uVar4 = (uint)pbVar8[1] << 1 | (uint)*pbVar8 << 9;
      if (uVar4 == ((uint)pbVar8[3] << 1 | (uint)pbVar8[2] << 9)) goto LAB_71909880;
    }
    else {
      puVar6 = (uint *)(iVar5 + param_2 * 4);
      uVar4 = *puVar6;
      uVar7 = puVar6[1];
      uVar4 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
              uVar4 >> 0x18;
      if (uVar4 == (uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
                   uVar7 >> 0x18)) goto LAB_71909880;
    }
    iVar5 = uVar4 + *(int *)(param_1 + 0x18);
    if (-1 < iVar5) {
      iVar5 = *(int *)(param_1 + 4) + iVar5;
      iStack_3c = (int)(short)(*(ushort *)(iVar5 + 2) << 8 | *(ushort *)(iVar5 + 2) >> 8);
      iStack_30 = (int)(short)(*(ushort *)(iVar5 + 8) << 8 | *(ushort *)(iVar5 + 8) >> 8);
      iVar1 = (int)(short)(*(ushort *)(iVar5 + 6) << 8 | *(ushort *)(iVar5 + 6) >> 8);
      iVar5 = (int)(short)(*(ushort *)(iVar5 + 4) << 8 | *(ushort *)(iVar5 + 4) >> 8);
      goto joined_r0x7190994c;
    }
  }
LAB_71909880:
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = 0;
  }
  if (param_7 != (undefined4 *)0x0) {
    *param_7 = 0;
  }
  if (param_8 != (undefined4 *)0x0) {
    *param_8 = 0;
  }
  return;
}


// =========================================================================
// Function: FUN_71909bd4
// Entry: 0x71909bd4 | Size: 324 bytes
// =========================================================================

void FUN_71909bd4(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = param_2[1];
  uVar8 = param_2[2];
  uVar5 = 0;
  uVar2 = uVar7;
  if ((int)uVar7 < (int)uVar8) {
    uVar2 = uVar7 + 1;
    param_2[1] = uVar2;
    uVar5 = (uint)*(byte *)(*param_2 + uVar7) << 8;
  }
  if ((int)uVar2 < (int)uVar8) {
    param_2[1] = uVar2 + 1;
    uVar5 = uVar5 | *(byte *)(*param_2 + uVar2);
    uVar2 = uVar2 + 1;
  }
  if (uVar5 != 0) {
    uVar3 = 0;
    if ((int)uVar2 < (int)uVar8) {
      param_2[1] = uVar2 + 1;
      uVar3 = (uint)*(byte *)(*param_2 + uVar2);
      uVar2 = uVar2 + 1;
    }
    uVar2 = uVar3 * uVar5 + uVar2;
    uVar5 = uVar2;
    if ((int)uVar8 < (int)uVar2) {
      uVar5 = uVar8;
    }
    if ((int)uVar2 < 0) {
      uVar5 = uVar8;
    }
    if (uVar3 == 0) {
      iVar1 = -1;
    }
    else {
      uVar6 = 0;
      uVar2 = uVar5;
      do {
        if ((int)uVar2 < (int)uVar8) {
          uVar5 = uVar2 + 1;
          param_2[1] = uVar5;
          uVar4 = (uint)*(byte *)(*param_2 + uVar2);
        }
        else {
          uVar4 = 0;
          uVar5 = uVar2;
        }
        uVar3 = uVar3 - 1;
        uVar6 = uVar6 << 8 | uVar4;
        uVar2 = uVar5;
      } while (uVar3 != 0);
      iVar1 = uVar6 - 1;
    }
    uVar5 = iVar1 + uVar5;
    uVar2 = uVar5;
    if ((int)uVar8 < (int)uVar5) {
      uVar2 = uVar8;
    }
    if ((int)uVar5 < 0) {
      uVar2 = uVar8;
    }
    param_2[1] = uVar2;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (-1 < (int)(uVar2 - uVar7 | uVar7)) {
    uVar5 = uVar7;
    if ((int)uVar7 <= (int)uVar8) {
      uVar5 = uVar2;
    }
    if ((int)uVar5 <= (int)uVar8) {
      iVar1 = *param_2;
      param_1[2] = uVar2 - uVar7;
      *param_1 = iVar1 + uVar7;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71909d30
// Entry: 0x71909d30 | Size: 304 bytes
// =========================================================================

void FUN_71909d30(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  iVar5 = 0;
  if (param_4 < 0) {
    iVar5 = param_4;
  }
  uVar2 = 0;
  if (param_4 < 1) {
    uVar8 = 0;
  }
  else {
    pbVar1 = (byte *)(param_2 + iVar5);
    iVar5 = 1;
    uVar8 = (uint)*pbVar1 << 8;
  }
  if (iVar5 < param_4) {
    uVar2 = (uint)*(byte *)(param_2 + iVar5);
    iVar5 = iVar5 + 1;
  }
  uVar6 = 0;
  uVar3 = 0;
  uVar7 = 0;
  if ((iVar5 < param_4) && (uVar10 = (uint)*(byte *)(param_2 + iVar5), uVar10 != 0)) {
    iVar4 = uVar10 * param_5 + iVar5 + 1;
    iVar5 = iVar4;
    if (param_4 < iVar4) {
      iVar5 = param_4;
    }
    if (iVar4 < 0) {
      iVar5 = param_4;
    }
    uVar3 = 0;
    uVar7 = uVar10;
    do {
      if (iVar5 < param_4) {
        uVar6 = (uint)*(byte *)(param_2 + iVar5);
        iVar5 = iVar5 + 1;
      }
      else {
        uVar6 = 0;
      }
      uVar7 = uVar7 - 1;
      uVar3 = uVar3 << 8 | uVar6;
    } while (uVar7 != 0);
    uVar6 = 0;
    uVar9 = uVar10;
    do {
      if (iVar5 < param_4) {
        uVar7 = (uint)*(byte *)(param_2 + iVar5);
        iVar5 = iVar5 + 1;
      }
      else {
        uVar7 = 0;
      }
      uVar9 = uVar9 - 1;
      uVar6 = uVar6 << 8 | uVar7;
      uVar7 = uVar10;
    } while (uVar9 != 0);
  }
  *param_1 = 0;
  param_1[1] = 0;
  uVar6 = uVar6 - uVar3;
  param_1[2] = 0;
  uVar2 = uVar7 * ((uVar8 | uVar2) + 1) + uVar3 + 2;
  if (-1 < (int)(uVar6 | uVar2)) {
    bVar11 = SBORROW4(param_4,uVar2);
    iVar5 = param_4 - uVar2;
    if ((int)uVar2 <= param_4) {
      bVar11 = SBORROW4(iVar5,uVar6);
      iVar5 = iVar5 - uVar6;
    }
    if (iVar5 < 0 == bVar11) {
      param_1[2] = uVar6;
      *param_1 = param_2 + uVar2;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71909e78
// Entry: 0x71909e78 | Size: 440 bytes
// =========================================================================

void FUN_71909e78(int *param_1,uint param_2,uint param_3,int param_4)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  int iStack_30;
  int iStack_2c;
  uint uStack_28;
  
  uVar6 = param_1[2];
  uVar9 = uVar6;
  if (-1 < (int)uVar6) {
    uVar9 = 0;
  }
  param_1[1] = uVar9;
  if (0 < (int)uVar6) {
    do {
      uVar10 = 0;
      uVar7 = uVar9;
      uVar4 = uVar9;
      if ((int)uVar9 < (int)uVar6) {
        do {
          while( true ) {
            iVar8 = *param_1;
            if (*(byte *)(iVar8 + uVar7) < 0x1c) {
              uVar4 = uVar7 + 1;
              param_1[1] = uVar4;
              uVar10 = (uint)*(byte *)(iVar8 + uVar7);
              if (uVar10 == 0xc) {
                uVar10 = 0;
                if ((int)uVar4 < (int)uVar6) {
                  param_1[1] = uVar7 + 2;
                  uVar10 = (uint)*(byte *)(iVar8 + uVar4);
                  uVar4 = uVar7 + 2;
                }
                uVar10 = uVar10 | 0x100;
              }
              goto LAB_71909f60;
            }
            if (*(byte *)(iVar8 + uVar7) != 0x1e) break;
            uVar3 = uVar6;
            if (-2 < (int)uVar7) {
              uVar3 = uVar7 + 1;
            }
            param_1[1] = uVar3;
            uVar4 = uVar6;
            if ((int)uVar6 < (int)uVar3) {
              uVar4 = uVar3;
            }
            do {
              uVar7 = uVar4;
              if (uVar4 == uVar3) goto LAB_71909f60;
              uVar7 = uVar3 + 1;
              param_1[1] = uVar7;
              pbVar1 = (byte *)(iVar8 + uVar3);
            } while (((*pbVar1 & 0xf) != 0xf) && (uVar3 = uVar7, (*pbVar1 & 0xf0) != 0xf0));
            uVar4 = uVar7;
            if ((int)uVar6 <= (int)uVar7) goto LAB_71909f60;
          }
          FUN_7190a2d4(param_1);
          uVar7 = param_1[1];
          uVar6 = param_1[2];
          uVar4 = uVar7;
        } while ((int)uVar7 < (int)uVar6);
      }
LAB_71909f60:
      if (uVar10 == param_2) {
        iStack_2c = 0;
        uStack_28 = uVar7 - uVar9;
        if ((int)(uStack_28 | uVar9) < 0) {
          return;
        }
        uVar4 = uVar9;
        if ((int)uVar9 <= (int)uVar6) {
          uVar4 = uVar7;
        }
        if ((int)uVar6 < (int)uVar4) {
          return;
        }
        uVar6 = param_3;
        if (0 < (int)param_3) {
          uVar6 = uStack_28;
        }
        iStack_30 = *param_1 + uVar9;
        if ((int)uVar6 < 1) {
          return;
        }
        iVar8 = 0;
        do {
          uVar5 = FUN_7190a2d4(&iStack_30);
          *(undefined4 *)(param_4 + iVar8 * 4) = uVar5;
          iVar8 = iVar8 + 1;
          bVar11 = SBORROW4(iVar8,param_3);
          iVar2 = iVar8 - param_3;
          if (iVar8 < (int)param_3) {
            bVar11 = SBORROW4(iStack_2c,uStack_28);
            iVar2 = iStack_2c - uStack_28;
          }
        } while (iVar2 < 0 != bVar11);
        return;
      }
      uVar9 = uVar4;
    } while ((int)uVar4 < (int)uVar6);
  }
  return;
}


// =========================================================================
// Function: FUN_7190a080
// Entry: 0x7190a080 | Size: 516 bytes
// =========================================================================

void FUN_7190a080(int *param_1,int param_2,undefined4 param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int aiStack_44 [3];
  uint uStack_38;
  uint uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_24 = param_7;
  uStack_28 = param_6;
  uStack_2c = param_5;
  iStack_30 = 0;
  uStack_34 = 0;
  uStack_38 = 0;
  aiStack_44[2] = FUN_71909e78(&uStack_2c,0x12,2,&uStack_38);
  uVar2 = uStack_34;
  if (uStack_34 != 0) {
    aiStack_44[2] = uStack_38;
  }
  if (uStack_34 == 0 || aiStack_44[2] == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  if ((int)(aiStack_44[2] | uStack_34) < 0) {
    aiStack_44[2] = 0;
    aiStack_44[0] = 0;
  }
  else {
    aiStack_44[0] = param_2 + uStack_34;
    if ((int)param_4 < (int)uStack_34 || (int)(param_4 - uStack_34) < aiStack_44[2]) {
      aiStack_44[2] = 0;
      aiStack_44[0] = 0;
    }
  }
  aiStack_44[1] = 0;
  FUN_71909e78(aiStack_44,0x13,1,&iStack_30);
  if (iStack_30 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  uVar2 = iStack_30 + uVar2;
  uVar6 = 0;
  uVar3 = 0;
  uVar1 = uVar2;
  if ((int)param_4 < (int)uVar2) {
    uVar1 = param_4;
  }
  if ((int)uVar2 < 0) {
    uVar1 = param_4;
  }
  uVar2 = uVar1;
  if ((int)uVar1 < (int)param_4) {
    uVar6 = (uint)*(byte *)(param_2 + uVar1) << 8;
    uVar2 = uVar1 + 1;
  }
  if ((int)uVar2 < (int)param_4) {
    uVar3 = (uint)*(byte *)(param_2 + uVar2);
    uVar2 = uVar2 + 1;
  }
  if ((uVar3 | uVar6) != 0) {
    uVar4 = 0;
    if ((int)uVar2 < (int)param_4) {
      uVar4 = (uint)*(byte *)(param_2 + uVar2);
      uVar2 = uVar2 + 1;
    }
    uVar2 = uVar4 * (uVar3 | uVar6) + uVar2;
    uVar6 = uVar2;
    if ((int)param_4 < (int)uVar2) {
      uVar6 = param_4;
    }
    if ((int)uVar2 < 0) {
      uVar6 = param_4;
    }
    if (uVar4 == 0) {
      iVar5 = -1;
    }
    else {
      uVar2 = 0;
      do {
        if ((int)uVar6 < (int)param_4) {
          uVar3 = (uint)*(byte *)(param_2 + uVar6);
          uVar6 = uVar6 + 1;
        }
        else {
          uVar3 = 0;
        }
        uVar4 = uVar4 - 1;
        uVar2 = uVar2 << 8 | uVar3;
      } while (uVar4 != 0);
      iVar5 = uVar2 - 1;
    }
    uVar6 = iVar5 + uVar6;
    uVar2 = uVar6;
    if ((int)param_4 < (int)uVar6) {
      uVar2 = param_4;
    }
    if ((int)uVar6 < 0) {
      uVar2 = param_4;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((-1 < (int)(uVar2 - uVar1 | uVar1)) && ((int)uVar2 <= (int)param_4)) {
    param_1[2] = uVar2 - uVar1;
    *param_1 = param_2 + uVar1;
  }
  return;
}


// =========================================================================
// Function: FUN_7190a2d4
// Entry: 0x7190a2d4 | Size: 376 bytes
// =========================================================================

uint FUN_7190a2d4(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  iVar5 = param_1[1];
  uVar1 = 0;
  iVar4 = param_1[2];
  if (iVar5 < iVar4) {
    iVar7 = *param_1;
    iVar8 = iVar5 + 1;
    param_1[1] = iVar8;
    uVar3 = (uint)*(byte *)(iVar7 + iVar5);
    if (uVar3 - 0x20 < 0xd7) {
      return uVar3 - 0x8b;
    }
    if (uVar3 - 0xf7 < 4) {
      uVar1 = 0;
      if (iVar8 < iVar4) {
        param_1[1] = iVar5 + 2;
        uVar1 = (uint)*(byte *)(iVar7 + iVar8);
      }
      return (uVar3 * 0x100 + uVar1) - 0xf694;
    }
    if (uVar3 - 0xfb < 4) {
      if (iVar8 < iVar4) {
        param_1[1] = iVar5 + 2;
        uVar1 = (uint)*(byte *)(iVar7 + iVar8);
      }
      return 0xfa94 - (uVar1 | uVar3 << 8);
    }
    if (uVar3 == 0x1d) {
      if (iVar8 < iVar4) {
        param_1[1] = iVar5 + 2;
        uVar3 = (uint)*(byte *)(iVar7 + iVar8) << 8;
        iVar8 = iVar5 + 2;
      }
      else {
        uVar3 = 0;
      }
      if (iVar8 < iVar4) {
        param_1[1] = iVar8 + 1;
        uVar1 = (uint)*(byte *)(iVar7 + iVar8);
        iVar8 = iVar8 + 1;
      }
      uVar2 = 0;
      if (iVar8 < iVar4) {
        param_1[1] = iVar8 + 1;
        uVar6 = (uint)*(byte *)(iVar7 + iVar8) << 8;
        iVar8 = iVar8 + 1;
      }
      else {
        uVar6 = 0;
      }
      if (iVar8 < iVar4) {
        param_1[1] = iVar8 + 1;
        uVar2 = (uint)*(byte *)(iVar7 + iVar8);
      }
      uVar1 = uVar6 | (uVar3 | uVar1) << 0x10 | uVar2;
    }
    else if (uVar3 == 0x1c) {
      if (iVar8 < iVar4) {
        param_1[1] = iVar5 + 2;
        uVar3 = (uint)*(byte *)(iVar7 + iVar8) << 8;
        iVar8 = iVar5 + 2;
      }
      else {
        uVar3 = 0;
      }
      if (iVar8 < iVar4) {
        param_1[1] = iVar8 + 1;
        uVar1 = (uint)*(byte *)(iVar7 + iVar8);
      }
      return uVar3 | uVar1;
    }
  }
  return uVar1;
}


// =========================================================================
// Function: FUN_7190a464
// Entry: 0x7190a464 | Size: 3192 bytes
// =========================================================================

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_7190a464(int param_1,int param_2,undefined4 param_3)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  short sVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  undefined4 uVar21;
  int iVar22;
  undefined4 uVar23;
  int iVar24;
  uint uVar25;
  bool bVar26;
  bool bVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  int iStack_1a0;
  int iStack_19c;
  int iStack_194;
  int iStack_190;
  int aiStack_18c [2];
  int iStack_184;
  int iStack_180;
  int iStack_17c;
  int iStack_178;
  int aiStack_170 [25];
  uint auStack_10c [5];
  uint auStack_f8 [5];
  uint uStack_e4;
  uint uStack_e0;
  uint auStack_dc [4];
  uint uStack_cc;
  int iStack_38;
  undefined4 uStack_34;
  int iStack_30;
  
  iStack_19c = *(int *)(param_1 + 0x58);
  iStack_1a0 = *(int *)(param_1 + 0x60);
  FUN_71909d30(&iStack_180,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),
               *(undefined4 *)(param_1 + 0x48),param_2);
  if (iStack_178 <= iStack_17c) {
    return 0;
  }
  uVar25 = 0;
  bVar3 = true;
  iStack_190 = 0;
  iStack_194 = 0;
  bVar27 = false;
  do {
    uVar8 = uStack_cc;
    uVar4 = auStack_dc[3];
    uVar6 = auStack_dc[2];
    uVar14 = auStack_dc[1];
    uVar12 = auStack_dc[0];
    uVar10 = uStack_e0;
    uVar29 = uStack_e4;
    uVar30 = auStack_f8[4];
    uVar18 = auStack_f8[3];
    uVar13 = auStack_f8[2];
    uVar15 = auStack_f8[1];
    uVar20 = auStack_f8[0];
    puVar17 = auStack_10c + 5;
    iVar9 = iStack_17c + 1;
    bVar2 = *(byte *)(iStack_180 + iStack_17c);
    switch(bVar2) {
    case 1:
    case 3:
    case 0x12:
    case 0x17:
      iStack_190 = iStack_190 + (int)uVar25 / 2;
      uVar25 = 0;
      iStack_17c = iVar9;
      break;
    default:
      if (bVar2 < 0x20) {
        return 0;
      }
      if (bVar2 != 0xff) goto switchD_7190a590_caseD_1c;
    case 0xff:
      uVar20 = 0;
      if (iVar9 < iStack_178) {
        uVar15 = (uint)*(byte *)(iStack_180 + iVar9);
        iVar9 = iStack_17c + 2;
      }
      else {
        uVar15 = 0;
      }
      uVar13 = 0;
      if (iVar9 < iStack_178) {
        uVar20 = (uint)*(byte *)(iStack_180 + iVar9);
        iVar9 = iVar9 + 1;
      }
      if (iVar9 < iStack_178) {
        uVar18 = (uint)*(byte *)(iStack_180 + iVar9);
        iVar9 = iVar9 + 1;
      }
      else {
        uVar18 = 0;
      }
      if (iVar9 < iStack_178) {
        uVar13 = (uint)*(byte *)(iStack_180 + iVar9);
      }
      if (iVar9 < iStack_178) {
        iVar9 = iVar9 + 1;
      }
      iStack_17c = iVar9;
      uVar7 = FUN_71ba1b94((uVar15 << 0x10 | uVar20 << 8 | uVar18) << 8 | uVar13);
      uVar20 = FUN_71ba21e8(uVar7,0x37800000);
LAB_7190aea4:
      if (0x2f < (int)uVar25) {
        return 0;
      }
      puVar17[uVar25] = uVar20;
      uVar25 = uVar25 + 1;
      break;
    case 4:
      if ((int)uVar25 < 1) {
        return 0;
      }
      uVar20 = 0;
      uVar15 = auStack_10c[uVar25 + 4];
      goto LAB_7190ae30;
    case 5:
      if ((int)uVar25 < 2) {
        return 0;
      }
      puVar17 = auStack_10c + 5;
      iVar22 = 1;
      iStack_17c = iVar9;
      do {
        FUN_7190bb78(param_3,*puVar17,puVar17[1]);
        iVar22 = iVar22 + 2;
        puVar17 = puVar17 + 2;
      } while (iVar22 < (int)uVar25);
      goto LAB_7190af3c;
    case 6:
      iVar22 = 0;
      if ((int)uVar25 < 1) {
        return 0;
      }
      iStack_17c = iVar9;
      if (0 < (int)uVar25) {
        do {
          FUN_7190bb78(param_3,puVar17[iVar22],0);
          iVar22 = iVar22 + 1;
          if ((int)uVar25 <= iVar22) break;
LAB_7190b408:
          FUN_7190bb78(param_3,0,puVar17[iVar22]);
          iVar22 = iVar22 + 1;
        } while (iVar22 < (int)uVar25);
      }
      goto LAB_7190b3e4;
    case 7:
      iVar22 = 0;
      if ((int)uVar25 < 1) {
        return 0;
      }
      iStack_17c = iVar9;
      if (0 < (int)uVar25) goto LAB_7190b408;
      goto LAB_7190b3e4;
    case 8:
      if ((int)uVar25 < 6) {
        return 0;
      }
      iVar22 = 5;
      iStack_17c = iVar9;
      do {
        FUN_7190bd44(param_3,*puVar17,puVar17[1],puVar17[2],puVar17[3],puVar17[4],puVar17[5]);
        iVar22 = iVar22 + 6;
        puVar17 = puVar17 + 6;
      } while (iVar22 < (int)uVar25);
      uVar25 = 0;
      break;
    case 10:
      iStack_17c = iVar9;
      if (!bVar27) {
        uVar20 = *(uint *)(param_1 + 0x78);
        if (uVar20 != 0) {
          iVar22 = *(int *)(param_1 + 0x70);
          uVar15 = 0;
          if ((int)uVar20 < 0) {
            uVar15 = uVar20;
          }
          if ((int)uVar20 < 1) {
LAB_7190b1c0:
            uVar15 = uVar15 + param_2;
            uVar18 = 0;
            uVar13 = uVar15;
            if ((int)uVar20 < (int)uVar15) {
              uVar13 = uVar20;
            }
            if ((int)uVar15 < 0) {
              uVar13 = uVar20;
            }
            if ((int)uVar13 < (int)uVar20) {
              uVar18 = (uint)*(byte *)(iVar22 + uVar13);
            }
          }
          else {
            if (*(char *)(iVar22 + uVar15) == '\0') {
              uVar15 = 1;
              goto LAB_7190b1c0;
            }
            if (*(char *)(iVar22 + uVar15) == '\x03') {
              bVar27 = uVar20 != 1;
              uVar13 = 1;
              uVar15 = 3;
              if (bVar27) {
                uVar15 = (uint)*(byte *)(iVar22 + 1);
              }
              uVar18 = 0;
              uVar30 = 0;
              if (bVar27) {
                uVar13 = 2;
              }
              uVar29 = 0;
              if (bVar27) {
                uVar18 = uVar15 << 8;
              }
              if (uVar13 < uVar20) {
                uVar30 = (uint)*(byte *)(iVar22 + uVar13);
                uVar13 = uVar13 + 1;
              }
              if (uVar13 < uVar20) {
                pbVar1 = (byte *)(iVar22 + uVar13);
                uVar13 = uVar13 + 1;
                uVar15 = (uint)*pbVar1 << 8;
              }
              else {
                uVar15 = 0;
              }
              if (uVar13 < uVar20) {
                uVar29 = (uint)*(byte *)(iVar22 + uVar13);
                uVar13 = uVar13 + 1;
              }
              uVar30 = uVar30 | uVar18;
              if (uVar30 != 0) {
                uVar15 = uVar29 | uVar15;
                do {
                  uVar29 = 0;
                  if ((int)uVar13 < (int)uVar20) {
                    uVar18 = (uint)*(byte *)(iVar22 + uVar13);
                    uVar13 = uVar13 + 1;
                  }
                  else {
                    uVar18 = 0;
                  }
                  uVar10 = 0;
                  if ((int)uVar13 < (int)uVar20) {
                    uVar29 = (uint)*(byte *)(iVar22 + uVar13);
                    uVar13 = uVar13 + 1;
                  }
                  if ((int)uVar13 < (int)uVar20) {
                    uVar10 = (uint)*(byte *)(iVar22 + uVar13);
                    uVar13 = uVar13 + 1;
                  }
                  uVar10 = uVar29 << 8 | uVar10;
                  if (((int)uVar15 <= param_2) && (param_2 < (int)uVar10)) goto LAB_7190b270;
                  uVar30 = uVar30 - 1;
                  uVar15 = uVar10;
                } while (uVar30 != 0);
              }
            }
            uVar18 = 0xffffffff;
          }
LAB_7190b270:
          uVar23 = *(undefined4 *)(param_1 + 0x34);
          uVar21 = *(undefined4 *)(param_1 + 0x38);
          uVar7 = *(undefined4 *)(param_1 + 0x3c);
          FUN_71909d30(&iStack_38,*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68),
                       *(undefined4 *)(param_1 + 0x6c),uVar18);
          FUN_7190a080(aiStack_18c,uVar23,uVar21,uVar7,iStack_38,uStack_34,iStack_30);
          iStack_19c = aiStack_18c[0];
          iStack_1a0 = iStack_184;
        }
      }
      bVar27 = true;
      iVar9 = iStack_17c;
    case 0x1d:
      iStack_17c = iVar9;
      if ((int)uVar25 < 1) {
        return 0;
      }
      iVar9 = FUN_71ba17bc(auStack_10c[uVar25 + 4]);
      if (9 < iStack_194) {
        return 0;
      }
      aiStack_170[iStack_194 * 3] = iStack_180;
      uVar20 = 0;
      iVar22 = iStack_180;
      if (bVar2 != 10) {
        iVar22 = param_1;
      }
      aiStack_170[iStack_194 * 3 + 1] = iStack_17c;
      aiStack_170[iStack_194 * 3 + 2] = iStack_178;
      iVar11 = iStack_19c;
      iVar24 = iStack_1a0;
      if (bVar2 != 10) {
        iVar24 = *(int *)(iVar22 + 0x54);
        iVar11 = *(int *)(iVar22 + 0x4c);
      }
      iVar22 = 0;
      if (iVar24 < 0) {
        iVar22 = iVar24;
      }
      if (iVar24 < 1) {
        uVar15 = 0;
      }
      else {
        uVar15 = (uint)*(byte *)(iVar11 + iVar22) << 8;
        iVar22 = 1;
      }
      if (iVar22 < iVar24) {
        uVar20 = (uint)*(byte *)(iVar11 + iVar22);
        iVar22 = iVar22 + 1;
      }
      uVar20 = uVar20 | uVar15;
      iVar19 = 0x6b;
      if (0x9a < uVar20 >> 3) {
        iVar19 = 0x46b;
      }
      if (0x846b < uVar20) {
        iVar19 = 0x8000;
      }
      if ((uint)(iVar19 + iVar9) < uVar20) {
        FUN_71909d30(&iStack_38,iVar11,iVar22,iVar24,iVar19 + iVar9);
      }
      else {
        iStack_30 = 0;
        iStack_38 = 0;
        uStack_34 = 0;
      }
      iStack_180 = iStack_38;
      iStack_178 = iStack_30;
      if (iStack_30 == 0) {
        return 0;
      }
      iStack_17c = 0;
      iStack_194 = iStack_194 + 1;
      uVar25 = uVar25 - 1;
      break;
    case 0xb:
      if (iStack_194 < 1) {
        return 0;
      }
      iStack_194 = iStack_194 + -1;
      iStack_180 = aiStack_170[iStack_194 * 3];
      iStack_17c = aiStack_170[iStack_194 * 3 + 1];
      iStack_178 = aiStack_170[iStack_194 * 3 + 2];
      break;
    case 0xc:
      if (iStack_178 <= iVar9) {
        return 0;
      }
      iStack_17c = iStack_17c + 2;
      uVar28 = uVar4;
      switch(*(undefined1 *)(iStack_180 + iVar9)) {
      case 0x22:
        if ((int)uVar25 < 7) {
          return 0;
        }
        uVar25 = 0;
        FUN_7190bd44(param_3,auStack_f8[0],0,auStack_f8[1],auStack_f8[2],auStack_f8[3],0);
        FUN_7190bd44(param_3,uVar30,0,uVar29,uVar13 ^ 0x80000000,uVar10,0);
        goto LAB_7190a55c;
      case 0x23:
        if ((int)uVar25 < 0xd) {
          return 0;
        }
        FUN_7190bd44(param_3,auStack_f8[0],auStack_f8[1],auStack_f8[2],auStack_f8[3],auStack_f8[4],
                     uStack_e4);
        break;
      case 0x24:
        if ((int)uVar25 < 9) {
          return 0;
        }
        FUN_7190bd44(param_3,auStack_f8[0],auStack_f8[1],auStack_f8[2],auStack_f8[3],auStack_f8[4],0
                    );
        uVar7 = FUN_71ba0b38(uVar15,uVar18);
        uVar25 = FUN_71ba0b38(uVar7,uVar12);
        FUN_7190bd44(param_3,uVar29,0,uVar10,uVar12,uVar14,uVar25 ^ 0x80000000);
        goto LAB_7190b3e4;
      case 0x25:
        if ((int)uVar25 < 0xb) {
          return 0;
        }
        FUN_7190bd44(param_3,auStack_f8[0],auStack_f8[1],auStack_f8[2],auStack_f8[3],auStack_f8[4],
                     uStack_e4);
        uVar7 = FUN_71ba0b38(uVar20,uVar13);
        uVar7 = FUN_71ba0b38(uVar7,uVar30);
        uVar7 = FUN_71ba0b38(uVar7,uVar10);
        uVar25 = FUN_71ba0b38(uVar7,uVar14);
        uVar7 = FUN_71ba0b38(uVar15,uVar18);
        uVar7 = FUN_71ba0b38(uVar7,uVar29);
        uVar7 = FUN_71ba0b38(uVar7,uVar12);
        uVar8 = FUN_71ba0b38(uVar7,uVar6);
        iVar9 = FUN_71ba2d70(uVar25 & 0x7fffffff,uVar8 & 0x7fffffff);
        if (iVar9 == 0) {
          uVar28 = uVar25 ^ 0x80000000;
          uVar8 = uVar4;
        }
        else {
          uVar8 = uVar8 ^ 0x80000000;
        }
        break;
      default:
        return 0;
      }
      goto LAB_7190ad08;
    case 0xe:
      iStack_17c = iVar9;
      FUN_7190c0b8(param_3);
      return 1;
    case 0x13:
    case 0x14:
      if (bVar3) {
        iStack_190 = iStack_190 + (int)uVar25 / 2;
      }
      iVar9 = iVar9 + ((int)(iStack_190 + 7 + ((uint)(iStack_190 + 7 >> 0x1f) >> 0x1d)) >> 3);
      iStack_17c = iVar9;
      if (iStack_178 < iVar9) {
        iStack_17c = iStack_178;
      }
      if (iVar9 < 0) {
        iStack_17c = iStack_178;
      }
      goto LAB_7190ac1c;
    case 0x15:
      if ((int)uVar25 < 2) {
        return 0;
      }
      iStack_17c = iVar9;
      FUN_7190b97c(param_3,auStack_10c[uVar25 + 3],auStack_10c[uVar25 + 4]);
LAB_7190ac1c:
      uVar25 = 0;
      bVar3 = false;
      break;
    case 0x16:
      if ((int)uVar25 < 1) {
        return 0;
      }
      uVar15 = 0;
      uVar20 = auStack_10c[uVar25 + 4];
LAB_7190ae30:
      bVar3 = false;
      iStack_17c = iVar9;
      FUN_7190b97c(param_3,uVar20,uVar15);
      uVar25 = 0;
      break;
    case 0x18:
      if ((int)uVar25 < 8) {
        return 0;
      }
      puVar17 = auStack_10c + 10;
      iVar22 = 5;
      iStack_17c = iVar9;
      do {
        iVar9 = iVar22;
        puVar16 = puVar17;
        FUN_7190bd44(param_3,puVar16[-5],puVar16[-4],puVar16[-3],puVar16[-2],puVar16[-1],*puVar16);
        iVar22 = iVar9 + 6;
        puVar17 = puVar16 + 6;
      } while (iVar22 < (int)(uVar25 - 2));
      if ((int)uVar25 <= iVar9 + 2) {
        return 0;
      }
      FUN_7190bb78(param_3,puVar16[1],puVar16[2]);
      goto LAB_7190b3e4;
    case 0x19:
      if ((int)uVar25 < 8) {
        return 0;
      }
      puVar17 = auStack_10c + 8;
      iVar22 = 5;
      iStack_17c = iVar9;
      do {
        puVar16 = puVar17;
        FUN_7190bb78(param_3,puVar16[-3],puVar16[-2]);
        iVar9 = iVar22 + 2;
        iVar24 = iVar22 + -2;
        puVar17 = puVar16 + 2;
        iVar22 = iVar9;
      } while (iVar24 < (int)(uVar25 - 6));
      if ((int)uVar25 <= iVar9) {
        return 0;
      }
      uVar10 = puVar16[-1];
      uVar14 = puVar16[1];
      uVar12 = auStack_10c[uVar25 & 0x7ffffffe];
      uVar6 = puVar16[2];
      uVar28 = puVar16[3];
      uVar8 = puVar16[4];
LAB_7190ad08:
      FUN_7190bd44(param_3,uVar10,uVar12,uVar14,uVar6,uVar28,uVar8);
      goto LAB_7190b3e4;
    case 0x1a:
    case 0x1b:
      if ((int)uVar25 < 4) {
        return 0;
      }
      uVar20 = uVar25 & 1;
      iStack_17c = iVar9;
      if (uVar20 + 3 < uVar25) {
        uVar18 = puVar17[uVar20 + 3];
        uVar13 = puVar17[uVar20];
        uVar15 = auStack_f8[0];
        if (uVar20 == 0) {
          uVar15 = 0;
        }
        if (bVar2 == 0x1b) {
          uVar30 = uVar13;
          uVar13 = uVar15;
          uVar29 = uVar18;
          uVar18 = 0;
        }
        else {
          uVar29 = 0;
          uVar30 = uVar15;
        }
        FUN_7190bd44(param_3,uVar30,uVar13,auStack_10c[uVar20 + 6],auStack_10c[uVar20 + 7],uVar29,
                     uVar18);
        uVar15 = uVar20 + 7;
        if (uVar15 < uVar25) {
          puVar17 = auStack_dc + uVar20;
          do {
            uVar20 = puVar17[-3];
            uVar13 = *puVar17;
            if (bVar2 == 0x1b) {
              uVar18 = uVar20;
              uVar20 = 0;
              uVar30 = uVar13;
              uVar13 = 0;
            }
            else {
              uVar30 = 0;
              uVar18 = 0;
            }
            FUN_7190bd44(param_3,uVar18,uVar20,puVar17[-2],puVar17[-1],uVar30,uVar13);
            uVar15 = uVar15 + 4;
            puVar17 = puVar17 + 4;
          } while ((int)uVar15 < (int)uVar25);
        }
      }
LAB_7190af3c:
      uVar25 = 0;
      break;
    case 0x1c:
switchD_7190a590_caseD_1c:
      iVar9 = iStack_17c;
      if (iStack_178 < iStack_17c) {
        iVar9 = iStack_178;
      }
      bVar26 = iStack_17c < 0;
      iStack_17c = iVar9;
      if (bVar26) {
        iStack_17c = iStack_178;
      }
      sVar5 = FUN_7190a2d4(&iStack_180);
      uVar20 = FUN_71ba1b94((int)sVar5);
      goto LAB_7190aea4;
    case 0x1e:
      iVar24 = 0;
      iStack_17c = iVar9;
      if ((int)uVar25 < 4) {
        return 0;
      }
      while (iVar24 + 3 < (int)uVar25) {
        iVar22 = iVar24 + 4;
        uVar20 = 0;
        if (uVar25 - iVar24 == 5) {
          uVar20 = puVar17[iVar22];
        }
        FUN_7190bd44(param_3,0,puVar17[iVar24],auStack_10c[iVar24 + 6],auStack_10c[iVar24 + 7],
                     puVar17[iVar24 + 3],uVar20);
LAB_7190b474:
        if ((int)uVar25 <= iVar22 + 3) break;
        iVar24 = iVar22 + 4;
        uVar20 = 0;
        if (uVar25 - iVar22 == 5) {
          uVar20 = puVar17[iVar24];
        }
        FUN_7190bd44(param_3,puVar17[iVar22],0,auStack_10c[iVar22 + 6],auStack_10c[iVar22 + 7],
                     uVar20,puVar17[iVar22 + 3]);
      }
LAB_7190b3e4:
      uVar25 = 0;
      break;
    case 0x1f:
      iVar22 = 0;
      iStack_17c = iVar9;
      if (3 < (int)uVar25) goto LAB_7190b474;
      return 0;
    }
LAB_7190a55c:
    if (iStack_178 <= iStack_17c) {
      return 0;
    }
  } while( true );
}


// =========================================================================
// Function: FUN_7190b97c
// Entry: 0x7190b97c | Size: 344 bytes
// =========================================================================

void FUN_7190b97c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  
  FUN_7190c0b8();
  iVar4 = *param_1;
  iVar3 = param_1[5];
  iVar1 = FUN_71ba0b38(param_1[4],param_2);
  param_1[2] = iVar1;
  param_1[4] = iVar1;
  iVar3 = FUN_71ba0b38(iVar3,param_3);
  param_1[5] = iVar3;
  param_1[3] = iVar3;
  iVar1 = FUN_71ba17bc(iVar1);
  iVar3 = FUN_71ba17bc(iVar3);
  if (iVar4 == 0) {
    puVar2 = (undefined2 *)(param_1[10] + param_1[0xb] * 0xe);
    *puVar2 = (short)iVar1;
    puVar2[1] = (short)iVar3;
    *(undefined4 *)(puVar2 + 2) = 0;
    *(undefined1 *)(puVar2 + 6) = 1;
    *(undefined2 *)(param_1[10] + param_1[0xb] * 0xe + 8) = 0;
    *(undefined2 *)(param_1[10] + param_1[0xb] * 0xe + 10) = 0;
  }
  else {
    if (param_1[7] < iVar1) {
      param_1[7] = iVar1;
    }
    else if (param_1[1] == 0) {
      param_1[7] = iVar1;
    }
    if (param_1[9] < iVar3) {
      param_1[9] = iVar3;
    }
    else if (param_1[1] == 0) {
      param_1[9] = iVar3;
    }
    if (iVar1 < param_1[6]) {
      param_1[6] = iVar1;
    }
    else if (param_1[1] == 0) {
      param_1[6] = iVar1;
    }
    if (iVar3 < param_1[8]) {
      param_1[8] = iVar3;
    }
    else if (param_1[1] == 0) {
      param_1[8] = iVar3;
    }
    param_1[1] = 1;
  }
  param_1[0xb] = param_1[0xb] + 1;
  return;
}


// =========================================================================
// Function: FUN_7190bb78
// Entry: 0x7190bb78 | Size: 324 bytes
// =========================================================================

void FUN_7190bb78(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *param_1;
  iVar3 = param_1[5];
  iVar1 = FUN_71ba0b38(param_1[4]);
  param_1[4] = iVar1;
  iVar3 = FUN_71ba0b38(iVar3,param_3);
  param_1[5] = iVar3;
  iVar1 = FUN_71ba17bc(iVar1);
  iVar3 = FUN_71ba17bc(iVar3);
  if (iVar4 == 0) {
    puVar2 = (undefined2 *)(param_1[10] + param_1[0xb] * 0xe);
    *puVar2 = (short)iVar1;
    puVar2[1] = (short)iVar3;
    *(undefined4 *)(puVar2 + 2) = 0;
    *(undefined1 *)(puVar2 + 6) = 2;
    *(undefined2 *)(param_1[10] + param_1[0xb] * 0xe + 8) = 0;
    *(undefined2 *)(param_1[10] + param_1[0xb] * 0xe + 10) = 0;
  }
  else {
    if (param_1[7] < iVar1) {
      param_1[7] = iVar1;
    }
    else if (param_1[1] == 0) {
      param_1[7] = iVar1;
    }
    if (param_1[9] < iVar3) {
      param_1[9] = iVar3;
    }
    else if (param_1[1] == 0) {
      param_1[9] = iVar3;
    }
    if (iVar1 < param_1[6]) {
      param_1[6] = iVar1;
    }
    else if (param_1[1] == 0) {
      param_1[6] = iVar1;
    }
    if (iVar3 < param_1[8]) {
      param_1[8] = iVar3;
    }
    else if (param_1[1] == 0) {
      param_1[8] = iVar3;
    }
    param_1[1] = 1;
  }
  param_1[0xb] = param_1[0xb] + 1;
  return;
}


// =========================================================================
// Function: FUN_7190bd44
// Entry: 0x7190bd44 | Size: 524 bytes
// =========================================================================

void FUN_7190bd44(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined2 *puVar12;
  int iVar13;
  int iVar14;
  
  iVar1 = *param_1;
  iVar14 = param_1[4];
  uVar2 = FUN_71ba0b38(param_1[5],param_3);
  uVar3 = FUN_71ba0b38(uVar2,param_5);
  iVar4 = FUN_71ba0b38(uVar3,param_7);
  param_1[5] = iVar4;
  uVar5 = FUN_71ba0b38(iVar14,param_2);
  uVar6 = FUN_71ba0b38(uVar5,param_4);
  iVar14 = FUN_71ba0b38(uVar6,param_6);
  param_1[4] = iVar14;
  iVar14 = FUN_71ba17bc();
  iVar4 = FUN_71ba17bc(iVar4);
  iVar7 = FUN_71ba17bc(uVar5);
  iVar8 = FUN_71ba17bc(uVar2);
  iVar9 = FUN_71ba17bc(uVar6);
  iVar10 = FUN_71ba17bc(uVar3);
  if (iVar1 == 0) {
    puVar12 = (undefined2 *)(param_1[10] + param_1[0xb] * 0xe);
    *puVar12 = (short)iVar14;
    puVar12[3] = (short)iVar8;
    puVar12[2] = (short)iVar7;
    puVar12[1] = (short)iVar4;
    *(undefined1 *)(puVar12 + 6) = 4;
    *(short *)(param_1[10] + param_1[0xb] * 0xe + 8) = (short)iVar9;
    *(short *)(param_1[10] + param_1[0xb] * 0xe + 10) = (short)iVar10;
  }
  else {
    if ((param_1[7] < iVar14) || (iVar1 = param_1[7], param_1[1] == 0)) {
      param_1[7] = iVar14;
      iVar1 = iVar14;
    }
    if ((param_1[9] < iVar4) || (iVar11 = param_1[9], param_1[1] == 0)) {
      param_1[9] = iVar4;
      iVar11 = iVar4;
    }
    if ((iVar14 < param_1[6]) || (iVar13 = param_1[6], param_1[1] == 0)) {
      param_1[6] = iVar14;
      iVar13 = iVar14;
    }
    if ((iVar4 < param_1[8]) || (iVar14 = param_1[8], param_1[1] == 0)) {
      param_1[8] = iVar4;
      iVar14 = iVar4;
    }
    if (iVar1 < iVar7) {
      param_1[7] = iVar7;
      iVar1 = iVar7;
    }
    param_1[1] = 1;
    if (iVar11 < iVar8) {
      param_1[9] = iVar8;
      iVar11 = iVar8;
    }
    if (iVar7 < iVar13) {
      param_1[6] = iVar7;
      iVar13 = iVar7;
    }
    if (iVar8 < iVar14) {
      param_1[8] = iVar8;
      iVar14 = iVar8;
    }
    if (iVar1 < iVar9) {
      param_1[7] = iVar9;
    }
    if (iVar11 < iVar10) {
      param_1[9] = iVar10;
    }
    if (iVar9 < iVar13) {
      param_1[6] = iVar9;
    }
    if (iVar10 < iVar14) {
      param_1[8] = iVar10;
    }
    param_1[1] = 1;
  }
  param_1[0xb] = param_1[0xb] + 1;
  return;
}


// =========================================================================
// Function: FUN_7190c0b8
// Entry: 0x7190c0b8 | Size: 332 bytes
// =========================================================================

void FUN_7190c0b8(int *param_1)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1[2];
  iVar4 = param_1[3];
  iVar1 = FUN_71ba2cf0(iVar3,param_1[4]);
  if ((iVar1 == 0) || (iVar1 = FUN_71ba2cf0(iVar4,param_1[5]), iVar1 == 0)) {
    iVar1 = FUN_71ba17bc(iVar3);
    iVar3 = FUN_71ba17bc(iVar4);
    if (*param_1 == 0) {
      puVar2 = (undefined2 *)(param_1[10] + param_1[0xb] * 0xe);
      *puVar2 = (short)iVar1;
      puVar2[1] = (short)iVar3;
      *(undefined4 *)(puVar2 + 2) = 0;
      *(undefined1 *)(puVar2 + 6) = 2;
      *(undefined2 *)(param_1[10] + param_1[0xb] * 0xe + 8) = 0;
      *(undefined2 *)(param_1[10] + param_1[0xb] * 0xe + 10) = 0;
    }
    else {
      if (param_1[7] < iVar1) {
        param_1[7] = iVar1;
      }
      else if (param_1[1] == 0) {
        param_1[7] = iVar1;
      }
      if (param_1[9] < iVar3) {
        param_1[9] = iVar3;
      }
      else if (param_1[1] == 0) {
        param_1[9] = iVar3;
      }
      if (iVar1 < param_1[6]) {
        param_1[6] = iVar1;
      }
      else if (param_1[1] == 0) {
        param_1[6] = iVar1;
      }
      if (iVar3 < param_1[8]) {
        param_1[8] = iVar3;
      }
      else if (param_1[1] == 0) {
        param_1[8] = iVar3;
      }
      param_1[1] = 1;
    }
    param_1[0xb] = param_1[0xb] + 1;
  }
  return;
}


// =========================================================================
// Function: FUN_7190c28c
// Entry: 0x7190c28c | Size: 2944 bytes
// =========================================================================

int FUN_7190c28c(int param_1,int param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  bool bVar7;
  bool bVar8;
  ushort uVar9;
  undefined1 uVar10;
  short sVar11;
  int iVar12;
  uint uVar13;
  short *psVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  ushort uVar22;
  undefined2 uVar23;
  ushort *puVar24;
  ushort *puVar25;
  int iVar26;
  uint *puVar27;
  uint uVar28;
  byte *pbVar29;
  undefined4 uVar30;
  int iVar31;
  uint uVar32;
  ushort *puVar33;
  undefined4 uVar34;
  byte bVar35;
  undefined4 uVar36;
  byte bVar37;
  short sVar38;
  int iVar39;
  int iVar40;
  undefined2 *puVar41;
  uint uVar42;
  undefined4 uVar43;
  int iVar44;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a0;
  uint uStack_98;
  uint uStack_8c;
  undefined1 auStack_88 [40];
  int iStack_60;
  int iStack_5c;
  int iStack_54;
  undefined1 auStack_50 [40];
  int iStack_28;
  
  if (*(int *)(param_1 + 0x3c) != 0) {
    imp___aeabi_memclr4(auStack_50,0x2c);
    iStack_54 = 1;
    imp___aeabi_memclr8(auStack_88,0x30);
    iVar12 = FUN_7190a464(param_1,param_2,&iStack_54);
    if (iVar12 != 0) {
      iStack_60 = FUN_718c8a70(iStack_28 * 0xe);
      *param_3 = iStack_60;
      iVar12 = FUN_7190a464(param_1,param_2,auStack_88);
      if (iVar12 != 0) {
        return iStack_5c;
      }
    }
LAB_7190c36c:
    *param_3 = 0;
    return 0;
  }
  if ((*(int *)(param_1 + 0xc) <= param_2) || (1 < *(int *)(param_1 + 0x30))) goto LAB_7190c36c;
  iVar12 = *(int *)(param_1 + 4);
  iVar26 = iVar12 + *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x30) == 0) {
    pbVar29 = (byte *)(iVar26 + param_2 * 2);
    uVar13 = (uint)pbVar29[1] << 1 | (uint)*pbVar29 << 9;
    if (uVar13 == ((uint)pbVar29[3] << 1 | (uint)pbVar29[2] << 9)) goto LAB_7190c36c;
  }
  else {
    puVar27 = (uint *)(iVar26 + param_2 * 4);
    uVar13 = *puVar27;
    uVar28 = puVar27[1];
    uVar13 = uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
             uVar13 >> 0x18;
    if (uVar13 == (uVar28 << 0x18 | (uVar28 >> 8 & 0xff) << 0x10 | (uVar28 >> 0x10 & 0xff) << 8 |
                  uVar28 >> 0x18)) goto LAB_7190c36c;
  }
  iVar26 = uVar13 + *(int *)(param_1 + 0x18);
  *param_3 = 0;
  if (iVar26 < 0) {
    return 0;
  }
  puVar24 = (ushort *)(iVar12 + iVar26);
  uVar22 = *puVar24;
  uVar13 = (uVar22 & 0xff) << 8 | (uint)(uVar22 >> 8);
  if ((short)(uVar22 << 8 | uVar22 >> 8) < 1) {
    iVar12 = 0;
    iVar26 = 0;
    if (uVar13 == 0xffff) {
      puVar24 = puVar24 + 5;
      iVar31 = 0;
      iVar39 = 0;
      do {
        while( true ) {
          iStack_54 = 0;
          puVar33 = puVar24 + 2;
          bVar37 = *(byte *)((int)puVar24 + 1);
          uVar22 = puVar24[1];
          if ((bVar37 & 2) == 0) {
            uVar30 = 0;
            uStack_a0 = 0;
          }
          else if ((bVar37 & 1) == 0) {
            uStack_a0 = FUN_71ba1b94((int)(char)*puVar33);
            uVar30 = FUN_71ba1b94((int)*(char *)((int)puVar24 + 5));
            puVar33 = puVar24 + 3;
          }
          else {
            uStack_a0 = FUN_71ba1b94((int)CONCAT11((char)*puVar33,*(char *)((int)puVar24 + 5)));
            uVar30 = FUN_71ba1b94((int)(short)(puVar24[3] << 8 | puVar24[3] >> 8));
            puVar33 = puVar24 + 4;
          }
          uVar22 = uVar22 << 8 | uVar22 >> 8;
          if ((bVar37 & 8) == 0) {
            if ((bVar37 & 0x40) == 0) {
              if ((char)bVar37 < '\0') {
                uVar15 = FUN_71ba1b94((int)(short)(*puVar33 << 8 | *puVar33 >> 8),uVar22);
                uVar36 = FUN_71ba21e8(uVar15,0x38800000);
                uVar15 = FUN_71ba1b94((int)(short)(puVar33[1] << 8 | puVar33[1] >> 8));
                uVar34 = FUN_71ba21e8(uVar15,0x38800000);
                uVar15 = FUN_71ba1b94((int)(short)(puVar33[2] << 8 | puVar33[2] >> 8));
                uVar43 = FUN_71ba21e8(uVar15,0x38800000);
                uVar15 = FUN_71ba1b94((int)(short)(puVar33[3] << 8 | puVar33[3] >> 8));
                uVar15 = FUN_71ba21e8(uVar15,0x38800000);
                puVar24 = puVar33 + 4;
              }
              else {
                uVar43 = 0;
                uVar34 = 0;
                uVar36 = 0x3f800000;
                uVar15 = 0x3f800000;
                puVar24 = puVar33;
              }
            }
            else {
              uVar15 = FUN_71ba1b94((int)(short)(*puVar33 << 8 | *puVar33 >> 8),uVar22);
              uVar36 = FUN_71ba21e8(uVar15,0x38800000);
              uVar15 = FUN_71ba1b94((int)(short)(puVar33[1] << 8 | puVar33[1] >> 8));
              uVar15 = FUN_71ba21e8(uVar15,0x38800000);
              puVar24 = puVar33 + 2;
              uVar43 = 0;
              uVar34 = 0;
            }
          }
          else {
            puVar24 = puVar33 + 1;
            uVar15 = FUN_71ba1b94((int)(short)(*puVar33 << 8 | *puVar33 >> 8),uVar22);
            uVar36 = FUN_71ba21e8(uVar15,0x38800000);
            uVar43 = 0;
            uVar34 = 0;
            uVar15 = uVar36;
          }
          iVar44 = FUN_7190c28c(param_1,uVar22,&iStack_54);
          uVar16 = FUN_71ba21e8(uVar34,uVar34);
          uVar17 = FUN_71ba21e8(uVar36,uVar36);
          FUN_71ba0b38(uVar17,uVar16);
          uVar16 = imp_sqrtf();
          uVar17 = FUN_71ba21e8(uVar15,uVar15);
          uVar18 = FUN_71ba21e8(uVar43,uVar43);
          FUN_71ba0b38(uVar18,uVar17);
          uVar17 = imp_sqrtf();
          iVar40 = iStack_54;
          if (iVar44 < 1) break;
          psVar14 = (short *)(iStack_54 + 4);
          iVar12 = iVar44;
          do {
            uVar18 = FUN_71ba1b94((int)psVar14[-2]);
            uVar19 = FUN_71ba1b94((int)psVar14[-1]);
            uVar20 = FUN_71ba21e8(uVar15,uVar19);
            uVar21 = FUN_71ba21e8(uVar34,uVar18);
            uVar20 = FUN_71ba0b38(uVar21,uVar20);
            uVar20 = FUN_71ba0b38(uVar30,uVar20);
            FUN_71ba21e8(uVar17,uVar20);
            sVar11 = FUN_71ba17bc();
            psVar14[-1] = sVar11;
            uVar19 = FUN_71ba21e8(uVar43,uVar19);
            uVar18 = FUN_71ba21e8(uVar36,uVar18);
            uVar18 = FUN_71ba0b38(uVar18,uVar19);
            uVar18 = FUN_71ba0b38(uStack_a0,uVar18);
            FUN_71ba21e8(uVar16,uVar18);
            sVar11 = FUN_71ba17bc();
            psVar14[-2] = sVar11;
            uVar18 = FUN_71ba1b94((int)*psVar14);
            uVar19 = FUN_71ba1b94((int)psVar14[1]);
            uVar20 = FUN_71ba21e8(uVar43,uVar19);
            uVar21 = FUN_71ba21e8(uVar36,uVar18);
            uVar20 = FUN_71ba0b38(uVar21,uVar20);
            uVar20 = FUN_71ba0b38(uStack_a0,uVar20);
            FUN_71ba21e8(uVar16,uVar20);
            sVar11 = FUN_71ba17bc();
            *psVar14 = sVar11;
            uVar19 = FUN_71ba21e8(uVar15,uVar19);
            uVar18 = FUN_71ba21e8(uVar34,uVar18);
            uVar18 = FUN_71ba0b38(uVar18,uVar19);
            uVar18 = FUN_71ba0b38(uVar30,uVar18);
            FUN_71ba21e8(uVar17,uVar18);
            sVar11 = FUN_71ba17bc();
            psVar14[1] = sVar11;
            psVar14 = psVar14 + 7;
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
          iVar12 = iVar44 + iVar31;
          iVar26 = FUN_718c8a70(iVar12 * 0xe);
          if (iVar26 == 0) {
            if (iVar39 != 0) {
              FUN_718c8b14();
            }
            FUN_718c8b14(iVar40);
            return 0;
          }
          if (0 < iVar31) {
            imp___aeabi_memcpy(iVar26,iVar39,iVar31 * 0xe);
          }
          imp___aeabi_memcpy(iVar26 + iVar31 * 0xe,iVar40,iVar44 * 0xe);
          if (iVar39 != 0) {
            FUN_718c8b14(iVar39);
          }
          FUN_718c8b14(iVar40);
          iVar31 = iVar12;
          iVar39 = iVar26;
          if ((bVar37 & 0x20) == 0) goto LAB_7190cdbc;
        }
        iVar12 = iVar31;
        iVar26 = iVar39;
      } while ((bVar37 & 0x20) != 0);
    }
    goto LAB_7190cdbc;
  }
  puVar33 = puVar24 + uVar13 + 5;
  uVar22 = *puVar33;
  uVar9 = puVar33[-1];
  bVar37 = *(byte *)((int)puVar33 + -1);
  uVar10 = *(undefined1 *)((int)puVar33 + 1);
  uVar28 = (uint)CONCAT11((byte)uVar9,bVar37);
  iVar26 = FUN_718c8a70((uVar28 + uVar13 * 2) * 0xe + 0xe);
  if (iVar26 == 0) {
    return 0;
  }
  iVar12 = (uint)(byte)uVar9 * 0x100 + (uint)bVar37;
  iVar31 = uVar13 * 0x1c + 0xc;
  iVar39 = iVar12 + 1;
  bVar37 = 0;
  bVar35 = 0;
  puVar33 = (ushort *)((int)puVar33 + CONCAT11((char)uVar22,uVar10) + 2);
  do {
    if (bVar35 == 0) {
      bVar35 = 0;
      puVar25 = (ushort *)((int)puVar33 + 1);
      bVar37 = (byte)*puVar33;
      if ((bVar37 & 8) != 0) {
        bVar35 = *(byte *)((int)puVar33 + 1);
        puVar25 = puVar33 + 1;
      }
    }
    else {
      bVar35 = bVar35 - 1;
      puVar25 = puVar33;
    }
    *(byte *)(iVar26 + iVar31) = bVar37;
    iVar31 = iVar31 + 0xe;
    iVar39 = iVar39 + -1;
    puVar33 = puVar25;
  } while (iVar39 != 0);
  iVar31 = iVar26 + uVar13 * 0x1c;
  iVar39 = iVar12 + 1;
  iVar40 = 0;
  pbVar29 = (byte *)(iVar31 + 0xc);
  do {
    bVar37 = *pbVar29;
    if ((bVar37 & 2) == 0) {
      puVar33 = puVar25;
      if ((bVar37 & 0x10) == 0) {
        puVar33 = puVar25 + 1;
        iVar40 = iVar40 + (((uint)*puVar25 << 0x18 | (uint)(*puVar25 >> 8) << 0x10) >> 0x10);
      }
    }
    else {
      uVar13 = (uint)(byte)*puVar25;
      if ((bVar37 & 0x10) == 0) {
        uVar13 = -uVar13;
      }
      iVar40 = uVar13 + iVar40;
      puVar33 = (ushort *)((int)puVar25 + 1);
    }
    iVar39 = iVar39 + -1;
    *(short *)(pbVar29 + -0xc) = (short)iVar40;
    pbVar29 = pbVar29 + 0xe;
    puVar25 = puVar33;
  } while (iVar39 != 0);
  iVar12 = iVar12 + 1;
  iVar39 = 0;
  pbVar29 = (byte *)(iVar31 + 0xc);
  do {
    bVar37 = *pbVar29;
    if ((bVar37 & 4) == 0) {
      puVar25 = puVar33;
      if ((bVar37 & 0x20) == 0) {
        puVar25 = puVar33 + 1;
        iVar39 = iVar39 + (((uint)*puVar33 << 0x18 | (uint)(*puVar33 >> 8) << 0x10) >> 0x10);
      }
    }
    else {
      uVar13 = (uint)(byte)*puVar33;
      if ((bVar37 & 0x20) == 0) {
        uVar13 = -uVar13;
      }
      iVar39 = uVar13 + iVar39;
      puVar25 = (ushort *)((int)puVar33 + 1);
    }
    iVar12 = iVar12 + -1;
    *(short *)(pbVar29 + -10) = (short)iVar39;
    pbVar29 = pbVar29 + 0xe;
    puVar33 = puVar25;
  } while (iVar12 != 0);
  iVar44 = 0;
  iVar39 = 0;
  iVar40 = 0;
  uVar13 = 0;
  bVar8 = false;
  uStack_a8 = 0;
  uStack_ac = 0;
  uStack_98 = 0;
  uStack_8c = 0;
  uStack_a0 = 0;
  bVar37 = 0;
  iVar12 = 0;
  do {
    psVar14 = (short *)(iVar31 + iVar12 * 0xe);
    sVar11 = *psVar14;
    uVar42 = (uint)sVar11;
    bVar35 = *(byte *)(psVar14 + 6);
    sVar3 = psVar14[1];
    uVar32 = (uint)sVar3;
    sVar4 = (short)uStack_a0;
    sVar38 = (short)uStack_8c;
    if (iVar40 == iVar12) {
      iVar40 = iVar44;
      if (iVar12 != 0) {
        uVar6 = (undefined2)uVar13;
        uVar5 = (undefined2)uStack_98;
        if (bVar37 == 0) {
          puVar41 = (undefined2 *)(iVar26 + iVar44 * 0xe);
          if (bVar8) {
            puVar41[2] = sVar4;
            *puVar41 = uVar5;
            *(undefined1 *)(puVar41 + 6) = 3;
            puVar41[1] = uVar6;
          }
          else {
            puVar41[1] = uVar6;
            sVar38 = 0;
            puVar41[2] = 0;
            *puVar41 = uVar5;
            *(undefined1 *)(puVar41 + 6) = 2;
          }
        }
        else {
          if (bVar8) {
            iVar40 = iVar44 * 0xe;
            iVar44 = iVar44 + 1;
            puVar41 = (undefined2 *)(iVar26 + iVar40);
            *puVar41 = (short)(uStack_ac + uStack_a0 >> 1);
            puVar41[2] = sVar4;
            puVar41[3] = sVar38;
            puVar41[1] = (short)(uStack_a8 + uStack_8c >> 1);
            *(undefined1 *)(puVar41 + 6) = 3;
          }
          sVar38 = (short)uStack_a8;
          puVar41 = (undefined2 *)(iVar26 + iVar44 * 0xe);
          *puVar41 = uVar5;
          puVar41[1] = uVar6;
          puVar41[2] = (short)uStack_ac;
          *(undefined1 *)(puVar41 + 6) = 3;
        }
        iVar40 = iVar44 + 1;
        *(short *)(iVar26 + iVar44 * 0xe + 6) = sVar38;
      }
      uStack_98 = uVar42;
      uVar13 = uVar32;
      if ((bVar35 & 1) == 0) {
        uStack_ac = uVar42;
        uStack_a8 = uVar32;
        if ((*(byte *)(psVar14 + 0xd) & 1) == 0) {
          uStack_98 = (int)((int)psVar14[7] + uVar42) >> 1;
          uVar13 = (int)((int)psVar14[8] + uVar32) >> 1;
        }
        else {
          iVar12 = iVar12 + 1;
          uStack_98 = (uint)(ushort)psVar14[7];
          uVar13 = (uint)(ushort)psVar14[8];
        }
      }
      bVar37 = bVar35 & 1 ^ 1;
      bVar8 = false;
      iVar44 = iVar40 + 1;
      puVar41 = (undefined2 *)(iVar26 + iVar40 * 0xe);
      *puVar41 = (short)uStack_98;
      bVar7 = true;
      *(undefined4 *)(puVar41 + 2) = 0;
      puVar41[1] = (short)uVar13;
      *(undefined1 *)(puVar41 + 6) = 1;
      iVar40 = iVar39 + 5;
      iVar39 = iVar39 + 1;
      iVar40 = (((uint)puVar24[iVar40] << 0x18 | (uint)(puVar24[iVar40] >> 8) << 0x10) >> 0x10) + 1;
    }
    else if ((bVar35 & 1) == 0) {
      bVar7 = false;
      if (bVar8) {
        iVar2 = iVar44 * 0xe;
        iVar44 = iVar44 + 1;
        puVar41 = (undefined2 *)(iVar26 + iVar2);
        *puVar41 = (short)(uStack_a0 + uVar42 >> 1);
        puVar41[2] = sVar4;
        puVar41[3] = sVar38;
        *(undefined1 *)(puVar41 + 6) = 3;
        puVar41[1] = (short)(uStack_8c + uVar32 >> 1);
      }
      bVar8 = true;
      uStack_a0 = uVar42;
      uStack_8c = uVar32;
    }
    else {
      psVar14 = (short *)(iVar26 + iVar44 * 0xe);
      if (bVar8) {
        psVar14[2] = sVar4;
        psVar14[1] = sVar3;
        *psVar14 = sVar11;
        *(undefined1 *)(psVar14 + 6) = 3;
      }
      else {
        sVar38 = 0;
        psVar14[2] = 0;
        psVar14[1] = sVar3;
        *psVar14 = sVar11;
        *(undefined1 *)(psVar14 + 6) = 2;
      }
      iVar44 = iVar44 + 1;
      psVar14[3] = sVar38;
      bVar8 = false;
      bVar7 = true;
    }
    bVar1 = iVar12 < (int)uVar28;
    iVar12 = iVar12 + 1;
  } while (bVar1);
  uVar6 = (undefined2)uVar13;
  uVar5 = (undefined2)uStack_98;
  uVar23 = (undefined2)uStack_8c;
  if (bVar37 == 0) {
    puVar41 = (undefined2 *)(iVar26 + iVar44 * 0xe);
    if (bVar7) {
      uVar23 = 0;
      uVar10 = 2;
      puVar41[2] = 0;
      puVar41[1] = uVar6;
      *puVar41 = uVar5;
      goto LAB_7190cda8;
    }
    puVar41[2] = (short)uStack_a0;
    puVar41[1] = uVar6;
    *puVar41 = uVar5;
    *(undefined1 *)(puVar41 + 6) = 3;
  }
  else {
    if (!bVar7) {
      iVar12 = iVar44 * 0xe;
      iVar44 = iVar44 + 1;
      puVar41 = (undefined2 *)(iVar26 + iVar12);
      *puVar41 = (short)(uStack_ac + uStack_a0 >> 1);
      puVar41[2] = (short)uStack_a0;
      puVar41[3] = uVar23;
      puVar41[1] = (short)(uStack_a8 + uStack_8c >> 1);
      *(undefined1 *)(puVar41 + 6) = 3;
    }
    uVar23 = (undefined2)uStack_a8;
    puVar41 = (undefined2 *)(iVar26 + iVar44 * 0xe);
    *puVar41 = uVar5;
    uVar10 = 3;
    puVar41[2] = (short)uStack_ac;
    puVar41[1] = uVar6;
LAB_7190cda8:
    *(undefined1 *)(puVar41 + 6) = uVar10;
  }
  *(undefined2 *)(iVar26 + iVar44 * 0xe + 6) = uVar23;
  iVar12 = iVar44 + 1;
LAB_7190cdbc:
  *param_3 = iVar26;
  return iVar12;
}


