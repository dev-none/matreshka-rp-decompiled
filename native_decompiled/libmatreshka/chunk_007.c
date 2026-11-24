// =========================================================================
// Function: FUN_71556bcc
// Entry: 0x71556bcc | Size: 416 bytes
// =========================================================================

int FUN_71556bcc(int param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint extraout_r1;
  uint extraout_r1_00;
  int *unaff_r7;
  uint uVar7;
  int iStack_38;
  undefined1 uStack_31;
  int *piStack_30;
  int aiStack_2c [2];
  
  uVar1 = DAT_711a3904;
  iStack_38 = param_1;
  if (DAT_711a3904 != 0) {
    uVar6 = (param_1 * 0x5bd1e995 ^ (uint)(param_1 * 0x5bd1e995) >> 0x18) * 0x5bd1e995 ^ 0x6f47a654;
    uVar2 = (uVar6 ^ uVar6 >> 0xd) * 0x5bd1e995;
    uVar2 = uVar2 ^ uVar2 >> 0xf;
    uVar6 = DAT_711a3904 - (DAT_711a3904 >> 1 & 0x55555555);
    uVar6 = (uVar6 & 0x33333333) + (uVar6 >> 2 & 0x33333333);
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
    if (uVar6 < 2) {
      uVar7 = DAT_711a3904 - 1 & uVar2;
    }
    else {
      uVar7 = uVar2;
      if (DAT_711a3904 <= uVar2) {
        FUN_71ba33fc(uVar2,DAT_711a3904);
        uVar7 = extraout_r1;
      }
    }
    piVar3 = *(int **)(DAT_711a3900 + uVar7 * 4);
    if (piVar3 != (int *)0x0) {
      unaff_r7 = (int *)*piVar3;
    }
    if (piVar3 != (int *)0x0 && unaff_r7 != (int *)0x0) {
      do {
        uVar5 = unaff_r7[1];
        if (uVar5 == uVar2) {
          if (unaff_r7[2] == param_1) {
            return unaff_r7[3];
          }
        }
        else {
          if (uVar6 < 2) {
            uVar5 = uVar5 & uVar1 - 1;
          }
          else if (uVar1 <= uVar5) {
            FUN_71ba33fc(uVar5,uVar1);
            uVar5 = extraout_r1_00;
          }
          if (uVar5 != uVar7) break;
        }
        unaff_r7 = (int *)*unaff_r7;
      } while (unaff_r7 != (int *)0x0);
    }
  }
  iVar4 = thunk_MwhHq(0x1248);
  FUN_715575c0(iVar4,param_1);
  piStack_30 = &iStack_38;
  FUN_7155dea8(aiStack_2c,&DAT_711a3900,piStack_30,&DAT_70081f71,&piStack_30,&uStack_31);
  *(int *)(aiStack_2c[0] + 0xc) = iVar4;
  return iVar4;
}


// =========================================================================
// Function: FUN_71556e90
// Entry: 0x71556e90 | Size: 344 bytes
// =========================================================================

int FUN_71556e90(int param_1)

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
  
  uVar1 = DAT_711a3904;
  if (DAT_711a3904 != 0) {
    uVar5 = (param_1 * 0x5bd1e995 ^ (uint)(param_1 * 0x5bd1e995) >> 0x18) * 0x5bd1e995 ^ 0x6f47a654;
    uVar2 = (uVar5 ^ uVar5 >> 0xd) * 0x5bd1e995;
    uVar2 = uVar2 ^ uVar2 >> 0xf;
    uVar5 = DAT_711a3904 - (DAT_711a3904 >> 1 & 0x55555555);
    uVar5 = (uVar5 & 0x33333333) + (uVar5 >> 2 & 0x33333333);
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
    if (uVar5 < 2) {
      uVar6 = DAT_711a3904 - 1 & uVar2;
    }
    else {
      uVar6 = uVar2;
      if (DAT_711a3904 <= uVar2) {
        FUN_71ba33fc(uVar2,DAT_711a3904);
        uVar6 = extraout_r1;
      }
    }
    piVar3 = *(int **)(DAT_711a3900 + uVar6 * 4);
    if (piVar3 != (int *)0x0) {
      unaff_r5 = (int *)*piVar3;
    }
    if (piVar3 != (int *)0x0 && unaff_r5 != (int *)0x0) {
      do {
        uVar4 = unaff_r5[1];
        if (uVar4 == uVar2) {
          if (unaff_r5[2] == param_1) {
            return unaff_r5[3];
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
// Function: FUN_71557078
// Entry: 0x71557078 | Size: 768 bytes
// =========================================================================

void FUN_71557078(int param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint extraout_r1;
  uint extraout_r1_00;
  int *unaff_r4;
  uint uVar8;
  int aiStack_30 [3];
  
  uVar2 = DAT_711a3904;
  if (DAT_711a3904 != 0) {
    uVar7 = (param_1 * 0x5bd1e995 ^ (uint)(param_1 * 0x5bd1e995) >> 0x18) * 0x5bd1e995 ^ 0x6f47a654;
    uVar3 = (uVar7 ^ uVar7 >> 0xd) * 0x5bd1e995;
    uVar3 = uVar3 ^ uVar3 >> 0xf;
    uVar7 = DAT_711a3904 - (DAT_711a3904 >> 1 & 0x55555555);
    uVar7 = (uVar7 & 0x33333333) + (uVar7 >> 2 & 0x33333333);
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
    if (uVar7 < 2) {
      uVar8 = DAT_711a3904 - 1 & uVar3;
    }
    else {
      uVar8 = uVar3;
      if (DAT_711a3904 <= uVar3) {
        FUN_71ba33fc(uVar3,DAT_711a3904);
        uVar8 = extraout_r1;
      }
    }
    piVar4 = *(int **)(DAT_711a3900 + uVar8 * 4);
    if (piVar4 != (int *)0x0) {
      unaff_r4 = (int *)*piVar4;
    }
    if (piVar4 != (int *)0x0 && unaff_r4 != (int *)0x0) {
      do {
        uVar5 = unaff_r4[1];
        if (uVar5 == uVar3) {
          if (unaff_r4[2] == param_1) {
            if (DAT_711a3938 == 0) {
              bVar1 = false;
            }
            else {
              piVar4 = (int *)(DAT_711a3938 + 0x1389c);
              iVar6 = *piVar4;
              if (iVar6 == 0) {
                iVar6 = FUN_713c301c(0);
                if (iVar6 == 0) {
                  iVar6 = *piVar4;
                }
                else {
                  thunk_MwhHq(0x3a0);
                  iVar6 = FUN_715ba834();
                  *piVar4 = iVar6;
                }
              }
              bVar1 = iVar6 == param_1;
            }
            iVar6 = unaff_r4[3];
            if (iVar6 != 0) {
              FUN_71557a58(iVar6);
              FUN_71557d58(iVar6);
              imp___aeabi_memclr8(&DAT_700c3a38,0x60);
              DAT_700c3a98 = 0x3f800000;
              DAT_700c3a9c = 0;
              DAT_700c3aa0 = 0;
              DAT_700c3aa4 = 0;
              DAT_700c3aa8 = 0;
              DAT_700c3aac = 0x3f800000;
              DAT_700c3ab0 = 0;
              DAT_700c3ab4 = 0;
              DAT_700c3ab8 = 0;
              DAT_700c3abc = 0;
              DAT_700c3ac0 = 0x3f800000;
              DAT_700c3ac4 = 0;
              DAT_700c3ac8 = 0;
              DAT_700c3acc = 0;
              DAT_700c3ad0 = 0;
              DAT_700c3ad4 = 0x3f800000;
              DAT_700c3ad8 = 0;
              DAT_700c3adc = 0;
              DAT_700c3ae0 = 0;
              DAT_700c3ae4 = 0;
              DAT_700c3ae8 = 0x3f800000;
              DAT_700c3aec = 0;
              DAT_700c3af0 = 0;
              DAT_700c3af4 = 0;
              DAT_700c3af8 = 0;
              DAT_700c3afc = 0x3f800000;
              DAT_700c3b00 = 0;
              DAT_700c3b04 = 0;
              DAT_700c3b08 = 0;
              DAT_700c3b0c = 0;
              DAT_700c3b10 = 0x3f800000;
              DAT_700c3b14 = 0;
              DAT_700c3b18 = 0;
              DAT_700c3b1c = 0;
              DAT_700c3b20 = 0;
              DAT_700c3b24 = 0x3f800000;
              DAT_700c3b28 = 0;
              DAT_700c3b2c = 0;
              DAT_700c3b30 = 0;
              DAT_700c3b34 = 0;
              DAT_700c3b58 = 0;
              DAT_700c3b38 = 0x3f800000;
              DAT_700c3b3c = 0;
              DAT_700c3b40 = 0;
              DAT_700c3b44 = 0;
              DAT_700c3b48 = 0;
              DAT_700c3b4c = 0x3f800000;
              DAT_700c3b50 = 0;
              DAT_700c3b54 = 0;
              DAT_711a3930 = DAT_711a392c;
              thunk_qNQrlu(iVar6);
            }
            FUN_7155e764(aiStack_30,&DAT_711a3900,unaff_r4);
            iVar6 = aiStack_30[0];
            aiStack_30[0] = 0;
            if (iVar6 != 0) {
              thunk_qNQrlu();
            }
            if (!bVar1) {
              return;
            }
            FUN_714ebe70();
            return;
          }
        }
        else {
          if (uVar7 < 2) {
            uVar5 = uVar5 & uVar2 - 1;
          }
          else if (uVar2 <= uVar5) {
            FUN_71ba33fc(uVar5,uVar2);
            uVar5 = extraout_r1_00;
          }
          if (uVar5 != uVar8) {
            return;
          }
        }
        unaff_r4 = (int *)*unaff_r4;
      } while (unaff_r4 != (int *)0x0);
    }
  }
  return;
}


// =========================================================================
// Function: FUN_715575c0
// Entry: 0x715575c0 | Size: 1012 bytes
// =========================================================================

undefined4 * FUN_715575c0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  param_1[0x4e] = 0xffffffff;
  *(undefined1 *)((int)param_1 + 0x16) = 1;
  *(undefined1 *)(param_1 + 10) = 1;
  *(undefined1 *)((int)param_1 + 0x3a) = 1;
  *(undefined1 *)(param_1 + 0x13) = 1;
  *(undefined1 *)((int)param_1 + 0x5e) = 1;
  *(undefined1 *)(param_1 + 0x1c) = 1;
  *(undefined1 *)((int)param_1 + 0x82) = 1;
  *(undefined1 *)(param_1 + 0x25) = 1;
  *(undefined1 *)((int)param_1 + 0xa6) = 1;
  *(undefined1 *)(param_1 + 0x2e) = 1;
  *(undefined1 *)((int)param_1 + 0xca) = 1;
  *(undefined1 *)(param_1 + 0x37) = 1;
  *(undefined1 *)((int)param_1 + 0xee) = 1;
  *(undefined1 *)(param_1 + 0x40) = 1;
  *(undefined1 *)((int)param_1 + 0x112) = 1;
  *(undefined1 *)(param_1 + 0x49) = 1;
  *(undefined1 *)((int)param_1 + 0x136) = 1;
  *(undefined2 *)(param_1 + 5) = 0xffff;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined2 *)((int)param_1 + 10) = 0;
  *(undefined4 *)((int)param_1 + 6) = 0xffffffff;
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = param_2;
  param_1[6] = 0xffffffff;
  param_1[7] = 0xffffffff;
  param_1[8] = 0xffffffff;
  param_1[9] = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x2a) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x2e) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x32) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x36) = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x4e) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x52) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x56) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x5a) = 0xffffffff;
  param_1[0x18] = 0xffffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x72) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x76) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x7a) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x7e) = 0xffffffff;
  param_1[0x21] = 0xffffffff;
  param_1[0x22] = 0xffffffff;
  param_1[0x23] = 0xffffffff;
  param_1[0x24] = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x96) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x9a) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x9e) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0xa2) = 0xffffffff;
  param_1[0x2a] = 0xffffffff;
  param_1[0x2b] = 0xffffffff;
  param_1[0x2c] = 0xffffffff;
  param_1[0x2d] = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0xba) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0xbe) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0xc2) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0xc6) = 0xffffffff;
  param_1[0x33] = 0xffffffff;
  param_1[0x34] = 0xffffffff;
  param_1[0x35] = 0xffffffff;
  param_1[0x36] = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0xea) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0xe6) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0xe2) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0xde) = 0xffffffff;
  param_1[0x3c] = 0xffffffff;
  param_1[0x3d] = 0xffffffff;
  param_1[0x3e] = 0xffffffff;
  param_1[0x3f] = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x10e) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x10a) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x106) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x102) = 0xffffffff;
  param_1[0x45] = 0xffffffff;
  param_1[0x46] = 0xffffffff;
  param_1[0x47] = 0xffffffff;
  param_1[0x48] = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x132) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x12e) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x12a) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x126) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x51) = 0xffff;
  param_1[0x4f] = 0xffffffff;
  param_1[0x50] = 0xffffffff;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0x3f800000;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  *(undefined1 *)((int)param_1 + 0x1fe) = 0;
  *(undefined2 *)(param_1 + 0x7f) = 0xffff;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0x3f800000;
  *(undefined1 *)((int)param_1 + 0x1ea) = 0;
  *(undefined2 *)(param_1 + 0x7a) = 0xffff;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0x3f800000;
  *(undefined1 *)((int)param_1 + 0x1d6) = 0;
  *(undefined2 *)(param_1 + 0x75) = 0xffff;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0x3f800000;
  *(undefined1 *)((int)param_1 + 0x1c2) = 0;
  *(undefined2 *)(param_1 + 0x70) = 0xffff;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0x3f800000;
  *(undefined1 *)((int)param_1 + 0x1ae) = 0;
  *(undefined2 *)(param_1 + 0x6b) = 0xffff;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0x3f800000;
  *(undefined1 *)((int)param_1 + 0x19a) = 0;
  *(undefined2 *)(param_1 + 0x66) = 0xffff;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0x3f800000;
  *(undefined1 *)((int)param_1 + 0x186) = 0;
  *(undefined2 *)(param_1 + 0x61) = 0xffff;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0x3f800000;
  *(undefined1 *)((int)param_1 + 0x172) = 0;
  *(undefined2 *)(param_1 + 0x5c) = 0xffff;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0x3f800000;
  *(undefined1 *)((int)param_1 + 0x15e) = 0;
  *(undefined2 *)(param_1 + 0x57) = 0xffff;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0x3f800000;
  *(undefined1 *)((int)param_1 + 0x14a) = 0;
  *(undefined2 *)(param_1 + 0x52) = 0xffff;
  FUN_714f2578(param_1 + 0x86);
  *(undefined1 *)(param_1 + 0x1fa) = 0;
  param_1[0x1f9] = 0xffffffff;
  imp___aeabi_memclr4(param_1 + 0x1fb,0xb8);
  iVar1 = 0;
  do {
    *(undefined4 *)((int)param_1 + iVar1 + 0x8c4) = 0x3f800000;
    *(undefined4 *)((int)param_1 + iVar1 + 0x8a4) = 0xffffffff;
    *(undefined4 *)((int)param_1 + iVar1 + 0x8a8) = 0;
    *(undefined4 *)((int)param_1 + iVar1 + 0x8ac) = 0;
    *(undefined4 *)((int)param_1 + iVar1 + 0x8b0) = 0;
    *(undefined4 *)((int)param_1 + iVar1 + 0x8b4) = 0;
    *(undefined4 *)((int)param_1 + iVar1 + 0x8b8) = 0;
    *(undefined4 *)((int)param_1 + iVar1 + 0x8bc) = 0;
    *(undefined4 *)((int)param_1 + iVar1 + 0x8c0) = 0x3f800000;
    iVar2 = iVar1 + 0x28;
    *(undefined4 *)((int)param_1 + iVar1 + 0x8c8) = 0x3f800000;
    iVar1 = iVar2;
  } while (iVar2 != 0x2d0);
  imp___aeabi_memclr4(param_1 + 0x2dd,0x48);
  iVar1 = 0;
  do {
    *(undefined4 *)((int)param_1 + iVar1 + 0xbfc) = 0x3f800000;
    *(undefined2 *)((int)param_1 + iVar1 + 0xbbe) = 0xffff;
    *(undefined2 *)((int)param_1 + iVar1 + 0xbd6) = 0xffff;
    iVar2 = iVar1 + 0x48;
    *(undefined1 *)((int)param_1 + iVar1 + 0xbbc) = 0x11;
    *(undefined4 *)((int)param_1 + iVar1 + 0xbc9) = 0xffffffff;
    *(undefined1 *)((int)param_1 + iVar1 + 0xbc8) = 0;
    *(undefined4 *)((int)param_1 + iVar1 + 0xbc4) = 0xffffffff;
    *(undefined1 *)((int)param_1 + iVar1 + 0xbc0) = 0;
    *(undefined4 *)((int)param_1 + iVar1 + 0xbcd) = 0xffffffff;
    *(undefined4 *)((int)param_1 + iVar1 + 0xbd1) = 0xffffffff;
    *(undefined4 *)((int)param_1 + iVar1 + 0xbd8) = 0;
    *(undefined4 *)((int)param_1 + iVar1 + 0xbdc) = 0xffffffff;
    *(undefined4 *)((int)param_1 + iVar1 + 0xbe0) = 0;
    *(undefined4 *)((int)param_1 + iVar1 + 0xbe4) = 0;
    *(undefined4 *)((int)param_1 + iVar1 + 0xbe8) = 0;
    *(undefined4 *)((int)param_1 + iVar1 + 0xbec) = 0;
    *(undefined4 *)((int)param_1 + iVar1 + 0xbf0) = 0;
    *(undefined4 *)((int)param_1 + iVar1 + 0xbf4) = 0;
    *(undefined4 *)((int)param_1 + iVar1 + 0xbf8) = 0x3f800000;
    *(undefined4 *)((int)param_1 + iVar1 + 0xc00) = 0x3f800000;
    iVar1 = iVar2;
  } while (iVar2 != 0x510);
  *(undefined1 *)(param_1 + 0x433) = 0;
  imp___aeabi_memclr4(param_1 + 0x434,0x160);
  param_1[0x48e] = 0xffffffff;
  param_1[0x48f] = 0xffffffff;
  param_1[0x490] = 0xffffffff;
  param_1[0x48c] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x491) = 0;
  param_1[0x48d] = 0;
  imp___aeabi_memset4(param_1 + 0x20e,0x48,0xff);
  return param_1;
}


// =========================================================================
// Function: FUN_71557a58
// Entry: 0x71557a58 | Size: 240 bytes
// =========================================================================

void FUN_71557a58(int param_1)

{
  FUN_7155abc0(param_1,0);
  FUN_7155abc0(param_1,1);
  FUN_7155abc0(param_1,2);
  FUN_7155abc0(param_1,3);
  FUN_7155abc0(param_1,4);
  FUN_7155abc0(param_1,5);
  FUN_7155abc0(param_1,6);
  FUN_7155abc0(param_1,7);
  FUN_7155abc0(param_1,8);
  FUN_7155abc0(param_1,9);
  FUN_7155abc0(param_1,10);
  FUN_7155abc0(param_1,0xb);
  FUN_7155abc0(param_1,0xc);
  FUN_7155abc0(param_1,0xd);
  FUN_7155abc0(param_1,0xe);
  FUN_7155abc0(param_1,0xf);
  FUN_7155abc0(param_1,0x10);
  FUN_7155abc0(param_1,0x11);
  *(undefined4 *)(param_1 + 0x1160) = 0;
  return;
}


// =========================================================================
// Function: FUN_71557d58
// Entry: 0x71557d58 | Size: 268 bytes
// =========================================================================

void FUN_71557d58(int param_1)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  
  puVar2 = (uint *)(param_1 + 0x118c);
  if (*(int *)(param_1 + 0x1190) != 0) {
    FUN_7143d364();
    *(undefined4 *)(param_1 + 0x1190) = 0;
  }
  if (*(int *)(param_1 + 0x1194) != 0) {
    FUN_7143d364();
    *(undefined4 *)(param_1 + 0x1194) = 0;
  }
  if (*puVar2 != 0) {
    uVar4 = 0;
    do {
      if (*(int *)(param_1 + 0x1164 + uVar4 * 4) != 0) {
        FUN_7143d364();
      }
      *(undefined4 *)(param_1 + 0x1164 + uVar4 * 4) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *puVar2);
  }
  *puVar2 = 0;
  if (*(int *)(param_1 + 0x1198) != 0) {
    FUN_7143d364();
    *(undefined4 *)(param_1 + 0x1198) = 0;
  }
  if (*(int *)(param_1 + 0x119c) != 0) {
    FUN_7143d364();
    *(undefined4 *)(param_1 + 0x119c) = 0;
  }
  piVar1 = (int *)(param_1 + 0x11e8);
  iVar3 = 0x12;
  do {
    if (piVar1[-0x12] != 0) {
      FUN_7143d364();
      piVar1[-0x12] = 0;
    }
    if (*piVar1 != 0) {
      FUN_7143d364();
      *piVar1 = 0;
    }
    piVar1 = piVar1 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}


// =========================================================================
// Function: FUN_71557f40
// Entry: 0x71557f40 | Size: 120 bytes
// =========================================================================

void FUN_71557f40(int param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  
  pcVar2 = (char *)(param_1 + 4);
  iVar1 = FUN_71556118(pcVar2);
  if (iVar1 == 0) {
    uVar3 = 0xffffffff;
    if (((*(short *)(param_1 + 6) == *(short *)(param_2 + 2)) && (*pcVar2 == *param_2)) &&
       (*(int *)(param_1 + 0x214) == *(int *)(param_2 + 0x210))) {
      uVar3 = 1;
    }
    imp___aeabi_memcpy4(pcVar2,param_2,0x214);
    *(uint *)(param_1 + 0x7e4) = *(uint *)(param_1 + 0x7e4) | uVar3;
  }
  return;
}


// =========================================================================
// Function: FUN_71558008
// Entry: 0x71558008 | Size: 184 bytes
// =========================================================================

void FUN_71558008(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  uVar3 = param_1[0x1f9];
  if (uVar3 != 0) {
    uVar1 = FUN_7153ffec();
    FUN_7153df30(param_1 + 1,uVar1,param_1 + 0x86);
    if ((uVar3 & 0x21) != 0) {
      FUN_715581d8(param_1);
    }
    if ((uVar3 & 0x2d) != 0) {
      FUN_7155880c(param_1);
    }
    param_1[0x1f9] = 0;
    if (DAT_711a3938 != 0) {
      param_1 = (int *)*param_1;
    }
    if (DAT_711a3938 != 0 && param_1 != (int *)0x0) {
      piVar4 = (int *)(DAT_711a3938 + 0x1389c);
      iVar2 = *piVar4;
      if (iVar2 == 0) {
        iVar2 = FUN_713c301c(0);
        if (iVar2 == 0) {
          iVar2 = *piVar4;
        }
        else {
          thunk_MwhHq(0x3a0);
          iVar2 = FUN_715ba834();
          *piVar4 = iVar2;
        }
      }
      if (param_1 == (int *)iVar2) {
        FUN_714ebe70();
        return;
      }
      return;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_715581d8
// Entry: 0x715581d8 | Size: 892 bytes
// =========================================================================

void FUN_715581d8(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  if (*param_1 != 0) {
    iVar4 = 0x7e0;
    if ((char)param_1[0x1f7] == '\0') {
      iVar4 = 0x21c;
    }
    iVar4 = *(int *)((int)param_1 + iVar4);
    if (-1 < iVar4) {
      iVar1 = *(int *)(*param_1 + 0x8c);
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = (int)*(short *)(iVar1 + 0x26);
      }
      if ((iVar1 != 0 && iVar4 != iVar2) && (iVar2 = FUN_715ec150(iVar4), iVar2 != 0)) {
        FUN_71557a58(param_1);
        FUN_715be6fc(*param_1,iVar4,0);
      }
    }
    if ((char)param_1[0x1f7] != '\0') {
      FUN_71557a58(param_1);
      iVar4 = 0;
      do {
        *(undefined4 *)((int)param_1 + iVar4 + 0xbfc) = 0x3f800000;
        *(undefined2 *)((int)param_1 + iVar4 + 0xbbe) = 0xffff;
        *(undefined2 *)((int)param_1 + iVar4 + 0xbd6) = 0xffff;
        iVar2 = iVar4 + 0x48;
        *(undefined2 *)((int)param_1 + iVar4 + 0xbbc) = 0x11;
        *(undefined4 *)((int)param_1 + iVar4 + 0xbc9) = 0xffffffff;
        *(undefined1 *)((int)param_1 + iVar4 + 0xbc8) = 0;
        *(undefined4 *)((int)param_1 + iVar4 + 0xbc0) = 0;
        *(undefined4 *)((int)param_1 + iVar4 + 0xbc4) = 0xffffffff;
        *(undefined4 *)((int)param_1 + iVar4 + 0xbcd) = 0xffffffff;
        *(undefined4 *)((int)param_1 + iVar4 + 0xbd1) = 0xffffffff;
        *(undefined1 *)((int)param_1 + iVar4 + 0xbd5) = 0;
        *(undefined4 *)((int)param_1 + iVar4 + 0xbd8) = 0;
        *(undefined4 *)((int)param_1 + iVar4 + 0xbdc) = 0xffffffff;
        *(undefined4 *)((int)param_1 + iVar4 + 0xbe0) = 0;
        *(undefined4 *)((int)param_1 + iVar4 + 0xbe4) = 0;
        *(undefined4 *)((int)param_1 + iVar4 + 0xbe8) = 0;
        *(undefined4 *)((int)param_1 + iVar4 + 0xbec) = 0;
        *(undefined4 *)((int)param_1 + iVar4 + 0xbf0) = 0;
        *(undefined4 *)((int)param_1 + iVar4 + 0xbf4) = 0;
        *(undefined4 *)((int)param_1 + iVar4 + 0xbf8) = 0x3f800000;
        *(undefined4 *)((int)param_1 + iVar4 + 0xc00) = 0x3f800000;
        iVar4 = iVar2;
      } while (iVar2 != 0x510);
      *(undefined1 *)(param_1 + 0x433) = 0;
      return;
    }
    if (*param_1 != 0) {
      iVar2 = *(int *)(*param_1 + 0x8c);
      if (iVar2 != 0) {
        iVar4 = *(int *)(iVar2 + 0x18);
      }
      if (iVar2 != 0 && iVar4 != 0) {
        if (param_1[0x458] != iVar4) {
          FUN_7155adf4(param_1,0);
          FUN_7155adf4(param_1,1);
          FUN_7155adf4(param_1,2);
          FUN_7155adf4(param_1,3);
          FUN_7155adf4(param_1,4);
          FUN_7155adf4(param_1,5);
          FUN_7155adf4(param_1,6);
          FUN_7155adf4(param_1,7);
          FUN_7155adf4(param_1,8);
          FUN_7155adf4(param_1,9);
          FUN_7155adf4(param_1,10);
          FUN_7155adf4(param_1,0xb);
          FUN_7155adf4(param_1,0xc);
          FUN_7155adf4(param_1,0xd);
          FUN_7155adf4(param_1,0xe);
          FUN_7155adf4(param_1,0xf);
          FUN_7155adf4(param_1,0x10);
          FUN_7155adf4(param_1,0x11);
          param_1[0x458] = iVar4;
          param_1[0x48e] = -1;
          param_1[0x48f] = -1;
          param_1[0x490] = -1;
        }
        iVar4 = 0;
        do {
          *(undefined4 *)((int)param_1 + iVar4 + 0xbfc) = 0x3f800000;
          iVar2 = iVar4 + 0x48;
          *(undefined2 *)((int)param_1 + iVar4 + 0xbbc) = 0x11;
          *(undefined2 *)((int)param_1 + iVar4 + 0xbbe) = 0xffff;
          *(undefined4 *)((int)param_1 + iVar4 + 0xbc9) = 0xffffffff;
          *(undefined1 *)((int)param_1 + iVar4 + 0xbc8) = 0;
          *(undefined4 *)((int)param_1 + iVar4 + 0xbc0) = 0;
          *(undefined4 *)((int)param_1 + iVar4 + 0xbc4) = 0xffffffff;
          *(undefined4 *)((int)param_1 + iVar4 + 0xbcd) = 0xffffffff;
          *(undefined4 *)((int)param_1 + iVar4 + 0xbd1) = 0xffffffff;
          *(undefined1 *)((int)param_1 + iVar4 + 0xbd5) = 0;
          *(undefined2 *)((int)param_1 + iVar4 + 0xbd6) = 0xffff;
          *(undefined4 *)((int)param_1 + iVar4 + 0xbd8) = 0;
          *(undefined4 *)((int)param_1 + iVar4 + 0xbdc) = 0xffffffff;
          *(undefined4 *)((int)param_1 + iVar4 + 0xbe0) = 0;
          *(undefined4 *)((int)param_1 + iVar4 + 0xbe4) = 0;
          *(undefined4 *)((int)param_1 + iVar4 + 0xbe8) = 0;
          *(undefined4 *)((int)param_1 + iVar4 + 0xbec) = 0;
          *(undefined4 *)((int)param_1 + iVar4 + 0xbf0) = 0;
          *(undefined4 *)((int)param_1 + iVar4 + 0xbf4) = 0;
          *(undefined4 *)((int)param_1 + iVar4 + 0xbf8) = 0x3f800000;
          *(undefined4 *)((int)param_1 + iVar4 + 0xc00) = 0x3f800000;
          iVar4 = iVar2;
        } while (iVar2 != 0x510);
        iVar4 = param_1[0x1bc];
        if (iVar4 != 0) {
          piVar5 = param_1 + 0x8b;
          do {
            if ((char)*piVar5 != '\x01') {
              uVar3 = (uint)*(byte *)(piVar5 + -1);
              if (uVar3 < 0x11) {
                imp___aeabi_memcpy4(param_1 + uVar3 * 0x12 + 0x2ef,piVar5 + -1,0x48);
              }
            }
            iVar4 = iVar4 + -1;
            piVar5 = piVar5 + 0x12;
          } while (iVar4 != 0);
        }
        uVar3 = param_1[0x89];
        if (uVar3 < 0x80000000) {
          param_1[0x423] = uVar3;
        }
        if (-1 < (int)uVar3) {
          *(undefined1 *)(param_1 + 0x421) = 0x11;
        }
        FUN_7155b394(param_1);
        return;
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_7155880c
// Entry: 0x7155880c | Size: 920 bytes
// =========================================================================

void FUN_7155880c(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined2 *puVar11;
  char *pcVar12;
  byte *pbVar13;
  undefined4 uVar14;
  int *piVar15;
  undefined8 uVar16;
  
  FUN_71557d58();
  uVar3 = FUN_7153ffec();
  iVar4 = FUN_7154a7f0(uVar3,*(undefined2 *)(param_1 + 0x220));
  iVar5 = FUN_7154aa58(uVar3,*(undefined2 *)(param_1 + 0x218));
  uVar14 = 0;
  uVar7 = 0;
  if (iVar4 != 0 && iVar5 != 0) {
    iVar5 = FUN_7154a888(iVar5,iVar4);
    uVar7 = 0;
    if (iVar5 != 0) {
      bVar1 = *(byte *)(iVar5 + 0xc);
      uVar8 = *(uint *)(iVar5 + 0x10);
      if ((bVar1 & 1) == 0) {
        uVar8 = (uint)(bVar1 >> 1);
      }
      uVar7 = 0;
      if (uVar8 != 0) {
        iVar9 = *(int *)(iVar5 + 0x14);
        if ((bVar1 & 1) == 0) {
          iVar9 = iVar5 + 0xd;
        }
        uVar7 = FUN_715ec410(s_customization_70062878,iVar9,0);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x1190) = uVar7;
  iVar5 = FUN_7154aa9c(uVar3,*(undefined2 *)(param_1 + 0x222));
  if ((iVar4 != 0 && iVar5 != 0) && (iVar4 = FUN_7154a970(iVar5,iVar4), iVar4 != 0)) {
    bVar1 = *(byte *)(iVar4 + 0xc);
    uVar8 = *(uint *)(iVar4 + 0x10);
    if ((bVar1 & 1) == 0) {
      uVar8 = (uint)(bVar1 >> 1);
    }
    if (uVar8 != 0) {
      iVar5 = *(int *)(iVar4 + 0x14);
      if ((bVar1 & 1) == 0) {
        iVar5 = iVar4 + 0xd;
      }
      uVar14 = FUN_715ec410(s_customization_70062878,iVar5,0);
    }
  }
  uVar6 = *(uint *)(param_1 + 0x7cc);
  *(undefined4 *)(param_1 + 0x1194) = uVar14;
  uVar8 = uVar6;
  if (9 < uVar6) {
    uVar8 = 10;
  }
  *(uint *)(param_1 + 0x118c) = uVar8;
  if (uVar6 != 0) {
    uVar8 = 0;
    puVar11 = (undefined2 *)(param_1 + 0x704);
    do {
      iVar4 = FUN_7154aae0(uVar3,*puVar11);
      if (iVar4 != 0) {
        bVar1 = *(byte *)(iVar4 + 0x10);
        uVar6 = *(uint *)(iVar4 + 0x14);
        if ((bVar1 & 1) == 0) {
          uVar6 = (uint)(bVar1 >> 1);
        }
        if (uVar6 != 0) {
          iVar5 = *(int *)(iVar4 + 0x18);
          if ((bVar1 & 1) == 0) {
            iVar5 = iVar4 + 0x11;
          }
          uVar7 = FUN_715ec410(s_customization_70062878,iVar5,0);
          *(undefined4 *)(param_1 + 0x1164 + uVar8 * 4) = uVar7;
        }
      }
      uVar8 = uVar8 + 1;
      puVar11 = puVar11 + 10;
    } while (uVar8 < *(uint *)(param_1 + 0x118c));
  }
  if (*(int *)(param_1 + 0x6f0) != 0) {
    pcVar12 = (char *)(param_1 + 0x22c);
    uVar8 = 0;
    do {
      if ((*pcVar12 == '\x01') &&
         (iVar4 = FUN_7154a83c(uVar3,*(undefined2 *)(pcVar12 + -2)), iVar4 != 0)) {
        bVar1 = *(byte *)(iVar4 + 0x3c);
        uVar6 = *(uint *)(iVar4 + 0x40);
        if ((bVar1 & 1) == 0) {
          uVar6 = (uint)(bVar1 >> 1);
        }
        if (uVar6 != 0) {
          piVar15 = (int *)0x0;
          if (pcVar12[-4] == '\t') {
            piVar15 = (int *)(param_1 + 0x119c);
          }
          if (pcVar12[-4] == '\x01') {
            piVar15 = (int *)(param_1 + 0x1198);
          }
          if ((piVar15 != (int *)0x0) && (*piVar15 == 0)) {
            iVar5 = *(int *)(iVar4 + 0x44);
            if ((bVar1 & 1) == 0) {
              iVar5 = iVar4 + 0x3d;
            }
            iVar4 = FUN_715ec410(s_customization_70062878,iVar5,0);
            *piVar15 = iVar4;
          }
        }
      }
      uVar8 = uVar8 + 1;
      pcVar12 = pcVar12 + 0x48;
    } while (uVar8 < *(uint *)(param_1 + 0x6f0));
    if (*(uint *)(param_1 + 0x6f0) != 0) {
      pbVar13 = (byte *)(param_1 + 0x228);
      uVar8 = 0;
      do {
        if (((pbVar13[4] != 1) && (*pbVar13 < 0x11)) && (*(short *)(pbVar13 + 0x1a) != -1)) {
          uVar16 = FUN_7154a83c(uVar3,*(undefined2 *)(pbVar13 + 2));
          iVar4 = (int)((ulonglong)uVar16 >> 0x20);
          iVar5 = (int)uVar16;
          if (iVar5 != 0) {
            iVar4 = *(int *)(iVar5 + 200);
          }
          if ((iVar5 != 0 && iVar4 != 0) &&
             (uVar6 = (uint)*(ushort *)(pbVar13 + 0x1a),
             uVar10 = (*(int *)(iVar5 + 0xcc) - iVar4 >> 2) * 0x286bca1b,
             uVar6 <= uVar10 && uVar10 - uVar6 != 0)) {
            bVar1 = *pbVar13;
            iVar4 = uVar6 * 0x4c + iVar4;
            bVar2 = *(byte *)(iVar4 + 0xc);
            uVar6 = *(uint *)(iVar4 + 0x10);
            if ((bVar2 & 1) == 0) {
              uVar6 = (uint)(bVar2 >> 1);
            }
            if (uVar6 != 0) {
              iVar5 = *(int *)(iVar4 + 0x14);
              if ((bVar2 & 1) == 0) {
                iVar5 = iVar4 + 0xd;
              }
              uVar7 = FUN_715ec410(s_customization_70062878,iVar5,0);
              *(undefined4 *)(param_1 + 0x11a0 + (uint)bVar1 * 4) = uVar7;
            }
            bVar2 = *(byte *)(iVar4 + 0x18);
            uVar6 = *(uint *)(iVar4 + 0x1c);
            if ((bVar2 & 1) == 0) {
              uVar6 = (uint)(bVar2 >> 1);
            }
            if (uVar6 != 0) {
              iVar5 = *(int *)(iVar4 + 0x20);
              if ((bVar2 & 1) == 0) {
                iVar5 = iVar4 + 0x19;
              }
              uVar7 = FUN_715ec410(s_customization_70062878,iVar5,0);
              *(undefined4 *)(param_1 + 0x11e8 + (uint)bVar1 * 4) = uVar7;
            }
          }
        }
        uVar8 = uVar8 + 1;
        pbVar13 = pbVar13 + 0x48;
      } while (uVar8 < *(uint *)(param_1 + 0x6f0));
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71558e3c
// Entry: 0x71558e3c | Size: 208 bytes
// =========================================================================

void FUN_71558e3c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int unaff_r7;
  int unaff_r9;
  bool bVar4;
  
  FUN_71558008();
  FUN_71558fb0(param_1);
  if (*param_1 != 0) {
    iVar1 = *(int *)(*param_1 + 0x8c);
    if (iVar1 != 0) {
      unaff_r9 = *(int *)(iVar1 + 0x18);
    }
    if ((iVar1 != 0 && unaff_r9 != 0) && (unaff_r9 == param_1[0x458])) {
      piVar3 = param_1 + 0x229;
      iVar1 = 0;
      do {
        bVar4 = *(char *)((int)param_1 + (0x892 - iVar1)) != '\0';
        if (bVar4) {
          unaff_r7 = param_1[0x1fc - iVar1];
        }
        if (bVar4 && unaff_r7 != 0) {
          uVar2 = 0;
          if ((char)param_1[0x1f7] == '\0') {
            uVar2 = FUN_7155c254(param_1);
            uVar2 = FUN_71ba21e8(uVar2,param_1[0x48c]);
          }
          FUN_7155f918(unaff_r9,unaff_r7,piVar3,uVar2);
        }
        iVar1 = iVar1 + -1;
        piVar3 = piVar3 + 10;
      } while (iVar1 != -0x12);
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71558fb0
// Entry: 0x71558fb0 | Size: 488 bytes
// =========================================================================

void FUN_71558fb0(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int extraout_r2;
  int extraout_r2_00;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  if (((char)param_1[0x1f7] == '\0') && (iVar3 = FUN_71ba2cf0(param_1[0x1bf],0), iVar3 == 0)) {
    if (*param_1 == 0) {
      return;
    }
    iVar4 = *(int *)(*param_1 + 0x8c);
    iVar3 = 0;
    if (iVar4 != 0) {
      iVar3 = *(int *)(iVar4 + 0x18);
    }
    if (iVar4 == 0 || iVar3 == 0) {
      return;
    }
    if (iVar3 != param_1[0x458]) {
      return;
    }
    uVar10 = FUN_714172f4();
    iVar3 = (int)((ulonglong)uVar10 >> 0x20);
    iVar4 = (int)uVar10;
    if (iVar4 != 0) {
      iVar3 = *(int *)(iVar4 + 8);
    }
    if (iVar4 == 0 || iVar3 == 0) {
      return;
    }
    uVar8 = param_1[0x48e];
    iVar3 = extraout_r2;
    if (0x7fffffff < uVar8) {
      iVar3 = FUN_71416a78(iVar4,1);
      param_1[0x48e] = iVar3;
      iVar3 = FUN_71416a78(iVar4,0x2b);
      param_1[0x48f] = iVar3;
      iVar3 = FUN_71416a78(iVar4,0x35);
      uVar8 = param_1[0x48e];
      param_1[0x490] = iVar3;
      iVar3 = extraout_r2_00;
      if ((int)uVar8 < 0) {
        return;
      }
    }
    uVar5 = param_1[0x48f];
    if ((int)uVar5 >= 0) {
      iVar3 = param_1[0x490];
    }
    if ((int)uVar5 < 0 || iVar3 < 0) {
      return;
    }
    iVar6 = *(int *)(iVar4 + 4);
    if (iVar6 <= iVar3) {
      return;
    }
    iVar1 = uVar8 - iVar6;
    uVar2 = uVar8;
    if ((int)uVar8 < iVar6) {
      iVar1 = uVar5 - iVar6;
      uVar2 = uVar5;
    }
    if (iVar1 < 0 == SBORROW4(uVar2,iVar6)) {
      return;
    }
    iVar4 = *(int *)(iVar4 + 8);
    uVar9 = *(undefined4 *)(iVar4 + iVar3 * 0x40 + 0x38);
    uVar7 = *(undefined4 *)(iVar4 + uVar5 * 0x40 + 0x38);
    iVar3 = FUN_71ba2d10(uVar9,uVar7);
    if (iVar3 != 0) {
      uVar7 = uVar9;
    }
    uVar7 = FUN_71ba240c(*(undefined4 *)(iVar4 + uVar8 * 0x40 + 0x38),uVar7);
    uVar7 = FUN_71ba0b38(uVar7,0xbf0ccccd);
    uVar9 = FUN_71ba21e8(uVar7,0x40800000);
    iVar3 = FUN_71ba2d70(uVar9,0x3f800000);
    uVar7 = uVar9;
    if (iVar3 != 0) {
      uVar7 = 0x3f800000;
    }
    iVar3 = FUN_71ba2d10(uVar9,0);
    if (iVar3 != 0) {
      uVar7 = 0;
    }
    uVar9 = FUN_71ba13e0(*DAT_70b42050,0x42480000);
    iVar3 = FUN_71ba2d50(uVar9,0x3e19999a);
    uVar9 = FUN_71ba13e0(uVar9,0x3e19999a);
    iVar4 = param_1[0x48c];
    uVar7 = FUN_71ba240c(uVar7,iVar4);
    if (iVar3 != 0) {
      uVar9 = 0x3f800000;
    }
    uVar7 = FUN_71ba21e8(uVar7,uVar9);
    iVar3 = FUN_71ba0b38(uVar7,iVar4);
  }
  else {
    iVar3 = 0x3f800000;
  }
  param_1[0x48c] = iVar3;
  return;
}


// =========================================================================
// Function: FUN_715593ac
// Entry: 0x715593ac | Size: 496 bytes
// =========================================================================

int FUN_715593ac(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0xffff) {
    iVar2 = *param_1;
    iVar1 = 0;
    iVar4 = 0;
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + 0x8c);
    }
    if (iVar2 != 0 && iVar3 != 0) {
      iVar1 = *(int *)(iVar3 + 0x18);
    }
    if ((((((iVar1 == param_1[0x458]) &&
           ((*(ushort *)(param_1 + 5) != param_2 || (iVar4 = param_1[0x1fc], iVar4 == 0)))) &&
          ((*(ushort *)((int)param_1 + 0x26) != param_2 || (iVar4 = param_1[0x1fd], iVar4 == 0))))
         && ((((((*(ushort *)(param_1 + 0xe) != param_2 || (iVar4 = param_1[0x1fe], iVar4 == 0)) &&
                ((*(ushort *)((int)param_1 + 0x4a) != param_2 ||
                 (iVar4 = param_1[0x1ff], iVar4 == 0)))) &&
               ((*(ushort *)(param_1 + 0x17) != param_2 || (iVar4 = param_1[0x200], iVar4 == 0))))
              && ((*(ushort *)((int)param_1 + 0x6e) != param_2 ||
                  (iVar4 = param_1[0x201], iVar4 == 0)))) &&
             ((((*(ushort *)(param_1 + 0x20) != param_2 || (iVar4 = param_1[0x202], iVar4 == 0)) &&
               ((*(ushort *)((int)param_1 + 0x92) != param_2 || (iVar4 = param_1[0x203], iVar4 == 0)
                ))) && ((((*(ushort *)(param_1 + 0x29) != param_2 ||
                          (iVar4 = param_1[0x204], iVar4 == 0)) &&
                         ((*(ushort *)((int)param_1 + 0xb6) != param_2 ||
                          (iVar4 = param_1[0x205], iVar4 == 0)))) &&
                        ((((*(ushort *)(param_1 + 0x32) != param_2 ||
                           (iVar4 = param_1[0x206], iVar4 == 0)) &&
                          ((*(ushort *)((int)param_1 + 0xda) != param_2 ||
                           (iVar4 = param_1[0x207], iVar4 == 0)))) &&
                         ((*(ushort *)(param_1 + 0x3b) != param_2 ||
                          (iVar4 = param_1[0x208], iVar4 == 0)))))))))))) &&
        ((*(ushort *)((int)param_1 + 0xfe) != param_2 || (iVar4 = param_1[0x209], iVar4 == 0)))) &&
       (((*(ushort *)(param_1 + 0x44) != param_2 || (iVar4 = param_1[0x20a], iVar4 == 0)) &&
        ((*(ushort *)((int)param_1 + 0x122) != param_2 || (iVar4 = param_1[0x20b], iVar4 == 0))))))
    {
      iVar4 = param_1[0x20c];
      if (*(ushort *)(param_1 + 0x4d) != param_2) {
        iVar4 = 0;
      }
      return iVar4;
    }
  }
  return iVar4;
}


// =========================================================================
// Function: FUN_715595b4
// Entry: 0x715595b4 | Size: 56 bytes
// =========================================================================

int FUN_715595b4(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  iVar1 = 0;
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x8c);
  }
  if (iVar2 != 0 && iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + 0x18);
  }
  iVar3 = 0;
  if (iVar1 == param_1[0x458]) {
    iVar3 = param_1[0x20d];
  }
  return iVar3;
}


// =========================================================================
// Function: FUN_71559604
// Entry: 0x71559604 | Size: 2160 bytes
// =========================================================================

void FUN_71559604(int *param_1,uint param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint extraout_r1;
  uint uVar9;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  uint extraout_r1_03;
  uint extraout_r1_04;
  int iVar10;
  uint uVar11;
  undefined4 *unaff_r5;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 *puVar17;
  uint unaff_r10;
  uint uVar18;
  bool bVar19;
  
  puVar12 = DAT_70b41f74;
  if ((0x11 < param_2) || (iVar10 = *(int *)(param_3 + 8), iVar10 < 0)) {
    return;
  }
  iVar14 = *param_1;
  iVar15 = 0;
  if (iVar14 != 0) {
    iVar15 = *(int *)(iVar14 + 0x8c);
  }
  if (iVar14 == 0 || iVar15 == 0) {
    return;
  }
  iVar14 = *(int *)(iVar15 + 0x18);
  if (iVar14 != 0) {
    unaff_r5 = &DAT_711a3938;
    iVar15 = DAT_711a3938;
  }
  if (iVar14 == 0 || iVar15 == 0) {
    return;
  }
  if (DAT_70b41f74[iVar10 * 5 + 4] != 1) {
    return;
  }
  iVar10 = FUN_7155f2e0(iVar10);
  if (iVar10 == 0) {
    return;
  }
  cVar1 = *(char *)(param_3 + 4);
  if (cVar1 == '\x02') {
    iVar10 = FUN_7155f6e8(iVar14);
    if (iVar10 == 0) {
      return;
    }
    uVar2 = FUN_7155a4cc(param_1);
    FUN_7155f918(iVar14,iVar10,param_3 + 0x20,uVar2);
  }
  else {
    iVar10 = FUN_7155f3f4(iVar14,iVar10);
    if (iVar10 == 0) {
      return;
    }
  }
  FUN_715631e8(*unaff_r5,*(undefined4 *)(param_3 + 8));
  uVar9 = DAT_711a391c;
  uVar8 = (iVar10 * 0x5bd1e995 ^ (uint)(iVar10 * 0x5bd1e995) >> 0x18) * 0x5bd1e995 ^ 0x6f47a654;
  uVar8 = (uVar8 ^ uVar8 >> 0xd) * 0x5bd1e995;
  uVar8 = uVar8 ^ uVar8 >> 0xf;
  if (DAT_711a391c != 0) {
    uVar3 = DAT_711a391c - (DAT_711a391c >> 1 & 0x55555555);
    uVar3 = (uVar3 & 0x33333333) + (uVar3 >> 2 & 0x33333333);
    uVar3 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
    if (uVar3 < 2) {
      unaff_r10 = uVar8 & DAT_711a391c - 1;
    }
    else {
      unaff_r10 = uVar8;
      if (DAT_711a391c <= uVar8) {
        FUN_71ba33fc(uVar8,DAT_711a391c);
        unaff_r10 = extraout_r1;
      }
    }
    puVar4 = *(undefined4 **)(DAT_711a3918 + unaff_r10 * 4);
    if (puVar4 != (undefined4 *)0x0) {
      puVar12 = (undefined4 *)*puVar4;
    }
    if (puVar4 != (undefined4 *)0x0 && puVar12 != (undefined4 *)0x0) {
      do {
        uVar18 = puVar12[1];
        if (uVar18 == uVar8) {
          if (puVar12[2] == iVar10) goto LAB_71559d6c;
        }
        else {
          if (uVar3 < 2) {
            uVar18 = uVar18 & uVar9 - 1;
          }
          else if (uVar9 <= uVar18) {
            FUN_71ba33fc(uVar18,uVar9);
            uVar18 = extraout_r1_00;
          }
          if (uVar18 != unaff_r10) break;
        }
        puVar12 = (undefined4 *)*puVar12;
      } while (puVar12 != (undefined4 *)0x0);
    }
  }
  puVar12 = (undefined4 *)thunk_MwhHq(0x20);
  uVar3 = 0;
  *puVar12 = 0;
  puVar12[1] = uVar8;
  puVar12[4] = 0;
  puVar12[5] = 0;
  puVar12[6] = 0;
  puVar12[7] = 0;
  *(undefined4 *)((int)puVar12 + 0x16) = 0xffffffff;
  *(undefined4 *)((int)puVar12 + 0x1a) = 0xffffffff;
  *(undefined4 *)((int)puVar12 + 0x12) = 0xffffffff;
  puVar12[2] = iVar10;
  puVar12[3] = 0;
  uVar5 = FUN_71ba1e0c(uVar9);
  uVar2 = DAT_711a3928;
  iVar15 = DAT_711a3924;
  uVar5 = FUN_71ba21e8(DAT_711a3928,uVar5);
  uVar6 = FUN_71ba1e0c(iVar15 + 1);
  if ((uVar9 == 0) || (iVar15 = FUN_71ba2d10(uVar5,uVar6), iVar15 != 0)) {
    if (2 < uVar9) {
      uVar3 = (uint)((uVar9 & uVar9 - 1) == 0);
    }
    uVar11 = uVar9 << 1 | uVar3 ^ 1;
    FUN_71ba13e0(uVar6,uVar2);
    imp_ceilf();
    uVar3 = FUN_71ba1910();
    uVar18 = 2;
    if (uVar3 < uVar11) {
      uVar3 = uVar11;
    }
    if ((uVar3 != 1) && (uVar18 = uVar3, (uVar3 & uVar3 - 1) != 0)) {
      uVar18 = thunk_SI_jHZGHEkRozkgfjpWJMmUiRrdj();
      uVar9 = DAT_711a391c;
    }
    uVar2 = DAT_711a3928;
    if (uVar9 < uVar18) {
LAB_7155993c:
      if (0x3fffffff < uVar18) {
                    /* WARNING: Subroutine does not return */
        FUN_712f6cf0();
      }
      iVar15 = thunk_MwhHq(uVar18 << 2);
      bVar19 = DAT_711a3918 != 0;
      DAT_711a3918 = iVar15;
      if (bVar19) {
        thunk_qNQrlu();
      }
      uVar9 = 0;
      DAT_711a391c = uVar18;
      do {
        *(undefined4 *)(DAT_711a3918 + uVar9 * 4) = 0;
        puVar4 = DAT_711a3920;
        uVar9 = uVar9 + 1;
      } while (uVar18 != uVar9);
      if (DAT_711a3920 != (undefined4 *)0x0) {
        uVar3 = DAT_711a3920[1];
        uVar9 = uVar18 - (uVar18 >> 1 & 0x55555555);
        uVar9 = (uVar9 & 0x33333333) + (uVar9 >> 2 & 0x33333333);
        uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
        if (uVar9 < 2) {
          uVar3 = uVar3 & uVar18 - 1;
        }
        else if (uVar18 <= uVar3) {
          FUN_71ba33fc(uVar3,uVar18);
          uVar3 = extraout_r1_01;
        }
        *(undefined4 ***)(DAT_711a3918 + uVar3 * 4) = &DAT_711a3920;
        puVar7 = (undefined4 *)*puVar4;
        while (puVar17 = puVar7, puVar17 != (undefined4 *)0x0) {
          uVar11 = puVar17[1];
          if (uVar9 < 2) {
            uVar11 = uVar11 & uVar18 - 1;
          }
          else if (uVar18 <= uVar11) {
            FUN_71ba33fc(uVar11,uVar18);
            uVar11 = extraout_r1_02;
          }
          if (uVar11 != uVar3) {
            if (*(int *)(DAT_711a3918 + uVar11 * 4) == 0) {
              *(undefined4 **)(DAT_711a3918 + uVar11 * 4) = puVar4;
              uVar3 = uVar11;
            }
            else {
              *puVar4 = *puVar17;
              *puVar17 = **(undefined4 **)(DAT_711a3918 + uVar11 * 4);
              **(undefined4 **)(DAT_711a3918 + uVar11 * 4) = puVar17;
              puVar17 = puVar4;
            }
          }
          puVar4 = puVar17;
          puVar7 = (undefined4 *)*puVar17;
        }
      }
    }
    else if (uVar18 < uVar9) {
      uVar5 = FUN_71ba1e0c(DAT_711a3924);
      FUN_71ba13e0(uVar5,uVar2);
      imp_ceilf();
      uVar3 = FUN_71ba1910();
      if ((uVar9 < 3) ||
         (uVar11 = uVar9 - (uVar9 >> 1 & 0x55555555),
         uVar11 = (uVar11 & 0x33333333) + (uVar11 >> 2 & 0x33333333),
         1 < (uVar11 + (uVar11 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18)) {
        uVar3 = thunk_SI_jHZGHEkRozkgfjpWJMmUiRrdj(uVar3);
      }
      else if (1 < uVar3) {
        uVar3 = 1 << (0x20U - LZCOUNT(uVar3 - 1) & 0xff);
      }
      iVar15 = DAT_711a3918;
      if (uVar3 < uVar18) {
        uVar3 = uVar18;
      }
      if (uVar3 < uVar9) {
        uVar18 = uVar3;
        if (uVar3 != 0) goto LAB_7155993c;
        DAT_711a3918 = 0;
        if (iVar15 != 0) {
          thunk_qNQrlu();
        }
        DAT_711a391c = 0;
      }
    }
    uVar9 = DAT_711a391c;
    if ((DAT_711a391c & DAT_711a391c - 1) == 0) {
      unaff_r10 = DAT_711a391c - 1 & uVar8;
    }
    else {
      unaff_r10 = uVar8;
      if (DAT_711a391c <= uVar8) {
        FUN_71ba33fc(uVar8,DAT_711a391c);
        unaff_r10 = extraout_r1_03;
      }
    }
  }
  puVar4 = DAT_711a3920;
  iVar15 = DAT_711a3918;
  puVar7 = *(undefined4 **)(DAT_711a3918 + unaff_r10 * 4);
  if (puVar7 == (undefined4 *)0x0) {
    *puVar12 = DAT_711a3920;
    bVar19 = DAT_711a3920 == (undefined4 *)0x0;
    DAT_711a3920 = puVar12;
    *(undefined4 ***)(iVar15 + unaff_r10 * 4) = &DAT_711a3920;
    if (bVar19) goto LAB_71559d60;
    uVar8 = puVar4[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar8 = uVar8 & uVar9 - 1;
    }
    else if (uVar9 <= uVar8) {
      FUN_71ba33fc(uVar8,uVar9);
      uVar8 = extraout_r1_04;
    }
    puVar7 = (undefined4 *)(DAT_711a3918 + uVar8 * 4);
  }
  else {
    *puVar12 = *puVar7;
  }
  *puVar7 = puVar12;
LAB_71559d60:
  DAT_711a3924 = DAT_711a3924 + 1;
LAB_71559d6c:
  puVar12[3] = *(undefined4 *)(iVar10 + 0x48);
  *(bool *)(puVar12 + 4) = param_2 == 0x11;
  *(undefined1 *)((int)puVar12 + 0x11) = *(undefined1 *)(param_3 + 0xc);
  uVar2 = *(undefined4 *)(param_3 + 0xd);
  uVar5 = *(undefined4 *)(param_3 + 0x11);
  *(undefined4 *)((int)puVar12 + 0x1a) = *(undefined4 *)(param_3 + 0x15);
  *(undefined4 *)((int)puVar12 + 0x12) = uVar2;
  *(undefined4 *)((int)puVar12 + 0x16) = uVar5;
  *(code **)(iVar10 + 0x48) = FUN_7155a550;
  param_1[param_2 + 0x1fc] = iVar10;
  param_1[param_2 + 0x20e] = *(int *)(param_3 + 8);
  iVar15 = *(int *)(param_3 + 0x1c);
  *(bool *)((int)param_1 + param_2 + 0x892) = cVar1 == '\x02';
  *(bool *)((int)param_1 + param_2 + 0x880) = iVar15 != 0;
  iVar15 = *(int *)(param_3 + 0x24);
  iVar14 = *(int *)(param_3 + 0x28);
  iVar13 = *(int *)(param_3 + 0x2c);
  iVar16 = *(int *)(param_3 + 0x30);
  param_1[param_2 * 10 + 0x229] = *(int *)(param_3 + 0x20);
  param_1[param_2 * 10 + 0x22a] = iVar15;
  param_1[param_2 * 10 + 0x22b] = iVar14;
  param_1[param_2 * 10 + 0x22c] = iVar13;
  param_1[param_2 * 10 + 0x22d] = iVar16;
  iVar15 = *(int *)(param_3 + 0x38);
  iVar14 = *(int *)(param_3 + 0x3c);
  iVar13 = *(int *)(param_3 + 0x40);
  iVar16 = *(int *)(param_3 + 0x44);
  param_1[param_2 * 10 + 0x22e] = *(int *)(param_3 + 0x34);
  param_1[param_2 * 10 + 0x22f] = iVar15;
  param_1[param_2 * 10 + 0x230] = iVar14;
  param_1[param_2 * 10 + 0x231] = iVar13;
  param_1[param_2 * 10 + 0x232] = iVar16;
  iVar15 = 0;
  if (cVar1 == '\x02') {
    iVar15 = *(int *)(iVar10 + 4);
  }
  param_1[param_2 + 0x2dd] = iVar15;
  uVar2 = FUN_7153ffec();
  iVar10 = FUN_7154a83c(uVar2,*(undefined2 *)(param_3 + 2));
  if (iVar10 == 0) {
    iVar10 = 0;
    param_1[param_2 + 0x434] = 0;
  }
  else {
    param_1[param_2 + 0x434] = *(int *)(iVar10 + 0x30);
    iVar10 = *(int *)(iVar10 + (uint)*(byte *)(param_1 + 1) * 4 + 0x98);
  }
  param_1[param_2 + 0x446] = iVar10;
  return;
}


// =========================================================================
// Function: FUN_7155a4cc
// Entry: 0x7155a4cc | Size: 52 bytes
// =========================================================================

undefined4 FUN_7155a4cc(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x7dc) != '\0') {
    return 0;
  }
  uVar1 = FUN_7155c254(param_1);
  uVar1 = FUN_71ba21e8(uVar1,*(undefined4 *)(param_1 + 0x1230));
  return uVar1;
}


// =========================================================================
// Function: FUN_7155a550
// Entry: 0x7155a550 | Size: 720 bytes
// =========================================================================

int FUN_7155a550(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  undefined1 uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint extraout_r1;
  uint extraout_r1_00;
  int *unaff_r4;
  uint uVar11;
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
  
  uVar4 = DAT_711a391c;
  if (DAT_711a391c != 0) {
    uVar10 = (param_1 * 0x5bd1e995 ^ (uint)(param_1 * 0x5bd1e995) >> 0x18) * 0x5bd1e995 ^ 0x6f47a654
    ;
    uVar6 = (uVar10 ^ uVar10 >> 0xd) * 0x5bd1e995;
    uVar6 = uVar6 ^ uVar6 >> 0xf;
    uVar10 = DAT_711a391c - (DAT_711a391c >> 1 & 0x55555555);
    uVar10 = (uVar10 & 0x33333333) + (uVar10 >> 2 & 0x33333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
    if (uVar10 < 2) {
      uVar11 = DAT_711a391c - 1 & uVar6;
    }
    else {
      uVar11 = uVar6;
      if (DAT_711a391c <= uVar6) {
        FUN_71ba33fc(uVar6,DAT_711a391c);
        uVar11 = extraout_r1;
      }
    }
    piVar7 = *(int **)(DAT_711a3918 + uVar11 * 4);
    if (piVar7 != (int *)0x0) {
      unaff_r4 = (int *)*piVar7;
    }
    if (piVar7 != (int *)0x0 && unaff_r4 != (int *)0x0) {
      do {
        uVar8 = unaff_r4[1];
        if (uVar8 == uVar6) {
          if (unaff_r4[2] == param_1) {
            cVar1 = *(char *)((int)unaff_r4 + 0x11);
            if (cVar1 != '\0') {
              uVar5 = *(undefined1 *)((int)unaff_r4 + 0x12);
              iVar3 = unaff_r4[5];
              uVar2 = *(undefined1 *)((int)unaff_r4 + 0x15);
              uVar9 = FUN_71ba1e0c(*(undefined1 *)((int)unaff_r4 + 0x13));
              uStack_50 = FUN_71ba13e0(uVar9,0x437f0000);
              uVar9 = FUN_71ba1e0c((char)iVar3);
              uStack_4c = FUN_71ba13e0(uVar9,0x437f0000);
              uVar9 = FUN_71ba1e0c(uVar2);
              uStack_48 = FUN_71ba13e0(uVar9,0x437f0000);
              uVar9 = FUN_71ba1e0c(uVar5);
              uStack_54 = FUN_71ba13e0(uVar9,0x437f0000);
              if (cVar1 == '\x01') {
                uVar5 = *(undefined1 *)((int)unaff_r4 + 0x16);
                uVar2 = *(undefined1 *)((int)unaff_r4 + 0x17);
                uVar9 = FUN_71ba1e0c((char)unaff_r4[6]);
                uStack_3c = FUN_71ba13e0(uVar9,0x437f0000);
                uVar9 = FUN_71ba1e0c(*(undefined1 *)((int)unaff_r4 + 0x19));
                uStack_38 = FUN_71ba13e0(uVar9,0x437f0000);
                uVar9 = FUN_71ba1e0c(*(undefined1 *)((int)unaff_r4 + 0x1a));
                uStack_34 = FUN_71ba13e0(uVar9,0x437f0000);
                uVar9 = FUN_71ba1e0c(*(undefined1 *)((int)unaff_r4 + 0x1b));
                uStack_30 = FUN_71ba13e0(uVar9,0x437f0000);
                uVar9 = FUN_71ba1e0c((char)unaff_r4[7]);
                uStack_2c = FUN_71ba13e0(uVar9,0x437f0000);
                uVar9 = FUN_71ba1e0c(uVar5);
                uStack_44 = FUN_71ba13e0(uVar9,0x437f0000);
                uVar9 = FUN_71ba1e0c(uVar2);
                uStack_40 = FUN_71ba13e0(uVar9,0x437f0000);
                uVar9 = FUN_71ba1e0c(*(undefined1 *)((int)unaff_r4 + 0x1d));
                uStack_28 = FUN_71ba13e0(uVar9,0x437f0000);
              }
              uVar5 = 1;
              if (*(char *)((int)unaff_r4 + 0x11) != '\x01') {
                uVar5 = 2;
              }
              FUN_713a59c4(uVar5,&uStack_54);
            }
            if ((code *)unaff_r4[3] == (code *)0x0) {
              FUN_714241a8(param_1);
            }
            else {
              (*(code *)unaff_r4[3])();
            }
            if (*(char *)((int)unaff_r4 + 0x11) == '\0') {
              return param_1;
            }
            FUN_713a59c4(0,0);
            return param_1;
          }
        }
        else {
          if (uVar10 < 2) {
            uVar8 = uVar8 & uVar4 - 1;
          }
          else if (uVar4 <= uVar8) {
            FUN_71ba33fc(uVar8,uVar4);
            uVar8 = extraout_r1_00;
          }
          if (uVar8 != uVar11) break;
        }
        unaff_r4 = (int *)*unaff_r4;
      } while (unaff_r4 != (int *)0x0);
    }
  }
  FUN_714241a8(param_1);
  return param_1;
}


// =========================================================================
// Function: FUN_7155abc0
// Entry: 0x7155abc0 | Size: 368 bytes
// =========================================================================

void FUN_7155abc0(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iStack_28;
  
  if (0x11 < param_2) {
    return;
  }
  iVar1 = param_1[0x458];
  if (iVar1 != 0) {
    iVar2 = *param_1;
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + 0x8c);
    }
    if ((iVar2 != 0 && iVar3 != 0) && (iVar1 == *(int *)(iVar3 + 0x18))) {
      iVar1 = param_1[param_2 + 0x1fc];
      iStack_28 = iVar1;
      if (iVar1 != 0) {
        FUN_7155af78(&iStack_28);
        if (*(char *)((int)param_1 + param_2 + 0x892) == '\0') {
          FUN_7155f664(iVar1);
        }
        else {
          FUN_7155fce0(param_1[0x458],iVar1);
        }
      }
      if ((-1 < param_1[param_2 + 0x20e]) && (DAT_711a3938 != 0)) {
        FUN_71563244(DAT_711a3938,param_1[param_2 + 0x20e]);
      }
      param_1[param_2 + 0x20e] = -1;
      param_1[param_2 + 0x1fc] = 0;
      *(undefined1 *)((int)param_1 + param_2 + 0x880) = 0;
      *(undefined1 *)((int)param_1 + param_2 + 0x892) = 0;
      param_1[param_2 + 0x2dd] = 0;
      param_1[param_2 * 10 + 0x231] = 0x3f800000;
      param_1[param_2 * 10 + 0x232] = 0x3f800000;
      param_1[param_2 * 10 + 0x229] = -1;
      param_1[param_2 * 10 + 0x22a] = 0;
      param_1[param_2 * 10 + 0x22b] = 0;
      param_1[param_2 * 10 + 0x22c] = 0;
      param_1[param_2 * 10 + 0x22d] = 0;
      param_1[param_2 * 10 + 0x22e] = 0;
      param_1[param_2 * 10 + 0x22f] = 0;
      param_1[param_2 * 10 + 0x230] = 0x3f800000;
      param_1[param_2 + 0x446] = 0;
      param_1[param_2 + 0x434] = 0;
      return;
    }
  }
  FUN_7155adf4();
  return;
}


// =========================================================================
// Function: FUN_7155adf4
// Entry: 0x7155adf4 | Size: 248 bytes
// =========================================================================

void FUN_7155adf4(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iStack_24;
  
  if (param_2 < 0x12) {
    iStack_24 = *(int *)(param_1 + 0x7f0 + param_2 * 4);
    if (iStack_24 != 0) {
      FUN_7155af78(&iStack_24);
    }
    bVar3 = *(char *)(param_1 + 0x892 + param_2) != '\0';
    iVar1 = 0;
    if (bVar3) {
      iVar1 = *(int *)(param_1 + param_2 * 4 + 0xb74);
    }
    if (bVar3 && iVar1 != 0) {
      FUN_7141d500();
    }
    if ((-1 < *(int *)(param_1 + 0x838 + param_2 * 4)) && (DAT_711a3938 != 0)) {
      FUN_71563244();
    }
    *(undefined4 *)(param_1 + 0x838 + param_2 * 4) = 0xffffffff;
    iVar2 = param_1 + param_2 * 0x28;
    *(undefined4 *)(param_1 + 0x7f0 + param_2 * 4) = 0;
    *(undefined1 *)(param_1 + param_2 + 0x880) = 0;
    iVar1 = param_1 + param_2 * 4;
    *(undefined1 *)(param_1 + 0x892 + param_2) = 0;
    *(undefined4 *)(iVar1 + 0xb74) = 0;
    *(undefined4 *)(iVar2 + 0x8a4) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x8c4) = 0x3f800000;
    *(undefined4 *)(iVar2 + 0x8c8) = 0x3f800000;
    *(undefined4 *)(iVar2 + 0x8a8) = 0;
    *(undefined4 *)(iVar2 + 0x8ac) = 0;
    *(undefined4 *)(iVar2 + 0x8b0) = 0;
    *(undefined4 *)(iVar2 + 0x8b4) = 0;
    *(undefined4 *)(iVar2 + 0x8b8) = 0;
    *(undefined4 *)(iVar2 + 0x8bc) = 0;
    *(undefined4 *)(iVar2 + 0x8c0) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0x1118) = 0;
    *(undefined4 *)(iVar1 + 0x10d0) = 0;
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_7155af78
// Entry: 0x7155af78 | Size: 704 bytes
// =========================================================================

void FUN_7155af78(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  uint extraout_r1_03;
  uint extraout_r1_04;
  uint uVar10;
  int *unaff_r6;
  int iVar11;
  
  uVar2 = DAT_711a391c;
  if (DAT_711a391c != 0) {
    iVar11 = *param_1;
    uVar9 = iVar11 * 0x5bd1e995;
    uVar9 = (uVar9 ^ uVar9 >> 0x18) * 0x5bd1e995 ^ 0x6f47a654;
    uVar4 = (uVar9 ^ uVar9 >> 0xd) * 0x5bd1e995;
    uVar4 = uVar4 ^ uVar4 >> 0xf;
    uVar9 = DAT_711a391c - (DAT_711a391c >> 1 & 0x55555555);
    uVar9 = (uVar9 & 0x33333333) + (uVar9 >> 2 & 0x33333333);
    uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
    if (uVar9 < 2) {
      uVar8 = uVar4 & DAT_711a391c - 1;
    }
    else {
      uVar8 = uVar4;
      if (DAT_711a391c <= uVar4) {
        FUN_71ba33fc(uVar4,DAT_711a391c);
        uVar8 = extraout_r1;
      }
    }
    iVar1 = DAT_711a3918;
    puVar5 = *(undefined4 **)(DAT_711a3918 + uVar8 * 4);
    if (puVar5 != (undefined4 *)0x0) {
      unaff_r6 = (int *)*puVar5;
    }
    if (puVar5 != (undefined4 *)0x0 && unaff_r6 != (int *)0x0) {
      uVar10 = uVar2 - 1;
      do {
        uVar6 = unaff_r6[1];
        if (uVar6 == uVar4) {
          if (unaff_r6[2] == iVar11) {
            iVar11 = *unaff_r6;
            if (uVar9 < 2) {
              uVar4 = uVar4 & uVar10;
            }
            else if (uVar2 <= uVar4) {
              FUN_71ba33fc(uVar4,uVar2);
              uVar4 = extraout_r1_01;
            }
            piVar3 = *(int **)(iVar1 + uVar4 * 4);
            do {
              piVar7 = piVar3;
              piVar3 = (int *)*piVar7;
            } while ((int *)*piVar7 != unaff_r6);
            if (piVar7 == &DAT_711a3920) {
LAB_7155b168:
              if (iVar11 == 0) {
LAB_7155b1b0:
                *(undefined4 *)(iVar1 + uVar4 * 4) = 0;
                iVar11 = *unaff_r6;
                goto LAB_7155b1c0;
              }
              uVar8 = *(uint *)(iVar11 + 4);
              if (uVar9 < 2) {
                uVar6 = uVar8 & uVar10;
              }
              else {
                uVar6 = uVar8;
                if (uVar2 <= uVar8) {
                  FUN_71ba33fc(uVar8,uVar2);
                  uVar6 = extraout_r1_03;
                }
              }
              if (uVar6 != uVar4) goto LAB_7155b1b0;
            }
            else {
              uVar8 = piVar7[1];
              if (uVar9 < 2) {
                uVar8 = uVar8 & uVar10;
              }
              else if (uVar2 <= uVar8) {
                FUN_71ba33fc(uVar8,uVar2);
                uVar8 = extraout_r1_02;
              }
              if (uVar8 != uVar4) goto LAB_7155b168;
LAB_7155b1c0:
              if (iVar11 == 0) {
                iVar11 = 0;
                goto LAB_7155b210;
              }
              uVar8 = *(uint *)(iVar11 + 4);
            }
            if (uVar9 < 2) {
              uVar8 = uVar8 & uVar10;
            }
            else if (uVar2 <= uVar8) {
              FUN_71ba33fc(uVar8,uVar2);
              uVar8 = extraout_r1_04;
            }
            if (uVar8 != uVar4) {
              *(int **)(DAT_711a3918 + uVar8 * 4) = piVar7;
              iVar11 = *unaff_r6;
            }
LAB_7155b210:
            *piVar7 = iVar11;
            *unaff_r6 = 0;
            DAT_711a3924 = DAT_711a3924 + -1;
            thunk_qNQrlu(unaff_r6);
            return;
          }
        }
        else {
          if (uVar9 < 2) {
            uVar6 = uVar6 & uVar10;
          }
          else if (uVar2 <= uVar6) {
            FUN_71ba33fc(uVar6,uVar2);
            uVar6 = extraout_r1_00;
          }
          if (uVar6 != uVar8) {
            return;
          }
        }
        unaff_r6 = (int *)*unaff_r6;
      } while (unaff_r6 != (int *)0x0);
    }
  }
  return;
}


// =========================================================================
// Function: FUN_7155b394
// Entry: 0x7155b394 | Size: 1384 bytes
// =========================================================================

void FUN_7155b394(int *param_1)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  int *piVar12;
  uint extraout_r1;
  uint extraout_r1_00;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  int unaff_r4;
  int iVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int *piVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  int *unaff_r10;
  int iStack_28;
  
  if (*param_1 != 0) {
    iVar4 = *(int *)(*param_1 + 0x8c);
    if (iVar4 != 0) {
      unaff_r4 = *(int *)(iVar4 + 0x18);
    }
    if (iVar4 != 0 && unaff_r4 != 0) {
      if (param_1[0x458] != unaff_r4) {
        FUN_7155adf4(param_1,0);
        FUN_7155adf4(param_1,1);
        FUN_7155adf4(param_1,2);
        FUN_7155adf4(param_1,3);
        FUN_7155adf4(param_1,4);
        FUN_7155adf4(param_1,5);
        FUN_7155adf4(param_1,6);
        FUN_7155adf4(param_1,7);
        FUN_7155adf4(param_1,8);
        FUN_7155adf4(param_1,9);
        FUN_7155adf4(param_1,10);
        FUN_7155adf4(param_1,0xb);
        FUN_7155adf4(param_1,0xc);
        FUN_7155adf4(param_1,0xd);
        FUN_7155adf4(param_1,0xe);
        FUN_7155adf4(param_1,0xf);
        FUN_7155adf4(param_1,0x10);
        FUN_7155adf4(param_1,0x11);
        param_1[0x458] = unaff_r4;
        param_1[0x48e] = -1;
        param_1[0x48f] = -1;
        param_1[0x490] = -1;
      }
      *(undefined1 *)(param_1 + 0x433) = 0;
      uVar29 = 0;
      do {
        uVar3 = DAT_711a391c;
        iVar4 = param_1[uVar29 + 0x20e];
        piVar23 = param_1 + uVar29 * 0x12 + 0x2ef;
        iVar22 = piVar23[2];
        if (iVar22 == iVar4) {
          iVar4 = param_1[uVar29 + 0x1fc];
          if (iVar4 != 0) {
            if (DAT_711a391c != 0) {
              uVar5 = (iVar4 * 0x5bd1e995 ^ (uint)(iVar4 * 0x5bd1e995) >> 0x18) * 0x5bd1e995 ^
                      0x6f47a654;
              uVar6 = (uVar5 ^ uVar5 >> 0xd) * 0x5bd1e995;
              uVar6 = uVar6 ^ uVar6 >> 0xf;
              uVar5 = DAT_711a391c - (DAT_711a391c >> 1 & 0x55555555);
              uVar5 = (uVar5 & 0x33333333) + (uVar5 >> 2 & 0x33333333);
              uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
              if (uVar5 < 2) {
                uVar21 = DAT_711a391c - 1 & uVar6;
              }
              else {
                uVar21 = uVar6;
                if (DAT_711a391c <= uVar6) {
                  FUN_71ba33fc(uVar6,DAT_711a391c);
                  uVar21 = extraout_r1;
                }
              }
              puVar9 = *(undefined4 **)(DAT_711a3918 + uVar21 * 4);
              if (puVar9 != (undefined4 *)0x0) {
                unaff_r10 = (int *)*puVar9;
              }
              if (puVar9 != (undefined4 *)0x0 && unaff_r10 != (int *)0x0) {
                do {
                  uVar11 = unaff_r10[1];
                  if (uVar11 == uVar6) {
                    if (unaff_r10[2] == iVar4) {
                      *(char *)((int)unaff_r10 + 0x11) = (char)piVar23[3];
                      uVar10 = *(undefined4 *)((int)piVar23 + 0x11);
                      uVar16 = *(undefined4 *)((int)piVar23 + 0x15);
                      *(undefined4 *)((int)unaff_r10 + 0x12) = *(undefined4 *)((int)piVar23 + 0xd);
                      *(undefined4 *)((int)unaff_r10 + 0x16) = uVar10;
                      *(undefined4 *)((int)unaff_r10 + 0x1a) = uVar16;
                      break;
                    }
                  }
                  else {
                    if (uVar5 < 2) {
                      uVar11 = uVar11 & uVar3 - 1;
                    }
                    else if (uVar3 <= uVar11) {
                      FUN_71ba33fc(uVar11,uVar3);
                      uVar11 = extraout_r1_00;
                    }
                    if (uVar11 != uVar21) break;
                  }
                  unaff_r10 = (int *)*unaff_r10;
                } while (unaff_r10 != (int *)0x0);
              }
            }
            uVar10 = FUN_7153ffec();
            iVar4 = FUN_7154a83c(uVar10,*(undefined2 *)((int)piVar23 + 2));
            if (iVar4 == 0) {
              iVar4 = 0;
              param_1[uVar29 + 0x434] = 0;
            }
            else {
              param_1[uVar29 + 0x434] = *(int *)(iVar4 + 0x30);
              iVar4 = *(int *)(iVar4 + (uint)*(byte *)(param_1 + 1) * 4 + 0x98);
            }
            param_1[uVar29 + 0x446] = iVar4;
          }
        }
        else {
          if (-1 < iVar22) {
            iVar4 = FUN_7155bc84(param_1,iVar22);
            if (iVar4 == 0) {
              *(undefined1 *)(param_1 + 0x433) = 1;
              goto LAB_7155b55c;
            }
            iVar4 = param_1[uVar29 + 0x20e];
          }
          iVar7 = param_1[uVar29 + 0x1fc];
          cVar1 = *(char *)((int)param_1 + uVar29 + 0x892);
          uVar2 = *(undefined1 *)((int)param_1 + uVar29 + 0x880);
          iVar8 = param_1[uVar29 + 0x2dd];
          piVar12 = param_1 + uVar29 * 10 + 0x229;
          iVar13 = *piVar12;
          iVar17 = piVar12[1];
          iVar19 = piVar12[2];
          iVar24 = piVar12[3];
          iVar27 = piVar12[4];
          iVar14 = piVar12[5];
          iVar18 = piVar12[6];
          iVar20 = piVar12[7];
          iVar25 = piVar12[8];
          iVar28 = piVar12[9];
          param_1[uVar29 + 0x20e] = -1;
          unaff_r10 = param_1 + uVar29 + 0x446;
          iVar15 = *unaff_r10;
          param_1[uVar29 + 0x1fc] = 0;
          iVar26 = param_1[uVar29 + 0x434];
          *(undefined1 *)((int)param_1 + uVar29 + 0x892) = 0;
          *(undefined1 *)((int)param_1 + uVar29 + 0x880) = 0;
          param_1[uVar29 + 0x434] = 0;
          param_1[uVar29 + 0x2dd] = 0;
          *unaff_r10 = 0;
          iStack_28 = iVar7;
          if ((iVar22 < 0) ||
             (FUN_71559604(param_1,uVar29 & 0xff,piVar23), param_1[uVar29 + 0x1fc] != 0)) {
            if (iVar7 != 0) {
              FUN_7155af78(&iStack_28);
              if (cVar1 == '\0') {
                FUN_7155f664(iVar7);
              }
              else {
                FUN_7155fce0(param_1[0x458],iVar7);
              }
            }
            if ((-1 < iVar4) && (DAT_711a3938 != 0)) {
              FUN_71563244();
            }
          }
          else {
            param_1[uVar29 + 0x20e] = iVar4;
            param_1[uVar29 + 0x1fc] = iVar7;
            *(undefined1 *)((int)param_1 + uVar29 + 0x880) = uVar2;
            *(char *)((int)param_1 + uVar29 + 0x892) = cVar1;
            param_1[uVar29 + 0x2dd] = iVar8;
            *piVar12 = iVar13;
            piVar12[1] = iVar17;
            piVar12[2] = iVar19;
            piVar12[3] = iVar24;
            piVar12[4] = iVar27;
            piVar12[5] = iVar14;
            piVar12[6] = iVar18;
            piVar12[7] = iVar20;
            piVar12[8] = iVar25;
            piVar12[9] = iVar28;
            param_1[uVar29 + 0x434] = iVar26;
            *unaff_r10 = iVar15;
          }
        }
LAB_7155b55c:
        uVar29 = uVar29 + 1;
      } while (uVar29 != 0x12);
    }
  }
  return;
}


// =========================================================================
// Function: FUN_7155bc84
// Entry: 0x7155bc84 | Size: 216 bytes
// =========================================================================

undefined4 FUN_7155bc84(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  if ((-1 < param_2) && (DAT_711a3938 != 0)) {
    iVar3 = DAT_70b41f74 + param_2 * 0x14;
    if (*(int *)(iVar3 + 0x10) == 1) {
      return 1;
    }
    iVar5 = *param_1;
    if (iVar5 != 0) {
      piVar4 = (int *)(DAT_711a3938 + 0x1389c);
      iVar1 = *piVar4;
      if (iVar1 == 0) {
        iVar1 = FUN_713c301c(0);
        if (iVar1 == 0) {
          iVar1 = *piVar4;
        }
        else {
          thunk_MwhHq(0x3a0);
          iVar1 = FUN_715ba834();
          *piVar4 = iVar1;
        }
      }
      if (iVar5 == iVar1) {
        uVar2 = FUN_7156942c(DAT_711a3938);
        return uVar2;
      }
    }
    if (*(int *)(iVar3 + 0xc) != 0) {
      FUN_7135d734(param_2,0x10);
    }
  }
  return 0;
}


// =========================================================================
// Function: FUN_7155be40
// Entry: 0x7155be40 | Size: 460 bytes
// =========================================================================

void FUN_7155be40(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int unaff_r8;
  bool bVar12;
  
  puVar8 = DAT_711a3908;
  do {
    if (puVar8 == (undefined4 *)0x0) {
      return;
    }
    piVar7 = (int *)puVar8[3];
    if (piVar7 != (int *)0x0) {
      iVar2 = 0;
      if (*piVar7 == 0) {
        iVar9 = 0;
      }
      else {
        iVar3 = *(int *)(*piVar7 + 0x8c);
        iVar9 = 0;
        if (iVar3 != 0) {
          iVar9 = *(int *)(iVar3 + 0x18);
          iVar2 = iVar3;
        }
      }
      cVar5 = (char)piVar7[0x1f7];
      piVar11 = piVar7 + 0x433;
      iVar3 = 0x7e0;
      if (cVar5 == '\0') {
        iVar3 = 0x21c;
      }
      if ((iVar9 == 0) || (iVar3 = *(int *)((int)piVar7 + iVar3), iVar3 < 0)) {
        uVar1 = 0;
        uVar4 = 0;
        if (iVar9 != 0) goto LAB_7155befc;
      }
      else {
        uVar1 = 0;
        if (iVar3 != *(short *)(iVar2 + 0x26)) {
          uVar1 = FUN_715ec150(iVar3);
          cVar5 = (char)piVar7[0x1f7];
        }
LAB_7155befc:
        uVar4 = 0;
        if ((cVar5 == '\0') && (uVar4 = 0, piVar7[0x458] != iVar9)) {
          uVar4 = 1;
        }
      }
      if (piVar7[0x1f9] == 0) {
        if ((uVar1 | uVar4) == 1) {
          piVar7[0x1f9] = -1;
          goto LAB_7155bf34;
        }
        if ((char)*piVar11 != '\0') {
          FUN_7155b394(piVar7);
        }
      }
      else {
LAB_7155bf34:
        FUN_71558008(piVar7);
      }
      FUN_71558fb0(piVar7);
      if (*piVar7 != 0) {
        iVar2 = *(int *)(*piVar7 + 0x8c);
        if (iVar2 != 0) {
          unaff_r8 = *(int *)(iVar2 + 0x18);
        }
        if ((iVar2 != 0 && unaff_r8 != 0) && (unaff_r8 == piVar7[0x458])) {
          piVar10 = piVar7 + 0x229;
          iVar2 = 0;
          do {
            bVar12 = *(char *)((int)piVar7 + (0x892 - iVar2)) != '\0';
            if (bVar12) {
              piVar11 = (int *)piVar7[0x1fc - iVar2];
            }
            if (bVar12 && piVar11 != (int *)0x0) {
              uVar6 = 0;
              if ((char)piVar7[0x1f7] == '\0') {
                uVar6 = FUN_7155c254(piVar7);
                uVar6 = FUN_71ba21e8(uVar6,piVar7[0x48c]);
              }
              FUN_7155f918(unaff_r8,piVar11,piVar10,uVar6);
            }
            iVar2 = iVar2 + -1;
            piVar10 = piVar10 + 10;
          } while (iVar2 != -0x12);
        }
      }
    }
    puVar8 = (undefined4 *)*puVar8;
  } while( true );
}


// =========================================================================
// Function: FUN_7155c108
// Entry: 0x7155c108 | Size: 308 bytes
// =========================================================================

uint FUN_7155c108(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10d4);
  if (*(int *)(param_1 + 0x7f4) == 0) {
    uVar1 = 0;
  }
  if (*(int *)(param_1 + 0x7f0) != 0) {
    uVar1 = uVar1 | *(uint *)(param_1 + 0x10d0);
  }
  if (*(int *)(param_1 + 0x7f8) != 0) {
    uVar1 = uVar1 | *(uint *)(param_1 + 0x10d8);
  }
  if (*(int *)(param_1 + 0x7fc) != 0) {
    uVar1 = uVar1 | *(uint *)(param_1 + 0x10dc);
  }
  if (*(int *)(param_1 + 0x800) != 0) {
    uVar1 = uVar1 | *(uint *)(param_1 + 0x10e0);
  }
  if (*(int *)(param_1 + 0x804) != 0) {
    uVar1 = uVar1 | *(uint *)(param_1 + 0x10e4);
  }
  if (*(int *)(param_1 + 0x808) != 0) {
    uVar1 = uVar1 | *(uint *)(param_1 + 0x10e8);
  }
  if (*(int *)(param_1 + 0x80c) != 0) {
    uVar1 = uVar1 | *(uint *)(param_1 + 0x10ec);
  }
  if (*(int *)(param_1 + 0x810) != 0) {
    uVar1 = uVar1 | *(uint *)(param_1 + 0x10f0);
  }
  if (*(int *)(param_1 + 0x814) != 0) {
    uVar1 = uVar1 | *(uint *)(param_1 + 0x10f4);
  }
  if (*(int *)(param_1 + 0x818) != 0) {
    uVar1 = uVar1 | *(uint *)(param_1 + 0x10f8);
  }
  if (*(int *)(param_1 + 0x81c) != 0) {
    uVar1 = uVar1 | *(uint *)(param_1 + 0x10fc);
  }
  if (*(int *)(param_1 + 0x820) != 0) {
    uVar1 = uVar1 | *(uint *)(param_1 + 0x1100);
  }
  if (*(int *)(param_1 + 0x824) != 0) {
    uVar1 = uVar1 | *(uint *)(param_1 + 0x1104);
  }
  if (*(int *)(param_1 + 0x828) != 0) {
    uVar1 = uVar1 | *(uint *)(param_1 + 0x1108);
  }
  if (*(int *)(param_1 + 0x82c) != 0) {
    uVar1 = uVar1 | *(uint *)(param_1 + 0x110c);
  }
  if (*(int *)(param_1 + 0x830) != 0) {
    uVar1 = uVar1 | *(uint *)(param_1 + 0x1110);
  }
  if (*(int *)(param_1 + 0x834) != 0) {
    uVar1 = uVar1 | *(uint *)(param_1 + 0x1114);
  }
  return uVar1;
}


// =========================================================================
// Function: FUN_7155c254
// Entry: 0x7155c254 | Size: 444 bytes
// =========================================================================

void FUN_7155c254(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = FUN_71ba0b38(*(undefined4 *)(param_1 + 0x1118),0);
  uVar2 = *(undefined4 *)(param_1 + 0x111c);
  iVar3 = *(int *)(param_1 + 0x7f8);
  iVar4 = *(int *)(param_1 + 0x7fc);
  if (*(int *)(param_1 + 0x7f4) == 0) {
    uVar2 = 0x80000000;
  }
  if (*(int *)(param_1 + 0x7f0) == 0) {
    uVar1 = 0;
  }
  uVar1 = FUN_71ba0b38(uVar1,uVar2);
  uVar2 = *(undefined4 *)(param_1 + 0x1120);
  if (iVar3 == 0) {
    uVar2 = 0x80000000;
  }
  uVar1 = FUN_71ba0b38(uVar1,uVar2);
  uVar2 = *(undefined4 *)(param_1 + 0x1124);
  if (iVar4 == 0) {
    uVar2 = 0x80000000;
  }
  uVar1 = FUN_71ba0b38(uVar1,uVar2);
  uVar2 = *(undefined4 *)(param_1 + 0x1128);
  if (*(int *)(param_1 + 0x800) == 0) {
    uVar2 = 0x80000000;
  }
  uVar1 = FUN_71ba0b38(uVar1,uVar2);
  uVar2 = *(undefined4 *)(param_1 + 0x112c);
  if (*(int *)(param_1 + 0x804) == 0) {
    uVar2 = 0x80000000;
  }
  uVar1 = FUN_71ba0b38(uVar1,uVar2);
  uVar2 = *(undefined4 *)(param_1 + 0x1130);
  if (*(int *)(param_1 + 0x808) == 0) {
    uVar2 = 0x80000000;
  }
  uVar1 = FUN_71ba0b38(uVar1,uVar2);
  uVar2 = *(undefined4 *)(param_1 + 0x1134);
  if (*(int *)(param_1 + 0x80c) == 0) {
    uVar2 = 0x80000000;
  }
  uVar1 = FUN_71ba0b38(uVar1,uVar2);
  uVar2 = *(undefined4 *)(param_1 + 0x1138);
  if (*(int *)(param_1 + 0x810) == 0) {
    uVar2 = 0x80000000;
  }
  uVar1 = FUN_71ba0b38(uVar1,uVar2);
  uVar2 = *(undefined4 *)(param_1 + 0x113c);
  if (*(int *)(param_1 + 0x814) == 0) {
    uVar2 = 0x80000000;
  }
  uVar1 = FUN_71ba0b38(uVar1,uVar2);
  uVar2 = *(undefined4 *)(param_1 + 0x1140);
  if (*(int *)(param_1 + 0x818) == 0) {
    uVar2 = 0x80000000;
  }
  uVar1 = FUN_71ba0b38(uVar1,uVar2);
  uVar2 = *(undefined4 *)(param_1 + 0x1144);
  if (*(int *)(param_1 + 0x81c) == 0) {
    uVar2 = 0x80000000;
  }
  uVar1 = FUN_71ba0b38(uVar1,uVar2);
  uVar2 = *(undefined4 *)(param_1 + 0x1148);
  if (*(int *)(param_1 + 0x820) == 0) {
    uVar2 = 0x80000000;
  }
  uVar1 = FUN_71ba0b38(uVar1,uVar2);
  uVar2 = *(undefined4 *)(param_1 + 0x114c);
  if (*(int *)(param_1 + 0x824) == 0) {
    uVar2 = 0x80000000;
  }
  uVar1 = FUN_71ba0b38(uVar1,uVar2);
  uVar2 = *(undefined4 *)(param_1 + 0x1150);
  if (*(int *)(param_1 + 0x828) == 0) {
    uVar2 = 0x80000000;
  }
  uVar1 = FUN_71ba0b38(uVar1,uVar2);
  uVar2 = *(undefined4 *)(param_1 + 0x1154);
  if (*(int *)(param_1 + 0x82c) == 0) {
    uVar2 = 0x80000000;
  }
  uVar1 = FUN_71ba0b38(uVar1,uVar2);
  uVar2 = *(undefined4 *)(param_1 + 0x1158);
  if (*(int *)(param_1 + 0x830) == 0) {
    uVar2 = 0x80000000;
  }
  uVar1 = FUN_71ba0b38(uVar1,uVar2);
  uVar2 = *(undefined4 *)(param_1 + 0x115c);
  if (*(int *)(param_1 + 0x834) == 0) {
    uVar2 = 0x80000000;
  }
  FUN_71ba0b38(uVar1,uVar2);
  return;
}


// =========================================================================
// Function: FUN_7155c620
// Entry: 0x7155c620 | Size: 396 bytes
// =========================================================================

undefined4 FUN_7155c620(int param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar7;
  int iVar8;
  int *unaff_r5;
  
  uVar1 = DAT_711a3904;
  if (DAT_711a3904 != 0) {
    uVar6 = (param_1 * 0x5bd1e995 ^ (uint)(param_1 * 0x5bd1e995) >> 0x18) * 0x5bd1e995 ^ 0x6f47a654;
    uVar2 = (uVar6 ^ uVar6 >> 0xd) * 0x5bd1e995;
    uVar2 = uVar2 ^ uVar2 >> 0xf;
    uVar6 = DAT_711a3904 - (DAT_711a3904 >> 1 & 0x55555555);
    uVar6 = (uVar6 & 0x33333333) + (uVar6 >> 2 & 0x33333333);
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
    if (uVar6 < 2) {
      uVar7 = DAT_711a3904 - 1 & uVar2;
    }
    else {
      uVar7 = uVar2;
      if (DAT_711a3904 <= uVar2) {
        FUN_71ba33fc(uVar2,DAT_711a3904);
        uVar7 = extraout_r1;
      }
    }
    piVar3 = *(int **)(DAT_711a3900 + uVar7 * 4);
    if (piVar3 != (int *)0x0) {
      unaff_r5 = (int *)*piVar3;
    }
    if (piVar3 != (int *)0x0 && unaff_r5 != (int *)0x0) {
      do {
        uVar4 = unaff_r5[1];
        if (uVar4 == uVar2) {
          if (unaff_r5[2] == param_1) {
            iVar8 = unaff_r5[3];
            if (iVar8 == 0) {
              return 0;
            }
            if (*(char *)(iVar8 + 0x7dc) != '\0') {
              return 0;
            }
            uVar5 = FUN_7155c254(iVar8);
            uVar5 = FUN_71ba21e8(uVar5,*(undefined4 *)(iVar8 + 0x1230));
            return uVar5;
          }
        }
        else {
          if (uVar6 < 2) {
            uVar4 = uVar4 & uVar1 - 1;
          }
          else if (uVar1 <= uVar4) {
            FUN_71ba33fc(uVar4,uVar1);
            uVar4 = extraout_r1_00;
          }
          if (uVar4 != uVar7) {
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
// Function: FUN_7155c874
// Entry: 0x7155c874 | Size: 2732 bytes
// =========================================================================

void FUN_7155c874(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  int *extraout_r2;
  int *extraout_r2_00;
  int *extraout_r2_01;
  int *extraout_r2_02;
  int *extraout_r2_03;
  int iVar11;
  int *extraout_r2_04;
  int *extraout_r2_05;
  int *piVar12;
  int *extraout_r2_06;
  int *extraout_r2_07;
  int iVar13;
  undefined4 *puVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  int unaff_r6;
  undefined4 uVar18;
  int *piVar19;
  int *unaff_r8;
  undefined4 uVar20;
  int iVar21;
  bool bVar22;
  bool bVar23;
  int iStack_28;
  
  if ((char)param_1[0x1f7] == '\0') {
    imp___aeabi_memclr8(&DAT_700c3a38,0x60);
    DAT_700c3a98 = 0x3f800000;
    DAT_700c3a9c = 0;
    DAT_700c3aa0 = 0;
    DAT_700c3aa4 = 0;
    DAT_700c3aa8 = 0;
    DAT_700c3aac = 0x3f800000;
    DAT_700c3ab0 = 0;
    DAT_700c3ab4 = 0;
    DAT_700c3ab8 = 0;
    DAT_700c3abc = 0;
    DAT_700c3ac0 = 0x3f800000;
    DAT_700c3ac4 = 0;
    DAT_700c3ac8 = 0;
    DAT_700c3acc = 0;
    DAT_700c3ad0 = 0;
    DAT_700c3ad4 = 0x3f800000;
    DAT_700c3ad8 = 0;
    DAT_700c3adc = 0;
    DAT_700c3ae0 = 0;
    DAT_700c3ae4 = 0;
    DAT_700c3ae8 = 0x3f800000;
    DAT_700c3aec = 0;
    DAT_700c3af0 = 0;
    DAT_700c3af4 = 0;
    DAT_700c3af8 = 0;
    DAT_700c3afc = 0x3f800000;
    DAT_700c3b00 = 0;
    DAT_700c3b04 = 0;
    DAT_700c3b08 = 0;
    DAT_700c3b0c = 0;
    DAT_700c3b10 = 0x3f800000;
    DAT_700c3b14 = 0;
    DAT_700c3b18 = 0;
    DAT_700c3b1c = 0;
    DAT_700c3b20 = 0;
    DAT_700c3b24 = 0x3f800000;
    DAT_700c3b28 = 0;
    DAT_700c3b2c = 0;
    DAT_700c3b30 = 0;
    DAT_700c3b34 = 0;
    DAT_700c3b58 = 0;
    DAT_700c3b38 = 0x3f800000;
    DAT_700c3b3c = 0;
    DAT_700c3b40 = 0;
    DAT_700c3b44 = 0;
    DAT_700c3b48 = 0;
    DAT_700c3b4c = 0x3f800000;
    DAT_700c3b50 = 0;
    DAT_700c3b54 = 0;
    DAT_711a3930 = DAT_711a392c;
    iVar13 = *param_1;
    if (iVar13 != 0) {
      iVar2 = *(int *)(iVar13 + 0x8c);
      if (iVar2 != 0) {
        unaff_r6 = *(int *)(iVar2 + 0x18);
      }
      if (iVar2 != 0 && unaff_r6 != 0) {
        piVar12 = param_1 + 0x458;
        if (*piVar12 != unaff_r6) {
          param_1[0x1f9] = param_1[0x1f9] | 1;
          return;
        }
        uVar3 = FUN_7155c254(param_1);
        iVar2 = FUN_71ba21e8(uVar3,param_1[0x48c]);
        param_1[0x48d] = iVar2;
        iVar4 = FUN_71ba2cf0(iVar2,0);
        if (iVar4 == 0) {
          iVar4 = *(int *)(iVar13 + 0x8c);
          iVar13 = 0;
          if (iVar4 != 0) {
            iVar13 = *(int *)(iVar4 + 0x18);
          }
          if (iVar4 != 0 && iVar13 != 0) {
            piVar5 = (int *)FUN_714172f4();
            iVar13 = 0;
            if (piVar5 != (int *)0x0) {
              iVar13 = piVar5[2];
              unaff_r8 = piVar5;
            }
            if ((piVar5 != (int *)0x0 && iVar13 != 0) && (0 < unaff_r8[1])) {
              iVar4 = 0;
              iVar13 = 0x38;
              do {
                iVar11 = unaff_r8[2];
                uVar3 = FUN_71ba0b38(iVar2,*(undefined4 *)(iVar11 + iVar13));
                *(undefined4 *)(iVar11 + iVar13) = uVar3;
                iVar13 = iVar13 + 0x40;
                iVar4 = iVar4 + 1;
              } while (iVar4 < unaff_r8[1]);
            }
          }
        }
        if ((char)param_1[0x1fa] == '\0') {
          iVar13 = FUN_7155c108(param_1);
        }
        else {
          iVar13 = param_1[0x1fb];
        }
        FUN_713a5b3c(iVar13 != 0);
        puVar14 = (undefined4 *)*DAT_710eac1c;
        if (puVar14 != (undefined4 *)0x0) {
          unaff_r8 = puVar14 + 1;
          iVar13 = FUN_7141ee6c(*(undefined4 *)(unaff_r6 + 4));
          uVar16 = *(undefined4 *)(iVar13 + 0x34);
          uVar18 = *(undefined4 *)(iVar13 + 0x38);
          uVar3 = FUN_71ba240c(*(undefined4 *)(iVar13 + 0x30),*puVar14);
          uVar20 = puVar14[2];
          uVar16 = FUN_71ba240c(uVar16,*unaff_r8);
          uVar18 = FUN_71ba240c(uVar18,uVar20);
          uVar16 = FUN_71ba21e8(uVar16,uVar16);
          uVar3 = FUN_71ba21e8(uVar3,uVar3);
          uVar3 = FUN_71ba0b38(uVar3,uVar16);
          uVar16 = FUN_71ba21e8(uVar18,uVar18);
          uVar3 = FUN_71ba0b38(uVar16,uVar3);
          bVar1 = *(byte *)(param_1 + 0x491);
          if (bVar1 == 0) {
            iVar13 = FUN_71ba2d70(uVar3,0x44992000);
          }
          else {
            iVar13 = FUN_71ba2d10(uVar3,0x44440000);
          }
          if (iVar13 != 0) {
            *(byte *)(param_1 + 0x491) = bVar1 ^ 1;
          }
        }
        iVar13 = 0;
        iStack_28 = 0;
        FUN_71422cb0(unaff_r6,&DAT_7155d970,&iStack_28);
        piVar5 = extraout_r2;
        if (iStack_28 != 0) {
          piVar5 = (int *)((int)DAT_700c3a80 + 1);
          piVar19 = &DAT_700c3a38 + (int)DAT_700c3a80;
          DAT_700c3a80 = piVar5;
          *piVar19 = iStack_28;
        }
        do {
          piVar19 = DAT_700c3a80;
          if (*(char *)((int)param_1 + iVar13 + 0x880) != '\0') {
            iVar4 = param_1[iVar13 + 0x1fc];
            iVar2 = 0;
            if (iVar4 != 0) {
              iVar2 = *(int *)(iVar4 + 0x18);
            }
            if ((iVar4 != 0 && iVar2 != 0) && (piVar5 = *(int **)(iVar2 + 0x24), 0 < (int)piVar5)) {
              piVar9 = *(int **)(iVar2 + 0x20);
              iVar2 = 0;
              if (piVar9 != (int *)0x0) {
                iVar2 = *piVar9;
              }
              if (piVar9 != (int *)0x0 && iVar2 != 0) {
                piVar5 = piVar19;
                if (DAT_700c3a80 == (int *)0x0) {
                  bVar23 = false;
                }
                else {
                  if (DAT_700c3a38 == iVar2) goto LAB_7155cb98;
                  piVar19 = (int *)0x1;
                  do {
                    piVar9 = piVar19;
                    piVar19 = piVar9;
                    if (DAT_700c3a80 != piVar9) {
                      unaff_r6 = (&DAT_700c3a38)[(int)piVar9];
                      piVar19 = (int *)((int)piVar9 + 1);
                    }
                  } while (DAT_700c3a80 != piVar9 && unaff_r6 != iVar2);
                  bVar23 = piVar9 < DAT_700c3a80;
                }
                bVar22 = DAT_700c3a80 == (int *)0x11;
                if (DAT_700c3a80 < (int *)0x12) {
                  bVar22 = !bVar23;
                }
                if (bVar22) {
                  piVar19 = &DAT_700c3a38 + (int)DAT_700c3a80;
                  DAT_700c3a80 = (int *)((int)DAT_700c3a80 + 1);
                  *piVar19 = iVar2;
                }
              }
            }
          }
LAB_7155cb98:
          iVar13 = iVar13 + 1;
        } while (iVar13 != 0x12);
        piVar19 = (int *)0x0;
        if (param_1[0x464] != 0) {
          piVar19 = DAT_700c3a80;
        }
        if (param_1[0x464] != 0 && piVar19 != (int *)0x0) {
          unaff_r8 = (int *)0x0;
          do {
            piVar19 = DAT_711a392c;
            piVar9 = (int *)(&DAT_700c3a38)[(int)unaff_r8];
            piVar5 = (int *)*piVar9;
            if (DAT_711a3930 < DAT_711a3934) {
              *DAT_711a3930 = (int)piVar9;
              *(undefined1 *)(DAT_711a3930 + 2) = 0;
              piVar6 = DAT_711a3930 + 3;
              DAT_711a3930[1] = (int)piVar5;
            }
            else {
              iVar13 = (int)DAT_711a3930 - (int)DAT_711a392c;
              uVar10 = (iVar13 >> 2) * -0x55555555 + 1;
              if (0x15555555 < uVar10) goto LAB_7155d318;
              iVar2 = (int)DAT_711a3934 - (int)DAT_711a392c >> 2;
              if (uVar10 < (uint)(iVar2 * 0x55555556)) {
                uVar10 = iVar2 * 0x55555556;
              }
              if (0xaaaaaa9 < (uint)(iVar2 * -0x55555555)) {
                uVar10 = 0x15555555;
              }
              if (uVar10 == 0) {
                iVar2 = 0;
              }
              else {
                if (0x15555555 < uVar10) goto LAB_7155d31c;
                iVar2 = thunk_MwhHq(uVar10 * 0xc);
              }
              piVar6 = (int *)(iVar2 + (iVar13 >> 2) * 4);
              *piVar6 = (int)piVar9;
              piVar8 = (int *)((int)piVar6 - iVar13);
              *(undefined1 *)(piVar6 + 2) = 0;
              piVar6[1] = (int)piVar5;
              imp___aeabi_memcpy4(piVar8,piVar19,iVar13);
              piVar6 = piVar6 + 3;
              DAT_711a3934 = (int *)(iVar2 + uVar10 * 0xc);
              piVar5 = extraout_r2_00;
              DAT_711a392c = piVar8;
              if (piVar19 != (int *)0x0) {
                DAT_711a3930 = piVar6;
                thunk_qNQrlu(piVar19);
                piVar5 = extraout_r2_01;
              }
            }
            unaff_r8 = (int *)((int)unaff_r8 + 1);
            DAT_711a3930 = piVar6;
            *piVar9 = param_1[0x464];
          } while (unaff_r8 < DAT_700c3a80);
        }
        piVar19 = DAT_711a392c;
        if (param_1[0x465] != 0) {
          iVar2 = param_1[0x20d];
          iVar13 = 0;
          if (iVar2 != 0) {
            iVar13 = *(int *)(iVar2 + 0x18);
          }
          if ((iVar2 != 0 && iVar13 != 0) && (0 < *(int *)(iVar13 + 0x24))) {
            puVar14 = *(undefined4 **)(iVar13 + 0x20);
            if (puVar14 != (undefined4 *)0x0) {
              unaff_r8 = (int *)*puVar14;
            }
            if (puVar14 != (undefined4 *)0x0 && unaff_r8 != (int *)0x0) {
              iVar13 = *unaff_r8;
              if (DAT_711a3930 < DAT_711a3934) {
                *DAT_711a3930 = (int)unaff_r8;
                *(undefined1 *)(DAT_711a3930 + 2) = 0;
                piVar6 = DAT_711a3930 + 3;
                DAT_711a3930[1] = iVar13;
              }
              else {
                iVar2 = (int)DAT_711a3930 - (int)DAT_711a392c;
                uVar10 = (iVar2 >> 2) * -0x55555555 + 1;
                if (0x15555555 < uVar10) {
LAB_7155d318:
                  FUN_7155e9c8();
LAB_7155d31c:
                    /* WARNING: Subroutine does not return */
                  FUN_712f6cf0();
                }
                iVar11 = 0;
                iVar4 = (int)DAT_711a3934 - (int)DAT_711a392c >> 2;
                if (uVar10 < (uint)(iVar4 * 0x55555556)) {
                  uVar10 = iVar4 * 0x55555556;
                }
                if (0xaaaaaa9 < (uint)(iVar4 * -0x55555555)) {
                  uVar10 = 0x15555555;
                }
                if (uVar10 != 0) {
                  if (0x15555555 < uVar10) goto LAB_7155d31c;
                  iVar11 = thunk_MwhHq(uVar10 * 0xc);
                }
                piVar6 = (int *)(iVar11 + (iVar2 >> 2) * 4);
                *piVar6 = (int)unaff_r8;
                piVar6[1] = iVar13;
                piVar9 = (int *)((int)piVar6 - iVar2);
                *(undefined1 *)(piVar6 + 2) = 0;
                imp___aeabi_memcpy4(piVar9,piVar19,iVar2);
                piVar6 = piVar6 + 3;
                DAT_711a3934 = (int *)(iVar11 + uVar10 * 0xc);
                piVar5 = extraout_r2_06;
                DAT_711a392c = piVar9;
                if (piVar19 != (int *)0x0) {
                  DAT_711a3930 = piVar6;
                  thunk_qNQrlu(piVar19);
                  piVar5 = extraout_r2_07;
                }
              }
              DAT_711a3930 = piVar6;
              *unaff_r8 = param_1[0x465];
            }
          }
        }
        piVar19 = param_1 + 0x47a;
        iVar13 = 0;
        do {
          piVar9 = DAT_711a392c;
          if (piVar19[-0x27e] != 0) {
            bVar23 = piVar19[-0x12] == 0;
            if (bVar23) {
              piVar5 = (int *)*piVar19;
            }
            bVar22 = piVar5 != (int *)0x0;
            if (!bVar23 || bVar22) {
              piVar5 = *(int **)(piVar19[-0x27e] + 0x18);
            }
            if (((!bVar23 || bVar22) && piVar5 != (int *)0x0) &&
               (uVar10 = (uint)*(byte *)((int)param_1 + iVar13 + 0x880), (int)uVar10 < piVar5[9])) {
              piVar5 = (int *)piVar5[8];
              if (piVar5 != (int *)0x0) {
                unaff_r8 = (int *)piVar5[uVar10];
              }
              if (piVar5 != (int *)0x0 && unaff_r8 != (int *)0x0) {
                if (piVar19[-0x12] != 0) {
                  iVar2 = *unaff_r8;
                  if (DAT_711a3930 < DAT_711a3934) {
                    *DAT_711a3930 = (int)unaff_r8;
                    *(undefined1 *)(DAT_711a3930 + 2) = 0;
                    piVar8 = DAT_711a3930 + 3;
                    DAT_711a3930[1] = iVar2;
                  }
                  else {
                    iVar11 = (int)DAT_711a3930 - (int)DAT_711a392c;
                    iVar4 = iVar11 >> 2;
                    uVar10 = iVar4 * -0x55555555 + 1;
                    if (0x15555555 < uVar10) goto LAB_7155d318;
                    iVar7 = (int)DAT_711a3934 - (int)DAT_711a392c >> 2;
                    if (uVar10 < (uint)(iVar7 * 0x55555556)) {
                      uVar10 = iVar7 * 0x55555556;
                    }
                    if (0xaaaaaa9 < (uint)(iVar7 * -0x55555555)) {
                      uVar10 = 0x15555555;
                    }
                    if (uVar10 == 0) {
                      iVar7 = 0;
                    }
                    else {
                      if (0x15555555 < uVar10) goto LAB_7155d31c;
                      iVar7 = thunk_MwhHq(uVar10 * 0xc);
                    }
                    puVar14 = (undefined4 *)(iVar7 + iVar4 * 4);
                    *puVar14 = unaff_r8;
                    *(undefined1 *)(puVar14 + 2) = 0;
                    piVar6 = (int *)((int)puVar14 - iVar11);
                    puVar14[1] = iVar2;
                    imp___aeabi_memcpy4(piVar6,piVar9);
                    DAT_711a3934 = (int *)(iVar7 + uVar10 * 0xc);
                    piVar8 = puVar14 + 3;
                    piVar5 = extraout_r2_02;
                    DAT_711a392c = piVar6;
                    if (piVar9 != (int *)0x0) {
                      DAT_711a3930 = piVar8;
                      thunk_qNQrlu(piVar9);
                      piVar5 = extraout_r2_03;
                    }
                  }
                  DAT_711a3930 = piVar8;
                  *unaff_r8 = piVar19[-0x12];
                }
                piVar9 = DAT_711a392c;
                if (*piVar19 != 0) {
                  iVar2 = unaff_r8[7];
                  if (DAT_711a3930 < DAT_711a3934) {
                    *DAT_711a3930 = (int)unaff_r8;
                    *(undefined1 *)(DAT_711a3930 + 2) = 1;
                    piVar6 = DAT_711a3930 + 3;
                    DAT_711a3930[1] = iVar2;
                  }
                  else {
                    iVar11 = (int)DAT_711a3930 - (int)DAT_711a392c;
                    iVar4 = iVar11 >> 2;
                    uVar10 = iVar4 * -0x55555555 + 1;
                    if (0x15555555 < uVar10) goto LAB_7155d318;
                    iVar7 = (int)DAT_711a3934 - (int)DAT_711a392c >> 2;
                    if (uVar10 < (uint)(iVar7 * 0x55555556)) {
                      uVar10 = iVar7 * 0x55555556;
                    }
                    if (0xaaaaaa9 < (uint)(iVar7 * -0x55555555)) {
                      uVar10 = 0x15555555;
                    }
                    if (uVar10 == 0) {
                      iVar7 = 0;
                    }
                    else {
                      if (0x15555555 < uVar10) goto LAB_7155d31c;
                      iVar7 = thunk_MwhHq(uVar10 * 0xc);
                    }
                    puVar14 = (undefined4 *)(iVar7 + iVar4 * 4);
                    *puVar14 = unaff_r8;
                    *(undefined1 *)(puVar14 + 2) = 1;
                    piVar8 = (int *)((int)puVar14 - iVar11);
                    puVar14[1] = iVar2;
                    imp___aeabi_memcpy4(piVar8,piVar9);
                    DAT_711a3934 = (int *)(iVar7 + uVar10 * 0xc);
                    piVar6 = puVar14 + 3;
                    piVar5 = extraout_r2_04;
                    DAT_711a392c = piVar8;
                    if (piVar9 != (int *)0x0) {
                      DAT_711a3930 = piVar6;
                      thunk_qNQrlu(piVar9);
                      piVar5 = extraout_r2_05;
                    }
                  }
                  DAT_711a3930 = piVar6;
                  unaff_r8[7] = *piVar19;
                }
              }
            }
          }
          iVar13 = iVar13 + 1;
          piVar19 = piVar19 + 1;
          if (iVar13 == 0x12) {
            iVar13 = param_1[0x491];
            if ((char)iVar13 == '\0') {
              iVar2 = param_1[0x463];
              if (iVar2 != 0) {
                piVar5 = param_1 + 0x1c2;
                do {
                  iVar4 = DAT_700c3a84;
                  piVar12 = piVar12 + 1;
                  if (*piVar12 != 0) {
                    iVar15 = piVar5[1];
                    iVar17 = *piVar5;
                    iVar7 = piVar5[2];
                    iVar11 = DAT_700c3a84 * 0x14;
                    iVar21 = piVar5[3];
                    DAT_700c3a84 = DAT_700c3a84 + 1;
                    *(int *)(&DAT_700c3a88 + iVar11) = *piVar12;
                    *(int *)(&DAT_700c3a8c + iVar11) = iVar17;
                    *(int *)(&DAT_700c3a90 + iVar11) = iVar15;
                    *(int *)(&DAT_700c3a94 + iVar11) = iVar7;
                    (&DAT_700c3a98)[iVar4 * 5] = iVar21;
                  }
                  piVar5 = piVar5 + 5;
                  iVar2 = iVar2 + -1;
                } while (iVar2 != 0);
              }
              if (param_1[0x466] != 0) {
                iVar4 = param_1[0x20d];
                iVar2 = 0;
                if (iVar4 != 0) {
                  iVar2 = *(int *)(iVar4 + 0x18);
                }
                if ((iVar4 != 0 && iVar2 != 0) && (0 < *(int *)(iVar2 + 0x24))) {
                  piVar12 = *(int **)(iVar2 + 0x20);
                  iVar2 = 0;
                  if (piVar12 != (int *)0x0) {
                    iVar2 = *piVar12;
                  }
                  if (piVar12 != (int *)0x0 && iVar2 != 0) {
                    DAT_700c3b50 = iVar2;
                    DAT_700c3b54 = param_1[0x466];
                  }
                }
              }
            }
            DAT_700c3b58 = param_1[0x467];
            if ((char)iVar13 != '\0') {
              DAT_700c3b58 = 0;
            }
            return;
          }
        } while( true );
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_7155dba8
// Entry: 0x7155dba8 | Size: 508 bytes
// =========================================================================

void FUN_7155dba8(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int unaff_r8;
  int iVar7;
  
  if ((char)param_1[0x1f7] != '\0') {
    return;
  }
  while (piVar1 = DAT_711a392c, piVar5 = DAT_711a3930, DAT_711a3930 != DAT_711a392c) {
    while( true ) {
      DAT_711a3930 = piVar5 + -3;
      if ((char)piVar5[-1] == '\0') break;
      ((int *)*DAT_711a3930)[7] = piVar5[-2];
      piVar5 = DAT_711a3930;
      if (DAT_711a3930 == piVar1) goto LAB_7155dc10;
    }
    *(int *)*DAT_711a3930 = piVar5[-2];
  }
LAB_7155dc10:
  imp___aeabi_memclr8(&DAT_700c3a38,0x60);
  DAT_700c3a98 = 0x3f800000;
  DAT_700c3aac = 0x3f800000;
  DAT_700c3ac0 = 0x3f800000;
  DAT_700c3ad4 = 0x3f800000;
  DAT_700c3ae8 = 0x3f800000;
  DAT_700c3afc = 0x3f800000;
  DAT_700c3b10 = 0x3f800000;
  DAT_700c3b24 = 0x3f800000;
  DAT_700c3b38 = 0x3f800000;
  DAT_700c3b4c = 0x3f800000;
  iVar7 = param_1[0x48d];
  DAT_700c3a9c = 0;
  DAT_700c3aa0 = 0;
  DAT_700c3aa4 = 0;
  DAT_700c3aa8 = 0;
  DAT_700c3ab0 = 0;
  DAT_700c3ab4 = 0;
  DAT_700c3ab8 = 0;
  DAT_700c3abc = 0;
  DAT_700c3ac4 = 0;
  DAT_700c3ac8 = 0;
  DAT_700c3acc = 0;
  DAT_700c3ad0 = 0;
  DAT_700c3ad8 = 0;
  DAT_700c3adc = 0;
  DAT_700c3ae0 = 0;
  DAT_700c3ae4 = 0;
  DAT_700c3aec = 0;
  DAT_700c3af0 = 0;
  DAT_700c3af4 = 0;
  DAT_700c3af8 = 0;
  DAT_700c3b00 = 0;
  DAT_700c3b04 = 0;
  DAT_700c3b08 = 0;
  DAT_700c3b0c = 0;
  DAT_700c3b14 = 0;
  DAT_700c3b18 = 0;
  DAT_700c3b1c = 0;
  DAT_700c3b20 = 0;
  DAT_700c3b28 = 0;
  DAT_700c3b2c = 0;
  DAT_700c3b30 = 0;
  DAT_700c3b34 = 0;
  DAT_700c3b58 = 0;
  DAT_700c3b3c = 0;
  DAT_700c3b40 = 0;
  DAT_700c3b44 = 0;
  DAT_700c3b48 = 0;
  DAT_700c3b50 = 0;
  DAT_700c3b54 = 0;
  iVar2 = FUN_71ba2cf0(iVar7,0);
  if ((iVar2 == 0) && (*param_1 != 0)) {
    iVar3 = *(int *)(*param_1 + 0x8c);
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = *(int *)(iVar3 + 0x18);
    }
    if (iVar3 != 0 && iVar2 != 0) {
      iVar3 = FUN_714172f4();
      iVar2 = 0;
      if (iVar3 != 0) {
        iVar2 = *(int *)(iVar3 + 8);
        unaff_r8 = iVar3;
      }
      if ((iVar3 != 0 && iVar2 != 0) && (0 < *(int *)(unaff_r8 + 4))) {
        iVar2 = 0;
        iVar3 = 0x38;
        do {
          iVar6 = *(int *)(unaff_r8 + 8);
          uVar4 = FUN_71ba240c(*(undefined4 *)(iVar6 + iVar3),iVar7);
          *(undefined4 *)(iVar6 + iVar3) = uVar4;
          iVar3 = iVar3 + 0x40;
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(unaff_r8 + 4));
      }
    }
  }
  param_1[0x48d] = 0;
  FUN_713a5b3c(0,0);
  return;
}


// =========================================================================
// Function: FUN_7155dea8
// Entry: 0x7155dea8 | Size: 744 bytes
// =========================================================================

void FUN_7155dea8(int *param_1,int *param_2,int *param_3,undefined4 param_4,undefined4 *param_5)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint extraout_r1;
  int *piVar8;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  int *piVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint unaff_r10;
  
  iVar11 = *param_3;
  uVar7 = iVar11 * 0x5bd1e995;
  uVar10 = param_2[1];
  uVar7 = (uVar7 ^ uVar7 >> 0x18) * 0x5bd1e995 ^ 0x6f47a654;
  uVar7 = (uVar7 ^ uVar7 >> 0xd) * 0x5bd1e995;
  uVar7 = uVar7 ^ uVar7 >> 0xf;
  if (uVar10 != 0) {
    uVar2 = uVar10 - (uVar10 >> 1 & 0x55555555);
    uVar2 = (uVar2 & 0x33333333) + (uVar2 >> 2 & 0x33333333);
    uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
    if (uVar2 < 2) {
      unaff_r10 = uVar7 & uVar10 - 1;
    }
    else {
      unaff_r10 = uVar7;
      if (uVar10 <= uVar7) {
        FUN_71ba33fc(uVar7,uVar10);
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
        if (uVar6 == uVar7) {
          if (piVar9[2] == iVar11) {
            uVar1 = 0;
            goto LAB_7155e174;
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
  piVar9 = (int *)thunk_MwhHq(0x10);
  piVar8 = (int *)*param_5;
  piVar9[1] = uVar7;
  *piVar9 = 0;
  iVar11 = *piVar8;
  piVar9[3] = 0;
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
    FUN_7155e314(param_2,uVar2);
    uVar10 = param_2[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_r10 = uVar10 - 1 & uVar7;
    }
    else {
      unaff_r10 = uVar7;
      if (uVar10 <= uVar7) {
        FUN_71ba33fc(uVar7,uVar10);
        unaff_r10 = extraout_r1_01;
      }
    }
  }
  iVar11 = *param_2;
  piVar8 = *(int **)(iVar11 + unaff_r10 * 4);
  if (piVar8 == (int *)0x0) {
    piVar8 = param_2 + 2;
    *piVar9 = *piVar8;
    *piVar8 = (int)piVar9;
    *(int **)(iVar11 + unaff_r10 * 4) = piVar8;
    if (*piVar9 == 0) goto LAB_7155e164;
    uVar7 = *(uint *)(*piVar9 + 4);
    if ((uVar10 & uVar10 - 1) == 0) {
      uVar7 = uVar7 & uVar10 - 1;
    }
    else if (uVar10 <= uVar7) {
      FUN_71ba33fc(uVar7,uVar10);
      uVar7 = extraout_r1_02;
    }
    piVar8 = (int *)(*param_2 + uVar7 * 4);
  }
  else {
    *piVar9 = *piVar8;
  }
  *piVar8 = (int)piVar9;
LAB_7155e164:
  param_2[3] = param_2[3] + 1;
  uVar1 = 1;
LAB_7155e174:
  *(undefined1 *)(param_1 + 1) = uVar1;
  *param_1 = (int)piVar9;
  return;
}


// =========================================================================
// Function: FUN_7155e314
// Entry: 0x7155e314 | Size: 692 bytes
// =========================================================================

void FUN_7155e314(int *param_1,uint param_2)

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
      if (uVar9 < uVar6) goto LAB_7155e360;
    }
    return;
  }
LAB_7155e360:
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
// Function: FUN_7155e764
// Entry: 0x7155e764 | Size: 476 bytes
// =========================================================================

void FUN_7155e764(undefined4 *param_1,int *param_2,int *param_3)

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
    if (uVar4 == uVar6) goto LAB_7155e8ac;
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
    if (uVar4 == uVar6) goto LAB_7155e8ac;
  }
  *(undefined4 *)(iVar7 + uVar6 * 4) = 0;
LAB_7155e8ac:
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
// Function: FUN_7155e9c8
// Entry: 0x7155e9c8 | Size: 20 bytes
// =========================================================================

void FUN_7155e9c8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_7155ec14
// Entry: 0x7155ec14 | Size: 132 bytes
// =========================================================================

uint FUN_7155ec14(void)

{
  uint uVar1;
  
  uVar1 = FUN_71415d8c(4,0x15ceaa9,&LAB_7155edc8,FUN_7155ee14,FUN_7155eea0);
  DAT_700c3b5c = uVar1;
  if (-1 < (int)uVar1) {
    FUN_714161e4(0x15ceaa9,FUN_7155efa4,&DAT_7155f248,&LAB_7155f264);
  }
  return ~uVar1 >> 0x1f;
}


// =========================================================================
// Function: FUN_7155ee14
// Entry: 0x7155ee14 | Size: 56 bytes
// =========================================================================

void FUN_7155ee14(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_700c3b5c;
  if (*(int *)(param_1 + DAT_700c3b5c) != 0) {
    thunk_dGrRHE(*(int *)(param_1 + DAT_700c3b5c));
  }
  *(undefined4 *)(param_1 + iVar1) = 0;
  return;
}


// =========================================================================
// Function: FUN_7155eea0
// Entry: 0x7155eea0 | Size: 120 bytes
// =========================================================================

int FUN_7155eea0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  
  iVar1 = DAT_700c3b5c;
  if (*(int *)(param_1 + DAT_700c3b5c) != 0) {
    thunk_dGrRHE();
  }
  *(undefined4 *)(param_1 + iVar1) = 0;
  bVar5 = *(int *)(param_2 + iVar1) != 0;
  uVar2 = 0;
  if (bVar5) {
    uVar2 = *(uint *)(param_2 + 0x14);
  }
  if (bVar5 && uVar2 != 0) {
    iVar3 = uVar2 << 2;
    if (0x3fffffff < uVar2) {
      iVar3 = -1;
    }
    uVar4 = thunk__IBDl(iVar3);
    *(undefined4 *)(param_1 + iVar1) = uVar4;
    imp___aeabi_memcpy(uVar4,*(undefined4 *)(param_2 + iVar1),uVar2 << 2);
    return param_1;
  }
  return param_1;
}


// =========================================================================
// Function: FUN_7155efa4
// Entry: 0x7155efa4 | Size: 360 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7155efa4(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iStack_128;
  undefined1 auStack_124 [256];
  int iStack_24;
  
  iStack_24 = _ext___stack_chk_guard;
  iStack_128 = 0;
  if ((3 < param_2) &&
     (iVar2 = FUN_71426d90(param_1,&iStack_128,4), iVar1 = DAT_700c3b5c, iVar2 == 4)) {
    uVar6 = param_2 - 4;
    if (iStack_128 == 0) {
      if (uVar6 == 0) goto LAB_7155f0c8;
    }
    else {
      uVar5 = *(uint *)(param_3 + 0x14);
      uVar3 = 0;
      if (0 < (int)uVar5) {
        uVar3 = uVar5 << 2;
      }
      if (uVar6 == uVar3) {
        if (uVar6 != 0) {
          if (*(int *)(param_3 + DAT_700c3b5c) != 0) {
            thunk_dGrRHE();
            uVar5 = *(uint *)(param_3 + 0x14);
          }
          iVar2 = uVar5 << 2;
          if (0x3fffffff < uVar5) {
            iVar2 = -1;
          }
          uVar4 = thunk__IBDl(iVar2);
          *(undefined4 *)(param_3 + iVar1) = uVar4;
          uVar3 = FUN_71426d90(param_1,uVar4,uVar6);
          if (uVar3 == uVar6) {
            *(uint *)(param_3 + 8) = *(uint *)(param_3 + 8) | 0x2000;
          }
          else {
            if (*(int *)(param_3 + iVar1) != 0) {
              thunk_dGrRHE();
            }
            *(undefined4 *)(param_3 + iVar1) = 0;
          }
        }
        goto LAB_7155f0c8;
      }
    }
    do {
      if ((int)uVar6 < 1) break;
      uVar3 = uVar6;
      if (0xff < uVar6) {
        uVar3 = 0x100;
      }
      uVar5 = FUN_71426d90(param_1,auStack_124,uVar3);
      uVar6 = uVar6 - uVar3;
    } while (uVar5 == uVar3);
  }
LAB_7155f0c8:
  if (_ext___stack_chk_guard == iStack_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail(iStack_24);
}


// =========================================================================
// Function: FUN_7155f284
// Entry: 0x7155f284 | Size: 36 bytes
// =========================================================================

undefined4 FUN_7155f284(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (-1 < DAT_700c3b5c) {
    uVar1 = *(undefined4 *)(param_1 + DAT_700c3b5c);
  }
  return uVar1;
}


// =========================================================================
// Function: FUN_7155f2e0
// Entry: 0x7155f2e0 | Size: 124 bytes
// =========================================================================

undefined4 FUN_7155f2e0(uint param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  int iVar1;
  undefined4 uStack_c;
  
  if (param_1 < 20000) {
    iVar1 = *(int *)(DAT_70c39074 + param_1 * 4);
    if (iVar1 != 0) {
      param_4 = *(char **)(iVar1 + 0x34);
    }
    if (iVar1 != 0 && param_4 != (char *)0x0) {
      if (*param_4 == '\x02') {
        uStack_c = 0;
        FUN_71422cb0(param_4,&LAB_7155f3d0,&uStack_c);
        return uStack_c;
      }
      return 0;
    }
  }
  return 0;
}


// =========================================================================
// Function: FUN_7155f3f4
// Entry: 0x7155f3f4 | Size: 260 bytes
// =========================================================================

int FUN_7155f3f4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int unaff_r5;
  int iStack_1c;
  
  iVar4 = 0;
  if (param_1 != 0) {
    iVar1 = param_1;
    if (param_2 != 0) {
      iVar1 = *(int *)(param_2 + 0x18);
      unaff_r5 = param_1;
    }
    if (((param_2 != 0 && iVar1 != 0) && (iVar1 = FUN_714172f4(unaff_r5), iVar1 != 0)) &&
       (iVar2 = FUN_71417f58(*(undefined4 *)(param_2 + 0x18)), iVar2 != 0)) {
      iStack_1c = 0;
      FUN_71422cb0(unaff_r5,&LAB_7155f3d0,&iStack_1c);
      iVar4 = FUN_714217e8(param_2);
      if (iVar4 != 0) {
        FUN_71421c00(unaff_r5,iVar4);
        iVar2 = iStack_1c;
        if (iStack_1c == 0) {
          iVar2 = unaff_r5;
        }
        FUN_71422468(iVar4,*(undefined4 *)(iVar2 + 4));
        FUN_71418fac(iVar4,iVar1);
        uVar3 = FUN_714197f4(param_2);
        if (uVar3 < 2) {
          uVar3 = 1;
        }
        FUN_714193d8(iVar4,uVar3);
        if (iStack_1c != 0 && iStack_1c != iVar4) {
          FUN_71422038(unaff_r5);
          FUN_71421c00(unaff_r5,iStack_1c);
        }
      }
    }
  }
  return iVar4;
}


// =========================================================================
// Function: FUN_7155f664
// Entry: 0x7155f664 | Size: 52 bytes
// =========================================================================

void FUN_7155f664(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_71422038(*(int *)(param_1 + 0x3c),param_1);
  }
  FUN_714230f4(param_1);
  return;
}


// =========================================================================
// Function: FUN_7155f6e8
// Entry: 0x7155f6e8 | Size: 224 bytes
// =========================================================================

int FUN_7155f6e8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iStack_1c;
  
  iVar3 = 0;
  if (param_1 != 0) {
    if (param_2 != 0) {
      param_3 = *(int *)(param_2 + 0x18);
    }
    if ((param_2 != 0 && param_3 != 0) && (iVar1 = FUN_71417f58(param_3), iVar1 == 0)) {
      iStack_1c = 0;
      FUN_71422cb0(param_1,&LAB_7155f3d0,&iStack_1c);
      iVar1 = FUN_714217e8(param_2);
      if (iVar1 != 0) {
        FUN_71421c00(param_1,iVar1);
        iVar2 = FUN_7141d104();
        if (iVar2 == 0) {
          FUN_71422038(param_1,iVar1);
          FUN_714230f4(iVar1);
        }
        else {
          FUN_71422468(iVar1,iVar2);
          iVar3 = iVar1;
          if (iStack_1c != 0 && iStack_1c != iVar1) {
            FUN_71422038(param_1);
            FUN_71421c00(param_1,iStack_1c);
          }
        }
      }
    }
  }
  return iVar3;
}


// =========================================================================
// Function: FUN_7155f918
// Entry: 0x7155f918 | Size: 488 bytes
// =========================================================================

void FUN_7155f918(int param_1,int param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
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
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 != 0) {
    if ((((-1 < *param_3) && (iVar1 = FUN_714172f4(), iVar1 != 0)) &&
        (iVar2 = FUN_71416a78(iVar1,*param_3), -1 < iVar2)) &&
       (iVar5 = *(int *)(param_2 + 4), iVar5 != 0)) {
      puVar3 = (undefined4 *)(*(int *)(iVar1 + 8) + iVar2 * 0x40);
      uStack_68 = *puVar3;
      uStack_64 = puVar3[1];
      uStack_60 = puVar3[2];
      uStack_5c = puVar3[3];
      uStack_58 = puVar3[4];
      uStack_54 = puVar3[5];
      uStack_50 = puVar3[6];
      uStack_4c = puVar3[7];
      uStack_48 = puVar3[8];
      uStack_44 = puVar3[9];
      uStack_40 = puVar3[10];
      uStack_3c = puVar3[0xb];
      uStack_38 = puVar3[0xc];
      uStack_34 = puVar3[0xd];
      uStack_30 = puVar3[0xe];
      uStack_2c = puVar3[0xf];
      uStack_30 = FUN_71ba0b38(uStack_30,param_4);
      iStack_74 = param_3[1];
      iStack_70 = param_3[2];
      iStack_6c = param_3[3];
      uVar4 = FUN_7136cdfc(&uStack_80);
      FUN_715eea98(uVar4,&uStack_68,&iStack_74);
      iVar2 = param_3[4];
      uStack_34 = uStack_7c;
      uStack_30 = uStack_78;
      uStack_38 = uStack_80;
      iVar1 = FUN_71ba2cf0(iVar2,0);
      if (iVar1 == 0) {
        FUN_7141c000(&uStack_68,&DAT_700c3058,iVar2,1);
      }
      iVar2 = param_3[5];
      iVar1 = FUN_71ba2cf0(iVar2,0);
      if (iVar1 == 0) {
        FUN_7141c000(&uStack_68,&DAT_700c3064,iVar2,1);
      }
      iVar2 = param_3[6];
      iVar1 = FUN_71ba2cf0(iVar2,0);
      if (iVar1 == 0) {
        FUN_7141c000(&uStack_68,&DAT_700c3070,iVar2,1);
      }
      iStack_8c = param_3[7];
      iStack_88 = param_3[8];
      iStack_84 = param_3[9];
      FUN_715ef454(&uStack_68,&iStack_8c);
      *(undefined4 *)(iVar5 + 0x10) = uStack_68;
      *(undefined4 *)(iVar5 + 0x14) = uStack_64;
      *(undefined4 *)(iVar5 + 0x18) = uStack_60;
      *(undefined4 *)(iVar5 + 0x1c) = uStack_5c;
      *(undefined4 *)(iVar5 + 0x20) = uStack_58;
      *(undefined4 *)(iVar5 + 0x24) = uStack_54;
      *(undefined4 *)(iVar5 + 0x28) = uStack_50;
      *(undefined4 *)(iVar5 + 0x2c) = uStack_4c;
      *(undefined4 *)(iVar5 + 0x30) = uStack_48;
      *(undefined4 *)(iVar5 + 0x34) = uStack_44;
      *(undefined4 *)(iVar5 + 0x38) = uStack_40;
      *(undefined4 *)(iVar5 + 0x3c) = uStack_3c;
      *(undefined4 *)(iVar5 + 0x40) = uStack_38;
      *(undefined4 *)(iVar5 + 0x44) = uStack_34;
      *(undefined4 *)(iVar5 + 0x48) = uStack_30;
      *(undefined4 *)(iVar5 + 0x4c) = uStack_2c;
      FUN_7141bbe4();
      FUN_7141b7c0(iVar5);
    }
  }
  return;
}


// =========================================================================
// Function: FUN_7155fce0
// Entry: 0x7155fce0 | Size: 76 bytes
// =========================================================================

void FUN_7155fce0(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 != 0 && param_2 != 0) {
    iVar1 = *(int *)(param_2 + 4);
    FUN_71422038();
    FUN_71422468(param_2,0);
    FUN_714230f4(param_2);
    if (iVar1 != 0) {
      FUN_7141d500(iVar1);
      return;
    }
  }
  return;
}


// =========================================================================
// Function: thunk_FUN_71560058
// Entry: 0x71560044 | Size: 12 bytes
// =========================================================================

void thunk_FUN_71560058(void)

{
  FUN_71560058();
  return;
}


// =========================================================================
// Function: FUN_71560058
// Entry: 0x71560058 | Size: 32 bytes
// =========================================================================

void FUN_71560058(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x48) = param_2;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x4c) = param_3;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x50) = param_4;
  }
  return;
}


// =========================================================================
// Function: thunk_FUN_715600a4
// Entry: 0x71560090 | Size: 12 bytes
// =========================================================================

void thunk_FUN_715600a4(void)

{
  FUN_715600a4();
  return;
}


// =========================================================================
// Function: FUN_715600a4
// Entry: 0x715600a4 | Size: 32 bytes
// =========================================================================

void FUN_715600a4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x54) = param_2;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x58) = param_3;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x5c) = param_4;
  }
  return;
}


// =========================================================================
// Function: thunk_FUN_715600f0
// Entry: 0x715600dc | Size: 12 bytes
// =========================================================================

void thunk_FUN_715600f0(void)

{
  FUN_715600f0();
  return;
}


// =========================================================================
// Function: FUN_715600f0
// Entry: 0x715600f0 | Size: 224 bytes
// =========================================================================

void FUN_715600f0(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  if (param_2 != (undefined4 *)0x0) {
    param_4 = *(undefined4 **)(*(int *)(param_1 + 4) + 0x14);
  }
  if (param_2 != (undefined4 *)0x0 && param_4 != (undefined4 *)0x0) {
    *param_2 = *param_4;
    param_2[1] = *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + 4);
    param_2[2] = *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + 8);
    param_2[4] = *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + 0x10);
    param_2[5] = *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + 0x14);
    param_2[6] = *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + 0x18);
    param_2[8] = *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + 0x20);
    param_2[9] = *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + 0x24);
    param_2[10] = *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + 0x28);
    param_2[0xc] = *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + 0x30);
    param_2[0xd] = *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + 0x34);
    param_2[0xe] = *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + 0x38);
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_715601e8
// Entry: 0x715601e8 | Size: 28 bytes
// =========================================================================

void FUN_715601e8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    if ((1 < *(ushort *)((int)piVar1 + 0x26) - 0x219) && (*(ushort *)((int)piVar1 + 0x26) != 0x1c1))
    {
      (**(code **)(*piVar1 + 0x3c))(piVar1,param_2,param_3,param_4,0);
      return;
    }
    uVar2 = FUN_71ba1638(param_3);
    uVar3 = FUN_71ba1638(param_4);
    uVar4 = FUN_71ba1638(param_2);
    FUN_715d33c8(&DAT_70081f72,*(undefined4 *)(param_1 + 8),(int)uVar4,
                 (int)((ulonglong)uVar4 >> 0x20),uVar2,uVar3);
  }
  return;
}


// =========================================================================
// Function: FUN_71560364
// Entry: 0x71560364 | Size: 28 bytes
// =========================================================================

void FUN_71560364(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xfffffffd | (param_2 & 1) << 1;
  }
  return;
}


// =========================================================================
// Function: FUN_71560398
// Entry: 0x71560398 | Size: 68 bytes
// =========================================================================

void FUN_71560398(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    param_3 = *(int *)(iVar1 + 0x18);
  }
  if (iVar1 != 0 && param_3 != 0) {
    if (*(int *)(iVar1 + 0x14) != 0) {
      FUN_713b3a38(iVar1);
      FUN_713b49d0(*(undefined4 *)(param_1 + 4));
      return;
    }
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_7156042c
// Entry: 0x7156042c | Size: 20 bytes
// =========================================================================

undefined4 FUN_7156042c(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x18);
  }
  return uVar1;
}


// =========================================================================
// Function: FUN_71560458
// Entry: 0x71560458 | Size: 28 bytes
// =========================================================================

void FUN_71560458(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16)

{
  int *piVar1;
  int iVar2;
  int unaff_r7;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    unaff_r7 = piVar1[5];
  }
  if (piVar1 == (int *)0x0 || unaff_r7 == 0) {
    return;
  }
  (**(code **)(*piVar1 + 0x10))();
  piVar1 = *(int **)(param_1 + 4);
  if ((undefined4 *)piVar1[5] != (undefined4 *)0x0) {
    *(undefined4 *)piVar1[5] = param_2;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + 4) = param_3;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + 8) = param_4;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + 0x10) = param_6;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + 0x14) = param_7;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + 0x18) = param_8;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + 0x20) = param_10;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + 0x24) = param_11;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + 0x28) = param_12;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + 0x30) = param_14;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + 0x34) = param_15;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + 0x38) = param_16;
    piVar1 = *(int **)(param_1 + 4);
  }
  iVar2 = 0;
  if (piVar1[6] != 0) {
    iVar2 = piVar1[5];
  }
  if (piVar1[6] != 0 && iVar2 != 0) {
    FUN_713b3a38();
    FUN_713b49d0(*(undefined4 *)(param_1 + 4));
    piVar1 = *(int **)(param_1 + 4);
  }
                    /* WARNING: Could not recover jumptable at 0x715605e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 8))();
  return;
}


// =========================================================================
// Function: FUN_7156063c
// Entry: 0x7156063c | Size: 20 bytes
// =========================================================================

void FUN_7156063c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  puVar2 = (undefined4 *)0x0;
  if (iVar1 != 0) {
    puVar2 = *(undefined4 **)(iVar1 + 0x14);
  }
  if (iVar1 == 0 || puVar2 == (undefined4 *)0x0) {
    return;
  }
  *puVar2 = param_2;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + 4) = param_3;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + 8) = param_4;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + 0x10) = param_6;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + 0x14) = param_7;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + 0x18) = param_8;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + 0x20) = param_10;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + 0x24) = param_11;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + 0x28) = param_12;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + 0x30) = param_14;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + 0x34) = param_15;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + 0x38) = param_16;
  return;
}


// =========================================================================
// Function: thunk_FUN_7156074c
// Entry: 0x71560738 | Size: 12 bytes
// =========================================================================

void thunk_FUN_7156074c(void)

{
  FUN_7156074c();
  return;
}


// =========================================================================
// Function: FUN_7156074c
// Entry: 0x7156074c | Size: 24 bytes
// =========================================================================

uint FUN_7156074c(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = (*(byte *)(*(int *)(param_1 + 4) + 0x1c) & 3) >> 1;
  }
  return uVar1;
}


// =========================================================================
// Function: thunk_FUN_71560790
// Entry: 0x7156077c | Size: 12 bytes
// =========================================================================

void thunk_FUN_71560790(void)

{
  FUN_71560790();
  return;
}


// =========================================================================
// Function: FUN_71560790
// Entry: 0x71560790 | Size: 28 bytes
// =========================================================================

void FUN_71560790(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xfffffffd | (param_2 & 1) << 1;
  }
  return;
}


// =========================================================================
// Function: thunk_FUN_715607d8
// Entry: 0x715607c4 | Size: 12 bytes
// =========================================================================

void thunk_FUN_715607d8(void)

{
  FUN_715607d8();
  return;
}


// =========================================================================
// Function: FUN_715607d8
// Entry: 0x715607d8 | Size: 28 bytes
// =========================================================================

void FUN_715607d8(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xfffffffe | param_2;
  }
  return;
}


// =========================================================================
// Function: FUN_7156080c
// Entry: 0x7156080c | Size: 24 bytes
// =========================================================================

void FUN_7156080c(int param_1)

{
  (**(code **)(**(int **)(param_1 + 4) + 0x48))();
  FUN_7146a30c(*(undefined4 *)(param_1 + 4));
  return;
}


// =========================================================================
// Function: thunk_FUN_715608f0
// Entry: 0x715608dc | Size: 12 bytes
// =========================================================================

void thunk_FUN_715608f0(void)

{
  FUN_715608f0();
  return;
}


// =========================================================================
// Function: FUN_715608f0
// Entry: 0x715608f0 | Size: 52 bytes
// =========================================================================

void FUN_715608f0(int param_1,undefined4 *param_2)

{
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  *param_2 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x48);
  param_2[1] = *(undefined4 *)(*(int *)(param_1 + 4) + 0x4c);
  param_2[2] = *(undefined4 *)(*(int *)(param_1 + 4) + 0x50);
  return;
}


// =========================================================================
// Function: thunk_FUN_71560950
// Entry: 0x7156093c | Size: 12 bytes
// =========================================================================

void thunk_FUN_71560950(void)

{
  FUN_71560950();
  return;
}


// =========================================================================
// Function: FUN_71560950
// Entry: 0x71560950 | Size: 52 bytes
// =========================================================================

void FUN_71560950(int param_1,undefined4 *param_2)

{
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  *param_2 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x54);
  param_2[1] = *(undefined4 *)(*(int *)(param_1 + 4) + 0x58);
  param_2[2] = *(undefined4 *)(*(int *)(param_1 + 4) + 0x5c);
  return;
}


// =========================================================================
// Function: thunk_FUN_715609b0
// Entry: 0x7156099c | Size: 12 bytes
// =========================================================================

void thunk_FUN_715609b0(void)

{
  FUN_715609b0();
  return;
}


// =========================================================================
// Function: FUN_715609b0
// Entry: 0x715609b0 | Size: 20 bytes
// =========================================================================

undefined2 FUN_715609b0(int param_1)

{
  undefined2 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined2 *)(*(int *)(param_1 + 4) + 0x26);
  }
  return uVar1;
}


// =========================================================================
// Function: thunk_FUN_715609f0
// Entry: 0x715609dc | Size: 12 bytes
// =========================================================================

void thunk_FUN_715609f0(void)

{
  FUN_715609f0();
  return;
}


// =========================================================================
// Function: FUN_715609f0
// Entry: 0x715609f0 | Size: 28 bytes
// =========================================================================

bool FUN_715609f0(int param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 4) != 0;
  if (bVar1) {
    param_2 = *(int *)(*(int *)(param_1 + 4) + 0xb8);
  }
  return (bVar1 && param_2 != 0) && bVar1;
}


// =========================================================================
// Function: FUN_71560a24
// Entry: 0x71560a24 | Size: 868 bytes
// =========================================================================

bool FUN_71560a24(int param_1,uint param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  bool bVar18;
  
  iVar17 = *(int *)(param_1 + 4);
  if (iVar17 != 0) {
    DAT_700fb6ec = (int)*(short *)(iVar17 + 0x26);
    DAT_700fb6e8 = param_2;
    iVar8 = FUN_7156942c(DAT_711a3938);
    if (iVar8 == 0) {
      pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3b70);
      if (*pcVar9 == '\0') {
        puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3b60);
        *(undefined1 *)((int)puVar10 + 0x37) = 1;
        uVar5 = DAT_70081f94;
        uVar4 = DAT_70081f90;
        uVar3 = DAT_70081f8c;
        *puVar10 = DAT_70081f88;
        puVar10[1] = uVar3;
        puVar10[2] = uVar4;
        puVar10[3] = uVar5;
        uVar5 = DAT_70081fa4;
        uVar4 = DAT_70081fa0;
        uVar3 = DAT_70081f9c;
        puVar10[4] = DAT_70081f98;
        puVar10[5] = uVar3;
        puVar10[6] = uVar4;
        puVar10[7] = uVar5;
        uVar6 = DAT_70081fb8;
        uVar5 = DAT_70081fb4;
        uVar4 = DAT_70081fb0;
        uVar3 = DAT_70081fac;
        puVar10[8] = DAT_70081fa8;
        puVar10[9] = uVar3;
        puVar10[10] = uVar4;
        puVar10[0xb] = uVar5;
        puVar10[0xc] = uVar6;
        *(undefined2 *)(puVar10 + 0xd) = DAT_70081fbc;
        *(undefined1 *)((int)puVar10 + 0x36) = DAT_70081fbe;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71561a40,puVar10,&DAT_70b0e000);
        puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3b70);
        *puVar11 = 1;
      }
      iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3b60);
      if (*(char *)(iVar8 + 0x37) != '\0') {
        uVar16 = 0;
        uVar13 = 0;
        do {
          iVar14 = (uVar16 & 7) * 8;
          uVar15 = iVar14 - 0x20;
          bVar12 = (byte)(0x871fab4b >> iVar14) |
                   (byte)(0x57e3df4d << ((uVar16 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar15) {
            bVar12 = (byte)(0x57e3df4d >> (uVar15 & 0xff));
          }
          *(byte *)(iVar8 + uVar16) = *(byte *)(iVar8 + uVar16) ^ bVar12;
          bVar18 = 0xfffffffe < uVar16;
          bVar1 = uVar13 == 0;
          bVar2 = (0x35 < uVar16) <= uVar13;
          uVar16 = uVar16 + 1;
          uVar13 = uVar13 + bVar18;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar8 + 0x37) = 0;
      }
      FUN_7188543c(iVar8,param_2);
      pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3b90);
      if (*pcVar9 == '\0') {
        puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3b80);
        *(undefined1 *)((int)puVar10 + 0x37) = 1;
        uVar5 = DAT_70081fcc;
        uVar4 = DAT_70081fc8;
        uVar3 = DAT_70081fc4;
        *puVar10 = DAT_70081fc0;
        puVar10[1] = uVar3;
        puVar10[2] = uVar4;
        puVar10[3] = uVar5;
        uVar5 = DAT_70081fdc;
        uVar4 = DAT_70081fd8;
        uVar3 = DAT_70081fd4;
        puVar10[4] = DAT_70081fd0;
        puVar10[5] = uVar3;
        puVar10[6] = uVar4;
        puVar10[7] = uVar5;
        uVar6 = DAT_70081ff0;
        uVar5 = DAT_70081fec;
        uVar4 = DAT_70081fe8;
        uVar3 = DAT_70081fe4;
        puVar10[8] = DAT_70081fe0;
        puVar10[9] = uVar3;
        puVar10[10] = uVar4;
        puVar10[0xb] = uVar5;
        puVar10[0xc] = uVar6;
        uVar7 = DAT_70081ff6;
        *(undefined2 *)(puVar10 + 0xd) = DAT_70081ff4;
        *(undefined1 *)((int)puVar10 + 0x36) = uVar7;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71561a90,puVar10,&DAT_70b0e000);
        puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3b90);
        *puVar11 = 1;
      }
      iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3b80);
      if (*(char *)(iVar8 + 0x37) != '\0') {
        uVar16 = 0;
        uVar13 = 0;
        do {
          iVar14 = (uVar16 & 7) * 8;
          uVar15 = iVar14 - 0x20;
          bVar12 = (byte)(0x591b7ff3 >> iVar14) |
                   (byte)(0x65039371 << ((uVar16 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar15) {
            bVar12 = (byte)(0x65039371 >> (uVar15 & 0xff));
          }
          *(byte *)(iVar8 + uVar16) = *(byte *)(iVar8 + uVar16) ^ bVar12;
          bVar18 = 0xfffffffe < uVar16;
          bVar1 = uVar13 == 0;
          bVar2 = (0x35 < uVar16) <= uVar13;
          uVar16 = uVar16 + 1;
          uVar13 = uVar13 + bVar18;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar8 + 0x37) = 0;
      }
      FUN_716486e8(iVar8,param_2);
    }
    uVar16 = (uint)*(ushort *)((int)*(int **)(param_1 + 4) + 0x26);
    (**(code **)(**(int **)(param_1 + 4) + 0x24))();
    *(short *)(*(int *)(param_1 + 4) + 0x26) = (short)param_2;
    (**(code **)(**(int **)(param_1 + 4) + 0x18))(*(int **)(param_1 + 4),param_2);
    if ((param_3 == 0) && (uVar16 != param_2)) {
      FUN_71563244(DAT_711a3938,uVar16);
      FUN_715631e8(DAT_711a3938,(int)*(short *)(*(int *)(param_1 + 4) + 0x26));
    }
    DAT_700fb6ec = 0xffffffff;
    DAT_700fb6e8 = 0xffffffff;
  }
  return iVar17 != 0;
}


// =========================================================================
// Function: thunk_FUN_71561220
// Entry: 0x7156120c | Size: 12 bytes
// =========================================================================

void thunk_FUN_71561220(void)

{
  FUN_71561220();
  return;
}


// =========================================================================
// Function: FUN_71561220
// Entry: 0x71561220 | Size: 164 bytes
// =========================================================================

void FUN_71561220(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    puVar3 = (undefined4 *)(*(int *)(iVar1 + 0x14) + 0x30);
    if (*(int *)(iVar1 + 0x14) == 0) {
      puVar3 = (undefined4 *)(iVar1 + 4);
    }
    uVar5 = puVar3[1];
    uVar7 = puVar3[2];
    uVar6 = *(undefined4 *)(DAT_70b46c18 + 0x930);
    uVar4 = *(undefined4 *)(DAT_70b46c18 + 0x934);
    uVar2 = FUN_71ba240c(*puVar3,*(undefined4 *)(DAT_70b46c18 + 0x92c));
    uVar5 = FUN_71ba240c(uVar5,uVar6);
    uVar5 = FUN_71ba21e8(uVar5,uVar5);
    uVar2 = FUN_71ba21e8(uVar2,uVar2);
    uVar2 = FUN_71ba0b38(uVar2,uVar5);
    uVar5 = FUN_71ba240c(uVar7,uVar4);
    uVar5 = FUN_71ba21e8(uVar5,uVar5);
    FUN_71ba0b38(uVar5,uVar2);
    imp_sqrtf();
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_715613f8
// Entry: 0x715613f8 | Size: 32 bytes
// =========================================================================

undefined4 FUN_715613f8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  bool bVar9;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  puVar5 = &uStack_30;
  FUN_7136cdfc(&uStack_24);
  piVar8 = (int *)(DAT_711a3938 + 0x1389c);
  iVar1 = *piVar8;
  if (iVar1 == 0) {
    iVar1 = FUN_713c301c(0);
    if (iVar1 == 0) {
      iVar1 = *piVar8;
      if (iVar1 == 0) {
        return 0x461c4000;
      }
    }
    else {
      thunk_MwhHq(0x3a0);
      iVar1 = FUN_715ba834();
      *piVar8 = iVar1;
    }
  }
  if ((DAT_711f6d58 != 0) && (uVar3 = *(uint *)(*(int *)(DAT_711f6d58 + 0xac) + 0x1f6c), uVar3 != 0)
     ) {
    bVar9 = *(char *)(uVar3 + 0x11c) == '\0';
    if (bVar9) {
      uVar3 = (uint)*(byte *)(uVar3 + 0x136);
    }
    if (!bVar9 || uVar3 != 0) {
      uStack_30 = *(undefined4 *)(DAT_70b46c18 + 0x92c);
      uStack_2c = *(undefined4 *)(DAT_70b46c18 + 0x930);
      uStack_28 = *(undefined4 *)(DAT_70b46c18 + 0x934);
      goto LAB_715614fc;
    }
  }
  iVar4 = *(int *)(*(int *)(iVar1 + 4) + 0x14);
  puVar5 = (undefined4 *)(iVar4 + 0x30);
  if (iVar4 == 0) {
    puVar5 = (undefined4 *)(*(int *)(iVar1 + 4) + 4);
  }
LAB_715614fc:
  FUN_7136d040(&uStack_24,puVar5);
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x14);
  puVar5 = (undefined4 *)(iVar1 + 0x30);
  if (iVar1 == 0) {
    puVar5 = (undefined4 *)(*(int *)(param_1 + 4) + 4);
  }
  uVar7 = puVar5[1];
  uVar6 = puVar5[2];
  uVar2 = FUN_71ba240c(uStack_24,*puVar5);
  uVar7 = FUN_71ba240c(uStack_20,uVar7);
  uVar7 = FUN_71ba21e8(uVar7,uVar7);
  uVar2 = FUN_71ba21e8(uVar2,uVar2);
  uVar2 = FUN_71ba0b38(uVar2,uVar7);
  uVar7 = FUN_71ba240c(uStack_1c,uVar6);
  uVar7 = FUN_71ba21e8(uVar7,uVar7);
  FUN_71ba0b38(uVar7,uVar2);
  uVar2 = imp_sqrtf();
  return uVar2;
}


// =========================================================================
// Function: FUN_71561790
// Entry: 0x71561790 | Size: 24 bytes
// =========================================================================

void FUN_71561790(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x14);
  puVar3 = (undefined4 *)(iVar2 + 0x30);
  if (iVar2 == 0) {
    puVar3 = (undefined4 *)(*(int *)(param_1 + 4) + 4);
  }
  uVar5 = puVar3[1];
  uVar4 = puVar3[2];
  uVar1 = FUN_71ba240c(*puVar3);
  uVar5 = FUN_71ba240c(uVar5,param_3);
  uVar5 = FUN_71ba21e8(uVar5,uVar5);
  uVar1 = FUN_71ba21e8(uVar1,uVar1);
  uVar1 = FUN_71ba0b38(uVar1,uVar5);
  uVar5 = FUN_71ba240c(uVar4,param_4);
  uVar5 = FUN_71ba21e8(uVar5,uVar5);
  FUN_71ba0b38(uVar5,uVar1);
  imp_sqrtf();
  return;
}


// =========================================================================
// Function: thunk_FUN_71561954
// Entry: 0x71561940 | Size: 12 bytes
// =========================================================================

void thunk_FUN_71561954(void)

{
  FUN_71561954();
  return;
}


// =========================================================================
// Function: FUN_71561954
// Entry: 0x71561954 | Size: 128 bytes
// =========================================================================

undefined4 FUN_71561954(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4);
  uVar1 = 0;
  if (iVar3 == 0) {
    return 0;
  }
  if (*(int *)(iVar3 + 0xb8) != 0) {
    iVar2 = FUN_71ba2cf0(*(undefined4 *)(iVar3 + 0x48),0);
    if ((iVar2 == 0) || (iVar2 = FUN_71ba2cf0(*(undefined4 *)(iVar3 + 0x4c),0), iVar2 == 0)) {
      return 0;
    }
    iVar3 = FUN_71ba2cf0(*(undefined4 *)(iVar3 + 0x50),0);
    uVar1 = 1;
    if (iVar3 == 0) {
      uVar1 = 0;
    }
  }
  return uVar1;
}


// =========================================================================
// Function: FUN_71561b30
// Entry: 0x71561b30 | Size: 220 bytes
// =========================================================================

undefined4 * FUN_71561b30(undefined4 *param_1)

{
  undefined4 uVar1;
  
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  imp___aeabi_memclr((int)param_1 + 0xd,0x13883);
  FUN_7136cdfc(param_1 + 0x4e28);
  FUN_7136cdfc(param_1 + 0x4e2d);
  FUN_7136cdfc(param_1 + 0x4e30);
  FUN_7136cdfc(param_1 + 0x4e38);
  param_1[0x4e24] = 0x1010101;
  *(undefined4 *)((int)param_1 + 0x13893) = 0x1010101;
  thunk_MwhHq(0x2c);
  uVar1 = FUN_714dd540();
  param_1[0x4e26] = uVar1;
  param_1[0x4e27] = 0;
  *(undefined1 *)(param_1 + 0x4e33) = 0;
  *(undefined1 *)(param_1 + 0x4e2b) = 0;
  *(undefined2 *)(param_1 + 0x4e3b) = 0;
  param_1[0x4e34] = 0;
  param_1[0x4e35] = 0;
  param_1[0x4e2c] = 0;
  imp___aeabi_memclr8(&DAT_711a3940,0xd2);
  *(undefined2 *)((int)param_1 + 0x138ee) = 0;
  FUN_7156a8a4();
  return param_1;
}


// =========================================================================
// Function: FUN_71561d40
// Entry: 0x71561d40 | Size: 144 bytes
// =========================================================================

int FUN_71561d40(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 2;
  do {
    if ((&DAT_711a3940)[uVar3] == '\0') {
      uVar1 = thunk_MwhHq(0x3a0);
      if (param_2 < 2) {
        param_2 = 1;
      }
      iVar2 = FUN_715bc4c0(uVar1,uVar3 & 0xff,param_2,param_3,param_4,param_5,param_6);
      if (*(int *)(iVar2 + 0x8c) != 0) {
        (&DAT_711a3940)[uVar3] = 1;
      }
      return iVar2;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 != 0xd2);
  return 0;
}


// =========================================================================
// Function: FUN_71561e40
// Entry: 0x71561e40 | Size: 44 bytes
// =========================================================================

void FUN_71561e40(undefined4 param_1,int *param_2)

{
  if (param_2 == (int *)0x0) {
    return;
  }
  (&DAT_711a3940)[*(byte *)((int)param_2 + 0x52)] = 0;
                    /* WARNING: Could not recover jumptable at 0x71561e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 4))(param_2);
  return;
}


// =========================================================================
// Function: FUN_71561ea4
// Entry: 0x71561ea4 | Size: 24 bytes
// =========================================================================

void FUN_71561ea4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  
  uVar1 = thunk_MwhHq(0x978);
  FUN_715f2ce8(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}


// =========================================================================
// Function: FUN_71561f60
// Entry: 0x71561f60 | Size: 388 bytes
// =========================================================================

undefined4
FUN_71561f60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  
  iVar5 = FUN_715ec2b0(param_2);
  if (iVar5 == 0) {
    pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3bb0);
    if (*pcVar7 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3ba0);
      *(undefined1 *)((int)puVar8 + 0x21) = 1;
      uVar4 = DAT_700821cc;
      uVar3 = DAT_700821c8;
      uVar6 = DAT_700821c4;
      *puVar8 = DAT_700821c0;
      puVar8[1] = uVar6;
      puVar8[2] = uVar3;
      puVar8[3] = uVar4;
      uVar4 = DAT_700821dc;
      uVar3 = DAT_700821d8;
      uVar6 = DAT_700821d4;
      puVar8[4] = DAT_700821d0;
      puVar8[5] = uVar6;
      puVar8[6] = uVar3;
      puVar8[7] = uVar4;
      *(undefined1 *)(puVar8 + 8) = DAT_700821e0;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7156a288,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3bb0);
      *puVar9 = 1;
    }
    iVar5 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3ba0);
    if (*(char *)(iVar5 + 0x21) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar10 = (byte)(0x3db53f77 >> iVar13) |
                 (byte)(0x1b901cb << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar10 = (byte)(0x1b901cb >> (uVar14 & 0xff));
        }
        *(byte *)(iVar5 + uVar11) = *(byte *)(iVar5 + uVar11) ^ bVar10;
        bVar15 = 0xfffffffe < uVar11;
        bVar1 = uVar12 == 0;
        bVar2 = (0x1f < uVar11) <= uVar12;
        uVar11 = uVar11 + 1;
        uVar12 = uVar12 + bVar15;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar5 + 0x21) = 0;
    }
    FUN_716486e8(iVar5,param_2);
    return 0;
  }
  uVar6 = thunk_MwhHq(0x118);
  uVar6 = FUN_715b6bc4(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return uVar6;
}


// =========================================================================
// Function: FUN_715622e0
// Entry: 0x715622e0 | Size: 764 bytes
// =========================================================================

uint FUN_715622e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,uint *param_7)

{
  int iVar1;
  uint extraout_r1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_38;
  uint *puStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  
  uStack_2c = param_3;
  iVar1 = FUN_715ec2b0(param_2);
  if (iVar1 == 0) {
    param_2 = 0x48c7;
  }
  iVar1 = FUN_715d33c8(&DAT_70081ff8,param_2);
  if (iVar1 == 0) {
    FUN_715d33c8(&DAT_7008200a,param_2);
    FUN_715d33c8(&DAT_7008201c);
    iVar1 = FUN_715d33c8(&DAT_70081ff8,param_2);
    if (iVar1 == 0) {
      imp_usleep(1);
      iVar1 = FUN_715d33c8(&DAT_70081ff8,param_2);
      if (iVar1 == 0) {
        imp_usleep(1);
        iVar1 = FUN_715d33c8(&DAT_70081ff8,param_2);
        if (iVar1 == 0) {
          imp_usleep(1);
          iVar1 = FUN_715d33c8(&DAT_70081ff8,param_2);
          if (iVar1 == 0) {
            imp_usleep(1);
            iVar1 = FUN_715d33c8(&DAT_70081ff8,param_2);
            if (iVar1 == 0) {
              imp_usleep(1);
              iVar1 = FUN_715d33c8(&DAT_70081ff8,param_2);
              if (iVar1 == 0) {
                imp_usleep(1);
                iVar1 = FUN_715d33c8(&DAT_70081ff8,param_2);
                if (iVar1 == 0) {
                  imp_usleep(1);
                  iVar1 = FUN_715d33c8(&DAT_70081ff8,param_2);
                  if (iVar1 == 0) {
                    imp_usleep(1);
                    iVar1 = FUN_715d33c8(&DAT_70081ff8,param_2);
                    if (iVar1 == 0) {
                      imp_usleep(1);
                      iVar1 = FUN_715d33c8(&DAT_70081ff8,param_2);
                      if (iVar1 == 0) {
                        imp_usleep(1);
                        iVar1 = FUN_715d33c8(&DAT_70081ff8,param_2);
                        if (iVar1 == 0) {
                          imp_usleep(1);
                          iVar1 = FUN_715d33c8(&DAT_70081ff8,param_2);
                          if (iVar1 == 0) {
                            imp_usleep(1);
                            iVar1 = FUN_715d33c8(&DAT_70081ff8,param_2);
                            if (iVar1 == 0) {
                              imp_usleep(1);
                              iVar1 = FUN_715d33c8(&DAT_70081ff8,param_2);
                              if (iVar1 == 0) {
                                imp_usleep(1);
                                iVar1 = FUN_715d33c8(&DAT_70081ff8,param_2);
                                if (iVar1 == 0) {
                                  imp_usleep(1);
                                  iVar1 = FUN_715d33c8(&DAT_70081ff8,param_2);
                                  if (iVar1 == 0) {
                                    imp_usleep(1);
                                    return 0;
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
  uVar4 = FUN_71ba1638(param_4);
  uVar5 = FUN_71ba1638(param_5);
  uStack_38 = FUN_71ba1638(param_6);
  puStack_30 = &uStack_28;
  FUN_715d33c8(&DAT_7008202e,param_2,uStack_2c,&uStack_38,uVar4,uVar5);
  bVar3 = param_7 == (uint *)0x0;
  uVar2 = extraout_r1;
  if (!bVar3) {
    uVar2 = (uStack_28 & 0xffff) << 5;
    bVar3 = (uStack_28 & 0xffff) == 0;
  }
  if (!bVar3) {
    *param_7 = uVar2 >> 5;
  }
  return uStack_28;
}


// =========================================================================
// Function: FUN_71562cdc
// Entry: 0x71562cdc | Size: 20 bytes
// =========================================================================

void FUN_71562cdc(void)

{
  uint uVar1;
  int iVar2;
  
  FUN_7151e020();
  FUN_7151f144();
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
  DAT_711a393c = thunk__IBDl(0x868);
  return;
}


// =========================================================================
// Function: FUN_71563130
// Entry: 0x71563130 | Size: 20 bytes
// =========================================================================

void FUN_71563130(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auStack_14 [4];
  
  FUN_715d1fc8();
  FUN_715d38f8();
  FUN_715d2380();
  DAT_71132da8 = 0;
  DAT_71132dac = 0;
  DAT_71132db0 = 0;
  DAT_71132db4 = 0;
  DAT_71132db8 = 0;
  DAT_71132dbc = 0;
  uVar1 = thunk_MwhHq(4);
  thunk_IqYTnHtEYRLvLLTOJMZHzxakOfRAHvNTt();
  puVar2 = (undefined4 *)thunk_MwhHq(8);
  *puVar2 = uVar1;
  puVar2[1] = &LAB_714e6458;
  iVar3 = imp_pthread_create(auStack_14,0,&LAB_714d2a60);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_BryazjfoMPqEkZEtKkG_KttlecoGMjr_tAmWbCi(iVar3,s_thread_constructor_failed_70063c8c);
  }
  thunk_dtOmRBwkVHnGtYLYirTdLYLImchz(auStack_14);
  thunk_uQwrLJbzyUVbHmvQcVNflhV(auStack_14);
  return;
}


// =========================================================================
// Function: FUN_715631e8
// Entry: 0x715631e8 | Size: 36 bytes
// =========================================================================

void FUN_715631e8(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_70c39074 + param_2 * 4);
  if (iVar1 != 0) {
    *(short *)(iVar1 + 0x1e) = *(short *)(iVar1 + 0x1e) + 1;
  }
  return;
}


// =========================================================================
// Function: FUN_71563244
// Entry: 0x71563244 | Size: 76 bytes
// =========================================================================

void FUN_71563244(undefined4 param_1,int param_2)

{
  short sVar1;
  int iVar2;
  
  if (param_2 == 7) {
    return;
  }
  iVar2 = *(int *)(DAT_70c39074 + param_2 * 4);
  if (iVar2 != 0) {
    sVar1 = *(short *)(iVar2 + 0x1e);
    if ((sVar1 != 0) && (*(short *)(iVar2 + 0x1e) = sVar1 + -1, sVar1 != 1)) {
      return;
    }
    FUN_7135f82c(param_2);
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_715632e4
// Entry: 0x715632e4 | Size: 128 bytes
// =========================================================================

undefined4 FUN_715632e4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uStack_24;
  
  uVar2 = FUN_71ba1638(param_3);
  uVar3 = FUN_71ba1638(param_4);
  uVar4 = FUN_71ba1638(param_2);
  uVar1 = (undefined4)((ulonglong)uVar4 >> 0x20);
  FUN_715d33c8(&DAT_70082040,uVar1,(int)uVar4,uVar1,uVar2,uVar3,&uStack_24);
  return uStack_24;
}


// =========================================================================
// Function: FUN_71563414
// Entry: 0x71563414 | Size: 860 bytes
// =========================================================================

void FUN_71563414(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined4 uStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_44;
  int iStack_40;
  int iStack_38;
  int iStack_34;
  
  FUN_7136d040((undefined4 *)(param_1 + 0x138b4));
  FUN_7136d040(param_1 + 0x138c0,param_3);
  piVar8 = (int *)(param_1 + 0x138b0);
  if (*piVar8 != 0) {
    FUN_715d33c8(&DAT_70082196);
    *piVar8 = 0;
    iVar1 = FUN_71563d2c(*(undefined4 *)(param_1 + 0x138b8),0,*(undefined4 *)(param_1 + 0x138b4),
                         *(undefined4 *)(param_1 + 0x138b8),*(undefined4 *)(param_1 + 0x138bc),0x3ed
                         ,0);
    *piVar8 = iVar1;
    iVar1 = DAT_712017f8;
    DataMemoryBarrier(0xb);
    if (((DAT_711a3a24 & 1) == 0) && (iVar2 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711a3a24), iVar2 != 0))
    {
      pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3bd0);
      if (*pcVar3 == '\0') {
        puVar5 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3bc0);
        *puVar5 = 0xca7bcf2a;
        puVar5[1] = 0x34aaaf2c;
        *(undefined1 *)((int)puVar5 + 0xb) = 1;
        *(undefined4 *)((int)puVar5 + 7) = 0x1fc52434;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_7156a2d8,puVar5,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3bd0);
        *puVar6 = 1;
      }
      pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3bc0);
      if (pbVar4[0xb] != 0) {
        *pbVar4 = *pbVar4 ^ 0x4b;
        pbVar4[1] = pbVar4[1] ^ 0xab;
        pbVar4[2] = pbVar4[2] ^ 0x1f;
        pbVar4[3] = pbVar4[3] ^ 0x87;
        pbVar4[0xb] = 0;
        pbVar4[4] = pbVar4[4] ^ 0x4d;
        pbVar4[5] = pbVar4[5] ^ 0xdf;
        pbVar4[6] = pbVar4[6] ^ 0xe3;
        pbVar4[7] = pbVar4[7] ^ 0x57;
        pbVar4[8] = pbVar4[8] ^ 0x4b;
        pbVar4[9] = pbVar4[9] ^ 0xab;
        pbVar4[10] = pbVar4[10] ^ 0x1f;
      }
      DAT_711a3a20 = FUN_71885ba4(pbVar4,0);
      thunk_SixizuLbAnqfgRApsCY(&DAT_711a3a24);
    }
    uVar9 = DAT_711a3a20;
    imp___aeabi_memclr4(&iStack_50,0x30);
    uStack_54 = uVar9;
    uVar9 = FUN_713a0424(&uStack_54,100000);
    uVar10 = FUN_71ba1638(*param_2);
    uVar7 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uVar9 = FUN_714d597c(uVar9,uVar7,(int)uVar10,uVar7);
    uVar10 = FUN_71ba1638(param_2[1]);
    uVar7 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uVar9 = FUN_714d597c(uVar9,uVar7,(int)uVar10,uVar7);
    uVar10 = FUN_71ba1638(param_2[2]);
    uVar7 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uVar9 = FUN_714d597c(uVar9,uVar7,(int)uVar10,uVar7);
    uVar9 = FUN_713a0424(uVar9,0);
    uVar9 = FUN_713a0424(uVar9,0x3ed);
    uVar9 = FUN_713a0424(uVar9,0);
    uVar9 = FUN_713a1f9c(uVar9,1);
    uVar10 = FUN_713a0424(uVar9,0xffffffff);
    uVar9 = FUN_714d597c((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0,0);
    thunk_cfqspBX_JrdDvACwYrAyrngjQ(iVar1 + 0x34);
    piVar8 = (int *)thunk_MwhHq(0x3c);
    *piVar8 = 0;
    piVar8[1] = 0;
    FUN_713a10f8(piVar8 + 2,uVar9);
    piVar8[1] = iVar1 + 0x38;
    iVar2 = *(int *)(iVar1 + 0x38);
    *piVar8 = iVar2;
    *(int **)(iVar2 + 4) = piVar8;
    *(int **)(iVar1 + 0x38) = piVar8;
    *(int *)(iVar1 + 0x40) = *(int *)(iVar1 + 0x40) + 1;
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(iVar1 + 0x34);
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
  }
  return;
}


// =========================================================================
// Function: FUN_71563ccc
// Entry: 0x71563ccc | Size: 12 bytes
// =========================================================================

void FUN_71563ccc(void)

{
  FUN_715d33c8(&DAT_70082196);
  return;
}


// =========================================================================
// Function: FUN_71563d2c
// Entry: 0x71563d2c | Size: 28 bytes
// =========================================================================

undefined4
FUN_71563d2c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,int param_6,int param_7)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uStack_24;
  
  uStack_24 = 0;
  uVar3 = FUN_71ba1638(param_3);
  uVar4 = FUN_71ba1638(param_4);
  uVar5 = FUN_71ba1638(param_5);
  if (param_7 - 1U < 3) {
    puVar1 = *(undefined **)(&DAT_70b0ebac + (param_7 - 1U) * 4);
  }
  else {
    puVar1 = &DAT_700820ac;
  }
  FUN_715d33c8(puVar1,(int)((ulonglong)uVar5 >> 0x20),(int)uVar3,(int)((ulonglong)uVar3 >> 0x20),
               uVar4,uVar5,param_2,&uStack_24);
  if (param_2 == 0) {
    FUN_715d33c8(&DAT_700820be,uStack_24,param_6);
    uVar2 = 2;
    if (0x3eb < param_6) {
      uVar2 = 3;
    }
    FUN_715d33c8(&DAT_700820d0,uStack_24,uVar2);
  }
  return uStack_24;
}


// =========================================================================
// Function: FUN_71563f5c
// Entry: 0x71563f5c | Size: 876 bytes
// =========================================================================

void FUN_71563f5c(int param_1,undefined1 param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined4 uStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_48;
  int iStack_44;
  int iStack_3c;
  int iStack_38;
  
  FUN_7136d040((undefined4 *)(param_1 + 0x138a0),param_3);
  FUN_7136d040(param_1 + 0x138e0,param_4);
  *(undefined1 *)(param_1 + 0x138dc) = param_2;
  *(undefined4 *)(param_1 + 0x138d8) = param_5;
  if (*(int *)(param_1 + 0x138d4) != 0) {
    FUN_715d33c8(&DAT_70082196);
    *(undefined4 *)(param_1 + 0x138d4) = 0;
    uVar2 = FUN_71563d2c(*(undefined4 *)(param_1 + 0x138a8),0,*(undefined4 *)(param_1 + 0x138a0),
                         *(undefined4 *)(param_1 + 0x138a4),*(undefined4 *)(param_1 + 0x138a8),0x3ed
                         ,0);
    *(undefined4 *)(param_1 + 0x138d4) = uVar2;
    iVar1 = DAT_712017f8;
    DataMemoryBarrier(0xb);
    if (((DAT_711a3a2c & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711a3a2c), iVar4 != 0))
    {
      pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3bf0);
      if (*pcVar5 == '\0') {
        puVar7 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3be0);
        *puVar7 = 0x1a1daf3c;
        puVar7[1] = 0x9a2cd73c;
        *(undefined1 *)((int)puVar7 + 0xb) = 1;
        *(undefined4 *)((int)puVar7 + 7) = 0x79a5329a;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_7156a304,puVar7,&DAT_70b0e000);
        puVar8 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3bf0);
        *puVar8 = 1;
      }
      pbVar6 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3be0);
      if (pbVar6[0xb] != 0) {
        *pbVar6 = *pbVar6 ^ 0x5d;
        pbVar6[1] = pbVar6[1] ^ 0xcb;
        pbVar6[2] = pbVar6[2] ^ 0x79;
        pbVar6[3] = pbVar6[3] ^ 0x57;
        pbVar6[0xb] = 0;
        pbVar6[4] = pbVar6[4] ^ 0x5d;
        pbVar6[5] = pbVar6[5] ^ 0xa7;
        pbVar6[6] = pbVar6[6] ^ 0x65;
        pbVar6[7] = pbVar6[7] ^ 0xf9;
        pbVar6[8] = pbVar6[8] ^ 0x5d;
        pbVar6[9] = pbVar6[9] ^ 0xcb;
        pbVar6[10] = pbVar6[10] ^ 0x79;
      }
      DAT_711a3a28 = FUN_71885ba4(pbVar6,0);
      thunk_SixizuLbAnqfgRApsCY(&DAT_711a3a2c);
    }
    uVar2 = DAT_711a3a28;
    imp___aeabi_memclr4(&iStack_54,0x30);
    uStack_58 = uVar2;
    uVar2 = FUN_713a0424(&uStack_58,0x186a1);
    uVar10 = FUN_71ba1638(*param_3);
    uVar9 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uVar2 = FUN_714d597c(uVar2,uVar9,(int)uVar10,uVar9);
    uVar10 = FUN_71ba1638(param_3[1]);
    uVar9 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uVar2 = FUN_714d597c(uVar2,uVar9,(int)uVar10,uVar9);
    uVar10 = FUN_71ba1638(param_3[2]);
    uVar9 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uVar2 = FUN_714d597c(uVar2,uVar9,(int)uVar10,uVar9);
    uVar2 = FUN_713a0424(uVar2,0);
    uVar2 = FUN_713a0424(uVar2,0x3ed);
    uVar2 = FUN_713a0424(uVar2,0);
    uVar2 = FUN_713a1f9c(uVar2,1);
    uVar10 = FUN_713a0424(uVar2,0xffffffff);
    uVar2 = FUN_714d597c((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0,0);
    thunk_cfqspBX_JrdDvACwYrAyrngjQ(iVar1 + 0x34);
    piVar3 = (int *)thunk_MwhHq(0x3c);
    *piVar3 = 0;
    piVar3[1] = 0;
    FUN_713a10f8(piVar3 + 2,uVar2);
    piVar3[1] = iVar1 + 0x38;
    iVar4 = *(int *)(iVar1 + 0x38);
    *piVar3 = iVar4;
    *(int **)(iVar4 + 4) = piVar3;
    *(int **)(iVar1 + 0x38) = piVar3;
    *(int *)(iVar1 + 0x40) = *(int *)(iVar1 + 0x40) + 1;
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(iVar1 + 0x34);
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
  FUN_71564840(param_1);
  return;
}


// =========================================================================
// Function: FUN_71564840
// Entry: 0x71564840 | Size: 308 bytes
// =========================================================================

void FUN_71564840(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  piVar4 = (int *)(param_1 + 0x138d0);
  if (*piVar4 != 0) {
    FUN_715d33c8(&DAT_70082064);
    *piVar4 = 0;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x138a0);
  uVar2 = *(undefined4 *)(param_1 + 0x138a8);
  uVar3 = *(undefined4 *)(param_1 + 0x138d8);
  uVar5 = FUN_71ba1638(*(undefined4 *)(param_1 + 0x138a4));
  uVar6 = FUN_71ba1638(uVar2);
  uVar7 = FUN_71ba1638(*(undefined4 *)(param_1 + 0x138e0));
  uVar8 = FUN_71ba1638(*(undefined4 *)(param_1 + 0x138e4));
  uVar9 = FUN_71ba1638(*(undefined4 *)(param_1 + 0x138e8));
  uVar10 = FUN_71ba1638(uVar3);
  uVar11 = FUN_71ba1638(uVar1);
  FUN_715d33c8(&DAT_70082052,*(undefined1 *)(param_1 + 0x138dc),(int)uVar11,
               (int)((ulonglong)uVar11 >> 0x20),uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,piVar4);
  return;
}


// =========================================================================
// Function: FUN_71564ad8
// Entry: 0x71564ad8 | Size: 3068 bytes
// =========================================================================

void FUN_71564ad8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  undefined8 uVar18;
  undefined4 uStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_48;
  int iStack_44;
  int iStack_3c;
  int iStack_38;
  
  piVar11 = (int *)(param_1 + 0x1389c);
  if (*(char *)(param_1 + 0x138ac) == '\0') {
    if (*(int *)(param_1 + 0x138b0) == 0) goto LAB_71564e88;
    FUN_715d33c8(&DAT_70082196);
    *(undefined4 *)(param_1 + 0x138b0) = 0;
    iVar1 = DAT_712017f8;
    DataMemoryBarrier(0xb);
    if (((DAT_711a3a3c & 1) == 0) && (iVar6 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711a3a3c), iVar6 != 0))
    {
      pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3c30);
      if (*pcVar7 == '\0') {
        puVar2 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3c20);
        *puVar2 = 0x44fe0801;
        puVar2[1] = 0x3442ecf1;
        puVar2[2] = 0x44f02403;
        *(undefined1 *)((int)puVar2 + 0xe) = 1;
        *(undefined2 *)(puVar2 + 3) = 0x89e9;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_7156a35c,puVar2,&DAT_70b0e000);
        puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3c30);
        *puVar10 = 1;
      }
      pbVar8 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3c20);
      if (pbVar8[0xe] != 0) {
        *pbVar8 = *pbVar8 ^ 0x73;
        pbVar8[1] = pbVar8[1] ^ 0x6d;
        pbVar8[2] = pbVar8[2] ^ 0x93;
        pbVar8[3] = pbVar8[3] ^ 0x2b;
        pbVar8[0xe] = 0;
        pbVar8[4] = pbVar8[4] ^ 0x87;
        pbVar8[5] = pbVar8[5] ^ 0x89;
        pbVar8[6] = pbVar8[6] ^ 0xf;
        pbVar8[7] = pbVar8[7] ^ 0x55;
        pbVar8[8] = pbVar8[8] ^ 0x73;
        pbVar8[9] = pbVar8[9] ^ 0x6d;
        pbVar8[10] = pbVar8[10] ^ 0x93;
        pbVar8[0xb] = pbVar8[0xb] ^ 0x2b;
        pbVar8[0xc] = pbVar8[0xc] ^ 0x87;
        pbVar8[0xd] = pbVar8[0xd] ^ 0x89;
      }
      DAT_711a3a38 = FUN_71885ba4(pbVar8,0);
      thunk_SixizuLbAnqfgRApsCY(&DAT_711a3a3c);
    }
    uVar3 = DAT_711a3a38;
    imp___aeabi_memclr4(&iStack_54,0x30);
    uStack_58 = uVar3;
    uVar3 = FUN_713a0424(&uStack_58,100000);
    thunk_cfqspBX_JrdDvACwYrAyrngjQ(iVar1 + 0x34);
    piVar5 = (int *)thunk_MwhHq(0x3c);
    *piVar5 = 0;
    piVar5[1] = 0;
    FUN_713a10f8(piVar5 + 2,uVar3);
    piVar5[1] = iVar1 + 0x38;
    iVar6 = *(int *)(iVar1 + 0x38);
    *piVar5 = iVar6;
    *(int **)(iVar6 + 4) = piVar5;
    *(int **)(iVar1 + 0x38) = piVar5;
    *(int *)(iVar1 + 0x40) = *(int *)(iVar1 + 0x40) + 1;
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(iVar1 + 0x34);
    if (iStack_3c != 0) {
      iStack_38 = iStack_3c;
      thunk_qNQrlu();
    }
    if (iStack_48 != 0) {
      iStack_44 = iStack_48;
      thunk_qNQrlu();
    }
  }
  else {
    if (*piVar11 == 0) {
      iVar1 = FUN_713c301c(0);
      if (iVar1 == 0) {
        if (*piVar11 == 0) goto LAB_71564e88;
      }
      else {
        thunk_MwhHq(0x3a0);
        iVar1 = FUN_715ba834();
        *piVar11 = iVar1;
      }
    }
    puVar13 = (undefined4 *)(param_1 + 0x138b4);
    uVar16 = *puVar13;
    uVar15 = *(undefined4 *)(param_1 + 0x138c4);
    puVar2 = (undefined4 *)(param_1 + 0x138b8);
    uVar14 = *puVar2;
    uVar12 = *(undefined4 *)(param_1 + 0x138c0);
    uVar3 = FUN_71ba0b38(uVar14,uVar15);
    uVar4 = FUN_71ba240c(uVar16,uVar12);
    uVar14 = FUN_71ba240c(uVar14,uVar15);
    uVar12 = FUN_71ba0b38(uVar16,uVar12);
    puVar17 = (undefined4 *)(param_1 + 0x138bc);
    FUN_71497a54(param_1,uVar4,uVar14,uVar12,uVar3,*puVar17);
    if (*(int *)(param_1 + 0x138b0) != 0) goto LAB_71564e88;
    uVar3 = FUN_71563d2c(*puVar17,0,*puVar13,*puVar2,*puVar17,0x3ed,0);
    *(undefined4 *)(param_1 + 0x138b0) = uVar3;
    iVar1 = DAT_712017f8;
    DataMemoryBarrier(0xb);
    if (((DAT_711a3a34 & 1) == 0) && (iVar6 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711a3a34), iVar6 != 0))
    {
      pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3c10);
      if (*pcVar7 == '\0') {
        puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3c00);
        *puVar9 = 0x74534982;
        puVar9[1] = 0xa47c2fec;
        *(undefined1 *)((int)puVar9 + 0xb) = 1;
        *(undefined4 *)((int)puVar9 + 7) = 0x37438ca4;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_7156a330,puVar9,&DAT_70b0e000);
        puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3c10);
        *puVar10 = 1;
      }
      pbVar8 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3c00);
      if (pbVar8[0xb] != 0) {
        *pbVar8 = *pbVar8 ^ 0xe3;
        pbVar8[1] = pbVar8[1] ^ 0x2d;
        pbVar8[2] = pbVar8[2] ^ 0x37;
        pbVar8[3] = pbVar8[3] ^ 0x39;
        pbVar8[0xb] = 0;
        pbVar8[4] = pbVar8[4] ^ 0x8d;
        pbVar8[5] = pbVar8[5] ^ 0x5f;
        pbVar8[6] = pbVar8[6] ^ 0x35;
        pbVar8[7] = pbVar8[7] ^ 199;
        pbVar8[8] = pbVar8[8] ^ 0xe3;
        pbVar8[9] = pbVar8[9] ^ 0x2d;
        pbVar8[10] = pbVar8[10] ^ 0x37;
      }
      DAT_711a3a30 = FUN_71885ba4(pbVar8,0);
      thunk_SixizuLbAnqfgRApsCY(&DAT_711a3a34);
    }
    uVar3 = DAT_711a3a30;
    imp___aeabi_memclr4(&iStack_54,0x30);
    uStack_58 = uVar3;
    uVar3 = FUN_713a0424(&uStack_58,100000);
    uVar18 = FUN_71ba1638(*puVar13);
    uVar4 = (undefined4)((ulonglong)uVar18 >> 0x20);
    uVar3 = FUN_714d597c(uVar3,uVar4,(int)uVar18,uVar4);
    uVar18 = FUN_71ba1638(*puVar2);
    uVar4 = (undefined4)((ulonglong)uVar18 >> 0x20);
    uVar3 = FUN_714d597c(uVar3,uVar4,(int)uVar18,uVar4);
    uVar18 = FUN_71ba1638(*puVar17);
    uVar4 = (undefined4)((ulonglong)uVar18 >> 0x20);
    uVar3 = FUN_714d597c(uVar3,uVar4,(int)uVar18,uVar4);
    uVar3 = FUN_713a0424(uVar3,0);
    uVar3 = FUN_713a0424(uVar3,0x3ed);
    uVar3 = FUN_713a0424(uVar3,0);
    uVar3 = FUN_713a1f9c(uVar3,1);
    uVar18 = FUN_713a0424(uVar3,0xffffffff);
    uVar3 = FUN_714d597c((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),0,0);
    thunk_cfqspBX_JrdDvACwYrAyrngjQ(iVar1 + 0x34);
    piVar5 = (int *)thunk_MwhHq(0x3c);
    *piVar5 = 0;
    piVar5[1] = 0;
    FUN_713a10f8(piVar5 + 2,uVar3);
    piVar5[1] = iVar1 + 0x38;
    iVar6 = *(int *)(iVar1 + 0x38);
    *piVar5 = iVar6;
    *(int **)(iVar6 + 4) = piVar5;
    *(int **)(iVar1 + 0x38) = piVar5;
    *(int *)(iVar1 + 0x40) = *(int *)(iVar1 + 0x40) + 1;
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(iVar1 + 0x34);
    if (iStack_3c != 0) {
      iStack_38 = iStack_3c;
      thunk_qNQrlu();
    }
    if (iStack_48 != 0) {
      iStack_44 = iStack_48;
      thunk_qNQrlu();
    }
  }
  if (iStack_54 != 0) {
    thunk_qNQrlu();
  }
LAB_71564e88:
  if (*(char *)(param_1 + 0x138cc) == '\0') {
    if (*(int *)(param_1 + 0x138d4) == 0) {
      return;
    }
    FUN_715d33c8(&DAT_70082196);
    if (*(int *)(param_1 + 0x138d0) != 0) {
      FUN_715d33c8(&DAT_70082064);
      *(undefined4 *)(param_1 + 0x138d0) = 0;
    }
    *(undefined4 *)(param_1 + 0x138d4) = 0;
    iVar1 = DAT_712017f8;
    DataMemoryBarrier(0xb);
    if (((DAT_711a3a4c & 1) == 0) && (iVar6 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711a3a4c), iVar6 != 0))
    {
      pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3c70);
      if (*pcVar7 == '\0') {
        puVar2 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3c60);
        *puVar2 = 0xe098a8c3;
        puVar2[1] = 0x88c1ef9;
        puVar2[2] = 0xe09684c1;
        *(undefined1 *)((int)puVar2 + 0xe) = 1;
        *(undefined2 *)(puVar2 + 3) = 0x7be1;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_7156a3b8,puVar2,&DAT_70b0e000);
        puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3c70);
        *puVar10 = 1;
      }
      pbVar8 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3c60);
      if (pbVar8[0xe] != 0) {
        *pbVar8 = *pbVar8 ^ 0xb1;
        pbVar8[1] = pbVar8[1] ^ 0xcd;
        pbVar8[2] = pbVar8[2] ^ 0xf5;
        pbVar8[3] = pbVar8[3] ^ 0x8f;
        pbVar8[0xe] = 0;
        pbVar8[4] = pbVar8[4] ^ 0x8f;
        pbVar8[5] = pbVar8[5] ^ 0x7b;
        pbVar8[6] = pbVar8[6] ^ 0xc1;
        pbVar8[7] = pbVar8[7] ^ 0x69;
        pbVar8[8] = pbVar8[8] ^ 0xb1;
        pbVar8[9] = pbVar8[9] ^ 0xcd;
        pbVar8[10] = pbVar8[10] ^ 0xf5;
        pbVar8[0xb] = pbVar8[0xb] ^ 0x8f;
        pbVar8[0xc] = pbVar8[0xc] ^ 0x8f;
        pbVar8[0xd] = pbVar8[0xd] ^ 0x7b;
      }
      DAT_711a3a48 = FUN_71885ba4(pbVar8,0);
      thunk_SixizuLbAnqfgRApsCY(&DAT_711a3a4c);
    }
    uVar3 = DAT_711a3a48;
    imp___aeabi_memclr4(&iStack_54,0x30);
    uStack_58 = uVar3;
    uVar3 = FUN_713a0424(&uStack_58,0x186a1);
  }
  else {
    if (*piVar11 == 0) {
      iVar1 = FUN_713c301c(0);
      if (iVar1 == 0) {
        if (*piVar11 == 0) {
          return;
        }
      }
      else {
        thunk_MwhHq(0x3a0);
        iVar1 = FUN_715ba834();
        *piVar11 = iVar1;
      }
    }
    if (*(int *)(param_1 + 0x138d4) != 0) {
      return;
    }
    uVar3 = *(undefined4 *)(param_1 + 0x138a8);
    uVar3 = FUN_71563d2c(uVar3,0,*(undefined4 *)(param_1 + 0x138a0),
                         *(undefined4 *)(param_1 + 0x138a4),uVar3,0x3ed,0);
    *(undefined4 *)(param_1 + 0x138d4) = uVar3;
    iVar1 = DAT_712017f8;
    DataMemoryBarrier(0xb);
    if (((DAT_711a3a44 & 1) == 0) && (iVar6 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711a3a44), iVar6 != 0))
    {
      pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3c50);
      if (*pcVar7 == '\0') {
        puVar2 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3c40);
        *puVar2 = 0x424d0708;
        puVar2[1] = 0x185e074a;
        *(undefined1 *)((int)puVar2 + 0xb) = 1;
        *(undefined4 *)((int)puVar2 + 7) = 0x290d0618;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_7156a38c,puVar2,&DAT_70b0e000);
        puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3c50);
        *puVar10 = 1;
      }
      pbVar8 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3c40);
      if (pbVar8[0xb] != 0) {
        *pbVar8 = *pbVar8 ^ 0x69;
        pbVar8[1] = pbVar8[1] ^ 99;
        pbVar8[2] = pbVar8[2] ^ 0x29;
        pbVar8[3] = pbVar8[3] ^ 0xf;
        pbVar8[0xb] = 0;
        pbVar8[4] = pbVar8[4] ^ 0x2b;
        pbVar8[5] = pbVar8[5] ^ 0x77;
        pbVar8[6] = pbVar8[6] ^ 0x17;
        pbVar8[7] = pbVar8[7] ^ 0x7b;
        pbVar8[8] = pbVar8[8] ^ 0x69;
        pbVar8[9] = pbVar8[9] ^ 99;
        pbVar8[10] = pbVar8[10] ^ 0x29;
      }
      DAT_711a3a40 = FUN_71885ba4(pbVar8,0);
      thunk_SixizuLbAnqfgRApsCY(&DAT_711a3a44);
    }
    uVar3 = DAT_711a3a40;
    imp___aeabi_memclr4(&iStack_54,0x30);
    uStack_58 = uVar3;
    uVar3 = FUN_713a0424(&uStack_58,0x186a1);
    uVar18 = FUN_71ba1638(*(undefined4 *)(param_1 + 0x138a0));
    uVar4 = (undefined4)((ulonglong)uVar18 >> 0x20);
    uVar3 = FUN_714d597c(uVar3,uVar4,(int)uVar18,uVar4);
    uVar18 = FUN_71ba1638(*(undefined4 *)(param_1 + 0x138a4));
    uVar4 = (undefined4)((ulonglong)uVar18 >> 0x20);
    uVar3 = FUN_714d597c(uVar3,uVar4,(int)uVar18,uVar4);
    uVar18 = FUN_71ba1638(*(undefined4 *)(param_1 + 0x138a8));
    uVar4 = (undefined4)((ulonglong)uVar18 >> 0x20);
    uVar3 = FUN_714d597c(uVar3,uVar4,(int)uVar18,uVar4);
    uVar3 = FUN_713a0424(uVar3,0);
    uVar3 = FUN_713a0424(uVar3,0x3ed);
    uVar3 = FUN_713a0424(uVar3,0);
    uVar3 = FUN_713a1f9c(uVar3,1);
    uVar18 = FUN_713a0424(uVar3,0xffffffff);
    uVar3 = FUN_714d597c((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),0,0);
  }
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(iVar1 + 0x34);
  piVar11 = (int *)thunk_MwhHq(0x3c);
  *piVar11 = 0;
  piVar11[1] = 0;
  FUN_713a10f8(piVar11 + 2,uVar3);
  piVar11[1] = iVar1 + 0x38;
  iVar6 = *(int *)(iVar1 + 0x38);
  *piVar11 = iVar6;
  *(int **)(iVar6 + 4) = piVar11;
  *(int **)(iVar1 + 0x38) = piVar11;
  *(int *)(iVar1 + 0x40) = *(int *)(iVar1 + 0x40) + 1;
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(iVar1 + 0x34);
  if (iStack_3c != 0) {
    iStack_38 = iStack_3c;
    thunk_qNQrlu();
  }
  if (iStack_48 != 0) {
    iStack_44 = iStack_48;
    thunk_qNQrlu();
  }
  if (iStack_54 == 0) {
    return;
  }
  iStack_50 = iStack_54;
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: thunk_FUN_71566860
// Entry: 0x7156684c | Size: 12 bytes
// =========================================================================

void thunk_FUN_71566860(void)

{
  FUN_71566860();
  return;
}


// =========================================================================
// Function: FUN_71566860
// Entry: 0x71566860 | Size: 20 bytes
// =========================================================================

undefined4 FUN_71566860(void)

{
  return *DAT_70b46f00;
}


// =========================================================================
// Function: thunk_FUN_715668c0
// Entry: 0x715668ac | Size: 12 bytes
// =========================================================================

void thunk_FUN_715668c0(void)

{
  FUN_715668c0();
  return;
}


// =========================================================================
// Function: FUN_715668c0
// Entry: 0x715668c0 | Size: 44 bytes
// =========================================================================

void FUN_715668c0(undefined4 param_1,undefined1 param_2,undefined1 param_3)

{
  *DAT_70b46ecc = param_2;
  *DAT_70b46ec8 = param_3;
  FUN_715d33c8(&DAT_700820e2);
  return;
}


// =========================================================================
// Function: thunk_FUN_71566994
// Entry: 0x71566980 | Size: 12 bytes
// =========================================================================

void thunk_FUN_71566994(void)

{
  FUN_71566994();
  return;
}


// =========================================================================
// Function: FUN_71566994
// Entry: 0x71566994 | Size: 72 bytes
// =========================================================================

void FUN_71566994(int param_1,undefined2 param_2)

{
  *DAT_70b88ad8 = param_2;
  if (*(char *)(param_1 + 0x138ec) != '\0') {
    return;
  }
  *DAT_70b88adc = param_2;
  *DAT_70b88ae0 = param_2;
  return;
}


// =========================================================================
// Function: thunk_FUN_71566a68
// Entry: 0x71566a54 | Size: 12 bytes
// =========================================================================

void thunk_FUN_71566a68(void)

{
  FUN_71566a68();
  return;
}


// =========================================================================
// Function: FUN_71566a68
// Entry: 0x71566a68 | Size: 12 bytes
// =========================================================================

void FUN_71566a68(void)

{
  FUN_715d33c8(&DAT_700820f4);
  return;
}


// =========================================================================
// Function: FUN_71566ac8
// Entry: 0x71566ac8 | Size: 796 bytes
// =========================================================================

void FUN_71566ac8(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  undefined1 uVar4;
  int iVar5;
  char *pcVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar8 = DAT_70b2fb68;
  if (param_2 == 0) {
    if (*(char *)(param_1 + 0x138ef) != '\0') {
      FUN_715d33c8(&DAT_70082106,1);
      *(undefined1 *)(param_1 + 0x138ef) = 0;
    }
    FUN_7130d61c(DAT_70b2fb68);
    uVar4 = 0;
  }
  else {
    if (param_2 != 1) {
      if ((int)param_2 < 1000) {
        DataMemoryBarrier(0xb);
        if (((DAT_70b2fb70 & 1) == 0) &&
           (iVar5 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2fb70), iVar5 != 0)) {
          pcVar6 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9094,param_2);
          if (*pcVar6 == '\0') {
            iVar5 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9084);
            *(undefined1 *)(iVar5 + 0x48) = 1;
            imp___aeabi_memcpy8(iVar5,&DAT_70072ea0,0x48);
            thunk_GFDIUClbc_QcPNgD_wH(&LAB_7130da78,iVar5,&DAT_70b0e000);
            puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9094);
            *puVar7 = 1;
          }
          iVar5 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9084);
          if (*(char *)(iVar5 + 0x48) != '\0') {
            uVar9 = 0;
            uVar10 = 0;
            do {
              iVar11 = (uVar9 & 7) * 8;
              uVar12 = iVar11 - 0x20;
              bVar3 = (byte)(0x93a3c787 >> iVar11) |
                      (byte)(0x47abcda5 << ((uVar9 & 7) * -8 + 0x20 & 0xff));
              if (-1 < (int)uVar12) {
                bVar3 = (byte)(0x47abcda5 >> (uVar12 & 0xff));
              }
              *(byte *)(iVar5 + uVar9) = *(byte *)(iVar5 + uVar9) ^ bVar3;
              bVar13 = 0xfffffffe < uVar9;
              bVar1 = uVar10 == 0;
              bVar2 = (0x46 < uVar9) <= uVar10;
              uVar9 = uVar9 + 1;
              uVar10 = uVar10 + bVar13;
            } while (bVar1 && bVar2);
            *(undefined1 *)(iVar5 + 0x48) = 0;
          }
          DAT_70b2fb6c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar5,1);
          thunk_SixizuLbAnqfgRApsCY(&DAT_70b2fb70);
        }
                    /* WARNING: Could not recover jumptable at 0x7130d218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*DAT_70b2fb6c)(uVar8,param_2);
        return;
      }
      if (param_2 < 2000) {
        uVar14 = FUN_71ba1638(param_4);
        uVar15 = FUN_71ba1638(param_5);
        uVar16 = FUN_71ba1638(param_3);
        uVar8 = (undefined4)((ulonglong)uVar16 >> 0x20);
        FUN_715d33c8(&DAT_7008214e,uVar8,(int)uVar16,uVar8,uVar14,uVar15,param_2);
        return;
      }
      FUN_715d33c8(&DAT_70082106,1);
      FUN_715d33c8(&DAT_70082118,1,param_2);
      uVar14 = FUN_71ba1638(param_4);
      uVar15 = FUN_71ba1638(param_5);
      uVar16 = FUN_71ba1638(param_3);
      FUN_715d33c8(&DAT_7008212a,1,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20),uVar14,uVar15);
      FUN_715d33c8(&DAT_7008213c,1);
      *(undefined1 *)(param_1 + 0x138ef) = 1;
      return;
    }
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 0x138ee) = uVar4;
  return;
}


// =========================================================================
// Function: FUN_71566f10
// Entry: 0x71566f10 | Size: 40 bytes
// =========================================================================

void FUN_71566f10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_71ba1638(param_3);
  uVar3 = FUN_71ba1638(param_2);
  uVar1 = (undefined4)((ulonglong)uVar3 >> 0x20);
  FUN_715d33c8(&DAT_70082160,uVar1,(int)uVar3,uVar1,uVar2);
  return;
}


// =========================================================================
// Function: thunk_FUN_7156700c
// Entry: 0x71566ff8 | Size: 12 bytes
// =========================================================================

void thunk_FUN_7156700c(void)

{
  FUN_7156700c();
  return;
}


// =========================================================================
// Function: FUN_7156700c
// Entry: 0x7156700c | Size: 16 bytes
// =========================================================================

void FUN_7156700c(void)

{
  FUN_715d33c8(&DAT_70082172,0);
  return;
}


// =========================================================================
// Function: FUN_71567070
// Entry: 0x71567070 | Size: 20 bytes
// =========================================================================

void FUN_71567070(void)

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
  
  FUN_713ccae0();
  DataMemoryBarrier(0xb);
  if (((DAT_70b46eb4 & 1) == 0) && (iVar6 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46eb4), iVar6 != 0)) {
    pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcb70);
    if (*pcVar7 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcb60);
      *(undefined1 *)((int)puVar8 + 0x1e) = 1;
      uVar4 = DAT_70077208;
      uVar3 = DAT_70077204;
      *puVar8 = DAT_70077200;
      puVar8[1] = uVar3;
      puVar8[2] = uVar4;
      uVar5 = DAT_70077218;
      uVar4 = DAT_70077214;
      uVar3 = DAT_70077210;
      puVar8[3] = DAT_7007720c;
      puVar8[4] = uVar3;
      puVar8[5] = uVar4;
      puVar8[6] = uVar5;
      *(undefined2 *)(puVar8 + 7) = DAT_7007721c;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713127cc,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcb70);
      *puVar9 = 1;
    }
    iVar6 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcb60);
    if (*(char *)(iVar6 + 0x1e) != '\0') {
      uVar10 = 0;
      uVar11 = 0;
      do {
        iVar12 = (uVar10 & 7) * 8;
        uVar13 = iVar12 - 0x20;
        bVar14 = (byte)(0xc77d4573 >> iVar12) |
                 (byte)(-0x164a4c4f << ((uVar10 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar13) {
          bVar14 = (byte)(0xe9b5b3b1 >> (uVar13 & 0xff));
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
    DAT_70b46eb0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar6,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46eb4);
  }
                    /* WARNING: Could not recover jumptable at 0x713cc708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46eb0)();
  return;
}


// =========================================================================
// Function: thunk_FUN_71567138
// Entry: 0x71567124 | Size: 12 bytes
// =========================================================================

void thunk_FUN_71567138(void)

{
  FUN_71567138();
  return;
}


// =========================================================================
// Function: FUN_71567138
// Entry: 0x71567138 | Size: 16 bytes
// =========================================================================

undefined1 FUN_71567138(int param_1)

{
  return *(undefined1 *)(param_1 + 0x138ed);
}


// =========================================================================
// Function: FUN_71567160
// Entry: 0x71567160 | Size: 28 bytes
// =========================================================================

undefined1 FUN_71567160(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0) && (iVar1 = FUN_713040e0(param_2), iVar1 != 0)) {
    uVar2 = *(undefined1 *)(iVar1 + 0x10);
  }
  return uVar2;
}


// =========================================================================
// Function: FUN_715671d4
// Entry: 0x715671d4 | Size: 1844 bytes
// =========================================================================

bool FUN_715671d4(int param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  undefined8 uVar16;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3c90);
  if (*pcVar5 == '\0') {
    puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3c80);
    *(undefined1 *)((int)puVar8 + 0x11) = 1;
    uVar4 = DAT_700821f4;
    uVar3 = DAT_700821f0;
    uVar2 = DAT_700821ec;
    *puVar8 = DAT_700821e8;
    puVar8[1] = uVar2;
    puVar8[2] = uVar3;
    puVar8[3] = uVar4;
    *(undefined1 *)(puVar8 + 4) = DAT_700821f8;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_7156a3e8,puVar8,&DAT_70b0e000);
    puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3c90);
    *puVar9 = 1;
  }
  iVar6 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3c80);
  if (*(char *)(iVar6 + 0x11) != '\0') {
    uVar7 = 0;
    uVar13 = 0;
    do {
      iVar11 = (uVar7 & 7) * 8;
      uVar12 = iVar11 - 0x20;
      bVar10 = (byte)(0x27f5d38d >> iVar11) | (byte)(0x2bf75f09 << ((uVar7 & 7) * -8 + 0x20 & 0xff))
      ;
      if (-1 < (int)uVar12) {
        bVar10 = (byte)(0x2bf75f09 >> (uVar12 & 0xff));
      }
      *(byte *)(iVar6 + uVar7) = *(byte *)(iVar6 + uVar7) ^ bVar10;
      bVar15 = 0xfffffffe < uVar7;
      bVar14 = uVar13 == 0;
      bVar1 = (0xf < uVar7) <= uVar13;
      uVar7 = uVar7 + 1;
      uVar13 = uVar13 + bVar15;
    } while (bVar14 && bVar1);
    *(undefined1 *)(iVar6 + 0x11) = 0;
  }
  uVar7 = imp_strlen(iVar6);
  if (0xfffffff7 < uVar7) goto LAB_715678f8;
  if (uVar7 < 0xb) {
    uVar13 = (uint)&uStack_30 | 1;
    uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar7 << 1));
    if (uVar7 != 0) goto LAB_715672d8;
  }
  else {
    uVar13 = thunk_MwhHq((uVar7 | 7) + 1);
    uStack_30 = (uVar7 | 7) + 2;
    uStack_2c = uVar7;
    uStack_28 = uVar13;
LAB_715672d8:
    imp___aeabi_memmove(uVar13,iVar6,uVar7);
  }
  *(undefined1 *)(uVar13 + uVar7) = 0;
  iVar6 = FUN_717c5e7c(&uStack_30);
  bVar14 = true;
  if (iVar6 == 0) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3cb0);
    if (*pcVar5 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3ca0);
      *(undefined1 *)((int)puVar8 + 0x12) = 1;
      uVar4 = DAT_7008220c;
      uVar3 = DAT_70082208;
      uVar2 = DAT_70082204;
      *puVar8 = DAT_70082200;
      puVar8[1] = uVar2;
      puVar8[2] = uVar3;
      puVar8[3] = uVar4;
      *(undefined2 *)(puVar8 + 4) = DAT_70082210;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7156a41c,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3cb0);
      *puVar9 = 1;
    }
    iVar6 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3ca0);
    if (*(char *)(iVar6 + 0x12) != '\0') {
      uVar7 = 0;
      uVar13 = 0;
      do {
        iVar11 = (uVar7 & 7) * 8;
        uVar12 = iVar11 - 0x20;
        bVar10 = (byte)(0x27f5d38d >> iVar11) |
                 (byte)(0x2bf75f09 << ((uVar7 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar12) {
          bVar10 = (byte)(0x2bf75f09 >> (uVar12 & 0xff));
        }
        *(byte *)(iVar6 + uVar7) = *(byte *)(iVar6 + uVar7) ^ bVar10;
        bVar15 = 0xfffffffe < uVar7;
        bVar14 = uVar13 == 0;
        bVar1 = (0x10 < uVar7) <= uVar13;
        uVar7 = uVar7 + 1;
        uVar13 = uVar13 + bVar15;
      } while (bVar14 && bVar1);
      *(undefined1 *)(iVar6 + 0x12) = 0;
    }
    uVar7 = imp_strlen(iVar6);
    if (0xfffffff7 < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_712f6c1c(&uStack_3c);
    }
    if (uVar7 < 0xb) {
      uVar13 = (uint)&uStack_3c | 1;
      uStack_3c = CONCAT31(uStack_3c._1_3_,(char)(uVar7 << 1));
      if (uVar7 != 0) goto LAB_715673f8;
    }
    else {
      uVar13 = thunk_MwhHq((uVar7 | 7) + 1);
      uStack_3c = (uVar7 | 7) + 2;
      uStack_38 = uVar7;
      uStack_34 = uVar13;
LAB_715673f8:
      imp___aeabi_memmove(uVar13,iVar6,uVar7);
    }
    *(undefined1 *)(uVar13 + uVar7) = 0;
    iVar6 = FUN_717c5e7c(&uStack_3c);
    bVar14 = iVar6 != 0;
    if ((uStack_3c & 1) != 0) {
      thunk_qNQrlu(uStack_34);
    }
  }
  if ((uStack_30 & 1) != 0) {
    thunk_qNQrlu(uStack_28);
  }
  if (bVar14) {
    if (param_1 == 0) {
      return false;
    }
    if (*(int *)(param_1 + *(char *)(param_1 + 0x71c) * 0x1c + 0x5a4) - 0x13U < 3) {
      return true;
    }
    if (param_2 == 0) {
      return false;
    }
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3cd0);
    if (*pcVar5 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3cc0);
      *(undefined1 *)((int)puVar8 + 0x11) = 1;
      uVar4 = DAT_70082224;
      uVar3 = DAT_70082220;
      uVar2 = DAT_7008221c;
      *puVar8 = DAT_70082218;
      puVar8[1] = uVar2;
      puVar8[2] = uVar3;
      puVar8[3] = uVar4;
      *(undefined1 *)(puVar8 + 4) = DAT_70082228;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7156a450,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3cd0);
      *puVar9 = 1;
    }
    iVar6 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3cc0);
    if (*(char *)(iVar6 + 0x11) != '\0') {
      uVar7 = 0;
      uVar13 = 0;
      do {
        iVar11 = (uVar7 & 7) * 8;
        uVar12 = iVar11 - 0x20;
        bVar10 = (byte)(0xc745edbd >> iVar11) |
                 (byte)(0x636db10b << ((uVar7 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar12) {
          bVar10 = (byte)(0x636db10b >> (uVar12 & 0xff));
        }
        *(byte *)(iVar6 + uVar7) = *(byte *)(iVar6 + uVar7) ^ bVar10;
        bVar15 = 0xfffffffe < uVar7;
        bVar14 = uVar13 == 0;
        bVar1 = (0xf < uVar7) <= uVar13;
        uVar7 = uVar7 + 1;
        uVar13 = uVar13 + bVar15;
      } while (bVar14 && bVar1);
      *(undefined1 *)(iVar6 + 0x11) = 0;
    }
    uVar7 = imp_strlen(iVar6);
    if (0xfffffff7 < uVar7) goto LAB_715678f8;
    if (uVar7 < 0xb) {
      uVar13 = (uint)&uStack_30 | 1;
      uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar7 << 1));
      if (uVar7 != 0) goto LAB_715676f0;
    }
    else {
      uVar13 = thunk_MwhHq((uVar7 | 7) + 1);
      uStack_30 = (uVar7 | 7) + 2;
      uStack_2c = uVar7;
      uStack_28 = uVar13;
LAB_715676f0:
      imp___aeabi_memmove(uVar13,iVar6,uVar7);
    }
    *(undefined1 *)(uVar13 + uVar7) = 0;
    iVar6 = FUN_717c5e7c(&uStack_30);
    if (param_2 == 0) {
      return iVar6 == 2;
    }
    if ((uStack_30 & 1) != 0) {
      thunk_qNQrlu(uStack_28);
    }
    if (iVar6 != 2) {
      return false;
    }
  }
  else if (param_2 == 0) {
    return true;
  }
  pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3cf0);
  if (*pcVar5 == '\0') {
    puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3ce0);
    *(undefined1 *)((int)puVar8 + 0x11) = 1;
    uVar4 = DAT_7008223c;
    uVar3 = DAT_70082238;
    uVar2 = DAT_70082234;
    *puVar8 = DAT_70082230;
    puVar8[1] = uVar2;
    puVar8[2] = uVar3;
    puVar8[3] = uVar4;
    *(undefined1 *)(puVar8 + 4) = DAT_70082240;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_7156a484,puVar8,&DAT_70b0e000);
    puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3cf0);
    *puVar9 = 1;
  }
  iVar6 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3ce0);
  if (*(char *)(iVar6 + 0x11) != '\0') {
    uVar7 = 0;
    uVar13 = 0;
    do {
      iVar11 = (uVar7 & 7) * 8;
      uVar12 = iVar11 - 0x20;
      bVar10 = (byte)(0xc59f53d3 >> iVar11) |
               (byte)(-0x105e3ead << ((uVar7 & 7) * -8 + 0x20 & 0xff));
      if (-1 < (int)uVar12) {
        bVar10 = (byte)(0xefa1c153 >> (uVar12 & 0xff));
      }
      *(byte *)(iVar6 + uVar7) = *(byte *)(iVar6 + uVar7) ^ bVar10;
      bVar15 = 0xfffffffe < uVar7;
      bVar14 = uVar13 == 0;
      bVar1 = (0xf < uVar7) <= uVar13;
      uVar7 = uVar7 + 1;
      uVar13 = uVar13 + bVar15;
    } while (bVar14 && bVar1);
    *(undefined1 *)(iVar6 + 0x11) = 0;
  }
  uVar7 = imp_strlen(iVar6);
  if (0xfffffff7 < uVar7) {
LAB_715678f8:
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_30);
  }
  if (uVar7 < 0xb) {
    uVar13 = (uint)&uStack_30 | 1;
    uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar7 << 1));
    if (uVar7 == 0) goto LAB_7156765c;
  }
  else {
    uVar13 = thunk_MwhHq((uVar7 | 7) + 1);
    uStack_30 = (uVar7 | 7) + 2;
    uStack_2c = uVar7;
    uStack_28 = uVar13;
  }
  imp___aeabi_memmove(uVar13,iVar6,uVar7);
LAB_7156765c:
  *(undefined1 *)(uVar13 + uVar7) = 0;
  uVar16 = FUN_717c5e7c(&uStack_30);
  uVar7 = (uint)((ulonglong)uVar16 >> 0x20);
  if (param_2 != 0) {
    uVar7 = uStack_30 & 0xff;
  }
  if (param_2 != 0 && (uVar7 & 1) != 0) {
    thunk_qNQrlu(uStack_28);
  }
  if ((int)uVar16 == 2) {
    if (param_1 == 0) {
      return false;
    }
    iVar6 = *(int *)(param_1 + *(char *)(param_1 + 0x71c) * 0x1c + 0x5a4);
    return iVar6 == 3 || iVar6 == 0x17;
  }
  return true;
}


// =========================================================================
// Function: FUN_71568138
// Entry: 0x71568138 | Size: 16 bytes
// =========================================================================

void FUN_71568138(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return;
  }
  iVar1 = FUN_71303cbc(param_2);
  if (iVar1 == -1) {
    return;
  }
  FUN_7135d734(iVar1 + 0x63e7,4);
  return;
}


// =========================================================================
// Function: FUN_715681d4
// Entry: 0x715681d4 | Size: 20 bytes
// =========================================================================

void FUN_715681d4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  char *pcVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  
  FUN_715d33c8(&DAT_70082184);
  FUN_7144c210(param_2,DAT_711a393c);
  uVar3 = DAT_711a393c;
  DataMemoryBarrier(0xb);
  if (((DAT_70ffd304 & 1) == 0) && (iVar5 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffd304), iVar5 != 0)) {
    pcVar6 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfcd8,param_3,param_4);
    if (*pcVar6 == '\0') {
      iVar5 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfcc8);
      *(undefined1 *)(iVar5 + 0x4c) = 1;
      imp___aeabi_memcpy8(iVar5,&DAT_7007f010,0x4c);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713d14e8,iVar5,&DAT_70b0e000);
      puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfcd8);
      *puVar7 = 1;
    }
    iVar5 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfcc8);
    if (*(char *)(iVar5 + 0x4c) != '\0') {
      uVar8 = 0;
      uVar9 = 0;
      do {
        iVar10 = (uVar8 & 7) * 8;
        bVar4 = (byte)(0xc77d4573 >> iVar10) |
                (byte)(-0x164a4c4f << ((uVar8 & 7) * -8 + 0x20 & 0xff));
        uVar11 = iVar10 - 0x20;
        if (-1 < (int)uVar11) {
          bVar4 = (byte)(0xe9b5b3b1 >> (uVar11 & 0xff));
        }
        *(byte *)(iVar5 + uVar8) = *(byte *)(iVar5 + uVar8) ^ bVar4;
        bVar12 = 0xfffffffe < uVar8;
        bVar1 = uVar9 == 0;
        bVar2 = (0x4a < uVar8) <= uVar9;
        uVar8 = uVar8 + 1;
        uVar9 = uVar9 + bVar12;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar5 + 0x4c) = 0;
    }
    DAT_70ffd300 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar5,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffd304);
  }
                    /* WARNING: Could not recover jumptable at 0x714510f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffd300)(uVar3,param_3,param_4);
  return;
}


// =========================================================================
// Function: thunk_FUN_71568310
// Entry: 0x715682fc | Size: 12 bytes
// =========================================================================

void thunk_FUN_71568310(void)

{
  FUN_71568310();
  return;
}


// =========================================================================
// Function: FUN_71568310
// Entry: 0x71568310 | Size: 4 bytes
// =========================================================================

void FUN_71568310(void)

{
  return;
}


// =========================================================================
// Function: thunk_FUN_71568340
// Entry: 0x7156832c | Size: 12 bytes
// =========================================================================

void thunk_FUN_71568340(void)

{
  FUN_71568340();
  return;
}


// =========================================================================
// Function: FUN_71568340
// Entry: 0x71568340 | Size: 16 bytes
// =========================================================================

undefined4 FUN_71568340(void)

{
  return DAT_70c2435c;
}


// =========================================================================
// Function: thunk_FUN_7156842c
// Entry: 0x71568404 | Size: 12 bytes
// =========================================================================

void thunk_FUN_7156842c(void)

{
  thunk_FUN_7156842c();
  return;
}


// =========================================================================
// Function: thunk_FUN_7156842c
// Entry: 0x71568418 | Size: 12 bytes
// =========================================================================

void thunk_FUN_7156842c(void)

{
  FUN_7156842c();
  return;
}


// =========================================================================
// Function: FUN_7156842c
// Entry: 0x7156842c | Size: 52 bytes
// =========================================================================

void FUN_7156842c(void)

{
  if (DAT_70c2435c != 0) {
    FUN_715d33c8(&DAT_700821a8,0,-DAT_70c2435c);
    return;
  }
  return;
}


// =========================================================================
// Function: thunk_FUN_715684f0
// Entry: 0x715684dc | Size: 12 bytes
// =========================================================================

void thunk_FUN_715684f0(void)

{
  FUN_715684f0();
  return;
}


// =========================================================================
// Function: FUN_715684f0
// Entry: 0x715684f0 | Size: 4 bytes
// =========================================================================

void FUN_715684f0(void)

{
  return;
}


// =========================================================================
// Function: FUN_7156850c
// Entry: 0x7156850c | Size: 84 bytes
// =========================================================================

void FUN_7156850c(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_1c = *param_2;
  uStack_18 = param_2[1];
  uStack_14 = param_2[2];
  uStack_10 = param_2[3];
  uStack_c = param_3;
  FUN_7145cc14(&uStack_1c,&uStack_c,DAT_711f2e50 != '\0');
  return;
}


// =========================================================================
// Function: FUN_715685bc
// Entry: 0x715685bc | Size: 1456 bytes
// =========================================================================

undefined4 FUN_715685bc(int param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  bool bVar17;
  
  iVar16 = DAT_70b41f74 + param_1 * 0x14;
  if (*(int *)(iVar16 + 0x10) != 1) {
    pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3d10);
    if (*pcVar7 == '\0') {
      iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3d00);
      *(undefined1 *)(iVar8 + 0x4a) = 1;
      imp___aeabi_memcpy8(iVar8,&DAT_70082248,0x4a);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7156a4b8,iVar8,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3d10);
      *puVar10 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3d00);
    if (*(char *)(iVar8 + 0x4a) != '\0') {
      uVar12 = 0;
      uVar14 = 0;
      do {
        iVar13 = (uVar12 & 7) * 8;
        bVar11 = (byte)(0xf97d4b17 >> iVar13) |
                 (byte)(0x51397719 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        uVar15 = iVar13 - 0x20;
        if (-1 < (int)uVar15) {
          bVar11 = (byte)(0x51397719 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar11;
        bVar17 = 0xfffffffe < uVar12;
        bVar1 = uVar14 == 0;
        bVar2 = (0x48 < uVar12) <= uVar14;
        uVar12 = uVar12 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x4a) = 0;
    }
    FUN_7188543c(iVar8,param_1,*(undefined4 *)(iVar16 + 0x10),*(undefined1 *)(iVar16 + 6),
                 *(undefined4 *)(iVar16 + 8),*(undefined4 *)(iVar16 + 0xc));
    FUN_716486e8(iVar8,param_1,*(undefined4 *)(iVar16 + 0x10),*(undefined1 *)(iVar16 + 6),
                 *(undefined4 *)(iVar16 + 8),*(undefined4 *)(iVar16 + 0xc));
    FUN_7135d734(param_1,2);
    FUN_7135ceec(0);
    iVar8 = FUN_71886108();
    iVar13 = *(int *)(iVar16 + 0x10);
    while (iVar13 != 1) {
      iVar13 = FUN_71886108();
      if (10000 < (uint)(iVar13 - iVar8)) {
        pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3d70);
        if (*pcVar7 == '\0') {
          puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3d60);
          *(undefined1 *)((int)puVar9 + 0x26) = 1;
          uVar5 = DAT_700822f4;
          uVar4 = DAT_700822f0;
          uVar3 = DAT_700822ec;
          *puVar9 = DAT_700822e8;
          puVar9[1] = uVar3;
          puVar9[2] = uVar4;
          puVar9[3] = uVar5;
          uVar6 = DAT_70082308;
          uVar5 = DAT_70082304;
          uVar4 = DAT_70082300;
          uVar3 = DAT_700822fc;
          puVar9[4] = DAT_700822f8;
          puVar9[5] = uVar3;
          puVar9[6] = uVar4;
          puVar9[7] = uVar5;
          puVar9[8] = uVar6;
          *(undefined2 *)(puVar9 + 9) = DAT_7008230c;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_7156a5a8,puVar9,&DAT_70b0e000);
          puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3d70);
          *puVar10 = 1;
        }
        iVar16 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3d60);
        if (*(char *)(iVar16 + 0x26) != '\0') {
          uVar12 = 0;
          uVar14 = 0;
          do {
            iVar8 = (uVar12 & 7) * 8;
            uVar15 = iVar8 - 0x20;
            bVar11 = (byte)(0xdd3db78f >> iVar8) |
                     (byte)(0x7735e9e7 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
            if (-1 < (int)uVar15) {
              bVar11 = (byte)(0x7735e9e7 >> (uVar15 & 0xff));
            }
            *(byte *)(iVar16 + uVar12) = *(byte *)(iVar16 + uVar12) ^ bVar11;
            bVar17 = 0xfffffffe < uVar12;
            bVar1 = uVar14 == 0;
            bVar2 = (0x24 < uVar12) <= uVar14;
            uVar12 = uVar12 + 1;
            uVar14 = uVar14 + bVar17;
          } while (bVar1 && bVar2);
          *(undefined1 *)(iVar16 + 0x26) = 0;
        }
        FUN_7188543c(iVar16,param_1);
        pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3d90);
        if (*pcVar7 == '\0') {
          puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3d80);
          *(undefined1 *)((int)puVar9 + 0x26) = 1;
          uVar5 = DAT_7008231c;
          uVar4 = DAT_70082318;
          uVar3 = DAT_70082314;
          *puVar9 = DAT_70082310;
          puVar9[1] = uVar3;
          puVar9[2] = uVar4;
          puVar9[3] = uVar5;
          uVar6 = DAT_70082330;
          uVar5 = DAT_7008232c;
          uVar4 = DAT_70082328;
          uVar3 = DAT_70082324;
          puVar9[4] = DAT_70082320;
          puVar9[5] = uVar3;
          puVar9[6] = uVar4;
          puVar9[7] = uVar5;
          puVar9[8] = uVar6;
          *(undefined2 *)(puVar9 + 9) = DAT_70082334;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_7156a5f8,puVar9,&DAT_70b0e000);
          puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3d90);
          *puVar10 = 1;
        }
        iVar16 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3d80);
        if (*(char *)(iVar16 + 0x26) != '\0') {
          uVar12 = 0;
          uVar14 = 0;
          do {
            iVar8 = (uVar12 & 7) * 8;
            uVar15 = iVar8 - 0x20;
            bVar11 = (byte)(0xc1c71b47 >> iVar8) |
                     (byte)(0x236be723 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
            if (-1 < (int)uVar15) {
              bVar11 = (byte)(0x236be723 >> (uVar15 & 0xff));
            }
            *(byte *)(iVar16 + uVar12) = *(byte *)(iVar16 + uVar12) ^ bVar11;
            bVar17 = 0xfffffffe < uVar12;
            bVar1 = uVar14 == 0;
            bVar2 = (0x24 < uVar12) <= uVar14;
            uVar12 = uVar12 + 1;
            uVar14 = uVar14 + bVar17;
          } while (bVar1 && bVar2);
          *(undefined1 *)(iVar16 + 0x26) = 0;
        }
        FUN_716486e8(iVar16,param_1);
        FUN_717ef664();
        return 0;
      }
      imp_usleep(1);
      iVar13 = *(int *)(iVar16 + 0x10);
    }
    pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3d30);
    if (*pcVar7 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3d20);
      *(undefined1 *)(puVar9 + 10) = 1;
      uVar6 = DAT_700822a8;
      uVar5 = DAT_700822a4;
      uVar4 = DAT_700822a0;
      uVar3 = DAT_7008229c;
      *puVar9 = DAT_70082298;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      puVar9[4] = uVar6;
      uVar6 = DAT_700822bc;
      uVar5 = DAT_700822b8;
      uVar4 = DAT_700822b4;
      uVar3 = DAT_700822b0;
      puVar9[5] = DAT_700822ac;
      puVar9[6] = uVar3;
      puVar9[7] = uVar4;
      puVar9[8] = uVar5;
      puVar9[9] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7156a508,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3d30);
      *puVar10 = 1;
    }
    iVar16 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3d20);
    if (*(char *)(iVar16 + 0x28) != '\0') {
      uVar12 = 0;
      uVar14 = 0;
      do {
        iVar8 = (uVar12 & 7) * 8;
        uVar15 = iVar8 - 0x20;
        bVar11 = (byte)(0x9f050909 >> iVar8) |
                 (byte)(0x79d90ded << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar11 = (byte)(0x79d90ded >> (uVar15 & 0xff));
        }
        *(byte *)(iVar16 + uVar12) = *(byte *)(iVar16 + uVar12) ^ bVar11;
        bVar17 = 0xfffffffe < uVar12;
        bVar1 = uVar14 == 0;
        bVar2 = (0x26 < uVar12) <= uVar14;
        uVar12 = uVar12 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar16 + 0x28) = 0;
    }
    FUN_7188543c(iVar16,param_1);
    pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3d50);
    if (*pcVar7 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3d40);
      *(undefined1 *)(puVar9 + 10) = 1;
      uVar6 = DAT_700822d0;
      uVar5 = DAT_700822cc;
      uVar4 = DAT_700822c8;
      uVar3 = DAT_700822c4;
      *puVar9 = DAT_700822c0;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      puVar9[4] = uVar6;
      uVar6 = DAT_700822e4;
      uVar5 = DAT_700822e0;
      uVar4 = DAT_700822dc;
      uVar3 = DAT_700822d8;
      puVar9[5] = DAT_700822d4;
      puVar9[6] = uVar3;
      puVar9[7] = uVar4;
      puVar9[8] = uVar5;
      puVar9[9] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7156a558,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3d50);
      *puVar10 = 1;
    }
    iVar16 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3d40);
    if (*(char *)(iVar16 + 0x28) != '\0') {
      uVar12 = 0;
      uVar14 = 0;
      do {
        iVar8 = (uVar12 & 7) * 8;
        uVar15 = iVar8 - 0x20;
        bVar11 = (byte)(0x296bab61 >> iVar8) |
                 (byte)(0x7d719177 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar11 = (byte)(0x7d719177 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar16 + uVar12) = *(byte *)(iVar16 + uVar12) ^ bVar11;
        bVar17 = 0xfffffffe < uVar12;
        bVar1 = uVar14 == 0;
        bVar2 = (0x26 < uVar12) <= uVar14;
        uVar12 = uVar12 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar16 + 0x28) = 0;
    }
    FUN_716486e8(iVar16,param_1);
  }
  return 1;
}


// =========================================================================
// Function: FUN_7156942c
// Entry: 0x7156942c | Size: 116 bytes
// =========================================================================

undefined4 FUN_7156942c(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_70b41f74 + param_2 * 0x14;
  if (*(int *)(iVar2 + 0xc) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
    if (*(int *)(iVar2 + 0x10) != 1) {
      FUN_7135d734(param_2,0xc);
      FUN_7135ceec(0);
      uVar1 = 1;
      if (*(int *)(iVar2 + 0x10) != 1) {
        uVar1 = FUN_715685bc(param_2);
        return uVar1;
      }
    }
  }
  return uVar1;
}


// =========================================================================
// Function: FUN_7156952c
// Entry: 0x7156952c | Size: 484 bytes
// =========================================================================

undefined4 FUN_7156952c(undefined4 param_1,int *param_2)

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
  byte bVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  bool bVar18;
  
  iVar7 = DAT_70b41f74;
  iVar15 = *param_2;
  iVar16 = DAT_70b41f74 + iVar15 * 0x14;
  if (*(int *)(iVar16 + 0xc) != 0) {
    if (*(int *)(iVar16 + 0x10) == 1) {
      return 1;
    }
    FUN_7135d734(iVar15,0xc);
    FUN_7135ceec(0);
    if (*(int *)(iVar16 + 0x10) == 1) {
      return 1;
    }
    iVar15 = FUN_715685bc(iVar15);
    if (iVar15 != 0) {
      return 1;
    }
  }
  pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3db0);
  if (*pcVar8 == '\0') {
    puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3da0);
    *(undefined1 *)((int)puVar9 + 0x27) = 1;
    uVar4 = DAT_70082344;
    uVar3 = DAT_70082340;
    uVar14 = DAT_7008233c;
    *puVar9 = DAT_70082338;
    puVar9[1] = uVar14;
    puVar9[2] = uVar3;
    puVar9[3] = uVar4;
    uVar5 = DAT_70082358;
    uVar4 = DAT_70082354;
    uVar3 = DAT_70082350;
    uVar14 = DAT_7008234c;
    puVar9[4] = DAT_70082348;
    puVar9[5] = uVar14;
    puVar9[6] = uVar3;
    puVar9[7] = uVar4;
    puVar9[8] = uVar5;
    uVar6 = DAT_7008235e;
    *(undefined2 *)(puVar9 + 9) = DAT_7008235c;
    *(undefined1 *)((int)puVar9 + 0x26) = uVar6;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_7156a648,puVar9,&DAT_70b0e000);
    puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3db0);
    *puVar10 = 1;
  }
  iVar15 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3da0);
  if (*(char *)(iVar15 + 0x27) != '\0') {
    uVar12 = 0;
    uVar17 = 0;
    do {
      iVar16 = (uVar12 & 7) * 8;
      uVar13 = iVar16 - 0x20;
      bVar11 = (byte)(0xef116f5b >> iVar16) |
               (byte)(-0x6c4a7815 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
      if (-1 < (int)uVar13) {
        bVar11 = (byte)(0x93b587eb >> (uVar13 & 0xff));
      }
      *(byte *)(iVar15 + uVar12) = *(byte *)(iVar15 + uVar12) ^ bVar11;
      bVar18 = 0xfffffffe < uVar12;
      bVar1 = uVar17 == 0;
      bVar2 = (0x25 < uVar12) <= uVar17;
      uVar12 = uVar12 + 1;
      uVar17 = uVar17 + bVar18;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar15 + 0x27) = 0;
  }
  FUN_716486e8(iVar15,*param_2);
  *param_2 = 7;
  if (*(int *)(iVar7 + 0x98) == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = 1;
    if (*(int *)(iVar7 + 0x9c) != 1) {
      FUN_7135d734(7,0xc);
      FUN_7135ceec(0);
      if (*(int *)(iVar7 + 0x9c) != 1) {
        uVar14 = FUN_715685bc(7);
        return uVar14;
      }
    }
  }
  return uVar14;
}


// =========================================================================
// Function: FUN_71569978
// Entry: 0x71569978 | Size: 484 bytes
// =========================================================================

undefined4 FUN_71569978(undefined4 param_1,int *param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  iVar6 = DAT_70b41f74;
  iVar15 = *param_2;
  iVar13 = DAT_70b41f74 + iVar15 * 0x14;
  if (*(int *)(iVar13 + 0xc) != 0) {
    if (*(int *)(iVar13 + 0x10) == 1) {
      return 1;
    }
    FUN_7135d734(iVar15,0xc);
    FUN_7135ceec(0);
    if (*(int *)(iVar13 + 0x10) == 1) {
      return 1;
    }
    iVar13 = FUN_715685bc(iVar15);
    if (iVar13 != 0) {
      return 1;
    }
  }
  pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3dd0);
  if (*pcVar7 == '\0') {
    puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3dc0);
    *(undefined1 *)((int)puVar9 + 0x2b) = 1;
    uVar5 = DAT_70082370;
    uVar4 = DAT_7008236c;
    uVar3 = DAT_70082368;
    uVar8 = DAT_70082364;
    *puVar9 = DAT_70082360;
    puVar9[1] = uVar8;
    puVar9[2] = uVar3;
    puVar9[3] = uVar4;
    puVar9[4] = uVar5;
    uVar5 = DAT_70082384;
    uVar4 = DAT_70082380;
    uVar3 = DAT_7008237c;
    uVar8 = DAT_70082378;
    puVar9[5] = DAT_70082374;
    puVar9[6] = uVar8;
    puVar9[7] = uVar3;
    puVar9[8] = uVar4;
    puVar9[9] = uVar5;
    *(undefined2 *)(puVar9 + 10) = DAT_70082388;
    *(undefined1 *)((int)puVar9 + 0x2a) = DAT_7008238a;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_7156a698,puVar9,&DAT_70b0e000);
    puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3dd0);
    *puVar10 = 1;
  }
  iVar13 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3dc0);
  if (*(char *)(iVar13 + 0x2b) != '\0') {
    uVar12 = 0;
    uVar14 = 0;
    do {
      iVar15 = (uVar12 & 7) * 8;
      bVar11 = (byte)(0x1ddb8933 >> iVar15) |
               (byte)(0x51017367 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
      uVar16 = iVar15 - 0x20;
      if (-1 < (int)uVar16) {
        bVar11 = (byte)(0x51017367 >> (uVar16 & 0xff));
      }
      *(byte *)(iVar13 + uVar12) = *(byte *)(iVar13 + uVar12) ^ bVar11;
      bVar17 = 0xfffffffe < uVar12;
      bVar1 = uVar14 == 0;
      bVar2 = (0x29 < uVar12) <= uVar14;
      uVar12 = uVar12 + 1;
      uVar14 = uVar14 + bVar17;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar13 + 0x2b) = 0;
  }
  FUN_716486e8(iVar13,*param_2);
  *param_2 = 400;
  if (*(int *)(iVar6 + 0x1f4c) != 0) {
    if (*(int *)(iVar6 + 0x1f50) != 1) {
      FUN_7135d734(400,0xc);
      FUN_7135ceec(0);
      if (*(int *)(iVar6 + 0x1f50) != 1) {
        uVar8 = FUN_715685bc(400);
        return uVar8;
      }
    }
    return 1;
  }
  return 0;
}


// =========================================================================
// Function: FUN_71569dc4
// Entry: 0x71569dc4 | Size: 480 bytes
// =========================================================================

undefined4 FUN_71569dc4(undefined4 param_1,int *param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  iVar6 = DAT_70b41f74;
  iVar15 = *param_2;
  iVar13 = DAT_70b41f74 + iVar15 * 0x14;
  if (*(int *)(iVar13 + 0xc) != 0) {
    if (*(int *)(iVar13 + 0x10) == 1) {
      return 1;
    }
    FUN_7135d734(iVar15,0xc);
    FUN_7135ceec(0);
    if (*(int *)(iVar13 + 0x10) == 1) {
      return 1;
    }
    iVar13 = FUN_715685bc(iVar15);
    if (iVar13 != 0) {
      return 1;
    }
  }
  pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3df0);
  if (*pcVar7 == '\0') {
    puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3de0);
    *(undefined1 *)((int)puVar9 + 0x2a) = 1;
    uVar5 = DAT_700823a0;
    uVar4 = DAT_7008239c;
    uVar3 = DAT_70082398;
    uVar8 = DAT_70082394;
    *puVar9 = DAT_70082390;
    puVar9[1] = uVar8;
    puVar9[2] = uVar3;
    puVar9[3] = uVar4;
    puVar9[4] = uVar5;
    uVar5 = DAT_700823b4;
    uVar4 = DAT_700823b0;
    uVar3 = DAT_700823ac;
    uVar8 = DAT_700823a8;
    puVar9[5] = DAT_700823a4;
    puVar9[6] = uVar8;
    puVar9[7] = uVar3;
    puVar9[8] = uVar4;
    puVar9[9] = uVar5;
    *(undefined2 *)(puVar9 + 10) = DAT_700823b8;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_7156a6e8,puVar9,&DAT_70b0e000);
    puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3df0);
    *puVar10 = 1;
  }
  iVar13 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3de0);
  if (*(char *)(iVar13 + 0x2a) != '\0') {
    uVar12 = 0;
    uVar14 = 0;
    do {
      iVar15 = (uVar12 & 7) * 8;
      bVar11 = (byte)(0xf5f9653f >> iVar15) |
               (byte)(0x67297d57 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
      uVar16 = iVar15 - 0x20;
      if (-1 < (int)uVar16) {
        bVar11 = (byte)(0x67297d57 >> (uVar16 & 0xff));
      }
      *(byte *)(iVar13 + uVar12) = *(byte *)(iVar13 + uVar12) ^ bVar11;
      bVar17 = 0xfffffffe < uVar12;
      bVar1 = uVar14 == 0;
      bVar2 = (0x28 < uVar12) <= uVar14;
      uVar12 = uVar12 + 1;
      uVar14 = uVar14 + bVar17;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar13 + 0x2a) = 0;
  }
  FUN_716486e8(iVar13,*param_2);
  *param_2 = 0x48c7;
  if (*(int *)(iVar6 + 0x5af98) != 0) {
    if (*(int *)(iVar6 + 0x5af9c) != 1) {
      FUN_7135d734(0x48c7,0xc);
      FUN_7135ceec(0);
      if (*(int *)(iVar6 + 0x5af9c) != 1) {
        uVar8 = FUN_715685bc(0x48c7);
        return uVar8;
      }
    }
    return 1;
  }
  return 0;
}


// =========================================================================
// Function: FUN_7156a20c
// Entry: 0x7156a20c | Size: 40 bytes
// =========================================================================

void FUN_7156a20c(int param_1)

{
  bool bVar1;
  
  if (0x77 < param_1) {
    param_1 = 0x78;
  }
  if (*(int *)(DAT_70ffc974 + 0xc) == param_1) {
    return;
  }
  *(int *)(DAT_70ffc974 + 0xc) = param_1;
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_710eb1c0);
  bVar1 = 0xfffffffe < DAT_710eb1c8;
  DAT_710eb1c8 = DAT_710eb1c8 + 1;
  DAT_710eb1cc = DAT_710eb1cc + (uint)bVar1;
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_710eb1c0);
  thunk_KmAAJrQeDYcikipjnSTRnrUxnxfqYglsjaMkPyhpSaUedr(&DAT_710eb1c4);
  return;
}


// =========================================================================
// Function: FUN_7156a8a4
// Entry: 0x7156a8a4 | Size: 100 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7156a8a4(void)

{
  DAT_711a3a53._1_3_ = 0x10101;
  _DAT_711a3a50 = 0x1010101;
  DAT_711a3a57 = 0x1010101;
  _DAT_711a3a5b = 0x10101;
  DAT_711a3a5e = 0x1010101;
  _DAT_711a3a62 = 0x10101;
  DAT_711a3a65 = 1;
  DAT_711a3a66 = 1;
  DAT_711a3a67 = 1;
  return;
}


// =========================================================================
// Function: thunk_FUN_7156a9f4
// Entry: 0x7156a9e0 | Size: 12 bytes
// =========================================================================

void thunk_FUN_7156a9f4(void)

{
  FUN_7156a9f4();
  return;
}


// =========================================================================
// Function: FUN_7156a9f4
// Entry: 0x7156a9f4 | Size: 188 bytes
// =========================================================================

void FUN_7156a9f4(char param_1,int param_2)

{
  char cVar1;
  undefined2 uVar2;
  
  (&DAT_711a3a50)[param_2] = param_1;
  if (param_2 == 4) {
    DAT_711a3a52 = param_1;
    DAT_711a3a53._0_1_ = param_1;
  }
  if (DAT_711a3a50 != '\0') {
    cVar1 = '\0';
    if (DAT_711a3a51 != '\0') {
      cVar1 = DAT_711a3a52;
    }
    if (DAT_711a3a51 != '\0' && cVar1 != '\0') {
      if ((char)DAT_711a3a53 == '\0') {
        DAT_711a3a65 = 0;
        return;
      }
      if (DAT_711a3a53._1_1_ == '\0') {
        DAT_711a3a65 = 0;
        uVar2 = 1;
        goto LAB_7156aa40;
      }
      cVar1 = '\0';
      if (DAT_711a3a53._2_1_ != '\0') {
        cVar1 = DAT_711a3a53._3_1_;
      }
      if (DAT_711a3a53._2_1_ != '\0' && cVar1 != '\0') {
        DAT_711a3a65 = 1;
        uVar2 = 0;
        goto LAB_7156aa40;
      }
    }
  }
  uVar2 = 1;
  DAT_711a3a65 = 0;
  if ((char)DAT_711a3a53 == '\0') {
    DAT_711a3a65 = 0;
    return;
  }
LAB_7156aa40:
  *(undefined2 *)(DAT_70b889d4 + 0x110) = uVar2;
  return;
}


// =========================================================================
// Function: FUN_7156ab28
// Entry: 0x7156ab28 | Size: 16 bytes
// =========================================================================

undefined1 FUN_7156ab28(void)

{
  return DAT_711a3a65;
}


// =========================================================================
// Function: thunk_FUN_7156ab84
// Entry: 0x7156ab70 | Size: 12 bytes
// =========================================================================

void thunk_FUN_7156ab84(void)

{
  FUN_7156ab84();
  return;
}


// =========================================================================
// Function: FUN_7156ab84
// Entry: 0x7156ab84 | Size: 168 bytes
// =========================================================================

void FUN_7156ab84(char param_1,int param_2)

{
  char cVar1;
  undefined1 *puVar2;
  
  *(char *)((int)&DAT_711a3a57 + param_2) = param_1;
  if (param_2 == 4) {
    DAT_711a3a57._2_1_ = param_1;
    DAT_711a3a57._3_1_ = param_1;
  }
  if ((char)DAT_711a3a57 != '\0') {
    cVar1 = '\0';
    if (DAT_711a3a57._1_1_ != '\0') {
      cVar1 = DAT_711a3a57._2_1_;
    }
    if (DAT_711a3a57._1_1_ != '\0' && cVar1 != '\0') {
      cVar1 = '\0';
      if (DAT_711a3a57._3_1_ != '\0') {
        cVar1 = DAT_711a3a5b;
      }
      if (DAT_711a3a57._3_1_ != '\0' && cVar1 != '\0') {
        cVar1 = '\0';
        if (DAT_711a3a5c != '\0') {
          cVar1 = DAT_711a3a5d;
        }
        if (DAT_711a3a5c != '\0' && cVar1 != '\0') {
          *DAT_70b88968 = 0;
          puVar2 = &DAT_711a3a66;
          goto LAB_7156ac00;
        }
      }
    }
  }
  DAT_711a3a66 = 0;
  puVar2 = DAT_70b88968;
LAB_7156ac00:
  *puVar2 = 1;
  return;
}


// =========================================================================
// Function: FUN_7156ace4
// Entry: 0x7156ace4 | Size: 24 bytes
// =========================================================================

byte FUN_7156ace4(void)

{
  return *DAT_70b88968 ^ 1;
}


// =========================================================================
// Function: thunk_FUN_7156ad48
// Entry: 0x7156ad34 | Size: 12 bytes
// =========================================================================

void thunk_FUN_7156ad48(void)

{
  FUN_7156ad48();
  return;
}


// =========================================================================
// Function: FUN_7156ad48
// Entry: 0x7156ad48 | Size: 168 bytes
// =========================================================================

void FUN_7156ad48(char param_1,int param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  
  *(char *)((int)&DAT_711a3a5e + param_2) = param_1;
  if (param_2 == 4) {
    DAT_711a3a5e._2_1_ = param_1;
    DAT_711a3a5e._3_1_ = param_1;
  }
  bVar1 = (byte)DAT_711a3a5e & DAT_711a3a5e._1_1_ != '\0';
  bVar2 = DAT_711a3a5e._2_1_ != '\0';
  bVar3 = DAT_711a3a5e._3_1_ != '\0';
  bVar4 = DAT_711a3a62 != '\0';
  bVar5 = DAT_711a3a63 != '\0';
  bVar6 = DAT_711a3a64 != '\0';
  *DAT_710ead44 = 0;
  DAT_711a3a67 = bVar1 & bVar2 & bVar3 & bVar4 & bVar5 & bVar6;
  return;
}


// =========================================================================
// Function: FUN_7156ae68
// Entry: 0x7156ae68 | Size: 16 bytes
// =========================================================================

undefined1 FUN_7156ae68(void)

{
  return DAT_711a3a67;
}


// =========================================================================
// Function: FUN_7156aeb0
// Entry: 0x7156aeb0 | Size: 4912 bytes
// =========================================================================

void FUN_7156aeb0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  FUN_7156ef24();
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar9 = *param_2;
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_3[1];
  uVar8 = param_2[1];
  uVar1 = FUN_71ba240c(*param_3,uVar9);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar9);
  *param_1 = uVar1;
  uVar1 = FUN_71ba240c(uVar7,uVar8);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar8);
  param_1[1] = uVar1;
  uVar1 = FUN_71ba240c(uVar3,uVar5);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar5);
  param_1[2] = uVar1;
  uVar1 = FUN_71ba240c(uVar4,uVar6);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar6);
  uVar3 = param_2[4];
  param_1[3] = uVar1;
  uVar1 = FUN_71ba240c(param_3[4],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[5];
  param_1[4] = uVar1;
  uVar1 = FUN_71ba240c(param_3[5],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_3[8];
  uVar4 = param_3[9];
  uVar9 = param_2[6];
  param_1[5] = uVar1;
  uVar5 = param_2[8];
  uVar6 = param_2[9];
  uVar7 = param_3[7];
  uVar8 = param_2[7];
  uVar1 = FUN_71ba240c(param_3[6],uVar9);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar9);
  param_1[6] = uVar1;
  uVar1 = FUN_71ba240c(uVar7,uVar8);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar8);
  param_1[7] = uVar1;
  uVar1 = FUN_71ba240c(uVar3,uVar5);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar5);
  param_1[8] = uVar1;
  uVar1 = FUN_71ba240c(uVar4,uVar6);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar6);
  uVar3 = param_2[10];
  param_1[9] = uVar1;
  uVar1 = FUN_71ba240c(param_3[10],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0xb];
  param_1[10] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0xb],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_3[0xe];
  uVar4 = param_3[0xf];
  uVar9 = param_2[0xc];
  param_1[0xb] = uVar1;
  uVar5 = param_2[0xe];
  uVar6 = param_2[0xf];
  uVar7 = param_3[0xd];
  uVar8 = param_2[0xd];
  uVar1 = FUN_71ba240c(param_3[0xc],uVar9);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar9);
  param_1[0xc] = uVar1;
  uVar1 = FUN_71ba240c(uVar7,uVar8);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar8);
  param_1[0xd] = uVar1;
  uVar1 = FUN_71ba240c(uVar3,uVar5);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar5);
  param_1[0xe] = uVar1;
  uVar1 = FUN_71ba240c(uVar4,uVar6);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar6);
  uVar3 = param_2[0x10];
  param_1[0xf] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x10],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x11];
  param_1[0x10] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x11],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x12];
  param_1[0x11] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x12],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x13];
  param_1[0x12] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x13],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x14];
  param_1[0x13] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x14],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x15];
  param_1[0x14] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x15],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x16];
  param_1[0x15] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x16],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x17];
  param_1[0x16] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x17],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x18];
  param_1[0x17] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x18],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x19];
  param_1[0x18] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x19],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x1a];
  param_1[0x19] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x1a],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x1b];
  param_1[0x1a] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x1b],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x1c];
  param_1[0x1b] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x1c],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x1d];
  param_1[0x1c] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x1d],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x1e];
  param_1[0x1d] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x1e],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x1f];
  param_1[0x1e] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x1f],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x20];
  param_1[0x1f] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x20],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x21];
  param_1[0x20] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x21],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x22];
  param_1[0x21] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x22],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x23];
  param_1[0x22] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x23],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x24];
  param_1[0x23] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x24],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x25];
  param_1[0x24] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x25],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x26];
  param_1[0x25] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x26],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x27];
  param_1[0x26] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x27],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x28];
  param_1[0x27] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x28],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x29];
  param_1[0x28] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x29],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x2a];
  param_1[0x29] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x2a],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x2b];
  param_1[0x2a] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x2b],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x2c];
  param_1[0x2b] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x2c],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x2d];
  param_1[0x2c] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x2d],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x2e];
  param_1[0x2d] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x2e],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x2f];
  param_1[0x2e] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x2f],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x30];
  param_1[0x2f] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x30],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x31];
  param_1[0x30] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x31],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x32];
  param_1[0x31] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x32],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x33];
  param_1[0x32] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x33],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x34];
  param_1[0x33] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x34],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x35];
  param_1[0x34] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x35],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x36];
  param_1[0x35] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x36],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x37];
  param_1[0x36] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x37],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x38];
  param_1[0x37] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x38],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x39];
  param_1[0x38] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x39],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x3a];
  param_1[0x39] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x3a],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x3b];
  param_1[0x3a] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x3b],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x3c];
  param_1[0x3b] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x3c],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x3d];
  param_1[0x3c] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x3d],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x3e];
  param_1[0x3d] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x3e],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x3f];
  param_1[0x3e] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x3f],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x40];
  param_1[0x3f] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x40],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x41];
  param_1[0x40] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x41],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x42];
  param_1[0x41] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x42],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x43];
  param_1[0x42] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x43],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x44];
  param_1[0x43] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x44],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x45];
  param_1[0x44] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x45],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x46];
  param_1[0x45] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x46],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x47];
  param_1[0x46] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x47],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x48];
  param_1[0x47] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x48],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x49];
  param_1[0x48] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x49],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x4a];
  param_1[0x49] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x4a],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x4b];
  param_1[0x4a] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x4b],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x4c];
  param_1[0x4b] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x4c],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x4d];
  param_1[0x4c] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x4d],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x4e];
  param_1[0x4d] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x4e],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x4f];
  param_1[0x4e] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x4f],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x50];
  param_1[0x4f] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x50],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x51];
  param_1[0x50] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x51],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x52];
  param_1[0x51] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x52],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x53];
  param_1[0x52] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x53],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x54];
  param_1[0x53] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x54],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x55];
  param_1[0x54] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x55],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x56];
  param_1[0x55] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x56],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x57];
  param_1[0x56] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x57],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x58];
  param_1[0x57] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x58],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x59];
  param_1[0x58] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x59],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x5a];
  param_1[0x59] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x5a],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x5b];
  param_1[0x5a] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x5b],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x5c];
  param_1[0x5b] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x5c],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x5d];
  param_1[0x5c] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x5d],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x5e];
  param_1[0x5d] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x5e],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x5f];
  param_1[0x5e] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x5f],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x60];
  param_1[0x5f] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x60],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x61];
  param_1[0x60] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x61],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x62];
  param_1[0x61] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x62],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[99];
  param_1[0x62] = uVar1;
  uVar1 = FUN_71ba240c(param_3[99],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[100];
  param_1[99] = uVar1;
  uVar1 = FUN_71ba240c(param_3[100],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x65];
  param_1[100] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x65],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x66];
  param_1[0x65] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x66],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x67];
  param_1[0x66] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x67],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x68];
  param_1[0x67] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x68],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x69];
  param_1[0x68] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x69],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x6a];
  param_1[0x69] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x6a],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x6b];
  param_1[0x6a] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x6b],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x6c];
  param_1[0x6b] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x6c],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x6d];
  param_1[0x6c] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x6d],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x6e];
  param_1[0x6d] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x6e],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x6f];
  param_1[0x6e] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x6f],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x70];
  param_1[0x6f] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x70],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x71];
  param_1[0x70] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x71],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x72];
  param_1[0x71] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x72],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x73];
  param_1[0x72] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x73],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar3 = param_2[0x74];
  param_1[0x73] = uVar1;
  uVar1 = FUN_71ba240c(param_3[0x74],uVar3);
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  param_1[0x74] = uVar1;
  uVar1 = FUN_71ba1b94(param_2[0x75]);
  uVar3 = FUN_71ba1b94(param_3[0x75]);
  uVar3 = FUN_71ba240c(uVar3,uVar1);
  uVar3 = FUN_71ba21e8(uVar3,param_4);
  FUN_71ba0b38(uVar3,uVar1);
  uVar1 = FUN_71ba17bc();
  param_1[0x75] = uVar1;
  uVar1 = FUN_71ba1b94(param_2[0x76]);
  uVar3 = FUN_71ba1b94(param_3[0x76]);
  uVar3 = FUN_71ba240c(uVar3,uVar1);
  uVar3 = FUN_71ba21e8(uVar3,param_4);
  FUN_71ba0b38(uVar3,uVar1);
  uVar1 = FUN_71ba17bc();
  param_1[0x76] = uVar1;
  uVar1 = FUN_71ba1b94(param_2[0x77]);
  uVar3 = FUN_71ba1b94(param_3[0x77]);
  uVar3 = FUN_71ba240c(uVar3,uVar1);
  uVar3 = FUN_71ba21e8(uVar3,param_4);
  FUN_71ba0b38(uVar3,uVar1);
  uVar1 = FUN_71ba17bc();
  param_1[0x77] = uVar1;
  uVar1 = FUN_71ba1b94(param_2[0x78]);
  uVar3 = FUN_71ba1b94(param_3[0x78]);
  uVar3 = FUN_71ba240c(uVar3,uVar1);
  uVar3 = FUN_71ba21e8(uVar3,param_4);
  FUN_71ba0b38(uVar3,uVar1);
  uVar1 = FUN_71ba17bc();
  param_1[0x78] = uVar1;
  uVar1 = FUN_71ba1b94(param_2[0x79]);
  uVar3 = FUN_71ba1b94(param_3[0x79]);
  uVar3 = FUN_71ba240c(uVar3,uVar1);
  uVar3 = FUN_71ba21e8(uVar3,param_4);
  FUN_71ba0b38(uVar3,uVar1);
  uVar1 = FUN_71ba17bc();
  param_1[0x79] = uVar1;
  uVar1 = FUN_71ba1b94(param_2[0x7a]);
  uVar3 = FUN_71ba1b94(param_3[0x7a]);
  uVar3 = FUN_71ba240c(uVar3,uVar1);
  uVar3 = FUN_71ba21e8(uVar3,param_4);
  FUN_71ba0b38(uVar3,uVar1);
  uVar1 = FUN_71ba17bc();
  param_1[0x7a] = uVar1;
  uVar1 = FUN_71ba1b94(param_2[0x7b]);
  uVar3 = FUN_71ba1b94(param_3[0x7b]);
  uVar3 = FUN_71ba240c(uVar3,uVar1);
  uVar3 = FUN_71ba21e8(uVar3,param_4);
  FUN_71ba0b38(uVar3,uVar1);
  uVar1 = FUN_71ba17bc();
  param_1[0x7b] = uVar1;
  uVar1 = FUN_71ba1b94(param_2[0x7c]);
  uVar3 = FUN_71ba1b94(param_3[0x7c]);
  uVar3 = FUN_71ba240c(uVar3,uVar1);
  uVar3 = FUN_71ba21e8(uVar3,param_4);
  FUN_71ba0b38(uVar3,uVar1);
  uVar1 = FUN_71ba17bc();
  param_1[0x7c] = uVar1;
  uVar1 = FUN_71ba1b94(param_2[0x7d]);
  uVar3 = FUN_71ba1b94(param_3[0x7d]);
  uVar3 = FUN_71ba240c(uVar3,uVar1);
  uVar3 = FUN_71ba21e8(uVar3,param_4);
  FUN_71ba0b38(uVar3,uVar1);
  uVar1 = FUN_71ba17bc();
  param_1[0x7d] = uVar1;
  uVar1 = FUN_71ba1b94(param_2[0x7e]);
  uVar3 = FUN_71ba1b94(param_3[0x7e]);
  uVar3 = FUN_71ba240c(uVar3,uVar1);
  uVar3 = FUN_71ba21e8(uVar3,param_4);
  FUN_71ba0b38(uVar3,uVar1);
  uVar1 = FUN_71ba17bc();
  param_1[0x7e] = uVar1;
  iVar2 = FUN_71ba2d10(param_4,0x3f000000);
  if (iVar2 != 0) {
    param_3 = param_2;
  }
  *(undefined1 *)(param_1 + 0x7f) = *(undefined1 *)(param_3 + 0x7f);
  *(undefined1 *)((int)param_1 + 0x1fd) = *(undefined1 *)((int)param_3 + 0x1fd);
  return;
}


// =========================================================================
// Function: FUN_7156ef24
// Entry: 0x7156ef24 | Size: 836 bytes
// =========================================================================

int FUN_7156ef24(int param_1)

{
  imp___aeabi_memclr4(param_1,0x120);
  *(undefined4 *)(param_1 + 0x1d4) = 0x32;
  *(undefined4 *)(param_1 + 0x1d0) = 0x3f733333;
  *(undefined4 *)(param_1 + 0x1b8) = 0x432a0000;
  *(undefined4 *)(param_1 + 0x1b4) = 0x43fa0000;
  *(undefined4 *)(param_1 + 0x1d8) = 0x80;
  *(undefined4 *)(param_1 + 0x1dc) = 0x80;
  *(undefined4 *)(param_1 + 0x1e0) = 0x80;
  *(undefined4 *)(param_1 + 0x1e8) = 0x40;
  *(undefined4 *)(param_1 + 0x1a0) = 0x40c00000;
  *(undefined4 *)(param_1 + 0x19c) = 0x41400000;
  *(undefined4 *)(param_1 + 0x174) = 0x42000000;
  *(undefined4 *)(param_1 + 0x1c0) = 0x42700000;
  *(undefined4 *)(param_1 + 0x1a4) = 0x42700000;
  *(undefined4 *)(param_1 + 0x1c4) = 0x43200000;
  *(undefined4 *)(param_1 + 0x170) = 0x41800000;
  *(undefined4 *)(param_1 + 0x158) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x180) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x188) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x1ac) = 0x42b40000;
  *(undefined4 *)(param_1 + 0x160) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x164) = 0x3ee66666;
  *(undefined4 *)(param_1 + 0x168) = 0x40aaaaab;
  *(undefined4 *)(param_1 + 0x16c) = 0x41000000;
  *(undefined4 *)(param_1 + 0x150) = 0x40400000;
  *(undefined4 *)(param_1 + 0x154) = 0x40400000;
  *(undefined4 *)(param_1 + 0x140) = 0x3ecccccd;
  *(undefined4 *)(param_1 + 0x144) = 0x43800000;
  *(undefined4 *)(param_1 + 0x148) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x14c) = 0x3f59999a;
  *(undefined2 *)(param_1 + 0x1fc) = 0x101;
  *(undefined4 *)(param_1 + 500) = 0x1c;
  *(undefined4 *)(param_1 + 0x1bc) = 0x41f00000;
  *(undefined4 *)(param_1 + 300) = 0x41c80000;
  *(undefined4 *)(param_1 + 0x1ec) = 0x10;
  *(undefined4 *)(param_1 + 0x1a8) = 0x42200000;
  *(undefined4 *)(param_1 + 0x128) = 0x41700000;
  *(undefined4 *)(param_1 + 0x1c8) = 0x3f666666;
  *(undefined4 *)(param_1 + 0x178) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0xb4) = 0x3e800000;
  *(undefined4 *)(param_1 + 0xb8) = 0x3e800000;
  *(undefined4 *)(param_1 + 0xc0) = 0x3e800000;
  *(undefined4 *)(param_1 + 0x8c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x90) = 0x3f19999a;
  *(undefined4 *)(param_1 + 0x94) = 0x3f266666;
  *(undefined4 *)(param_1 + 0x98) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0x1b0) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0x15c) = 0x3f19999a;
  *(undefined4 *)(param_1 + 0x138) = 0x3f19999a;
  *(undefined4 *)(param_1 + 0x17c) = 0x3ecccccd;
  *(undefined4 *)(param_1 + 0x134) = 0x3ecccccd;
  *(undefined4 *)(param_1 + 0x13c) = 0x3ecccccd;
  *(undefined4 *)(param_1 + 0xac) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0xb0) = 0x3eb33333;
  *(undefined4 *)(param_1 + 0xbc) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0xa8) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x6c) = 0x3f333333;
  *(undefined4 *)(param_1 + 0x70) = 0x3f400000;
  *(undefined4 *)(param_1 + 0x74) = 0x3f59999a;
  *(undefined4 *)(param_1 + 0x78) = 0x3eb33333;
  *(undefined4 *)(param_1 + 0xc4) = 0x3eb33333;
  *(undefined4 *)(param_1 + 0xa4) = 0x3ecccccd;
  *(undefined4 *)(param_1 + 0x7c) = 0x3ecccccd;
  *(undefined4 *)(param_1 + 0x50) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x54) = 0x3f3d70a4;
  *(undefined4 *)(param_1 + 0x58) = 0x3f400000;
  *(undefined4 *)(param_1 + 0x130) = 0x3f59999a;
  *(undefined4 *)(param_1 + 0x5c) = 0x3f428f5c;
  *(undefined4 *)(param_1 + 0x60) = 0x3eeb851f;
  *(undefined4 *)(param_1 + 100) = 0x3f0ccccd;
  *(undefined4 *)(param_1 + 200) = 0x3ee66666;
  *(undefined4 *)(param_1 + 0x38) = 0x3f333333;
  *(undefined4 *)(param_1 + 0x1cc) = 0x3f266666;
  *(undefined4 *)(param_1 + 0x68) = 0x3f266666;
  *(undefined4 *)(param_1 + 0x30) = 0x3f428f5c;
  *(undefined4 *)(param_1 + 0x34) = 0x3f428f5c;
  *(undefined4 *)(param_1 + 0xc) = 0x3e6147ae;
  *(undefined4 *)(param_1 + 0x10) = 0x3ed70a3d;
  *(undefined4 *)(param_1 + 0x14) = 0x3f2e147b;
  *(undefined4 *)(param_1 + 0x1f0) = 1;
  *(undefined4 *)(param_1 + 0x1f8) = 1;
  *(undefined4 *)(param_1 + 0xa0) = 0xbf000000;
  *(undefined4 *)(param_1 + 0x48) = 0xbf000000;
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  *(undefined4 *)(param_1 + 400) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x194) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x184) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x124) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x120) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xf0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x9c) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x80) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x84) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x88) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4c) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x2c) = 0x3f2e147b;
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x44) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18) = 0x3ea3d70a;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x20) = 0x3f3851ec;
  *(undefined4 *)(param_1 + 0x24) = 0x3ef5c28f;
  *(undefined4 *)(param_1 + 0x28) = 0x3f147ae1;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0x3f800000;
  return param_1;
}


// =========================================================================
// Function: FUN_7156f29c
// Entry: 0x7156f29c | Size: 544 bytes
// =========================================================================

void FUN_7156f29c(undefined4 param_1,int *param_2,int param_3,int param_4,uint param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int extraout_r1;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  
  iVar12 = *param_2;
  if (iVar12 == param_2[1]) {
    FUN_7156ef24();
    return;
  }
  iVar8 = param_2[1] - iVar12;
  if (iVar8 == 0x2e08) {
    if (0x15 < (int)param_5) {
      param_5 = 0x16;
    }
    imp___aeabi_memcpy4(param_1,iVar12 + (param_5 & ~((int)param_5 >> 0x1f)) * 0x200 + 8,0x200);
    return;
  }
  iVar11 = (iVar8 >> 3) * -0x5cfaf5bf;
  uVar1 = FUN_71ba1b94(param_4 + param_3 * 0x3c);
  iVar10 = iVar11 + -1;
  if (0x15 < (int)param_5) {
    param_5 = 0x16;
  }
  param_5 = param_5 & ~((int)param_5 >> 0x1f);
  if (0 < iVar8) {
    piVar7 = (int *)(iVar12 + 4);
    iVar8 = iVar11;
    if (iVar11 < 2) {
      iVar8 = 1;
    }
    iVar9 = 0;
    do {
      uVar2 = FUN_71ba1b94(*piVar7 + piVar7[-1] * 0x3c);
      iVar3 = FUN_71ba2d30(uVar2,uVar1);
      piVar7 = piVar7 + 0xb82;
      if (iVar3 != 0) {
        iVar10 = iVar9;
      }
      iVar9 = iVar9 + 1;
    } while (iVar8 != iVar9);
  }
  FUN_71ba2da8(iVar10 + 1,iVar11);
  piVar7 = (int *)(iVar12 + iVar10 * 0x2e08);
  uVar4 = FUN_71ba1b94(piVar7[1] + *piVar7 * 0x3c);
  piVar13 = (int *)(iVar12 + extraout_r1 * 0x2e08);
  uVar5 = FUN_71ba1b94(piVar13[1] + *piVar13 * 0x3c);
  iVar12 = FUN_71ba2d30(uVar5,uVar4);
  uVar6 = FUN_71ba0b38(uVar5,0x44b40000);
  iVar8 = FUN_71ba2d70(uVar4,uVar1);
  uVar2 = FUN_71ba0b38(uVar1,0x44b40000);
  if (iVar8 == 0) {
    uVar2 = uVar1;
  }
  uVar1 = FUN_71ba240c(uVar2,uVar4);
  if (iVar12 == 0) {
    uVar6 = uVar5;
  }
  uVar2 = FUN_71ba240c(uVar6,uVar4);
  uVar1 = FUN_71ba13e0(uVar1,uVar2);
  iVar12 = FUN_71ba2d70(uVar6,uVar4);
  if (iVar12 == 0) {
    uVar1 = 0;
  }
  iVar12 = FUN_71ba2d10(uVar1,0x3f800000);
  if (iVar12 == 0) {
    uVar1 = 0x3f800000;
  }
  iVar12 = FUN_71ba2d70(uVar1,0);
  if (iVar12 == 0) {
    uVar1 = 0;
  }
  FUN_7156aeb0(param_1,piVar7 + param_5 * 0x80 + 2,piVar13 + param_5 * 0x80 + 2,uVar1);
  return;
}


// =========================================================================
// Function: FUN_7156f6e8
// Entry: 0x7156f6e8 | Size: 644 bytes
// =========================================================================

void FUN_7156f6e8(int param_1,int *param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int extraout_r1;
  int iVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  
  iVar1 = FUN_7156ef24();
  iVar1 = iVar1 + 0x200;
  FUN_7156ef24(iVar1);
  *(undefined4 *)(param_1 + 0x400) = 0;
  iVar8 = *param_2;
  *(undefined1 *)(param_1 + 0x404) = 0;
  iVar13 = param_2[1] - iVar8;
  uVar11 = (iVar13 >> 3) * -0x5cfaf5bf;
  if (uVar11 < 2) {
    if (iVar8 != param_2[1]) {
      if (0x15 < (int)param_5) {
        param_5 = 0x16;
      }
      iVar8 = iVar8 + (param_5 & ~((int)param_5 >> 0x1f)) * 0x200 + 8;
      imp___aeabi_memcpy4(param_1,iVar8,0x1fe);
      imp___aeabi_memmove4(iVar1,iVar8,0x1fe);
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x404) = 1;
    uVar2 = FUN_71ba1b94(param_4 + param_3 * 0x3c);
    iVar10 = uVar11 - 1;
    if (0x15 < (int)param_5) {
      param_5 = 0x16;
    }
    param_5 = param_5 & ~((int)param_5 >> 0x1f);
    if (0 < iVar13) {
      iVar13 = 0;
      piVar9 = (int *)(iVar8 + 4);
      do {
        uVar3 = FUN_71ba1b94(*piVar9 + piVar9[-1] * 0x3c);
        iVar4 = FUN_71ba2d30(uVar3,uVar2);
        piVar9 = piVar9 + 0xb82;
        if (iVar4 != 0) {
          iVar10 = iVar13;
        }
        iVar13 = iVar13 + 1;
      } while (uVar11 - iVar13 != 0);
    }
    FUN_71ba2da8(iVar10 + 1,uVar11);
    piVar9 = (int *)(iVar8 + iVar10 * 0x2e08);
    uVar5 = FUN_71ba1b94(piVar9[1] + *piVar9 * 0x3c);
    piVar12 = (int *)(iVar8 + extraout_r1 * 0x2e08);
    uVar6 = FUN_71ba1b94(piVar12[1] + *piVar12 * 0x3c);
    iVar8 = FUN_71ba2d30(uVar6,uVar5);
    uVar7 = FUN_71ba0b38(uVar6,0x44b40000);
    iVar13 = FUN_71ba2d70(uVar5,uVar2);
    uVar3 = FUN_71ba0b38(uVar2,0x44b40000);
    if (iVar13 == 0) {
      uVar3 = uVar2;
    }
    uVar2 = FUN_71ba240c(uVar3,uVar5);
    if (iVar8 == 0) {
      uVar7 = uVar6;
    }
    uVar3 = FUN_71ba240c(uVar7,uVar5);
    uVar2 = FUN_71ba13e0(uVar2,uVar3);
    iVar8 = FUN_71ba2d70(uVar7,uVar5);
    if (iVar8 == 0) {
      uVar2 = 0;
    }
    iVar8 = FUN_71ba2d10(uVar2,0x3f800000);
    if (iVar8 == 0) {
      uVar2 = 0x3f800000;
    }
    iVar8 = FUN_71ba2d70(uVar2,0);
    if (iVar8 == 0) {
      uVar2 = 0;
    }
    *(undefined4 *)(param_1 + 0x400) = uVar2;
    imp___aeabi_memcpy4(param_1,piVar9 + param_5 * 0x80 + 2,0x1fe);
    imp___aeabi_memcpy4(iVar1,piVar12 + param_5 * 0x80 + 2,0x1fe);
  }
  return;
}


// =========================================================================
// Function: FUN_7156fbec
// Entry: 0x7156fbec | Size: 420 bytes
// =========================================================================

void FUN_7156fbec(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  puVar1 = DAT_710ea8a4;
  puVar5 = DAT_710ea8a4 + 0x2b;
  *DAT_710ea8a4 = *(undefined4 *)(param_1 + 0xa8);
  puVar1[1] = *(undefined4 *)(param_1 + 0xac);
  puVar1[2] = *(undefined4 *)(param_1 + 0xb0);
  puVar1[3] = *(undefined4 *)(param_1 + 0xb4);
  puVar1[4] = *(undefined4 *)(param_1 + 0xb8);
  puVar1[5] = *(undefined4 *)(param_1 + 0xbc);
  puVar1[6] = *(undefined4 *)(param_1 + 0x84);
  puVar1[7] = *(undefined4 *)(param_1 + 0x88);
  puVar1[8] = *(undefined4 *)(param_1 + 0x8c);
  puVar1[0x10] = *(undefined4 *)(param_1 + 0x184);
  puVar1[0x11] = *(undefined4 *)(param_1 + 0x180);
  *(short *)(puVar1 + 0x12) = (short)*(undefined4 *)(param_1 + 0x1d8);
  *(ushort *)((int)puVar1 + 0x4a) = (ushort)*(byte *)(param_1 + 0x1dc);
  *(ushort *)(puVar1 + 0x13) = (ushort)*(byte *)(param_1 + 0x1e0);
  puVar1[0x16] = *(undefined4 *)(param_1 + 0x188);
  puVar1[0x1a] = *(undefined4 *)(param_1 + 0xc0);
  puVar1[0x1b] = *(undefined4 *)(param_1 + 0xc4);
  puVar1[0x1c] = *(undefined4 *)(param_1 + 200);
  puVar1[0x1d] = *(undefined4 *)(param_1 + 0xcc);
  puVar1[0x1e] = *(undefined4 *)(param_1 + 0xd0);
  puVar1[0x1f] = *(undefined4 *)(param_1 + 0xd4);
  puVar1[0x20] = *(undefined4 *)(param_1 + 0xd8);
  puVar1[0x21] = *(undefined4 *)(param_1 + 0xdc);
  puVar1[0x22] = *(undefined4 *)(param_1 + 0xe0);
  puVar1[0x23] = *(undefined4 *)(param_1 + 0xe4);
  puVar1[0x24] = *(undefined4 *)(param_1 + 0xe8);
  puVar1[0x25] = *(undefined4 *)(param_1 + 0xec);
  puVar1[0x27] = (uint)*(byte *)(param_1 + 0x1e4);
  *(ushort *)(puVar1 + 0x28) = (ushort)*(byte *)(param_1 + 0x1e8);
  uVar2 = *(undefined4 *)(param_1 + 0xf4);
  uVar3 = *(undefined4 *)(param_1 + 0xf8);
  uVar4 = *(undefined4 *)(param_1 + 0xfc);
  *puVar5 = *(undefined4 *)(param_1 + 0xf0);
  puVar1[0x2c] = uVar2;
  puVar1[0x2d] = uVar3;
  puVar1[0x2e] = uVar4;
  uVar2 = *(undefined4 *)(param_1 + 0x104);
  uVar3 = *(undefined4 *)(param_1 + 0x108);
  uVar4 = *(undefined4 *)(param_1 + 0x10c);
  puVar1[0x2f] = *(undefined4 *)(param_1 + 0x100);
  puVar1[0x30] = uVar2;
  puVar1[0x31] = uVar3;
  puVar1[0x32] = uVar4;
  uVar2 = *(undefined4 *)(param_1 + 0x114);
  uVar3 = *(undefined4 *)(param_1 + 0x118);
  uVar4 = *(undefined4 *)(param_1 + 0x11c);
  puVar1[0x33] = *(undefined4 *)(param_1 + 0x110);
  puVar1[0x34] = uVar2;
  puVar1[0x35] = uVar3;
  puVar1[0x36] = uVar4;
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
  uVar2 = FUN_71ba1b94(DAT_71201738);
  uVar2 = FUN_7156feb8(param_1,uVar2);
  puVar1[0x14] = uVar2;
  puVar1[0x15] = uVar2;
  puVar1[0x2a] = *(undefined4 *)(param_1 + 0x120);
  DAT_700c0804 = *(undefined4 *)(param_1 + 0x124);
  DAT_700c0808 = *(undefined4 *)(param_1 + 0x128);
  DAT_700c080c = *(undefined4 *)(param_1 + 300);
  return;
}


// =========================================================================
// Function: FUN_7156feb8
// Entry: 0x7156feb8 | Size: 312 bytes
// =========================================================================

undefined4 FUN_7156feb8(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_71ba2d10(param_2,0x42c80000);
  uVar2 = 0x42c80000;
  if (iVar1 != 0) {
    uVar2 = param_2;
  }
  iVar1 = FUN_71ba2d70(uVar2,0);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  iVar1 = FUN_71ba2d30(uVar2,0x41a00000);
  if (iVar1 == 0) {
    iVar1 = FUN_71ba2d30(uVar2,0x42700000);
    if (iVar1 == 0) {
      uVar2 = FUN_71ba0b38(uVar2,0xc2700000);
      uVar2 = FUN_71ba13e0(uVar2,0x42200000);
      uVar3 = *(undefined4 *)(param_1 + 0x170);
      uVar4 = *(undefined4 *)(param_1 + 0x174);
    }
    else {
      uVar2 = FUN_71ba0b38(uVar2,0xc1a00000);
      uVar2 = FUN_71ba13e0(uVar2,0x42200000);
      uVar3 = *(undefined4 *)(param_1 + 0x16c);
      uVar4 = *(undefined4 *)(param_1 + 0x170);
    }
  }
  else {
    uVar2 = FUN_71ba13e0(uVar2,0x41a00000);
    uVar3 = *(undefined4 *)(param_1 + 0x168);
    uVar4 = *(undefined4 *)(param_1 + 0x16c);
  }
  uVar4 = FUN_71ba240c(uVar4,uVar3);
  uVar2 = FUN_71ba21e8(uVar4,uVar2);
  uVar2 = FUN_71ba0b38(uVar2,uVar3);
  iVar1 = FUN_71ba2d70(uVar2,0x44c80000);
  if (iVar1 != 0) {
    uVar2 = 0x44c80000;
  }
  iVar1 = FUN_71ba2d70(uVar2,0x42700000);
  if (iVar1 == 0) {
    uVar2 = 0x42700000;
  }
  return uVar2;
}


// =========================================================================
// Function: FUN_71570190
// Entry: 0x71570190 | Size: 38952 bytes
// =========================================================================
// Decompile failed: Exception while decompiling 71570190: process: timeout


// =========================================================================
// Function: FUN_715822a8
// Entry: 0x715822a8 | Size: 68 bytes
// =========================================================================

uint FUN_715822a8(undefined1 *param_1)

{
  uint uVar1;
  
  switch(*param_1) {
  case 4:
    return (uint)(byte)param_1[8];
  case 5:
  case 6:
    return *(uint *)(param_1 + 8);
  case 7:
    uVar1 = FUN_71ba173c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    return uVar1;
  default:
                    /* WARNING: Subroutine does not return */
    imp_abort();
  }
}


// =========================================================================
// Function: FUN_7158234c
// Entry: 0x7158234c | Size: 64 bytes
// =========================================================================

undefined4 * FUN_7158234c(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = 1;
  FUN_715823c0(param_1);
  return param_1;
}


// =========================================================================
// Function: FUN_715823c0
// Entry: 0x715823c0 | Size: 2700 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_715823c0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uStack_5c90;
  undefined4 uStack_5c8c;
  undefined4 auStack_5c88 [127];
  undefined2 auStack_5a8c [5634];
  undefined4 uStack_2e88;
  undefined4 uStack_2e84;
  undefined4 auStack_2e80 [127];
  undefined2 auStack_2c84 [5634];
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
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  *param_1 = 1;
  piVar2 = param_1 + 1;
  if (*piVar2 != 0) {
    param_1[2] = *piVar2;
    thunk_qNQrlu();
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  FUN_71583064(&uStack_2e88);
  uStack_2e88 = 6;
  uStack_2e84 = 0;
  iVar4 = 0;
  do {
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 8) = uStack_58;
    *(undefined4 *)((int)auStack_2e80 + iVar4) = uStack_60;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 4) = uStack_5c;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0xc0) = 0x3e800000;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0xc4) = 0x3eb33333;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 200) = 0x3ee66666;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0xcc) = 0x3f4ccccd;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0xa0) = 0xbf000000;
    iVar6 = iVar4 + 0x200;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0xa4) = 0x3ecccccd;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0xa8) = 0x3e99999a;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0xac) = 0x3e99999a;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0xb0) = 0x3eb33333;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0xbc) = 0x3e99999a;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0xb4) = 0x3e800000;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0xb8) = 0x3e800000;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x80) = 0x3f000000;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x90) = 0x3f19999a;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x84) = 0x3f800000;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x88) = 0x3f800000;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x8c) = 0x3f800000;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x94) = 0x3f266666;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x98) = 0x3f4ccccd;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x9c) = 0x3f000000;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x60) = 0x3eeb851f;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 100) = 0x3f0ccccd;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x68) = 0x3f266666;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x78) = 0x3eb33333;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x74) = 0x3f59999a;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x6c) = 0x3f333333;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x70) = 0x3f400000;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x7c) = 0x3ecccccd;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x40) = 0x3f800000;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x44) = 0x3f800000;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x48) = 0xbf000000;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x4c) = 0x3f000000;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x50) = 0x3f000000;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x58) = 0x3f400000;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x54) = 0x3f3d70a4;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x5c) = 0x3f428f5c;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x20) = 0x3f3851ec;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x30) = 0x3f428f5c;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x24) = 0x3ef5c28f;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x28) = 0x3f147ae1;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x2c) = 0x3f2e147b;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x34) = 0x3f428f5c;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x38) = 0x3f333333;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x3c) = 0x3f800000;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x1c) = 0x3f000000;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x18) = 0x3ea3d70a;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x14) = 0x3f2e147b;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x10) = 0x3ed70a3d;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0xc) = 0x3e6147ae;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0xd0) = uStack_80;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0xd4) = uStack_7c;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0xd8) = uStack_78;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0xdc) = uStack_74;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0xe0) = uStack_70;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0xe4) = uStack_6c;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0xe8) = uStack_68;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0xec) = uStack_64;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x104) = 0x3f800000;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0xf0) = 0x3f800000;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x100) = uStack_34;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0xfc) = uStack_38;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0xf8) = uStack_3c;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0xf4) = uStack_40;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x114) = uStack_44;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x108) = uStack_50;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x10c) = uStack_4c;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x110) = uStack_48;
    *(undefined2 *)((int)auStack_2c84 + iVar4) = 0x101;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x1e8) = 0x40;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x1ec) = 0x10;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 500) = 0x1c;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x1f0) = 1;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x1f8) = 1;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x1c8) = 0x3f666666;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x1cc) = 0x3f266666;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x1d0) = 0x3f733333;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x1d4) = 0x32;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x1d8) = 0x80;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x1dc) = 0x80;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x1e0) = 0x80;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x1e4) = 0;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x1a8) = 0x42200000;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x1ac) = 0x42b40000;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x1b0) = 0x3f4ccccd;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x1b4) = 0x43fa0000;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x1b8) = 0x432a0000;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x1bc) = 0x41f00000;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x1c0) = 0x42700000;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x1c4) = 0x43200000;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x188) = 0x40a00000;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x18c) = 0x3f800000;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 400) = 0x3f800000;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x194) = 0;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x198) = 0;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x19c) = 0x41400000;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x1a0) = 0x40c00000;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x1a4) = 0x42700000;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x168) = 0x40aaaaab;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x16c) = 0x41000000;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x170) = 0x41800000;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x174) = 0x42000000;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x178) = 0x3fc00000;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x17c) = 0x3ecccccd;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x180) = 0x40a00000;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x184) = 0x3f800000;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x148) = 0x3e99999a;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x14c) = 0x3f59999a;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x150) = 0x40400000;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x154) = 0x40400000;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x158) = 0x3dcccccd;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x15c) = 0x3f19999a;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x160) = 0x3f000000;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x164) = 0x3ee66666;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x128) = 0x41700000;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 300) = 0x41c80000;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x130) = 0x3f59999a;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x134) = 0x3ecccccd;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x138) = 0x3f19999a;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x13c) = 0x3ecccccd;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x140) = 0x3ecccccd;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x144) = 0x43800000;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x124) = 0x3f800000;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x120) = 0x3f800000;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x11c) = 0;
    *(undefined4 *)((int)auStack_2e80 + iVar4 + 0x118) = 0x3f800000;
    iVar4 = iVar6;
  } while (iVar6 != 0x2e00);
  FUN_71583064(&uStack_5c90);
  uStack_5c8c = 0;
  uStack_5c90 = 0x14;
  iVar4 = 0;
  do {
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 8) = uStack_58;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 4) = uStack_5c;
    *(undefined4 *)((int)auStack_5c88 + iVar4) = uStack_60;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0xc0) = 0x3e800000;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0xc4) = 0x3eb33333;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 200) = 0x3ee66666;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0xcc) = 0x3f4ccccd;
    iVar6 = iVar4 + 0x200;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0xa0) = 0xbf000000;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0xa4) = 0x3ecccccd;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0xa8) = 0x3e99999a;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0xac) = 0x3e99999a;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0xb0) = 0x3eb33333;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0xbc) = 0x3e99999a;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0xb4) = 0x3e800000;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0xb8) = 0x3e800000;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x80) = 0x3f000000;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x84) = 0x3f800000;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x88) = 0x3f800000;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x8c) = 0x3f800000;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x90) = 0x3f19999a;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x94) = 0x3f266666;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x98) = 0x3f4ccccd;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x9c) = 0x3f000000;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x60) = 0x3eeb851f;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 100) = 0x3f0ccccd;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x68) = 0x3f266666;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x78) = 0x3eb33333;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x74) = 0x3f59999a;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x6c) = 0x3f333333;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x70) = 0x3f400000;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x7c) = 0x3ecccccd;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x48) = 0xbf000000;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x40) = 0x3f800000;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x44) = 0x3f800000;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x4c) = 0x3f000000;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x50) = 0x3f000000;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x58) = 0x3f400000;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x54) = 0x3f3d70a4;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x5c) = 0x3f428f5c;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x20) = 0x3f3851ec;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x30) = 0x3f428f5c;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x24) = 0x3ef5c28f;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x28) = 0x3f147ae1;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x2c) = 0x3f2e147b;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x34) = 0x3f428f5c;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x38) = 0x3f333333;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x3c) = 0x3f800000;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x1c) = 0x3f000000;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x18) = 0x3ea3d70a;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x14) = 0x3f2e147b;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x10) = 0x3ed70a3d;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0xc) = 0x3e6147ae;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0xd0) = uStack_80;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0xd4) = uStack_7c;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0xd8) = uStack_78;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0xdc) = uStack_74;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0xe0) = uStack_70;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0xe4) = uStack_6c;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0xe8) = uStack_68;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0xec) = uStack_64;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x104) = 0x3f800000;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0xf0) = 0x3f800000;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x100) = uStack_34;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0xfc) = uStack_38;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0xf8) = uStack_3c;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0xf4) = uStack_40;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x114) = uStack_44;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x108) = uStack_50;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x10c) = uStack_4c;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x110) = uStack_48;
    *(undefined2 *)((int)auStack_5a8c + iVar4) = 0x101;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x1e8) = 0x40;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x1ec) = 0x10;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x1f0) = 1;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x1f8) = 1;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 500) = 0x1c;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x1c8) = 0x3f666666;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x1cc) = 0x3f266666;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x1d0) = 0x3f733333;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x1d4) = 0x32;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x1d8) = 0x80;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x1dc) = 0x80;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x1e0) = 0x80;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x1e4) = 0;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x1a8) = 0x42200000;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x1ac) = 0x42b40000;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x1b0) = 0x3f4ccccd;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x1b4) = 0x43fa0000;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x1b8) = 0x432a0000;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x1bc) = 0x41f00000;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x1c0) = 0x42700000;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x1c4) = 0x43200000;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x188) = 0x40a00000;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x18c) = 0x3f800000;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 400) = 0x3f800000;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x194) = 0;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x198) = 0;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x19c) = 0x41400000;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x1a0) = 0x40c00000;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x1a4) = 0x42700000;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x168) = 0x40aaaaab;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x16c) = 0x41000000;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x170) = 0x41800000;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x174) = 0x42000000;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x178) = 0x3fc00000;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x17c) = 0x3ecccccd;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x180) = 0x40a00000;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x184) = 0x3f800000;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x148) = 0x3e99999a;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x14c) = 0x3f59999a;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x150) = 0x40400000;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x154) = 0x40400000;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x158) = 0x3dcccccd;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x15c) = 0x3f19999a;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x160) = 0x3f000000;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x164) = 0x3ee66666;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x128) = 0x41700000;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 300) = 0x41c80000;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x130) = 0x3f59999a;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x134) = 0x3ecccccd;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x138) = 0x3f19999a;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x13c) = 0x3ecccccd;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x140) = 0x3ecccccd;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x144) = 0x43800000;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x124) = 0x3f800000;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x120) = 0x3f800000;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x11c) = 0;
    *(undefined4 *)((int)auStack_5c88 + iVar4 + 0x118) = 0x3f800000;
    iVar4 = iVar6;
  } while (iVar6 != 0x2e00);
  uVar3 = param_1[2];
  if (uVar3 < (uint)param_1[3]) {
    imp___aeabi_memcpy4(uVar3,&uStack_2e88,0x2e08);
    uVar3 = uVar3 + 0x2e08;
LAB_71582d20:
    param_1[2] = uVar3;
    if (uVar3 < (uint)param_1[3]) {
      imp___aeabi_memcpy4(uVar3,&uStack_5c90,0x2e08);
      iVar4 = uVar3 + 0x2e08;
LAB_71582e1c:
      param_1[2] = iVar4;
      if (_ext___stack_chk_guard != iStack_2c) {
                    /* WARNING: Subroutine does not return */
        imp___stack_chk_fail();
      }
      return;
    }
    iVar6 = *piVar2;
    iVar8 = uVar3 - iVar6;
    uVar3 = (iVar8 >> 3) * -0x5cfaf5bf + 1;
    if (uVar3 < 0x58fbb) {
      iVar4 = param_1[3] - iVar6 >> 3;
      if (uVar3 < (uint)(iVar4 * 0x460a1482)) {
        uVar3 = iVar4 * 0x460a1482;
      }
      if (0x2c7dc < (uint)(iVar4 * -0x5cfaf5bf)) {
        uVar3 = 0x58fba;
      }
      if (uVar3 == 0) {
        iVar1 = 0;
      }
      else {
        if (0x58fba < uVar3) goto LAB_71582e48;
        iVar1 = thunk_MwhHq(uVar3 * 0x2e08);
      }
      iVar5 = (iVar8 >> 3) * 8 + iVar1;
      imp___aeabi_memcpy4(iVar5,&uStack_5c90,0x2e08);
      imp___aeabi_memcpy4(iVar5 - iVar8,iVar6,iVar8);
      iVar4 = iVar5 + 0x2e08;
      param_1[1] = iVar5 - iVar8;
      param_1[2] = iVar4;
      param_1[3] = uVar3 * 0x2e08 + iVar1;
      if (iVar6 != 0) {
        thunk_qNQrlu(iVar6);
      }
      goto LAB_71582e1c;
    }
  }
  else {
    iVar6 = *piVar2;
    iVar4 = uVar3 - iVar6;
    uVar7 = (iVar4 >> 3) * -0x5cfaf5bf + 1;
    if (uVar7 < 0x58fbb) {
      iVar8 = param_1[3] - iVar6 >> 3;
      if (uVar7 < (uint)(iVar8 * 0x460a1482)) {
        uVar7 = iVar8 * 0x460a1482;
      }
      if (0x2c7dc < (uint)(iVar8 * -0x5cfaf5bf)) {
        uVar7 = 0x58fba;
      }
      if (uVar7 == 0) {
        iVar8 = 0;
      }
      else {
        if (0x58fba < uVar7) goto LAB_71582e48;
        iVar8 = thunk_MwhHq(uVar7 * 0x2e08);
      }
      iVar1 = (iVar4 >> 3) * 8 + iVar8;
      imp___aeabi_memcpy4(iVar1,&uStack_2e88,0x2e08);
      imp___aeabi_memcpy4(iVar1 - iVar4,iVar6,iVar4);
      uVar3 = iVar1 + 0x2e08;
      param_1[1] = iVar1 - iVar4;
      param_1[2] = uVar3;
      param_1[3] = uVar7 * 0x2e08 + iVar8;
      if (iVar6 != 0) {
        thunk_qNQrlu(iVar6);
      }
      goto LAB_71582d20;
    }
  }
  FUN_71591760();
LAB_71582e48:
                    /* WARNING: Subroutine does not return */
  FUN_712f6cf0();
}


// =========================================================================
// Function: FUN_71583064
// Entry: 0x71583064 | Size: 300 bytes
// =========================================================================

undefined4 * FUN_71583064(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  FUN_7156ef24(param_1 + 2);
  FUN_7156ef24(param_1 + 0x82);
  FUN_7156ef24(param_1 + 0x102);
  FUN_7156ef24(param_1 + 0x182);
  FUN_7156ef24(param_1 + 0x202);
  FUN_7156ef24(param_1 + 0x282);
  FUN_7156ef24(param_1 + 0x302);
  FUN_7156ef24(param_1 + 0x382);
  FUN_7156ef24(param_1 + 0x402);
  FUN_7156ef24(param_1 + 0x482);
  FUN_7156ef24(param_1 + 0x502);
  FUN_7156ef24(param_1 + 0x582);
  FUN_7156ef24(param_1 + 0x602);
  FUN_7156ef24(param_1 + 0x682);
  FUN_7156ef24(param_1 + 0x702);
  FUN_7156ef24(param_1 + 0x782);
  FUN_7156ef24(param_1 + 0x802);
  FUN_7156ef24(param_1 + 0x882);
  FUN_7156ef24(param_1 + 0x902);
  FUN_7156ef24(param_1 + 0x982);
  FUN_7156ef24(param_1 + 0xa02);
  FUN_7156ef24(param_1 + 0xa82);
  FUN_7156ef24(param_1 + 0xb02);
  return param_1;
}


// =========================================================================
// Function: FUN_7158342c
// Entry: 0x7158342c | Size: 3804 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7158342c(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  byte *pbVar3;
  undefined4 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  char cVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int iVar16;
  int *piVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int *piVar21;
  int *piVar22;
  int *piVar23;
  int *piVar24;
  int *piVar25;
  bool bVar26;
  int iStack_2e88;
  int *piStack_2e84;
  int *piStack_2e80;
  int *piStack_2e7c;
  int iStack_2e74;
  uint uStack_2e60;
  uint uStack_2e5c;
  undefined1 auStack_2e58 [11776];
  char acStack_58 [8];
  int aiStack_50 [2];
  int aiStack_48 [4];
  int *piStack_38;
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  iVar1 = FUN_71584f14(param_2,param_2 + param_3,0,0);
  if (iVar1 == 0) goto LAB_71584218;
  piVar24 = aiStack_48;
  piStack_38 = (int *)0x0;
  FUN_71585108(acStack_58,param_2,param_2 + param_3,piVar24,1,0,0);
  if (piStack_38 == piVar24) {
    iVar1 = 0x10;
LAB_715834d8:
    (**(code **)(*piVar24 + iVar1))();
  }
  else {
    iVar1 = 0x14;
    piVar24 = piStack_38;
    if (piStack_38 != (int *)0x0) goto LAB_715834d8;
  }
  if (acStack_58[0] == '\x01') {
    pcVar2 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3e10);
    if (*pcVar2 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3e00);
      *puVar10 = 0xa354f896;
      puVar10[1] = 0x9624f4ab;
      *(undefined1 *)((int)puVar10 + 10) = 1;
      *(undefined2 *)(puVar10 + 2) = 0x9d8e;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71586220,puVar10,&DAT_70b0e000);
      puVar8 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3e10);
      *puVar8 = 1;
    }
    pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3e00);
    if (pbVar3[10] != 0) {
      *pbVar3 = *pbVar3 ^ 0xfd;
      pbVar3[1] = pbVar3[1] ^ 0x9d;
      pbVar3[2] = pbVar3[2] ^ 0x2d;
      pbVar3[3] = pbVar3[3] ^ 0xc5;
      pbVar3[10] = 0;
      pbVar3[4] = pbVar3[4] ^ 0xd9;
      pbVar3[5] = pbVar3[5] ^ 0x95;
      pbVar3[6] = pbVar3[6] ^ 0x49;
      pbVar3[7] = pbVar3[7] ^ 0xf3;
      pbVar3[8] = pbVar3[8] ^ 0xfd;
      pbVar3[9] = pbVar3[9] ^ 0x9d;
    }
    if (acStack_58[0] == '\x01') {
      piVar23 = (int *)0x0;
      piVar24 = (int *)(aiStack_50[0] + 4);
      piVar22 = (int *)*piVar24;
      piVar14 = piVar24;
      if (piVar22 != (int *)0x0) {
        do {
          iVar1 = thunk_cHJdPHKOyIgkbFDRkmqaTDmnFLylOTRrLxHfLU_pJTyYLwQGQWoOCeBEsbyo_ZeYCptYJBSTzcUHfRd
                            (piVar22 + 4,pbVar3);
          if (-1 < iVar1) {
            piVar14 = piVar22;
          }
          piVar22 = (int *)piVar22[-(iVar1 >> 0x1f)];
        } while (piVar22 != (int *)0x0);
        if ((piVar14 != piVar24) &&
           (iVar1 = thunk_cHJdPHKOyIgkbFDRkmqaTDmnFLylOTRrLxHfLU_pJTyYLwQGQWoOCeBEsbyo_ZeYCptYJBSTzcUHfRd
                              (piVar14 + 4,pbVar3), iVar1 < 1)) {
          piVar24 = piVar14;
        }
      }
LAB_71583628:
      bVar26 = false;
      piVar14 = piVar23;
      if (acStack_58[0] != '\x02') goto LAB_71583638;
LAB_7158366c:
      piVar14 = piVar23;
      if (piVar23 == *(int **)(aiStack_50[0] + 4)) {
        acStack_58[0] = '\x02';
        goto LAB_71584210;
      }
LAB_71583680:
      if ((char)*piVar23 == '\x02') {
        piVar23 = piVar14;
        if (acStack_58[0] != '\x02') {
          if (acStack_58[0] != '\x01') {
                    /* WARNING: Subroutine does not return */
            imp_abort();
          }
          piVar23 = piVar24 + 8;
        }
        cVar11 = (char)*piVar23;
        if (cVar11 != '\0') {
          if (cVar11 == '\x02') {
            if (*(int *)piVar23[2] != ((int *)piVar23[2])[1]) goto LAB_71583710;
          }
          else if ((cVar11 != '\x01') || (*(int *)(piVar23[2] + 8) != 0)) {
LAB_71583710:
            pcVar2 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3e30);
            if (*pcVar2 == '\0') {
              puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3e20);
              *(undefined2 *)(puVar10 + 2) = 0x1bb;
              *puVar10 = 0x7ba04fc8;
              puVar10[1] = 0x1cc6cde;
              thunk_GFDIUClbc_QcPNgD_wH(&LAB_7158624c,puVar10,&DAT_70b0e000);
              puVar8 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3e30);
              *puVar8 = 1;
            }
            pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3e20);
            if (pbVar3[9] != 0) {
              pbVar3[9] = 0;
              *pbVar3 = *pbVar3 ^ 0xbb;
              pbVar3[1] = pbVar3[1] ^ 0x3b;
              pbVar3[2] = pbVar3[2] ^ 0xc1;
              pbVar3[3] = pbVar3[3] ^ 9;
              pbVar3[4] = pbVar3[4] ^ 0x8d;
              pbVar3[5] = pbVar3[5] ^ 9;
              pbVar3[6] = pbVar3[6] ^ 0xa9;
              pbVar3[7] = pbVar3[7] ^ 0x65;
              pbVar3[8] = pbVar3[8] ^ 0xbb;
            }
            if (acStack_58[0] == '\x01') {
              piVar22 = (int *)(aiStack_50[0] + 4);
              piVar15 = (int *)*piVar22;
              piVar23 = piVar22;
              if (piVar15 != (int *)0x0) {
                do {
                  iVar1 = thunk_cHJdPHKOyIgkbFDRkmqaTDmnFLylOTRrLxHfLU_pJTyYLwQGQWoOCeBEsbyo_ZeYCptYJBSTzcUHfRd
                                    (piVar15 + 4,pbVar3);
                  if (-1 < iVar1) {
                    piVar23 = piVar15;
                  }
                  piVar15 = (int *)piVar15[-(iVar1 >> 0x1f)];
                } while (piVar15 != (int *)0x0);
                if ((piVar23 != piVar22) &&
                   (iVar1 = thunk_cHJdPHKOyIgkbFDRkmqaTDmnFLylOTRrLxHfLU_pJTyYLwQGQWoOCeBEsbyo_ZeYCptYJBSTzcUHfRd
                                      (piVar23 + 4,pbVar3), iVar1 < 1)) {
                  piVar22 = piVar23;
                }
              }
              if ((piVar22 != (int *)(aiStack_50[0] + 4)) &&
                 (pbVar3 = (byte *)FUN_7158534c(acStack_58,s_starSeed_700690a7), *pbVar3 - 5 < 2)) {
                FUN_7158534c(acStack_58,s_starSeed_700690a7);
                uVar4 = FUN_715822a8();
                *param_1 = uVar4;
              }
            }
            piVar23 = param_1 + 1;
            param_1[2] = *piVar23;
            if (acStack_58[0] == '\x01') {
              piVar14 = piVar24 + 8;
            }
            else if (acStack_58[0] != '\x02') {
              if (acStack_58[0] != '\0') {
                    /* WARNING: Subroutine does not return */
                imp_abort();
              }
                    /* WARNING: Subroutine does not return */
              imp_abort();
            }
            cVar11 = (char)*piVar14;
            iVar1 = 1;
            piVar22 = (int *)0x0;
            piVar24 = (int *)0x0;
            piStack_2e80 = (int *)0x0;
            piStack_2e84 = (int *)0x0;
            iStack_2e88 = 1;
            if (cVar11 != '\0') {
              if (cVar11 == '\x02') {
                iVar1 = -0x80000000;
                piVar22 = *(int **)piVar14[2];
                piStack_2e84 = (int *)((undefined4 *)piVar14[2])[1];
                piStack_2e80 = (int *)0x0;
                iStack_2e88 = -0x80000000;
              }
              else if (cVar11 == '\x01') {
                iVar1 = -0x80000000;
                piStack_2e80 = (undefined4 *)piVar14[2] + 1;
                piVar24 = *(int **)piVar14[2];
                piStack_2e84 = (int *)0x0;
                iStack_2e88 = -0x80000000;
              }
              else {
                iVar1 = 0;
                piStack_2e80 = (int *)0x0;
                piStack_2e84 = (int *)0x0;
                iStack_2e88 = 1;
              }
            }
            pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3e40);
            pbVar5 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3e60);
            pbVar6 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3e80);
            do {
              while (cVar11 == '\x01') {
                if (piVar24 == piStack_2e80) goto LAB_71584210;
                piVar15 = piVar24 + 8;
LAB_715839cc:
                if ((char)*piVar15 != '\x01') goto LAB_71583b20;
                FUN_71583064(&uStack_2e60);
                pcVar2 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3e50);
                if (*pcVar2 == '\0') {
                  puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3e40);
                  *puVar10 = 0x17b8cc4f;
                  *(undefined2 *)(puVar10 + 1) = 0x119;
                  thunk_GFDIUClbc_QcPNgD_wH(&LAB_71586278,puVar10,&DAT_70b0e000);
                  puVar8 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3e50);
                  *puVar8 = 1;
                }
                if (pbVar3[5] != 0) {
                  pbVar3[5] = 0;
                  *pbVar3 = *pbVar3 ^ 0x27;
                  pbVar3[1] = pbVar3[1] ^ 0xa3;
                  pbVar3[2] = pbVar3[2] ^ 0xcd;
                  pbVar3[3] = pbVar3[3] ^ 0x65;
                  pbVar3[4] = pbVar3[4] ^ 0x19;
                }
                if ((char)*piVar15 == '\x01') {
                  piVar12 = (int *)(piVar15[2] + 4);
                  piVar17 = (int *)*piVar12;
                  piVar13 = piVar12;
                  if (piVar17 != (int *)0x0) {
                    do {
                      iVar7 = thunk_cHJdPHKOyIgkbFDRkmqaTDmnFLylOTRrLxHfLU_pJTyYLwQGQWoOCeBEsbyo_ZeYCptYJBSTzcUHfRd
                                        (piVar17 + 4,pbVar3);
                      if (-1 < iVar7) {
                        piVar13 = piVar17;
                      }
                      piVar17 = (int *)piVar17[-(iVar7 >> 0x1f)];
                    } while (piVar17 != (int *)0x0);
                    if ((piVar13 != piVar12) &&
                       (iVar7 = thunk_cHJdPHKOyIgkbFDRkmqaTDmnFLylOTRrLxHfLU_pJTyYLwQGQWoOCeBEsbyo_ZeYCptYJBSTzcUHfRd
                                          (piVar13 + 4,pbVar3), iVar7 < 1)) {
                      piVar12 = piVar13;
                    }
                  }
                  if (piVar12 != (int *)(piVar15[2] + 4)) {
                    puVar8 = (undefined1 *)FUN_715854cc(piVar15,&DAT_700619a2);
                    switch(*puVar8) {
                    case 4:
                      uStack_2e60 = (uint)(byte)puVar8[8];
                      break;
                    case 5:
                    case 6:
                      uStack_2e60 = *(uint *)(puVar8 + 8);
                      break;
                    case 7:
                      uStack_2e60 = FUN_71ba173c(*(undefined4 *)(puVar8 + 8),
                                                 *(undefined4 *)(puVar8 + 0xc));
                      break;
                    default:
                    /* WARNING: Subroutine does not return */
                      imp_abort();
                    }
                  }
                }
                pcVar2 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3e70);
                if (*pcVar2 == '\0') {
                  puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3e60);
                  *puVar10 = 0xf8858880;
                  *(undefined1 *)((int)puVar10 + 7) = 1;
                  *(undefined4 *)((int)puVar10 + 3) = 0xe7eafbf8;
                  thunk_GFDIUClbc_QcPNgD_wH(&LAB_715862a0,puVar10,&DAT_70b0e000);
                  puVar8 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3e70);
                  *puVar8 = 1;
                }
                if (pbVar5[7] != 0) {
                  pbVar5[7] = 0;
                  *pbVar5 = *pbVar5 ^ 0xed;
                  pbVar5[1] = pbVar5[1] ^ 0xe1;
                  pbVar5[2] = pbVar5[2] ^ 0xeb;
                  pbVar5[3] = pbVar5[3] ^ 0x8d;
                  pbVar5[4] = pbVar5[4] ^ 0x8f;
                  pbVar5[5] = pbVar5[5] ^ 0x8f;
                  pbVar5[6] = pbVar5[6] ^ 0xe7;
                }
                if ((char)*piVar15 == '\x01') {
                  piVar12 = (int *)(piVar15[2] + 4);
                  piVar17 = (int *)*piVar12;
                  piVar13 = piVar12;
                  if (piVar17 != (int *)0x0) {
                    do {
                      iVar7 = thunk_cHJdPHKOyIgkbFDRkmqaTDmnFLylOTRrLxHfLU_pJTyYLwQGQWoOCeBEsbyo_ZeYCptYJBSTzcUHfRd
                                        (piVar17 + 4,pbVar5);
                      if (-1 < iVar7) {
                        piVar13 = piVar17;
                      }
                      piVar17 = (int *)piVar17[-(iVar7 >> 0x1f)];
                    } while (piVar17 != (int *)0x0);
                    if ((piVar13 != piVar12) &&
                       (iVar7 = thunk_cHJdPHKOyIgkbFDRkmqaTDmnFLylOTRrLxHfLU_pJTyYLwQGQWoOCeBEsbyo_ZeYCptYJBSTzcUHfRd
                                          (piVar13 + 4,pbVar5), iVar7 < 1)) {
                      piVar12 = piVar13;
                    }
                  }
                  if (piVar12 != (int *)(piVar15[2] + 4)) {
                    puVar8 = (undefined1 *)FUN_715854cc(piVar15,s_minute_70072253);
                    switch(*puVar8) {
                    case 4:
                      uStack_2e5c = (uint)(byte)puVar8[8];
                      break;
                    case 5:
                    case 6:
                      uStack_2e5c = *(uint *)(puVar8 + 8);
                      break;
                    case 7:
                      uStack_2e5c = FUN_71ba173c(*(undefined4 *)(puVar8 + 8),
                                                 *(undefined4 *)(puVar8 + 0xc));
                      break;
                    default:
                    /* WARNING: Subroutine does not return */
                      imp_abort();
                    }
                  }
                }
                pcVar2 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3e90);
                if (*pcVar2 == '\0') {
                  puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3e80);
                  *(undefined2 *)(puVar10 + 2) = 0x167;
                  *puVar10 = 0x3e6d410;
                  puVar10[1] = 0x80a74025;
                  thunk_GFDIUClbc_QcPNgD_wH(&LAB_715862c8,puVar10,&DAT_70b0e000);
                  puVar8 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3e90);
                  *puVar8 = 1;
                }
                if (pbVar6[9] != 0) {
                  pbVar6[9] = 0;
                  *pbVar6 = *pbVar6 ^ 0x67;
                  pbVar6[1] = pbVar6[1] ^ 0xb1;
                  pbVar6[2] = pbVar6[2] ^ 0x87;
                  pbVar6[3] = pbVar6[3] ^ 0x77;
                  pbVar6[4] = pbVar6[4] ^ 0x4d;
                  pbVar6[5] = pbVar6[5] ^ 0x25;
                  pbVar6[6] = pbVar6[6] ^ 0xd5;
                  pbVar6[7] = pbVar6[7] ^ 0xf3;
                  pbVar6[8] = pbVar6[8] ^ 0x67;
                }
                cVar11 = (char)*piVar15;
                if (cVar11 == '\x01') {
                  piVar17 = (int *)0x0;
                  piVar12 = (int *)(piVar15[2] + 4);
                  piVar21 = (int *)*piVar12;
                  piVar13 = piVar12;
                  if (piVar21 != (int *)0x0) {
                    do {
                      iVar7 = thunk_cHJdPHKOyIgkbFDRkmqaTDmnFLylOTRrLxHfLU_pJTyYLwQGQWoOCeBEsbyo_ZeYCptYJBSTzcUHfRd
                                        (piVar21 + 4,pbVar6);
                      if (-1 < iVar7) {
                        piVar13 = piVar21;
                      }
                      piVar21 = (int *)piVar21[-(iVar7 >> 0x1f)];
                    } while (piVar21 != (int *)0x0);
                    if ((piVar13 != piVar12) &&
                       (iVar7 = thunk_cHJdPHKOyIgkbFDRkmqaTDmnFLylOTRrLxHfLU_pJTyYLwQGQWoOCeBEsbyo_ZeYCptYJBSTzcUHfRd
                                          (piVar13 + 4,pbVar6), iVar7 < 1)) {
                      piVar12 = piVar13;
                    }
                  }
LAB_71583da8:
                  cVar11 = (char)*piVar15;
                  bVar26 = false;
                  piVar13 = piVar17;
                  if (cVar11 != '\x02') goto LAB_71583db8;
LAB_71583dec:
                  piVar13 = piVar17;
                  if (piVar17 != *(int **)(piVar15[2] + 4)) goto LAB_71583e00;
                }
                else {
                  if (cVar11 == '\x02') {
                    piVar17 = *(int **)(piVar15[2] + 4);
                    piVar12 = (int *)0x0;
                    goto LAB_71583da8;
                  }
                  piVar17 = (int *)0x0;
                  bVar26 = true;
                  piVar12 = (int *)0x0;
                  piVar13 = piVar17;
                  if (cVar11 == '\x02') goto LAB_71583dec;
LAB_71583db8:
                  if (cVar11 == '\x01') {
                    if (piVar12 != (int *)(piVar15[2] + 4)) {
                      piVar17 = piVar12 + 8;
                      cVar11 = '\x01';
LAB_71583e00:
                      if ((char)*piVar17 == '\x02') {
                        if (cVar11 != '\x02') {
                          if (cVar11 != '\x01') {
                    /* WARNING: Subroutine does not return */
                            imp_abort();
                          }
                          piVar13 = piVar12 + 8;
                        }
                        cVar11 = (char)*piVar13;
                        iVar7 = 0;
                        iStack_2e74 = 1;
                        if (cVar11 == '\0') {
                          iVar18 = 1;
LAB_71584020:
                          piVar12 = (int *)0x0;
                          piStack_2e7c = (int *)0x0;
                        }
                        else {
                          if (cVar11 != '\x02') {
                            if (cVar11 == '\x01') {
                              iStack_2e74 = -0x80000000;
                              iVar18 = -0x80000000;
                              piVar12 = (int *)0x0;
                              piVar17 = (undefined4 *)piVar13[2] + 1;
                              piVar15 = *(int **)piVar13[2];
                              piStack_2e7c = (int *)0x0;
                              goto LAB_71584034;
                            }
                            iVar18 = 0;
                            goto LAB_71584020;
                          }
                          iVar18 = -0x80000000;
                          piVar12 = *(int **)piVar13[2];
                          piStack_2e7c = (int *)((undefined4 *)piVar13[2])[1];
                          iStack_2e74 = -0x80000000;
                        }
                        piVar15 = (int *)0x0;
                        piVar17 = (int *)0x0;
LAB_71584034:
                        if (cVar11 == '\x01') {
                          if (piVar15 == piVar17) goto LAB_71583e74;
                          piVar21 = piVar15 + 8;
                        }
                        else if (cVar11 == '\x02') {
                          piVar21 = piVar12;
                          if (piVar12 == piStack_2e7c) goto LAB_71583e74;
                        }
                        else {
                          if (iVar18 == iStack_2e74) goto LAB_71583e74;
                          if (cVar11 == '\0') {
                    /* WARNING: Subroutine does not return */
                            imp_abort();
                          }
                          piVar21 = piVar13;
                          if (iVar18 != 0) {
                    /* WARNING: Subroutine does not return */
                            imp_abort(piVar13);
                          }
                        }
                        if (iVar7 == 0x17) goto LAB_71583e74;
                        FUN_71570190(piVar21,auStack_2e58 + iVar7 * 0x200);
                        cVar11 = (char)*piVar13;
                        iVar7 = iVar7 + 1;
                        if (cVar11 == '\x02') {
                          piVar12 = piVar12 + 4;
                        }
                        else if (cVar11 == '\x01') {
                          piVar21 = (int *)piVar15[1];
                          piVar25 = piVar15;
                          if ((int *)piVar15[1] == (int *)0x0) {
                            do {
                              piVar15 = (int *)piVar25[2];
                              bVar26 = (int *)*piVar15 != piVar25;
                              piVar25 = piVar15;
                            } while (bVar26);
                          }
                          else {
                            do {
                              piVar15 = piVar21;
                              piVar21 = (int *)*piVar15;
                            } while ((int *)*piVar15 != (int *)0x0);
                          }
                        }
                        else {
                          iVar18 = iVar18 + 1;
                        }
                        goto LAB_71584034;
                      }
                    }
                  }
                  else if (!bVar26) goto LAB_7158430c;
                }
LAB_71583e74:
                uVar19 = param_1[2];
                if (uVar19 < (uint)param_1[3]) {
                  imp___aeabi_memcpy4(uVar19,&uStack_2e60,0x2e08);
                  iVar16 = uVar19 + 0x2e08;
                }
                else {
                  iVar7 = *piVar23;
                  iVar18 = uVar19 - iVar7;
                  uVar19 = (iVar18 >> 3) * -0x5cfaf5bf + 1;
                  if (0x58fba < uVar19) {
                    FUN_71591760(piVar23);
LAB_7158430c:
                    /* WARNING: Subroutine does not return */
                    imp_abort();
                  }
                  iVar9 = param_1[3] - iVar7 >> 3;
                  if (uVar19 < (uint)(iVar9 * 0x460a1482)) {
                    uVar19 = iVar9 * 0x460a1482;
                  }
                  if (0x2c7dc < (uint)(iVar9 * -0x5cfaf5bf)) {
                    uVar19 = 0x58fba;
                  }
                  if (uVar19 == 0) {
                    iVar9 = 0;
                  }
                  else {
                    if (0x58fba < uVar19) {
                    /* WARNING: Subroutine does not return */
                      FUN_712f6cf0();
                    }
                    iVar9 = thunk_MwhHq(uVar19 * 0x2e08);
                  }
                  iVar20 = (iVar18 >> 3) * 8 + iVar9;
                  imp___aeabi_memcpy4(iVar20,&uStack_2e60,0x2e08);
                  imp___aeabi_memcpy4(iVar20 - iVar18,iVar7,iVar18);
                  iVar16 = iVar20 + 0x2e08;
                  param_1[1] = iVar20 - iVar18;
                  param_1[2] = iVar16;
                  param_1[3] = uVar19 * 0x2e08 + iVar9;
                  if (iVar7 != 0) {
                    thunk_qNQrlu(iVar7);
                  }
                }
                param_1[2] = iVar16;
                cVar11 = (char)*piVar14;
                if (cVar11 != '\x02') goto LAB_71583f94;
LAB_71583994:
                piVar22 = piVar22 + 4;
              }
              if (cVar11 == '\x02') {
                piVar15 = piVar22;
                if (piVar22 != piStack_2e84) goto LAB_715839cc;
                break;
              }
              if (iVar1 == iStack_2e88) break;
              if (cVar11 == '\0') {
                    /* WARNING: Subroutine does not return */
                imp_abort();
              }
              if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
                imp_abort();
              }
LAB_71583b20:
              if (cVar11 == '\x02') goto LAB_71583994;
LAB_71583f94:
              if (cVar11 == '\x01') {
                piVar15 = (int *)piVar24[1];
                piVar12 = piVar24;
                if ((int *)piVar24[1] == (int *)0x0) {
                  do {
                    piVar24 = (int *)piVar12[2];
                    bVar26 = (int *)*piVar24 != piVar12;
                    piVar12 = piVar24;
                  } while (bVar26);
                }
                else {
                  do {
                    piVar24 = piVar15;
                    piVar15 = (int *)*piVar24;
                  } while ((int *)*piVar24 != (int *)0x0);
                }
              }
              else {
                iVar1 = iVar1 + 1;
              }
            } while( true );
          }
        }
      }
    }
    else {
      if (acStack_58[0] == '\x02') {
        piVar23 = *(int **)(aiStack_50[0] + 4);
        piVar24 = (int *)0x0;
        goto LAB_71583628;
      }
      bVar26 = true;
      piVar24 = (int *)0x0;
      piVar23 = (int *)0x0;
      piVar14 = piVar23;
      if (acStack_58[0] == '\x02') goto LAB_7158366c;
LAB_71583638:
      if (acStack_58[0] == '\x01') {
        if (piVar24 != (int *)(aiStack_50[0] + 4)) {
          piVar23 = piVar24 + 8;
          goto LAB_71583680;
        }
        acStack_58[0] = '\x01';
      }
      else if (!bVar26) {
                    /* WARNING: Subroutine does not return */
        imp_abort();
      }
    }
  }
LAB_71584210:
  FUN_7152f750(aiStack_50,acStack_58[0]);
LAB_71584218:
  if (_ext___stack_chk_guard != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail(iStack_2c);
  }
  return;
}


// =========================================================================
// Function: FUN_71584f14
// Entry: 0x71584f14 | Size: 272 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71584f14(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined1 uStack_c1;
  int aiStack_c0 [4];
  int *piStack_b0;
  int aiStack_a8 [4];
  int *piStack_98;
  int iStack_68;
  int iStack_64;
  byte bStack_5c;
  undefined4 uStack_54;
  int iStack_1c;
  
  piVar1 = aiStack_a8;
  piVar2 = aiStack_c0;
  iStack_1c = _ext___stack_chk_guard;
  piStack_b0 = (int *)0x0;
  FUN_7158639c(piVar1,param_1,param_2,piVar2,0,param_3,param_4);
  FUN_715917c8(piVar1,&uStack_c1,1);
  if ((bStack_5c & 1) != 0) {
    thunk_qNQrlu(uStack_54);
  }
  if (iStack_68 != 0) {
    iStack_64 = iStack_68;
    thunk_qNQrlu();
  }
  if (piStack_98 == piVar1) {
    iVar3 = 0x10;
LAB_71584fc0:
    (**(code **)(*piVar1 + iVar3))();
  }
  else {
    iVar3 = 0x14;
    piVar1 = piStack_98;
    if (piStack_98 != (int *)0x0) goto LAB_71584fc0;
  }
  if (piStack_b0 == piVar2) {
    iVar3 = 0x10;
  }
  else {
    iVar3 = 0x14;
    piVar2 = piStack_b0;
    if (piStack_b0 == (int *)0x0) goto LAB_71584ffc;
  }
  (**(code **)(*piVar2 + iVar3))();
LAB_71584ffc:
  if (_ext___stack_chk_guard == iStack_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail(iStack_1c);
}


// =========================================================================
// Function: FUN_71585108
// Entry: 0x71585108 | Size: 352 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71585108(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int aiStack_c8 [4];
  int *piStack_b8;
  int aiStack_b0 [4];
  int *piStack_a0;
  int iStack_70;
  int iStack_6c;
  byte bStack_64;
  undefined4 uStack_5c;
  int iStack_24;
  
  iStack_24 = _ext___stack_chk_guard;
  piStack_b8 = (int *)param_4[4];
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = 0;
  if (piStack_b8 == (int *)0x0) {
    piStack_b8 = (int *)0x0;
  }
  else if (piStack_b8 == param_4) {
    piStack_b8 = aiStack_c8;
    (**(code **)(*param_4 + 0xc))(param_4,piStack_b8);
  }
  else {
    param_4[4] = 0;
  }
  piVar1 = aiStack_b0;
  piVar2 = aiStack_c8;
  FUN_7158639c(piVar1,param_2,param_3,piVar2,param_5,param_6,param_7);
  FUN_71586628(piVar1,1,param_1);
  if ((bStack_64 & 1) != 0) {
    thunk_qNQrlu(uStack_5c);
  }
  if (iStack_70 != 0) {
    iStack_6c = iStack_70;
    thunk_qNQrlu();
  }
  if (piStack_a0 == piVar1) {
    iVar3 = 0x10;
LAB_71585208:
    (**(code **)(*piVar1 + iVar3))();
  }
  else {
    iVar3 = 0x14;
    piVar1 = piStack_a0;
    if (piStack_a0 != (int *)0x0) goto LAB_71585208;
  }
  if (piStack_b8 == piVar2) {
    iVar3 = 0x10;
  }
  else {
    iVar3 = 0x14;
    piVar2 = piStack_b8;
    if (piStack_b8 == (int *)0x0) goto LAB_71585244;
  }
  (**(code **)(*piVar2 + iVar3))();
LAB_71585244:
  if (_ext___stack_chk_guard == iStack_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_7158534c
// Entry: 0x7158534c | Size: 192 bytes
// =========================================================================

undefined4 FUN_7158534c(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  uVar1 = imp_strlen(param_2);
  if (0xfffffff7 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_2c);
  }
  if (uVar1 < 0xb) {
    uVar3 = (uint)&uStack_2c | 1;
    uStack_2c = CONCAT31(uStack_2c._1_3_,(char)(uVar1 << 1));
    if (uVar1 == 0) goto LAB_715853c8;
  }
  else {
    uVar3 = thunk_MwhHq((uVar1 | 7) + 1);
    uStack_2c = (uVar1 | 7) + 2;
    uStack_28 = uVar1;
    uStack_24 = uVar3;
  }
  imp___aeabi_memcpy(uVar3,param_2,uVar1);
LAB_715853c8:
  *(undefined1 *)(uVar3 + uVar1) = 0;
  uVar2 = FUN_715915c8(param_1,&uStack_2c);
  if ((uStack_2c & 1) != 0) {
    thunk_qNQrlu(uStack_24);
  }
  return uVar2;
}


// =========================================================================
// Function: FUN_715854cc
// Entry: 0x715854cc | Size: 204 bytes
// =========================================================================

int FUN_715854cc(char *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  uVar1 = imp_strlen(param_2);
  if (0xfffffff7 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_2c);
  }
  if (uVar1 < 0xb) {
    uVar3 = (uint)&uStack_2c | 1;
    uStack_2c = CONCAT31(uStack_2c._1_3_,(char)(uVar1 << 1));
    if (uVar1 == 0) goto LAB_71585548;
  }
  else {
    uVar3 = thunk_MwhHq((uVar1 | 7) + 1);
    uStack_2c = (uVar1 | 7) + 2;
    uStack_28 = uVar1;
    uStack_24 = uVar3;
  }
  imp___aeabi_memcpy(uVar3,param_2,uVar1);
LAB_71585548:
  *(undefined1 *)(uVar3 + uVar1) = 0;
  if (*param_1 != '\x01') {
                    /* WARNING: Subroutine does not return */
    imp_abort();
  }
  iVar2 = FUN_71592f84(*(undefined4 *)(param_1 + 8),&uStack_2c);
  if ((uStack_2c & 1) != 0) {
    thunk_qNQrlu(uStack_24);
  }
  return iVar2 + 0x20;
}


// =========================================================================
// Function: FUN_71585674
// Entry: 0x71585674 | Size: 804 bytes
// =========================================================================

undefined4 FUN_71585674(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  char *pcVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  bool bVar17;
  undefined8 uVar18;
  int iStack_34;
  byte abStack_30 [8];
  uint uStack_28;
  
  uVar18 = CONCAT44(param_2,param_2);
  if (param_2 == 0) {
    pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3eb0);
    if (*pcVar4 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3ea0);
      *(undefined1 *)((int)puVar8 + 0x1d) = 1;
      uVar15 = DAT_700823c8;
      uVar16 = DAT_700823c4;
      *puVar8 = DAT_700823c0;
      puVar8[1] = uVar16;
      puVar8[2] = uVar15;
      uVar3 = DAT_700823d8;
      uVar15 = DAT_700823d4;
      uVar16 = DAT_700823d0;
      puVar8[3] = DAT_700823cc;
      puVar8[4] = uVar16;
      puVar8[5] = uVar15;
      puVar8[6] = uVar3;
      *(undefined1 *)(puVar8 + 7) = DAT_700823dc;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_715862f4,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3eb0);
      *puVar9 = 1;
    }
    uVar18 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3ea0);
    iVar6 = (int)uVar18;
    if (*(char *)(iVar6 + 0x1d) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar11 = (uVar13 & 7) * 8;
        uVar12 = iVar11 - 0x20;
        bVar10 = (byte)(0xb12339e1 >> iVar11) |
                 (byte)(-0x42cf0bd << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar12) {
          bVar10 = (byte)(0xfbd30f43 >> (uVar12 & 0xff));
        }
        *(byte *)(iVar6 + uVar13) = *(byte *)(iVar6 + uVar13) ^ bVar10;
        bVar17 = 0xfffffffe < uVar13;
        uVar18 = CONCAT44(uVar13 + 1,iVar6);
        bVar1 = uVar14 == 0;
        bVar2 = (0x1b < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar6 + 0x1d) = 0;
    }
  }
  uVar16 = (undefined4)uVar18;
  FUN_71585e7c(abStack_30,(int)((ulonglong)uVar18 >> 0x20),uVar16);
  uVar13 = uStack_28;
  if ((abStack_30[0] & 1) == 0) {
    uVar13 = (uint)abStack_30 | 1;
  }
  pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3ed0);
  if (*pcVar4 == '\0') {
    puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3ec0);
    *puVar8 = 0x1753fa3;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71586334,puVar8,&DAT_70b0e000);
    puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3ed0);
    *puVar9 = 1;
  }
  pbVar5 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3ec0);
  if (pbVar5[3] != 0) {
    pbVar5[3] = 0;
    *pbVar5 = *pbVar5 ^ 0xd1;
    pbVar5[1] = pbVar5[1] ^ 0x5d;
    pbVar5[2] = pbVar5[2] ^ 0x75;
  }
  iVar6 = imp_fopen(uVar13);
  if (iVar6 == 0) {
    uVar15 = 0;
    iStack_34 = 0;
    iVar6 = FUN_714c5f6c(0,&iStack_34,uVar16,0);
    if ((iVar6 != 0) || (iStack_34 == 0)) goto LAB_715858cc;
    iVar6 = FUN_714c8774();
    iVar11 = thunk__IBDl(iVar6 + 1);
    FUN_714c5410(iStack_34,iVar11,iVar6);
    *(undefined1 *)(iVar11 + iVar6) = 0;
    FUN_714c82ec(iStack_34);
    uVar15 = FUN_7158342c(param_1,iVar11,iVar6);
  }
  else {
    uVar15 = 0;
    imp_fseek(iVar6,0,2);
    iVar7 = imp_ftell(iVar6);
    imp_fseek(iVar6,0,0);
    if (iVar7 < 1) {
      imp_fclose(iVar6);
      goto LAB_715858cc;
    }
    iVar11 = thunk__IBDl(iVar7 + 1);
    imp_fread(iVar11,1,iVar7,iVar6);
    *(undefined1 *)(iVar11 + iVar7) = 0;
    imp_fclose(iVar6);
    uVar15 = FUN_7158342c(param_1,iVar11,iVar7);
  }
  thunk_dGrRHE(iVar11);
  thunk_TLUeCDiekSSzXIoKMrpDGxbhUhOecwKWVtKHyZVlDPMMdVvsalzdkegtCtYHBtVMbgUoWiuRKGDAl
            (param_1 + 0x10,uVar16);
LAB_715858cc:
  if ((abStack_30[0] & 1) != 0) {
    thunk_qNQrlu(uStack_28);
  }
  return uVar15;
}


// =========================================================================
// Function: FUN_71585e7c
// Entry: 0x71585e7c | Size: 372 bytes
// =========================================================================

void FUN_71585e7c(undefined4 param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  char *pcVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  byte abStack_38 [8];
  undefined4 uStack_30;
  byte abStack_2c [8];
  undefined4 uStack_24;
  
  if (param_3 == 0) {
    pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3ef0,0);
    if (*pcVar7 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3ee0);
      *(undefined1 *)((int)puVar9 + 0x1d) = 1;
      uVar4 = DAT_700823e8;
      uVar3 = DAT_700823e4;
      *puVar9 = DAT_700823e0;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      uVar5 = DAT_700823f8;
      uVar4 = DAT_700823f4;
      uVar3 = DAT_700823f0;
      puVar9[3] = DAT_700823ec;
      puVar9[4] = uVar3;
      puVar9[5] = uVar4;
      puVar9[6] = uVar5;
      *(undefined1 *)(puVar9 + 7) = DAT_700823fc;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7158635c,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3ef0);
      *puVar10 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3ee0);
    if (*(char *)(iVar8 + 0x1d) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar6 = (byte)(0x871fab4b >> iVar13) |
                (byte)(0x57e3df4d << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar6 = (byte)(0x57e3df4d >> (uVar14 & 0xff));
        }
        *(byte *)(iVar8 + uVar11) = *(byte *)(iVar8 + uVar11) ^ bVar6;
        bVar15 = 0xfffffffe < uVar11;
        bVar1 = uVar12 == 0;
        bVar2 = (0x1b < uVar11) <= uVar12;
        uVar11 = uVar11 + 1;
        uVar12 = uVar12 + bVar15;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x1d) = 0;
    }
  }
  FUN_714bbb04(abStack_38);
  FUN_714bab0c(abStack_2c,abStack_38);
  if ((abStack_38[0] & 1) != 0) {
    thunk_qNQrlu(uStack_30);
  }
  FUN_71526338(param_1,&DAT_711f6be0,abStack_2c);
  if ((abStack_2c[0] & 1) != 0) {
    thunk_qNQrlu(uStack_24);
  }
  return;
}


// =========================================================================
// Function: FUN_7158639c
// Entry: 0x7158639c | Size: 420 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7158639c(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,undefined1 param_5,
                 undefined1 param_6,undefined1 param_7)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int aiStack_40 [4];
  int *piStack_30;
  int iStack_28;
  
  piStack_30 = aiStack_40;
  piVar5 = aiStack_40;
  iStack_28 = _ext___stack_chk_guard;
  piVar1 = (int *)param_4[4];
  if (piVar1 == (int *)0x0) {
    piStack_30 = (int *)0x0;
LAB_715863fc:
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  else {
    if (piVar1 == param_4) {
      (**(code **)(*param_4 + 0xc))(param_4,aiStack_40);
      if (piStack_30 == (int *)0x0) goto LAB_715863fc;
    }
    else {
      param_4[4] = 0;
      piStack_30 = piVar1;
    }
    if (piStack_30 == aiStack_40) {
      *(int *)(param_1 + 0x10) = param_1;
      (**(code **)(aiStack_40[0] + 0xc))(aiStack_40,param_1);
    }
    else {
      *(int **)(param_1 + 0x10) = piStack_30;
      piStack_30 = (int *)0x0;
    }
  }
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = param_3;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x28) = param_6;
  *(undefined4 *)(param_1 + 0x18) = 0;
  imp___aeabi_memclr4(param_1 + 0x34,0x24);
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined1 **)(param_1 + 0x58) = &DAT_70064a63;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  puVar2 = (undefined4 *)imp_localeconv();
  if ((byte *)*puVar2 == (byte *)0x0) {
    uVar3 = 0x2e;
  }
  else {
    uVar3 = (uint)*(byte *)*puVar2;
  }
  *(undefined1 *)(param_1 + 0x81) = param_7;
  *(uint *)(param_1 + 0x78) = uVar3;
  *(undefined1 *)(param_1 + 0x80) = param_5;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  uVar4 = FUN_71587238((undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  if (piStack_30 == aiStack_40) {
    iVar6 = 0x10;
  }
  else {
    iVar6 = 0x14;
    piVar5 = piStack_30;
    if (piStack_30 == (int *)0x0) goto LAB_7158651c;
  }
  (**(code **)(*piVar5 + iVar6))();
LAB_7158651c:
  if (_ext___stack_chk_guard == iStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_71586628
// Entry: 0x71586628 | Size: 1596 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71586628(int *param_1,int param_2,char *param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined1 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  char cStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  uint uStack_100;
  uint uStack_fc;
  uint uStack_f8;
  byte abStack_f4 [8];
  undefined4 uStack_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  uint auStack_d8 [4];
  undefined *puStack_c8;
  undefined4 uStack_c4;
  undefined1 auStack_c0 [16];
  int aiStack_b0 [4];
  int *piStack_a0;
  char *pcStack_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  int iStack_88;
  char cStack_84;
  char cStack_83;
  int *piStack_80;
  int iStack_7c;
  char cStack_6c;
  int aiStack_68 [4];
  int *piStack_58;
  char cStack_50;
  undefined1 uStack_48;
  undefined1 auStack_40 [20];
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  piVar1 = (int *)param_1[4];
  if (piVar1 == (int *)0x0) {
    iStack_94 = 0;
    iStack_90 = 0;
    uStack_8c = 0;
    iStack_88 = 0;
    cStack_84 = '\0';
    cStack_83 = (char)param_1[0x20];
    pcStack_98 = param_3;
    piStack_80 = param_1 + 8;
    FUN_7158c45c(param_1,&pcStack_98);
    if (param_2 != 0) {
      iVar6 = FUN_71587238(param_1 + 8);
      param_1[6] = iVar6;
      if (iVar6 != 0xf) {
        pbVar8 = (byte *)param_1[0x10];
        pbVar10 = (byte *)param_1[0x11];
        auStack_d8[2] = 0;
        auStack_d8[1] = 0;
        auStack_d8[0] = 0;
        if (pbVar8 != pbVar10) {
          do {
            if (*pbVar8 < 0x20) {
              auStack_c0[0] = 0;
              uStack_c4 = 0;
              puStack_c8 = (undefined *)0x0;
              FUN_71590454(&puStack_c8,9,9,s_<U___4X>_7006767c,*pbVar8);
              thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
                        (auStack_d8,&puStack_c8);
            }
            else {
              thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                        (auStack_d8);
            }
            pbVar8 = pbVar8 + 1;
          } while (pbVar8 != pbVar10);
        }
        iStack_e8 = param_1[0xd];
        iStack_e4 = param_1[0xe];
        iStack_e0 = param_1[0xf];
        uVar3 = imp_strlen(s_value_7006bfcf);
        if (0xfffffff7 < uVar3) goto LAB_71586c54;
        if (uVar3 < 0xb) {
          uStack_100 = CONCAT31(uStack_100._1_3_,(char)(uVar3 << 1));
          uVar9 = (uint)&uStack_100 | 1;
          if (uVar3 != 0) goto LAB_71586b10;
        }
        else {
          uVar9 = thunk_MwhHq((uVar3 | 7) + 1);
          uStack_100 = (uVar3 | 7) + 2;
          uStack_fc = uVar3;
          uStack_f8 = uVar9;
LAB_71586b10:
          imp___aeabi_memcpy(uVar9,s_value_7006bfcf,uVar3);
        }
        *(undefined1 *)(uVar9 + uVar3) = 0;
        FUN_7158b9c8(abStack_f4,param_1,0xf,&uStack_100);
        FUN_71535458(&puStack_c8,0x65,&iStack_e8,abStack_f4,0);
        cStack_84 = '\x01';
        if (cStack_83 != '\0') {
                    /* WARNING: Subroutine does not return */
          imp_abort();
        }
        puStack_c8 = &DAT_70b0e9d8;
        thunk_jJGKcnfLgdrxxLeuIMkbyODuAc(auStack_c0);
        thunk_CnY_uZeaDyxdbKuhNYOsuNTHkGOv_Ep(&puStack_c8);
        if ((abStack_f4[0] & 1) != 0) {
          thunk_qNQrlu(uStack_ec);
        }
        if ((uStack_100 & 1) != 0) {
          thunk_qNQrlu(uStack_f8);
        }
        if ((auStack_d8[0] & 1) != 0) {
          thunk_qNQrlu(auStack_d8[2]);
        }
      }
    }
    if (cStack_84 != '\0') {
      uStack_128 = *(undefined4 *)(param_3 + 8);
      param_3[8] = '\0';
      param_3[9] = '\0';
      param_3[10] = '\0';
      param_3[0xb] = '\0';
      uVar7 = *(undefined4 *)(param_3 + 0xc);
      *(undefined4 *)(param_3 + 0xc) = uStack_124;
      *param_3 = '\t';
      uStack_124 = uVar7;
      FUN_7152f750(&uStack_128);
    }
    goto LAB_71586c1c;
  }
  piVar2 = aiStack_b0;
  if (piVar1 == param_1) {
    piStack_a0 = aiStack_b0;
    (**(code **)(*param_1 + 0xc))(param_1);
  }
  else {
    piStack_a0 = (int *)(**(code **)(*piVar1 + 8))();
  }
  FUN_715898ec(&pcStack_98,param_3,piVar2,(char)param_1[0x20],param_1 + 8);
  if (piStack_a0 == piVar2) {
    iVar6 = 0x10;
LAB_715867bc:
    (**(code **)(*piVar2 + iVar6))();
  }
  else {
    iVar6 = 0x14;
    piVar2 = piStack_a0;
    if (piStack_a0 != (int *)0x0) goto LAB_715867bc;
  }
  FUN_71589a54(param_1,&pcStack_98);
  if (param_2 != 0) {
    iVar6 = FUN_71587238(param_1 + 8);
    param_1[6] = iVar6;
    if (iVar6 != 0xf) {
      pbVar8 = (byte *)param_1[0x10];
      pbVar10 = (byte *)param_1[0x11];
      auStack_d8[2] = 0;
      auStack_d8[1] = 0;
      auStack_d8[0] = 0;
      if (pbVar8 != pbVar10) {
        do {
          if (*pbVar8 < 0x20) {
            auStack_c0[0] = 0;
            uStack_c4 = 0;
            puStack_c8 = (undefined *)0x0;
            FUN_71590454(&puStack_c8,9,9,s_<U___4X>_7006767c,*pbVar8);
            thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
                      (auStack_d8,&puStack_c8);
          }
          else {
            thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                      (auStack_d8);
          }
          pbVar8 = pbVar8 + 1;
        } while (pbVar8 != pbVar10);
      }
      iStack_e8 = param_1[0xd];
      iStack_e4 = param_1[0xe];
      iStack_e0 = param_1[0xf];
      uVar3 = imp_strlen(s_value_7006bfcf);
      if (0xfffffff7 < uVar3) {
LAB_71586c54:
                    /* WARNING: Subroutine does not return */
        FUN_712f6c1c(&uStack_100);
      }
      if (uVar3 < 0xb) {
        uVar9 = (uint)&uStack_100 | 1;
        uStack_100 = CONCAT31(uStack_100._1_3_,(char)(uVar3 << 1));
        if (uVar3 != 0) goto LAB_7158693c;
      }
      else {
        uVar9 = thunk_MwhHq((uVar3 | 7) + 1);
        uStack_100 = (uVar3 | 7) + 2;
        uStack_fc = uVar3;
        uStack_f8 = uVar9;
LAB_7158693c:
        imp___aeabi_memcpy(uVar9,s_value_7006bfcf,uVar3);
      }
      *(undefined1 *)(uVar9 + uVar3) = 0;
      FUN_7158b9c8(abStack_f4,param_1,0xf,&uStack_100);
      FUN_71535458(&puStack_c8,0x65,&iStack_e8,abStack_f4,0);
      cStack_6c = '\x01';
      if (cStack_50 != '\0') {
                    /* WARNING: Subroutine does not return */
        imp_abort();
      }
      puStack_c8 = &DAT_70b0e9d8;
      thunk_jJGKcnfLgdrxxLeuIMkbyODuAc(auStack_c0);
      thunk_CnY_uZeaDyxdbKuhNYOsuNTHkGOv_Ep(&puStack_c8);
      if ((abStack_f4[0] & 1) != 0) {
        thunk_qNQrlu(uStack_ec);
      }
      if ((uStack_100 & 1) != 0) {
        thunk_qNQrlu(uStack_f8);
      }
      if ((auStack_d8[0] & 1) != 0) {
        thunk_qNQrlu(auStack_d8[2]);
      }
    }
  }
  if (cStack_6c == '\0') {
    if (*param_3 == '\t') {
      uStack_118 = *(undefined4 *)(param_3 + 8);
      uVar7 = *(undefined4 *)(param_3 + 0xc);
      *param_3 = '\0';
      param_3[8] = '\0';
      param_3[9] = '\0';
      param_3[10] = '\0';
      param_3[0xb] = '\0';
      *(undefined4 *)(param_3 + 0xc) = uStack_114;
      uStack_120 = 9;
      puVar4 = &uStack_118;
      cVar5 = '\t';
      uStack_114 = uVar7;
      goto LAB_71586a88;
    }
  }
  else {
    uStack_108 = *(undefined4 *)(param_3 + 8);
    param_3[8] = '\0';
    param_3[9] = '\0';
    param_3[10] = '\0';
    param_3[0xb] = '\0';
    uVar7 = *(undefined4 *)(param_3 + 0xc);
    *(undefined4 *)(param_3 + 0xc) = uStack_104;
    cStack_110 = *param_3;
    *param_3 = '\t';
    puVar4 = &uStack_108;
    uStack_104 = uVar7;
    cVar5 = cStack_110;
LAB_71586a88:
    FUN_7152f750(puVar4,cVar5);
  }
  FUN_7152f750(auStack_40,uStack_48);
  piVar1 = aiStack_68;
  if (piStack_58 == piVar1) {
    iVar6 = 0x10;
LAB_71586ac0:
    (**(code **)(*piVar1 + iVar6))();
  }
  else {
    iVar6 = 0x14;
    piVar1 = piStack_58;
    if (piStack_58 != (int *)0x0) goto LAB_71586ac0;
  }
  if (iStack_7c != 0) {
    thunk_qNQrlu();
  }
  if (iStack_88 != 0) {
    thunk_qNQrlu();
  }
LAB_71586c1c:
  if (iStack_94 != 0) {
    iStack_90 = iStack_94;
    thunk_qNQrlu();
  }
  if (_ext___stack_chk_guard == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_71587238
// Entry: 0x71587238 | Size: 3036 bytes
// =========================================================================

undefined4 FUN_71587238(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  undefined4 auStack_24 [3];
  
  if (*(int *)(param_1 + 0x14) == 0) {
    iVar3 = FUN_71589580(param_1);
    if (iVar3 == 0xef) {
      iVar3 = FUN_71589580(param_1);
      if ((iVar3 != 0xbb) || (iVar3 = FUN_71589580(param_1), iVar3 != 0xbf)) {
        pcVar4 = s_invalid_BOM__must_be_0xEF_0xBB_0_700717f8;
        goto LAB_715876a0;
      }
    }
    else {
      piVar5 = (int *)(param_1 + 0x18);
      iVar3 = *piVar5;
      *(undefined1 *)(param_1 + 0x10) = 1;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
      if (iVar3 == 0) {
        piVar5 = (int *)(param_1 + 0x1c);
        iVar3 = *piVar5;
        if (iVar3 != 0) goto LAB_715872c0;
      }
      else {
LAB_715872c0:
        *piVar5 = iVar3 + -1;
      }
      if (*(int *)(param_1 + 0xc) != -1) {
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
      }
    }
  }
  do {
    FUN_71589580(param_1);
    iVar3 = *(int *)(param_1 + 0xc);
    if (0x17 < iVar3 - 9U) break;
  } while ((1 << (iVar3 - 9U & 0xff) & 0x800013U) != 0);
  if (iVar3 == 0x2f) {
    cVar2 = *(char *)(param_1 + 8);
    while (cVar2 != '\0') {
      iVar3 = FUN_715878fc(param_1);
      if (iVar3 == 0) {
        return 0xe;
      }
      do {
        FUN_71589580(param_1);
        iVar3 = *(int *)(param_1 + 0xc);
        if (0x17 < iVar3 - 9U) break;
      } while ((1 << (iVar3 - 9U & 0xff) & 0x800013U) != 0);
      if (iVar3 != 0x2f) break;
      cVar2 = *(char *)(param_1 + 8);
    }
  }
  switch(iVar3) {
  case 0x22:
    pbVar11 = (byte *)(param_1 + 0x2c);
    if ((*pbVar11 & 1) == 0) {
      *(undefined2 *)(param_1 + 0x2c) = 0;
    }
    else {
      **(undefined1 **)(param_1 + 0x34) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
    puVar12 = *(undefined1 **)(param_1 + 0x20);
    uVar1 = (undefined1)*(undefined4 *)(param_1 + 0xc);
    if (puVar12 < *(undefined1 **)(param_1 + 0x28)) {
      puVar13 = puVar12 + 1;
      *puVar12 = uVar1;
    }
    else {
      uVar8 = (int)*(undefined1 **)(param_1 + 0x28) - (int)puVar12;
      iVar3 = 1;
      if (1 < uVar8 * 2) {
        iVar3 = uVar8 * 2;
      }
      if (0x3ffffffe < uVar8) {
        iVar3 = 0x7fffffff;
      }
      puVar7 = (undefined1 *)thunk_MwhHq(iVar3);
      puVar13 = puVar7 + 1;
      *puVar7 = uVar1;
      *(undefined1 **)(param_1 + 0x20) = puVar7;
      *(undefined1 **)(param_1 + 0x24) = puVar13;
      *(undefined1 **)(param_1 + 0x28) = puVar7 + iVar3;
      if (puVar12 != (undefined1 *)0x0) {
        thunk_qNQrlu(puVar12);
      }
    }
    *(undefined1 **)(param_1 + 0x24) = puVar13;
    do {
      uVar6 = FUN_71589580(param_1);
      pcVar4 = s_invalid_string__control_characte_7006ae18;
      switch(uVar6) {
      case 0:
        pcVar4 = s_invalid_string__control_characte_70071869;
        goto switchD_71587bb4_caseD_1;
      case 2:
        pcVar4 = s_invalid_string__control_characte_700645a5;
        goto switchD_71587bb4_caseD_1;
      case 3:
        pcVar4 = s_invalid_string__control_characte_7007005c;
        goto switchD_71587bb4_caseD_1;
      case 4:
        pcVar4 = s_invalid_string__control_characte_70062150;
        goto switchD_71587bb4_caseD_1;
      case 5:
        pcVar4 = s_invalid_string__control_characte_7006a352;
        goto switchD_71587bb4_caseD_1;
      case 6:
        pcVar4 = s_invalid_string__control_characte_7006bf51;
        goto switchD_71587bb4_caseD_1;
      case 7:
        pcVar4 = s_invalid_string__control_characte_70068637;
        goto switchD_71587bb4_caseD_1;
      case 8:
        pcVar4 = s_invalid_string__control_characte_70063d96;
        goto switchD_71587bb4_caseD_1;
      case 9:
        pcVar4 = s_invalid_string__control_characte_70068f93;
        goto switchD_71587bb4_caseD_1;
      case 10:
        pcVar4 = s_invalid_string__control_characte_700632e1;
        goto switchD_71587bb4_caseD_1;
      case 0xb:
        pcVar4 = s_invalid_string__control_characte_7006755a;
        goto switchD_71587bb4_caseD_1;
      case 0xc:
        pcVar4 = s_invalid_string__control_characte_700700a5;
        goto switchD_71587bb4_caseD_1;
      case 0xd:
        pcVar4 = s_invalid_string__control_characte_70071072;
        goto switchD_71587bb4_caseD_1;
      case 0xe:
        pcVar4 = s_invalid_string__control_characte_7006332f;
        goto switchD_71587bb4_caseD_1;
      case 0xf:
        pcVar4 = s_invalid_string__control_characte_70067eda;
        goto switchD_71587bb4_caseD_1;
      case 0x10:
        pcVar4 = s_invalid_string__control_characte_700675a2;
        goto switchD_71587bb4_caseD_1;
      case 0x11:
        pcVar4 = s_invalid_string__control_characte_70061226;
        goto switchD_71587bb4_caseD_1;
      case 0x12:
        pcVar4 = s_invalid_string__control_characte_70064c3b;
        goto switchD_71587bb4_caseD_1;
      case 0x13:
        pcVar4 = s_invalid_string__control_characte_700645ee;
        goto switchD_71587bb4_caseD_1;
      case 0x14:
        pcVar4 = s_invalid_string__control_characte_70064637;
        goto switchD_71587bb4_caseD_1;
      case 0x15:
        pcVar4 = s_invalid_string__control_characte_700675eb;
        goto switchD_71587bb4_caseD_1;
      case 0x16:
        pcVar4 = s_invalid_string__control_characte_7006281d;
        goto switchD_71587bb4_caseD_1;
      case 0x17:
        pcVar4 = s_invalid_string__control_characte_7006c7ca;
        goto switchD_71587bb4_caseD_1;
      case 0x18:
        pcVar4 = s_invalid_string__control_characte_70068fe1;
        goto switchD_71587bb4_caseD_1;
      case 0x19:
        pcVar4 = s_invalid_string__control_characte_70067f22;
        goto switchD_71587bb4_caseD_1;
      case 0x1a:
        pcVar4 = s_invalid_string__control_characte_7006902a;
        goto switchD_71587bb4_caseD_1;
      case 0x1b:
        pcVar4 = s_invalid_string__control_characte_700708a8;
        goto switchD_71587bb4_caseD_1;
      case 0x1c:
        pcVar4 = s_invalid_string__control_characte_70065323;
        goto switchD_71587bb4_caseD_1;
      case 0x1d:
        pcVar4 = s_invalid_string__control_characte_7006f652;
        goto switchD_71587bb4_caseD_1;
      case 0x1e:
        pcVar4 = s_invalid_string__control_characte_70067634;
        goto switchD_71587bb4_caseD_1;
      case 0x1f:
        pcVar4 = s_invalid_string__control_characte_700708f1;
        goto switchD_71587bb4_caseD_1;
      case 0x20:
      case 0x21:
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x29:
      case 0x2a:
      case 0x2b:
      case 0x2c:
      case 0x2d:
      case 0x2e:
      case 0x2f:
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3a:
      case 0x3b:
      case 0x3c:
      case 0x3d:
      case 0x3e:
      case 0x3f:
      case 0x40:
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x44:
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x48:
      case 0x49:
      case 0x4a:
      case 0x4b:
      case 0x4c:
      case 0x4d:
      case 0x4e:
      case 0x4f:
      case 0x50:
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5a:
      case 0x5b:
      case 0x5d:
      case 0x5e:
      case 0x5f:
      case 0x60:
      case 0x61:
      case 0x62:
      case 99:
      case 100:
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6a:
      case 0x6b:
      case 0x6c:
      case 0x6d:
      case 0x6e:
      case 0x6f:
      case 0x70:
      case 0x71:
      case 0x72:
      case 0x73:
      case 0x74:
      case 0x75:
      case 0x76:
      case 0x77:
      case 0x78:
      case 0x79:
      case 0x7a:
      case 0x7b:
      case 0x7c:
      case 0x7d:
      case 0x7e:
      case 0x7f:
        uVar8 = *(uint *)(param_1 + 0xc);
        break;
      case 0x22:
        return 4;
      case 0x5c:
        uVar6 = FUN_71589580(param_1);
        uVar8 = 0x22;
        pcVar4 = s_invalid_string__forbidden_charac_70066cf2;
        switch(uVar6) {
        case 0x22:
          break;
        default:
          goto switchD_71587bb4_caseD_1;
        case 0x2f:
          uVar8 = 0x2f;
          break;
        case 0x5c:
          uVar8 = 0x5c;
          break;
        case 0x62:
          uVar8 = 8;
          break;
        case 0x66:
          uVar8 = 0xc;
          break;
        case 0x6e:
          uVar8 = 10;
          break;
        case 0x72:
          uVar8 = 0xd;
          break;
        case 0x74:
          uVar8 = 9;
          break;
        case 0x75:
          uVar8 = FUN_71589748(param_1);
          pcVar4 = s_invalid_string____u__must_be_fol_70065c98;
          if (uVar8 == 0xffffffff) goto switchD_71587bb4_caseD_1;
          if ((uVar8 & 0xfffffc00) == 0xd800) {
            iVar3 = FUN_71589580(param_1);
            pcVar4 = s_invalid_string__surrogate_U_D800_7006cfd4;
            if ((((iVar3 != 0x5c) || (iVar3 = FUN_71589580(param_1), iVar3 != 0x75)) ||
                (uVar10 = FUN_71589748(param_1),
                pcVar4 = s_invalid_string____u__must_be_fol_70065c98, uVar10 == 0xffffffff)) ||
               (pcVar4 = s_invalid_string__surrogate_U_D800_7006cfd4,
               (uVar10 & 0xfffffc00) != 0xdc00)) goto switchD_71587bb4_caseD_1;
            uVar8 = uVar10 + uVar8 * 0x400 + 0xfca02400;
LAB_7158831c:
            thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                      (pbVar11,uVar8 >> 0x12 & 0xff | 0xf0);
            thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                      (pbVar11,uVar8 >> 0xc & 0xbf | 0x80);
LAB_71588348:
            uVar10 = uVar8 >> 6 & 0xbf | 0x80;
          }
          else {
            if ((uVar8 & 0xfffffc00) == 0xdc00) {
              pcVar4 = s_invalid_string__surrogate_U_DC00_70071825;
              goto switchD_71587bb4_caseD_1;
            }
            if ((int)uVar8 < 0x80) break;
            if (uVar8 >> 0xb != 0) {
              if (uVar8 >> 0x10 != 0) goto LAB_7158831c;
              thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                        (pbVar11,uVar8 >> 0xc & 0xff | 0xe0);
              goto LAB_71588348;
            }
            uVar10 = uVar8 >> 6 & 0xff | 0xc0;
          }
          thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                    (pbVar11,uVar10);
          uVar8 = uVar8 & 0x3f | 0xffffff80;
        }
        break;
      default:
        pcVar4 = s_invalid_string__ill_formed_UTF_8_700721ed;
        goto switchD_71587bb4_caseD_1;
      case 0xc2:
      case 0xc3:
      case 0xc4:
      case 0xc5:
      case 0xc6:
      case 199:
      case 200:
      case 0xc9:
      case 0xca:
      case 0xcb:
      case 0xcc:
      case 0xcd:
      case 0xce:
      case 0xcf:
      case 0xd0:
      case 0xd1:
      case 0xd2:
      case 0xd3:
      case 0xd4:
      case 0xd5:
      case 0xd6:
      case 0xd7:
      case 0xd8:
      case 0xd9:
      case 0xda:
      case 0xdb:
      case 0xdc:
      case 0xdd:
      case 0xde:
      case 0xdf:
        thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                  (pbVar11,*(undefined1 *)(param_1 + 0xc));
        FUN_71589580(param_1);
        uVar8 = *(uint *)(param_1 + 0xc);
        if (uVar8 - 0xc0 < 0xffffffc0) {
          pcVar4 = s_invalid_string__ill_formed_UTF_8_700721ed;
          goto switchD_71587bb4_caseD_1;
        }
        break;
      case 0xe0:
        thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                  (pbVar11,*(undefined1 *)(param_1 + 0xc));
        FUN_71589580(param_1);
        uVar8 = *(uint *)(param_1 + 0xc);
        uVar10 = uVar8 - 0xc0;
        goto LAB_7158825c;
      case 0xe1:
      case 0xe2:
      case 0xe3:
      case 0xe4:
      case 0xe5:
      case 0xe6:
      case 0xe7:
      case 0xe8:
      case 0xe9:
      case 0xea:
      case 0xeb:
      case 0xec:
      case 0xee:
      case 0xef:
        thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                  (pbVar11,*(undefined1 *)(param_1 + 0xc));
        FUN_71589580(param_1);
        uVar8 = *(uint *)(param_1 + 0xc);
        pcVar4 = s_invalid_string__ill_formed_UTF_8_700721ed;
        if (0xffffffbf < uVar8 - 0xc0) goto LAB_7158826c;
        goto switchD_71587bb4_caseD_1;
      case 0xed:
        thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                  (pbVar11,*(undefined1 *)(param_1 + 0xc));
        FUN_71589580(param_1);
        uVar8 = *(uint *)(param_1 + 0xc);
        uVar10 = uVar8 - 0xa0;
LAB_7158825c:
        pcVar4 = s_invalid_string__ill_formed_UTF_8_700721ed;
        if (0xffffffdf < uVar10) goto LAB_7158826c;
        goto switchD_71587bb4_caseD_1;
      case 0xf0:
        thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                  (pbVar11,*(undefined1 *)(param_1 + 0xc));
        FUN_71589580(param_1);
        uVar8 = *(uint *)(param_1 + 0xc);
        pcVar4 = s_invalid_string__ill_formed_UTF_8_700721ed;
        if (0xffffffcf < uVar8 - 0xc0) goto LAB_71588218;
        goto switchD_71587bb4_caseD_1;
      case 0xf1:
      case 0xf2:
      case 0xf3:
        thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                  (pbVar11,*(undefined1 *)(param_1 + 0xc));
        FUN_71589580(param_1);
        uVar8 = *(uint *)(param_1 + 0xc);
        pcVar4 = s_invalid_string__ill_formed_UTF_8_700721ed;
        if (0xffffffbf < uVar8 - 0xc0) goto LAB_71588218;
        goto switchD_71587bb4_caseD_1;
      case 0xf4:
        thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                  (pbVar11,*(undefined1 *)(param_1 + 0xc));
        FUN_71589580(param_1);
        uVar8 = *(uint *)(param_1 + 0xc);
        pcVar4 = s_invalid_string__ill_formed_UTF_8_700721ed;
        if (uVar8 - 0x90 < 0xfffffff0) goto switchD_71587bb4_caseD_1;
LAB_71588218:
        thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                  (pbVar11,uVar8 & 0xff);
        FUN_71589580(param_1);
        uVar8 = *(uint *)(param_1 + 0xc);
        pcVar4 = s_invalid_string__ill_formed_UTF_8_700721ed;
        if (uVar8 - 0xc0 < 0xffffffc0) goto switchD_71587bb4_caseD_1;
LAB_7158826c:
        thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                  (pbVar11,uVar8 & 0xff);
        FUN_71589580(param_1);
        uVar8 = *(uint *)(param_1 + 0xc);
        pcVar4 = s_invalid_string__ill_formed_UTF_8_700721ed;
        if (uVar8 - 0xc0 < 0xffffffc0) goto switchD_71587bb4_caseD_1;
        break;
      case 0xffffffff:
        pcVar4 = s_invalid_string__missing_closing_q_70067eb4;
      case 1:
switchD_71587bb4_caseD_1:
        *(char **)(param_1 + 0x38) = pcVar4;
        return 0xe;
      }
      thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                (pbVar11,uVar8 & 0xff);
    } while( true );
  case 0x2c:
    return 0xd;
  case 0x2d:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    pbVar11 = (byte *)(param_1 + 0x2c);
    if ((*pbVar11 & 1) == 0) {
      *(undefined2 *)(param_1 + 0x2c) = 0;
    }
    else {
      **(undefined1 **)(param_1 + 0x34) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
    puVar12 = *(undefined1 **)(param_1 + 0x20);
    uVar1 = (undefined1)*(undefined4 *)(param_1 + 0xc);
    if (puVar12 < *(undefined1 **)(param_1 + 0x28)) {
      puVar13 = puVar12 + 1;
      *puVar12 = uVar1;
    }
    else {
      uVar8 = (int)*(undefined1 **)(param_1 + 0x28) - (int)puVar12;
      iVar3 = 1;
      if (1 < uVar8 * 2) {
        iVar3 = uVar8 * 2;
      }
      if (0x3ffffffe < uVar8) {
        iVar3 = 0x7fffffff;
      }
      puVar7 = (undefined1 *)thunk_MwhHq(iVar3);
      puVar13 = puVar7 + 1;
      *puVar7 = uVar1;
      *(undefined1 **)(param_1 + 0x20) = puVar7;
      *(undefined1 **)(param_1 + 0x24) = puVar13;
      *(undefined1 **)(param_1 + 0x28) = puVar7 + iVar3;
      if (puVar12 != (undefined1 *)0x0) {
        thunk_qNQrlu(puVar12);
      }
    }
    uVar8 = *(uint *)(param_1 + 0xc);
    *(undefined1 **)(param_1 + 0x24) = puVar13;
    iVar3 = 5;
    if (uVar8 - 0x31 < 9) {
LAB_71588f90:
      while( true ) {
        thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                  (pbVar11,uVar8 & 0xff);
        iVar9 = FUN_71589580(param_1);
        if (9 < iVar9 - 0x30U) break;
        uVar8 = *(uint *)(param_1 + 0xc);
      }
      if (iVar9 == 0x2e) goto LAB_71588fec;
LAB_71588fb8:
      if ((iVar9 == 0x45) || (iVar9 == 0x65)) {
LAB_71589050:
        thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                  (pbVar11,*(undefined1 *)(param_1 + 0xc));
        iVar3 = FUN_71589580(param_1);
        if (9 < iVar3 - 0x30U) {
          if (iVar3 != 0x2d && iVar3 != 0x2b) {
            pcVar4 = s_invalid_number__expected_________70065394;
LAB_71589238:
            *(char **)(param_1 + 0x38) = pcVar4;
            return 0xe;
          }
          thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                    (pbVar11,*(undefined1 *)(param_1 + 0xc));
          iVar3 = FUN_71589580(param_1);
          if (9 < iVar3 - 0x30U) {
            pcVar4 = s_invalid_number__expected_digit_a_700700f3;
            goto LAB_71589238;
          }
        }
        thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                  (pbVar11,*(undefined1 *)(param_1 + 0xc));
        iVar9 = FUN_71589580(param_1);
        iVar3 = 7;
        while (iVar9 - 0x30U < 10) {
          thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                    (pbVar11,*(undefined1 *)(param_1 + 0xc));
          iVar9 = FUN_71589580(param_1);
        }
      }
    }
    else {
      if (uVar8 == 0x30) {
        uVar8 = 0x30;
      }
      else {
        if (uVar8 == 0x2d) {
          thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                    (pbVar11,0x2d);
        }
        iVar3 = FUN_71589580(param_1);
        if (iVar3 - 0x31U < 9) {
          uVar8 = *(uint *)(param_1 + 0xc);
          iVar3 = 6;
          goto LAB_71588f90;
        }
        if (iVar3 != 0x30) {
          pcVar4 = s_invalid_number__expected_digit_a_700718b2;
          goto LAB_71589238;
        }
        uVar8 = *(uint *)(param_1 + 0xc);
        iVar3 = 6;
      }
      thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                (pbVar11,uVar8 & 0xff);
      iVar9 = FUN_71589580(param_1);
      if (iVar9 != 0x2e) goto LAB_71588fb8;
LAB_71588fec:
      thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                (pbVar11,*(undefined1 *)(param_1 + 0x58));
      uVar8 = *(uint *)(param_1 + 0x30);
      if ((*(byte *)(param_1 + 0x2c) & 1) == 0) {
        uVar8 = (uint)(*(byte *)(param_1 + 0x2c) >> 1);
      }
      *(uint *)(param_1 + 0x5c) = uVar8 - 1;
      iVar3 = FUN_71589580(param_1);
      if (9 < iVar3 - 0x30U) {
        pcVar4 = s_invalid_number__expected_digit_a_7006536b;
        goto LAB_71589238;
      }
      do {
        thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                  (pbVar11,*(undefined1 *)(param_1 + 0xc));
        iVar3 = FUN_71589580(param_1);
      } while (iVar3 - 0x30U < 10);
      if (iVar3 == 0x65 || iVar3 == 0x45) goto LAB_71589050;
      iVar3 = 7;
    }
    piVar5 = (int *)(param_1 + 0x18);
    iVar9 = *piVar5;
    *(undefined1 *)(param_1 + 0x10) = 1;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
    if (iVar9 == 0) {
      piVar5 = (int *)(param_1 + 0x1c);
      iVar9 = *piVar5;
      if (iVar9 == 0) goto LAB_715890f0;
    }
    *piVar5 = iVar9 + -1;
LAB_715890f0:
    auStack_24[0] = 0;
    if (*(int *)(param_1 + 0xc) != -1) {
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
    }
    piVar5 = (int *)imp___errno();
    *piVar5 = 0;
    if (iVar3 == 6) {
      iVar3 = *(int *)(param_1 + 0x34);
      if ((*(byte *)(param_1 + 0x2c) & 1) == 0) {
        iVar3 = param_1 + 0x2d;
      }
      uVar14 = imp_strtoll(iVar3,auStack_24,10);
      if (*piVar5 != 0x22) {
        *(undefined8 *)(param_1 + 0x40) = uVar14;
        return 6;
      }
    }
    else if (iVar3 == 5) {
      iVar3 = *(int *)(param_1 + 0x34);
      if ((*(byte *)(param_1 + 0x2c) & 1) == 0) {
        iVar3 = param_1 + 0x2d;
      }
      uVar14 = imp_strtoull(iVar3,auStack_24,10);
      if (*piVar5 != 0x22) {
        *(undefined8 *)(param_1 + 0x48) = uVar14;
        return 5;
      }
    }
    iVar3 = *(int *)(param_1 + 0x34);
    if ((*(byte *)(param_1 + 0x2c) & 1) == 0) {
      iVar3 = param_1 + 0x2d;
    }
    uVar14 = imp_strtod(iVar3,auStack_24);
    *(undefined8 *)(param_1 + 0x50) = uVar14;
    return 7;
  case 0x3a:
    return 0xc;
  case 0x5b:
    return 8;
  case 0x5d:
    return 10;
  case 0x66:
    cVar2 = FUN_71589580(param_1);
    if (((cVar2 == 'a') && (cVar2 = FUN_71589580(param_1), cVar2 == 'l')) &&
       (cVar2 = FUN_71589580(param_1), cVar2 == 's')) {
      cVar2 = FUN_71589580(param_1);
      uVar6 = 2;
LAB_71587690:
      if (cVar2 == 'e') {
        return uVar6;
      }
    }
    break;
  case 0x6e:
    cVar2 = FUN_71589580(param_1);
    if (((cVar2 == 'u') && (cVar2 = FUN_71589580(param_1), cVar2 == 'l')) &&
       (cVar2 = FUN_71589580(param_1), cVar2 == 'l')) {
      return 3;
    }
    break;
  case 0x74:
    cVar2 = FUN_71589580(param_1);
    if ((cVar2 == 'r') && (cVar2 = FUN_71589580(param_1), cVar2 == 'u')) {
      cVar2 = FUN_71589580(param_1);
      uVar6 = 1;
      goto LAB_71587690;
    }
    break;
  case 0x7b:
    return 9;
  case 0x7d:
    return 0xb;
  case -1:
  case 0:
    return 0xf;
  }
  pcVar4 = s_invalid_literal_70068627;
LAB_715876a0:
  *(char **)(param_1 + 0x38) = pcVar4;
  return 0xe;
}


// =========================================================================
// Function: FUN_715878fc
// Entry: 0x715878fc | Size: 252 bytes
// =========================================================================

undefined4 FUN_715878fc(int param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  iVar1 = FUN_71589580();
  if (iVar1 == 0x2a) {
    do {
      while (iVar1 = FUN_71589580(param_1), iVar1 == 0x2a) {
        iVar1 = FUN_71589580(param_1);
        if (iVar1 == 0x2f) {
          return 1;
        }
        iVar1 = *(int *)(param_1 + 0x18);
        *(undefined1 *)(param_1 + 0x10) = 1;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
        piVar2 = (int *)(param_1 + 0x18);
        if ((iVar1 != 0) ||
           (iVar1 = *(int *)(param_1 + 0x1c), piVar2 = (int *)(param_1 + 0x1c), iVar1 != 0)) {
          *piVar2 = iVar1 + -1;
        }
        if (*(int *)(param_1 + 0xc) != -1) {
          *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
        }
      }
    } while (1 < iVar1 + 1U);
    pcVar3 = s_invalid_comment__missing_closing_7006dcee;
  }
  else {
    if (iVar1 == 0x2f) {
      do {
        do {
          iVar1 = FUN_71589580(param_1);
        } while (0xe < iVar1 + 1U);
      } while ((0x4803U >> (iVar1 + 1U & 0xff) & 1) == 0);
      return 1;
    }
    pcVar3 = s_invalid_comment__expecting_____o_70065c68;
  }
  *(char **)(param_1 + 0x38) = pcVar3;
  return 0;
}


// =========================================================================
// Function: FUN_71589580
// Entry: 0x71589580 | Size: 456 bytes
// =========================================================================

int FUN_71589580(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint extraout_r12;
  uint extraout_r12_00;
  undefined1 uVar10;
  undefined1 uVar11;
  bool bVar12;
  undefined4 in_cr5;
  undefined8 uVar13;
  
  param_1[5] = param_1[5] + 1;
  param_1[6] = param_1[6] + 1;
  if (*(char *)(param_1 + 4) == '\0') {
    pbVar3 = (byte *)*param_1;
    if (pbVar3 == (byte *)param_1[1]) {
      uVar9 = 0xffffffff;
    }
    else {
      uVar9 = (uint)*pbVar3;
      *param_1 = pbVar3 + 1;
    }
    param_1[3] = uVar9;
  }
  else {
    uVar9 = param_1[3];
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (uVar9 != 0xffffffff) {
    puVar5 = (undefined1 *)param_1[9];
    if (puVar5 < (undefined1 *)param_1[10]) {
      puVar6 = puVar5 + 1;
      *puVar5 = (char)uVar9;
    }
    else {
      iVar4 = param_1[8];
      uVar8 = (int)puVar5 - iVar4;
      uVar7 = uVar8 + 1;
      uVar11 = 0xfffffffe < uVar7;
      bVar12 = SCARRY4(uVar7,1);
      uVar10 = uVar8 == 0xfffffffe;
      if ((bool)uVar10 || (int)uVar7 < -1) {
        uVar13 = FUN_71533508();
        coprocessor_store(0xf,in_cr5,0x715895b4);
        if (!(bool)uVar11 || (bool)uVar10) {
          uVar8 = uVar8 & 0xffff | 0x74560000;
        }
        uVar9 = extraout_r12;
        if (bVar12) {
          uVar13 = FUN_70af73dc();
          uVar9 = extraout_r12_00;
        }
        uVar7 = (uint)uVar13;
        if ((bool)uVar11 && !(bool)uVar10) {
          uVar7 = uVar7 & (int)uVar7 >> 2;
        }
        if ((bool)uVar10) {
          uVar7 = (int)param_1 * (uVar7 & (uint)param_1 & uVar9 << (uVar7 & (uint)param_1 & 0xff));
          uVar7 = uVar7 & uVar9 << (uVar7 & 0xff) & ((uint)param_1 >> 1 | (int)param_1 << 0x1f);
          uVar7 = uVar7 & uVar9 << (uVar7 & 0xff) & uVar8 << 2;
          uVar7 = uVar7 & uVar9 << (uVar7 & 0xff) &
                  uVar9 >> ((uint)((ulonglong)uVar13 >> 0x20) & 0xff);
        }
        FUN_71589580();
        iVar4 = *(int *)(uVar7 + 0xc);
        uVar9 = iVar4 - 0x30;
        if (9 < uVar9) {
          if (iVar4 - 0x41U < 6) {
            uVar9 = iVar4 - 0x37;
          }
          else {
            if (5 < iVar4 - 0x61U) {
              return -1;
            }
            uVar9 = iVar4 - 0x57;
          }
        }
        FUN_71589580(uVar7);
        iVar4 = *(int *)(uVar7 + 0xc);
        uVar8 = iVar4 - 0x30;
        if (9 < uVar8) {
          if (iVar4 - 0x41U < 6) {
            uVar8 = iVar4 - 0x37;
          }
          else {
            if (5 < iVar4 - 0x61U) {
              return -1;
            }
            uVar8 = iVar4 - 0x57;
          }
        }
        FUN_71589580(uVar7);
        iVar4 = *(int *)(uVar7 + 0xc);
        uVar1 = iVar4 - 0x30;
        if (9 < uVar1) {
          if (iVar4 - 0x41U < 6) {
            uVar1 = iVar4 - 0x37;
          }
          else {
            if (5 < iVar4 - 0x61U) {
              return -1;
            }
            uVar1 = iVar4 - 0x57;
          }
        }
        FUN_71589580(uVar7);
        iVar4 = *(int *)(uVar7 + 0xc);
        uVar7 = iVar4 - 0x30;
        if (9 < uVar7) {
          if (iVar4 - 0x41U < 6) {
            uVar7 = iVar4 - 0x37;
          }
          else {
            if (5 < iVar4 - 0x61U) {
              return -1;
            }
            uVar7 = iVar4 - 0x57;
          }
        }
        return uVar7 + uVar9 * 0x1000 + uVar8 * 0x100 + uVar1 * 0x10;
      }
      uVar1 = (int)param_1[10] - iVar4;
      if (uVar7 < uVar1 * 2) {
        uVar7 = uVar1 * 2;
      }
      if (0x3ffffffe < uVar1) {
        uVar7 = 0x7fffffff;
      }
      if (uVar7 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = thunk_MwhHq(uVar7);
      }
      *(undefined1 *)(iVar2 + uVar8) = (char)uVar9;
      imp___aeabi_memcpy(iVar2,iVar4,uVar8);
      puVar6 = (undefined1 *)(iVar2 + uVar8) + 1;
      param_1[8] = iVar2;
      param_1[9] = puVar6;
      param_1[10] = iVar2 + uVar7;
      if (iVar4 != 0) {
        thunk_qNQrlu(iVar4);
      }
    }
    iVar4 = param_1[3];
    param_1[9] = puVar6;
    if (iVar4 == 10) {
      param_1[6] = 0;
      param_1[7] = param_1[7] + 1;
      iVar4 = 10;
    }
    return iVar4;
  }
  return -1;
}


// =========================================================================
// Function: FUN_71589748
// Entry: 0x71589748 | Size: 284 bytes
// =========================================================================

int FUN_71589748(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  FUN_71589580();
  iVar2 = *(int *)(param_1 + 0xc);
  uVar3 = iVar2 - 0x30;
  if (9 < uVar3) {
    if (iVar2 - 0x41U < 6) {
      uVar3 = iVar2 - 0x37;
    }
    else {
      if (5 < iVar2 - 0x61U) {
        return -1;
      }
      uVar3 = iVar2 - 0x57;
    }
  }
  FUN_71589580(param_1);
  iVar2 = *(int *)(param_1 + 0xc);
  uVar4 = iVar2 - 0x30;
  if (9 < uVar4) {
    if (iVar2 - 0x41U < 6) {
      uVar4 = iVar2 - 0x37;
    }
    else {
      if (5 < iVar2 - 0x61U) {
        return -1;
      }
      uVar4 = iVar2 - 0x57;
    }
  }
  FUN_71589580(param_1);
  iVar2 = *(int *)(param_1 + 0xc);
  uVar5 = iVar2 - 0x30;
  if (9 < uVar5) {
    if (iVar2 - 0x41U < 6) {
      uVar5 = iVar2 - 0x37;
    }
    else {
      if (5 < iVar2 - 0x61U) {
        return -1;
      }
      uVar5 = iVar2 - 0x57;
    }
  }
  FUN_71589580(param_1);
  iVar2 = *(int *)(param_1 + 0xc);
  uVar1 = iVar2 - 0x30;
  if (9 < uVar1) {
    if (iVar2 - 0x41U < 6) {
      uVar1 = iVar2 - 0x37;
    }
    else {
      if (5 < iVar2 - 0x61U) {
        return -1;
      }
      uVar1 = iVar2 - 0x57;
    }
  }
  return uVar1 + uVar3 * 0x1000 + uVar4 * 0x100 + uVar5 * 0x10;
}


// =========================================================================
// Function: FUN_715898ec
// Entry: 0x715898ec | Size: 252 bytes
// =========================================================================

undefined4 *
FUN_715898ec(undefined4 *param_1,undefined4 param_2,int param_3,undefined1 param_4,
            undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  *param_1 = param_2;
  imp___aeabi_memclr4(param_1 + 1,0x29);
  iVar1 = *(int *)(param_3 + 0x10);
  if (iVar1 == 0) {
    param_1[0x10] = 0;
  }
  else if (iVar1 == param_3) {
    param_1[0x10] = param_1 + 0xc;
    (**(code **)(**(int **)(param_3 + 0x10) + 0xc))(*(int **)(param_3 + 0x10),param_1 + 0xc);
  }
  else {
    param_1[0x10] = iVar1;
    *(undefined4 *)(param_3 + 0x10) = 0;
  }
  uVar3 = param_1[5];
  iVar1 = param_1[6];
  param_1[0x16] = 0;
  param_1[0x18] = param_5;
  *(undefined1 *)(param_1 + 0x14) = 9;
  *(undefined1 *)(param_1 + 0x12) = param_4;
  if (uVar3 == iVar1 * 0x20) {
    if (uVar3 == 0xfffffffe || (int)(uVar3 + 1) < -1) {
                    /* WARNING: Subroutine does not return */
      FUN_71537b8c(param_1 + 4);
    }
    uVar2 = 0x7fffffff;
    if ((uVar3 < 0x3fffffff) && (uVar2 = (uVar3 & 0x3fffffe0) + 0x20, uVar2 < (uint)(iVar1 << 6))) {
      uVar2 = iVar1 << 6;
    }
    FUN_71537a10(param_1 + 4,uVar2);
    uVar3 = param_1[5];
  }
  param_1[5] = uVar3 + 1;
  *(uint *)(param_1[4] + (uVar3 >> 5) * 4) =
       *(uint *)(param_1[4] + (uVar3 >> 5) * 4) | 1 << (uVar3 & 0x1f);
  return param_1;
}


// =========================================================================
// Function: FUN_71589a54
// Entry: 0x71589a54 | Size: 3692 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71589a54(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  undefined *puVar12;
  bool bVar13;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  byte abStack_74 [8];
  uint uStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  uint auStack_58 [6];
  undefined *puStack_40;
  uint uStack_3c;
  undefined1 auStack_38 [16];
  int iStack_28;
  
  iVar8 = param_1 + 0x20;
  iStack_28 = _ext___stack_chk_guard;
  auStack_58[5] = 0;
  auStack_58[4] = 0;
  auStack_58[3] = 0;
  iVar1 = param_1 + 0x4d;
  iVar2 = param_1 + 0x4c;
LAB_71589abc:
  switch(*(undefined4 *)(param_1 + 0x18)) {
  case 1:
    auStack_58[0] = CONCAT31(auStack_58[0]._1_3_,1);
    goto LAB_71589b4c;
  case 2:
    auStack_58[0] = (uint)auStack_58[0]._1_3_ << 8;
LAB_71589b4c:
    FUN_7158f4f8(auStack_58 + 6,param_2,auStack_58,0);
    break;
  case 3:
    auStack_58[0] = 0;
    FUN_7158f7f8(auStack_58 + 6,param_2,auStack_58,0);
    break;
  case 4:
    iVar3 = *(int *)(param_1 + 0x78);
    bVar13 = iVar3 != 0x2e;
    if (bVar13) {
      iVar3 = *(int *)(param_1 + 0x7c);
    }
    if (bVar13 && iVar3 != -1) {
      iVar4 = *(int *)(param_1 + 0x54);
      if ((*(byte *)(param_1 + 0x4c) & 1) == 0) {
        iVar4 = iVar1;
      }
      *(undefined1 *)(iVar4 + iVar3) = 0x2e;
    }
    FUN_7158fde0(auStack_58 + 6,param_2,iVar2,0);
    break;
  case 5:
    puStack_40 = *(undefined **)(param_1 + 0x68);
    uStack_3c = *(uint *)(param_1 + 0x6c);
    FUN_71590154(auStack_58,param_2,auStack_58 + 6,0);
    break;
  case 6:
    puStack_40 = *(undefined **)(param_1 + 0x60);
    uStack_3c = *(uint *)(param_1 + 100);
    FUN_7158fae4(auStack_58,param_2,auStack_58 + 6,0);
    break;
  case 7:
    uVar6 = *(uint *)(param_1 + 0x74);
    puVar12 = *(undefined **)(param_1 + 0x70);
    uVar11 = uVar6 & 0x7fffffff;
    iVar3 = FUN_71ba2c1c(puVar12,uVar11,0,0x7ff00000);
    iVar4 = FUN_71ba0f44(puVar12,uVar11,0,0x7ff00000);
    if (iVar4 != 0 || iVar3 != 0) {
      FUN_7158b818(auStack_58,iVar8);
      FUN_7158b818(abStack_74,iVar8);
      uStack_80 = CONCAT31(uStack_80._1_3_,0x27);
      FUN_71538d24(&uStack_68,s_number_overflow_parsing___700653da,abStack_74,&uStack_80);
      FUN_71538a00(auStack_58 + 6,0x196,&uStack_68,0);
      *(undefined1 *)(param_2 + 0x2c) = 1;
      if (*(char *)(param_2 + 0x48) != '\0') {
                    /* WARNING: Subroutine does not return */
        imp_abort();
      }
      puStack_40 = &DAT_70b0e9d8;
      thunk_jJGKcnfLgdrxxLeuIMkbyODuAc(auStack_38);
      thunk_CnY_uZeaDyxdbKuhNYOsuNTHkGOv_Ep(auStack_58 + 6);
      if ((uStack_68 & 1) != 0) {
        thunk_qNQrlu(uStack_60);
      }
LAB_7158a640:
      if ((abStack_74[0] & 1) != 0) {
LAB_7158a358:
        thunk_qNQrlu(uStack_6c);
      }
LAB_7158a35c:
      if ((auStack_58[0] & 1) != 0) {
        thunk_qNQrlu(auStack_58[2]);
      }
      goto LAB_7158a568;
    }
    iVar3 = *(int *)(param_1 + 0x78);
    bVar13 = iVar3 != 0x2e;
    if (bVar13) {
      iVar3 = *(int *)(param_1 + 0x7c);
    }
    if (bVar13 && iVar3 != -1) {
      iVar4 = *(int *)(param_1 + 0x54);
      if ((*(byte *)(param_1 + 0x4c) & 1) == 0) {
        iVar4 = iVar1;
      }
      *(undefined1 *)(iVar4 + iVar3) = 0x2e;
    }
    puStack_40 = puVar12;
    uStack_3c = uVar6;
    FUN_7158f1f8(auStack_58,param_2,auStack_58 + 6,0);
    break;
  case 8:
    iVar3 = FUN_7158e9e0(param_2,0xffffffff);
    if (iVar3 == 0) goto LAB_7158a568;
    iVar3 = FUN_71587238(iVar8);
    *(int *)(param_1 + 0x18) = iVar3;
    if (iVar3 == 10) {
      iVar3 = FUN_7158ed28(param_2);
      goto LAB_71589cc8;
    }
    if (auStack_58[4] == auStack_58[5] * 0x20) {
      if (auStack_58[4] == 0xfffffffe || (int)(auStack_58[4] + 1) < -1) {
LAB_7158a8dc:
                    /* WARNING: Subroutine does not return */
        FUN_71537b8c(auStack_58 + 3);
      }
      uVar6 = 0x7fffffff;
      if ((auStack_58[4] < 0x3fffffff) &&
         (uVar6 = (auStack_58[4] & 0x3fffffe0) + 0x20, uVar6 < auStack_58[5] << 6)) {
        uVar6 = auStack_58[5] << 6;
      }
      FUN_71537a10(auStack_58 + 3,uVar6);
    }
    *(uint *)(auStack_58[3] + (auStack_58[4] >> 5) * 4) =
         *(uint *)(auStack_58[3] + (auStack_58[4] >> 5) * 4) | 1 << (auStack_58[4] & 0x1f);
    auStack_58[4] = auStack_58[4] + 1;
    goto LAB_71589abc;
  case 9:
    iVar3 = FUN_7158e0dc(param_2,0xffffffff);
    if (iVar3 == 0) goto LAB_7158a568;
    iVar3 = FUN_71587238(iVar8);
    *(int *)(param_1 + 0x18) = iVar3;
    if (iVar3 != 0xb) {
      if (iVar3 != 4) {
        FUN_7158b818(auStack_58,iVar8);
        uStack_68 = *(uint *)(param_1 + 0x34);
        uStack_64 = *(undefined4 *)(param_1 + 0x38);
        uStack_60 = *(undefined4 *)(param_1 + 0x3c);
        FUN_71315100(&uStack_80,s_object_key_700653cf);
        FUN_7158b9c8(abStack_74,param_1,4,&uStack_80);
        FUN_71535458(auStack_58 + 6,0x65,&uStack_68,abStack_74,0);
        *(undefined1 *)(param_2 + 0x2c) = 1;
        if (*(char *)(param_2 + 0x48) != '\0') {
                    /* WARNING: Subroutine does not return */
          imp_abort();
        }
        goto LAB_7158a50c;
      }
      iVar3 = *(int *)(param_1 + 0x78);
      bVar13 = iVar3 != 0x2e;
      if (bVar13) {
        iVar3 = *(int *)(param_1 + 0x7c);
      }
      if (bVar13 && iVar3 != -1) {
        iVar4 = *(int *)(param_1 + 0x54);
        if ((*(byte *)(param_1 + 0x4c) & 1) == 0) {
          iVar4 = iVar1;
        }
        *(undefined1 *)(iVar4 + iVar3) = 0x2e;
      }
      iVar3 = FUN_7158e6d0(param_2,iVar2);
      if (iVar3 == 0) goto LAB_7158a568;
      iVar3 = FUN_71587238(iVar8);
      *(int *)(param_1 + 0x18) = iVar3;
      if (iVar3 != 0xc) {
        FUN_7158b818(auStack_58,iVar8);
        uStack_68 = *(uint *)(param_1 + 0x34);
        uStack_64 = *(undefined4 *)(param_1 + 0x38);
        uStack_60 = *(undefined4 *)(param_1 + 0x3c);
        FUN_71315100(&uStack_80,s_object_separator_7006e582);
        FUN_7158b9c8(abStack_74,param_1,0xc,&uStack_80);
        FUN_71535458(auStack_58 + 6,0x65,&uStack_68,abStack_74,0);
        *(undefined1 *)(param_2 + 0x2c) = 1;
        if (*(char *)(param_2 + 0x48) != '\0') {
                    /* WARNING: Subroutine does not return */
          imp_abort();
        }
        goto LAB_7158a50c;
      }
      if (auStack_58[4] == auStack_58[5] * 0x20) {
        if (auStack_58[4] == 0xfffffffe || (int)(auStack_58[4] + 1) < -1) goto LAB_7158a8dc;
        uVar6 = 0x7fffffff;
        if ((auStack_58[4] < 0x3fffffff) &&
           (uVar6 = (auStack_58[4] & 0x3fffffe0) + 0x20, uVar6 < auStack_58[5] << 6)) {
          uVar6 = auStack_58[5] << 6;
        }
        FUN_71537a10(auStack_58 + 3,uVar6);
      }
      *(uint *)(auStack_58[3] + (auStack_58[4] >> 5) * 4) =
           *(uint *)(auStack_58[3] + (auStack_58[4] >> 5) * 4) & ~(1 << (auStack_58[4] & 0x1f));
      auStack_58[4] = auStack_58[4] + 1;
LAB_71589e98:
      uVar5 = FUN_71587238(iVar8);
      *(undefined4 *)(param_1 + 0x18) = uVar5;
      goto LAB_71589abc;
    }
    iVar3 = FUN_7158e420(param_2);
LAB_71589cc8:
    if (iVar3 == 0) goto LAB_7158a568;
    break;
  default:
    goto switchD_71589ad4_caseD_a;
  case 0xe:
    pbVar9 = *(byte **)(param_1 + 0x40);
    pbVar10 = *(byte **)(param_1 + 0x44);
    auStack_58[2] = 0;
    auStack_58[1] = 0;
    auStack_58[0] = 0;
    if (pbVar9 != pbVar10) {
      do {
        if (*pbVar9 < 0x20) {
          auStack_38[0] = 0;
          uStack_3c = 0;
          puStack_40 = (undefined *)0x0;
          FUN_71590454(auStack_58 + 6,9,9,s_<U___4X>_7006767c,*pbVar9);
          thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
                    (auStack_58,auStack_58 + 6);
        }
        else {
          thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                    (auStack_58);
        }
        pbVar9 = pbVar9 + 1;
      } while (pbVar9 != pbVar10);
    }
    uStack_68 = *(uint *)(param_1 + 0x34);
    uStack_64 = *(undefined4 *)(param_1 + 0x38);
    uStack_60 = *(undefined4 *)(param_1 + 0x3c);
    uVar6 = imp_strlen(s_value_7006bfcf);
    if (0xfffffff7 < uVar6) goto LAB_7158a8e4;
    if (uVar6 < 0xb) {
      uStack_80 = CONCAT31(uStack_80._1_3_,(char)(uVar6 << 1));
      uVar11 = (uint)&uStack_80 | 1;
      if (uVar6 != 0) goto LAB_7158a398;
    }
    else {
      uVar11 = thunk_MwhHq((uVar6 | 7) + 1);
      uStack_80 = (uVar6 | 7) + 2;
      uStack_7c = uVar6;
      uStack_78 = uVar11;
LAB_7158a398:
      imp___aeabi_memcpy(uVar11,s_value_7006bfcf,uVar6);
    }
    *(undefined1 *)(uVar11 + uVar6) = 0;
    FUN_7158b9c8(abStack_74,param_1,0,&uStack_80);
    FUN_71535458(auStack_58 + 6,0x65,&uStack_68,abStack_74,0);
    *(undefined1 *)(param_2 + 0x2c) = 1;
    if (*(char *)(param_2 + 0x48) != '\0') {
                    /* WARNING: Subroutine does not return */
      imp_abort();
    }
    goto LAB_7158a50c;
  case 0xf:
    puVar7 = (uint *)(param_1 + 0x34);
    if (*puVar7 == 1) {
      FUN_7158b818(auStack_58,iVar8);
      uStack_68 = *puVar7;
      uStack_64 = *(undefined4 *)(param_1 + 0x38);
      uStack_60 = *(undefined4 *)(param_1 + 0x3c);
      FUN_71315100(abStack_74,s_attempting_to_parse_an_empty_inp_7006dd14);
      FUN_71535458(auStack_58 + 6,0x65,&uStack_68,abStack_74,0);
      *(undefined1 *)(param_2 + 0x2c) = 1;
      if (*(char *)(param_2 + 0x48) != '\0') {
                    /* WARNING: Subroutine does not return */
        imp_abort();
      }
      puStack_40 = &DAT_70b0e9d8;
      thunk_jJGKcnfLgdrxxLeuIMkbyODuAc(auStack_38);
      thunk_CnY_uZeaDyxdbKuhNYOsuNTHkGOv_Ep(auStack_58 + 6);
      goto LAB_7158a640;
    }
    pbVar9 = *(byte **)(param_1 + 0x40);
    pbVar10 = *(byte **)(param_1 + 0x44);
    auStack_58[2] = 0;
    auStack_58[1] = 0;
    auStack_58[0] = 0;
    if (pbVar9 != pbVar10) {
      do {
        if (*pbVar9 < 0x20) {
          auStack_38[0] = 0;
          uStack_3c = 0;
          puStack_40 = (undefined *)0x0;
          FUN_71590454(auStack_58 + 6,9,9,s_<U___4X>_7006767c,*pbVar9);
          thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
                    (auStack_58,auStack_58 + 6);
        }
        else {
          thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                    (auStack_58);
        }
        pbVar9 = pbVar9 + 1;
      } while (pbVar9 != pbVar10);
    }
    uStack_68 = *puVar7;
    uStack_64 = *(undefined4 *)(param_1 + 0x38);
    uStack_60 = *(undefined4 *)(param_1 + 0x3c);
    uVar6 = imp_strlen(s_value_7006bfcf);
    if (0xfffffff7 < uVar6) goto LAB_7158a8e4;
    if (uVar6 < 0xb) {
      uVar11 = (uint)&uStack_80 | 1;
      uStack_80 = CONCAT31(uStack_80._1_3_,(char)(uVar6 << 1));
      if (uVar6 != 0) goto LAB_7158a4a8;
    }
    else {
      uVar11 = thunk_MwhHq((uVar6 | 7) + 1);
      uStack_80 = (uVar6 | 7) + 2;
      uStack_7c = uVar6;
      uStack_78 = uVar11;
LAB_7158a4a8:
      imp___aeabi_memcpy(uVar11,s_value_7006bfcf,uVar6);
    }
    *(undefined1 *)(uVar11 + uVar6) = 0;
    FUN_7158b9c8(abStack_74,param_1,0x10,&uStack_80);
    FUN_71535458(auStack_58 + 6,0x65,&uStack_68,abStack_74,0);
    *(undefined1 *)(param_2 + 0x2c) = 1;
    if (*(char *)(param_2 + 0x48) != '\0') {
                    /* WARNING: Subroutine does not return */
      imp_abort();
    }
    goto LAB_7158a50c;
  }
  if (auStack_58[4] != 0) {
    do {
      uVar11 = auStack_58[4] - 1;
      uVar6 = *(uint *)(auStack_58[3] + (uVar11 >> 5) * 4);
      iVar3 = FUN_71587238(iVar8);
      *(int *)(param_1 + 0x18) = iVar3;
      if ((uVar6 >> (uVar11 & 0x1f) & 1) == 0) {
        if (iVar3 == 0xd) {
          iVar3 = FUN_71587238(iVar8);
          *(int *)(param_1 + 0x18) = iVar3;
          if ((iVar3 == 0xb) && (*(char *)(param_1 + 0x81) != '\0')) goto LAB_71589d84;
          if (iVar3 == 4) {
            iVar3 = *(int *)(param_1 + 0x78);
            bVar13 = iVar3 != 0x2e;
            if (bVar13) {
              iVar3 = *(int *)(param_1 + 0x7c);
            }
            if (bVar13 && iVar3 != -1) {
              iVar4 = *(int *)(param_1 + 0x54);
              if ((*(byte *)(param_1 + 0x4c) & 1) == 0) {
                iVar4 = iVar1;
              }
              *(undefined1 *)(iVar4 + iVar3) = 0x2e;
            }
            iVar3 = FUN_7158e6d0(param_2,iVar2);
            if (iVar3 == 0) break;
            iVar3 = FUN_71587238(iVar8);
            *(int *)(param_1 + 0x18) = iVar3;
            if (iVar3 == 0xc) goto LAB_71589e98;
            FUN_7158b818(auStack_58,iVar8);
            uStack_68 = *(uint *)(param_1 + 0x34);
            uStack_64 = *(undefined4 *)(param_1 + 0x38);
            uStack_60 = *(undefined4 *)(param_1 + 0x3c);
            FUN_71315100(&uStack_80,s_object_separator_7006e582);
            FUN_7158b9c8(abStack_74,param_1,0xc,&uStack_80);
            FUN_71535458(auStack_58 + 6,0x65,&uStack_68,abStack_74,0);
            *(undefined1 *)(param_2 + 0x2c) = 1;
            if (*(char *)(param_2 + 0x48) != '\0') {
                    /* WARNING: Subroutine does not return */
              imp_abort();
            }
          }
          else {
            FUN_7158b818(auStack_58,iVar8);
            uStack_68 = *(uint *)(param_1 + 0x34);
            uStack_64 = *(undefined4 *)(param_1 + 0x38);
            uStack_60 = *(undefined4 *)(param_1 + 0x3c);
            FUN_71315100(&uStack_80,s_object_key_700653cf);
            FUN_7158b9c8(abStack_74,param_1,4,&uStack_80);
            FUN_71535458(auStack_58 + 6,0x65,&uStack_68,abStack_74,0);
            *(undefined1 *)(param_2 + 0x2c) = 1;
            if (*(char *)(param_2 + 0x48) != '\0') {
                    /* WARNING: Subroutine does not return */
              imp_abort();
            }
          }
        }
        else {
          if (iVar3 == 0xb) {
LAB_71589d84:
            iVar3 = FUN_7158e420(param_2);
            if (iVar3 != 0) goto LAB_71589d94;
            break;
          }
          FUN_7158b818(auStack_58,iVar8);
          uStack_68 = *(uint *)(param_1 + 0x34);
          uStack_64 = *(undefined4 *)(param_1 + 0x38);
          uStack_60 = *(undefined4 *)(param_1 + 0x3c);
          FUN_71315100(&uStack_80,s_object_7006a39b);
          FUN_7158b9c8(abStack_74,param_1,0xb,&uStack_80);
          FUN_71535458(auStack_58 + 6,0x65,&uStack_68,abStack_74,0);
          *(undefined1 *)(param_2 + 0x2c) = 1;
          if (*(char *)(param_2 + 0x48) != '\0') {
                    /* WARNING: Subroutine does not return */
            imp_abort();
          }
        }
LAB_7158a314:
        puStack_40 = &DAT_70b0e9d8;
        thunk_jJGKcnfLgdrxxLeuIMkbyODuAc(auStack_38);
        thunk_CnY_uZeaDyxdbKuhNYOsuNTHkGOv_Ep(auStack_58 + 6);
        if ((abStack_74[0] & 1) != 0) {
          thunk_qNQrlu(uStack_6c);
        }
        uStack_6c = uStack_78;
        if ((uStack_80 & 1) == 0) goto LAB_7158a35c;
        goto LAB_7158a358;
      }
      if (iVar3 == 0xd) {
        iVar3 = FUN_71587238(iVar8);
        *(int *)(param_1 + 0x18) = iVar3;
        if ((iVar3 != 10) || (*(char *)(param_1 + 0x81) == '\0')) goto LAB_71589abc;
      }
      else if (iVar3 != 10) {
        FUN_7158b818(auStack_58,iVar8);
        uStack_68 = *(uint *)(param_1 + 0x34);
        uStack_64 = *(undefined4 *)(param_1 + 0x38);
        uStack_60 = *(undefined4 *)(param_1 + 0x3c);
        FUN_71315100(&uStack_80,s_array_7006e593);
        FUN_7158b9c8(abStack_74,param_1,10,&uStack_80);
        FUN_71535458(auStack_58 + 6,0x65,&uStack_68,abStack_74,0);
        *(undefined1 *)(param_2 + 0x2c) = 1;
        if (*(char *)(param_2 + 0x48) != '\0') {
                    /* WARNING: Subroutine does not return */
          imp_abort();
        }
        goto LAB_7158a314;
      }
      iVar3 = FUN_7158ed28(param_2);
      if (iVar3 == 0) break;
LAB_71589d94:
      auStack_58[4] = auStack_58[4] - 1;
      if (auStack_58[4] == 0) break;
    } while( true );
  }
  goto LAB_7158a568;
switchD_71589ad4_caseD_a:
  pbVar9 = *(byte **)(param_1 + 0x40);
  pbVar10 = *(byte **)(param_1 + 0x44);
  auStack_58[2] = 0;
  auStack_58[1] = 0;
  auStack_58[0] = 0;
  if (pbVar9 != pbVar10) {
    do {
      if (*pbVar9 < 0x20) {
        auStack_38[0] = 0;
        uStack_3c = 0;
        puStack_40 = (undefined *)0x0;
        FUN_71590454(auStack_58 + 6,9,9,s_<U___4X>_7006767c,*pbVar9);
        thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
                  (auStack_58,auStack_58 + 6);
      }
      else {
        thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                  (auStack_58);
      }
      pbVar9 = pbVar9 + 1;
    } while (pbVar9 != pbVar10);
  }
  uStack_68 = *(uint *)(param_1 + 0x34);
  uStack_64 = *(undefined4 *)(param_1 + 0x38);
  uStack_60 = *(undefined4 *)(param_1 + 0x3c);
  uVar6 = imp_strlen(s_value_7006bfcf);
  if (0xfffffff7 < uVar6) {
LAB_7158a8e4:
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_80);
  }
  if (uVar6 < 0xb) {
    uStack_80 = CONCAT31(uStack_80._1_3_,(char)(uVar6 << 1));
    uVar11 = (uint)&uStack_80 | 1;
    if (uVar6 == 0) goto LAB_7158a434;
  }
  else {
    uVar11 = thunk_MwhHq((uVar6 | 7) + 1);
    uStack_80 = (uVar6 | 7) + 2;
    uStack_7c = uVar6;
    uStack_78 = uVar11;
  }
  imp___aeabi_memcpy(uVar11,s_value_7006bfcf,uVar6);
LAB_7158a434:
  *(undefined1 *)(uVar11 + uVar6) = 0;
  FUN_7158b9c8(abStack_74,param_1,0x10,&uStack_80);
  FUN_71535458(auStack_58 + 6,0x65,&uStack_68,abStack_74,0);
  *(undefined1 *)(param_2 + 0x2c) = 1;
  if (*(char *)(param_2 + 0x48) != '\0') {
                    /* WARNING: Subroutine does not return */
    imp_abort();
  }
LAB_7158a50c:
  puStack_40 = &DAT_70b0e9d8;
  thunk_jJGKcnfLgdrxxLeuIMkbyODuAc(auStack_38);
  thunk_CnY_uZeaDyxdbKuhNYOsuNTHkGOv_Ep(auStack_58 + 6);
  if ((abStack_74[0] & 1) != 0) {
    thunk_qNQrlu(uStack_6c);
  }
  if ((uStack_80 & 1) != 0) {
    thunk_qNQrlu(uStack_78);
  }
  if ((auStack_58[0] & 1) != 0) {
    thunk_qNQrlu(auStack_58[2]);
  }
LAB_7158a568:
  if (auStack_58[3] != 0) {
    thunk_qNQrlu();
  }
  if (_ext___stack_chk_guard != iStack_28) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail(iStack_28);
  }
  return;
}


// =========================================================================
// Function: FUN_7158b818
// Entry: 0x7158b818 | Size: 200 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7158b818(undefined4 *param_1,int param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 uStack_28;
  int iStack_24;
  
  iStack_24 = _ext___stack_chk_guard;
  pbVar1 = *(byte **)(param_2 + 0x20);
  pbVar2 = *(byte **)(param_2 + 0x24);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (pbVar1 != pbVar2) {
    do {
      if (*pbVar1 < 0x20) {
        uStack_28 = 0;
        uStack_2c = 0;
        uStack_30 = 0;
        FUN_71590454(&uStack_30,9,9,s_<U___4X>_7006767c,*pbVar1);
        thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
                  (param_1,&uStack_30);
      }
      else {
        thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                  (param_1);
      }
      pbVar1 = pbVar1 + 1;
    } while (pbVar1 != pbVar2);
  }
  if (_ext___stack_chk_guard != iStack_24) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail();
  }
  return;
}


// =========================================================================
// Function: FUN_7158b9c8
// Entry: 0x7158b9c8 | Size: 1144 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7158b9c8(int *param_1,int param_2,uint param_3,byte *param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  char *pcVar9;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  int iStack_28;
  
  iStack_28 = _ext___stack_chk_guard;
  uVar1 = imp_strlen(s_syntax_error_70075bd0);
  if (0xfffffff7 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(param_1);
  }
  if (uVar1 < 0xb) {
    puVar7 = (undefined1 *)((int)param_1 + 1);
    *(char *)param_1 = (char)(uVar1 << 1);
    if (uVar1 == 0) goto LAB_7158ba60;
  }
  else {
    puVar7 = (undefined1 *)thunk_MwhHq((uVar1 | 7) + 1);
    *param_1 = (uVar1 | 7) + 2;
    param_1[1] = uVar1;
    param_1[2] = (int)puVar7;
  }
  imp___aeabi_memcpy(puVar7,s_syntax_error_70075bd0,uVar1);
LAB_7158ba60:
  puVar7[uVar1] = 0;
  uVar1 = *(uint *)(param_4 + 4);
  if ((*param_4 & 1) == 0) {
    uVar1 = (uint)(*param_4 >> 1);
  }
  if (uVar1 != 0) {
    uStack_30 = 0;
    uStack_34 = 0;
    uStack_38 = 0;
    iVar2 = imp_strlen(s_while_parsing_7006126f);
    thunk_unFyfir_BvUlKYauBEfhRelEEXsiapQSHvJAFghrgjyVAHOaZYfJlFFjqW_KkmNFIzQVgBGcyowb
              (&uStack_38,iVar2 + uVar1 + 1);
    thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
              (&uStack_38,s_while_parsing_7006126f);
    pbVar5 = *(byte **)(param_4 + 8);
    uVar1 = *(uint *)(param_4 + 4);
    if ((*param_4 & 1) == 0) {
      pbVar5 = param_4 + 1;
      uVar1 = (uint)(*param_4 >> 1);
    }
    thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
              (&uStack_38,pbVar5,uVar1);
    thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
              (&uStack_38,0x20);
    uVar6 = uStack_30;
    uVar1 = uStack_34;
    if ((uStack_38 & 1) == 0) {
      uVar1 = uStack_38 >> 1 & 0x7f;
      uVar6 = (uint)&uStack_38 | 1;
    }
    thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
              (param_1,uVar6,uVar1);
    if ((uStack_38 & 1) != 0) {
      thunk_qNQrlu(uStack_30);
    }
  }
  thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
            (param_1,&DAT_700710d1);
  uVar1 = *(uint *)(param_2 + 0x18);
  if (uVar1 == 0xe) {
    pbVar5 = *(byte **)(param_2 + 0x40);
    pbVar8 = *(byte **)(param_2 + 0x44);
    uVar3 = *(undefined4 *)(param_2 + 0x58);
    uStack_40 = 0;
    uStack_44 = 0;
    uStack_48 = 0;
    if (pbVar5 != pbVar8) {
      do {
        if (*pbVar5 < 0x20) {
          uStack_30 = uStack_30 & 0xffffff00;
          uStack_34 = 0;
          uStack_38 = 0;
          FUN_71590454(&uStack_38,9,9,s_<U___4X>_7006767c,*pbVar5);
          thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
                    (&uStack_48,&uStack_38);
        }
        else {
          thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                    (&uStack_48);
        }
        pbVar5 = pbVar5 + 1;
      } while (pbVar5 != pbVar8);
    }
    uStack_30 = 0;
    uStack_34 = 0;
    uStack_38 = 0;
    iVar2 = imp_strlen(uVar3);
    iVar4 = imp_strlen(s___last_read____70067685);
    uVar1 = uStack_44;
    if ((uStack_48 & 1) == 0) {
      uVar1 = uStack_48 >> 1 & 0x7f;
    }
    thunk_unFyfir_BvUlKYauBEfhRelEEXsiapQSHvJAFghrgjyVAHOaZYfJlFFjqW_KkmNFIzQVgBGcyowb
              (&uStack_38,iVar2 + iVar4 + uVar1 + 1);
    thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
              (&uStack_38,uVar3);
    thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
              (&uStack_38,s___last_read____70067685);
    uVar6 = uStack_40;
    uVar1 = uStack_44;
    if ((uStack_48 & 1) == 0) {
      uVar1 = uStack_48 >> 1 & 0x7f;
      uVar6 = (uint)&uStack_48 | 1;
    }
    thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
              (&uStack_38,uVar6,uVar1);
    thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
              (&uStack_38,0x27);
    uVar6 = uStack_30;
    uVar1 = uStack_34;
    if ((uStack_38 & 1) == 0) {
      uVar1 = uStack_38 >> 1 & 0x7f;
      uVar6 = (uint)&uStack_38 | 1;
    }
    thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
              (param_1,uVar6,uVar1);
    uVar1 = uStack_40;
    uVar6 = uStack_48;
    if ((uStack_38 & 1) != 0) {
      thunk_qNQrlu(uStack_30);
      uVar1 = uStack_40;
      uVar6 = uStack_48;
    }
  }
  else {
    if (uVar1 < 0x11) {
      pcVar9 = *(char **)(&DAT_70b0ebb8 + uVar1 * 4);
    }
    else {
      pcVar9 = s_unknown_token_700718db;
    }
    uStack_30 = 0;
    uStack_34 = 0;
    uStack_38 = 0;
    iVar2 = imp_strlen(s_unexpected_7006f69a);
    iVar4 = imp___strlen_chk(pcVar9,0x17);
    thunk_unFyfir_BvUlKYauBEfhRelEEXsiapQSHvJAFghrgjyVAHOaZYfJlFFjqW_KkmNFIzQVgBGcyowb
              (&uStack_38,iVar4 + iVar2);
    thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
              (&uStack_38,s_unexpected_7006f69a);
    thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
              (&uStack_38,pcVar9);
    uVar6 = uStack_30;
    uVar1 = uStack_34;
    if ((uStack_38 & 1) == 0) {
      uVar1 = uStack_38 >> 1 & 0x7f;
      uVar6 = (uint)&uStack_38 | 1;
    }
    thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
              (param_1,uVar6,uVar1);
    uVar1 = uStack_30;
    uVar6 = uStack_38;
  }
  if ((uVar6 & 1) != 0) {
    thunk_qNQrlu(uVar1);
  }
  if (param_3 != 0) {
    if (param_3 < 0x11) {
      pcVar9 = *(char **)(&DAT_70b0ebf8 + param_3 * 4);
    }
    else {
      pcVar9 = s_unknown_token_700718db;
    }
    uStack_30 = 0;
    uStack_34 = 0;
    uStack_38 = 0;
    iVar2 = imp_strlen(s___expected_70063377);
    iVar4 = imp___strlen_chk(pcVar9,0x17);
    thunk_unFyfir_BvUlKYauBEfhRelEEXsiapQSHvJAFghrgjyVAHOaZYfJlFFjqW_KkmNFIzQVgBGcyowb
              (&uStack_38,iVar4 + iVar2);
    thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
              (&uStack_38,s___expected_70063377);
    thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
              (&uStack_38,pcVar9);
    uVar6 = uStack_30;
    uVar1 = uStack_34;
    if ((uStack_38 & 1) == 0) {
      uVar1 = uStack_38 >> 1 & 0x7f;
      uVar6 = (uint)&uStack_38 | 1;
    }
    thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
              (param_1,uVar6,uVar1);
    if ((uStack_38 & 1) != 0) {
      thunk_qNQrlu(uStack_30);
    }
  }
  if (_ext___stack_chk_guard == iStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_7158c45c
// Entry: 0x7158c45c | Size: 3588 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7158c45c(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint *puVar6;
  undefined *puVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  bool bVar13;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  byte abStack_74 [8];
  uint uStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  uint auStack_58 [6];
  undefined *puStack_40;
  uint uStack_3c;
  undefined1 auStack_38 [16];
  int iStack_28;
  
  iVar8 = param_1 + 0x20;
  iStack_28 = _ext___stack_chk_guard;
  auStack_58[5] = 0;
  auStack_58[4] = 0;
  auStack_58[3] = 0;
  iVar1 = param_1 + 0x4d;
  uVar2 = param_1 + 0x4c;
LAB_7158c4c4:
  switch(*(undefined4 *)(param_1 + 0x18)) {
  case 1:
    puStack_40 = (undefined *)CONCAT31(puStack_40._1_3_,1);
    goto LAB_7158c54c;
  case 2:
    puStack_40 = (undefined *)((uint)puStack_40._1_3_ << 8);
LAB_7158c54c:
    FUN_71590c90(param_2,&puStack_40);
    break;
  case 3:
    puStack_40 = (undefined *)0x0;
    FUN_71590e28(param_2,&puStack_40);
    break;
  case 4:
    iVar3 = *(int *)(param_1 + 0x78);
    bVar13 = iVar3 != 0x2e;
    if (bVar13) {
      iVar3 = *(int *)(param_1 + 0x7c);
    }
    if (bVar13 && iVar3 != -1) {
      iVar4 = *(int *)(param_1 + 0x54);
      if ((*(byte *)(param_1 + 0x4c) & 1) == 0) {
        iVar4 = iVar1;
      }
      *(undefined1 *)(iVar4 + iVar3) = 0x2e;
    }
    FUN_71591124(param_2,uVar2);
    break;
  case 5:
    puStack_40 = *(undefined **)(param_1 + 0x68);
    uStack_3c = *(uint *)(param_1 + 0x6c);
    FUN_71591428(param_2,&puStack_40);
    break;
  case 6:
    puStack_40 = *(undefined **)(param_1 + 0x60);
    uStack_3c = *(uint *)(param_1 + 100);
    FUN_71590f84(param_2,&puStack_40);
    break;
  case 7:
    puVar7 = *(undefined **)(param_1 + 0x70);
    uVar10 = *(uint *)(param_1 + 0x74);
    uVar12 = uVar10 & 0x7fffffff;
    iVar3 = FUN_71ba2c1c(puVar7,uVar12,0,0x7ff00000);
    iVar4 = FUN_71ba0f44(puVar7,uVar12,0,0x7ff00000);
    if (iVar4 != 0 || iVar3 != 0) {
      FUN_7158b818(auStack_58,iVar8);
      FUN_7158b818(abStack_74,iVar8);
      uStack_80 = CONCAT31(uStack_80._1_3_,0x27);
      FUN_71538d24(&uStack_68,s_number_overflow_parsing___700653da,abStack_74,&uStack_80);
      FUN_71538a00(&puStack_40,0x196,&uStack_68,0);
      *(undefined1 *)(param_2 + 0x14) = 1;
      if (*(char *)(param_2 + 0x15) != '\0') {
                    /* WARNING: Subroutine does not return */
        imp_abort();
      }
      puStack_40 = &DAT_70b0e9d8;
      thunk_jJGKcnfLgdrxxLeuIMkbyODuAc(auStack_38);
      thunk_CnY_uZeaDyxdbKuhNYOsuNTHkGOv_Ep(&puStack_40);
      if ((uStack_68 & 1) != 0) {
        thunk_qNQrlu(uStack_60);
      }
LAB_7158cfe4:
      if ((abStack_74[0] & 1) == 0) goto LAB_7158cef4;
      goto LAB_7158cef0;
    }
    iVar3 = *(int *)(param_1 + 0x78);
    bVar13 = iVar3 != 0x2e;
    if (bVar13) {
      iVar3 = *(int *)(param_1 + 0x7c);
    }
    if (bVar13 && iVar3 != -1) {
      iVar4 = *(int *)(param_1 + 0x54);
      if ((*(byte *)(param_1 + 0x4c) & 1) == 0) {
        iVar4 = iVar1;
      }
      *(undefined1 *)(iVar4 + iVar3) = 0x2e;
    }
    puStack_40 = puVar7;
    uStack_3c = uVar10;
    FUN_71590af0(param_2,&puStack_40);
    break;
  case 8:
    iVar3 = FUN_715906d8(param_2,0xffffffff);
    if (iVar3 == 0) goto LAB_7158cf0c;
    iVar3 = FUN_71587238(iVar8);
    *(int *)(param_1 + 0x18) = iVar3;
    if (iVar3 == 10) goto LAB_7158c758;
    if (auStack_58[4] == auStack_58[5] * 0x20) {
      if (auStack_58[4] == 0xfffffffe || (int)(auStack_58[4] + 1) < -1) {
LAB_7158d280:
                    /* WARNING: Subroutine does not return */
        FUN_71537b8c(auStack_58 + 3);
      }
      uVar12 = 0x7fffffff;
      if ((auStack_58[4] < 0x3fffffff) &&
         (uVar12 = (auStack_58[4] & 0x3fffffe0) + 0x20, uVar12 < auStack_58[5] << 6)) {
        uVar12 = auStack_58[5] << 6;
      }
      FUN_71537a10(auStack_58 + 3,uVar12);
    }
    *(uint *)(auStack_58[3] + (auStack_58[4] >> 5) * 4) =
         *(uint *)(auStack_58[3] + (auStack_58[4] >> 5) * 4) | 1 << (auStack_58[4] & 0x1f);
    auStack_58[4] = auStack_58[4] + 1;
    goto LAB_7158c4c4;
  case 9:
    iVar3 = FUN_715904bc(param_2,0xffffffff);
    if (iVar3 == 0) goto LAB_7158cf0c;
    iVar3 = FUN_71587238(iVar8);
    *(int *)(param_1 + 0x18) = iVar3;
    if (iVar3 != 0xb) {
      if (iVar3 != 4) {
        FUN_7158b818(auStack_58,iVar8);
        uStack_68 = *(uint *)(param_1 + 0x34);
        uStack_64 = *(undefined4 *)(param_1 + 0x38);
        uStack_60 = *(undefined4 *)(param_1 + 0x3c);
        FUN_71315100(&uStack_80,s_object_key_700653cf);
        FUN_7158b9c8(abStack_74,param_1,4,&uStack_80);
        FUN_71535458(&puStack_40,0x65,&uStack_68,abStack_74,0);
        *(undefined1 *)(param_2 + 0x14) = 1;
        if (*(char *)(param_2 + 0x15) != '\0') {
                    /* WARNING: Subroutine does not return */
          imp_abort();
        }
        goto LAB_7158ceac;
      }
      iVar3 = *(int *)(param_1 + 0x78);
      bVar13 = iVar3 != 0x2e;
      if (bVar13) {
        iVar3 = *(int *)(param_1 + 0x7c);
      }
      if (bVar13 && iVar3 != -1) {
        iVar4 = *(int *)(param_1 + 0x54);
        if ((*(byte *)(param_1 + 0x4c) & 1) == 0) {
          iVar4 = iVar1;
        }
        *(undefined1 *)(iVar4 + iVar3) = 0x2e;
      }
      auStack_58[0] = uVar2;
      FUN_7153a2b8(&puStack_40,*(undefined4 *)(*(int *)(*(int *)(param_2 + 8) + -4) + 8),uVar2,
                   &DAT_700823fd,auStack_58,&uStack_68);
      *(undefined **)(param_2 + 0x10) = puStack_40 + 0x20;
      iVar3 = FUN_71587238(iVar8);
      *(int *)(param_1 + 0x18) = iVar3;
      if (iVar3 != 0xc) {
        FUN_7158b818(auStack_58,iVar8);
        uStack_68 = *(uint *)(param_1 + 0x34);
        uStack_64 = *(undefined4 *)(param_1 + 0x38);
        uStack_60 = *(undefined4 *)(param_1 + 0x3c);
        FUN_71315100(&uStack_80,s_object_separator_7006e582);
        FUN_7158b9c8(abStack_74,param_1,0xc,&uStack_80);
        FUN_71535458(&puStack_40,0x65,&uStack_68,abStack_74,0);
        *(undefined1 *)(param_2 + 0x14) = 1;
        if (*(char *)(param_2 + 0x15) != '\0') {
                    /* WARNING: Subroutine does not return */
          imp_abort();
        }
        goto LAB_7158ceac;
      }
      if (auStack_58[4] == auStack_58[5] * 0x20) {
        if (auStack_58[4] == 0xfffffffe || (int)(auStack_58[4] + 1) < -1) goto LAB_7158d280;
        uVar12 = 0x7fffffff;
        if ((auStack_58[4] < 0x3fffffff) &&
           (uVar12 = (auStack_58[4] & 0x3fffffe0) + 0x20, uVar12 < auStack_58[5] << 6)) {
          uVar12 = auStack_58[5] << 6;
        }
        FUN_71537a10(auStack_58 + 3,uVar12);
      }
      *(uint *)(auStack_58[3] + (auStack_58[4] >> 5) * 4) =
           *(uint *)(auStack_58[3] + (auStack_58[4] >> 5) * 4) & ~(1 << (auStack_58[4] & 0x1f));
      auStack_58[4] = auStack_58[4] + 1;
LAB_7158c898:
      uVar5 = FUN_71587238(iVar8);
      *(undefined4 *)(param_1 + 0x18) = uVar5;
      goto LAB_7158c4c4;
    }
LAB_7158c758:
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -4;
    break;
  default:
    goto switchD_7158c4dc_caseD_a;
  case 0xe:
    pbVar9 = *(byte **)(param_1 + 0x40);
    pbVar11 = *(byte **)(param_1 + 0x44);
    auStack_58[2] = 0;
    auStack_58[1] = 0;
    auStack_58[0] = 0;
    if (pbVar9 != pbVar11) {
      do {
        if (*pbVar9 < 0x20) {
          auStack_38[0] = 0;
          uStack_3c = 0;
          puStack_40 = (undefined *)0x0;
          FUN_71590454(&puStack_40,9,9,s_<U___4X>_7006767c,*pbVar9);
          thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
                    (auStack_58,&puStack_40);
        }
        else {
          thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                    (auStack_58);
        }
        pbVar9 = pbVar9 + 1;
      } while (pbVar9 != pbVar11);
    }
    uStack_68 = *(uint *)(param_1 + 0x34);
    uStack_64 = *(undefined4 *)(param_1 + 0x38);
    uStack_60 = *(undefined4 *)(param_1 + 0x3c);
    uVar2 = imp_strlen(s_value_7006bfcf);
    if (0xfffffff7 < uVar2) goto LAB_7158d288;
    if (uVar2 < 0xb) {
      uStack_80 = CONCAT31(uStack_80._1_3_,(char)(uVar2 << 1));
      uVar12 = (uint)&uStack_80 | 1;
      if (uVar2 != 0) goto LAB_7158cd38;
    }
    else {
      uVar12 = thunk_MwhHq((uVar2 | 7) + 1);
      uStack_80 = (uVar2 | 7) + 2;
      uStack_7c = uVar2;
      uStack_78 = uVar12;
LAB_7158cd38:
      imp___aeabi_memcpy(uVar12,s_value_7006bfcf,uVar2);
    }
    *(undefined1 *)(uVar12 + uVar2) = 0;
    FUN_7158b9c8(abStack_74,param_1,0,&uStack_80);
    FUN_71535458(&puStack_40,0x65,&uStack_68,abStack_74,0);
    *(undefined1 *)(param_2 + 0x14) = 1;
    if (*(char *)(param_2 + 0x15) != '\0') {
                    /* WARNING: Subroutine does not return */
      imp_abort();
    }
    goto LAB_7158ceac;
  case 0xf:
    puVar6 = (uint *)(param_1 + 0x34);
    if (*puVar6 == 1) {
      FUN_7158b818(auStack_58,iVar8);
      uStack_68 = *puVar6;
      uStack_64 = *(undefined4 *)(param_1 + 0x38);
      uStack_60 = *(undefined4 *)(param_1 + 0x3c);
      FUN_71315100(abStack_74,s_attempting_to_parse_an_empty_inp_7006dd14);
      FUN_71535458(&puStack_40,0x65,&uStack_68,abStack_74,0);
      *(undefined1 *)(param_2 + 0x14) = 1;
      if (*(char *)(param_2 + 0x15) != '\0') {
                    /* WARNING: Subroutine does not return */
        imp_abort();
      }
      puStack_40 = &DAT_70b0e9d8;
      thunk_jJGKcnfLgdrxxLeuIMkbyODuAc(auStack_38);
      thunk_CnY_uZeaDyxdbKuhNYOsuNTHkGOv_Ep(&puStack_40);
      goto LAB_7158cfe4;
    }
    pbVar9 = *(byte **)(param_1 + 0x40);
    pbVar11 = *(byte **)(param_1 + 0x44);
    auStack_58[2] = 0;
    auStack_58[1] = 0;
    auStack_58[0] = 0;
    if (pbVar9 != pbVar11) {
      do {
        if (*pbVar9 < 0x20) {
          auStack_38[0] = 0;
          uStack_3c = 0;
          puStack_40 = (undefined *)0x0;
          FUN_71590454(&puStack_40,9,9,s_<U___4X>_7006767c,*pbVar9);
          thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
                    (auStack_58,&puStack_40);
        }
        else {
          thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                    (auStack_58);
        }
        pbVar9 = pbVar9 + 1;
      } while (pbVar9 != pbVar11);
    }
    uStack_68 = *puVar6;
    uStack_64 = *(undefined4 *)(param_1 + 0x38);
    uStack_60 = *(undefined4 *)(param_1 + 0x3c);
    uVar2 = imp_strlen(s_value_7006bfcf);
    if (0xfffffff7 < uVar2) goto LAB_7158d288;
    if (uVar2 < 0xb) {
      uVar12 = (uint)&uStack_80 | 1;
      uStack_80 = CONCAT31(uStack_80._1_3_,(char)(uVar2 << 1));
      if (uVar2 != 0) goto LAB_7158ce48;
    }
    else {
      uVar12 = thunk_MwhHq((uVar2 | 7) + 1);
      uStack_80 = (uVar2 | 7) + 2;
      uStack_7c = uVar2;
      uStack_78 = uVar12;
LAB_7158ce48:
      imp___aeabi_memcpy(uVar12,s_value_7006bfcf,uVar2);
    }
    *(undefined1 *)(uVar12 + uVar2) = 0;
    FUN_7158b9c8(abStack_74,param_1,0x10,&uStack_80);
    FUN_71535458(&puStack_40,0x65,&uStack_68,abStack_74,0);
    *(undefined1 *)(param_2 + 0x14) = 1;
    if (*(char *)(param_2 + 0x15) != '\0') {
                    /* WARNING: Subroutine does not return */
      imp_abort();
    }
    goto LAB_7158ceac;
  }
  if (auStack_58[4] != 0) {
    do {
      uVar10 = auStack_58[4] - 1;
      uVar12 = *(uint *)(auStack_58[3] + (uVar10 >> 5) * 4);
      iVar3 = FUN_71587238(iVar8);
      *(int *)(param_1 + 0x18) = iVar3;
      if ((uVar12 >> (uVar10 & 0x1f) & 1) == 0) {
        if (iVar3 == 0xd) {
          iVar3 = FUN_71587238(iVar8);
          *(int *)(param_1 + 0x18) = iVar3;
          if ((iVar3 != 0xb) || (*(char *)(param_1 + 0x81) == '\0')) {
            if (iVar3 != 4) {
              FUN_7158b818(auStack_58,iVar8);
              uStack_68 = *(uint *)(param_1 + 0x34);
              uStack_64 = *(undefined4 *)(param_1 + 0x38);
              uStack_60 = *(undefined4 *)(param_1 + 0x3c);
              FUN_71315100(&uStack_80,s_object_key_700653cf);
              FUN_7158b9c8(abStack_74,param_1,4,&uStack_80);
              FUN_71535458(&puStack_40,0x65,&uStack_68,abStack_74,0);
              *(undefined1 *)(param_2 + 0x14) = 1;
              if (*(char *)(param_2 + 0x15) != '\0') {
                    /* WARNING: Subroutine does not return */
                imp_abort();
              }
              goto LAB_7158ceac;
            }
            iVar3 = *(int *)(param_1 + 0x78);
            bVar13 = iVar3 != 0x2e;
            if (bVar13) {
              iVar3 = *(int *)(param_1 + 0x7c);
            }
            if (bVar13 && iVar3 != -1) {
              iVar4 = *(int *)(param_1 + 0x54);
              if ((*(byte *)(param_1 + 0x4c) & 1) == 0) {
                iVar4 = iVar1;
              }
              *(undefined1 *)(iVar4 + iVar3) = 0x2e;
            }
            auStack_58[0] = uVar2;
            FUN_7153a2b8(&puStack_40,*(undefined4 *)(*(int *)(*(int *)(param_2 + 8) + -4) + 8),uVar2
                         ,&DAT_700823fd,auStack_58,&uStack_68);
            *(undefined **)(param_2 + 0x10) = puStack_40 + 0x20;
            iVar3 = FUN_71587238(iVar8);
            *(int *)(param_1 + 0x18) = iVar3;
            if (iVar3 == 0xc) goto LAB_7158c898;
            FUN_7158b818(auStack_58,iVar8);
            uStack_68 = *(uint *)(param_1 + 0x34);
            uStack_64 = *(undefined4 *)(param_1 + 0x38);
            uStack_60 = *(undefined4 *)(param_1 + 0x3c);
            FUN_71315100(&uStack_80,s_object_separator_7006e582);
            FUN_7158b9c8(abStack_74,param_1,0xc,&uStack_80);
            FUN_71535458(&puStack_40,0x65,&uStack_68,abStack_74,0);
            *(undefined1 *)(param_2 + 0x14) = 1;
            if (*(char *)(param_2 + 0x15) != '\0') {
                    /* WARNING: Subroutine does not return */
              imp_abort();
            }
            goto LAB_7158ceac;
          }
        }
        else if (iVar3 != 0xb) {
          FUN_7158b818(auStack_58,iVar8);
          uStack_68 = *(uint *)(param_1 + 0x34);
          uStack_64 = *(undefined4 *)(param_1 + 0x38);
          uStack_60 = *(undefined4 *)(param_1 + 0x3c);
          FUN_71315100(&uStack_80,s_object_7006a39b);
          FUN_7158b9c8(abStack_74,param_1,0xb,&uStack_80);
          FUN_71535458(&puStack_40,0x65,&uStack_68,abStack_74,0);
          *(undefined1 *)(param_2 + 0x14) = 1;
          if (*(char *)(param_2 + 0x15) != '\0') {
                    /* WARNING: Subroutine does not return */
            imp_abort();
          }
          goto LAB_7158ceac;
        }
      }
      else if (iVar3 == 0xd) {
        iVar3 = FUN_71587238(iVar8);
        *(int *)(param_1 + 0x18) = iVar3;
        if ((iVar3 != 10) || (*(char *)(param_1 + 0x81) == '\0')) goto LAB_7158c4c4;
      }
      else if (iVar3 != 10) {
        FUN_7158b818(auStack_58,iVar8);
        uStack_68 = *(uint *)(param_1 + 0x34);
        uStack_64 = *(undefined4 *)(param_1 + 0x38);
        uStack_60 = *(undefined4 *)(param_1 + 0x3c);
        FUN_71315100(&uStack_80,s_array_7006e593);
        FUN_7158b9c8(abStack_74,param_1,10,&uStack_80);
        FUN_71535458(&puStack_40,0x65,&uStack_68,abStack_74,0);
        *(undefined1 *)(param_2 + 0x14) = 1;
        if (*(char *)(param_2 + 0x15) != '\0') {
                    /* WARNING: Subroutine does not return */
          imp_abort();
        }
        goto LAB_7158ceac;
      }
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -4;
      auStack_58[4] = auStack_58[4] - 1;
      if (auStack_58[4] == 0) break;
    } while( true );
  }
  goto LAB_7158cf0c;
switchD_7158c4dc_caseD_a:
  pbVar9 = *(byte **)(param_1 + 0x40);
  pbVar11 = *(byte **)(param_1 + 0x44);
  auStack_58[2] = 0;
  auStack_58[1] = 0;
  auStack_58[0] = 0;
  if (pbVar9 != pbVar11) {
    do {
      if (*pbVar9 < 0x20) {
        auStack_38[0] = 0;
        uStack_3c = 0;
        puStack_40 = (undefined *)0x0;
        FUN_71590454(&puStack_40,9,9,s_<U___4X>_7006767c,*pbVar9);
        thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
                  (auStack_58,&puStack_40);
      }
      else {
        thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                  (auStack_58);
      }
      pbVar9 = pbVar9 + 1;
    } while (pbVar9 != pbVar11);
  }
  uStack_68 = *(uint *)(param_1 + 0x34);
  uStack_64 = *(undefined4 *)(param_1 + 0x38);
  uStack_60 = *(undefined4 *)(param_1 + 0x3c);
  uVar2 = imp_strlen(s_value_7006bfcf);
  if (0xfffffff7 < uVar2) {
LAB_7158d288:
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_80);
  }
  if (uVar2 < 0xb) {
    uStack_80 = CONCAT31(uStack_80._1_3_,(char)(uVar2 << 1));
    uVar12 = (uint)&uStack_80 | 1;
    if (uVar2 == 0) goto LAB_7158cdd4;
  }
  else {
    uVar12 = thunk_MwhHq((uVar2 | 7) + 1);
    uStack_80 = (uVar2 | 7) + 2;
    uStack_7c = uVar2;
    uStack_78 = uVar12;
  }
  imp___aeabi_memcpy(uVar12,s_value_7006bfcf,uVar2);
LAB_7158cdd4:
  *(undefined1 *)(uVar12 + uVar2) = 0;
  FUN_7158b9c8(abStack_74,param_1,0x10,&uStack_80);
  FUN_71535458(&puStack_40,0x65,&uStack_68,abStack_74,0);
  *(undefined1 *)(param_2 + 0x14) = 1;
  if (*(char *)(param_2 + 0x15) != '\0') {
                    /* WARNING: Subroutine does not return */
    imp_abort();
  }
LAB_7158ceac:
  puStack_40 = &DAT_70b0e9d8;
  thunk_jJGKcnfLgdrxxLeuIMkbyODuAc(auStack_38);
  thunk_CnY_uZeaDyxdbKuhNYOsuNTHkGOv_Ep(&puStack_40);
  if ((abStack_74[0] & 1) != 0) {
    thunk_qNQrlu(uStack_6c);
  }
  uStack_6c = uStack_78;
  if ((uStack_80 & 1) != 0) {
LAB_7158cef0:
    thunk_qNQrlu(uStack_6c);
  }
LAB_7158cef4:
  if ((auStack_58[0] & 1) != 0) {
    thunk_qNQrlu(auStack_58[2]);
  }
LAB_7158cf0c:
  if (auStack_58[3] != 0) {
    thunk_qNQrlu();
  }
  if (_ext___stack_chk_guard != iStack_28) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail(iStack_28);
  }
  return;
}


// =========================================================================
// Function: FUN_7158e0dc
// Entry: 0x7158e0dc | Size: 500 bytes
// =========================================================================

undefined4 FUN_7158e0dc(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined1 uStack_35;
  undefined1 auStack_34 [4];
  byte *pbStack_30;
  undefined1 uStack_29;
  int iStack_28;
  
  piVar9 = (int *)(param_1 + 4);
  iStack_28 = *(int *)(param_1 + 8) - *piVar9 >> 2;
  uStack_29 = 0;
  piVar1 = *(int **)(param_1 + 0x40);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_71539164();
  }
  iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,&iStack_28,&uStack_29,param_1 + 0x50);
  uVar5 = *(uint *)(param_1 + 0x14);
  iVar7 = *(int *)(param_1 + 0x18);
  if (uVar5 == iVar7 * 0x20) {
    if (uVar5 == 0xfffffffe || (int)(uVar5 + 1) < -1) {
                    /* WARNING: Subroutine does not return */
      FUN_71537b8c(param_1 + 0x10);
    }
    uVar4 = 0x7fffffff;
    if ((uVar5 < 0x3fffffff) && (uVar4 = (uVar5 & 0x3fffffe0) + 0x20, uVar4 < (uint)(iVar7 << 6))) {
      uVar4 = iVar7 << 6;
    }
    FUN_71537a10(param_1 + 0x10,uVar4);
    uVar5 = *(uint *)(param_1 + 0x14);
  }
  *(uint *)(param_1 + 0x14) = uVar5 + 1;
  uVar4 = 1 << (uVar5 & 0x1f);
  uStack_35 = 1;
  uVar6 = *(uint *)(*(int *)(param_1 + 0x10) + (uVar5 >> 5) * 4);
  if (iVar2 == 0) {
    uVar6 = uVar6 & ~uVar4;
  }
  else {
    uVar6 = uVar6 | uVar4;
  }
  *(uint *)(*(int *)(param_1 + 0x10) + (uVar5 >> 5) * 4) = uVar6;
  FUN_7158eee8(auStack_34,param_1,&uStack_35,1);
  puVar8 = *(undefined4 **)(param_1 + 8);
  if (puVar8 < *(undefined4 **)(param_1 + 0xc)) {
    puVar10 = puVar8 + 1;
    *puVar8 = pbStack_30;
  }
  else {
    iVar7 = *piVar9;
    iVar2 = (int)puVar8 - iVar7 >> 2;
    uVar5 = iVar2 + 1;
    if (0x3fffffff < uVar5) {
      FUN_715393a0(piVar9);
LAB_7158e2cc:
                    /* WARNING: Subroutine does not return */
      FUN_712f6cf0();
    }
    uVar6 = (int)*(undefined4 **)(param_1 + 0xc) - iVar7;
    uVar4 = (int)uVar6 >> 1;
    if (uVar5 < uVar4) {
      uVar5 = uVar4;
    }
    if (0x7ffffffb < uVar6) {
      uVar5 = 0x3fffffff;
    }
    if (uVar5 == 0) {
      iVar3 = 0;
    }
    else {
      if (0x3fffffff < uVar5) goto LAB_7158e2cc;
      iVar3 = thunk_MwhHq(uVar5 << 2);
    }
    puVar10 = (undefined4 *)(iVar3 + iVar2 * 4);
    *puVar10 = pbStack_30;
    imp___aeabi_memcpy4(iVar3,iVar7,(int)puVar8 - iVar7);
    pbStack_30 = (byte *)(iVar3 + uVar5 * 4);
    puVar10 = puVar10 + 1;
    *(int *)(param_1 + 4) = iVar3;
    *(undefined4 **)(param_1 + 8) = puVar10;
    *(byte **)(param_1 + 0xc) = pbStack_30;
    if (iVar7 != 0) {
      pbStack_30 = (byte *)thunk_qNQrlu(iVar7);
    }
  }
  *(undefined4 **)(param_1 + 8) = puVar10;
  if (param_2 != 0xffffffff) {
    pbStack_30 = (byte *)puVar10[-1];
  }
  if (param_2 != 0xffffffff && pbStack_30 != (byte *)0x0) {
    uVar5 = 1;
    if (*pbStack_30 < 3) {
      uVar5 = *(uint *)(&DAT_70082400 + (uint)*pbStack_30 * 4);
    }
    if (uVar5 < param_2) {
                    /* WARNING: Subroutine does not return */
      imp_abort();
    }
  }
  return 1;
}


// =========================================================================
// Function: FUN_7158e420
// Entry: 0x7158e420 | Size: 524 bytes
// =========================================================================

undefined4 FUN_7158e420(int param_1)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  byte *pbVar8;
  int *piVar9;
  undefined4 uVar10;
  bool bVar11;
  int aiStack_48 [4];
  byte *pbStack_38;
  int *piStack_34;
  byte *pbStack_30;
  int iStack_2c;
  undefined1 auStack_28 [8];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 uStack_11;
  
  if (*(int *)(*(int *)(param_1 + 8) + -4) != 0) {
    aiStack_48[0] = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2) + -1;
    uStack_11 = 1;
    piVar2 = *(int **)(param_1 + 0x40);
    if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_71539164();
    }
    iVar3 = (**(code **)(*piVar2 + 0x18))(piVar2,aiStack_48,&uStack_11);
    if (iVar3 == 0) {
      iVar3 = FUN_71539408(auStack_28,param_1 + 0x50);
      puVar5 = *(undefined1 **)(*(int *)(param_1 + 8) + -4);
      uVar1 = *puVar5;
      *puVar5 = auStack_28[0];
      uVar10 = *(undefined4 *)(puVar5 + 8);
      *(undefined4 *)(puVar5 + 8) = uStack_20;
      uVar7 = *(undefined4 *)(puVar5 + 0xc);
      *(undefined4 *)(puVar5 + 0xc) = uStack_1c;
      auStack_28[0] = uVar1;
      uStack_20 = uVar10;
      uStack_1c = uVar7;
      FUN_7152f750(iVar3 + 8);
    }
  }
  pbStack_38 = *(byte **)(param_1 + 8);
  pbVar8 = pbStack_38 + -4;
  *(byte **)(param_1 + 8) = pbVar8;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
  bVar11 = *(byte **)(param_1 + 4) != pbVar8;
  if (bVar11) {
    pbStack_38 = *(byte **)(pbStack_38 + -8);
  }
  if (bVar11 && pbStack_38 != (byte *)0x0) {
    uVar4 = (uint)*pbStack_38;
    puVar6 = (undefined4 *)(uVar4 - 1);
    if (puVar6 < (undefined4 *)0x2) {
      if (uVar4 == 2) {
        iStack_2c = -0x80000000;
        piStack_34 = (int *)0x0;
        pbStack_30 = (byte *)**(undefined4 **)(pbStack_38 + 8);
      }
      else {
        iStack_2c = 0;
        if (uVar4 == 1) {
          puVar6 = *(undefined4 **)(pbStack_38 + 8);
        }
        piStack_34 = (int *)0x0;
        pbStack_30 = (byte *)0x0;
        if (uVar4 == 1) {
          iStack_2c = -0x80000000;
          piStack_34 = (int *)*puVar6;
        }
      }
      while( true ) {
        if (uVar4 == 1) {
          if (piStack_34 == (int *)(*(int *)(pbStack_38 + 8) + 4)) {
            return 1;
          }
          pbVar8 = (byte *)(piStack_34 + 8);
        }
        else if (uVar4 == 2) {
          pbVar8 = pbStack_30;
          if (pbStack_30 == *(byte **)(*(int *)(pbStack_38 + 8) + 4)) {
            return 1;
          }
        }
        else {
          if (iStack_2c == 1) {
            return 1;
          }
          pbVar8 = pbStack_38;
          if (iStack_2c != 0) {
                    /* WARNING: Subroutine does not return */
            imp_abort();
          }
        }
        if (*pbVar8 == 9) break;
        if (uVar4 == 2) {
          pbStack_30 = pbStack_30 + 0x10;
        }
        else if (uVar4 == 1) {
          piVar2 = (int *)piStack_34[1];
          piVar9 = piStack_34;
          if ((int *)piStack_34[1] == (int *)0x0) {
            do {
              piStack_34 = (int *)piVar9[2];
              bVar11 = (int *)*piStack_34 != piVar9;
              piVar9 = piStack_34;
            } while (bVar11);
          }
          else {
            do {
              piStack_34 = piVar2;
              piVar2 = (int *)*piStack_34;
            } while ((int *)*piStack_34 != (int *)0x0);
          }
        }
        else {
          iStack_2c = iStack_2c + 1;
        }
      }
      FUN_715397f8(aiStack_48,pbStack_38,&pbStack_38);
    }
  }
  return 1;
}


// =========================================================================
// Function: FUN_7158e6d0
// Entry: 0x7158e6d0 | Size: 476 bytes
// =========================================================================

undefined4 FUN_7158e6d0(int param_1,byte *param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_50 [8];
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint auStack_40 [2];
  undefined4 *puStack_38;
  undefined4 uStack_34;
  undefined1 uStack_2d;
  byte *pbStack_2c;
  int aiStack_28 [2];
  
  uStack_34 = 0;
  puStack_38 = (undefined4 *)0x0;
  auStack_40[1] = 0;
  auStack_40[0] = 3;
  puVar2 = (undefined4 *)thunk_MwhHq(0xc);
  if ((*param_2 & 1) == 0) {
    uVar6 = *(undefined4 *)(param_2 + 4);
    uVar8 = *(undefined4 *)(param_2 + 8);
    *puVar2 = *(undefined4 *)param_2;
    puVar2[1] = uVar6;
    puVar2[2] = uVar8;
  }
  else {
    FUN_712f6d58(puVar2,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 4));
  }
  aiStack_28[0] = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
  pbStack_2c = (byte *)CONCAT31(pbStack_2c._1_3_,4);
  piVar3 = *(int **)(param_1 + 0x40);
  puStack_38 = puVar2;
  if (piVar3 != (int *)0x0) {
    iVar4 = (**(code **)(*piVar3 + 0x18))(piVar3,aiStack_28,&pbStack_2c,auStack_40);
    uVar9 = *(uint *)(param_1 + 0x20);
    iVar10 = *(int *)(param_1 + 0x24);
    if (uVar9 == iVar10 * 0x20) {
      if (uVar9 == 0xfffffffe || (int)(uVar9 + 1) < -1) {
                    /* WARNING: Subroutine does not return */
        FUN_71537b8c(param_1 + 0x1c);
      }
      uVar7 = 0x7fffffff;
      if ((uVar9 < 0x3fffffff) && (uVar7 = (uVar9 & 0x3fffffe0) + 0x20, uVar7 < (uint)(iVar10 << 6))
         ) {
        uVar7 = iVar10 << 6;
      }
      FUN_71537a10(param_1 + 0x1c,uVar7);
      uVar9 = *(uint *)(param_1 + 0x20);
    }
    *(uint *)(param_1 + 0x20) = uVar9 + 1;
    uVar7 = 1 << (uVar9 & 0x1f);
    uVar9 = uVar9 >> 5;
    iVar10 = *(int *)(param_1 + 0x1c);
    if (iVar4 == 0) {
      *(uint *)(iVar10 + uVar9 * 4) = *(uint *)(iVar10 + uVar9 * 4) & ~uVar7;
    }
    else {
      *(uint *)(iVar10 + uVar9 * 4) = *(uint *)(iVar10 + uVar9 * 4) | uVar7;
      if (*(int *)(*(int *)(param_1 + 8) + -4) != 0) {
        FUN_71539408(auStack_50,param_1 + 0x50);
        pbStack_2c = param_2;
        FUN_7153a2b8(aiStack_28,*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + -4) + 8),param_2,
                     &DAT_700823fd,&pbStack_2c,&uStack_2d);
        puVar5 = (undefined1 *)(aiStack_28[0] + 0x20);
        uVar1 = *puVar5;
        *puVar5 = auStack_50[0];
        uVar6 = *(undefined4 *)(aiStack_28[0] + 0x28);
        uVar8 = *(undefined4 *)(aiStack_28[0] + 0x2c);
        *(undefined4 *)(aiStack_28[0] + 0x28) = uStack_48;
        *(undefined4 *)(aiStack_28[0] + 0x2c) = uStack_44;
        *(undefined1 **)(param_1 + 0x28) = puVar5;
        auStack_50[0] = uVar1;
        uStack_48 = uVar6;
        uStack_44 = uVar8;
        FUN_7152f750(&uStack_48);
      }
    }
    FUN_7152f750(&puStack_38,auStack_40[0] & 0xff);
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_71539164();
}


// =========================================================================
// Function: FUN_7158e9e0
// Entry: 0x7158e9e0 | Size: 504 bytes
// =========================================================================

undefined4 FUN_7158e9e0(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined1 uStack_35;
  undefined1 auStack_34 [4];
  byte *pbStack_30;
  undefined1 uStack_29;
  int iStack_28;
  
  piVar9 = (int *)(param_1 + 4);
  iStack_28 = *(int *)(param_1 + 8) - *piVar9 >> 2;
  uStack_29 = 2;
  piVar1 = *(int **)(param_1 + 0x40);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_71539164();
  }
  iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,&iStack_28,&uStack_29,param_1 + 0x50);
  uVar5 = *(uint *)(param_1 + 0x14);
  iVar7 = *(int *)(param_1 + 0x18);
  if (uVar5 == iVar7 * 0x20) {
    if (uVar5 == 0xfffffffe || (int)(uVar5 + 1) < -1) {
                    /* WARNING: Subroutine does not return */
      FUN_71537b8c(param_1 + 0x10);
    }
    uVar4 = 0x7fffffff;
    if ((uVar5 < 0x3fffffff) && (uVar4 = (uVar5 & 0x3fffffe0) + 0x20, uVar4 < (uint)(iVar7 << 6))) {
      uVar4 = iVar7 << 6;
    }
    FUN_71537a10(param_1 + 0x10,uVar4);
    uVar5 = *(uint *)(param_1 + 0x14);
  }
  *(uint *)(param_1 + 0x14) = uVar5 + 1;
  uVar4 = 1 << (uVar5 & 0x1f);
  uVar6 = *(uint *)(*(int *)(param_1 + 0x10) + (uVar5 >> 5) * 4);
  if (iVar2 == 0) {
    uVar6 = uVar6 & ~uVar4;
  }
  else {
    uVar6 = uVar6 | uVar4;
  }
  *(uint *)(*(int *)(param_1 + 0x10) + (uVar5 >> 5) * 4) = uVar6;
  uStack_35 = 2;
  FUN_7158eee8(auStack_34,param_1,&uStack_35,1);
  puVar8 = *(undefined4 **)(param_1 + 8);
  if (puVar8 < *(undefined4 **)(param_1 + 0xc)) {
    puVar10 = puVar8 + 1;
    *puVar8 = pbStack_30;
  }
  else {
    iVar7 = *piVar9;
    iVar2 = (int)puVar8 - iVar7 >> 2;
    uVar5 = iVar2 + 1;
    if (0x3fffffff < uVar5) {
      FUN_715393a0(piVar9);
LAB_7158ebd4:
                    /* WARNING: Subroutine does not return */
      FUN_712f6cf0();
    }
    uVar6 = (int)*(undefined4 **)(param_1 + 0xc) - iVar7;
    uVar4 = (int)uVar6 >> 1;
    if (uVar5 < uVar4) {
      uVar5 = uVar4;
    }
    if (0x7ffffffb < uVar6) {
      uVar5 = 0x3fffffff;
    }
    if (uVar5 == 0) {
      iVar3 = 0;
    }
    else {
      if (0x3fffffff < uVar5) goto LAB_7158ebd4;
      iVar3 = thunk_MwhHq(uVar5 << 2);
    }
    puVar10 = (undefined4 *)(iVar3 + iVar2 * 4);
    *puVar10 = pbStack_30;
    imp___aeabi_memcpy4(iVar3,iVar7,(int)puVar8 - iVar7);
    pbStack_30 = (byte *)(iVar3 + uVar5 * 4);
    puVar10 = puVar10 + 1;
    *(int *)(param_1 + 4) = iVar3;
    *(undefined4 **)(param_1 + 8) = puVar10;
    *(byte **)(param_1 + 0xc) = pbStack_30;
    if (iVar7 != 0) {
      pbStack_30 = (byte *)thunk_qNQrlu(iVar7);
    }
  }
  *(undefined4 **)(param_1 + 8) = puVar10;
  if (param_2 != 0xffffffff) {
    pbStack_30 = (byte *)puVar10[-1];
  }
  if (param_2 != 0xffffffff && pbStack_30 != (byte *)0x0) {
    uVar5 = 1;
    if (*pbStack_30 < 3) {
      uVar5 = *(uint *)(&DAT_70082400 + (uint)*pbStack_30 * 4);
    }
    if (uVar5 < param_2) {
                    /* WARNING: Subroutine does not return */
      imp_abort();
    }
  }
  return 1;
}


// =========================================================================
// Function: FUN_7158ed28
// Entry: 0x7158ed28 | Size: 312 bytes
// =========================================================================

undefined4 FUN_7158ed28(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 auStack_28 [8];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 uStack_15;
  int iStack_14;
  
  piVar4 = (int *)(*(int *)(param_1 + 8) + -4);
  if (*piVar4 == 0) {
    iVar2 = *(int *)(param_1 + 0x14);
    *(int **)(param_1 + 8) = piVar4;
  }
  else {
    iStack_14 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2) + -1;
    uStack_15 = 3;
    piVar4 = *(int **)(param_1 + 0x40);
    if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_71539164();
    }
    iVar2 = (**(code **)(*piVar4 + 0x18))(piVar4,&iStack_14,&uStack_15);
    if (iVar2 == 0) {
      iVar2 = FUN_71539408(auStack_28,param_1 + 0x50);
      puVar5 = *(undefined1 **)(*(int *)(param_1 + 8) + -4);
      uVar1 = *puVar5;
      *puVar5 = auStack_28[0];
      uVar8 = *(undefined4 *)(puVar5 + 8);
      *(undefined4 *)(puVar5 + 8) = uStack_20;
      uVar6 = *(undefined4 *)(puVar5 + 0xc);
      *(undefined4 *)(puVar5 + 0xc) = uStack_1c;
      auStack_28[0] = uVar1;
      uStack_20 = uVar8;
      uStack_1c = uVar6;
      FUN_7152f750(iVar2 + 8);
      iVar2 = *(int *)(param_1 + 8);
      iVar7 = iVar2 + -4;
      *(int *)(param_1 + 8) = iVar7;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
      if (*(int *)(param_1 + 4) == iVar7) {
        return 1;
      }
      pcVar3 = *(char **)(iVar2 + -8);
      if (*pcVar3 != '\x02') {
        return 1;
      }
      iVar2 = *(int *)(pcVar3 + 8);
      iVar7 = *(int *)(iVar2 + 4);
      puVar5 = (undefined1 *)(iVar7 + -0x10);
      FUN_7152f750(iVar7 + -8,*puVar5);
      *(undefined1 **)(iVar2 + 4) = puVar5;
      return 1;
    }
    iVar2 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -4;
  }
  *(int *)(param_1 + 0x14) = iVar2 + -1;
  return 1;
}


// =========================================================================
// Function: FUN_7158eee8
// Entry: 0x7158eee8 | Size: 592 bytes
// =========================================================================

void FUN_7158eee8(undefined1 *param_1,int *param_2,undefined1 *param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint3 uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 uStack_48;
  uint3 uStack_47;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  undefined1 uStack_25;
  int iStack_24;
  
  if ((*(uint *)(param_2[4] + (param_2[5] - 1U >> 5) * 4) >> (param_2[5] - 1U & 0x1f) & 1) == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *param_1 = 0;
    return;
  }
  uStack_38 = CONCAT31(uStack_38._1_3_,*param_3);
  FUN_71530e60(&uStack_30);
  if (param_4 == 0) {
    iStack_24 = param_2[2] - param_2[1] >> 2;
    uStack_25 = 5;
    piVar6 = (int *)param_2[0x10];
    if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_71539164();
    }
    iVar7 = (**(code **)(*piVar6 + 0x18))(piVar6,&iStack_24,&uStack_25,&uStack_38);
    if (iVar7 != 0) goto LAB_7158ef84;
LAB_7158f0e0:
    *(undefined4 *)(param_1 + 4) = 0;
    *param_1 = 0;
  }
  else {
LAB_7158ef84:
    uVar5 = uStack_2c;
    uVar4 = uStack_30;
    uVar3 = uStack_38._1_3_;
    uVar2 = (undefined1)uStack_38;
    if (param_2[1] == param_2[2]) {
      uStack_30 = 0;
      uStack_44 = uStack_34;
      puVar12 = (undefined1 *)*param_2;
      uStack_2c = 0;
      uStack_38 = (uint)uStack_38._1_3_ << 8;
      uVar1 = *puVar12;
      *puVar12 = uVar2;
      uStack_40 = *(undefined4 *)(puVar12 + 8);
      *(uint *)(puVar12 + 8) = uVar4;
      uStack_3c = *(undefined4 *)(puVar12 + 0xc);
      *(uint *)(puVar12 + 0xc) = uVar5;
      _uStack_48 = CONCAT31(uVar3,uVar1);
      FUN_7152f750(&uStack_40);
      *param_1 = 1;
      iVar7 = *param_2;
    }
    else {
      pcVar8 = *(char **)(param_2[2] + -4);
      if (pcVar8 == (char *)0x0) goto LAB_7158f0e0;
      if (*pcVar8 == '\x02') {
        iVar7 = *(int *)(pcVar8 + 8);
        puVar9 = *(uint **)(iVar7 + 4);
        if (puVar9 < *(uint **)(iVar7 + 8)) {
          *puVar9 = uStack_38;
          puVar9[1] = uStack_34;
          puVar9[2] = uStack_30;
          puVar9[3] = uStack_2c;
          puVar9 = puVar9 + 4;
          uStack_30 = 0;
          uStack_2c = 0;
          uStack_38 = uStack_38 & 0xffffff00;
        }
        else {
          puVar9 = (uint *)FUN_715391cc(iVar7,&uStack_38);
        }
        *(uint **)(iVar7 + 4) = puVar9;
        *param_1 = 1;
        iVar7 = *(int *)(*(int *)(*(int *)(param_2[2] + -4) + 8) + 4) + -0x10;
      }
      else {
        uVar11 = param_2[8] - 1;
        uVar10 = *(uint *)(param_2[7] + (uVar11 >> 5) * 4);
        param_2[8] = uVar11;
        if ((uVar10 >> (uVar11 & 0x1f) & 1) == 0) goto LAB_7158f0e0;
        uStack_30 = 0;
        puVar12 = (undefined1 *)param_2[10];
        uStack_2c = 0;
        uStack_38 = (uint)uStack_38._1_3_ << 8;
        *puVar12 = uVar2;
        uStack_50 = *(undefined4 *)(puVar12 + 8);
        *(uint *)(puVar12 + 8) = uVar4;
        uStack_4c = *(undefined4 *)(puVar12 + 0xc);
        *(uint *)(puVar12 + 0xc) = uVar5;
        FUN_7152f750(&uStack_50);
        iVar7 = param_2[10];
        *param_1 = 1;
      }
    }
    *(int *)(param_1 + 4) = iVar7;
  }
  FUN_7152f750(&uStack_30,uStack_38 & 0xff);
  return;
}


// =========================================================================
// Function: FUN_7158f1f8
// Entry: 0x7158f1f8 | Size: 604 bytes
// =========================================================================

void FUN_7158f1f8(undefined1 *param_1,int *param_2,uint *param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint3 uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 uStack_48;
  uint3 uStack_47;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  undefined1 uStack_25;
  int iStack_24;
  
  if ((*(uint *)(param_2[4] + (param_2[5] - 1U >> 5) * 4) >> (param_2[5] - 1U & 0x1f) & 1) == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *param_1 = 0;
    return;
  }
  uStack_34 = 0;
  uStack_30 = *param_3;
  uStack_2c = param_3[1];
  uStack_38 = 7;
  if (param_4 == 0) {
    iStack_24 = param_2[2] - param_2[1] >> 2;
    uStack_25 = 5;
    piVar6 = (int *)param_2[0x10];
    if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_71539164();
    }
    iVar7 = (**(code **)(*piVar6 + 0x18))(piVar6,&iStack_24,&uStack_25,&uStack_38);
    if (iVar7 != 0) goto LAB_7158f2a0;
LAB_7158f3fc:
    *(undefined4 *)(param_1 + 4) = 0;
    *param_1 = 0;
  }
  else {
LAB_7158f2a0:
    uVar5 = uStack_2c;
    uVar4 = uStack_30;
    uVar3 = uStack_38._1_3_;
    uVar2 = (undefined1)uStack_38;
    if (param_2[1] == param_2[2]) {
      uStack_30 = 0;
      uStack_44 = uStack_34;
      puVar12 = (undefined1 *)*param_2;
      uStack_2c = 0;
      uStack_38 = (uint)uStack_38._1_3_ << 8;
      uVar1 = *puVar12;
      *puVar12 = uVar2;
      uStack_40 = *(undefined4 *)(puVar12 + 8);
      *(uint *)(puVar12 + 8) = uVar4;
      uStack_3c = *(undefined4 *)(puVar12 + 0xc);
      *(uint *)(puVar12 + 0xc) = uVar5;
      _uStack_48 = CONCAT31(uVar3,uVar1);
      FUN_7152f750(&uStack_40);
      *param_1 = 1;
      iVar7 = *param_2;
    }
    else {
      pcVar8 = *(char **)(param_2[2] + -4);
      if (pcVar8 == (char *)0x0) goto LAB_7158f3fc;
      if (*pcVar8 == '\x02') {
        iVar7 = *(int *)(pcVar8 + 8);
        puVar9 = *(uint **)(iVar7 + 4);
        if (puVar9 < *(uint **)(iVar7 + 8)) {
          *puVar9 = uStack_38;
          puVar9[1] = uStack_34;
          puVar9[2] = uStack_30;
          puVar9[3] = uStack_2c;
          puVar9 = puVar9 + 4;
          uStack_30 = 0;
          uStack_2c = 0;
          uStack_38 = uStack_38 & 0xffffff00;
        }
        else {
          puVar9 = (uint *)FUN_715391cc(iVar7,&uStack_38);
        }
        *(uint **)(iVar7 + 4) = puVar9;
        *param_1 = 1;
        iVar7 = *(int *)(*(int *)(*(int *)(param_2[2] + -4) + 8) + 4) + -0x10;
      }
      else {
        uVar11 = param_2[8] - 1;
        uVar10 = *(uint *)(param_2[7] + (uVar11 >> 5) * 4);
        param_2[8] = uVar11;
        if ((uVar10 >> (uVar11 & 0x1f) & 1) == 0) goto LAB_7158f3fc;
        uStack_30 = 0;
        puVar12 = (undefined1 *)param_2[10];
        uStack_2c = 0;
        uStack_38 = (uint)uStack_38._1_3_ << 8;
        *puVar12 = uVar2;
        uStack_50 = *(undefined4 *)(puVar12 + 8);
        *(uint *)(puVar12 + 8) = uVar4;
        uStack_4c = *(undefined4 *)(puVar12 + 0xc);
        *(uint *)(puVar12 + 0xc) = uVar5;
        FUN_7152f750(&uStack_50);
        iVar7 = param_2[10];
        *param_1 = 1;
      }
    }
    *(int *)(param_1 + 4) = iVar7;
  }
  FUN_7152f750(&uStack_30,uStack_38 & 0xff);
  return;
}


// =========================================================================
// Function: FUN_7158f4f8
// Entry: 0x7158f4f8 | Size: 604 bytes
// =========================================================================

void FUN_7158f4f8(undefined1 *param_1,int *param_2,byte *param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint3 uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 uStack_48;
  uint3 uStack_47;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  undefined1 uStack_25;
  int iStack_24;
  
  if ((*(uint *)(param_2[4] + (param_2[5] - 1U >> 5) * 4) >> (param_2[5] - 1U & 0x1f) & 1) == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *param_1 = 0;
    return;
  }
  uStack_2c = 0;
  uStack_34 = 0;
  uStack_30 = (uint)*param_3;
  uStack_38 = 4;
  if (param_4 == 0) {
    iStack_24 = param_2[2] - param_2[1] >> 2;
    uStack_25 = 5;
    piVar6 = (int *)param_2[0x10];
    if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_71539164();
    }
    iVar7 = (**(code **)(*piVar6 + 0x18))(piVar6,&iStack_24,&uStack_25,&uStack_38);
    if (iVar7 != 0) goto LAB_7158f5a0;
LAB_7158f6fc:
    *(undefined4 *)(param_1 + 4) = 0;
    *param_1 = 0;
  }
  else {
LAB_7158f5a0:
    uVar5 = uStack_2c;
    uVar4 = uStack_30;
    uVar3 = uStack_38._1_3_;
    uVar2 = (undefined1)uStack_38;
    if (param_2[1] == param_2[2]) {
      uStack_30 = 0;
      uStack_44 = uStack_34;
      puVar12 = (undefined1 *)*param_2;
      uStack_2c = 0;
      uStack_38 = (uint)uStack_38._1_3_ << 8;
      uVar1 = *puVar12;
      *puVar12 = uVar2;
      uStack_40 = *(undefined4 *)(puVar12 + 8);
      *(uint *)(puVar12 + 8) = uVar4;
      uStack_3c = *(undefined4 *)(puVar12 + 0xc);
      *(uint *)(puVar12 + 0xc) = uVar5;
      _uStack_48 = CONCAT31(uVar3,uVar1);
      FUN_7152f750(&uStack_40);
      *param_1 = 1;
      iVar7 = *param_2;
    }
    else {
      pcVar8 = *(char **)(param_2[2] + -4);
      if (pcVar8 == (char *)0x0) goto LAB_7158f6fc;
      if (*pcVar8 == '\x02') {
        iVar7 = *(int *)(pcVar8 + 8);
        puVar9 = *(uint **)(iVar7 + 4);
        if (puVar9 < *(uint **)(iVar7 + 8)) {
          *puVar9 = uStack_38;
          puVar9[1] = uStack_34;
          puVar9[2] = uStack_30;
          puVar9[3] = uStack_2c;
          puVar9 = puVar9 + 4;
          uStack_30 = 0;
          uStack_2c = 0;
          uStack_38 = uStack_38 & 0xffffff00;
        }
        else {
          puVar9 = (uint *)FUN_715391cc(iVar7,&uStack_38);
        }
        *(uint **)(iVar7 + 4) = puVar9;
        *param_1 = 1;
        iVar7 = *(int *)(*(int *)(*(int *)(param_2[2] + -4) + 8) + 4) + -0x10;
      }
      else {
        uVar11 = param_2[8] - 1;
        uVar10 = *(uint *)(param_2[7] + (uVar11 >> 5) * 4);
        param_2[8] = uVar11;
        if ((uVar10 >> (uVar11 & 0x1f) & 1) == 0) goto LAB_7158f6fc;
        uStack_30 = 0;
        puVar12 = (undefined1 *)param_2[10];
        uStack_2c = 0;
        uStack_38 = (uint)uStack_38._1_3_ << 8;
        *puVar12 = uVar2;
        uStack_50 = *(undefined4 *)(puVar12 + 8);
        *(uint *)(puVar12 + 8) = uVar4;
        uStack_4c = *(undefined4 *)(puVar12 + 0xc);
        *(uint *)(puVar12 + 0xc) = uVar5;
        FUN_7152f750(&uStack_50);
        iVar7 = param_2[10];
        *param_1 = 1;
      }
    }
    *(int *)(param_1 + 4) = iVar7;
  }
  FUN_7152f750(&uStack_30,uStack_38 & 0xff);
  return;
}


// =========================================================================
// Function: FUN_7158f7f8
// Entry: 0x7158f7f8 | Size: 584 bytes
// =========================================================================

void FUN_7158f7f8(undefined1 *param_1,int *param_2,undefined4 param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint3 uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 uStack_48;
  uint3 uStack_47;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  undefined1 uStack_25;
  int iStack_24;
  
  if ((*(uint *)(param_2[4] + (param_2[5] - 1U >> 5) * 4) >> (param_2[5] - 1U & 0x1f) & 1) == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *param_1 = 0;
    return;
  }
  uStack_30 = 0;
  uStack_38 = uStack_38 & 0xffffff00;
  if (param_4 == 0) {
    iStack_24 = param_2[2] - param_2[1] >> 2;
    uStack_25 = 5;
    piVar6 = (int *)param_2[0x10];
    if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_71539164();
    }
    iVar7 = (**(code **)(*piVar6 + 0x18))(piVar6,&iStack_24,&uStack_25,&uStack_38);
    if (iVar7 != 0) goto LAB_7158f88c;
LAB_7158f9e8:
    *(undefined4 *)(param_1 + 4) = 0;
    *param_1 = 0;
  }
  else {
LAB_7158f88c:
    uVar5 = uStack_2c;
    uVar4 = uStack_30;
    uVar3 = uStack_38._1_3_;
    uVar2 = (undefined1)uStack_38;
    if (param_2[1] == param_2[2]) {
      uStack_30 = 0;
      uStack_44 = uStack_34;
      puVar12 = (undefined1 *)*param_2;
      uStack_2c = 0;
      uStack_38 = (uint)uStack_38._1_3_ << 8;
      uVar1 = *puVar12;
      *puVar12 = uVar2;
      uStack_40 = *(undefined4 *)(puVar12 + 8);
      *(uint *)(puVar12 + 8) = uVar4;
      uStack_3c = *(undefined4 *)(puVar12 + 0xc);
      *(uint *)(puVar12 + 0xc) = uVar5;
      _uStack_48 = CONCAT31(uVar3,uVar1);
      FUN_7152f750(&uStack_40);
      *param_1 = 1;
      iVar7 = *param_2;
    }
    else {
      pcVar8 = *(char **)(param_2[2] + -4);
      if (pcVar8 == (char *)0x0) goto LAB_7158f9e8;
      if (*pcVar8 == '\x02') {
        iVar7 = *(int *)(pcVar8 + 8);
        puVar9 = *(uint **)(iVar7 + 4);
        if (puVar9 < *(uint **)(iVar7 + 8)) {
          *puVar9 = uStack_38;
          puVar9[1] = uStack_34;
          puVar9[2] = uStack_30;
          puVar9[3] = uStack_2c;
          puVar9 = puVar9 + 4;
          uStack_30 = 0;
          uStack_2c = 0;
          uStack_38 = uStack_38 & 0xffffff00;
        }
        else {
          puVar9 = (uint *)FUN_715391cc(iVar7,&uStack_38);
        }
        *(uint **)(iVar7 + 4) = puVar9;
        *param_1 = 1;
        iVar7 = *(int *)(*(int *)(*(int *)(param_2[2] + -4) + 8) + 4) + -0x10;
      }
      else {
        uVar11 = param_2[8] - 1;
        uVar10 = *(uint *)(param_2[7] + (uVar11 >> 5) * 4);
        param_2[8] = uVar11;
        if ((uVar10 >> (uVar11 & 0x1f) & 1) == 0) goto LAB_7158f9e8;
        uStack_30 = 0;
        puVar12 = (undefined1 *)param_2[10];
        uStack_2c = 0;
        uStack_38 = (uint)uStack_38._1_3_ << 8;
        *puVar12 = uVar2;
        uStack_50 = *(undefined4 *)(puVar12 + 8);
        *(uint *)(puVar12 + 8) = uVar4;
        uStack_4c = *(undefined4 *)(puVar12 + 0xc);
        *(uint *)(puVar12 + 0xc) = uVar5;
        FUN_7152f750(&uStack_50);
        iVar7 = param_2[10];
        *param_1 = 1;
      }
    }
    *(int *)(param_1 + 4) = iVar7;
  }
  FUN_7152f750(&uStack_30,uStack_38 & 0xff);
  return;
}


// =========================================================================
// Function: FUN_7158fae4
// Entry: 0x7158fae4 | Size: 600 bytes
// =========================================================================

void FUN_7158fae4(undefined1 *param_1,int *param_2,uint *param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint3 uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 uStack_48;
  uint3 uStack_47;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  undefined1 uStack_25;
  int iStack_24;
  
  if ((*(uint *)(param_2[4] + (param_2[5] - 1U >> 5) * 4) >> (param_2[5] - 1U & 0x1f) & 1) == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *param_1 = 0;
    return;
  }
  uStack_34 = 0;
  uStack_30 = *param_3;
  uStack_2c = param_3[1];
  uStack_38 = 5;
  if (param_4 == 0) {
    uStack_25 = 5;
    piVar6 = (int *)param_2[0x10];
    iStack_24 = param_2[2] - param_2[1] >> 2;
    if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_71539164();
    }
    iVar7 = (**(code **)(*piVar6 + 0x18))(piVar6,&iStack_24,&uStack_25,&uStack_38);
    if (iVar7 != 0) goto LAB_7158fb88;
LAB_7158fce4:
    *(undefined4 *)(param_1 + 4) = 0;
    *param_1 = 0;
  }
  else {
LAB_7158fb88:
    uVar5 = uStack_2c;
    uVar4 = uStack_30;
    uVar3 = uStack_38._1_3_;
    uVar2 = (undefined1)uStack_38;
    if (param_2[1] == param_2[2]) {
      uStack_30 = 0;
      uStack_44 = uStack_34;
      puVar12 = (undefined1 *)*param_2;
      uStack_2c = 0;
      uStack_38 = (uint)uStack_38._1_3_ << 8;
      uVar1 = *puVar12;
      *puVar12 = uVar2;
      uStack_40 = *(undefined4 *)(puVar12 + 8);
      *(uint *)(puVar12 + 8) = uVar4;
      uStack_3c = *(undefined4 *)(puVar12 + 0xc);
      *(uint *)(puVar12 + 0xc) = uVar5;
      _uStack_48 = CONCAT31(uVar3,uVar1);
      FUN_7152f750(&uStack_40);
      *param_1 = 1;
      iVar7 = *param_2;
    }
    else {
      pcVar8 = *(char **)(param_2[2] + -4);
      if (pcVar8 == (char *)0x0) goto LAB_7158fce4;
      if (*pcVar8 == '\x02') {
        iVar7 = *(int *)(pcVar8 + 8);
        puVar9 = *(uint **)(iVar7 + 4);
        if (puVar9 < *(uint **)(iVar7 + 8)) {
          *puVar9 = uStack_38;
          puVar9[1] = uStack_34;
          puVar9[2] = uStack_30;
          puVar9[3] = uStack_2c;
          puVar9 = puVar9 + 4;
          uStack_30 = 0;
          uStack_2c = 0;
          uStack_38 = uStack_38 & 0xffffff00;
        }
        else {
          puVar9 = (uint *)FUN_715391cc(iVar7,&uStack_38);
        }
        *(uint **)(iVar7 + 4) = puVar9;
        *param_1 = 1;
        iVar7 = *(int *)(*(int *)(*(int *)(param_2[2] + -4) + 8) + 4) + -0x10;
      }
      else {
        uVar11 = param_2[8] - 1;
        uVar10 = *(uint *)(param_2[7] + (uVar11 >> 5) * 4);
        param_2[8] = uVar11;
        if ((uVar10 >> (uVar11 & 0x1f) & 1) == 0) goto LAB_7158fce4;
        uStack_30 = 0;
        puVar12 = (undefined1 *)param_2[10];
        uStack_2c = 0;
        uStack_38 = (uint)uStack_38._1_3_ << 8;
        *puVar12 = uVar2;
        uStack_50 = *(undefined4 *)(puVar12 + 8);
        *(uint *)(puVar12 + 8) = uVar4;
        uStack_4c = *(undefined4 *)(puVar12 + 0xc);
        *(uint *)(puVar12 + 0xc) = uVar5;
        FUN_7152f750(&uStack_50);
        iVar7 = param_2[10];
        *param_1 = 1;
      }
    }
    *(int *)(param_1 + 4) = iVar7;
  }
  FUN_7152f750(&uStack_30,uStack_38 & 0xff);
  return;
}


// =========================================================================
// Function: FUN_7158fde0
// Entry: 0x7158fde0 | Size: 664 bytes
// =========================================================================

void FUN_7158fde0(undefined1 *param_1,int *param_2,byte *param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint3 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  uint *puVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined1 *puVar14;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 uStack_48;
  uint3 uStack_47;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  uint uStack_34;
  undefined4 *puStack_30;
  uint uStack_2c;
  undefined1 uStack_25;
  int iStack_24;
  
  if ((*(uint *)(param_2[4] + (param_2[5] - 1U >> 5) * 4) >> (param_2[5] - 1U & 0x1f) & 1) == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *param_1 = 0;
    return;
  }
  uStack_2c = 0;
  puStack_30 = (undefined4 *)0x0;
  uStack_34 = 0;
  uStack_38 = 3;
  puVar5 = (undefined4 *)thunk_MwhHq(0xc);
  if ((*param_3 & 1) == 0) {
    uVar11 = *(undefined4 *)(param_3 + 4);
    uVar13 = *(undefined4 *)(param_3 + 8);
    *puVar5 = *(undefined4 *)param_3;
    puVar5[1] = uVar11;
    puVar5[2] = uVar13;
  }
  else {
    FUN_712f6d58(puVar5,*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 4));
  }
  puStack_30 = puVar5;
  if (param_4 == 0) {
    iStack_24 = param_2[2] - param_2[1] >> 2;
    uStack_25 = 5;
    piVar6 = (int *)param_2[0x10];
    if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_71539164();
    }
    iVar7 = (**(code **)(*piVar6 + 0x18))(piVar6,&iStack_24,&uStack_25,&uStack_38);
    if (iVar7 != 0) goto LAB_7158fed8;
LAB_71590020:
    *(undefined4 *)(param_1 + 4) = 0;
    *param_1 = 0;
  }
  else {
LAB_7158fed8:
    uVar4 = uStack_2c;
    puVar5 = puStack_30;
    uVar3 = uStack_38._1_3_;
    uVar2 = (undefined1)uStack_38;
    if (param_2[1] == param_2[2]) {
      puStack_30 = (undefined4 *)0x0;
      uStack_44 = uStack_34;
      puVar14 = (undefined1 *)*param_2;
      uStack_2c = 0;
      uStack_38 = (uint)uStack_38._1_3_ << 8;
      uVar1 = *puVar14;
      *puVar14 = uVar2;
      uStack_40 = *(undefined4 *)(puVar14 + 8);
      *(undefined4 **)(puVar14 + 8) = puVar5;
      uStack_3c = *(undefined4 *)(puVar14 + 0xc);
      *(uint *)(puVar14 + 0xc) = uVar4;
      _uStack_48 = CONCAT31(uVar3,uVar1);
      FUN_7152f750(&uStack_40);
      *param_1 = 1;
      iVar7 = *param_2;
    }
    else {
      pcVar8 = *(char **)(param_2[2] + -4);
      if (pcVar8 == (char *)0x0) goto LAB_71590020;
      if (*pcVar8 == '\x02') {
        iVar7 = *(int *)(pcVar8 + 8);
        puVar9 = *(uint **)(iVar7 + 4);
        if (puVar9 < *(uint **)(iVar7 + 8)) {
          *puVar9 = uStack_38;
          puVar9[1] = uStack_34;
          puVar9[2] = (uint)puStack_30;
          puVar9[3] = uStack_2c;
          puVar9 = puVar9 + 4;
          puStack_30 = (undefined4 *)0x0;
          uStack_2c = 0;
          uStack_38 = uStack_38 & 0xffffff00;
        }
        else {
          puVar9 = (uint *)FUN_715391cc(iVar7,&uStack_38);
        }
        *(uint **)(iVar7 + 4) = puVar9;
        *param_1 = 1;
        iVar7 = *(int *)(*(int *)(*(int *)(param_2[2] + -4) + 8) + 4) + -0x10;
      }
      else {
        uVar12 = param_2[8] - 1;
        uVar10 = *(uint *)(param_2[7] + (uVar12 >> 5) * 4);
        param_2[8] = uVar12;
        if ((uVar10 >> (uVar12 & 0x1f) & 1) == 0) goto LAB_71590020;
        puStack_30 = (undefined4 *)0x0;
        puVar14 = (undefined1 *)param_2[10];
        uStack_2c = 0;
        uStack_38 = (uint)uStack_38._1_3_ << 8;
        *puVar14 = uVar2;
        uStack_50 = *(undefined4 *)(puVar14 + 8);
        *(undefined4 **)(puVar14 + 8) = puVar5;
        uStack_4c = *(undefined4 *)(puVar14 + 0xc);
        *(uint *)(puVar14 + 0xc) = uVar4;
        FUN_7152f750(&uStack_50);
        iVar7 = param_2[10];
        *param_1 = 1;
      }
    }
    *(int *)(param_1 + 4) = iVar7;
  }
  FUN_7152f750(&puStack_30,uStack_38 & 0xff);
  return;
}


// =========================================================================
// Function: FUN_71590154
// Entry: 0x71590154 | Size: 604 bytes
// =========================================================================

void FUN_71590154(undefined1 *param_1,int *param_2,uint *param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint3 uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 uStack_48;
  uint3 uStack_47;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  undefined1 uStack_25;
  int iStack_24;
  
  if ((*(uint *)(param_2[4] + (param_2[5] - 1U >> 5) * 4) >> (param_2[5] - 1U & 0x1f) & 1) == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *param_1 = 0;
    return;
  }
  uStack_34 = 0;
  uStack_30 = *param_3;
  uStack_2c = param_3[1];
  uStack_38 = 6;
  if (param_4 == 0) {
    iStack_24 = param_2[2] - param_2[1] >> 2;
    uStack_25 = 5;
    piVar6 = (int *)param_2[0x10];
    if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_71539164();
    }
    iVar7 = (**(code **)(*piVar6 + 0x18))(piVar6,&iStack_24,&uStack_25,&uStack_38);
    if (iVar7 != 0) goto LAB_715901fc;
LAB_71590358:
    *(undefined4 *)(param_1 + 4) = 0;
    *param_1 = 0;
  }
  else {
LAB_715901fc:
    uVar5 = uStack_2c;
    uVar4 = uStack_30;
    uVar3 = uStack_38._1_3_;
    uVar2 = (undefined1)uStack_38;
    if (param_2[1] == param_2[2]) {
      uStack_30 = 0;
      uStack_44 = uStack_34;
      puVar12 = (undefined1 *)*param_2;
      uStack_2c = 0;
      uStack_38 = (uint)uStack_38._1_3_ << 8;
      uVar1 = *puVar12;
      *puVar12 = uVar2;
      uStack_40 = *(undefined4 *)(puVar12 + 8);
      *(uint *)(puVar12 + 8) = uVar4;
      uStack_3c = *(undefined4 *)(puVar12 + 0xc);
      *(uint *)(puVar12 + 0xc) = uVar5;
      _uStack_48 = CONCAT31(uVar3,uVar1);
      FUN_7152f750(&uStack_40);
      *param_1 = 1;
      iVar7 = *param_2;
    }
    else {
      pcVar8 = *(char **)(param_2[2] + -4);
      if (pcVar8 == (char *)0x0) goto LAB_71590358;
      if (*pcVar8 == '\x02') {
        iVar7 = *(int *)(pcVar8 + 8);
        puVar9 = *(uint **)(iVar7 + 4);
        if (puVar9 < *(uint **)(iVar7 + 8)) {
          *puVar9 = uStack_38;
          puVar9[1] = uStack_34;
          puVar9[2] = uStack_30;
          puVar9[3] = uStack_2c;
          puVar9 = puVar9 + 4;
          uStack_30 = 0;
          uStack_2c = 0;
          uStack_38 = uStack_38 & 0xffffff00;
        }
        else {
          puVar9 = (uint *)FUN_715391cc(iVar7,&uStack_38);
        }
        *(uint **)(iVar7 + 4) = puVar9;
        *param_1 = 1;
        iVar7 = *(int *)(*(int *)(*(int *)(param_2[2] + -4) + 8) + 4) + -0x10;
      }
      else {
        uVar11 = param_2[8] - 1;
        uVar10 = *(uint *)(param_2[7] + (uVar11 >> 5) * 4);
        param_2[8] = uVar11;
        if ((uVar10 >> (uVar11 & 0x1f) & 1) == 0) goto LAB_71590358;
        uStack_30 = 0;
        puVar12 = (undefined1 *)param_2[10];
        uStack_2c = 0;
        uStack_38 = (uint)uStack_38._1_3_ << 8;
        *puVar12 = uVar2;
        uStack_50 = *(undefined4 *)(puVar12 + 8);
        *(uint *)(puVar12 + 8) = uVar4;
        uStack_4c = *(undefined4 *)(puVar12 + 0xc);
        *(uint *)(puVar12 + 0xc) = uVar5;
        FUN_7152f750(&uStack_50);
        iVar7 = param_2[10];
        *param_1 = 1;
      }
    }
    *(int *)(param_1 + 4) = iVar7;
  }
  FUN_7152f750(&uStack_30,uStack_38 & 0xff);
  return;
}


// =========================================================================
// Function: FUN_71590454
// Entry: 0x71590454 | Size: 52 bytes
// =========================================================================

void FUN_71590454(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  imp___vsnprintf_chk(param_1,param_3,0,param_2,param_4,&stack0x00000000);
  return;
}


// =========================================================================
// Function: FUN_715904bc
// Entry: 0x715904bc | Size: 288 bytes
// =========================================================================

undefined4 FUN_715904bc(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined1 uStack_25;
  
  uStack_25 = 1;
  uVar3 = FUN_715908fc(param_1,&uStack_25);
  puVar9 = *(undefined4 **)(param_1 + 8);
  if (puVar9 < *(undefined4 **)(param_1 + 0xc)) {
    puVar7 = puVar9 + 1;
    *puVar9 = uVar3;
  }
  else {
    iVar8 = *(int *)(param_1 + 4);
    iVar1 = (int)puVar9 - iVar8 >> 2;
    uVar6 = iVar1 + 1;
    if (0x3fffffff < uVar6) {
      FUN_715393a0((int *)(param_1 + 4));
LAB_715905d8:
                    /* WARNING: Subroutine does not return */
      FUN_712f6cf0();
    }
    uVar5 = (int)*(undefined4 **)(param_1 + 0xc) - iVar8;
    uVar2 = (int)uVar5 >> 1;
    if (uVar6 < uVar2) {
      uVar6 = uVar2;
    }
    if (0x7ffffffb < uVar5) {
      uVar6 = 0x3fffffff;
    }
    if (uVar6 == 0) {
      iVar4 = 0;
    }
    else {
      if (0x3fffffff < uVar6) goto LAB_715905d8;
      iVar4 = thunk_MwhHq(uVar6 << 2);
    }
    puVar7 = (undefined4 *)(iVar4 + iVar1 * 4);
    *puVar7 = uVar3;
    imp___aeabi_memcpy4(iVar4,iVar8,(int)puVar9 - iVar8);
    puVar7 = puVar7 + 1;
    *(int *)(param_1 + 4) = iVar4;
    *(undefined4 **)(param_1 + 8) = puVar7;
    *(uint *)(param_1 + 0xc) = iVar4 + uVar6 * 4;
    if (iVar8 != 0) {
      thunk_qNQrlu(iVar8);
    }
  }
  *(undefined4 **)(param_1 + 8) = puVar7;
  if (param_2 != 0xffffffff) {
    uVar6 = 1;
    if (*(byte *)puVar7[-1] < 3) {
      uVar6 = *(uint *)(&DAT_70082400 + (uint)*(byte *)puVar7[-1] * 4);
    }
    if (uVar6 < param_2) {
                    /* WARNING: Subroutine does not return */
      imp_abort();
    }
  }
  return 1;
}


// =========================================================================
// Function: FUN_715906d8
// Entry: 0x715906d8 | Size: 296 bytes
// =========================================================================

undefined4 FUN_715906d8(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined1 uStack_25;
  
  uStack_25 = 2;
  uVar3 = FUN_715908fc(param_1,&uStack_25);
  puVar9 = *(undefined4 **)(param_1 + 8);
  if (puVar9 < *(undefined4 **)(param_1 + 0xc)) {
    puVar7 = puVar9 + 1;
    *puVar9 = uVar3;
  }
  else {
    iVar8 = *(int *)(param_1 + 4);
    iVar1 = (int)puVar9 - iVar8 >> 2;
    uVar6 = iVar1 + 1;
    if (0x3fffffff < uVar6) {
      FUN_715393a0((int *)(param_1 + 4));
LAB_715907fc:
                    /* WARNING: Subroutine does not return */
      FUN_712f6cf0();
    }
    uVar5 = (int)*(undefined4 **)(param_1 + 0xc) - iVar8;
    uVar2 = (int)uVar5 >> 1;
    if (uVar6 < uVar2) {
      uVar6 = uVar2;
    }
    if (0x7ffffffb < uVar5) {
      uVar6 = 0x3fffffff;
    }
    if (uVar6 == 0) {
      iVar4 = 0;
    }
    else {
      if (0x3fffffff < uVar6) goto LAB_715907fc;
      iVar4 = thunk_MwhHq(uVar6 << 2);
    }
    puVar7 = (undefined4 *)(iVar4 + iVar1 * 4);
    *puVar7 = uVar3;
    imp___aeabi_memcpy4(iVar4,iVar8,(int)puVar9 - iVar8);
    puVar7 = puVar7 + 1;
    *(int *)(param_1 + 4) = iVar4;
    *(undefined4 **)(param_1 + 8) = puVar7;
    *(uint *)(param_1 + 0xc) = iVar4 + uVar6 * 4;
    if (iVar8 != 0) {
      thunk_qNQrlu(iVar8);
    }
  }
  *(undefined4 **)(param_1 + 8) = puVar7;
  if (param_2 != 0xffffffff) {
    uVar6 = 1;
    if (*(byte *)puVar7[-1] < 3) {
      uVar6 = *(uint *)(&DAT_70082400 + (uint)*(byte *)puVar7[-1] * 4);
    }
    if (uVar6 < param_2) {
                    /* WARNING: Subroutine does not return */
      imp_abort();
    }
  }
  return 1;
}


// =========================================================================
// Function: FUN_715908fc
// Entry: 0x715908fc | Size: 308 bytes
// =========================================================================

int FUN_715908fc(int *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  char *pcVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (param_1[1] == param_1[2]) {
    uStack_28 = *param_2;
    FUN_71530e60(&uStack_20);
    puVar3 = (undefined1 *)*param_1;
    uVar1 = *puVar3;
    *puVar3 = uStack_28;
    uVar4 = *(undefined4 *)(puVar3 + 8);
    *(undefined4 *)(puVar3 + 8) = uStack_20;
    uVar7 = *(undefined4 *)(puVar3 + 0xc);
    *(undefined4 *)(puVar3 + 0xc) = uStack_1c;
    uStack_28 = uVar1;
    uStack_20 = uVar4;
    uStack_1c = uVar7;
    FUN_7152f750();
    return *param_1;
  }
  pcVar2 = *(char **)(param_1[2] + -4);
  if (*pcVar2 == '\x02') {
    iVar5 = *(int *)(pcVar2 + 8);
    puVar3 = *(undefined1 **)(iVar5 + 4);
    if (puVar3 < *(undefined1 **)(iVar5 + 8)) {
      puVar6 = puVar3 + 0x10;
      *puVar3 = *param_2;
      FUN_71530e60(puVar3 + 8);
    }
    else {
      puVar6 = (undefined1 *)FUN_7153c684(iVar5);
    }
    *(undefined1 **)(iVar5 + 4) = puVar6;
    return *(int *)(*(int *)(*(int *)(param_1[2] + -4) + 8) + 4) + -0x10;
  }
  uVar1 = *param_2;
  FUN_71530e60(&uStack_30);
  puVar3 = (undefined1 *)param_1[4];
  *puVar3 = uVar1;
  uVar4 = *(undefined4 *)(puVar3 + 8);
  *(undefined4 *)(puVar3 + 8) = uStack_30;
  uVar7 = *(undefined4 *)(puVar3 + 0xc);
  *(undefined4 *)(puVar3 + 0xc) = uStack_2c;
  uStack_30 = uVar4;
  uStack_2c = uVar7;
  FUN_7152f750();
  return param_1[4];
}


// =========================================================================
// Function: FUN_71590af0
// Entry: 0x71590af0 | Size: 308 bytes
// =========================================================================

int FUN_71590af0(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  char *pcVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (param_1[1] == param_1[2]) {
    pbVar4 = (byte *)*param_1;
    uVar7 = *param_2;
    uVar8 = param_2[1];
    uStack_24 = 0;
    uStack_20 = *(undefined4 *)(pbVar4 + 8);
    uStack_1c = *(undefined4 *)(pbVar4 + 0xc);
    bVar1 = *pbVar4;
    *pbVar4 = 7;
    *(undefined4 *)(pbVar4 + 8) = uVar7;
    *(undefined4 *)(pbVar4 + 0xc) = uVar8;
    uStack_28 = (uint)bVar1;
    FUN_7152f750(&uStack_20);
    return *param_1;
  }
  pcVar2 = *(char **)(param_1[2] + -4);
  if (*pcVar2 == '\x02') {
    iVar6 = *(int *)(pcVar2 + 8);
    puVar3 = *(undefined4 **)(iVar6 + 4);
    if (puVar3 < *(undefined4 **)(iVar6 + 8)) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[2] = *param_2;
      puVar3[3] = param_2[1];
      *(undefined1 *)puVar3 = 7;
      puVar3 = puVar3 + 4;
    }
    else {
      puVar3 = (undefined4 *)FUN_7153ca10(iVar6);
    }
    *(undefined4 **)(iVar6 + 4) = puVar3;
    return *(int *)(*(int *)(*(int *)(param_1[2] + -4) + 8) + 4) + -0x10;
  }
  puVar5 = (undefined1 *)param_1[4];
  uVar7 = *param_2;
  uVar8 = param_2[1];
  uStack_30 = *(undefined4 *)(puVar5 + 8);
  uStack_2c = *(undefined4 *)(puVar5 + 0xc);
  *puVar5 = 7;
  *(undefined4 *)(puVar5 + 8) = uVar7;
  *(undefined4 *)(puVar5 + 0xc) = uVar8;
  FUN_7152f750(&uStack_30);
  return param_1[4];
}


// =========================================================================
// Function: FUN_71590c90
// Entry: 0x71590c90 | Size: 300 bytes
// =========================================================================

int FUN_71590c90(int *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  char *pcVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (param_1[1] == param_1[2]) {
    pbVar5 = (byte *)*param_1;
    bVar2 = *param_2;
    uStack_24 = 0;
    uStack_20 = *(undefined4 *)(pbVar5 + 8);
    uStack_1c = *(undefined4 *)(pbVar5 + 0xc);
    bVar1 = *pbVar5;
    *pbVar5 = 4;
    *(uint *)(pbVar5 + 8) = (uint)bVar2;
    pbVar5[0xc] = 0;
    pbVar5[0xd] = 0;
    pbVar5[0xe] = 0;
    pbVar5[0xf] = 0;
    uStack_28 = (uint)bVar1;
    FUN_7152f750(&uStack_20);
    return *param_1;
  }
  pcVar3 = *(char **)(param_1[2] + -4);
  if (*pcVar3 == '\x02') {
    iVar7 = *(int *)(pcVar3 + 8);
    puVar4 = *(undefined4 **)(iVar7 + 4);
    if (puVar4 < *(undefined4 **)(iVar7 + 8)) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[2] = (uint)*param_2;
      puVar4[3] = 0;
      *(undefined1 *)puVar4 = 4;
      puVar4 = puVar4 + 4;
    }
    else {
      puVar4 = (undefined4 *)FUN_7153cd90(iVar7);
    }
    *(undefined4 **)(iVar7 + 4) = puVar4;
    return *(int *)(*(int *)(*(int *)(param_1[2] + -4) + 8) + 4) + -0x10;
  }
  puVar6 = (undefined1 *)param_1[4];
  bVar2 = *param_2;
  uStack_30 = *(undefined4 *)(puVar6 + 8);
  uStack_2c = *(undefined4 *)(puVar6 + 0xc);
  *puVar6 = 4;
  *(uint *)(puVar6 + 8) = (uint)bVar2;
  *(undefined4 *)(puVar6 + 0xc) = 0;
  FUN_7152f750(&uStack_30);
  return param_1[4];
}


// =========================================================================
// Function: FUN_71590e28
// Entry: 0x71590e28 | Size: 240 bytes
// =========================================================================

int FUN_71590e28(int *param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (param_1[1] == param_1[2]) {
    puVar2 = (undefined1 *)*param_1;
    uStack_20 = *puVar2;
    *puVar2 = 0;
    uStack_18 = *(undefined4 *)(puVar2 + 8);
    *(undefined4 *)(puVar2 + 8) = 0;
    uVar3 = *(undefined4 *)(puVar2 + 0xc);
    *(undefined4 *)(puVar2 + 0xc) = uStack_14;
    uStack_14 = uVar3;
    FUN_7152f750(&uStack_18);
    return *param_1;
  }
  pcVar1 = *(char **)(param_1[2] + -4);
  if (*pcVar1 == '\x02') {
    FUN_7153d0d0(*(undefined4 *)(pcVar1 + 8));
    return *(int *)(*(int *)(*(int *)(param_1[2] + -4) + 8) + 4) + -0x10;
  }
  puVar2 = (undefined1 *)param_1[4];
  *puVar2 = 0;
  uStack_28 = *(undefined4 *)(puVar2 + 8);
  *(undefined4 *)(puVar2 + 8) = 0;
  uVar3 = *(undefined4 *)(puVar2 + 0xc);
  *(undefined4 *)(puVar2 + 0xc) = uStack_24;
  uStack_24 = uVar3;
  FUN_7152f750(&uStack_28);
  return param_1[4];
}


// =========================================================================
// Function: FUN_71590f84
// Entry: 0x71590f84 | Size: 308 bytes
// =========================================================================

int FUN_71590f84(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  char *pcVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (param_1[1] == param_1[2]) {
    pbVar4 = (byte *)*param_1;
    uVar7 = *param_2;
    uVar8 = param_2[1];
    uStack_24 = 0;
    uStack_20 = *(undefined4 *)(pbVar4 + 8);
    uStack_1c = *(undefined4 *)(pbVar4 + 0xc);
    bVar1 = *pbVar4;
    *pbVar4 = 5;
    *(undefined4 *)(pbVar4 + 8) = uVar7;
    *(undefined4 *)(pbVar4 + 0xc) = uVar8;
    uStack_28 = (uint)bVar1;
    FUN_7152f750(&uStack_20);
    return *param_1;
  }
  pcVar2 = *(char **)(param_1[2] + -4);
  if (*pcVar2 == '\x02') {
    iVar6 = *(int *)(pcVar2 + 8);
    puVar3 = *(undefined4 **)(iVar6 + 4);
    if (puVar3 < *(undefined4 **)(iVar6 + 8)) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[2] = *param_2;
      puVar3[3] = param_2[1];
      *(undefined1 *)puVar3 = 5;
      puVar3 = puVar3 + 4;
    }
    else {
      puVar3 = (undefined4 *)FUN_7153d454(iVar6);
    }
    *(undefined4 **)(iVar6 + 4) = puVar3;
    return *(int *)(*(int *)(*(int *)(param_1[2] + -4) + 8) + 4) + -0x10;
  }
  puVar5 = (undefined1 *)param_1[4];
  uVar7 = *param_2;
  uVar8 = param_2[1];
  uStack_30 = *(undefined4 *)(puVar5 + 8);
  uStack_2c = *(undefined4 *)(puVar5 + 0xc);
  *puVar5 = 5;
  *(undefined4 *)(puVar5 + 8) = uVar7;
  *(undefined4 *)(puVar5 + 0xc) = uVar8;
  FUN_7152f750(&uStack_30);
  return param_1[4];
}


// =========================================================================
// Function: FUN_71591124
// Entry: 0x71591124 | Size: 496 bytes
// =========================================================================

int FUN_71591124(int *param_1,byte *param_2)

{
  undefined1 uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (param_1[1] == param_1[2]) {
    uStack_24 = 0;
    uStack_28 = 0;
    uStack_2c = 0;
    uStack_30 = 0;
    puVar8 = (undefined4 *)thunk_MwhHq(0xc);
    if ((*param_2 & 1) == 0) {
      uVar5 = *(undefined4 *)(param_2 + 4);
      uVar6 = *(undefined4 *)(param_2 + 8);
      *puVar8 = *(undefined4 *)param_2;
      puVar8[1] = uVar5;
      puVar8[2] = uVar6;
    }
    else {
      FUN_712f6d58(puVar8,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 4));
    }
    puVar4 = (undefined1 *)*param_1;
    uVar1 = *puVar4;
    *puVar4 = 3;
    uVar5 = *(undefined4 *)(puVar4 + 0xc);
    uStack_28 = *(undefined4 *)(puVar4 + 8);
    *(undefined4 **)(puVar4 + 8) = puVar8;
    *(undefined4 *)(puVar4 + 0xc) = uStack_24;
    uStack_30 = CONCAT31(uStack_30._1_3_,uVar1);
    uStack_24 = uVar5;
    FUN_7152f750(&uStack_28);
    return *param_1;
  }
  pcVar2 = *(char **)(param_1[2] + -4);
  if (*pcVar2 == '\x02') {
    iVar7 = *(int *)(pcVar2 + 8);
    puVar8 = *(undefined4 **)(iVar7 + 4);
    if (puVar8 < *(undefined4 **)(iVar7 + 8)) {
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      *(undefined1 *)puVar8 = 3;
      puVar3 = (undefined4 *)thunk_MwhHq(0xc);
      if ((*param_2 & 1) == 0) {
        uVar5 = *(undefined4 *)(param_2 + 4);
        uVar6 = *(undefined4 *)(param_2 + 8);
        *puVar3 = *(undefined4 *)param_2;
        puVar3[1] = uVar5;
        puVar3[2] = uVar6;
      }
      else {
        FUN_712f6d58(puVar3,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 4));
      }
      puVar8[2] = puVar3;
      puVar8 = puVar8 + 4;
    }
    else {
      puVar8 = (undefined4 *)FUN_7153d940(iVar7,param_2);
    }
    *(undefined4 **)(iVar7 + 4) = puVar8;
    return *(int *)(*(int *)(*(int *)(param_1[2] + -4) + 8) + 4) + -0x10;
  }
  uStack_34 = 0;
  uStack_38 = 0;
  uVar6 = 0;
  uVar5 = 0;
  puVar8 = (undefined4 *)thunk_MwhHq(0xc);
  if ((*param_2 & 1) == 0) {
    uVar5 = *(undefined4 *)(param_2 + 4);
    uVar6 = *(undefined4 *)(param_2 + 8);
    *puVar8 = *(undefined4 *)param_2;
    puVar8[1] = uVar5;
    puVar8[2] = uVar6;
  }
  else {
    FUN_712f6d58(puVar8,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 4),
                 *(undefined4 *)(param_2 + 8),uVar5,uVar6);
  }
  puVar4 = (undefined1 *)param_1[4];
  *puVar4 = 3;
  uVar5 = *(undefined4 *)(puVar4 + 0xc);
  uStack_38 = *(undefined4 *)(puVar4 + 8);
  *(undefined4 **)(puVar4 + 8) = puVar8;
  *(undefined4 *)(puVar4 + 0xc) = uStack_34;
  uStack_34 = uVar5;
  FUN_7152f750(&uStack_38);
  return param_1[4];
}


// =========================================================================
// Function: FUN_71591428
// Entry: 0x71591428 | Size: 308 bytes
// =========================================================================

int FUN_71591428(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  char *pcVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (param_1[1] == param_1[2]) {
    pbVar4 = (byte *)*param_1;
    uVar7 = *param_2;
    uVar8 = param_2[1];
    uStack_24 = 0;
    uStack_20 = *(undefined4 *)(pbVar4 + 8);
    uStack_1c = *(undefined4 *)(pbVar4 + 0xc);
    bVar1 = *pbVar4;
    *pbVar4 = 6;
    *(undefined4 *)(pbVar4 + 8) = uVar7;
    *(undefined4 *)(pbVar4 + 0xc) = uVar8;
    uStack_28 = (uint)bVar1;
    FUN_7152f750(&uStack_20);
    return *param_1;
  }
  pcVar2 = *(char **)(param_1[2] + -4);
  if (*pcVar2 == '\x02') {
    iVar6 = *(int *)(pcVar2 + 8);
    puVar3 = *(undefined4 **)(iVar6 + 4);
    if (puVar3 < *(undefined4 **)(iVar6 + 8)) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[2] = *param_2;
      puVar3[3] = param_2[1];
      *(undefined1 *)puVar3 = 6;
      puVar3 = puVar3 + 4;
    }
    else {
      puVar3 = (undefined4 *)FUN_7153dd48(iVar6);
    }
    *(undefined4 **)(iVar6 + 4) = puVar3;
    return *(int *)(*(int *)(*(int *)(param_1[2] + -4) + 8) + 4) + -0x10;
  }
  puVar5 = (undefined1 *)param_1[4];
  uVar7 = *param_2;
  uVar8 = param_2[1];
  uStack_30 = *(undefined4 *)(puVar5 + 8);
  uStack_2c = *(undefined4 *)(puVar5 + 0xc);
  *puVar5 = 6;
  *(undefined4 *)(puVar5 + 8) = uVar7;
  *(undefined4 *)(puVar5 + 0xc) = uVar8;
  FUN_7152f750(&uStack_30);
  return param_1[4];
}


// =========================================================================
// Function: FUN_715915c8
// Entry: 0x715915c8 | Size: 244 bytes
// =========================================================================

undefined4 * FUN_715915c8(char *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uStack_1c;
  
  if (*param_1 == '\0') {
    *param_1 = '\x01';
    puVar1 = (undefined4 *)thunk_MwhHq(0xc);
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined4 **)(param_1 + 8) = puVar1;
    *puVar1 = puVar1 + 1;
  }
  else if (*param_1 != '\x01') {
                    /* WARNING: Subroutine does not return */
    imp_abort();
  }
  piVar6 = *(int **)(param_1 + 8);
  puVar1 = (undefined4 *)FUN_71539fe0(piVar6,&uStack_1c,param_2);
  puVar7 = (undefined4 *)*puVar1;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)thunk_MwhHq(0x30);
    uVar2 = *param_2;
    uVar4 = param_2[1];
    uVar5 = param_2[2];
    puVar7[10] = 0;
    puVar7[4] = uVar2;
    puVar7[5] = uVar4;
    puVar7[6] = uVar5;
    puVar7[1] = 0;
    puVar7[2] = uStack_1c;
    *(undefined1 *)(puVar7 + 8) = 0;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *puVar7 = 0;
    *puVar1 = puVar7;
    puVar3 = puVar7;
    if (*(int *)*piVar6 != 0) {
      *piVar6 = *(int *)*piVar6;
      puVar3 = (undefined4 *)*puVar1;
    }
    FUN_712f807c(piVar6[1],puVar3);
    piVar6[2] = piVar6[2] + 1;
  }
  return puVar7 + 8;
}


// =========================================================================
// Function: FUN_71591760
// Entry: 0x71591760 | Size: 20 bytes
// =========================================================================

void FUN_71591760(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_715917c8
// Entry: 0x715917c8 | Size: 560 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_715917c8(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  byte abStack_6c [8];
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint auStack_50 [4];
  undefined *puStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [16];
  int iStack_28;
  
  iStack_28 = _ext___stack_chk_guard;
  iVar1 = FUN_71591cac(param_1);
  if (iVar1 == 0 || param_3 == 0) goto LAB_71591804;
  iVar2 = FUN_71587238(param_1 + 0x20);
  *(int *)(param_1 + 0x18) = iVar2;
  iVar1 = 1;
  if (iVar2 == 0xf) goto LAB_71591804;
  pbVar4 = *(byte **)(param_1 + 0x40);
  pbVar5 = *(byte **)(param_1 + 0x44);
  auStack_50[2] = 0;
  auStack_50[1] = 0;
  auStack_50[0] = 0;
  if (pbVar4 != pbVar5) {
    do {
      if (*pbVar4 < 0x20) {
        auStack_38[0] = 0;
        uStack_3c = 0;
        puStack_40 = (undefined *)0x0;
        FUN_71590454(&puStack_40,9,9,s_<U___4X>_7006767c,*pbVar4);
        thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
                  (auStack_50,&puStack_40);
      }
      else {
        thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                  (auStack_50);
      }
      pbVar4 = pbVar4 + 1;
    } while (pbVar4 != pbVar5);
  }
  uStack_60 = *(undefined4 *)(param_1 + 0x34);
  uStack_5c = *(undefined4 *)(param_1 + 0x38);
  uStack_58 = *(undefined4 *)(param_1 + 0x3c);
  uVar3 = imp_strlen(s_value_7006bfcf);
  if (0xfffffff7 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_78);
  }
  if (uVar3 < 0xb) {
    uVar6 = (uint)&uStack_78 | 1;
    uStack_78 = CONCAT31(uStack_78._1_3_,(char)(uVar3 << 1));
    if (uVar3 != 0) goto LAB_7159193c;
  }
  else {
    uVar6 = thunk_MwhHq((uVar3 | 7) + 1);
    uStack_78 = (uVar3 | 7) + 2;
    uStack_74 = uVar3;
    uStack_70 = uVar6;
LAB_7159193c:
    imp___aeabi_memcpy(uVar6,s_value_7006bfcf,uVar3);
  }
  *(undefined1 *)(uVar6 + uVar3) = 0;
  FUN_7158b9c8(abStack_6c,param_1,0xf,&uStack_78);
  FUN_71535458(&puStack_40,0x65,&uStack_60,abStack_6c,0);
  puStack_40 = &DAT_70b0e9d8;
  thunk_jJGKcnfLgdrxxLeuIMkbyODuAc(auStack_38);
  thunk_CnY_uZeaDyxdbKuhNYOsuNTHkGOv_Ep(&puStack_40);
  if ((abStack_6c[0] & 1) != 0) {
    thunk_qNQrlu(uStack_64);
  }
  if ((uStack_78 & 1) != 0) {
    thunk_qNQrlu(uStack_70);
  }
  if ((auStack_50[0] & 1) != 0) {
    thunk_qNQrlu(auStack_50[2]);
  }
  iVar1 = 0;
LAB_71591804:
  if (_ext___stack_chk_guard != iStack_28) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail(iVar1);
  }
  return;
}


// =========================================================================
// Function: FUN_71591cac
// Entry: 0x71591cac | Size: 2452 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71591cac(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  byte abStack_74 [8];
  uint uStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  uint uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  uint uStack_48;
  int iStack_44;
  undefined *puStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [16];
  int iStack_28;
  
  iVar6 = param_1 + 0x20;
  iVar10 = param_1 + 0x4d;
  iStack_28 = _ext___stack_chk_guard;
  iStack_44 = 0;
  uStack_48 = 0;
  iStack_4c = 0;
LAB_71591cf4:
  switch(*(undefined4 *)(param_1 + 0x18)) {
  case 1:
  case 2:
  case 3:
  case 5:
  case 6:
    break;
  case 4:
    iVar2 = *(int *)(param_1 + 0x78);
    goto joined_r0x71591e6c;
  case 7:
    uVar5 = *(undefined4 *)(param_1 + 0x70);
    uVar3 = *(uint *)(param_1 + 0x74) & 0x7fffffff;
    iVar2 = FUN_71ba2c1c(uVar5,uVar3,0,0x7ff00000);
    iVar1 = FUN_71ba0f44(uVar5,uVar3,0,0x7ff00000);
    if (iVar1 != 0 || iVar2 != 0) {
      FUN_7158b818(&uStack_58,iVar6);
      FUN_7158b818(abStack_74,iVar6);
      uStack_80 = CONCAT31(uStack_80._1_3_,0x27);
      FUN_71538d24(&uStack_68,s_number_overflow_parsing___700653da,abStack_74,&uStack_80);
      FUN_71538a00(&puStack_40,0x196,&uStack_68,0);
      puStack_40 = &DAT_70b0e9d8;
      thunk_jJGKcnfLgdrxxLeuIMkbyODuAc(auStack_38);
      thunk_CnY_uZeaDyxdbKuhNYOsuNTHkGOv_Ep(&puStack_40);
      if ((uStack_68 & 1) != 0) {
        thunk_qNQrlu(uStack_60);
      }
LAB_715925e4:
      if ((abStack_74[0] & 1) == 0) goto LAB_71592480;
      goto LAB_7159247c;
    }
    iVar2 = *(int *)(param_1 + 0x78);
joined_r0x71591e6c:
    if ((iVar2 != 0x2e) && (*(int *)(param_1 + 0x7c) != -1)) {
      iVar2 = *(int *)(param_1 + 0x54);
      if ((*(byte *)(param_1 + 0x4c) & 1) == 0) {
        iVar2 = iVar10;
      }
      *(undefined1 *)(iVar2 + *(int *)(param_1 + 0x7c)) = 0x2e;
    }
    break;
  case 8:
    iVar2 = FUN_71587238(iVar6);
    *(int *)(param_1 + 0x18) = iVar2;
    if (iVar2 == 10) break;
    if (uStack_48 == iStack_44 * 0x20) {
      if (uStack_48 == 0xfffffffe || (int)(uStack_48 + 1) < -1) {
LAB_7159266c:
                    /* WARNING: Subroutine does not return */
        FUN_71537b8c(&iStack_4c);
      }
      uVar3 = 0x7fffffff;
      if ((uStack_48 < 0x3fffffff) &&
         (uVar3 = (uStack_48 & 0x3fffffe0) + 0x20, uVar3 < (uint)(iStack_44 << 6))) {
        uVar3 = iStack_44 << 6;
      }
      FUN_71537a10(&iStack_4c,uVar3);
    }
    *(uint *)(iStack_4c + (uStack_48 >> 5) * 4) =
         *(uint *)(iStack_4c + (uStack_48 >> 5) * 4) | 1 << (uStack_48 & 0x1f);
    uStack_48 = uStack_48 + 1;
    goto LAB_71591cf4;
  case 9:
    iVar2 = FUN_71587238(iVar6);
    *(int *)(param_1 + 0x18) = iVar2;
    if (iVar2 != 0xb) {
      if (iVar2 == 4) {
        iVar2 = *(int *)(param_1 + 0x78);
        bVar11 = iVar2 != 0x2e;
        if (bVar11) {
          iVar2 = *(int *)(param_1 + 0x7c);
        }
        if (bVar11 && iVar2 != -1) {
          iVar1 = *(int *)(param_1 + 0x54);
          if ((*(byte *)(param_1 + 0x4c) & 1) == 0) {
            iVar1 = iVar10;
          }
          *(undefined1 *)(iVar1 + iVar2) = 0x2e;
        }
        iVar2 = FUN_71587238(iVar6);
        *(int *)(param_1 + 0x18) = iVar2;
        if (iVar2 == 0xc) {
          if (uStack_48 == iStack_44 * 0x20) {
            if (uStack_48 == 0xfffffffe || (int)(uStack_48 + 1) < -1) goto LAB_7159266c;
            uVar3 = 0x7fffffff;
            if ((uStack_48 < 0x3fffffff) &&
               (uVar3 = (uStack_48 & 0x3fffffe0) + 0x20, uVar3 < (uint)(iStack_44 << 6))) {
              uVar3 = iStack_44 << 6;
            }
            FUN_71537a10(&iStack_4c,uVar3);
          }
          *(uint *)(iStack_4c + (uStack_48 >> 5) * 4) =
               *(uint *)(iStack_4c + (uStack_48 >> 5) * 4) & ~(1 << (uStack_48 & 0x1f));
          uStack_48 = uStack_48 + 1;
LAB_71591ff0:
          uVar5 = FUN_71587238(iVar6);
          *(undefined4 *)(param_1 + 0x18) = uVar5;
          goto LAB_71591cf4;
        }
LAB_71592514:
        FUN_7158b818(&uStack_58,iVar6);
        uStack_68 = *(uint *)(param_1 + 0x34);
        uStack_64 = *(undefined4 *)(param_1 + 0x38);
        uStack_60 = *(undefined4 *)(param_1 + 0x3c);
        FUN_71315100(&uStack_80,s_object_separator_7006e582);
        uVar5 = 0xc;
      }
      else {
LAB_715924d0:
        FUN_7158b818(&uStack_58,iVar6);
        uStack_68 = *(uint *)(param_1 + 0x34);
        uStack_64 = *(undefined4 *)(param_1 + 0x38);
        uStack_60 = *(undefined4 *)(param_1 + 0x3c);
        FUN_71315100(&uStack_80,s_object_key_700653cf);
        uVar5 = 4;
      }
LAB_7159239c:
      FUN_7158b9c8(abStack_74,param_1,uVar5,&uStack_80);
      goto LAB_71592434;
    }
    break;
  default:
    goto switchD_71591d0c_caseD_a;
  case 0xe:
    pbVar8 = *(byte **)(param_1 + 0x40);
    pbVar7 = *(byte **)(param_1 + 0x44);
    uStack_50 = 0;
    uStack_54 = 0;
    uStack_58 = 0;
    if (pbVar8 != pbVar7) {
      do {
        if (*pbVar8 < 0x20) {
          auStack_38[0] = 0;
          uStack_3c = 0;
          puStack_40 = (undefined *)0x0;
          FUN_71590454(&puStack_40,9,9,s_<U___4X>_7006767c,*pbVar8);
          thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
                    (&uStack_58,&puStack_40);
        }
        else {
          thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                    (&uStack_58);
        }
        pbVar8 = pbVar8 + 1;
      } while (pbVar8 != pbVar7);
    }
    uStack_68 = *(uint *)(param_1 + 0x34);
    uStack_64 = *(undefined4 *)(param_1 + 0x38);
    uStack_60 = *(undefined4 *)(param_1 + 0x3c);
    uVar3 = imp_strlen(s_value_7006bfcf);
    if (0xfffffff7 < uVar3) goto LAB_71592674;
    if (uVar3 < 0xb) {
      uStack_80 = CONCAT31(uStack_80._1_3_,(char)(uVar3 << 1));
      uVar9 = (uint)&uStack_80 | 1;
      if (uVar3 != 0) goto LAB_715923e8;
    }
    else {
      uVar9 = thunk_MwhHq((uVar3 | 7) + 1);
      uStack_80 = (uVar3 | 7) + 2;
      uStack_7c = uVar3;
      uStack_78 = uVar9;
LAB_715923e8:
      imp___aeabi_memcpy(uVar9,s_value_7006bfcf,uVar3);
    }
    *(undefined1 *)(uVar9 + uVar3) = 0;
    uVar5 = 0;
    goto LAB_71592418;
  case 0xf:
    puVar4 = (uint *)(param_1 + 0x34);
    if (*puVar4 == 1) {
      FUN_7158b818(&uStack_58,iVar6);
      uStack_68 = *puVar4;
      uStack_64 = *(undefined4 *)(param_1 + 0x38);
      uStack_60 = *(undefined4 *)(param_1 + 0x3c);
      FUN_71315100(abStack_74,s_attempting_to_parse_an_empty_inp_7006dd14);
      FUN_71535458(&puStack_40,0x65,&uStack_68,abStack_74,0);
      puStack_40 = &DAT_70b0e9d8;
      thunk_jJGKcnfLgdrxxLeuIMkbyODuAc(auStack_38);
      thunk_CnY_uZeaDyxdbKuhNYOsuNTHkGOv_Ep(&puStack_40);
      goto LAB_715925e4;
    }
    pbVar8 = *(byte **)(param_1 + 0x40);
    pbVar7 = *(byte **)(param_1 + 0x44);
    uStack_50 = 0;
    uStack_54 = 0;
    uStack_58 = 0;
    if (pbVar8 != pbVar7) {
      do {
        if (*pbVar8 < 0x20) {
          auStack_38[0] = 0;
          uStack_3c = 0;
          puStack_40 = (undefined *)0x0;
          FUN_71590454(&puStack_40,9,9,s_<U___4X>_7006767c,*pbVar8);
          thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
                    (&uStack_58,&puStack_40);
        }
        else {
          thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                    (&uStack_58);
        }
        pbVar8 = pbVar8 + 1;
      } while (pbVar8 != pbVar7);
    }
    uStack_68 = *puVar4;
    uStack_64 = *(undefined4 *)(param_1 + 0x38);
    uStack_60 = *(undefined4 *)(param_1 + 0x3c);
    uVar3 = imp_strlen(s_value_7006bfcf);
    if (0xfffffff7 < uVar3) goto LAB_71592674;
    if (10 < uVar3) goto LAB_7159230c;
    uStack_80 = CONCAT31(uStack_80._1_3_,(char)(uVar3 << 1));
    goto LAB_715922fc;
  }
  if (uStack_48 != 0) {
    do {
      uVar3 = uStack_48 - 1;
      uVar9 = *(uint *)(iStack_4c + (uVar3 >> 5) * 4);
      iVar2 = FUN_71587238(iVar6);
      *(int *)(param_1 + 0x18) = iVar2;
      if ((uVar9 >> (uVar3 & 0x1f) & 1) == 0) {
        if (iVar2 == 0xd) {
          iVar2 = FUN_71587238(iVar6);
          *(int *)(param_1 + 0x18) = iVar2;
          if ((iVar2 != 0xb) || (*(char *)(param_1 + 0x81) == '\0')) {
            if (iVar2 != 4) goto LAB_715924d0;
            iVar2 = *(int *)(param_1 + 0x78);
            bVar11 = iVar2 != 0x2e;
            if (bVar11) {
              iVar2 = *(int *)(param_1 + 0x7c);
            }
            if (bVar11 && iVar2 != -1) {
              iVar1 = *(int *)(param_1 + 0x54);
              if ((*(byte *)(param_1 + 0x4c) & 1) == 0) {
                iVar1 = iVar10;
              }
              *(undefined1 *)(iVar1 + iVar2) = 0x2e;
            }
            iVar2 = FUN_71587238(iVar6);
            *(int *)(param_1 + 0x18) = iVar2;
            if (iVar2 != 0xc) goto LAB_71592514;
            goto LAB_71591ff0;
          }
        }
        else if (iVar2 != 0xb) {
          FUN_7158b818(&uStack_58,iVar6);
          uStack_68 = *(uint *)(param_1 + 0x34);
          uStack_64 = *(undefined4 *)(param_1 + 0x38);
          uStack_60 = *(undefined4 *)(param_1 + 0x3c);
          FUN_71315100(&uStack_80,s_object_7006a39b);
          uVar5 = 0xb;
          goto LAB_7159239c;
        }
      }
      else if (iVar2 == 0xd) {
        iVar2 = FUN_71587238(iVar6);
        *(int *)(param_1 + 0x18) = iVar2;
        if ((iVar2 != 10) || (*(char *)(param_1 + 0x81) == '\0')) goto LAB_71591cf4;
      }
      else if (iVar2 != 10) {
        FUN_7158b818(&uStack_58,iVar6);
        uStack_68 = *(uint *)(param_1 + 0x34);
        uStack_64 = *(undefined4 *)(param_1 + 0x38);
        uStack_60 = *(undefined4 *)(param_1 + 0x3c);
        FUN_71315100(&uStack_80,s_array_7006e593);
        uVar5 = 10;
        goto LAB_7159239c;
      }
      uStack_48 = uStack_48 - 1;
      if (uStack_48 == 0) break;
    } while( true );
  }
  goto LAB_71592498;
switchD_71591d0c_caseD_a:
  pbVar8 = *(byte **)(param_1 + 0x40);
  pbVar7 = *(byte **)(param_1 + 0x44);
  uStack_50 = 0;
  uStack_54 = 0;
  uStack_58 = 0;
  if (pbVar8 != pbVar7) {
    do {
      if (*pbVar8 < 0x20) {
        auStack_38[0] = 0;
        uStack_3c = 0;
        puStack_40 = (undefined *)0x0;
        FUN_71590454(&puStack_40,9,9,s_<U___4X>_7006767c,*pbVar8);
        thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
                  (&uStack_58,&puStack_40);
      }
      else {
        thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                  (&uStack_58);
      }
      pbVar8 = pbVar8 + 1;
    } while (pbVar8 != pbVar7);
  }
  uStack_68 = *(uint *)(param_1 + 0x34);
  uStack_64 = *(undefined4 *)(param_1 + 0x38);
  uStack_60 = *(undefined4 *)(param_1 + 0x3c);
  uVar3 = imp_strlen(s_value_7006bfcf);
  if (0xfffffff7 < uVar3) {
LAB_71592674:
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_80);
  }
  if (uVar3 < 0xb) {
    uStack_80 = CONCAT31(uStack_80._1_3_,(char)(uVar3 << 1));
LAB_715922fc:
    uVar9 = (uint)&uStack_80 | 1;
    if (uVar3 == 0) goto LAB_71592340;
  }
  else {
LAB_7159230c:
    uVar9 = thunk_MwhHq((uVar3 | 7) + 1);
    uStack_80 = (uVar3 | 7) + 2;
    uStack_7c = uVar3;
    uStack_78 = uVar9;
  }
  imp___aeabi_memcpy(uVar9,s_value_7006bfcf,uVar3);
LAB_71592340:
  *(undefined1 *)(uVar9 + uVar3) = 0;
  uVar5 = 0x10;
LAB_71592418:
  FUN_7158b9c8(abStack_74,param_1,uVar5,&uStack_80);
LAB_71592434:
  FUN_71535458(&puStack_40,0x65,&uStack_68,abStack_74,0);
  puStack_40 = &DAT_70b0e9d8;
  thunk_jJGKcnfLgdrxxLeuIMkbyODuAc(auStack_38);
  thunk_CnY_uZeaDyxdbKuhNYOsuNTHkGOv_Ep(&puStack_40);
  if ((abStack_74[0] & 1) != 0) {
    thunk_qNQrlu(uStack_6c);
  }
  uStack_6c = uStack_78;
  if ((uStack_80 & 1) != 0) {
LAB_7159247c:
    thunk_qNQrlu(uStack_6c);
  }
LAB_71592480:
  if ((uStack_58 & 1) != 0) {
    thunk_qNQrlu(uStack_50);
  }
LAB_71592498:
  if (iStack_4c != 0) {
    thunk_qNQrlu();
  }
  if (_ext___stack_chk_guard != iStack_28) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail(iStack_28);
  }
  return;
}


// =========================================================================
// Function: FUN_71592f84
// Entry: 0x71592f84 | Size: 256 bytes
// =========================================================================

int * FUN_71592f84(int param_1,byte *param_2)

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
// Function: FUN_71593218
// Entry: 0x71593218 | Size: 196 bytes
// =========================================================================

void FUN_71593218(undefined4 *param_1,int param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_711a3a6c);
  puVar6 = &DAT_711a3a74;
  if (DAT_711a3a74 != (undefined4 *)0x0) {
    puVar4 = &DAT_711a3a74;
    puVar6 = DAT_711a3a74;
    do {
      puVar2 = puVar6;
      if ((int)puVar6[4] < param_2) {
        puVar6 = puVar6 + 1;
        puVar2 = puVar4;
      }
      puVar4 = puVar2;
      puVar6 = (undefined4 *)*puVar6;
    } while (puVar6 != (undefined4 *)0x0);
    puVar6 = &DAT_711a3a74;
    if (((undefined4 **)puVar4 != &DAT_711a3a74) && (puVar6 = puVar4, param_2 < (int)puVar4[4])) {
      puVar6 = &DAT_711a3a74;
    }
  }
  if ((undefined4 **)puVar6 == &DAT_711a3a74) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    iVar5 = puVar6[6];
    *param_1 = puVar6[5];
    param_1[1] = iVar5;
    if (iVar5 != 0) {
      piVar3 = (int *)(iVar5 + 4);
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = *piVar3 + 1;
    }
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_711a3a6c);
  return;
}


// =========================================================================
// Function: FUN_7159338c
// Entry: 0x7159338c | Size: 16556 bytes
// =========================================================================
// Decompile failed: Exception while decompiling 7159338c: process: timeout


// =========================================================================
// Function: EizIljKFMDQLZfPYJoqmgp
// Entry: 0x7159b680 | Size: 1076 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void EizIljKFMDQLZfPYJoqmgp
               (int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
               int param_8,int param_9,int param_10,int param_11,int param_12,int param_13,
               int param_14,undefined1 *param_15)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined1 *puVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  int iStack_84;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  int aiStack_40 [4];
  int *piStack_30;
  int iStack_28;
  
  iVar6 = DAT_711a3aa4;
  iStack_28 = _ext___stack_chk_guard;
  DataMemoryBarrier(0xb);
  do {
    iVar13 = DAT_711a3aa4 + 1;
    bVar1 = (bool)hasExclusiveAccess(0x711a3aa4);
  } while (!bVar1);
  DataMemoryBarrier(0xb);
  DAT_711a3aa4 = iVar13;
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_711a3a6c);
  puVar4 = (undefined4 *)thunk_MwhHq(0x88);
  puVar4[2] = 0;
  *puVar4 = &DAT_70b0ec44;
  puVar4[1] = 0;
  imp___aeabi_memclr8(puVar4 + 4,0x78);
  puVar4[0x12] = 0xffffffff;
  puVar4[0x13] = 0xffffffff;
  puVar4[9] = 1;
  puVar4[8] = 0x3f800000;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  puVar4[0xc] = 0;
  puVar4[0xd] = 0;
  puVar4[0xe] = 0;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0;
  imp___aeabi_memclr8(puVar4 + 0x14,0x21);
  puVar4[0x1f] = 0x3f800000;
  puVar4[0x20] = 0x3f800000;
  puVar14 = &DAT_711a3a74;
  puVar8 = DAT_711a3a74;
  puVar15 = puVar14;
  if (DAT_711a3a74 != (undefined4 *)0x0) {
    do {
      while (puVar14 = puVar8, iVar13 < (int)puVar14[4]) {
        puVar8 = (undefined4 *)*puVar14;
        puVar15 = puVar14;
        if ((undefined4 *)*puVar14 == (undefined4 *)0x0) goto LAB_7159b7c0;
      }
      if (iVar6 < (int)puVar14[4]) goto LAB_7159b828;
      puVar8 = (undefined4 *)puVar14[1];
    } while ((undefined4 *)puVar14[1] != (undefined4 *)0x0);
    puVar15 = puVar14 + 1;
  }
LAB_7159b7c0:
  puVar5 = (undefined4 *)thunk_MwhHq(0x1c);
  puVar5[4] = iVar13;
  puVar5[5] = 0;
  puVar5[6] = 0;
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = puVar14;
  *puVar15 = puVar5;
  puVar8 = puVar5;
  if ((int *)*DAT_711a3a70 != (int *)0x0) {
    puVar8 = (undefined4 *)*puVar15;
    DAT_711a3a70 = (int *)*DAT_711a3a70;
  }
  FUN_712f807c(DAT_711a3a74,puVar8);
  DAT_711a3a78 = DAT_711a3a78 + 1;
  puVar14 = puVar5;
LAB_7159b828:
  piVar11 = (int *)puVar14[6];
  puVar14[5] = puVar4 + 4;
  puVar14[6] = puVar4;
  if (piVar11 != (int *)0x0) {
    piVar9 = piVar11 + 1;
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar9;
      bVar1 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar1);
    *piVar9 = iVar6 + -1;
    DataMemoryBarrier(0xb);
    if (iVar6 == 0) {
      (**(code **)(*piVar11 + 8))(piVar11);
      thunk_xwzSFoU_qvDa_PehyVStzHlBOSkJhkBLR_tNCbTfLzAoZMkmnRt(piVar11);
    }
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_711a3a6c);
  puVar10 = &DAT_70064a63;
  if (param_15 != (undefined1 *)0x0) {
    puVar10 = param_15;
  }
  uVar7 = imp_strlen(puVar10);
  if (0xfffffff7 < uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_50);
  }
  if (uVar7 < 0xb) {
    uStack_50 = CONCAT31(uStack_50._1_3_,(char)(uVar7 << 1));
    uVar12 = (uint)&uStack_50 | 1;
    if (uVar7 != 0) goto LAB_7159b8f8;
  }
  else {
    uVar12 = thunk_MwhHq((uVar7 | 7) + 1);
    uStack_50 = (uVar7 | 7) + 2;
    uStack_4c = uVar7;
    uStack_48 = uVar12;
LAB_7159b8f8:
    imp___aeabi_memcpy(uVar12,puVar10,uVar7);
  }
  uVar3 = uStack_50;
  *(undefined1 *)(uVar12 + uVar7) = 0;
  uVar2 = DAT_712017fc;
  if ((uStack_50 & 1) == 0) {
    uStack_60 = uStack_50;
    uStack_5c = uStack_4c;
    uStack_58 = uStack_48;
  }
  else {
    FUN_712f6d58(&uStack_60,uStack_48,uStack_4c);
  }
  piStack_30 = (int *)thunk_MwhHq(0x58);
  *piStack_30 = (int)&DAT_70b0ec60;
  piStack_30[2] = iVar13;
  piStack_30[3] = param_1;
  piStack_30[4] = param_2;
  piStack_30[5] = param_3;
  piStack_30[6] = param_4;
  piStack_30[7] = param_5;
  piStack_30[8] = param_6;
  piStack_30[9] = iStack_84;
  piStack_30[10] = param_7;
  piStack_30[0xb] = param_8;
  piStack_30[0xc] = param_9;
  piStack_30[0xd] = param_10;
  piStack_30[0xe] = param_11;
  piStack_30[0xf] = param_12;
  piStack_30[0x10] = param_13;
  piStack_30[0x11] = param_14;
  piVar11 = aiStack_40;
  piStack_30[0x12] = uStack_60;
  piStack_30[0x13] = uStack_5c;
  piStack_30[0x14] = uStack_58;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  FUN_717ccb10(uVar2,piVar11);
  if (piStack_30 == piVar11) {
    iVar6 = 0x10;
  }
  else {
    iVar6 = 0x14;
    piVar11 = piStack_30;
    if (piStack_30 == (int *)0x0) goto LAB_7159ba60;
  }
  (**(code **)(*piVar11 + iVar6))();
LAB_7159ba60:
  if ((uStack_60 & 1) != 0) {
    thunk_qNQrlu(uStack_58);
  }
  if ((uVar3 & 1) != 0) {
    thunk_qNQrlu(uStack_48);
  }
  if (_ext___stack_chk_guard != iStack_28) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail(iStack_28);
  }
  return;
}


// =========================================================================
// Function: JKxJRVkcaSNQtBlRRKdtyeYVf
// Entry: 0x7159be44 | Size: 732 bytes
// =========================================================================

void JKxJRVkcaSNQtBlRRKdtyeYVf
               (int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5,
               uint param_6,undefined4 param_7,uint param_8,undefined4 param_9,uint param_10)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_711a3a6c);
  puVar8 = &DAT_711a3a74;
  if (DAT_711a3a74 != (undefined4 *)0x0) {
    puVar9 = &DAT_711a3a74;
    puVar8 = DAT_711a3a74;
    do {
      puVar2 = puVar8;
      if ((int)puVar8[4] < param_1) {
        puVar8 = puVar8 + 1;
        puVar2 = puVar9;
      }
      puVar9 = puVar2;
      puVar8 = (undefined4 *)*puVar8;
    } while (puVar8 != (undefined4 *)0x0);
    puVar8 = &DAT_711a3a74;
    if (((undefined4 **)puVar9 != &DAT_711a3a74) && (puVar8 = puVar9, param_1 < (int)puVar9[4])) {
      puVar8 = &DAT_711a3a74;
    }
  }
  if ((undefined4 **)puVar8 == &DAT_711a3a74) {
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_711a3a6c);
    return;
  }
  piVar10 = (int *)puVar8[6];
  iVar3 = puVar8[5];
  if (piVar10 != (int *)0x0) {
    piVar4 = piVar10 + 1;
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = *piVar4 + 1;
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_711a3a6c);
  iVar5 = FUN_71ba2c1c(param_9,param_10 & 0x7fffffff,0,0x7ff00000);
  iVar6 = FUN_71ba0f44(param_9,param_10 & 0x7fffffff,0,0x7ff00000);
  if (iVar6 == 0 && iVar5 == 0) {
    iVar5 = FUN_71ba2c1c(param_7,param_8 & 0x7fffffff,0,0x7ff00000);
    iVar6 = FUN_71ba0f44(param_7,param_8 & 0x7fffffff,0,0x7ff00000);
    if (iVar6 == 0 && iVar5 == 0) {
      iVar5 = FUN_71ba2c1c(param_5,param_6 & 0x7fffffff,0,0x7ff00000);
      iVar6 = FUN_71ba0f44(param_5,param_6 & 0x7fffffff,0,0x7ff00000);
      if (iVar6 == 0 && iVar5 == 0) {
        iVar5 = FUN_71ba2c1c(param_3,param_4 & 0x7fffffff,0);
        iVar6 = FUN_71ba0f44(param_3,param_4 & 0x7fffffff,0,0x7ff00000);
        if ((iVar6 == 0 && iVar5 == 0) && (iVar3 != 0)) {
          thunk_cfqspBX_JrdDvACwYrAyrngjQ(iVar3);
          uVar7 = FUN_71ba242c(param_9,param_10);
          *(undefined4 *)(iVar3 + 0x10) = uVar7;
          uVar7 = FUN_71ba242c(param_7,param_8);
          *(undefined4 *)(iVar3 + 0xc) = uVar7;
          uVar7 = FUN_71ba242c(param_5,param_6);
          *(undefined4 *)(iVar3 + 8) = uVar7;
          uVar7 = FUN_71ba242c(param_3,param_4);
          *(undefined4 *)(iVar3 + 4) = uVar7;
          *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + 1;
          thunk_QgduklVhdVlmSiqzGQeutncbrNj(iVar3);
        }
      }
    }
  }
  if (piVar10 != (int *)0x0) {
    piVar4 = piVar10 + 1;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar3 + -1;
    DataMemoryBarrier(0xb);
    if (iVar3 == 0) {
      (**(code **)(*piVar10 + 8))(piVar10);
      thunk_xwzSFoU_qvDa_PehyVStzHlBOSkJhkBLR_tNCbTfLzAoZMkmnRt(piVar10);
      return;
    }
  }
  return;
}


// =========================================================================
// Function: AqFm_lVFEXznhnuZFeiWqMeoxTvi
// Entry: 0x7159c3b0 | Size: 320 bytes
// =========================================================================

void AqFm_lVFEXznhnuZFeiWqMeoxTvi
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_711a3a6c);
  puVar5 = &DAT_711a3a74;
  if (DAT_711a3a74 != (undefined4 *)0x0) {
    puVar4 = &DAT_711a3a74;
    puVar5 = DAT_711a3a74;
    do {
      puVar2 = puVar5;
      if ((int)puVar5[4] < param_1) {
        puVar5 = puVar5 + 1;
        puVar2 = puVar4;
      }
      puVar4 = puVar2;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
    puVar5 = &DAT_711a3a74;
    if (((undefined4 **)puVar4 != &DAT_711a3a74) && (puVar5 = puVar4, param_1 < (int)puVar4[4])) {
      puVar5 = &DAT_711a3a74;
    }
  }
  if ((undefined4 **)puVar5 == &DAT_711a3a74) {
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_711a3a6c);
    return;
  }
  piVar7 = (int *)puVar5[6];
  iVar6 = puVar5[5];
  if (piVar7 != (int *)0x0) {
    piVar3 = piVar7 + 1;
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = *piVar3 + 1;
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_711a3a6c);
  if (iVar6 != 0) {
    thunk_cfqspBX_JrdDvACwYrAyrngjQ(iVar6);
    *(undefined4 *)(iVar6 + 0x38) = param_3;
    *(int *)(iVar6 + 0x14) = *(int *)(iVar6 + 0x14) + 1;
    *(undefined4 *)(iVar6 + 0x3c) = param_4;
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(iVar6);
  }
  if (piVar7 == (int *)0x0) {
    return;
  }
  piVar3 = piVar7 + 1;
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar6 + -1;
  DataMemoryBarrier(0xb);
  if (iVar6 == 0) {
    (**(code **)(*piVar7 + 8))(piVar7);
    thunk_xwzSFoU_qvDa_PehyVStzHlBOSkJhkBLR_tNCbTfLzAoZMkmnRt(piVar7);
    return;
  }
  return;
}


// =========================================================================
// Function: idAGQJGjJrEARaKcJnWLNfAkppJgKzK
// Entry: 0x7159c630 | Size: 356 bytes
// =========================================================================

void idAGQJGjJrEARaKcJnWLNfAkppJgKzK(int param_1,undefined1 *param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_711a3a6c);
  puVar5 = &DAT_711a3a74;
  if (DAT_711a3a74 != (undefined4 *)0x0) {
    puVar4 = &DAT_711a3a74;
    puVar5 = DAT_711a3a74;
    do {
      puVar2 = puVar5;
      if ((int)puVar5[4] < param_1) {
        puVar5 = puVar5 + 1;
        puVar2 = puVar4;
      }
      puVar4 = puVar2;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
    puVar5 = &DAT_711a3a74;
    if (((undefined4 **)puVar4 != &DAT_711a3a74) && (puVar5 = puVar4, param_1 < (int)puVar4[4])) {
      puVar5 = &DAT_711a3a74;
    }
  }
  if ((undefined4 **)puVar5 == &DAT_711a3a74) {
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_711a3a6c);
    return;
  }
  iVar6 = puVar5[5];
  piVar7 = (int *)puVar5[6];
  if (piVar7 != (int *)0x0) {
    piVar3 = piVar7 + 1;
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = *piVar3 + 1;
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_711a3a6c);
  if (iVar6 != 0) {
    thunk_cfqspBX_JrdDvACwYrAyrngjQ(iVar6);
    if (param_2 == (undefined1 *)0x0) {
      param_2 = &DAT_70064a63;
    }
    thunk_TLUeCDiekSSzXIoKMrpDGxbhUhOecwKWVtKHyZVlDPMMdVvsalzdkegtCtYHBtVMbgUoWiuRKGDAl
              (iVar6 + 0x40,param_2);
    if (param_3 == (undefined1 *)0x0) {
      param_3 = &DAT_70064a63;
    }
    thunk_TLUeCDiekSSzXIoKMrpDGxbhUhOecwKWVtKHyZVlDPMMdVvsalzdkegtCtYHBtVMbgUoWiuRKGDAl
              (iVar6 + 0x4c,param_3);
    *(int *)(iVar6 + 0x58) = *(int *)(iVar6 + 0x58) + 1;
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(iVar6);
  }
  if (piVar7 != (int *)0x0) {
    piVar3 = piVar7 + 1;
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar6 + -1;
    DataMemoryBarrier(0xb);
    if (iVar6 == 0) {
      (**(code **)(*piVar7 + 8))(piVar7);
      thunk_xwzSFoU_qvDa_PehyVStzHlBOSkJhkBLR_tNCbTfLzAoZMkmnRt(piVar7);
      return;
    }
  }
  return;
}


// =========================================================================
// Function: HzohfInlqBcV_paAnsyAtT
// Entry: 0x7159c92c | Size: 424 bytes
// =========================================================================

int HzohfInlqBcV_paAnsyAtT
              (int param_1,int param_2,undefined4 param_3,int param_4,undefined4 *param_5)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_711a3a6c);
  puVar5 = &DAT_711a3a74;
  if (DAT_711a3a74 != (undefined4 *)0x0) {
    puVar4 = &DAT_711a3a74;
    puVar5 = DAT_711a3a74;
    do {
      puVar2 = puVar5;
      if ((int)puVar5[4] < param_1) {
        puVar5 = puVar5 + 1;
        puVar2 = puVar4;
      }
      puVar4 = puVar2;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
    puVar5 = &DAT_711a3a74;
    if (((undefined4 **)puVar4 != &DAT_711a3a74) && (puVar5 = puVar4, param_1 < (int)puVar4[4])) {
      puVar5 = &DAT_711a3a74;
    }
  }
  if ((undefined4 **)puVar5 != &DAT_711a3a74) {
    iVar7 = puVar5[5];
    piVar8 = (int *)puVar5[6];
    if (piVar8 != (int *)0x0) {
      piVar3 = piVar8 + 1;
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = *piVar3 + 1;
    }
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_711a3a6c);
    if (iVar7 == 0) {
      iVar6 = -7;
    }
    else {
      thunk_cfqspBX_JrdDvACwYrAyrngjQ(iVar7);
      if (*(int *)(iVar7 + 0x30) == 0) {
        iVar6 = 0;
        if (*(int *)(iVar7 + 0x2c) != 0 && *(int *)(iVar7 + 0x2c) != param_2) {
          *param_5 = *(undefined4 *)(iVar7 + 0x24);
          param_5[1] = *(undefined4 *)(iVar7 + 0x28);
          if (*(int *)(iVar7 + 0x1c) - *(int *)(iVar7 + 0x18) <= param_4) {
            imp___aeabi_memcpy(param_3,*(int *)(iVar7 + 0x18));
            iVar6 = *(int *)(iVar7 + 0x2c);
          }
        }
      }
      else {
        iVar6 = -*(int *)(iVar7 + 0x30);
      }
      thunk_QgduklVhdVlmSiqzGQeutncbrNj(iVar7);
    }
    if (piVar8 != (int *)0x0) {
      piVar3 = piVar8 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar7 + -1;
      DataMemoryBarrier(0xb);
      if (iVar7 == 0) {
        (**(code **)(*piVar8 + 8))(piVar8);
        thunk_xwzSFoU_qvDa_PehyVStzHlBOSkJhkBLR_tNCbTfLzAoZMkmnRt(piVar8);
        return iVar6;
      }
    }
    return iVar6;
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_711a3a6c);
  return -7;
}


// =========================================================================
// Function: GxVZqArK__hKFfezUtDWKIG
// Entry: 0x7159cc30 | Size: 212 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GxVZqArK__hKFfezUtDWKIG(undefined4 param_1)

{
  undefined **ppuVar1;
  int iVar2;
  undefined4 uStack_34;
  undefined *puStack_30;
  undefined4 uStack_2c;
  undefined **ppuStack_20;
  int iStack_14;
  
  iStack_14 = _ext___stack_chk_guard;
  uStack_34 = param_1;
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_711a3a6c);
  FUN_7159ffa4(&DAT_711a3a70,&uStack_34);
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_711a3a6c);
  ppuVar1 = &puStack_30;
  uStack_2c = uStack_34;
  puStack_30 = &DAT_70b0ec84;
  ppuStack_20 = ppuVar1;
  FUN_717ccb10(DAT_712017fc,ppuVar1);
  if (ppuStack_20 == ppuVar1) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = 0x14;
    ppuVar1 = ppuStack_20;
    if (ppuStack_20 == (undefined **)0x0) goto LAB_7159cce0;
  }
  (**(code **)(*ppuVar1 + iVar2))();
LAB_7159cce0:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_7159ce68
// Entry: 0x7159ce68 | Size: 516 bytes
// =========================================================================

int * FUN_7159ce68(int *param_1)

{
  char *pcVar1;
  byte *pbVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  if (*param_1 != 0) {
    return (int *)0x0;
  }
  pcVar1 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3f10);
  if (*pcVar1 == '\0') {
    puVar6 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3f00);
    *(undefined1 *)(puVar6 + 3) = 1;
    *puVar6 = 0xdbdcb218;
    puVar6[1] = 0xe2dc2386;
    puVar6[2] = 0xabd3be04;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_7159d278,puVar6,&DAT_70b0e000);
    puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3f10);
    *puVar7 = 1;
  }
  pbVar2 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3f00);
  if (pbVar2[0xc] != 0) {
    *pbVar2 = *pbVar2 ^ 0x6f;
    pbVar2[1] = pbVar2[1] ^ 0xd7;
    pbVar2[2] = pbVar2[2] ^ 0xbd;
    pbVar2[3] = pbVar2[3] ^ 0xab;
    pbVar2[0xc] = 0;
    pbVar2[4] = pbVar2[4] ^ 0xe9;
    pbVar2[5] = pbVar2[5] ^ 0x4d;
    pbVar2[6] = pbVar2[6] ^ 0x83;
    pbVar2[7] = pbVar2[7] ^ 0x91;
    pbVar2[8] = pbVar2[8] ^ 0x6f;
    pbVar2[9] = pbVar2[9] ^ 0xd7;
    pbVar2[10] = pbVar2[10] ^ 0xbd;
    pbVar2[0xb] = pbVar2[0xb] ^ 0xab;
  }
  uVar3 = imp_strlen(pbVar2);
  if (0xfffffff7 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_2c);
  }
  if (uVar3 < 0xb) {
    uVar8 = (uint)&uStack_2c | 1;
    uStack_2c = CONCAT31(uStack_2c._1_3_,(char)(uVar3 << 1));
    if (uVar3 == 0) goto LAB_7159cfc8;
  }
  else {
    uVar8 = thunk_MwhHq((uVar3 | 7) + 1);
    uStack_2c = (uVar3 | 7) + 2;
    uStack_28 = uVar3;
    uStack_24 = uVar8;
  }
  imp___aeabi_memmove(uVar8,pbVar2,uVar3);
LAB_7159cfc8:
  *(undefined1 *)(uVar8 + uVar3) = 0;
  piVar4 = (int *)FUN_714f2384(param_1 + 0x12,&uStack_2c);
  if ((uStack_2c & 1) != 0) {
    thunk_qNQrlu(uStack_24);
  }
  piVar5 = (int *)0x0;
  if (param_1 + 0x13 != piVar4) {
    piVar5 = piVar4 + 7;
  }
  return piVar5;
}


// =========================================================================
// Function: FUN_7159d348
// Entry: 0x7159d348 | Size: 1000 bytes
// =========================================================================

int FUN_7159d348(int param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  undefined4 *puVar14;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  if ((*(byte *)(param_1 + 2) & 4) != 0) {
    puVar14 = (undefined4 *)(param_2 + 0x24);
    FUN_715e328c(param_1,*puVar14,param_2);
    if (*(int *)(param_1 + 0x18) != 0) {
      uVar9 = *puVar14;
      iVar1 = FUN_71417f58();
      if ((((iVar1 != 0) && (pbVar2 = (byte *)FUN_71418b98(param_1), pbVar2 != (byte *)0x0)) &&
          (0 < *(int *)(pbVar2 + 4))) &&
         (((*(int *)(pbVar2 + 8) != 0 && ((*pbVar2 & 2) == 0)) &&
          (uVar3 = FUN_7141ee6c(*(undefined4 *)(param_1 + 4)), 0 < *(int *)(pbVar2 + 4))))) {
        iVar1 = 0;
        puVar10 = (uint *)((uint)&uStack_40 | 4) + 1;
        do {
          iVar4 = *(int *)(pbVar2 + 8) + iVar1 * 0x40;
          uStack_40 = *(uint *)(iVar4 + 0x30);
          uStack_3c = *(uint *)(iVar4 + 0x34);
          uStack_38 = *(uint *)(iVar4 + 0x38);
          if ((pbVar2[1] & 0x40) != 0) {
            FUN_714154f8(&uStack_30,&uStack_40,1,uVar3);
            uStack_40 = uStack_30;
            uStack_3c = uStack_2c;
            uStack_38 = uStack_28;
          }
          uVar11 = uStack_40 & 0x7fffffff;
          iVar4 = FUN_71ba2cf0(uVar11,0x7f800000);
          iVar5 = FUN_71ba0408(uVar11,0x7f800000);
          if (iVar5 == 0 && iVar4 == 0) {
            uVar11 = *(uint *)((uint)&uStack_40 | 4) & 0x7fffffff;
            iVar4 = FUN_71ba2cf0(uVar11,0x7f800000);
            iVar5 = FUN_71ba0408(uVar11,0x7f800000);
            if (iVar5 == 0 && iVar4 == 0) {
              uVar11 = *puVar10;
              uVar13 = uVar11 & 0x7fffffff;
              iVar4 = FUN_71ba2cf0(uVar13,0x7f800000);
              iVar5 = FUN_71ba0408(uVar13,0x7f800000);
              if (iVar5 == 0 && iVar4 == 0) {
                uVar11 = FUN_71ba0b38(uVar9,uVar11);
                *puVar10 = uVar11;
                puVar6 = *(uint **)(param_2 + 0x10);
                if (puVar6 < *(uint **)(param_2 + 0x14)) {
                  puVar12 = puVar6 + 3;
                  *puVar6 = uStack_40;
                  puVar6[1] = uStack_3c;
                  puVar6[2] = uStack_38;
                }
                else {
                  iVar5 = *(int *)(param_2 + 0xc);
                  iVar4 = (int)puVar6 - iVar5;
                  uVar11 = (iVar4 >> 2) * -0x55555555 + 1;
                  if (0x15555555 < uVar11) {
                    /* WARNING: Subroutine does not return */
                    FUN_7159d9b0((int *)(param_2 + 0xc));
                  }
                  iVar7 = (int)*(uint **)(param_2 + 0x14) - iVar5 >> 2;
                  if (uVar11 < (uint)(iVar7 * 0x55555556)) {
                    uVar11 = iVar7 * 0x55555556;
                  }
                  if (0xaaaaaa9 < (uint)(iVar7 * -0x55555555)) {
                    uVar11 = 0x15555555;
                  }
                  if (uVar11 == 0) {
                    iVar7 = 0;
                  }
                  else {
                    if (0x15555555 < uVar11) goto LAB_7159d724;
                    iVar7 = thunk_MwhHq(uVar11 * 0xc);
                  }
                  puVar6 = (uint *)(iVar7 + (iVar4 >> 2) * 4);
                  *puVar6 = uStack_40;
                  puVar6[1] = uStack_3c;
                  puVar6[2] = uStack_38;
                  imp___aeabi_memcpy4((int)puVar6 - iVar4,iVar5,iVar4);
                  puVar12 = puVar6 + 3;
                  *(int *)(param_2 + 0xc) = (int)puVar6 - iVar4;
                  *(uint **)(param_2 + 0x10) = puVar12;
                  *(uint *)(param_2 + 0x14) = iVar7 + uVar11 * 0xc;
                  if (iVar5 != 0) {
                    thunk_qNQrlu(iVar5);
                  }
                }
                *(uint **)(param_2 + 0x10) = puVar12;
              }
            }
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < *(int *)(pbVar2 + 4));
      }
    }
    FUN_715e28c8(&uStack_40,param_1,*puVar14);
    puVar10 = *(uint **)(param_2 + 0x1c);
    if (puVar10 < *(uint **)(param_2 + 0x20)) {
      puVar6 = puVar10 + 4;
      *puVar10 = uStack_40;
      puVar10[1] = uStack_3c;
      puVar10[2] = uStack_38;
      puVar10[3] = uStack_34;
    }
    else {
      iVar4 = *(int *)(param_2 + 0x18);
      iVar1 = (int)puVar10 - iVar4 >> 4;
      uVar11 = iVar1 + 1;
      if (0xfffffff < uVar11) {
        FUN_7159da18();
LAB_7159d724:
                    /* WARNING: Subroutine does not return */
        FUN_712f6cf0();
      }
      uVar8 = (int)*(uint **)(param_2 + 0x20) - iVar4;
      uVar13 = (int)uVar8 >> 3;
      if (uVar11 < uVar13) {
        uVar11 = uVar13;
      }
      if (0x7fffffef < uVar8) {
        uVar11 = 0xfffffff;
      }
      if (uVar11 == 0) {
        iVar5 = 0;
      }
      else {
        if (0xfffffff < uVar11) goto LAB_7159d724;
        iVar5 = thunk_MwhHq(uVar11 << 4);
      }
      puVar6 = (uint *)(iVar5 + iVar1 * 0x10);
      *puVar6 = uStack_40;
      puVar6[1] = uStack_3c;
      puVar6[2] = uStack_38;
      puVar6[3] = uStack_34;
      imp___aeabi_memcpy4(iVar5,iVar4,(int)puVar10 - iVar4);
      puVar6 = puVar6 + 4;
      *(int *)(param_2 + 0x18) = iVar5;
      *(uint **)(param_2 + 0x1c) = puVar6;
      *(uint *)(param_2 + 0x20) = iVar5 + uVar11 * 0x10;
      if (iVar4 != 0) {
        thunk_qNQrlu(iVar4);
      }
    }
    *(uint **)(param_2 + 0x1c) = puVar6;
  }
  return param_1;
}


// =========================================================================
// Function: FUN_7159d9b0
// Entry: 0x7159d9b0 | Size: 20 bytes
// =========================================================================

void FUN_7159d9b0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_7159da18
// Entry: 0x7159da18 | Size: 20 bytes
// =========================================================================

void FUN_7159da18(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_7159daac
// Entry: 0x7159daac | Size: 452 bytes
// =========================================================================

void FUN_7159daac(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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
  
  uVar1 = param_3[1];
  uVar10 = *param_2;
  uVar9 = param_2[1];
  uVar11 = param_2[2];
  uVar7 = param_2[3];
  uVar12 = *param_3;
  uVar8 = param_3[2];
  uVar2 = FUN_71ba21e8(uVar1,uVar11);
  uVar3 = FUN_71ba21e8(uVar9,uVar8);
  uVar2 = FUN_71ba240c(uVar3,uVar2);
  uVar2 = FUN_71ba0b38(uVar2,uVar2);
  uVar3 = FUN_71ba21e8(uVar8,uVar10);
  uVar4 = FUN_71ba21e8(uVar11,uVar12);
  uVar3 = FUN_71ba240c(uVar4,uVar3);
  uVar3 = FUN_71ba0b38(uVar3,uVar3);
  uVar4 = FUN_71ba21e8(uVar2,uVar9);
  uVar5 = FUN_71ba21e8(uVar10,uVar3);
  uVar4 = FUN_71ba240c(uVar5,uVar4);
  uVar5 = FUN_71ba21e8(uVar12,uVar9);
  uVar6 = FUN_71ba21e8(uVar10,uVar1);
  uVar5 = FUN_71ba240c(uVar6,uVar5);
  uVar5 = FUN_71ba0b38(uVar5,uVar5);
  uVar6 = FUN_71ba21e8(uVar7,uVar5);
  uVar6 = FUN_71ba0b38(uVar6,uVar8);
  uVar4 = FUN_71ba0b38(uVar6,uVar4);
  param_1[2] = uVar4;
  uVar4 = FUN_71ba21e8(uVar5,uVar10);
  uVar6 = FUN_71ba21e8(uVar11,uVar2);
  uVar4 = FUN_71ba240c(uVar6,uVar4);
  uVar6 = FUN_71ba21e8(uVar7,uVar3);
  uVar1 = FUN_71ba0b38(uVar6,uVar1);
  uVar1 = FUN_71ba0b38(uVar1,uVar4);
  param_1[1] = uVar1;
  uVar1 = FUN_71ba21e8(uVar3,uVar11);
  uVar3 = FUN_71ba21e8(uVar9,uVar5);
  uVar1 = FUN_71ba240c(uVar3,uVar1);
  uVar2 = FUN_71ba21e8(uVar7,uVar2);
  uVar2 = FUN_71ba0b38(uVar2,uVar12);
  uVar1 = FUN_71ba0b38(uVar2,uVar1);
  *param_1 = uVar1;
  return;
}


// =========================================================================
// Function: FUN_7159dfd0
// Entry: 0x7159dfd0 | Size: 260 bytes
// =========================================================================

int FUN_7159dfd0(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  
  piVar5 = (int *)param_2[2];
  iVar6 = *(int *)(param_1 + 0x48);
  if (piVar5 < (int *)param_2[3]) {
    *piVar5 = param_1;
    piVar9 = piVar5 + 2;
    piVar5[1] = iVar6;
  }
  else {
    iVar7 = param_2[1];
    iVar1 = (int)piVar5 - iVar7 >> 3;
    uVar8 = iVar1 + 1;
    if (0x1fffffff < uVar8) {
      FUN_7159e1b4();
LAB_7159e0d0:
                    /* WARNING: Subroutine does not return */
      FUN_712f6cf0();
    }
    uVar3 = param_2[3] - iVar7;
    uVar2 = (int)uVar3 >> 2;
    if (uVar8 < uVar2) {
      uVar8 = uVar2;
    }
    if (0x7ffffff7 < uVar3) {
      uVar8 = 0x1fffffff;
    }
    if (uVar8 == 0) {
      iVar4 = 0;
    }
    else {
      if (0x1fffffff < uVar8) goto LAB_7159e0d0;
      iVar4 = thunk_MwhHq(uVar8 << 3);
    }
    piVar9 = (int *)(iVar4 + iVar1 * 8);
    *piVar9 = param_1;
    piVar9[1] = iVar6;
    imp___aeabi_memcpy4(iVar4,iVar7,(int)piVar5 - iVar7);
    piVar9 = piVar9 + 2;
    param_2[1] = iVar4;
    param_2[2] = (int)piVar9;
    param_2[3] = iVar4 + uVar8 * 8;
    if (iVar7 != 0) {
      thunk_qNQrlu(iVar7);
    }
  }
  param_2[2] = (int)piVar9;
  if (*param_2 != param_1) {
    *(undefined **)(param_1 + 0x48) = &DAT_7159e198;
  }
  return param_1;
}


// =========================================================================
// Function: FUN_7159e1b4
// Entry: 0x7159e1b4 | Size: 20 bytes
// =========================================================================

void FUN_7159e1b4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_7159e21c
// Entry: 0x7159e21c | Size: 348 bytes
// =========================================================================

char * FUN_7159e21c(char *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  
  if (*param_1 == '\x01') {
    iVar6 = *(int *)(param_1 + 0x18);
    iVar4 = 1;
    if (iVar6 != 0) {
      iVar4 = *(int *)(iVar6 + 0x20);
    }
    if ((iVar6 != 0 && iVar4 != 0) && (iVar4 = *(int *)(iVar6 + 0x24), 0 < iVar4)) {
      iVar10 = 0;
      do {
        puVar8 = *(undefined4 **)(*(int *)(iVar6 + 0x20) + iVar10 * 4);
        if (puVar8 != (undefined4 *)0x0) {
          puVar5 = (undefined4 *)param_2[2];
          uVar9 = *puVar8;
          if (puVar5 < (undefined4 *)param_2[3]) {
            *puVar5 = puVar8;
            puVar5[1] = uVar9;
            puVar5 = puVar5 + 2;
          }
          else {
            iVar7 = param_2[1];
            iVar4 = (int)puVar5 - iVar7 >> 3;
            uVar12 = iVar4 + 1;
            if (0x1fffffff < uVar12) {
              FUN_7159e41c(param_2 + 1);
LAB_7159e374:
                    /* WARNING: Subroutine does not return */
              FUN_712f6cf0();
            }
            uVar2 = (int)param_2[3] - iVar7;
            uVar1 = (int)uVar2 >> 2;
            if (uVar12 < uVar1) {
              uVar12 = uVar1;
            }
            if (0x7ffffff7 < uVar2) {
              uVar12 = 0x1fffffff;
            }
            if (uVar12 == 0) {
              iVar3 = 0;
            }
            else {
              if (0x1fffffff < uVar12) goto LAB_7159e374;
              iVar3 = thunk_MwhHq(uVar12 << 3);
            }
            puVar11 = (undefined4 *)(iVar3 + iVar4 * 8);
            *puVar11 = puVar8;
            puVar11[1] = uVar9;
            imp___aeabi_memcpy4(iVar3,iVar7,(int)puVar5 - iVar7);
            puVar5 = puVar11 + 2;
            param_2[1] = iVar3;
            param_2[2] = puVar5;
            param_2[3] = iVar3 + uVar12 * 8;
            if (iVar7 != 0) {
              thunk_qNQrlu();
            }
          }
          param_2[2] = puVar5;
          *puVar8 = *param_2;
          iVar4 = *(int *)(iVar6 + 0x24);
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar4);
    }
  }
  return param_1;
}


// =========================================================================
// Function: FUN_7159e41c
// Entry: 0x7159e41c | Size: 20 bytes
// =========================================================================

void FUN_7159e41c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_7159e590
// Entry: 0x7159e590 | Size: 164 bytes
// =========================================================================

void FUN_7159e590(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = *param_1;
  *param_1 = param_2;
  if (iVar4 == 0) {
    return;
  }
  if ((*(byte *)(iVar4 + 0x954) & 1) != 0) {
    thunk_qNQrlu(*(undefined4 *)(iVar4 + 0x95c));
  }
  if ((*(byte *)(iVar4 + 0x948) & 1) != 0) {
    thunk_qNQrlu(*(undefined4 *)(iVar4 + 0x950));
  }
  FUN_714f15f4(iVar4 + 0xc);
  piVar5 = *(int **)(iVar4 + 8);
  if (piVar5 != (int *)0x0) {
    piVar3 = piVar5 + 1;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    DataMemoryBarrier(0xb);
    if (iVar2 == 0) {
      (**(code **)(*piVar5 + 8))(piVar5);
      thunk_xwzSFoU_qvDa_PehyVStzHlBOSkJhkBLR_tNCbTfLzAoZMkmnRt(piVar5);
    }
  }
  thunk_qNQrlu(iVar4);
  return;
}


// =========================================================================
// Function: FUN_7159ecd0
// Entry: 0x7159ecd0 | Size: 48 bytes
// =========================================================================

void FUN_7159ecd0(int param_1)

{
  if ((*(byte *)(param_1 + 0x48) & 1) != 0) {
    thunk_qNQrlu(*(undefined4 *)(param_1 + 0x50));
  }
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: FUN_7159ff3c
// Entry: 0x7159ff3c | Size: 20 bytes
// =========================================================================

void FUN_7159ff3c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_7159ffa4
// Entry: 0x7159ffa4 | Size: 280 bytes
// =========================================================================

undefined4 FUN_7159ffa4(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  bool bVar8;
  
  piVar5 = param_1 + 1;
  piVar1 = (int *)*piVar5;
  uVar7 = 0;
  if (piVar1 != (int *)0x0) {
    piVar3 = piVar5;
    piVar6 = piVar1;
    do {
      piVar4 = piVar6;
      if (piVar6[4] < *param_2) {
        piVar6 = piVar6 + 1;
        piVar4 = piVar3;
      }
      piVar3 = piVar4;
      piVar6 = (int *)*piVar6;
    } while (piVar6 != (int *)0x0);
    if ((piVar3 != piVar5) && (piVar3[4] <= *param_2)) {
      piVar5 = piVar3;
      piVar6 = (int *)piVar3[1];
      if ((int *)piVar3[1] == (int *)0x0) {
        do {
          piVar4 = (int *)piVar5[2];
          bVar8 = (int *)*piVar4 != piVar5;
          piVar5 = piVar4;
        } while (bVar8);
      }
      else {
        do {
          piVar4 = piVar6;
          piVar6 = (int *)*piVar4;
        } while ((int *)*piVar4 != (int *)0x0);
      }
      if ((int *)*param_1 == piVar3) {
        *param_1 = piVar4;
      }
      param_1[2] = param_1[2] + -1;
      FUN_71368054(piVar1,piVar3);
      piVar1 = (int *)piVar3[6];
      if (piVar1 != (int *)0x0) {
        piVar5 = piVar1 + 1;
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar5;
          bVar8 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar8);
        *piVar5 = iVar2 + -1;
        DataMemoryBarrier(0xb);
        if (iVar2 == 0) {
          (**(code **)(*piVar1 + 8))(piVar1);
          thunk_xwzSFoU_qvDa_PehyVStzHlBOSkJhkBLR_tNCbTfLzAoZMkmnRt(piVar1);
        }
      }
      thunk_qNQrlu(piVar3);
      uVar7 = 1;
    }
  }
  return uVar7;
}


// =========================================================================
// Function: FUN_715a0234
// Entry: 0x715a0234 | Size: 4 bytes
// =========================================================================

void FUN_715a0234(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x715a0250 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_715a0bf8
// Entry: 0x715a0bf8 | Size: 4680 bytes
// =========================================================================

void FUN_715a0bf8(int *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  int *piVar16;
  int *piVar17;
  uint uVar18;
  int iVar19;
  undefined4 *puVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  undefined4 uVar28;
  undefined4 *puVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  byte *pbVar34;
  undefined4 *puVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  uint uVar39;
  byte *pbVar40;
  bool bVar41;
  bool bVar42;
  undefined4 *puStack_38;
  int *piStack_34;
  int *piStack_30;
  int iStack_2c;
  int *piStack_28;
  
  piVar16 = (int *)*param_1;
  iVar31 = *piVar16;
  *param_1 = (int)(piVar16 + 1);
  iVar21 = piVar16[1];
  *param_1 = (int)(piVar16 + 2);
  iVar22 = piVar16[2];
  *param_1 = (int)(piVar16 + 3);
  iVar36 = piVar16[3];
  *param_1 = (int)(piVar16 + 4);
  iVar38 = piVar16[4];
  *param_1 = (int)(piVar16 + 5);
  FUN_71593218(&puStack_38,iVar31);
  piVar16 = piStack_34;
  puVar29 = puStack_38;
  if (piStack_34 != (int *)0x0) {
    piVar17 = piStack_34 + 1;
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar17;
      bVar41 = (bool)hasExclusiveAccess(piVar17);
    } while (!bVar41);
    *piVar17 = iVar6 + -1;
    DataMemoryBarrier(0xb);
    if (iVar6 == 0) {
      (**(code **)(*piStack_34 + 8))(piStack_34);
      thunk_xwzSFoU_qvDa_PehyVStzHlBOSkJhkBLR_tNCbTfLzAoZMkmnRt(piVar16);
    }
  }
  if (puVar29 == (undefined4 *)0x0) {
    FUN_71593218(&puStack_38,iVar31);
    if (puStack_38 != (undefined4 *)0x0) {
      piVar16 = puStack_38 + 0x17;
      DataMemoryBarrier(0xb);
      do {
        bVar41 = (bool)hasExclusiveAccess(piVar16);
      } while (!bVar41);
      *piVar16 = *piVar16 + -1;
      DataMemoryBarrier(0xb);
    }
    if (piStack_34 != (int *)0x0) {
      piVar16 = piStack_34 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar21 = *piVar16;
        bVar41 = (bool)hasExclusiveAccess(piVar16);
      } while (!bVar41);
      *piVar16 = iVar21 + -1;
      DataMemoryBarrier(0xb);
      if (iVar21 == 0) {
        (**(code **)(*piStack_34 + 8))(piStack_34);
        thunk_xwzSFoU_qvDa_PehyVStzHlBOSkJhkBLR_tNCbTfLzAoZMkmnRt(piStack_34);
      }
    }
    DataMemoryBarrier(0xb);
    do {
      bVar41 = (bool)hasExclusiveAccess(&DAT_711a3a68);
      iVar21 = DAT_711a3a68 + -1;
    } while (!bVar41);
    goto LAB_715a0d78;
  }
  if ((int)DAT_700c3fc0 < 0) {
    iVar6 = imp_glGetString(0x1f02);
    if (iVar6 == 0) {
      DAT_700c3fc0 = 0;
    }
    else {
      iVar6 = imp_strstr(iVar6,s_OpenGL_ES_3_70070873);
      DAT_700c3fc0 = (uint)(iVar6 != 0);
    }
  }
  if ((DAT_700c3fc0 == 1) && (iVar6 = FUN_715a6090(iVar31,iVar36,iVar38), iVar6 != 0)) {
    FUN_71593218(&puStack_38,iVar31);
    puVar29 = puStack_38;
    if (puStack_38 != (undefined4 *)0x0) {
      thunk_cfqspBX_JrdDvACwYrAyrngjQ(puStack_38);
      puStack_38[10] = 0;
      puStack_38[9] = 0;
      puStack_38[7] = puStack_38[6];
      puStack_38[0xb] = puStack_38[0xb] + 1;
      thunk_QgduklVhdVlmSiqzGQeutncbrNj(puVar29);
    }
    piVar16 = piStack_34;
    if (piStack_34 != (int *)0x0) {
      piVar17 = piStack_34 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar21 = *piVar17;
        bVar41 = (bool)hasExclusiveAccess(piVar17);
      } while (!bVar41);
      *piVar17 = iVar21 + -1;
      DataMemoryBarrier(0xb);
      if (iVar21 == 0) {
        (**(code **)(*piStack_34 + 8))(piStack_34);
        thunk_xwzSFoU_qvDa_PehyVStzHlBOSkJhkBLR_tNCbTfLzAoZMkmnRt(piVar16);
      }
    }
    FUN_71593218(&puStack_38,iVar31);
    piVar16 = piStack_34;
    if (puStack_38 != (undefined4 *)0x0) {
      piVar17 = puStack_38 + 0x17;
      DataMemoryBarrier(0xb);
      do {
        bVar41 = (bool)hasExclusiveAccess(piVar17);
      } while (!bVar41);
      *piVar17 = *piVar17 + -1;
      DataMemoryBarrier(0xb);
    }
    if (piStack_34 != (int *)0x0) {
      piVar17 = piStack_34 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar21 = *piVar17;
        bVar41 = (bool)hasExclusiveAccess(piVar17);
      } while (!bVar41);
      *piVar17 = iVar21 + -1;
      DataMemoryBarrier(0xb);
      if (iVar21 == 0) {
        (**(code **)(*piStack_34 + 8))(piStack_34);
        thunk_xwzSFoU_qvDa_PehyVStzHlBOSkJhkBLR_tNCbTfLzAoZMkmnRt(piVar16);
      }
    }
    DataMemoryBarrier(0xb);
    do {
      iVar21 = DAT_711a3a68 + -1;
      bVar41 = (bool)hasExclusiveAccess(&DAT_711a3a68);
    } while (!bVar41);
    DataMemoryBarrier(0xb);
    if (DAT_711a3aac == (undefined4 *)0x0) {
      DAT_711a3a68 = iVar21;
      return;
    }
    puVar29 = &DAT_711a3aac;
    puVar7 = DAT_711a3aac;
    do {
      puVar8 = puVar7;
      if ((int)puVar7[4] < iVar31) {
        puVar7 = puVar7 + 1;
        puVar8 = puVar29;
      }
      puVar29 = puVar8;
      puVar7 = (undefined4 *)*puVar7;
    } while (puVar7 != (undefined4 *)0x0);
    if ((undefined4 **)puVar29 == &DAT_711a3aac) {
      DAT_711a3a68 = iVar21;
      return;
    }
    if (iVar31 < (int)puVar29[4]) {
      DAT_711a3a68 = iVar21;
      return;
    }
    iVar22 = puVar29[9];
    bVar41 = iVar22 == 0;
    if (bVar41) {
      iVar22 = puVar29[0xc];
    }
    if (!bVar41 || iVar22 != 0) {
      DAT_711a3a68 = iVar21;
      return;
    }
    DAT_711a3a68 = iVar21;
    FUN_715a35a0(puVar29 + 5);
    puVar7 = puVar29;
    puVar8 = (undefined4 *)puVar29[1];
    if ((undefined4 *)puVar29[1] == (undefined4 *)0x0) {
      do {
        puVar20 = (undefined4 *)puVar7[2];
        bVar41 = (undefined4 *)*puVar20 != puVar7;
        puVar7 = puVar20;
      } while (bVar41);
    }
    else {
      do {
        puVar20 = puVar8;
        puVar8 = (undefined4 *)*puVar20;
      } while ((undefined4 *)*puVar20 != (undefined4 *)0x0);
    }
    if (DAT_711a3aa8 == puVar29) {
      DAT_711a3aa8 = puVar20;
    }
    DAT_711a3ab0 = DAT_711a3ab0 + -1;
    FUN_71368054(DAT_711a3aac,puVar29);
    if (puVar29[0x10] != 0) {
      puVar29[0x11] = puVar29[0x10];
      thunk_qNQrlu();
    }
    goto LAB_715a174c;
  }
  puVar29 = &DAT_711a3aac;
  puVar7 = DAT_711a3aac;
  while (puVar8 = puVar29, puVar7 != (undefined4 *)0x0) {
    while (puVar29 = puVar7, (int)puVar29[4] <= iVar31) {
      if (iVar31 <= (int)puVar29[4]) goto LAB_715a1040;
      puVar7 = (undefined4 *)puVar29[1];
      if ((undefined4 *)puVar29[1] == (undefined4 *)0x0) {
        puVar8 = puVar29 + 1;
        goto LAB_715a0fdc;
      }
    }
    puVar7 = (undefined4 *)*puVar29;
  }
LAB_715a0fdc:
  puVar7 = (undefined4 *)thunk_MwhHq(0x4c);
  puVar7[4] = iVar31;
  imp___aeabi_memclr4(puVar7 + 5,0x38);
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7[2] = puVar29;
  *puVar8 = puVar7;
  puVar29 = puVar7;
  if ((undefined4 *)*DAT_711a3aa8 != (undefined4 *)0x0) {
    puVar29 = (undefined4 *)*puVar8;
    DAT_711a3aa8 = (undefined4 *)*DAT_711a3aa8;
  }
  FUN_712f807c(DAT_711a3aac,puVar29);
  DAT_711a3ab0 = DAT_711a3ab0 + 1;
  puVar29 = puVar7;
LAB_715a1040:
  if (0x7fffffff < DAT_700c3fc0) {
    iVar6 = imp_glGetString(0x1f02);
    if (iVar6 == 0) {
      DAT_700c3fc0 = 0;
    }
    else {
      iVar6 = imp_strstr(iVar6,s_OpenGL_ES_3_70070873);
      DAT_700c3fc0 = (uint)(iVar6 != 0);
    }
  }
  if (DAT_700c3fc0 != 1) {
    puVar7 = (undefined4 *)0x0;
    piStack_30 = (int *)0x0;
    piStack_34 = (int *)0x0;
    puStack_38 = (undefined4 *)0x0;
    iVar6 = iVar21 * iVar22 * 4;
    if (iVar6 != 0) {
      if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_7153a130(&puStack_38);
      }
      puVar7 = (undefined4 *)thunk_MwhHq(iVar6);
      puStack_38 = puVar7;
      piStack_30 = puVar7 + iVar21 * iVar22;
      imp___aeabi_memclr(puVar7,iVar6);
      piStack_34 = puVar7 + iVar21 * iVar22;
    }
    imp_glReadPixels(0,0,iVar21,iVar22,0x1908,0x1401,puVar7);
    piVar16 = puVar29 + 0x10;
    iVar23 = *piVar16;
    puVar29[5] = iVar36;
    iVar6 = puVar29[0x11];
    puVar29[6] = iVar38;
    uVar25 = iVar6 - iVar23;
    uVar27 = iVar36 * iVar38 * 4;
    if (uVar25 < (uint)(iVar36 * iVar38 * 4)) {
      uVar18 = uVar27 - uVar25;
      if ((uint)(puVar29[0x12] - iVar6) < uVar18) {
        if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_7153a130(piVar16);
        }
        uVar9 = puVar29[0x12] - iVar23;
        uVar39 = uVar27;
        if (uVar27 < uVar9 * 2) {
          uVar39 = uVar9 * 2;
        }
        if (0x3ffffffe < uVar9) {
          uVar39 = 0x7fffffff;
        }
        iVar6 = thunk_MwhHq(uVar39);
        imp___aeabi_memclr(iVar6 + uVar25,uVar18);
        imp___aeabi_memcpy(iVar6,iVar23,uVar25);
        puVar29[0x10] = iVar6;
        puVar29[0x11] = iVar6 + uVar27;
        puVar29[0x12] = iVar6 + uVar39;
        if (iVar23 != 0) {
          thunk_qNQrlu(iVar23);
        }
      }
      else {
        imp___aeabi_memclr(iVar6);
        iVar6 = iVar6 + uVar18;
LAB_715a1478:
        puVar29[0x11] = iVar6;
      }
    }
    else if (uVar27 < uVar25) {
      iVar6 = iVar23 + uVar27;
      goto LAB_715a1478;
    }
    if (0 < iVar38) {
      iVar6 = 0;
      do {
        iVar10 = FUN_71ba0440(iVar6 * iVar22,iVar38);
        iVar11 = iVar6 + 1;
        iVar23 = FUN_71ba0440(iVar11 * iVar22,iVar38);
        if (iVar23 < iVar10 + 1) {
          iVar23 = iVar10 + 1;
        }
        if (0 < iVar36) {
          iVar32 = 0;
          do {
            iVar12 = FUN_71ba0440(iVar32 * iVar21,iVar36);
            iVar13 = iVar32 + 1;
            iVar14 = FUN_71ba0440(iVar13 * iVar21,iVar36);
            if (iVar14 < iVar12 + 1) {
              iVar14 = iVar12 + 1;
            }
            pbVar40 = (byte *)((int)puVar7 + (iVar21 * iVar10 + iVar12) * 4 + 1);
            iVar30 = 0;
            iVar33 = 0;
            iVar37 = 0;
            iVar24 = 0;
            iVar19 = iVar14 - iVar12;
            pbVar34 = pbVar40;
            iVar26 = iVar10;
            do {
              do {
                iVar19 = iVar19 + -1;
                iVar24 = iVar24 + (uint)pbVar40[-1];
                pbVar1 = pbVar40 + 2;
                iVar37 = iVar37 + (uint)*pbVar40;
                iVar33 = iVar33 + (uint)pbVar40[1];
                pbVar40 = pbVar40 + 4;
                iVar30 = iVar30 + (uint)*pbVar1;
              } while (iVar19 != 0);
              iVar26 = iVar26 + 1;
              pbVar40 = pbVar34 + iVar21 * 4;
              iVar19 = iVar14 - iVar12;
              pbVar34 = pbVar40;
            } while (iVar26 != iVar23);
            uVar27 = (iVar14 - iVar12) * (iVar23 - iVar10);
            bVar2 = FUN_71ba0484(iVar24 + (uVar27 >> 1),uVar27);
            bVar3 = FUN_71ba0484(iVar33 + (uVar27 >> 1),uVar27);
            pbVar34 = (byte *)(*piVar16 + (iVar32 + iVar6 * iVar36) * 4);
            *pbVar34 = bVar2;
            pbVar34[2] = bVar3;
            bVar4 = FUN_71ba0484(iVar37 + (uVar27 >> 1),uVar27);
            pbVar34[1] = bVar4;
            bVar5 = FUN_71ba0484(iVar30 + (uVar27 >> 1),uVar27);
            if (bVar2 < bVar5) {
              bVar2 = bVar5;
            }
            if (bVar2 <= bVar4) {
              bVar2 = bVar4;
            }
            if (bVar2 <= bVar3) {
              bVar2 = bVar3;
            }
            pbVar34[3] = bVar2;
            iVar32 = iVar13;
          } while (iVar13 != iVar36);
        }
        iVar6 = iVar11;
      } while (iVar11 != iVar38);
    }
    FUN_715a31c0(iVar31,puVar29 + 5);
    FUN_71593218(&iStack_2c,iVar31);
    if (iStack_2c != 0) {
      piVar16 = (int *)(iStack_2c + 0x5c);
      DataMemoryBarrier(0xb);
      do {
        bVar41 = (bool)hasExclusiveAccess(piVar16);
      } while (!bVar41);
      *piVar16 = *piVar16 + -1;
      DataMemoryBarrier(0xb);
    }
    if (piStack_28 != (int *)0x0) {
      piVar16 = piStack_28 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar21 = *piVar16;
        bVar41 = (bool)hasExclusiveAccess(piVar16);
      } while (!bVar41);
      *piVar16 = iVar21 + -1;
      DataMemoryBarrier(0xb);
      if (iVar21 == 0) {
        (**(code **)(*piStack_28 + 8))(piStack_28);
        thunk_xwzSFoU_qvDa_PehyVStzHlBOSkJhkBLR_tNCbTfLzAoZMkmnRt(piStack_28);
      }
    }
    DataMemoryBarrier(0xb);
    do {
      iVar21 = DAT_711a3a68 + -1;
      bVar41 = (bool)hasExclusiveAccess(&DAT_711a3a68);
    } while (!bVar41);
    DataMemoryBarrier(0xb);
    puVar29 = puStack_38;
    DAT_711a3a68 = iVar21;
    if (puStack_38 == (undefined4 *)0x0) {
      return;
    }
LAB_715a174c:
    thunk_qNQrlu(puVar29);
    return;
  }
  if (*(char *)(puVar29 + 7) == '\0') {
LAB_715a10c0:
    if (puVar29[9] != 0) {
      FUN_71593218(&puStack_38,iVar31);
      piVar16 = piStack_34;
      if (puStack_38 != (undefined4 *)0x0) {
        piVar17 = puStack_38 + 0x17;
        DataMemoryBarrier(0xb);
        do {
          bVar41 = (bool)hasExclusiveAccess(piVar17);
        } while (!bVar41);
        *piVar17 = *piVar17 + -1;
        DataMemoryBarrier(0xb);
      }
      if (piStack_34 != (int *)0x0) {
        piVar17 = piStack_34 + 1;
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar17;
          bVar41 = (bool)hasExclusiveAccess(piVar17);
        } while (!bVar41);
        *piVar17 = iVar6 + -1;
        DataMemoryBarrier(0xb);
        if (iVar6 == 0) {
          (**(code **)(*piStack_34 + 8))(piStack_34);
          thunk_xwzSFoU_qvDa_PehyVStzHlBOSkJhkBLR_tNCbTfLzAoZMkmnRt(piVar16);
        }
      }
      DataMemoryBarrier(0xb);
      do {
        bVar41 = (bool)hasExclusiveAccess(&DAT_711a3a68);
      } while (!bVar41);
      DataMemoryBarrier(0xb);
      DAT_711a3a68 = DAT_711a3a68 + -1;
    }
    if (puVar29[0xc] != 0) {
      FUN_71593218(&puStack_38,iVar31);
      piVar16 = piStack_34;
      if (puStack_38 != (undefined4 *)0x0) {
        piVar17 = puStack_38 + 0x17;
        DataMemoryBarrier(0xb);
        do {
          bVar41 = (bool)hasExclusiveAccess(piVar17);
        } while (!bVar41);
        *piVar17 = *piVar17 + -1;
        DataMemoryBarrier(0xb);
      }
      if (piStack_34 != (int *)0x0) {
        piVar17 = piStack_34 + 1;
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar17;
          bVar41 = (bool)hasExclusiveAccess(piVar17);
        } while (!bVar41);
        *piVar17 = iVar6 + -1;
        DataMemoryBarrier(0xb);
        if (iVar6 == 0) {
          (**(code **)(*piStack_34 + 8))(piStack_34);
          thunk_xwzSFoU_qvDa_PehyVStzHlBOSkJhkBLR_tNCbTfLzAoZMkmnRt(piVar16);
        }
      }
      DataMemoryBarrier(0xb);
      do {
        bVar41 = (bool)hasExclusiveAccess(&DAT_711a3a68);
      } while (!bVar41);
      DataMemoryBarrier(0xb);
      DAT_711a3a68 = DAT_711a3a68 + -1;
    }
    FUN_715a35a0(puVar29 + 5);
    puVar7 = &DAT_711a3ab8;
    puVar8 = DAT_711a3ab8;
    while (puVar20 = puVar7, puVar8 != (undefined4 *)0x0) {
      while (puVar7 = puVar8, (int)puVar7[4] <= iVar36) {
        if (iVar36 <= (int)puVar7[4]) {
          if (iVar38 < (int)puVar7[5]) break;
          if (iVar38 <= (int)puVar7[5]) goto LAB_715a12f4;
        }
        puVar8 = (undefined4 *)puVar7[1];
        if ((undefined4 *)puVar7[1] == (undefined4 *)0x0) {
          puVar20 = puVar7 + 1;
          goto LAB_715a1288;
        }
      }
      puVar8 = (undefined4 *)*puVar7;
    }
LAB_715a1288:
    puVar8 = (undefined4 *)thunk_MwhHq(0x24);
    puVar8[4] = iVar36;
    puVar8[5] = iVar38;
    puVar8[6] = 0;
    puVar8[7] = 0;
    puVar8[8] = 0;
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = puVar7;
    *puVar20 = puVar8;
    puVar7 = puVar8;
    if ((undefined4 *)*DAT_711a3ab4 != (undefined4 *)0x0) {
      puVar7 = (undefined4 *)*puVar20;
      DAT_711a3ab4 = (undefined4 *)*DAT_711a3ab4;
    }
    FUN_712f807c(DAT_711a3ab8,puVar7);
    DAT_711a3abc = DAT_711a3abc + 1;
    puVar7 = puVar8;
LAB_715a12f4:
    piVar16 = puVar7 + 7;
    if (*piVar16 == 0) {
      piVar17 = puVar7 + 6;
      puStack_38 = (undefined4 *)0x0;
      iStack_2c = 0;
      imp_glGetIntegerv(0x8069,&puStack_38);
      imp_glGetIntegerv(0x8ca6,&iStack_2c);
      imp_glGenTextures(1,piVar17);
      imp_glBindTexture(0xde1,*piVar17);
      imp_glTexImage2D(0xde1,0,0x8058,iVar36,iVar38,0,0x1908,0x1401,0);
      imp_glTexParameteri(0xde1,0x2801,0x2600);
      imp_glTexParameteri(0xde1,0x2800,0x2600);
      imp_glTexParameteri(0xde1,0x2802,0x812f);
      imp_glTexParameteri(0xde1,0x2803,0x812f);
      imp_glBindTexture(0xde1,puStack_38);
      imp_glGenFramebuffers(1,piVar16);
      imp_glBindFramebuffer(0x8d40,*piVar16);
      imp_glFramebufferTexture2D(0x8d40,0x8ce0,0xde1,*piVar17,0);
      iVar6 = imp_glCheckFramebufferStatus(0x8d40);
      imp_glBindFramebuffer(0x8d40,iStack_2c);
      if (iVar6 != 0x8cd5) {
        if (*piVar16 != 0) {
          imp_glDeleteFramebuffers(1,piVar16);
        }
        if (*piVar17 != 0) {
          imp_glDeleteTextures(1,piVar17);
        }
        puVar7[6] = 0;
        puVar7[7] = 0;
        puVar7[8] = 0;
        if (DAT_711a3ab8 != (undefined4 *)0x0) {
          puVar29 = DAT_711a3ab8;
          puVar7 = &DAT_711a3ab8;
          do {
            if ((int)puVar29[4] < iVar36) {
              puVar29 = puVar29 + 1;
              puVar8 = puVar7;
            }
            else {
              puVar8 = puVar29;
              if (((int)puVar29[4] <= iVar36) && ((int)puVar29[5] < iVar38)) {
                puVar29 = puVar29 + 1;
                puVar8 = puVar7;
              }
            }
            puVar29 = (undefined4 *)*puVar29;
            puVar7 = puVar8;
          } while (puVar29 != (undefined4 *)0x0);
          if ((undefined4 **)puVar8 != &DAT_711a3ab8) {
            iVar22 = puVar8[4];
            bVar42 = SBORROW4(iVar22,iVar36);
            iVar21 = iVar22 - iVar36;
            bVar41 = iVar22 == iVar36;
            if (iVar22 <= iVar36) {
              if (iVar36 <= iVar22) {
                iVar22 = puVar8[5];
                bVar42 = SBORROW4(iVar22,iVar38);
                iVar21 = iVar22 - iVar38;
                bVar41 = iVar22 == iVar38;
              }
              if (bVar41 || iVar21 < 0 != bVar42) {
                puVar29 = puVar8;
                puVar7 = (undefined4 *)puVar8[1];
                if ((undefined4 *)puVar8[1] == (undefined4 *)0x0) {
                  do {
                    puVar20 = (undefined4 *)puVar29[2];
                    bVar41 = (undefined4 *)*puVar20 != puVar29;
                    puVar29 = puVar20;
                  } while (bVar41);
                }
                else {
                  do {
                    puVar20 = puVar7;
                    puVar7 = (undefined4 *)*puVar20;
                  } while ((undefined4 *)*puVar20 != (undefined4 *)0x0);
                }
                if (DAT_711a3ab4 == puVar8) {
                  DAT_711a3ab4 = puVar20;
                }
                DAT_711a3abc = DAT_711a3abc + -1;
                FUN_71368054(DAT_711a3ab8,puVar8);
                thunk_qNQrlu(puVar8);
              }
            }
          }
        }
        FUN_71593218(&puStack_38,iVar31);
        if (puStack_38 != (undefined4 *)0x0) {
          piVar16 = puStack_38 + 0x17;
          DataMemoryBarrier(0xb);
          do {
            bVar41 = (bool)hasExclusiveAccess(piVar16);
          } while (!bVar41);
          *piVar16 = *piVar16 + -1;
          DataMemoryBarrier(0xb);
        }
        if (piStack_34 != (int *)0x0) {
          piVar16 = piStack_34 + 1;
          DataMemoryBarrier(0xb);
          do {
            iVar21 = *piVar16;
            bVar41 = (bool)hasExclusiveAccess(piVar16);
          } while (!bVar41);
          *piVar16 = iVar21 + -1;
          DataMemoryBarrier(0xb);
          if (iVar21 == 0) {
            (**(code **)(*piStack_34 + 8))(piStack_34);
            thunk_xwzSFoU_qvDa_PehyVStzHlBOSkJhkBLR_tNCbTfLzAoZMkmnRt(piStack_34);
          }
        }
        DataMemoryBarrier(0xb);
        do {
          bVar41 = (bool)hasExclusiveAccess(&DAT_711a3a68);
          iVar21 = DAT_711a3a68 + -1;
        } while (!bVar41);
        goto LAB_715a0d78;
      }
      puVar7[8] = 1;
    }
    else {
      puVar7[8] = puVar7[8] + 1;
    }
    puVar29[5] = iVar36;
    *(undefined1 *)(puVar29 + 7) = 1;
    puVar29[6] = iVar38;
    imp_glGenBuffers(1,puVar29 + 8);
    imp_glBindBuffer(0x88eb,puVar29[8]);
    iVar6 = iVar36 * iVar38 * 4;
    imp_glBufferData(0x88eb,iVar6,0,0x88e1);
    imp_glGenBuffers(1,puVar29 + 0xb);
    imp_glBindBuffer(0x88eb,puVar29[0xb]);
    imp_glBufferData(0x88eb,iVar6,0,0x88e1);
    imp_glBindBuffer(0x88eb,0);
  }
  else {
    iVar6 = puVar29[5];
    bVar41 = iVar6 == iVar36;
    if (bVar41) {
      iVar6 = puVar29[6];
    }
    if (!bVar41 || iVar6 != iVar38) goto LAB_715a10c0;
  }
  if (puVar29[9] == 0) {
    puVar7 = puVar29 + 8;
  }
  else {
    if (puVar29[0xc] != 0) {
      FUN_71593218(&puStack_38,iVar31);
      if (puStack_38 != (undefined4 *)0x0) {
        piVar16 = puStack_38 + 0x17;
        DataMemoryBarrier(0xb);
        do {
          bVar41 = (bool)hasExclusiveAccess(piVar16);
        } while (!bVar41);
        *piVar16 = *piVar16 + -1;
        DataMemoryBarrier(0xb);
      }
      if (piStack_34 != (int *)0x0) {
        piVar16 = piStack_34 + 1;
        DataMemoryBarrier(0xb);
        do {
          iVar21 = *piVar16;
          bVar41 = (bool)hasExclusiveAccess(piVar16);
        } while (!bVar41);
        *piVar16 = iVar21 + -1;
        DataMemoryBarrier(0xb);
        if (iVar21 == 0) {
          (**(code **)(*piStack_34 + 8))(piStack_34);
          thunk_xwzSFoU_qvDa_PehyVStzHlBOSkJhkBLR_tNCbTfLzAoZMkmnRt(piStack_34);
        }
      }
      DataMemoryBarrier(0xb);
      do {
        bVar41 = (bool)hasExclusiveAccess(&DAT_711a3a68);
        iVar21 = DAT_711a3a68 + -1;
      } while (!bVar41);
LAB_715a0d78:
      DAT_711a3a68 = iVar21;
      DataMemoryBarrier(0xb);
      return;
    }
    puVar7 = puVar29 + 0xb;
  }
  puStack_38 = (undefined4 *)0x0;
  imp_glGetIntegerv(0x8ca6,&puStack_38);
  iVar31 = imp_glIsEnabled(0xc11);
  if (iVar31 != 0) {
    imp_glDisable(0xc11);
  }
  puVar8 = &DAT_711a3ab8;
  puVar20 = DAT_711a3ab8;
  do {
    puVar35 = puVar8;
    if (puVar20 == (undefined4 *)0x0) {
LAB_715a1a6c:
      puVar15 = (undefined4 *)thunk_MwhHq(0x24);
      puVar15[4] = iVar36;
      puVar15[5] = iVar38;
      puVar15[6] = 0;
      puVar15[7] = 0;
      puVar15[8] = 0;
      *puVar15 = 0;
      puVar15[1] = 0;
      puVar15[2] = puVar35;
      *puVar8 = puVar15;
      puVar20 = puVar15;
      if ((undefined4 *)*DAT_711a3ab4 != (undefined4 *)0x0) {
        puVar20 = (undefined4 *)*puVar8;
        DAT_711a3ab4 = (undefined4 *)*DAT_711a3ab4;
      }
      FUN_712f807c(DAT_711a3ab8,puVar20);
      DAT_711a3abc = DAT_711a3abc + 1;
LAB_715a1ae4:
      uVar28 = puVar15[7];
      imp_glBindFramebuffer(0x8ca9,uVar28);
      imp_glBlitFramebuffer(0,0,iVar21,iVar22,0,0,iVar36,iVar38,0x4000,0x2601);
      imp_glBindFramebuffer(0x8ca8,uVar28);
      imp_glBindBuffer(0x88eb,*puVar7);
      imp_glReadPixels(0,0,iVar36,iVar38,0x1908,0x1401,0);
      imp_glBindBuffer(0x88eb,0);
      uVar28 = imp_glFenceSync(0x9117,0);
      puVar7[1] = uVar28;
      iVar21 = puVar29[0xe];
      puVar29[0xe] = iVar21 + 1;
      puVar7[2] = iVar21 + 1;
      imp_glFlush();
      imp_glBindFramebuffer(0x8d40,puStack_38);
      if (iVar31 == 0) {
        return;
      }
      imp_glEnable(0xc11);
      return;
    }
    while (puVar15 = puVar20, (int)puVar15[4] <= iVar36) {
      if (iVar36 <= (int)puVar15[4]) {
        if (iVar38 < (int)puVar15[5]) break;
        if (iVar38 <= (int)puVar15[5]) goto LAB_715a1ae4;
      }
      puVar20 = (undefined4 *)puVar15[1];
      if ((undefined4 *)puVar15[1] == (undefined4 *)0x0) {
        puVar8 = puVar15 + 1;
        puVar35 = puVar15;
        goto LAB_715a1a6c;
      }
    }
    puVar20 = (undefined4 *)*puVar15;
    puVar8 = puVar15;
  } while( true );
}


// =========================================================================
// Function: FUN_715a2bdc
// Entry: 0x715a2bdc | Size: 916 bytes
// =========================================================================

void FUN_715a2bdc(void)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  int *piVar11;
  undefined4 *puVar12;
  uint uVar13;
  byte *pbVar14;
  undefined4 *puVar15;
  int iVar16;
  uint uVar17;
  byte bVar18;
  uint uVar19;
  bool bVar20;
  int iStack_2c;
  int *piStack_28;
  
  FUN_715a9920();
  puVar6 = DAT_711a3aa8;
  if (DAT_711a3aa8 == &DAT_711a3aac) {
    return;
  }
LAB_715a2c28:
  do {
    if (puVar6[9] == 0) {
      puVar15 = puVar6 + 0xb;
      if (puVar6[0xc] == 0) break;
    }
    else {
      puVar15 = puVar6 + 8;
      if ((puVar6[0xc] != 0) && ((uint)puVar6[0xd] < (uint)puVar6[10])) {
        puVar15 = puVar6 + 0xb;
      }
    }
    iVar7 = imp_glClientWaitSync(puVar15[1],0,0,0);
    if (iVar7 == 0x911b) break;
    iVar7 = puVar6[0x10];
    iVar16 = puVar6[0x11];
    uVar8 = puVar6[6] * puVar6[5];
    uVar17 = iVar16 - iVar7;
    uVar1 = uVar8 * 4;
    if (uVar17 < uVar8 * 4) {
      uVar13 = uVar1 - uVar17;
      if ((uint)(puVar6[0x12] - iVar16) < uVar13) {
        if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_7153a130(puVar6 + 0x10);
        }
        uVar9 = puVar6[0x12] - iVar7;
        uVar19 = uVar1;
        if (uVar1 < uVar9 * 2) {
          uVar19 = uVar9 * 2;
        }
        if (0x3ffffffe < uVar9) {
          uVar19 = 0x7fffffff;
        }
        iVar16 = thunk_MwhHq(uVar19);
        imp___aeabi_memclr(iVar16 + uVar17,uVar13);
        imp___aeabi_memcpy(iVar16,iVar7,uVar17);
        puVar6[0x10] = iVar16;
        puVar6[0x11] = iVar16 + uVar1;
        puVar6[0x12] = iVar16 + uVar19;
        if (iVar7 != 0) {
          thunk_qNQrlu(iVar7);
        }
      }
      else {
        imp___aeabi_memclr(iVar16);
        puVar6[0x11] = iVar16 + uVar13;
      }
    }
    else if (uVar1 < uVar17) {
      puVar6[0x11] = iVar7 + uVar1;
    }
    imp_glBindBuffer(0x88eb,*puVar15);
    pbVar10 = (byte *)imp_glMapBufferRange(0x88eb,0,uVar1,1);
    if (pbVar10 == (byte *)0x0) {
      imp_glBindBuffer(0x88eb,0);
      imp_glDeleteSync(puVar15[1]);
      puVar15[1] = 0;
    }
    else {
      uVar8 = uVar8 & 0x3fffffff;
      if (uVar8 != 0) {
        pbVar14 = (byte *)puVar6[0x10];
        do {
          *pbVar14 = *pbVar10;
          pbVar14[1] = pbVar10[1];
          bVar4 = pbVar10[2];
          pbVar14[2] = bVar4;
          bVar18 = *pbVar10;
          pbVar2 = pbVar10 + 3;
          pbVar3 = pbVar10 + 1;
          pbVar10 = pbVar10 + 4;
          if (bVar18 < *pbVar2) {
            bVar18 = *pbVar2;
          }
          if (bVar18 <= *pbVar3) {
            bVar18 = *pbVar3;
          }
          if (bVar18 <= bVar4) {
            bVar18 = bVar4;
          }
          uVar8 = uVar8 - 1;
          pbVar14[3] = bVar18;
          pbVar14 = pbVar14 + 4;
        } while (uVar8 != 0);
      }
      imp_glUnmapBuffer(0x88eb);
      imp_glBindBuffer(0x88eb,0);
      imp_glDeleteSync(puVar15[1]);
      puVar15[1] = 0;
      if ((uint)puVar6[0xf] < (uint)puVar15[2]) {
        puVar6[0xf] = puVar15[2];
        FUN_715a31c0(puVar6[4],puVar6 + 5);
      }
    }
    FUN_71593218(&iStack_2c,puVar6[4]);
    piVar5 = piStack_28;
    if (iStack_2c != 0) {
      piVar11 = (int *)(iStack_2c + 0x5c);
      DataMemoryBarrier(0xb);
      do {
        bVar20 = (bool)hasExclusiveAccess(piVar11);
      } while (!bVar20);
      *piVar11 = *piVar11 + -1;
      DataMemoryBarrier(0xb);
    }
    if (piStack_28 != (int *)0x0) {
      piVar11 = piStack_28 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar11;
        bVar20 = (bool)hasExclusiveAccess(piVar11);
      } while (!bVar20);
      *piVar11 = iVar7 + -1;
      DataMemoryBarrier(0xb);
      if (iVar7 == 0) {
        (**(code **)(*piStack_28 + 8))(piStack_28);
        thunk_xwzSFoU_qvDa_PehyVStzHlBOSkJhkBLR_tNCbTfLzAoZMkmnRt(piVar5);
      }
    }
    DataMemoryBarrier(0xb);
    do {
      bVar20 = (bool)hasExclusiveAccess(&DAT_711a3a68);
    } while (!bVar20);
    DataMemoryBarrier(0xb);
    DAT_711a3a68 = DAT_711a3a68 + -1;
  } while( true );
  puVar15 = (undefined4 *)puVar6[1];
  if ((undefined4 *)puVar6[1] == (undefined4 *)0x0) {
    do {
      puVar12 = (undefined4 *)puVar6[2];
      bVar20 = (undefined4 *)*puVar12 != puVar6;
      puVar6 = puVar12;
    } while (bVar20);
  }
  else {
    do {
      puVar12 = puVar15;
      puVar15 = (undefined4 *)*puVar12;
    } while ((undefined4 *)*puVar12 != (undefined4 *)0x0);
  }
  puVar6 = puVar12;
  if (puVar12 == &DAT_711a3aac) {
    return;
  }
  goto LAB_715a2c28;
}


// =========================================================================
// Function: FUN_715a31c0
// Entry: 0x715a31c0 | Size: 228 bytes
// =========================================================================

void FUN_715a31c0(undefined4 param_1,undefined4 *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iStack_18;
  int *piStack_14;
  
  FUN_71593218(&iStack_18,param_1);
  iVar2 = iStack_18;
  if (iStack_18 != 0) {
    thunk_cfqspBX_JrdDvACwYrAyrngjQ(iStack_18);
    uVar3 = *(undefined4 *)(iStack_18 + 0x18);
    *(undefined4 *)(iStack_18 + 0x18) = param_2[0xb];
    param_2[0xb] = uVar3;
    uVar3 = *(undefined4 *)(iStack_18 + 0x1c);
    *(undefined4 *)(iStack_18 + 0x1c) = param_2[0xc];
    param_2[0xc] = uVar3;
    uVar3 = *(undefined4 *)(iStack_18 + 0x20);
    *(undefined4 *)(iStack_18 + 0x20) = param_2[0xd];
    param_2[0xd] = uVar3;
    *(undefined4 *)(iStack_18 + 0x24) = *param_2;
    uVar3 = param_2[1];
    *(int *)(iStack_18 + 0x2c) = *(int *)(iStack_18 + 0x2c) + 1;
    *(undefined4 *)(iStack_18 + 0x28) = uVar3;
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(iVar2);
  }
  if (piStack_14 != (int *)0x0) {
    piVar4 = piStack_14 + 1;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar2 + -1;
    DataMemoryBarrier(0xb);
    if (iVar2 == 0) {
      (**(code **)(*piStack_14 + 8))(piStack_14);
      thunk_xwzSFoU_qvDa_PehyVStzHlBOSkJhkBLR_tNCbTfLzAoZMkmnRt(piStack_14);
      return;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_715a332c
// Entry: 0x715a332c | Size: 336 bytes
// =========================================================================

void FUN_715a332c(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = *(int *)*param_1;
  *param_1 = (int)((int *)*param_1 + 1);
  FUN_715a995c(iVar5);
  if (DAT_711a3aac != (undefined4 *)0x0) {
    puVar4 = &DAT_711a3aac;
    puVar2 = DAT_711a3aac;
    do {
      puVar1 = puVar2;
      if ((int)puVar2[4] < iVar5) {
        puVar2 = puVar2 + 1;
        puVar1 = puVar4;
      }
      puVar4 = puVar1;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
    if (((undefined4 **)puVar4 != &DAT_711a3aac) && ((int)puVar4[4] <= iVar5)) {
      if (puVar4[9] != 0) {
        DataMemoryBarrier(0xb);
        do {
          bVar6 = (bool)hasExclusiveAccess(&DAT_711a3a68);
        } while (!bVar6);
        DataMemoryBarrier(0xb);
        DAT_711a3a68 = DAT_711a3a68 + -1;
      }
      if (puVar4[0xc] != 0) {
        DataMemoryBarrier(0xb);
        do {
          bVar6 = (bool)hasExclusiveAccess(&DAT_711a3a68);
        } while (!bVar6);
        DataMemoryBarrier(0xb);
        DAT_711a3a68 = DAT_711a3a68 + -1;
      }
      FUN_715a35a0(puVar4 + 5);
      puVar2 = puVar4;
      puVar1 = (undefined4 *)puVar4[1];
      if ((undefined4 *)puVar4[1] == (undefined4 *)0x0) {
        do {
          puVar3 = (undefined4 *)puVar2[2];
          bVar6 = (undefined4 *)*puVar3 != puVar2;
          puVar2 = puVar3;
        } while (bVar6);
      }
      else {
        do {
          puVar3 = puVar1;
          puVar1 = (undefined4 *)*puVar3;
        } while ((undefined4 *)*puVar3 != (undefined4 *)0x0);
      }
      if (DAT_711a3aa8 == puVar4) {
        DAT_711a3aa8 = puVar3;
      }
      DAT_711a3ab0 = DAT_711a3ab0 + -1;
      FUN_71368054(DAT_711a3aac,puVar4);
      if (puVar4[0x10] != 0) {
        puVar4[0x11] = puVar4[0x10];
        thunk_qNQrlu();
      }
      thunk_qNQrlu(puVar4);
      return;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_715a35a0
// Entry: 0x715a35a0 | Size: 464 bytes
// =========================================================================

void FUN_715a35a0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  bool bVar9;
  bool bVar10;
  
  if (param_1[4] != 0) {
    imp_glDeleteSync();
  }
  if (param_1[3] != 0) {
    imp_glDeleteBuffers(1,param_1 + 3);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if (param_1[7] != 0) {
    imp_glDeleteSync();
  }
  if (param_1[6] != 0) {
    imp_glDeleteBuffers(1,param_1 + 6);
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  if (((char)param_1[2] != '\0') && (DAT_711a3ab8 != (undefined4 *)0x0)) {
    iVar2 = *param_1;
    iVar4 = param_1[1];
    puVar5 = DAT_711a3ab8;
    puVar8 = &DAT_711a3ab8;
    do {
      if ((int)puVar5[4] < iVar2) {
        puVar5 = puVar5 + 1;
        puVar7 = puVar8;
      }
      else {
        puVar7 = puVar5;
        if (((int)puVar5[4] <= iVar2) && ((int)puVar5[5] < iVar4)) {
          puVar5 = puVar5 + 1;
          puVar7 = puVar8;
        }
      }
      puVar5 = (undefined4 *)*puVar5;
      puVar8 = puVar7;
    } while (puVar5 != (undefined4 *)0x0);
    if ((undefined4 **)puVar7 != &DAT_711a3ab8) {
      iVar6 = puVar7[4];
      bVar10 = SBORROW4(iVar6,iVar2);
      iVar1 = iVar6 - iVar2;
      bVar9 = iVar6 == iVar2;
      if (iVar6 <= iVar2) {
        if (iVar2 <= iVar6) {
          iVar2 = puVar7[5];
          bVar10 = SBORROW4(iVar2,iVar4);
          iVar1 = iVar2 - iVar4;
          bVar9 = iVar2 == iVar4;
        }
        if ((bVar9 || iVar1 < 0 != bVar10) &&
           (iVar2 = puVar7[8], iVar4 = iVar2 + -1, puVar7[8] = iVar4, iVar4 == 0 || iVar2 < 1)) {
          if (puVar7[7] != 0) {
            imp_glDeleteFramebuffers(1);
          }
          if (puVar7[6] != 0) {
            imp_glDeleteTextures(1,puVar7 + 6);
          }
          puVar7[6] = 0;
          puVar7[7] = 0;
          puVar7[8] = 0;
          puVar5 = puVar7;
          puVar8 = (undefined4 *)puVar7[1];
          if ((undefined4 *)puVar7[1] == (undefined4 *)0x0) {
            do {
              puVar3 = (undefined4 *)puVar5[2];
              bVar9 = (undefined4 *)*puVar3 != puVar5;
              puVar5 = puVar3;
            } while (bVar9);
          }
          else {
            do {
              puVar3 = puVar8;
              puVar8 = (undefined4 *)*puVar3;
            } while ((undefined4 *)*puVar3 != (undefined4 *)0x0);
          }
          if (DAT_711a3ab4 == puVar7) {
            DAT_711a3ab4 = puVar3;
          }
          DAT_711a3abc = DAT_711a3abc + -1;
          FUN_71368054(DAT_711a3ab8,puVar7);
          thunk_qNQrlu(puVar7);
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}


// =========================================================================
// Function: FUN_715a38a8
// Entry: 0x715a38a8 | Size: 580 bytes
// =========================================================================

undefined4 FUN_715a38a8(undefined4 param_1,int *param_2,int *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  
  iVar2 = *param_2;
  iVar6 = iVar2;
  if (iVar2 < 0x201) {
    iVar6 = *param_3;
  }
  iVar10 = *param_3;
  if (0x200 < iVar6) {
    do {
      iVar9 = iVar10;
      iVar6 = (iVar9 + 1) / 2;
      iVar10 = 1;
      if (1 < iVar6) {
        iVar10 = iVar6;
      }
      iVar6 = (iVar2 + 1) / 2;
      iVar2 = 1;
      if (1 < iVar6) {
        iVar2 = iVar6;
      }
      puVar3 = (undefined4 *)param_4[1];
      if (puVar3 < (undefined4 *)param_4[2]) {
        puVar8 = puVar3 + 2;
        *puVar3 = 0;
        puVar3[1] = 0;
      }
      else {
        iVar7 = *param_4;
        iVar6 = (int)puVar3 - iVar7 >> 3;
        uVar11 = iVar6 + 1;
        if (0x1fffffff < uVar11) {
          FUN_715a598c(param_4);
LAB_715a3ae8:
                    /* WARNING: Subroutine does not return */
          FUN_712f6cf0();
        }
        uVar4 = param_4[2] - iVar7;
        uVar1 = (int)uVar4 >> 2;
        if (uVar11 < uVar1) {
          uVar11 = uVar1;
        }
        if (0x7ffffff7 < uVar4) {
          uVar11 = 0x1fffffff;
        }
        if (uVar11 == 0) {
          iVar5 = 0;
        }
        else {
          if (0x1fffffff < uVar11) goto LAB_715a3ae8;
          iVar5 = thunk_MwhHq(uVar11 << 3);
        }
        puVar8 = (undefined4 *)(iVar5 + iVar6 * 8);
        *puVar8 = 0;
        puVar8[1] = 0;
        imp___aeabi_memcpy4(iVar5,iVar7,(int)puVar3 - iVar7);
        puVar8 = puVar8 + 2;
        *param_4 = iVar5;
        param_4[1] = (int)puVar8;
        param_4[2] = iVar5 + uVar11 * 8;
        if (iVar7 != 0) {
          thunk_qNQrlu(iVar7);
        }
      }
      param_4[1] = (int)puVar8;
      imp_glGenTextures(1,puVar8 + -2);
      imp_glBindTexture(0xde1,puVar8[-2]);
      imp_glTexStorage2D(0xde1,1,0x8058,iVar2,iVar10);
      imp_glGenFramebuffers(1,puVar8 + -1);
      imp_glBindFramebuffer(0x8ca9,puVar8[-1]);
      imp_glFramebufferTexture2D(0x8ca9,0x8ce0,0xde1,puVar8[-2],0);
      iVar6 = imp_glCheckFramebufferStatus(0x8ca9);
      if (iVar6 != 0x8cd5) {
        return 0;
      }
      imp_glBindFramebuffer(0x8ca8,param_1);
      imp_glBlitFramebuffer(0,0,*param_2,*param_3,0,0,iVar2,iVar10,0x4000,0x2601);
      param_1 = *(undefined4 *)(param_4[1] + -4);
      *param_2 = iVar2;
      *param_3 = iVar10;
      iVar2 = *param_2;
    } while ((0x200 < iVar2) || (0x400 < iVar9));
  }
  return param_1;
}


// =========================================================================
// Function: FUN_715a3c8c
// Entry: 0x715a3c8c | Size: 308 bytes
// =========================================================================

void FUN_715a3c8c(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if (0 < param_3) {
    param_1 = param_1 + 3;
    iVar9 = -1;
    iVar5 = 0;
    iVar6 = -1;
    iVar1 = param_3;
    iVar8 = param_2;
    do {
      if (0 < param_2) {
        iVar7 = 0;
        do {
          if (0x80 < *(byte *)(param_1 + iVar7 * 4)) {
            if (iVar9 <= iVar5) {
              iVar9 = iVar5;
            }
            if (iVar5 < iVar1) {
              iVar1 = iVar5;
            }
            if (iVar6 <= iVar7) {
              iVar6 = iVar7;
            }
            if (iVar7 < iVar8) {
              iVar8 = iVar7;
            }
          }
          iVar7 = iVar7 + 1;
        } while (param_2 != iVar7);
      }
      iVar5 = iVar5 + 1;
      param_1 = param_1 + param_2 * 4;
    } while (iVar5 != param_3);
    if (-1 < iVar6) {
      uVar2 = FUN_71ba1b94();
      uVar3 = FUN_71ba1b94(param_3);
      uVar2 = FUN_71ba13e0(uVar2,uVar3);
      param_4[1] = uVar2;
      uVar2 = FUN_71ba1b94(iVar8);
      uVar4 = FUN_71ba1b94(param_2);
      uVar2 = FUN_71ba13e0(uVar2,uVar4);
      *param_4 = uVar2;
      uVar2 = FUN_71ba1b94(iVar9 + 1);
      uVar2 = FUN_71ba13e0(uVar2,uVar3);
      param_4[3] = uVar2;
      uVar2 = FUN_71ba1b94(iVar6 + 1);
      uVar2 = FUN_71ba13e0(uVar2,uVar4);
      param_4[2] = uVar2;
    }
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_715a3ef0
// Entry: 0x715a3ef0 | Size: 392 bytes
// =========================================================================

void FUN_715a3ef0(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int *piStack_34;
  int *piStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  
  iVar7 = 0;
  uStack_2c = 0;
  piStack_30 = (int *)0x0;
  piStack_34 = (int *)0x0;
  iStack_28 = param_3;
  iStack_24 = param_2;
  iVar4 = FUN_715a38a8(param_1,&iStack_24,&iStack_28,&piStack_34);
  if ((iVar4 != 0) || (piStack_34 == piStack_30)) {
    imp_glBindFramebuffer(0x8ca8,iVar4);
    imp_glBindBuffer(0x88eb,0);
    iVar3 = iStack_24;
    iVar2 = iStack_28;
    uStack_38 = 0;
    uStack_3c = 0;
    uStack_40 = 0;
    iVar4 = iStack_24 * iStack_28 * 4;
    if (iVar4 != 0) {
      if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_7153a130(&uStack_40);
      }
      iVar7 = thunk_MwhHq(iVar4);
      imp___aeabi_memclr(iVar7,iVar4);
    }
    imp_glReadPixels(0,0,iVar3,iVar2,0x1908,0x1401,iVar7);
    FUN_715a3c8c(iVar7,iVar3,iVar2,param_4);
    if (iVar7 != 0) {
      thunk_qNQrlu(iVar7);
    }
  }
  piVar1 = piStack_30;
  piVar8 = piStack_30;
  if (piStack_34 != piStack_30) {
    piVar6 = piStack_34 + 1;
    do {
      if (*piVar6 != 0) {
        imp_glDeleteFramebuffers(1,piVar6);
      }
      if (piVar6[-1] != 0) {
        imp_glDeleteTextures(1,piVar6 + -1);
      }
      piVar5 = piVar6 + 1;
      piVar6[-1] = 0;
      *piVar6 = 0;
      piVar6 = piVar6 + 2;
      piVar8 = piStack_34;
    } while (piVar5 != piVar1);
  }
  if (piVar8 != (int *)0x0) {
    piStack_30 = piVar8;
    thunk_qNQrlu(piVar8);
  }
  return;
}


// =========================================================================
// Function: FUN_715a4294
// Entry: 0x715a4294 | Size: 276 bytes
// =========================================================================

void FUN_715a4294(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_711a3ad0);
  puVar3 = &DAT_711a3ad8;
  puVar1 = DAT_711a3ad8;
  do {
    puVar4 = puVar3;
    if (puVar1 == (undefined4 *)0x0) {
LAB_715a430c:
      puVar2 = (undefined4 *)thunk_MwhHq(0x24);
      puVar2[4] = param_1;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[8] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = puVar3;
      *puVar4 = puVar2;
      puVar3 = puVar2;
      if ((int *)*DAT_711a3ad4 != (int *)0x0) {
        puVar3 = (undefined4 *)*puVar4;
        DAT_711a3ad4 = (int *)*DAT_711a3ad4;
      }
      FUN_712f807c(DAT_711a3ad8,puVar3);
      DAT_711a3adc = DAT_711a3adc + 1;
LAB_715a4374:
      puVar2[5] = *param_2;
      puVar2[6] = param_2[1];
      puVar2[7] = param_2[2];
      puVar2[8] = param_2[3];
      thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_711a3ad0);
      return;
    }
    while (puVar2 = puVar1, puVar3 = puVar2, (int)puVar2[4] <= param_1) {
      if (param_1 <= (int)puVar2[4]) goto LAB_715a4374;
      puVar1 = (undefined4 *)puVar2[1];
      if ((undefined4 *)puVar2[1] == (undefined4 *)0x0) {
        puVar4 = puVar2 + 1;
        goto LAB_715a430c;
      }
    }
    puVar1 = (undefined4 *)*puVar2;
  } while( true );
}


// =========================================================================
// Function: FUN_715a44b0
// Entry: 0x715a44b0 | Size: 1128 bytes
// =========================================================================

void FUN_715a44b0(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  int iStack_60;
  int *piStack_58;
  int *piStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  char cStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_2c;
  int iStack_28;
  
  puVar5 = (undefined4 *)*param_1;
  uVar11 = *puVar5;
  *param_1 = (int)(puVar5 + 1);
  iVar8 = puVar5[1];
  *param_1 = (int)(puVar5 + 2);
  iVar10 = puVar5[2];
  *param_1 = (int)(puVar5 + 3);
  uStack_34 = 0xbf800000;
  uStack_38 = 0xbf800000;
  uStack_3c = 0xbf800000;
  uStack_40 = 0xbf800000;
  cStack_44 = 0;
  uStack_48 = 0;
  uStack_4c = 0;
  iStack_2c = iVar10;
  iStack_28 = iVar8;
  imp_glGetIntegerv(0x8ca6,&uStack_4c);
  imp_glGetIntegerv(0x8069,&uStack_48);
  iVar3 = imp_glIsEnabled(0xc11);
  cStack_44 = (char)iVar3;
  if (iVar3 != 0) {
    imp_glDisable(0xc11);
  }
  if ((int)DAT_700c3fc0 < 0) {
    iVar3 = imp_glGetString(0x1f02);
    if (iVar3 == 0) {
      DAT_700c3fc0 = 0;
    }
    else {
      iVar3 = imp_strstr(iVar3,s_OpenGL_ES_3_70070873);
      DAT_700c3fc0 = (uint)(iVar3 != 0);
    }
  }
  if (DAT_700c3fc0 == 1) {
    uStack_50 = 0;
    piStack_54 = (int *)0x0;
    piStack_58 = (int *)0x0;
    iVar10 = FUN_715a38a8(uStack_4c,&iStack_28,&iStack_2c,&piStack_58);
    iVar8 = iStack_28;
    iVar3 = iStack_2c;
    piVar2 = piStack_54;
    if ((iVar10 == 0) && (piStack_58 != piStack_54)) {
      piVar7 = piStack_58 + 1;
      do {
        if (*piVar7 != 0) {
          imp_glDeleteFramebuffers(1,piVar7);
        }
        if (piVar7[-1] != 0) {
          imp_glDeleteTextures(1,piVar7 + -1);
        }
        piVar6 = piVar7 + 1;
        piVar7[-1] = 0;
        *piVar7 = 0;
        piVar7 = piVar7 + 2;
      } while (piVar6 != piVar2);
      piStack_54 = piStack_58;
      FUN_715a4294(uVar11,&uStack_40);
    }
    else {
      uStack_68 = 0;
      uStack_6c = 0;
      iStack_64 = iStack_28;
      iStack_60 = iStack_2c;
      uStack_70 = uVar11;
      imp_glGenBuffers(1,(uint)&uStack_70 | 4);
      imp_glBindBuffer(0x88eb,uStack_6c);
      imp_glBufferData(0x88eb,iVar8 * iVar3 * 4,0,0x88e1);
      imp_glBindFramebuffer(0x8ca8,iVar10);
      imp_glReadPixels(0,0,iVar8,iVar3,0x1908,0x1401,0);
      imp_glBindBuffer(0x88eb,0);
      uStack_68 = imp_glFenceSync(0x9117,0);
      piVar2 = piStack_54;
      if (piStack_58 != piStack_54) {
        piVar7 = piStack_58 + 1;
        do {
          if (*piVar7 != 0) {
            imp_glDeleteFramebuffers(1,piVar7);
          }
          if (piVar7[-1] != 0) {
            imp_glDeleteTextures(1,piVar7 + -1);
          }
          piVar6 = piVar7 + 1;
          piVar7[-1] = 0;
          *piVar7 = 0;
          piVar7 = piVar7 + 2;
        } while (piVar6 != piVar2);
      }
      iVar3 = DAT_711a3ac0;
      piStack_54 = piStack_58;
      if (DAT_711a3ac4 < DAT_711a3ac8) {
        *DAT_711a3ac4 = uStack_70;
        DAT_711a3ac4[1] = uStack_6c;
        DAT_711a3ac4[2] = uStack_68;
        DAT_711a3ac4[3] = iStack_64;
        DAT_711a3ac4[4] = iStack_60;
        puVar5 = DAT_711a3ac4 + 5;
      }
      else {
        iVar10 = (int)DAT_711a3ac4 - DAT_711a3ac0;
        iVar8 = iVar10 >> 2;
        uVar9 = iVar8 * -0x33333333 + 1;
        if (0xccccccc < uVar9) {
          FUN_715a5a9c(&DAT_711a3ac0);
LAB_715a4914:
                    /* WARNING: Subroutine does not return */
          FUN_712f6cf0();
        }
        iVar4 = (int)DAT_711a3ac8 - DAT_711a3ac0 >> 2;
        if (uVar9 < (uint)(iVar4 * -0x66666666)) {
          uVar9 = iVar4 * -0x66666666;
        }
        if (0x6666665 < (uint)(iVar4 * -0x33333333)) {
          uVar9 = 0xccccccc;
        }
        if (uVar9 == 0) {
          iVar4 = 0;
        }
        else {
          if (0xccccccc < uVar9) goto LAB_715a4914;
          iVar4 = thunk_MwhHq(uVar9 * 0x14);
        }
        puVar5 = (undefined4 *)(iVar4 + iVar8 * 4);
        *puVar5 = uStack_70;
        puVar5[1] = uStack_6c;
        puVar5[2] = uStack_68;
        puVar5[3] = iStack_64;
        puVar5[4] = iStack_60;
        iVar10 = (int)puVar5 - iVar10;
        imp___aeabi_memcpy4(iVar10,iVar3);
        puVar5 = puVar5 + 5;
        DAT_711a3ac8 = (undefined4 *)(iVar4 + uVar9 * 0x14);
        DAT_711a3ac0 = iVar10;
        if (iVar3 != 0) {
          DAT_711a3ac4 = puVar5;
          thunk_qNQrlu(iVar3);
        }
      }
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(0x711a3acc);
      } while (!bVar1);
      DataMemoryBarrier(0xb);
      DAT_711a3ac4 = puVar5;
      DAT_711a3acc = DAT_711a3acc + 1;
    }
    if (piStack_58 != (int *)0x0) {
      piStack_54 = piStack_58;
      thunk_qNQrlu();
    }
  }
  else {
    FUN_715a3ef0(uStack_4c,iVar8,iVar10,&uStack_40);
    FUN_715a4294(uVar11,&uStack_40);
  }
  imp_glBindTexture(0xde1,uStack_48);
  imp_glBindFramebuffer(0x8d40,uStack_4c);
  if (cStack_44 != '\0') {
    imp_glEnable(0xc11);
  }
  return;
}


// =========================================================================
// Function: FUN_715a4d78
// Entry: 0x715a4d78 | Size: 212 bytes
// =========================================================================

void FUN_715a4d78(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_1c = 0xbf800000;
  uStack_20 = 0xbf800000;
  uStack_24 = 0xbf800000;
  uStack_28 = 0xbf800000;
  iVar2 = param_1[3];
  iVar3 = param_1[4];
  imp_glBindBuffer(0x88eb,param_1[1]);
  iVar2 = imp_glMapBufferRange(0x88eb,0,iVar2 * iVar3 * 4,1);
  if (iVar2 != 0) {
    FUN_715a3c8c(iVar2,param_1[3],param_1[4],&uStack_28);
    imp_glUnmapBuffer(0x88eb);
  }
  imp_glBindBuffer(0x88eb,0);
  imp_glDeleteBuffers(1,param_1 + 1);
  imp_glDeleteSync(param_1[2]);
  FUN_715a4294(*param_1,&uStack_28);
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(0x711a3acc);
  } while (!bVar1);
  DAT_711a3acc = DAT_711a3acc + -1;
  DataMemoryBarrier(0xb);
  return;
}


// =========================================================================
// Function: FUN_715a4f64
// Entry: 0x715a4f64 | Size: 148 bytes
// =========================================================================

void FUN_715a4f64(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_711a3ac0;
  if (DAT_711a3ac0 != DAT_711a3ac4) {
    do {
      while( true ) {
        iVar1 = imp_glClientWaitSync(*(undefined4 *)(iVar2 + 8),0,0,0);
        iVar3 = iVar2 + 0x14;
        if (iVar1 == 0x911b) break;
        FUN_715a4d78(iVar2);
        iVar1 = DAT_711a3ac4 - iVar3;
        if (iVar1 != 0) {
          imp___aeabi_memmove4(iVar2,iVar3,iVar1);
        }
        DAT_711a3ac4 = iVar2 + iVar1;
        if (iVar2 == DAT_711a3ac4) {
          return;
        }
      }
      iVar2 = iVar3;
    } while (iVar3 != DAT_711a3ac4);
  }
  return;
}


// =========================================================================
// Function: FUN_715a50a4
// Entry: 0x715a50a4 | Size: 28 bytes
// =========================================================================

bool FUN_715a50a4(void)

{
  return 0 < DAT_711a3acc;
}


// =========================================================================
// Function: FUN_715a50f8
// Entry: 0x715a50f8 | Size: 316 bytes
// =========================================================================

undefined4 FUN_715a50f8(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  bool bVar7;
  
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_711a3ad0);
  puVar5 = &DAT_711a3ad8;
  if (DAT_711a3ad8 != (undefined4 *)0x0) {
    puVar3 = &DAT_711a3ad8;
    puVar5 = DAT_711a3ad8;
    do {
      puVar1 = puVar5;
      if ((int)puVar5[4] < param_1) {
        puVar5 = puVar5 + 1;
        puVar1 = puVar3;
      }
      puVar3 = puVar1;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
    puVar5 = &DAT_711a3ad8;
    if (((undefined4 **)puVar3 != &DAT_711a3ad8) && (puVar5 = puVar3, param_1 < (int)puVar3[4])) {
      puVar5 = &DAT_711a3ad8;
    }
  }
  if ((undefined4 **)puVar5 == &DAT_711a3ad8) {
    uVar6 = 0;
  }
  else {
    *param_2 = puVar5[5];
    param_2[1] = puVar5[6];
    param_2[2] = puVar5[7];
    param_2[3] = puVar5[8];
    puVar3 = puVar5;
    puVar1 = (undefined4 *)puVar5[1];
    if ((undefined4 *)puVar5[1] == (undefined4 *)0x0) {
      do {
        puVar4 = (undefined4 *)puVar3[2];
        bVar7 = (undefined4 *)*puVar4 != puVar3;
        puVar3 = puVar4;
      } while (bVar7);
    }
    else {
      do {
        puVar4 = puVar1;
        puVar1 = (undefined4 *)*puVar4;
      } while ((undefined4 *)*puVar4 != (undefined4 *)0x0);
    }
    if (DAT_711a3ad4 == puVar5) {
      DAT_711a3ad4 = puVar4;
    }
    DAT_711a3adc = DAT_711a3adc + -1;
    FUN_71368054(DAT_711a3ad8,puVar5);
    thunk_qNQrlu(puVar5);
    iVar2 = FUN_71ba2d50(*param_2,0);
    uVar6 = 0xffffffff;
    if (iVar2 != 0) {
      uVar6 = 1;
    }
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_711a3ad0);
  return uVar6;
}


// =========================================================================
// Function: FUN_715a5358
// Entry: 0x715a5358 | Size: 220 bytes
// =========================================================================

void FUN_715a5358(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_711a3ad0);
  if (DAT_711a3ad8 != (undefined4 *)0x0) {
    puVar2 = &DAT_711a3ad8;
    puVar3 = DAT_711a3ad8;
    do {
      puVar1 = puVar3;
      if ((int)puVar3[4] < param_1) {
        puVar3 = puVar3 + 1;
        puVar1 = puVar2;
      }
      puVar2 = puVar1;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
    if (((undefined4 **)puVar2 != &DAT_711a3ad8) && ((int)puVar2[4] <= param_1)) {
      puVar3 = puVar2;
      puVar1 = (undefined4 *)puVar2[1];
      if ((undefined4 *)puVar2[1] == (undefined4 *)0x0) {
        do {
          puVar4 = (undefined4 *)puVar3[2];
          bVar5 = (undefined4 *)*puVar4 != puVar3;
          puVar3 = puVar4;
        } while (bVar5);
      }
      else {
        do {
          puVar4 = puVar1;
          puVar1 = (undefined4 *)*puVar4;
        } while ((undefined4 *)*puVar4 != (undefined4 *)0x0);
      }
      if (DAT_711a3ad4 == puVar2) {
        DAT_711a3ad4 = puVar4;
      }
      DAT_711a3adc = DAT_711a3adc + -1;
      FUN_71368054(DAT_711a3ad8,puVar2);
      thunk_qNQrlu(puVar2);
    }
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_711a3ad0);
  return;
}


// =========================================================================
// Function: FUN_715a553c
// Entry: 0x715a553c | Size: 380 bytes
// =========================================================================

void FUN_715a553c(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  char cStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  int *piStack_1c;
  
  puVar5 = (undefined4 *)*param_1;
  uVar3 = *puVar5;
  *param_1 = puVar5 + 1;
  uVar6 = puVar5[1];
  *param_1 = puVar5 + 2;
  uVar7 = puVar5[2];
  *param_1 = puVar5 + 3;
  FUN_71593218(&iStack_20,uVar3);
  if (iStack_20 != 0) {
    uStack_24 = 0xbf800000;
    uStack_28 = 0xbf800000;
    uStack_2c = 0xbf800000;
    uStack_30 = 0xbf800000;
    cStack_34 = 0;
    uStack_38 = 0;
    uStack_3c = 0;
    imp_glGetIntegerv(0x8ca6,&uStack_3c);
    imp_glGetIntegerv(0x8069,&uStack_38);
    iVar2 = imp_glIsEnabled(0xc11);
    cStack_34 = (char)iVar2;
    if (iVar2 != 0) {
      imp_glDisable(0xc11);
    }
    puVar5 = (undefined4 *)((uint)&uStack_30 | 4);
    FUN_715a3ef0(uStack_3c,uVar6,uVar7,&uStack_30);
    imp_glBindTexture(0xde1,uStack_38);
    imp_glBindFramebuffer(0x8d40,uStack_3c);
    if (cStack_34 != '\0') {
      imp_glEnable(0xc11);
    }
    iVar2 = iStack_20;
    thunk_cfqspBX_JrdDvACwYrAyrngjQ(iStack_20);
    uVar3 = *puVar5;
    uVar6 = puVar5[1];
    uVar7 = puVar5[2];
    *(undefined4 *)(iStack_20 + 100) = uStack_30;
    *(undefined4 *)(iStack_20 + 0x68) = uVar3;
    *(undefined4 *)(iStack_20 + 0x6c) = uVar6;
    *(undefined4 *)(iStack_20 + 0x70) = uVar7;
    *(undefined1 *)(iStack_20 + 0x60) = 1;
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(iVar2);
  }
  if (piStack_1c != (int *)0x0) {
    piVar4 = piStack_1c + 1;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar2 + -1;
    DataMemoryBarrier(0xb);
    if (iVar2 == 0) {
      (**(code **)(*piStack_1c + 8))(piStack_1c);
      thunk_xwzSFoU_qvDa_PehyVStzHlBOSkJhkBLR_tNCbTfLzAoZMkmnRt(piStack_1c);
      return;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_715a598c
// Entry: 0x715a598c | Size: 20 bytes
// =========================================================================

void FUN_715a598c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_715a5a9c
// Entry: 0x715a5a9c | Size: 20 bytes
// =========================================================================

void FUN_715a5a9c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_715a6090
// Entry: 0x715a6090 | Size: 2464 bytes
// =========================================================================

uint FUN_715a6090(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  bool bVar13;
  undefined8 uVar14;
  int iStack_78;
  int iStack_74;
  undefined4 *puStack_68;
  int *piStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 uStack_3c;
  undefined1 uStack_3b;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  char cStack_38;
  char cStack_37;
  char cStack_36;
  char cStack_35;
  char cStack_34;
  char cStack_33;
  int aiStack_30 [3];
  
  FUN_715a76e0();
  FUN_71593218(&puStack_68,param_1);
  puVar12 = puStack_68;
  iVar6 = -1;
  iVar7 = -1;
  if (puStack_68 != (undefined4 *)0x0) {
    thunk_cfqspBX_JrdDvACwYrAyrngjQ(puStack_68);
    iVar6 = puStack_68[0xe];
    iVar7 = puStack_68[0xf];
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(puVar12);
  }
  piVar11 = piStack_64;
  if (piStack_64 != (int *)0x0) {
    piVar5 = piStack_64 + 1;
    DataMemoryBarrier(0xb);
    do {
      iVar1 = *piVar5;
      bVar13 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar13);
    *piVar5 = iVar1 + -1;
    DataMemoryBarrier(0xb);
    if (iVar1 == 0) {
      (**(code **)(*piStack_64 + 8))(piStack_64);
      thunk_xwzSFoU_qvDa_PehyVStzHlBOSkJhkBLR_tNCbTfLzAoZMkmnRt(piVar11);
    }
  }
  piVar11 = (int *)0x0;
  if (iVar7 < 0) goto LAB_715a6158;
  iVar2 = imp_eglGetCurrentDisplay();
  uVar14 = imp_eglGetCurrentContext();
  iVar1 = (int)((ulonglong)uVar14 >> 0x20);
  if (iVar2 != 0) {
    iVar1 = (int)uVar14;
  }
  if (((iVar2 == 0 || (int)uVar14 == 0) || (iVar1 = FUN_715a7df4(iVar2,iVar1), iVar1 == 0)) ||
     (iVar1 = FUN_715a84b0(&DAT_700c3fc4,s_precision_mediump_float__uniform_700628a9,0xbf800000),
     iVar1 == 0)) goto LAB_715a6158;
  aiStack_30[2] = 0;
  imp_glGetIntegerv(0x8ca6,aiStack_30 + 2);
  puStack_68 = (undefined4 *)0x0;
  aiStack_30[0] = 0;
  imp_glGetFramebufferAttachmentParameteriv(0x8d40,0x8ce0,0x8cd0,&puStack_68);
  if ((puStack_68 != (undefined4 *)0x1702) ||
     (imp_glGetFramebufferAttachmentParameteriv(0x8d40,0x8ce0,0x8cd1,aiStack_30),
     iVar1 = aiStack_30[0], aiStack_30[0] == 0)) goto LAB_715a6158;
  piStack_64 = (int *)CONCAT31(piStack_64._1_3_,1);
  puStack_68 = &DAT_711a3af0;
  thunk_cfqspBX_JrdDvACwYrAyrngjQ();
  puVar8 = &DAT_711a3afc;
  puVar12 = DAT_711a3afc;
  puVar10 = puVar8;
  if (DAT_711a3afc != (undefined4 *)0x0) {
    do {
      while (puVar3 = puVar12, puVar10 = puVar3, param_1 < (int)puVar3[4]) {
        puVar12 = (undefined4 *)*puVar3;
        puVar8 = puVar3;
        if ((undefined4 *)*puVar3 == (undefined4 *)0x0) goto LAB_715a6264;
      }
      if (param_1 <= (int)puVar3[4]) goto LAB_715a62dc;
      puVar12 = (undefined4 *)puVar3[1];
    } while ((undefined4 *)puVar3[1] != (undefined4 *)0x0);
    puVar8 = puVar3 + 1;
  }
LAB_715a6264:
  puVar3 = (undefined4 *)thunk_MwhHq(0x78);
  puVar3[4] = param_1;
  imp___aeabi_memclr8(puVar3 + 6,0x58);
  puVar3[0x1c] = 0xffffffff;
  puVar3[0x1d] = 0xffffffff;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = puVar10;
  *puVar8 = puVar3;
  puVar12 = puVar3;
  if ((int *)*DAT_711a3af8 != (int *)0x0) {
    puVar12 = (undefined4 *)*puVar8;
    DAT_711a3af8 = (int *)*DAT_711a3af8;
  }
  FUN_712f807c(DAT_711a3afc,puVar12);
  DAT_711a3b00 = DAT_711a3b00 + 1;
LAB_715a62dc:
  if (puVar3[0x1c] == iVar6 && puVar3[0x1d] == iVar7) {
LAB_715a6300:
    iStack_74 = 0;
    iVar9 = 0;
    iVar2 = 0;
    bVar13 = false;
    piVar11 = (int *)0x0;
  }
  else {
    iVar2 = puVar3[0x18];
    piVar5 = puVar3 + 6;
    bVar13 = iVar2 == param_2;
    if (bVar13) {
      iVar2 = puVar3[0x19];
    }
    if (bVar13 && iVar2 == param_3) {
LAB_715a6534:
      puVar3[0x1a] = iVar6;
      puVar3[0x1b] = iVar7;
      iStack_78 = FUN_715a985c(piVar5);
      if (-1 < iStack_78) {
        bVar13 = true;
        iVar9 = piVar5[iStack_78 * 6 + 3];
        iVar2 = piVar5[iStack_78 * 6 + 4];
        iStack_74 = piVar5[iStack_78 * 6 + 1];
        piVar5[iStack_78 * 6 + 2] = 1;
        piVar5[iStack_78 * 6 + 4] = 0;
        piVar5[iStack_78 * 6 + 3] = 0;
        piVar11 = piVar5;
        goto LAB_715a65b8;
      }
    }
    else {
      aiStack_30[1] = 0;
      aiStack_30[0] = 100;
      FUN_715a8dd4(&puStack_68,aiStack_30,piVar5);
      if ((puVar3[8] != 3) && (iStack_74 = 0, puVar3[0xe] != 3)) {
        iVar9 = 0;
        iVar2 = 0;
        bVar13 = false;
        piVar11 = (int *)0x1;
        if (puVar3[0x14] == 3) goto LAB_715a65b8;
        if (puVar3[7] != 0) {
          imp_glDeleteFramebuffers(1);
        }
        if (*piVar5 != 0) {
          imp_glDeleteTextures(1,piVar5);
        }
        if (puVar3[9] != 0) {
          imp_glDeleteSync();
        }
        if (puVar3[10] != 0) {
          imp_glDeleteSync();
        }
        *piVar5 = 0;
        puVar3[7] = 0;
        puVar3[8] = 0;
        puVar3[9] = 0;
        puVar3[10] = 0;
        puVar3[0xb] = 0;
        piVar11 = puVar3 + 0xc;
        if (puVar3[0xd] != 0) {
          imp_glDeleteFramebuffers(1);
        }
        if (*piVar11 != 0) {
          imp_glDeleteTextures(1,piVar11);
        }
        if (puVar3[0xf] != 0) {
          imp_glDeleteSync();
        }
        if (puVar3[0x10] != 0) {
          imp_glDeleteSync();
        }
        *piVar11 = 0;
        puVar3[0xd] = 0;
        puVar3[0xe] = 0;
        puVar3[0xf] = 0;
        puVar3[0x10] = 0;
        puVar3[0x11] = 0;
        piVar11 = puVar3 + 0x12;
        if (puVar3[0x13] != 0) {
          imp_glDeleteFramebuffers(1);
        }
        if (*piVar11 != 0) {
          imp_glDeleteTextures(1,piVar11);
        }
        if (puVar3[0x15] != 0) {
          imp_glDeleteSync();
        }
        if (puVar3[0x16] != 0) {
          imp_glDeleteSync();
        }
        *piVar11 = 0;
        puVar3[0x13] = 0;
        puVar3[0x14] = 0;
        puVar3[0x15] = 0;
        puVar3[0x16] = 0;
        puVar3[0x17] = 0;
        iVar2 = FUN_715a8ee0(piVar5,param_2,param_3);
        if (iVar2 == 0) {
          puVar3[0x1c] = iVar6;
          puVar3[0x1d] = iVar7;
          goto LAB_715a6300;
        }
        goto LAB_715a6534;
      }
    }
    iStack_74 = 0;
    piVar11 = (int *)0x1;
    iVar9 = 0;
    iVar2 = 0;
    bVar13 = false;
  }
LAB_715a65b8:
  if ((char)piStack_64 != '\0') {
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(puStack_68);
  }
  if (bVar13) {
    if (iVar2 != 0) {
      imp_glWaitSync(iVar2,0,0xffffffff,0xffffffff);
      imp_glDeleteSync(iVar2);
    }
    if (iVar9 != 0) {
      imp_glDeleteSync(iVar9);
    }
    imp___aeabi_memclr8(&puStack_68,0x38);
    imp_glGetIntegerv(0x8b8d,&puStack_68);
    imp_glGetIntegerv(0x84e0,(uint)&puStack_68 | 4);
    imp_glActiveTexture(0x84c0);
    imp_glGetIntegerv(0x8069,&uStack_60);
    imp_glGetIntegerv(0x85b5,&uStack_5c);
    imp_glGetIntegerv(0x8894,&uStack_58);
    imp_glGetIntegerv(0xba2,&uStack_4c);
    imp_glGetBooleanv(0xc23,&uStack_3c);
    cStack_38 = imp_glIsEnabled(0xc11);
    cStack_37 = imp_glIsEnabled(0xb71);
    cStack_36 = imp_glIsEnabled(0xbe2);
    cStack_35 = imp_glIsEnabled(0xb44);
    cStack_34 = imp_glIsEnabled(0xb90);
    cStack_33 = imp_glIsEnabled(0xbd0);
    imp_glBindFramebuffer(0x8d40,iStack_74);
    imp_glViewport(0,0,param_2,param_3);
    imp_glColorMask(1,1,1,1);
    imp_glDisable(0xc11);
    imp_glDisable(0xb71);
    imp_glDisable(0xbe2);
    imp_glDisable(0xb44);
    imp_glDisable(0xb90);
    imp_glDisable(0xbd0);
    imp_glUseProgram(DAT_700c3fc4);
    imp_glBindTexture(0xde1,iVar1);
    imp_glGetTexParameteriv(0xde1,0x2801,&uStack_54);
    imp_glGetTexParameteriv(0xde1,0x2800,&uStack_50);
    imp_glTexParameteri(0xde1,0x2801,0x2601);
    imp_glTexParameteri(0xde1,0x2800,0x2601);
    imp_glBindVertexArray(DAT_700c3fc8);
    imp_glDrawArrays(5,0,4);
    uVar4 = imp_glFenceSync(0x9117,0);
    imp_glFlush();
    imp_glBindTexture(0xde1,iVar1);
    imp_glTexParameteri(0xde1,0x2801,uStack_54);
    imp_glTexParameteri(0xde1,0x2800,uStack_50);
    imp_glBindTexture(0xde1,uStack_60);
    imp_glActiveTexture(piStack_64);
    imp_glUseProgram(puStack_68);
    imp_glBindVertexArray(uStack_5c);
    imp_glBindBuffer(0x8892,uStack_58);
    imp_glViewport(uStack_4c,uStack_48,uStack_44,uStack_40);
    imp_glColorMask(uStack_3c,uStack_3b,uStack_3a,uStack_39);
    if (cStack_38 == '\0') {
      imp_glDisable(0xc11);
    }
    else {
      imp_glEnable(0xc11);
    }
    if (cStack_37 == '\0') {
      imp_glDisable(0xb71);
    }
    else {
      imp_glEnable(0xb71);
    }
    if (cStack_36 == '\0') {
      imp_glDisable(0xbe2);
    }
    else {
      imp_glEnable(0xbe2);
    }
    if (cStack_35 == '\0') {
      imp_glDisable(0xb44);
    }
    else {
      imp_glEnable(0xb44);
    }
    if (cStack_34 == '\0') {
      imp_glDisable(0xb90);
    }
    else {
      imp_glEnable(0xb90);
    }
    if (cStack_33 == '\0') {
      imp_glDisable(0xbd0);
    }
    else {
      imp_glEnable(0xbd0);
    }
    imp_glBindFramebuffer(0x8d40,aiStack_30[2]);
    thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_711a3af0);
    puVar8 = &DAT_711a3afc;
    puVar12 = DAT_711a3afc;
    puVar10 = puVar8;
    if (DAT_711a3afc != (undefined4 *)0x0) {
      do {
        while (puVar8 = puVar12, param_1 < (int)puVar8[4]) {
          puVar12 = (undefined4 *)*puVar8;
          puVar10 = puVar8;
          if ((undefined4 *)*puVar8 == (undefined4 *)0x0) goto LAB_715a696c;
        }
        if (param_1 <= (int)puVar8[4]) goto LAB_715a69dc;
        puVar12 = (undefined4 *)puVar8[1];
      } while ((undefined4 *)puVar8[1] != (undefined4 *)0x0);
      puVar10 = puVar8 + 1;
    }
LAB_715a696c:
    puVar3 = (undefined4 *)thunk_MwhHq(0x78);
    puVar3[4] = param_1;
    imp___aeabi_memclr8(puVar3 + 6,0x58);
    puVar3[0x1c] = 0xffffffff;
    puVar3[0x1d] = 0xffffffff;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = puVar8;
    *puVar10 = puVar3;
    puVar12 = puVar3;
    if ((int *)*DAT_711a3af8 != (int *)0x0) {
      puVar12 = (undefined4 *)*puVar10;
      DAT_711a3af8 = (int *)*DAT_711a3af8;
    }
    FUN_712f807c(DAT_711a3afc,puVar12);
    DAT_711a3b00 = DAT_711a3b00 + 1;
    puVar8 = puVar3;
LAB_715a69dc:
    puVar8[iStack_78 * 6 + 9] = uVar4;
    iVar6 = DAT_711a3b74 + 1;
    DAT_711a3b74 = iVar6;
    puVar8[iStack_78 * 6 + 8] = 2;
    puVar8[iStack_78 * 6 + 0xb] = iVar6;
    thunk_KmAAJrQeDYcikipjnSTRnrUxnxfqYglsjaMkPyhpSaUedr(&DAT_711a3af4);
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_711a3af0);
    piVar11 = (int *)0x1;
  }
LAB_715a6158:
  return (uint)piVar11 & 1;
}


// =========================================================================
// Function: FUN_715a76e0
// Entry: 0x715a76e0 | Size: 952 bytes
// =========================================================================

void FUN_715a76e0(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  bool bVar16;
  int *piStack_28;
  
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_711a3af0);
  if (DAT_711a3b10 == DAT_711a3b14) {
    piVar7 = (int *)0x0;
    piStack_28 = (int *)0x0;
  }
  else {
    piVar7 = (int *)0x0;
    piVar11 = (int *)0x0;
    piStack_28 = (int *)0x0;
    puVar9 = DAT_711a3b10;
    puVar15 = DAT_711a3b14;
    do {
      iVar2 = puVar9[4];
      bVar16 = iVar2 == 3;
      if (!bVar16) {
        iVar2 = puVar9[10];
      }
      if ((bVar16 || iVar2 == 3) || (puVar9[0x10] == 3)) {
        puVar9 = puVar9 + 0x1a;
        puVar14 = puVar15;
        puVar1 = DAT_711a3b14;
      }
      else {
        puVar14 = puVar9 + 2;
        if (piVar7 < piVar11) {
          imp___aeabi_memcpy8(piVar7,puVar14,0x60);
          piVar7 = piVar7 + 0x18;
          piVar12 = piStack_28;
        }
        else {
          iVar8 = (int)piVar7 - (int)piStack_28;
          iVar2 = iVar8 >> 5;
          uVar13 = iVar2 * -0x55555555 + 1;
          if (0x2aaaaaa < uVar13) {
            FUN_715abf14(iVar2,puVar14);
LAB_715a7a94:
                    /* WARNING: Subroutine does not return */
            FUN_712f6cf0();
          }
          iVar3 = (int)piVar11 - (int)piStack_28 >> 5;
          if (uVar13 < (uint)(iVar3 * 0x55555556)) {
            uVar13 = iVar3 * 0x55555556;
          }
          if (0x1555554 < (uint)(iVar3 * -0x55555555)) {
            uVar13 = 0x2aaaaaa;
          }
          if (uVar13 == 0) {
            iVar3 = 0;
          }
          else {
            if (0x2aaaaaa < uVar13) goto LAB_715a7a94;
            iVar3 = thunk_MwhHq(uVar13 * 0x60);
          }
          iVar6 = iVar3 + iVar2 * 0x20;
          imp___aeabi_memcpy8(iVar6,puVar14,0x60);
          iVar2 = (int)((ulonglong)((longlong)iVar8 * -0x2aaaaaab) >> 0x20);
          piVar12 = (int *)(iVar6 + ((iVar2 >> 4) - (iVar2 >> 0x1f)) * 0x60);
          imp___aeabi_memcpy8(piVar12,piStack_28,iVar8);
          piVar7 = (int *)(iVar6 + 0x60);
          piVar11 = (int *)(iVar3 + uVar13 * 0x60);
          if (piStack_28 != (int *)0x0) {
            thunk_qNQrlu(piStack_28);
            puVar15 = DAT_711a3b14;
          }
        }
        piStack_28 = piVar12;
        puVar4 = puVar9 + 0x1a;
        puVar14 = puVar9;
        while (puVar1 = puVar14, puVar4 != puVar15) {
          *puVar14 = puVar14[0x1a];
          imp___aeabi_memcpy8(puVar14 + 2,puVar14 + 0x1c,0x60);
          puVar4 = puVar14 + 0x34;
          puVar14 = puVar14 + 0x1a;
        }
      }
      DAT_711a3b14 = puVar1;
      puVar15 = puVar14;
    } while (puVar9 != puVar14);
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_711a3af0);
  if (piStack_28 != piVar7) {
    piVar11 = piStack_28 + 0x10;
    do {
      if (piVar11[-0xf] != 0) {
        imp_glDeleteFramebuffers(1,piVar11 + -0xf);
      }
      piVar12 = piVar11 + -0x10;
      if (*piVar12 != 0) {
        imp_glDeleteTextures(1,piVar12);
      }
      if (piVar11[-0xd] != 0) {
        imp_glDeleteSync();
      }
      if (piVar11[-0xc] != 0) {
        imp_glDeleteSync();
      }
      *piVar12 = 0;
      piVar11[-0xf] = 0;
      piVar11[-0xe] = 0;
      piVar11[-0xd] = 0;
      piVar11[-0xc] = 0;
      piVar11[-0xb] = 0;
      if (piVar11[-9] != 0) {
        imp_glDeleteFramebuffers(1,piVar11 + -9);
      }
      piVar12 = piVar11 + -10;
      if (*piVar12 != 0) {
        imp_glDeleteTextures(1,piVar12);
      }
      if (piVar11[-7] != 0) {
        imp_glDeleteSync();
      }
      if (piVar11[-6] != 0) {
        imp_glDeleteSync();
      }
      *piVar12 = 0;
      piVar11[-9] = 0;
      piVar11[-8] = 0;
      piVar11[-7] = 0;
      piVar11[-6] = 0;
      piVar11[-5] = 0;
      piVar12 = piVar11 + -3;
      if (*piVar12 != 0) {
        imp_glDeleteFramebuffers(1,piVar12);
      }
      piVar10 = piVar11 + -4;
      if (*piVar10 != 0) {
        imp_glDeleteTextures(1,piVar10);
      }
      if (piVar11[-1] != 0) {
        imp_glDeleteSync();
      }
      if (*piVar11 != 0) {
        imp_glDeleteSync();
      }
      piVar5 = piVar11 + 8;
      *piVar10 = 0;
      *piVar12 = 0;
      piVar11[-2] = 0;
      piVar11[-1] = 0;
      *piVar11 = 0;
      piVar11[1] = 0;
      piVar11 = piVar11 + 0x18;
    } while (piVar5 != piVar7);
  }
  if (piStack_28 == (int *)0x0) {
    return;
  }
  thunk_qNQrlu(piStack_28);
  return;
}


// =========================================================================
// Function: FUN_715a7df4
// Entry: 0x715a7df4 | Size: 876 bytes
// =========================================================================

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_715a7df4(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint auStack_b8 [17];
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined1 *puStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint auStack_40 [3];
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  uVar1 = 1;
  if ((DAT_711a3b7c != 0) || (uVar1 = 0, (char)DAT_711a3b80 != '\0')) {
    return uVar1;
  }
  uStack_2c = 0;
  iStack_30 = 0;
  DAT_711a3b84 = param_1;
  imp_eglQueryContext(param_1,param_2,0x3028,&uStack_2c);
  uStack_34 = 0x3038;
  auStack_40[2] = uStack_2c;
  auStack_40[1] = 0x3028;
  auStack_40[0] = 0;
  iVar2 = imp_eglChooseConfig(param_1,auStack_40 + 1,auStack_40,1,&iStack_30);
  if ((iVar2 == 0) || (iStack_30 < 1)) {
    DAT_711a3b7c = 0;
    DAT_711a3b80._0_1_ = 1;
    DAT_711a3b88 = 0;
    return 0;
  }
  auStack_b8[0] = 0;
  imp_eglGetConfigAttrib(param_1,auStack_40[0],0x3021,auStack_b8);
  if (7 < (int)auStack_b8[0]) {
    auStack_b8[0] = 0;
    imp_eglGetConfigAttrib(param_1,auStack_40[0],&DAT_00003033,auStack_b8);
    uVar4 = auStack_40[0];
    if ((auStack_b8[0] & 4) != 0) goto LAB_715a8078;
  }
  uStack_64 = 0x3022;
  uStack_54 = 0x3040;
  uStack_6c = 0x3023;
  uStack_58 = 8;
  uStack_60 = 8;
  uStack_68 = 8;
  uStack_70 = 8;
  uStack_74 = 0x3024;
  uStack_5c = 0x3021;
  auStack_b8[0] = 0;
  imp_eglGetConfigAttrib(param_1,auStack_40[0],0x3040,auStack_b8);
  uStack_44 = 0x3038;
  uStack_48 = 4;
  puStack_4c = &DAT_00003033;
  uStack_50 = auStack_b8[0];
  iVar2 = imp_eglChooseConfig(param_1,&uStack_74,auStack_b8,0x10,&iStack_30);
  uVar4 = 0;
  if ((iVar2 != 0) && (0 < iStack_30)) {
    iVar2 = 0;
    do {
      iStack_28 = 0;
      imp_eglGetConfigAttrib(param_1,auStack_b8[iVar2],0x3024,&iStack_28);
      if (iStack_28 == 8) {
        iStack_28 = 0;
        imp_eglGetConfigAttrib(param_1,auStack_b8[iVar2],0x3023,&iStack_28);
        if (iStack_28 == 8) {
          iStack_28 = 0;
          imp_eglGetConfigAttrib(param_1,auStack_b8[iVar2],0x3022,&iStack_28);
          if (iStack_28 == 8) {
            iStack_28 = 0;
            imp_eglGetConfigAttrib(param_1,auStack_b8[iVar2],0x3021,&iStack_28);
            if (iStack_28 == 8) {
              uVar4 = auStack_b8[iVar2];
              goto LAB_715a8078;
            }
          }
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iStack_30);
    uVar4 = 0;
  }
LAB_715a8078:
  auStack_b8[2] = 0x3038;
  auStack_b8[1] = 3;
  auStack_b8[0] = 0x3098;
  if (uVar4 == 0) {
    DAT_711a3b88 = uVar4;
    DAT_711a3b7c = 0;
    DAT_711a3b80._0_1_ = 1;
    return 0;
  }
  DAT_711a3b88 = uVar4;
  DAT_711a3b7c = imp_eglCreateContext(param_1,uVar4,param_2,auStack_b8);
  if (DAT_711a3b7c != 0) {
    uVar1 = thunk_MwhHq(4);
    thunk_IqYTnHtEYRLvLLTOJMZHzxakOfRAHvNTt();
    puVar3 = (undefined4 *)thunk_MwhHq(8);
    *puVar3 = uVar1;
    puVar3[1] = FUN_715abf7c;
    iVar2 = imp_pthread_create(&uStack_74,0,&LAB_714d2a60);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_BryazjfoMPqEkZEtKkG_KttlecoGMjr_tAmWbCi(iVar2,s_thread_constructor_failed_70063c8c);
    }
    thunk_dtOmRBwkVHnGtYLYirTdLYLImchz(&uStack_74);
    thunk_uQwrLJbzyUVbHmvQcVNflhV(&uStack_74);
    return 1;
  }
  DAT_711a3b80._0_1_ = 1;
  return 0;
}


// =========================================================================
// Function: FUN_715a84b0
// Entry: 0x715a84b0 | Size: 804 bytes
// =========================================================================

undefined4 FUN_715a84b0(int *param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  if (((*param_1 != 0) && (iVar1 = imp_glIsProgram(), iVar1 != 0)) &&
     (iVar1 = imp_glIsVertexArray(param_1[1]), iVar1 != 0)) {
    return 1;
  }
  pcStack_58 = s_attribute_vec2_aPosition__varyin_70071919;
  iVar1 = imp_glCreateShader(0x8b31);
  imp_glShaderSource(iVar1,1,&pcStack_58,0);
  imp_glCompileShader(iVar1);
  iStack_28 = 0;
  imp_glGetShaderiv(iVar1,0x8b81,&iStack_28);
  if (iStack_28 == 0) {
    imp_glDeleteShader(iVar1);
    iVar1 = 0;
  }
  pcStack_58 = param_2;
  iVar2 = imp_glCreateShader(0x8b30);
  imp_glShaderSource(iVar2,1,&pcStack_58,0);
  imp_glCompileShader(iVar2);
  iStack_28 = 0;
  imp_glGetShaderiv(iVar2,0x8b81,&iStack_28);
  if (iStack_28 == 0) {
    imp_glDeleteShader(iVar2);
    uVar5 = 0;
    if (iVar1 != 0) {
      imp_glDeleteShader(iVar1);
    }
  }
  else if (iVar1 == 0 || iVar2 == 0) {
    if (iVar1 != 0) {
      imp_glDeleteShader(iVar1);
    }
    if (iVar2 != 0) {
      imp_glDeleteShader(iVar2);
    }
    uVar5 = 0;
  }
  else {
    iVar3 = imp_glCreateProgram();
    *param_1 = iVar3;
    imp_glAttachShader(iVar3,iVar1);
    imp_glAttachShader(*param_1,iVar2);
    imp_glBindAttribLocation(*param_1,0,s_aPosition_70066533);
    imp_glLinkProgram(*param_1);
    imp_glDeleteShader(iVar1);
    imp_glDeleteShader(iVar2);
    iStack_28 = 0;
    imp_glGetProgramiv(*param_1,0x8b82,&iStack_28);
    if (iStack_28 == 0) {
      imp_glDeleteProgram(*param_1);
      *param_1 = 0;
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
      uStack_2c = 0;
      uStack_30 = 0;
      uStack_34 = 0;
      imp_glGetIntegerv(0x8b8d,&uStack_2c);
      imp_glGetIntegerv(0x85b5,&uStack_30);
      imp_glGetIntegerv(0x8894,&uStack_34);
      imp_glUseProgram(*param_1);
      uVar4 = imp_glGetUniformLocation(*param_1,s_uSource_700676f9);
      imp_glUniform1i(uVar4,0);
      uVar4 = imp_glGetUniformLocation(*param_1,s_uFlip_70065d3a);
      imp_glUniform1f(uVar4,param_3);
      iVar1 = imp_glGetUniformLocation(*param_1,s_uOrigin_700690b0);
      param_1[3] = iVar1;
      iVar1 = imp_glGetUniformLocation(*param_1,s_uScale_7006a3f6);
      param_1[4] = iVar1;
      imp_glUniform2f(param_1[3],0,0);
      imp_glUniform2f(param_1[4],0x3f800000,0x3f800000);
      pcStack_58 = DAT_70060c58;
      uStack_54 = DAT_70060c5c;
      uStack_50 = DAT_70060c60;
      uStack_4c = DAT_70060c64;
      uStack_48 = DAT_70060c68;
      uStack_44 = DAT_70060c6c;
      uStack_40 = DAT_70060c70;
      uStack_3c = DAT_70060c74;
      imp_glGenVertexArrays(1,param_1 + 1);
      imp_glBindVertexArray(param_1[1]);
      imp_glGenBuffers(1,param_1 + 2);
      imp_glBindBuffer(0x8892,param_1[2]);
      imp_glBufferData(0x8892,0x20,&pcStack_58,0x88e4);
      imp_glEnableVertexAttribArray(0);
      imp_glVertexAttribPointer(0,2,0x1406,0,0,0);
      imp_glBindVertexArray(uStack_30);
      imp_glBindBuffer(0x8892,uStack_34);
      imp_glUseProgram(uStack_2c);
    }
  }
  return uVar5;
}


// =========================================================================
// Function: FUN_715a8dd4
// Entry: 0x715a8dd4 | Size: 156 bytes
// =========================================================================

void FUN_715a8dd4(undefined4 param_1,uint *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  uint uStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  thunk_cAVowcMDgjNlKlwaXlLRnhcfdxnJsEWOPLMGMHS(&uStack_28);
  uVar1 = (uint)((ulonglong)*param_2 * 1000000);
  iStack_20 = uVar1 + uStack_28;
  iStack_1c = param_2[1] * 1000000 + (int)((ulonglong)*param_2 * 1000000 >> 0x20) + iStack_24 +
              (uint)CARRY4(uVar1,uStack_28);
  do {
    iVar2 = *(int *)(param_3 + 8);
    bVar3 = iVar2 == 3;
    if (!bVar3) {
      iVar2 = *(int *)(param_3 + 0x20);
    }
  } while (((bVar3 || iVar2 == 3) || (*(int *)(param_3 + 0x38) == 3)) &&
          (iVar2 = FUN_713a2214(&DAT_711a3af4,param_1,&iStack_20), iVar2 != 1));
  return;
}


// =========================================================================
// Function: FUN_715a8ee0
// Entry: 0x715a8ee0 | Size: 1032 bytes
// =========================================================================

bool FUN_715a8ee0(int *param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  bVar6 = false;
  uStack_28 = 0;
  uStack_2c = 0;
  imp_glGetIntegerv(0x8069,&uStack_28);
  imp_glGetIntegerv(0x8ca6,&uStack_2c);
  imp_glGenTextures(1,param_1);
  imp_glBindTexture(0xde1,*param_1);
  imp_glTexStorage2D(0xde1,1,0x8058,param_2,param_3);
  imp_glTexParameteri(0xde1,0x2801,0x2600);
  imp_glTexParameteri(0xde1,0x2800,0x2600);
  imp_glTexParameteri(0xde1,0x2802,0x812f);
  imp_glTexParameteri(0xde1,0x2803,0x812f);
  imp_glGenFramebuffers(1);
  imp_glBindFramebuffer(0x8d40,param_1[1]);
  imp_glFramebufferTexture2D(0x8d40,0x8ce0,0xde1,*param_1,0);
  iVar2 = imp_glCheckFramebufferStatus(0x8d40);
  piVar5 = param_1 + 6;
  imp_glGenTextures(1,piVar5);
  imp_glBindTexture(0xde1,param_1[6]);
  imp_glTexStorage2D(0xde1,1,0x8058,param_2,param_3);
  imp_glTexParameteri(0xde1,0x2801,0x2600);
  imp_glTexParameteri(0xde1,0x2800,0x2600);
  imp_glTexParameteri(0xde1,0x2802,0x812f);
  imp_glTexParameteri(0xde1,0x2803,0x812f);
  imp_glGenFramebuffers(1);
  imp_glBindFramebuffer(0x8d40,param_1[7]);
  imp_glFramebufferTexture2D(0x8d40,0x8ce0,0xde1,param_1[6],0);
  bVar1 = false;
  if (iVar2 == 0x8cd5) {
    iVar2 = imp_glCheckFramebufferStatus(0x8d40);
    bVar1 = iVar2 == 0x8cd5;
  }
  piVar4 = param_1 + 0xc;
  imp_glGenTextures(1,piVar4);
  imp_glBindTexture(0xde1,param_1[0xc]);
  imp_glTexStorage2D(0xde1,1,0x8058,param_2,param_3);
  imp_glTexParameteri(0xde1,0x2801,0x2600);
  imp_glTexParameteri(0xde1,0x2800,0x2600);
  imp_glTexParameteri(0xde1,0x2802,0x812f);
  imp_glTexParameteri(0xde1,0x2803,0x812f);
  piVar3 = param_1 + 0xd;
  imp_glGenFramebuffers(1,piVar3);
  imp_glBindFramebuffer(0x8d40,param_1[0xd]);
  imp_glFramebufferTexture2D(0x8d40,0x8ce0,0xde1,param_1[0xc],0);
  if (bVar1) {
    iVar2 = imp_glCheckFramebufferStatus(0x8d40);
    bVar6 = iVar2 == 0x8cd5;
  }
  imp_glBindTexture(0xde1,uStack_28);
  imp_glBindFramebuffer(0x8d40,uStack_2c);
  if (bVar6 == false) {
    if (param_1[1] != 0) {
      imp_glDeleteFramebuffers(1);
    }
    if (*param_1 != 0) {
      imp_glDeleteTextures(1,param_1);
    }
    if (param_1[3] != 0) {
      imp_glDeleteSync();
    }
    if (param_1[4] != 0) {
      imp_glDeleteSync();
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    if (param_1[7] != 0) {
      imp_glDeleteFramebuffers(1,param_1 + 7);
    }
    if (*piVar5 != 0) {
      imp_glDeleteTextures(1,piVar5);
    }
    if (param_1[9] != 0) {
      imp_glDeleteSync();
    }
    if (param_1[10] != 0) {
      imp_glDeleteSync();
    }
    *piVar5 = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    if (*piVar3 != 0) {
      imp_glDeleteFramebuffers(1,piVar3);
    }
    if (*piVar4 != 0) {
      imp_glDeleteTextures(1,piVar4);
    }
    if (param_1[0xf] != 0) {
      imp_glDeleteSync();
    }
    if (param_1[0x10] != 0) {
      imp_glDeleteSync();
    }
    *piVar4 = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  else {
    param_1[0x12] = param_2;
    param_1[0x13] = param_3;
  }
  return bVar6;
}


// =========================================================================
// Function: FUN_715a985c
// Entry: 0x715a985c | Size: 172 bytes
// =========================================================================

int FUN_715a985c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    return 0;
  }
  if (iVar1 != 2) {
    iVar2 = -1;
  }
  else {
    iVar2 = 0;
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x20) == 2) {
    if (iVar1 != 2) {
      iVar2 = 1;
    }
    else if (*(uint *)(param_1 + 0x2c) < *(uint *)(param_1 + iVar2 * 0x18 + 0x14)) {
      iVar2 = 1;
    }
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    if (*(int *)(param_1 + 0x38) != 2) {
      return iVar2;
    }
    if (-1 < iVar2) {
      if (*(uint *)(param_1 + iVar2 * 0x18 + 0x14) <= *(uint *)(param_1 + 0x44)) {
        return iVar2;
      }
      return 2;
    }
  }
  return 2;
}


// =========================================================================
// Function: FUN_715a9920
// Entry: 0x715a9920 | Size: 4 bytes
// =========================================================================

void FUN_715a9920(void)

{
  return;
}


// =========================================================================
// Function: FUN_715a993c
// Entry: 0x715a993c | Size: 8 bytes
// =========================================================================

undefined4 FUN_715a993c(void)

{
  return 0;
}


// =========================================================================
// Function: FUN_715a995c
// Entry: 0x715a995c | Size: 1308 bytes
// =========================================================================

void FUN_715a995c(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  bool bVar13;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  undefined4 *puStack_38;
  char cStack_34;
  uint uStack_30;
  int iStack_2c;
  
  cStack_34 = '\x01';
  puStack_38 = &DAT_711a3af0;
  thunk_cfqspBX_JrdDvACwYrAyrngjQ();
  if (DAT_711a3afc == (undefined4 *)0x0) {
LAB_715a99d4:
    puVar9 = &DAT_711a3afc;
  }
  else {
    puVar9 = &DAT_711a3afc;
    puVar4 = DAT_711a3afc;
    do {
      puVar3 = puVar4;
      if ((int)puVar4[4] < param_1) {
        puVar4 = puVar4 + 1;
        puVar3 = puVar9;
      }
      puVar9 = puVar3;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
    if ((undefined4 **)puVar9 == &DAT_711a3afc) goto LAB_715a99d4;
    if (param_1 < (int)puVar9[4]) {
      puVar9 = &DAT_711a3afc;
    }
  }
  if ((undefined4 **)puVar9 != &DAT_711a3afc) {
    thunk_cAVowcMDgjNlKlwaXlLRnhcfdxnJsEWOPLMGMHS(&uStack_30);
    iStack_98 = uStack_30 + 50000000;
    iStack_94 = iStack_2c + (uint)(0xfd050f7f < uStack_30);
    do {
      iVar5 = puVar9[8];
      bVar13 = iVar5 == 3;
      if (!bVar13) {
        iVar5 = puVar9[0xe];
      }
    } while (((bVar13 || iVar5 == 3) || (puVar9[0x14] == 3)) &&
            (iVar5 = FUN_713a2214(&DAT_711a3af4,&puStack_38,&iStack_98), iVar5 != 1));
    imp___aeabi_memcpy8(&iStack_98,puVar9 + 6,0x60);
    puVar4 = puVar9;
    puVar3 = (undefined4 *)puVar9[1];
    if ((undefined4 *)puVar9[1] == (undefined4 *)0x0) {
      do {
        puVar6 = (undefined4 *)puVar4[2];
        bVar13 = (undefined4 *)*puVar6 != puVar4;
        puVar4 = puVar6;
      } while (bVar13);
    }
    else {
      do {
        puVar6 = puVar3;
        puVar3 = (undefined4 *)*puVar6;
      } while ((undefined4 *)*puVar6 != (undefined4 *)0x0);
    }
    if (DAT_711a3af8 == puVar9) {
      DAT_711a3af8 = puVar6;
    }
    DAT_711a3b00 = DAT_711a3b00 + -1;
    FUN_71368054(DAT_711a3afc,puVar9);
    thunk_qNQrlu(puVar9);
    iVar5 = DAT_711a3b04;
    if (DAT_711a3b08 < DAT_711a3b0c) {
      piVar12 = DAT_711a3b08 + 1;
      *DAT_711a3b08 = param_1;
    }
    else {
      iVar7 = (int)DAT_711a3b08 - DAT_711a3b04;
      iVar1 = iVar7 >> 2;
      uVar11 = iVar1 + 1;
      if (0x3fffffff < uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_714f2b1c(&DAT_711a3b04);
      }
      uVar2 = (int)DAT_711a3b0c - DAT_711a3b04 >> 1;
      if (uVar11 < uVar2) {
        uVar11 = uVar2;
      }
      if (0x7ffffffb < (uint)((int)DAT_711a3b0c - DAT_711a3b04)) {
        uVar11 = 0x3fffffff;
      }
      if (uVar11 == 0) {
        iVar8 = 0;
      }
      else {
        if (0x3fffffff < uVar11) goto LAB_715a9e54;
        iVar8 = thunk_MwhHq(uVar11 << 2);
      }
      piVar12 = (int *)(iVar8 + iVar1 * 4);
      *piVar12 = param_1;
      imp___aeabi_memcpy4(iVar8,iVar5,iVar7);
      DAT_711a3b0c = (int *)(iVar8 + uVar11 * 4);
      piVar12 = piVar12 + 1;
      DAT_711a3b04 = iVar8;
      if (iVar5 != 0) {
        DAT_711a3b08 = piVar12;
        thunk_qNQrlu(iVar5);
      }
    }
    DAT_711a3b08 = piVar12;
    thunk_KmAAJrQeDYcikipjnSTRnrUxnxfqYglsjaMkPyhpSaUedr(&DAT_711a3af4);
    iVar1 = DAT_711a3b10;
    iVar5 = iStack_90;
    if (iStack_90 != 3) {
      iVar5 = iStack_78;
    }
    if ((iStack_90 != 3 && iVar5 != 3) && (iStack_60 != 3)) {
      if (cStack_34 == '\0') {
LAB_715a9e68:
                    /* WARNING: Subroutine does not return */
        thunk_BryazjfoMPqEkZEtKkG_KttlecoGMjr_tAmWbCi(1,s_unique_lock__unlock__not_locked_70070888);
      }
      thunk_QgduklVhdVlmSiqzGQeutncbrNj(puStack_38);
      cStack_34 = '\0';
      if (iStack_94 != 0) {
        imp_glDeleteFramebuffers(1,(uint)&iStack_98 | 4);
      }
      if (iStack_98 != 0) {
        imp_glDeleteTextures(1,&iStack_98);
      }
      if (iStack_8c != 0) {
        imp_glDeleteSync();
      }
      if (iStack_88 != 0) {
        imp_glDeleteSync();
      }
      uStack_84 = 0;
      iStack_88 = 0;
      iStack_8c = 0;
      iStack_90 = 0;
      iStack_94 = 0;
      iStack_98 = 0;
      if (iStack_7c != 0) {
        imp_glDeleteFramebuffers(1,&iStack_7c);
      }
      if (iStack_80 != 0) {
        imp_glDeleteTextures(1,&iStack_80);
      }
      if (iStack_74 != 0) {
        imp_glDeleteSync();
      }
      if (iStack_70 != 0) {
        imp_glDeleteSync();
      }
      iStack_80 = 0;
      iStack_7c = 0;
      iStack_78 = 0;
      iStack_74 = 0;
      iStack_70 = 0;
      uStack_6c = 0;
      if (iStack_64 != 0) {
        imp_glDeleteFramebuffers(1,&iStack_64);
      }
      if (iStack_68 != 0) {
        imp_glDeleteTextures(1,&iStack_68);
      }
      if (iStack_5c != 0) {
        imp_glDeleteSync();
      }
      if (iStack_58 != 0) {
        imp_glDeleteSync();
      }
      iStack_68 = 0;
      iStack_64 = 0;
      iStack_60 = 0;
      iStack_5c = 0;
      iStack_58 = 0;
      uStack_54 = 0;
      FUN_715a76e0();
    }
    else if (DAT_711a3b14 < DAT_711a3b18) {
      piVar12 = DAT_711a3b14 + 2;
      piVar10 = DAT_711a3b14 + 0x1a;
      *DAT_711a3b14 = param_1;
      imp___aeabi_memcpy8(piVar12,&iStack_98,0x60);
      DAT_711a3b14 = piVar10;
    }
    else {
      iVar5 = (int)DAT_711a3b14 - DAT_711a3b10;
      uVar11 = (iVar5 >> 3) * -0x3b13b13b + 1;
      if (0x2762762 < uVar11) {
        FUN_715ae6bc();
        goto LAB_715a9e68;
      }
      iVar7 = (int)DAT_711a3b18 - DAT_711a3b10 >> 3;
      if (uVar11 < (uint)(iVar7 * -0x76276276)) {
        uVar11 = iVar7 * -0x76276276;
      }
      if (0x13b13b0 < (uint)(iVar7 * -0x3b13b13b)) {
        uVar11 = 0x2762762;
      }
      if (uVar11 == 0) {
        iVar7 = 0;
      }
      else {
        if (0x2762762 < uVar11) {
LAB_715a9e54:
                    /* WARNING: Subroutine does not return */
          FUN_712f6cf0();
        }
        iVar7 = thunk_MwhHq(uVar11 * 0x68);
      }
      piVar12 = (int *)(iVar7 + (iVar5 >> 3) * 8);
      *piVar12 = param_1;
      imp___aeabi_memcpy8(piVar12 + 2,&iStack_98,0x60);
      iVar8 = (int)piVar12 - iVar5;
      imp___aeabi_memcpy8(iVar8,iVar1,iVar5);
      DAT_711a3b18 = (int *)(uVar11 * 0x68 + iVar7);
      piVar12 = piVar12 + 0x1a;
      DAT_711a3b10 = iVar8;
      DAT_711a3b14 = piVar12;
      if (iVar1 != 0) {
        thunk_qNQrlu(iVar1);
        DAT_711a3b14 = piVar12;
      }
    }
    if (cStack_34 == '\0') {
      return;
    }
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(puStack_38);
  return;
}


// =========================================================================
// Function: FUN_715aa3c8
// Entry: 0x715aa3c8 | Size: 1036 bytes
// =========================================================================

void FUN_715aa3c8(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_711a3b40);
  puVar6 = &DAT_711a3b48;
  if (DAT_711a3b48 != (undefined4 *)0x0) {
    puVar3 = &DAT_711a3b48;
    puVar6 = DAT_711a3b48;
    do {
      puVar8 = puVar6;
      if ((int)puVar6[4] < param_1) {
        puVar6 = puVar6 + 1;
        puVar8 = puVar3;
      }
      puVar3 = puVar8;
      puVar6 = (undefined4 *)*puVar6;
    } while (puVar6 != (undefined4 *)0x0);
    puVar6 = &DAT_711a3b48;
    if (((undefined4 **)puVar3 != &DAT_711a3b48) && (puVar6 = puVar3, param_1 < (int)puVar3[4])) {
      puVar6 = &DAT_711a3b48;
    }
  }
  if ((undefined4 **)puVar6 == &DAT_711a3b48) {
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_711a3b40);
    return;
  }
  uVar9 = puVar6[6];
  uVar4 = puVar6[7];
  puVar3 = puVar6;
  puVar8 = (undefined4 *)puVar6[1];
  if ((undefined4 *)puVar6[1] == (undefined4 *)0x0) {
    do {
      puVar5 = (undefined4 *)puVar3[2];
      bVar10 = (undefined4 *)*puVar5 != puVar3;
      puVar3 = puVar5;
    } while (bVar10);
  }
  else {
    do {
      puVar5 = puVar8;
      puVar8 = (undefined4 *)*puVar5;
    } while ((undefined4 *)*puVar5 != (undefined4 *)0x0);
  }
  if (DAT_711a3b44 == puVar6) {
    DAT_711a3b44 = puVar5;
  }
  DAT_711a3b4c = DAT_711a3b4c + -1;
  FUN_71368054(DAT_711a3b48,puVar6);
  thunk_qNQrlu(puVar6);
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_711a3b40);
  iVar1 = imp_eglGetCurrentDisplay();
  uVar11 = imp_eglGetCurrentContext();
  iVar2 = (int)((ulonglong)uVar11 >> 0x20);
  if (iVar1 != 0) {
    iVar2 = (int)uVar11;
  }
  if ((iVar1 == 0 || (int)uVar11 == 0) || (iVar2 = FUN_715a7df4(iVar1,iVar2), iVar2 == 0)) {
    return;
  }
  uStack_28 = 0;
  uStack_2c = 0;
  imp_glGetIntegerv(0x8069,&uStack_28);
  imp_glGetIntegerv(0x8ca6,&uStack_2c);
  if (param_4 < 2) {
    param_4 = 1;
  }
  iVar2 = FUN_71ba0440(param_2,param_4);
  iVar1 = FUN_71ba0440(param_3,param_4);
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  iVar7 = 1;
  if (1 < iVar2) {
    iVar7 = iVar2;
  }
  iVar2 = imp_glIsEnabled(0xc11);
  if (iVar2 != 0) {
    imp_glDisable(0xc11);
  }
  uStack_44 = 0;
  uStack_48 = 0;
  uStack_40 = uVar9;
  uStack_3c = uVar4;
  uStack_38 = param_2;
  uStack_34 = param_3;
  imp_glGenTextures(1,&uStack_48);
  imp_glBindTexture(0xde1,uStack_48);
  imp_glTexStorage2D(0xde1,1,0x8058,iVar7,iVar1);
  imp_glTexParameteri(0xde1,0x2801,0x2601);
  imp_glTexParameteri(0xde1,0x2800,0x2601);
  imp_glTexParameteri(0xde1,0x2802,0x812f);
  imp_glTexParameteri(0xde1,0x2803,0x812f);
  uStack_4c = 0;
  imp_glGenFramebuffers(1,&uStack_4c);
  imp_glBindFramebuffer(0x8ca9,uStack_4c);
  imp_glFramebufferTexture2D(0x8ca9,0x8ce0,0xde1,uStack_48,0);
  imp_glBlitFramebuffer(0,0,param_2,param_3,0,0,iVar7,iVar1,0x4000,0x2601);
  imp_glBindFramebuffer(0x8ca9,uStack_2c);
  imp_glDeleteFramebuffers(1,&uStack_4c);
  imp_glBindTexture(0xde1,uStack_28);
  if (iVar2 != 0) {
    imp_glEnable(0xc11);
  }
  uStack_44 = imp_glFenceSync(0x9117,0);
  imp_glFlush();
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_711a3b40);
  puVar6 = &DAT_711a3b54;
  puVar3 = DAT_711a3b54;
  do {
    puVar8 = puVar6;
    if (puVar3 == (undefined4 *)0x0) {
LAB_715aa740:
      puVar3 = (undefined4 *)thunk_MwhHq(0x30);
      puVar3[4] = param_1;
      puVar3[6] = 0;
      puVar3[7] = 0;
      puVar3[8] = 0;
      puVar3[9] = 0;
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = puVar6;
      *puVar8 = puVar3;
      puVar6 = puVar3;
      if ((int *)*DAT_711a3b50 != (int *)0x0) {
        puVar6 = (undefined4 *)*puVar8;
        DAT_711a3b50 = (int *)*DAT_711a3b50;
      }
      FUN_712f807c(DAT_711a3b54,puVar6);
      DAT_711a3b58 = DAT_711a3b58 + 1;
      puVar6 = puVar3;
LAB_715aa7b0:
      puVar6[6] = uStack_48;
      puVar6[7] = uStack_44;
      puVar6[8] = uStack_40;
      puVar6[9] = uStack_3c;
      puVar6[10] = uStack_38;
      puVar6[0xb] = uStack_34;
      thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_711a3b40);
      return;
    }
    while (puVar6 = puVar3, (int)puVar6[4] <= param_1) {
      if (param_1 <= (int)puVar6[4]) goto LAB_715aa7b0;
      puVar3 = (undefined4 *)puVar6[1];
      if ((undefined4 *)puVar6[1] == (undefined4 *)0x0) {
        puVar8 = puVar6 + 1;
        goto LAB_715aa740;
      }
    }
    puVar3 = (undefined4 *)*puVar6;
  } while( true );
}


// =========================================================================
// Function: FUN_715aace0
// Entry: 0x715aace0 | Size: 260 bytes
// =========================================================================

void FUN_715aace0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
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
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_34 = 0;
  uStack_38 = 0;
  uStack_3c = 0;
  uStack_40 = 0;
  iVar1 = FUN_715aaf4c(param_1,&uStack_40);
  uStack_6c = uStack_3c;
  uStack_70 = uStack_40;
  if (iVar1 != 0) {
    uStack_68 = uStack_38;
    uStack_64 = uStack_34;
    uVar2 = FUN_71ba1b94(param_2);
    uVar3 = FUN_71ba1b94(uStack_30);
    uStack_60 = FUN_71ba13e0(uVar2,uVar3);
    uVar2 = FUN_71ba1b94(uStack_2c);
    uVar4 = FUN_71ba1b94(param_5);
    uStack_54 = FUN_71ba13e0(uVar4,uVar2);
    uVar4 = FUN_71ba1b94(param_4);
    uStack_58 = FUN_71ba13e0(uVar4,uVar3);
    uVar3 = FUN_71ba1b94(param_3);
    uStack_5c = FUN_71ba13e0(uVar3,uVar2);
    uStack_4c = param_7;
    uStack_50 = param_6;
    uStack_48 = 0;
    FUN_715ab278(&uStack_70);
  }
  return;
}


// =========================================================================
// Function: FUN_715aaf4c
// Entry: 0x715aaf4c | Size: 428 bytes
// =========================================================================

undefined4 FUN_715aaf4c(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_711a3b40);
  if (DAT_711a3b48 != (undefined4 *)0x0) {
    puVar1 = &DAT_711a3b48;
    puVar4 = DAT_711a3b48;
    do {
      puVar2 = puVar4;
      if ((int)puVar4[4] < param_1) {
        puVar4 = puVar4 + 1;
        puVar2 = puVar1;
      }
      puVar1 = puVar2;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
    if (((undefined4 **)puVar1 != &DAT_711a3b48) && ((int)puVar1[4] <= param_1)) {
      puVar4 = puVar1;
      puVar2 = (undefined4 *)puVar1[1];
      if ((undefined4 *)puVar1[1] == (undefined4 *)0x0) {
        do {
          puVar5 = (undefined4 *)puVar4[2];
          bVar11 = (undefined4 *)*puVar5 != puVar4;
          puVar4 = puVar5;
        } while (bVar11);
      }
      else {
        do {
          puVar5 = puVar2;
          puVar2 = (undefined4 *)*puVar5;
        } while ((undefined4 *)*puVar5 != (undefined4 *)0x0);
      }
      if (DAT_711a3b44 == puVar1) {
        DAT_711a3b44 = puVar5;
      }
      DAT_711a3b4c = DAT_711a3b4c + -1;
      FUN_71368054(DAT_711a3b48,puVar1);
      thunk_qNQrlu(puVar1);
    }
  }
  puVar1 = DAT_711a3b54;
  uVar9 = 0;
  if (DAT_711a3b54 != (undefined4 *)0x0) {
    puVar4 = &DAT_711a3b54;
    puVar2 = DAT_711a3b54;
    do {
      puVar5 = puVar2;
      if ((int)puVar2[4] < param_1) {
        puVar2 = puVar2 + 1;
        puVar5 = puVar4;
      }
      puVar4 = puVar5;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
    if (((undefined4 **)puVar4 != &DAT_711a3b54) && ((int)puVar4[4] <= param_1)) {
      uVar9 = puVar4[7];
      uVar6 = puVar4[8];
      uVar7 = puVar4[9];
      uVar8 = puVar4[10];
      uVar10 = puVar4[0xb];
      *param_2 = puVar4[6];
      param_2[1] = uVar9;
      param_2[2] = uVar6;
      param_2[3] = uVar7;
      param_2[4] = uVar8;
      param_2[5] = uVar10;
      puVar2 = puVar4;
      puVar5 = (undefined4 *)puVar4[1];
      if ((undefined4 *)puVar4[1] == (undefined4 *)0x0) {
        do {
          puVar3 = (undefined4 *)puVar2[2];
          bVar11 = (undefined4 *)*puVar3 != puVar2;
          puVar2 = puVar3;
        } while (bVar11);
      }
      else {
        do {
          puVar3 = puVar5;
          puVar5 = (undefined4 *)*puVar3;
        } while ((undefined4 *)*puVar3 != (undefined4 *)0x0);
      }
      if (DAT_711a3b50 == puVar4) {
        DAT_711a3b50 = puVar3;
      }
      DAT_711a3b58 = DAT_711a3b58 + -1;
      FUN_71368054(puVar1,puVar4);
      thunk_qNQrlu(puVar4);
      uVar9 = 1;
    }
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_711a3b40);
  return uVar9;
}


// =========================================================================
// Function: FUN_715ab278
// Entry: 0x715ab278 | Size: 352 bytes
// =========================================================================

void FUN_715ab278(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 *puVar11;
  
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_711a3af0);
  iVar2 = DAT_711a3b5c;
  if (DAT_711a3b60 < DAT_711a3b64) {
    uVar5 = param_1[1];
    uVar6 = param_1[2];
    uVar7 = param_1[3];
    uVar8 = param_1[4];
    uVar9 = param_1[5];
    *DAT_711a3b60 = *param_1;
    DAT_711a3b60[1] = uVar5;
    DAT_711a3b60[2] = uVar6;
    DAT_711a3b60[3] = uVar7;
    DAT_711a3b60[4] = uVar8;
    DAT_711a3b60[5] = uVar9;
    uVar5 = param_1[7];
    uVar6 = param_1[8];
    uVar7 = param_1[9];
    uVar8 = param_1[10];
    uVar9 = param_1[0xb];
    DAT_711a3b60[6] = param_1[6];
    DAT_711a3b60[7] = uVar5;
    DAT_711a3b60[8] = uVar6;
    DAT_711a3b60[9] = uVar7;
    DAT_711a3b60[10] = uVar8;
    DAT_711a3b60[0xb] = uVar9;
    puVar11 = DAT_711a3b60 + 0xc;
  }
  else {
    iVar4 = (int)DAT_711a3b60 - DAT_711a3b5c;
    iVar1 = iVar4 >> 4;
    uVar10 = iVar1 * -0x55555555 + 1;
    if (0x5555555 < uVar10) {
      FUN_715ae324();
LAB_715ab3d4:
                    /* WARNING: Subroutine does not return */
      FUN_712f6cf0();
    }
    iVar3 = (int)DAT_711a3b64 - DAT_711a3b5c >> 4;
    if (uVar10 < (uint)(iVar3 * 0x55555556)) {
      uVar10 = iVar3 * 0x55555556;
    }
    if (0x2aaaaa9 < (uint)(iVar3 * -0x55555555)) {
      uVar10 = 0x5555555;
    }
    if (uVar10 == 0) {
      iVar3 = 0;
    }
    else {
      if (0x5555555 < uVar10) goto LAB_715ab3d4;
      iVar3 = thunk_MwhHq(uVar10 * 0x30);
    }
    puVar11 = (undefined4 *)(iVar3 + iVar1 * 0x10);
    uVar5 = param_1[1];
    uVar6 = param_1[2];
    uVar7 = param_1[3];
    uVar8 = param_1[4];
    uVar9 = param_1[5];
    *puVar11 = *param_1;
    puVar11[1] = uVar5;
    puVar11[2] = uVar6;
    puVar11[3] = uVar7;
    puVar11[4] = uVar8;
    puVar11[5] = uVar9;
    uVar5 = param_1[7];
    uVar6 = param_1[8];
    uVar7 = param_1[9];
    uVar8 = param_1[10];
    uVar9 = param_1[0xb];
    puVar11[6] = param_1[6];
    puVar11[7] = uVar5;
    puVar11[8] = uVar6;
    puVar11[9] = uVar7;
    puVar11[10] = uVar8;
    puVar11[0xb] = uVar9;
    iVar4 = (int)puVar11 - iVar4;
    imp___aeabi_memcpy8(iVar4,iVar2);
    puVar11 = puVar11 + 0xc;
    DAT_711a3b64 = (undefined4 *)(iVar3 + uVar10 * 0x30);
    DAT_711a3b5c = iVar4;
    if (iVar2 != 0) {
      DAT_711a3b60 = puVar11;
      thunk_qNQrlu(iVar2);
    }
  }
  DAT_711a3b60 = puVar11;
  thunk_KmAAJrQeDYcikipjnSTRnrUxnxfqYglsjaMkPyhpSaUedr(&DAT_711a3af4);
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_711a3af0);
  return;
}


