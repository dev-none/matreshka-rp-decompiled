// =========================================================================
// Function: XWrDNbPYDETOSCCGKLX_
// Entry: 0x71b0d098 | Size: 60 bytes
// =========================================================================

int * XWrDNbPYDETOSCCGKLX_(int *param_1)

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
// Function: FUN_71b0d124
// Entry: 0x71b0d124 | Size: 20 bytes
// =========================================================================

void FUN_71b0d124(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_71b0d18c
// Entry: 0x71b0d18c | Size: 20 bytes
// =========================================================================

void FUN_71b0d18c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_vector_7006dad5);
}


// =========================================================================
// Function: jlkivfbHsPXtesiTctaiuhasjBpQTPtVczvtiGuftcIaaUVhxMzhzD
// Entry: 0x71b0d30c | Size: 124 bytes
// =========================================================================

undefined4 *
jlkivfbHsPXtesiTctaiuhasjBpQTPtVczvtiGuftcIaaUVhxMzhzD(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uStack_14;
  
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  thunk_orknKiVXzulpXWvTMiYOHoIQRQpCxqvkojqbLQ(param_1 + 0x208);
  uStack_14 = 0;
  FUN_71b0cd84(param_1 + 0x187,&uStack_14);
  uStack_14 = 0;
  FUN_71b0cd84(param_1 + 4,&uStack_14);
  uStack_14 = 0;
  FUN_71b0cd84(param_1 + 0x85,&uStack_14);
  uStack_14 = 0;
  FUN_71b0cd84(param_1 + 0x106,&uStack_14);
  return param_1;
}


// =========================================================================
// Function: AReXourBM_XYVgzqubGFourXCuJ_yczZZwrEDGrdQjICg
// Entry: 0x71b0d388 | Size: 32 bytes
// =========================================================================

void AReXourBM_XYVgzqubGFourXCuJ_yczZZwrEDGrdQjICg(int param_1)

{
  imp___aeabi_memcpy4(param_1 + 0x10,param_1 + 0x61c,0x204);
  return;
}


// =========================================================================
// Function: CIlEldrzVFzjGB_S_TNXSBzaGhLdITwZnflZbQYJTtnNJTbQtlbpPoydtenwNrExr
// Entry: 0x71b0d3a8 | Size: 664 bytes
// =========================================================================

/* WARNING: Restarted to delay deadcode elimination for space: register */

void CIlEldrzVFzjGB_S_TNXSBzaGhLdITwZnflZbQYJTtnNJTbQtlbpPoydtenwNrExr
               (undefined4 *param_1,int param_2,int param_3,float param_4)

{
  byte bVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  uint in_fpscr;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  pfVar5 = (float *)(param_1 + 0x187);
  thunk_ShyEhURBNnBRBwcqvSjaTmzXGvQoEfFaeJZrRdCKnpoCwCtVJRpuzgTZaLLxXzhuKSNLNJYMxvD_uUwoMlvn
            (param_1 + 0x208,param_3,pfVar5);
  if (param_2 < 0x32) {
    fVar14 = 0.0;
    pfVar6 = (float *)(param_1 + 0x106);
    fVar17 = 0.0;
    iVar3 = 0;
    fVar15 = fVar14;
    fVar16 = fVar14;
    do {
      fVar2 = (float)thunk_DmaMTqA_tGBQkErjEQPZTvKXAKENTY(*(undefined4 *)(param_3 + 0x14 + iVar3));
      iVar7 = iVar3 + 4;
      fVar11 = *(float *)((int)&DAT_7009a544 + iVar3);
      fVar14 = fVar14 + fVar2;
      fVar15 = fVar15 + fVar11 * fVar2;
      fVar17 = fVar17 + fVar11 * fVar11;
      fVar16 = fVar16 + fVar11;
      iVar3 = iVar7;
    } while (iVar7 != 0x1f0);
    fVar12 = (float)param_1[2];
    fVar2 = fVar17 * 124.0 - fVar16 * fVar16;
    fVar13 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
    fVar11 = (fVar15 * -124.0 + fVar16 * fVar14) / fVar2;
    fVar2 = (fVar17 * fVar14 - fVar15 * fVar16) / fVar2;
    fVar15 = 0.0;
    fVar16 = 1.0 / (fVar13 + 1.0);
    if (1.0 < fVar11) {
      fVar11 = 1.0;
    }
    param_1[1] = (float)param_1[1] + param_4 * 0.007751938 * *(float *)*param_1;
    if (fVar2 < 0.0) {
      fVar2 = fVar15;
    }
    param_1[2] = fVar2 + fVar12;
    if (fVar11 < 0.0) {
      fVar11 = fVar15;
    }
    fVar11 = fVar11 + (float)param_1[3];
    uVar9 = in_fpscr & 0xfffffff | (uint)(fVar11 < 0.0) << 0x1f | (uint)(fVar11 == 0.0) << 0x1e;
    uVar8 = uVar9 | (uint)NAN(fVar11) << 0x1c;
    param_1[3] = fVar11;
    bVar1 = (byte)(uVar9 >> 0x18);
    fVar14 = fVar15;
    if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(uVar8 >> 0x1c) & 1)) {
      fVar14 = (float)thunk_cLSkMcQdXEODSRBTKo_I_RSpCQ_FcM(fVar16 * (fVar2 + fVar12));
      fVar11 = (float)param_1[3];
      fVar15 = fVar16 * fVar11;
      fVar14 = (fVar13 + 1.0) * fVar14;
    }
    uVar9 = uVar8 & 0xfffffff | (uint)(fVar11 == 0.0) << 0x1e;
    if (SUB41(uVar9 >> 0x1e,0)) {
      fVar15 = (float)param_1[1];
      *pfVar6 = fVar15;
      param_1[0x107] = fVar15;
      param_1[0x108] = fVar15;
      param_1[0x109] = fVar15;
      param_1[0x10a] = fVar15;
      param_1[0x10b] = fVar15;
      param_1[0x10c] = fVar15;
      param_1[0x10d] = fVar15;
      param_1[0x10e] = fVar15;
      param_1[0x10f] = fVar15;
      param_1[0x110] = fVar15;
      param_1[0x111] = fVar15;
      param_1[0x112] = fVar15;
      param_1[0x113] = fVar15;
      param_1[0x114] = fVar15;
      param_1[0x115] = fVar15;
      param_1[0x116] = fVar15;
      param_1[0x117] = fVar15;
      param_1[0x118] = fVar15;
      param_1[0x119] = fVar15;
      param_1[0x11a] = fVar15;
      param_1[0x11b] = fVar15;
      param_1[0x11c] = fVar15;
      param_1[0x11d] = fVar15;
      param_1[0x11e] = fVar15;
      param_1[0x11f] = fVar15;
      param_1[0x120] = fVar15;
      param_1[0x121] = fVar15;
      param_1[0x122] = fVar15;
      param_1[0x123] = fVar15;
      param_1[0x124] = fVar15;
      param_1[0x125] = fVar15;
      param_1[0x126] = fVar15;
      param_1[0x127] = fVar15;
      param_1[0x128] = fVar15;
      param_1[0x129] = fVar15;
      param_1[0x12a] = fVar15;
      param_1[299] = fVar15;
      param_1[300] = fVar15;
      param_1[0x12d] = fVar15;
      param_1[0x12e] = fVar15;
      param_1[0x12f] = fVar15;
      param_1[0x130] = fVar15;
      param_1[0x131] = fVar15;
      param_1[0x132] = fVar15;
      param_1[0x133] = fVar15;
      param_1[0x134] = fVar15;
      param_1[0x135] = fVar15;
      param_1[0x136] = fVar15;
      param_1[0x137] = fVar15;
      param_1[0x138] = fVar15;
      param_1[0x139] = fVar15;
      param_1[0x13a] = fVar15;
      param_1[0x13b] = fVar15;
      param_1[0x13c] = fVar15;
      param_1[0x13d] = fVar15;
      param_1[0x13e] = fVar15;
      param_1[0x13f] = fVar15;
      param_1[0x140] = fVar15;
      param_1[0x141] = fVar15;
      param_1[0x142] = fVar15;
      param_1[0x143] = fVar15;
      param_1[0x144] = fVar15;
      param_1[0x145] = fVar15;
      param_1[0x146] = fVar15;
      param_1[0x147] = fVar15;
      param_1[0x148] = fVar15;
      param_1[0x149] = fVar15;
      param_1[0x14a] = fVar15;
      param_1[0x14b] = fVar15;
      param_1[0x14c] = fVar15;
      param_1[0x14d] = fVar15;
      param_1[0x14e] = fVar15;
      param_1[0x14f] = fVar15;
      param_1[0x150] = fVar15;
      param_1[0x151] = fVar15;
      param_1[0x152] = fVar15;
      param_1[0x153] = fVar15;
      param_1[0x154] = fVar15;
      param_1[0x155] = fVar15;
      param_1[0x156] = fVar15;
      param_1[0x157] = fVar15;
      param_1[0x158] = fVar15;
      param_1[0x159] = fVar15;
      param_1[0x15a] = fVar15;
      param_1[0x15b] = fVar15;
      param_1[0x15c] = fVar15;
      param_1[0x15d] = fVar15;
      param_1[0x15e] = fVar15;
      param_1[0x15f] = fVar15;
      param_1[0x160] = fVar15;
      param_1[0x161] = fVar15;
      param_1[0x162] = fVar15;
      param_1[0x163] = fVar15;
      param_1[0x164] = fVar15;
      param_1[0x165] = fVar15;
      param_1[0x166] = fVar15;
      param_1[0x167] = fVar15;
      param_1[0x168] = fVar15;
      param_1[0x169] = fVar15;
      param_1[0x16a] = fVar15;
      param_1[0x16b] = fVar15;
      param_1[0x16c] = fVar15;
      param_1[0x16d] = fVar15;
      param_1[0x16e] = fVar15;
      param_1[0x16f] = fVar15;
      param_1[0x170] = fVar15;
      param_1[0x171] = fVar15;
      param_1[0x172] = fVar15;
      param_1[0x173] = fVar15;
      param_1[0x174] = fVar15;
      param_1[0x175] = fVar15;
      param_1[0x176] = fVar15;
      param_1[0x177] = fVar15;
      param_1[0x178] = fVar15;
      param_1[0x179] = fVar15;
      param_1[0x17a] = fVar15;
      param_1[0x17b] = fVar15;
      param_1[0x17c] = fVar15;
      param_1[0x17d] = fVar15;
      param_1[0x17e] = fVar15;
      param_1[0x17f] = fVar15;
      param_1[0x180] = fVar15;
      param_1[0x181] = fVar15;
      param_1[0x182] = fVar15;
      param_1[0x183] = fVar15;
      param_1[0x184] = fVar15;
      param_1[0x185] = fVar15;
      param_1[0x186] = fVar15;
    }
    else {
      uVar8 = 0;
      do {
        uVar9 = uVar9 & 0xfffffff | (uint)((float)param_1[3] == 0.0) << 0x1e;
        if (SUB41(uVar9 >> 0x1e,0)) {
          fVar17 = (float)param_1[1];
        }
        else {
          uVar4 = uVar8;
          if (uVar8 < 6) {
            uVar4 = 5;
          }
          uVar10 = VectorUnsignedToFloat(uVar4,(byte)(uVar9 >> 0x16) & 3);
          fVar17 = (float)thunk_YyTLZETBqTcBrVtqfcdpisSxttdkkSg(uVar10,fVar15);
          fVar17 = fVar14 / fVar17;
        }
        uVar8 = uVar8 + 1;
        *pfVar6 = fVar17;
        pfVar6 = pfVar6 + 1;
      } while (uVar8 != 0x81);
    }
    iVar3 = 0x81;
    fVar15 = (float)VectorSignedToFloat(0x32 - param_2,(byte)(uVar9 >> 0x16) & 3);
    do {
      iVar3 = iVar3 + -1;
      *pfVar5 = (*pfVar5 * fVar13 + pfVar5[-0x81] * fVar15 * fVar16) * 0.02;
      pfVar5 = pfVar5 + 1;
    } while (iVar3 != 0);
  }
  return;
}


// =========================================================================
// Function: gYItlcIKHqxeoASFRqYguSAHVVaneXvWTSeRBlVrDkOjNatyqImjESUBAaHFiutlfTmBmyBVuWvHiToXSWg
// Entry: 0x71b0d658 | Size: 224 bytes
// =========================================================================

void gYItlcIKHqxeoASFRqYguSAHVVaneXvWTSeRBlVrDkOjNatyqImjESUBAaHFiutlfTmBmyBVuWvHiToXSWg
               (int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar1 = -0x204;
  fVar4 = 0.9;
  do {
    while( true ) {
      iVar3 = param_1 + iVar1;
      fVar6 = *(float *)(param_2 + iVar1 + 0x204);
      fVar5 = *(float *)(param_4 + iVar1 + 0x204);
      pfVar2 = (float *)&UNK_71b0d740;
      if (fVar6 != 0.2 && fVar6 >= 0.2) {
        pfVar2 = (float *)&DAT_71b0d744;
      }
      if (fVar6 < 0.2) {
        fVar7 = *(float *)(iVar3 + 0x418);
        *(float *)(iVar3 + 0x418) = fVar7 + (fVar5 - fVar7) * 0.05;
      }
      fVar8 = *(float *)(iVar3 + 0x214);
      fVar7 = *pfVar2;
      fVar5 = (1.0 - fVar4) * (fVar6 * fVar8 + (1.0 - fVar6) * fVar5) + fVar4 * fVar8;
      if (fVar7 != fVar4) break;
      *(float *)(iVar3 + 0x820) = fVar5;
      iVar1 = iVar1 + 4;
      fVar4 = fVar7;
      if (iVar1 == 0) {
        return;
      }
    }
    fVar4 = (1.0 - fVar7) * (fVar6 * fVar8 + (1.0 - fVar6) * *(float *)(param_4 + iVar1 + 0x204)) +
            fVar7 * fVar8;
    if (fVar5 < fVar4) {
      fVar4 = fVar5;
    }
    *(float *)(iVar3 + 0x820) = fVar4;
    iVar1 = iVar1 + 4;
    fVar4 = fVar7;
  } while (iVar1 != 0);
  return;
}


// =========================================================================
// Function: CtFkdMPUq__nQWblLGweEClPTortNiChXic
// Entry: 0x71b0d898 | Size: 16 bytes
// =========================================================================

float CtFkdMPUq__nQWblLGweEClPTortNiChXic(float param_1)

{
  return SQRT(param_1);
}


// =========================================================================
// Function: FMalEtkCHofHjmjfjMlRjURspxHTfKi
// Entry: 0x71b0d8a8 | Size: 4 bytes
// =========================================================================

void FMalEtkCHofHjmjfjMlRjURspxHTfKi(void)

{
  return;
}


// =========================================================================
// Function: YyTLZETBqTcBrVtqfcdpisSxttdkkSg
// Entry: 0x71b0d8ac | Size: 36 bytes
// =========================================================================

void YyTLZETBqTcBrVtqfcdpisSxttdkkSg(undefined4 param_1,float param_2)

{
  uint in_fpscr;
  float fVar1;
  
  fVar1 = (float)VectorUnsignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
  imp_exp2f((fVar1 * 1.1920929e-07 + -126.942696) * param_2);
  return;
}


// =========================================================================
// Function: DmaMTqA_tGBQkErjEQPZTvKXAKENTY
// Entry: 0x71b0d8d8 | Size: 36 bytes
// =========================================================================

float DmaMTqA_tGBQkErjEQPZTvKXAKENTY(undefined4 param_1)

{
  uint in_fpscr;
  float fVar1;
  
  fVar1 = (float)VectorUnsignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
  return (fVar1 * 1.1920929e-07 + -126.942696) * 0.6931472;
}


// =========================================================================
// Function: h_mkVooMCQaXlfNoTcKEBiKvyolfCvXsOfzGsqFNWglyzzpsrscQebyBlyqLNnyFnyjKipHMe
// Entry: 0x71b0d908 | Size: 60 bytes
// =========================================================================

void h_mkVooMCQaXlfNoTcKEBiKvyolfCvXsOfzGsqFNWglyzzpsrscQebyBlyqLNnyFnyjKipHMe
               (undefined4 *param_1,int param_2,float *param_3)

{
  uint in_fpscr;
  float fVar1;
  
  if (param_2 != 0) {
    do {
      param_2 = param_2 + -1;
      fVar1 = (float)VectorUnsignedToFloat(*param_1,(byte)(in_fpscr >> 0x16) & 3);
      *param_3 = (fVar1 * 1.1920929e-07 + -126.942696) * 0.6931472;
      param_3 = param_3 + 1;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
    return;
  }
  return;
}


// =========================================================================
// Function: cLSkMcQdXEODSRBTKo_I_RSpCQ_FcM
// Entry: 0x71b0d950 | Size: 28 bytes
// =========================================================================

void cLSkMcQdXEODSRBTKo_I_RSpCQ_FcM(float param_1)

{
  imp_exp2f(param_1 * 0.4342945 * 3.3073044);
  return;
}


// =========================================================================
// Function: BCQSXTSwxIgFnoXKTrXKoCBGbZJPybDM_qhtPiLdbpkOdBRXhyBZHlHRJmDhXyYXxEnZBmdLD
// Entry: 0x71b0d974 | Size: 84 bytes
// =========================================================================

void BCQSXTSwxIgFnoXKTrXKoCBGbZJPybDM_qhtPiLdbpkOdBRXhyBZHlHRJmDhXyYXxEnZBmdLD
               (float *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  float fVar2;
  
  if (param_2 != 0) {
    do {
      fVar2 = *param_1;
      param_1 = param_1 + 1;
      uVar1 = imp_exp2f(fVar2 * 0.4342945 * 3.3073044);
      *param_3 = uVar1;
      param_2 = param_2 + -1;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
    return;
  }
  return;
}


// =========================================================================
// Function: wiDFrGiVFLhNJ_RYdPBsuRxvkHrembILLfvnWdfltbBwwhDcReGzqnsChIAoaZUPwWmXsgrQUVsLfAktx
// Entry: 0x71b0d9d0 | Size: 84 bytes
// =========================================================================

void wiDFrGiVFLhNJ_RYdPBsuRxvkHrembILLfvnWdfltbBwwhDcReGzqnsChIAoaZUPwWmXsgrQUVsLfAktx
               (float *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  float fVar2;
  
  if (param_2 != 0) {
    do {
      fVar2 = *param_1;
      param_1 = param_1 + 1;
      uVar1 = imp_exp2f(fVar2 * -0.4342945 * 3.3073044);
      *param_3 = uVar1;
      param_2 = param_2 + -1;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
    return;
  }
  return;
}


// =========================================================================
// Function: EP__iWgUhgMc_jexZuhX
// Entry: 0x71b0dad0 | Size: 172 bytes
// =========================================================================

undefined4 * EP__iWgUhgMc_jexZuhX(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 auStack_420 [1024];
  
  puVar1 = (undefined4 *)thunk_MwhHq(0x200);
  imp___aeabi_memclr4(puVar1,0x200);
  param_1[5] = 0;
  *param_1 = 0;
  param_1[1] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *param_1 = puVar1;
  param_1[1] = puVar1 + 0x80;
  param_1[2] = puVar1 + 0x80;
  param_1[4] = 0;
  iVar2 = thunk_MwhHq(0x200);
  param_1[5] = iVar2 + 0x200;
  param_1[3] = iVar2;
  imp___aeabi_memclr4(iVar2,0x200);
  param_1[4] = iVar2 + 0x200;
  *puVar1 = 0;
  imp___aeabi_memclr8(auStack_420,0x400);
  thunk_bEmuaqCJZZkepWiPVTHzKngWmkMIMJSFA(0x100,1,auStack_420,puVar1,iVar2);
  return param_1;
}


// =========================================================================
// Function: joFYTptSwXFIYmwIozhlyTvymbDVdbyWpebBxnDwOzfzYllNaiSv
// Entry: 0x71b0dbc8 | Size: 284 bytes
// =========================================================================

void joFYTptSwXFIYmwIozhlyTvymbDVdbyWpebBxnDwOzfzYllNaiSv
               (undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  bool bVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined8 in_d16;
  undefined8 in_d17;
  undefined8 in_d18;
  undefined8 in_d19;
  
  iVar6 = 1;
  thunk_bEmuaqCJZZkepWiPVTHzKngWmkMIMJSFA(0x100,1,param_2,*param_1,param_1[3]);
  *param_4 = 0;
  puVar9 = param_3 + 1;
  *param_3 = *param_2;
  puVar4 = param_4 + 0x80;
  *puVar4 = 0;
  puVar7 = param_2 + 0x100;
  puVar5 = param_3 + 0x80;
  *puVar5 = param_2[1];
  puVar1 = param_2 + 2;
  if (puVar4 <= puVar9 || puVar5 <= param_4 + 1) {
    bVar8 = puVar7 <= puVar9 || puVar5 <= puVar1;
    if (puVar7 <= puVar9 || puVar5 <= puVar1) {
      bVar8 = puVar7 <= param_4 + 1 || puVar4 <= puVar1;
    }
    if (bVar8) {
      iVar6 = 4;
      do {
        puVar3 = (undefined8 *)((int)param_4 + iVar6);
        puVar4 = (undefined4 *)0x380;
        puVar5 = (undefined4 *)0x390;
        lVar10 = 2;
        puVar9 = puVar1;
        while( true ) {
          *puVar4 = *puVar9;
          puVar9 = puVar9 + 1;
          *puVar5 = *puVar9;
          puVar9 = puVar9 + 1;
          lVar10 = lVar10 + -1;
          if (lVar10 == 0) break;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        puVar4 = (undefined4 *)0x388;
        puVar5 = (undefined4 *)0x398;
        lVar10 = 2;
        while( true ) {
          *puVar4 = *puVar9;
          puVar9 = puVar9 + 1;
          *puVar5 = *puVar9;
          puVar9 = puVar9 + 1;
          lVar10 = lVar10 + -1;
          if (lVar10 == 0) break;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        puVar1 = puVar1 + 8;
        *puVar3 = in_d18;
        puVar3[1] = in_d19;
        puVar3 = (undefined8 *)((int)param_3 + iVar6);
        iVar6 = iVar6 + 0x10;
        *puVar3 = in_d16;
        puVar3[1] = in_d17;
      } while (iVar6 != 500);
      iVar6 = 0x7d;
    }
  }
  iVar2 = iVar6 << 2;
  puVar1 = param_2 + iVar6 * 2 + 1;
  do {
    *(undefined4 *)((int)param_3 + iVar2) = puVar1[-1];
    *(undefined4 *)((int)param_4 + iVar2) = *puVar1;
    iVar2 = iVar2 + 4;
    puVar1 = puVar1 + 2;
  } while (iVar2 != 0x200);
  return;
}


// =========================================================================
// Function: sXGpypvxixdQqZGLFHnhSs_guvnyvjlAHqBYLktUjxQ_eyHNQGJIoUvwiwAZhsWONNFsK
// Entry: 0x71b0dce4 | Size: 280 bytes
// =========================================================================

void sXGpypvxixdQqZGLFHnhSs_guvnyvjlAHqBYLktUjxQ_eyHNQGJIoUvwiwAZhsWONNFsK
               (undefined4 *param_1,float *param_2,undefined4 param_3,int param_4,undefined4 param_5
               ,float *param_6,int param_7)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  bool bVar6;
  float *pfVar7;
  longlong lVar8;
  
  pfVar2 = param_6 + 0x100;
  *param_6 = *param_2;
  pfVar5 = param_2 + 0x80;
  param_6[1] = *pfVar5;
  pfVar1 = param_6 + 2;
  bVar6 = pfVar5 <= pfVar1 || pfVar2 <= param_2 + 1;
  iVar4 = 1;
  if (pfVar5 <= pfVar1 || pfVar2 <= param_2 + 1) {
    bVar6 = (float *)(param_4 + 0x200) <= pfVar1 || pfVar2 <= (float *)(param_4 + 4);
  }
  if (bVar6) {
    iVar4 = 4;
    do {
      iVar4 = iVar4 + 0x10;
      pfVar2 = (float *)0x380;
      pfVar5 = (float *)0x390;
      lVar8 = 2;
      pfVar7 = pfVar1;
      while( true ) {
        *pfVar7 = *pfVar2;
        pfVar7[1] = *pfVar5;
        pfVar7 = pfVar7 + 2;
        lVar8 = lVar8 + -1;
        if (lVar8 == 0) break;
        pfVar2 = pfVar2 + 1;
        pfVar5 = pfVar5 + 1;
      }
      pfVar2 = (float *)0x388;
      pfVar5 = (float *)0x398;
      lVar8 = 2;
      while( true ) {
        *pfVar7 = *pfVar2;
        pfVar7[1] = *pfVar5;
        pfVar7 = pfVar7 + 2;
        lVar8 = lVar8 + -1;
        if (lVar8 == 0) break;
        pfVar2 = pfVar2 + 1;
        pfVar5 = pfVar5 + 1;
      }
      pfVar1 = pfVar1 + 8;
    } while (iVar4 != 500);
    iVar4 = 0x7d;
  }
  iVar3 = iVar4 << 3;
  pfVar1 = param_2 + iVar4;
  pfVar2 = (float *)(param_4 + iVar4 * 4);
  do {
    pfVar5 = (float *)((int)param_6 + iVar3);
    *pfVar5 = *pfVar1;
    iVar3 = iVar3 + 8;
    pfVar5[1] = *pfVar2;
    pfVar1 = pfVar1 + 1;
    pfVar2 = pfVar2 + 1;
  } while (iVar3 != 0x400);
  thunk_bEmuaqCJZZkepWiPVTHzKngWmkMIMJSFA(0x100,0xffffffff,param_6,*param_1,param_1[3]);
  if (param_7 != 0) {
    param_7 = param_7 << 2;
    do {
      param_7 = param_7 + -4;
      *param_6 = *param_6 * 0.0078125;
      param_6 = param_6 + 1;
    } while (param_7 != 0);
  }
  return;
}


// =========================================================================
// Function: bEmuaqCJZZkepWiPVTHzKngWmkMIMJSFA
// Entry: 0x71b0df68 | Size: 1568 bytes
// =========================================================================

void bEmuaqCJZZkepWiPVTHzKngWmkMIMJSFA
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
// Function: FUN_71b0e58c
// Entry: 0x71b0e58c | Size: 800 bytes
// =========================================================================

void FUN_71b0e58c(uint param_1,undefined1 (*param_2) [16],int param_3)

{
  undefined1 auVar1 [16];
  undefined1 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined1 (*pauVar9) [16];
  undefined4 uVar10;
  undefined4 *puVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  uint uVar17;
  int iVar18;
  undefined4 *puVar19;
  undefined1 auVar20 [16];
  uint uStack_28;
  
  *(undefined4 *)*param_2 = 0;
  if (param_1 < 9) {
    if (param_1 != 8) {
      return;
    }
    iVar18 = param_3 + 8;
    iVar14 = 2;
    uVar17 = 1;
  }
  else {
    uVar17 = 1;
    do {
      uVar4 = uVar17;
      param_1 = param_1 >> 1;
      if (uVar4 != 0) {
        uVar17 = 0;
        if (3 < uVar4) {
          uVar17 = uVar4 & 0xfffffffc;
          auVar1._8_8_ = CONCAT44(param_1,param_1);
          auVar1._0_8_ = CONCAT44(param_1,param_1);
          pauVar9 = param_2;
          uVar13 = uVar17;
          do {
            puVar2 = *pauVar9;
            auVar20 = *pauVar9;
            pauVar9 = pauVar9 + 1;
            auVar20 = VectorAdd(auVar20,auVar1,4);
            uVar13 = uVar13 - 4;
            *(longlong *)(puVar2 + uVar4 * 4) = auVar20._0_8_;
            *(longlong *)((int)(puVar2 + uVar4 * 4) + 8) = auVar20._8_8_;
          } while (uVar13 != 0);
          if (uVar4 == uVar17) goto LAB_71b0e5b4;
        }
        piVar12 = (int *)(*param_2 + uVar17 * 4);
        iVar14 = uVar4 - uVar17;
        do {
          iVar14 = iVar14 + -1;
          piVar12[uVar4] = *piVar12 + param_1;
          piVar12 = piVar12 + 1;
        } while (iVar14 != 0);
      }
LAB_71b0e5b4:
      uVar17 = uVar4 * 2;
    } while (uVar4 * 0x10 < param_1);
    iVar14 = uVar4 * 4;
    if (uVar4 * 0x10 != param_1) {
      if (uVar17 == 0) {
        return;
      }
      uStack_28 = 1;
      do {
        uVar13 = 0;
        puVar6 = (undefined4 *)(param_3 + *(int *)(*param_2 + uStack_28 * 4) * 4);
        do {
          iVar14 = uVar13 * 4;
          uVar13 = uVar13 + 1;
          iVar14 = *(int *)(*param_2 + iVar14) + uStack_28 * 2;
          uVar3 = *puVar6;
          uVar15 = puVar6[1];
          puVar11 = (undefined4 *)(param_3 + iVar14 * 4);
          uVar10 = puVar11[1];
          *puVar6 = *puVar11;
          puVar6[1] = uVar10;
          *puVar11 = uVar3;
          puVar11[1] = uVar15;
          puVar16 = (undefined4 *)(param_3 + uVar4 * 0x10 + iVar14 * 4);
          puVar11 = puVar6 + uVar4 * 4;
          uVar3 = *puVar11;
          uVar15 = puVar16[1];
          uVar10 = puVar11[1];
          *puVar11 = *puVar16;
          puVar11[1] = uVar15;
          *puVar16 = uVar3;
          puVar16[1] = uVar10;
          puVar6 = puVar6 + 2;
        } while (uStack_28 != uVar13);
        uStack_28 = uStack_28 + 1;
      } while (uStack_28 != uVar17);
      return;
    }
    if (uVar17 == 0) {
      return;
    }
    iVar18 = param_3 + uVar4 * 0x10;
  }
  uVar4 = 0;
  do {
    if (uVar4 == 0) {
      iVar7 = *(int *)*param_2;
    }
    else {
      iVar7 = *(int *)(*param_2 + uVar4 * 4);
      puVar11 = (undefined4 *)(iVar18 + iVar14 * 8 + 4 + iVar7 * 4);
      uVar13 = 0;
      puVar16 = (undefined4 *)(param_3 + 4 + (iVar14 + iVar7) * 4);
      puVar6 = (undefined4 *)(param_3 + iVar7 * 4);
      do {
        uVar10 = *puVar6;
        uVar15 = puVar6[1];
        iVar8 = uVar13 * 4;
        uVar13 = uVar13 + 1;
        iVar8 = *(int *)(*param_2 + iVar8) + uVar4 * 2;
        puVar5 = (undefined4 *)(param_3 + iVar8 * 4);
        uVar3 = puVar5[1];
        *puVar6 = *puVar5;
        puVar6[1] = uVar3;
        iVar8 = iVar8 + uVar17 * 4;
        *puVar5 = uVar10;
        puVar5[1] = uVar15;
        puVar5 = (undefined4 *)(param_3 + iVar8 * 4);
        iVar8 = iVar8 - iVar14;
        uVar10 = puVar16[-1];
        uVar3 = *puVar16;
        uVar15 = puVar5[1];
        puVar16[-1] = *puVar5;
        *puVar16 = uVar15;
        puVar16 = puVar16 + 2;
        *puVar5 = uVar10;
        puVar5[1] = uVar3;
        puVar5 = (undefined4 *)(param_3 + iVar8 * 4);
        puVar19 = puVar6 + iVar14 * 2;
        uVar10 = *puVar19;
        uVar3 = puVar5[1];
        uVar15 = puVar19[1];
        *puVar19 = *puVar5;
        puVar19[1] = uVar3;
        *puVar5 = uVar10;
        puVar5[1] = uVar15;
        uVar3 = puVar11[-1];
        uVar10 = *puVar11;
        puVar5 = (undefined4 *)(param_3 + uVar17 * 0x10 + iVar8 * 4);
        uVar15 = puVar5[1];
        puVar11[-1] = *puVar5;
        *puVar11 = uVar15;
        puVar11 = puVar11 + 2;
        *puVar5 = uVar3;
        puVar5[1] = uVar10;
        puVar6 = puVar6 + 2;
      } while (uVar4 != uVar13);
    }
    iVar7 = iVar7 + (uVar4 + uVar17) * 2;
    puVar11 = (undefined4 *)(param_3 + iVar7 * 4);
    uVar3 = *puVar11;
    puVar6 = (undefined4 *)(iVar18 + iVar7 * 4);
    uVar10 = puVar11[1];
    uVar15 = puVar6[1];
    *puVar11 = *puVar6;
    puVar11[1] = uVar15;
    *puVar6 = uVar3;
    puVar6[1] = uVar10;
    uVar4 = uVar4 + 1;
  } while (uVar4 != uVar17);
  return;
}


// =========================================================================
// Function: FUN_71b0e8ac
// Entry: 0x71b0e8ac | Size: 392 bytes
// =========================================================================

void FUN_71b0e8ac(uint param_1,float *param_2,undefined4 param_3)

{
  float *pfVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar6 = 2;
  if (8 < param_1) {
    FUN_71b0ea34(param_1,param_2);
    uVar6 = 8;
    if (0x20 < param_1) {
      uVar5 = 0x20;
      uVar2 = 8;
      do {
        uVar6 = uVar5;
        FUN_71b0ed3c(param_1,uVar2,param_2,param_3);
        uVar5 = uVar6 << 2;
        uVar2 = uVar6;
      } while (uVar6 * 4 < param_1);
    }
  }
  if (param_1 == uVar6 * 4) {
    if (uVar6 != 0) {
      param_2 = param_2 + 1;
      uVar5 = 0;
      do {
        pfVar3 = param_2 + uVar6 * 2;
        pfVar4 = param_2 + uVar6 * 3;
        pfVar1 = param_2 + uVar6;
        uVar5 = uVar5 + 2;
        fVar14 = param_2[-1] + pfVar1[-1];
        fVar10 = *param_2 + *pfVar1;
        fVar9 = *param_2 - *pfVar1;
        fVar12 = pfVar3[-1] + pfVar4[-1];
        fVar11 = pfVar3[-1] - pfVar4[-1];
        fVar8 = *pfVar3 + *pfVar4;
        fVar13 = *pfVar3 - *pfVar4;
        fVar7 = param_2[-1] - pfVar1[-1];
        param_2[-1] = fVar14 + fVar12;
        pfVar3[-1] = fVar14 - fVar12;
        *param_2 = fVar10 + fVar8;
        param_2 = param_2 + 2;
        *pfVar3 = fVar10 - fVar8;
        *pfVar1 = fVar9 + fVar11;
        pfVar1[-1] = fVar7 - fVar13;
        *pfVar4 = fVar9 - fVar11;
        pfVar4[-1] = fVar7 + fVar13;
      } while (uVar5 < uVar6);
    }
  }
  else if (uVar6 != 0) {
    uVar5 = 0;
    do {
      pfVar1 = param_2 + uVar6;
      fVar7 = *param_2;
      fVar8 = param_2[1];
      uVar5 = uVar5 + 2;
      fVar9 = *pfVar1;
      fVar10 = pfVar1[1];
      *param_2 = fVar7 + fVar9;
      param_2[1] = fVar8 + pfVar1[1];
      param_2 = param_2 + 2;
      *pfVar1 = fVar7 - fVar9;
      pfVar1[1] = fVar8 - fVar10;
    } while (uVar5 < uVar6);
  }
  return;
}


// =========================================================================
// Function: FUN_71b0ea34
// Entry: 0x71b0ea34 | Size: 776 bytes
// =========================================================================

void FUN_71b0ea34(uint param_1,float *param_2,int param_3)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
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
  
  fVar20 = param_2[8] - param_2[10];
  fVar6 = param_2[8] + param_2[10];
  fVar21 = param_2[9] - param_2[0xb];
  fVar8 = param_2[9] + param_2[0xb];
  fVar22 = param_2[0xc] - param_2[0xe];
  fVar12 = param_2[0xc] + param_2[0xe];
  fVar15 = param_2[0xd] - param_2[0xf];
  fVar10 = param_2[0xd] + param_2[0xf];
  fVar18 = *param_2 + param_2[2];
  fVar7 = *param_2 - param_2[2];
  fVar19 = param_2[1] + param_2[3];
  fVar9 = param_2[1] - param_2[3];
  fVar16 = param_2[4] + param_2[6];
  fVar13 = param_2[4] - param_2[6];
  fVar17 = param_2[5] + param_2[7];
  fVar11 = param_2[5] - param_2[7];
  fVar14 = fVar20 + fVar15;
  fVar20 = fVar20 - fVar15;
  fVar15 = fVar22 - fVar21;
  fVar21 = fVar21 + fVar22;
  param_2[7] = fVar9 - fVar13;
  param_2[3] = fVar9 + fVar13;
  param_2[5] = fVar19 - fVar17;
  param_2[4] = fVar18 - fVar16;
  *param_2 = fVar18 + fVar16;
  param_2[1] = fVar19 + fVar17;
  param_2[2] = fVar7 - fVar11;
  param_2[6] = fVar7 + fVar11;
  fVar7 = *(float *)(param_3 + 8);
  param_2[8] = fVar6 + fVar12;
  param_2[0xd] = fVar6 - fVar12;
  param_2[0xc] = fVar10 - fVar8;
  param_2[9] = fVar8 + fVar10;
  param_2[0xf] = fVar7 * (fVar15 + fVar14);
  param_2[0xe] = fVar7 * (fVar15 - fVar14);
  param_2[0xb] = fVar7 * (fVar21 + fVar20);
  param_2[10] = fVar7 * (fVar20 - fVar21);
  if (0x10 < param_1) {
    iVar4 = 0;
    iVar5 = 0;
    do {
      pfVar1 = param_2 + 0x10;
      iVar2 = param_3 + iVar4;
      iVar4 = iVar4 + 8;
      fVar12 = *pfVar1 + param_2[0x12];
      fVar10 = *pfVar1 - param_2[0x12];
      fVar8 = *(float *)(iVar2 + 0xc);
      fVar9 = param_2[0x15] - param_2[0x17];
      fVar6 = *(float *)(iVar2 + 8);
      iVar2 = param_3 + iVar5;
      fVar17 = param_2[0x15] + param_2[0x17];
      fVar20 = *(float *)(iVar2 + 0x14);
      fVar15 = param_2[0x14] + param_2[0x16];
      fVar21 = param_2[0x14] - param_2[0x16];
      fVar7 = param_2[0x11] + param_2[0x13];
      fVar11 = param_2[0x11] - param_2[0x13];
      fVar14 = *(float *)(iVar2 + 0x10);
      fVar16 = fVar10 - fVar9;
      fVar10 = fVar10 + fVar9;
      fVar9 = fVar12 - fVar15;
      fVar19 = fVar11 + fVar21;
      fVar18 = fVar14 - (fVar8 + fVar8) * fVar20;
      fVar13 = (fVar8 + fVar8) * fVar14 - fVar20;
      *pfVar1 = fVar12 + fVar15;
      fVar15 = fVar7 - fVar17;
      fVar11 = fVar11 - fVar21;
      param_2[0x11] = fVar7 + fVar17;
      param_2[0x15] = fVar8 * fVar9 + fVar6 * fVar15;
      param_2[0x14] = fVar6 * fVar9 - fVar15 * fVar8;
      param_2[0x12] = fVar14 * fVar16 - fVar19 * fVar20;
      param_2[0x17] = fVar13 * fVar10 + fVar18 * fVar11;
      fVar21 = param_2[0x1d] - param_2[0x1f];
      param_2[0x16] = fVar18 * fVar10 - fVar11 * fVar13;
      param_2[0x13] = fVar20 * fVar16 + fVar14 * fVar19;
      fVar12 = param_2[0x18] + param_2[0x1a];
      fVar17 = *(float *)(iVar2 + 0x18);
      fVar10 = param_2[0x18] - param_2[0x1a];
      fVar19 = *(float *)(iVar2 + 0x1c);
      fVar15 = param_2[0x1c] + param_2[0x1e];
      fVar13 = param_2[0x1d] + param_2[0x1f];
      uVar3 = iVar5 + 0x20;
      iVar5 = iVar5 + 0x10;
      fVar18 = param_2[0x19] + param_2[0x1b];
      fVar11 = param_2[0x19] - param_2[0x1b];
      fVar16 = param_2[0x1c] - param_2[0x1e];
      fVar7 = fVar10 + fVar21;
      fVar9 = fVar12 - fVar15;
      fVar10 = fVar10 - fVar21;
      fVar21 = fVar17 - (fVar6 + fVar6) * fVar19;
      fVar20 = (fVar6 + fVar6) * fVar17 - fVar19;
      fVar14 = fVar18 - fVar13;
      fVar22 = fVar11 - fVar16;
      fVar11 = fVar11 + fVar16;
      param_2[0x19] = fVar18 + fVar13;
      param_2[0x18] = fVar12 + fVar15;
      param_2[0x1d] = fVar6 * fVar9 - fVar8 * fVar14;
      param_2[0x1c] = -(fVar8 * fVar9) - fVar14 * fVar6;
      param_2[0x1f] = fVar20 * fVar7 + fVar21 * fVar22;
      param_2[0x1e] = fVar21 * fVar7 - fVar22 * fVar20;
      param_2[0x1b] = fVar19 * fVar10 + fVar17 * fVar11;
      param_2[0x1a] = fVar17 * fVar10 - fVar11 * fVar19;
      param_2 = pfVar1;
    } while (uVar3 < param_1);
  }
  return;
}


// =========================================================================
// Function: FUN_71b0ed3c
// Entry: 0x71b0ed3c | Size: 1356 bytes
// =========================================================================

void FUN_71b0ed3c(uint param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  uint uVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  uint uVar13;
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
  float *pfStack_74;
  float *pfStack_70;
  float *pfStack_6c;
  float *pfStack_68;
  int iStack_64;
  
  uVar1 = param_2 * 4;
  if (param_2 != 0) {
    pfVar2 = (float *)(param_3 + 4);
    uVar6 = 0;
    do {
      pfVar10 = pfVar2 + param_2 * 2;
      pfVar11 = pfVar2 + param_2 * 3;
      pfVar7 = pfVar2 + param_2;
      uVar6 = uVar6 + 2;
      fVar21 = pfVar2[-1] + pfVar7[-1];
      fVar17 = *pfVar2 + *pfVar7;
      fVar16 = *pfVar2 - *pfVar7;
      fVar19 = pfVar10[-1] + pfVar11[-1];
      fVar18 = pfVar10[-1] - pfVar11[-1];
      fVar15 = *pfVar10 + *pfVar11;
      fVar20 = *pfVar10 - *pfVar11;
      fVar14 = pfVar2[-1] - pfVar7[-1];
      pfVar2[-1] = fVar21 + fVar19;
      pfVar10[-1] = fVar21 - fVar19;
      *pfVar2 = fVar17 + fVar15;
      pfVar2 = pfVar2 + 2;
      *pfVar10 = fVar17 - fVar15;
      *pfVar7 = fVar16 + fVar18;
      pfVar7[-1] = fVar14 - fVar20;
      *pfVar11 = fVar16 - fVar18;
      pfVar11[-1] = fVar14 + fVar20;
    } while (uVar6 < param_2);
  }
  if (uVar1 < param_2 * 5) {
    pfVar7 = (float *)(param_3 + param_2 * 0x1c + 4);
    fVar14 = *(float *)(param_4 + 8);
    pfVar2 = (float *)(param_3 + param_2 * 0x10 + 4);
    pfVar11 = (float *)(param_3 + param_2 * 0x18 + 4);
    pfVar10 = (float *)(param_3 + param_2 * 0x14 + 4);
    uVar6 = uVar1;
    do {
      uVar6 = uVar6 + 2;
      fVar17 = pfVar2[-1] - pfVar10[-1];
      fVar15 = pfVar2[-1] + pfVar10[-1];
      fVar22 = *pfVar2 - *pfVar10;
      fVar18 = *pfVar2 + *pfVar10;
      fVar19 = pfVar11[-1] - pfVar7[-1];
      fVar20 = pfVar11[-1] + pfVar7[-1];
      fVar16 = *pfVar11 - *pfVar7;
      fVar21 = *pfVar11 + *pfVar7;
      fVar25 = fVar22 + fVar19;
      fVar23 = fVar17 - fVar16;
      fVar17 = fVar17 + fVar16;
      fVar19 = fVar19 - fVar22;
      *pfVar2 = fVar18 + fVar21;
      pfVar2[-1] = fVar15 + fVar20;
      pfVar2 = pfVar2 + 2;
      pfVar11[-1] = fVar21 - fVar18;
      *pfVar11 = fVar15 - fVar20;
      pfVar11 = pfVar11 + 2;
      pfVar10[-1] = fVar14 * (fVar23 - fVar25);
      *pfVar10 = fVar14 * (fVar25 + fVar23);
      pfVar10 = pfVar10 + 2;
      *pfVar7 = fVar14 * (fVar19 + fVar17);
      pfVar7[-1] = fVar14 * (fVar19 - fVar17);
      pfVar7 = pfVar7 + 2;
    } while (uVar6 < param_2 * 5);
  }
  if (param_2 * 8 < param_1) {
    pfVar10 = (float *)(param_3 + param_2 * 0x28 + 4);
    pfStack_68 = (float *)(param_2 * 0x34 + param_3 + 4);
    pfStack_6c = (float *)(param_2 * 0x2c + param_3 + 4);
    pfStack_70 = (float *)(param_3 + param_2 * 0x20 + 4);
    pfStack_74 = (float *)(param_3 + param_2 * 0x3c + 4);
    pfVar7 = (float *)(param_3 + param_2 * 0x38 + 4);
    pfVar2 = (float *)(param_3 + param_2 * 0x30 + 4);
    pfVar11 = (float *)(param_3 + param_2 * 0x24 + 4);
    iStack_64 = 0;
    uVar6 = param_2 * 8;
    do {
      iVar4 = iStack_64 * 4;
      iStack_64 = iStack_64 + 2;
      fVar16 = *(float *)(param_4 + 0xc + iVar4);
      fVar15 = -fVar16;
      fVar14 = *(float *)(param_4 + iStack_64 * 4);
      if (uVar6 < uVar6 + param_2) {
        pfVar3 = (float *)(param_4 + iStack_64 * 8);
        fVar18 = pfVar3[1];
        fVar17 = *pfVar3;
        fVar19 = (fVar16 + fVar16) * fVar17 - fVar18;
        fVar20 = fVar17 - (fVar16 + fVar16) * fVar18;
        pfVar3 = pfStack_6c;
        pfVar5 = pfVar10;
        pfVar8 = pfStack_70;
        uVar9 = uVar6;
        pfVar12 = pfVar11;
        do {
          uVar9 = uVar9 + 2;
          fVar30 = pfVar8[-1] + pfVar12[-1];
          fVar21 = pfVar8[-1] - pfVar12[-1];
          fVar32 = *pfVar8 + *pfVar12;
          fVar22 = *pfVar8 - *pfVar12;
          fVar29 = pfVar5[-1] + pfVar3[-1];
          fVar23 = pfVar5[-1] - pfVar3[-1];
          fVar31 = *pfVar5 + *pfVar3;
          fVar25 = *pfVar5 - *pfVar3;
          fVar24 = fVar30 - fVar29;
          fVar28 = fVar22 + fVar23;
          fVar26 = fVar32 - fVar31;
          fVar27 = fVar21 - fVar25;
          fVar21 = fVar21 + fVar25;
          fVar22 = fVar22 - fVar23;
          *pfVar8 = fVar32 + fVar31;
          pfVar8[-1] = fVar30 + fVar29;
          pfVar8 = pfVar8 + 2;
          *pfVar5 = fVar16 * fVar24 + fVar14 * fVar26;
          pfVar5[-1] = fVar26 * fVar15 + fVar14 * fVar24;
          pfVar5 = pfVar5 + 2;
          *pfVar12 = fVar18 * fVar27 + fVar17 * fVar28;
          pfVar12[-1] = fVar28 * -fVar18 + fVar17 * fVar27;
          pfVar12 = pfVar12 + 2;
          *pfVar3 = fVar19 * fVar21 + fVar20 * fVar22;
          pfVar3[-1] = fVar22 * -fVar19 + fVar20 * fVar21;
          pfVar3 = pfVar3 + 2;
        } while (uVar9 < uVar6 + param_2);
      }
      uVar9 = uVar6 + uVar1;
      uVar13 = uVar9 + param_2;
      if (uVar9 < uVar13) {
        iVar4 = param_4 + iStack_64 * 8;
        fVar17 = *(float *)(iVar4 + 0xc);
        fVar16 = *(float *)(iVar4 + 8);
        fVar18 = (fVar14 + fVar14) * fVar16 - fVar17;
        fVar19 = fVar16 - (fVar14 + fVar14) * fVar17;
        pfVar3 = pfStack_74;
        pfVar5 = pfVar7;
        pfVar8 = pfVar2;
        pfVar12 = pfStack_68;
        do {
          uVar9 = uVar9 + 2;
          fVar29 = pfVar8[-1] + pfVar12[-1];
          fVar20 = pfVar8[-1] - pfVar12[-1];
          fVar31 = *pfVar8 + *pfVar12;
          fVar21 = *pfVar8 - *pfVar12;
          fVar28 = pfVar5[-1] + pfVar3[-1];
          fVar22 = pfVar5[-1] - pfVar3[-1];
          fVar30 = *pfVar5 + *pfVar3;
          fVar23 = *pfVar5 - *pfVar3;
          fVar25 = fVar29 - fVar28;
          fVar27 = fVar21 + fVar22;
          fVar24 = fVar31 - fVar30;
          fVar26 = fVar20 - fVar23;
          fVar20 = fVar20 + fVar23;
          fVar21 = fVar21 - fVar22;
          *pfVar8 = fVar31 + fVar30;
          pfVar8[-1] = fVar29 + fVar28;
          pfVar8 = pfVar8 + 2;
          *pfVar5 = fVar14 * fVar25 + fVar15 * fVar24;
          pfVar5[-1] = fVar24 * -fVar14 + fVar15 * fVar25;
          pfVar5 = pfVar5 + 2;
          *pfVar12 = fVar17 * fVar26 + fVar16 * fVar27;
          pfVar12[-1] = fVar27 * -fVar17 + fVar16 * fVar26;
          pfVar12 = pfVar12 + 2;
          *pfVar3 = fVar18 * fVar20 + fVar19 * fVar21;
          pfVar3[-1] = fVar21 * -fVar18 + fVar19 * fVar20;
          pfVar3 = pfVar3 + 2;
        } while (uVar9 < uVar13);
      }
      pfVar7 = pfVar7 + param_2 * 8;
      pfVar2 = pfVar2 + param_2 * 8;
      pfVar11 = pfVar11 + param_2 * 8;
      pfStack_74 = pfStack_74 + param_2 * 8;
      pfVar10 = pfVar10 + param_2 * 8;
      pfStack_68 = pfStack_68 + param_2 * 8;
      pfStack_6c = pfStack_6c + param_2 * 8;
      pfStack_70 = pfStack_70 + param_2 * 8;
      uVar6 = uVar6 + param_2 * 8;
    } while (uVar6 < param_1);
  }
  return;
}


// =========================================================================
// Function: orknKiVXzulpXWvTMiYOHoIQRQpCxqvkojqbLQ
// Entry: 0x71b0f450 | Size: 188 bytes
// =========================================================================

int orknKiVXzulpXWvTMiYOHoIQRQpCxqvkojqbLQ(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uStack_14;
  
  *(undefined4 *)(param_1 + 0xe28) = 1;
  iVar3 = 0;
  uStack_14 = 0;
  FUN_71b0cd84(param_1 + 0xc18,&uStack_14);
  do {
    puVar2 = (undefined8 *)(param_1 + iVar3);
    iVar3 = iVar3 + 0x10;
    *puVar2 = 0x3e99999a3e99999a;
    puVar2[1] = 0x3e99999a3e99999a;
  } while (iVar3 != 0x600);
  auVar1._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
  auVar1._0_8_ = 0x4100000041000000;
  auVar1 = auVar1 << 0x40 | auVar1;
  iVar3 = 0;
  *(undefined4 *)(param_1 + 0x600) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x604) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x608) = 0x3e99999a;
  do {
    puVar4 = (undefined4 *)(param_1 + 0x60c + iVar3);
    iVar3 = iVar3 + 0x10;
    *puVar4 = *(undefined4 *)auVar1;
    puVar4[1] = *(undefined4 *)(auVar1 + (undefined1  [16])0x4);
    puVar4[2] = *(undefined4 *)(auVar1 + (undefined1  [16])0x8);
    puVar4[3] = *(undefined4 *)(auVar1 + (undefined1  [16])0xc);
  } while (iVar3 != 0x600);
  *(undefined4 *)(param_1 + 0xc0c) = 0x41000000;
  *(undefined4 *)(param_1 + 0xc10) = 0x41000000;
  *(undefined4 *)(param_1 + 0xc14) = 0x41000000;
  *(undefined4 *)(param_1 + 0xe1c) = 0x42;
  *(undefined4 *)(param_1 + 0xe20) = 0x85;
  *(undefined4 *)(param_1 + 0xe24) = 200;
  return param_1;
}


// =========================================================================
// Function: ShyEhURBNnBRBwcqvSjaTmzXGvQoEfFaeJZrRdCKnpoCwCtVJRpuzgTZaLLxXzhuKSNLNJYMxvD_uUwoMlvn
// Entry: 0x71b0f520 | Size: 724 bytes
// =========================================================================

void ShyEhURBNnBRBwcqvSjaTmzXGvQoEfFaeJZrRdCKnpoCwCtVJRpuzgTZaLLxXzhuKSNLNJYMxvD_uUwoMlvn
               (int param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float afStack_228 [129];
  float fStack_24;
  
  thunk_h_mkVooMCQaXlfNoTcKEBiKvyolfCvXsOfzGsqFNWglyzzpsrscQebyBlyqLNnyFnyjKipHMe
            (param_2,0x81,afStack_228,0x81);
  iVar4 = *(int *)(param_1 + 0xe1c);
  iVar3 = -0x204;
  fVar15 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
  fVar16 = 1.0 / (fVar15 + 1.0);
  fVar11 = 40.0;
  do {
    iVar6 = param_1 + iVar3;
    fVar10 = *(float *)(iVar6 + 0x204);
    fVar14 = *(float *)((int)&fStack_24 + iVar3);
    fVar12 = fVar11;
    if (1.0 < fVar10) {
      fVar12 = 40.0 / fVar10;
    }
    fVar12 = fVar16 * fVar12;
    fVar13 = *(float *)(iVar6 + 0x810);
    fVar1 = fVar12 * -0.75;
    if (fVar13 < fVar14) {
      fVar1 = fVar12 * 0.25;
    }
    fVar13 = fVar13 + fVar1;
    *(float *)(iVar6 + 0x810) = fVar13;
    in_fpscr = in_fpscr & 0xfffffff | (uint)(ABS(fVar14 - fVar13) < 0.01) << 0x1f;
    if (SUB41(in_fpscr >> 0x1f,0)) {
      *(float *)(iVar6 + 0x204) = fVar16 * (fVar15 * fVar10 + 50.0);
    }
    iVar3 = iVar3 + 4;
  } while (iVar3 != 0);
  iVar3 = *(int *)(param_1 + 0xe20);
  iVar6 = 1;
  if (iVar4 < 200) {
    iVar6 = iVar4 + 1;
  }
  *(int *)(param_1 + 0xe1c) = iVar6;
  fVar15 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
  iVar6 = 0;
  iVar4 = -(uint)(iVar4 < 200 || *(int *)(param_1 + 0xe28) < 200);
  fVar16 = 1.0 / (fVar15 + 1.0);
  do {
    iVar7 = param_1 + iVar6;
    pfVar2 = (float *)((int)afStack_228 + iVar6);
    fVar10 = *(float *)(iVar7 + 0x204);
    iVar6 = iVar6 + 4;
    fVar14 = *pfVar2;
    fVar12 = fVar11;
    if (1.0 < fVar10) {
      fVar12 = 40.0 / fVar10;
    }
    fVar12 = fVar16 * fVar12;
    fVar13 = *(float *)(iVar7 + 0x810);
    fVar1 = fVar12 * -0.75;
    if (fVar13 < fVar14) {
      fVar1 = fVar12 * 0.25;
    }
    fVar13 = fVar13 + fVar1;
    *(float *)(iVar7 + 0x810) = fVar13;
    in_fpscr = in_fpscr & 0xfffffff | (uint)(ABS(fVar14 - fVar13) < 0.01) << 0x1f;
    if (SUB41(in_fpscr >> 0x1f,0)) {
      *(float *)(iVar7 + 0x204) = fVar16 * (fVar15 * fVar10 + 50.0);
    }
  } while (iVar6 != 0x204);
  iVar7 = *(int *)(param_1 + 0xe24);
  iVar6 = iVar3 + 1;
  if (199 < iVar3) {
    iVar6 = 1;
  }
  iVar9 = iVar4;
  if (199 < *(int *)(param_1 + 0xe28)) {
    iVar9 = 0x81;
  }
  fVar15 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x16) & 3);
  if (iVar3 < 200) {
    iVar9 = iVar4;
  }
  iVar3 = 0;
  *(int *)(param_1 + 0xe20) = iVar6;
  fVar16 = 1.0 / (fVar15 + 1.0);
  do {
    pfVar2 = (float *)(param_1 + 0x408 + iVar3);
    pfVar8 = (float *)((int)afStack_228 + iVar3);
    pfVar5 = (float *)(param_1 + 0xa14 + iVar3);
    fVar10 = *pfVar2;
    iVar3 = iVar3 + 4;
    fVar14 = *pfVar8;
    fVar12 = fVar11;
    if (1.0 < fVar10) {
      fVar12 = 40.0 / fVar10;
    }
    fVar12 = fVar16 * fVar12;
    fVar13 = *pfVar5;
    fVar1 = fVar12 * -0.75;
    if (fVar13 < fVar14) {
      fVar1 = fVar12 * 0.25;
    }
    fVar13 = fVar13 + fVar1;
    *pfVar5 = fVar13;
    if (ABS(fVar14 - fVar13) < 0.01) {
      *pfVar2 = fVar16 * (fVar15 * fVar10 + 50.0);
    }
  } while (iVar3 != 0x204);
  iVar3 = iVar7 + 1;
  if (199 < iVar7) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0xe24) = iVar3;
  if (*(int *)(param_1 + 0xe28) < 200) {
    *(int *)(param_1 + 0xe28) = *(int *)(param_1 + 0xe28) + 1;
    iVar9 = 0x102;
  }
  else {
    if (199 < iVar7) {
      iVar9 = 0x102;
    }
    if (iVar9 < 0) goto LAB_71b0f7d8;
  }
  thunk_BCQSXTSwxIgFnoXKTrXKoCBGbZJPybDM_qhtPiLdbpkOdBRXhyBZHlHRJmDhXyYXxEnZBmdLD
            (param_1 + 0x60c + iVar9 * 4,0x81,param_1 + 0xc18,0x81);
LAB_71b0f7d8:
  imp___aeabi_memmove4(param_3,param_1 + 0xc18,0x204);
  return;
}


// =========================================================================
// Function: wfcNOcgrNgIGqewCuAZnFb_RquURVsFC_NmTWHAzGp
// Entry: 0x71b0f888 | Size: 68 bytes
// =========================================================================

int wfcNOcgrNgIGqewCuAZnFb_RquURVsFC_NmTWHAzGp(int param_1)

{
  undefined4 uStack_14;
  
  thunk_ZDpfQUjMNyZVcxqlNBrEWQ_GVTJHbJwztMHL();
  *(undefined4 *)(param_1 + 0x3114) = 0x3f000000;
  uStack_14 = 0;
  FUN_71b0cd84(param_1 + 0x3118,&uStack_14);
  return param_1;
}


// =========================================================================
// Function: kvXmTOCTNcSgsLBouwBjjAOMjOjaiwDpcnfCpOWKrZLriRnlESzomieskilsXn_iDtFnrbbbcgEYxYqfvEsM
// Entry: 0x71b0f8cc | Size: 460 bytes
// =========================================================================

void kvXmTOCTNcSgsLBouwBjjAOMjOjaiwDpcnfCpOWKrZLriRnlESzomieskilsXn_iDtFnrbbbcgEYxYqfvEsM
               (int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
               undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float afStack_250 [130];
  
  if (param_2 < 200) {
    thunk_uOmehHuAwUBwTLlLKVVJmCUvGGHWxMNbqhrCSQZfwmyoGwoWiEtPFarX(param_1,param_2,param_8);
  }
  thunk_qbjWSrwFAtaGmVBBOQLYTmJ_gxZAwbWSMtOMdbpOMPXQtqARSuAatckHOCTawHTgPSZqCPTcWvziO
            (param_1,param_3,param_4,param_5,param_6,param_7,param_8);
  fVar2 = 4.0;
  fVar6 = 4.0;
  fVar1 = fVar6;
  if (*(float *)(param_1 + 0x2f04) < *(float *)(param_1 + 0x2eec)) {
    fVar1 = 8.0;
  }
  fVar1 = (float)imp_tanhf((*(float *)(param_1 + 0x2f04) - *(float *)(param_1 + 0x2eec)) * fVar1);
  if (*(float *)(param_1 + 0x2ef0) < *(float *)(param_1 + 0x2f0c)) {
    fVar6 = 8.0;
  }
  fVar6 = (float)imp_tanhf((*(float *)(param_1 + 0x2ef0) - *(float *)(param_1 + 0x2f0c)) * fVar6);
  if (*(float *)(param_1 + 0x2f08) < *(float *)(param_1 + 0x2ef4)) {
    fVar2 = 8.0;
  }
  fVar2 = (float)imp_tanhf((*(float *)(param_1 + 0x2f08) - *(float *)(param_1 + 0x2ef4)) * fVar2);
  fVar1 = *(float *)(param_1 + 0x3114) +
          (((fVar6 + 1.0) * 0.5 * *(float *)(param_1 + 0x2efc) +
            *(float *)(param_1 + 0x2ef8) * (fVar1 + 1.0) * 0.5 +
           *(float *)(param_1 + 0x2f00) * (fVar2 + 1.0) * 0.5) - *(float *)(param_1 + 0x3114)) * 0.1
  ;
  if (1.0 < fVar1) {
    fVar1 = 1.0;
  }
  if (fVar1 < 0.01) {
    fVar1 = 0.01;
  }
  *(float *)(param_1 + 0x3114) = fVar1;
  thunk_wiDFrGiVFLhNJ_RYdPBsuRxvkHrembILLfvnWdfltbBwwhDcReGzqnsChIAoaZUPwWmXsgrQUVsLfAktx
            (param_1 + 0x2f10,0x81,afStack_250,0x81);
  iVar3 = 0;
  do {
    pfVar4 = (float *)((int)afStack_250 + iVar3);
    pfVar5 = (float *)(param_1 + 0x3118 + iVar3);
    iVar3 = iVar3 + 4;
    *pfVar5 = 1.0 / (((1.0 - fVar1) / (fVar1 + 0.0001)) * *pfVar4 + 1.0);
  } while (iVar3 != 0x204);
  return;
}


// =========================================================================
// Function: ZDpfQUjMNyZVcxqlNBrEWQ_GVTJHbJwztMHL
// Entry: 0x71b0fb9c | Size: 80 bytes
// =========================================================================

undefined4 * ZDpfQUjMNyZVcxqlNBrEWQ_GVTJHbJwztMHL(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  thunk_YIFnbIonzxrlPCYvggkTTbXoGh(param_1 + 2);
  param_1[0xbba] = 500;
  thunk_DncGDORhSRyIHLSOJHzgXlrNyHmqEIdWENDyBj_IA(param_1 + 0xbbb,0x3f000000);
  thunk_DgqpxlhWvgjKaxeGuAkbmUapzSR(param_1 + 0xbc1);
  return param_1;
}


// =========================================================================
// Function: uOmehHuAwUBwTLlLKVVJmCUvGGHWxMNbqhrCSQZfwmyoGwoWiEtPFarX
// Entry: 0x71b0fbec | Size: 44 bytes
// =========================================================================

void uOmehHuAwUBwTLlLKVVJmCUvGGHWxMNbqhrCSQZfwmyoGwoWiEtPFarX
               (float *param_1,int param_2,float param_3)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;
  
  fVar1 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  fVar2 = (float)VectorSignedToFloat(param_2 + 1,(byte)(in_fpscr >> 0x16) & 3);
  *param_1 = (param_3 + *param_1 * fVar1) / fVar2;
  return;
}


// =========================================================================
// Function: qbjWSrwFAtaGmVBBOQLYTmJ_gxZAwbWSMtOMdbpOMPXQtqARSuAatckHOCTawHTgPSZqCPTcWvziO
// Entry: 0x71b0fc18 | Size: 668 bytes
// =========================================================================

void qbjWSrwFAtaGmVBBOQLYTmJ_gxZAwbWSMtOMdbpOMPXQtqARSuAatckHOCTawHTgPSZqCPTcWvziO
               (float *param_1,int param_2,int param_3,int param_4,float *param_5,float param_6,
               float param_7)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  pfVar4 = param_1 + 0xbba;
  iVar2 = 4;
  do {
    if (*(float *)((int)param_5 + iVar2) == 0.0) {
      fVar11 = param_1[0xbc3] + param_1[0xbc3] * -0.3;
      goto LAB_71b0fcec;
    }
    iVar2 = iVar2 + 4;
  } while (iVar2 != 0x204);
  fVar11 = 0.0;
  iVar2 = 4;
  do {
    fVar3 = (float)thunk_DmaMTqA_tGBQkErjEQPZTvKXAKENTY(*(undefined4 *)((int)param_5 + iVar2));
    iVar2 = iVar2 + 4;
    fVar11 = fVar11 + fVar3;
  } while (iVar2 != 0x204);
  fVar3 = *param_5;
  fVar11 = (float)thunk_cLSkMcQdXEODSRBTKo_I_RSpCQ_FcM(fVar11 * 0.007751938);
  fVar11 = param_1[0xbc3] + (fVar11 / ((param_6 - fVar3) * 0.007751938) - param_1[0xbc3]) * 0.3;
LAB_71b0fcec:
  param_1[0xbc3] = fVar11;
  iVar2 = 0;
  fVar11 = 0.0;
  do {
    pfVar5 = (float *)(param_4 + iVar2);
    iVar2 = iVar2 + 4;
    fVar11 = fVar11 + *pfVar5;
  } while (iVar2 != 0x204);
  iVar2 = 0;
  fVar7 = 0.0;
  fVar3 = fVar7;
  fVar8 = fVar7;
  do {
    pfVar5 = (float *)(param_4 + iVar2);
    pfVar6 = (float *)((int)param_5 + iVar2);
    iVar2 = iVar2 + 4;
    fVar9 = *pfVar5 - fVar11 * 0.007751938;
    fVar10 = *pfVar6 - param_6 * 0.007751938;
    fVar8 = fVar8 + fVar9 * fVar9;
    fVar3 = fVar3 + fVar10 * fVar9;
    fVar7 = fVar7 + fVar10 * fVar10;
  } while (iVar2 != 0x204);
  fVar11 = *pfVar4;
  *pfVar4 = (float)((int)fVar11 + -1);
  param_1[1] = param_1[1] + param_7;
  param_1[0xbc2] =
       param_1[0xbc2] +
       ((fVar7 * 0.007751938 -
        (fVar3 * 0.007751938 * fVar3 * 0.007751938) / (fVar8 * 0.007751938 + 0.0001)) /
        (*param_1 + 0.0001) - param_1[0xbc2]) * 0.3;
  if ((int)fVar11 < 2) {
    thunk_bySnQ_mmiSHbGr_NkhhUkmfhQXkszdM_UdKKkiOzlQW_PXptFA_AuBxSstdktPa
              (param_1 + 0xbbb,param_1 + 2);
    thunk_XJQXXeGD_rAyCaYevXNuuTOxGDOGfb(param_1 + 2);
    fVar11 = param_1[1];
    *pfVar4 = 7.00649e-43;
    param_1[1] = 0.0;
    *param_1 = (fVar11 / 500.0 + *param_1) * 0.5;
  }
  else {
    thunk_OyzYrmriocmcwJwVtwTgPywRkBbyOvQSoFCtUrOcRdaYFZImh(param_1 + 2,param_1 + 0xbc1);
  }
  iVar2 = 0;
  do {
    fVar3 = *(float *)(param_2 + iVar2) + *(float *)(param_2 + iVar2);
    fVar7 = fVar3 + 1.0;
    fVar8 = *(float *)(param_3 + iVar2);
    fVar11 = (float)thunk_DmaMTqA_tGBQkErjEQPZTvKXAKENTY(fVar7);
    pfVar4 = (float *)((int)param_1 + iVar2 + 0x2f10);
    iVar2 = iVar2 + 4;
    fVar9 = *pfVar4;
    *pfVar4 = fVar9 + (((fVar8 + 1.0) * (fVar3 / (fVar7 + 0.0001)) - fVar11) - fVar9) * 0.5;
  } while (iVar2 != 0x204);
  fVar11 = 0.0;
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 0x2f10;
    iVar2 = iVar2 + 4;
    fVar11 = fVar11 + *(float *)((int)param_1 + iVar1);
  } while (iVar2 != 0x204);
  param_1[0xbc1] = fVar11 * 0.007751938;
  return;
}


// =========================================================================
// Function: YIFnbIonzxrlPCYvggkTTbXoGh
// Entry: 0x71b0ffe0 | Size: 28 bytes
// =========================================================================

undefined4 YIFnbIonzxrlPCYvggkTTbXoGh(undefined4 param_1)

{
  imp___aeabi_memclr4(param_1,12000);
  return param_1;
}


// =========================================================================
// Function: XJQXXeGD_rAyCaYevXNuuTOxGDOGfb
// Entry: 0x71b0fffc | Size: 20 bytes
// =========================================================================

void XJQXXeGD_rAyCaYevXNuuTOxGDOGfb(undefined4 param_1)

{
  imp___aeabi_memclr4(param_1,12000);
  return;
}


// =========================================================================
// Function: OyzYrmriocmcwJwVtwTgPywRkBbyOvQSoFCtUrOcRdaYFZImh
// Entry: 0x71b10010 | Size: 192 bytes
// =========================================================================

void OyzYrmriocmcwJwVtwTgPywRkBbyOvQSoFCtUrOcRdaYFZImh(int param_1,float *param_2)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  
  fVar2 = *param_2;
  if ((fVar2 < 100.0) && (0.0 <= fVar2)) {
    iVar3 = (uint)(0.0 < fVar2 * 10.0) * (int)(fVar2 * 10.0);
    *(int *)(param_1 + iVar3 * 4) = *(int *)(param_1 + iVar3 * 4) + 1;
  }
  fVar2 = param_2[2];
  if ((fVar2 < 50.0) && (0.0 <= fVar2)) {
    iVar3 = param_1 + (uint)(0.0 < fVar2 * 20.0) * (int)(fVar2 * 20.0) * 4;
    *(int *)(iVar3 + 4000) = *(int *)(iVar3 + 4000) + 1;
  }
  fVar2 = param_2[1];
  if (fVar2 < 100.0) {
    if (fVar2 < 0.0) {
      return;
    }
    piVar1 = (int *)(param_1 + (uint)(0.0 < fVar2 * 10.0) * (int)(fVar2 * 10.0) * 4 + 8000);
    *piVar1 = *piVar1 + 1;
  }
  return;
}


// =========================================================================
// Function: DncGDORhSRyIHLSOJHzgXlrNyHmqEIdWENDyBj_IA
// Entry: 0x71b10128 | Size: 4 bytes
// =========================================================================

void DncGDORhSRyIHLSOJHzgXlrNyHmqEIdWENDyBj_IA(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 1) = 0x3f0000003f000000;
  *(undefined8 *)(param_1 + 3) = 0x3f800000;
  param_1[5] = 0;
  return;
}


// =========================================================================
// Function: bySnQ_mmiSHbGr_NkhhUkmfhQXkszdM_UdKKkiOzlQW_PXptFA_AuBxSstdktPa
// Entry: 0x71b1012c | Size: 1048 bytes
// =========================================================================

void bySnQ_mmiSHbGr_NkhhUkmfhQXkszdM_UdKKkiOzlQW_PXptFA_AuBxSstdktPa(float *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint in_fpscr;
  uint uVar10;
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
  
  fVar19 = 0.0;
  fVar20 = (float)VectorSignedToFloat(*param_2,(byte)(in_fpscr >> 0x16) & 3);
  fVar15 = (float)VectorSignedToFloat(param_2[1],(byte)(in_fpscr >> 0x16) & 3);
  fVar13 = (float)VectorSignedToFloat(param_2[2],(byte)(in_fpscr >> 0x16) & 3);
  fVar11 = (float)VectorSignedToFloat(param_2[3],(byte)(in_fpscr >> 0x16) & 3);
  iVar2 = param_2[1] + *param_2 + param_2[2] + param_2[3] + param_2[4] + param_2[5] + param_2[6] +
          param_2[7] + param_2[8] + param_2[9];
  fVar16 = (float)VectorSignedToFloat(param_2[4],(byte)(in_fpscr >> 0x16) & 3);
  fVar21 = (float)VectorSignedToFloat(param_2[7],(byte)(in_fpscr >> 0x16) & 3);
  fVar14 = (float)VectorSignedToFloat(param_2[5],(byte)(in_fpscr >> 0x16) & 3);
  fVar17 = (float)VectorSignedToFloat(param_2[6],(byte)(in_fpscr >> 0x16) & 3);
  fVar12 = (float)VectorSignedToFloat(param_2[8],(byte)(in_fpscr >> 0x16) & 3);
  fVar18 = (float)VectorSignedToFloat(param_2[9],(byte)(in_fpscr >> 0x16) & 3);
  fVar11 = fVar20 * 0.05 + 0.0 + fVar15 * 0.15 + fVar13 * 0.25 + fVar11 * 0.35 + fVar16 * 0.45000002
           + fVar14 * 0.55 + fVar17 * 0.65000004 + fVar21 * 0.75 + fVar12 * 0.85 + fVar18 * 0.95;
  if (0 < iVar2) {
    fVar12 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
    fVar11 = fVar11 / fVar12;
  }
  iVar2 = 0;
  fVar12 = fVar19;
  do {
    iVar3 = iVar2 + 1;
    fVar14 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
    fVar13 = (float)VectorSignedToFloat(param_2[iVar2],(byte)(in_fpscr >> 0x16) & 3);
    fVar14 = (fVar14 + 0.5) * 0.1;
    fVar13 = fVar14 * fVar13;
    fVar12 = fVar12 + fVar13 * fVar14;
    fVar19 = fVar13 + fVar19;
    iVar2 = iVar3;
  } while (iVar3 != 1000);
  fVar12 = fVar12 * 0.002 - fVar11 * fVar19 * 0.002;
  uVar10 = in_fpscr & 0xfffffff | (uint)(fVar12 < 0.05) << 0x1f;
  if (SUB41(uVar10 >> 0x1f,0)) {
    fVar11 = 1.0;
  }
  else {
    fVar13 = 0.2;
    if (0.2 < fVar11 * 1.2) {
      fVar13 = fVar11 * 1.2;
    }
    uVar10 = in_fpscr & 0xfffffff | (uint)(fVar13 < 1.0) << 0x1f;
    fVar11 = 1.0;
    if (SUB41(uVar10 >> 0x1f,0)) {
      fVar11 = fVar13;
    }
  }
  fVar13 = 0.0;
  *param_1 = fVar11;
  iVar6 = 0;
  iVar3 = 0;
  iVar2 = 0;
  iVar9 = 0;
  iVar8 = 0;
  fVar11 = fVar13;
  fVar14 = fVar13;
  do {
    while( true ) {
      iVar7 = iVar3;
      iVar3 = param_2[iVar6 + 1000];
      fVar15 = (float)VectorSignedToFloat(iVar6,(byte)(uVar10 >> 0x16) & 3);
      fVar15 = (fVar15 + 0.5) * 0.05;
      if (iVar3 <= iVar7) break;
      iVar6 = iVar6 + 1;
      iVar2 = iVar7;
      iVar9 = iVar3;
      iVar8 = iVar7;
      fVar13 = fVar15;
      fVar11 = fVar14;
      fVar14 = fVar15;
      if (iVar6 == 1000) goto LAB_71b1035c;
    }
    if (iVar2 < iVar3) {
      iVar8 = iVar3;
      iVar2 = iVar3;
      fVar11 = fVar15;
    }
    iVar6 = iVar6 + 1;
    iVar3 = iVar7;
  } while (iVar6 != 1000);
LAB_71b1035c:
  uVar1 = uVar10 & 0xfffffff | (uint)(ABS(fVar11 - fVar14) < 0.1) << 0x1f;
  if (SUB41(uVar1 >> 0x1f,0)) {
    fVar15 = (float)VectorSignedToFloat(iVar3,(byte)(uVar1 >> 0x16) & 3);
    fVar16 = (float)VectorSignedToFloat(iVar8,(byte)(uVar1 >> 0x16) & 3);
    uVar1 = uVar10 & 0xfffffff | (uint)(fVar15 * 0.5 < fVar16) << 0x1f;
    if (SUB41(uVar1 >> 0x1f,0)) {
      iVar9 = iVar3 + iVar8;
      fVar13 = (fVar14 + fVar11) * 0.5;
    }
  }
  fVar14 = 0.0;
  iVar7 = 0;
  iVar3 = 0;
  iVar8 = 0;
  iVar2 = 0;
  iVar6 = 0;
  fVar15 = fVar14;
  fVar11 = fVar14;
  do {
    while( true ) {
      fVar16 = fVar14;
      iVar5 = iVar8;
      iVar8 = param_2[iVar7 + 2000];
      fVar14 = (float)VectorSignedToFloat(iVar7,(byte)(uVar1 >> 0x16) & 3);
      fVar14 = (fVar14 + 0.5) * 0.1;
      if (iVar8 <= iVar5) break;
      iVar7 = iVar7 + 1;
      iVar3 = iVar5;
      iVar2 = iVar5;
      iVar6 = iVar8;
      fVar15 = fVar14;
      fVar11 = fVar16;
      if (iVar7 == 1000) goto LAB_71b1042c;
    }
    if (iVar2 < iVar8) {
      iVar3 = iVar8;
      iVar2 = iVar8;
      fVar11 = fVar14;
    }
    iVar7 = iVar7 + 1;
    iVar8 = iVar5;
    fVar14 = fVar16;
  } while (iVar7 != 1000);
LAB_71b1042c:
  uVar10 = uVar1 & 0xfffffff | (uint)(ABS(fVar11 - fVar14) < 0.2) << 0x1f;
  if (SUB41(uVar10 >> 0x1f,0)) {
    fVar16 = (float)VectorSignedToFloat(iVar8,(byte)(uVar10 >> 0x16) & 3);
    fVar17 = (float)VectorSignedToFloat(iVar3,(byte)(uVar10 >> 0x16) & 3);
    uVar10 = uVar1 & 0xfffffff | (uint)(fVar16 * 0.5 < fVar17) << 0x1f;
    if (SUB41(uVar10 >> 0x1f,0)) {
      iVar6 = iVar8 + iVar3;
      fVar15 = (fVar14 + fVar11) * 0.5;
    }
  }
  uVar10 = uVar10 & 0xfffffff | (uint)(fVar12 < 0.05) << 0x1f;
  uVar4 = (uint)(0x95 < iVar9 && 0.6 <= fVar13);
  fVar12 = (float)VectorUnsignedToFloat(uVar4,(byte)(uVar10 >> 0x16) & 3);
  uVar1 = (uint)(!SUB41(uVar10 >> 0x1f,0) && 0x95 < iVar6);
  fVar11 = (float)VectorUnsignedToFloat(uVar1,(byte)(uVar10 >> 0x16) & 3);
  fVar12 = 1.0 / (fVar12 + 1.0 + fVar11);
  param_1[3] = fVar12;
  fVar11 = 0.16;
  if (0.16 < fVar15 * 1.2) {
    fVar11 = fVar15 * 1.2;
  }
  fVar14 = 1.0;
  if (fVar11 < 1.0) {
    fVar14 = fVar11;
  }
  param_1[2] = fVar14;
  fVar11 = 0.0;
  if (uVar4 == 1) {
    fVar11 = 0.1;
    if (0.1 < fVar13 * 0.9) {
      fVar11 = fVar13 * 0.9;
    }
    fVar13 = 0.95;
    if (fVar11 < 0.95) {
      fVar13 = fVar11;
    }
    param_1[1] = fVar13;
    fVar11 = fVar12;
  }
  param_1[4] = fVar11;
  fVar11 = 0.0;
  if (uVar1 != 0) {
    fVar11 = fVar12;
  }
  param_1[5] = fVar11;
  return;
}


// =========================================================================
// Function: MRPsOTayqvGlwkRg_djwJCNjKEULoXMl
// Entry: 0x71b105c0 | Size: 32 bytes
// =========================================================================

void MRPsOTayqvGlwkRg_djwJCNjKEULoXMl(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 1) = 0x3f0000003f000000;
  *(undefined8 *)(param_1 + 3) = 0x3f800000;
  param_1[5] = 0;
  return;
}


// =========================================================================
// Function: DgqpxlhWvgjKaxeGuAkbmUapzSR
// Entry: 0x71b10608 | Size: 52 bytes
// =========================================================================

undefined4 * DgqpxlhWvgjKaxeGuAkbmUapzSR(undefined4 *param_1)

{
  *param_1 = 0x3f000000;
  param_1[1] = 0x3f000000;
  param_1[2] = 0x3f000000;
  FUN_71b0cd84(param_1 + 3,&DAT_7009a734);
  return param_1;
}


// =========================================================================
// Function: ztwrHYYRBhSsYQxcAOFtZKdgD_CTMithEqHrAtBXAerWSzVzsIoNRPIDPSsWYad
// Entry: 0x71b10690 | Size: 72 bytes
// =========================================================================

void ztwrHYYRBhSsYQxcAOFtZKdgD_CTMithEqHrAtBXAerWSzVzsIoNRPIDPSsWYad
               (undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (3 < param_2) {
    return;
  }
  uVar1 = *(undefined4 *)(&DAT_70086e48 + param_2 * 4);
  uVar2 = *(undefined4 *)(&DAT_70086db8 + param_2 * 4);
  *(char *)(param_1 + 2) = (char)(0x1010100 >> ((param_2 & 0x1f) << 3));
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}


// =========================================================================
// Function: LnOB_mJlQBOTUGvPuUaYTlZSuk_KtqeAmeAKnyHbhyRTYdMeiduM
// Entry: 0x71b10730 | Size: 96 bytes
// =========================================================================

undefined4 *
LnOB_mJlQBOTUGvPuUaYTlZSuk_KtqeAmeAKnyHbhyRTYdMeiduM(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *param_1 = param_2;
  uStack_1c = 0x3f800000;
  FUN_71b0cd84(param_1 + 0x103,&uStack_1c);
  uStack_20 = 0;
  FUN_71b0cd84(param_1 + 0x82,&uStack_20);
  uStack_24 = 0;
  FUN_71b0cd84(param_1 + 1,&uStack_24);
  return param_1;
}


// =========================================================================
// Function: rnoOryioIowYBvrIgEQJNhFWuMBjsvsVnsgoAWZbikwDbtCaRAMM_dPVuyCqvugfxQcF
// Entry: 0x71b10790 | Size: 376 bytes
// =========================================================================

void rnoOryioIowYBvrIgEQJNhFWuMBjsvsVnsgoAWZbikwDbtCaRAMM_dPVuyCqvugfxQcF
               (int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  
  iVar3 = -0x204;
  pfVar2 = (float *)*param_1;
  iVar4 = iVar3;
  do {
    fVar7 = *(float *)(param_3 + iVar4 + 0x204);
    fVar5 = *(float *)(param_6 + iVar4 + 0x204);
    fVar6 = 0.0;
    if (fVar7 < fVar5) {
      fVar6 = fVar5 / (fVar7 + 0.0001) + -1.0;
    }
    pfVar1 = (float *)((int)param_1 + iVar4 + 0x610);
    fVar6 = fVar6 * 0.01999998 +
            *pfVar1 * (*(float *)((int)param_1 + iVar4 + 0x208) /
                      (*(float *)(param_4 + iVar4 + 0x204) + 0.0001)) * 0.98;
    fVar6 = fVar6 / (*pfVar2 + fVar6);
    *pfVar1 = fVar6;
    if (1.0 < fVar6) {
      fVar6 = 1.0;
    }
    in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar6 < pfVar2[1]) << 0x1f;
    if (SUB41(in_fpscr >> 0x1f,0)) {
      fVar6 = pfVar2[1];
    }
    iVar4 = iVar4 + 4;
    *pfVar1 = fVar6;
  } while (iVar4 != 0);
  if (param_2 < 0x32) {
    fVar6 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
    fVar5 = (float)VectorSignedToFloat(0x32 - param_2,(byte)(in_fpscr >> 0x16) & 3);
    do {
      pfVar1 = (float *)((int)param_1 + iVar3 + 0x40c);
      fVar7 = *(float *)(param_6 + iVar3 + 0x204) + *pfVar1;
      *pfVar1 = fVar7;
      pfVar1 = (float *)((int)param_1 + iVar3 + 0x610);
      fVar7 = (fVar7 - *pfVar2 * *(float *)(param_5 + iVar3 + 0x204)) / (fVar7 + 0.0001);
      if (1.0 < fVar7) {
        fVar7 = 1.0;
      }
      if (fVar7 < pfVar2[1]) {
        fVar7 = pfVar2[1];
      }
      iVar3 = iVar3 + 4;
      *pfVar1 = (fVar7 * fVar5 + *pfVar1 * fVar6) * 0.02;
    } while (iVar3 != 0);
  }
  imp___aeabi_memmove4(param_1 + 1,param_6,0x204);
  return;
}


// =========================================================================
// Function: ulihJQtFaRuCYSYjALwwFUgIKGYQqcUmOMjzIfbFWLuVVGBRa_CsNlAZpdg
// Entry: 0x71b1091c | Size: 232 bytes
// =========================================================================

float ulihJQtFaRuCYSYjALwwFUgIKGYQqcUmOMjzIfbFWLuVVGBRa_CsNlAZpdg
                (int *param_1,int param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if ((200 < param_2) && (*(char *)(*param_1 + 8) != '\0')) {
    fVar2 = 1.0;
    fVar1 = (float)thunk_CtFkdMPUq__nQWblLGweEClPTortNiChXic(param_5 / (param_4 + 1.0));
    if (0.5 < fVar1) {
      fVar2 = (fVar1 + -0.5) * 1.3 + 1.0;
      if (1.0 < fVar1 * fVar2) {
        fVar2 = 1.0 / fVar1;
      }
    }
    fVar3 = 1.0;
    if (fVar1 < 0.5) {
      if (fVar1 < *(float *)(*param_1 + 4)) {
        fVar1 = *(float *)(*param_1 + 4);
      }
      fVar3 = (0.5 - fVar1) * -0.3 + 1.0;
    }
    return (1.0 - param_3) * fVar3 + param_3 * fVar2;
  }
  return 1.0;
}


// =========================================================================
// Function: ZLJEmOHCbBpQaNrLtDrCIcJ
// Entry: 0x71b10ab0 | Size: 28 bytes
// =========================================================================

void ZLJEmOHCbBpQaNrLtDrCIcJ(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 9) = 0;
  *(undefined4 *)((int)param_1 + 5) = 0;
  return;
}


// =========================================================================
// Function: vHEVIyQ_GPPAsjlvswgggpGdxFX
// Entry: 0x71b10acc | Size: 32 bytes
// =========================================================================

void vHEVIyQ_GPPAsjlvswgggpGdxFX(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (*(char *)(param_1 + 4) != '\0') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}


// =========================================================================
// Function: jxSpON_bAuTQBgkwrPcTZBS
// Entry: 0x71b10aec | Size: 4 bytes
// =========================================================================

void jxSpON_bAuTQBgkwrPcTZBS(void)

{
  return;
}


// =========================================================================
// Function: yyjVLGUSyHmBXMdBCMLAShtEdUrWJvOWfGfCpiUxccWBjbfaUPDvPBLr
// Entry: 0x71b10af0 | Size: 144 bytes
// =========================================================================

void yyjVLGUSyHmBXMdBCMLAShtEdUrWJvOWfGfCpiUxccWBjbfaUPDvPBLr
               (float *param_1,short *param_2,float param_3)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  
  if (param_3 == 0.0) {
    return;
  }
  if ((*(char *)(param_1 + 4) == '\0') || (param_1[3] != param_3)) {
    param_1[3] = param_3;
    *(undefined1 *)(param_1 + 4) = 1;
    *param_1 = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
  }
  fVar2 = 0.0;
  iVar1 = (int)param_3 << 1;
  do {
    iVar1 = iVar1 + -2;
    fVar3 = (float)VectorSignedToFloat((int)*param_2 * (int)*param_2,(byte)(in_fpscr >> 0x16) & 3);
    fVar2 = fVar2 + fVar3;
    param_2 = param_2 + 1;
  } while (iVar1 != 0);
  param_1[1] = (float)((int)param_1[1] + (int)param_3);
  *param_1 = fVar2 + *param_1;
  fVar3 = param_1[2];
  if (param_1[2] < fVar2) {
    fVar3 = fVar2;
  }
  param_1[2] = fVar3;
  return;
}


// =========================================================================
// Function: XblebQLVzsZJgRBhvAWHBkmIzbwrLSHliZuwe
// Entry: 0x71b10b84 | Size: 56 bytes
// =========================================================================

void XblebQLVzsZJgRBhvAWHBkmIzbwrLSHliZuwe(undefined4 *param_1,int param_2)

{
  if ((*(char *)(param_1 + 4) != '\0') && (param_1[3] == param_2)) {
    return;
  }
  param_1[3] = param_2;
  *(undefined1 *)(param_1 + 4) = 1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// =========================================================================
// Function: VOQNCItlBsWaoKigCEilzgyXEoqnOTevJiXFgxtTJfCPegiClruJfeBU
// Entry: 0x71b10bbc | Size: 184 bytes
// =========================================================================

void VOQNCItlBsWaoKigCEilzgyXEoqnOTevJiXFgxtTJfCPegiClruJfeBU
               (float *param_1,float *param_2,float param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  
  if (param_3 == 0.0) {
    return;
  }
  if ((*(char *)(param_1 + 4) == '\0') || (param_1[3] != param_3)) {
    param_1[3] = param_3;
    *(undefined1 *)(param_1 + 4) = 1;
    *param_1 = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
  }
  fVar4 = 0.0;
  iVar3 = (int)param_3 << 2;
  do {
    fVar5 = *param_2;
    param_2 = param_2 + 1;
    if (fVar5 < -32768.0) {
      fVar5 = -32768.0;
    }
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar5 < 32767.0) << 0x1f |
            (uint)(fVar5 == 32767.0) << 0x1e;
    in_fpscr = uVar1 | (uint)NAN(fVar5) << 0x1c;
    bVar2 = (byte)(uVar1 >> 0x18);
    if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
      fVar5 = 32767.0;
    }
    iVar3 = iVar3 + -4;
    fVar5 = (float)VectorSignedToFloat((int)(short)(int)fVar5 * (int)(short)(int)fVar5,
                                       (byte)(in_fpscr >> 0x16) & 3);
    fVar4 = fVar4 + fVar5;
  } while (iVar3 != 0);
  param_1[1] = (float)((int)param_1[1] + (int)param_3);
  *param_1 = fVar4 + *param_1;
  fVar5 = param_1[2];
  if (param_1[2] < fVar4) {
    fVar5 = fVar4;
  }
  param_1[2] = fVar5;
  return;
}


// =========================================================================
// Function: _lGjooXwUWyfqCfCm_itlETPJmxXXvCmFlk
// Entry: 0x71b10c80 | Size: 76 bytes
// =========================================================================

void _lGjooXwUWyfqCfCm_itlETPJmxXXvCmFlk(undefined4 *param_1,int param_2)

{
  if ((*(char *)(param_1 + 4) != '\0') && (param_1[3] == param_2)) {
    param_1[1] = param_1[1] + param_2;
    return;
  }
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[2] = 0;
  param_1[3] = param_2;
  *param_1 = 0;
  param_1[1] = param_2;
  return;
}


// =========================================================================
// Function: POC_fYNguLrMxvFLuRGVnrkHnZBnC
// Entry: 0x71b10ccc | Size: 180 bytes
// =========================================================================

int POC_fYNguLrMxvFLuRGVnrkHnZBnC(float *param_1)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  
  iVar1 = 0x7f;
  if (param_1[1] != 0.0) {
    fVar3 = *param_1;
    fVar2 = (float)VectorUnsignedToFloat(param_1[1],(byte)(in_fpscr >> 0x16) & 3);
    fVar2 = fVar3 / fVar2;
    if (0.00021423966 < fVar2) {
      fVar2 = (float)imp_log10f(fVar2 * 9.313226e-10);
      iVar1 = (int)(fVar2 * -10.0 + 0.5);
      if (iVar1 != 0x7f) goto LAB_71b10d58;
    }
    iVar1 = 0x7f;
    if (fVar3 != 0.0) {
      iVar1 = 0x7e;
    }
  }
LAB_71b10d58:
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  if (*(char *)(param_1 + 4) != '\0') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return iVar1;
}


// =========================================================================
// Function: frpoTspqIewoBf_of_TEKCIurqjucgRptiFnF
// Entry: 0x71b10d88 | Size: 240 bytes
// =========================================================================

void frpoTspqIewoBf_of_TEKCIurqjucgRptiFnF(int *param_1,float *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint in_fpscr;
  uint uVar4;
  float fVar5;
  float fVar6;
  
  if (param_2[1] == 0.0) {
    *param_1 = 0x7f;
    param_1[1] = 0x7f;
  }
  else {
    iVar3 = 0x7f;
    fVar5 = (float)VectorUnsignedToFloat(param_2[1],(byte)(in_fpscr >> 0x16) & 3);
    iVar2 = 0x7f;
    fVar5 = *param_2 / fVar5;
    uVar4 = in_fpscr & 0xfffffff | (uint)(fVar5 == 0.00021423966) << 0x1e |
            (uint)(0.00021423966 <= fVar5) << 0x1d;
    bVar1 = (byte)(uVar4 >> 0x18);
    if ((bool)(bVar1 >> 5 & 1) && !(bool)(bVar1 >> 6)) {
      fVar5 = (float)imp_log10f(fVar5 * 9.313226e-10);
      iVar2 = (int)(fVar5 * -10.0 + 0.5);
    }
    fVar5 = param_2[2];
    fVar6 = (float)VectorUnsignedToFloat(param_2[3],(byte)(uVar4 >> 0x16) & 3);
    *param_1 = iVar2;
    if (0.00021423966 < fVar5 / fVar6) {
      fVar5 = (float)imp_log10f((fVar5 / fVar6) * 9.313226e-10);
      iVar3 = (int)(fVar5 * -10.0 + 0.5);
    }
    param_1[1] = iVar3;
  }
  *param_2 = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  if (*(char *)(param_2 + 4) != '\0') {
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}


// =========================================================================
// Function: so_PEXkTIDAYbHQlMNkcBNHHpKocRyOEr
// Entry: 0x71b10eec | Size: 396 bytes
// =========================================================================

uint * so_PEXkTIDAYbHQlMNkcBNHHpKocRyOEr(uint *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint *unaff_r6;
  uint uVar3;
  int iVar4;
  uint *puStack_2c;
  undefined1 uStack_28;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = param_3;
  puVar1 = param_1 + 1;
  *puVar1 = 0;
  if ((param_2 != 0) && (param_3 == 2)) {
    if (0x2aaaaaa < param_2) {
      FUN_71b11a48(puVar1);
      goto LAB_71b11044;
    }
    uVar2 = thunk_MwhHq(param_2 * 0x60);
    param_1[1] = uVar2;
    param_1[3] = uVar2 + param_2 * 0x60;
    iVar4 = ((param_2 * 0x60 - 0x60) / 0x60) * 0x60 + 0x60;
    imp___aeabi_memclr4(uVar2,iVar4);
    param_1[2] = uVar2 + iVar4;
  }
  unaff_r6 = param_1 + 4;
  *unaff_r6 = 0;
  uStack_28 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  puStack_2c = unaff_r6;
  if ((param_2 != 0) && (param_3 == 3)) {
    if (0x369d03 < param_2) {
LAB_71b11044:
      FUN_71b11b68(unaff_r6);
      FUN_71b11ab0(&puStack_2c);
      if (*puVar1 != 0) {
        param_1[2] = *puVar1;
        thunk_qNQrlu();
      }
                    /* WARNING: Subroutine does not return */
      thunk_NAUpeWJSovvMoxKm_();
    }
    iVar4 = param_2 * 0x4b0;
    uVar2 = thunk_MwhHq(iVar4);
    uVar3 = param_2 * 0x4b0 + uVar2;
    param_1[4] = uVar2;
    param_1[5] = uVar2;
    param_1[6] = uVar3;
    do {
      thunk_gecnDSZTzrsiFfWZpXkUpshTWpJrEoKqDMT(uVar2);
      iVar4 = iVar4 + -0x4b0;
      uVar2 = uVar2 + 0x4b0;
    } while (iVar4 != 0);
    param_3 = *param_1;
    param_1[5] = uVar3;
  }
  if ((param_3 & 0xfffffffe) != 2) {
                    /* WARNING: Subroutine does not return */
    thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
              (s_____webrtc_apm_src_webrtc_module_70062fdb,0x22,
               s_num_bands_____2____num_bands_____70066222,&DAT_7009602d);
  }
  return param_1;
}


// =========================================================================
// Function: ZDcQiBQbrKVrUyYWFaJjAWtOMyGTztH
// Entry: 0x71b11094 | Size: 100 bytes
// =========================================================================

int ZDcQiBQbrKVrUyYWFaJjAWtOMyGTztH(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 != 0) {
    iVar1 = *(int *)(param_1 + 0x14);
    iVar2 = iVar3;
    if (iVar1 != iVar3) {
      do {
        iVar1 = thunk_NVmbesL_aFX_tUzwJfCAGfyXBwVXKobaxpN(iVar1 + -0x4b0);
      } while (iVar1 != iVar3);
      iVar2 = *(int *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x14) = iVar3;
    thunk_qNQrlu(iVar2);
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 4);
    thunk_qNQrlu();
  }
  return param_1;
}


// =========================================================================
// Function: OygqZ_tHhOTybTgJLgMMVrHQEOELZoFcFOImsfcQXgQfauCnoYmFWXviUNOctitdl
// Entry: 0x71b110f8 | Size: 204 bytes
// =========================================================================

void OygqZ_tHhOTybTgJLgMMVrHQEOELZoFcFOImsfcQXgQfauCnoYmFWXviUNOctitdl
               (int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  if (*(int *)(param_3 + 0x1c) == 3) {
    iVar6 = *(int *)(param_1 + 0x10);
    if (*(int *)(param_1 + 0x14) != iVar6) {
      iVar9 = 0;
      iVar7 = 0;
      uVar8 = 0;
      do {
        piVar2 = (int *)(*(int *)(param_3 + 0x20) + iVar7);
        iVar5 = *piVar2;
        iVar1 = **(int **)(param_2 + 0x2c);
        puVar3 = (undefined4 *)(iVar1 + uVar8 * 8);
        iVar4 = 0;
        if (piVar2[1] != iVar5) {
          iVar4 = iVar5;
        }
        if ((*(int **)(param_2 + 0x2c))[1] == iVar1) {
          puVar3 = (undefined4 *)(uVar8 << 3);
        }
        thunk_kpnHfhDxlOnmfuUhpwGpBBVhOHBA_DrpnmFnPsesLvpTQIDogPrwSFjDBawiDNNJgCZwhZqKmuNymLicBXGuPk_gsthpYIo
                  (iVar6 + iVar9,*puVar3,iVar4);
        iVar6 = *(int *)(param_1 + 0x10);
        iVar9 = iVar9 + 0x4b0;
        iVar7 = iVar7 + 0xc;
        uVar8 = uVar8 + 1;
      } while (uVar8 < (uint)((*(int *)(param_1 + 0x14) - iVar6 >> 4) * -0x69d0369d));
    }
  }
  else if (*(int *)(param_3 + 0x1c) == 2) {
    thunk_CXmWkiPkSgVWTKkyUyIqgNxPPhZRSZfHLCFCkJyZYArR_AsIWEmjvRLXxak_bdtmwKdiPxOhQz
              (param_1,param_2,param_3);
    return;
  }
  return;
}


// =========================================================================
// Function: CXmWkiPkSgVWTKkyUyIqgNxPPhZRSZfHLCFCkJyZYArR_AsIWEmjvRLXxak_bdtmwKdiPxOhQz
// Entry: 0x71b111c4 | Size: 224 bytes
// =========================================================================

void CXmWkiPkSgVWTKkyUyIqgNxPPhZRSZfHLCFCkJyZYArR_AsIWEmjvRLXxak_bdtmwKdiPxOhQz
               (int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_528 [640];
  undefined1 auStack_2a8 [320];
  undefined1 auStack_168 [324];
  
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 4)) {
    uVar2 = 0;
    iVar3 = 0x18;
    do {
      thunk_IhMVvNZFeMzYlwyJKCbIwyfwHELV_iql
                (*(undefined4 *)(*(int *)(param_2 + 4) + uVar2 * 4),0x140,auStack_528);
      iVar1 = *(int *)(param_1 + 4) + iVar3;
      thunk_cFvlAGmqaIIjwLDAeAvZK
                (auStack_528,*(undefined4 *)(param_2 + 0xc),auStack_2a8,auStack_168,iVar1 + -0x18,
                 iVar1);
      thunk_jqxtVTPNUCWAhprdtEIiiVhGZuL_tbMV
                (auStack_2a8,0xa0,*(undefined4 *)(*(int *)(param_3 + 4) + uVar2 * 4));
      thunk_jqxtVTPNUCWAhprdtEIiiVhGZuL_tbMV
                (auStack_168,0xa0,
                 *(undefined4 *)(*(int *)(param_3 + 4) + *(int *)(param_3 + 0x14) * 4 + uVar2 * 4));
      iVar3 = iVar3 + 0x60;
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)((*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 5) * -0x55555555));
  }
  return;
}


// =========================================================================
// Function: iOdnhoatRhTimBqDQRNjrTTXORBlVrHHTnYVYJQRq_vHEuJPFLXQvrpmWrEkZJhYjrcUL_mhSANd
// Entry: 0x71b112a4 | Size: 160 bytes
// =========================================================================

void iOdnhoatRhTimBqDQRNjrTTXORBlVrHHTnYVYJQRq_vHEuJPFLXQvrpmWrEkZJhYjrcUL_mhSANd
               (int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  iVar8 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x14) != iVar8) {
    iVar9 = 0;
    iVar6 = 0;
    uVar7 = 0;
    do {
      piVar2 = (int *)(*(int *)(param_3 + 0x20) + iVar9);
      iVar5 = *piVar2;
      iVar1 = **(int **)(param_2 + 0x2c);
      puVar3 = (undefined4 *)(iVar1 + uVar7 * 8);
      iVar4 = 0;
      if (piVar2[1] != iVar5) {
        iVar4 = iVar5;
      }
      if ((*(int **)(param_2 + 0x2c))[1] == iVar1) {
        puVar3 = (undefined4 *)(uVar7 << 3);
      }
      thunk_kpnHfhDxlOnmfuUhpwGpBBVhOHBA_DrpnmFnPsesLvpTQIDogPrwSFjDBawiDNNJgCZwhZqKmuNymLicBXGuPk_gsthpYIo
                (iVar8 + iVar6,*puVar3,iVar4);
      iVar8 = *(int *)(param_1 + 0x10);
      iVar9 = iVar9 + 0xc;
      iVar6 = iVar6 + 0x4b0;
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)((*(int *)(param_1 + 0x14) - iVar8 >> 4) * -0x69d0369d));
  }
  return;
}


// =========================================================================
// Function: xDqVwhoKWxIaGEjTShnOCJQFeo_gDQFcHspzQTjiHbDRaDTPCzvUYidIhSlpuMpzeT
// Entry: 0x71b11344 | Size: 328 bytes
// =========================================================================

void xDqVwhoKWxIaGEjTShnOCJQFeo_gDQFcHspzQTjiHbDRaDTPCzvUYidIhSlpuMpzeT
               (int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_528 [640];
  undefined1 auStack_2a8 [320];
  undefined1 auStack_168 [324];
  
  if (*(int *)(param_2 + 0x1c) == 3) {
    if (*(int *)(param_3 + 0x18) != 0) {
      iVar7 = 0;
      iVar3 = 0;
      uVar6 = 0;
      do {
        piVar1 = (int *)(*(int *)(param_2 + 0x20) + iVar3);
        iVar5 = *piVar1;
        iVar8 = **(int **)(param_3 + 0x2c);
        puVar2 = (undefined4 *)(iVar8 + uVar6 * 8);
        iVar4 = 0;
        if (piVar1[1] != iVar5) {
          iVar4 = iVar5;
        }
        if ((*(int **)(param_3 + 0x2c))[1] == iVar8) {
          puVar2 = (undefined4 *)(uVar6 << 3);
        }
        thunk_WjDBUsMGukdFGTzaXVeqvoaUpNTiohjFataOYxnrOtzmIRGrkthXeAknEvfXavaavxPcIsuLX_xbFWHJmwJDkNIoqRhBozu
                  (*(int *)(param_1 + 0x10) + iVar7,iVar4,*puVar2);
        uVar6 = uVar6 + 1;
        iVar7 = iVar7 + 0x4b0;
        iVar3 = iVar3 + 0xc;
      } while (uVar6 < *(uint *)(param_3 + 0x18));
    }
  }
  else if ((*(int *)(param_2 + 0x1c) == 2) && (*(int *)(param_3 + 0x18) != 0)) {
    uVar6 = 0;
    iVar7 = 0x48;
    do {
      thunk_IhMVvNZFeMzYlwyJKCbIwyfwHELV_iql
                (*(undefined4 *)(*(int *)(param_2 + 4) + uVar6 * 4),0xa0,auStack_2a8);
      thunk_IhMVvNZFeMzYlwyJKCbIwyfwHELV_iql
                (*(undefined4 *)(*(int *)(param_2 + 4) + *(int *)(param_2 + 0x14) * 4 + uVar6 * 4),
                 0xa0,auStack_168);
      iVar3 = *(int *)(param_1 + 4) + iVar7;
      thunk_OasPHJlOUimXFVIcZSmgq_
                (auStack_2a8,auStack_168,*(undefined4 *)(param_2 + 0x10),auStack_528,iVar3 + -0x18,
                 iVar3);
      thunk_jqxtVTPNUCWAhprdtEIiiVhGZuL_tbMV
                (auStack_528,0x140,*(undefined4 *)(*(int *)(param_3 + 4) + uVar6 * 4));
      uVar6 = uVar6 + 1;
      iVar7 = iVar7 + 0x60;
    } while (uVar6 < *(uint *)(param_3 + 0x18));
  }
  return;
}


// =========================================================================
// Function: eWnrTyg_MXcgNnvWTAiBukDEULfsTHmJTIVqoKcAteYMJQYXBBmvychzZuLzSPdZqeQSXfZJQWw
// Entry: 0x71b1148c | Size: 196 bytes
// =========================================================================

void eWnrTyg_MXcgNnvWTAiBukDEULfsTHmJTIVqoKcAteYMJQYXBBmvychzZuLzSPdZqeQSXfZJQWw
               (int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_528 [640];
  undefined1 auStack_2a8 [320];
  undefined1 auStack_168 [324];
  
  if (*(int *)(param_3 + 0x18) != 0) {
    uVar2 = 0;
    iVar3 = 0x48;
    do {
      thunk_IhMVvNZFeMzYlwyJKCbIwyfwHELV_iql
                (*(undefined4 *)(*(int *)(param_2 + 4) + uVar2 * 4),0xa0,auStack_2a8);
      thunk_IhMVvNZFeMzYlwyJKCbIwyfwHELV_iql
                (*(undefined4 *)(*(int *)(param_2 + 4) + *(int *)(param_2 + 0x14) * 4 + uVar2 * 4),
                 0xa0,auStack_168);
      iVar1 = *(int *)(param_1 + 4) + iVar3;
      thunk_OasPHJlOUimXFVIcZSmgq_
                (auStack_2a8,auStack_168,*(undefined4 *)(param_2 + 0x10),auStack_528,iVar1 + -0x18,
                 iVar1);
      thunk_jqxtVTPNUCWAhprdtEIiiVhGZuL_tbMV
                (auStack_528,0x140,*(undefined4 *)(*(int *)(param_3 + 4) + uVar2 * 4));
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x60;
    } while (uVar2 < *(uint *)(param_3 + 0x18));
  }
  return;
}


// =========================================================================
// Function: TKBIRKcGEliWLUnLUrupKaPDHMujMCPoXFkbvckSkejeWXVnJbqxnJFzOlagUaOPyCKzspTIDGxcy
// Entry: 0x71b11550 | Size: 136 bytes
// =========================================================================

void TKBIRKcGEliWLUnLUrupKaPDHMujMCPoXFkbvckSkejeWXVnJbqxnJFzOlagUaOPyCKzspTIDGxcy
               (int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  if (*(int *)(param_3 + 0x18) != 0) {
    iVar8 = 0;
    iVar6 = 0;
    uVar7 = 0;
    do {
      piVar1 = (int *)(*(int *)(param_2 + 0x20) + iVar8);
      iVar4 = *piVar1;
      iVar2 = **(int **)(param_3 + 0x2c);
      iVar3 = 0;
      if (piVar1[1] != iVar4) {
        iVar3 = iVar4;
      }
      puVar5 = (undefined4 *)(iVar2 + uVar7 * 8);
      if ((*(int **)(param_3 + 0x2c))[1] == iVar2) {
        puVar5 = (undefined4 *)(uVar7 << 3);
      }
      thunk_WjDBUsMGukdFGTzaXVeqvoaUpNTiohjFataOYxnrOtzmIRGrkthXeAknEvfXavaavxPcIsuLX_xbFWHJmwJDkNIoqRhBozu
                (*(int *)(param_1 + 0x10) + iVar6,iVar3,*puVar5);
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 0xc;
      iVar6 = iVar6 + 0x4b0;
    } while (uVar7 < *(uint *)(param_3 + 0x18));
  }
  return;
}


// =========================================================================
// Function: FUN_71b11a48
// Entry: 0x71b11a48 | Size: 20 bytes
// =========================================================================

void FUN_71b11a48(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_71b11ab0
// Entry: 0x71b11ab0 | Size: 104 bytes
// =========================================================================

int * FUN_71b11ab0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if ((char)param_1[1] != '\0') {
    return param_1;
  }
  piVar3 = (int *)*param_1;
  iVar4 = *piVar3;
  if (iVar4 != 0) {
    iVar1 = piVar3[1];
    iVar2 = iVar4;
    if (iVar1 != iVar4) {
      do {
        iVar1 = thunk_NVmbesL_aFX_tUzwJfCAGfyXBwVXKobaxpN(iVar1 + -0x4b0);
      } while (iVar1 != iVar4);
      iVar2 = *(int *)*param_1;
    }
    piVar3[1] = iVar4;
    thunk_qNQrlu(iVar2);
  }
  return param_1;
}


// =========================================================================
// Function: FUN_71b11b68
// Entry: 0x71b11b68 | Size: 20 bytes
// =========================================================================

void FUN_71b11b68(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_vector_7006dad5);
}


// =========================================================================
// Function: cFvlAGmqaIIjwLDAeAvZK
// Entry: 0x71b11bd0 | Size: 436 bytes
// =========================================================================

void cFvlAGmqaIIjwLDAeAvZK
               (undefined2 *param_1,uint param_2,undefined2 *param_3,undefined2 *param_4,
               undefined4 param_5,undefined4 param_6)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  short sVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  int *piVar9;
  undefined8 *puVar10;
  int *piVar11;
  uint uVar12;
  undefined1 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint uVar17;
  undefined2 *puVar18;
  longlong lVar19;
  undefined1 in_q8 [16];
  undefined1 auVar20 [16];
  undefined4 auStack_1430 [2];
  int aiStack_1428 [320];
  int aiStack_f28 [320];
  undefined8 auStack_a28 [160];
  undefined8 auStack_528 [160];
  
  puVar13 = &stack0xfffffff8;
  puVar15 = auStack_1430;
  puVar14 = auStack_1430;
  uVar12 = param_2 >> 1;
  if (uVar12 == 0) {
    auStack_1430[0] = param_5;
    FUN_71b11d94(auStack_528,0,aiStack_f28,&DAT_7009a738);
    auStack_1430[0] = param_6;
    FUN_71b11d94(auStack_a28,0,aiStack_1428,&DAT_7009a73e);
    return;
  }
  uVar16 = 0;
  if (param_2 < 0x10) {
    iVar6 = 0;
  }
  else {
    iVar6 = 0;
    puVar15 = auStack_1430;
    if (uVar12 - 1 >> 0xe == 0) {
      uVar17 = uVar12 & 0x7ffc;
      puVar8 = auStack_528;
      puVar10 = auStack_a28;
      iVar6 = uVar17 << 1;
      puVar5 = param_1;
      uVar16 = uVar17;
      do {
        puVar1 = (undefined2 *)0x380;
        puVar2 = (undefined2 *)0x388;
        lVar19 = 4;
        puVar18 = puVar5;
        while( true ) {
          *puVar1 = *puVar18;
          puVar18 = puVar18 + 1;
          *puVar2 = *puVar18;
          puVar18 = puVar18 + 1;
          lVar19 = lVar19 + -1;
          if (lVar19 == 0) break;
          puVar1 = puVar1 + 1;
          puVar2 = puVar2 + 1;
        }
        puVar5 = puVar5 + 8;
        uVar17 = uVar17 - 4;
        auVar20 = VectorShiftLongLeft(in_q8._8_8_,10);
        in_q8 = VectorShiftLongLeft(in_q8._0_8_,10);
        *puVar8 = auVar20._0_8_;
        puVar8[1] = auVar20._8_8_;
        puVar8 = puVar8 + 2;
        *puVar10 = in_q8._0_8_;
        puVar10[1] = in_q8._8_8_;
        puVar10 = puVar10 + 2;
      } while (uVar17 != 0);
      puVar15 = puVar14;
      if (uVar12 == uVar16) goto LAB_71b11cf4;
    }
  }
  iVar7 = uVar12 - uVar16;
  piVar9 = (int *)(puVar13 + uVar16 * 4 + -0x520);
  piVar11 = (int *)((int)puVar15 + uVar16 * 4 + 0xa08);
  do {
    iVar7 = iVar7 + -1;
    sVar3 = (param_1 + (short)iVar6)[1];
    *piVar11 = (int)(short)param_1[(short)iVar6] << 10;
    *piVar9 = (int)sVar3 << 10;
    iVar6 = (short)iVar6 + 2;
    piVar9 = piVar9 + 1;
    piVar11 = piVar11 + 1;
    puVar14 = puVar15;
  } while (iVar7 != 0);
LAB_71b11cf4:
  *puVar14 = param_5;
  FUN_71b11d94(puVar13 + -0x520,uVar12,puVar14 + 0x142,&DAT_7009a738);
  *puVar14 = *(undefined4 *)(puVar13 + 0xc);
  FUN_71b11d94(puVar14 + 0x282,uVar12,puVar14 + 2,&DAT_7009a73e);
  piVar9 = puVar14 + 2;
  piVar11 = puVar14 + 0x142;
  if (1 < param_2) {
    do {
      uVar12 = uVar12 - 1;
      iVar6 = *piVar11 + 0x400 + *piVar9 >> 0xb;
      iVar7 = (*piVar11 + 0x400) - *piVar9 >> 0xb;
      uVar4 = SignedSaturate(iVar6,0x10);
      SignedDoesSaturate(iVar6,0x10);
      *param_3 = (short)uVar4;
      uVar4 = SignedSaturate(iVar7,0x10);
      SignedDoesSaturate(iVar7,0x10);
      *param_4 = (short)uVar4;
      piVar9 = piVar9 + 1;
      param_3 = param_3 + 1;
      piVar11 = piVar11 + 1;
      param_4 = param_4 + 1;
    } while (uVar12 != 0);
  }
  return;
}


// =========================================================================
// Function: FUN_71b11d94
// Entry: 0x71b11d94 | Size: 416 bytes
// =========================================================================

void FUN_71b11d94(int *param_1,uint param_2,int *param_3,ushort *param_4,int *param_5)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = param_2 - 1;
  uVar1 = SignedSaturate(*param_1 - param_5[1],0x20);
  SignedDoesSaturate(uVar1,0x20);
  iVar5 = ((int)uVar1 >> 0x10) * (uint)*param_4 + *param_5 +
          ((uVar1 & 0xffff) * (uint)*param_4 >> 0x10);
  *param_3 = iVar5;
  if (1 < param_2) {
    iVar4 = param_2 - 1;
    piVar3 = param_3;
    piVar2 = param_1;
    do {
      piVar3 = piVar3 + 1;
      uVar1 = SignedSaturate(piVar2[1] - iVar5,0x20);
      SignedDoesSaturate(uVar1,0x20);
      iVar4 = iVar4 + -1;
      iVar5 = ((int)uVar1 >> 0x10) * (uint)*param_4 + *piVar2 +
              ((uVar1 & 0xffff) * (uint)*param_4 >> 0x10);
      *piVar3 = iVar5;
      piVar2 = piVar2 + 1;
    } while (iVar4 != 0);
  }
  *param_5 = param_1[iVar6];
  param_5[1] = param_3[iVar6];
  uVar1 = SignedSaturate(*param_3 - param_5[3],0x20);
  SignedDoesSaturate(uVar1,0x20);
  iVar5 = ((int)uVar1 >> 0x10) * (uint)param_4[1] + param_5[2] +
          ((uVar1 & 0xffff) * (uint)param_4[1] >> 0x10);
  *param_1 = iVar5;
  if (1 < param_2) {
    iVar4 = param_2 - 1;
    piVar3 = param_1;
    piVar2 = param_3;
    do {
      piVar3 = piVar3 + 1;
      uVar1 = SignedSaturate(piVar2[1] - iVar5,0x20);
      SignedDoesSaturate(uVar1,0x20);
      iVar4 = iVar4 + -1;
      iVar5 = ((int)uVar1 >> 0x10) * (uint)param_4[1] + *piVar2 +
              ((uVar1 & 0xffff) * (uint)param_4[1] >> 0x10);
      *piVar3 = iVar5;
      piVar2 = piVar2 + 1;
    } while (iVar4 != 0);
  }
  param_5[2] = param_3[iVar6];
  param_5[3] = param_1[iVar6];
  uVar1 = SignedSaturate(*param_1 - param_5[5],0x20);
  SignedDoesSaturate(uVar1,0x20);
  iVar4 = ((int)uVar1 >> 0x10) * (uint)param_4[2] + param_5[4] +
          ((uVar1 & 0xffff) * (uint)param_4[2] >> 0x10);
  *param_3 = iVar4;
  iVar5 = iVar6;
  piVar3 = param_3;
  piVar2 = param_1;
  if (1 < param_2) {
    do {
      uVar1 = SignedSaturate(piVar2[1] - iVar4,0x20);
      SignedDoesSaturate(uVar1,0x20);
      iVar5 = iVar5 + -1;
      iVar4 = ((int)uVar1 >> 0x10) * (uint)param_4[2] + *piVar2 +
              ((uVar1 & 0xffff) * (uint)param_4[2] >> 0x10);
      piVar3[1] = iVar4;
      piVar3 = piVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar5 != 0);
  }
  param_5[4] = param_1[iVar6];
  param_5[5] = param_3[iVar6];
  return;
}


// =========================================================================
// Function: OasPHJlOUimXFVIcZSmgq_
// Entry: 0x71b11f34 | Size: 492 bytes
// =========================================================================

void OasPHJlOUimXFVIcZSmgq_
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
// Function: gecnDSZTzrsiFfWZpXkUpshTWpJrEoKqDMT
// Entry: 0x71b12308 | Size: 28 bytes
// =========================================================================

undefined4 gecnDSZTzrsiFfWZpXkUpshTWpJrEoKqDMT(undefined4 param_1)

{
  imp___aeabi_memclr4(param_1,0x4b0);
  return param_1;
}


// =========================================================================
// Function: NVmbesL_aFX_tUzwJfCAGfyXBwVXKobaxpN
// Entry: 0x71b12324 | Size: 4 bytes
// =========================================================================

void NVmbesL_aFX_tUzwJfCAGfyXBwVXKobaxpN(void)

{
  return;
}


// =========================================================================
// Function: kpnHfhDxlOnmfuUhpwGpBBVhOHBA_DrpnmFnPsesLvpTQIDogPrwSFjDBawiDNNJgCZwhZqKmuNymLicBXGuPk_gsthpYIo
// Entry: 0x71b12328 | Size: 1240 bytes
// =========================================================================

void kpnHfhDxlOnmfuUhpwGpBBVhOHBA_DrpnmFnPsesLvpTQIDogPrwSFjDBawiDNNJgCZwhZqKmuNymLicBXGuPk_gsthpYIo
               (int param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  float *pfVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined1 *puVar13;
  int iVar14;
  float *pfVar15;
  uint uVar16;
  int iVar17;
  float *pfVar18;
  int iVar19;
  float *pfVar20;
  int *piVar21;
  int iVar22;
  undefined1 *puVar23;
  int iVar24;
  int iVar25;
  float *pfVar26;
  undefined4 **ppuVar27;
  int iVar28;
  uint uVar29;
  undefined1 uVar30;
  undefined4 *puVar31;
  longlong lVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 in_d16;
  undefined8 in_d17;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined4 *apuStack_560 [2];
  undefined1 *puStack_558;
  undefined1 *puStack_554;
  int iStack_550;
  undefined1 *puStack_54c;
  undefined4 *puStack_548;
  int iStack_544;
  float afStack_528 [16];
  undefined1 auStack_4e8 [560];
  undefined1 auStack_2b8 [16];
  undefined1 auStack_2a8 [580];
  undefined1 auStack_64 [64];
  
  puVar23 = &stack0xfffffff8;
  ppuVar27 = apuStack_560;
  iStack_544 = param_1;
  if (0 < (int)param_3[1]) {
    imp___aeabi_memclr4(*param_3,param_3[1] << 2);
  }
  if (0 < (int)param_3[3]) {
    imp___aeabi_memclr4(param_3[2],param_3[3] << 2);
  }
  if (0 < (int)param_3[5]) {
    imp___aeabi_memclr4(param_3[4],param_3[5] << 2);
  }
  puVar13 = auStack_2a8;
  pfVar15 = afStack_528;
  iVar24 = 0;
  iStack_550 = iStack_544 + 0x1c;
  puStack_554 = auStack_2b8;
  puStack_558 = auStack_64;
  puVar5 = (undefined4 *)(param_2 + 8);
  apuStack_560[0] = puVar5;
  puStack_548 = param_3;
  puStack_54c = auStack_4e8;
  do {
    iVar6 = 0;
    *(undefined4 **)((int)ppuVar27 + 4) = puVar5;
    do {
      puVar2 = (undefined4 *)0x370;
      puVar3 = (undefined4 *)0x380;
      puVar4 = (undefined4 *)0x390;
      lVar32 = 2;
      puVar31 = puVar5;
      while( true ) {
        *puVar2 = *puVar31;
        puVar31 = puVar31 + 1;
        *puVar3 = *puVar31;
        puVar31 = puVar31 + 1;
        *puVar4 = *puVar31;
        puVar31 = puVar31 + 1;
        lVar32 = lVar32 + -1;
        if (lVar32 == 0) break;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar5 = puVar5 + 6;
      puVar9 = (undefined8 *)(puVar13 + iVar6);
      iVar6 = iVar6 + 0x10;
      uVar30 = iVar6 == 0x270;
      puVar2 = (undefined4 *)0x378;
      puVar3 = (undefined4 *)0x388;
      puVar4 = (undefined4 *)0x398;
      lVar32 = 2;
      puVar31 = puVar5;
      while( true ) {
        *puVar2 = *puVar31;
        puVar31 = puVar31 + 1;
        *puVar3 = *puVar31;
        puVar31 = puVar31 + 1;
        *puVar4 = *puVar31;
        puVar31 = puVar31 + 1;
        lVar32 = lVar32 + -1;
        if (lVar32 == 0) break;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar5 = puVar5 + 6;
      *puVar9 = in_d16;
      puVar9[1] = in_d17;
    } while (!(bool)uVar30);
    iVar6 = (int)*ppuVar27;
    iVar22 = 0;
    uVar12 = *(undefined4 *)(iVar6 + (0x1dd - iVar24) * 4);
    uVar7 = *(undefined4 *)(iVar6 + (0x1da - iVar24) * 4);
    uVar10 = *(undefined4 *)(iVar6 + (0x1d4 - iVar24) * 4);
    *(undefined4 *)(puVar23 + -0x2c) = *(undefined4 *)(iVar6 + (0x1d7 - iVar24) * 4);
    *(undefined4 *)(puVar23 + -0x24) = uVar12;
    iVar14 = 0;
    *(undefined4 *)(puVar23 + -0x30) = uVar10;
    *(undefined4 *)(puVar23 + -0x28) = uVar7;
    ppuVar27[8] = (undefined4 *)iVar24;
    iVar6 = iVar24;
    do {
      uVar16 = iVar14 * 3 + iVar6;
      if (uVar16 != 3 && uVar16 != 9) {
        ppuVar27[0xd] = (undefined4 *)iVar24;
        ppuVar27[9] = (undefined4 *)puVar13;
        imp___aeabi_memclr8(pfVar15,0x280);
        iVar24 = -2;
        if (uVar16 < 9) {
          iVar24 = -1;
        }
        if (uVar16 < 3) {
          iVar24 = 0;
        }
        iVar11 = iVar24 + uVar16;
        pfVar8 = (float *)(&DAT_7009a744 + iVar11 * 4);
        ppuVar27[0xc] = (undefined4 *)((int)ppuVar27[7] + iVar11 * 0x3c);
        if (iVar14 != 0) {
          iVar6 = (int)ppuVar27[0xc];
          fVar36 = *pfVar8;
          iVar25 = iVar6 + 0x3c;
          iVar28 = iVar6 + 0x2c;
          fVar35 = (float)(&DAT_7009a748)[iVar11 * 4];
          iVar19 = iVar6 + 0x1c;
          fVar34 = (float)(&DAT_7009a74c)[iVar11 * 4];
          iVar6 = iVar6 + 0xc;
          fVar33 = (float)(&DAT_7009a750)[iVar11 * 4];
          ppuVar27[0xe] =
               (undefined4 *)
               ((float)ppuVar27[0xe] + *(float *)(iVar25 + iVar14 * -4) * fVar36 +
                *(float *)(iVar28 + iVar14 * -4) * fVar35 +
                *(float *)(iVar19 + iVar14 * -4) * fVar34 + *(float *)(iVar6 + iVar14 * -4) * fVar33
               );
          if (iVar14 != 1) {
            iVar17 = 1 - iVar14;
            ppuVar27[0xf] =
                 (undefined4 *)
                 ((float)ppuVar27[0xf] + *(float *)(iVar25 + iVar17 * 4) * fVar36 +
                  *(float *)(iVar28 + iVar17 * 4) * fVar35 +
                  *(float *)(iVar19 + iVar17 * 4) * fVar34 + *(float *)(iVar6 + iVar17 * 4) * fVar33
                 );
            if (iVar14 != 2) {
              iVar17 = 2 - iVar14;
              ppuVar27[0x10] =
                   (undefined4 *)
                   ((float)ppuVar27[0x10] + *(float *)(iVar25 + iVar17 * 4) * fVar36 +
                    *(float *)(iVar28 + iVar17 * 4) * fVar35 +
                    *(float *)(iVar19 + iVar17 * 4) * fVar34 +
                   *(float *)(iVar6 + iVar17 * 4) * fVar33);
            }
          }
        }
        ppuVar27[10] = (undefined4 *)iVar14;
        pfVar20 = (float *)ppuVar27[3];
        fVar33 = *pfVar8;
        ppuVar27[0xb] = (undefined4 *)iVar22;
        iVar24 = (int)ppuVar27[4] + (iVar24 + (int)ppuVar27[0xd]) * 0x3c;
        uVar16 = 0;
        do {
          pfVar26 = (float *)((int)pfVar15 + iVar22);
          uVar1 = uVar16 >> 2;
          uVar29 = 3;
          fVar34 = *pfVar26 + pfVar20[4] * fVar33;
          if (uVar1 < 3) {
            uVar29 = uVar16 >> 2;
          }
          if ((uVar1 != 0) &&
             (fVar34 = fVar34 + *pfVar20 * (float)(&DAT_7009a748)[iVar11 * 4], uVar1 != 1)) {
            fVar34 = fVar34 + pfVar20[-4] * (float)(&DAT_7009a74c)[iVar11 * 4];
            if (uVar1 != 2) {
              fVar34 = fVar34 + pfVar20[-8] * (float)(&DAT_7009a750)[iVar11 * 4];
            }
          }
          *pfVar26 = fVar34;
          if (uVar16 < 0xc) {
            pfVar18 = (float *)(iVar24 + uVar1 * -0x10);
            fVar34 = fVar34 + pfVar18[4] * (float)(&DAT_7009a748)[iVar11 * 4 + uVar29];
            if (uVar16 < 8) {
              fVar34 = fVar34 + *pfVar18 * pfVar8[uVar29 + 2];
              if (uVar16 < 4) {
                fVar34 = fVar34 + pfVar18[-4] * (float)(&DAT_7009a750)[iVar11 * 4];
              }
            }
            *pfVar26 = fVar34;
          }
          iVar22 = iVar22 + 4;
          pfVar20 = pfVar20 + 1;
          iVar24 = iVar24 + 4;
          uVar16 = uVar16 + 1;
        } while (iVar22 != 0x40);
        iVar6 = (int)ppuVar27[5];
        iVar24 = 0;
        puVar13 = (undefined1 *)ppuVar27[9];
        fVar33 = *pfVar8;
        fVar34 = (float)(&DAT_7009a748)[iVar11 * 4];
        fVar35 = (float)(&DAT_7009a74c)[iVar11 * 4];
        fVar36 = (float)(&DAT_7009a750)[iVar11 * 4];
        do {
          iVar14 = iVar24 + 0x10;
          iVar22 = iVar24 + 0x20;
          iVar19 = iVar24 + 0x30;
          iVar25 = iVar24 + 0x40;
          pfVar8 = (float *)(iVar6 + iVar24);
          iVar24 = iVar24 + 4;
          *pfVar8 = *pfVar8 + *(float *)(puVar13 + iVar25) * fVar33 +
                    *(float *)(puVar13 + iVar19) * fVar34 + *(float *)(puVar13 + iVar22) * fVar35 +
                    *(float *)(puVar13 + iVar14) * fVar36;
        } while (iVar24 != 0x240);
        puVar9 = (undefined8 *)ppuVar27[2];
        piVar21 = ppuVar27[6];
        in_d16 = *puVar9;
        in_d17 = puVar9[1];
        uVar37 = puVar9[2];
        uVar38 = puVar9[3];
        uVar39 = puVar9[4];
        uVar40 = puVar9[5];
        uVar41 = *(undefined8 *)((int)puVar9 + 0x2c);
        uVar42 = *(undefined8 *)((int)puVar9 + 0x34);
        puVar9 = (undefined8 *)ppuVar27[0xc];
        fVar33 = (float)(&DAT_7009a7e4)[iVar11 * 3];
        *puVar9 = in_d16;
        puVar9[1] = in_d17;
        puVar9[2] = uVar37;
        puVar9[3] = uVar38;
        puVar9[4] = uVar39;
        puVar9[5] = uVar40;
        iVar19 = 0;
        *(undefined8 *)((int)puVar9 + 0x2c) = uVar41;
        *(undefined8 *)((int)puVar9 + 0x34) = uVar42;
        iVar24 = *piVar21;
        iVar6 = (int)ppuVar27[8];
        iVar22 = (int)ppuVar27[0xb];
        iVar14 = (int)ppuVar27[10];
        do {
          pfVar8 = (float *)((int)pfVar15 + iVar19);
          pfVar20 = (float *)(iVar24 + iVar19);
          iVar19 = iVar19 + 4;
          *pfVar20 = *pfVar20 + fVar33 * *pfVar8;
        } while (iVar19 != 0x280);
        iVar24 = piVar21[2];
        iVar19 = 0;
        fVar33 = (float)(&DAT_7009a7e8)[iVar11 * 3];
        do {
          pfVar8 = (float *)((int)pfVar15 + iVar19);
          pfVar20 = (float *)(iVar24 + iVar19);
          iVar19 = iVar19 + 4;
          *pfVar20 = *pfVar20 + fVar33 * *pfVar8;
        } while (iVar19 != 0x280);
        iVar24 = piVar21[4];
        iVar19 = 0;
        fVar33 = (float)(&DAT_7009a7ec)[iVar11 * 3];
        do {
          pfVar8 = (float *)((int)pfVar15 + iVar19);
          pfVar20 = (float *)(iVar24 + iVar19);
          iVar19 = iVar19 + 4;
          *pfVar20 = *pfVar20 + fVar33 * *pfVar8;
        } while (iVar19 != 0x280);
        iVar24 = (int)ppuVar27[0xd];
      }
      iVar14 = iVar14 + 1;
      puVar13 = puVar13 + -4;
      iVar24 = iVar24 + 3;
      iVar22 = iVar22 + 4;
    } while (iVar14 != 4);
    iVar24 = iVar6 + 1;
    puVar13 = puVar23 + -0x2a0;
    puVar5 = (undefined4 *)((int)ppuVar27[1] + -4);
  } while (iVar24 != 3);
  return;
}


// =========================================================================
// Function: WjDBUsMGukdFGTzaXVeqvoaUpNTiohjFataOYxnrOtzmIRGrkthXeAknEvfXavaavxPcIsuLX_xbFWHJmwJDkNIoqRhBozu
// Entry: 0x71b12808 | Size: 1172 bytes
// =========================================================================

void WjDBUsMGukdFGTzaXVeqvoaUpNTiohjFataOYxnrOtzmIRGrkthXeAknEvfXavaavxPcIsuLX_xbFWHJmwJDkNIoqRhBozu
               (int param_1,int *param_2,float *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  float *pfVar10;
  float *pfVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  float *pfVar15;
  undefined8 *puVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int iStack_53c;
  float afStack_538 [160];
  float afStack_2b8 [145];
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  
  imp___aeabi_memclr4(param_3,0x780);
  iVar4 = 0;
  do {
    iVar14 = 0;
    iStack_53c = 0;
    iVar7 = iVar4;
    pfVar15 = afStack_2b8;
    do {
      uVar12 = iVar14 * 3 + iVar4;
      if (uVar12 != 3 && uVar12 != 9) {
        imp___aeabi_memclr8(afStack_2b8,0x280);
        iVar3 = -2;
        if (uVar12 < 9) {
          iVar3 = -1;
        }
        if (uVar12 < 3) {
          iVar3 = 0;
        }
        iVar13 = iVar3 + uVar12;
        iVar5 = *param_2;
        pfVar6 = (float *)(&DAT_7009a744 + iVar13 * 4);
        iVar8 = 0;
        fVar17 = (float)(&DAT_7009a7e4)[iVar13 * 3];
        do {
          pfVar10 = (float *)(iVar5 + iVar8);
          pfVar11 = (float *)((int)afStack_2b8 + iVar8);
          iVar8 = iVar8 + 4;
          *pfVar11 = *pfVar11 + fVar17 * *pfVar10;
        } while (iVar8 != 0x280);
        iVar5 = param_2[2];
        iVar8 = 0;
        fVar17 = (float)(&DAT_7009a7e8)[iVar13 * 3];
        do {
          pfVar10 = (float *)(iVar5 + iVar8);
          pfVar11 = (float *)((int)afStack_2b8 + iVar8);
          iVar8 = iVar8 + 4;
          *pfVar11 = *pfVar11 + fVar17 * *pfVar10;
        } while (iVar8 != 0x280);
        fVar17 = (float)(&DAT_7009a7ec)[iVar13 * 3];
        iVar8 = 0;
        iVar5 = param_2[4];
        do {
          pfVar10 = (float *)(iVar5 + iVar8);
          pfVar11 = (float *)((int)afStack_2b8 + iVar8);
          iVar8 = iVar8 + 4;
          *pfVar11 = *pfVar11 + fVar17 * *pfVar10;
        } while (iVar8 != 0x280);
        imp___aeabi_memclr8(afStack_538,0x280);
        puVar16 = (undefined8 *)(param_1 + 600 + iVar13 * 0x3c);
        if (iVar14 != 0) {
          fVar20 = *pfVar6;
          fVar19 = (float)(&DAT_7009a748)[iVar13 * 4];
          fVar18 = (float)(&DAT_7009a74c)[iVar13 * 4];
          fVar17 = (float)(&DAT_7009a750)[iVar13 * 4];
          afStack_538[0] =
               afStack_538[0] + *(float *)((int)puVar16 + iVar14 * -4 + 0x3c) * fVar20 +
               *(float *)((int)puVar16 + iVar14 * -4 + 0x2c) * fVar19 +
               *(float *)((int)puVar16 + iVar14 * -4 + 0x1c) * fVar18 +
               *(float *)((int)puVar16 + iVar14 * -4 + 0xc) * fVar17;
          if (iVar14 != 1) {
            iVar5 = 1 - iVar14;
            afStack_538[1] =
                 afStack_538[1] + *(float *)((int)puVar16 + iVar5 * 4 + 0x3c) * fVar20 +
                 *(float *)((int)puVar16 + iVar5 * 4 + 0x2c) * fVar19 +
                 *(float *)((int)puVar16 + iVar5 * 4 + 0x1c) * fVar18 +
                 *(float *)((int)puVar16 + iVar5 * 4 + 0xc) * fVar17;
            if (iVar14 != 2) {
              iVar5 = 2 - iVar14;
              afStack_538[2] =
                   afStack_538[2] + *(float *)((int)puVar16 + iVar5 * 4 + 0x3c) * fVar20 +
                   *(float *)((int)puVar16 + iVar5 * 4 + 0x2c) * fVar19 +
                   *(float *)((int)puVar16 + iVar5 * 4 + 0x1c) * fVar18 +
                   *(float *)((int)puVar16 + iVar5 * 4 + 0xc) * fVar17;
            }
          }
        }
        uVar12 = 0;
        fVar17 = *pfVar6;
        iVar5 = 0;
        do {
          pfVar10 = (float *)((int)afStack_538 + iVar5 + iStack_53c);
          uVar1 = uVar12 >> 2;
          uVar9 = 3;
          if (uVar1 < 3) {
            uVar9 = uVar12 >> 2;
          }
          fVar18 = *pfVar10 + *(float *)((int)afStack_2b8 + iVar5) * fVar17;
          if ((uVar1 != 0) &&
             (fVar18 = fVar18 + *(float *)((int)afStack_538 + iVar5 + 0x270) *
                                (float)(&DAT_7009a748)[iVar13 * 4], uVar1 != 1)) {
            fVar19 = (float)(&DAT_7009a74c)[iVar13 * 4];
            fVar18 = fVar18 + *(float *)((int)afStack_538 + iVar5 + 0x260) * fVar19;
            if (uVar1 != 2) {
              fVar19 = (float)(&DAT_7009a750)[iVar13 * 4];
            }
            if (uVar1 != 2) {
              fVar18 = fVar18 + *(float *)((int)afStack_538 + iVar5 + 0x250) * fVar19;
            }
          }
          *pfVar10 = fVar18;
          if (uVar12 < 0xc) {
            pfVar11 = (float *)(param_1 + 0x284 + (iVar3 + iVar7) * 0x3c + uVar1 * -0x10 + iVar5);
            fVar18 = fVar18 + *pfVar11 * (float)(&DAT_7009a748)[iVar13 * 4 + uVar9];
            if (uVar12 < 8) {
              fVar18 = fVar18 + pfVar11[-4] * pfVar6[uVar9 + 2];
              if (uVar12 < 4) {
                fVar18 = fVar18 + pfVar11[-8] * (float)(&DAT_7009a750)[iVar13 * 4];
              }
            }
            *pfVar10 = fVar18;
          }
          iVar5 = iVar5 + 4;
          uVar12 = uVar12 + 1;
        } while (iStack_53c + iVar5 != 0x40);
        fVar17 = *pfVar6;
        iVar3 = 0;
        fVar18 = (float)(&DAT_7009a748)[iVar13 * 4];
        fVar19 = (float)(&DAT_7009a74c)[iVar13 * 4];
        fVar20 = (float)(&DAT_7009a750)[iVar13 * 4];
        do {
          iVar5 = iVar3 + 0x10;
          iVar8 = iVar3 + 0x20;
          iVar13 = iVar3 + 0x30;
          iVar2 = iVar3 + 0x40;
          pfVar6 = (float *)((int)afStack_538 + iVar3 + 0x40);
          iVar3 = iVar3 + 4;
          *pfVar6 = *pfVar6 + *(float *)((int)pfVar15 + iVar2) * fVar17 +
                    *(float *)((int)pfVar15 + iVar13) * fVar18 +
                    *(float *)((int)pfVar15 + iVar8) * fVar19 +
                    *(float *)((int)pfVar15 + iVar5) * fVar20;
        } while (iVar3 != 0x240);
        *puVar16 = uStack_74;
        puVar16[1] = uStack_6c;
        puVar16[2] = uStack_64;
        puVar16[3] = uStack_5c;
        puVar16[4] = uStack_54;
        puVar16[5] = CONCAT44(uStack_48,uStack_4c);
        *(ulonglong *)((int)puVar16 + 0x2c) = CONCAT44(uStack_44,uStack_48);
        *(undefined8 *)((int)puVar16 + 0x34) = uStack_40;
        iVar3 = 0;
        pfVar6 = param_3;
        do {
          pfVar10 = (float *)((int)afStack_538 + iVar3);
          iVar3 = iVar3 + 4;
          *pfVar6 = *pfVar6 + *pfVar10 * 3.0;
          pfVar6 = pfVar6 + 3;
        } while (iVar3 != 0x280);
      }
      iVar14 = iVar14 + 1;
      pfVar15 = pfVar15 + -1;
      iVar7 = iVar7 + 3;
      iStack_53c = iStack_53c + 4;
    } while (iVar14 != 4);
    iVar4 = iVar4 + 1;
    param_3 = param_3 + 1;
  } while (iVar4 != 3);
  return;
}


// =========================================================================
// Function: FUX_GqQDagZaSEeYxzpcJsjHkotRqxsCYwSjzWibwGkPOPMPyPQXKtbUMFwnraXNKDyAEm_tsRP
// Entry: 0x71b12e0c | Size: 36 bytes
// =========================================================================

void FUX_GqQDagZaSEeYxzpcJsjHkotRqxsCYwSjzWibwGkPOPMPyPQXKtbUMFwnraXNKDyAEm_tsRP
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  *(undefined1 *)(param_1 + 5) = param_7;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  return;
}


// =========================================================================
// Function: QQBBtWuMjQi_dULqhFHxdzaPrSsIApNoxhGCyazxdyzgssFGiCQHy
// Entry: 0x71b12e30 | Size: 28 bytes
// =========================================================================

void QQBBtWuMjQi_dULqhFHxdzaPrSsIApNoxhGCyazxdyzgssFGiCQHy(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = *(undefined8 *)((int)param_2 + 0xd);
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined8 *)((int)param_1 + 0xd) = uVar2;
  return;
}


// =========================================================================
// Function: FdbKrCBZEyPQlOGVKaA_XFmXzySIASSdDmjDDVmTCcUvGZTpTPxqBVMMCernBT
// Entry: 0x71b12e4c | Size: 120 bytes
// =========================================================================

void FdbKrCBZEyPQlOGVKaA_XFmXzySIASSdDmjDDVmTCcUvGZTpTPxqBVMMCernBT(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  param_1[5] = 0.0;
  param_1[6] = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[7] = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[8] = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  fVar4 = *param_2;
  fVar1 = param_2[2];
  fVar3 = param_2[3];
  fVar2 = param_2[4];
  if (*(char *)(param_2 + 5) == '\0') {
    fVar5 = param_2[1] * param_2[1] + fVar4 * fVar4;
    fVar4 = fVar4 * fVar2 * -2.0;
  }
  else {
    fVar5 = -(fVar4 * fVar4);
    fVar4 = 0.0;
  }
  *param_1 = fVar2;
  param_1[1] = fVar4;
  param_1[2] = fVar5 * fVar2;
  param_1[4] = fVar3 * fVar3 + fVar1 * fVar1;
  param_1[3] = fVar1 * -2.0;
  return;
}


// =========================================================================
// Function: xv_Dwog__DhaRZzgAykWtWUqtfwJRKcvlU_stiLrhawZDkt
// Entry: 0x71b12ec8 | Size: 16 bytes
// =========================================================================

void xv_Dwog__DhaRZzgAykWtWUqtfwJRKcvlU_stiLrhawZDkt(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  return;
}


// =========================================================================
// Function: YwSIimNXVVuzKBdYyZXNWenLVbMMAhKrmltSziUpY_pQLrBAdpwRgLfzxyvzAYD
// Entry: 0x71b12ed8 | Size: 212 bytes
// =========================================================================

int * YwSIimNXVVuzKBdYyZXNWenLVbMMAhKrmltSziUpY_pQLrBAdpwRgLfzxyvzAYD
                (int *param_1,undefined8 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uVar1 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar2 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar3 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uVar8 = *param_2;
  uVar9 = param_2[1];
  uVar6 = *(uint *)(param_2 + 2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 != 0) {
    if (0x71c71c7 < param_3) {
      FUN_71b13604(param_1);
      if (*param_1 != 0) {
        param_1[1] = *param_1;
        thunk_qNQrlu();
      }
                    /* WARNING: Subroutine does not return */
      thunk_NAUpeWJSovvMoxKm_();
    }
    iVar7 = param_3 * 0x24;
    puVar4 = (undefined4 *)thunk_MwhHq(iVar7);
    *param_1 = (int)puVar4;
    param_1[1] = (int)puVar4;
    param_1[2] = (int)(puVar4 + param_3 * 9);
    puVar5 = puVar4;
    do {
      uStack_40 = (undefined4)uVar8;
      uStack_3c = (undefined4)((ulonglong)uVar8 >> 0x20);
      uStack_38 = (undefined4)uVar9;
      uStack_34 = (undefined4)((ulonglong)uVar9 >> 0x20);
      iVar7 = iVar7 + -0x24;
      *puVar5 = uStack_40;
      puVar5[1] = uStack_3c;
      puVar5[2] = uStack_38;
      puVar5[3] = uStack_34;
      *(ulonglong *)(puVar5 + 4) = (ulonglong)uVar6;
      *(ulonglong *)(puVar5 + 6) = CONCAT44(uVar2,uVar1);
      puVar5[8] = uVar3;
      puVar5 = puVar5 + 9;
    } while (iVar7 != 0);
    param_1[1] = (int)(puVar4 + param_3 * 9);
  }
  return param_1;
}


// =========================================================================
// Function: hTUpKKTeeApBXorpGUwgEQrsPrqpDgePJlgVQNXWVvFJMDUvXIOlz_HuazIHblkQNsTQgjArRcHNykRZZywknVmgwnWfZfN
// Entry: 0x71b12fac | Size: 404 bytes
// =========================================================================

int * hTUpKKTeeApBXorpGUwgEQrsPrqpDgePJlgVQNXWVvFJMDUvXIOlz_HuazIHblkQNsTQgjArRcHNykRZZywknVmgwnWfZfN
                (int *param_1,int *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  iVar8 = *param_2;
  iVar3 = param_2[1];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  do {
    if (iVar8 == iVar3) {
      return param_1;
    }
    while( true ) {
      thunk_FdbKrCBZEyPQlOGVKaA_XFmXzySIASSdDmjDDVmTCcUvGZTpTPxqBVMMCernBT(&uStack_48,iVar8);
      puVar1 = (undefined8 *)param_1[1];
      if (puVar1 < (undefined8 *)param_1[2]) break;
      iVar5 = *param_1;
      iVar4 = (int)puVar1 - iVar5 >> 2;
      uVar6 = iVar4 * 0x38e38e39 + 1;
      if (0x71c71c7 < uVar6) {
        FUN_71b13604(param_1);
LAB_71b1313c:
                    /* WARNING: Subroutine does not return */
        FUN_719fe2ec();
      }
      iVar2 = param_1[2] - iVar5 >> 2;
      if (uVar6 < (uint)(iVar2 * 0x71c71c72)) {
        uVar6 = iVar2 * 0x71c71c72;
      }
      if (0x38e38e2 < (uint)(iVar2 * 0x38e38e39)) {
        uVar6 = 0x71c71c7;
      }
      if (uVar6 == 0) {
        iVar2 = 0;
      }
      else {
        if (0x71c71c7 < uVar6) goto LAB_71b1313c;
        iVar2 = thunk_MwhHq(uVar6 * 0x24);
      }
      puVar7 = (undefined8 *)(iVar2 + iVar4 * 4);
      *puVar7 = uStack_48;
      puVar7[1] = uStack_40;
      iVar4 = (int)puVar7 - ((int)puVar1 - iVar5);
      puVar7[2] = uStack_38;
      puVar7[3] = uStack_30;
      *(undefined4 *)(puVar7 + 4) = uStack_28;
      imp___aeabi_memcpy4(iVar4,iVar5);
      *param_1 = iVar4;
      param_1[1] = (int)puVar7 + 0x24;
      param_1[2] = iVar2 + uVar6 * 0x24;
      if (iVar5 != 0) {
        thunk_qNQrlu(iVar5);
      }
      iVar8 = iVar8 + 0x18;
      param_1[1] = (int)puVar7 + 0x24;
      if (iVar8 == iVar3) {
        return param_1;
      }
    }
    *puVar1 = uStack_48;
    puVar1[1] = uStack_40;
    puVar1[2] = uStack_38;
    puVar1[3] = uStack_30;
    *(undefined4 *)(puVar1 + 4) = uStack_28;
    iVar8 = iVar8 + 0x18;
    param_1[1] = (int)puVar1 + 0x24;
  } while( true );
}


// =========================================================================
// Function: RIVierVzXcGHSqZfKJmlMXpNFiAuCbUwhkhs
// Entry: 0x71b13164 | Size: 48 bytes
// =========================================================================

int * RIVierVzXcGHSqZfKJmlMXpNFiAuCbUwhkhs(int *param_1)

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
// Function: wjLAiDdR_OspYyncnZTNMSCFrYotxHqMLehKrdVGNHFtFPZtTINdmSNFbIuMpIKGQrEyJuaLMDToEVVxMFCVw
// Entry: 0x71b13194 | Size: 376 bytes
// =========================================================================

void wjLAiDdR_OspYyncnZTNMSCFrYotxHqMLehKrdVGNHFtFPZtTINdmSNFbIuMpIKGQrEyJuaLMDToEVVxMFCVw
               (int *param_1,float *param_2,int param_3,float *param_4,int param_5)

{
  float *pfVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
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
  
  pfVar1 = (float *)*param_1;
  if (param_1[1] - (int)pfVar1 == 0) {
    if (param_3 != 0) {
      imp___aeabi_memmove4(param_4,param_2,param_3 << 2);
      return;
    }
  }
  else {
    uVar6 = (param_1[1] - (int)pfVar1 >> 2) * 0x38e38e39;
    fVar10 = pfVar1[5];
    if (param_5 == 0) {
      param_4 = (float *)0x0;
    }
    fVar15 = pfVar1[6];
    if (param_3 == 0) {
      param_2 = (float *)0x0;
    }
    fVar7 = pfVar1[7];
    fVar12 = pfVar1[8];
    if (param_3 != 0) {
      fVar9 = pfVar1[3];
      fVar17 = pfVar1[4];
      fVar13 = *pfVar1;
      fVar14 = pfVar1[1];
      fVar16 = pfVar1[2];
      pfVar4 = param_4;
      fVar8 = fVar12;
      fVar11 = fVar15;
      do {
        fVar15 = fVar10;
        fVar12 = fVar7;
        param_3 = param_3 + -1;
        fVar10 = *param_2;
        param_2 = param_2 + 1;
        fVar7 = fVar14 * fVar15 + fVar13 * fVar10 + fVar16 * fVar11 + -fVar9 * fVar12 +
                -fVar17 * fVar8;
        *pfVar4 = fVar7;
        pfVar4 = pfVar4 + 1;
        fVar8 = fVar12;
        fVar11 = fVar15;
      } while (param_3 != 0);
    }
    pfVar1[5] = fVar10;
    pfVar1[6] = fVar15;
    pfVar1[7] = fVar7;
    pfVar1[8] = fVar12;
    if ((1 < uVar6) && (param_5 != 0)) {
      uVar2 = 1;
      do {
        pfVar3 = pfVar1 + uVar2 * 9;
        fVar14 = pfVar3[3];
        fVar13 = pfVar3[4];
        fVar8 = *pfVar3;
        fVar11 = pfVar3[1];
        fVar9 = pfVar3[2];
        pfVar4 = param_4;
        iVar5 = param_5;
        fVar10 = pfVar3[8];
        fVar15 = pfVar3[6];
        fVar7 = pfVar3[7];
        fVar12 = pfVar3[5];
        do {
          fVar17 = fVar12;
          fVar16 = fVar7;
          iVar5 = iVar5 + -1;
          fVar12 = *pfVar4;
          fVar7 = fVar11 * fVar17 + fVar8 * fVar12 + fVar9 * fVar15 + -fVar14 * fVar16 +
                  -fVar13 * fVar10;
          *pfVar4 = fVar7;
          pfVar4 = pfVar4 + 1;
          fVar10 = fVar16;
          fVar15 = fVar17;
        } while (iVar5 != 0);
        uVar2 = uVar2 + 1;
        pfVar3[5] = fVar12;
        pfVar3[6] = fVar17;
        pfVar3[7] = fVar7;
        pfVar3[8] = fVar16;
      } while (uVar2 != uVar6);
    }
  }
  return;
}


// =========================================================================
// Function: ghrGpdCNoZJpielwdVQFUrwqbOpvMBHrbmKvMBYplQpYgifdedhCSXAMSrhGJTCWWegKPEMaxLJxQABtWQdDdFHHCkBvTlCixAUWIyI
// Entry: 0x71b1330c | Size: 140 bytes
// =========================================================================

void ghrGpdCNoZJpielwdVQFUrwqbOpvMBHrbmKvMBYplQpYgifdedhCSXAMSrhGJTCWWegKPEMaxLJxQABtWQdDdFHHCkBvTlCixAUWIyI
               (undefined4 param_1,float *param_2,int param_3,float *param_4,undefined4 param_5,
               float *param_6)

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
  
  fVar4 = param_6[5];
  fVar2 = param_6[6];
  fVar1 = param_6[7];
  fVar8 = param_6[8];
  if (param_3 != 0) {
    fVar11 = param_6[3];
    fVar10 = param_6[4];
    fVar5 = *param_6;
    fVar6 = param_6[1];
    fVar7 = param_6[2];
    fVar3 = fVar2;
    fVar9 = fVar8;
    do {
      fVar2 = fVar4;
      fVar8 = fVar1;
      param_3 = param_3 + -1;
      fVar4 = *param_2;
      param_2 = param_2 + 1;
      fVar1 = fVar6 * fVar2 + fVar5 * fVar4 + fVar7 * fVar3 + -fVar11 * fVar8 + -fVar10 * fVar9;
      *param_4 = fVar1;
      param_4 = param_4 + 1;
      fVar3 = fVar2;
      fVar9 = fVar8;
    } while (param_3 != 0);
  }
  param_6[5] = fVar4;
  param_6[6] = fVar2;
  param_6[7] = fVar1;
  param_6[8] = fVar8;
  return;
}


// =========================================================================
// Function: mhfrXSzXbuJkoUENgisVuEgvLhslpPdXhaMYPxY_atbhZsfxfLceUDgWGCvFzodARRBM
// Entry: 0x71b13398 | Size: 168 bytes
// =========================================================================

void mhfrXSzXbuJkoUENgisVuEgvLhslpPdXhaMYPxY_atbhZsfxfLceUDgWGCvFzodARRBM
               (int *param_1,float *param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
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
  
  pfVar1 = (float *)*param_1;
  pfVar4 = (float *)param_1[1];
  if ((pfVar1 != pfVar4) && (param_3 != 0)) {
    do {
      fVar15 = pfVar1[3];
      fVar12 = pfVar1[4];
      fVar5 = *pfVar1;
      fVar6 = pfVar1[1];
      fVar8 = pfVar1[2];
      pfVar2 = param_2;
      iVar3 = param_3;
      fVar7 = pfVar1[8];
      fVar9 = pfVar1[6];
      fVar11 = pfVar1[7];
      fVar14 = pfVar1[5];
      do {
        fVar13 = fVar14;
        fVar10 = fVar11;
        iVar3 = iVar3 + -1;
        fVar14 = *pfVar2;
        fVar11 = fVar6 * fVar13 + fVar5 * fVar14 + fVar8 * fVar9 + -fVar15 * fVar10 +
                 -fVar12 * fVar7;
        *pfVar2 = fVar11;
        pfVar2 = pfVar2 + 1;
        fVar7 = fVar10;
        fVar9 = fVar13;
      } while (iVar3 != 0);
      pfVar1[5] = fVar14;
      pfVar1[6] = fVar13;
      pfVar1[7] = fVar11;
      pfVar1[8] = fVar10;
      pfVar1 = pfVar1 + 9;
    } while (pfVar1 != pfVar4);
  }
  return;
}


// =========================================================================
// Function: mIVdKNwIcFoPyZmxiCbLgggNjDDHrlNTwaxrHNDK
// Entry: 0x71b13440 | Size: 36 bytes
// =========================================================================

void mIVdKNwIcFoPyZmxiCbLgggNjDDHrlNTwaxrHNDK(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = param_1[1];
  if (iVar1 == iVar2) {
    return;
  }
  do {
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iVar1 = iVar1 + 0x24;
  } while (iVar1 != iVar2);
  return;
}


// =========================================================================
// Function: FUN_71b13604
// Entry: 0x71b13604 | Size: 20 bytes
// =========================================================================

void FUN_71b13604(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_vector_7006dad5);
}


// =========================================================================
// Function: Ae_VYRWOSIlAksVivkkfqtfOSIsuNVlKXZibszYBmLNmlO
// Entry: 0x71b1366c | Size: 60 bytes
// =========================================================================

void Ae_VYRWOSIlAksVivkkfqtfOSIsuNVlKXZibszYBmLNmlO(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  imp_free(*param_1);
  *param_1 = 0;
  thunk_jV_ENFlvndGQhMTnMqoOgd_qEqTLVqtUqRmAXmKbi_LBiCSaGvlBTwJkZrObEsXBCzSwKRHwEHDompAxjWG
            (param_1[3]);
  imp_free(param_1);
  return;
}


// =========================================================================
// Function: ztlWDMEGVYPtbOJEMwEZkBZgKGXoNTLtf_lJjTRDETGkLrCG
// Entry: 0x71b136a8 | Size: 128 bytes
// =========================================================================

int * ztlWDMEGVYPtbOJEMwEZkBZgKGXoNTLtf_lJjTRDETGkLrCG(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if ((0x2a < param_1) && (piVar1 = (int *)imp_malloc(0x10), piVar1 != (int *)0x0)) {
    iVar2 = thunk_GaCTofezVmeFIRq_ynQXTfgvzZoFZnSJUoxeAkSqVZErAyQGnFYTN(param_2);
    piVar1[3] = iVar2;
    iVar3 = imp_malloc(param_1 << 2);
    piVar1[2] = param_1;
    *piVar1 = iVar3;
    if (iVar2 != 0 && iVar3 != 0) {
      return piVar1;
    }
    imp_free();
    thunk_jV_ENFlvndGQhMTnMqoOgd_qEqTLVqtUqRmAXmKbi_LBiCSaGvlBTwJkZrObEsXBCzSwKRHwEHDompAxjWG(iVar2)
    ;
    imp_free(piVar1);
  }
  return (int *)0x0;
}


// =========================================================================
// Function: n_TzVWntZXBBkJDjXAf_bM_veQpyCEcyGiPe_FuyZbqtbI
// Entry: 0x71b13728 | Size: 64 bytes
// =========================================================================

void n_TzVWntZXBBkJDjXAf_bM_veQpyCEcyGiPe_FuyZbqtbI(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    thunk_ECIxSZbnuEqKOOsexMjTQWcWOrp_gjnKKMhRkDMVMKyLxEomOFyWyyGwZKbcGcZPWevidgxRoHJf_vgiNkS
              (param_1[3]);
    imp___aeabi_memclr4(*param_1,param_1[2] << 2);
    param_1[1] = 0;
    return;
  }
  return;
}


// =========================================================================
// Function: bLKiVwxyDCdbDfdoztKegTofUGinEqcSFevPMAkFXrGAYuOgjOme
// Entry: 0x71b13768 | Size: 8 bytes
// =========================================================================

void bLKiVwxyDCdbDfdoztKegTofUGinEqcSFevPMAkFXrGAYuOgjOme(int param_1)

{
  thunk_FJLjCxbgFGGJyiVTaBgaHrJQQTvMWQ_dKunGjWqYRvIEsTszyAQWjQDbTX_ZjIyiHaYKKjtayPQKovZnkJiuakCIP
            (*(undefined4 *)(param_1 + 0xc));
  return;
}


// =========================================================================
// Function: cpspIwmh_XYHex_ITBXnMczbugsFxhIidjGzIXoVmuLi
// Entry: 0x71b13770 | Size: 232 bytes
// =========================================================================

undefined4
cpspIwmh_XYHex_ITBXnMczbugsFxhIidjGzIXoVmuLi(int *param_1,int param_2,int param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  ushort *puVar6;
  uint uVar7;
  bool bVar8;
  
  if (((param_1 != (int *)0x0 && param_2 != 0) && (param_4 < 0x10)) && (param_1[2] == param_3)) {
    uVar7 = 0xf - param_4;
    iVar2 = *param_1;
    if (param_1[1] == 0) {
      iVar5 = 0;
      do {
        uVar3 = (uint)*(ushort *)(param_2 + 0x18 + iVar5);
        if (uVar3 != 0) {
          *(int *)(iVar2 + 0x30 + iVar5 * 2) = (int)(uVar3 << (uVar7 & 0xff)) >> 1;
          param_1[1] = 1;
        }
        iVar5 = iVar5 + 2;
      } while (iVar5 != 0x40);
    }
    uVar3 = 0;
    iVar5 = -0x20;
    piVar4 = (int *)(iVar2 + 0x30);
    puVar6 = (ushort *)(param_2 + 0x18);
    do {
      uVar1 = *puVar6;
      thunk_MPdfqAPxmrcCvtUeQBBBgtguwUNuBohdUuiffXjC((uint)uVar1 << (uVar7 & 0xff),6,piVar4);
      if (*piVar4 < (int)((uint)uVar1 << (uVar7 & 0xff))) {
        uVar3 = uVar3 | 1 << (iVar5 + 0x20U & 0xff);
      }
      bVar8 = iVar5 != -1;
      iVar5 = iVar5 + 1;
      piVar4 = piVar4 + 1;
      puVar6 = puVar6 + 1;
    } while (bVar8);
    thunk_cELufrKtrvMVHrExpksmILINQsSsf_VweLFvSRpFIydZSMXfpQQODVVfHHLtQDMbzsrsxwJmez
              (param_1[3],uVar3);
    return 0;
  }
  return 0xffffffff;
}


// =========================================================================
// Function: DMElyqwNWYBaXGXA_lBFdUAeNwWlpFqkKnSlpbynzLbfv
// Entry: 0x71b13858 | Size: 216 bytes
// =========================================================================

undefined4 DMElyqwNWYBaXGXA_lBFdUAeNwWlpFqkKnSlpbynzLbfv(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  
  uVar3 = 0xffffffff;
  if (param_1 != (int *)0x0 && param_2 != 0) {
    if (param_1[2] == param_3) {
      iVar6 = *param_1;
      if (param_1[1] == 0) {
        iVar5 = 0;
        do {
          fVar8 = *(float *)(param_2 + 0x30 + iVar5);
          if (0.0 < fVar8) {
            *(float *)(iVar6 + 0x30 + iVar5) = fVar8 * 0.5;
            param_1[1] = 1;
          }
          iVar5 = iVar5 + 4;
        } while (iVar5 != 0x80);
      }
      pfVar7 = (float *)(param_2 + 0x30);
      pfVar4 = (float *)(iVar6 + 0x30);
      uVar2 = 0;
      uVar1 = 0;
      do {
        fVar8 = *pfVar4 + (*pfVar7 - *pfVar4) * 0.015625;
        *pfVar4 = fVar8;
        pfVar4 = pfVar4 + 1;
        fVar9 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        if (fVar8 < fVar9) {
          uVar1 = uVar1 | 1 << (uVar2 & 0xff);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 != 0x20);
      thunk_cELufrKtrvMVHrExpksmILINQsSsf_VweLFvSRpFIydZSMXfpQQODVVfHHLtQDMbzsrsxwJmez
                (param_1[3],uVar1);
      uVar3 = 0;
    }
    return uVar3;
  }
  return 0xffffffff;
}


// =========================================================================
// Function: UJpsLHdjkNzrlqbmCAeIyha_reSfThPxydRNYakA
// Entry: 0x71b13934 | Size: 60 bytes
// =========================================================================

void UJpsLHdjkNzrlqbmCAeIyha_reSfThPxydRNYakA(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  imp_free(*param_1);
  *param_1 = 0;
  thunk_ayzBMNLlpYtaKJwAdhqhdXyNIURHdpexbOtST_yp_OTkIlBVezlawDAvtAFbRjvc_YGPTZC(param_1[3]);
  imp_free(param_1);
  return;
}


// =========================================================================
// Function: PDBDIIoGdcOaSbaqFmZ_bSPFPofLxHmUQdzwaKlHnvP
// Entry: 0x71b13970 | Size: 136 bytes
// =========================================================================

int * PDBDIIoGdcOaSbaqFmZ_bSPFPofLxHmUQdzwaKlHnvP(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((param_1 != 0) && (piVar1 = (int *)imp_malloc(0x10), piVar1 != (int *)0x0)) {
    iVar2 = thunk_QynhbPl_l_TlfTKfCDCLJHrfKDCtRCwntcKfHYokkdQurqwSTASbUDHDgsIGaFWGpDBMaKpKyBaKinME
                      (*(undefined4 *)(param_1 + 0xc),param_2);
    iVar4 = *(int *)(param_1 + 8);
    piVar1[3] = iVar2;
    iVar3 = imp_malloc(iVar4 << 2);
    piVar1[2] = iVar4;
    *piVar1 = iVar3;
    if (iVar2 != 0 && iVar3 != 0) {
      return piVar1;
    }
    imp_free();
    thunk_ayzBMNLlpYtaKJwAdhqhdXyNIURHdpexbOtST_yp_OTkIlBVezlawDAvtAFbRjvc_YGPTZC(iVar2);
    imp_free(piVar1);
  }
  return (int *)0x0;
}


// =========================================================================
// Function: gqBtNGsIvgqbkMPvuNvAYs_crBkvdBfcZrcwmLk_
// Entry: 0x71b139f8 | Size: 64 bytes
// =========================================================================

void gqBtNGsIvgqbkMPvuNvAYs_crBkvdBfcZrcwmLk_(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    thunk_XCDDRAiEazwMgEnlYsesfzELBmbYFrDkmMcjlSdKSBHkEtCrJDTxhzuVdDKaxxDivKeqhFh(param_1[3]);
    imp___aeabi_memclr4(*param_1,param_1[2] << 2);
    param_1[1] = 0;
    return;
  }
  return;
}


// =========================================================================
// Function: VBAyzDioKTVgTLXhZ_egXYDkQcMOhAauRbFT_RDkozHSK_
// Entry: 0x71b13a38 | Size: 8 bytes
// =========================================================================

void VBAyzDioKTVgTLXhZ_egXYDkQcMOhAauRbFT_RDkozHSK_(int param_1)

{
  thunk_PshNtHYektR_FnHdVQTKtOwHK_PmdrjxOTSrWjEMnzTaFcPSjOUHrEhhWsSKnrJkeucYnEtbq_HCz
            (*(undefined4 *)(param_1 + 0xc));
  return;
}


// =========================================================================
// Function: N_AUPiqhoKrdmzu_vVhSYoJcHwMGDCcQnMFapfr
// Entry: 0x71b13a40 | Size: 32 bytes
// =========================================================================

undefined4 N_AUPiqhoKrdmzu_vVhSYoJcHwMGDCcQnMFapfr(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) && (1 < param_2)) {
    uVar1 = thunk_UsOzJoURKlk_zNWBDQBSHLzXrngfYPpqaaCkw_LXfgMpKtOIJgvEOtKmvDGDNAwPdhjVCmwwoSD
                      (*(undefined4 *)(param_1 + 0xc));
    return uVar1;
  }
  return 0xffffffff;
}


// =========================================================================
// Function: ILZPFOGGkjSEmLoIeLfGTywuhNTiUcEkfuY
// Entry: 0x71b13a60 | Size: 40 bytes
// =========================================================================

int ILZPFOGGkjSEmLoIeLfGTywuhNTiUcEkfuY(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x40) + 8);
    if (iVar1 != *(int *)(*(int *)(param_1 + 0xc) + 0x10)) {
      iVar1 = -1;
    }
    return iVar1;
  }
  return -1;
}


// =========================================================================
// Function: DpmpPksEmmjiKOyxDCVcfQhaNTbCUfekpawp
// Entry: 0x71b13a88 | Size: 40 bytes
// =========================================================================

int DpmpPksEmmjiKOyxDCVcfQhaNTbCUfekpawp(int param_1,int param_2)

{
  int iVar1;
  
  if (-1 < param_2) {
    iVar1 = -1;
    if (param_2 < *(int *)(*(int *)(param_1 + 0xc) + 0xc)) {
      *(int *)(*(int *)(param_1 + 0xc) + 0x3c) = param_2;
      iVar1 = param_2;
    }
    return iVar1;
  }
  return -1;
}


// =========================================================================
// Function: _JxrrkgXVSAeiLhQQV_fqhcYZxCrEzO
// Entry: 0x71b13ab0 | Size: 12 bytes
// =========================================================================

undefined4 _JxrrkgXVSAeiLhQQV_fqhcYZxCrEzO(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x3c);
}


// =========================================================================
// Function: WaXTIzbHHOAFGqsDewSyiXvfbFqYpANASTjRboMx_
// Entry: 0x71b13abc | Size: 36 bytes
// =========================================================================

undefined4 WaXTIzbHHOAFGqsDewSyiXvfbFqYpANASTjRboMx_(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_1 != 0) {
    if (-1 < param_2) {
      *(int *)(*(int *)(param_1 + 0xc) + 0x24) = param_2;
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0xffffffff;
}


// =========================================================================
// Function: IuTMPsFuVuTIxTXrEzPixvUvsvUeMCHcyCqtFDPEk
// Entry: 0x71b13ae0 | Size: 20 bytes
// =========================================================================

undefined4 IuTMPsFuVuTIxTXrEzPixvUvsvUeMCHcyCqtFDPEk(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x24);
  }
  return uVar1;
}


// =========================================================================
// Function: JVerMguVVJHwZJWAOirqHOrKjUHralOtYKREIpSerUHcPvY
// Entry: 0x71b13af4 | Size: 36 bytes
// =========================================================================

undefined4 JVerMguVVJHwZJWAOirqHOrKjUHralOtYKREIpSerUHcPvY(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_1 != 0) {
    if (param_2 < 2) {
      *(uint *)(*(int *)(param_1 + 0xc) + 0x20) = param_2;
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0xffffffff;
}


// =========================================================================
// Function: OfsWtEDkBbExWwBqBEyWiMrnYATNYvUnFDmlymHMixrkcHgiNIF
// Entry: 0x71b13b18 | Size: 20 bytes
// =========================================================================

undefined4 OfsWtEDkBbExWwBqBEyWiMrnYATNYvUnFDmlymHMixrkcHgiNIF(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x20);
  }
  return uVar1;
}


// =========================================================================
// Function: NkTcRfTHrtwaKMzDFicAfthkdgTUNciiztNBjlzOgfRRprHiWeO
// Entry: 0x71b13b2c | Size: 220 bytes
// =========================================================================

undefined4
NkTcRfTHrtwaKMzDFicAfthkdgTUNciiztNBjlzOgfRRprHiWeO
          (int *param_1,int param_2,int param_3,int param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  ushort *puVar7;
  uint uVar8;
  bool bVar9;
  
  if (((param_1 != (int *)0x0 && param_2 != 0) && (param_4 < 0x10)) && (param_1[2] == param_3)) {
    uVar8 = 0xf - param_4;
    iVar3 = *param_1;
    if (param_1[1] == 0) {
      iVar6 = 0;
      do {
        uVar4 = (uint)*(ushort *)(param_2 + 0x18 + iVar6);
        if (uVar4 != 0) {
          *(int *)(iVar3 + 0x30 + iVar6 * 2) = (int)(uVar4 << (uVar8 & 0xff)) >> 1;
          param_1[1] = 1;
        }
        iVar6 = iVar6 + 2;
      } while (iVar6 != 0x40);
    }
    uVar4 = 0;
    iVar6 = -0x20;
    piVar5 = (int *)(iVar3 + 0x30);
    puVar7 = (ushort *)(param_2 + 0x18);
    do {
      uVar1 = *puVar7;
      thunk_MPdfqAPxmrcCvtUeQBBBgtguwUNuBohdUuiffXjC((uint)uVar1 << (uVar8 & 0xff),6,piVar5);
      if (*piVar5 < (int)((uint)uVar1 << (uVar8 & 0xff))) {
        uVar4 = uVar4 | 1 << (iVar6 + 0x20U & 0xff);
      }
      bVar9 = iVar6 != -1;
      iVar6 = iVar6 + 1;
      piVar5 = piVar5 + 1;
      puVar7 = puVar7 + 1;
    } while (bVar9);
    uVar2 = thunk_zkRdKrS_zCenTaFlBXxlMihmsMmYWYpJqiydCOQihiynaXcrXDNzBxGpJvVlcRBiScLll
                      (param_1[3],uVar4);
    return uVar2;
  }
  return 0xffffffff;
}


// =========================================================================
// Function: uDPLchedQYwbJuDnKaamjrHrjiBwcYNWQARhpOjKVEWiAzQtusFW
// Entry: 0x71b13c08 | Size: 200 bytes
// =========================================================================

undefined4
uDPLchedQYwbJuDnKaamjrHrjiBwcYNWQARhpOjKVEWiAzQtusFW(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  
  if ((param_1 != (int *)0x0 && param_2 != 0) && (param_1[2] == param_3)) {
    iVar6 = *param_1;
    if (param_1[1] == 0) {
      iVar5 = 0;
      do {
        fVar8 = *(float *)(param_2 + 0x30 + iVar5);
        if (0.0 < fVar8) {
          *(float *)(iVar6 + 0x30 + iVar5) = fVar8 * 0.5;
          param_1[1] = 1;
        }
        iVar5 = iVar5 + 4;
      } while (iVar5 != 0x80);
    }
    pfVar7 = (float *)(param_2 + 0x30);
    pfVar4 = (float *)(iVar6 + 0x30);
    uVar3 = 0;
    uVar2 = 0;
    do {
      fVar8 = *pfVar4 + (*pfVar7 - *pfVar4) * 0.015625;
      *pfVar4 = fVar8;
      pfVar4 = pfVar4 + 1;
      fVar9 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      if (fVar8 < fVar9) {
        uVar2 = uVar2 | 1 << (uVar3 & 0xff);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != 0x20);
    uVar1 = thunk_zkRdKrS_zCenTaFlBXxlMihmsMmYWYpJqiydCOQihiynaXcrXDNzBxGpJvVlcRBiScLll
                      (param_1[3],uVar2);
    return uVar1;
  }
  return 0xffffffff;
}


// =========================================================================
// Function: jzRtKCTdCSHIzCTFaeaABVbINDqwYCbW
// Entry: 0x71b13cd4 | Size: 20 bytes
// =========================================================================

void jzRtKCTdCSHIzCTFaeaABVbINDqwYCbW(int param_1)

{
  if (param_1 != 0) {
    thunk_axdIlHsciJWWEWAPMdkJBIzcRORWKsjXfZ_YwYuHy_awajMDdHCWnEEKBQwmZYYX
              (*(undefined4 *)(param_1 + 0xc));
    return;
  }
  return;
}


// =========================================================================
// Function: ErENtgRUquDPiqDKMEnnodATQuSEoOJmQXhtTYnC
// Entry: 0x71b13ce8 | Size: 8 bytes
// =========================================================================

void ErENtgRUquDPiqDKMEnnodATQuSEoOJmQXhtTYnC(int param_1)

{
  thunk_YXuh_BfEnuQOZYKlToGLuSmalfdMtNMZpZBANqcdiQalgGvhvELIfbZfNxAicTFegREOdtBX
            (*(undefined4 *)(param_1 + 0xc));
  return;
}


// =========================================================================
// Function: jV_ENFlvndGQhMTnMqoOgd_qEqTLVqtUqRmAXmKbi_LBiCSaGvlBTwJkZrObEsXBCzSwKRHwEHDompAxjWG
// Entry: 0x71b140b0 | Size: 60 bytes
// =========================================================================

void jV_ENFlvndGQhMTnMqoOgd_qEqTLVqtUqRmAXmKbi_LBiCSaGvlBTwJkZrObEsXBCzSwKRHwEHDompAxjWG
               (undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  imp_free(param_1[1]);
  param_1[1] = 0;
  imp_free(*param_1);
  imp_free(param_1);
  return;
}


// =========================================================================
// Function: GaCTofezVmeFIRq_ynQXTfgvzZoFZnSJUoxeAkSqVZErAyQGnFYTN
// Entry: 0x71b140ec | Size: 160 bytes
// =========================================================================

int * GaCTofezVmeFIRq_ynQXTfgvzZoFZnSJUoxeAkSqVZErAyQGnFYTN(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if ((1 < param_1) && (piVar2 = (int *)imp_malloc(0xc), piVar2 != (int *)0x0)) {
    iVar1 = param_1 << 2;
    iVar3 = imp_malloc(iVar1);
    piVar2[1] = iVar3;
    iVar4 = imp_malloc(iVar1);
    *piVar2 = iVar4;
    if (iVar3 != 0 && iVar4 != 0) {
      imp___aeabi_memclr4(iVar3,iVar1);
      imp___aeabi_memclr4(iVar4,iVar1);
      piVar2[2] = param_1;
      return piVar2;
    }
    imp_free(iVar3);
    imp_free(iVar4);
    imp_free(piVar2);
  }
  return (int *)0x0;
}


// =========================================================================
// Function: IXFPqgHVOHeRvGpDbWepscuydzUTgxWMYoNevTVONDFyRkDyLehIzPyAIJMHgrOcziJthwScDIjkPh_E
// Entry: 0x71b1418c | Size: 140 bytes
// =========================================================================

int IXFPqgHVOHeRvGpDbWepscuydzUTgxWMYoNevTVONDFyRkDyLehIzPyAIJMHgrOcziJthwScDIjkPh_E
              (int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = imp_realloc(param_1[1],param_2 << 2);
  param_1[1] = iVar1;
  iVar1 = imp_realloc(*param_1,param_2 << 2);
  iVar2 = param_1[2];
  *param_1 = iVar1;
  if (param_1[1] == 0) {
    param_2 = 0;
  }
  if (iVar1 == 0) {
    param_2 = 0;
  }
  if (iVar2 < param_2) {
    iVar1 = (param_2 - iVar2) * 4;
    imp___aeabi_memclr4(param_1[1] + iVar2 * 4,iVar1);
    imp___aeabi_memclr4(*param_1 + param_1[2] * 4,iVar1);
  }
  param_1[2] = param_2;
  return param_2;
}


// =========================================================================
// Function: ECIxSZbnuEqKOOsexMjTQWcWOrp_gjnKKMhRkDMVMKyLxEomOFyWyyGwZKbcGcZPWevidgxRoHJf_vgiNkS
// Entry: 0x71b14218 | Size: 44 bytes
// =========================================================================

void ECIxSZbnuEqKOOsexMjTQWcWOrp_gjnKKMhRkDMVMKyLxEomOFyWyyGwZKbcGcZPWevidgxRoHJf_vgiNkS
               (undefined4 *param_1)

{
  imp___aeabi_memclr4(param_1[1],param_1[2] << 2);
  imp___aeabi_memclr4(*param_1,param_1[2] << 2);
  return;
}


// =========================================================================
// Function: FJLjCxbgFGGJyiVTaBgaHrJQQTvMWQ_dKunGjWqYRvIEsTszyAQWjQDbTX_ZjIyiHaYKKjtayPQKovZnkJiuakCIP
// Entry: 0x71b14244 | Size: 164 bytes
// =========================================================================

void FJLjCxbgFGGJyiVTaBgaHrJQQTvMWQ_dKunGjWqYRvIEsTszyAQWjQDbTX_ZjIyiHaYKKjtayPQKovZnkJiuakCIP
               (int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 != 0) {
    iVar4 = param_2;
    if (param_2 < 0) {
      iVar4 = -param_2;
    }
    iVar5 = param_1[2] - iVar4;
    if (param_2 < 1) {
      iVar3 = iVar4;
      iVar2 = 0;
    }
    else {
      iVar3 = 0;
      iVar2 = iVar4;
    }
    iVar1 = iVar5 * 4;
    imp___aeabi_memmove4(param_1[1] + iVar2 * 4,param_1[1] + iVar3 * 4,iVar1);
    if (0 < param_2) {
      iVar5 = 0;
    }
    imp___aeabi_memclr4(param_1[1] + iVar5 * 4,iVar4 << 2);
    imp___aeabi_memmove4(*param_1 + iVar2 * 4,*param_1 + iVar3 * 4,iVar1);
    imp___aeabi_memclr4(*param_1 + iVar5 * 4,iVar4 << 2);
    return;
  }
  return;
}


// =========================================================================
// Function: cELufrKtrvMVHrExpksmILINQsSsf_VweLFvSRpFIydZSMXfpQQODVVfHHLtQDMbzsrsxwJmez
// Entry: 0x71b142e8 | Size: 144 bytes
// =========================================================================

void cELufrKtrvMVHrExpksmILINQsSsf_VweLFvSRpFIydZSMXfpQQODVVfHHLtQDMbzsrsxwJmez
               (int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  imp___aeabi_memmove4(param_1[1] + 4,param_1[1],param_1[2] * 4 + -4);
  iVar2 = *param_1;
  *(uint *)param_1[1] = param_2;
  imp___aeabi_memmove4(iVar2 + 4,iVar2,param_1[2] * 4 + -4);
  param_2 = param_2 - ((param_2 >> 1 & 0x5b6db6db) + (param_2 >> 2 & 0x9249249));
  uVar1 = param_2 + (param_2 >> 3) & 0xc71c71c7;
  uVar1 = uVar1 + (uVar1 >> 6);
  *(uint *)*param_1 = uVar1 + (uVar1 >> 0xc) + (uVar1 >> 0x18) & 0x3f;
  return;
}


// =========================================================================
// Function: ayzBMNLlpYtaKJwAdhqhdXyNIURHdpexbOtST_yp_OTkIlBVezlawDAvtAFbRjvc_YGPTZC
// Entry: 0x71b14378 | Size: 84 bytes
// =========================================================================

void ayzBMNLlpYtaKJwAdhqhdXyNIURHdpexbOtST_yp_OTkIlBVezlawDAvtAFbRjvc_YGPTZC(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  imp_free(*param_1);
  *param_1 = 0;
  imp_free(param_1[1]);
  param_1[1] = 0;
  imp_free(param_1[2]);
  param_1[2] = 0;
  imp_free(param_1[0xd]);
  imp_free(param_1);
  return;
}


// =========================================================================
// Function: QynhbPl_l_TlfTKfCDCLJHrfKDCtRCwntcKfHYokkdQurqwSTASbUDHDgsIGaFWGpDBMaKpKyBaKinME
// Entry: 0x71b143cc | Size: 212 bytes
// =========================================================================

undefined4 *
QynhbPl_l_TlfTKfCDCLJHrfKDCtRCwntcKfHYokkdQurqwSTASbUDHDgsIGaFWGpDBMaKpKyBaKinME
          (int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (((param_1 != 0) && (-1 < param_2)) &&
     (puVar1 = (undefined4 *)imp_malloc(0x44), puVar1 != (undefined4 *)0x0)) {
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[0xd] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[0xf] = param_2;
    puVar1[3] = param_2 + 1;
    puVar1[4] = 0;
    puVar1[0x10] = param_1;
    iVar2 = imp_malloc((param_2 + 1) * 4);
    puVar1[2] = iVar2;
    uVar6 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar3 = 0;
    if (iVar2 != 0) {
      iVar2 = thunk_UsOzJoURKlk_zNWBDQBSHLzXrngfYPpqaaCkw_LXfgMpKtOIJgvEOtKmvDGDNAwPdhjVCmwwoSD
                        (puVar1,*(undefined4 *)(param_1 + 8));
      if (iVar2 != 0) {
        return puVar1;
      }
      uVar4 = puVar1[2];
      uVar6 = puVar1[0xd];
      uVar3 = *puVar1;
      uVar5 = puVar1[1];
    }
    imp_free(uVar3);
    imp_free(uVar5);
    imp_free(uVar4);
    imp_free(uVar6);
    imp_free(puVar1);
  }
  return (undefined4 *)0x0;
}


// =========================================================================
// Function: UsOzJoURKlk_zNWBDQBSHLzXrngfYPpqaaCkw_LXfgMpKtOIJgvEOtKmvDGDNAwPdhjVCmwwoSD
// Entry: 0x71b144a0 | Size: 344 bytes
// =========================================================================

int UsOzJoURKlk_zNWBDQBSHLzXrngfYPpqaaCkw_LXfgMpKtOIJgvEOtKmvDGDNAwPdhjVCmwwoSD
              (int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)param_1[0x10];
  if (piVar3[2] != param_2) {
    iVar1 = imp_realloc(piVar3[1],param_2 << 2);
    piVar3[1] = iVar1;
    iVar1 = imp_realloc(*piVar3,param_2 << 2);
    iVar2 = piVar3[2];
    *piVar3 = iVar1;
    if (piVar3[1] == 0) {
      param_2 = 0;
    }
    if (iVar1 == 0) {
      param_2 = 0;
    }
    if (iVar2 < param_2) {
      iVar1 = (param_2 - iVar2) * 4;
      imp___aeabi_memclr4(piVar3[1] + iVar2 * 4,iVar1);
      imp___aeabi_memclr4(*piVar3 + piVar3[2] * 4,iVar1);
    }
    piVar3[2] = param_2;
  }
  iVar2 = param_2 * 4 + 4;
  iVar1 = imp_realloc(*param_1,iVar2);
  *param_1 = iVar1;
  iVar1 = imp_realloc(param_1[1],param_2 << 2);
  param_1[1] = iVar1;
  iVar1 = imp_realloc(param_1[0xd],iVar2);
  param_1[0xd] = iVar1;
  if (*param_1 == 0 || iVar1 == 0) {
    param_2 = 0;
    iVar1 = param_1[4];
    if (-1 < iVar1) goto LAB_71b145d0;
  }
  else {
    if (param_1[1] == 0) {
      param_2 = 0;
    }
    iVar1 = param_1[4];
    if (param_2 <= iVar1) goto LAB_71b145d0;
  }
  iVar2 = (param_2 - iVar1) * 4;
  imp___aeabi_memclr4(*param_1 + iVar1 * 4,iVar2);
  imp___aeabi_memclr4(param_1[1] + param_1[4] * 4,iVar2);
  imp___aeabi_memclr4(param_1[0xd] + param_1[4] * 4,iVar2);
LAB_71b145d0:
  param_1[4] = param_2;
  return param_2;
}


// =========================================================================
// Function: XCDDRAiEazwMgEnlYsesfzELBmbYFrDkmMcjlSdKSBHkEtCrJDTxhzuVdDKaxxDivKeqhFh
// Entry: 0x71b145f8 | Size: 144 bytes
// =========================================================================

void XCDDRAiEazwMgEnlYsesfzELBmbYFrDkmMcjlSdKSBHkEtCrJDTxhzuVdDKaxxDivKeqhFh(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  imp___aeabi_memclr4(param_1[1],param_1[4] << 2);
  imp___aeabi_memclr4(param_1[2],param_1[3] << 2);
  iVar4 = param_1[4];
  if (-1 < iVar4) {
    iVar2 = *param_1;
    puVar3 = (undefined4 *)param_1[0xd];
    iVar5 = 0;
    do {
      *(undefined4 *)(iVar2 + iVar5 * 4) = 0x2800;
      iVar4 = param_1[4];
      *puVar3 = 0;
      bVar1 = iVar5 < iVar4;
      puVar3 = puVar3 + 1;
      iVar5 = iVar5 + 1;
    } while (bVar1);
  }
  param_1[0xe] = 0;
  param_1[0xc] = 0;
  param_1[10] = -2;
  param_1[0xb] = iVar4;
  param_1[5] = 0x4000;
  param_1[6] = 0x4000;
  param_1[7] = -2;
  return;
}


// =========================================================================
// Function: PshNtHYektR_FnHdVQTKtOwHK_PmdrjxOTSrWjEMnzTaFcPSjOUHrEhhWsSKnrJkeucYnEtbq_HCz
// Entry: 0x71b14688 | Size: 40 bytes
// =========================================================================

int PshNtHYektR_FnHdVQTKtOwHK_PmdrjxOTSrWjEMnzTaFcPSjOUHrEhhWsSKnrJkeucYnEtbq_HCz
              (int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x3c);
  uVar1 = iVar2 - param_2;
  uVar1 = uVar1 & ~((int)uVar1 >> 0x1f);
  *(uint *)(param_1 + 0x3c) = uVar1;
  if (*(int *)(param_1 + 0xc) <= (int)uVar1) {
    uVar1 = *(int *)(param_1 + 0xc) - 1;
    *(uint *)(param_1 + 0x3c) = uVar1;
  }
  return iVar2 - uVar1;
}


// =========================================================================
// Function: zkRdKrS_zCenTaFlBXxlMihmsMmYWYpJqiydCOQihiynaXcrXDNzBxGpJvVlcRBiScLll
// Entry: 0x71b146b0 | Size: 1640 bytes
// =========================================================================

uint zkRdKrS_zCenTaFlBXxlMihmsMmYWYpJqiydCOQihiynaXcrXDNzBxGpJvVlcRBiScLll
               (uint *param_1,uint param_2,uint *param_3)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint *extraout_r2;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  float *pfVar17;
  uint unaff_r4;
  uint uVar18;
  uint *puVar19;
  uint *puVar20;
  undefined1 (*pauVar21) [16];
  uint *puVar22;
  undefined8 *puVar23;
  float *pfVar24;
  int *piVar25;
  int iVar26;
  undefined8 *puVar27;
  undefined1 (*pauVar28) [16];
  bool bVar29;
  bool bVar30;
  uint in_fpscr;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  
  piVar25 = (int *)param_1[0x10];
  uVar14 = piVar25[2];
  if (uVar14 != param_1[4]) {
    return 0xffffffff;
  }
  if (1 < (int)param_1[3]) {
    imp___aeabi_memmove4(param_1[2] + 4,param_1[2],param_1[3] * 4 + -4);
    puVar9 = (uint *)param_1[2];
    piVar25 = (int *)param_1[0x10];
    *puVar9 = param_2;
    uVar14 = param_1[4];
    param_2 = puVar9[param_1[0xf]];
    param_3 = extraout_r2;
  }
  uVar10 = 0xffffffff;
  puVar9 = (uint *)0x4000;
  if ((int)uVar14 < 1) {
    bVar1 = false;
    puVar22 = (uint *)0x0;
  }
  else {
    pauVar28 = (undefined1 (*) [16])piVar25[1];
    puVar27 = (undefined8 *)param_1[1];
    uVar11 = 0;
    if (3 < uVar14) {
      unaff_r4 = (int)puVar27 - (int)pauVar28;
    }
    if (3 < uVar14 && 0xf < unaff_r4) {
      uVar11 = uVar14 & 0x7ffffffc;
      auVar2._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
      auVar2._0_8_ = 0x3f0000003f;
      auVar3._8_8_ = CONCAT44(param_2,param_2);
      auVar3._0_8_ = CONCAT44(param_2,param_2);
      uVar16 = uVar11;
      pauVar21 = pauVar28;
      puVar23 = puVar27;
      do {
        auVar35 = *pauVar21;
        pauVar21 = pauVar21 + 1;
        auVar35 = auVar35 ^ auVar3;
        uVar16 = uVar16 - 4;
        auVar36._8_8_ = 0x5b6db6db5b6db6db;
        auVar36._0_8_ = 0x5b6db6db5b6db6db;
        auVar38 = VectorUnsignedFixedToFloat(auVar35,1);
        auVar39 = VectorUnsignedFixedToFloat(auVar35,2);
        auVar37._8_8_ = 0x924924909249249;
        auVar37._0_8_ = 0x924924909249249;
        auVar37 = VectorAdd(auVar39 & auVar37,auVar38 & auVar36,4);
        auVar37 = VectorSub(auVar35,auVar37,4);
        auVar35._8_8_ = 0xc71c71c7c71c71c7;
        auVar35._0_8_ = 0xc71c71c7c71c71c7;
        auVar37 = VectorShiftRightAccumulate(auVar37,auVar37,3);
        auVar37 = VectorShiftRightAccumulate(auVar37 & auVar35,auVar37 & auVar35,6);
        auVar35 = VectorShiftRightAccumulate(auVar37,auVar37,0xc);
        auVar37 = VectorShiftRightAccumulate(auVar35,auVar37,0x18);
        auVar37 = auVar37 & *(undefined1 (*) [16])(auVar2 << 0x40 | auVar2);
        *puVar23 = auVar37._0_8_;
        puVar23[1] = auVar37._8_8_;
        puVar23 = puVar23 + 2;
      } while (uVar16 != 0);
      if (uVar14 != uVar11) goto LAB_71b14750;
    }
    else {
LAB_71b14750:
      iVar15 = uVar14 - uVar11;
      puVar22 = (uint *)((int)puVar27 + uVar11 * 4);
      puVar19 = (uint *)(*pauVar28 + uVar11 * 4);
      do {
        iVar15 = iVar15 + -1;
        uVar14 = *puVar19 ^ param_2;
        uVar14 = uVar14 - ((uVar14 >> 2 & 0x9249249) + (uVar14 >> 1 & 0x5b6db6db));
        uVar14 = uVar14 + (uVar14 >> 3) & 0xc71c71c7;
        uVar14 = uVar14 + (uVar14 >> 6);
        param_3 = (uint *)(uVar14 + (uVar14 >> 0xc) + (uVar14 >> 0x18) & 0x3f);
        *puVar22 = (uint)param_3;
        puVar22 = puVar22 + 1;
        puVar19 = puVar19 + 1;
      } while (iVar15 != 0);
    }
    uVar14 = param_1[4];
    if (0 < (int)uVar14) {
      iVar15 = 0;
      iVar26 = *piVar25;
      do {
        iVar12 = *(int *)(iVar26 + iVar15 * 4);
        if (0 < iVar12) {
          param_3 = (uint *)*param_1;
          uVar11 = 0xd - ((uint)(iVar12 * 3) >> 4);
          uVar16 = *(int *)((int)puVar27 + iVar15 * 4) * 0x200 - param_3[iVar15];
          uVar14 = uVar16 >> (uVar11 & 0xff);
          if ((int)uVar16 < 0) {
            uVar14 = -(-uVar16 >> (uVar11 & 0xff));
          }
          param_3[iVar15] = uVar14 + param_3[iVar15];
          uVar14 = param_1[4];
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < (int)uVar14);
      bVar1 = 0 < (int)uVar14;
      if (0 < (int)uVar14) {
        puVar9 = (uint *)0x4000;
        uVar11 = 0;
        puVar22 = (uint *)0x0;
        uVar10 = 0xffffffff;
        do {
          param_3 = *(uint **)(*param_1 + uVar11 * 4);
          if ((int)param_3 < (int)puVar9) {
            uVar10 = uVar11;
          }
          if ((int)puVar22 < (int)param_3) {
            puVar22 = param_3;
          }
          uVar11 = uVar11 + 1;
          if ((int)param_3 < (int)puVar9) {
            puVar9 = param_3;
          }
        } while (uVar14 != uVar11);
        goto LAB_71b148b0;
      }
    }
    bVar1 = false;
    puVar22 = (uint *)0x0;
  }
LAB_71b148b0:
  iVar15 = (int)puVar22 - (int)puVar9;
  puVar19 = (uint *)param_1[5];
  bVar30 = SBORROW4((int)puVar19,0x2200);
  puVar22 = puVar19 + -0x880;
  bVar29 = puVar19 == (uint *)0x2200;
  if (0x2200 < (int)puVar19) {
    bVar30 = SBORROW4(iVar15,0xb00);
    puVar22 = (uint *)(iVar15 + -0xb00);
    bVar29 = iVar15 == 0xb00;
  }
  if (bVar29 || (int)puVar22 < 0 != bVar30) {
    bVar5 = 0;
    uVar11 = param_1[6];
    uVar16 = uVar11 + 1;
    param_1[6] = uVar16;
    if (iVar15 < 0x401) goto LAB_71b148fc;
  }
  else {
    puVar22 = puVar9;
    if ((int)puVar9 < 0x1e01) {
      puVar22 = (uint *)0x1e00;
    }
    puVar22 = puVar22 + 0x100;
    puVar20 = puVar19;
    if (puVar22 < puVar19) {
      puVar20 = puVar22;
      param_3 = param_1;
    }
    uVar11 = param_1[6];
    uVar16 = uVar11 + 1;
    if (puVar22 < puVar19) {
      param_3[5] = (uint)puVar22;
    }
    param_1[6] = uVar16;
    puVar19 = puVar20;
  }
  bVar5 = 1;
  if (((int)puVar19 <= (int)puVar9) && (bVar5 = 0, (int)puVar9 <= (int)uVar11)) {
    bVar5 = 1;
  }
LAB_71b148fc:
  bVar4 = 0;
  if (uVar14 == 0) {
LAB_71b14b50:
    uVar14 = param_1[8];
  }
  else {
    piVar25 = (int *)*piVar25;
    iVar26 = uVar14 << 2;
    do {
      if (0 < *piVar25) {
        iVar26 = 1000;
        fVar31 = (float)VectorSignedToFloat(iVar15,(byte)(in_fpscr >> 0x16) & 3);
        uVar11 = param_1[7];
        if ((int)uVar10 < (int)uVar11) {
          iVar26 = 10;
        }
        fVar31 = fVar31 * 6.1035156e-05;
        if (param_1[10] == uVar10) {
          uVar18 = param_1[0xc] + 1;
        }
        else {
          uVar18 = 1;
          param_1[10] = uVar10;
        }
        pfVar17 = (float *)param_1[0xd];
        param_1[0xc] = uVar18;
        fVar33 = fVar31 + pfVar17[uVar10];
        uVar13 = in_fpscr & 0xfffffff | (uint)(fVar33 < 3000.0) << 0x1f |
                 (uint)(fVar33 == 3000.0) << 0x1e;
        in_fpscr = uVar13 | (uint)NAN(fVar33) << 0x1c;
        bVar4 = (byte)(uVar13 >> 0x18);
        if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
          fVar33 = 3000.0;
        }
        pfVar17[uVar10] = fVar33;
        fVar33 = fVar31;
        if ((int)uVar18 < iVar26) {
          fVar33 = (float)VectorSignedToFloat(*(int *)(*param_1 + param_1[0xb] * 4) - (int)puVar9,
                                              (byte)(in_fpscr >> 0x16) & 3);
          fVar33 = fVar33 * 6.1035156e-05;
        }
        bVar4 = 1;
        if (bVar1) {
          uVar18 = 0;
          do {
            bVar29 = (int)(uVar10 + 1) < (int)uVar18;
            bVar1 = (int)uVar18 < (int)(uVar10 - 2);
            uVar13 = (uint)(uVar10 != uVar18 &&
                           ((int)(uVar11 - 2) <= (int)uVar18 && (int)uVar18 <= (int)(uVar11 + 1)));
            uVar18 = uVar18 + 1;
            fVar34 = (float)VectorUnsignedToFloat(uVar13,(byte)(in_fpscr >> 0x16) & 3);
            fVar32 = (float)VectorUnsignedToFloat
                                      ((uint)(bVar1 || bVar29) & ~uVar13,
                                       (byte)(in_fpscr >> 0x16) & 3);
            fVar32 = *pfVar17 - (fVar31 * fVar32 + fVar33 * fVar34);
            in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar32 < 0.0) << 0x1f;
            if (SUB41(in_fpscr >> 0x1f,0)) {
              fVar32 = 0.0;
            }
            *pfVar17 = fVar32;
            pfVar17 = pfVar17 + 1;
          } while (uVar14 != uVar18);
          bVar4 = 1;
          goto LAB_71b14b50;
        }
        break;
      }
      iVar26 = iVar26 + -4;
      piVar25 = piVar25 + 1;
    } while (iVar26 != 0);
    uVar14 = param_1[8];
  }
  if (uVar14 != 0) {
    iVar15 = uVar10 - param_1[7];
    if ((int)param_1[9] < iVar15) {
      fVar31 = (float)VectorSignedToFloat(iVar15 - param_1[9],(byte)(in_fpscr >> 0x16) & 3);
      fVar33 = fVar31 * -0.05 + 1.0;
      fVar31 = 0.5;
      if (0.5 < fVar33) {
        fVar31 = fVar33;
      }
    }
    else if (iVar15 < 0) {
      fVar31 = (float)VectorSignedToFloat(iVar15,(byte)(in_fpscr >> 0x16) & 3);
      fVar31 = fVar31 * -0.05 + 0.25;
      if (1.0 < fVar31) {
        fVar31 = 1.0;
      }
    }
    else {
      fVar31 = 1.0;
    }
    fVar31 = *(float *)(param_1[0xd] + param_1[0xb] * 4) * fVar31;
    bVar7 = 0;
    bVar6 = 0;
    bVar8 = 0;
    fVar33 = 1.5;
    if (1.5 < fVar31) {
      fVar33 = fVar31;
    }
    fVar31 = *(float *)(param_1[0xd] + uVar10 * 4);
    if ((fVar33 <= fVar31) && (10 < (int)param_1[0xc])) {
      bVar7 = 1;
      bVar6 = 1;
      if ((float)param_1[0xe] < fVar31) {
        bVar8 = 1;
      }
    }
    bVar5 = bVar8 | bVar5 & bVar7 | (int)param_1[7] < 0 & (bVar6 | bVar5);
  }
  if ((bool)(bVar4 & bVar5)) {
    if (uVar10 != param_1[7]) {
      pfVar24 = (float *)(param_1[0xd] + uVar10 * 4);
      fVar31 = *pfVar24;
      pfVar17 = (float *)(param_1[0xd] + param_1[0xb] * 4);
      if (250.0 < fVar31) {
        fVar31 = 250.0;
      }
      param_1[0xe] = (uint)fVar31;
      fVar31 = *pfVar24;
      if (fVar31 < *pfVar17) {
        *pfVar17 = fVar31;
      }
    }
    if ((int)puVar9 < (int)uVar16) {
      param_1[6] = (uint)puVar9;
    }
    param_1[7] = uVar10;
    param_1[0xb] = uVar10;
    return uVar10;
  }
  return param_1[7];
}


// =========================================================================
// Function: MPdfqAPxmrcCvtUeQBBBgtguwUNuBohdUuiffXjC
// Entry: 0x71b14d64 | Size: 44 bytes
// =========================================================================

void MPdfqAPxmrcCvtUeQBBBgtguwUNuBohdUuiffXjC(int param_1,uint param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 - *param_3;
  uVar2 = uVar1 >> (param_2 & 0xff);
  if ((int)uVar1 < 0) {
    uVar2 = -(-uVar1 >> (param_2 & 0xff));
  }
  *param_3 = uVar2 + *param_3;
  return;
}


// =========================================================================
// Function: axdIlHsciJWWEWAPMdkJBIzcRORWKsjXfZ_YwYuHy_awajMDdHCWnEEKBQwmZYYX
// Entry: 0x71b14d90 | Size: 8 bytes
// =========================================================================

undefined4 axdIlHsciJWWEWAPMdkJBIzcRORWKsjXfZ_YwYuHy_awajMDdHCWnEEKBQwmZYYX(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}


// =========================================================================
// Function: YXuh_BfEnuQOZYKlToGLuSmalfdMtNMZpZBANqcdiQalgGvhvELIfbZfNxAicTFegREOdtBX
// Entry: 0x71b14d98 | Size: 88 bytes
// =========================================================================

float YXuh_BfEnuQOZYKlToGLuSmalfdMtNMZpZBANqcdiQalgGvhvELIfbZfNxAicTFegREOdtBX(int param_1)

{
  uint in_fpscr;
  float fVar1;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    return *(float *)(*(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x2c) * 4) / 3000.0;
  }
  fVar1 = (float)VectorSignedToFloat(0x4000 - *(int *)(param_1 + 0x18),(byte)(in_fpscr >> 0x16) & 3)
  ;
  fVar1 = fVar1 * 6.1035156e-05;
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
  return fVar1;
}


// =========================================================================
// Function: HNNstObcHxMO_McVgWQCvsnPjROKxsGMwKTQISNwcMgVkh
// Entry: 0x71b15370 | Size: 48 bytes
// =========================================================================

int * HNNstObcHxMO_McVgWQCvsnPjROKxsGMwKTQISNwcMgVkh(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  param_2 = param_2 << (param_3 != 0);
  *param_1 = param_2;
  iVar1 = thunk_nxphuypHnvtjluWYlftD(param_2 << 2);
  param_1[1] = iVar1;
  return param_1;
}


// =========================================================================
// Function: MoWCgOEvNFnIfeJwQZehZmjCXReekaAPR
// Entry: 0x71b153a0 | Size: 28 bytes
// =========================================================================

int MoWCgOEvNFnIfeJwQZehZmjCXReekaAPR(int param_1)

{
  thunk_oNNDtZVtPOMuxXdbYs(*(undefined4 *)(param_1 + 4));
  return param_1;
}


// =========================================================================
// Function: nElObgiZKoHdtlYaZsglUEDn_BfBPDYeQSzFrsBiSToXcv
// Entry: 0x71b153c0 | Size: 24 bytes
// =========================================================================

void nElObgiZKoHdtlYaZsglUEDn_BfBPDYeQSzFrsBiSToXcv(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_2;
  iVar2 = param_2[1];
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  *param_1 = iVar2;
  param_1[1] = iVar1;
  return;
}


// =========================================================================
// Function: mguoHeaWBItStnWikIAmIltiHKBygXqMVIjBNnG
// Entry: 0x71b153d8 | Size: 24 bytes
// =========================================================================

void mguoHeaWBItStnWikIAmIltiHKBygXqMVIjBNnG(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_2;
  iVar2 = param_2[1];
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  *param_1 = iVar2;
  param_1[1] = iVar1;
  return;
}


// =========================================================================
// Function: fyyMVOygMhMevIkrkTTUtzbPTMHqUsLol
// Entry: 0x71b153f0 | Size: 84 bytes
// =========================================================================

int * fyyMVOygMhMevIkrkTTUtzbPTMHqUsLol(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  iVar1 = thunk_RwHYDtDaQMfqxLi(param_2,param_3 != 0);
  param_1[2] = iVar1;
  iVar1 = thunk_nxphuypHnvtjluWYlftD((*param_1 << (param_1[1] != 0)) << 2);
  param_1[3] = iVar1;
  return param_1;
}


// =========================================================================
// Function: vCBnCSmxQftcHuTI_iwg
// Entry: 0x71b15444 | Size: 36 bytes
// =========================================================================

int vCBnCSmxQftcHuTI_iwg(int param_1)

{
  thunk_zifwUOgVXcSpuVPKRzB(*(undefined4 *)(param_1 + 8));
  thunk_oNNDtZVtPOMuxXdbYs(*(undefined4 *)(param_1 + 0xc));
  return param_1;
}


// =========================================================================
// Function: Cx_GHie_kpZHhXBqMLKVhOjuvBtbqTiFdnWTZhWUUXYDrNg
// Entry: 0x71b1546c | Size: 248 bytes
// =========================================================================

bool Cx_GHie_kpZHhXBqMLKVhOjuvBtbqTiFdnWTZhWUUXYDrNg(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return false;
  }
  iVar1 = 0;
  for (; (param_1 & 1) == 0; param_1 = (int)param_1 / 2) {
    iVar1 = iVar1 + 1;
  }
  for (; param_1 * -0x55555555 + 0x2aaaaaaa < 0x55555555; param_1 = (int)param_1 / 3) {
  }
  for (; param_1 * -0x33333333 + 0x19999999 < 0x33333333; param_1 = (int)param_1 / 5) {
  }
  iVar2 = 4;
  if (param_2 == 0) {
    iVar2 = 5;
  }
  return param_1 == 1 && iVar2 <= iVar1;
}


// =========================================================================
// Function: dT_jSiEukS_zTZysyUrGY_JoJ_x_vTyWm
// Entry: 0x71b15564 | Size: 32 bytes
// =========================================================================

bool dT_jSiEukS_zTZysyUrGY_JoJ_x_vTyWm(void)

{
  int iVar1;
  
  iVar1 = thunk_DxytLesOaRjiMEj();
  return 1 < iVar1;
}


// =========================================================================
// Function: fTPUMqEBRBLiG_BFUgrKcLOVDOfAQdsGZ
// Entry: 0x71b15584 | Size: 52 bytes
// =========================================================================

void fTPUMqEBRBLiG_BFUgrKcLOVDOfAQdsGZ(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = thunk_MwhHq(8);
  thunk_HNNstObcHxMO_McVgWQCvsnPjROKxsGMwKTQISNwcMgVkh(uVar1,*param_2,param_2[1]);
  *param_1 = uVar1;
  return;
}


// =========================================================================
// Function: CwfQNpPlBfFTuLSDAPZsaYoDHvFWLBMxGYxVkbdHaJexENdFBwwneQgtgOFO
// Entry: 0x71b155c4 | Size: 84 bytes
// =========================================================================

void CwfQNpPlBfFTuLSDAPZsaYoDHvFWLBMxGYxVkbdHaJexENdFBwwneQgtgOFO
               (int param_1,int param_2,int param_3,int param_4)

{
  if (param_4 != 0) {
    thunk_xvDtmfMfgCHvpgwIzavVsBV
              (*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_2 + 4),
               *(undefined4 *)(param_3 + 4),*(undefined4 *)(param_1 + 0xc),0);
    return;
  }
  thunk_BGNCk_MRcNNOSJm
            (*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_3 + 4),
             *(undefined4 *)(param_1 + 0xc),0);
  return;
}


// =========================================================================
// Function: IAYmOnea_hKUjmPCSXJmhVRAgSLlpekeLjFrCBaN_kwqXmwgpivOYEngXnUKI
// Entry: 0x71b15618 | Size: 84 bytes
// =========================================================================

void IAYmOnea_hKUjmPCSXJmhVRAgSLlpekeLjFrCBaN_kwqXmwgpivOYEngXnUKI
               (int param_1,int param_2,int param_3,int param_4)

{
  if (param_4 != 0) {
    thunk_xvDtmfMfgCHvpgwIzavVsBV
              (*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_2 + 4),
               *(undefined4 *)(param_3 + 4),*(undefined4 *)(param_1 + 0xc),1);
    return;
  }
  thunk_BGNCk_MRcNNOSJm
            (*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_3 + 4),
             *(undefined4 *)(param_1 + 0xc),1);
  return;
}


// =========================================================================
// Function: eynZWwVDoWDXWrqliyyfAnRoLa_NviwHwKmnIYtsOSmKsKVEZfVMzGtYbPbBiugXivdXtq
// Entry: 0x71b1566c | Size: 28 bytes
// =========================================================================

void eynZWwVDoWDXWrqliyyfAnRoLa_NviwHwKmnIYtsOSmKsKVEZfVMzGtYbPbBiugXivdXtq
               (int param_1,int param_2,int param_3,int param_4)

{
  thunk_utN_uPAPkJQUV_VcLkBuLmSiEg
            (*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_3 + 4),
             *(undefined4 *)(param_4 + 4));
  return;
}


// =========================================================================
// Function: nxphuypHnvtjluWYlftD
// Entry: 0x71b15898 | Size: 40 bytes
// =========================================================================

int nxphuypHnvtjluWYlftD(int param_1)

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
// Function: oNNDtZVtPOMuxXdbYs
// Entry: 0x71b158c0 | Size: 16 bytes
// =========================================================================

void oNNDtZVtPOMuxXdbYs(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  imp_free(*(undefined4 *)(param_1 + -4));
  return;
}


// =========================================================================
// Function: DxytLesOaRjiMEj
// Entry: 0x71b158d0 | Size: 8 bytes
// =========================================================================

undefined4 DxytLesOaRjiMEj(void)

{
  return 1;
}


// =========================================================================
// Function: XYTYOzOai
// Entry: 0x71b158d8 | Size: 904 bytes
// =========================================================================

void XYTYOzOai(uint param_1,int param_2,uint *param_3)

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
// Function: ameeFmOgA
// Entry: 0x71b15c68 | Size: 404 bytes
// =========================================================================

int ameeFmOgA(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
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
// Function: FUN_71b15e0c
// Entry: 0x71b15e0c | Size: 816 bytes
// =========================================================================

int FUN_71b15e0c(float param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                int param_7,int param_8,int param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
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
  
  bVar17 = SBORROW4(param_3,1);
  iVar1 = param_3 + -1;
  if (0 < param_3) {
    bVar17 = SBORROW4(param_2,2);
    iVar1 = param_2 + -2;
  }
  iVar7 = param_3;
  if (iVar1 < 0 == bVar17) {
    iVar10 = param_4 + param_2 * 8;
    iVar12 = param_4 + param_2 * 0x10;
    iVar2 = param_3 * param_2;
    iVar1 = param_2 * 4;
    iVar13 = param_4 + iVar1;
    fVar21 = param_1 * 0.95105654;
    fVar19 = param_1 * 0.58778524;
    iVar14 = param_5 + iVar2 * 8;
    iVar15 = param_5 + iVar2 * 0x10;
    iVar9 = param_5 + iVar2 * 4;
    iVar7 = param_4 + param_2 * 0xc;
    iVar4 = param_5 + iVar2 * 0xc;
    iVar2 = param_2 * 0x14;
    iVar8 = 0;
    do {
      iVar16 = 0;
      iVar3 = 0;
      do {
        iVar16 = iVar16 + 2;
        fVar26 = *(float *)(iVar12 + iVar3);
        fVar29 = ((float *)(iVar12 + iVar3))[1];
        fVar22 = *(float *)(iVar10 + iVar3);
        fVar23 = ((float *)(iVar10 + iVar3))[1];
        fVar18 = *(float *)(iVar7 + iVar3);
        fVar24 = *(float *)(iVar13 + iVar3);
        fVar28 = fVar22 + fVar18;
        fVar20 = ((float *)(iVar7 + iVar3))[1];
        fVar30 = fVar24 + fVar26;
        fVar25 = ((float *)(iVar13 + iVar3))[1];
        fVar31 = fVar23 + fVar20;
        pfVar5 = (float *)(param_4 + iVar3);
        fVar32 = fVar25 + fVar29;
        fVar22 = fVar22 - fVar18;
        fVar24 = fVar24 - fVar26;
        fVar23 = fVar23 - fVar20;
        fVar25 = fVar25 - fVar29;
        fVar26 = fVar19 * fVar22 + fVar21 * fVar24;
        fVar18 = fVar22 * -fVar21 + fVar19 * fVar24;
        *(float *)(param_5 + iVar3) = *pfVar5 + fVar30 + fVar28;
        fVar29 = fVar19 * fVar23 + fVar21 * fVar25;
        fVar20 = fVar23 * -fVar21 + fVar19 * fVar25;
        ((float *)(param_5 + iVar3))[1] = fVar32 + fVar31 + pfVar5[1];
        pfVar6 = (float *)(param_6 + 4 + iVar3);
        pfVar11 = (float *)(param_7 + 4 + iVar3);
        fVar27 = fVar28 * -0.809017 + fVar30 * 0.309017 + *pfVar5;
        fVar23 = fVar28 * 0.309017 + fVar30 * -0.809017 + *pfVar5;
        fVar33 = pfVar6[-1];
        fVar24 = fVar31 * -0.809017 + fVar32 * 0.309017 + pfVar5[1];
        fVar22 = fVar31 * 0.309017 + fVar32 * -0.809017 + pfVar5[1];
        fVar25 = *pfVar11 * param_1;
        fVar30 = pfVar11[-1];
        fVar28 = *pfVar6 * param_1;
        pfVar5 = (float *)(param_8 + 4 + iVar3);
        fVar34 = fVar29 + fVar27;
        pfVar6 = (float *)(param_9 + 4 + iVar3);
        fVar27 = fVar27 - fVar29;
        fVar29 = pfVar5[-1];
        fVar38 = fVar26 + fVar24;
        fVar32 = fVar18 + fVar22;
        fVar35 = pfVar6[-1];
        fVar31 = *pfVar6 * param_1;
        fVar36 = *pfVar5 * param_1;
        fVar37 = fVar23 - fVar20;
        fVar20 = fVar20 + fVar23;
        fVar24 = fVar24 - fVar26;
        fVar22 = fVar22 - fVar18;
        ((float *)(iVar9 + iVar3))[1] = fVar27 * fVar28 + fVar33 * fVar38;
        *(float *)(iVar9 + iVar3) = fVar27 * fVar33 - fVar38 * fVar28;
        ((float *)(iVar14 + iVar3))[1] = fVar37 * fVar25 + fVar32 * fVar30;
        *(float *)(iVar14 + iVar3) = fVar37 * fVar30 - fVar32 * fVar25;
        *(float *)(iVar4 + iVar3) = fVar20 * fVar29 - fVar22 * fVar36;
        ((float *)(iVar4 + iVar3))[1] = fVar20 * fVar36 + fVar22 * fVar29;
        pfVar5 = (float *)(iVar15 + iVar3);
        iVar3 = iVar3 + 8;
        *pfVar5 = fVar34 * fVar35 - fVar24 * fVar31;
        pfVar5[1] = fVar34 * fVar31 + fVar24 * fVar35;
      } while (iVar16 < param_2 + -1);
      param_4 = param_4 + iVar2;
      iVar7 = iVar7 + iVar2;
      param_5 = param_5 + iVar1;
      iVar9 = iVar9 + iVar1;
      iVar14 = iVar14 + iVar1;
      iVar4 = iVar4 + iVar1;
      iVar15 = iVar15 + iVar1;
      iVar8 = iVar8 + 1;
      iVar10 = iVar10 + iVar2;
      iVar12 = iVar12 + iVar2;
      iVar13 = iVar13 + iVar2;
    } while (iVar8 != param_3);
  }
  return iVar7;
}


// =========================================================================
// Function: FUN_71b1614c
// Entry: 0x71b1614c | Size: 796 bytes
// =========================================================================

void FUN_71b1614c(float param_1,int param_2,int param_3,float *param_4,float *param_5,int param_6,
                 int param_7,int param_8)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  bool bVar12;
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
  
  param_3 = param_3 * param_2;
  if (param_2 == 2) {
    if (0 < param_3) {
      iVar5 = 0;
      do {
        pfVar4 = param_4 + 2;
        pfVar3 = param_4 + 6;
        iVar5 = iVar5 + 2;
        pfVar6 = param_4 + 3;
        pfVar8 = param_4 + 7;
        fVar17 = *pfVar4 + *pfVar3;
        fVar16 = *pfVar8 + *pfVar6;
        pfVar9 = param_4 + 1;
        pfVar10 = param_4 + 5;
        fVar24 = *param_4 + param_4[4];
        fVar14 = *param_4 - param_4[4];
        param_4 = param_4 + 8;
        fVar13 = *pfVar9 + *pfVar10;
        fVar15 = *pfVar9 - *pfVar10;
        fVar22 = (*pfVar4 - *pfVar3) * param_1;
        fVar19 = (*pfVar8 - *pfVar6) * param_1;
        *param_5 = fVar24 + fVar17;
        param_5[1] = fVar13 + fVar16;
        param_5[param_3 + 1] = fVar15 + fVar22;
        (param_5 + param_3 + 1)[-1] = fVar14 + fVar19;
        pfVar4 = (float *)((int)param_5 + (param_3 * 8 | 4U));
        pfVar4[-1] = fVar24 - fVar17;
        *pfVar4 = fVar13 - fVar16;
        pfVar4 = param_5 + param_3 * 3 + 1;
        param_5 = param_5 + 2;
        pfVar4[-1] = fVar14 - fVar19;
        *pfVar4 = fVar15 - fVar22;
      } while (iVar5 < param_3);
    }
  }
  else {
    bVar12 = SBORROW4(param_3,1);
    iVar5 = param_3 + -1;
    if (0 < param_3) {
      bVar12 = SBORROW4(param_2,2);
      iVar5 = param_2 + -2;
    }
    if (iVar5 < 0 == bVar12) {
      pfVar4 = param_5 + param_3 * 2;
      pfVar9 = param_5 + param_3;
      pfVar6 = param_4 + param_2 * 3;
      pfVar3 = param_5 + param_3 * 3;
      pfVar10 = param_4 + param_2 + 1;
      pfVar8 = param_4 + param_2 * 2 + 1;
      iVar5 = 0;
      do {
        iVar11 = 0;
        iVar7 = 0;
        do {
          iVar7 = iVar7 + 2;
          fVar21 = *(float *)((int)pfVar6 + iVar11);
          fVar14 = ((float *)((int)pfVar8 + iVar11))[-1];
          fVar19 = *(float *)((int)pfVar8 + iVar11);
          fVar23 = ((float *)((int)pfVar6 + iVar11))[1];
          fVar24 = ((float *)((int)pfVar10 + iVar11))[-1];
          fVar20 = *(float *)((int)pfVar10 + iVar11);
          fVar18 = fVar24 + fVar21;
          fVar17 = fVar23 + fVar20;
          fVar16 = *(float *)((int)param_4 + iVar11);
          fVar13 = ((float *)((int)param_4 + iVar11))[1];
          pfVar1 = (float *)(param_6 + 4 + iVar11);
          fVar15 = fVar16 + fVar14;
          fVar22 = fVar13 + fVar19;
          fVar16 = fVar16 - fVar14;
          fVar14 = (fVar23 - fVar20) * param_1;
          fVar13 = fVar13 - fVar19;
          fVar24 = (fVar24 - fVar21) * param_1;
          fVar19 = fVar22 - fVar17;
          fVar21 = fVar16 + fVar14;
          fVar16 = fVar16 - fVar14;
          fVar14 = fVar13 + fVar24;
          fVar13 = fVar13 - fVar24;
          *(float *)((int)param_5 + iVar11) = fVar15 + fVar18;
          ((float *)((int)param_5 + iVar11))[1] = fVar22 + fVar17;
          fVar17 = pfVar1[-1];
          pfVar2 = (float *)(param_7 + 4 + iVar11);
          fVar24 = *pfVar1 * param_1;
          fVar20 = *pfVar2 * param_1;
          fVar22 = pfVar2[-1];
          fVar15 = fVar15 - fVar18;
          *(float *)((int)pfVar9 + iVar11) = fVar21 * fVar17 - fVar14 * fVar24;
          ((float *)((int)pfVar9 + iVar11))[1] = fVar21 * fVar24 + fVar14 * fVar17;
          pfVar1 = (float *)(param_8 + 4 + iVar11);
          fVar17 = pfVar1[-1];
          fVar14 = *pfVar1 * param_1;
          ((float *)((int)pfVar4 + iVar11))[1] = fVar15 * fVar20 + fVar19 * fVar22;
          *(float *)((int)pfVar4 + iVar11) = fVar15 * fVar22 - fVar19 * fVar20;
          pfVar1 = (float *)((int)pfVar3 + iVar11);
          iVar11 = iVar11 + 8;
          *pfVar1 = fVar16 * fVar17 - fVar13 * fVar14;
          pfVar1[1] = fVar16 * fVar14 + fVar13 * fVar17;
        } while (iVar7 < param_2 + -1);
        pfVar9 = pfVar9 + param_2;
        pfVar10 = pfVar10 + param_2 * 4;
        pfVar6 = pfVar6 + param_2 * 4;
        param_5 = param_5 + param_2;
        pfVar4 = pfVar4 + param_2;
        pfVar3 = pfVar3 + param_2;
        param_4 = param_4 + param_2 * 4;
        pfVar8 = pfVar8 + param_2 * 4;
        iVar5 = iVar5 + param_2;
      } while (iVar5 < param_3);
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71b16468
// Entry: 0x71b16468 | Size: 388 bytes
// =========================================================================

void FUN_71b16468(float param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  param_3 = param_3 * param_2;
  if (param_2 < 3) {
    if (0 < param_3) {
      pfVar2 = (float *)(param_5 + 4);
      pfVar1 = (float *)(param_4 + 4);
      iVar4 = 0;
      do {
        pfVar8 = pfVar1 + param_2;
        pfVar3 = pfVar2 + param_3;
        iVar4 = iVar4 + param_2;
        pfVar2[-1] = pfVar1[-1] + pfVar8[-1];
        pfVar3[-1] = pfVar1[-1] - pfVar8[-1];
        *pfVar2 = *pfVar1 + *pfVar8;
        pfVar2 = pfVar2 + param_2;
        fVar10 = *pfVar1;
        pfVar1 = pfVar1 + param_2 * 2;
        *pfVar3 = fVar10 - *pfVar8;
      } while (iVar4 < param_3);
    }
  }
  else if (0 < param_3) {
    iVar9 = param_5 + param_3 * 4;
    iVar4 = param_4 + param_2 * 4 + 4;
    iVar7 = 0;
    do {
      iVar6 = 0;
      iVar5 = 0;
      do {
        pfVar8 = (float *)(param_4 + iVar6);
        pfVar2 = (float *)(iVar4 + iVar6);
        pfVar1 = (float *)(param_6 + 4 + iVar6);
        iVar5 = iVar5 + 2;
        fVar11 = *pfVar2;
        fVar10 = *pfVar8 - pfVar2[-1];
        fVar13 = pfVar8[1];
        fVar12 = *pfVar1 * param_1;
        fVar14 = pfVar1[-1];
        *(float *)(param_5 + iVar6) = *pfVar8 + pfVar2[-1];
        ((float *)(param_5 + iVar6))[1] = pfVar8[1] + *pfVar2;
        pfVar1 = (float *)(iVar9 + iVar6);
        iVar6 = iVar6 + 8;
        pfVar1[1] = fVar10 * fVar12 + (fVar13 - fVar11) * fVar14;
        *pfVar1 = fVar10 * fVar14 - (fVar13 - fVar11) * fVar12;
      } while (iVar5 < param_2 + -1);
      iVar7 = iVar7 + param_2;
      param_5 = param_5 + param_2 * 4;
      iVar9 = iVar9 + param_2 * 4;
      param_4 = param_4 + param_2 * 8;
      iVar4 = iVar4 + param_2 * 8;
    } while (iVar7 < param_3);
  }
  return;
}


// =========================================================================
// Function: FUN_71b165ec
// Entry: 0x71b165ec | Size: 476 bytes
// =========================================================================

void FUN_71b165ec(float param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int iStack_28;
  
  param_3 = param_3 * param_2;
  bVar13 = SBORROW4(param_3,1);
  iVar2 = param_3 + -1;
  if (0 < param_3) {
    bVar13 = SBORROW4(param_2,2);
    iVar2 = param_2 + -2;
  }
  if (iVar2 < 0 == bVar13) {
    iVar4 = param_5 + param_3 * 4;
    iVar5 = param_5 + param_3 * 8;
    iVar12 = param_4 + param_2 * 8 + 4;
    iVar8 = param_4 + param_2 * 4 + 4;
    iVar2 = param_2 * 4;
    iVar6 = 0;
    iVar1 = param_2 * 0xc;
    iStack_28 = param_4;
    do {
      iVar9 = 0;
      iVar3 = 0;
      do {
        pfVar10 = (float *)(iVar12 + iVar9);
        pfVar11 = (float *)(iVar8 + iVar9);
        iVar3 = iVar3 + 2;
        fVar17 = *(float *)(iStack_28 + iVar9);
        fVar18 = fVar17 + (pfVar11[-1] + pfVar10[-1]) * -0.5;
        *(float *)(param_5 + iVar9) = fVar17 + pfVar11[-1] + pfVar10[-1];
        fVar17 = ((float *)(iStack_28 + iVar9))[1];
        pfVar7 = (float *)(param_6 + 4 + iVar9);
        fVar21 = fVar17 + (*pfVar11 + *pfVar10) * -0.5;
        ((float *)(param_5 + iVar9))[1] = fVar17 + *pfVar11 + *pfVar10;
        fVar20 = *pfVar7 * param_1;
        fVar16 = param_1 * 0.8660254 * (*pfVar11 - *pfVar10);
        fVar17 = pfVar7[-1];
        pfVar7 = (float *)(param_7 + 4 + iVar9);
        fVar22 = param_1 * 0.8660254 * (pfVar11[-1] - pfVar10[-1]);
        fVar15 = pfVar7[-1];
        fVar14 = fVar18 - fVar16;
        fVar18 = fVar18 + fVar16;
        fVar16 = *pfVar7 * param_1;
        fVar19 = fVar21 + fVar22;
        fVar21 = fVar21 - fVar22;
        ((float *)(iVar4 + iVar9))[1] = fVar14 * fVar20 + fVar19 * fVar17;
        *(float *)(iVar4 + iVar9) = fVar17 * fVar14 - fVar19 * fVar20;
        pfVar7 = (float *)(iVar5 + iVar9);
        iVar9 = iVar9 + 8;
        *pfVar7 = fVar18 * fVar15 - fVar21 * fVar16;
        pfVar7[1] = fVar18 * fVar16 + fVar21 * fVar15;
      } while (iVar3 < param_2 + -1);
      iVar12 = iVar12 + iVar1;
      iVar8 = iVar8 + iVar1;
      iStack_28 = iStack_28 + iVar1;
      iVar6 = iVar6 + param_2;
      param_5 = param_5 + iVar2;
      iVar4 = iVar4 + iVar2;
      iVar5 = iVar5 + iVar2;
    } while (iVar6 < param_3);
  }
  return;
}


// =========================================================================
// Function: RwHYDtDaQMfqxLi
// Entry: 0x71b167d0 | Size: 1060 bytes
// =========================================================================

undefined1 (*) [16] RwHYDtDaQMfqxLi(uint param_1,int param_2)

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
// Function: zifwUOgVXcSpuVPKRzB
// Entry: 0x71b16c00 | Size: 48 bytes
// =========================================================================

void zifwUOgVXcSpuVPKRzB(int param_1)

{
  if (*(int *)(param_1 + 0x48) != 0) {
    imp_free(*(undefined4 *)(*(int *)(param_1 + 0x48) + -4));
  }
  imp_free(param_1);
  return;
}


// =========================================================================
// Function: MEJjBFDDuzkdap
// Entry: 0x71b16c30 | Size: 452 bytes
// =========================================================================

void MEJjBFDDuzkdap(int *param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  iVar11 = *param_1;
  if (param_1[0x11] == 1) {
    if (0 < iVar11) {
      uVar1 = 1;
      uVar9 = 0;
      if (1 < iVar11 * 2) {
        uVar1 = iVar11 << 1;
      }
      if ((3 < iVar11 * 2) && (0xf < (uint)((int)param_3 - (int)param_2))) {
        uVar9 = uVar1 & 0x7ffffffc;
        uVar4 = uVar9;
        puVar6 = param_2;
        puVar7 = param_3;
        do {
          uVar13 = *puVar6;
          uVar14 = puVar6[1];
          puVar6 = puVar6 + 2;
          uVar4 = uVar4 - 4;
          *puVar7 = uVar13;
          puVar7[1] = uVar14;
          puVar7 = puVar7 + 2;
        } while (uVar4 != 0);
        if (uVar1 == uVar9) {
          return;
        }
      }
      iVar11 = uVar1 - uVar9;
      puVar10 = (undefined4 *)((int)param_2 + uVar9 * 4);
      puVar5 = (undefined4 *)((int)param_3 + uVar9 * 4);
      do {
        iVar11 = iVar11 + -1;
        *puVar5 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar5 = puVar5 + 1;
      } while (iVar11 != 0);
    }
    return;
  }
  if (param_4 == 0) {
    iVar2 = iVar11 + -1;
    uVar12 = *(undefined4 *)((int)param_2 + iVar2 * 4);
    if (2 < iVar11) {
      uVar1 = iVar11 - 2;
      if ((7 < uVar1) && (0xf < (uint)((int)param_2 + (-4 - (int)param_3)))) {
        uVar4 = uVar1 & 0xfffffffc;
        iVar2 = iVar2 - uVar4;
        puVar7 = (undefined8 *)((int)param_2 + iVar11 * 4 + -0x14);
        uVar9 = uVar4;
        puVar6 = (undefined8 *)((int)param_3 + iVar11 * 4);
        do {
          uVar13 = *puVar7;
          uVar14 = puVar7[1];
          puVar7 = puVar7 + -2;
          uVar9 = uVar9 - 4;
          puVar6[-2] = uVar13;
          puVar6[-1] = uVar14;
          puVar6 = puVar6 + -2;
        } while (uVar9 != 0);
        if (uVar1 == uVar4) goto LAB_71b16de4;
      }
      puVar10 = (undefined4 *)((int)param_2 + iVar2 * 4);
      uVar1 = iVar2 + 1;
      puVar5 = (undefined4 *)((int)param_3 + iVar2 * 4);
      do {
        puVar10 = puVar10 + -1;
        uVar1 = uVar1 - 1;
        *puVar5 = *puVar10;
        puVar5 = puVar5 + -1;
      } while (2 < uVar1);
    }
LAB_71b16de4:
    uVar3 = *(undefined4 *)param_2;
    *(undefined4 *)((int)param_3 + 4) = uVar12;
    *(undefined4 *)param_3 = uVar3;
    return;
  }
  uVar12 = *(undefined4 *)((int)param_2 + 4);
  if (2 < iVar11) {
    uVar1 = iVar11 - 2;
    uVar9 = 1;
    if ((7 < uVar1) && (0xf < (uint)((int)param_3 + (-4 - (int)param_2)))) {
      uVar8 = uVar1 & 0xfffffffc;
      puVar6 = (undefined8 *)((int)param_3 + 4);
      puVar7 = param_2 + 1;
      uVar9 = uVar8 | 1;
      uVar4 = uVar8;
      do {
        uVar13 = *puVar7;
        uVar14 = puVar7[1];
        puVar7 = puVar7 + 2;
        uVar4 = uVar4 - 4;
        *puVar6 = uVar13;
        puVar6[1] = uVar14;
        puVar6 = puVar6 + 2;
      } while (uVar4 != 0);
      if (uVar1 == uVar8) goto LAB_71b16d48;
    }
    puVar5 = (undefined4 *)((int)param_2 + uVar9 * 4);
    iVar2 = ~uVar9 + iVar11;
    puVar10 = (undefined4 *)((int)param_3 + uVar9 * 4);
    do {
      puVar5 = puVar5 + 1;
      iVar2 = iVar2 + -1;
      *puVar10 = *puVar5;
      puVar10 = puVar10 + 1;
    } while (iVar2 != 0);
  }
LAB_71b16d48:
  *(undefined4 *)param_3 = *(undefined4 *)param_2;
  *(undefined4 *)((int)param_3 + (iVar11 + -1) * 4) = uVar12;
  return;
}


// =========================================================================
// Function: MkmZKipKdNrbuPzcdPwtjzgA
// Entry: 0x71b16df4 | Size: 1240 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x71b16f38) */

void MkmZKipKdNrbuPzcdPwtjzgA
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
// Function: FUN_71b172cc
// Entry: 0x71b172cc | Size: 1864 bytes
// =========================================================================

float * FUN_71b172cc(int param_1,float *param_2,float *param_3,float *param_4,int param_5,
                    int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  int iVar14;
  float *pfVar15;
  int iVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  float *pfVar23;
  float *pfVar24;
  int iVar25;
  bool bVar26;
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
  int iStack_98;
  
  iVar16 = *(int *)(param_6 + 4);
  if (0 < iVar16) {
    iStack_98 = param_1 + -1;
    pfVar17 = param_4;
    if (param_2 == param_4) {
      pfVar17 = param_3;
    }
    iVar7 = 1;
    iVar2 = param_1;
    do {
      iVar1 = FUN_71ba0440(param_1,iVar2);
      iVar20 = *(int *)(param_6 + 8 + (iVar16 - iVar7) * 4);
      iStack_98 = iStack_98 - iVar1 * (iVar20 + -1);
      iVar2 = FUN_71ba0440(iVar2,iVar20);
      switch(iVar20) {
      case 2:
        FUN_71b18654(iVar1,iVar2,param_2,pfVar17,param_5 + iStack_98 * 4);
        break;
      case 3:
        if (0 < iVar2) {
          iVar21 = param_5 + iStack_98 * 4;
          iVar3 = iVar21 + iVar1 * 4;
          iVar20 = iVar2;
          pfVar4 = pfVar17;
          pfVar10 = param_2;
          do {
            iVar20 = iVar20 + -1;
            fVar27 = pfVar10[iVar2 * iVar1 * 2];
            fVar28 = pfVar10[iVar2 * iVar1];
            pfVar12 = pfVar4 + iVar1 * 2;
            fVar30 = fVar28 + fVar27;
            fVar29 = *pfVar10;
            pfVar10 = pfVar10 + iVar1;
            *pfVar4 = fVar29 + fVar30;
            pfVar4 = pfVar4 + iVar1 * 3;
            pfVar12[-1] = fVar29 + fVar30 * -0.5;
            *pfVar12 = (fVar27 - fVar28) * 0.8660254;
          } while (iVar20 != 0);
          if (2 < iVar1) {
            iVar20 = 0;
            do {
              iVar25 = iVar20 * 3;
              iVar14 = 2;
              iVar8 = (iVar20 + iVar2 * 2) * iVar1;
              iVar9 = (iVar20 + iVar2) * iVar1;
              iVar5 = (iVar25 + 2) * iVar1;
              do {
                iVar6 = iVar14 * 4 + -4;
                iVar22 = iVar14 * 4 + -8;
                fVar28 = *(float *)(iVar21 + iVar22);
                fVar30 = *(float *)(iVar3 + iVar22);
                fVar27 = *(float *)(iVar3 + iVar6);
                fVar29 = *(float *)(iVar21 + iVar6);
                fVar36 = fVar28 * param_2[iVar14 + iVar9] - fVar29 * param_2[iVar14 + iVar9 + -1];
                fVar32 = fVar30 * param_2[iVar14 + iVar8] - fVar27 * param_2[iVar14 + iVar8 + -1];
                fVar30 = fVar30 * param_2[iVar14 + iVar8 + -1] + param_2[iVar14 + iVar8] * fVar27;
                fVar27 = fVar28 * param_2[iVar14 + iVar9 + -1] + param_2[iVar14 + iVar9] * fVar29;
                fVar29 = fVar27 + fVar30;
                fVar35 = param_2[iVar14 + iVar20 * iVar1 + -1];
                fVar31 = fVar36 + fVar32;
                iVar6 = iVar14 + iVar5;
                fVar28 = (fVar30 - fVar27) * 0.8660254;
                fVar34 = fVar35 + fVar29 * -0.5;
                fVar27 = (fVar36 - fVar32) * 0.8660254;
                fVar30 = param_2[iVar14 + iVar20 * iVar1] + fVar31 * -0.5;
                pfVar17[iVar14 + iVar25 * iVar1] = param_2[iVar14 + iVar20 * iVar1] + fVar31;
                pfVar17[iVar14 + iVar25 * iVar1 + -1] = fVar35 + fVar29;
                pfVar17[iVar14 + iVar5 + -1] = fVar34 + fVar27;
                iVar22 = iVar1 - iVar14;
                iVar14 = iVar14 + 2;
                (pfVar17 + iVar22 + (iVar25 + 1) * iVar1)[-1] = fVar34 - fVar27;
                pfVar17[iVar6] = fVar28 + fVar30;
                pfVar17[iVar22 + (iVar25 + 1) * iVar1] = fVar28 - fVar30;
              } while (iVar14 < iVar1);
              iVar20 = iVar20 + 1;
            } while (iVar20 != iVar2);
          }
        }
        break;
      case 4:
        iVar3 = param_5 + iStack_98 * 4;
        iVar20 = iVar3 + iVar1 * 4;
        FUN_71b18288(iVar1,iVar2,param_2,pfVar17,iVar3,iVar20,iVar20 + iVar1 * 4);
        break;
      case 5:
        if (0 < iVar2) {
          iVar3 = iVar2 * iVar1;
          pfVar4 = pfVar17;
          pfVar10 = param_2;
          iVar20 = iVar2;
          do {
            fVar35 = *pfVar10;
            iVar20 = iVar20 + -1;
            pfVar15 = pfVar10 + iVar3;
            fVar29 = pfVar10[iVar3 * 3] + pfVar10[iVar3 * 2];
            pfVar12 = pfVar10 + iVar3 * 4;
            fVar28 = pfVar10[iVar3 * 3] - pfVar10[iVar3 * 2];
            pfVar10 = pfVar10 + iVar1;
            fVar30 = *pfVar12 + *pfVar15;
            fVar27 = *pfVar12 - *pfVar15;
            *pfVar4 = fVar35 + fVar30 + fVar29;
            (pfVar4 + iVar1 * 2)[-1] = fVar35 + fVar29 * -0.809017 + fVar30 * 0.309017;
            pfVar4[iVar1 * 2] = fVar28 * 0.58778524 + fVar27 * 0.95105654;
            pfVar12 = pfVar4 + iVar1 * 4;
            pfVar4 = pfVar4 + iVar1 * 5;
            pfVar12[-1] = fVar35 + fVar29 * 0.309017 + fVar30 * -0.809017;
            *pfVar12 = fVar28 * -0.95105654 + fVar27 * 0.58778524;
          } while (iVar20 != 0);
          if ((iVar1 != 1) && (2 < iVar1)) {
            pfVar12 = pfVar17 + iVar1 * 2;
            pfVar15 = pfVar17 + iVar1 * 4;
            pfVar23 = param_2 + iVar3;
            pfVar24 = param_2 + iVar3 * 2;
            pfVar10 = param_2 + iVar3 * 4;
            pfVar18 = param_2 + iVar3 * 3;
            iVar20 = 1;
            pfVar4 = pfVar17;
            do {
              iVar21 = 3;
              iVar25 = -0xc;
              iVar3 = 0;
              do {
                iVar21 = iVar21 + 2;
                pfVar13 = (float *)(param_5 + iStack_98 * 4 + iVar3);
                pfVar19 = pfVar13 + iVar1;
                fVar35 = *(float *)((int)pfVar18 + iVar3 + 4);
                fVar31 = *(float *)((int)pfVar18 + iVar3 + 8);
                fVar32 = *(float *)((int)pfVar24 + iVar3 + 4);
                fVar36 = *(float *)((int)pfVar24 + iVar3 + 8);
                pfVar11 = pfVar19 + iVar1;
                fVar27 = *(float *)((int)pfVar10 + iVar3 + 4);
                fVar29 = *(float *)((int)pfVar10 + iVar3 + 8);
                fVar41 = pfVar11[iVar1];
                fVar28 = *(float *)((int)pfVar23 + iVar3 + 4);
                fVar34 = *pfVar19 * fVar32 + pfVar19[1] * fVar36;
                fVar38 = (pfVar11 + iVar1)[1];
                fVar30 = *(float *)((int)pfVar23 + iVar3 + 8);
                fVar37 = *pfVar11 * fVar35 + pfVar11[1] * fVar31;
                fVar32 = pfVar19[1] * fVar32 - *pfVar19 * fVar36;
                fVar31 = pfVar11[1] * fVar35 - *pfVar11 * fVar31;
                fVar39 = *pfVar13 * fVar28 + pfVar13[1] * fVar30;
                fVar40 = fVar41 * fVar27 + fVar38 * fVar29;
                fVar28 = pfVar13[1] * fVar28 - *pfVar13 * fVar30;
                fVar27 = fVar38 * fVar27 - fVar41 * fVar29;
                fVar35 = fVar32 + fVar31;
                fVar41 = fVar34 + fVar37;
                fVar32 = fVar32 - fVar31;
                fVar29 = fVar28 + fVar27;
                fVar36 = fVar39 + fVar40;
                fVar37 = fVar37 - fVar34;
                fVar31 = *(float *)((int)param_2 + iVar3 + 8);
                fVar28 = fVar28 - fVar27;
                fVar40 = fVar40 - fVar39;
                fVar30 = *(float *)((int)param_2 + iVar3 + 4);
                fVar34 = fVar32 * 0.58778524 + fVar28 * 0.95105654;
                fVar39 = fVar37 * 0.58778524 + fVar40 * 0.95105654;
                fVar38 = fVar30 + fVar41 * -0.809017 + fVar36 * 0.309017;
                fVar33 = fVar31 - (fVar35 * -0.809017 + fVar29 * 0.309017);
                fVar40 = fVar37 * -0.95105654 + fVar40 * 0.58778524;
                fVar28 = fVar32 * -0.95105654 + fVar28 * 0.58778524;
                *(float *)((int)pfVar4 + iVar3 + 8) = fVar31 - (fVar35 + fVar29);
                fVar27 = fVar30 + fVar41 * 0.309017 + fVar36 * -0.809017;
                fVar31 = fVar31 - (fVar35 * 0.309017 + fVar29 * -0.809017);
                *(float *)((int)pfVar4 + iVar3 + 4) = fVar30 + fVar41 + fVar36;
                *(float *)((int)pfVar12 + iVar3 + 4) = fVar38 - fVar34;
                *(float *)((int)pfVar12 + iVar25) = fVar34 + fVar38;
                *(float *)((int)pfVar12 + iVar3 + 8) = fVar39 + fVar33;
                ((float *)((int)pfVar12 + iVar25))[1] = fVar39 - fVar33;
                pfVar11 = (float *)((int)pfVar15 + iVar25);
                iVar25 = iVar25 + -8;
                *(float *)((int)pfVar15 + iVar3 + 4) = fVar27 - fVar28;
                *pfVar11 = fVar28 + fVar27;
                *(float *)((int)pfVar15 + iVar3 + 8) = fVar40 + fVar31;
                pfVar11[1] = fVar40 - fVar31;
                iVar3 = iVar3 + 8;
              } while (iVar21 <= iVar1);
              pfVar23 = pfVar23 + iVar1;
              pfVar24 = pfVar24 + iVar1;
              pfVar18 = pfVar18 + iVar1;
              pfVar10 = pfVar10 + iVar1;
              param_2 = param_2 + iVar1;
              pfVar4 = pfVar4 + iVar1 * 5;
              pfVar12 = pfVar12 + iVar1 * 5;
              pfVar15 = pfVar15 + iVar1 * 5;
              bVar26 = iVar20 != iVar2;
              iVar20 = iVar20 + 1;
            } while (bVar26);
          }
        }
      }
      pfVar4 = param_4;
      param_2 = param_3;
      if (pfVar17 == param_4) {
        pfVar4 = param_3;
        param_2 = pfVar17;
      }
      bVar26 = iVar16 != iVar7;
      iVar7 = iVar7 + 1;
      pfVar17 = pfVar4;
    } while (bVar26);
  }
  return param_2;
}


// =========================================================================
// Function: FUN_71b17a3c
// Entry: 0x71b17a3c | Size: 1796 bytes
// =========================================================================

float * FUN_71b17a3c(undefined4 param_1,float *param_2,float *param_3,float *param_4,int param_5,
                    int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  float *pfVar13;
  int iVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  bool bVar21;
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
  int iStack_8c;
  
  iVar1 = *(int *)(param_6 + 4);
  if (0 < iVar1) {
    iVar5 = param_5 + 4;
    pfVar15 = param_4;
    if (param_2 == param_4) {
      pfVar15 = param_3;
    }
    iStack_8c = 0;
    iVar6 = 1;
    iVar14 = 1;
    do {
      iVar12 = *(int *)(param_6 + (iVar6 + 1) * 4);
      iVar2 = FUN_71ba0440(param_1);
      switch(iVar12) {
      case 2:
        FUN_71b18be0(iVar2,iVar14,param_2,pfVar15,param_5 + iStack_8c * 4);
        break;
      case 3:
        if (0 < iVar14) {
          iVar3 = iVar14 * iVar2;
          iVar19 = iVar14;
          pfVar8 = pfVar15;
          pfVar4 = param_2;
          do {
            pfVar9 = pfVar4 + iVar2 * 2;
            fVar24 = *pfVar4;
            pfVar4 = pfVar4 + iVar2 * 3;
            iVar19 = iVar19 + -1;
            fVar22 = pfVar9[-1];
            fVar22 = fVar22 + fVar22;
            fVar23 = *pfVar9 * 1.7320508;
            fVar25 = fVar24 + fVar22 * -0.5;
            *pfVar8 = fVar24 + fVar22;
            pfVar8[iVar3] = fVar25 - fVar23;
            pfVar9 = pfVar8 + iVar3 * 2;
            pfVar8 = pfVar8 + iVar2;
            *pfVar9 = fVar25 + fVar23;
          } while (iVar19 != 0);
          if (2 < iVar2) {
            iVar19 = 0;
            pfVar11 = pfVar15 + iVar3;
            pfVar9 = pfVar15 + iVar3 * 2;
            pfVar4 = param_2 + iVar2 * 2;
            pfVar13 = pfVar4 + -3;
            pfVar8 = pfVar15;
            do {
              iVar18 = 2;
              pfVar16 = pfVar13;
              iVar3 = 0;
              do {
                fVar22 = *pfVar16;
                pfVar17 = pfVar16 + 1;
                iVar18 = iVar18 + 2;
                fVar23 = *(float *)((int)pfVar4 + iVar3 + 4);
                pfVar16 = pfVar16 + -2;
                fVar24 = *(float *)((int)pfVar4 + iVar3 + 8);
                fVar32 = fVar23 + fVar22;
                fVar30 = *(float *)((int)param_2 + iVar3 + 4);
                fVar25 = fVar24 - *pfVar17;
                fVar26 = *(float *)((int)param_2 + iVar3 + 8);
                pfVar7 = (float *)(iVar5 + iStack_8c * 4 + iVar3);
                fVar36 = *pfVar7;
                fVar28 = (fVar24 + *pfVar17) * 0.8660254;
                fVar22 = (fVar23 - fVar22) * 0.8660254;
                fVar29 = fVar30 + fVar32 * -0.5;
                fVar23 = fVar26 + fVar25 * -0.5;
                fVar24 = fVar29 - fVar28;
                fVar27 = fVar22 + fVar23;
                fVar29 = fVar29 + fVar28;
                fVar34 = pfVar7[-1];
                fVar23 = fVar23 - fVar22;
                pfVar17 = (float *)(iVar5 + iVar2 * 4 + iStack_8c * 4 + iVar3);
                fVar22 = pfVar17[-1];
                fVar28 = *pfVar17;
                *(float *)((int)pfVar8 + iVar3 + 4) = fVar30 + fVar32;
                *(float *)((int)pfVar8 + iVar3 + 8) = fVar26 + fVar25;
                *(float *)((int)pfVar11 + iVar3 + 4) = fVar24 * fVar34 - fVar27 * fVar36;
                *(float *)((int)pfVar11 + iVar3 + 8) = fVar27 * fVar34 + fVar24 * fVar36;
                *(float *)((int)pfVar9 + iVar3 + 4) = fVar29 * fVar22 - fVar23 * fVar28;
                *(float *)((int)pfVar9 + iVar3 + 8) = fVar23 * fVar22 + fVar29 * fVar28;
                iVar3 = iVar3 + 8;
              } while (iVar18 < iVar2);
              pfVar4 = pfVar4 + iVar2 * 3;
              param_2 = param_2 + iVar2 * 3;
              iVar19 = iVar19 + 1;
              pfVar8 = pfVar8 + iVar2;
              pfVar11 = pfVar11 + iVar2;
              pfVar9 = pfVar9 + iVar2;
              pfVar13 = pfVar13 + iVar2 * 3;
            } while (iVar19 != iVar14);
          }
        }
        break;
      case 4:
        iVar19 = param_5 + iStack_8c * 4;
        iVar3 = iVar19 + iVar2 * 4;
        FUN_71b18810(iVar2,iVar14,param_2,pfVar15,iVar19,iVar3,iVar3 + iVar2 * 4);
        break;
      case 5:
        if (0 < iVar14) {
          iVar3 = iVar14 * iVar2;
          pfVar8 = pfVar15;
          pfVar4 = param_2;
          iVar19 = iVar14;
          do {
            iVar19 = iVar19 + -1;
            fVar22 = (pfVar4 + iVar2 * 4)[-1];
            fVar24 = (pfVar4 + iVar2 * 2)[-1];
            fVar22 = fVar22 + fVar22;
            fVar23 = pfVar4[iVar2 * 4];
            fVar24 = fVar24 + fVar24;
            fVar27 = pfVar4[iVar2 * 2];
            fVar23 = fVar23 + fVar23;
            fVar27 = fVar27 + fVar27;
            fVar25 = *pfVar4;
            fVar36 = fVar23 * 0.58778524 + fVar27 * 0.95105654;
            pfVar4 = pfVar4 + iVar2 * 5;
            fVar23 = fVar23 * -0.95105654 + fVar27 * 0.58778524;
            fVar30 = fVar25 + fVar22 * -0.809017 + fVar24 * 0.309017;
            fVar27 = fVar25 + fVar22 * 0.309017 + fVar24 * -0.809017;
            *pfVar8 = fVar25 + fVar24 + fVar22;
            pfVar8[iVar3] = fVar30 - fVar36;
            pfVar8[iVar3 * 2] = fVar27 - fVar23;
            pfVar8[iVar3 * 3] = fVar23 + fVar27;
            pfVar9 = pfVar8 + iVar3 * 4;
            pfVar8 = pfVar8 + iVar2;
            *pfVar9 = fVar36 + fVar30;
          } while (iVar19 != 0);
          if ((iVar2 != 1) && (2 < iVar2)) {
            pfVar17 = param_2 + iVar2 * 2;
            pfVar4 = param_2 + iVar2 * 4;
            pfVar13 = pfVar15 + iVar3;
            pfVar16 = pfVar15 + iVar3 * 2;
            pfVar11 = pfVar15 + iVar3 * 4;
            pfVar9 = pfVar15 + iVar3 * 3;
            iVar19 = 1;
            pfVar8 = pfVar15;
            do {
              iVar20 = 3;
              iVar18 = -0xc;
              iVar3 = 0;
              do {
                fVar24 = ((float *)((int)pfVar4 + iVar18))[1];
                fVar27 = *(float *)((int)pfVar4 + iVar3 + 8);
                fVar23 = *(float *)((int)pfVar4 + iVar3 + 4);
                fVar37 = fVar27 - fVar24;
                fVar22 = *(float *)((int)pfVar4 + iVar18);
                fVar36 = ((float *)((int)pfVar17 + iVar18))[1];
                fVar27 = fVar27 + fVar24;
                fVar30 = fVar23 + fVar22;
                fVar24 = *(float *)((int)pfVar17 + iVar3 + 8);
                fVar25 = *(float *)((int)pfVar17 + iVar18);
                fVar23 = fVar23 - fVar22;
                fVar22 = *(float *)((int)pfVar17 + iVar3 + 4);
                fVar26 = fVar24 - fVar36;
                fVar24 = fVar24 + fVar36;
                fVar36 = fVar22 + fVar25;
                fVar41 = *(float *)((int)param_2 + iVar3 + 8);
                fVar38 = *(float *)((int)param_2 + iVar3 + 4);
                pfVar7 = (float *)(iVar5 + iStack_8c * 4 + iVar3);
                fVar22 = fVar22 - fVar25;
                iVar20 = iVar20 + 2;
                pfVar10 = pfVar7 + iVar2;
                iVar18 = iVar18 + -8;
                fVar32 = fVar23 * 0.58778524 + fVar22 * 0.95105654;
                fVar25 = fVar27 * -0.95105654 + fVar24 * 0.58778524;
                fVar24 = fVar27 * 0.58778524 + fVar24 * 0.95105654;
                fVar22 = fVar23 * -0.95105654 + fVar22 * 0.58778524;
                fVar28 = fVar37 * -0.809017 + fVar26 * 0.309017 + fVar41;
                fVar23 = fVar38 + fVar30 * -0.809017 + fVar36 * 0.309017;
                fVar27 = fVar37 * 0.309017 + fVar26 * -0.809017 + fVar41;
                fVar34 = fVar38 + fVar30 * 0.309017 + fVar36 * -0.809017;
                fVar40 = fVar32 + fVar28;
                fVar28 = fVar28 - fVar32;
                fVar33 = *pfVar10;
                fVar29 = fVar23 - fVar24;
                fVar32 = fVar27 - fVar22;
                fVar22 = fVar22 + fVar27;
                fVar31 = pfVar7[-1];
                fVar35 = fVar34 - fVar25;
                fVar25 = fVar25 + fVar34;
                fVar24 = fVar24 + fVar23;
                fVar27 = pfVar10[-1];
                fVar39 = *pfVar7;
                pfVar10 = pfVar10 + iVar2;
                fVar34 = pfVar10[-1];
                fVar23 = (pfVar10 + iVar2)[-1];
                fVar43 = *pfVar10;
                fVar42 = pfVar10[iVar2];
                *(float *)((int)pfVar8 + iVar3 + 4) = fVar38 + fVar36 + fVar30;
                *(float *)((int)pfVar8 + iVar3 + 8) = fVar26 + fVar37 + fVar41;
                *(float *)((int)pfVar13 + iVar3 + 4) = fVar29 * fVar31 - fVar40 * fVar39;
                *(float *)((int)pfVar13 + iVar3 + 8) = fVar40 * fVar31 + fVar29 * fVar39;
                *(float *)((int)pfVar16 + iVar3 + 4) = fVar35 * fVar27 - fVar22 * fVar33;
                *(float *)((int)pfVar16 + iVar3 + 8) = fVar22 * fVar27 + fVar35 * fVar33;
                *(float *)((int)pfVar9 + iVar3 + 4) = fVar25 * fVar34 - fVar32 * fVar43;
                *(float *)((int)pfVar9 + iVar3 + 8) = fVar32 * fVar34 + fVar25 * fVar43;
                *(float *)((int)pfVar11 + iVar3 + 4) = fVar24 * fVar23 - fVar28 * fVar42;
                *(float *)((int)pfVar11 + iVar3 + 8) = fVar28 * fVar23 + fVar24 * fVar42;
                iVar3 = iVar3 + 8;
              } while (iVar20 <= iVar2);
              pfVar13 = pfVar13 + iVar2;
              pfVar8 = pfVar8 + iVar2;
              pfVar16 = pfVar16 + iVar2;
              pfVar9 = pfVar9 + iVar2;
              pfVar11 = pfVar11 + iVar2;
              pfVar4 = pfVar4 + iVar2 * 5;
              param_2 = param_2 + iVar2 * 5;
              pfVar17 = pfVar17 + iVar2 * 5;
              bVar21 = iVar19 != iVar14;
              iVar19 = iVar19 + 1;
            } while (bVar21);
          }
        }
      }
      iStack_8c = (iVar12 + -1) * iVar2 + iStack_8c;
      pfVar8 = param_4;
      param_2 = param_3;
      if (pfVar15 == param_4) {
        pfVar8 = param_3;
        param_2 = pfVar15;
      }
      bVar21 = iVar6 != iVar1;
      iVar6 = iVar6 + 1;
      iVar14 = iVar12 * iVar14;
      pfVar15 = pfVar8;
    } while (bVar21);
  }
  return param_2;
}


// =========================================================================
// Function: utN_uPAPkJQUV_VcLkBuLmSiEg
// Entry: 0x71b1816c | Size: 212 bytes
// =========================================================================

void utN_uPAPkJQUV_VcLkBuLmSiEg
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
// Function: BGNCk_MRcNNOSJm
// Entry: 0x71b18240 | Size: 36 bytes
// =========================================================================

void BGNCk_MRcNNOSJm(void)

{
  thunk_MkmZKipKdNrbuPzcdPwtjzgA();
  return;
}


// =========================================================================
// Function: xvDtmfMfgCHvpgwIzavVsBV
// Entry: 0x71b18264 | Size: 36 bytes
// =========================================================================

void xvDtmfMfgCHvpgwIzavVsBV(void)

{
  thunk_MkmZKipKdNrbuPzcdPwtjzgA();
  return;
}


// =========================================================================
// Function: FUN_71b18288
// Entry: 0x71b18288 | Size: 968 bytes
// =========================================================================

void FUN_71b18288(uint param_1,int param_2,float *param_3,float *param_4,int param_5,int param_6,
                 int param_7)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  iVar2 = param_2 * param_1;
  if (0 < iVar2) {
    pfVar3 = param_4;
    pfVar5 = param_3;
    do {
      pfVar6 = pfVar5 + iVar2 * 3;
      pfVar9 = pfVar5 + iVar2;
      fVar15 = *pfVar5;
      pfVar7 = pfVar5 + iVar2 * 2;
      pfVar5 = pfVar5 + param_1;
      fVar16 = *pfVar7;
      fVar17 = *pfVar9 + *pfVar6;
      fVar19 = fVar15 + fVar16;
      pfVar3[param_1 * 2] = *pfVar6 - *pfVar9;
      (pfVar3 + param_1 * 2)[-1] = fVar15 - fVar16;
      pfVar6 = pfVar3 + param_1 * 4 + -1;
      *pfVar3 = fVar19 + fVar17;
      pfVar3 = pfVar3 + param_1 * 4;
      *pfVar6 = fVar19 - fVar17;
    } while (pfVar5 < param_3 + iVar2);
  }
  if ((int)param_1 < 2) {
    return;
  }
  if (param_1 != 2) {
    if (iVar2 < 1) {
      return;
    }
    iVar8 = 0;
    do {
      iVar10 = 2;
      pfVar3 = param_3 + iVar8 + 1;
      do {
        pfVar5 = pfVar3 + iVar2 * 3 + 1;
        pfVar13 = pfVar3 + iVar2 + 1;
        iVar11 = iVar10 * 4 + -4;
        iVar4 = iVar10 * 4 + -8;
        pfVar12 = pfVar3 + (iVar2 * 2 | 1);
        pfVar6 = pfVar3 + iVar2 * 2;
        pfVar9 = pfVar3 + iVar2 * 3;
        pfVar7 = pfVar3 + iVar2;
        fVar18 = *pfVar9 * *(float *)(param_7 + iVar4) + *pfVar5 * *(float *)(param_7 + iVar11);
        fVar21 = *pfVar3;
        pfVar14 = pfVar3 + 1;
        pfVar3 = pfVar3 + 2;
        fVar19 = *pfVar6 * *(float *)(param_6 + iVar4) + *pfVar12 * *(float *)(param_6 + iVar11);
        fVar17 = *pfVar7 * *(float *)(param_5 + iVar4) + *pfVar13 * *(float *)(param_5 + iVar11);
        fVar20 = *pfVar5 * *(float *)(param_7 + iVar4) - *pfVar9 * *(float *)(param_7 + iVar11);
        fVar16 = *pfVar13 * *(float *)(param_5 + iVar4) - *pfVar7 * *(float *)(param_5 + iVar11);
        iVar1 = param_1 - iVar10;
        fVar23 = fVar19 + fVar21;
        fVar15 = *pfVar12 * *(float *)(param_6 + iVar4) - *pfVar6 * *(float *)(param_6 + iVar11);
        fVar22 = fVar17 + fVar18;
        fVar21 = fVar21 - fVar19;
        fVar19 = fVar16 - fVar20;
        fVar16 = fVar16 + fVar20;
        fVar18 = fVar18 - fVar17;
        fVar17 = fVar15 + *pfVar14;
        fVar15 = *pfVar14 - fVar15;
        param_4[iVar8 * 4 + iVar10 + -1] = fVar22 + fVar23;
        param_4[iVar8 * 4 + iVar1 + param_1 * 3 + -1] = fVar23 - fVar22;
        (param_4 + iVar8 * 4 + iVar10 + -1)[param_1 * 2] = fVar21 + fVar19;
        param_4[iVar8 * 4 + iVar1 + (param_1 - 1)] = fVar21 - fVar19;
        iVar4 = iVar8 * 4 + iVar10;
        iVar10 = iVar10 + 2;
        param_4[iVar4] = fVar16 + fVar17;
        param_4[iVar8 * 4 + iVar1 + param_1 * 3] = fVar16 - fVar17;
        (param_4 + iVar4)[param_1 * 2] = fVar18 + fVar15;
        param_4[iVar8 * 4 + iVar1 + param_1] = fVar18 - fVar15;
      } while (iVar10 < (int)param_1);
      iVar8 = iVar8 + param_1;
    } while (iVar8 < iVar2);
    if ((param_1 & 1) != 0) {
      return;
    }
  }
  if (0 < iVar2) {
    iVar8 = 0;
    pfVar3 = param_3 + -1;
    do {
      iVar8 = iVar8 + param_1;
      fVar15 = *(float *)((int)pfVar3 + param_1 * (param_2 * 4 + 4));
      fVar16 = *(float *)((int)pfVar3 + param_1 * (param_2 * 0xc + 4));
      fVar18 = *(float *)((int)pfVar3 + param_1 * (param_2 << 3 | 4U));
      fVar17 = (fVar16 - fVar15) * -0.70710677;
      fVar19 = pfVar3[param_1];
      fVar15 = (fVar15 + fVar16) * -0.70710677;
      (param_4 + param_1)[-1] = fVar19 + fVar17;
      param_4[param_1] = fVar15 - fVar18;
      pfVar5 = param_4 + param_1 * 3;
      param_4 = param_4 + param_1 * 4;
      pfVar5[-1] = fVar19 - fVar17;
      *pfVar5 = fVar15 + fVar18;
      pfVar3 = pfVar3 + param_1;
    } while (iVar8 < iVar2);
  }
  return;
}


// =========================================================================
// Function: FUN_71b18654
// Entry: 0x71b18654 | Size: 444 bytes
// =========================================================================

void FUN_71b18654(uint param_1,int param_2,float *param_3,float *param_4,int param_5)

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
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  iVar9 = param_2 * param_1;
  if (0 < iVar9) {
    iVar7 = 0;
    pfVar3 = param_4;
    pfVar5 = param_3;
    do {
      pfVar1 = pfVar5 + iVar9;
      fVar11 = *pfVar5;
      iVar7 = iVar7 + param_1;
      pfVar5 = pfVar5 + param_1;
      fVar12 = *pfVar1;
      pfVar1 = pfVar3 + param_1 * 2 + -1;
      *pfVar3 = fVar11 + fVar12;
      pfVar3 = pfVar3 + param_1 * 2;
      *pfVar1 = fVar11 - fVar12;
    } while (iVar7 < iVar9);
  }
  if (1 < (int)param_1) {
    if (param_1 != 2) {
      if (0 < iVar9) {
        iVar7 = 0;
        pfVar1 = param_4 + param_1 * 2 + -3;
        pfVar10 = param_3 + iVar9;
        pfVar3 = param_4;
        pfVar5 = param_3;
        do {
          iVar7 = iVar7 + param_1;
          iVar8 = 2;
          iVar6 = 0;
          pfVar4 = pfVar1;
          do {
            pfVar2 = (float *)(param_5 + 4 + iVar6);
            iVar8 = iVar8 + 2;
            fVar11 = pfVar2[-1];
            fVar12 = *pfVar2;
            fVar15 = *(float *)((int)pfVar10 + iVar6 + 8);
            fVar13 = *(float *)((int)pfVar10 + iVar6 + 4);
            fVar16 = fVar15 * fVar11 - fVar13 * fVar12;
            fVar14 = *(float *)((int)pfVar5 + iVar6 + 8);
            fVar11 = fVar13 * fVar11 + fVar15 * fVar12;
            fVar12 = *(float *)((int)pfVar5 + iVar6 + 4);
            *(float *)((int)pfVar3 + iVar6 + 8) = fVar14 + fVar16;
            pfVar4[1] = fVar16 - fVar14;
            *(float *)((int)pfVar3 + iVar6 + 4) = fVar12 + fVar11;
            *pfVar4 = fVar12 - fVar11;
            pfVar4 = pfVar4 + -2;
            iVar6 = iVar6 + 8;
          } while (iVar8 < (int)param_1);
          pfVar3 = pfVar3 + param_1 * 2;
          pfVar1 = pfVar1 + param_1 * 2;
          pfVar5 = pfVar5 + param_1;
          pfVar10 = pfVar10 + param_1;
        } while (iVar7 < iVar9);
      }
      if ((param_1 & 1) != 0) {
        return;
      }
    }
    if (0 < iVar9) {
      param_4 = param_4 + param_1;
      iVar6 = 0;
      iVar7 = -4;
      do {
        iVar6 = iVar6 + param_1;
        fVar11 = *(float *)((int)param_3 + iVar7 + param_1 * (param_2 * 4 + 4));
        iVar8 = iVar7 + param_1 * 4;
        iVar7 = iVar7 + param_1 * 4;
        param_4[-1] = *(float *)((int)param_3 + iVar8);
        *param_4 = -fVar11;
        param_4 = param_4 + param_1 * 2;
      } while (iVar6 < iVar9);
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71b18810
// Entry: 0x71b18810 | Size: 972 bytes
// =========================================================================

void FUN_71b18810(uint param_1,int param_2,float *param_3,float *param_4,int param_5,int param_6,
                 int param_7)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
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
  
  iVar1 = param_2 * param_1;
  pfVar7 = param_4 + iVar1;
  pfVar2 = param_3;
  pfVar3 = param_4;
  if (0 < iVar1) {
    do {
      fVar15 = (pfVar2 + param_1 * 2)[-1];
      fVar21 = *pfVar2 + pfVar2[param_1 * 4 + -1];
      fVar18 = pfVar2[param_1 * 2];
      fVar14 = *pfVar2 - pfVar2[param_1 * 4 + -1];
      fVar15 = fVar15 + fVar15;
      fVar18 = fVar18 + fVar18;
      *pfVar3 = fVar21 + fVar15;
      pfVar3[iVar1 * 2] = fVar21 - fVar15;
      pfVar3[iVar1] = fVar14 - fVar18;
      pfVar5 = pfVar3 + param_1;
      pfVar3[iVar1 * 3] = fVar14 + fVar18;
      pfVar2 = pfVar2 + param_1 * 4;
      pfVar3 = pfVar5;
    } while (pfVar5 < pfVar7);
  }
  if ((int)param_1 < 2) {
    return;
  }
  if (param_1 != 2) {
    if (iVar1 < 1) {
      return;
    }
    pfVar5 = param_4 + iVar1 * 2;
    pfVar6 = param_3 + param_1 * 2;
    pfVar9 = param_4 + iVar1 * 3;
    iVar8 = 0;
    pfVar2 = param_4;
    pfVar3 = param_3;
    do {
      iVar4 = 2;
      iVar10 = param_1 * 0x10 + -0xc;
      iVar12 = param_1 * 8 + -0xc;
      iVar13 = 0;
      do {
        pfVar11 = (float *)((int)pfVar3 + iVar12);
        fVar22 = *(float *)((int)pfVar3 + iVar13 + 4);
        iVar12 = iVar12 + -8;
        fVar23 = *(float *)((int)pfVar3 + iVar13 + 8);
        fVar14 = *pfVar11;
        iVar4 = iVar4 + 2;
        fVar21 = pfVar11[1];
        pfVar11 = (float *)((int)pfVar3 + iVar10);
        fVar18 = *(float *)((int)pfVar6 + iVar13 + 4);
        iVar10 = iVar10 + -8;
        fVar24 = *(float *)((int)pfVar6 + iVar13 + 8);
        fVar16 = *pfVar11;
        fVar26 = fVar18 - fVar14;
        fVar19 = pfVar11[1];
        fVar17 = fVar24 + fVar21;
        fVar20 = fVar22 - fVar16;
        fVar15 = fVar23 + fVar19;
        pfVar11 = (float *)(param_5 + 4 + iVar13);
        fVar23 = fVar23 - fVar19;
        fVar22 = fVar22 + fVar16;
        fVar24 = fVar24 - fVar21;
        fVar21 = pfVar11[-1];
        fVar18 = fVar18 + fVar14;
        fVar19 = *pfVar11;
        fVar16 = fVar20 - fVar17;
        fVar14 = fVar26 + fVar15;
        pfVar11 = (float *)(param_6 + 4 + iVar13);
        fVar27 = pfVar11[-1];
        fVar25 = fVar23 - fVar24;
        fVar29 = *pfVar11;
        fVar28 = fVar22 - fVar18;
        *(float *)((int)pfVar2 + iVar13 + 4) = fVar22 + fVar18;
        fVar15 = fVar15 - fVar26;
        fVar20 = fVar20 + fVar17;
        *(float *)((int)pfVar2 + iVar13 + 8) = fVar24 + fVar23;
        *(float *)((int)pfVar7 + iVar13 + 8) = fVar14 * fVar21 + fVar16 * fVar19;
        *(float *)((int)pfVar7 + iVar13 + 4) = fVar16 * fVar21 - fVar14 * fVar19;
        *(float *)((int)pfVar5 + iVar13 + 4) = fVar28 * fVar27 - fVar25 * fVar29;
        *(float *)((int)pfVar5 + iVar13 + 8) = fVar25 * fVar27 + fVar28 * fVar29;
        pfVar11 = (float *)(param_7 + 4 + iVar13);
        fVar14 = pfVar11[-1];
        fVar18 = *pfVar11;
        *(float *)((int)pfVar9 + iVar13 + 4) = fVar20 * fVar14 - fVar15 * fVar18;
        *(float *)((int)pfVar9 + iVar13 + 8) = fVar15 * fVar14 + fVar20 * fVar18;
        iVar13 = iVar13 + 8;
      } while (iVar4 < (int)param_1);
      pfVar6 = pfVar6 + param_1 * 4;
      pfVar3 = pfVar3 + param_1 * 4;
      pfVar9 = pfVar9 + param_1;
      pfVar5 = pfVar5 + param_1;
      pfVar7 = pfVar7 + param_1;
      iVar8 = iVar8 + param_1;
      pfVar2 = pfVar2 + param_1;
    } while (iVar8 < iVar1);
    if ((param_1 & 1) != 0) {
      return;
    }
  }
  if (0 < iVar1) {
    iVar8 = 0;
    do {
      iVar8 = iVar8 + param_1;
      fVar14 = (param_3 + param_1 * 3)[-1];
      fVar15 = param_3[param_1 * 3];
      pfVar2 = param_3 + param_1;
      param_3 = param_3 + param_1 * 4;
      fVar18 = pfVar2[-1];
      fVar21 = *pfVar2;
      fVar24 = fVar18 - fVar14;
      fVar26 = fVar21 + fVar15;
      fVar18 = fVar18 + fVar14;
      fVar15 = fVar15 - fVar21;
      (param_4 + param_1)[-1] = fVar18 + fVar18;
      *(float *)((int)param_4 + param_1 * (param_2 * 4 + 4) + -4) = (fVar26 - fVar24) * -1.4142135;
      *(float *)((int)param_4 + param_1 * (param_2 << 3 | 4U) + -4) = fVar15 + fVar15;
      *(float *)((int)param_4 + param_1 * (param_2 * 0xc + 4) + -4) = (fVar24 + fVar26) * -1.4142135
      ;
      param_4 = param_4 + param_1;
    } while (iVar8 < iVar1);
  }
  return;
}


// =========================================================================
// Function: FUN_71b18be0
// Entry: 0x71b18be0 | Size: 464 bytes
// =========================================================================

void FUN_71b18be0(uint param_1,int param_2,float *param_3,float *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  iVar8 = param_2 * param_1;
  if (0 < iVar8) {
    iVar5 = 0;
    pfVar3 = param_3;
    pfVar6 = param_4;
    do {
      pfVar4 = pfVar3 + param_1 * 2 + -1;
      fVar10 = *pfVar3;
      iVar5 = iVar5 + param_1;
      pfVar3 = pfVar3 + param_1 * 2;
      fVar11 = *pfVar4;
      pfVar4 = pfVar6 + iVar8;
      *pfVar6 = fVar10 + fVar11;
      pfVar6 = pfVar6 + param_1;
      *pfVar4 = fVar10 - fVar11;
    } while (iVar5 < iVar8);
  }
  if (1 < (int)param_1) {
    if (param_1 != 2) {
      if (0 < iVar8) {
        pfVar4 = param_4 + iVar8;
        iVar5 = 0;
        pfVar3 = param_4;
        pfVar6 = param_3;
        do {
          iVar5 = iVar5 + param_1;
          iVar9 = 2;
          iVar1 = 0;
          iVar2 = param_1 * 8 + -0xc;
          do {
            pfVar7 = (float *)((int)pfVar6 + iVar2);
            iVar9 = iVar9 + 2;
            iVar2 = iVar2 + -8;
            fVar10 = *pfVar7;
            fVar14 = *(float *)((int)pfVar6 + iVar1 + 4);
            fVar15 = *(float *)((int)pfVar6 + iVar1 + 8);
            fVar12 = pfVar7[1];
            fVar11 = fVar14 - fVar10;
            fVar13 = fVar15 + fVar12;
            *(float *)((int)pfVar3 + iVar1 + 4) = fVar14 + fVar10;
            *(float *)((int)pfVar3 + iVar1 + 8) = fVar15 - fVar12;
            pfVar7 = (float *)(param_5 + 4 + iVar1);
            fVar10 = pfVar7[-1];
            fVar12 = *pfVar7;
            *(float *)((int)pfVar4 + iVar1 + 8) = fVar13 * fVar10 + fVar11 * fVar12;
            *(float *)((int)pfVar4 + iVar1 + 4) = fVar11 * fVar10 - fVar13 * fVar12;
            iVar1 = iVar1 + 8;
          } while (iVar9 < (int)param_1);
          pfVar3 = pfVar3 + param_1;
          pfVar4 = pfVar4 + param_1;
          pfVar6 = pfVar6 + param_1 * 2;
        } while (iVar5 < iVar8);
      }
      if ((param_1 & 1) != 0) {
        return;
      }
    }
    if (0 < iVar8) {
      param_3 = param_3 + param_1;
      iVar5 = 0;
      do {
        pfVar3 = param_3 + -1;
        fVar10 = *param_3;
        iVar5 = iVar5 + param_1;
        param_3 = param_3 + param_1 * 2;
        param_4[param_1 - 1] = *pfVar3 + *pfVar3;
        pfVar3 = (float *)((int)param_4 + param_1 * (param_2 * 4 + 4) + -4);
        param_4 = param_4 + param_1;
        *pfVar3 = fVar10 * -2.0;
      } while (iVar5 < iVar8);
    }
  }
  return;
}


// =========================================================================
// Function: PYFhyg_fCqC_XScXITLStrxcKmRbqdfldT_Vj
// Entry: 0x71b19170 | Size: 96 bytes
// =========================================================================

undefined4 * PYFhyg_fCqC_XScXITLStrxcKmRbqdfldT_Vj(undefined4 *param_1)

{
  undefined4 uVar1;
  
  param_1[5] = 0;
  param_1[6] = 0x3f800000;
  *param_1 = 0;
  param_1[1] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  param_1[4] = 0;
  thunk_wWcJgRjNAscLK_lsKhPAcMcV(param_1 + 7);
  thunk_lZ_cSUTFlxtubkhk_ITRiKQyRvDW(param_1 + 0x16);
  uVar1 = thunk_RtjMTcOPHBLBcDCGvxvrncGtxBxpigwAkp();
  param_1[0x450] = uVar1;
  thunk_BTRvTsjrWtDHhgbTYCGLxPqGpijBu(param_1 + 0x452);
  return param_1;
}


// =========================================================================
// Function: TZliEYqciqNcrcJHXupefytWzyXnaHoUszIiY
// Entry: 0x71b19230 | Size: 124 bytes
// =========================================================================

int * TZliEYqciqNcrcJHXupefytWzyXnaHoUszIiY(int *param_1)

{
  int iVar1;
  
  thunk_IKCwteGMGjVcQRcwyAEmB_FFd_Bml(param_1 + 0x452);
  iVar1 = param_1[0x450];
  param_1[0x450] = 0;
  if (iVar1 != 0) {
    thunk_fzGHvZuqXPFbyeVyLPwnEEZHgDgpk();
    thunk_qNQrlu();
  }
  thunk_pONOVmkUOdNWfVaMYDHEyFhffjsr(param_1 + 0x16);
  thunk_YDGrLkQxfwBAvhRAZxfXBzxB(param_1 + 7);
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
// Function: s_fzsUWJPuaXczdBUWBhObasxJRBdRxVKeUmXQBDtjcwiVBGsr_pi
// Entry: 0x71b192b0 | Size: 904 bytes
// =========================================================================

void s_fzsUWJPuaXczdBUWBhObasxJRBdRxVKeUmXQBDtjcwiVBGsr_pi
               (int *param_1,int *param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  int *piVar12;
  undefined4 uStack_24;
  
  uStack_24 = param_3;
  if (param_4 != 16000) {
    piVar6 = param_1 + 7;
    iVar2 = thunk_RVAuHnEAYoTAssxkuGmZqe_TCWqRWPMaiilryNy(piVar6,param_4,16000,1);
    if (iVar2 != 0) {
      uVar4 = thunk_RVAuHnEAYoTAssxkuGmZqe_TCWqRWPMaiilryNy(piVar6,param_4,16000,1);
                    /* WARNING: Subroutine does not return */
      thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
                (s_____webrtc_apm_src_webrtc_module_7006eb86,0x2f,
                 s_resampler__ResetIfNeeded_sample__70063a71,&DAT_70095ef5,uVar4,0);
    }
    thunk_KJpivuy_EdbXuTWrMGsedSRfYULmerpYemN
              (piVar6,param_2,param_3,param_1 + 0x460,0xa0,&uStack_24);
    param_2 = param_1 + 0x460;
  }
  piVar6 = param_1 + 0x450;
  iVar2 = thunk_YTGkYGnIsjHfXqnTJhxKVDXpQFwpeZZzXUbVeVy(*piVar6,param_2,uStack_24);
  if (iVar2 != 0) {
    uVar4 = thunk_YTGkYGnIsjHfXqnTJhxKVDXpQFwpeZZzXUbVeVy(*piVar6,param_2,uStack_24);
                    /* WARNING: Subroutine does not return */
    thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
              (s_____webrtc_apm_src_webrtc_module_7006eb86,0x38,
               s_standalone_vad__>AddAudio_resamp_7006d475,&DAT_70095ef5,uVar4,0);
  }
  piVar12 = param_1 + 0x4b0;
  thunk_Jsfi_tFCLaVUpGedxGXnHBIQQ_mFjFpbQipvdfCWyuoUgGiBcylvWklFbpEIsY
            (param_1 + 0x16,param_2,uStack_24,piVar12);
  uVar5 = param_1[0x4d0];
  uVar1 = param_1[1] - *param_1 >> 3;
  if (uVar1 < uVar5) {
    FUN_71b19c58(param_1,uVar5 - uVar1);
    uVar5 = param_1[0x4d0];
  }
  else if (uVar5 < uVar1) {
    param_1[1] = *param_1 + uVar5 * 8;
  }
  iVar8 = param_1[3];
  iVar2 = param_1[4];
  uVar1 = iVar2 - iVar8 >> 3;
  if (uVar1 < uVar5) {
    FUN_71b19c58(param_1 + 3,uVar5 - uVar1);
    iVar8 = param_1[3];
    iVar2 = param_1[4];
    if (iVar2 != iVar8) {
LAB_71b193dc:
      imp___aeabi_memmove8(iVar8,param_1 + 0x4c8,iVar2 - iVar8);
    }
  }
  else {
    if (uVar5 < uVar1) {
      iVar2 = iVar8 + uVar5 * 8;
      param_1[4] = iVar2;
    }
    if (iVar2 != iVar8) goto LAB_71b193dc;
  }
  if (param_1[0x4d0] == 0) {
    return;
  }
  puVar11 = (undefined8 *)*param_1;
  iVar8 = param_1[1];
  iVar2 = iVar8 - (int)puVar11;
  uVar1 = iVar2 >> 3;
  if ((char)param_1[0x4d1] != '\0') {
    if (0 < (int)uVar1) {
      if (iVar2 == 8) {
        uVar5 = 1;
        puVar3 = puVar11;
      }
      else {
        uVar7 = uVar1 & 0x7ffffffe;
        uVar5 = uVar1 & 1;
        puVar3 = puVar11 + uVar7;
        uVar10 = uVar7;
        do {
          uVar10 = uVar10 - 2;
          *puVar11 = 0x3f847ae147ae147b;
          puVar11[1] = 0x3f847ae147ae147b;
          puVar11 = puVar11 + 2;
        } while (uVar10 != 0);
        if (uVar1 == uVar7) goto LAB_71b19528;
      }
      uVar5 = uVar5 + 1;
      do {
        *(undefined4 *)puVar3 = 0x47ae147b;
        uVar5 = uVar5 - 1;
        *(undefined4 *)((int)puVar3 + 4) = 0x3f847ae1;
        puVar3 = puVar3 + 1;
      } while (1 < uVar5);
    }
    goto LAB_71b19528;
  }
  if (0 < (int)uVar1) {
    puVar3 = puVar11;
    uVar5 = uVar1;
    if (iVar2 != 8) {
      uVar7 = uVar1 & 0x7ffffffe;
      uVar5 = uVar1 & 1;
      puVar3 = puVar11 + uVar7;
      uVar10 = uVar7;
      puVar9 = puVar11;
      do {
        uVar10 = uVar10 - 2;
        *puVar9 = 0x3fe0000000000000;
        puVar9[1] = 0x3fe0000000000000;
        puVar9 = puVar9 + 2;
      } while (uVar10 != 0);
      if (uVar1 == uVar7) goto LAB_71b19494;
    }
    uVar5 = uVar5 + 1;
    do {
      uVar5 = uVar5 - 1;
      *puVar3 = 0x3fe0000000000000;
      puVar3 = puVar3 + 1;
    } while (1 < uVar5);
  }
LAB_71b19494:
  iVar2 = thunk_TccfyTtrffvazwVwGtqEayN_woXkw_TXgJpev_NyTy(*piVar6,puVar11);
  if (iVar2 < 0) {
    uVar4 = thunk_TccfyTtrffvazwVwGtqEayN_woXkw_TXgJpev_NyTy
                      (*piVar6,*param_1,param_1[1] - *param_1 >> 3);
                    /* WARNING: Subroutine does not return */
    thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
              (s_____webrtc_apm_src_webrtc_module_7006eb86,0x4c,
               s_standalone_vad__>GetActivity__ch_70071e64,&DAT_70095ef5,uVar4,0);
  }
  iVar2 = thunk_IKSUJOPFVXrbWxLe_GVANujLjfLWLmIgvPOSuTdFuvploYHXMlgQlkcZEFAGJnmJb
                    (param_1 + 0x452,piVar12);
  if (iVar2 < 0) {
    uVar4 = thunk_IKSUJOPFVXrbWxLe_GVANujLjfLWLmIgvPOSuTdFuvploYHXMlgQlkcZEFAGJnmJb
                      (param_1 + 0x452,piVar12,*param_1);
                    /* WARNING: Subroutine does not return */
    thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
              (s_____webrtc_apm_src_webrtc_module_7006eb86,0x4f,
               s_pitch_based_vad__VoicingProbabil_7006a7a4,&DAT_70095ef5,uVar4,0);
  }
  iVar8 = param_1[1];
LAB_71b19528:
  param_1[6] = (int)(float)*(double *)(iVar8 + -8);
  return;
}


// =========================================================================
// Function: FUN_71b19c58
// Entry: 0x71b19c58 | Size: 248 bytes
// =========================================================================

void FUN_71b19c58(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar4 = param_1[1];
  if (param_2 <= (uint)(param_1[2] - iVar4 >> 3)) {
    if (param_2 != 0) {
      imp___aeabi_memclr8(iVar4,param_2 << 3);
      iVar4 = iVar4 + param_2 * 8;
    }
    param_1[1] = iVar4;
    return;
  }
  iVar6 = *param_1;
  iVar7 = iVar4 - iVar6 >> 3;
  uVar5 = param_2 + iVar7;
  if (uVar5 < 0x20000000) {
    uVar2 = param_1[2] - iVar6;
    uVar1 = (int)uVar2 >> 2;
    if (uVar5 < uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffff7 < uVar2) {
      uVar5 = 0x1fffffff;
    }
    if (uVar5 == 0) {
      iVar3 = 0;
    }
    else {
      if (0x1fffffff < uVar5) goto LAB_71b19d4c;
      iVar3 = thunk_MwhHq(uVar5 << 3);
    }
    iVar7 = iVar3 + iVar7 * 8;
    imp___aeabi_memclr8(iVar7,param_2 << 3);
    imp___aeabi_memcpy8(iVar3,iVar6,iVar4 - iVar6);
    *param_1 = iVar3;
    param_1[1] = iVar7 + param_2 * 8;
    param_1[2] = iVar3 + uVar5 * 8;
    if (iVar6 != 0) {
      thunk_qNQrlu(iVar6);
      return;
    }
    return;
  }
  FUN_71b19e2c(param_1);
LAB_71b19d4c:
                    /* WARNING: Subroutine does not return */
  FUN_719fe2ec();
}


// =========================================================================
// Function: FUN_71b19e2c
// Entry: 0x71b19e2c | Size: 20 bytes
// =========================================================================

void FUN_71b19e2c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_vector_7006dad5);
}


// =========================================================================
// Function: wWcJgRjNAscLK_lsKhPAcMcV
// Entry: 0x71b19e94 | Size: 32 bytes
// =========================================================================

void wWcJgRjNAscLK_lsKhPAcMcV(undefined4 *param_1)

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
  param_1[0xb] = 0;
  param_1[0xc] = uVar1;
  param_1[0xd] = uVar2;
  param_1[0xe] = uVar3;
  return;
}


// =========================================================================
// Function: eYwmkhpoNIVmJHiHaVZijDEOCq
// Entry: 0x71b19eb4 | Size: 52 bytes
// =========================================================================

undefined4 * eYwmkhpoNIVmJHiHaVZijDEOCq(undefined4 *param_1)

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
  param_1[0xb] = 0;
  param_1[0xc] = uVar1;
  param_1[0xd] = uVar2;
  param_1[0xe] = uVar3;
  thunk_xfUGTnpZLSJrUjzbOLaQ_JRY_VQKCP(param_1);
  return param_1;
}


// =========================================================================
// Function: xfUGTnpZLSJrUjzbOLaQ_JRY_VQKCP
// Entry: 0x71b19ef4 | Size: 1184 bytes
// =========================================================================

undefined4 xfUGTnpZLSJrUjzbOLaQ_JRY_VQKCP(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iStack_24;
  
  if (param_4 - 3U < 0xfffffffe) {
    iVar1 = thunk_SJCbFLPwsPOxVEwphuNvyMuRSRkYnVHVavoQuLDHUWgATwcdhchtudQ();
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    uVar3 = 0x2ba;
    pcVar4 = s_Reset___called_with_unsupported_c_7006f34f;
    puVar2 = &DAT_70096367;
    param_2 = param_4;
LAB_71b19fa4:
    uVar5 = 0xffffffff;
    thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
              (puVar2,s_____webrtc_apm_src_webrtc_common_70064a02,uVar3,pcVar4,param_2);
switchD_71b1a118_default:
    return uVar5;
  }
  iVar1 = thunk_muSBEa_LSVBkglofvDVWmBwhovYwCzcFQAlkiwwwpKIQLlDd_YKbtJkyblhyudSGjS
                    (param_2,param_3,&iStack_24);
  if (iVar1 != 0) {
    iVar1 = thunk_SJCbFLPwsPOxVEwphuNvyMuRSRkYnVHVavoQuLDHUWgATwcdhchtudQ();
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    uVar3 = 0x2f2;
    pcVar4 = s_Reset___called_with_unsupported_s_70063abc;
    puVar2 = &DAT_7009a85c;
    goto LAB_71b19fa4;
  }
  param_1[0xb] = iStack_24;
  param_1[0xc] = param_4;
  if (*param_1 != 0) {
    imp_free();
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    imp_free();
    param_1[1] = 0;
  }
  if (param_1[2] != 0) {
    imp_free();
    param_1[2] = 0;
  }
  if (param_1[3] != 0) {
    imp_free();
    param_1[3] = 0;
  }
  if (param_1[4] != 0) {
    imp_free();
    param_1[4] = 0;
  }
  iVar1 = param_1[0xd];
  if (iVar1 != 0) {
    thunk_YDGrLkQxfwBAvhRAZxfXBzxB(iVar1);
    thunk_qNQrlu(iVar1);
    param_1[0xd] = 0;
  }
  iVar1 = param_1[0xe];
  if (iVar1 != 0) {
    thunk_YDGrLkQxfwBAvhRAZxfXBzxB(iVar1);
    thunk_qNQrlu(iVar1);
    param_1[0xe] = 0;
  }
  param_1[10] = param_3 / 1000;
  param_1[5] = 0;
  param_1[6] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[7] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[8] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  param_1[9] = param_2 / 1000;
  if (param_1[0xc] == 2) {
    iVar1 = thunk_MwhHq(0x3c);
    thunk_eYwmkhpoNIVmJHiHaVZijDEOCq(iVar1,param_2,param_3,1);
    param_1[0xd] = iVar1;
    iVar1 = thunk_MwhHq(0x3c);
    thunk_eYwmkhpoNIVmJHiHaVZijDEOCq(iVar1,param_2,param_3,1);
    param_1[0xe] = iVar1;
  }
  uVar5 = 0;
  switch(param_1[0xb]) {
  case 1:
  case 0xc:
    iVar1 = imp_calloc(1,0x20);
    *param_1 = iVar1;
    return 0;
  case 2:
    iVar1 = imp_malloc(0x60);
    *param_1 = iVar1;
    thunk_twdSDcHElFyGbReLOCjwKTtqksHyZwPYvyc();
    return 0;
  case 3:
  case 0xe:
    iVar1 = imp_calloc(1,0x20);
    *param_1 = iVar1;
    break;
  case 4:
    iVar1 = imp_calloc(1,0x20);
    *param_1 = iVar1;
    iVar1 = imp_malloc(0x60);
    param_1[1] = iVar1;
    thunk_twdSDcHElFyGbReLOCjwKTtqksHyZwPYvyc();
    return 0;
  case 5:
    iVar1 = imp_calloc(1,0x20);
    *param_1 = iVar1;
    iVar1 = imp_calloc(1,0x20);
    param_1[1] = iVar1;
    iVar1 = imp_malloc(0x60);
    param_1[2] = iVar1;
    thunk_twdSDcHElFyGbReLOCjwKTtqksHyZwPYvyc();
    return 0;
  case 6:
    iVar1 = imp_malloc(0x60);
    *param_1 = iVar1;
    thunk_twdSDcHElFyGbReLOCjwKTtqksHyZwPYvyc();
    break;
  case 7:
    iVar1 = imp_calloc(1,0x20);
    *param_1 = iVar1;
    iVar1 = imp_malloc(0x60);
    param_1[1] = iVar1;
    thunk_vFVujsoBEXAlKIPUVXHJSBGVEsnHIXlGbu();
    return 0;
  case 8:
    iVar1 = imp_malloc(0x60);
    *param_1 = iVar1;
    thunk_vFVujsoBEXAlKIPUVXHJSBGVEsnHIXlGbu();
    return 0;
  case 9:
    iVar1 = imp_malloc(0x40);
    *param_1 = iVar1;
    thunk_NruLUzwMJdqbgNpyHvKSwzEstJwFReQpUQZ();
    return 0;
  case 10:
    iVar1 = imp_calloc(1,0x20);
    *param_1 = iVar1;
    iVar1 = imp_malloc(0x60);
    param_1[1] = iVar1;
    thunk_nQVrapGtMQKQyGIgfGpkYZkeFQIJIHeYdmJ();
    return 0;
  case 0xb:
    iVar1 = imp_calloc(1,0x20);
    *param_1 = iVar1;
    iVar1 = imp_malloc(0x60);
    param_1[1] = iVar1;
    thunk_nQVrapGtMQKQyGIgfGpkYZkeFQIJIHeYdmJ();
    goto LAB_71b1a284;
  case 0xd:
    iVar1 = imp_malloc(0x80);
    *param_1 = iVar1;
    thunk__z_liPzexvVp_PmwOijcLxzMxlaYlqTGSaS();
    return 0;
  case 0xf:
    iVar1 = imp_malloc(0x80);
    *param_1 = iVar1;
    thunk__z_liPzexvVp_PmwOijcLxzMxlaYlqTGSaS();
    break;
  case 0x10:
    iVar1 = imp_malloc(0x80);
    *param_1 = iVar1;
    thunk__z_liPzexvVp_PmwOijcLxzMxlaYlqTGSaS();
    iVar1 = imp_calloc(1,0x20);
    param_1[1] = iVar1;
LAB_71b1a284:
    iVar1 = imp_calloc(1,0x20);
    param_1[2] = iVar1;
    return 0;
  case 0x11:
    iVar1 = imp_calloc(1,0x20);
    *param_1 = iVar1;
    iVar1 = imp_malloc(0x80);
    param_1[1] = iVar1;
    thunk__z_liPzexvVp_PmwOijcLxzMxlaYlqTGSaS();
    return 0;
  case 0x12:
    iVar1 = imp_malloc(0x80);
    *param_1 = iVar1;
    thunk_Nk_syunPjhbI_pfWesuygcfoDTWhPeDZKa();
    break;
  case 0x13:
    iVar1 = imp_malloc(0x80);
    *param_1 = iVar1;
    thunk_Nk_syunPjhbI_pfWesuygcfoDTWhPeDZKa();
    return 0;
  case 0x14:
    iVar1 = imp_malloc(0x60);
    *param_1 = iVar1;
    thunk_nQVrapGtMQKQyGIgfGpkYZkeFQIJIHeYdmJ();
    return 0;
  default:
    goto switchD_71b1a118_default;
  }
  iVar1 = imp_calloc(1,0x20);
  param_1[1] = iVar1;
  return 0;
}


// =========================================================================
// Function: YDGrLkQxfwBAvhRAZxfXBzxB
// Entry: 0x71b1a418 | Size: 156 bytes
// =========================================================================

int * YDGrLkQxfwBAvhRAZxfXBzxB(int *param_1)

{
  int iVar1;
  
  if (*param_1 != 0) {
    imp_free();
  }
  if (param_1[1] != 0) {
    imp_free();
  }
  if (param_1[2] != 0) {
    imp_free();
  }
  if (param_1[3] != 0) {
    imp_free();
  }
  if (param_1[4] != 0) {
    imp_free();
  }
  iVar1 = param_1[0xd];
  if (iVar1 != 0) {
    thunk_YDGrLkQxfwBAvhRAZxfXBzxB(iVar1);
    thunk_qNQrlu(iVar1);
  }
  iVar1 = param_1[0xe];
  if (iVar1 != 0) {
    thunk_YDGrLkQxfwBAvhRAZxfXBzxB(iVar1);
    thunk_qNQrlu(iVar1);
  }
  return param_1;
}


// =========================================================================
// Function: RVAuHnEAYoTAssxkuGmZqe_TCWqRWPMaiilryNy
// Entry: 0x71b1a4b4 | Size: 88 bytes
// =========================================================================

undefined4 RVAuHnEAYoTAssxkuGmZqe_TCWqRWPMaiilryNy(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  bool bVar2;
  
  if (param_2 / 1000 == *(int *)(param_1 + 0x24)) {
    param_3 = param_3 / 1000;
    bVar2 = param_3 == *(int *)(param_1 + 0x28);
    if (bVar2) {
      param_3 = *(int *)(param_1 + 0x30);
    }
    if (bVar2 && param_3 == param_4) {
      return 0;
    }
  }
  uVar1 = thunk_xfUGTnpZLSJrUjzbOLaQ_JRY_VQKCP();
  return uVar1;
}


// =========================================================================
// Function: muSBEa_LSVBkglofvDVWmBwhovYwCzcFQAlkiwwwpKIQLlDd_YKbtJkyblhyudSGjS
// Entry: 0x71b1a50c | Size: 412 bytes
// =========================================================================

undefined4
muSBEa_LSVBkglofvDVWmBwhovYwCzcFQAlkiwwwpKIQLlDd_YKbtJkyblhyudSGjS
          (undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int extraout_r1;
  int extraout_r1_00;
  undefined4 uVar5;
  uint uVar6;
  
  FUN_71ba2da8();
  iVar2 = extraout_r1;
  iVar3 = param_2;
  while (iVar1 = iVar2, iVar1 != 0) {
    FUN_71ba2da8(iVar3);
    iVar2 = extraout_r1_00;
    iVar3 = iVar1;
  }
  iVar2 = FUN_71ba0440(param_1,iVar3);
  iVar3 = FUN_71ba0440(param_2,iVar3);
  uVar5 = 0;
  if (iVar2 != iVar3) {
    if (iVar2 == 1) {
      uVar6 = iVar3 - 2;
      if (10 < uVar6) {
        return 0xffffffff;
      }
      if ((0x417U >> (uVar6 & 0xff) & 1) == 0) {
        return 0xffffffff;
      }
      puVar4 = &DAT_7009a864;
    }
    else {
      if (iVar3 != 1) {
        if (iVar2 == 2) {
          uVar5 = 6;
        }
        if (iVar2 != 2 || iVar3 != 3) {
          if (iVar2 == 2) {
            uVar5 = 7;
          }
          if (iVar2 != 2 || iVar3 != 0xb) {
            if (iVar2 == 4) {
              uVar5 = 8;
            }
            if (iVar2 != 4 || iVar3 != 0xb) {
              if (iVar2 == 8) {
                uVar5 = 9;
              }
              if (iVar2 != 8 || iVar3 != 0xb) {
                if (iVar2 == 3) {
                  uVar5 = 0x11;
                }
                if (iVar2 != 3 || iVar3 != 2) {
                  if (iVar2 == 0xb) {
                    uVar5 = 0x12;
                  }
                  if (iVar2 != 0xb || iVar3 != 2) {
                    if (iVar2 == 0xb) {
                      uVar5 = 0x13;
                    }
                    if (iVar2 != 0xb || iVar3 != 4) {
                      if (iVar2 == 0xb) {
                        uVar5 = 10;
                      }
                      if (iVar2 != 0xb || iVar3 != 0x10) {
                        if (iVar2 == 0xb) {
                          uVar5 = 0xb;
                        }
                        if (iVar2 != 0xb || iVar3 != 0x20) {
                          if (iVar2 != 0xb) {
                            return 0xffffffff;
                          }
                          uVar5 = 0x14;
                          if (iVar3 != 8) {
                            return 0xffffffff;
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
        goto LAB_71b1a570;
      }
      uVar6 = iVar2 - 2;
      if (10 < uVar6) {
        return 0xffffffff;
      }
      if ((0x417U >> (uVar6 & 0xff) & 1) == 0) {
        return 0xffffffff;
      }
      puVar4 = &DAT_7009a890;
    }
    uVar5 = *(undefined4 *)(puVar4 + uVar6 * 4);
  }
LAB_71b1a570:
  *param_3 = uVar5;
  return 0;
}


// =========================================================================
// Function: KJpivuy_EdbXuTWrMGsedSRfYULmerpYemN
// Entry: 0x71b1a6b0 | Size: 4324 bytes
// =========================================================================

undefined4
KJpivuy_EdbXuTWrMGsedSRfYULmerpYemN
          (undefined4 *param_1,undefined2 *param_2,uint param_3,int param_4,undefined4 *param_5,
          uint *param_6)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined2 *puVar13;
  uint uVar14;
  uint uVar15;
  undefined2 *puVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined2 *puVar19;
  undefined4 *unaff_r9;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  bool bVar24;
  bool bVar25;
  undefined2 *puVar26;
  longlong lVar27;
  undefined8 in_d16;
  undefined8 in_d17;
  undefined8 in_d18;
  undefined8 in_d19;
  undefined1 auStack_48 [12];
  uint uStack_3c;
  int iStack_38;
  undefined4 *puStack_34;
  undefined4 *puStack_30;
  
  puVar22 = &stack0xfffffff8;
  puVar23 = auStack_48;
  if (param_1[0xc] == 2) {
    iStack_38 = param_4;
    puVar3 = (undefined8 *)imp_malloc(param_3 & 0x7fffffff);
    puVar4 = (undefined8 *)imp_malloc(param_3 & 0x7fffffff);
    puStack_30 = (undefined4 *)imp_malloc((uint)param_5 & 0xfffffffe);
    puStack_34 = (undefined4 *)((uint)param_5 >> 1);
    uVar5 = imp_malloc((uint)param_5 & 0xfffffffe);
    puVar20 = puVar4;
    puVar21 = puVar3;
    puVar10 = (undefined4 *)auStack_48;
    if (param_3 != 0) {
      uVar6 = 0;
      puVar10 = (undefined4 *)auStack_48;
      puVar19 = param_2;
      if (0xe < param_3) {
        uVar12 = (param_3 - 1 >> 1) + 1;
        uVar14 = uVar12 & 0xfffffff8;
        uStack_3c = uVar5;
        uVar6 = uVar14 << 1;
        uVar5 = uVar14;
        do {
          puVar16 = (undefined2 *)0x380;
          puVar13 = (undefined2 *)0x390;
          lVar27 = 4;
          puVar26 = param_2;
          while( true ) {
            *puVar16 = *puVar26;
            puVar26 = puVar26 + 1;
            *puVar13 = *puVar26;
            puVar26 = puVar26 + 1;
            lVar27 = lVar27 + -1;
            if (lVar27 == 0) break;
            puVar16 = puVar16 + 1;
            puVar13 = puVar13 + 1;
          }
          puVar16 = (undefined2 *)0x388;
          puVar13 = (undefined2 *)0x398;
          lVar27 = 4;
          while( true ) {
            *puVar16 = *puVar26;
            puVar26 = puVar26 + 1;
            *puVar13 = *puVar26;
            puVar26 = puVar26 + 1;
            lVar27 = lVar27 + -1;
            if (lVar27 == 0) break;
            puVar16 = puVar16 + 1;
            puVar13 = puVar13 + 1;
          }
          param_2 = param_2 + 0x10;
          uVar5 = uVar5 - 8;
          *puVar4 = in_d18;
          puVar4[1] = in_d19;
          puVar4 = puVar4 + 2;
          *puVar3 = in_d16;
          puVar3[1] = in_d17;
          puVar3 = puVar3 + 2;
        } while (uVar5 != 0);
        uVar5 = *(uint *)(puVar23 + 0xc);
        puVar10 = (undefined4 *)puVar23;
        if (uVar12 == uVar14) goto LAB_71b1a7c8;
      }
      puVar19 = puVar19 + uVar6 + 1;
      do {
        puVar16 = puVar19 + -1;
        uVar1 = *puVar19;
        puVar19 = puVar19 + 2;
        *(undefined2 *)((int)puVar21 + uVar6) = *puVar16;
        puVar16 = (undefined2 *)((int)puVar20 + uVar6);
        uVar6 = uVar6 + 2;
        *puVar16 = uVar1;
      } while (uVar6 < param_3);
    }
LAB_71b1a7c8:
    uVar7 = param_1[0xd];
    uVar18 = puVar10[5];
    puVar10[8] = 0;
    puVar10[7] = 0;
    *puVar10 = uVar18;
    puVar10[1] = puVar10 + 8;
    iVar8 = thunk_KJpivuy_EdbXuTWrMGsedSRfYULmerpYemN(uVar7,puVar21,param_3 >> 1,puVar10[6]);
    uVar7 = param_1[0xe];
    *puVar10 = uVar18;
    puVar10[1] = puVar10 + 7;
    iVar9 = thunk_KJpivuy_EdbXuTWrMGsedSRfYULmerpYemN(uVar7,puVar20,param_3 >> 1,uVar5);
    uVar7 = 0xffffffff;
    if ((iVar9 != 0 || iVar8 != 0) || (uVar6 = puVar10[8], uVar6 != puVar10[7])) goto LAB_71b1a8b8;
    if (uVar6 != 0) {
      uVar12 = 0;
      if (0x17 < uVar6) {
        uVar15 = uVar6 - 1;
        uVar14 = puVar10[4];
        uVar17 = uVar14 + uVar15 * 4;
        bVar24 = uVar14 <= uVar17;
        if (bVar24) {
          uVar17 = uVar14 + 2;
          uVar14 = uVar17 + uVar15 * 4;
        }
        if ((bVar24 && uVar17 <= uVar14) && (uVar15 < 0x40000000)) {
          uVar12 = uVar6 & 0x7ffffff8;
          puVar19 = (undefined2 *)puVar10[4];
          uVar14 = uVar12;
          do {
            uVar14 = uVar14 - 8;
            puVar16 = (undefined2 *)0x380;
            puVar13 = (undefined2 *)0x390;
            lVar27 = 4;
            puVar26 = puVar19;
            while( true ) {
              *puVar26 = *puVar16;
              puVar26[1] = *puVar13;
              puVar26 = puVar26 + 2;
              lVar27 = lVar27 + -1;
              if (lVar27 == 0) break;
              puVar16 = puVar16 + 1;
              puVar13 = puVar13 + 1;
            }
            puVar16 = (undefined2 *)0x388;
            puVar13 = (undefined2 *)0x398;
            lVar27 = 4;
            while( true ) {
              *puVar26 = *puVar16;
              puVar26[1] = *puVar13;
              puVar26 = puVar26 + 2;
              lVar27 = lVar27 + -1;
              if (lVar27 == 0) break;
              puVar16 = puVar16 + 1;
              puVar13 = puVar13 + 1;
            }
            puVar19 = puVar19 + 0x10;
          } while (uVar14 != 0);
          if (uVar6 == uVar12) goto LAB_71b1a8a8;
        }
      }
      iVar8 = uVar6 - uVar12;
      puVar13 = (undefined2 *)(puVar10[4] + uVar12 * 4 + 2);
      puVar19 = (undefined2 *)(puVar10[6] + uVar12 * 2);
      puVar16 = (undefined2 *)(uVar5 + uVar12 * 2);
      do {
        uVar1 = *puVar16;
        iVar8 = iVar8 + -1;
        puVar13[-1] = *puVar19;
        *puVar13 = uVar1;
        puVar13 = puVar13 + 2;
        puVar19 = puVar19 + 1;
        puVar16 = puVar16 + 1;
      } while (iVar8 != 0);
    }
LAB_71b1a8a8:
    uVar7 = 0;
    **(int **)(puVar22 + 0xc) = uVar6 << 1;
LAB_71b1a8b8:
    imp_free(puVar21);
    imp_free(puVar20);
    imp_free(puVar10[6]);
    imp_free(uVar5);
    return uVar7;
  }
  uVar7 = 0;
  switch(param_1[0xb]) {
  case 0:
    imp___aeabi_memcpy(param_4,param_2,param_3 << 1);
    *param_6 = param_3;
    return 0;
  case 1:
    uVar7 = 0xffffffff;
    if ((undefined4 *)(param_3 << 1) <= param_5) {
      uVar5 = param_3 << 1;
      thunk_bQdAhuXqIGgcQUVkZWGCB(param_2,param_3,param_4,*param_1);
LAB_71b1b068:
      *param_6 = uVar5;
      return 0;
    }
    break;
  case 2:
    uVar5 = param_3 * -0x33333333 >> 5 | param_3 * 0x68000000;
    bVar25 = 0x1999998 < uVar5;
    bVar24 = uVar5 == 0x1999999;
    if (uVar5 < 0x199999a) {
      unaff_r9 = (undefined4 *)(param_3 * 3);
      bVar25 = param_5 <= unaff_r9;
      bVar24 = unaff_r9 == param_5;
    }
    if (bVar25 && !bVar24) {
      return 0xffffffff;
    }
    puVar10 = (undefined4 *)imp_malloc(0x540);
    if (param_3 != 0) {
      uVar5 = 0;
      do {
        thunk_mLfS_AxZdGhTckYoQICTuKLCQozofB(param_2,param_4,*param_1,puVar10);
        uVar5 = uVar5 + 0xa0;
        param_2 = param_2 + 0xa0;
        param_4 = param_4 + 0x3c0;
      } while (uVar5 < param_3);
    }
    *param_6 = (uint)unaff_r9;
    goto LAB_71b1b798;
  case 3:
    uVar7 = 0xffffffff;
    if ((undefined4 *)(param_3 << 2) <= param_5) {
      iStack_38 = param_4;
      puVar10 = (undefined4 *)imp_malloc(param_3 << 2);
      thunk_bQdAhuXqIGgcQUVkZWGCB(param_2,param_3,puVar10,*param_1);
      thunk_bQdAhuXqIGgcQUVkZWGCB(puVar10,param_3 << 1,iStack_38,param_1[1]);
      *param_6 = param_3 << 2;
      goto LAB_71b1b798;
    }
    break;
  case 4:
    uVar7 = 0xffffffff;
    uVar5 = param_3 * -0x33333333 >> 4 | param_3 * -0x30000000;
    bVar25 = 0x3333332 < uVar5;
    bVar24 = uVar5 == 0x3333333;
    if (uVar5 < 0x3333334) {
      bVar25 = param_5 <= (undefined4 *)(param_3 * 6);
      bVar24 = (undefined4 *)(param_3 * 6) == param_5;
      iStack_38 = param_4;
    }
    if (!bVar25 || bVar24) {
      uVar7 = imp_malloc(0x540);
      puVar10 = (undefined4 *)imp_malloc(param_3 << 2);
      thunk_bQdAhuXqIGgcQUVkZWGCB(param_2,param_3,puVar10,*param_1);
      *param_6 = param_3 << 1;
      uVar5 = 0;
      if (param_3 << 1 != 0) {
        uVar5 = 0;
        iVar8 = iStack_38;
        puStack_30 = puVar10;
        do {
          thunk_mLfS_AxZdGhTckYoQICTuKLCQozofB(puVar10,iVar8,param_1[1],uVar7);
          uVar5 = uVar5 + 0xa0;
          puVar10 = puVar10 + 0x50;
          iVar8 = iVar8 + 0x3c0;
        } while (uVar5 < *param_6);
        uVar5 = *param_6 * 3;
        puVar10 = puStack_30;
      }
      *param_6 = uVar5;
      imp_free(uVar7);
      imp_free(puVar10);
      return 0;
    }
    break;
  case 5:
    uVar7 = 0xffffffff;
    uVar5 = param_3 * -0x33333333 >> 3 | param_3 * -0x60000000;
    bVar25 = 0x6666665 < uVar5;
    bVar24 = uVar5 == 0x6666666;
    if (uVar5 < 0x6666667) {
      bVar25 = param_5 <= (undefined4 *)(param_3 * 0xc);
      bVar24 = (undefined4 *)(param_3 * 0xc) == param_5;
    }
    if (!bVar25 || bVar24) {
      uVar18 = imp_malloc(0x540);
      puVar10 = (undefined4 *)imp_malloc(param_3 << 3);
      thunk_bQdAhuXqIGgcQUVkZWGCB(param_2,param_3,param_4,*param_1);
      uVar7 = param_1[1];
      *param_6 = param_3 << 1;
      thunk_bQdAhuXqIGgcQUVkZWGCB(param_4,param_3 << 1,puVar10,uVar7);
      uVar6 = *param_6;
      uVar7 = 0;
      *param_6 = uVar6 << 1;
      uVar5 = 0;
      if (uVar6 << 1 != 0) {
        uVar5 = 0;
        puStack_30 = puVar10;
        do {
          thunk_mLfS_AxZdGhTckYoQICTuKLCQozofB(puVar10,param_4,param_1[2],uVar18);
          uVar5 = uVar5 + 0xa0;
          puVar10 = puVar10 + 0x50;
          param_4 = param_4 + 0x3c0;
        } while (uVar5 < *param_6);
        uVar5 = *param_6 * 3;
        puVar10 = puStack_30;
      }
      *param_6 = uVar5;
      imp_free(uVar18);
LAB_71b1b2f0:
      imp_free(puVar10);
      return uVar7;
    }
    break;
  case 6:
    uVar7 = 0xffffffff;
    puStack_34 = (undefined4 *)(param_3 * -0x33333333 >> 5 | param_3 * 0x68000000);
    bVar25 = (undefined4 *)0x1999998 < puStack_34;
    bVar24 = puStack_34 == (undefined4 *)0x1999999;
    if (puStack_34 < (undefined4 *)0x199999a) {
      unaff_r9 = (undefined4 *)(param_3 * 3);
      puStack_34 = (undefined4 *)((uint)unaff_r9 >> 1);
      bVar25 = param_5 <= puStack_34;
      bVar24 = puStack_34 == param_5;
      iStack_38 = param_4;
    }
    if (!bVar25 || bVar24) {
      puStack_30 = (undefined4 *)imp_malloc((int)unaff_r9 << 1);
      puVar10 = (undefined4 *)imp_malloc(0x540);
      if (param_3 != 0) {
        uVar5 = 0;
        puVar11 = puStack_30;
        do {
          thunk_mLfS_AxZdGhTckYoQICTuKLCQozofB(param_2,puVar11,*param_1,puVar10);
          uVar5 = uVar5 + 0xa0;
          param_2 = param_2 + 0xa0;
          puVar11 = puVar11 + 0xf0;
        } while (uVar5 < param_3);
      }
      puVar11 = puStack_30;
      thunk_yyxIsXIaqMoPzRDYYMMdOKS(puStack_30,unaff_r9,iStack_38,param_1[1]);
      *param_6 = (uint)puStack_34;
      imp_free(puVar11);
      goto LAB_71b1b798;
    }
    break;
  case 7:
    uVar7 = 0xffffffff;
    if (((param_3 * -0x33333333 >> 4 | param_3 * -0x30000000) < 0x3333334) &&
       ((undefined4 *)(param_3 * 0xb >> 1) <= param_5)) {
      puStack_34 = (undefined4 *)imp_malloc(param_3 << 2);
      puStack_30 = param_1;
      thunk_bQdAhuXqIGgcQUVkZWGCB(param_2,param_3,puStack_34,*param_1);
      uVar7 = imp_malloc(0x188);
      if (param_3 * 2 != 0) {
        uVar6 = 0;
        uVar5 = 0;
        puVar10 = puStack_34;
        do {
          thunk_KXQIoVQDBMhHnVpnxMVmEisbAUKzG(puVar10,param_4 + (uVar6 >> 1),puStack_30[1],uVar7);
          uVar5 = uVar5 + 0x50;
          puVar10 = puVar10 + 0x28;
          uVar6 = uVar6 + 0x370;
        } while (uVar5 < param_3 * 2);
      }
      *param_6 = param_3 * 0x16 >> 2;
      imp_free(uVar7);
      puVar10 = puStack_34;
      goto LAB_71b1b798;
    }
    break;
  case 8:
    if (0x3333333 < (param_3 * -0x33333333 >> 4 | param_3 * -0x30000000)) {
      return 0xffffffff;
    }
    if (param_5 < (undefined4 *)(param_3 * 0xb >> 2)) {
      return 0xffffffff;
    }
    puStack_30 = (undefined4 *)(param_3 * 0xb >> 2);
    puVar10 = (undefined4 *)imp_malloc(0x188);
    if (param_3 != 0) {
      uVar6 = 0;
      uVar5 = 0;
      do {
        thunk_KXQIoVQDBMhHnVpnxMVmEisbAUKzG(param_2,param_4 + (uVar6 >> 1),*param_1,puVar10);
        uVar5 = uVar5 + 0x50;
        param_2 = param_2 + 0x50;
        uVar6 = uVar6 + 0x370;
      } while (uVar5 < param_3);
    }
    goto LAB_71b1b6cc;
  case 9:
    if (0x1999999 < (param_3 * -0x33333333 >> 5 | param_3 * 0x68000000)) {
      return 0xffffffff;
    }
    if (param_5 < (undefined4 *)(param_3 * 0xb >> 3)) {
      return 0xffffffff;
    }
    puStack_30 = (undefined4 *)(param_3 * 0xb >> 3);
    puVar10 = (undefined4 *)imp_malloc(0x160);
    if (param_3 != 0) {
      uVar6 = 0;
      uVar5 = 0;
      do {
        thunk_uvzSlf_VnzVSVkNtMWLFFFJhoymyAR(param_2,param_4 + (uVar6 >> 2),*param_1,puVar10);
        uVar5 = uVar5 + 0xa0;
        param_2 = param_2 + 0xa0;
        uVar6 = uVar6 + 0x6e0;
      } while (uVar5 < param_3);
    }
LAB_71b1b6cc:
    *param_6 = (uint)puStack_30;
    goto LAB_71b1b798;
  case 10:
    uVar7 = 0xffffffff;
    if ((param_3 * 0x586fb587 >> 1 | param_3 * -0x80000000) < 0x253c826) {
      if ((undefined4 *)((param_3 * 0x10) / 0xb) <= param_5) {
        puStack_34 = (undefined4 *)((param_3 * 0x10) / 0xb);
        uVar7 = imp_malloc(0x1a0,param_3 * -0x5d1745d0);
        puStack_30 = (undefined4 *)imp_malloc(param_3 << 2);
        thunk_bQdAhuXqIGgcQUVkZWGCB(param_2,param_3,puStack_30,*param_1);
        if (param_3 << 1 != 0) {
          uVar5 = 0;
          puVar10 = puStack_30;
          do {
            thunk_BznSrEXxHSpIxiysgrDhYuAWmOZQab
                      (puVar10,param_4 + (uVar5 / 0xdc) * 0x140,param_1[1],uVar7);
            uVar5 = uVar5 + 0xdc;
            puVar10 = puVar10 + 0x6e;
          } while (uVar5 < param_3 << 1);
        }
        *param_6 = (uint)puStack_34;
        imp_free(uVar7);
        puVar10 = puStack_30;
        goto LAB_71b1b798;
      }
    }
    break;
  case 0xb:
    uVar7 = 0xffffffff;
    if ((param_3 * 0x586fb587 >> 1 | param_3 * -0x80000000) < 0x253c826) {
      if ((undefined4 *)((param_3 * 0x20) / 0xb) <= param_5) {
        puStack_30 = (undefined4 *)((param_3 * 0x20) / 0xb);
        iStack_38 = param_4;
        uVar7 = imp_malloc(0x1a0,param_3 * 0x45d17460);
        puVar10 = (undefined4 *)imp_malloc(param_3 << 2);
        thunk_bQdAhuXqIGgcQUVkZWGCB(param_2,param_3,iStack_38,*param_1);
        if (param_3 << 1 != 0) {
          uVar5 = 0;
          iVar8 = iStack_38;
          do {
            thunk_BznSrEXxHSpIxiysgrDhYuAWmOZQab
                      (iVar8,puVar10 + (uVar5 / 0xdc) * 0x50,param_1[1],uVar7);
            uVar5 = uVar5 + 0xdc;
            iVar8 = iVar8 + 0x1b8;
          } while (uVar5 < param_3 << 1);
        }
        thunk_bQdAhuXqIGgcQUVkZWGCB(puVar10,(param_3 << 4) / 0xb,iStack_38,param_1[2]);
        *param_6 = (uint)puStack_30;
        imp_free(uVar7);
        goto LAB_71b1b798;
      }
    }
    break;
  case 0xc:
    uVar7 = 0xffffffff;
    if ((undefined4 *)(param_3 >> 1) <= param_5) {
      uVar5 = param_3 >> 1;
      thunk_yyxIsXIaqMoPzRDYYMMdOKS(param_2,param_3,param_4,*param_1);
      goto LAB_71b1b068;
    }
    break;
  case 0xd:
    if (0x888888 < (param_3 * -0x11111111 >> 5 | param_3 * 0x78000000)) {
      return 0xffffffff;
    }
    if (param_5 < (undefined4 *)(param_3 / 3)) {
      return 0xffffffff;
    }
    puStack_34 = (undefined4 *)(param_3 / 3);
    puStack_30 = param_1;
    puVar10 = (undefined4 *)imp_malloc(0x7c0,param_3 * -0x55555555);
    puVar2 = puStack_30;
    puVar11 = puStack_34;
    if (param_3 != 0) {
      uVar5 = 0;
      do {
        thunk_iiXeJIKqgTdTPQpMwpOCJHGLcrwddP
                  (param_2,param_4 + ((uint)((ulonglong)uVar5 * 0xaaaaaaab >> 0x20) & 0xfffffffe),
                   *puVar2,puVar10);
        uVar5 = uVar5 + 0x1e0;
        param_2 = param_2 + 0x1e0;
        puVar11 = puStack_34;
      } while (uVar5 < param_3);
    }
    goto LAB_71b1b790;
  case 0xe:
    uVar7 = 0xffffffff;
    if ((undefined4 *)(param_3 >> 2) <= param_5) {
      puVar10 = (undefined4 *)imp_malloc(param_3 & 0x7fffffff);
      thunk_yyxIsXIaqMoPzRDYYMMdOKS(param_2,param_3,puVar10,*param_1);
      thunk_yyxIsXIaqMoPzRDYYMMdOKS(puVar10,param_3 >> 1,param_4,param_1[1]);
      *param_6 = param_3 >> 2;
      goto LAB_71b1b798;
    }
    break;
  case 0xf:
    uVar7 = 0xffffffff;
    if (((param_3 * -0x11111111 >> 5 | param_3 * 0x78000000) < 0x888889) &&
       (puStack_34 = (undefined4 *)((ulonglong)param_3 * 0xaaaaaaab >> 0x20),
       (undefined4 *)(param_3 / 6) <= param_5)) {
      iStack_38 = param_4;
      puStack_30 = param_1;
      uVar7 = imp_malloc(0x7c0);
      puVar11 = (undefined4 *)imp_malloc((param_3 << 1) / 3);
      puVar10 = puStack_30;
      if (param_3 != 0) {
        uVar5 = 0;
        do {
          thunk_iiXeJIKqgTdTPQpMwpOCJHGLcrwddP
                    (param_2,(int)puVar11 +
                             ((uint)((ulonglong)uVar5 * 0xaaaaaaab >> 0x20) & 0xfffffffe),*puVar10,
                     uVar7);
          uVar5 = uVar5 + 0x1e0;
          param_2 = param_2 + 0x1e0;
        } while (uVar5 < param_3);
      }
      uVar5 = (uint)puStack_34 >> 1;
      *param_6 = uVar5;
      imp_free(uVar7);
      thunk_yyxIsXIaqMoPzRDYYMMdOKS(puVar11,uVar5,iStack_38,puVar10[1]);
LAB_71b1aeec:
      imp_free(puVar11);
      *param_6 = *param_6 >> 1;
      return 0;
    }
    break;
  case 0x10:
    uVar7 = 0xffffffff;
    if (((param_3 * -0x11111111 >> 5 | param_3 * 0x78000000) < 0x888889) &&
       (uStack_3c = (uint)((ulonglong)param_3 * 0xaaaaaaab >> 0x20),
       (undefined4 *)(param_3 / 0xc) <= param_5)) {
      iStack_38 = param_4;
      puStack_30 = param_1;
      uVar7 = imp_malloc(0x7c0);
      iVar8 = imp_malloc((param_3 << 1) / 3);
      puStack_34 = (undefined4 *)imp_malloc((param_3 << 1) / 6);
      puVar10 = puStack_30;
      if (param_3 != 0) {
        uVar5 = 0;
        do {
          thunk_iiXeJIKqgTdTPQpMwpOCJHGLcrwddP
                    (param_2,iVar8 + ((uint)((ulonglong)uVar5 * 0xaaaaaaab >> 0x20) & 0xfffffffe),
                     *puVar10,uVar7);
          uVar5 = uVar5 + 0x1e0;
          param_2 = param_2 + 0x1e0;
        } while (uVar5 < param_3);
      }
      uVar5 = uStack_3c >> 1;
      *param_6 = uVar5;
      imp_free(uVar7);
      puVar11 = puStack_34;
      thunk_yyxIsXIaqMoPzRDYYMMdOKS(iVar8,uVar5,puStack_34,puVar10[1]);
      uVar5 = *param_6;
      *param_6 = uVar5 >> 1;
      imp_free(iVar8);
      thunk_yyxIsXIaqMoPzRDYYMMdOKS(puVar11,uVar5 >> 1,iStack_38,puVar10[2]);
      goto LAB_71b1aeec;
    }
    break;
  case 0x11:
    uVar5 = param_3 * 2;
    uVar7 = 0xffffffff;
    if (param_5 < (undefined4 *)(uVar5 / 3)) {
      return 0xffffffff;
    }
    iStack_38 = param_4;
    puVar10 = (undefined4 *)imp_malloc(param_3 << 2);
    thunk_bQdAhuXqIGgcQUVkZWGCB(param_2,param_3,puVar10,*param_1);
    if (0x888888 < (param_3 * -0x22222222 >> 5 | param_3 * -0x10000000)) goto LAB_71b1b2f0;
    puStack_34 = (undefined4 *)(uVar5 / 3);
    puStack_30 = puVar10;
    puVar10 = (undefined4 *)imp_malloc(0x7c0);
    iVar8 = iStack_38;
    if (uVar5 != 0) {
      uVar6 = 0;
      puVar11 = puStack_30;
      do {
        thunk_iiXeJIKqgTdTPQpMwpOCJHGLcrwddP
                  (puVar11,iVar8 + ((uint)((ulonglong)uVar6 * 0xaaaaaaab >> 0x20) & 0xfffffffe),
                   param_1[1],puVar10);
        uVar6 = uVar6 + 0x1e0;
        puVar11 = puVar11 + 0xf0;
      } while (uVar6 < uVar5);
    }
    *param_6 = (uint)puStack_34;
    puVar11 = puStack_30;
    goto LAB_71b1b550;
  case 0x12:
    if (0x129e412 < (param_3 * 0x586fb587 >> 2 | param_3 * -0x40000000)) {
      return 0xffffffff;
    }
    if (param_5 < (undefined4 *)((param_3 << 1) / 0xb)) {
      return 0xffffffff;
    }
    puStack_30 = (undefined4 *)((ulonglong)(param_3 << 2) * 0xba2e8ba3 >> 0x20);
    puVar10 = (undefined4 *)((param_3 << 2) / 0xb);
    iStack_38 = param_4;
    puVar11 = (undefined4 *)imp_malloc(0x1f8);
    puStack_34 = puVar10;
    puVar10 = (undefined4 *)imp_malloc((int)puVar10 << 1);
    if (param_3 != 0) {
      uVar6 = 0;
      uVar5 = 0;
      do {
        thunk_xbYV_CVYeF_pQyODambzSGWieoZTu
                  (param_2,(int)puVar10 +
                           ((uint)((ulonglong)uVar6 * 0xba2e8ba3 >> 0x22) & 0xfffffffe),*param_1,
                   puVar11);
        uVar5 = uVar5 + 0xdc;
        uVar6 = uVar6 + 0x370;
        param_2 = param_2 + 0xdc;
      } while (uVar5 < param_3);
    }
    thunk_yyxIsXIaqMoPzRDYYMMdOKS(puVar10,puStack_34,iStack_38,param_1[1]);
    *param_6 = (uint)puStack_30 >> 4;
LAB_71b1b550:
    imp_free(puVar11);
    goto LAB_71b1b798;
  case 0x13:
    if (0x129e412 < (param_3 * 0x586fb587 >> 2 | param_3 * -0x40000000)) {
      return 0xffffffff;
    }
    if (param_5 < (undefined4 *)((param_3 * 4) / 0xb)) {
      return 0xffffffff;
    }
    puStack_30 = (undefined4 *)((param_3 * 4) / 0xb);
    puVar10 = (undefined4 *)imp_malloc(0x1f8,param_3 * -0x1745d174);
    puVar11 = puStack_30;
    if (param_3 != 0) {
      uVar5 = 0;
      uVar6 = 0;
      do {
        thunk_xbYV_CVYeF_pQyODambzSGWieoZTu
                  (param_2,param_4 + ((uint)((ulonglong)uVar5 * 0xba2e8ba3 >> 0x22) & 0xfffffffe),
                   *param_1,puVar10);
        uVar6 = uVar6 + 0xdc;
        uVar5 = uVar5 + 0x370;
        param_2 = param_2 + 0xdc;
        puVar11 = puStack_30;
      } while (uVar6 < param_3);
    }
    goto LAB_71b1b790;
  case 0x14:
    if (0x129e412 < (param_3 * 0x586fb587 >> 2 | param_3 * -0x40000000)) {
      return 0xffffffff;
    }
    if (param_5 < (undefined4 *)((param_3 * 8) / 0xb)) {
      return 0xffffffff;
    }
    puStack_30 = (undefined4 *)((param_3 * 8) / 0xb);
    puVar10 = (undefined4 *)imp_malloc(0x1a0,param_3 * -0x2e8ba2e8);
    puVar11 = puStack_30;
    if (param_3 != 0) {
      uVar5 = 0;
      uVar6 = 0;
      do {
        thunk_BznSrEXxHSpIxiysgrDhYuAWmOZQab
                  (param_2,param_4 + ((uint)((ulonglong)uVar5 * 0xba2e8ba3 >> 0x22) & 0xfffffffe),
                   *param_1,puVar10);
        uVar6 = uVar6 + 0xdc;
        uVar5 = uVar5 + 0x6e0;
        param_2 = param_2 + 0xdc;
        puVar11 = puStack_30;
      } while (uVar6 < param_3);
    }
LAB_71b1b790:
    *param_6 = (uint)puVar11;
LAB_71b1b798:
    imp_free(puVar10);
    return 0;
  }
  return uVar7;
}


// =========================================================================
// Function: iiXeJIKqgTdTPQpMwpOCJHGLcrwddP
// Entry: 0x71b1cbb0 | Size: 128 bytes
// =========================================================================

void iiXeJIKqgTdTPQpMwpOCJHGLcrwddP(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  thunk_AMXYIaLSFuBPMctZvbScSjcbE(param_1,0x1e0,param_4 + 0x40,param_3);
  uVar1 = *(undefined8 *)(param_3 + 0x48);
  uVar2 = *(undefined8 *)(param_3 + 0x50);
  uVar3 = *(undefined8 *)(param_3 + 0x58);
  *(undefined8 *)(param_4 + 0x20) = *(undefined8 *)(param_3 + 0x40);
  *(undefined8 *)(param_4 + 0x28) = uVar1;
  *(undefined8 *)(param_4 + 0x30) = uVar2;
  *(undefined8 *)(param_4 + 0x38) = uVar3;
  uVar1 = *(undefined8 *)(param_4 + 0x7a0);
  uVar2 = *(undefined8 *)(param_4 + 0x7a8);
  uVar3 = *(undefined8 *)(param_4 + 0x7b8);
  *(undefined8 *)(param_3 + 0x50) = *(undefined8 *)(param_4 + 0x7b0);
  *(undefined8 *)(param_3 + 0x58) = uVar3;
  *(undefined8 *)(param_3 + 0x40) = uVar1;
  *(undefined8 *)(param_3 + 0x48) = uVar2;
  thunk_BKzV_YbkCjUYbjlaChMaYeGslhdCNj((undefined8 *)(param_4 + 0x20),param_4,0xa0);
  thunk_UJNyIeksikIOgSa_AoOlvGAyeoA(param_4,0x140,param_2,param_3 + 0x60);
  return;
}


// =========================================================================
// Function: _z_liPzexvVp_PmwOijcLxzMxlaYlqTGSaS
// Entry: 0x71b1cc30 | Size: 40 bytes
// =========================================================================

void _z_liPzexvVp_PmwOijcLxzMxlaYlqTGSaS(undefined4 *param_1)

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
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar3;
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
  param_1[0x1c] = 0;
  param_1[0x1d] = uVar1;
  param_1[0x1e] = uVar2;
  param_1[0x1f] = uVar3;
  return;
}


// =========================================================================
// Function: mLfS_AxZdGhTckYoQICTuKLCQozofB
// Entry: 0x71b1cc58 | Size: 128 bytes
// =========================================================================

void mLfS_AxZdGhTckYoQICTuKLCQozofB(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  thunk_BZGWgjqRuuJdqDQARyGygZhFE(param_1,0xa0,param_4 + 0x40,param_3);
  uVar1 = *(undefined8 *)(param_3 + 0x28);
  uVar2 = *(undefined8 *)(param_3 + 0x30);
  uVar3 = *(undefined8 *)(param_3 + 0x38);
  *(undefined8 *)(param_4 + 0x20) = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(param_4 + 0x28) = uVar1;
  *(undefined8 *)(param_4 + 0x30) = uVar2;
  *(undefined8 *)(param_4 + 0x38) = uVar3;
  uVar1 = *(undefined8 *)(param_4 + 0x520);
  uVar2 = *(undefined8 *)(param_4 + 0x528);
  uVar3 = *(undefined8 *)(param_4 + 0x538);
  *(undefined8 *)(param_3 + 0x30) = *(undefined8 *)(param_4 + 0x530);
  *(undefined8 *)(param_3 + 0x38) = uVar3;
  *(undefined8 *)(param_3 + 0x20) = uVar1;
  *(undefined8 *)(param_3 + 0x28) = uVar2;
  thunk_kixGxfnoKnNzXSDdGy_qkxRVagvSCU((undefined8 *)(param_4 + 0x20),param_4,0x50);
  thunk_zPqQoUvcAlmbhdoUPfLiPAzxM(param_4,0xf0,param_2,param_3 + 0x40);
  return;
}


// =========================================================================
// Function: twdSDcHElFyGbReLOCjwKTtqksHyZwPYvyc
// Entry: 0x71b1ccd8 | Size: 32 bytes
// =========================================================================

void twdSDcHElFyGbReLOCjwKTtqksHyZwPYvyc(undefined4 *param_1)

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
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar3;
  param_1[0x10] = 0;
  param_1[0x11] = uVar1;
  param_1[0x12] = uVar2;
  param_1[0x13] = uVar3;
  param_1[0x14] = 0;
  param_1[0x15] = uVar1;
  param_1[0x16] = uVar2;
  param_1[0x17] = uVar3;
  return;
}


// =========================================================================
// Function: u_oWWwFqzhySbTdoEMkTkMjMBEqLK
// Entry: 0x71b1ccf8 | Size: 152 bytes
// =========================================================================

void u_oWWwFqzhySbTdoEMkTkMjMBEqLK(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  thunk_teqzdtlSXFTSiTwvBVNSZeJvmYA(param_1,0x1e0,param_4 + 0x400,param_3);
  thunk_WdFvzTEUwjFpSNR_fnKDDtX(param_4 + 0x400,0xf0,param_4 + 0x40,param_3 + 0x20);
  uVar1 = *(undefined8 *)(param_3 + 0x68);
  uVar2 = *(undefined8 *)(param_3 + 0x70);
  uVar3 = *(undefined8 *)(param_3 + 0x78);
  *(undefined8 *)(param_4 + 0x20) = *(undefined8 *)(param_3 + 0x60);
  *(undefined8 *)(param_4 + 0x28) = uVar1;
  *(undefined8 *)(param_4 + 0x30) = uVar2;
  *(undefined8 *)(param_4 + 0x38) = uVar3;
  uVar1 = *(undefined8 *)(param_4 + 0x3e0);
  uVar2 = *(undefined8 *)(param_4 + 1000);
  uVar3 = *(undefined8 *)(param_4 + 0x3f8);
  *(undefined8 *)(param_3 + 0x70) = *(undefined8 *)(param_4 + 0x3f0);
  *(undefined8 *)(param_3 + 0x78) = uVar3;
  *(undefined8 *)(param_3 + 0x60) = uVar1;
  *(undefined8 *)(param_3 + 0x68) = uVar2;
  thunk_BKzV_YbkCjUYbjlaChMaYeGslhdCNj((undefined8 *)(param_4 + 0x20),param_4,0x50);
  thunk_UJNyIeksikIOgSa_AoOlvGAyeoA(param_4,0xa0,param_2,param_3 + 0x80);
  return;
}


// =========================================================================
// Function: CLUngYjaoGveSggqk_fjVgwDyPwBXqtPI_
// Entry: 0x71b1cd90 | Size: 20 bytes
// =========================================================================

void CLUngYjaoGveSggqk_fjVgwDyPwBXqtPI_(undefined4 param_1)

{
  imp___aeabi_memclr4(param_1,0xa0);
  return;
}


// =========================================================================
// Function: qMGxulfObSBPfrTgpMEEdRQKKznkN
// Entry: 0x71b1cda4 | Size: 156 bytes
// =========================================================================

void qMGxulfObSBPfrTgpMEEdRQKKznkN(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  thunk_BZGWgjqRuuJdqDQARyGygZhFE(param_1,0x50,param_4 + 0x420,param_3);
  uVar1 = *(undefined8 *)(param_3 + 0x28);
  uVar2 = *(undefined8 *)(param_3 + 0x30);
  uVar3 = *(undefined8 *)(param_3 + 0x38);
  *(undefined8 *)(param_4 + 0x400) = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(param_4 + 0x408) = uVar1;
  *(undefined8 *)(param_4 + 0x410) = uVar2;
  *(undefined8 *)(param_4 + 0x418) = uVar3;
  uVar1 = *(undefined8 *)(param_4 + 0x680);
  uVar2 = *(undefined8 *)(param_4 + 0x688);
  uVar3 = *(undefined8 *)(param_4 + 0x698);
  *(undefined8 *)(param_3 + 0x30) = *(undefined8 *)(param_4 + 0x690);
  *(undefined8 *)(param_3 + 0x38) = uVar3;
  *(undefined8 *)(param_3 + 0x20) = uVar1;
  *(undefined8 *)(param_3 + 0x28) = uVar2;
  thunk_kixGxfnoKnNzXSDdGy_qkxRVagvSCU((undefined8 *)(param_4 + 0x400),param_4 + 0x3c0,0x28);
  thunk_lLOWjPJiIag_wCArUrQsFbl(param_4 + 0x3c0,0x78,param_4,param_3 + 0x40);
  thunk_zPqQoUvcAlmbhdoUPfLiPAzxM(param_4,0xf0,param_2,param_3 + 0x60);
  return;
}


// =========================================================================
// Function: aXGekKRFbQyqhIzVBWjWWayKnwCBWhpXAA
// Entry: 0x71b1ce40 | Size: 40 bytes
// =========================================================================

void aXGekKRFbQyqhIzVBWjWWayKnwCBWhpXAA(undefined4 *param_1)

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
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar3;
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
  param_1[0x1c] = 0;
  param_1[0x1d] = uVar1;
  param_1[0x1e] = uVar2;
  param_1[0x1f] = uVar3;
  return;
}


// =========================================================================
// Function: UJNyIeksikIOgSa_AoOlvGAyeoA
// Entry: 0x71b1d024 | Size: 472 bytes
// =========================================================================

void UJNyIeksikIOgSa_AoOlvGAyeoA(undefined4 *param_1,int param_2,undefined2 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  undefined2 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined2 **ppuVar16;
  int iVar17;
  uint uVar18;
  undefined1 uVar19;
  undefined4 *puVar20;
  undefined2 *puVar21;
  longlong lVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 in_q10 [16];
  undefined1 auVar25 [16];
  undefined1 in_q11 [16];
  undefined1 in_q12 [16];
  undefined1 in_q13 [16];
  undefined1 auVar26 [16];
  undefined2 *puStack_28;
  
  ppuVar16 = &puStack_28;
  puStack_28 = param_3;
  uVar14 = param_2 >> 1;
  if (0 < (int)uVar14) {
    uVar8 = 0;
    do {
      iVar17 = param_1[uVar8 * 2];
      iVar10 = param_4[2];
      iVar13 = *param_4;
      *param_4 = iVar17;
      iVar13 = ((iVar17 - param_4[1]) + 0x2000 >> 0xe) * 0xbea + iVar13;
      iVar17 = iVar13 - iVar10;
      iVar17 = ((iVar17 >> 0xe) - (iVar17 >> 0x1f)) * 0x2498 + param_4[1];
      param_4[1] = iVar13;
      param_4[2] = iVar17;
      iVar17 = iVar17 - param_4[3];
      iVar10 = ((iVar17 >> 0xe) - (iVar17 >> 0x1f)) * 0x3ad7 + iVar10;
      param_4[3] = iVar10;
      param_1[uVar8 * 2] = iVar10 >> 1;
      uVar8 = uVar8 + 1;
    } while (uVar14 != uVar8);
    if (0 < (int)uVar14) {
      uVar8 = 0;
      do {
        iVar10 = param_1[uVar8 * 2 + 1];
        iVar13 = param_4[4];
        param_4[4] = iVar10;
        iVar13 = ((iVar10 - param_4[5]) + 0x2000 >> 0xe) * 0x335 + iVar13;
        iVar10 = iVar13 - param_4[6];
        iVar10 = ((iVar10 >> 0xe) - (iVar10 >> 0x1f)) * 0x17de + param_4[5];
        iVar17 = iVar10 - param_4[7];
        iVar17 = ((iVar17 >> 0xe) - (iVar17 >> 0x1f)) * 0x305e + param_4[6];
        param_4[5] = iVar13;
        param_4[6] = iVar10;
        param_4[7] = iVar17;
        param_1[uVar8 * 2 + 1] = iVar17 >> 1;
        uVar8 = uVar8 + 1;
      } while (uVar14 != uVar8);
      if (0 < (int)uVar14) {
        iVar13 = 0;
        if (6 < uVar14) {
          auVar23._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
          auVar23._0_8_ = 0x7fff00007fff;
          auVar23 = *(undefined1 (*) [16])(auVar23 << 0x40 | auVar23);
          uVar15 = (uVar14 - 1 >> 1) + 1;
          auVar24._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
          auVar24._0_8_ = 0x7fff00007fff;
          auVar24 = ~*(undefined1 (*) [16])(auVar24 << 0x40 | auVar24);
          uVar18 = uVar15 & 0xfffffffc;
          iVar13 = uVar18 << 1;
          puVar11 = param_1;
          uVar8 = uVar18;
          do {
            puVar1 = (undefined4 *)0x390;
            puVar2 = (undefined4 *)0x3a0;
            puVar3 = (undefined4 *)0x3b0;
            puVar4 = (undefined4 *)0x3c0;
            lVar22 = 2;
            puVar20 = puVar11;
            while( true ) {
              *puVar1 = *puVar20;
              puVar20 = puVar20 + 1;
              *puVar2 = *puVar20;
              puVar20 = puVar20 + 1;
              *puVar3 = *puVar20;
              puVar20 = puVar20 + 1;
              *puVar4 = *puVar20;
              puVar20 = puVar20 + 1;
              lVar22 = lVar22 + -1;
              if (lVar22 == 0) break;
              puVar1 = puVar1 + 1;
              puVar2 = puVar2 + 1;
              puVar3 = puVar3 + 1;
              puVar4 = puVar4 + 1;
            }
            puVar11 = puVar11 + 8;
            uVar18 = uVar18 - 4;
            uVar19 = uVar18 == 0;
            puVar1 = (undefined4 *)0x398;
            puVar2 = (undefined4 *)0x3a8;
            puVar3 = (undefined4 *)0x3b8;
            puVar4 = (undefined4 *)0x3c8;
            lVar22 = 2;
            puVar20 = puVar11;
            while( true ) {
              *puVar1 = *puVar20;
              puVar20 = puVar20 + 1;
              *puVar2 = *puVar20;
              puVar20 = puVar20 + 1;
              *puVar3 = *puVar20;
              puVar20 = puVar20 + 1;
              *puVar4 = *puVar20;
              puVar20 = puVar20 + 1;
              lVar22 = lVar22 + -1;
              if (lVar22 == 0) break;
              puVar1 = puVar1 + 1;
              puVar2 = puVar2 + 1;
              puVar3 = puVar3 + 1;
              puVar4 = puVar4 + 1;
            }
            puVar11 = puVar11 + 8;
            auVar25 = VectorAdd(in_q11,in_q10,4);
            auVar26 = VectorAdd(in_q13,in_q12,4);
            auVar25 = VectorSignedFixedToFloat(auVar25,0xf);
            auVar26 = VectorSignedFixedToFloat(auVar26,0xf);
            auVar25 = VectorMin(auVar25,auVar23,4,0);
            auVar26 = VectorMin(auVar26,auVar23,4,0);
            in_q10 = VectorMax(auVar25,auVar24,4,0);
            auVar25 = VectorMax(auVar26,auVar24,4,0);
            in_q11._8_8_ = VectorCopyNarrow(auVar25,4);
            in_q11._0_8_ = VectorCopyNarrow(in_q10,4);
            puVar9 = (undefined2 *)0x3b0;
            puVar5 = (undefined2 *)0x3b8;
            lVar22 = 4;
            puVar21 = param_3;
            while( true ) {
              *puVar21 = *puVar9;
              puVar21[1] = *puVar5;
              puVar21 = puVar21 + 2;
              lVar22 = lVar22 + -1;
              if (lVar22 == 0) break;
              puVar9 = puVar9 + 1;
              puVar5 = puVar5 + 1;
            }
            param_3 = param_3 + 8;
          } while (!(bool)uVar19);
          if (uVar15 == uVar8) {
            return;
          }
        }
        piVar7 = param_1 + iVar13 * 2 + 2;
        puVar9 = (undefined2 *)((int)*ppuVar16 + iVar13 * 2 + 2);
        do {
          iVar13 = iVar13 + 2;
          iVar12 = *piVar7;
          iVar17 = piVar7[1];
          iVar10 = piVar7[-1] + piVar7[-2] >> 0xf;
          uVar6 = SignedSaturate(iVar10,0x10);
          SignedDoesSaturate(iVar10,0x10);
          puVar9[-1] = (short)uVar6;
          piVar7 = piVar7 + 4;
          iVar10 = iVar17 + iVar12 >> 0xf;
          uVar6 = SignedSaturate(iVar10,0x10);
          SignedDoesSaturate(iVar10,0x10);
          *puVar9 = (short)uVar6;
          puVar9 = puVar9 + 2;
        } while (iVar13 < (int)uVar14);
      }
    }
  }
  return;
}


// =========================================================================
// Function: teqzdtlSXFTSiTwvBVNSZeJvmYA
// Entry: 0x71b1d1fc | Size: 316 bytes
// =========================================================================

void teqzdtlSXFTSiTwvBVNSZeJvmYA(short *param_1,int param_2,int *param_3,uint *param_4)

{
  uint uVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  param_2 = param_2 >> 1;
  iVar3 = param_2;
  psVar2 = param_1;
  piVar5 = param_3;
  if (0 < param_2) {
    do {
      uVar1 = *param_4;
      uVar8 = param_4[1];
      iVar3 = iVar3 + -1;
      uVar6 = (int)*psVar2 << 0xf | 0x4000;
      uVar7 = param_4[2];
      *param_4 = uVar6;
      uVar1 = ((int)((uVar6 - uVar8) + 0x2000) >> 0xe) * 0xbea + uVar1;
      param_4[1] = uVar1;
      iVar4 = uVar1 - uVar7;
      uVar8 = ((iVar4 >> 0xe) - (iVar4 >> 0x1f)) * 0x2498 + uVar8;
      param_4[2] = uVar8;
      iVar4 = uVar8 - param_4[3];
      uVar7 = ((iVar4 >> 0xe) - (iVar4 >> 0x1f)) * 0x3ad7 + uVar7;
      param_4[3] = uVar7;
      *piVar5 = (int)uVar7 >> 1;
      psVar2 = psVar2 + 2;
      piVar5 = piVar5 + 1;
    } while (iVar3 != 0);
    if (0 < param_2) {
      psVar2 = param_1 + 1;
      do {
        uVar8 = (int)*psVar2 << 0xf | 0x4000;
        uVar7 = ((int)((uVar8 - param_4[5]) + 0x2000) >> 0xe) * 0x335 + param_4[4];
        iVar3 = uVar7 - param_4[6];
        uVar6 = ((iVar3 >> 0xe) - (iVar3 >> 0x1f)) * 0x17de + param_4[5];
        iVar3 = uVar6 - param_4[7];
        uVar1 = ((iVar3 >> 0xe) - (iVar3 >> 0x1f)) * 0x305e + param_4[6];
        param_4[4] = uVar8;
        param_4[5] = uVar7;
        param_4[6] = uVar6;
        param_4[7] = uVar1;
        *param_3 = *param_3 + ((int)uVar1 >> 1);
        param_2 = param_2 + -1;
        psVar2 = psVar2 + 2;
        param_3 = param_3 + 1;
      } while (param_2 != 0);
    }
    return;
  }
  return;
}


// =========================================================================
// Function: BZGWgjqRuuJdqDQARyGygZhFE
// Entry: 0x71b1d338 | Size: 292 bytes
// =========================================================================

void BZGWgjqRuuJdqDQARyGygZhFE(short *param_1,int param_2,int *param_3,uint *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  short *psVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar3 = param_2;
  psVar4 = param_1;
  piVar2 = param_3;
  if (0 < param_2) {
    do {
      uVar7 = param_4[5];
      iVar3 = iVar3 + -1;
      uVar6 = param_4[4];
      uVar8 = (int)*psVar4 << 0xf | 0x4000;
      uVar5 = param_4[6];
      param_4[4] = uVar8;
      uVar6 = ((int)((uVar8 - uVar7) + 0x2000) >> 0xe) * 0x335 + uVar6;
      param_4[5] = uVar6;
      iVar1 = uVar6 - uVar5;
      uVar7 = ((iVar1 >> 0xe) - (iVar1 >> 0x1f)) * 0x17de + uVar7;
      param_4[6] = uVar7;
      iVar1 = uVar7 - param_4[7];
      uVar5 = ((iVar1 >> 0xe) - (iVar1 >> 0x1f)) * 0x305e + uVar5;
      param_4[7] = uVar5;
      *piVar2 = (int)uVar5 >> 0xf;
      psVar4 = psVar4 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar3 != 0);
    if (0 < param_2) {
      piVar2 = param_3 + 1;
      do {
        uVar6 = param_4[2];
        param_2 = param_2 + -1;
        uVar5 = (int)*param_1 << 0xf | 0x4000;
        uVar7 = ((int)((uVar5 - param_4[1]) + 0x2000) >> 0xe) * 0xbea + *param_4;
        iVar3 = uVar7 - uVar6;
        uVar8 = ((iVar3 >> 0xe) - (iVar3 >> 0x1f)) * 0x2498 + param_4[1];
        *param_4 = uVar5;
        param_4[1] = uVar7;
        param_4[2] = uVar8;
        iVar3 = uVar8 - param_4[3];
        uVar6 = ((iVar3 >> 0xe) - (iVar3 >> 0x1f)) * 0x3ad7 + uVar6;
        param_4[3] = uVar6;
        *piVar2 = (int)uVar6 >> 0xf;
        piVar2 = piVar2 + 2;
        param_1 = param_1 + 1;
      } while (param_2 != 0);
    }
    return;
  }
  return;
}


// =========================================================================
// Function: lLOWjPJiIag_wCArUrQsFbl
// Entry: 0x71b1d45c | Size: 268 bytes
// =========================================================================

void lLOWjPJiIag_wCArUrQsFbl(int *param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  piVar2 = param_1;
  piVar3 = param_3;
  iVar4 = param_2;
  if (0 < param_2) {
    do {
      iVar5 = *piVar2;
      iVar4 = iVar4 + -1;
      iVar1 = param_4[4];
      iVar6 = param_4[5];
      iVar7 = param_4[6];
      param_4[4] = iVar5;
      iVar1 = ((iVar5 - iVar6) + 0x2000 >> 0xe) * 0x335 + iVar1;
      param_4[5] = iVar1;
      iVar1 = iVar1 - iVar7;
      iVar6 = ((iVar1 >> 0xe) - (iVar1 >> 0x1f)) * 0x17de + iVar6;
      param_4[6] = iVar6;
      iVar6 = iVar6 - param_4[7];
      iVar7 = ((iVar6 >> 0xe) - (iVar6 >> 0x1f)) * 0x305e + iVar7;
      param_4[7] = iVar7;
      *piVar3 = iVar7;
      piVar2 = piVar2 + 1;
      piVar3 = piVar3 + 2;
    } while (iVar4 != 0);
    if (0 < param_2) {
      piVar2 = param_3 + 1;
      do {
        iVar1 = param_4[1];
        iVar7 = param_4[2];
        param_2 = param_2 + -1;
        iVar4 = ((*param_1 - iVar1) + 0x2000 >> 0xe) * 0xbea + *param_4;
        *param_4 = *param_1;
        param_4[1] = iVar4;
        iVar4 = iVar4 - iVar7;
        iVar1 = ((iVar4 >> 0xe) - (iVar4 >> 0x1f)) * 0x2498 + iVar1;
        param_4[2] = iVar1;
        iVar1 = iVar1 - param_4[3];
        iVar7 = ((iVar1 >> 0xe) - (iVar1 >> 0x1f)) * 0x3ad7 + iVar7;
        param_4[3] = iVar7;
        *piVar2 = iVar7;
        param_1 = param_1 + 1;
        piVar2 = piVar2 + 2;
      } while (param_2 != 0);
    }
    return;
  }
  return;
}


// =========================================================================
// Function: zPqQoUvcAlmbhdoUPfLiPAzxM
// Entry: 0x71b1d568 | Size: 300 bytes
// =========================================================================

void zPqQoUvcAlmbhdoUPfLiPAzxM(int *param_1,int param_2,undefined2 *param_3,int *param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  if (param_2 < 1) {
    return;
  }
  iVar8 = param_4[7];
  piVar2 = param_1;
  iVar4 = param_2;
  iVar5 = param_4[5];
  puVar7 = param_3;
  iVar10 = param_4[4];
  iVar6 = param_4[6];
  do {
    iVar9 = *piVar2;
    iVar4 = iVar4 + -1;
    param_4[4] = iVar9;
    iVar10 = ((iVar9 - iVar5) + 0x2000 >> 0xe) * 0x335 + iVar10;
    param_4[5] = iVar10;
    iVar3 = ((iVar10 - iVar6 >> 0xe) - (iVar10 - iVar6 >> 0x1f)) * 0x17de + iVar5;
    param_4[6] = iVar3;
    iVar8 = ((iVar3 - iVar8 >> 0xe) - (iVar3 - iVar8 >> 0x1f)) * 0x305e + iVar6;
    uVar1 = SignedSaturate(iVar8 >> 0xf,0x10);
    SignedDoesSaturate(iVar8 >> 0xf,0x10);
    *puVar7 = (short)uVar1;
    param_4[7] = iVar8;
    piVar2 = piVar2 + 1;
    iVar5 = iVar10;
    puVar7 = puVar7 + 2;
    iVar10 = iVar9;
    iVar6 = iVar3;
  } while (iVar4 != 0);
  if (0 < param_2) {
    iVar6 = param_4[3];
    iVar4 = *param_4;
    iVar5 = param_4[2];
    iVar10 = param_4[1];
    puVar7 = param_3 + 1;
    do {
      iVar3 = *param_1;
      param_2 = param_2 + -1;
      *param_4 = iVar3;
      iVar8 = ((iVar3 - iVar10) + 0x2000 >> 0xe) * 0xbea + iVar4;
      iVar10 = ((iVar8 - iVar5 >> 0xe) - (iVar8 - iVar5 >> 0x1f)) * 0x2498 + iVar10;
      iVar6 = ((iVar10 - iVar6 >> 0xe) - (iVar10 - iVar6 >> 0x1f)) * 0x3ad7 + iVar5;
      uVar1 = SignedSaturate(iVar6 >> 0xf,0x10);
      SignedDoesSaturate(iVar6 >> 0xf,0x10);
      param_4[1] = iVar8;
      param_4[2] = iVar10;
      param_4[3] = iVar6;
      *puVar7 = (short)uVar1;
      iVar4 = iVar3;
      iVar5 = iVar10;
      iVar10 = iVar8;
      puVar7 = puVar7 + 2;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  return;
}


// =========================================================================
// Function: AMXYIaLSFuBPMctZvbScSjcbE
// Entry: 0x71b1d694 | Size: 604 bytes
// =========================================================================

void AMXYIaLSFuBPMctZvbScSjcbE(short *param_1,int param_2,int *param_3,uint *param_4)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  short *psVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  short *psVar10;
  
  param_2 = param_2 >> 1;
  if (0 < param_2) {
    uVar8 = param_4[0xc];
    psVar10 = param_1 + 1;
    iVar2 = param_2;
    psVar4 = psVar10;
    piVar3 = param_3;
    do {
      uVar9 = param_4[1];
      uVar7 = param_4[2];
      uVar6 = ((int)((uVar8 - uVar9) + 0x2000) >> 0xe) * 0xbea + *param_4;
      *param_4 = uVar8;
      iVar2 = iVar2 + -1;
      param_4[1] = uVar6;
      iVar5 = uVar6 - uVar7;
      uVar9 = ((iVar5 >> 0xe) - (iVar5 >> 0x1f)) * 0x2498 + uVar9;
      param_4[2] = uVar9;
      iVar5 = uVar9 - param_4[3];
      uVar7 = ((iVar5 >> 0xe) - (iVar5 >> 0x1f)) * 0x3ad7 + uVar7;
      sVar1 = *psVar4;
      param_4[3] = uVar7;
      *piVar3 = (int)uVar7 >> 1;
      uVar8 = (int)sVar1 << 0xf | 0x4000;
      psVar4 = psVar4 + 2;
      piVar3 = piVar3 + 2;
    } while (iVar2 != 0);
    piVar3 = param_3;
    iVar2 = param_2;
    psVar4 = param_1;
    if (0 < param_2) {
      do {
        uVar7 = param_4[4];
        uVar8 = param_4[5];
        uVar9 = param_4[6];
        iVar2 = iVar2 + -1;
        uVar6 = (int)*psVar4 << 0xf | 0x4000;
        param_4[4] = uVar6;
        uVar7 = ((int)((uVar6 - uVar8) + 0x2000) >> 0xe) * 0x335 + uVar7;
        param_4[5] = uVar7;
        iVar5 = uVar7 - uVar9;
        uVar8 = ((iVar5 >> 0xe) - (iVar5 >> 0x1f)) * 0x17de + uVar8;
        param_4[6] = uVar8;
        iVar5 = uVar8 - param_4[7];
        uVar9 = ((iVar5 >> 0xe) - (iVar5 >> 0x1f)) * 0x305e + uVar9;
        param_4[7] = uVar9;
        *piVar3 = *piVar3 + ((int)uVar9 >> 1) >> 0xf;
        piVar3 = piVar3 + 2;
        psVar4 = psVar4 + 2;
      } while (iVar2 != 0);
      if (0 < param_2) {
        param_3 = param_3 + 1;
        piVar3 = param_3;
        iVar2 = param_2;
        do {
          uVar9 = param_4[9];
          uVar7 = param_4[10];
          iVar2 = iVar2 + -1;
          uVar8 = (int)*param_1 << 0xf | 0x4000;
          uVar6 = param_4[8];
          param_4[8] = uVar8;
          uVar6 = ((int)((uVar8 - uVar9) + 0x2000) >> 0xe) * 0xbea + uVar6;
          param_4[9] = uVar6;
          iVar5 = uVar6 - uVar7;
          uVar9 = ((iVar5 >> 0xe) - (iVar5 >> 0x1f)) * 0x2498 + uVar9;
          param_4[10] = uVar9;
          iVar5 = uVar9 - param_4[0xb];
          uVar7 = ((iVar5 >> 0xe) - (iVar5 >> 0x1f)) * 0x3ad7 + uVar7;
          param_4[0xb] = uVar7;
          *piVar3 = (int)uVar7 >> 1;
          param_1 = param_1 + 2;
          piVar3 = piVar3 + 2;
        } while (iVar2 != 0);
        if (0 < param_2) {
          do {
            uVar7 = param_4[0xd];
            param_2 = param_2 + -1;
            uVar6 = param_4[0xc];
            uVar9 = (int)*psVar10 << 0xf | 0x4000;
            uVar8 = param_4[0xe];
            param_4[0xc] = uVar9;
            uVar6 = ((int)((uVar9 - uVar7) + 0x2000) >> 0xe) * 0x335 + uVar6;
            param_4[0xd] = uVar6;
            iVar2 = uVar6 - uVar8;
            uVar7 = ((iVar2 >> 0xe) - (iVar2 >> 0x1f)) * 0x17de + uVar7;
            param_4[0xe] = uVar7;
            iVar2 = uVar7 - param_4[0xf];
            uVar8 = ((iVar2 >> 0xe) - (iVar2 >> 0x1f)) * 0x305e + uVar8;
            param_4[0xf] = uVar8;
            *param_3 = *param_3 + ((int)uVar8 >> 1) >> 0xf;
            param_3 = param_3 + 2;
            psVar10 = psVar10 + 2;
          } while (param_2 != 0);
        }
      }
    }
    return;
  }
  return;
}


// =========================================================================
// Function: WdFvzTEUwjFpSNR_fnKDDtX
// Entry: 0x71b1d8f0 | Size: 584 bytes
// =========================================================================

void WdFvzTEUwjFpSNR_fnKDDtX(int *param_1,int param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  
  param_2 = param_2 >> 1;
  if (0 < param_2) {
    piVar8 = param_1 + 1;
    piVar1 = param_4 + 0xc;
    piVar2 = piVar8;
    piVar5 = param_3;
    iVar6 = param_2;
    do {
      iVar7 = param_4[1];
      iVar9 = param_4[2];
      iVar6 = iVar6 + -1;
      iVar3 = ((*piVar1 - iVar7) + 0x2000 >> 0xe) * 0xbea + *param_4;
      *param_4 = *piVar1;
      param_4[1] = iVar3;
      iVar3 = iVar3 - iVar9;
      iVar7 = ((iVar3 >> 0xe) - (iVar3 >> 0x1f)) * 0x2498 + iVar7;
      param_4[2] = iVar7;
      iVar7 = iVar7 - param_4[3];
      iVar9 = ((iVar7 >> 0xe) - (iVar7 >> 0x1f)) * 0x3ad7 + iVar9;
      param_4[3] = iVar9;
      *piVar5 = iVar9 >> 1;
      piVar1 = piVar2;
      piVar2 = piVar2 + 2;
      piVar5 = piVar5 + 2;
    } while (iVar6 != 0);
    iVar6 = param_2;
    piVar1 = param_1;
    piVar2 = param_3;
    if (0 < param_2) {
      do {
        iVar4 = *piVar1;
        iVar9 = param_4[4];
        iVar7 = param_4[5];
        iVar3 = param_4[6];
        iVar6 = iVar6 + -1;
        param_4[4] = iVar4;
        iVar9 = ((iVar4 - iVar7) + 0x2000 >> 0xe) * 0x335 + iVar9;
        param_4[5] = iVar9;
        iVar9 = iVar9 - iVar3;
        iVar7 = ((iVar9 >> 0xe) - (iVar9 >> 0x1f)) * 0x17de + iVar7;
        param_4[6] = iVar7;
        iVar7 = iVar7 - param_4[7];
        iVar3 = ((iVar7 >> 0xe) - (iVar7 >> 0x1f)) * 0x305e + iVar3;
        param_4[7] = iVar3;
        *piVar2 = *piVar2 + (iVar3 >> 1) >> 0xf;
        piVar1 = piVar1 + 2;
        piVar2 = piVar2 + 2;
      } while (iVar6 != 0);
      if (0 < param_2) {
        param_3 = param_3 + 1;
        piVar1 = param_3;
        iVar6 = param_2;
        do {
          iVar7 = *param_1;
          iVar6 = iVar6 + -1;
          iVar9 = param_4[8];
          param_4[8] = iVar7;
          iVar9 = ((iVar7 - param_4[9]) + 0x2000 >> 0xe) * 0xbea + iVar9;
          iVar7 = iVar9 - param_4[10];
          iVar7 = ((iVar7 >> 0xe) - (iVar7 >> 0x1f)) * 0x2498 + param_4[9];
          iVar3 = iVar7 - param_4[0xb];
          iVar3 = ((iVar3 >> 0xe) - (iVar3 >> 0x1f)) * 0x3ad7 + param_4[10];
          param_4[9] = iVar9;
          param_4[10] = iVar7;
          param_4[0xb] = iVar3;
          *piVar1 = iVar3 >> 1;
          piVar1 = piVar1 + 2;
          param_1 = param_1 + 2;
        } while (iVar6 != 0);
        if (0 < param_2) {
          do {
            iVar9 = param_4[0xd];
            iVar6 = *piVar8;
            param_2 = param_2 + -1;
            iVar7 = param_4[0xc];
            iVar3 = param_4[0xe];
            param_4[0xc] = iVar6;
            iVar7 = ((iVar6 - iVar9) + 0x2000 >> 0xe) * 0x335 + iVar7;
            param_4[0xd] = iVar7;
            iVar7 = iVar7 - iVar3;
            iVar9 = ((iVar7 >> 0xe) - (iVar7 >> 0x1f)) * 0x17de + iVar9;
            param_4[0xe] = iVar9;
            iVar9 = iVar9 - param_4[0xf];
            iVar3 = ((iVar9 >> 0xe) - (iVar9 >> 0x1f)) * 0x305e + iVar3;
            param_4[0xf] = iVar3;
            *param_3 = *param_3 + (iVar3 >> 1) >> 0xf;
            param_3 = param_3 + 2;
            piVar8 = piVar8 + 2;
          } while (param_2 != 0);
        }
      }
    }
  }
  return;
}


// =========================================================================
// Function: BKzV_YbkCjUYbjlaChMaYeGslhdCNj
// Entry: 0x71b1db50 | Size: 696 bytes
// =========================================================================

void BKzV_YbkCjUYbjlaChMaYeGslhdCNj(int *param_1,int *param_2,uint param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int *piVar3;
  int *piVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  int *piVar14;
  int *piVar15;
  int *piVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int *piVar20;
  int *piVar21;
  undefined1 (*pauVar22) [16];
  undefined1 *puVar23;
  bool bVar24;
  undefined1 uVar25;
  bool bVar26;
  int *piVar27;
  longlong lVar28;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 in_d4;
  undefined8 in_d5;
  undefined8 in_d6;
  undefined8 in_d7;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 in_q9 [16];
  undefined1 in_q10 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined8 uVar38;
  undefined8 uVar39;
  undefined1 auVar40 [16];
  undefined1 auStack_140 [216];
  
  if (param_3 == 0) {
    return;
  }
  puVar23 = auStack_140;
  iVar17 = 0;
  if (4 < param_3) {
    bVar26 = param_2 <= param_1 + param_3 * 3 + 6;
    bVar24 = param_1 + param_3 * 3 + 6 == param_2;
    if (bVar26 && !bVar24) {
      bVar26 = param_1 <= param_2 + param_3 * 2;
      bVar24 = param_2 + param_3 * 2 == param_1;
    }
    if (!bVar26 || bVar24) {
      uVar18 = param_3 & 3;
      if (uVar18 == 0) {
        uVar18 = 4;
      }
      iVar17 = param_3 - uVar18;
      piVar16 = param_2;
      iVar19 = iVar17;
      piVar14 = param_1;
      param_2 = param_2 + iVar17 * 2;
      param_1 = param_1 + iVar17 * 3;
      do {
        piVar21 = piVar14 + 1;
        auVar31._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar31._0_8_ = 0xde000000de;
        auVar31 = *(undefined1 (*) [16])(auVar31 << 0x40 | auVar31);
        iVar19 = iVar19 + -4;
        uVar25 = iVar19 == 0;
        piVar3 = (int *)0x3f0;
        piVar4 = (int *)0x400;
        piVar27 = (int *)0x410;
        lVar28 = 2;
        piVar20 = piVar14;
        piVar15 = piVar21;
        while( true ) {
          *piVar3 = *piVar15;
          piVar15 = piVar15 + 1;
          *piVar4 = *piVar15;
          piVar15 = piVar15 + 1;
          *piVar27 = *piVar15;
          piVar15 = piVar15 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          piVar3 = piVar3 + 1;
          piVar4 = piVar4 + 1;
          piVar27 = piVar27 + 1;
        }
        piVar21 = piVar21 + 6;
        piVar3 = (int *)0x3f8;
        piVar4 = (int *)0x408;
        piVar27 = (int *)0x418;
        lVar28 = 2;
        while( true ) {
          *piVar3 = *piVar21;
          piVar21 = piVar21 + 1;
          *piVar4 = *piVar21;
          piVar21 = piVar21 + 1;
          *piVar27 = *piVar21;
          piVar21 = piVar21 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          piVar3 = piVar3 + 1;
          piVar4 = piVar4 + 1;
          piVar27 = piVar27 + 1;
        }
        auVar36._8_8_ = in_d1;
        auVar36._0_8_ = in_d0;
        VectorMultiply(auVar36,auVar31,4);
        *(undefined8 *)(puVar23 + 0x80) = in_d0;
        *(undefined8 *)(puVar23 + 0x88) = in_d1;
        *(undefined8 *)(puVar23 + 0x90) = in_d2;
        *(undefined8 *)(puVar23 + 0x98) = in_d3;
        *(undefined8 *)(puVar23 + 0xa0) = in_d4;
        *(undefined8 *)(puVar23 + 0xa8) = in_d5;
        *(undefined8 *)(puVar23 + 0xb0) = in_d6;
        *(undefined8 *)(puVar23 + 0xb8) = in_d7;
        auVar32._8_8_ = 0x1b9000001b9;
        auVar32._0_8_ = 0x1b9000001b9;
        *(undefined8 *)(puVar23 + 0xc0) = 0x1b9000001b9;
        *(undefined8 *)(puVar23 + 200) = 0x1b9000001b9;
        piVar21 = piVar14 + 3;
        auVar37._8_8_ = in_d3;
        auVar37._0_8_ = in_d2;
        VectorMultiplyAccumulate(auVar37,auVar32,4,0);
        piVar3 = (int *)0x310;
        piVar4 = (int *)0x320;
        piVar27 = (int *)0x330;
        lVar28 = 2;
        piVar15 = piVar21;
        while( true ) {
          *piVar3 = *piVar15;
          piVar15 = piVar15 + 1;
          *piVar4 = *piVar15;
          piVar15 = piVar15 + 1;
          *piVar27 = *piVar15;
          piVar15 = piVar15 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          piVar3 = piVar3 + 1;
          piVar4 = piVar4 + 1;
          piVar27 = piVar27 + 1;
        }
        piVar21 = piVar21 + 6;
        piVar3 = (int *)0x318;
        piVar4 = (int *)0x328;
        piVar27 = (int *)0x338;
        lVar28 = 2;
        while( true ) {
          *piVar3 = *piVar21;
          piVar21 = piVar21 + 1;
          *piVar4 = *piVar21;
          piVar21 = piVar21 + 1;
          *piVar27 = *piVar21;
          piVar21 = piVar21 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          piVar3 = piVar3 + 1;
          piVar4 = piVar4 + 1;
          piVar27 = piVar27 + 1;
        }
        auVar33._8_8_ = 0xfffff139fffff139;
        auVar33._0_8_ = 0xfffff139fffff139;
        auVar7._8_8_ = in_d5;
        auVar7._0_8_ = in_d4;
        VectorMultiplyAccumulate(auVar7,auVar33,4,0);
        *(undefined8 *)(puVar23 + 0x70) = 0xfffff139fffff139;
        *(undefined8 *)(puVar23 + 0x78) = 0xfffff139fffff139;
        auVar34._8_8_ = 0x326700003267;
        auVar34._0_8_ = 0x326700003267;
        *(undefined8 *)(puVar23 + 0x60) = 0x326700003267;
        *(undefined8 *)(puVar23 + 0x68) = 0x326700003267;
        auVar8._8_8_ = in_d7;
        auVar8._0_8_ = in_d6;
        VectorMultiplyAccumulate(auVar8,auVar34,4,0);
        uVar29 = 0x5af500005af5;
        uVar30 = 0x5af500005af5;
        piVar21 = piVar14 + 6;
        piVar3 = (int *)0x3f0;
        piVar4 = (int *)0x400;
        piVar27 = (int *)0x410;
        lVar28 = 2;
        piVar15 = piVar21;
        while( true ) {
          *piVar3 = *piVar15;
          piVar15 = piVar15 + 1;
          *piVar4 = *piVar15;
          piVar15 = piVar15 + 1;
          *piVar27 = *piVar15;
          piVar15 = piVar15 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          piVar3 = piVar3 + 1;
          piVar4 = piVar4 + 1;
          piVar27 = piVar27 + 1;
        }
        piVar21 = piVar21 + 6;
        auVar9._8_8_ = unaff_d9;
        auVar9._0_8_ = unaff_d8;
        auVar10._8_8_ = uVar30;
        auVar10._0_8_ = uVar29;
        VectorMultiplyAccumulate(auVar9,auVar10,4,0);
        piVar3 = (int *)0x3f8;
        piVar4 = (int *)0x408;
        piVar27 = (int *)0x418;
        lVar28 = 2;
        while( true ) {
          *piVar3 = *piVar21;
          piVar21 = piVar21 + 1;
          *piVar4 = *piVar21;
          piVar21 = piVar21 + 1;
          *piVar27 = *piVar21;
          piVar21 = piVar21 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          piVar3 = piVar3 + 1;
          piVar4 = piVar4 + 1;
          piVar27 = piVar27 + 1;
        }
        auVar35._8_8_ = in_d1;
        auVar35._0_8_ = in_d0;
        *(undefined8 *)(puVar23 + 0x20) = in_d0;
        *(undefined8 *)(puVar23 + 0x28) = in_d1;
        *(undefined8 *)(puVar23 + 0x30) = in_d2;
        *(undefined8 *)(puVar23 + 0x38) = in_d3;
        *(undefined8 *)(puVar23 + 0x40) = in_d4;
        *(undefined8 *)(puVar23 + 0x48) = in_d5;
        *(undefined8 *)(puVar23 + 0x50) = in_d6;
        *(undefined8 *)(puVar23 + 0x58) = in_d7;
        auVar40._8_8_ = 0x43f0000043f;
        auVar40._0_8_ = 0x43f0000043f;
        pauVar22 = (undefined1 (*) [16])&DAT_71b1de60;
        piVar3 = (int *)0x370;
        piVar4 = (int *)0x380;
        piVar27 = (int *)0x390;
        lVar28 = 2;
        piVar15 = piVar20;
        while( true ) {
          *piVar3 = *piVar15;
          piVar15 = piVar15 + 1;
          *piVar4 = *piVar15;
          piVar15 = piVar15 + 1;
          *piVar27 = *piVar15;
          piVar15 = piVar15 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          piVar3 = piVar3 + 1;
          piVar4 = piVar4 + 1;
          piVar27 = piVar27 + 1;
        }
        piVar20 = piVar20 + 6;
        auVar5._8_8_ = in_d1;
        auVar5._0_8_ = in_d0;
        VectorMultiplyAccumulate(auVar5,auVar40,4,0);
        auVar31 = *pauVar22;
        piVar3 = (int *)0x378;
        piVar4 = (int *)0x388;
        piVar27 = (int *)0x398;
        lVar28 = 2;
        piVar15 = piVar20;
        while( true ) {
          *piVar3 = *piVar15;
          piVar15 = piVar15 + 1;
          *piVar4 = *piVar15;
          piVar15 = piVar15 + 1;
          *piVar27 = *piVar15;
          piVar15 = piVar15 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          piVar3 = piVar3 + 1;
          piVar4 = piVar4 + 1;
          piVar27 = piVar27 + 1;
        }
        auVar6._8_8_ = in_d3;
        auVar6._0_8_ = in_d2;
        VectorMultiplyAccumulate(auVar6,auVar31,4,0);
        uVar38 = 0x30a0000030a;
        uVar39 = 0x30a0000030a;
        piVar21 = piVar14 + 2;
        piVar15 = piVar14 + 5;
        auVar12._8_8_ = 0x30a0000030a;
        auVar12._0_8_ = 0x30a0000030a;
        VectorMultiply(auVar35,auVar12,4);
        VectorMultiplyAccumulate(in_q9,auVar31,4,0);
        piVar3 = (int *)0x370;
        piVar4 = (int *)0x380;
        piVar27 = (int *)0x390;
        lVar28 = 2;
        piVar14 = piVar20 + 6;
        piVar20 = piVar21;
        while( true ) {
          *piVar3 = *piVar20;
          piVar20 = piVar20 + 1;
          *piVar4 = *piVar20;
          piVar20 = piVar20 + 1;
          *piVar27 = *piVar20;
          piVar20 = piVar20 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          piVar3 = piVar3 + 1;
          piVar4 = piVar4 + 1;
          piVar27 = piVar27 + 1;
        }
        piVar21 = piVar21 + 6;
        piVar3 = (int *)0x378;
        piVar4 = (int *)0x388;
        piVar27 = (int *)0x398;
        lVar28 = 2;
        while( true ) {
          *piVar3 = *piVar21;
          piVar21 = piVar21 + 1;
          *piVar4 = *piVar21;
          piVar21 = piVar21 + 1;
          *piVar27 = *piVar21;
          piVar21 = piVar21 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          piVar3 = piVar3 + 1;
          piVar4 = piVar4 + 1;
          piVar27 = piVar27 + 1;
        }
        VectorMultiplyAccumulate(in_q9,auVar40,4,0);
        auVar31 = *(undefined1 (*) [16])(puVar23 + 0x60);
        auVar11._8_8_ = uVar30;
        auVar11._0_8_ = uVar29;
        VectorMultiplyAccumulate(*(undefined1 (*) [16])(puVar23 + 0xa0),auVar11,4,0);
        VectorMultiplyAccumulate(in_q10,auVar31,4,0);
        piVar3 = (int *)0x370;
        piVar4 = (int *)0x380;
        piVar27 = (int *)0x390;
        lVar28 = 2;
        piVar20 = piVar15;
        auVar36 = in_q10;
        while( true ) {
          *piVar3 = *piVar20;
          piVar20 = piVar20 + 1;
          *piVar4 = *piVar20;
          piVar20 = piVar20 + 1;
          *piVar27 = *piVar20;
          piVar20 = piVar20 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          piVar3 = piVar3 + 1;
          piVar4 = piVar4 + 1;
          piVar27 = piVar27 + 1;
        }
        piVar15 = piVar15 + 6;
        piVar3 = (int *)0x378;
        piVar4 = (int *)0x388;
        piVar27 = (int *)0x398;
        lVar28 = 2;
        while( true ) {
          *piVar3 = *piVar15;
          piVar15 = piVar15 + 1;
          *piVar4 = *piVar15;
          piVar15 = piVar15 + 1;
          *piVar27 = *piVar15;
          piVar15 = piVar15 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          piVar3 = piVar3 + 1;
          piVar4 = piVar4 + 1;
          piVar27 = piVar27 + 1;
        }
        VectorMultiplyAccumulate(in_q10,*(undefined1 (*) [16])(puVar23 + 0x70),4,0);
        in_d2 = *(undefined8 *)(puVar23 + 0x30);
        in_d3 = *(undefined8 *)(puVar23 + 0x38);
        in_d4 = *(undefined8 *)*(undefined1 (*) [16])(puVar23 + 0x40);
        in_d5 = *(undefined8 *)(puVar23 + 0x48);
        in_d6 = *(undefined8 *)(puVar23 + 0x50);
        in_d7 = *(undefined8 *)(puVar23 + 0x58);
        in_d0 = *(undefined8 *)*(undefined1 (*) [16])(puVar23 + 0xc0);
        in_d1 = *(undefined8 *)(puVar23 + 200);
        VectorMultiplyAccumulate(auVar31,*(undefined1 (*) [16])(puVar23 + 0xc0),4,0);
        auVar1._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar1._0_8_ = 0xde000000de;
        auVar13._8_8_ = uVar39;
        auVar13._0_8_ = uVar38;
        auVar37 = VectorMultiplyAccumulate(*(undefined1 (*) [16])(puVar23 + 0x40),auVar13,4,0);
        auVar31 = VectorMultiplyAccumulate
                            (auVar36,*(undefined1 (*) [16])(auVar1 << 0x40 | auVar1),4,0);
        auVar2._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar2._0_8_ = 0x400000004000;
        in_q10 = *(undefined1 (*) [16])(auVar2 << 0x40 | auVar2);
        in_q9 = VectorAdd(auVar37,in_q10,4);
        VectorAdd(auVar31,in_q10,4);
        piVar3 = (int *)0x380;
        piVar4 = (int *)0x390;
        lVar28 = 2;
        piVar27 = piVar16;
        while( true ) {
          *piVar27 = *piVar3;
          piVar27[1] = *piVar4;
          piVar27 = piVar27 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          piVar3 = piVar3 + 1;
          piVar4 = piVar4 + 1;
        }
        piVar3 = (int *)0x388;
        piVar4 = (int *)0x398;
        lVar28 = 2;
        while( true ) {
          *piVar27 = *piVar3;
          piVar27[1] = *piVar4;
          piVar27 = piVar27 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          piVar3 = piVar3 + 1;
          piVar4 = piVar4 + 1;
        }
        piVar16 = piVar16 + 8;
      } while (!(bool)uVar25);
    }
  }
  iVar17 = param_3 - iVar17;
  do {
    iVar17 = iVar17 + -1;
    piVar16 = param_1 + 3;
    *param_2 = param_1[7] * 0xde +
               param_1[6] * 0x1b9 +
               param_1[5] * -0xec7 +
               param_1[4] * 0x3267 +
               *piVar16 * 0x5af5 + param_1[2] * 0x43f + *param_1 * 0x30a + param_1[1] * -0x802 +
               0x4000;
    param_2[1] = param_1[8] * 0x30a +
                 param_1[7] * -0x802 +
                 param_1[6] * 0x43f +
                 param_1[5] * 0x5af5 +
                 param_1[4] * 0x3267 + *piVar16 * -0xec7 + param_1[1] * 0xde + param_1[2] * 0x1b9 +
                 0x4000;
    param_2 = param_2 + 2;
    param_1 = piVar16;
  } while (iVar17 != 0);
  return;
}


// =========================================================================
// Function: kixGxfnoKnNzXSDdGy_qkxRVagvSCU
// Entry: 0x71b1de80 | Size: 880 bytes
// =========================================================================

void kixGxfnoKnNzXSDdGy_qkxRVagvSCU(int *param_1,int *param_2,uint param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int *piVar6;
  int *piVar7;
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
  int *piVar18;
  int *piVar19;
  int *piVar20;
  int *piVar21;
  undefined1 (*pauVar22) [16];
  int iVar23;
  int *piVar24;
  undefined1 *puVar25;
  uint uVar26;
  uint uVar27;
  bool bVar28;
  undefined1 uVar29;
  bool bVar30;
  int *piVar31;
  int *piVar32;
  longlong lVar33;
  undefined1 in_q0 [16];
  undefined1 auVar34 [16];
  undefined1 in_q1 [16];
  undefined1 in_q2 [16];
  undefined1 in_q3 [16];
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  undefined8 unaff_d15;
  undefined1 in_q9 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 in_q10 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 in_q11 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  if (param_3 == 0) {
    return;
  }
  puVar25 = auStack_b0;
  uVar26 = 0;
  if (3 < param_3) {
    bVar30 = param_2 <= param_1 + param_3 * 4 + 6;
    bVar28 = param_1 + param_3 * 4 + 6 == param_2;
    if (bVar30 && !bVar28) {
      bVar30 = param_1 <= param_2 + param_3 * 3;
      bVar28 = param_2 + param_3 * 3 == param_1;
    }
    if (!bVar30 || bVar28) {
      uVar27 = param_3 & 0xfffffffc;
      auVar35._8_8_ = 0xfffffe83fffffe83;
      auVar35._0_8_ = 0xfffffe83fffffe83;
      uStack_a0 = 0xfffffe83fffffe83;
      uStack_98 = 0xfffffe83fffffe83;
      piVar24 = param_2 + uVar27 * 3;
      piVar18 = param_1 + uVar27 * 4;
      piVar19 = param_1;
      uVar26 = uVar27;
      do {
        piVar21 = piVar19 + 1;
        uVar27 = uVar27 - 4;
        uVar29 = uVar27 == 0;
        piVar6 = (int *)0x3f0;
        piVar7 = (int *)0x400;
        piVar32 = (int *)0x410;
        piVar31 = (int *)0x420;
        lVar33 = 2;
        param_1 = piVar18;
        piVar18 = piVar19;
        piVar20 = piVar21;
        while( true ) {
          *piVar6 = *piVar20;
          piVar20 = piVar20 + 1;
          *piVar7 = *piVar20;
          piVar20 = piVar20 + 1;
          *piVar32 = *piVar20;
          piVar20 = piVar20 + 1;
          *piVar31 = *piVar20;
          piVar20 = piVar20 + 1;
          lVar33 = lVar33 + -1;
          if (lVar33 == 0) break;
          piVar6 = piVar6 + 1;
          piVar7 = piVar7 + 1;
          piVar32 = piVar32 + 1;
          piVar31 = piVar31 + 1;
        }
        piVar21 = piVar21 + 8;
        piVar6 = (int *)0x3f8;
        piVar7 = (int *)0x408;
        piVar32 = (int *)0x418;
        piVar31 = (int *)0x428;
        lVar33 = 2;
        while( true ) {
          *piVar6 = *piVar21;
          piVar21 = piVar21 + 1;
          *piVar7 = *piVar21;
          piVar21 = piVar21 + 1;
          *piVar32 = *piVar21;
          piVar21 = piVar21 + 1;
          *piVar31 = *piVar21;
          piVar21 = piVar21 + 1;
          lVar33 = lVar33 + -1;
          if (lVar33 == 0) break;
          piVar6 = piVar6 + 1;
          piVar7 = piVar7 + 1;
          piVar32 = piVar32 + 1;
          piVar31 = piVar31 + 1;
        }
        piVar21 = piVar19 + 5;
        piVar6 = (int *)0x330;
        piVar7 = (int *)0x340;
        piVar32 = (int *)0x350;
        piVar31 = (int *)0x360;
        lVar33 = 2;
        piVar20 = piVar21;
        while( true ) {
          *piVar6 = *piVar20;
          piVar20 = piVar20 + 1;
          *piVar7 = *piVar20;
          piVar20 = piVar20 + 1;
          *piVar32 = *piVar20;
          piVar20 = piVar20 + 1;
          *piVar31 = *piVar20;
          piVar20 = piVar20 + 1;
          lVar33 = lVar33 + -1;
          if (lVar33 == 0) break;
          piVar6 = piVar6 + 1;
          piVar7 = piVar7 + 1;
          piVar32 = piVar32 + 1;
          piVar31 = piVar31 + 1;
        }
        piVar21 = piVar21 + 8;
        piVar6 = (int *)0x338;
        piVar7 = (int *)0x348;
        piVar32 = (int *)0x358;
        piVar31 = (int *)0x368;
        lVar33 = 2;
        while( true ) {
          *piVar6 = *piVar21;
          piVar21 = piVar21 + 1;
          *piVar7 = *piVar21;
          piVar21 = piVar21 + 1;
          *piVar32 = *piVar21;
          piVar21 = piVar21 + 1;
          *piVar31 = *piVar21;
          piVar21 = piVar21 + 1;
          lVar33 = lVar33 + -1;
          if (lVar33 == 0) break;
          piVar6 = piVar6 + 1;
          piVar7 = piVar7 + 1;
          piVar32 = piVar32 + 1;
          piVar31 = piVar31 + 1;
        }
        auVar39._8_8_ = unaff_d9;
        auVar39._0_8_ = unaff_d8;
        auVar39 = VectorAdd(auVar39,in_q3,4);
        auVar40._8_8_ = 0x4a7600004a76;
        auVar40._0_8_ = 0x4a7600004a76;
        pauVar22 = (undefined1 (*) [16])&DAT_71b1e200;
        VectorMultiply(auVar39,auVar40,4);
        piVar6 = (int *)0x370;
        piVar7 = (int *)0x380;
        piVar32 = (int *)0x390;
        piVar31 = (int *)0x3a0;
        lVar33 = 2;
        piVar20 = piVar18;
        while( true ) {
          *piVar6 = *piVar20;
          piVar20 = piVar20 + 1;
          *piVar7 = *piVar20;
          piVar20 = piVar20 + 1;
          *piVar32 = *piVar20;
          piVar20 = piVar20 + 1;
          *piVar31 = *piVar20;
          piVar20 = piVar20 + 1;
          lVar33 = lVar33 + -1;
          if (lVar33 == 0) break;
          piVar6 = piVar6 + 1;
          piVar7 = piVar7 + 1;
          piVar32 = piVar32 + 1;
          piVar31 = piVar31 + 1;
        }
        piVar18 = piVar18 + 8;
        auVar9._8_8_ = unaff_d11;
        auVar9._0_8_ = unaff_d10;
        auVar40 = VectorAdd(auVar9,in_q2,4);
        auVar39 = *pauVar22;
        piVar6 = (int *)0x378;
        piVar7 = (int *)0x388;
        piVar32 = (int *)0x398;
        piVar31 = (int *)0x3a8;
        lVar33 = 2;
        piVar20 = piVar18;
        while( true ) {
          *piVar6 = *piVar20;
          piVar20 = piVar20 + 1;
          *piVar7 = *piVar20;
          piVar20 = piVar20 + 1;
          *piVar32 = *piVar20;
          piVar20 = piVar20 + 1;
          *piVar31 = *piVar20;
          piVar20 = piVar20 + 1;
          lVar33 = lVar33 + -1;
          if (lVar33 == 0) break;
          piVar6 = piVar6 + 1;
          piVar7 = piVar7 + 1;
          piVar32 = piVar32 + 1;
          piVar31 = piVar31 + 1;
        }
        piVar18 = piVar18 + 8;
        VectorMultiplyAccumulate(auVar40,auVar39,4,0);
        auVar4._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar4._0_8_ = 0x2ff000002ff;
        VectorMultiply(auVar35,*(undefined1 (*) [16])(auVar4 << 0x40 | auVar4),4);
        auVar41._8_8_ = 0xfffff6c6fffff6c6;
        auVar41._0_8_ = 0xfffff6c6fffff6c6;
        *(undefined8 *)(puVar25 + 0x30) = 0xfffff6c6fffff6c6;
        *(undefined8 *)(puVar25 + 0x38) = 0xfffff6c6fffff6c6;
        VectorMultiplyAccumulate(in_q9,auVar41,4,0);
        auVar43._8_8_ = 0x98200000982;
        auVar43._0_8_ = 0x98200000982;
        *(undefined8 *)(puVar25 + 0x20) = 0x98200000982;
        *(undefined8 *)(puVar25 + 0x28) = 0x98200000982;
        VectorMultiplyAccumulate(in_q10,auVar43,4,0);
        auVar12._8_8_ = unaff_d13;
        auVar12._0_8_ = unaff_d12;
        auVar39 = VectorAdd(auVar12,in_q1,4);
        auVar34._8_8_ = 0x5f5600005f56;
        auVar34._0_8_ = 0x5f5600005f56;
        auVar15._8_8_ = unaff_d15;
        auVar15._0_8_ = unaff_d14;
        auVar35 = VectorAdd(auVar15,in_q0,4);
        VectorMultiplyAccumulate(auVar39,*(undefined1 (*) [16])(puVar25 + 0x10),4,0);
        auVar37._8_8_ = 0x18200000182;
        auVar37._0_8_ = 0x18200000182;
        piVar21 = piVar19 + 4;
        VectorMultiplyAccumulate(in_q11,auVar34,4,0);
        piVar6 = (int *)0x300;
        piVar7 = (int *)0x310;
        piVar32 = (int *)0x320;
        piVar31 = (int *)0x330;
        lVar33 = 2;
        piVar20 = piVar21;
        while( true ) {
          *piVar6 = *piVar20;
          piVar20 = piVar20 + 1;
          *piVar7 = *piVar20;
          piVar20 = piVar20 + 1;
          *piVar32 = *piVar20;
          piVar20 = piVar20 + 1;
          *piVar31 = *piVar20;
          piVar20 = piVar20 + 1;
          lVar33 = lVar33 + -1;
          if (lVar33 == 0) break;
          piVar6 = piVar6 + 1;
          piVar7 = piVar7 + 1;
          piVar32 = piVar32 + 1;
          piVar31 = piVar31 + 1;
        }
        piVar21 = piVar21 + 8;
        auVar1._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar1._0_8_ = 0x5a0000005a;
        auVar39 = *(undefined1 (*) [16])(auVar1 << 0x40 | auVar1);
        auVar40 = VectorMultiplyAccumulate(auVar35,auVar37,4,0);
        piVar6 = (int *)0x308;
        piVar7 = (int *)0x318;
        piVar32 = (int *)0x328;
        piVar31 = (int *)0x338;
        lVar33 = 2;
        while( true ) {
          *piVar6 = *piVar21;
          piVar21 = piVar21 + 1;
          *piVar7 = *piVar21;
          piVar21 = piVar21 + 1;
          *piVar32 = *piVar21;
          piVar21 = piVar21 + 1;
          *piVar31 = *piVar21;
          piVar21 = piVar21 + 1;
          lVar33 = lVar33 + -1;
          if (lVar33 == 0) break;
          piVar6 = piVar6 + 1;
          piVar7 = piVar7 + 1;
          piVar32 = piVar32 + 1;
          piVar31 = piVar31 + 1;
        }
        auVar42._8_8_ = 0x297c0000297c;
        auVar42._0_8_ = 0x297c0000297c;
        auVar36._8_8_ = 0xfffff102fffff102;
        auVar36._0_8_ = 0xfffff102fffff102;
        VectorMultiplyAccumulate(in_q1,auVar42,4,0);
        auVar38._8_8_ = 0x2d1000002d1;
        auVar38._0_8_ = 0x2d1000002d1;
        piVar21 = piVar19 + 2;
        piVar20 = piVar19 + 6;
        piVar6 = (int *)0x340;
        piVar7 = (int *)0x350;
        piVar32 = (int *)0x360;
        piVar31 = (int *)0x370;
        lVar33 = 2;
        piVar19 = piVar18;
        piVar18 = piVar21;
        while( true ) {
          *piVar6 = *piVar18;
          piVar18 = piVar18 + 1;
          *piVar7 = *piVar18;
          piVar18 = piVar18 + 1;
          *piVar32 = *piVar18;
          piVar18 = piVar18 + 1;
          *piVar31 = *piVar18;
          piVar18 = piVar18 + 1;
          lVar33 = lVar33 + -1;
          if (lVar33 == 0) break;
          piVar6 = piVar6 + 1;
          piVar7 = piVar7 + 1;
          piVar32 = piVar32 + 1;
          piVar31 = piVar31 + 1;
        }
        piVar21 = piVar21 + 8;
        VectorMultiplyAccumulate(in_q2,auVar36,4,0);
        piVar18 = (int *)0x348;
        piVar6 = (int *)0x358;
        piVar7 = (int *)0x368;
        piVar32 = (int *)0x378;
        lVar33 = 2;
        while( true ) {
          *piVar18 = *piVar21;
          piVar21 = piVar21 + 1;
          *piVar6 = *piVar21;
          piVar21 = piVar21 + 1;
          *piVar7 = *piVar21;
          piVar21 = piVar21 + 1;
          *piVar32 = *piVar21;
          piVar21 = piVar21 + 1;
          lVar33 = lVar33 + -1;
          if (lVar33 == 0) break;
          piVar18 = piVar18 + 1;
          piVar6 = piVar6 + 1;
          piVar7 = piVar7 + 1;
          piVar32 = piVar32 + 1;
        }
        auVar10._8_8_ = unaff_d11;
        auVar10._0_8_ = unaff_d10;
        VectorMultiply(auVar10,auVar39,4);
        VectorMultiplyAccumulate(in_q3,auVar38,4,0);
        auVar13._8_8_ = unaff_d13;
        auVar13._0_8_ = unaff_d12;
        VectorMultiplyAccumulate(auVar13,auVar38,4,0);
        auVar16._8_8_ = unaff_d15;
        auVar16._0_8_ = unaff_d14;
        VectorMultiplyAccumulate(auVar16,auVar36,4,0);
        VectorMultiplyAccumulate(in_q11,auVar42,4,0);
        piVar18 = (int *)0x340;
        piVar6 = (int *)0x350;
        piVar7 = (int *)0x360;
        piVar32 = (int *)0x370;
        lVar33 = 2;
        piVar31 = piVar20;
        while( true ) {
          *piVar18 = *piVar31;
          piVar31 = piVar31 + 1;
          *piVar6 = *piVar31;
          piVar31 = piVar31 + 1;
          *piVar7 = *piVar31;
          piVar31 = piVar31 + 1;
          *piVar32 = *piVar31;
          piVar31 = piVar31 + 1;
          lVar33 = lVar33 + -1;
          if (lVar33 == 0) break;
          piVar18 = piVar18 + 1;
          piVar6 = piVar6 + 1;
          piVar7 = piVar7 + 1;
          piVar32 = piVar32 + 1;
        }
        piVar20 = piVar20 + 8;
        piVar18 = (int *)0x348;
        piVar6 = (int *)0x358;
        piVar7 = (int *)0x368;
        piVar32 = (int *)0x378;
        lVar33 = 2;
        while( true ) {
          *piVar18 = *piVar20;
          piVar20 = piVar20 + 1;
          *piVar6 = *piVar20;
          piVar20 = piVar20 + 1;
          *piVar7 = *piVar20;
          piVar20 = piVar20 + 1;
          *piVar32 = *piVar20;
          piVar20 = piVar20 + 1;
          lVar33 = lVar33 + -1;
          if (lVar33 == 0) break;
          piVar18 = piVar18 + 1;
          piVar6 = piVar6 + 1;
          piVar7 = piVar7 + 1;
          piVar32 = piVar32 + 1;
        }
        auVar11._8_8_ = unaff_d11;
        auVar11._0_8_ = unaff_d10;
        VectorMultiplyAccumulate(auVar11,auVar34,4,0);
        auVar5._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar5._0_8_ = 0x2ff000002ff;
        auVar14._8_8_ = unaff_d13;
        auVar14._0_8_ = unaff_d12;
        VectorMultiplyAccumulate(auVar14,*(undefined1 (*) [16])(puVar25 + 0x20),4,0);
        in_q10 = *(undefined1 (*) [16])(puVar25 + 0x30);
        auVar17._8_8_ = unaff_d15;
        auVar17._0_8_ = unaff_d14;
        VectorMultiplyAccumulate(auVar17,in_q10,4,0);
        in_q11 = VectorMultiplyAccumulate
                           (in_q11,*(undefined1 (*) [16])(auVar5 << 0x40 | auVar5),4,0);
        auVar2._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar2._0_8_ = 0x5a0000005a;
        in_q9 = *(undefined1 (*) [16])(auVar2 << 0x40 | auVar2);
        auVar3._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar3._0_8_ = 0x400000004000;
        auVar35 = *(undefined1 (*) [16])(auVar3 << 0x40 | auVar3);
        auVar8._8_8_ = unaff_d9;
        auVar8._0_8_ = unaff_d8;
        auVar39 = VectorMultiplyAccumulate(auVar8,in_q9,4,0);
        in_q1 = VectorAdd(auVar40,auVar35,4);
        in_q2 = VectorAdd(in_q11,auVar35,4);
        in_q0 = VectorAdd(auVar39,auVar35,4);
        piVar18 = (int *)0x3f0;
        piVar6 = (int *)0x400;
        piVar7 = (int *)0x410;
        lVar33 = 2;
        piVar32 = param_2;
        while( true ) {
          *piVar32 = *piVar18;
          piVar32[1] = *piVar6;
          piVar32[2] = *piVar7;
          piVar32 = piVar32 + 3;
          lVar33 = lVar33 + -1;
          if (lVar33 == 0) break;
          piVar18 = piVar18 + 1;
          piVar6 = piVar6 + 1;
          piVar7 = piVar7 + 1;
        }
        piVar32 = param_2 + 6;
        piVar18 = (int *)0x3f8;
        piVar6 = (int *)0x408;
        piVar7 = (int *)0x418;
        lVar33 = 2;
        while( true ) {
          *piVar32 = *piVar18;
          piVar32[1] = *piVar6;
          piVar32[2] = *piVar7;
          piVar32 = piVar32 + 3;
          lVar33 = lVar33 + -1;
          if (lVar33 == 0) break;
          piVar18 = piVar18 + 1;
          piVar6 = piVar6 + 1;
          piVar7 = piVar7 + 1;
        }
        param_2 = param_2 + 0xc;
        piVar18 = param_1;
      } while (!(bool)uVar29);
      param_2 = piVar24;
      if (uVar26 == param_3) {
        return;
      }
    }
  }
  iVar23 = param_3 - uVar26;
  do {
    iVar23 = iVar23 + -1;
    piVar18 = param_1 + 4;
    *param_2 = param_1[7] * 0x5a +
               param_1[6] * 0x2d1 +
               param_1[5] * -0xefe +
               *piVar18 * 0x297c +
               param_1[3] * 0x5f56 + param_1[2] * 0x982 + *param_1 * 0x2ff + param_1[1] * -0x93a +
               0x4000;
    param_2[1] = (param_1[8] + param_1[1]) * 0x182 +
                 (param_1[7] + param_1[2]) * -0x17d +
                 (param_1[5] + *piVar18) * 0x4a76 + (param_1[6] + param_1[3]) * -0xa56 + 0x4000;
    param_2[2] = param_1[9] * 0x2ff +
                 param_1[8] * -0x93a +
                 param_1[7] * 0x982 +
                 param_1[6] * 0x5f56 +
                 param_1[5] * 0x297c + *piVar18 * -0xefe + param_1[2] * 0x5a + param_1[3] * 0x2d1 +
                 0x4000;
    param_2 = param_2 + 3;
    param_1 = piVar18;
  } while (iVar23 != 0);
  return;
}


// =========================================================================
// Function: XyWhHrz_MFcTpxbXvisOWVnpulNk_c
// Entry: 0x71b1e280 | Size: 856 bytes
// =========================================================================

void XyWhHrz_MFcTpxbXvisOWVnpulNk_c(int param_1,uint *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  if (param_3 == 0) {
    return;
  }
  piVar2 = (int *)(param_1 + 0x24);
  do {
    *param_2 = piVar2[-6] << 0xf | 0x4000;
    param_2[4] = piVar2[3] * -0x2c8 +
                 piVar2[2] * 0x931 +
                 piVar2[1] * -0x1866 +
                 *piVar2 * 0x54bb +
                 piVar2[-1] * 0x48ab + piVar2[-2] * -0xf17 + piVar2[-4] * -0x9c + piVar2[-3] * 0x3ce
                 + piVar2[4] * 0x7e + 0x4000;
    iVar10 = piVar2[7];
    iVar3 = piVar2[8];
    iVar4 = piVar2[6];
    iVar5 = piVar2[5];
    iVar6 = piVar2[4];
    iVar7 = piVar2[3];
    iVar8 = piVar2[2];
    iVar9 = piVar2[1];
    param_2[1] = piVar2[-1] * -0x8a +
                 piVar2[-2] * 0x34d +
                 piVar2[-3] * -0xcad +
                 piVar2[-4] * 0x34d9 +
                 piVar2[-5] * 0x669b +
                 piVar2[-6] * -0x1827 + piVar2[-7] * 0x8c5 + piVar2[-9] * 0x75 + piVar2[-8] * -0x29d
                 + 0x4000;
    param_2[7] = *piVar2 * -0x8a +
                 iVar9 * 0x34d +
                 iVar8 * -0xcad +
                 iVar7 * 0x34d9 +
                 iVar6 * 0x669b + iVar5 * -0x1827 + iVar4 * 0x8c5 + iVar3 * 0x75 + iVar10 * -0x29d +
                 0x4000;
    iVar4 = piVar2[4];
    iVar10 = piVar2[3];
    iVar5 = piVar2[1];
    iVar8 = piVar2[2];
    iVar7 = piVar2[-1];
    iVar6 = *piVar2;
    iVar9 = piVar2[6];
    iVar3 = piVar2[5];
    param_3 = param_3 + -1;
    param_2[2] = iVar5 * 0x5b +
                 iVar6 * -0x20c +
                 iVar7 * 0x6fd +
                 piVar2[-2] * -0x1412 +
                 piVar2[-3] * 0x745e +
                 piVar2[-4] * 0x2154 + piVar2[-5] * -0x8eb + piVar2[-7] * -0x65 + piVar2[-6] * 0x264
                 + 0x4000;
    param_2[6] = piVar2[-2] * 0x5b +
                 iVar7 * -0x20c +
                 iVar6 * 0x6fd +
                 iVar5 * -0x1412 +
                 iVar8 * 0x745e + iVar10 * 0x2154 + iVar4 * -0x8eb + iVar9 * -0x65 + iVar3 * 0x264 +
                 0x4000;
    iVar10 = piVar2[-2];
    iVar9 = piVar2[-1];
    iVar3 = *piVar2;
    iVar5 = piVar2[1];
    iVar6 = piVar2[4];
    iVar4 = piVar2[5];
    iVar7 = piVar2[3];
    iVar8 = piVar2[2];
    param_2[3] = iVar8 * -0x35 +
                 iVar5 * 0x13b +
                 iVar3 * -0x47b +
                 iVar9 * 0xf5d +
                 iVar10 * 0x7d0a +
                 piVar2[-3] * -0xbf8 + piVar2[-6] * 0x32 + piVar2[-5] * -0x124 + piVar2[-4] * 0x3f8
                 + 0x4000;
    piVar1 = piVar2 + -3;
    piVar2 = piVar2 + 0xb;
    param_2[5] = *piVar1 * -0x35 +
                 iVar10 * 0x13b +
                 iVar9 * -0x47b +
                 iVar3 * 0xf5d +
                 iVar5 * 0x7d0a + iVar8 * -0xbf8 + iVar4 * 0x32 + iVar6 * -0x124 + iVar7 * 0x3f8 +
                 0x4000;
    param_2 = param_2 + 8;
  } while (param_3 != 0);
  return;
}


// =========================================================================
// Function: BznSrEXxHSpIxiysgrDhYuAWmOZQab
// Entry: 0x71b1e5f0 | Size: 964 bytes
// =========================================================================

void BznSrEXxHSpIxiysgrDhYuAWmOZQab(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = param_4 + 0x40;
  thunk_BZGWgjqRuuJdqDQARyGygZhFE(param_1,0x2c,iVar3,param_3);
  puVar2 = (undefined4 *)(param_4 + 0x20);
  *puVar2 = *(undefined4 *)(param_3 + 0x20);
  *(undefined4 *)(param_4 + 0x24) = *(undefined4 *)(param_3 + 0x24);
  *(undefined4 *)(param_4 + 0x28) = *(undefined4 *)(param_3 + 0x28);
  *(undefined4 *)(param_4 + 0x2c) = *(undefined4 *)(param_3 + 0x2c);
  *(undefined4 *)(param_4 + 0x30) = *(undefined4 *)(param_3 + 0x30);
  *(undefined4 *)(param_4 + 0x34) = *(undefined4 *)(param_3 + 0x34);
  *(undefined4 *)(param_4 + 0x38) = *(undefined4 *)(param_3 + 0x38);
  *(undefined4 *)(param_4 + 0x3c) = *(undefined4 *)(param_3 + 0x3c);
  *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(param_4 + 0x180);
  *(undefined4 *)(param_3 + 0x24) = *(undefined4 *)(param_4 + 0x184);
  *(undefined4 *)(param_3 + 0x28) = *(undefined4 *)(param_4 + 0x188);
  *(undefined4 *)(param_3 + 0x2c) = *(undefined4 *)(param_4 + 0x18c);
  *(undefined4 *)(param_3 + 0x30) = *(undefined4 *)(param_4 + 400);
  *(undefined4 *)(param_3 + 0x34) = *(undefined4 *)(param_4 + 0x194);
  *(undefined4 *)(param_3 + 0x38) = *(undefined4 *)(param_4 + 0x198);
  *(undefined4 *)(param_3 + 0x3c) = *(undefined4 *)(param_4 + 0x19c);
  thunk_XyWhHrz_MFcTpxbXvisOWVnpulNk_c(puVar2,param_4,8);
  iVar1 = param_3 + 0x40;
  thunk_UJNyIeksikIOgSa_AoOlvGAyeoA(param_4,0x40,param_2,iVar1);
  thunk_BZGWgjqRuuJdqDQARyGygZhFE(param_1 + 0x58,0x2c,iVar3,param_3);
  *puVar2 = *(undefined4 *)(param_3 + 0x20);
  *(undefined4 *)(param_4 + 0x24) = *(undefined4 *)(param_3 + 0x24);
  *(undefined4 *)(param_4 + 0x28) = *(undefined4 *)(param_3 + 0x28);
  *(undefined4 *)(param_4 + 0x2c) = *(undefined4 *)(param_3 + 0x2c);
  *(undefined4 *)(param_4 + 0x30) = *(undefined4 *)(param_3 + 0x30);
  *(undefined4 *)(param_4 + 0x34) = *(undefined4 *)(param_3 + 0x34);
  *(undefined4 *)(param_4 + 0x38) = *(undefined4 *)(param_3 + 0x38);
  *(undefined4 *)(param_4 + 0x3c) = *(undefined4 *)(param_3 + 0x3c);
  *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(param_4 + 0x180);
  *(undefined4 *)(param_3 + 0x24) = *(undefined4 *)(param_4 + 0x184);
  *(undefined4 *)(param_3 + 0x28) = *(undefined4 *)(param_4 + 0x188);
  *(undefined4 *)(param_3 + 0x2c) = *(undefined4 *)(param_4 + 0x18c);
  *(undefined4 *)(param_3 + 0x30) = *(undefined4 *)(param_4 + 400);
  *(undefined4 *)(param_3 + 0x34) = *(undefined4 *)(param_4 + 0x194);
  *(undefined4 *)(param_3 + 0x38) = *(undefined4 *)(param_4 + 0x198);
  *(undefined4 *)(param_3 + 0x3c) = *(undefined4 *)(param_4 + 0x19c);
  thunk_XyWhHrz_MFcTpxbXvisOWVnpulNk_c(puVar2,param_4,8);
  thunk_UJNyIeksikIOgSa_AoOlvGAyeoA(param_4,0x40,param_2 + 0x40,iVar1);
  thunk_BZGWgjqRuuJdqDQARyGygZhFE(param_1 + 0xb0,0x2c,iVar3,param_3);
  *puVar2 = *(undefined4 *)(param_3 + 0x20);
  *(undefined4 *)(param_4 + 0x24) = *(undefined4 *)(param_3 + 0x24);
  *(undefined4 *)(param_4 + 0x28) = *(undefined4 *)(param_3 + 0x28);
  *(undefined4 *)(param_4 + 0x2c) = *(undefined4 *)(param_3 + 0x2c);
  *(undefined4 *)(param_4 + 0x30) = *(undefined4 *)(param_3 + 0x30);
  *(undefined4 *)(param_4 + 0x34) = *(undefined4 *)(param_3 + 0x34);
  *(undefined4 *)(param_4 + 0x38) = *(undefined4 *)(param_3 + 0x38);
  *(undefined4 *)(param_4 + 0x3c) = *(undefined4 *)(param_3 + 0x3c);
  *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(param_4 + 0x180);
  *(undefined4 *)(param_3 + 0x24) = *(undefined4 *)(param_4 + 0x184);
  *(undefined4 *)(param_3 + 0x28) = *(undefined4 *)(param_4 + 0x188);
  *(undefined4 *)(param_3 + 0x2c) = *(undefined4 *)(param_4 + 0x18c);
  *(undefined4 *)(param_3 + 0x30) = *(undefined4 *)(param_4 + 400);
  *(undefined4 *)(param_3 + 0x34) = *(undefined4 *)(param_4 + 0x194);
  *(undefined4 *)(param_3 + 0x38) = *(undefined4 *)(param_4 + 0x198);
  *(undefined4 *)(param_3 + 0x3c) = *(undefined4 *)(param_4 + 0x19c);
  thunk_XyWhHrz_MFcTpxbXvisOWVnpulNk_c(puVar2,param_4,8);
  thunk_UJNyIeksikIOgSa_AoOlvGAyeoA(param_4,0x40,param_2 + 0x80,iVar1);
  thunk_BZGWgjqRuuJdqDQARyGygZhFE(param_1 + 0x108,0x2c,iVar3,param_3);
  *puVar2 = *(undefined4 *)(param_3 + 0x20);
  *(undefined4 *)(param_4 + 0x24) = *(undefined4 *)(param_3 + 0x24);
  *(undefined4 *)(param_4 + 0x28) = *(undefined4 *)(param_3 + 0x28);
  *(undefined4 *)(param_4 + 0x2c) = *(undefined4 *)(param_3 + 0x2c);
  *(undefined4 *)(param_4 + 0x30) = *(undefined4 *)(param_3 + 0x30);
  *(undefined4 *)(param_4 + 0x34) = *(undefined4 *)(param_3 + 0x34);
  *(undefined4 *)(param_4 + 0x38) = *(undefined4 *)(param_3 + 0x38);
  *(undefined4 *)(param_4 + 0x3c) = *(undefined4 *)(param_3 + 0x3c);
  *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(param_4 + 0x180);
  *(undefined4 *)(param_3 + 0x24) = *(undefined4 *)(param_4 + 0x184);
  *(undefined4 *)(param_3 + 0x28) = *(undefined4 *)(param_4 + 0x188);
  *(undefined4 *)(param_3 + 0x2c) = *(undefined4 *)(param_4 + 0x18c);
  *(undefined4 *)(param_3 + 0x30) = *(undefined4 *)(param_4 + 400);
  *(undefined4 *)(param_3 + 0x34) = *(undefined4 *)(param_4 + 0x194);
  *(undefined4 *)(param_3 + 0x38) = *(undefined4 *)(param_4 + 0x198);
  *(undefined4 *)(param_3 + 0x3c) = *(undefined4 *)(param_4 + 0x19c);
  thunk_XyWhHrz_MFcTpxbXvisOWVnpulNk_c(puVar2,param_4,8);
  thunk_UJNyIeksikIOgSa_AoOlvGAyeoA(param_4,0x40,param_2 + 0xc0,iVar1);
  thunk_BZGWgjqRuuJdqDQARyGygZhFE(param_1 + 0x160,0x2c,iVar3,param_3);
  *puVar2 = *(undefined4 *)(param_3 + 0x20);
  *(undefined4 *)(param_4 + 0x24) = *(undefined4 *)(param_3 + 0x24);
  *(undefined4 *)(param_4 + 0x28) = *(undefined4 *)(param_3 + 0x28);
  *(undefined4 *)(param_4 + 0x2c) = *(undefined4 *)(param_3 + 0x2c);
  *(undefined4 *)(param_4 + 0x30) = *(undefined4 *)(param_3 + 0x30);
  *(undefined4 *)(param_4 + 0x34) = *(undefined4 *)(param_3 + 0x34);
  *(undefined4 *)(param_4 + 0x38) = *(undefined4 *)(param_3 + 0x38);
  *(undefined4 *)(param_4 + 0x3c) = *(undefined4 *)(param_3 + 0x3c);
  *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(param_4 + 0x180);
  *(undefined4 *)(param_3 + 0x24) = *(undefined4 *)(param_4 + 0x184);
  *(undefined4 *)(param_3 + 0x28) = *(undefined4 *)(param_4 + 0x188);
  *(undefined4 *)(param_3 + 0x2c) = *(undefined4 *)(param_4 + 0x18c);
  *(undefined4 *)(param_3 + 0x30) = *(undefined4 *)(param_4 + 400);
  *(undefined4 *)(param_3 + 0x34) = *(undefined4 *)(param_4 + 0x194);
  *(undefined4 *)(param_3 + 0x38) = *(undefined4 *)(param_4 + 0x198);
  *(undefined4 *)(param_3 + 0x3c) = *(undefined4 *)(param_4 + 0x19c);
  thunk_XyWhHrz_MFcTpxbXvisOWVnpulNk_c(puVar2,param_4,8);
  thunk_UJNyIeksikIOgSa_AoOlvGAyeoA(param_4,0x40,param_2 + 0x100,iVar1);
  return;
}


// =========================================================================
// Function: nQVrapGtMQKQyGIgfGpkYZkeFQIJIHeYdmJ
// Entry: 0x71b1e9b4 | Size: 32 bytes
// =========================================================================

void nQVrapGtMQKQyGIgfGpkYZkeFQIJIHeYdmJ(undefined4 *param_1)

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
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar3;
  param_1[0x10] = 0;
  param_1[0x11] = uVar1;
  param_1[0x12] = uVar2;
  param_1[0x13] = uVar3;
  param_1[0x14] = 0;
  param_1[0x15] = uVar1;
  param_1[0x16] = uVar2;
  param_1[0x17] = uVar3;
  return;
}


// =========================================================================
// Function: uvzSlf_VnzVSVkNtMWLFFFJhoymyAR
// Entry: 0x71b1e9d4 | Size: 1564 bytes
// =========================================================================

void uvzSlf_VnzVSVkNtMWLFFFJhoymyAR(int param_1,undefined8 *param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
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
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 in_q8 [16];
  undefined1 auVar27 [16];
  undefined1 in_q9 [16];
  undefined1 auVar28 [16];
  
  auVar25._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
  auVar25._0_8_ = 0x7fff00007fff;
  auVar25 = *(undefined1 (*) [16])(auVar25 << 0x40 | auVar25);
  auVar26._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
  auVar26._0_8_ = 0x7fff00007fff;
  auVar26 = ~*(undefined1 (*) [16])(auVar26 << 0x40 | auVar26);
  iVar14 = 0;
  do {
    thunk_BZGWgjqRuuJdqDQARyGygZhFE(param_1,0x28,param_4 + 8,param_3);
    *param_4 = *(undefined4 *)(param_3 + 0x20);
    param_4[1] = *(undefined4 *)(param_3 + 0x24);
    param_4[2] = *(undefined4 *)(param_3 + 0x28);
    param_4[3] = *(undefined4 *)(param_3 + 0x2c);
    param_4[4] = *(undefined4 *)(param_3 + 0x30);
    param_4[5] = *(undefined4 *)(param_3 + 0x34);
    param_4[6] = *(undefined4 *)(param_3 + 0x38);
    param_4[7] = *(undefined4 *)(param_3 + 0x3c);
    *(undefined4 *)(param_3 + 0x20) = param_4[0x50];
    iVar15 = 0;
    *(undefined4 *)(param_3 + 0x24) = param_4[0x51];
    *(undefined4 *)(param_3 + 0x28) = param_4[0x52];
    *(undefined4 *)(param_3 + 0x2c) = param_4[0x53];
    *(undefined4 *)(param_3 + 0x30) = param_4[0x54];
    *(undefined4 *)(param_3 + 0x34) = param_4[0x55];
    *(undefined4 *)(param_3 + 0x38) = param_4[0x56];
    *(undefined4 *)(param_3 + 0x3c) = param_4[0x57];
    puVar3 = param_2;
    do {
      iVar4 = *(int *)((int)param_4 + iVar15 + 8);
      uVar5 = *(uint *)((int)param_4 + iVar15 + 0xc);
      iVar6 = *(int *)((int)param_4 + iVar15 + 0x10);
      iVar7 = *(int *)((int)param_4 + iVar15 + 0x14);
      iVar22 = *(int *)((int)param_4 + iVar15 + 0x2c);
      iVar8 = *(int *)((int)param_4 + iVar15 + 0x18);
      iVar9 = *(int *)((int)param_4 + iVar15 + 0x1c);
      iVar10 = *(int *)((int)param_4 + iVar15 + 0x48);
      iVar11 = *(int *)((int)param_4 + iVar15 + 0x4c);
      iVar12 = *(int *)((int)param_4 + iVar15 + 0x50);
      iVar23 = *(int *)((int)param_4 + iVar15 + 0x44);
      iVar24 = *(int *)((int)param_4 + iVar15 + 0x24);
      iVar18 = *(int *)((int)param_4 + iVar15 + 0x3c);
      iVar20 = *(int *)((int)param_4 + iVar15 + 0x20);
      iVar19 = *(int *)((int)param_4 + iVar15 + 0x28);
      iVar16 = *(int *)((int)param_4 + iVar15 + 0x40);
      iVar13 = *(int *)((int)param_4 + iVar15 + 0x30);
      iVar17 = *(int *)((int)param_4 + iVar15 + 0x34);
      iVar21 = *(int *)((int)param_4 + iVar15 + 0x38);
      auVar27._8_8_ =
           in_q8._8_8_ & 0xffff0000ffff0000 |
           (ulonglong)
           (uint)(iVar13 * 0x7238 +
                  iVar19 * -0x9b0 +
                  iVar17 * -0x151e +
                  iVar24 * 0x297 +
                  iVar21 * 0x76c +
                  iVar20 * -0x6e + iVar18 * -0x230 + iVar16 * 0x62 + iVar22 * 0x24cf + 0x4000 >> 0xf
                 ) & 0xffff;
      auVar27._0_8_ =
           in_q8._0_8_ & 0xffff0000ffff0000 |
           (ulonglong)
           (uint)(iVar13 * -0x198 +
                  iVar19 * -0x1028 +
                  iVar17 * 0x47 +
                  iVar24 * 0x79c7 +
                  iVar20 * 0x1746 +
                  iVar9 * -0x68d + iVar8 * 0x1c9 + iVar7 * -0x4d + iVar22 * 0x57d + 0x4000 >> 0xf) &
           0xffff;
      auVar27 = VectorMin(auVar27,auVar25,4,0);
      in_q8 = VectorMax(auVar27,auVar26,4,0);
      iVar1 = iVar21 * -0x9a +
              iVar18 * 0x3b1 +
              iVar16 * -0xe6f +
              iVar23 * 0x4187 +
              iVar10 * 0x5ba0 +
              iVar11 * -0x18bd +
              iVar12 * 0x937 +
              *(int *)((int)param_4 + iVar15 + 0x54) * -0x2c8 +
              *(int *)((int)param_4 + iVar15 + 0x58) * 0x7f + 0x4000 >> 0xf;
      uVar2 = SignedSaturate(iVar1,0x10);
      SignedDoesSaturate(iVar1,0x10);
      *(short *)((int)puVar3 + 0x14) = (short)uVar2;
      auVar28._8_8_ =
           in_q9._8_8_ & 0xffff0000ffff0000 |
           (ulonglong)
           (uint)((int)(iVar19 * 0x26 +
                        iVar24 * -0xda +
                        iVar20 * 0x2f8 +
                        iVar9 * -0x914 +
                        iVar8 * 0x7e6e +
                        iVar7 * 0xae1 + iVar6 * -0x33e + uVar5 * 0xe6 + iVar4 * -0x27 + 0x4000) >>
                 0xf) & 0xffff;
      auVar28._0_8_ = in_q9._0_8_ & 0xffff0000ffff0000 | (ulonglong)uVar5 & 0xffff;
      auVar27 = VectorMin(auVar28,auVar25,4,0);
      iVar1 = iVar13 * 0x26 +
              iVar17 * -0xda +
              iVar21 * 0x2f8 +
              iVar18 * -0x914 +
              iVar16 * 0x7e6e + iVar23 * 0xae1 + iVar10 * -0x33e + iVar12 * -0x27 + iVar11 * 0xe6 +
              0x4000 >> 0xf;
      uVar2 = SignedSaturate(iVar1,0x10);
      SignedDoesSaturate(iVar1,0x10);
      *(short *)((int)puVar3 + 0x12) = (short)uVar2;
      iVar1 = iVar13 * 0x33f +
              iVar17 * -0xc66 +
              iVar21 * 0x330e +
              iVar18 * 0x680a +
              iVar16 * -0x17f5 +
              iVar23 * 0x8ae + iVar10 * -0x297 + iVar11 * 0x75 + iVar22 * -0x89 + 0x4000 >> 0xf;
      uVar2 = SignedSaturate(iVar1,0x10);
      SignedDoesSaturate(iVar1,0x10);
      auVar27 = VectorMax(auVar27,auVar26,4,0);
      in_q9._0_8_ = VectorCopyNarrow(auVar27,4);
      in_q9._8_8_ = VectorCopyNarrow(in_q8,4);
      *puVar3 = in_q9._0_8_;
      puVar3[1] = in_q9._8_8_;
      *(short *)(puVar3 + 2) = (short)uVar2;
      iVar15 = iVar15 + 0x40;
      puVar3 = (undefined8 *)((int)puVar3 + 0x16);
    } while (iVar15 != 0x140);
    iVar14 = iVar14 + 1;
    param_2 = (undefined8 *)((int)param_2 + 0x6e);
    param_1 = param_1 + 0x50;
  } while (iVar14 != 4);
  return;
}


// =========================================================================
// Function: NruLUzwMJdqbgNpyHvKSwzEstJwFReQpUQZ
// Entry: 0x71b1eff0 | Size: 24 bytes
// =========================================================================

void NruLUzwMJdqbgNpyHvKSwzEstJwFReQpUQZ(undefined4 *param_1)

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
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar3;
  return;
}


// =========================================================================
// Function: xbYV_CVYeF_pQyODambzSGWieoZTu
// Entry: 0x71b1f008 | Size: 412 bytes
// =========================================================================

void xbYV_CVYeF_pQyODambzSGWieoZTu(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  
  thunk_AMXYIaLSFuBPMctZvbScSjcbE(param_1,0x6e,param_4 + 0x40,param_3);
  puVar1 = (undefined4 *)(param_4 + 0x20);
  *puVar1 = *(undefined4 *)(param_3 + 0x40);
  *(undefined4 *)(param_4 + 0x24) = *(undefined4 *)(param_3 + 0x44);
  *(undefined4 *)(param_4 + 0x28) = *(undefined4 *)(param_3 + 0x48);
  *(undefined4 *)(param_4 + 0x2c) = *(undefined4 *)(param_3 + 0x4c);
  *(undefined4 *)(param_4 + 0x30) = *(undefined4 *)(param_3 + 0x50);
  *(undefined4 *)(param_4 + 0x34) = *(undefined4 *)(param_3 + 0x54);
  *(undefined4 *)(param_4 + 0x38) = *(undefined4 *)(param_3 + 0x58);
  *(undefined4 *)(param_4 + 0x3c) = *(undefined4 *)(param_3 + 0x5c);
  *(undefined4 *)(param_3 + 0x40) = *(undefined4 *)(param_4 + 0x1d8);
  *(undefined4 *)(param_3 + 0x44) = *(undefined4 *)(param_4 + 0x1dc);
  *(undefined4 *)(param_3 + 0x48) = *(undefined4 *)(param_4 + 0x1e0);
  *(undefined4 *)(param_3 + 0x4c) = *(undefined4 *)(param_4 + 0x1e4);
  *(undefined4 *)(param_3 + 0x50) = *(undefined4 *)(param_4 + 0x1e8);
  *(undefined4 *)(param_3 + 0x54) = *(undefined4 *)(param_4 + 0x1ec);
  *(undefined4 *)(param_3 + 0x58) = *(undefined4 *)(param_4 + 0x1f0);
  *(undefined4 *)(param_3 + 0x5c) = *(undefined4 *)(param_4 + 500);
  thunk_XyWhHrz_MFcTpxbXvisOWVnpulNk_c(puVar1,param_4,10);
  thunk_UJNyIeksikIOgSa_AoOlvGAyeoA(param_4,0x50,param_2,param_3 + 0x60);
  thunk_AMXYIaLSFuBPMctZvbScSjcbE(param_1 + 0xdc,0x6e,param_4 + 0x40,param_3);
  *puVar1 = *(undefined4 *)(param_3 + 0x40);
  *(undefined4 *)(param_4 + 0x24) = *(undefined4 *)(param_3 + 0x44);
  *(undefined4 *)(param_4 + 0x28) = *(undefined4 *)(param_3 + 0x48);
  *(undefined4 *)(param_4 + 0x2c) = *(undefined4 *)(param_3 + 0x4c);
  *(undefined4 *)(param_4 + 0x30) = *(undefined4 *)(param_3 + 0x50);
  *(undefined4 *)(param_4 + 0x34) = *(undefined4 *)(param_3 + 0x54);
  *(undefined4 *)(param_4 + 0x38) = *(undefined4 *)(param_3 + 0x58);
  *(undefined4 *)(param_4 + 0x3c) = *(undefined4 *)(param_3 + 0x5c);
  *(undefined4 *)(param_3 + 0x40) = *(undefined4 *)(param_4 + 0x1d8);
  *(undefined4 *)(param_3 + 0x44) = *(undefined4 *)(param_4 + 0x1dc);
  *(undefined4 *)(param_3 + 0x48) = *(undefined4 *)(param_4 + 0x1e0);
  *(undefined4 *)(param_3 + 0x4c) = *(undefined4 *)(param_4 + 0x1e4);
  *(undefined4 *)(param_3 + 0x50) = *(undefined4 *)(param_4 + 0x1e8);
  *(undefined4 *)(param_3 + 0x54) = *(undefined4 *)(param_4 + 0x1ec);
  *(undefined4 *)(param_3 + 0x58) = *(undefined4 *)(param_4 + 0x1f0);
  *(undefined4 *)(param_3 + 0x5c) = *(undefined4 *)(param_4 + 500);
  thunk_XyWhHrz_MFcTpxbXvisOWVnpulNk_c(puVar1,param_4,10);
  thunk_UJNyIeksikIOgSa_AoOlvGAyeoA(param_4,0x50,param_2 + 0x50,param_3 + 0x60);
  return;
}


// =========================================================================
// Function: Nk_syunPjhbI_pfWesuygcfoDTWhPeDZKa
// Entry: 0x71b1f1a4 | Size: 40 bytes
// =========================================================================

void Nk_syunPjhbI_pfWesuygcfoDTWhPeDZKa(undefined4 *param_1)

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
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar3;
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
  param_1[0x1c] = 0;
  param_1[0x1d] = uVar1;
  param_1[0x1e] = uVar2;
  param_1[0x1f] = uVar3;
  return;
}


// =========================================================================
// Function: KXQIoVQDBMhHnVpnxMVmEisbAUKzG
// Entry: 0x71b1f1cc | Size: 412 bytes
// =========================================================================

void KXQIoVQDBMhHnVpnxMVmEisbAUKzG(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  
  thunk_BZGWgjqRuuJdqDQARyGygZhFE(param_1,0x28,param_4 + 0x48,param_3);
  puVar1 = (undefined4 *)(param_4 + 0x28);
  *puVar1 = *(undefined4 *)(param_3 + 0x20);
  *(undefined4 *)(param_4 + 0x2c) = *(undefined4 *)(param_3 + 0x24);
  *(undefined4 *)(param_4 + 0x30) = *(undefined4 *)(param_3 + 0x28);
  *(undefined4 *)(param_4 + 0x34) = *(undefined4 *)(param_3 + 0x2c);
  *(undefined4 *)(param_4 + 0x38) = *(undefined4 *)(param_3 + 0x30);
  *(undefined4 *)(param_4 + 0x3c) = *(undefined4 *)(param_3 + 0x34);
  *(undefined4 *)(param_4 + 0x40) = *(undefined4 *)(param_3 + 0x38);
  *(undefined4 *)(param_4 + 0x44) = *(undefined4 *)(param_3 + 0x3c);
  *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(param_4 + 0x168);
  *(undefined4 *)(param_3 + 0x24) = *(undefined4 *)(param_4 + 0x16c);
  *(undefined4 *)(param_3 + 0x28) = *(undefined4 *)(param_4 + 0x170);
  *(undefined4 *)(param_3 + 0x2c) = *(undefined4 *)(param_4 + 0x174);
  *(undefined4 *)(param_3 + 0x30) = *(undefined4 *)(param_4 + 0x178);
  *(undefined4 *)(param_3 + 0x34) = *(undefined4 *)(param_4 + 0x17c);
  *(undefined4 *)(param_3 + 0x38) = *(undefined4 *)(param_4 + 0x180);
  *(undefined4 *)(param_3 + 0x3c) = *(undefined4 *)(param_4 + 0x184);
  thunk_LiyLxWDcSHERRwEBtnqyMVcPArIeCD(puVar1,param_4,5);
  thunk_zPqQoUvcAlmbhdoUPfLiPAzxM(param_4,0x37,param_2,param_3 + 0x40);
  thunk_BZGWgjqRuuJdqDQARyGygZhFE(param_1 + 0x50,0x28,param_4 + 0x48,param_3);
  *puVar1 = *(undefined4 *)(param_3 + 0x20);
  *(undefined4 *)(param_4 + 0x2c) = *(undefined4 *)(param_3 + 0x24);
  *(undefined4 *)(param_4 + 0x30) = *(undefined4 *)(param_3 + 0x28);
  *(undefined4 *)(param_4 + 0x34) = *(undefined4 *)(param_3 + 0x2c);
  *(undefined4 *)(param_4 + 0x38) = *(undefined4 *)(param_3 + 0x30);
  *(undefined4 *)(param_4 + 0x3c) = *(undefined4 *)(param_3 + 0x34);
  *(undefined4 *)(param_4 + 0x40) = *(undefined4 *)(param_3 + 0x38);
  *(undefined4 *)(param_4 + 0x44) = *(undefined4 *)(param_3 + 0x3c);
  *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(param_4 + 0x168);
  *(undefined4 *)(param_3 + 0x24) = *(undefined4 *)(param_4 + 0x16c);
  *(undefined4 *)(param_3 + 0x28) = *(undefined4 *)(param_4 + 0x170);
  *(undefined4 *)(param_3 + 0x2c) = *(undefined4 *)(param_4 + 0x174);
  *(undefined4 *)(param_3 + 0x30) = *(undefined4 *)(param_4 + 0x178);
  *(undefined4 *)(param_3 + 0x34) = *(undefined4 *)(param_4 + 0x17c);
  *(undefined4 *)(param_3 + 0x38) = *(undefined4 *)(param_4 + 0x180);
  *(undefined4 *)(param_3 + 0x3c) = *(undefined4 *)(param_4 + 0x184);
  thunk_LiyLxWDcSHERRwEBtnqyMVcPArIeCD(puVar1,param_4,5);
  thunk_zPqQoUvcAlmbhdoUPfLiPAzxM(param_4,0x37,param_2 + 0xdc,param_3 + 0x40);
  return;
}


// =========================================================================
// Function: LiyLxWDcSHERRwEBtnqyMVcPArIeCD
// Entry: 0x71b1f368 | Size: 1176 bytes
// =========================================================================

void LiyLxWDcSHERRwEBtnqyMVcPArIeCD(int param_1,uint *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  if (param_3 < 1) {
    return;
  }
  piVar2 = (int *)(param_1 + 0x58);
  do {
    *param_2 = piVar2[-0x13] << 0xf | 0x4000;
    iVar10 = piVar2[-1];
    iVar3 = *piVar2;
    iVar4 = piVar2[-2];
    iVar5 = piVar2[-3];
    iVar6 = piVar2[-4];
    iVar7 = piVar2[-5];
    iVar8 = piVar2[-6];
    iVar9 = piVar2[-7];
    param_2[1] = piVar2[-0xe] * -0x9a +
                 piVar2[-0xf] * 0x3b1 +
                 piVar2[-0x10] * -0xe6f +
                 piVar2[-0x11] * 0x4187 +
                 piVar2[-0x12] * 0x5ba0 +
                 piVar2[-0x13] * -0x18bd +
                 piVar2[-0x14] * 0x937 + piVar2[-0x15] * -0x2c8 + piVar2[-0x16] * 0x7f + 0x4000;
    param_2[10] = piVar2[-8] * -0x9a +
                  iVar9 * 0x3b1 +
                  iVar8 * -0xe6f +
                  iVar7 * 0x4187 +
                  iVar6 * 0x5ba0 + iVar5 * -0x18bd + iVar4 * 0x937 + iVar10 * -0x2c8 + iVar3 * 0x7f
                  + 0x4000;
    iVar3 = piVar2[-3];
    iVar4 = piVar2[-2];
    iVar5 = piVar2[-4];
    iVar6 = piVar2[-5];
    iVar7 = piVar2[-6];
    iVar8 = piVar2[-7];
    iVar9 = piVar2[-8];
    iVar10 = piVar2[-9];
    param_2[2] = piVar2[-0xc] * 0x26 +
                 piVar2[-0xd] * -0xda +
                 piVar2[-0xe] * 0x2f8 +
                 piVar2[-0xf] * -0x914 +
                 piVar2[-0x10] * 0x7e6e +
                 piVar2[-0x11] * 0xae1 +
                 piVar2[-0x12] * -0x33e + piVar2[-0x14] * -0x27 + piVar2[-0x13] * 0xe6 + 0x4000;
    param_3 = param_3 + -1;
    param_2[9] = piVar2[-10] * 0x26 +
                 iVar10 * -0xda +
                 iVar9 * 0x2f8 +
                 iVar8 * -0x914 +
                 iVar7 * 0x7e6e + iVar6 * 0xae1 + iVar5 * -0x33e + iVar4 * -0x27 + iVar3 * 0xe6 +
                 0x4000;
    iVar3 = piVar2[-4];
    iVar5 = piVar2[-3];
    iVar10 = piVar2[-5];
    iVar4 = piVar2[-6];
    iVar6 = piVar2[-7];
    iVar7 = piVar2[-8];
    iVar8 = piVar2[-9];
    iVar9 = piVar2[-10];
    param_2[3] = piVar2[-0xb] * -0x89 +
                 piVar2[-0xc] * 0x33f +
                 piVar2[-0xd] * -0xc66 +
                 piVar2[-0xe] * 0x330e +
                 piVar2[-0xf] * 0x680a +
                 piVar2[-0x10] * -0x17f5 +
                 piVar2[-0x11] * 0x8ae + piVar2[-0x13] * 0x75 + piVar2[-0x12] * -0x297 + 0x4000;
    param_2[8] = piVar2[-0xb] * -0x89 +
                 iVar9 * 0x33f +
                 iVar8 * -0xc66 +
                 iVar7 * 0x330e +
                 iVar6 * 0x680a + iVar4 * -0x17f5 + iVar10 * 0x8ae + iVar5 * 0x75 + iVar3 * -0x297 +
                 0x4000;
    iVar10 = piVar2[-0xc];
    iVar9 = piVar2[-0xb];
    iVar4 = piVar2[-10];
    iVar8 = piVar2[-9];
    iVar3 = piVar2[-6];
    iVar5 = piVar2[-5];
    iVar6 = piVar2[-7];
    iVar7 = piVar2[-8];
    param_2[4] = iVar8 * 0x47 +
                 iVar4 * -0x198 +
                 iVar9 * 0x57d +
                 iVar10 * -0x1028 +
                 piVar2[-0xd] * 0x79c7 +
                 piVar2[-0xe] * 0x1746 +
                 piVar2[-0xf] * -0x68d + piVar2[-0x11] * -0x4d + piVar2[-0x10] * 0x1c9 + 0x4000;
    param_2[7] = piVar2[-0xd] * 0x47 +
                 iVar10 * -0x198 +
                 iVar9 * 0x57d +
                 iVar4 * -0x1028 +
                 iVar8 * 0x79c7 + iVar7 * 0x1746 + iVar6 * -0x68d + iVar5 * -0x4d + iVar3 * 0x1c9 +
                 0x4000;
    iVar10 = piVar2[-0xd];
    iVar9 = piVar2[-0xc];
    iVar4 = piVar2[-10];
    iVar5 = piVar2[-9];
    iVar6 = piVar2[-0xb];
    iVar3 = piVar2[-7];
    iVar7 = piVar2[-6];
    iVar8 = piVar2[-8];
    param_2[5] = iVar8 * -0x6e +
                 iVar5 * 0x297 +
                 iVar4 * -0x9b0 +
                 iVar6 * 0x24cf +
                 iVar9 * 0x7238 +
                 iVar10 * -0x151e +
                 piVar2[-0xe] * 0x76c + piVar2[-0x10] * 0x62 + piVar2[-0xf] * -0x230 + 0x4000;
    piVar1 = piVar2 + -0xe;
    piVar2 = piVar2 + 0x10;
    param_2[6] = *piVar1 * -0x6e +
                 iVar10 * 0x297 +
                 iVar9 * -0x9b0 +
                 iVar6 * 0x24cf +
                 iVar4 * 0x7238 + iVar5 * -0x151e + iVar8 * 0x76c + iVar7 * 0x62 + iVar3 * -0x230 +
                 0x4000;
    param_2 = param_2 + 0xb;
  } while (param_3 != 0);
  return;
}


// =========================================================================
// Function: vFVujsoBEXAlKIPUVXHJSBGVEsnHIXlGbu
// Entry: 0x71b1f800 | Size: 32 bytes
// =========================================================================

void vFVujsoBEXAlKIPUVXHJSBGVEsnHIXlGbu(undefined4 *param_1)

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
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar3;
  param_1[0x10] = 0;
  param_1[0x11] = uVar1;
  param_1[0x12] = uVar2;
  param_1[0x13] = uVar3;
  param_1[0x14] = 0;
  param_1[0x15] = uVar1;
  param_1[0x16] = uVar2;
  param_1[0x17] = uVar3;
  return;
}


// =========================================================================
// Function: lZ_cSUTFlxtubkhk_ITRiKQyRvDW
// Entry: 0x71b1fb48 | Size: 200 bytes
// =========================================================================

undefined4 * lZ_cSUTFlxtubkhk_ITRiKQyRvDW(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined1 auStack_820 [2048];
  
  imp___aeabi_memclr8(param_1 + 0x200,0x8c0);
  param_1[0x430] = 0x50;
  *(undefined8 *)(param_1 + 0x432) = 0xc000000000000000;
  param_1[0x434] = 0;
  param_1[0x435] = 0x40490000;
  uVar1 = thunk_MwhHq(0x1fd8);
  param_1[0x436] = uVar1;
  uVar1 = thunk_MwhHq(0x318);
  param_1[0x437] = uVar1;
  uVar1 = thunk_AAdEpWLrVuRzeKH_aypOaweeoqhfVwu_pPmWcvnFTh(&DAT_7009a8c0,2,&DAT_7009a8cc,2);
  param_1[0x438] = uVar1;
  *param_1 = 0;
  thunk_bEmuaqCJZZkepWiPVTHzKngWmkMIMJSFA(0x200,1,auStack_820,param_1,param_1 + 0x100);
  thunk_UQxLZqjxb_itqZvnxbspQFpzddAd(param_1[0x437]);
  thunk_iCvAqFcXYqqmhAphwFzC_NVLToDT(param_1[0x436]);
  return param_1;
}


// =========================================================================
// Function: pONOVmkUOdNWfVaMYDHEyFhffjsr
// Entry: 0x71b1fc88 | Size: 96 bytes
// =========================================================================

int pONOVmkUOdNWfVaMYDHEyFhffjsr(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10e0);
  *(undefined4 *)(param_1 + 0x10e0) = 0;
  if (iVar1 != 0) {
    thunk_qNQrlu();
  }
  iVar1 = *(int *)(param_1 + 0x10dc);
  *(undefined4 *)(param_1 + 0x10dc) = 0;
  if (iVar1 != 0) {
    thunk_qNQrlu();
  }
  iVar1 = *(int *)(param_1 + 0x10d8);
  *(int *)(param_1 + 0x10d8) = 0;
  if (iVar1 != 0) {
    thunk_qNQrlu();
  }
  return param_1;
}


// =========================================================================
// Function: AnqGcvzTNisDtLShIwfVH_BDdVQQFgoMGzlmExV
// Entry: 0x71b1fce8 | Size: 44 bytes
// =========================================================================

void AnqGcvzTNisDtLShIwfVH_BDdVQQFgoMGzlmExV(int param_1)

{
  imp___aeabi_memcpy8(param_1 + 0x800,param_1 + 0xf80,0x140);
  *(undefined4 *)(param_1 + 0x10c0) = 0x50;
  return;
}


// =========================================================================
// Function: Jsfi_tFCLaVUpGedxGXnHBIQQ_mFjFpbQipvdfCWyuoUgGiBcylvWklFbpEIsY
// Entry: 0x71b1fd18 | Size: 544 bytes
// =========================================================================

undefined4
Jsfi_tFCLaVUpGedxGXnHBIQQ_mFjFpbQipvdfCWyuoUgGiBcylvWklFbpEIsY
          (int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  undefined4 uVar4;
  uint *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_1f28 [2112];
  undefined1 auStack_16e8 [1920];
  undefined1 auStack_f68 [1920];
  undefined1 auStack_7e8 [960];
  undefined1 auStack_428 [960];
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [36];
  
  uVar4 = 0xffffffff;
  *(undefined4 *)(param_4 + 0x80) = 0;
  if (param_3 == 0xa0) {
    puVar5 = (uint *)(param_1 + 0x10c0);
    iVar1 = thunk_NlnyAQeXdcZcWkGHPXtnKeWjCkZrXkLUfiFThxPA
                      (*(undefined4 *)(param_1 + 0x10e0),param_2,0xa0,param_1 + 0x800 + *puVar5 * 4)
    ;
    if (iVar1 == 0) {
      uVar2 = *puVar5;
      uVar4 = 0;
      *puVar5 = uVar2 + 0xa0;
      if (0x22f < uVar2 + 0xa0) {
        dVar6 = 0.0;
        *(undefined1 *)(param_4 + 0x84) = 0;
        *(undefined4 *)(param_4 + 0x80) = 3;
        iVar1 = 0x940;
        do {
          pfVar3 = (float *)(param_1 + iVar1);
          iVar1 = iVar1 + 4;
          dVar6 = dVar6 + (double)(*pfVar3 * *pfVar3);
        } while (iVar1 != 0xbc0);
        dVar7 = 0.0;
        iVar1 = 0xbc0;
        *(double *)(param_4 + 0x60) = SQRT(dVar6 / 160.0);
        do {
          pfVar3 = (float *)(param_1 + iVar1);
          iVar1 = iVar1 + 4;
          dVar7 = dVar7 + (double)(*pfVar3 * *pfVar3);
        } while (iVar1 != 0xe40);
        iVar1 = 0xe40;
        dVar8 = 0.0;
        *(double *)(param_4 + 0x68) = SQRT(dVar7 / 160.0);
        do {
          pfVar3 = (float *)(param_1 + iVar1);
          iVar1 = iVar1 + 4;
          dVar8 = dVar8 + (double)(*pfVar3 * *pfVar3);
        } while (iVar1 != 0x10c0);
        *(double *)(param_4 + 0x70) = SQRT(dVar8 / 160.0);
        if ((SQRT(dVar6 / 160.0) < 5.0) || (SQRT(dVar7 / 160.0) < 5.0 || SQRT(dVar8 / 160.0) < 5.0))
        {
          *(undefined1 *)(param_4 + 0x84) = 1;
        }
        else {
          thunk_ymSTHACZvuXvGpXOUfAKSDxiTayrYK
                    (param_1 + 0x940,auStack_428,auStack_7e8,auStack_f68,auStack_16e8,
                     *(undefined4 *)(param_1 + 0x10dc));
          thunk_nCLXwfkCwgKOmXUvu_aXrKeB
                    (auStack_f68,auStack_1f28,*(undefined4 *)(param_1 + 0x10d8),auStack_68,
                     auStack_48);
          thunk_VnCRIxhqvSZFGdJEjzHbGoayMrpGVrgLLZMtrDUVrXLLbuedQODnkNRwEpxv
                    (8000,auStack_48,auStack_68,4,3,param_1 + 0x10c8,param_1 + 0x10d0,param_4,
                     param_4 + 0x20);
          thunk_dIIwFeSrFgUIpCxpS_sRiWpZcilfYYPHDQhzMJIRJqWeUguvtEFV(param_1,param_4 + 0x40);
        }
        imp___aeabi_memcpy8(param_1 + 0x800,param_1 + 0xf80,0x140);
        *puVar5 = 0x50;
        return 0;
      }
    }
  }
  return uVar4;
}


// =========================================================================
// Function: uIYWjxxXDlGjwzIvWdIKHTRheL_opLpO
// Entry: 0x71b1ff40 | Size: 176 bytes
// =========================================================================

void uIYWjxxXDlGjwzIvWdIKHTRheL_opLpO(int param_1,double *param_2)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = 0.0;
  iVar2 = 0;
  do {
    pfVar1 = (float *)(param_1 + 0x940 + iVar2);
    iVar2 = iVar2 + 4;
    fVar3 = *pfVar1;
    dVar4 = dVar4 + (double)(fVar3 * fVar3);
  } while (iVar2 != 0x280);
  iVar2 = 0;
  dVar5 = 0.0;
  *param_2 = SQRT(dVar4 / 160.0);
  do {
    pfVar1 = (float *)(param_1 + 0xbc0 + iVar2);
    iVar2 = iVar2 + 4;
    fVar3 = *pfVar1;
    dVar5 = dVar5 + (double)(fVar3 * fVar3);
  } while (iVar2 != 0x280);
  iVar2 = 0;
  dVar4 = 0.0;
  param_2[1] = SQRT(dVar5 / 160.0);
  do {
    pfVar1 = (float *)(param_1 + 0xe40 + iVar2);
    iVar2 = iVar2 + 4;
    fVar3 = *pfVar1;
    dVar4 = dVar4 + (double)(fVar3 * fVar3);
  } while (iVar2 != 0x280);
  param_2[2] = SQRT(dVar4 / 160.0);
  return;
}


// =========================================================================
// Function: TnAHKFtCBeHkGlZJHiRiPqslZUkGwvfJDQNpkNiADjtRtH
// Entry: 0x71b1fff8 | Size: 176 bytes
// =========================================================================

void TnAHKFtCBeHkGlZJHiRiPqslZUkGwvfJDQNpkNiADjtRtH
               (int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_1f28 [2112];
  undefined1 auStack_16e8 [1920];
  undefined1 auStack_f68 [1920];
  undefined1 auStack_7e8 [960];
  undefined1 auStack_428 [960];
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [40];
  
  thunk_ymSTHACZvuXvGpXOUfAKSDxiTayrYK
            (param_1 + 0x940,auStack_428,auStack_7e8,auStack_f68,auStack_16e8,
             *(undefined4 *)(param_1 + 0x10dc));
  thunk_nCLXwfkCwgKOmXUvu_aXrKeB
            (auStack_f68,auStack_1f28,*(undefined4 *)(param_1 + 0x10d8),auStack_68,auStack_48);
  thunk_VnCRIxhqvSZFGdJEjzHbGoayMrpGVrgLLZMtrDUVrXLLbuedQODnkNRwEpxv
            (8000,auStack_48,auStack_68,4,3,param_1 + 0x10c8,param_1 + 0x10d0,param_2,param_3);
  return;
}


// =========================================================================
// Function: dIIwFeSrFgUIpCxpS_sRiWpZcilfYYPHDQhzMJIRJqWeUguvtEFV
// Entry: 0x71b200a8 | Size: 1240 bytes
// =========================================================================

void dIIwFeSrFgUIpCxpS_sRiWpZcilfYYPHDQhzMJIRJqWeUguvtEFV(int param_1,double *param_2)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  bool bVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  float fStack_9d8;
  float fStack_9d4;
  float fStack_9d0;
  float fStack_9cc;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  float fStack_998;
  undefined1 auStack_994 [1980];
  double dStack_1d8;
  double dStack_1d0;
  double dStack_1c8;
  double dStack_1c0;
  double dStack_1b8;
  double dStack_1b0;
  double dStack_1a8;
  double dStack_1a0;
  double dStack_198;
  double dStack_190;
  double dStack_188;
  double dStack_180;
  double dStack_178;
  double dStack_170;
  double dStack_168;
  double dStack_160;
  double dStack_158;
  double dStack_150;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  double dStack_128;
  double dStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  
  thunk_dDmPyxrsyMQtykVHFFsGVsUoAVtepoDeNJIIOXjDRdiKeYB(param_1,&dStack_1d8);
  imp___aeabi_memclr4(auStack_994,0x7bc);
  iVar4 = 1;
  fStack_9d4 = (float)dStack_1d0;
  fStack_9d8 = (float)dStack_1d8;
  fStack_9cc = (float)dStack_1c0;
  fStack_9d0 = (float)dStack_1c8;
  uStack_9b8 = CONCAT44((float)dStack_190,(float)dStack_198);
  iVar2 = param_1 + 0x400;
  fStack_998 = (float)dStack_158;
  pfVar3 = (float *)&uStack_9c8;
  uStack_9c8 = CONCAT44((float)dStack_1b0,(float)dStack_1b8);
  uStack_9c0 = CONCAT44((float)dStack_1a0,(float)dStack_1a8);
  uStack_9b0 = CONCAT44((float)dStack_180,(float)dStack_188);
  uStack_9a8 = CONCAT44((float)dStack_170,(float)dStack_178);
  uStack_9a0 = CONCAT44((float)dStack_160,(float)dStack_168);
  thunk_bEmuaqCJZZkepWiPVTHzKngWmkMIMJSFA(0x200,1,&fStack_9d8,param_1,iVar2);
  fVar6 = fStack_9cc * fStack_9cc + fStack_9d0 * fStack_9d0;
  fVar8 = fStack_9d8 * fStack_9d8;
  do {
    fVar7 = fVar6;
    uVar1 = in_fpscr & 0xfffffff;
    in_fpscr = uVar1 | (uint)(fVar7 < fVar8) << 0x1f;
    fVar6 = pfVar3[1] * pfVar3[1] + *pfVar3 * *pfVar3;
    bVar5 = false;
    if (SUB41(in_fpscr >> 0x1f,0)) {
      in_fpscr = uVar1 | (uint)(fVar7 < fVar6) << 0x1f;
      bVar5 = SUB41(in_fpscr >> 0x1f,0);
    }
    if (bVar5) {
      fVar8 = ((1.0 / fVar6 - 1.0 / fVar8) * -0.5) /
              ((1.0 / fVar8 + 1.0 / fVar6) - (1.0 / fVar7 + 1.0 / fVar7));
      goto LAB_71b20254;
    }
    iVar4 = iVar4 + 1;
    pfVar3 = pfVar3 + 2;
    fVar8 = fVar7;
  } while (iVar4 != 0xff);
  iVar4 = 0;
  fVar8 = 0.0;
  in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar6 < fVar7) << 0x1f;
  if (SUB41(in_fpscr >> 0x1f,0)) {
    iVar4 = (uint)(fVar6 < fStack_9d4 * fStack_9d4) << 8;
  }
LAB_71b20254:
  fVar6 = (float)VectorUnsignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
  *param_2 = (double)((fVar8 + fVar6) * 31.25);
  imp___aeabi_memclr4(auStack_994,0x7bc);
  iVar4 = 1;
  fStack_998 = (float)dStack_d0;
  fStack_9d4 = (float)dStack_148;
  fStack_9d8 = (float)dStack_150;
  fStack_9cc = (float)dStack_138;
  fStack_9d0 = (float)dStack_140;
  uStack_9b8 = CONCAT44((float)dStack_108,(float)dStack_110);
  uStack_9b0 = CONCAT44((float)dStack_f8,(float)dStack_100);
  uStack_9c8 = CONCAT44((float)dStack_128,(float)dStack_130);
  uStack_9c0 = CONCAT44((float)dStack_118,(float)dStack_120);
  uStack_9a8 = CONCAT44((float)dStack_e8,(float)dStack_f0);
  uStack_9a0 = CONCAT44((float)dStack_d8,(float)dStack_e0);
  pfVar3 = (float *)&uStack_9c8;
  thunk_bEmuaqCJZZkepWiPVTHzKngWmkMIMJSFA(0x200,1,&fStack_9d8,param_1,iVar2);
  fVar6 = fStack_9cc * fStack_9cc + fStack_9d0 * fStack_9d0;
  fVar8 = fStack_9d8 * fStack_9d8;
  do {
    fVar7 = fVar6;
    uVar1 = in_fpscr & 0xfffffff;
    in_fpscr = uVar1 | (uint)(fVar7 < fVar8) << 0x1f;
    fVar6 = pfVar3[1] * pfVar3[1] + *pfVar3 * *pfVar3;
    bVar5 = false;
    if (SUB41(in_fpscr >> 0x1f,0)) {
      in_fpscr = uVar1 | (uint)(fVar7 < fVar6) << 0x1f;
      bVar5 = SUB41(in_fpscr >> 0x1f,0);
    }
    if (bVar5) {
      fVar8 = ((1.0 / fVar6 - 1.0 / fVar8) * -0.5) /
              ((1.0 / fVar8 + 1.0 / fVar6) - (1.0 / fVar7 + 1.0 / fVar7));
      goto LAB_71b203dc;
    }
    iVar4 = iVar4 + 1;
    pfVar3 = pfVar3 + 2;
    fVar8 = fVar7;
  } while (iVar4 != 0xff);
  iVar4 = 0;
  fVar8 = 0.0;
  in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar6 < fVar7) << 0x1f;
  if (SUB41(in_fpscr >> 0x1f,0)) {
    iVar4 = (uint)(fVar6 < fStack_9d4 * fStack_9d4) << 8;
  }
LAB_71b203dc:
  fVar6 = (float)VectorUnsignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
  param_2[1] = (double)((fVar8 + fVar6) * 31.25);
  imp___aeabi_memclr4(auStack_994,0x7bc);
  iVar4 = 1;
  fStack_998 = (float)dStack_48;
  fStack_9d4 = (float)dStack_c0;
  fStack_9d8 = (float)dStack_c8;
  fStack_9cc = (float)dStack_b0;
  fStack_9d0 = (float)dStack_b8;
  uStack_9b8 = CONCAT44((float)dStack_80,(float)dStack_88);
  uStack_9b0 = CONCAT44((float)dStack_70,(float)dStack_78);
  uStack_9c8 = CONCAT44((float)dStack_a0,(float)dStack_a8);
  uStack_9c0 = CONCAT44((float)dStack_90,(float)dStack_98);
  uStack_9a8 = CONCAT44((float)dStack_60,(float)dStack_68);
  uStack_9a0 = CONCAT44((float)dStack_50,(float)dStack_58);
  pfVar3 = (float *)&uStack_9c8;
  thunk_bEmuaqCJZZkepWiPVTHzKngWmkMIMJSFA(0x200,1,&fStack_9d8,param_1,iVar2);
  fVar6 = fStack_9cc * fStack_9cc + fStack_9d0 * fStack_9d0;
  fVar8 = fStack_9d8 * fStack_9d8;
  while( true ) {
    fVar7 = fVar6;
    uVar1 = in_fpscr & 0xfffffff;
    in_fpscr = uVar1 | (uint)(fVar7 < fVar8) << 0x1f;
    fVar6 = pfVar3[1] * pfVar3[1] + *pfVar3 * *pfVar3;
    bVar5 = false;
    if (SUB41(in_fpscr >> 0x1f,0)) {
      in_fpscr = uVar1 | (uint)(fVar7 < fVar6) << 0x1f;
      bVar5 = SUB41(in_fpscr >> 0x1f,0);
    }
    if (bVar5) break;
    iVar4 = iVar4 + 1;
    pfVar3 = pfVar3 + 2;
    fVar8 = fVar7;
    if (iVar4 == 0xff) {
      iVar4 = 0;
      fVar8 = 0.0;
      in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar6 < fVar7) << 0x1f;
      if (SUB41(in_fpscr >> 0x1f,0)) {
        iVar4 = (uint)(fVar6 < fStack_9d4 * fStack_9d4) << 8;
      }
LAB_71b20558:
      fVar6 = (float)VectorUnsignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
      param_2[2] = (double)((fVar8 + fVar6) * 31.25);
      return;
    }
  }
  fVar8 = ((1.0 / fVar6 - 1.0 / fVar8) * -0.5) /
          ((1.0 / fVar8 + 1.0 / fVar6) - (1.0 / fVar7 + 1.0 / fVar7));
  goto LAB_71b20558;
}


// =========================================================================
// Function: gMhFEDTuAELWQlmYbhRFKLfeifLwKomdQMfamRujGMEWOVUfnk
// Entry: 0x71b20588 | Size: 112 bytes
// =========================================================================

void gMhFEDTuAELWQlmYbhRFKLfeifLwKomdQMfamRujGMEWOVUfnk
               (int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  float *pfVar1;
  int iVar2;
  double *pdVar3;
  double *pdVar4;
  float fVar5;
  double adStack_790 [240];
  
  iVar2 = 0;
  pfVar1 = (float *)(param_1 + param_4 * 0x280 + 0x800);
  do {
    fVar5 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    pdVar3 = (double *)((int)&DAT_7009a8d8 + iVar2);
    pdVar4 = (double *)((int)adStack_790 + iVar2);
    iVar2 = iVar2 + 8;
    *pdVar4 = *pdVar3 * (double)fVar5;
  } while (iVar2 != 0x780);
  thunk_ZBJDfkhbPfYMWdHknpw(param_2,adStack_790,0xf0,0x10);
  return;
}


// =========================================================================
// Function: dDmPyxrsyMQtykVHFFsGVsUoAVtepoDeNJIIOXjDRdiKeYB
// Entry: 0x71b20600 | Size: 932 bytes
// =========================================================================

void dDmPyxrsyMQtykVHFFsGVsUoAVtepoDeNJIIOXjDRdiKeYB(int param_1,int param_2)

{
  int iVar1;
  double *pdVar2;
  double *pdVar3;
  float *pfVar4;
  float fVar5;
  undefined1 auStack_8e8 [128];
  double dStack_868;
  double dStack_860;
  double dStack_858;
  double dStack_850;
  double dStack_848;
  double dStack_840;
  double dStack_838;
  double dStack_830;
  double dStack_828;
  double dStack_820;
  double dStack_818;
  double dStack_810;
  double dStack_808;
  double dStack_800;
  double dStack_7f8;
  double dStack_7f0;
  double dStack_7e8;
  double adStack_7e0 [240];
  
  pfVar4 = (float *)(param_1 + 0x800);
  iVar1 = 0;
  do {
    fVar5 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pdVar2 = (double *)((int)&DAT_7009a8d8 + iVar1);
    pdVar3 = (double *)((int)adStack_7e0 + iVar1);
    iVar1 = iVar1 + 8;
    *pdVar3 = *pdVar2 * (double)fVar5;
  } while (iVar1 != 0x780);
  thunk_ZBJDfkhbPfYMWdHknpw(&dStack_868,adStack_7e0,0xf0,0x10);
  dStack_868 = dStack_868 * 1.0001;
  dStack_860 = dStack_860 * 0.985;
  dStack_858 = dStack_858 * 0.970225;
  dStack_850 = dStack_850 * 0.955672;
  dStack_848 = dStack_848 * 0.941337;
  dStack_840 = dStack_840 * 0.927217;
  dStack_838 = dStack_838 * 0.913308;
  dStack_830 = dStack_830 * 0.899609;
  dStack_828 = dStack_828 * 0.886115;
  dStack_820 = dStack_820 * 0.872823;
  dStack_818 = dStack_818 * 0.85973;
  dStack_810 = dStack_810 * 0.846834;
  dStack_808 = dStack_808 * 0.834132;
  dStack_800 = dStack_800 * 0.82162;
  dStack_7f8 = dStack_7f8 * 0.809296;
  dStack_7f0 = dStack_7f0 * 0.797156;
  dStack_7e8 = dStack_7e8 * 0.785199;
  thunk_TUVjgQucjMseBddqfN(param_2,auStack_8e8,&dStack_868,0x10);
  pfVar4 = (float *)(param_1 + 0xa80);
  iVar1 = 0;
  do {
    fVar5 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pdVar2 = (double *)((int)&DAT_7009a8d8 + iVar1);
    pdVar3 = (double *)((int)adStack_7e0 + iVar1);
    iVar1 = iVar1 + 8;
    *pdVar3 = *pdVar2 * (double)fVar5;
  } while (iVar1 != 0x780);
  thunk_ZBJDfkhbPfYMWdHknpw(&dStack_868,adStack_7e0,0xf0,0x10);
  dStack_868 = dStack_868 * 1.0001;
  dStack_860 = dStack_860 * 0.985;
  dStack_858 = dStack_858 * 0.970225;
  dStack_850 = dStack_850 * 0.955672;
  dStack_848 = dStack_848 * 0.941337;
  dStack_840 = dStack_840 * 0.927217;
  dStack_838 = dStack_838 * 0.913308;
  dStack_830 = dStack_830 * 0.899609;
  dStack_828 = dStack_828 * 0.886115;
  dStack_820 = dStack_820 * 0.872823;
  dStack_818 = dStack_818 * 0.85973;
  dStack_810 = dStack_810 * 0.846834;
  dStack_808 = dStack_808 * 0.834132;
  dStack_800 = dStack_800 * 0.82162;
  dStack_7f8 = dStack_7f8 * 0.809296;
  dStack_7f0 = dStack_7f0 * 0.797156;
  dStack_7e8 = dStack_7e8 * 0.785199;
  thunk_TUVjgQucjMseBddqfN(param_2 + 0x88,auStack_8e8,&dStack_868,0x10);
  pfVar4 = (float *)(param_1 + 0xd00);
  iVar1 = 0;
  do {
    fVar5 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pdVar2 = (double *)((int)&DAT_7009a8d8 + iVar1);
    pdVar3 = (double *)((int)adStack_7e0 + iVar1);
    iVar1 = iVar1 + 8;
    *pdVar3 = *pdVar2 * (double)fVar5;
  } while (iVar1 != 0x780);
  thunk_ZBJDfkhbPfYMWdHknpw(&dStack_868,adStack_7e0,0xf0,0x10);
  dStack_868 = dStack_868 * 1.0001;
  dStack_860 = dStack_860 * 0.985;
  dStack_858 = dStack_858 * 0.970225;
  dStack_850 = dStack_850 * 0.955672;
  dStack_848 = dStack_848 * 0.941337;
  dStack_840 = dStack_840 * 0.927217;
  dStack_838 = dStack_838 * 0.913308;
  dStack_830 = dStack_830 * 0.899609;
  dStack_828 = dStack_828 * 0.886115;
  dStack_820 = dStack_820 * 0.872823;
  dStack_818 = dStack_818 * 0.85973;
  dStack_810 = dStack_810 * 0.846834;
  dStack_808 = dStack_808 * 0.834132;
  dStack_800 = dStack_800 * 0.82162;
  dStack_7f8 = dStack_7f8 * 0.809296;
  dStack_7f0 = dStack_7f0 * 0.797156;
  dStack_7e8 = dStack_7e8 * 0.785199;
  thunk_TUVjgQucjMseBddqfN(param_2 + 0x110,auStack_8e8,&dStack_868,0x10);
  return;
}


// =========================================================================
// Function: AAdEpWLrVuRzeKH_aypOaweeoqhfVwu_pPmWcvnFTh
// Entry: 0x71b20f38 | Size: 116 bytes
// =========================================================================

undefined4
AAdEpWLrVuRzeKH_aypOaweeoqhfVwu_pPmWcvnFTh(int param_1,uint param_2,float *param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  
  uVar1 = param_2;
  if (param_2 < 0x19) {
    uVar1 = param_4;
  }
  if (uVar1 < 0x19) {
    bVar3 = param_1 == 0;
    if (!bVar3) {
      bVar3 = *param_3 == 0.0;
    }
    if (!bVar3) {
      uVar2 = thunk_MwhHq(500);
      thunk_zFoRTGHaJBhPAZPGAOPqaauJNvieEEMeydCMJ(uVar2,param_1,param_2,param_3,param_4);
      return uVar2;
    }
  }
  return 0;
}


// =========================================================================
// Function: zFoRTGHaJBhPAZPGAOPqaauJNvieEEMeydCMJ
// Entry: 0x71b20fb8 | Size: 220 bytes
// =========================================================================

int zFoRTGHaJBhPAZPGAOPqaauJNvieEEMeydCMJ
              (int param_1,undefined4 param_2,uint param_3,undefined4 param_4,uint param_5)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  
  imp___aeabi_memclr4(param_1,0x1e8);
  pfVar3 = (float *)(param_1 + 0x120);
  uVar1 = param_3;
  if (param_3 < param_5) {
    uVar1 = param_5;
  }
  *(uint *)(param_1 + 0x1ec) = param_5;
  *(uint *)(param_1 + 0x1f0) = uVar1;
  *(uint *)(param_1 + 0x1e8) = param_3;
  imp___aeabi_memcpy4(pfVar3,param_2,param_3 * 4 + 4);
  pfVar2 = (float *)(param_1 + 0x184);
  imp___aeabi_memcpy4(pfVar2,param_4,*(int *)(param_1 + 0x1ec) * 4 + 4);
  if (*(float *)(param_1 + 0x184) != 1.0) {
    uVar1 = *(int *)(param_1 + 0x1e8) + 1;
    if (uVar1 < 2) {
      uVar1 = 1;
    }
    do {
      uVar1 = uVar1 - 1;
      *pfVar3 = *pfVar3 / *pfVar2;
      pfVar3 = pfVar3 + 1;
    } while (uVar1 != 0);
    uVar1 = *(int *)(param_1 + 0x1ec) + 1;
    pfVar3 = pfVar2;
    if (uVar1 < 2) {
      uVar1 = 1;
    }
    do {
      uVar1 = uVar1 - 1;
      *pfVar3 = *pfVar3 / *pfVar2;
      pfVar3 = pfVar3 + 1;
    } while (uVar1 != 0);
  }
  return param_1;
}


// =========================================================================
// Function: NlnyAQeXdcZcWkGHPXtnKeWjCkZrXkLUfiFThxPA
// Entry: 0x71b21094 | Size: 1284 bytes
// =========================================================================

undefined4
NlnyAQeXdcZcWkGHPXtnKeWjCkZrXkLUfiFThxPA(short *param_1,short *param_2,uint param_3,float *param_4)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  short *psVar8;
  short *psVar9;
  int iVar10;
  float *pfVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  float *pfVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint in_fpscr;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  pfVar16 = (float *)0x0;
  if (param_2 != (short *)0x0) {
    pfVar16 = param_4;
  }
  if (param_2 == (short *)0x0 || pfVar16 == (float *)0x0) {
    return 0xffffffff;
  }
  uVar3 = *(uint *)(param_1 + 0xf8);
  uVar12 = param_3;
  if (uVar3 < param_3) {
    uVar12 = uVar3;
  }
  if (uVar12 != 0) {
    iVar5 = *(int *)(param_1 + 0xf6);
    iVar13 = *(int *)(param_1 + 0xf4);
    pfVar16 = (float *)(param_1 + 0x30);
    uVar19 = iVar5 + 1;
    if (uVar19 < 3) {
      uVar19 = 2;
    }
    uVar15 = 2;
    if (2 < iVar13 + 1U) {
      uVar15 = iVar13 + 1U;
    }
    if (iVar13 == 0) {
      psVar9 = param_2;
      pfVar11 = param_4;
      psVar8 = param_1;
      uVar15 = uVar12;
      if (iVar5 == 0) {
        do {
          sVar1 = *psVar9;
          fVar20 = *(float *)(param_1 + 0x90);
          uVar15 = uVar15 - 1;
          *psVar8 = sVar1;
          fVar22 = (float)VectorSignedToFloat((int)sVar1,(byte)(in_fpscr >> 0x16) & 3);
          fVar22 = fVar20 * fVar22 + 0.0;
          *pfVar11 = fVar22;
          *pfVar16 = fVar22;
          pfVar16 = pfVar16 + 1;
          psVar9 = psVar9 + 1;
          pfVar11 = pfVar11 + 1;
          psVar8 = psVar8 + 1;
        } while (uVar15 != 0);
      }
      else {
        pfVar11 = (float *)(param_1 + iVar5 * 2 + 0x2e);
        uVar15 = 0;
        do {
          sVar1 = param_2[uVar15];
          pfVar6 = param_4 + uVar15;
          fVar22 = (float)VectorSignedToFloat((int)sVar1,(byte)(in_fpscr >> 0x16) & 3);
          fVar20 = *(float *)(param_1 + 0x90) * fVar22 + 0.0;
          *pfVar6 = fVar20;
          pfVar4 = (float *)(param_1 + 0xc4);
          pfVar7 = pfVar11;
          iVar13 = uVar19 - 1;
          fVar22 = 0.0;
          do {
            fVar23 = *pfVar4;
            pfVar4 = pfVar4 + 1;
            iVar13 = iVar13 + -1;
            fVar21 = *pfVar7;
            pfVar7 = pfVar7 + -1;
            fVar22 = fVar22 + fVar23 * fVar21;
          } while (iVar13 != 0);
          fVar20 = fVar20 - fVar22;
          pfVar11 = pfVar11 + 1;
          param_1[uVar15] = sVar1;
          iVar13 = iVar5 + uVar15;
          uVar15 = uVar15 + 1;
          *pfVar6 = fVar20;
          pfVar16[iVar13] = fVar20;
        } while (uVar15 != uVar12);
      }
    }
    else if (iVar5 == 0) {
      uVar19 = 0;
      psVar9 = param_1 + iVar13 + -1;
      do {
        fVar21 = *(float *)(param_1 + 0x90);
        sVar1 = param_2[uVar19];
        pfVar4 = param_4 + uVar19;
        fVar20 = (float)VectorSignedToFloat((int)sVar1,(byte)(in_fpscr >> 0x16) & 3);
        *pfVar4 = fVar21 * fVar20;
        psVar8 = psVar9;
        pfVar11 = (float *)(param_1 + 0x92);
        iVar5 = uVar15 - 1;
        fVar22 = 0.0;
        do {
          iVar5 = iVar5 + -1;
          fVar24 = *pfVar11;
          pfVar11 = pfVar11 + 1;
          fVar23 = (float)VectorSignedToFloat((int)*psVar8,(byte)(in_fpscr >> 0x16) & 3);
          fVar22 = fVar22 + fVar24 * fVar23;
          psVar8 = psVar8 + -1;
        } while (iVar5 != 0);
        fVar22 = fVar21 * fVar20 + fVar22;
        psVar9 = psVar9 + 1;
        param_1[iVar13 + uVar19] = sVar1;
        pfVar11 = pfVar16 + uVar19;
        uVar19 = uVar19 + 1;
        *pfVar4 = fVar22;
        *pfVar11 = fVar22;
      } while (uVar19 != uVar12);
    }
    else {
      pfVar11 = (float *)(param_1 + iVar5 * 2 + 0x2e);
      uVar17 = 0;
      psVar9 = param_1 + iVar13 + -1;
      do {
        fVar21 = *(float *)(param_1 + 0x90);
        sVar1 = param_2[uVar17];
        pfVar7 = param_4 + uVar17;
        fVar20 = (float)VectorSignedToFloat((int)sVar1,(byte)(in_fpscr >> 0x16) & 3);
        *pfVar7 = fVar21 * fVar20;
        iVar14 = uVar15 - 1;
        psVar8 = psVar9;
        pfVar4 = (float *)(param_1 + 0x92);
        fVar22 = 0.0;
        do {
          iVar14 = iVar14 + -1;
          fVar24 = *pfVar4;
          pfVar4 = pfVar4 + 1;
          fVar23 = (float)VectorSignedToFloat((int)*psVar8,(byte)(in_fpscr >> 0x16) & 3);
          fVar22 = fVar22 + fVar24 * fVar23;
          psVar8 = psVar8 + -1;
        } while (iVar14 != 0);
        fVar22 = fVar21 * fVar20 + fVar22;
        *pfVar7 = fVar22;
        pfVar4 = (float *)(param_1 + 0xc4);
        pfVar6 = pfVar11;
        iVar14 = uVar19 - 1;
        fVar20 = 0.0;
        do {
          fVar23 = *pfVar4;
          pfVar4 = pfVar4 + 1;
          iVar14 = iVar14 + -1;
          fVar21 = *pfVar6;
          pfVar6 = pfVar6 + -1;
          fVar20 = fVar20 + fVar23 * fVar21;
        } while (iVar14 != 0);
        fVar22 = fVar22 - fVar20;
        pfVar11 = pfVar11 + 1;
        psVar9 = psVar9 + 1;
        param_1[iVar13 + uVar17] = sVar1;
        *pfVar7 = fVar22;
        iVar14 = iVar5 + uVar17;
        uVar17 = uVar17 + 1;
        pfVar16[iVar14] = fVar22;
      } while (uVar17 != uVar12);
    }
  }
  iVar5 = *(int *)(param_1 + 0xf4);
  if (param_3 <= uVar3) {
    imp___aeabi_memmove(param_1,param_1 + param_3,iVar5 << 1);
    imp___aeabi_memmove4(param_1 + 0x30,param_1 + 0x30 + param_3 * 2,*(int *)(param_1 + 0xf6) << 2);
    return 0;
  }
  iVar14 = *(int *)(param_1 + 0xf6);
  iVar13 = param_3 - uVar12;
  psVar9 = param_2 + iVar5 + -1;
  uVar3 = iVar5 + 1;
  if (uVar3 < 3) {
    uVar3 = 2;
  }
  pfVar16 = param_4 + iVar14 + -1;
  uVar19 = 2;
  if (2 < iVar14 + 1U) {
    uVar19 = iVar14 + 1U;
  }
  iVar10 = 0;
  do {
    fVar21 = *(float *)(param_1 + 0x90);
    fVar20 = (float)VectorSignedToFloat((int)param_2[uVar12],(byte)(in_fpscr >> 0x16) & 3);
    pfVar4 = param_4 + uVar12;
    *pfVar4 = fVar21 * fVar20;
    fVar22 = 0.0;
    iVar18 = uVar3 - 1;
    pfVar11 = (float *)(param_1 + 0x92);
    psVar8 = psVar9;
    iVar2 = iVar5;
    while (iVar2 != 0) {
      iVar18 = iVar18 + -1;
      fVar24 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      fVar23 = (float)VectorSignedToFloat((int)*psVar8,(byte)(in_fpscr >> 0x16) & 3);
      fVar22 = fVar22 + fVar24 * fVar23;
      psVar8 = psVar8 + -1;
      iVar2 = iVar18;
    }
    fVar22 = fVar21 * fVar20 + fVar22;
    *pfVar4 = fVar22;
    fVar20 = 0.0;
    iVar18 = uVar19 - 1;
    pfVar11 = (float *)(param_1 + 0xc4);
    pfVar7 = pfVar16;
    iVar2 = iVar14;
    while (iVar2 != 0) {
      fVar23 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      fVar21 = *pfVar7;
      pfVar7 = pfVar7 + -1;
      fVar20 = fVar20 + fVar23 * fVar21;
      iVar18 = iVar18 + -1;
      iVar2 = iVar18;
    }
    iVar10 = iVar10 + 1;
    pfVar16 = pfVar16 + 1;
    psVar9 = psVar9 + 1;
    uVar12 = uVar12 + 1;
    *pfVar4 = fVar22 - fVar20;
  } while (iVar10 != iVar13);
  imp___aeabi_memcpy(param_1,param_2 + (param_3 - iVar5),iVar5 << 1);
  imp___aeabi_memcpy4(param_1 + 0x30,param_4 + (param_3 - *(int *)(param_1 + 0xf6)),
                      *(int *)(param_1 + 0xf6) << 2);
  return 0;
}


// =========================================================================
// Function: VnCRIxhqvSZFGdJEjzHbGoayMrpGVrgLLZMtrDUVrXLLbuedQODnkNRwEpxv
// Entry: 0x71b216f0 | Size: 328 bytes
// =========================================================================

void VnCRIxhqvSZFGdJEjzHbGoayMrpGVrgLLZMtrDUVrXLLbuedQODnkNRwEpxv
               (undefined4 param_1,double *param_2,double *param_3,int param_4,int param_5,
               double *param_6,double *param_7,double *param_8,double *param_9)

{
  double *pdVar1;
  int iVar2;
  uint in_fpscr;
  double dVar3;
  
  pdVar1 = param_2;
  iVar2 = param_4;
  if (0 < param_4) {
    do {
      dVar3 = (double)imp_log(SUB84(*pdVar1 + 1e-12,0),(int)((ulonglong)(*pdVar1 + 1e-12) >> 0x20));
      *pdVar1 = dVar3;
      iVar2 = iVar2 + -1;
      pdVar1 = pdVar1 + 1;
    } while (iVar2 != 0);
  }
  *param_8 = *param_2 * 0.8333333333333334 + *param_6 * 0.16666666666666666;
  param_8[1] = param_2[2] * 0.16666666666666666 + param_2[1] * 0.8333333333333334;
  param_8[2] = param_2[3] * 0.5 + param_2[2] * 0.5;
  *param_6 = param_2[param_4 + -1];
  *param_9 = *param_3 * 0.8333333333333334 + *param_7 * 0.16666666666666666;
  param_9[1] = param_3[2] * 0.16666666666666666 + param_3[1] * 0.8333333333333334;
  param_9[2] = param_3[3] * 0.5 + param_3[2] * 0.5;
  *param_7 = param_3[param_4 + -1];
  if (0 < param_5) {
    dVar3 = (double)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
    do {
      param_5 = param_5 + -1;
      *param_9 = dVar3 / *param_9;
      param_9 = param_9 + 1;
    } while (param_5 != 0);
  }
  return;
}


// =========================================================================
// Function: yJiXrHOpYkXRsCxzmDfUuAhfwzxussAtmVSnEZWrIDQl
// Entry: 0x71b21888 | Size: 40 bytes
// =========================================================================

undefined4 * yJiXrHOpYkXRsCxzmDfUuAhfwzxussAtmVSnEZWrIDQl(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  imp___aeabi_memclr4(param_1 + 1,0x3c4);
  param_1[0xf2] = 3;
  return param_1;
}


// =========================================================================
// Function: fzGHvZuqXPFbyeVyLPwnEEZHgDgpk
// Entry: 0x71b218b0 | Size: 28 bytes
// =========================================================================

undefined4 * fzGHvZuqXPFbyeVyLPwnEEZHgDgpk(undefined4 *param_1)

{
  thunk_XiVSYXKylWWafQ(*param_1);
  return param_1;
}


// =========================================================================
// Function: RtjMTcOPHBLBcDCGvxvrncGtxBxpigwAkp
// Entry: 0x71b218d0 | Size: 100 bytes
// =========================================================================

undefined4 RtjMTcOPHBLBcDCGvxvrncGtxBxpigwAkp(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = thunk_FDgeEJpXxzQwQFyc();
  uVar4 = 0;
  if (iVar1 != 0) {
    iVar2 = thunk_MzYnzAjChAfiFk();
    iVar3 = thunk_RsDuEpSyJFUcDyOEiI(iVar1,3);
    if (iVar3 != 0 || iVar2 != 0) {
      thunk_XiVSYXKylWWafQ(iVar1);
      return 0;
    }
    uVar4 = thunk_MwhHq(0x3cc);
    thunk_yJiXrHOpYkXRsCxzmDfUuAhfwzxussAtmVSnEZWrIDQl(uVar4,iVar1);
  }
  return uVar4;
}


// =========================================================================
// Function: YTGkYGnIsjHfXqnTJhxKVDXpQFwpeZZzXUbVeVy
// Entry: 0x71b21940 | Size: 104 bytes
// =========================================================================

undefined4 YTGkYGnIsjHfXqnTJhxKVDXpQFwpeZZzXUbVeVy(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if (param_3 == 0xa0) {
    iVar1 = *(int *)(param_1 + 0x3c4);
    if (iVar1 - 0x141U < 0xfffffe1f) {
      iVar1 = 0;
      *(undefined4 *)(param_1 + 0x3c4) = 0;
    }
    imp___aeabi_memcpy(param_1 + iVar1 * 2 + 4,param_2,0x140);
    uVar2 = 0;
    *(int *)(param_1 + 0x3c4) = *(int *)(param_1 + 0x3c4) + 0xa0;
  }
  return uVar2;
}


// =========================================================================
// Function: TccfyTtrffvazwVwGtqEayN_woXkw_TXgJpev_NyTy
// Entry: 0x71b219a8 | Size: 212 bytes
// =========================================================================

int TccfyTtrffvazwVwGtqEayN_woXkw_TXgJpev_NyTy(undefined4 *param_1,undefined8 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  uVar4 = param_1[0xf1];
  if (uVar4 == 0) {
    return -1;
  }
  if (param_3 < uVar4 / 0xa0) {
    return -1;
  }
  iVar1 = thunk_ANlpEzfHGkqLkGREF(*param_1,16000,param_1 + 1,uVar4);
  if (iVar1 < 0) {
    return -1;
  }
  uVar8 = 0x3fe0000000000000;
  if (iVar1 == 0) {
    uVar8 = 0x3f847ae147ae147b;
  }
  *param_2 = uVar8;
  if (0x13f < uVar4) {
    uVar6 = uVar4 / 0xa0 - 1;
    uVar5 = 1;
    if (1 < uVar6) {
      puVar7 = param_2 + 1;
      uVar5 = uVar6 | 1;
      uVar3 = uVar6 & 0xfffffffe;
      do {
        *puVar7 = uVar8;
        puVar7[1] = uVar8;
        puVar7 = puVar7 + 2;
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
      if (uVar6 == (uVar6 & 0xfffffffe)) goto LAB_71b21a68;
    }
    param_2 = param_2 + uVar5;
    iVar2 = uVar4 / 0xa0 - uVar5;
    do {
      *param_2 = uVar8;
      param_2 = param_2 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
LAB_71b21a68:
  param_1[0xf1] = 0;
  return iVar1;
}


// =========================================================================
// Function: kMfCjjiUORHRuwtqcrqndShJoJPnRpUrJtwA
// Entry: 0x71b21a88 | Size: 56 bytes
// =========================================================================

undefined4 kMfCjjiUORHRuwtqcrqndShJoJPnRpUrJtwA(undefined4 *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((param_2 < 4) && (iVar1 = thunk_RsDuEpSyJFUcDyOEiI(*param_1), iVar1 == 0)) {
    uVar2 = 0;
    param_1[0xf2] = param_2;
  }
  return uVar2;
}


// =========================================================================
// Function: FDgeEJpXxzQwQFyc
// Entry: 0x71b21c60 | Size: 28 bytes
// =========================================================================

void FDgeEJpXxzQwQFyc(void)

{
  int iVar1;
  
  iVar1 = imp_malloc(0x2e0);
  *(undefined4 *)(iVar1 + 0x2dc) = 0;
  return;
}


// =========================================================================
// Function: XiVSYXKylWWafQ
// Entry: 0x71b21c7c | Size: 4 bytes
// =========================================================================

void XiVSYXKylWWafQ(void)

{
  return;
}


// =========================================================================
// Function: MzYnzAjChAfiFk
// Entry: 0x71b21c80 | Size: 4 bytes
// =========================================================================

undefined4 MzYnzAjChAfiFk(undefined4 *param_1)

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
// Function: RsDuEpSyJFUcDyOEiI
// Entry: 0x71b21c84 | Size: 32 bytes
// =========================================================================

undefined4 RsDuEpSyJFUcDyOEiI(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x2dc) == 0x2a)) {
    uVar1 = thunk_KAaJcIqYcrGDRuvjKPFzUbt();
    return uVar1;
  }
  return 0xffffffff;
}


// =========================================================================
// Function: ANlpEzfHGkqLkGREF
// Entry: 0x71b21ca4 | Size: 272 bytes
// =========================================================================

int ANlpEzfHGkqLkGREF(int param_1,int param_2,int param_3,int param_4)

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
// Function: MGlhndfDcQrmOqSywuSDaobVXeUSKgq_U
// Entry: 0x71b21db4 | Size: 124 bytes
// =========================================================================

int MGlhndfDcQrmOqSywuSDaobVXeUSKgq_U(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 < 32000) {
    if (param_1 == 8000) {
      iVar1 = 8;
    }
    else {
      if (param_1 != 16000) {
        return -1;
      }
      iVar1 = 0x10;
    }
  }
  else if (param_1 == 32000) {
    iVar1 = 0x20;
  }
  else {
    if (param_1 != 48000) {
      return -1;
    }
    iVar1 = 0x30;
  }
  return -(uint)((param_2 + iVar1 * -10 != 0 && param_2 + iVar1 * -0x14 != 0) &&
                param_2 + iVar1 * -0x1e != 0);
}


// =========================================================================
// Function: UqlnXcJWUkCAaTidfC
// Entry: 0x71b21f30 | Size: 408 bytes
// =========================================================================

undefined4 UqlnXcJWUkCAaTidfC(undefined4 *param_1)

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
// Function: KAaJcIqYcrGDRuvjKPFzUbt
// Entry: 0x71b220f0 | Size: 376 bytes
// =========================================================================

undefined4 KAaJcIqYcrGDRuvjKPFzUbt(int param_1,undefined4 param_2)

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
// Function: aluXflhAteCZATAxhnNbbJ
// Entry: 0x71b22278 | Size: 144 bytes
// =========================================================================

void aluXflhAteCZATAxhnNbbJ(int param_1,undefined4 param_2,uint param_3)

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
// Function: lkAkvAUcggaWVpEgpFMPH
// Entry: 0x71b22308 | Size: 2440 bytes
// =========================================================================

void lkAkvAUcggaWVpEgpFMPH(int *param_1,undefined4 param_2,int param_3)

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
// Function: GGMCnEVQCZMWYNIryLiKfO
// Entry: 0x71b22cb0 | Size: 92 bytes
// =========================================================================

void GGMCnEVQCZMWYNIryLiKfO(int param_1,undefined4 param_2,uint param_3)

{
  undefined1 auStack_5c0 [480];
  undefined1 auStack_3e0 [960];
  
  thunk_InqGGgdqqpvpslKjvKYfkH(param_2,auStack_3e0,param_1 + 0xc,param_3);
  thunk_InqGGgdqqpvpslKjvKYfkH(auStack_3e0,auStack_5c0,param_1 + 4,param_3 >> 1);
  thunk_lkAkvAUcggaWVpEgpFMPH(param_1,auStack_5c0,param_3 >> 2);
  return;
}


// =========================================================================
// Function: LvuqcfvlKLylrjyEgpaFWV
// Entry: 0x71b22d0c | Size: 68 bytes
// =========================================================================

void LvuqcfvlKLylrjyEgpaFWV(int param_1,undefined4 param_2,uint param_3)

{
  undefined1 auStack_1f8 [480];
  
  thunk_InqGGgdqqpvpslKjvKYfkH(param_2,auStack_1f8,param_1 + 4,param_3);
  thunk_lkAkvAUcggaWVpEgpFMPH(param_1,auStack_1f8,param_3 >> 1);
  return;
}


// =========================================================================
// Function: cHvMMgTBmqvtyaJZoNRZuyJoW_C
// Entry: 0x71b23190 | Size: 2804 bytes
// =========================================================================

int cHvMMgTBmqvtyaJZoNRZuyJoW_C(int param_1,short *param_2,uint param_3,short *param_4)

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
// Function: PwxunZSTjugGwOkR
// Entry: 0x71b23d44 | Size: 168 bytes
// =========================================================================

int PwxunZSTjugGwOkR(short *param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  short *psVar4;
  uint uVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined1 auVar10 [16];
  
  uVar1 = thunk_PERNOFKdbSz_NdGwkEyWIkDbJA(param_1,param_2,param_2);
  iVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 4) {
      uVar5 = 0;
      psVar4 = param_1;
    }
    else {
      auVar8._8_8_ = CONCAT44(uVar1,uVar1);
      auVar8._0_8_ = CONCAT44(uVar1,uVar1);
      uVar5 = param_2 & 0xfffffffc;
      auVar7 = (undefined1  [16])0x0;
      auVar8 = FloatVectorNeg(auVar8,1,4);
      psVar4 = param_1 + uVar5;
      uVar3 = uVar5;
      do {
        uVar9 = *(undefined8 *)param_1;
        param_1 = param_1 + 4;
        uVar3 = uVar3 - 4;
        auVar10 = VectorMultiply(uVar9,uVar9,2,0);
        auVar10 = VectorShiftLeft(auVar10,auVar8,4,1);
        auVar7 = VectorAdd(auVar10,auVar7,4);
      } while (uVar3 != 0);
      uVar9 = VectorAdd(auVar7._0_8_,auVar7._8_8_,4);
      iVar2 = (int)uVar9 + (int)((ulonglong)uVar9 >> 0x20);
      if (uVar5 == param_2) goto LAB_71b23de0;
    }
    iVar6 = param_2 - uVar5;
    do {
      iVar6 = iVar6 + -1;
      iVar2 = iVar2 + ((uint)((int)*psVar4 * (int)*psVar4) >> (uVar1 & 0xff));
      psVar4 = psVar4 + 1;
    } while (iVar6 != 0);
  }
LAB_71b23de0:
  *param_3 = uVar1;
  return iVar2;
}


// =========================================================================
// Function: PERNOFKdbSz_NdGwkEyWIkDbJA
// Entry: 0x71b23e20 | Size: 232 bytes
// =========================================================================

int PERNOFKdbSz_NdGwkEyWIkDbJA(undefined1 (*param_1) [16],uint param_2,undefined4 param_3)

{
  ushort uVar1;
  short sVar2;
  undefined1 *puVar3;
  uint uVar4;
  short sVar5;
  uint uVar6;
  short sVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  uVar6 = 0xffff;
  sVar5 = -1;
  if (param_2 != 0) {
    if (param_2 < 8) {
LAB_71b23e8c:
      do {
        sVar5 = (short)uVar6;
        uVar1 = (short)*(ushort *)*param_1 >> 0xf;
        uVar4 = (uint)(short)((*(ushort *)*param_1 ^ uVar1) - uVar1);
        uVar6 = (int)sVar5;
        if ((int)sVar5 < (int)uVar4) {
          uVar6 = uVar4;
        }
        param_2 = param_2 - 1;
        param_1 = (undefined1 (*) [16])(*param_1 + 2);
      } while (param_2 != 0);
    }
    else {
      uVar4 = param_2 & 0xfffffff8;
      auVar10._8_8_ = SUB158(SUB1615((undefined1  [16])0x0,1),7);
      auVar10._0_8_ = 0xffffffffffffffff;
      auVar10 = *(undefined1 (*) [16])(auVar10 << 0x40 | auVar10);
      puVar3 = *param_1;
      uVar6 = uVar4;
      do {
        auVar11 = *param_1;
        param_1 = param_1 + 1;
        uVar6 = uVar6 - 8;
        auVar11 = VectorAbsolute(auVar11,2);
        auVar10 = VectorMax(auVar11,auVar10,2,0);
      } while (uVar6 != 0);
      uVar9 = VectorPairwiseMax(auVar10._0_8_,auVar10._8_8_,2,0);
      bVar8 = uVar4 != param_2;
      uVar9 = VectorPairwiseMax(uVar9,uVar9,2,0);
      uVar9 = VectorPairwiseMax(uVar9,uVar9,2,0);
      uVar6 = (uint)(short)uVar9;
      param_2 = param_2 & 7;
      param_1 = (undefined1 (*) [16])(puVar3 + uVar4 * 2);
      if (bVar8) goto LAB_71b23e8c;
    }
    sVar5 = (short)uVar6;
    if ((uVar6 & 0xffff) == 0) {
      sVar5 = 0;
      bVar8 = true;
      goto LAB_71b23ee0;
    }
  }
  sVar5 = (short)LZCOUNT((int)sVar5 * (int)sVar5) + -1;
  bVar8 = false;
LAB_71b23ee0:
  sVar2 = 0x20 - (short)LZCOUNT(param_3);
  sVar7 = sVar2 - sVar5;
  if (sVar2 < sVar5) {
    sVar7 = 0;
  }
  if (bVar8) {
    sVar7 = 0;
  }
  return (int)sVar7;
}


// =========================================================================
// Function: lTlauVLgjNOQPgXDll_tXvOdRwYlg
// Entry: 0x71b23f20 | Size: 152 bytes
// =========================================================================

int lTlauVLgjNOQPgXDll_tXvOdRwYlg(short param_1,short param_2,int param_3,short *param_4)

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
// Function: InqGGgdqqpvpslKjvKYfkH
// Entry: 0x71b23fec | Size: 116 bytes
// =========================================================================

void InqGGgdqqpvpslKjvKYfkH(short *param_1,short *param_2,uint *param_3,uint param_4)

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
// Function: NvayVgJfYjlgQfGJSSCZC
// Entry: 0x71b24060 | Size: 804 bytes
// =========================================================================

int NvayVgJfYjlgQfGJSSCZC(int param_1,int param_2,int param_3)

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
// Function: BTRvTsjrWtDHhgbTYCGLxPqGpijBu
// Entry: 0x71b243a0 | Size: 140 bytes
// =========================================================================

undefined4 * BTRvTsjrWtDHhgbTYCGLxPqGpijBu(undefined4 *param_1)

{
  undefined4 uVar1;
  
  param_1[10] = 0x33333333;
  param_1[0xb] = 0x3fd33333;
  uVar1 = thunk_PofpGRXoctrEUTfkISDDvXPY_UqjPrMZrCyExO(500);
  param_1[0xc] = uVar1;
  param_1[2] = &DAT_7009b2e0;
  param_1[3] = 3;
  param_1[4] = 0xc;
  param_1[8] = 3;
  param_1[9] = 0xc;
  *param_1 = &DAT_7009b160;
  param_1[1] = &DAT_7009b1c0;
  param_1[5] = &DAT_7009b640;
  param_1[6] = &DAT_7009b6a0;
  param_1[7] = &DAT_7009b7c0;
  return param_1;
}


// =========================================================================
// Function: IKCwteGMGjVcQRcwyAEmB_FFd_Bml
// Entry: 0x71b24444 | Size: 60 bytes
// =========================================================================

int IKCwteGMGjVcQRcwyAEmB_FFd_Bml(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (iVar1 != 0) {
    thunk_U_EBNTtrgIlFWGtTbOgIYhzcVdXianunB();
    thunk_qNQrlu();
  }
  return param_1;
}


// =========================================================================
// Function: IKSUJOPFVXrbWxLe_GVANujLjfLWLmIgvPOSuTdFuvploYHXMlgQlkcZEFAGJnmJb
// Entry: 0x71b24480 | Size: 504 bytes
// =========================================================================

int IKSUJOPFVXrbWxLe_GVANujLjfLWLmIgvPOSuTdFuvploYHXMlgQlkcZEFAGJnmJb
              (int param_1,int param_2,double *param_3)

{
  ulonglong uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  
  if (*(int *)(param_2 + 0x80) == 0) {
    return 0;
  }
  pdVar5 = (double *)(param_2 + 0x40);
  uVar4 = 0;
  do {
    dStack_78 = *pdVar5;
    dStack_70 = pdVar5[-4];
    dStack_80 = pdVar5[-8];
    dVar6 = (double)thunk_AQnkxbhURgwGpOGTTCrRQcwwNxeShJhZzjbtpCfiWJbEvPCR
                              (&dStack_80,param_1 + 0x14);
    dVar7 = (double)thunk_AQnkxbhURgwGpOGTTCrRQcwwNxeShJhZzjbtpCfiWJbEvPCR(&dStack_80,param_1);
    uVar1 = (ulonglong)dVar7 >> 0x20;
    if (((*pdVar5 < 200.0) || (2000.0 < *pdVar5)) || (pdVar5[-8] < -2.0)) {
      dVar6 = dVar7 * 1e-12;
    }
    else if (-0.9 < pdVar5[-8]) {
      dVar7 = dVar6 * 1e-12;
    }
    dVar6 = dVar6 * *(double *)(param_1 + 0x28);
    dVar6 = dVar6 / (dVar6 + dVar7 * (1.0 - *(double *)(param_1 + 0x28)));
    dVar7 = 0.99;
    if ((dVar6 <= 0.99) && (dVar7 = dVar6, dVar6 < 0.01)) {
      dVar7 = 0.01;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x30);
    dVar6 = dVar7 * *param_3;
    dVar6 = dVar6 / (dVar6 + (1.0 - dVar7) * (1.0 - *param_3));
    *param_3 = dVar6;
    thunk_tubpmzqlxzPCVPEMUUJUhFZmKwULIb_WtUerAZ
              (uVar2,(int)uVar1,SUB84(dVar6,0),(int)((ulonglong)dVar6 >> 0x20));
    iVar3 = thunk_vrA_MdQVjZomFBNItoElqxeOolHVbODauMvEAaLkwtAEwzexb
                      (*(undefined4 *)(param_1 + 0x30),7,0x9999999a,0x3fc99999);
    if (iVar3 < 0) break;
    dVar6 = (double)thunk_iBoJXJQZqNK_eZJSqFSamrXsyZTGqXMRZYVk(*(undefined4 *)(param_1 + 0x30));
    dVar7 = 0.99;
    if ((dVar6 <= 0.99) && (dVar7 = dVar6, dVar6 < 0.01)) {
      dVar7 = 0.01;
    }
    pdVar5 = pdVar5 + 1;
    param_3 = param_3 + 1;
    uVar4 = uVar4 + 1;
    *(double *)(param_1 + 0x28) = dVar7;
  } while (uVar4 < *(uint *)(param_2 + 0x80));
  return iVar3 >> 0x1f;
}


// =========================================================================
// Function: mQeVxIsSTUtpWuBGCsDYPeMNlTVrgZCoDsZsmGfO
// Entry: 0x71b246b0 | Size: 76 bytes
// =========================================================================

undefined4 mQeVxIsSTUtpWuBGCsDYPeMNlTVrgZCoDsZsmGfO(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  thunk_tubpmzqlxzPCVPEMUUJUhFZmKwULIb_WtUerAZ(*(undefined4 *)(param_1 + 0x30));
  iVar1 = thunk_vrA_MdQVjZomFBNItoElqxeOolHVbODauMvEAaLkwtAEwzexb
                    (*(undefined4 *)(param_1 + 0x30),7,0x9999999a,0x3fc99999);
  if (-1 < iVar1) {
    uVar2 = thunk_iBoJXJQZqNK_eZJSqFSamrXsyZTGqXMRZYVk(*(undefined4 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    return 0;
  }
  return 0xffffffff;
}


// =========================================================================
// Function: MKpBiemEYiZqhmpLNLfCalZzJCNyZfrMX
// Entry: 0x71b248fc | Size: 68 bytes
// =========================================================================

undefined4 * MKpBiemEYiZqhmpLNLfCalZzJCNyZfrMX(undefined4 *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_2 << 3;
  if (0x1fffffff < param_2) {
    iVar1 = -1;
  }
  uVar2 = thunk__IBDl(iVar1);
  *param_1 = uVar2;
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return param_1;
}


// =========================================================================
// Function: U_EBNTtrgIlFWGtTbOgIYhzcVdXianunB
// Entry: 0x71b24940 | Size: 52 bytes
// =========================================================================

int * U_EBNTtrgIlFWGtTbOgIYhzcVdXianunB(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = 0;
  if (iVar1 == 0) {
    return param_1;
  }
  thunk_dGrRHE(iVar1);
  return param_1;
}


// =========================================================================
// Function: zFsFfTYsQCeEXrFXkKoPSPejKnWkuxAKBLlDj
// Entry: 0x71b24974 | Size: 24 bytes
// =========================================================================

void zFsFfTYsQCeEXrFXkKoPSPejKnWkuxAKBLlDj(int param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}


// =========================================================================
// Function: PofpGRXoctrEUTfkISDDvXPY_UqjPrMZrCyExO
// Entry: 0x71b2498c | Size: 56 bytes
// =========================================================================

undefined4 PofpGRXoctrEUTfkISDDvXPY_UqjPrMZrCyExO(int param_1)

{
  undefined4 uVar1;
  
  if (0 < param_1) {
    uVar1 = thunk_MwhHq(0x18);
    thunk_MKpBiemEYiZqhmpLNLfCalZzJCNyZfrMX(uVar1,param_1);
    return uVar1;
  }
  return 0;
}


// =========================================================================
// Function: _FnTdSEFo_RBdnRQwmtSynAAHcU_RKGCGfffqxm
// Entry: 0x71b249d0 | Size: 36 bytes
// =========================================================================

undefined8 _FnTdSEFo_RBdnRQwmtSynAAHcU_RKGCGfffqxm(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[2];
  if ((char)param_1[1] == '\0') {
    iVar1 = 0;
  }
  return *(undefined8 *)(*param_1 + iVar1 * 8);
}


// =========================================================================
// Function: iBoJXJQZqNK_eZJSqFSamrXsyZTGqXMRZYVk
// Entry: 0x71b249f4 | Size: 68 bytes
// =========================================================================

double iBoJXJQZqNK_eZJSqFSamrXsyZTGqXMRZYVk(int param_1)

{
  uint in_fpscr;
  int iVar1;
  double dVar2;
  
  if (*(char *)(param_1 + 4) == '\0') {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 < 1) {
      return 0.0;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0xc);
  }
  dVar2 = (double)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
  return *(double *)(param_1 + 0x10) / dVar2;
}


// =========================================================================
// Function: tubpmzqlxzPCVPEMUUJUhFZmKwULIb_WtUerAZ
// Entry: 0x71b24a38 | Size: 108 bytes
// =========================================================================

void tubpmzqlxzPCVPEMUUJUhFZmKwULIb_WtUerAZ
               (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  double dVar3;
  
  if ((char)param_1[1] == '\0') {
    iVar2 = *param_1;
    iVar1 = param_1[2];
    dVar3 = *(double *)(param_1 + 4);
  }
  else {
    iVar1 = param_1[2];
    iVar2 = *param_1;
    dVar3 = *(double *)(param_1 + 4) - *(double *)(iVar2 + iVar1 * 8);
  }
  param_1[2] = iVar1 + 1;
  if (param_1[3] <= iVar1 + 1) {
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  *(double *)(param_1 + 4) = dVar3 + (double)CONCAT44(param_4,param_3);
  *(ulonglong *)(iVar2 + iVar1 * 8) = CONCAT44(param_4,param_3);
  return;
}


// =========================================================================
// Function: jCz_HdEGrwQqPPyJKBLF_YPVYbXEktAcmsLGL_mgZNBe
// Entry: 0x71b24aa4 | Size: 24 bytes
// =========================================================================

undefined4 jCz_HdEGrwQqPPyJKBLF_YPVYbXEktAcmsLGL_mgZNBe(int param_1)

{
  int iVar1;
  
  iVar1 = 0xc;
  if (*(char *)(param_1 + 4) == '\0') {
    iVar1 = 8;
  }
  return *(undefined4 *)(param_1 + iVar1);
}


// =========================================================================
// Function: wyRkznuQAGJQbzImcSArrKBoTFxQkJZUTRSjyb
// Entry: 0x71b24abc | Size: 104 bytes
// =========================================================================

undefined4 wyRkznuQAGJQbzImcSArrKBoTFxQkJZUTRSjyb(int *param_1,uint param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0xffffffff;
  if (-1 < (int)param_2) {
    if (param_1[3] <= (int)param_2) {
      return 0xffffffff;
    }
    if (((char)param_1[1] != '\0') || ((int)param_2 < param_1[2])) {
      iVar2 = param_1[2] + ~param_2;
      uVar1 = 0;
      *param_3 = *(undefined8 *)(*param_1 + iVar2 * 8 + (param_1[3] & iVar2 >> 0x1f) * 8);
    }
  }
  return uVar1;
}


// =========================================================================
// Function: iyzyerrdBkenxktiAzejOPUP_xUrKctjoGaUhkJekEvYLmUfSzyTlIa
// Entry: 0x71b24b24 | Size: 104 bytes
// =========================================================================

undefined4 iyzyerrdBkenxktiAzejOPUP_xUrKctjoGaUhkJekEvYLmUfSzyTlIa(int param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_2;
  if (-1 < (int)uVar1) {
    if (*(int *)(param_1 + 0xc) <= (int)uVar1) {
      return 0xffffffff;
    }
    if ((*(char *)(param_1 + 4) != '\0') || ((int)uVar1 < *(int *)(param_1 + 8))) {
      uVar1 = *(int *)(param_1 + 8) + ~uVar1;
      *param_2 = uVar1;
      if (0x7fffffff < uVar1) {
        *param_2 = *(int *)(param_1 + 0xc) + uVar1;
      }
      return 0;
    }
  }
  return 0xffffffff;
}


// =========================================================================
// Function: OpNUVxKltrhEUSwOWKGVoSopRRTZtSmiUhYs
// Entry: 0x71b24b8c | Size: 132 bytes
// =========================================================================

undefined4
OpNUVxKltrhEUSwOWKGVoSopRRTZtSmiUhYs
          (int *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  double *pdVar2;
  undefined4 uVar3;
  
  uVar3 = 0xffffffff;
  if (((-1 < (int)param_2) && ((int)param_2 < param_1[3])) &&
     (((char)param_1[1] != '\0' || ((int)param_2 < param_1[2])))) {
    iVar1 = param_1[2] + ~param_2;
    uVar3 = 0;
    pdVar2 = (double *)(*param_1 + iVar1 * 8 + (param_1[3] & iVar1 >> 0x1f) * 8);
    *(double *)(param_1 + 4) = *(double *)(param_1 + 4) - *pdVar2;
    *pdVar2 = (double)CONCAT44(param_4,param_3);
    *(double *)(param_1 + 4) = *(double *)(param_1 + 4) + (double)CONCAT44(param_4,param_3);
  }
  return uVar3;
}


// =========================================================================
// Function: vrA_MdQVjZomFBNItoElqxeOolHVbODauMvEAaLkwtAEwzexb
// Entry: 0x71b24c10 | Size: 580 bytes
// =========================================================================

undefined4
vrA_MdQVjZomFBNItoElqxeOolHVbODauMvEAaLkwtAEwzexb
          (int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  double *pdVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  double dVar13;
  
  cVar2 = (char)param_1[1];
  if ((cVar2 != '\0') || (param_2 + 2 <= param_1[2])) {
    uVar12 = param_1[3];
    if (((int)uVar12 < 1) || ((cVar2 == '\0' && (param_1[2] < 1)))) {
      return 0xffffffff;
    }
    dVar13 = (double)CONCAT44(param_4,param_3);
    iVar8 = param_1[2] + -1;
    pdVar4 = (double *)(*param_1 + iVar8 * 8 + (uVar12 & iVar8 >> 0x1f) * 8);
    if (*pdVar4 < dVar13) {
      *(double *)(param_1 + 4) = *(double *)(param_1 + 4) - *pdVar4;
      *(undefined4 *)pdVar4 = 0;
      *(undefined4 *)((int)pdVar4 + 4) = 0;
      *(double *)(param_1 + 4) = *(double *)(param_1 + 4) + 0.0;
      if (-1 < param_2) {
        uVar5 = param_2 + 1;
        iVar8 = param_1[2];
        uVar9 = uVar5;
        if (0 < (int)uVar5) {
          uVar9 = 1;
        }
        iVar10 = (iVar8 - param_2) + -2;
        if (cVar2 == '\0') {
          iVar3 = iVar8 * 8 + param_2 * -8 + *param_1 + -0x10;
          uVar6 = uVar5;
          do {
            if (uVar12 <= uVar6) {
              return 0xffffffff;
            }
            if (iVar8 <= (int)uVar5) {
              return 0xffffffff;
            }
            uVar7 = uVar6;
            if (*(double *)(iVar3 + (uVar12 & iVar10 >> 0x1f) * 8) < dVar13) break;
            iVar10 = iVar10 + 1;
            iVar3 = iVar3 + 8;
            uVar11 = uVar6 - 1;
            bVar1 = 0 < (int)uVar6;
            uVar6 = uVar11;
            uVar7 = uVar9 - 1;
          } while (uVar11 != 0 && bVar1);
        }
        else {
          iVar8 = iVar8 * 8 + param_2 * -8 + *param_1 + -0x10;
          do {
            if (uVar12 <= uVar5) {
              return 0xffffffff;
            }
            uVar7 = uVar5;
            if (*(double *)(iVar8 + (uVar12 & iVar10 >> 0x1f) * 8) < dVar13) break;
            iVar10 = iVar10 + 1;
            iVar8 = iVar8 + 8;
            uVar6 = uVar5 - 1;
            bVar1 = 0 < (int)uVar5;
            uVar5 = uVar6;
            uVar7 = uVar9 - 1;
          } while (uVar6 != 0 && bVar1);
        }
        if (0 < (int)uVar7) {
          iVar8 = *param_1;
          uVar5 = ~uVar7;
          if (cVar2 == '\0') {
            do {
              if (uVar12 <= uVar7) {
                return 0xffffffff;
              }
              if (param_1[2] <= (int)uVar7) {
                return 0xffffffff;
              }
              iVar10 = uVar5 + param_1[2];
              uVar5 = uVar5 + 1;
              uVar9 = uVar7 - 1;
              uVar6 = uVar12 & iVar10 >> 0x1f;
              iVar10 = iVar8 + iVar10 * 8;
              pdVar4 = (double *)(iVar10 + uVar6 * 8);
              *(double *)(param_1 + 4) = *(double *)(param_1 + 4) - *pdVar4;
              *(undefined4 *)(iVar10 + uVar6 * 8) = 0;
              *(undefined4 *)((int)pdVar4 + 4) = 0;
              *(double *)(param_1 + 4) = *(double *)(param_1 + 4) + 0.0;
              bVar1 = 0 < (int)uVar7;
              uVar7 = uVar9;
            } while (uVar9 != 0 && bVar1);
          }
          else {
            do {
              if (uVar12 <= uVar7) {
                return 0xffffffff;
              }
              uVar9 = uVar7 - 1;
              iVar10 = uVar5 + param_1[2];
              uVar5 = uVar5 + 1;
              uVar6 = uVar12 & iVar10 >> 0x1f;
              iVar10 = iVar8 + iVar10 * 8;
              pdVar4 = (double *)(iVar10 + uVar6 * 8);
              *(double *)(param_1 + 4) = *(double *)(param_1 + 4) - *pdVar4;
              *(undefined4 *)(iVar10 + uVar6 * 8) = 0;
              *(undefined4 *)((int)pdVar4 + 4) = 0;
              *(double *)(param_1 + 4) = *(double *)(param_1 + 4) + 0.0;
              bVar1 = 0 < (int)uVar7;
              uVar7 = uVar9;
            } while (uVar9 != 0 && bVar1);
          }
        }
      }
    }
  }
  return 0;
}


// =========================================================================
// Function: AQnkxbhURgwGpOGTTCrRQcwwNxeShJhZzjbtpCfiWJbEvPCR
// Entry: 0x71b24f14 | Size: 388 bytes
// =========================================================================

double AQnkxbhURgwGpOGTTCrRQcwwNxeShJhZzjbtpCfiWJbEvPCR(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double adStack_88 [10];
  
  iVar11 = param_2[3];
  if (iVar11 < 0xb) {
    iVar10 = param_2[4];
    if (iVar10 < 1) {
      dVar14 = 0.0;
    }
    else {
      puVar13 = (undefined8 *)*param_2;
      if (iVar11 < 1) {
        dVar14 = 0.0;
        do {
          dVar15 = (double)imp_exp((int)*puVar13,(int)((ulonglong)*puVar13 >> 0x20));
          puVar13 = puVar13 + 1;
          iVar10 = iVar10 + -1;
          dVar14 = dVar14 + dVar15;
        } while (iVar10 != 0);
      }
      else {
        iVar9 = param_2[1];
        iVar7 = param_2[2];
        iVar12 = 0;
        dVar14 = 0.0;
        do {
          iVar1 = 0;
          iVar2 = iVar11;
          do {
            pdVar3 = (double *)(iVar9 + iVar1);
            iVar2 = iVar2 + -1;
            pdVar4 = (double *)(param_1 + iVar1);
            pdVar5 = (double *)((int)adStack_88 + iVar1);
            iVar1 = iVar1 + 8;
            *pdVar5 = *pdVar4 - *pdVar3;
          } while (iVar2 != 0);
          dVar15 = 0.0;
          iVar1 = 0;
          iVar2 = iVar7;
          do {
            dVar16 = 0.0;
            iVar6 = 0;
            iVar8 = iVar11;
            do {
              pdVar3 = (double *)((int)adStack_88 + iVar6);
              iVar8 = iVar8 + -1;
              pdVar4 = (double *)(iVar2 + iVar6);
              iVar6 = iVar6 + 8;
              dVar16 = dVar16 + *pdVar4 * *pdVar3;
            } while (iVar8 != 0);
            pdVar3 = adStack_88 + iVar1;
            iVar1 = iVar1 + 1;
            iVar2 = iVar2 + iVar11 * 8;
            dVar15 = dVar15 + dVar16 * *pdVar3;
          } while (iVar1 != iVar11);
          dVar15 = (double)puVar13[iVar12] + dVar15 * -0.5;
          dVar15 = (double)imp_exp(SUB84(dVar15,0),(int)((ulonglong)dVar15 >> 0x20));
          dVar14 = dVar14 + dVar15;
          iVar12 = iVar12 + 1;
          iVar9 = iVar9 + iVar11 * 8;
          iVar7 = iVar7 + iVar11 * iVar11 * 8;
        } while (iVar12 != iVar10);
      }
    }
  }
  else {
    dVar14 = -1.0;
  }
  return dVar14;
}


// =========================================================================
// Function: vcW_FxvvqQjFWNVGeshypOggJHHFXTRgTrwyQgyqANNPSqaEQ_mcLZkNDKQio
// Entry: 0x71b250f0 | Size: 3444 bytes
// =========================================================================

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4
vcW_FxvvqQjFWNVGeshypOggJHHFXTRgTrwyQgyqANNPSqaEQ_mcLZkNDKQio
          (int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined2 *puVar3;
  undefined2 uVar4;
  short sVar5;
  short sVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined2 uVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  undefined2 *puVar14;
  int iVar15;
  undefined1 (*pauVar16) [16];
  uint uVar17;
  ushort *puVar18;
  short *psVar19;
  short sVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined2 *puVar24;
  short *psVar25;
  ushort uVar26;
  undefined1 (*pauVar27) [16];
  short *psVar28;
  short sVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  short sVar32;
  short *psVar33;
  undefined4 uVar34;
  int iVar35;
  short *psVar36;
  int iVar37;
  short sVar38;
  bool bVar39;
  longlong lVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 in_q9 [16];
  undefined1 auVar46 [16];
  undefined1 in_q10 [16];
  undefined1 auVar47 [16];
  undefined8 uVar49;
  undefined1 auVar48 [16];
  ulonglong uVar50;
  undefined1 auVar51 [16];
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined1 auVar55 [16];
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 *puStack_bd8;
  undefined4 uStack_bd4;
  undefined8 uStack_bce;
  short sStack_bc6;
  short sStack_bc4;
  short sStack_bc2;
  short sStack_bc0;
  short sStack_bbe;
  short sStack_bbc;
  short sStack_bba;
  short sStack_bb8;
  short sStack_bb6;
  short sStack_bb4;
  short sStack_bb2;
  short sStack_bb0;
  short sStack_bae;
  short sStack_bac;
  short sStack_baa;
  short sStack_ba8;
  short sStack_ba6;
  short sStack_ba4;
  short sStack_ba2;
  short sStack_ba0;
  undefined8 uStack_b9e;
  undefined8 uStack_b96;
  undefined8 uStack_b8e;
  undefined8 uStack_b86;
  undefined8 uStack_b7e;
  undefined8 uStack_b76;
  undefined8 uStack_b6e;
  undefined8 uStack_b66;
  undefined8 uStack_b5e;
  undefined8 uStack_b56;
  short sStack_b4e;
  short asStack_b40 [128];
  short asStack_a40 [144];
  short asStack_920 [272];
  int aiStack_700 [72];
  short asStack_5e0 [2];
  short asStack_5dc [126];
  short asStack_4e0 [143];
  undefined1 auStack_3c2 [130];
  undefined1 auStack_340 [130];
  undefined1 auStack_2be [130];
  undefined4 uStack_23c;
  undefined4 uStack_238;
  short asStack_22e [65];
  short asStack_1ac [196];
  
  psVar33 = (short *)(param_1 + 0x3694);
  if ((short)*(ushort *)(param_1 + 0x4332) < 2) {
    uVar26 = (ushort)(*(uint *)(param_1 + 0x3698) >> 10 != 0);
    if (*(uint *)(param_1 + 0x3698) >> 9 != 0) {
      uVar26 = uVar26 + 1;
    }
    *(ushort *)(param_1 + 0x4332) = uVar26;
  }
  imp___aeabi_memcpy(*(int *)(param_1 + 0x3e6c) + 0x80,param_2,0x80);
  imp___aeabi_memcpy(*(int *)(param_1 + 0x3e74) + 0x80,param_3,0x80);
  if (param_4 != 0) {
    imp___aeabi_memcpy(*(int *)(param_1 + 0x3e70) + 0x80,param_4,0x80);
  }
  uStack_bd4 = FUN_71b25e70(param_1,*(undefined4 *)(param_1 + 0x3e6c),asStack_920,auStack_2be);
  puStack_bd8 = auStack_340;
  uVar11 = FUN_71b25e70(param_1,*(undefined4 *)(param_1 + 0x3e74),asStack_920,puStack_bd8);
  uVar4 = *(undefined2 *)(param_1 + 0x36a0);
  *(short *)(param_1 + 0x36a0) = (short)uVar11;
  *(undefined2 *)(param_1 + 0x36a2) = uVar4;
  if (param_4 == 0) {
    *(short *)(param_1 + 0x369c) = (short)uVar11;
    *(undefined2 *)(param_1 + 0x369e) = uVar4;
    uStack_23c = uStack_238;
  }
  else {
    puStack_bd8 = auStack_3c2;
    uVar10 = FUN_71b25e70(param_1,*(undefined4 *)(param_1 + 0x3e70),asStack_920);
    uVar4 = *(undefined2 *)(param_1 + 0x369c);
    *(undefined2 *)(param_1 + 0x369c) = uVar10;
    *(undefined2 *)(param_1 + 0x369e) = uVar4;
  }
  thunk_NtkpbPFKOKocUbUiLPpBgLxexLeZwlhfppGETLKwwcbisLiTljXoGrvIU(param_1,auStack_2be,uStack_bd4);
  iVar12 = thunk_cpspIwmh_XYHex_ITBXnMczbugsFxhIidjGzIXoVmuLi
                     (*(undefined4 *)(param_1 + 0x22c),auStack_2be,0x41,uStack_bd4);
  uVar34 = 0xffffffff;
  if ((iVar12 != -1) &&
     (iVar12 = thunk_NkTcRfTHrtwaKMzDFicAfthkdgTUNciiztNBjlzOgfRRprHiWeO
                         (*(undefined4 *)(param_1 + 0x230),auStack_340,0x41,uVar11), iVar12 != -1))
  {
    iVar37 = 0;
    if (iVar12 != -2) {
      iVar37 = iVar12;
    }
    if (-1 < *(short *)(param_1 + 0x3696)) {
      iVar37 = (int)*(short *)(param_1 + 0x3696);
    }
    iVar12 = thunk_KoTxjDGupbJmpnlSzNwosxNtqvNwdrCDvZNlhJSmbbsSDKpsyCbWlz
                       (param_1,&uStack_bd4,iVar37);
    if (iVar12 != 0) {
      psVar28 = asStack_b40;
      psVar19 = asStack_5e0;
      sVar5 = (short)uStack_bd4;
      thunk_AhJ_TeMMvhwbXjUNIqCgFPWJsPnjSyCigMDEHOaBQQbmqsGCQcHqDNZdI
                (param_1,iVar12,(int)sVar5,uStack_238);
      thunk_TmZHOPIjupcXgPXmBAlMtTYtENeymQLiWvjldieADGXVOTupVJ(param_1);
      *(int *)(param_1 + 0x3698) = *(int *)(param_1 + 0x3698) + 1;
      thunk_kuXYTPXwSvBLqzVbzrQzWfUsUEmv_Ofqk_uScAtCRasbsIwnfoahWeFZ_Ekjw
                (param_1,iVar12,(int)sVar5,auStack_340);
      uVar13 = thunk_ZT_kCQrnJlODLRTASNSabIupMRgbeZQeFLXLPjbkfcoHwzKAbbMtAdsss(param_1);
      iVar12 = param_1 + 0x3f80;
      iVar37 = 0;
      sVar29 = 0;
      do {
        iVar15 = iVar12 + iVar37 * 2;
        lVar40 = (longlong)(*(int *)((int)aiStack_700 + iVar37 * 2) - *(int *)(iVar15 + -0x104)) *
                 0x32;
        uVar17 = *(int *)(iVar15 + -0x104) +
                 ((uint)lVar40 >> 8 | (int)((ulonglong)lVar40 >> 0x20) << 0x18);
        *(uint *)(iVar15 + -0x104) = uVar17;
        if (uVar17 == 0) {
          sVar32 = 1;
          sVar20 = 1;
          if (uVar13 != 0) goto LAB_71b25408;
LAB_71b25428:
          sVar32 = sVar20;
          sVar20 = 0;
        }
        else {
          sVar32 = (short)LZCOUNT(uVar17 ^ (int)uVar17 >> 0x1f);
          sVar20 = sVar32;
          if (uVar13 == 0) goto LAB_71b25428;
LAB_71b25408:
          sVar20 = (short)LZCOUNT(uVar13 ^ (int)uVar13 >> 0xf) + -0x11;
        }
        if ((int)(short)(sVar20 + 1) + (int)sVar32 < 0x11) {
          sVar6 = sVar20 + 1 + sVar32;
          sVar20 = *(short *)(param_1 + 0x369c);
          iVar15 = *(int *)(iVar15 + -0x104);
          sVar38 = (sVar20 - (sVar6 + sVar5)) + 0xb;
          uVar17 = (uint)(short)(0x11 - sVar6);
          if ((int)uVar17 < (int)sVar32) {
            uVar17 = (int)uVar13 >> (uVar17 & 0xff) & 0xffff;
          }
          else {
            iVar15 = iVar15 >> (uVar17 & 0xff);
            uVar17 = uVar13;
          }
          iVar15 = iVar15 * uVar17;
          uVar26 = *(ushort *)(iVar12 + iVar37);
          if (uVar26 != 0) goto LAB_71b2546c;
LAB_71b254e4:
          uVar17 = 0;
        }
        else {
          sVar20 = *(short *)(param_1 + 0x369c);
          iVar15 = *(int *)(iVar15 + -0x104) * (uVar13 & 0xffff);
          sVar38 = (sVar20 - sVar5) + -6;
          uVar26 = *(ushort *)(iVar12 + iVar37);
          if (uVar26 == 0) goto LAB_71b254e4;
LAB_71b2546c:
          sVar20 = *(short *)(param_1 + 0x369c);
          uVar17 = LZCOUNT((int)(short)(uVar26 ^ (ushort)((uint)(int)(short)uVar26 >> 0xf))) - 0x11;
        }
        puVar18 = (ushort *)(iVar12 + iVar37);
        sVar20 = sVar20 - *(short *)(param_1 + 0x369e);
        uVar21 = (uint)sVar20;
        if (((int)(short)uVar17 < (int)uVar21) && (*puVar18 != 0)) {
          sVar20 = (short)uVar17 - sVar20;
          iVar35 = (uint)*puVar18 << (uVar17 & 0xff);
          uVar26 = *(ushort *)(puStack_bd8 + iVar37) >> (-(int)sVar20 & 0xffU);
        }
        else {
          uVar26 = *(ushort *)(puStack_bd8 + iVar37);
          iVar35 = (int)(short)*puVar18 << (uVar21 & 0xff);
          if ((int)uVar21 < 0) {
            iVar35 = (int)(short)*puVar18 >> (-uVar21 & 0xff);
          }
          sVar20 = 0;
        }
        uVar17 = iVar35 + ((int)(short)uVar26 - (int)(short)iVar35 >> 4);
        uVar26 = (ushort)uVar17;
        if ((uVar17 & 0xffff) == 0) {
          sVar32 = 0;
        }
        else {
          sVar32 = (short)LZCOUNT((int)(short)(uVar26 ^ (ushort)((uint)(int)(short)uVar26 >> 0xf)))
                   + -0x11;
        }
        uVar22 = (uint)sVar20;
        uVar21 = (int)(short)uVar26 >> (uVar22 & 0xff);
        if ((int)uVar22 < 0) {
          uVar21 = uVar17 << (-uVar22 & 0xff);
        }
        iVar35 = 0x4000;
        uVar23 = uVar21;
        if ((int)sVar32 < (int)-uVar22) {
          uVar23 = 0x7fff;
        }
        if ((uVar17 & 1) == 0) {
          uVar23 = uVar21;
        }
        *puVar18 = (ushort)uVar23;
        if ((iVar15 != 0) && (iVar35 = 0, (uVar23 & 0xffff) != 0)) {
          uVar21 = thunk_HcvPIMd_epoKtXVyJrp
                             (iVar15 + ((int)(short)(ushort)uVar23 >> 1),uVar23 & 0xffff);
          uVar22 = (uint)sVar38;
          uVar17 = uVar21 << (uVar22 & 0xff);
          if ((int)uVar22 < 0) {
            uVar17 = uVar21 >> (-uVar22 & 0xff);
          }
          if (((int)uVar17 < 0x4001) && (iVar35 = 0x4000, -1 < (int)uVar17)) {
            iVar35 = 0x4000 - (uVar17 & 0xffff);
          }
        }
        if (iVar35 != 0) {
          sVar29 = sVar29 + 1;
        }
        puVar14 = (undefined2 *)((int)&uStack_bce + iVar37);
        iVar37 = iVar37 + 2;
        *puVar14 = (short)iVar35;
      } while (iVar37 != 0x82);
      if (*(short *)(param_1 + 0x224) == 2) {
        auVar46._8_2_ = sStack_bc6;
        auVar46._0_8_ = uStack_bce;
        auVar46._10_2_ = sStack_bc4;
        auVar46._12_2_ = sStack_bc2;
        auVar46._14_2_ = sStack_bc0;
        auVar47 = VectorMultiply(auVar46._8_8_,auVar46._8_8_,2,0);
        auVar44 = VectorMultiply(uStack_bce,uStack_bce,2,0);
        uVar49 = CONCAT26(sStack_bb8,CONCAT24(sStack_bba,CONCAT22(sStack_bbc,sStack_bbe)));
        auVar51._8_2_ = sStack_bb6;
        auVar51._0_8_ = uVar49;
        auVar51._10_2_ = sStack_bb4;
        auVar51._12_2_ = sStack_bb2;
        auVar51._14_2_ = sStack_bb0;
        auVar51 = VectorMultiply(auVar51._8_8_,auVar51._8_8_,2,0);
        auVar46 = VectorMultiply(uVar49,uVar49,2,0);
        uVar49 = VectorShiftNarrowRight(auVar47,0xe);
        uStack_bce = VectorShiftNarrowRight(auVar44,0xe);
        VectorShiftNarrowRight(auVar51,0xe);
        sStack_bc6 = (short)uVar49;
        sStack_bc4 = (short)((ulonglong)uVar49 >> 0x10);
        sStack_bc2 = (short)((ulonglong)uVar49 >> 0x20);
        sStack_bc0 = (short)((ulonglong)uVar49 >> 0x30);
        VectorShiftNarrowRight(auVar46,0xe);
        uVar49 = CONCAT26(sStack_ba8,CONCAT24(sStack_baa,CONCAT22(sStack_bac,sStack_bae)));
        auVar47._8_2_ = sStack_ba6;
        auVar47._0_8_ = uVar49;
        auVar47._10_2_ = sStack_ba4;
        auVar47._12_2_ = sStack_ba2;
        auVar47._14_2_ = sStack_ba0;
        auVar46 = VectorMultiply(auVar47._8_8_,auVar47._8_8_,2,0);
        auVar44 = VectorMultiply(uVar49,uVar49,2,0);
        VectorShiftNarrowRight(auVar46,0xe);
        VectorShiftNarrowRight(auVar44,0xe);
        auVar44 = VectorMultiply(uStack_b96,uStack_b96,2,0);
        auVar46 = VectorMultiply(uStack_b9e,uStack_b9e,2,0);
        auVar45._8_8_ = VectorShiftNarrowRight(auVar44,0xe);
        auVar45._0_8_ = VectorShiftNarrowRight(auVar46,0xe);
        auVar46 = VectorUnsignedFixedToFloat(auVar46,0xe);
        auVar44 = VectorUnsignedFixedToFloat(auVar44,0xe);
        auVar46 = VectorShiftLeft(auVar46,0x10,0x20,0);
        auVar55 = VectorMultiply(uStack_b86,uStack_b86,2,0);
        auVar47 = VectorMultiply(uStack_b8e,uStack_b8e,2,0);
        auVar51 = VectorSignedFixedToFloat(auVar46,0x10);
        auVar44 = VectorShiftLeft(auVar44,0x10,0x20,0);
        uVar56 = VectorShiftNarrowRight(auVar55,0xe);
        uVar52 = VectorShiftNarrowRight(auVar47,0xe);
        auVar46 = VectorSignedFixedToFloat(auVar44,0x10);
        auVar47 = VectorMultiply(uStack_b76,uStack_b76,2,0);
        auVar44 = VectorMultiply(uStack_b7e,uStack_b7e,2,0);
        uVar57 = VectorShiftNarrowRight(auVar47,0xe);
        uVar53 = VectorShiftNarrowRight(auVar44,0xe);
        auVar47 = VectorMultiply(uStack_b66,uStack_b66,2,0);
        auVar44 = VectorMultiply(uStack_b6e,uStack_b6e,2,0);
        uVar58 = VectorShiftNarrowRight(auVar47,0xe);
        uVar54 = VectorShiftNarrowRight(auVar44,0xe);
        iVar12 = ((int)sStack_bc6 + (int)sStack_bc4 + (int)sStack_bc2 + (int)sStack_bc0 +
                  (int)sStack_bbe + (int)sStack_bbc + (int)sStack_bba + (int)sStack_bb8 +
                  (int)sStack_bb6 + (int)sStack_bb4 + (int)sStack_bb2 + (int)sStack_bb0 +
                  (int)sStack_bae + (int)sStack_bac + (int)sStack_baa + (int)sStack_ba8 +
                  (int)sStack_ba6 + (int)sStack_ba4 + (int)sStack_ba2 + (int)sStack_ba0 +
                 auVar51._0_4_) / 0x15;
        auVar44 = VectorMultiply(uStack_b56,uStack_b56,2,0);
        auVar47 = VectorMultiply(uStack_b5e,uStack_b5e,2,0);
        uVar59 = VectorShiftNarrowRight(auVar44,0xe);
        auVar44._8_8_ = CONCAT44(iVar12,iVar12);
        auVar44._0_8_ = CONCAT44(iVar12,iVar12);
        uVar49 = VectorShiftNarrowRight(auVar47,0xe);
        auVar51 = VectorCompareGreaterThan(auVar51,auVar44,4);
        auVar46 = VectorCompareGreaterThan(auVar46,auVar44,4);
        auVar9._8_8_ = uVar59;
        auVar9._0_8_ = uVar49;
        auVar55 = VectorCopyLong(uVar59,2,0);
        auVar8._8_8_ = uVar58;
        auVar8._0_8_ = uVar54;
        auVar47 = VectorCopyLong(uVar49,2,0);
        auVar41._8_8_ = VectorCopyNarrow(auVar46,4);
        auVar7._8_8_ = uVar57;
        auVar7._0_8_ = uVar53;
        auVar55 = VectorCompareGreaterThan(auVar55,auVar44,4);
        auVar46 = VectorCompareGreaterThan(auVar47,auVar44,4);
        auVar41._0_8_ = VectorCopyNarrow(auVar51,4);
        uVar11 = CONCAT22((short)iVar12,(short)iVar12);
        uVar49 = CONCAT44(uVar11,uVar11);
        in_q10._8_8_ = uVar49;
        in_q10._0_8_ = uVar49;
        auVar47 = VectorBitwiseInsertIfTrue(auVar45,in_q10,auVar41);
        auVar61._8_8_ = VectorCopyNarrow(auVar55,4);
        auVar61._0_8_ = VectorCopyNarrow(auVar46,4);
        auVar55 = VectorCopyLong(uVar57,2,0);
        auVar51 = VectorCopyLong(uVar53,2,0);
        auVar46 = VectorCopyLong(uVar54,2,0);
        auVar55 = VectorCompareGreaterThan(auVar55,auVar44,4);
        auVar51 = VectorCompareGreaterThan(auVar51,auVar44,4);
        auVar46 = VectorCompareGreaterThan(auVar46,auVar44,4);
        auVar60._8_8_ = VectorCopyNarrow(auVar55,4);
        auVar60._0_8_ = VectorCopyNarrow(auVar51,4);
        auVar51 = VectorCopyLong(uVar58,2,0);
        auVar51 = VectorCompareGreaterThan(auVar51,auVar44,4);
        auVar42._8_8_ = VectorCopyNarrow(auVar51,4);
        auVar42._0_8_ = VectorCopyNarrow(auVar46,4);
        auVar55._8_8_ = uVar56;
        auVar55._0_8_ = uVar52;
        auVar46 = VectorCopyLong(uVar56,2,0);
        auVar51 = VectorCopyLong(uVar52,2,0);
        auVar46 = VectorCompareGreaterThan(auVar46,auVar44,4);
        auVar44 = VectorCompareGreaterThan(auVar51,auVar44,4);
        auVar43._8_8_ = VectorCopyNarrow(auVar46,4);
        auVar43._0_8_ = VectorCopyNarrow(auVar44,4);
        auVar51 = VectorBitwiseSelect(auVar43,in_q10,auVar55);
        uStack_b9e = auVar47._0_8_;
        uStack_b96 = auVar47._8_8_;
        auVar44 = VectorBitwiseSelect(auVar61,in_q10,auVar9);
        iVar37 = (int)(short)((uint)((int)sStack_b4e * (int)sStack_b4e) >> 0xe);
        auVar46 = VectorBitwiseSelect(auVar60,in_q10,auVar7);
        if (iVar12 < iVar37) {
          iVar37 = iVar12;
        }
        in_q9 = VectorBitwiseInsertIfTrue(auVar8,in_q10,auVar42);
        uStack_b8e = auVar51._0_8_;
        uStack_b86 = auVar51._8_8_;
        uStack_b7e = auVar46._0_8_;
        uStack_b76 = auVar46._8_8_;
        uStack_b6e = in_q9._0_8_;
        uStack_b66 = in_q9._8_8_;
        uStack_b5e = auVar44._0_8_;
        uStack_b56 = auVar44._8_8_;
        sStack_b4e = (short)iVar37;
      }
      psVar36 = asStack_b40 + 1;
      if (*psVar33 == 0) {
        iVar12 = 0;
        psVar25 = (short *)&uStack_bce;
        do {
          sVar5 = *psVar25;
          iVar37 = iVar12 + 4;
          sVar29 = *(short *)((int)asStack_920 + iVar12 + 2);
          *(short *)((int)asStack_b40 + iVar12) =
               (short)((int)*(short *)((int)asStack_920 + iVar12) * (int)sVar5 + 0x2000U >> 0xe);
          *(short *)((int)asStack_b40 + iVar12 + 2) =
               (short)((int)sVar29 * (int)sVar5 + 0x2000U >> 0xe);
          iVar12 = iVar37;
          psVar25 = psVar25 + 1;
        } while (iVar37 != 0x104);
      }
      else {
        iVar12 = 0;
        puVar18 = (ushort *)&uStack_bce;
        do {
          uVar26 = *puVar18;
          uVar13 = (uint)uVar26;
          if ((short)uVar26 < 0xccd) {
            uVar13 = 0;
          }
          if (0x4000 < (short)uVar26) {
            uVar13 = 0x4000;
          }
          uVar17 = (uint)(2 < sVar29) * 0x4000 * uVar13;
          if (uVar13 != 0x4000) {
            uVar13 = uVar17 >> 0xe;
          }
          uVar26 = (ushort)uVar13;
          if (sVar29 < 3) {
            uVar26 = (ushort)(uVar17 >> 0xe);
          }
          *puVar18 = uVar26;
          iVar37 = iVar12 + 4;
          sVar5 = *(short *)((int)asStack_920 + iVar12 + 2);
          *(short *)((int)asStack_b40 + iVar12) =
               (short)((int)*(short *)((int)asStack_920 + iVar12) * (int)(short)uVar26 + 0x2000U >>
                      0xe);
          *(short *)((int)psVar36 + iVar12) =
               (short)((int)sVar5 * (int)(short)uVar26 + 0x2000U >> 0xe);
          iVar12 = iVar37;
          puVar18 = puVar18 + 1;
        } while (iVar37 != 0x104);
      }
      if (*(short *)(param_1 + 0x4312) == 1) {
        sVar5 = *(short *)(param_1 + 0x4310);
        iVar12 = 9;
        if (sVar5 < 100) {
          *(short *)(param_1 + 0x4310) = sVar5 + 1;
          iVar12 = 6;
        }
        uVar13 = 0xf - *(ushort *)(param_1 + 0x369c);
        pauVar27 = (undefined1 (*) [16])(param_1 + 0x4004);
        iVar37 = 0;
        pauVar16 = pauVar27;
        do {
          uVar26 = *(ushort *)(puStack_bd8 + iVar37);
          uVar17 = *(uint *)*pauVar16;
          if ((int)((uint)uVar26 << (uVar13 & 0xff)) < (int)uVar17) {
            *(undefined4 *)(pauVar16[0x10] + 4) = 0;
            if (1 << iVar12 <= (int)uVar17) {
              uVar17 = uVar17 - ((int)(uVar17 - ((uint)uVar26 << (uVar13 & 0xff))) >> iVar12);
              goto LAB_71b25a30;
            }
            iVar15 = *(int *)(pauVar16[0x20] + 8);
            *(int *)(pauVar16[0x20] + 8) = iVar15 + 1;
            if (3 < iVar15) {
              *(undefined4 *)(pauVar16[0x20] + 8) = 0;
              uVar17 = uVar17 - 1;
              goto LAB_71b25a30;
            }
          }
          else {
            *(undefined4 *)(pauVar16[0x20] + 8) = 0;
            if ((int)uVar17 < 0x80000) {
              if ((int)uVar17 < 0x800) {
                iVar15 = *(int *)(pauVar16[0x10] + 4);
                *(int *)(pauVar16[0x10] + 4) = iVar15 + 1;
                if (iVar15 < 4) goto LAB_71b25a34;
                *(undefined4 *)(pauVar16[0x10] + 4) = 0;
                uVar17 = uVar17 + ((int)uVar17 >> 9) + 1;
              }
              else {
                uVar17 = uVar17 * 0x801 >> 0xb;
              }
            }
            else {
              uVar17 = (uVar17 >> 0xb) * 0x801;
            }
LAB_71b25a30:
            *(uint *)*pauVar16 = uVar17;
          }
LAB_71b25a34:
          iVar37 = iVar37 + 2;
          pauVar16 = (undefined1 (*) [16])(*pauVar16 + 4);
        } while (iVar37 != 0x82);
        uVar13 = (uint)(short)uVar13;
        auVar2._8_8_ = CONCAT44(uVar13,uVar13);
        auVar2._0_8_ = CONCAT44(uVar13,uVar13);
        auVar1._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar1._0_8_ = 0x7fff00007fff;
        in_q9 = *(undefined1 (*) [16])(auVar1 << 0x40 | auVar1);
        auVar48._8_8_ = in_q10._8_8_;
        auVar48._0_8_ = 0x4000400040004000;
        auVar44 = FloatVectorNeg(auVar2,1,4);
        iVar12 = 0x7fff << (uVar13 & 0xff);
        iVar37 = 0;
        do {
          auVar46 = VectorShiftLeft(*pauVar27,auVar44,4,0);
          auVar51 = VectorCompareGreaterThan(auVar46,in_q9,4);
          auVar46 = VectorMin(auVar46,in_q9,4,0);
          uVar50 = VectorCopyNarrow(auVar51,4);
          auVar46 = VectorShiftLeft(auVar46,0x10,0x20,0);
          auVar46 = VectorSignedFixedToFloat(auVar46,0x10);
          if ((uVar50 & 1) != 0) {
            *(int *)*pauVar27 = iVar12;
          }
          if ((uVar50 & 0x10000) != 0) {
            *(int *)(*pauVar27 + 4) = iVar12;
          }
          if ((uVar50 >> 0x20 & 1) != 0) {
            *(int *)(*pauVar27 + 8) = iVar12;
          }
          puVar30 = (undefined8 *)((int)&uStack_bce + iVar37);
          if ((uVar50 & 0x1000000000000) != 0) {
            *(int *)(*pauVar27 + 0xc) = iVar12;
          }
          pauVar27 = pauVar27 + 1;
          puVar31 = (undefined8 *)((int)asStack_22e + iVar37);
          iVar37 = iVar37 + 8;
          uVar49 = VectorSub(auVar48._0_8_,*puVar30,2);
          auVar51 = VectorCopyLong(uVar49,2,0);
          auVar46 = VectorMultiply(auVar46,auVar51,4);
          auVar48._8_8_ = VectorShiftNarrowRight(auVar46,0xe);
          *puVar31 = auVar48._8_8_;
        } while (iVar37 != 0x80);
        iVar37 = *(int *)(param_1 + 0x4104) >> (uVar13 & 0xff);
        if (0x7fff < iVar37) {
          *(int *)(param_1 + 0x4104) = iVar12;
          iVar37 = 0x7fff;
        }
        asStack_22e[0x40] =
             (short)((uint)((int)(short)iVar37 * (int)(short)(0x4000 - sStack_b4e)) >> 0xe);
        thunk_VzzAJmrFSAbHPFwWQutB(asStack_1ac + 0x82,0x40,param_1 + 0x228);
        asStack_1ac[0x41] = 0;
        iVar12 = 2;
        asStack_1ac[0] = 0;
        do {
          sVar5 = *(short *)((int)asStack_22e + iVar12);
          iVar37 = *(short *)((int)asStack_1ac + iVar12 + 0x102) * 0x167 >> 0xf;
          sVar29 = *(short *)(&DAT_70097138 + iVar37 * 2);
          *(short *)((int)asStack_1ac + iVar12 + 0x82) =
               (short)((uint)((int)*(short *)(&DAT_70096e68 + iVar37 * 2) * (int)sVar5) >> 0xd);
          puVar14 = (undefined2 *)((int)asStack_1ac + iVar12);
          iVar12 = iVar12 + 2;
          *puVar14 = (short)((uint)-((int)sVar5 * (int)sVar29) >> 0xd);
        } while (iVar12 != 0x82);
        iVar12 = 0;
        asStack_1ac[0x40] = 0;
        do {
          sVar29 = SignedSaturate(psVar36[-1] + *(short *)((int)asStack_1ac + iVar12 + 0x82),0x10);
          SignedSaturate(0,0x10);
          psVar25 = (short *)((int)asStack_1ac + iVar12);
          iVar12 = iVar12 + 2;
          sVar5 = *psVar25;
          psVar36[-1] = sVar29;
          sVar5 = SignedSaturate(*psVar36 + sVar5,0x10);
          SignedSaturate(0,0x10);
          *psVar36 = sVar5;
          psVar36 = psVar36 + 2;
        } while (iVar12 != 0x82);
      }
      psVar25 = asStack_a40;
      psVar36 = asStack_5dc;
      bVar39 = psVar36 < psVar25;
      if (bVar39) {
        psVar25 = asStack_4e0;
        psVar36 = asStack_b40 + 2;
      }
      if (bVar39 && psVar36 < psVar25) {
        iVar37 = 2;
        iVar12 = 1;
      }
      else {
        iVar12 = 4;
        do {
          puVar24 = (undefined2 *)((int)psVar28 + iVar12);
          puVar14 = (undefined2 *)0x380;
          puVar3 = (undefined2 *)0x390;
          lVar40 = 4;
          while( true ) {
            *puVar14 = *puVar24;
            puVar24 = puVar24 + 1;
            *puVar3 = *puVar24;
            puVar24 = puVar24 + 1;
            lVar40 = lVar40 + -1;
            if (lVar40 == 0) break;
            puVar14 = puVar14 + 1;
            puVar3 = puVar3 + 1;
          }
          puVar14 = (undefined2 *)0x388;
          puVar3 = (undefined2 *)0x398;
          lVar40 = 4;
          while( true ) {
            *puVar14 = *puVar24;
            puVar24 = puVar24 + 1;
            *puVar3 = *puVar24;
            puVar24 = puVar24 + 1;
            lVar40 = lVar40 + -1;
            if (lVar40 == 0) break;
            puVar14 = puVar14 + 1;
            puVar3 = puVar3 + 1;
          }
          puVar24 = (undefined2 *)((int)psVar19 + iVar12);
          iVar12 = iVar12 + 0x20;
          in_q9 = FloatVectorNeg(in_q9,1,2);
          puVar14 = (undefined2 *)0x380;
          puVar3 = (undefined2 *)0x390;
          lVar40 = 4;
          while( true ) {
            *puVar24 = *puVar14;
            puVar24[1] = *puVar3;
            puVar24 = puVar24 + 2;
            lVar40 = lVar40 + -1;
            if (lVar40 == 0) break;
            puVar14 = puVar14 + 1;
            puVar3 = puVar3 + 1;
          }
          puVar14 = (undefined2 *)0x388;
          puVar3 = (undefined2 *)0x398;
          lVar40 = 4;
          while( true ) {
            *puVar24 = *puVar14;
            puVar24[1] = *puVar3;
            puVar24 = puVar24 + 2;
            lVar40 = lVar40 + -1;
            if (lVar40 == 0) break;
            puVar14 = puVar14 + 1;
            puVar3 = puVar3 + 1;
          }
        } while (iVar12 != 0xe4);
        iVar37 = 0x72;
        iVar12 = 0x39;
      }
      iVar12 = iVar12 << 2;
      psVar36 = psVar19 + iVar37 + 1;
      do {
        psVar25 = (short *)((int)psVar28 + iVar12);
        iVar12 = iVar12 + 4;
        psVar36[-1] = *psVar25;
        *psVar36 = -psVar25[1];
        psVar36 = psVar36 + 2;
      } while (iVar12 != 0x100);
      *psVar19 = *psVar28;
      psVar19[1] = -psVar28[1];
      psVar19[0x80] = psVar28[0x80];
      uVar11 = *(undefined4 *)(psVar33 + 0x658);
      psVar19[0x81] = -psVar28[0x81];
      iVar12 = thunk_gpyojGvvUyFeScvvTvvGtXOV(uVar11,psVar19,psVar28);
      iVar37 = 0;
      do {
        psVar36 = (short *)((int)psVar28 + iVar37 + 0x80);
        uVar13 = (int)psVar36[-0x40] * (int)*(short *)((int)&DAT_7009bb20 + iVar37) + 0x2000;
        psVar36[-0x40] = (short)(uVar13 >> 0xe);
        sVar5 = *(short *)((int)&DAT_7009bba0 - iVar37);
        iVar35 = (int)(uVar13 * 4) >> 0x10;
        uVar13 = iVar12 - psVar33[4];
        iVar15 = iVar35 << (uVar13 & 0xff);
        psVar19 = (short *)(*(int *)(psVar33 + 0x3f2) + iVar37);
        if ((int)uVar13 < 0) {
          iVar15 = iVar35 >> (-uVar13 & 0xff);
        }
        iVar15 = iVar15 + *psVar19;
        puVar14 = (undefined2 *)(param_5 + iVar37);
        uVar11 = SignedSaturate(iVar15,0x10);
        SignedDoesSaturate(iVar15,0x10);
        iVar37 = iVar37 + 2;
        *puVar14 = (short)uVar11;
        uVar13 = iVar12 - psVar33[4];
        iVar15 = (int)sVar5 * (int)*psVar36 >> 0xe;
        iVar35 = iVar15 << (uVar13 & 0xff);
        if ((int)uVar13 < 0) {
          iVar35 = iVar15 >> (-uVar13 & 0xff);
        }
        uVar11 = SignedSaturate(iVar35,0x10);
        SignedDoesSaturate(iVar35,0x10);
        *psVar19 = (short)uVar11;
      } while (iVar37 != 0x80);
      imp___aeabi_memcpy(*(int *)(psVar33 + 0x3ec),*(int *)(psVar33 + 0x3ec) + 0x80,0x80);
      imp___aeabi_memcpy(*(int *)(psVar33 + 0x3f0),*(int *)(psVar33 + 0x3f0) + 0x80,0x80);
      uVar34 = 0;
      if (param_4 != 0) {
        imp___aeabi_memcpy(*(int *)(psVar33 + 0x3ee),*(int *)(psVar33 + 0x3ee) + 0x80,0x80);
      }
    }
  }
  return uVar34;
}


// =========================================================================
// Function: FUN_71b25e70
// Entry: 0x71b25e70 | Size: 1724 bytes
// =========================================================================

undefined8
FUN_71b25e70(int param_1,undefined1 (*param_2) [16],ushort *param_3,undefined2 *param_4,int *param_5
            )

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
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
  undefined2 auStack_240 [8];
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
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [264];
  
  uVar3 = SINmIZbRimekUUmaLUp_X_PRs(param_2,0x80);
  uVar9 = 0;
  if (uVar3 != 0) {
    uVar9 = LZCOUNT(uVar3 ^ (int)uVar3 >> 0xf) * 0x10000 + -0x110000 >> 0x10;
  }
  bVar10 = param_2 + 0x10 <= (undefined1 (*) [16])auStack_240 ||
           (undefined1 (*) [16])auStack_140 <= param_2;
  if (param_2 + 0x10 <= (undefined1 (*) [16])auStack_240 ||
      (undefined1 (*) [16])auStack_140 <= param_2) {
    bVar10 = (undefined1 (*) [16])((int)&DAT_7009bba0 + 1) < (undefined1 (*) [16])auStack_240 ||
             (undefined1 (*) [16])auStack_140 < (undefined1 (*) [16])((int)&DAT_7009bb20 + 1);
  }
  if (bVar10) {
    auVar17 = VectorCopyLong(SUB168(param_2[1],8),2,1);
    auVar18 = VectorCopyLong(SUB168(param_2[1],0),2,1);
    auVar27 = VectorCopyLong(SUB168(param_2[8],0),2,1);
    auVar20 = VectorCopyLong(SUB168(param_2[8],8),2,1);
    auVar38 = VectorCopyLong(SUB168(param_2[9],0),2,1);
    auVar39 = VectorCopyLong(SUB168(param_2[9],8),2,1);
    auVar16._8_8_ = CONCAT44(uVar9,uVar9);
    auVar16._0_8_ = CONCAT44(uVar9,uVar9);
    auVar11 = VectorCopyLong(SUB168(param_2[10],8),2,1);
    auVar34 = VectorCopyLong(SUB168(param_2[10],0),2,1);
    auVar35._8_8_ = 0x16dd00001566;
    auVar35._0_8_ = 0x13ed00001270;
    auVar17 = VectorShiftLeft(auVar17,auVar16,4,1);
    auVar28._8_8_ = 0x3fc500003fe2;
    auVar28._0_8_ = 0x3ff500004000;
    auVar27 = VectorShiftLeft(auVar27,auVar16,4,1);
    auVar40 = VectorShiftLeft(auVar39,auVar16,4,1);
    auVar38 = VectorShiftLeft(auVar38,auVar16,4,1);
    auVar11 = VectorShiftLeft(auVar11,auVar16,4,1);
    auVar17 = VectorShiftLeft(auVar17,0x10,0x20,0);
    auVar39 = VectorShiftLeft(auVar34,auVar16,4,1);
    auVar27 = VectorShiftLeft(auVar27,0x10,0x20,0);
    auVar41 = VectorShiftLeft(auVar40,0x10,0x20,0);
    auVar17 = VectorSignedFixedToFloat(auVar17,0x10);
    auVar11 = VectorShiftLeft(auVar11,0x10,0x20,0);
    auVar40 = VectorShiftLeft(auVar38,0x10,0x20,0);
    auVar34 = VectorMultiply(auVar17,auVar35,4);
    auVar38._8_8_ = 0x3b7f00003c0d;
    auVar38._0_8_ = 0x3c9200003d0f;
    auVar17 = VectorSignedFixedToFloat(auVar27,0x10);
    auVar27 = VectorSignedFixedToFloat(auVar41,0x10);
    auVar12._8_8_ = 0x3d8200003deb;
    auVar12._0_8_ = 0x3e4b00003ea2;
    auVar35 = VectorShiftLeft(auVar39,0x10,0x20,0);
    auVar28 = VectorMultiply(auVar17,auVar28,4);
    auVar17 = VectorSignedFixedToFloat(auVar40,0x10);
    auVar39 = VectorMultiply(auVar27,auVar38,4);
    auVar42._8_8_ = 0x35cd000036a1;
    auVar42._0_8_ = 0x376d00003830;
    auVar11 = VectorSignedFixedToFloat(auVar11,0x10);
    auVar17 = VectorMultiply(auVar17,auVar12,4);
    auVar13._8_8_ = 0x38eb0000399d;
    auVar13._0_8_ = 0x3a4600003ae7;
    auVar27 = VectorMultiply(auVar11,auVar42,4);
    auVar35 = VectorSignedFixedToFloat(auVar35,0x10);
    auVar43._8_8_ = 0xadc00000952;
    auVar43._0_8_ = 0x7c60000063a;
    auVar11 = VectorShiftLeft(auVar20,auVar16,4,1);
    auVar35 = VectorMultiply(auVar35,auVar13,4);
    auVar20 = VectorCopyLong(SUB168(*param_2,8),2,1);
    auVar38 = VectorShiftLeft(auVar11,0x10,0x20,0);
    auVar11 = VectorShiftLeft(auVar18,auVar16,4,1);
    auVar20 = VectorShiftLeft(auVar20,auVar16,4,1);
    auVar18 = VectorSignedFixedToFloat(auVar38,0x10);
    auVar11 = VectorShiftLeft(auVar11,0x10,0x20,0);
    auVar38 = VectorShiftLeft(auVar20,0x10,0x20,0);
    uStack_228 = VectorShiftNarrowRight(auVar34,0xe);
    auVar11 = VectorSignedFixedToFloat(auVar11,0x10);
    auVar34 = VectorSignedFixedToFloat(auVar38,0x10);
    auVar34 = VectorMultiply(auVar34,auVar43,4);
    auStack_240._8_8_ = VectorShiftNarrowRight(auVar34,0xe);
    auVar36._8_8_ = 0x3eef00003f33;
    auVar36._0_8_ = 0x3f6d00003f9e;
    auVar38 = VectorMultiply(auVar18,auVar36,4);
    auVar18 = VectorCopyLong(SUB168(*param_2,0),2,1);
    auVar34._8_8_ = 0x4ac0000031e;
    auVar34._0_8_ = 0x18f00000000;
    auVar18 = VectorShiftLeft(auVar18,auVar16,4,1);
    auVar18 = VectorShiftLeft(auVar18,0x10,0x20,0);
    auVar18 = VectorSignedFixedToFloat(auVar18,0x10);
    auVar34 = VectorMultiply(auVar18,auVar34,4);
    auVar18._8_8_ = 0x10f100000f6f;
    auVar18._0_8_ = 0xdea00000c64;
    auVar11 = VectorMultiply(auVar11,auVar18,4);
    auStack_240._0_8_ = VectorShiftNarrowRight(auVar34,0xe);
    uStack_230 = VectorShiftNarrowRight(auVar11,0xe);
    uStack_1b8 = VectorShiftNarrowRight(auVar38,0xe);
    uStack_1a8 = VectorShiftNarrowRight(auVar39,0xe);
    uStack_1b0 = VectorShiftNarrowRight(auVar17,0xe);
    auVar11 = VectorCopyLong(SUB168(param_2[4],0),2,1);
    auVar17 = VectorCopyLong(SUB168(param_2[4],8),2,1);
    uStack_1c0 = VectorShiftNarrowRight(auVar28,0xe);
    uStack_198 = VectorShiftNarrowRight(auVar27,0xe);
    auVar39._8_8_ = 0x302f00002f24;
    auVar39._0_8_ = 0x2e1300002cfa;
    auVar11 = VectorShiftLeft(auVar11,auVar16,4,1);
    auVar17 = VectorShiftLeft(auVar17,auVar16,4,1);
    auVar11 = VectorShiftLeft(auVar11,0x10,0x20,0);
    uStack_1a0 = VectorShiftNarrowRight(auVar35,0xe);
    auVar17 = VectorShiftLeft(auVar17,0x10,0x20,0);
    auVar11 = VectorSignedFixedToFloat(auVar11,0x10);
    auVar11 = VectorMultiply(auVar11,auVar39,4);
    auVar40._8_8_ = 0x340d00003321;
    auVar40._0_8_ = 0x322d00003132;
    auVar17 = VectorSignedFixedToFloat(auVar17,0x10);
    auVar17 = VectorMultiply(auVar17,auVar40,4);
    uStack_1f8 = VectorShiftNarrowRight(auVar17,0xe);
    uStack_200 = VectorShiftNarrowRight(auVar11,0xe);
    auVar11 = VectorCopyLong(SUB168(param_2[0xb],0),2,1);
    auVar14._8_8_ = 0x322d00003321;
    auVar14._0_8_ = 0x340d000034f1;
    auVar17 = VectorCopyLong(SUB168(param_2[0xb],8),2,1);
    auVar11 = VectorShiftLeft(auVar11,auVar16,4,1);
    auVar20._8_8_ = 0x2e1300002f24;
    auVar20._0_8_ = 0x302f00003132;
    auVar17 = VectorShiftLeft(auVar17,auVar16,4,1);
    auVar11 = VectorShiftLeft(auVar11,0x10,0x20,0);
    auVar17 = VectorShiftLeft(auVar17,0x10,0x20,0);
    auVar11 = VectorSignedFixedToFloat(auVar11,0x10);
    auVar27 = VectorSignedFixedToFloat(auVar17,0x10);
    auVar17 = VectorMultiply(auVar11,auVar14,4);
    auVar27 = VectorMultiply(auVar27,auVar20,4);
    auVar11 = VectorCopyLong(SUB168(param_2[0xc],0),2,1);
    auVar11 = VectorShiftLeft(auVar11,auVar16,4,1);
    uStack_188 = VectorShiftNarrowRight(auVar27,0xe);
    uStack_190 = VectorShiftNarrowRight(auVar17,0xe);
    auVar41._8_8_ = 0x298900002ab5;
    auVar41._0_8_ = 0x2bdb00002cfa;
    auVar11 = VectorShiftLeft(auVar11,0x10,0x20,0);
    auVar11 = VectorSignedFixedToFloat(auVar11,0x10);
    auVar34 = VectorMultiply(auVar11,auVar41,4);
    auVar17 = VectorCopyLong(SUB168(param_2[3],8),2,1);
    auVar11 = VectorCopyLong(SUB168(param_2[3],0),2,1);
    auVar17 = VectorShiftLeft(auVar17,auVar16,4,1);
    auVar11 = VectorShiftLeft(auVar11,auVar16,4,1);
    auVar27 = VectorShiftLeft(auVar17,0x10,0x20,0);
    auVar17 = VectorShiftLeft(auVar11,0x10,0x20,0);
    auVar27 = VectorSignedFixedToFloat(auVar27,0x10);
    auVar11._8_8_ = 0x2bdb00002ab5;
    auVar11._0_8_ = 0x298900002856;
    auVar27 = VectorMultiply(auVar27,auVar11,4);
    auVar11 = VectorSignedFixedToFloat(auVar17,0x10);
    auVar17._8_8_ = 0x271d000025df;
    auVar17._0_8_ = 0x249a00002350;
    auVar11 = VectorMultiply(auVar11,auVar17,4);
    uStack_208 = VectorShiftNarrowRight(auVar27,0xe);
    uStack_210 = VectorShiftNarrowRight(auVar11,0xe);
    auVar11 = VectorCopyLong(SUB168(param_2[0xc],8),2,1);
    auVar15._8_8_ = 0x249a000025df;
    auVar15._0_8_ = 0x271d00002856;
    auVar17 = VectorCopyLong(SUB168(param_2[2],0),2,1);
    auVar11 = VectorShiftLeft(auVar11,auVar16,4,1);
    auVar17 = VectorShiftLeft(auVar17,auVar16,4,1);
    auVar11 = VectorShiftLeft(auVar11,0x10,0x20,0);
    auVar27 = VectorShiftLeft(auVar17,0x10,0x20,0);
    auVar11 = VectorSignedFixedToFloat(auVar11,0x10);
    auVar11 = VectorMultiply(auVar11,auVar15,4);
    auVar17 = VectorCopyLong(SUB168(param_2[2],8),2,1);
    auVar37._8_8_ = 0x1c9100001b2a;
    auVar37._0_8_ = 0x19bf00001850;
    auVar27 = VectorSignedFixedToFloat(auVar27,0x10);
    auVar18 = VectorMultiply(auVar27,auVar37,4);
    auVar17 = VectorShiftLeft(auVar17,auVar16,4,1);
    auVar17 = VectorShiftLeft(auVar17,0x10,0x20,0);
    auVar17 = VectorSignedFixedToFloat(auVar17,0x10);
    auVar27._8_8_ = 0x2201000020ac;
    auVar27._0_8_ = 0x1f5300001df4;
    auVar17 = VectorMultiply(auVar17,auVar27,4);
    uStack_218 = VectorShiftNarrowRight(auVar17,0xe);
    uStack_220 = VectorShiftNarrowRight(auVar18,0xe);
    uStack_178 = VectorShiftNarrowRight(auVar11,0xe);
    uStack_180 = VectorShiftNarrowRight(auVar34,0xe);
    auVar17 = VectorCopyLong(SUB168(param_2[5],8),2,1);
    auVar11 = VectorCopyLong(SUB168(param_2[5],0),2,1);
    auVar17 = VectorShiftLeft(auVar17,auVar16,4,1);
    auVar21._8_8_ = 0x3a460000399d;
    auVar21._0_8_ = 0x38eb00003830;
    auVar11 = VectorShiftLeft(auVar11,auVar16,4,1);
    auVar29._8_8_ = 0x376d000036a1;
    auVar29._0_8_ = 0x35cd000034f1;
    auVar17 = VectorShiftLeft(auVar17,0x10,0x20,0);
    auVar11 = VectorShiftLeft(auVar11,0x10,0x20,0);
    auVar17 = VectorSignedFixedToFloat(auVar17,0x10);
    auVar11 = VectorSignedFixedToFloat(auVar11,0x10);
    auVar17 = VectorMultiply(auVar17,auVar21,4);
    auVar11 = VectorMultiply(auVar11,auVar29,4);
    uStack_1e8 = VectorShiftNarrowRight(auVar17,0xe);
    uStack_1f0 = VectorShiftNarrowRight(auVar11,0xe);
    auVar17 = VectorCopyLong(SUB168(param_2[0xd],8),2,1);
    auVar11 = VectorCopyLong(SUB168(param_2[0xd],0),2,1);
    auVar22._8_8_ = 0x19bf00001b2a;
    auVar22._0_8_ = 0x1c9100001df4;
    auVar17 = VectorShiftLeft(auVar17,auVar16,4,1);
    auVar30._8_8_ = 0x1f53000020ac;
    auVar30._0_8_ = 0x220100002350;
    auVar11 = VectorShiftLeft(auVar11,auVar16,4,1);
    auVar17 = VectorShiftLeft(auVar17,0x10,0x20,0);
    auVar11 = VectorShiftLeft(auVar11,0x10,0x20,0);
    auVar17 = VectorSignedFixedToFloat(auVar17,0x10);
    auVar11 = VectorSignedFixedToFloat(auVar11,0x10);
    auVar17 = VectorMultiply(auVar17,auVar22,4);
    auVar11 = VectorMultiply(auVar11,auVar30,4);
    uStack_168 = VectorShiftNarrowRight(auVar17,0xe);
    uStack_170 = VectorShiftNarrowRight(auVar11,0xe);
    auVar17 = VectorCopyLong(SUB168(param_2[6],8),2,1);
    auVar11 = VectorCopyLong(SUB168(param_2[6],0),2,1);
    auVar23._8_8_ = 0x3e4b00003deb;
    auVar23._0_8_ = 0x3d8200003d0f;
    auVar17 = VectorShiftLeft(auVar17,auVar16,4,1);
    auVar31._8_8_ = 0x3c9200003c0d;
    auVar31._0_8_ = 0x3b7f00003ae7;
    auVar11 = VectorShiftLeft(auVar11,auVar16,4,1);
    auVar17 = VectorShiftLeft(auVar17,0x10,0x20,0);
    auVar11 = VectorShiftLeft(auVar11,0x10,0x20,0);
    auVar17 = VectorSignedFixedToFloat(auVar17,0x10);
    auVar11 = VectorSignedFixedToFloat(auVar11,0x10);
    auVar17 = VectorMultiply(auVar17,auVar23,4);
    auVar11 = VectorMultiply(auVar11,auVar31,4);
    uStack_1d8 = VectorShiftNarrowRight(auVar17,0xe);
    uStack_1e0 = VectorShiftNarrowRight(auVar11,0xe);
    auVar17 = VectorCopyLong(SUB168(param_2[0xe],8),2,1);
    auVar11 = VectorCopyLong(SUB168(param_2[0xe],0),2,1);
    auVar24._8_8_ = 0xdea00000f6f;
    auVar24._0_8_ = 0x10f100001270;
    auVar17 = VectorShiftLeft(auVar17,auVar16,4,1);
    auVar32._8_8_ = 0x13ed00001566;
    auVar32._0_8_ = 0x16dd00001850;
    auVar11 = VectorShiftLeft(auVar11,auVar16,4,1);
    auVar17 = VectorShiftLeft(auVar17,0x10,0x20,0);
    auVar11 = VectorShiftLeft(auVar11,0x10,0x20,0);
    auVar17 = VectorSignedFixedToFloat(auVar17,0x10);
    auVar11 = VectorSignedFixedToFloat(auVar11,0x10);
    auVar17 = VectorMultiply(auVar17,auVar24,4);
    auVar11 = VectorMultiply(auVar11,auVar32,4);
    uStack_158 = VectorShiftNarrowRight(auVar17,0xe);
    uStack_160 = VectorShiftNarrowRight(auVar11,0xe);
    auVar17 = VectorCopyLong(SUB168(param_2[7],8),2,1);
    auVar11 = VectorCopyLong(SUB168(param_2[7],0),2,1);
    auVar25._8_8_ = 0x3ff500003fe2;
    auVar25._0_8_ = 0x3fc500003f9e;
    auVar17 = VectorShiftLeft(auVar17,auVar16,4,1);
    auVar33._8_8_ = 0x3f6d00003f33;
    auVar33._0_8_ = 0x3eef00003ea2;
    auVar11 = VectorShiftLeft(auVar11,auVar16,4,1);
    auVar17 = VectorShiftLeft(auVar17,0x10,0x20,0);
    auVar11 = VectorShiftLeft(auVar11,0x10,0x20,0);
    auVar17 = VectorSignedFixedToFloat(auVar17,0x10);
    auVar11 = VectorSignedFixedToFloat(auVar11,0x10);
    auVar17 = VectorMultiply(auVar17,auVar25,4);
    auVar11 = VectorMultiply(auVar11,auVar33,4);
    uStack_1c8 = VectorShiftNarrowRight(auVar17,0xe);
    uStack_1d0 = VectorShiftNarrowRight(auVar11,0xe);
    auVar17 = VectorCopyLong(SUB168(param_2[0xf],8),2,1);
    auVar11 = VectorCopyLong(SUB168(param_2[0xf],0),2,1);
    auVar17 = VectorShiftLeft(auVar17,auVar16,4,1);
    auVar16 = VectorShiftLeft(auVar11,auVar16,4,1);
    auVar11 = VectorShiftLeft(auVar17,0x10,0x20,0);
    auVar19._8_8_ = 0x18f0000031e;
    auVar19._0_8_ = 0x4ac0000063a;
    auVar16 = VectorShiftLeft(auVar16,0x10,0x20,0);
    auVar26._8_8_ = 0x7c600000952;
    auVar26._0_8_ = 0xadc00000c64;
    auVar11 = VectorSignedFixedToFloat(auVar11,0x10);
    auVar16 = VectorSignedFixedToFloat(auVar16,0x10);
    auVar11 = VectorMultiply(auVar11,auVar19,4);
    auVar16 = VectorMultiply(auVar16,auVar26,4);
    uStack_148 = VectorShiftNarrowRight(auVar11,0xe);
    uStack_150 = VectorShiftNarrowRight(auVar16,0xe);
  }
  else {
    iVar4 = 0;
    do {
      *(short *)((int)auStack_240 + iVar4) =
           (short)((uint)((int)*(short *)((int)&DAT_7009bb20 + iVar4) *
                         (int)(short)(*(short *)((int)(param_2[8] + iVar4) + -0x80) <<
                                     (uVar9 & 0xff))) >> 0xe);
      iVar8 = iVar4 + 2;
      *(short *)((int)&uStack_1c0 + iVar4) =
           (short)((uint)((int)*(short *)((int)&DAT_7009bba0 - iVar4) *
                         (int)(short)(*(short *)(param_2[8] + iVar4) << (uVar9 & 0xff))) >> 0xe);
      iVar4 = iVar8;
    } while (iVar8 != 0x80);
  }
  thunk_HiSxiuPfbHbqQePacWghiUYY
            (*(undefined4 *)(param_1 + 0x4344),(undefined1 (*) [16])auStack_240,param_3);
  iVar4 = 2;
  do {
    psVar6 = (short *)((int)param_3 + iVar4);
    iVar4 = iVar4 + 4;
    *psVar6 = -*psVar6;
  } while (iVar4 != 0x102);
  uVar5 = 0;
  param_3[0x81] = 0;
  param_3[1] = 0;
  uVar3 = (int)(short)*param_3 >> 0xf;
  uVar3 = (*param_3 ^ uVar3) - uVar3;
  *param_4 = (short)uVar3;
  iVar8 = 2;
  uVar7 = (int)(short)param_3[0x80] >> 0xf;
  uVar7 = (param_3[0x80] ^ uVar7) - uVar7;
  param_4[0x40] = (short)uVar7;
  iVar4 = (uVar7 & 0xffff) + (uVar3 & 0xffff);
  *param_5 = iVar4;
  do {
    uVar1 = param_3[2];
    uVar2 = param_3[3];
    if (uVar1 == 0) {
      uVar3 = ((uint)uVar2 ^ (int)(short)uVar2 >> 0xf) - ((int)(short)uVar2 >> 0xf);
    }
    else if (uVar2 == 0) {
      uVar3 = ((uint)uVar1 ^ (int)(short)uVar1 >> 0xf) - ((int)(short)uVar1 >> 0xf);
    }
    else {
      uVar3 = thunk_bgF_fwYom_BiejahSLG
                        ((int)(short)uVar2 * (int)(short)uVar2 +
                         (int)(short)uVar1 * (int)(short)uVar1);
      iVar4 = *param_5;
      uVar5 = uVar3;
    }
    *(short *)((int)param_4 + iVar8) = (short)uVar3;
    iVar4 = iVar4 + (uVar3 & 0xffff);
    iVar8 = iVar8 + 2;
    *param_5 = iVar4;
    param_3 = param_3 + 2;
  } while (iVar8 != 0x80);
  return CONCAT44(uVar5,uVar9);
}


// =========================================================================
// Function: aNHPgzMRppBZThm
// Entry: 0x71b26a54 | Size: 36 bytes
// =========================================================================

uint aNHPgzMRppBZThm(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1 * 0x10dcd + 1 & 0x7fffffff;
  *param_1 = uVar1;
  return uVar1 >> 0x10;
}


// =========================================================================
// Function: ZouNsVDKsRDCsnz
// Entry: 0x71b26a78 | Size: 56 bytes
// =========================================================================

int ZouNsVDKsRDCsnz(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1 * 0x10dcd + 1;
  *param_1 = uVar1 & 0x7fffffff;
  return (int)*(short *)(&DAT_7009bba2 + ((uVar1 & 0x7fffffff) >> 0x17) * 2);
}


// =========================================================================
// Function: VzzAJmrFSAbHPFwWQutB
// Entry: 0x71b26ab4 | Size: 80 bytes
// =========================================================================

int VzzAJmrFSAbHPFwWQutB(undefined2 *param_1,int param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  
  if (0 < param_2) {
    uVar2 = *param_3;
    iVar1 = param_2;
    do {
      iVar1 = iVar1 + -1;
      uVar2 = uVar2 * 0x10dcd + 1 & 0x7fffffff;
      *param_1 = (short)(uVar2 >> 0x10);
      param_1 = param_1 + 1;
    } while (iVar1 != 0);
    *param_3 = uVar2;
  }
  return param_2;
}


// =========================================================================
// Function: bgF_fwYom_BiejahSLG
// Entry: 0x71b26b38 | Size: 280 bytes
// =========================================================================

uint bgF_fwYom_BiejahSLG(int param_1)

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


