// =========================================================================
// Function: pEJsaRWzxlAOwvPFLOaaz
// Entry: 0x71af3ba0 | Size: 72 bytes
// =========================================================================

int pEJsaRWzxlAOwvPFLOaaz(short *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  short sVar3;
  
  if (param_2 != 0) {
    iVar1 = 0;
    sVar3 = 0x7fff;
    iVar2 = 0;
    do {
      if (*param_1 < sVar3) {
        sVar3 = *param_1;
        iVar1 = iVar2;
      }
      iVar2 = iVar2 + 1;
      param_1 = param_1 + 1;
    } while (param_2 != iVar2);
    return iVar1;
  }
  return 0;
}


// =========================================================================
// Function: MHOWgtuqYQPweqmNfhPTi
// Entry: 0x71af3be8 | Size: 68 bytes
// =========================================================================

int MHOWgtuqYQPweqmNfhPTi(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 != 0) {
    iVar1 = 0;
    iVar3 = 0x7fffffff;
    iVar2 = 0;
    do {
      iVar4 = *(int *)(param_1 + iVar2 * 4);
      if (iVar4 < iVar3) {
        iVar3 = iVar4;
        iVar1 = iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (param_2 != iVar2);
    return iVar1;
  }
  return 0;
}


// =========================================================================
// Function: rjGAfGn_zTbMVDHHraHPbyVqQoW
// Entry: 0x71af3c44 | Size: 260 bytes
// =========================================================================

void rjGAfGn_zTbMVDHHraHPbyVqQoW
               (int *param_1,int param_2,int param_3,uint param_4,int param_5,uint param_6,
               int param_7)

{
  short *psVar1;
  short *psVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  if (param_5 != 0) {
    if (param_4 == 0) {
      imp___aeabi_memclr4(param_1,param_5 << 2);
      return;
    }
    uVar10 = param_4 & 0xfffffffc;
    iVar9 = 0;
    auVar11._8_8_ = CONCAT44(param_6,param_6);
    auVar11._0_8_ = CONCAT44(param_6,param_6);
    auVar11 = FloatVectorNeg(auVar11,1,4);
    do {
      iVar8 = 0;
      uVar6 = 0;
      if (param_4 < 4) {
LAB_71af3d00:
        iVar7 = uVar6 * -2;
        iVar5 = param_4 - uVar6;
        do {
          psVar1 = (short *)(param_2 - iVar7);
          iVar5 = iVar5 + -1;
          psVar2 = (short *)(param_3 - iVar7);
          iVar7 = iVar7 + -2;
          iVar8 = iVar8 + ((int)*psVar2 * (int)*psVar1 >> (param_6 & 0xff));
        } while (iVar5 != 0);
      }
      else {
        auVar13 = (undefined1  [16])0x0;
        uVar6 = uVar10;
        do {
          puVar3 = (undefined8 *)(param_2 + iVar8);
          uVar6 = uVar6 - 4;
          puVar4 = (undefined8 *)(param_3 + iVar8);
          iVar8 = iVar8 + 8;
          auVar14 = VectorMultiply(*puVar4,*puVar3,2,0);
          auVar14 = VectorShiftLeft(auVar14,auVar11,4,0);
          auVar13 = VectorAdd(auVar14,auVar13,4);
        } while (uVar6 != 0);
        uVar12 = VectorAdd(auVar13._0_8_,auVar13._8_8_,4);
        iVar8 = (int)uVar12 + (int)((ulonglong)uVar12 >> 0x20);
        uVar6 = uVar10;
        if (uVar10 != param_4) goto LAB_71af3d00;
      }
      iVar9 = iVar9 + 1;
      *param_1 = iVar8;
      param_3 = param_3 + param_7 * 2;
      param_1 = param_1 + 1;
    } while (iVar9 != param_5);
  }
  return;
}


// =========================================================================
// Function: HHoo_ZGgbzYCmHNMWLhHEPxeA
// Entry: 0x71af3d80 | Size: 332 bytes
// =========================================================================

undefined4
HHoo_ZGgbzYCmHNMWLhHEPxeA
          (int param_1,uint param_2,undefined2 *param_3,int param_4,undefined8 *param_5,uint param_6
          ,int param_7,uint param_8)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint unaff_r7;
  undefined8 *puVar7;
  short *psVar8;
  short *psVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined1 auVar12 [16];
  undefined8 uVar13;
  
  if (param_4 != 0) {
    unaff_r7 = param_6;
  }
  uVar1 = 0xffffffff;
  if (((param_4 == 0 || unaff_r7 == 0) ||
      (uVar6 = (param_4 + -1) * param_7 + param_8 + 1, param_2 < uVar6)) ||
     (uVar1 = 0, uVar6 <= param_8)) {
    return uVar1;
  }
  param_1 = param_1 + param_8 * 2;
  puVar11 = (undefined8 *)(param_1 + -6);
  uVar2 = param_6 & 0xfffffffc;
  do {
    uVar4 = uVar2;
    puVar5 = puVar11;
    puVar7 = param_5;
    if (param_6 < 4) {
      iVar3 = 0x800;
      uVar4 = 0;
LAB_71af3e8c:
      iVar10 = param_6 - uVar4;
      psVar8 = (short *)(param_1 + uVar4 * -2);
      psVar9 = (short *)((int)param_5 + uVar4 * 2);
      do {
        iVar10 = iVar10 + -1;
        iVar3 = (int)*psVar8 * (int)*psVar9 + iVar3;
        psVar8 = psVar8 + -1;
        psVar9 = psVar9 + 1;
      } while (iVar10 != 0);
    }
    else {
      do {
        uVar4 = uVar4 - 4;
        uVar13 = vrev(*puVar5,2);
        auVar12 = VectorMultiplyAccumulate(uVar13,*puVar7,2,0);
        puVar5 = puVar5 + -1;
        puVar7 = puVar7 + 1;
      } while (uVar4 != 0);
      uVar13 = VectorAdd(auVar12._0_8_,auVar12._8_8_,4);
      iVar3 = (int)uVar13 + (int)((ulonglong)uVar13 >> 0x20);
      uVar4 = uVar2;
      if (uVar2 != param_6) goto LAB_71af3e8c;
    }
    uVar1 = SignedSaturate(iVar3 >> 0xc,0x10);
    SignedDoesSaturate(iVar3 >> 0xc,0x10);
    param_1 = param_1 + param_7 * 2;
    puVar11 = (undefined8 *)((int)puVar11 + param_7 * 2);
    param_8 = param_8 + param_7;
    *param_3 = (short)uVar1;
    param_3 = param_3 + 1;
    if (uVar6 <= param_8) {
      return 0;
    }
  } while( true );
}


// =========================================================================
// Function: FwunShpgJpdEphjvNwPg_UQibvb
// Entry: 0x71af3ef8 | Size: 296 bytes
// =========================================================================

void FwunShpgJpdEphjvNwPg_UQibvb
               (short *param_1,uint param_2,undefined1 (*param_3) [16],uint param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  uint unaff_r6;
  uint uVar4;
  short *psVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined8 uVar11;
  
  if ((int)param_4 < 1) {
    if (param_2 != 0) {
      uVar4 = -param_4;
      if (7 < param_2) {
        param_4 = (int)param_1 - (int)param_3;
      }
      if (7 < param_2 && 0xf < param_4) {
        uVar3 = param_2 & 0xfffffff8;
        auVar7._8_8_ = CONCAT44(uVar4,uVar4);
        auVar7._0_8_ = CONCAT44(uVar4,uVar4);
        puVar1 = *param_3;
        psVar5 = param_1 + uVar3;
        uVar2 = uVar3;
        do {
          auVar8 = *param_3;
          param_3 = param_3 + 1;
          uVar2 = uVar2 - 8;
          auVar10 = VectorCopyLong(auVar8._8_8_,2,1);
          auVar8 = VectorCopyLong(auVar8._0_8_,2,1);
          auVar10 = VectorShiftLeft(auVar10,auVar7,4,1);
          auVar8 = VectorShiftLeft(auVar8,auVar7,4,1);
          uVar11 = VectorCopyNarrow(auVar10,4);
          uVar9 = VectorCopyNarrow(auVar8,4);
          *(undefined8 *)param_1 = uVar9;
          *(undefined8 *)(param_1 + 4) = uVar11;
          param_1 = param_1 + 8;
        } while (uVar2 != 0);
        bVar6 = uVar3 == param_2;
        param_1 = psVar5;
        param_3 = (undefined1 (*) [16])(puVar1 + uVar3 * 2);
        param_2 = param_2 & 7;
        if (bVar6) {
          return;
        }
      }
      do {
        param_2 = param_2 - 1;
        *param_1 = *(short *)*param_3 << (uVar4 & 0xff);
        param_1 = param_1 + 1;
        param_3 = (undefined1 (*) [16])(*param_3 + 2);
      } while (param_2 != 0);
    }
  }
  else if (param_2 != 0) {
    if (7 < param_2) {
      unaff_r6 = (int)param_1 - (int)param_3;
    }
    if (7 < param_2 && 0xf < unaff_r6) {
      auVar8._8_8_ = CONCAT44(param_4,param_4);
      auVar8._0_8_ = CONCAT44(param_4,param_4);
      uVar2 = param_2 & 0xfffffff8;
      auVar7 = FloatVectorNeg(auVar8,1,4);
      puVar1 = *param_3;
      psVar5 = param_1 + uVar2;
      uVar4 = uVar2;
      do {
        auVar8 = *param_3;
        param_3 = param_3 + 1;
        uVar4 = uVar4 - 8;
        auVar10 = VectorCopyLong(auVar8._8_8_,2,0);
        auVar8 = VectorCopyLong(auVar8._0_8_,2,0);
        auVar10 = VectorShiftLeft(auVar10,auVar7,4,0);
        auVar8 = VectorShiftLeft(auVar8,auVar7,4,0);
        uVar11 = VectorCopyNarrow(auVar10,4);
        uVar9 = VectorCopyNarrow(auVar8,4);
        *(undefined8 *)param_1 = uVar9;
        *(undefined8 *)(param_1 + 4) = uVar11;
        param_1 = param_1 + 8;
      } while (uVar4 != 0);
      bVar6 = uVar2 == param_2;
      param_3 = (undefined1 (*) [16])(puVar1 + uVar2 * 2);
      param_2 = param_2 & 7;
      param_1 = psVar5;
      if (bVar6) {
        return;
      }
    }
    do {
      param_2 = param_2 - 1;
      *param_1 = (short)((int)*(short *)*param_3 >> (param_4 & 0xff));
      param_3 = (undefined1 (*) [16])(*param_3 + 2);
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  return;
}


// =========================================================================
// Function: mMTvrsldlKhvwdlsBgkjWZXpZaC
// Entry: 0x71af4020 | Size: 256 bytes
// =========================================================================

void mMTvrsldlKhvwdlsBgkjWZXpZaC(int *param_1,uint param_2,undefined1 (*param_3) [16],uint param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  uint unaff_r6;
  uint uVar4;
  int *piVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if ((int)param_4 < 1) {
    if (param_2 != 0) {
      uVar4 = -param_4;
      if (3 < param_2) {
        param_4 = (int)param_1 - (int)param_3;
      }
      if (3 < param_2 && 0xf < param_4) {
        uVar3 = param_2 & 0xfffffffc;
        auVar7._8_8_ = CONCAT44(uVar4,uVar4);
        auVar7._0_8_ = CONCAT44(uVar4,uVar4);
        puVar1 = *param_3;
        piVar5 = param_1 + uVar3;
        uVar2 = uVar3;
        do {
          auVar8 = *param_3;
          param_3 = param_3 + 1;
          uVar2 = uVar2 - 4;
          auVar8 = VectorShiftLeft(auVar8,auVar7,4,1);
          *(longlong *)param_1 = auVar8._0_8_;
          *(longlong *)(param_1 + 2) = auVar8._8_8_;
          param_1 = param_1 + 4;
        } while (uVar2 != 0);
        bVar6 = uVar3 == param_2;
        param_1 = piVar5;
        param_3 = (undefined1 (*) [16])(puVar1 + uVar3 * 4);
        param_2 = param_2 & 3;
        if (bVar6) {
          return;
        }
      }
      do {
        param_2 = param_2 - 1;
        *param_1 = *(int *)*param_3 << (uVar4 & 0xff);
        param_1 = param_1 + 1;
        param_3 = (undefined1 (*) [16])(*param_3 + 4);
      } while (param_2 != 0);
    }
  }
  else if (param_2 != 0) {
    if (3 < param_2) {
      unaff_r6 = (int)param_1 - (int)param_3;
    }
    if (3 < param_2 && 0xf < unaff_r6) {
      auVar8._8_8_ = CONCAT44(param_4,param_4);
      auVar8._0_8_ = CONCAT44(param_4,param_4);
      uVar2 = param_2 & 0xfffffffc;
      auVar7 = FloatVectorNeg(auVar8,1,4);
      puVar1 = *param_3;
      piVar5 = param_1 + uVar2;
      uVar4 = uVar2;
      do {
        auVar8 = *param_3;
        param_3 = param_3 + 1;
        uVar4 = uVar4 - 4;
        auVar8 = VectorShiftLeft(auVar8,auVar7,4,0);
        *(longlong *)param_1 = auVar8._0_8_;
        *(longlong *)(param_1 + 2) = auVar8._8_8_;
        param_1 = param_1 + 4;
      } while (uVar4 != 0);
      bVar6 = uVar2 == param_2;
      param_3 = (undefined1 (*) [16])(puVar1 + uVar2 * 4);
      param_2 = param_2 & 3;
      param_1 = piVar5;
      if (bVar6) {
        return;
      }
    }
    do {
      param_2 = param_2 - 1;
      *param_1 = *(int *)*param_3 >> (param_4 & 0xff);
      param_3 = (undefined1 (*) [16])(*param_3 + 4);
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  return;
}


// =========================================================================
// Function: tZFzRczbBqdVJBwgAGpasYoA_XcuSGCn
// Entry: 0x71af4120 | Size: 84 bytes
// =========================================================================

void tZFzRczbBqdVJBwgAGpasYoA_XcuSGCn(undefined2 *param_1,int param_2,int *param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((int)param_4 < 0) {
    if (param_2 == 0) {
      return;
    }
    do {
      param_2 = param_2 + -1;
      iVar1 = *param_3 << (-param_4 & 0xff);
      uVar2 = SignedSaturate(iVar1,0x10);
      SignedDoesSaturate(iVar1,0x10);
      *param_1 = (short)uVar2;
      param_1 = param_1 + 1;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  else {
    while (param_2 != 0) {
      param_2 = param_2 + -1;
      iVar1 = *param_3 >> (param_4 & 0xff);
      uVar2 = SignedSaturate(iVar1,0x10);
      SignedDoesSaturate(iVar1,0x10);
      *param_1 = (short)uVar2;
      param_3 = param_3 + 1;
      param_1 = param_1 + 1;
    }
  }
  return;
}


// =========================================================================
// Function: WBMMOPefLFzZJtwNTaGna
// Entry: 0x71af4174 | Size: 172 bytes
// =========================================================================

void WBMMOPefLFzZJtwNTaGna
               (undefined1 (*param_1) [16],undefined8 *param_2,undefined4 param_3,uint param_4,
               uint param_5)

{
  undefined1 auVar1 [16];
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  uint unaff_r6;
  uint uVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined8 uVar11;
  
  if (param_4 == 0) {
    return;
  }
  if (7 < param_4) {
    unaff_r6 = (int)param_2 - (int)param_1;
  }
  uVar4 = 0;
  if (7 < param_4 && 0xf < unaff_r6) {
    auVar7._8_8_ = CONCAT44(param_5,param_5);
    auVar7._0_8_ = CONCAT44(param_5,param_5);
    uVar4 = param_4 & 0xfffffff8;
    auVar1._8_8_ = CONCAT44(param_3,param_3);
    auVar1._0_8_ = CONCAT44(param_3,param_3);
    auVar7 = FloatVectorNeg(auVar7,1,4);
    puVar2 = *param_1;
    puVar6 = (undefined8 *)((int)param_2 + uVar4 * 2);
    uVar5 = uVar4;
    do {
      auVar8 = *param_1;
      param_1 = param_1 + 1;
      uVar5 = uVar5 - 8;
      auVar10 = VectorCopyLong(auVar8._8_8_,2,0);
      auVar8 = VectorCopyLong(auVar8._0_8_,2,0);
      auVar10 = VectorMultiply(auVar1,auVar10,4);
      auVar8 = VectorMultiply(auVar1,auVar8,4);
      auVar10 = VectorShiftLeft(auVar10,auVar7,4,0);
      auVar8 = VectorShiftLeft(auVar8,auVar7,4,0);
      uVar11 = VectorCopyNarrow(auVar10,4);
      uVar9 = VectorCopyNarrow(auVar8,4);
      *param_2 = uVar9;
      param_2[1] = uVar11;
      param_2 = param_2 + 2;
    } while (uVar5 != 0);
    param_1 = (undefined1 (*) [16])(puVar2 + uVar4 * 2);
    param_2 = puVar6;
    if (uVar4 == param_4) {
      return;
    }
  }
  iVar3 = param_4 - uVar4;
  do {
    iVar3 = iVar3 + -1;
    *(short *)param_2 = (short)((int)*(short *)*param_1 * (int)(short)param_3 >> (param_5 & 0xff));
    param_1 = (undefined1 (*) [16])(*param_1 + 2);
    param_2 = (undefined8 *)((int)param_2 + 2);
  } while (iVar3 != 0);
  return;
}


// =========================================================================
// Function: LZXfqRXCYNtREnmlofIslAY_cUYK
// Entry: 0x71af4220 | Size: 56 bytes
// =========================================================================

void LZXfqRXCYNtREnmlofIslAY_cUYK
               (short *param_1,undefined2 *param_2,short param_3,int param_4,uint param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_4 != 0) {
    do {
      param_4 = param_4 + -1;
      iVar1 = (int)*param_1 * (int)param_3 >> (param_5 & 0xff);
      uVar2 = SignedSaturate(iVar1,0x10);
      SignedDoesSaturate(iVar1,0x10);
      *param_2 = (short)uVar2;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (param_4 != 0);
    return;
  }
  return;
}


// =========================================================================
// Function: vPSdoYGNszWq_F_qezISYWMvIVQk
// Entry: 0x71af4258 | Size: 256 bytes
// =========================================================================

void vPSdoYGNszWq_F_qezISYWMvIVQk
               (undefined1 (*param_1) [16],undefined4 param_2,uint param_3,
               undefined1 (*param_4) [16],undefined4 param_5,uint param_6,short *param_7,
               uint param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  uint unaff_r4;
  uint uVar6;
  short *psVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  if (param_8 != 0) {
    bVar9 = 7 < param_8;
    uVar8 = 0;
    if (bVar9) {
      unaff_r4 = (int)param_7 - (int)param_1;
    }
    bVar10 = bVar9 && 0xf < unaff_r4;
    if (bVar9 && 0xf < unaff_r4) {
      bVar10 = 0xf < (uint)((int)param_7 - (int)param_4);
    }
    if (bVar10) {
      auVar11._8_8_ = CONCAT44(param_6,param_6);
      auVar11._0_8_ = CONCAT44(param_6,param_6);
      uVar8 = param_8 & 0xfffffff8;
      auVar13._8_8_ = CONCAT44(param_3,param_3);
      auVar13._0_8_ = CONCAT44(param_3,param_3);
      auVar12 = FloatVectorNeg(auVar11,1,4);
      auVar1._8_8_ = CONCAT44(param_5,param_5);
      auVar1._0_8_ = CONCAT44(param_5,param_5);
      auVar2._8_8_ = CONCAT44(param_2,param_2);
      auVar2._0_8_ = CONCAT44(param_2,param_2);
      puVar3 = *param_1;
      auVar11 = FloatVectorNeg(auVar13,1,4);
      puVar4 = *param_4;
      psVar7 = param_7 + uVar8;
      uVar6 = uVar8;
      do {
        auVar13 = *param_1;
        param_1 = param_1 + 1;
        uVar6 = uVar6 - 8;
        auVar15 = *param_4;
        param_4 = param_4 + 1;
        auVar17 = VectorCopyLong(auVar13._8_8_,2,0);
        auVar13 = VectorCopyLong(auVar13._0_8_,2,0);
        auVar18 = VectorCopyLong(auVar15._8_8_,2,0);
        auVar15 = VectorCopyLong(auVar15._0_8_,2,0);
        auVar17 = VectorMultiply(auVar2,auVar17,4);
        auVar18 = VectorMultiply(auVar1,auVar18,4);
        auVar13 = VectorMultiply(auVar2,auVar13,4);
        auVar15 = VectorMultiply(auVar1,auVar15,4);
        auVar17 = VectorShiftLeft(auVar17,auVar11,4,0);
        auVar18 = VectorShiftLeft(auVar18,auVar12,4,0);
        auVar13 = VectorShiftLeft(auVar13,auVar11,4,0);
        auVar15 = VectorShiftLeft(auVar15,auVar12,4,0);
        auVar17 = VectorAdd(auVar18,auVar17,4);
        auVar13 = VectorAdd(auVar15,auVar13,4);
        uVar16 = VectorCopyNarrow(auVar17,4);
        uVar14 = VectorCopyNarrow(auVar13,4);
        *(undefined8 *)param_7 = uVar14;
        *(undefined8 *)(param_7 + 4) = uVar16;
        param_7 = param_7 + 8;
      } while (uVar6 != 0);
      param_7 = psVar7;
      param_4 = (undefined1 (*) [16])(puVar4 + uVar8 * 2);
      param_1 = (undefined1 (*) [16])(puVar3 + uVar8 * 2);
      if (uVar8 == param_8) {
        return;
      }
    }
    iVar5 = param_8 - uVar8;
    do {
      iVar5 = iVar5 + -1;
      *param_7 = (short)((int)*(short *)*param_4 * (int)(short)param_5 >> (param_6 & 0xff)) +
                 (short)((int)*(short *)*param_1 * (int)(short)param_2 >> (param_3 & 0xff));
      param_7 = param_7 + 1;
      param_4 = (undefined1 (*) [16])(*param_4 + 2);
      param_1 = (undefined1 (*) [16])(*param_1 + 2);
    } while (iVar5 != 0);
  }
  return;
}


// =========================================================================
// Function: raYDpRQvLJ_ignnXxzaLtRDINdhDnJ_KwDbtOY
// Entry: 0x71af4358 | Size: 300 bytes
// =========================================================================

undefined4
raYDpRQvLJ_ignnXxzaLtRDINdhDnJ_KwDbtOY
          (undefined1 (*param_1) [16],undefined4 param_2,undefined8 *param_3,undefined4 param_4,
          uint param_5,undefined8 *param_6,uint param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  short *psVar3;
  short *psVar4;
  undefined1 (*pauVar5) [16];
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined2 *puVar10;
  uint unaff_r9;
  uint uVar11;
  bool bVar12;
  undefined8 *puVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined8 uVar18;
  
  if ((-1 < (int)param_5) && (param_1 != (undefined1 (*) [16])0x0 && param_3 != (undefined8 *)0x0))
  {
    if (param_6 != (undefined8 *)0x0) {
      unaff_r9 = param_7;
    }
    if (param_6 != (undefined8 *)0x0 && unaff_r9 != 0) {
      uVar11 = 0;
      if (7 < unaff_r9) {
        uVar9 = (int)param_6 - (int)param_1;
        bVar12 = 0xf < uVar9;
        if (bVar12) {
          uVar9 = (int)param_6 - (int)param_3;
        }
        if (bVar12 && 0xf < uVar9) {
          auVar14._8_8_ = CONCAT44(param_5,param_5);
          auVar14._0_8_ = CONCAT44(param_5,param_5);
          uVar11 = unaff_r9 & 0xfffffff8;
          auVar14 = FloatVectorNeg(auVar14,1,4);
          auVar1._8_8_ = CONCAT44(param_4,param_4);
          auVar1._0_8_ = CONCAT44(param_4,param_4);
          auVar2._8_8_ = CONCAT44(param_2,param_2);
          auVar2._0_8_ = CONCAT44(param_2,param_2);
          pauVar5 = param_1;
          puVar6 = param_3;
          puVar8 = param_6;
          uVar9 = uVar11;
          do {
            auVar15 = *pauVar5;
            pauVar5 = pauVar5 + 1;
            uVar9 = uVar9 - 8;
            auVar17 = VectorCopyLong(auVar15._8_8_,2,0);
            uVar18 = *puVar6;
            puVar13 = puVar6 + 1;
            puVar6 = puVar6 + 2;
            auVar15 = VectorCopyLong(auVar15._0_8_,2,0);
            VectorMultiplyAccumulate(auVar2,auVar17,4,0);
            VectorMultiplyAccumulate(auVar2,auVar15,4,0);
            auVar17 = VectorCopyLong(*puVar13,2,0);
            auVar15 = VectorCopyLong(uVar18,2,0);
            auVar17 = VectorMultiplyAccumulate(auVar1,auVar17,4,0);
            auVar15 = VectorMultiplyAccumulate(auVar1,auVar15,4,0);
            auVar17 = VectorShiftLeft(auVar17,auVar14,4,0);
            auVar15 = VectorShiftLeft(auVar15,auVar14,4,0);
            uVar16 = VectorCopyNarrow(auVar17,4);
            uVar18 = VectorCopyNarrow(auVar15,4);
            *puVar8 = uVar18;
            puVar8[1] = uVar16;
            puVar8 = puVar8 + 2;
          } while (uVar9 != 0);
          if (uVar11 == unaff_r9) {
            return 0;
          }
        }
      }
      iVar7 = unaff_r9 - uVar11;
      psVar3 = (short *)(*param_1 + uVar11 * 2);
      psVar4 = (short *)((int)param_3 + uVar11 * 2);
      puVar10 = (undefined2 *)((int)param_6 + uVar11 * 2);
      do {
        iVar7 = iVar7 + -1;
        *puVar10 = (short)((int)*psVar4 * (int)(short)param_4 +
                           (int)*psVar3 * (int)(short)param_2 + ((1 << (param_5 & 0xff)) >> 1) >>
                          (param_5 & 0xff));
        psVar3 = psVar3 + 1;
        psVar4 = psVar4 + 1;
        puVar10 = puVar10 + 1;
      } while (iVar7 != 0);
      return 0;
    }
  }
  return 0xffffffff;
}


// =========================================================================
// Function: HcvPIMd_epoKtXVyJrp
// Entry: 0x71af449c | Size: 28 bytes
// =========================================================================

void HcvPIMd_epoKtXVyJrp(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_71ba0484(param_1);
    return;
  }
  return;
}


// =========================================================================
// Function: gbixOGWOrZftdbaKPhf
// Entry: 0x71af44b8 | Size: 28 bytes
// =========================================================================

void gbixOGWOrZftdbaKPhf(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_71ba0440(param_1);
    return;
  }
  return;
}


// =========================================================================
// Function: pkssPMrNPDLQFdaDueUBWnjkb
// Entry: 0x71af44d4 | Size: 40 bytes
// =========================================================================

int pkssPMrNPDLQFdaDueUBWnjkb(undefined4 param_1,int param_2)

{
  short sVar1;
  
  if (param_2 != 0) {
    sVar1 = FUN_71ba0440(param_1);
    return (int)sVar1;
  }
  return 0x7fff;
}


// =========================================================================
// Function: OQNeePKqcGBWEymHwvuUuukd
// Entry: 0x71af44fc | Size: 948 bytes
// =========================================================================

uint OQNeePKqcGBWEymHwvuUuukd(int param_1,int param_2)

{
  int iVar1;
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
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  
  if (param_1 != 0) {
    iVar16 = param_1;
    if (param_1 < 0) {
      iVar16 = -param_1;
    }
    iVar15 = param_2;
    if (param_2 < 0) {
      iVar15 = -param_2;
    }
    iVar20 = iVar16 * 2 - iVar15;
    if (iVar16 * 2 < iVar15) {
      iVar20 = iVar16 << 1;
    }
    iVar1 = iVar20 << 1;
    if (iVar15 <= iVar20 * 2) {
      iVar1 = iVar20 * 2 - iVar15;
    }
    iVar21 = iVar1 * 2 - iVar15;
    if (iVar1 * 2 < iVar15) {
      iVar21 = iVar1 << 1;
    }
    iVar2 = iVar21 << 1;
    if (iVar15 <= iVar21 * 2) {
      iVar2 = iVar21 * 2 - iVar15;
    }
    iVar22 = iVar2 * 2 - iVar15;
    if (iVar2 * 2 < iVar15) {
      iVar22 = iVar2 << 1;
    }
    iVar3 = iVar22 << 1;
    if (iVar15 <= iVar22 * 2) {
      iVar3 = iVar22 * 2 - iVar15;
    }
    iVar23 = iVar3 * 2 - iVar15;
    if (iVar3 * 2 < iVar15) {
      iVar23 = iVar3 << 1;
    }
    iVar4 = iVar23 << 1;
    if (iVar15 <= iVar23 * 2) {
      iVar4 = iVar23 * 2 - iVar15;
    }
    iVar24 = iVar4 * 2 - iVar15;
    if (iVar4 * 2 < iVar15) {
      iVar24 = iVar4 << 1;
    }
    iVar5 = iVar24 << 1;
    if (iVar15 <= iVar24 * 2) {
      iVar5 = iVar24 * 2 - iVar15;
    }
    iVar25 = iVar5 * 2 - iVar15;
    if (iVar5 * 2 < iVar15) {
      iVar25 = iVar5 << 1;
    }
    iVar6 = iVar25 << 1;
    if (iVar15 <= iVar25 * 2) {
      iVar6 = iVar25 * 2 - iVar15;
    }
    iVar26 = iVar6 * 2 - iVar15;
    if (iVar6 * 2 < iVar15) {
      iVar26 = iVar6 << 1;
    }
    iVar7 = iVar26 << 1;
    if (iVar15 <= iVar26 * 2) {
      iVar7 = iVar26 * 2 - iVar15;
    }
    iVar27 = iVar7 * 2 - iVar15;
    if (iVar7 * 2 < iVar15) {
      iVar27 = iVar7 << 1;
    }
    iVar8 = iVar27 << 1;
    if (iVar15 <= iVar27 * 2) {
      iVar8 = iVar27 * 2 - iVar15;
    }
    iVar28 = iVar8 * 2 - iVar15;
    if (iVar8 * 2 < iVar15) {
      iVar28 = iVar8 << 1;
    }
    iVar9 = iVar28 << 1;
    if (iVar15 <= iVar28 * 2) {
      iVar9 = iVar28 * 2 - iVar15;
    }
    iVar29 = iVar9 * 2 - iVar15;
    if (iVar9 * 2 < iVar15) {
      iVar29 = iVar9 << 1;
    }
    iVar10 = iVar29 << 1;
    if (iVar15 <= iVar29 * 2) {
      iVar10 = iVar29 * 2 - iVar15;
    }
    iVar30 = iVar10 * 2 - iVar15;
    if (iVar10 * 2 < iVar15) {
      iVar30 = iVar10 << 1;
    }
    iVar11 = iVar30 << 1;
    if (iVar15 <= iVar30 * 2) {
      iVar11 = iVar30 * 2 - iVar15;
    }
    iVar32 = iVar11 * 2 - iVar15;
    if (iVar11 * 2 < iVar15) {
      iVar32 = iVar11 << 1;
    }
    iVar31 = iVar32 << 1;
    if (iVar15 <= iVar32 * 2) {
      iVar31 = iVar32 * 2 - iVar15;
    }
    iVar18 = iVar31 * 2 - iVar15;
    if (iVar31 * 2 < iVar15) {
      iVar18 = iVar31 << 1;
    }
    iVar19 = iVar18 << 1;
    if (iVar15 <= iVar18 * 2) {
      iVar19 = iVar18 * 2 - iVar15;
    }
    iVar34 = iVar19 * 2 - iVar15;
    if (iVar19 * 2 < iVar15) {
      iVar34 = iVar19 << 1;
    }
    iVar17 = iVar34 << 1;
    if (iVar15 <= iVar34 * 2) {
      iVar17 = iVar34 * 2 - iVar15;
    }
    iVar33 = iVar17 * 2 - iVar15;
    if (iVar17 * 2 < iVar15) {
      iVar33 = iVar17 << 1;
    }
    iVar12 = iVar33 << 1;
    if (iVar15 <= iVar33 * 2) {
      iVar12 = iVar33 * 2 - iVar15;
    }
    uVar14 = (uint)(iVar15 <= iVar20 * 2);
    if (iVar15 <= iVar16 * 2) {
      uVar14 = uVar14 | 2;
    }
    uVar13 = uVar14 << 2 | 2;
    if (iVar1 * 2 < iVar15) {
      uVar13 = uVar14 << 2;
    }
    if (iVar15 <= iVar21 * 2) {
      uVar13 = uVar13 | 1;
    }
    uVar14 = uVar13 << 2 | 2;
    if (iVar2 * 2 < iVar15) {
      uVar14 = uVar13 << 2;
    }
    if (iVar15 <= iVar22 * 2) {
      uVar14 = uVar14 | 1;
    }
    uVar13 = uVar14 << 2 | 2;
    if (iVar3 * 2 < iVar15) {
      uVar13 = uVar14 << 2;
    }
    if (iVar15 <= iVar23 * 2) {
      uVar13 = uVar13 | 1;
    }
    uVar14 = uVar13 << 2 | 2;
    if (iVar4 * 2 < iVar15) {
      uVar14 = uVar13 << 2;
    }
    if (iVar15 <= iVar24 * 2) {
      uVar14 = uVar14 | 1;
    }
    uVar13 = uVar14 << 2 | 2;
    if (iVar5 * 2 < iVar15) {
      uVar13 = uVar14 << 2;
    }
    if (iVar15 <= iVar25 * 2) {
      uVar13 = uVar13 | 1;
    }
    uVar14 = uVar13 << 2 | 2;
    if (iVar6 * 2 < iVar15) {
      uVar14 = uVar13 << 2;
    }
    if (iVar15 <= iVar26 * 2) {
      uVar14 = uVar14 | 1;
    }
    uVar13 = uVar14 << 2 | 2;
    if (iVar7 * 2 < iVar15) {
      uVar13 = uVar14 << 2;
    }
    if (iVar15 <= iVar27 * 2) {
      uVar13 = uVar13 | 1;
    }
    uVar14 = uVar13 << 2 | 2;
    if (iVar8 * 2 < iVar15) {
      uVar14 = uVar13 << 2;
    }
    if (iVar15 <= iVar28 * 2) {
      uVar14 = uVar14 | 1;
    }
    uVar13 = uVar14 << 2 | 2;
    if (iVar9 * 2 < iVar15) {
      uVar13 = uVar14 << 2;
    }
    if (iVar15 <= iVar29 * 2) {
      uVar13 = uVar13 | 1;
    }
    uVar14 = uVar13 << 2 | 2;
    if (iVar10 * 2 < iVar15) {
      uVar14 = uVar13 << 2;
    }
    if (iVar15 <= iVar30 * 2) {
      uVar14 = uVar14 | 1;
    }
    uVar13 = uVar14 << 2 | 2;
    if (iVar11 * 2 < iVar15) {
      uVar13 = uVar14 << 2;
    }
    if (iVar15 <= iVar32 * 2) {
      uVar13 = uVar13 | 1;
    }
    uVar14 = uVar13 << 2 | 2;
    if (iVar31 * 2 < iVar15) {
      uVar14 = uVar13 << 2;
    }
    if (iVar15 <= iVar18 * 2) {
      uVar14 = uVar14 | 1;
    }
    uVar13 = uVar14 << 2 | 2;
    if (iVar19 * 2 < iVar15) {
      uVar13 = uVar14 << 2;
    }
    if (iVar15 <= iVar34 * 2) {
      uVar13 = uVar13 | 1;
    }
    uVar14 = uVar13 << 2 | 2;
    if (iVar17 * 2 < iVar15) {
      uVar14 = uVar13 << 2;
    }
    if (iVar15 <= iVar33 * 2) {
      uVar14 = uVar14 | 1;
    }
    uVar13 = uVar14 << 1;
    if (iVar15 <= iVar12 * 2) {
      uVar13 = uVar14 << 1 | 1;
    }
    if (-(param_1 >> 0x1f) - (param_2 >> 0x1f) == 1) {
      uVar13 = -uVar13;
    }
    return uVar13;
  }
  return 0;
}


// =========================================================================
// Function: YrlukcxRepfmMWeThLYiu
// Entry: 0x71af48b0 | Size: 144 bytes
// =========================================================================

int YrlukcxRepfmMWeThLYiu(undefined4 param_1,int param_2,short param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = -1;
    param_2 = 0;
  }
  else {
    sVar2 = FUN_71ba0440(0x1fffffff);
    iVar3 = (int)sVar2;
    param_2 = param_2 * -2;
  }
  sVar2 = (short)iVar3;
  iVar3 = (param_2 * iVar3 - ((int)sVar2 * (int)param_3 >> 0xe & 0xfffffffeU)) + 0x7fffffff;
  iVar3 = (int)(short)((uint)iVar3 >> 0x10) * (int)sVar2 +
          ((int)(short)((ushort)iVar3 >> 1) * (int)sVar2 >> 0xf);
  sVar2 = (short)((uint)(iVar3 * 2) >> 0x10);
  sVar1 = (short)((uint)param_1 >> 0x10);
  return ((int)sVar2 * (int)sVar1 + ((int)(short)((ushort)iVar3 & 0x7fff) * (int)sVar1 >> 0xf) +
         ((int)sVar2 * (int)(short)((ushort)param_1 >> 1) >> 0xf)) * 8;
}


// =========================================================================
// Function: tIVXjuHkZlxBWDV_csnqsROpiAEuJpF
// Entry: 0x71af49c8 | Size: 156 bytes
// =========================================================================

undefined4 * tIVXjuHkZlxBWDV_csnqsROpiAEuJpF(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = &DAT_70b13840;
  uVar1 = thunk_MwhHq(1);
  thunk_dweKWzJgHffIolIwVpNgT_OQMpPie(uVar1,DAT_712048f4);
  param_1[6] = 3;
  param_1[4] = 0xff;
  param_1[7] = 9;
  param_1[10] = 0;
  param_1[0xb] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[0xc] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[0xd] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)param_1 + 0x31) = 0;
  *(undefined4 *)((int)param_1 + 0x35) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)param_1 + 0x39) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)param_1 + 0x3d) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined2 *)(param_1 + 9) = 0;
  param_1[8] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[1] = uVar1;
  return param_1;
}


// =========================================================================
// Function: IleWJYODCfsxtPHrhjJVSUuGuzWKvkf
// Entry: 0x71af4a78 | Size: 176 bytes
// =========================================================================

undefined4 * IleWJYODCfsxtPHrhjJVSUuGuzWKvkf(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  *param_1 = &DAT_70b13840;
  if (param_1[0xd] != 0) {
    param_1[0xe] = param_1[0xd];
    thunk_qNQrlu();
  }
  piVar3 = (int *)param_1[10];
  if (piVar3 != (int *)0x0) {
    piVar4 = (int *)param_1[0xb];
    piVar1 = piVar3;
    if (piVar4 != piVar3) {
      do {
        piVar4 = piVar4 + -1;
        iVar2 = *piVar4;
        *piVar4 = 0;
        if (iVar2 != 0) {
          thunk_SIHmzOHkGhPQFMvyfGPIUA_ZWfiuF(*(undefined4 *)(iVar2 + 0x2c));
          thunk_qNQrlu(iVar2);
        }
      } while (piVar4 != piVar3);
      piVar1 = (int *)param_1[10];
    }
    param_1[0xb] = piVar3;
    thunk_qNQrlu(piVar1);
  }
  iVar2 = param_1[1];
  param_1[1] = 0;
  if (iVar2 != 0) {
    thunk_tS_umzWWCiWQRX_wvQPQGsKtMvWrX();
    thunk_qNQrlu();
  }
  return param_1;
}


// =========================================================================
// Function: zzzmIUklRGmRWdYOPpTcWjTdNKwK_YB
// Entry: 0x71af4b30 | Size: 28 bytes
// =========================================================================

void zzzmIUklRGmRWdYOPpTcWjTdNKwK_YB(undefined4 param_1)

{
  thunk_IleWJYODCfsxtPHrhjJVSUuGuzWKvkf();
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: foSgJzvSXtcDcdxygKakuxhZazcwsxJIEVtwWdixPQyzesrtejzKm_dOxcxbWfCzLsXEKPcqRynp
// Entry: 0x71af4b4c | Size: 80 bytes
// =========================================================================

void foSgJzvSXtcDcdxygKakuxhZazcwsxJIEVtwWdixPQyzesrtejzKm_dOxcxbWfCzLsXEKPcqRynp
               (int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x2c) != iVar1) {
    uVar2 = 0;
    do {
      thunk_QRzkEEOnPEfZkDZXuhWZbfOOcGODEZYPPguFzk
                (*(undefined4 *)(*(int *)(iVar1 + uVar2 * 4) + 0x2c),param_2,param_3);
      iVar1 = *(int *)(param_1 + 0x28);
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)(*(int *)(param_1 + 0x2c) - iVar1 >> 2));
  }
  return;
}


// =========================================================================
// Function: MOIfiakmvAxaZQsCGj_kXXDizJvSEYZpaMAOwyzKtfwcfxT_OgOYWolVfCuhXUHXpaRDdyojvyXHjuLYngkSWPXKFGMhxbtYsxdbLlJTpYSdUP
// Entry: 0x71af4b9c | Size: 328 bytes
// =========================================================================

void MOIfiakmvAxaZQsCGj_kXXDizJvSEYZpaMAOwyzKtfwcfxT_OgOYWolVfCuhXUHXpaRDdyojvyXHjuLYngkSWPXKFGMhxbtYsxdbLlJTpYSdUP
               (undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  undefined4 extraout_s1;
  undefined8 uVar12;
  undefined2 auStack_188 [164];
  
  iVar9 = *(int *)(param_3 + 0x1c);
  iVar8 = *(int *)(param_3 + 0x24);
  if (iVar9 == 1) {
    iVar9 = *(int *)(param_3 + 0x28);
    if (*(int *)(param_3 + 0x2c) != 0) {
      iVar9 = *(int *)(param_3 + 0x2c);
    }
    thunk_IhMVvNZFeMzYlwyJKCbIwyfwHELV_iql(**(undefined4 **)(iVar9 + 8),iVar8,auStack_188);
    iVar4 = *(int *)(param_3 + 0x24);
  }
  else if (iVar8 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = iVar8;
    if (iVar9 < 1) {
      imp___aeabi_memclr8(auStack_188,iVar8 << 1);
    }
    else {
      iVar7 = *(int *)(param_3 + 0x28);
      if (*(int *)(param_3 + 0x2c) != 0) {
        iVar7 = *(int *)(param_3 + 0x2c);
      }
      iVar10 = *(int *)(iVar7 + 4);
      iVar7 = 0;
      do {
        iVar5 = 0;
        iVar3 = 0;
        do {
          iVar1 = iVar5 * 4;
          iVar5 = iVar5 + 1;
          fVar11 = *(float *)(*(int *)(iVar10 + iVar1) + iVar7 * 4);
          if (32767.0 < fVar11) {
            fVar11 = 32767.0;
          }
          if (fVar11 < -32768.0) {
            fVar11 = -32768.0;
          }
          uVar12 = VectorBitwiseSelect(0x8000000080000000,CONCAT44(param_2,fVar11),
                                       0x3f0000003f000000);
          iVar3 = iVar3 + (int)(fVar11 + (float)uVar12);
        } while (iVar9 != iVar5);
        uVar2 = FUN_71ba0440(iVar3,iVar9);
        puVar6 = auStack_188 + iVar7;
        iVar7 = iVar7 + 1;
        *puVar6 = uVar2;
        param_2 = extraout_s1;
      } while (iVar7 != iVar8);
    }
  }
  puVar6 = auStack_188;
  param_4[1] = *param_4;
  if (iVar8 == 0) {
    puVar6 = (undefined2 *)0x0;
  }
  thunk_VzLCktuHVYUkPhKjvUpVwqUUDEEItmLrrxiLpIlPHdfTFHKWVgDWUDpllCqajhm_apawOkFboMQCzajYFgysjnTILmhppIDPGtcYSJbFJrxMDDhJTvT
            (param_4,*param_4,puVar6,puVar6 + iVar4,iVar4);
  return;
}


// =========================================================================
// Function: lAqDjEvwkJnGhkjt__AtDwehYRuoJUKxvfiSPbfSQrhTAojXOfktGHHWqjAhtlhDnADu
// Entry: 0x71af4cec | Size: 328 bytes
// =========================================================================

undefined4
lAqDjEvwkJnGhkjt__AtDwehYRuoJUKxvfiSPbfSQrhTAojXOfktGHHWqjAhtlhDnADu(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uStack_3f8;
  undefined1 *puStack_3f4;
  undefined1 *puStack_3f0;
  undefined1 *puStack_3ec;
  undefined1 auStack_3e8 [320];
  undefined1 auStack_2a8 [320];
  undefined1 auStack_168 [324];
  
  puStack_3f4 = auStack_3e8;
  puStack_3ec = auStack_168;
  puStack_3f0 = auStack_2a8;
  if (*(int *)(param_1 + 8) == 0) {
    if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x28)) {
      uVar2 = 0;
      do {
        *(undefined4 *)(*(int *)(param_1 + 0x34) + uVar2 * 4) = *(undefined4 *)(param_1 + 0x20);
        thunk_ihKXvYCwQRrZKHLtNWJWPqzkPDBvVgvCDNKlYRBRetIVnIgCDdRfyR(param_2,uVar2,&puStack_3f4);
        iVar1 = thunk_fJmMQjrijw_xDXyPHFXEUzfEPyYDMPVFLIiBz
                          (*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + uVar2 * 4) + 0x2c),
                           &puStack_3f4,*(undefined4 *)(param_2 + 0x20),
                           *(undefined4 *)(param_2 + 0x24));
        if (iVar1 != 0) {
          return 0xffffffff;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < (uint)(*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) >> 2));
    }
  }
  else if ((*(int *)(param_1 + 8) == 1) && (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x28))) {
    uVar2 = 0;
    do {
      uStack_3f8 = 0;
      thunk_ihKXvYCwQRrZKHLtNWJWPqzkPDBvVgvCDNKlYRBRetIVnIgCDdRfyR(param_2,uVar2,&puStack_3f4);
      iVar1 = thunk_ARGrIETXWgtn_gQyszvSqlUEQkQrnUvjQtzjraQNTjva
                        (*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + uVar2 * 4) + 0x2c),
                         &puStack_3f4,*(undefined4 *)(param_2 + 0x20),
                         *(undefined4 *)(param_2 + 0x24),*(undefined4 *)(param_1 + 0x20),&uStack_3f8
                        );
      *(undefined4 *)(*(int *)(param_1 + 0x34) + uVar2 * 4) = uStack_3f8;
      if (iVar1 != 0) {
        return 0xffffffff;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)(*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) >> 2));
  }
  return 0;
}


// =========================================================================
// Function: HrpSS_fCRSwSMHPycZzrnIJDoVFPfPdqpNdaGrGnxnIudxeAqRePKwHCwfrPIOmLMdnr
// Entry: 0x71af4e34 | Size: 1732 bytes
// =========================================================================

/* WARNING: Restarted to delay deadcode elimination for space: register */

int HrpSS_fCRSwSMHPycZzrnIJDoVFPfPdqpNdaGrGnxnIudxeAqRePKwHCwfrPIOmLMdnr
              (int param_1,int param_2,undefined4 param_3,uint param_4)

{
  undefined1 auVar1 [16];
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  float *pfVar12;
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  int iVar15;
  undefined1 (*pauVar16) [16];
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  bool bVar21;
  bool bVar22;
  uint in_fpscr;
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
  undefined8 uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined8 *puStack_418;
  undefined1 *puStack_414;
  undefined1 *puStack_410;
  undefined8 uStack_40c;
  undefined8 uStack_404;
  undefined8 uStack_3fc;
  undefined8 uStack_3f4;
  float fStack_3ec;
  float fStack_3e8;
  float fStack_3e4;
  undefined1 auStack_2cc [320];
  undefined1 auStack_18c [324];
  
  iVar3 = *(int *)(param_1 + 8);
  bVar21 = iVar3 == 0;
  if (bVar21) {
    param_4 = (uint)*(byte *)(param_1 + 0x24);
    iVar3 = -0xb;
  }
  if (bVar21 && param_4 == 0) {
    return iVar3;
  }
  bVar21 = false;
  iVar3 = *(int *)(param_1 + 0x2c);
  *(undefined1 *)(param_1 + 0x25) = 0;
  if (iVar3 == *(int *)(param_1 + 0x28)) {
    uVar10 = 0;
    bVar21 = false;
LAB_71af4fc4:
    uVar9 = 0;
    if (uVar10 == 0) {
      if (*(int *)(param_1 + 8) == 0) {
        *(undefined4 *)(param_1 + 0x20) = **(undefined4 **)(param_1 + 0x34);
      }
      goto LAB_71af54e8;
    }
  }
  else {
    uVar9 = 0;
    do {
      puStack_418 = &uStack_40c;
      puStack_414 = auStack_2cc;
      puStack_410 = auStack_18c;
      thunk_ihKXvYCwQRrZKHLtNWJWPqzkPDBvVgvCDNKlYRBRetIVnIgCDdRfyR(param_2,uVar9,&puStack_418);
      iVar3 = thunk_inMgZnfBNOSSOpDtueBvETeEtOBwuixuHGVFhUhTMooCyqmP
                        (*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + uVar9 * 4) + 0x2c),
                         &puStack_418,*(undefined4 *)(param_2 + 0x20),
                         *(undefined4 *)(param_2 + 0x24));
      bVar21 = (bool)(bVar21 | iVar3 != 0);
      uVar2 = *(undefined1 *)(param_1 + 0x25);
      *(undefined4 *)(*(int *)(param_1 + 0x34) + uVar9 * 4) = 0;
      iVar3 = *(int *)(param_1 + 0x28);
      uVar9 = uVar9 + 1;
      *(undefined1 *)(param_1 + 0x25) = uVar2;
      uVar10 = *(int *)(param_1 + 0x2c) - iVar3 >> 2;
    } while (uVar9 < uVar10);
    if (uVar10 < 2) goto LAB_71af4fc4;
    uVar9 = 0;
    uVar4 = 1;
    do {
      if (*(int *)(*(int *)(iVar3 + uVar9 * 4) + 0x28) <
          *(int *)(*(int *)(iVar3 + uVar4 * 4) + 0x28)) {
        uVar9 = uVar4;
      }
      uVar4 = uVar4 + 1;
    } while (uVar10 != uVar4);
  }
  iVar6 = *(int *)(param_2 + 0x2c);
  iVar15 = *(int *)(param_2 + 0x20);
  auVar1._8_8_ = 0x3780000037800000;
  auVar1._0_8_ = 0x3780000037800000;
  fVar24 = -32768.0;
  fVar26 = 32767.0;
  uVar4 = 0;
  do {
    pauVar13 = *(undefined1 (**) [16])(iVar3 + uVar9 * 4);
    fVar28 = (float)VectorSignedToFloat(*(undefined4 *)(pauVar13[2] + 4),
                                        (byte)(in_fpscr >> 0x16) & 3);
    iVar11 = *(int *)(param_2 + 0x28);
    if (iVar6 != 0) {
      iVar11 = iVar6;
    }
    auVar37 = FixedToFP(*pauVar13,0,0,0,0x20);
    auVar38 = FixedToFP(pauVar13[1],0,0,0,0x20);
    fVar30 = (float)VectorSignedToFloat(*(undefined4 *)(pauVar13[2] + 8),
                                        (byte)(in_fpscr >> 0x16) & 3);
    fVar33 = (float)VectorSignedToFloat(*(undefined4 *)pauVar13[2],(byte)(in_fpscr >> 0x16) & 3);
    iVar7 = *(int *)(iVar11 + 8);
    iVar11 = *(int *)(iVar11 + 0x1c);
    auVar38 = FloatVectorMult(auVar38,auVar1,2,0x20);
    auVar37 = FloatVectorMult(auVar37,auVar1,2,0x20);
    uStack_3fc = auVar38._0_8_;
    uStack_3f4 = auVar38._8_8_;
    uStack_40c = auVar37._0_8_;
    uStack_404 = auVar37._8_8_;
    fStack_3e8 = fVar28 * 1.5258789e-05;
    fStack_3e4 = fVar30 * 1.5258789e-05;
    fStack_3ec = fVar33 * 1.5258789e-05;
    if (iVar15 != 0) {
      iVar18 = 0;
      do {
        iVar19 = *(int *)(iVar7 + iVar11 * uVar4 * 4 + iVar18 * 4);
        iVar17 = 0;
        pfVar8 = (float *)((int)&uStack_40c + 4);
        do {
          pfVar12 = (float *)(iVar19 + iVar17);
          fVar31 = pfVar8[-1];
          fVar28 = *pfVar8;
          pfVar8 = pfVar8 + 1;
          iVar17 = iVar17 + 0x40;
          fVar33 = (fVar28 - fVar31) * 0.0625;
          fVar35 = fVar33 + fVar31 + fVar33;
          fVar34 = (fVar31 + fVar33) * pfVar12[1];
          fVar30 = fVar33 + fVar35;
          fVar28 = fVar24;
          if (-32768.0 < fVar31 * *pfVar12) {
            fVar28 = fVar31 * *pfVar12;
          }
          fVar35 = fVar35 * pfVar12[2];
          fVar23 = fVar33 + fVar30;
          fVar30 = fVar30 * pfVar12[3];
          fVar25 = fVar33 + fVar23;
          fVar23 = fVar23 * pfVar12[4];
          fVar27 = fVar33 + fVar25;
          fVar31 = fVar24;
          if (-32768.0 < fVar34) {
            fVar31 = fVar34;
          }
          fVar25 = fVar25 * pfVar12[5];
          fVar32 = fVar33 + fVar27;
          fVar27 = fVar27 * pfVar12[6];
          fVar29 = fVar32 * pfVar12[7];
          fVar32 = fVar33 + fVar32;
          fVar34 = fVar24;
          if (-32768.0 < fVar35) {
            fVar34 = fVar35;
          }
          fVar35 = fVar24;
          if (-32768.0 < fVar30) {
            fVar35 = fVar30;
          }
          fVar30 = fVar24;
          if (-32768.0 < fVar23) {
            fVar30 = fVar23;
          }
          fVar23 = fVar24;
          if (-32768.0 < fVar25) {
            fVar23 = fVar25;
          }
          fVar25 = fVar24;
          if (-32768.0 < fVar27) {
            fVar25 = fVar27;
          }
          fVar27 = fVar26;
          if (fVar28 < 32767.0) {
            fVar27 = fVar28;
          }
          *pfVar12 = fVar27;
          fVar28 = fVar24;
          if (-32768.0 < fVar29) {
            fVar28 = fVar29;
          }
          fVar27 = fVar26;
          if (fVar31 < 32767.0) {
            fVar27 = fVar31;
          }
          pfVar12[1] = fVar27;
          fVar31 = fVar26;
          if (fVar34 < 32767.0) {
            fVar31 = fVar34;
          }
          pfVar12[2] = fVar31;
          fVar31 = fVar26;
          if (fVar35 < 32767.0) {
            fVar31 = fVar35;
          }
          pfVar12[3] = fVar31;
          fVar34 = fVar32 * pfVar12[8];
          fVar32 = fVar33 + fVar32;
          fVar31 = fVar26;
          if (fVar30 < 32767.0) {
            fVar31 = fVar30;
          }
          pfVar12[4] = fVar31;
          fVar30 = fVar26;
          if (fVar23 < 32767.0) {
            fVar30 = fVar23;
          }
          pfVar12[5] = fVar30;
          fVar30 = fVar26;
          if (fVar25 < 32767.0) {
            fVar30 = fVar25;
          }
          pfVar12[6] = fVar30;
          fVar30 = fVar26;
          if (fVar28 < 32767.0) {
            fVar30 = fVar28;
          }
          pfVar12[7] = fVar30;
          fVar28 = fVar24;
          if (-32768.0 < fVar34) {
            fVar28 = fVar34;
          }
          fVar30 = fVar26;
          if (fVar28 < 32767.0) {
            fVar30 = fVar28;
          }
          pfVar12[8] = fVar30;
          fVar30 = fVar32 * pfVar12[9];
          fVar32 = fVar33 + fVar32;
          fVar28 = fVar24;
          if (-32768.0 < fVar30) {
            fVar28 = fVar30;
          }
          fVar30 = fVar26;
          if (fVar28 < 32767.0) {
            fVar30 = fVar28;
          }
          pfVar12[9] = fVar30;
          fVar30 = fVar32 * pfVar12[10];
          fVar32 = fVar33 + fVar32;
          fVar28 = fVar24;
          if (-32768.0 < fVar30) {
            fVar28 = fVar30;
          }
          fVar30 = fVar26;
          if (fVar28 < 32767.0) {
            fVar30 = fVar28;
          }
          pfVar12[10] = fVar30;
          fVar30 = fVar32 * pfVar12[0xb];
          fVar32 = fVar33 + fVar32;
          fVar28 = fVar24;
          if (-32768.0 < fVar30) {
            fVar28 = fVar30;
          }
          fVar30 = fVar26;
          if (fVar28 < 32767.0) {
            fVar30 = fVar28;
          }
          pfVar12[0xb] = fVar30;
          fVar30 = fVar32 * pfVar12[0xc];
          fVar32 = fVar33 + fVar32;
          fVar28 = fVar24;
          if (-32768.0 < fVar30) {
            fVar28 = fVar30;
          }
          fVar30 = fVar26;
          if (fVar28 < 32767.0) {
            fVar30 = fVar28;
          }
          pfVar12[0xc] = fVar30;
          fVar30 = fVar32 * pfVar12[0xd];
          fVar32 = fVar33 + fVar32;
          fVar28 = fVar24;
          if (-32768.0 < fVar30) {
            fVar28 = fVar30;
          }
          fVar30 = fVar26;
          if (fVar28 < 32767.0) {
            fVar30 = fVar28;
          }
          pfVar12[0xd] = fVar30;
          fVar31 = fVar32 * pfVar12[0xe];
          fVar30 = (fVar33 + fVar32) * pfVar12[0xf];
          fVar28 = fVar24;
          if (-32768.0 < fVar31) {
            fVar28 = fVar31;
          }
          fVar33 = fVar26;
          if (fVar28 < 32767.0) {
            fVar33 = fVar28;
          }
          pfVar12[0xe] = fVar33;
          fVar28 = fVar24;
          if (-32768.0 < fVar30) {
            fVar28 = fVar30;
          }
          in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar28 < 32767.0) << 0x1f;
          fVar30 = fVar26;
          if (SUB41(in_fpscr >> 0x1f,0)) {
            fVar30 = fVar28;
          }
          pfVar12[0xf] = fVar30;
        } while (iVar17 != 0x280);
        iVar18 = iVar18 + 1;
      } while (iVar18 != iVar15);
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 != uVar10);
  if (*(int *)(param_1 + 8) == 0) {
    piVar5 = *(int **)(param_1 + 0x34);
    iVar3 = *piVar5;
    pauVar13 = (undefined1 (*) [16])(param_1 + 0x20);
    *(int *)*pauVar13 = iVar3;
    if (1 < uVar10) {
      uVar9 = 1;
      if (8 < uVar10) {
        pauVar14 = (undefined1 (*) [16])(piVar5 + uVar10);
        pauVar16 = (undefined1 (*) [16])(piVar5 + 1);
        bVar22 = pauVar13 < pauVar14;
        if (bVar22) {
          pauVar14 = (undefined1 (*) [16])(param_1 + 0x24);
        }
        if (!bVar22 || pauVar14 <= pauVar16) {
          uVar20 = uVar10 - 1 & 0xfffffffc;
          auVar37._8_8_ = CONCAT44(iVar3,iVar3);
          auVar37._0_8_ = CONCAT44(iVar3,iVar3);
          uVar9 = uVar20 | 1;
          uVar4 = uVar20;
          do {
            auVar1 = *pauVar16;
            pauVar16 = pauVar16 + 1;
            uVar4 = uVar4 - 4;
            auVar37 = VectorMin(auVar1,auVar37,4,0);
          } while (uVar4 != 0);
          uVar36 = VectorPairwiseMin(auVar37._0_8_,auVar37._8_8_,4,0);
          uVar36 = VectorPairwiseMin(uVar36,uVar36,4,0);
          iVar3 = (int)uVar36;
          *(int *)*pauVar13 = iVar3;
          if (uVar10 - 1 == uVar20) goto LAB_71af54e8;
        }
      }
      iVar6 = uVar10 - uVar9;
      piVar5 = piVar5 + uVar9;
      do {
        if (*piVar5 < iVar3) {
          iVar3 = *piVar5;
        }
        iVar6 = iVar6 + -1;
        *(int *)*pauVar13 = iVar3;
        piVar5 = piVar5 + 1;
      } while (iVar6 != 0);
    }
  }
LAB_71af54e8:
  iVar3 = -1;
  if (!bVar21) {
    iVar3 = 0;
    *(undefined1 *)(param_1 + 0x24) = 0;
  }
  return iVar3;
}


// =========================================================================
// Function: XkPJXxsIrXmFjhnpNVCGwxljvdZmTQcLssKicmxDMpKWDVYgGErjwt
// Entry: 0x71af5508 | Size: 56 bytes
// =========================================================================

undefined4 XkPJXxsIrXmFjhnpNVCGwxljvdZmTQcLssKicmxDMpKWDVYgGErjwt(int param_1,int param_2)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 0x24) = 1;
  uVar1 = 0xfffffffa;
  if ((*(int *)(param_1 + 0xc) <= param_2) && (param_2 <= *(int *)(param_1 + 0x10))) {
    uVar1 = 0;
    *(int *)(param_1 + 0x20) = param_2;
  }
  return uVar1;
}


// =========================================================================
// Function: vIGCINoeIUyVXLptybEgOpHdpIvILvflebtITrSbNrRYadDnaMl
// Entry: 0x71af5540 | Size: 8 bytes
// =========================================================================

undefined4 vIGCINoeIUyVXLptybEgOpHdpIvILvflebtITrSbNrRYadDnaMl(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}


// =========================================================================
// Function: XZJMzSvrfnzAy_wjzeivvtvbLIFTcVVwYWNMdZCZaYzWOchzIdcJRZuRUQk
// Entry: 0x71af5548 | Size: 56 bytes
// =========================================================================

undefined4 XZJMzSvrfnzAy_wjzeivvtvbLIFTcVVwYWNMdZCZaYzWOchzIdcJRZuRUQk(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xfffffffa;
  if (param_2 < 3) {
    *(uint *)(param_1 + 8) = param_2;
    thunk_KlXHqdldWMPYmknLmJhvP_CbBjxJXVOlUNjigsajAa
              (param_1,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
    uVar1 = 0;
  }
  return uVar1;
}


// =========================================================================
// Function: KlXHqdldWMPYmknLmJhvP_CbBjxJXVOlUNjigsajAa
// Entry: 0x71af5580 | Size: 516 bytes
// =========================================================================

void KlXHqdldWMPYmknLmJhvP_CbBjxJXVOlUNjigsajAa(int param_1,uint param_2,undefined4 param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  
  iVar6 = *(int *)(param_1 + 0x28);
  piVar7 = *(int **)(param_1 + 0x2c);
  *(undefined1 *)(param_1 + 0x4c) = 1;
  *(undefined1 *)(param_1 + 0x44) = 1;
  *(undefined4 *)(param_1 + 0x48) = param_3;
  uVar9 = (int)piVar7 - iVar6 >> 2;
  *(uint *)(param_1 + 0x40) = param_2;
  if (uVar9 < param_2) {
    FUN_71af61cc((int *)(param_1 + 0x28),param_2 - uVar9);
  }
  else if (param_2 < uVar9) {
    piVar8 = (int *)(iVar6 + param_2 * 4);
    while (piVar7 != piVar8) {
      piVar7 = piVar7 + -1;
      iVar6 = *piVar7;
      *piVar7 = 0;
      if (iVar6 != 0) {
        thunk_SIHmzOHkGhPQFMvyfGPIUA_ZWfiuF(*(undefined4 *)(iVar6 + 0x2c));
        thunk_qNQrlu(iVar6);
      }
    }
    *(int **)(param_1 + 0x2c) = piVar8;
  }
  iVar6 = *(int *)(param_1 + 0x34);
  uVar5 = *(uint *)(param_1 + 0x40);
  uVar9 = *(int *)(param_1 + 0x38) - iVar6 >> 2;
  if (uVar9 < uVar5) {
    FUN_71af6408((int *)(param_1 + 0x34),uVar5 - uVar9);
    iVar6 = *(int *)(param_1 + 0x28);
    if (*(int *)(param_1 + 0x2c) == iVar6) {
      return;
    }
  }
  else {
    if (uVar5 < uVar9) {
      *(uint *)(param_1 + 0x38) = iVar6 + uVar5 * 4;
    }
    iVar6 = *(int *)(param_1 + 0x28);
    if (*(int *)(param_1 + 0x2c) == iVar6) {
      return;
    }
  }
  uVar9 = 0;
  do {
    if (*(int *)(iVar6 + uVar9 * 4) == 0) {
      iVar3 = thunk_MwhHq(0x30);
      iVar4 = thunk_rSORcIvqrTcGgSKdWubshNQztkTsuH();
      *(int *)(iVar3 + 0x2c) = iVar4;
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
                  (s_____webrtc_apm_src_webrtc_module_70067c09,0x4e,s_state_7006587f,&DAT_7009602d);
      }
      iVar4 = *(int *)(iVar6 + uVar9 * 4);
      *(int *)(iVar6 + uVar9 * 4) = iVar3;
      if (iVar4 != 0) {
        thunk_SIHmzOHkGhPQFMvyfGPIUA_ZWfiuF(*(undefined4 *)(iVar4 + 0x2c));
        thunk_qNQrlu(iVar4);
      }
    }
    uVar5 = 0xffffffff;
    if (*(uint *)(param_1 + 8) < 3) {
      uVar5 = *(uint *)(param_1 + 8) + 1;
    }
    thunk_gGMWhBzPQwqZHtAboZSSYkhOhldYhaGD_
              (*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + uVar9 * 4) + 0x2c),
               *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),(int)(short)uVar5,
               *(undefined4 *)(param_1 + 0x48));
    iVar6 = *(int *)(param_1 + 0x28);
    iVar3 = *(int *)(param_1 + 0x2c);
    *(undefined4 *)(*(int *)(param_1 + 0x34) + uVar9 * 4) = *(undefined4 *)(param_1 + 0x20);
    uVar9 = uVar9 + 1;
  } while (uVar9 < (uint)(iVar3 - iVar6 >> 2));
  if (iVar3 != iVar6) {
    iVar3 = *(int *)(param_1 + 0x1c);
    uVar9 = 0;
    uVar2 = *(ushort *)(param_1 + 0x18);
    bVar1 = *(byte *)(param_1 + 0x14);
    do {
      uVar5 = uVar5 & 0xffff0000 | (uint)bVar1;
      thunk_fUmBUDwwcvgcmwGWuOVjLILLOMZzjMILcWZQHpJpCYHkygqRigaSG_CH
                (*(undefined4 *)(*(int *)(iVar6 + uVar9 * 4) + 0x2c),(uint)uVar2 | iVar3 << 0x10,
                 uVar5);
      iVar6 = *(int *)(param_1 + 0x28);
      uVar9 = uVar9 + 1;
    } while (uVar9 < (uint)(*(int *)(param_1 + 0x2c) - iVar6 >> 2));
  }
  return;
}


// =========================================================================
// Function: rBoKkdZrhWwWIzfcVCWIKqEPLXFqKIOIQVGAreAltnXVqSQkkv_rzs_
// Entry: 0x71af57b0 | Size: 80 bytes
// =========================================================================

undefined4
rBoKkdZrhWwWIzfcVCWIKqEPLXFqKIOIQVGAreAltnXVqSQkkv_rzs_(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0xfffffffa;
  if (param_3 < param_2) {
    return 0xfffffffa;
  }
  if ((-1 < param_2) && (param_3 < 0x10000)) {
    *(int *)(param_1 + 0xc) = param_2;
    *(int *)(param_1 + 0x10) = param_3;
    thunk_KlXHqdldWMPYmknLmJhvP_CbBjxJXVOlUNjigsajAa
              (param_1,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
    uVar1 = 0;
  }
  return uVar1;
}


// =========================================================================
// Function: Jc_QtwFJsYLQyDHCmYpMNhBnpczCgrxQmcSUVrMyKqbnyPGpvkrw
// Entry: 0x71af5800 | Size: 132 bytes
// =========================================================================

int Jc_QtwFJsYLQyDHCmYpMNhBnpczCgrxQmcSUVrMyKqbnyPGpvkrw(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint unaff_r7;
  
  iVar5 = -6;
  if (param_2 < 0x20) {
    iVar4 = *(int *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x18) = param_2;
    if (*(int *)(param_1 + 0x2c) == iVar4) {
      return 0;
    }
    iVar2 = *(int *)(param_1 + 0x1c);
    iVar5 = 0;
    bVar1 = *(byte *)(param_1 + 0x14);
    uVar6 = 0;
    do {
      unaff_r7 = unaff_r7 & 0xffff0000 | (uint)bVar1;
      iVar3 = thunk_fUmBUDwwcvgcmwGWuOVjLILLOMZzjMILcWZQHpJpCYHkygqRigaSG_CH
                        (*(undefined4 *)(*(int *)(iVar4 + uVar6 * 4) + 0x2c),param_2 | iVar2 << 0x10
                         ,unaff_r7);
      iVar4 = *(int *)(param_1 + 0x28);
      if (iVar3 != 0) {
        iVar5 = iVar3;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)(*(int *)(param_1 + 0x2c) - iVar4 >> 2));
  }
  return iVar5;
}


// =========================================================================
// Function: uwzjhDphiTQKXvvZEKvKdDyLQDGegntXmCuvpzA
// Entry: 0x71af5884 | Size: 124 bytes
// =========================================================================

int uwzjhDphiTQKXvvZEKvKdDyLQDGegntXmCuvpzA(int param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint unaff_r7;
  
  iVar5 = *(int *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x2c) != iVar5) {
    iVar3 = *(int *)(param_1 + 0x1c);
    uVar2 = *(ushort *)(param_1 + 0x18);
    iVar6 = 0;
    bVar1 = *(byte *)(param_1 + 0x14);
    uVar7 = 0;
    do {
      unaff_r7 = unaff_r7 & 0xffff0000 | (uint)bVar1;
      iVar4 = thunk_fUmBUDwwcvgcmwGWuOVjLILLOMZzjMILcWZQHpJpCYHkygqRigaSG_CH
                        (*(undefined4 *)(*(int *)(iVar5 + uVar7 * 4) + 0x2c),
                         (uint)uVar2 | iVar3 << 0x10,unaff_r7);
      iVar5 = *(int *)(param_1 + 0x28);
      if (iVar4 != 0) {
        iVar6 = iVar4;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)(*(int *)(param_1 + 0x2c) - iVar5 >> 2));
    return iVar6;
  }
  return 0;
}


// =========================================================================
// Function: VpzWwRqcVVUHmHGkoSTEcrmIGbmgjbFzeK_xICOTvn_EzvKJboVoAw
// Entry: 0x71af5900 | Size: 212 bytes
// =========================================================================

int VpzWwRqcVVUHmHGkoSTEcrmIGbmgjbFzeK_xICOTvn_EzvKJboVoAw(int param_1,uint param_2)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint unaff_r7;
  
  if (param_2 < 0x5b) {
    iVar3 = *(int *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x1c) = param_2;
    if (*(int *)(param_1 + 0x2c) == iVar3) {
      return 0;
    }
    uVar2 = *(ushort *)(param_1 + 0x18);
    iVar5 = 0;
    bVar1 = *(byte *)(param_1 + 0x14);
    uVar6 = 0;
    do {
      unaff_r7 = unaff_r7 & 0xffff0000 | (uint)bVar1;
      iVar4 = thunk_fUmBUDwwcvgcmwGWuOVjLILLOMZzjMILcWZQHpJpCYHkygqRigaSG_CH
                        (*(undefined4 *)(*(int *)(iVar3 + uVar6 * 4) + 0x2c),
                         (uint)uVar2 | param_2 << 0x10,unaff_r7);
      iVar3 = *(int *)(param_1 + 0x28);
      if (iVar4 != 0) {
        iVar5 = iVar4;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)(*(int *)(param_1 + 0x2c) - iVar3 >> 2));
  }
  else {
    iVar5 = -6;
    iVar3 = thunk_lilHXuZEhneNWPvoAPfLvmvCz_RFvgfbGZxzMxlM_ANPGdDNhYcwail();
    if (iVar3 == 0) {
      thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
                (&DAT_700957ed,s_____webrtc_apm_src_webrtc_module_70067c09,0x9cb,
                 s_set_compression_gain_db__70063a42,param_2,s___failed__700617cc);
    }
  }
  return iVar5;
}


// =========================================================================
// Function: HEdNbCyfJUPQUqMuaVbGwNnNdkZYcOXGIuAbdheNcCLYJ
// Entry: 0x71af59e4 | Size: 124 bytes
// =========================================================================

int HEdNbCyfJUPQUqMuaVbGwNnNdkZYcOXGIuAbdheNcCLYJ(int param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint unaff_r4;
  int iVar5;
  uint uVar6;
  
  iVar4 = *(int *)(param_1 + 0x28);
  *(char *)(param_1 + 0x14) = (char)param_2;
  if (*(int *)(param_1 + 0x2c) != iVar4) {
    iVar2 = *(int *)(param_1 + 0x1c);
    uVar1 = *(ushort *)(param_1 + 0x18);
    iVar5 = 0;
    uVar6 = 0;
    do {
      unaff_r4 = unaff_r4 & 0xffff0000 | param_2;
      iVar3 = thunk_fUmBUDwwcvgcmwGWuOVjLILLOMZzjMILcWZQHpJpCYHkygqRigaSG_CH
                        (*(undefined4 *)(*(int *)(iVar4 + uVar6 * 4) + 0x2c),
                         (uint)uVar1 | iVar2 << 0x10,unaff_r4);
      iVar4 = *(int *)(param_1 + 0x28);
      if (iVar3 != 0) {
        iVar5 = iVar3;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)(*(int *)(param_1 + 0x2c) - iVar4 >> 2));
    return iVar5;
  }
  return 0;
}


// =========================================================================
// Function: uSiWkAwxCBrHcMyxmUfCXEZeRNlMZOW_oGW
// Entry: 0x71af60ec | Size: 8 bytes
// =========================================================================

undefined4 uSiWkAwxCBrHcMyxmUfCXEZeRNlMZOW_oGW(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


// =========================================================================
// Function: qAYpmeyAPboNZAUgSTYcKTqUFCPsXzSTvxQddyCUyJZrPDvLO
// Entry: 0x71af610c | Size: 8 bytes
// =========================================================================

undefined4 qAYpmeyAPboNZAUgSTYcKTqUFCPsXzSTvxQddyCUyJZrPDvLO(int param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}


// =========================================================================
// Function: tCxVlMDEXtBduyBDZXKqFMZkAfoqFLzCOUDopJQbqMIwoLLVCrc
// Entry: 0x71af612c | Size: 8 bytes
// =========================================================================

undefined4 tCxVlMDEXtBduyBDZXKqFMZkAfoqFLzCOUDopJQbqMIwoLLVCrc(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}


// =========================================================================
// Function: PBZbpwqrEVgcDaHPkHorXtJTKFZgBqNARMUxxipPhEDMxuGVVq
// Entry: 0x71af614c | Size: 8 bytes
// =========================================================================

undefined1 PBZbpwqrEVgcDaHPkHorXtJTKFZgBqNARMUxxipPhEDMxuGVVq(int param_1)

{
  return *(undefined1 *)(param_1 + 0x14);
}


// =========================================================================
// Function: GqfgNWmcmlLgpnQyCTJJtSVLBNzBhdamLmCcDqHCaMADJHWhOlKB
// Entry: 0x71af616c | Size: 8 bytes
// =========================================================================

undefined4 GqfgNWmcmlLgpnQyCTJJtSVLBNzBhdamLmCcDqHCaMADJHWhOlKB(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


// =========================================================================
// Function: KHFuFfVbejFFowJWSXteSrteHgzEdnlfXkiqWlvFACyNtvFuuiXx
// Entry: 0x71af618c | Size: 8 bytes
// =========================================================================

undefined4 KHFuFfVbejFFowJWSXteSrteHgzEdnlfXkiqWlvFACyNtvFuuiXx(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}


// =========================================================================
// Function: PzXIrjgHMrsPHocLgwdMCvmKmHRpAIXDOzUHbGepxKXjMmeXDup
// Entry: 0x71af61ac | Size: 8 bytes
// =========================================================================

undefined1 PzXIrjgHMrsPHocLgwdMCvmKmHRpAIXDOzUHbGepxKXjMmeXDup(int param_1)

{
  return *(undefined1 *)(param_1 + 0x25);
}


// =========================================================================
// Function: FUN_71af61cc
// Entry: 0x71af61cc | Size: 248 bytes
// =========================================================================

void FUN_71af61cc(int *param_1,uint param_2)

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
      if (0x3fffffff < uVar5) goto LAB_71af62c0;
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
  FUN_71af63a0(param_1);
LAB_71af62c0:
                    /* WARNING: Subroutine does not return */
  FUN_719fe2ec();
}


// =========================================================================
// Function: FUN_71af63a0
// Entry: 0x71af63a0 | Size: 20 bytes
// =========================================================================

void FUN_71af63a0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_71af6408
// Entry: 0x71af6408 | Size: 248 bytes
// =========================================================================

void FUN_71af6408(int *param_1,uint param_2)

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
  if (0x3fffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_71a0f1b4(param_1);
  }
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
    if (0x3fffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_719fe2ec();
    }
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


// =========================================================================
// Function: fJmMQjrijw_xDXyPHFXEUzfEPyYDMPVFLIiBz
// Entry: 0x71af65e0 | Size: 2164 bytes
// =========================================================================

undefined4 fJmMQjrijw_xDXyPHFXEUzfEPyYDMPVFLIiBz(int *param_1,int *param_2,int param_3,int param_4)

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
// Function: QRzkEEOnPEfZkDZXuhWZbfOOcGODEZYPPguFzk
// Entry: 0x71af6e58 | Size: 84 bytes
// =========================================================================

undefined4
QRzkEEOnPEfZkDZXuhWZbfOOcGODEZYPPguFzk(int *param_1,undefined4 param_2,int param_3,int param_4)

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
// Function: nabRLsMCXbrJdmVHNmBDzIP_DRJanPaqXsLLMLnOcOA
// Entry: 0x71af6eac | Size: 88 bytes
// =========================================================================

undefined4
nabRLsMCXbrJdmVHNmBDzIP_DRJanPaqXsLLMLnOcOA(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0xffffffff;
  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  iVar2 = *param_1;
  if (iVar2 < 32000) {
    if (iVar2 == 8000) {
      if (param_2 == 0x50) {
        uVar1 = 0;
      }
      return uVar1;
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
  if (param_2 != 0xa0) {
    return 0xffffffff;
  }
  return 0;
}


// =========================================================================
// Function: ARGrIETXWgtn_gQyszvSqlUEQkQrnUvjQtzjraQNTjva
// Entry: 0x71af6f04 | Size: 776 bytes
// =========================================================================

undefined4
ARGrIETXWgtn_gQyszvSqlUEQkQrnUvjQtzjraQNTjva
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
// Function: ZiKtxqlAToxwSAIYKT_tRsRMJyFbwRtZMAlYCsBlJRenwYnMmmQmmyobn
// Entry: 0x71af7230 | Size: 152 bytes
// =========================================================================

void ZiKtxqlAToxwSAIYKT_tRsRMJyFbwRtZMAlYCsBlJRenwYnMmmQmmyobn(int param_1)

{
  uint uVar1;
  short sVar2;
  bool bVar3;
  
  uVar1 = thunk_pkssPMrNPDLQFdaDueUBWnjkb((int)(short)(*(short *)(param_1 + 4) * 5 + 5),0xb);
  sVar2 = (short)uVar1 + 4;
  if (0x7ffb < uVar1) {
    sVar2 = 4;
  }
  bVar3 = *(short *)(param_1 + 8) == 3;
  if (bVar3) {
    uVar1 = (uint)*(ushort *)(param_1 + 4);
  }
  *(short *)(param_1 + 0x3a) = sVar2;
  if (bVar3) {
    *(short *)(param_1 + 0x3a) = (short)uVar1;
  }
  *(undefined4 *)(param_1 + 0x5c) = 0x101cfec;
  *(undefined4 *)(param_1 + 0x60) = 0xa2ab20;
  *(undefined4 *)(param_1 + 0x30) = 0x287984c;
  *(undefined4 *)(param_1 + 0x34) = 0x40c270;
  *(undefined2 *)(param_1 + 0x38) = 0x14;
  *(undefined8 *)(param_1 + 0x1c) = 0x101cfec00ccc996;
  *(undefined8 *)(param_1 + 0x24) = 0x14490fc00a2ab20;
  *(undefined4 *)(param_1 + 0x2c) = 0x813652;
  return;
}


// =========================================================================
// Function: AXMdqTMKBo_hwuMvlrkQGlBdjxNFInCshHknfsjsgorwuxkRHeAzdeWp
// Entry: 0x71af72e0 | Size: 216 bytes
// =========================================================================

void AXMdqTMKBo_hwuMvlrkQGlBdjxNFInCshHknfsjsgorwuxkRHeAzdeWp
               (int param_1,undefined1 *param_2,int *param_3)

{
  int iVar1;
  short *psVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  psVar2 = (short *)(param_1 + 0x116);
  sVar3 = *psVar2;
  if (0x36b < *param_3 >> 0x14) {
    sVar3 = sVar3 + (short)(*param_3 >> 0x14);
  }
  if (0x36b < param_3[1] >> 0x14) {
    sVar3 = sVar3 + (short)(param_3[1] >> 0x14);
  }
  iVar6 = param_3[4];
  iVar1 = param_3[3] >> 0x14;
  if (0x36b < param_3[2] >> 0x14) {
    sVar3 = sVar3 + (short)(param_3[2] >> 0x14);
  }
  iVar5 = param_3[5];
  if (0x36b < iVar1) {
    sVar3 = sVar3 + (short)(param_3[3] >> 0x14);
  }
  iVar4 = param_3[6];
  iVar7 = param_3[7];
  iVar8 = param_3[8];
  if (0x36b < iVar1) {
    *psVar2 = sVar3;
  }
  if (0x36b < iVar6 >> 0x14) {
    sVar3 = sVar3 + (short)(iVar6 >> 0x14);
  }
  if (0x36b < iVar5 >> 0x14) {
    sVar3 = sVar3 + (short)(iVar5 >> 0x14);
  }
  if (0x36b < iVar4 >> 0x14) {
    sVar3 = sVar3 + (short)(iVar4 >> 0x14);
  }
  if (0x36b < iVar7 >> 0x14) {
    sVar3 = sVar3 + (short)(iVar7 >> 0x14);
  }
  if (0x36b < iVar8 >> 0x14) {
    sVar3 = sVar3 + (short)(iVar8 >> 0x14);
  }
  if (0x36b < param_3[9] >> 0x14) {
    sVar3 = sVar3 + (short)(param_3[9] >> 0x14);
  }
  if (25000 < sVar3) {
    *param_2 = 1;
    sVar3 = 0;
  }
  *psVar2 = (short)((uint)(sVar3 * 0x7eb8) >> 0xf);
  return;
}


// =========================================================================
// Function: AChutoHiBDbsuPtrdQStKKucmGbHWSnOXhIrfvwuAZOXeBdPOdy
// Entry: 0x71af73b8 | Size: 284 bytes
// =========================================================================

void AChutoHiBDbsuPtrdQStKKucmGbHWSnOXhIrfvwuAZOXeBdPOdy(int param_1,int *param_2,uint *param_3)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  short *psVar21;
  bool bVar22;
  
  uVar4 = *param_3;
  uVar19 = param_3[1];
  uVar20 = param_3[2];
  uVar13 = param_3[3];
  uVar14 = param_3[4];
  uVar15 = param_3[5];
  uVar18 = param_3[6];
  uVar16 = param_3[7];
  uVar5 = uVar4 + uVar19 + uVar20;
  uVar6 = uVar5 + uVar13;
  uVar7 = uVar6 + uVar14;
  uVar8 = uVar7 + uVar15;
  uVar17 = param_3[8];
  uVar9 = uVar8 + uVar18;
  uVar2 = param_3[9];
  uVar10 = uVar9 + uVar16;
  uVar11 = uVar10 + uVar17;
  iVar3 = ((int)uVar4 >> 0x1f) + ((int)uVar19 >> 0x1f) + (uint)CARRY4(uVar4,uVar19) +
          ((int)uVar20 >> 0x1f) + (uint)CARRY4(uVar4 + uVar19,uVar20) + ((int)uVar13 >> 0x1f) +
          (uint)CARRY4(uVar5,uVar13) + ((int)uVar14 >> 0x1f) + (uint)CARRY4(uVar6,uVar14) +
          ((int)uVar15 >> 0x1f) + (uint)CARRY4(uVar7,uVar15) + ((int)uVar18 >> 0x1f) +
          (uint)CARRY4(uVar8,uVar18) + ((int)uVar16 >> 0x1f) + (uint)CARRY4(uVar9,uVar16) +
          ((int)uVar17 >> 0x1f) + (uint)CARRY4(uVar10,uVar17) + ((int)uVar2 >> 0x1f) +
          (uint)CARRY4(uVar11,uVar2);
  bVar22 = 499 < uVar11 + uVar2;
  psVar21 = (short *)(param_1 + 0x124);
  if ((int)-(iVar3 + (uint)bVar22) < 0 == (SBORROW4(0,iVar3) != SBORROW4(-iVar3,(uint)bVar22))) {
    sVar1 = *psVar21;
    *psVar21 = sVar1 + 10;
    bVar22 = 500 < (short)(sVar1 + 10);
  }
  else {
    bVar22 = false;
    *psVar21 = 0;
  }
  if (0 < *(short *)(param_1 + 300)) {
    *(short *)(param_1 + 300) = *(short *)(param_1 + 300) + -10;
  }
  if (bVar22) {
    iVar3 = *param_2;
    *psVar21 = 0;
    if (iVar3 < (*(int *)(param_1 + 0x144) + *(int *)(param_1 + 0x14c) + 1) / 2) {
      iVar3 = iVar3 * 0x466 >> 10;
      *param_2 = iVar3;
      iVar12 = *(int *)(param_1 + 0x154);
      if (iVar3 < *(int *)(param_1 + 0x154)) {
        iVar12 = iVar3;
      }
      *param_2 = iVar12;
      *(int *)(param_1 + 0x13c) = iVar12;
    }
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x12a) = 0x1f400000;
  }
  return;
}


// =========================================================================
// Function: jCkJeuyCyl_km_QjFcOUkzbMIrWiuRrDwoQEZGYdUAUSzaXTDzlODVvHJ
// Entry: 0x71af74d4 | Size: 76 bytes
// =========================================================================

void jCkJeuyCyl_km_QjFcOUkzbMIrWiuRrDwoQEZGYdUAUSzaXTDzlODVvHJ(int param_1)

{
  ushort uVar1;
  short *psVar2;
  int iVar3;
  uint uVar4;
  
  psVar2 = (short *)(param_1 + 0x118);
  uVar1 = *(ushort *)(param_1 + 0x18c);
  if (0x9c3 < (short)uVar1) {
    iVar3 = 0x1194 - (uint)uVar1;
    uVar4 = 400;
    if (uVar1 < 0x1195 && iVar3 != 0) {
      uVar4 = ((uint)(int)(short)iVar3 >> 1) + 400;
    }
    *psVar2 = (short)(*psVar2 * 0x1f + (uVar4 & 0xffff) >> 5);
    return;
  }
  *psVar2 = 0x5dc;
  return;
}


// =========================================================================
// Function: wwHXsrNKpdjFvRKSbjxKYAotCOu_NeWhdU
// Entry: 0x71af7520 | Size: 128 bytes
// =========================================================================

void wwHXsrNKpdjFvRKSbjxKYAotCOu_NeWhdU(uint param_1,ushort *param_2)

{
  ushort uVar1;
  
  if ((int)param_1 < 0x147c) {
    if (0xa3d < (int)param_1) {
      uVar1 = 2;
      if (0xf5c < param_1) {
        uVar1 = 3;
      }
      *param_2 = uVar1;
      return;
    }
    *param_2 = (ushort)(0x51f < (int)param_1);
    return;
  }
  if (0x1eb8 < param_1) {
    uVar1 = 6;
    if (0x2f5c < param_1) {
      uVar1 = 7;
    }
    *param_2 = uVar1;
    return;
  }
  uVar1 = 4;
  if (0x199a < param_1) {
    uVar1 = 5;
  }
  *param_2 = uVar1;
  return;
}


// =========================================================================
// Function: frrptaYHrVkLjTWpOpnjFWyEDQbkJlkGsWgtcsCzSpTAn
// Entry: 0x71af75a0 | Size: 2820 bytes
// =========================================================================

undefined4
frrptaYHrVkLjTWpOpnjFWyEDQbkJlkGsWgtcsCzSpTAn
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
// Function: inMgZnfBNOSSOpDtueBvETeEtOBwuixuHGVFhUhTMooCyqmP
// Entry: 0x71af80b4 | Size: 368 bytes
// =========================================================================

undefined4
inMgZnfBNOSSOpDtueBvETeEtOBwuixuHGVFhUhTMooCyqmP
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
// Function: uQJnGoYazvykXnbNsooKuEfssLFZicUqgtqYfOGtLzThXI
// Entry: 0x71af8224 | Size: 48 bytes
// =========================================================================

void uQJnGoYazvykXnbNsooKuEfssLFZicUqgtqYfOGtLzThXI
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  thunk_zCPtFdBCzqBvDfcR_hdGqH_zlOhpziyujichpIETGRfTCbtzBputjc(param_2,param_4,*param_1,param_3);
  return;
}


// =========================================================================
// Function: fUmBUDwwcvgcmwGWuOVjLILLOMZzjMILcWZQHpJpCYHkygqRigaSG_CH
// Entry: 0x71af8260 | Size: 336 bytes
// =========================================================================

undefined4
fUmBUDwwcvgcmwGWuOVjLILLOMZzjMILcWZQHpJpCYHkygqRigaSG_CH(int param_1,int param_2,byte param_3)

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
// Function: xqrrTmpvnMAlNVNdkcfbEa_gsLHkgdWidfvQaRUaXCSmJBSctrOOZMoQz
// Entry: 0x71af83c0 | Size: 76 bytes
// =========================================================================

undefined4
xqrrTmpvnMAlNVNdkcfbEa_gsLHkgdWidfvQaRUaXCSmJBSctrOOZMoQz(int param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  if (param_2 != (undefined4 *)0x0) {
    if (*(short *)(param_1 + 0x18) == 0x2a) {
      uVar1 = *(undefined1 *)(param_1 + 0x16);
      *param_2 = *(undefined4 *)(param_1 + 0x12);
      *(undefined1 *)(param_2 + 1) = uVar1;
      return 0;
    }
    *(undefined2 *)(param_1 + 0x1a) = 0x4652;
    return 0xffffffff;
  }
  *(undefined2 *)(param_1 + 0x1a) = 0x4653;
  return 0xffffffff;
}


// =========================================================================
// Function: rSORcIvqrTcGgSKdWubshNQztkTsuH
// Entry: 0x71af840c | Size: 28 bytes
// =========================================================================

void rSORcIvqrTcGgSKdWubshNQztkTsuH(void)

{
  int iVar1;
  
  iVar1 = imp_malloc(0x29c);
  *(undefined4 *)(iVar1 + 0x18) = 0;
  return;
}


// =========================================================================
// Function: SIHmzOHkGhPQFMvyfGPIUA_ZWfiuF
// Entry: 0x71af8428 | Size: 4 bytes
// =========================================================================

void SIHmzOHkGhPQFMvyfGPIUA_ZWfiuF(void)

{
  return;
}


// =========================================================================
// Function: gGMWhBzPQwqZHtAboZSSYkhOhldYhaGD_
// Entry: 0x71af842c | Size: 500 bytes
// =========================================================================

int gGMWhBzPQwqZHtAboZSSYkhOhldYhaGD_
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
// Function: yyxIsXIaqMoPzRDYYMMdOKS
// Entry: 0x71af8ad0 | Size: 340 bytes
// =========================================================================

void yyxIsXIaqMoPzRDYYMMdOKS(short *param_1,uint param_2,undefined2 *param_3,int *param_4)

{
  short *psVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  
  iVar13 = *param_4;
  param_2 = param_2 >> 1;
  iVar12 = param_4[3];
  iVar11 = param_4[4];
  iVar9 = param_4[7];
  uVar4 = param_4[1];
  uVar5 = param_4[2];
  iVar6 = param_4[5];
  uVar7 = param_4[6];
  while (param_2 != 0) {
    sVar2 = *param_1;
    uVar10 = (int)((uint6)((int6)(int)(sVar2 * 0x400 - uVar4) * 0x2fa7) >> 0x10) + iVar13;
    uVar15 = (uint)(((ulonglong)uVar4 << 0x20) + (longlong)(int)((uVar10 - uVar5) * 2) * 0x492f8000
                   >> 0x20);
    param_2 = param_2 - 1;
    iVar12 = (int)(((ulonglong)uVar5 << 0x20) + (longlong)(int)((uVar15 - iVar12) * 2) * 0x75af8000
                  >> 0x20);
    psVar1 = param_1 + 1;
    param_1 = param_1 + 2;
    iVar14 = (int)((uint6)((int6)(*psVar1 * 0x400 - iVar6) * 0xcd4) >> 0x10) + iVar11;
    uVar8 = (int)((uint6)((int6)(int)(iVar14 - uVar7) * 0x5f79) >> 0x10) + iVar6;
    iVar9 = (int)(((ulonglong)uVar7 << 0x20) + (longlong)(int)((uVar8 - iVar9) * 2) * 0x60bc0000 >>
                 0x20);
    iVar11 = (int)*psVar1 << 10;
    iVar13 = iVar12 + iVar9 + 0x400 >> 0xb;
    uVar3 = SignedSaturate(iVar13,0x10);
    SignedDoesSaturate(iVar13,0x10);
    *param_3 = (short)uVar3;
    iVar13 = (int)sVar2 << 10;
    uVar4 = uVar10;
    uVar5 = uVar15;
    iVar6 = iVar14;
    uVar7 = uVar8;
    param_3 = param_3 + 1;
  }
  *param_4 = iVar13;
  param_4[1] = uVar4;
  param_4[2] = uVar5;
  param_4[3] = iVar12;
  param_4[4] = iVar11;
  param_4[5] = iVar6;
  param_4[6] = uVar7;
  param_4[7] = iVar9;
  return;
}


// =========================================================================
// Function: bQdAhuXqIGgcQUVkZWGCB
// Entry: 0x71af8c24 | Size: 348 bytes
// =========================================================================

void bQdAhuXqIGgcQUVkZWGCB(short *param_1,int param_2,undefined2 *param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  
  iVar13 = param_4[4];
  iVar8 = param_4[3];
  iVar7 = param_4[7];
  uVar3 = param_4[2];
  uVar4 = param_4[5];
  uVar5 = param_4[6];
  iVar1 = *param_4;
  iVar6 = param_4[1];
  while (param_2 != 0) {
    iVar14 = (int)*param_1;
    param_2 = param_2 + -1;
    iVar9 = (int)((uint6)((int6)(iVar14 * 0x400 - iVar6) * 0xcd4) >> 0x10) + iVar1;
    uVar10 = (int)((uint6)((int6)(int)(iVar9 - uVar3) * 0x5f79) >> 0x10) + iVar6;
    iVar8 = (int)(((ulonglong)uVar3 << 0x20) + (longlong)(int)((uVar10 - iVar8) * 2) * 0x60bc0000 >>
                 0x20);
    iVar1 = iVar8 + 0x200 >> 10;
    uVar2 = SignedSaturate(iVar1,0x10);
    SignedDoesSaturate(iVar1,0x10);
    *param_3 = (short)uVar2;
    uVar12 = (int)((uint6)((int6)(int)(iVar14 * 0x400 - uVar4) * 0x2fa7) >> 0x10) + iVar13;
    iVar13 = iVar14 << 10;
    uVar11 = (uint)(((ulonglong)uVar4 << 0x20) + (longlong)(int)((uVar12 - uVar5) * 2) * 0x492f8000
                   >> 0x20);
    iVar7 = (int)(((ulonglong)uVar5 << 0x20) + (longlong)(int)((uVar11 - iVar7) * 2) * 0x75af8000 >>
                 0x20);
    iVar1 = iVar7 + 0x200 >> 10;
    uVar2 = SignedSaturate(iVar1,0x10);
    SignedDoesSaturate(iVar1,0x10);
    param_3[1] = (short)uVar2;
    param_3 = param_3 + 2;
    uVar3 = uVar10;
    uVar4 = uVar12;
    uVar5 = uVar11;
    iVar1 = iVar13;
    iVar6 = iVar9;
    param_1 = param_1 + 1;
  }
  param_4[2] = uVar3;
  param_4[3] = iVar8;
  *param_4 = iVar1;
  param_4[1] = iVar6;
  param_4[4] = iVar13;
  param_4[5] = uVar4;
  param_4[6] = uVar5;
  param_4[7] = iVar7;
  return;
}


// =========================================================================
// Function: gXLfkuviTDKqcecMCYbWiLP_EYASy
// Entry: 0x71af8d98 | Size: 468 bytes
// =========================================================================

void gXLfkuviTDKqcecMCYbWiLP_EYASy(int param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  short *psVar9;
  short sVar10;
  short sVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  short *psVar15;
  undefined4 *puVar16;
  short *psVar17;
  undefined4 *puVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  bool bVar25;
  ulonglong in_d16;
  undefined1 auVar26 [16];
  undefined8 uVar27;
  undefined4 uVar28;
  undefined8 in_d19;
  undefined8 uVar29;
  undefined1 in_q10 [16];
  undefined1 auVar30 [16];
  
  if (param_3 < 4) {
    uVar21 = 0;
    iVar14 = 0;
    uVar12 = 0;
    if (param_3 == 0) goto LAB_71af8f38;
  }
  else {
    psVar15 = (short *)(param_1 + 4);
    psVar17 = (short *)(param_2 + 4);
    uVar21 = 0;
    uVar19 = 3;
    iVar14 = 0;
    uVar12 = param_3 & 0xfffffffc;
    do {
      psVar6 = psVar15 + -2;
      psVar7 = psVar17 + -2;
      psVar4 = psVar15 + 1;
      uVar19 = uVar19 + 4;
      sVar10 = *psVar15;
      psVar5 = psVar17 + 1;
      sVar11 = *psVar17;
      psVar8 = psVar15 + -1;
      psVar15 = psVar15 + 4;
      uVar22 = (int)*psVar7 * (int)*psVar6 >> (param_4 & 0xff);
      bVar25 = CARRY4(uVar21,uVar22);
      uVar22 = uVar21 + uVar22;
      psVar9 = psVar17 + -1;
      psVar17 = psVar17 + 4;
      uVar1 = (int)*psVar9 * (int)*psVar8 >> (param_4 & 0xff);
      uVar23 = uVar22 + uVar1;
      uVar2 = (int)sVar11 * (int)sVar10 >> (param_4 & 0xff);
      uVar24 = uVar23 + uVar2;
      uVar3 = (int)*psVar5 * (int)*psVar4 >> (param_4 & 0xff);
      uVar21 = uVar24 + uVar3;
      iVar14 = iVar14 + (((int)*psVar7 * (int)*psVar6 >> (param_4 & 0xff)) >> 0x1f) + (uint)bVar25 +
               (((int)*psVar9 * (int)*psVar8 >> (param_4 & 0xff)) >> 0x1f) +
               (uint)CARRY4(uVar22,uVar1) +
               (((int)sVar11 * (int)sVar10 >> (param_4 & 0xff)) >> 0x1f) +
               (uint)CARRY4(uVar23,uVar2) +
               (((int)*psVar5 * (int)*psVar4 >> (param_4 & 0xff)) >> 0x1f) +
               (uint)CARRY4(uVar24,uVar3);
    } while (uVar19 < param_3);
    if (param_3 <= uVar12) goto LAB_71af8f38;
  }
  if (1 < param_3 - uVar12) {
    uVar19 = param_3 & 1;
    uVar27 = FloatVectorNeg(CONCAT44(param_4,param_4),1,4);
    iVar14 = uVar12 * 2;
    iVar13 = uVar12 * 2;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = in_d16 & 0xffff0000ffff0000 | (ulonglong)uVar21 & 0xffff;
    iVar20 = (uVar12 + uVar19) - param_3;
    uVar12 = uVar12 + ((param_3 - uVar12) - uVar19);
    puVar16 = (undefined4 *)(param_1 + iVar13);
    puVar18 = (undefined4 *)(param_2 + iVar14);
    do {
      iVar20 = iVar20 + 2;
                    /* WARNING (jumptable): Ignoring partial resolution of indirect */
                    /* WARNING: Ignoring partial resolution of indirect */
      uVar28 = *puVar16;
      auVar30 = VectorCopyLong(in_d19,2,0);
                    /* WARNING (jumptable): Ignoring partial resolution of indirect */
                    /* WARNING: Ignoring partial resolution of indirect */
      uVar28 = *puVar18;
      in_q10 = VectorCopyLong(in_q10._0_8_,2,0);
      uVar29 = VectorMultiply(in_q10._0_8_,auVar30._0_8_,4);
      in_d19 = VectorShiftLeft(uVar29,uVar27,4,0);
      auVar26 = VectorAdd(auVar26,in_d19,4,0);
      puVar16 = puVar16 + 1;
      puVar18 = puVar18 + 1;
    } while (iVar20 != 0);
    uVar27 = VectorAdd(auVar26._0_8_,auVar26._8_8_,8);
    iVar14 = (int)((ulonglong)uVar27 >> 0x20);
    uVar21 = (uint)uVar27;
    if (uVar19 == 0) goto LAB_71af8f38;
  }
  iVar13 = param_3 - uVar12;
  psVar15 = (short *)(param_1 + uVar12 * 2);
  psVar17 = (short *)(param_2 + uVar12 * 2);
  do {
    uVar12 = (int)*psVar17 * (int)*psVar15 >> (param_4 & 0xff);
    bVar25 = CARRY4(uVar21,uVar12);
    uVar21 = uVar21 + uVar12;
    iVar14 = iVar14 + (((int)*psVar17 * (int)*psVar15 >> (param_4 & 0xff)) >> 0x1f) + (uint)bVar25;
    iVar13 = iVar13 + -1;
    psVar15 = psVar15 + 1;
    psVar17 = psVar17 + 1;
  } while (iVar13 != 0);
LAB_71af8f38:
  uVar12 = (uint)((int)(iVar14 - ((uVar21 < 0x80000000) - 1)) < 0 !=
                 (SBORROW4(iVar14,-1) != SBORROW4(iVar14 + 1,(uint)(uVar21 < 0x80000000))));
  if ((int)-(iVar14 + (uint)(0x7fffffff < uVar21)) < 0 !=
      (SBORROW4(0,iVar14) != SBORROW4(-iVar14,(uint)(0x7fffffff < uVar21)))) {
    uVar12 = uVar12 | 2;
  }
                    /* WARNING: Could not recover jumptable at 0x71af8f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_71af8f6c + *(int *)(&UNK_71af8f6c + uVar12 * 4)))(0x80000000);
  return;
}


// =========================================================================
// Function: fubhOGLgfnxOrCIqQ_IzLaARVDLTdsAIrbCpovjaXawTCrW
// Entry: 0x71af8fcc | Size: 852 bytes
// =========================================================================

undefined4
fubhOGLgfnxOrCIqQ_IzLaARVDLTdsAIrbCpovjaXawTCrW
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
// Function: rHxRDxNgJRPDYdgzUmpPHkmZEshLutEDuZzSOFQJSyBbqaFpFAGC
// Entry: 0x71af9328 | Size: 156 bytes
// =========================================================================

undefined4 rHxRDxNgJRPDYdgzUmpPHkmZEshLutEDuZzSOFQJSyBbqaFpFAGC(int *param_1,int param_2)

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
// Function: sxrVWeVFeBcAFBxbcIuynZFQXRprWSmkCjydnXDJXm
// Entry: 0x71af93c4 | Size: 64 bytes
// =========================================================================

void sxrVWeVFeBcAFBxbcIuynZFQXRprWSmkCjydnXDJXm(undefined4 *param_1)

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
// Function: exgqoWZmPxiReftggjgZnvdMvlzcgSCZBaFgTLZqIwbvamFOPaXZJuZhqlhXoj
// Entry: 0x71af9404 | Size: 24 bytes
// =========================================================================

undefined4 exgqoWZmPxiReftggjgZnvdMvlzcgSCZBaFgTLZqIwbvamFOPaXZJuZhqlhXoj(int param_1)

{
  thunk_bNWlaxubhpeluUleridBXMkymdNKSwbXQBwpDaqanOxsTOoEq(param_1 + 200);
  return 0;
}


// =========================================================================
// Function: bNWlaxubhpeluUleridBXMkymdNKSwbXQBwpDaqanOxsTOoEq
// Entry: 0x71af941c | Size: 1116 bytes
// =========================================================================

void bNWlaxubhpeluUleridBXMkymdNKSwbXQBwpDaqanOxsTOoEq(int param_1,short *param_2,int param_3)

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
// Function: zvqm_riAZvvlMvUDDvAVpUwEemGgwnFcAGNxGDwsQcNtinhYazzpWoZNRYMkpLZCxVFsH
// Entry: 0x71af9878 | Size: 2268 bytes
// =========================================================================

/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4
zvqm_riAZvvlMvUDDvAVpUwEemGgwnFcAGNxGDwsQcNtinhYazzpWoZNRYMkpLZCxVFsH
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
// Function: zCPtFdBCzqBvDfcR_hdGqH_zlOhpziyujichpIETGRfTCbtzBputjc
// Entry: 0x71afa154 | Size: 1236 bytes
// =========================================================================

undefined4
zCPtFdBCzqBvDfcR_hdGqH_zlOhpziyujichpIETGRfTCbtzBputjc
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
// Function: fBEBVmiRvjhbjktywY_
// Entry: 0x71afa854 | Size: 108 bytes
// =========================================================================

int fBEBVmiRvjhbjktywY_(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  sVar1 = (short)((uint)(param_1 / 2 + -0x40000000) >> 0x10);
  iVar5 = (int)sVar1 * (int)sVar1 * -2;
  sVar2 = (short)((uint)iVar5 >> 0x10);
  iVar3 = (int)sVar2 * (int)sVar2;
  iVar4 = (int)sVar1 * (int)(short)((uint)(iVar3 * 2) >> 0x10);
  return (int)(short)((uint)((int)sVar1 * (int)sVar1 * 2) >> 0x10) * (int)sVar1 +
         param_1 / 2 + (iVar5 >> 1) + (iVar3 * 2 >> 0x10) * -0xa000 +
         ((iVar4 * 2 >> 0x10) * 8 - (iVar4 * 2 >> 0x10)) * 0x2000 + 0x40008000;
}


// =========================================================================
// Function: MHqCVHMN_fuWAI
// Entry: 0x71afa8c0 | Size: 280 bytes
// =========================================================================

uint MHqCVHMN_fuWAI(int param_1)

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
// Function: zQZdsOwue_GkYvbnz_D
// Entry: 0x71afa9f0 | Size: 96 bytes
// =========================================================================

void zQZdsOwue_GkYvbnz_D(undefined8 *param_1,undefined2 param_2,uint param_3)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  bool bVar5;
  
  if (param_3 == 0) {
    return;
  }
  if (7 < param_3) {
    uVar4 = param_3 & 0xfffffff8;
    uVar1 = CONCAT44(CONCAT22(param_2,param_2),CONCAT22(param_2,param_2));
    puVar3 = (undefined8 *)((int)param_1 + uVar4 * 2);
    uVar2 = uVar4;
    do {
      *param_1 = uVar1;
      param_1[1] = uVar1;
      param_1 = param_1 + 2;
      uVar2 = uVar2 - 8;
    } while (uVar2 != 0);
    bVar5 = uVar4 == param_3;
    param_3 = param_3 & 7;
    param_1 = puVar3;
    if (bVar5) {
      return;
    }
  }
  do {
    *(undefined2 *)param_1 = param_2;
    param_3 = param_3 - 1;
    param_1 = (undefined8 *)((int)param_1 + 2);
  } while (param_3 != 0);
  return;
}


// =========================================================================
// Function: wFVZkpFMYOMdbcdwbWM
// Entry: 0x71afaa50 | Size: 96 bytes
// =========================================================================

void wFVZkpFMYOMdbcdwbWM(undefined8 *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  bool bVar4;
  
  if (param_3 == 0) {
    return;
  }
  if (3 < param_3) {
    uVar3 = param_3 & 0xfffffffc;
    puVar2 = (undefined8 *)((int)param_1 + uVar3 * 4);
    uVar1 = uVar3;
    do {
      *param_1 = CONCAT44(param_2,param_2);
      param_1[1] = CONCAT44(param_2,param_2);
      param_1 = param_1 + 2;
      uVar1 = uVar1 - 4;
    } while (uVar1 != 0);
    bVar4 = uVar3 == param_3;
    param_3 = param_3 & 3;
    param_1 = puVar2;
    if (bVar4) {
      return;
    }
  }
  do {
    *(undefined4 *)param_1 = param_2;
    param_3 = param_3 - 1;
    param_1 = (undefined8 *)((int)param_1 + 4);
  } while (param_3 != 0);
  return;
}


// =========================================================================
// Function: SkeaLSrTQNKxABCFnnNEowQULDFsn
// Entry: 0x71afaab0 | Size: 156 bytes
// =========================================================================

void SkeaLSrTQNKxABCFnnNEowQULDFsn(undefined2 *param_1,undefined1 (*param_2) [16],uint param_3)

{
  undefined2 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  
  if (param_3 == 0) {
    return;
  }
  uVar5 = 0;
  if ((0xf < param_3) &&
     (((undefined2 *)((int)*param_2 + param_3 * 2) <= param_1 + (1 - param_3) ||
      ((undefined1 (*) [16])(param_1 + 1) <= param_2)))) {
    uVar5 = param_3 & 0xfffffff8;
    puVar1 = (undefined2 *)*param_2;
    puVar3 = (undefined8 *)(param_1 + -7);
    uVar4 = uVar5;
    do {
      auVar6 = *param_2;
      param_2 = param_2 + 1;
      uVar4 = uVar4 - 8;
      auVar6 = vrev(auVar6,2);
      *puVar3 = auVar6._8_8_;
      puVar3[1] = auVar6._0_8_;
      puVar3 = puVar3 + -2;
    } while (uVar4 != 0);
    param_1 = param_1 + -uVar5;
    param_2 = (undefined1 (*) [16])(puVar1 + uVar5);
    if (uVar5 == param_3) {
      return;
    }
  }
  iVar2 = param_3 - uVar5;
  do {
    iVar2 = iVar2 + -1;
    *param_1 = *(undefined2 *)*param_2;
    param_1 = param_1 + -1;
    param_2 = (undefined1 (*) [16])((int)*param_2 + 2);
  } while (iVar2 != 0);
  return;
}


// =========================================================================
// Function: zeuyNXiLItTCytYOV_WzUkuz
// Entry: 0x71afab4c | Size: 20 bytes
// =========================================================================

void zeuyNXiLItTCytYOV_WzUkuz(int param_1,int param_2,int param_3,undefined4 param_4)

{
  imp___aeabi_memcpy(param_4,param_1 + (param_2 - param_3) * 2,param_3 << 1);
  return;
}


// =========================================================================
// Function: JqdNlbkYCjfpJWxQKbueIFf
// Entry: 0x71afab60 | Size: 28 bytes
// =========================================================================

void JqdNlbkYCjfpJWxQKbueIFf(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    return;
  }
  imp___aeabi_memclr(param_1,param_2 << 1);
  return;
}


// =========================================================================
// Function: AtZCimeVteZDiRPjyGKfqez
// Entry: 0x71afab7c | Size: 28 bytes
// =========================================================================

void AtZCimeVteZDiRPjyGKfqez(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    return;
  }
  imp___aeabi_memclr4(param_1,param_2 << 2);
  return;
}


// =========================================================================
// Function: laqXnoujKvCZbjDFev_mJWPLqWrgso_HQbJjvACihgMuyzBmBleNBdDZnEhoDnklhWXPdDiWlchuewEEVsTehWRfIxrXNRxJyTvnBdMaoUvgEiEdjHZz
// Entry: 0x71afac04 | Size: 1332 bytes
// =========================================================================

undefined2 *
laqXnoujKvCZbjDFev_mJWPLqWrgso_HQbJjvACihgMuyzBmBleNBdDZnEhoDnklhWXPdDiWlchuewEEVsTehWRfIxrXNRxJyTvnBdMaoUvgEiEdjHZz
          (undefined2 *param_1,int param_2,undefined4 param_3,uint param_4,undefined4 param_5,
          int param_6)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  char *pcVar16;
  uint uVar17;
  uint *puVar18;
  uint uVar19;
  int *piStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  uVar4 = thunk_yEbYffsicFFJvpgOICjJDgavrzzbSwlOTwSYO();
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (&piStack_30,s_WebRTC_Agc2SimdSse2KillSwitch_7006d400,0x1d);
  uVar7 = uStack_28;
  piVar12 = piStack_30;
  uVar14 = (uint)&piStack_30 | 1;
  uVar8 = uStack_28;
  uVar13 = uStack_2c;
  if (((uint)piStack_30 & 1) == 0) {
    uVar13 = (uint)piStack_30 >> 1 & 0x7f;
    uVar8 = uVar14;
  }
  uVar17 = uVar8 + uVar13;
  uVar5 = uVar8;
  while (((uVar2 = uVar17, 6 < (int)uVar13 &&
          (uVar5 = imp_memchr(uVar5,0x45,uVar13 - 6), uVar5 != 0)) &&
         (iVar15 = imp_memcmp(uVar5,s_Enabled_7006820b,7), uVar2 = uVar5, iVar15 != 0))) {
    uVar5 = uVar5 + 1;
    uVar13 = uVar17 - uVar5;
  }
  if (((uint)piVar12 & 1) != 0) {
    thunk_qNQrlu(uVar7);
  }
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (&piStack_30,s_WebRTC_Agc2SimdAvx2KillSwitch_7007267d,0x1d);
  uVar7 = uStack_28;
  piVar12 = piStack_30;
  uVar5 = uStack_28;
  uVar13 = uStack_2c;
  if (((uint)piStack_30 & 1) == 0) {
    uVar13 = (uint)piStack_30 >> 1 & 0x7f;
    uVar5 = uVar14;
  }
  uVar19 = uVar5 + uVar13;
  uVar6 = uVar5;
  while (((uVar3 = uVar19, 6 < (int)uVar13 &&
          (uVar6 = imp_memchr(uVar6,0x45,uVar13 - 6), uVar6 != 0)) &&
         (iVar15 = imp_memcmp(uVar6,s_Enabled_7006820b,7), uVar3 = uVar6, iVar15 != 0))) {
    uVar6 = uVar6 + 1;
    uVar13 = uVar19 - uVar6;
  }
  if (((uint)piVar12 & 1) != 0) {
    thunk_qNQrlu(uVar7);
  }
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (&piStack_30,s_WebRTC_Agc2SimdNeonKillSwitch_70066989,0x1d);
  piVar12 = piStack_30;
  uVar13 = uStack_28;
  if (((uint)piStack_30 & 1) == 0) {
    uStack_2c = (uint)piStack_30 >> 1 & 0x7f;
    uVar13 = uVar14;
  }
  uVar14 = uVar13 + uStack_2c;
  uVar7 = uVar13;
  while (((uVar6 = uVar14, 6 < (int)uStack_2c &&
          (uVar7 = imp_memchr(uVar7,0x45,uStack_2c - 6), uVar7 != 0)) &&
         (iVar15 = imp_memcmp(uVar7,s_Enabled_7006820b,7), uVar6 = uVar7, iVar15 != 0))) {
    uVar7 = uVar7 + 1;
    uStack_2c = uVar14 - uVar7;
  }
  if (((uint)piVar12 & 1) != 0) {
    thunk_qNQrlu(uStack_28);
  }
  uVar7 = 0;
  if (uVar2 != uVar8) {
    uVar7 = uVar4 & 0xff;
  }
  if (uVar2 == uVar17) {
    uVar7 = uVar4 & 0xff;
  }
  uVar8 = uVar7 | uVar4 & 0xff00;
  if (uVar3 != uVar5) {
    uVar7 = uVar8;
  }
  if (uVar3 == uVar19) {
    uVar7 = uVar8;
  }
  uVar8 = uVar7 | uVar4 & 0xff0000;
  if (uVar6 != uVar13) {
    uVar7 = uVar8;
  }
  if (uVar6 == uVar14) {
    uVar7 = uVar8;
  }
  iVar15 = (int)param_1 + 3;
  *param_1 = (short)uVar7;
  *(char *)(param_1 + 1) = (char)(uVar7 >> 0x10);
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(&DAT_712048f8);
  } while (!bVar1);
  DataMemoryBarrier(0xb);
  DAT_712048f8 = DAT_712048f8 + 1;
  thunk_dweKWzJgHffIolIwVpNgT_OQMpPie(iVar15);
  uVar9 = imp_powf(0x41200000,*(float *)(param_2 + 0x1c) / 20.0);
  thunk_ZzeqwcSjtMEA_rBw_MyTzMFIvaJa(param_1 + 2,0,uVar9);
  puVar18 = (uint *)(param_1 + 0xc);
  piVar12 = (int *)(param_1 + 0x12);
  *puVar18 = 0;
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  thunk_NppcinjAmVaZldHjimpXyBOSlXljfPHeMvydQhghKRLrwPgWNQYdNgfhmeRMAApHUlGRSfQxYrWMIlyPhSFcXGTdoNLOaxFc
            (param_1 + 0x18,iVar15,param_4 / 100,&DAT_7006c38a,4);
  *(undefined1 *)(param_1 + 0x42e) = 0;
  *(undefined4 *)(param_1 + 0x42c) = 0;
  *(undefined1 *)(param_1 + 0x430) = 0;
  pcVar16 = (char *)(param_2 + 4);
  if (*(char *)(param_2 + 1) != '\0' || *pcVar16 != '\0') {
    uVar9 = thunk_MwhHq(0x30);
    thunk_cGVcNoThBxSFtzltgAmvvfrLrXJajGQkGeOCexlNvaGtyKTYClcVpsXkzgOpXzacWvpWbuJkaziDLGQEPhNXquAVIOSAsiapIjYtRgXCMMjKKutztwgiAqXW
              (uVar9,iVar15,pcVar16,0xc);
    iVar10 = *(int *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x10) = uVar9;
    if (iVar10 != 0) {
      thunk_qNQrlu();
    }
    if (param_6 != 0) {
      iVar10 = thunk_MwhHq(0x50);
      thunk_atUCMjyLrlfcx_EGOIbolybEEeOQSKOmOSOfCTVAxacVpSYhZErTxWEufhYaerVeaIl_ZgoKA
                (iVar10,0x5dc,param_1,param_4);
      iVar11 = *(int *)(param_1 + 0xe);
      *(int *)(param_1 + 0xe) = iVar10;
      if (iVar11 != 0) {
        thunk_rkwmwsyvDYbmxIPVqNfHLCjfAyBsQwDtcMKwJTDWBxIh();
        thunk_qNQrlu();
      }
    }
  }
  if (*(char *)(param_2 + 1) != '\0') {
    iVar10 = thunk_MwhHq(0x50);
    thunk_cdTmHOBwNumyaafcOcSQNLmdMWoqz_gAvUK_sPF_kadPhJJNbvP(iVar10,param_5,param_3);
    iVar11 = *piVar12;
    *piVar12 = iVar10;
    if (iVar11 != 0) {
      thunk_ePg_MmKdPjoqlBhvcSzqzzCoUZKICEYKXWEsQ();
      thunk_qNQrlu();
      iVar10 = *piVar12;
    }
    thunk_eV_K_el__CLuRcnKpKPUiecNiwhwpEuEBZcYJefrvAjiria(iVar10);
  }
  if (*pcVar16 != '\0') {
    thunk_oCvNXutoGNJyyKJHFDpFGbaKvuWYyWSAHQlBRsWmrgzzbIsJ_qkLLstegK(&piStack_30,iVar15);
    piVar12 = (int *)*puVar18;
    *puVar18 = (uint)piStack_30;
    piStack_30 = (int *)0x0;
    if (piVar12 != (int *)0x0) {
      (**(code **)(*piVar12 + 4))();
      piVar12 = piStack_30;
      piStack_30 = (int *)0x0;
      if (piVar12 != (int *)0x0) {
        (**(code **)(*piVar12 + 4))();
      }
    }
    thunk_ICUerHsoVUvxbUCMgwuWaoXtiPmxgxGqVtJaf_xpNeJhQ_QNqGBytlQfPyUS
              (&piStack_30,0x41a00000,0xc,iVar15);
    piVar12 = *(int **)(param_1 + 0x14);
    *(int **)(param_1 + 0x14) = piStack_30;
    piStack_30 = (int *)0x0;
    if (piVar12 != (int *)0x0) {
      (**(code **)(*piVar12 + 4))();
      piVar12 = piStack_30;
      piStack_30 = (int *)0x0;
      if (piVar12 != (int *)0x0) {
        (**(code **)(*piVar12 + 4))();
      }
    }
    uVar9 = thunk_MwhHq(0x44);
    thunk_YAtEide_qbobJEresjHymaJJwdYGUiU_wSQERdCvBTaVuQlycVUj_igcYbvGVZBcxRurvxfMsiIEIWoLmdrzmDdwobJA_LHZEJJvPEIztvohtrnPVFQSZLsLRpUpENuls
              (uVar9,iVar15,pcVar16,0xc);
    iVar15 = *(int *)(param_1 + 0x16);
    *(undefined4 *)(param_1 + 0x16) = uVar9;
    if (iVar15 != 0) {
      thunk_qNQrlu();
    }
  }
  return param_1;
}


// =========================================================================
// Function: oTwKqdirFBVQKvzxBgAaDbykuyetpdt
// Entry: 0x71afb22c | Size: 184 bytes
// =========================================================================

int oTwKqdirFBVQKvzxBgAaDbykuyetpdt(int param_1)

{
  int iVar1;
  int *piVar2;
  
  thunk_UqLAomKxS_yDNrnnkveYjN(param_1 + 0x30);
  iVar1 = *(int *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (iVar1 != 0) {
    thunk_qNQrlu();
  }
  piVar2 = *(int **)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  iVar1 = *(int *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (iVar1 != 0) {
    thunk_ePg_MmKdPjoqlBhvcSzqzzCoUZKICEYKXWEsQ();
    thunk_qNQrlu();
  }
  iVar1 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (iVar1 != 0) {
    thunk_qNQrlu();
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (iVar1 != 0) {
    thunk_rkwmwsyvDYbmxIPVqNfHLCjfAyBsQwDtcMKwJTDWBxIh();
    thunk_qNQrlu();
  }
  piVar2 = *(int **)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  thunk_tS_umzWWCiWQRX_wvQPQGsKtMvWrX(param_1 + 3);
  return param_1;
}


// =========================================================================
// Function: qUyPCCDXDZHipteyrMartRrKvoC_WFg_HfACyoD_hlJKIhafJmo
// Entry: 0x71afb2e4 | Size: 16 bytes
// =========================================================================

void qUyPCCDXDZHipteyrMartRrKvoC_WFg_HfACyoD_hlJKIhafJmo(int param_1)

{
  if (*(int *)(param_1 + 0x24) == 0) {
    return;
  }
  thunk_lVKjJkWIezUotYnM_XQBIHEPsESKIKfOqLMxRAUybtHNTxgnLBfhjXNyGVsDHHJYtk();
  return;
}


// =========================================================================
// Function: yfRyVGLLEN_ycyOambAfUGNHzMEwAgywrmCELlxbodAwx
// Entry: 0x71afb2f4 | Size: 88 bytes
// =========================================================================

void yfRyVGLLEN_ycyOambAfUGNHzMEwAgywrmCELlxbodAwx(int param_1,float param_2)

{
  float fVar1;
  
  fVar1 = (float)imp_powf(0x41200000,param_2 / 20.0);
  if (*(float *)(param_1 + 0xc) != fVar1) {
    thunk_xvujOqVqotyLaHpaIuWpSLQsXM(param_1 + 0x30);
  }
  thunk_HeDauPCPyPhYwHooglLDxlxrk_dAbNGqYupOvBjm(param_1 + 4,fVar1);
  return;
}


// =========================================================================
// Function: cbujWXAyOPlsmmcXpcHZaORUJZknIMFlYMvcpLRCYUJsukbqmSsiUTeH
// Entry: 0x71afb34c | Size: 32 bytes
// =========================================================================

void cbujWXAyOPlsmmcXpcHZaORUJZknIMFlYMvcpLRCYUJsukbqmSsiUTeH(int param_1)

{
  if (*(char *)(param_1 + 0x860) != '\0') {
    *(undefined1 *)(param_1 + 0x860) = 0;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    thunk_WbgoAazCxpwQQPGgiXafmTEzZghxVEzXeLvyjHFqKuPNV_dZQoQzaiXLRMDC_RJgYjFhEzReD();
    return;
  }
  return;
}


// =========================================================================
// Function: WkhzleogkOiTZfvuSCkPsZDjPAwvheXmrn_bQSYQLGSwyLWhjGF_smQMMqyjTtdqAsEslFeQoefVNS
// Entry: 0x71afb36c | Size: 1012 bytes
// =========================================================================

void WkhzleogkOiTZfvuSCkPsZDjPAwvheXmrn_bQSYQLGSwyLWhjGF_smQMMqyjTtdqAsEslFeQoefVNS
               (int param_1,undefined4 param_2,char param_3,int param_4,int param_5)

{
  uint uVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  uint in_fpscr;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uStack_70;
  float fStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  float fStack_5c;
  
  if (*(char *)(param_1 + 0x860) != '\0') {
    *(undefined1 *)(param_1 + 0x860) = 0;
  }
  iVar4 = 0;
  if (param_4 != 0) {
    if (*(int *)(param_1 + 0x20) != 0) {
      thunk_sQJqqgUupXEgZHgwodUnFcPFapJigeDbRoXYBNlm();
    }
    iVar4 = 0;
    if (*(int **)(param_1 + 0x28) != (int *)0x0) {
      iVar4 = (**(code **)(**(int **)(param_1 + 0x28) + 0x10))();
    }
  }
  iVar13 = *(int *)(param_5 + 0x1c);
  pfVar11 = (float *)0x0;
  iVar9 = *(int *)(param_5 + 0xc);
  if (iVar13 != 0 && iVar9 != 0) {
    iVar4 = *(int *)(param_5 + 0x28);
  }
  iVar14 = iVar9 * iVar13;
  if (iVar13 != 0 && iVar9 != 0) {
    pfVar11 = (float *)**(int **)(iVar4 + 4);
  }
  pfVar10 = (float *)0x0;
  if (iVar14 != 0) {
    pfVar10 = pfVar11;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    bVar2 = param_3 == '\0';
  }
  else {
    pfVar8 = (float *)0x0;
    if (iVar14 != 0) {
      pfVar8 = pfVar11;
    }
    param_2 = thunk_pnCqRfrRoOXlKgD_ewUZVBItdmx_ZxaCOTIVaOdRTyAKaiAcFhftwcIGnizIvMIRdR_DMwEdotts
                        (*(int *)(param_1 + 0x1c),iVar13,iVar9,pfVar8,iVar14);
    bVar2 = false;
  }
  fVar19 = -90.309;
  fVar16 = 0.0;
  pfVar8 = pfVar10;
  fVar17 = fVar16;
  fVar18 = fVar19;
  if (iVar9 != 0) {
    do {
      fVar15 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      fVar17 = fVar17 + fVar15 * fVar15;
      uVar1 = in_fpscr & 0xfffffff;
      in_fpscr = uVar1 | (uint)(ABS(fVar15) < fVar16) << 0x1f;
      fVar15 = ABS(fVar15);
      if (SUB41(in_fpscr >> 0x1f,0)) {
        fVar15 = fVar16;
      }
      fVar16 = fVar15;
    } while (pfVar8 != pfVar10 + iVar9);
    in_fpscr = uVar1 | (uint)(fVar15 == 1.0) << 0x1e | (uint)(1.0 <= fVar15) << 0x1d;
    bVar3 = (byte)(in_fpscr >> 0x18);
    fVar16 = fVar17;
    if ((bool)(bVar3 >> 5 & 1) && !(bool)(bVar3 >> 6)) {
      fVar17 = (float)imp_log10f(fVar15);
      fVar18 = fVar17 * 20.0 + -90.309;
    }
  }
  fVar17 = (float)VectorUnsignedToFloat(iVar9,(byte)(in_fpscr >> 0x16) & 3);
  if (1.0 < SQRT(fVar16 / fVar17)) {
    fVar16 = (float)imp_log10f(SQRT(fVar16 / fVar17));
    fVar19 = fVar16 * 20.0 + -90.309;
  }
  piVar5 = *(int **)(param_1 + 0x18);
  if (piVar5 == (int *)0x0) {
    uVar6 = 0;
    iVar4 = *(int *)(param_1 + 0x20);
  }
  else {
    if (iVar14 == 0) {
      pfVar11 = (float *)0x0;
    }
    uVar6 = (**(code **)(*piVar5 + 8))(piVar5,iVar13,iVar9,pfVar11,iVar14);
    iVar4 = *(int *)(param_1 + 0x20);
  }
  if (iVar4 == 0) {
    cVar12 = '\0';
  }
  else {
    thunk_wWZmaEuOpQILDMjyRmKkaO_dLzhYiIL__VreQgVHSRf(iVar4,fVar19,fVar18,param_2);
    cVar12 = *(char *)(*(int *)(param_1 + 0x20) + 0x28);
    fVar19 = *(float *)(*(int *)(param_1 + 0x20) + 0x24);
  }
  if (!bVar2 && *(int *)(param_1 + 0x24) != 0) {
    fVar16 = 0.0;
    if (cVar12 != '\0') {
      fVar16 = fVar19;
    }
    thunk_dVKNPVeRliuBWlskeoTLxwummMUgBBAfdtmSXclUbfNKDLeGkJEVEtWoNLygbUhqdNePOCKzzBFJDdyx
              (&uStack_70,*(int *)(param_1 + 0x24),param_2,fVar16,cVar12);
    *(undefined1 *)(param_1 + 0x860) = fStack_6c._0_1_;
    *(undefined4 *)(param_1 + 0x85c) = uStack_70;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    (**(code **)(**(int **)(param_1 + 0x28) + 0xc))(*(int **)(param_1 + 0x28),param_2,fVar18,fVar19)
    ;
    uVar7 = (**(code **)(**(int **)(param_1 + 0x28) + 8))();
    fVar16 = (float)thunk_ijlPHZmeHie_aPMwolfzPUevGadLquBglskZw(param_1 + 0x30);
    if (fVar16 <= 1.0) {
      fStack_5c = -90.309;
    }
    else {
      fVar16 = (float)imp_log10f();
      fStack_5c = fVar16 * 20.0 + -90.309;
    }
    uStack_68 = CONCAT31(uStack_68._1_3_,cVar12);
    uStack_70 = param_2;
    fStack_6c = fVar19;
    uStack_64 = uVar6;
    uStack_60 = uVar7;
    thunk_Lz_BEIsgUDSYRUxNlchVJreNIUNajq_mjjcmWQqMkhjyFHkMkFFryHEeMCvSJPJSexS_ZuenmrgXxmTlcYNWSlewTkyQk
              (*(undefined4 *)(param_1 + 0x2c),&uStack_70,iVar13,iVar9,pfVar10,iVar14);
  }
  thunk_YisW_gZ_fbub_phLmEuWHEkcjawMHBDphwpmgVhQcMyY_IChVU_qCalToFNm
            (param_1 + 4,iVar13,iVar9,pfVar10,iVar14);
  thunk__MUGkurXWuqdkvGLiKzOikNSKYitpKMvJohhTqdTQmkBCXIWMawEp
            (param_1 + 0x30,iVar13,iVar9,pfVar10,iVar14);
  iVar4 = *(int *)(param_1 + 0x858) + 1;
  *(int *)(param_1 + 0x858) = iVar4;
  if (iVar4 == 3000) {
    *(undefined4 *)(param_1 + 0x858) = 0;
    thunk_jkmZnIn_isZ_CcnGyZ_zRVY_FRFMUvPXgbxdTsXF(&uStack_70,param_1 + 0x30);
    iVar4 = thunk_GlaqsotmQIxdnufiJlivXIB_zbaynnonqiWUtNDfNyHbTlqdYqiedKD();
    if (iVar4 == 0) {
      thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
                (&DAT_70098344,s_____webrtc_apm_src_webrtc_module_7006eb07,0x859,
                 s__AGC2__limiter_stats_7006512f,s___identity__700706e7,uStack_70,s___knee__70070ee5
                 ,fStack_6c,s___limiter__70068ccf,uStack_68,s___saturation__70067c51,uStack_64);
    }
  }
  return;
}


// =========================================================================
// Function: cXkhuDdunAmNRjOieLCaqWS_koRsmAPfNNxRGvHnCTixSucdzlWC_p_SApimbYmGw_BsGixJfyhYXhplkvBT
// Entry: 0x71afb784 | Size: 120 bytes
// =========================================================================

bool cXkhuDdunAmNRjOieLCaqWS_koRsmAPfNNxRGvHnCTixSucdzlWC_p_SApimbYmGw_BsGixJfyhYXhplkvBT
               (int param_1)

{
  bool bVar1;
  float fVar2;
  
  if (*(float *)(param_1 + 0x1c) < 0.0) {
    return false;
  }
  if (*(float *)(param_1 + 0x1c) < 50.0) {
    fVar2 = *(float *)(param_1 + 8);
    bVar1 = fVar2 < 0.0;
    if (!bVar1) {
      fVar2 = *(float *)(param_1 + 0xc);
      bVar1 = fVar2 < 0.0;
    }
    if (fVar2 != 0.0 && bVar1 == NAN(fVar2)) {
      fVar2 = *(float *)(param_1 + 0x10);
      bVar1 = fVar2 < 0.0;
      if (!bVar1) {
        fVar2 = *(float *)(param_1 + 0x14);
        bVar1 = fVar2 < 0.0;
      }
      if (fVar2 != 0.0 && bVar1 == NAN(fVar2)) {
        return *(float *)(param_1 + 0x18) <= 0.0;
      }
    }
  }
  return false;
}


// =========================================================================
// Function: NGnxZeDwHcsOmsfNgWnbPhwtSfVuZHcpLzdFHVWElMKs
// Entry: 0x71afc298 | Size: 376 bytes
// =========================================================================

void NGnxZeDwHcsOmsfNgWnbPhwtSfVuZHcpLzdFHVWElMKs(int *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 auStack_64 [3];
  undefined1 auStack_58 [64];
  
  thunk_rPiMkrHHLavtVMGAqTzYYaquUYbIyIuWuWPBQnxNZcwGWgtrWAatzODg(auStack_64,auStack_58,0x40);
  cVar1 = *param_2;
  if (cVar1 != '\0') {
    thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
              (auStack_64,&DAT_7006da83,4);
  }
  if (param_2[1] == '\0') {
    if (param_2[2] != '\0') {
      pcVar2 = &DAT_70065144;
      if (cVar1 != '\0') {
        pcVar2 = s__NEON_700716b5;
      }
      goto LAB_71afc34c;
    }
    if (cVar1 == '\0') {
      *(undefined4 *)((int)param_1 + 1) = 0x656e6f6e;
      *(undefined1 *)param_1 = 8;
      *(undefined1 *)((int)param_1 + 5) = 0;
      return;
    }
  }
  else {
    uVar4 = 5;
    pcVar2 = s__AVX2_7006a1a7;
    if (cVar1 == '\0') {
      uVar4 = 4;
      pcVar2 = &DAT_7006bd33;
    }
    thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
              (auStack_64,pcVar2,uVar4);
    if (param_2[2] != '\0') {
      pcVar2 = s__NEON_700716b5;
LAB_71afc34c:
      uVar4 = imp_strlen(pcVar2);
      thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                (auStack_64,pcVar2,uVar4);
    }
  }
  uVar3 = imp_strlen(auStack_64[0]);
  if (0xfffffff7 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_71a11918(param_1);
  }
  if (uVar3 < 0xb) {
    puVar5 = (undefined1 *)((int)param_1 + 1);
    *(char *)param_1 = (char)(uVar3 << 1);
    if (uVar3 == 0) goto LAB_71afc3c4;
  }
  else {
    puVar5 = (undefined1 *)thunk_MwhHq((uVar3 | 7) + 1);
    param_1[2] = (int)puVar5;
    *param_1 = (uVar3 | 7) + 2;
    param_1[1] = uVar3;
  }
  imp___aeabi_memmove(puVar5,auStack_64[0],uVar3);
LAB_71afc3c4:
  puVar5[uVar3] = 0;
  return;
}


// =========================================================================
// Function: yEbYffsicFFJvpgOICjJDgavrzzbSwlOTwSYO
// Entry: 0x71afc428 | Size: 8 bytes
// =========================================================================

undefined4 yEbYffsicFFJvpgOICjJDgavrzzbSwlOTwSYO(void)

{
  return 0;
}


// =========================================================================
// Function: xrBzPWrsXEPkdmALmxzzpHqJrlIUUIZaeBSD
// Entry: 0x71afc430 | Size: 8 bytes
// =========================================================================

undefined4 xrBzPWrsXEPkdmALmxzzpHqJrlIUUIZaeBSD(void)

{
  return 0;
}


// =========================================================================
// Function: ZzeqwcSjtMEA_rBw_MyTzMFIvaJa
// Entry: 0x71afc5f4 | Size: 36 bytes
// =========================================================================

void ZzeqwcSjtMEA_rBw_MyTzMFIvaJa(undefined1 *param_1,undefined1 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0xbf800000;
  *param_1 = param_2;
  return;
}


// =========================================================================
// Function: YisW_gZ_fbub_phLmEuWHEkcjawMHBDphwpmgVhQcMyY_IChVU_qCalToFNm
// Entry: 0x71afc618 | Size: 380 bytes
// =========================================================================

void YisW_gZ_fbub_phLmEuWHEkcjawMHBDphwpmgVhQcMyY_IChVU_qCalToFNm
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
// Function: LcuhafoWobjSZKknSkoZuTAjpGDNMCn_EkUJy
// Entry: 0x71afc7a4 | Size: 28 bytes
// =========================================================================

void LcuhafoWobjSZKknSkoZuTAjpGDNMCn_EkUJy(int param_1,undefined4 param_2)

{
  uint in_fpscr;
  float fVar1;
  
  *(undefined4 *)(param_1 + 0xc) = param_2;
  fVar1 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  *(float *)(param_1 + 0x10) = 1.0 / fVar1;
  return;
}


// =========================================================================
// Function: HeDauPCPyPhYwHooglLDxlxrk_dAbNGqYupOvBjm
// Entry: 0x71afc7c0 | Size: 8 bytes
// =========================================================================

void HeDauPCPyPhYwHooglLDxlxrk_dAbNGqYupOvBjm(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}


// =========================================================================
// Function: NppcinjAmVaZldHjimpXyBOSlXljfPHeMvydQhghKRLrwPgWNQYdNgfhmeRMAApHUlGRSfQxYrWMIlyPhSFcXGTdoNLOaxFc
// Entry: 0x71afc7e0 | Size: 84 bytes
// =========================================================================

int NppcinjAmVaZldHjimpXyBOSlXljfPHeMvydQhghKRLrwPgWNQYdNgfhmeRMAApHUlGRSfQxYrWMIlyPhSFcXGTdoNLOaxFc
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
// Function: UqLAomKxS_yDNrnnkveYjN
// Entry: 0x71afc840 | Size: 4 bytes
// =========================================================================

int * UqLAomKxS_yDNrnnkveYjN(int *param_1)

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
// Function: _MUGkurXWuqdkvGLiKzOikNSKYitpKMvJohhTqdTQmkBCXIWMawEp
// Entry: 0x71afc844 | Size: 928 bytes
// =========================================================================

void _MUGkurXWuqdkvGLiKzOikNSKYitpKMvJohhTqdTQmkBCXIWMawEp
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
// Function: jkmZnIn_isZ_CcnGyZ_zRVY_FRFMUvPXgbxdTsXF
// Entry: 0x71afcbfc | Size: 24 bytes
// =========================================================================

void jkmZnIn_isZ_CcnGyZ_zRVY_FRFMUvPXgbxdTsXF(undefined8 *param_1,int param_2)

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
// Function: YmEV_WevnvzXPj_fxHhkBFiOWxfIASSpiKaGpWLStI
// Entry: 0x71afcc14 | Size: 8 bytes
// =========================================================================

void YmEV_WevnvzXPj_fxHhkBFiOWxfIASSpiKaGpWLStI(int param_1)

{
  thunk_ZDSAGPVedqdUzrvzzACdBQZLFnEAU_oYghTwJhlaRnbLWrfgzfrJSryJroTSnz(param_1 + 0x38);
  return;
}


// =========================================================================
// Function: xvujOqVqotyLaHpaIuWpSLQsXM
// Entry: 0x71afcc1c | Size: 8 bytes
// =========================================================================

void xvujOqVqotyLaHpaIuWpSLQsXM(int param_1)

{
  thunk_ScxNepyyTeaIhkmtbFcsTxOmmpmRSDhHGXpruyroymyBLx(param_1 + 0x38);
  return;
}


// =========================================================================
// Function: ijlPHZmeHie_aPMwolfzPUevGadLquBglskZw
// Entry: 0x71afcc24 | Size: 8 bytes
// =========================================================================

undefined4 ijlPHZmeHie_aPMwolfzPUevGadLquBglskZw(int param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}


// =========================================================================
// Function: EEppFaqqNLLKNRgVmkaMFWqOvlIUPaFwZvMOlJUmHLF_mefArsdzMHssekAofjK_GPptAvrnseosFreZXeX_jqeQyXVmpGfZTTivGYSZWIrzbE
// Entry: 0x71afd034 | Size: 760 bytes
// =========================================================================

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int EEppFaqqNLLKNRgVmkaMFWqOvlIUPaFwZvMOlJUmHLF_mefArsdzMHssekAofjK_GPptAvrnseosFreZXeX_jqeQyXVmpGfZTTivGYSZWIrzbE
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
// Function: jqoSIRvhMiVPgDTfSwYGHYEpHByGDINqMXrUx
// Entry: 0x71afd41c | Size: 152 bytes
// =========================================================================

int * jqoSIRvhMiVPgDTfSwYGHYEpHByGDINqMXrUx(int *param_1)

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
// Function: QGUgTWGJwwuiMPigDTJxyUghAcyaYEHTdQrxcosIViwiJlQLGLiyGGFHtUnmiIxHtMKEWNomCvCORG
// Entry: 0x71afd4c8 | Size: 128 bytes
// =========================================================================

void QGUgTWGJwwuiMPigDTJxyUghAcyaYEHTdQrxcosIViwiJlQLGLiyGGFHtUnmiIxHtMKEWNomCvCORG
               (int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  uVar1 = FUN_71ba3034(*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),100,0);
  switch(uVar3) {
  case 0:
    iVar2 = *param_1;
    break;
  case 1:
    iVar2 = param_1[1];
    break;
  case 2:
    iVar2 = param_1[2];
    break;
  case 3:
    iVar2 = param_1[3];
    break;
  default:
    goto switchD_71afd500_default;
  }
  if (iVar2 != 0) {
    thunk_vsvXXDTqCgigxJSTnQh_UuMzwdKDOtsuj_lQISlxCfabNzQdRj(iVar2,uVar1);
    return;
  }
switchD_71afd500_default:
  return;
}


// =========================================================================
// Function: n_JaPqkHQfvRleJqIZZyQPsNVwHXSOjYdERYbRXNsLSEmamZZumElDwBaiPFyXxfEazgOloiIqVfUPvIdtpJWpjsqzQexkPVtYGnsLwvNqlqGPyHp
// Entry: 0x71afd558 | Size: 156 bytes
// =========================================================================

undefined4 *
n_JaPqkHQfvRleJqIZZyQPsNVwHXSOjYdERYbRXNsLSEmamZZumElDwBaiPFyXxfEazgOloiIqVfUPvIdtpJWpjsqzQexkPVtYGnsLwvNqlqGPyHp
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
// Function: XGUvNeTEOAaIlNkHnNMSfEopcqwsvWEVqAVwoGKghLMxZBHZfqY
// Entry: 0x71afd5f4 | Size: 4 bytes
// =========================================================================

void XGUvNeTEOAaIlNkHnNMSfEopcqwsvWEVqAVwoGKghLMxZBHZfqY(void)

{
  return;
}


// =========================================================================
// Function: b_zDGUbzDhFbTsYDFvujiBynGjoPETkYTDKwpMJEZfjJUwHkH
// Entry: 0x71afd5f8 | Size: 308 bytes
// =========================================================================

void b_zDGUbzDhFbTsYDFvujiBynGjoPETkYTDKwpMJEZfjJUwHkH(int *param_1,float param_2)

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
// Function: _tWweJGffQ_XLEQuOsvorzWChnYsajgLTUzbeTWCCfaUlRnJRYkDkEt
// Entry: 0x71afd748 | Size: 196 bytes
// =========================================================================

float _tWweJGffQ_XLEQuOsvorzWChnYsajgLTUzbeTWCCfaUlRnJRYkDkEt(undefined4 param_1,float param_2)

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
// Function: ZtCBcoAbzYJZOevkolmWSQyAFNbqbmgaPhWaLVlFPEeZMXSJmJScthHHAU_Sqt
// Entry: 0x71afdd2c | Size: 124 bytes
// =========================================================================

void ZtCBcoAbzYJZOevkolmWSQyAFNbqbmgaPhWaLVlFPEeZMXSJmJScthHHAU_Sqt
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
// Function: ZDSAGPVedqdUzrvzzACdBQZLFnEAU_oYghTwJhlaRnbLWrfgzfrJSryJroTSnz
// Entry: 0x71afddb8 | Size: 116 bytes
// =========================================================================

void ZDSAGPVedqdUzrvzzACdBQZLFnEAU_oYghTwJhlaRnbLWrfgzfrJSryJroTSnz(int param_1,int param_2)

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
// Function: PcaodDHsCipOsSxlCpNqGOVVRRZNCJzxR_rteSChMU_ayBVTDgic_XflMcwfQbedBOt
// Entry: 0x71afde3c | Size: 4 bytes
// =========================================================================

void PcaodDHsCipOsSxlCpNqGOVVRRZNCJzxR_rteSChMU_ayBVTDgic_XflMcwfQbedBOt(void)

{
  return;
}


// =========================================================================
// Function: cUGXZFjnwnCRLcCInbDkytPrSvqortrehqirwytLHGk_kLVbPyNfOJcimBF_rcSpAXJOhaeWjOqnZc_k
// Entry: 0x71afde40 | Size: 1860 bytes
// =========================================================================

void cUGXZFjnwnCRLcCInbDkytPrSvqortrehqirwytLHGk_kLVbPyNfOJcimBF_rcSpAXJOhaeWjOqnZc_k
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
// Function: ScxNepyyTeaIhkmtbFcsTxOmmpmRSDhHGXpruyroymyBLx
// Entry: 0x71afe59c | Size: 12 bytes
// =========================================================================

void ScxNepyyTeaIhkmtbFcsTxOmmpmRSDhHGXpruyroymyBLx(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


// =========================================================================
// Function: LlTLdgsVYagt_eYMzIiayBzrYlSbLkMkLMxwnBtSmUvJsqeHVQuGRrVkSFZlMV
// Entry: 0x71afe6d8 | Size: 68 bytes
// =========================================================================

undefined4 LlTLdgsVYagt_eYMzIiayBzrYlSbLkMkLMxwnBtSmUvJsqeHVQuGRrVkSFZlMV(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*param_1 == *param_2) {
    if ((float)param_1[1] != (float)param_2[1]) {
      return 0;
    }
    if ((float)param_1[2] == (float)param_2[2]) {
      uVar1 = 1;
    }
  }
  return uVar1;
}


// =========================================================================
// Function: fZcvAtIXfdjmpmzzsWj_dzDEtpQNDYyIAQ_xQwnnpgOIHwdRBAphmqoDJLOMGfrlKpCNgHA
// Entry: 0x71afe71c | Size: 20 bytes
// =========================================================================

float fZcvAtIXfdjmpmzzsWj_dzDEtpQNDYyIAQ_xQwnnpgOIHwdRBAphmqoDJLOMGfrlKpCNgHA(float *param_1)

{
  return *param_1 / param_1[1];
}


// =========================================================================
// Function: cGVcNoThBxSFtzltgAmvvfrLrXJajGQkGeOCexlNvaGtyKTYClcVpsXkzgOpXzacWvpWbuJkaziDLGQEPhNXquAVIOSAsiapIjYtRgXCMMjKKutztwgiAqXW
// Entry: 0x71afe730 | Size: 124 bytes
// =========================================================================

void cGVcNoThBxSFtzltgAmvvfrLrXJajGQkGeOCexlNvaGtyKTYClcVpsXkzgOpXzacWvpWbuJkaziDLGQEPhNXquAVIOSAsiapIjYtRgXCMMjKKutztwgiAqXW
               (undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_3 + 0xc);
  fVar1 = *(float *)(param_3 + 4);
  *param_1 = param_2;
  param_1[2] = param_4;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[8] = 0x3f800000;
  param_1[5] = 0x3f800000;
  param_1[6] = 400;
  param_1[3] = 400;
  fVar1 = (-20.0 - fVar2) - fVar1;
  fVar2 = fVar1;
  if (30.0 <= fVar1) {
    fVar2 = 30.0;
  }
  if (fVar1 <= -90.0) {
    fVar2 = -90.0;
  }
  param_1[1] = fVar2;
  param_1[9] = fVar2;
  param_1[7] = fVar2;
  param_1[4] = fVar2;
  return;
}


// =========================================================================
// Function: sQJqqgUupXEgZHgwodUnFcPFapJigeDbRoXYBNlm
// Entry: 0x71afe7b0 | Size: 52 bytes
// =========================================================================

void sQJqqgUupXEgZHgwodUnFcPFapJigeDbRoXYBNlm(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0xc) = 400;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18) = 400;
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return;
}


// =========================================================================
// Function: wWZmaEuOpQILDMjyRmKkaO_dLzhYiIL__VreQgVHSRf
// Entry: 0x71afe7e4 | Size: 304 bytes
// =========================================================================

void wWZmaEuOpQILDMjyRmKkaO_dLzhYiIL__VreQgVHSRf
               (int param_1,float param_2,undefined4 param_3,float param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  
  if (0.95 <= param_4) {
    iVar2 = *(int *)(param_1 + 0x2c) + 1;
    *(int *)(param_1 + 0x2c) = iVar2;
    if (*(int *)(param_1 + 0xc) == 0) {
      fVar6 = 0.9975;
    }
    else {
      fVar6 = 1.0;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -10;
    }
    iVar1 = *(int *)(param_1 + 8);
    fVar5 = param_4 + *(float *)(param_1 + 0x14) * fVar6;
    fVar6 = param_2 * param_4 + *(float *)(param_1 + 0x10) * fVar6;
    *(float *)(param_1 + 0x14) = fVar5;
    *(float *)(param_1 + 0x10) = fVar6;
    if (iVar1 <= iVar2) {
      fVar6 = fVar6 / fVar5;
      fVar5 = fVar6;
      if (30.0 <= fVar6) {
        fVar5 = 30.0;
      }
      if (fVar6 <= -90.0) {
        fVar5 = -90.0;
      }
      *(float *)(param_1 + 0x24) = fVar5;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 8);
    if (1 < iVar1) {
      if (*(int *)(param_1 + 0x2c) < iVar1) {
        if (*(int *)(param_1 + 0x2c) < 1) goto LAB_71afe8d0;
        iVar2 = 0xc;
        iVar4 = 0x18;
      }
      else {
        iVar2 = 0x18;
        iVar4 = 0xc;
      }
      uVar7 = *(undefined8 *)(param_1 + iVar4);
      *(undefined4 *)((undefined8 *)(param_1 + iVar2) + 1) =
           *(undefined4 *)((undefined8 *)(param_1 + iVar4) + 1);
      *(undefined8 *)(param_1 + iVar2) = uVar7;
    }
LAB_71afe8d0:
    iVar2 = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (iVar1 != 1) {
    if (*(int *)(param_1 + 0x18) == 0) {
      *(undefined1 *)(param_1 + 0x28) = 1;
      return;
    }
    bVar3 = false;
    if (iVar2 < iVar1) goto LAB_71afe90c;
  }
  bVar3 = *(int *)(param_1 + 0xc) == 0;
LAB_71afe90c:
  *(bool *)(param_1 + 0x28) = bVar3;
  return;
}


// =========================================================================
// Function: psegRJYsCWqnGNgqRxRXVILwyHiEZDDOeLxDROtcsvGGyaOKpPlUC
// Entry: 0x71afe920 | Size: 68 bytes
// =========================================================================

void psegRJYsCWqnGNgqRxRXVILwyHiEZDDOeLxDROtcsvGGyaOKpPlUC(int param_1)

{
  bool bVar1;
  
  if (*(int *)(param_1 + 8) != 1) {
    if (*(int *)(param_1 + 0x18) == 0) {
      *(undefined1 *)(param_1 + 0x28) = 1;
      return;
    }
    bVar1 = false;
    if (*(int *)(param_1 + 0x2c) < *(int *)(param_1 + 8)) goto LAB_71afe95c;
  }
  bVar1 = *(int *)(param_1 + 0xc) == 0;
LAB_71afe95c:
  *(bool *)(param_1 + 0x28) = bVar1;
  return;
}


// =========================================================================
// Function: wo_MhqnaHvTrOHSHDcS_GmKnfvSDTRQMCqTnLckDAzMrhVb_Gf
// Entry: 0x71afe964 | Size: 4 bytes
// =========================================================================

void wo_MhqnaHvTrOHSHDcS_GmKnfvSDTRQMCqTnLckDAzMrhVb_Gf(void)

{
  return;
}


// =========================================================================
// Function: zRIAwcHmYavnRkUiwC_XjPavZzZtyFGaHUSQVUcGEmuXYcUQdXnIZOElEqgqvgvBtgDQuuYsyiTeYHRzjEXBiCe
// Entry: 0x71afe968 | Size: 24 bytes
// =========================================================================

void zRIAwcHmYavnRkUiwC_XjPavZzZtyFGaHUSQVUcGEmuXYcUQdXnIZOElEqgqvgvBtgDQuuYsyiTeYHRzjEXBiCe
               (int param_1,undefined4 *param_2)

{
  *param_2 = 400;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = 0x3f800000;
  return;
}


// =========================================================================
// Function: vEUNhwLVeWuVw_xtymXpiPxOFtrXzRxmAFgfSGoZkHG_UQAZLnvTAfJ_biOThKXEZTYZaEDj
// Entry: 0x71afe998 | Size: 16 bytes
// =========================================================================

void vEUNhwLVeWuVw_xtymXpiPxOFtrXzRxmAFgfSGoZkHG_UQAZLnvTAfJ_biOThKXEZTYZaEDj
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_atUCMjyLrlfcx_EGOIbolybEEeOQSKOmOSOfCTVAxacVpSYhZErTxWEufhYaerVeaIl_ZgoKA
            (param_1,0x5dc,param_2,param_3);
  return;
}


// =========================================================================
// Function: atUCMjyLrlfcx_EGOIbolybEEeOQSKOmOSOfCTVAxacVpSYhZErTxWEufhYaerVeaIl_ZgoKA
// Entry: 0x71afe9a8 | Size: 148 bytes
// =========================================================================

undefined4
atUCMjyLrlfcx_EGOIbolybEEeOQSKOmOSOfCTVAxacVpSYhZErTxWEufhYaerVeaIl_ZgoKA
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piStack_24;
  
  piVar1 = (int *)thunk_MwhHq(0x1238);
  *piVar1 = (int)&DAT_70b1389c;
  thunk_nZnKNwDqrvRDuyfBNSEJExUOWdzNtBvCzYBXPJiwMmXaHfJrimhhqAxdnHgaCLPcGclf(piVar1 + 1,param_3);
  thunk_oNurGSIVHe_HX_EIiNvMenwGd_IvLDRcyTmWnaUssIdJFXEPStecldXU(piVar1 + 0x424,param_3);
  piStack_24 = piVar1;
  thunk_vTiDqBTNjWWKPzQnmknEhzaBdQYpPiCOxEVdLvDXvrkuwRGyyNaMZxgJJQoEbEPJnrAaKKVlrikTrGShIkmsDgIfYQ_qVIGzcmYkfoLslCbMg
            (param_1,param_2,&piStack_24,param_4);
  if (piStack_24 != (int *)0x0) {
    (**(code **)(*piStack_24 + 4))();
  }
  return param_1;
}


// =========================================================================
// Function: vTiDqBTNjWWKPzQnmknEhzaBdQYpPiCOxEVdLvDXvrkuwRGyyNaMZxgJJQoEbEPJnrAaKKVlrikTrGShIkmsDgIfYQ_qVIGzcmYkfoLslCbMg
// Entry: 0x71afea74 | Size: 552 bytes
// =========================================================================

int * vTiDqBTNjWWKPzQnmknEhzaBdQYpPiCOxEVdLvDXvrkuwRGyyNaMZxgJJQoEbEPJnrAaKKVlrikTrGShIkmsDgIfYQ_qVIGzcmYkfoLslCbMg
                (int *param_1,int param_2,int *param_3,int param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = param_2 % 10;
  if (iVar5 == 0) {
    *param_1 = param_2 / 10;
    iVar5 = param_4 % 100;
    if (iVar5 == 0) {
      piVar2 = (int *)*param_3;
      param_1[1] = param_4 / 100;
      param_1[2] = param_2 / 10;
      iVar5 = *piVar2;
      *param_3 = 0;
      param_1[3] = (int)piVar2;
      iVar5 = (**(code **)(iVar5 + 8))();
      uVar1 = iVar5 / 100;
      if (iVar5 % 100 != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
                  (s_____webrtc_apm_src_webrtc_rtc_ba_7006a6d4,0x1e2,s_a___b____0_70065704,
                   &DAT_700984d0,iVar5 % 100,0,iVar5,s_is_not_evenly_divisible_by_7006252f,100);
      }
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      uVar4 = 0;
      if (0xc6 < iVar5 + 99U) {
        if (0x3fffffff < uVar1) {
          FUN_71a0103c(param_1 + 4);
          thunk_eTKktchCxUIAfWJsyUVzqfAMKsvyEqWT(0);
          iVar5 = param_1[4];
          if (iVar5 != 0) {
            param_1[5] = iVar5;
            thunk_qNQrlu();
          }
          piVar2 = (int *)param_1[3];
          param_1[3] = 0;
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 4))();
          }
                    /* WARNING: Subroutine does not return */
          thunk_NAUpeWJSovvMoxKm_();
        }
        iVar5 = uVar1 * 4;
        iVar3 = thunk_MwhHq(iVar5);
        param_1[6] = iVar3 + uVar1 * 4;
        param_1[4] = iVar3;
        imp___aeabi_memclr4(iVar3,iVar5);
        param_1[5] = iVar3 + iVar5;
        uVar4 = uVar1;
      }
      thunk__qYuhYJuttlHaXkRFtxtGpXKRzqne_YyBh(param_1 + 7,param_1[1],uVar4,1);
      (**(code **)(*(int *)param_1[3] + 0xc))();
      return param_1;
    }
    uVar6 = 100;
    param_2 = param_4;
  }
  else {
    uVar6 = 10;
  }
                    /* WARNING: Subroutine does not return */
  thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
            (s_____webrtc_apm_src_webrtc_rtc_ba_7006a6d4,0x1e2,s_a___b____0_70065704,&DAT_700984d0,
             iVar5,0,param_2,s_is_not_evenly_divisible_by_7006252f,uVar6);
}


// =========================================================================
// Function: rkwmwsyvDYbmxIPVqNfHLCjfAyBsQwDtcMKwJTDWBxIh
// Entry: 0x71afeccc | Size: 80 bytes
// =========================================================================

int rkwmwsyvDYbmxIPVqNfHLCjfAyBsQwDtcMKwJTDWBxIh(int param_1)

{
  int *piVar1;
  
  thunk_eTKktchCxUIAfWJsyUVzqfAMKsvyEqWT(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x10) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x10);
    thunk_qNQrlu();
  }
  piVar1 = *(int **)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return param_1;
}


// =========================================================================
// Function: pnCqRfrRoOXlKgD_ewUZVBItdmx_ZxaCOTIVaOdRTyAKaiAcFhftwcIGnizIvMIRdR_DMwEdotts
// Entry: 0x71afed1c | Size: 156 bytes
// =========================================================================

void pnCqRfrRoOXlKgD_ewUZVBItdmx_ZxaCOTIVaOdRTyAKaiAcFhftwcIGnizIvMIRdR_DMwEdotts
               (undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[2];
  iVar2 = iVar1 + -1;
  param_1[2] = iVar2;
  if (iVar2 == 0 || iVar1 < 1) {
    (**(code **)(*(int *)param_1[3] + 0xc))();
    param_1[2] = *param_1;
  }
  iVar2 = param_1[4];
  iVar1 = 0;
  if (param_1[5] != iVar2) {
    iVar1 = iVar2;
  }
  if (param_3 == 0) {
    param_4 = 0;
  }
  thunk_m_NAmIqKHROjwSkSTzOndZJFYJbvtHNzhYFMzUlOUiOBWngzTioUDiUNRSmlCLXIjlScHwMCSkgfhlQidE
            (param_1 + 7,param_4,param_3,iVar1,param_1[5] - iVar2 >> 2);
  iVar2 = param_1[4];
  iVar1 = 0;
  if (param_1[5] != iVar2) {
    iVar1 = iVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x71afedb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)param_1[3] + 0x10))((int *)param_1[3],iVar1,param_1[5] - iVar2 >> 2);
  return;
}


// =========================================================================
// Function: FUN_71afedb8
// Entry: 0x71afedb8 | Size: 60 bytes
// =========================================================================

undefined4 * FUN_71afedb8(undefined4 *param_1)

{
  *param_1 = &DAT_70b1389c;
  thunk_lvefKwWnYDOnnozzScaitZzjRLyAY(param_1 + 0x424);
  thunk_AYCBmHkNqaFTiJMhiPDkLbbUPYgzjDZxxxWvsKQNQ(param_1 + 1);
  return param_1;
}


// =========================================================================
// Function: FUN_71afedf8
// Entry: 0x71afedf8 | Size: 64 bytes
// =========================================================================

void FUN_71afedf8(undefined4 *param_1)

{
  *param_1 = &DAT_70b1389c;
  thunk_lvefKwWnYDOnnozzScaitZzjRLyAY(param_1 + 0x424);
  thunk_AYCBmHkNqaFTiJMhiPDkLbbUPYgzjDZxxxWvsKQNQ(param_1 + 1);
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: FUN_71afee50
// Entry: 0x71afee50 | Size: 60 bytes
// =========================================================================

void FUN_71afee50(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_b8 [168];
  
  uVar1 = thunk_WVmiALmpJBDDkRLIFqxkTxOevJOFNWCiIQAtqwNcYzjadCSHTsZyUGHme_shojHZojydYbpFxjSVRRHHkosciobwCECTgadMIFmOSRBpMB
                    (param_1 + 4,param_2,auStack_b8);
  thunk_kUtjzMaCJHLcHgHvkQuWC_kpSfROzZLRBBTdAgYZfIqvDHw_ySfTYNuGTugobLUBLJewmuNNHUt
            (param_1 + 0x1090,auStack_b8,uVar1);
  return;
}


// =========================================================================
// Function: nZnKNwDqrvRDuyfBNSEJExUOWdzNtBvCzYBXPJiwMmXaHfJrimhhqAxdnHgaCLPcGclf
// Entry: 0x71aff358 | Size: 248 bytes
// =========================================================================

char * nZnKNwDqrvRDuyfBNSEJExUOWdzNtBvCzYBXPJiwMmXaHfJrimhhqAxdnHgaCLPcGclf
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
// Function: vINPOhfT_SiPQtaQayGcpILH_ThEUWqwjjU_wshLSsapy
// Entry: 0x71aff4d4 | Size: 68 bytes
// =========================================================================

void vINPOhfT_SiPQtaQayGcpILH_ThEUWqwjjU_wshLSsapy(char *param_1)

{
  if (0 < *(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28)) {
    imp___aeabi_memclr4();
  }
  thunk_oKCIaDWsZIoSaaNcHBgIeLZUckaFoeuOum_NTUHXCdfnZaiZHfNcY(param_1 + 0x98);
  if (*param_1 != '\0') {
    thunk_pkTw_YJoxqtEvhsASuWGNzyiiSmpemDj(param_1 + 4);
    return;
  }
  return;
}


// =========================================================================
// Function: AYCBmHkNqaFTiJMhiPDkLbbUPYgzjDZxxxWvsKQNQ
// Entry: 0x71aff518 | Size: 84 bytes
// =========================================================================

int AYCBmHkNqaFTiJMhiPDkLbbUPYgzjDZxxxWvsKQNQ(int param_1)

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
// Function: WVmiALmpJBDDkRLIFqxkTxOevJOFNWCiIQAtqwNcYzjadCSHTsZyUGHme_shojHZojydYbpFxjSVRRHHkosciobwCECTgadMIFmOSRBpMB
// Entry: 0x71aff56c | Size: 288 bytes
// =========================================================================

void WVmiALmpJBDDkRLIFqxkTxOevJOFNWCiIQAtqwNcYzjadCSHTsZyUGHme_shojHZojydYbpFxjSVRRHHkosciobwCECTgadMIFmOSRBpMB
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
// Function: CuMjfweCqEfLNMapwHArMcjtLZIxCvq_XGzsLgpHq
// Entry: 0x71affa98 | Size: 36 bytes
// =========================================================================

void CuMjfweCqEfLNMapwHArMcjtLZIxCvq_XGzsLgpHq(undefined8 *param_1,undefined8 *param_2)

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
// Function: yLNXSumhunHh_KEgGbRWYBBvzCQT
// Entry: 0x71affabc | Size: 4 bytes
// =========================================================================

void yLNXSumhunHh_KEgGbRWYBBvzCQT(void)

{
  return;
}


// =========================================================================
// Function: dnLGjEekscFzVLoYNikmDlVLwqzrbADJEwaKxeyByqnUiGLTs
// Entry: 0x71affac0 | Size: 32 bytes
// =========================================================================

void dnLGjEekscFzVLoYNikmDlVLwqzrbADJEwaKxeyByqnUiGLTs(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *(undefined4 *)(param_2 + 2);
  *param_1 = *param_2;
  param_1[1] = uVar2;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)param_1 + 0x1c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)(param_1 + 2) = uVar1;
  return;
}


// =========================================================================
// Function: pkTw_YJoxqtEvhsASuWGNzyiiSmpemDj
// Entry: 0x71affae0 | Size: 16 bytes
// =========================================================================

void pkTw_YJoxqtEvhsASuWGNzyiiSmpemDj(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  return;
}


// =========================================================================
// Function: ehVOBipNoUVIEbuYcOOitsxRdddNDsxAlPZzAiVdDEZcHtpoUVWrrXAZgGCcIjDbgxVHpxigKgwzW
// Entry: 0x71affaf0 | Size: 136 bytes
// =========================================================================

void ehVOBipNoUVIEbuYcOOitsxRdddNDsxAlPZzAiVdDEZcHtpoUVWrrXAZgGCcIjDbgxVHpxigKgwzW
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
// Function: NxjCrNENClXUwiDaXilxzGNloUhtnjcSKSlHCITkhFdHFfnQFZstKRTxVfezfoGeu
// Entry: 0x71affb90 | Size: 208 bytes
// =========================================================================

undefined2 *
NxjCrNENClXUwiDaXilxzGNloUhtnjcSKSlHCITkhFdHFfnQFZstKRTxVfezfoGeu
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
// Function: nAEXYGiAjImbejVgVlFICfeTOoYMNNhRgeWuih
// Entry: 0x71affca0 | Size: 88 bytes
// =========================================================================

int nAEXYGiAjImbejVgVlFICfeTOoYMNNhRgeWuih(int param_1)

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
// Function: WdioBfjiwGCpKICSbifqaqGAdonLCeqofXixJoDcXbFyiGjcMBoJyAJSikGnOPhaiBAMXk
// Entry: 0x71affcf8 | Size: 236 bytes
// =========================================================================

void WdioBfjiwGCpKICSbifqaqGAdonLCeqofXixJoDcXbFyiGjcMBoJyAJSikGnOPhaiBAMXk
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
// Function: VEmacybea_ztQhFRvEincYffdeecdeGRdiccKASpbymWOAdAt
// Entry: 0x71b00080 | Size: 76 bytes
// =========================================================================

int VEmacybea_ztQhFRvEincYffdeecdeGRdiccKASpbymWOAdAt(int param_1)

{
  int iVar1;
  
  iVar1 = thunk_fyyMVOygMhMevIkrkTTUtzbPTMHqUsLol(param_1,0x200,0);
  thunk_fTPUMqEBRBLiG_BFUgrKcLOVDOfAQdsGZ(iVar1 + 0x10,param_1);
  thunk_fTPUMqEBRBLiG_BFUgrKcLOVDOfAQdsGZ(param_1 + 0x14,param_1);
  thunk_fTPUMqEBRBLiG_BFUgrKcLOVDOfAQdsGZ(param_1 + 0x18,param_1);
  return param_1;
}


// =========================================================================
// Function: VVkauTHYjCrpyFijxxbuITqGsKpLuHhWfTkrNrZhVbBEwrowT
// Entry: 0x71b000f8 | Size: 104 bytes
// =========================================================================

void VVkauTHYjCrpyFijxxbuITqGsKpLuHhWfTkrNrZhVbBEwrowT(int param_1)

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
// Function: sCi_oRaeY_EHohURkmOwCEseEkXFvmF_YsuYsIYyc_tIzghCLThPuGkZdiTjabfvtO_AEDpXCUrFNWLsDDyuejbOjRh_LsmplGHDQmwKlejn
// Entry: 0x71b00160 | Size: 356 bytes
// =========================================================================

void sCi_oRaeY_EHohURkmOwCEseEkXFvmF_YsuYsIYyc_tIzghCLThPuGkZdiTjabfvtO_AEDpXCUrFNWLsDDyuejbOjRh_LsmplGHDQmwKlejn
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
// Function: IRCXkiItUzsTmtfmybENXNFMwzxYflqXPCKdsGUOXMKmjzBWaFuYGRShwau_ho_zlXziBw_
// Entry: 0x71b0065c | Size: 96 bytes
// =========================================================================

void IRCXkiItUzsTmtfmybENXNFMwzxYflqXPCKdsGUOXMKmjzBWaFuYGRShwau_ho_zlXziBw_
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
// Function: YNdwMjlTAwNsMgfvTDEdcRgCHyYzXJeulsHBaUdCMLtE__KEYqgWWRouewqUebHkJseNBQmFVqkmUIFaFKTqFHkQugOSmUnOGlpmZyOu_oUamwuUXlZRmwKoQtGZQ
// Entry: 0x71b006bc | Size: 112 bytes
// =========================================================================

void YNdwMjlTAwNsMgfvTDEdcRgCHyYzXJeulsHBaUdCMLtE__KEYqgWWRouewqUebHkJseNBQmFVqkmUIFaFKTqFHkQugOSmUnOGlpmZyOu_oUamwuUXlZRmwKoQtGZQ
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
// Function: oHExgsGtDOcJWLaFYtFEAkeQTmhKuBVcfRytRsvTRGmlFMzCYARSiiQJPlKVQyLsewPeESPJ_ywQHzCOACdCFudKyDSIAmHCMJQIHMPJfQNzRXlE
// Entry: 0x71b00730 | Size: 252 bytes
// =========================================================================

void oHExgsGtDOcJWLaFYtFEAkeQTmhKuBVcfRytRsvTRGmlFMzCYARSiiQJPlKVQyLsewPeESPJ_ywQHzCOACdCFudKyDSIAmHCMJQIHMPJfQNzRXlE
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
// Function: RDeKBXYTRHPwNtMfqHrzuNStrAETKuKMoIe_EkeOjnsXURRXwkuZfuzsDEtgtidKIsVnDmiUJeSyZAZchLp_nqDYt_bwHlwvqwsskAKMtlqbBzGFhacyZXjakNuWJjrmScgjmQPnQuqG
// Entry: 0x71b00830 | Size: 856 bytes
// =========================================================================

int RDeKBXYTRHPwNtMfqHrzuNStrAETKuKMoIe_EkeOjnsXURRXwkuZfuzsDEtgtidKIsVnDmiUJeSyZAZchLp_nqDYt_bwHlwvqwsskAKMtlqbBzGFhacyZXjakNuWJjrmScgjmQPnQuqG
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
// Function: vnNgzwdNnJROOgYoqykdnfQzWboBWbqsNaJzLSYpKBzjfxENtmng_wdxMspELIcCxN_cQtiIRMDnYPmgsmKXSFkcmACUqpUIWLNPti_yzqTAPhibDsRywfNHchYNI_iNTF_lxzeX
// Entry: 0x71b00b90 | Size: 1068 bytes
// =========================================================================

void vnNgzwdNnJROOgYoqykdnfQzWboBWbqsNaJzLSYpKBzjfxENtmng_wdxMspELIcCxN_cQtiIRMDnYPmgsmKXSFkcmACUqpUIWLNPti_yzqTAPhibDsRywfNHchYNI_iNTF_lxzeX
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
// Function: JGnWLtHNBLpBfuQcLgBncnENCRQiYTWsMXbjcnavwcxjuu_le
// Entry: 0x71b01060 | Size: 248 bytes
// =========================================================================

int JGnWLtHNBLpBfuQcLgBncnENCRQiYTWsMXbjcnavwcxjuu_le(int param_1)

{
  float *pfVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  
  imp___aeabi_memclr4(param_1,0x3c0);
  iVar2 = 0;
  dVar3 = 0.0;
  do {
    dVar4 = ((dVar3 + 0.5) * 1.5707963267948966) / 240.0;
    dVar4 = (double)imp_sin(SUB84(dVar4,0),(int)((ulonglong)dVar4 >> 0x20));
    dVar4 = dVar4 * dVar4 * 1.5707963267948966;
    dVar4 = (double)imp_sin(SUB84(dVar4,0),(int)((ulonglong)dVar4 >> 0x20));
    pfVar1 = (float *)(param_1 + iVar2);
    dVar3 = dVar3 + 1.0;
    iVar2 = iVar2 + 4;
    *pfVar1 = (float)(dVar4 * 0.0020833334419876337);
  } while (iVar2 != 0x3c0);
  iVar2 = param_1 + 0x3c0;
  thunk_fyyMVOygMhMevIkrkTTUtzbPTMHqUsLol(iVar2,0x1e0,0);
  thunk_fTPUMqEBRBLiG_BFUgrKcLOVDOfAQdsGZ(param_1 + 0x3d0,iVar2);
  thunk_fTPUMqEBRBLiG_BFUgrKcLOVDOfAQdsGZ(param_1 + 0x3d4,iVar2);
  thunk_fTPUMqEBRBLiG_BFUgrKcLOVDOfAQdsGZ(param_1 + 0x3d8,iVar2);
  thunk_hRxEPENoECLOVScKDtwxlsSgEQtrymaxeeK_yrEozk(param_1 + 0x3dc);
  thunk_gfvelQZpEcIUFfuxEQUSqeLYk_ZzWLlKwAivU(param_1 + 0x4d8);
  imp___aeabi_memclr4(param_1 + 0xc68,0x388);
  return param_1;
}


// =========================================================================
// Function: GdKToftlFouRSZEDUOMXwtgbgQNtjewLtwpzjRURVAnpierwe
// Entry: 0x71b011b8 | Size: 116 bytes
// =========================================================================

int GdKToftlFouRSZEDUOMXwtgbgQNtjewLtwpzjRURVAnpierwe(int param_1)

{
  int iVar1;
  
  thunk_fgFjqEsIAjLKMVtRCHZnYEpZFMyLyxKVkfPuMcgCXY(param_1 + 0x3dc);
  iVar1 = *(int *)(param_1 + 0x3d8);
  *(undefined4 *)(param_1 + 0x3d8) = 0;
  if (iVar1 != 0) {
    thunk_MoWCgOEvNFnIfeJwQZehZmjCXReekaAPR();
    thunk_qNQrlu();
  }
  iVar1 = *(int *)(param_1 + 0x3d4);
  *(undefined4 *)(param_1 + 0x3d4) = 0;
  if (iVar1 != 0) {
    thunk_MoWCgOEvNFnIfeJwQZehZmjCXReekaAPR();
    thunk_qNQrlu();
  }
  iVar1 = *(int *)(param_1 + 0x3d0);
  *(undefined4 *)(param_1 + 0x3d0) = 0;
  if (iVar1 != 0) {
    thunk_MoWCgOEvNFnIfeJwQZehZmjCXReekaAPR();
    thunk_qNQrlu();
  }
  thunk_vCBnCSmxQftcHuTI_iwg(param_1 + 0x3c0);
  return param_1;
}


// =========================================================================
// Function: oKCIaDWsZIoSaaNcHBgIeLZUckaFoeuOum_NTUHXCdfnZaiZHfNcY
// Entry: 0x71b0122c | Size: 28 bytes
// =========================================================================

void oKCIaDWsZIoSaaNcHBgIeLZUckaFoeuOum_NTUHXCdfnZaiZHfNcY(int param_1)

{
  imp___aeabi_memclr4(param_1 + 0xc6c,900);
  return;
}


// =========================================================================
// Function: whZOywNEBoKqTqyCVwFrVnvYSiLQZekKn_mkVkovVFXYXSRgNYDiWdgjhoCRUrVyjrmU_dAfKkOxINVMbWRojQgYORAR_fPSmrpVKTeWxGCEncntmdkv_kFAvOlEcdRatEKMlAuREmGM
// Entry: 0x71b01248 | Size: 1324 bytes
// =========================================================================

bool whZOywNEBoKqTqyCVwFrVnvYSiLQZekKn_mkVkovVFXYXSRgNYDiWdgjhoCRUrVyjrmU_dAfKkOxINVMbWRojQgYORAR_fPSmrpVKTeWxGCEncntmdkv_kFAvOlEcdRatEKMlAuREmGM
               (int param_1,int param_2,int param_3,undefined8 *param_4,undefined4 param_5,
               undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 *param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
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
  int aiStack_f0 [22];
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  float afStack_88 [8];
  
  uVar9 = *(undefined4 *)(param_1 + 0x3d0);
  uVar8 = *(undefined4 *)(param_1 + 0x3d4);
  thunk_mguoHeaWBItStnWikIAmIltiHKBygXqMVIjBNnG(aiStack_f0,uVar9);
  iVar1 = 0x77c;
  iVar3 = 0;
  do {
    pfVar4 = (float *)(param_1 + iVar3);
    pfVar5 = (float *)(param_2 + iVar3);
    pfVar6 = (float *)(aiStack_f0[0] + iVar3);
    iVar3 = iVar3 + 4;
    *pfVar6 = *pfVar5 * *pfVar4;
    pfVar5 = (float *)(param_2 + iVar1);
    pfVar6 = (float *)(aiStack_f0[0] + iVar1);
    iVar1 = iVar1 + -4;
    *pfVar6 = *pfVar5 * *pfVar4;
  } while (iVar1 != 0x3bc);
  thunk_CwfQNpPlBfFTuLSDAPZsaYoDHvFWLBMxGYxVkbdHaJexENdFBwwneQgtgOFO(param_1 + 0x3c0,uVar9,uVar8,1);
  thunk_mguoHeaWBItStnWikIAmIltiHKBygXqMVIjBNnG(&fStack_148,uVar8);
  iVar1 = 0;
  *(undefined4 *)((int)fStack_148 + 4) = 0;
  thunk_nElObgiZKoHdtlYaZsglUEDn_BfBPDYeQSzFrsBiSToXcv(&uStack_90,*(undefined4 *)(param_1 + 0x3d4));
  thunk_RlSeVVktKyHraGkAqXcLn_vlaXTpLigmWweuhjczAAYGmGplurfzUXqCMPThgwRdQthwoCrqVCAstmZIkiGWd_oxbQThrTusTfHTOcjjB
            (param_1 + 0x3dc,uStack_90,uStack_8c,param_1 + 1000);
  fVar10 = *(float *)(param_1 + 1000) + 0.0 + *(float *)(param_1 + 0x3ec) +
           *(float *)(param_1 + 0x3f0) + *(float *)(param_1 + 0x3f4) + *(float *)(param_1 + 0x3f8) +
           *(float *)(param_1 + 0x3fc) + *(float *)(param_1 + 0x400) + *(float *)(param_1 + 0x404) +
           *(float *)(param_1 + 0x408) + *(float *)(param_1 + 0x40c) + *(float *)(param_1 + 0x410) +
           *(float *)(param_1 + 0x414) + *(float *)(param_1 + 0x418) + *(float *)(param_1 + 0x41c) +
           *(float *)(param_1 + 0x420) + *(float *)(param_1 + 0x424) + *(float *)(param_1 + 0x428) +
           *(float *)(param_1 + 0x42c) + *(float *)(param_1 + 0x430) + *(float *)(param_1 + 0x434);
  if (0.04 <= fVar10) {
    uVar9 = *(undefined4 *)(param_1 + 0x3d0);
    uVar8 = *(undefined4 *)(param_1 + 0x3d8);
    thunk_mguoHeaWBItStnWikIAmIltiHKBygXqMVIjBNnG(aiStack_f0,uVar9);
    iVar3 = 0x77c;
    do {
      pfVar4 = (float *)(param_1 + iVar1);
      pfVar5 = (float *)(param_3 + iVar1);
      pfVar6 = (float *)(aiStack_f0[0] + iVar1);
      iVar1 = iVar1 + 4;
      *pfVar6 = *pfVar5 * *pfVar4;
      pfVar5 = (float *)(param_3 + iVar3);
      pfVar6 = (float *)(aiStack_f0[0] + iVar3);
      iVar3 = iVar3 + -4;
      *pfVar6 = *pfVar5 * *pfVar4;
    } while (iVar3 != 0x3bc);
    thunk_CwfQNpPlBfFTuLSDAPZsaYoDHvFWLBMxGYxVkbdHaJexENdFBwwneQgtgOFO
              (param_1 + 0x3c0,uVar9,uVar8,1);
    thunk_mguoHeaWBItStnWikIAmIltiHKBygXqMVIjBNnG(&fStack_148,uVar8);
    iVar3 = 0;
    *(undefined4 *)((int)fStack_148 + 4) = 0;
    thunk_nElObgiZKoHdtlYaZsglUEDn_BfBPDYeQSzFrsBiSToXcv
              (&uStack_98,*(undefined4 *)(param_1 + 0x3d8));
    thunk_RlSeVVktKyHraGkAqXcLn_vlaXTpLigmWweuhjczAAYGmGplurfzUXqCMPThgwRdQthwoCrqVCAstmZIkiGWd_oxbQThrTusTfHTOcjjB
              (param_1 + 0x3dc,uStack_98,uStack_94,param_1 + 0x438);
    thunk_CjcFqQwPzbKvGNcjEQM_NsiakNHztNxsQNrykpoYrPCoEklXCGHvkjdHYQuEEqAvJo_z_JhXfWwHaUxIMfcaEMiDkYkEvAMgt
              (param_1 + 1000,0x14,aiStack_f0);
    thunk_EfVREGFIYJFIl_sGhndlgJJKWNrxyxpQxhNRGeAoZDmliHRqDsSbjertipnGOYGgxYKprYrP_PFzBOEwuKevqlWRnBd
              (aiStack_f0,0x16,param_1 + 0x4d8,&fStack_148,0x16);
    fVar12 = fStack_148 + -12.0;
    fVar13 = fStack_144 + -4.0;
    fStack_148 = fVar12;
    fStack_144 = fVar13;
    imp___aeabi_memcpy4(*(int *)(param_1 + 0xc68) * 0x58 + param_1 + 0xc6c,&fStack_148,0x58);
    iVar1 = 0;
    if (*(int *)(param_1 + 0xc68) != 7) {
      iVar1 = *(int *)(param_1 + 0xc68) + 1;
    }
    iVar2 = iVar1 * 0x58 + 0xbbc;
    *(int *)(param_1 + 0xc68) = iVar1;
    iVar1 = iVar1 + -2;
    do {
      iVar7 = (short)(ushort)((uint)iVar1 >> 0x1f) * 0x2c0 + iVar2;
      iVar2 = iVar2 + -0x58;
      pfVar4 = (float *)(param_1 + iVar7);
      fVar14 = fVar12 - *pfVar4;
      fVar11 = fVar13 - pfVar4[1];
      pfVar5 = (float *)((int)afStack_88 + iVar3);
      iVar3 = iVar3 + 4;
      *pfVar5 = fVar14 * fVar14 + 0.0 + fVar11 * fVar11 +
                (fStack_140 - pfVar4[2]) * (fStack_140 - pfVar4[2]) +
                (fStack_13c - pfVar4[3]) * (fStack_13c - pfVar4[3]) +
                (fStack_138 - pfVar4[4]) * (fStack_138 - pfVar4[4]) +
                (fStack_134 - pfVar4[5]) * (fStack_134 - pfVar4[5]) +
                (fStack_130 - pfVar4[6]) * (fStack_130 - pfVar4[6]) +
                (fStack_12c - pfVar4[7]) * (fStack_12c - pfVar4[7]) +
                (fStack_128 - pfVar4[8]) * (fStack_128 - pfVar4[8]) +
                (fStack_124 - pfVar4[9]) * (fStack_124 - pfVar4[9]) +
                (fStack_120 - pfVar4[10]) * (fStack_120 - pfVar4[10]) +
                (fStack_11c - pfVar4[0xb]) * (fStack_11c - pfVar4[0xb]) +
                (fStack_118 - pfVar4[0xc]) * (fStack_118 - pfVar4[0xc]) +
                (fStack_114 - pfVar4[0xd]) * (fStack_114 - pfVar4[0xd]) +
                (fStack_110 - pfVar4[0xe]) * (fStack_110 - pfVar4[0xe]) +
                (fStack_10c - pfVar4[0xf]) * (fStack_10c - pfVar4[0xf]) +
                (fStack_108 - pfVar4[0x10]) * (fStack_108 - pfVar4[0x10]) +
                (fStack_104 - pfVar4[0x11]) * (fStack_104 - pfVar4[0x11]) +
                (fStack_100 - pfVar4[0x12]) * (fStack_100 - pfVar4[0x12]) +
                (fStack_fc - pfVar4[0x13]) * (fStack_fc - pfVar4[0x13]) +
                (fStack_f8 - pfVar4[0x14]) * (fStack_f8 - pfVar4[0x14]) +
                (fStack_f4 - pfVar4[0x15]) * (fStack_f4 - pfVar4[0x15]);
      iVar1 = iVar1 + -1;
    } while (iVar3 != 0x1c);
    imp___aeabi_memmove4(param_1 + 0xf2c,param_1 + 0xf4c,0xa4);
    *(float *)(param_1 + 0xfec) = afStack_88[0];
    *(float *)(param_1 + 0xf44) = afStack_88[6];
    *(float *)(param_1 + 0xf98) = afStack_88[3];
    *(float *)(param_1 + 0xfd0) = afStack_88[1];
    *(float *)(param_1 + 0xfb4) = afStack_88[2];
    *(float *)(param_1 + 0xf7c) = afStack_88[4];
    *(float *)(param_1 + 0xf60) = afStack_88[5];
    *param_4 = CONCAT44(fStack_12c,fStack_130);
    param_4[1] = CONCAT44(fStack_124,fStack_128);
    param_4[2] = CONCAT44(fStack_11c,fStack_120);
    param_4[3] = CONCAT44(fStack_114,fStack_118);
    param_4[4] = CONCAT44(fStack_10c,fStack_110);
    param_4[5] = CONCAT44(fStack_104,fStack_108);
    param_4[6] = CONCAT44(fStack_fc,fStack_100);
    param_4[7] = CONCAT44(fStack_f4,fStack_f8);
    thunk_nyLclPUihMwUaYqBZeeGrQgWuzBdEoYumDjzElqBBOIRVkelMVbHqyklRnrlFIsWqoeARvgHulvFKsmawxzGFAqtQTbznhMXnrSMwA
              (param_1,param_5,param_6,param_7);
    thunk_hGJZgOQNiaaUbZEscZvTJKiRk_vnSLrBdtafeeghYLG_gmgwKAdutoeUjsYAdOyVQbhMADmuoqQnNiIKjSnqUJhunlvOKCDRokWUfFBzYiV
              (param_1,param_8);
    uVar8 = thunk_qZPyvvvEsXeGYecCNKnUVCkNlRIZQeeeyfSyDvJvkCFZxtpQaJvTknxXFHkpBaLxZoli(param_1);
    *param_9 = uVar8;
  }
  return fVar10 < 0.04;
}


// =========================================================================
// Function: nyLclPUihMwUaYqBZeeGrQgWuzBdEoYumDjzElqBBOIRVkelMVbHqyklRnrlFIsWqoeARvgHulvFKsmawxzGFAqtQTbznhMXnrSMwA
// Entry: 0x71b0177c | Size: 488 bytes
// =========================================================================

void nyLclPUihMwUaYqBZeeGrQgWuzBdEoYumDjzElqBBOIRVkelMVbHqyklRnrlFIsWqoeARvgHulvFKsmawxzGFAqtQTbznhMXnrSMwA
               (int param_1,float *param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  
  iVar2 = *(int *)(param_1 + 0xc68);
  param_1 = param_1 + 0xc6c;
  pfVar3 = (float *)(((iVar2 - 2U >> 0x1c & 8) + (iVar2 - 2U)) * 0x58 + param_1);
  pfVar4 = (float *)(((iVar2 - 1U >> 0x1c & 8) + (iVar2 - 1U)) * 0x58 + param_1);
  pfVar1 = (float *)(((iVar2 - 3U >> 0x1c & 8) + (iVar2 - 3U)) * 0x58 + param_1);
  *param_2 = *pfVar4 + *pfVar3 + *pfVar1;
  *param_3 = *pfVar4 - *pfVar1;
  *param_4 = (*pfVar4 - (*pfVar3 + *pfVar3)) + *pfVar1;
  param_2[1] = pfVar4[1] + pfVar3[1] + pfVar1[1];
  param_3[1] = pfVar4[1] - pfVar1[1];
  param_4[1] = (pfVar4[1] - (pfVar3[1] + pfVar3[1])) + pfVar1[1];
  param_2[2] = pfVar4[2] + pfVar3[2] + pfVar1[2];
  param_3[2] = pfVar4[2] - pfVar1[2];
  param_4[2] = (pfVar4[2] - (pfVar3[2] + pfVar3[2])) + pfVar1[2];
  param_2[3] = pfVar4[3] + pfVar3[3] + pfVar1[3];
  param_3[3] = pfVar4[3] - pfVar1[3];
  param_4[3] = (pfVar4[3] - (pfVar3[3] + pfVar3[3])) + pfVar1[3];
  param_2[4] = pfVar4[4] + pfVar3[4] + pfVar1[4];
  param_3[4] = pfVar4[4] - pfVar1[4];
  param_4[4] = (pfVar4[4] - (pfVar3[4] + pfVar3[4])) + pfVar1[4];
  param_2[5] = pfVar4[5] + pfVar3[5] + pfVar1[5];
  param_3[5] = pfVar4[5] - pfVar1[5];
  param_4[5] = (pfVar4[5] - (pfVar3[5] + pfVar3[5])) + pfVar1[5];
  return;
}


// =========================================================================
// Function: hGJZgOQNiaaUbZEscZvTJKiRk_vnSLrBdtafeeghYLG_gmgwKAdutoeUjsYAdOyVQbhMADmuoqQnNiIKjSnqUJhunlvOKCDRokWUfFBzYiV
// Entry: 0x71b01964 | Size: 208 bytes
// =========================================================================

void hGJZgOQNiaaUbZEscZvTJKiRk_vnSLrBdtafeeghYLG_gmgwKAdutoeUjsYAdOyVQbhMADmuoqQnNiIKjSnqUJhunlvOKCDRokWUfFBzYiV
               (int param_1,float *param_2)

{
  float *pfVar1;
  int iVar2;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  thunk_nElObgiZKoHdtlYaZsglUEDn_BfBPDYeQSzFrsBiSToXcv(&uStack_20,*(undefined4 *)(param_1 + 0x3d4));
  thunk_nElObgiZKoHdtlYaZsglUEDn_BfBPDYeQSzFrsBiSToXcv(&uStack_28,*(undefined4 *)(param_1 + 0x3d8));
  thunk_jfhkRwvXZxPmZfifvedmRFPBfUcB_ARYmVBSbNpVzuLalxxaKxfeQjOEkAWrmXlimTlQ_DRnofXHzkobXVjfzqreEZFMTPx_NcWGuGggEkSaR
            (param_1 + 0x3dc,uStack_20,uStack_1c,uStack_28,uStack_24,param_1 + 0x488);
  pfVar1 = (float *)(param_1 + 1000);
  iVar2 = 0x14;
  do {
    iVar2 = iVar2 + -1;
    pfVar1[0x28] = pfVar1[0x28] / SQRT(*pfVar1 * pfVar1[0x14] + 0.001);
    pfVar1 = pfVar1 + 1;
  } while (iVar2 != 0);
  thunk_EfVREGFIYJFIl_sGhndlgJJKWNrxyxpQxhNRGeAoZDmliHRqDsSbjertipnGOYGgxYKprYrP_PFzBOEwuKevqlWRnBd
            (param_1 + 0x488,0x14,param_1 + 0x4d8,param_2,6);
  *param_2 = *param_2 + -1.3;
  param_2[1] = param_2[1] + -0.9;
  return;
}


// =========================================================================
// Function: qZPyvvvEsXeGYecCNKnUVCkNlRIZQeeeyfSyDvJvkCFZxtpQaJvTknxXFHkpBaLxZoli
// Entry: 0x71b01a40 | Size: 672 bytes
// =========================================================================

float qZPyvvvEsXeGYecCNKnUVCkNlRIZQeeeyfSyDvJvkCFZxtpQaJvTknxXFHkpBaLxZoli(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar8 = 3.4028235e+38;
  fVar13 = *(float *)(param_1 + 0xfd0);
  fVar12 = *(float *)(param_1 + 0xfcc);
  fVar9 = fVar8;
  if (*(float *)(param_1 + 0xfec) < 3.4028235e+38) {
    fVar9 = *(float *)(param_1 + 0xfec);
  }
  fVar11 = fVar9;
  if (fVar13 < fVar9) {
    fVar11 = fVar13;
  }
  fVar10 = fVar8;
  if (fVar13 < 3.4028235e+38) {
    fVar10 = fVar13;
  }
  if (fVar12 < fVar9) {
    fVar9 = fVar12;
  }
  if (*(float *)(param_1 + 0xfb4) < fVar11) {
    fVar11 = *(float *)(param_1 + 0xfb4);
  }
  if (fVar12 < fVar10) {
    fVar10 = fVar12;
  }
  if (*(float *)(param_1 + 0xfb0) < fVar9) {
    fVar9 = *(float *)(param_1 + 0xfb0);
  }
  if (*(float *)(param_1 + 0xf98) < fVar11) {
    fVar11 = *(float *)(param_1 + 0xf98);
  }
  if (*(float *)(param_1 + 0xfac) < fVar10) {
    fVar10 = *(float *)(param_1 + 0xfac);
  }
  if (*(float *)(param_1 + 0xf94) < fVar9) {
    fVar9 = *(float *)(param_1 + 0xf94);
  }
  if (*(float *)(param_1 + 0xf7c) < fVar11) {
    fVar11 = *(float *)(param_1 + 0xf7c);
  }
  if (*(float *)(param_1 + 0xf90) < fVar10) {
    fVar10 = *(float *)(param_1 + 0xf90);
  }
  if (*(float *)(param_1 + 0xf78) < fVar9) {
    fVar9 = *(float *)(param_1 + 0xf78);
  }
  if (*(float *)(param_1 + 0xf60) < fVar11) {
    fVar11 = *(float *)(param_1 + 0xf60);
  }
  iVar6 = param_1 + 0xf2c;
  iVar2 = 0;
  if (*(float *)(param_1 + 0xf74) < fVar10) {
    fVar10 = *(float *)(param_1 + 0xf74);
  }
  if (*(float *)(param_1 + 0xf5c) < fVar9) {
    fVar9 = *(float *)(param_1 + 0xf5c);
  }
  if (*(float *)(param_1 + 0xf44) < fVar11) {
    fVar11 = *(float *)(param_1 + 0xf44);
  }
  if (*(float *)(param_1 + 0xf58) < fVar10) {
    fVar10 = *(float *)(param_1 + 0xf58);
  }
  if (*(float *)(param_1 + 0xf40) < fVar9) {
    fVar9 = *(float *)(param_1 + 0xf40);
  }
  if (*(float *)(param_1 + 0xf3c) < fVar10) {
    fVar10 = *(float *)(param_1 + 0xf3c);
  }
  fVar10 = fVar11 + 0.0 + fVar9 + fVar10;
  do {
    uVar7 = iVar2 + 3;
    uVar3 = uVar7 ^ 7;
    iVar4 = uVar3 * 7;
    iVar1 = iVar6 + uVar3 * 0x1c;
    fVar9 = fVar8;
    if (*(float *)(iVar1 + 0x18) < 3.4028235e+38) {
      fVar9 = *(float *)(iVar1 + 0x18);
    }
    if (*(float *)(iVar1 + 0x14) < fVar9) {
      fVar9 = *(float *)(iVar1 + 0x14);
    }
    if (*(float *)(iVar1 + 0x10) < fVar9) {
      fVar9 = *(float *)(iVar1 + 0x10);
    }
    if (iVar2 == 0) {
LAB_71b01c5c:
      iVar1 = 2;
      iVar5 = iVar4;
      if (uVar7 < 4) {
        iVar1 = uVar3 - 1;
        iVar5 = 0x15;
      }
      fVar12 = *(float *)(iVar6 + (iVar1 + iVar5) * 4);
      if (fVar12 < fVar9) {
        fVar9 = fVar12;
      }
      if (iVar2 != 2) goto LAB_71b01c90;
LAB_71b01bb8:
      if (uVar7 < 6) {
        iVar4 = uVar3 + 6;
      }
      fVar12 = *(float *)(iVar6 + iVar4 * 4);
      if (fVar12 < fVar9) {
        fVar9 = fVar12;
      }
      if (iVar2 == 4) {
        return (fVar10 + fVar9) * 0.125 + -2.1;
      }
    }
    else {
      if (*(float *)(iVar1 + 0xc) < fVar9) {
        fVar9 = *(float *)(iVar1 + 0xc);
      }
      if (iVar2 != 1) goto LAB_71b01c5c;
LAB_71b01c90:
      iVar1 = 1;
      iVar5 = iVar4;
      if (uVar7 < 5) {
        iVar1 = uVar3 - 1;
        iVar5 = 0xe;
      }
      fVar12 = *(float *)(iVar6 + (iVar1 + iVar5) * 4);
      if (fVar12 < fVar9) {
        fVar9 = fVar12;
      }
      if (iVar2 != 3) goto LAB_71b01bb8;
    }
    iVar2 = iVar2 + 1;
    fVar12 = *(float *)(iVar6 + uVar3 * 4 + -4);
    if (fVar12 < fVar9) {
      fVar9 = fVar12;
    }
    fVar10 = fVar10 + fVar9;
  } while( true );
}


// =========================================================================
// Function: hRxEPENoECLOVScKDtwxlsSgEQtrymaxeeK_yrEozk
// Entry: 0x71b02248 | Size: 76 bytes
// =========================================================================

int * hRxEPENoECLOVScKDtwxlsSgEQtrymaxeeK_yrEozk(int *param_1)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar1 = thunk_MwhHq(0x3c0);
  *param_1 = iVar1;
  param_1[1] = iVar1;
  param_1[2] = iVar1 + 0x3c0;
  imp___aeabi_memcpy4(iVar1,&DAT_700985b0,0x3c0);
  param_1[1] = iVar1 + 0x3c0;
  return param_1;
}


// =========================================================================
// Function: fgFjqEsIAjLKMVtRCHZnYEpZFMyLyxKVkfPuMcgCXY
// Entry: 0x71b02298 | Size: 48 bytes
// =========================================================================

int * fgFjqEsIAjLKMVtRCHZnYEpZFMyLyxKVkfPuMcgCXY(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    return param_1;
  }
  param_1[1] = iVar1;
  thunk_qNQrlu(iVar1);
  return param_1;
}


// =========================================================================
// Function: RlSeVVktKyHraGkAqXcLn_vlaXTpLigmWweuhjczAAYGmGplurfzUXqCMPThgwRdQthwoCrqVCAstmZIkiGWd_oxbQThrTusTfHTOcjjB
// Entry: 0x71b022c8 | Size: 192 bytes
// =========================================================================

void RlSeVVktKyHraGkAqXcLn_vlaXTpLigmWweuhjczAAYGmGplurfzUXqCMPThgwRdQthwoCrqVCAstmZIkiGWd_oxbQThrTusTfHTOcjjB
               (int *param_1,int param_2,int param_3,float *param_4)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  *param_4 = 0.0;
  param_2 = param_2 + 4;
  iVar8 = *param_1;
  if (param_3 == 0) {
    param_2 = 4;
  }
  iVar3 = 0;
  iVar4 = 0;
  do {
    iVar5 = iVar4 + 1;
    iVar6 = (&DAT_70098970)[iVar4];
    param_4[iVar5] = 0.0;
    if (0 < iVar6) {
      pfVar7 = (float *)(param_2 + iVar3 * 8);
      pfVar2 = (float *)(iVar8 + iVar3 * 4);
      fVar9 = param_4[iVar4];
      iVar3 = iVar6 + iVar3;
      fVar10 = 0.0;
      do {
        fVar11 = *pfVar7;
        iVar6 = iVar6 + -1;
        pfVar1 = pfVar7 + -1;
        pfVar7 = pfVar7 + 2;
        fVar12 = fVar11 * fVar11 + *pfVar1 * *pfVar1;
        fVar11 = *pfVar2;
        pfVar2 = pfVar2 + 1;
        fVar11 = fVar11 * fVar12;
        fVar10 = fVar10 + fVar11;
        fVar9 = fVar9 + (fVar12 - fVar11);
        param_4[iVar4] = fVar9;
        param_4[iVar5] = fVar10;
      } while (iVar6 != 0);
    }
    iVar4 = iVar5;
  } while (iVar5 != 0x13);
  *param_4 = *param_4 + *param_4;
  return;
}


// =========================================================================
// Function: jfhkRwvXZxPmZfifvedmRFPBfUcB_ARYmVBSbNpVzuLalxxaKxfeQjOEkAWrmXlimTlQ_DRnofXHzkobXVjfzqreEZFMTPx_NcWGuGggEkSaR
// Entry: 0x71b02390 | Size: 212 bytes
// =========================================================================

void jfhkRwvXZxPmZfifvedmRFPBfUcB_ARYmVBSbNpVzuLalxxaKxfeQjOEkAWrmXlimTlQ_DRnofXHzkobXVjfzqreEZFMTPx_NcWGuGggEkSaR
               (int *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
               float *param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  iVar6 = 0;
  *param_6 = 0.0;
  iVar8 = *param_1;
  iVar9 = 0;
  do {
    iVar10 = iVar9 + 1;
    iVar7 = (&DAT_70098970)[iVar9];
    param_6[iVar10] = 0.0;
    if (0 < iVar7) {
      pfVar4 = (float *)(iVar8 + iVar6 * 4);
      pfVar3 = (float *)(param_2 + 4 + iVar6 * 8);
      pfVar5 = (float *)(param_4 + 4 + iVar6 * 8);
      fVar11 = param_6[iVar9];
      iVar6 = iVar6 + iVar7;
      fVar12 = 0.0;
      do {
        fVar13 = *pfVar5;
        iVar7 = iVar7 + -1;
        fVar14 = *pfVar3;
        pfVar1 = pfVar5 + -1;
        pfVar5 = pfVar5 + 2;
        pfVar2 = pfVar3 + -1;
        pfVar3 = pfVar3 + 2;
        fVar14 = fVar14 * fVar13 + *pfVar2 * *pfVar1;
        fVar13 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        fVar13 = fVar13 * fVar14;
        fVar12 = fVar13 + fVar12;
        fVar11 = fVar11 + (fVar14 - fVar13);
        param_6[iVar9] = fVar11;
        param_6[iVar10] = fVar12;
      } while (iVar7 != 0);
    }
    iVar9 = iVar10;
  } while (iVar10 != 0x13);
  *param_6 = *param_6 + *param_6;
  return;
}


// =========================================================================
// Function: CjcFqQwPzbKvGNcjEQM_NsiakNHztNxsQNrykpoYrPCoEklXCGHvkjdHYQuEEqAvJo_z_JhXfWwHaUxIMfcaEMiDkYkEvAMgt
// Entry: 0x71b0246c | Size: 268 bytes
// =========================================================================

void CjcFqQwPzbKvGNcjEQM_NsiakNHztNxsQNrykpoYrPCoEklXCGHvkjdHYQuEEqAvJo_z_JhXfWwHaUxIMfcaEMiDkYkEvAMgt
               (float *param_1,int param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = -2.0;
  fVar7 = fVar6;
  if (param_2 != 0) {
    fVar6 = -2.0;
    iVar2 = param_2;
    pfVar3 = param_3;
    fVar7 = fVar6;
    do {
      fVar5 = *param_1;
      param_1 = param_1 + 1;
      fVar1 = (float)imp_log10f(fVar5 + 0.01);
      fVar6 = fVar6 + -1.5;
      fVar5 = fVar6;
      if (fVar6 < fVar1) {
        fVar5 = fVar1;
      }
      fVar1 = fVar7 + -7.0;
      if (fVar7 + -7.0 < fVar5) {
        fVar1 = fVar5;
      }
      *pfVar3 = fVar1;
      pfVar3 = pfVar3 + 1;
      if (fVar6 < fVar1) {
        fVar6 = fVar1;
      }
      if (fVar7 < fVar1) {
        fVar7 = fVar1;
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if (0x15 < param_2) {
      return;
    }
  }
  param_3 = param_3 + param_2;
  param_2 = param_2 + -0x16;
  do {
    fVar6 = fVar6 + -1.5;
    fVar5 = fVar6;
    if (fVar6 < -2.0) {
      fVar5 = -2.0;
    }
    fVar1 = fVar7 + -7.0;
    if (fVar7 + -7.0 < fVar5) {
      fVar1 = fVar5;
    }
    *param_3 = fVar1;
    param_3 = param_3 + 1;
    if (fVar6 < fVar1) {
      fVar6 = fVar1;
    }
    if (fVar7 < fVar1) {
      fVar7 = fVar1;
    }
    bVar4 = param_2 != -1;
    param_2 = param_2 + 1;
  } while (bVar4);
  return;
}


// =========================================================================
// Function: gfvelQZpEcIUFfuxEQUSqeLYk_ZzWLlKwAivU
// Entry: 0x71b02580 | Size: 1204 bytes
// =========================================================================

void gfvelQZpEcIUFfuxEQUSqeLYk_ZzWLlKwAivU(int param_1)

{
  float *pfVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  
  iVar2 = 0;
  dVar4 = 0.0;
  do {
    dVar3 = dVar4 + 0.5;
    dVar7 = (dVar3 * 0.0 * 3.141592653589793) / 22.0;
    dVar24 = (double)imp_cos(SUB84(dVar7,0),(int)((ulonglong)dVar7 >> 0x20));
    dVar25 = (dVar3 * 3.141592653589793) / 22.0;
    dVar8 = (dVar3 * 3.0 * 3.141592653589793) / 22.0;
    dVar7 = (dVar3 * 6.0 * 3.141592653589793) / 22.0;
    dVar9 = (double)imp_cos(SUB84(dVar25,0),(int)((ulonglong)dVar25 >> 0x20));
    dVar25 = ((dVar3 + dVar3) * 3.141592653589793) / 22.0;
    dVar5 = (dVar3 * 14.0 * 3.141592653589793) / 22.0;
    dVar10 = (double)imp_cos(SUB84(dVar25,0),(int)((ulonglong)dVar25 >> 0x20));
    dVar6 = (double)imp_cos(SUB84(dVar8,0),(int)((ulonglong)dVar8 >> 0x20));
    dVar8 = (dVar3 * 5.0 * 3.141592653589793) / 22.0;
    dVar11 = (double)imp_cos(SUB84(dVar8,0),(int)((ulonglong)dVar8 >> 0x20));
    dVar12 = (double)imp_cos(SUB84(dVar7,0),(int)((ulonglong)dVar7 >> 0x20));
    dVar7 = (dVar3 * 7.0 * 3.141592653589793) / 22.0;
    dVar8 = (dVar3 * 8.0 * 3.141592653589793) / 22.0;
    dVar13 = (double)imp_cos(SUB84(dVar7,0),(int)((ulonglong)dVar7 >> 0x20));
    dVar14 = (double)imp_cos(SUB84(dVar8,0),(int)((ulonglong)dVar8 >> 0x20));
    dVar7 = (dVar3 * 9.0 * 3.141592653589793) / 22.0;
    dVar8 = (dVar3 * 10.0 * 3.141592653589793) / 22.0;
    dVar15 = (double)imp_cos(SUB84(dVar7,0),(int)((ulonglong)dVar7 >> 0x20));
    dVar16 = (double)imp_cos(SUB84(dVar8,0),(int)((ulonglong)dVar8 >> 0x20));
    dVar7 = (dVar3 * 11.0 * 3.141592653589793) / 22.0;
    dVar8 = (dVar3 * 12.0 * 3.141592653589793) / 22.0;
    dVar17 = (double)imp_cos(SUB84(dVar7,0),(int)((ulonglong)dVar7 >> 0x20));
    dVar8 = (double)imp_cos(SUB84(dVar8,0),(int)((ulonglong)dVar8 >> 0x20));
    dVar25 = (dVar3 * 15.0 * 3.141592653589793) / 22.0;
    dVar7 = (dVar3 * 13.0 * 3.141592653589793) / 22.0;
    dVar18 = (double)imp_cos(SUB84(dVar25,0),(int)((ulonglong)dVar25 >> 0x20));
    dVar25 = (dVar3 * 4.0 * 3.141592653589793) / 22.0;
    dVar7 = (double)imp_cos(SUB84(dVar7,0),(int)((ulonglong)dVar7 >> 0x20));
    dVar5 = (double)imp_cos(SUB84(dVar5,0),(int)((ulonglong)dVar5 >> 0x20));
    dVar25 = (double)imp_cos(SUB84(dVar25,0),(int)((ulonglong)dVar25 >> 0x20));
    dVar4 = dVar4 + 1.0;
    dVar19 = (dVar3 * 16.0 * 3.141592653589793) / 22.0;
    dVar19 = (double)imp_cos(SUB84(dVar19,0),(int)((ulonglong)dVar19 >> 0x20));
    dVar20 = (dVar3 * 17.0 * 3.141592653589793) / 22.0;
    dVar20 = (double)imp_cos(SUB84(dVar20,0),(int)((ulonglong)dVar20 >> 0x20));
    dVar21 = (dVar3 * 18.0 * 3.141592653589793) / 22.0;
    dVar21 = (double)imp_cos(SUB84(dVar21,0),(int)((ulonglong)dVar21 >> 0x20));
    pfVar1 = (float *)(param_1 + iVar2);
    dVar22 = (dVar3 * 19.0 * 3.141592653589793) / 22.0;
    *pfVar1 = (float)dVar24;
    dVar23 = (dVar3 * 20.0 * 3.141592653589793) / 22.0;
    dVar3 = (dVar3 * 21.0 * 3.141592653589793) / 22.0;
    dVar3 = (double)imp_cos(SUB84(dVar3,0),(int)((ulonglong)dVar3 >> 0x20));
    pfVar1[0x15] = (float)dVar3;
    dVar3 = (double)imp_cos(SUB84(dVar23,0),(int)((ulonglong)dVar23 >> 0x20));
    pfVar1[0x14] = (float)dVar3;
    dVar3 = (double)imp_cos(SUB84(dVar22,0),(int)((ulonglong)dVar22 >> 0x20));
    iVar2 = iVar2 + 0x58;
    pfVar1[0xf] = (float)dVar18;
    pfVar1[0x13] = (float)dVar3;
    pfVar1[0xd] = (float)dVar7;
    pfVar1[5] = (float)dVar11;
    pfVar1[6] = (float)dVar12;
    pfVar1[0xe] = (float)dVar5;
    pfVar1[7] = (float)dVar13;
    pfVar1[0x10] = (float)dVar19;
    pfVar1[8] = (float)dVar14;
    pfVar1[0x11] = (float)dVar20;
    pfVar1[9] = (float)dVar15;
    pfVar1[0x12] = (float)dVar21;
    pfVar1[10] = (float)dVar16;
    pfVar1[0xb] = (float)dVar17;
    pfVar1[0xc] = (float)dVar8;
    *(ulonglong *)pfVar1 = CONCAT44((float)dVar9,(float)dVar24 * 0.70710677);
    *(ulonglong *)(pfVar1 + 2) = CONCAT44((float)dVar6,(float)dVar10);
    pfVar1[4] = (float)dVar25;
  } while (iVar2 != 0x790);
  return;
}


// =========================================================================
// Function: EfVREGFIYJFIl_sGhndlgJJKWNrxyxpQxhNRGeAoZDmliHRqDsSbjertipnGOYGgxYKprYrP_PFzBOEwuKevqlWRnBd
// Entry: 0x71b02a48 | Size: 140 bytes
// =========================================================================

void EfVREGFIYJFIl_sGhndlgJJKWNrxyxpQxhNRGeAoZDmliHRqDsSbjertipnGOYGgxYKprYrP_PFzBOEwuKevqlWRnBd
               (float *param_1,int param_2,float *param_3,int param_4,int param_5)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (param_5 != 0) {
    if (param_2 == 0) {
      imp___aeabi_memclr4(param_4,param_5 << 2);
      return;
    }
    iVar5 = 0;
    do {
      pfVar2 = (float *)(param_4 + iVar5 * 4);
      *pfVar2 = 0.0;
      iVar1 = param_2;
      pfVar3 = param_1;
      pfVar4 = param_3;
      fVar6 = 0.0;
      do {
        fVar8 = *pfVar3;
        pfVar3 = pfVar3 + 1;
        iVar1 = iVar1 + -1;
        fVar7 = *pfVar4;
        pfVar4 = pfVar4 + 0x16;
        fVar6 = fVar6 + fVar8 * fVar7;
        *pfVar2 = fVar6;
      } while (iVar1 != 0);
      iVar5 = iVar5 + 1;
      param_3 = param_3 + 1;
      *pfVar2 = fVar6 * 0.30151135;
    } while (iVar5 != param_5);
  }
  return;
}


// =========================================================================
// Function: jiomycNgQryNFDelGUeuijskSxYzjRxrJR_jdLBDWrAKNMEfnaxZuBOiADwZoTvOJjPJmXvUksYMHcLpsRTYhhu_hzXAfuWPs
// Entry: 0x71b02e3c | Size: 784 bytes
// =========================================================================

void jiomycNgQryNFDelGUeuijskSxYzjRxrJR_jdLBDWrAKNMEfnaxZuBOiADwZoTvOJjPJmXvUksYMHcLpsRTYhhu_hzXAfuWPs
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
// Function: IohaqdaJkTYApXRwSkaeZUnuSwthJsuwqtsmCXqqvcSkzFtKAgHTh_LIZfyvZbMbKktUuEpF_tKhHjInVgSHFBrTCxjanpxO
// Entry: 0x71b03180 | Size: 264 bytes
// =========================================================================

void IohaqdaJkTYApXRwSkaeZUnuSwthJsuwqtsmCXqqvcSkzFtKAgHTh_LIZfyvZbMbKktUuEpF_tKhHjInVgSHFBrTCxjanpxO
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
// Function: oNurGSIVHe_HX_EIiNvMenwGd_IvLDRcyTmWnaUssIdJFXEPStecldXU
// Entry: 0x71b032bc | Size: 308 bytes
// =========================================================================

int oNurGSIVHe_HX_EIiNvMenwGd_IvLDRcyTmWnaUssIdJFXEPStecldXU(int param_1,undefined4 param_2)

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
// Function: lvefKwWnYDOnnozzScaitZzjRLyAY
// Entry: 0x71b03438 | Size: 40 bytes
// =========================================================================

void lvefKwWnYDOnnozzScaitZzjRLyAY(int param_1)

{
  thunk_MeebRuzBZbTjx_CMquZNNfNjKpOGybQfUjhwpUaY_Kg(param_1 + 0x11c);
  thunk_woeuiNivzmwPovMBoYYNOjQySvgOwKOAScxDpkgwrol(param_1 + 0x8c);
  thunk_MeebRuzBZbTjx_CMquZNNfNjKpOGybQfUjhwpUaY_Kg(param_1);
  return;
}


// =========================================================================
// Function: vbfLMjAvORfuHoZMTRFkBYRtnTclkmksD
// Entry: 0x71b03460 | Size: 8 bytes
// =========================================================================

void vbfLMjAvORfuHoZMTRFkBYRtnTclkmksD(int param_1)

{
  thunk_VPhdBLqiZukfrHURWaDmQGimnDfWBesdwhRGwAlQCQoZGfF(param_1 + 0x8c);
  return;
}


// =========================================================================
// Function: kUtjzMaCJHLcHgHvkQuWC_kpSfROzZLRBBTdAgYZfIqvDHw_ySfTYNuGTugobLUBLJewmuNNHUt
// Entry: 0x71b03468 | Size: 108 bytes
// =========================================================================

undefined4
kUtjzMaCJHLcHgHvkQuWC_kpSfROzZLRBBTdAgYZfIqvDHw_ySfTYNuGTugobLUBLJewmuNNHUt
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
// Function: SMErqdM_FPvyZcrvjwpTfX_BnYdFKVNvnCWGOLTnCrEUn_MdNbXRcyzMLJLokxfLAMmJXsKyPrtXXzoiVjhxMOZpiqRLkoApPHYGCKPpVfALwLLa_UgWd_cXSpbahfzwVHahhYeNIEsfMdqPXPIkuJXg_JNNbldrzSBpsXBUxCLmiKVJchAowe
// Entry: 0x71b037e4 | Size: 684 bytes
// =========================================================================

uint * SMErqdM_FPvyZcrvjwpTfX_BnYdFKVNvnCWGOLTnCrEUn_MdNbXRcyzMLJLokxfLAMmJXsKyPrtXXzoiVjhxMOZpiqRLkoApPHYGCKPpVfALwLLa_UgWd_cXSpbahfzwVHahhYeNIEsfMdqPXPIkuJXg_JNNbldrzSBpsXBUxCLmiKVJchAowe
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
// Function: MeebRuzBZbTjx_CMquZNNfNjKpOGybQfUjhwpUaY_Kg
// Entry: 0x71b03ad8 | Size: 60 bytes
// =========================================================================

int MeebRuzBZbTjx_CMquZNNfNjKpOGybQfUjhwpUaY_Kg(int param_1)

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


// =========================================================================
// Function: IeUPdUWpGgjoOuRFbXZPtnDcrUvRMMmZAkXOCxwQIVGCrLFUmUoaeEnswZIGxcLRvGFRtbwMeGAMbWlXYlB
// Entry: 0x71b03b14 | Size: 292 bytes
// =========================================================================

void IeUPdUWpGgjoOuRFbXZPtnDcrUvRMMmZAkXOCxwQIVGCrLFUmUoaeEnswZIGxcLRvGFRtbwMeGAMbWlXYlB
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
// Function: JSRYycTYpgndMLSHXAmxDUfKpsqQWVLLr
// Entry: 0x71b03ed8 | Size: 212 bytes
// =========================================================================

float JSRYycTYpgndMLSHXAmxDUfKpsqQWVLLr(float param_1)

{
  float fVar1;
  uint in_fpscr;
  uint uVar2;
  float fVar3;
  float fVar4;
  
  if (8.0 <= param_1) {
    return 1.0;
  }
  if (-8.0 < param_1) {
    uVar2 = in_fpscr & 0xfffffff | (uint)(param_1 < 0.0) << 0x1f;
    fVar4 = param_1;
    if (SUB41(uVar2 >> 0x1f,0)) {
      fVar4 = -param_1;
    }
    fVar1 = (float)imp_floorf(fVar4 * 25.0 + 0.5);
    uVar2 = uVar2 & 0xfffffff | (uint)(param_1 < 0.0) << 0x1f;
    fVar3 = (float)VectorSignedToFloat((int)fVar1,(byte)(uVar2 >> 0x16) & 3);
    fVar4 = fVar4 + fVar3 * -0.04;
    fVar1 = *(float *)(&DAT_700989bc + (int)fVar1 * 4);
    fVar1 = fVar1 + fVar4 * (1.0 - fVar1 * fVar1) * (1.0 - fVar1 * fVar4);
    if (SUB41(uVar2 >> 0x1f,0)) {
      fVar1 = -fVar1;
    }
    return fVar1;
  }
  return -1.0;
}


// =========================================================================
// Function: VNUOZOwTlcVeuIVmkdptbnGdmPHrEAUAdx
// Entry: 0x71b04004 | Size: 232 bytes
// =========================================================================

float VNUOZOwTlcVeuIVmkdptbnGdmPHrEAUAdx(float param_1)

{
  float fVar1;
  uint in_fpscr;
  uint uVar2;
  float fVar3;
  float fVar4;
  
  param_1 = param_1 * 0.5;
  if (8.0 <= param_1) {
    return 1.0;
  }
  if (-8.0 < param_1) {
    uVar2 = in_fpscr & 0xfffffff | (uint)(param_1 < 0.0) << 0x1f;
    fVar4 = param_1;
    if (SUB41(uVar2 >> 0x1f,0)) {
      fVar4 = -param_1;
    }
    fVar1 = (float)imp_floorf(fVar4 * 25.0 + 0.5);
    uVar2 = uVar2 & 0xfffffff | (uint)(param_1 < 0.0) << 0x1f;
    fVar3 = (float)VectorSignedToFloat((int)fVar1,(byte)(uVar2 >> 0x16) & 3);
    fVar4 = fVar4 + fVar3 * -0.04;
    fVar1 = *(float *)(&DAT_700989bc + (int)fVar1 * 4);
    fVar1 = fVar1 + fVar4 * (1.0 - fVar1 * fVar1) * (1.0 - fVar1 * fVar4);
    if (SUB41(uVar2 >> 0x1f,0)) {
      fVar1 = -fVar1;
    }
    return fVar1 * 0.5 + 0.5;
  }
  return 0.0;
}


// =========================================================================
// Function: riVxXbGWTOaAjiBVsmUwubUpdvLFrcsBlEfRCQzMPAfSDrsmdZWWXXtDACdGEaK
// Entry: 0x71b04144 | Size: 12 bytes
// =========================================================================

void riVxXbGWTOaAjiBVsmUwubUpdvLFrcsBlEfRCQzMPAfSDrsmdZWWXXtDACdGEaK
               (code *UNRECOVERED_JUMPTABLE,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x71b0414c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}


// =========================================================================
// Function: RkXUiEJSWWtfuxfotgSuWbaVVTrDouFtaqGveKznFSwtFCDBvRjyNjwVEWhRPGQUdKeUbvWQDU_qjFRxzkCxmwAIBzJjUTxwdJDFeUvqmeYsUyFlPQlVZbXPrGvqSzelndNh_zAfUPDJuexXIHmBETVunZHnzGUZ
// Entry: 0x71b04168 | Size: 152 bytes
// =========================================================================

undefined4 *
RkXUiEJSWWtfuxfotgSuWbaVVTrDouFtaqGveKznFSwtFCDBvRjyNjwVEWhRPGQUdKeUbvWQDU_qjFRxzkCxmwAIBzJjUTxwdJDFeUvqmeYsUyFlPQlVZbXPrGvqSzelndNh_zAfUPDJuexXIHmBETVunZHnzGUZ
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
          undefined4 param_9,undefined2 *param_10)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  FUN_71b0424c(param_1 + 2,param_4,param_5,param_3);
  FUN_71b0424c(param_1 + 5,param_6,param_7,param_3);
  FUN_71b0424c(param_1 + 8,param_8,param_9,param_3);
  uVar2 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar3 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uVar1 = *param_10;
  *(undefined1 *)((int)param_1 + 0x2e) = *(undefined1 *)(param_10 + 1);
  param_1[0xc] = 0;
  param_1[0xd] = uVar2;
  param_1[0xe] = uVar3;
  param_1[0xf] = uVar4;
  param_1[0x10] = 0;
  param_1[0x11] = uVar2;
  param_1[0x12] = uVar3;
  param_1[0x13] = uVar4;
  param_1[0x14] = 0;
  param_1[0x15] = uVar2;
  param_1[0x16] = uVar3;
  param_1[0x17] = uVar4;
  param_1[0x18] = 0;
  param_1[0x19] = uVar2;
  param_1[0x1a] = uVar3;
  param_1[0x1b] = uVar4;
  param_1[0x1c] = 0;
  param_1[0x1d] = uVar2;
  param_1[0x1e] = uVar3;
  param_1[0x1f] = uVar4;
  param_1[0x20] = 0;
  param_1[0x21] = uVar2;
  param_1[0x22] = uVar3;
  param_1[0x23] = uVar4;
  *(undefined2 *)(param_1 + 0xb) = uVar1;
  return param_1;
}


// =========================================================================
// Function: FUN_71b0424c
// Entry: 0x71b0424c | Size: 496 bytes
// =========================================================================

void FUN_71b0424c(int *param_1,char *param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  char *pcVar6;
  char *pcVar7;
  float *pfVar8;
  int iVar9;
  uint in_fpscr;
  float fVar10;
  
  iVar1 = param_4 * 3;
  iVar2 = FUN_71ba0440(param_3,iVar1);
  iVar4 = param_3 - iVar2 * iVar1;
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
              (s_____webrtc_apm_src_webrtc_rtc_ba_7006a6d4,0x1e2,s_a___b____0_70065704,&DAT_700984d0
               ,iVar4,0,param_3,s_is_not_evenly_divisible_by_7006252f,iVar1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 != 0) {
    if (0x3fffffff < param_3) {
      FUN_71a0103c(param_1);
      if (*param_1 != 0) {
        param_1[1] = *param_1;
        thunk_qNQrlu();
      }
                    /* WARNING: Subroutine does not return */
      thunk_NAUpeWJSovvMoxKm_();
    }
    pfVar3 = (float *)thunk_MwhHq(param_3 * 4);
    param_1[2] = (int)(pfVar3 + param_3);
    *param_1 = (int)pfVar3;
    imp___aeabi_memclr4(pfVar3,param_3 * 4);
    iVar4 = param_4;
    if (0 < param_4) {
      iVar4 = iVar2;
    }
    param_1[1] = (int)(pfVar3 + param_3);
    if (0 < iVar4) {
      iVar9 = 0;
      iVar4 = iVar2;
      pcVar7 = param_2;
      pfVar8 = pfVar3;
      pfVar5 = pfVar3;
      pcVar6 = param_2;
      do {
        do {
          iVar4 = iVar4 + -1;
          fVar10 = (float)VectorSignedToFloat((int)*pcVar7,(byte)(in_fpscr >> 0x16) & 3);
          *pfVar8 = fVar10 * 0.00390625;
          pcVar7 = pcVar7 + iVar1;
          pfVar8 = pfVar8 + 1;
        } while (iVar4 != 0);
        iVar9 = iVar9 + 1;
        pfVar8 = pfVar5 + iVar2;
        pcVar7 = pcVar6 + 1;
        iVar4 = iVar2;
        pfVar5 = pfVar8;
        pcVar6 = pcVar7;
      } while (iVar9 != param_4);
      iVar9 = 0;
      pfVar5 = pfVar3 + iVar2 * param_4;
      pcVar7 = param_2;
      pfVar8 = pfVar5;
      pcVar6 = param_2;
      do {
        do {
          iVar4 = iVar4 + -1;
          fVar10 = (float)VectorSignedToFloat((int)pcVar7[param_4],(byte)(in_fpscr >> 0x16) & 3);
          *pfVar5 = fVar10 * 0.00390625;
          pfVar5 = pfVar5 + 1;
          pcVar7 = pcVar7 + iVar1;
        } while (iVar4 != 0);
        iVar9 = iVar9 + 1;
        pfVar5 = pfVar8 + iVar2;
        pcVar7 = pcVar6 + 1;
        iVar4 = iVar2;
        pfVar8 = pfVar5;
        pcVar6 = pcVar7;
      } while (iVar9 != param_4);
      param_2 = param_2 + param_4 * 2;
      iVar9 = 0;
      pfVar3 = pfVar3 + iVar2 * param_4 * 2;
      pfVar8 = pfVar3;
      pcVar7 = param_2;
      do {
        do {
          iVar4 = iVar4 + -1;
          fVar10 = (float)VectorSignedToFloat((int)*param_2,(byte)(in_fpscr >> 0x16) & 3);
          *pfVar3 = fVar10 * 0.00390625;
          pfVar3 = pfVar3 + 1;
          param_2 = param_2 + iVar1;
        } while (iVar4 != 0);
        iVar9 = iVar9 + 1;
        pfVar3 = pfVar8 + iVar2;
        param_2 = pcVar7 + 1;
        iVar4 = iVar2;
        pfVar8 = pfVar3;
        pcVar7 = param_2;
      } while (iVar9 != param_4);
    }
  }
  return;
}


// =========================================================================
// Function: VPhdBLqiZukfrHURWaDmQGimnDfWBesdwhRGwAlQCQoZGfF
// Entry: 0x71b04450 | Size: 36 bytes
// =========================================================================

void VPhdBLqiZukfrHURWaDmQGimnDfWBesdwhRGwAlQCQoZGfF(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar2 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar3 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  *(undefined4 *)(param_1 + 0x78) = uVar2;
  *(undefined4 *)(param_1 + 0x7c) = uVar3;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  *(undefined4 *)(param_1 + 0x88) = uVar2;
  *(undefined4 *)(param_1 + 0x8c) = uVar3;
  return;
}


// =========================================================================
// Function: woeuiNivzmwPovMBoYYNOjQySvgOwKOAScxDpkgwrol
// Entry: 0x71b04474 | Size: 80 bytes
// =========================================================================

int woeuiNivzmwPovMBoYYNOjQySvgOwKOAScxDpkgwrol(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x20);
    thunk_qNQrlu();
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
// Function: svKOqEAWvFPyfvqm_iVgpeYCocczhrwNMWYPoAxoJHXQlq_XbpubAUJCAaSVwFdoXkcqODfPAoQzqgdZBVH
// Entry: 0x71b044c4 | Size: 1212 bytes
// =========================================================================

void svKOqEAWvFPyfvqm_iVgpeYCocczhrwNMWYPoAxoJHXQlq_XbpubAUJCAaSVwFdoXkcqODfPAoQzqgdZBVH
               (uint *param_1,float *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  float *pfVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  float *pfVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  int iStack_150;
  float afStack_148 [24];
  float afStack_e8 [24];
  float afStack_88 [25];
  
  uVar10 = param_1[2];
  uVar16 = param_1[1];
  uVar6 = param_1[8];
  uVar19 = param_1[5];
  uVar21 = param_1[6];
  uVar18 = (int)(param_1[3] - uVar10) >> 2;
  uVar11 = uVar16;
  if (uVar18 < uVar16) {
    uVar11 = uVar18;
  }
  uVar2 = uVar16 * *param_1;
  uVar15 = 0;
  if (uVar11 != 0) {
    uVar15 = uVar10;
  }
  uVar1 = uVar16 * uVar16;
  if (param_1[3] == uVar10) {
    uVar10 = 0;
    uVar15 = 0;
    uVar11 = 0;
  }
  uVar8 = (int)(uVar21 - uVar19) >> 2;
  uVar13 = uVar2;
  if (uVar8 <= uVar2 && uVar2 - uVar8 != 0) {
    uVar13 = uVar8;
  }
  uVar14 = 0;
  if (uVar13 != 0) {
    uVar14 = uVar19;
  }
  if (uVar21 == uVar19) {
    uVar13 = 0;
    uVar14 = 0;
  }
  uVar3 = 0;
  if (uVar21 != uVar19) {
    uVar3 = uVar19;
  }
  pfVar20 = (float *)0x0;
  if (uVar16 != 0) {
    pfVar20 = (float *)(param_1 + 0xc);
  }
  uVar19 = (int)(param_1[9] - uVar6) >> 2;
  uVar21 = uVar1;
  if (uVar19 <= uVar1 && uVar1 - uVar19 != 0) {
    uVar21 = uVar19;
  }
  uVar12 = 0;
  if (uVar21 != 0) {
    uVar12 = uVar6;
  }
  if (param_1[9] == uVar6) {
    uVar6 = 0;
    uVar12 = 0;
    uVar21 = 0;
  }
  if (param_3 == 0) {
    param_2 = (float *)0x0;
  }
  FUN_71b04984(*param_1,uVar16,param_2,param_3,pfVar20,uVar16,uVar15,uVar11,uVar14,uVar13,uVar12,
               uVar21,afStack_e8,0x18);
  uVar21 = param_1[1];
  iVar22 = 0;
  iVar23 = 0;
  uVar11 = 0;
  if (uVar21 < uVar18) {
    uVar11 = uVar18 - uVar21;
    if (uVar21 <= uVar18 - uVar21) {
      uVar11 = uVar21;
    }
    iVar23 = 0;
    if (uVar11 != 0) {
      iVar23 = uVar10 + uVar21 * 4;
    }
  }
  uVar15 = 0;
  if (uVar2 < uVar8) {
    uVar15 = uVar8 - uVar2;
    if (uVar2 <= uVar8 - uVar2) {
      uVar15 = uVar2;
    }
    iVar22 = 0;
    if (uVar15 != 0) {
      iVar22 = uVar3 + uVar2 * 4;
    }
  }
  uVar13 = 0;
  iVar17 = 0;
  iVar7 = 0;
  if (uVar1 < uVar19) {
    uVar13 = uVar19 - uVar1;
    if (uVar1 <= uVar19 - uVar1) {
      uVar13 = uVar1;
    }
    iVar7 = 0;
    if (uVar13 != 0) {
      iVar7 = uVar6 + uVar1 * 4;
    }
  }
  pfVar5 = afStack_148;
  FUN_71b04984(*param_1,uVar21,param_2,param_3,pfVar20,uVar16,iVar23,uVar11,iVar22,uVar15,iVar7,
               uVar13,pfVar5,0x18);
  uVar11 = param_1[1];
  if (uVar11 * 2 < uVar18) {
    uVar18 = uVar18 + uVar11 * -2;
    if (uVar11 <= uVar18) {
      uVar18 = uVar11;
    }
    iVar17 = 0;
    if (uVar18 != 0) {
      iVar17 = uVar10 + uVar11 * 8;
    }
  }
  iVar23 = 0;
  uVar18 = 0;
  iStack_150 = 0;
  if (uVar2 * 2 < uVar8) {
    uVar8 = uVar8 + uVar2 * -2;
    uVar18 = uVar2;
    if (uVar8 < uVar2) {
      uVar18 = uVar8;
    }
    iStack_150 = 0;
    if (uVar18 != 0) {
      iStack_150 = uVar3 + uVar2 * 8;
    }
  }
  if (uVar1 * 2 < uVar19) {
    uVar19 = uVar19 + uVar1 * -2;
    uVar10 = uVar1;
    if (uVar19 < uVar1) {
      uVar10 = uVar19;
    }
    iVar23 = 0;
    if (uVar10 != 0) {
      iVar23 = uVar6 + uVar1 * 8;
    }
  }
  else {
    uVar10 = 0;
  }
  if (0 < (int)uVar11) {
    uVar16 = *param_1;
    pfVar4 = afStack_88;
    uVar6 = uVar11;
    pfVar9 = pfVar20;
    do {
      fVar24 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      uVar6 = uVar6 - 1;
      fVar25 = *pfVar9;
      pfVar9 = pfVar9 + 1;
      *pfVar4 = fVar25 * fVar24;
      pfVar4 = pfVar4 + 1;
    } while (uVar6 != 0);
    if (param_3 == 0) {
      fVar24 = 0.0;
      uVar18 = 0;
      do {
        pfVar9 = afStack_88;
        pfVar5 = (float *)0x0;
        iVar22 = uVar11 << 2;
        fVar25 = fVar24;
        if (uVar18 * uVar11 < uVar10) {
          pfVar5 = (float *)(iVar23 + uVar18 * uVar11 * 4);
        }
        do {
          fVar26 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          iVar22 = iVar22 + -4;
          fVar27 = *pfVar9;
          pfVar9 = pfVar9 + 1;
          fVar25 = fVar25 + fVar27 * fVar26;
        } while (iVar22 != 0);
        pfVar5 = afStack_e8 + uVar18;
        fVar25 = *(float *)(iVar17 + uVar18 * 4) + 0.0 + fVar25;
        pfVar9 = pfVar20 + uVar18;
        uVar18 = uVar18 + 1;
        fVar26 = fVar24;
        if (0.0 < fVar25) {
          fVar26 = fVar25;
        }
        *pfVar9 = fVar26 * (1.0 - *pfVar5) + *pfVar5 * *pfVar9;
      } while (uVar18 != uVar11);
    }
    else {
      fVar24 = 0.0;
      uVar6 = 0;
      do {
        uVar19 = uVar6 * uVar16;
        pfVar5 = (float *)0x0;
        if (uVar19 < uVar18) {
          uVar21 = uVar18 - uVar19;
          if (uVar16 <= uVar18 - uVar19) {
            uVar21 = uVar16;
          }
          pfVar5 = (float *)0x0;
          if (uVar21 != 0) {
            pfVar5 = (float *)(iStack_150 + uVar19 * 4);
          }
        }
        iVar22 = uVar6 * 4;
        iVar7 = param_3 << 2;
        pfVar9 = param_2;
        fVar25 = fVar24;
        do {
          fVar26 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          iVar7 = iVar7 + -4;
          fVar27 = *pfVar9;
          pfVar9 = pfVar9 + 1;
          fVar25 = fVar25 + fVar27 * fVar26;
        } while (iVar7 != 0);
        pfVar5 = (float *)0x0;
        if (uVar6 * uVar11 < uVar10) {
          pfVar5 = (float *)(iVar23 + uVar6 * uVar11 * 4);
        }
        pfVar9 = afStack_88;
        iVar7 = uVar11 << 2;
        fVar26 = fVar24;
        do {
          fVar27 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          iVar7 = iVar7 + -4;
          fVar28 = *pfVar9;
          pfVar9 = pfVar9 + 1;
          fVar26 = fVar26 + fVar28 * fVar27;
        } while (iVar7 != 0);
        pfVar5 = afStack_e8 + uVar6;
        pfVar9 = pfVar20 + uVar6;
        uVar6 = uVar6 + 1;
        fVar26 = *(float *)(iVar17 + iVar22) + fVar25 + fVar26;
        fVar25 = fVar24;
        if (0.0 < fVar26) {
          fVar25 = fVar26;
        }
        *pfVar9 = fVar25 * (1.0 - *pfVar5) + *pfVar5 * *pfVar9;
      } while (uVar6 != uVar11);
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71b04984
// Entry: 0x71b04984 | Size: 524 bytes
// =========================================================================

void FUN_71b04984(uint param_1,int param_2,float *param_3,int param_4,float *param_5,int param_6,
                 int param_7,undefined4 param_8,int param_9,uint param_10,int param_11,uint param_12
                 ,int param_13)

{
  int iVar1;
  byte bVar2;
  float *pfVar3;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if (0 < param_2) {
    pfVar10 = param_5 + param_6;
    if (param_6 == 0) {
      pfVar10 = (float *)0x0;
    }
    pfVar9 = param_3 + param_4;
    fVar14 = 0.0;
    if (param_4 == 0) {
      pfVar9 = (float *)0x0;
    }
    iVar6 = 0;
    do {
      uVar7 = iVar6 * param_1;
      pfVar3 = (float *)0x0;
      if (uVar7 < param_10) {
        uVar4 = param_10 - uVar7;
        if (param_1 <= param_10 - uVar7) {
          uVar4 = param_1;
        }
        pfVar3 = (float *)0x0;
        if (uVar4 != 0) {
          pfVar3 = (float *)(param_9 + uVar7 * 4);
        }
      }
      pfVar5 = param_3;
      fVar11 = fVar14;
      if (param_4 != 0) {
        do {
          pfVar8 = pfVar5 + 1;
          fVar12 = *pfVar3;
          pfVar3 = pfVar3 + 1;
          fVar11 = fVar11 + *pfVar5 * fVar12;
          pfVar5 = pfVar8;
        } while (pfVar8 != pfVar9);
      }
      fVar12 = fVar14;
      if (param_6 != 0) {
        pfVar5 = (float *)0x0;
        pfVar3 = param_5;
        if ((uint)(iVar6 * param_2) < param_12) {
          pfVar5 = (float *)(param_11 + iVar6 * param_2 * 4);
        }
        do {
          pfVar8 = pfVar3 + 1;
          fVar13 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          fVar12 = fVar12 + *pfVar3 * fVar13;
          pfVar3 = pfVar8;
        } while (pfVar8 != pfVar10);
      }
      fVar12 = (*(float *)(param_7 + iVar6 * 4) + fVar11 + fVar12) * 0.5;
      uVar7 = in_fpscr & 0xfffffff;
      in_fpscr = uVar7 | (uint)(fVar12 < 8.0) << 0x1f;
      fVar11 = 1.0;
      if (SUB41(in_fpscr >> 0x1f,0)) {
        uVar4 = uVar7 | (uint)(fVar12 < -8.0) << 0x1f | (uint)(fVar12 == -8.0) << 0x1e;
        in_fpscr = uVar4 | (uint)NAN(fVar12) << 0x1c;
        bVar2 = (byte)(uVar4 >> 0x18);
        fVar11 = -1.0;
        if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
          uVar7 = uVar7 | (uint)(fVar12 < 0.0) << 0x1f;
          fVar13 = fVar12;
          if (SUB41(uVar7 >> 0x1f,0)) {
            fVar13 = -fVar12;
          }
          fVar11 = (float)imp_floorf(fVar13 * 25.0 + 0.5);
          in_fpscr = uVar7 & 0xfffffff | (uint)(fVar12 < 0.0) << 0x1f;
          fVar12 = (float)VectorSignedToFloat((int)fVar11,(byte)(in_fpscr >> 0x16) & 3);
          fVar13 = fVar13 + fVar12 * -0.04;
          fVar11 = *(float *)(&DAT_700989bc + (int)fVar11 * 4);
          fVar11 = fVar11 + fVar13 * (1.0 - fVar11 * fVar11) * (1.0 - fVar11 * fVar13);
          if (SUB41(in_fpscr >> 0x1f,0)) {
            fVar11 = -fVar11;
          }
        }
      }
      iVar1 = iVar6 * 4;
      iVar6 = iVar6 + 1;
      *(float *)(param_13 + iVar1) = fVar11 * 0.5 + 0.5;
    } while (iVar6 != param_2);
    return;
  }
  return;
}


// =========================================================================
// Function: FftRonKLEBqexlgxNTiwIFhZsOwhfXmm
// Entry: 0x71b04e70 | Size: 32 bytes
// =========================================================================

void FftRonKLEBqexlgxNTiwIFhZsOwhfXmm(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar2 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar3 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *param_1 = 0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = 0;
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  param_1[8] = 0;
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  param_1[0xc] = 0;
  return;
}


// =========================================================================
// Function: kIQsVspdQDqAAaxqsctlW_ZJnKTFTaUrau
// Entry: 0x71b04ea8 | Size: 52 bytes
// =========================================================================

undefined4 * kIQsVspdQDqAAaxqsctlW_ZJnKTFTaUrau(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar2 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar3 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *param_1 = 0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = 0;
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  param_1[8] = 0;
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  param_1[0xc] = 0;
  thunk_oUkjgQSaIcryBglSFZydFaamxYnPWXLzfRrAzVpJoqEbXFRLJY_(param_1);
  return param_1;
}


// =========================================================================
// Function: oUkjgQSaIcryBglSFZydFaamxYnPWXLzfRrAzVpJoqEbXFRLJY_
// Entry: 0x71b04fb8 | Size: 412 bytes
// =========================================================================

void oUkjgQSaIcryBglSFZydFaamxYnPWXLzfRrAzVpJoqEbXFRLJY_
               (int *param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  bool bVar11;
  
  iVar1 = param_1[3];
  bVar11 = iVar1 == param_2;
  if (bVar11) {
    iVar1 = param_1[7];
  }
  if ((!bVar11 || iVar1 != param_3) || (param_1[2] != param_4)) {
    uVar5 = param_4 * param_2;
    iVar1 = -1;
    iVar9 = -1;
    if (uVar5 < 0x80000000) {
      iVar1 = uVar5 * 2;
    }
    iVar1 = thunk__IBDl(iVar1);
    iVar2 = *param_1;
    *param_1 = iVar1;
    if (iVar2 != 0) {
      thunk_dGrRHE();
    }
    uVar7 = param_4 * param_3;
    if (uVar7 < 0x80000000) {
      iVar9 = uVar7 * 2;
    }
    iVar1 = thunk__IBDl(iVar9);
    iVar9 = param_1[1];
    param_1[1] = iVar1;
    if (iVar9 != 0) {
      thunk_dGrRHE(iVar9);
      iVar1 = param_1[1];
    }
    iVar9 = *param_1;
    if (uVar7 == 0) {
      iVar1 = 0;
    }
    piVar6 = (int *)param_1[0xb];
    if (uVar5 == 0) {
      iVar9 = 0;
    }
    piVar10 = param_1 + 10;
    param_1[4] = iVar9;
    param_1[5] = uVar5;
    param_1[6] = param_4;
    param_1[7] = param_3;
    param_1[8] = iVar1;
    uVar5 = (int)piVar6 - *piVar10 >> 2;
    param_1[2] = param_4;
    param_1[3] = param_2;
    param_1[9] = uVar7;
    if (uVar5 < param_4) {
      FUN_71b060d4(piVar10,param_4 - uVar5);
    }
    else {
      if (param_4 < uVar5) {
        piVar8 = (int *)(*piVar10 + param_4 * 4);
        while (piVar6 != piVar8) {
          piVar6 = piVar6 + -1;
          piVar3 = (int *)*piVar6;
          *piVar6 = 0;
          if (piVar3 != (int *)0x0) {
            (**(code **)(*piVar3 + 4))();
          }
        }
        param_1[0xb] = (int)piVar8;
      }
      if (param_4 == 0) {
        return;
      }
    }
    uVar5 = 0;
    do {
      uVar4 = thunk_MwhHq(0x20);
      thunk_taVxuZCeogvn_pjw_phkongcfQugaEZqqS(uVar4,param_2,param_3);
      piVar6 = *(int **)(*piVar10 + uVar5 * 4);
      *(undefined4 *)(*piVar10 + uVar5 * 4) = uVar4;
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 4))();
      }
      uVar5 = uVar5 + 1;
    } while (param_4 != uVar5);
  }
  return;
}


// =========================================================================
// Function: CwUeqEU_onvRADcLUZUbyMvuMIxQDWwu
// Entry: 0x71b05274 | Size: 152 bytes
// =========================================================================

int * CwUeqEU_onvRADcLUZUbyMvuMIxQDWwu(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)param_1[10];
  if (piVar3 != (int *)0x0) {
    piVar4 = (int *)param_1[0xb];
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
      piVar1 = (int *)param_1[10];
    }
    param_1[0xb] = (int)piVar3;
    thunk_qNQrlu(piVar1);
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
// Function: cOtIFGAXLxOrzNYVmDjacLyPeDPWdhetfQjWCkhmSWJMziwVLqBdILtpPnttkchSVHJqjMW
// Entry: 0x71b05378 | Size: 828 bytes
// =========================================================================

int cOtIFGAXLxOrzNYVmDjacLyPeDPWdhetfQjWCkhmSWJMziwVLqBdILtpPnttkchSVHJqjMW
              (int param_1,int param_2,uint param_3,undefined8 *param_4,int param_5,
              undefined4 param_6,uint param_7,undefined8 *param_8,int param_9)

{
  undefined2 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  uint extraout_r1;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined8 *puVar14;
  uint uVar15;
  bool bVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  thunk_oUkjgQSaIcryBglSFZydFaamxYnPWXLzfRrAzVpJoqEbXFRLJY_(param_1,param_3,param_7,param_2);
  if (param_3 == param_7) {
    imp___aeabi_memcpy(param_8,param_4,param_5 << 1);
  }
  else {
    if (param_2 != 0) {
      uVar4 = extraout_r1;
      if (param_3 != 0) {
        uVar4 = *(uint *)(param_1 + 0xc);
      }
      if (param_3 != 0 && uVar4 != 0) {
        uVar15 = param_3 & 0xfffffff8;
        puVar14 = *(undefined8 **)(param_1 + 0x10);
        iVar2 = 0;
        puVar7 = (undefined8 *)((int)puVar14 + (uVar4 * (param_2 + -1) + param_3) * 2);
        bVar16 = puVar14 < (undefined8 *)((int)param_4 + (param_2 + param_3) * 2 + -2);
        puVar3 = param_4;
        do {
          uVar13 = 0;
          iVar5 = iVar2;
          if ((param_3 < 8 || param_2 + -1 != 0) ||
              (bVar16 && param_4 < puVar7 || (uVar4 & 0x40000000) != 0)) {
LAB_71b05688:
            iVar6 = uVar13 * -2;
            iVar11 = param_3 - uVar13;
            puVar9 = (undefined2 *)((int)param_4 + iVar5 * 2);
            do {
              iVar11 = iVar11 + -1;
              *(undefined2 *)((int)puVar14 - iVar6) = *puVar9;
              iVar6 = iVar6 + -2;
              puVar9 = puVar9 + param_2;
            } while (iVar11 != 0);
          }
          else {
            iVar5 = iVar2 + uVar15 * param_2;
            uVar13 = uVar15;
            puVar8 = puVar14;
            puVar10 = puVar3;
            do {
              uVar17 = *puVar10;
              uVar18 = puVar10[1];
              puVar10 = puVar10 + 2;
              uVar13 = uVar13 - 8;
              *puVar8 = uVar17;
              puVar8[1] = uVar18;
              puVar8 = puVar8 + 2;
            } while (uVar13 != 0);
            uVar13 = uVar15;
            if (param_3 != uVar15) goto LAB_71b05688;
          }
          puVar3 = (undefined8 *)((int)puVar3 + 2);
          iVar2 = iVar2 + 1;
          puVar14 = (undefined8 *)((int)puVar14 + uVar4 * 2);
        } while (iVar2 != param_2);
      }
    }
    iVar2 = *(int *)(param_1 + 0x28);
    if (*(int *)(param_1 + 0x2c) != iVar2) {
      uVar4 = 0;
      do {
        iVar6 = *(int *)(param_1 + 0xc);
        iVar11 = *(int *)(param_1 + 0x1c);
        iVar5 = 0;
        if (iVar6 != 0) {
          iVar5 = *(int *)(param_1 + 0x10) + iVar6 * uVar4 * 2;
        }
        iVar12 = 0;
        if (iVar11 != 0) {
          iVar12 = *(int *)(param_1 + 0x20) + iVar11 * uVar4 * 2;
        }
        thunk_zEPBeQzfowLpqZdSDCgSiA_dVuD_nRbSNtPHSDfVidzTHj
                  (*(undefined4 *)(iVar2 + uVar4 * 4),iVar5,iVar6,iVar12,iVar11);
        iVar2 = *(int *)(param_1 + 0x28);
        uVar4 = uVar4 + 1;
      } while (uVar4 < (uint)(*(int *)(param_1 + 0x2c) - iVar2 >> 2));
    }
    iVar2 = *(int *)(param_1 + 0x18);
    puVar3 = *(undefined8 **)(param_1 + 0x20);
    uVar4 = *(uint *)(param_1 + 0x24);
    if (uVar4 == 0) {
      puVar3 = (undefined8 *)0x0;
    }
    if (iVar2 != 0) {
      uVar4 = *(uint *)(param_1 + 0x1c);
    }
    param_5 = param_9;
    if (iVar2 != 0 && uVar4 != 0) {
      uVar15 = uVar4 & 0xbffffff8;
      bVar16 = puVar3 < (undefined8 *)((int)param_8 + (iVar2 + uVar4) * 2 + -2);
      puVar7 = (undefined8 *)((int)puVar3 + iVar2 * uVar4 * 2);
      iVar5 = 0;
      puVar14 = param_8;
      do {
        uVar13 = 0;
        iVar6 = iVar5;
        if ((uVar4 < 8 || iVar2 != 1) || (param_8 < puVar7 && bVar16 || (uVar4 & 0x40000000) != 0))
        {
LAB_71b0555c:
          iVar11 = uVar13 * -2;
          iVar12 = uVar4 - uVar13;
          puVar9 = (undefined2 *)((int)param_8 + iVar6 * 2);
          do {
            puVar1 = (undefined2 *)((int)puVar3 - iVar11);
            iVar11 = iVar11 + -2;
            *puVar9 = *puVar1;
            iVar12 = iVar12 + -1;
            puVar9 = puVar9 + iVar2;
          } while (iVar12 != 0);
        }
        else {
          iVar6 = iVar5 + uVar15 * iVar2;
          puVar8 = puVar3;
          puVar10 = puVar14;
          uVar13 = uVar15;
          do {
            uVar17 = *puVar8;
            uVar18 = puVar8[1];
            puVar8 = puVar8 + 2;
            uVar13 = uVar13 - 8;
            *puVar10 = uVar17;
            puVar10[1] = uVar18;
            puVar10 = puVar10 + 2;
          } while (uVar13 != 0);
          uVar13 = uVar15;
          if (uVar4 != uVar15) goto LAB_71b0555c;
        }
        iVar5 = iVar5 + 1;
        puVar14 = (undefined8 *)((int)puVar14 + 2);
        puVar3 = (undefined8 *)((int)puVar3 + uVar4 * 2);
        if (iVar5 == iVar2) {
          return param_9;
        }
      } while( true );
    }
  }
  return param_5;
}


// =========================================================================
// Function: IFUb_fQIeCfyjerDncMtRBbvRRLVdXKxxGoeXqGwMtzeXiGzXEJariO_FNtpVQUoeZEEOFrPXQVfBUcRTw
// Entry: 0x71b05720 | Size: 68 bytes
// =========================================================================

int IFUb_fQIeCfyjerDncMtRBbvRRLVdXKxxGoeXqGwMtzeXiGzXEJariO_FNtpVQUoeZEEOFrPXQVfBUcRTw
              (int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  
  if (param_3 == param_5) {
    imp___aeabi_memcpy(param_4,param_2,param_3 << 1);
    return param_3;
  }
  iVar1 = thunk_zEPBeQzfowLpqZdSDCgSiA_dVuD_nRbSNtPHSDfVidzTHj(**(undefined4 **)(param_1 + 0x28));
  return iVar1;
}


// =========================================================================
// Function: uNzjIwyRgcGcaSdpEPQpd_JpVGYgmdkN
// Entry: 0x71b057b4 | Size: 32 bytes
// =========================================================================

void uNzjIwyRgcGcaSdpEPQpd_JpVGYgmdkN(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar2 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar3 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *param_1 = 0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = 0;
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  param_1[8] = 0;
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  param_1[0xc] = 0;
  return;
}


// =========================================================================
// Function: VTiKTmYFcfeKORSuEmBinqtjYiDUQ_GEWy
// Entry: 0x71b057ec | Size: 52 bytes
// =========================================================================

undefined4 * VTiKTmYFcfeKORSuEmBinqtjYiDUQ_GEWy(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar2 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar3 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *param_1 = 0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = 0;
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  param_1[8] = 0;
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  param_1[0xc] = 0;
  thunk_oHAmhGSimgGBhMktDrGgcEFFKoJPsQPwVfHRvfjclZrUFCkmETu(param_1);
  return param_1;
}


// =========================================================================
// Function: oHAmhGSimgGBhMktDrGgcEFFKoJPsQPwVfHRvfjclZrUFCkmETu
// Entry: 0x71b058fc | Size: 408 bytes
// =========================================================================

void oHAmhGSimgGBhMktDrGgcEFFKoJPsQPwVfHRvfjclZrUFCkmETu
               (int *param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  bool bVar10;
  
  iVar1 = param_1[3];
  bVar10 = iVar1 == param_2;
  if (bVar10) {
    iVar1 = param_1[7];
  }
  if ((!bVar10 || iVar1 != param_3) || (param_1[2] != param_4)) {
    uVar5 = param_4 * param_2;
    iVar1 = uVar5 * 4;
    if (0x3fffffff < uVar5) {
      iVar1 = -1;
    }
    iVar1 = thunk__IBDl(iVar1);
    iVar2 = *param_1;
    *param_1 = iVar1;
    if (iVar2 != 0) {
      thunk_dGrRHE();
    }
    uVar7 = param_4 * param_3;
    iVar1 = uVar7 * 4;
    if (0x3fffffff < uVar7) {
      iVar1 = -1;
    }
    iVar1 = thunk__IBDl(iVar1);
    iVar2 = param_1[1];
    param_1[1] = iVar1;
    if (iVar2 != 0) {
      thunk_dGrRHE(iVar2);
      iVar1 = param_1[1];
    }
    iVar2 = *param_1;
    if (uVar7 == 0) {
      iVar1 = 0;
    }
    piVar6 = (int *)param_1[0xb];
    if (uVar5 == 0) {
      iVar2 = 0;
    }
    piVar9 = param_1 + 10;
    param_1[4] = iVar2;
    param_1[5] = uVar5;
    param_1[6] = param_4;
    param_1[7] = param_3;
    param_1[8] = iVar1;
    uVar5 = (int)piVar6 - *piVar9 >> 2;
    param_1[2] = param_4;
    param_1[3] = param_2;
    param_1[9] = uVar7;
    if (uVar5 < param_4) {
      FUN_71b060d4(piVar9,param_4 - uVar5);
    }
    else {
      if (param_4 < uVar5) {
        piVar8 = (int *)(*piVar9 + param_4 * 4);
        while (piVar6 != piVar8) {
          piVar6 = piVar6 + -1;
          piVar3 = (int *)*piVar6;
          *piVar6 = 0;
          if (piVar3 != (int *)0x0) {
            (**(code **)(*piVar3 + 4))();
          }
        }
        param_1[0xb] = (int)piVar8;
      }
      if (param_4 == 0) {
        return;
      }
    }
    uVar5 = 0;
    do {
      uVar4 = thunk_MwhHq(0x20);
      thunk_taVxuZCeogvn_pjw_phkongcfQugaEZqqS(uVar4,param_2,param_3);
      piVar6 = *(int **)(*piVar9 + uVar5 * 4);
      *(undefined4 *)(*piVar9 + uVar5 * 4) = uVar4;
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 4))();
      }
      uVar5 = uVar5 + 1;
    } while (param_4 != uVar5);
  }
  return;
}


// =========================================================================
// Function: eTKktchCxUIAfWJsyUVzqfAMKsvyEqWT
// Entry: 0x71b05bb4 | Size: 152 bytes
// =========================================================================

int * eTKktchCxUIAfWJsyUVzqfAMKsvyEqWT(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)param_1[10];
  if (piVar3 != (int *)0x0) {
    piVar4 = (int *)param_1[0xb];
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
      piVar1 = (int *)param_1[10];
    }
    param_1[0xb] = (int)piVar3;
    thunk_qNQrlu(piVar1);
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
// Function: uZfXKTZSYiKmqhpqeLtPkcDQBOSDScSvrZslByRYjUQNHIkWWtOFfOvFpuhMURJYsREVmWG
// Entry: 0x71b05cb8 | Size: 796 bytes
// =========================================================================

int uZfXKTZSYiKmqhpqeLtPkcDQBOSDScSvrZslByRYjUQNHIkWWtOFfOvFpuhMURJYsREVmWG
              (int param_1,int param_2,uint param_3,undefined8 *param_4,int param_5,
              undefined4 param_6,uint param_7,undefined8 *param_8,int param_9)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  uint extraout_r3;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  bool bVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  thunk_oHAmhGSimgGBhMktDrGgcEFFKoJPsQPwVfHRvfjclZrUFCkmETu(param_1,param_3,param_7,param_2);
  if (param_3 == param_7) {
    imp___aeabi_memcpy4(param_8,param_4,param_5 << 2);
  }
  else {
    if (param_2 != 0) {
      uVar7 = extraout_r3;
      if (param_3 != 0) {
        uVar7 = *(uint *)(param_1 + 0xc);
      }
      if (param_3 != 0 && uVar7 != 0) {
        puVar14 = *(undefined8 **)(param_1 + 0x10);
        uVar1 = param_3 & 0xfffffffc;
        puVar2 = (undefined8 *)((int)puVar14 + (uVar7 * (param_2 + -1) + param_3) * 4);
        iVar4 = 0;
        bVar15 = puVar14 < (undefined8 *)((int)param_4 + (param_2 + param_3) * 4 + -4);
        puVar12 = param_4;
        do {
          uVar9 = 0;
          iVar5 = iVar4;
          if ((param_3 < 8 || param_2 + -1 != 0) ||
              (bVar15 && param_4 < puVar2 || (uVar7 & 0x20000000) != 0)) {
LAB_71b05fb0:
            iVar10 = param_3 - uVar9;
            puVar8 = (undefined4 *)((int)param_4 + iVar5 * 4);
            puVar13 = (undefined4 *)((int)puVar14 + uVar9 * 4);
            do {
              iVar10 = iVar10 + -1;
              *puVar13 = *puVar8;
              puVar8 = puVar8 + param_2;
              puVar13 = puVar13 + 1;
            } while (iVar10 != 0);
          }
          else {
            iVar5 = iVar4 + uVar1 * param_2;
            uVar9 = uVar1;
            puVar3 = puVar14;
            puVar6 = puVar12;
            do {
              uVar16 = *puVar6;
              uVar17 = puVar6[1];
              puVar6 = puVar6 + 2;
              uVar9 = uVar9 - 4;
              *puVar3 = uVar16;
              puVar3[1] = uVar17;
              puVar3 = puVar3 + 2;
            } while (uVar9 != 0);
            uVar9 = uVar1;
            if (param_3 != uVar1) goto LAB_71b05fb0;
          }
          iVar4 = iVar4 + 1;
          puVar12 = (undefined8 *)((int)puVar12 + 4);
          puVar14 = (undefined8 *)((int)puVar14 + uVar7 * 4);
        } while (iVar4 != param_2);
      }
    }
    uVar1 = *(uint *)(param_1 + 0x28);
    uVar7 = *(uint *)(param_1 + 0x2c);
    if (uVar7 != uVar1) {
      uVar9 = 0;
      do {
        iVar5 = *(int *)(param_1 + 0xc);
        iVar10 = *(int *)(param_1 + 0x1c);
        iVar4 = 0;
        if (iVar5 != 0) {
          iVar4 = *(int *)(param_1 + 0x10) + iVar5 * uVar9 * 4;
        }
        iVar11 = 0;
        if (iVar10 != 0) {
          iVar11 = *(int *)(param_1 + 0x20) + iVar10 * uVar9 * 4;
        }
        thunk_gJliSjNJCqyoHVbopwNuQyswewfUrHpmfzFnDTmsCBjuHf
                  (*(undefined4 *)(uVar1 + uVar9 * 4),iVar4,iVar5,iVar11,iVar10);
        uVar1 = *(uint *)(param_1 + 0x28);
        uVar9 = uVar9 + 1;
        uVar7 = *(int *)(param_1 + 0x2c) - uVar1;
      } while (uVar9 < (uint)((int)uVar7 >> 2));
    }
    iVar4 = *(int *)(param_1 + 0x18);
    puVar12 = *(undefined8 **)(param_1 + 0x20);
    if (*(int *)(param_1 + 0x24) == 0) {
      puVar12 = (undefined8 *)0x0;
    }
    if (iVar4 != 0) {
      uVar7 = *(uint *)(param_1 + 0x1c);
    }
    param_5 = param_9;
    if (iVar4 != 0 && uVar7 != 0) {
      uVar1 = uVar7 & 0xdffffffc;
      iVar5 = 0;
      bVar15 = puVar12 < (undefined8 *)((int)param_8 + (iVar4 + uVar7) * 4 + -4);
      puVar2 = (undefined8 *)((int)puVar12 + iVar4 * uVar7 * 4);
      puVar14 = param_8;
      do {
        uVar9 = 0;
        iVar10 = iVar5;
        if ((uVar7 < 8 || iVar4 != 1) || (param_8 < puVar2 && bVar15 || (uVar7 & 0x20000000) != 0))
        {
LAB_71b05e94:
          iVar11 = uVar7 - uVar9;
          puVar8 = (undefined4 *)((int)puVar12 + uVar9 * 4);
          puVar13 = (undefined4 *)((int)param_8 + iVar10 * 4);
          do {
            iVar11 = iVar11 + -1;
            *puVar13 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar13 = puVar13 + iVar4;
          } while (iVar11 != 0);
        }
        else {
          iVar10 = iVar5 + uVar1 * iVar4;
          puVar3 = puVar14;
          puVar6 = puVar12;
          uVar9 = uVar1;
          do {
            uVar16 = *puVar6;
            uVar17 = puVar6[1];
            puVar6 = puVar6 + 2;
            uVar9 = uVar9 - 4;
            *puVar3 = uVar16;
            puVar3[1] = uVar17;
            puVar3 = puVar3 + 2;
          } while (uVar9 != 0);
          uVar9 = uVar1;
          if (uVar7 != uVar1) goto LAB_71b05e94;
        }
        iVar5 = iVar5 + 1;
        puVar12 = (undefined8 *)((int)puVar12 + uVar7 * 4);
        puVar14 = (undefined8 *)((int)puVar14 + 4);
        if (iVar5 == iVar4) {
          return param_9;
        }
      } while( true );
    }
  }
  return param_5;
}


// =========================================================================
// Function: m_NAmIqKHROjwSkSTzOndZJFYJbvtHNzhYFMzUlOUiOBWngzTioUDiUNRSmlCLXIjlScHwMCSkgfhlQidE
// Entry: 0x71b06040 | Size: 68 bytes
// =========================================================================

int m_NAmIqKHROjwSkSTzOndZJFYJbvtHNzhYFMzUlOUiOBWngzTioUDiUNRSmlCLXIjlScHwMCSkgfhlQidE
              (int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  
  if (param_3 == param_5) {
    imp___aeabi_memcpy4(param_4,param_2,param_3 << 2);
    return param_3;
  }
  iVar1 = thunk_gJliSjNJCqyoHVbopwNuQyswewfUrHpmfzFnDTmsCBjuHf(**(undefined4 **)(param_1 + 0x28));
  return iVar1;
}


// =========================================================================
// Function: FUN_71b060d4
// Entry: 0x71b060d4 | Size: 248 bytes
// =========================================================================

void FUN_71b060d4(int *param_1,uint param_2)

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
      if (0x3fffffff < uVar5) goto LAB_71b061c8;
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
  FUN_71a9f710(param_1);
LAB_71b061c8:
                    /* WARNING: Subroutine does not return */
  FUN_719fe2ec();
}


// =========================================================================
// Function: voSiDvwQDRejjrRonOMmSKVQlTtZYxnlQdQDICIIZRaya
// Entry: 0x71b062b0 | Size: 88 bytes
// =========================================================================

void voSiDvwQDRejjrRonOMmSKVQlTtZYxnlQdQDICIIZRaya
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
// Function: cKYPlafpdW_YljsyErqpjerDlGnCdFsVCDKWuOtye
// Entry: 0x71b06308 | Size: 4 bytes
// =========================================================================

void cKYPlafpdW_YljsyErqpjerDlGnCdFsVCDKWuOtye(void)

{
  return;
}


// =========================================================================
// Function: dYVAJzNxMsYnoyjUPbmRzcAulxXkyzlxJnSGhxQXQIdSJLciYtY
// Entry: 0x71b0630c | Size: 40 bytes
// =========================================================================

void dYVAJzNxMsYnoyjUPbmRzcAulxXkyzlxJnSGhxQXQIdSJLciYtY(int param_1)

{
  *(undefined1 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined2 *)(param_1 + 0x10) = 0x101;
  *(undefined4 *)(param_1 + 8) = 0xff;
  return;
}


// =========================================================================
// Function: ViCueajOONcYpfRKvWpFMKHfBRkucYLUJNNzhqMbpIXkgLGzrJkKtOgSreMXhmORZcpmNz
// Entry: 0x71b06334 | Size: 356 bytes
// =========================================================================

void ViCueajOONcYpfRKvWpFMKHfBRkucYLUJNNzhqMbpIXkgLGzrJkKtOgSreMXhmORZcpmNz
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
// Function: mkZhcAhlXuQaEjECQtpcqsmfHhLmyXKnKFWlIOwAxWWhBWaPJxtwCNkaaevm
// Entry: 0x71b064a4 | Size: 180 bytes
// =========================================================================

undefined4
mkZhcAhlXuQaEjECQtpcqsmfHhLmyXKnKFWlIOwAxWWhBWaPJxtwCNkaaevm
          (uint *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_1[5];
  if (uVar3 == 0) {
    param_3 = (uint)*(byte *)((int)param_1 + 0x12);
    param_2 = 0;
  }
  if (uVar3 != 0 || param_3 != 0) {
    if (uVar3 < 0x100) {
      uVar2 = *param_1;
      if ((int)uVar3 < (int)uVar2) {
        param_1[5] = uVar2;
        uVar3 = uVar2;
      }
      param_1[3] = uVar3;
      *(undefined1 *)(param_1 + 10) = 1;
      param_1[8] = 0;
      param_1[9] = 0;
      *(undefined1 *)((int)param_1 + 0x12) = 0;
      return 0;
    }
    iVar1 = thunk_lilHXuZEhneNWPvoAPfLvmvCz_RFvgfbGZxzMxlM_ANPGdDNhYcwail();
    if (iVar1 == 0) {
      thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
                (&DAT_700957f2,s_____webrtc_apm_src_webrtc_module_7006d422,0x9f3,
                 s__AGC2__Invalid_value_for_the_app_7006fc68,uVar3);
      return 0xffffffff;
    }
    param_2 = 0xffffffff;
  }
  return param_2;
}


// =========================================================================
// Function: IEwWhxpeyOzLRaaJIrvEUVXQoFQmRUlZECUefWxquIHHmF_ZGLdHuEzZqa
// Entry: 0x71b06564 | Size: 340 bytes
// =========================================================================

void IEwWhxpeyOzLRaaJIrvEUVXQoFQmRUlZECUefWxquIHHmF_ZGLdHuEzZqa(int *param_1,int param_2)

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
// Function: QzmkpOPnOVGEaFyTBOsYbzAkQibVXmtzJKlApPsYT_IyJiEBggwOoWh
// Entry: 0x71b066c8 | Size: 300 bytes
// =========================================================================

void QzmkpOPnOVGEaFyTBOsYbzAkQibVXmtzJKlApPsYT_IyJiEBggwOoWh(int param_1,int param_2)

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
// Function: QIMzEBIhgOmyebPAvP_yJErRIiTgeKgXVoAKOTXazdYKNjUGOREu
// Entry: 0x71b06804 | Size: 8 bytes
// =========================================================================

void QIMzEBIhgOmyebPAvP_yJErRIiTgeKgXVoAKOTXazdYKNjUGOREu(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}


// =========================================================================
// Function: NDpcUWATRhIm_MCUflqKYEoTS_tYUvHQ_knqGAtJuEawSXqH_eINlce
// Entry: 0x71b0680c | Size: 188 bytes
// =========================================================================

void NDpcUWATRhIm_MCUflqKYEoTS_tYUvHQ_knqGAtJuEawSXqH_eINlce(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x14);
  if (uVar2 != 0) {
    if (uVar2 < 0x100) {
      iVar1 = *(int *)(param_1 + 0xc);
      if ((iVar1 + 0x19 < (int)uVar2) || ((int)uVar2 < iVar1 + -0x19)) {
        *(uint *)(param_1 + 0xc) = uVar2;
        if (*(int *)(param_1 + 8) < (int)uVar2) {
          *(uint *)(param_1 + 8) = uVar2;
        }
        *(undefined1 *)(param_1 + 0x28) = 0;
        *(undefined4 *)(param_1 + 0x20) = 0;
        *(undefined4 *)(param_1 + 0x24) = 0;
        return;
      }
      if (*(int *)(param_1 + 8) < param_2) {
        param_2 = *(int *)(param_1 + 8);
      }
      if (param_2 != iVar1) {
        *(int *)(param_1 + 0xc) = param_2;
        *(int *)(param_1 + 0x14) = param_2;
      }
    }
    else {
      iVar1 = thunk_lilHXuZEhneNWPvoAPfLvmvCz_RFvgfbGZxzMxlM_ANPGdDNhYcwail();
      if (iVar1 == 0) {
        thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
                  (&DAT_700957f2,s_____webrtc_apm_src_webrtc_module_7006d422,0x79b,
                   s__AGC2__Invalid_value_for_the_app_7006fc68,uVar2);
        return;
      }
    }
  }
  return;
}


// =========================================================================
// Function: IBqHwUbmsVaxsxotrSw_ucaTcp_dhFTegAYbkXDCaQfaOHJW_LgLbjPQVzpcvYcjjcyplt
// Entry: 0x71b068d4 | Size: 28 bytes
// =========================================================================

void IBqHwUbmsVaxsxotrSw_ucaTcp_dhFTegAYbkXDCaQfaOHJW_LgLbjPQVzpcvYcjjcyplt
               (int param_1,uint param_2)

{
  bool bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x10) != param_2;
  if (bVar1) {
    *(char *)(param_1 + 0x10) = (char)param_2;
  }
  if (bVar1 && param_2 != 0) {
    *(undefined1 *)(param_1 + 0x11) = 1;
  }
  return;
}


// =========================================================================
// Function: cdTmHOBwNumyaafcOcSQNLmdMWoqz_gAvUK_sPF_kadPhJJNbvP
// Entry: 0x71b068f0 | Size: 536 bytes
// =========================================================================

uint * cdTmHOBwNumyaafcOcSQNLmdMWoqz_gAvUK_sPF_kadPhJJNbvP(uint *param_1,uint param_2,uint *param_3)

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
// Function: ePg_MmKdPjoqlBhvcSzqzzCoUZKICEYKXWEsQ
// Entry: 0x71b06b4c | Size: 144 bytes
// =========================================================================

int ePg_MmKdPjoqlBhvcSzqzzCoUZKICEYKXWEsQ(int param_1)

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
// Function: eV_K_el__CLuRcnKpKPUiecNiwhwpEuEBZcYJefrvAjiria
// Entry: 0x71b06bdc | Size: 208 bytes
// =========================================================================

void eV_K_el__CLuRcnKpKPUiecNiwhwpEuEBZcYJefrvAjiria(int param_1)

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
// Function: rrNYgzwHIHbHiAeBWpuMoYblEIcGolwJPmkhCFJGijBBRglRTeryRgZVRxs
// Entry: 0x71b06cac | Size: 124 bytes
// =========================================================================

void rrNYgzwHIHbHiAeBWpuMoYblEIcGolwJPmkhCFJGijBBRglRTeryRgZVRxs(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = *(int **)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x4c) = 0;
  uVar1 = *(int *)(param_1 + 0x44) - (int)piVar5 >> 2;
  iVar4 = *(int *)(*piVar5 + 0x14);
  if (1 < uVar1) {
    uVar3 = 1;
    do {
      iVar2 = *(int *)(piVar5[uVar3] + 0x14);
      if (iVar2 < iVar4) {
        *(uint *)(param_1 + 0x4c) = uVar3;
        iVar4 = iVar2;
      }
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
  }
  iVar2 = *(int *)(param_1 + 4);
  if (*(int *)(param_1 + 4) < iVar4) {
    iVar2 = iVar4;
  }
  if (*(int *)(param_1 + 0xc) < 1) {
    iVar2 = iVar4;
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    iVar2 = iVar4;
  }
  *(int *)(param_1 + 8) = iVar2;
  return;
}


// =========================================================================
// Function: WbgoAazCxpwQQPGgiXafmTEzZghxVEzXeLvyjHFqKuPNV_dZQoQzaiXLRMDC_RJgYjFhEzReD
// Entry: 0x71b06d30 | Size: 1268 bytes
// =========================================================================

void WbgoAazCxpwQQPGgiXafmTEzZghxVEzXeLvyjHFqKuPNV_dZQoQzaiXLRMDC_RJgYjFhEzReD
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
  int in_r12;
  int extraout_r12;
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
// Function: _qBQovZxJhYtINtwajTijxQ_eTpPajytCvIIJFbECblNOaVQeohPeAutAR
// Entry: 0x71b07268 | Size: 152 bytes
// =========================================================================

void _qBQovZxJhYtINtwajTijxQ_eTpPajytCvIIJFbECblNOaVQeohPeAutAR(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  
  piVar5 = *(int **)(param_1 + 0x40);
  piVar6 = *(int **)(param_1 + 0x44);
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  for (piVar3 = piVar5; piVar3 != piVar6; piVar3 = piVar3 + 1) {
    *(undefined4 *)(*piVar3 + 0x14) = param_2;
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  uVar1 = (int)piVar6 - (int)piVar5 >> 2;
  iVar7 = *(int *)(*piVar5 + 0x14);
  if (1 < uVar1) {
    uVar4 = 1;
    do {
      iVar2 = *(int *)(piVar5[uVar4] + 0x14);
      if (iVar2 < iVar7) {
        *(uint *)(param_1 + 0x4c) = uVar4;
        iVar7 = iVar2;
      }
      uVar4 = uVar4 + 1;
    } while (uVar1 != uVar4);
  }
  iVar2 = *(int *)(param_1 + 4);
  if (*(int *)(param_1 + 4) < iVar7) {
    iVar2 = iVar7;
  }
  if (*(int *)(param_1 + 0xc) < 1) {
    iVar2 = iVar7;
  }
  *(int *)(param_1 + 8) = iVar2;
  return;
}


// =========================================================================
// Function: dVKNPVeRliuBWlskeoTLxwummMUgBBAfdtmSXclUbfNKDLeGkJEVEtWoNLygbUhqdNePOCKzzBFJDdyx
// Entry: 0x71b07300 | Size: 640 bytes
// =========================================================================

void dVKNPVeRliuBWlskeoTLxwummMUgBBAfdtmSXclUbfNKDLeGkJEVEtWoNLygbUhqdNePOCKzzBFJDdyx
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
// Function: lVKjJkWIezUotYnM_XQBIHEPsESKIKfOqLMxRAUybtHNTxgnLBfhjXNyGVsDHHJYtk
// Entry: 0x71b07590 | Size: 108 bytes
// =========================================================================

void lVKjJkWIezUotYnM_XQBIHEPsESKIKfOqLMxRAUybtHNTxgnLBfhjXNyGVsDHHJYtk(int param_1,uint param_2)

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
// Function: FUN_71b07dd8
// Entry: 0x71b07dd8 | Size: 112 bytes
// =========================================================================

undefined4 * FUN_71b07dd8(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)*param_1;
  if (piVar3 != (int *)0x0) {
    piVar4 = (int *)param_1[1];
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
      piVar1 = (int *)*param_1;
    }
    param_1[1] = piVar3;
    thunk_qNQrlu(piVar1);
  }
  return param_1;
}


// =========================================================================
// Function: FUN_71b07fac
// Entry: 0x71b07fac | Size: 20 bytes
// =========================================================================

void FUN_71b07fac(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_vector_7006dad5);
}


// =========================================================================
// Function: oCvNXutoGNJyyKJHFDpFGbaKvuWYyWSAHQlBRsWmrgzzbIsJ_qkLLstegK
// Entry: 0x71b08014 | Size: 92 bytes
// =========================================================================

void oCvNXutoGNJyyKJHFDpFGbaKvuWYyWSAHQlBRsWmrgzzbIsJ_qkLLstegK
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
// Function: SJayozYIgYKSuYQOWfcHfsIPeYhhIerujE_
// Entry: 0x71b082d0 | Size: 4 bytes
// =========================================================================

void SJayozYIgYKSuYQOWfcHfsIPeYhhIerujE_(void)

{
  return;
}


// =========================================================================
// Function: ICUerHsoVUvxbUCMgwuWaoXtiPmxgxGqVtJaf_xpNeJhQ_QNqGBytlQfPyUS
// Entry: 0x71b082ec | Size: 108 bytes
// =========================================================================

void ICUerHsoVUvxbUCMgwuWaoXtiPmxgxGqVtJaf_xpNeJhQ_QNqGBytlQfPyUS
               (undefined4 *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  
  piVar1 = (int *)thunk_MwhHq(0x60);
  piVar1[2] = param_2;
  piVar1[3] = param_3;
  *piVar1 = (int)&DAT_70b138f4;
  piVar1[1] = param_4;
  thunk_aBjaBSBlrFwjLzGEWHqMVygIqMHHkqtYnnwontHTp(piVar1 + 7);
  thunk_aBjaBSBlrFwjLzGEWHqMVygIqMHHkqtYnnwontHTp(piVar1 + 0x10);
  (**(code **)(*piVar1 + 0x10))(piVar1);
  *param_1 = piVar1;
  return;
}


// =========================================================================
// Function: FUN_71b08388
// Entry: 0x71b08388 | Size: 56 bytes
// =========================================================================

undefined4 * FUN_71b08388(undefined4 *param_1)

{
  *param_1 = &DAT_70b138f4;
  thunk_dDzUANzAjOcgwmeNunbLdXagUVBmWzZauobjMLUgV(param_1 + 0x10);
  thunk_dDzUANzAjOcgwmeNunbLdXagUVBmWzZauobjMLUgV(param_1 + 7);
  return param_1;
}


// =========================================================================
// Function: FUN_71b0840c
// Entry: 0x71b0840c | Size: 384 bytes
// =========================================================================

void FUN_71b0840c(int param_1,float param_2,float param_3,float param_4)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fStack_28;
  char cStack_24;
  
  pfVar6 = &fStack_28;
  if (0.95 <= param_2) {
    iVar1 = *(int *)(param_1 + 0x38);
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    *(int *)(param_1 + 0x38) = iVar1 + 10;
    fVar7 = *(float *)(param_1 + 0x34);
    if (*(float *)(param_1 + 0x34) < param_3) {
      fVar7 = param_3;
    }
    *(float *)(param_1 + 0x34) = fVar7;
    if (0x186 < iVar1) {
      thunk_MzRBVtEPCkFOFfkEFspDVKqCQgBJkgJwrigBXtcPSFuUTQMM(param_1 + 0x1c,fVar7);
      *(undefined4 *)(param_1 + 0x34) = 0xc2b49eb8;
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    thunk_GpVIVmSCEIsprBHjRlAFDYlQHDtMKbMAjCPbIVQX_tanPB(&fStack_28,param_1 + 0x1c);
    if (cStack_24 == '\0') {
      pfVar6 = (float *)(param_1 + 0x34);
    }
    if (*pfVar6 - param_4 <= *(float *)(param_1 + 0x18)) {
      fVar7 = 0.00023025274;
      fVar8 = 0.99976975;
    }
    else {
      fVar7 = 0.0011506081;
      fVar8 = 0.9988494;
    }
    fVar8 = (*pfVar6 - param_4) * fVar7 + *(float *)(param_1 + 0x18) * fVar8;
    fVar7 = fVar8;
    if (25.0 <= fVar8) {
      fVar7 = 25.0;
    }
    if (fVar8 <= 12.0) {
      fVar7 = 12.0;
    }
    *(float *)(param_1 + 0x18) = fVar7;
    if (*(int *)(param_1 + 0xc) <= *(int *)(param_1 + 0x10)) {
      *(float *)(param_1 + 0x14) = fVar7;
    }
    return;
  }
  if (1 < *(int *)(param_1 + 0xc)) {
    if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0xc)) {
      if (*(int *)(param_1 + 0x10) < 1) goto LAB_71b08578;
      iVar1 = 0x18;
      iVar3 = 0x3c;
    }
    else {
      iVar1 = 0x3c;
      iVar3 = 0x18;
    }
    puVar4 = (undefined8 *)(param_1 + iVar3);
    puVar2 = (undefined8 *)(param_1 + iVar1);
    uVar9 = puVar4[1];
    uVar10 = puVar4[2];
    uVar11 = puVar4[3];
    uVar5 = *(undefined4 *)(puVar4 + 4);
    *puVar2 = *puVar4;
    puVar2[1] = uVar9;
    puVar2[2] = uVar10;
    puVar2[3] = uVar11;
    *(undefined4 *)(puVar2 + 4) = uVar5;
  }
LAB_71b08578:
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


// =========================================================================
// Function: FUN_71b085a0
// Entry: 0x71b085a0 | Size: 84 bytes
// =========================================================================

void FUN_71b085a0(int param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 8);
  thunk_ujrFTqFvLamVMAPYWfBsmkNuMyOlkmNOSWczvxgowkayt(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0xc2b49eb8;
  thunk_ujrFTqFvLamVMAPYWfBsmkNuMyOlkmNOSWczvxgowkayt(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x58) = 0xc2b49eb8;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  return;
}


// =========================================================================
// Function: aBjaBSBlrFwjLzGEWHqMVygIqMHHkqtYnnwontHTp
// Entry: 0x71b08858 | Size: 16 bytes
// =========================================================================

void aBjaBSBlrFwjLzGEWHqMVygIqMHHkqtYnnwontHTp(int param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


// =========================================================================
// Function: dDzUANzAjOcgwmeNunbLdXagUVBmWzZauobjMLUgV
// Entry: 0x71b08868 | Size: 4 bytes
// =========================================================================

void dDzUANzAjOcgwmeNunbLdXagUVBmWzZauobjMLUgV(void)

{
  return;
}


// =========================================================================
// Function: TiMWlaNoHoQBfYogLGkXjpjInRdXiDyUlvVcVxDGXgWAUL
// Entry: 0x71b0886c | Size: 144 bytes
// =========================================================================

bool TiMWlaNoHoQBfYogLGkXjpjInRdXiDyUlvVcVxDGXgWAUL(int param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)(param_1 + 0x14);
  bVar1 = false;
  if (iVar3 == *(int *)(param_2 + 0x14)) {
    if (0 < iVar3) {
      uVar4 = *(uint *)(param_1 + 0x10);
      uVar2 = *(uint *)(param_2 + 0x10);
      if (iVar3 != 4) {
        uVar4 = 0;
        uVar2 = 0;
      }
      do {
        bVar1 = *(float *)(param_1 + (uVar4 & 3) * 4) == *(float *)(param_2 + (uVar2 & 3) * 4);
        if (!bVar1) {
          return bVar1;
        }
        iVar3 = iVar3 + -1;
        uVar2 = uVar2 + 1;
        uVar4 = uVar4 + 1;
      } while (iVar3 != 0);
      return bVar1;
    }
    bVar1 = true;
  }
  return bVar1;
}


// =========================================================================
// Function: nRYQrnBMdyuB_PjADMKDDfGJSEsAcYxjLg_RjYuehbWcmQTWrCCX
// Entry: 0x71b088fc | Size: 16 bytes
// =========================================================================

undefined4 nRYQrnBMdyuB_PjADMKDDfGJSEsAcYxjLg_RjYuehbWcmQTWrCCX(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x14) != 4) {
    uVar1 = 0;
  }
  return uVar1;
}


// =========================================================================
// Function: zCDBoqVLeMimRfyP_edNgpmJLnSOGydOyBrNyNNgNkddlaMCn
// Entry: 0x71b0890c | Size: 8 bytes
// =========================================================================

undefined4 zCDBoqVLeMimRfyP_edNgpmJLnSOGydOyBrNyNNgNkddlaMCn(void)

{
  return 4;
}


// =========================================================================
// Function: MvtEeHPrNFfIAkXuEbTsnGUAJAVQeoTwXzigPGwUpwMom
// Entry: 0x71b08914 | Size: 8 bytes
// =========================================================================

undefined4 MvtEeHPrNFfIAkXuEbTsnGUAJAVQeoTwXzigPGwUpwMom(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


// =========================================================================
// Function: ujrFTqFvLamVMAPYWfBsmkNuMyOlkmNOSWczvxgowkayt
// Entry: 0x71b0891c | Size: 16 bytes
// =========================================================================

void ujrFTqFvLamVMAPYWfBsmkNuMyOlkmNOSWczvxgowkayt(int param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


// =========================================================================
// Function: MzRBVtEPCkFOFfkEFspDVKqCQgBJkgJwrigBXtcPSFuUTQMM
// Entry: 0x71b0892c | Size: 48 bytes
// =========================================================================

void MzRBVtEPCkFOFfkEFspDVKqCQgBJkgJwrigBXtcPSFuUTQMM(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + iVar1 * 4) = param_2;
  iVar1 = iVar1 + 1;
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 == 4) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0x14) < 4) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  return;
}


// =========================================================================
// Function: GpVIVmSCEIsprBHjRlAFDYlQHDtMKbMAjCPbIVQX_tanPB
// Entry: 0x71b0895c | Size: 60 bytes
// =========================================================================

void GpVIVmSCEIsprBHjRlAFDYlQHDtMKbMAjCPbIVQX_tanPB(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_2 + 0x14) != 0) {
    iVar1 = *(int *)(param_2 + 0x10);
    if (*(int *)(param_2 + 0x14) != 4) {
      iVar1 = 0;
    }
    *param_1 = *(undefined4 *)(param_2 + iVar1 * 4);
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


// =========================================================================
// Function: YAtEide_qbobJEresjHymaJJwdYGUiU_wSQERdCvBTaVuQlycVUj_igcYbvGVZBcxRurvxfMsiIEIWoLmdrzmDdwobJA_LHZEJJvPEIztvohtrnPVFQSZLsLRpUpENuls
// Entry: 0x71b089b0 | Size: 148 bytes
// =========================================================================

undefined4 *
YAtEide_qbobJEresjHymaJJwdYGUiU_wSQERdCvBTaVuQlycVUj_igcYbvGVZBcxRurvxfMsiIEIWoLmdrzmDdwobJA_LHZEJJvPEIztvohtrnPVFQSZLsLRpUpENuls
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
// Function: Lz_BEIsgUDSYRUxNlchVJreNIUNajq_mjjcmWQqMkhjyFHkMkFFryHEeMCvSJPJSexS_ZuenmrgXxmTlcYNWSlewTkyQk
// Entry: 0x71b08a48 | Size: 1120 bytes
// =========================================================================

void Lz_BEIsgUDSYRUxNlchVJreNIUNajq_mjjcmWQqMkhjyFHkMkFFryHEeMCvSJPJSexS_ZuenmrgXxmTlcYNWSlewTkyQk
               (int param_1,float *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
               undefined4 param_6)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_fpscr;
  uint uVar4;
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
// Function: pVcOMyRTcNgIUiYTKNy_MEsagFJjWds
// Entry: 0x71b091f0 | Size: 208 bytes
// =========================================================================

int * pVcOMyRTcNgIUiYTKNy_MEsagFJjWds(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = param_2;
  if (param_3 != 0) {
    FUN_71b09b5c(param_1 + 1,param_3);
    iVar5 = param_1[1];
    puVar4 = (undefined *)0x7009a388;
    if (*param_1 != 32000) {
      puVar4 = (undefined *)0x7009a374;
    }
    if (*param_1 == 48000) {
      puVar4 = &DAT_7009a39c;
    }
    if (param_1[2] != iVar5) {
      uVar3 = 0;
      do {
        uVar1 = thunk_MwhHq(0xc);
        thunk_YwSIimNXVVuzKBdYyZXNWenLVbMMAhKrmltSziUpY_pQLrBAdpwRgLfzxyvzAYD(uVar1,puVar4,1);
        iVar2 = *(int *)(iVar5 + uVar3 * 4);
        *(undefined4 *)(iVar5 + uVar3 * 4) = uVar1;
        if (iVar2 != 0) {
          thunk_RIVierVzXcGHSqZfKJmlMXpNFiAuCbUwhkhs();
          thunk_qNQrlu();
        }
        iVar5 = param_1[1];
        uVar3 = uVar3 + 1;
      } while (uVar3 < (uint)(param_1[2] - iVar5 >> 2));
    }
  }
  return param_1;
}


// =========================================================================
// Function: jEsvQuV_ByPW_OpVN_EkuIPeAfvHVW
// Entry: 0x71b092f8 | Size: 104 bytes
// =========================================================================

int jEsvQuV_ByPW_OpVN_EkuIPeAfvHVW(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = *(int **)(param_1 + 4);
  if (piVar3 != (int *)0x0) {
    piVar4 = *(int **)(param_1 + 8);
    piVar2 = piVar3;
    if (piVar4 != piVar3) {
      do {
        piVar4 = piVar4 + -1;
        iVar1 = *piVar4;
        *piVar4 = 0;
        if (iVar1 != 0) {
          thunk_RIVierVzXcGHSqZfKJmlMXpNFiAuCbUwhkhs();
          thunk_qNQrlu();
        }
      } while (piVar4 != piVar3);
      piVar2 = *(int **)(param_1 + 4);
    }
    *(int **)(param_1 + 8) = piVar3;
    thunk_qNQrlu(piVar2);
  }
  return param_1;
}


// =========================================================================
// Function: KbraJSPT_BgITeiJISysPfxoLyCbQ_ozfLCExUaBOSjdTxTenChGAn
// Entry: 0x71b09360 | Size: 184 bytes
// =========================================================================

void KbraJSPT_BgITeiJISysPfxoLyCbQ_ozfLCExUaBOSjdTxTenChGAn(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (param_3 == 0) {
    if (*(int *)(param_2 + 0x1c) != 0) {
      uVar3 = 0;
      do {
        uVar2 = *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x28) + 4) + uVar3 * 4);
        if (*(int *)(param_2 + 0xc) == 0) {
          uVar2 = 0;
        }
        thunk_mhfrXSzXbuJkoUENgisVuEgvLhslpPdXhaMYPxY_atbhZsfxfLceUDgWGCvFzodARRBM
                  (*(undefined4 *)(*(int *)(param_1 + 4) + uVar3 * 4),uVar2);
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_2 + 0x1c));
    }
  }
  else if (*(int *)(param_2 + 0x1c) != 0) {
    uVar3 = 0;
    do {
      iVar1 = *(int *)(param_2 + 0x28);
      if (*(int *)(param_2 + 0x2c) != 0) {
        iVar1 = *(int *)(param_2 + 0x2c);
      }
      uVar2 = *(undefined4 *)(*(int *)(iVar1 + 8) + *(int *)(iVar1 + 0x1c) * uVar3 * 4);
      if (*(int *)(param_2 + 0x24) == 0) {
        uVar2 = 0;
      }
      thunk_mhfrXSzXbuJkoUENgisVuEgvLhslpPdXhaMYPxY_atbhZsfxfLceUDgWGCvFzodARRBM
                (*(undefined4 *)(*(int *)(param_1 + 4) + uVar3 * 4),uVar2);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_2 + 0x1c));
  }
  return;
}


// =========================================================================
// Function: uewvoGyn_IfaxrFyiIrGMVKUqyKpHUAbKYbuDbORuxqCehwIjfSdwe_WdplBwZfkMCGvJ_LNslzlkJooLXNhLmzLXCSu
// Entry: 0x71b09418 | Size: 116 bytes
// =========================================================================

void uewvoGyn_IfaxrFyiIrGMVKUqyKpHUAbKYbuDbORuxqCehwIjfSdwe_WdplBwZfkMCGvJ_LNslzlkJooLXNhLmzLXCSu
               (int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar1 = *param_2;
  if (param_2[1] != iVar1) {
    iVar4 = 0;
    uVar5 = 0;
    do {
      iVar2 = *(int *)(iVar1 + iVar4);
      iVar3 = ((int *)(iVar1 + iVar4))[1];
      iVar1 = 0;
      if (iVar3 != iVar2) {
        iVar1 = iVar2;
      }
      thunk_mhfrXSzXbuJkoUENgisVuEgvLhslpPdXhaMYPxY_atbhZsfxfLceUDgWGCvFzodARRBM
                (*(undefined4 *)(*(int *)(param_1 + 4) + uVar5 * 4),iVar1,iVar3 - iVar2 >> 2);
      iVar1 = *param_2;
      iVar4 = iVar4 + 0xc;
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)((param_2[1] - iVar1 >> 2) * -0x55555555));
  }
  return;
}


// =========================================================================
// Function: MIqbZeauLPxJFISRNg_kUrxVIpgJhMwVhP
// Entry: 0x71b0948c | Size: 60 bytes
// =========================================================================

void MIqbZeauLPxJFISRNg_kUrxVIpgJhMwVhP(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(param_1 + 8) != iVar1) {
    uVar2 = 0;
    do {
      thunk_mIVdKNwIcFoPyZmxiCbLgggNjDDHrlNTwaxrHNDK(*(undefined4 *)(iVar1 + uVar2 * 4));
      iVar1 = *(int *)(param_1 + 4);
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)(*(int *)(param_1 + 8) - iVar1 >> 2));
  }
  return;
}


// =========================================================================
// Function: JBktxKq_pCSOtnMYytUTaBxDXIbMWkSOaJ
// Entry: 0x71b094c8 | Size: 416 bytes
// =========================================================================

void JBktxKq_pCSOtnMYytUTaBxDXIbMWkSOaJ(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  undefined *puVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  
  piVar6 = param_1 + 1;
  piVar12 = (int *)*piVar6;
  piVar9 = (int *)param_1[2];
  uVar4 = (int)piVar9 - (int)piVar12;
  uVar7 = (int)uVar4 >> 2;
  if (uVar7 < param_2) {
    FUN_71b09b5c(piVar6,param_2 - uVar7);
    piVar10 = (int *)param_1[2];
  }
  else {
    piVar10 = piVar9;
    if (param_2 < uVar7) {
      piVar10 = piVar12 + param_2;
      piVar11 = piVar9;
      while (piVar11 != piVar10) {
        piVar11 = piVar11 + -1;
        iVar2 = *piVar11;
        *piVar11 = 0;
        if (iVar2 != 0) {
          thunk_RIVierVzXcGHSqZfKJmlMXpNFiAuCbUwhkhs();
          thunk_qNQrlu();
        }
      }
      param_1[2] = (int)piVar10;
    }
  }
  piVar11 = (int *)*piVar6;
  uVar1 = (int)piVar10 - (int)piVar11;
  if (uVar1 < uVar4) {
    if (piVar10 != piVar11) {
      uVar7 = 0;
      do {
        thunk_mIVdKNwIcFoPyZmxiCbLgggNjDDHrlNTwaxrHNDK(piVar11[uVar7]);
        piVar11 = (int *)param_1[1];
        uVar7 = uVar7 + 1;
      } while (uVar7 < (uint)(param_1[2] - (int)piVar11 >> 2));
    }
  }
  else {
    if (piVar9 != piVar12) {
      uVar1 = uVar7;
      if (uVar7 < 2) {
        uVar1 = 1;
      }
      uVar5 = 0;
      do {
        thunk_mIVdKNwIcFoPyZmxiCbLgggNjDDHrlNTwaxrHNDK(*(undefined4 *)(*piVar6 + uVar5 * 4));
        uVar5 = uVar5 + 1;
      } while (uVar1 != uVar5);
      piVar11 = (int *)param_1[1];
      uVar1 = param_1[2] - (int)piVar11;
    }
    puVar8 = (undefined *)0x7009a388;
    if (*param_1 != 32000) {
      puVar8 = (undefined *)0x7009a374;
    }
    if (*param_1 == 48000) {
      puVar8 = &DAT_7009a39c;
    }
    if (uVar4 < uVar1) {
      do {
        iVar2 = thunk_MwhHq(0xc);
        thunk_YwSIimNXVVuzKBdYyZXNWenLVbMMAhKrmltSziUpY_pQLrBAdpwRgLfzxyvzAYD(iVar2,puVar8,1);
        iVar3 = piVar11[uVar7];
        piVar11[uVar7] = iVar2;
        if (iVar3 != 0) {
          thunk_RIVierVzXcGHSqZfKJmlMXpNFiAuCbUwhkhs();
          thunk_qNQrlu();
        }
        piVar11 = (int *)param_1[1];
        uVar7 = uVar7 + 1;
      } while (uVar7 < (uint)(param_1[2] - (int)piVar11 >> 2));
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71b09b5c
// Entry: 0x71b09b5c | Size: 248 bytes
// =========================================================================

void FUN_71b09b5c(int *param_1,uint param_2)

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
      if (0x3fffffff < uVar5) goto LAB_71b09c50;
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
  FUN_71b09d30(param_1);
LAB_71b09c50:
                    /* WARNING: Subroutine does not return */
  FUN_719fe2ec();
}


// =========================================================================
// Function: FUN_71b09d30
// Entry: 0x71b09d30 | Size: 20 bytes
// =========================================================================

void FUN_71b09d30(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_vector_7006dad5);
}


// =========================================================================
// Function: uNyeJTWoEfWxVakUobYwjgqbKiHVPnwgy
// Entry: 0x71b09d98 | Size: 56 bytes
// =========================================================================

void uNyeJTWoEfWxVakUobYwjgqbKiHVPnwgy(undefined4 *param_1)

{
  param_1[5] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined4 *)((int)param_1 + 0x17) = 0;
  *(undefined4 *)((int)param_1 + 0x1f) = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  param_1[9] = 0x3f800000;
  return;
}


// =========================================================================
// Function: OsicpOARvpIiwXDpafEKjXnYXQXkJqaxdSTYD
// Entry: 0x71b09dd0 | Size: 112 bytes
// =========================================================================

undefined8 * OsicpOARvpIiwXDpafEKjXnYXQXkJqaxdSTYD(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    uVar1 = param_2[5];
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    param_1[5] = uVar1;
    return param_1;
  }
  FUN_712f6d58(param_1 + 5,*(undefined4 *)(param_2 + 6),*(undefined4 *)((int)param_2 + 0x2c));
  return param_1;
}


// =========================================================================
// Function: DFHbibc_frnqdzIVxPUIEmkcdRtTyHk_iPso
// Entry: 0x71b09e40 | Size: 68 bytes
// =========================================================================

void DFHbibc_frnqdzIVxPUIEmkcdRtTyHk_iPso(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  uVar1 = param_2[5];
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  param_1[5] = uVar1;
  *(undefined4 *)(param_2 + 5) = 0;
  *(undefined4 *)((int)param_2 + 0x2c) = 0;
  *(undefined4 *)(param_2 + 6) = 0;
  return;
}


// =========================================================================
// Function: dBeGQJsRUqTBzKJQpAOIkuDPZArNk_kqJsWGR
// Entry: 0x71b09e84 | Size: 64 bytes
// =========================================================================

undefined8 * dBeGQJsRUqTBzKJQpAOIkuDPZArNk_kqJsWGR(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  thunk_lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi
            (param_1 + 5,param_2 + 5);
  return param_1;
}


// =========================================================================
// Function: XWtaT_zMfqxOjyJeCZAUXOpvqadRqAKbGBxafh
// Entry: 0x71b09ec4 | Size: 488 bytes
// =========================================================================

bool XWtaT_zMfqxOjyJeCZAUXOpvqadRqAKbGBxafh(char *param_1,char *param_2)

{
  byte bVar1;
  byte bVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  if (((((((*param_1 != *param_2) || (param_1[1] != param_2[1])) || (param_1[2] != param_2[2])) ||
        ((param_1[3] != param_2[3] || (*(int *)(param_1 + 4) != *(int *)(param_2 + 4))))) ||
       ((param_1[8] != param_2[8] ||
        ((param_1[9] != param_2[9] || (*(int *)(param_1 + 0xc) != *(int *)(param_2 + 0xc))))))) ||
      (param_1[0x10] != param_2[0x10])) ||
     (((((*(int *)(param_1 + 0x14) != *(int *)(param_2 + 0x14) || (param_1[0x18] != param_2[0x18]))
        || (param_1[0x19] != param_2[0x19])) ||
       (((param_1[0x1a] != param_2[0x1a] || (*(int *)(param_1 + 0x1c) != *(int *)(param_2 + 0x1c)))
        || ((param_1[0x20] != param_2[0x20] ||
            ((param_1[0x21] != param_2[0x21] || (param_1[0x22] != param_2[0x22])))))))) ||
      (*(float *)(param_1 + 0x24) != *(float *)(param_2 + 0x24))))) {
    return false;
  }
  bVar1 = param_2[0x28];
  bVar8 = false;
  uVar6 = *(uint *)(param_1 + 0x2c);
  bVar2 = param_1[0x28];
  uVar7 = *(uint *)(param_2 + 0x2c);
  if ((bVar1 & 1) == 0) {
    uVar7 = (uint)(bVar1 >> 1);
  }
  if ((bVar2 & 1) == 0) {
    uVar6 = (uint)(bVar2 >> 1);
  }
  if (uVar6 == uVar7) {
    pcVar5 = *(char **)(param_2 + 0x30);
    if ((bVar1 & 1) == 0) {
      pcVar5 = param_2 + 0x29;
    }
    if ((bVar2 & 1) != 0) {
      iVar4 = imp_memcmp(*(undefined4 *)(param_1 + 0x30));
      return iVar4 == 0;
    }
    bVar8 = true;
    if (1 < bVar2) {
      uVar7 = (uint)(bVar2 >> 1);
      pcVar3 = param_1 + 0x29;
      do {
        uVar7 = uVar7 - 1;
        bVar8 = *pcVar3 == *pcVar5;
        if (*pcVar3 != *pcVar5) {
          return bVar8;
        }
        pcVar3 = pcVar3 + 1;
        pcVar5 = pcVar5 + 1;
      } while (uVar7 != 0);
    }
  }
  return bVar8;
}


// =========================================================================
// Function: dweKWzJgHffIolIwVpNgT_OQMpPie
// Entry: 0x71b0a14c | Size: 4 bytes
// =========================================================================

void dweKWzJgHffIolIwVpNgT_OQMpPie(void)

{
  return;
}


// =========================================================================
// Function: tS_umzWWCiWQRX_wvQPQGsKtMvWrX
// Entry: 0x71b0a150 | Size: 4 bytes
// =========================================================================

void tS_umzWWCiWQRX_wvQPQGsKtMvWrX(void)

{
  return;
}


// =========================================================================
// Function: eMNuufHlDahNVgrWhaNdmMRGLYSOlvLZHl_IPCdcaGwCtpFrOYzORpiDtPHVxZ_jjrtGbB
// Entry: 0x71b0a16c | Size: 380 bytes
// =========================================================================

int eMNuufHlDahNVgrWhaNdmMRGLYSOlvLZHl_IPCdcaGwCtpFrOYzORpiDtPHVxZ_jjrtGbB
              (int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uStack_24;
  
  thunk_wfcNOcgrNgIGqewCuAZnFb_RquURVsFC_NmTWHAzGp();
  thunk_LnOB_mJlQBOTUGvPuUaYTlZSuk_KtqeAmeAKnyHbhyRTYdMeiduM(param_1 + 0x331c,param_2);
  thunk_jlkivfbHsPXtesiTctaiuhasjBpQTPtVczvtiGuftcIaaUVhxMzhzD(param_1 + 0x392c,param_2);
  piVar4 = (int *)(param_1 + 0x55fc);
  *piVar4 = 0;
  uVar1 = param_3 - 1;
  if (param_3 == 0) {
    uVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0x5600) = 0;
  *(undefined4 *)(param_1 + 0x5604) = 0;
  if (1 < param_3) {
    if (0xaaaaaa < uVar1) {
      FUN_71b0d124(piVar4);
      if (*piVar4 != 0) {
        *(int *)(param_1 + 0x5600) = *piVar4;
        thunk_qNQrlu();
      }
                    /* WARNING: Subroutine does not return */
      thunk_NAUpeWJSovvMoxKm_();
    }
    iVar2 = thunk_MwhHq(uVar1 * 0x180);
    *piVar4 = iVar2;
    *(uint *)(param_1 + 0x5604) = iVar2 + uVar1 * 0x180;
    iVar3 = ((uVar1 * 0x180 - 0x180) / 0x180) * 0x180 + 0x180;
    imp___aeabi_memclr4(iVar2,iVar3);
    *(int *)(param_1 + 0x5600) = iVar2 + iVar3;
  }
  uStack_24 = 0;
  FUN_71b0cbe4(param_1 + 0x517c,&uStack_24);
  uStack_24 = 0x3f800000;
  FUN_71b0cd84(param_1 + 0x4f78,&uStack_24);
  uStack_24 = 0;
  FUN_71b0cbe4(param_1 + 0x52fc,&uStack_24);
  uStack_24 = 0;
  FUN_71b0cbe4(param_1 + 0x547c,&uStack_24);
  iVar2 = *piVar4;
  iVar3 = *(int *)(param_1 + 0x5600);
  if (iVar2 != iVar3) {
    do {
      uStack_24 = 0;
      FUN_71b0cbe4(iVar2,&uStack_24);
      iVar2 = iVar2 + 0x180;
    } while (iVar2 != iVar3);
  }
  return param_1;
}


// =========================================================================
// Function: AyUpfSosCGkzwdwRoBQkysLTIzY_MXHCtJEdJvHyhxoFQrn
// Entry: 0x71b0a2f8 | Size: 912 bytes
// =========================================================================

uint * AyUpfSosCGkzwdwRoBQkysLTIzY_MXHCtJEdJvHyhxoFQrn
                 (uint *param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *piStack_50;
  int *piStack_4c;
  int *piStack_44;
  int *piStack_40;
  uint *puStack_3c;
  uint *puStack_34;
  
  uVar4 = *param_2;
  param_1[1] = param_4;
  *param_1 = param_3 / 16000;
  thunk_ztwrHYYRBhSsYQxcAOFtZKdgD_CTMithEqHrAtBXAerWSzVzsIoNRPIDPSsWYad(param_1 + 2,uVar4);
  param_1[5] = 0xffffffff;
  thunk_EP__iWgUhgMc_jexZuhX(param_1 + 6);
  uVar6 = param_1[1];
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  if (uVar6 < 3) {
    uVar1 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uVar2 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uVar3 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar5 = 4;
    param_1[0x10] = 0;
    param_1[0x11] = uVar1;
    param_1[0x12] = uVar2;
    param_1[0x13] = uVar3;
    param_1[0x14] = 0;
    param_1[0x15] = uVar1;
    param_1[0x16] = uVar2;
    param_1[0x17] = uVar3;
    param_1[0x18] = 0;
    param_1[0x19] = uVar1;
    param_1[0x1a] = uVar2;
    param_1[0x1b] = uVar3;
    if (uVar6 == 0) {
      return param_1;
    }
  }
  else {
    if (0x155555 < uVar6) {
      FUN_71b0d18c(param_1 + 0xd);
      if (*piStack_44 == 0) {
        iVar7 = *piStack_40;
      }
      else {
        *piStack_50 = *piStack_44;
        thunk_qNQrlu();
        iVar7 = *piStack_40;
      }
      if (iVar7 != 0) {
        *piStack_4c = iVar7;
        thunk_qNQrlu();
      }
      if (*puStack_3c != 0) {
        param_1[0xe] = *puStack_3c;
        thunk_qNQrlu();
      }
      thunk_XWrDNbPYDETOSCCGKLX_(param_1 + 6);
                    /* WARNING: Subroutine does not return */
      thunk_NAUpeWJSovvMoxKm_();
    }
    uVar5 = thunk_MwhHq(uVar6 * 0xc00);
    param_1[0xd] = uVar5;
    param_1[0xf] = uVar5 + uVar6 * 0xc00;
    iVar7 = ((uVar6 * 0xc00 - 0xc00) / 0xc00) * 0xc00 + 0xc00;
    imp___aeabi_memclr4(uVar5,iVar7);
    param_1[0x10] = 0;
    param_1[0xe] = uVar5 + iVar7;
    param_1[0x12] = 0;
    param_1[0x11] = 0;
    iVar7 = uVar6 * 4;
    uVar5 = thunk_MwhHq(iVar7);
    param_1[0x10] = uVar5;
    param_1[0x12] = uVar5 + uVar6 * 4;
    imp___aeabi_memclr4(uVar5,iVar7);
    param_1[0x13] = 0;
    param_1[0x11] = uVar5 + iVar7;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    uVar5 = thunk_MwhHq(iVar7);
    param_1[0x13] = uVar5;
    param_1[0x15] = uVar5 + uVar6 * 4;
    imp___aeabi_memclr4(uVar5,iVar7);
    param_1[0x16] = 0;
    param_1[0x14] = uVar5 + iVar7;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    uVar5 = thunk_MwhHq(iVar7);
    param_1[0x18] = uVar5 + uVar6 * 4;
    param_1[0x16] = uVar5;
    imp___aeabi_memclr4(uVar5,iVar7);
    param_1[0x19] = 0;
    param_1[0x17] = uVar5 + iVar7;
    param_1[0x1b] = 0;
    param_1[0x1a] = 0;
    uVar5 = uVar6;
  }
  puStack_34 = param_1 + 0x1a;
  iVar7 = uVar6 * 4;
  uVar5 = thunk_MwhHq(iVar7,uVar5);
  param_1[0x1b] = uVar5 + uVar6 * 4;
  param_1[0x19] = uVar5;
  imp___aeabi_memclr4(uVar5,iVar7);
  uVar6 = 0;
  *puStack_34 = uVar5 + iVar7;
  do {
    uVar4 = thunk_MwhHq(0x5608);
    thunk_eMNuufHlDahNVgrWhaNdmMRGLYSOlvLZHl_IPCdcaGwCtpFrOYzORpiDtPHVxZ_jjrtGbB
              (uVar4,param_1 + 2,*param_1);
    uVar5 = param_1[0x19];
    iVar7 = *(int *)(uVar5 + uVar6 * 4);
    *(undefined4 *)(uVar5 + uVar6 * 4) = uVar4;
    if (iVar7 != 0) {
      if (*(int *)(iVar7 + 0x55fc) != 0) {
        *(int *)(iVar7 + 0x5600) = *(int *)(iVar7 + 0x55fc);
        thunk_qNQrlu();
      }
      thunk_qNQrlu(iVar7);
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < param_1[1]);
  return param_1;
}


// =========================================================================
// Function: aexLQerrLCZBrky_kMYrrNpthPSfCXHIOgEmfYAxfrrRFVThfZGpOsmmZLHuDbwiTBRhyjpR_ucjag
// Entry: 0x71b0a704 | Size: 1176 bytes
// =========================================================================

void aexLQerrLCZBrky_kMYrrNpthPSfCXHIOgEmfYAxfrrRFVThfZGpOsmmZLHuDbwiTBRhyjpR_ucjag
               (int param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  int iVar3;
  undefined1 (*pauVar4) [16];
  uint uVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  uint uVar10;
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  float fVar15;
  undefined1 auVar14 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  imp___aeabi_memmove4(param_2,**(int **)(param_1 + 100) + 0x3728,0x204);
  uVar5 = *(uint *)(param_1 + 4);
  if (1 < uVar5) {
    pauVar2 = param_2 + 0x1f;
    iVar3 = *(int *)(param_1 + 100);
    pauVar11 = param_2 + 5;
    pauVar13 = param_2 + 4;
    pauVar4 = param_2 + 1;
    uVar10 = 1;
    do {
      iVar6 = *(int *)(iVar3 + uVar10 * 4);
      pauVar12 = (undefined1 (*) [16])(iVar6 + 0x3728);
      if (((undefined1 (*) [16])(iVar6 + 0x392c) <= param_2) ||
         (iVar7 = 0, (undefined1 (*) [16])(param_2[0x20] + 4) <= pauVar12)) {
        auVar20 = FloatVectorCompareGreaterThan(*param_2,*pauVar12,2);
        auVar19 = *(undefined1 (*) [16])(iVar6 + 0x3738);
        auVar1 = *(undefined1 (*) [16])(iVar6 + 0x3748);
        auVar21 = *(undefined1 (*) [16])(iVar6 + 0x3748);
        auVar18 = VectorBitwiseInsertIfFalse(*pauVar12,*param_2,auVar20);
        auVar20 = *(undefined1 (*) [16])(iVar6 + 0x3758);
        *(longlong *)*param_2 = auVar18._0_8_;
        *(longlong *)(*param_2 + 8) = auVar18._8_8_;
        auVar17 = FloatVectorCompareGreaterThan(*pauVar13,*(undefined1 (*) [16])(iVar6 + 0x3768),2);
        auVar18 = param_2[2];
        auVar22 = FloatVectorCompareGreaterThan(auVar18,auVar21,2);
        auVar21 = param_2[3];
        auVar14 = FloatVectorCompareGreaterThan(auVar21,auVar20,2);
        auVar16 = FloatVectorCompareGreaterThan(*pauVar4,auVar19,2);
        auVar22 = VectorBitwiseInsertIfTrue(auVar18,auVar1,auVar22);
        auVar16 = VectorBitwiseInsertIfFalse(auVar19,*pauVar4,auVar16);
        auVar1 = *pauVar11;
        auVar18 = *pauVar11;
        auVar20 = VectorBitwiseInsertIfFalse(auVar20,auVar21,auVar14);
        auVar21 = VectorBitwiseSelect(auVar17,*(undefined1 (*) [16])(iVar6 + 0x3768),*pauVar13);
        *(longlong *)param_2[2] = auVar22._0_8_;
        *(longlong *)(param_2[2] + 8) = auVar22._8_8_;
        auVar19 = *(undefined1 (*) [16])(iVar6 + 0x3778);
        *(longlong *)param_2[3] = auVar20._0_8_;
        *(longlong *)(param_2[3] + 8) = auVar20._8_8_;
        auVar20 = FloatVectorCompareGreaterThan(auVar18,auVar19,2);
        *(longlong *)*pauVar13 = auVar21._0_8_;
        *(longlong *)(param_2[4] + 8) = auVar21._8_8_;
        *(longlong *)*pauVar4 = auVar16._0_8_;
        *(longlong *)(param_2[1] + 8) = auVar16._8_8_;
        auVar19 = VectorBitwiseInsertIfFalse(auVar19,auVar1,auVar20);
        *(longlong *)*pauVar11 = auVar19._0_8_;
        *(longlong *)(param_2[5] + 8) = auVar19._8_8_;
        auVar19 = param_2[6];
        auVar20 = FloatVectorCompareGreaterThan(auVar19,*(undefined1 (*) [16])(iVar6 + 0x3788),2);
        auVar20 = VectorBitwiseInsertIfFalse(*(undefined1 (*) [16])(iVar6 + 0x3788),auVar19,auVar20)
        ;
        auVar19 = param_2[7];
        *(longlong *)param_2[6] = auVar20._0_8_;
        *(longlong *)(param_2[6] + 8) = auVar20._8_8_;
        auVar20 = FloatVectorCompareGreaterThan(auVar19,*(undefined1 (*) [16])(iVar6 + 0x3798),2);
        auVar20 = VectorBitwiseInsertIfFalse(*(undefined1 (*) [16])(iVar6 + 0x3798),auVar19,auVar20)
        ;
        auVar19 = param_2[8];
        *(longlong *)param_2[7] = auVar20._0_8_;
        *(longlong *)(param_2[7] + 8) = auVar20._8_8_;
        auVar20 = FloatVectorCompareGreaterThan(auVar19,*(undefined1 (*) [16])(iVar6 + 0x37a8),2);
        auVar20 = VectorBitwiseInsertIfFalse(*(undefined1 (*) [16])(iVar6 + 0x37a8),auVar19,auVar20)
        ;
        auVar19 = param_2[9];
        *(longlong *)param_2[8] = auVar20._0_8_;
        *(longlong *)(param_2[8] + 8) = auVar20._8_8_;
        auVar20 = FloatVectorCompareGreaterThan(auVar19,*(undefined1 (*) [16])(iVar6 + 0x37b8),2);
        auVar20 = VectorBitwiseInsertIfFalse(*(undefined1 (*) [16])(iVar6 + 0x37b8),auVar19,auVar20)
        ;
        auVar19 = param_2[10];
        *(longlong *)param_2[9] = auVar20._0_8_;
        *(longlong *)(param_2[9] + 8) = auVar20._8_8_;
        auVar20 = FloatVectorCompareGreaterThan(auVar19,*(undefined1 (*) [16])(iVar6 + 0x37c8),2);
        auVar20 = VectorBitwiseInsertIfFalse(*(undefined1 (*) [16])(iVar6 + 0x37c8),auVar19,auVar20)
        ;
        auVar19 = param_2[0xb];
        *(longlong *)param_2[10] = auVar20._0_8_;
        *(longlong *)(param_2[10] + 8) = auVar20._8_8_;
        auVar20 = FloatVectorCompareGreaterThan(auVar19,*(undefined1 (*) [16])(iVar6 + 0x37d8),2);
        auVar20 = VectorBitwiseInsertIfFalse(*(undefined1 (*) [16])(iVar6 + 0x37d8),auVar19,auVar20)
        ;
        auVar19 = param_2[0xc];
        *(longlong *)param_2[0xb] = auVar20._0_8_;
        *(longlong *)(param_2[0xb] + 8) = auVar20._8_8_;
        auVar20 = FloatVectorCompareGreaterThan(auVar19,*(undefined1 (*) [16])(iVar6 + 0x37e8),2);
        auVar20 = VectorBitwiseInsertIfFalse(*(undefined1 (*) [16])(iVar6 + 0x37e8),auVar19,auVar20)
        ;
        auVar19 = param_2[0xd];
        *(longlong *)param_2[0xc] = auVar20._0_8_;
        *(longlong *)(param_2[0xc] + 8) = auVar20._8_8_;
        auVar20 = FloatVectorCompareGreaterThan(auVar19,*(undefined1 (*) [16])(iVar6 + 0x37f8),2);
        auVar20 = VectorBitwiseInsertIfFalse(*(undefined1 (*) [16])(iVar6 + 0x37f8),auVar19,auVar20)
        ;
        auVar19 = param_2[0xe];
        *(longlong *)param_2[0xd] = auVar20._0_8_;
        *(longlong *)(param_2[0xd] + 8) = auVar20._8_8_;
        auVar20 = FloatVectorCompareGreaterThan(auVar19,*(undefined1 (*) [16])(iVar6 + 0x3808),2);
        auVar20 = VectorBitwiseInsertIfFalse(*(undefined1 (*) [16])(iVar6 + 0x3808),auVar19,auVar20)
        ;
        auVar19 = param_2[0xf];
        *(longlong *)param_2[0xe] = auVar20._0_8_;
        *(longlong *)(param_2[0xe] + 8) = auVar20._8_8_;
        auVar20 = FloatVectorCompareGreaterThan(auVar19,*(undefined1 (*) [16])(iVar6 + 0x3818),2);
        auVar20 = VectorBitwiseInsertIfFalse(*(undefined1 (*) [16])(iVar6 + 0x3818),auVar19,auVar20)
        ;
        auVar19 = param_2[0x10];
        *(longlong *)param_2[0xf] = auVar20._0_8_;
        *(longlong *)(param_2[0xf] + 8) = auVar20._8_8_;
        auVar20 = FloatVectorCompareGreaterThan(auVar19,*(undefined1 (*) [16])(iVar6 + 0x3828),2);
        auVar20 = VectorBitwiseInsertIfFalse(*(undefined1 (*) [16])(iVar6 + 0x3828),auVar19,auVar20)
        ;
        auVar19 = param_2[0x11];
        *(longlong *)param_2[0x10] = auVar20._0_8_;
        *(longlong *)(param_2[0x10] + 8) = auVar20._8_8_;
        auVar20 = FloatVectorCompareGreaterThan(auVar19,*(undefined1 (*) [16])(iVar6 + 0x3838),2);
        auVar20 = VectorBitwiseInsertIfFalse(*(undefined1 (*) [16])(iVar6 + 0x3838),auVar19,auVar20)
        ;
        auVar19 = param_2[0x12];
        *(longlong *)param_2[0x11] = auVar20._0_8_;
        *(longlong *)(param_2[0x11] + 8) = auVar20._8_8_;
        auVar20 = FloatVectorCompareGreaterThan(auVar19,*(undefined1 (*) [16])(iVar6 + 0x3848),2);
        auVar20 = VectorBitwiseInsertIfFalse(*(undefined1 (*) [16])(iVar6 + 0x3848),auVar19,auVar20)
        ;
        auVar19 = param_2[0x13];
        *(longlong *)param_2[0x12] = auVar20._0_8_;
        *(longlong *)(param_2[0x12] + 8) = auVar20._8_8_;
        auVar20 = FloatVectorCompareGreaterThan(auVar19,*(undefined1 (*) [16])(iVar6 + 0x3858),2);
        auVar20 = VectorBitwiseInsertIfFalse(*(undefined1 (*) [16])(iVar6 + 0x3858),auVar19,auVar20)
        ;
        auVar19 = param_2[0x14];
        *(longlong *)param_2[0x13] = auVar20._0_8_;
        *(longlong *)(param_2[0x13] + 8) = auVar20._8_8_;
        auVar20 = FloatVectorCompareGreaterThan(auVar19,*(undefined1 (*) [16])(iVar6 + 0x3868),2);
        auVar20 = VectorBitwiseInsertIfFalse(*(undefined1 (*) [16])(iVar6 + 0x3868),auVar19,auVar20)
        ;
        auVar19 = param_2[0x15];
        *(longlong *)param_2[0x14] = auVar20._0_8_;
        *(longlong *)(param_2[0x14] + 8) = auVar20._8_8_;
        auVar20 = FloatVectorCompareGreaterThan(auVar19,*(undefined1 (*) [16])(iVar6 + 0x3878),2);
        auVar20 = VectorBitwiseInsertIfFalse(*(undefined1 (*) [16])(iVar6 + 0x3878),auVar19,auVar20)
        ;
        auVar19 = param_2[0x16];
        *(longlong *)param_2[0x15] = auVar20._0_8_;
        *(longlong *)(param_2[0x15] + 8) = auVar20._8_8_;
        auVar20 = FloatVectorCompareGreaterThan(auVar19,*(undefined1 (*) [16])(iVar6 + 0x3888),2);
        auVar20 = VectorBitwiseInsertIfFalse(*(undefined1 (*) [16])(iVar6 + 0x3888),auVar19,auVar20)
        ;
        auVar19 = param_2[0x17];
        *(longlong *)param_2[0x16] = auVar20._0_8_;
        *(longlong *)(param_2[0x16] + 8) = auVar20._8_8_;
        auVar20 = FloatVectorCompareGreaterThan(auVar19,*(undefined1 (*) [16])(iVar6 + 0x3898),2);
        auVar20 = VectorBitwiseInsertIfFalse(*(undefined1 (*) [16])(iVar6 + 0x3898),auVar19,auVar20)
        ;
        auVar19 = param_2[0x18];
        *(longlong *)param_2[0x17] = auVar20._0_8_;
        *(longlong *)(param_2[0x17] + 8) = auVar20._8_8_;
        auVar20 = FloatVectorCompareGreaterThan(auVar19,*(undefined1 (*) [16])(iVar6 + 0x38a8),2);
        auVar20 = VectorBitwiseInsertIfFalse(*(undefined1 (*) [16])(iVar6 + 0x38a8),auVar19,auVar20)
        ;
        auVar19 = param_2[0x19];
        *(longlong *)param_2[0x18] = auVar20._0_8_;
        *(longlong *)(param_2[0x18] + 8) = auVar20._8_8_;
        auVar20 = FloatVectorCompareGreaterThan(auVar19,*(undefined1 (*) [16])(iVar6 + 0x38b8),2);
        auVar20 = VectorBitwiseInsertIfFalse(*(undefined1 (*) [16])(iVar6 + 0x38b8),auVar19,auVar20)
        ;
        auVar19 = param_2[0x1a];
        *(longlong *)param_2[0x19] = auVar20._0_8_;
        *(longlong *)(param_2[0x19] + 8) = auVar20._8_8_;
        auVar20 = FloatVectorCompareGreaterThan(auVar19,*(undefined1 (*) [16])(iVar6 + 0x38c8),2);
        auVar20 = VectorBitwiseInsertIfFalse(*(undefined1 (*) [16])(iVar6 + 0x38c8),auVar19,auVar20)
        ;
        auVar19 = param_2[0x1b];
        *(longlong *)param_2[0x1a] = auVar20._0_8_;
        *(longlong *)(param_2[0x1a] + 8) = auVar20._8_8_;
        auVar20 = FloatVectorCompareGreaterThan(auVar19,*(undefined1 (*) [16])(iVar6 + 0x38d8),2);
        auVar20 = VectorBitwiseInsertIfFalse(*(undefined1 (*) [16])(iVar6 + 0x38d8),auVar19,auVar20)
        ;
        auVar19 = param_2[0x1c];
        *(longlong *)param_2[0x1b] = auVar20._0_8_;
        *(longlong *)(param_2[0x1b] + 8) = auVar20._8_8_;
        auVar20 = FloatVectorCompareGreaterThan(auVar19,*(undefined1 (*) [16])(iVar6 + 0x38e8),2);
        auVar20 = VectorBitwiseInsertIfFalse(*(undefined1 (*) [16])(iVar6 + 0x38e8),auVar19,auVar20)
        ;
        auVar19 = param_2[0x1d];
        *(longlong *)param_2[0x1c] = auVar20._0_8_;
        *(longlong *)(param_2[0x1c] + 8) = auVar20._8_8_;
        auVar20 = FloatVectorCompareGreaterThan(auVar19,*(undefined1 (*) [16])(iVar6 + 0x38f8),2);
        auVar20 = VectorBitwiseInsertIfFalse(*(undefined1 (*) [16])(iVar6 + 0x38f8),auVar19,auVar20)
        ;
        auVar19 = param_2[0x1e];
        *(longlong *)param_2[0x1d] = auVar20._0_8_;
        *(longlong *)(param_2[0x1d] + 8) = auVar20._8_8_;
        auVar20 = FloatVectorCompareGreaterThan(auVar19,*(undefined1 (*) [16])(iVar6 + 0x3908),2);
        auVar19 = VectorBitwiseInsertIfFalse(*(undefined1 (*) [16])(iVar6 + 0x3908),auVar19,auVar20)
        ;
        auVar20 = FloatVectorCompareGreaterThan(*pauVar2,*(undefined1 (*) [16])(iVar6 + 0x3918),2);
        auVar20 = VectorBitwiseSelect(auVar20,*(undefined1 (*) [16])(iVar6 + 0x3918),*pauVar2);
        *(longlong *)param_2[0x1e] = auVar19._0_8_;
        *(longlong *)(param_2[0x1e] + 8) = auVar19._8_8_;
        *(longlong *)*pauVar2 = auVar20._0_8_;
        *(longlong *)(param_2[0x1f] + 8) = auVar20._8_8_;
        iVar7 = 0x80;
      }
      iVar7 = iVar7 << 2;
      do {
        pfVar8 = (float *)(*pauVar12 + iVar7);
        pfVar9 = (float *)(*param_2 + iVar7);
        iVar7 = iVar7 + 4;
        fVar15 = *pfVar9;
        if (*pfVar8 < fVar15) {
          fVar15 = *pfVar8;
        }
        *pfVar9 = fVar15;
      } while (iVar7 != 0x204);
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar5);
  }
  return;
}


// =========================================================================
// Function: hWiBsfQtrMPakukwkSWrImcAYEcTrTugSTNPq__z_oDakIDAUyMjiAE
// Entry: 0x71b0ab9c | Size: 1100 bytes
// =========================================================================

void hWiBsfQtrMPakukwkSWrImcAYEcTrTugSTNPq__z_oDakIDAUyMjiAE(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  uint uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float afStack_1280 [129];
  float afStack_107c [129];
  float afStack_e78 [130];
  float afStack_c70 [256];
  float afStack_870 [256];
  float afStack_470 [96];
  undefined1 auStack_2f0 [256];
  undefined1 auStack_1f0 [4];
  float afStack_1ec [97];
  
  if (*(int *)(param_1 + 4) != 0) {
    uVar7 = 0;
    do {
      thunk_AReXourBM_XYVgzqubGFourXCuJ_yczZZwrEDGrdQjICg
                (*(int *)(*(int *)(param_1 + 100) + uVar7 * 4) + 0x392c);
      uVar1 = *(uint *)(param_1 + 4);
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar1);
    if (uVar1 != 0) {
      uVar7 = 0;
      iVar3 = *(int *)(param_2 + 0x28);
      if (*(int *)(param_2 + 0x2c) != 0) {
        iVar3 = *(int *)(param_2 + 0x2c);
      }
      do {
        iVar4 = 0;
        fVar10 = 0.0;
        do {
          pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 100) + uVar7 * 4) + 0x517c + iVar4);
          iVar4 = iVar4 + 4;
          fVar14 = *pfVar6;
          fVar10 = fVar10 + fVar14 * fVar14;
        } while (iVar4 != 0x180);
        iVar4 = 0;
        do {
          pfVar6 = (float *)(*(int *)(*(int *)(iVar3 + 8) + *(int *)(iVar3 + 0x1c) * uVar7 * 4) +
                            iVar4);
          iVar4 = iVar4 + 4;
          fVar14 = *pfVar6;
          fVar10 = fVar10 + fVar14 * fVar14;
        } while (iVar4 != 0x280);
        if (0.0 < fVar10) {
          uVar7 = 0;
          fVar10 = 0.0;
          iVar3 = *(int *)(param_1 + 0x14) + 1;
          if (*(int *)(param_1 + 0x14) < -1) {
            iVar3 = 0;
          }
          *(int *)(param_1 + 0x14) = iVar3;
          do {
            iVar3 = *(int *)(param_2 + 0x28);
            if (*(int *)(param_2 + 0x2c) != 0) {
              iVar3 = *(int *)(param_2 + 0x2c);
            }
            iVar4 = *(int *)(param_1 + 100);
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 8) + *(int *)(iVar3 + 0x1c) * uVar7 * 4);
            iVar3 = *(int *)(iVar4 + uVar7 * 4) + 0x517c;
            imp___aeabi_memcpy4(afStack_470,iVar3,0x180);
            imp___aeabi_memmove4(auStack_2f0,uVar2,0x280);
            imp___aeabi_memcpy4(iVar3,auStack_1f0,0x180);
            iVar3 = 0;
            do {
              pfVar6 = (float *)((int)afStack_470 + iVar3);
              pfVar5 = (float *)((int)&DAT_7009a3b0 + iVar3);
              iVar3 = iVar3 + 4;
              *pfVar6 = *pfVar5 * *pfVar6;
            } while (iVar3 != 0x180);
            pfVar6 = (float *)&DAT_7009a52c;
            iVar3 = 0x284;
            do {
              pfVar5 = (float *)((int)afStack_470 + iVar3);
              fVar14 = *pfVar6;
              iVar3 = iVar3 + 4;
              pfVar6 = pfVar6 + -1;
              *pfVar5 = fVar14 * *pfVar5;
            } while (iVar3 != 0x400);
            thunk_joFYTptSwXFIYmwIozhlyTvymbDVdbyWpebBxnDwOzfzYllNaiSv
                      (param_1 + 0x18,afStack_470,afStack_870,afStack_c70);
            iVar3 = 4;
            afStack_e78[0] = ABS(afStack_870[0]) + 1.0;
            afStack_e78[0x80] = ABS(afStack_870[0x80]) + 1.0;
            do {
              fVar14 = *(float *)((int)afStack_c70 + iVar3);
              fVar11 = *(float *)((int)afStack_870 + iVar3);
              fVar14 = (float)thunk_CtFkdMPUq__nQWblLGweEClPTortNiChXic
                                        (fVar14 * fVar14 + fVar11 * fVar11);
              pfVar6 = (float *)((int)afStack_e78 + iVar3);
              iVar3 = iVar3 + 4;
              *pfVar6 = fVar14 + 1.0;
            } while (iVar3 != 0x200);
            iVar3 = 0;
            fVar14 = fVar10;
            do {
              fVar11 = *(float *)((int)afStack_c70 + iVar3);
              pfVar6 = (float *)((int)afStack_870 + iVar3);
              iVar3 = iVar3 + 4;
              fVar12 = *pfVar6;
              fVar14 = fVar14 + fVar11 * fVar11 + fVar12 * fVar12;
            } while (iVar3 != 0x204);
            iVar3 = 0;
            fVar11 = fVar10;
            do {
              pfVar6 = (float *)((int)afStack_e78 + iVar3);
              iVar3 = iVar3 + 4;
              fVar11 = fVar11 + *pfVar6;
            } while (iVar3 != 0x204);
            thunk_CIlEldrzVFzjGB_S_TNXSBzaGhLdITwZnflZbQYJTtnNJTbQtlbpPoydtenwNrExr
                      (*(int *)(iVar4 + uVar7 * 4) + 0x392c,*(undefined4 *)(param_1 + 0x14),
                       afStack_e78,fVar11);
            iVar3 = *(int *)(iVar4 + uVar7 * 4);
            iVar8 = 0;
            do {
              pfVar6 = (float *)(iVar3 + 0x3728 + iVar8);
              fVar9 = *pfVar6;
              fVar13 = pfVar6[0x85];
              fVar15 = *(float *)(iVar3 + 0x4f78 + iVar8);
              fVar16 = *(float *)(iVar3 + 0x3f48 + iVar8);
              fVar17 = *(float *)((int)afStack_e78 + iVar8);
              fVar12 = fVar10;
              if (fVar16 < fVar17) {
                fVar12 = fVar17 / (fVar16 + 0.0001) + -1.0;
              }
              *(float *)((int)afStack_107c + iVar8) = fVar12;
              pfVar6 = (float *)((int)afStack_1280 + iVar8);
              iVar8 = iVar8 + 4;
              *pfVar6 = fVar12 * 0.01999998 + fVar9 * (fVar15 / (fVar13 + 0.0001)) * 0.98;
            } while (iVar8 != 0x204);
            iVar3 = *(int *)(iVar4 + uVar7 * 4);
            thunk_kvXmTOCTNcSgsLBouwBjjAOMjOjaiwDpcnfCpOWKrZLriRnlESzomieskilsXn_iDtFnrbbbcgEYxYqfvEsM
                      (iVar3,*(undefined4 *)(param_1 + 0x14),afStack_1280,afStack_107c,
                       iVar3 + 0x3b40,afStack_e78,fVar11,fVar14 / 129.0);
            iVar3 = *(int *)(iVar4 + uVar7 * 4);
            thunk_gYItlcIKHqxeoASFRqYguSAHVVaneXvWTSeRBlVrDkOjNatyqImjESUBAaHFiutlfTmBmyBVuWvHiToXSWg
                      (iVar3 + 0x392c,iVar3 + 0x3118,0x81,afStack_e78);
            imp___aeabi_memcpy4(*(int *)(iVar4 + uVar7 * 4) + 0x4f78,afStack_e78,0x204);
            uVar7 = uVar7 + 1;
          } while (uVar7 < *(uint *)(param_1 + 4));
          return;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar1);
    }
  }
  return;
}


// =========================================================================
// Function: CjOeUBVxGvxTwqiPbplgpFjGsEMkGmUPoxaSidGcrVFddIInvZqjVG
// Entry: 0x71b0b004 | Size: 5156 bytes
// =========================================================================

void CjOeUBVxGvxTwqiPbplgpFjGsEMkGmUPoxaSidGcrVFddIInvZqjVG(uint *param_1,int param_2)

{
  undefined1 auVar1 [16];
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
  int iVar21;
  float *pfVar22;
  undefined4 *puVar23;
  float *pfVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  undefined4 uVar29;
  int *piVar30;
  uint uVar31;
  undefined1 *puVar32;
  undefined1 *puVar33;
  uint uVar34;
  float *pfVar35;
  undefined4 *puVar36;
  uint uVar37;
  undefined1 *puVar38;
  bool bVar39;
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
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 extraout_var [12];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 extraout_var_00 [12];
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
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
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
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 extraout_var_01 [12];
  undefined1 auVar125 [16];
  undefined1 auVar129 [12];
  undefined1 auVar126 [16];
  undefined1 extraout_var_02 [12];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  float fVar135;
  undefined1 extraout_var_03 [12];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  float fVar136;
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  float fVar141;
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 in_q4 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 in_q5 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 in_q6 [16];
  undefined1 auVar149 [16];
  float fVar151;
  undefined1 auVar150 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  float *pfStack_1f34;
  float *pfStack_1f30;
  undefined4 uStack_1e60;
  undefined4 uStack_1e5c;
  undefined4 uStack_1e58;
  undefined4 uStack_1e54;
  undefined4 uStack_1e50;
  undefined4 uStack_1e4c;
  undefined4 uStack_1e48;
  undefined4 uStack_1e44;
  undefined4 uStack_1e40;
  undefined4 uStack_1e3c;
  undefined4 uStack_1e38;
  undefined4 uStack_1e34;
  undefined4 uStack_1e30;
  undefined4 uStack_1e2c;
  undefined4 uStack_1e28;
  undefined4 uStack_1e24;
  undefined4 uStack_1e20;
  undefined4 uStack_1e1c;
  undefined4 uStack_1e18;
  undefined4 uStack_1e14;
  undefined4 uStack_1e10;
  undefined4 uStack_1e0c;
  undefined4 uStack_1e08;
  undefined4 uStack_1e04;
  undefined4 uStack_1e00;
  undefined4 uStack_1dfc;
  undefined4 uStack_1df8;
  undefined4 uStack_1df4;
  undefined4 uStack_1df0;
  undefined4 uStack_1dec;
  undefined4 uStack_1de8;
  undefined4 uStack_1de4;
  undefined4 uStack_1de0;
  undefined4 uStack_1ddc;
  undefined4 uStack_1dd8;
  undefined4 uStack_1dd4;
  undefined4 uStack_1dd0;
  undefined4 uStack_1dcc;
  undefined4 uStack_1dc8;
  undefined4 uStack_1dc4;
  undefined4 uStack_1dc0;
  undefined4 uStack_1dbc;
  undefined4 uStack_1db8;
  undefined4 uStack_1db4;
  undefined4 uStack_1db0;
  undefined4 uStack_1dac;
  undefined4 uStack_1da8;
  undefined4 uStack_1da4;
  undefined4 uStack_1da0;
  undefined4 uStack_1d9c;
  undefined4 uStack_1d98;
  undefined4 uStack_1d94;
  undefined4 uStack_1d90;
  undefined4 uStack_1d8c;
  undefined4 uStack_1d88;
  undefined4 uStack_1d84;
  undefined4 uStack_1d80;
  undefined4 uStack_1d7c;
  undefined4 uStack_1d78;
  undefined4 uStack_1d74;
  undefined4 uStack_1d70;
  undefined4 uStack_1d6c;
  undefined4 uStack_1d68;
  undefined4 uStack_1d64;
  undefined4 uStack_1d60;
  undefined4 uStack_1d5c;
  undefined4 uStack_1d58;
  undefined4 uStack_1d54;
  undefined1 *puStack_1d44;
  undefined4 uStack_1d40;
  undefined4 uStack_1d3c;
  undefined4 uStack_1d38;
  undefined4 uStack_1d34;
  float *pfStack_1d30;
  undefined4 uStack_1d2c;
  undefined4 uStack_1d28;
  undefined4 uStack_1d24;
  undefined4 uStack_1d20;
  undefined4 uStack_1d1c;
  undefined4 uStack_1d18;
  undefined4 uStack_1d14;
  float afStack_1d08 [96];
  undefined1 auStack_1b88 [128];
  float afStack_1b08 [32];
  undefined4 uStack_1a88;
  undefined4 uStack_1a84;
  undefined4 uStack_1a80;
  undefined4 uStack_1a7c;
  undefined4 uStack_1a78;
  undefined4 uStack_1a74;
  undefined4 uStack_1a70;
  undefined4 uStack_1a6c;
  undefined4 uStack_1a68;
  undefined4 uStack_1a64;
  undefined4 uStack_1a60;
  undefined4 uStack_1a5c;
  undefined4 uStack_1a58;
  undefined4 uStack_1a54;
  undefined4 uStack_1a50;
  undefined4 uStack_1a4c;
  undefined8 uStack_1a48;
  undefined8 uStack_1a40;
  undefined8 uStack_1a38;
  undefined8 uStack_1a30;
  undefined4 uStack_1a28;
  undefined4 uStack_1a24;
  undefined4 uStack_1a20;
  undefined4 uStack_1a1c;
  undefined8 uStack_1a18;
  undefined8 uStack_1a10;
  undefined8 uStack_1a08;
  undefined8 uStack_1a00;
  undefined8 uStack_19f8;
  undefined8 uStack_19f0;
  undefined8 uStack_19e8;
  undefined8 uStack_19e0;
  undefined8 uStack_19d8;
  undefined8 uStack_19d0;
  undefined8 uStack_19c8;
  undefined8 uStack_19c0;
  undefined8 uStack_19b8;
  undefined8 uStack_19b0;
  undefined4 uStack_19a8;
  undefined4 uStack_19a4;
  undefined4 uStack_19a0;
  undefined4 uStack_199c;
  undefined4 uStack_1998;
  undefined4 uStack_1994;
  undefined4 uStack_1990;
  undefined4 uStack_198c;
  undefined8 uStack_1988;
  undefined8 uStack_1980;
  undefined8 uStack_1978;
  undefined8 uStack_1970;
  undefined4 uStack_1968;
  undefined4 uStack_1964;
  undefined4 uStack_1960;
  undefined4 uStack_195c;
  undefined8 uStack_1958;
  undefined8 uStack_1950;
  undefined4 uStack_1948;
  undefined4 uStack_1944;
  undefined4 uStack_1940;
  undefined4 uStack_193c;
  undefined4 uStack_1938;
  undefined4 uStack_1934;
  undefined4 uStack_1930;
  undefined4 uStack_192c;
  undefined4 uStack_1928;
  undefined4 uStack_1924;
  undefined4 uStack_1920;
  undefined4 uStack_191c;
  undefined4 uStack_1918;
  undefined4 uStack_1914;
  undefined4 uStack_1910;
  undefined4 uStack_190c;
  undefined4 uStack_1908;
  undefined4 uStack_1904;
  undefined4 uStack_1900;
  undefined4 uStack_18fc;
  undefined4 uStack_18f8;
  undefined4 uStack_18f4;
  undefined4 uStack_18f0;
  undefined4 uStack_18ec;
  undefined4 uStack_18e8;
  undefined4 uStack_18e4;
  undefined4 uStack_18e0;
  undefined4 uStack_18dc;
  undefined4 uStack_18d8;
  undefined4 uStack_18d4;
  undefined4 uStack_18d0;
  undefined4 uStack_18cc;
  undefined4 uStack_18c8;
  undefined4 uStack_18c4;
  undefined4 uStack_18c0;
  undefined4 uStack_18bc;
  undefined4 uStack_18b8;
  undefined4 uStack_18b4;
  undefined4 uStack_18b0;
  undefined4 uStack_18ac;
  undefined4 uStack_18a8;
  undefined4 uStack_18a4;
  undefined4 uStack_18a0;
  undefined4 uStack_189c;
  undefined4 uStack_1898;
  undefined4 uStack_1894;
  undefined4 uStack_1890;
  undefined4 uStack_188c;
  float fStack_1888;
  float afStack_1880 [2];
  undefined1 auStack_1878 [8];
  float afStack_1870 [2];
  undefined1 auStack_1868 [6144];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  auVar155._0_8_ = in_q4._0_8_;
  uStack_60 = in_q4._8_8_;
  uStack_58 = in_q5._0_8_;
  uStack_50 = in_q5._8_8_;
  uStack_48 = in_q6._0_8_;
  uStack_40 = in_q6._8_8_;
  uStack_68 = auVar155._0_8_;
  if (param_1[1] < 3) {
    if (param_1[1] != 0) {
      pfStack_1f34 = afStack_1880;
      puStack_1d44 = auStack_1878;
      puVar32 = auStack_1868;
      pfStack_1f30 = afStack_1870;
      goto LAB_71b0b084;
    }
    if ((char)param_1[0xc] == '\0') {
      return;
    }
    imp___aeabi_memcpy4(&uStack_1a88,*(int *)param_1[0x19] + 0x3728,0x204);
    pfStack_1f30 = (float *)0x0;
LAB_71b0c1fc:
    uVar25 = 0;
    uVar34 = *param_1;
  }
  else {
    pfStack_1f30 = (float *)param_1[0x10];
    puStack_1d44 = (undefined1 *)param_1[0x13];
    pfStack_1f34 = (float *)param_1[0x16];
    puVar32 = (undefined1 *)param_1[0xd];
LAB_71b0b084:
    auVar155._12_4_ = in_q4._12_4_;
    auVar155._8_4_ = 0x3f800000;
    puVar38 = puVar32 + 0x800;
    pfStack_1d30 = (float *)(puVar32 + 0xa84);
    uVar34 = 0;
    auVar133._12_4_ = 0;
    auVar133._0_12_ = auVar155._4_12_;
    auVar145 = auVar133 << 0x20;
    puVar33 = puVar32;
    do {
      iVar21 = *(int *)(param_2 + 0x28);
      if (*(int *)(param_2 + 0x2c) != 0) {
        iVar21 = *(int *)(param_2 + 0x2c);
      }
      iVar26 = *(int *)(param_1[0x19] + uVar34 * 4) + 0x52fc;
      uVar29 = *(undefined4 *)(*(int *)(iVar21 + 8) + *(int *)(iVar21 + 0x1c) * uVar34 * 4);
      pfVar35 = (float *)(puVar32 + uVar34 * 0xc00);
      imp___aeabi_memmove4(pfVar35 + 0x200,iVar26,0x180);
      imp___aeabi_memmove4(pfVar35 + 0x260,uVar29,0x280);
      imp___aeabi_memmove4(iVar26,pfVar35 + 0x2a0,0x180);
      iVar21 = 0;
      do {
        pfVar22 = (float *)(puVar38 + iVar21);
        pfVar24 = (float *)((int)&DAT_7009a3b0 + iVar21);
        iVar21 = iVar21 + 4;
        *pfVar22 = *pfVar24 * *pfVar22;
      } while (iVar21 != 0x180);
      iVar21 = 0x17c;
      pfVar22 = pfStack_1d30;
      do {
        pfVar24 = (float *)((int)&DAT_7009a3b0 + iVar21);
        iVar21 = iVar21 + -4;
        *pfVar22 = *pfVar24 * *pfVar22;
        pfVar22 = pfVar22 + 1;
      } while (iVar21 != 0);
      iVar21 = 0;
      fVar40 = 0.0;
      do {
        pfVar22 = (float *)(puVar38 + iVar21);
        iVar21 = iVar21 + 4;
        fVar40 = fVar40 + *pfVar22 * *pfVar22;
      } while (iVar21 != 0x400);
      *(float *)(puStack_1d44 + uVar34 * 4) = fVar40;
      thunk_joFYTptSwXFIYmwIozhlyTvymbDVdbyWpebBxnDwOzfzYllNaiSv
                (param_1 + 6,pfVar35 + 0x200,pfVar35,pfVar35 + 0x100);
      afStack_1d08[0] = ABS(*pfVar35) + auVar145._8_4_;
      afStack_1b08[0] = ABS(pfVar35[0x80]) + auVar145._8_4_;
      iVar21 = -0x1fc;
      do {
        fVar40 = (float)thunk_CtFkdMPUq__nQWblLGweEClPTortNiChXic
                                  (*(float *)(puVar33 + iVar21 + 0x600) *
                                   *(float *)(puVar33 + iVar21 + 0x600) +
                                   *(float *)(puVar33 + iVar21 + 0x200) *
                                   *(float *)(puVar33 + iVar21 + 0x200));
        iVar26 = iVar21 + 4;
        *(float *)((int)afStack_1b08 + iVar21) = fVar40 + auVar145._8_4_;
        iVar21 = iVar26;
      } while (iVar26 != 0);
      iVar21 = *(int *)(param_1[0x19] + uVar34 * 4);
      thunk_rnoOryioIowYBvrIgEQJNhFWuMBjsvsVnsgoAWZbikwDbtCaRAMM_dPVuyCqvugfxQcF
                (iVar21 + 0x331c,param_1[5],iVar21 + 0x3f48,iVar21 + 0x393c,iVar21 + 0x3d44,
                 afStack_1d08);
      if (1 < *param_1) {
        fVar141 = 0.0;
        iVar21 = *(int *)(param_1[0x19] + uVar34 * 4);
        auVar144._8_8_ = auVar145._8_8_;
        auVar144._0_4_ = auVar145._0_4_;
        auVar144._4_4_ = *(undefined4 *)(iVar21 + 0x38b0);
        fVar40 = *(float *)(iVar21 + 0x3924);
        auVar129._4_8_ = extraout_var_03._4_8_;
        auVar129._0_4_ = *(undefined4 *)(iVar21 + 0x32e0);
        auVar130._0_12_ = auVar129 << 0x20;
        fVar41 = *(float *)(iVar21 + 0x3920);
        auVar130._12_4_ = *(undefined4 *)(iVar21 + 0x32e4);
        fVar42 = *(float *)(iVar21 + 0x391c);
        fVar43 = *(float *)(iVar21 + 0x3918);
        fVar44 = *(float *)(iVar21 + 0x3914);
        fVar45 = *(float *)(iVar21 + 0x3910);
        fVar46 = *(float *)(iVar21 + 0x390c);
        auVar147._12_4_ = *(float *)(iVar21 + 0x32b8);
        fVar47 = *(float *)(iVar21 + 0x3908);
        fVar48 = *(float *)(iVar21 + 0x3904);
        fVar49 = *(float *)(iVar21 + 0x3900);
        fVar50 = *(float *)(iVar21 + 0x38fc);
        auVar64._0_4_ = *(float *)(iVar21 + 0x38f8);
        auVar64._4_12_ = extraout_var;
        auVar65._12_4_ = extraout_var._8_4_;
        auVar65._0_8_ = auVar64._0_8_;
        auVar65._8_4_ = *(undefined4 *)(iVar21 + 0x32d0);
        auVar153._4_12_ = auVar65._4_12_;
        fVar51 = *(float *)(iVar21 + 0x38f4);
        auVar131._4_12_ = auVar130._4_12_;
        auVar131._0_4_ = *(undefined4 *)(iVar21 + 0x32d4);
        fVar52 = *(float *)(iVar21 + 0x38f0);
        fVar53 = *(float *)(iVar21 + 0x38ec);
        fVar54 = *(float *)(iVar21 + 0x38e8);
        fVar55 = *(float *)(iVar21 + 0x38e4);
        fVar56 = *(float *)(iVar21 + 0x38e0);
        fVar57 = *(float *)(iVar21 + 0x38dc);
        fVar58 = *(float *)(iVar21 + 0x38d8);
        auVar147._0_4_ = *(float *)(iVar21 + 0x32ac);
        fVar59 = *(float *)(iVar21 + 0x38d4);
        fVar60 = *(float *)(iVar21 + 0x38d0);
        auVar147._4_4_ = *(undefined4 *)(iVar21 + 0x38a8);
        auVar62._0_4_ = (float)param_1[3];
        auVar132._0_8_ = auVar131._0_8_;
        fVar135 = *(float *)(iVar21 + 0x38cc);
        fVar136 = *(float *)(iVar21 + 0x38c8);
        fVar137 = *(float *)(iVar21 + 0x38c4);
        fVar138 = *(float *)(iVar21 + 0x38c0);
        fVar139 = *(float *)(iVar21 + 0x38bc);
        fVar140 = *(float *)(iVar21 + 0x38b8);
        auVar132._8_4_ = 0.0;
        auVar132._12_4_ = (float)auVar130._12_4_;
        fVar151 = *(float *)(iVar21 + 0x38b4);
        auVar145._0_12_ = auVar144._0_12_;
        auVar145._12_4_ = *(undefined4 *)(iVar21 + 0x38ac);
        iVar26 = 0;
        auVar153._0_4_ = *(undefined4 *)(iVar21 + 0x32cc);
        do {
          auVar133 = auVar132;
          auVar155 = auVar153;
          auVar66._8_8_ = auVar155._8_8_;
          auVar66._0_4_ = auVar155._0_4_;
          auVar66._4_4_ = *(float *)((int)afStack_1d08 + iVar26);
          pfVar35 = (float *)(iVar21 + 0x4f78 + iVar26);
          iVar26 = iVar26 + 4;
          auVar153._0_12_ = auVar66._0_12_;
          auVar153._12_4_ = *pfVar35;
          auVar132._12_4_ = auVar133._12_4_;
          auVar132._0_8_ = auVar133._0_8_;
          auVar132._8_4_ = auVar133._8_4_ + auVar66._4_4_;
          fVar141 = fVar141 + auVar153._12_4_;
        } while (iVar26 != 0x204);
        auVar147._8_4_ = 0x3d000000;
        auVar148._4_12_ = auVar147._4_12_;
        auVar148._0_4_ =
             (*(float *)(iVar21 + 0x3298) + auVar144._0_4_ + *(float *)(iVar21 + 0x329c) +
              *(float *)(iVar21 + 0x32a0) + *(float *)(iVar21 + 0x32a4) +
              *(float *)(iVar21 + 0x32a8) + auVar147._0_4_ + *(float *)(iVar21 + 0x32b0) +
              *(float *)(iVar21 + 0x32b4) + auVar147._12_4_ + *(float *)(iVar21 + 0x32bc) +
              *(float *)(iVar21 + 0x32c0) + *(float *)(iVar21 + 0x32c4) + *(float *)(iVar21 + 13000)
              + auVar66._0_4_ + auVar155._8_4_ + auVar133._0_4_ + *(float *)(iVar21 + 0x32d8) +
              *(float *)(iVar21 + 0x32dc) + auVar133._4_4_ + auVar132._12_4_ +
              *(float *)(iVar21 + 0x32e8) + *(float *)(iVar21 + 0x32ec) +
              *(float *)(iVar21 + 0x32f0) + *(float *)(iVar21 + 0x32f4) +
              *(float *)(iVar21 + 0x32f8) + *(float *)(iVar21 + 0x32fc) +
              *(float *)(iVar21 + 0x3300) + *(float *)(iVar21 + 0x3304) +
              *(float *)(iVar21 + 0x3308) + *(float *)(iVar21 + 0x330c) +
              *(float *)(iVar21 + 0x3310) + *(float *)(iVar21 + 0x3314)) * 0.03125 *
             (auVar132._8_4_ / fVar141);
        fVar141 = (float)imp_tanhf(auVar148._0_4_ + auVar148._0_4_ + -1.0);
        auVar67._0_4_ = auVar148._4_4_ + auVar145._0_4_;
        auVar67._4_12_ = extraout_var_00;
        auVar63._12_4_ = extraout_var_00._8_4_;
        auVar68._0_8_ = auVar67._0_8_;
        auVar68._8_4_ = fVar140;
        auVar68._12_4_ = auVar63._12_4_;
        auVar69._4_12_ = auVar68._4_12_;
        auVar69._0_4_ = auVar67._0_4_ + auVar145._12_4_ + auVar145._4_4_ + fVar151 + fVar140;
        auVar70._0_8_ = auVar69._0_8_;
        auVar70._8_4_ = fVar139;
        auVar70._12_4_ = auVar63._12_4_;
        auVar71._4_12_ = auVar70._4_12_;
        auVar71._0_4_ = auVar69._0_4_ + fVar139;
        auVar72._0_8_ = auVar71._0_8_;
        auVar72._8_4_ = fVar138;
        auVar72._12_4_ = auVar63._12_4_;
        auVar73._4_12_ = auVar72._4_12_;
        auVar73._0_4_ = auVar71._0_4_ + fVar138;
        auVar74._0_8_ = auVar73._0_8_;
        auVar74._8_4_ = fVar137;
        auVar74._12_4_ = auVar63._12_4_;
        auVar75._4_12_ = auVar74._4_12_;
        auVar75._0_4_ = auVar73._0_4_ + fVar137;
        auVar76._0_8_ = auVar75._0_8_;
        auVar76._8_4_ = fVar136;
        auVar76._12_4_ = auVar63._12_4_;
        auVar77._4_12_ = auVar76._4_12_;
        auVar77._0_4_ = auVar75._0_4_ + fVar136;
        auVar78._0_8_ = auVar77._0_8_;
        auVar78._8_4_ = fVar135;
        auVar78._12_4_ = auVar63._12_4_;
        auVar79._4_12_ = auVar78._4_12_;
        auVar79._0_4_ = auVar77._0_4_ + fVar135;
        auVar80._0_8_ = auVar79._0_8_;
        auVar80._8_4_ = fVar60;
        auVar80._12_4_ = auVar63._12_4_;
        auVar81._4_12_ = auVar80._4_12_;
        auVar81._0_4_ = auVar79._0_4_ + fVar60;
        auVar82._0_8_ = auVar81._0_8_;
        auVar82._8_4_ = fVar59;
        auVar82._12_4_ = auVar63._12_4_;
        auVar83._4_12_ = auVar82._4_12_;
        auVar83._0_4_ = auVar81._0_4_ + fVar59;
        auVar84._0_8_ = auVar83._0_8_;
        auVar84._8_4_ = fVar58;
        auVar84._12_4_ = auVar63._12_4_;
        auVar85._4_12_ = auVar84._4_12_;
        auVar85._0_4_ = auVar83._0_4_ + fVar58;
        auVar86._0_8_ = auVar85._0_8_;
        auVar86._8_4_ = fVar57;
        auVar86._12_4_ = auVar63._12_4_;
        auVar87._4_12_ = auVar86._4_12_;
        auVar87._0_4_ = auVar85._0_4_ + fVar57;
        auVar88._0_8_ = auVar87._0_8_;
        auVar88._8_4_ = fVar56;
        auVar88._12_4_ = auVar63._12_4_;
        auVar89._4_12_ = auVar88._4_12_;
        auVar89._0_4_ = auVar87._0_4_ + fVar56;
        auVar90._0_8_ = auVar89._0_8_;
        auVar90._8_4_ = fVar55;
        auVar90._12_4_ = auVar63._12_4_;
        auVar91._4_12_ = auVar90._4_12_;
        auVar91._0_4_ = auVar89._0_4_ + fVar55;
        auVar92._0_8_ = auVar91._0_8_;
        auVar92._8_4_ = fVar54;
        auVar92._12_4_ = auVar63._12_4_;
        auVar93._4_12_ = auVar92._4_12_;
        auVar93._0_4_ = auVar91._0_4_ + fVar54;
        auVar94._0_8_ = auVar93._0_8_;
        auVar94._8_4_ = fVar53;
        auVar94._12_4_ = auVar63._12_4_;
        auVar95._4_12_ = auVar94._4_12_;
        auVar95._0_4_ = auVar93._0_4_ + fVar53;
        auVar96._0_8_ = auVar95._0_8_;
        auVar96._8_4_ = fVar52;
        auVar96._12_4_ = auVar63._12_4_;
        auVar97._4_12_ = auVar96._4_12_;
        auVar97._0_4_ = auVar95._0_4_ + fVar52;
        auVar98._0_8_ = auVar97._0_8_;
        auVar98._8_4_ = fVar51;
        auVar98._12_4_ = auVar63._12_4_;
        auVar99._4_12_ = auVar98._4_12_;
        auVar99._0_4_ = auVar97._0_4_ + fVar51;
        auVar100._0_8_ = auVar99._0_8_;
        auVar100._8_4_ = auVar64._0_4_;
        auVar100._12_4_ = auVar63._12_4_;
        auVar101._4_12_ = auVar100._4_12_;
        auVar101._0_4_ = auVar99._0_4_ + auVar64._0_4_;
        auVar102._0_8_ = auVar101._0_8_;
        auVar102._8_4_ = fVar50;
        auVar102._12_4_ = auVar63._12_4_;
        auVar103._4_12_ = auVar102._4_12_;
        auVar103._0_4_ = auVar101._0_4_ + fVar50;
        auVar104._0_8_ = auVar103._0_8_;
        auVar104._8_4_ = fVar49;
        auVar104._12_4_ = auVar63._12_4_;
        auVar105._4_12_ = auVar104._4_12_;
        auVar105._0_4_ = auVar103._0_4_ + fVar49;
        auVar106._0_8_ = auVar105._0_8_;
        auVar106._8_4_ = fVar48;
        auVar106._12_4_ = auVar63._12_4_;
        auVar107._4_12_ = auVar106._4_12_;
        auVar107._0_4_ = auVar105._0_4_ + fVar48;
        auVar108._0_8_ = auVar107._0_8_;
        auVar108._8_4_ = fVar47;
        auVar108._12_4_ = auVar63._12_4_;
        auVar109._4_12_ = auVar108._4_12_;
        auVar109._0_4_ = auVar107._0_4_ + fVar47;
        auVar110._0_8_ = auVar109._0_8_;
        auVar110._8_4_ = fVar46;
        auVar110._12_4_ = auVar63._12_4_;
        auVar111._4_12_ = auVar110._4_12_;
        auVar111._0_4_ = auVar109._0_4_ + fVar46;
        auVar112._0_8_ = auVar111._0_8_;
        auVar112._8_4_ = fVar45;
        auVar112._12_4_ = auVar63._12_4_;
        auVar113._4_12_ = auVar112._4_12_;
        auVar113._0_4_ = auVar111._0_4_ + fVar45;
        auVar114._0_8_ = auVar113._0_8_;
        auVar114._8_4_ = fVar44;
        auVar114._12_4_ = auVar63._12_4_;
        auVar115._4_12_ = auVar114._4_12_;
        auVar115._0_4_ = auVar113._0_4_ + fVar44;
        auVar116._0_8_ = auVar115._0_8_;
        auVar116._8_4_ = fVar43;
        auVar116._12_4_ = auVar63._12_4_;
        auVar117._4_12_ = auVar116._4_12_;
        auVar117._0_4_ = auVar115._0_4_ + fVar43;
        auVar118._0_8_ = auVar117._0_8_;
        auVar118._8_4_ = fVar42;
        auVar118._12_4_ = auVar63._12_4_;
        auVar119._4_12_ = auVar118._4_12_;
        auVar119._0_4_ = auVar117._0_4_ + fVar42;
        auVar120._0_8_ = auVar119._0_8_;
        auVar120._8_4_ = fVar41;
        auVar120._12_4_ = auVar63._12_4_;
        auVar121._4_12_ = auVar120._4_12_;
        auVar121._0_4_ = auVar119._0_4_ + fVar41;
        auVar122._0_8_ = auVar121._0_8_;
        fVar42 = auVar145._8_4_;
        auVar122._8_4_ = fVar141 + fVar42;
        auVar122._12_4_ = auVar63._12_4_;
        auVar123._4_12_ = auVar122._4_12_;
        fVar41 = 0.5;
        auVar123._0_4_ = (auVar121._0_4_ + fVar40) * auVar148._8_4_;
        auVar124._0_8_ = auVar123._0_8_;
        auVar124._8_4_ = auVar122._8_4_ * 0.5;
        auVar124._12_4_ = auVar63._12_4_;
        fVar40 = 0.5;
        auVar61._4_12_ = auVar124._4_12_;
        if (0.5 <= auVar148._0_4_) {
          fVar40 = 0.75;
          fVar41 = 0.25;
        }
        auVar61._0_4_ = auVar123._0_4_ * fVar40 + auVar124._8_4_ * fVar41;
        auVar63._0_8_ = auVar61._0_8_;
        auVar63._8_4_ = auVar62._0_4_;
        if (auVar61._0_4_ < auVar62._0_4_) {
          auVar62._4_12_ = auVar63._4_12_;
          auVar63 = auVar62;
        }
        if (fVar42 < auVar63._0_4_) {
          auVar63._0_4_ = fVar42;
        }
        pfStack_1f30[uVar34] = auVar63._0_4_;
      }
      uVar25 = param_1[1];
      uVar34 = uVar34 + 1;
      puVar33 = puVar33 + 0xc00;
      puVar38 = puVar38 + 0xc00;
      pfStack_1d30 = pfStack_1d30 + 0x300;
    } while (uVar34 < uVar25);
    if ((char)param_1[0xc] == '\0') {
      return;
    }
    piVar30 = (int *)param_1[0x19];
    puVar23 = (undefined4 *)(*piVar30 + 0x3728);
    if (uVar25 == 1) {
      uVar25 = 1;
      puVar36 = puVar23;
LAB_71b0bed4:
      uVar34 = 0;
      puVar33 = puVar32;
      do {
        iVar21 = 0;
        do {
          pfVar35 = (float *)(puVar33 + iVar21);
          pfVar22 = (float *)((int)puVar36 + iVar21);
          iVar21 = iVar21 + 4;
          *pfVar35 = *pfVar22 * *pfVar35;
          pfVar35[0x100] = *pfVar22 * pfVar35[0x100];
        } while (iVar21 != 0x204);
        uVar34 = uVar34 + 1;
        puVar33 = puVar33 + 0xc00;
      } while (uVar34 != uVar25);
      uVar34 = 0;
      puVar33 = puVar32;
      do {
        thunk_sXGpypvxixdQqZGLFHnhSs_guvnyvjlAHqBYLktUjxQ_eyHNQGJIoUvwiwAZhsWONNFsK
                  (param_1 + 6,puVar33,0x100,puVar33 + 0x400,0x100,puVar33 + 0x800,0x100);
        uVar34 = uVar34 + 1;
        puVar33 = puVar33 + 0xc00;
      } while (uVar34 < param_1[1]);
      if (param_1[1] != 0) {
        pfVar35 = (float *)(puVar32 + 0xa84);
        puVar33 = puVar32 + 0x800;
        auVar146._12_4_ = 0;
        auVar146._0_12_ = auVar145._4_12_;
        auVar146 = auVar146 << 0x20;
        uVar34 = 0;
        auVar129 = extraout_var_01;
        do {
          auVar125._4_12_ = auVar129;
          auVar125._0_4_ = (float)auVar146._0_4_;
          iVar21 = 0;
          do {
            pfVar22 = (float *)(puVar33 + iVar21);
            iVar21 = iVar21 + 4;
            auVar126._12_4_ = auVar125._12_4_;
            auVar126._0_8_ = auVar125._0_8_;
            auVar126._8_4_ = *pfVar22;
            fVar40 = auVar125._0_4_;
            auVar125._4_12_ = auVar126._4_12_;
            auVar125._0_4_ = fVar40 + auVar126._8_4_ * auVar126._8_4_;
          } while (iVar21 != 0x400);
          iVar21 = 0;
          do {
            pfVar22 = (float *)(puVar33 + iVar21);
            pfVar24 = (float *)((int)&DAT_7009a3b0 + iVar21);
            iVar21 = iVar21 + 4;
            auVar125._8_4_ = *pfVar24 * *pfVar22;
            *pfVar22 = auVar125._8_4_;
          } while (iVar21 != 0x180);
          iVar21 = 0x17c;
          pfVar22 = pfVar35;
          do {
            auVar155 = auVar125;
            pfVar24 = (float *)((int)&DAT_7009a3b0 + iVar21);
            auVar125._12_4_ = auVar155._12_4_;
            auVar125._0_8_ = auVar155._0_8_;
            iVar21 = iVar21 + -4;
            auVar125._8_4_ = *pfVar24 * *pfVar22;
            *pfVar22 = auVar125._8_4_;
            pfVar22 = pfVar22 + 1;
          } while (iVar21 != 0);
          iVar21 = *(int *)(param_1[0x19] + uVar34 * 4);
          fVar40 = (float)thunk_ulihJQtFaRuCYSYjALwwFUgIKGYQqcUmOMjzIfbFWLuVVGBRa_CsNlAZpdg
                                    (iVar21 + 0x331c,param_1[5],*(undefined4 *)(iVar21 + 0x3114),
                                     *(undefined4 *)(puStack_1d44 + uVar34 * 4),auVar155._0_4_);
          pfVar35 = pfVar35 + 0x300;
          puVar33 = puVar33 + 0xc00;
          pfStack_1f34[uVar34] = fVar40;
          uVar34 = uVar34 + 1;
          uVar25 = param_1[1];
          auVar129 = extraout_var_02;
        } while (uVar34 < uVar25);
        auVar127._0_4_ = *pfStack_1f34;
        auVar127._4_12_ = extraout_var_02;
        if (uVar25 < 2) {
          bVar39 = uVar25 == 0;
          uVar25 = 1;
          if (bVar39) goto LAB_71b0c1fc;
        }
        else {
          iVar21 = uVar25 - 1;
          do {
            pfStack_1f34 = pfStack_1f34 + 1;
            auVar128._12_4_ = auVar127._12_4_;
            auVar128._0_8_ = auVar127._0_8_;
            auVar128._8_4_ = *pfStack_1f34;
            fVar40 = auVar127._0_4_;
            auVar127 = auVar128;
            if (auVar128._8_4_ < fVar40) {
              auVar127._4_12_ = auVar128._4_12_;
              auVar127._0_4_ = auVar128._8_4_;
            }
            iVar21 = iVar21 + -1;
          } while (iVar21 != 0);
        }
        uVar34 = 0;
        puVar33 = puVar32 + 0x800;
        do {
          iVar21 = 0;
          do {
            pfVar35 = (float *)(puVar33 + iVar21);
            iVar21 = iVar21 + 4;
            auVar127._8_4_ = auVar127._0_4_ * *pfVar35;
            *pfVar35 = auVar127._8_4_;
          } while (iVar21 != 0x400);
          uVar34 = uVar34 + 1;
          puVar33 = puVar33 + 0xc00;
        } while (uVar34 != uVar25);
        uVar34 = 0;
        puVar33 = puVar32 + 0x800;
        do {
          iVar21 = *(int *)(param_2 + 0x28);
          if (*(int *)(param_2 + 0x2c) != 0) {
            iVar21 = *(int *)(param_2 + 0x2c);
          }
          iVar27 = *(int *)(param_1[0x19] + uVar34 * 4) + 0x547c;
          iVar21 = *(int *)(*(int *)(iVar21 + 8) + *(int *)(iVar21 + 0x1c) * uVar34 * 4);
          iVar26 = 0;
          do {
            pfVar35 = (float *)(puVar33 + iVar26);
            pfVar22 = (float *)(iVar27 + iVar26);
            pfVar24 = (float *)(iVar21 + iVar26);
            iVar26 = iVar26 + 4;
            *pfVar24 = *pfVar22 + *pfVar35;
          } while (iVar26 != 0x180);
          imp___aeabi_memmove4(iVar21 + 0x180,puVar32 + uVar34 * 0xc00 + 0x980,0x100);
          imp___aeabi_memmove4(iVar27,puVar32 + uVar34 * 0xc00 + 0xa80,0x180);
          puVar33 = puVar33 + 0xc00;
          uVar34 = uVar34 + 1;
          uVar25 = param_1[1];
        } while (uVar34 < uVar25);
        uVar34 = *param_1;
        goto joined_r0x71b0c0a4;
      }
    }
    else {
      puVar36 = &uStack_1a88;
      imp___aeabi_memcpy4(puVar36,puVar23,0x204);
      if (uVar25 != 0) {
        uStack_1d20 = uStack_1a78;
        uStack_1d1c = uStack_1a74;
        uStack_1d18 = uStack_1a70;
        uStack_1d14 = uStack_1a6c;
        uStack_1d70 = uStack_1a68;
        uStack_1d6c = uStack_1a64;
        uStack_1d68 = uStack_1a60;
        uStack_1d64 = uStack_1a5c;
        uStack_1d80 = uStack_1a58;
        uStack_1d7c = uStack_1a54;
        uStack_1d78 = uStack_1a50;
        uStack_1d74 = uStack_1a4c;
        auVar154._8_8_ = uStack_1a40;
        auVar154._0_8_ = uStack_1a48;
        auVar142._8_8_ = uStack_1a30;
        auVar142._0_8_ = uStack_1a38;
        uStack_1d40 = uStack_1a88;
        uStack_1d3c = uStack_1a84;
        uStack_1d38 = uStack_1a80;
        uStack_1d34 = uStack_1a7c;
        uStack_1da0 = uStack_1a28;
        uStack_1d9c = uStack_1a24;
        uStack_1d98 = uStack_1a20;
        uStack_1d94 = uStack_1a1c;
        auVar157._8_8_ = uStack_1a10;
        auVar157._0_8_ = uStack_1a18;
        auVar156._8_8_ = uStack_1a00;
        auVar156._0_8_ = uStack_1a08;
        auVar158._8_8_ = uStack_19f0;
        auVar158._0_8_ = uStack_19f8;
        auVar149._8_8_ = uStack_19e0;
        auVar149._0_8_ = uStack_19e8;
        auVar159._8_8_ = uStack_19d0;
        auVar159._0_8_ = uStack_19d8;
        uVar34 = 1;
        auVar152._8_8_ = uStack_19c0;
        auVar152._0_8_ = uStack_19c8;
        auVar150._8_8_ = uStack_19b0;
        auVar150._0_8_ = uStack_19b8;
        pfStack_1d30 = (float *)uStack_19a8;
        uStack_1d2c = uStack_19a4;
        uStack_1d28 = uStack_19a0;
        uStack_1d24 = uStack_199c;
        uStack_1d60 = uStack_1998;
        uStack_1d5c = uStack_1994;
        uStack_1d58 = uStack_1990;
        uStack_1d54 = uStack_198c;
        auVar143._8_8_ = uStack_1980;
        auVar143._0_8_ = uStack_1988;
        auVar145._8_8_ = uStack_1970;
        auVar145._0_8_ = uStack_1978;
        uStack_1dc0 = uStack_1968;
        uStack_1dbc = uStack_1964;
        uStack_1db8 = uStack_1960;
        uStack_1db4 = uStack_195c;
        auVar134._8_8_ = uStack_1950;
        auVar134._0_8_ = uStack_1958;
        uStack_1db0 = uStack_1948;
        uStack_1dac = uStack_1944;
        uStack_1da8 = uStack_1940;
        uStack_1da4 = uStack_193c;
        uStack_1d90 = uStack_1938;
        uStack_1d8c = uStack_1934;
        uStack_1d88 = uStack_1930;
        uStack_1d84 = uStack_192c;
        uStack_1dd0 = uStack_1928;
        uStack_1dcc = uStack_1924;
        uStack_1dc8 = uStack_1920;
        uStack_1dc4 = uStack_191c;
        uStack_1de0 = uStack_1918;
        uStack_1ddc = uStack_1914;
        uStack_1dd8 = uStack_1910;
        uStack_1dd4 = uStack_190c;
        uStack_1df0 = uStack_1908;
        uStack_1dec = uStack_1904;
        uStack_1de8 = uStack_1900;
        uStack_1de4 = uStack_18fc;
        uStack_1e00 = uStack_18f8;
        uStack_1dfc = uStack_18f4;
        uStack_1df8 = uStack_18f0;
        uStack_1df4 = uStack_18ec;
        uStack_1e10 = uStack_18e8;
        uStack_1e0c = uStack_18e4;
        uStack_1e08 = uStack_18e0;
        uStack_1e04 = uStack_18dc;
        uStack_1e20 = uStack_18d8;
        uStack_1e1c = uStack_18d4;
        uStack_1e18 = uStack_18d0;
        uStack_1e14 = uStack_18cc;
        uStack_1e30 = uStack_18c8;
        uStack_1e2c = uStack_18c4;
        uStack_1e28 = uStack_18c0;
        uStack_1e24 = uStack_18bc;
        uStack_1e40 = uStack_18b8;
        uStack_1e3c = uStack_18b4;
        uStack_1e38 = uStack_18b0;
        uStack_1e34 = uStack_18ac;
        uStack_1e60 = uStack_18a8;
        uStack_1e5c = uStack_18a4;
        uStack_1e58 = uStack_18a0;
        uStack_1e54 = uStack_189c;
        uStack_1e50 = uStack_1898;
        uStack_1e4c = uStack_1894;
        uStack_1e48 = uStack_1890;
        uStack_1e44 = uStack_188c;
        do {
          iVar21 = piVar30[uVar34];
          uVar34 = uVar34 + 1;
          auVar18._4_4_ = uStack_1d3c;
          auVar18._0_4_ = uStack_1d40;
          auVar18._8_4_ = uStack_1d38;
          auVar18._12_4_ = uStack_1d34;
          auVar155 = FloatVectorCompareGreaterThan
                               (auVar18,*(undefined1 (*) [16])(iVar21 + 0x3728),2);
          auVar155 = VectorBitwiseInsertIfTrue
                               (auVar18,*(undefined1 (*) [16])(iVar21 + 0x3728),auVar155);
          uStack_1d40 = auVar155._0_4_;
          uStack_1d3c = auVar155._4_4_;
          uStack_1d38 = auVar155._8_4_;
          uStack_1d34 = auVar155._12_4_;
          auVar13._4_4_ = uStack_1d9c;
          auVar13._0_4_ = uStack_1da0;
          auVar13._8_4_ = uStack_1d98;
          auVar13._12_4_ = uStack_1d94;
          auVar155 = FloatVectorCompareGreaterThan
                               (auVar13,*(undefined1 (*) [16])(iVar21 + 0x3788),2);
          auVar20._4_4_ = uStack_1d1c;
          auVar20._0_4_ = uStack_1d20;
          auVar20._8_4_ = uStack_1d18;
          auVar20._12_4_ = uStack_1d14;
          auVar133 = FloatVectorCompareGreaterThan
                               (auVar20,*(undefined1 (*) [16])(iVar21 + 0x3738),2);
          auVar133 = VectorBitwiseInsertIfTrue
                               (auVar20,*(undefined1 (*) [16])(iVar21 + 0x3738),auVar133);
          uStack_1d20 = auVar133._0_4_;
          uStack_1d1c = auVar133._4_4_;
          uStack_1d18 = auVar133._8_4_;
          uStack_1d14 = auVar133._12_4_;
          auVar15._4_4_ = uStack_1d7c;
          auVar15._0_4_ = uStack_1d80;
          auVar15._8_4_ = uStack_1d78;
          auVar15._12_4_ = uStack_1d74;
          auVar16._4_4_ = uStack_1d6c;
          auVar16._0_4_ = uStack_1d70;
          auVar16._8_4_ = uStack_1d68;
          auVar16._12_4_ = uStack_1d64;
          auVar133 = FloatVectorCompareGreaterThan
                               (auVar16,*(undefined1 (*) [16])(iVar21 + 0x3748),2);
          auVar133 = VectorBitwiseInsertIfTrue
                               (auVar16,*(undefined1 (*) [16])(iVar21 + 0x3748),auVar133);
          auVar153 = FloatVectorCompareGreaterThan
                               (auVar15,*(undefined1 (*) [16])(iVar21 + 0x3758),2);
          uStack_1d70 = auVar133._0_4_;
          uStack_1d6c = auVar133._4_4_;
          uStack_1d68 = auVar133._8_4_;
          uStack_1d64 = auVar133._12_4_;
          auVar133 = VectorBitwiseInsertIfTrue
                               (auVar15,*(undefined1 (*) [16])(iVar21 + 0x3758),auVar153);
          uStack_1d80 = auVar133._0_4_;
          uStack_1d7c = auVar133._4_4_;
          uStack_1d78 = auVar133._8_4_;
          uStack_1d74 = auVar133._12_4_;
          auVar133 = FloatVectorCompareGreaterThan
                               (auVar154,*(undefined1 (*) [16])(iVar21 + 0x3768),2);
          auVar154 = VectorBitwiseInsertIfTrue
                               (auVar154,*(undefined1 (*) [16])(iVar21 + 0x3768),auVar133);
          auVar133 = FloatVectorCompareGreaterThan
                               (auVar142,*(undefined1 (*) [16])(iVar21 + 0x3778),2);
          auVar142 = VectorBitwiseInsertIfTrue
                               (auVar142,*(undefined1 (*) [16])(iVar21 + 0x3778),auVar133);
          auVar133 = FloatVectorCompareGreaterThan
                               (auVar157,*(undefined1 (*) [16])(iVar21 + 0x3798),2);
          auVar155 = VectorBitwiseInsertIfTrue
                               (auVar13,*(undefined1 (*) [16])(iVar21 + 0x3788),auVar155);
          uStack_1da0 = auVar155._0_4_;
          uStack_1d9c = auVar155._4_4_;
          uStack_1d98 = auVar155._8_4_;
          uStack_1d94 = auVar155._12_4_;
          auVar157 = VectorBitwiseInsertIfTrue
                               (auVar157,*(undefined1 (*) [16])(iVar21 + 0x3798),auVar133);
          auVar155 = FloatVectorCompareGreaterThan
                               (auVar156,*(undefined1 (*) [16])(iVar21 + 0x37a8),2);
          auVar156 = VectorBitwiseInsertIfTrue
                               (auVar156,*(undefined1 (*) [16])(iVar21 + 0x37a8),auVar155);
          auVar155 = FloatVectorCompareGreaterThan
                               (auVar158,*(undefined1 (*) [16])(iVar21 + 0x37b8),2);
          auVar158 = VectorBitwiseInsertIfTrue
                               (auVar158,*(undefined1 (*) [16])(iVar21 + 0x37b8),auVar155);
          auVar155 = FloatVectorCompareGreaterThan
                               (auVar149,*(undefined1 (*) [16])(iVar21 + 0x37c8),2);
          auVar149 = VectorBitwiseInsertIfTrue
                               (auVar149,*(undefined1 (*) [16])(iVar21 + 0x37c8),auVar155);
          auVar155 = FloatVectorCompareGreaterThan
                               (auVar159,*(undefined1 (*) [16])(iVar21 + 0x37d8),2);
          auVar159 = VectorBitwiseInsertIfTrue
                               (auVar159,*(undefined1 (*) [16])(iVar21 + 0x37d8),auVar155);
          auVar155 = FloatVectorCompareGreaterThan
                               (auVar152,*(undefined1 (*) [16])(iVar21 + 0x37e8),2);
          auVar152 = VectorBitwiseInsertIfTrue
                               (auVar152,*(undefined1 (*) [16])(iVar21 + 0x37e8),auVar155);
          auVar155 = FloatVectorCompareGreaterThan
                               (auVar150,*(undefined1 (*) [16])(iVar21 + 0x37f8),2);
          auVar150 = VectorBitwiseInsertIfTrue
                               (auVar150,*(undefined1 (*) [16])(iVar21 + 0x37f8),auVar155);
          auVar19._4_4_ = uStack_1d2c;
          auVar19._0_4_ = pfStack_1d30;
          auVar19._8_4_ = uStack_1d28;
          auVar19._12_4_ = uStack_1d24;
          auVar155 = FloatVectorCompareGreaterThan
                               (auVar19,*(undefined1 (*) [16])(iVar21 + 0x3808),2);
          auVar155 = VectorBitwiseInsertIfTrue
                               (auVar19,*(undefined1 (*) [16])(iVar21 + 0x3808),auVar155);
          pfStack_1d30 = auVar155._0_4_;
          uStack_1d2c = auVar155._4_4_;
          uStack_1d28 = auVar155._8_4_;
          uStack_1d24 = auVar155._12_4_;
          auVar17._4_4_ = uStack_1d5c;
          auVar17._0_4_ = uStack_1d60;
          auVar17._8_4_ = uStack_1d58;
          auVar17._12_4_ = uStack_1d54;
          auVar155 = FloatVectorCompareGreaterThan
                               (auVar17,*(undefined1 (*) [16])(iVar21 + 0x3818),2);
          auVar155 = VectorBitwiseInsertIfTrue
                               (auVar17,*(undefined1 (*) [16])(iVar21 + 0x3818),auVar155);
          uStack_1d60 = auVar155._0_4_;
          uStack_1d5c = auVar155._4_4_;
          uStack_1d58 = auVar155._8_4_;
          uStack_1d54 = auVar155._12_4_;
          auVar155 = FloatVectorCompareGreaterThan
                               (auVar143,*(undefined1 (*) [16])(iVar21 + 0x3828),2);
          auVar143 = VectorBitwiseInsertIfTrue
                               (auVar143,*(undefined1 (*) [16])(iVar21 + 0x3828),auVar155);
          auVar155 = FloatVectorCompareGreaterThan
                               (auVar145,*(undefined1 (*) [16])(iVar21 + 0x3838),2);
          auVar145 = VectorBitwiseInsertIfTrue
                               (auVar145,*(undefined1 (*) [16])(iVar21 + 0x3838),auVar155);
          auVar11._4_4_ = uStack_1dbc;
          auVar11._0_4_ = uStack_1dc0;
          auVar11._8_4_ = uStack_1db8;
          auVar11._12_4_ = uStack_1db4;
          auVar155 = FloatVectorCompareGreaterThan
                               (auVar11,*(undefined1 (*) [16])(iVar21 + 0x3848),2);
          auVar155 = VectorBitwiseInsertIfTrue
                               (auVar11,*(undefined1 (*) [16])(iVar21 + 0x3848),auVar155);
          auVar133 = FloatVectorCompareGreaterThan
                               (auVar134,*(undefined1 (*) [16])(iVar21 + 0x3858),2);
          uStack_1dc0 = auVar155._0_4_;
          uStack_1dbc = auVar155._4_4_;
          uStack_1db8 = auVar155._8_4_;
          uStack_1db4 = auVar155._12_4_;
          auVar134 = VectorBitwiseInsertIfTrue
                               (auVar134,*(undefined1 (*) [16])(iVar21 + 0x3858),auVar133);
          auVar12._4_4_ = uStack_1dac;
          auVar12._0_4_ = uStack_1db0;
          auVar12._8_4_ = uStack_1da8;
          auVar12._12_4_ = uStack_1da4;
          auVar155 = FloatVectorCompareGreaterThan
                               (auVar12,*(undefined1 (*) [16])(iVar21 + 0x3868),2);
          auVar155 = VectorBitwiseInsertIfTrue
                               (auVar12,*(undefined1 (*) [16])(iVar21 + 0x3868),auVar155);
          uStack_1db0 = auVar155._0_4_;
          uStack_1dac = auVar155._4_4_;
          uStack_1da8 = auVar155._8_4_;
          uStack_1da4 = auVar155._12_4_;
          auVar14._4_4_ = uStack_1d8c;
          auVar14._0_4_ = uStack_1d90;
          auVar14._8_4_ = uStack_1d88;
          auVar14._12_4_ = uStack_1d84;
          auVar155 = FloatVectorCompareGreaterThan
                               (auVar14,*(undefined1 (*) [16])(iVar21 + 0x3878),2);
          auVar155 = VectorBitwiseInsertIfTrue
                               (auVar14,*(undefined1 (*) [16])(iVar21 + 0x3878),auVar155);
          uStack_1d90 = auVar155._0_4_;
          uStack_1d8c = auVar155._4_4_;
          uStack_1d88 = auVar155._8_4_;
          uStack_1d84 = auVar155._12_4_;
          auVar10._4_4_ = uStack_1dcc;
          auVar10._0_4_ = uStack_1dd0;
          auVar10._8_4_ = uStack_1dc8;
          auVar10._12_4_ = uStack_1dc4;
          auVar155 = FloatVectorCompareGreaterThan
                               (auVar10,*(undefined1 (*) [16])(iVar21 + 0x3888),2);
          auVar155 = VectorBitwiseInsertIfTrue
                               (auVar10,*(undefined1 (*) [16])(iVar21 + 0x3888),auVar155);
          uStack_1dd0 = auVar155._0_4_;
          uStack_1dcc = auVar155._4_4_;
          uStack_1dc8 = auVar155._8_4_;
          uStack_1dc4 = auVar155._12_4_;
          auVar9._4_4_ = uStack_1ddc;
          auVar9._0_4_ = uStack_1de0;
          auVar9._8_4_ = uStack_1dd8;
          auVar9._12_4_ = uStack_1dd4;
          auVar155 = FloatVectorCompareGreaterThan(auVar9,*(undefined1 (*) [16])(iVar21 + 0x3898),2)
          ;
          auVar155 = VectorBitwiseInsertIfTrue
                               (auVar9,*(undefined1 (*) [16])(iVar21 + 0x3898),auVar155);
          uStack_1de0 = auVar155._0_4_;
          uStack_1ddc = auVar155._4_4_;
          uStack_1dd8 = auVar155._8_4_;
          uStack_1dd4 = auVar155._12_4_;
          auVar8._4_4_ = uStack_1dec;
          auVar8._0_4_ = uStack_1df0;
          auVar8._8_4_ = uStack_1de8;
          auVar8._12_4_ = uStack_1de4;
          auVar155 = FloatVectorCompareGreaterThan(auVar8,*(undefined1 (*) [16])(iVar21 + 0x38a8),2)
          ;
          auVar155 = VectorBitwiseInsertIfTrue
                               (auVar8,*(undefined1 (*) [16])(iVar21 + 0x38a8),auVar155);
          uStack_1df0 = auVar155._0_4_;
          uStack_1dec = auVar155._4_4_;
          uStack_1de8 = auVar155._8_4_;
          uStack_1de4 = auVar155._12_4_;
          auVar7._4_4_ = uStack_1dfc;
          auVar7._0_4_ = uStack_1e00;
          auVar7._8_4_ = uStack_1df8;
          auVar7._12_4_ = uStack_1df4;
          auVar155 = FloatVectorCompareGreaterThan(auVar7,*(undefined1 (*) [16])(iVar21 + 0x38b8),2)
          ;
          auVar155 = VectorBitwiseInsertIfTrue
                               (auVar7,*(undefined1 (*) [16])(iVar21 + 0x38b8),auVar155);
          uStack_1e00 = auVar155._0_4_;
          uStack_1dfc = auVar155._4_4_;
          uStack_1df8 = auVar155._8_4_;
          uStack_1df4 = auVar155._12_4_;
          auVar6._4_4_ = uStack_1e0c;
          auVar6._0_4_ = uStack_1e10;
          auVar6._8_4_ = uStack_1e08;
          auVar6._12_4_ = uStack_1e04;
          auVar155 = FloatVectorCompareGreaterThan(auVar6,*(undefined1 (*) [16])(iVar21 + 0x38c8),2)
          ;
          auVar155 = VectorBitwiseInsertIfTrue
                               (auVar6,*(undefined1 (*) [16])(iVar21 + 0x38c8),auVar155);
          uStack_1e10 = auVar155._0_4_;
          uStack_1e0c = auVar155._4_4_;
          uStack_1e08 = auVar155._8_4_;
          uStack_1e04 = auVar155._12_4_;
          auVar5._4_4_ = uStack_1e1c;
          auVar5._0_4_ = uStack_1e20;
          auVar5._8_4_ = uStack_1e18;
          auVar5._12_4_ = uStack_1e14;
          auVar155 = FloatVectorCompareGreaterThan(auVar5,*(undefined1 (*) [16])(iVar21 + 0x38d8),2)
          ;
          auVar155 = VectorBitwiseInsertIfTrue
                               (auVar5,*(undefined1 (*) [16])(iVar21 + 0x38d8),auVar155);
          uStack_1e20 = auVar155._0_4_;
          uStack_1e1c = auVar155._4_4_;
          uStack_1e18 = auVar155._8_4_;
          uStack_1e14 = auVar155._12_4_;
          auVar4._4_4_ = uStack_1e2c;
          auVar4._0_4_ = uStack_1e30;
          auVar4._8_4_ = uStack_1e28;
          auVar4._12_4_ = uStack_1e24;
          auVar155 = FloatVectorCompareGreaterThan(auVar4,*(undefined1 (*) [16])(iVar21 + 0x38e8),2)
          ;
          auVar155 = VectorBitwiseInsertIfTrue
                               (auVar4,*(undefined1 (*) [16])(iVar21 + 0x38e8),auVar155);
          uStack_1e30 = auVar155._0_4_;
          uStack_1e2c = auVar155._4_4_;
          uStack_1e28 = auVar155._8_4_;
          uStack_1e24 = auVar155._12_4_;
          auVar3._4_4_ = uStack_1e3c;
          auVar3._0_4_ = uStack_1e40;
          auVar3._8_4_ = uStack_1e38;
          auVar3._12_4_ = uStack_1e34;
          auVar155 = FloatVectorCompareGreaterThan(auVar3,*(undefined1 (*) [16])(iVar21 + 0x38f8),2)
          ;
          auVar155 = VectorBitwiseInsertIfTrue
                               (auVar3,*(undefined1 (*) [16])(iVar21 + 0x38f8),auVar155);
          uStack_1e40 = auVar155._0_4_;
          uStack_1e3c = auVar155._4_4_;
          uStack_1e38 = auVar155._8_4_;
          uStack_1e34 = auVar155._12_4_;
          auVar1._4_4_ = uStack_1e5c;
          auVar1._0_4_ = uStack_1e60;
          auVar1._8_4_ = uStack_1e58;
          auVar1._12_4_ = uStack_1e54;
          auVar155 = FloatVectorCompareGreaterThan(auVar1,*(undefined1 (*) [16])(iVar21 + 0x3908),2)
          ;
          auVar155 = VectorBitwiseInsertIfTrue
                               (auVar1,*(undefined1 (*) [16])(iVar21 + 0x3908),auVar155);
          uStack_1e60 = auVar155._0_4_;
          uStack_1e5c = auVar155._4_4_;
          uStack_1e58 = auVar155._8_4_;
          uStack_1e54 = auVar155._12_4_;
          auVar2._4_4_ = uStack_1e4c;
          auVar2._0_4_ = uStack_1e50;
          auVar2._8_4_ = uStack_1e48;
          auVar2._12_4_ = uStack_1e44;
          auVar155 = FloatVectorCompareGreaterThan(auVar2,*(undefined1 (*) [16])(iVar21 + 0x3918),2)
          ;
          auVar155 = VectorBitwiseInsertIfTrue
                               (auVar2,*(undefined1 (*) [16])(iVar21 + 0x3918),auVar155);
          uStack_1e50 = auVar155._0_4_;
          uStack_1e4c = auVar155._4_4_;
          uStack_1e48 = auVar155._8_4_;
          uStack_1e44 = auVar155._12_4_;
          if (*(float *)(iVar21 + 0x3928) < fStack_1888) {
            fStack_1888 = *(float *)(iVar21 + 0x3928);
          }
        } while (uVar25 != uVar34);
        uStack_1a78 = uStack_1d20;
        uStack_1a74 = uStack_1d1c;
        uStack_1a70 = uStack_1d18;
        uStack_1a6c = uStack_1d14;
        uStack_1a68 = uStack_1d70;
        uStack_1a64 = uStack_1d6c;
        uStack_1a60 = uStack_1d68;
        uStack_1a5c = uStack_1d64;
        uStack_1a58 = uStack_1d80;
        uStack_1a54 = uStack_1d7c;
        uStack_1a50 = uStack_1d78;
        uStack_1a4c = uStack_1d74;
        uStack_1a48 = auVar154._0_8_;
        uStack_1a40 = auVar154._8_8_;
        uStack_1a38 = auVar142._0_8_;
        uStack_1a30 = auVar142._8_8_;
        uStack_1a28 = uStack_1da0;
        uStack_1a24 = uStack_1d9c;
        uStack_1a20 = uStack_1d98;
        uStack_1a1c = uStack_1d94;
        uStack_1a18 = auVar157._0_8_;
        uStack_1a10 = auVar157._8_8_;
        uStack_1a08 = auVar156._0_8_;
        uStack_1a00 = auVar156._8_8_;
        uStack_19f8 = auVar158._0_8_;
        uStack_19f0 = auVar158._8_8_;
        uStack_19e8 = auVar149._0_8_;
        uStack_19e0 = auVar149._8_8_;
        uStack_19d8 = auVar159._0_8_;
        uStack_19d0 = auVar159._8_8_;
        uStack_19c8 = auVar152._0_8_;
        uStack_19c0 = auVar152._8_8_;
        uStack_19b8 = auVar150._0_8_;
        uStack_19b0 = auVar150._8_8_;
        uStack_19a8 = pfStack_1d30;
        uStack_19a4 = uStack_1d2c;
        uStack_19a0 = uStack_1d28;
        uStack_199c = uStack_1d24;
        uStack_1998 = uStack_1d60;
        uStack_1994 = uStack_1d5c;
        uStack_1990 = uStack_1d58;
        uStack_198c = uStack_1d54;
        uStack_1988 = auVar143._0_8_;
        uStack_1980 = auVar143._8_8_;
        uStack_1978 = auVar145._0_8_;
        uStack_1970 = auVar145._8_8_;
        uStack_1968 = uStack_1dc0;
        uStack_1964 = uStack_1dbc;
        uStack_1960 = uStack_1db8;
        uStack_195c = uStack_1db4;
        uStack_1a88 = uStack_1d40;
        uStack_1a84 = uStack_1d3c;
        uStack_1a80 = uStack_1d38;
        uStack_1a7c = uStack_1d34;
        uStack_1948 = uStack_1db0;
        uStack_1944 = uStack_1dac;
        uStack_1940 = uStack_1da8;
        uStack_193c = uStack_1da4;
        uStack_1958 = auVar134._0_8_;
        uStack_1950 = auVar134._8_8_;
        uStack_1938 = uStack_1d90;
        uStack_1934 = uStack_1d8c;
        uStack_1930 = uStack_1d88;
        uStack_192c = uStack_1d84;
        uStack_1928 = uStack_1dd0;
        uStack_1924 = uStack_1dcc;
        uStack_1920 = uStack_1dc8;
        uStack_191c = uStack_1dc4;
        uStack_1918 = uStack_1de0;
        uStack_1914 = uStack_1ddc;
        uStack_1910 = uStack_1dd8;
        uStack_190c = uStack_1dd4;
        uStack_1908 = uStack_1df0;
        uStack_1904 = uStack_1dec;
        uStack_1900 = uStack_1de8;
        uStack_18fc = uStack_1de4;
        uStack_18f8 = uStack_1e00;
        uStack_18f4 = uStack_1dfc;
        uStack_18f0 = uStack_1df8;
        uStack_18ec = uStack_1df4;
        uStack_18e8 = uStack_1e10;
        uStack_18e4 = uStack_1e0c;
        uStack_18e0 = uStack_1e08;
        uStack_18dc = uStack_1e04;
        uStack_18d8 = uStack_1e20;
        uStack_18d4 = uStack_1e1c;
        uStack_18d0 = uStack_1e18;
        uStack_18cc = uStack_1e14;
        uStack_18c8 = uStack_1e30;
        uStack_18c4 = uStack_1e2c;
        uStack_18c0 = uStack_1e28;
        uStack_18bc = uStack_1e24;
        uStack_18b8 = uStack_1e40;
        uStack_18b4 = uStack_1e3c;
        uStack_18b0 = uStack_1e38;
        uStack_18ac = uStack_1e34;
        uStack_18a8 = uStack_1e60;
        uStack_18a4 = uStack_1e5c;
        uStack_18a0 = uStack_1e58;
        uStack_189c = uStack_1e54;
        uStack_1898 = uStack_1e50;
        uStack_1894 = uStack_1e4c;
        uStack_1890 = uStack_1e48;
        uStack_188c = uStack_1e44;
        goto LAB_71b0bed4;
      }
    }
    uVar25 = 0;
    uVar34 = *param_1;
  }
joined_r0x71b0c0a4:
  if (1 < uVar34) {
    fVar40 = *pfStack_1f30;
    if (uVar25 < 2) {
      if (uVar25 == 0) {
        return;
      }
    }
    else {
      iVar21 = uVar25 - 1;
      do {
        pfStack_1f30 = pfStack_1f30 + 1;
        if (*pfStack_1f30 < fVar40) {
          fVar40 = *pfStack_1f30;
        }
        iVar21 = iVar21 + -1;
      } while (iVar21 != 0);
    }
    uVar37 = 0;
    do {
      if (1 < uVar34) {
        uVar25 = 1;
        do {
          iVar21 = *(int *)(param_2 + 0x28);
          if (*(int *)(param_2 + 0x2c) != 0) {
            iVar21 = *(int *)(param_2 + 0x2c);
          }
          iVar26 = *(int *)(*(int *)(iVar21 + 8) + *(int *)(iVar21 + 0x1c) * uVar37 * 4 + uVar25 * 4
                           );
          iVar21 = *(int *)(*(int *)(param_1[0x19] + uVar37 * 4) + 0x55fc) + uVar25 * 0x180 + -0x180
          ;
          imp___aeabi_memcpy4(afStack_1d08,iVar21,0x180);
          imp___aeabi_memcpy4(auStack_1b88,iVar26,0x100);
          imp___aeabi_memmove4(iVar21,iVar26 + 0x100,0x180);
          iVar21 = 0;
          do {
            pfVar35 = (float *)((int)afStack_1d08 + iVar21);
            pfVar22 = (float *)(iVar26 + iVar21);
            iVar21 = iVar21 + 4;
            *pfVar22 = fVar40 * *pfVar35;
          } while (iVar21 != 0x280);
          uVar25 = uVar25 + 1;
          uVar34 = *param_1;
        } while (uVar25 < uVar34);
        uVar25 = param_1[1];
      }
      uVar37 = uVar37 + 1;
    } while (uVar37 < uVar25);
  }
  if (uVar25 != 0 && uVar34 != 0) {
    iVar21 = *(int *)(param_2 + 0x2c);
    if (iVar21 == 0) {
      uVar37 = 0;
      do {
        uVar31 = 0;
        do {
          iVar21 = 0;
          iVar26 = *(int *)(*(int *)(*(int *)(param_2 + 0x28) + 8) +
                            *(int *)(*(int *)(param_2 + 0x28) + 0x1c) * uVar37 * 4 + uVar31 * 4);
          do {
            pfVar35 = (float *)(iVar26 + iVar21);
            iVar21 = iVar21 + 4;
            fVar40 = *pfVar35;
            if (fVar40 < -32768.0) {
              fVar40 = -32768.0;
            }
            if (32767.0 < fVar40) {
              fVar40 = 32767.0;
            }
            *pfVar35 = fVar40;
          } while (iVar21 != 0x280);
          uVar31 = uVar31 + 1;
        } while (uVar31 != uVar34);
        uVar37 = uVar37 + 1;
      } while (uVar37 != uVar25);
    }
    else {
      iVar26 = *(int *)(iVar21 + 8);
      uVar37 = 0;
      iVar21 = *(int *)(iVar21 + 0x1c);
      do {
        uVar31 = 0;
        do {
          iVar28 = *(int *)(iVar26 + iVar21 * uVar37 * 4 + uVar31 * 4);
          iVar27 = 0;
          do {
            pfVar35 = (float *)(iVar28 + iVar27);
            iVar27 = iVar27 + 4;
            fVar40 = *pfVar35;
            if (fVar40 < -32768.0) {
              fVar40 = -32768.0;
            }
            if (32767.0 < fVar40) {
              fVar40 = 32767.0;
            }
            *pfVar35 = fVar40;
          } while (iVar27 != 0x280);
          uVar31 = uVar31 + 1;
        } while (uVar31 != uVar34);
        uVar37 = uVar37 + 1;
      } while (uVar37 != uVar25);
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71b0cbe4
// Entry: 0x71b0cbe4 | Size: 392 bytes
// =========================================================================

void FUN_71b0cbe4(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_2;
  param_1[0x58] = uVar1;
  param_1[0x59] = uVar1;
  param_1[0x5a] = uVar1;
  param_1[0x5b] = uVar1;
  param_1[0x5c] = uVar1;
  param_1[0x5d] = uVar1;
  param_1[0x5e] = uVar1;
  param_1[0x5f] = uVar1;
  param_1[0x50] = uVar1;
  param_1[0x51] = uVar1;
  param_1[0x52] = uVar1;
  param_1[0x53] = uVar1;
  param_1[0x54] = uVar1;
  param_1[0x55] = uVar1;
  param_1[0x56] = uVar1;
  param_1[0x57] = uVar1;
  param_1[0x48] = uVar1;
  param_1[0x49] = uVar1;
  param_1[0x4a] = uVar1;
  param_1[0x4b] = uVar1;
  param_1[0x4c] = uVar1;
  param_1[0x4d] = uVar1;
  param_1[0x4e] = uVar1;
  param_1[0x4f] = uVar1;
  param_1[0x40] = uVar1;
  param_1[0x41] = uVar1;
  param_1[0x42] = uVar1;
  param_1[0x43] = uVar1;
  param_1[0x44] = uVar1;
  param_1[0x45] = uVar1;
  param_1[0x46] = uVar1;
  param_1[0x47] = uVar1;
  param_1[0x38] = uVar1;
  param_1[0x39] = uVar1;
  param_1[0x3a] = uVar1;
  param_1[0x3b] = uVar1;
  param_1[0x3c] = uVar1;
  param_1[0x3d] = uVar1;
  param_1[0x3e] = uVar1;
  param_1[0x3f] = uVar1;
  param_1[0x30] = uVar1;
  param_1[0x31] = uVar1;
  param_1[0x32] = uVar1;
  param_1[0x33] = uVar1;
  param_1[0x34] = uVar1;
  param_1[0x35] = uVar1;
  param_1[0x36] = uVar1;
  param_1[0x37] = uVar1;
  param_1[0x28] = uVar1;
  param_1[0x29] = uVar1;
  param_1[0x2a] = uVar1;
  param_1[0x2b] = uVar1;
  param_1[0x2c] = uVar1;
  param_1[0x2d] = uVar1;
  param_1[0x2e] = uVar1;
  param_1[0x2f] = uVar1;
  param_1[0x20] = uVar1;
  param_1[0x21] = uVar1;
  param_1[0x22] = uVar1;
  param_1[0x23] = uVar1;
  param_1[0x24] = uVar1;
  param_1[0x25] = uVar1;
  param_1[0x26] = uVar1;
  param_1[0x27] = uVar1;
  param_1[0x18] = uVar1;
  param_1[0x19] = uVar1;
  param_1[0x1a] = uVar1;
  param_1[0x1b] = uVar1;
  param_1[0x1c] = uVar1;
  param_1[0x1d] = uVar1;
  param_1[0x1e] = uVar1;
  param_1[0x1f] = uVar1;
  param_1[0x10] = uVar1;
  param_1[0x11] = uVar1;
  param_1[0x12] = uVar1;
  param_1[0x13] = uVar1;
  param_1[0x14] = uVar1;
  param_1[0x15] = uVar1;
  param_1[0x16] = uVar1;
  param_1[0x17] = uVar1;
  param_1[8] = uVar1;
  param_1[9] = uVar1;
  param_1[10] = uVar1;
  param_1[0xb] = uVar1;
  param_1[0xc] = uVar1;
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar1;
  param_1[0xf] = uVar1;
  *param_1 = uVar1;
  param_1[1] = uVar1;
  param_1[2] = uVar1;
  param_1[3] = uVar1;
  param_1[4] = uVar1;
  param_1[5] = uVar1;
  param_1[6] = uVar1;
  param_1[7] = uVar1;
  return;
}


// =========================================================================
// Function: FUN_71b0cd84
// Entry: 0x71b0cd84 | Size: 524 bytes
// =========================================================================

void FUN_71b0cd84(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_2;
  param_1[0x80] = uVar1;
  param_1[0x78] = uVar1;
  param_1[0x79] = uVar1;
  param_1[0x7a] = uVar1;
  param_1[0x7b] = uVar1;
  param_1[0x7c] = uVar1;
  param_1[0x7d] = uVar1;
  param_1[0x7e] = uVar1;
  param_1[0x7f] = uVar1;
  param_1[0x70] = uVar1;
  param_1[0x71] = uVar1;
  param_1[0x72] = uVar1;
  param_1[0x73] = uVar1;
  param_1[0x74] = uVar1;
  param_1[0x75] = uVar1;
  param_1[0x76] = uVar1;
  param_1[0x77] = uVar1;
  param_1[0x68] = uVar1;
  param_1[0x69] = uVar1;
  param_1[0x6a] = uVar1;
  param_1[0x6b] = uVar1;
  param_1[0x6c] = uVar1;
  param_1[0x6d] = uVar1;
  param_1[0x6e] = uVar1;
  param_1[0x6f] = uVar1;
  param_1[0x60] = uVar1;
  param_1[0x61] = uVar1;
  param_1[0x62] = uVar1;
  param_1[99] = uVar1;
  param_1[100] = uVar1;
  param_1[0x65] = uVar1;
  param_1[0x66] = uVar1;
  param_1[0x67] = uVar1;
  param_1[0x58] = uVar1;
  param_1[0x59] = uVar1;
  param_1[0x5a] = uVar1;
  param_1[0x5b] = uVar1;
  param_1[0x5c] = uVar1;
  param_1[0x5d] = uVar1;
  param_1[0x5e] = uVar1;
  param_1[0x5f] = uVar1;
  param_1[0x50] = uVar1;
  param_1[0x51] = uVar1;
  param_1[0x52] = uVar1;
  param_1[0x53] = uVar1;
  param_1[0x54] = uVar1;
  param_1[0x55] = uVar1;
  param_1[0x56] = uVar1;
  param_1[0x57] = uVar1;
  param_1[0x48] = uVar1;
  param_1[0x49] = uVar1;
  param_1[0x4a] = uVar1;
  param_1[0x4b] = uVar1;
  param_1[0x4c] = uVar1;
  param_1[0x4d] = uVar1;
  param_1[0x4e] = uVar1;
  param_1[0x4f] = uVar1;
  param_1[0x40] = uVar1;
  param_1[0x41] = uVar1;
  param_1[0x42] = uVar1;
  param_1[0x43] = uVar1;
  param_1[0x44] = uVar1;
  param_1[0x45] = uVar1;
  param_1[0x46] = uVar1;
  param_1[0x47] = uVar1;
  param_1[0x38] = uVar1;
  param_1[0x39] = uVar1;
  param_1[0x3a] = uVar1;
  param_1[0x3b] = uVar1;
  param_1[0x3c] = uVar1;
  param_1[0x3d] = uVar1;
  param_1[0x3e] = uVar1;
  param_1[0x3f] = uVar1;
  param_1[0x30] = uVar1;
  param_1[0x31] = uVar1;
  param_1[0x32] = uVar1;
  param_1[0x33] = uVar1;
  param_1[0x34] = uVar1;
  param_1[0x35] = uVar1;
  param_1[0x36] = uVar1;
  param_1[0x37] = uVar1;
  param_1[0x28] = uVar1;
  param_1[0x29] = uVar1;
  param_1[0x2a] = uVar1;
  param_1[0x2b] = uVar1;
  param_1[0x2c] = uVar1;
  param_1[0x2d] = uVar1;
  param_1[0x2e] = uVar1;
  param_1[0x2f] = uVar1;
  param_1[0x20] = uVar1;
  param_1[0x21] = uVar1;
  param_1[0x22] = uVar1;
  param_1[0x23] = uVar1;
  param_1[0x24] = uVar1;
  param_1[0x25] = uVar1;
  param_1[0x26] = uVar1;
  param_1[0x27] = uVar1;
  param_1[0x18] = uVar1;
  param_1[0x19] = uVar1;
  param_1[0x1a] = uVar1;
  param_1[0x1b] = uVar1;
  param_1[0x1c] = uVar1;
  param_1[0x1d] = uVar1;
  param_1[0x1e] = uVar1;
  param_1[0x1f] = uVar1;
  param_1[0x10] = uVar1;
  param_1[0x11] = uVar1;
  param_1[0x12] = uVar1;
  param_1[0x13] = uVar1;
  param_1[0x14] = uVar1;
  param_1[0x15] = uVar1;
  param_1[0x16] = uVar1;
  param_1[0x17] = uVar1;
  param_1[8] = uVar1;
  param_1[9] = uVar1;
  param_1[10] = uVar1;
  param_1[0xb] = uVar1;
  param_1[0xc] = uVar1;
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar1;
  param_1[0xf] = uVar1;
  *param_1 = uVar1;
  param_1[1] = uVar1;
  param_1[2] = uVar1;
  param_1[3] = uVar1;
  param_1[4] = uVar1;
  param_1[5] = uVar1;
  param_1[6] = uVar1;
  param_1[7] = uVar1;
  return;
}


