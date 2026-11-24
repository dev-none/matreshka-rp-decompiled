// =========================================================================
// Function: FUN_71a0b704
// Entry: 0x71a0b704 | Size: 12 bytes
// =========================================================================

void FUN_71a0b704(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_vector_7006dad5);
}


// =========================================================================
// Function: _SOxyWpctDWOkKCXVjkCmlmawbiYYzaXEEkGJPZjBytslsTOVtfqUrbZ_HGZApUjjbIRVZxOiYBcRIS_klMkUiVnpPnRJoVqyPHTrfIlSGWPSGpRnMGHjdZpgWcbuAXKAgyEvBvmveGRLbNketjvkgoxgcTAbprHivzPlgGKBEToChLgysLOgKrnaSCIkzinEjGgiAlIwUtrPSWDYvneelJI_wpMsVQnPklTZ
// Entry: 0x71a0b764 | Size: 228 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
_SOxyWpctDWOkKCXVjkCmlmawbiYYzaXEEkGJPZjBytslsTOVtfqUrbZ_HGZApUjjbIRVZxOiYBcRIS_klMkUiVnpPnRJoVqyPHTrfIlSGWPSGpRnMGHjdZpgWcbuAXKAgyEvBvmveGRLbNketjvkgoxgcTAbprHivzPlgGKBEToChLgysLOgKrnaSCIkzinEjGgiAlIwUtrPSWDYvneelJI_wpMsVQnPklTZ
          (int *param_1,ushort *param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int aiStack_34 [2];
  char cStack_2c;
  int iStack_28;
  
  iStack_28 = _ext___stack_chk_guard;
  uVar6 = param_1[1];
  if (uVar6 != 0) {
    uVar7 = (uint)*param_2;
    uVar1 = uVar6 - (uVar6 >> 1 & 0x55555555);
    uVar1 = (uVar1 & 0x33333333) + (uVar1 >> 2 & 0x33333333);
    uVar1 = (uVar1 + (uVar1 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
    if (uVar1 < 2) {
      uVar8 = uVar6 - 1 & uVar7;
    }
    else {
      uVar8 = uVar7;
      if (uVar6 <= uVar7) {
        FUN_71ba33fc(uVar7,uVar6 & 0xffff);
        uVar8 = extraout_r1;
      }
    }
    piVar2 = *(int **)(*param_1 + uVar8 * 4);
    if ((piVar2 != (int *)0x0) && (piVar2 = (int *)*piVar2, piVar2 != (int *)0x0)) {
      do {
        uVar3 = piVar2[1];
        if (uVar3 == uVar7) {
          if (*(ushort *)(piVar2 + 2) == uVar7) {
            FUN_71a0b958(aiStack_34,param_1,piVar2);
            if (aiStack_34[0] != 0) {
              iVar5 = 0;
              if (cStack_2c != '\0') {
                iVar5 = *(int *)(aiStack_34[0] + 0xc);
              }
              if (cStack_2c != '\0' && iVar5 != 0) {
                *(int *)(aiStack_34[0] + 0x10) = iVar5;
              }
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            uVar4 = 1;
            goto LAB_71a0b80e;
          }
        }
        else {
          if (uVar1 < 2) {
            uVar3 = uVar3 & uVar6 - 1;
          }
          else if (uVar6 <= uVar3) {
            FUN_71ba33fc(uVar3,uVar6);
            uVar3 = extraout_r1_00;
          }
          if (uVar3 != uVar8) break;
        }
        piVar2 = (int *)*piVar2;
      } while (piVar2 != (int *)0x0);
    }
  }
  uVar4 = 0;
LAB_71a0b80e:
  if (_ext___stack_chk_guard != iStack_28) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return uVar4;
}


// =========================================================================
// Function: FUN_71a0b958
// Entry: 0x71a0b958 | Size: 312 bytes
// =========================================================================

void FUN_71a0b958(undefined4 *param_1,int *param_2,int *param_3)

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
  
  uVar5 = param_2[1];
  uVar6 = param_3[1];
  uVar2 = uVar5 - (uVar5 >> 1 & 0x55555555);
  uVar2 = (uVar2 & 0x33333333) + (uVar2 >> 2 & 0x33333333);
  uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
  if (uVar2 < 2) {
    uVar6 = uVar6 & uVar5 - 1;
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
    if (uVar4 == uVar6) goto LAB_71a0ba26;
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
    if (uVar4 == uVar6) goto LAB_71a0ba26;
  }
  *(undefined4 *)(iVar7 + uVar6 * 4) = 0;
LAB_71a0ba26:
  iVar7 = *param_3;
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = *(uint *)(iVar7 + 4);
    if (uVar2 < 2) {
      uVar4 = uVar4 & uVar5 - 1;
    }
    else if (uVar5 <= uVar4) {
      FUN_71ba33fc(uVar4,uVar5);
      uVar4 = extraout_r1_02;
    }
    if (uVar4 != uVar6) {
      *(int **)(*param_2 + uVar4 * 4) = piVar3;
      iVar7 = *param_3;
    }
  }
  *piVar3 = iVar7;
  *(undefined1 *)(param_1 + 2) = 1;
  iVar7 = param_2[3];
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *param_3 = 0;
  param_2[3] = iVar7 + -1;
  return;
}


// =========================================================================
// Function: _eDdnNJTGWfMxqOElmkaUcEmZRaokawSdsUqLcwWbZHE
// Entry: 0x71a0bb18 | Size: 50 bytes
// =========================================================================

float _eDdnNJTGWfMxqOElmkaUcEmZRaokawSdsUqLcwWbZHE(float *param_1,float param_2)

{
  float fVar1;
  
  fVar1 = param_1[3];
  param_1[3] = param_2;
  fVar1 = (param_1[1] * fVar1 + *param_1 * param_2) - param_1[2] * param_1[4];
  param_1[4] = fVar1;
  return fVar1;
}


// =========================================================================
// Function: JuUPxj_MpRnmLRxeWFZcHryldtshQlnCYmWzyypFEK
// Entry: 0x71a0bb62 | Size: 8 bytes
// =========================================================================

void JuUPxj_MpRnmLRxeWFZcHryldtshQlnCYmWzyypFEK(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


// =========================================================================
// Function: oGUZYrZxxSnoZuHcuNUpXRzrFQWzJAn_mdRPFiR
// Entry: 0x71a0bb82 | Size: 82 bytes
// =========================================================================

float oGUZYrZxxSnoZuHcuNUpXRzrFQWzJAn_mdRPFiR(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = param_1[5];
  fVar3 = param_1[6];
  param_1[5] = param_2;
  fVar1 = param_1[8];
  param_1[6] = fVar2;
  param_1[8] = param_1[7];
  fVar1 = ((param_1[1] * fVar2 + *param_1 * param_2 + param_1[2] * fVar3) - param_1[3] * param_1[7])
          - param_1[4] * fVar1;
  param_1[7] = fVar1;
  return fVar1;
}


// =========================================================================
// Function: TMHIdFCeboeTABUgiQpmyKWDDBsnGtAvQLKjA
// Entry: 0x71a0bbec | Size: 12 bytes
// =========================================================================

void TMHIdFCeboeTABUgiQpmyKWDDBsnGtAvQLKjA(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  return;
}


// =========================================================================
// Function: CbRCPlMgEQlfaBnBGuqcRlZlzP
// Entry: 0x71a0bc10 | Size: 42 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void CbRCPlMgEQlfaBnBGuqcRlZlzP(undefined4 param_1,int param_2)

{
  uint in_fpscr;
  
  if (param_2 < 1) {
    param_2 = 48000;
  }
  VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: bx_XQzRpxEkglFPyCoqxUFkEvMYeEU
// Entry: 0x71a0bdcc | Size: 26 bytes
// =========================================================================

void bx_XQzRpxEkglFPyCoqxUFkEvMYeEU(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  return;
}


// =========================================================================
// Function: jGrqWPLsMdAMCvfGuiqLzVbzzpnEJfTKMM
// Entry: 0x71a0be00 | Size: 444 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void jGrqWPLsMdAMCvfGuiqLzVbzzpnEJfTKMM(undefined4 param_1,short *param_2,int param_3)

{
  uint in_fpscr;
  
  if (param_2 == (short *)0x0) {
    return;
  }
  if (0 < param_3) {
    VectorSignedToFloat((int)*param_2,(byte)(in_fpscr >> 0x16) & 3);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}


// =========================================================================
// Function: JPHg_riwdVorxwMyNhKBwBlYodr
// Entry: 0x71a0c0b0 | Size: 118 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void JPHg_riwdVorxwMyNhKBwBlYodr(int param_1)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
  pbVar3 = (byte *)(param_1 + 0x18);
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(pbVar3);
    bVar1 = *pbVar3;
    bVar2 = (bool)hasExclusiveAccess(pbVar3);
  } while (!bVar2);
  *pbVar3 = 0;
  DataMemoryBarrier(0x1b);
  if ((bVar1 & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar6 = *(int **)(param_1 + 0x68);
  piVar4 = (int *)(param_1 + 0x58);
  if (piVar6 == piVar4) {
    iVar5 = 0x10;
LAB_71a0c0fe:
    (**(code **)(*piVar4 + iVar5))();
  }
  else if (piVar6 != (int *)0x0) {
    iVar5 = 0x14;
    piVar4 = piVar6;
    goto LAB_71a0c0fe;
  }
  piVar6 = *(int **)(param_1 + 0x50);
  piVar4 = (int *)(param_1 + 0x40);
  if (piVar6 == piVar4) {
    iVar5 = 0x10;
  }
  else {
    if (piVar6 == (int *)0x0) goto LAB_71a0c11e;
    iVar5 = 0x14;
    piVar4 = piVar6;
  }
  (**(code **)(*piVar4 + iVar5))();
LAB_71a0c11e:
  piVar6 = *(int **)(param_1 + 0x38);
  piVar4 = (int *)(param_1 + 0x28);
  if (piVar6 == piVar4) {
    iVar5 = 0x10;
  }
  else {
    if (piVar6 == (int *)0x0) {
      halt_baddata();
    }
    iVar5 = 0x14;
    piVar4 = piVar6;
  }
  (**(code **)(*piVar4 + iVar5))();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: YkvRczFYEfiMy_LwDSjkTcnymzYqVN
// Entry: 0x71a0c232 | Size: 38 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void YkvRczFYEfiMy_LwDSjkTcnymzYqVN(int param_1)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  
  pbVar3 = (byte *)(param_1 + 0x18);
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(pbVar3);
    bVar1 = *pbVar3;
    bVar2 = (bool)hasExclusiveAccess(pbVar3);
  } while (!bVar2);
  *pbVar3 = 0;
  DataMemoryBarrier(0x1b);
  if ((bVar1 & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}


// =========================================================================
// Function: BxqbdDnsSxEpjXXFlhYVLyacwVLgrMwvLQYJWqmpJRQjZgOkiovi
// Entry: 0x71a0c2e0 | Size: 68 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x71a0c3d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
BxqbdDnsSxEpjXXFlhYVLyacwVLgrMwvLQYJWqmpJRQjZgOkiovi
          (int param_1,undefined4 *param_2,undefined2 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  DataMemoryBarrier(0x1b);
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    return 1;
  }
  uVar2 = *param_2;
  uVar1 = *(undefined2 *)(param_2 + 1);
  *(undefined4 *)(param_1 + 0x10) = param_5;
  *(undefined4 *)(param_1 + 0x14) = param_6;
  *(undefined2 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined2 *)(param_1 + 0xc) = param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: _DfxPptjhKZUtrsQUzkBDtHH_kfqBExxPNaOZzD
// Entry: 0x71a0c69c | Size: 158 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x71a0c762) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _DfxPptjhKZUtrsQUzkBDtHH_kfqBExxPNaOZzD(int param_1)

{
  DataMemoryBarrier(0x1b);
  if ((*(byte *)(param_1 + 0x1a) & 1) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x10) != 0 || *(int *)(param_1 + 0x14) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: cNjFLqNaVssJfdZDUkpzBWcZSi_EiJLaBFNuDyNwbqqNMJZlhzwukKcpeUFNMhFOxcmYGcCXhfR
// Entry: 0x71a0c830 | Size: 18 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void cNjFLqNaVssJfdZDUkpzBWcZSi_EiJLaBFNuDyNwbqqNMJZlhzwukKcpeUFNMhFOxcmYGcCXhfR(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: rwCQwgTeEkpRdeQMIYRNKvhFdplGZQWJTt_dRT
// Entry: 0x71a0c908 | Size: 52 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void rwCQwgTeEkpRdeQMIYRNKvhFdplGZQWJTt_dRT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: jSATqPdboTsulHYWT_wQNAvjOMXsRDfL_di
// Entry: 0x71a0ca14 | Size: 86 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void jSATqPdboTsulHYWT_wQNAvjOMXsRDfL_di(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: DHAxyyAvwAPvDqwqB_hlocVFAQDGGLXHqHxmfPHG
// Entry: 0x71a0cb44 | Size: 124 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x71a0cb86) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void DHAxyyAvwAPvDqwqB_hlocVFAQDGGLXHqHxmfPHG
               (int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  DataMemoryBarrier(0x1b);
  if ((0 < param_5) && (param_4 != 0 && (*(byte *)(param_1 + 0x18) & 1) != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}


// =========================================================================
// Function: qGLcwUNXyYAzMDjeFbKiefiJHXWMKnOi
// Entry: 0x71a0cc88 | Size: 32 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void qGLcwUNXyYAzMDjeFbKiefiJHXWMKnOi(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: Q_HBWni_CZnahHnLuQDIMlX
// Entry: 0x71a0d6e0 | Size: 70 bytes
// =========================================================================

void Q_HBWni_CZnahHnLuQDIMlX(undefined4 *param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 1) = param_2;
  *(undefined8 *)(param_1 + 2) = 0xbb8000000000;
  *(undefined8 *)(param_1 + 4) = 0x1400000001;
  *param_1 = &DAT_70b10214;
  param_1[0x12] = 0;
  param_1[0x13] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[0x14] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[0x15] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  param_1[6] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[0x18] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[0x19] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  param_1[0x10] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[7] = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  param_1[0x1a] = 0xc2f00000;
  return;
}


// =========================================================================
// Function: M_wWbwpogssYDTrjNjJWaqo
// Entry: 0x71a0d778 | Size: 144 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void M_wWbwpogssYDTrjNjJWaqo(undefined4 *param_1)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  pbVar3 = (byte *)(param_1 + 8);
  *param_1 = &DAT_70b10214;
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(pbVar3);
    bVar1 = *pbVar3;
    bVar2 = (bool)hasExclusiveAccess(pbVar3);
  } while (!bVar2);
  *pbVar3 = 0;
  DataMemoryBarrier(0x1b);
  if ((bVar1 & 1) == 0) {
    iVar4 = param_1[0x16];
  }
  else {
    if (param_1[9] != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    piVar5 = (int *)param_1[6];
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0x34))(piVar5,*(code **)(*piVar5 + 0x34),2000000000,0);
      (**(code **)(*(int *)param_1[6] + 0x24))();
      piVar5 = (int *)param_1[7];
      param_1[6] = 0;
      param_1[7] = 0;
      if (piVar5 != (int *)0x0) {
        piVar6 = piVar5 + 1;
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(piVar6);
          iVar4 = *piVar6;
          bVar2 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar2);
        *piVar6 = iVar4 + -1;
        DataMemoryBarrier(0x1b);
        if (iVar4 == 0) {
          (**(code **)(*piVar5 + 8))(piVar5);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
    }
    iVar4 = param_1[0x16];
    param_1[0x17] = iVar4;
  }
  if (iVar4 != 0) {
    param_1[0x17] = iVar4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: wHOwkcAmAh_SbiojjGWRZPD
// Entry: 0x71a0d99c | Size: 6 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void wHOwkcAmAh_SbiojjGWRZPD(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: OjKElEiiBQlsVKzUNtzzrZjlNkStJ_PuQUsBXwvkoZRqu
// Entry: 0x71a0da00 | Size: 160 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 OjKElEiiBQlsVKzUNtzzrZjlNkStJ_PuQUsBXwvkoZRqu(int param_1,int *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  undefined8 uVar7;
  
  iVar3 = _ext___stack_chk_guard;
  pbVar6 = (byte *)(param_1 + 0x20);
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(pbVar6);
    bVar1 = *pbVar6;
    bVar2 = (bool)hasExclusiveAccess(pbVar6);
  } while (!bVar2);
  *pbVar6 = 1;
  DataMemoryBarrier(0x1b);
  if ((bVar1 & 1) != 0) {
    if (_ext___stack_chk_guard != iVar3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    return 1;
  }
  uVar7 = *(undefined8 *)param_2;
  *(int *)(param_1 + 0x14) = param_2[2];
  *(undefined8 *)(param_1 + 0xc) = uVar7;
  iVar5 = *param_2;
  iVar4 = param_2[2];
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x58);
  iVar3 = (iVar4 * iVar5) / 1000;
  *(int *)(param_1 + 100) = iVar3;
  if ((uint)(iVar3 * 2) <= (uint)(*(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x58) >> 1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (iVar4 * iVar5 < -999) {
    FUN_719fe110();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: UXZmxSLrHEKIAbtw_AiefFZwZv
// Entry: 0x71a0df40 | Size: 234 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x71a0e034) */

void UXZmxSLrHEKIAbtw_AiefFZwZv(int param_1)

{
  DataMemoryBarrier(0x1b);
  if (DAT_71204354 != -1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  DataMemoryBarrier(0x1b);
  if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: sdEiusEZZWnMjdhZzRVGL_dEfbFSgJWQkd
// Entry: 0x71a0e300 | Size: 102 bytes
// =========================================================================

void sdEiusEZZWnMjdhZzRVGL_dEfbFSgJWQkd(int param_1)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar2 = *(int **)(param_1 + 0x18);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x34))(piVar2,*(code **)(*piVar2 + 0x34),2000000000,0);
    (**(code **)(**(int **)(param_1 + 0x18) + 0x24))();
    piVar2 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (piVar2 != (int *)0x0) {
      piVar3 = piVar2 + 1;
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(piVar3);
        iVar4 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar4 + -1;
      DataMemoryBarrier(0x1b);
      if (iVar4 == 0) {
        (**(code **)(*piVar2 + 8))(piVar2);
        thunk_xwzSFoU_qvDa_PehyVStzHlBOSkJhkBLR_tNCbTfLzAoZMkmnRt(piVar2);
        return;
      }
    }
  }
  return;
}


// =========================================================================
// Function: KDlshcvwhOZZYjVWBthnPG_siy
// Entry: 0x71a0e39a | Size: 54 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void KDlshcvwhOZZYjVWBthnPG_siy(int param_1)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  
  pbVar3 = (byte *)(param_1 + 0x20);
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(pbVar3);
    bVar1 = *pbVar3;
    bVar2 = (bool)hasExclusiveAccess(pbVar3);
  } while (!bVar2);
  *pbVar3 = 0;
  DataMemoryBarrier(0x1b);
  if ((bVar1 & 1) == 0) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: nXkeHEHzHGttVlOFkPKzUmctsZitl
// Entry: 0x71a0e478 | Size: 28 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void nXkeHEHzHGttVlOFkPKzUmctsZitl(undefined4 *param_1)

{
  *param_1 = &DAT_70b10294;
  if (param_1[0x2b] != 0) {
    param_1[0x2c] = param_1[0x2b];
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: ZufAJZokfJWwGDcUmcbpNNyllWpTX_
// Entry: 0x71a0e6b4 | Size: 142 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x71a0e6ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ZufAJZokfJWwGDcUmcbpNNyllWpTX_(int param_1)

{
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  uStack_28 = _ext___stack_chk_guard;
  DataMemoryBarrier(0x1b);
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    return;
  }
  (**(code **)(**(int **)(param_1 + 0x18) + 0x74))
            (&uStack_30,*(int **)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x48),
             *(undefined4 *)(param_1 + 0x54),200000000,0);
  if (iStack_2c == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (iStack_2c == -899) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: _VhledGSWWgE_xgnFoSIbqQUaIWSVtDkrIkyeiVZt
// Entry: 0x71a0e958 | Size: 144 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void _VhledGSWWgE_xgnFoSIbqQUaIWSVtDkrIkyeiVZt(int param_1,short *param_2,int param_3)

{
  int iVar1;
  uint in_fpscr;
  double dVar2;
  double dVar3;
  
  param_3 = *(int *)(param_1 + 0x10) * param_3;
  if (0 < param_3) {
    dVar2 = 0.0;
    iVar1 = param_3;
    do {
      iVar1 = iVar1 + -1;
      dVar3 = (double)VectorSignedToFloat((int)*param_2,(byte)(in_fpscr >> 0x16) & 3);
      dVar2 = dVar2 + dVar3 * 3.0517578125e-05 * dVar3 * 3.0517578125e-05;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
    if (0 < param_3) {
      dVar3 = (double)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
      if (1e-06 < (float)SQRT(dVar2 / dVar3)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  DataMemoryBarrier(0x1b);
  *(undefined4 *)(param_1 + 0x68) = 0xc2f00000;
  DataMemoryBarrier(0x1b);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: jaIUWrENqIFaDVSNcKSVvETxHRpHlnfN
// Entry: 0x71a0ed64 | Size: 14 bytes
// =========================================================================

byte jaIUWrENqIFaDVSNcKSVvETxHRpHlnfN(int param_1)

{
  DataMemoryBarrier(0x1b);
  return *(byte *)(param_1 + 0x20) & 1;
}


// =========================================================================
// Function: xrGCoBMQJtAcVevaCJ_ddCfCcRYwWcDGYwszimkHIcbBUdzWqd
// Entry: 0x71a0ed8a | Size: 2 bytes
// =========================================================================

void xrGCoBMQJtAcVevaCJ_ddCfCcRYwWcDGYwszimkHIcbBUdzWqd(void)

{
  return;
}


// =========================================================================
// Function: vcJvuIlDtWZZyCPp_ulkKYaTrWvRXC_sweqxWOM
// Entry: 0x71a0eda4 | Size: 4 bytes
// =========================================================================

void vcJvuIlDtWZZyCPp_ulkKYaTrWvRXC_sweqxWOM(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 5) = param_2;
  return;
}


// =========================================================================
// Function: _iiBjoaDUwtdYRegV_CffpVwdFXrLtPYcEessiG
// Entry: 0x71a0edc0 | Size: 12 bytes
// =========================================================================

void _iiBjoaDUwtdYRegV_CffpVwdFXrLtPYcEessiG(int param_1,undefined4 param_2)

{
  DataMemoryBarrier(0x1b);
  *(undefined4 *)(param_1 + 8) = param_2;
  DataMemoryBarrier(0x1b);
  return;
}


// =========================================================================
// Function: gbZRukHpFrZwBAdHMAeqwzsxZjeWFwnGVHvCuBKwJLp
// Entry: 0x71a0ede4 | Size: 4 bytes
// =========================================================================

undefined4 gbZRukHpFrZwBAdHMAeqwzsxZjeWFwnGVHvCuBKwJLp(void)

{
  return 0;
}


// =========================================================================
// Function: pYVJHwHDAHCOpVbsZwHs_idgyFtR_SLiWEMEnBWLNFvyzcqaAMoWGJ_QyUUEBlDxIvRWAegKyzqQkuOEV
// Entry: 0x71a0ee00 | Size: 18 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void pYVJHwHDAHCOpVbsZwHs_idgyFtR_SLiWEMEnBWLNFvyzcqaAMoWGJ_QyUUEBlDxIvRWAegKyzqQkuOEV(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: wKxPzIamTKUwkOboFbbLaezcjpkxRnrlKjdK
// Entry: 0x71a0eed8 | Size: 8 bytes
// =========================================================================

undefined4 wKxPzIamTKUwkOboFbbLaezcjpkxRnrlKjdK(int param_1)

{
  DataMemoryBarrier(0x1b);
  return *(undefined4 *)(param_1 + 0x68);
}


// =========================================================================
// Function: nazMDIcvevWNgTOGzDrBmCUUxXHpNqYL
// Entry: 0x71a0ef60 | Size: 4 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void nazMDIcvevWNgTOGzDrBmCUUxXHpNqYL(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: SPzdykTOzCVtJqcxVFIICOQZhhdTqsQqkPHUhndTCt_PrFKVyS
// Entry: 0x71a0efc0 | Size: 4 bytes
// =========================================================================

undefined4 SPzdykTOzCVtJqcxVFIICOQZhhdTqsQqkPHUhndTCt_PrFKVyS(int param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}


// =========================================================================
// Function: gKiRsNrGkKhqdxeNpJmDqepMjibaGIgkUdtWuedvlYwMuYwurRwOpA_
// Entry: 0x71a0efdc | Size: 4 bytes
// =========================================================================

undefined4 gKiRsNrGkKhqdxeNpJmDqepMjibaGIgkUdtWuedvlYwMuYwurRwOpA_(int param_1)

{
  return *(undefined4 *)(param_1 + 0x44);
}


// =========================================================================
// Function: ylmZbncpMwnbrUCljzDmuYUhRJGbHiyWKpPWfQpjC
// Entry: 0x71a0eff8 | Size: 14 bytes
// =========================================================================

undefined4 ylmZbncpMwnbrUCljzDmuYUhRJGbHiyWKpPWfQpjC(int param_1)

{
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_1 + 0xac) == *(undefined4 **)(param_1 + 0xb0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = **(undefined4 **)(param_1 + 0xac);
  }
  return uVar1;
}


// =========================================================================
// Function: IAgzJLvZJLHqUkLMBcuowpgzVCnoGWVQBpvZOgxebz
// Entry: 0x71a0f01e | Size: 48 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void IAgzJLvZJLHqUkLMBcuowpgzVCnoGWVQBpvZOgxebz(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0xac);
  iVar1 = *(int *)(param_2 + 0xb0);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (iVar1 == iVar2) {
    return;
  }
  if (-1 < iVar1 - iVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Subroutine does not return */
  FUN_71a0f1b4(param_1);
}


// =========================================================================
// Function: jVPXhPtIgKcApLbxeEXLeJYnkyPVbnmJVsioLPPUra
// Entry: 0x71a0f11c | Size: 32 bytes
// =========================================================================

undefined4 jVPXhPtIgKcApLbxeEXLeJYnkyPVbnmJVsioLPPUra(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xfffffc7e;
  if (*(uint *)(param_1 + 0xa8) < 6) {
    uVar1 = 0;
  }
  if (0xc < *(uint *)(param_1 + 0x54)) {
    uVar1 = 0xfffffc8d;
  }
  return uVar1;
}


// =========================================================================
// Function: ZnyGLgTrJPAfzUYKwiypzAxLoqGuc
// Entry: 0x71a0f154 | Size: 4 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void ZnyGLgTrJPAfzUYKwiypzAxLoqGuc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: FUN_71a0f1b4
// Entry: 0x71a0f1b4 | Size: 12 bytes
// =========================================================================

void FUN_71a0f1b4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_71a0f5b4
// Entry: 0x71a0f5b4 | Size: 6 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void FUN_71a0f5b4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: EclsAWVpNCSFCBAFdMytCwelt
// Entry: 0x71a0f6ec | Size: 58 bytes
// =========================================================================

void EclsAWVpNCSFCBAFdMytCwelt(undefined4 *param_1)

{
  param_1[0x10] = 0;
  param_1[0x11] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[0x12] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[0x13] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  param_1[0xe] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = &DAT_70b102d8;
  param_1[1] = 48000;
  param_1[2] = 1;
  param_1[3] = 0x14;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}


// =========================================================================
// Function: HeubuUQMrv_iaTZU_wbGdflGy
// Entry: 0x71a0f760 | Size: 138 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void HeubuUQMrv_iaTZU_wbGdflGy(undefined4 *param_1)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  pbVar3 = (byte *)(param_1 + 6);
  *param_1 = &DAT_70b102d8;
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(pbVar3);
    bVar1 = *pbVar3;
    bVar2 = (bool)hasExclusiveAccess(pbVar3);
  } while (!bVar2);
  *pbVar3 = 0;
  DataMemoryBarrier(0x1b);
  if ((bVar1 & 1) != 0) {
    if (param_1[7] != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    piVar4 = (int *)param_1[4];
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x34))(piVar4,*(code **)(*piVar4 + 0x34),2000000000,0);
      (**(code **)(*(int *)param_1[4] + 0x24))();
      piVar4 = (int *)param_1[5];
      param_1[4] = 0;
      param_1[5] = 0;
      if (piVar4 != (int *)0x0) {
        piVar5 = piVar4 + 1;
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(piVar5);
          iVar6 = *piVar5;
          bVar2 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar2);
        *piVar5 = iVar6 + -1;
        DataMemoryBarrier(0x1b);
        if (iVar6 == 0) {
          (**(code **)(*piVar4 + 8))(piVar4);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
    }
  }
  if (param_1[0x10] != 0) {
    param_1[0x11] = param_1[0x10];
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: zLlAxTjKLrivvpNxIyqTYlwlH
// Entry: 0x71a0f954 | Size: 6 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void zLlAxTjKLrivvpNxIyqTYlwlH(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: QSPAgFafJlRHqMuaWLxbFUwxJlkcaXaGAjvDroOAvp_yhgI
// Entry: 0x71a0f9b8 | Size: 90 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 QSPAgFafJlRHqMuaWLxbFUwxJlkcaXaGAjvDroOAvp_yhgI(int param_1,undefined8 *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  undefined8 uVar5;
  
  iVar3 = _ext___stack_chk_guard;
  pbVar4 = (byte *)(param_1 + 0x18);
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(pbVar4);
    bVar1 = *pbVar4;
    bVar2 = (bool)hasExclusiveAccess(pbVar4);
  } while (!bVar2);
  *pbVar4 = 1;
  DataMemoryBarrier(0x1b);
  if ((bVar1 & 1) != 0) {
    if (_ext___stack_chk_guard != iVar3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    return 1;
  }
  uVar5 = *param_2;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 4) = uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: qDhYrnHNeLjvhbgrhSMaSCxKZmlF
// Entry: 0x71a0fe30 | Size: 172 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void qDhYrnHNeLjvhbgrhSMaSCxKZmlF(void)

{
  DataMemoryBarrier(0x1b);
  if (DAT_71204354 != -1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: fPJdbOqHoON_GSbYhVj_CuDpCfRPhoynSZnz
// Entry: 0x71a10194 | Size: 106 bytes
// =========================================================================

void fPJdbOqHoON_GSbYhVj_CuDpCfRPhoynSZnz(int param_1)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar2 = *(int **)(param_1 + 0x10);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x34))(piVar2,*(code **)(*piVar2 + 0x34),2000000000,0);
    (**(code **)(**(int **)(param_1 + 0x10) + 0x24))();
    piVar2 = *(int **)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    if (piVar2 != (int *)0x0) {
      piVar3 = piVar2 + 1;
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(piVar3);
        iVar4 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar4 + -1;
      DataMemoryBarrier(0x1b);
      if (iVar4 == 0) {
        (**(code **)(*piVar2 + 8))(piVar2);
        thunk_xwzSFoU_qvDa_PehyVStzHlBOSkJhkBLR_tNCbTfLzAoZMkmnRt(piVar2);
        return;
      }
    }
  }
  return;
}


// =========================================================================
// Function: uDouEkdQmOvUGnnV_ILIkDLS_CPo
// Entry: 0x71a1022e | Size: 54 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void uDouEkdQmOvUGnnV_ILIkDLS_CPo(int param_1)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  
  pbVar3 = (byte *)(param_1 + 0x18);
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(pbVar3);
    bVar1 = *pbVar3;
    bVar2 = (bool)hasExclusiveAccess(pbVar3);
  } while (!bVar2);
  *pbVar3 = 0;
  DataMemoryBarrier(0x1b);
  if ((bVar1 & 1) == 0) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: DyoPkOvqmTrpJFyETJpbfjgNsrzOsSzF
// Entry: 0x71a10310 | Size: 84 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x71a10348) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void DyoPkOvqmTrpJFyETJpbfjgNsrzOsSzF(int param_1)

{
  DataMemoryBarrier(0x1b);
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: lhlnhjaWcQHxYFeJsVUigSFtSelDdLKiQh
// Entry: 0x71a10740 | Size: 12 bytes
// =========================================================================

byte lhlnhjaWcQHxYFeJsVUigSFtSelDdLKiQh(int param_1)

{
  DataMemoryBarrier(0x1b);
  return *(byte *)(param_1 + 0x18) & 1;
}


// =========================================================================
// Function: jisukhYkUAcEJkNsyYdpzMIjNInQaxANkoQFqyznytKURdalibxKRNRPdXyNzgPdbSieGxdwDPyZGHUISAGzePvRGw
// Entry: 0x71a10764 | Size: 18 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void jisukhYkUAcEJkNsyYdpzMIjNInQaxANkoQFqyznytKURdalibxKRNRPdXyNzgPdbSieGxdwDPyZGHUISAGzePvRGw
               (void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: sUbtVSvoEjDKsv_epia_tbrjVUMEetf
// Entry: 0x71a10bdc | Size: 70 bytes
// =========================================================================

void sUbtVSvoEjDKsv_epia_tbrjVUMEetf(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 != 0) {
    if ((int)param_2 < 0x14) {
      return;
    }
    uVar1 = 0;
    uVar2 = 0x811c9dc5;
    do {
      if ((uVar1 & 0x7ffffffc) == 0x10) {
        uVar3 = 0;
      }
      else {
        uVar3 = (uint)*(byte *)(param_1 + uVar1);
      }
      uVar1 = uVar1 + 1;
      uVar2 = (uVar2 ^ uVar3) * 0x1000193;
    } while (param_2 != uVar1);
    *(uint *)(param_1 + 0x10) = uVar2;
  }
  return;
}


// =========================================================================
// Function: DTI_RGHWgtJOKyNkknYWhKNociyPd
// Entry: 0x71a10c3a | Size: 84 bytes
// =========================================================================

bool DTI_RGHWgtJOKyNkknYWhKNociyPd(int param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  bVar1 = false;
  if ((param_1 != 0) && (0x13 < (int)param_2)) {
    uVar3 = 0;
    uVar2 = 0x811c9dc5;
    do {
      if ((uVar3 & 0x7ffffffc) == 0x10) {
        uVar4 = 0;
      }
      else {
        uVar4 = (uint)*(byte *)(param_1 + uVar3);
      }
      uVar3 = uVar3 + 1;
      uVar2 = (uVar2 ^ uVar4) * 0x1000193;
    } while (param_2 != uVar3);
    bVar1 = *(uint *)(param_1 + 0x10) == uVar2;
  }
  return bVar1;
}


// =========================================================================
// Function: cXhPDiXXiYZmvQsObLfwOvpRETTqETyWPkGJKwkHZiKVNPQzURLr
// Entry: 0x71a10ca6 | Size: 128 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

uint cXhPDiXXiYZmvQsObLfwOvpRETTqETyWPkGJKwkHZiKVNPQzURLr
               (undefined8 *param_1,int param_2,int param_3,undefined8 *param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar1 = 0xffffffff;
  if (-1 < param_3) {
    if (param_4 == (undefined8 *)0x0) {
      return 0xffffffff;
    }
    uVar1 = param_3 + 0x14;
    if (param_5 < (int)uVar1) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar6 = param_1[1];
      uVar5 = *(undefined4 *)(param_1 + 2);
      *param_4 = *param_1;
      param_4[1] = uVar6;
      *(undefined4 *)(param_4 + 2) = uVar5;
      if (param_2 != 0 && param_3 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar2 = 0;
      uVar3 = 0x811c9dc5;
      do {
        if ((uVar2 & 0x7ffffffc) == 0x10) {
          uVar4 = 0;
        }
        else {
          uVar4 = (uint)*(byte *)((int)param_4 + uVar2);
        }
        uVar2 = uVar2 + 1;
        uVar3 = (uVar3 ^ uVar4) * 0x1000193;
      } while (uVar1 != uVar2);
      *(uint *)(param_4 + 2) = uVar3;
    }
  }
  return uVar1;
}


// =========================================================================
// Function: UqptWWMZBaYaMIHNDnkOUHmdyjZDneAF_haREzJLyBRRxtzwwnOdTc
// Entry: 0x71a10d62 | Size: 64 bytes
// =========================================================================

void UqptWWMZBaYaMIHNDnkOUHmdyjZDneAF_haREzJLyBRRxtzwwnOdTc
               (undefined8 *param_1,int param_2,undefined8 *param_3,int *param_4,int *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_1 != (undefined8 *)0x0 && 0x13 < param_2) {
    uVar2 = param_1[1];
    uVar1 = *(undefined4 *)(param_1 + 2);
    *param_3 = *param_1;
    param_3[1] = uVar2;
    *(undefined4 *)(param_3 + 2) = uVar1;
    *param_5 = param_2 + -0x14;
    *param_4 = (int)param_1 + 0x14;
  }
  return;
}


// =========================================================================
// Function: OPyNCpMpLWcKOxSMPQKzOuCc
// Entry: 0x71a10dba | Size: 16 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

int * OPyNCpMpLWcKOxSMPQKzOuCc(int *param_1)

{
  if (*param_1 != -1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return param_1;
}


// =========================================================================
// Function: tJbWGxiVJlRoZbqyfxEOWrsJsfyG
// Entry: 0x71a10e28 | Size: 14 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void tJbWGxiVJlRoZbqyfxEOWrsJsfyG(int *param_1)

{
  if (*param_1 != -1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}


// =========================================================================
// Function: sYgaEpAumXOVHoiCuePqWqOazDHVE
// Entry: 0x71a10e74 | Size: 12 bytes
// =========================================================================

bool sYgaEpAumXOVHoiCuePqWqOazDHVE(int *param_1)

{
  return *param_1 != -1;
}


// =========================================================================
// Function: QwgbKXYHwpNILGJJuGEkpsJPspO
// Entry: 0x71a10e98 | Size: 22 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

undefined4 QwgbKXYHwpNILGJJuGEkpsJPspO(int *param_1)

{
  if (*param_1 == -1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 1;
}


// =========================================================================
// Function: BbTWVOcWLQrwcosgFjzZPmbocsQwiwkCFUTVabCwlzaXMCelqrjRtcUDTNcbFaXHHrvTMYwVwOktMmjoMPgzmLVhyRyePk_S
// Entry: 0x71a10ef4 | Size: 120 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void BbTWVOcWLQrwcosgFjzZPmbocsQwiwkCFUTVabCwlzaXMCelqrjRtcUDTNcbFaXHHrvTMYwVwOktMmjoMPgzmLVhyRyePk_S
               (int *param_1,byte *param_2)

{
  uint uVar1;
  
  if (*param_1 == -1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = *(uint *)(param_2 + 4);
  if ((*param_2 & 1) == 0) {
    uVar1 = (uint)(*param_2 >> 1);
  }
  if (uVar1 != 0) {
    if (uVar1 == 7) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: IybyunQHTYFgNsjgTHQTGnuUClWHFbRqyfjMOHeh
// Entry: 0x71a110c0 | Size: 84 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x71a11120) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 IybyunQHTYFgNsjgTHQTGnuUClWHFbRqyfjMOHeh(int *param_1)

{
  if (*param_1 == -1) {
    return 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: DirrqbwXRzHc_QbdIaazrLBUUEmT_BQSSExLbVLRXTwXCZO
// Entry: 0x71a111b4 | Size: 100 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x71a1121c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 DirrqbwXRzHc_QbdIaazrLBUUEmT_BQSSExLbVLRXTwXCZO(int *param_1,int param_2,int param_3)

{
  if (0 < param_3) {
    if (param_2 != 0) {
      param_1 = (int *)*param_1;
    }
    if (param_2 != 0 && param_1 != (int *)0xffffffff) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return 0xffffffff;
}


// =========================================================================
// Function: HPxscVBVTSVSkThXPIILxCBJVvbRJlm_YYhhvdVHhUgvaJH
// Entry: 0x71a112b0 | Size: 82 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x71a112ea) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 HPxscVBVTSVSkThXPIILxCBJVvbRJlm_YYhhvdVHhUgvaJH(int *param_1,int param_2,int param_3)

{
  if (0 < param_3) {
    if (param_2 != 0) {
      param_1 = (int *)*param_1;
    }
    if (param_2 != 0 && param_1 != (int *)0xffffffff) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return 0xffffffff;
}


// =========================================================================
// Function: JmlAHMLKPqHQojwgWWgEbIflomVQUyoQi
// Entry: 0x71a113dc | Size: 64 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x71a1142a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 JmlAHMLKPqHQojwgWWgEbIflomVQUyoQi(int *param_1)

{
  if (*param_1 == -1) {
    return 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: mIibTIn_nOBjPIbOOpuiRDqpEYPxRwg
// Entry: 0x71a114c0 | Size: 72 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x71a11548) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void mIibTIn_nOBjPIbOOpuiRDqpEYPxRwg(int *param_1)

{
  if (*param_1 == -1) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: BVhTzRASKpKFaddKkIBkrJzirDVELvsRGIHSrzEVyxasVRiDbEYzTjA_nWOgPKOFkMfyxkFwZPglFVKJQcYCNDFQFmWfRpEOkTqIExkMzwwGzBrki
// Entry: 0x71a115f8 | Size: 64 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void BVhTzRASKpKFaddKkIBkrJzirDVELvsRGIHSrzEVyxasVRiDbEYzTjA_nWOgPKOFkMfyxkFwZPglFVKJQcYCNDFQFmWfRpEOkTqIExkMzwwGzBrki
               (void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: _KVjKYCEHDEdodDtXFFeUDoxDvsounzVGY
// Entry: 0x71a1178c | Size: 42 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void _KVjKYCEHDEdodDtXFFeUDoxDvsounzVGY(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: FUN_71a11918
// Entry: 0x71a11918 | Size: 12 bytes
// =========================================================================

void FUN_71a11918(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_basic_string_7006ebe5);
}


// =========================================================================
// Function: cuKsjVZRyspaVsDnqLy
// Entry: 0x71a11978 | Size: 42 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

undefined4 cuKsjVZRyspaVsDnqLy(char *param_1)

{
  DataMemoryBarrier(0x1b);
  if (*param_1 != '\0') {
    return 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: SixizuLbAnqfgRApsCY
// Entry: 0x71a11c20 | Size: 22 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void SixizuLbAnqfgRApsCY(undefined1 *param_1)

{
  DataMemoryBarrier(0x1b);
  *param_1 = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: VR_VLvKDhenpeOflX
// Entry: 0x71a11e84 | Size: 10 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void VR_VLvKDhenpeOflX(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: ruUPzPkaCe_hYwDtqiZQz
// Entry: 0x71a121ac | Size: 14 bytes
// =========================================================================

undefined4 ruUPzPkaCe_hYwDtqiZQz(void)

{
  DataMemoryBarrier(0x1b);
  return DAT_7013651c;
}


// =========================================================================
// Function: KLoalMQagZzrpvz
// Entry: 0x71a121f4 | Size: 2 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void KLoalMQagZzrpvz(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: FUN_71a122f0
// Entry: 0x71a122f0 | Size: 14 bytes
// =========================================================================

void FUN_71a122f0(code *param_1)

{
  (*param_1)();
                    /* WARNING: Subroutine does not return */
  FUN_71a134d8(s_unexpected_handler_unexpectedly_r_700629eb);
}


// =========================================================================
// Function: szHbXBoYzdUavvllZ
// Entry: 0x71a12354 | Size: 180 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void szHbXBoYzdUavvllZ(void)

{
  undefined4 extraout_r2;
  undefined2 unaff_r4;
  undefined2 *unaff_r6;
  undefined4 in_cr0;
  
  DataMemoryBarrier(0x1b);
  FUN_71a122f0(DAT_7013651c);
  coprocessor_loadlong(0xe,in_cr0,extraout_r2);
  *unaff_r6 = unaff_r4;
  software_hlt(0x1c);
  *unaff_r6 = (short)((int)unaff_r6 << 3);
  *unaff_r6 = (short)((int)unaff_r6 << 3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: mdLDCupjO_mkZGsqlyqj
// Entry: 0x71a123bc | Size: 14 bytes
// =========================================================================

undefined4 mdLDCupjO_mkZGsqlyqj(void)

{
  DataMemoryBarrier(0x1b);
  return DAT_70136518;
}


// =========================================================================
// Function: sksoSlCGGhCgnyMtpCwvqD
// Entry: 0x71a124ec | Size: 14 bytes
// =========================================================================

undefined4 sksoSlCGGhCgnyMtpCwvqD(void)

{
  DataMemoryBarrier(0x1b);
  return DAT_71204360;
}


// =========================================================================
// Function: YBbufPKJalVTABqjELmpMyopy
// Entry: 0x71a12904 | Size: 38 bytes
// =========================================================================

undefined4 YBbufPKJalVTABqjELmpMyopy(undefined *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_7013651c;
  DAT_7013651c = &DAT_71a1287d;
  if (param_1 != (undefined *)0x0) {
    DAT_7013651c = param_1;
  }
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(&DAT_7013651c);
    bVar1 = (bool)hasExclusiveAccess(&DAT_7013651c);
  } while (!bVar1);
  DataMemoryBarrier(0x1b);
  return uVar2;
}


// =========================================================================
// Function: oJLlgNPeijcVChWRscRyoSTb
// Entry: 0x71a12984 | Size: 38 bytes
// =========================================================================

undefined4 oJLlgNPeijcVChWRscRyoSTb(undefined *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_70136518;
  DAT_70136518 = &DAT_71a12535;
  if (param_1 != (undefined *)0x0) {
    DAT_70136518 = param_1;
  }
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(&DAT_70136518);
    bVar1 = (bool)hasExclusiveAccess(&DAT_70136518);
  } while (!bVar1);
  DataMemoryBarrier(0x1b);
  return uVar2;
}


// =========================================================================
// Function: hBRDlTZmTmQrgsrcSDuNBazydP
// Entry: 0x71a12a04 | Size: 30 bytes
// =========================================================================

undefined4 hBRDlTZmTmQrgsrcSDuNBazydP(undefined4 param_1)

{
  bool bVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_71204360;
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(&DAT_71204360);
    bVar1 = (bool)hasExclusiveAccess(&DAT_71204360);
  } while (!bVar1);
  DAT_71204360 = param_1;
  DataMemoryBarrier(0x1b);
  return uVar2;
}


// =========================================================================
// Function: UjgORIoBQChgliRoo
// Entry: 0x71a12ab0 | Size: 8 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void UjgORIoBQChgliRoo(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: pghruXLRYILJqXtHOWqFIs
// Entry: 0x71a12b14 | Size: 8 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void pghruXLRYILJqXtHOWqFIs(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: BplqzjJoKflddqQygu
// Entry: 0x71a12b78 | Size: 12 bytes
// =========================================================================

void BplqzjJoKflddqQygu(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_71a134d8(s_Pure_virtual_function_called__700613e3);
}


// =========================================================================
// Function: oUFyXFqqGvcnGNcwvdxfR
// Entry: 0x71a12bd8 | Size: 12 bytes
// =========================================================================

void oUFyXFqqGvcnGNcwvdxfR(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_71a134d8(s_Deleted_virtual_function_called__7006c8e1);
}


// =========================================================================
// Function: CnY_uZeaDyxdbKuhNYOsuNTHkGOv_Ep
// Entry: 0x71a12c38 | Size: 2 bytes
// =========================================================================

void CnY_uZeaDyxdbKuhNYOsuNTHkGOv_Ep(void)

{
  return;
}


// =========================================================================
// Function: GztgCSerVFaVkaiAPZg
// Entry: 0x71a12c52 | Size: 6 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void GztgCSerVFaVkaiAPZg(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: AwYMIoBpvWfEWUczzetVZVs
// Entry: 0x71a12cb8 | Size: 6 bytes
// =========================================================================

char * AwYMIoBpvWfEWUczzetVZVs(void)

{
  return s_std__exception_700634e9;
}


// =========================================================================
// Function: WwEYhHwerbuynMcVHGp_zo_m
// Entry: 0x71a12cf8 | Size: 6 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void WwEYhHwerbuynMcVHGp_zo_m(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: nAlHPTVvaIkMfBpErZJcGCyQhXnr
// Entry: 0x71a12d5c | Size: 6 bytes
// =========================================================================

char * nAlHPTVvaIkMfBpErZJcGCyQhXnr(void)

{
  return s_std__bad_exception_70068001;
}


// =========================================================================
// Function: mAoqaMRbdshsijAQHaE
// Entry: 0x71a12d9c | Size: 12 bytes
// =========================================================================

void mAoqaMRbdshsijAQHaE(undefined4 *param_1)

{
  *param_1 = &DAT_70b1030c;
  return;
}


// =========================================================================
// Function: KtWOaAXRRZotOUgewtD
// Entry: 0x71a12de0 | Size: 6 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void KtWOaAXRRZotOUgewtD(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: brshXpQADWbkstFnjZIpVmQ
// Entry: 0x71a12e44 | Size: 6 bytes
// =========================================================================

char * brshXpQADWbkstFnjZIpVmQ(void)

{
  return s_std__bad_alloc_70066618;
}


// =========================================================================
// Function: BoWIKxcsOSESRsHPVpgJIigJvHjNbWO
// Entry: 0x71a12e84 | Size: 12 bytes
// =========================================================================

void BoWIKxcsOSESRsHPVpgJIigJvHjNbWO(undefined4 *param_1)

{
  *param_1 = &DAT_70b10320;
  return;
}


// =========================================================================
// Function: uvxNUNRn_VhIZueLGduEmgbzPWQn_gy
// Entry: 0x71a12ec8 | Size: 6 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void uvxNUNRn_VhIZueLGduEmgbzPWQn_gy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: XDRsyXVJgJLMTUuouQrdSgXEiRaBgTGdR_Q
// Entry: 0x71a12f2c | Size: 6 bytes
// =========================================================================

char * XDRsyXVJgJLMTUuouQrdSgXEiRaBgTGdR_Q(void)

{
  return s_bad_array_new_length_70063f1b;
}


// =========================================================================
// Function: yWQCKHflWNVsbmkMVfBMdga
// Entry: 0x71a12f6c | Size: 60 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void yWQCKHflWNVsbmkMVfBMdga(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  *param_1 = &DAT_70b10388;
  piVar2 = (int *)(param_1[1] + -4);
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(piVar2);
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  DataMemoryBarrier(0x1b);
  if (iVar3 + -1 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  thunk_CnY_uZeaDyxdbKuhNYOsuNTHkGOv_Ep();
  return;
}


// =========================================================================
// Function: dBYWkbYXYRxlCQIJrdfpjC
// Entry: 0x71a13044 | Size: 6 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void dBYWkbYXYRxlCQIJrdfpjC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: Utob_GiMDZMqIErRZ_PotNlbOt
// Entry: 0x71a130a8 | Size: 4 bytes
// =========================================================================

undefined4 Utob_GiMDZMqIErRZ_PotNlbOt(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


// =========================================================================
// Function: jJGKcnfLgdrxxLeuIMkbyODuAc
// Entry: 0x71a130c4 | Size: 60 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void jJGKcnfLgdrxxLeuIMkbyODuAc(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  *param_1 = &DAT_70b1039c;
  piVar2 = (int *)(param_1[1] + -4);
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(piVar2);
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  DataMemoryBarrier(0x1b);
  if (iVar3 + -1 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  thunk_CnY_uZeaDyxdbKuhNYOsuNTHkGOv_Ep();
  return;
}


// =========================================================================
// Function: dByOjhroaigRITKmAUcaQudD
// Entry: 0x71a1319c | Size: 6 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void dByOjhroaigRITKmAUcaQudD(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: nJrBXTiKaYDCtSjrZpkRVljLMQdl
// Entry: 0x71a13200 | Size: 4 bytes
// =========================================================================

undefined4 nJrBXTiKaYDCtSjrZpkRVljLMQdl(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


// =========================================================================
// Function: fODaaNiCMCMrYFEmCbtyLLQ
// Entry: 0x71a1321c | Size: 6 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void fODaaNiCMCMrYFEmCbtyLLQ(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: anckic_i_BXNfkTYEFOaYsFknVr
// Entry: 0x71a13280 | Size: 6 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void anckic_i_BXNfkTYEFOaYsFknVr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: ibsYYnqDYvDCIdxPDhcvfzE
// Entry: 0x71a132e4 | Size: 6 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void ibsYYnqDYvDCIdxPDhcvfzE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: luZJMrbBevVjSYP_LOupBuO
// Entry: 0x71a13348 | Size: 6 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void luZJMrbBevVjSYP_LOupBuO(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: XGQPDoIAxUeBEnZ_zbRLte
// Entry: 0x71a133ac | Size: 6 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void XGQPDoIAxUeBEnZ_zbRLte(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: hbnFstEQNZdROrWsNQWPFdAtj
// Entry: 0x71a13410 | Size: 6 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void hbnFstEQNZdROrWsNQWPFdAtj(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: vPGIsmySMggD_hSuWlMshHEKoG
// Entry: 0x71a13474 | Size: 6 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void vPGIsmySMggD_hSuWlMshHEKoG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: FUN_71a134d8
// Entry: 0x71a134d8 | Size: 40 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void FUN_71a134d8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: nCJ_jZGzxVbuBQ
// Entry: 0x71a13d3c | Size: 354 bytes
// =========================================================================

int nCJ_jZGzxVbuBQ(int *param_1,undefined4 param_2,int *param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  int *piStack_60;
  int *piStack_5c;
  int *piStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar1 = *(int *)(*param_1 + -8);
  piVar2 = *(int **)(*param_1 + -4);
  iVar3 = (int)param_1 + iVar1;
  iStack_54 = param_4;
  if (piVar2[1] == param_3[1]) {
    if (param_4 < 0) {
      iStack_50 = 0;
      if (param_4 != -2) {
        iStack_4c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        iStack_48 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        iStack_44 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_2c = 0x1000000;
        iStack_50 = 0;
        iStack_40 = 0;
        uStack_28 = 0;
        uStack_30 = 1;
        piStack_60 = param_3;
        piStack_5c = param_1;
        piStack_58 = (int *)param_2;
        iStack_3c = iStack_4c;
        iStack_38 = iStack_48;
        iStack_34 = iStack_44;
        (**(code **)(*param_3 + 0x14))(param_3,&piStack_60,iVar3,iVar3,1,0);
        iStack_50 = 0;
        if (iStack_48 == 1) {
          iStack_50 = iVar3;
        }
      }
    }
    else {
      iStack_50 = iVar3;
      if (iVar1 + param_4 != 0) {
        iStack_50 = 0;
      }
    }
  }
  else {
    if ((-1 < param_4) && (iVar1 = (int)param_1 - param_4, iVar3 <= iVar1)) {
      iStack_4c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      iStack_48 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      iStack_44 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_2c = 0x1000000;
      iStack_50 = 0;
      uStack_28 = 0;
      iStack_40 = 0;
      uStack_30 = 1;
      piStack_60 = piVar2;
      piStack_5c = (int *)iVar1;
      piStack_58 = param_3;
      iStack_3c = iStack_4c;
      iStack_38 = iStack_48;
      iStack_34 = iStack_44;
      (**(code **)(*piVar2 + 0x14))(piVar2,&piStack_60,iVar3,iVar3,1,0);
      if (iStack_48 != 0) {
        return iVar1;
      }
    }
    iStack_4c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_48 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_44 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_50 = 0;
    uStack_30 = 0;
    uStack_2c = 0x1000000;
    uStack_28 = 0;
    iStack_40 = 0;
    piStack_60 = param_3;
    piStack_5c = param_1;
    piStack_58 = (int *)param_2;
    iStack_54 = param_4;
    iStack_3c = iStack_4c;
    iStack_38 = iStack_48;
    iStack_34 = iStack_44;
    (**(code **)(*piVar2 + 0x18))(piVar2,&piStack_60,iVar3,1,0);
    if (iStack_3c == 1) {
      if (iStack_48 != 1) {
        if (iStack_38 != 0) {
          return 0;
        }
        bVar4 = iStack_44 != 1;
        if (!bVar4) {
          iStack_44 = iStack_40;
        }
        if (bVar4 || iStack_44 != 1) {
          return 0;
        }
      }
    }
    else {
      iStack_50 = 0;
      if (iStack_3c == 0) {
        iStack_50 = iStack_4c;
        if (iStack_40 != 1) {
          iStack_50 = 0;
        }
        if (iStack_44 != 1 || iStack_38 != 1) {
          iStack_50 = 0;
        }
      }
    }
  }
  return iStack_50;
}


// =========================================================================
// Function: WfpnNTu_IXUrzvOmQbI
// Entry: 0x71a152f2 | Size: 2 bytes
// =========================================================================

void WfpnNTu_IXUrzvOmQbI(void)

{
  return;
}


// =========================================================================
// Function: bQFSGNVKVMJTDGNIbva
// Entry: 0x71a1530c | Size: 6 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void bQFSGNVKVMJTDGNIbva(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: vriUcyE_lQ_cDgkErG
// Entry: 0x71a15370 | Size: 12 bytes
// =========================================================================

void vriUcyE_lQ_cDgkErG(undefined4 *param_1)

{
  *param_1 = &DAT_70b10a6c;
  return;
}


// =========================================================================
// Function: osWLiq_CoKB_WqLonK
// Entry: 0x71a153b4 | Size: 4 bytes
// =========================================================================

void osWLiq_CoKB_WqLonK(void)

{
  thunk_CnY_uZeaDyxdbKuhNYOsuNTHkGOv_Ep();
  return;
}


// =========================================================================
// Function: eklPuBIKhKNA_InpFn
// Entry: 0x71a153ec | Size: 6 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void eklPuBIKhKNA_InpFn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: eVqlITuJzbVGHuMGKRGdly
// Entry: 0x71a15450 | Size: 6 bytes
// =========================================================================

char * eVqlITuJzbVGHuMGKRGdly(void)

{
  return s_std__bad_cast_700634f8;
}


// =========================================================================
// Function: jgOOdhpOmEYGKiCgJrTdk
// Entry: 0x71a15490 | Size: 12 bytes
// =========================================================================

void jgOOdhpOmEYGKiCgJrTdk(undefined4 *param_1)

{
  *param_1 = &DAT_70b10a80;
  return;
}


// =========================================================================
// Function: AEskXhzXFORxhMqAZyOTG
// Entry: 0x71a154d4 | Size: 4 bytes
// =========================================================================

void AEskXhzXFORxhMqAZyOTG(void)

{
  thunk_CnY_uZeaDyxdbKuhNYOsuNTHkGOv_Ep();
  return;
}


// =========================================================================
// Function: hiobNdgWtCQqJQcOMsKVl
// Entry: 0x71a1550c | Size: 6 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void hiobNdgWtCQqJQcOMsKVl(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: SPHfcWsC_fHDewtJLJOP__myc
// Entry: 0x71a15570 | Size: 6 bytes
// =========================================================================

char * SPHfcWsC_fHDewtJLJOP__myc(void)

{
  return s_std__bad_typeid_70070aa7;
}


// =========================================================================
// Function: pzrFenyxwgqTIA
// Entry: 0x71a155b0 | Size: 56 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

undefined4 pzrFenyxwgqTIA(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  if ((param_1 != 0) && ((param_2 == 0 || (param_3 != 0)))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0xfffffffd;
  }
  return 0;
}


// =========================================================================
// Function: fhrooqEjTNzhNMST_Wq
// Entry: 0x71a34ea8 | Size: 4 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void fhrooqEjTNzhNMST_Wq(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: rMLVpBatktRctmEtzNK
// Entry: 0x71a34f4a | Size: 4 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void rMLVpBatktRctmEtzNK(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: qNQrlu
// Entry: 0x71a34fec | Size: 4 bytes
// =========================================================================

void qNQrlu(void)

{
  imp_free();
  return;
}


// =========================================================================
// Function: FCXOmZvGjOJfkcLnreJE
// Entry: 0x71a35024 | Size: 4 bytes
// =========================================================================

void FCXOmZvGjOJfkcLnreJE(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: uFhZjcD
// Entry: 0x71a3505c | Size: 4 bytes
// =========================================================================

void uFhZjcD(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: dGrRHE
// Entry: 0x71a35094 | Size: 4 bytes
// =========================================================================

void dGrRHE(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: XqbScfQsYZyhZYpgJHBO
// Entry: 0x71a350cc | Size: 4 bytes
// =========================================================================

void XqbScfQsYZyhZYpgJHBO(void)

{
  thunk_dGrRHE();
  return;
}


// =========================================================================
// Function: uiGOUhL
// Entry: 0x71a35104 | Size: 4 bytes
// =========================================================================

void uiGOUhL(void)

{
  thunk_dGrRHE();
  return;
}


// =========================================================================
// Function: JAivSfMaDvUStaRxhfaEXZLrATCiborCzT
// Entry: 0x71a3513c | Size: 4 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void JAivSfMaDvUStaRxhfaEXZLrATCiborCzT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: pnB_ZHMDRubHpentcBBKXwZwcEFDjXwcdR
// Entry: 0x71a351de | Size: 4 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void pnB_ZHMDRubHpentcBBKXwZwcEFDjXwcdR(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: Xi_sAEfDuAvOIwmPirvQO
// Entry: 0x71a35280 | Size: 4 bytes
// =========================================================================

void Xi_sAEfDuAvOIwmPirvQO(void)

{
  imp_free();
  return;
}


// =========================================================================
// Function: HBHTUluxfsJWEBBdrB_pCsyuSnYFXuxXvIK
// Entry: 0x71a352b8 | Size: 4 bytes
// =========================================================================

void HBHTUluxfsJWEBBdrB_pCsyuSnYFXuxXvIK(void)

{
  thunk_Xi_sAEfDuAvOIwmPirvQO();
  return;
}


// =========================================================================
// Function: _otdcgSYBlOBdyqdXbDqGz
// Entry: 0x71a352f0 | Size: 6 bytes
// =========================================================================

void _otdcgSYBlOBdyqdXbDqGz(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_Xi_sAEfDuAvOIwmPirvQO(param_1,param_3);
  return;
}


// =========================================================================
// Function: TzHJViHVFOjEXScnrEfi_
// Entry: 0x71a3532a | Size: 4 bytes
// =========================================================================

void TzHJViHVFOjEXScnrEfi_(void)

{
  thunk_Xi_sAEfDuAvOIwmPirvQO();
  return;
}


// =========================================================================
// Function: lK_wZOcMxRVtdX_nJQlNlUilVfyacjGCgLX
// Entry: 0x71a35362 | Size: 4 bytes
// =========================================================================

void lK_wZOcMxRVtdX_nJQlNlUilVfyacjGCgLX(void)

{
  thunk_TzHJViHVFOjEXScnrEfi_();
  return;
}


// =========================================================================
// Function: EFUIeDZGobOrGGlDoTrcxQ
// Entry: 0x71a3539a | Size: 10 bytes
// =========================================================================

void EFUIeDZGobOrGGlDoTrcxQ(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_TzHJViHVFOjEXScnrEfi_(param_1,param_3);
  return;
}


// =========================================================================
// Function: NAUpeWJSovvMoxKm_
// Entry: 0x71a353d4 | Size: 20 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void NAUpeWJSovvMoxKm_(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_2e8 [392];
  undefined1 auStack_160 [336];
  undefined4 uStack_10;
  
  uStack_10 = param_2;
  iVar1 = FUN_71a35ae6();
  FUN_71ba5df0(auStack_160,uStack_10,param_3,param_4);
  if (*(int *)(iVar1 + 0xc) == 0) {
    FUN_71ba4510(auStack_160,auStack_2e8,iVar1,1);
  }
  else {
    FUN_71ba470c(auStack_160,auStack_2e8,iVar1,*(int *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0x14));
  }
  iVar1 = _DAT_71bafb4c + 0xa8;
  func_0x712180f0(iVar1,&DAT_70822118,&DAT_708308c0,&DAT_7082457a);
  func_0x71219cc0(iVar1);
  func_0x71218450();
  return;
}


// =========================================================================
// Function: FUN_71a35434
// Entry: 0x71a35434 | Size: 6 bytes
// =========================================================================

undefined8 FUN_71a35434(undefined8 *param_1)

{
  return *param_1;
}


// =========================================================================
// Function: FUN_71a35452
// Entry: 0x71a35452 | Size: 42 bytes
// =========================================================================

bool FUN_71a35452(uint *param_1)

{
  return (*param_1 >> 8 | param_1[1] << 0x18) == 0x47432b2b && param_1[1] >> 8 == 0x434c4e;
}


// =========================================================================
// Function: M_yTNhCqFFbumYLFAiCnREzq
// Entry: 0x71a35494 | Size: 24 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void M_yTNhCqFFbumYLFAiCnREzq(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_71a3646a(param_1 + 0x87U & 0xfffffff8);
  if (iVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: DVOAgYELBkvBicWiQ
// Entry: 0x71a35546 | Size: 8 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void DVOAgYELBkvBicWiQ(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: vOWzyoSimCuwyLKtizrz
// Entry: 0x71a3561e | Size: 12 bytes
// =========================================================================

void vOWzyoSimCuwyLKtizrz(int param_1)

{
  FUN_71a36830(param_1 + -0x80);
  return;
}


// =========================================================================
// Function: OcakfPHAimnVoFRcx_bdKkIHOhmv
// Entry: 0x71a35680 | Size: 20 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void OcakfPHAimnVoFRcx_bdKkIHOhmv(int param_1)

{
  *(undefined4 *)(param_1 + -0x7c) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: JIkaxONvlDZGYGkMML_CigMcYhgectFjmq
// Entry: 0x71a3581e | Size: 52 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void JIkaxONvlDZGYGkMML_CigMcYhgectFjmq(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)FUN_71a3646a(0x80);
  if (puVar4 != (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uVar2 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uVar3 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    *puVar4 = 0;
    puVar4[1] = uVar1;
    puVar4[2] = uVar2;
    puVar4[3] = uVar3;
    puVar4[4] = 0;
    puVar4[5] = uVar1;
    puVar4[6] = uVar2;
    puVar4[7] = uVar3;
    puVar4[8] = 0;
    puVar4[9] = uVar1;
    puVar4[10] = uVar2;
    puVar4[0xb] = uVar3;
    puVar4[0xc] = 0;
    puVar4[0xd] = uVar1;
    puVar4[0xe] = uVar2;
    puVar4[0xf] = uVar3;
    puVar4[0x10] = 0;
    puVar4[0x11] = uVar1;
    puVar4[0x12] = uVar2;
    puVar4[0x13] = uVar3;
    puVar4[0x14] = 0;
    puVar4[0x15] = uVar1;
    puVar4[0x16] = uVar2;
    puVar4[0x17] = uVar3;
    puVar4[0x18] = 0;
    puVar4[0x19] = uVar1;
    puVar4[0x1a] = uVar2;
    puVar4[0x1b] = uVar3;
    puVar4[0x1c] = 0;
    puVar4[0x1d] = uVar1;
    puVar4[0x1e] = uVar2;
    puVar4[0x1f] = uVar3;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: cYWaBkbx_dSy_L_ATBbVXFumabVZRh
// Entry: 0x71a358a6 | Size: 4 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void cYWaBkbx_dSy_L_ATBbVXFumabVZRh(undefined *param_1)

{
  if (param_1 < &DAT_71204370) {
    imp_free();
    return;
  }
  if (param_1 < &DAT_71204570) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  imp_free();
  return;
}


// =========================================================================
// Function: eLYPBHXbPSP
// Entry: 0x71a358de | Size: 14 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void eLYPBHXbPSP(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: kD_pD_juiExTuWFtAYtxFwu
// Entry: 0x71a359fe | Size: 4 bytes
// =========================================================================

undefined4 kD_pD_juiExTuWFtAYtxFwu(int param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}


// =========================================================================
// Function: RkbWDkEKNJuGGZwP_sm
// Entry: 0x71a35a1a | Size: 6 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void RkbWDkEKNJuGGZwP_sm(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: FUN_71a35ae6
// Entry: 0x71a35ae6 | Size: 4 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void FUN_71a35ae6(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: xigQKDQNDmalTOa
// Entry: 0x71a35b9e | Size: 4 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void xigQKDQNDmalTOa(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: eoUSZZVXomYREtaUEHoljUCpumGELvbQPs
// Entry: 0x71a35d0e | Size: 58 bytes
// =========================================================================

void eoUSZZVXomYREtaUEHoljUCpumGELvbQPs(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + -0x7c);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(piVar2);
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    DataMemoryBarrier(0x1b);
    if (iVar3 != 1) {
      return;
    }
    if (*(code **)(param_1 + -0x74) != (code *)0x0) {
      (**(code **)(param_1 + -0x74))();
    }
    FUN_71a36830(param_1 + -0x80);
  }
  return;
}


// =========================================================================
// Function: FOghogObQWbwgpOSgm_SzfiDAKSY
// Entry: 0x71a35dbc | Size: 4 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void FOghogObQWbwgpOSgm_SzfiDAKSY(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: ogSVr_bYgRlpW
// Entry: 0x71a35e2e | Size: 8 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void ogSVr_bYgRlpW(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: vUiJjiJxOoOHcVogFvOknAgOIf_zfuNCge
// Entry: 0x71a35f98 | Size: 32 bytes
// =========================================================================

void vUiJjiJxOoOHcVogFvOknAgOIf_zfuNCge(int param_1)

{
  bool bVar1;
  int *piVar2;
  
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + -0x7c);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(piVar2);
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = *piVar2 + 1;
    DataMemoryBarrier(0x1b);
    return;
  }
  return;
}


// =========================================================================
// Function: f_DxGdpDqrmVP__gIBBzMPmaXGthXel
// Entry: 0x71a35fd0 | Size: 4 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void f_DxGdpDqrmVP__gIBBzMPmaXGthXel(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: QqAxmmkEwEAPsvpgMSHiiNzSsoEwiFl
// Entry: 0x71a36088 | Size: 102 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void QqAxmmkEwEAPsvpgMSHiiNzSsoEwiFl(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  if (param_1 == 0) {
    return;
  }
  puVar5 = (undefined4 *)FUN_71a3646a(0x80);
  if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar3 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *puVar5 = 0;
  puVar5[1] = uVar2;
  puVar5[2] = uVar3;
  puVar5[3] = uVar4;
  puVar5[1] = param_1;
  puVar5[4] = 0;
  puVar5[5] = uVar2;
  puVar5[6] = uVar3;
  puVar5[7] = uVar4;
  puVar5[8] = 0;
  puVar5[9] = uVar2;
  puVar5[10] = uVar3;
  puVar5[0xb] = uVar4;
  puVar5[0xc] = 0;
  puVar5[0xd] = uVar2;
  puVar5[0xe] = uVar3;
  puVar5[0xf] = uVar4;
  puVar5[0x10] = 0;
  puVar5[0x11] = uVar2;
  puVar5[0x12] = uVar3;
  puVar5[0x13] = uVar4;
  puVar5[0x14] = 0;
  puVar5[0x15] = uVar2;
  puVar5[0x16] = uVar3;
  puVar5[0x17] = uVar4;
  puVar5[0x18] = 0;
  puVar5[0x19] = uVar2;
  puVar5[0x1a] = uVar3;
  puVar5[0x1b] = uVar4;
  puVar5[0x1c] = 0;
  puVar5[0x1d] = uVar2;
  puVar5[0x1e] = uVar3;
  puVar5[0x1f] = uVar4;
  piVar6 = (int *)(param_1 + -0x7c);
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(piVar6);
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = *piVar6 + 1;
  DataMemoryBarrier(0x1b);
  puVar5[2] = *(undefined4 *)(param_1 + -0x78);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: RQgkHeTIUHzFlVASTcSpZhpa
// Entry: 0x71a36398 | Size: 4 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void RQgkHeTIUHzFlVASTcSpZhpa(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: zusBgibAXFoDNMrj_DlccYbfX
// Entry: 0x71a36404 | Size: 4 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void zusBgibAXFoDNMrj_DlccYbfX(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: FUN_71a3646a
// Entry: 0x71a3646a | Size: 24 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void FUN_71a3646a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: FUN_71a36830
// Entry: 0x71a36830 | Size: 42 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void FUN_71a36830(undefined *param_1)

{
  if (param_1 < &DAT_71204370) {
    imp_free();
    return;
  }
  if (param_1 < &DAT_71204570) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  imp_free();
  return;
}


// =========================================================================
// Function: QiSdtppFLLGQjJRvJPiv
// Entry: 0x71a36a64 | Size: 364 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

int QiSdtppFLLGQjJRvJPiv(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int unaff_r4;
  uint auStack_48 [2];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  uint uStack_24;
  
  if (param_2 != 0) {
    unaff_r4 = param_3;
  }
  if (param_2 == 0 || param_3 == 0) {
    return 3;
  }
  iVar1 = FUN_71a35452(param_2);
  auStack_48[0] = param_2;
  FUN_71ba3b60(unaff_r4,0,0xc,0,auStack_48);
  uVar2 = param_1 & 0xfffffff7;
  if (uVar2 != 2) {
    if (uVar2 == 1) {
      uVar2 = *(uint *)(param_2 + 0x20);
      FUN_71ba3a58(unaff_r4,0,0xd,0,auStack_48);
      if (uVar2 == auStack_48[0]) {
        if (iVar1 == 0) {
          FUN_71a36e2a(auStack_48,6,0,param_2,unaff_r4);
          uVar2 = auStack_48[0];
          if (iStack_30 != 6) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
        else {
          uVar2 = *(uint *)(param_2 + 0x34);
          uStack_38 = *(uint *)(param_2 + 0x30);
        }
        uStack_24 = param_2;
        FUN_71ba3b60(unaff_r4,0,0,0,&uStack_24);
        uStack_24 = uVar2;
        FUN_71ba3b60(unaff_r4,0,1,0,&uStack_24);
        FUN_71ba3a58(unaff_r4,0,0xf,0,&uStack_24);
        uStack_24 = uStack_24 & 1 | uStack_38;
        FUN_71ba3b60(unaff_r4,0,0xf,0,&uStack_24);
        return 7;
      }
      FUN_71a36e2a(auStack_48,param_1 & 8 | 2,iVar1,param_2,unaff_r4);
      if (iStack_30 != 8) {
        if (iStack_30 != 6) {
          return iStack_30;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      if (uVar2 != 0) {
        return 3;
      }
      if (((param_1 & 8) == 0) &&
         (FUN_71a36e2a(auStack_48,1,iVar1,param_2,unaff_r4), iStack_30 != 8)) {
        if (iStack_30 != 6) {
          return iStack_30;
        }
        FUN_71ba3a58(unaff_r4,0,0xd,0,&uStack_24);
        *(uint *)(param_2 + 0x20) = uStack_24;
        if (iVar1 != 0) {
          *(uint *)(param_2 + 0x34) = auStack_48[0];
          *(undefined4 *)(param_2 + 0x2c) = uStack_3c;
          *(uint *)(param_2 + 0x30) = uStack_38;
          *(undefined4 *)(param_2 + 0x24) = uStack_34;
          *(undefined4 *)(param_2 + 0x28) = uStack_40;
          return 6;
        }
        return 6;
      }
    }
  }
  iVar3 = FUN_71ba4870(param_2,unaff_r4);
  iVar1 = iVar3;
  if (iVar3 != 5) {
    iVar1 = 9;
  }
  if (iVar3 == 0) {
    iVar1 = 8;
  }
  return iVar1;
}


// =========================================================================
// Function: FUN_71a36e2a
// Entry: 0x71a36e2a | Size: 948 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void FUN_71a36e2a(uint *param_1,uint param_2,int param_3,int param_4,undefined4 param_5)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  char *pcVar11;
  uint uVar12;
  char *pcVar13;
  uint uVar14;
  byte *pbVar15;
  byte *pbVar16;
  int *piVar18;
  int *piVar19;
  int *piVar20;
  bool bVar21;
  longlong lVar22;
  uint uStack_4c;
  uint uStack_34;
  char *pcStack_30;
  char *pcStack_2c;
  uint uStack_28;
  byte *pbVar17;
  
  param_1[5] = 0;
  param_1[6] = 3;
  *param_1 = 0;
  param_1[1] = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[2] = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[3] = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  param_1[4] = 0;
  if (param_2 << 0x1f == 0) {
    if (-1 < (int)(param_2 << 0x1e)) {
      return;
    }
    if ((param_2 & 0xc) == 0xc) {
      param_1[6] = 2;
      return;
    }
  }
  else if ((param_2 & 0xe) != 0) {
    return;
  }
  pcVar5 = (char *)FUN_71ba4800(param_5);
  if (pcVar5 == (char *)0x0) {
    param_1[6] = 8;
    return;
  }
  param_1[3] = (uint)pcVar5;
  FUN_71ba3a58(param_5,0,0xf,0,&uStack_28);
  uVar7 = uStack_28;
  uVar6 = FUN_71ba482c(param_5);
  pcStack_2c = pcVar5 + 1;
  uStack_4c = uVar6;
  if (*pcVar5 != -1) {
    uStack_4c = FUN_71a37994(&pcStack_2c);
  }
  pcVar5 = pcStack_2c + 1;
  if (*pcStack_2c == -1) {
    pcVar13 = (char *)0x0;
  }
  else {
    uVar12 = 0;
    uVar14 = 0;
    pcVar13 = pcVar5;
    do {
      pcVar5 = pcVar13 + 1;
      cVar1 = *pcVar13;
      uVar14 = uVar14 | ((int)cVar1 & 0x7fU) << (uVar12 & 0xff);
      uVar12 = uVar12 + 7;
      pcVar13 = pcVar5;
    } while (cVar1 < 0);
    pcVar13 = pcVar5 + uVar14;
  }
  uVar12 = (uVar7 & 0xfffffffe) + ~uVar6;
  cVar1 = *pcVar5;
  uVar7 = 0;
  uVar6 = 0;
  pcVar5 = pcVar5 + 1;
  do {
    pcStack_30 = pcVar5 + 1;
    cVar2 = *pcVar5;
    uVar6 = uVar6 | ((int)cVar2 & 0x7fU) << (uVar7 & 0xff);
    uVar7 = uVar7 + 7;
    pcVar5 = pcStack_30;
  } while (cVar2 < 0);
  pcVar5 = pcStack_30 + uVar6;
  pcStack_2c = pcStack_30;
  while( true ) {
    if (pcVar5 <= pcStack_30) {
      halt_baddata();
    }
    uVar7 = FUN_71a37994(&pcStack_30,cVar1);
    iVar8 = FUN_71a37994(&pcStack_30,cVar1);
    iVar9 = FUN_71a37994(&pcStack_30,cVar1);
    uVar14 = 0;
    uVar6 = 0;
    pcVar11 = pcStack_30;
    do {
      pcStack_30 = pcVar11 + 1;
      cVar2 = *pcVar11;
      piVar18 = (int *)(((int)cVar2 & 0x7fU) << (uVar14 & 0xff));
      uVar6 = uVar6 | (uint)piVar18;
      uVar14 = uVar14 + 7;
      pcVar11 = pcStack_30;
    } while (cVar2 < 0);
    bVar21 = uVar12 <= uVar7;
    if (uVar7 <= uVar12) {
      bVar21 = iVar8 + uVar7 <= uVar12;
    }
    if (!bVar21) break;
    if (uVar12 < uVar7) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  if (iVar9 == 0) {
    uVar7 = 8;
  }
  else {
    param_1[4] = iVar9 + uStack_4c;
    if (uVar6 != 0) {
      pbVar15 = (byte *)(pcVar5 + (uVar6 - 1));
      uStack_34 = param_4 + 0x58;
      bVar21 = false;
      do {
        uVar6 = 0;
        uVar7 = 0;
        pbVar17 = pbVar15;
        do {
          pbVar16 = pbVar17 + 1;
          bVar3 = *pbVar17;
          uVar7 = uVar7 | ((int)(char)bVar3 & 0x7fU) << (uVar6 & 0xff);
          uVar6 = uVar6 + 7;
          pbVar17 = pbVar16;
        } while ((char)bVar3 < 0);
        uVar12 = uVar7;
        if (uVar6 < 0x20) {
          uVar12 = uVar7 | -1 << (uVar6 & 0xff);
        }
        if (bVar3 < 0x40) {
          uVar12 = uVar7;
        }
        bVar4 = bVar21;
        if ((int)uVar12 < 1) {
          bVar4 = (bool)(uVar12 == 0 | bVar21);
          if ((uVar12 != 0) && ((param_2 & 8) == 0)) {
            uVar7 = (int)uVar12 >> 0x1f;
            if (param_3 == 0) goto LAB_71a3719e;
            lVar22 = FUN_71a35434(param_4);
            uVar6 = uStack_34;
            if (lVar22 == 0x434c4e47432b2b01) {
              uVar6 = *(uint *)(param_4 + -0x24);
            }
            if (uVar6 != 0) {
              piVar18 = *(int **)(param_4 + -0x20);
            }
            if (uVar6 == 0 || piVar18 == (int *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            if (pcVar13 == (char *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            piVar19 = (int *)(pcVar13 + ~uVar12 * 4);
            piVar20 = piVar19;
            do {
              if (*piVar19 == 0) {
                param_1[5] = uVar6;
                param_1[6] = 6;
                *param_1 = uVar12;
                param_1[1] = uVar7;
                param_1[2] = (uint)pbVar15;
                return;
              }
              piVar10 = *(int **)((int)piVar20 + *piVar19);
              uStack_28 = uVar6;
              iVar8 = (**(code **)(*piVar10 + 0x10))(piVar10,piVar18,&uStack_28);
              piVar20 = piVar20 + 1;
              piVar19 = piVar19 + 1;
              bVar4 = bVar21;
            } while (iVar8 == 0);
          }
        }
        else {
          if (pcVar13 == (char *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          iVar8 = *(int *)(pcVar13 + uVar12 * -4);
          if (iVar8 != 0) {
            piVar18 = *(int **)(iVar8 + (int)(pcVar13 + uVar12 * -4));
          }
          if (iVar8 == 0 || piVar18 == (int *)0x0) {
            uVar7 = 0;
LAB_71a3719e:
            *param_1 = uVar12;
            param_1[1] = uVar7;
            param_1[2] = (uint)pbVar15;
            lVar22 = FUN_71a35434(param_4);
            if (lVar22 == 0x434c4e47432b2b01) {
              uStack_34 = *(uint *)(param_4 + -0x24);
            }
            param_1[5] = uStack_34;
            param_1[6] = 6;
            return;
          }
          if (param_3 != 0) {
            lVar22 = FUN_71a35434(param_4);
            uStack_28 = uStack_34;
            if (lVar22 == 0x434c4e47432b2b01) {
              uStack_28 = *(uint *)(param_4 + -0x24);
            }
            if (uStack_28 == 0 || *(int *)(param_4 + -0x20) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            iVar8 = (**(code **)(*piVar18 + 0x10))(piVar18,*(int *)(param_4 + -0x20),&uStack_28);
            if (iVar8 != 0) {
              *param_1 = uVar12;
              param_1[1] = 0;
              param_1[2] = (uint)pbVar15;
              param_1[5] = uStack_28;
              param_1[6] = 6;
              return;
            }
          }
        }
        uVar6 = 0;
        uVar7 = 0;
        pbVar15 = pbVar16;
        do {
          bVar3 = *pbVar15;
          uVar7 = uVar7 | ((int)(char)bVar3 & 0x7fU) << (uVar6 & 0xff);
          uVar6 = uVar6 + 7;
          pbVar15 = pbVar15 + 1;
        } while ((char)bVar3 < 0);
        piVar18 = (int *)(-1 << (uVar6 & 0xff));
        uVar12 = uVar7;
        if (uVar6 < 0x20) {
          uVar12 = uVar7 | (uint)piVar18;
        }
        if (bVar3 < 0x40) {
          uVar12 = uVar7;
        }
        if (uVar12 == 0) {
          uVar7 = 8;
          if (bVar4) {
            uVar7 = 6;
          }
          if (-1 < (int)(param_2 << 0x1e)) {
            uVar7 = 8;
          }
          param_1[6] = uVar7;
          return;
        }
        pbVar15 = pbVar16 + uVar12;
        bVar21 = bVar4;
      } while( true );
    }
    uVar7 = 8;
    if (param_2 << 0x1f == 0) {
      uVar7 = 6;
    }
  }
  param_1[6] = uVar7;
  return;
}


// =========================================================================
// Function: N_kTeKNSakakxpmUYHcXZ
// Entry: 0x71a3746c | Size: 16 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void N_kTeKNSakakxpmUYHcXZ(int param_1)

{
  if (param_1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: FUN_71a37994
// Entry: 0x71a37994 | Size: 222 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

int FUN_71a37994(undefined4 *param_1,uint param_2)

{
  byte bVar1;
  ushort uVar2;
  int *piVar3;
  uint uVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  int *piVar8;
  
  if (param_2 == 0xff) {
    return 0;
  }
  if (0xc < (param_2 & 0xf)) {
switchD_71a379ae_caseD_5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar7 = (ushort *)*param_1;
  switch(param_2 & 0xf) {
  case 0:
  case 3:
  case 0xb:
    puVar5 = puVar7 + 2;
    piVar8 = *(int **)puVar7;
    break;
  case 1:
    uVar4 = 0;
    piVar8 = (int *)0x0;
    puVar6 = puVar7;
    do {
      puVar5 = (ushort *)((int)puVar6 + 1);
      uVar2 = *puVar6;
      piVar8 = (int *)((uint)piVar8 | ((int)(char)uVar2 & 0x7fU) << (uVar4 & 0xff));
      uVar4 = uVar4 + 7;
      puVar6 = puVar5;
    } while ((char)uVar2 < 0);
    break;
  case 2:
    puVar5 = puVar7 + 1;
    piVar8 = (int *)(uint)*puVar7;
    break;
  case 4:
  case 0xc:
    puVar5 = puVar7 + 4;
    piVar8 = *(int **)puVar7;
    break;
  default:
    goto switchD_71a379ae_caseD_5;
  case 9:
    uVar4 = 0;
    piVar3 = (int *)0x0;
    puVar6 = puVar7;
    do {
      puVar5 = (ushort *)((int)puVar6 + 1);
      bVar1 = (byte)*puVar6;
      piVar3 = (int *)((uint)piVar3 | ((int)(char)bVar1 & 0x7fU) << (uVar4 & 0xff));
      uVar4 = uVar4 + 7;
      puVar6 = puVar5;
    } while ((char)bVar1 < 0);
    piVar8 = piVar3;
    if (uVar4 < 0x20) {
      piVar8 = (int *)((uint)piVar3 | -1 << (uVar4 & 0xff));
    }
    if (bVar1 < 0x40) {
      piVar8 = piVar3;
    }
    break;
  case 10:
    puVar5 = puVar7 + 1;
    piVar8 = (int *)(int)(short)*puVar7;
  }
  uVar4 = (param_2 & 0x7f) >> 4;
  if (uVar4 == 0 || uVar4 == 3) {
joined_r0x71a37a70:
    if (piVar8 != (int *)0x0) {
      if (0x7fffffff < (uint)(int)(char)param_2) {
        piVar8 = (int *)*piVar8;
      }
      goto LAB_71a37a76;
    }
  }
  else {
    if (uVar4 != 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (piVar8 != (int *)0x0) {
      piVar8 = (int *)((int)piVar8 + (int)puVar7);
      goto joined_r0x71a37a70;
    }
  }
  piVar8 = (int *)0x0;
LAB_71a37a76:
  *param_1 = puVar5;
  return (int)piVar8;
}


// =========================================================================
// Function: GFDIUClbc_QcPNgD_wH
// Entry: 0x71a37b7c | Size: 46 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x71a37b9e) */
/* WARNING: Removing unreachable block (ram,0x71a37bac) */
/* WARNING: Removing unreachable block (ram,0x71a37bfc) */

void GFDIUClbc_QcPNgD_wH(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: JMooSgaioCpnHW_ViKRBIqbSBz
// Entry: 0x71a38160 | Size: 28 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void JMooSgaioCpnHW_ViKRBIqbSBz(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: qDhwOkFCrfzgfOXgsAmbBCaEQMcLRfehWflfI
// Entry: 0x71a3825c | Size: 28 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

undefined * qDhwOkFCrfzgfOXgsAmbBCaEQMcLRfehWflfI(void)

{
  DataMemoryBarrier(0x1b);
  if ((DAT_712046bc & 1) != 0) {
    return &DAT_71204580;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: MrpsNAzuuRHKHFKEXYgltvqGJhHcd
// Entry: 0x71a38410 | Size: 56 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x71a39536) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 MrpsNAzuuRHKHFKEXYgltvqGJhHcd(int param_1)

{
  if (*(int *)(param_1 + 0x138) != 0) {
    return 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: spsOjxOZISIElPhYOuQUBRSzSRJBpDoeri_lGc
// Entry: 0x71a3ce10 | Size: 10 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void spsOjxOZISIElPhYOuQUBRSzSRJBpDoeri_lGc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: LOkgYmxDYGlkXOQkyZhFaSBjLoRdn_x_mFhRgSRY
// Entry: 0x71a3cecc | Size: 10 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void LOkgYmxDYGlkXOQkyZhFaSBjLoRdn_x_mFhRgSRY(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: SzIqHtSwePPCJwqapHlVqPq_GnuUYyZfEXYkma
// Entry: 0x71a3cf88 | Size: 10 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void SzIqHtSwePPCJwqapHlVqPq_GnuUYyZfEXYkma(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: n_zLDPyInKEJWtdUvqJoPxDtqaBOQAzxCMyDqQ
// Entry: 0x71a3d044 | Size: 10 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void n_zLDPyInKEJWtdUvqJoPxDtqaBOQAzxCMyDqQ(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: vUXlTHLxqtHyTMNWCUBDbXiWboXiOpUCiAeizXdd
// Entry: 0x71a3d100 | Size: 10 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void vUXlTHLxqtHyTMNWCUBDbXiWboXiOpUCiAeizXdd(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: DrPoCobhezIOwuiaMDXGtwOKCTdifwpcbCJwFr
// Entry: 0x71a3d1bc | Size: 10 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void DrPoCobhezIOwuiaMDXGtwOKCTdifwpcbCJwFr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: cjtf_ohyHMjcqN_uJdMiylTZbGAKQsKCfYFbjYAiP
// Entry: 0x71a3d278 | Size: 10 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void cjtf_ohyHMjcqN_uJdMiylTZbGAKQsKCfYFbjYAiP(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: pBJosbrdoiyZGrYIqRwVYcOXcqTDLftlCoakKPyiXJ
// Entry: 0x71a3d334 | Size: 10 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void pBJosbrdoiyZGrYIqRwVYcOXcqTDLftlCoakKPyiXJ(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: VtiHUYFZANrWOGpUVfEGPVIRWQVwKVhydkKJ
// Entry: 0x71a3d3f0 | Size: 10 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void VtiHUYFZANrWOGpUVfEGPVIRWQVwKVhydkKJ(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: WGUAyKinXMLhUlIcTPaisYNTMoMGHWLSBYCfoJJmz
// Entry: 0x71a3d4ac | Size: 10 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void WGUAyKinXMLhUlIcTPaisYNTMoMGHWLSBYCfoJJmz(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: vIWrNNnwVSgvsgRPcVYyZTQRvRmdVvCqqxGfHtOag
// Entry: 0x71a3d568 | Size: 10 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void vIWrNNnwVSgvsgRPcVYyZTQRvRmdVvCqqxGfHtOag(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: TbANRleBdfwUXwysXtHSjPkGRHMfILvPnMWPwQdtB
// Entry: 0x71a3d624 | Size: 10 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void TbANRleBdfwUXwysXtHSjPkGRHMfILvPnMWPwQdtB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: PYJYwSdgyhdWmfteNliTBoiXGVOrKnrOuDGAjhRCgw
// Entry: 0x71a3d6e0 | Size: 10 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void PYJYwSdgyhdWmfteNliTBoiXGVOrKnrOuDGAjhRCgw(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: gEalVRFcNnKSNMLIpoEHedFMLqBXQkeLBTTgEmYDG
// Entry: 0x71a3d79c | Size: 10 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void gEalVRFcNnKSNMLIpoEHedFMLqBXQkeLBTTgEmYDG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: JKEbnaVjdtjgAYDgoUQrOHSojJNhoiLWLZPbwPifhf
// Entry: 0x71a3d858 | Size: 10 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void JKEbnaVjdtjgAYDgoUQrOHSojJNhoiLWLZPbwPifhf(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: qtCHPRscbgQZnxqMchAjOLiMdEmUFSUtcnDb
// Entry: 0x71a3d914 | Size: 10 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void qtCHPRscbgQZnxqMchAjOLiMdEmUFSUtcnDb(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: acEfaQaUMLrCGEjTYbgqAi_MBLiHUBlVIGII
// Entry: 0x71a3d9d0 | Size: 10 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void acEfaQaUMLrCGEjTYbgqAi_MBLiHUBlVIGII(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: cpDlXRqiFNNgMcxKm_NASHHflBcNl_KbEiQe
// Entry: 0x71a3da8c | Size: 10 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void cpDlXRqiFNNgMcxKm_NASHHflBcNl_KbEiQe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: jWTDcsYCRYcBYVGTgseyFGKQOwOSYBJHeGtQcB
// Entry: 0x71a3db48 | Size: 10 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void jWTDcsYCRYcBYVGTgseyFGKQOwOSYBJHeGtQcB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: YFzxLNyhVGZcspMIbtoXBZpzNyhdzpXFsUzswT
// Entry: 0x71a3dc04 | Size: 10 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void YFzxLNyhVGZcspMIbtoXBZpzNyhdzpXFsUzswT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: BpEFhxsdziXJWduMHnpaUiSFqLIY_yJbeEOz
// Entry: 0x71a3dcc0 | Size: 10 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void BpEFhxsdziXJWduMHnpaUiSFqLIY_yJbeEOz(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: XptkNwXvn_oAnywcQhQfyGwaliVMjfFFwuxG
// Entry: 0x71a3dd7c | Size: 10 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void XptkNwXvn_oAnywcQhQfyGwaliVMjfFFwuxG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: qTaThtFfaoNyslbRvDMsOlcdt_HlKjGImsRe
// Entry: 0x71a3de38 | Size: 10 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void qTaThtFfaoNyslbRvDMsOlcdt_HlKjGImsRe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: RCijBcIqjQfcoQakdPEQZuOPOELJpjWU_QX
// Entry: 0x71a3def4 | Size: 10 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void RCijBcIqjQfcoQakdPEQZuOPOELJpjWU_QX(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: WOGmCMTtLkfIRRhBQSRPUAXPufsKAhJZI
// Entry: 0x71a3dfb0 | Size: 10 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void WOGmCMTtLkfIRRhBQSRPUAXPufsKAhJZI(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: REMnMZGCOIAaYQYTZbmmrTNLSdzooqORqRFDvPi
// Entry: 0x71a3e06c | Size: 10 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void REMnMZGCOIAaYQYTZbmmrTNLSdzooqORqRFDvPi(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: foubgapzqZRDHQZSzEFaAzwuJzOnFy_zxvWsSABmO
// Entry: 0x71a3e128 | Size: 10 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void foubgapzqZRDHQZSzEFaAzwuJzOnFy_zxvWsSABmO(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: pJpedpthteLjROnPeUUexycQfVZdwGlTpAU_LbEh
// Entry: 0x71a3e1e4 | Size: 10 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void pJpedpthteLjROnPeUUexycQfVZdwGlTpAU_LbEh(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: MLLRyrWirCdOJUlbAmCEuBFGHuhelOedzHFgDYw
// Entry: 0x71a3e2a0 | Size: 10 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void MLLRyrWirCdOJUlbAmCEuBFGHuhelOedzHFgDYw(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: SUrDDzgPlcATFftNSIHG_lIkrrCvSJHirATEqOhG
// Entry: 0x71a3e35c | Size: 10 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void SUrDDzgPlcATFftNSIHG_lIkrrCvSJHirATEqOhG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: hgtnVtxeAFGFERJBMYdAzlnBtXXbqKWKO_JKTuDMJREjGCpQL
// Entry: 0x71a3e610 | Size: 4 bytes
// =========================================================================

void hgtnVtxeAFGFERJBMYdAzlnBtXXbqKWKO_JKTuDMJREjGCpQL(void)

{
  thunk_qPmRLPsHr_QnKToKtjJHxTRwxyTNbnHMFdgbqQDigs();
  return;
}


// =========================================================================
// Function: cump_tgVFofENRyKbhIYfpgmOZHNHHas_lUDvzzBgqkreWQvWiv
// Entry: 0x71a3e648 | Size: 4 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void cump_tgVFofENRyKbhIYfpgmOZHNHHas_lUDvzzBgqkreWQvWiv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: oNrPQREQEhE_ZjDYArKcXMwkHDtfLztFsiXN
// Entry: 0x71a3e6b0 | Size: 6 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void oNrPQREQEhE_ZjDYArKcXMwkHDtfLztFsiXN(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: kjluKZnmkxprjqqIgKMHXYdkkTkkpPRcBdtWLgKkFxNjQdHKRcMUYxaZaxjCNzgIX
// Entry: 0x71a3e938 | Size: 62 bytes
// =========================================================================

bool kjluKZnmkxprjqqIgKMHXYdkkTkkpPRcBdtWLgKkFxNjQdHKRcMUYxaZaxjCNzgIX
               (int param_1,int param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x40);
  if (iVar2 != 0) {
    param_4 = *(int *)(param_2 + 0x40);
  }
  if (iVar2 == 0 || iVar2 == param_4) {
    iVar2 = *(int *)(param_1 + 0x54);
    if (iVar2 != 0) {
      param_4 = *(int *)(param_2 + 0x54);
    }
    if (iVar2 == 0 || iVar2 == param_4) {
      iVar2 = *(int *)(param_1 + 0x38);
      if (iVar2 != 0) {
        param_4 = *(int *)(param_2 + 0x38);
      }
      if (iVar2 == 0 || iVar2 == param_4) {
        if (*(int *)(param_1 + 0x3c) == 0) {
          bVar1 = true;
        }
        else {
          bVar1 = *(int *)(param_1 + 0x3c) == *(int *)(param_2 + 0x3c);
        }
        return bVar1;
      }
    }
  }
  return false;
}


// =========================================================================
// Function: mbDKLBLciFiHaYSrLGRTIIVQTpGtFxbeTcRxfwyjNklfNpNXpaAAhpidddyp
// Entry: 0x71a3e990 | Size: 18 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void mbDKLBLciFiHaYSrLGRTIIVQTpGtFxbeTcRxfwyjNklfNpNXpaAAhpidddyp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: xuvBHv_durVxJBMLcJeZpUzWdNAWYDW_UeSOMxHppdYgRbXIdGujKwVFjpSbuZCHlBNf
// Entry: 0x71a3ea44 | Size: 88 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void xuvBHv_durVxJBMLcJeZpUzWdNAWYDW_UeSOMxHppdYgRbXIdGujKwVFjpSbuZCHlBNf(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  if (iVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1[4] != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: LygwPmHkqNMnOxaqeSEdzvtunsNngxJIqxmgpNnSttuerCQ_GhnGRjmMEQMAvBZiRwcQLcooSZuLMpaSErDue_FeOZdXBLTdczZZpPnViITeXbCWjFxgNgoBTcJmwsjnNDIoJKljGSYrbqZBpnYveCnLSlKfVUcBdqEzOdoVdxybWYccKTpbDRC
// Entry: 0x71a3f8bc | Size: 12 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void LygwPmHkqNMnOxaqeSEdzvtunsNngxJIqxmgpNnSttuerCQ_GhnGRjmMEQMAvBZiRwcQLcooSZuLMpaSErDue_FeOZdXBLTdczZZpPnViITeXbCWjFxgNgoBTcJmwsjnNDIoJKljGSYrbqZBpnYveCnLSlKfVUcBdqEzOdoVdxybWYccKTpbDRC
               (undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: vYtxbGI_sNxbIphNckjERwGSGASJm_kniggrsWyIq_NDLeCdPHYESVoXEmJitohQwHUPvjDmYMnoWPKqWBtZ_tmvYAiIsDMRUv
// Entry: 0x71a3f964 | Size: 28 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void vYtxbGI_sNxbIphNckjERwGSGASJm_kniggrsWyIq_NDLeCdPHYESVoXEmJitohQwHUPvjDmYMnoWPKqWBtZ_tmvYAiIsDMRUv
               (void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: BuhzVEeXdGBXIPbMcFUXFjfJpSqmiZrXXeqeMXUEE
// Entry: 0x71a3fd28 | Size: 30 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

undefined1 * BuhzVEeXdGBXIPbMcFUXFjfJpSqmiZrXXeqeMXUEE(void)

{
  DataMemoryBarrier(0x1b);
  if ((DAT_712046f8 & 1) != 0) {
    return &DAT_712046e4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: KkoRKxjPhXyHMOSgNCBAj_eyffXmvAodrcDfTdUeZHkN
// Entry: 0x71a3fe4c | Size: 38 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void KkoRKxjPhXyHMOSgNCBAj_eyffXmvAodrcDfTdUeZHkN(int param_1,code *param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = *(int *)(param_1 + 0x10);
  UNRECOVERED_JUMPTABLE = param_2;
  if (iVar1 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0x110);
  }
  if (iVar1 != 0 && UNRECOVERED_JUMPTABLE != (code *)0x0) {
    uVar2 = 1;
    if (param_2 != (code *)0x0) {
      uVar2 = 2;
    }
                    /* WARNING: Could not recover jumptable at 0x71a3fe82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar2);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: eCTwQfFbaDVJQMpirngGcASZyjpMDLcWGKorUcxJuxywPZRJiLktqsTCJtwNXDVkXTNWBebMRhpuBSAeAzKuEilZQFaCDMGzoJzRz_qFGWUTWotxQNcXE
// Entry: 0x71a3febc | Size: 34 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void eCTwQfFbaDVJQMpirngGcASZyjpMDLcWGKorUcxJuxywPZRJiLktqsTCJtwNXDVkXTNWBebMRhpuBSAeAzKuEilZQFaCDMGzoJzRz_qFGWUTWotxQNcXE
               (void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: eMjElFWZdJlojJITSOoSpvQmBFvXUHlDkdWSwgBtxjnLqqWSABGyssItEvWRDEdEFKojGWxoimqoSLkBXNEI
// Entry: 0x71a400d0 | Size: 72 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void eMjElFWZdJlojJITSOoSpvQmBFvXUHlDkdWSwgBtxjnLqqWSABGyssItEvWRDEdEFKojGWxoimqoSLkBXNEI
               (undefined4 param_1,undefined4 *param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  if (piVar4 != (int *)0x0) {
    piVar2 = piVar4 + 1;
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(piVar2);
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    DataMemoryBarrier(0x1b);
    if (iVar3 == 0) {
      (**(code **)(*piVar4 + 8))(piVar4);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: JvBCFNYEMABxCNJpmgjEYRFHgApSkGGSx
// Entry: 0x71a40314 | Size: 396 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

undefined4 * JvBCFNYEMABxCNJpmgjEYRFHgApSkGGSx(undefined4 *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar4 = *(undefined4 *)(param_2 + 4);
  uVar5 = *(undefined4 *)(param_2 + 8);
  iVar2 = *(int *)(param_2 + 0xc);
  param_1[3] = iVar2;
  param_1[2] = uVar5;
  *param_1 = &DAT_70b10294;
  param_1[1] = uVar4;
  if (iVar2 != 0) {
    piVar3 = (int *)(iVar2 + 4);
    do {
      ExclusiveAccess(piVar3);
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = *piVar3 + 1;
  }
  uVar4 = *(undefined4 *)(param_2 + 0x10);
  iVar2 = *(int *)(param_2 + 0x18);
  param_1[5] = *(undefined4 *)(param_2 + 0x14);
  param_1[4] = uVar4;
  param_1[6] = iVar2;
  if (iVar2 != 0) {
    piVar3 = (int *)(iVar2 + 4);
    do {
      ExclusiveAccess(piVar3);
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = *piVar3 + 1;
  }
  uVar4 = *(undefined4 *)(param_2 + 0x1c);
  iVar2 = *(int *)(param_2 + 0x24);
  param_1[8] = *(undefined4 *)(param_2 + 0x20);
  param_1[7] = uVar4;
  param_1[9] = iVar2;
  if (iVar2 != 0) {
    piVar3 = (int *)(iVar2 + 4);
    do {
      ExclusiveAccess(piVar3);
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = *piVar3 + 1;
  }
  iVar2 = *(int *)(param_2 + 0x2c);
  param_1[10] = *(undefined4 *)(param_2 + 0x28);
  param_1[0xb] = iVar2;
  if (iVar2 != 0) {
    piVar3 = (int *)(iVar2 + 4);
    do {
      ExclusiveAccess(piVar3);
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = *piVar3 + 1;
  }
  iVar2 = *(int *)(param_2 + 0x34);
  param_1[0xc] = *(undefined4 *)(param_2 + 0x30);
  param_1[0xd] = iVar2;
  if (iVar2 != 0) {
    piVar3 = (int *)(iVar2 + 4);
    do {
      ExclusiveAccess(piVar3);
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = *piVar3 + 1;
  }
  uVar7 = *(undefined8 *)(param_2 + 0x40);
  uVar8 = *(undefined8 *)(param_2 + 0x48);
  uVar9 = *(undefined8 *)(param_2 + 0x50);
  uVar10 = *(undefined8 *)(param_2 + 0x58);
  uVar11 = *(undefined8 *)(param_2 + 0x60);
  uVar12 = *(undefined8 *)(param_2 + 0x68);
  uVar13 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x10) = uVar7;
  *(undefined8 *)(param_1 + 0x12) = uVar8;
  *(undefined8 *)(param_1 + 0x14) = uVar9;
  *(undefined8 *)(param_1 + 0x16) = uVar10;
  *(undefined8 *)(param_1 + 0x18) = uVar11;
  *(undefined8 *)(param_1 + 0x1a) = uVar12;
  *(undefined8 *)(param_1 + 0x1c) = uVar13;
  if ((*(byte *)(param_2 + 0x78) & 1) == 0) {
    uVar7 = *(undefined8 *)(param_2 + 0x78);
    param_1[0x20] = *(undefined4 *)(param_2 + 0x80);
    *(undefined8 *)(param_1 + 0x1e) = uVar7;
  }
  else {
    FUN_712f6d58(param_1 + 0x1e,*(undefined4 *)(param_2 + 0x80),*(undefined4 *)(param_2 + 0x7c));
  }
  if ((*(byte *)(param_2 + 0x84) & 1) == 0) {
    uVar7 = *(undefined8 *)(param_2 + 0x84);
    param_1[0x23] = *(undefined4 *)(param_2 + 0x8c);
    *(undefined8 *)(param_1 + 0x21) = uVar7;
  }
  else {
    FUN_712f6d58(param_1 + 0x21,*(undefined4 *)(param_2 + 0x8c),*(undefined4 *)(param_2 + 0x88));
  }
  uVar7 = *(undefined8 *)(param_2 + 0x98);
  uVar8 = *(undefined8 *)(param_2 + 0x9c);
  uVar9 = *(undefined8 *)(param_2 + 0xa4);
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x26) = uVar7;
  *(undefined8 *)(param_1 + 0x27) = uVar8;
  *(undefined8 *)(param_1 + 0x29) = uVar9;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  iVar2 = *(int *)(param_2 + 0xb0);
  iVar6 = *(int *)(param_2 + 0xac);
  param_1[0x2d] = 0;
  if (iVar2 == iVar6) {
    return param_1;
  }
  if (iVar2 - iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_71a0f1b4(param_1 + 0x2b);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: ZbiUXrbTAyLwgwQDmpxyEFZsVFg
// Entry: 0x71a40904 | Size: 46 bytes
// =========================================================================

undefined4 * ZbiUXrbTAyLwgwQDmpxyEFZsVFg(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[1];
  *param_1 = &DAT_70b12014;
  param_1[1] = 0;
  if (piVar1 == (int *)0x0) {
    return param_1;
  }
  (**(code **)(*piVar1 + 4))(piVar1);
  return param_1;
}


// =========================================================================
// Function: fVyJxpYtcyNqkVUuCZmgYMVmKmE
// Entry: 0x71a4096c | Size: 50 bytes
// =========================================================================

void fVyJxpYtcyNqkVUuCZmgYMVmKmE(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[1];
  *param_1 = &DAT_70b12014;
  param_1[1] = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: VJLPSUEFnxYZtgQBYIOsWPibApkmBkuqTIRBGjicyTQnDP_bwmbfvstLyjY
// Entry: 0x71a40a10 | Size: 10 bytes
// =========================================================================

void VJLPSUEFnxYZtgQBYIOsWPibApkmBkuqTIRBGjicyTQnDP_bwmbfvstLyjY(int param_1)

{
  thunk_dktZnGQkwfcCRRSpncoTSSMfMIWOULStiUiJwTLbouLvuWpDPHfQEqpNjTsVYbkBLYTKmjZBp
            (*(undefined4 *)(param_1 + 4));
  return;
}


// =========================================================================
// Function: aMQenHMKsqBzraFtAiklHUExqwGAbP
// Entry: 0x71a40a4c | Size: 36 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void aMQenHMKsqBzraFtAiklHUExqwGAbP(undefined2 *param_1)

{
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: x_joTkHLYHBlid_hsWbGCaQCsTvf_QurQixGjgNmwzLa
// Entry: 0x71a40c84 | Size: 22 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

undefined4 x_joTkHLYHBlid_hsWbGCaQCsTvf_QurQixGjgNmwzLa(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}


// =========================================================================
// Function: sjgJmtyjdWPeovjJXnFriXvwdbXfoMlXOqAOaDShF
// Entry: 0x71a40e84 | Size: 30 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

undefined4 sjgJmtyjdWPeovjJXnFriXvwdbXfoMlXOqAOaDShF(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0xfffffc87;
}


// =========================================================================
// Function: RlcnONWZkQdIbT_WbXwWDwLDQMTXXvhtydl_mZzpqc_iEHlAEYPGjcOqohkUTBPCgkVOTGXpWNtSnVyozBKlMwkhreWzXChpMQIm_zRyuYZWSckYYqjpjyx_pkKtunNEkYTTmePlILqiWjTiQnEEvYWTxiKYqBMOVHIkPUFAVJFwpbcTfiQnn__NFCxrqTBBBHtGIoDEWjgBVRdNUhwYpsq
// Entry: 0x71a4116c | Size: 262 bytes
// =========================================================================

int * RlcnONWZkQdIbT_WbXwWDwLDQMTXXvhtydl_mZzpqc_iEHlAEYPGjcOqohkUTBPCgkVOTGXpWNtSnVyozBKlMwkhreWzXChpMQIm_zRyuYZWSckYYqjpjyx_pkKtunNEkYTTmePlILqiWjTiQnEEvYWTxiKYqBMOVHIkPUFAVJFwpbcTfiQnn__NFCxrqTBBBHtGIoDEWjgBVRdNUhwYpsq
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
  if (piVar5 == param_2) {
LAB_71a4118a:
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
LAB_71a4125e:
          *param_3 = piVar5;
          return piVar5;
        }
        do {
          while (piVar3 = piVar1, piVar3[4] <= iVar6) {
            param_2 = piVar5;
            if (iVar6 <= piVar3[4]) goto LAB_71a41202;
            param_2 = piVar3 + 1;
            piVar1 = (int *)*param_2;
            piVar5 = param_2;
            if ((int *)*param_2 == (int *)0x0) goto LAB_71a41202;
          }
          piVar1 = (int *)*piVar3;
          param_2 = piVar3;
          piVar5 = piVar3;
        } while ((int *)*piVar3 != (int *)0x0);
        goto LAB_71a41202;
      }
    }
    if (piVar3 == (int *)0x0) {
      *param_3 = param_2;
    }
    else {
      *param_3 = piVar1;
      param_2 = piVar1 + 1;
    }
  }
  else {
    iVar6 = *param_5;
    if (iVar6 < param_2[4]) goto LAB_71a4118a;
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
      if (piVar4 != (int *)0x0) {
        *param_3 = piVar2;
        return piVar2;
      }
      *param_3 = param_2;
      return param_2 + 1;
    }
    piVar1 = (int *)*piVar5;
    if ((int *)*piVar5 == (int *)0x0) goto LAB_71a4125e;
    do {
      while (piVar3 = piVar1, piVar3[4] <= iVar6) {
        param_2 = piVar5;
        if (iVar6 <= piVar3[4]) goto LAB_71a41202;
        param_2 = piVar3 + 1;
        piVar1 = (int *)*param_2;
        piVar5 = param_2;
        if ((int *)*param_2 == (int *)0x0) goto LAB_71a41202;
      }
      piVar1 = (int *)*piVar3;
      piVar5 = piVar3;
      param_2 = piVar3;
    } while ((int *)*piVar3 != (int *)0x0);
LAB_71a41202:
    *param_3 = piVar3;
  }
  return param_2;
}


// =========================================================================
// Function: FUN_71a4128a
// Entry: 0x71a4128a | Size: 330 bytes
// =========================================================================

void FUN_71a4128a(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  *(bool *)(param_2 + 3) = param_2 == param_1;
  if (param_2 == param_1) {
    return;
  }
  do {
    piVar6 = (int *)param_2[2];
    if ((char)piVar6[3] != '\0') {
      return;
    }
    piVar7 = (int *)piVar6[2];
    piVar5 = (int *)*piVar7;
    if (piVar5 == piVar6) {
      if ((piVar7[1] == 0) || (piVar5 = (int *)(piVar7[1] + 0xc), *(char *)piVar5 != '\0')) {
        piVar5 = piVar6;
        if ((int *)*piVar6 != param_2) {
          piVar1 = (int *)piVar6[1];
          iVar2 = *piVar1;
          piVar6[1] = iVar2;
          if (iVar2 != 0) {
            *(int **)(iVar2 + 8) = piVar6;
            piVar7 = (int *)piVar6[2];
            piVar5 = (int *)*piVar7;
          }
          piVar1[2] = (int)piVar7;
          if (piVar5 != piVar6) {
            piVar7 = piVar7 + 1;
          }
          *piVar7 = (int)piVar1;
          piVar6[2] = (int)piVar1;
          piVar7 = (int *)piVar1[2];
          *piVar1 = (int)piVar6;
          piVar6 = piVar1;
          piVar5 = (int *)*piVar7;
        }
        *(undefined1 *)(piVar6 + 3) = 1;
        iVar2 = piVar5[1];
        *(undefined1 *)(piVar7 + 3) = 0;
        *piVar7 = iVar2;
        if (iVar2 != 0) {
          *(int **)(iVar2 + 8) = piVar7;
        }
        puVar3 = (undefined4 *)piVar7[2];
        piVar5[2] = (int)puVar3;
        puVar4 = puVar3 + 1;
        if ((int *)*puVar3 == piVar7) {
          puVar4 = puVar3;
        }
        *puVar4 = piVar5;
        piVar7[2] = (int)piVar5;
        piVar5[1] = (int)piVar7;
        return;
      }
    }
    else if ((piVar5 == (int *)0x0) || (piVar5 = piVar5 + 3, (char)*piVar5 != '\0')) {
      if ((int *)*piVar6 == param_2) {
        iVar2 = param_2[1];
        *piVar6 = iVar2;
        if (iVar2 != 0) {
          *(int **)(iVar2 + 8) = piVar6;
          piVar7 = (int *)piVar6[2];
        }
        param_2[2] = (int)piVar7;
        piVar5 = piVar7 + 1;
        if ((int *)*piVar7 == piVar6) {
          piVar5 = piVar7;
        }
        *piVar5 = (int)param_2;
        piVar6[2] = (int)param_2;
        piVar7 = (int *)param_2[2];
        param_2[1] = (int)piVar6;
        piVar6 = param_2;
      }
      piVar5 = (int *)piVar7[1];
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(piVar7 + 3) = 0;
      iVar2 = *piVar5;
      piVar7[1] = iVar2;
      if (iVar2 != 0) {
        *(int **)(iVar2 + 8) = piVar7;
      }
      puVar3 = (undefined4 *)piVar7[2];
      piVar5[2] = (int)puVar3;
      puVar4 = puVar3 + 1;
      if ((int *)*puVar3 == piVar7) {
        puVar4 = puVar3;
      }
      *puVar4 = piVar5;
      piVar7[2] = (int)piVar5;
      *piVar5 = (int)piVar7;
      return;
    }
    *(undefined1 *)(piVar6 + 3) = 1;
    *(bool *)(piVar7 + 3) = piVar7 == param_1;
    *(char *)piVar5 = '\x01';
    param_2 = piVar7;
    if (piVar7 == param_1) {
      return;
    }
  } while( true );
}


// =========================================================================
// Function: FUN_71a413ec
// Entry: 0x71a413ec | Size: 6 bytes
// =========================================================================

void FUN_71a413ec(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  FUN_71a413ec(param_1,*param_2);
  FUN_71a413ec(param_1,param_2[1]);
  thunk_qNQrlu(param_2);
  return;
}


// =========================================================================
// Function: FUN_71a413f2
// Entry: 0x71a413f2 | Size: 34 bytes
// =========================================================================

void FUN_71a413f2(undefined4 param_1,undefined4 *param_2)

{
  FUN_71a413ec(param_1,*param_2);
  FUN_71a413ec(param_1,param_2[1]);
  thunk_qNQrlu(param_2);
  return;
}


// =========================================================================
// Function: nJtyCrozlDXjUksNLQtDFfVObTcN_UbHsaMmFRBwrOpDAyDCVrhCBiUdurKhpeWygFGsTCZKqCXsxtUlxA_UPhWpkgadkFfbHfihtKfo_RaoLUiGabyUwhVXXDLgkBtGmUbeQkRlia
// Entry: 0x71a41480 | Size: 4 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void nJtyCrozlDXjUksNLQtDFfVObTcN_UbHsaMmFRBwrOpDAyDCVrhCBiUdurKhpeWygFGsTCZKqCXsxtUlxA_UPhWpkgadkFfbHfihtKfo_RaoLUiGabyUwhVXXDLgkBtGmUbeQkRlia
               (void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: oQOavzKFwjDNLWvhbiYbfpTlAvgWhoJtR_sR_KAkKYLe_pJmpQZeAlEF
// Entry: 0x71a417f8 | Size: 10 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void oQOavzKFwjDNLWvhbiYbfpTlAvgWhoJtR_sR_KAkKYLe_pJmpQZeAlEF(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: yVQlCyjjQtwGimrmmEZZnjRMyAQZEPfhMLy_WevYupjxjMEPj
// Entry: 0x71a41a0c | Size: 66 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void yVQlCyjjQtwGimrmmEZZnjRMyAQZEPfhMLy_WevYupjxjMEPj(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: DSiQDKLrbRgELzM_zPVpsUlmxKUOcJGBZBMtaJgdAZRHruhpd
// Entry: 0x71a41c1c | Size: 46 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

int DSiQDKLrbRgELzM_zPVpsUlmxKUOcJGBZBMtaJgdAZRHruhpd(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    return param_1;
  }
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != iVar2) {
    if (*(int *)(iVar1 + -0xc) != 0) {
      *(int *)(iVar1 + -8) = *(int *)(iVar1 + -0xc);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(param_1 + 8) = iVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: OhLdNABPiPduRNqULasuEGcODRnmefgBjsMQwf
// Entry: 0x71a41caa | Size: 2 bytes
// =========================================================================

void OhLdNABPiPduRNqULasuEGcODRnmefgBjsMQwf(void)

{
  return;
}


// =========================================================================
// Function: qPmRLPsHr_QnKToKtjJHxTRwxyTNbnHMFdgbqQDigs
// Entry: 0x71a41d4c | Size: 10 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void qPmRLPsHr_QnKToKtjJHxTRwxyTNbnHMFdgbqQDigs(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: kbgPBmIuE_XWnKpgLpWWOaInEisuwsqnqNZEsJBSjoFtrJAODzNOpvBMNCpWgVkatVQNyVlWIXI
// Entry: 0x71a41dd8 | Size: 72 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void kbgPBmIuE_XWnKpgLpWWOaInEisuwsqnqNZEsJBSjoFtrJAODzNOpvBMNCpWgVkatVQNyVlWIXI(void)

{
  if (DAT_70136554 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  DataMemoryBarrier(0x1b);
  if ((DAT_71204728 & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: mkwfnSbijUmBWMmtAsKONhCDYkiegPTcwyLCMxRcQT
// Entry: 0x71a42320 | Size: 30 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

undefined * mkwfnSbijUmBWMmtAsKONhCDYkiegPTcwyLCMxRcQT(void)

{
  DataMemoryBarrier(0x1b);
  if ((DAT_71204728 & 1) != 0) {
    return &DAT_71204718;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: rXKrtPeJbN_fzwaQNPXdblYvYaVfrVgrdGukTHAfAotwRYPEaqpldZczdGxekkvtV
// Entry: 0x71a42460 | Size: 38 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void rXKrtPeJbN_fzwaQNPXdblYvYaVfrVgrdGukTHAfAotwRYPEaqpldZczdGxekkvtV
               (undefined1 *param_1,undefined4 param_2,int param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  return;
}


// =========================================================================
// Function: sXmqql_kYVYnsnJGTxxwKgaWyluSwaFljzrcnTFlWhjqHMdXcWESvjCS_CqzAcsdLnih
// Entry: 0x71a42c3c | Size: 94 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void sXmqql_kYVYnsnJGTxxwKgaWyluSwaFljzrcnTFlWhjqHMdXcWESvjCS_CqzAcsdLnih(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x10);
  if (piVar4 != (int *)0x0) {
    piVar2 = piVar4 + 1;
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(piVar2);
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    DataMemoryBarrier(0x1b);
    if (iVar3 == 0) {
      (**(code **)(*piVar4 + 8))(piVar4);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  piVar4 = *(int **)(param_1 + 8);
  if (piVar4 == (int *)0x0) {
    return;
  }
  piVar2 = piVar4 + 1;
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(piVar2);
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  DataMemoryBarrier(0x1b);
  if (iVar3 == 0) {
    (**(code **)(*piVar4 + 8))(piVar4);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}


// =========================================================================
// Function: tQ_FOSHXATuEsswIpRZHcZkIJNHBoxHhDMxgWzeEASLEDwxBWBYaFlGxKVtEK
// Entry: 0x71a42cf8 | Size: 128 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void tQ_FOSHXATuEsswIpRZHcZkIJNHBoxHhDMxgWzeEASLEDwxBWBYaFlGxKVtEK(int param_1)

{
  uint in_fpscr;
  double dVar1;
  double dVar2;
  
  DataMemoryBarrier(0x1b);
  if ((*(byte *)(param_1 + 0xee) & 1) != 0) {
    DataMemoryBarrier(0x1b);
    if ((*(byte *)(param_1 + 0xef) & 1) == 0) {
      dVar1 = (double)VectorSignedToFloat(*(undefined4 *)(param_1 + 0xe0),
                                          (byte)(in_fpscr >> 0x16) & 3);
      dVar2 = (double)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x40),
                                          (byte)(in_fpscr >> 0x16) & 3);
      dVar2 = (dVar1 * 1000000000.0) / dVar2;
      FUN_71ba16f4(SUB84(dVar2,0),(int)((ulonglong)dVar2 >> 0x20));
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    thunk_LtJiCxoCEiwCnmUfOQVzhUeppzKsyNbrgezvOqza(param_1 + 0xf0);
    return;
  }
  DataMemoryBarrier(0x1b);
  if (((*(byte *)(param_1 + 0xee) & 1) == 0) &&
     (DataMemoryBarrier(0x1b), (*(byte *)(param_1 + 0xef) & 1) != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}


// =========================================================================
// Function: dojBH_FvIbNtilQebjVdr_yGfiNnRTGEmLrBkMVgr_NNqWjcJeSreMofPlv
// Entry: 0x71a42ec8 | Size: 60 bytes
// =========================================================================

void dojBH_FvIbNtilQebjVdr_yGfiNnRTGEmLrBkMVgr_NNqWjcJeSreMofPlv(int param_1,undefined4 param_2)

{
  uint in_fpscr;
  double dVar1;
  double dVar2;
  
  if (*(int *)(param_1 + 0xf4) == 0) {
    return;
  }
  dVar1 = (double)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  dVar2 = (double)VectorSignedToFloat(*(undefined4 *)(param_1 + 0xe0),(byte)(in_fpscr >> 0x16) & 3);
  dVar2 = dVar2 / dVar1;
  if ((int)((uint)(dVar2 < 2.0) << 0x1f) < 0) {
    thunk_DObpCAKsHjGUsdoNAK_xDiowFRqTxBITnstQnw
              (param_1 + 0xf0,param_2,SUB84(dVar2,0),(int)((ulonglong)dVar2 >> 0x20));
    return;
  }
  return;
}


// =========================================================================
// Function: StViRFZegNKnoeBqtFVEv_GdIbFmopxTidSwaYDsGNPfxPFoXEKVDEI
// Entry: 0x71a42f34 | Size: 6 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void StViRFZegNKnoeBqtFVEv_GdIbFmopxTidSwaYDsGNPfxPFoXEKVDEI(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: kuQLdOYLQunzqLUqBxkhTWjEiGgJetpYnL
// Entry: 0x71a430d0 | Size: 1144 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int kuQLdOYLQunzqLUqBxkhTWjEiGgJetpYnL(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int extraout_r1;
  int extraout_r1_00;
  undefined4 uVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  code *pcVar7;
  code *pcVar8;
  code *extraout_r3;
  code *extraout_r3_00;
  code *extraout_r3_01;
  code *extraout_r3_02;
  code *extraout_r3_03;
  code *extraout_r3_04;
  code *extraout_r3_05;
  code *extraout_r3_06;
  code *extraout_r3_07;
  code *extraout_r3_08;
  uint uVar9;
  bool bVar10;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  iStack_24 = _ext___stack_chk_guard;
  DataMemoryBarrier(0x1b);
  if (*(int *)(param_1 + 0x114) != 0) {
    iVar2 = -0x37f;
    goto LAB_71a43592;
  }
  iVar2 = (*(code *)*DAT_71204714)(&uStack_28);
  if (iVar2 != 0) goto LAB_71a43592;
  iVar3 = *(int *)(param_1 + 0x44);
  iVar2 = iVar3;
  if (DAT_70136554 != '\0') {
    if (*(int *)(param_1 + 0x5c) == 0xc) {
      iVar2 = 0x1000;
    }
    if (0xfff < iVar3) {
      iVar2 = iVar3;
    }
    if (iVar3 == 0) {
      iVar2 = iVar3;
    }
    if (*(int *)(param_1 + 0x58) != 1) {
      iVar2 = iVar3;
    }
  }
  (*(code *)DAT_71204714[2])(uStack_28,iVar2);
  iVar2 = extraout_r1;
  if ((code *)DAT_71204714[0xf] != (code *)0x0) {
    (*(code *)DAT_71204714[0xf])(uStack_28,*(undefined4 *)(param_1 + 0x6c));
    iVar3 = 0;
    if (DAT_70136554 != '\0') {
      iVar3 = *(int *)(param_1 + 0x6c);
    }
    iVar2 = extraout_r1_00;
    if (DAT_70136554 != '\0' && iVar3 != -1) {
      iVar3 = *(int *)(param_1 + 0x58);
      bVar10 = iVar3 == 0;
      if (bVar10) {
        iVar3 = *(int *)(param_1 + 0x5c);
      }
      if (bVar10 && iVar3 == 0xc) {
        *(undefined4 *)(param_1 + 0x5c) = 10;
      }
    }
  }
  pcVar7 = (code *)DAT_71204714[0xb];
  if (pcVar7 != (code *)0x0) {
    iVar2 = *(int *)(param_1 + 0x4c);
  }
  if (pcVar7 == (code *)0x0 || iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x3c);
    pcVar7 = (code *)DAT_71204714[3];
  }
  (*pcVar7)(uStack_28,iVar2);
  if (*(undefined4 **)(param_1 + 0xac) == *(undefined4 **)(param_1 + 0xb0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = **(undefined4 **)(param_1 + 0xac);
  }
  (*(code *)DAT_71204714[4])(uStack_28,uVar4);
  (*(code *)DAT_71204714[5])(uStack_28,*(undefined4 *)(param_1 + 0x58));
  (*(code *)DAT_71204714[6])(uStack_28,*(undefined4 *)(param_1 + 0x54));
  (*(code *)DAT_71204714[9])(uStack_28,*(undefined4 *)(param_1 + 0x40));
  (*(code *)DAT_71204714[10])(uStack_28,*(undefined4 *)(param_1 + 0x50));
  (*(code *)DAT_71204714[8])(uStack_28,*(undefined4 *)(param_1 + 0x5c));
  pcVar7 = extraout_r3;
  if ((code *)DAT_71204714[0xc] != (code *)0x0) {
    (*(code *)DAT_71204714[0xc])(uStack_28,*(undefined4 *)(param_1 + 0x60));
    pcVar7 = extraout_r3_00;
  }
  if ((code *)DAT_71204714[0xd] != (code *)0x0) {
    (*(code *)DAT_71204714[0xd])(uStack_28,*(undefined4 *)(param_1 + 100));
    pcVar7 = extraout_r3_01;
  }
  if (DAT_71204714[0xe] != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((code *)DAT_71204714[0x12] != (code *)0x0) {
    uVar9 = *(uint *)(param_1 + 0x7c);
    pcVar7 = (code *)((uint)*(byte *)(param_1 + 0x78) * -0x80000000);
    if (pcVar7 == (code *)0x0) {
      uVar9 = (uint)(*(byte *)(param_1 + 0x78) >> 1);
    }
    if (uVar9 != 0) {
      iVar2 = *(int *)(param_1 + 0x80);
      if (pcVar7 == (code *)0x0) {
        iVar2 = param_1 + 0x79;
      }
      (*(code *)DAT_71204714[0x12])(uStack_28,iVar2);
      pcVar7 = extraout_r3_02;
    }
  }
  if ((code *)DAT_71204714[0x13] != (code *)0x0) {
    uVar9 = *(uint *)(param_1 + 0x88);
    pcVar7 = (code *)((uint)*(byte *)(param_1 + 0x84) * -0x80000000);
    if (pcVar7 == (code *)0x0) {
      uVar9 = (uint)(*(byte *)(param_1 + 0x84) >> 1);
    }
    if (uVar9 != 0) {
      iVar2 = *(int *)(param_1 + 0x8c);
      if (pcVar7 == (code *)0x0) {
        iVar2 = param_1 + 0x85;
      }
      (*(code *)DAT_71204714[0x13])(uStack_28,iVar2);
      pcVar7 = extraout_r3_03;
    }
  }
  iVar2 = *(int *)(param_1 + 0x58);
  if (((code *)DAT_71204714[0x11] != (code *)0x0) && (iVar2 == 0)) {
    (*(code *)DAT_71204714[0x11])(uStack_28,*(undefined4 *)(param_1 + 0x70));
    iVar2 = *(int *)(param_1 + 0x58);
    pcVar7 = extraout_r3_04;
  }
  if ((((code *)DAT_71204714[0x10] != (code *)0x0) && (iVar2 == 1)) &&
     (*(int *)(param_1 + 0x74) != 0)) {
    (*(code *)DAT_71204714[0x10])(uStack_28,*(int *)(param_1 + 0x74) == 2);
    pcVar7 = extraout_r3_05;
  }
  if ((code *)DAT_71204714[0x14] != (code *)0x0) {
    (*(code *)DAT_71204714[0x14])(uStack_28,*(undefined1 *)(param_1 + 0x90));
    pcVar7 = extraout_r3_06;
  }
  pcVar8 = (code *)DAT_71204714[0x15];
  if (pcVar8 == (code *)0x0) {
    *(undefined4 *)(param_1 + 0x94) = 2;
  }
  else {
    if (*(int *)(param_1 + 0x94) == 0) {
      *(undefined4 *)(param_1 + 0x94) = 2;
    }
    (*pcVar8)(uStack_28);
    pcVar7 = extraout_r3_07;
  }
  if (*(int *)(param_1 + 4) != 0 || *(int *)(param_1 + 0x10) != 0) {
    if (*(int *)(param_1 + 4) == 0) {
      if (*(int *)(param_1 + 0x10) != 0) {
        pcVar7 = (code *)DAT_71204714[0x1a];
        if (pcVar7 == (code *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar5 = &DAT_71a43c1d;
        goto LAB_71a432d6;
      }
    }
    else {
      puVar5 = &DAT_71a43899;
      pcVar7 = (code *)DAT_71204714[0x16];
LAB_71a432d6:
      (*pcVar7)(uStack_28,puVar5,param_1);
    }
    (*(code *)DAT_71204714[7])(uStack_28,*(undefined4 *)(param_1 + 0x38));
    if (*(int *)(param_1 + 0x1c) == 0) {
      *(int *)(param_1 + 0x1c) = param_1 + 0x128;
    }
    (*(code *)DAT_71204714[0x17])(uStack_28,0x71a41dd9,param_1);
    pcVar7 = extraout_r3_08;
  }
  bVar10 = *(int *)(param_1 + 0x28) != 0;
  if (bVar10) {
    pcVar7 = (code *)DAT_71204714[0x18];
  }
  if (bVar10 && pcVar7 != (code *)0x0) {
    (*pcVar7)(uStack_28,0x71a43f8d,param_1);
  }
  if ((code *)DAT_71204714[0x19] != (code *)0x0) {
    (*(code *)DAT_71204714[0x19])(uStack_28,0x71a44415,param_1);
  }
  uStack_2c = 0;
  iVar2 = (*(code *)DAT_71204714[1])(uStack_28,&uStack_2c);
  DataMemoryBarrier(0x1b);
  *(undefined4 *)(param_1 + 0x114) = uStack_2c;
  DataMemoryBarrier(0x1b);
  if (iVar2 == 0) {
    DataMemoryBarrier(0x1b);
    uVar4 = (*(code *)DAT_71204714[0x24])(*(undefined4 *)(param_1 + 0x114));
    puVar6 = DAT_71204714;
    *(undefined4 *)(param_1 + 0x3c) = uVar4;
    DataMemoryBarrier(0x1b);
    uVar4 = (*(code *)puVar6[0x2b])(*(undefined4 *)(param_1 + 0x114));
    puVar6 = DAT_71204714;
    *(undefined4 *)(param_1 + 0x40) = uVar4;
    DataMemoryBarrier(0x1b);
    uVar4 = (*(code *)puVar6[0x1c])(*(undefined4 *)(param_1 + 0x114));
    puVar6 = DAT_71204714;
    *(undefined4 *)(param_1 + 0x54) = uVar4;
    DataMemoryBarrier(0x1b);
    uVar4 = (*(code *)puVar6[0x2c])(*(undefined4 *)(param_1 + 0x114));
    puVar6 = DAT_71204714;
    *(undefined4 *)(param_1 + 0x50) = uVar4;
    DataMemoryBarrier(0x1b);
    uVar4 = (*(code *)puVar6[0x2a])(*(undefined4 *)(param_1 + 0x114));
    puVar6 = DAT_71204714;
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    DataMemoryBarrier(0x1b);
    uVar4 = (*(code *)puVar6[0x27])(*(undefined4 *)(param_1 + 0x114));
    puVar6 = DAT_71204714;
    *(undefined4 *)(param_1 + 0x44) = uVar4;
    DataMemoryBarrier(0x1b);
    uVar4 = (*(code *)puVar6[0x26])(*(undefined4 *)(param_1 + 0x114));
    puVar6 = DAT_71204714;
    *(undefined4 *)(param_1 + 0x48) = uVar4;
    DataMemoryBarrier(0x1b);
    uVar4 = (*(code *)puVar6[0x28])(*(undefined4 *)(param_1 + 0x114));
    puVar6 = DAT_71204714;
    *(undefined4 *)(param_1 + 0xe0) = uVar4;
    if ((code *)puVar6[0x36] != (code *)0x0) {
      DataMemoryBarrier(0x1b);
      uVar4 = (*(code *)puVar6[0x36])(*(undefined4 *)(param_1 + 0x114));
      puVar6 = DAT_71204714;
      *(undefined4 *)(param_1 + 0x60) = uVar4;
    }
    if ((code *)puVar6[0x37] != (code *)0x0) {
      DataMemoryBarrier(0x1b);
      uVar4 = (*(code *)puVar6[0x37])(*(undefined4 *)(param_1 + 0x114));
      puVar6 = DAT_71204714;
      *(undefined4 *)(param_1 + 100) = uVar4;
    }
    if ((code *)puVar6[0x38] != (code *)0x0) {
      DataMemoryBarrier(0x1b);
      uVar4 = (*(code *)puVar6[0x38])(*(undefined4 *)(param_1 + 0x114));
      puVar6 = DAT_71204714;
      *(undefined4 *)(param_1 + 0x68) = uVar4;
    }
    if ((code *)puVar6[0x39] == (code *)0x0) {
      uVar4 = 0xffffffff;
    }
    else {
      DataMemoryBarrier(0x1b);
      uVar4 = (*(code *)puVar6[0x39])(*(undefined4 *)(param_1 + 0x114));
      puVar6 = DAT_71204714;
    }
    *(undefined4 *)(param_1 + 0x6c) = uVar4;
    uVar4 = 0;
    iVar2 = *(int *)(param_1 + 0x58);
    if (((code *)puVar6[0x3b] != (code *)0x0) && (iVar2 == 0)) {
      DataMemoryBarrier(0x1b);
      uVar4 = (*(code *)puVar6[0x3b])(*(undefined4 *)(param_1 + 0x114));
      iVar2 = *(int *)(param_1 + 0x58);
      puVar6 = DAT_71204714;
    }
    *(undefined4 *)(param_1 + 0x70) = uVar4;
    uVar4 = 0;
    if (((code *)puVar6[0x3a] != (code *)0x0) && (iVar2 == 1)) {
      DataMemoryBarrier(0x1b);
      iVar2 = (*(code *)puVar6[0x3a])(*(undefined4 *)(param_1 + 0x114));
      uVar4 = 1;
      puVar6 = DAT_71204714;
      if (iVar2 != 0) {
        uVar4 = 2;
      }
    }
    *(undefined4 *)(param_1 + 0x74) = uVar4;
    if ((code *)puVar6[0x3c] != (code *)0x0) {
      DataMemoryBarrier(0x1b);
      uVar4 = (*(code *)puVar6[0x3c])(*(undefined4 *)(param_1 + 0x114));
      puVar6 = DAT_71204714;
      *(undefined4 *)(param_1 + 0x4c) = uVar4;
    }
    if ((code *)puVar6[0x3d] != (code *)0x0) {
      DataMemoryBarrier(0x1b);
      uVar1 = (*(code *)puVar6[0x3d])(*(undefined4 *)(param_1 + 0x114));
      puVar6 = DAT_71204714;
      *(undefined1 *)(param_1 + 0x90) = uVar1;
    }
    if ((code *)puVar6[0x3e] != (code *)0x0) {
      DataMemoryBarrier(0x1b);
      uVar4 = (*(code *)puVar6[0x3e])(*(undefined4 *)(param_1 + 0x114));
      puVar6 = DAT_71204714;
      *(undefined4 *)(param_1 + 0x94) = uVar4;
    }
    if ((code *)puVar6[0x3f] != (code *)0x0) {
      DataMemoryBarrier(0x1b);
      uVar4 = (*(code *)puVar6[0x3f])(*(undefined4 *)(param_1 + 0x114));
      puVar6 = DAT_71204714;
      *(undefined4 *)(param_1 + 0x98) = uVar4;
    }
    if ((code *)puVar6[0x40] != (code *)0x0) {
      DataMemoryBarrier(0x1b);
      uVar4 = (*(code *)puVar6[0x40])(*(undefined4 *)(param_1 + 0x114));
      puVar6 = DAT_71204714;
      *(undefined4 *)(param_1 + 0x9c) = uVar4;
    }
    if ((code *)puVar6[0x41] != (code *)0x0) {
      DataMemoryBarrier(0x1b);
      uVar4 = (*(code *)puVar6[0x41])(*(undefined4 *)(param_1 + 0x114));
      *(undefined4 *)(param_1 + 0xa0) = uVar4;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar3 = iVar2;
  if (iVar2 == -0x380) {
    iVar3 = *(int *)(param_1 + 0x58);
  }
  if (iVar2 == -0x380 && iVar3 == 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (*(code *)DAT_71204714[0x1b])(uStack_28);
  if (0 < iVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (iVar2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_71a43592:
  if (_ext___stack_chk_guard == iStack_24) {
    return iVar2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: fMrYEwsaUBJNsAYQCTXUmEXUhHgfRYMLSWsTTJpgXAQwXUlsrPSJqCIXAiBEANBLwqQoMcLyWVckIOVaBOWU
// Entry: 0x71a43f8c | Size: 56 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void fMrYEwsaUBJNsAYQCTXUmEXUhHgfRYMLSWsTTJpgXAQwXUlsrPSJqCIXAiBEANBLwqQoMcLyWVckIOVaBOWU(void)

{
  DataMemoryBarrier(0x1b);
  if ((DAT_71204728 & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: BDpPjxccJsGsrrzxS_atsVFOWEAMCAdPr_pmhAttthNWaSCWxBrtCrpOdgLoETPv_wGl_mIWPehAQCcdOcCVpFs
// Entry: 0x71a44414 | Size: 64 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void BDpPjxccJsGsrrzxS_atsVFOWEAMCAdPr_pmhAttthNWaSCWxBrtCrpOdgLoETPv_wGl_mIWPehAQCcdOcCVpFs(void)

{
  DataMemoryBarrier(0x1b);
  if ((DAT_71204728 & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: MaXXcAhUBlBnlljtakOTIgkOytenRAjWUpopJTTXnmcXcG
// Entry: 0x71a44cb4 | Size: 236 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MaXXcAhUBlBnlljtakOTIgkOytenRAjWUpopJTTXnmcXcG(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  int *piVar7;
  uint uVar8;
  undefined4 auStack_34 [3];
  undefined4 uStack_28;
  
  uStack_28 = _ext___stack_chk_guard;
  if (*(int *)(DAT_71204714 + 0x84) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar6 = *(code **)(DAT_71204714 + 0x94);
  piVar3 = param_1 + 0x2b;
  param_1[0x2c] = *piVar3;
  DataMemoryBarrier(0x1b);
  iVar4 = (*pcVar6)(param_1[0x45]);
  if (iVar4 != 0) {
    piVar7 = (int *)param_1[0x2c];
    if ((int *)param_1[0x2d] <= piVar7) {
      iVar1 = (int)piVar7 - *piVar3 >> 2;
      uVar8 = iVar1 + 1;
      if (0x3fffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_71a0f1b4(piVar3);
      }
      uVar5 = param_1[0x2d] - *piVar3;
      uVar2 = (int)uVar5 >> 1;
      if (uVar8 < uVar2) {
        uVar8 = uVar2;
      }
      if (0x7ffffffb < uVar5) {
        uVar8 = 0x3fffffff;
      }
      if (uVar8 == 0) {
        *(int *)(iVar1 << 2) = iVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (0x3fffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_719fe2ec();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *piVar7 = iVar4;
    param_1[0x2c] = (int)(piVar7 + 1);
  }
  DataMemoryBarrier(0x1b);
  if ((int *)(param_1[0x4c] + param_1[0x4b] * 0xc) == param_1 + 0x2b) {
    (**(code **)(*param_1 + 0x14))(auStack_34,param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: DuS_gNcAikSHluLaklHdwKnpUPcCjXeNlpGpOaJxAbvJGpjyfrAWlrjkLTzNSImag
// Entry: 0x71a4523c | Size: 12 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void DuS_gNcAikSHluLaklHdwKnpUPcCjXeNlpGpOaJxAbvJGpjyfrAWlrjkLTzNSImag(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: FVbaouQQRYKCPKdmZObGvylSiTRMc_EBjeL_n
// Entry: 0x71a45380 | Size: 18 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void FVbaouQQRYKCPKdmZObGvylSiTRMc_EBjeL_n(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: XRgiBtVJOsFjJyqrgKRREZJFHkloDKrsxycotHoSwuRBhWXOzHGsIBzZKyPKVklr
// Entry: 0x71a455a4 | Size: 6 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void XRgiBtVJOsFjJyqrgKRREZJFHkloDKrsxycotHoSwuRBhWXOzHGsIBzZKyPKVklr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: XQEDOxksACrjQuZmQojkGWeykJDEILwzEUq
// Entry: 0x71a45634 | Size: 36 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void XQEDOxksACrjQuZmQojkGWeykJDEILwzEUq(void)

{
  DataMemoryBarrier(0x1b);
  if ((DAT_71204728 & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: QsKCLCHAiqTIVmWublvOGjTWvkVqjKK_HWiUaq_qSkGQ_LQxSjjaW_y_ysDCQUHwLgcMY
// Entry: 0x71a459a8 | Size: 12 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void QsKCLCHAiqTIVmWublvOGjTWvkVqjKK_HWiUaq_qSkGQ_LQxSjjaW_y_ysDCQUHwLgcMY(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: P_gIPWPFVBTUfbYg_NAGMYIKXqdMkUBZPFKdGJsLTibIfKh
// Entry: 0x71a45abc | Size: 80 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void P_gIPWPFVBTUfbYg_NAGMYIKXqdMkUBZPFKdGJsLTibIfKh(int param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  int iStack_14;
  undefined1 auStack_10 [4];
  int iStack_c;
  
  iVar3 = _ext___stack_chk_guard;
  iStack_c = _ext___stack_chk_guard;
  pbVar4 = (byte *)(param_1 + 0x111);
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(pbVar4);
    bVar1 = *pbVar4;
    bVar2 = (bool)hasExclusiveAccess(pbVar4);
  } while (!bVar2);
  *pbVar4 = 0;
  DataMemoryBarrier(0x1b);
  if ((bVar1 & 1) != 0) {
    iStack_14 = param_1;
    FUN_71a45c68(auStack_10,&LAB_71a45c44_1,&iStack_14);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (_ext___stack_chk_guard == iVar3) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: FUN_71a45c68
// Entry: 0x71a45c68 | Size: 28 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void FUN_71a45c68(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


