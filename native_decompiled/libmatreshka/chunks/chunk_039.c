// =========================================================================
// Function: thunk_OasPHJlOUimXFVIcZSmgq_
// Entry: 0x71e06670 | Size: 1 bytes
// =========================================================================

void thunk_OasPHJlOUimXFVIcZSmgq_
               (undefined8 *param_1,undefined4 *param_2,uint param_3,int param_4,undefined4 param_5,
               undefined4 param_6)

{
  undefined4 *puVar1;
  short sVar2;
  short sVar3;
  undefined8 uVar4;
  ushort uVar5;
  undefined8 *puVar6;
  short *psVar7;
  undefined4 uVar8;
  short *psVar9;
  ushort uVar10;
  uint uVar11;
  int *piVar12;
  undefined4 *puVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  int aiStack_1428 [320];
  int aiStack_f28 [320];
  int aiStack_a28 [2];
  undefined8 auStack_a20 [159];
  int aiStack_528 [2];
  undefined8 auStack_520 [159];
  
  if (param_3 == 0) {
    FUN_71b11d94(aiStack_528,0,aiStack_f28,&DAT_7009a73e,param_5);
    FUN_71b11d94(aiStack_a28,0,aiStack_1428,&DAT_7009a738,param_6);
    return;
  }
  uVar15 = 0;
  if (3 < param_3) {
    uVar15 = param_3 & 0xfffffffc;
    piVar12 = aiStack_528;
    piVar14 = aiStack_a28;
    puVar6 = param_1;
    uVar11 = uVar15;
    puVar13 = param_2;
    do {
      uVar11 = uVar11 - 4;
      uVar4 = *puVar6;
      puVar6 = puVar6 + 1;
      uVar8 = *puVar13;
      puVar1 = puVar13 + 1;
      puVar13 = puVar13 + 2;
      auVar17._8_4_ = uVar8;
      auVar17._0_8_ = uVar4;
      auVar17._12_4_ = *puVar1;
      auVar18 = VectorCopyLong(uVar4,2,0);
      auVar17 = VectorCopyLong(auVar17._8_8_,2,0);
      auVar19 = VectorAdd(auVar17,auVar18,4);
      auVar17 = VectorSub(auVar18,auVar17,4);
      auVar18 = VectorShiftLeft(auVar19,10,0x20,0);
      auVar17 = VectorShiftLeft(auVar17,10,0x20,0);
      *(longlong *)piVar12 = auVar18._0_8_;
      *(longlong *)(piVar12 + 2) = auVar18._8_8_;
      piVar12 = piVar12 + 4;
      *(longlong *)piVar14 = auVar17._0_8_;
      *(longlong *)(piVar14 + 2) = auVar17._8_8_;
      piVar14 = piVar14 + 4;
    } while (uVar11 != 0);
    if (uVar15 == param_3) goto LAB_71b12044;
  }
  iVar16 = param_3 - uVar15;
  psVar7 = (short *)((int)param_1 + uVar15 * 2);
  psVar9 = (short *)((int)param_2 + uVar15 * 2);
  piVar12 = aiStack_528 + uVar15;
  piVar14 = aiStack_a28 + uVar15;
  do {
    sVar2 = *psVar7;
    iVar16 = iVar16 + -1;
    sVar3 = *psVar9;
    *piVar12 = ((int)sVar3 + (int)sVar2) * 0x400;
    *piVar14 = ((int)sVar2 - (int)sVar3) * 0x400;
    psVar7 = psVar7 + 1;
    psVar9 = psVar9 + 1;
    piVar12 = piVar12 + 1;
    piVar14 = piVar14 + 1;
  } while (iVar16 != 0);
LAB_71b12044:
  FUN_71b11d94(aiStack_528,param_3,aiStack_f28,&DAT_7009a73e,param_5);
  FUN_71b11d94(aiStack_a28,param_3,aiStack_1428,&DAT_7009a738,param_6);
  if (param_3 != 0) {
    uVar5 = 0;
    piVar12 = aiStack_f28;
    piVar14 = aiStack_1428;
    do {
      param_3 = param_3 - 1;
      iVar16 = *piVar14 + 0x200 >> 10;
      uVar8 = SignedSaturate(iVar16,0x10);
      SignedDoesSaturate(iVar16,0x10);
      *(short *)(param_4 + (short)uVar5 * 2) = (short)uVar8;
      uVar10 = uVar5 | 1;
      uVar5 = uVar5 + 2;
      iVar16 = *piVar12 + 0x200 >> 10;
      uVar8 = SignedSaturate(iVar16,0x10);
      SignedDoesSaturate(iVar16,0x10);
      *(short *)(param_4 + (short)uVar10 * 2) = (short)uVar8;
      piVar12 = piVar12 + 1;
      piVar14 = piVar14 + 1;
    } while (param_3 != 0);
  }
  return;
}


// =========================================================================
// Function: thunk_MHqCVHMN_fuWAI
// Entry: 0x71e06680 | Size: 1 bytes
// =========================================================================

uint thunk_MHqCVHMN_fuWAI(int param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  if (param_1 < 0) {
    bVar10 = param_1 == -0x80000000;
    param_1 = -param_1;
    if (bVar10) {
      param_1 = 0x7fffffff;
    }
  }
  else if (param_1 == 0) {
    return 0;
  }
  iVar9 = LZCOUNT(param_1) * 0x10000 + -0x10000;
  uVar2 = iVar9 >> 0x10;
  uVar6 = (param_1 << (uVar2 & 0xff)) + 0x8000U & 0xffff0000;
  if (0x7fff7fff < param_1 << (uVar2 & 0xff)) {
    uVar6 = 0x7fff0000;
  }
  if ((int)uVar6 < 0) {
    uVar6 = -uVar6;
  }
  iVar4 = (uVar6 >> 0x11) - 0x4000;
  iVar3 = iVar4 * iVar4 * -2;
  sVar1 = (short)((uint)iVar3 >> 0x10);
  uVar5 = (int)sVar1 * (int)sVar1;
  uVar7 = (uVar5 & 0x7fffffff) >> 0xf;
  iVar8 = iVar4 * uVar7;
  uVar7 = ((uint)(iVar4 * iVar4) >> 0xf) * iVar4 + (uVar6 >> 1) + (iVar3 >> 1) +
          (uVar7 * 4 + (uVar5 >> 0xf & 0xffff)) * -0x2000 +
          ((iVar8 * 2 >> 0x10) * 8 - (iVar8 * 2 >> 0x10)) * 0x2000 + 0x40008000;
  sVar1 = (short)((uint)iVar9 >> 0x10);
  uVar5 = (uint)(short)(sVar1 - (sVar1 >> 0xf));
  uVar6 = (int)uVar5 >> 1;
  if ((uVar5 & 0xfffffffe) != uVar2) {
    return (uVar7 >> 0x10) >> (uVar6 & 0xff);
  }
  return (((int)uVar7 >> 0x10) * 0xb504 + 0x8000U >> 0xf & 0xfffe) >> (uVar6 & 0xff);
}


// =========================================================================
// Function: thunk_QNNMCprZvQGURcnSqOrbCMlbFtQ
// Entry: 0x71e06690 | Size: 1 bytes
// =========================================================================

void thunk_QNNMCprZvQGURcnSqOrbCMlbFtQ(undefined4 param_1,float *param_2)

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
// Function: thunk_xVxUneOsxcpHjJFXjDJxgQZsSkqJhwlfSpb
// Entry: 0x71e066a0 | Size: 1 bytes
// =========================================================================

void thunk_xVxUneOsxcpHjJFXjDJxgQZsSkqJhwlfSpb(undefined4 param_1,int param_2)

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
// Function: thunk_BcnFzmOBRDCkxkAAWoSgkIeUOhZMXSlNooHi
// Entry: 0x71e066b0 | Size: 1 bytes
// =========================================================================

void thunk_BcnFzmOBRDCkxkAAWoSgkIeUOhZMXSlNooHi(undefined4 param_1,float *param_2)

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
// Function: thunk_OcinZnBvstHrgVHdmCcFUrWSpMbrwvqMBqz
// Entry: 0x71e066c0 | Size: 1 bytes
// =========================================================================

void thunk_OcinZnBvstHrgVHdmCcFUrWSpMbrwvqMBqz(undefined4 param_1,float *param_2)

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
// Function: thunk_AawrmrWWdbsBIfhgQLowXHNkEkhANTcNe_g
// Entry: 0x71e066d0 | Size: 1 bytes
// =========================================================================

void thunk_AawrmrWWdbsBIfhgQLowXHNkEkhANTcNe_g(undefined4 param_1,float *param_2)

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
// Function: thunk_JnIENwrUepweORinahuaAwahiPBzQw_WDnR
// Entry: 0x71e066e0 | Size: 1 bytes
// =========================================================================

void thunk_JnIENwrUepweORinahuaAwahiPBzQw_WDnR(undefined4 param_1,float *param_2)

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
// Function: thunk_xNLjbbPjttCQUqxFHPxAdYEEMgpwjOX_tDoK
// Entry: 0x71e066f0 | Size: 1 bytes
// =========================================================================

void thunk_xNLjbbPjttCQUqxFHPxAdYEEMgpwjOX_tDoK(undefined4 param_1,float *param_2)

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
// Function: thunk_WhzKCZEiMHjbbgEoRijshYt
// Entry: 0x71e06700 | Size: 1 bytes
// =========================================================================

void thunk_WhzKCZEiMHjbbgEoRijshYt(undefined1 *param_1)

{
  *param_1 = 0;
  return;
}


// =========================================================================
// Function: thunk_RojLCGwtwXzRzGHcMRBkeMK
// Entry: 0x71e06710 | Size: 1 bytes
// =========================================================================

void thunk_RojLCGwtwXzRzGHcMRBkeMK(void)

{
  return;
}


// =========================================================================
// Function: thunk_bEmuaqCJZZkepWiPVTHzKngWmkMIMJSFA
// Entry: 0x71e06720 | Size: 1 bytes
// =========================================================================

void thunk_bEmuaqCJZZkepWiPVTHzKngWmkMIMJSFA
               (uint param_1,int param_2,float *param_3,uint *param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  undefined4 *puVar5;
  float *pfVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fStack_48;
  float fStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  uVar7 = *param_4;
  if (uVar7 * 4 < param_1) {
    uVar7 = param_1 >> 2;
    *param_4 = uVar7;
    param_4[1] = 1;
    if (0xb < param_1) {
      uVar11 = param_1 >> 3;
      fVar13 = (float)VectorUnsignedToFloat(uVar11,(byte)(in_fpscr >> 0x16) & 3);
      *param_5 = 0x3f800000;
      param_5[1] = 0;
      uVar1 = imp_cosf((0.7853982 / fVar13) * fVar13);
      param_5[uVar11] = uVar1;
      (param_5 + uVar11)[1] = uVar1;
      if (param_1 < 0x18) {
        uVar11 = param_4[1];
        goto joined_r0x71b0e0a4;
      }
      puVar5 = param_5 + 2;
      uVar10 = 2;
      iVar2 = uVar7 << 2;
      puVar8 = puVar5;
      do {
        fVar14 = (float)VectorUnsignedToFloat(uVar10,(byte)(in_fpscr >> 0x16) & 3);
        imp_sincosf((0.7853982 / fVar13) * fVar14,&uStack_3c,&uStack_40);
        uVar10 = uVar10 + 2;
        puVar8[1] = uStack_3c;
        *puVar8 = uStack_40;
        puVar8 = puVar8 + 2;
        *(undefined4 *)((int)puVar5 + iVar2 + -0x10) = uStack_3c;
        *(undefined4 *)((int)puVar5 + iVar2 + -0xc) = uStack_40;
        iVar2 = iVar2 + -8;
      } while (uVar10 < uVar11);
      FUN_71b0e58c(uVar7,param_4 + 2,param_5);
    }
  }
  uVar11 = param_4[1];
joined_r0x71b0e0a4:
  if (uVar11 * 4 < param_1) {
    uVar11 = param_1 >> 2;
    param_4[1] = uVar11;
    if (7 < param_1) {
      uVar10 = param_1 >> 3;
      pfVar6 = (float *)(param_5 + uVar7);
      fVar14 = (float)VectorUnsignedToFloat(uVar10,(byte)(in_fpscr >> 0x16) & 3);
      fVar13 = (float)imp_cosf((0.7853982 / fVar14) * fVar14);
      *pfVar6 = fVar13;
      pfVar6[uVar10] = fVar13 * 0.5;
      if (0xf < param_1) {
        pfVar3 = pfVar6 + uVar11;
        uVar12 = 1;
        do {
          pfVar3 = pfVar3 + -1;
          pfVar6 = pfVar6 + 1;
          fVar13 = (float)VectorUnsignedToFloat(uVar12,(byte)(in_fpscr >> 0x16) & 3);
          imp_sincosf((0.7853982 / fVar14) * fVar13,&fStack_44,&fStack_48);
          uVar12 = uVar12 + 1;
          *pfVar6 = fStack_48 * 0.5;
          *pfVar3 = fStack_44 * 0.5;
        } while (uVar10 != uVar12);
      }
    }
  }
  if (param_2 < 0) {
    fVar13 = (*param_3 - param_3[1]) * 0.5;
    param_3[1] = fVar13;
    *param_3 = *param_3 - fVar13;
    if (param_1 < 5) {
      if (param_1 == 4) {
        FUN_71b0e8ac(4,param_3,param_5);
        return;
      }
    }
    else {
      uVar10 = param_1 >> 1;
      param_3[1] = -fVar13;
      iVar2 = FUN_71ba0484(uVar11 << 1,uVar10);
      if (param_1 != 5) {
        pfVar3 = param_3 + (param_1 - 1);
        iVar9 = 0;
        uVar12 = 2;
        pfVar6 = param_3;
        do {
          pfVar4 = pfVar6 + 2;
          iVar9 = iVar9 + iVar2;
          uVar12 = uVar12 + 2;
          fVar14 = pfVar6[3] + *pfVar3;
          fVar13 = *pfVar4 - pfVar3[-1];
          fVar20 = (float)param_5[uVar7 + iVar9] * fVar14 +
                   (0.5 - (float)param_5[uVar7 + (uVar11 - iVar9)]) * fVar13;
          fVar13 = (0.5 - (float)param_5[uVar7 + (uVar11 - iVar9)]) * fVar14 -
                   fVar13 * (float)param_5[uVar7 + iVar9];
          *pfVar4 = *pfVar4 - fVar20;
          pfVar6[3] = fVar13 - pfVar6[3];
          pfVar3[-1] = pfVar3[-1] + fVar20;
          *pfVar3 = fVar13 - *pfVar3;
          pfVar3 = pfVar3 + -2;
          pfVar6 = pfVar4;
        } while (uVar12 < uVar10);
      }
      param_3[uVar10 + 1] = -param_3[uVar10 + 1];
      FUN_71b0e58c(param_1,param_4 + 2,param_3);
      uVar7 = 2;
      if (8 < param_1) {
        FUN_71b0ea34(param_1,param_3,param_5);
        uVar7 = 8;
        if (0x20 < param_1) {
          uVar11 = 0x20;
          uVar10 = 8;
          do {
            uVar7 = uVar11;
            FUN_71b0ed3c(param_1,uVar10,param_3,param_5);
            uVar11 = uVar7 << 2;
            uVar10 = uVar7;
          } while (uVar7 * 4 < param_1);
        }
      }
      if (param_1 == uVar7 * 4) {
        if (uVar7 != 0) {
          param_3 = param_3 + 1;
          uVar11 = 0;
          do {
            pfVar3 = param_3 + uVar7 * 2;
            pfVar4 = param_3 + uVar7 * 3;
            pfVar6 = param_3 + uVar7;
            uVar11 = uVar11 + 2;
            fVar14 = *pfVar6 - *param_3;
            fVar16 = param_3[-1] + pfVar6[-1];
            fVar13 = param_3[-1] - pfVar6[-1];
            fVar20 = pfVar3[-1] + pfVar4[-1];
            fVar19 = -*param_3 - *pfVar6;
            fVar18 = *pfVar3 + *pfVar4;
            fVar15 = pfVar3[-1] - pfVar4[-1];
            fVar17 = *pfVar3 - *pfVar4;
            param_3[-1] = fVar16 + fVar20;
            pfVar3[-1] = fVar16 - fVar20;
            *param_3 = fVar19 - fVar18;
            param_3 = param_3 + 2;
            *pfVar3 = fVar19 + fVar18;
            pfVar6[-1] = fVar13 - fVar17;
            *pfVar6 = fVar14 - fVar15;
            pfVar4[-1] = fVar13 + fVar17;
            *pfVar4 = fVar14 + fVar15;
          } while (uVar11 < uVar7);
        }
      }
      else if (uVar7 != 0) {
        uVar11 = 0;
        do {
          pfVar6 = param_3 + uVar7;
          fVar13 = *param_3;
          fVar14 = param_3[1];
          uVar11 = uVar11 + 2;
          fVar20 = *pfVar6;
          fVar15 = pfVar6[1];
          *param_3 = fVar13 + fVar20;
          param_3[1] = -fVar14 - pfVar6[1];
          param_3 = param_3 + 2;
          *pfVar6 = fVar13 - fVar20;
          pfVar6[1] = fVar15 - fVar14;
        } while (uVar11 < uVar7);
      }
    }
    return;
  }
  if (param_1 < 5) {
    if (param_1 == 4) {
      FUN_71b0e8ac(4,param_3,param_5);
    }
  }
  else {
    FUN_71b0e58c(param_1,param_4 + 2,param_3);
    FUN_71b0e8ac(param_1,param_3,param_5);
    iVar2 = FUN_71ba0484(uVar11 << 1,param_1 >> 1);
    if (param_1 != 5) {
      pfVar3 = param_3 + (param_1 - 1);
      iVar9 = 0;
      uVar10 = 2;
      pfVar6 = param_3;
      do {
        pfVar4 = pfVar6 + 2;
        iVar9 = iVar9 + iVar2;
        uVar10 = uVar10 + 2;
        fVar13 = *pfVar4 - pfVar3[-1];
        fVar14 = pfVar6[3] + *pfVar3;
        fVar20 = (float)param_5[uVar7 + iVar9] * fVar13 +
                 (0.5 - (float)param_5[uVar7 + (uVar11 - iVar9)]) * fVar14;
        fVar13 = (0.5 - (float)param_5[uVar7 + (uVar11 - iVar9)]) * fVar13 -
                 fVar14 * (float)param_5[uVar7 + iVar9];
        pfVar6[3] = pfVar6[3] - fVar20;
        *pfVar4 = *pfVar4 - fVar13;
        pfVar3[-1] = pfVar3[-1] + fVar13;
        *pfVar3 = *pfVar3 - fVar20;
        pfVar3 = pfVar3 + -2;
        pfVar6 = pfVar4;
      } while (uVar10 < param_1 >> 1);
    }
  }
  fVar13 = param_3[1];
  param_3[1] = *param_3 - fVar13;
  *param_3 = *param_3 + fVar13;
  return;
}


// =========================================================================
// Function: thunk_bgF_fwYom_BiejahSLG
// Entry: 0x71e06730 | Size: 1 bytes
// =========================================================================

uint thunk_bgF_fwYom_BiejahSLG(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = (uint)(0x3fffffff < param_1);
  if (0x3fffffff < param_1) {
    param_1 = param_1 + -0x40000000;
  }
  uVar4 = uVar1 << 0x1e | 0x10000000;
  uVar3 = uVar1 << 0x10 | 0x8000;
  if (param_1 < (int)uVar4) {
    uVar3 = uVar1 << 0x10;
  }
  uVar1 = uVar3 | 0x2000;
  if ((int)uVar4 <= param_1) {
    param_1 = param_1 - uVar4;
  }
  if ((int)(uVar1 * 0x2000) <= param_1) {
    uVar3 = uVar3 | 0x4000;
    param_1 = param_1 + uVar1 * -0x2000;
  }
  uVar1 = uVar3 | 0x1000;
  if ((int)(uVar1 * 0x1000) <= param_1) {
    uVar3 = uVar3 | 0x2000;
    param_1 = param_1 + uVar1 * -0x1000;
  }
  iVar2 = uVar3 + 0x800;
  if (iVar2 * 0x800 <= param_1) {
    uVar3 = uVar3 | 0x1000;
    param_1 = param_1 + iVar2 * -0x800;
  }
  iVar2 = uVar3 + 0x400;
  if (iVar2 * 0x400 <= param_1) {
    uVar3 = uVar3 | 0x800;
    param_1 = param_1 + iVar2 * -0x400;
  }
  iVar2 = uVar3 + 0x200;
  if (iVar2 * 0x200 <= param_1) {
    uVar3 = uVar3 | 0x400;
    param_1 = param_1 + iVar2 * -0x200;
  }
  iVar2 = uVar3 + 0x100;
  if (iVar2 * 0x100 <= param_1) {
    uVar3 = uVar3 | 0x200;
    param_1 = param_1 + iVar2 * -0x100;
  }
  iVar2 = uVar3 + 0x80;
  if (iVar2 * 0x80 <= param_1) {
    uVar3 = uVar3 | 0x100;
    param_1 = param_1 + iVar2 * -0x80;
  }
  iVar2 = uVar3 + 0x40;
  if (iVar2 * 0x40 <= param_1) {
    uVar3 = uVar3 | 0x80;
    param_1 = param_1 + iVar2 * -0x40;
  }
  iVar2 = uVar3 + 0x20;
  if (iVar2 * 0x20 <= param_1) {
    uVar3 = uVar3 | 0x40;
    param_1 = param_1 + iVar2 * -0x20;
  }
  iVar2 = uVar3 + 0x10;
  if (iVar2 * 0x10 <= param_1) {
    uVar3 = uVar3 | 0x20;
    param_1 = param_1 + iVar2 * -0x10;
  }
  iVar2 = uVar3 + 8;
  if (iVar2 * 8 <= param_1) {
    uVar3 = uVar3 | 0x10;
    param_1 = param_1 + iVar2 * -8;
  }
  iVar2 = uVar3 + 4;
  if (iVar2 * 4 <= param_1) {
    uVar3 = uVar3 | 8;
    param_1 = param_1 + iVar2 * -4;
  }
  iVar2 = uVar3 + 2;
  if (iVar2 * 2 <= param_1) {
    uVar3 = uVar3 | 4;
  }
  if (iVar2 * 2 <= param_1) {
    param_1 = param_1 + iVar2 * -2;
  }
  uVar1 = uVar3 >> 1;
  if ((int)uVar3 < param_1) {
    uVar1 = uVar3 >> 1 | 1;
  }
  return uVar1;
}


// =========================================================================
// Function: thunk_UqlnXcJWUkCAaTidfC
// Entry: 0x71e06740 | Size: 1 bytes
// =========================================================================

undefined4 thunk_UqlnXcJWUkCAaTidfC(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar9 = 0;
    uVar10 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uVar11 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uVar12 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    *param_1 = 1;
    param_1[1] = 0;
    param_1[2] = uVar10;
    param_1[3] = uVar11;
    param_1[4] = uVar12;
    param_1[0x45] = 0;
    param_1[0x46] = 0;
    thunk_CLUngYjaoGveSggqk_fjVgwDyPwBXqtPI_(param_1 + 5);
    uVar8 = DAT_7009b0b0;
    uVar7 = DAT_7009b0a8;
    uVar6 = DAT_7009b0a0;
    uVar1 = DAT_7009b060;
    *(undefined8 *)(param_1 + 0x2d) = DAT_7009b058;
    *(undefined8 *)(param_1 + 0x2f) = uVar1;
    uVar5 = DAT_7009b098;
    uVar4 = DAT_7009b090;
    uVar3 = DAT_7009b088;
    *(undefined8 *)(param_1 + 0x31) = DAT_7009b068;
    uVar2 = DAT_7009b080;
    uVar1 = DAT_7009b078;
    *(undefined8 *)(param_1 + 0x33) = DAT_7009b070;
    *(undefined8 *)(param_1 + 0x35) = uVar1;
    *(undefined8 *)(param_1 + 0x37) = uVar2;
    *(undefined8 *)(param_1 + 0x39) = uVar3;
    *(undefined8 *)(param_1 + 0x3b) = uVar4;
    *(undefined8 *)(param_1 + 0x3d) = uVar5;
    *(undefined8 *)(param_1 + 0x3f) = uVar6;
    *(undefined8 *)(param_1 + 0x41) = uVar7;
    *(undefined8 *)(param_1 + 0x43) = uVar8;
    imp___aeabi_memclr(param_1 + 0x47,0xc0);
    param_1[0xaa] = uVar9;
    param_1[0xab] = uVar10;
    param_1[0xac] = uVar11;
    param_1[0xad] = uVar12;
    param_1[0xad] = uVar9;
    param_1[0xae] = uVar10;
    param_1[0xaf] = uVar11;
    param_1[0xb0] = uVar12;
    param_1[0xb1] = 0x40008;
    *(undefined2 *)(param_1 + 0xb2) = 3;
    *(undefined4 *)((int)param_1 + 0x2ca) = 0x7000e;
    *(undefined2 *)((int)param_1 + 0x2ce) = 5;
    *(undefined8 *)(param_1 + 0x77) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x79) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x7b) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x7d) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x7f) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x81) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x83) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x85) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x87) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x89) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x8b) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x8d) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x8f) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x91) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x93) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x95) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x97) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x99) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x9b) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x9d) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x9f) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0xa1) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0xa3) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0xa5) = 0x2710271027102710;
    param_1[0xa9] = 0x6400640;
    param_1[0xa8] = 0x6400640;
    param_1[0xa7] = 0x6400640;
    param_1[0xb4] = 0x150018;
    *(undefined4 *)((int)param_1 + 0x2d6) = 0x300039;
    *(undefined2 *)(param_1 + 0xb5) = 0x18;
    *(undefined2 *)((int)param_1 + 0x2da) = 0x39;
    param_1[0xb7] = 0x2a;
    return 0;
  }
  return 0xffffffff;
}


// =========================================================================
// Function: thunk_KAaJcIqYcrGDRuvjKPFzUbt
// Entry: 0x71e06750 | Size: 1 bytes
// =========================================================================

undefined4 thunk_KAaJcIqYcrGDRuvjKPFzUbt(int param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    *(undefined4 *)(param_1 + 0x2c4) = 0x40008;
    *(undefined2 *)(param_1 + 0x2c8) = 3;
    *(undefined4 *)(param_1 + 0x2ca) = 0x7000e;
    *(undefined2 *)(param_1 + 0x2ce) = 5;
    *(undefined4 *)(param_1 + 0x2d0) = 0x150018;
    *(undefined2 *)(param_1 + 0x2d4) = 0x18;
    *(undefined4 *)(param_1 + 0x2d6) = 0x300039;
    *(undefined2 *)(param_1 + 0x2da) = 0x39;
    return 0;
  case 1:
    *(undefined4 *)(param_1 + 0x2c4) = 0x40008;
    *(undefined2 *)(param_1 + 0x2c8) = 3;
    *(undefined4 *)(param_1 + 0x2ca) = 0x7000e;
    *(undefined2 *)(param_1 + 0x2ce) = 5;
    *(undefined4 *)(param_1 + 0x2d0) = 0x200025;
    *(undefined2 *)(param_1 + 0x2d4) = 0x25;
    *(undefined4 *)(param_1 + 0x2d6) = 0x500064;
    *(undefined2 *)(param_1 + 0x2da) = 100;
    return 0;
  case 2:
    *(undefined4 *)(param_1 + 0x2c4) = 0x30006;
    *(undefined2 *)(param_1 + 0x2c8) = 2;
    *(undefined4 *)(param_1 + 0x2ca) = 0x50009;
    *(undefined2 *)(param_1 + 0x2ce) = 3;
    *(undefined4 *)(param_1 + 0x2d0) = 0x4e0052;
    *(undefined2 *)(param_1 + 0x2d4) = 0x52;
    *(undefined4 *)(param_1 + 0x2d6) = 0x104011d;
    *(undefined2 *)(param_1 + 0x2da) = 0x11d;
    return 0;
  case 3:
    *(undefined4 *)(param_1 + 0x2c4) = 0x30006;
    *(undefined2 *)(param_1 + 0x2c8) = 2;
    *(undefined4 *)(param_1 + 0x2ca) = 0x50009;
    *(undefined2 *)(param_1 + 0x2ce) = 3;
    *(undefined4 *)(param_1 + 0x2d0) = 0x5e005e;
    *(undefined2 *)(param_1 + 0x2d4) = 0x5e;
    *(undefined4 *)(param_1 + 0x2d6) = 0x41a044c;
    *(undefined2 *)(param_1 + 0x2da) = 0x44c;
    return 0;
  default:
    return 0xffffffff;
  }
}


// =========================================================================
// Function: thunk_aluXflhAteCZATAxhnNbbJ
// Entry: 0x71e06760 | Size: 1 bytes
// =========================================================================

void thunk_aluXflhAteCZATAxhnNbbJ(int param_1,undefined4 param_2,uint param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 auStack_d88 [2944];
  undefined1 auStack_208 [484];
  
  imp___aeabi_memclr8(auStack_d88,0xb80);
  if (0x1df < param_3) {
    puVar1 = auStack_208;
    uVar2 = param_3 / 0x1e0;
    do {
      thunk_u_oWWwFqzhySbTdoEMkTkMjMBEqLK(param_2,puVar1,param_1 + 0x14,auStack_d88);
      puVar1 = puVar1 + 0xa0;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  thunk_lkAkvAUcggaWVpEgpFMPH(param_1,auStack_208,param_3 / 6);
  return;
}


// =========================================================================
// Function: thunk_lkAkvAUcggaWVpEgpFMPH
// Entry: 0x71e06770 | Size: 1 bytes
// =========================================================================

void thunk_lkAkvAUcggaWVpEgpFMPH(int *param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  short sVar4;
  short sVar5;
  bool bVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  short *psVar11;
  short sVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  short sVar16;
  int iVar17;
  short *psVar18;
  short sVar19;
  int iVar20;
  short sVar21;
  uint uVar22;
  uint uVar23;
  short *psVar24;
  uint uVar25;
  short sVar26;
  uint uStack_98;
  short asStack_94 [6];
  short asStack_88 [2];
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  short asStack_70 [2];
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  short asStack_54 [6];
  short asStack_48 [6];
  short asStack_3c [6];
  short asStack_30 [6];
  
  iVar10 = thunk_cHvMMgTBmqvtyaJZoNRZuyJoW_C();
  uStack_5c = 0;
  asStack_70[0] = 0;
  asStack_70[1] = 0;
  uStack_6c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_68 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_64 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_60 = 0;
  asStack_88[0] = 0;
  asStack_88[1] = 0;
  uStack_84 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_80 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_7c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_78 = 0;
  uStack_74 = 0;
  if (param_3 == 0x50) {
    iVar13 = 0x2d6;
    iVar14 = 0x2d0;
    iVar15 = 0x2ca;
    iVar20 = 0x2c4;
  }
  else if (param_3 == 0xa0) {
    iVar13 = 0x2d8;
    iVar14 = 0x2d2;
    iVar15 = 0x2cc;
    iVar20 = 0x2c6;
  }
  else {
    iVar13 = 0x2da;
    iVar14 = 0x2d4;
    iVar15 = 0x2ce;
    iVar20 = 0x2c8;
  }
  if (10 < iVar10) {
    iVar17 = 0;
    uVar2 = *(undefined2 *)((int)param_1 + iVar15);
    uVar3 = *(undefined2 *)((int)param_1 + iVar20);
    sVar9 = *(short *)((int)param_1 + iVar13);
    sVar26 = *(short *)((int)param_1 + iVar14);
    iVar10 = 0;
    bVar6 = false;
    do {
      psVar24 = (short *)((int)asStack_94 + iVar17);
      iVar13 = thunk_lTlauVLgjNOQPgXDll_tXvOdRwYlg
                         ((int)*psVar24,(int)*(short *)((int)param_1 + iVar17 + 0xb4),
                          (int)*(short *)((int)param_1 + iVar17 + 0xe4),(int)asStack_3c + iVar17);
      uVar22 = iVar13 * *(short *)((int)&DAT_7009b100 + iVar17);
      iVar13 = thunk_lTlauVLgjNOQPgXDll_tXvOdRwYlg
                         ((int)*psVar24,(int)*(short *)((int)param_1 + iVar17 + 0xcc),
                          (int)*(short *)((int)param_1 + iVar17 + 0xfc),(int)asStack_54 + iVar17);
      iVar14 = thunk_lTlauVLgjNOQPgXDll_tXvOdRwYlg
                         ((int)*psVar24,(int)*(short *)((int)param_1 + iVar17 + 0xc0),
                          (int)*(short *)((int)param_1 + iVar17 + 0xf0),(int)asStack_30 + iVar17);
      uVar23 = iVar14 * *(short *)((int)&DAT_7009b10c + iVar17) + uVar22;
      iVar14 = thunk_lTlauVLgjNOQPgXDll_tXvOdRwYlg
                         ((int)*psVar24,(int)*(short *)((int)param_1 + iVar17 + 0xd8),
                          (int)*(short *)((int)param_1 + iVar17 + 0x108),(int)asStack_48 + iVar17);
      iVar20 = 0x1f;
      iVar15 = 0x1f;
      if (uVar23 != 0) {
        iVar20 = LZCOUNT(uVar23 ^ (int)uVar23 >> 0x1f) + -1;
      }
      iVar13 = iVar13 * *(short *)((int)&DAT_7009b118 + iVar17);
      uVar25 = iVar14 * *(short *)((int)&DAT_7009b124 + iVar17) + iVar13;
      if (uVar25 != 0) {
        iVar15 = LZCOUNT(uVar25 ^ (int)uVar25 >> 0x1f) + -1;
      }
      sVar4 = *(short *)((int)&DAT_7009b130 + iVar17);
      if ((int)sVar26 < (iVar20 - iVar15) * 0x10000 >> 0xe) {
        bVar6 = true;
      }
      if ((int)((uVar23 >> 0xc) * 0x10000) < 1) {
        sVar7 = 0x4000;
      }
      else {
        sVar7 = thunk_gbixOGWOrZftdbaKPhf((uVar22 & 0x3ffff000) << 2,(int)(short)(uVar23 >> 0xc));
        *(short *)((int)&uStack_64 + iVar17) = 0x4000 - sVar7;
      }
      *(short *)((int)asStack_70 + iVar17) = sVar7;
      if (0 < (int)((uVar25 >> 0xc) * 0x10000)) {
        sVar7 = thunk_gbixOGWOrZftdbaKPhf(iVar13 * 4 & 0xffffc000,(int)(short)(uVar25 >> 0xc));
        *(short *)((int)asStack_88 + iVar17) = sVar7;
        *(short *)((int)&uStack_7c + iVar17) = 0x4000 - sVar7;
      }
      iVar17 = iVar17 + 2;
      iVar10 = (int)sVar4 * (int)(short)(iVar20 - iVar15) + iVar10;
    } while (iVar17 != 0xc);
    iVar14 = 0;
    sVar26 = 0x3200;
    iVar13 = 0;
    bVar1 = sVar9 <= iVar10;
    uStack_98 = 0x48;
    do {
      psVar24 = (short *)((int)asStack_94 + iVar14);
      iVar10 = thunk_NvayVgJfYjlgQfGJSSCZC(param_1,(int)*psVar24,iVar13);
      sVar4 = *(short *)((int)&DAT_7009b100 + iVar14);
      sVar7 = *(short *)((int)&DAT_7009b10c + iVar14);
      sVar9 = *(short *)((int)param_1 + iVar14 + 0xb4);
      sVar26 = sVar26 + 0x280;
      psVar11 = (short *)((int)param_1 + iVar13 * 2 + 0xe4);
      sVar16 = (short)((uint)((short)(iVar10 * 0x100000 -
                                      (((int)sVar4 * (int)sVar9 +
                                       (int)sVar7 * (int)*(short *)((int)param_1 + iVar14 + 0xc0)) *
                                       0x400 & 0xffff0000U) >> 0x10) * 0x4d00) >> 0x10);
      if (bVar6 || bVar1) {
        sVar19 = *(short *)((int)param_1 + iVar14 + 0xcc);
        sVar5 = *(short *)((int)asStack_54 + iVar14);
        uVar22 = (uint)(short)(sVar9 + sVar16);
        sVar21 = *(short *)((int)asStack_88 + iVar14);
        sVar9 = *psVar24;
        if ((int)uVar22 < 0x281) {
          uVar22 = 0x280;
        }
        psVar18 = (short *)((int)param_1 + iVar14 + 0xfc);
        sVar8 = *psVar18;
        uVar23 = (uStack_98 & 0x1ff) << 7;
        if (uVar23 <= uVar22) {
          uVar22 = uVar23;
        }
        *(short *)((int)param_1 + iVar14 + 0xb4) = (short)uVar22;
        sVar12 = sVar19 + (short)(((short)((uint)((int)sVar21 * (int)sVar5 * 0x20) >> 0x10) * 0x199a
                                  >> 0x15) + 1U >> 1);
        if (sVar12 < 0x281) {
          sVar12 = 0x280;
        }
        if (sVar26 <= sVar12) {
          sVar12 = sVar26;
        }
        iVar10 = (((int)sVar5 * (int)(short)(sVar9 - (short)((int)sVar19 + 4U >> 3)) >> 3) + -0x1000
                 ) * ((int)sVar21 >> 2) >> 4;
        *(short *)((int)param_1 + iVar14 + 0xcc) = sVar12;
        if (iVar10 < 1) {
          iVar10 = thunk_gbixOGWOrZftdbaKPhf(-iVar10,(int)(short)(sVar8 * 10));
          iVar10 = -iVar10;
        }
        else {
          iVar10 = thunk_gbixOGWOrZftdbaKPhf(iVar10,(int)(short)(sVar8 * 10));
        }
        iVar15 = 0x18;
        iVar20 = 0x800000;
      }
      else {
        sVar8 = *(short *)((int)param_1 + iVar14 + 0xe4);
        uVar22 = (uint)(short)(sVar9 + sVar16 +
                              (short)((short)((uint)((int)*(short *)((int)asStack_70 + iVar14) *
                                                     (int)*(short *)((int)asStack_3c + iVar14) *
                                                    0x20) >> 0x10) * 0x28f >> 0x16));
        if ((int)uVar22 < 0x281) {
          uVar22 = 0x280;
        }
        iVar10 = (((int)*(short *)((int)asStack_3c + iVar14) *
                   (int)(short)(*psVar24 - (short)((uint)(int)sVar9 >> 3)) >> 3) + -0x1000) *
                 (*(short *)((int)asStack_70 + iVar14) + 2 >> 2) >> 0xe;
        uVar23 = (uStack_98 & 0x1ff) << 7;
        if (uVar23 <= uVar22) {
          uVar22 = uVar23;
        }
        *(short *)((int)param_1 + iVar14 + 0xb4) = (short)uVar22;
        if (iVar10 < 1) {
          iVar10 = thunk_gbixOGWOrZftdbaKPhf(-iVar10,(int)sVar8);
          iVar10 = -iVar10;
        }
        else {
          iVar10 = thunk_gbixOGWOrZftdbaKPhf(iVar10,(int)sVar8);
        }
        iVar15 = 0x16;
        iVar20 = 0x200000;
        psVar18 = psVar11;
      }
      sVar8 = sVar8 + (short)(iVar20 + iVar10 * 0x10000 >> iVar15);
      if (sVar8 < 0x181) {
        sVar8 = 0x180;
      }
      *psVar18 = sVar8;
      sVar9 = *(short *)((int)param_1 + iVar14 + 0xc0);
      if (bVar6 || bVar1) {
        psVar11 = (short *)((int)param_1 + iVar14 + 0x108);
        sVar8 = *psVar11;
        sVar19 = *(short *)((int)param_1 + iVar14 + 0xd8);
        uVar22 = (uint)(short)(sVar9 + sVar16);
        sVar16 = *(short *)((int)&uStack_7c + iVar14);
        sVar9 = *psVar24;
        sVar5 = *(short *)((int)asStack_48 + iVar14);
        if ((int)uVar22 < 0x301) {
          uVar22 = 0x300;
        }
        uVar23 = iVar13 * -0x80 + 0x2480U & 0xffff;
        if (uVar23 <= uVar22) {
          uVar22 = uVar23;
        }
        *(short *)((int)param_1 + iVar14 + 0xc0) = (short)uVar22;
        sVar21 = sVar19 + (short)(((short)((uint)((int)sVar16 * (int)sVar5 * 0x20) >> 0x10) * 0x199a
                                  >> 0x15) + 1U >> 1);
        if (sVar21 < 0x301) {
          sVar21 = 0x300;
        }
        if (sVar26 <= sVar21) {
          sVar21 = sVar26;
        }
        iVar10 = (((int)sVar5 * (int)(short)(sVar9 - (short)((int)sVar19 + 4U >> 3)) >> 3) + -0x1000
                 ) * ((int)sVar16 >> 2) >> 4;
        *(short *)((int)param_1 + iVar14 + 0xd8) = sVar21;
        if (iVar10 < 1) {
          iVar10 = thunk_gbixOGWOrZftdbaKPhf(-iVar10,(int)(short)(sVar8 * 10));
          iVar10 = -iVar10;
        }
        else {
          iVar10 = thunk_gbixOGWOrZftdbaKPhf(iVar10,(int)(short)(sVar8 * 10));
        }
        iVar15 = 0x18;
        iVar20 = 0x800000;
      }
      else {
        psVar11 = psVar11 + 6;
        sVar26 = *psVar24;
        sVar19 = *(short *)((int)asStack_30 + iVar14);
        sVar5 = *(short *)((int)&uStack_64 + iVar14);
        sVar8 = *(short *)((int)param_1 + iVar14 + 0xf0);
        uVar22 = (uint)(short)(sVar9 + sVar16 +
                              (short)((short)((uint)((int)sVar5 * (int)sVar19 * 0x20) >> 0x10) *
                                      0x28f >> 0x16));
        if ((int)uVar22 < 0x301) {
          uVar22 = 0x300;
        }
        uVar23 = iVar13 * -0x80 + 0x2480U & 0xffff;
        if (uVar23 <= uVar22) {
          uVar22 = uVar23;
        }
        *(short *)((int)param_1 + iVar14 + 0xc0) = (short)uVar22;
        iVar10 = (((int)sVar19 * (int)(short)(sVar26 - (short)((uint)(int)sVar9 >> 3)) >> 3) +
                 -0x1000) * (sVar5 + 2 >> 2) >> 0xe;
        if (iVar10 < 1) {
          iVar10 = thunk_gbixOGWOrZftdbaKPhf(-iVar10,(int)sVar8);
          iVar10 = -iVar10;
        }
        else {
          iVar10 = thunk_gbixOGWOrZftdbaKPhf(iVar10,(int)sVar8);
        }
        iVar15 = 0x16;
        iVar20 = 0x200000;
      }
      sVar8 = sVar8 + (short)(iVar20 + iVar10 * 0x10000 >> iVar15);
      sVar9 = *(short *)((int)&DAT_7009b118 + iVar14);
      if (sVar8 < 0x181) {
        sVar8 = 0x180;
      }
      *psVar11 = sVar8;
      sVar5 = *(short *)((int)&DAT_7009b124 + iVar14);
      sVar8 = *(short *)((int)param_1 + iVar14 + 0xd8);
      sVar19 = *(short *)((int)param_1 + iVar14 + 0xcc);
      sVar16 = *(short *)((int)param_1 + iVar14 + 0xc0);
      sVar21 = *(short *)((int)param_1 + iVar14 + 0xb4);
      uVar22 = (int)sVar9 * (int)sVar19 + (int)sVar5 * (int)sVar8;
      uVar23 = (int)sVar21 * (int)sVar4 + (int)sVar16 * (int)sVar7;
      sVar26 = (short)(uVar22 >> 9) - (short)(uVar23 >> 9);
      if (sVar26 < *(short *)((int)&DAT_7009b13c + iVar14)) {
        sVar26 = *(short *)((int)&DAT_7009b13c + iVar14) - sVar26;
        uVar22 = sVar26 * 0xd;
        sVar26 = (short)((uint)(sVar26 * 0xc000) >> 0x10);
        sVar16 = sVar16 - sVar26;
        sVar21 = sVar21 - sVar26;
        sVar8 = sVar8 + (short)(uVar22 >> 2);
        sVar19 = sVar19 + (short)(uVar22 >> 2);
        *(short *)((int)param_1 + iVar14 + 0xb4) = sVar21;
        uVar23 = (int)sVar4 * (int)sVar21 + (int)sVar7 * (int)sVar16;
        *(short *)((int)param_1 + iVar14 + 0xc0) = sVar16;
        *(short *)((int)param_1 + iVar14 + 0xd8) = sVar8;
        uVar22 = (int)sVar9 * (int)sVar19 + (int)sVar5 * (int)sVar8;
        *(short *)((int)param_1 + iVar14 + 0xcc) = sVar19;
      }
      sVar26 = *(short *)(&DAT_7009b148 + iVar14);
      if ((int)sVar26 < (int)(uVar22 << 9) >> 0x10) {
        sVar9 = sVar26 - (short)((uVar22 << 9) >> 0x10);
        *(short *)((int)param_1 + iVar14 + 0xcc) = sVar9 + sVar19;
        *(short *)((int)param_1 + iVar14 + 0xd8) = sVar8 + sVar9;
      }
      if ((int)*(short *)(&DAT_7009b154 + iVar14) < (int)(uVar23 << 9) >> 0x10) {
        sVar9 = *(short *)(&DAT_7009b154 + iVar14) - (short)((uVar23 << 9) >> 0x10);
        *(short *)((int)param_1 + iVar14 + 0xc0) = sVar16 + sVar9;
        *(short *)((int)param_1 + iVar14 + 0xb4) = sVar21 + sVar9;
      }
      iVar14 = iVar14 + 2;
      iVar13 = iVar13 + 1;
      uStack_98 = uStack_98 - 1;
    } while (iVar14 != 0xc);
    param_1[0x45] = param_1[0x45] + 1;
    if (bVar6 || bVar1) {
      sVar9 = *(short *)((int)param_1 + 0x11a) + 1;
      *(short *)((int)param_1 + 0x11a) = sVar9;
      if (sVar9 < 7) {
        *(undefined2 *)(param_1 + 0x46) = uVar3;
      }
      else {
        *(undefined2 *)(param_1 + 0x46) = uVar2;
        *(undefined2 *)((int)param_1 + 0x11a) = 6;
      }
      *param_1 = 1;
      return;
    }
  }
  sVar9 = (short)param_1[0x46];
  iVar10 = 0;
  *(undefined2 *)((int)param_1 + 0x11a) = 0;
  if (0 < sVar9) {
    *(short *)(param_1 + 0x46) = sVar9 + -1;
    iVar10 = (int)(short)(sVar9 + 2);
  }
  *param_1 = iVar10;
  return;
}


// =========================================================================
// Function: thunk_GGMCnEVQCZMWYNIryLiKfO
// Entry: 0x71e06780 | Size: 1 bytes
// =========================================================================

void thunk_GGMCnEVQCZMWYNIryLiKfO(int param_1,undefined4 param_2,uint param_3)

{
  undefined1 auStack_5c0 [480];
  undefined1 auStack_3e0 [960];
  
  thunk_InqGGgdqqpvpslKjvKYfkH(param_2,auStack_3e0,param_1 + 0xc,param_3);
  thunk_InqGGgdqqpvpslKjvKYfkH(auStack_3e0,auStack_5c0,param_1 + 4,param_3 >> 1);
  thunk_lkAkvAUcggaWVpEgpFMPH(param_1,auStack_5c0,param_3 >> 2);
  return;
}


// =========================================================================
// Function: thunk_LvuqcfvlKLylrjyEgpaFWV
// Entry: 0x71e06790 | Size: 1 bytes
// =========================================================================

void thunk_LvuqcfvlKLylrjyEgpaFWV(int param_1,undefined4 param_2,uint param_3)

{
  undefined1 auStack_1f8 [480];
  
  thunk_InqGGgdqqpvpslKjvKYfkH(param_2,auStack_1f8,param_1 + 4,param_3);
  thunk_lkAkvAUcggaWVpEgpFMPH(param_1,auStack_1f8,param_3 >> 1);
  return;
}


// =========================================================================
// Function: thunk_cHvMMgTBmqvtyaJZoNRZuyJoW_C
// Entry: 0x71e067a0 | Size: 1 bytes
// =========================================================================

int thunk_cHvMMgTBmqvtyaJZoNRZuyJoW_C(int param_1,short *param_2,uint param_3,short *param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  undefined1 (*pauVar5) [16];
  short *psVar6;
  uint uVar7;
  short *psVar8;
  uint uVar9;
  undefined1 (*pauVar10) [16];
  uint uVar11;
  short *psVar12;
  int iVar13;
  short sVar14;
  undefined2 *puVar15;
  short *psVar16;
  uint uVar17;
  int iVar18;
  short *psVar19;
  uint uVar20;
  short sVar21;
  short sVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  short asStack_2fc [4];
  undefined8 auStack_2f4 [14];
  short asStack_284 [4];
  undefined8 auStack_27c [14];
  short asStack_20c [4];
  undefined8 auStack_204 [29];
  short asStack_11c [4];
  undefined8 auStack_114 [29];
  int aiStack_2c [2];
  
  uVar7 = param_3 >> 1;
  if (uVar7 == 0) {
    uVar7 = 0;
    bVar4 = true;
  }
  else {
    iVar18 = (uint)*(ushort *)(param_1 + 0x2a8) << 0x10;
    uVar9 = uVar7;
    psVar6 = asStack_11c;
    psVar8 = param_2;
    do {
      sVar21 = *psVar8;
      uVar9 = uVar9 - 1;
      iVar18 = sVar21 * 0x51ec + iVar18;
      *psVar6 = (short)((uint)iVar18 >> 0x10);
      iVar18 = (iVar18 >> 0x10) * -0xa3d8 + sVar21 * 0x8000;
      psVar6 = psVar6 + 1;
      psVar8 = psVar8 + 2;
    } while (uVar9 != 0);
    *(ushort *)(param_1 + 0x2a8) = (ushort)((uint)iVar18 >> 0x10);
    iVar18 = (uint)*(ushort *)(param_1 + 0x2b2) << 0x10;
    psVar6 = param_2 + 1;
    uVar9 = uVar7;
    psVar8 = asStack_20c;
    do {
      uVar9 = uVar9 - 1;
      sVar21 = (short)((uint)(*psVar6 * 0x15c3 + iVar18) >> 0x10);
      iVar18 = sVar21 * -0x2b86 + *psVar6 * 0x8000;
      *psVar8 = sVar21;
      psVar6 = psVar6 + 2;
      psVar8 = psVar8 + 1;
    } while (uVar9 != 0);
    *(short *)(param_1 + 0x2b2) = (short)((uint)iVar18 >> 0x10);
    if (param_3 < 0x10) {
      uVar17 = 0;
      psVar6 = asStack_20c;
      psVar8 = asStack_11c;
LAB_71b232b4:
      iVar18 = uVar7 - uVar17;
      do {
        sVar21 = *psVar8;
        iVar18 = iVar18 + -1;
        sVar14 = *psVar6;
        *psVar6 = sVar14 + sVar21;
        *psVar8 = sVar21 - sVar14;
        psVar6 = psVar6 + 1;
        psVar8 = psVar8 + 1;
      } while (iVar18 != 0);
    }
    else {
      uVar17 = uVar7 & 0xfffffff8;
      pauVar5 = (undefined1 (*) [16])asStack_20c;
      pauVar10 = (undefined1 (*) [16])asStack_11c;
      psVar6 = (short *)(*pauVar5 + uVar17 * 2);
      psVar8 = (short *)(*pauVar10 + uVar17 * 2);
      uVar9 = uVar17;
      do {
        uVar9 = uVar9 - 8;
        auVar24 = VectorAdd(*pauVar5,*pauVar10,2);
        auVar23 = VectorSub(*pauVar10,*pauVar5,2);
        *(longlong *)*pauVar5 = auVar24._0_8_;
        *(longlong *)(*pauVar5 + 8) = auVar24._8_8_;
        pauVar5 = pauVar5 + 1;
        *(longlong *)*pauVar10 = auVar23._0_8_;
        *(longlong *)(*pauVar10 + 8) = auVar23._8_8_;
        pauVar10 = pauVar10 + 1;
      } while (uVar9 != 0);
      if (uVar7 != uVar17) goto LAB_71b232b4;
    }
    iVar18 = 0;
    uVar7 = param_3 >> 2;
    if (param_3 < 4) {
      bVar4 = true;
    }
    else {
      psVar8 = asStack_284;
      iVar13 = (uint)*(ushort *)(param_1 + 0x2aa) << 0x10;
      psVar6 = asStack_11c;
      do {
        sVar21 = *psVar6;
        puVar15 = (undefined2 *)((int)psVar8 + iVar18);
        iVar18 = iVar18 + 2;
        iVar13 = sVar21 * 0x51ec + iVar13;
        *puVar15 = (short)((uint)iVar13 >> 0x10);
        iVar13 = (iVar13 >> 0x10) * -0xa3d8 + sVar21 * 0x8000;
        psVar6 = psVar6 + 2;
      } while (uVar7 * 2 != iVar18);
      *(short *)(param_1 + 0x2aa) = (short)((uint)iVar13 >> 0x10);
      psVar6 = asStack_2fc;
      iVar18 = (uint)*(ushort *)(param_1 + 0x2b4) << 0x10;
      iVar13 = 0;
      psVar12 = asStack_11c + 1;
      do {
        psVar16 = (short *)((int)psVar6 + iVar13);
        iVar13 = iVar13 + 2;
        sVar21 = (short)((uint)(*psVar12 * 0x15c3 + iVar18) >> 0x10);
        iVar18 = sVar21 * -0x2b86 + *psVar12 * 0x8000;
        *psVar16 = sVar21;
        psVar12 = psVar12 + 2;
      } while (uVar7 * 2 != iVar13);
      *(short *)(param_1 + 0x2b4) = (short)((uint)iVar18 >> 0x10);
      uVar9 = 0;
      if (param_3 < 0x20) {
LAB_71b233fc:
        iVar18 = uVar7 - uVar9;
        do {
          sVar21 = *psVar8;
          iVar18 = iVar18 + -1;
          sVar14 = *psVar6;
          *psVar6 = sVar14 + sVar21;
          *psVar8 = sVar21 - sVar14;
          psVar8 = psVar8 + 1;
          psVar6 = psVar6 + 1;
        } while (iVar18 != 0);
      }
      else {
        uVar9 = uVar7 & 0xfffffff8;
        pauVar5 = (undefined1 (*) [16])asStack_2fc;
        pauVar10 = (undefined1 (*) [16])asStack_284;
        psVar6 = (short *)(*pauVar5 + uVar9 * 2);
        psVar8 = (short *)(*pauVar10 + uVar9 * 2);
        uVar17 = uVar9;
        do {
          uVar17 = uVar17 - 8;
          auVar24 = VectorAdd(*pauVar5,*pauVar10,2);
          auVar23 = VectorSub(*pauVar10,*pauVar5,2);
          *(longlong *)*pauVar5 = auVar24._0_8_;
          *(longlong *)(*pauVar5 + 8) = auVar24._8_8_;
          pauVar5 = pauVar5 + 1;
          *(longlong *)*pauVar10 = auVar23._0_8_;
          *(longlong *)(*pauVar10 + 8) = auVar23._8_8_;
          pauVar10 = pauVar10 + 1;
        } while (uVar17 != 0);
        if (uVar7 != uVar9) goto LAB_71b233fc;
      }
      bVar4 = false;
    }
  }
  aiStack_2c[0] = 0;
  uVar9 = thunk_PwxunZSTjugGwOkR(asStack_284,uVar7,aiStack_2c);
  if (uVar9 == 0) {
    sVar21 = 0;
    param_4[5] = 0xb0;
  }
  else {
    uVar11 = (uint)(short)LZCOUNT(uVar9);
    uVar17 = uVar9 >> (0x11 - uVar11 & 0xff);
    sVar21 = 0xb;
    if (uVar11 - 0x11 != 0 && 0x10 < uVar11) {
      uVar17 = uVar9 << (uVar11 - 0x11 & 0xff);
    }
    uVar9 = (0x11 - uVar11) + aiStack_2c[0];
    uVar11 = ((short)(ushort)((uVar17 << 0x12) >> 0x16) * 0x6054 + 0x15126000U >> 0x13) +
             (uVar9 * 0x6054 >> 9);
    sVar14 = 0xb0;
    if ((uVar11 & 0x8000) == 0) {
      sVar14 = (short)uVar11 + 0xb0;
    }
    if (0x7fffffff < uVar9) {
      sVar21 = (short)(uVar17 >> (-uVar9 & 0xff));
    }
    param_4[5] = sVar14;
  }
  aiStack_2c[0] = 0;
  uVar9 = thunk_PwxunZSTjugGwOkR(asStack_2fc,uVar7,aiStack_2c);
  if (uVar9 == 0) {
    param_4[4] = 0xb0;
  }
  else {
    uVar11 = (uint)(short)LZCOUNT(uVar9);
    uVar17 = uVar9 >> (0x11 - uVar11 & 0xff);
    if (uVar11 - 0x11 != 0 && 0x10 < uVar11) {
      uVar17 = uVar9 << (uVar11 - 0x11 & 0xff);
    }
    aiStack_2c[0] = (0x11 - uVar11) + aiStack_2c[0];
    uVar9 = ((short)(ushort)((uVar17 << 0x12) >> 0x16) * 0x6054 + 0x15126000U >> 0x13) +
            ((uint)(aiStack_2c[0] * 0x6054) >> 9);
    sVar14 = 0xb0;
    if ((uVar9 & 0x8000) == 0) {
      sVar14 = (short)uVar9 + 0xb0;
    }
    param_4[4] = sVar14;
    if (sVar21 < 0xb) {
      if (aiStack_2c[0] < 0) {
        sVar21 = sVar21 + (short)(uVar17 >> (-aiStack_2c[0] & 0xffU));
      }
      else {
        sVar21 = sVar21 + 0xb;
      }
    }
  }
  if (!bVar4) {
    iVar18 = (uint)*(ushort *)(param_1 + 0x2ac) << 0x10;
    psVar6 = asStack_20c;
    uVar9 = uVar7;
    psVar8 = asStack_284;
    do {
      sVar14 = *psVar6;
      uVar9 = uVar9 - 1;
      iVar18 = sVar14 * 0x51ec + iVar18;
      *psVar8 = (short)((uint)iVar18 >> 0x10);
      iVar18 = (iVar18 >> 0x10) * -0xa3d8 + sVar14 * 0x8000;
      psVar6 = psVar6 + 2;
      psVar8 = psVar8 + 1;
    } while (uVar9 != 0);
    *(short *)(param_1 + 0x2ac) = (short)((uint)iVar18 >> 0x10);
    iVar18 = (uint)*(ushort *)(param_1 + 0x2b6) << 0x10;
    psVar6 = asStack_20c + 1;
    uVar9 = uVar7;
    psVar8 = asStack_2fc;
    do {
      uVar9 = uVar9 - 1;
      sVar14 = (short)((uint)(*psVar6 * 0x15c3 + iVar18) >> 0x10);
      iVar18 = sVar14 * -0x2b86 + *psVar6 * 0x8000;
      *psVar8 = sVar14;
      psVar6 = psVar6 + 2;
      psVar8 = psVar8 + 1;
    } while (uVar9 != 0);
    *(short *)(param_1 + 0x2b6) = (short)((uint)iVar18 >> 0x10);
    if (uVar7 < 8) {
      uVar17 = 0;
      psVar6 = asStack_2fc;
      psVar8 = asStack_284;
    }
    else {
      uVar17 = uVar7 & 0xfffffff8;
      pauVar5 = (undefined1 (*) [16])asStack_2fc;
      pauVar10 = (undefined1 (*) [16])asStack_284;
      psVar6 = (short *)(*pauVar5 + uVar17 * 2);
      psVar8 = (short *)(*pauVar10 + uVar17 * 2);
      uVar9 = uVar17;
      do {
        uVar9 = uVar9 - 8;
        auVar24 = VectorAdd(*pauVar5,*pauVar10,2);
        auVar23 = VectorSub(*pauVar10,*pauVar5,2);
        *(longlong *)*pauVar5 = auVar24._0_8_;
        *(longlong *)(*pauVar5 + 8) = auVar24._8_8_;
        pauVar5 = pauVar5 + 1;
        *(longlong *)*pauVar10 = auVar23._0_8_;
        *(longlong *)(*pauVar10 + 8) = auVar23._8_8_;
        pauVar10 = pauVar10 + 1;
      } while (uVar9 != 0);
      if (uVar7 == uVar17) goto LAB_71b23690;
    }
    iVar18 = uVar7 - uVar17;
    do {
      sVar14 = *psVar8;
      iVar18 = iVar18 + -1;
      sVar22 = *psVar6;
      *psVar6 = sVar22 + sVar14;
      *psVar8 = sVar14 - sVar22;
      psVar6 = psVar6 + 1;
      psVar8 = psVar8 + 1;
    } while (iVar18 != 0);
  }
LAB_71b23690:
  psVar6 = asStack_284;
  aiStack_2c[0] = 0;
  uVar7 = thunk_PwxunZSTjugGwOkR(psVar6,uVar7,aiStack_2c);
  if (uVar7 == 0) {
    param_4[3] = 0xb0;
  }
  else {
    uVar17 = (uint)(short)LZCOUNT(uVar7);
    uVar9 = uVar7 >> (0x11 - uVar17 & 0xff);
    if (uVar17 - 0x11 != 0 && 0x10 < uVar17) {
      uVar9 = uVar7 << (uVar17 - 0x11 & 0xff);
    }
    aiStack_2c[0] = (0x11 - uVar17) + aiStack_2c[0];
    uVar7 = ((short)(ushort)((uVar9 << 0x12) >> 0x16) * 0x6054 + 0x15126000U >> 0x13) +
            ((uint)(aiStack_2c[0] * 0x6054) >> 9);
    sVar14 = 0xb0;
    if ((uVar7 & 0x8000) == 0) {
      sVar14 = (short)uVar7 + 0xb0;
    }
    param_4[3] = sVar14;
    if (sVar21 < 0xb) {
      if (aiStack_2c[0] < 0) {
        sVar14 = (short)(uVar9 >> (-aiStack_2c[0] & 0xffU));
      }
      else {
        sVar14 = 0xb;
      }
      sVar21 = sVar21 + sVar14;
    }
  }
  if (param_3 >> 3 != 0) {
    uVar7 = param_3 >> 3;
    iVar13 = 0;
    iVar18 = (uint)*(ushort *)(param_1 + 0x2ae) << 0x10;
    psVar8 = asStack_11c;
    psVar12 = asStack_2fc;
    do {
      sVar14 = *psVar12;
      puVar15 = (undefined2 *)((int)psVar8 + iVar13);
      iVar13 = iVar13 + 2;
      iVar18 = sVar14 * 0x51ec + iVar18;
      *puVar15 = (short)((uint)iVar18 >> 0x10);
      iVar18 = (iVar18 >> 0x10) * -0xa3d8 + sVar14 * 0x8000;
      psVar12 = psVar12 + 2;
    } while (uVar7 * 2 != iVar13);
    iVar13 = 0;
    *(short *)(param_1 + 0x2ae) = (short)((uint)iVar18 >> 0x10);
    iVar18 = (uint)*(ushort *)(param_1 + 0x2b8) << 0x10;
    psVar12 = asStack_20c;
    psVar16 = asStack_2fc + 1;
    do {
      sVar14 = (short)((uint)(*psVar16 * 0x15c3 + iVar18) >> 0x10);
      iVar18 = sVar14 * -0x2b86 + *psVar16 * 0x8000;
      psVar19 = (short *)((int)psVar12 + iVar13);
      iVar13 = iVar13 + 2;
      *psVar19 = sVar14;
      psVar16 = psVar16 + 2;
    } while (uVar7 * 2 != iVar13);
    uVar9 = 0;
    *(short *)(param_1 + 0x2b8) = (short)((uint)iVar18 >> 0x10);
    if (0x3f < param_3) {
      uVar9 = uVar7 & 0xfffffff8;
      pauVar10 = (undefined1 (*) [16])asStack_20c;
      pauVar5 = (undefined1 (*) [16])asStack_11c;
      psVar12 = (short *)(*pauVar10 + uVar9 * 2);
      psVar8 = (short *)(*pauVar5 + uVar9 * 2);
      uVar17 = uVar9;
      do {
        uVar17 = uVar17 - 8;
        auVar24 = VectorAdd(*pauVar10,*pauVar5,2);
        auVar23 = VectorSub(*pauVar5,*pauVar10,2);
        *(longlong *)*pauVar10 = auVar24._0_8_;
        *(longlong *)(*pauVar10 + 8) = auVar24._8_8_;
        pauVar10 = pauVar10 + 1;
        *(longlong *)*pauVar5 = auVar23._0_8_;
        *(longlong *)(*pauVar5 + 8) = auVar23._8_8_;
        pauVar5 = pauVar5 + 1;
      } while (uVar17 != 0);
      if (uVar7 == uVar9) goto LAB_71b23878;
    }
    iVar18 = uVar7 - uVar9;
    do {
      sVar14 = *psVar8;
      iVar18 = iVar18 + -1;
      sVar22 = *psVar12;
      *psVar12 = sVar22 + sVar14;
      *psVar8 = sVar14 - sVar22;
      psVar8 = psVar8 + 1;
      psVar12 = psVar12 + 1;
    } while (iVar18 != 0);
  }
LAB_71b23878:
  aiStack_2c[0] = 0;
  uVar7 = thunk_PwxunZSTjugGwOkR(asStack_11c,param_3 >> 3,aiStack_2c);
  if (uVar7 == 0) {
    param_4[2] = 0x110;
  }
  else {
    uVar17 = (uint)(short)LZCOUNT(uVar7);
    uVar9 = uVar7 >> (0x11 - uVar17 & 0xff);
    if (uVar17 - 0x11 != 0 && 0x10 < uVar17) {
      uVar9 = uVar7 << (uVar17 - 0x11 & 0xff);
    }
    aiStack_2c[0] = (0x11 - uVar17) + aiStack_2c[0];
    uVar7 = ((short)(ushort)((uVar9 << 0x12) >> 0x16) * 0x6054 + 0x15126000U >> 0x13) +
            ((uint)(aiStack_2c[0] * 0x6054) >> 9);
    sVar14 = 0x110;
    if ((uVar7 & 0x8000) == 0) {
      sVar14 = (short)uVar7 + 0x110;
    }
    param_4[2] = sVar14;
    if (sVar21 < 0xb) {
      if (aiStack_2c[0] < 0) {
        sVar14 = (short)(uVar9 >> (-aiStack_2c[0] & 0xffU));
      }
      else {
        sVar14 = 0xb;
      }
      sVar21 = sVar21 + sVar14;
    }
  }
  if (param_3 >> 4 != 0) {
    uVar7 = param_3 >> 4;
    iVar13 = 0;
    iVar18 = (uint)*(ushort *)(param_1 + 0x2b0) << 0x10;
    psVar8 = asStack_20c;
    do {
      sVar14 = *psVar8;
      puVar15 = (undefined2 *)((int)psVar6 + iVar13);
      iVar13 = iVar13 + 2;
      iVar18 = sVar14 * 0x51ec + iVar18;
      *puVar15 = (short)((uint)iVar18 >> 0x10);
      iVar18 = (iVar18 >> 0x10) * -0xa3d8 + sVar14 * 0x8000;
      psVar8 = psVar8 + 2;
    } while (uVar7 * 2 != iVar13);
    iVar13 = 0;
    *(short *)(param_1 + 0x2b0) = (short)((uint)iVar18 >> 0x10);
    iVar18 = (uint)*(ushort *)(param_1 + 0x2ba) << 0x10;
    psVar8 = asStack_2fc;
    psVar12 = asStack_20c + 1;
    do {
      sVar14 = (short)((uint)(*psVar12 * 0x15c3 + iVar18) >> 0x10);
      iVar18 = sVar14 * -0x2b86 + *psVar12 * 0x8000;
      psVar16 = (short *)((int)psVar8 + iVar13);
      iVar13 = iVar13 + 2;
      *psVar16 = sVar14;
      psVar12 = psVar12 + 2;
    } while (uVar7 * 2 != iVar13);
    uVar9 = 0;
    *(short *)(param_1 + 0x2ba) = (short)((uint)iVar18 >> 0x10);
    if (0x7f < param_3) {
      uVar9 = uVar7 & 0xfffffff8;
      pauVar5 = (undefined1 (*) [16])asStack_2fc;
      pauVar10 = (undefined1 (*) [16])asStack_284;
      psVar8 = (short *)(*pauVar5 + uVar9 * 2);
      psVar6 = (short *)(*pauVar10 + uVar9 * 2);
      uVar17 = uVar9;
      do {
        uVar17 = uVar17 - 8;
        auVar24 = VectorAdd(*pauVar5,*pauVar10,2);
        auVar23 = VectorSub(*pauVar10,*pauVar5,2);
        *(longlong *)*pauVar5 = auVar24._0_8_;
        *(longlong *)(*pauVar5 + 8) = auVar24._8_8_;
        pauVar5 = pauVar5 + 1;
        *(longlong *)*pauVar10 = auVar23._0_8_;
        *(longlong *)(*pauVar10 + 8) = auVar23._8_8_;
        pauVar10 = pauVar10 + 1;
      } while (uVar17 != 0);
      if (uVar7 == uVar9) goto LAB_71b23a60;
    }
    iVar18 = uVar7 - uVar9;
    do {
      sVar14 = *psVar6;
      iVar18 = iVar18 + -1;
      sVar22 = *psVar8;
      *psVar8 = sVar22 + sVar14;
      *psVar6 = sVar14 - sVar22;
      psVar8 = psVar8 + 1;
      psVar6 = psVar6 + 1;
    } while (iVar18 != 0);
  }
LAB_71b23a60:
  uVar9 = param_3 >> 4;
  aiStack_2c[0] = 0;
  uVar7 = thunk_PwxunZSTjugGwOkR(asStack_284,uVar9,aiStack_2c);
  if (uVar7 == 0) {
    param_4[1] = 0x170;
  }
  else {
    uVar11 = (uint)(short)LZCOUNT(uVar7);
    uVar17 = uVar7 >> (0x11 - uVar11 & 0xff);
    if (uVar11 - 0x11 != 0 && 0x10 < uVar11) {
      uVar17 = uVar7 << (uVar11 - 0x11 & 0xff);
    }
    aiStack_2c[0] = (0x11 - uVar11) + aiStack_2c[0];
    uVar7 = ((short)(ushort)((uVar17 << 0x12) >> 0x16) * 0x6054 + 0x15126000U >> 0x13) +
            ((uint)(aiStack_2c[0] * 0x6054) >> 9);
    sVar14 = 0x170;
    if ((uVar7 & 0x8000) == 0) {
      sVar14 = (short)uVar7 + 0x170;
    }
    param_4[1] = sVar14;
    if (sVar21 < 0xb) {
      if (aiStack_2c[0] < 0) {
        sVar14 = (short)(uVar17 >> (-aiStack_2c[0] & 0xffU));
      }
      else {
        sVar14 = 0xb;
      }
      sVar21 = sVar21 + sVar14;
    }
  }
  if (0xf < param_3) {
    psVar6 = asStack_2fc;
    uVar17 = uVar9;
    psVar8 = asStack_11c;
    uVar7 = (uint)*(ushort *)(param_1 + 0x2c0);
    uVar11 = (uint)*(ushort *)(param_1 + 0x2c2);
    sVar22 = *(short *)(param_1 + 0x2be);
    sVar14 = *(short *)(param_1 + 700);
    do {
      sVar3 = sVar14;
      uVar20 = uVar7;
      sVar14 = *psVar6;
      uVar17 = uVar17 - 1;
      sVar1 = (short)uVar20;
      uVar7 = (uint)((short)uVar11 * 0x3fffea0c +
                    sVar1 * 0x1e4c + ((int)sVar14 + (int)sVar22) * 0x19e7 + sVar3 * 0x3fffcc32) >>
              0xe;
      sVar2 = (short)uVar7;
      *psVar8 = sVar2;
      psVar6 = psVar6 + 1;
      psVar8 = psVar8 + 1;
      uVar11 = uVar20;
      sVar22 = sVar3;
    } while (uVar17 != 0);
    *(short *)(param_1 + 0x2c2) = sVar1;
    *(short *)(param_1 + 0x2c0) = sVar2;
    *(short *)(param_1 + 0x2be) = sVar3;
    *(short *)(param_1 + 700) = sVar14;
  }
  aiStack_2c[0] = 0;
  uVar7 = thunk_PwxunZSTjugGwOkR(asStack_11c,uVar9,aiStack_2c);
  if (uVar7 == 0) {
    *param_4 = 0x170;
    return (int)sVar21;
  }
  uVar17 = (uint)(short)LZCOUNT(uVar7);
  uVar9 = uVar7 >> (0x11 - uVar17 & 0xff);
  if (uVar17 - 0x11 != 0 && 0x10 < uVar17) {
    uVar9 = uVar7 << (uVar17 - 0x11 & 0xff);
  }
  aiStack_2c[0] = (0x11 - uVar17) + aiStack_2c[0];
  uVar7 = ((short)(ushort)((uVar9 << 0x12) >> 0x16) * 0x6054 + 0x15126000U >> 0x13) +
          ((uint)(aiStack_2c[0] * 0x6054) >> 9);
  sVar14 = 0x170;
  if ((uVar7 & 0x8000) == 0) {
    sVar14 = (short)uVar7 + 0x170;
  }
  *param_4 = sVar14;
  if (sVar21 < 0xb) {
    if (aiStack_2c[0] < 0) {
      sVar21 = sVar21 + (short)(uVar9 >> (-aiStack_2c[0] & 0xffU));
    }
    else {
      sVar21 = sVar21 + 0xb;
    }
  }
  return (int)sVar21;
}


// =========================================================================
// Function: thunk_lTlauVLgjNOQPgXDll_tXvOdRwYlg
// Entry: 0x71e067b0 | Size: 1 bytes
// =========================================================================

int thunk_lTlauVLgjNOQPgXDll_tXvOdRwYlg(short param_1,short param_2,int param_3,short *param_4)

{
  short sVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  
  sVar3 = thunk_gbixOGWOrZftdbaKPhf((param_3 >> 1) + 0x20000,param_3);
  param_2 = param_1 * 8 - param_2;
  sVar1 = (short)((uint)((int)(short)((uint)((int)(sVar3 >> 2) * (int)(sVar3 >> 2) * 0x4000) >> 0x10
                                     ) * (int)param_2) >> 10);
  *param_4 = sVar1;
  uVar4 = 0;
  iVar2 = (int)sVar1 * (int)param_2 >> 9;
  if (iVar2 < 0x55f5) {
    uVar4 = -(iVar2 * 0x17150 & 0xffff0000U);
    uVar4 = (uVar4 >> 0x10 & 0x3ff | 0x400) >> (-((int)uVar4 >> 0x1a) & 0xffU);
  }
  return uVar4 * (int)sVar3;
}


// =========================================================================
// Function: thunk_InqGGgdqqpvpslKjvKYfkH
// Entry: 0x71e067c0 | Size: 1 bytes
// =========================================================================

void thunk_InqGGgdqqpvpslKjvKYfkH(short *param_1,short *param_2,uint *param_3,uint param_4)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = *param_3;
  uVar6 = param_3[1];
  for (param_4 = param_4 >> 1; param_4 != 0; param_4 = param_4 - 1) {
    sVar3 = (short)((uint)(*param_1 * 0x147b) >> 0xe) + (short)(uVar5 >> 1);
    *param_2 = sVar3;
    sVar2 = *param_1;
    sVar4 = (short)(param_1[1] * 0x570 >> 0xe) + (short)(uVar6 >> 1);
    *param_2 = sVar4 + sVar3;
    psVar1 = param_1 + 1;
    uVar5 = (int)sVar2 - (sVar3 * 0x147b >> 0xc);
    param_1 = param_1 + 2;
    uVar6 = (int)*psVar1 - (sVar4 * 0x570 >> 0xc);
    param_2 = param_2 + 1;
  }
  *param_3 = uVar5;
  param_3[1] = uVar6;
  return;
}


// =========================================================================
// Function: thunk_NvayVgJfYjlgQfGJSSCZC
// Entry: 0x71e067d0 | Size: 1 bytes
// =========================================================================

int thunk_NvayVgJfYjlgQfGJSSCZC(int param_1,int param_2,int param_3)

{
  short sVar1;
  short *psVar2;
  uint uVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  uint uVar7;
  short sVar8;
  uint uVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *puVar13;
  short *psVar14;
  int iVar15;
  uint uVar16;
  
  iVar6 = param_1 + param_3 * 0x20;
  puVar13 = (undefined8 *)(iVar6 + 0x1de);
  iVar15 = iVar6 + 0x11c;
  psVar14 = (short *)(iVar6 + 0x1dc);
  uVar16 = 0;
  do {
    while( true ) {
      psVar2 = (short *)(iVar15 + uVar16 * 2);
      sVar8 = *psVar2;
      uVar12 = 0xe - uVar16;
      if (0xe < uVar16) {
        uVar12 = 0;
      }
      uVar9 = 0xe;
      if (0xe < uVar16) {
        uVar9 = uVar16;
      }
      uVar7 = 0xe;
      if (uVar16 < 0xe) {
        uVar7 = uVar16;
      }
      if (sVar8 != 100) break;
      if (uVar16 != 0xf) {
        uVar3 = uVar16;
        if (6 < uVar12) {
          uVar11 = ~uVar7 & 8;
          uVar7 = uVar12 + 1 & 0x18;
          uVar3 = uVar16 + uVar7;
          puVar10 = puVar13;
          do {
            uVar11 = uVar11 - 8;
            *(undefined8 *)((int)puVar10 + -0xc2) = puVar10[-0x18];
            *(undefined8 *)((int)puVar10 + -0xba) = puVar10[-0x17];
            *(undefined8 *)((int)puVar10 + -2) = *puVar10;
            *(undefined8 *)((int)puVar10 + 6) = puVar10[1];
            puVar10 = puVar10 + 2;
          } while (uVar11 != 0);
          if (uVar12 + 1 == uVar7) goto LAB_71b240a4;
        }
        iVar4 = (uVar9 - uVar3) + 1;
        puVar5 = (undefined2 *)(iVar15 + uVar3 * 2);
        do {
          iVar4 = iVar4 + -1;
          puVar5[0x60] = puVar5[0x61];
          *puVar5 = puVar5[1];
          puVar5 = puVar5 + 1;
        } while (iVar4 != 0);
      }
LAB_71b240a4:
      *(undefined2 *)(iVar6 + 0x1fa) = 10000;
      *(undefined2 *)(iVar6 + 0x13a) = 0x65;
      uVar16 = uVar16 + 1;
      puVar13 = (undefined8 *)((int)puVar13 + 2);
      if (uVar16 == 0x10) goto LAB_71b241a4;
    }
    *psVar2 = sVar8 + 1;
    uVar16 = uVar16 + 1;
    puVar13 = (undefined8 *)((int)puVar13 + 2);
  } while (uVar16 != 0x10);
LAB_71b241a4:
  if (param_2 < *(short *)(iVar6 + 0x1ea)) {
    if (param_2 < *(short *)(iVar6 + 0x1e2)) {
      if (param_2 < *(short *)(iVar6 + 0x1de)) {
        uVar16 = (uint)(*psVar14 <= param_2);
      }
      else {
        uVar16 = 3;
        if (param_2 < *(short *)(iVar6 + 0x1e0)) {
          uVar16 = 2;
        }
      }
    }
    else if (param_2 < *(short *)(iVar6 + 0x1e6)) {
      uVar16 = 5;
      if (param_2 < *(short *)(iVar6 + 0x1e4)) {
        uVar16 = 4;
      }
    }
    else {
      uVar16 = 7;
      if (param_2 < *(short *)(iVar6 + 0x1e8)) {
        uVar16 = 6;
      }
    }
    goto LAB_71b242b0;
  }
  if (param_2 < *(short *)(iVar6 + 0x1fa)) {
    if (param_2 < *(short *)(iVar6 + 0x1f2)) {
      if (param_2 < *(short *)(iVar6 + 0x1ee)) {
        uVar16 = 9;
        if (param_2 < *(short *)(iVar6 + 0x1ec)) {
          uVar16 = 8;
        }
      }
      else {
        uVar16 = 0xb;
        if (param_2 < *(short *)(iVar6 + 0x1f0)) {
          uVar16 = 10;
        }
      }
LAB_71b242b0:
      uVar12 = uVar16;
      uVar16 = 0xf;
      puVar5 = (undefined2 *)(iVar6 + 0x138);
      do {
        uVar16 = uVar16 - 1;
        puVar5[0x61] = puVar5[0x60];
        puVar5[1] = *puVar5;
        puVar5 = puVar5 + -1;
      } while (uVar12 < uVar16);
    }
    else {
      if (param_2 < *(short *)(iVar6 + 0x1f6)) {
        uVar16 = 0xd;
        if (param_2 < *(short *)(iVar6 + 500)) {
          uVar16 = 0xc;
        }
        goto LAB_71b242b0;
      }
      uVar12 = 0xf;
      uVar16 = 0xe;
      if (param_2 < *(short *)(iVar6 + 0x1f8)) goto LAB_71b242b0;
    }
    *(undefined2 *)(iVar15 + uVar12 * 2) = 1;
    psVar14[uVar12] = (short)param_2;
  }
  if (*(int *)(param_1 + 0x114) < 3) {
    if (*(int *)(param_1 + 0x114) < 1) {
      iVar6 = 0;
      sVar8 = *(short *)(param_1 + param_3 * 2 + 0x29c);
      sVar1 = 0x640;
      goto LAB_71b24334;
    }
  }
  else {
    psVar14 = (short *)(iVar6 + 0x1e0);
  }
  sVar1 = *psVar14;
  sVar8 = *(short *)(param_1 + param_3 * 2 + 0x29c);
  iVar6 = 0x7eb7;
  if (sVar1 < sVar8) {
    iVar6 = 0x1999;
  }
LAB_71b24334:
  uVar16 = (int)(short)((ushort)iVar6 ^ 0x7fff) * (int)sVar1 + (iVar6 + 1) * (int)sVar8 + 0x4000;
  *(short *)(param_1 + param_3 * 2 + 0x29c) = (short)(uVar16 >> 0xf);
  return (int)(uVar16 * 2) >> 0x10;
}


// =========================================================================
// Function: thunk_FDgeEJpXxzQwQFyc
// Entry: 0x71e067e0 | Size: 1 bytes
// =========================================================================

void thunk_FDgeEJpXxzQwQFyc(void)

{
  int iVar1;
  
  iVar1 = imp_malloc(0x2e0);
  *(undefined4 *)(iVar1 + 0x2dc) = 0;
  return;
}


// =========================================================================
// Function: thunk_XiVSYXKylWWafQ
// Entry: 0x71e067f0 | Size: 1 bytes
// =========================================================================

void thunk_XiVSYXKylWWafQ(void)

{
  return;
}


// =========================================================================
// Function: thunk_MzYnzAjChAfiFk
// Entry: 0x71e06800 | Size: 1 bytes
// =========================================================================

undefined4 thunk_MzYnzAjChAfiFk(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar9 = 0;
    uVar10 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uVar11 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uVar12 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    *param_1 = 1;
    param_1[1] = 0;
    param_1[2] = uVar10;
    param_1[3] = uVar11;
    param_1[4] = uVar12;
    param_1[0x45] = 0;
    param_1[0x46] = 0;
    thunk_CLUngYjaoGveSggqk_fjVgwDyPwBXqtPI_(param_1 + 5);
    uVar8 = DAT_7009b0b0;
    uVar7 = DAT_7009b0a8;
    uVar6 = DAT_7009b0a0;
    uVar1 = DAT_7009b060;
    *(undefined8 *)(param_1 + 0x2d) = DAT_7009b058;
    *(undefined8 *)(param_1 + 0x2f) = uVar1;
    uVar5 = DAT_7009b098;
    uVar4 = DAT_7009b090;
    uVar3 = DAT_7009b088;
    *(undefined8 *)(param_1 + 0x31) = DAT_7009b068;
    uVar2 = DAT_7009b080;
    uVar1 = DAT_7009b078;
    *(undefined8 *)(param_1 + 0x33) = DAT_7009b070;
    *(undefined8 *)(param_1 + 0x35) = uVar1;
    *(undefined8 *)(param_1 + 0x37) = uVar2;
    *(undefined8 *)(param_1 + 0x39) = uVar3;
    *(undefined8 *)(param_1 + 0x3b) = uVar4;
    *(undefined8 *)(param_1 + 0x3d) = uVar5;
    *(undefined8 *)(param_1 + 0x3f) = uVar6;
    *(undefined8 *)(param_1 + 0x41) = uVar7;
    *(undefined8 *)(param_1 + 0x43) = uVar8;
    imp___aeabi_memclr(param_1 + 0x47,0xc0);
    param_1[0xaa] = uVar9;
    param_1[0xab] = uVar10;
    param_1[0xac] = uVar11;
    param_1[0xad] = uVar12;
    param_1[0xad] = uVar9;
    param_1[0xae] = uVar10;
    param_1[0xaf] = uVar11;
    param_1[0xb0] = uVar12;
    param_1[0xb1] = 0x40008;
    *(undefined2 *)(param_1 + 0xb2) = 3;
    *(undefined4 *)((int)param_1 + 0x2ca) = 0x7000e;
    *(undefined2 *)((int)param_1 + 0x2ce) = 5;
    *(undefined8 *)(param_1 + 0x77) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x79) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x7b) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x7d) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x7f) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x81) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x83) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x85) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x87) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x89) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x8b) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x8d) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x8f) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x91) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x93) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x95) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x97) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x99) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x9b) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x9d) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x9f) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0xa1) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0xa3) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0xa5) = 0x2710271027102710;
    param_1[0xa9] = 0x6400640;
    param_1[0xa8] = 0x6400640;
    param_1[0xa7] = 0x6400640;
    param_1[0xb4] = 0x150018;
    *(undefined4 *)((int)param_1 + 0x2d6) = 0x300039;
    *(undefined2 *)(param_1 + 0xb5) = 0x18;
    *(undefined2 *)((int)param_1 + 0x2da) = 0x39;
    param_1[0xb7] = 0x2a;
    return 0;
  }
  return 0xffffffff;
}


// =========================================================================
// Function: thunk_RsDuEpSyJFUcDyOEiI
// Entry: 0x71e06810 | Size: 1 bytes
// =========================================================================

undefined4 thunk_RsDuEpSyJFUcDyOEiI(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x2dc) == 0x2a)) {
    uVar1 = thunk_KAaJcIqYcrGDRuvjKPFzUbt();
    return uVar1;
  }
  return 0xffffffff;
}


// =========================================================================
// Function: thunk_ANlpEzfHGkqLkGREF
// Entry: 0x71e06820 | Size: 1 bytes
// =========================================================================

int thunk_ANlpEzfHGkqLkGREF(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if ((param_1 != 0 && param_3 != 0) && (*(int *)(param_1 + 0x2dc) == 0x2a)) {
    if (param_2 < 32000) {
      if (param_2 == 8000) {
        iVar2 = 8;
      }
      else {
        if (param_2 != 16000) {
          return -1;
        }
        iVar2 = 0x10;
      }
    }
    else if (param_2 == 32000) {
      iVar2 = 0x20;
    }
    else {
      if (param_2 != 48000) {
        return -1;
      }
      iVar2 = 0x30;
    }
    iVar1 = iVar2 * 5;
    bVar3 = param_4 != iVar2 * 10;
    if (bVar3) {
      iVar1 = iVar2 * 0x14;
    }
    if ((!bVar3 || iVar1 == param_4) || (iVar2 * 0x1e - param_4 == 0)) {
      iVar2 = -1;
      if (param_2 < 32000) {
        if (param_2 == 8000) {
          iVar2 = thunk_lkAkvAUcggaWVpEgpFMPH(param_1,param_3,param_4);
        }
        else if (param_2 == 16000) {
          iVar2 = thunk_LvuqcfvlKLylrjyEgpaFWV(param_1,param_3,param_4);
        }
      }
      else if (param_2 == 32000) {
        iVar2 = thunk_GGMCnEVQCZMWYNIryLiKfO(param_1,param_3,param_4);
      }
      else if (param_2 == 48000) {
        iVar2 = thunk_aluXflhAteCZATAxhnNbbJ(param_1,param_3,param_4);
      }
      if (0 < iVar2) {
        iVar2 = 1;
      }
      return iVar2;
    }
  }
  return -1;
}


// =========================================================================
// Function: thunk_dckOITuTpwCXkyNgjT_kGAXZtgDCsANIUCCuu_BlgFfLwvziCxZRTHAEVcKYXREsXTPKqOOtLQevGUWsyRCPcehoBgFJDDcCa
// Entry: 0x71e06830 | Size: 1 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_dckOITuTpwCXkyNgjT_kGAXZtgDCsANIUCCuu_BlgFfLwvziCxZRTHAEVcKYXREsXTPKqOOtLQevGUWsyRCPcehoBgFJDDcCa
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
// Function: thunk_JbHVjycxZyFMmniiOcG_cVOy_eQOgIIzKONRTwIcDfEgtyaRpSXyOWwXQvFwRcKcUSpYutLqmTMrQtwIdCrPVoqWYn_MWwzHNclWrhtDXtsHSNjVwYTwUYUSDLtOEtYQvVrVKMJIxI_l
// Entry: 0x71e06840 | Size: 1 bytes
// =========================================================================

undefined4
thunk_JbHVjycxZyFMmniiOcG_cVOy_eQOgIIzKONRTwIcDfEgtyaRpSXyOWwXQvFwRcKcUSpYutLqmTMrQtwIdCrPVoqWYn_MWwzHNclWrhtDXtsHSNjVwYTwUYUSDLtOEtYQvVrVKMJIxI_l
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
// Function: thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
// Entry: 0x71e06850 | Size: 1 bytes
// =========================================================================

void thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
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
// Function: thunk_KmmiBtSNJ_tzyAkXCrpxKnJfebFWxwwKWqjRalZDwaVBRXWUrLkjj
// Entry: 0x71e06860 | Size: 1 bytes
// =========================================================================

void thunk_KmmiBtSNJ_tzyAkXCrpxKnJfebFWxwwKWqjRalZDwaVBRXWUrLkjj(void)

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
// Function: thunk_lTl_jWEPLnitluaDOS
// Entry: 0x71e06870 | Size: 1 bytes
// =========================================================================

int thunk_lTl_jWEPLnitluaDOS(int param_1,undefined1 param_2,undefined1 param_3)

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
// Function: thunk_rIGBxdWQUcCSpi_PqpT
// Entry: 0x71e06880 | Size: 1 bytes
// =========================================================================

void thunk_rIGBxdWQUcCSpi_PqpT(int param_1)

{
  imp_pthread_mutex_lock();
  *(undefined1 *)(param_1 + 9) = 1;
  imp_pthread_cond_broadcast(param_1 + 4);
  imp_pthread_mutex_unlock(param_1);
  return;
}


// =========================================================================
// Function: thunk_CtbKKQeLrFfcVxztWHOwDExGVAZuOSBdFVKuLjgSy
// Entry: 0x71e06890 | Size: 1 bytes
// =========================================================================

bool thunk_CtbKKQeLrFfcVxztWHOwDExGVAZuOSBdFVKuLjgSy
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
// Function: thunk_HJEdOkbUSv_ZKGrew
// Entry: 0x71e068a0 | Size: 1 bytes
// =========================================================================

void thunk_HJEdOkbUSv_ZKGrew(undefined4 param_1)

{
  thunk_lTl_jWEPLnitluaDOS(param_1,0,0);
  return;
}


// =========================================================================
// Function: thunk_xyJ_toQYkFGGrRYsd
// Entry: 0x71e068b0 | Size: 1 bytes
// =========================================================================

int thunk_xyJ_toQYkFGGrRYsd(int param_1)

{
  imp_pthread_mutex_destroy();
  imp_pthread_cond_destroy(param_1 + 4);
  return param_1;
}


// =========================================================================
// Function: thunk_JBtPDuF_ixLfWCtFNlpftHYauRkybbZVmVsdsYNICfOYiQT
// Entry: 0x71e068c0 | Size: 1 bytes
// =========================================================================

void thunk_JBtPDuF_ixLfWCtFNlpftHYauRkybbZVmVsdsYNICfOYiQT(undefined4 param_1)

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
// Function: thunk_R_cNneSURXdsvoNnIJXxlMjMNltbxDTIzVTKbDxUKYpfCOQZFIhbxsWLybX
// Entry: 0x71e068d0 | Size: 1 bytes
// =========================================================================

void thunk_R_cNneSURXdsvoNnIJXxlMjMNltbxDTIzVTKbDxUKYpfCOQZFIhbxsWLybX(void)

{
  if (DAT_712048cc == (code *)0x0) {
    return;
  }
  (*DAT_712048cc)();
  return;
}


// =========================================================================
// Function: thunk_wJUAiYQijbNWaxyxSgcHIgyymQiKxDcjYoXNJa
// Entry: 0x71e068e0 | Size: 1 bytes
// =========================================================================

void thunk_wJUAiYQijbNWaxyxSgcHIgyymQiKxDcjYoXNJa(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  code *extraout_r3;
  code *extraout_r3_00;
  code *in_r3;
  
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
// Function: thunk_MuEzqOtJahSucLwYzRJrwCQuxHeipkrxHNEgGsNEGyRbEKYbjciSLqVhhQYbYYzBYhnZIZSpxmxRLj_JBQzbeipIXmHR_eCXm
// Entry: 0x71e068f0 | Size: 1 bytes
// =========================================================================

undefined4 *
thunk_MuEzqOtJahSucLwYzRJrwCQuxHeipkrxHNEgGsNEGyRbEKYbjciSLqVhhQYbYYzBYhnZIZSpxmxRLj_JBQzbeipIXmHR_eCXm
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
// Function: thunk_amFzDZmBYCYmyCqJGnsvTjeCiJmyWsawbE_czCzKWKDMCocpuxxcKIvRPJlNgZfJjoGqCeARkBHfTHHuILUZaPsgCzuCxbYTbuWHxxAKrgu
// Entry: 0x71e06900 | Size: 1 bytes
// =========================================================================

undefined4
thunk_amFzDZmBYCYmyCqJGnsvTjeCiJmyWsawbE_czCzKWKDMCocpuxxcKIvRPJlNgZfJjoGqCeARkBHfTHHuILUZaPsgCzuCxbYTbuWHxxAKrgu
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
// Function: thunk_xWnwlpzVbJXRjDaqcgwLtYTtYBvTZzWoYUCPEMXjUTXIgzsqwBwWgizoKiXLFC_WFFeGaqlYTgUlsCPrkFWsPqwWrOMsLoNLFciGIiADght
// Entry: 0x71e06910 | Size: 1 bytes
// =========================================================================

void thunk_xWnwlpzVbJXRjDaqcgwLtYTtYBvTZzWoYUCPEMXjUTXIgzsqwBwWgizoKiXLFC_WFFeGaqlYTgUlsCPrkFWsPqwWrOMsLoNLFciGIiADght
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
// Function: thunk_TUIUUKKClSrsPzngWLhnOiPMnxBTquFwqDAHjmWGCi_YddZPfbmBJGpTJOUDVhgxwiohrZpjreBetQMugCzkSAaNARigCABZXUBJylbfJUa
// Entry: 0x71e06920 | Size: 1 bytes
// =========================================================================

void thunk_TUIUUKKClSrsPzngWLhnOiPMnxBTquFwqDAHjmWGCi_YddZPfbmBJGpTJOUDVhgxwiohrZpjreBetQMugCzkSAaNARigCABZXUBJylbfJUa
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
// Function: thunk_bWzArQFUVzhscKuTWGWSQskLH_FFfyMOvakmAkSPqVsQBBtJgmeQUbqNmnEvISIZngDvtACJ_uGkAqUNMDFlvQKTN_oXEYeyywJubdEXXtP
// Entry: 0x71e06930 | Size: 1 bytes
// =========================================================================

void thunk_bWzArQFUVzhscKuTWGWSQskLH_FFfyMOvakmAkSPqVsQBBtJgmeQUbqNmnEvISIZngDvtACJ_uGkAqUNMDFlvQKTN_oXEYeyywJubdEXXtP
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
// Function: thunk_iGDRqCUVhdnUhWDMVvOFxHjePxHBoOlndFNwRwENvlbI
// Entry: 0x71e06940 | Size: 1 bytes
// =========================================================================

undefined4 * thunk_iGDRqCUVhdnUhWDMVvOFxHjePxHBoOlndFNwRwENvlbI(undefined4 *param_1)

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
// Function: thunk_AWAxjVdIJpmHOqJnDgnWCEHFbwyiVfiHHyHmvgiFHMHFHPsHD_LkytPXuAHygBbglDFAgPkovkmnZyYYuovKTidrtznNevwnvVYTJYRfLLhVlnkkGGWBwmRRCkQMuVpZCEYMDVpmeWM
// Entry: 0x71e06950 | Size: 1 bytes
// =========================================================================

/* WARNING: Type propagation algorithm not settling */

void thunk_AWAxjVdIJpmHOqJnDgnWCEHFbwyiVfiHHyHmvgiFHMHFHPsHD_LkytPXuAHygBbglDFAgPkovkmnZyYYuovKTidrtznNevwnvVYTJYRfLLhVlnkkGGWBwmRRCkQMuVpZCEYMDVpmeWM
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
// Function: thunk_eCExDIjaebmXEpltMaknSsaIhrBsMgbaCyOFgvyvhQiGRaiOKaaXVNCrqaTtkEuCWGTLeErPvnwQ_TfhCgcqAgmWPeXiAzXEEynjUfYcYBYcip__IFLcNkHBCuGNogBuSysVxGekhcmHQobmKYTORDHrrbnFAGuvbcIFxtHX_nJMvAemfUAMamqmFhTdGXPcTgZenqipVUmrDTREWUOUEOgyABzfWfWCdgOsjPthBVqGTaKOrXlnNkuHYJLEessjOeTCcHpauSwxSdGNzCFlcmicsXDZyZIZIwzpuVjKDGakKtYWMvxAkGciIipqUroiVPeOFXYmE_TQgLPdkroBNErcwoQgsRJmJyLyqtFD_L
// Entry: 0x71e06960 | Size: 1 bytes
// =========================================================================

void thunk_eCExDIjaebmXEpltMaknSsaIhrBsMgbaCyOFgvyvhQiGRaiOKaaXVNCrqaTtkEuCWGTLeErPvnwQ_TfhCgcqAgmWPeXiAzXEEynjUfYcYBYcip__IFLcNkHBCuGNogBuSysVxGekhcmHQobmKYTORDHrrbnFAGuvbcIFxtHX_nJMvAemfUAMamqmFhTdGXPcTgZenqipVUmrDTREWUOUEOgyABzfWfWCdgOsjPthBVqGTaKOrXlnNkuHYJLEessjOeTCcHpauSwxSdGNzCFlcmicsXDZyZIZIwzpuVjKDGakKtYWMvxAkGciIipqUroiVPeOFXYmE_TQgLPdkroBNErcwoQgsRJmJyLyqtFD_L
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
// Function: thunk_GlaqsotmQIxdnufiJlivXIB_zbaynnonqiWUtNDfNyHbTlqdYqiedKD
// Entry: 0x71e06970 | Size: 1 bytes
// =========================================================================

void thunk_GlaqsotmQIxdnufiJlivXIB_zbaynnonqiWUtNDfNyHbTlqdYqiedKD(void)

{
  thunk_apkdSINaaLOvFXFsIWNUbEzmieskxGGIbRXhLEURnBN_GMZW(1);
  return;
}


// =========================================================================
// Function: thunk_BPrEEYOUDiadCpWPUFNhtbRCDQhdEQtPBnaRfeoAvGQDynMSmKCMduGBgrYBfbS_KnJNUW_SwDiNlOGrssoaiFzENXJhbXgcmkjnvpUYFWPueQJHqvgYQNXKTDjJdBEAsusejjbwRefjEQuFveTRROitMfiqfvJzyWPiyfaMKMlRwPfZqYYnpIfkKeZXatvclOfIzgEFIrglVicKjcQSRXdExVplvZQFUYiaVphYNRojmIBwZMtRLcorBJNZYjTMOUuvNAvEQGJxICyXoOkkmAyYvcIHhxXgLqNxAsRTAXJOepsaUWgfAqIJxegGWPPPRsREq
// Entry: 0x71e06980 | Size: 1 bytes
// =========================================================================

void thunk_BPrEEYOUDiadCpWPUFNhtbRCDQhdEQtPBnaRfeoAvGQDynMSmKCMduGBgrYBfbS_KnJNUW_SwDiNlOGrssoaiFzENXJhbXgcmkjnvpUYFWPueQJHqvgYQNXKTDjJdBEAsusejjbwRefjEQuFveTRROitMfiqfvJzyWPiyfaMKMlRwPfZqYYnpIfkKeZXatvclOfIzgEFIrglVicKjcQSRXdExVplvZQFUYiaVphYNRojmIBwZMtRLcorBJNZYjTMOUuvNAvEQGJxICyXoOkkmAyYvcIHhxXgLqNxAsRTAXJOepsaUWgfAqIJxegGWPPPRsREq
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
// Function: thunk_jvwfOQOZGWusFwsuEdpjIMQErpLnpgAc_jOXSLq_djygAtmF
// Entry: 0x71e06990 | Size: 1 bytes
// =========================================================================

undefined4 * thunk_jvwfOQOZGWusFwsuEdpjIMQErpLnpgAc_jOXSLq_djygAtmF(undefined4 *param_1,int param_2)

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
// Function: thunk_xlINZwSGpUflINNPPKBdawMqcYdCcZBIxVcSCKwIRWUeWSDzRoGGkypHLgXxuZTYBmihvQaAdQrrltlfqonJDHnBpaRzECPriyajGyoMVNdAEiJxhJlduPNvIfmsfMhk
// Entry: 0x71e069a0 | Size: 1 bytes
// =========================================================================

void thunk_xlINZwSGpUflINNPPKBdawMqcYdCcZBIxVcSCKwIRWUeWSDzRoGGkypHLgXxuZTYBmihvQaAdQrrltlfqonJDHnBpaRzECPriyajGyoMVNdAEiJxhJlduPNvIfmsfMhk
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
// Function: thunk_D_gcvirfIdTFiRJtDvVKuoNofYYwnvMCkkdQgt
// Entry: 0x71e069b0 | Size: 1 bytes
// =========================================================================

undefined4 * thunk_D_gcvirfIdTFiRJtDvVKuoNofYYwnvMCkkdQgt(undefined4 *param_1)

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
// Function: thunk_AxqNXlTACmYuCXlzmszNHtbqidQTNzOuSujLjyDFHmDRn_znODhsTYTFkWKoIbsLnhKzuJVuYHiuDQlGJDskqupEaHFpAgjfvUoKsOrvepPkuLSaQgcFUYYTf_ASKSuLOCYME_iSBIrAwEvQfYOzxTAINgcTgRzvUiZfyaQOTlghpPvNLiIRvCobSTbRSVFJDMSkutdHVpKChFgSBvefJyzVJQtrfOeRvlHd
// Entry: 0x71e069c0 | Size: 1 bytes
// =========================================================================

int * thunk_AxqNXlTACmYuCXlzmszNHtbqidQTNzOuSujLjyDFHmDRn_znODhsTYTFkWKoIbsLnhKzuJVuYHiuDQlGJDskqupEaHFpAgjfvUoKsOrvepPkuLSaQgcFUYYTf_ASKSuLOCYME_iSBIrAwEvQfYOzxTAINgcTgRzvUiZfyaQOTlghpPvNLiIRvCobSTbRSVFJDMSkutdHVpKChFgSBvefJyzVJQtrfOeRvlHd
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
// Function: thunk_hSeQANIAhietIjlqPKRiAaqUrKUUwnqoogAqTiksNSjraWgMwgnQGFCSmDOMDVZXkZPLdwgerblTZkYCeaKsMoMIfwARktNnkMWqCXlLyZEDYnHsBGZJMBISquOEhzgKbjCGFmvldEBALwcjIyOqbgXnfRTkOEYpdJLKusoSDtSMNjLCzIkaQFNiusXvvXdWw_jDQsuJKPdrsChpoxTeSkAHkxbmXosQqhivXXNukXwCfDYw_gslqpQwkAFpfczsTJJbatiSAVNCifpWOtEopdEpAMHDmTZMFDpQDiHIfzvPygz
// Entry: 0x71e069d0 | Size: 1 bytes
// =========================================================================

int * thunk_hSeQANIAhietIjlqPKRiAaqUrKUUwnqoogAqTiksNSjraWgMwgnQGFCSmDOMDVZXkZPLdwgerblTZkYCeaKsMoMIfwARktNnkMWqCXlLyZEDYnHsBGZJMBISquOEhzgKbjCGFmvldEBALwcjIyOqbgXnfRTkOEYpdJLKusoSDtSMNjLCzIkaQFNiusXvvXdWw_jDQsuJKPdrsChpoxTeSkAHkxbmXosQqhivXXNukXwCfDYw_gslqpQwkAFpfczsTJJbatiSAVNCifpWOtEopdEpAMHDmTZMFDpQDiHIfzvPygz
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
// Function: thunk_tHGOcWcxDSfXWCmPitGqZsIexLFUQkrtVQanMnipDnwXJxGcgttgyQZtFfxpEsFbYtvznAqdaHygTZpoxUtSfOBRnZjHbCLqBY_mLCSYhauvLGjiVJoa_Ub_cZZkpnQZFzPctuPuDDPIszEaOByytuISwEeRrlwdjwPqXascnrQKyfXiaXmLV_rLcIn
// Entry: 0x71e069e0 | Size: 1 bytes
// =========================================================================

int * thunk_tHGOcWcxDSfXWCmPitGqZsIexLFUQkrtVQanMnipDnwXJxGcgttgyQZtFfxpEsFbYtvznAqdaHygTZpoxUtSfOBRnZjHbCLqBY_mLCSYhauvLGjiVJoa_Ub_cZZkpnQZFzPctuPuDDPIszEaOByytuISwEeRrlwdjwPqXascnrQKyfXiaXmLV_rLcIn
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
// Function: thunk_MOUSCFpsCZuagTfvVRSHtca_HM_FRj_tf_JFHc
// Entry: 0x71e069f0 | Size: 1 bytes
// =========================================================================

void thunk_MOUSCFpsCZuagTfvVRSHtca_HM_FRj_tf_JFHc(undefined8 *param_1,byte *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  byte abStack_64 [4];
  uint uStack_60;
  uint uStack_5c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar6 = *(uint *)(param_2 + 0x20);
  iVar7 = *(int *)(param_2 + 0x24);
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  if (uVar6 != 0 || iVar7 != -0x80000000) {
    if (iVar7 < 0) {
      uVar4 = -uVar6;
      iVar7 = -(iVar7 + (uint)(uVar6 != 0));
      uVar10 = FUN_71ba3430(uVar4,iVar7,1000,0);
      iVar8 = (int)(uVar10 >> 0x20);
      lVar1 = (uVar10 & 0xffffffff) * 1000;
      uVar5 = (uint)lVar1;
      uVar6 = 0;
      if ((uint)(uVar4 - uVar5 < 0x1f5) <=
          -(iVar7 - (iVar8 * 1000 + (int)((ulonglong)lVar1 >> 0x20) + (uint)(uVar4 < uVar5)))) {
        uVar6 = 0xffffffff;
      }
      uVar10 = CONCAT44(uVar6 - (iVar8 + (uint)(uVar6 < (uint)uVar10)),uVar6 - (uint)uVar10);
    }
    else {
      uVar9 = FUN_71ba3430(uVar6,iVar7,1000,0);
      lVar1 = (uVar9 & 0xffffffff) * 1000;
      uVar4 = (uint)lVar1;
      uVar5 = iVar7 - ((int)(uVar9 >> 0x20) * 1000 + (int)((ulonglong)lVar1 >> 0x20) +
                      (uint)(uVar6 < uVar4));
      uVar10 = uVar9 + 1;
      if (-(uVar5 >> 2) < (uint)((uVar6 - uVar4 >> 2 | uVar5 * 0x40000000) < 0x7d)) {
        uVar10 = uVar9;
      }
    }
    iVar8 = (int)(uVar10 >> 0x20);
    uVar4 = (uint)uVar10;
    uVar10 = FUN_71ba3034(uVar4,iVar8,1000,0);
    lVar1 = (uVar10 & 0xffffffff) * 1000;
    uVar6 = (uint)lVar1;
    iVar7 = uVar4 - uVar6;
    imp_snprintf(abStack_64,0x32,s___03lld__03lld__70064f8c,iVar7,uVar10,iVar7,
                 iVar8 - ((int)(uVar10 >> 0x20) * 1000 + (int)((ulonglong)lVar1 >> 0x20) +
                         (uint)(uVar4 < uVar6)));
    uVar2 = imp_strlen(abStack_64);
    thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
              (&uStack_30,abStack_64,uVar2);
  }
  if (param_2[0x1c] != 0) {
    thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
              (&uStack_30,&DAT_700667f8,1);
    thunk_nlI_wWZOVrTwKHzECngAGzgYuKaM_obVCWHKNCjgGDRHQbXkGWTLHJ_zRkIFaU_SsACBzJSnLQ_MjcSrsWnBVpQyeJWPUexCADznBvGwDjgrZJZHcIGoEZUYWPFmqFOnyF
              (abStack_64,*(undefined4 *)(param_2 + 0x18));
    uVar6 = uStack_60;
    uVar4 = uStack_5c;
    if ((abStack_64[0] & 1) == 0) {
      uVar4 = (uint)abStack_64 | 1;
      uVar6 = (uint)(abStack_64[0] >> 1);
    }
    thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
              (&uStack_30,uVar4,uVar6);
    if ((abStack_64[0] & 1) != 0) {
      thunk_qNQrlu(uStack_5c);
    }
    thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
              (&uStack_30,&DAT_7006bf9a,2);
  }
  if (*(int *)(param_2 + 0x10) != 0) {
    thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
              (&uStack_30,s__line_70071353,6);
    thunk_nlI_wWZOVrTwKHzECngAGzgYuKaM_obVCWHKNCjgGDRHQbXkGWTLHJ_zRkIFaU_SsACBzJSnLQ_MjcSrsWnBVpQyeJWPUexCADznBvGwDjgrZJZHcIGoEZUYWPFmqFOnyF
              (abStack_64,*(undefined4 *)(param_2 + 0x14));
    uVar6 = uStack_5c;
    if ((abStack_64[0] & 1) == 0) {
      uVar6 = (uint)abStack_64 | 1;
      uStack_60 = (uint)(abStack_64[0] >> 1);
    }
    thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
              (&uStack_30,uVar6,uStack_60);
    if ((abStack_64[0] & 1) != 0) {
      thunk_qNQrlu(uStack_5c);
    }
    thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
              (&uStack_30,&DAT_70064f9c,3);
  }
  pbVar3 = *(byte **)(param_2 + 8);
  uVar6 = *(uint *)(param_2 + 4);
  if ((*param_2 & 1) == 0) {
    pbVar3 = param_2 + 1;
    uVar6 = (uint)(*param_2 >> 1);
  }
  thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
            (&uStack_30,pbVar3,uVar6);
  *(undefined4 *)(param_1 + 1) = uStack_28;
  *param_1 = CONCAT44(uStack_2c,uStack_30);
  return;
}


// =========================================================================
// Function: thunk_RQ_mYOwjAktJtneAkqaofyKWMajBThAfRYgmhQSDJEPHlUPtDXIkSmmFEOvxhFdajTdhg
// Entry: 0x71e06a00 | Size: 1 bytes
// =========================================================================

undefined4 *
thunk_RQ_mYOwjAktJtneAkqaofyKWMajBThAfRYgmhQSDJEPHlUPtDXIkSmmFEOvxhFdajTdhg
          (undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
          undefined4 param_6)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined4 auStack_434 [3];
  undefined1 auStack_428 [1028];
  
  uVar2 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar6 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar7 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  param_1[10] = s_libjingle_700678b7;
  *param_1 = 0;
  param_1[1] = uVar2;
  param_1[2] = uVar6;
  param_1[3] = uVar7;
  cVar1 = DAT_71204835;
  *(undefined4 *)((int)param_1 + 9) = 0;
  *(undefined4 *)((int)param_1 + 0xd) = uVar2;
  *(undefined4 *)((int)param_1 + 0x11) = uVar6;
  *(undefined4 *)((int)param_1 + 0x15) = uVar7;
  param_1[0xe] = 0;
  param_1[0xf] = uVar2;
  param_1[0x10] = uVar6;
  param_1[0x11] = uVar7;
  param_1[0xc] = param_4;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[0x13] = 0;
  param_1[0xb] = 9;
  param_1[8] = 0;
  param_1[9] = 0x80000000;
  param_1[0x12] = 0;
  if (cVar1 != '\0') {
    DataMemoryBarrier(0xb);
    if ((DAT_71204838 & 1) == 0) {
      iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_71204838);
      if (iVar8 != 0) {
        uVar9 = thunk_CrMGNYcUFILecuwdxKJAKujbFUB();
        DAT_71204854 = (undefined4)((ulonglong)uVar9 >> 0x20);
        DAT_71204850 = (undefined4)uVar9;
        thunk_SixizuLbAnqfgRApsCY(&DAT_71204838);
      }
    }
    uVar6 = DAT_71204854;
    uVar2 = DAT_71204850;
    uVar9 = thunk_CrMGNYcUFILecuwdxKJAKujbFUB();
    lVar10 = thunk_MOZLUxGQSEDfwiHhMQh((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar2,uVar6);
    DataMemoryBarrier(0xb);
    if ((DAT_71204840 & 1) == 0) {
      iVar8 = thunk_cuKsjVZRyspaVsDnqLy();
      if (iVar8 != 0) {
        DAT_7120483c = imp_time(0);
        thunk_SixizuLbAnqfgRApsCY(&DAT_71204840);
      }
    }
    *(longlong *)(param_1 + 8) = lVar10 * 1000;
  }
  if (DAT_71204834 != '\0') {
    uVar2 = thunk_UiBcmaphRwDwSfgygpcSbkYIG_();
    param_1[6] = uVar2;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  if (param_2 != 0) {
    uVar3 = imp_strrchr(param_2,0x2f);
    uVar4 = imp_strrchr(param_2,0x5c);
    uVar5 = uVar4;
    if (uVar4 < uVar3) {
      uVar5 = uVar3;
    }
    if (uVar3 != 0 || uVar4 != 0) {
      param_2 = uVar5 + 1;
    }
    uVar2 = imp_strlen(param_2);
    param_1[3] = param_2;
    param_1[4] = uVar2;
    param_1[5] = param_3;
    param_1[10] = param_1[3];
    param_1[0xb] = param_1[4];
  }
  if (param_5 != 0) {
    thunk_rPiMkrHHLavtVMGAqTzYYaquUYbIyIuWuWPBQnxNZcwGWgtrWAatzODg(auStack_434,auStack_428,0x400);
    thunk_VsFTGOAObOsNaIhzHnwHdlVaEjgVpEClZb_utNuCUllpbyx(auStack_434,s__0x_08X__7006b272,param_6);
    if (param_5 == 1) {
      uVar2 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                        (auStack_434,&DAT_7006223e,1);
      uVar6 = imp_strerror(param_6);
      uVar7 = imp_strlen();
      thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                (uVar2,uVar6,uVar7);
    }
    thunk_TLUeCDiekSSzXIoKMrpDGxbhUhOecwKWVtKHyZVlDPMMdVvsalzdkegtCtYHBtVMbgUoWiuRKGDAl
              (param_1 + 0xe,auStack_434[0]);
  }
  return param_1;
}


// =========================================================================
// Function: thunk_ucDokrNcBSxNDhNxroEaqAO
// Entry: 0x71e06a10 | Size: 1 bytes
// =========================================================================

byte * thunk_ucDokrNcBSxNDhNxroEaqAO(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  byte *pbVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  
  uVar7 = *(uint *)(param_1 + 0x3c);
  if ((param_1[0x38] & 1) == 0) {
    uVar7 = (uint)(param_1[0x38] >> 1);
  }
  if (uVar7 != 0) {
    thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
              (param_1 + 0x44,&DAT_7006488c,3);
    pbVar8 = *(byte **)(param_1 + 0x40);
    uVar7 = *(uint *)(param_1 + 0x3c);
    if ((param_1[0x38] & 1) == 0) {
      pbVar8 = param_1 + 0x39;
      uVar7 = (uint)(param_1[0x38] >> 1);
    }
    thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
              (param_1 + 0x44,pbVar8,uVar7);
  }
  pbVar8 = param_1 + 0x44;
  thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
            (pbVar8,&DAT_7006c898,1);
  bVar1 = *param_1;
  bVar2 = param_1[0x44];
  bVar3 = param_1[0x45];
  uVar10 = *(undefined4 *)(param_1 + 0x4c);
  uVar4 = *(undefined2 *)(param_1 + 0x4a);
  uVar9 = *(undefined4 *)(param_1 + 0x46);
  pbVar8[0] = 0;
  pbVar8[1] = 0;
  pbVar8[2] = 0;
  pbVar8[3] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  if ((bVar1 & 1) != 0) {
    thunk_qNQrlu(*(undefined4 *)(param_1 + 8));
  }
  *(undefined2 *)(param_1 + 6) = uVar4;
  param_1[1] = bVar3;
  *param_1 = bVar2;
  *(undefined4 *)(param_1 + 2) = uVar9;
  *(undefined4 *)(param_1 + 8) = uVar10;
  if (DAT_70136580 <= *(int *)(param_1 + 0x30)) {
    thunk_uJYhDREnRkQziNyQQYRJzrBuAGLbffiGTY_APzIFmDn_tz_VjGvMQ(param_1);
  }
  DataMemoryBarrier(0xb);
  if (((DAT_71204848 & 1) == 0) && (iVar5 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_71204848), iVar5 != 0)) {
    puVar6 = (undefined4 *)thunk_MwhHq(4);
    *puVar6 = 0;
    thunk_NZQFvopdkrpoNWZgbTfh(puVar6);
    DAT_71204844 = puVar6;
    thunk_SixizuLbAnqfgRApsCY(&DAT_71204848);
  }
  puVar6 = DAT_71204844;
  imp_pthread_mutex_lock(DAT_71204844);
  for (piVar11 = DAT_71204830; piVar11 != (int *)0x0; piVar11 = (int *)piVar11[1]) {
    if (piVar11[2] <= *(int *)(param_1 + 0x30)) {
      (**(code **)(*piVar11 + 0x20))(piVar11,param_1);
    }
  }
  imp_pthread_mutex_unlock(puVar6);
  if ((*pbVar8 & 1) == 0) {
    bVar1 = param_1[0x38];
  }
  else {
    thunk_qNQrlu(*(undefined4 *)(param_1 + 0x4c));
    bVar1 = param_1[0x38];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *param_1;
  }
  else {
    thunk_qNQrlu(*(undefined4 *)(param_1 + 0x40));
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) == 0) {
    return param_1;
  }
  thunk_qNQrlu(*(undefined4 *)(param_1 + 8));
  return param_1;
}


// =========================================================================
// Function: thunk_uJYhDREnRkQziNyQQYRJzrBuAGLbffiGTY_APzIFmDn_tz_VjGvMQ
// Entry: 0x71e06a20 | Size: 1 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_uJYhDREnRkQziNyQQYRJzrBuAGLbffiGTY_APzIFmDn_tz_VjGvMQ(int param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  byte abStack_30 [4];
  uint uStack_2c;
  uint uStack_28;
  
  thunk_MOUSCFpsCZuagTfvVRSHtca_HM_FRj_tf_JFHc(abStack_30,param_1);
  cVar2 = DAT_7013657c;
  uVar6 = 0;
  if (*(uint *)(param_1 + 0x30) < 4) {
    uVar6 = *(undefined4 *)(&DAT_70086eb8 + *(uint *)(param_1 + 0x30) * 4);
  }
  uVar3 = uStack_2c;
  if ((abStack_30[0] & 1) == 0) {
    uVar3 = (uint)(abStack_30[0] >> 1);
  }
  if (uVar3 + 0x3c3 < 0x787) {
    uVar4 = uStack_28;
    if ((abStack_30[0] & 1) == 0) {
      uVar4 = (uint)abStack_30 | 1;
    }
    imp___android_log_print(uVar6,*(undefined4 *)(param_1 + 0x28),&DAT_70069f22,uVar3,uVar4);
  }
  else if (0 < (int)uVar3) {
    iVar8 = 0;
    iVar5 = 1;
    iVar1 = (int)uVar3 / 0x3c4;
    do {
      uVar4 = uStack_28;
      if ((abStack_30[0] & 1) == 0) {
        uVar4 = (uint)abStack_30 | 1;
      }
      uVar7 = uVar3;
      if (0x3c3 < uVar3) {
        uVar7 = 0x3c4;
      }
      imp___android_log_print
                (uVar6,*(undefined4 *)(param_1 + 0x28),s___d__d_____s_700678aa,iVar5,iVar1 + 1,uVar7
                 ,uVar4 + iVar8);
      uVar3 = uVar3 - uVar7;
      iVar8 = iVar8 + uVar7;
      iVar5 = iVar5 + 1;
    } while (0 < (int)uVar3);
  }
  if (cVar2 != '\0') {
    uVar3 = uStack_28;
    if ((abStack_30[0] & 1) == 0) {
      uVar3 = (uint)abStack_30 | 1;
    }
    imp_fputs(uVar3,_ext_stderr);
    imp_fflush(_ext_stderr);
  }
  if ((abStack_30[0] & 1) == 0) {
    return;
  }
  thunk_qNQrlu(uStack_28);
  return;
}


// =========================================================================
// Function: thunk_NZQFvopdkrpoNWZgbTfh
// Entry: 0x71e06a30 | Size: 1 bytes
// =========================================================================

undefined4 thunk_NZQFvopdkrpoNWZgbTfh(undefined4 param_1)

{
  undefined1 auStack_14 [4];
  
  imp_pthread_mutexattr_init(auStack_14);
  imp_pthread_mutex_init(param_1,auStack_14);
  imp_pthread_mutexattr_destroy(auStack_14);
  return param_1;
}


// =========================================================================
// Function: thunk_rESybVoscjvcNTObwMotdWTbTfUcnAGHqcwdWxDGlnWTxEHcoKBD_
// Entry: 0x71e06a40 | Size: 1 bytes
// =========================================================================

void thunk_rESybVoscjvcNTObwMotdWTbTfUcnAGHqcwdWxDGlnWTxEHcoKBD_(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  DataMemoryBarrier(0xb);
  DAT_70136580 = param_1;
  if (((DAT_71204848 & 1) == 0) && (iVar3 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_71204848), iVar3 != 0)) {
    puVar4 = (undefined4 *)thunk_MwhHq(4);
    *puVar4 = 0;
    thunk_NZQFvopdkrpoNWZgbTfh(puVar4);
    DAT_71204844 = puVar4;
    thunk_SixizuLbAnqfgRApsCY(&DAT_71204848);
  }
  puVar4 = DAT_71204844;
  imp_pthread_mutex_lock(DAT_71204844);
  iVar3 = DAT_71204830;
  DAT_70136584 = DAT_70136580;
  while (iVar3 != 0) {
    piVar1 = (int *)(iVar3 + 4);
    piVar2 = (int *)(iVar3 + 8);
    iVar3 = *piVar1;
    if (*piVar2 < DAT_70136584) {
      DAT_70136584 = *piVar2;
    }
  }
  imp_pthread_mutex_unlock(puVar4);
  return;
}


// =========================================================================
// Function: thunk_apkdSINaaLOvFXFsIWNUbEzmieskxGGIbRXhLEURnBN_GMZW
// Entry: 0x71e06a50 | Size: 1 bytes
// =========================================================================

byte thunk_apkdSINaaLOvFXFsIWNUbEzmieskxGGIbRXhLEURnBN_GMZW(int param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  
  bVar2 = 0;
  iVar1 = DAT_70136580 - param_1;
  iVar3 = DAT_70136580;
  if (param_1 < DAT_70136580) {
    iVar1 = DAT_70136584 - param_1;
    iVar3 = DAT_70136584;
  }
  if (iVar3 != param_1 && iVar1 < 0 == SBORROW4(iVar3,param_1)) {
    bVar2 = DAT_7013657d & 1;
  }
  return bVar2;
}


// =========================================================================
// Function: thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
// Entry: 0x71e06a60 | Size: 1 bytes
// =========================================================================

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
               (char *param_1,uint param_2,uint param_3,int param_4,undefined4 param_5)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 uVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  char *pcVar12;
  char *pcVar13;
  undefined8 uVar14;
  undefined1 auStack_90 [40];
  uint uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_4c [16];
  int *piStack_3c;
  byte abStack_38 [4];
  uint uStack_34;
  uint uStack_30;
  uint uStack_c;
  uint uStack_8;
  int iStack_4;
  
  puVar3 = &uStack_c;
  cVar1 = *param_1;
  if (cVar1 == '\x0f') {
    iVar9 = 0;
    param_5 = 0;
    piStack_3c = &iStack_4;
    uVar8 = 0;
    uVar11 = param_3;
  }
  else {
    uVar8 = param_2;
    if (cVar1 == '\x0e') {
      piStack_3c = (int *)&stack0x00000004;
      puVar3 = &uStack_8;
      iVar9 = param_4;
      uVar11 = 0;
    }
    else {
      if (cVar1 != '\r') {
        return;
      }
      param_5 = 0;
      piStack_3c = &iStack_4;
      puVar3 = &uStack_8;
      iVar9 = 0;
      uVar11 = 0;
    }
  }
  uStack_c = param_2;
  uStack_8 = param_3;
  iStack_4 = param_4;
  thunk_RQ_mYOwjAktJtneAkqaofyKWMajBThAfRYgmhQSDJEPHlUPtDXIkSmmFEOvxhFdajTdhg
            (auStack_90,uVar8,*puVar3 >> 3,*puVar3 & 7,iVar9,param_5);
  if (uVar11 != 0) {
    uStack_64 = imp_strlen(uVar11);
    uStack_68 = uVar11;
  }
  uVar11 = (uint)abStack_38 | 1;
  pcVar12 = param_1 + 1;
LAB_71a7bfdc:
  pcVar13 = pcVar12 + 1;
  switch(*pcVar12) {
  case '\x01':
    iVar9 = *piStack_3c;
    piStack_3c = piStack_3c + 1;
    thunk_nlI_wWZOVrTwKHzECngAGzgYuKaM_obVCWHKNCjgGDRHQbXkGWTLHJ_zRkIFaU_SsACBzJSnLQ_MjcSrsWnBVpQyeJWPUexCADznBvGwDjgrZJZHcIGoEZUYWPFmqFOnyF
              (abStack_38,iVar9);
    uVar8 = uStack_34;
    uVar2 = uStack_30;
    if ((abStack_38[0] & 1) == 0) {
      uVar8 = (uint)(abStack_38[0] >> 1);
      uVar2 = uVar11;
    }
    thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
              (auStack_4c,uVar2,uVar8);
    break;
  case '\x02':
    iVar9 = *piStack_3c;
    piStack_3c = piStack_3c + 1;
    thunk_zRGlpcpUNHFkgdREZffoRWYXNmiGgbFj_ExEbCmMNMjQSXyslgM_UfcVAdmOLdHILFjvslrDfEGigJnDJfKzKwYEqKupj_AyucnKGVUMcMCxWCIMkOLHhaXwvbdhsMyTzL
              (abStack_38,iVar9);
    uVar8 = uStack_34;
    uVar2 = uStack_30;
    if ((abStack_38[0] & 1) == 0) {
      uVar8 = (uint)(abStack_38[0] >> 1);
      uVar2 = uVar11;
    }
    thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
              (auStack_4c,uVar2,uVar8);
    break;
  case '\x03':
    puVar7 = (undefined4 *)((int)piStack_3c + 7U & 0xfffffff8);
    piStack_3c = puVar7 + 2;
    thunk_SpHLqjPKPpleShkfEgxKONrbZOijeedOkJUWhQtPwrYMylHRsj_xqSYWwmpVLLkeCaRVXmeEEyWQijicomOzmZbcGntZvenHHgYNDj_UHAKnPeOmmxdSZExABzJJEhWDZf
              (abStack_38,&switchD_71a7bff4::switchdataD_71a7bff8,*puVar7,puVar7[1]);
    uVar8 = uStack_34;
    uVar2 = uStack_30;
    if ((abStack_38[0] & 1) == 0) {
      uVar8 = (uint)(abStack_38[0] >> 1);
      uVar2 = uVar11;
    }
    thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
              (auStack_4c,uVar2,uVar8);
    break;
  case '\x04':
    iVar9 = *piStack_3c;
    piStack_3c = piStack_3c + 1;
    thunk_HoQYbePnnzXuaaQeMElTAFngJxgcFhFYVVrnaFchCxiYHsDqaznEaElMuOBhKlyiRKqzBHSIqVCDQqEpRFPsmkavlVJrUkHRfNnkGbNreZLgjzgOABtuMqTMDCLWBCzplH
              (abStack_38,iVar9);
    uVar8 = uStack_34;
    uVar2 = uStack_30;
    if ((abStack_38[0] & 1) == 0) {
      uVar8 = (uint)(abStack_38[0] >> 1);
      uVar2 = uVar11;
    }
    thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
              (auStack_4c,uVar2,uVar8);
    break;
  case '\x05':
    iVar9 = *piStack_3c;
    piStack_3c = piStack_3c + 1;
    thunk_LwXNizTN_HrHkpMeuaYdncsGsfTpTDUofIKVSSwCVKLhsBxVjWoJjjHuFJSNdjGLZOJaGPjGBGLRLaDHHoKtlRQpDsigMvTvdMhmZuchclqbtvQHSzybGTIAfeWfiLhZzq
              (abStack_38,iVar9);
    uVar8 = uStack_34;
    uVar2 = uStack_30;
    if ((abStack_38[0] & 1) == 0) {
      uVar8 = (uint)(abStack_38[0] >> 1);
      uVar2 = uVar11;
    }
    thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
              (auStack_4c,uVar2,uVar8);
    break;
  case '\x06':
    puVar7 = (undefined4 *)((int)piStack_3c + 7U & 0xfffffff8);
    piStack_3c = puVar7 + 2;
    thunk_MGazsgvLZcaUqd_cmRdWSpRLZhjzzXIA_EmQMEdAbXitZkTPoOiuus_IDIPdnBUzyCSINeAJXxbtHgR_gXzeqGQpn_VJWuGnj_tAmYrZntqedmZyMBBuT_ZCXTzjVSpeSU
              (abStack_38,&switchD_71a7bff4::switchdataD_71a7bff8,*puVar7,puVar7[1]);
    uVar8 = uStack_34;
    uVar2 = uStack_30;
    if ((abStack_38[0] & 1) == 0) {
      uVar8 = (uint)(abStack_38[0] >> 1);
      uVar2 = uVar11;
    }
    thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
              (auStack_4c,uVar2,uVar8);
    break;
  case '\a':
    puVar6 = (undefined8 *)((int)piStack_3c + 7U & 0xfffffff8);
    uVar14 = *puVar6;
    piStack_3c = (int *)(puVar6 + 1);
    thunk_GKJCRSiiJbmKDYCdDWpMQETGORLqzVZMYrtvIxEdFZnlORLcQeAnGAUFtGGHvtQibTINtUFZZtYXJtckUwMMeDOpwIEHljtrztInzoMGfnKixPuRJOMeQYskdAHsVUte
              (abStack_38,&switchD_71a7bff4::switchdataD_71a7bff8,(int)uVar14,
               (int)((ulonglong)uVar14 >> 0x20));
    uVar8 = uStack_34;
    uVar2 = uStack_30;
    if ((abStack_38[0] & 1) == 0) {
      uVar8 = (uint)(abStack_38[0] >> 1);
      uVar2 = uVar11;
    }
    thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
              (auStack_4c,uVar2,uVar8);
    break;
  case '\b':
    puVar6 = (undefined8 *)((int)piStack_3c + 7U & 0xfffffff8);
    uVar14 = *puVar6;
    piStack_3c = (int *)(puVar6 + 1);
    thunk_TZyUEiLoEk_FYbVFlKnXjTzcpJWZojxnsXAjggoTHQIyGnhdRnJkWGwwWkzaGqboXqtfuAjkJRzdhorDorVYShZBMVixMxaKTXXRlTyZcpqVjZUIuvfazdzwm_TSmifKrmPslxpWjzwEWOektPDKovoELcZzqgwmSpkeTCwNVcR_rbdOICtELqWvHZH_SWiGL
              (abStack_38,&switchD_71a7bff4::switchdataD_71a7bff8,(int)uVar14,
               (int)((ulonglong)uVar14 >> 0x20));
    uVar8 = uStack_34;
    uVar2 = uStack_30;
    if ((abStack_38[0] & 1) == 0) {
      uVar8 = (uint)(abStack_38[0] >> 1);
      uVar2 = uVar11;
    }
    thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
              (auStack_4c,uVar2,uVar8);
    break;
  case '\t':
    pcVar12 = (char *)*piStack_3c;
    if ((char *)*piStack_3c == (char *)0x0) {
      pcVar12 = s__null__7007251f;
    }
    piStack_3c = piStack_3c + 1;
    uVar4 = imp_strlen(pcVar12);
    thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
              (auStack_4c,pcVar12,uVar4);
    pcVar12 = pcVar13;
    goto LAB_71a7bfdc;
  case '\n':
    pbVar5 = (byte *)*piStack_3c;
    uVar8 = *(uint *)(pbVar5 + 4);
    pbVar10 = *(byte **)(pbVar5 + 8);
    if ((*pbVar5 & 1) == 0) {
      uVar8 = (uint)(*pbVar5 >> 1);
      pbVar10 = pbVar5 + 1;
    }
    goto LAB_71a7c2b8;
  case '\v':
    pbVar10 = *(byte **)*piStack_3c;
    uVar8 = ((undefined4 *)*piStack_3c)[1];
LAB_71a7c2b8:
    piStack_3c = piStack_3c + 1;
    thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
              (auStack_4c,pbVar10,uVar8);
    pcVar12 = pcVar13;
    goto LAB_71a7bfdc;
  case '\f':
    iVar9 = *piStack_3c;
    piStack_3c = piStack_3c + 1;
    thunk_esvXbILOJDJnxwx(abStack_38,iVar9);
    uVar8 = uStack_34;
    uVar2 = uStack_30;
    if ((abStack_38[0] & 1) == 0) {
      uVar8 = (uint)(abStack_38[0] >> 1);
      uVar2 = uVar11;
    }
    thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
              (auStack_4c,uVar2,uVar8);
    break;
  default:
    goto switchD_71a7bff4_default;
  }
  pcVar12 = pcVar13;
  if ((abStack_38[0] & 1) != 0) {
    thunk_qNQrlu(uStack_30);
  }
  goto LAB_71a7bfdc;
switchD_71a7bff4_default:
  thunk_ucDokrNcBSxNDhNxroEaqAO(auStack_90);
  return;
}


// =========================================================================
// Function: thunk_RQ_mYOwjAktJtneAkqaofyKWMajBThAfRYgmhQSDJEPHlUPtDXIkSmmFEOvxhFdajTdhg
// Entry: 0x71e06a70 | Size: 1 bytes
// =========================================================================

undefined4 *
thunk_RQ_mYOwjAktJtneAkqaofyKWMajBThAfRYgmhQSDJEPHlUPtDXIkSmmFEOvxhFdajTdhg
          (undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
          undefined4 param_6)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined4 auStack_434 [3];
  undefined1 auStack_428 [1028];
  
  uVar2 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar6 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar7 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  param_1[10] = s_libjingle_700678b7;
  *param_1 = 0;
  param_1[1] = uVar2;
  param_1[2] = uVar6;
  param_1[3] = uVar7;
  cVar1 = DAT_71204835;
  *(undefined4 *)((int)param_1 + 9) = 0;
  *(undefined4 *)((int)param_1 + 0xd) = uVar2;
  *(undefined4 *)((int)param_1 + 0x11) = uVar6;
  *(undefined4 *)((int)param_1 + 0x15) = uVar7;
  param_1[0xe] = 0;
  param_1[0xf] = uVar2;
  param_1[0x10] = uVar6;
  param_1[0x11] = uVar7;
  param_1[0xc] = param_4;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[0x13] = 0;
  param_1[0xb] = 9;
  param_1[8] = 0;
  param_1[9] = 0x80000000;
  param_1[0x12] = 0;
  if (cVar1 != '\0') {
    DataMemoryBarrier(0xb);
    if ((DAT_71204838 & 1) == 0) {
      iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_71204838);
      if (iVar8 != 0) {
        uVar9 = thunk_CrMGNYcUFILecuwdxKJAKujbFUB();
        DAT_71204854 = (undefined4)((ulonglong)uVar9 >> 0x20);
        DAT_71204850 = (undefined4)uVar9;
        thunk_SixizuLbAnqfgRApsCY(&DAT_71204838);
      }
    }
    uVar6 = DAT_71204854;
    uVar2 = DAT_71204850;
    uVar9 = thunk_CrMGNYcUFILecuwdxKJAKujbFUB();
    lVar10 = thunk_MOZLUxGQSEDfwiHhMQh((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar2,uVar6);
    DataMemoryBarrier(0xb);
    if ((DAT_71204840 & 1) == 0) {
      iVar8 = thunk_cuKsjVZRyspaVsDnqLy();
      if (iVar8 != 0) {
        DAT_7120483c = imp_time(0);
        thunk_SixizuLbAnqfgRApsCY(&DAT_71204840);
      }
    }
    *(longlong *)(param_1 + 8) = lVar10 * 1000;
  }
  if (DAT_71204834 != '\0') {
    uVar2 = thunk_UiBcmaphRwDwSfgygpcSbkYIG_();
    param_1[6] = uVar2;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  if (param_2 != 0) {
    uVar3 = imp_strrchr(param_2,0x2f);
    uVar4 = imp_strrchr(param_2,0x5c);
    uVar5 = uVar4;
    if (uVar4 < uVar3) {
      uVar5 = uVar3;
    }
    if (uVar3 != 0 || uVar4 != 0) {
      param_2 = uVar5 + 1;
    }
    uVar2 = imp_strlen(param_2);
    param_1[3] = param_2;
    param_1[4] = uVar2;
    param_1[5] = param_3;
    param_1[10] = param_1[3];
    param_1[0xb] = param_1[4];
  }
  if (param_5 != 0) {
    thunk_rPiMkrHHLavtVMGAqTzYYaquUYbIyIuWuWPBQnxNZcwGWgtrWAatzODg(auStack_434,auStack_428,0x400);
    thunk_VsFTGOAObOsNaIhzHnwHdlVaEjgVpEClZb_utNuCUllpbyx(auStack_434,s__0x_08X__7006b272,param_6);
    if (param_5 == 1) {
      uVar2 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                        (auStack_434,&DAT_7006223e,1);
      uVar6 = imp_strerror(param_6);
      uVar7 = imp_strlen();
      thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                (uVar2,uVar6,uVar7);
    }
    thunk_TLUeCDiekSSzXIoKMrpDGxbhUhOecwKWVtKHyZVlDPMMdVvsalzdkegtCtYHBtVMbgUoWiuRKGDAl
              (param_1 + 0xe,auStack_434[0]);
  }
  return param_1;
}


// =========================================================================
// Function: thunk_GKJCRSiiJbmKDYCdDWpMQETGORLqzVZMYrtvIxEdFZnlORLcQeAnGAUFtGGHvtQibTINtUFZZtYXJtckUwMMeDOpwIEHljtrztInzoMGfnKixPuRJOMeQYskdAHsVUte
// Entry: 0x71e06a80 | Size: 1 bytes
// =========================================================================

void thunk_GKJCRSiiJbmKDYCdDWpMQETGORLqzVZMYrtvIxEdFZnlORLcQeAnGAUFtGGHvtQibTINtUFZZtYXJtckUwMMeDOpwIEHljtrztInzoMGfnKixPuRJOMeQYskdAHsVUte
               (byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  byte *pbVar2;
  
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
  thunk_VTwMhyKnxmKwZxTKJSLbwazzowkrhxJYcEbwqctiTKXBPvpVtnksGYRNEZyTzoOOpxvpgfMROyymMfvezwm
            (param_1,10,6,0,0,0,0);
  pbVar2 = *(byte **)(param_1 + 8);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if ((*param_1 & 1) == 0) {
    *param_1 = 0x20;
    pbVar2 = param_1 + 1;
  }
  else {
    param_1[4] = 0x10;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  pbVar2[0x10] = 0;
  pbVar2 = *(byte **)(param_1 + 8);
  if ((*param_1 & 1) == 0) {
    pbVar2 = param_1 + 1;
  }
  uVar1 = thunk_URAoYsoZBvaALWeOVvgkJYzRazzJEbBAIDsgxRbloZdEgcrHMgARsdvozwDtNTF
                    (param_3,param_4,pbVar2);
  thunk_YNczSMHgYOdkxFzjwgKTXIYRUUpvMkDDRVSlSNiMseRMlCGBQDpczigERmNVdkeFrwxqEEKdkkc
            (param_1,uVar1,0xffffffff);
  return;
}


// =========================================================================
// Function: thunk_ucDokrNcBSxNDhNxroEaqAO
// Entry: 0x71e06a90 | Size: 1 bytes
// =========================================================================

byte * thunk_ucDokrNcBSxNDhNxroEaqAO(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  byte *pbVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  
  uVar7 = *(uint *)(param_1 + 0x3c);
  if ((param_1[0x38] & 1) == 0) {
    uVar7 = (uint)(param_1[0x38] >> 1);
  }
  if (uVar7 != 0) {
    thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
              (param_1 + 0x44,&DAT_7006488c,3);
    pbVar8 = *(byte **)(param_1 + 0x40);
    uVar7 = *(uint *)(param_1 + 0x3c);
    if ((param_1[0x38] & 1) == 0) {
      pbVar8 = param_1 + 0x39;
      uVar7 = (uint)(param_1[0x38] >> 1);
    }
    thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
              (param_1 + 0x44,pbVar8,uVar7);
  }
  pbVar8 = param_1 + 0x44;
  thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
            (pbVar8,&DAT_7006c898,1);
  bVar1 = *param_1;
  bVar2 = param_1[0x44];
  bVar3 = param_1[0x45];
  uVar10 = *(undefined4 *)(param_1 + 0x4c);
  uVar4 = *(undefined2 *)(param_1 + 0x4a);
  uVar9 = *(undefined4 *)(param_1 + 0x46);
  pbVar8[0] = 0;
  pbVar8[1] = 0;
  pbVar8[2] = 0;
  pbVar8[3] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  if ((bVar1 & 1) != 0) {
    thunk_qNQrlu(*(undefined4 *)(param_1 + 8));
  }
  *(undefined2 *)(param_1 + 6) = uVar4;
  param_1[1] = bVar3;
  *param_1 = bVar2;
  *(undefined4 *)(param_1 + 2) = uVar9;
  *(undefined4 *)(param_1 + 8) = uVar10;
  if (DAT_70136580 <= *(int *)(param_1 + 0x30)) {
    thunk_uJYhDREnRkQziNyQQYRJzrBuAGLbffiGTY_APzIFmDn_tz_VjGvMQ(param_1);
  }
  DataMemoryBarrier(0xb);
  if (((DAT_71204848 & 1) == 0) && (iVar5 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_71204848), iVar5 != 0)) {
    puVar6 = (undefined4 *)thunk_MwhHq(4);
    *puVar6 = 0;
    thunk_NZQFvopdkrpoNWZgbTfh(puVar6);
    DAT_71204844 = puVar6;
    thunk_SixizuLbAnqfgRApsCY(&DAT_71204848);
  }
  puVar6 = DAT_71204844;
  imp_pthread_mutex_lock(DAT_71204844);
  for (piVar11 = DAT_71204830; piVar11 != (int *)0x0; piVar11 = (int *)piVar11[1]) {
    if (piVar11[2] <= *(int *)(param_1 + 0x30)) {
      (**(code **)(*piVar11 + 0x20))(piVar11,param_1);
    }
  }
  imp_pthread_mutex_unlock(puVar6);
  if ((*pbVar8 & 1) == 0) {
    bVar1 = param_1[0x38];
  }
  else {
    thunk_qNQrlu(*(undefined4 *)(param_1 + 0x4c));
    bVar1 = param_1[0x38];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *param_1;
  }
  else {
    thunk_qNQrlu(*(undefined4 *)(param_1 + 0x40));
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) == 0) {
    return param_1;
  }
  thunk_qNQrlu(*(undefined4 *)(param_1 + 8));
  return param_1;
}


// =========================================================================
// Function: thunk_vrmXWwjvsGtAMlZLrGlA_jdSXiHJ
// Entry: 0x71e06aa0 | Size: 1 bytes
// =========================================================================

uint thunk_vrmXWwjvsGtAMlZLrGlA_jdSXiHJ(int param_1,uint param_2)

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
// Function: thunk_vtXePMhDKcPibetdCiSSToSDnY
// Entry: 0x71e06ab0 | Size: 1 bytes
// =========================================================================

void thunk_vtXePMhDKcPibetdCiSSToSDnY(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  imp_free(*(undefined4 *)(param_1 + -4));
  return;
}


// =========================================================================
// Function: thunk_sCOIScqcmIIBNpkOKswPHAEomOdaGJ
// Entry: 0x71e06ac0 | Size: 1 bytes
// =========================================================================

void thunk_sCOIScqcmIIBNpkOKswPHAEomOdaGJ(int param_1,int param_2)

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
// Function: thunk_yGtStKkKuEhIKOSDIrLmbrFLUBmuGRSUAR
// Entry: 0x71e06ad0 | Size: 1 bytes
// =========================================================================

void thunk_yGtStKkKuEhIKOSDIrLmbrFLUBmuGRSUAR(int param_1)

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
// Function: thunk_axQhMArYGadKcxdFXfBdPVUMDFL
// Entry: 0x71e06ae0 | Size: 1 bytes
// =========================================================================

void thunk_axQhMArYGadKcxdFXfBdPVUMDFL(int param_1)

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
// Function: thunk_bQzgqvVfigxqlibmfuVVztizgYmonPnPqrjgJITlFTSp_neBnBpitkZUcpTqweadoiskilTeWsXdivxPWqr_QOBrKNTBqnUogQMSZefnJeAFeyhiyvoYUpDfXhStmzizjDVIFvx
// Entry: 0x71e06af0 | Size: 1 bytes
// =========================================================================

void thunk_bQzgqvVfigxqlibmfuVVztizgYmonPnPqrjgJITlFTSp_neBnBpitkZUcpTqweadoiskilTeWsXdivxPWqr_QOBrKNTBqnUogQMSZefnJeAFeyhiyvoYUpDfXhStmzizjDVIFvx
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
// Function: thunk_KFjyVnTAHi_TZ_lrRWLxyJOfzQYpetmoNSTFBhJqIgwoZfQGwBJysWErSzJyqTJJFZJCglZfCuCGcLEpIIJcuQLvgeJnzycTPzcYskmBjbdClDyJqLpGnBUarSHjlRArLuQFwX
// Entry: 0x71e06b00 | Size: 1 bytes
// =========================================================================

void thunk_KFjyVnTAHi_TZ_lrRWLxyJOfzQYpetmoNSTFBhJqIgwoZfQGwBJysWErSzJyqTJJFZJCglZfCuCGcLEpIIJcuQLvgeJnzycTPzcYskmBjbdClDyJqLpGnBUarSHjlRArLuQFwX
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
// Function: thunk_sOIzUUpyFZJgOHUZprQmBnKgaMai
// Entry: 0x71e06b10 | Size: 1 bytes
// =========================================================================

void thunk_sOIzUUpyFZJgOHUZprQmBnKgaMai(undefined4 *param_1,undefined4 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 3) = param_3;
  *(undefined1 *)(param_1 + 2) = 1;
  *param_1 = &DAT_70b137c4;
  param_1[1] = param_2;
  return;
}


// =========================================================================
// Function: thunk_UiBcmaphRwDwSfgygpcSbkYIG_
// Entry: 0x71e06b20 | Size: 1 bytes
// =========================================================================

void thunk_UiBcmaphRwDwSfgygpcSbkYIG_(void)

{
  return;
}


// =========================================================================
// Function: thunk_ZuhgYrrQFJvWcqx_csiWxyWSzoh
// Entry: 0x71e06b30 | Size: 1 bytes
// =========================================================================

void thunk_ZuhgYrrQFJvWcqx_csiWxyWSzoh(void)

{
  return;
}


// =========================================================================
// Function: thunk_PRiplXyADFuqzTUVLFyTf_xlewtcLxrb
// Entry: 0x71e06b40 | Size: 1 bytes
// =========================================================================

bool thunk_PRiplXyADFuqzTUVLFyTf_xlewtcLxrb(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = imp_pthread_equal(*param_1,*param_2);
  return iVar1 != 0;
}


// =========================================================================
// Function: thunk_TLRarQmgDHQYpIPvpcSiWWrRTwbjDESGl
// Entry: 0x71e06b50 | Size: 1 bytes
// =========================================================================

void thunk_TLRarQmgDHQYpIPvpcSiWWrRTwbjDESGl(undefined4 param_1)

{
  imp_prctl(0xf,param_1);
  return;
}


// =========================================================================
// Function: thunk_HzYtWQbJePtdpWJoIHHpOUf_
// Entry: 0x71e06b60 | Size: 1 bytes
// =========================================================================

void thunk_HzYtWQbJePtdpWJoIHHpOUf_(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}


// =========================================================================
// Function: thunk__RADsVMJmtqWHGVEYjJvKjOckmvpITOQXx_UcgZvIlugVdNYQbQO_fHHpN_gbRYbqcfBqeVePLWMkboijVwSJZjmCAVbGEPkqPc_FszPWBWjKDiBVtaiynitMPrQRfCePUkhQFOBubpE
// Entry: 0x71e06b70 | Size: 1 bytes
// =========================================================================

int thunk__RADsVMJmtqWHGVEYjJvKjOckmvpITOQXx_UcgZvIlugVdNYQbQO_fHHpN_gbRYbqcfBqeVePLWMkboijVwSJZjmCAVbGEPkqPc_FszPWBWjKDiBVtaiynitMPrQRfCePUkhQFOBubpE
              (int param_1,uint param_2,uint param_3,int *param_4)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  uint *puVar8;
  int iStack_2c;
  uint uStack_28;
  
  puVar8 = (uint *)*param_4;
  puVar3 = (uint *)param_4[1];
  while (puVar1 = puVar3, puVar1 != puVar8) {
    puVar3 = puVar1 + -3;
    if ((*puVar3 & 1) != 0) {
      thunk_qNQrlu(puVar1[-1]);
    }
  }
  param_4[1] = (int)puVar8;
  if (param_2 != 0) {
    uVar2 = 0;
    uVar7 = 0;
    do {
      while (*(byte *)(param_1 + uVar7) != param_3) {
        uVar7 = uVar7 + 1;
        if (uVar7 == param_2) goto LAB_71a7995c;
      }
      if (uVar7 != uVar2) {
        if (param_2 < uVar2) goto LAB_71a79a18;
        iVar5 = param_1 + uVar2;
        uVar4 = uVar7 - uVar2;
        if (param_2 - uVar2 < uVar7 - uVar2) {
          uVar4 = param_2 - uVar2;
        }
        iStack_2c = iVar5;
        uStack_28 = uVar4;
        if (puVar8 < (uint *)param_4[2]) {
          if (0xfffffff7 < uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_71a11918(puVar8);
          }
          if (uVar4 < 0xb) {
            pbVar6 = (byte *)((int)puVar8 + 1);
            *(byte *)puVar8 = (byte)(uVar4 << 1);
            if (uVar4 != 0) goto LAB_71a7991c;
          }
          else {
            uVar2 = (uVar4 | 7) + 1;
            pbVar6 = (byte *)thunk_MwhHq(uVar2);
            *puVar8 = uVar2 | 1;
            puVar8[1] = uVar4;
            puVar8[2] = (uint)pbVar6;
LAB_71a7991c:
            imp___aeabi_memmove(pbVar6,iVar5,uVar4);
          }
          puVar8 = puVar8 + 3;
          pbVar6[uVar4] = 0;
          param_4[1] = (int)puVar8;
        }
        else {
          puVar8 = (uint *)thunk_TDmghjWaUEsHwTqKLWI_mpJniFrhKofBMxGAofxBOGLQoxNoiSLvXrBfIpPnLgwrPYvr_ryzvqIhRpsI_YOwfaHwhNjrZIzGiHmbosJMqqKktHbfNPCcBNVAzUZFUJKEIBwWCJzCrmVkY_puTRscCqnvCnXnda
                                     (param_4,&iStack_2c);
        }
        param_4[1] = (int)puVar8;
      }
      uVar2 = uVar7 + 1;
      uVar7 = uVar2;
    } while (uVar2 != param_2);
LAB_71a7995c:
    if (param_2 != uVar2) {
      if (param_2 < uVar2) {
LAB_71a79a18:
                    /* WARNING: Subroutine does not return */
        FUN_71a66fdc(s_string_view__substr_70068a67);
      }
      param_2 = param_2 - uVar2;
      param_1 = param_1 + uVar2;
      iStack_2c = param_1;
      uStack_28 = param_2;
      if (puVar8 < (uint *)param_4[2]) {
        if (0xfffffff7 < param_2) {
                    /* WARNING: Subroutine does not return */
          FUN_71a11918(puVar8);
        }
        if (param_2 < 0xb) {
          pbVar6 = (byte *)((int)puVar8 + 1);
          *(char *)puVar8 = (char)param_2 * '\x02';
        }
        else {
          uVar7 = (param_2 | 7) + 1;
          pbVar6 = (byte *)thunk_MwhHq(uVar7);
          *puVar8 = uVar7 | 1;
          puVar8[1] = param_2;
          puVar8[2] = (uint)pbVar6;
        }
        imp___aeabi_memmove(pbVar6,param_1,param_2);
        puVar8 = puVar8 + 3;
        pbVar6[param_2] = 0;
        param_4[1] = (int)puVar8;
      }
      else {
        puVar8 = (uint *)thunk_TDmghjWaUEsHwTqKLWI_mpJniFrhKofBMxGAofxBOGLQoxNoiSLvXrBfIpPnLgwrPYvr_ryzvqIhRpsI_YOwfaHwhNjrZIzGiHmbosJMqqKktHbfNPCcBNVAzUZFUJKEIBwWCJzCrmVkY_puTRscCqnvCnXnda
                                   (param_4,&iStack_2c);
      }
      param_4[1] = (int)puVar8;
    }
  }
  return ((int)puVar8 - *param_4 >> 2) * -0x55555555;
}


// =========================================================================
// Function: thunk_TDmghjWaUEsHwTqKLWI_mpJniFrhKofBMxGAofxBOGLQoxNoiSLvXrBfIpPnLgwrPYvr_ryzvqIhRpsI_YOwfaHwhNjrZIzGiHmbosJMqqKktHbfNPCcBNVAzUZFUJKEIBwWCJzCrmVkY_puTRscCqnvCnXnda
// Entry: 0x71e06b80 | Size: 1 bytes
// =========================================================================

uint * thunk_TDmghjWaUEsHwTqKLWI_mpJniFrhKofBMxGAofxBOGLQoxNoiSLvXrBfIpPnLgwrPYvr_ryzvqIhRpsI_YOwfaHwhNjrZIzGiHmbosJMqqKktHbfNPCcBNVAzUZFUJKEIBwWCJzCrmVkY_puTRscCqnvCnXnda
                 (int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  
  iVar2 = param_1[1] - *param_1 >> 2;
  puVar3 = (uint *)(iVar2 * -0x55555555);
  puVar5 = (undefined1 *)((int)puVar3 + 1);
  if ((undefined1 *)0x15555555 < puVar5) {
    FUN_71a7aa38(param_1);
LAB_71a7a840:
                    /* WARNING: Subroutine does not return */
    FUN_71a11918(puVar3);
  }
  iVar1 = param_1[2] - *param_1 >> 2;
  if (puVar5 < (undefined1 *)(iVar1 * 0x55555556)) {
    puVar5 = (undefined1 *)(iVar1 * 0x55555556);
  }
  if (0xaaaaaa9 < (uint)(iVar1 * -0x55555555)) {
    puVar5 = (undefined1 *)0x15555555;
  }
  if (puVar5 == (undefined1 *)0x0) {
    iVar1 = 0;
  }
  else {
    if ((undefined1 *)0x15555555 < puVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_719fe2ec();
    }
    iVar1 = thunk_MwhHq((int)puVar5 * 0xc);
  }
  uVar8 = param_2[1];
  uVar9 = *param_2;
  puVar3 = (uint *)(iVar1 + iVar2 * 4);
  if (0xfffffff7 < uVar8) goto LAB_71a7a840;
  if (uVar8 < 0xb) {
    puVar4 = (undefined1 *)((int)puVar3 + 1);
    *(char *)puVar3 = (char)(uVar8 << 1);
    if (uVar8 == 0) goto LAB_71a7a7e0;
  }
  else {
    uVar6 = (uVar8 | 7) + 1;
    puVar4 = (undefined1 *)thunk_MwhHq(uVar6);
    puVar3[2] = (uint)puVar4;
    *puVar3 = uVar6 | 1;
    puVar3[1] = uVar8;
  }
  imp___aeabi_memmove(puVar4,uVar9,uVar8);
LAB_71a7a7e0:
  puVar4[uVar8] = 0;
  iVar7 = (int)puVar3 - (param_1[1] - *param_1);
  imp___aeabi_memcpy4(iVar7,*param_1);
  iVar2 = *param_1;
  *param_1 = iVar7;
  param_1[1] = (int)(puVar3 + 3);
  param_1[2] = iVar1 + (int)puVar5 * 0xc;
  if (iVar2 != 0) {
    thunk_qNQrlu();
  }
  return puVar3 + 3;
}


// =========================================================================
// Function: thunk_CWxSt_dQgyizzykmaceLvOUefBSqLaJdvXtqMUJImrQHLnJFiJOyEPLDuDYnkWYxu_Afc
// Entry: 0x71e06b90 | Size: 1 bytes
// =========================================================================

void thunk_CWxSt_dQgyizzykmaceLvOUefBSqLaJdvXtqMUJImrQHLnJFiJOyEPLDuDYnkWYxu_Afc
               (int *param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  uVar3 = 0;
  piVar7 = (int *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 != 0) {
    uVar10 = 0;
    do {
      while (*(byte *)(param_2 + uVar10) != param_4) {
        uVar10 = uVar10 + 1;
        if (uVar10 == param_3) goto LAB_71a79d84;
      }
      if (param_3 < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_71a66fdc(s_string_view__substr_70068a67);
      }
      uVar9 = uVar10 - uVar3;
      if (param_3 - uVar3 < uVar10 - uVar3) {
        uVar9 = param_3 - uVar3;
      }
      if (piVar7 < (int *)param_1[2]) {
        *piVar7 = param_2 + uVar3;
        piVar7[1] = uVar9;
        piVar7 = piVar7 + 2;
      }
      else {
        iVar11 = *param_1;
        iVar2 = (int)piVar7 - iVar11 >> 3;
        uVar5 = iVar2 + 1;
        if (0x1fffffff < uVar5) {
          FUN_71a7aaa0(param_1);
LAB_71a79e6c:
                    /* WARNING: Subroutine does not return */
          FUN_719fe2ec();
        }
        uVar4 = param_1[2] - iVar11;
        uVar1 = (int)uVar4 >> 2;
        if (uVar5 < uVar1) {
          uVar5 = uVar1;
        }
        if (0x7ffffff7 < uVar4) {
          uVar5 = 0x1fffffff;
        }
        if (uVar5 == 0) {
          iVar6 = 0;
        }
        else {
          if (0x1fffffff < uVar5) goto LAB_71a79e6c;
          iVar6 = thunk_MwhHq(uVar5 << 3);
        }
        piVar8 = (int *)(iVar6 + iVar2 * 8);
        *piVar8 = param_2 + uVar3;
        piVar8[1] = uVar9;
        imp___aeabi_memcpy4(iVar6,iVar11,(int)piVar7 - iVar11);
        piVar7 = piVar8 + 2;
        *param_1 = iVar6;
        param_1[1] = (int)piVar7;
        param_1[2] = iVar6 + uVar5 * 8;
        if (iVar11 != 0) {
          thunk_qNQrlu(iVar11);
        }
      }
      uVar3 = uVar10 + 1;
      param_1[1] = (int)piVar7;
      uVar10 = uVar3;
    } while (uVar3 != param_3);
LAB_71a79d84:
    if (param_3 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_71a66fdc(s_string_view__substr_70068a67);
    }
  }
  if (piVar7 < (int *)param_1[2]) {
    *piVar7 = param_2 + uVar3;
    piVar7[1] = param_3 - uVar3;
    param_1[1] = (int)(piVar7 + 2);
    return;
  }
  iVar11 = *param_1;
  iVar2 = (int)piVar7 - iVar11 >> 3;
  uVar10 = iVar2 + 1;
  if (0x1fffffff < uVar10) {
    FUN_71a7aaa0(param_1);
LAB_71a79e84:
                    /* WARNING: Subroutine does not return */
    FUN_719fe2ec();
  }
  uVar5 = param_1[2] - iVar11;
  uVar9 = (int)uVar5 >> 2;
  if (uVar10 < uVar9) {
    uVar10 = uVar9;
  }
  if (0x7ffffff7 < uVar5) {
    uVar10 = 0x1fffffff;
  }
  if (uVar10 == 0) {
    iVar6 = 0;
  }
  else {
    if (0x1fffffff < uVar10) goto LAB_71a79e84;
    iVar6 = thunk_MwhHq(uVar10 << 3);
  }
  piVar8 = (int *)(iVar6 + iVar2 * 8);
  *piVar8 = param_2 + uVar3;
  piVar8[1] = param_3 - uVar3;
  imp___aeabi_memcpy4(iVar6,iVar11,(int)piVar7 - iVar11);
  *param_1 = iVar6;
  param_1[1] = (int)(piVar8 + 2);
  param_1[2] = iVar6 + uVar10 * 8;
  if (iVar11 != 0) {
    thunk_qNQrlu(iVar11);
  }
  param_1[1] = (int)(piVar8 + 2);
  return;
}


// =========================================================================
// Function: thunk_TZyUEiLoEk_FYbVFlKnXjTzcpJWZojxnsXAjggoTHQIyGnhdRnJkWGwwWkzaGqboXqtfuAjkJRzdhorDorVYShZBMVixMxaKTXXRlTyZcpqVjZUIuvfazdzwm_TSmifKrmPslxpWjzwEWOektPDKovoELcZzqgwmSpkeTCwNVcR_rbdOICtELqWvHZH_SWiGL
// Entry: 0x71e06ba0 | Size: 1 bytes
// =========================================================================

void thunk_TZyUEiLoEk_FYbVFlKnXjTzcpJWZojxnsXAjggoTHQIyGnhdRnJkWGwwWkzaGqboXqtfuAjkJRzdhorDorVYShZBMVixMxaKTXXRlTyZcpqVjZUIuvfazdzwm_TSmifKrmPslxpWjzwEWOektPDKovoELcZzqgwmSpkeTCwNVcR_rbdOICtELqWvHZH_SWiGL
               (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 auStack_38 [32];
  
  uVar1 = imp_snprintf(auStack_38,0x20,&DAT_7006df5f,param_4,param_3,param_4);
  if (0xfffffff7 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_71a11918(param_1);
  }
  if (uVar1 < 0xb) {
    puVar2 = (undefined1 *)((int)param_1 + 1);
    *(char *)param_1 = (char)(uVar1 << 1);
    if (uVar1 == 0) {
      *puVar2 = 0;
      return;
    }
  }
  else {
    puVar2 = (undefined1 *)thunk_MwhHq((uVar1 | 7) + 1);
    param_1[2] = (int)puVar2;
    *param_1 = (uVar1 | 7) + 2;
    param_1[1] = uVar1;
  }
  imp___aeabi_memcpy(puVar2,auStack_38,uVar1);
  puVar2[uVar1] = 0;
  return;
}


// =========================================================================
// Function: thunk_esvXbILOJDJnxwx
// Entry: 0x71e06bb0 | Size: 1 bytes
// =========================================================================

void thunk_esvXbILOJDJnxwx(int *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 auStack_50 [56];
  
  imp_snprintf(auStack_50,0x32,&DAT_70063e60,param_2);
  uVar1 = imp_strlen(auStack_50);
  if (0xfffffff7 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_71a11918(param_1);
  }
  if (uVar1 < 0xb) {
    puVar2 = (undefined1 *)((int)param_1 + 1);
    *(char *)param_1 = (char)(uVar1 << 1);
    if (uVar1 == 0) {
      *puVar2 = 0;
      return;
    }
  }
  else {
    puVar2 = (undefined1 *)thunk_MwhHq((uVar1 | 7) + 1);
    param_1[2] = (int)puVar2;
    *param_1 = (uVar1 | 7) + 2;
    param_1[1] = uVar1;
  }
  imp___aeabi_memcpy(puVar2,auStack_50,uVar1);
  puVar2[uVar1] = 0;
  return;
}


// =========================================================================
// Function: thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
// Entry: 0x71e06bc0 | Size: 1 bytes
// =========================================================================

int * thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                (int *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1[1] + ~param_1[2];
  if (param_3 < uVar2) {
    uVar2 = param_3;
  }
  imp___aeabi_memcpy(*param_1 + param_1[2],param_2,uVar2);
  iVar1 = param_1[2];
  param_1[2] = iVar1 + uVar2;
  *(undefined1 *)(*param_1 + iVar1 + uVar2) = 0;
  return param_1;
}


// =========================================================================
// Function: thunk_wgRbowfmTEGpJMkRqorLkdDhJHbvUAhH
// Entry: 0x71e06bd0 | Size: 1 bytes
// =========================================================================

void thunk_wgRbowfmTEGpJMkRqorLkdDhJHbvUAhH(undefined4 param_1,undefined4 param_2)

{
  thunk_VsFTGOAObOsNaIhzHnwHdlVaEjgVpEClZb_utNuCUllpbyx(param_1,&DAT_7006cd62,param_2);
  return;
}


// =========================================================================
// Function: thunk_VsFTGOAObOsNaIhzHnwHdlVaEjgVpEClZb_utNuCUllpbyx
// Entry: 0x71e06be0 | Size: 1 bytes
// =========================================================================

int * thunk_VsFTGOAObOsNaIhzHnwHdlVaEjgVpEClZb_utNuCUllpbyx(int *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = imp_vsnprintf(*param_1 + param_1[2],param_1[1] - param_1[2],param_2);
  if ((int)uVar1 < 0) {
    *(undefined1 *)(*param_1 + param_1[2]) = 0;
  }
  else {
    uVar2 = param_1[1] + ~param_1[2];
    if (uVar1 < uVar2) {
      uVar2 = uVar1;
    }
    param_1[2] = uVar2 + param_1[2];
  }
  return param_1;
}


// =========================================================================
// Function: thunk_KCJtiserJRXZQFprkvnKYYULbWdnDAbw
// Entry: 0x71e06bf0 | Size: 1 bytes
// =========================================================================

void thunk_KCJtiserJRXZQFprkvnKYYULbWdnDAbw(undefined4 param_1,float param_2)

{
  thunk_VsFTGOAObOsNaIhzHnwHdlVaEjgVpEClZb_utNuCUllpbyx
            (param_1,&DAT_7006a5eb,SUB84((double)param_2,0),
             (int)((ulonglong)(double)param_2 >> 0x20));
  return;
}


// =========================================================================
// Function: thunk_rPiMkrHHLavtVMGAqTzYYaquUYbIyIuWuWPBQnxNZcwGWgtrWAatzODg
// Entry: 0x71e06c00 | Size: 1 bytes
// =========================================================================

void thunk_rPiMkrHHLavtVMGAqTzYYaquUYbIyIuWuWPBQnxNZcwGWgtrWAatzODg
               (undefined4 *param_1,undefined1 *param_2,int param_3)

{
  if (param_3 == 0) {
    param_2 = (undefined1 *)0x0;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  *param_2 = 0;
  return;
}


// =========================================================================
// Function: thunk_iXPNSBmLMOIxcUfJaRkyBuBKHRkHHrrONocKTqQvufBR
// Entry: 0x71e06c10 | Size: 1 bytes
// =========================================================================

void thunk_iXPNSBmLMOIxcUfJaRkyBuBKHRkHHrrONocKTqQvufBR(void)

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
// Function: thunk_Sk_NNSkwwvZiplyPitmZkobOno
// Entry: 0x71e06c20 | Size: 1 bytes
// =========================================================================

longlong thunk_Sk_NNSkwwvZiplyPitmZkobOno(void)

{
  int iStack_10;
  int iStack_c;
  
  imp_clock_gettime(1,&iStack_10);
  return (longlong)iStack_10 * 1000000000 + (longlong)iStack_c;
}


// =========================================================================
// Function: thunk_CrMGNYcUFILecuwdxKJAKujbFUB
// Entry: 0x71e06c30 | Size: 1 bytes
// =========================================================================

void thunk_CrMGNYcUFILecuwdxKJAKujbFUB(void)

{
  undefined8 uVar1;
  
  uVar1 = thunk_Sk_NNSkwwvZiplyPitmZkobOno();
  FUN_71ba3034((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),1000000,0);
  return;
}


// =========================================================================
// Function: thunk_MrsmVgAfEa_RpNL_CXlGk
// Entry: 0x71e06c40 | Size: 1 bytes
// =========================================================================

void thunk_MrsmVgAfEa_RpNL_CXlGk(void)

{
  undefined8 uVar1;
  
  if (DAT_71204858 != (int *)0x0) {
    uVar1 = (**(code **)(*DAT_71204858 + 8))();
    FUN_71ba3034((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),1000,0);
    return;
  }
  uVar1 = thunk_Sk_NNSkwwvZiplyPitmZkobOno();
  FUN_71ba3034((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),1000,0);
  return;
}


// =========================================================================
// Function: thunk_MOZLUxGQSEDfwiHhMQh
// Entry: 0x71e06c50 | Size: 1 bytes
// =========================================================================

undefined8 thunk_MOZLUxGQSEDfwiHhMQh(uint param_1,int param_2,uint param_3,int param_4)

{
  return CONCAT44(param_2 - (param_4 + (uint)(param_1 < param_3)),param_1 - param_3);
}


// =========================================================================
// Function: thunk_xJp_XqtvKxMpHpNGibSJDsSQ
// Entry: 0x71e06c60 | Size: 1 bytes
// =========================================================================

void thunk_xJp_XqtvKxMpHpNGibSJDsSQ(void)

{
  longlong lVar1;
  undefined8 uVar2;
  int iStack_10;
  int iStack_c;
  
  if (DAT_71204858 == (int *)0x0) {
    imp_gettimeofday(&iStack_10,0);
    lVar1 = (longlong)iStack_10 * 1000000 + (longlong)iStack_c;
  }
  else {
    uVar2 = (**(code **)(*DAT_71204858 + 8))();
    lVar1 = FUN_71ba3034((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),1000,0);
  }
  FUN_71ba3034((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),1000,0);
  return;
}


// =========================================================================
// Function: thunk_zBXXunvleYhUXTEMCFtzpssWQTux_LWJiQWymwPWBCbqAOnSSJydPlQXOW
// Entry: 0x71e06c70 | Size: 1 bytes
// =========================================================================

void thunk_zBXXunvleYhUXTEMCFtzpssWQTux_LWJiQWymwPWBCbqAOnSSJydPlQXOW(void)

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
// Function: thunk_eZPl_KCpCFLvGxTwlIF_qyfuUYxgldRryPtDZzQEcRU
// Entry: 0x71e06c80 | Size: 1 bytes
// =========================================================================

undefined4 thunk_eZPl_KCpCFLvGxTwlIF_qyfuUYxgldRryPtDZzQEcRU(void)

{
  return 1;
}


// =========================================================================
// Function: thunk_FIDaUYlysGumEBFAbFgBVrIMDkFjNNdy
// Entry: 0x71e06c90 | Size: 1 bytes
// =========================================================================

void thunk_FIDaUYlysGumEBFAbFgBVrIMDkFjNNdy(uint *param_1)

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
// Function: thunk_GsbngCFLkhJoshHLyGuEfGhhdXqurqEc
// Entry: 0x71e06ca0 | Size: 1 bytes
// =========================================================================

void thunk_GsbngCFLkhJoshHLyGuEfGhhdXqurqEc(int param_1)

{
  if (*(char *)(param_1 + 4) == '\0') {
    return;
  }
  return;
}


// =========================================================================
// Function: thunk_T_GNHTHvyGMpPKkgGuyUsWQV_JNtBajV_SaCTIaHEKVYWOFeEFVydMsomfUgJmnTeGvzTJqPzFZPtuSyshIitKpsecXjJsbSplcWSNEfOyAFlXlaUXRSfhxmEnynJEcqgfA_HgXfAMoMhrLrGaljpyLdlfbIoyiKdvhaOPCtLUiMiusJAIeEhEJfvCnAPGSJpoQXKtizNPjxUeRMZsGPzxVFpIzbmCsZtFAtdqZbOkJUGSboWmyausKCsIfueAjylSDcpNmpkdpihdXthtPvHFtTpGWPnVVvZJJdyAmpc_XKYuvpmNAzd_QvqoIwRAuNPOWLNn
// Entry: 0x71e06cb0 | Size: 1 bytes
// =========================================================================

void thunk_T_GNHTHvyGMpPKkgGuyUsWQV_JNtBajV_SaCTIaHEKVYWOFeEFVydMsomfUgJmnTeGvzTJqPzFZPtuSyshIitKpsecXjJsbSplcWSNEfOyAFlXlaUXRSfhxmEnynJEcqgfA_HgXfAMoMhrLrGaljpyLdlfbIoyiKdvhaOPCtLUiMiusJAIeEhEJfvCnAPGSJpoQXKtizNPjxUeRMZsGPzxVFpIzbmCsZtFAtdqZbOkJUGSboWmyausKCsIfueAjylSDcpNmpkdpihdXthtPvHFtTpGWPnVVvZJJdyAmpc_XKYuvpmNAzd_QvqoIwRAuNPOWLNn
               (undefined4 *param_1,int *param_2,undefined4 *param_3,undefined4 param_4,int *param_5
               )

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
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
    piVar4 = (int *)*piVar8;
    do {
      while( true ) {
        piVar3 = piVar4;
        iVar6 = piVar3[4];
        uVar7 = piVar3[5];
        uVar9 = uVar11;
        if (uVar7 < uVar11) {
          uVar9 = uVar7;
        }
        iVar2 = imp_memcmp(uVar10,iVar6,uVar9);
        piVar5 = piVar3;
        if (iVar2 == 0) break;
        if (-1 < iVar2) goto LAB_71a78ed0;
LAB_71a78e80:
        piVar4 = (int *)*piVar3;
        piVar8 = piVar3;
        if ((int *)*piVar3 == (int *)0x0) goto LAB_71a78f0c;
      }
      if (uVar11 < uVar7) goto LAB_71a78e80;
LAB_71a78ed0:
      iVar6 = imp_memcmp(iVar6,uVar10,uVar9);
      if (iVar6 == 0) {
        if (uVar11 <= uVar7) goto LAB_71a78f78;
      }
      else if (-1 < iVar6) {
LAB_71a78f78:
        uVar1 = 0;
        goto LAB_71a78f80;
      }
      piVar4 = (int *)piVar3[1];
    } while ((int *)piVar3[1] != (int *)0x0);
    piVar8 = piVar3 + 1;
  }
LAB_71a78f0c:
  piVar3 = (int *)thunk_MwhHq(0x20);
  iVar6 = ((int *)*param_5)[1];
  piVar3[4] = *(int *)*param_5;
  piVar3[5] = iVar6;
  *piVar3 = 0;
  piVar3[1] = 0;
  piVar3[2] = (int)piVar5;
  piVar3[6] = 0;
  *piVar8 = (int)piVar3;
  piVar4 = (int *)*param_2;
  piVar3[7] = 0;
  piVar5 = piVar3;
  if (*piVar4 != 0) {
    *param_2 = *piVar4;
    piVar5 = (int *)*piVar8;
  }
  FUN_71a4128a(param_2[1],piVar5);
  param_2[2] = param_2[2] + 1;
  uVar1 = 1;
LAB_71a78f80:
  *(undefined1 *)(param_1 + 1) = uVar1;
  *param_1 = piVar3;
  return;
}


// =========================================================================
// Function: thunk_M_yfgTEyGhKudXEyRsWVHNOwSpmbMvqtUmQUqxtHNuAaYCrH_jNtbbQIvgcRMg_lwUoqELcGEyORiDAjXzbOqybkRRIQNgdlsUWKGBxYuooPDTCrgCEsgzkekWko_fvvncqNYauUeApmrircyflCeGIlwXvtnGTEmzCcIwBOSYqnUTTXESzxRosTDEGscvzvtwErmMtLPCuiGcpnkTidFNQf
// Entry: 0x71e06cc0 | Size: 1 bytes
// =========================================================================

void thunk_M_yfgTEyGhKudXEyRsWVHNOwSpmbMvqtUmQUqxtHNuAaYCrH_jNtbbQIvgcRMg_lwUoqELcGEyORiDAjXzbOqybkRRIQNgdlsUWKGBxYuooPDTCrgCEsgzkekWko_fvvncqNYauUeApmrircyflCeGIlwXvtnGTEmzCcIwBOSYqnUTTXESzxRosTDEGscvzvtwErmMtLPCuiGcpnkTidFNQf
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  int iStack_40;
  int iStack_3c;
  undefined1 uStack_31;
  uint *puStack_30;
  int aiStack_2c [2];
  
  iVar1 = FUN_71a7775c(param_2,param_3);
  if (iVar1 != 0) {
    thunk_CWxSt_dQgyizzykmaceLvOUefBSqLaJdvXtqMUJImrQHLnJFiJOyEPLDuDYnkWYxu_Afc
              (&iStack_40,param_2,param_3,0x2f);
    if (iStack_3c - iStack_40 != 8) {
      uVar4 = (uint)&uStack_5c | 1;
      uVar9 = 0;
      do {
        iVar1 = iStack_40 + uVar9 * 8;
        uVar7 = *(uint *)(iVar1 + 0xc);
        if (0xfffffff7 < uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_71a11918(&uStack_50);
        }
        uVar8 = *(undefined4 *)(iVar1 + 8);
        if (uVar7 < 0xb) {
          uStack_50 = CONCAT31(uStack_50._1_3_,(char)(uVar7 << 1));
          uVar3 = (uint)&uStack_50 | 1;
          if (uVar7 != 0) goto LAB_71a77c10;
        }
        else {
          uVar6 = (uVar7 | 7) + 1;
          uVar3 = thunk_MwhHq(uVar6);
          uStack_50 = uVar6 | 1;
          uStack_4c = uVar7;
          uStack_48 = uVar3;
LAB_71a77c10:
          imp___aeabi_memmove(uVar3,uVar8,uVar7);
        }
        *(undefined1 *)(uVar3 + uVar7) = 0;
        puVar2 = (undefined4 *)(iStack_40 + uVar9 * 8);
        uVar8 = *puVar2;
        uVar7 = puVar2[1];
        if (0xfffffff7 < uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_71a11918(&uStack_5c);
        }
        if (uVar7 < 0xb) {
          uStack_5c = CONCAT31(uStack_5c._1_3_,(char)(uVar7 << 1));
          uVar3 = uVar4;
          if (uVar7 != 0) goto LAB_71a77c80;
        }
        else {
          uVar6 = (uVar7 | 7) + 1;
          uVar3 = thunk_MwhHq(uVar6);
          uStack_5c = uVar6 | 1;
          uStack_58 = uVar7;
          uStack_54 = uVar3;
LAB_71a77c80:
          imp___aeabi_memmove(uVar3,uVar8,uVar7);
        }
        *(undefined1 *)(uVar3 + uVar7) = 0;
        puStack_30 = &uStack_5c;
        thunk_KAWEvuXAPdSaxkqrDxrvDMDlKdMdLErCdgIPmCZNCdupnoSEEhMCZsGTaYCwFkJuBNHQxtGCmyinMLplEoReQO_bEKadJUYgiCTJdHeZAXzKxettjkFObsRQmHcqQzEBYkRqtcfnkrCMJ_c_JtjIuSiHArhUMxjdnTBdZHoNvgniAtjuqeEpoBPQwvtdRVgdZWyhSVpAXJdZQjmADfCnzPxnqQevYMDhiNfIuMpFgITTzymIKLLDWIbJtlzVVkYGoBSKjrezzQWdv_DSTSuiywtcttpPBGXkmbcibcBOiv_oKUpVlJURzolLKrzcFAKgUfqifXhO
                  (aiStack_2c,param_1,&uStack_5c,&DAT_7008e8a7,&puStack_30,&uStack_31);
        iVar1 = aiStack_2c[0];
        pbVar5 = (byte *)(aiStack_2c[0] + 0x1c);
        if ((*pbVar5 & 1) != 0) {
          thunk_qNQrlu(*(undefined4 *)(aiStack_2c[0] + 0x24));
        }
        *(uint *)(iVar1 + 0x24) = uStack_48;
        *(ulonglong *)pbVar5 = CONCAT44(uStack_4c,uStack_50);
        if ((uStack_5c & 1) != 0) {
          thunk_qNQrlu(uStack_54);
        }
        uVar9 = uVar9 + 2;
      } while (uVar9 < (iStack_3c - iStack_40 >> 3) - 1U);
    }
    if (iStack_40 != 0) {
      thunk_qNQrlu();
    }
  }
  return;
}


// =========================================================================
// Function: thunk_KAWEvuXAPdSaxkqrDxrvDMDlKdMdLErCdgIPmCZNCdupnoSEEhMCZsGTaYCwFkJuBNHQxtGCmyinMLplEoReQO_bEKadJUYgiCTJdHeZAXzKxettjkFObsRQmHcqQzEBYkRqtcfnkrCMJ_c_JtjIuSiHArhUMxjdnTBdZHoNvgniAtjuqeEpoBPQwvtdRVgdZWyhSVpAXJdZQjmADfCnzPxnqQevYMDhiNfIuMpFgITTzymIKLLDWIbJtlzVVkYGoBSKjrezzQWdv_DSTSuiywtcttpPBGXkmbcibcBOiv_oKUpVlJURzolLKrzcFAKgUfqifXhO
// Entry: 0x71e06cd0 | Size: 1 bytes
// =========================================================================

void thunk_KAWEvuXAPdSaxkqrDxrvDMDlKdMdLErCdgIPmCZNCdupnoSEEhMCZsGTaYCwFkJuBNHQxtGCmyinMLplEoReQO_bEKadJUYgiCTJdHeZAXzKxettjkFObsRQmHcqQzEBYkRqtcfnkrCMJ_c_JtjIuSiHArhUMxjdnTBdZHoNvgniAtjuqeEpoBPQwvtdRVgdZWyhSVpAXJdZQjmADfCnzPxnqQevYMDhiNfIuMpFgITTzymIKLLDWIbJtlzVVkYGoBSKjrezzQWdv_DSTSuiywtcttpPBGXkmbcibcBOiv_oKUpVlJURzolLKrzcFAKgUfqifXhO
               (undefined4 *param_1,int *param_2,byte *param_3,undefined4 param_4,
               undefined4 *param_5)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined8 *puVar5;
  undefined1 uVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  byte *pbVar12;
  int *piVar13;
  undefined8 uVar14;
  
  piVar8 = param_2 + 1;
  piVar2 = (int *)*piVar8;
  piVar13 = piVar8;
  if (piVar2 != (int *)0x0) {
    uVar11 = *(uint *)(param_3 + 4);
    pbVar12 = *(byte **)(param_3 + 8);
    if ((*param_3 & 1) == 0) {
      pbVar12 = param_3 + 1;
      uVar11 = (uint)(*param_3 >> 1);
    }
    do {
      while( true ) {
        piVar4 = piVar2;
        uVar7 = piVar4[5];
        iVar10 = piVar4[6];
        if ((*(byte *)(piVar4 + 4) & 1) == 0) {
          iVar10 = (int)piVar4 + 0x11;
          uVar7 = (uint)(*(byte *)(piVar4 + 4) >> 1);
        }
        uVar9 = uVar11;
        if (uVar7 < uVar11) {
          uVar9 = uVar7;
        }
        iVar3 = imp_memcmp(pbVar12,iVar10,uVar9);
        bVar1 = uVar11 < uVar7;
        if (iVar3 != 0) {
          bVar1 = iVar3 < 0;
        }
        piVar13 = piVar4;
        if (bVar1) break;
        iVar10 = imp_memcmp(iVar10,pbVar12,uVar9);
        uVar6 = 0;
        bVar1 = iVar10 < 0;
        if (iVar10 == 0) {
          bVar1 = uVar7 < uVar11;
        }
        if (!bVar1) goto LAB_71a79240;
        piVar2 = (int *)piVar4[1];
        if ((int *)piVar4[1] == (int *)0x0) {
          piVar8 = piVar4 + 1;
          goto LAB_71a791bc;
        }
      }
      piVar2 = (int *)*piVar4;
      piVar8 = piVar4;
    } while ((int *)*piVar4 != (int *)0x0);
  }
LAB_71a791bc:
  piVar4 = (int *)thunk_MwhHq(0x28);
  puVar5 = (undefined8 *)*param_5;
  uVar14 = *puVar5;
  piVar4[6] = *(int *)(puVar5 + 1);
  *(undefined8 *)(piVar4 + 4) = uVar14;
  *(undefined4 *)puVar5 = 0;
  *(undefined4 *)((int)puVar5 + 4) = 0;
  *(undefined4 *)(puVar5 + 1) = 0;
  piVar4[9] = 0;
  *piVar4 = 0;
  piVar4[1] = 0;
  piVar4[2] = (int)piVar13;
  piVar4[7] = 0;
  piVar4[8] = 0;
  *piVar8 = (int)piVar4;
  piVar2 = piVar4;
  if (*(int *)*param_2 != 0) {
    *param_2 = *(int *)*param_2;
    piVar2 = (int *)*piVar8;
  }
  FUN_71a4128a(param_2[1],piVar2);
  uVar6 = 1;
  param_2[2] = param_2[2] + 1;
LAB_71a79240:
  *(undefined1 *)(param_1 + 1) = uVar6;
  *param_1 = piVar4;
  return;
}


// =========================================================================
// Function: thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
// Entry: 0x71e06ce0 | Size: 1 bytes
// =========================================================================

void thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
               (int *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint unaff_r7;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  iVar1 = DAT_71204824;
  if ((DAT_71204824 == 0) || (uVar2 = imp_strlen(DAT_71204824), uVar2 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  uVar9 = 0;
  do {
    uVar7 = uVar2 - uVar9;
    uVar3 = imp_memchr(iVar1 + uVar9,0x2f,uVar7);
    uVar6 = uVar3 - iVar1;
    if (uVar3 == 0) {
      uVar6 = 0xffffffff;
    }
    if (uVar6 == 0xffffffff) break;
    bVar10 = uVar9 <= uVar6;
    if (uVar6 != uVar9) {
      unaff_r7 = uVar6 + 1;
      bVar10 = unaff_r7 <= uVar2;
      uVar3 = uVar2;
    }
    if (!bVar10 || (uVar6 == uVar9 || uVar3 == unaff_r7)) break;
    uVar8 = uVar2 - unaff_r7;
    iVar4 = imp_memchr(iVar1 + unaff_r7,0x2f,uVar8);
    uVar3 = iVar4 - iVar1;
    if (iVar4 == 0) {
      uVar3 = 0xffffffff;
    }
    if (uVar3 == 0xffffffff || uVar3 == unaff_r7) break;
    uVar5 = uVar6 - uVar9;
    if (uVar7 < uVar6 - uVar9) {
      uVar5 = uVar7;
    }
    if ((param_3 == uVar5) && (iVar4 = imp_memcmp(param_2,iVar1 + uVar9), iVar4 == 0)) {
      uVar2 = uVar3 + ~uVar6;
      if (uVar8 < uVar3 + ~uVar6) {
        uVar2 = uVar8;
      }
      if (0xfffffff7 < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_71a11918(param_1);
      }
      if (uVar2 < 0xb) {
        iVar4 = (int)param_1 + 1;
        *(char *)param_1 = (char)(uVar2 << 1);
        if (uVar2 == 0) goto LAB_71a782a0;
      }
      else {
        iVar4 = thunk_MwhHq((uVar2 | 7) + 1);
        *param_1 = (uVar2 | 7) + 2;
        param_1[1] = uVar2;
        param_1[2] = iVar4;
      }
      imp___aeabi_memmove(iVar4,iVar1 + unaff_r7,uVar2);
LAB_71a782a0:
      *(undefined1 *)(iVar4 + uVar2) = 0;
      return;
    }
    uVar9 = uVar3 + 1;
  } while (uVar9 < uVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// =========================================================================
// Function: thunk_oOtKRkPuaTm_RfIBjRkXhukmdut_MthTDBJMVsRjoCgvEWPLcdU_BCogbjPTbvDRZkFnGhyvDKNtiQAfEUitieIqwpeqAIFjLLNXHCx
// Entry: 0x71e06cf0 | Size: 1 bytes
// =========================================================================

void thunk_oOtKRkPuaTm_RfIBjRkXhukmdut_MthTDBJMVsRjoCgvEWPLcdU_BCogbjPTbvDRZkFnGhyvDKNtiQAfEUitieIqwpeqAIFjLLNXHCx
               (void)

{
  thunk_qhyJHfkAWtcPqTDBve_JgJXYPcnWuPsXBXadzeJrkwatscHBYdmoqaNTAEIqKQkNRsYuOItmWB_hixbLaSIEGsqHEhosWHCSLvAqrkykMNLLT
            ();
  return;
}


// =========================================================================
// Function: thunk_qhyJHfkAWtcPqTDBve_JgJXYPcnWuPsXBXadzeJrkwatscHBYdmoqaNTAEIqKQkNRsYuOItmWB_hixbLaSIEGsqHEhosWHCSLvAqrkykMNLLT
// Entry: 0x71e06d00 | Size: 1 bytes
// =========================================================================

int thunk_qhyJHfkAWtcPqTDBve_JgJXYPcnWuPsXBXadzeJrkwatscHBYdmoqaNTAEIqKQkNRsYuOItmWB_hixbLaSIEGsqHEhosWHCSLvAqrkykMNLLT
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
// Function: thunk_uXDnqJECxCoMBJ_RycOVUdDqmiIzH_BqIguZZJjVNdSZluspZUHcVSXXVRwafJkDcrderbSWEKqfauXYgaApuuShLH
// Entry: 0x71e06d10 | Size: 1 bytes
// =========================================================================

int * thunk_uXDnqJECxCoMBJ_RycOVUdDqmiIzH_BqIguZZJjVNdSZluspZUHcVSXXVRwafJkDcrderbSWEKqfauXYgaApuuShLH
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
// Function: thunk_tOdMOakzFCkDzvAlGmXyEZwQjEjnBNofJARUhSkXwVIyhKh_sDsxzIVynDVWHDPMZCdafXjRInffgTQhxaBAuoZWjIX_lHQsaRWyzwEMLE
// Entry: 0x71e06d20 | Size: 1 bytes
// =========================================================================

int thunk_tOdMOakzFCkDzvAlGmXyEZwQjEjnBNofJARUhSkXwVIyhKh_sDsxzIVynDVWHDPMZCdafXjRInffgTQhxaBAuoZWjIX_lHQsaRWyzwEMLE
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
// Function: thunk_vsvXXDTqCgigxJSTnQh_UuMzwdKDOtsuj_lQISlxCfabNzQdRj
// Entry: 0x71e06d30 | Size: 1 bytes
// =========================================================================

void thunk_vsvXXDTqCgigxJSTnQh_UuMzwdKDOtsuj_lQISlxCfabNzQdRj(int param_1,int param_2)

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
// Function: thunk_uEluOtATSLBrxrLLJAkMtjFkBaaFydmwhHiSwiABrhYLyflcftzHpGYAdmQgxZYZXcqQOJYWZqpDMSyhUwMtlbgotkNhKmLhOMaZUZSjHqvqqEnZpNSQDaFrndNBAABsuVUwMYAlkAWmWfOFqBdHemXIFkpRPdLiaOCAZ_kMiOnqXyRoIpZfUfkaWOyOWngbLaGKGnawgcwGoNujEymnOHSVEdadFDzTzXuwGJEBRdtNWnTHBFUEgheGgnIsXNpxRONmWCNAWpbOUMDQTbSHTgsdTrMgv_KNQsNRGuwwgIrwylKLjTDGQyZmYqFIIYIVydTuAUkfxunCXOVtucVtbMsgcqfqsRBtztcDRtwkoejyl
// Entry: 0x71e06d40 | Size: 1 bytes
// =========================================================================

void thunk_uEluOtATSLBrxrLLJAkMtjFkBaaFydmwhHiSwiABrhYLyflcftzHpGYAdmQgxZYZXcqQOJYWZqpDMSyhUwMtlbgotkNhKmLhOMaZUZSjHqvqqEnZpNSQDaFrndNBAABsuVUwMYAlkAWmWfOFqBdHemXIFkpRPdLiaOCAZ_kMiOnqXyRoIpZfUfkaWOyOWngbLaGKGnawgcwGoNujEymnOHSVEdadFDzTzXuwGJEBRdtNWnTHBFUEgheGgnIsXNpxRONmWCNAWpbOUMDQTbSHTgsdTrMgv_KNQsNRGuwwgIrwylKLjTDGQyZmYqFIIYIVydTuAUkfxunCXOVtucVtbMsgcqfqsRBtztcDRtwkoejyl
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
// Function: thunk_AdgOT_XFcyUbNLKoAQbYidygMKHBfZZWxE
// Entry: 0x71e06d50 | Size: 1 bytes
// =========================================================================

byte * thunk_AdgOT_XFcyUbNLKoAQbYidygMKHBfZZWxE(byte *param_1)

{
  FUN_71a93d4c(param_1 + 0x18,*(undefined4 *)(param_1 + 0x1c));
  if ((*param_1 & 1) != 0) {
    thunk_qNQrlu(*(undefined4 *)(param_1 + 8));
  }
  return param_1;
}


// =========================================================================
// Function: thunk_vpBUqbqnYuHEYH_lvNmYYzZJvdtwGxgBvjJBFjIrCnnylMc_BtjdQcJLKmKVWPVfURuibiWUaVYhimrhVFPvaBR_ROeraGrbKLITtFGuIVFbhysAVfrkkzeyPyEdtSTGvbicnAQXUVAogZcCnrGZjUvnr
// Entry: 0x71e06d60 | Size: 1 bytes
// =========================================================================

byte * thunk_vpBUqbqnYuHEYH_lvNmYYzZJvdtwGxgBvjJBFjIrCnnylMc_BtjdQcJLKmKVWPVfURuibiWUaVYhimrhVFPvaBR_ROeraGrbKLITtFGuIVFbhysAVfrkkzeyPyEdtSTGvbicnAQXUVAogZcCnrGZjUvnr
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
// Function: thunk_lOCcuBNUcTMrPwAfduqNxSBJlYcvwuwXTziQRxi_PnpqzJGPxNzfGabVsYmTuH_SMT_fHjjDJXhXOTjhheUJRvNNeBuklkVtAcbSJEyxCtJQlXpPnZDGzEeKcRvHe_vSIPNsTHUmddOknoYYpuqkbXMoCgUQcHSXJxIDYrqsPGUziEHTqH_uPNyyHEoRGyExq
// Entry: 0x71e06d70 | Size: 1 bytes
// =========================================================================

void thunk_lOCcuBNUcTMrPwAfduqNxSBJlYcvwuwXTziQRxi_PnpqzJGPxNzfGabVsYmTuH_SMT_fHjjDJXhXOTjhheUJRvNNeBuklkVtAcbSJEyxCtJQlXpPnZDGzEeKcRvHe_vSIPNsTHUmddOknoYYpuqkbXMoCgUQcHSXJxIDYrqsPGUziEHTqH_uPNyyHEoRGyExq
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
// Function: thunk_CwopoJXLvpxEuFTnOvZUOLUYWXdhqqifuafwcnjVGABbDaQW_ABWwLxwYAQVvhjQ_cshWTLYoTDKCAogJuCCuWzXaKoRtzttIDGbFbytBMmWEWoSWzeFICOMBUtDBHxxVIPGju_VTHpTyAxoaMSSMmGydHskeArPdHsRiijIQIlIGaBdYRIRbkJGBTaKlncKUitgzSJwSKuuQEOsjfRHnJNgJcOStWuGhGWLDmQFtzKfYcByrMwTWWwpw
// Entry: 0x71e06d80 | Size: 1 bytes
// =========================================================================

int * thunk_CwopoJXLvpxEuFTnOvZUOLUYWXdhqqifuafwcnjVGABbDaQW_ABWwLxwYAQVvhjQ_cshWTLYoTDKCAogJuCCuWzXaKoRtzttIDGbFbytBMmWEWoSWzeFICOMBUtDBHxxVIPGju_VTHpTyAxoaMSSMmGydHskeArPdHsRiijIQIlIGaBdYRIRbkJGBTaKlncKUitgzSJwSKuuQEOsjfRHnJNgJcOStWuGhGWLDmQFtzKfYcByrMwTWWwpw
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
// Function: thunk_nxphuypHnvtjluWYlftD
// Entry: 0x71e06d90 | Size: 1 bytes
// =========================================================================

int thunk_nxphuypHnvtjluWYlftD(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = imp_malloc(param_1 + 0x40);
  if (uVar1 == 0) {
    iVar2 = 0;
  }
  else {
    *(uint *)((uVar1 & 0xffffffc0) + 0x3c) = uVar1;
    iVar2 = (uVar1 & 0xffffffc0) + 0x40;
  }
  return iVar2;
}


// =========================================================================
// Function: thunk_oNNDtZVtPOMuxXdbYs
// Entry: 0x71e06da0 | Size: 1 bytes
// =========================================================================

void thunk_oNNDtZVtPOMuxXdbYs(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  imp_free(*(undefined4 *)(param_1 + -4));
  return;
}


// =========================================================================
// Function: thunk_DxytLesOaRjiMEj
// Entry: 0x71e06db0 | Size: 1 bytes
// =========================================================================

undefined4 thunk_DxytLesOaRjiMEj(void)

{
  return 1;
}


// =========================================================================
// Function: thunk_XYTYOzOai
// Entry: 0x71e06dc0 | Size: 1 bytes
// =========================================================================

void thunk_XYTYOzOai(uint param_1,int param_2,uint *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint *puVar4;
  float *extraout_r1;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  float *pfVar14;
  bool bVar15;
  uint in_fpscr;
  float fVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  uint uStack_6c;
  int iStack_50;
  double dStack_48;
  double dStack_40;
  
  uStack_6c = 0;
  if (param_1 != 1) {
    puVar12 = param_3 + 2;
    iVar1 = 0;
    uStack_6c = 0;
    puVar4 = puVar12;
    uVar10 = param_1;
    do {
      if (uVar10 != ((int)uVar10 / 5) * 5) {
        if (uVar10 != 1) {
          iVar3 = 0;
          goto LAB_71b15990;
        }
        break;
      }
      puVar4 = puVar4 + 1;
      iVar1 = iVar1 + 4;
      puVar12[uStack_6c] = 5;
      uStack_6c = uStack_6c + 1;
      uVar9 = uVar10 - 5;
      uVar10 = (int)uVar10 / 5;
    } while (4 < uVar9);
  }
  goto LAB_71b15a28;
  while( true ) {
    *(undefined4 *)((int)puVar4 + iVar3) = 3;
    iVar3 = iVar3 + 4;
    uStack_6c = uStack_6c + 1;
    uVar9 = uVar10 - 3;
    uVar10 = (int)uVar10 / 3;
    if (uVar9 < 3) break;
LAB_71b15990:
    if (uVar10 != ((int)uVar10 / 3) * 3) {
      if (uVar10 != 1) {
        iVar6 = 0;
        goto LAB_71b159dc;
      }
      break;
    }
  }
  goto LAB_71b15a28;
  while( true ) {
    *(undefined4 *)((int)puVar4 + iVar3 + iVar6) = 4;
    uStack_6c = uStack_6c + 1;
    uVar9 = uVar10 & 0xfffffffc;
    iVar6 = iVar6 + 4;
    uVar10 = (int)(uVar10 + ((uint)((int)uVar10 >> 0x1f) >> 0x1e)) >> 2;
    if (uVar9 == 4) break;
LAB_71b159dc:
    if (uVar10 != ((int)uVar10 / 4) * 4) {
      if (uVar10 != 1) {
        iVar1 = iVar1 + iVar3 + iVar6;
        puVar2 = (undefined4 *)((int)puVar4 + iVar6 + iVar3);
        goto LAB_71b15c28;
      }
      break;
    }
  }
  goto LAB_71b15a28;
  while( true ) {
    *puVar2 = 2;
    if (uStack_6c != 0) {
      imp___aeabi_memmove4(param_3 + 3,puVar12,iVar1);
      *puVar12 = 2;
    }
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + 4;
    uStack_6c = uStack_6c + 1;
    uVar9 = uVar10 & 0xfffffffe;
    uVar10 = (int)uVar10 / 2;
    if (uVar9 == 2) break;
LAB_71b15c28:
    if (uVar10 != (uVar10 - ((int)uVar10 >> 0x1f) & 0xfffffffe)) break;
  }
LAB_71b15a28:
  *param_3 = param_1;
  param_3[1] = uStack_6c;
  if (0 < (int)uStack_6c) {
    fVar16 = (float)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
    iStack_50 = 1;
    iVar1 = 1;
    uVar10 = 1;
    do {
      uVar9 = param_3[uVar10 + 1];
      iVar3 = FUN_71ba0440(param_1,uVar9 * iVar1);
      if (1 < (int)uVar9) {
        if (iVar3 < 1) {
          puVar2 = (undefined4 *)(param_2 + iStack_50 * 4);
          *puVar2 = 0;
          puVar2[-1] = 0x3f800000;
        }
        else {
          iVar6 = 0;
          uVar11 = 1;
          do {
            iVar8 = 2;
            iVar13 = 1;
            iVar6 = iVar6 + iVar1;
            fVar17 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x16) & 3);
            pfVar7 = (float *)(param_2 + iStack_50 * 4);
            *pfVar7 = 0.0;
            pfVar7[-1] = 1.0;
            pfVar5 = (float *)(param_2 + 4 + iStack_50 * 4);
            do {
              pfVar14 = pfVar5;
              fVar18 = (float)VectorSignedToFloat(iVar13,(byte)(in_fpscr >> 0x16) & 3);
              dVar19 = (double)((6.2831855 / fVar16) * fVar17 * fVar18);
              imp_sincos(SUB84(dVar19,0),(int)((ulonglong)dVar19 >> 0x20),&dStack_40,&dStack_48);
              iVar8 = iVar8 + 2;
              iVar13 = iVar13 + 1;
              *pfVar14 = (float)dStack_48;
              pfVar14[1] = (float)dStack_40;
              pfVar5 = pfVar14 + 2;
            } while (iVar8 <= iVar3 * 2);
            uVar11 = uVar11 + 1;
            pfVar5 = extraout_r1;
            if (5 < uVar9) {
              pfVar5 = pfVar7;
            }
            if (5 < uVar9) {
              pfVar5[-1] = (float)dStack_48;
              *pfVar5 = pfVar14[1];
            }
            iVar8 = iStack_50 + iVar8;
            iStack_50 = iVar8 + -2;
          } while (uVar11 != uVar9);
          iStack_50 = iVar8 + -2;
        }
      }
      bVar15 = uVar10 != uStack_6c;
      iVar1 = uVar9 * iVar1;
      uVar10 = uVar10 + 1;
    } while (bVar15);
  }
  return;
}


// =========================================================================
// Function: thunk_ameeFmOgA
// Entry: 0x71e06dd0 | Size: 1 bytes
// =========================================================================

int thunk_ameeFmOgA(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                   undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint in_fpscr;
  undefined4 uVar12;
  
  iVar10 = *(int *)(param_6 + 4);
  if (0 < iVar10) {
    iVar11 = 0;
    iVar2 = param_4;
    if (param_2 == param_4) {
      iVar2 = param_3;
    }
    uVar12 = VectorSignedToFloat(param_7,(byte)(in_fpscr >> 0x16) & 3);
    piVar5 = (int *)(param_6 + 8);
    iVar8 = 1;
    do {
      iVar9 = *piVar5;
      iVar3 = FUN_71ba0440(param_1);
      iVar1 = iVar3 * 2;
      switch(iVar9) {
      case 2:
        FUN_71b16468(uVar12,iVar1,iVar8,param_2,iVar2,param_5 + iVar11 * 4);
        break;
      case 3:
        iVar4 = param_5 + iVar11 * 4;
        FUN_71b165ec(uVar12,iVar1,iVar8,param_2,iVar2,iVar4,iVar4 + iVar3 * 8);
        break;
      case 4:
        iVar4 = param_5 + iVar11 * 4;
        iVar6 = iVar4 + iVar3 * 8;
        FUN_71b1614c(uVar12,iVar1,iVar8,param_2,iVar2,iVar4,iVar6,iVar6 + iVar3 * 8);
        break;
      case 5:
        iVar4 = param_5 + iVar11 * 4;
        iVar6 = iVar4 + iVar3 * 8;
        iVar7 = iVar6 + iVar3 * 8;
        FUN_71b15e0c(uVar12,iVar1,iVar8,param_2,iVar2,iVar4,iVar6,iVar7,iVar7 + iVar3 * 8);
      }
      iVar11 = iVar1 * (iVar9 + -1) + iVar11;
      iVar1 = param_4;
      param_2 = param_3;
      if (iVar2 == param_4) {
        iVar1 = param_3;
        param_2 = iVar2;
      }
      iVar10 = iVar10 + -1;
      iVar2 = iVar1;
      piVar5 = piVar5 + 1;
      iVar8 = iVar9 * iVar8;
    } while (iVar10 != 0);
  }
  return param_2;
}


// =========================================================================
// Function: thunk_RwHYDtDaQMfqxLi
// Entry: 0x71e06de0 | Size: 1 bytes
// =========================================================================

undefined1 (*) [16] thunk_RwHYDtDaQMfqxLi(uint param_1,int param_2)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  float *pfVar16;
  uint in_fpscr;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  double dStack_48;
  double dStack_40;
  
  pauVar1 = (undefined1 (*) [16])imp_malloc(0x54);
  *(int *)(pauVar1[4] + 4) = param_2;
  *(uint *)*pauVar1 = param_1;
  uVar2 = param_1;
  if (param_2 == 0) {
    uVar2 = (int)param_1 / 2;
  }
  *(uint *)(*pauVar1 + 4) = uVar2;
  uVar2 = imp_malloc(uVar2 * 8 + 0x40);
  if (uVar2 == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = (uVar2 & 0xffffffc0) + 0x40;
    *(uint *)((uVar2 & 0xffffffc0) + 0x3c) = uVar2;
  }
  *(int *)(pauVar1[4] + 8) = iVar13;
  *(int *)(pauVar1[4] + 0xc) = iVar13;
  *(int *)pauVar1[5] = iVar13;
  if (param_2 == 0) {
    if (param_1 == 1) {
      uVar2 = 1;
      *(undefined4 *)(*pauVar1 + 8) = 1;
      *(undefined4 *)(*pauVar1 + 0xc) = 0;
      goto LAB_71b168f4;
    }
    pauVar3 = pauVar1 + 1;
    iVar14 = 0;
    uVar9 = 0;
    uVar2 = param_1;
    do {
      if (uVar2 != ((int)uVar2 / 4) * 4) {
        if (uVar2 != 1) goto LAB_71b169b8;
        break;
      }
      *(undefined4 *)(*pauVar3 + uVar9 * 4) = 4;
      uVar6 = uVar2 & 0xfffffffc;
      uVar2 = (int)(uVar2 + ((uint)((int)uVar2 >> 0x1f) >> 0x1e)) >> 2;
      iVar14 = iVar14 + 4;
      uVar9 = uVar9 + 1;
    } while (uVar6 != 4);
    goto LAB_71b16a78;
  }
  thunk_XYTYOzOai(param_1,iVar13);
  uVar9 = *(uint *)(*pauVar1 + 0xc);
  goto LAB_71b16864;
  while( true ) {
    *(undefined4 *)(*pauVar3 + uVar9 * 4) = 2;
    if (uVar9 != 0) {
      imp___aeabi_memmove4(pauVar1[1] + 4,pauVar3,iVar14);
      *(undefined4 *)*pauVar3 = 2;
    }
    uVar6 = uVar2 & 0xfffffffe;
    uVar2 = (int)uVar2 / 2;
    uVar9 = uVar9 + 1;
    iVar14 = iVar14 + 4;
    if (uVar6 == 2) break;
LAB_71b169b8:
    if (uVar2 != (uVar2 - ((int)uVar2 >> 0x1f) & 0xfffffffe)) {
      if (uVar2 != 1) {
        puVar4 = (undefined4 *)(*pauVar3 + iVar14);
        goto LAB_71b16a04;
      }
      break;
    }
  }
  goto LAB_71b16a78;
  while( true ) {
    uVar6 = uVar2 - 3;
    *puVar4 = 3;
    uVar9 = uVar9 + 1;
    puVar4 = puVar4 + 1;
    uVar2 = (int)uVar2 / 3;
    if (uVar6 < 3) break;
LAB_71b16a04:
    if (uVar2 != ((int)uVar2 / 3) * 3) {
      if (uVar2 != 1) goto LAB_71b16a48;
      break;
    }
  }
  goto LAB_71b16a78;
  while( true ) {
    uVar6 = uVar2 - 5;
    *puVar4 = 5;
    uVar9 = uVar9 + 1;
    puVar4 = puVar4 + 1;
    uVar2 = (int)uVar2 / 5;
    if (uVar6 < 5) break;
LAB_71b16a48:
    if (uVar2 != ((int)uVar2 / 5) * 5) break;
  }
LAB_71b16a78:
  *(uint *)(*pauVar1 + 8) = param_1;
  *(uint *)(*pauVar1 + 0xc) = uVar9;
  if (1 < (int)uVar9) {
    dVar20 = (double)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
    iVar11 = 0;
    iVar14 = 1;
    uVar2 = 1;
    do {
      uVar6 = uVar2 + 1;
      iVar10 = *(int *)(*pauVar1 + uVar2 * 4 + 0xc);
      iVar5 = FUN_71ba0440(param_1);
      if (1 < iVar10) {
        if (iVar5 < 3) {
          iVar11 = iVar5 * (iVar10 + -1) + iVar11;
        }
        else {
          iVar8 = 0;
          iVar15 = 1;
          pfVar16 = (float *)(iVar13 + 4 + iVar11 * 4);
          do {
            uVar2 = 0xffffffff;
            iVar8 = iVar8 + iVar14;
            fVar17 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x16) & 3);
            pfVar12 = pfVar16;
            do {
              fVar18 = (float)VectorSignedToFloat(uVar2 + 2,(byte)(in_fpscr >> 0x16) & 3);
              dVar21 = (double)((float)(6.283185307179586 / dVar20) * fVar17 * fVar18);
              imp_sincos(SUB84(dVar21,0),(int)((ulonglong)dVar21 >> 0x20),&dStack_40,&dStack_48);
              uVar2 = uVar2 + 1;
              pfVar12[-1] = (float)dStack_48;
              *pfVar12 = (float)dStack_40;
              pfVar12 = pfVar12 + 2;
            } while (iVar5 - 3U >> 1 != uVar2);
            iVar15 = iVar15 + 1;
            pfVar16 = pfVar16 + iVar5;
            iVar11 = iVar11 + iVar5;
          } while (iVar15 != iVar10);
        }
      }
      iVar14 = iVar10 * iVar14;
      uVar2 = uVar6;
    } while (uVar6 != uVar9);
  }
LAB_71b16864:
  if ((int)uVar9 < 1) {
    uVar2 = 1;
  }
  else {
    if (uVar9 < 4) {
      uVar2 = 1;
      uVar6 = 0;
    }
    else {
      uVar6 = uVar9 & 0x7ffffffc;
      auVar22._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
      auVar22._0_8_ = 0x100000001;
      auVar22 = *(undefined1 (*) [16])(auVar22 << 0x40 | auVar22);
      uVar2 = uVar6;
      pauVar3 = pauVar1;
      do {
        pauVar3 = pauVar3 + 1;
        uVar2 = uVar2 - 4;
        auVar22 = VectorMultiply(*pauVar3,auVar22,4);
      } while (uVar2 != 0);
      uVar19 = VectorMultiply(auVar22._0_8_,auVar22._8_8_,4);
      uVar2 = (int)uVar19 * (int)((ulonglong)uVar19 >> 0x20);
      if (uVar9 == uVar6) goto LAB_71b168f4;
    }
    iVar13 = uVar9 - uVar6;
    piVar7 = (int *)(pauVar1[1] + uVar6 * 4);
    do {
      iVar13 = iVar13 + -1;
      uVar2 = *piVar7 * uVar2;
      piVar7 = piVar7 + 1;
    } while (iVar13 != 0);
  }
LAB_71b168f4:
  if (uVar2 != param_1) {
    if (*(int *)(pauVar1[4] + 8) != 0) {
      imp_free(*(undefined4 *)(*(int *)(pauVar1[4] + 8) + -4));
    }
    imp_free(pauVar1);
    pauVar1 = (undefined1 (*) [16])0x0;
  }
  return pauVar1;
}


// =========================================================================
// Function: thunk_zifwUOgVXcSpuVPKRzB
// Entry: 0x71e06df0 | Size: 1 bytes
// =========================================================================

void thunk_zifwUOgVXcSpuVPKRzB(int param_1)

{
  if (*(int *)(param_1 + 0x48) != 0) {
    imp_free(*(undefined4 *)(*(int *)(param_1 + 0x48) + -4));
  }
  imp_free(param_1);
  return;
}


// =========================================================================
// Function: thunk_MkmZKipKdNrbuPzcdPwtjzgA
// Entry: 0x71e06e00 | Size: 1 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x71b16f38) */

void thunk_MkmZKipKdNrbuPzcdPwtjzgA
               (int *param_1,undefined8 *param_2,undefined8 *param_3,int param_4,int param_5,
               uint param_6)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  int *piVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  int aiStack_50 [4];
  int iStack_40;
  int *piStack_3c;
  undefined8 *puStack_38;
  int iStack_34;
  undefined8 *puStack_30;
  int iStack_2c;
  
  uVar16 = param_1[1];
  iVar15 = 1;
  if (param_4 == 0) {
    iVar15 = uVar16 << 1;
  }
  iVar15 = -(iVar15 * 4 + 7U & 0xfffffff8);
  iVar21 = param_1[0x11];
  if (param_4 == 0) {
    param_4 = (int)&iStack_40 + iVar15;
  }
  puStack_30 = param_3;
  iStack_2c = param_4;
  uVar19 = 0;
  if (iVar21 != 1) {
    uVar19 = param_6;
  }
  piVar17 = param_1 + 2;
  uVar18 = (uint)((param_1[3] & 1U) != uVar19);
  iVar1 = uVar16 << 1;
  uVar5 = (uint)((param_1[3] & 1U) == uVar19);
  if (param_5 == 0) {
    puVar7 = (&puStack_30)[uVar5];
    puVar12 = (&puStack_30)[uVar18];
    if (iVar21 == 0) {
      *(int *)((int)aiStack_50 + iVar15 + 8) = param_1[0x14];
      *(int **)((int)aiStack_50 + iVar15 + 0xc) = piVar17;
      puVar12 = (undefined8 *)FUN_71b172cc(iVar1,param_2,puVar12,puVar7);
    }
    else {
      *(int *)((int)aiStack_50 + iVar15) = param_1[0x14];
      *(int **)((int)aiStack_50 + iVar15 + 4) = piVar17;
      *(undefined4 *)((int)aiStack_50 + iVar15 + 8) = 0xffffffff;
      puVar12 = (undefined8 *)thunk_ameeFmOgA(uVar16);
    }
    uVar5 = (uint)(puVar12 != param_3);
    if (uVar19 == 0) goto LAB_71b170bc;
    puVar7 = (&puStack_30)[uVar5];
    uVar5 = (uint)(puVar12 == param_3);
    puVar12 = (&puStack_30)[uVar5];
    iVar15 = *param_1;
    if (param_1[0x11] == 1) {
      if (0 < iVar15) {
        uVar19 = 1;
        if (1 < iVar15 * 2) {
          uVar19 = iVar15 << 1;
        }
        uVar18 = 0;
        if ((3 < iVar15 * 2) && (0xf < (uint)((int)puVar12 - (int)puVar7))) {
          uVar18 = uVar19 & 0x7ffffffc;
          puVar8 = puVar7;
          puVar13 = puVar12;
          uVar11 = uVar18;
          do {
            uVar22 = *puVar8;
            uVar23 = puVar8[1];
            puVar8 = puVar8 + 2;
            uVar11 = uVar11 - 4;
            *puVar13 = uVar22;
            puVar13[1] = uVar23;
            puVar13 = puVar13 + 2;
          } while (uVar11 != 0);
          if (uVar19 == uVar18) goto LAB_71b170bc;
        }
        iVar15 = uVar19 - uVar18;
        puVar3 = (undefined4 *)((int)puVar7 + uVar18 * 4);
        puVar6 = (undefined4 *)((int)puVar12 + uVar18 * 4);
        do {
          iVar15 = iVar15 + -1;
          *puVar6 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar6 = puVar6 + 1;
        } while (iVar15 != 0);
      }
      goto LAB_71b170bc;
    }
    iVar21 = iVar15 + -1;
    uVar14 = *(undefined4 *)((int)puVar7 + iVar21 * 4);
    if (2 < iVar15) {
      uVar19 = iVar15 - 2;
      if ((7 < uVar19) && (0xf < (uint)((int)puVar7 + (-4 - (int)puVar12)))) {
        uVar11 = uVar19 & 0xfffffffc;
        puVar13 = (undefined8 *)((int)puVar7 + iVar15 * 4 + -0x14);
        iVar21 = iVar21 - uVar11;
        uVar18 = uVar11;
        puVar8 = (undefined8 *)((int)puVar12 + iVar15 * 4);
        do {
          uVar22 = *puVar13;
          uVar23 = puVar13[1];
          puVar13 = puVar13 + -2;
          uVar18 = uVar18 - 4;
          puVar8[-2] = uVar22;
          puVar8[-1] = uVar23;
          puVar8 = puVar8 + -2;
        } while (uVar18 != 0);
        if (uVar19 == uVar11) goto LAB_71b172b8;
      }
      puVar3 = (undefined4 *)((int)puVar7 + iVar21 * 4);
      uVar19 = iVar21 + 1;
      puVar6 = (undefined4 *)((int)puVar12 + iVar21 * 4);
      do {
        puVar3 = puVar3 + -1;
        uVar19 = uVar19 - 1;
        *puVar6 = *puVar3;
        puVar6 = puVar6 + -1;
      } while (2 < uVar19);
    }
LAB_71b172b8:
    uVar4 = *(undefined4 *)puVar7;
    *(undefined4 *)((int)puVar12 + 4) = uVar14;
    *(undefined4 *)puVar12 = uVar4;
    goto LAB_71b170bc;
  }
  if ((&puStack_30)[uVar18] != param_2) {
    uVar5 = uVar18;
  }
  if (uVar19 == 0) {
    puVar12 = param_2;
    if (iVar21 != 0) goto LAB_71b16f98;
LAB_71b1708c:
    puVar12 = (&puStack_30)[uVar5];
    puVar7 = (&puStack_30)[uVar5 ^ 1];
    *(int *)((int)aiStack_50 + iVar15 + 8) = param_1[0x14];
    *(int **)((int)aiStack_50 + iVar15 + 0xc) = piVar17;
    puVar12 = (undefined8 *)FUN_71b17a3c(iVar1,param_2,puVar12,puVar7);
  }
  else {
    iVar10 = *param_1;
    puVar12 = (&puStack_30)[uVar5 ^ 1];
    if (iVar21 == 1) {
      if (0 < iVar10) {
        uVar19 = 1;
        if (1 < iVar10 * 2) {
          uVar19 = iVar10 << 1;
        }
        uVar18 = 0;
        if ((3 < iVar10 * 2) && (0xf < (uint)((int)puVar12 - (int)param_2))) {
          uVar18 = uVar19 & 0x7ffffffc;
          iVar21 = 0;
          uVar11 = uVar18;
          do {
            puVar7 = (undefined8 *)((int)param_2 + iVar21);
            uVar11 = uVar11 - 4;
            uVar22 = puVar7[1];
            puVar8 = (undefined8 *)((int)puVar12 + iVar21);
            iVar21 = iVar21 + 0x10;
            *puVar8 = *puVar7;
            puVar8[1] = uVar22;
          } while (uVar11 != 0);
          piStack_3c = piVar17;
          iStack_34 = iVar1;
          if (uVar19 == uVar18) goto LAB_71b16f98;
        }
        iVar10 = uVar19 - uVar18;
        iVar21 = uVar18 << 2;
        do {
          iVar10 = iVar10 + -1;
          *(undefined4 *)((int)puVar12 + iVar21) = *(undefined4 *)((int)param_2 + iVar21);
          iVar21 = iVar21 + 4;
          piStack_3c = piVar17;
          iStack_34 = iVar1;
        } while (iVar10 != 0);
      }
    }
    else {
      uVar14 = *(undefined4 *)((int)param_2 + 4);
      iVar20 = iVar10 + -1;
      if (2 < iVar10) {
        uVar19 = iVar10 - 2;
        uVar18 = 1;
        if ((7 < uVar19) && (0xf < (uint)((int)puVar12 + (-4 - (int)param_2)))) {
          uVar9 = uVar19 & 0xfffffffc;
          puVar7 = (undefined8 *)((int)puVar12 + 4);
          puVar8 = param_2 + 1;
          uVar18 = uVar9 | 1;
          uVar11 = uVar9;
          do {
            uVar22 = *puVar8;
            uVar23 = puVar8[1];
            puVar8 = puVar8 + 2;
            uVar11 = uVar11 - 4;
            *puVar7 = uVar22;
            puVar7[1] = uVar23;
            puVar7 = puVar7 + 2;
          } while (uVar11 != 0);
          iStack_40 = iVar20;
          piStack_3c = piVar17;
          if (uVar19 == uVar9) goto LAB_71b1706c;
        }
        puVar6 = (undefined4 *)((int)param_2 + uVar18 * 4);
        iVar10 = ~uVar18 + iVar10;
        puVar3 = (undefined4 *)((int)puVar12 + uVar18 * 4);
        do {
          puVar6 = puVar6 + 1;
          iVar10 = iVar10 + -1;
          *puVar3 = *puVar6;
          puVar3 = puVar3 + 1;
        } while (iVar10 != 0);
      }
LAB_71b1706c:
      *(undefined4 *)puVar12 = *(undefined4 *)param_2;
      *(undefined4 *)((int)puVar12 + iVar20 * 4) = uVar14;
      param_2 = puVar12;
      puStack_38 = param_3;
      iStack_34 = iVar1;
      if (iVar21 == 0) goto LAB_71b1708c;
    }
LAB_71b16f98:
    puVar8 = (&puStack_30)[uVar5 ^ 1];
    puVar7 = (&puStack_30)[uVar5];
    *(int *)((int)aiStack_50 + iVar15) = param_1[0x14];
    *(int **)((int)aiStack_50 + iVar15 + 4) = piVar17;
    *(undefined4 *)((int)aiStack_50 + iVar15 + 8) = 1;
    puVar12 = (undefined8 *)thunk_ameeFmOgA(uVar16,puVar12,puVar7,puVar8);
  }
  uVar5 = 0;
  if (puVar12 != param_3) {
    uVar5 = 1;
  }
LAB_71b170bc:
  puVar12 = (&puStack_30)[uVar5];
  if ((puVar12 != param_3) && (0 < (int)uVar16)) {
    uVar19 = 0;
    if ((3 < uVar16) && ((puVar12 + uVar16 <= param_3 || (param_3 + uVar16 <= puVar12)))) {
      uVar19 = uVar16 & 0x7ffffffc;
      uVar5 = uVar19;
      puVar7 = puVar12;
      puVar8 = param_3;
      do {
        uVar22 = *puVar7;
        uVar23 = puVar7[1];
        uVar5 = uVar5 - 4;
        uVar24 = puVar7[2];
        uVar25 = puVar7[3];
        puVar7 = puVar7 + 4;
        *puVar8 = uVar22;
        puVar8[1] = uVar23;
        puVar8[2] = uVar24;
        puVar8[3] = uVar25;
        puVar8 = puVar8 + 4;
      } while (uVar5 != 0);
      if (uVar16 == uVar19) {
        return;
      }
    }
    iVar15 = uVar16 - uVar19;
    uVar16 = uVar19 << 3 | 4;
    puVar6 = (undefined4 *)((int)param_3 + uVar16);
    puVar3 = (undefined4 *)((int)puVar12 + uVar16);
    do {
      puVar2 = puVar3 + -1;
      uVar14 = *puVar3;
      puVar3 = puVar3 + 2;
      puVar6[-1] = *puVar2;
      *puVar6 = uVar14;
      puVar6 = puVar6 + 2;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  return;
}


// =========================================================================
// Function: thunk_utN_uPAPkJQUV_VcLkBuLmSiEg
// Entry: 0x71e06e10 | Size: 1 bytes
// =========================================================================

void thunk_utN_uPAPkJQUV_VcLkBuLmSiEg
               (int param_1,float *param_2,float *param_3,float *param_4,float param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  iVar4 = *(int *)(param_1 + 4);
  iVar5 = iVar4;
  if (*(int *)(param_1 + 0x44) == 0) {
    fVar6 = *param_3;
    pfVar1 = param_3 + iVar4 * 2 + -1;
    iVar5 = iVar4 + -1;
    param_3 = param_3 + 1;
    *param_4 = *param_4 + *param_2 * fVar6 * param_5;
    pfVar2 = param_2 + iVar4 * 2 + -1;
    param_2 = param_2 + 1;
    pfVar3 = param_4 + iVar4 * 2 + -1;
    param_4 = param_4 + 1;
    *pfVar3 = *pfVar3 + *pfVar2 * *pfVar1 * param_5;
  }
  if (iVar5 < 1) {
    return;
  }
  param_4 = param_4 + 1;
  param_3 = param_3 + 1;
  param_2 = param_2 + 1;
  do {
    fVar6 = param_3[-1];
    iVar5 = iVar5 + -1;
    fVar7 = *param_3;
    param_3 = param_3 + 2;
    fVar8 = param_2[-1];
    fVar9 = *param_2;
    param_2 = param_2 + 2;
    param_4[-1] = param_4[-1] + (fVar8 * fVar6 - fVar9 * fVar7) * param_5;
    *param_4 = *param_4 + (fVar8 * fVar7 + fVar9 * fVar6) * param_5;
    param_4 = param_4 + 2;
  } while (iVar5 != 0);
  return;
}


// =========================================================================
// Function: thunk_BGNCk_MRcNNOSJm
// Entry: 0x71e06e20 | Size: 1 bytes
// =========================================================================

void thunk_BGNCk_MRcNNOSJm(void)

{
  thunk_MkmZKipKdNrbuPzcdPwtjzgA();
  return;
}


// =========================================================================
// Function: thunk_xvDtmfMfgCHvpgwIzavVsBV
// Entry: 0x71e06e30 | Size: 1 bytes
// =========================================================================

void thunk_xvDtmfMfgCHvpgwIzavVsBV(void)

{
  thunk_MkmZKipKdNrbuPzcdPwtjzgA();
  return;
}


// =========================================================================
// Function: thunk_GnNamFewVEyFgXwKbRkfVTuWoWZBGAAtGGXLicJduQJCgRwAU_fAYGwOHSt_vLkiURXEcKWraCmxWCuDmYtSKVOZzttsfISYIzXf_wfeMKsAZ
// Entry: 0x71e06e40 | Size: 1 bytes
// =========================================================================

void thunk_GnNamFewVEyFgXwKbRkfVTuWoWZBGAAtGGXLicJduQJCgRwAU_fAYGwOHSt_vLkiURXEcKWraCmxWCuDmYtSKVOZzttsfISYIzXf_wfeMKsAZ
               (undefined4 *param_1)

{
  *param_1 = 0;
  return;
}


// =========================================================================
// Function: thunk_aBoxrXMHagIKx_TTBtUoBzsVDlmosMagaPdZPrzjLCFjUCyspTAjGsrGFNtMBUEl
// Entry: 0x71e06e50 | Size: 1 bytes
// =========================================================================

void thunk_aBoxrXMHagIKx_TTBtUoBzsVDlmosMagaPdZPrzjLCFjUCyspTAjGsrGFNtMBUEl(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}


// =========================================================================
// Function: thunk_RQZDzhDqNjzHLAggbjbpHjMKDHEFldecnVnNklNOpumuIiRmZwLJgknrZAAqjfiMfpQkcfTwpoXguShqsdKWTUYUNBaVlLIvYhsbrQQezqAPe_ObMIqFQMlkOZuEABlt_
// Entry: 0x71e06e60 | Size: 1 bytes
// =========================================================================

void thunk_RQZDzhDqNjzHLAggbjbpHjMKDHEFldecnVnNklNOpumuIiRmZwLJgknrZAAqjfiMfpQkcfTwpoXguShqsdKWTUYUNBaVlLIvYhsbrQQezqAPe_ObMIqFQMlkOZuEABlt_
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
// Function: thunk_OFnZgBzMP_RXUqZuszQdYCWFiNSoWhurrvmcwuGNEegobzXugHMflXuodqEF_jZxktaIbimscMYjwAezgZZMLHCCewCRxFhEhUXsozbXLtighncDJONEXteEYMovq
// Entry: 0x71e06e70 | Size: 1 bytes
// =========================================================================

void thunk_OFnZgBzMP_RXUqZuszQdYCWFiNSoWhurrvmcwuGNEegobzXugHMflXuodqEF_jZxktaIbimscMYjwAezgZZMLHCCewCRxFhEhUXsozbXLtighncDJONEXteEYMovq
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
// Function: thunk_VGZOGehekJuOafHaOUXlTxLmenJNkxVmaoIjhktfxWHs_RQbdRA
// Entry: 0x71e06e80 | Size: 1 bytes
// =========================================================================

void thunk_VGZOGehekJuOafHaOUXlTxLmenJNkxVmaoIjhktfxWHs_RQbdRA(int param_1,uint param_2,int param_3)

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
// Function: thunk_UbejjReJOExICxMPgHunTxU_RisfxiNTFuooGAk_bWzaTGRvryHVf
// Entry: 0x71e06e90 | Size: 1 bytes
// =========================================================================

void thunk_UbejjReJOExICxMPgHunTxU_RisfxiNTFuooGAk_bWzaTGRvryHVf(int param_1)

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
// Function: thunk_RFGpNaOVrAvYaxNvFFlrwnLFAKfDTzMsnFcfENfwVIjFERIHnxcyMDHRbIEFhKkxPGYoIOP
// Entry: 0x71e06ea0 | Size: 1 bytes
// =========================================================================

void thunk_RFGpNaOVrAvYaxNvFFlrwnLFAKfDTzMsnFcfENfwVIjFERIHnxcyMDHRbIEFhKkxPGYoIOP
               (int param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_OFnZgBzMP_RXUqZuszQdYCWFiNSoWhurrvmcwuGNEegobzXugHMflXuodqEF_jZxktaIbimscMYjwAezgZZMLHCCewCRxFhEhUXsozbXLtighncDJONEXteEYMovq
            (param_2,*(undefined4 *)(param_1 + 0x1c),param_1 + 0x2c,param_3);
  return;
}


// =========================================================================
// Function: thunk_mjAzslgLnCGDCZgdemMGxIoKDUQqxRaOkatlticWiZYqyvBjaO_eaVUwJ_FIPlRKNPewYk
// Entry: 0x71e06eb0 | Size: 1 bytes
// =========================================================================

void thunk_mjAzslgLnCGDCZgdemMGxIoKDUQqxRaOkatlticWiZYqyvBjaO_eaVUwJ_FIPlRKNPewYk
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
// Function: thunk_Tc_QpmbrtznweQJSLiGHiwtDIm_UxTFS_IBea_hYZ
// Entry: 0x71e06ec0 | Size: 1 bytes
// =========================================================================

void thunk_Tc_QpmbrtznweQJSLiGHiwtDIm_UxTFS_IBea_hYZ(int param_1)

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
// Function: thunk_yyfjjkOnqeJbxTnNxxNMhWeNfMvVDtmFQaF_VQQVTYOxpVrWWCwPxkWdZfXKghXrbIICxQNVTz_kfhjkkvRejjKOxWUYIW_WTuQuuFNFycAmrC
// Entry: 0x71e06ed0 | Size: 1 bytes
// =========================================================================

void thunk_yyfjjkOnqeJbxTnNxxNMhWeNfMvVDtmFQaF_VQQVTYOxpVrWWCwPxkWdZfXKghXrbIICxQNVTz_kfhjkkvRejjKOxWUYIW_WTuQuuFNFycAmrC
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
// Function: thunk_tSlKIwIxxVMWx_nGDiTmkFWbuqEWcBjHgaqrQhXZjfkUxy_kNHnfiTDcDfgwtGDGAWYXoPAFhtTZJhfTnhudBNEGNLDuBsuEvXmfatkOW
// Entry: 0x71e06ee0 | Size: 1 bytes
// =========================================================================

void thunk_tSlKIwIxxVMWx_nGDiTmkFWbuqEWcBjHgaqrQhXZjfkUxy_kNHnfiTDcDfgwtGDGAWYXoPAFhtTZJhfTnhudBNEGNLDuBsuEvXmfatkOW
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
// Function: thunk_ZMimSsXuwEbYbnWeDjvdFoXXWAZVWtZA_eLlypwfrVrZwNCualNHfPKahGxBLbmjRhfEgqiyelyeuqddmsiWPxOVTIW_LtoLRPsMPjWfOlqFIuXvFjdYN
// Entry: 0x71e06ef0 | Size: 1 bytes
// =========================================================================

void thunk_ZMimSsXuwEbYbnWeDjvdFoXXWAZVWtZA_eLlypwfrVrZwNCualNHfPKahGxBLbmjRhfEgqiyelyeuqddmsiWPxOVTIW_LtoLRPsMPjWfOlqFIuXvFjdYN
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
// Function: thunk_fzjElWIrxjgIYCcQcqgTYUOCEtwCReqQoHvYLnkxvqtL
// Entry: 0x71e06f00 | Size: 1 bytes
// =========================================================================

/* WARNING: Restarted to delay deadcode elimination for space: register */

void thunk_fzjElWIrxjgIYCcQcqgTYUOCEtwCReqQoHvYLnkxvqtL(int param_1,float param_2)

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
// Function: thunk_srDjQURlrinkjiwFMoVzylAPXNyPdMhARSIebHB_BRQ_QcjZZHAVzB_L_MqVvlkruBcfiQWbgBpbrddiCskwLXKgmkXqwmmwKUMwFZtBnjtZmwHf
// Entry: 0x71e06f10 | Size: 1 bytes
// =========================================================================

void thunk_srDjQURlrinkjiwFMoVzylAPXNyPdMhARSIebHB_BRQ_QcjZZHAVzB_L_MqVvlkruBcfiQWbgBpbrddiCskwLXKgmkXqwmmwKUMwFZtBnjtZmwHf
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
// Function: thunk_XYqWzteDWM_RS_HyQs_wAVTZaAExqPmbwFSvIJiKGCPMPvazrrxO_SFWhTZlAswvQDmMjnoJhr_NCG
// Entry: 0x71e06f20 | Size: 1 bytes
// =========================================================================

undefined4 *
thunk_XYqWzteDWM_RS_HyQs_wAVTZaAExqPmbwFSvIJiKGCPMPvazrrxO_SFWhTZlAswvQDmMjnoJhr_NCG
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
// Function: thunk_ZlejAdYzkeqmaLokbIQZWtHLPSSrwTY_Y
// Entry: 0x71e06f30 | Size: 1 bytes
// =========================================================================

int thunk_ZlejAdYzkeqmaLokbIQZWtHLPSSrwTY_Y(int param_1)

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
// Function: thunk_BRvvOUkpCNBwQmZmjdnxCOJxyoSSQPulfDEuJzMFcIAjBBlXCmpZ_qO__CfhiKVLvZMNhnXnBQNfFMKYftKlgAQwKtbxEGSKc_OtDVJXXnevhQiKWSBnrgfywZDPnwakMRhpvuB
// Entry: 0x71e06f40 | Size: 1 bytes
// =========================================================================

void thunk_BRvvOUkpCNBwQmZmjdnxCOJxyoSSQPulfDEuJzMFcIAjBBlXCmpZ_qO__CfhiKVLvZMNhnXnBQNfFMKYftKlgAQwKtbxEGSKc_OtDVJXXnevhQiKWSBnrgfywZDPnwakMRhpvuB
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
// Function: thunk_YvDyDIyfbgwIdHfftxzZSBZKYiCMUnbR
// Entry: 0x71e06f50 | Size: 1 bytes
// =========================================================================

undefined4 thunk_YvDyDIyfbgwIdHfftxzZSBZKYiCMUnbR(void)

{
  return 0;
}


// =========================================================================
// Function: thunk_gNLIrfKvdfPG_ohpeALeMZcQlpSjY
// Entry: 0x71e06f60 | Size: 1 bytes
// =========================================================================

float thunk_gNLIrfKvdfPG_ohpeALeMZcQlpSjY(undefined4 param_1)

{
  uint in_fpscr;
  float fVar1;
  
  fVar1 = (float)VectorUnsignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
  return fVar1 * 1.1920929e-07 + -126.942696;
}


// =========================================================================
// Function: thunk_EtrbFSCNhkpTZrrCWlvOG
// Entry: 0x71e06f70 | Size: 1 bytes
// =========================================================================

float thunk_EtrbFSCNhkpTZrrCWlvOG(float param_1)

{
  return param_1 * 3.0103;
}


// =========================================================================
// Function: thunk_lUTnRvERNwYRiVOpqDGQIMVhOSQZzA_VpqbXBJzYvgWltTAWojwcMfh_EXJahLhMgIYBDEVqqwCYTRoHHd_dGipW
// Entry: 0x71e06f80 | Size: 1 bytes
// =========================================================================

void thunk_lUTnRvERNwYRiVOpqDGQIMVhOSQZzA_VpqbXBJzYvgWltTAWojwcMfh_EXJahLhMgIYBDEVqqwCYTRoHHd_dGipW
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
// Function: thunk_SSRRcKPppUacKuKPVwFkJsYmuNaQZqetvW_xM_ggycKzBgGogFmTFyHWFirVTsYxYorEVcUnjquWpAatlHQshS
// Entry: 0x71e06f90 | Size: 1 bytes
// =========================================================================

void thunk_SSRRcKPppUacKuKPVwFkJsYmuNaQZqetvW_xM_ggycKzBgGogFmTFyHWFirVTsYxYorEVcUnjquWpAatlHQshS
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
// Function: thunk_WcWZMFyJwpTTVYYbNvFKVQ
// Entry: 0x71e06fa0 | Size: 1 bytes
// =========================================================================

void thunk_WcWZMFyJwpTTVYYbNvFKVQ(undefined4 param_1)

{
  thunk_WhzKCZEiMHjbbgEoRijshYt(param_1,0);
  return;
}


// =========================================================================
// Function: thunk_ocXmSCCBAsdONcQeoHUndKmtIoFmmPBgWyDkhBUKEf_iegvYbBFsQPCDNfaViXYYkwekOfpR
// Entry: 0x71e06fb0 | Size: 1 bytes
// =========================================================================

void thunk_ocXmSCCBAsdONcQeoHUndKmtIoFmmPBgWyDkhBUKEf_iegvYbBFsQPCDNfaViXYYkwekOfpR
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
// Function: thunk_qHXCwMtSarPYdPTUroNCurFvfMUXAZdDcbUxxImUTKNDdYzQCwbToNYyggqgYnEi
// Entry: 0x71e06fc0 | Size: 1 bytes
// =========================================================================

void thunk_qHXCwMtSarPYdPTUroNCurFvfMUXAZdDcbUxxImUTKNDdYzQCwbToNYyggqgYnEi
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
// Function: thunk_GpetNtZWinxVRjYEWfQTKxYBfUubWKwAiBvCpKzsmRoUtzIeFhGJmDyKALmQTcG_
// Entry: 0x71e06fd0 | Size: 1 bytes
// =========================================================================

uint * thunk_GpetNtZWinxVRjYEWfQTKxYBfUubWKwAiBvCpKzsmRoUtzIeFhGJmDyKALmQTcG_
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
// Function: thunk_BWKYEdnezvgaHAYszXULDIVxxGSAgWyUQpELiCRXEhcfVeoKmNIFSkuMcHhVBAUvQJRmaaRwkLZxo
// Entry: 0x71e06fe0 | Size: 1 bytes
// =========================================================================

undefined1 *
thunk_BWKYEdnezvgaHAYszXULDIVxxGSAgWyUQpELiCRXEhcfVeoKmNIFSkuMcHhVBAUvQJRmaaRwkLZxo
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
// Function: thunk_wIhreSuIvtVwSwjHuUuTxDmHFwwpPUogTX_UXLKFRzWKCdCNdcWQNIgxetEqzGojlGXvk
// Entry: 0x71e06ff0 | Size: 1 bytes
// =========================================================================

void thunk_wIhreSuIvtVwSwjHuUuTxDmHFwwpPUogTX_UXLKFRzWKCdCNdcWQNIgxetEqzGojlGXvk
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
// Function: thunk_rkiVhZdkxnJEgXkNjHxfK_GQfKSHaSrTrvgMsbVIMrwK__sYHiqAVBqfHlfdPXfJXYYyaHnDqbaFpWfuwqOZJEbnurzREzgjaMEVFmzOhlZNlu_atgDVnIoURKtXkiNtfWaGfFn_VlebxRVlYTG_WwXneak_XFakrBSQtBOoDvXzgPAxKmzQYHLkTVyUMJFzwkQLmi_FUQhOLeepJDyJIsaqaZdMIMxlvcUcssHvba_uuEqumc_qkzKwzJhEjemVOAjzVn
// Entry: 0x71e07000 | Size: 1 bytes
// =========================================================================

void thunk_rkiVhZdkxnJEgXkNjHxfK_GQfKSHaSrTrvgMsbVIMrwK__sYHiqAVBqfHlfdPXfJXYYyaHnDqbaFpWfuwqOZJEbnurzREzgjaMEVFmzOhlZNlu_atgDVnIoURKtXkiNtfWaGfFn_VlebxRVlYTG_WwXneak_XFakrBSQtBOoDvXzgPAxKmzQYHLkTVyUMJFzwkQLmi_FUQhOLeepJDyJIsaqaZdMIMxlvcUcssHvba_uuEqumc_qkzKwzJhEjemVOAjzVn
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
// Function: thunk_FNhixuUwQKkgSvHGMGKEFAdcHBtAoeJtlCXkPNYcsAMeEjSqpfc
// Entry: 0x71e07010 | Size: 1 bytes
// =========================================================================

undefined4 *
thunk_FNhixuUwQKkgSvHGMGKEFAdcHBtAoeJtlCXkPNYcsAMeEjSqpfc
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
// Function: thunk_DMOWuzjKzHTbWw_humWINin
// Entry: 0x71e07020 | Size: 1 bytes
// =========================================================================

int * thunk_DMOWuzjKzHTbWw_humWINin(int *param_1)

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
// Function: thunk_hHzBnBTywhUkouDJQNHlHyGdaesTsTQViBbgJCLvfXgIeJTDULwRapDGbbOfsGyXUzaqbPnbYumrpv
// Entry: 0x71e07030 | Size: 1 bytes
// =========================================================================

void thunk_hHzBnBTywhUkouDJQNHlHyGdaesTsTQViBbgJCLvfXgIeJTDULwRapDGbbOfsGyXUzaqbPnbYumrpv
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
// Function: thunk_VmwYTUwpqZjfWmrSJnQ__mJjhdrHXNzHmx_UYdMWBprLKpbVryPMel
// Entry: 0x71e07040 | Size: 1 bytes
// =========================================================================

uint thunk_VmwYTUwpqZjfWmrSJnQ__mJjhdrHXNzHmx_UYdMWBprLKpbVryPMel(uint *param_1,int param_2)

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
// Function: thunk_AfJnnNxayrnorjUpWhFXHNAjUxaHLlKQewSKBFekDAhJZvSiButnBKNkXZRrErPwFRsTzFPuQLURpQLrl
// Entry: 0x71e07050 | Size: 1 bytes
// =========================================================================

int * thunk_AfJnnNxayrnorjUpWhFXHNAjUxaHLlKQewSKBFekDAhJZvSiButnBKNkXZRrErPwFRsTzFPuQLURpQLrl
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
// Function: thunk_KRMIYixtikqFOG_PaiqhBvhaWSUiTCGVEjbyHucr
// Entry: 0x71e07060 | Size: 1 bytes
// =========================================================================

void thunk_KRMIYixtikqFOG_PaiqhBvhaWSUiTCGVEjbyHucr(undefined8 *param_1)

{
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  *param_1 = 0x7fffffff00000000;
  param_1[1] = 0x7fffffff00000000;
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}


// =========================================================================
// Function: thunk_FYJuOgpVamiMNyJq_vOSQWMqasArkDtkZYVOVZTjmRNJOoDRYibf
// Entry: 0x71e07070 | Size: 1 bytes
// =========================================================================

void thunk_FYJuOgpVamiMNyJq_vOSQWMqasArkDtkZYVOVZTjmRNJOoDRYibf(int param_1)

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
// Function: thunk_mrfazkv_lNWwNbbQ_YRUJFvPfcRxQKEhUOyUPEmZE_uUdnZLkGlRR
// Entry: 0x71e07080 | Size: 1 bytes
// =========================================================================

void thunk_mrfazkv_lNWwNbbQ_YRUJFvPfcRxQKEhUOyUPEmZE_uUdnZLkGlRR(int *param_1)

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
// Function: thunk_VUmjwrPsUILWbdSLiVFUMCaCxfidTGBfZpgWaTQZrZW
// Entry: 0x71e07090 | Size: 1 bytes
// =========================================================================

void thunk_VUmjwrPsUILWbdSLiVFUMCaCxfidTGBfZpgWaTQZrZW(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0x7fffffff;
  return;
}


// =========================================================================
// Function: thunk_TZr_hsFYHyiAotTqIKhuIyvatxLAU
// Entry: 0x71e070a0 | Size: 1 bytes
// =========================================================================

undefined4 *
thunk_TZr_hsFYHyiAotTqIKhuIyvatxLAU(undefined4 *param_1,undefined4 param_2,int param_3,int param_4)

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
// Function: thunk_NqxzdvAGQNPXiaqFoaVoDKuWWya
// Entry: 0x71e070b0 | Size: 1 bytes
// =========================================================================

int thunk_NqxzdvAGQNPXiaqFoaVoDKuWWya(int param_1)

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
// Function: thunk_XEJujjfjRvljdhPkflmLTPbiepDJNbyejbwrocDPNFADtmbKkBRwfRqVvvAs
// Entry: 0x71e070c0 | Size: 1 bytes
// =========================================================================

void thunk_XEJujjfjRvljdhPkflmLTPbiepDJNbyejbwrocDPNFADtmbKkBRwfRqVvvAs(int *param_1,int param_2)

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
// Function: thunk_OiEPXjYdhoZEYR_HkOfDQmmpBoYWAVxihRt
// Entry: 0x71e070d0 | Size: 1 bytes
// =========================================================================

undefined4 *
thunk_OiEPXjYdhoZEYR_HkOfDQmmpBoYWAVxihRt
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
// Function: thunk_dexshRSROpBPVAL_JkdEFYpKHeaTfWqG
// Entry: 0x71e070e0 | Size: 1 bytes
// =========================================================================

int thunk_dexshRSROpBPVAL_JkdEFYpKHeaTfWqG(int param_1)

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
// Function: thunk_OhEKCjAeVnlHfuAUZJcZnHHDRLG_GidGZRvfWysdHcsQ_nHCT
// Entry: 0x71e070f0 | Size: 1 bytes
// =========================================================================

void thunk_OhEKCjAeVnlHfuAUZJcZnHHDRLG_GidGZRvfWysdHcsQ_nHCT(uint *param_1,uint param_2)

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
// Function: thunk_hwBGvibUzGFaTLaRRfwmGuceaTWLjMcXpOXgbgCzSivFDjAtKHSiMFDTPNZaRoS_LKuEQbZosjmERLpiJBJqFVQRJelZiLcMxINFjIBjpmdDwFmhejaupdHYGnqgzBYkHytHlxHkDgZaZQJgpp_jKAWD
// Entry: 0x71e07100 | Size: 1 bytes
// =========================================================================

void thunk_hwBGvibUzGFaTLaRRfwmGuceaTWLjMcXpOXgbgCzSivFDjAtKHSiMFDTPNZaRoS_LKuEQbZosjmERLpiJBJqFVQRJelZiLcMxINFjIBjpmdDwFmhejaupdHYGnqgzBYkHytHlxHkDgZaZQJgpp_jKAWD
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
// Function: thunk_lGluONEecqgKhtEOWAxbXbQQXMSl
// Entry: 0x71e07110 | Size: 1 bytes
// =========================================================================

undefined4 *
thunk_lGluONEecqgKhtEOWAxbXbQQXMSl(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

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
// Function: thunk_pIfiSaBV_mNZoZDNOdRGRymboDI
// Entry: 0x71e07120 | Size: 1 bytes
// =========================================================================

int thunk_pIfiSaBV_mNZoZDNOdRGRymboDI(int param_1)

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
// Function: thunk_b_RvHDoSQUXTgLheNALosRwKIUkPhquFOVYRRvPrUnnFFloeoLShNgXxvdKxYOCsH
// Entry: 0x71e07130 | Size: 1 bytes
// =========================================================================

undefined4
thunk_b_RvHDoSQUXTgLheNALosRwKIUkPhquFOVYRRvPrUnnFFloeoLShNgXxvdKxYOCsH
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
// Function: thunk_HTKPtVOvHoKtIIYEpeTAqWArvDTMihLL_zStGzIbPZsTFbDFlCQNIRKVBhEqFAvwbHRyU_abZbLIS_CWOhwtGvfweHyc_e_EmzzD_DJxDocThfxUMeOHSNOtuilIGKsIbLqplMzziDyTjNuzcaAkZzvHKkMyS_mIZWKrduNYgynFIkDdudLjVFKvaHuGSanLZoFZfBCEYOPrMMJsdNTUcEBsW
// Entry: 0x71e07140 | Size: 1 bytes
// =========================================================================

undefined4 *
thunk_HTKPtVOvHoKtIIYEpeTAqWArvDTMihLL_zStGzIbPZsTFbDFlCQNIRKVBhEqFAvwbHRyU_abZbLIS_CWOhwtGvfweHyc_e_EmzzD_DJxDocThfxUMeOHSNOtuilIGKsIbLqplMzziDyTjNuzcaAkZzvHKkMyS_mIZWKrduNYgynFIkDdudLjVFKvaHuGSanLZoFZfBCEYOPrMMJsdNTUcEBsW
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
// Function: thunk_khtniTLLpCBdThwNHSlgDgWaRBagFMuUEorAnyIwuIOgXMOUmU
// Entry: 0x71e07150 | Size: 1 bytes
// =========================================================================

void thunk_khtniTLLpCBdThwNHSlgDgWaRBagFMuUEorAnyIwuIOgXMOUmU(int *param_1,int param_2)

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
// Function: thunk_EtUybhxFhLSEtkJJKuXzCsbmqLXxxyNHQZnIeQxpWugRLOVgI
// Entry: 0x71e07160 | Size: 1 bytes
// =========================================================================

void thunk_EtUybhxFhLSEtkJJKuXzCsbmqLXxxyNHQZnIeQxpWugRLOVgI(int param_1,int param_2)

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
// Function: thunk_NyYndffoEBTZLYTouWBmRSpACTLAxLSqActNbjL
// Entry: 0x71e07170 | Size: 1 bytes
// =========================================================================

void thunk_NyYndffoEBTZLYTouWBmRSpACTLAxLSqActNbjL(int *param_1,int param_2)

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
// Function: thunk_VvtEvjaTHwqgIkStrray_PUeJGaQWhgo__
// Entry: 0x71e07180 | Size: 1 bytes
// =========================================================================

void thunk_VvtEvjaTHwqgIkStrray_PUeJGaQWhgo__(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  param_1[4] = 0;
  return;
}


// =========================================================================
// Function: thunk_DbQfvARxvxtCexoIQKZdLZCfIH_ojsEGoU
// Entry: 0x71e07190 | Size: 1 bytes
// =========================================================================

void thunk_DbQfvARxvxtCexoIQKZdLZCfIH_ojsEGoU(void)

{
  return;
}


// =========================================================================
// Function: thunk_XlcgYDgnUMHWRwfn_ZagIzkRHLAZgmZzuXsQNdYkJXwPJLxKipOfsTcOUf
// Entry: 0x71e071a0 | Size: 1 bytes
// =========================================================================

void thunk_XlcgYDgnUMHWRwfn_ZagIzkRHLAZgmZzuXsQNdYkJXwPJLxKipOfsTcOUf(int param_1)

{
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}


// =========================================================================
// Function: thunk_qRmPDgFlmhsysIByjBzdvYeBRAVMAQQXIKCdItjpfVgsnnZMOLTxWvVIAdDWVeVXRcLFzWsEHwowExBkpKuRLDzeEAugjXkNMhNkQQtRMggjTNnhJxLZBg
// Entry: 0x71e071b0 | Size: 1 bytes
// =========================================================================

void thunk_qRmPDgFlmhsysIByjBzdvYeBRAVMAQQXIKCdItjpfVgsnnZMOLTxWvVIAdDWVeVXRcLFzWsEHwowExBkpKuRLDzeEAugjXkNMhNkQQtRMggjTNnhJxLZBg
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
// Function: thunk_JyDUheVSBAFhb_ShShlsDKmKSGxNHjRUartnBuzekpuxPGgYdrsaJKHHOfypQe_JWMbeFFXLXnAHjjYnXkXucRHjepokYG
// Entry: 0x71e071c0 | Size: 1 bytes
// =========================================================================

void thunk_JyDUheVSBAFhb_ShShlsDKmKSGxNHjRUartnBuzekpuxPGgYdrsaJKHHOfypQe_JWMbeFFXLXnAHjjYnXkXucRHjepokYG
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
// Function: thunk_VKZtoVQwanQocjkXiAAuEberMLFShrspAAxKaneDTDMkjXVvfeUSSrcWAWVmNkoyuXizmsuJRzoQKzUpGplexlNghmvzTtwPlttcPbtHAgpHPvnuHnPZxuocNBi_j
// Entry: 0x71e071d0 | Size: 1 bytes
// =========================================================================

/* WARNING: Restarted to delay deadcode elimination for space: register */

void thunk_VKZtoVQwanQocjkXiAAuEberMLFShrspAAxKaneDTDMkjXVvfeUSSrcWAWVmNkoyuXizmsuJRzoQKzUpGplexlNghmvzTtwPlttcPbtHAgpHPvnuHnPZxuocNBi_j
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
// Function: thunk_WTBkWuBIfOBToSgXQqDecULNfNQGUylyJqsFWuAudxER_jyIlxexrlbJkzQEizjPTTEapUPiDvdpHTZGbjMjjqj
// Entry: 0x71e071e0 | Size: 1 bytes
// =========================================================================

undefined4 *
thunk_WTBkWuBIfOBToSgXQqDecULNfNQGUylyJqsFWuAudxER_jyIlxexrlbJkzQEizjPTTEapUPiDvdpHTZGbjMjjqj
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
// Function: thunk_vwIiHDAjO_XvdMpmTpfgcDmAQdjFNZ_lWKAxv
// Entry: 0x71e071f0 | Size: 1 bytes
// =========================================================================

int thunk_vwIiHDAjO_XvdMpmTpfgcDmAQdjFNZ_lWKAxv(int param_1)

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
// Function: thunk_eXBMJrFIJxumaqqHsweDKAHwolzOBUX_PUP
// Entry: 0x71e07200 | Size: 1 bytes
// =========================================================================

void thunk_eXBMJrFIJxumaqqHsweDKAHwolzOBUX_PUP(int param_1,int param_2)

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
// Function: thunk_NhMImtdmoAvkhOhqUKLqRUPqTBryoGKzBaKmUthrGKTzIUoxWUpEpNRwQfYmpfgewpXONIRLxObVxAJcAVGvW
// Entry: 0x71e07210 | Size: 1 bytes
// =========================================================================

int thunk_NhMImtdmoAvkhOhqUKLqRUPqTBryoGKzBaKmUthrGKTzIUoxWUpEpNRwQfYmpfgewpXONIRLxObVxAJcAVGvW
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
// Function: thunk_chvRUtuIGZPBZQaJVl_qWvznbKDfQrtcoxKVjtJyDoWgg_Sn_itrHCUhpjLkCkCAoIrzavOhMV
// Entry: 0x71e07220 | Size: 1 bytes
// =========================================================================

void thunk_chvRUtuIGZPBZQaJVl_qWvznbKDfQrtcoxKVjtJyDoWgg_Sn_itrHCUhpjLkCkCAoIrzavOhMV
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
// Function: thunk_moJLdLfsjGEWNYxoFEwBWOYy
// Entry: 0x71e07230 | Size: 1 bytes
// =========================================================================

int * thunk_moJLdLfsjGEWNYxoFEwBWOYy(int *param_1,int param_2)

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
// Function: thunk_BTXgMDNvQKjzvAemknp_azITBVsaBEvlJOBsdTqxHoAIVxXAEekH_AmWjaxcblskjEdZsiJCAgakHdAGhrAexUYaqjVNMeDXoJvzpLDJx
// Entry: 0x71e07240 | Size: 1 bytes
// =========================================================================

undefined4 *
thunk_BTXgMDNvQKjzvAemknp_azITBVsaBEvlJOBsdTqxHoAIVxXAEekH_AmWjaxcblskjEdZsiJCAgakHdAGhrAexUYaqjVNMeDXoJvzpLDJx
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
// Function: thunk_okkW_SyMKxZimqhEFbLoMmJwHHWNkWG_QKkdWeu
// Entry: 0x71e07250 | Size: 1 bytes
// =========================================================================

uint * thunk_okkW_SyMKxZimqhEFbLoMmJwHHWNkWG_QKkdWeu(uint *param_1,uint param_2)

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
// Function: thunk_izWkqxnrAjptSfTtgJZyBnJUfaDsiGyPdMkrxya
// Entry: 0x71e07260 | Size: 1 bytes
// =========================================================================

int thunk_izWkqxnrAjptSfTtgJZyBnJUfaDsiGyPdMkrxya(int param_1)

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
// Function: thunk_gSKYbTMCgxfkBXBnnw_TVwrfJUZMPonwyWiOoEGmNUiwKLqEuSSPbtVzdpbBRkfNuEXDblNVGSiCkoYOU_PM
// Entry: 0x71e07270 | Size: 1 bytes
// =========================================================================

void thunk_gSKYbTMCgxfkBXBnnw_TVwrfJUZMPonwyWiOoEGmNUiwKLqEuSSPbtVzdpbBRkfNuEXDblNVGSiCkoYOU_PM
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
// Function: thunk_tXQjrxEyDtpJimvQjTYmRjDHtDWKAwOAxV_rjEgrmhPGMoUpZNjawHJCJvHKGNxHXvxiSSAWnyXQIGOmHFRaMyuDygwaLWrRx
// Entry: 0x71e07280 | Size: 1 bytes
// =========================================================================

void thunk_tXQjrxEyDtpJimvQjTYmRjDHtDWKAwOAxV_rjEgrmhPGMoUpZNjawHJCJvHKGNxHXvxiSSAWnyXQIGOmHFRaMyuDygwaLWrRx
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
// Function: thunk_gRwZRnKZxLskZykjl_TlnLRByrYoZV
// Entry: 0x71e07290 | Size: 1 bytes
// =========================================================================

undefined1 * thunk_gRwZRnKZxLskZykjl_TlnLRByrYoZV(undefined1 *param_1,undefined1 param_2)

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
// Function: thunk_rkehvQvmzdQMygyCnSmrgMoqTaJxUr
// Entry: 0x71e072a0 | Size: 1 bytes
// =========================================================================

int thunk_rkehvQvmzdQMygyCnSmrgMoqTaJxUr(int param_1)

{
  thunk_QrkklSxNXDxRIpUuiCELNGbXrpiIMKWRbMwkz(param_1 + 0x10);
  return param_1;
}


// =========================================================================
// Function: thunk_TXWDPeGRgRHQNAwpnMKehohlaD_CnrYaoplqIuZWZIXZpflnPathE
// Entry: 0x71e072b0 | Size: 1 bytes
// =========================================================================

void thunk_TXWDPeGRgRHQNAwpnMKehohlaD_CnrYaoplqIuZWZIXZpflnPathE(int param_1)

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
// Function: thunk_ZaWy_gTvQjUTGrEfHDAjDDMaVufvjFgvqEawzxGncTjVAhk_OsKFOpKEgUqlasGxD_jFCPJj_dsBfLNXpaNVVKQh
// Entry: 0x71e072c0 | Size: 1 bytes
// =========================================================================

bool thunk_ZaWy_gTvQjUTGrEfHDAjDDMaVufvjFgvqEawzxGncTjVAhk_OsKFOpKEgUqlasGxD_jFCPJj_dsBfLNXpaNVVKQh
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
// Function: thunk_hewZPWZEZafdpEJClKdCQVlIaOleRfxCiAyLCEupnMIGjFtaZsKaRCdKZUQf_pabSSh
// Entry: 0x71e072d0 | Size: 1 bytes
// =========================================================================

void thunk_hewZPWZEZafdpEJClKdCQVlIaOleRfxCiAyLCEupnMIGjFtaZsKaRCdKZUQf_pabSSh
               (int param_1,int param_2)

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
// Function: thunk_IaZMqHf_gaItQunDKEesEVddVwwtCFcRRdEpgvRxwYcnxPiknLvAWibKnpFmXYnOWJqEcngnKFfLwaAERNZbINIYwuMmVapSjCiCpHGyazMAehcTloUnW_huNmgzqKJNnFJbPiikVuUCvxSuynyARJexHUhJuWvo_sGlKQoeuqqWsYMeukKfqehTagoa_pbSWsQqWHIPnlVGfPZGGeO_UeOv
// Entry: 0x71e072e0 | Size: 1 bytes
// =========================================================================

undefined4 *
thunk_IaZMqHf_gaItQunDKEesEVddVwwtCFcRRdEpgvRxwYcnxPiknLvAWibKnpFmXYnOWJqEcngnKFfLwaAERNZbINIYwuMmVapSjCiCpHGyazMAehcTloUnW_huNmgzqKJNnFJbPiikVuUCvxSuynyARJexHUhJuWvo_sGlKQoeuqqWsYMeukKfqehTagoa_pbSWsQqWHIPnlVGfPZGGeO_UeOv
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
// Function: thunk_QIWkYKuVQSW_mofJjEZPNNlieopawfStNFvrHiLWcoGW
// Entry: 0x71e072f0 | Size: 1 bytes
// =========================================================================

int thunk_QIWkYKuVQSW_mofJjEZPNNlieopawfStNFvrHiLWcoGW(int param_1)

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
// Function: thunk_mWpzsketRyytqCnUgulPomJccjVtHuiIkxmhWnQI
// Entry: 0x71e07300 | Size: 1 bytes
// =========================================================================

void thunk_mWpzsketRyytqCnUgulPomJccjVtHuiIkxmhWnQI(int param_1)

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
// Function: thunk_PaZuWhVugKbNGmPVRoCB_YLgydZarEqyfELcXgTJqrv
// Entry: 0x71e07310 | Size: 1 bytes
// =========================================================================

int thunk_PaZuWhVugKbNGmPVRoCB_YLgydZarEqyfELcXgTJqrv(int param_1)

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
// Function: thunk_mLVoQBKxtuYgyyfEotdHdAiWVZlska
// Entry: 0x71e07320 | Size: 1 bytes
// =========================================================================

undefined4 * thunk_mLVoQBKxtuYgyyfEotdHdAiWVZlska(undefined4 *param_1)

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
// Function: thunk_yQcZDmMfugOGhLdWsDTCApLduTzsjN_ZoNFrDpeiUlerCi
// Entry: 0x71e07330 | Size: 1 bytes
// =========================================================================

void thunk_yQcZDmMfugOGhLdWsDTCApLduTzsjN_ZoNFrDpeiUlerCi(int param_1)

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
// Function: thunk_GXjAtSCeHcFOfpgFujSmeCDVlxyIYvKc_eLJcj_WyGygzXtFJEMBQYMfjSmTf
// Entry: 0x71e07340 | Size: 1 bytes
// =========================================================================

void thunk_GXjAtSCeHcFOfpgFujSmeCDVlxyIYvKc_eLJcj_WyGygzXtFJEMBQYMfjSmTf(void)

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
// Function: thunk__vvagmSgzWHPioCXTxjUUyDgg_LCYCoraZx_mycqltwHKAUNVmyXEFAlqDMfCqtXyQMkrrP_PZgdomtgWZEBevW
// Entry: 0x71e07350 | Size: 1 bytes
// =========================================================================

undefined4 *
thunk__vvagmSgzWHPioCXTxjUUyDgg_LCYCoraZx_mycqltwHKAUNVmyXEFAlqDMfCqtXyQMkrrP_PZgdomtgWZEBevW
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
// Function: thunk_TAMtH_nzgR_MmzVaSbDSwnzPkJBBVOKNLGKOofwGEZ
// Entry: 0x71e07360 | Size: 1 bytes
// =========================================================================

void thunk_TAMtH_nzgR_MmzVaSbDSwnzPkJBBVOKNLGKOofwGEZ(int param_1)

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
// Function: thunk_rXasitKEhHEWU_dZkBVIWZxYhZjMW_LnJnFssfBlNZxxfYLWEEtReeVTxBHmiuhzKtquYxPsLTuZXfgiqpZebA_DSEeRo
// Entry: 0x71e07370 | Size: 1 bytes
// =========================================================================

void thunk_rXasitKEhHEWU_dZkBVIWZxYhZjMW_LnJnFssfBlNZxxfYLWEEtReeVTxBHmiuhzKtquYxPsLTuZXfgiqpZebA_DSEeRo
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
// Function: thunk_JArGoHvqxafeGOUsXeXeWXEwEkmfzFOVjCgtXCzJ_wJWscDgtHGokxPdOvRJWkZMaZPzZFZqTqdnJRuQNiRgib
// Entry: 0x71e07380 | Size: 1 bytes
// =========================================================================

undefined4 *
thunk_JArGoHvqxafeGOUsXeXeWXEwEkmfzFOVjCgtXCzJ_wJWscDgtHGokxPdOvRJWkZMaZPzZFZqTqdnJRuQNiRgib
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
// Function: thunk_hiFLq_nwdphzXbAciRKtBoiPbEBaeHUJPPRAfb
// Entry: 0x71e07390 | Size: 1 bytes
// =========================================================================

int thunk_hiFLq_nwdphzXbAciRKtBoiPbEBaeHUJPPRAfb(int param_1)

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
// Function: thunk_KBgMzGtnUlKQQnGttdHLgonjPDuhrjssZLsrIkUhmLLskDiuvKTvkPKlps
// Entry: 0x71e073a0 | Size: 1 bytes
// =========================================================================

void thunk_KBgMzGtnUlKQQnGttdHLgonjPDuhrjssZLsrIkUhmLLskDiuvKTvkPKlps
               (undefined1 *param_1,undefined1 param_2,undefined4 param_3,undefined1 param_4)

{
  param_1[8] = param_4;
  *(undefined4 *)(param_1 + 4) = param_3;
  *param_1 = param_2;
  return;
}


// =========================================================================
// Function: thunk_nfrswZIrzhtwfdzBbsEzwckLRRidKawaepUwMpCPAYBtIkvlyhNevvX_GezBJQ
// Entry: 0x71e073b0 | Size: 1 bytes
// =========================================================================

undefined4 *
thunk_nfrswZIrzhtwfdzBbsEzwckLRRidKawaepUwMpCPAYBtIkvlyhNevvX_GezBJQ
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
// Function: thunk_UmZzS_cbjoLnmUermiSHDYQumaTywaAPz_FsluCiWPC
// Entry: 0x71e073c0 | Size: 1 bytes
// =========================================================================

void thunk_UmZzS_cbjoLnmUermiSHDYQumaTywaAPz_FsluCiWPC(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// =========================================================================
// Function: thunk_XXKwckpYJNcXhPZqeFyEiSiWwQcnlrZyQpdzaXJHLNjVH
// Entry: 0x71e073d0 | Size: 1 bytes
// =========================================================================

void thunk_XXKwckpYJNcXhPZqeFyEiSiWwQcnlrZyQpdzaXJHLNjVH
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}


// =========================================================================
// Function: thunk_OdzsOWLKzUisdGvBqRcWHYTHZDZKuzJvjQJuvBOkFhbvQRUpRhicWIxJuTVUSI_thDXprNPNFXdZa_uNLvE
// Entry: 0x71e073e0 | Size: 1 bytes
// =========================================================================

void thunk_OdzsOWLKzUisdGvBqRcWHYTHZDZKuzJvjQJuvBOkFhbvQRUpRhicWIxJuTVUSI_thDXprNPNFXdZa_uNLvE
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
// Function: thunk_tfIOLOenmdZMmILmF_pGzqaiqSNuNRpEnr
// Entry: 0x71e073f0 | Size: 1 bytes
// =========================================================================

undefined4 * thunk_tfIOLOenmdZMmILmF_pGzqaiqSNuNRpEnr(undefined4 *param_1)

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
// Function: thunk_lAUIyclpuvIpITZbjqxfaxVyCRYXfujFH
// Entry: 0x71e07400 | Size: 1 bytes
// =========================================================================

void thunk_lAUIyclpuvIpITZbjqxfaxVyCRYXfujFH(int param_1,int param_2)

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
// Function: thunk_uTqbB_xGfxQpLeSLjgLLtvJPAxYAjyBxzcOogSCSUqYselHblzKvogqOUDieATgIpYVcOWJRhR_zcqcoytjs_BppYilGxEgHCWiQseBsgZfesNJScxNmZanDVBjgfwtMqLZdEFoMHVvKNvMuINaheoiexrNWbfqwMWmaFn_yvPSJASZtJZusmxLgvNfogayYe
// Entry: 0x71e07410 | Size: 1 bytes
// =========================================================================

void thunk_uTqbB_xGfxQpLeSLjgLLtvJPAxYAjyBxzcOogSCSUqYselHblzKvogqOUDieATgIpYVcOWJRhR_zcqcoytjs_BppYilGxEgHCWiQseBsgZfesNJScxNmZanDVBjgfwtMqLZdEFoMHVvKNvMuINaheoiexrNWbfqwMWmaFn_yvPSJASZtJZusmxLgvNfogayYe
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
// Function: thunk_OXkVpCMscgCHWjLLquekHdKZiyEVOuhEmZ_HzpoWkEwluxRxUPWmggPWpptIpHOHuNuVqPoxFzmmGWBANaTAMGPhMdFlFARinsoJSxHd
// Entry: 0x71e07420 | Size: 1 bytes
// =========================================================================

void thunk_OXkVpCMscgCHWjLLquekHdKZiyEVOuhEmZ_HzpoWkEwluxRxUPWmggPWpptIpHOHuNuVqPoxFzmmGWBANaTAMGPhMdFlFARinsoJSxHd
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
// Function: thunk_bvwhjAfldhWetLksMlBJBacHIGkDLQEMuytxvDareJMybYdIMcWtjlYCXf
// Entry: 0x71e07430 | Size: 1 bytes
// =========================================================================

undefined4 *
thunk_bvwhjAfldhWetLksMlBJBacHIGkDLQEMuytxvDareJMybYdIMcWtjlYCXf
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
// Function: thunk_FVrnuECqHZfPSPTVdyTtSyNDiiFAU
// Entry: 0x71e07440 | Size: 1 bytes
// =========================================================================

int thunk_FVrnuECqHZfPSPTVdyTtSyNDiiFAU(int param_1)

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
// Function: thunk_rufDSXvhplEforOuULgwVAWoHmlgUSAJ
// Entry: 0x71e07450 | Size: 1 bytes
// =========================================================================

void thunk_rufDSXvhplEforOuULgwVAWoHmlgUSAJ(int param_1)

{
  *(undefined4 *)(param_1 + 0x20c) = 0;
  return;
}


// =========================================================================
// Function: thunk_FeAkriuiQLCdvevgxlIDBdHmGcruFKQyMUDeMwaiWIpxeARBoeyLnHWgboA_daPoPmXeaqccmQiksujFnrpoAJohPzIliUTiOYjafANIsqjaPXNyBHWnTXneiA
// Entry: 0x71e07460 | Size: 1 bytes
// =========================================================================

void thunk_FeAkriuiQLCdvevgxlIDBdHmGcruFKQyMUDeMwaiWIpxeARBoeyLnHWgboA_daPoPmXeaqccmQiksujFnrpoAJohPzIliUTiOYjafANIsqjaPXNyBHWnTXneiA
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
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 in_q2 [16];
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


// =========================================================================
// Function: thunk_N_JpdVeoskGEXuPdXtVBijuvAAks
// Entry: 0x71e07470 | Size: 1 bytes
// =========================================================================

undefined4 * thunk_N_JpdVeoskGEXuPdXtVBijuvAAks(undefined4 *param_1,undefined4 param_2)

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
// Function: thunk_mMiPwzDYKrRtboTgtOZULreCb_qy
// Entry: 0x71e07480 | Size: 1 bytes
// =========================================================================

void thunk_mMiPwzDYKrRtboTgtOZULreCb_qy(void)

{
  return;
}


// =========================================================================
// Function: thunk_YieXYjbYJNsVuFBwVBPuijekz
// Entry: 0x71e07490 | Size: 1 bytes
// =========================================================================

undefined4 * thunk_YieXYjbYJNsVuFBwVBPuijekz(undefined4 *param_1,undefined4 param_2,uint param_3)

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
// Function: thunk_LYlxYtwnixwzNxyS_mbupwFE
// Entry: 0x71e074a0 | Size: 1 bytes
// =========================================================================

int thunk_LYlxYtwnixwzNxyS_mbupwFE(int param_1)

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
// Function: thunk_qchnQtEzFelnFdFppwXATpqzXwrEiosDUdZkSBR_WCcPVxjvbhXcuuJ_rZleSETmaioxGxliBSJeoalgGLf
// Entry: 0x71e074b0 | Size: 1 bytes
// =========================================================================

void thunk_qchnQtEzFelnFdFppwXATpqzXwrEiosDUdZkSBR_WCcPVxjvbhXcuuJ_rZleSETmaioxGxliBSJeoalgGLf
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
// Function: thunk_NLYlivvyYybSaTxR_HHcPFpCHIqiewIByd
// Entry: 0x71e074c0 | Size: 1 bytes
// =========================================================================

void thunk_NLYlivvyYybSaTxR_HHcPFpCHIqiewIByd(int param_1)

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
// Function: thunk_dOGAOLNEiOOtASOOatZzZKgiarYSwDbTZUFsIlPZgcNGoOquNCsinhD_GpSythhvShcoglbfpkvbWgXKBYQpUUKlioaaAqSkAHB_rdqVjzFwnf_VnHPhlFIZomjw
// Entry: 0x71e074d0 | Size: 1 bytes
// =========================================================================

void thunk_dOGAOLNEiOOtASOOatZzZKgiarYSwDbTZUFsIlPZgcNGoOquNCsinhD_GpSythhvShcoglbfpkvbWgXKBYQpUUKlioaaAqSkAHB_rdqVjzFwnf_VnHPhlFIZomjw
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
// Function: thunk_aFwUTTLcmCVxnUqnvBqjFcYShZkCNrDZjDHYnVxknxeDdwlbhyzHscsEc_ZqUkzgMtfsQpHGLVHDSJEaZpYEckjMDaqTmrGLWpHZazzdQpTKgJjijvOTOejec_tMpuOa
// Entry: 0x71e074e0 | Size: 1 bytes
// =========================================================================

void thunk_aFwUTTLcmCVxnUqnvBqjFcYShZkCNrDZjDHYnVxknxeDdwlbhyzHscsEc_ZqUkzgMtfsQpHGLVHDSJEaZpYEckjMDaqTmrGLWpHZazzdQpTKgJjijvOTOejec_tMpuOa
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
// Function: thunk_ambRSIyZujmqV_bziGsUxQieehUaeetKwtQSLMPXQZZIwwUzFOlXsgAQDyIJhMBLmrykyAkAfXpMQFCOHFaCpFPAUzjBSPBYMYlnaFgzfUsmdFrx
// Entry: 0x71e074f0 | Size: 1 bytes
// =========================================================================

void thunk_ambRSIyZujmqV_bziGsUxQieehUaeetKwtQSLMPXQZZIwwUzFOlXsgAQDyIJhMBLmrykyAkAfXpMQFCOHFaCpFPAUzjBSPBYMYlnaFgzfUsmdFrx
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
// Function: thunk_mKcMcUAoMXMxrrjcxakCpLNaqs_IJIuSYAKgfbAbSqzIyTSuhiGjkicSz_CtuTkOUWcPRXQzlUCEzVbHyeSdiCGSygrB_GVgKZLtbBSsfkLVGwqdlmWFnBSSctT
// Entry: 0x71e07500 | Size: 1 bytes
// =========================================================================

bool thunk_mKcMcUAoMXMxrrjcxakCpLNaqs_IJIuSYAKgfbAbSqzIyTSuhiGjkicSz_CtuTkOUWcPRXQzlUCEzVbHyeSdiCGSygrB_GVgKZLtbBSsfkLVGwqdlmWFnBSSctT
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
// Function: thunk_DEncUWwUvZjPg_UYrnhwuSIhebzTYUMUGKvjtAkjRWkLIPHLCwIBeKjxbL
// Entry: 0x71e07510 | Size: 1 bytes
// =========================================================================

undefined4 *
thunk_DEncUWwUvZjPg_UYrnhwuSIhebzTYUMUGKvjtAkjRWkLIPHLCwIBeKjxbL
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
// Function: thunk_JrLkJVBRJeoVXnubdeRpAzbkKFAJQB
// Entry: 0x71e07520 | Size: 1 bytes
// =========================================================================

int * thunk_JrLkJVBRJeoVXnubdeRpAzbkKFAJQB(int *param_1)

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
// Function: thunk_wlFGkdEhZrqTqcBcBvDeNdqtLUPGVgbCbVXNfnOpgCoHnzngBXHayRTSokBlpOEyBhXCVHkCXiCXrndpmioYDEuxJQsHOFjCULbNzfqMHzvCsYgAFnyhCNhTxGwinQSWpzKJiNvIvcInKNMDEGxSFWRQz
// Entry: 0x71e07530 | Size: 1 bytes
// =========================================================================

void thunk_wlFGkdEhZrqTqcBcBvDeNdqtLUPGVgbCbVXNfnOpgCoHnzngBXHayRTSokBlpOEyBhXCVHkCXiCXrndpmioYDEuxJQsHOFjCULbNzfqMHzvCsYgAFnyhCNhTxGwinQSWpzKJiNvIvcInKNMDEGxSFWRQz
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
// Function: thunk_RyGcADkMvql_NCceoKyYdyAEEzGdCPVJhaLovESDQ_rQf
// Entry: 0x71e07540 | Size: 1 bytes
// =========================================================================

bool thunk_RyGcADkMvql_NCceoKyYdyAEEzGdCPVJhaLovESDQ_rQf(int param_1)

{
  return ((int *)**(int **)(param_1 + 8))[1] - *(int *)**(int **)(param_1 + 8) == 0x100;
}


// =========================================================================
// Function: thunk_nFnYlBcfkbmaAggDzQrQAneYfYUCyIsEyVLdVIPDxAOdKuuaUV
// Entry: 0x71e07550 | Size: 1 bytes
// =========================================================================

void thunk_nFnYlBcfkbmaAggDzQrQAneYfYUCyIsEyVLdVIPDxAOdKuuaUV(uint *param_1,int param_2)

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


// =========================================================================
// Function: thunk_FAiqRpguD_WjGYHrbVnYvSyydwowk
// Entry: 0x71e07560 | Size: 1 bytes
// =========================================================================

undefined4 *
thunk_FAiqRpguD_WjGYHrbVnYvSyydwowk(undefined4 *param_1,undefined4 param_2,uint param_3)

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
// Function: thunk_BqRzmalcICGrikdbwOgPVRKmkouJ
// Entry: 0x71e07570 | Size: 1 bytes
// =========================================================================

int thunk_BqRzmalcICGrikdbwOgPVRKmkouJ(int param_1)

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
// Function: thunk_heYZnpOEMAPNdwIczGZUvZzrl_DyJpzIxxSjpJrDtZ_FLMmxYrmJeyqQSaXUmTwCFwxWWtg_fFkEfZeUUFrdVoTC
// Entry: 0x71e07580 | Size: 1 bytes
// =========================================================================

void thunk_heYZnpOEMAPNdwIczGZUvZzrl_DyJpzIxxSjpJrDtZ_FLMmxYrmJeyqQSaXUmTwCFwxWWtg_fFkEfZeUUFrdVoTC
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
// Function: thunk_CSSWAsLANZJGgptLYAcNNxwezoIPBbkDieqC_IkrwKxu_DFafnAvFJEo
// Entry: 0x71e07590 | Size: 1 bytes
// =========================================================================

void thunk_CSSWAsLANZJGgptLYAcNNxwezoIPBbkDieqC_IkrwKxu_DFafnAvFJEo(void)

{
  return;
}


// =========================================================================
// Function: thunk_YLRPkDlYAVqAaeBXTpEpEAdefPyTjJtOEzIpePICP
// Entry: 0x71e075a0 | Size: 1 bytes
// =========================================================================

/* WARNING: Restarted to delay deadcode elimination for space: register */

void thunk_YLRPkDlYAVqAaeBXTpEpEAdefPyTjJtOEzIpePICP(undefined4 *param_1)

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
  float fVar15;
  float in_s4;
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
// Function: thunk_aINgb_GVSYJDtEkOZPVtgrnIjEkFJtyucyfYfoJmJkzbwRJNaQbAtfXRkUmeBCrUPsSvlFdJjbXmkyMKdcwiBlAZWtTopegMmQTdtDXWyEJDjlxSzQhiBxocgwHctFMFmMmWHpBAjc_UU_zPChfG
// Entry: 0x71e075b0 | Size: 1 bytes
// =========================================================================

void thunk_aINgb_GVSYJDtEkOZPVtgrnIjEkFJtyucyfYfoJmJkzbwRJNaQbAtfXRkUmeBCrUPsSvlFdJjbXmkyMKdcwiBlAZWtTopegMmQTdtDXWyEJDjlxSzQhiBxocgwHctFMFmMmWHpBAjc_UU_zPChfG
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
  float in_s4;
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
// Function: thunk_upxb_uAypxlpfKZluSdqBVWMYOwjFSIMBAcKDBohhfSMBgWPwhznNiSrYPpZIaBOeaSGHzOnlIKEbz_fgNYhDqbyiYWasqRxBResbUTiInbhzpCy
// Entry: 0x71e075c0 | Size: 1 bytes
// =========================================================================

void thunk_upxb_uAypxlpfKZluSdqBVWMYOwjFSIMBAcKDBohhfSMBgWPwhznNiSrYPpZIaBOeaSGHzOnlIKEbz_fgNYhDqbyiYWasqRxBResbUTiInbhzpCy
               (void)

{
  return;
}


// =========================================================================
// Function: thunk_ftqRNSDhkwBoMzKTuomTjyHCdlzfhJE_nSUSXkqIIxpttAVchQFzuoDNwLoMHvGhdnlasV
// Entry: 0x71e075d0 | Size: 1 bytes
// =========================================================================

/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4 *
thunk_ftqRNSDhkwBoMzKTuomTjyHCdlzfhJE_nSUSXkqIIxpttAVchQFzuoDNwLoMHvGhdnlasV
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
// Function: thunk_eFRo_tbtwxSfFIlMja_UKSGyANOwDUSmZIBDo
// Entry: 0x71e075e0 | Size: 1 bytes
// =========================================================================

int thunk_eFRo_tbtwxSfFIlMja_UKSGyANOwDUSmZIBDo(int param_1)

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
// Function: thunk_CQuuachJZoejeMocyrEilGLhtqdQUeHFYfZTurDjpIqSrMn_xRhy_TEfPHIfkdBBrRLZQwzkBmLDaNzsDMQfZlsAhvVVv
// Entry: 0x71e075f0 | Size: 1 bytes
// =========================================================================

void thunk_CQuuachJZoejeMocyrEilGLhtqdQUeHFYfZTurDjpIqSrMn_xRhy_TEfPHIfkdBBrRLZQwzkBmLDaNzsDMQfZlsAhvVVv
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
// Function: thunk_gcEScPqeHwWShxDtcfRdhBGuHkNkRimCB
// Entry: 0x71e07600 | Size: 1 bytes
// =========================================================================

void thunk_gcEScPqeHwWShxDtcfRdhBGuHkNkRimCB(int param_1,int param_2)

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


