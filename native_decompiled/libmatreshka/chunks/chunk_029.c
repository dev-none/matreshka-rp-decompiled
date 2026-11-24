// =========================================================================
// Function: ZBJDfkhbPfYMWdHknpw
// Entry: 0x71b26c68 | Size: 164 bytes
// =========================================================================

void ZBJDfkhbPfYMWdHknpw(int param_1,double *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double *pdVar4;
  uint uVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  
  uVar6 = param_4 + 1;
  iVar1 = 0;
  if (uVar6 < 2) {
    uVar6 = 1;
  }
  uVar5 = 0;
  iVar2 = param_3;
  do {
    dVar8 = *param_2 * param_2[uVar5];
    dVar7 = 0.0;
    if (1 < param_3 - uVar5) {
      iVar3 = 1;
      pdVar4 = param_2;
      do {
        pdVar4 = pdVar4 + 1;
        dVar7 = dVar7 + dVar8;
        iVar3 = iVar3 + 1;
        dVar8 = *pdVar4 * *(double *)((int)pdVar4 + iVar1);
      } while (iVar2 != iVar3);
    }
    iVar3 = uVar5 * 8;
    uVar5 = uVar5 + 1;
    iVar1 = iVar1 + 8;
    iVar2 = iVar2 + -1;
    *(double *)(param_1 + iVar3) = dVar7 + dVar8;
  } while (uVar5 != uVar6);
  return;
}


// =========================================================================
// Function: qxHBnCSmZGiIrYgSwaqfGJtkUk
// Entry: 0x71b26d10 | Size: 1056 bytes
// =========================================================================

void qxHBnCSmZGiIrYgSwaqfGJtkUk
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  double *pdVar5;
  double *pdVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dStack_2768;
  double adStack_2760 [243];
  undefined8 uStack_1fc8;
  undefined4 uStack_1fc0;
  undefined4 uStack_1fbc;
  undefined4 uStack_1fb8;
  undefined4 uStack_1fb4;
  undefined8 uStack_1fb0;
  undefined8 uStack_1fa8;
  undefined8 uStack_1fa0;
  undefined8 uStack_1f98;
  undefined8 uStack_1f90;
  undefined8 uStack_1f88;
  undefined1 auStack_1f80 [1872];
  undefined8 uStack_1830;
  undefined8 uStack_1828;
  undefined4 uStack_1820;
  undefined4 uStack_181c;
  undefined4 uStack_1818;
  undefined4 uStack_1814;
  undefined8 uStack_1810;
  undefined8 uStack_1808;
  undefined8 uStack_1800;
  undefined8 uStack_17f8;
  undefined8 uStack_17f0;
  undefined8 uStack_17e8;
  undefined8 uStack_17e0;
  undefined8 uStack_17d8;
  undefined1 auStack_17d0 [1872];
  undefined8 uStack_1080;
  undefined8 uStack_1078;
  undefined8 uStack_1070;
  undefined8 uStack_1068;
  undefined8 uStack_1060;
  undefined8 uStack_1058;
  undefined8 uStack_1050;
  double dStack_1048;
  double dStack_1040;
  double dStack_1038;
  double dStack_1030;
  double dStack_1028;
  double dStack_1020;
  undefined8 uStack_1018;
  double dStack_1010;
  double dStack_1008;
  double dStack_1000;
  undefined1 auStack_ff8 [16];
  double dStack_fe8;
  undefined1 auStack_fe0 [56];
  double dStack_fa8;
  double dStack_fa0;
  double dStack_f98;
  double dStack_f90;
  double dStack_f88;
  double dStack_f80;
  double dStack_f78;
  undefined1 auStack_f70 [1920];
  undefined1 auStack_7f0 [1928];
  
  puVar10 = auStack_f70;
  imp___aeabi_memcpy8(puVar10,param_4,0x780);
  puVar8 = auStack_7f0;
  imp___aeabi_memcpy8(puVar8,param_1,0x780);
  imp___aeabi_memmove8(param_4,param_1,0x780);
  uStack_1fb0 = *(undefined8 *)(param_4 + 0x7b0);
  uStack_1fa8 = *(undefined8 *)(param_4 + 0x7b8);
  uStack_1fa0 = *(undefined8 *)(param_4 + 0x7c0);
  uStack_1f98 = *(undefined8 *)(param_4 + 0x7c8);
  uStack_1f90 = *(undefined8 *)(param_4 + 2000);
  uStack_1f88 = *(undefined8 *)(param_4 + 0x7d8);
  iVar4 = 0;
  uStack_1fbc = 0;
  uStack_1fb4 = 0;
  uStack_1fb8 = 0;
  uStack_1800 = *(undefined8 *)(param_4 + 0x7e0);
  uStack_17f8 = *(undefined8 *)(param_4 + 0x7e8);
  uStack_17f0 = *(undefined8 *)(param_4 + 0x7f0);
  uStack_17e8 = *(undefined8 *)(param_4 + 0x7f8);
  uStack_17e0 = *(undefined8 *)(param_4 + 0x800);
  uStack_17d8 = *(undefined8 *)(param_4 + 0x808);
  adStack_2760[0xf0] = 0.0;
  adStack_2760[0xf1] = 0.0;
  uStack_1fc0 = 0;
  adStack_2760[0xef] = 1.0;
  puVar7 = auStack_1f80;
  puVar9 = auStack_17d0;
  adStack_2760[0xf2] = adStack_2760[0xf0];
  uStack_1fc8 = adStack_2760[0xf1];
  do {
    iVar3 = -0x768;
    puVar10 = puVar10 + 0x1e0;
    iVar1 = 0;
    do {
      pdVar5 = (double *)(puVar10 + iVar1);
      pdVar6 = (double *)(param_4 + 0x810 + iVar1);
      iVar2 = iVar1 + -8;
      iVar1 = iVar1 + 8;
      *(double *)((int)adStack_2760 + iVar2) = *pdVar6 * *pdVar5;
    } while (iVar1 != 0x780);
    dVar11 = 0.0;
    iVar1 = 8;
    dVar12 = dStack_2768 * dStack_2768;
    do {
      iVar2 = iVar1 + -8;
      dVar11 = dVar12 + dVar11;
      iVar1 = iVar1 + 8;
      dVar12 = *(double *)((int)adStack_2760 + iVar2);
      dVar12 = dVar12 * dVar12;
    } while (iVar1 != 0x780);
    dVar13 = dStack_2768 * adStack_2760[0];
    dStack_fa0 = 0.0;
    iVar1 = 0;
    do {
      dStack_fa0 = dVar13 + dStack_fa0;
      iVar2 = iVar1 + 8;
      dVar13 = SUB168(*(undefined1 (*) [16])((int)adStack_2760 + iVar1),0) *
               SUB168(*(undefined1 (*) [16])((int)adStack_2760 + iVar1),8);
      iVar1 = iVar2;
    } while (iVar2 != 0x770);
    dStack_fa0 = dStack_fa0 + dVar13;
    dVar13 = dStack_2768 * adStack_2760[1];
    dStack_f98 = 0.0;
    do {
      dStack_f98 = dVar13 + dStack_f98;
      iVar1 = iVar3 + 0x778;
      iVar2 = iVar3 + 0x768;
      iVar3 = iVar3 + 8;
      dVar13 = *(double *)((int)adStack_2760 + iVar2) * *(double *)((int)adStack_2760 + iVar1);
    } while (iVar3 != 0);
    dStack_f98 = dStack_f98 + dVar13;
    dVar13 = dStack_2768 * adStack_2760[2];
    dStack_f90 = 0.0;
    iVar1 = 0;
    do {
      dStack_f90 = dVar13 + dStack_f90;
      iVar3 = iVar1 + 8;
      dVar13 = *(double *)((int)adStack_2760 + iVar1) *
               *(double *)((int)adStack_2760 + iVar1 + 0x18);
      iVar1 = iVar3;
    } while (iVar3 != 0x760);
    iVar1 = -0x758;
    dStack_f90 = dStack_f90 + dVar13;
    dVar13 = dStack_2768 * adStack_2760[3];
    dStack_f88 = 0.0;
    do {
      dStack_f88 = dVar13 + dStack_f88;
      iVar3 = iVar1 + 0x778;
      iVar2 = iVar1 + 0x758;
      iVar1 = iVar1 + 8;
      dVar13 = *(double *)((int)adStack_2760 + iVar2) * *(double *)((int)adStack_2760 + iVar3);
    } while (iVar1 != 0);
    dStack_f88 = dStack_f88 + dVar13;
    dVar13 = dStack_2768 * adStack_2760[4];
    dStack_f80 = 0.0;
    iVar1 = 0;
    do {
      dStack_f80 = dVar13 + dStack_f80;
      iVar3 = iVar1 + 8;
      dVar13 = *(double *)((int)adStack_2760 + iVar1) *
               *(double *)((int)adStack_2760 + iVar1 + 0x28);
      iVar1 = iVar3;
    } while (iVar3 != 0x750);
    iVar1 = -0x748;
    dStack_f80 = dStack_f80 + dVar13;
    dVar13 = dStack_2768 * adStack_2760[5];
    dStack_f78 = 0.0;
    do {
      dStack_f78 = dVar13 + dStack_f78;
      iVar3 = iVar1 + 0x778;
      iVar2 = iVar1 + 0x748;
      iVar1 = iVar1 + 8;
      dVar13 = *(double *)((int)adStack_2760 + iVar2) * *(double *)((int)adStack_2760 + iVar3);
    } while (iVar1 != 0);
    dStack_fa8 = (dVar11 + dVar12) * 1.01 + 1.0;
    dStack_f78 = dStack_f78 + dVar13;
    thunk_TUVjgQucjMseBddqfN(&uStack_1018,auStack_fe0,&dStack_fa8,6);
    dStack_1048 = dStack_1010 * 0.9;
    dStack_1040 = dStack_1008 * 0.81;
    dStack_1038 = dStack_1000 * 0.7290000000000001;
    dStack_1030 = auStack_ff8._0_8_ * 0.6561000000000001;
    dStack_1028 = auStack_ff8._8_8_ * 0.5904900000000002;
    dStack_1020 = dStack_fe8 * 0.5314410000000002;
    uStack_1050 = uStack_1018;
    FUN_71b27168(puVar8,&uStack_1018,&uStack_1050,puVar7);
    FUN_71b27168(puVar8,&uStack_1050,adStack_2760 + 0xef,puVar9);
    puVar9 = puVar9 + 0x1e0;
    iVar4 = iVar4 + 1;
    puVar7 = puVar7 + 0x1e0;
    puVar8 = puVar8 + 0x1e0;
  } while (iVar4 != 4);
  *(undefined8 *)(param_4 + 0x7b0) = uStack_1830;
  *(undefined8 *)(param_4 + 0x7b8) = uStack_1828;
  *(undefined4 *)(param_4 + 0x7c0) = uStack_1820;
  *(undefined4 *)(param_4 + 0x7c4) = uStack_181c;
  *(undefined4 *)(param_4 + 0x7c8) = uStack_1818;
  *(undefined4 *)(param_4 + 0x7cc) = uStack_1814;
  *(undefined8 *)(param_4 + 2000) = uStack_1810;
  *(undefined8 *)(param_4 + 0x7d8) = uStack_1808;
  *(undefined8 *)(param_4 + 0x7e0) = uStack_1080;
  *(undefined8 *)(param_4 + 0x7e8) = uStack_1078;
  *(undefined8 *)(param_4 + 0x7f0) = uStack_1070;
  *(undefined8 *)(param_4 + 0x7f8) = uStack_1068;
  *(undefined8 *)(param_4 + 0x800) = uStack_1060;
  *(undefined8 *)(param_4 + 0x808) = uStack_1058;
  imp___aeabi_memcpy8(param_2,auStack_1f80,0x780);
  imp___aeabi_memcpy8(param_3,auStack_17d0,0x780);
  return;
}


// =========================================================================
// Function: FUN_71b27168
// Entry: 0x71b27168 | Size: 412 bytes
// =========================================================================

void FUN_71b27168(int param_1,double *param_2,double *param_3,int param_4)

{
  int iVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  iVar1 = 0;
  do {
    pdVar2 = (double *)(param_1 + iVar1);
    pdVar3 = (double *)(param_4 + iVar1);
    iVar1 = iVar1 + 8;
    *pdVar3 = *pdVar2 * *param_2 + param_2[1] * pdVar2[-1] + param_2[2] * pdVar2[-2] +
              param_2[3] * pdVar2[-3] + param_2[4] * pdVar2[-4] + param_2[5] * pdVar2[-5] +
              param_2[6] * pdVar2[-6];
  } while (iVar1 != 0x1e0);
  dVar4 = *param_3;
  if ((dVar4 <= 0.9999) || (1.0001 <= dVar4)) {
    iVar1 = 0;
    dVar5 = -(1.0 / dVar4);
    dVar6 = *(double *)(param_4 + -8);
    do {
      pdVar2 = (double *)(param_4 + iVar1);
      iVar1 = iVar1 + 8;
      dVar7 = (1.0 / dVar4) * *pdVar2;
      *pdVar2 = dVar7;
      dVar7 = dVar7 + param_3[1] * dVar5 * dVar6;
      *pdVar2 = dVar7;
      dVar7 = dVar7 + param_3[2] * dVar5 * pdVar2[-2];
      *pdVar2 = dVar7;
      dVar7 = dVar7 + param_3[3] * dVar5 * pdVar2[-3];
      *pdVar2 = dVar7;
      dVar7 = dVar7 + param_3[4] * dVar5 * pdVar2[-4];
      *pdVar2 = dVar7;
      dVar7 = dVar7 + param_3[5] * dVar5 * pdVar2[-5];
      *pdVar2 = dVar7;
      dVar6 = dVar7 + param_3[6] * dVar5 * pdVar2[-6];
      *pdVar2 = dVar6;
    } while (iVar1 != 0x1e0);
  }
  else {
    dVar4 = *(double *)(param_4 + -8);
    iVar1 = 0;
    do {
      pdVar2 = (double *)(param_4 + iVar1);
      iVar1 = iVar1 + 8;
      dVar4 = *pdVar2 - (param_3[1] * dVar4 + param_3[2] * pdVar2[-2] + param_3[3] * pdVar2[-3] +
                         param_3[4] * pdVar2[-4] + param_3[5] * pdVar2[-5] + param_3[6] * pdVar2[-6]
                        );
      *pdVar2 = dVar4;
    } while (iVar1 != 0x1e0);
  }
  return;
}


// =========================================================================
// Function: rMkGzJYvZiPSrCqVUQJtnlXaAC
// Entry: 0x71b27410 | Size: 52 bytes
// =========================================================================

void rMkGzJYvZiPSrCqVUQJtnlXaAC(int param_1)

{
  imp___aeabi_memclr8(param_1,0x618);
  *(undefined4 *)(param_1 + 0x618) = 0;
  *(undefined4 *)(param_1 + 0x61c) = 0x40490000;
  *(undefined4 *)(param_1 + 0x620) = 0;
  *(undefined4 *)(param_1 + 0x624) = 0;
  return;
}


// =========================================================================
// Function: iCvAqFcXYqqmhAphwFzC_NVLToDT
// Entry: 0x71b27448 | Size: 184 bytes
// =========================================================================

void iCvAqFcXYqqmhAphwFzC_NVLToDT(int param_1)

{
  double *pdVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  
  imp___aeabi_memclr8(param_1,0xa10);
  iVar2 = 0;
  *(undefined4 *)(param_1 + 0xa10) = 0;
  *(undefined4 *)(param_1 + 0xa14) = 0x40490000;
  imp___aeabi_memclr8(param_1 + 0xa18,0x620);
  *(undefined4 *)(param_1 + 0x1038) = 0;
  *(undefined4 *)(param_1 + 0x103c) = 0x40490000;
  imp___aeabi_memclr8(param_1 + 0x1040,0x818);
  dVar3 = 0.5;
  do {
    dVar4 = (dVar3 * dVar3 * 0.7 * 1.736111111111111e-05 + dVar3 * 0.3 * 0.004166666666666667) *
            3.14159265;
    dVar4 = (double)imp_sin(SUB84(dVar4,0),(int)((ulonglong)dVar4 >> 0x20));
    pdVar1 = (double *)(param_1 + 0x1858 + iVar2);
    dVar3 = dVar3 + 1.0;
    iVar2 = iVar2 + 8;
    *pdVar1 = dVar4 * dVar4;
  } while (iVar2 != 0x780);
  return;
}


// =========================================================================
// Function: UQxLZqjxb_itqZvnxbspQFpzddAd
// Entry: 0x71b27528 | Size: 20 bytes
// =========================================================================

void UQxLZqjxb_itqZvnxbspQFpzddAd(undefined4 param_1)

{
  imp___aeabi_memclr8(param_1,0x318);
  return;
}


// =========================================================================
// Function: TUVjgQucjMseBddqfN
// Entry: 0x71b27540 | Size: 432 bytes
// =========================================================================

double TUVjgQucjMseBddqfN(undefined8 *param_1,double *param_2,double *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  undefined8 *puVar7;
  double *pdVar8;
  uint uVar9;
  int iVar10;
  double *pdVar11;
  double *pdVar12;
  bool bVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  *param_1 = 0x3ff0000000000000;
  if (1e-10 <= *param_3) {
    dVar14 = -param_3[1] / *param_3;
    *param_2 = dVar14;
    param_1[1] = dVar14;
    dVar14 = *param_3 + param_3[1] * *param_2;
    if (1 < param_4) {
      pdVar12 = (double *)(param_1 + 1);
      iVar1 = 1;
      uVar2 = 2;
      pdVar11 = pdVar12;
      pdVar5 = param_3;
      do {
        pdVar5 = pdVar5 + 1;
        iVar10 = iVar1 + 1;
        dVar15 = param_3[iVar10];
        uVar9 = uVar2 >> 1;
        iVar3 = iVar1;
        pdVar4 = pdVar12;
        pdVar6 = pdVar5;
        do {
          dVar17 = *pdVar4;
          pdVar4 = pdVar4 + 1;
          iVar3 = iVar3 + -1;
          dVar16 = *pdVar6;
          pdVar6 = pdVar6 + -1;
          dVar15 = dVar15 + dVar17 * dVar16;
        } while (iVar3 != 0);
        pdVar8 = param_2 + iVar1;
        dVar16 = -dVar15 / dVar14;
        dVar14 = dVar14 + dVar16 * dVar15;
        *pdVar8 = dVar16;
        pdVar4 = pdVar11;
        pdVar6 = pdVar12;
        do {
          dVar17 = *pdVar4;
          uVar9 = uVar9 - 1;
          dVar15 = *pdVar6;
          dVar16 = *pdVar8;
          *pdVar4 = dVar17 + dVar16 * dVar15;
          pdVar4 = pdVar4 + -1;
          *pdVar6 = dVar15 + dVar16 * dVar17;
          pdVar6 = pdVar6 + 1;
        } while (uVar9 != 0);
        pdVar11 = pdVar11 + 1;
        param_1[iVar10] = *pdVar8;
        bVar13 = uVar2 != param_4;
        iVar1 = iVar10;
        uVar2 = uVar2 + 1;
      } while (bVar13);
    }
  }
  else {
    dVar14 = 0.0;
    if (param_4 != 0) {
      uVar2 = 0;
      if ((5 < param_4) && (0xf < (uint)((int)param_1 + (8 - (int)param_2)))) {
        uVar2 = param_4 & 0xfffffffe;
        puVar7 = param_1 + 1;
        pdVar5 = param_2;
        uVar9 = uVar2;
        do {
          *(undefined4 *)pdVar5 = 0;
          *(undefined4 *)((int)pdVar5 + 4) =
               *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          *(undefined4 *)(pdVar5 + 1) =
               *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          *(undefined4 *)((int)pdVar5 + 0xc) =
               *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          pdVar5 = pdVar5 + 2;
          uVar9 = uVar9 - 2;
          *(undefined4 *)puVar7 = 0;
          *(undefined4 *)((int)puVar7 + 4) =
               *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          *(undefined4 *)(puVar7 + 1) =
               *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          *(undefined4 *)((int)puVar7 + 0xc) =
               *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          puVar7 = puVar7 + 2;
        } while (uVar9 != 0);
        if (uVar2 == param_4) {
          return 0.0;
        }
      }
      param_2 = param_2 + uVar2;
      iVar1 = param_4 - uVar2;
      puVar7 = param_1 + uVar2;
      do {
        *(undefined4 *)param_2 = 0;
        iVar1 = iVar1 + -1;
        *(undefined4 *)((int)param_2 + 4) = 0;
        param_2 = param_2 + 1;
        *(undefined4 *)(puVar7 + 1) = 0;
        *(undefined4 *)((int)puVar7 + 0xc) = 0;
        puVar7 = puVar7 + 1;
      } while (iVar1 != 0);
    }
  }
  return dVar14;
}


// =========================================================================
// Function: eDvMvirttVsmPHzmpKepcBAVHbEQMU
// Entry: 0x71b276f8 | Size: 104 bytes
// =========================================================================

void eDvMvirttVsmPHzmpKepcBAVHbEQMU(float *param_1,int param_2,int param_3,int param_4,int param_5)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  iVar4 = param_4;
  if (0 < param_4) {
    iVar4 = param_3;
  }
  if (iVar4 < 1) {
    return;
  }
  iVar4 = 0;
  do {
    pfVar1 = (float *)(param_5 + iVar4 * 4);
    pfVar2 = param_1;
    iVar3 = param_3;
    do {
      iVar3 = iVar3 + -1;
      fVar5 = *(float *)(param_2 + iVar4 * 4);
      fVar6 = *pfVar1 + fVar5 * *pfVar2;
      *pfVar1 = *pfVar2 - fVar5 * fVar6;
      *pfVar2 = fVar6;
      pfVar2 = pfVar2 + 1;
    } while (iVar3 != 0);
    iVar4 = iVar4 + 1;
  } while (iVar4 != param_4);
  return;
}


// =========================================================================
// Function: ymSTHACZvuXvGpXOUfAKSDxiTayrYK
// Entry: 0x71b27760 | Size: 3588 bytes
// =========================================================================

void ymSTHACZvuXvGpXOUfAKSDxiTayrYK
               (int param_1,int param_2,int param_3,double *param_4,double *param_5,int param_6)

{
  undefined1 auVar1 [32];
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  undefined1 (*pauVar9) [16];
  undefined8 *puVar10;
  float *pfVar11;
  longlong lVar12;
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
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined8 in_d18;
  undefined8 in_d19;
  float fStack_1f2c;
  float fStack_1f28;
  float fStack_1f24;
  float fStack_1f20;
  float fStack_1f1c;
  float fStack_1f18;
  float fStack_1f14;
  float fStack_1f10;
  float afStack_1f0c [480];
  undefined8 auStack_178c [2];
  float fStack_177c;
  float fStack_1778;
  float fStack_1774;
  float fStack_1770;
  float fStack_176c;
  float fStack_1768;
  float fStack_1764;
  float fStack_1760;
  float fStack_175c;
  float fStack_1758;
  float fStack_1754;
  float fStack_1750;
  float fStack_174c;
  float fStack_1748;
  float fStack_1744;
  float fStack_1740;
  float fStack_173c;
  float fStack_1738;
  undefined4 uStack_1734;
  undefined4 uStack_1730;
  undefined8 auStack_fdc [2];
  float fStack_fcc;
  float fStack_fc8;
  float fStack_fc4;
  float fStack_fc0;
  float fStack_fbc;
  float fStack_fb8;
  float fStack_fb4;
  float fStack_fb0;
  float fStack_fac;
  float fStack_fa8;
  float fStack_fa4;
  float fStack_fa0;
  float fStack_f9c;
  float fStack_f98;
  float fStack_f94;
  float fStack_f90;
  float fStack_f8c;
  float fStack_f88;
  undefined4 uStack_f84;
  undefined4 uStack_f80;
  float afStack_82c [492];
  float afStack_7c [5];
  
  pfVar6 = afStack_1f0c;
  iVar3 = 0;
  fVar14 = *(float *)(param_6 + 0x310);
  fVar18 = *(float *)(param_6 + 0x314);
  do {
    fVar22 = fVar14;
    fVar13 = *(float *)(param_1 + iVar3);
    pfVar7 = (float *)((int)pfVar6 + iVar3);
    iVar3 = iVar3 + 4;
    *(float *)(param_6 + 0x314) = fVar22;
    fVar14 = fVar13 + fVar22 * 1.9489596 + fVar18 * -0.94984514;
    *(float *)(param_6 + 0x310) = fVar14;
    *pfVar7 = fVar13 + fVar22 * -0.05101826 + fVar18 * 0.05015484;
    fVar18 = fVar22;
  } while (iVar3 != 0x780);
  iVar3 = 0x77c;
  pfVar7 = afStack_82c;
  do {
    pfVar8 = (float *)((int)pfVar6 + iVar3);
    iVar3 = iVar3 + -8;
    *pfVar7 = *pfVar8;
    pfVar7 = pfVar7 + 1;
  } while (iVar3 != -4);
  fVar14 = 0.0;
  pauVar9 = (undefined1 (*) [16])afStack_82c;
  iVar3 = 0;
  do {
    pfVar7 = (float *)(*pauVar9 + iVar3);
    iVar3 = iVar3 + 4;
    fVar18 = *pfVar7;
    fVar14 = fVar14 + fVar18 * 0.0347;
    *pfVar7 = fVar14;
    fVar14 = fVar18 + fVar14 * -0.0347;
  } while (iVar3 != 0x3c0);
  fVar18 = 0.0;
  iVar3 = 0;
  afStack_7c[0] = fVar14;
  do {
    pfVar7 = (float *)(*pauVar9 + iVar3);
    iVar3 = iVar3 + 4;
    fVar22 = *pfVar7;
    fVar18 = fVar18 + fVar22 * 0.1544;
    *pfVar7 = fVar18;
    fVar18 = fVar22 + fVar18 * -0.1544;
  } while (iVar3 != 0x3c0);
  fVar22 = 0.0;
  iVar3 = 0;
  afStack_7c[1] = fVar18;
  do {
    pfVar7 = (float *)(*pauVar9 + iVar3);
    iVar3 = iVar3 + 4;
    fVar13 = *pfVar7;
    fVar22 = fVar22 + fVar13 * 0.3826;
    *pfVar7 = fVar22;
    fVar22 = fVar13 + fVar22 * -0.3826;
  } while (iVar3 != 0x3c0);
  fVar13 = 0.0;
  iVar3 = 0;
  afStack_7c[2] = fVar22;
  do {
    pfVar7 = (float *)(*pauVar9 + iVar3);
    iVar3 = iVar3 + 4;
    fVar24 = *pfVar7;
    fVar13 = fVar13 + fVar24 * 0.744;
    *pfVar7 = fVar13;
    fVar13 = fVar24 + fVar13 * -0.744;
  } while (iVar3 != 0x3c0);
  puVar2 = auStack_fdc;
  afStack_7c[3] = fVar13;
  iVar3 = 0x410;
  do {
    auVar42 = *pauVar9;
    pauVar9 = pauVar9 + 1;
    iVar4 = iVar3 + -0x10;
    auVar42 = vrev(auVar42,4);
    *(longlong *)((int)puVar2 + iVar3) = auVar42._8_8_;
    *(longlong *)((int)auStack_fdc + iVar3 + 8) = auVar42._0_8_;
    iVar3 = iVar4;
  } while (iVar4 != 0x50);
  iVar3 = 0;
  fVar24 = *(float *)(param_6 + 0x260);
  fVar19 = *(float *)(param_6 + 0x274);
  fVar15 = *(float *)(param_6 + 0x240);
  fVar17 = *(float *)(param_6 + 0x26c);
  fVar21 = *(float *)(param_6 + 0x264);
  fVar26 = *(float *)(param_6 + 0x270);
  fVar16 = *(float *)(param_6 + 0x27c);
  fVar20 = *(float *)(param_6 + 0x244);
  fVar23 = *(float *)(param_6 + 0x278);
  fVar25 = *(float *)(param_6 + 0x268);
  fVar40 = *(float *)(param_6 + 0x254);
  fVar34 = *(float *)(param_6 + 0x24c);
  fVar37 = *(float *)(param_6 + 0x25c);
  fVar29 = *(float *)(param_6 + 600);
  fStack_1f2c = *(float *)(param_6 + 0x29c);
  fStack_1f28 = *(float *)(param_6 + 0x280);
  fStack_1f24 = *(float *)(param_6 + 0x284);
  fStack_1f20 = *(float *)(param_6 + 0x288);
  fStack_1f1c = *(float *)(param_6 + 0x28c);
  fStack_1f18 = *(float *)(param_6 + 0x290);
  fStack_1f14 = *(float *)(param_6 + 0x294);
  fStack_1f10 = *(float *)(param_6 + 0x298);
  fVar32 = *(float *)(param_6 + 0x248);
  fVar39 = *(float *)(param_6 + 0x250);
  do {
    pfVar7 = (float *)((int)&DAT_70086dc8 + iVar3);
    pfVar8 = (float *)((int)afStack_7c + iVar3);
    iVar3 = iVar3 + 4;
    fVar41 = *pfVar7;
    fVar31 = *pfVar8 + fVar41 * fVar15;
    fVar35 = (fVar15 - fVar41 * fVar31) + fVar41 * fVar20;
    fStack_f88 = (fVar20 - fVar41 * fVar35) + fVar41 * fVar32;
    fStack_f8c = (fVar32 - fVar41 * fStack_f88) + fVar41 * fVar34;
    fStack_f90 = (fVar34 - fVar41 * fStack_f8c) + fVar41 * fVar39;
    fStack_f94 = (fVar39 - fVar41 * fStack_f90) + fVar41 * fVar40;
    fStack_f98 = (fVar40 - fVar41 * fStack_f94) + fVar41 * fVar29;
    fStack_f9c = (fVar29 - fVar41 * fStack_f98) + fVar41 * fVar37;
    fStack_fa0 = (fVar37 - fVar41 * fStack_f9c) + fVar41 * fVar24;
    fStack_fa4 = (fVar24 - fVar41 * fStack_fa0) + fVar41 * fVar21;
    fStack_fa8 = (fVar21 - fVar41 * fStack_fa4) + fVar41 * fVar25;
    fStack_fac = (fVar25 - fVar41 * fStack_fa8) + fVar41 * fVar17;
    fStack_fb0 = (fVar17 - fVar41 * fStack_fac) + fVar41 * fVar26;
    fStack_fb4 = (fVar26 - fVar41 * fStack_fb0) + fVar41 * fVar19;
    fStack_fb8 = (fVar19 - fVar41 * fStack_fb4) + fVar41 * fVar23;
    fStack_fbc = (fVar23 - fVar41 * fStack_fb8) + fVar41 * fVar16;
    fStack_fc0 = (fVar16 - fVar41 * fStack_fbc) + fVar41 * fStack_1f28;
    fStack_fc4 = (fStack_1f28 - fVar41 * fStack_fc0) + fVar41 * fStack_1f24;
    fStack_fc8 = (fStack_1f24 - fVar41 * fStack_fc4) + fVar41 * fStack_1f20;
    fStack_fcc = (fStack_1f20 - fVar41 * fStack_fc8) + fVar41 * fStack_1f1c;
    fVar27 = (fStack_1f1c - fVar41 * fStack_fcc) + fVar41 * fStack_1f18;
    fVar38 = (fStack_1f18 - fVar41 * fVar27) + fVar41 * fStack_1f14;
    fVar30 = (fStack_1f14 - fVar41 * fVar38) + fVar41 * fStack_1f10;
    fVar33 = (fStack_1f10 - fVar41 * fVar30) + fVar41 * fStack_1f2c;
    *pfVar8 = fStack_1f2c - fVar41 * fVar33;
    fVar24 = fStack_fa0;
    fVar19 = fStack_fb4;
    fVar15 = fVar31;
    fVar17 = fStack_fac;
    fVar21 = fStack_fa4;
    fVar26 = fStack_fb0;
    fVar16 = fStack_fbc;
    fVar20 = fVar35;
    fVar23 = fStack_fb8;
    fVar25 = fStack_fa8;
    fVar40 = fStack_f94;
    fVar34 = fStack_f8c;
    fVar37 = fStack_f9c;
    fVar29 = fStack_f98;
    fStack_1f2c = fVar33;
    fStack_1f28 = fStack_fc0;
    fStack_1f24 = fStack_fc4;
    fStack_1f20 = fStack_fc8;
    fStack_1f1c = fStack_fcc;
    fStack_1f18 = fVar27;
    fStack_1f14 = fVar38;
    fStack_1f10 = fVar30;
    fVar32 = fStack_f88;
    fVar39 = fStack_f90;
  } while (iVar3 != 0x10);
  *(float *)(param_6 + 0x270) = fStack_fb0;
  *(float *)(param_6 + 0x240) = fVar31;
  *(float *)(param_6 + 0x244) = fVar35;
  uStack_f80 = *(undefined4 *)(param_6 + 0x240);
  *(float *)(param_6 + 0x240) = afStack_1f0c[0x1df];
  uStack_f84 = *(undefined4 *)(param_6 + 0x244);
  *(float *)(param_6 + 0x244) = afStack_1f0c[0x1dd];
  *(float *)(param_6 + 0x248) = fStack_f88;
  *(float *)(param_6 + 0x24c) = fStack_f8c;
  *(float *)(param_6 + 0x250) = fStack_f90;
  *(float *)(param_6 + 0x248) = afStack_1f0c[0x1db];
  *(float *)(param_6 + 0x24c) = afStack_1f0c[0x1d9];
  *(float *)(param_6 + 0x250) = afStack_1f0c[0x1d7];
  *(float *)(param_6 + 0x254) = fStack_f94;
  *(float *)(param_6 + 0x254) = afStack_1f0c[0x1d5];
  *(float *)(param_6 + 600) = fStack_f98;
  *(float *)(param_6 + 600) = afStack_1f0c[0x1d3];
  *(float *)(param_6 + 0x25c) = fStack_f9c;
  *(float *)(param_6 + 0x25c) = afStack_1f0c[0x1d1];
  *(float *)(param_6 + 0x260) = fStack_fa0;
  *(float *)(param_6 + 0x260) = afStack_1f0c[0x1cf];
  *(float *)(param_6 + 0x264) = fStack_fa4;
  *(float *)(param_6 + 0x264) = afStack_1f0c[0x1cd];
  *(float *)(param_6 + 0x268) = fStack_fa8;
  *(float *)(param_6 + 0x268) = afStack_1f0c[0x1cb];
  *(float *)(param_6 + 0x280) = afStack_1f0c[0x1bf];
  *(float *)(param_6 + 0x284) = afStack_1f0c[0x1bd];
  *(float *)(param_6 + 0x288) = afStack_1f0c[0x1bb];
  *(float *)(param_6 + 0x28c) = fStack_fcc;
  *(float *)(param_6 + 0x28c) = afStack_1f0c[0x1b9];
  *(float *)(param_6 + 0x290) = fVar27;
  *(float *)(param_6 + 0x294) = fVar38;
  *(float *)(param_6 + 0x298) = fVar30;
  *(float *)(param_6 + 0x29c) = fVar33;
  auVar42 = vrev(*(undefined1 (*) [16])(param_6 + 0x290),4);
  *(float *)(param_6 + 0x278) = afStack_1f0c[0x1c3];
  *(float *)(param_6 + 0x27c) = afStack_1f0c[0x1c1];
  *(float *)(param_6 + 0x298) = afStack_1f0c[0x1b3];
  *(float *)(param_6 + 0x26c) = fStack_fac;
  *(float *)(param_6 + 0x26c) = afStack_1f0c[0x1c9];
  *(float *)(param_6 + 0x290) = afStack_1f0c[0x1b7];
  iVar3 = 0x778;
  *(float *)(param_6 + 0x270) = afStack_1f0c[0x1c7];
  *(float *)(param_6 + 0x274) = afStack_1f0c[0x1c5];
  *(float *)(param_6 + 0x294) = afStack_1f0c[0x1b5];
  auStack_fdc[0] = auVar42._8_8_;
  auStack_fdc[1] = auVar42._0_8_;
  *(float *)(param_6 + 0x29c) = afStack_1f0c[0x1b1];
  pfVar7 = afStack_82c;
  do {
    pfVar8 = (float *)((int)pfVar6 + iVar3);
    iVar3 = iVar3 + -8;
    *pfVar7 = *pfVar8;
    pfVar7 = pfVar7 + 1;
  } while (iVar3 != -8);
  afStack_7c[0] = 0.0;
  pauVar9 = (undefined1 (*) [16])afStack_82c;
  iVar3 = 0;
  do {
    pfVar7 = (float *)(*pauVar9 + iVar3);
    iVar3 = iVar3 + 4;
    fVar24 = *pfVar7;
    afStack_7c[0] = afStack_7c[0] + fVar24 * 0.0347;
    *pfVar7 = afStack_7c[0];
    afStack_7c[0] = fVar24 + afStack_7c[0] * -0.0347;
  } while (iVar3 != 0x3c0);
  iVar3 = 0;
  fVar24 = 0.0;
  do {
    pfVar7 = (float *)(*pauVar9 + iVar3);
    iVar3 = iVar3 + 4;
    fVar19 = *pfVar7;
    fVar24 = fVar24 + fVar19 * 0.1544;
    *pfVar7 = fVar24;
    fVar24 = fVar19 + fVar24 * -0.1544;
  } while (iVar3 != 0x3c0);
  afStack_7c[2] = 0.0;
  iVar3 = 0;
  afStack_7c[1] = fVar24;
  do {
    pfVar7 = (float *)(*pauVar9 + iVar3);
    iVar3 = iVar3 + 4;
    fVar19 = *pfVar7;
    afStack_7c[2] = afStack_7c[2] + fVar19 * 0.3826;
    *pfVar7 = afStack_7c[2];
    afStack_7c[2] = fVar19 + afStack_7c[2] * -0.3826;
  } while (iVar3 != 0x3c0);
  fVar19 = 0.0;
  iVar3 = 0;
  do {
    pfVar7 = (float *)(*pauVar9 + iVar3);
    iVar3 = iVar3 + 4;
    fVar15 = *pfVar7;
    fVar19 = fVar19 + fVar15 * 0.744;
    *pfVar7 = fVar19;
    fVar19 = fVar15 + fVar19 * -0.744;
  } while (iVar3 != 0x3c0);
  puVar10 = auStack_178c;
  afStack_7c[3] = fVar19;
  iVar3 = 0x410;
  do {
    auVar42 = *pauVar9;
    pauVar9 = pauVar9 + 1;
    iVar4 = iVar3 + -0x10;
    auVar42 = vrev(auVar42,4);
    *(longlong *)((int)puVar10 + iVar3) = auVar42._8_8_;
    *(longlong *)((int)auStack_178c + iVar3 + 8) = auVar42._0_8_;
    iVar3 = iVar4;
  } while (iVar4 != 0x50);
  iVar3 = 0;
  fVar15 = *(float *)(param_6 + 0x2d8);
  fVar17 = *(float *)(param_6 + 0x2c8);
  fVar21 = *(float *)(param_6 + 0x2c0);
  fVar26 = *(float *)(param_6 + 0x2dc);
  fVar16 = *(float *)(param_6 + 0x2a0);
  fVar20 = *(float *)(param_6 + 0x2cc);
  fVar23 = *(float *)(param_6 + 0x2c4);
  fVar25 = *(float *)(param_6 + 0x2a4);
  fVar40 = *(float *)(param_6 + 0x2ac);
  fVar34 = *(float *)(param_6 + 0x2d4);
  fVar37 = *(float *)(param_6 + 0x2a8);
  fVar29 = *(float *)(param_6 + 0x2b0);
  fVar32 = *(float *)(param_6 + 0x2b4);
  fVar39 = *(float *)(param_6 + 0x2b8);
  fVar27 = *(float *)(param_6 + 700);
  fVar30 = *(float *)(param_6 + 0x2d0);
  fStack_1f2c = *(float *)(param_6 + 0x2fc);
  fStack_1f28 = *(float *)(param_6 + 0x2e0);
  fStack_1f24 = *(float *)(param_6 + 0x2e4);
  fStack_1f20 = *(float *)(param_6 + 0x2e8);
  fStack_1f1c = *(float *)(param_6 + 0x2ec);
  fStack_1f18 = *(float *)(param_6 + 0x2f0);
  fStack_1f14 = *(float *)(param_6 + 0x2f4);
  fStack_1f10 = *(float *)(param_6 + 0x2f8);
  do {
    pfVar7 = (float *)((int)&DAT_70086dc8 + iVar3);
    pfVar8 = (float *)((int)afStack_7c + iVar3);
    iVar3 = iVar3 + 4;
    fVar41 = *pfVar7;
    fVar38 = *pfVar8 + fVar41 * fVar16;
    fVar31 = (fVar16 - fVar41 * fVar38) + fVar41 * fVar25;
    fStack_1738 = (fVar25 - fVar41 * fVar31) + fVar41 * fVar37;
    fStack_173c = (fVar37 - fVar41 * fStack_1738) + fVar41 * fVar40;
    fStack_1740 = (fVar40 - fVar41 * fStack_173c) + fVar41 * fVar29;
    fStack_1744 = (fVar29 - fVar41 * fStack_1740) + fVar41 * fVar32;
    fStack_1748 = (fVar32 - fVar41 * fStack_1744) + fVar41 * fVar39;
    fStack_174c = (fVar39 - fVar41 * fStack_1748) + fVar41 * fVar27;
    fStack_1750 = (fVar27 - fVar41 * fStack_174c) + fVar41 * fVar21;
    fStack_1754 = (fVar21 - fVar41 * fStack_1750) + fVar41 * fVar23;
    fStack_1758 = (fVar23 - fVar41 * fStack_1754) + fVar41 * fVar17;
    fStack_175c = (fVar17 - fVar41 * fStack_1758) + fVar41 * fVar20;
    fStack_1760 = (fVar20 - fVar41 * fStack_175c) + fVar41 * fVar30;
    fStack_1764 = (fVar30 - fVar41 * fStack_1760) + fVar41 * fVar34;
    fStack_1768 = (fVar34 - fVar41 * fStack_1764) + fVar41 * fVar15;
    fStack_176c = (fVar15 - fVar41 * fStack_1768) + fVar41 * fVar26;
    fStack_1770 = (fVar26 - fVar41 * fStack_176c) + fVar41 * fStack_1f28;
    fStack_1774 = (fStack_1f28 - fVar41 * fStack_1770) + fVar41 * fStack_1f24;
    fStack_1778 = (fStack_1f24 - fVar41 * fStack_1774) + fVar41 * fStack_1f20;
    fStack_177c = (fStack_1f20 - fVar41 * fStack_1778) + fVar41 * fStack_1f1c;
    fVar36 = (fStack_1f1c - fVar41 * fStack_177c) + fVar41 * fStack_1f18;
    fVar33 = (fStack_1f18 - fVar41 * fVar36) + fVar41 * fStack_1f14;
    fVar35 = (fStack_1f14 - fVar41 * fVar33) + fVar41 * fStack_1f10;
    fVar28 = (fStack_1f10 - fVar41 * fVar35) + fVar41 * fStack_1f2c;
    *pfVar8 = fStack_1f2c - fVar41 * fVar28;
    fVar15 = fStack_1768;
    fVar17 = fStack_1758;
    fVar21 = fStack_1750;
    fVar26 = fStack_176c;
    fVar16 = fVar38;
    fVar20 = fStack_175c;
    fVar23 = fStack_1754;
    fVar25 = fVar31;
    fVar40 = fStack_173c;
    fVar34 = fStack_1764;
    fVar37 = fStack_1738;
    fVar29 = fStack_1740;
    fVar32 = fStack_1744;
    fVar39 = fStack_1748;
    fVar27 = fStack_174c;
    fVar30 = fStack_1760;
    fStack_1f2c = fVar28;
    fStack_1f28 = fStack_1770;
    fStack_1f24 = fStack_1774;
    fStack_1f20 = fStack_1778;
    fStack_1f1c = fStack_177c;
    fStack_1f18 = fVar36;
    fStack_1f14 = fVar33;
    fStack_1f10 = fVar35;
  } while (iVar3 != 0x10);
  *(float *)(param_6 + 0x2d0) = fStack_1760;
  *(float *)(param_6 + 0x2a0) = fVar38;
  *(float *)(param_6 + 0x2a4) = fVar31;
  uStack_1730 = *(undefined4 *)(param_6 + 0x2a0);
  *(float *)(param_6 + 0x2a0) = afStack_1f0c[0x1de];
  uStack_1734 = *(undefined4 *)(param_6 + 0x2a4);
  *(float *)(param_6 + 0x2a4) = afStack_1f0c[0x1dc];
  *(float *)(param_6 + 0x2a8) = fStack_1738;
  *(float *)(param_6 + 0x2ac) = fStack_173c;
  *(float *)(param_6 + 0x2b0) = fStack_1740;
  *(float *)(param_6 + 0x2a8) = afStack_1f0c[0x1da];
  *(float *)(param_6 + 0x2ac) = afStack_1f0c[0x1d8];
  *(float *)(param_6 + 0x2b0) = afStack_1f0c[0x1d6];
  *(float *)(param_6 + 700) = fStack_174c;
  *(float *)(param_6 + 0x2b4) = fStack_1744;
  *(float *)(param_6 + 0x2b4) = afStack_1f0c[0x1d4];
  *(float *)(param_6 + 0x2b8) = fStack_1748;
  *(float *)(param_6 + 0x2b8) = afStack_1f0c[0x1d2];
  *(float *)(param_6 + 700) = afStack_1f0c[0x1d0];
  *(float *)(param_6 + 0x2f4) = fVar33;
  *(float *)(param_6 + 0x2c0) = fStack_1750;
  *(float *)(param_6 + 0x2c0) = afStack_1f0c[0x1ce];
  *(float *)(param_6 + 0x2c4) = fStack_1754;
  *(float *)(param_6 + 0x2c4) = afStack_1f0c[0x1cc];
  *(float *)(param_6 + 0x2c8) = fStack_1758;
  *(float *)(param_6 + 0x2c8) = afStack_1f0c[0x1ca];
  *(float *)(param_6 + 0x2cc) = fStack_175c;
  *(float *)(param_6 + 0x2cc) = afStack_1f0c[0x1c8];
  *(float *)(param_6 + 0x2d0) = afStack_1f0c[0x1c6];
  *(float *)(param_6 + 0x2d4) = afStack_1f0c[0x1c4];
  *(float *)(param_6 + 0x2d8) = afStack_1f0c[0x1c2];
  *(float *)(param_6 + 0x2dc) = afStack_1f0c[0x1c0];
  *(float *)(param_6 + 0x2e0) = afStack_1f0c[0x1be];
  *(float *)(param_6 + 0x2e4) = afStack_1f0c[0x1bc];
  *(float *)(param_6 + 0x2e8) = afStack_1f0c[0x1ba];
  *(float *)(param_6 + 0x2ec) = fStack_177c;
  *(float *)(param_6 + 0x2ec) = afStack_1f0c[0x1b8];
  *(float *)(param_6 + 0x2f0) = fVar36;
  fVar15 = *(float *)(param_6 + 0x210) + afStack_7c[0] * -0.0017068604 + fVar24 * 0.0013678011 +
           afStack_7c[2] * -0.0011273653 + fVar19 * 0.00091257057;
  fVar24 = *(float *)(param_6 + 0x214) + afStack_7c[0] * -0.0011273653 + fVar24 * 0.00091257057 +
           afStack_7c[2] * 0.0010309428 + fVar19 * -0.00082615076;
  *(float *)(param_6 + 0x2f8) = fVar35;
  fVar19 = *(float *)(param_6 + 0x200) + fVar14 * -0.0015867851 + fVar18 * 0.0012715781 +
           fVar22 * -0.0010480568 + fVar13 * 0.00084837247;
  *(float *)(param_6 + 0x2fc) = fVar28;
  fVar14 = *(float *)(param_6 + 0x204) + fVar14 * -0.0010480568 + fVar18 * 0.00084837247 +
           fVar22 * 0.0013446799 + fVar13 * -0.0010775655;
  auVar43 = vrev(*(undefined1 (*) [16])(param_6 + 0x2f0),4);
  fVar18 = 0.0347;
  auVar1._16_16_ = auVar43;
  auVar1._0_16_ = auVar43;
  auVar42 = auVar1._8_16_;
  *(float *)(param_6 + 0x2f8) = afStack_1f0c[0x1b2];
  fVar22 = -0.0347;
  *(float *)(param_6 + 0x2f4) = afStack_1f0c[0x1b4];
  iVar3 = 0;
  *(float *)(param_6 + 0x2f0) = afStack_1f0c[0x1b6];
  auStack_178c[0] = auVar43._8_8_;
  auStack_178c[1] = auVar43._0_8_;
  *(float *)(param_6 + 0x2fc) = afStack_1f0c[0x1b0];
  do {
    pfVar7 = (float *)((int)puVar2 + iVar3);
    iVar3 = iVar3 + 4;
    fVar13 = *pfVar7;
    fVar19 = fVar19 + fVar13 * 0.0347;
    *pfVar7 = fVar19;
    fVar19 = fVar13 + fVar19 * -0.0347;
  } while (iVar3 != 0x3c0);
  iVar3 = 0;
  fVar26 = 0.744;
  fVar13 = -0.744;
  fVar17 = 0.3826;
  fVar21 = -0.3826;
  *(float *)(param_6 + 0x200) = fVar19;
  do {
    pfVar7 = (float *)((int)puVar2 + iVar3);
    iVar3 = iVar3 + 4;
    fVar19 = *pfVar7;
    fVar14 = fVar14 + fVar19 * 0.3826;
    *pfVar7 = fVar14;
    fVar14 = fVar19 + fVar14 * -0.3826;
  } while (iVar3 != 0x3c0);
  *(float *)(param_6 + 0x204) = fVar14;
  iVar3 = 0;
  fVar14 = 0.1544;
  fVar19 = -0.1544;
  do {
    pfVar7 = (float *)((int)puVar10 + iVar3);
    iVar3 = iVar3 + 4;
    fVar16 = *pfVar7;
    fVar15 = fVar15 + fVar16 * 0.1544;
    *pfVar7 = fVar15;
    fVar15 = fVar16 + fVar15 * -0.1544;
  } while (iVar3 != 0x3c0);
  iVar3 = 0;
  *(float *)(param_6 + 0x210) = fVar15;
  do {
    pfVar7 = (float *)((int)puVar10 + iVar3);
    iVar3 = iVar3 + 4;
    fVar15 = *pfVar7;
    fVar24 = fVar24 + fVar15 * 0.744;
    *pfVar7 = fVar24;
    fVar24 = fVar15 + fVar24 * -0.744;
  } while (iVar3 != 0x3c0);
  fVar15 = 0.5;
  iVar3 = 0;
  *(float *)(param_6 + 0x214) = fVar24;
  do {
    fVar24 = *(float *)((int)puVar10 + iVar3);
    fVar16 = *(float *)((int)puVar2 + iVar3);
    *(float *)(param_2 + iVar3) = (fVar16 + fVar24) * 0.5;
    pfVar7 = (float *)(param_3 + iVar3);
    iVar3 = iVar3 + 4;
    *pfVar7 = (fVar16 - fVar24) * 0.5;
  } while (iVar3 != 0x3c0);
  iVar3 = 0;
  do {
    pfVar7 = (float *)0x380;
    pfVar8 = (float *)0x390;
    lVar12 = 2;
    pfVar11 = pfVar6;
    while( true ) {
      *pfVar7 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      *pfVar8 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      lVar12 = lVar12 + -1;
      if (lVar12 == 0) break;
      pfVar7 = pfVar7 + 1;
      pfVar8 = pfVar8 + 1;
    }
    pfVar7 = (float *)0x388;
    pfVar8 = (float *)0x398;
    lVar12 = 2;
    while( true ) {
      *pfVar7 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      *pfVar8 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      lVar12 = lVar12 + -1;
      if (lVar12 == 0) break;
      pfVar7 = pfVar7 + 1;
      pfVar8 = pfVar8 + 1;
    }
    pfVar6 = pfVar6 + 8;
    *(undefined8 *)((int)puVar10 + iVar3) = auVar42._0_8_;
    ((undefined8 *)((int)puVar10 + iVar3))[1] = auVar42._8_8_;
    puVar5 = (undefined8 *)((int)puVar2 + iVar3);
    iVar3 = iVar3 + 0x10;
    *puVar5 = in_d18;
    puVar5[1] = in_d19;
  } while (iVar3 != 0x3c0);
  fVar24 = *(float *)(param_6 + 0x220);
  iVar3 = 0;
  do {
    pfVar6 = (float *)((int)puVar2 + iVar3);
    iVar3 = iVar3 + 4;
    fVar16 = *pfVar6;
    fVar24 = fVar24 + fVar16 * fVar18;
    *pfVar6 = fVar24;
    fVar24 = fVar16 + fVar24 * fVar22;
  } while (iVar3 != 0x3c0);
  fVar18 = *(float *)(param_6 + 0x224);
  iVar3 = 0;
  *(float *)(param_6 + 0x220) = fVar24;
  do {
    pfVar6 = (float *)((int)puVar2 + iVar3);
    iVar3 = iVar3 + 4;
    fVar22 = *pfVar6;
    fVar18 = fVar18 + fVar22 * fVar17;
    *pfVar6 = fVar18;
    fVar18 = fVar22 + fVar18 * fVar21;
  } while (iVar3 != 0x3c0);
  fVar22 = *(float *)(param_6 + 0x230);
  iVar3 = 0;
  *(float *)(param_6 + 0x224) = fVar18;
  do {
    pfVar6 = (float *)((int)puVar10 + iVar3);
    iVar3 = iVar3 + 4;
    fVar18 = *pfVar6;
    fVar22 = fVar22 + fVar18 * fVar14;
    *pfVar6 = fVar22;
    fVar22 = fVar18 + fVar22 * fVar19;
  } while (iVar3 != 0x3c0);
  fVar14 = *(float *)(param_6 + 0x234);
  iVar3 = 0;
  *(float *)(param_6 + 0x230) = fVar22;
  do {
    pfVar6 = (float *)((int)puVar10 + iVar3);
    iVar3 = iVar3 + 4;
    fVar18 = *pfVar6;
    fVar14 = fVar14 + fVar18 * fVar26;
    *pfVar6 = fVar14;
    fVar14 = fVar18 + fVar14 * fVar13;
  } while (iVar3 != 0x3c0);
  iVar3 = 0;
  *(float *)(param_6 + 0x234) = fVar14;
  do {
    fVar14 = *(float *)((int)puVar10 + iVar3);
    pfVar6 = (float *)((int)puVar2 + iVar3);
    iVar3 = iVar3 + 4;
    fVar18 = *pfVar6;
    *param_4 = (double)((fVar18 + fVar14) * fVar15);
    param_4 = param_4 + 1;
    *param_5 = (double)((fVar18 - fVar14) * fVar15);
    param_5 = param_5 + 1;
  } while (iVar3 != 0x3c0);
  return;
}


// =========================================================================
// Function: nCLXwfkCwgKOmXUvu_aXrKeB
// Entry: 0x71b28710 | Size: 6404 bytes
// =========================================================================

void nCLXwfkCwgKOmXUvu_aXrKeB
               (int param_1,undefined4 param_2,int param_3,double *param_4,double *param_5)

{
  uint uVar1;
  uint uVar2;
  double *pdVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  double *pdVar11;
  double *pdVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  double *pdVar18;
  double *pdVar19;
  undefined1 *puVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  uint in_fpscr;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  undefined8 uVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  undefined8 uStack_63b0;
  double adStack_63a8 [2];
  undefined1 auStack_6398 [456];
  double adStack_61d0 [205];
  double adStack_5b68 [24];
  undefined1 auStack_5aa8 [1728];
  undefined1 auStack_53e8 [192];
  double adStack_5328 [24];
  undefined1 auStack_5268 [1728];
  undefined1 auStack_4ba8 [192];
  undefined1 auStack_4ae8 [1912];
  undefined8 uStack_4370;
  double adStack_4368 [240];
  double adStack_3be8 [10];
  double adStack_3b98 [10];
  int aiStack_3b44 [10];
  double *apdStack_3b1c [12];
  double *apdStack_3aec [10];
  undefined1 *puStack_3ac4;
  undefined1 *puStack_3ac0;
  undefined1 *puStack_3abc;
  double adStack_3ab8 [217];
  undefined1 auStack_33f0 [376];
  double adStack_3278 [22];
  undefined1 auStack_31c8 [552];
  undefined1 auStack_2fa0 [552];
  undefined1 auStack_2d78 [552];
  undefined1 auStack_2b50 [280];
  double adStack_2a38 [34];
  undefined1 auStack_2928 [552];
  undefined1 auStack_2700 [552];
  undefined1 auStack_24d8 [552];
  undefined1 auStack_22b0 [16];
  double adStack_22a0 [21];
  double adStack_21f8 [46];
  undefined1 auStack_2088 [552];
  undefined1 auStack_1e60 [552];
  undefined1 auStack_1c38 [552];
  undefined1 auStack_1a10 [88];
  double adStack_19b8 [58];
  undefined1 auStack_17e8 [552];
  undefined1 auStack_15c0 [552];
  undefined1 auStack_1398 [552];
  undefined1 auStack_1170 [552];
  undefined1 auStack_f48 [552];
  undefined1 auStack_d20 [96];
  double adStack_cc0 [57];
  undefined1 auStack_af8 [104];
  double adStack_a90 [56];
  undefined1 auStack_8d0 [552];
  undefined1 auStack_6a8 [552];
  double adStack_480 [9];
  undefined1 auStack_438 [8];
  double adStack_430 [64];
  undefined1 auStack_230 [8];
  double adStack_228 [56];
  
  dVar46 = *(double *)(param_3 + 0x268);
  dVar47 = *(double *)(param_3 + 0x270);
  iVar16 = 0;
  do {
    pdVar11 = (double *)(param_1 + iVar16);
    dVar52 = *pdVar11;
    dVar53 = dVar47 + dVar52;
    dVar47 = dVar46 + dVar52 * -1.9952459171827 + dVar53 * 1.86864659625574;
    *(double *)(param_3 + 0x270) = dVar47;
    pdVar18 = (double *)((int)adStack_4368 + iVar16);
    iVar16 = iVar16 + 8;
    dVar46 = dVar53 * -0.8836 + *pdVar11 * 0.996004;
    *pdVar18 = dVar53;
    *(double *)(param_3 + 0x268) = dVar46;
  } while (iVar16 != 0x780);
  imp___aeabi_memcpy8(adStack_5328,param_3 + 0x278,0xc0);
  thunk_qxHBnCSmZGiIrYgSwaqfGJtkUk(adStack_4368,auStack_4ae8,auStack_5268,param_3 + 0x1048);
  imp___aeabi_memcpy8(param_3 + 0x278,auStack_4ba8,0xc0);
  puStack_3abc = auStack_6a8;
  puStack_3ac0 = auStack_8d0;
  apdStack_3aec[4] = (double *)auStack_17e8;
  dVar46 = *(double *)(param_3 + 0xa10);
  apdStack_3aec[5] = (double *)auStack_15c0;
  dVar47 = *(double *)(param_3 + 0xa18);
  apdStack_3aec[7] = (double *)auStack_1170;
  apdStack_3aec[6] = (double *)auStack_1398;
  apdStack_3aec[3] = (double *)auStack_1a10;
  apdStack_3b1c[8] = (double *)auStack_2928;
  apdStack_3aec[9] = (double *)auStack_d20;
  apdStack_3b1c[9] = (double *)auStack_2700;
  apdStack_3aec[8] = (double *)auStack_f48;
  apdStack_3b1c[0xb] = (double *)auStack_22b0;
  apdStack_3b1c[10] = (double *)auStack_24d8;
  puStack_3ac4 = auStack_af8;
  apdStack_3aec[1] = (double *)auStack_1e60;
  apdStack_3b1c[7] = (double *)auStack_2b50;
  apdStack_3b1c[1] = adStack_3ab8 + 0x4f;
  apdStack_3aec[0] = (double *)auStack_2088;
  apdStack_3aec[2] = (double *)auStack_1c38;
  apdStack_3b1c[3] = (double *)auStack_33f0;
  apdStack_3b1c[2] = adStack_3ab8 + 0x94;
  apdStack_3b1c[5] = (double *)auStack_2fa0;
  apdStack_3b1c[6] = (double *)auStack_2d78;
  apdStack_3b1c[4] = (double *)auStack_31c8;
  apdStack_3b1c[0] = adStack_3ab8 + 10;
  imp___aeabi_memclr8(adStack_3ab8,0x3638);
  pdVar18 = adStack_63a8;
  imp___aeabi_memcpy8(pdVar18,param_3,0x240);
  pdVar19 = adStack_5b68;
  pdVar12 = adStack_5b68 + 1;
  imp___aeabi_memcpy8(pdVar12,auStack_4ae8,0x778);
  dVar52 = *(double *)(param_3 + 0x240);
  uVar7 = 0xfffffffe;
  adStack_5b68[0] = *(double *)(param_3 + 0x260);
  *(undefined8 *)(param_3 + 0x260) = uStack_4370;
  pdVar11 = pdVar12;
  do {
    dVar53 = *pdVar11;
    uVar7 = uVar7 + 2;
    dVar52 = dVar52 + dVar53 * 0.0347;
    *pdVar11 = dVar52;
    pdVar11 = pdVar11 + 2;
    dVar52 = dVar53 + dVar52 * -0.0347;
  } while (uVar7 < 0xee);
  dVar53 = *(double *)(param_3 + 0x248);
  uVar7 = 0xfffffffe;
  *(double *)(param_3 + 0x240) = dVar52;
  do {
    dVar52 = *pdVar12;
    uVar7 = uVar7 + 2;
    dVar53 = dVar53 + dVar52 * 0.3826;
    *pdVar12 = dVar53;
    pdVar12 = pdVar12 + 2;
    dVar53 = dVar52 + dVar53 * -0.3826;
  } while (uVar7 < 0xee);
  dVar52 = *(double *)(param_3 + 0x250);
  uVar7 = 0xfffffffe;
  *(double *)(param_3 + 0x248) = dVar53;
  do {
    dVar53 = *pdVar19;
    uVar7 = uVar7 + 2;
    dVar52 = dVar52 + dVar53 * 0.1544;
    *pdVar19 = dVar52;
    pdVar19 = pdVar19 + 2;
    dVar52 = dVar53 + dVar52 * -0.1544;
  } while (uVar7 < 0xee);
  dVar53 = *(double *)(param_3 + 600);
  pdVar11 = adStack_5b68;
  uVar7 = 0xfffffffe;
  *(double *)(param_3 + 0x250) = dVar52;
  do {
    dVar52 = *pdVar11;
    uVar7 = uVar7 + 2;
    dVar53 = dVar53 + dVar52 * 0.744;
    *pdVar11 = dVar53;
    pdVar11 = pdVar11 + 2;
    dVar53 = dVar52 + dVar53 * -0.744;
  } while (uVar7 < 0xee);
  iVar16 = 0x240;
  *(double *)(param_3 + 600) = dVar53;
  pdVar11 = adStack_5b68 + 1;
  do {
    pdVar19 = pdVar11 + -1;
    pdVar12 = (double *)((int)pdVar18 + iVar16);
    dVar52 = *pdVar11;
    iVar16 = iVar16 + 8;
    pdVar11 = pdVar11 + 2;
    *pdVar12 = *pdVar19 + dVar52;
  } while (iVar16 != 0x600);
  iVar16 = 0;
  do {
    iVar8 = iVar16 + 8;
    adStack_61d0[0xc] =
         *(double *)((int)adStack_61d0 + iVar16 + 0x68) +
         *(double *)((int)adStack_61d0 + iVar16 + 0x58) * -0.25 + adStack_61d0[0xc] * 0.75;
    *(double *)((int)adStack_61d0 + iVar16 + 0x68) = adStack_61d0[0xc];
    iVar16 = iVar8;
  } while (iVar8 != 0x3c0);
  imp___aeabi_memcpy8(param_3,adStack_61d0 + 0x3d,0x240);
  dVar53 = 0.0;
  dVar52 = 1e-13;
  iVar16 = 0;
  do {
    iVar8 = iVar16 + 8;
    dVar48 = *(double *)((int)pdVar18 + iVar16);
    dVar52 = dVar52 + dVar48 * dVar48;
    dVar53 = dVar53 + *(double *)((int)adStack_61d0 + iVar16 + 0x68) * dVar48;
    iVar16 = iVar8;
  } while (iVar8 != 0x1e0);
  pdVar19 = adStack_430 + 0x37;
  puVar9 = auStack_6398;
  pdVar11 = adStack_228 + 0x36;
  iVar16 = 1;
  adStack_228[0x36] = dVar53 / SQRT(dVar52);
  do {
    pdVar12 = (double *)(&uStack_63b0 + iVar16);
    dVar48 = adStack_61d0[0xd] * pdVar18[iVar16];
    dVar53 = 0.0;
    pdVar3 = adStack_61d0 + iVar16;
    iVar8 = 0;
    do {
      dVar53 = dVar53 + dVar48;
      iVar17 = iVar8 + 8;
      dVar48 = *(double *)((int)adStack_61d0 + iVar8 + 0x70) * *(double *)(puVar9 + iVar8);
      iVar8 = iVar17;
    } while (iVar17 != 0x1d8);
    iVar16 = iVar16 + 1;
    puVar9 = puVar9 + 8;
    dVar52 = (dVar52 - *pdVar12 * *pdVar12) + *pdVar3 * *pdVar3;
    pdVar11[-1] = (dVar53 + dVar48) / SQRT(dVar52);
    pdVar11 = pdVar11 + -1;
  } while (iVar16 != 0x41);
  dVar53 = 0.0;
  dVar52 = 1e-13;
  iVar16 = 0;
  do {
    iVar8 = iVar16 + 8;
    dVar48 = *(double *)((int)adStack_61d0 + iVar16 + 8);
    dVar52 = dVar52 + dVar48 * dVar48;
    dVar53 = dVar53 + *(double *)((int)adStack_61d0 + iVar16 + 0x248) * dVar48;
    iVar16 = iVar8;
  } while (iVar8 != 0x1e0);
  iVar16 = 1;
  pdVar11 = adStack_430 + 0x36;
  adStack_430[0x36] = dVar53 / SQRT(dVar52);
  do {
    pdVar12 = adStack_61d0 + iVar16;
    dVar48 = adStack_61d0[0x49] * adStack_61d0[iVar16 + 1];
    dVar53 = 0.0;
    iVar8 = iVar16 + 0x3c;
    iVar17 = 0x1f0;
    do {
      dVar53 = dVar53 + dVar48;
      iVar21 = iVar17 + 8;
      dVar48 = *(double *)((int)adStack_61d0 + iVar17 + 0x60) * *(double *)((int)pdVar18 + iVar17);
      iVar17 = iVar21;
    } while (iVar21 != 0x3c8);
    iVar16 = iVar16 + 1;
    pdVar18 = pdVar18 + 1;
    dVar52 = (dVar52 - *pdVar12 * *pdVar12) + adStack_61d0[iVar8] * adStack_61d0[iVar8];
    pdVar11[-1] = (dVar53 + dVar48) / SQRT(dVar52);
    pdVar11 = pdVar11 + -1;
  } while (iVar16 != 0x41);
  dVar46 = dVar46 * 0.5;
  dVar52 = (double)imp_log(SUB84(dVar46,0),(int)((ulonglong)dVar46 >> 0x20));
  iVar16 = 8;
  dVar46 = dVar47 * dVar47 * 4.0;
  uVar15 = in_fpscr & 0xfffffff | (uint)(dVar46 < 0.8) << 0x1f | (uint)(dVar46 == 0.8) << 0x1e;
  uVar7 = uVar15 | (uint)NAN(dVar46) << 0x1c;
  bVar4 = (byte)(uVar15 >> 0x18);
  if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(uVar7 >> 0x1c) & 1)) {
    dVar46 = 0.8;
  }
  do {
    uVar45 = VectorSignedToFloat(iVar16,(byte)(uVar7 >> 0x16) & 3);
    dVar53 = (double)imp_log((int)uVar45,(int)((ulonglong)uVar45 >> 0x20));
    dVar53 = (dVar53 - dVar52) * (dVar53 - dVar52) * -5.0;
    dVar53 = (double)imp_exp(SUB84(dVar53,0),(int)((ulonglong)dVar53 >> 0x20));
    iVar16 = iVar16 + 1;
    *pdVar19 = *pdVar19 * (dVar46 * dVar53 + 1.0);
    pdVar19 = pdVar19 + 1;
  } while (iVar16 != 0x49);
  iVar8 = 0x1818;
  iVar17 = 0;
  iVar16 = 0;
  adStack_430[0x37] = adStack_430[0x37] * 0.2;
  adStack_228[0x34] = adStack_228[0x34] * 0.98;
  adStack_430[0x38] = adStack_430[0x38] * 0.5;
  adStack_430[0x39] = adStack_430[0x39] * 0.98;
  dVar46 = 0.0;
  adStack_228[0x36] = adStack_228[0x36] * 0.2;
  adStack_430[0x36] = adStack_430[0x36] * 0.2;
  adStack_228[0x35] = adStack_228[0x35] * 0.5;
  adStack_430[0x35] = adStack_430[0x35] * 0.5;
  adStack_480[0] = adStack_480[0] * 0.2;
  adStack_480[1] = adStack_480[1] * 0.5;
  adStack_480[2] = adStack_480[2] * 0.98;
  adStack_430[0x34] = adStack_430[0x34] * 0.98;
  do {
    pdVar11 = (double *)((int)adStack_480 + iVar17);
    iVar21 = iVar17 + 0x1b8;
    iVar17 = iVar17 + 8;
    dVar52 = *(double *)((int)adStack_430 + iVar21) + *pdVar11;
    uVar15 = uVar7 & 0xfffffff | (uint)(dVar52 < dVar46) << 0x1f | (uint)(dVar52 == dVar46) << 0x1e;
    uVar7 = uVar15 | (uint)(NAN(dVar52) || NAN(dVar46)) << 0x1c;
    *(double *)((int)adStack_3ab8 + iVar8) = dVar52;
    iVar21 = iVar8 + -0x50;
    iVar8 = iVar8 + 8;
    if (dVar46 < dVar52) {
      dVar46 = dVar52;
    }
    bVar4 = (byte)(uVar15 >> 0x18);
    if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(uVar7 >> 0x1c) & 1)) {
      iVar16 = iVar21 >> 3;
    }
  } while (iVar17 != 0x208);
  iVar17 = 0;
  iVar8 = 0x17;
  do {
    dVar52 = (double)VectorSignedToFloat(iVar8,(byte)(uVar7 >> 0x16) & 3);
    dVar53 = (double)VectorSignedToFloat(iVar8 + -0xb,(byte)(uVar7 >> 0x16) & 3);
    dVar53 = (dVar53 / dVar52) * 0.2 * (2.0 - dVar53 / dVar52);
    dVar48 = (*(double *)((int)adStack_430 + iVar17 + 0x1b8) +
             *(double *)((int)adStack_430 + iVar17 + 8)) * dVar53;
    dVar53 = dVar53 * (*(double *)((int)adStack_228 + iVar17 + 8) +
                      *(double *)((int)adStack_480 + iVar17));
    dVar52 = dVar46;
    if (dVar46 < dVar48) {
      dVar52 = dVar48;
    }
    *(double *)((int)adStack_3ab8 + iVar17 + 0x60) = dVar48;
    uVar15 = uVar7 & 0xfffffff | (uint)(dVar53 < dVar52) << 0x1f | (uint)(dVar53 == dVar52) << 0x1e;
    uVar7 = uVar15 | (uint)(NAN(dVar53) || NAN(dVar52)) << 0x1c;
    *(double *)((int)adStack_a90 + iVar17) = dVar53;
    if (dVar46 < dVar48) {
      iVar16 = iVar17 + 0x10 >> 3;
    }
    bVar4 = (byte)(uVar15 >> 0x18);
    iVar21 = iVar17 + 0x2fd8;
    iVar17 = iVar17 + 8;
    dVar46 = dVar52;
    if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(uVar7 >> 0x1c) & 1)) {
      iVar16 = iVar21 >> 3;
      dVar46 = dVar53;
    }
    iVar8 = iVar8 + 1;
  } while (iVar17 != 0x1b0);
  iVar17 = 0;
  iVar8 = 0x16;
  do {
    dVar52 = (double)VectorSignedToFloat(iVar8,(byte)(uVar7 >> 0x16) & 3);
    dVar53 = (double)VectorSignedToFloat(iVar8 + -10,(byte)(uVar7 >> 0x16) & 3);
    dVar53 = (dVar53 / dVar52) * 0.9 * (2.0 - dVar53 / dVar52);
    dVar48 = (*(double *)((int)adStack_430 + iVar17 + 0x1b8) +
             *(double *)((int)adStack_430 + iVar17)) * dVar53;
    dVar53 = dVar53 * (*(double *)((int)adStack_228 + iVar17) +
                      *(double *)((int)adStack_480 + iVar17));
    dVar52 = dVar46;
    if (dVar46 < dVar48) {
      dVar52 = dVar48;
    }
    *(double *)((int)adStack_3ab8 + iVar17 + 0x288) = dVar48;
    uVar15 = uVar7 & 0xfffffff | (uint)(dVar53 < dVar52) << 0x1f | (uint)(dVar53 == dVar52) << 0x1e;
    uVar7 = uVar15 | (uint)(NAN(dVar53) || NAN(dVar52)) << 0x1c;
    *(double *)((int)adStack_cc0 + iVar17) = dVar53;
    if (dVar46 < dVar48) {
      iVar16 = iVar17 + 0x238 >> 3;
    }
    bVar4 = (byte)(uVar15 >> 0x18);
    iVar21 = iVar17 + 0x2da8;
    iVar17 = iVar17 + 8;
    dVar46 = dVar52;
    if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(uVar7 >> 0x1c) & 1)) {
      iVar16 = iVar21 >> 3;
      dVar46 = dVar53;
    }
    iVar8 = iVar8 + 1;
  } while (iVar17 != 0x1b8);
  iVar23 = 8 - (int)adStack_3ab8;
  puVar20 = auStack_438;
  puVar9 = auStack_230;
  iVar17 = 2;
  iVar8 = 0x38;
  iVar21 = 0;
  iVar22 = 0x58;
  iVar25 = 0x1c0;
  do {
    pdVar11 = apdStack_3b1c[iVar17];
    pdVar18 = apdStack_3b1c[0x16 - iVar17];
    iVar24 = 0x15;
    iVar10 = 0;
    do {
      iVar13 = iVar21 + iVar24;
      iVar14 = iVar24 + -9;
      iVar24 = iVar24 + 1;
      dVar52 = (double)VectorSignedToFloat(iVar13,(byte)(uVar7 >> 0x16) & 3);
      dVar53 = (double)VectorSignedToFloat(iVar14,(byte)(uVar7 >> 0x16) & 3);
      dVar53 = (dVar53 / dVar52) * (2.0 - dVar53 / dVar52);
      dVar48 = (*(double *)((int)adStack_430 + iVar10 + 0x1b8) + *(double *)(puVar20 + iVar10)) *
               dVar53;
      dVar53 = dVar53 * (*(double *)(puVar9 + iVar10) + *(double *)((int)adStack_480 + iVar10));
      dVar52 = dVar46;
      if (dVar46 < dVar48) {
        dVar52 = dVar48;
      }
      *(double *)((int)pdVar11 + iVar10 + 0x10) = dVar48;
      uVar15 = uVar7 & 0xfffffff | (uint)(dVar53 < dVar52) << 0x1f |
               (uint)(dVar53 == dVar52) << 0x1e;
      uVar7 = uVar15 | (uint)(NAN(dVar53) || NAN(dVar52)) << 0x1c;
      *(double *)((int)pdVar18 + iVar10 + iVar22) = dVar53;
      if (dVar46 < dVar48) {
        iVar16 = (int)pdVar11 + iVar10 + (-0x40 - (int)adStack_3ab8) >> 3;
      }
      bVar4 = (byte)(uVar15 >> 0x18);
      iVar13 = iVar10 + iVar23;
      iVar10 = iVar10 + 8;
      dVar46 = dVar52;
      if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(uVar7 >> 0x1c) & 1)) {
        iVar16 = (int)pdVar18 + iVar13 >> 3;
        dVar46 = dVar53;
      }
    } while (iVar25 != iVar10);
    iVar25 = iVar25 + 8;
    iVar22 = iVar22 + -8;
    iVar23 = iVar23 + -8;
    iVar8 = iVar8 + 1;
    iVar21 = iVar21 + -1;
    puVar20 = puVar20 + -8;
    puVar9 = puVar9 + -8;
    iVar17 = iVar17 + 1;
  } while (iVar8 != 0x41);
  dVar46 = dVar46 * 0.6;
  uStack_63b0._4_4_ = param_3 + 0x3f8;
  uVar15 = 1;
  iVar17 = 0;
  iVar8 = 0x33;
  do {
    iVar22 = (-0x30 - (int)adStack_3ab8) + (int)apdStack_3b1c[uVar15];
    pdVar11 = apdStack_3b1c[uVar15] + 4;
    iVar21 = iVar8;
    do {
      dVar52 = *pdVar11;
      uVar1 = uVar7 & 0xfffffff;
      uVar2 = uVar1 | (uint)(dVar52 < dVar46) << 0x1f | (uint)(dVar52 == dVar46) << 0x1e;
      uVar7 = uVar2 | (uint)(NAN(dVar52) || NAN(dVar46)) << 0x1c;
      bVar4 = (byte)(uVar2 >> 0x18);
      if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(uVar7 >> 0x1c) & 1)) {
        dVar53 = pdVar11[-0x46];
        uVar2 = uVar1 | (uint)(dVar52 < dVar53) << 0x1f | (uint)(dVar52 == dVar53) << 0x1e;
        uVar7 = uVar2 | (uint)(NAN(dVar52) || NAN(dVar53)) << 0x1c;
        bVar4 = (byte)(uVar2 >> 0x18);
        if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(uVar7 >> 0x1c) & 1)) {
          dVar53 = pdVar11[-0x45];
          uVar2 = uVar1 | (uint)(dVar52 < dVar53) << 0x1f | (uint)(dVar52 == dVar53) << 0x1e;
          uVar7 = uVar2 | (uint)(NAN(dVar52) || NAN(dVar53)) << 0x1c;
          bVar4 = (byte)(uVar2 >> 0x18);
          if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(uVar7 >> 0x1c) & 1)) {
            dVar53 = pdVar11[0x45];
            uVar2 = uVar1 | (uint)(dVar52 < dVar53) << 0x1f | (uint)(dVar52 == dVar53) << 0x1e;
            uVar7 = uVar2 | (uint)(NAN(dVar52) || NAN(dVar53)) << 0x1c;
            bVar4 = (byte)(uVar2 >> 0x18);
            if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(uVar7 >> 0x1c) & 1)) {
              dVar53 = pdVar11[0x46];
              uVar1 = uVar1 | (uint)(dVar52 < dVar53) << 0x1f | (uint)(dVar52 == dVar53) << 0x1e;
              uVar7 = uVar1 | (uint)(NAN(dVar52) || NAN(dVar53)) << 0x1c;
              bVar4 = (byte)(uVar1 >> 0x18);
              if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(uVar7 >> 0x1c) & 1)) {
                aiStack_3b44[iVar17] = iVar22 >> 3;
                iVar17 = iVar17 + 1;
                if (iVar17 == 10) goto LAB_71b2924c;
              }
            }
          }
        }
      }
      pdVar11 = pdVar11 + 1;
      iVar22 = iVar22 + 8;
      iVar21 = iVar21 + -1;
    } while (iVar21 != 0);
    if (10 < uVar15) break;
    iVar8 = iVar8 + 1;
    uVar15 = uVar15 + 1;
  } while (iVar17 != 10);
  if (iVar17 == 10) {
LAB_71b2924c:
    iVar17 = 10;
  }
  else {
    uVar15 = 0xc;
    iVar8 = 0;
    do {
      pdVar11 = apdStack_3b1c[uVar15];
      iVar21 = iVar8;
      do {
        dVar52 = *(double *)((int)pdVar11 + iVar21 + 0x28);
        uVar1 = uVar7 & 0xfffffff;
        uVar2 = uVar1 | (uint)(dVar52 < dVar46) << 0x1f | (uint)(dVar52 == dVar46) << 0x1e;
        uVar7 = uVar2 | (uint)(NAN(dVar52) || NAN(dVar46)) << 0x1c;
        bVar4 = (byte)(uVar2 >> 0x18);
        if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(uVar7 >> 0x1c) & 1)) {
          dVar53 = *(double *)((int)pdVar11 + iVar21 + -0x208);
          uVar2 = uVar1 | (uint)(dVar52 < dVar53) << 0x1f | (uint)(dVar52 == dVar53) << 0x1e;
          uVar7 = uVar2 | (uint)(NAN(dVar52) || NAN(dVar53)) << 0x1c;
          bVar4 = (byte)(uVar2 >> 0x18);
          if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(uVar7 >> 0x1c) & 1)) {
            dVar53 = *(double *)((int)pdVar11 + iVar21 + -0x200);
            uVar2 = uVar1 | (uint)(dVar52 < dVar53) << 0x1f | (uint)(dVar52 == dVar53) << 0x1e;
            uVar7 = uVar2 | (uint)(NAN(dVar52) || NAN(dVar53)) << 0x1c;
            bVar4 = (byte)(uVar2 >> 0x18);
            if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(uVar7 >> 0x1c) & 1)) {
              dVar53 = *(double *)((int)pdVar11 + iVar21 + 0x250);
              uVar2 = uVar1 | (uint)(dVar52 < dVar53) << 0x1f | (uint)(dVar52 == dVar53) << 0x1e;
              uVar7 = uVar2 | (uint)(NAN(dVar52) || NAN(dVar53)) << 0x1c;
              bVar4 = (byte)(uVar2 >> 0x18);
              if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(uVar7 >> 0x1c) & 1)) {
                dVar53 = *(double *)((int)pdVar11 + iVar21 + 600);
                uVar1 = uVar1 | (uint)(dVar52 < dVar53) << 0x1f | (uint)(dVar52 == dVar53) << 0x1e;
                uVar7 = uVar1 | (uint)(NAN(dVar52) || NAN(dVar53)) << 0x1c;
                bVar4 = (byte)(uVar1 >> 0x18);
                if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(uVar7 >> 0x1c) & 1)) {
                  aiStack_3b44[iVar17] = (int)pdVar11 + iVar21 + (-0x28 - (int)adStack_3ab8) >> 3;
                  iVar17 = iVar17 + 1;
                  if (iVar17 == 10) goto LAB_71b2924c;
                }
              }
            }
          }
        }
        iVar21 = iVar21 + 8;
      } while (iVar21 != 0x1e0);
      if (0x14 < uVar15) break;
      iVar8 = iVar8 + 8;
      uVar15 = uVar15 + 1;
    } while (iVar17 != 10);
    if (iVar17 < 1) {
      dVar46 = (double)VectorSignedToFloat(iVar16 % 0x45 + 6,(byte)(uVar7 >> 0x16) & 3);
      dVar52 = (double)VectorSignedToFloat(iVar16 / 0x45,(byte)(uVar7 >> 0x16) & 3);
      dVar52 = (dVar46 + 11.0) - dVar52;
      if (iVar16 % 0x45 < 0xe) {
        dVar46 = 20.0;
      }
      goto LAB_71b29900;
    }
  }
  pdVar11 = adStack_3be8;
  pdVar18 = adStack_3b98;
  pdVar19 = adStack_5b68;
  iVar16 = 0;
  do {
    iVar8 = aiStack_3b44[iVar16];
    dVar37 = adStack_4368[iVar8 + 0xd7];
    dVar48 = adStack_3ab8[iVar8 + 9];
    dVar34 = adStack_4368[iVar8 + 0xd8];
    dVar57 = (adStack_3ab8 + 10)[iVar8];
    dVar32 = adStack_4368[iVar8 + 0xd9];
    dVar60 = adStack_3ab8[iVar8 + 0xb];
    dVar53 = adStack_4368[iVar8 + 0xda];
    dVar36 = adStack_3ab8[iVar8 + 0x4c];
    dVar27 = adStack_4368[iVar8 + 0xdb];
    dVar51 = adStack_3ab8[iVar8 + 0x4d];
    dVar31 = adStack_4368[iVar8 + 0xdc];
    dVar52 = dVar57 * 0.6008648410116 +
             adStack_3ab8[iVar8 + 7] * -0.0006755602864 + adStack_3ab8[iVar8 + 8] * 0.02184247643159
             + dVar48 * -0.12203175715679 + dVar60 * 0.6008648410116 +
             adStack_3ab8[iVar8 + 0xc] * -0.12203175715679 +
             adStack_3ab8[iVar8 + 0xd] * 0.02184247643159 +
             adStack_3ab8[iVar8 + 0xe] * -0.0006755602864;
    dVar49 = adStack_3ab8[iVar8 + 0x4e];
    dVar54 = adStack_4368[iVar8 + 0xdd];
    dVar29 = adStack_3ab8[iVar8 + 0x4f];
    dVar39 = adStack_4368[iVar8 + 0xde];
    dVar30 = dVar37 * -0.0006755602864 + dVar34 * 0.02184247643159 + dVar32 * -0.12203175715679 +
             dVar53 * 0.6008648410116 + dVar27 * 0.6008648410116 + dVar31 * -0.12203175715679 +
             dVar54 * 0.02184247643159 + dVar39 * -0.0006755602864;
    dVar58 = dVar57 * 0.6008648410116 +
             adStack_3ab8[iVar8 + 6] * -0.0006755602864 + adStack_3ab8[iVar8 + 7] * 0.02184247643159
             + adStack_3ab8[iVar8 + 8] * -0.12203175715679 + dVar48 * 0.6008648410116 +
             dVar60 * -0.12203175715679 + adStack_3ab8[iVar8 + 0xc] * 0.02184247643159 +
             adStack_3ab8[iVar8 + 0xd] * -0.0006755602864;
    dVar59 = adStack_3ab8[iVar8 + 0x50];
    uVar7 = uVar7 & 0xfffffff;
    dVar42 = adStack_3ab8[iVar8 + 0x51];
    dVar41 = adStack_3ab8[iVar8 + 0x52];
    dVar46 = dVar30;
    if (dVar30 < dVar58) {
      dVar46 = dVar58;
    }
    uVar15 = uVar7 | (uint)(dVar52 < dVar46) << 0x1f;
    dVar43 = adStack_3ab8[iVar8 + 0x53];
    dVar56 = (double)VectorSignedToFloat(iVar8 % 0x45 + 6,(byte)(uVar15 >> 0x16) & 3);
    dVar28 = dVar36 * -0.0006755602864 + dVar51 * 0.02184247643159 + dVar49 * -0.12203175715679 +
             dVar29 * 0.6008648410116 + dVar59 * 0.6008648410116 + dVar42 * -0.12203175715679 +
             dVar41 * 0.02184247643159 + dVar43 * -0.0006755602864;
    if (dVar52 != dVar46 && SUB41(uVar15 >> 0x1f,0) == (NAN(dVar52) || NAN(dVar46))) {
      dVar46 = dVar52;
    }
    uVar15 = uVar7 | (uint)(dVar28 < dVar46) << 0x1f;
    dVar33 = (double)VectorSignedToFloat(iVar8 / 0x45,(byte)(uVar15 >> 0x16) & 3);
    if (dVar28 != dVar46 && SUB41(uVar15 >> 0x1f,0) == (NAN(dVar28) || NAN(dVar46))) {
      dVar46 = dVar28;
    }
    dVar33 = (dVar56 + 11.0) - dVar33;
    uVar15 = uVar7 | (uint)(dVar57 < dVar46) << 0x1f;
    *pdVar18 = dVar56;
    *pdVar11 = dVar33;
    dVar26 = dVar58;
    dVar35 = dVar27;
    dVar38 = dVar59;
    dVar40 = dVar29;
    dVar44 = dVar53;
    dVar50 = dVar30;
    dVar55 = dVar57;
    if (dVar57 == dVar46 || SUB41(uVar15 >> 0x1f,0) != (NAN(dVar57) || NAN(dVar46))) {
      uVar15 = uVar7;
      if (dVar30 == dVar46) {
        dVar46 = adStack_4368[iVar8 + 0x92];
        dVar33 = dVar33 + 0.5;
        dVar31 = adStack_4368[iVar8 + 0x91];
        dVar34 = adStack_4368[iVar8 + 0x93];
        dVar37 = adStack_4368[iVar8 + 0x94];
        dVar50 = adStack_4368[iVar8 + 0x95];
        dVar39 = dVar50 * 0.6008648410116;
        dVar48 = adStack_4368[iVar8 + 0x96];
        dVar36 = adStack_4368[iVar8 + 0x97];
        dVar32 = adStack_4368[iVar8 + 0x98];
        dVar56 = dVar56 + -0.5;
        dVar29 = adStack_4368[iVar8 + 0x99];
        *pdVar11 = dVar33;
        *pdVar18 = dVar56;
        dVar26 = dVar53;
        dVar35 = dVar39 + dVar46 * -0.0006755602864 + dVar34 * 0.02184247643159 +
                          dVar37 * -0.12203175715679 + dVar48 * 0.6008648410116 +
                 dVar36 * -0.12203175715679 + dVar32 * 0.02184247643159 + dVar29 * -0.0006755602864;
        dVar38 = dVar52;
        dVar40 = dVar58;
        dVar44 = dVar39 + dVar31 * -0.0006755602864 + dVar46 * 0.02184247643159 +
                          dVar34 * -0.12203175715679 + dVar37 * 0.6008648410116 +
                 dVar48 * -0.12203175715679 + dVar36 * 0.02184247643159 + dVar32 * -0.0006755602864;
        dVar55 = dVar30;
        dVar28 = dVar57;
        dVar52 = dVar27;
      }
      else if (dVar58 == dVar46) {
        dVar46 = adStack_3ab8[iVar8 + 0x4b];
        dVar52 = adStack_4368[iVar8 + 0xd6];
        dVar33 = dVar33 + -0.5;
        dVar56 = dVar56 + -0.5;
        *pdVar11 = dVar33;
        *pdVar18 = dVar56;
        dVar26 = dVar48;
        dVar35 = dVar30;
        dVar38 = dVar28;
        dVar40 = dVar46 * -0.0006755602864 + dVar36 * 0.02184247643159 + dVar51 * -0.12203175715679
                 + dVar49 * 0.6008648410116 + dVar29 * 0.6008648410116 + dVar59 * -0.12203175715679
                 + dVar42 * 0.02184247643159 + dVar41 * -0.0006755602864;
        dVar44 = dVar52 * -0.0006755602864 + dVar37 * 0.02184247643159 + dVar34 * -0.12203175715679
                 + dVar32 * 0.6008648410116 + dVar53 * 0.6008648410116 + dVar27 * -0.12203175715679
                 + dVar31 * 0.02184247643159 + dVar54 * -0.0006755602864;
        dVar50 = dVar53;
        dVar55 = dVar58;
        dVar28 = dVar29;
        dVar52 = dVar57;
      }
      else {
        dVar56 = dVar56 + 0.5;
        *pdVar18 = dVar56;
        if (dVar52 == dVar46) {
          dVar33 = dVar33 + 0.5;
          dVar46 = adStack_3ab8[iVar8 + 0x54];
          dVar48 = adStack_4368[iVar8 + 0xdf];
          *pdVar11 = dVar33;
          dVar26 = dVar57;
          dVar35 = dVar34 * -0.0006755602864 + dVar32 * 0.02184247643159 +
                   dVar53 * -0.12203175715679 + dVar27 * 0.6008648410116 + dVar31 * 0.6008648410116
                   + dVar54 * -0.12203175715679 + dVar39 * 0.02184247643159 +
                   dVar48 * -0.0006755602864;
          dVar38 = dVar51 * -0.0006755602864 + dVar49 * 0.02184247643159 +
                   dVar29 * -0.12203175715679 + dVar59 * 0.6008648410116 + dVar42 * 0.6008648410116
                   + dVar41 * -0.12203175715679 + dVar43 * 0.02184247643159 +
                   dVar46 * -0.0006755602864;
          dVar40 = dVar28;
          dVar44 = dVar30;
          dVar50 = dVar27;
          dVar55 = dVar52;
          dVar28 = dVar59;
          dVar52 = dVar60;
        }
        else {
          dVar33 = dVar33 + -0.5;
          dVar53 = adStack_3ab8[iVar8 + 0x92];
          dVar32 = adStack_3ab8[iVar8 + 0x91];
          dVar36 = adStack_3ab8[iVar8 + 0x93];
          dVar48 = adStack_3ab8[iVar8 + 0x94];
          dVar46 = adStack_3ab8[iVar8 + 0x95];
          dVar37 = dVar46 * 0.6008648410116;
          dVar30 = adStack_3ab8[iVar8 + 0x96];
          dVar27 = adStack_3ab8[iVar8 + 0x97];
          dVar34 = adStack_3ab8[iVar8 + 0x98];
          dVar31 = adStack_3ab8[iVar8 + 0x99];
          *pdVar11 = dVar33;
          dVar26 = dVar29;
          dVar35 = dVar52;
          dVar38 = dVar37 + dVar53 * -0.0006755602864 + dVar36 * 0.02184247643159 +
                            dVar48 * -0.12203175715679 + dVar30 * 0.6008648410116 +
                   dVar27 * -0.12203175715679 + dVar34 * 0.02184247643159 +
                   dVar31 * -0.0006755602864;
          dVar40 = dVar37 + dVar32 * -0.0006755602864 + dVar53 * 0.02184247643159 +
                            dVar36 * -0.12203175715679 + dVar48 * 0.6008648410116 +
                   dVar30 * -0.12203175715679 + dVar27 * 0.02184247643159 +
                   dVar34 * -0.0006755602864;
          dVar44 = dVar58;
          dVar50 = dVar57;
          dVar55 = dVar28;
          dVar28 = dVar46;
          dVar52 = dVar59;
        }
      }
    }
    dVar53 = (dVar38 + dVar44) * 0.5 - dVar55;
    dVar46 = (dVar35 + dVar40) * 0.5 - dVar55;
    dVar48 = (((dVar52 + dVar50 + dVar28 + dVar26 + dVar55 * -4.0) - dVar53) - dVar46) * -0.5;
    dVar53 = dVar48 - dVar53;
    uVar15 = uVar15 & 0xfffffff;
    uVar7 = uVar15 | (uint)(dVar53 < 1e-07) << 0x1f;
    if (!SUB41(uVar7 >> 0x1f,0)) {
      dVar48 = dVar48 - dVar46;
      dVar46 = (((dVar52 + dVar26) - dVar50) - dVar28) * -0.5;
      uVar7 = uVar15 | (uint)(dVar53 * dVar48 - dVar46 * dVar46 < 1e-07) << 0x1f;
      if (!SUB41(uVar7 >> 0x1f,0)) {
        dVar53 = SQRT(dVar53);
        dVar46 = dVar46 / dVar53;
        dVar27 = (((dVar52 + dVar28) - dVar26) - dVar50) * 0.5;
        dVar29 = dVar27 / dVar53;
        dVar52 = (((dVar52 + dVar50) - dVar26) - dVar28) * 0.5;
        dVar48 = SQRT(dVar48 - dVar46 * dVar46);
        dVar48 = ((dVar52 - dVar29 * dVar46) / dVar48) / dVar48;
        dVar53 = ((dVar29 - dVar48 * dVar46) * 0.5) / dVar53;
        dVar48 = dVar48 * 0.5;
        dVar46 = dVar48 * dVar48 + dVar53 * dVar53;
        uVar15 = uVar15 | (uint)(dVar46 < 1.0) << 0x1f | (uint)(dVar46 == 1.0) << 0x1e;
        uVar7 = uVar15 | (uint)NAN(dVar46) << 0x1c;
        bVar4 = (byte)(uVar15 >> 0x18);
        if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(uVar7 >> 0x1c) & 1)) {
          dVar48 = dVar48 / dVar46;
          dVar53 = dVar53 / dVar46;
        }
        dVar55 = dVar55 + (dVar52 * dVar48 + dVar27 * dVar53) * 0.5;
        *pdVar18 = dVar56 + dVar53;
        *pdVar11 = dVar33 + dVar48;
      }
    }
    iVar16 = iVar16 + 1;
    *pdVar19 = dVar55;
    pdVar19 = pdVar19 + 1;
    pdVar18 = pdVar18 + 1;
    pdVar11 = pdVar11 + 1;
  } while (iVar17 != iVar16);
  pdVar11 = adStack_3be8;
  pdVar19 = adStack_3b98;
  pdVar18 = adStack_5b68;
  dVar46 = 0.0;
  iVar16 = 0;
  do {
    dVar52 = *pdVar11;
    pdVar11 = pdVar11 + 1;
    dVar53 = *pdVar19;
    pdVar19 = pdVar19 + 1;
    uVar45 = imp_log(SUB84(dVar53 + dVar52,0),(int)((ulonglong)(dVar53 + dVar52) >> 0x20));
    dVar53 = (double)imp_pow(0x33333333,0x3feb3333,(int)uVar45,(int)((ulonglong)uVar45 >> 0x20));
    dVar52 = *pdVar18;
    pdVar18 = pdVar18 + 1;
    if (dVar46 < dVar52 * dVar53) {
      dVar46 = dVar52 * dVar53;
      iVar8 = iVar16;
    }
    iVar16 = iVar16 + 1;
  } while (iVar17 != iVar16);
  dVar46 = adStack_3b98[iVar8] + adStack_3b98[iVar8];
  dVar52 = adStack_3be8[iVar8] + adStack_3be8[iVar8];
  if (dVar46 < 20.0) {
    dVar46 = 20.0;
  }
LAB_71b29900:
  iVar16 = 0;
  if (dVar52 < 20.0) {
    dVar52 = 20.0;
  }
  dVar53 = 0.0;
  if (140.0 < dVar46) {
    dVar46 = 140.0;
  }
  *param_4 = dVar46;
  param_4[1] = dVar46;
  if (140.0 < dVar52) {
    dVar52 = 140.0;
  }
  param_4[2] = dVar52;
  param_4[3] = dVar52;
  do {
    pdVar11 = (double *)((int)adStack_5328 + iVar16);
    iVar16 = iVar16 + 8;
    dVar53 = dVar53 + *pdVar11 * *pdVar11;
  } while (iVar16 != 0x840);
  *(undefined4 *)((int)param_5 + 4) = 0x3fd147ae;
  *(undefined4 *)(param_5 + 1) = 0x147ae148;
  *(undefined4 *)((int)param_5 + 0xc) = 0x3fd147ae;
  *(undefined4 *)((int)param_5 + 0x14) = 0x3fd147ae;
  *(undefined4 *)((int)param_5 + 0x1c) = 0x3fd147ae;
  *(undefined4 *)param_5 = 0x147ae148;
  *(undefined4 *)(param_5 + 2) = 0x147ae148;
  *(undefined4 *)(param_5 + 3) = 0x147ae148;
  dVar53 = 1.0 / dVar53;
  bVar6 = true;
  do {
    while( true ) {
      bVar5 = bVar6;
      thunk_MnR_waKhRqwoXyEKjxQALdOTK_MCQPF
                (adStack_5328,adStack_63a8,adStack_3ab8,uStack_63b0._4_4_,param_4,param_5);
      dVar46 = 0.0;
      iVar16 = 0;
      do {
        pdVar11 = (double *)((int)adStack_3ab8 + iVar16);
        pdVar18 = (double *)((int)adStack_63a8 + iVar16);
        iVar16 = iVar16 + 8;
        dVar46 = dVar46 + *pdVar18 * *pdVar11;
      } while (iVar16 != 0x840);
      dVar52 = 0.0;
      iVar16 = 0;
      do {
        iVar8 = iVar16 + 8;
        dVar52 = dVar52 + *(double *)((int)adStack_63a8 + iVar16) *
                          *(double *)((int)adStack_3278 + iVar16);
        iVar16 = iVar8;
      } while (iVar8 != 0x840);
      dVar48 = 0.0;
      iVar16 = 0;
      do {
        iVar8 = iVar16 + 8;
        dVar48 = dVar48 + *(double *)((int)adStack_63a8 + iVar16) *
                          *(double *)((int)adStack_2a38 + iVar16);
        iVar16 = iVar8;
      } while (iVar8 != 0x840);
      dVar27 = 0.0;
      iVar16 = 0;
      do {
        iVar8 = iVar16 + 8;
        dVar27 = dVar27 + *(double *)((int)adStack_63a8 + iVar16) *
                          *(double *)((int)adStack_21f8 + iVar16);
        iVar16 = iVar8;
      } while (iVar8 != 0x840);
      iVar16 = 0;
      dVar29 = 0.0;
      do {
        pdVar11 = (double *)((int)adStack_3ab8 + iVar16);
        iVar16 = iVar16 + 8;
        dVar29 = dVar29 + *pdVar11 * *pdVar11;
      } while (iVar16 != 0x840);
      dVar30 = 0.0;
      iVar16 = 0;
      do {
        iVar8 = iVar16 + 8;
        dVar30 = dVar30 + *(double *)((int)adStack_3ab8 + iVar16) *
                          *(double *)((int)adStack_3278 + iVar16);
        iVar16 = iVar8;
      } while (iVar8 != 0x840);
      iVar16 = 0x840;
      dVar31 = 0.0;
      do {
        pdVar11 = (double *)((int)adStack_3ab8 + iVar16);
        iVar16 = iVar16 + 8;
        dVar31 = dVar31 + *pdVar11 * *pdVar11;
      } while (iVar16 != 0x1080);
      dVar32 = 0.0;
      iVar16 = 0;
      do {
        iVar8 = iVar16 + 8;
        dVar32 = dVar32 + *(double *)((int)adStack_3ab8 + iVar16) *
                          *(double *)((int)adStack_2a38 + iVar16);
        iVar16 = iVar8;
      } while (iVar8 != 0x840);
      dVar34 = 0.0;
      iVar16 = -0x840;
      do {
        iVar8 = iVar16 + 8;
        dVar34 = dVar34 + *(double *)((int)adStack_2a38 + iVar16) *
                          *(double *)((int)adStack_21f8 + iVar16);
        iVar16 = iVar8;
      } while (iVar8 != 0);
      iVar16 = 0x1080;
      dVar36 = 0.0;
      do {
        pdVar11 = (double *)((int)adStack_3ab8 + iVar16);
        iVar16 = iVar16 + 8;
        dVar36 = dVar36 + *pdVar11 * *pdVar11;
      } while (iVar16 != 0x18c0);
      dVar37 = 0.0;
      iVar16 = 0;
      do {
        iVar8 = iVar16 + 8;
        dVar37 = dVar37 + *(double *)((int)adStack_3ab8 + iVar16) *
                          *(double *)((int)adStack_21f8 + iVar16);
        iVar16 = iVar8;
      } while (iVar8 != 0x840);
      dVar39 = 0.0;
      iVar16 = 0x840;
      do {
        iVar8 = iVar16 + 8;
        dVar39 = dVar39 + *(double *)((int)adStack_3ab8 + iVar16) *
                          *(double *)((int)adStack_2a38 + iVar16);
        iVar16 = iVar8;
      } while (iVar8 != 0x1080);
      dVar41 = 0.0;
      iVar16 = -0x840;
      do {
        iVar8 = iVar16 + 8;
        dVar41 = dVar41 + *(double *)((int)adStack_21f8 + iVar16) *
                          *(double *)((int)adStack_19b8 + iVar16);
        iVar16 = iVar8;
      } while (iVar8 != 0);
      iVar16 = 0x18c0;
      dVar42 = 0.0;
      do {
        pdVar11 = (double *)((int)adStack_3ab8 + iVar16);
        iVar16 = iVar16 + 8;
        dVar42 = dVar42 + *pdVar11 * *pdVar11;
      } while (iVar16 != 0x2100);
      dVar58 = *param_5;
      dVar49 = param_5[1];
      dVar51 = 1.0 / (1.0 - dVar58);
      dVar57 = dVar51 * dVar51 * 0.005;
      dVar54 = 1.0 / (1.0 - dVar49);
      dVar51 = dVar53 * dVar29 + 2.0228571428571303 + (dVar51 + dVar51) * dVar57;
      dVar59 = (dVar53 * dVar30 + -0.8142857142857101) / dVar51;
      dVar30 = dVar54 * dVar54 * 0.005;
      dVar28 = param_5[2];
      dVar32 = dVar53 * dVar32 + -0.43714285714286993;
      dVar54 = (dVar53 * dVar31 + 1.97142857142858 + (dVar54 + dVar54) * dVar30) -
               dVar59 * dVar51 * dVar59;
      dVar29 = 1.0 / (1.0 - dVar28);
      dVar34 = ((dVar53 * dVar34 + -0.8142857142857101) - dVar59 * dVar32) / dVar54;
      dVar60 = dVar53 * dVar37 + 0.15428571428571;
      dVar31 = dVar29 * dVar29 * 0.005;
      dVar32 = dVar32 / dVar51;
      dVar37 = ((dVar53 * dVar39 + -0.17142857142858) - dVar59 * dVar60) / dVar54;
      dVar39 = param_5[3];
      dVar29 = (dVar53 * dVar36 + 2.0228571428571303 + (dVar29 + dVar29) * dVar31) -
               (dVar34 * dVar54 * dVar34 + dVar51 * dVar32 * dVar32);
      dVar57 = dVar57 + dVar53 * dVar46 +
                        (dVar49 * -0.27142857142857 +
                         dVar47 * -0.30857142857143 + dVar58 * 0.67428571428571 +
                         dVar28 * -0.14571428571429 + dVar39 * 0.05142857142857) * 3.0;
      dVar30 = dVar57 * dVar59 -
               (dVar30 + dVar53 * dVar52 +
                         (dVar47 * -0.05714285714286 + dVar58 * -0.27142857142857 +
                          dVar49 * 0.65714285714286 + dVar28 * -0.27142857142857 +
                         dVar39 * -0.05714285714286) * 3.0);
      dVar36 = dVar60 / dVar51;
      dVar43 = 1.0 / (1.0 - dVar39);
      dVar41 = (((dVar53 * dVar41 + -0.9257142857142899) - dVar32 * dVar60) -
               dVar54 * dVar34 * dVar37) / dVar29;
      dVar52 = -(dVar31 + dVar53 * dVar48 +
                          (dVar49 * -0.27142857142857 +
                           dVar47 * 0.05142857142857 + dVar58 * -0.14571428571429 +
                           dVar28 * 0.67428571428571 + dVar39 * -0.30857142857143) * 3.0) -
               (dVar34 * dVar30 - dVar57 * dVar32);
      dVar46 = dVar43 * dVar43 * 0.005;
      dVar46 = (-(dVar53 * dVar27 +
                  (dVar47 * 0.01714285714286 + dVar58 * 0.05142857142857 +
                   dVar49 * -0.05714285714286 + dVar28 * -0.30857142857143 +
                  dVar39 * 0.29714285714286) * 3.0 + dVar46 * 1.33) -
               ((dVar37 * dVar30 - dVar57 * dVar36) + dVar52 * dVar41)) /
               ((dVar53 * dVar42 + 0.8914285714285799 + dVar43 * 2.66 * dVar46) -
               (dVar37 * dVar54 * dVar37 + dVar51 * dVar36 * dVar36 + dVar29 * dVar41 * dVar41));
      dVar48 = dVar52 / dVar29 - dVar46 * dVar41;
      dVar52 = dVar30 / dVar54 - (dVar34 * dVar48 + dVar46 * dVar37);
      dVar58 = (-dVar57 / dVar51 - (dVar32 * dVar48 + dVar46 * dVar36 + dVar52 * dVar59)) + dVar58;
      *param_5 = dVar58;
      if (dVar58 <= 0.45) {
        if (dVar58 < 0.0) {
          *param_5 = 0.0;
        }
      }
      else {
        *param_5 = 0.45;
      }
      dVar52 = dVar52 + param_5[1];
      param_5[1] = dVar52;
      if (dVar52 <= 0.45) {
        if (dVar52 < 0.0) {
          param_5[1] = 0.0;
        }
      }
      else {
        param_5[1] = 0.45;
      }
      dVar48 = dVar48 + param_5[2];
      param_5[2] = dVar48;
      if (dVar48 <= 0.45) {
        if (dVar48 < 0.0) {
          param_5[2] = 0.0;
        }
      }
      else {
        param_5[2] = 0.45;
      }
      dVar46 = dVar46 + param_5[3];
      param_5[3] = dVar46;
      if (0.45 < dVar46) break;
      if (dVar46 < 0.0) {
        param_5[3] = 0.0;
      }
      bVar6 = false;
      if (!bVar5) goto LAB_71b29fc0;
    }
    param_5[3] = 0.45;
    bVar6 = false;
  } while (bVar5);
LAB_71b29fc0:
  thunk_PvEQpQDYDerMILfDiwDeUbRnq(adStack_5328,param_2,uStack_63b0._4_4_,param_4,param_5);
  imp___aeabi_memcpy8(adStack_5b68,param_3 + 0x338,0xc0);
  imp___aeabi_memcpy8(auStack_5aa8,param_1,0x780);
  thunk_AB_rfXjuATmnsolOTipdHupBtgSY(adStack_5b68,param_2,param_3 + 0xa20,param_4,param_5);
  imp___aeabi_memcpy8(param_3 + 0x338,auStack_53e8,0xc0);
  return;
}


// =========================================================================
// Function: PvEQpQDYDerMILfDiwDeUbRnq
// Entry: 0x71b2a3b8 | Size: 52 bytes
// =========================================================================

void PvEQpQDYDerMILfDiwDeUbRnq
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  FUN_71b2a3f0(param_1,param_3,param_4,param_5,0,param_2,0);
  return;
}


// =========================================================================
// Function: FUN_71b2a3f0
// Entry: 0x71b2a3f0 | Size: 1616 bytes
// =========================================================================

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_71b2a3f0(undefined4 param_1,int param_2,double *param_3,double *param_4,uint param_5,
                 undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  double *pdVar4;
  int iVar5;
  int iVar6;
  uint in_fpscr;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_fb8 [1520];
  undefined1 auStack_9c8 [400];
  undefined1 auStack_838 [1712];
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  int iStack_160;
  double dStack_158;
  double dStack_150;
  undefined4 uStack_148;
  int iStack_144;
  uint uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined1 auStack_130 [152];
  double adStack_98 [6];
  
  uStack_138 = 0;
  uStack_140 = param_5;
  imp___aeabi_memcpy8(auStack_fb8,param_2,0x5f0);
  imp___aeabi_memclr8(auStack_9c8,0x840);
  uStack_188 = *(undefined8 *)(param_2 + 0x5f0);
  uStack_180 = *(undefined8 *)(param_2 + 0x5f8);
  uStack_178 = *(undefined8 *)(param_2 + 0x600);
  uStack_170 = *(undefined8 *)(param_2 + 0x608);
  uStack_168 = *(undefined8 *)(param_2 + 0x610);
  if (param_5 == 3) {
    imp___aeabi_memclr8(auStack_130,0xc0);
    imp___aeabi_memclr8(param_7,0x2100);
  }
  else if (param_5 == 1) {
    *param_4 = *param_4 * -1.3;
    param_4[1] = param_4[1] * -1.3;
    param_4[2] = param_4[2] * -1.3;
    param_4[3] = param_4[3] * -1.3;
  }
  dVar8 = *(double *)(param_2 + 0x618);
  dVar15 = dVar8 * 1.5;
  dVar12 = *param_3;
  uVar1 = in_fpscr & 0xfffffff | (uint)(dVar12 < dVar15) << 0x1f | (uint)(dVar12 == dVar15) << 0x1e;
  uVar7 = uVar1 | (uint)(NAN(dVar12) || NAN(dVar15)) << 0x1c;
  bVar2 = (byte)(uVar1 >> 0x18);
  if ((!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar7 >> 0x1c) & 1)) ||
     (uVar7 = in_fpscr & 0xfffffff | (uint)(dVar12 < dVar8 * 0.67) << 0x1f, SUB41(uVar7 >> 0x1f,0)))
  {
    dVar15 = *param_4;
    if (param_5 == 3) {
      adStack_98[1] = 1.0;
    }
  }
  else {
    dVar15 = *(double *)(param_2 + 0x620);
    dVar12 = dVar8;
  }
  uStack_13c = 0xc;
  iVar6 = 0;
  iVar5 = 0;
  do {
    dVar8 = *(double *)((int)param_3 + iVar6);
    dVar11 = (dVar8 - dVar12) / 5.0;
    dVar9 = dVar11 + dVar12 + 1.5;
    dVar13 = dVar9 + 0.5;
    dVar10 = *(double *)((int)param_4 + iVar6);
    uStack_148 = imp_lrint(SUB84(dVar13,0),(int)((ulonglong)dVar13 >> 0x20));
    uVar1 = uStack_140;
    dVar14 = (double)VectorSignedToFloat(uStack_148,(byte)(uVar7 >> 0x16) & 3);
    dVar13 = (dVar10 - dVar15) / 5.0;
    dVar9 = (dVar14 - dVar9) * 8.0 + -0.5;
    dStack_158 = dVar13 + dVar15;
    dStack_150 = dVar11 + dVar12;
    iStack_144 = iVar5;
    iVar3 = imp_lrint(SUB84(dVar9,0),(int)((ulonglong)dVar9 >> 0x20));
    iStack_160 = iVar3 * 0x48 + 0x7009bfb8;
    if (uVar1 == 3) {
      pdVar4 = (double *)((int)adStack_98 + iVar6 + 8);
      dVar12 = *pdVar4 + 0.2;
      uVar1 = uVar7 & 0xfffffff | (uint)(dVar12 < 1.0) << 0x1f | (uint)(dVar12 == 1.0) << 0x1e;
      uVar7 = uVar1 | (uint)NAN(dVar12) << 0x1c;
      bVar2 = (byte)(uVar1 >> 0x18);
      if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar7 >> 0x1c) & 1)) {
        dVar12 = 1.0;
      }
      *pdVar4 = dVar12;
      if (iVar6 != 0) {
        *(double *)((int)adStack_98 + iVar6) = *(double *)((int)adStack_98 + iVar6) + -0.2;
      }
    }
    FUN_71b2ab28(param_1,auStack_fb8,param_6,param_7);
    dVar12 = dStack_158;
    dVar9 = dVar11 + dStack_150;
    dVar15 = dVar9 + 1.5;
    dVar14 = dVar15 + 0.5;
    uStack_148 = imp_lrint(SUB84(dVar14,0),(int)((ulonglong)dVar14 >> 0x20));
    uVar1 = uStack_140;
    dVar14 = (double)VectorSignedToFloat(uStack_148,(byte)(uVar7 >> 0x16) & 3);
    dVar15 = (dVar14 - dVar15) * 8.0 + -0.5;
    dStack_158 = dVar13 + dVar12;
    dStack_150 = dVar9;
    iVar3 = imp_lrint(SUB84(dVar15,0),(int)((ulonglong)dVar15 >> 0x20));
    iStack_160 = iVar3 * 0x48 + 0x7009bfb8;
    if (uVar1 == 3) {
      dVar12 = adStack_98[iStack_144 + 1] + 0.2;
      uVar1 = uVar7 & 0xfffffff | (uint)(dVar12 < 1.0) << 0x1f | (uint)(dVar12 == 1.0) << 0x1e;
      uVar7 = uVar1 | (uint)NAN(dVar12) << 0x1c;
      bVar2 = (byte)(uVar1 >> 0x18);
      if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar7 >> 0x1c) & 1)) {
        dVar12 = 1.0;
      }
      adStack_98[iStack_144 + 1] = dVar12;
      if (0 < iStack_144) {
        adStack_98[iStack_144] = adStack_98[iStack_144] + -0.2;
      }
    }
    FUN_71b2ab28(param_1,auStack_fb8,param_6,param_7);
    dVar12 = dStack_158;
    dVar15 = dVar11 + dStack_150;
    dVar9 = dVar15 + 1.5;
    dVar14 = dVar9 + 0.5;
    uStack_148 = imp_lrint(SUB84(dVar14,0),(int)((ulonglong)dVar14 >> 0x20));
    uVar1 = uStack_140;
    dVar14 = (double)VectorSignedToFloat(uStack_148,(byte)(uVar7 >> 0x16) & 3);
    dVar9 = (dVar14 - dVar9) * 8.0 + -0.5;
    dStack_158 = dVar13 + dVar12;
    dStack_150 = dVar15;
    iVar3 = imp_lrint(SUB84(dVar9,0),(int)((ulonglong)dVar9 >> 0x20));
    iStack_160 = iVar3 * 0x48 + 0x7009bfb8;
    if (uVar1 == 3) {
      dVar12 = adStack_98[iStack_144 + 1] + 0.2;
      uVar1 = uVar7 & 0xfffffff | (uint)(dVar12 < 1.0) << 0x1f | (uint)(dVar12 == 1.0) << 0x1e;
      uVar7 = uVar1 | (uint)NAN(dVar12) << 0x1c;
      bVar2 = (byte)(uVar1 >> 0x18);
      if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar7 >> 0x1c) & 1)) {
        dVar12 = 1.0;
      }
      adStack_98[iStack_144 + 1] = dVar12;
      if (0 < iStack_144) {
        adStack_98[iStack_144] = adStack_98[iStack_144] + -0.2;
      }
    }
    FUN_71b2ab28(param_1,auStack_fb8,param_6,param_7);
    dVar12 = dStack_158;
    dVar15 = dVar11 + dStack_150;
    dVar9 = dVar15 + 1.5;
    dVar14 = dVar9 + 0.5;
    uStack_148 = imp_lrint(SUB84(dVar14,0),(int)((ulonglong)dVar14 >> 0x20));
    uVar1 = uStack_140;
    dVar14 = (double)VectorSignedToFloat(uStack_148,(byte)(uVar7 >> 0x16) & 3);
    dVar9 = (dVar14 - dVar9) * 8.0 + -0.5;
    dStack_158 = dVar13 + dVar12;
    dStack_150 = dVar15;
    iVar3 = imp_lrint(SUB84(dVar9,0),(int)((ulonglong)dVar9 >> 0x20));
    iStack_160 = iVar3 * 0x48 + 0x7009bfb8;
    if (uVar1 == 3) {
      dVar12 = adStack_98[iStack_144 + 1] + 0.2;
      uVar1 = uVar7 & 0xfffffff | (uint)(dVar12 < 1.0) << 0x1f | (uint)(dVar12 == 1.0) << 0x1e;
      uVar7 = uVar1 | (uint)NAN(dVar12) << 0x1c;
      bVar2 = (byte)(uVar1 >> 0x18);
      if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar7 >> 0x1c) & 1)) {
        dVar12 = 1.0;
      }
      adStack_98[iStack_144 + 1] = dVar12;
      if (0 < iStack_144) {
        adStack_98[iStack_144] = adStack_98[iStack_144] + -0.2;
      }
    }
    FUN_71b2ab28(param_1,auStack_fb8,param_6,param_7);
    dVar12 = dStack_158;
    dVar11 = dVar11 + dStack_150;
    dVar15 = dVar11 + 1.5;
    dVar9 = dVar15 + 0.5;
    uStack_148 = imp_lrint(SUB84(dVar9,0),(int)((ulonglong)dVar9 >> 0x20));
    uVar1 = uStack_140;
    dVar9 = (double)VectorSignedToFloat(uStack_148,(byte)(uVar7 >> 0x16) & 3);
    dVar15 = (dVar9 - dVar15) * 8.0 + -0.5;
    dStack_158 = dVar13 + dVar12;
    dStack_150 = dVar11;
    iVar3 = imp_lrint(SUB84(dVar15,0),(int)((ulonglong)dVar15 >> 0x20));
    iStack_160 = iVar3 * 0x48 + 0x7009bfb8;
    if (uVar1 == 3) {
      dVar12 = adStack_98[iStack_144 + 1] + 0.2;
      uVar1 = uVar7 & 0xfffffff | (uint)(dVar12 < 1.0) << 0x1f | (uint)(dVar12 == 1.0) << 0x1e;
      uVar7 = uVar1 | (uint)NAN(dVar12) << 0x1c;
      bVar2 = (byte)(uVar1 >> 0x18);
      if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar7 >> 0x1c) & 1)) {
        dVar12 = 1.0;
      }
      adStack_98[iStack_144 + 1] = dVar12;
      if (0 < iStack_144) {
        adStack_98[iStack_144] = adStack_98[iStack_144] + -0.2;
      }
    }
    FUN_71b2ab28(param_1,auStack_fb8,param_6,param_7);
    iVar6 = iVar6 + 8;
    iVar5 = iVar5 + 1;
    dVar12 = dVar8;
    dVar15 = dVar10;
  } while (iVar6 != 0x20);
  if (param_5 != 3) {
    imp___aeabi_memcpy8(param_2,auStack_838,0x5f0);
    *(double *)(param_2 + 0x618) = dVar8;
    *(undefined8 *)(param_2 + 0x5f0) = uStack_188;
    *(undefined8 *)(param_2 + 0x5f8) = uStack_180;
    *(undefined8 *)(param_2 + 0x600) = uStack_178;
    *(undefined8 *)(param_2 + 0x608) = uStack_170;
    *(undefined8 *)(param_2 + 0x610) = uStack_168;
    *(double *)(param_2 + 0x620) = dVar10;
    if ((param_5 & 0xfffffffe) != 2) {
      return;
    }
  }
  uStack_13c = 0x18;
  iStack_144 = 3;
  FUN_71b2ab28(param_1,auStack_fb8,param_6,param_7);
  return;
}


// =========================================================================
// Function: AB_rfXjuATmnsolOTipdHupBtgSY
// Entry: 0x71b2aa7c | Size: 56 bytes
// =========================================================================

void AB_rfXjuATmnsolOTipdHupBtgSY
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  FUN_71b2a3f0(param_1,param_3,param_4,param_5,2,param_2,0);
  return;
}


// =========================================================================
// Function: MnR_waKhRqwoXyEKjxQALdOTK_MCQPF
// Entry: 0x71b2aab4 | Size: 56 bytes
// =========================================================================

void MnR_waKhRqwoXyEKjxQALdOTK_MCQPF
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  FUN_71b2a3f0(param_1,param_4,param_5,param_6,3,param_2,param_3);
  return;
}


// =========================================================================
// Function: hFrcZSgdDdZVHssxceApeCXOUX
// Entry: 0x71b2aaec | Size: 56 bytes
// =========================================================================

void hFrcZSgdDdZVHssxceApeCXOUX
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  FUN_71b2a3f0(param_1,param_3,param_4,param_5,1,param_2,0);
  return;
}


// =========================================================================
// Function: FUN_71b2ab28
// Entry: 0x71b2ab28 | Size: 1292 bytes
// =========================================================================

void FUN_71b2ab28(int param_1,int param_2,int param_3,int param_4)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  double *pdVar8;
  int iVar9;
  int iVar10;
  double *pdVar11;
  double *pdVar12;
  int iVar13;
  double *pdVar14;
  uint uVar15;
  double *pdVar16;
  int iVar17;
  double *pdVar18;
  bool bVar19;
  double dVar20;
  undefined8 uVar21;
  double dVar22;
  undefined8 uVar23;
  double dVar24;
  undefined8 uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  int iStack_34;
  double *pdStack_2c;
  
  iVar17 = *(int *)(param_2 + 0xe7c);
  if (0 < iVar17) {
    iVar9 = *(int *)(param_2 + 0xe70);
    pdVar18 = (double *)(param_2 + 0xe30);
    iVar6 = *(int *)(param_2 + 0xe80);
    pdVar14 = *(double **)(param_2 + 0xe58);
    if (*(int *)(param_2 + 0xe78) == 3) {
      iVar4 = iVar6 + 0xbe;
      iStack_34 = iVar4 - iVar9;
      iVar10 = *(int *)(param_2 + 0xe74);
      pdVar16 = (double *)(param_4 + iVar6 * 8);
      pdStack_2c = (double *)(iVar6 * 8 + iVar9 * -8 + param_4 + 0x40);
      iVar5 = 0;
      iVar7 = iVar6;
      do {
        uVar21 = *(undefined8 *)(param_2 + 0xe38);
        uVar23 = *(undefined8 *)(param_2 + 0xe40);
        uVar25 = *(undefined8 *)(param_2 + 0xe48);
        *(double *)(param_2 + 0xe38) = *pdVar18;
        *(undefined8 *)(param_2 + 0xe40) = uVar21;
        *(undefined8 *)(param_2 + 0xe48) = uVar23;
        *(undefined8 *)(param_2 + 0xe50) = uVar25;
        pdVar11 = (double *)(param_2 + iStack_34 * 8);
        iStack_34 = iStack_34 + 1;
        uVar31 = *(undefined8 *)(param_2 + 0xf10);
        uVar29 = *(undefined8 *)(param_2 + 0xee8);
        uVar25 = *(undefined8 *)(param_2 + 0xec8);
        uVar30 = *(undefined8 *)(param_2 + 0xef0);
        uVar32 = *(undefined8 *)(param_2 + 0xf18);
        dVar20 = *pdVar11 * *pdVar14 + 0.0 + *(double *)(param_2 + iStack_34 * 8) * pdVar14[1] +
                 pdVar11[2] * pdVar14[2] + pdVar11[3] * pdVar14[3] + pdVar11[4] * pdVar14[4] +
                 pdVar11[5] * pdVar14[5] + pdVar11[6] * pdVar14[6] + pdVar11[7] * pdVar14[7] +
                 pdVar11[8] * pdVar14[8];
        dVar24 = *(double *)(param_2 + 0xe60);
        *(undefined8 *)(param_2 + 0xec8) = *(undefined8 *)(param_2 + 0xec0);
        uVar21 = *(undefined8 *)(param_2 + 0xe98);
        uVar23 = *(undefined8 *)(param_2 + 0xea0);
        *(undefined8 *)(param_2 + 0xe98) = *(undefined8 *)(param_2 + 0xe90);
        *(undefined8 *)(param_2 + 0xea0) = uVar21;
        *(undefined8 *)(param_2 + 0xea8) = uVar23;
        dVar22 = dVar20 * dVar24;
        *(undefined8 *)(param_2 + 0xec0) = *(undefined8 *)(param_2 + 0xeb8);
        *(undefined8 *)(param_2 + 0xed0) = uVar25;
        *(undefined8 *)(param_2 + 0xee8) = *(undefined8 *)(param_2 + 0xee0);
        *(undefined8 *)(param_2 + 0xef0) = uVar29;
        *(undefined8 *)(param_2 + 0xf10) = *(undefined8 *)(param_2 + 0xf08);
        *(undefined8 *)(param_2 + 0xef8) = uVar30;
        *(undefined8 *)(param_2 + 0xe90) = *(undefined8 *)(param_2 + 0xe88);
        *(undefined8 *)(param_2 + 0xf18) = uVar31;
        *(undefined8 *)(param_2 + 0xeb8) = *(undefined8 *)(param_2 + 0xeb0);
        *(undefined8 *)(param_2 + 0xf20) = uVar32;
        *(undefined8 *)(param_2 + 0xee0) = *(undefined8 *)(param_2 + 0xed8);
        *pdVar18 = dVar22;
        *(undefined8 *)(param_2 + 0xf08) = *(undefined8 *)(param_2 + 0xf00);
        if (-1 < iVar10) {
          uVar15 = -(iVar7 - iVar9) & iVar7 - iVar9 >> 0x1f;
          iVar6 = 0;
          pdVar11 = pdStack_2c;
          do {
            dVar26 = 0.0;
            if ((int)uVar15 < 9) {
              iVar13 = 9;
              pdVar8 = (double *)(*(int *)(param_2 + 0xe58) + 0x40);
              pdVar12 = pdVar11;
              do {
                dVar27 = *pdVar8;
                iVar13 = iVar13 + -1;
                dVar28 = *pdVar12;
                pdVar12 = pdVar12 + -1;
                pdVar8 = pdVar8 + -1;
                dVar26 = dVar26 + dVar28 * dVar27;
              } while ((int)uVar15 < iVar13);
            }
            pdVar11 = pdVar11 + 0x108;
            bVar19 = iVar6 != iVar10;
            *(double *)(param_2 + 0xe88 + iVar6 * 0x28) =
                 dVar26 * dVar24 + *(double *)(param_2 + 0xf28 + iVar6 * 8) * dVar20;
            iVar6 = iVar6 + 1;
          } while (bVar19);
          pdVar11 = pdVar16;
          pdVar12 = (double *)(param_2 + 0xea8);
          iVar6 = iVar10 + 1;
          if (-1 < iVar10) {
            do {
              pdVar8 = pdVar12 + -4;
              pdVar1 = pdVar12 + -3;
              iVar6 = iVar6 + -1;
              pdVar2 = pdVar12 + -2;
              pdVar3 = pdVar12 + -1;
              dVar20 = *pdVar12;
              pdVar12 = pdVar12 + 5;
              *pdVar11 = ((((0.0 - *pdVar8 * -0.07) - *pdVar1 * 0.25) + *pdVar2 * -0.64) -
                         *pdVar3 * 0.25) - dVar20 * -0.07;
              pdVar11 = pdVar11 + 0x108;
            } while (iVar6 != 0);
            dVar22 = *pdVar18;
          }
        }
        iVar6 = iVar7 * 8;
        pdVar16 = pdVar16 + 1;
        pdVar11 = (double *)(param_1 + iVar7 * 8);
        iVar7 = iVar7 + 1;
        dVar20 = *pdVar11 -
                 (dVar22 * -0.07 + 0.0 + *(double *)(param_2 + 0xe38) * 0.25 +
                  *(double *)(param_2 + 0xe40) * 0.64 + *(double *)(param_2 + 0xe48) * 0.25 +
                 *(double *)(param_2 + 0xe50) * -0.07);
        *(double *)(param_3 + iVar6) = dVar20;
        iVar6 = iVar4 * 8;
        iVar4 = iVar4 + 1;
        *(double *)(param_2 + iVar6) = dVar20 + *pdVar11;
        pdStack_2c = pdStack_2c + 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 != iVar17);
    }
    else {
      iVar7 = iVar17 + iVar6;
      iVar4 = param_2 + iVar9 * -8;
      iVar9 = param_2 + 0x5f0;
      iVar6 = iVar6 * 8;
      do {
        uVar21 = *(undefined8 *)(param_2 + 0xe38);
        dVar20 = *(double *)(param_2 + 0xe40);
        uVar23 = *(undefined8 *)(param_2 + 0xe48);
        *(double *)(param_2 + 0xe38) = *pdVar18;
        *(undefined8 *)(param_2 + 0xe40) = uVar21;
        *(double *)(param_2 + 0xe48) = dVar20;
        *(undefined8 *)(param_2 + 0xe50) = uVar23;
        iVar5 = iVar4 + iVar6;
        iVar4 = iVar4 + 8;
        pdVar11 = (double *)(param_3 + iVar6);
        param_3 = param_3 + 8;
        iVar17 = iVar17 + -1;
        pdVar16 = (double *)(param_1 + iVar6);
        param_1 = param_1 + 8;
        dVar20 = (*(double *)(iVar5 + 0x5f0) * *pdVar14 + 0.0 +
                  *(double *)(iVar5 + 0x5f8) * pdVar14[1] + *(double *)(iVar5 + 0x600) * pdVar14[2]
                  + *(double *)(iVar5 + 0x608) * pdVar14[3] +
                  *(double *)(iVar5 + 0x610) * pdVar14[4] + *(double *)(iVar5 + 0x618) * pdVar14[5]
                  + *(double *)(iVar5 + 0x620) * pdVar14[6] +
                  *(double *)(iVar5 + 0x628) * pdVar14[7] + *(double *)(iVar5 + 0x630) * pdVar14[8])
                 * *(double *)(param_2 + 0xe60);
        *pdVar18 = dVar20;
        dVar20 = *pdVar16 -
                 (dVar20 * -0.07 + 0.0 + *(double *)(param_2 + 0xe38) * 0.25 +
                  *(double *)(param_2 + 0xe40) * 0.64 + *(double *)(param_2 + 0xe48) * 0.25 +
                 *(double *)(param_2 + 0xe50) * -0.07);
        *pdVar11 = dVar20;
        pdVar11 = (double *)(iVar9 + iVar6);
        iVar9 = iVar9 + 8;
        *pdVar11 = dVar20 + *pdVar16;
      } while (iVar17 != 0);
    }
    *(int *)(param_2 + 0xe80) = iVar7;
    return;
  }
  return;
}


// =========================================================================
// Function: EpDXfL_kUSnJXCiWaKFwsHMndZpgT_UbJIXLcgioKYerdNmCQ
// Entry: 0x71b2b3c0 | Size: 18 bytes
// =========================================================================

void EpDXfL_kUSnJXCiWaKFwsHMndZpgT_UbJIXLcgioKYerdNmCQ(int param_1,int param_2)

{
  FUN_71b2b408(param_1,param_2,LZCOUNT(param_2 - param_1) * -2 + 0x3e,1);
  return;
}


// =========================================================================
// Function: FUN_71b2b408
// Entry: 0x71b2b408 | Size: 1136 bytes
// =========================================================================

void FUN_71b2b408(byte *param_1,byte *param_2,int param_3,uint param_4)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte bVar13;
  byte *pbVar14;
  undefined1 uStack_25;
  
LAB_71b2b41a:
  do {
    pbVar10 = param_1;
    uVar4 = (int)param_2 - (int)pbVar10;
    switch(uVar4) {
    case 0:
    case 1:
      goto switchD_71b2b6d2_caseD_0;
    case 2:
      bVar9 = *pbVar10;
      if (bVar9 <= param_2[-1]) {
        return;
      }
      *pbVar10 = param_2[-1];
      param_2[-1] = bVar9;
      return;
    case 3:
      bVar9 = *pbVar10;
      bVar8 = pbVar10[1];
      bVar7 = param_2[-1];
      if (bVar8 < bVar9) {
        if (bVar7 < bVar8) {
          *pbVar10 = bVar7;
          param_2[-1] = bVar9;
          return;
        }
        pbVar10[1] = bVar9;
        *pbVar10 = bVar8;
        if (bVar9 <= param_2[-1]) {
          return;
        }
        pbVar10[1] = param_2[-1];
        param_2[-1] = bVar9;
        return;
      }
      if (bVar8 <= bVar7) {
        return;
      }
      pbVar10[1] = bVar7;
      param_2[-1] = bVar8;
      bVar8 = *pbVar10;
      bVar9 = pbVar10[1];
      goto LAB_71b2b850;
    case 4:
      pbVar1 = pbVar10 + 2;
      bVar8 = *pbVar1;
      bVar9 = *pbVar10;
      pbVar14 = pbVar10 + 1;
      bVar7 = *pbVar14;
      pbVar11 = pbVar10;
      bVar6 = bVar8;
      if (bVar7 < bVar9) {
        pbVar12 = pbVar1;
        bVar13 = bVar9;
        if (bVar7 <= bVar8) {
          pbVar10[1] = bVar9;
          *pbVar10 = bVar7;
          pbVar11 = pbVar14;
          if (bVar9 <= bVar8) goto LAB_71b2b82e;
        }
LAB_71b2b7f8:
        *pbVar12 = bVar9;
        *pbVar11 = bVar8;
        bVar6 = bVar13;
      }
      else if (bVar8 < bVar7) {
        *pbVar1 = bVar7;
        *pbVar14 = bVar8;
        pbVar12 = pbVar14;
        bVar6 = bVar7;
        bVar13 = bVar7;
        if (bVar8 < bVar9) goto LAB_71b2b7f8;
      }
LAB_71b2b82e:
      if (bVar6 <= param_2[-1]) {
        return;
      }
      *pbVar1 = param_2[-1];
      param_2[-1] = bVar6;
      bVar9 = *pbVar1;
      if (*pbVar14 <= bVar9) {
        return;
      }
      pbVar10[2] = *pbVar14;
      bVar8 = *pbVar10;
      pbVar10[1] = bVar9;
LAB_71b2b850:
      if (bVar8 <= bVar9) {
        return;
      }
      pbVar10[1] = bVar8;
      *pbVar10 = bVar9;
      return;
    case 5:
      FUN_71b31166(pbVar10,pbVar10 + 1,pbVar10 + 2,pbVar10 + 3,param_2 + -1);
      return;
    }
    if ((int)uVar4 < 0x18) {
      pbVar1 = pbVar10 + 1;
      if ((param_4 & 1) == 0) {
        if (pbVar1 == param_2 || pbVar10 == param_2) {
          return;
        }
        do {
          pbVar14 = pbVar1;
          bVar9 = *pbVar10;
          bVar8 = pbVar10[1];
          pbVar10 = pbVar14;
          if (bVar8 < bVar9) {
            do {
              pbVar1 = pbVar10 + -1;
              *pbVar10 = bVar9;
              bVar9 = pbVar10[-2];
              pbVar10 = pbVar1;
            } while (bVar8 < bVar9);
            *pbVar1 = bVar8;
          }
          pbVar1 = pbVar14 + 1;
          pbVar10 = pbVar14;
        } while (pbVar14 + 1 != param_2);
        return;
      }
      if (pbVar1 == param_2 || pbVar10 == param_2) {
        return;
      }
      iVar2 = 1;
      pbVar14 = pbVar10;
      do {
        bVar9 = *pbVar14;
        bVar8 = pbVar14[1];
        iVar5 = iVar2;
        if (bVar8 < bVar9) {
          do {
            pbVar10[iVar5] = bVar9;
            pbVar14 = pbVar10;
            if (iVar5 == 1) goto LAB_71b2b78a;
            iVar3 = iVar5 + -1;
            bVar9 = pbVar10[iVar5 + -2];
            iVar5 = iVar3;
          } while (bVar8 < bVar9);
          pbVar14 = pbVar10 + iVar3;
LAB_71b2b78a:
          *pbVar14 = bVar8;
        }
        pbVar11 = pbVar1 + 1;
        iVar2 = iVar2 + 1;
        pbVar14 = pbVar1;
        pbVar1 = pbVar11;
        if (pbVar11 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (pbVar10 == param_2) {
        return;
      }
      FUN_71b31244(pbVar10,param_2,param_2,&uStack_25);
      return;
    }
    bVar9 = param_2[-1];
    pbVar1 = pbVar10 + (uVar4 >> 1);
    if (uVar4 < 0x81) {
      bVar8 = *pbVar1;
      bVar7 = *pbVar10;
      if (bVar7 < bVar8) {
        if (bVar9 < bVar7) {
          *pbVar1 = bVar9;
        }
        else {
          *pbVar1 = bVar7;
          *pbVar10 = bVar8;
          if (bVar8 <= param_2[-1]) goto LAB_71b2b5a6;
          *pbVar10 = param_2[-1];
        }
        param_2[-1] = bVar8;
      }
      else if (bVar9 < bVar7) {
        *pbVar10 = bVar9;
        param_2[-1] = bVar7;
        bVar9 = *pbVar1;
        if (*pbVar10 < bVar9) {
          *pbVar1 = *pbVar10;
          *pbVar10 = bVar9;
        }
      }
    }
    else {
      bVar7 = *pbVar10;
      bVar8 = *pbVar1;
      if (bVar8 < bVar7) {
        if (bVar9 < bVar8) {
          *pbVar10 = bVar9;
        }
        else {
          *pbVar10 = bVar8;
          *pbVar1 = bVar7;
          if (bVar7 <= param_2[-1]) goto LAB_71b2b4b6;
          *pbVar1 = param_2[-1];
        }
        param_2[-1] = bVar7;
      }
      else if (bVar9 < bVar8) {
        *pbVar1 = bVar9;
        param_2[-1] = bVar8;
        bVar9 = *pbVar10;
        if (*pbVar1 < bVar9) {
          *pbVar10 = *pbVar1;
          *pbVar1 = bVar9;
        }
      }
LAB_71b2b4b6:
      bVar8 = param_2[-2];
      bVar9 = pbVar10[1];
      pbVar14 = pbVar10 + ((uVar4 >> 1) - 1);
      bVar7 = *pbVar14;
      if (bVar7 < bVar9) {
        if (bVar8 < bVar7) {
          pbVar10[1] = bVar8;
        }
        else {
          pbVar10[1] = bVar7;
          *pbVar14 = bVar9;
          if (bVar9 <= param_2[-2]) goto LAB_71b2b520;
          *pbVar14 = param_2[-2];
        }
        param_2[-2] = bVar9;
      }
      else if (bVar8 < bVar7) {
        *pbVar14 = bVar8;
        param_2[-2] = bVar7;
        bVar9 = pbVar10[1];
        if (*pbVar14 < bVar9) {
          pbVar10[1] = *pbVar14;
          *pbVar14 = bVar9;
        }
      }
LAB_71b2b520:
      bVar8 = param_2[-3];
      bVar9 = pbVar10[2];
      pbVar11 = pbVar10 + (uVar4 >> 1) + 1;
      bVar7 = *pbVar11;
      if (bVar7 < bVar9) {
        if (bVar8 < bVar7) {
          pbVar10[2] = bVar8;
        }
        else {
          pbVar10[2] = bVar7;
          *pbVar11 = bVar9;
          if (bVar9 <= param_2[-3]) goto LAB_71b2b56a;
          *pbVar11 = param_2[-3];
        }
        param_2[-3] = bVar9;
      }
      else if (bVar8 < bVar7) {
        *pbVar11 = bVar8;
        param_2[-3] = bVar7;
        bVar9 = pbVar10[2];
        if (*pbVar11 < bVar9) {
          pbVar10[2] = *pbVar11;
          *pbVar11 = bVar9;
        }
      }
LAB_71b2b56a:
      bVar9 = *pbVar11;
      bVar8 = *pbVar14;
      bVar7 = *pbVar1;
      if (bVar7 < bVar8) {
        bVar6 = bVar7;
        if (bVar7 <= bVar9) {
          *pbVar14 = bVar7;
          *pbVar1 = bVar8;
          pbVar14 = pbVar1;
          bVar7 = bVar8;
          bVar6 = bVar9;
          if (bVar8 <= bVar9) goto LAB_71b2b59c;
        }
LAB_71b2b598:
        *pbVar11 = bVar8;
        *pbVar14 = bVar9;
        bVar7 = bVar6;
      }
      else if (bVar9 < bVar7) {
        *pbVar11 = bVar7;
        *pbVar1 = bVar9;
        pbVar11 = pbVar1;
        bVar7 = bVar9;
        bVar6 = bVar8;
        if (bVar9 < bVar8) goto LAB_71b2b598;
      }
LAB_71b2b59c:
      bVar9 = *pbVar10;
      *pbVar10 = bVar7;
      *pbVar1 = bVar9;
    }
LAB_71b2b5a6:
    bVar9 = *pbVar10;
    param_3 = param_3 + -1;
    param_1 = pbVar10;
    if (((param_4 & 1) == 0) && (bVar9 <= pbVar10[-1])) {
      if (bVar9 < param_2[-1]) {
        do {
          param_1 = param_1 + 1;
        } while (*param_1 <= bVar9);
      }
      else {
        do {
          param_1 = param_1 + 1;
          if (param_2 <= param_1) break;
        } while (*param_1 <= bVar9);
      }
      pbVar1 = param_2;
      if (param_1 < param_2) {
        do {
          pbVar1 = pbVar1 + -1;
        } while (bVar9 < *pbVar1);
      }
      if (param_1 < pbVar1) {
        bVar8 = *pbVar1;
        bVar7 = *param_1;
        do {
          *param_1 = bVar8;
          *pbVar1 = bVar7;
          do {
            param_1 = param_1 + 1;
            bVar7 = *param_1;
          } while (bVar7 <= bVar9);
          do {
            pbVar1 = pbVar1 + -1;
            bVar8 = *pbVar1;
          } while (bVar9 < bVar8);
        } while (param_1 < pbVar1);
      }
      pbVar1 = param_1 + -1;
      param_4 = 0;
      if (pbVar1 != pbVar10) {
        *pbVar10 = *pbVar1;
      }
      *pbVar1 = bVar9;
      goto LAB_71b2b41a;
    }
    iVar2 = 0;
    do {
      iVar5 = iVar2 + 1;
      bVar8 = pbVar10[iVar2 + 1];
      iVar2 = iVar5;
    } while (bVar8 < bVar9);
    pbVar14 = pbVar10 + iVar5;
    pbVar1 = param_2;
    if (iVar5 == 1) {
      do {
        if (pbVar1 <= pbVar14) break;
        pbVar1 = pbVar1 + -1;
      } while (bVar9 <= *pbVar1);
    }
    else {
      do {
        pbVar1 = pbVar1 + -1;
      } while (bVar9 <= *pbVar1);
    }
    param_1 = pbVar14;
    if (pbVar14 < pbVar1) {
      bVar7 = *pbVar1;
      pbVar11 = pbVar1;
      do {
        *param_1 = bVar7;
        *pbVar11 = bVar8;
        do {
          param_1 = param_1 + 1;
          bVar8 = *param_1;
        } while (bVar8 < bVar9);
        do {
          pbVar11 = pbVar11 + -1;
          bVar7 = *pbVar11;
        } while (bVar9 <= bVar7);
      } while (param_1 < pbVar11);
    }
    pbVar11 = param_1 + -1;
    if (pbVar11 != pbVar10) {
      *pbVar10 = *pbVar11;
    }
    *pbVar11 = bVar9;
    if (pbVar14 < pbVar1) {
LAB_71b2b640:
      FUN_71b2b408(pbVar10,pbVar11,param_3,param_4 & 1);
      param_4 = 0;
    }
    else {
      iVar2 = FUN_71b30f94(pbVar10,pbVar11);
      iVar5 = FUN_71b30f94(param_1,param_2);
      if (iVar5 == 0) {
        if (iVar2 == 0) goto LAB_71b2b640;
      }
      else {
        param_1 = pbVar10;
        param_2 = pbVar11;
        if (iVar2 != 0) {
switchD_71b2b6d2_caseD_0:
          return;
        }
      }
    }
  } while( true );
}


// =========================================================================
// Function: vDBqwBrGmYviEPCCDPpaoPgcFGCHSpYZRzFEexuUsnIyzu_zH
// Entry: 0x71b2b922 | Size: 20 bytes
// =========================================================================

void vDBqwBrGmYviEPCCDPpaoPgcFGCHSpYZRzFEexuUsnIyzu_zH(int param_1,int param_2)

{
  FUN_71b2b96c(param_1,param_2,LZCOUNT(param_2 - param_1 >> 2) * -2 + 0x3e,1);
  return;
}


// =========================================================================
// Function: FUN_71b2b96c
// Entry: 0x71b2b96c | Size: 1126 bytes
// =========================================================================

void FUN_71b2b96c(uint *param_1,uint *param_2,int param_3,uint param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint uStack_2c;
  undefined1 uStack_25;
  
  uStack_2c = param_4;
LAB_71b2b97e:
  do {
    puVar9 = param_1;
    uVar6 = (int)param_2 - (int)puVar9 >> 2;
    switch(uVar6) {
    case 0:
    case 1:
      goto switchD_71b2bc40_caseD_0;
    case 2:
      uVar6 = *puVar9;
      if (param_2[-1] < uVar6) {
        *puVar9 = param_2[-1];
        param_2[-1] = uVar6;
        return;
      }
      return;
    case 3:
      uVar6 = *puVar9;
      uVar5 = puVar9[1];
      uVar13 = param_2[-1];
      if (uVar6 <= uVar5) {
        if (uVar5 <= uVar13) {
          return;
        }
        puVar9[1] = uVar13;
        param_2[-1] = uVar5;
        uVar6 = *puVar9;
        if (puVar9[1] < uVar6) {
          *puVar9 = puVar9[1];
          puVar9[1] = uVar6;
          return;
        }
        return;
      }
      if (uVar13 < uVar5) {
        *puVar9 = uVar13;
        param_2[-1] = uVar6;
        return;
      }
      *puVar9 = uVar5;
      puVar9[1] = uVar6;
      if (param_2[-1] < uVar6) {
        puVar9[1] = param_2[-1];
        param_2[-1] = uVar6;
        return;
      }
      return;
    case 4:
      puVar4 = puVar9 + 2;
      uVar13 = *puVar4;
      uVar5 = *puVar9;
      puVar11 = puVar9 + 1;
      uVar6 = *puVar11;
      puVar2 = puVar9;
      if (uVar6 < uVar5) {
        puVar10 = puVar4;
        uVar12 = uVar5;
        if (uVar6 <= uVar13) {
          *puVar9 = uVar6;
          puVar9[1] = uVar5;
          uVar6 = uVar13;
          puVar2 = puVar11;
          goto joined_r0x71b2bd60;
        }
      }
      else {
        uVar7 = uVar13;
        if (uVar6 <= uVar13) goto LAB_71b2bd94;
        *puVar4 = uVar6;
        *puVar11 = uVar13;
        puVar10 = puVar11;
        uVar12 = uVar6;
joined_r0x71b2bd60:
        uVar7 = uVar6;
        if (uVar5 <= uVar13) goto LAB_71b2bd94;
      }
      *puVar10 = uVar5;
      *puVar2 = uVar13;
      uVar7 = uVar12;
LAB_71b2bd94:
      if (uVar7 <= param_2[-1]) {
        return;
      }
      *puVar4 = param_2[-1];
      param_2[-1] = uVar7;
      uVar5 = *puVar11;
      uVar6 = *puVar4;
      if (uVar6 < uVar5) {
        uVar13 = *puVar9;
        puVar9[1] = uVar6;
        puVar9[2] = uVar5;
        if (uVar6 < uVar13) {
          *puVar9 = uVar6;
          puVar9[1] = uVar13;
          return;
        }
        return;
      }
      return;
    case 5:
      FUN_71b3165e(puVar9,puVar9 + 1,puVar9 + 2,puVar9 + 3,param_2 + -1);
      goto switchD_71b2bc40_caseD_0;
    }
    if ((int)uVar6 < 0x18) {
      puVar4 = puVar9 + 1;
      if ((uStack_2c & 1) == 0) {
        if (puVar4 != param_2 && puVar9 != param_2) {
          do {
            puVar11 = puVar4;
            uVar5 = *puVar9;
            uVar6 = puVar9[1];
            puVar9 = puVar11;
            if (uVar6 < uVar5) {
              do {
                *puVar9 = uVar5;
                uVar5 = puVar9[-2];
                puVar9 = puVar9 + -1;
              } while (uVar6 < uVar5);
              *puVar9 = uVar6;
            }
            puVar4 = puVar11 + 1;
            puVar9 = puVar11;
          } while (puVar11 + 1 != param_2);
          return;
        }
        return;
      }
      if (puVar4 == param_2 || puVar9 == param_2) {
        return;
      }
      iVar1 = 4;
      puVar11 = puVar9;
      do {
        puVar2 = puVar4;
        uVar5 = *puVar11;
        uVar6 = puVar11[1];
        iVar3 = iVar1;
        if (uVar6 < uVar5) {
          do {
            *(uint *)((int)puVar9 + iVar3) = uVar5;
            puVar4 = puVar9;
            if (iVar3 == 4) goto LAB_71b2bcf0;
            iVar8 = iVar3 + -4;
            uVar5 = *(uint *)((int)puVar9 + iVar3 + -8);
            iVar3 = iVar8;
          } while (uVar6 < uVar5);
          puVar4 = (uint *)(iVar8 + (int)puVar9);
LAB_71b2bcf0:
          *puVar4 = uVar6;
        }
        puVar4 = puVar2 + 1;
        iVar1 = iVar1 + 4;
        puVar11 = puVar2;
        if (puVar4 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (puVar9 != param_2) {
        FUN_71b3173c(puVar9,param_2,param_2,&uStack_25);
        return;
      }
      return;
    }
    uVar5 = param_2[-1];
    puVar4 = puVar9 + (uVar6 >> 1);
    if (uVar6 < 0x81) {
      uVar6 = *puVar4;
      uVar13 = *puVar9;
      if (uVar13 < uVar6) {
        if (uVar5 < uVar13) {
          *puVar4 = uVar5;
        }
        else {
          *puVar4 = uVar13;
          *puVar9 = uVar6;
          if (uVar6 <= param_2[-1]) goto LAB_71b2bb0a;
          *puVar9 = param_2[-1];
        }
        param_2[-1] = uVar6;
      }
      else if (uVar5 < uVar13) {
        *puVar9 = uVar5;
        param_2[-1] = uVar13;
        uVar6 = *puVar4;
        if (*puVar9 < uVar6) {
          *puVar4 = *puVar9;
          *puVar9 = uVar6;
        }
      }
    }
    else {
      uVar6 = *puVar9;
      uVar13 = *puVar4;
      if (uVar13 < uVar6) {
        if (uVar5 < uVar13) {
          *puVar9 = uVar5;
        }
        else {
          *puVar9 = uVar13;
          *puVar4 = uVar6;
          if (uVar6 <= param_2[-1]) goto LAB_71b2ba20;
          *puVar4 = param_2[-1];
        }
        param_2[-1] = uVar6;
      }
      else if (uVar5 < uVar13) {
        *puVar4 = uVar5;
        param_2[-1] = uVar13;
        uVar6 = *puVar9;
        if (*puVar4 < uVar6) {
          *puVar9 = *puVar4;
          *puVar4 = uVar6;
        }
      }
LAB_71b2ba20:
      uVar13 = param_2[-2];
      uVar6 = puVar9[1];
      puVar11 = puVar4 + -1;
      uVar5 = *puVar11;
      if (uVar5 < uVar6) {
        if (uVar13 < uVar5) {
          puVar9[1] = uVar13;
        }
        else {
          puVar9[1] = uVar5;
          *puVar11 = uVar6;
          if (uVar6 <= param_2[-2]) goto LAB_71b2ba84;
          *puVar11 = param_2[-2];
        }
        param_2[-2] = uVar6;
      }
      else if (uVar13 < uVar5) {
        *puVar11 = uVar13;
        param_2[-2] = uVar5;
        uVar6 = puVar9[1];
        if (*puVar11 < uVar6) {
          puVar9[1] = *puVar11;
          *puVar11 = uVar6;
        }
      }
LAB_71b2ba84:
      uVar13 = param_2[-3];
      uVar6 = puVar9[2];
      puVar2 = puVar4 + 1;
      uVar5 = *puVar2;
      if (uVar5 < uVar6) {
        if (uVar13 < uVar5) {
          puVar9[2] = uVar13;
        }
        else {
          puVar9[2] = uVar5;
          *puVar2 = uVar6;
          if (uVar6 <= param_2[-3]) goto LAB_71b2bace;
          *puVar2 = param_2[-3];
        }
        param_2[-3] = uVar6;
      }
      else if (uVar13 < uVar5) {
        *puVar2 = uVar13;
        param_2[-3] = uVar5;
        uVar6 = puVar9[2];
        if (*puVar2 < uVar6) {
          puVar9[2] = *puVar2;
          *puVar2 = uVar6;
        }
      }
LAB_71b2bace:
      uVar13 = *puVar2;
      uVar5 = *puVar11;
      uVar6 = *puVar4;
      if (uVar6 < uVar5) {
        uVar7 = uVar6;
        if (uVar6 <= uVar13) {
          *puVar11 = uVar6;
          *puVar4 = uVar5;
          puVar11 = puVar4;
          uVar6 = uVar5;
          uVar7 = uVar13;
          if (uVar5 <= uVar13) goto LAB_71b2bb00;
        }
LAB_71b2bafc:
        *puVar2 = uVar5;
        *puVar11 = uVar13;
        uVar6 = uVar7;
      }
      else if (uVar13 < uVar6) {
        *puVar2 = uVar6;
        *puVar4 = uVar13;
        puVar2 = puVar4;
        uVar6 = uVar13;
        uVar7 = uVar5;
        if (uVar13 < uVar5) goto LAB_71b2bafc;
      }
LAB_71b2bb00:
      uVar5 = *puVar9;
      *puVar9 = uVar6;
      *puVar4 = uVar5;
    }
LAB_71b2bb0a:
    param_3 = param_3 + -1;
    uVar6 = *puVar9;
    param_1 = puVar9;
    if (((uStack_2c & 1) == 0) && (uVar6 <= puVar9[-1])) {
      if (uVar6 < param_2[-1]) {
        do {
          param_1 = param_1 + 1;
        } while (*param_1 <= uVar6);
      }
      else {
        do {
          param_1 = param_1 + 1;
          if (param_2 <= param_1) break;
        } while (*param_1 <= uVar6);
      }
      puVar4 = param_2;
      if (param_1 < param_2) {
        do {
          puVar4 = puVar4 + -1;
        } while (uVar6 < *puVar4);
      }
      if (param_1 < puVar4) {
        uVar13 = *puVar4;
        uVar5 = *param_1;
        do {
          *param_1 = uVar13;
          *puVar4 = uVar5;
          do {
            param_1 = param_1 + 1;
            uVar5 = *param_1;
          } while (uVar5 <= uVar6);
          do {
            puVar4 = puVar4 + -1;
            uVar13 = *puVar4;
          } while (uVar6 < uVar13);
        } while (param_1 < puVar4);
      }
      puVar4 = param_1 + -1;
      if (puVar4 != puVar9) {
        *puVar9 = *puVar4;
      }
      *puVar4 = uVar6;
LAB_71b2bc3a:
      uStack_2c = 0;
      goto LAB_71b2b97e;
    }
    iVar1 = 0;
    do {
      iVar3 = iVar1 + 4;
      uVar5 = *(uint *)((int)puVar9 + iVar1 + 4);
      iVar1 = iVar3;
    } while (uVar5 < uVar6);
    puVar11 = (uint *)((int)puVar9 + iVar3);
    puVar4 = param_2;
    if (iVar3 == 4) {
      do {
        if (puVar4 <= puVar11) break;
        puVar4 = puVar4 + -1;
      } while (uVar6 <= *puVar4);
    }
    else {
      do {
        puVar4 = puVar4 + -1;
      } while (uVar6 <= *puVar4);
    }
    param_1 = puVar11;
    if (puVar11 < puVar4) {
      uVar13 = *puVar4;
      puVar2 = puVar4;
      do {
        *param_1 = uVar13;
        *puVar2 = uVar5;
        do {
          param_1 = param_1 + 1;
          uVar5 = *param_1;
        } while (uVar5 < uVar6);
        do {
          puVar2 = puVar2 + -1;
          uVar13 = *puVar2;
        } while (uVar6 <= uVar13);
      } while (param_1 < puVar2);
    }
    puVar2 = param_1 + -1;
    if (puVar2 != puVar9) {
      *puVar9 = *puVar2;
    }
    *puVar2 = uVar6;
    if (puVar11 < puVar4) {
LAB_71b2bbae:
      FUN_71b2b96c(puVar9,puVar2,param_3,uStack_2c & 1);
      goto LAB_71b2bc3a;
    }
    iVar1 = FUN_71b3148c(puVar9,puVar2);
    iVar3 = FUN_71b3148c(param_1,param_2);
    if (iVar3 == 0) {
      if (iVar1 == 0) goto LAB_71b2bbae;
    }
    else {
      param_1 = puVar9;
      param_2 = puVar2;
      if (iVar1 != 0) {
switchD_71b2bc40_caseD_0:
        return;
      }
    }
  } while( true );
}


// =========================================================================
// Function: roSGzHPrpqovNXJJFfnWwdSANtGrGySaGZNyxuAtaGHQotgLI
// Entry: 0x71b2be7c | Size: 18 bytes
// =========================================================================

void roSGzHPrpqovNXJJFfnWwdSANtGrGySaGZNyxuAtaGHQotgLI(int param_1,int param_2)

{
  FUN_71b2bec4(param_1,param_2,LZCOUNT(param_2 - param_1) * -2 + 0x3e,1);
  return;
}


// =========================================================================
// Function: FUN_71b2bec4
// Entry: 0x71b2bec4 | Size: 1164 bytes
// =========================================================================

void FUN_71b2bec4(byte *param_1,byte *param_2,int param_3,uint param_4)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte bVar15;
  byte *pbVar16;
  undefined1 uStack_25;
  
LAB_71b2bed6:
  do {
    pbVar12 = param_1;
    uVar5 = (int)param_2 - (int)pbVar12;
    switch(uVar5) {
    case 0:
    case 1:
      goto switchD_71b2c1a2_caseD_0;
    case 2:
      bVar9 = *pbVar12;
      if ((char)bVar9 <= (char)param_2[-1]) {
        return;
      }
      *pbVar12 = param_2[-1];
      param_2[-1] = bVar9;
      return;
    case 3:
      bVar8 = param_2[-1];
      bVar9 = *pbVar12;
      bVar1 = pbVar12[1];
      if ((char)bVar1 < (char)bVar9) {
        if ((char)bVar8 < (char)bVar1) {
          *pbVar12 = bVar8;
          param_2[-1] = bVar9;
          return;
        }
        pbVar12[1] = bVar9;
        *pbVar12 = bVar1;
        if ((char)bVar9 <= (char)param_2[-1]) {
          return;
        }
        pbVar12[1] = param_2[-1];
        param_2[-1] = bVar9;
        return;
      }
      if ((char)bVar1 <= (char)bVar8) {
        return;
      }
      pbVar12[1] = bVar8;
      param_2[-1] = bVar1;
      bVar1 = *pbVar12;
      bVar9 = pbVar12[1];
      goto LAB_71b2c328;
    case 4:
      pbVar2 = pbVar12 + 2;
      bVar1 = *pbVar2;
      bVar9 = *pbVar12;
      pbVar16 = pbVar12 + 1;
      bVar8 = *pbVar16;
      pbVar13 = pbVar12;
      bVar7 = bVar1;
      if ((char)bVar8 < (char)bVar9) {
        pbVar14 = pbVar2;
        bVar15 = bVar9;
        if ((char)bVar8 <= (char)bVar1) {
          pbVar12[1] = bVar9;
          *pbVar12 = bVar8;
          pbVar13 = pbVar16;
          if ((char)bVar9 <= (char)bVar1) goto LAB_71b2c302;
        }
LAB_71b2c2cc:
        *pbVar14 = bVar9;
        *pbVar13 = bVar1;
        bVar7 = bVar15;
      }
      else if ((char)bVar1 < (char)bVar8) {
        *pbVar2 = bVar8;
        *pbVar16 = bVar1;
        pbVar14 = pbVar16;
        bVar7 = bVar8;
        bVar15 = bVar8;
        if ((char)bVar1 < (char)bVar9) goto LAB_71b2c2cc;
      }
LAB_71b2c302:
      if ((char)bVar7 <= (char)param_2[-1]) {
        return;
      }
      *pbVar2 = param_2[-1];
      param_2[-1] = bVar7;
      bVar9 = *pbVar2;
      if ((char)*pbVar16 <= (char)bVar9) {
        return;
      }
      pbVar12[2] = *pbVar16;
      bVar1 = *pbVar12;
      pbVar12[1] = bVar9;
LAB_71b2c328:
      if ((char)bVar1 <= (char)bVar9) {
        return;
      }
      pbVar12[1] = bVar1;
      *pbVar12 = bVar9;
      return;
    case 5:
      FUN_71b31b82(pbVar12,pbVar12 + 1,pbVar12 + 2,pbVar12 + 3,param_2 + -1);
      return;
    }
    if ((int)uVar5 < 0x18) {
      pbVar2 = pbVar12 + 1;
      if ((param_4 & 1) == 0) {
        if (pbVar2 == param_2 || pbVar12 == param_2) {
          return;
        }
        do {
          pbVar16 = pbVar2;
          bVar9 = *pbVar12;
          bVar1 = pbVar12[1];
          pbVar12 = pbVar16;
          if ((char)bVar1 < (char)bVar9) {
            do {
              pbVar2 = pbVar12 + -1;
              *pbVar12 = bVar9;
              bVar9 = pbVar12[-2];
              pbVar12 = pbVar2;
            } while ((char)bVar1 < (char)bVar9);
            *pbVar2 = bVar1;
          }
          pbVar2 = pbVar16 + 1;
          pbVar12 = pbVar16;
        } while (pbVar16 + 1 != param_2);
        return;
      }
      if (pbVar2 == param_2 || pbVar12 == param_2) {
        return;
      }
      iVar3 = 1;
      pbVar16 = pbVar12;
      do {
        bVar9 = *pbVar16;
        bVar1 = pbVar16[1];
        iVar4 = iVar3;
        if ((char)bVar1 < (char)bVar9) {
          do {
            pbVar12[iVar4] = bVar9;
            pbVar16 = pbVar12;
            if (iVar4 == 1) goto LAB_71b2c25a;
            iVar6 = iVar4 + -1;
            bVar9 = pbVar12[iVar4 + -2];
            iVar4 = iVar6;
          } while ((char)bVar1 < (char)bVar9);
          pbVar16 = pbVar12 + iVar6;
LAB_71b2c25a:
          *pbVar16 = bVar1;
        }
        pbVar13 = pbVar2 + 1;
        iVar3 = iVar3 + 1;
        pbVar16 = pbVar2;
        pbVar2 = pbVar13;
        if (pbVar13 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (pbVar12 == param_2) {
        return;
      }
      FUN_71b31c78(pbVar12,param_2,param_2,&uStack_25);
      return;
    }
    bVar9 = param_2[-1];
    pbVar2 = pbVar12 + (uVar5 >> 1);
    if (uVar5 < 0x81) {
      bVar1 = *pbVar2;
      bVar8 = *pbVar12;
      if ((char)bVar8 < (char)bVar1) {
        if ((char)bVar9 < (char)bVar8) {
          *pbVar2 = bVar9;
        }
        else {
          *pbVar2 = bVar8;
          *pbVar12 = bVar1;
          if ((char)bVar1 <= (char)param_2[-1]) goto LAB_71b2c074;
          *pbVar12 = param_2[-1];
        }
        param_2[-1] = bVar1;
      }
      else if ((char)bVar9 < (char)bVar8) {
        *pbVar12 = bVar9;
        param_2[-1] = bVar8;
        bVar9 = *pbVar2;
        if ((char)*pbVar12 < (char)bVar9) {
          *pbVar2 = *pbVar12;
          *pbVar12 = bVar9;
        }
      }
    }
    else {
      bVar1 = *pbVar12;
      bVar8 = *pbVar2;
      if ((char)bVar8 < (char)bVar1) {
        if ((char)bVar9 < (char)bVar8) {
          *pbVar12 = bVar9;
        }
        else {
          *pbVar12 = bVar8;
          *pbVar2 = bVar1;
          if ((char)bVar1 <= (char)param_2[-1]) goto LAB_71b2bf7a;
          *pbVar2 = param_2[-1];
        }
        param_2[-1] = bVar1;
      }
      else if ((char)bVar9 < (char)bVar8) {
        *pbVar2 = bVar9;
        param_2[-1] = bVar8;
        bVar9 = *pbVar12;
        if ((char)*pbVar2 < (char)bVar9) {
          *pbVar12 = *pbVar2;
          *pbVar2 = bVar9;
        }
      }
LAB_71b2bf7a:
      bVar1 = param_2[-2];
      bVar9 = pbVar12[1];
      pbVar16 = pbVar12 + ((uVar5 >> 1) - 1);
      bVar8 = *pbVar16;
      if ((char)bVar8 < (char)bVar9) {
        if ((char)bVar1 < (char)bVar8) {
          pbVar12[1] = bVar1;
        }
        else {
          pbVar12[1] = bVar8;
          *pbVar16 = bVar9;
          if ((char)bVar9 <= (char)param_2[-2]) goto LAB_71b2bfe6;
          *pbVar16 = param_2[-2];
        }
        param_2[-2] = bVar9;
      }
      else if ((char)bVar1 < (char)bVar8) {
        *pbVar16 = bVar1;
        param_2[-2] = bVar8;
        bVar9 = pbVar12[1];
        if ((char)*pbVar16 < (char)bVar9) {
          pbVar12[1] = *pbVar16;
          *pbVar16 = bVar9;
        }
      }
LAB_71b2bfe6:
      bVar1 = param_2[-3];
      bVar9 = pbVar12[2];
      pbVar13 = pbVar12 + (uVar5 >> 1) + 1;
      bVar8 = *pbVar13;
      if ((char)bVar8 < (char)bVar9) {
        if ((char)bVar1 < (char)bVar8) {
          pbVar12[2] = bVar1;
        }
        else {
          pbVar12[2] = bVar8;
          *pbVar13 = bVar9;
          if ((char)bVar9 <= (char)param_2[-3]) goto LAB_71b2c032;
          *pbVar13 = param_2[-3];
        }
        param_2[-3] = bVar9;
      }
      else if ((char)bVar1 < (char)bVar8) {
        *pbVar13 = bVar1;
        param_2[-3] = bVar8;
        bVar9 = pbVar12[2];
        if ((char)*pbVar13 < (char)bVar9) {
          pbVar12[2] = *pbVar13;
          *pbVar13 = bVar9;
        }
      }
LAB_71b2c032:
      bVar9 = *pbVar13;
      bVar1 = *pbVar16;
      bVar8 = *pbVar2;
      if ((char)bVar8 < (char)bVar1) {
        bVar7 = bVar8;
        if ((char)bVar8 <= (char)bVar9) {
          *pbVar16 = bVar8;
          *pbVar2 = bVar1;
          pbVar16 = pbVar2;
          bVar8 = bVar1;
          bVar7 = bVar9;
          if ((char)bVar1 <= (char)bVar9) goto LAB_71b2c06a;
        }
LAB_71b2c066:
        *pbVar13 = bVar1;
        *pbVar16 = bVar9;
        bVar8 = bVar7;
      }
      else if ((char)bVar9 < (char)bVar8) {
        *pbVar13 = bVar8;
        *pbVar2 = bVar9;
        pbVar13 = pbVar2;
        bVar8 = bVar9;
        bVar7 = bVar1;
        if ((char)bVar9 < (char)bVar1) goto LAB_71b2c066;
      }
LAB_71b2c06a:
      bVar9 = *pbVar12;
      *pbVar12 = bVar8;
      *pbVar2 = bVar9;
    }
LAB_71b2c074:
    bVar9 = *pbVar12;
    iVar3 = (int)(char)bVar9;
    param_3 = param_3 + -1;
    param_1 = pbVar12;
    if (((param_4 & 1) == 0) && (iVar3 <= (char)pbVar12[-1])) {
      if (iVar3 < (char)param_2[-1]) {
        do {
          param_1 = param_1 + 1;
        } while ((char)*param_1 <= iVar3);
      }
      else {
        do {
          param_1 = param_1 + 1;
          if (param_2 <= param_1) break;
        } while ((char)*param_1 <= iVar3);
      }
      pbVar2 = param_2;
      if (param_1 < param_2) {
        do {
          pbVar2 = pbVar2 + -1;
        } while (iVar3 < (char)*pbVar2);
      }
      if (param_1 < pbVar2) {
        uVar11 = (uint)*pbVar2;
        uVar5 = (uint)*param_1;
        do {
          *param_1 = (byte)uVar11;
          *pbVar2 = (byte)uVar5;
          do {
            param_1 = param_1 + 1;
            uVar5 = (uint)(char)*param_1;
          } while ((int)uVar5 <= iVar3);
          do {
            pbVar2 = pbVar2 + -1;
            uVar11 = (uint)(char)*pbVar2;
          } while (iVar3 < (int)uVar11);
        } while (param_1 < pbVar2);
      }
      pbVar2 = param_1 + -1;
      param_4 = 0;
      if (pbVar2 != pbVar12) {
        *pbVar12 = *pbVar2;
      }
      *pbVar2 = bVar9;
      goto LAB_71b2bed6;
    }
    iVar4 = 0;
    do {
      iVar6 = iVar4 + 1;
      iVar10 = (int)(char)pbVar12[iVar4 + 1];
      iVar4 = iVar6;
    } while (iVar10 < iVar3);
    pbVar16 = pbVar12 + iVar6;
    pbVar2 = param_2;
    if (iVar6 == 1) {
      do {
        if (pbVar2 <= pbVar16) break;
        pbVar2 = pbVar2 + -1;
      } while (iVar3 <= (char)*pbVar2);
    }
    else {
      do {
        pbVar2 = pbVar2 + -1;
      } while (iVar3 <= (char)*pbVar2);
    }
    param_1 = pbVar16;
    if (pbVar16 < pbVar2) {
      uVar5 = (uint)*pbVar2;
      pbVar13 = pbVar2;
      do {
        *param_1 = (byte)uVar5;
        *pbVar13 = (byte)iVar10;
        do {
          param_1 = param_1 + 1;
          iVar10 = (int)(char)*param_1;
        } while (iVar10 < iVar3);
        do {
          pbVar13 = pbVar13 + -1;
          uVar5 = (uint)(char)*pbVar13;
        } while (iVar3 <= (int)uVar5);
      } while (param_1 < pbVar13);
    }
    pbVar13 = param_1 + -1;
    if (pbVar13 != pbVar12) {
      *pbVar12 = *pbVar13;
    }
    *pbVar13 = bVar9;
    if (pbVar16 < pbVar2) {
LAB_71b2c110:
      FUN_71b2bec4(pbVar12,pbVar13,param_3,param_4 & 1);
      param_4 = 0;
    }
    else {
      iVar3 = FUN_71b3199c(pbVar12,pbVar13);
      iVar4 = FUN_71b3199c(param_1,param_2);
      if (iVar4 == 0) {
        if (iVar3 == 0) goto LAB_71b2c110;
      }
      else {
        param_1 = pbVar12;
        param_2 = pbVar13;
        if (iVar3 != 0) {
switchD_71b2c1a2_caseD_0:
          return;
        }
      }
    }
  } while( true );
}


// =========================================================================
// Function: rtEFcx_lhNXsSQZpCGNGHmXjdUYswbDIofStjfsPIjbujRfBa
// Entry: 0x71b2c3fa | Size: 18 bytes
// =========================================================================

void rtEFcx_lhNXsSQZpCGNGHmXjdUYswbDIofStjfsPIjbujRfBa(int param_1,int param_2)

{
  FUN_71b2c440(param_1,param_2,LZCOUNT(param_2 - param_1) * -2 + 0x3e,1);
  return;
}


// =========================================================================
// Function: FUN_71b2c440
// Entry: 0x71b2c440 | Size: 1136 bytes
// =========================================================================

void FUN_71b2c440(byte *param_1,byte *param_2,int param_3,uint param_4)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte bVar13;
  byte *pbVar14;
  undefined1 uStack_25;
  
LAB_71b2c452:
  do {
    pbVar10 = param_1;
    uVar4 = (int)param_2 - (int)pbVar10;
    switch(uVar4) {
    case 0:
    case 1:
      goto switchD_71b2c70a_caseD_0;
    case 2:
      bVar9 = *pbVar10;
      if (bVar9 <= param_2[-1]) {
        return;
      }
      *pbVar10 = param_2[-1];
      param_2[-1] = bVar9;
      return;
    case 3:
      bVar9 = *pbVar10;
      bVar8 = pbVar10[1];
      bVar7 = param_2[-1];
      if (bVar8 < bVar9) {
        if (bVar7 < bVar8) {
          *pbVar10 = bVar7;
          param_2[-1] = bVar9;
          return;
        }
        pbVar10[1] = bVar9;
        *pbVar10 = bVar8;
        if (bVar9 <= param_2[-1]) {
          return;
        }
        pbVar10[1] = param_2[-1];
        param_2[-1] = bVar9;
        return;
      }
      if (bVar8 <= bVar7) {
        return;
      }
      pbVar10[1] = bVar7;
      param_2[-1] = bVar8;
      bVar8 = *pbVar10;
      bVar9 = pbVar10[1];
      goto LAB_71b2c888;
    case 4:
      pbVar1 = pbVar10 + 2;
      bVar8 = *pbVar1;
      bVar9 = *pbVar10;
      pbVar14 = pbVar10 + 1;
      bVar7 = *pbVar14;
      pbVar11 = pbVar10;
      bVar6 = bVar8;
      if (bVar7 < bVar9) {
        pbVar12 = pbVar1;
        bVar13 = bVar9;
        if (bVar7 <= bVar8) {
          pbVar10[1] = bVar9;
          *pbVar10 = bVar7;
          pbVar11 = pbVar14;
          if (bVar9 <= bVar8) goto LAB_71b2c866;
        }
LAB_71b2c830:
        *pbVar12 = bVar9;
        *pbVar11 = bVar8;
        bVar6 = bVar13;
      }
      else if (bVar8 < bVar7) {
        *pbVar1 = bVar7;
        *pbVar14 = bVar8;
        pbVar12 = pbVar14;
        bVar6 = bVar7;
        bVar13 = bVar7;
        if (bVar8 < bVar9) goto LAB_71b2c830;
      }
LAB_71b2c866:
      if (bVar6 <= param_2[-1]) {
        return;
      }
      *pbVar1 = param_2[-1];
      param_2[-1] = bVar6;
      bVar9 = *pbVar1;
      if (*pbVar14 <= bVar9) {
        return;
      }
      pbVar10[2] = *pbVar14;
      bVar8 = *pbVar10;
      pbVar10[1] = bVar9;
LAB_71b2c888:
      if (bVar8 <= bVar9) {
        return;
      }
      pbVar10[1] = bVar8;
      *pbVar10 = bVar9;
      return;
    case 5:
      FUN_71b3209a(pbVar10,pbVar10 + 1,pbVar10 + 2,pbVar10 + 3,param_2 + -1);
      return;
    }
    if ((int)uVar4 < 0x18) {
      pbVar1 = pbVar10 + 1;
      if ((param_4 & 1) == 0) {
        if (pbVar1 == param_2 || pbVar10 == param_2) {
          return;
        }
        do {
          pbVar14 = pbVar1;
          bVar9 = *pbVar10;
          bVar8 = pbVar10[1];
          pbVar10 = pbVar14;
          if (bVar8 < bVar9) {
            do {
              pbVar1 = pbVar10 + -1;
              *pbVar10 = bVar9;
              bVar9 = pbVar10[-2];
              pbVar10 = pbVar1;
            } while (bVar8 < bVar9);
            *pbVar1 = bVar8;
          }
          pbVar1 = pbVar14 + 1;
          pbVar10 = pbVar14;
        } while (pbVar14 + 1 != param_2);
        return;
      }
      if (pbVar1 == param_2 || pbVar10 == param_2) {
        return;
      }
      iVar2 = 1;
      pbVar14 = pbVar10;
      do {
        bVar9 = *pbVar14;
        bVar8 = pbVar14[1];
        iVar5 = iVar2;
        if (bVar8 < bVar9) {
          do {
            pbVar10[iVar5] = bVar9;
            pbVar14 = pbVar10;
            if (iVar5 == 1) goto LAB_71b2c7c2;
            iVar3 = iVar5 + -1;
            bVar9 = pbVar10[iVar5 + -2];
            iVar5 = iVar3;
          } while (bVar8 < bVar9);
          pbVar14 = pbVar10 + iVar3;
LAB_71b2c7c2:
          *pbVar14 = bVar8;
        }
        pbVar11 = pbVar1 + 1;
        iVar2 = iVar2 + 1;
        pbVar14 = pbVar1;
        pbVar1 = pbVar11;
        if (pbVar11 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (pbVar10 == param_2) {
        return;
      }
      FUN_71b32178(pbVar10,param_2,param_2,&uStack_25);
      return;
    }
    bVar9 = param_2[-1];
    pbVar1 = pbVar10 + (uVar4 >> 1);
    if (uVar4 < 0x81) {
      bVar8 = *pbVar1;
      bVar7 = *pbVar10;
      if (bVar7 < bVar8) {
        if (bVar9 < bVar7) {
          *pbVar1 = bVar9;
        }
        else {
          *pbVar1 = bVar7;
          *pbVar10 = bVar8;
          if (bVar8 <= param_2[-1]) goto LAB_71b2c5de;
          *pbVar10 = param_2[-1];
        }
        param_2[-1] = bVar8;
      }
      else if (bVar9 < bVar7) {
        *pbVar10 = bVar9;
        param_2[-1] = bVar7;
        bVar9 = *pbVar1;
        if (*pbVar10 < bVar9) {
          *pbVar1 = *pbVar10;
          *pbVar10 = bVar9;
        }
      }
    }
    else {
      bVar7 = *pbVar10;
      bVar8 = *pbVar1;
      if (bVar8 < bVar7) {
        if (bVar9 < bVar8) {
          *pbVar10 = bVar9;
        }
        else {
          *pbVar10 = bVar8;
          *pbVar1 = bVar7;
          if (bVar7 <= param_2[-1]) goto LAB_71b2c4ee;
          *pbVar1 = param_2[-1];
        }
        param_2[-1] = bVar7;
      }
      else if (bVar9 < bVar8) {
        *pbVar1 = bVar9;
        param_2[-1] = bVar8;
        bVar9 = *pbVar10;
        if (*pbVar1 < bVar9) {
          *pbVar10 = *pbVar1;
          *pbVar1 = bVar9;
        }
      }
LAB_71b2c4ee:
      bVar8 = param_2[-2];
      bVar9 = pbVar10[1];
      pbVar14 = pbVar10 + ((uVar4 >> 1) - 1);
      bVar7 = *pbVar14;
      if (bVar7 < bVar9) {
        if (bVar8 < bVar7) {
          pbVar10[1] = bVar8;
        }
        else {
          pbVar10[1] = bVar7;
          *pbVar14 = bVar9;
          if (bVar9 <= param_2[-2]) goto LAB_71b2c558;
          *pbVar14 = param_2[-2];
        }
        param_2[-2] = bVar9;
      }
      else if (bVar8 < bVar7) {
        *pbVar14 = bVar8;
        param_2[-2] = bVar7;
        bVar9 = pbVar10[1];
        if (*pbVar14 < bVar9) {
          pbVar10[1] = *pbVar14;
          *pbVar14 = bVar9;
        }
      }
LAB_71b2c558:
      bVar8 = param_2[-3];
      bVar9 = pbVar10[2];
      pbVar11 = pbVar10 + (uVar4 >> 1) + 1;
      bVar7 = *pbVar11;
      if (bVar7 < bVar9) {
        if (bVar8 < bVar7) {
          pbVar10[2] = bVar8;
        }
        else {
          pbVar10[2] = bVar7;
          *pbVar11 = bVar9;
          if (bVar9 <= param_2[-3]) goto LAB_71b2c5a2;
          *pbVar11 = param_2[-3];
        }
        param_2[-3] = bVar9;
      }
      else if (bVar8 < bVar7) {
        *pbVar11 = bVar8;
        param_2[-3] = bVar7;
        bVar9 = pbVar10[2];
        if (*pbVar11 < bVar9) {
          pbVar10[2] = *pbVar11;
          *pbVar11 = bVar9;
        }
      }
LAB_71b2c5a2:
      bVar9 = *pbVar11;
      bVar8 = *pbVar14;
      bVar7 = *pbVar1;
      if (bVar7 < bVar8) {
        bVar6 = bVar7;
        if (bVar7 <= bVar9) {
          *pbVar14 = bVar7;
          *pbVar1 = bVar8;
          pbVar14 = pbVar1;
          bVar7 = bVar8;
          bVar6 = bVar9;
          if (bVar8 <= bVar9) goto LAB_71b2c5d4;
        }
LAB_71b2c5d0:
        *pbVar11 = bVar8;
        *pbVar14 = bVar9;
        bVar7 = bVar6;
      }
      else if (bVar9 < bVar7) {
        *pbVar11 = bVar7;
        *pbVar1 = bVar9;
        pbVar11 = pbVar1;
        bVar7 = bVar9;
        bVar6 = bVar8;
        if (bVar9 < bVar8) goto LAB_71b2c5d0;
      }
LAB_71b2c5d4:
      bVar9 = *pbVar10;
      *pbVar10 = bVar7;
      *pbVar1 = bVar9;
    }
LAB_71b2c5de:
    bVar9 = *pbVar10;
    param_3 = param_3 + -1;
    param_1 = pbVar10;
    if (((param_4 & 1) == 0) && (bVar9 <= pbVar10[-1])) {
      if (bVar9 < param_2[-1]) {
        do {
          param_1 = param_1 + 1;
        } while (*param_1 <= bVar9);
      }
      else {
        do {
          param_1 = param_1 + 1;
          if (param_2 <= param_1) break;
        } while (*param_1 <= bVar9);
      }
      pbVar1 = param_2;
      if (param_1 < param_2) {
        do {
          pbVar1 = pbVar1 + -1;
        } while (bVar9 < *pbVar1);
      }
      if (param_1 < pbVar1) {
        bVar8 = *pbVar1;
        bVar7 = *param_1;
        do {
          *param_1 = bVar8;
          *pbVar1 = bVar7;
          do {
            param_1 = param_1 + 1;
            bVar7 = *param_1;
          } while (bVar7 <= bVar9);
          do {
            pbVar1 = pbVar1 + -1;
            bVar8 = *pbVar1;
          } while (bVar9 < bVar8);
        } while (param_1 < pbVar1);
      }
      pbVar1 = param_1 + -1;
      param_4 = 0;
      if (pbVar1 != pbVar10) {
        *pbVar10 = *pbVar1;
      }
      *pbVar1 = bVar9;
      goto LAB_71b2c452;
    }
    iVar2 = 0;
    do {
      iVar5 = iVar2 + 1;
      bVar8 = pbVar10[iVar2 + 1];
      iVar2 = iVar5;
    } while (bVar8 < bVar9);
    pbVar14 = pbVar10 + iVar5;
    pbVar1 = param_2;
    if (iVar5 == 1) {
      do {
        if (pbVar1 <= pbVar14) break;
        pbVar1 = pbVar1 + -1;
      } while (bVar9 <= *pbVar1);
    }
    else {
      do {
        pbVar1 = pbVar1 + -1;
      } while (bVar9 <= *pbVar1);
    }
    param_1 = pbVar14;
    if (pbVar14 < pbVar1) {
      bVar7 = *pbVar1;
      pbVar11 = pbVar1;
      do {
        *param_1 = bVar7;
        *pbVar11 = bVar8;
        do {
          param_1 = param_1 + 1;
          bVar8 = *param_1;
        } while (bVar8 < bVar9);
        do {
          pbVar11 = pbVar11 + -1;
          bVar7 = *pbVar11;
        } while (bVar9 <= bVar7);
      } while (param_1 < pbVar11);
    }
    pbVar11 = param_1 + -1;
    if (pbVar11 != pbVar10) {
      *pbVar10 = *pbVar11;
    }
    *pbVar11 = bVar9;
    if (pbVar14 < pbVar1) {
LAB_71b2c678:
      FUN_71b2c440(pbVar10,pbVar11,param_3,param_4 & 1);
      param_4 = 0;
    }
    else {
      iVar2 = FUN_71b31ec8(pbVar10,pbVar11);
      iVar5 = FUN_71b31ec8(param_1,param_2);
      if (iVar5 == 0) {
        if (iVar2 == 0) goto LAB_71b2c678;
      }
      else {
        param_1 = pbVar10;
        param_2 = pbVar11;
        if (iVar2 != 0) {
switchD_71b2c70a_caseD_0:
          return;
        }
      }
    }
  } while( true );
}


// =========================================================================
// Function: UXHlTjaRhzZZ_CrI_mXMOD_hgWwWGgbtmynEAmtswUmNQVfmQ
// Entry: 0x71b2c95a | Size: 20 bytes
// =========================================================================

void UXHlTjaRhzZZ_CrI_mXMOD_hgWwWGgbtmynEAmtswUmNQVfmQ(int param_1,int param_2)

{
  FUN_71b2c9a4(param_1,param_2,LZCOUNT(param_2 - param_1 >> 1) * -2 + 0x3e,1);
  return;
}


// =========================================================================
// Function: FUN_71b2c9a4
// Entry: 0x71b2c9a4 | Size: 1168 bytes
// =========================================================================

void FUN_71b2c9a4(ushort *param_1,ushort *param_2,int param_3,uint param_4)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  int iVar11;
  uint uVar12;
  ushort *puVar13;
  ushort *puVar14;
  ushort uVar15;
  ushort *puVar16;
  undefined1 uStack_25;
  
LAB_71b2c9b6:
  do {
    puVar13 = param_1;
    uVar5 = (int)param_2 - (int)puVar13 >> 1;
    switch(uVar5) {
    case 0:
    case 1:
      goto switchD_71b2cc86_caseD_0;
    case 2:
      uVar10 = *puVar13;
      if ((short)uVar10 <= (short)param_2[-1]) {
        return;
      }
      *puVar13 = param_2[-1];
      param_2[-1] = uVar10;
      return;
    case 3:
      uVar10 = *puVar13;
      uVar1 = puVar13[1];
      uVar9 = param_2[-1];
      if ((short)uVar1 < (short)uVar10) {
        if ((short)uVar9 < (short)uVar1) {
          *puVar13 = uVar9;
          param_2[-1] = uVar10;
          return;
        }
        puVar13[1] = uVar10;
        *puVar13 = uVar1;
        if ((short)uVar10 <= (short)param_2[-1]) {
          return;
        }
        puVar13[1] = param_2[-1];
        param_2[-1] = uVar10;
        return;
      }
      if ((short)uVar1 <= (short)uVar9) {
        return;
      }
      puVar13[1] = uVar9;
      param_2[-1] = uVar1;
      uVar1 = *puVar13;
      uVar10 = puVar13[1];
      goto LAB_71b2ce0c;
    case 4:
      puVar2 = puVar13 + 2;
      uVar1 = *puVar2;
      uVar10 = *puVar13;
      puVar16 = puVar13 + 1;
      uVar9 = *puVar16;
      puVar7 = puVar13;
      uVar8 = uVar1;
      if ((short)uVar9 < (short)uVar10) {
        puVar14 = puVar2;
        uVar15 = uVar10;
        if ((short)uVar9 <= (short)uVar1) {
          puVar13[1] = uVar10;
          *puVar13 = uVar9;
          puVar7 = puVar16;
          if ((short)uVar10 <= (short)uVar1) goto LAB_71b2cde6;
        }
LAB_71b2cdb0:
        *puVar14 = uVar10;
        *puVar7 = uVar1;
        uVar8 = uVar15;
      }
      else if ((short)uVar1 < (short)uVar9) {
        *puVar2 = uVar9;
        *puVar16 = uVar1;
        puVar14 = puVar16;
        uVar8 = uVar9;
        uVar15 = uVar9;
        if ((short)uVar1 < (short)uVar10) goto LAB_71b2cdb0;
      }
LAB_71b2cde6:
      if ((short)uVar8 <= (short)param_2[-1]) {
        return;
      }
      *puVar2 = param_2[-1];
      param_2[-1] = uVar8;
      uVar10 = *puVar2;
      if ((short)*puVar16 <= (short)uVar10) {
        return;
      }
      puVar13[2] = *puVar16;
      uVar1 = *puVar13;
      puVar13[1] = uVar10;
LAB_71b2ce0c:
      if ((short)uVar1 <= (short)uVar10) {
        return;
      }
      puVar13[1] = uVar1;
      *puVar13 = uVar10;
      return;
    case 5:
      FUN_71b325a8(puVar13,puVar13 + 1,puVar13 + 2,puVar13 + 3,param_2 + -1);
      return;
    }
    if ((int)uVar5 < 0x18) {
      puVar2 = puVar13 + 1;
      if ((param_4 & 1) == 0) {
        if (puVar2 == param_2 || puVar13 == param_2) {
          return;
        }
        do {
          puVar16 = puVar2;
          uVar10 = *puVar13;
          uVar1 = puVar13[1];
          puVar13 = puVar16;
          if ((short)uVar1 < (short)uVar10) {
            do {
              puVar2 = puVar13 + -1;
              *puVar13 = uVar10;
              uVar10 = puVar13[-2];
              puVar13 = puVar2;
            } while ((short)uVar1 < (short)uVar10);
            *puVar2 = uVar1;
          }
          puVar2 = puVar16 + 1;
          puVar13 = puVar16;
        } while (puVar16 + 1 != param_2);
        return;
      }
      if (puVar2 == param_2 || puVar13 == param_2) {
        return;
      }
      iVar3 = 2;
      puVar16 = puVar13;
      do {
        uVar10 = *puVar16;
        uVar1 = puVar16[1];
        iVar4 = iVar3;
        if ((short)uVar1 < (short)uVar10) {
          do {
            *(ushort *)((int)puVar13 + iVar4) = uVar10;
            puVar16 = puVar13;
            if (iVar4 == 2) goto LAB_71b2cd3e;
            iVar6 = iVar4 + -2;
            uVar10 = *(ushort *)((int)puVar13 + iVar4 + -4);
            iVar4 = iVar6;
          } while ((short)uVar1 < (short)uVar10);
          puVar16 = (ushort *)(iVar6 + (int)puVar13);
LAB_71b2cd3e:
          *puVar16 = uVar1;
        }
        puVar7 = puVar2 + 1;
        iVar3 = iVar3 + 2;
        puVar16 = puVar2;
        puVar2 = puVar7;
        if (puVar7 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (puVar13 == param_2) {
        return;
      }
      FUN_71b3269e(puVar13,param_2,param_2,&uStack_25);
      return;
    }
    uVar10 = param_2[-1];
    puVar2 = (ushort *)((uVar5 & 0xfffffffe) + (int)puVar13);
    if (uVar5 < 0x81) {
      uVar1 = *puVar2;
      uVar9 = *puVar13;
      if ((short)uVar9 < (short)uVar1) {
        if ((short)uVar10 < (short)uVar9) {
          *puVar2 = uVar10;
        }
        else {
          *puVar2 = uVar9;
          *puVar13 = uVar1;
          if ((short)uVar1 <= (short)param_2[-1]) goto LAB_71b2cb58;
          *puVar13 = param_2[-1];
        }
        param_2[-1] = uVar1;
      }
      else if ((short)uVar10 < (short)uVar9) {
        *puVar13 = uVar10;
        param_2[-1] = uVar9;
        uVar10 = *puVar2;
        if ((short)*puVar13 < (short)uVar10) {
          *puVar2 = *puVar13;
          *puVar13 = uVar10;
        }
      }
    }
    else {
      uVar1 = *puVar13;
      uVar9 = *puVar2;
      if ((short)uVar9 < (short)uVar1) {
        if ((short)uVar10 < (short)uVar9) {
          *puVar13 = uVar10;
        }
        else {
          *puVar13 = uVar9;
          *puVar2 = uVar1;
          if ((short)uVar1 <= (short)param_2[-1]) goto LAB_71b2ca5e;
          *puVar2 = param_2[-1];
        }
        param_2[-1] = uVar1;
      }
      else if ((short)uVar10 < (short)uVar9) {
        *puVar2 = uVar10;
        param_2[-1] = uVar9;
        uVar10 = *puVar13;
        if ((short)*puVar2 < (short)uVar10) {
          *puVar13 = *puVar2;
          *puVar2 = uVar10;
        }
      }
LAB_71b2ca5e:
      uVar1 = param_2[-2];
      uVar10 = puVar13[1];
      puVar16 = (ushort *)((int)puVar13 + ((uVar5 & 0xfffffffe) - 2));
      uVar9 = *puVar16;
      if ((short)uVar9 < (short)uVar10) {
        if ((short)uVar1 < (short)uVar9) {
          puVar13[1] = uVar1;
        }
        else {
          puVar13[1] = uVar9;
          *puVar16 = uVar10;
          if ((short)uVar10 <= (short)param_2[-2]) goto LAB_71b2caca;
          *puVar16 = param_2[-2];
        }
        param_2[-2] = uVar10;
      }
      else if ((short)uVar1 < (short)uVar9) {
        *puVar16 = uVar1;
        param_2[-2] = uVar9;
        uVar10 = puVar13[1];
        if ((short)*puVar16 < (short)uVar10) {
          puVar13[1] = *puVar16;
          *puVar16 = uVar10;
        }
      }
LAB_71b2caca:
      uVar1 = param_2[-3];
      uVar10 = puVar13[2];
      puVar7 = (ushort *)((int)puVar13 + (uVar5 & 0xfffffffe) + 2);
      uVar9 = *puVar7;
      if ((short)uVar9 < (short)uVar10) {
        if ((short)uVar1 < (short)uVar9) {
          puVar13[2] = uVar1;
        }
        else {
          puVar13[2] = uVar9;
          *puVar7 = uVar10;
          if ((short)uVar10 <= (short)param_2[-3]) goto LAB_71b2cb16;
          *puVar7 = param_2[-3];
        }
        param_2[-3] = uVar10;
      }
      else if ((short)uVar1 < (short)uVar9) {
        *puVar7 = uVar1;
        param_2[-3] = uVar9;
        uVar10 = puVar13[2];
        if ((short)*puVar7 < (short)uVar10) {
          puVar13[2] = *puVar7;
          *puVar7 = uVar10;
        }
      }
LAB_71b2cb16:
      uVar10 = *puVar7;
      uVar1 = *puVar16;
      uVar9 = *puVar2;
      if ((short)uVar9 < (short)uVar1) {
        uVar8 = uVar9;
        if ((short)uVar9 <= (short)uVar10) {
          *puVar16 = uVar9;
          *puVar2 = uVar1;
          puVar16 = puVar2;
          uVar9 = uVar1;
          uVar8 = uVar10;
          if ((short)uVar1 <= (short)uVar10) goto LAB_71b2cb4e;
        }
LAB_71b2cb4a:
        *puVar7 = uVar1;
        *puVar16 = uVar10;
        uVar9 = uVar8;
      }
      else if ((short)uVar10 < (short)uVar9) {
        *puVar7 = uVar9;
        *puVar2 = uVar10;
        puVar7 = puVar2;
        uVar9 = uVar10;
        uVar8 = uVar1;
        if ((short)uVar10 < (short)uVar1) goto LAB_71b2cb4a;
      }
LAB_71b2cb4e:
      uVar10 = *puVar13;
      *puVar13 = uVar9;
      *puVar2 = uVar10;
    }
LAB_71b2cb58:
    uVar10 = *puVar13;
    iVar3 = (int)(short)uVar10;
    param_3 = param_3 + -1;
    param_1 = puVar13;
    if (((param_4 & 1) == 0) && (iVar3 <= (short)puVar13[-1])) {
      if (iVar3 < (short)param_2[-1]) {
        do {
          param_1 = param_1 + 1;
        } while ((short)*param_1 <= iVar3);
      }
      else {
        do {
          param_1 = param_1 + 1;
          if (param_2 <= param_1) break;
        } while ((short)*param_1 <= iVar3);
      }
      puVar2 = param_2;
      if (param_1 < param_2) {
        do {
          puVar2 = puVar2 + -1;
        } while (iVar3 < (short)*puVar2);
      }
      if (param_1 < puVar2) {
        uVar12 = (uint)*puVar2;
        uVar5 = (uint)*param_1;
        do {
          *param_1 = (ushort)uVar12;
          *puVar2 = (ushort)uVar5;
          do {
            param_1 = param_1 + 1;
            uVar5 = (uint)(short)*param_1;
          } while ((int)uVar5 <= iVar3);
          do {
            puVar2 = puVar2 + -1;
            uVar12 = (uint)(short)*puVar2;
          } while (iVar3 < (int)uVar12);
        } while (param_1 < puVar2);
      }
      puVar2 = param_1 + -1;
      param_4 = 0;
      if (puVar2 != puVar13) {
        *puVar13 = *puVar2;
      }
      *puVar2 = uVar10;
      goto LAB_71b2c9b6;
    }
    iVar4 = 0;
    do {
      iVar6 = iVar4 + 2;
      iVar11 = (int)*(short *)((int)puVar13 + iVar4 + 2);
      iVar4 = iVar6;
    } while (iVar11 < iVar3);
    puVar16 = (ushort *)((int)puVar13 + iVar6);
    puVar2 = param_2;
    if (iVar6 == 2) {
      do {
        if (puVar2 <= puVar16) break;
        puVar2 = puVar2 + -1;
      } while (iVar3 <= (short)*puVar2);
    }
    else {
      do {
        puVar2 = puVar2 + -1;
      } while (iVar3 <= (short)*puVar2);
    }
    param_1 = puVar16;
    if (puVar16 < puVar2) {
      uVar5 = (uint)*puVar2;
      puVar7 = puVar2;
      do {
        *param_1 = (ushort)uVar5;
        *puVar7 = (ushort)iVar11;
        do {
          param_1 = param_1 + 1;
          iVar11 = (int)(short)*param_1;
        } while (iVar11 < iVar3);
        do {
          puVar7 = puVar7 + -1;
          uVar5 = (uint)(short)*puVar7;
        } while (iVar3 <= (int)uVar5);
      } while (param_1 < puVar7);
    }
    puVar7 = param_1 + -1;
    if (puVar7 != puVar13) {
      *puVar13 = *puVar7;
    }
    *puVar7 = uVar10;
    if (puVar16 < puVar2) {
LAB_71b2cbf4:
      FUN_71b2c9a4(puVar13,puVar7,param_3,param_4 & 1);
      param_4 = 0;
    }
    else {
      iVar3 = FUN_71b323c0(puVar13,puVar7);
      iVar4 = FUN_71b323c0(param_1,param_2);
      if (iVar4 == 0) {
        if (iVar3 == 0) goto LAB_71b2cbf4;
      }
      else {
        param_1 = puVar13;
        param_2 = puVar7;
        if (iVar3 != 0) {
switchD_71b2cc86_caseD_0:
          return;
        }
      }
    }
  } while( true );
}


// =========================================================================
// Function: Zbwd_SqDNKSmOuatOnEmzgUlNrDJnhJyDnNIazUqmsJSnThxu
// Entry: 0x71b2cede | Size: 20 bytes
// =========================================================================

void Zbwd_SqDNKSmOuatOnEmzgUlNrDJnhJyDnNIazUqmsJSnThxu(int param_1,int param_2)

{
  FUN_71b2cf28(param_1,param_2,LZCOUNT(param_2 - param_1 >> 1) * -2 + 0x3e,1);
  return;
}


// =========================================================================
// Function: FUN_71b2cf28
// Entry: 0x71b2cf28 | Size: 1140 bytes
// =========================================================================

void FUN_71b2cf28(ushort *param_1,ushort *param_2,int param_3,uint param_4)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort *puVar11;
  ushort *puVar12;
  ushort uVar13;
  ushort *puVar14;
  undefined1 uStack_25;
  
LAB_71b2cf3a:
  do {
    puVar11 = param_1;
    uVar4 = (int)param_2 - (int)puVar11 >> 1;
    switch(uVar4) {
    case 0:
    case 1:
      goto switchD_71b2d1f6_caseD_0;
    case 2:
      uVar10 = *puVar11;
      if (uVar10 <= param_2[-1]) {
        return;
      }
      *puVar11 = param_2[-1];
      param_2[-1] = uVar10;
      return;
    case 3:
      uVar8 = param_2[-1];
      uVar10 = *puVar11;
      uVar9 = puVar11[1];
      if (uVar9 < uVar10) {
        if (uVar8 < uVar9) {
          *puVar11 = uVar8;
          param_2[-1] = uVar10;
          return;
        }
        puVar11[1] = uVar10;
        *puVar11 = uVar9;
        if (uVar10 <= param_2[-1]) {
          return;
        }
        puVar11[1] = param_2[-1];
        param_2[-1] = uVar10;
        return;
      }
      if (uVar9 <= uVar8) {
        return;
      }
      puVar11[1] = uVar8;
      param_2[-1] = uVar9;
      uVar9 = *puVar11;
      uVar10 = puVar11[1];
      goto LAB_71b2d374;
    case 4:
      puVar1 = puVar11 + 2;
      uVar9 = *puVar1;
      uVar10 = *puVar11;
      puVar14 = puVar11 + 1;
      uVar8 = *puVar14;
      puVar6 = puVar11;
      uVar7 = uVar9;
      if (uVar8 < uVar10) {
        puVar12 = puVar1;
        uVar13 = uVar10;
        if (uVar8 <= uVar9) {
          puVar11[1] = uVar10;
          *puVar11 = uVar8;
          puVar6 = puVar14;
          if (uVar10 <= uVar9) goto LAB_71b2d352;
        }
LAB_71b2d31c:
        *puVar12 = uVar10;
        *puVar6 = uVar9;
        uVar7 = uVar13;
      }
      else if (uVar9 < uVar8) {
        *puVar1 = uVar8;
        *puVar14 = uVar9;
        puVar12 = puVar14;
        uVar7 = uVar8;
        uVar13 = uVar8;
        if (uVar9 < uVar10) goto LAB_71b2d31c;
      }
LAB_71b2d352:
      if (uVar7 <= param_2[-1]) {
        return;
      }
      *puVar1 = param_2[-1];
      param_2[-1] = uVar7;
      uVar10 = *puVar1;
      if (*puVar14 <= uVar10) {
        return;
      }
      puVar11[2] = *puVar14;
      uVar9 = *puVar11;
      puVar11[1] = uVar10;
LAB_71b2d374:
      if (uVar9 <= uVar10) {
        return;
      }
      puVar11[1] = uVar9;
      *puVar11 = uVar10;
      return;
    case 5:
      FUN_71b32ae0(puVar11,puVar11 + 1,puVar11 + 2,puVar11 + 3,param_2 + -1);
      return;
    }
    if ((int)uVar4 < 0x18) {
      puVar1 = puVar11 + 1;
      if ((param_4 & 1) == 0) {
        if (puVar1 == param_2 || puVar11 == param_2) {
          return;
        }
        do {
          puVar14 = puVar1;
          uVar10 = *puVar11;
          uVar9 = puVar11[1];
          puVar11 = puVar14;
          if (uVar9 < uVar10) {
            do {
              puVar1 = puVar11 + -1;
              *puVar11 = uVar10;
              uVar10 = puVar11[-2];
              puVar11 = puVar1;
            } while (uVar9 < uVar10);
            *puVar1 = uVar9;
          }
          puVar1 = puVar14 + 1;
          puVar11 = puVar14;
        } while (puVar14 + 1 != param_2);
        return;
      }
      if (puVar1 == param_2 || puVar11 == param_2) {
        return;
      }
      iVar2 = 2;
      puVar14 = puVar11;
      do {
        uVar10 = *puVar14;
        uVar9 = puVar14[1];
        iVar5 = iVar2;
        if (uVar9 < uVar10) {
          do {
            *(ushort *)((int)puVar11 + iVar5) = uVar10;
            puVar14 = puVar11;
            if (iVar5 == 2) goto LAB_71b2d2ae;
            iVar3 = iVar5 + -2;
            uVar10 = *(ushort *)((int)puVar11 + iVar5 + -4);
            iVar5 = iVar3;
          } while (uVar9 < uVar10);
          puVar14 = (ushort *)(iVar3 + (int)puVar11);
LAB_71b2d2ae:
          *puVar14 = uVar9;
        }
        puVar6 = puVar1 + 1;
        iVar2 = iVar2 + 2;
        puVar14 = puVar1;
        puVar1 = puVar6;
        if (puVar6 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (puVar11 == param_2) {
        return;
      }
      FUN_71b32bbe(puVar11,param_2,param_2,&uStack_25);
      return;
    }
    uVar10 = param_2[-1];
    puVar1 = (ushort *)((uVar4 & 0xfffffffe) + (int)puVar11);
    if (uVar4 < 0x81) {
      uVar9 = *puVar1;
      uVar8 = *puVar11;
      if (uVar8 < uVar9) {
        if (uVar10 < uVar8) {
          *puVar1 = uVar10;
        }
        else {
          *puVar1 = uVar8;
          *puVar11 = uVar9;
          if (uVar9 <= param_2[-1]) goto LAB_71b2d0ca;
          *puVar11 = param_2[-1];
        }
        param_2[-1] = uVar9;
      }
      else if (uVar10 < uVar8) {
        *puVar11 = uVar10;
        param_2[-1] = uVar8;
        uVar10 = *puVar1;
        if (*puVar11 < uVar10) {
          *puVar1 = *puVar11;
          *puVar11 = uVar10;
        }
      }
    }
    else {
      uVar8 = *puVar11;
      uVar9 = *puVar1;
      if (uVar9 < uVar8) {
        if (uVar10 < uVar9) {
          *puVar11 = uVar10;
        }
        else {
          *puVar11 = uVar9;
          *puVar1 = uVar8;
          if (uVar8 <= param_2[-1]) goto LAB_71b2cfda;
          *puVar1 = param_2[-1];
        }
        param_2[-1] = uVar8;
      }
      else if (uVar10 < uVar9) {
        *puVar1 = uVar10;
        param_2[-1] = uVar9;
        uVar10 = *puVar11;
        if (*puVar1 < uVar10) {
          *puVar11 = *puVar1;
          *puVar1 = uVar10;
        }
      }
LAB_71b2cfda:
      uVar9 = param_2[-2];
      uVar10 = puVar11[1];
      puVar14 = (ushort *)((int)puVar11 + ((uVar4 & 0xfffffffe) - 2));
      uVar8 = *puVar14;
      if (uVar8 < uVar10) {
        if (uVar9 < uVar8) {
          puVar11[1] = uVar9;
        }
        else {
          puVar11[1] = uVar8;
          *puVar14 = uVar10;
          if (uVar10 <= param_2[-2]) goto LAB_71b2d044;
          *puVar14 = param_2[-2];
        }
        param_2[-2] = uVar10;
      }
      else if (uVar9 < uVar8) {
        *puVar14 = uVar9;
        param_2[-2] = uVar8;
        uVar10 = puVar11[1];
        if (*puVar14 < uVar10) {
          puVar11[1] = *puVar14;
          *puVar14 = uVar10;
        }
      }
LAB_71b2d044:
      uVar9 = param_2[-3];
      uVar10 = puVar11[2];
      puVar6 = (ushort *)((int)puVar11 + (uVar4 & 0xfffffffe) + 2);
      uVar8 = *puVar6;
      if (uVar8 < uVar10) {
        if (uVar9 < uVar8) {
          puVar11[2] = uVar9;
        }
        else {
          puVar11[2] = uVar8;
          *puVar6 = uVar10;
          if (uVar10 <= param_2[-3]) goto LAB_71b2d08e;
          *puVar6 = param_2[-3];
        }
        param_2[-3] = uVar10;
      }
      else if (uVar9 < uVar8) {
        *puVar6 = uVar9;
        param_2[-3] = uVar8;
        uVar10 = puVar11[2];
        if (*puVar6 < uVar10) {
          puVar11[2] = *puVar6;
          *puVar6 = uVar10;
        }
      }
LAB_71b2d08e:
      uVar10 = *puVar6;
      uVar9 = *puVar14;
      uVar8 = *puVar1;
      if (uVar8 < uVar9) {
        uVar7 = uVar8;
        if (uVar8 <= uVar10) {
          *puVar14 = uVar8;
          *puVar1 = uVar9;
          puVar14 = puVar1;
          uVar8 = uVar9;
          uVar7 = uVar10;
          if (uVar9 <= uVar10) goto LAB_71b2d0c0;
        }
LAB_71b2d0bc:
        *puVar6 = uVar9;
        *puVar14 = uVar10;
        uVar8 = uVar7;
      }
      else if (uVar10 < uVar8) {
        *puVar6 = uVar8;
        *puVar1 = uVar10;
        puVar6 = puVar1;
        uVar8 = uVar10;
        uVar7 = uVar9;
        if (uVar10 < uVar9) goto LAB_71b2d0bc;
      }
LAB_71b2d0c0:
      uVar10 = *puVar11;
      *puVar11 = uVar8;
      *puVar1 = uVar10;
    }
LAB_71b2d0ca:
    uVar10 = *puVar11;
    param_3 = param_3 + -1;
    param_1 = puVar11;
    if (((param_4 & 1) == 0) && (uVar10 <= puVar11[-1])) {
      if (uVar10 < param_2[-1]) {
        do {
          param_1 = param_1 + 1;
        } while (*param_1 <= uVar10);
      }
      else {
        do {
          param_1 = param_1 + 1;
          if (param_2 <= param_1) break;
        } while (*param_1 <= uVar10);
      }
      puVar1 = param_2;
      if (param_1 < param_2) {
        do {
          puVar1 = puVar1 + -1;
        } while (uVar10 < *puVar1);
      }
      if (param_1 < puVar1) {
        uVar9 = *puVar1;
        uVar8 = *param_1;
        do {
          *param_1 = uVar9;
          *puVar1 = uVar8;
          do {
            param_1 = param_1 + 1;
            uVar8 = *param_1;
          } while (uVar8 <= uVar10);
          do {
            puVar1 = puVar1 + -1;
            uVar9 = *puVar1;
          } while (uVar10 < uVar9);
        } while (param_1 < puVar1);
      }
      puVar1 = param_1 + -1;
      param_4 = 0;
      if (puVar1 != puVar11) {
        *puVar11 = *puVar1;
      }
      *puVar1 = uVar10;
      goto LAB_71b2cf3a;
    }
    iVar2 = 0;
    do {
      iVar5 = iVar2 + 2;
      uVar9 = *(ushort *)((int)puVar11 + iVar2 + 2);
      iVar2 = iVar5;
    } while (uVar9 < uVar10);
    puVar14 = (ushort *)((int)puVar11 + iVar5);
    puVar1 = param_2;
    if (iVar5 == 2) {
      do {
        if (puVar1 <= puVar14) break;
        puVar1 = puVar1 + -1;
      } while (uVar10 <= *puVar1);
    }
    else {
      do {
        puVar1 = puVar1 + -1;
      } while (uVar10 <= *puVar1);
    }
    param_1 = puVar14;
    if (puVar14 < puVar1) {
      uVar8 = *puVar1;
      puVar6 = puVar1;
      do {
        *param_1 = uVar8;
        *puVar6 = uVar9;
        do {
          param_1 = param_1 + 1;
          uVar9 = *param_1;
        } while (uVar9 < uVar10);
        do {
          puVar6 = puVar6 + -1;
          uVar8 = *puVar6;
        } while (uVar10 <= uVar8);
      } while (param_1 < puVar6);
    }
    puVar6 = param_1 + -1;
    if (puVar6 != puVar11) {
      *puVar11 = *puVar6;
    }
    *puVar6 = uVar10;
    if (puVar14 < puVar1) {
LAB_71b2d164:
      FUN_71b2cf28(puVar11,puVar6,param_3,param_4 & 1);
      param_4 = 0;
    }
    else {
      iVar2 = FUN_71b3290c(puVar11,puVar6);
      iVar5 = FUN_71b3290c(param_1,param_2);
      if (iVar5 == 0) {
        if (iVar2 == 0) goto LAB_71b2d164;
      }
      else {
        param_1 = puVar11;
        param_2 = puVar6;
        if (iVar2 != 0) {
switchD_71b2d1f6_caseD_0:
          return;
        }
      }
    }
  } while( true );
}


// =========================================================================
// Function: NcOErIldZalvWReeFNocbjiTP_GEwdAAsEffxNJaLbswZB_HY
// Entry: 0x71b2d446 | Size: 20 bytes
// =========================================================================

void NcOErIldZalvWReeFNocbjiTP_GEwdAAsEffxNJaLbswZB_HY(int param_1,int param_2)

{
  FUN_71b2d490(param_1,param_2,LZCOUNT(param_2 - param_1 >> 2) * -2 + 0x3e,1);
  return;
}


// =========================================================================
// Function: FUN_71b2d490
// Entry: 0x71b2d490 | Size: 1126 bytes
// =========================================================================

void FUN_71b2d490(int *param_1,int *param_2,int param_3,uint param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  uint uStack_2c;
  undefined1 uStack_25;
  
  uStack_2c = param_4;
LAB_71b2d4a2:
  do {
    piVar8 = param_1;
    uVar4 = (int)param_2 - (int)piVar8 >> 2;
    switch(uVar4) {
    case 0:
    case 1:
      goto switchD_71b2d764_caseD_0;
    case 2:
      iVar3 = *piVar8;
      if (param_2[-1] < iVar3) {
        *piVar8 = param_2[-1];
        param_2[-1] = iVar3;
        return;
      }
      return;
    case 3:
      iVar3 = *piVar8;
      iVar5 = piVar8[1];
      iVar11 = param_2[-1];
      if (iVar3 <= iVar5) {
        if (iVar5 <= iVar11) {
          return;
        }
        piVar8[1] = iVar11;
        param_2[-1] = iVar5;
        iVar3 = *piVar8;
        if (piVar8[1] < iVar3) {
          *piVar8 = piVar8[1];
          piVar8[1] = iVar3;
          return;
        }
        return;
      }
      if (iVar11 < iVar5) {
        *piVar8 = iVar11;
        param_2[-1] = iVar3;
        return;
      }
      *piVar8 = iVar5;
      piVar8[1] = iVar3;
      if (param_2[-1] < iVar3) {
        piVar8[1] = param_2[-1];
        param_2[-1] = iVar3;
        return;
      }
      return;
    case 4:
      piVar2 = piVar8 + 2;
      iVar11 = *piVar2;
      iVar5 = *piVar8;
      piVar10 = piVar8 + 1;
      iVar3 = *piVar10;
      piVar1 = piVar8;
      if (iVar3 < iVar5) {
        piVar9 = piVar2;
        iVar7 = iVar5;
        if (iVar3 <= iVar11) {
          *piVar8 = iVar3;
          piVar8[1] = iVar5;
          iVar3 = iVar11;
          piVar1 = piVar10;
          goto joined_r0x71b2d884;
        }
      }
      else {
        iVar6 = iVar11;
        if (iVar3 <= iVar11) goto LAB_71b2d8b8;
        *piVar2 = iVar3;
        *piVar10 = iVar11;
        piVar9 = piVar10;
        iVar7 = iVar3;
joined_r0x71b2d884:
        iVar6 = iVar3;
        if (iVar5 <= iVar11) goto LAB_71b2d8b8;
      }
      *piVar9 = iVar5;
      *piVar1 = iVar11;
      iVar6 = iVar7;
LAB_71b2d8b8:
      if (iVar6 <= param_2[-1]) {
        return;
      }
      *piVar2 = param_2[-1];
      param_2[-1] = iVar6;
      iVar5 = *piVar10;
      iVar3 = *piVar2;
      if (iVar3 < iVar5) {
        iVar11 = *piVar8;
        piVar8[1] = iVar3;
        piVar8[2] = iVar5;
        if (iVar3 < iVar11) {
          *piVar8 = iVar3;
          piVar8[1] = iVar11;
          return;
        }
        return;
      }
      return;
    case 5:
      FUN_71b32ff2(piVar8,piVar8 + 1,piVar8 + 2,piVar8 + 3,param_2 + -1);
      goto switchD_71b2d764_caseD_0;
    }
    if ((int)uVar4 < 0x18) {
      piVar2 = piVar8 + 1;
      if ((uStack_2c & 1) == 0) {
        if (piVar2 != param_2 && piVar8 != param_2) {
          do {
            piVar10 = piVar2;
            iVar5 = *piVar8;
            iVar3 = piVar8[1];
            piVar8 = piVar10;
            if (iVar3 < iVar5) {
              do {
                *piVar8 = iVar5;
                iVar5 = piVar8[-2];
                piVar8 = piVar8 + -1;
              } while (iVar3 < iVar5);
              *piVar8 = iVar3;
            }
            piVar2 = piVar10 + 1;
            piVar8 = piVar10;
          } while (piVar10 + 1 != param_2);
          return;
        }
        return;
      }
      if (piVar2 == param_2 || piVar8 == param_2) {
        return;
      }
      iVar3 = 4;
      piVar10 = piVar8;
      do {
        piVar1 = piVar2;
        iVar6 = *piVar10;
        iVar11 = piVar10[1];
        iVar5 = iVar3;
        if (iVar11 < iVar6) {
          do {
            *(int *)((int)piVar8 + iVar5) = iVar6;
            piVar2 = piVar8;
            if (iVar5 == 4) goto LAB_71b2d814;
            iVar7 = iVar5 + -4;
            iVar6 = *(int *)((int)piVar8 + iVar5 + -8);
            iVar5 = iVar7;
          } while (iVar11 < iVar6);
          piVar2 = (int *)(iVar7 + (int)piVar8);
LAB_71b2d814:
          *piVar2 = iVar11;
        }
        piVar2 = piVar1 + 1;
        iVar3 = iVar3 + 4;
        piVar10 = piVar1;
        if (piVar2 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (piVar8 != param_2) {
        FUN_71b330d0(piVar8,param_2,param_2,&uStack_25);
        return;
      }
      return;
    }
    iVar3 = param_2[-1];
    piVar2 = piVar8 + (uVar4 >> 1);
    if (uVar4 < 0x81) {
      iVar5 = *piVar2;
      iVar11 = *piVar8;
      if (iVar11 < iVar5) {
        if (iVar3 < iVar11) {
          *piVar2 = iVar3;
        }
        else {
          *piVar2 = iVar11;
          *piVar8 = iVar5;
          if (iVar5 <= param_2[-1]) goto LAB_71b2d62e;
          *piVar8 = param_2[-1];
        }
        param_2[-1] = iVar5;
      }
      else if (iVar3 < iVar11) {
        *piVar8 = iVar3;
        param_2[-1] = iVar11;
        iVar3 = *piVar2;
        if (*piVar8 < iVar3) {
          *piVar2 = *piVar8;
          *piVar8 = iVar3;
        }
      }
    }
    else {
      iVar5 = *piVar8;
      iVar11 = *piVar2;
      if (iVar11 < iVar5) {
        if (iVar3 < iVar11) {
          *piVar8 = iVar3;
        }
        else {
          *piVar8 = iVar11;
          *piVar2 = iVar5;
          if (iVar5 <= param_2[-1]) goto LAB_71b2d544;
          *piVar2 = param_2[-1];
        }
        param_2[-1] = iVar5;
      }
      else if (iVar3 < iVar11) {
        *piVar2 = iVar3;
        param_2[-1] = iVar11;
        iVar3 = *piVar8;
        if (*piVar2 < iVar3) {
          *piVar8 = *piVar2;
          *piVar2 = iVar3;
        }
      }
LAB_71b2d544:
      iVar11 = param_2[-2];
      iVar3 = piVar8[1];
      piVar10 = piVar2 + -1;
      iVar5 = *piVar10;
      if (iVar5 < iVar3) {
        if (iVar11 < iVar5) {
          piVar8[1] = iVar11;
        }
        else {
          piVar8[1] = iVar5;
          *piVar10 = iVar3;
          if (iVar3 <= param_2[-2]) goto LAB_71b2d5a8;
          *piVar10 = param_2[-2];
        }
        param_2[-2] = iVar3;
      }
      else if (iVar11 < iVar5) {
        *piVar10 = iVar11;
        param_2[-2] = iVar5;
        iVar3 = piVar8[1];
        if (*piVar10 < iVar3) {
          piVar8[1] = *piVar10;
          *piVar10 = iVar3;
        }
      }
LAB_71b2d5a8:
      iVar11 = param_2[-3];
      iVar3 = piVar8[2];
      piVar1 = piVar2 + 1;
      iVar5 = *piVar1;
      if (iVar5 < iVar3) {
        if (iVar11 < iVar5) {
          piVar8[2] = iVar11;
        }
        else {
          piVar8[2] = iVar5;
          *piVar1 = iVar3;
          if (iVar3 <= param_2[-3]) goto LAB_71b2d5f2;
          *piVar1 = param_2[-3];
        }
        param_2[-3] = iVar3;
      }
      else if (iVar11 < iVar5) {
        *piVar1 = iVar11;
        param_2[-3] = iVar5;
        iVar3 = piVar8[2];
        if (*piVar1 < iVar3) {
          piVar8[2] = *piVar1;
          *piVar1 = iVar3;
        }
      }
LAB_71b2d5f2:
      iVar11 = *piVar1;
      iVar5 = *piVar10;
      iVar3 = *piVar2;
      if (iVar3 < iVar5) {
        iVar6 = iVar3;
        if (iVar3 <= iVar11) {
          *piVar10 = iVar3;
          *piVar2 = iVar5;
          piVar10 = piVar2;
          iVar3 = iVar5;
          iVar6 = iVar11;
          if (iVar5 <= iVar11) goto LAB_71b2d624;
        }
LAB_71b2d620:
        *piVar1 = iVar5;
        *piVar10 = iVar11;
        iVar3 = iVar6;
      }
      else if (iVar11 < iVar3) {
        *piVar1 = iVar3;
        *piVar2 = iVar11;
        piVar1 = piVar2;
        iVar3 = iVar11;
        iVar6 = iVar5;
        if (iVar11 < iVar5) goto LAB_71b2d620;
      }
LAB_71b2d624:
      iVar5 = *piVar8;
      *piVar8 = iVar3;
      *piVar2 = iVar5;
    }
LAB_71b2d62e:
    param_3 = param_3 + -1;
    iVar3 = *piVar8;
    param_1 = piVar8;
    if (((uStack_2c & 1) == 0) && (iVar3 <= piVar8[-1])) {
      if (iVar3 < param_2[-1]) {
        do {
          param_1 = param_1 + 1;
        } while (*param_1 <= iVar3);
      }
      else {
        do {
          param_1 = param_1 + 1;
          if (param_2 <= param_1) break;
        } while (*param_1 <= iVar3);
      }
      piVar2 = param_2;
      if (param_1 < param_2) {
        do {
          piVar2 = piVar2 + -1;
        } while (iVar3 < *piVar2);
      }
      if (param_1 < piVar2) {
        iVar11 = *piVar2;
        iVar5 = *param_1;
        do {
          *param_1 = iVar11;
          *piVar2 = iVar5;
          do {
            param_1 = param_1 + 1;
            iVar5 = *param_1;
          } while (iVar5 <= iVar3);
          do {
            piVar2 = piVar2 + -1;
            iVar11 = *piVar2;
          } while (iVar3 < iVar11);
        } while (param_1 < piVar2);
      }
      piVar2 = param_1 + -1;
      if (piVar2 != piVar8) {
        *piVar8 = *piVar2;
      }
      *piVar2 = iVar3;
LAB_71b2d75e:
      uStack_2c = 0;
      goto LAB_71b2d4a2;
    }
    iVar5 = 0;
    do {
      iVar11 = iVar5 + 4;
      iVar6 = *(int *)((int)piVar8 + iVar5 + 4);
      iVar5 = iVar11;
    } while (iVar6 < iVar3);
    piVar10 = (int *)((int)piVar8 + iVar11);
    piVar2 = param_2;
    if (iVar11 == 4) {
      do {
        if (piVar2 <= piVar10) break;
        piVar2 = piVar2 + -1;
      } while (iVar3 <= *piVar2);
    }
    else {
      do {
        piVar2 = piVar2 + -1;
      } while (iVar3 <= *piVar2);
    }
    param_1 = piVar10;
    if (piVar10 < piVar2) {
      iVar5 = *piVar2;
      piVar1 = piVar2;
      do {
        *param_1 = iVar5;
        *piVar1 = iVar6;
        do {
          param_1 = param_1 + 1;
          iVar6 = *param_1;
        } while (iVar6 < iVar3);
        do {
          piVar1 = piVar1 + -1;
          iVar5 = *piVar1;
        } while (iVar3 <= iVar5);
      } while (param_1 < piVar1);
    }
    piVar1 = param_1 + -1;
    if (piVar1 != piVar8) {
      *piVar8 = *piVar1;
    }
    *piVar1 = iVar3;
    if (piVar10 < piVar2) {
LAB_71b2d6d2:
      FUN_71b2d490(piVar8,piVar1,param_3,uStack_2c & 1);
      goto LAB_71b2d75e;
    }
    iVar3 = FUN_71b32e20(piVar8,piVar1);
    iVar5 = FUN_71b32e20(param_1,param_2);
    if (iVar5 == 0) {
      if (iVar3 == 0) goto LAB_71b2d6d2;
    }
    else {
      param_1 = piVar8;
      param_2 = piVar1;
      if (iVar3 != 0) {
switchD_71b2d764_caseD_0:
        return;
      }
    }
  } while( true );
}


// =========================================================================
// Function: lqJINrzFzIODAkmKK_OxBtJZZh_AHSnENxjcAvIBZReBmfSyZ
// Entry: 0x71b2d9a0 | Size: 20 bytes
// =========================================================================

void lqJINrzFzIODAkmKK_OxBtJZZh_AHSnENxjcAvIBZReBmfSyZ(int param_1,int param_2)

{
  FUN_71b2d9e8(param_1,param_2,LZCOUNT(param_2 - param_1 >> 2) * -2 + 0x3e,1);
  return;
}


// =========================================================================
// Function: FUN_71b2d9e8
// Entry: 0x71b2d9e8 | Size: 1126 bytes
// =========================================================================

void FUN_71b2d9e8(uint *param_1,uint *param_2,int param_3,uint param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint uStack_2c;
  undefined1 uStack_25;
  
  uStack_2c = param_4;
LAB_71b2d9fa:
  do {
    puVar9 = param_1;
    uVar6 = (int)param_2 - (int)puVar9 >> 2;
    switch(uVar6) {
    case 0:
    case 1:
      goto switchD_71b2dcbc_caseD_0;
    case 2:
      uVar6 = *puVar9;
      if (param_2[-1] < uVar6) {
        *puVar9 = param_2[-1];
        param_2[-1] = uVar6;
        return;
      }
      return;
    case 3:
      uVar6 = *puVar9;
      uVar5 = puVar9[1];
      uVar13 = param_2[-1];
      if (uVar6 <= uVar5) {
        if (uVar5 <= uVar13) {
          return;
        }
        puVar9[1] = uVar13;
        param_2[-1] = uVar5;
        uVar6 = *puVar9;
        if (puVar9[1] < uVar6) {
          *puVar9 = puVar9[1];
          puVar9[1] = uVar6;
          return;
        }
        return;
      }
      if (uVar13 < uVar5) {
        *puVar9 = uVar13;
        param_2[-1] = uVar6;
        return;
      }
      *puVar9 = uVar5;
      puVar9[1] = uVar6;
      if (param_2[-1] < uVar6) {
        puVar9[1] = param_2[-1];
        param_2[-1] = uVar6;
        return;
      }
      return;
    case 4:
      puVar4 = puVar9 + 2;
      uVar13 = *puVar4;
      uVar5 = *puVar9;
      puVar11 = puVar9 + 1;
      uVar6 = *puVar11;
      puVar2 = puVar9;
      if (uVar6 < uVar5) {
        puVar10 = puVar4;
        uVar12 = uVar5;
        if (uVar6 <= uVar13) {
          *puVar9 = uVar6;
          puVar9[1] = uVar5;
          uVar6 = uVar13;
          puVar2 = puVar11;
          goto joined_r0x71b2dddc;
        }
      }
      else {
        uVar7 = uVar13;
        if (uVar6 <= uVar13) goto LAB_71b2de10;
        *puVar4 = uVar6;
        *puVar11 = uVar13;
        puVar10 = puVar11;
        uVar12 = uVar6;
joined_r0x71b2dddc:
        uVar7 = uVar6;
        if (uVar5 <= uVar13) goto LAB_71b2de10;
      }
      *puVar10 = uVar5;
      *puVar2 = uVar13;
      uVar7 = uVar12;
LAB_71b2de10:
      if (uVar7 <= param_2[-1]) {
        return;
      }
      *puVar4 = param_2[-1];
      param_2[-1] = uVar7;
      uVar5 = *puVar11;
      uVar6 = *puVar4;
      if (uVar6 < uVar5) {
        uVar13 = *puVar9;
        puVar9[1] = uVar6;
        puVar9[2] = uVar5;
        if (uVar6 < uVar13) {
          *puVar9 = uVar6;
          puVar9[1] = uVar13;
          return;
        }
        return;
      }
      return;
    case 5:
      FUN_71b33502(puVar9,puVar9 + 1,puVar9 + 2,puVar9 + 3,param_2 + -1);
      goto switchD_71b2dcbc_caseD_0;
    }
    if ((int)uVar6 < 0x18) {
      puVar4 = puVar9 + 1;
      if ((uStack_2c & 1) == 0) {
        if (puVar4 != param_2 && puVar9 != param_2) {
          do {
            puVar11 = puVar4;
            uVar5 = *puVar9;
            uVar6 = puVar9[1];
            puVar9 = puVar11;
            if (uVar6 < uVar5) {
              do {
                *puVar9 = uVar5;
                uVar5 = puVar9[-2];
                puVar9 = puVar9 + -1;
              } while (uVar6 < uVar5);
              *puVar9 = uVar6;
            }
            puVar4 = puVar11 + 1;
            puVar9 = puVar11;
          } while (puVar11 + 1 != param_2);
          return;
        }
        return;
      }
      if (puVar4 == param_2 || puVar9 == param_2) {
        return;
      }
      iVar1 = 4;
      puVar11 = puVar9;
      do {
        puVar2 = puVar4;
        uVar5 = *puVar11;
        uVar6 = puVar11[1];
        iVar3 = iVar1;
        if (uVar6 < uVar5) {
          do {
            *(uint *)((int)puVar9 + iVar3) = uVar5;
            puVar4 = puVar9;
            if (iVar3 == 4) goto LAB_71b2dd6c;
            iVar8 = iVar3 + -4;
            uVar5 = *(uint *)((int)puVar9 + iVar3 + -8);
            iVar3 = iVar8;
          } while (uVar6 < uVar5);
          puVar4 = (uint *)(iVar8 + (int)puVar9);
LAB_71b2dd6c:
          *puVar4 = uVar6;
        }
        puVar4 = puVar2 + 1;
        iVar1 = iVar1 + 4;
        puVar11 = puVar2;
        if (puVar4 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (puVar9 != param_2) {
        FUN_71b335e0(puVar9,param_2,param_2,&uStack_25);
        return;
      }
      return;
    }
    uVar5 = param_2[-1];
    puVar4 = puVar9 + (uVar6 >> 1);
    if (uVar6 < 0x81) {
      uVar6 = *puVar4;
      uVar13 = *puVar9;
      if (uVar13 < uVar6) {
        if (uVar5 < uVar13) {
          *puVar4 = uVar5;
        }
        else {
          *puVar4 = uVar13;
          *puVar9 = uVar6;
          if (uVar6 <= param_2[-1]) goto LAB_71b2db86;
          *puVar9 = param_2[-1];
        }
        param_2[-1] = uVar6;
      }
      else if (uVar5 < uVar13) {
        *puVar9 = uVar5;
        param_2[-1] = uVar13;
        uVar6 = *puVar4;
        if (*puVar9 < uVar6) {
          *puVar4 = *puVar9;
          *puVar9 = uVar6;
        }
      }
    }
    else {
      uVar6 = *puVar9;
      uVar13 = *puVar4;
      if (uVar13 < uVar6) {
        if (uVar5 < uVar13) {
          *puVar9 = uVar5;
        }
        else {
          *puVar9 = uVar13;
          *puVar4 = uVar6;
          if (uVar6 <= param_2[-1]) goto LAB_71b2da9c;
          *puVar4 = param_2[-1];
        }
        param_2[-1] = uVar6;
      }
      else if (uVar5 < uVar13) {
        *puVar4 = uVar5;
        param_2[-1] = uVar13;
        uVar6 = *puVar9;
        if (*puVar4 < uVar6) {
          *puVar9 = *puVar4;
          *puVar4 = uVar6;
        }
      }
LAB_71b2da9c:
      uVar13 = param_2[-2];
      uVar6 = puVar9[1];
      puVar11 = puVar4 + -1;
      uVar5 = *puVar11;
      if (uVar5 < uVar6) {
        if (uVar13 < uVar5) {
          puVar9[1] = uVar13;
        }
        else {
          puVar9[1] = uVar5;
          *puVar11 = uVar6;
          if (uVar6 <= param_2[-2]) goto LAB_71b2db00;
          *puVar11 = param_2[-2];
        }
        param_2[-2] = uVar6;
      }
      else if (uVar13 < uVar5) {
        *puVar11 = uVar13;
        param_2[-2] = uVar5;
        uVar6 = puVar9[1];
        if (*puVar11 < uVar6) {
          puVar9[1] = *puVar11;
          *puVar11 = uVar6;
        }
      }
LAB_71b2db00:
      uVar13 = param_2[-3];
      uVar6 = puVar9[2];
      puVar2 = puVar4 + 1;
      uVar5 = *puVar2;
      if (uVar5 < uVar6) {
        if (uVar13 < uVar5) {
          puVar9[2] = uVar13;
        }
        else {
          puVar9[2] = uVar5;
          *puVar2 = uVar6;
          if (uVar6 <= param_2[-3]) goto LAB_71b2db4a;
          *puVar2 = param_2[-3];
        }
        param_2[-3] = uVar6;
      }
      else if (uVar13 < uVar5) {
        *puVar2 = uVar13;
        param_2[-3] = uVar5;
        uVar6 = puVar9[2];
        if (*puVar2 < uVar6) {
          puVar9[2] = *puVar2;
          *puVar2 = uVar6;
        }
      }
LAB_71b2db4a:
      uVar13 = *puVar2;
      uVar5 = *puVar11;
      uVar6 = *puVar4;
      if (uVar6 < uVar5) {
        uVar7 = uVar6;
        if (uVar6 <= uVar13) {
          *puVar11 = uVar6;
          *puVar4 = uVar5;
          puVar11 = puVar4;
          uVar6 = uVar5;
          uVar7 = uVar13;
          if (uVar5 <= uVar13) goto LAB_71b2db7c;
        }
LAB_71b2db78:
        *puVar2 = uVar5;
        *puVar11 = uVar13;
        uVar6 = uVar7;
      }
      else if (uVar13 < uVar6) {
        *puVar2 = uVar6;
        *puVar4 = uVar13;
        puVar2 = puVar4;
        uVar6 = uVar13;
        uVar7 = uVar5;
        if (uVar13 < uVar5) goto LAB_71b2db78;
      }
LAB_71b2db7c:
      uVar5 = *puVar9;
      *puVar9 = uVar6;
      *puVar4 = uVar5;
    }
LAB_71b2db86:
    param_3 = param_3 + -1;
    uVar6 = *puVar9;
    param_1 = puVar9;
    if (((uStack_2c & 1) == 0) && (uVar6 <= puVar9[-1])) {
      if (uVar6 < param_2[-1]) {
        do {
          param_1 = param_1 + 1;
        } while (*param_1 <= uVar6);
      }
      else {
        do {
          param_1 = param_1 + 1;
          if (param_2 <= param_1) break;
        } while (*param_1 <= uVar6);
      }
      puVar4 = param_2;
      if (param_1 < param_2) {
        do {
          puVar4 = puVar4 + -1;
        } while (uVar6 < *puVar4);
      }
      if (param_1 < puVar4) {
        uVar13 = *puVar4;
        uVar5 = *param_1;
        do {
          *param_1 = uVar13;
          *puVar4 = uVar5;
          do {
            param_1 = param_1 + 1;
            uVar5 = *param_1;
          } while (uVar5 <= uVar6);
          do {
            puVar4 = puVar4 + -1;
            uVar13 = *puVar4;
          } while (uVar6 < uVar13);
        } while (param_1 < puVar4);
      }
      puVar4 = param_1 + -1;
      if (puVar4 != puVar9) {
        *puVar9 = *puVar4;
      }
      *puVar4 = uVar6;
LAB_71b2dcb6:
      uStack_2c = 0;
      goto LAB_71b2d9fa;
    }
    iVar1 = 0;
    do {
      iVar3 = iVar1 + 4;
      uVar5 = *(uint *)((int)puVar9 + iVar1 + 4);
      iVar1 = iVar3;
    } while (uVar5 < uVar6);
    puVar11 = (uint *)((int)puVar9 + iVar3);
    puVar4 = param_2;
    if (iVar3 == 4) {
      do {
        if (puVar4 <= puVar11) break;
        puVar4 = puVar4 + -1;
      } while (uVar6 <= *puVar4);
    }
    else {
      do {
        puVar4 = puVar4 + -1;
      } while (uVar6 <= *puVar4);
    }
    param_1 = puVar11;
    if (puVar11 < puVar4) {
      uVar13 = *puVar4;
      puVar2 = puVar4;
      do {
        *param_1 = uVar13;
        *puVar2 = uVar5;
        do {
          param_1 = param_1 + 1;
          uVar5 = *param_1;
        } while (uVar5 < uVar6);
        do {
          puVar2 = puVar2 + -1;
          uVar13 = *puVar2;
        } while (uVar6 <= uVar13);
      } while (param_1 < puVar2);
    }
    puVar2 = param_1 + -1;
    if (puVar2 != puVar9) {
      *puVar9 = *puVar2;
    }
    *puVar2 = uVar6;
    if (puVar11 < puVar4) {
LAB_71b2dc2a:
      FUN_71b2d9e8(puVar9,puVar2,param_3,uStack_2c & 1);
      goto LAB_71b2dcb6;
    }
    iVar1 = FUN_71b33330(puVar9,puVar2);
    iVar3 = FUN_71b33330(param_1,param_2);
    if (iVar3 == 0) {
      if (iVar1 == 0) goto LAB_71b2dc2a;
    }
    else {
      param_1 = puVar9;
      param_2 = puVar2;
      if (iVar1 != 0) {
switchD_71b2dcbc_caseD_0:
        return;
      }
    }
  } while( true );
}


// =========================================================================
// Function: bRLVG_kZBrZhAUmXdaRgxQoCYvgfsERbe_FYyOtYKAYNYqGvw
// Entry: 0x71b2def8 | Size: 20 bytes
// =========================================================================

void bRLVG_kZBrZhAUmXdaRgxQoCYvgfsERbe_FYyOtYKAYNYqGvw(int param_1,int param_2)

{
  FUN_71b2df40(param_1,param_2,LZCOUNT(param_2 - param_1 >> 2) * -2 + 0x3e,1);
  return;
}


// =========================================================================
// Function: FUN_71b2df40
// Entry: 0x71b2df40 | Size: 1126 bytes
// =========================================================================

void FUN_71b2df40(int *param_1,int *param_2,int param_3,uint param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  uint uStack_2c;
  undefined1 uStack_25;
  
  uStack_2c = param_4;
LAB_71b2df52:
  do {
    piVar8 = param_1;
    uVar4 = (int)param_2 - (int)piVar8 >> 2;
    switch(uVar4) {
    case 0:
    case 1:
      goto switchD_71b2e214_caseD_0;
    case 2:
      iVar3 = *piVar8;
      if (param_2[-1] < iVar3) {
        *piVar8 = param_2[-1];
        param_2[-1] = iVar3;
        return;
      }
      return;
    case 3:
      iVar3 = *piVar8;
      iVar5 = piVar8[1];
      iVar11 = param_2[-1];
      if (iVar3 <= iVar5) {
        if (iVar5 <= iVar11) {
          return;
        }
        piVar8[1] = iVar11;
        param_2[-1] = iVar5;
        iVar3 = *piVar8;
        if (piVar8[1] < iVar3) {
          *piVar8 = piVar8[1];
          piVar8[1] = iVar3;
          return;
        }
        return;
      }
      if (iVar11 < iVar5) {
        *piVar8 = iVar11;
        param_2[-1] = iVar3;
        return;
      }
      *piVar8 = iVar5;
      piVar8[1] = iVar3;
      if (param_2[-1] < iVar3) {
        piVar8[1] = param_2[-1];
        param_2[-1] = iVar3;
        return;
      }
      return;
    case 4:
      piVar2 = piVar8 + 2;
      iVar11 = *piVar2;
      iVar5 = *piVar8;
      piVar10 = piVar8 + 1;
      iVar3 = *piVar10;
      piVar1 = piVar8;
      if (iVar3 < iVar5) {
        piVar9 = piVar2;
        iVar7 = iVar5;
        if (iVar3 <= iVar11) {
          *piVar8 = iVar3;
          piVar8[1] = iVar5;
          iVar3 = iVar11;
          piVar1 = piVar10;
          goto joined_r0x71b2e334;
        }
      }
      else {
        iVar6 = iVar11;
        if (iVar3 <= iVar11) goto LAB_71b2e368;
        *piVar2 = iVar3;
        *piVar10 = iVar11;
        piVar9 = piVar10;
        iVar7 = iVar3;
joined_r0x71b2e334:
        iVar6 = iVar3;
        if (iVar5 <= iVar11) goto LAB_71b2e368;
      }
      *piVar9 = iVar5;
      *piVar1 = iVar11;
      iVar6 = iVar7;
LAB_71b2e368:
      if (iVar6 <= param_2[-1]) {
        return;
      }
      *piVar2 = param_2[-1];
      param_2[-1] = iVar6;
      iVar5 = *piVar10;
      iVar3 = *piVar2;
      if (iVar3 < iVar5) {
        iVar11 = *piVar8;
        piVar8[1] = iVar3;
        piVar8[2] = iVar5;
        if (iVar3 < iVar11) {
          *piVar8 = iVar3;
          piVar8[1] = iVar11;
          return;
        }
        return;
      }
      return;
    case 5:
      FUN_71b33a12(piVar8,piVar8 + 1,piVar8 + 2,piVar8 + 3,param_2 + -1);
      goto switchD_71b2e214_caseD_0;
    }
    if ((int)uVar4 < 0x18) {
      piVar2 = piVar8 + 1;
      if ((uStack_2c & 1) == 0) {
        if (piVar2 != param_2 && piVar8 != param_2) {
          do {
            piVar10 = piVar2;
            iVar5 = *piVar8;
            iVar3 = piVar8[1];
            piVar8 = piVar10;
            if (iVar3 < iVar5) {
              do {
                *piVar8 = iVar5;
                iVar5 = piVar8[-2];
                piVar8 = piVar8 + -1;
              } while (iVar3 < iVar5);
              *piVar8 = iVar3;
            }
            piVar2 = piVar10 + 1;
            piVar8 = piVar10;
          } while (piVar10 + 1 != param_2);
          return;
        }
        return;
      }
      if (piVar2 == param_2 || piVar8 == param_2) {
        return;
      }
      iVar3 = 4;
      piVar10 = piVar8;
      do {
        piVar1 = piVar2;
        iVar6 = *piVar10;
        iVar11 = piVar10[1];
        iVar5 = iVar3;
        if (iVar11 < iVar6) {
          do {
            *(int *)((int)piVar8 + iVar5) = iVar6;
            piVar2 = piVar8;
            if (iVar5 == 4) goto LAB_71b2e2c4;
            iVar7 = iVar5 + -4;
            iVar6 = *(int *)((int)piVar8 + iVar5 + -8);
            iVar5 = iVar7;
          } while (iVar11 < iVar6);
          piVar2 = (int *)(iVar7 + (int)piVar8);
LAB_71b2e2c4:
          *piVar2 = iVar11;
        }
        piVar2 = piVar1 + 1;
        iVar3 = iVar3 + 4;
        piVar10 = piVar1;
        if (piVar2 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (piVar8 != param_2) {
        FUN_71b33af0(piVar8,param_2,param_2,&uStack_25);
        return;
      }
      return;
    }
    iVar3 = param_2[-1];
    piVar2 = piVar8 + (uVar4 >> 1);
    if (uVar4 < 0x81) {
      iVar5 = *piVar2;
      iVar11 = *piVar8;
      if (iVar11 < iVar5) {
        if (iVar3 < iVar11) {
          *piVar2 = iVar3;
        }
        else {
          *piVar2 = iVar11;
          *piVar8 = iVar5;
          if (iVar5 <= param_2[-1]) goto LAB_71b2e0de;
          *piVar8 = param_2[-1];
        }
        param_2[-1] = iVar5;
      }
      else if (iVar3 < iVar11) {
        *piVar8 = iVar3;
        param_2[-1] = iVar11;
        iVar3 = *piVar2;
        if (*piVar8 < iVar3) {
          *piVar2 = *piVar8;
          *piVar8 = iVar3;
        }
      }
    }
    else {
      iVar5 = *piVar8;
      iVar11 = *piVar2;
      if (iVar11 < iVar5) {
        if (iVar3 < iVar11) {
          *piVar8 = iVar3;
        }
        else {
          *piVar8 = iVar11;
          *piVar2 = iVar5;
          if (iVar5 <= param_2[-1]) goto LAB_71b2dff4;
          *piVar2 = param_2[-1];
        }
        param_2[-1] = iVar5;
      }
      else if (iVar3 < iVar11) {
        *piVar2 = iVar3;
        param_2[-1] = iVar11;
        iVar3 = *piVar8;
        if (*piVar2 < iVar3) {
          *piVar8 = *piVar2;
          *piVar2 = iVar3;
        }
      }
LAB_71b2dff4:
      iVar11 = param_2[-2];
      iVar3 = piVar8[1];
      piVar10 = piVar2 + -1;
      iVar5 = *piVar10;
      if (iVar5 < iVar3) {
        if (iVar11 < iVar5) {
          piVar8[1] = iVar11;
        }
        else {
          piVar8[1] = iVar5;
          *piVar10 = iVar3;
          if (iVar3 <= param_2[-2]) goto LAB_71b2e058;
          *piVar10 = param_2[-2];
        }
        param_2[-2] = iVar3;
      }
      else if (iVar11 < iVar5) {
        *piVar10 = iVar11;
        param_2[-2] = iVar5;
        iVar3 = piVar8[1];
        if (*piVar10 < iVar3) {
          piVar8[1] = *piVar10;
          *piVar10 = iVar3;
        }
      }
LAB_71b2e058:
      iVar11 = param_2[-3];
      iVar3 = piVar8[2];
      piVar1 = piVar2 + 1;
      iVar5 = *piVar1;
      if (iVar5 < iVar3) {
        if (iVar11 < iVar5) {
          piVar8[2] = iVar11;
        }
        else {
          piVar8[2] = iVar5;
          *piVar1 = iVar3;
          if (iVar3 <= param_2[-3]) goto LAB_71b2e0a2;
          *piVar1 = param_2[-3];
        }
        param_2[-3] = iVar3;
      }
      else if (iVar11 < iVar5) {
        *piVar1 = iVar11;
        param_2[-3] = iVar5;
        iVar3 = piVar8[2];
        if (*piVar1 < iVar3) {
          piVar8[2] = *piVar1;
          *piVar1 = iVar3;
        }
      }
LAB_71b2e0a2:
      iVar11 = *piVar1;
      iVar5 = *piVar10;
      iVar3 = *piVar2;
      if (iVar3 < iVar5) {
        iVar6 = iVar3;
        if (iVar3 <= iVar11) {
          *piVar10 = iVar3;
          *piVar2 = iVar5;
          piVar10 = piVar2;
          iVar3 = iVar5;
          iVar6 = iVar11;
          if (iVar5 <= iVar11) goto LAB_71b2e0d4;
        }
LAB_71b2e0d0:
        *piVar1 = iVar5;
        *piVar10 = iVar11;
        iVar3 = iVar6;
      }
      else if (iVar11 < iVar3) {
        *piVar1 = iVar3;
        *piVar2 = iVar11;
        piVar1 = piVar2;
        iVar3 = iVar11;
        iVar6 = iVar5;
        if (iVar11 < iVar5) goto LAB_71b2e0d0;
      }
LAB_71b2e0d4:
      iVar5 = *piVar8;
      *piVar8 = iVar3;
      *piVar2 = iVar5;
    }
LAB_71b2e0de:
    param_3 = param_3 + -1;
    iVar3 = *piVar8;
    param_1 = piVar8;
    if (((uStack_2c & 1) == 0) && (iVar3 <= piVar8[-1])) {
      if (iVar3 < param_2[-1]) {
        do {
          param_1 = param_1 + 1;
        } while (*param_1 <= iVar3);
      }
      else {
        do {
          param_1 = param_1 + 1;
          if (param_2 <= param_1) break;
        } while (*param_1 <= iVar3);
      }
      piVar2 = param_2;
      if (param_1 < param_2) {
        do {
          piVar2 = piVar2 + -1;
        } while (iVar3 < *piVar2);
      }
      if (param_1 < piVar2) {
        iVar11 = *piVar2;
        iVar5 = *param_1;
        do {
          *param_1 = iVar11;
          *piVar2 = iVar5;
          do {
            param_1 = param_1 + 1;
            iVar5 = *param_1;
          } while (iVar5 <= iVar3);
          do {
            piVar2 = piVar2 + -1;
            iVar11 = *piVar2;
          } while (iVar3 < iVar11);
        } while (param_1 < piVar2);
      }
      piVar2 = param_1 + -1;
      if (piVar2 != piVar8) {
        *piVar8 = *piVar2;
      }
      *piVar2 = iVar3;
LAB_71b2e20e:
      uStack_2c = 0;
      goto LAB_71b2df52;
    }
    iVar5 = 0;
    do {
      iVar11 = iVar5 + 4;
      iVar6 = *(int *)((int)piVar8 + iVar5 + 4);
      iVar5 = iVar11;
    } while (iVar6 < iVar3);
    piVar10 = (int *)((int)piVar8 + iVar11);
    piVar2 = param_2;
    if (iVar11 == 4) {
      do {
        if (piVar2 <= piVar10) break;
        piVar2 = piVar2 + -1;
      } while (iVar3 <= *piVar2);
    }
    else {
      do {
        piVar2 = piVar2 + -1;
      } while (iVar3 <= *piVar2);
    }
    param_1 = piVar10;
    if (piVar10 < piVar2) {
      iVar5 = *piVar2;
      piVar1 = piVar2;
      do {
        *param_1 = iVar5;
        *piVar1 = iVar6;
        do {
          param_1 = param_1 + 1;
          iVar6 = *param_1;
        } while (iVar6 < iVar3);
        do {
          piVar1 = piVar1 + -1;
          iVar5 = *piVar1;
        } while (iVar3 <= iVar5);
      } while (param_1 < piVar1);
    }
    piVar1 = param_1 + -1;
    if (piVar1 != piVar8) {
      *piVar8 = *piVar1;
    }
    *piVar1 = iVar3;
    if (piVar10 < piVar2) {
LAB_71b2e182:
      FUN_71b2df40(piVar8,piVar1,param_3,uStack_2c & 1);
      goto LAB_71b2e20e;
    }
    iVar3 = FUN_71b33840(piVar8,piVar1);
    iVar5 = FUN_71b33840(param_1,param_2);
    if (iVar5 == 0) {
      if (iVar3 == 0) goto LAB_71b2e182;
    }
    else {
      param_1 = piVar8;
      param_2 = piVar1;
      if (iVar3 != 0) {
switchD_71b2e214_caseD_0:
        return;
      }
    }
  } while( true );
}


// =========================================================================
// Function: JYjVfXSFgfuSFeIsastfWXKQdlAzNGTuVyduKktbgIhOsqXg_
// Entry: 0x71b2e450 | Size: 20 bytes
// =========================================================================

void JYjVfXSFgfuSFeIsastfWXKQdlAzNGTuVyduKktbgIhOsqXg_(int param_1,int param_2)

{
  FUN_71b2e498(param_1,param_2,LZCOUNT(param_2 - param_1 >> 2) * -2 + 0x3e,1);
  return;
}


// =========================================================================
// Function: FUN_71b2e498
// Entry: 0x71b2e498 | Size: 1126 bytes
// =========================================================================

void FUN_71b2e498(uint *param_1,uint *param_2,int param_3,uint param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint uStack_2c;
  undefined1 uStack_25;
  
  uStack_2c = param_4;
LAB_71b2e4aa:
  do {
    puVar9 = param_1;
    uVar6 = (int)param_2 - (int)puVar9 >> 2;
    switch(uVar6) {
    case 0:
    case 1:
      goto switchD_71b2e76c_caseD_0;
    case 2:
      uVar6 = *puVar9;
      if (param_2[-1] < uVar6) {
        *puVar9 = param_2[-1];
        param_2[-1] = uVar6;
        return;
      }
      return;
    case 3:
      uVar6 = *puVar9;
      uVar5 = puVar9[1];
      uVar13 = param_2[-1];
      if (uVar6 <= uVar5) {
        if (uVar5 <= uVar13) {
          return;
        }
        puVar9[1] = uVar13;
        param_2[-1] = uVar5;
        uVar6 = *puVar9;
        if (puVar9[1] < uVar6) {
          *puVar9 = puVar9[1];
          puVar9[1] = uVar6;
          return;
        }
        return;
      }
      if (uVar13 < uVar5) {
        *puVar9 = uVar13;
        param_2[-1] = uVar6;
        return;
      }
      *puVar9 = uVar5;
      puVar9[1] = uVar6;
      if (param_2[-1] < uVar6) {
        puVar9[1] = param_2[-1];
        param_2[-1] = uVar6;
        return;
      }
      return;
    case 4:
      puVar4 = puVar9 + 2;
      uVar13 = *puVar4;
      uVar5 = *puVar9;
      puVar11 = puVar9 + 1;
      uVar6 = *puVar11;
      puVar2 = puVar9;
      if (uVar6 < uVar5) {
        puVar10 = puVar4;
        uVar12 = uVar5;
        if (uVar6 <= uVar13) {
          *puVar9 = uVar6;
          puVar9[1] = uVar5;
          uVar6 = uVar13;
          puVar2 = puVar11;
          goto joined_r0x71b2e88c;
        }
      }
      else {
        uVar7 = uVar13;
        if (uVar6 <= uVar13) goto LAB_71b2e8c0;
        *puVar4 = uVar6;
        *puVar11 = uVar13;
        puVar10 = puVar11;
        uVar12 = uVar6;
joined_r0x71b2e88c:
        uVar7 = uVar6;
        if (uVar5 <= uVar13) goto LAB_71b2e8c0;
      }
      *puVar10 = uVar5;
      *puVar2 = uVar13;
      uVar7 = uVar12;
LAB_71b2e8c0:
      if (uVar7 <= param_2[-1]) {
        return;
      }
      *puVar4 = param_2[-1];
      param_2[-1] = uVar7;
      uVar5 = *puVar11;
      uVar6 = *puVar4;
      if (uVar6 < uVar5) {
        uVar13 = *puVar9;
        puVar9[1] = uVar6;
        puVar9[2] = uVar5;
        if (uVar6 < uVar13) {
          *puVar9 = uVar6;
          puVar9[1] = uVar13;
          return;
        }
        return;
      }
      return;
    case 5:
      FUN_71b33f22(puVar9,puVar9 + 1,puVar9 + 2,puVar9 + 3,param_2 + -1);
      goto switchD_71b2e76c_caseD_0;
    }
    if ((int)uVar6 < 0x18) {
      puVar4 = puVar9 + 1;
      if ((uStack_2c & 1) == 0) {
        if (puVar4 != param_2 && puVar9 != param_2) {
          do {
            puVar11 = puVar4;
            uVar5 = *puVar9;
            uVar6 = puVar9[1];
            puVar9 = puVar11;
            if (uVar6 < uVar5) {
              do {
                *puVar9 = uVar5;
                uVar5 = puVar9[-2];
                puVar9 = puVar9 + -1;
              } while (uVar6 < uVar5);
              *puVar9 = uVar6;
            }
            puVar4 = puVar11 + 1;
            puVar9 = puVar11;
          } while (puVar11 + 1 != param_2);
          return;
        }
        return;
      }
      if (puVar4 == param_2 || puVar9 == param_2) {
        return;
      }
      iVar1 = 4;
      puVar11 = puVar9;
      do {
        puVar2 = puVar4;
        uVar5 = *puVar11;
        uVar6 = puVar11[1];
        iVar3 = iVar1;
        if (uVar6 < uVar5) {
          do {
            *(uint *)((int)puVar9 + iVar3) = uVar5;
            puVar4 = puVar9;
            if (iVar3 == 4) goto LAB_71b2e81c;
            iVar8 = iVar3 + -4;
            uVar5 = *(uint *)((int)puVar9 + iVar3 + -8);
            iVar3 = iVar8;
          } while (uVar6 < uVar5);
          puVar4 = (uint *)(iVar8 + (int)puVar9);
LAB_71b2e81c:
          *puVar4 = uVar6;
        }
        puVar4 = puVar2 + 1;
        iVar1 = iVar1 + 4;
        puVar11 = puVar2;
        if (puVar4 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (puVar9 != param_2) {
        FUN_71b34000(puVar9,param_2,param_2,&uStack_25);
        return;
      }
      return;
    }
    uVar5 = param_2[-1];
    puVar4 = puVar9 + (uVar6 >> 1);
    if (uVar6 < 0x81) {
      uVar6 = *puVar4;
      uVar13 = *puVar9;
      if (uVar13 < uVar6) {
        if (uVar5 < uVar13) {
          *puVar4 = uVar5;
        }
        else {
          *puVar4 = uVar13;
          *puVar9 = uVar6;
          if (uVar6 <= param_2[-1]) goto LAB_71b2e636;
          *puVar9 = param_2[-1];
        }
        param_2[-1] = uVar6;
      }
      else if (uVar5 < uVar13) {
        *puVar9 = uVar5;
        param_2[-1] = uVar13;
        uVar6 = *puVar4;
        if (*puVar9 < uVar6) {
          *puVar4 = *puVar9;
          *puVar9 = uVar6;
        }
      }
    }
    else {
      uVar6 = *puVar9;
      uVar13 = *puVar4;
      if (uVar13 < uVar6) {
        if (uVar5 < uVar13) {
          *puVar9 = uVar5;
        }
        else {
          *puVar9 = uVar13;
          *puVar4 = uVar6;
          if (uVar6 <= param_2[-1]) goto LAB_71b2e54c;
          *puVar4 = param_2[-1];
        }
        param_2[-1] = uVar6;
      }
      else if (uVar5 < uVar13) {
        *puVar4 = uVar5;
        param_2[-1] = uVar13;
        uVar6 = *puVar9;
        if (*puVar4 < uVar6) {
          *puVar9 = *puVar4;
          *puVar4 = uVar6;
        }
      }
LAB_71b2e54c:
      uVar13 = param_2[-2];
      uVar6 = puVar9[1];
      puVar11 = puVar4 + -1;
      uVar5 = *puVar11;
      if (uVar5 < uVar6) {
        if (uVar13 < uVar5) {
          puVar9[1] = uVar13;
        }
        else {
          puVar9[1] = uVar5;
          *puVar11 = uVar6;
          if (uVar6 <= param_2[-2]) goto LAB_71b2e5b0;
          *puVar11 = param_2[-2];
        }
        param_2[-2] = uVar6;
      }
      else if (uVar13 < uVar5) {
        *puVar11 = uVar13;
        param_2[-2] = uVar5;
        uVar6 = puVar9[1];
        if (*puVar11 < uVar6) {
          puVar9[1] = *puVar11;
          *puVar11 = uVar6;
        }
      }
LAB_71b2e5b0:
      uVar13 = param_2[-3];
      uVar6 = puVar9[2];
      puVar2 = puVar4 + 1;
      uVar5 = *puVar2;
      if (uVar5 < uVar6) {
        if (uVar13 < uVar5) {
          puVar9[2] = uVar13;
        }
        else {
          puVar9[2] = uVar5;
          *puVar2 = uVar6;
          if (uVar6 <= param_2[-3]) goto LAB_71b2e5fa;
          *puVar2 = param_2[-3];
        }
        param_2[-3] = uVar6;
      }
      else if (uVar13 < uVar5) {
        *puVar2 = uVar13;
        param_2[-3] = uVar5;
        uVar6 = puVar9[2];
        if (*puVar2 < uVar6) {
          puVar9[2] = *puVar2;
          *puVar2 = uVar6;
        }
      }
LAB_71b2e5fa:
      uVar13 = *puVar2;
      uVar5 = *puVar11;
      uVar6 = *puVar4;
      if (uVar6 < uVar5) {
        uVar7 = uVar6;
        if (uVar6 <= uVar13) {
          *puVar11 = uVar6;
          *puVar4 = uVar5;
          puVar11 = puVar4;
          uVar6 = uVar5;
          uVar7 = uVar13;
          if (uVar5 <= uVar13) goto LAB_71b2e62c;
        }
LAB_71b2e628:
        *puVar2 = uVar5;
        *puVar11 = uVar13;
        uVar6 = uVar7;
      }
      else if (uVar13 < uVar6) {
        *puVar2 = uVar6;
        *puVar4 = uVar13;
        puVar2 = puVar4;
        uVar6 = uVar13;
        uVar7 = uVar5;
        if (uVar13 < uVar5) goto LAB_71b2e628;
      }
LAB_71b2e62c:
      uVar5 = *puVar9;
      *puVar9 = uVar6;
      *puVar4 = uVar5;
    }
LAB_71b2e636:
    param_3 = param_3 + -1;
    uVar6 = *puVar9;
    param_1 = puVar9;
    if (((uStack_2c & 1) == 0) && (uVar6 <= puVar9[-1])) {
      if (uVar6 < param_2[-1]) {
        do {
          param_1 = param_1 + 1;
        } while (*param_1 <= uVar6);
      }
      else {
        do {
          param_1 = param_1 + 1;
          if (param_2 <= param_1) break;
        } while (*param_1 <= uVar6);
      }
      puVar4 = param_2;
      if (param_1 < param_2) {
        do {
          puVar4 = puVar4 + -1;
        } while (uVar6 < *puVar4);
      }
      if (param_1 < puVar4) {
        uVar13 = *puVar4;
        uVar5 = *param_1;
        do {
          *param_1 = uVar13;
          *puVar4 = uVar5;
          do {
            param_1 = param_1 + 1;
            uVar5 = *param_1;
          } while (uVar5 <= uVar6);
          do {
            puVar4 = puVar4 + -1;
            uVar13 = *puVar4;
          } while (uVar6 < uVar13);
        } while (param_1 < puVar4);
      }
      puVar4 = param_1 + -1;
      if (puVar4 != puVar9) {
        *puVar9 = *puVar4;
      }
      *puVar4 = uVar6;
LAB_71b2e766:
      uStack_2c = 0;
      goto LAB_71b2e4aa;
    }
    iVar1 = 0;
    do {
      iVar3 = iVar1 + 4;
      uVar5 = *(uint *)((int)puVar9 + iVar1 + 4);
      iVar1 = iVar3;
    } while (uVar5 < uVar6);
    puVar11 = (uint *)((int)puVar9 + iVar3);
    puVar4 = param_2;
    if (iVar3 == 4) {
      do {
        if (puVar4 <= puVar11) break;
        puVar4 = puVar4 + -1;
      } while (uVar6 <= *puVar4);
    }
    else {
      do {
        puVar4 = puVar4 + -1;
      } while (uVar6 <= *puVar4);
    }
    param_1 = puVar11;
    if (puVar11 < puVar4) {
      uVar13 = *puVar4;
      puVar2 = puVar4;
      do {
        *param_1 = uVar13;
        *puVar2 = uVar5;
        do {
          param_1 = param_1 + 1;
          uVar5 = *param_1;
        } while (uVar5 < uVar6);
        do {
          puVar2 = puVar2 + -1;
          uVar13 = *puVar2;
        } while (uVar6 <= uVar13);
      } while (param_1 < puVar2);
    }
    puVar2 = param_1 + -1;
    if (puVar2 != puVar9) {
      *puVar9 = *puVar2;
    }
    *puVar2 = uVar6;
    if (puVar11 < puVar4) {
LAB_71b2e6da:
      FUN_71b2e498(puVar9,puVar2,param_3,uStack_2c & 1);
      goto LAB_71b2e766;
    }
    iVar1 = FUN_71b33d50(puVar9,puVar2);
    iVar3 = FUN_71b33d50(param_1,param_2);
    if (iVar3 == 0) {
      if (iVar1 == 0) goto LAB_71b2e6da;
    }
    else {
      param_1 = puVar9;
      param_2 = puVar2;
      if (iVar1 != 0) {
switchD_71b2e76c_caseD_0:
        return;
      }
    }
  } while( true );
}


// =========================================================================
// Function: lVlKjWqIwMkkaXWUYCJiwZNChzsTcVOzbEL_ecERmdFxip__l
// Entry: 0x71b2e9a8 | Size: 20 bytes
// =========================================================================

void lVlKjWqIwMkkaXWUYCJiwZNChzsTcVOzbEL_ecERmdFxip__l(int param_1,int param_2)

{
  FUN_71b2e9f0(param_1,param_2,LZCOUNT(param_2 - param_1 >> 3) * -2 + 0x3e,1);
  return;
}


// =========================================================================
// Function: FUN_71b2e9f0
// Entry: 0x71b2e9f0 | Size: 1766 bytes
// =========================================================================

void FUN_71b2e9f0(uint *param_1,uint *param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  uint uStack_34;
  undefined1 uStack_25;
  
  uStack_34 = param_4;
LAB_71b2ea02:
  do {
    puVar15 = param_1;
    uVar8 = (int)param_2 - (int)puVar15 >> 3;
    switch(uVar8) {
    case 0:
    case 1:
      goto switchD_71b2ee7a_caseD_0;
    case 2:
      uVar8 = *puVar15;
      uVar1 = puVar15[1];
      uVar4 = param_2[-2];
      uVar10 = param_2[-1];
      if ((int)((uVar10 - uVar1) - (uint)(uVar4 < uVar8)) < 0 ==
          (SBORROW4(uVar10,uVar1) != SBORROW4(uVar10 - uVar1,(uint)(uVar4 < uVar8)))) {
        return;
      }
      *puVar15 = uVar4;
      puVar15[1] = uVar10;
      param_2[-2] = uVar8;
      param_2[-1] = uVar1;
      return;
    case 3:
      uVar8 = *puVar15;
      uVar1 = puVar15[1];
      uVar10 = puVar15[2];
      uVar4 = puVar15[3];
      uVar12 = param_2[-2];
      uVar13 = param_2[-1];
      if ((int)((uVar4 - uVar1) - (uint)(uVar10 < uVar8)) < 0 ==
          (SBORROW4(uVar4,uVar1) != SBORROW4(uVar4 - uVar1,(uint)(uVar10 < uVar8)))) {
        if ((int)((uVar13 - uVar4) - (uint)(uVar12 < uVar10)) < 0 ==
            (SBORROW4(uVar13,uVar4) != SBORROW4(uVar13 - uVar4,(uint)(uVar12 < uVar10)))) {
          return;
        }
        puVar15[2] = uVar12;
        param_2[-2] = uVar10;
        puVar15[3] = uVar13;
        uVar8 = *puVar15;
        uVar10 = puVar15[2];
        param_2[-1] = uVar4;
        uVar1 = puVar15[1];
        uVar4 = puVar15[3];
        if ((int)((uVar4 - uVar1) - (uint)(uVar10 < uVar8)) < 0 ==
            (SBORROW4(uVar4,uVar1) != SBORROW4(uVar4 - uVar1,(uint)(uVar10 < uVar8)))) {
          return;
        }
        *puVar15 = uVar10;
        puVar15[1] = uVar4;
        puVar15[2] = uVar8;
        puVar15[3] = uVar1;
        return;
      }
      if ((int)((uVar13 - uVar4) - (uint)(uVar12 < uVar10)) < 0 !=
          (SBORROW4(uVar13,uVar4) != SBORROW4(uVar13 - uVar4,(uint)(uVar12 < uVar10)))) {
        *puVar15 = uVar12;
        puVar15[1] = uVar13;
        param_2[-2] = uVar8;
        param_2[-1] = uVar1;
        return;
      }
      *puVar15 = uVar10;
      puVar15[2] = uVar8;
      puVar15[3] = uVar1;
      uVar10 = param_2[-2];
      puVar15[1] = uVar4;
      uVar4 = param_2[-1];
      if ((int)((uVar4 - uVar1) - (uint)(uVar10 < uVar8)) < 0 ==
          (SBORROW4(uVar4,uVar1) != SBORROW4(uVar4 - uVar1,(uint)(uVar10 < uVar8)))) {
        return;
      }
      puVar15[2] = uVar10;
      puVar15[3] = uVar4;
      param_2[-2] = uVar8;
      param_2[-1] = uVar1;
      return;
    case 4:
      uVar12 = *puVar15;
      uVar14 = puVar15[1];
      puVar6 = puVar15 + 2;
      uVar4 = *puVar6;
      uVar10 = puVar15[3];
      uVar17 = puVar15[5];
      puVar16 = puVar15 + 4;
      uVar13 = *puVar16;
      uVar8 = uVar17;
      puVar7 = puVar15;
      uVar1 = uVar13;
      if ((int)((uVar10 - uVar14) - (uint)(uVar4 < uVar12)) < 0 ==
          (SBORROW4(uVar10,uVar14) != SBORROW4(uVar10 - uVar14,(uint)(uVar4 < uVar12)))) {
        if ((int)((uVar17 - uVar10) - (uint)(uVar13 < uVar4)) < 0 ==
            (SBORROW4(uVar17,uVar10) != SBORROW4(uVar17 - uVar10,(uint)(uVar13 < uVar4))))
        goto LAB_71b2f08e;
        *puVar16 = uVar4;
        puVar15[5] = uVar10;
        *puVar6 = uVar13;
        puVar15[3] = uVar17;
        uVar11 = uVar10;
        uVar8 = uVar10;
        puVar5 = puVar6;
        uVar18 = uVar4;
        uVar1 = uVar4;
        if ((int)((uVar17 - uVar14) - (uint)(uVar13 < uVar12)) < 0 ==
            (SBORROW4(uVar17,uVar14) != SBORROW4(uVar17 - uVar14,(uint)(uVar13 < uVar12))))
        goto LAB_71b2f08e;
      }
      else {
        uVar11 = uVar14;
        puVar5 = puVar16;
        uVar18 = uVar12;
        if ((int)((uVar17 - uVar10) - (uint)(uVar13 < uVar4)) < 0 ==
            (SBORROW4(uVar17,uVar10) != SBORROW4(uVar17 - uVar10,(uint)(uVar13 < uVar4)))) {
          *puVar15 = uVar4;
          puVar15[1] = uVar10;
          puVar15[2] = uVar12;
          puVar15[3] = uVar14;
          puVar7 = puVar6;
          if ((int)((uVar17 - uVar14) - (uint)(uVar13 < uVar12)) < 0 ==
              (SBORROW4(uVar17,uVar14) != SBORROW4(uVar17 - uVar14,(uint)(uVar13 < uVar12))))
          goto LAB_71b2f08e;
        }
      }
      *puVar5 = uVar12;
      puVar5[1] = uVar14;
      *puVar7 = uVar13;
      puVar7[1] = uVar17;
      uVar8 = uVar11;
      uVar1 = uVar18;
LAB_71b2f08e:
      uVar10 = param_2[-2];
      uVar4 = param_2[-1];
      if ((int)((uVar4 - uVar8) - (uint)(uVar10 < uVar1)) < 0 ==
          (SBORROW4(uVar4,uVar8) != SBORROW4(uVar4 - uVar8,(uint)(uVar10 < uVar1)))) {
        return;
      }
      *puVar16 = uVar10;
      param_2[-2] = uVar1;
      puVar15[5] = uVar4;
      uVar4 = *puVar6;
      uVar1 = *puVar16;
      param_2[-1] = uVar8;
      uVar10 = puVar15[3];
      uVar8 = puVar15[5];
      if ((int)((uVar8 - uVar10) - (uint)(uVar1 < uVar4)) < 0 ==
          (SBORROW4(uVar8,uVar10) != SBORROW4(uVar8 - uVar10,(uint)(uVar1 < uVar4)))) {
        return;
      }
      uVar13 = *puVar15;
      uVar12 = puVar15[1];
      puVar15[2] = uVar1;
      puVar15[3] = uVar8;
      puVar15[4] = uVar4;
      puVar15[5] = uVar10;
      if ((int)((uVar8 - uVar12) - (uint)(uVar1 < uVar13)) < 0 ==
          (SBORROW4(uVar8,uVar12) != SBORROW4(uVar8 - uVar12,(uint)(uVar1 < uVar13)))) {
        return;
      }
      *puVar15 = uVar1;
      puVar15[1] = uVar8;
      puVar15[2] = uVar13;
      puVar15[3] = uVar12;
      return;
    case 5:
      FUN_71b34512(puVar15,puVar15 + 2,puVar15 + 4,puVar15 + 6,param_2 + -2);
      goto switchD_71b2ee7a_caseD_0;
    }
    if ((int)uVar8 < 0x18) {
      puVar6 = puVar15 + 2;
      if ((uStack_34 & 1) == 0) {
        if (puVar6 == param_2 || puVar15 == param_2) {
          return;
        }
        do {
          puVar16 = puVar6;
          uVar8 = *puVar15;
          uVar1 = puVar15[1];
          uVar4 = puVar15[2];
          uVar10 = puVar15[3];
          puVar15 = puVar16;
          if ((int)((uVar10 - uVar1) - (uint)(uVar4 < uVar8)) < 0 !=
              (SBORROW4(uVar10,uVar1) != SBORROW4(uVar10 - uVar1,(uint)(uVar4 < uVar8)))) {
            do {
              puVar6 = puVar15;
              uVar12 = puVar6[-4];
              uVar13 = puVar6[-3];
              *puVar6 = uVar8;
              puVar6[1] = uVar1;
              puVar15 = puVar6 + -2;
              uVar8 = uVar12;
              uVar1 = uVar13;
            } while ((int)((uVar10 - uVar13) - (uint)(uVar4 < uVar12)) < 0 !=
                     (SBORROW4(uVar10,uVar13) != SBORROW4(uVar10 - uVar13,(uint)(uVar4 < uVar12))));
            puVar6[-2] = uVar4;
            puVar6[-1] = uVar10;
          }
          puVar6 = puVar16 + 2;
          puVar15 = puVar16;
        } while (puVar16 + 2 != param_2);
        return;
      }
      if (puVar6 == param_2 || puVar15 == param_2) {
        return;
      }
      iVar3 = 8;
      puVar16 = puVar15;
      do {
        uVar4 = *puVar16;
        uVar10 = puVar16[1];
        uVar8 = puVar16[2];
        uVar1 = puVar16[3];
        iVar2 = iVar3;
        if ((int)((uVar1 - uVar10) - (uint)(uVar8 < uVar4)) < 0 !=
            (SBORROW4(uVar1,uVar10) != SBORROW4(uVar1 - uVar10,(uint)(uVar8 < uVar4)))) {
          do {
            *(uint *)((int)puVar15 + iVar2) = uVar4;
            *(uint *)((int)puVar15 + iVar2 + 4) = uVar10;
            puVar16 = puVar15;
            if (iVar2 == 8) goto LAB_71b2ef62;
            uVar4 = *(uint *)((int)puVar15 + iVar2 + -0x10);
            uVar10 = *(uint *)((int)puVar15 + iVar2 + -0xc);
            iVar2 = iVar2 + -8;
          } while ((int)((uVar1 - uVar10) - (uint)(uVar8 < uVar4)) < 0 !=
                   (SBORROW4(uVar1,uVar10) != SBORROW4(uVar1 - uVar10,(uint)(uVar8 < uVar4))));
          puVar16 = (uint *)(iVar2 + (int)puVar15);
LAB_71b2ef62:
          *puVar16 = uVar8;
          puVar16[1] = uVar1;
        }
        puVar7 = puVar6 + 2;
        iVar3 = iVar3 + 8;
        puVar16 = puVar6;
        puVar6 = puVar7;
        if (puVar7 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (puVar15 == param_2) {
        return;
      }
      FUN_71b346a6(puVar15,param_2,param_2,&uStack_25);
      return;
    }
    uVar1 = param_2[-2];
    uVar4 = param_2[-1];
    puVar6 = puVar15 + (uVar8 & 0xfffffffe);
    if (uVar8 < 0x81) {
      uVar8 = *puVar6;
      uVar10 = puVar6[1];
      uVar12 = *puVar15;
      uVar13 = puVar15[1];
      if ((int)((uVar13 - uVar10) - (uint)(uVar12 < uVar8)) < 0 ==
          (SBORROW4(uVar13,uVar10) != SBORROW4(uVar13 - uVar10,(uint)(uVar12 < uVar8)))) {
        if ((int)((uVar4 - uVar13) - (uint)(uVar1 < uVar12)) < 0 !=
            (SBORROW4(uVar4,uVar13) != SBORROW4(uVar4 - uVar13,(uint)(uVar1 < uVar12)))) {
          *puVar15 = uVar1;
          param_2[-2] = uVar12;
          uVar8 = *puVar6;
          puVar15[1] = uVar4;
          uVar1 = *puVar15;
          param_2[-1] = uVar13;
          uVar4 = puVar6[1];
          uVar10 = puVar15[1];
          if ((int)((uVar10 - uVar4) - (uint)(uVar1 < uVar8)) < 0 !=
              (SBORROW4(uVar10,uVar4) != SBORROW4(uVar10 - uVar4,(uint)(uVar1 < uVar8)))) {
            *puVar6 = uVar1;
            puVar6[1] = uVar10;
            *puVar15 = uVar8;
            puVar15[1] = uVar4;
          }
        }
      }
      else {
        if ((int)((uVar4 - uVar13) - (uint)(uVar1 < uVar12)) < 0 ==
            (SBORROW4(uVar4,uVar13) != SBORROW4(uVar4 - uVar13,(uint)(uVar1 < uVar12)))) {
          *puVar6 = uVar12;
          *puVar15 = uVar8;
          puVar6[1] = uVar13;
          uVar1 = param_2[-2];
          puVar15[1] = uVar10;
          uVar4 = param_2[-1];
          if ((int)((uVar4 - uVar10) - (uint)(uVar1 < uVar8)) < 0 ==
              (SBORROW4(uVar4,uVar10) != SBORROW4(uVar4 - uVar10,(uint)(uVar1 < uVar8))))
          goto LAB_71b2ecb6;
          *puVar15 = uVar1;
          puVar15[1] = uVar4;
        }
        else {
          *puVar6 = uVar1;
          puVar6[1] = uVar4;
        }
        param_2[-2] = uVar8;
        param_2[-1] = uVar10;
      }
    }
    else {
      uVar8 = *puVar15;
      uVar13 = puVar15[1];
      uVar10 = *puVar6;
      uVar12 = puVar6[1];
      if ((int)((uVar12 - uVar13) - (uint)(uVar10 < uVar8)) < 0 ==
          (SBORROW4(uVar12,uVar13) != SBORROW4(uVar12 - uVar13,(uint)(uVar10 < uVar8)))) {
        if ((int)((uVar4 - uVar12) - (uint)(uVar1 < uVar10)) < 0 !=
            (SBORROW4(uVar4,uVar12) != SBORROW4(uVar4 - uVar12,(uint)(uVar1 < uVar10)))) {
          *puVar6 = uVar1;
          param_2[-2] = uVar10;
          uVar8 = *puVar15;
          puVar6[1] = uVar4;
          uVar1 = *puVar6;
          param_2[-1] = uVar12;
          uVar4 = puVar15[1];
          uVar10 = puVar6[1];
          if ((int)((uVar10 - uVar4) - (uint)(uVar1 < uVar8)) < 0 !=
              (SBORROW4(uVar10,uVar4) != SBORROW4(uVar10 - uVar4,(uint)(uVar1 < uVar8)))) {
            *puVar15 = uVar1;
            puVar15[1] = uVar10;
            *puVar6 = uVar8;
            puVar6[1] = uVar4;
          }
        }
      }
      else {
        if ((int)((uVar4 - uVar12) - (uint)(uVar1 < uVar10)) < 0 ==
            (SBORROW4(uVar4,uVar12) != SBORROW4(uVar4 - uVar12,(uint)(uVar1 < uVar10)))) {
          *puVar15 = uVar10;
          *puVar6 = uVar8;
          puVar15[1] = uVar12;
          uVar1 = param_2[-2];
          puVar6[1] = uVar13;
          uVar4 = param_2[-1];
          if ((int)((uVar4 - uVar13) - (uint)(uVar1 < uVar8)) < 0 ==
              (SBORROW4(uVar4,uVar13) != SBORROW4(uVar4 - uVar13,(uint)(uVar1 < uVar8))))
          goto LAB_71b2eb0c;
          *puVar6 = uVar1;
          puVar6[1] = uVar4;
        }
        else {
          *puVar15 = uVar1;
          puVar15[1] = uVar4;
        }
        param_2[-2] = uVar8;
        param_2[-1] = uVar13;
      }
LAB_71b2eb0c:
      uVar8 = puVar15[2];
      uVar1 = puVar15[3];
      puVar16 = puVar6 + -2;
      uVar12 = *puVar16;
      uVar13 = param_2[-4];
      uVar10 = param_2[-3];
      uVar4 = puVar6[-1];
      if ((int)((uVar4 - uVar1) - (uint)(uVar12 < uVar8)) < 0 ==
          (SBORROW4(uVar4,uVar1) != SBORROW4(uVar4 - uVar1,(uint)(uVar12 < uVar8)))) {
        if ((int)((uVar10 - uVar4) - (uint)(uVar13 < uVar12)) < 0 !=
            (SBORROW4(uVar10,uVar4) != SBORROW4(uVar10 - uVar4,(uint)(uVar13 < uVar12)))) {
          *puVar16 = uVar13;
          param_2[-4] = uVar12;
          uVar8 = puVar15[2];
          uVar1 = *puVar16;
          puVar6[-1] = uVar10;
          param_2[-3] = uVar4;
          uVar4 = puVar15[3];
          uVar10 = puVar6[-1];
          if ((int)((uVar10 - uVar4) - (uint)(uVar1 < uVar8)) < 0 !=
              (SBORROW4(uVar10,uVar4) != SBORROW4(uVar10 - uVar4,(uint)(uVar1 < uVar8)))) {
            puVar15[2] = uVar1;
            puVar15[3] = uVar10;
            *puVar16 = uVar8;
            puVar6[-1] = uVar4;
          }
        }
      }
      else {
        if ((int)((uVar10 - uVar4) - (uint)(uVar13 < uVar12)) < 0 ==
            (SBORROW4(uVar10,uVar4) != SBORROW4(uVar10 - uVar4,(uint)(uVar13 < uVar12)))) {
          puVar15[2] = uVar12;
          *puVar16 = uVar8;
          puVar15[3] = uVar4;
          uVar4 = param_2[-4];
          puVar6[-1] = uVar1;
          uVar10 = param_2[-3];
          if ((int)((uVar10 - uVar1) - (uint)(uVar4 < uVar8)) < 0 ==
              (SBORROW4(uVar10,uVar1) != SBORROW4(uVar10 - uVar1,(uint)(uVar4 < uVar8))))
          goto LAB_71b2ebc2;
          *puVar16 = uVar4;
          puVar6[-1] = uVar10;
        }
        else {
          puVar15[2] = uVar13;
          puVar15[3] = uVar10;
        }
        param_2[-4] = uVar8;
        param_2[-3] = uVar1;
      }
LAB_71b2ebc2:
      puVar7 = puVar6 + 2;
      uVar12 = *puVar7;
      uVar8 = puVar15[4];
      uVar1 = puVar15[5];
      uVar13 = param_2[-6];
      uVar10 = param_2[-5];
      uVar4 = puVar6[3];
      if ((int)((uVar4 - uVar1) - (uint)(uVar12 < uVar8)) < 0 ==
          (SBORROW4(uVar4,uVar1) != SBORROW4(uVar4 - uVar1,(uint)(uVar12 < uVar8)))) {
        if ((int)((uVar10 - uVar4) - (uint)(uVar13 < uVar12)) < 0 !=
            (SBORROW4(uVar10,uVar4) != SBORROW4(uVar10 - uVar4,(uint)(uVar13 < uVar12)))) {
          *puVar7 = uVar13;
          param_2[-6] = uVar12;
          uVar8 = puVar15[4];
          uVar1 = *puVar7;
          puVar6[3] = uVar10;
          param_2[-5] = uVar4;
          uVar4 = puVar15[5];
          uVar10 = puVar6[3];
          if ((int)((uVar10 - uVar4) - (uint)(uVar1 < uVar8)) < 0 !=
              (SBORROW4(uVar10,uVar4) != SBORROW4(uVar10 - uVar4,(uint)(uVar1 < uVar8)))) {
            puVar15[4] = uVar1;
            puVar15[5] = uVar10;
            *puVar7 = uVar8;
            puVar6[3] = uVar4;
          }
        }
      }
      else {
        if ((int)((uVar10 - uVar4) - (uint)(uVar13 < uVar12)) < 0 ==
            (SBORROW4(uVar10,uVar4) != SBORROW4(uVar10 - uVar4,(uint)(uVar13 < uVar12)))) {
          puVar15[4] = uVar12;
          *puVar7 = uVar8;
          puVar15[5] = uVar4;
          uVar4 = param_2[-6];
          puVar6[3] = uVar1;
          uVar10 = param_2[-5];
          if ((int)((uVar10 - uVar1) - (uint)(uVar4 < uVar8)) < 0 ==
              (SBORROW4(uVar10,uVar1) != SBORROW4(uVar10 - uVar1,(uint)(uVar4 < uVar8))))
          goto LAB_71b2ec4a;
          *puVar7 = uVar4;
          puVar6[3] = uVar10;
        }
        else {
          puVar15[4] = uVar13;
          puVar15[5] = uVar10;
        }
        param_2[-6] = uVar8;
        param_2[-5] = uVar1;
      }
LAB_71b2ec4a:
      uVar12 = *puVar16;
      uVar13 = puVar6[-1];
      uVar8 = *puVar6;
      uVar1 = puVar6[1];
      uVar10 = *puVar7;
      uVar4 = puVar6[3];
      if ((int)((uVar1 - uVar13) - (uint)(uVar8 < uVar12)) < 0 ==
          (SBORROW4(uVar1,uVar13) != SBORROW4(uVar1 - uVar13,(uint)(uVar8 < uVar12)))) {
        if ((int)((uVar4 - uVar1) - (uint)(uVar10 < uVar8)) < 0 !=
            (SBORROW4(uVar4,uVar1) != SBORROW4(uVar4 - uVar1,(uint)(uVar10 < uVar8)))) {
          *puVar7 = uVar8;
          puVar6[3] = uVar1;
          *puVar6 = uVar10;
          puVar6[1] = uVar4;
          uVar8 = uVar10;
          uVar14 = uVar12;
          uVar1 = uVar4;
          uVar17 = uVar13;
          puVar7 = puVar6;
          if ((int)((uVar4 - uVar13) - (uint)(uVar10 < uVar12)) < 0 !=
              (SBORROW4(uVar4,uVar13) != SBORROW4(uVar4 - uVar13,(uint)(uVar10 < uVar12))))
          goto LAB_71b2eca2;
        }
      }
      else {
        uVar14 = uVar8;
        uVar17 = uVar1;
        if ((int)((uVar4 - uVar1) - (uint)(uVar10 < uVar8)) < 0 ==
            (SBORROW4(uVar4,uVar1) != SBORROW4(uVar4 - uVar1,(uint)(uVar10 < uVar8)))) {
          *puVar16 = uVar8;
          puVar6[-1] = uVar1;
          *puVar6 = uVar12;
          puVar6[1] = uVar13;
          uVar8 = uVar12;
          uVar14 = uVar10;
          uVar1 = uVar13;
          uVar17 = uVar4;
          puVar16 = puVar6;
          if ((int)((uVar4 - uVar13) - (uint)(uVar10 < uVar12)) < 0 ==
              (SBORROW4(uVar4,uVar13) != SBORROW4(uVar4 - uVar13,(uint)(uVar10 < uVar12))))
          goto LAB_71b2ecaa;
        }
LAB_71b2eca2:
        *puVar7 = uVar12;
        puVar7[1] = uVar13;
        *puVar16 = uVar10;
        puVar16[1] = uVar4;
        uVar8 = uVar14;
        uVar1 = uVar17;
      }
LAB_71b2ecaa:
      uVar4 = *puVar15;
      uVar10 = puVar15[1];
      *puVar15 = uVar8;
      puVar15[1] = uVar1;
      *puVar6 = uVar4;
      puVar6[1] = uVar10;
    }
LAB_71b2ecb6:
    param_3 = param_3 + -1;
    uVar8 = *puVar15;
    uVar1 = puVar15[1];
    if (((uStack_34 & 1) == 0) &&
       (uVar4 = puVar15[-1],
       (int)((uVar4 - uVar1) - (uint)(puVar15[-2] < uVar8)) < 0 ==
       (SBORROW4(uVar4,uVar1) != SBORROW4(uVar4 - uVar1,(uint)(puVar15[-2] < uVar8))))) {
      uVar4 = param_2[-1];
      puVar6 = puVar15;
      if ((int)((uVar1 - uVar4) - (uint)(uVar8 < param_2[-2])) < 0 ==
          (SBORROW4(uVar1,uVar4) != SBORROW4(uVar1 - uVar4,(uint)(uVar8 < param_2[-2])))) {
        do {
          param_1 = puVar6 + 2;
          if (param_2 <= param_1) break;
          uVar4 = puVar6[3];
          puVar6 = param_1;
        } while ((int)((uVar1 - uVar4) - (uint)(uVar8 < *param_1)) < 0 ==
                 (SBORROW4(uVar1,uVar4) != SBORROW4(uVar1 - uVar4,(uint)(uVar8 < *param_1))));
      }
      else {
        do {
          param_1 = puVar6 + 2;
          uVar4 = puVar6[3];
          puVar6 = param_1;
        } while ((int)((uVar1 - uVar4) - (uint)(uVar8 < *param_1)) < 0 ==
                 (SBORROW4(uVar1,uVar4) != SBORROW4(uVar1 - uVar4,(uint)(uVar8 < *param_1))));
      }
      puVar6 = param_2;
      puVar16 = param_2;
      if (param_1 < param_2) {
        do {
          puVar6 = puVar16 + -2;
          uVar4 = puVar16[-1];
          puVar16 = puVar6;
        } while ((int)((uVar1 - uVar4) - (uint)(uVar8 < *puVar6)) < 0 !=
                 (SBORROW4(uVar1,uVar4) != SBORROW4(uVar1 - uVar4,(uint)(uVar8 < *puVar6))));
      }
      if (param_1 < puVar6) {
        uVar10 = *puVar6;
        uVar12 = puVar6[1];
        uVar4 = *param_1;
        uVar13 = param_1[1];
        do {
          *param_1 = uVar10;
          param_1[1] = uVar12;
          *puVar6 = uVar4;
          puVar6[1] = uVar13;
          puVar16 = param_1;
          do {
            param_1 = puVar16 + 2;
            uVar4 = *param_1;
            uVar13 = puVar16[3];
            puVar7 = puVar6;
            puVar16 = param_1;
          } while ((int)((uVar1 - uVar13) - (uint)(uVar8 < uVar4)) < 0 ==
                   (SBORROW4(uVar1,uVar13) != SBORROW4(uVar1 - uVar13,(uint)(uVar8 < uVar4))));
          do {
            puVar6 = puVar7 + -2;
            uVar10 = *puVar6;
            uVar12 = puVar7[-1];
            puVar7 = puVar6;
          } while ((int)((uVar1 - uVar12) - (uint)(uVar8 < uVar10)) < 0 !=
                   (SBORROW4(uVar1,uVar12) != SBORROW4(uVar1 - uVar12,(uint)(uVar8 < uVar10))));
        } while (param_1 < puVar6);
      }
      puVar6 = param_1 + -2;
      if (puVar6 != puVar15) {
        uVar4 = param_1[-1];
        *puVar15 = *puVar6;
        puVar15[1] = uVar4;
      }
      *puVar6 = uVar8;
      param_1[-1] = uVar1;
      uStack_34 = 0;
      goto LAB_71b2ea02;
    }
    iVar3 = 0;
    do {
      iVar2 = iVar3 + 8;
      uVar10 = *(uint *)((int)puVar15 + iVar3 + 8);
      uVar4 = *(uint *)((int)puVar15 + iVar3 + 0xc);
      iVar3 = iVar2;
    } while ((int)((uVar4 - uVar1) - (uint)(uVar10 < uVar8)) < 0 !=
             (SBORROW4(uVar4,uVar1) != SBORROW4(uVar4 - uVar1,(uint)(uVar10 < uVar8))));
    puVar16 = (uint *)((int)puVar15 + iVar2);
    puVar6 = param_2;
    if (iVar2 == 8) {
      do {
        puVar7 = puVar6;
        if (puVar6 <= puVar16) break;
        puVar7 = puVar6 + -2;
        uVar12 = puVar6[-1];
        puVar6 = puVar7;
      } while ((int)((uVar12 - uVar1) - (uint)(*puVar7 < uVar8)) < 0 ==
               (SBORROW4(uVar12,uVar1) != SBORROW4(uVar12 - uVar1,(uint)(*puVar7 < uVar8))));
    }
    else {
      do {
        puVar7 = puVar6 + -2;
        uVar12 = puVar6[-1];
        puVar6 = puVar7;
      } while ((int)((uVar12 - uVar1) - (uint)(*puVar7 < uVar8)) < 0 ==
               (SBORROW4(uVar12,uVar1) != SBORROW4(uVar12 - uVar1,(uint)(*puVar7 < uVar8))));
    }
    param_1 = puVar16;
    if (puVar16 < puVar7) {
      uVar13 = *puVar7;
      uVar12 = puVar7[1];
      puVar6 = puVar7;
      do {
        *param_1 = uVar13;
        param_1[1] = uVar12;
        *puVar6 = uVar10;
        puVar6[1] = uVar4;
        puVar5 = param_1;
        do {
          param_1 = puVar5 + 2;
          uVar10 = *param_1;
          uVar4 = puVar5[3];
          puVar5 = param_1;
          puVar9 = puVar6;
        } while ((int)((uVar4 - uVar1) - (uint)(uVar10 < uVar8)) < 0 !=
                 (SBORROW4(uVar4,uVar1) != SBORROW4(uVar4 - uVar1,(uint)(uVar10 < uVar8))));
        do {
          puVar6 = puVar9 + -2;
          uVar13 = *puVar6;
          uVar12 = puVar9[-1];
          puVar9 = puVar6;
        } while ((int)((uVar12 - uVar1) - (uint)(uVar13 < uVar8)) < 0 ==
                 (SBORROW4(uVar12,uVar1) != SBORROW4(uVar12 - uVar1,(uint)(uVar13 < uVar8))));
      } while (param_1 < puVar6);
    }
    puVar6 = param_1 + -2;
    if (puVar6 != puVar15) {
      uVar4 = param_1[-1];
      *puVar15 = *puVar6;
      puVar15[1] = uVar4;
    }
    *puVar6 = uVar8;
    param_1[-1] = uVar1;
    if (puVar16 < puVar7) {
LAB_71b2ed9e:
      FUN_71b2e9f0(puVar15,puVar6,param_3,uStack_34 & 1);
      uStack_34 = 0;
    }
    else {
      iVar3 = FUN_71b34260(puVar15,puVar6);
      iVar2 = FUN_71b34260(param_1,param_2);
      if (iVar2 == 0) {
        if (iVar3 == 0) goto LAB_71b2ed9e;
      }
      else {
        param_1 = puVar15;
        param_2 = puVar6;
        if (iVar3 != 0) {
switchD_71b2ee7a_caseD_0:
          return;
        }
      }
    }
  } while( true );
}


// =========================================================================
// Function: KJSodgSrEcLJWcdpMMMGZPeqYanKNGurEJXqVpmVwgWdBVUWG
// Entry: 0x71b2f186 | Size: 20 bytes
// =========================================================================

void KJSodgSrEcLJWcdpMMMGZPeqYanKNGurEJXqVpmVwgWdBVUWG(int param_1,int param_2)

{
  FUN_71b2f1d0(param_1,param_2,LZCOUNT(param_2 - param_1 >> 3) * -2 + 0x3e,1);
  return;
}


// =========================================================================
// Function: FUN_71b2f1d0
// Entry: 0x71b2f1d0 | Size: 1766 bytes
// =========================================================================

uint * FUN_71b2f1d0(uint *param_1,uint *param_2,int param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  uint *puVar20;
  uint uStack_34;
  undefined1 uStack_25;
  
  uStack_34 = param_4;
LAB_71b2f1e2:
  do {
    puVar6 = param_1;
    puVar1 = (uint *)((int)param_2 - (int)puVar6);
    uVar9 = (int)puVar1 >> 3;
    switch(uVar9) {
    case 0:
    case 1:
      goto switchD_71b2f65a_caseD_0;
    case 2:
      puVar1 = (uint *)*puVar6;
      uVar9 = puVar6[1];
      uVar2 = param_2[-1];
      if (uVar9 < uVar2 || uVar2 - uVar9 < (uint)(puVar1 <= (uint *)param_2[-2])) {
        return puVar1;
      }
      *puVar6 = param_2[-2];
      puVar6[1] = uVar2;
      param_2[-2] = (uint)puVar1;
      param_2[-1] = uVar9;
      return puVar1;
    case 3:
      puVar1 = (uint *)*puVar6;
      uVar9 = puVar6[1];
      puVar8 = (uint *)puVar6[2];
      uVar2 = puVar6[3];
      puVar14 = (uint *)param_2[-2];
      uVar7 = param_2[-1];
      if (uVar9 < uVar2 || uVar2 - uVar9 < (uint)(puVar1 <= puVar8)) {
        if (uVar2 < uVar7 || uVar7 - uVar2 < (uint)(puVar8 <= puVar14)) {
          return (uint *)((uVar7 - uVar2) - (uint)(puVar8 > puVar14));
        }
        puVar6[2] = (uint)puVar14;
        param_2[-2] = (uint)puVar8;
        puVar6[3] = uVar7;
        puVar1 = (uint *)*puVar6;
        puVar8 = (uint *)puVar6[2];
        param_2[-1] = uVar2;
        uVar9 = puVar6[1];
        uVar2 = puVar6[3];
        if (uVar9 < uVar2 || uVar2 - uVar9 < (uint)(puVar1 <= puVar8)) {
          return puVar1;
        }
        *puVar6 = (uint)puVar8;
        puVar6[1] = uVar2;
        puVar6[2] = (uint)puVar1;
        puVar6[3] = uVar9;
        return puVar1;
      }
      if (uVar7 <= uVar2 && (uint)(puVar8 <= puVar14) <= uVar7 - uVar2) {
        *puVar6 = (uint)puVar14;
        puVar6[1] = uVar7;
        param_2[-2] = (uint)puVar1;
        param_2[-1] = uVar9;
        return puVar1;
      }
      *puVar6 = (uint)puVar8;
      puVar6[2] = (uint)puVar1;
      puVar6[3] = uVar9;
      puVar8 = (uint *)param_2[-2];
      puVar6[1] = uVar2;
      uVar2 = param_2[-1];
      if (uVar9 < uVar2 || uVar2 - uVar9 < (uint)(puVar1 <= puVar8)) {
        return puVar1;
      }
      puVar6[2] = (uint)puVar8;
      puVar6[3] = uVar2;
      param_2[-2] = (uint)puVar1;
      param_2[-1] = uVar9;
      return puVar1;
    case 4:
      uVar7 = *puVar6;
      puVar18 = (uint *)puVar6[1];
      puVar1 = puVar6 + 2;
      uVar2 = *puVar1;
      puVar20 = (uint *)puVar6[3];
      puVar4 = (uint *)puVar6[5];
      puVar8 = puVar6 + 4;
      uVar12 = *puVar8;
      puVar14 = puVar4;
      puVar17 = puVar6;
      uVar9 = uVar12;
      if (puVar18 < puVar20 || (uint)((int)puVar20 - (int)puVar18) < (uint)(uVar7 <= uVar2)) {
        if (puVar20 < puVar4 || (uint)((int)puVar4 - (int)puVar20) < (uint)(uVar2 <= uVar12))
        goto LAB_71b2f86e;
        *puVar8 = uVar2;
        puVar6[5] = (uint)puVar20;
        *puVar1 = uVar12;
        puVar6[3] = (uint)puVar4;
        puVar11 = puVar20;
        puVar14 = puVar20;
        puVar19 = puVar1;
        uVar13 = uVar2;
        uVar9 = uVar2;
        if (puVar18 < puVar4 || (uint)((int)puVar4 - (int)puVar18) < (uint)(uVar7 <= uVar12))
        goto LAB_71b2f86e;
      }
      else {
        puVar11 = puVar18;
        puVar19 = puVar8;
        uVar13 = uVar7;
        if (puVar20 < puVar4 || (uint)((int)puVar4 - (int)puVar20) < (uint)(uVar2 <= uVar12)) {
          *puVar6 = uVar2;
          puVar6[1] = (uint)puVar20;
          puVar6[2] = uVar7;
          puVar6[3] = (uint)puVar18;
          puVar17 = puVar1;
          if (puVar18 < puVar4 || (uint)((int)puVar4 - (int)puVar18) < (uint)(uVar7 <= uVar12))
          goto LAB_71b2f86e;
        }
      }
      *puVar19 = uVar7;
      puVar19[1] = (uint)puVar18;
      *puVar17 = uVar12;
      puVar17[1] = (uint)puVar4;
      puVar14 = puVar11;
      uVar9 = uVar13;
LAB_71b2f86e:
      puVar17 = (uint *)param_2[-1];
      if (puVar14 < puVar17 || (uint)((int)puVar17 - (int)puVar14) < (uint)(uVar9 <= param_2[-2])) {
        return puVar17;
      }
      *puVar8 = param_2[-2];
      param_2[-2] = uVar9;
      puVar6[5] = (uint)puVar17;
      puVar1 = (uint *)*puVar1;
      puVar8 = (uint *)*puVar8;
      param_2[-1] = (uint)puVar14;
      uVar2 = puVar6[3];
      uVar9 = puVar6[5];
      if (uVar2 < uVar9 || uVar9 - uVar2 < (uint)(puVar1 <= puVar8)) {
        return puVar8;
      }
      puVar14 = (uint *)*puVar6;
      uVar7 = puVar6[1];
      puVar6[2] = (uint)puVar8;
      puVar6[3] = uVar9;
      puVar6[4] = (uint)puVar1;
      puVar6[5] = uVar2;
      if (uVar7 < uVar9 || uVar9 - uVar7 < (uint)(puVar14 <= puVar8)) {
        return puVar8;
      }
      *puVar6 = (uint)puVar8;
      puVar6[1] = uVar9;
      puVar6[2] = (uint)puVar14;
      puVar6[3] = uVar7;
      return puVar8;
    case 5:
      puVar1 = (uint *)FUN_71b34d1a(puVar6,puVar6 + 2,puVar6 + 4,puVar6 + 6,param_2 + -2);
      goto switchD_71b2f65a_caseD_0;
    }
    if ((int)uVar9 < 0x18) {
      puVar1 = puVar6 + 2;
      puVar8 = (uint *)(uint)(puVar1 == param_2 || puVar6 == param_2);
      if ((uStack_34 & 1) == 0) {
        if (puVar8 != (uint *)0x0) {
          return puVar8;
        }
        do {
          puVar14 = puVar1;
          uVar9 = *puVar6;
          uVar2 = puVar6[1];
          uVar7 = puVar6[2];
          uVar12 = puVar6[3];
          puVar8 = (uint *)((uVar12 - uVar2) - (uint)(uVar9 > uVar7));
          puVar6 = puVar14;
          if (uVar12 <= uVar2 && (uint)(uVar9 <= uVar7) <= uVar12 - uVar2) {
            do {
              puVar1 = puVar6;
              uVar13 = puVar1[-3];
              puVar8 = puVar1 + -2;
              *puVar1 = uVar9;
              puVar1[1] = uVar2;
              puVar6 = puVar8;
              uVar9 = puVar1[-4];
              uVar2 = uVar13;
            } while (uVar12 <= uVar13 && (uint)(puVar1[-4] <= uVar7) <= uVar12 - uVar13);
            *puVar8 = uVar7;
            puVar1[-1] = uVar12;
          }
          puVar1 = puVar14 + 2;
          puVar6 = puVar14;
        } while (puVar14 + 2 != param_2);
        return puVar8;
      }
      if (puVar8 != (uint *)0x0) {
        return puVar8;
      }
      iVar5 = 8;
      puVar8 = puVar6;
      do {
        puVar14 = puVar1;
        uVar7 = *puVar8;
        uVar12 = puVar8[1];
        uVar9 = puVar8[2];
        uVar2 = puVar8[3];
        iVar3 = iVar5;
        if (uVar2 <= uVar12 && (uint)(uVar7 <= uVar9) <= uVar2 - uVar12) {
          do {
            *(uint *)((int)puVar6 + iVar3) = uVar7;
            *(uint *)((int)puVar6 + iVar3 + 4) = uVar12;
            puVar1 = puVar6;
            if (iVar3 == 8) goto LAB_71b2f742;
            uVar7 = *(uint *)((int)puVar6 + iVar3 + -0x10);
            uVar12 = *(uint *)((int)puVar6 + iVar3 + -0xc);
            iVar3 = iVar3 + -8;
          } while (uVar2 <= uVar12 && (uint)(uVar7 <= uVar9) <= uVar2 - uVar12);
          puVar1 = (uint *)(iVar3 + (int)puVar6);
LAB_71b2f742:
          *puVar1 = uVar9;
          puVar1[1] = uVar2;
        }
        iVar5 = iVar5 + 8;
        puVar8 = puVar14;
        puVar1 = puVar14 + 2;
        if (puVar14 + 2 == param_2) {
          return puVar14;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (puVar6 == param_2) {
        return puVar1;
      }
      puVar6 = (uint *)FUN_71b34eae(puVar6,param_2,param_2,&uStack_25);
      return puVar6;
    }
    uVar2 = param_2[-2];
    uVar7 = param_2[-1];
    puVar1 = puVar6 + (uVar9 & 0xfffffffe);
    if (uVar9 < 0x81) {
      uVar9 = *puVar1;
      uVar12 = puVar1[1];
      uVar13 = *puVar6;
      uVar15 = puVar6[1];
      if (uVar12 < uVar15 || uVar15 - uVar12 < (uint)(uVar9 <= uVar13)) {
        if (uVar7 <= uVar15 && (uint)(uVar13 <= uVar2) <= uVar7 - uVar15) {
          *puVar6 = uVar2;
          param_2[-2] = uVar13;
          uVar9 = *puVar1;
          puVar6[1] = uVar7;
          uVar2 = *puVar6;
          param_2[-1] = uVar15;
          uVar7 = puVar1[1];
          uVar12 = puVar6[1];
          if (uVar12 <= uVar7 && (uint)(uVar9 <= uVar2) <= uVar12 - uVar7) {
            *puVar1 = uVar2;
            puVar1[1] = uVar12;
            *puVar6 = uVar9;
            puVar6[1] = uVar7;
          }
        }
      }
      else {
        if (uVar15 < uVar7 || uVar7 - uVar15 < (uint)(uVar13 <= uVar2)) {
          *puVar1 = uVar13;
          *puVar6 = uVar9;
          puVar1[1] = uVar15;
          uVar2 = param_2[-2];
          puVar6[1] = uVar12;
          uVar7 = param_2[-1];
          if (uVar12 < uVar7 || uVar7 - uVar12 < (uint)(uVar9 <= uVar2)) goto LAB_71b2f496;
          *puVar6 = uVar2;
          puVar6[1] = uVar7;
        }
        else {
          *puVar1 = uVar2;
          puVar1[1] = uVar7;
        }
        param_2[-2] = uVar9;
        param_2[-1] = uVar12;
      }
    }
    else {
      uVar9 = *puVar6;
      uVar15 = puVar6[1];
      uVar12 = *puVar1;
      uVar13 = puVar1[1];
      if (uVar15 < uVar13 || uVar13 - uVar15 < (uint)(uVar9 <= uVar12)) {
        if (uVar7 <= uVar13 && (uint)(uVar12 <= uVar2) <= uVar7 - uVar13) {
          *puVar1 = uVar2;
          param_2[-2] = uVar12;
          uVar9 = *puVar6;
          puVar1[1] = uVar7;
          uVar2 = *puVar1;
          param_2[-1] = uVar13;
          uVar7 = puVar6[1];
          uVar12 = puVar1[1];
          if (uVar12 <= uVar7 && (uint)(uVar9 <= uVar2) <= uVar12 - uVar7) {
            *puVar6 = uVar2;
            puVar6[1] = uVar12;
            *puVar1 = uVar9;
            puVar1[1] = uVar7;
          }
        }
      }
      else {
        if (uVar13 < uVar7 || uVar7 - uVar13 < (uint)(uVar12 <= uVar2)) {
          *puVar6 = uVar12;
          *puVar1 = uVar9;
          puVar6[1] = uVar13;
          uVar2 = param_2[-2];
          puVar1[1] = uVar15;
          uVar7 = param_2[-1];
          if (uVar15 < uVar7 || uVar7 - uVar15 < (uint)(uVar9 <= uVar2)) goto LAB_71b2f2ec;
          *puVar1 = uVar2;
          puVar1[1] = uVar7;
        }
        else {
          *puVar6 = uVar2;
          puVar6[1] = uVar7;
        }
        param_2[-2] = uVar9;
        param_2[-1] = uVar15;
      }
LAB_71b2f2ec:
      uVar9 = puVar6[2];
      uVar2 = puVar6[3];
      puVar8 = puVar1 + -2;
      uVar13 = *puVar8;
      uVar15 = param_2[-4];
      uVar12 = param_2[-3];
      uVar7 = puVar1[-1];
      if (uVar2 < uVar7 || uVar7 - uVar2 < (uint)(uVar9 <= uVar13)) {
        if (uVar12 <= uVar7 && (uint)(uVar13 <= uVar15) <= uVar12 - uVar7) {
          *puVar8 = uVar15;
          param_2[-4] = uVar13;
          uVar9 = puVar6[2];
          uVar2 = *puVar8;
          puVar1[-1] = uVar12;
          param_2[-3] = uVar7;
          uVar7 = puVar6[3];
          uVar12 = puVar1[-1];
          if (uVar12 <= uVar7 && (uint)(uVar9 <= uVar2) <= uVar12 - uVar7) {
            puVar6[2] = uVar2;
            puVar6[3] = uVar12;
            *puVar8 = uVar9;
            puVar1[-1] = uVar7;
          }
        }
      }
      else {
        if (uVar7 < uVar12 || uVar12 - uVar7 < (uint)(uVar13 <= uVar15)) {
          puVar6[2] = uVar13;
          *puVar8 = uVar9;
          puVar6[3] = uVar7;
          uVar7 = param_2[-4];
          puVar1[-1] = uVar2;
          uVar12 = param_2[-3];
          if (uVar2 < uVar12 || uVar12 - uVar2 < (uint)(uVar9 <= uVar7)) goto LAB_71b2f3a2;
          *puVar8 = uVar7;
          puVar1[-1] = uVar12;
        }
        else {
          puVar6[2] = uVar15;
          puVar6[3] = uVar12;
        }
        param_2[-4] = uVar9;
        param_2[-3] = uVar2;
      }
LAB_71b2f3a2:
      puVar14 = puVar1 + 2;
      uVar13 = *puVar14;
      uVar9 = puVar6[4];
      uVar2 = puVar6[5];
      uVar15 = param_2[-6];
      uVar12 = param_2[-5];
      uVar7 = puVar1[3];
      if (uVar2 < uVar7 || uVar7 - uVar2 < (uint)(uVar9 <= uVar13)) {
        if (uVar12 <= uVar7 && (uint)(uVar13 <= uVar15) <= uVar12 - uVar7) {
          *puVar14 = uVar15;
          param_2[-6] = uVar13;
          uVar9 = puVar6[4];
          uVar2 = *puVar14;
          puVar1[3] = uVar12;
          param_2[-5] = uVar7;
          uVar7 = puVar6[5];
          uVar12 = puVar1[3];
          if (uVar12 <= uVar7 && (uint)(uVar9 <= uVar2) <= uVar12 - uVar7) {
            puVar6[4] = uVar2;
            puVar6[5] = uVar12;
            *puVar14 = uVar9;
            puVar1[3] = uVar7;
          }
        }
      }
      else {
        if (uVar7 < uVar12 || uVar12 - uVar7 < (uint)(uVar13 <= uVar15)) {
          puVar6[4] = uVar13;
          *puVar14 = uVar9;
          puVar6[5] = uVar7;
          uVar7 = param_2[-6];
          puVar1[3] = uVar2;
          uVar12 = param_2[-5];
          if (uVar2 < uVar12 || uVar12 - uVar2 < (uint)(uVar9 <= uVar7)) goto LAB_71b2f42a;
          *puVar14 = uVar7;
          puVar1[3] = uVar12;
        }
        else {
          puVar6[4] = uVar15;
          puVar6[5] = uVar12;
        }
        param_2[-6] = uVar9;
        param_2[-5] = uVar2;
      }
LAB_71b2f42a:
      uVar13 = *puVar8;
      uVar15 = puVar1[-1];
      uVar9 = *puVar1;
      uVar2 = puVar1[1];
      uVar12 = *puVar14;
      uVar7 = puVar1[3];
      if (uVar15 < uVar2 || uVar2 - uVar15 < (uint)(uVar13 <= uVar9)) {
        if (uVar7 <= uVar2 && (uint)(uVar9 <= uVar12) <= uVar7 - uVar2) {
          *puVar14 = uVar9;
          puVar1[3] = uVar2;
          *puVar1 = uVar12;
          puVar1[1] = uVar7;
          uVar9 = uVar12;
          uVar10 = uVar13;
          uVar2 = uVar7;
          uVar16 = uVar15;
          puVar14 = puVar1;
          if (uVar7 <= uVar15 && (uint)(uVar13 <= uVar12) <= uVar7 - uVar15) goto LAB_71b2f482;
        }
      }
      else {
        uVar10 = uVar9;
        uVar16 = uVar2;
        if (uVar2 < uVar7 || uVar7 - uVar2 < (uint)(uVar9 <= uVar12)) {
          *puVar8 = uVar9;
          puVar1[-1] = uVar2;
          *puVar1 = uVar13;
          puVar1[1] = uVar15;
          uVar9 = uVar13;
          uVar10 = uVar12;
          uVar2 = uVar15;
          uVar16 = uVar7;
          puVar8 = puVar1;
          if (uVar15 < uVar7 || uVar7 - uVar15 < (uint)(uVar13 <= uVar12)) goto LAB_71b2f48a;
        }
LAB_71b2f482:
        *puVar14 = uVar13;
        puVar14[1] = uVar15;
        *puVar8 = uVar12;
        puVar8[1] = uVar7;
        uVar9 = uVar10;
        uVar2 = uVar16;
      }
LAB_71b2f48a:
      uVar7 = *puVar6;
      uVar12 = puVar6[1];
      *puVar6 = uVar9;
      puVar6[1] = uVar2;
      *puVar1 = uVar7;
      puVar1[1] = uVar12;
    }
LAB_71b2f496:
    param_3 = param_3 + -1;
    uVar9 = *puVar6;
    puVar1 = (uint *)puVar6[1];
    if (((uStack_34 & 1) == 0) &&
       (puVar1 < (uint *)puVar6[-1] ||
        (uint)((int)puVar6[-1] - (int)puVar1) < (uint)(uVar9 <= puVar6[-2]))) {
      puVar8 = puVar6;
      if ((uint *)param_2[-1] < puVar1 ||
          (uint)((int)puVar1 - (int)param_2[-1]) < (uint)(param_2[-2] <= uVar9)) {
        do {
          param_1 = puVar8 + 2;
          if (param_2 <= param_1) break;
          puVar14 = puVar8 + 3;
          puVar8 = param_1;
        } while ((uint *)*puVar14 < puVar1 ||
                 (uint)((int)puVar1 - (int)*puVar14) < (uint)(*param_1 <= uVar9));
      }
      else {
        do {
          param_1 = puVar8 + 2;
          puVar14 = puVar8 + 3;
          puVar8 = param_1;
        } while ((uint *)*puVar14 < puVar1 ||
                 (uint)((int)puVar1 - (int)*puVar14) < (uint)(*param_1 <= uVar9));
      }
      puVar8 = param_2;
      puVar14 = param_2;
      if (param_1 < param_2) {
        do {
          puVar8 = puVar14 + -2;
          puVar17 = puVar14 + -1;
          puVar14 = puVar8;
        } while (puVar1 <= (uint *)*puVar17 &&
                 (uint)(*puVar8 <= uVar9) <= (uint)((int)puVar1 - (int)*puVar17));
      }
      if (param_1 < puVar8) {
        uVar7 = *puVar8;
        puVar14 = (uint *)puVar8[1];
        uVar2 = *param_1;
        puVar17 = (uint *)param_1[1];
        do {
          *param_1 = uVar7;
          param_1[1] = (uint)puVar14;
          *puVar8 = uVar2;
          puVar8[1] = (uint)puVar17;
          puVar14 = param_1;
          do {
            param_1 = puVar14 + 2;
            uVar2 = *param_1;
            puVar17 = (uint *)puVar14[3];
            puVar20 = puVar8;
            puVar14 = param_1;
          } while (puVar17 < puVar1 || (uint)((int)puVar1 - (int)puVar17) < (uint)(uVar2 <= uVar9));
          do {
            puVar8 = puVar20 + -2;
            uVar7 = *puVar8;
            puVar14 = (uint *)puVar20[-1];
            puVar20 = puVar8;
          } while (puVar1 <= puVar14 && (uint)(uVar7 <= uVar9) <= (uint)((int)puVar1 - (int)puVar14)
                  );
        } while (param_1 < puVar8);
      }
      puVar8 = param_1 + -2;
      if (puVar8 != puVar6) {
        uVar2 = param_1[-1];
        *puVar6 = *puVar8;
        puVar6[1] = uVar2;
      }
      *puVar8 = uVar9;
      param_1[-1] = (uint)puVar1;
      uStack_34 = 0;
      goto LAB_71b2f1e2;
    }
    iVar5 = 0;
    do {
      iVar3 = iVar5 + 8;
      uVar2 = *(uint *)((int)puVar6 + iVar5 + 8);
      puVar14 = *(uint **)((int)puVar6 + iVar5 + 0xc);
      puVar8 = (uint *)((int)puVar14 + (-(uint)(uVar9 > uVar2) - (int)puVar1));
      iVar5 = iVar3;
    } while (puVar14 <= puVar1 && (uint)(uVar9 <= uVar2) <= (uint)((int)puVar14 - (int)puVar1));
    puVar20 = (uint *)((int)puVar6 + iVar3);
    puVar17 = param_2;
    if (iVar3 == 8) {
      do {
        puVar18 = puVar17;
        if (puVar17 <= puVar20) break;
        puVar18 = puVar17 + -2;
        puVar8 = (uint *)puVar17[-1];
        puVar17 = puVar18;
      } while (puVar1 < puVar8 || (uint)((int)puVar8 - (int)puVar1) < (uint)(uVar9 <= *puVar18));
    }
    else {
      do {
        puVar18 = puVar17 + -2;
        puVar8 = (uint *)puVar17[-1];
        puVar17 = puVar18;
      } while (puVar1 < puVar8 || (uint)((int)puVar8 - (int)puVar1) < (uint)(uVar9 <= *puVar18));
    }
    param_1 = puVar20;
    if (puVar20 < puVar18) {
      uVar7 = *puVar18;
      puVar4 = (uint *)puVar18[1];
      puVar8 = puVar20;
      puVar17 = puVar18;
      do {
        *puVar8 = uVar7;
        puVar8[1] = (uint)puVar4;
        *puVar17 = uVar2;
        puVar17[1] = (uint)puVar14;
        puVar4 = puVar8;
        do {
          puVar8 = puVar4 + 2;
          uVar2 = *puVar8;
          puVar14 = (uint *)puVar4[3];
          puVar4 = puVar8;
          puVar11 = puVar17;
        } while (puVar14 <= puVar1 && (uint)(uVar9 <= uVar2) <= (uint)((int)puVar14 - (int)puVar1));
        do {
          puVar17 = puVar11 + -2;
          uVar7 = *puVar17;
          puVar4 = (uint *)puVar11[-1];
          puVar11 = puVar17;
        } while (puVar1 < puVar4 || (uint)((int)puVar4 - (int)puVar1) < (uint)(uVar9 <= uVar7));
        param_1 = puVar8;
      } while (puVar8 < puVar17);
    }
    puVar14 = param_1 + -2;
    if (puVar14 != puVar6) {
      uVar2 = param_1[-1];
      *puVar6 = *puVar14;
      puVar6[1] = uVar2;
    }
    *puVar14 = uVar9;
    param_1[-1] = (uint)puVar1;
    if (puVar20 < puVar18) {
LAB_71b2f57e:
      FUN_71b2f1d0(puVar6,puVar14,param_3,uStack_34 & 1);
      uStack_34 = 0;
    }
    else {
      iVar5 = FUN_71b34a68(puVar6,puVar14,puVar8);
      puVar1 = (uint *)FUN_71b34a68(param_1,param_2);
      if (puVar1 == (uint *)0x0) {
        if (iVar5 == 0) goto LAB_71b2f57e;
      }
      else {
        param_1 = puVar6;
        param_2 = puVar14;
        if (iVar5 != 0) {
switchD_71b2f65a_caseD_0:
          return puVar1;
        }
      }
    }
  } while( true );
}


// =========================================================================
// Function: uQoarpASqIlKypNNUzZJFcauvaROfIGCQLkszvkidpmgqaSAz
// Entry: 0x71b2f966 | Size: 20 bytes
// =========================================================================

void uQoarpASqIlKypNNUzZJFcauvaROfIGCQLkszvkidpmgqaSAz(int param_1,int param_2)

{
  FUN_71b2f9b0(param_1,param_2,LZCOUNT(param_2 - param_1 >> 2) * -2 + 0x3e,1);
  return;
}


// =========================================================================
// Function: FUN_71b2f9b0
// Entry: 0x71b2f9b0 | Size: 1626 bytes
// =========================================================================

void FUN_71b2f9b0(float *param_1,float *param_2,int param_3,uint param_4)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 uStack_25;
  
LAB_71b2f9c2:
  do {
    pfVar6 = param_1;
    uVar4 = (int)param_2 - (int)pfVar6 >> 2;
    switch(uVar4) {
    case 0:
    case 1:
      goto switchD_71b2fdc2_caseD_0;
    case 2:
      fVar9 = *pfVar6;
      if ((int)((uint)(param_2[-1] < fVar9) << 0x1f) < 0) {
        *pfVar6 = param_2[-1];
        param_2[-1] = fVar9;
        return;
      }
      return;
    case 3:
      fVar9 = *pfVar6;
      fVar10 = pfVar6[1];
      fVar11 = param_2[-1];
      if (-1 < (int)((uint)(fVar10 < fVar9) << 0x1f)) {
        if (-1 < (int)((uint)(fVar11 < fVar10) << 0x1f)) {
          return;
        }
        pfVar6[1] = fVar11;
        param_2[-1] = fVar10;
        fVar9 = *pfVar6;
        if ((int)((uint)(pfVar6[1] < fVar9) << 0x1f) < 0) {
          *pfVar6 = pfVar6[1];
          pfVar6[1] = fVar9;
          return;
        }
        return;
      }
      if ((int)((uint)(fVar11 < fVar10) << 0x1f) < 0) {
        *pfVar6 = fVar11;
        param_2[-1] = fVar9;
        return;
      }
      *pfVar6 = fVar10;
      pfVar6[1] = fVar9;
      if ((int)((uint)(param_2[-1] < fVar9) << 0x1f) < 0) {
        pfVar6[1] = param_2[-1];
        param_2[-1] = fVar9;
        return;
      }
      return;
    case 4:
      fVar11 = *pfVar6;
      pfVar1 = pfVar6 + 2;
      fVar9 = pfVar6[1];
      pfVar7 = pfVar6 + 1;
      fVar10 = pfVar6[2];
      pfVar3 = pfVar6;
      if ((int)((uint)(fVar9 < fVar11) << 0x1f) < 0) {
        pfVar8 = pfVar1;
        fVar13 = fVar11;
        if (-1 < (int)((uint)(fVar10 < fVar9) << 0x1f)) {
          *pfVar6 = fVar9;
          pfVar6[1] = fVar11;
          fVar9 = fVar10;
          pfVar3 = pfVar7;
          goto joined_r0x71b2ff5c;
        }
      }
      else {
        fVar12 = fVar10;
        if (-1 < (int)((uint)(fVar10 < fVar9) << 0x1f)) goto LAB_71b2ffa8;
        *pfVar1 = fVar9;
        *pfVar7 = fVar10;
        fVar13 = fVar9;
        pfVar8 = pfVar7;
joined_r0x71b2ff5c:
        fVar12 = fVar9;
        if (-1 < (int)((uint)(fVar10 < fVar11) << 0x1f)) goto LAB_71b2ffa8;
      }
      *pfVar8 = fVar11;
      *pfVar3 = fVar10;
      fVar12 = fVar13;
LAB_71b2ffa8:
      if (-1 < (int)((uint)(param_2[-1] < fVar12) << 0x1f)) {
        return;
      }
      *pfVar1 = param_2[-1];
      param_2[-1] = fVar12;
      fVar10 = *pfVar7;
      fVar9 = *pfVar1;
      if ((int)((uint)(fVar9 < fVar10) << 0x1f) < 0) {
        fVar11 = *pfVar6;
        pfVar6[1] = fVar9;
        pfVar6[2] = fVar10;
        if ((int)((uint)(fVar9 < fVar11) << 0x1f) < 0) {
          *pfVar6 = fVar9;
          pfVar6[1] = fVar11;
          return;
        }
        return;
      }
      return;
    case 5:
      FUN_71b3551e(pfVar6,pfVar6 + 1,pfVar6 + 2,pfVar6 + 3,param_2 + -1);
      goto switchD_71b2fdc2_caseD_0;
    }
    if ((int)uVar4 < 0x18) {
      pfVar3 = pfVar6 + 1;
      if ((param_4 & 1) == 0) {
        if (pfVar3 != param_2 && pfVar6 != param_2) {
          do {
            pfVar1 = pfVar3;
            fVar10 = *pfVar6;
            fVar9 = pfVar6[1];
            pfVar6 = pfVar1;
            if ((int)((uint)(fVar9 < fVar10) << 0x1f) < 0) {
              do {
                *pfVar6 = fVar10;
                fVar10 = pfVar6[-2];
                pfVar6 = pfVar6 + -1;
              } while ((int)((uint)(fVar9 < fVar10) << 0x1f) < 0);
              *pfVar6 = fVar9;
            }
            pfVar3 = pfVar1 + 1;
            pfVar6 = pfVar1;
          } while (pfVar1 + 1 != param_2);
          return;
        }
        return;
      }
      if (pfVar3 == param_2 || pfVar6 == param_2) {
        return;
      }
      iVar2 = 4;
      pfVar1 = pfVar6;
      do {
        pfVar7 = pfVar3;
        fVar10 = *pfVar1;
        fVar9 = pfVar1[1];
        iVar5 = iVar2;
        if ((int)((uint)(fVar9 < fVar10) << 0x1f) < 0) {
          do {
            *(float *)((int)pfVar6 + iVar5) = fVar10;
            pfVar3 = pfVar6;
            if (iVar5 == 4) goto LAB_71b2feb0;
            fVar10 = ((float *)((int)pfVar6 + iVar5))[-2];
            iVar5 = iVar5 + -4;
          } while ((int)((uint)(fVar9 < fVar10) << 0x1f) < 0);
          pfVar3 = (float *)(iVar5 + (int)pfVar6);
LAB_71b2feb0:
          *pfVar3 = fVar9;
        }
        pfVar3 = pfVar7 + 1;
        iVar2 = iVar2 + 4;
        pfVar1 = pfVar7;
        if (pfVar3 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (pfVar6 != param_2) {
        FUN_71b35670(pfVar6,param_2,param_2,&uStack_25);
        return;
      }
      return;
    }
    fVar9 = param_2[-1];
    pfVar3 = pfVar6 + (uVar4 >> 1);
    if (uVar4 < 0x81) {
      fVar10 = *pfVar3;
      fVar11 = *pfVar6;
      if ((int)((uint)(fVar11 < fVar10) << 0x1f) < 0) {
        if ((int)((uint)(fVar9 < fVar11) << 0x1f) < 0) {
          *pfVar3 = fVar9;
        }
        else {
          *pfVar3 = fVar11;
          *pfVar6 = fVar10;
          if (-1 < (int)((uint)(param_2[-1] < fVar10) << 0x1f)) goto LAB_71b2fc28;
          *pfVar6 = param_2[-1];
        }
        param_2[-1] = fVar10;
      }
      else if ((int)((uint)(fVar9 < fVar11) << 0x1f) < 0) {
        *pfVar6 = fVar9;
        param_2[-1] = fVar11;
        fVar9 = *pfVar3;
        if ((int)((uint)(*pfVar6 < fVar9) << 0x1f) < 0) {
          *pfVar3 = *pfVar6;
          *pfVar6 = fVar9;
        }
      }
    }
    else {
      fVar10 = *pfVar6;
      fVar11 = *pfVar3;
      if ((int)((uint)(fVar11 < fVar10) << 0x1f) < 0) {
        if ((int)((uint)(fVar9 < fVar11) << 0x1f) < 0) {
          *pfVar6 = fVar9;
        }
        else {
          *pfVar6 = fVar11;
          *pfVar3 = fVar10;
          if (-1 < (int)((uint)(param_2[-1] < fVar10) << 0x1f)) goto LAB_71b2faac;
          *pfVar3 = param_2[-1];
        }
        param_2[-1] = fVar10;
      }
      else if ((int)((uint)(fVar9 < fVar11) << 0x1f) < 0) {
        *pfVar3 = fVar9;
        param_2[-1] = fVar11;
        fVar9 = *pfVar6;
        if ((int)((uint)(*pfVar3 < fVar9) << 0x1f) < 0) {
          *pfVar6 = *pfVar3;
          *pfVar3 = fVar9;
        }
      }
LAB_71b2faac:
      fVar9 = pfVar6[1];
      pfVar1 = pfVar3 + -1;
      fVar11 = pfVar3[-1];
      fVar10 = param_2[-2];
      if ((int)((uint)(fVar11 < fVar9) << 0x1f) < 0) {
        if ((int)((uint)(fVar10 < fVar11) << 0x1f) < 0) {
          pfVar6[1] = fVar10;
        }
        else {
          pfVar6[1] = fVar11;
          *pfVar1 = fVar9;
          if (-1 < (int)((uint)(param_2[-2] < fVar9) << 0x1f)) goto LAB_71b2fb42;
          *pfVar1 = param_2[-2];
        }
        param_2[-2] = fVar9;
      }
      else if ((int)((uint)(fVar10 < fVar11) << 0x1f) < 0) {
        *pfVar1 = fVar10;
        param_2[-2] = fVar11;
        fVar9 = pfVar6[1];
        if ((int)((uint)(*pfVar1 < fVar9) << 0x1f) < 0) {
          pfVar6[1] = *pfVar1;
          *pfVar1 = fVar9;
        }
      }
LAB_71b2fb42:
      fVar9 = pfVar6[2];
      pfVar7 = pfVar3 + 1;
      fVar11 = pfVar3[1];
      fVar10 = param_2[-3];
      if ((int)((uint)(fVar11 < fVar9) << 0x1f) < 0) {
        if ((int)((uint)(fVar10 < fVar11) << 0x1f) < 0) {
          pfVar6[2] = fVar10;
        }
        else {
          pfVar6[2] = fVar11;
          *pfVar7 = fVar9;
          if (-1 < (int)((uint)(param_2[-3] < fVar9) << 0x1f)) goto LAB_71b2fbb6;
          *pfVar7 = param_2[-3];
        }
        param_2[-3] = fVar9;
      }
      else if ((int)((uint)(fVar10 < fVar11) << 0x1f) < 0) {
        *pfVar7 = fVar10;
        param_2[-3] = fVar11;
        fVar9 = pfVar6[2];
        if ((int)((uint)(*pfVar7 < fVar9) << 0x1f) < 0) {
          pfVar6[2] = *pfVar7;
          *pfVar7 = fVar9;
        }
      }
LAB_71b2fbb6:
      fVar11 = *pfVar1;
      fVar9 = *pfVar3;
      fVar10 = *pfVar7;
      if ((int)((uint)(fVar9 < fVar11) << 0x1f) < 0) {
        fVar12 = fVar9;
        if (-1 < (int)((uint)(fVar10 < fVar9) << 0x1f)) {
          *pfVar1 = fVar9;
          *pfVar3 = fVar11;
          pfVar1 = pfVar3;
          fVar9 = fVar11;
          fVar12 = fVar10;
          if (-1 < (int)((uint)(fVar10 < fVar11) << 0x1f)) goto LAB_71b2fc1e;
        }
LAB_71b2fc16:
        *pfVar7 = fVar11;
        *pfVar1 = fVar10;
        fVar9 = fVar12;
      }
      else if ((int)((uint)(fVar10 < fVar9) << 0x1f) < 0) {
        *pfVar7 = fVar9;
        *pfVar3 = fVar10;
        pfVar7 = pfVar3;
        fVar9 = fVar10;
        fVar12 = fVar11;
        if ((int)((uint)(fVar10 < fVar11) << 0x1f) < 0) goto LAB_71b2fc16;
      }
LAB_71b2fc1e:
      fVar10 = *pfVar6;
      *pfVar6 = fVar9;
      *pfVar3 = fVar10;
    }
LAB_71b2fc28:
    param_3 = param_3 + -1;
    fVar9 = *pfVar6;
    param_1 = pfVar6;
    if (((param_4 & 1) == 0) && (-1 < (int)((uint)(pfVar6[-1] < fVar9) << 0x1f))) {
      if ((int)((uint)(fVar9 < param_2[-1]) << 0x1f) < 0) {
        do {
          pfVar3 = param_1 + 1;
          param_1 = param_1 + 1;
        } while (-1 < (int)((uint)(fVar9 < *pfVar3) << 0x1f));
      }
      else {
        do {
          param_1 = param_1 + 1;
          if (param_2 <= param_1) break;
        } while (-1 < (int)((uint)(fVar9 < *param_1) << 0x1f));
      }
      pfVar3 = param_2;
      if (param_1 < param_2) {
        do {
          pfVar1 = pfVar3 + -1;
          pfVar3 = pfVar3 + -1;
        } while ((int)((uint)(fVar9 < *pfVar1) << 0x1f) < 0);
      }
      if (param_1 < pfVar3) {
        fVar11 = *pfVar3;
        fVar10 = *param_1;
        do {
          *param_1 = fVar11;
          *pfVar3 = fVar10;
          do {
            fVar10 = param_1[1];
            param_1 = param_1 + 1;
          } while (-1 < (int)((uint)(fVar9 < fVar10) << 0x1f));
          do {
            fVar11 = pfVar3[-1];
            pfVar3 = pfVar3 + -1;
          } while ((int)((uint)(fVar9 < fVar11) << 0x1f) < 0);
        } while (param_1 < pfVar3);
      }
      pfVar3 = param_1 + -1;
      param_4 = 0;
      if (pfVar3 != pfVar6) {
        *pfVar6 = *pfVar3;
      }
      *pfVar3 = fVar9;
      goto LAB_71b2f9c2;
    }
    iVar2 = 0;
    do {
      iVar5 = iVar2 + 4;
      fVar10 = *(float *)((int)pfVar6 + iVar2 + 4);
      iVar2 = iVar5;
    } while ((int)((uint)(fVar10 < fVar9) << 0x1f) < 0);
    pfVar1 = (float *)((int)pfVar6 + iVar5);
    pfVar3 = param_2;
    if (iVar5 == 4) {
      do {
        if (pfVar3 <= pfVar1) break;
        pfVar7 = pfVar3 + -1;
        pfVar3 = pfVar3 + -1;
      } while (-1 < (int)((uint)(*pfVar7 < fVar9) << 0x1f));
    }
    else {
      do {
        pfVar7 = pfVar3 + -1;
        pfVar3 = pfVar3 + -1;
      } while (-1 < (int)((uint)(*pfVar7 < fVar9) << 0x1f));
    }
    param_1 = pfVar1;
    if (pfVar1 < pfVar3) {
      fVar11 = *pfVar3;
      pfVar7 = pfVar3;
      do {
        *param_1 = fVar11;
        *pfVar7 = fVar10;
        do {
          fVar10 = param_1[1];
          param_1 = param_1 + 1;
        } while ((int)((uint)(fVar10 < fVar9) << 0x1f) < 0);
        do {
          fVar11 = pfVar7[-1];
          pfVar7 = pfVar7 + -1;
        } while (-1 < (int)((uint)(fVar11 < fVar9) << 0x1f));
      } while (param_1 < pfVar7);
    }
    pfVar7 = param_1 + -1;
    if (pfVar7 != pfVar6) {
      *pfVar6 = *pfVar7;
    }
    *pfVar7 = fVar9;
    if (pfVar1 < pfVar3) {
LAB_71b2fcf8:
      FUN_71b2f9b0(pfVar6,pfVar7,param_3,param_4 & 1);
      param_4 = 0;
    }
    else {
      iVar2 = FUN_71b35270(pfVar6,pfVar7);
      iVar5 = FUN_71b35270(param_1,param_2);
      if (iVar5 == 0) {
        if (iVar2 == 0) goto LAB_71b2fcf8;
      }
      else {
        param_1 = pfVar6;
        param_2 = pfVar7;
        if (iVar2 != 0) {
switchD_71b2fdc2_caseD_0:
          return;
        }
      }
    }
  } while( true );
}


// =========================================================================
// Function: TySTONKbXTSKoqCXPhspS_pfhCeAdMumgShnANBCZVzFTmTIo
// Entry: 0x71b300ba | Size: 20 bytes
// =========================================================================

void TySTONKbXTSKoqCXPhspS_pfhCeAdMumgShnANBCZVzFTmTIo(int param_1,int param_2)

{
  FUN_71b30104(param_1,param_2,LZCOUNT(param_2 - param_1 >> 3) * -2 + 0x3e,1);
  return;
}


// =========================================================================
// Function: FUN_71b30104
// Entry: 0x71b30104 | Size: 1652 bytes
// =========================================================================

void FUN_71b30104(double *param_1,double *param_2,int param_3,uint param_4)

{
  double *pdVar1;
  int iVar2;
  double *pdVar3;
  uint uVar4;
  int iVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 uStack_25;
  
LAB_71b30116:
  do {
    pdVar6 = param_1;
    uVar4 = (int)param_2 - (int)pdVar6 >> 3;
    switch(uVar4) {
    case 0:
    case 1:
      goto switchD_71b30538_caseD_0;
    case 2:
      dVar9 = *pdVar6;
      if (-1 < (int)((uint)(param_2[-1] < dVar9) << 0x1f)) {
        return;
      }
      *pdVar6 = param_2[-1];
      param_2[-1] = dVar9;
      return;
    case 3:
      dVar9 = *pdVar6;
      dVar10 = pdVar6[1];
      dVar11 = param_2[-1];
      if (-1 < (int)((uint)(dVar10 < dVar9) << 0x1f)) {
        if (-1 < (int)((uint)(dVar11 < dVar10) << 0x1f)) {
          return;
        }
        pdVar6[1] = dVar11;
        param_2[-1] = dVar10;
        dVar9 = *pdVar6;
        if (-1 < (int)((uint)(pdVar6[1] < dVar9) << 0x1f)) {
          return;
        }
        *pdVar6 = pdVar6[1];
        pdVar6[1] = dVar9;
        return;
      }
      if ((int)((uint)(dVar11 < dVar10) << 0x1f) < 0) {
        *pdVar6 = dVar11;
        param_2[-1] = dVar9;
        return;
      }
      *pdVar6 = dVar10;
      pdVar6[1] = dVar9;
      if (-1 < (int)((uint)(param_2[-1] < dVar9) << 0x1f)) {
        return;
      }
      pdVar6[1] = param_2[-1];
      param_2[-1] = dVar9;
      return;
    case 4:
      dVar11 = *pdVar6;
      dVar9 = pdVar6[1];
      pdVar1 = pdVar6 + 2;
      pdVar7 = pdVar6 + 1;
      dVar10 = pdVar6[2];
      pdVar3 = pdVar6;
      if ((int)((uint)(dVar9 < dVar11) << 0x1f) < 0) {
        pdVar8 = pdVar1;
        dVar13 = dVar11;
        if (-1 < (int)((uint)(dVar10 < dVar9) << 0x1f)) {
          *pdVar6 = dVar9;
          pdVar6[1] = dVar11;
          dVar9 = dVar10;
          pdVar3 = pdVar7;
          goto joined_r0x71b306c8;
        }
      }
      else {
        dVar12 = dVar10;
        if (-1 < (int)((uint)(dVar10 < dVar9) << 0x1f)) goto LAB_71b30716;
        *pdVar1 = dVar9;
        *pdVar7 = dVar10;
        dVar13 = dVar9;
        pdVar8 = pdVar7;
joined_r0x71b306c8:
        dVar12 = dVar9;
        if (-1 < (int)((uint)(dVar10 < dVar11) << 0x1f)) goto LAB_71b30716;
      }
      *pdVar8 = dVar11;
      *pdVar3 = dVar10;
      dVar12 = dVar13;
LAB_71b30716:
      if (-1 < (int)((uint)(param_2[-1] < dVar12) << 0x1f)) {
        return;
      }
      *pdVar1 = param_2[-1];
      param_2[-1] = dVar12;
      dVar10 = *pdVar7;
      dVar9 = *pdVar1;
      if (-1 < (int)((uint)(dVar9 < dVar10) << 0x1f)) {
        return;
      }
      dVar11 = *pdVar6;
      pdVar6[1] = dVar9;
      pdVar6[2] = dVar10;
      if (-1 < (int)((uint)(dVar9 < dVar11) << 0x1f)) {
        return;
      }
      *pdVar6 = dVar9;
      pdVar6[1] = dVar11;
      return;
    case 5:
      FUN_71b35b80(pdVar6,pdVar6 + 1,pdVar6 + 2,pdVar6 + 3,param_2 + -1);
      goto switchD_71b30538_caseD_0;
    }
    if ((int)uVar4 < 0x18) {
      pdVar3 = pdVar6 + 1;
      if ((param_4 & 1) == 0) {
        if (pdVar3 == param_2 || pdVar6 == param_2) {
          return;
        }
        do {
          pdVar1 = pdVar3;
          dVar10 = *pdVar6;
          dVar9 = pdVar6[1];
          pdVar6 = pdVar1;
          if ((int)((uint)(dVar9 < dVar10) << 0x1f) < 0) {
            do {
              *pdVar6 = dVar10;
              dVar10 = pdVar6[-2];
              pdVar6 = pdVar6 + -1;
            } while ((int)((uint)(dVar9 < dVar10) << 0x1f) < 0);
            *pdVar6 = dVar9;
          }
          pdVar3 = pdVar1 + 1;
          pdVar6 = pdVar1;
        } while (pdVar1 + 1 != param_2);
        return;
      }
      if (pdVar3 == param_2 || pdVar6 == param_2) {
        return;
      }
      iVar2 = 8;
      pdVar1 = pdVar6;
      do {
        pdVar7 = pdVar3;
        dVar10 = *pdVar1;
        dVar9 = pdVar1[1];
        iVar5 = iVar2;
        if ((int)((uint)(dVar9 < dVar10) << 0x1f) < 0) {
          do {
            *(double *)((int)pdVar6 + iVar5) = dVar10;
            pdVar3 = pdVar6;
            if (iVar5 == 8) goto LAB_71b3061e;
            dVar10 = ((double *)((int)pdVar6 + iVar5))[-2];
            iVar5 = iVar5 + -8;
          } while ((int)((uint)(dVar9 < dVar10) << 0x1f) < 0);
          pdVar3 = (double *)(iVar5 + (int)pdVar6);
LAB_71b3061e:
          *pdVar3 = dVar9;
        }
        pdVar3 = pdVar7 + 1;
        iVar2 = iVar2 + 8;
        pdVar1 = pdVar7;
        if (pdVar3 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (pdVar6 == param_2) {
        return;
      }
      FUN_71b35cd2(pdVar6,param_2,param_2,&uStack_25);
      return;
    }
    dVar9 = param_2[-1];
    pdVar3 = pdVar6 + (uVar4 >> 1);
    if (uVar4 < 0x81) {
      dVar10 = *pdVar3;
      dVar11 = *pdVar6;
      if ((int)((uint)(dVar11 < dVar10) << 0x1f) < 0) {
        if ((int)((uint)(dVar9 < dVar11) << 0x1f) < 0) {
          *pdVar3 = dVar9;
        }
        else {
          *pdVar3 = dVar11;
          *pdVar6 = dVar10;
          if (-1 < (int)((uint)(param_2[-1] < dVar10) << 0x1f)) goto LAB_71b30384;
          *pdVar6 = param_2[-1];
        }
        param_2[-1] = dVar10;
      }
      else if ((int)((uint)(dVar9 < dVar11) << 0x1f) < 0) {
        *pdVar6 = dVar9;
        param_2[-1] = dVar11;
        dVar9 = *pdVar3;
        if ((int)((uint)(*pdVar6 < dVar9) << 0x1f) < 0) {
          *pdVar3 = *pdVar6;
          *pdVar6 = dVar9;
        }
      }
    }
    else {
      dVar10 = *pdVar6;
      dVar11 = *pdVar3;
      if ((int)((uint)(dVar11 < dVar10) << 0x1f) < 0) {
        if ((int)((uint)(dVar9 < dVar11) << 0x1f) < 0) {
          *pdVar6 = dVar9;
        }
        else {
          *pdVar6 = dVar11;
          *pdVar3 = dVar10;
          if (-1 < (int)((uint)(param_2[-1] < dVar10) << 0x1f)) goto LAB_71b30200;
          *pdVar3 = param_2[-1];
        }
        param_2[-1] = dVar10;
      }
      else if ((int)((uint)(dVar9 < dVar11) << 0x1f) < 0) {
        *pdVar3 = dVar9;
        param_2[-1] = dVar11;
        dVar9 = *pdVar6;
        if ((int)((uint)(*pdVar3 < dVar9) << 0x1f) < 0) {
          *pdVar6 = *pdVar3;
          *pdVar3 = dVar9;
        }
      }
LAB_71b30200:
      dVar9 = pdVar6[1];
      pdVar1 = pdVar3 + -1;
      dVar11 = pdVar3[-1];
      dVar10 = param_2[-2];
      if ((int)((uint)(dVar11 < dVar9) << 0x1f) < 0) {
        if ((int)((uint)(dVar10 < dVar11) << 0x1f) < 0) {
          pdVar6[1] = dVar10;
        }
        else {
          pdVar6[1] = dVar11;
          *pdVar1 = dVar9;
          if (-1 < (int)((uint)(param_2[-2] < dVar9) << 0x1f)) goto LAB_71b30298;
          *pdVar1 = param_2[-2];
        }
        param_2[-2] = dVar9;
      }
      else if ((int)((uint)(dVar10 < dVar11) << 0x1f) < 0) {
        *pdVar1 = dVar10;
        param_2[-2] = dVar11;
        dVar9 = pdVar6[1];
        if ((int)((uint)(*pdVar1 < dVar9) << 0x1f) < 0) {
          pdVar6[1] = *pdVar1;
          *pdVar1 = dVar9;
        }
      }
LAB_71b30298:
      dVar9 = pdVar6[2];
      pdVar7 = pdVar3 + 1;
      dVar11 = pdVar3[1];
      dVar10 = param_2[-3];
      if ((int)((uint)(dVar11 < dVar9) << 0x1f) < 0) {
        if ((int)((uint)(dVar10 < dVar11) << 0x1f) < 0) {
          pdVar6[2] = dVar10;
        }
        else {
          pdVar6[2] = dVar11;
          *pdVar7 = dVar9;
          if (-1 < (int)((uint)(param_2[-3] < dVar9) << 0x1f)) goto LAB_71b3030e;
          *pdVar7 = param_2[-3];
        }
        param_2[-3] = dVar9;
      }
      else if ((int)((uint)(dVar10 < dVar11) << 0x1f) < 0) {
        *pdVar7 = dVar10;
        param_2[-3] = dVar11;
        dVar9 = pdVar6[2];
        if ((int)((uint)(*pdVar7 < dVar9) << 0x1f) < 0) {
          pdVar6[2] = *pdVar7;
          *pdVar7 = dVar9;
        }
      }
LAB_71b3030e:
      dVar11 = *pdVar1;
      dVar9 = *pdVar3;
      dVar10 = *pdVar7;
      if ((int)((uint)(dVar9 < dVar11) << 0x1f) < 0) {
        dVar12 = dVar9;
        if (-1 < (int)((uint)(dVar10 < dVar9) << 0x1f)) {
          *pdVar1 = dVar9;
          *pdVar3 = dVar11;
          pdVar1 = pdVar3;
          dVar9 = dVar11;
          dVar12 = dVar10;
          if (-1 < (int)((uint)(dVar10 < dVar11) << 0x1f)) goto LAB_71b30378;
        }
LAB_71b30370:
        *pdVar7 = dVar11;
        *pdVar1 = dVar10;
        dVar9 = dVar12;
      }
      else if ((int)((uint)(dVar10 < dVar9) << 0x1f) < 0) {
        *pdVar7 = dVar9;
        *pdVar3 = dVar10;
        pdVar7 = pdVar3;
        dVar9 = dVar10;
        dVar12 = dVar11;
        if ((int)((uint)(dVar10 < dVar11) << 0x1f) < 0) goto LAB_71b30370;
      }
LAB_71b30378:
      dVar10 = *pdVar6;
      *pdVar6 = dVar9;
      *pdVar3 = dVar10;
    }
LAB_71b30384:
    param_3 = param_3 + -1;
    dVar9 = *pdVar6;
    param_1 = pdVar6;
    if (((param_4 & 1) != 0) || ((int)((uint)(pdVar6[-1] < dVar9) << 0x1f) < 0)) {
      iVar2 = 0;
      do {
        iVar5 = iVar2 + 8;
        dVar10 = *(double *)((int)pdVar6 + iVar2 + 8);
        iVar2 = iVar5;
      } while ((int)((uint)(dVar10 < dVar9) << 0x1f) < 0);
      pdVar1 = (double *)((int)pdVar6 + iVar5);
      pdVar3 = param_2;
      if (iVar5 == 8) {
        do {
          if (pdVar3 <= pdVar1) break;
          pdVar7 = pdVar3 + -1;
          pdVar3 = pdVar3 + -1;
        } while (-1 < (int)((uint)(*pdVar7 < dVar9) << 0x1f));
      }
      else {
        do {
          pdVar7 = pdVar3 + -1;
          pdVar3 = pdVar3 + -1;
        } while (-1 < (int)((uint)(*pdVar7 < dVar9) << 0x1f));
      }
      param_1 = pdVar1;
      if (pdVar1 < pdVar3) {
        dVar11 = *pdVar3;
        pdVar7 = pdVar3;
        do {
          *param_1 = dVar11;
          *pdVar7 = dVar10;
          do {
            dVar10 = param_1[1];
            param_1 = param_1 + 1;
          } while ((int)((uint)(dVar10 < dVar9) << 0x1f) < 0);
          do {
            dVar11 = pdVar7[-1];
            pdVar7 = pdVar7 + -1;
          } while (-1 < (int)((uint)(dVar11 < dVar9) << 0x1f));
        } while (param_1 < pdVar7);
      }
      pdVar7 = param_1 + -1;
      if (pdVar7 != pdVar6) {
        *pdVar6 = *pdVar7;
      }
      *pdVar7 = dVar9;
      if (pdVar1 < pdVar3) {
LAB_71b30466:
        FUN_71b30104(pdVar6,pdVar7,param_3,param_4 & 1);
        param_4 = 0;
      }
      else {
        iVar2 = FUN_71b358dc(pdVar6,pdVar7);
        iVar5 = FUN_71b358dc(param_1,param_2);
        if (iVar5 == 0) {
          if (iVar2 == 0) goto LAB_71b30466;
        }
        else {
          param_1 = pdVar6;
          param_2 = pdVar7;
          if (iVar2 != 0) {
switchD_71b30538_caseD_0:
            return;
          }
        }
      }
      goto LAB_71b30116;
    }
    if ((int)((uint)(dVar9 < param_2[-1]) << 0x1f) < 0) {
      do {
        pdVar3 = param_1 + 1;
        param_1 = param_1 + 1;
      } while (-1 < (int)((uint)(dVar9 < *pdVar3) << 0x1f));
    }
    else {
      do {
        param_1 = param_1 + 1;
        if (param_2 <= param_1) break;
      } while (-1 < (int)((uint)(dVar9 < *param_1) << 0x1f));
    }
    pdVar3 = param_2;
    if (param_1 < param_2) {
      do {
        pdVar1 = pdVar3 + -1;
        pdVar3 = pdVar3 + -1;
      } while ((int)((uint)(dVar9 < *pdVar1) << 0x1f) < 0);
    }
    if (param_1 < pdVar3) {
      dVar11 = *pdVar3;
      dVar10 = *param_1;
      do {
        *param_1 = dVar11;
        *pdVar3 = dVar10;
        do {
          dVar10 = param_1[1];
          param_1 = param_1 + 1;
        } while (-1 < (int)((uint)(dVar9 < dVar10) << 0x1f));
        do {
          dVar11 = pdVar3[-1];
          pdVar3 = pdVar3 + -1;
        } while ((int)((uint)(dVar9 < dVar11) << 0x1f) < 0);
      } while (param_1 < pdVar3);
    }
    pdVar3 = param_1 + -1;
    param_4 = 0;
    if (pdVar3 != pdVar6) {
      *pdVar6 = *pdVar3;
    }
    *pdVar3 = dVar9;
  } while( true );
}


// =========================================================================
// Function: qhCaFQcYt_YVPypNLlRGsWkRCvpysWbzjKaMBcANQKriCdMqD
// Entry: 0x71b30828 | Size: 20 bytes
// =========================================================================

void qhCaFQcYt_YVPypNLlRGsWkRCvpysWbzjKaMBcANQKriCdMqD(int param_1,int param_2)

{
  FUN_71b30870(param_1,param_2,LZCOUNT(param_2 - param_1 >> 3) * -2 + 0x3e,1);
  return;
}


// =========================================================================
// Function: FUN_71b30870
// Entry: 0x71b30870 | Size: 1652 bytes
// =========================================================================

void FUN_71b30870(double *param_1,double *param_2,int param_3,uint param_4)

{
  double *pdVar1;
  int iVar2;
  double *pdVar3;
  uint uVar4;
  int iVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 uStack_25;
  
LAB_71b30882:
  do {
    pdVar6 = param_1;
    uVar4 = (int)param_2 - (int)pdVar6 >> 3;
    switch(uVar4) {
    case 0:
    case 1:
      goto switchD_71b30ca4_caseD_0;
    case 2:
      dVar9 = *pdVar6;
      if (-1 < (int)((uint)(param_2[-1] < dVar9) << 0x1f)) {
        return;
      }
      *pdVar6 = param_2[-1];
      param_2[-1] = dVar9;
      return;
    case 3:
      dVar9 = *pdVar6;
      dVar10 = pdVar6[1];
      dVar11 = param_2[-1];
      if (-1 < (int)((uint)(dVar10 < dVar9) << 0x1f)) {
        if (-1 < (int)((uint)(dVar11 < dVar10) << 0x1f)) {
          return;
        }
        pdVar6[1] = dVar11;
        param_2[-1] = dVar10;
        dVar9 = *pdVar6;
        if (-1 < (int)((uint)(pdVar6[1] < dVar9) << 0x1f)) {
          return;
        }
        *pdVar6 = pdVar6[1];
        pdVar6[1] = dVar9;
        return;
      }
      if ((int)((uint)(dVar11 < dVar10) << 0x1f) < 0) {
        *pdVar6 = dVar11;
        param_2[-1] = dVar9;
        return;
      }
      *pdVar6 = dVar10;
      pdVar6[1] = dVar9;
      if (-1 < (int)((uint)(param_2[-1] < dVar9) << 0x1f)) {
        return;
      }
      pdVar6[1] = param_2[-1];
      param_2[-1] = dVar9;
      return;
    case 4:
      dVar11 = *pdVar6;
      dVar9 = pdVar6[1];
      pdVar1 = pdVar6 + 2;
      pdVar7 = pdVar6 + 1;
      dVar10 = pdVar6[2];
      pdVar3 = pdVar6;
      if ((int)((uint)(dVar9 < dVar11) << 0x1f) < 0) {
        pdVar8 = pdVar1;
        dVar13 = dVar11;
        if (-1 < (int)((uint)(dVar10 < dVar9) << 0x1f)) {
          *pdVar6 = dVar9;
          pdVar6[1] = dVar11;
          dVar9 = dVar10;
          pdVar3 = pdVar7;
          goto joined_r0x71b30e34;
        }
      }
      else {
        dVar12 = dVar10;
        if (-1 < (int)((uint)(dVar10 < dVar9) << 0x1f)) goto LAB_71b30e82;
        *pdVar1 = dVar9;
        *pdVar7 = dVar10;
        dVar13 = dVar9;
        pdVar8 = pdVar7;
joined_r0x71b30e34:
        dVar12 = dVar9;
        if (-1 < (int)((uint)(dVar10 < dVar11) << 0x1f)) goto LAB_71b30e82;
      }
      *pdVar8 = dVar11;
      *pdVar3 = dVar10;
      dVar12 = dVar13;
LAB_71b30e82:
      if (-1 < (int)((uint)(param_2[-1] < dVar12) << 0x1f)) {
        return;
      }
      *pdVar1 = param_2[-1];
      param_2[-1] = dVar12;
      dVar10 = *pdVar7;
      dVar9 = *pdVar1;
      if (-1 < (int)((uint)(dVar9 < dVar10) << 0x1f)) {
        return;
      }
      dVar11 = *pdVar6;
      pdVar6[1] = dVar9;
      pdVar6[2] = dVar10;
      if (-1 < (int)((uint)(dVar9 < dVar11) << 0x1f)) {
        return;
      }
      *pdVar6 = dVar9;
      pdVar6[1] = dVar11;
      return;
    case 5:
      FUN_71b361e0(pdVar6,pdVar6 + 1,pdVar6 + 2,pdVar6 + 3,param_2 + -1);
      goto switchD_71b30ca4_caseD_0;
    }
    if ((int)uVar4 < 0x18) {
      pdVar3 = pdVar6 + 1;
      if ((param_4 & 1) == 0) {
        if (pdVar3 == param_2 || pdVar6 == param_2) {
          return;
        }
        do {
          pdVar1 = pdVar3;
          dVar10 = *pdVar6;
          dVar9 = pdVar6[1];
          pdVar6 = pdVar1;
          if ((int)((uint)(dVar9 < dVar10) << 0x1f) < 0) {
            do {
              *pdVar6 = dVar10;
              dVar10 = pdVar6[-2];
              pdVar6 = pdVar6 + -1;
            } while ((int)((uint)(dVar9 < dVar10) << 0x1f) < 0);
            *pdVar6 = dVar9;
          }
          pdVar3 = pdVar1 + 1;
          pdVar6 = pdVar1;
        } while (pdVar1 + 1 != param_2);
        return;
      }
      if (pdVar3 == param_2 || pdVar6 == param_2) {
        return;
      }
      iVar2 = 8;
      pdVar1 = pdVar6;
      do {
        pdVar7 = pdVar3;
        dVar10 = *pdVar1;
        dVar9 = pdVar1[1];
        iVar5 = iVar2;
        if ((int)((uint)(dVar9 < dVar10) << 0x1f) < 0) {
          do {
            *(double *)((int)pdVar6 + iVar5) = dVar10;
            pdVar3 = pdVar6;
            if (iVar5 == 8) goto LAB_71b30d8a;
            dVar10 = ((double *)((int)pdVar6 + iVar5))[-2];
            iVar5 = iVar5 + -8;
          } while ((int)((uint)(dVar9 < dVar10) << 0x1f) < 0);
          pdVar3 = (double *)(iVar5 + (int)pdVar6);
LAB_71b30d8a:
          *pdVar3 = dVar9;
        }
        pdVar3 = pdVar7 + 1;
        iVar2 = iVar2 + 8;
        pdVar1 = pdVar7;
        if (pdVar3 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (pdVar6 == param_2) {
        return;
      }
      FUN_71b36332(pdVar6,param_2,param_2,&uStack_25);
      return;
    }
    dVar9 = param_2[-1];
    pdVar3 = pdVar6 + (uVar4 >> 1);
    if (uVar4 < 0x81) {
      dVar10 = *pdVar3;
      dVar11 = *pdVar6;
      if ((int)((uint)(dVar11 < dVar10) << 0x1f) < 0) {
        if ((int)((uint)(dVar9 < dVar11) << 0x1f) < 0) {
          *pdVar3 = dVar9;
        }
        else {
          *pdVar3 = dVar11;
          *pdVar6 = dVar10;
          if (-1 < (int)((uint)(param_2[-1] < dVar10) << 0x1f)) goto LAB_71b30af0;
          *pdVar6 = param_2[-1];
        }
        param_2[-1] = dVar10;
      }
      else if ((int)((uint)(dVar9 < dVar11) << 0x1f) < 0) {
        *pdVar6 = dVar9;
        param_2[-1] = dVar11;
        dVar9 = *pdVar3;
        if ((int)((uint)(*pdVar6 < dVar9) << 0x1f) < 0) {
          *pdVar3 = *pdVar6;
          *pdVar6 = dVar9;
        }
      }
    }
    else {
      dVar10 = *pdVar6;
      dVar11 = *pdVar3;
      if ((int)((uint)(dVar11 < dVar10) << 0x1f) < 0) {
        if ((int)((uint)(dVar9 < dVar11) << 0x1f) < 0) {
          *pdVar6 = dVar9;
        }
        else {
          *pdVar6 = dVar11;
          *pdVar3 = dVar10;
          if (-1 < (int)((uint)(param_2[-1] < dVar10) << 0x1f)) goto LAB_71b3096c;
          *pdVar3 = param_2[-1];
        }
        param_2[-1] = dVar10;
      }
      else if ((int)((uint)(dVar9 < dVar11) << 0x1f) < 0) {
        *pdVar3 = dVar9;
        param_2[-1] = dVar11;
        dVar9 = *pdVar6;
        if ((int)((uint)(*pdVar3 < dVar9) << 0x1f) < 0) {
          *pdVar6 = *pdVar3;
          *pdVar3 = dVar9;
        }
      }
LAB_71b3096c:
      dVar9 = pdVar6[1];
      pdVar1 = pdVar3 + -1;
      dVar11 = pdVar3[-1];
      dVar10 = param_2[-2];
      if ((int)((uint)(dVar11 < dVar9) << 0x1f) < 0) {
        if ((int)((uint)(dVar10 < dVar11) << 0x1f) < 0) {
          pdVar6[1] = dVar10;
        }
        else {
          pdVar6[1] = dVar11;
          *pdVar1 = dVar9;
          if (-1 < (int)((uint)(param_2[-2] < dVar9) << 0x1f)) goto LAB_71b30a04;
          *pdVar1 = param_2[-2];
        }
        param_2[-2] = dVar9;
      }
      else if ((int)((uint)(dVar10 < dVar11) << 0x1f) < 0) {
        *pdVar1 = dVar10;
        param_2[-2] = dVar11;
        dVar9 = pdVar6[1];
        if ((int)((uint)(*pdVar1 < dVar9) << 0x1f) < 0) {
          pdVar6[1] = *pdVar1;
          *pdVar1 = dVar9;
        }
      }
LAB_71b30a04:
      dVar9 = pdVar6[2];
      pdVar7 = pdVar3 + 1;
      dVar11 = pdVar3[1];
      dVar10 = param_2[-3];
      if ((int)((uint)(dVar11 < dVar9) << 0x1f) < 0) {
        if ((int)((uint)(dVar10 < dVar11) << 0x1f) < 0) {
          pdVar6[2] = dVar10;
        }
        else {
          pdVar6[2] = dVar11;
          *pdVar7 = dVar9;
          if (-1 < (int)((uint)(param_2[-3] < dVar9) << 0x1f)) goto LAB_71b30a7a;
          *pdVar7 = param_2[-3];
        }
        param_2[-3] = dVar9;
      }
      else if ((int)((uint)(dVar10 < dVar11) << 0x1f) < 0) {
        *pdVar7 = dVar10;
        param_2[-3] = dVar11;
        dVar9 = pdVar6[2];
        if ((int)((uint)(*pdVar7 < dVar9) << 0x1f) < 0) {
          pdVar6[2] = *pdVar7;
          *pdVar7 = dVar9;
        }
      }
LAB_71b30a7a:
      dVar11 = *pdVar1;
      dVar9 = *pdVar3;
      dVar10 = *pdVar7;
      if ((int)((uint)(dVar9 < dVar11) << 0x1f) < 0) {
        dVar12 = dVar9;
        if (-1 < (int)((uint)(dVar10 < dVar9) << 0x1f)) {
          *pdVar1 = dVar9;
          *pdVar3 = dVar11;
          pdVar1 = pdVar3;
          dVar9 = dVar11;
          dVar12 = dVar10;
          if (-1 < (int)((uint)(dVar10 < dVar11) << 0x1f)) goto LAB_71b30ae4;
        }
LAB_71b30adc:
        *pdVar7 = dVar11;
        *pdVar1 = dVar10;
        dVar9 = dVar12;
      }
      else if ((int)((uint)(dVar10 < dVar9) << 0x1f) < 0) {
        *pdVar7 = dVar9;
        *pdVar3 = dVar10;
        pdVar7 = pdVar3;
        dVar9 = dVar10;
        dVar12 = dVar11;
        if ((int)((uint)(dVar10 < dVar11) << 0x1f) < 0) goto LAB_71b30adc;
      }
LAB_71b30ae4:
      dVar10 = *pdVar6;
      *pdVar6 = dVar9;
      *pdVar3 = dVar10;
    }
LAB_71b30af0:
    param_3 = param_3 + -1;
    dVar9 = *pdVar6;
    param_1 = pdVar6;
    if (((param_4 & 1) != 0) || ((int)((uint)(pdVar6[-1] < dVar9) << 0x1f) < 0)) {
      iVar2 = 0;
      do {
        iVar5 = iVar2 + 8;
        dVar10 = *(double *)((int)pdVar6 + iVar2 + 8);
        iVar2 = iVar5;
      } while ((int)((uint)(dVar10 < dVar9) << 0x1f) < 0);
      pdVar1 = (double *)((int)pdVar6 + iVar5);
      pdVar3 = param_2;
      if (iVar5 == 8) {
        do {
          if (pdVar3 <= pdVar1) break;
          pdVar7 = pdVar3 + -1;
          pdVar3 = pdVar3 + -1;
        } while (-1 < (int)((uint)(*pdVar7 < dVar9) << 0x1f));
      }
      else {
        do {
          pdVar7 = pdVar3 + -1;
          pdVar3 = pdVar3 + -1;
        } while (-1 < (int)((uint)(*pdVar7 < dVar9) << 0x1f));
      }
      param_1 = pdVar1;
      if (pdVar1 < pdVar3) {
        dVar11 = *pdVar3;
        pdVar7 = pdVar3;
        do {
          *param_1 = dVar11;
          *pdVar7 = dVar10;
          do {
            dVar10 = param_1[1];
            param_1 = param_1 + 1;
          } while ((int)((uint)(dVar10 < dVar9) << 0x1f) < 0);
          do {
            dVar11 = pdVar7[-1];
            pdVar7 = pdVar7 + -1;
          } while (-1 < (int)((uint)(dVar11 < dVar9) << 0x1f));
        } while (param_1 < pdVar7);
      }
      pdVar7 = param_1 + -1;
      if (pdVar7 != pdVar6) {
        *pdVar6 = *pdVar7;
      }
      *pdVar7 = dVar9;
      if (pdVar1 < pdVar3) {
LAB_71b30bd2:
        FUN_71b30870(pdVar6,pdVar7,param_3,param_4 & 1);
        param_4 = 0;
      }
      else {
        iVar2 = FUN_71b35f3c(pdVar6,pdVar7);
        iVar5 = FUN_71b35f3c(param_1,param_2);
        if (iVar5 == 0) {
          if (iVar2 == 0) goto LAB_71b30bd2;
        }
        else {
          param_1 = pdVar6;
          param_2 = pdVar7;
          if (iVar2 != 0) {
switchD_71b30ca4_caseD_0:
            return;
          }
        }
      }
      goto LAB_71b30882;
    }
    if ((int)((uint)(dVar9 < param_2[-1]) << 0x1f) < 0) {
      do {
        pdVar3 = param_1 + 1;
        param_1 = param_1 + 1;
      } while (-1 < (int)((uint)(dVar9 < *pdVar3) << 0x1f));
    }
    else {
      do {
        param_1 = param_1 + 1;
        if (param_2 <= param_1) break;
      } while (-1 < (int)((uint)(dVar9 < *param_1) << 0x1f));
    }
    pdVar3 = param_2;
    if (param_1 < param_2) {
      do {
        pdVar1 = pdVar3 + -1;
        pdVar3 = pdVar3 + -1;
      } while ((int)((uint)(dVar9 < *pdVar1) << 0x1f) < 0);
    }
    if (param_1 < pdVar3) {
      dVar11 = *pdVar3;
      dVar10 = *param_1;
      do {
        *param_1 = dVar11;
        *pdVar3 = dVar10;
        do {
          dVar10 = param_1[1];
          param_1 = param_1 + 1;
        } while (-1 < (int)((uint)(dVar9 < dVar10) << 0x1f));
        do {
          dVar11 = pdVar3[-1];
          pdVar3 = pdVar3 + -1;
        } while ((int)((uint)(dVar9 < dVar11) << 0x1f) < 0);
      } while (param_1 < pdVar3);
    }
    pdVar3 = param_1 + -1;
    param_4 = 0;
    if (pdVar3 != pdVar6) {
      *pdVar6 = *pdVar3;
    }
    *pdVar3 = dVar9;
  } while( true );
}


// =========================================================================
// Function: FUN_71b30f94
// Entry: 0x71b30f94 | Size: 408 bytes
// =========================================================================

bool FUN_71b30f94(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  int iVar13;
  
  switch((int)param_2 - (int)param_1) {
  case 0:
  case 1:
    break;
  case 2:
    bVar9 = *param_1;
    if (param_2[-1] < bVar9) {
      *param_1 = param_2[-1];
      param_2[-1] = bVar9;
    }
    break;
  case 3:
    bVar9 = *param_1;
    bVar2 = param_1[1];
    bVar3 = param_2[-1];
    if (bVar2 < bVar9) {
      if (bVar3 < bVar2) {
        *param_1 = bVar3;
        param_2[-1] = bVar9;
      }
      else {
        param_1[1] = bVar9;
        *param_1 = bVar2;
        if (param_2[-1] < bVar9) {
          param_1[1] = param_2[-1];
          param_2[-1] = bVar9;
        }
      }
    }
    else if (bVar3 < bVar2) {
      param_1[1] = bVar3;
      param_2[-1] = bVar2;
      bVar9 = param_1[1];
      if (bVar9 < *param_1) {
        param_1[1] = *param_1;
        *param_1 = bVar9;
      }
    }
    break;
  case 4:
    pbVar5 = param_1 + 2;
    bVar2 = *pbVar5;
    bVar9 = *param_1;
    pbVar1 = param_1 + 1;
    bVar3 = *pbVar1;
    pbVar12 = param_1;
    bVar8 = bVar2;
    if (bVar3 < bVar9) {
      pbVar10 = pbVar5;
      bVar7 = bVar9;
      if (bVar3 <= bVar2) {
        param_1[1] = bVar9;
        *param_1 = bVar3;
        pbVar12 = pbVar1;
        if (bVar9 <= bVar2) goto LAB_71b310de;
      }
LAB_71b310d4:
      *pbVar10 = bVar9;
      *pbVar12 = bVar2;
      bVar8 = bVar7;
    }
    else if (bVar2 < bVar3) {
      *pbVar5 = bVar3;
      *pbVar1 = bVar2;
      pbVar10 = pbVar1;
      bVar8 = bVar3;
      bVar7 = bVar3;
      if (bVar2 < bVar9) goto LAB_71b310d4;
    }
LAB_71b310de:
    if (param_2[-1] < bVar8) {
      *pbVar5 = param_2[-1];
      param_2[-1] = bVar8;
      bVar9 = *pbVar5;
      if (bVar9 < *pbVar1) {
        param_1[2] = *pbVar1;
        param_1[1] = bVar9;
        if (bVar9 < *param_1) {
          param_1[1] = *param_1;
          *param_1 = bVar9;
        }
      }
    }
    break;
  case 5:
    FUN_71b31166(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    break;
  default:
    pbVar5 = param_1 + 2;
    bVar2 = *pbVar5;
    bVar9 = *param_1;
    pbVar1 = param_1 + 1;
    bVar3 = *pbVar1;
    pbVar12 = param_1;
    if (bVar3 < bVar9) {
      pbVar10 = pbVar5;
      if (bVar3 <= bVar2) {
        param_1[1] = bVar9;
        *param_1 = bVar3;
        pbVar12 = pbVar1;
        if (bVar9 <= bVar2) goto LAB_71b31070;
      }
LAB_71b3106a:
      *pbVar10 = bVar9;
      *pbVar12 = bVar2;
    }
    else if (bVar2 < bVar3) {
      *pbVar5 = bVar3;
      *pbVar1 = bVar2;
      pbVar10 = pbVar1;
      if (bVar2 < bVar9) goto LAB_71b3106a;
    }
LAB_71b31070:
    if (param_1 + 3 != param_2) {
      iVar11 = 0;
      iVar13 = 0;
      pbVar1 = param_1 + 3;
      do {
        pbVar12 = pbVar1;
        bVar9 = *pbVar5;
        bVar2 = *pbVar12;
        iVar4 = iVar11;
        if (bVar2 < bVar9) {
          do {
            iVar6 = iVar4;
            param_1[iVar6 + 3] = bVar9;
            pbVar5 = param_1;
            if (iVar6 == -2) goto LAB_71b31082;
            bVar9 = param_1[iVar6 + 1];
            iVar4 = iVar6 + -1;
          } while (bVar2 < bVar9);
          pbVar5 = param_1 + iVar6 + 2;
LAB_71b31082:
          iVar13 = iVar13 + 1;
          *pbVar5 = bVar2;
          if (iVar13 == 8) {
            return (int)pbVar12 - (int)param_2 == -1;
          }
        }
        iVar11 = iVar11 + 1;
        pbVar1 = pbVar12 + 1;
        pbVar5 = pbVar12;
      } while (pbVar12 + 1 != param_2);
    }
  }
  return true;
}


// =========================================================================
// Function: FUN_71b31166
// Entry: 0x71b31166 | Size: 198 bytes
// =========================================================================

void FUN_71b31166(byte *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  
  bVar3 = *param_3;
  bVar1 = *param_1;
  bVar2 = *param_2;
  if (bVar2 < bVar1) {
    if (bVar3 < bVar2) {
      *param_1 = bVar3;
    }
    else {
      *param_1 = bVar2;
      *param_2 = bVar1;
      bVar3 = *param_3;
      if (bVar1 <= bVar3) goto LAB_71b311be;
      *param_2 = bVar3;
    }
    *param_3 = bVar1;
    bVar3 = bVar1;
  }
  else if (bVar3 < bVar2) {
    *param_2 = bVar3;
    *param_3 = bVar2;
    bVar1 = *param_1;
    bVar3 = bVar2;
    if (*param_2 < bVar1) {
      *param_1 = *param_2;
      *param_2 = bVar1;
      bVar3 = *param_3;
    }
  }
LAB_71b311be:
  if (*param_4 < bVar3) {
    *param_3 = *param_4;
    *param_4 = bVar3;
    bVar3 = *param_2;
    if (*param_3 < bVar3) {
      *param_2 = *param_3;
      *param_3 = bVar3;
      bVar3 = *param_1;
      if (*param_2 < bVar3) {
        *param_1 = *param_2;
        *param_2 = bVar3;
      }
    }
  }
  bVar3 = *param_4;
  if (*param_5 < bVar3) {
    *param_4 = *param_5;
    *param_5 = bVar3;
    bVar3 = *param_3;
    if (bVar3 <= *param_4) {
      return;
    }
    *param_3 = *param_4;
    *param_4 = bVar3;
    bVar3 = *param_2;
    if (*param_3 < bVar3) {
      *param_2 = *param_3;
      *param_3 = bVar3;
      bVar3 = *param_1;
      if (*param_2 < bVar3) {
        *param_1 = *param_2;
        *param_2 = bVar3;
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71b31244
// Entry: 0x71b31244 | Size: 558 bytes
// =========================================================================

byte * FUN_71b31244(byte *param_1,byte *param_2,byte *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  byte *pbVar12;
  int iVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbStack_28;
  
  if (param_1 != param_2) {
    iVar13 = (int)param_2 - (int)param_1;
    if (1 < iVar13) {
      uVar11 = iVar13 - 2U >> 1;
      uVar9 = uVar11;
      do {
        if ((int)uVar9 <= (int)uVar11) {
          iVar7 = uVar9 * 2 + 2;
          iVar3 = uVar9 * 2 + 1;
          pbVar15 = param_1 + iVar3;
          if (iVar7 < iVar13) {
            bVar6 = *pbVar15;
            bVar5 = pbVar15[1];
            if (bVar6 < bVar5) {
              pbVar15 = pbVar15 + 1;
              iVar3 = iVar7;
            }
            if (bVar6 >= bVar5 && bVar6 != bVar5) {
              bVar5 = bVar6;
            }
          }
          else {
            bVar5 = *pbVar15;
          }
          bVar6 = param_1[uVar9];
          pbVar10 = param_1 + uVar9;
          if (bVar6 <= bVar5) {
            do {
              pbVar14 = pbVar15;
              *pbVar10 = bVar5;
              if ((int)uVar11 < iVar3) break;
              iVar7 = iVar3 * 2 + 2;
              iVar3 = iVar3 * 2 + 1;
              pbVar15 = param_1 + iVar3;
              if (iVar7 < iVar13) {
                bVar2 = *pbVar15;
                bVar5 = pbVar15[1];
                if (bVar2 < bVar5) {
                  pbVar15 = pbVar15 + 1;
                  iVar3 = iVar7;
                }
                if (bVar2 >= bVar5 && bVar2 != bVar5) {
                  bVar5 = bVar2;
                }
              }
              else {
                bVar5 = *pbVar15;
              }
              pbVar10 = pbVar14;
            } while (bVar6 <= bVar5);
            *pbVar14 = bVar6;
          }
        }
        bVar1 = 0 < (int)uVar9;
        uVar9 = uVar9 - 1;
      } while (bVar1);
    }
    pbVar15 = param_2;
    if (param_2 != param_3) {
      pbVar14 = param_1 + 1;
      pbVar10 = param_2;
      do {
        bVar5 = *pbVar10;
        if (bVar5 < *param_1) {
          *pbVar10 = *param_1;
          *param_1 = bVar5;
          if (1 < iVar13) {
            bVar6 = *pbVar14;
            pbVar15 = pbVar14;
            if (iVar13 == 2) {
              iVar3 = 1;
            }
            else {
              bVar2 = param_1[2];
              if (bVar6 < bVar2) {
                pbVar15 = param_1 + 2;
              }
              iVar3 = 1;
              if (bVar6 < bVar2) {
                iVar3 = 2;
              }
              if (bVar6 <= bVar2) {
                bVar6 = bVar2;
              }
            }
            pbVar8 = param_1;
            if (bVar5 <= bVar6) {
              do {
                pbVar12 = pbVar15;
                *pbVar8 = bVar6;
                if ((int)(iVar13 - 2U >> 1) < iVar3) break;
                iVar7 = iVar3 * 2 + 2;
                iVar3 = iVar3 * 2 + 1;
                pbVar15 = param_1 + iVar3;
                if (iVar7 < iVar13) {
                  bVar2 = *pbVar15;
                  bVar6 = pbVar15[1];
                  if (bVar2 < bVar6) {
                    pbVar15 = pbVar15 + 1;
                    iVar3 = iVar7;
                  }
                  if (bVar2 >= bVar6 && bVar2 != bVar6) {
                    bVar6 = bVar2;
                  }
                }
                else {
                  bVar6 = *pbVar15;
                }
                pbVar8 = pbVar12;
              } while (bVar5 <= bVar6);
              *pbVar12 = bVar5;
            }
          }
        }
        pbVar10 = pbVar10 + 1;
        pbVar15 = param_3;
      } while (pbVar10 != param_3);
    }
    param_3 = pbVar15;
    pbStack_28 = param_2;
    if (1 < iVar13) {
      do {
        bVar5 = *param_1;
        iVar3 = 0;
        pbVar15 = param_1;
        do {
          iVar4 = iVar3 * 2 + 2;
          pbVar10 = pbVar15 + iVar3 + 1;
          iVar7 = iVar3 * 2 + 1;
          if (iVar4 < iVar13) {
            bVar6 = pbVar15[iVar3 + 2];
            bVar2 = pbVar15[iVar3 + 1];
            if (bVar2 < bVar6) {
              pbVar10 = pbVar15 + iVar3 + 2;
              iVar7 = iVar4;
            }
            if (bVar2 >= bVar6 && bVar2 != bVar6) {
              bVar6 = bVar2;
            }
          }
          else {
            bVar6 = *pbVar10;
          }
          *pbVar15 = bVar6;
          iVar3 = iVar7;
          pbVar15 = pbVar10;
        } while (iVar7 <= (int)(iVar13 - 2U >> 1));
        pbStack_28 = pbStack_28 + -1;
        if (pbVar10 == pbStack_28) {
          *pbVar10 = bVar5;
        }
        else {
          *pbVar10 = *pbStack_28;
          *pbStack_28 = bVar5;
          if (1 < (int)(pbVar10 + (1 - (int)param_1))) {
            pbVar15 = pbVar10 + (-1 - (int)param_1);
            bVar6 = *pbVar10;
            uVar9 = (uint)pbVar15 >> 1;
            bVar5 = param_1[uVar9];
            if (bVar5 < bVar6) {
              do {
                uVar11 = (uint)pbVar15 >> 1;
                *pbVar10 = bVar5;
                if (uVar9 == 0) break;
                pbVar15 = (byte *)(uVar9 - 1);
                uVar9 = (uint)pbVar15 >> 1;
                bVar5 = param_1[uVar9];
                pbVar10 = param_1 + uVar11;
              } while (bVar5 < bVar6);
              param_1[uVar11] = bVar6;
            }
          }
        }
        bVar1 = 2 < iVar13;
        iVar13 = iVar13 + -1;
      } while (bVar1);
    }
  }
  return param_3;
}


// =========================================================================
// Function: FUN_71b3148c
// Entry: 0x71b3148c | Size: 408 bytes
// =========================================================================

bool FUN_71b3148c(uint *param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  
  switch((int)param_2 - (int)param_1 >> 2) {
  case 0:
  case 1:
    break;
  case 2:
    uVar3 = *param_1;
    if (param_2[-1] < uVar3) {
      *param_1 = param_2[-1];
      param_2[-1] = uVar3;
    }
    break;
  case 3:
    uVar3 = *param_1;
    uVar4 = param_1[1];
    uVar10 = param_2[-1];
    if (uVar4 < uVar3) {
      if (uVar10 < uVar4) {
        *param_1 = uVar10;
        param_2[-1] = uVar3;
        return true;
      }
      *param_1 = uVar4;
      param_1[1] = uVar3;
      if (uVar3 <= param_2[-1]) {
        return true;
      }
      param_1[1] = param_2[-1];
      param_2[-1] = uVar3;
      return true;
    }
    if (uVar4 <= uVar10) {
      return true;
    }
    param_1[1] = uVar10;
    param_2[-1] = uVar4;
    uVar4 = *param_1;
    uVar3 = param_1[1];
    goto LAB_71b315f4;
  case 4:
    puVar5 = param_1 + 2;
    uVar13 = *puVar5;
    uVar4 = *param_1;
    puVar2 = param_1 + 1;
    uVar10 = *puVar2;
    uVar3 = uVar13;
    puVar11 = param_1;
    if (uVar10 < uVar4) {
      uVar7 = uVar4;
      puVar8 = puVar5;
      if (uVar10 <= uVar13) {
        *param_1 = uVar10;
        param_1[1] = uVar4;
        puVar11 = puVar2;
        if (uVar4 <= uVar13) goto LAB_71b315d6;
      }
LAB_71b315cc:
      *puVar8 = uVar4;
      *puVar11 = uVar13;
      uVar3 = uVar7;
    }
    else if (uVar13 < uVar10) {
      *puVar5 = uVar10;
      *puVar2 = uVar13;
      uVar7 = uVar10;
      uVar3 = uVar10;
      puVar8 = puVar2;
      if (uVar13 < uVar4) goto LAB_71b315cc;
    }
LAB_71b315d6:
    if (uVar3 <= param_2[-1]) {
      return true;
    }
    *puVar5 = param_2[-1];
    param_2[-1] = uVar3;
    uVar4 = *puVar2;
    uVar3 = *puVar5;
    if (uVar4 <= uVar3) {
      return true;
    }
    param_1[1] = uVar3;
    param_1[2] = uVar4;
    uVar4 = *param_1;
LAB_71b315f4:
    if (uVar3 < uVar4) {
      *param_1 = uVar3;
      param_1[1] = uVar4;
    }
    break;
  case 5:
    FUN_71b3165e(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    break;
  default:
    puVar5 = param_1 + 2;
    uVar3 = *puVar5;
    uVar4 = *param_1;
    puVar2 = param_1 + 1;
    uVar10 = *puVar2;
    puVar11 = param_1;
    if (uVar10 < uVar4) {
      puVar8 = puVar5;
      if (uVar10 <= uVar3) {
        *param_1 = uVar10;
        param_1[1] = uVar4;
        puVar11 = puVar2;
        if (uVar4 <= uVar3) goto LAB_71b31566;
      }
LAB_71b31560:
      *puVar8 = uVar4;
      *puVar11 = uVar3;
    }
    else if (uVar3 < uVar10) {
      *puVar5 = uVar10;
      *puVar2 = uVar3;
      puVar8 = puVar2;
      if (uVar3 < uVar4) goto LAB_71b31560;
    }
LAB_71b31566:
    if (param_1 + 3 != param_2) {
      iVar9 = 0;
      iVar12 = 0;
      puVar2 = param_1 + 3;
      do {
        puVar11 = puVar2;
        uVar4 = *puVar5;
        uVar3 = *puVar11;
        iVar1 = iVar9;
        if (uVar3 < uVar4) {
          do {
            iVar6 = iVar1;
            *(uint *)((int)param_1 + iVar6 + 0xc) = uVar4;
            puVar5 = param_1;
            if (iVar6 == -8) goto LAB_71b31578;
            uVar4 = *(uint *)((int)param_1 + iVar6 + 4);
            iVar1 = iVar6 + -4;
          } while (uVar3 < uVar4);
          puVar5 = (uint *)((int)param_1 + iVar6 + 8);
LAB_71b31578:
          iVar12 = iVar12 + 1;
          *puVar5 = uVar3;
          if (iVar12 == 8) {
            return (int)puVar11 - (int)param_2 == -4;
          }
        }
        iVar9 = iVar9 + 4;
        puVar2 = puVar11 + 1;
        puVar5 = puVar11;
      } while (puVar11 + 1 != param_2);
    }
  }
  return true;
}


// =========================================================================
// Function: FUN_71b3165e
// Entry: 0x71b3165e | Size: 198 bytes
// =========================================================================

void FUN_71b3165e(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *param_3;
  uVar3 = *param_1;
  uVar2 = *param_2;
  if (uVar2 < uVar3) {
    if (uVar1 < uVar2) {
      *param_1 = uVar1;
    }
    else {
      *param_1 = uVar2;
      *param_2 = uVar3;
      uVar1 = *param_3;
      if (uVar3 <= uVar1) goto LAB_71b316b6;
      *param_2 = uVar1;
    }
    *param_3 = uVar3;
    uVar1 = uVar3;
  }
  else if (uVar1 < uVar2) {
    *param_2 = uVar1;
    *param_3 = uVar2;
    uVar3 = *param_1;
    uVar1 = uVar2;
    if (*param_2 < uVar3) {
      *param_1 = *param_2;
      *param_2 = uVar3;
      uVar1 = *param_3;
    }
  }
LAB_71b316b6:
  if (*param_4 < uVar1) {
    *param_3 = *param_4;
    *param_4 = uVar1;
    uVar1 = *param_2;
    if (*param_3 < uVar1) {
      *param_2 = *param_3;
      *param_3 = uVar1;
      uVar1 = *param_1;
      if (*param_2 < uVar1) {
        *param_1 = *param_2;
        *param_2 = uVar1;
      }
    }
  }
  uVar1 = *param_4;
  if (*param_5 < uVar1) {
    *param_4 = *param_5;
    *param_5 = uVar1;
    uVar1 = *param_3;
    if (uVar1 <= *param_4) {
      return;
    }
    *param_3 = *param_4;
    *param_4 = uVar1;
    uVar1 = *param_2;
    if (*param_3 < uVar1) {
      *param_2 = *param_3;
      *param_3 = uVar1;
      uVar1 = *param_1;
      if (*param_2 < uVar1) {
        *param_1 = *param_2;
        *param_2 = uVar1;
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71b3173c
// Entry: 0x71b3173c | Size: 582 bytes
// =========================================================================

uint * FUN_71b3173c(uint *param_1,uint *param_2,uint *param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  uint *puStack_28;
  
  if (param_1 != param_2) {
    iVar13 = (int)param_2 - (int)param_1 >> 2;
    if (1 < iVar13) {
      uVar14 = iVar13 - 2U >> 1;
      uVar3 = uVar14;
      do {
        if ((int)uVar3 <= (int)uVar14) {
          iVar5 = (uVar3 & 0x3fffffff) * 2;
          iVar2 = iVar5 + 1;
          iVar5 = iVar5 + 2;
          puVar11 = param_1 + iVar2;
          if (iVar5 < iVar13) {
            uVar8 = *puVar11;
            uVar7 = puVar11[1];
            if (uVar8 < uVar7) {
              puVar11 = puVar11 + 1;
              iVar2 = iVar5;
            }
            if (uVar7 < uVar8) {
              uVar7 = uVar8;
            }
          }
          else {
            uVar7 = *puVar11;
          }
          uVar8 = param_1[uVar3];
          puVar6 = param_1 + uVar3;
          if (uVar8 <= uVar7) {
            do {
              puVar9 = puVar11;
              *puVar6 = uVar7;
              if ((int)uVar14 < iVar2) break;
              iVar5 = iVar2 * 2 + 2;
              iVar2 = iVar2 * 2 + 1;
              puVar11 = param_1 + iVar2;
              if (iVar5 < iVar13) {
                uVar12 = *puVar11;
                uVar7 = puVar11[1];
                if (uVar12 < uVar7) {
                  puVar11 = puVar11 + 1;
                  iVar2 = iVar5;
                }
                if (uVar7 < uVar12) {
                  uVar7 = uVar12;
                }
              }
              else {
                uVar7 = *puVar11;
              }
              puVar6 = puVar9;
            } while (uVar8 <= uVar7);
            *puVar9 = uVar8;
          }
        }
        bVar1 = 0 < (int)uVar3;
        uVar3 = uVar3 - 1;
      } while (bVar1);
    }
    puVar11 = param_2;
    if (param_2 != param_3) {
      puVar9 = param_1 + 1;
      puVar6 = param_2;
      do {
        uVar3 = *puVar6;
        if (uVar3 < *param_1) {
          *puVar6 = *param_1;
          *param_1 = uVar3;
          if (1 < iVar13) {
            uVar14 = *puVar9;
            puVar11 = puVar9;
            if ((int)param_2 - (int)param_1 == 8) {
              iVar2 = 1;
            }
            else {
              uVar7 = param_1[2];
              if (uVar14 < uVar7) {
                puVar11 = param_1 + 2;
              }
              iVar2 = 1;
              if (uVar14 < uVar7) {
                iVar2 = 2;
              }
              if (uVar14 <= uVar7) {
                uVar14 = uVar7;
              }
            }
            puVar10 = param_1;
            if (uVar3 <= uVar14) {
              do {
                puVar15 = puVar11;
                *puVar10 = uVar14;
                if ((int)(iVar13 - 2U >> 1) < iVar2) break;
                iVar5 = iVar2 * 2 + 2;
                iVar2 = iVar2 * 2 + 1;
                puVar11 = param_1 + iVar2;
                if (iVar5 < iVar13) {
                  uVar7 = *puVar11;
                  uVar14 = puVar11[1];
                  if (uVar7 < uVar14) {
                    puVar11 = puVar11 + 1;
                    iVar2 = iVar5;
                  }
                  if (uVar14 < uVar7) {
                    uVar14 = uVar7;
                  }
                }
                else {
                  uVar14 = *puVar11;
                }
                puVar10 = puVar15;
              } while (uVar3 <= uVar14);
              *puVar15 = uVar3;
            }
          }
        }
        puVar6 = puVar6 + 1;
        puVar11 = param_3;
      } while (puVar6 != param_3);
    }
    param_3 = puVar11;
    puStack_28 = param_2;
    if (1 < iVar13) {
      do {
        uVar3 = *param_1;
        iVar2 = 0;
        puVar11 = param_1;
        do {
          iVar4 = iVar2 * 2 + 2;
          puVar6 = puVar11 + iVar2 + 1;
          iVar5 = iVar2 * 2 + 1;
          if (iVar4 < iVar13) {
            uVar14 = puVar11[iVar2 + 2];
            uVar7 = puVar11[iVar2 + 1];
            if (uVar7 < uVar14) {
              puVar6 = puVar11 + iVar2 + 2;
              iVar5 = iVar4;
            }
            if (uVar14 < uVar7) {
              uVar14 = uVar7;
            }
          }
          else {
            uVar14 = *puVar6;
          }
          *puVar11 = uVar14;
          iVar2 = iVar5;
          puVar11 = puVar6;
        } while (iVar5 <= (int)(iVar13 - 2U >> 1));
        puStack_28 = puStack_28 + -1;
        if (puVar6 == puStack_28) {
          *puVar6 = uVar3;
        }
        else {
          *puVar6 = *puStack_28;
          *puStack_28 = uVar3;
          iVar2 = (int)puVar6 + (4 - (int)param_1) >> 2;
          if (1 < iVar2) {
            uVar7 = *puVar6;
            uVar14 = iVar2 - 2U >> 1;
            uVar3 = param_1[uVar14];
            if (uVar3 < uVar7) {
              do {
                puVar11 = param_1 + uVar14;
                *puVar6 = uVar3;
                if (uVar14 == 0) break;
                uVar14 = uVar14 - 1 >> 1;
                uVar3 = param_1[uVar14];
                puVar6 = puVar11;
              } while (uVar3 < uVar7);
              *puVar11 = uVar7;
            }
          }
        }
        bVar1 = 2 < iVar13;
        iVar13 = iVar13 + -1;
      } while (bVar1);
    }
  }
  return param_3;
}


// =========================================================================
// Function: FUN_71b3199c
// Entry: 0x71b3199c | Size: 428 bytes
// =========================================================================

bool FUN_71b3199c(char *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char *pcVar10;
  int iVar11;
  char *pcVar12;
  int iVar13;
  
  switch((int)param_2 - (int)param_1) {
  case 0:
  case 1:
    break;
  case 2:
    cVar2 = *param_1;
    if (param_2[-1] < cVar2) {
      *param_1 = param_2[-1];
      param_2[-1] = cVar2;
    }
    break;
  case 3:
    cVar3 = param_2[-1];
    cVar2 = *param_1;
    cVar9 = param_1[1];
    if (cVar9 < cVar2) {
      if (cVar3 < cVar9) {
        *param_1 = cVar3;
        param_2[-1] = cVar2;
      }
      else {
        param_1[1] = cVar2;
        *param_1 = cVar9;
        if (param_2[-1] < cVar2) {
          param_1[1] = param_2[-1];
          param_2[-1] = cVar2;
        }
      }
    }
    else if (cVar3 < cVar9) {
      param_1[1] = cVar3;
      param_2[-1] = cVar9;
      cVar2 = param_1[1];
      if (cVar2 < *param_1) {
        param_1[1] = *param_1;
        *param_1 = cVar2;
      }
    }
    break;
  case 4:
    pcVar5 = param_1 + 2;
    cVar9 = *pcVar5;
    cVar2 = *param_1;
    pcVar1 = param_1 + 1;
    cVar3 = *pcVar1;
    pcVar12 = param_1;
    cVar8 = cVar9;
    if (cVar3 < cVar2) {
      pcVar10 = pcVar5;
      cVar7 = cVar2;
      if (cVar3 <= cVar9) {
        param_1[1] = cVar2;
        *param_1 = cVar3;
        pcVar12 = pcVar1;
        if (cVar2 <= cVar9) goto LAB_71b31af6;
      }
LAB_71b31aec:
      *pcVar10 = cVar2;
      *pcVar12 = cVar9;
      cVar8 = cVar7;
    }
    else if (cVar9 < cVar3) {
      *pcVar5 = cVar3;
      *pcVar1 = cVar9;
      pcVar10 = pcVar1;
      cVar8 = cVar3;
      cVar7 = cVar3;
      if (cVar9 < cVar2) goto LAB_71b31aec;
    }
LAB_71b31af6:
    if (param_2[-1] < cVar8) {
      *pcVar5 = param_2[-1];
      param_2[-1] = cVar8;
      cVar2 = *pcVar5;
      if (cVar2 < *pcVar1) {
        param_1[2] = *pcVar1;
        param_1[1] = cVar2;
        if (cVar2 < *param_1) {
          param_1[1] = *param_1;
          *param_1 = cVar2;
        }
      }
    }
    break;
  case 5:
    FUN_71b31b82(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    break;
  default:
    pcVar5 = param_1 + 2;
    cVar9 = *pcVar5;
    cVar2 = *param_1;
    pcVar1 = param_1 + 1;
    cVar3 = *pcVar1;
    pcVar12 = param_1;
    if (cVar3 < cVar2) {
      pcVar10 = pcVar5;
      if (cVar3 <= cVar9) {
        param_1[1] = cVar2;
        *param_1 = cVar3;
        pcVar12 = pcVar1;
        if (cVar2 <= cVar9) goto LAB_71b31a86;
      }
LAB_71b31a80:
      *pcVar10 = cVar2;
      *pcVar12 = cVar9;
    }
    else if (cVar9 < cVar3) {
      *pcVar5 = cVar3;
      *pcVar1 = cVar9;
      pcVar10 = pcVar1;
      if (cVar9 < cVar2) goto LAB_71b31a80;
    }
LAB_71b31a86:
    if (param_1 + 3 != param_2) {
      iVar11 = 0;
      iVar13 = 0;
      pcVar1 = param_1 + 3;
      do {
        pcVar12 = pcVar1;
        cVar9 = *pcVar5;
        cVar2 = *pcVar12;
        iVar4 = iVar11;
        if (cVar2 < cVar9) {
          do {
            iVar6 = iVar4;
            param_1[iVar6 + 3] = cVar9;
            pcVar5 = param_1;
            if (iVar6 == -2) goto LAB_71b31a98;
            cVar9 = param_1[iVar6 + 1];
            iVar4 = iVar6 + -1;
          } while (cVar2 < cVar9);
          pcVar5 = param_1 + iVar6 + 2;
LAB_71b31a98:
          iVar13 = iVar13 + 1;
          *pcVar5 = cVar2;
          if (iVar13 == 8) {
            return (int)pcVar12 - (int)param_2 == -1;
          }
        }
        iVar11 = iVar11 + 1;
        pcVar1 = pcVar12 + 1;
        pcVar5 = pcVar12;
      } while (pcVar12 + 1 != param_2);
    }
  }
  return true;
}


// =========================================================================
// Function: FUN_71b31b82
// Entry: 0x71b31b82 | Size: 222 bytes
// =========================================================================

void FUN_71b31b82(char *param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char cVar1;
  char cVar2;
  char cVar3;
  
  cVar3 = *param_3;
  cVar1 = *param_1;
  cVar2 = *param_2;
  if (cVar2 < cVar1) {
    if (cVar3 < cVar2) {
      *param_1 = cVar3;
    }
    else {
      *param_1 = cVar2;
      *param_2 = cVar1;
      cVar3 = *param_3;
      if (cVar1 <= cVar3) goto LAB_71b31bde;
      *param_2 = cVar3;
    }
    *param_3 = cVar1;
    cVar3 = cVar1;
  }
  else if (cVar3 < cVar2) {
    *param_2 = cVar3;
    *param_3 = cVar2;
    cVar1 = *param_1;
    cVar3 = cVar2;
    if (*param_2 < cVar1) {
      *param_1 = *param_2;
      *param_2 = cVar1;
      cVar3 = *param_3;
    }
  }
LAB_71b31bde:
  if (*param_4 < cVar3) {
    *param_3 = *param_4;
    *param_4 = cVar3;
    cVar3 = *param_2;
    if (*param_3 < cVar3) {
      *param_2 = *param_3;
      *param_3 = cVar3;
      cVar3 = *param_1;
      if (*param_2 < cVar3) {
        *param_1 = *param_2;
        *param_2 = cVar3;
      }
    }
  }
  cVar3 = *param_4;
  if (*param_5 < cVar3) {
    *param_4 = *param_5;
    *param_5 = cVar3;
    cVar3 = *param_3;
    if (cVar3 <= *param_4) {
      return;
    }
    *param_3 = *param_4;
    *param_4 = cVar3;
    cVar3 = *param_2;
    if (*param_3 < cVar3) {
      *param_2 = *param_3;
      *param_3 = cVar3;
      cVar3 = *param_1;
      if (*param_2 < cVar3) {
        *param_1 = *param_2;
        *param_2 = cVar3;
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71b31c78
// Entry: 0x71b31c78 | Size: 568 bytes
// =========================================================================

byte * FUN_71b31c78(byte *param_1,byte *param_2,byte *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  byte *pbVar14;
  int iVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbStack_28;
  
  if (param_1 != param_2) {
    iVar15 = (int)param_2 - (int)param_1;
    if (1 < iVar15) {
      uVar13 = iVar15 - 2U >> 1;
      uVar9 = uVar13;
      do {
        if ((int)uVar9 <= (int)uVar13) {
          iVar6 = uVar9 * 2 + 2;
          iVar3 = uVar9 * 2 + 1;
          pbVar17 = param_1 + iVar3;
          if (iVar6 < iVar15) {
            uVar11 = (uint)(char)*pbVar17;
            uVar8 = (uint)(char)pbVar17[1];
            if ((int)uVar11 < (int)uVar8) {
              pbVar17 = pbVar17 + 1;
              iVar3 = iVar6;
            }
            if ((int)uVar8 < (int)uVar11) {
              uVar8 = uVar11;
            }
          }
          else {
            uVar8 = (uint)*pbVar17;
          }
          bVar7 = param_1[uVar9];
          pbVar10 = param_1 + uVar9;
          if ((char)bVar7 <= (char)uVar8) {
            do {
              pbVar16 = pbVar17;
              *pbVar10 = (byte)uVar8;
              if ((int)uVar13 < iVar3) break;
              iVar6 = iVar3 * 2 + 2;
              iVar3 = iVar3 * 2 + 1;
              pbVar17 = param_1 + iVar3;
              if (iVar6 < iVar15) {
                uVar11 = (uint)(char)*pbVar17;
                uVar8 = (uint)(char)pbVar17[1];
                if ((int)uVar11 < (int)uVar8) {
                  pbVar17 = pbVar17 + 1;
                  iVar3 = iVar6;
                }
                if ((int)uVar8 < (int)uVar11) {
                  uVar8 = uVar11;
                }
              }
              else {
                uVar8 = (uint)*pbVar17;
              }
              pbVar10 = pbVar16;
            } while ((char)bVar7 <= (char)uVar8);
            *pbVar16 = bVar7;
          }
        }
        bVar1 = 0 < (int)uVar9;
        uVar9 = uVar9 - 1;
      } while (bVar1);
    }
    pbVar17 = param_2;
    if (param_2 != param_3) {
      pbVar16 = param_1 + 1;
      pbVar10 = param_2;
      do {
        bVar7 = *pbVar10;
        if ((char)bVar7 < (char)*param_1) {
          *pbVar10 = *param_1;
          *param_1 = bVar7;
          if (1 < iVar15) {
            uVar9 = (uint)(char)*pbVar16;
            pbVar17 = pbVar16;
            if (iVar15 == 2) {
              iVar3 = 1;
            }
            else {
              uVar13 = (uint)(char)param_1[2];
              if ((int)uVar9 < (int)uVar13) {
                pbVar17 = param_1 + 2;
              }
              iVar3 = 1;
              if ((int)uVar9 < (int)uVar13) {
                iVar3 = 2;
              }
              if ((int)uVar9 <= (int)uVar13) {
                uVar9 = uVar13;
              }
            }
            pbVar12 = param_1;
            if ((char)bVar7 <= (char)uVar9) {
              do {
                pbVar14 = pbVar17;
                *pbVar12 = (byte)uVar9;
                if ((int)(iVar15 - 2U >> 1) < iVar3) break;
                iVar6 = iVar3 * 2 + 2;
                iVar3 = iVar3 * 2 + 1;
                pbVar17 = param_1 + iVar3;
                if (iVar6 < iVar15) {
                  uVar13 = (uint)(char)*pbVar17;
                  uVar9 = (uint)(char)pbVar17[1];
                  if ((int)uVar13 < (int)uVar9) {
                    pbVar17 = pbVar17 + 1;
                    iVar3 = iVar6;
                  }
                  if ((int)uVar9 < (int)uVar13) {
                    uVar9 = uVar13;
                  }
                }
                else {
                  uVar9 = (uint)*pbVar17;
                }
                pbVar12 = pbVar14;
              } while ((char)bVar7 <= (char)uVar9);
              *pbVar14 = bVar7;
            }
          }
        }
        pbVar10 = pbVar10 + 1;
        pbVar17 = param_3;
      } while (pbVar10 != param_3);
    }
    param_3 = pbVar17;
    pbStack_28 = param_2;
    if (1 < iVar15) {
      do {
        bVar7 = *param_1;
        iVar3 = 0;
        pbVar17 = param_1;
        do {
          iVar4 = iVar3 * 2 + 2;
          pbVar10 = pbVar17 + iVar3 + 1;
          iVar6 = iVar3 * 2 + 1;
          if (iVar4 < iVar15) {
            bVar5 = pbVar17[iVar3 + 2];
            bVar2 = pbVar17[iVar3 + 1];
            if ((char)bVar2 < (char)bVar5) {
              pbVar10 = pbVar17 + iVar3 + 2;
              iVar6 = iVar4;
            }
            if ((char)bVar5 < (char)bVar2) {
              bVar5 = bVar2;
            }
          }
          else {
            bVar5 = *pbVar10;
          }
          *pbVar17 = bVar5;
          iVar3 = iVar6;
          pbVar17 = pbVar10;
        } while (iVar6 <= (int)(iVar15 - 2U >> 1));
        pbStack_28 = pbStack_28 + -1;
        if (pbVar10 == pbStack_28) {
          *pbVar10 = bVar7;
        }
        else {
          *pbVar10 = *pbStack_28;
          *pbStack_28 = bVar7;
          if (1 < (int)(pbVar10 + (1 - (int)param_1))) {
            pbVar17 = pbVar10 + (-1 - (int)param_1);
            bVar5 = *pbVar10;
            uVar9 = (uint)pbVar17 >> 1;
            bVar7 = param_1[uVar9];
            if ((char)bVar7 < (char)bVar5) {
              do {
                uVar13 = (uint)pbVar17 >> 1;
                *pbVar10 = bVar7;
                if (uVar9 == 0) break;
                pbVar17 = (byte *)(uVar9 - 1);
                uVar9 = (uint)pbVar17 >> 1;
                bVar7 = param_1[uVar9];
                pbVar10 = param_1 + uVar13;
              } while ((char)bVar7 < (char)bVar5);
              param_1[uVar13] = bVar5;
            }
          }
        }
        bVar1 = 2 < iVar15;
        iVar15 = iVar15 + -1;
      } while (bVar1);
    }
  }
  return param_3;
}


// =========================================================================
// Function: FUN_71b31ec8
// Entry: 0x71b31ec8 | Size: 408 bytes
// =========================================================================

bool FUN_71b31ec8(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  int iVar13;
  
  switch((int)param_2 - (int)param_1) {
  case 0:
  case 1:
    break;
  case 2:
    bVar9 = *param_1;
    if (param_2[-1] < bVar9) {
      *param_1 = param_2[-1];
      param_2[-1] = bVar9;
    }
    break;
  case 3:
    bVar9 = *param_1;
    bVar2 = param_1[1];
    bVar3 = param_2[-1];
    if (bVar2 < bVar9) {
      if (bVar3 < bVar2) {
        *param_1 = bVar3;
        param_2[-1] = bVar9;
      }
      else {
        param_1[1] = bVar9;
        *param_1 = bVar2;
        if (param_2[-1] < bVar9) {
          param_1[1] = param_2[-1];
          param_2[-1] = bVar9;
        }
      }
    }
    else if (bVar3 < bVar2) {
      param_1[1] = bVar3;
      param_2[-1] = bVar2;
      bVar9 = param_1[1];
      if (bVar9 < *param_1) {
        param_1[1] = *param_1;
        *param_1 = bVar9;
      }
    }
    break;
  case 4:
    pbVar5 = param_1 + 2;
    bVar2 = *pbVar5;
    bVar9 = *param_1;
    pbVar1 = param_1 + 1;
    bVar3 = *pbVar1;
    pbVar12 = param_1;
    bVar8 = bVar2;
    if (bVar3 < bVar9) {
      pbVar10 = pbVar5;
      bVar7 = bVar9;
      if (bVar3 <= bVar2) {
        param_1[1] = bVar9;
        *param_1 = bVar3;
        pbVar12 = pbVar1;
        if (bVar9 <= bVar2) goto LAB_71b32012;
      }
LAB_71b32008:
      *pbVar10 = bVar9;
      *pbVar12 = bVar2;
      bVar8 = bVar7;
    }
    else if (bVar2 < bVar3) {
      *pbVar5 = bVar3;
      *pbVar1 = bVar2;
      pbVar10 = pbVar1;
      bVar8 = bVar3;
      bVar7 = bVar3;
      if (bVar2 < bVar9) goto LAB_71b32008;
    }
LAB_71b32012:
    if (param_2[-1] < bVar8) {
      *pbVar5 = param_2[-1];
      param_2[-1] = bVar8;
      bVar9 = *pbVar5;
      if (bVar9 < *pbVar1) {
        param_1[2] = *pbVar1;
        param_1[1] = bVar9;
        if (bVar9 < *param_1) {
          param_1[1] = *param_1;
          *param_1 = bVar9;
        }
      }
    }
    break;
  case 5:
    FUN_71b3209a(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    break;
  default:
    pbVar5 = param_1 + 2;
    bVar2 = *pbVar5;
    bVar9 = *param_1;
    pbVar1 = param_1 + 1;
    bVar3 = *pbVar1;
    pbVar12 = param_1;
    if (bVar3 < bVar9) {
      pbVar10 = pbVar5;
      if (bVar3 <= bVar2) {
        param_1[1] = bVar9;
        *param_1 = bVar3;
        pbVar12 = pbVar1;
        if (bVar9 <= bVar2) goto LAB_71b31fa4;
      }
LAB_71b31f9e:
      *pbVar10 = bVar9;
      *pbVar12 = bVar2;
    }
    else if (bVar2 < bVar3) {
      *pbVar5 = bVar3;
      *pbVar1 = bVar2;
      pbVar10 = pbVar1;
      if (bVar2 < bVar9) goto LAB_71b31f9e;
    }
LAB_71b31fa4:
    if (param_1 + 3 != param_2) {
      iVar11 = 0;
      iVar13 = 0;
      pbVar1 = param_1 + 3;
      do {
        pbVar12 = pbVar1;
        bVar9 = *pbVar5;
        bVar2 = *pbVar12;
        iVar4 = iVar11;
        if (bVar2 < bVar9) {
          do {
            iVar6 = iVar4;
            param_1[iVar6 + 3] = bVar9;
            pbVar5 = param_1;
            if (iVar6 == -2) goto LAB_71b31fb6;
            bVar9 = param_1[iVar6 + 1];
            iVar4 = iVar6 + -1;
          } while (bVar2 < bVar9);
          pbVar5 = param_1 + iVar6 + 2;
LAB_71b31fb6:
          iVar13 = iVar13 + 1;
          *pbVar5 = bVar2;
          if (iVar13 == 8) {
            return (int)pbVar12 - (int)param_2 == -1;
          }
        }
        iVar11 = iVar11 + 1;
        pbVar1 = pbVar12 + 1;
        pbVar5 = pbVar12;
      } while (pbVar12 + 1 != param_2);
    }
  }
  return true;
}


// =========================================================================
// Function: FUN_71b3209a
// Entry: 0x71b3209a | Size: 198 bytes
// =========================================================================

void FUN_71b3209a(byte *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  
  bVar3 = *param_3;
  bVar1 = *param_1;
  bVar2 = *param_2;
  if (bVar2 < bVar1) {
    if (bVar3 < bVar2) {
      *param_1 = bVar3;
    }
    else {
      *param_1 = bVar2;
      *param_2 = bVar1;
      bVar3 = *param_3;
      if (bVar1 <= bVar3) goto LAB_71b320f2;
      *param_2 = bVar3;
    }
    *param_3 = bVar1;
    bVar3 = bVar1;
  }
  else if (bVar3 < bVar2) {
    *param_2 = bVar3;
    *param_3 = bVar2;
    bVar1 = *param_1;
    bVar3 = bVar2;
    if (*param_2 < bVar1) {
      *param_1 = *param_2;
      *param_2 = bVar1;
      bVar3 = *param_3;
    }
  }
LAB_71b320f2:
  if (*param_4 < bVar3) {
    *param_3 = *param_4;
    *param_4 = bVar3;
    bVar3 = *param_2;
    if (*param_3 < bVar3) {
      *param_2 = *param_3;
      *param_3 = bVar3;
      bVar3 = *param_1;
      if (*param_2 < bVar3) {
        *param_1 = *param_2;
        *param_2 = bVar3;
      }
    }
  }
  bVar3 = *param_4;
  if (*param_5 < bVar3) {
    *param_4 = *param_5;
    *param_5 = bVar3;
    bVar3 = *param_3;
    if (bVar3 <= *param_4) {
      return;
    }
    *param_3 = *param_4;
    *param_4 = bVar3;
    bVar3 = *param_2;
    if (*param_3 < bVar3) {
      *param_2 = *param_3;
      *param_3 = bVar3;
      bVar3 = *param_1;
      if (*param_2 < bVar3) {
        *param_1 = *param_2;
        *param_2 = bVar3;
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71b32178
// Entry: 0x71b32178 | Size: 558 bytes
// =========================================================================

byte * FUN_71b32178(byte *param_1,byte *param_2,byte *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  byte *pbVar12;
  int iVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbStack_28;
  
  if (param_1 != param_2) {
    iVar13 = (int)param_2 - (int)param_1;
    if (1 < iVar13) {
      uVar11 = iVar13 - 2U >> 1;
      uVar9 = uVar11;
      do {
        if ((int)uVar9 <= (int)uVar11) {
          iVar7 = uVar9 * 2 + 2;
          iVar3 = uVar9 * 2 + 1;
          pbVar15 = param_1 + iVar3;
          if (iVar7 < iVar13) {
            bVar6 = *pbVar15;
            bVar5 = pbVar15[1];
            if (bVar6 < bVar5) {
              pbVar15 = pbVar15 + 1;
              iVar3 = iVar7;
            }
            if (bVar6 >= bVar5 && bVar6 != bVar5) {
              bVar5 = bVar6;
            }
          }
          else {
            bVar5 = *pbVar15;
          }
          bVar6 = param_1[uVar9];
          pbVar10 = param_1 + uVar9;
          if (bVar6 <= bVar5) {
            do {
              pbVar14 = pbVar15;
              *pbVar10 = bVar5;
              if ((int)uVar11 < iVar3) break;
              iVar7 = iVar3 * 2 + 2;
              iVar3 = iVar3 * 2 + 1;
              pbVar15 = param_1 + iVar3;
              if (iVar7 < iVar13) {
                bVar2 = *pbVar15;
                bVar5 = pbVar15[1];
                if (bVar2 < bVar5) {
                  pbVar15 = pbVar15 + 1;
                  iVar3 = iVar7;
                }
                if (bVar2 >= bVar5 && bVar2 != bVar5) {
                  bVar5 = bVar2;
                }
              }
              else {
                bVar5 = *pbVar15;
              }
              pbVar10 = pbVar14;
            } while (bVar6 <= bVar5);
            *pbVar14 = bVar6;
          }
        }
        bVar1 = 0 < (int)uVar9;
        uVar9 = uVar9 - 1;
      } while (bVar1);
    }
    pbVar15 = param_2;
    if (param_2 != param_3) {
      pbVar14 = param_1 + 1;
      pbVar10 = param_2;
      do {
        bVar5 = *pbVar10;
        if (bVar5 < *param_1) {
          *pbVar10 = *param_1;
          *param_1 = bVar5;
          if (1 < iVar13) {
            bVar6 = *pbVar14;
            pbVar15 = pbVar14;
            if (iVar13 == 2) {
              iVar3 = 1;
            }
            else {
              bVar2 = param_1[2];
              if (bVar6 < bVar2) {
                pbVar15 = param_1 + 2;
              }
              iVar3 = 1;
              if (bVar6 < bVar2) {
                iVar3 = 2;
              }
              if (bVar6 <= bVar2) {
                bVar6 = bVar2;
              }
            }
            pbVar8 = param_1;
            if (bVar5 <= bVar6) {
              do {
                pbVar12 = pbVar15;
                *pbVar8 = bVar6;
                if ((int)(iVar13 - 2U >> 1) < iVar3) break;
                iVar7 = iVar3 * 2 + 2;
                iVar3 = iVar3 * 2 + 1;
                pbVar15 = param_1 + iVar3;
                if (iVar7 < iVar13) {
                  bVar2 = *pbVar15;
                  bVar6 = pbVar15[1];
                  if (bVar2 < bVar6) {
                    pbVar15 = pbVar15 + 1;
                    iVar3 = iVar7;
                  }
                  if (bVar2 >= bVar6 && bVar2 != bVar6) {
                    bVar6 = bVar2;
                  }
                }
                else {
                  bVar6 = *pbVar15;
                }
                pbVar8 = pbVar12;
              } while (bVar5 <= bVar6);
              *pbVar12 = bVar5;
            }
          }
        }
        pbVar10 = pbVar10 + 1;
        pbVar15 = param_3;
      } while (pbVar10 != param_3);
    }
    param_3 = pbVar15;
    pbStack_28 = param_2;
    if (1 < iVar13) {
      do {
        bVar5 = *param_1;
        iVar3 = 0;
        pbVar15 = param_1;
        do {
          iVar4 = iVar3 * 2 + 2;
          pbVar10 = pbVar15 + iVar3 + 1;
          iVar7 = iVar3 * 2 + 1;
          if (iVar4 < iVar13) {
            bVar6 = pbVar15[iVar3 + 2];
            bVar2 = pbVar15[iVar3 + 1];
            if (bVar2 < bVar6) {
              pbVar10 = pbVar15 + iVar3 + 2;
              iVar7 = iVar4;
            }
            if (bVar2 >= bVar6 && bVar2 != bVar6) {
              bVar6 = bVar2;
            }
          }
          else {
            bVar6 = *pbVar10;
          }
          *pbVar15 = bVar6;
          iVar3 = iVar7;
          pbVar15 = pbVar10;
        } while (iVar7 <= (int)(iVar13 - 2U >> 1));
        pbStack_28 = pbStack_28 + -1;
        if (pbVar10 == pbStack_28) {
          *pbVar10 = bVar5;
        }
        else {
          *pbVar10 = *pbStack_28;
          *pbStack_28 = bVar5;
          if (1 < (int)(pbVar10 + (1 - (int)param_1))) {
            pbVar15 = pbVar10 + (-1 - (int)param_1);
            bVar6 = *pbVar10;
            uVar9 = (uint)pbVar15 >> 1;
            bVar5 = param_1[uVar9];
            if (bVar5 < bVar6) {
              do {
                uVar11 = (uint)pbVar15 >> 1;
                *pbVar10 = bVar5;
                if (uVar9 == 0) break;
                pbVar15 = (byte *)(uVar9 - 1);
                uVar9 = (uint)pbVar15 >> 1;
                bVar5 = param_1[uVar9];
                pbVar10 = param_1 + uVar11;
              } while (bVar5 < bVar6);
              param_1[uVar11] = bVar6;
            }
          }
        }
        bVar1 = 2 < iVar13;
        iVar13 = iVar13 + -1;
      } while (bVar1);
    }
  }
  return param_3;
}


// =========================================================================
// Function: FUN_71b323c0
// Entry: 0x71b323c0 | Size: 430 bytes
// =========================================================================

bool FUN_71b323c0(short *param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  int iVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short *psVar10;
  int iVar11;
  short *psVar12;
  int iVar13;
  
  switch((int)param_2 - (int)param_1 >> 1) {
  case 0:
  case 1:
    break;
  case 2:
    sVar1 = *param_1;
    if (param_2[-1] < sVar1) {
      *param_1 = param_2[-1];
      param_2[-1] = sVar1;
    }
    break;
  case 3:
    sVar1 = *param_1;
    sVar9 = param_1[1];
    sVar2 = param_2[-1];
    if (sVar9 < sVar1) {
      if (sVar2 < sVar9) {
        *param_1 = sVar2;
        param_2[-1] = sVar1;
      }
      else {
        param_1[1] = sVar1;
        *param_1 = sVar9;
        if (param_2[-1] < sVar1) {
          param_1[1] = param_2[-1];
          param_2[-1] = sVar1;
        }
      }
    }
    else if (sVar2 < sVar9) {
      param_1[1] = sVar2;
      param_2[-1] = sVar9;
      sVar1 = param_1[1];
      if (sVar1 < *param_1) {
        param_1[1] = *param_1;
        *param_1 = sVar1;
      }
    }
    break;
  case 4:
    psVar5 = param_1 + 2;
    sVar9 = *psVar5;
    sVar1 = *param_1;
    psVar4 = param_1 + 1;
    sVar2 = *psVar4;
    psVar12 = param_1;
    sVar8 = sVar9;
    if (sVar2 < sVar1) {
      psVar10 = psVar5;
      sVar7 = sVar1;
      if (sVar2 <= sVar9) {
        param_1[1] = sVar1;
        *param_1 = sVar2;
        psVar12 = psVar4;
        if (sVar1 <= sVar9) goto LAB_71b3251c;
      }
LAB_71b32512:
      *psVar10 = sVar1;
      *psVar12 = sVar9;
      sVar8 = sVar7;
    }
    else if (sVar9 < sVar2) {
      *psVar5 = sVar2;
      *psVar4 = sVar9;
      psVar10 = psVar4;
      sVar8 = sVar2;
      sVar7 = sVar2;
      if (sVar9 < sVar1) goto LAB_71b32512;
    }
LAB_71b3251c:
    if (param_2[-1] < sVar8) {
      *psVar5 = param_2[-1];
      param_2[-1] = sVar8;
      sVar1 = *psVar5;
      if (sVar1 < *psVar4) {
        param_1[2] = *psVar4;
        param_1[1] = sVar1;
        if (sVar1 < *param_1) {
          param_1[1] = *param_1;
          *param_1 = sVar1;
        }
      }
    }
    break;
  case 5:
    FUN_71b325a8(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    break;
  default:
    psVar5 = param_1 + 2;
    sVar9 = *psVar5;
    sVar1 = *param_1;
    psVar4 = param_1 + 1;
    sVar2 = *psVar4;
    psVar12 = param_1;
    if (sVar2 < sVar1) {
      psVar10 = psVar5;
      if (sVar2 <= sVar9) {
        param_1[1] = sVar1;
        *param_1 = sVar2;
        psVar12 = psVar4;
        if (sVar1 <= sVar9) goto LAB_71b324ac;
      }
LAB_71b324a6:
      *psVar10 = sVar1;
      *psVar12 = sVar9;
    }
    else if (sVar9 < sVar2) {
      *psVar5 = sVar2;
      *psVar4 = sVar9;
      psVar10 = psVar4;
      if (sVar9 < sVar1) goto LAB_71b324a6;
    }
LAB_71b324ac:
    if (param_1 + 3 != param_2) {
      iVar11 = 0;
      iVar13 = 0;
      psVar4 = param_1 + 3;
      do {
        psVar12 = psVar4;
        sVar9 = *psVar5;
        sVar1 = *psVar12;
        iVar3 = iVar11;
        if (sVar1 < sVar9) {
          do {
            iVar6 = iVar3;
            *(short *)((int)param_1 + iVar6 + 6) = sVar9;
            psVar5 = param_1;
            if (iVar6 == -4) goto LAB_71b324be;
            sVar9 = *(short *)((int)param_1 + iVar6 + 2);
            iVar3 = iVar6 + -2;
          } while (sVar1 < sVar9);
          psVar5 = (short *)((int)param_1 + iVar6 + 4);
LAB_71b324be:
          iVar13 = iVar13 + 1;
          *psVar5 = sVar1;
          if (iVar13 == 8) {
            return (int)psVar12 - (int)param_2 == -2;
          }
        }
        iVar11 = iVar11 + 2;
        psVar4 = psVar12 + 1;
        psVar5 = psVar12;
      } while (psVar12 + 1 != param_2);
    }
  }
  return true;
}


// =========================================================================
// Function: FUN_71b325a8
// Entry: 0x71b325a8 | Size: 222 bytes
// =========================================================================

void FUN_71b325a8(short *param_1,short *param_2,short *param_3,short *param_4,short *param_5)

{
  short sVar1;
  short sVar2;
  short sVar3;
  
  sVar3 = *param_3;
  sVar1 = *param_1;
  sVar2 = *param_2;
  if (sVar2 < sVar1) {
    if (sVar3 < sVar2) {
      *param_1 = sVar3;
    }
    else {
      *param_1 = sVar2;
      *param_2 = sVar1;
      sVar3 = *param_3;
      if (sVar1 <= sVar3) goto LAB_71b32604;
      *param_2 = sVar3;
    }
    *param_3 = sVar1;
    sVar3 = sVar1;
  }
  else if (sVar3 < sVar2) {
    *param_2 = sVar3;
    *param_3 = sVar2;
    sVar1 = *param_1;
    sVar3 = sVar2;
    if (*param_2 < sVar1) {
      *param_1 = *param_2;
      *param_2 = sVar1;
      sVar3 = *param_3;
    }
  }
LAB_71b32604:
  if (*param_4 < sVar3) {
    *param_3 = *param_4;
    *param_4 = sVar3;
    sVar3 = *param_2;
    if (*param_3 < sVar3) {
      *param_2 = *param_3;
      *param_3 = sVar3;
      sVar3 = *param_1;
      if (*param_2 < sVar3) {
        *param_1 = *param_2;
        *param_2 = sVar3;
      }
    }
  }
  sVar3 = *param_4;
  if (*param_5 < sVar3) {
    *param_4 = *param_5;
    *param_5 = sVar3;
    sVar3 = *param_3;
    if (sVar3 <= *param_4) {
      return;
    }
    *param_3 = *param_4;
    *param_4 = sVar3;
    sVar3 = *param_2;
    if (*param_3 < sVar3) {
      *param_2 = *param_3;
      *param_3 = sVar3;
      sVar3 = *param_1;
      if (*param_2 < sVar3) {
        *param_1 = *param_2;
        *param_2 = sVar3;
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71b3269e
// Entry: 0x71b3269e | Size: 596 bytes
// =========================================================================

ushort * FUN_71b3269e(ushort *param_1,ushort *param_2,ushort *param_3)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  ushort *puVar5;
  int iVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  ushort *puVar13;
  ushort *puVar14;
  uint uVar15;
  ushort *puVar16;
  int iVar17;
  
  puVar5 = param_3;
  if (param_1 != param_2) {
    iVar17 = (int)param_2 - (int)param_1 >> 1;
    if (1 < iVar17) {
      uVar15 = iVar17 - 2U >> 1;
      uVar11 = uVar15;
      do {
        if ((int)uVar11 <= (int)uVar15) {
          iVar9 = uVar11 * 2 + 2;
          iVar3 = uVar11 * 2 + 1;
          puVar5 = param_1 + iVar3;
          if (iVar9 < iVar17) {
            uVar12 = (uint)(short)*puVar5;
            uVar8 = (uint)(short)puVar5[1];
            if ((int)uVar12 < (int)uVar8) {
              puVar5 = puVar5 + 1;
              iVar3 = iVar9;
            }
            if ((int)uVar8 < (int)uVar12) {
              uVar8 = uVar12;
            }
          }
          else {
            uVar8 = (uint)*puVar5;
          }
          uVar10 = param_1[uVar11];
          puVar14 = param_1 + uVar11;
          if ((short)uVar10 <= (short)uVar8) {
            do {
              puVar16 = puVar5;
              *puVar14 = (ushort)uVar8;
              if ((int)uVar15 < iVar3) break;
              iVar9 = iVar3 * 2 + 2;
              iVar3 = iVar3 * 2 + 1;
              puVar5 = param_1 + iVar3;
              if (iVar9 < iVar17) {
                uVar12 = (uint)(short)*puVar5;
                uVar8 = (uint)(short)puVar5[1];
                if ((int)uVar12 < (int)uVar8) {
                  puVar5 = puVar5 + 1;
                  iVar3 = iVar9;
                }
                if ((int)uVar8 < (int)uVar12) {
                  uVar8 = uVar12;
                }
              }
              else {
                uVar8 = (uint)*puVar5;
              }
              puVar14 = puVar16;
            } while ((short)uVar10 <= (short)uVar8);
            *puVar16 = uVar10;
          }
        }
        bVar1 = 0 < (int)uVar11;
        uVar11 = uVar11 - 1;
      } while (bVar1);
    }
    puVar5 = param_2;
    if (param_2 != param_3) {
      puVar16 = param_1 + 1;
      puVar14 = param_2;
      do {
        uVar10 = *puVar14;
        if ((short)uVar10 < (short)*param_1) {
          *puVar14 = *param_1;
          *param_1 = uVar10;
          if (1 < iVar17) {
            uVar11 = (uint)(short)*puVar16;
            puVar5 = puVar16;
            if ((int)param_2 - (int)param_1 == 4) {
              iVar3 = 1;
            }
            else {
              iVar3 = 1;
              uVar15 = (uint)(short)param_1[2];
              if ((int)uVar11 < (int)uVar15) {
                iVar3 = 2;
                puVar5 = param_1 + 2;
              }
              if ((int)uVar11 <= (int)uVar15) {
                uVar11 = uVar15;
              }
            }
            puVar4 = param_1;
            if ((short)uVar10 <= (short)uVar11) {
              do {
                puVar13 = puVar5;
                *puVar4 = (ushort)uVar11;
                if ((int)(iVar17 - 2U >> 1) < iVar3) break;
                iVar9 = iVar3 * 2 + 2;
                iVar3 = iVar3 * 2 + 1;
                puVar5 = param_1 + iVar3;
                if (iVar9 < iVar17) {
                  uVar15 = (uint)(short)*puVar5;
                  uVar11 = (uint)(short)puVar5[1];
                  if ((int)uVar15 < (int)uVar11) {
                    puVar5 = puVar5 + 1;
                    iVar3 = iVar9;
                  }
                  if ((int)uVar11 < (int)uVar15) {
                    uVar11 = uVar15;
                  }
                }
                else {
                  uVar11 = (uint)*puVar5;
                }
                puVar4 = puVar13;
              } while ((short)uVar10 <= (short)uVar11);
              *puVar13 = uVar10;
            }
          }
        }
        puVar14 = puVar14 + 1;
        puVar5 = param_3;
      } while (puVar14 != param_3);
    }
    if (1 < iVar17) {
      do {
        uVar10 = *param_1;
        iVar3 = 0;
        puVar14 = param_1;
        do {
          iVar6 = iVar3 * 2 + 2;
          puVar16 = puVar14 + iVar3 + 1;
          iVar9 = iVar3 * 2 + 1;
          if (iVar6 < iVar17) {
            uVar7 = puVar14[iVar3 + 2];
            uVar2 = puVar14[iVar3 + 1];
            if ((short)uVar2 < (short)uVar7) {
              puVar16 = puVar14 + iVar3 + 2;
              iVar9 = iVar6;
            }
            if ((short)uVar7 < (short)uVar2) {
              uVar7 = uVar2;
            }
          }
          else {
            uVar7 = *puVar16;
          }
          *puVar14 = uVar7;
          iVar3 = iVar9;
          puVar14 = puVar16;
        } while (iVar9 <= (int)(iVar17 - 2U >> 1));
        param_2 = param_2 + -1;
        if (puVar16 == param_2) {
          *puVar16 = uVar10;
        }
        else {
          *puVar16 = *param_2;
          *param_2 = uVar10;
          iVar3 = (int)puVar16 + (2 - (int)param_1) >> 1;
          if (1 < iVar3) {
            uVar11 = iVar3 - 2;
            uVar7 = *puVar16;
            uVar15 = uVar11 & 0xfffffffe;
            uVar10 = *(ushort *)((int)param_1 + uVar15);
            if ((short)uVar10 < (short)uVar7) {
              do {
                puVar14 = (ushort *)((int)param_1 + uVar15);
                *puVar16 = uVar10;
                if (uVar11 >> 1 == 0) break;
                uVar11 = (uVar11 >> 1) - 1;
                uVar15 = uVar11 & 0xfffffffe;
                uVar10 = *(ushort *)((int)param_1 + uVar15);
                puVar16 = puVar14;
              } while ((short)uVar10 < (short)uVar7);
              *puVar14 = uVar7;
            }
          }
        }
        bVar1 = 2 < iVar17;
        iVar17 = iVar17 + -1;
      } while (bVar1);
    }
  }
  return puVar5;
}


// =========================================================================
// Function: FUN_71b3290c
// Entry: 0x71b3290c | Size: 410 bytes
// =========================================================================

bool FUN_71b3290c(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  ushort *puVar5;
  int iVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort *puVar10;
  int iVar11;
  ushort *puVar12;
  int iVar13;
  
  switch((int)param_2 - (int)param_1 >> 1) {
  case 0:
  case 1:
    break;
  case 2:
    uVar9 = *param_1;
    if (param_2[-1] < uVar9) {
      *param_1 = param_2[-1];
      param_2[-1] = uVar9;
    }
    break;
  case 3:
    uVar2 = param_2[-1];
    uVar9 = *param_1;
    uVar1 = param_1[1];
    if (uVar1 < uVar9) {
      if (uVar2 < uVar1) {
        *param_1 = uVar2;
        param_2[-1] = uVar9;
      }
      else {
        param_1[1] = uVar9;
        *param_1 = uVar1;
        if (param_2[-1] < uVar9) {
          param_1[1] = param_2[-1];
          param_2[-1] = uVar9;
        }
      }
    }
    else if (uVar2 < uVar1) {
      param_1[1] = uVar2;
      param_2[-1] = uVar1;
      uVar9 = param_1[1];
      if (uVar9 < *param_1) {
        param_1[1] = *param_1;
        *param_1 = uVar9;
      }
    }
    break;
  case 4:
    puVar5 = param_1 + 2;
    uVar1 = *puVar5;
    uVar9 = *param_1;
    puVar4 = param_1 + 1;
    uVar2 = *puVar4;
    puVar12 = param_1;
    uVar8 = uVar1;
    if (uVar2 < uVar9) {
      puVar10 = puVar5;
      uVar7 = uVar9;
      if (uVar2 <= uVar1) {
        param_1[1] = uVar9;
        *param_1 = uVar2;
        puVar12 = puVar4;
        if (uVar9 <= uVar1) goto LAB_71b32a58;
      }
LAB_71b32a4e:
      *puVar10 = uVar9;
      *puVar12 = uVar1;
      uVar8 = uVar7;
    }
    else if (uVar1 < uVar2) {
      *puVar5 = uVar2;
      *puVar4 = uVar1;
      puVar10 = puVar4;
      uVar8 = uVar2;
      uVar7 = uVar2;
      if (uVar1 < uVar9) goto LAB_71b32a4e;
    }
LAB_71b32a58:
    if (param_2[-1] < uVar8) {
      *puVar5 = param_2[-1];
      param_2[-1] = uVar8;
      uVar9 = *puVar5;
      if (uVar9 < *puVar4) {
        param_1[2] = *puVar4;
        param_1[1] = uVar9;
        if (uVar9 < *param_1) {
          param_1[1] = *param_1;
          *param_1 = uVar9;
        }
      }
    }
    break;
  case 5:
    FUN_71b32ae0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    break;
  default:
    puVar5 = param_1 + 2;
    uVar1 = *puVar5;
    uVar9 = *param_1;
    puVar4 = param_1 + 1;
    uVar2 = *puVar4;
    puVar12 = param_1;
    if (uVar2 < uVar9) {
      puVar10 = puVar5;
      if (uVar2 <= uVar1) {
        param_1[1] = uVar9;
        *param_1 = uVar2;
        puVar12 = puVar4;
        if (uVar9 <= uVar1) goto LAB_71b329ea;
      }
LAB_71b329e4:
      *puVar10 = uVar9;
      *puVar12 = uVar1;
    }
    else if (uVar1 < uVar2) {
      *puVar5 = uVar2;
      *puVar4 = uVar1;
      puVar10 = puVar4;
      if (uVar1 < uVar9) goto LAB_71b329e4;
    }
LAB_71b329ea:
    if (param_1 + 3 != param_2) {
      iVar11 = 0;
      iVar13 = 0;
      puVar4 = param_1 + 3;
      do {
        puVar12 = puVar4;
        uVar9 = *puVar5;
        uVar1 = *puVar12;
        iVar3 = iVar11;
        if (uVar1 < uVar9) {
          do {
            iVar6 = iVar3;
            *(ushort *)((int)param_1 + iVar6 + 6) = uVar9;
            puVar5 = param_1;
            if (iVar6 == -4) goto LAB_71b329fc;
            uVar9 = *(ushort *)((int)param_1 + iVar6 + 2);
            iVar3 = iVar6 + -2;
          } while (uVar1 < uVar9);
          puVar5 = (ushort *)((int)param_1 + iVar6 + 4);
LAB_71b329fc:
          iVar13 = iVar13 + 1;
          *puVar5 = uVar1;
          if (iVar13 == 8) {
            return (int)puVar12 - (int)param_2 == -2;
          }
        }
        iVar11 = iVar11 + 2;
        puVar4 = puVar12 + 1;
        puVar5 = puVar12;
      } while (puVar12 + 1 != param_2);
    }
  }
  return true;
}


// =========================================================================
// Function: FUN_71b32ae0
// Entry: 0x71b32ae0 | Size: 198 bytes
// =========================================================================

void FUN_71b32ae0(ushort *param_1,ushort *param_2,ushort *param_3,ushort *param_4,ushort *param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  
  uVar3 = *param_3;
  uVar1 = *param_1;
  uVar2 = *param_2;
  if (uVar2 < uVar1) {
    if (uVar3 < uVar2) {
      *param_1 = uVar3;
    }
    else {
      *param_1 = uVar2;
      *param_2 = uVar1;
      uVar3 = *param_3;
      if (uVar1 <= uVar3) goto LAB_71b32b38;
      *param_2 = uVar3;
    }
    *param_3 = uVar1;
    uVar3 = uVar1;
  }
  else if (uVar3 < uVar2) {
    *param_2 = uVar3;
    *param_3 = uVar2;
    uVar1 = *param_1;
    uVar3 = uVar2;
    if (*param_2 < uVar1) {
      *param_1 = *param_2;
      *param_2 = uVar1;
      uVar3 = *param_3;
    }
  }
LAB_71b32b38:
  if (*param_4 < uVar3) {
    *param_3 = *param_4;
    *param_4 = uVar3;
    uVar3 = *param_2;
    if (*param_3 < uVar3) {
      *param_2 = *param_3;
      *param_3 = uVar3;
      uVar3 = *param_1;
      if (*param_2 < uVar3) {
        *param_1 = *param_2;
        *param_2 = uVar3;
      }
    }
  }
  uVar3 = *param_4;
  if (*param_5 < uVar3) {
    *param_4 = *param_5;
    *param_5 = uVar3;
    uVar3 = *param_3;
    if (uVar3 <= *param_4) {
      return;
    }
    *param_3 = *param_4;
    *param_4 = uVar3;
    uVar3 = *param_2;
    if (*param_3 < uVar3) {
      *param_2 = *param_3;
      *param_3 = uVar3;
      uVar3 = *param_1;
      if (*param_2 < uVar3) {
        *param_1 = *param_2;
        *param_2 = uVar3;
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71b32bbe
// Entry: 0x71b32bbe | Size: 584 bytes
// =========================================================================

ushort * FUN_71b32bbe(ushort *param_1,ushort *param_2,ushort *param_3)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  ushort *puVar5;
  int iVar6;
  uint uVar7;
  ushort uVar8;
  ushort uVar9;
  int iVar10;
  ushort *puVar11;
  ushort *puVar12;
  uint uVar13;
  ushort *puVar14;
  int iVar15;
  
  puVar5 = param_3;
  if (param_1 != param_2) {
    iVar15 = (int)param_2 - (int)param_1 >> 1;
    if (1 < iVar15) {
      uVar13 = iVar15 - 2U >> 1;
      uVar7 = uVar13;
      do {
        if ((int)uVar7 <= (int)uVar13) {
          iVar10 = uVar7 * 2 + 2;
          iVar3 = uVar7 * 2 + 1;
          puVar5 = param_1 + iVar3;
          if (iVar10 < iVar15) {
            uVar9 = *puVar5;
            uVar8 = puVar5[1];
            if (uVar9 < uVar8) {
              puVar5 = puVar5 + 1;
              iVar3 = iVar10;
            }
            if (uVar9 >= uVar8 && uVar9 != uVar8) {
              uVar8 = uVar9;
            }
          }
          else {
            uVar8 = *puVar5;
          }
          uVar9 = param_1[uVar7];
          puVar12 = param_1 + uVar7;
          if (uVar9 <= uVar8) {
            do {
              puVar14 = puVar5;
              *puVar12 = uVar8;
              if ((int)uVar13 < iVar3) break;
              iVar10 = iVar3 * 2 + 2;
              iVar3 = iVar3 * 2 + 1;
              puVar5 = param_1 + iVar3;
              if (iVar10 < iVar15) {
                uVar2 = *puVar5;
                uVar8 = puVar5[1];
                if (uVar2 < uVar8) {
                  puVar5 = puVar5 + 1;
                  iVar3 = iVar10;
                }
                if (uVar2 >= uVar8 && uVar2 != uVar8) {
                  uVar8 = uVar2;
                }
              }
              else {
                uVar8 = *puVar5;
              }
              puVar12 = puVar14;
            } while (uVar9 <= uVar8);
            *puVar14 = uVar9;
          }
        }
        bVar1 = 0 < (int)uVar7;
        uVar7 = uVar7 - 1;
      } while (bVar1);
    }
    puVar5 = param_2;
    if (param_2 != param_3) {
      puVar14 = param_1 + 1;
      puVar12 = param_2;
      do {
        uVar8 = *puVar12;
        if (uVar8 < *param_1) {
          *puVar12 = *param_1;
          *param_1 = uVar8;
          if (1 < iVar15) {
            uVar9 = *puVar14;
            puVar5 = puVar14;
            if ((int)param_2 - (int)param_1 == 4) {
              iVar3 = 1;
            }
            else {
              uVar2 = param_1[2];
              if (uVar9 < uVar2) {
                puVar5 = param_1 + 2;
              }
              iVar3 = 1;
              if (uVar9 < uVar2) {
                iVar3 = 2;
              }
              if (uVar9 <= uVar2) {
                uVar9 = uVar2;
              }
            }
            puVar4 = param_1;
            if (uVar8 <= uVar9) {
              do {
                puVar11 = puVar5;
                *puVar4 = uVar9;
                if ((int)(iVar15 - 2U >> 1) < iVar3) break;
                iVar10 = iVar3 * 2 + 2;
                iVar3 = iVar3 * 2 + 1;
                puVar5 = param_1 + iVar3;
                if (iVar10 < iVar15) {
                  uVar2 = *puVar5;
                  uVar9 = puVar5[1];
                  if (uVar2 < uVar9) {
                    puVar5 = puVar5 + 1;
                    iVar3 = iVar10;
                  }
                  if (uVar2 >= uVar9 && uVar2 != uVar9) {
                    uVar9 = uVar2;
                  }
                }
                else {
                  uVar9 = *puVar5;
                }
                puVar4 = puVar11;
              } while (uVar8 <= uVar9);
              *puVar11 = uVar8;
            }
          }
        }
        puVar12 = puVar12 + 1;
        puVar5 = param_3;
      } while (puVar12 != param_3);
    }
    if (1 < iVar15) {
      do {
        uVar8 = *param_1;
        iVar3 = 0;
        puVar12 = param_1;
        do {
          iVar6 = iVar3 * 2 + 2;
          puVar14 = puVar12 + iVar3 + 1;
          iVar10 = iVar3 * 2 + 1;
          if (iVar6 < iVar15) {
            uVar9 = puVar12[iVar3 + 2];
            uVar2 = puVar12[iVar3 + 1];
            if (uVar2 < uVar9) {
              puVar14 = puVar12 + iVar3 + 2;
              iVar10 = iVar6;
            }
            if (uVar2 >= uVar9 && uVar2 != uVar9) {
              uVar9 = uVar2;
            }
          }
          else {
            uVar9 = *puVar14;
          }
          *puVar12 = uVar9;
          iVar3 = iVar10;
          puVar12 = puVar14;
        } while (iVar10 <= (int)(iVar15 - 2U >> 1));
        param_2 = param_2 + -1;
        if (puVar14 == param_2) {
          *puVar14 = uVar8;
        }
        else {
          *puVar14 = *param_2;
          *param_2 = uVar8;
          iVar3 = (int)puVar14 + (2 - (int)param_1) >> 1;
          if (1 < iVar3) {
            uVar7 = iVar3 - 2;
            uVar9 = *puVar14;
            uVar13 = uVar7 & 0xfffffffe;
            uVar8 = *(ushort *)((int)param_1 + uVar13);
            if (uVar8 < uVar9) {
              do {
                puVar12 = (ushort *)((int)param_1 + uVar13);
                *puVar14 = uVar8;
                if (uVar7 >> 1 == 0) break;
                uVar7 = (uVar7 >> 1) - 1;
                uVar13 = uVar7 & 0xfffffffe;
                uVar8 = *(ushort *)((int)param_1 + uVar13);
                puVar14 = puVar12;
              } while (uVar8 < uVar9);
              *puVar12 = uVar9;
            }
          }
        }
        bVar1 = 2 < iVar15;
        iVar15 = iVar15 + -1;
      } while (bVar1);
    }
  }
  return puVar5;
}


// =========================================================================
// Function: FUN_71b32e20
// Entry: 0x71b32e20 | Size: 408 bytes
// =========================================================================

bool FUN_71b32e20(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  
  switch((int)param_2 - (int)param_1 >> 2) {
  case 0:
  case 1:
    break;
  case 2:
    iVar2 = *param_1;
    if (param_2[-1] < iVar2) {
      *param_1 = param_2[-1];
      param_2[-1] = iVar2;
    }
    break;
  case 3:
    iVar2 = *param_1;
    iVar4 = param_1[1];
    iVar8 = param_2[-1];
    if (iVar4 < iVar2) {
      if (iVar8 < iVar4) {
        *param_1 = iVar8;
        param_2[-1] = iVar2;
        return true;
      }
      *param_1 = iVar4;
      param_1[1] = iVar2;
      if (iVar2 <= param_2[-1]) {
        return true;
      }
      param_1[1] = param_2[-1];
      param_2[-1] = iVar2;
      return true;
    }
    if (iVar4 <= iVar8) {
      return true;
    }
    param_1[1] = iVar8;
    param_2[-1] = iVar4;
    iVar4 = *param_1;
    iVar2 = param_1[1];
    goto LAB_71b32f88;
  case 4:
    piVar5 = param_1 + 2;
    iVar3 = *piVar5;
    iVar4 = *param_1;
    piVar1 = param_1 + 1;
    iVar8 = *piVar1;
    iVar2 = iVar3;
    piVar10 = param_1;
    if (iVar8 < iVar4) {
      iVar9 = iVar4;
      piVar7 = piVar5;
      if (iVar8 <= iVar3) {
        *param_1 = iVar8;
        param_1[1] = iVar4;
        piVar10 = piVar1;
        if (iVar4 <= iVar3) goto LAB_71b32f6a;
      }
LAB_71b32f60:
      *piVar7 = iVar4;
      *piVar10 = iVar3;
      iVar2 = iVar9;
    }
    else if (iVar3 < iVar8) {
      *piVar5 = iVar8;
      *piVar1 = iVar3;
      iVar9 = iVar8;
      iVar2 = iVar8;
      piVar7 = piVar1;
      if (iVar3 < iVar4) goto LAB_71b32f60;
    }
LAB_71b32f6a:
    if (iVar2 <= param_2[-1]) {
      return true;
    }
    *piVar5 = param_2[-1];
    param_2[-1] = iVar2;
    iVar4 = *piVar1;
    iVar2 = *piVar5;
    if (iVar4 <= iVar2) {
      return true;
    }
    param_1[1] = iVar2;
    param_1[2] = iVar4;
    iVar4 = *param_1;
LAB_71b32f88:
    if (iVar2 < iVar4) {
      *param_1 = iVar2;
      param_1[1] = iVar4;
    }
    break;
  case 5:
    FUN_71b32ff2(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    break;
  default:
    piVar5 = param_1 + 2;
    iVar2 = *piVar5;
    iVar4 = *param_1;
    piVar1 = param_1 + 1;
    iVar8 = *piVar1;
    piVar10 = param_1;
    if (iVar8 < iVar4) {
      piVar7 = piVar5;
      if (iVar8 <= iVar2) {
        *param_1 = iVar8;
        param_1[1] = iVar4;
        piVar10 = piVar1;
        if (iVar4 <= iVar2) goto LAB_71b32efa;
      }
LAB_71b32ef4:
      *piVar7 = iVar4;
      *piVar10 = iVar2;
    }
    else if (iVar2 < iVar8) {
      *piVar5 = iVar8;
      *piVar1 = iVar2;
      piVar7 = piVar1;
      if (iVar2 < iVar4) goto LAB_71b32ef4;
    }
LAB_71b32efa:
    if (param_1 + 3 != param_2) {
      iVar2 = 0;
      iVar4 = 0;
      piVar1 = param_1 + 3;
      do {
        piVar10 = piVar1;
        iVar9 = *piVar5;
        iVar3 = *piVar10;
        iVar8 = iVar2;
        if (iVar3 < iVar9) {
          do {
            iVar6 = iVar8;
            *(int *)((int)param_1 + iVar6 + 0xc) = iVar9;
            piVar5 = param_1;
            if (iVar6 == -8) goto LAB_71b32f0c;
            iVar9 = *(int *)((int)param_1 + iVar6 + 4);
            iVar8 = iVar6 + -4;
          } while (iVar3 < iVar9);
          piVar5 = (int *)((int)param_1 + iVar6 + 8);
LAB_71b32f0c:
          iVar4 = iVar4 + 1;
          *piVar5 = iVar3;
          if (iVar4 == 8) {
            return (int)piVar10 - (int)param_2 == -4;
          }
        }
        iVar2 = iVar2 + 4;
        piVar1 = piVar10 + 1;
        piVar5 = piVar10;
      } while (piVar10 + 1 != param_2);
    }
  }
  return true;
}


// =========================================================================
// Function: FUN_71b32ff2
// Entry: 0x71b32ff2 | Size: 198 bytes
// =========================================================================

void FUN_71b32ff2(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_3;
  iVar3 = *param_1;
  iVar2 = *param_2;
  if (iVar2 < iVar3) {
    if (iVar1 < iVar2) {
      *param_1 = iVar1;
    }
    else {
      *param_1 = iVar2;
      *param_2 = iVar3;
      iVar1 = *param_3;
      if (iVar3 <= iVar1) goto LAB_71b3304a;
      *param_2 = iVar1;
    }
    *param_3 = iVar3;
    iVar1 = iVar3;
  }
  else if (iVar1 < iVar2) {
    *param_2 = iVar1;
    *param_3 = iVar2;
    iVar3 = *param_1;
    iVar1 = iVar2;
    if (*param_2 < iVar3) {
      *param_1 = *param_2;
      *param_2 = iVar3;
      iVar1 = *param_3;
    }
  }
LAB_71b3304a:
  if (*param_4 < iVar1) {
    *param_3 = *param_4;
    *param_4 = iVar1;
    iVar1 = *param_2;
    if (*param_3 < iVar1) {
      *param_2 = *param_3;
      *param_3 = iVar1;
      iVar1 = *param_1;
      if (*param_2 < iVar1) {
        *param_1 = *param_2;
        *param_2 = iVar1;
      }
    }
  }
  iVar1 = *param_4;
  if (*param_5 < iVar1) {
    *param_4 = *param_5;
    *param_5 = iVar1;
    iVar1 = *param_3;
    if (iVar1 <= *param_4) {
      return;
    }
    *param_3 = *param_4;
    *param_4 = iVar1;
    iVar1 = *param_2;
    if (*param_3 < iVar1) {
      *param_2 = *param_3;
      *param_3 = iVar1;
      iVar1 = *param_1;
      if (*param_2 < iVar1) {
        *param_1 = *param_2;
        *param_2 = iVar1;
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71b330d0
// Entry: 0x71b330d0 | Size: 582 bytes
// =========================================================================

int * FUN_71b330d0(int *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  int *piVar15;
  int *piStack_28;
  
  if (param_1 != param_2) {
    iVar13 = (int)param_2 - (int)param_1 >> 2;
    if (1 < iVar13) {
      uVar14 = iVar13 - 2U >> 1;
      uVar8 = uVar14;
      do {
        if ((int)uVar8 <= (int)uVar14) {
          iVar4 = (uVar8 & 0x3fffffff) * 2;
          iVar3 = iVar4 + 1;
          iVar4 = iVar4 + 2;
          piVar12 = param_1 + iVar3;
          if (iVar4 < iVar13) {
            iVar9 = *piVar12;
            iVar7 = piVar12[1];
            if (iVar9 < iVar7) {
              piVar12 = piVar12 + 1;
              iVar3 = iVar4;
            }
            if (iVar7 < iVar9) {
              iVar7 = iVar9;
            }
          }
          else {
            iVar7 = *piVar12;
          }
          iVar4 = param_1[uVar8];
          piVar5 = param_1 + uVar8;
          if (iVar4 <= iVar7) {
            do {
              piVar10 = piVar12;
              *piVar5 = iVar7;
              if ((int)uVar14 < iVar3) break;
              iVar9 = iVar3 * 2 + 2;
              iVar3 = iVar3 * 2 + 1;
              piVar12 = param_1 + iVar3;
              if (iVar9 < iVar13) {
                iVar6 = *piVar12;
                iVar7 = piVar12[1];
                if (iVar6 < iVar7) {
                  piVar12 = piVar12 + 1;
                  iVar3 = iVar9;
                }
                if (iVar7 < iVar6) {
                  iVar7 = iVar6;
                }
              }
              else {
                iVar7 = *piVar12;
              }
              piVar5 = piVar10;
            } while (iVar4 <= iVar7);
            *piVar10 = iVar4;
          }
        }
        bVar1 = 0 < (int)uVar8;
        uVar8 = uVar8 - 1;
      } while (bVar1);
    }
    piVar12 = param_2;
    if (param_2 != param_3) {
      piVar10 = param_1 + 1;
      piVar5 = param_2;
      do {
        iVar3 = *piVar5;
        if (iVar3 < *param_1) {
          *piVar5 = *param_1;
          *param_1 = iVar3;
          if (1 < iVar13) {
            iVar4 = *piVar10;
            piVar12 = piVar10;
            if ((int)param_2 - (int)param_1 == 8) {
              iVar9 = 1;
            }
            else {
              iVar7 = param_1[2];
              if (iVar4 < iVar7) {
                piVar12 = param_1 + 2;
              }
              iVar9 = 1;
              if (iVar4 < iVar7) {
                iVar9 = 2;
              }
              if (iVar4 <= iVar7) {
                iVar4 = iVar7;
              }
            }
            piVar11 = param_1;
            if (iVar3 <= iVar4) {
              do {
                piVar15 = piVar12;
                *piVar11 = iVar4;
                if ((int)(iVar13 - 2U >> 1) < iVar9) break;
                iVar7 = iVar9 * 2 + 2;
                iVar9 = iVar9 * 2 + 1;
                piVar12 = param_1 + iVar9;
                if (iVar7 < iVar13) {
                  iVar6 = *piVar12;
                  iVar4 = piVar12[1];
                  if (iVar6 < iVar4) {
                    piVar12 = piVar12 + 1;
                    iVar9 = iVar7;
                  }
                  if (iVar4 < iVar6) {
                    iVar4 = iVar6;
                  }
                }
                else {
                  iVar4 = *piVar12;
                }
                piVar11 = piVar15;
              } while (iVar3 <= iVar4);
              *piVar15 = iVar3;
            }
          }
        }
        piVar5 = piVar5 + 1;
        piVar12 = param_3;
      } while (piVar5 != param_3);
    }
    param_3 = piVar12;
    piStack_28 = param_2;
    if (1 < iVar13) {
      do {
        iVar4 = *param_1;
        iVar3 = 0;
        piVar12 = param_1;
        do {
          iVar9 = iVar3 * 2 + 2;
          piVar5 = piVar12 + iVar3 + 1;
          iVar7 = iVar3 * 2 + 1;
          if (iVar9 < iVar13) {
            iVar6 = piVar12[iVar3 + 2];
            iVar2 = piVar12[iVar3 + 1];
            if (iVar2 < iVar6) {
              piVar5 = piVar12 + iVar3 + 2;
              iVar7 = iVar9;
            }
            if (iVar6 < iVar2) {
              iVar6 = iVar2;
            }
          }
          else {
            iVar6 = *piVar5;
          }
          *piVar12 = iVar6;
          iVar3 = iVar7;
          piVar12 = piVar5;
        } while (iVar7 <= (int)(iVar13 - 2U >> 1));
        piStack_28 = piStack_28 + -1;
        if (piVar5 == piStack_28) {
          *piVar5 = iVar4;
        }
        else {
          *piVar5 = *piStack_28;
          *piStack_28 = iVar4;
          iVar3 = (int)piVar5 + (4 - (int)param_1) >> 2;
          if (1 < iVar3) {
            iVar4 = *piVar5;
            uVar8 = iVar3 - 2U >> 1;
            iVar3 = param_1[uVar8];
            if (iVar3 < iVar4) {
              do {
                piVar12 = param_1 + uVar8;
                *piVar5 = iVar3;
                if (uVar8 == 0) break;
                uVar8 = uVar8 - 1 >> 1;
                iVar3 = param_1[uVar8];
                piVar5 = piVar12;
              } while (iVar3 < iVar4);
              *piVar12 = iVar4;
            }
          }
        }
        bVar1 = 2 < iVar13;
        iVar13 = iVar13 + -1;
      } while (bVar1);
    }
  }
  return param_3;
}


// =========================================================================
// Function: FUN_71b33330
// Entry: 0x71b33330 | Size: 408 bytes
// =========================================================================

bool FUN_71b33330(uint *param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  
  switch((int)param_2 - (int)param_1 >> 2) {
  case 0:
  case 1:
    break;
  case 2:
    uVar3 = *param_1;
    if (param_2[-1] < uVar3) {
      *param_1 = param_2[-1];
      param_2[-1] = uVar3;
    }
    break;
  case 3:
    uVar3 = *param_1;
    uVar4 = param_1[1];
    uVar10 = param_2[-1];
    if (uVar4 < uVar3) {
      if (uVar10 < uVar4) {
        *param_1 = uVar10;
        param_2[-1] = uVar3;
        return true;
      }
      *param_1 = uVar4;
      param_1[1] = uVar3;
      if (uVar3 <= param_2[-1]) {
        return true;
      }
      param_1[1] = param_2[-1];
      param_2[-1] = uVar3;
      return true;
    }
    if (uVar4 <= uVar10) {
      return true;
    }
    param_1[1] = uVar10;
    param_2[-1] = uVar4;
    uVar4 = *param_1;
    uVar3 = param_1[1];
    goto LAB_71b33498;
  case 4:
    puVar5 = param_1 + 2;
    uVar13 = *puVar5;
    uVar4 = *param_1;
    puVar2 = param_1 + 1;
    uVar10 = *puVar2;
    uVar3 = uVar13;
    puVar11 = param_1;
    if (uVar10 < uVar4) {
      uVar7 = uVar4;
      puVar8 = puVar5;
      if (uVar10 <= uVar13) {
        *param_1 = uVar10;
        param_1[1] = uVar4;
        puVar11 = puVar2;
        if (uVar4 <= uVar13) goto LAB_71b3347a;
      }
LAB_71b33470:
      *puVar8 = uVar4;
      *puVar11 = uVar13;
      uVar3 = uVar7;
    }
    else if (uVar13 < uVar10) {
      *puVar5 = uVar10;
      *puVar2 = uVar13;
      uVar7 = uVar10;
      uVar3 = uVar10;
      puVar8 = puVar2;
      if (uVar13 < uVar4) goto LAB_71b33470;
    }
LAB_71b3347a:
    if (uVar3 <= param_2[-1]) {
      return true;
    }
    *puVar5 = param_2[-1];
    param_2[-1] = uVar3;
    uVar4 = *puVar2;
    uVar3 = *puVar5;
    if (uVar4 <= uVar3) {
      return true;
    }
    param_1[1] = uVar3;
    param_1[2] = uVar4;
    uVar4 = *param_1;
LAB_71b33498:
    if (uVar3 < uVar4) {
      *param_1 = uVar3;
      param_1[1] = uVar4;
    }
    break;
  case 5:
    FUN_71b33502(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    break;
  default:
    puVar5 = param_1 + 2;
    uVar3 = *puVar5;
    uVar4 = *param_1;
    puVar2 = param_1 + 1;
    uVar10 = *puVar2;
    puVar11 = param_1;
    if (uVar10 < uVar4) {
      puVar8 = puVar5;
      if (uVar10 <= uVar3) {
        *param_1 = uVar10;
        param_1[1] = uVar4;
        puVar11 = puVar2;
        if (uVar4 <= uVar3) goto LAB_71b3340a;
      }
LAB_71b33404:
      *puVar8 = uVar4;
      *puVar11 = uVar3;
    }
    else if (uVar3 < uVar10) {
      *puVar5 = uVar10;
      *puVar2 = uVar3;
      puVar8 = puVar2;
      if (uVar3 < uVar4) goto LAB_71b33404;
    }
LAB_71b3340a:
    if (param_1 + 3 != param_2) {
      iVar9 = 0;
      iVar12 = 0;
      puVar2 = param_1 + 3;
      do {
        puVar11 = puVar2;
        uVar4 = *puVar5;
        uVar3 = *puVar11;
        iVar1 = iVar9;
        if (uVar3 < uVar4) {
          do {
            iVar6 = iVar1;
            *(uint *)((int)param_1 + iVar6 + 0xc) = uVar4;
            puVar5 = param_1;
            if (iVar6 == -8) goto LAB_71b3341c;
            uVar4 = *(uint *)((int)param_1 + iVar6 + 4);
            iVar1 = iVar6 + -4;
          } while (uVar3 < uVar4);
          puVar5 = (uint *)((int)param_1 + iVar6 + 8);
LAB_71b3341c:
          iVar12 = iVar12 + 1;
          *puVar5 = uVar3;
          if (iVar12 == 8) {
            return (int)puVar11 - (int)param_2 == -4;
          }
        }
        iVar9 = iVar9 + 4;
        puVar2 = puVar11 + 1;
        puVar5 = puVar11;
      } while (puVar11 + 1 != param_2);
    }
  }
  return true;
}


// =========================================================================
// Function: FUN_71b33502
// Entry: 0x71b33502 | Size: 198 bytes
// =========================================================================

void FUN_71b33502(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *param_3;
  uVar3 = *param_1;
  uVar2 = *param_2;
  if (uVar2 < uVar3) {
    if (uVar1 < uVar2) {
      *param_1 = uVar1;
    }
    else {
      *param_1 = uVar2;
      *param_2 = uVar3;
      uVar1 = *param_3;
      if (uVar3 <= uVar1) goto LAB_71b3355a;
      *param_2 = uVar1;
    }
    *param_3 = uVar3;
    uVar1 = uVar3;
  }
  else if (uVar1 < uVar2) {
    *param_2 = uVar1;
    *param_3 = uVar2;
    uVar3 = *param_1;
    uVar1 = uVar2;
    if (*param_2 < uVar3) {
      *param_1 = *param_2;
      *param_2 = uVar3;
      uVar1 = *param_3;
    }
  }
LAB_71b3355a:
  if (*param_4 < uVar1) {
    *param_3 = *param_4;
    *param_4 = uVar1;
    uVar1 = *param_2;
    if (*param_3 < uVar1) {
      *param_2 = *param_3;
      *param_3 = uVar1;
      uVar1 = *param_1;
      if (*param_2 < uVar1) {
        *param_1 = *param_2;
        *param_2 = uVar1;
      }
    }
  }
  uVar1 = *param_4;
  if (*param_5 < uVar1) {
    *param_4 = *param_5;
    *param_5 = uVar1;
    uVar1 = *param_3;
    if (uVar1 <= *param_4) {
      return;
    }
    *param_3 = *param_4;
    *param_4 = uVar1;
    uVar1 = *param_2;
    if (*param_3 < uVar1) {
      *param_2 = *param_3;
      *param_3 = uVar1;
      uVar1 = *param_1;
      if (*param_2 < uVar1) {
        *param_1 = *param_2;
        *param_2 = uVar1;
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71b335e0
// Entry: 0x71b335e0 | Size: 582 bytes
// =========================================================================

uint * FUN_71b335e0(uint *param_1,uint *param_2,uint *param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  uint *puStack_28;
  
  if (param_1 != param_2) {
    iVar13 = (int)param_2 - (int)param_1 >> 2;
    if (1 < iVar13) {
      uVar14 = iVar13 - 2U >> 1;
      uVar3 = uVar14;
      do {
        if ((int)uVar3 <= (int)uVar14) {
          iVar5 = (uVar3 & 0x3fffffff) * 2;
          iVar2 = iVar5 + 1;
          iVar5 = iVar5 + 2;
          puVar11 = param_1 + iVar2;
          if (iVar5 < iVar13) {
            uVar8 = *puVar11;
            uVar7 = puVar11[1];
            if (uVar8 < uVar7) {
              puVar11 = puVar11 + 1;
              iVar2 = iVar5;
            }
            if (uVar7 < uVar8) {
              uVar7 = uVar8;
            }
          }
          else {
            uVar7 = *puVar11;
          }
          uVar8 = param_1[uVar3];
          puVar6 = param_1 + uVar3;
          if (uVar8 <= uVar7) {
            do {
              puVar9 = puVar11;
              *puVar6 = uVar7;
              if ((int)uVar14 < iVar2) break;
              iVar5 = iVar2 * 2 + 2;
              iVar2 = iVar2 * 2 + 1;
              puVar11 = param_1 + iVar2;
              if (iVar5 < iVar13) {
                uVar12 = *puVar11;
                uVar7 = puVar11[1];
                if (uVar12 < uVar7) {
                  puVar11 = puVar11 + 1;
                  iVar2 = iVar5;
                }
                if (uVar7 < uVar12) {
                  uVar7 = uVar12;
                }
              }
              else {
                uVar7 = *puVar11;
              }
              puVar6 = puVar9;
            } while (uVar8 <= uVar7);
            *puVar9 = uVar8;
          }
        }
        bVar1 = 0 < (int)uVar3;
        uVar3 = uVar3 - 1;
      } while (bVar1);
    }
    puVar11 = param_2;
    if (param_2 != param_3) {
      puVar9 = param_1 + 1;
      puVar6 = param_2;
      do {
        uVar3 = *puVar6;
        if (uVar3 < *param_1) {
          *puVar6 = *param_1;
          *param_1 = uVar3;
          if (1 < iVar13) {
            uVar14 = *puVar9;
            puVar11 = puVar9;
            if ((int)param_2 - (int)param_1 == 8) {
              iVar2 = 1;
            }
            else {
              uVar7 = param_1[2];
              if (uVar14 < uVar7) {
                puVar11 = param_1 + 2;
              }
              iVar2 = 1;
              if (uVar14 < uVar7) {
                iVar2 = 2;
              }
              if (uVar14 <= uVar7) {
                uVar14 = uVar7;
              }
            }
            puVar10 = param_1;
            if (uVar3 <= uVar14) {
              do {
                puVar15 = puVar11;
                *puVar10 = uVar14;
                if ((int)(iVar13 - 2U >> 1) < iVar2) break;
                iVar5 = iVar2 * 2 + 2;
                iVar2 = iVar2 * 2 + 1;
                puVar11 = param_1 + iVar2;
                if (iVar5 < iVar13) {
                  uVar7 = *puVar11;
                  uVar14 = puVar11[1];
                  if (uVar7 < uVar14) {
                    puVar11 = puVar11 + 1;
                    iVar2 = iVar5;
                  }
                  if (uVar14 < uVar7) {
                    uVar14 = uVar7;
                  }
                }
                else {
                  uVar14 = *puVar11;
                }
                puVar10 = puVar15;
              } while (uVar3 <= uVar14);
              *puVar15 = uVar3;
            }
          }
        }
        puVar6 = puVar6 + 1;
        puVar11 = param_3;
      } while (puVar6 != param_3);
    }
    param_3 = puVar11;
    puStack_28 = param_2;
    if (1 < iVar13) {
      do {
        uVar3 = *param_1;
        iVar2 = 0;
        puVar11 = param_1;
        do {
          iVar4 = iVar2 * 2 + 2;
          puVar6 = puVar11 + iVar2 + 1;
          iVar5 = iVar2 * 2 + 1;
          if (iVar4 < iVar13) {
            uVar14 = puVar11[iVar2 + 2];
            uVar7 = puVar11[iVar2 + 1];
            if (uVar7 < uVar14) {
              puVar6 = puVar11 + iVar2 + 2;
              iVar5 = iVar4;
            }
            if (uVar14 < uVar7) {
              uVar14 = uVar7;
            }
          }
          else {
            uVar14 = *puVar6;
          }
          *puVar11 = uVar14;
          iVar2 = iVar5;
          puVar11 = puVar6;
        } while (iVar5 <= (int)(iVar13 - 2U >> 1));
        puStack_28 = puStack_28 + -1;
        if (puVar6 == puStack_28) {
          *puVar6 = uVar3;
        }
        else {
          *puVar6 = *puStack_28;
          *puStack_28 = uVar3;
          iVar2 = (int)puVar6 + (4 - (int)param_1) >> 2;
          if (1 < iVar2) {
            uVar7 = *puVar6;
            uVar14 = iVar2 - 2U >> 1;
            uVar3 = param_1[uVar14];
            if (uVar3 < uVar7) {
              do {
                puVar11 = param_1 + uVar14;
                *puVar6 = uVar3;
                if (uVar14 == 0) break;
                uVar14 = uVar14 - 1 >> 1;
                uVar3 = param_1[uVar14];
                puVar6 = puVar11;
              } while (uVar3 < uVar7);
              *puVar11 = uVar7;
            }
          }
        }
        bVar1 = 2 < iVar13;
        iVar13 = iVar13 + -1;
      } while (bVar1);
    }
  }
  return param_3;
}


// =========================================================================
// Function: FUN_71b33840
// Entry: 0x71b33840 | Size: 408 bytes
// =========================================================================

bool FUN_71b33840(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  
  switch((int)param_2 - (int)param_1 >> 2) {
  case 0:
  case 1:
    break;
  case 2:
    iVar2 = *param_1;
    if (param_2[-1] < iVar2) {
      *param_1 = param_2[-1];
      param_2[-1] = iVar2;
    }
    break;
  case 3:
    iVar2 = *param_1;
    iVar4 = param_1[1];
    iVar8 = param_2[-1];
    if (iVar4 < iVar2) {
      if (iVar8 < iVar4) {
        *param_1 = iVar8;
        param_2[-1] = iVar2;
        return true;
      }
      *param_1 = iVar4;
      param_1[1] = iVar2;
      if (iVar2 <= param_2[-1]) {
        return true;
      }
      param_1[1] = param_2[-1];
      param_2[-1] = iVar2;
      return true;
    }
    if (iVar4 <= iVar8) {
      return true;
    }
    param_1[1] = iVar8;
    param_2[-1] = iVar4;
    iVar4 = *param_1;
    iVar2 = param_1[1];
    goto LAB_71b339a8;
  case 4:
    piVar5 = param_1 + 2;
    iVar3 = *piVar5;
    iVar4 = *param_1;
    piVar1 = param_1 + 1;
    iVar8 = *piVar1;
    iVar2 = iVar3;
    piVar10 = param_1;
    if (iVar8 < iVar4) {
      iVar9 = iVar4;
      piVar7 = piVar5;
      if (iVar8 <= iVar3) {
        *param_1 = iVar8;
        param_1[1] = iVar4;
        piVar10 = piVar1;
        if (iVar4 <= iVar3) goto LAB_71b3398a;
      }
LAB_71b33980:
      *piVar7 = iVar4;
      *piVar10 = iVar3;
      iVar2 = iVar9;
    }
    else if (iVar3 < iVar8) {
      *piVar5 = iVar8;
      *piVar1 = iVar3;
      iVar9 = iVar8;
      iVar2 = iVar8;
      piVar7 = piVar1;
      if (iVar3 < iVar4) goto LAB_71b33980;
    }
LAB_71b3398a:
    if (iVar2 <= param_2[-1]) {
      return true;
    }
    *piVar5 = param_2[-1];
    param_2[-1] = iVar2;
    iVar4 = *piVar1;
    iVar2 = *piVar5;
    if (iVar4 <= iVar2) {
      return true;
    }
    param_1[1] = iVar2;
    param_1[2] = iVar4;
    iVar4 = *param_1;
LAB_71b339a8:
    if (iVar2 < iVar4) {
      *param_1 = iVar2;
      param_1[1] = iVar4;
    }
    break;
  case 5:
    FUN_71b33a12(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    break;
  default:
    piVar5 = param_1 + 2;
    iVar2 = *piVar5;
    iVar4 = *param_1;
    piVar1 = param_1 + 1;
    iVar8 = *piVar1;
    piVar10 = param_1;
    if (iVar8 < iVar4) {
      piVar7 = piVar5;
      if (iVar8 <= iVar2) {
        *param_1 = iVar8;
        param_1[1] = iVar4;
        piVar10 = piVar1;
        if (iVar4 <= iVar2) goto LAB_71b3391a;
      }
LAB_71b33914:
      *piVar7 = iVar4;
      *piVar10 = iVar2;
    }
    else if (iVar2 < iVar8) {
      *piVar5 = iVar8;
      *piVar1 = iVar2;
      piVar7 = piVar1;
      if (iVar2 < iVar4) goto LAB_71b33914;
    }
LAB_71b3391a:
    if (param_1 + 3 != param_2) {
      iVar2 = 0;
      iVar4 = 0;
      piVar1 = param_1 + 3;
      do {
        piVar10 = piVar1;
        iVar9 = *piVar5;
        iVar3 = *piVar10;
        iVar8 = iVar2;
        if (iVar3 < iVar9) {
          do {
            iVar6 = iVar8;
            *(int *)((int)param_1 + iVar6 + 0xc) = iVar9;
            piVar5 = param_1;
            if (iVar6 == -8) goto LAB_71b3392c;
            iVar9 = *(int *)((int)param_1 + iVar6 + 4);
            iVar8 = iVar6 + -4;
          } while (iVar3 < iVar9);
          piVar5 = (int *)((int)param_1 + iVar6 + 8);
LAB_71b3392c:
          iVar4 = iVar4 + 1;
          *piVar5 = iVar3;
          if (iVar4 == 8) {
            return (int)piVar10 - (int)param_2 == -4;
          }
        }
        iVar2 = iVar2 + 4;
        piVar1 = piVar10 + 1;
        piVar5 = piVar10;
      } while (piVar10 + 1 != param_2);
    }
  }
  return true;
}


// =========================================================================
// Function: FUN_71b33a12
// Entry: 0x71b33a12 | Size: 198 bytes
// =========================================================================

void FUN_71b33a12(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_3;
  iVar3 = *param_1;
  iVar2 = *param_2;
  if (iVar2 < iVar3) {
    if (iVar1 < iVar2) {
      *param_1 = iVar1;
    }
    else {
      *param_1 = iVar2;
      *param_2 = iVar3;
      iVar1 = *param_3;
      if (iVar3 <= iVar1) goto LAB_71b33a6a;
      *param_2 = iVar1;
    }
    *param_3 = iVar3;
    iVar1 = iVar3;
  }
  else if (iVar1 < iVar2) {
    *param_2 = iVar1;
    *param_3 = iVar2;
    iVar3 = *param_1;
    iVar1 = iVar2;
    if (*param_2 < iVar3) {
      *param_1 = *param_2;
      *param_2 = iVar3;
      iVar1 = *param_3;
    }
  }
LAB_71b33a6a:
  if (*param_4 < iVar1) {
    *param_3 = *param_4;
    *param_4 = iVar1;
    iVar1 = *param_2;
    if (*param_3 < iVar1) {
      *param_2 = *param_3;
      *param_3 = iVar1;
      iVar1 = *param_1;
      if (*param_2 < iVar1) {
        *param_1 = *param_2;
        *param_2 = iVar1;
      }
    }
  }
  iVar1 = *param_4;
  if (*param_5 < iVar1) {
    *param_4 = *param_5;
    *param_5 = iVar1;
    iVar1 = *param_3;
    if (iVar1 <= *param_4) {
      return;
    }
    *param_3 = *param_4;
    *param_4 = iVar1;
    iVar1 = *param_2;
    if (*param_3 < iVar1) {
      *param_2 = *param_3;
      *param_3 = iVar1;
      iVar1 = *param_1;
      if (*param_2 < iVar1) {
        *param_1 = *param_2;
        *param_2 = iVar1;
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71b33af0
// Entry: 0x71b33af0 | Size: 582 bytes
// =========================================================================

int * FUN_71b33af0(int *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  int *piVar15;
  int *piStack_28;
  
  if (param_1 != param_2) {
    iVar13 = (int)param_2 - (int)param_1 >> 2;
    if (1 < iVar13) {
      uVar14 = iVar13 - 2U >> 1;
      uVar8 = uVar14;
      do {
        if ((int)uVar8 <= (int)uVar14) {
          iVar4 = (uVar8 & 0x3fffffff) * 2;
          iVar3 = iVar4 + 1;
          iVar4 = iVar4 + 2;
          piVar12 = param_1 + iVar3;
          if (iVar4 < iVar13) {
            iVar9 = *piVar12;
            iVar7 = piVar12[1];
            if (iVar9 < iVar7) {
              piVar12 = piVar12 + 1;
              iVar3 = iVar4;
            }
            if (iVar7 < iVar9) {
              iVar7 = iVar9;
            }
          }
          else {
            iVar7 = *piVar12;
          }
          iVar4 = param_1[uVar8];
          piVar5 = param_1 + uVar8;
          if (iVar4 <= iVar7) {
            do {
              piVar10 = piVar12;
              *piVar5 = iVar7;
              if ((int)uVar14 < iVar3) break;
              iVar9 = iVar3 * 2 + 2;
              iVar3 = iVar3 * 2 + 1;
              piVar12 = param_1 + iVar3;
              if (iVar9 < iVar13) {
                iVar6 = *piVar12;
                iVar7 = piVar12[1];
                if (iVar6 < iVar7) {
                  piVar12 = piVar12 + 1;
                  iVar3 = iVar9;
                }
                if (iVar7 < iVar6) {
                  iVar7 = iVar6;
                }
              }
              else {
                iVar7 = *piVar12;
              }
              piVar5 = piVar10;
            } while (iVar4 <= iVar7);
            *piVar10 = iVar4;
          }
        }
        bVar1 = 0 < (int)uVar8;
        uVar8 = uVar8 - 1;
      } while (bVar1);
    }
    piVar12 = param_2;
    if (param_2 != param_3) {
      piVar10 = param_1 + 1;
      piVar5 = param_2;
      do {
        iVar3 = *piVar5;
        if (iVar3 < *param_1) {
          *piVar5 = *param_1;
          *param_1 = iVar3;
          if (1 < iVar13) {
            iVar4 = *piVar10;
            piVar12 = piVar10;
            if ((int)param_2 - (int)param_1 == 8) {
              iVar9 = 1;
            }
            else {
              iVar7 = param_1[2];
              if (iVar4 < iVar7) {
                piVar12 = param_1 + 2;
              }
              iVar9 = 1;
              if (iVar4 < iVar7) {
                iVar9 = 2;
              }
              if (iVar4 <= iVar7) {
                iVar4 = iVar7;
              }
            }
            piVar11 = param_1;
            if (iVar3 <= iVar4) {
              do {
                piVar15 = piVar12;
                *piVar11 = iVar4;
                if ((int)(iVar13 - 2U >> 1) < iVar9) break;
                iVar7 = iVar9 * 2 + 2;
                iVar9 = iVar9 * 2 + 1;
                piVar12 = param_1 + iVar9;
                if (iVar7 < iVar13) {
                  iVar6 = *piVar12;
                  iVar4 = piVar12[1];
                  if (iVar6 < iVar4) {
                    piVar12 = piVar12 + 1;
                    iVar9 = iVar7;
                  }
                  if (iVar4 < iVar6) {
                    iVar4 = iVar6;
                  }
                }
                else {
                  iVar4 = *piVar12;
                }
                piVar11 = piVar15;
              } while (iVar3 <= iVar4);
              *piVar15 = iVar3;
            }
          }
        }
        piVar5 = piVar5 + 1;
        piVar12 = param_3;
      } while (piVar5 != param_3);
    }
    param_3 = piVar12;
    piStack_28 = param_2;
    if (1 < iVar13) {
      do {
        iVar4 = *param_1;
        iVar3 = 0;
        piVar12 = param_1;
        do {
          iVar9 = iVar3 * 2 + 2;
          piVar5 = piVar12 + iVar3 + 1;
          iVar7 = iVar3 * 2 + 1;
          if (iVar9 < iVar13) {
            iVar6 = piVar12[iVar3 + 2];
            iVar2 = piVar12[iVar3 + 1];
            if (iVar2 < iVar6) {
              piVar5 = piVar12 + iVar3 + 2;
              iVar7 = iVar9;
            }
            if (iVar6 < iVar2) {
              iVar6 = iVar2;
            }
          }
          else {
            iVar6 = *piVar5;
          }
          *piVar12 = iVar6;
          iVar3 = iVar7;
          piVar12 = piVar5;
        } while (iVar7 <= (int)(iVar13 - 2U >> 1));
        piStack_28 = piStack_28 + -1;
        if (piVar5 == piStack_28) {
          *piVar5 = iVar4;
        }
        else {
          *piVar5 = *piStack_28;
          *piStack_28 = iVar4;
          iVar3 = (int)piVar5 + (4 - (int)param_1) >> 2;
          if (1 < iVar3) {
            iVar4 = *piVar5;
            uVar8 = iVar3 - 2U >> 1;
            iVar3 = param_1[uVar8];
            if (iVar3 < iVar4) {
              do {
                piVar12 = param_1 + uVar8;
                *piVar5 = iVar3;
                if (uVar8 == 0) break;
                uVar8 = uVar8 - 1 >> 1;
                iVar3 = param_1[uVar8];
                piVar5 = piVar12;
              } while (iVar3 < iVar4);
              *piVar12 = iVar4;
            }
          }
        }
        bVar1 = 2 < iVar13;
        iVar13 = iVar13 + -1;
      } while (bVar1);
    }
  }
  return param_3;
}


// =========================================================================
// Function: FUN_71b33d50
// Entry: 0x71b33d50 | Size: 408 bytes
// =========================================================================

bool FUN_71b33d50(uint *param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  
  switch((int)param_2 - (int)param_1 >> 2) {
  case 0:
  case 1:
    break;
  case 2:
    uVar3 = *param_1;
    if (param_2[-1] < uVar3) {
      *param_1 = param_2[-1];
      param_2[-1] = uVar3;
    }
    break;
  case 3:
    uVar3 = *param_1;
    uVar4 = param_1[1];
    uVar10 = param_2[-1];
    if (uVar4 < uVar3) {
      if (uVar10 < uVar4) {
        *param_1 = uVar10;
        param_2[-1] = uVar3;
        return true;
      }
      *param_1 = uVar4;
      param_1[1] = uVar3;
      if (uVar3 <= param_2[-1]) {
        return true;
      }
      param_1[1] = param_2[-1];
      param_2[-1] = uVar3;
      return true;
    }
    if (uVar4 <= uVar10) {
      return true;
    }
    param_1[1] = uVar10;
    param_2[-1] = uVar4;
    uVar4 = *param_1;
    uVar3 = param_1[1];
    goto LAB_71b33eb8;
  case 4:
    puVar5 = param_1 + 2;
    uVar13 = *puVar5;
    uVar4 = *param_1;
    puVar2 = param_1 + 1;
    uVar10 = *puVar2;
    uVar3 = uVar13;
    puVar11 = param_1;
    if (uVar10 < uVar4) {
      uVar7 = uVar4;
      puVar8 = puVar5;
      if (uVar10 <= uVar13) {
        *param_1 = uVar10;
        param_1[1] = uVar4;
        puVar11 = puVar2;
        if (uVar4 <= uVar13) goto LAB_71b33e9a;
      }
LAB_71b33e90:
      *puVar8 = uVar4;
      *puVar11 = uVar13;
      uVar3 = uVar7;
    }
    else if (uVar13 < uVar10) {
      *puVar5 = uVar10;
      *puVar2 = uVar13;
      uVar7 = uVar10;
      uVar3 = uVar10;
      puVar8 = puVar2;
      if (uVar13 < uVar4) goto LAB_71b33e90;
    }
LAB_71b33e9a:
    if (uVar3 <= param_2[-1]) {
      return true;
    }
    *puVar5 = param_2[-1];
    param_2[-1] = uVar3;
    uVar4 = *puVar2;
    uVar3 = *puVar5;
    if (uVar4 <= uVar3) {
      return true;
    }
    param_1[1] = uVar3;
    param_1[2] = uVar4;
    uVar4 = *param_1;
LAB_71b33eb8:
    if (uVar3 < uVar4) {
      *param_1 = uVar3;
      param_1[1] = uVar4;
    }
    break;
  case 5:
    FUN_71b33f22(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    break;
  default:
    puVar5 = param_1 + 2;
    uVar3 = *puVar5;
    uVar4 = *param_1;
    puVar2 = param_1 + 1;
    uVar10 = *puVar2;
    puVar11 = param_1;
    if (uVar10 < uVar4) {
      puVar8 = puVar5;
      if (uVar10 <= uVar3) {
        *param_1 = uVar10;
        param_1[1] = uVar4;
        puVar11 = puVar2;
        if (uVar4 <= uVar3) goto LAB_71b33e2a;
      }
LAB_71b33e24:
      *puVar8 = uVar4;
      *puVar11 = uVar3;
    }
    else if (uVar3 < uVar10) {
      *puVar5 = uVar10;
      *puVar2 = uVar3;
      puVar8 = puVar2;
      if (uVar3 < uVar4) goto LAB_71b33e24;
    }
LAB_71b33e2a:
    if (param_1 + 3 != param_2) {
      iVar9 = 0;
      iVar12 = 0;
      puVar2 = param_1 + 3;
      do {
        puVar11 = puVar2;
        uVar4 = *puVar5;
        uVar3 = *puVar11;
        iVar1 = iVar9;
        if (uVar3 < uVar4) {
          do {
            iVar6 = iVar1;
            *(uint *)((int)param_1 + iVar6 + 0xc) = uVar4;
            puVar5 = param_1;
            if (iVar6 == -8) goto LAB_71b33e3c;
            uVar4 = *(uint *)((int)param_1 + iVar6 + 4);
            iVar1 = iVar6 + -4;
          } while (uVar3 < uVar4);
          puVar5 = (uint *)((int)param_1 + iVar6 + 8);
LAB_71b33e3c:
          iVar12 = iVar12 + 1;
          *puVar5 = uVar3;
          if (iVar12 == 8) {
            return (int)puVar11 - (int)param_2 == -4;
          }
        }
        iVar9 = iVar9 + 4;
        puVar2 = puVar11 + 1;
        puVar5 = puVar11;
      } while (puVar11 + 1 != param_2);
    }
  }
  return true;
}


// =========================================================================
// Function: FUN_71b33f22
// Entry: 0x71b33f22 | Size: 198 bytes
// =========================================================================

void FUN_71b33f22(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *param_3;
  uVar3 = *param_1;
  uVar2 = *param_2;
  if (uVar2 < uVar3) {
    if (uVar1 < uVar2) {
      *param_1 = uVar1;
    }
    else {
      *param_1 = uVar2;
      *param_2 = uVar3;
      uVar1 = *param_3;
      if (uVar3 <= uVar1) goto LAB_71b33f7a;
      *param_2 = uVar1;
    }
    *param_3 = uVar3;
    uVar1 = uVar3;
  }
  else if (uVar1 < uVar2) {
    *param_2 = uVar1;
    *param_3 = uVar2;
    uVar3 = *param_1;
    uVar1 = uVar2;
    if (*param_2 < uVar3) {
      *param_1 = *param_2;
      *param_2 = uVar3;
      uVar1 = *param_3;
    }
  }
LAB_71b33f7a:
  if (*param_4 < uVar1) {
    *param_3 = *param_4;
    *param_4 = uVar1;
    uVar1 = *param_2;
    if (*param_3 < uVar1) {
      *param_2 = *param_3;
      *param_3 = uVar1;
      uVar1 = *param_1;
      if (*param_2 < uVar1) {
        *param_1 = *param_2;
        *param_2 = uVar1;
      }
    }
  }
  uVar1 = *param_4;
  if (*param_5 < uVar1) {
    *param_4 = *param_5;
    *param_5 = uVar1;
    uVar1 = *param_3;
    if (uVar1 <= *param_4) {
      return;
    }
    *param_3 = *param_4;
    *param_4 = uVar1;
    uVar1 = *param_2;
    if (*param_3 < uVar1) {
      *param_2 = *param_3;
      *param_3 = uVar1;
      uVar1 = *param_1;
      if (*param_2 < uVar1) {
        *param_1 = *param_2;
        *param_2 = uVar1;
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71b34000
// Entry: 0x71b34000 | Size: 582 bytes
// =========================================================================

uint * FUN_71b34000(uint *param_1,uint *param_2,uint *param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  uint *puStack_28;
  
  if (param_1 != param_2) {
    iVar13 = (int)param_2 - (int)param_1 >> 2;
    if (1 < iVar13) {
      uVar14 = iVar13 - 2U >> 1;
      uVar3 = uVar14;
      do {
        if ((int)uVar3 <= (int)uVar14) {
          iVar5 = (uVar3 & 0x3fffffff) * 2;
          iVar2 = iVar5 + 1;
          iVar5 = iVar5 + 2;
          puVar11 = param_1 + iVar2;
          if (iVar5 < iVar13) {
            uVar8 = *puVar11;
            uVar7 = puVar11[1];
            if (uVar8 < uVar7) {
              puVar11 = puVar11 + 1;
              iVar2 = iVar5;
            }
            if (uVar7 < uVar8) {
              uVar7 = uVar8;
            }
          }
          else {
            uVar7 = *puVar11;
          }
          uVar8 = param_1[uVar3];
          puVar6 = param_1 + uVar3;
          if (uVar8 <= uVar7) {
            do {
              puVar9 = puVar11;
              *puVar6 = uVar7;
              if ((int)uVar14 < iVar2) break;
              iVar5 = iVar2 * 2 + 2;
              iVar2 = iVar2 * 2 + 1;
              puVar11 = param_1 + iVar2;
              if (iVar5 < iVar13) {
                uVar12 = *puVar11;
                uVar7 = puVar11[1];
                if (uVar12 < uVar7) {
                  puVar11 = puVar11 + 1;
                  iVar2 = iVar5;
                }
                if (uVar7 < uVar12) {
                  uVar7 = uVar12;
                }
              }
              else {
                uVar7 = *puVar11;
              }
              puVar6 = puVar9;
            } while (uVar8 <= uVar7);
            *puVar9 = uVar8;
          }
        }
        bVar1 = 0 < (int)uVar3;
        uVar3 = uVar3 - 1;
      } while (bVar1);
    }
    puVar11 = param_2;
    if (param_2 != param_3) {
      puVar9 = param_1 + 1;
      puVar6 = param_2;
      do {
        uVar3 = *puVar6;
        if (uVar3 < *param_1) {
          *puVar6 = *param_1;
          *param_1 = uVar3;
          if (1 < iVar13) {
            uVar14 = *puVar9;
            puVar11 = puVar9;
            if ((int)param_2 - (int)param_1 == 8) {
              iVar2 = 1;
            }
            else {
              uVar7 = param_1[2];
              if (uVar14 < uVar7) {
                puVar11 = param_1 + 2;
              }
              iVar2 = 1;
              if (uVar14 < uVar7) {
                iVar2 = 2;
              }
              if (uVar14 <= uVar7) {
                uVar14 = uVar7;
              }
            }
            puVar10 = param_1;
            if (uVar3 <= uVar14) {
              do {
                puVar15 = puVar11;
                *puVar10 = uVar14;
                if ((int)(iVar13 - 2U >> 1) < iVar2) break;
                iVar5 = iVar2 * 2 + 2;
                iVar2 = iVar2 * 2 + 1;
                puVar11 = param_1 + iVar2;
                if (iVar5 < iVar13) {
                  uVar7 = *puVar11;
                  uVar14 = puVar11[1];
                  if (uVar7 < uVar14) {
                    puVar11 = puVar11 + 1;
                    iVar2 = iVar5;
                  }
                  if (uVar14 < uVar7) {
                    uVar14 = uVar7;
                  }
                }
                else {
                  uVar14 = *puVar11;
                }
                puVar10 = puVar15;
              } while (uVar3 <= uVar14);
              *puVar15 = uVar3;
            }
          }
        }
        puVar6 = puVar6 + 1;
        puVar11 = param_3;
      } while (puVar6 != param_3);
    }
    param_3 = puVar11;
    puStack_28 = param_2;
    if (1 < iVar13) {
      do {
        uVar3 = *param_1;
        iVar2 = 0;
        puVar11 = param_1;
        do {
          iVar4 = iVar2 * 2 + 2;
          puVar6 = puVar11 + iVar2 + 1;
          iVar5 = iVar2 * 2 + 1;
          if (iVar4 < iVar13) {
            uVar14 = puVar11[iVar2 + 2];
            uVar7 = puVar11[iVar2 + 1];
            if (uVar7 < uVar14) {
              puVar6 = puVar11 + iVar2 + 2;
              iVar5 = iVar4;
            }
            if (uVar14 < uVar7) {
              uVar14 = uVar7;
            }
          }
          else {
            uVar14 = *puVar6;
          }
          *puVar11 = uVar14;
          iVar2 = iVar5;
          puVar11 = puVar6;
        } while (iVar5 <= (int)(iVar13 - 2U >> 1));
        puStack_28 = puStack_28 + -1;
        if (puVar6 == puStack_28) {
          *puVar6 = uVar3;
        }
        else {
          *puVar6 = *puStack_28;
          *puStack_28 = uVar3;
          iVar2 = (int)puVar6 + (4 - (int)param_1) >> 2;
          if (1 < iVar2) {
            uVar7 = *puVar6;
            uVar14 = iVar2 - 2U >> 1;
            uVar3 = param_1[uVar14];
            if (uVar3 < uVar7) {
              do {
                puVar11 = param_1 + uVar14;
                *puVar6 = uVar3;
                if (uVar14 == 0) break;
                uVar14 = uVar14 - 1 >> 1;
                uVar3 = param_1[uVar14];
                puVar6 = puVar11;
              } while (uVar3 < uVar7);
              *puVar11 = uVar7;
            }
          }
        }
        bVar1 = 2 < iVar13;
        iVar13 = iVar13 + -1;
      } while (bVar1);
    }
  }
  return param_3;
}


// =========================================================================
// Function: FUN_71b34260
// Entry: 0x71b34260 | Size: 626 bytes
// =========================================================================

bool FUN_71b34260(uint *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  uint *puStack_28;
  
  switch((int)param_2 - (int)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    uVar2 = *param_1;
    uVar5 = param_1[1];
    uVar8 = param_2[-2];
    uVar7 = param_2[-1];
    if ((int)((uVar7 - uVar5) - (uint)(uVar8 < uVar2)) < 0 !=
        (SBORROW4(uVar7,uVar5) != SBORROW4(uVar7 - uVar5,(uint)(uVar8 < uVar2)))) {
      *param_1 = uVar8;
      param_1[1] = uVar7;
      param_2[-2] = uVar2;
      param_2[-1] = uVar5;
    }
    break;
  case 3:
    uVar13 = *param_1;
    uVar15 = param_1[1];
    uVar7 = param_1[2];
    uVar8 = param_1[3];
    uVar2 = param_2[-2];
    uVar5 = param_2[-1];
    if ((int)((uVar8 - uVar15) - (uint)(uVar7 < uVar13)) < 0 ==
        (SBORROW4(uVar8,uVar15) != SBORROW4(uVar8 - uVar15,(uint)(uVar7 < uVar13)))) {
      if ((int)((uVar5 - uVar8) - (uint)(uVar2 < uVar7)) < 0 !=
          (SBORROW4(uVar5,uVar8) != SBORROW4(uVar5 - uVar8,(uint)(uVar2 < uVar7)))) {
        param_1[2] = uVar2;
        param_2[-2] = uVar7;
        param_1[3] = uVar5;
        uVar5 = *param_1;
        uVar7 = param_1[2];
        param_2[-1] = uVar8;
        uVar2 = param_1[1];
        uVar8 = param_1[3];
        if ((int)((uVar8 - uVar2) - (uint)(uVar7 < uVar5)) < 0 !=
            (SBORROW4(uVar8,uVar2) != SBORROW4(uVar8 - uVar2,(uint)(uVar7 < uVar5)))) {
          *param_1 = uVar7;
          param_1[1] = uVar8;
          param_1[2] = uVar5;
          param_1[3] = uVar2;
        }
      }
    }
    else if ((int)((uVar5 - uVar8) - (uint)(uVar2 < uVar7)) < 0 ==
             (SBORROW4(uVar5,uVar8) != SBORROW4(uVar5 - uVar8,(uint)(uVar2 < uVar7)))) {
      *param_1 = uVar7;
      param_1[1] = uVar8;
      param_1[2] = uVar13;
      param_1[3] = uVar15;
      uVar2 = param_2[-2];
      uVar5 = param_2[-1];
      if ((int)((uVar5 - uVar15) - (uint)(uVar2 < uVar13)) < 0 !=
          (SBORROW4(uVar5,uVar15) != SBORROW4(uVar5 - uVar15,(uint)(uVar2 < uVar13)))) {
        param_1[2] = uVar2;
        param_1[3] = uVar5;
        param_2[-2] = uVar13;
        param_2[-1] = uVar15;
      }
    }
    else {
      *param_1 = uVar2;
      param_1[1] = uVar5;
      param_2[-2] = uVar13;
      param_2[-1] = uVar15;
    }
    break;
  case 4:
    uVar15 = *param_1;
    uVar7 = param_1[1];
    puVar3 = param_1 + 2;
    uVar8 = *puVar3;
    uVar13 = param_1[3];
    uVar16 = param_1[5];
    puVar18 = param_1 + 4;
    uVar11 = *puVar18;
    uVar2 = uVar16;
    uVar5 = uVar11;
    if ((int)((uVar13 - uVar7) - (uint)(uVar8 < uVar15)) < 0 ==
        (SBORROW4(uVar13,uVar7) != SBORROW4(uVar13 - uVar7,(uint)(uVar8 < uVar15)))) {
      if ((int)((uVar16 - uVar13) - (uint)(uVar11 < uVar8)) < 0 !=
          (SBORROW4(uVar16,uVar13) != SBORROW4(uVar16 - uVar13,(uint)(uVar11 < uVar8)))) {
        *puVar18 = uVar8;
        param_1[5] = uVar13;
        *puVar3 = uVar11;
        param_1[3] = uVar16;
        puVar4 = puVar3;
        uVar10 = uVar13;
        uVar2 = uVar13;
        uVar14 = uVar8;
        uVar5 = uVar8;
        puStack_28 = param_1;
        if ((int)((uVar16 - uVar7) - (uint)(uVar11 < uVar15)) < 0 !=
            (SBORROW4(uVar16,uVar7) != SBORROW4(uVar16 - uVar7,(uint)(uVar11 < uVar15))))
        goto LAB_71b3444e;
      }
    }
    else {
      puVar4 = puVar18;
      uVar10 = uVar7;
      uVar14 = uVar15;
      puStack_28 = param_1;
      if ((int)((uVar16 - uVar13) - (uint)(uVar11 < uVar8)) < 0 ==
          (SBORROW4(uVar16,uVar13) != SBORROW4(uVar16 - uVar13,(uint)(uVar11 < uVar8)))) {
        *param_1 = uVar8;
        param_1[1] = uVar13;
        param_1[2] = uVar15;
        param_1[3] = uVar7;
        puStack_28 = puVar3;
        if ((int)((uVar16 - uVar7) - (uint)(uVar11 < uVar15)) < 0 ==
            (SBORROW4(uVar16,uVar7) != SBORROW4(uVar16 - uVar7,(uint)(uVar11 < uVar15))))
        goto LAB_71b3445e;
      }
LAB_71b3444e:
      *puVar4 = uVar15;
      puVar4[1] = uVar7;
      *puStack_28 = uVar11;
      puStack_28[1] = uVar16;
      uVar2 = uVar10;
      uVar5 = uVar14;
    }
LAB_71b3445e:
    uVar8 = param_2[-2];
    uVar7 = param_2[-1];
    if ((int)((uVar7 - uVar2) - (uint)(uVar8 < uVar5)) < 0 !=
        (SBORROW4(uVar7,uVar2) != SBORROW4(uVar7 - uVar2,(uint)(uVar8 < uVar5)))) {
      *puVar18 = uVar8;
      param_2[-2] = uVar5;
      param_1[5] = uVar7;
      uVar8 = *puVar3;
      uVar5 = *puVar18;
      param_2[-1] = uVar2;
      uVar2 = param_1[5];
      uVar7 = param_1[3];
      if ((int)((uVar2 - uVar7) - (uint)(uVar5 < uVar8)) < 0 !=
          (SBORROW4(uVar2,uVar7) != SBORROW4(uVar2 - uVar7,(uint)(uVar5 < uVar8)))) {
        uVar15 = *param_1;
        uVar13 = param_1[1];
        param_1[4] = uVar8;
        param_1[5] = uVar7;
        param_1[2] = uVar5;
        param_1[3] = uVar2;
        if ((int)((uVar2 - uVar13) - (uint)(uVar5 < uVar15)) < 0 !=
            (SBORROW4(uVar2,uVar13) != SBORROW4(uVar2 - uVar13,(uint)(uVar5 < uVar15)))) {
          *param_1 = uVar5;
          param_1[1] = uVar2;
          param_1[2] = uVar15;
          param_1[3] = uVar13;
        }
      }
    }
    break;
  case 5:
    FUN_71b34512(param_1,param_1 + 2,param_1 + 4,param_1 + 6,param_2 + -2);
    break;
  default:
    uVar15 = *param_1;
    uVar8 = param_1[1];
    puVar3 = param_1 + 2;
    uVar5 = *puVar3;
    uVar2 = param_1[3];
    uVar13 = param_1[5];
    puVar18 = param_1 + 4;
    uVar7 = *puVar18;
    puVar4 = param_1;
    if ((int)((uVar2 - uVar8) - (uint)(uVar5 < uVar15)) < 0 ==
        (SBORROW4(uVar2,uVar8) != SBORROW4(uVar2 - uVar8,(uint)(uVar5 < uVar15)))) {
      if ((int)((uVar13 - uVar2) - (uint)(uVar7 < uVar5)) < 0 !=
          (SBORROW4(uVar13,uVar2) != SBORROW4(uVar13 - uVar2,(uint)(uVar7 < uVar5)))) {
        *puVar18 = uVar5;
        param_1[5] = uVar2;
        *puVar3 = uVar7;
        param_1[3] = uVar13;
        puVar12 = puVar3;
        if ((int)((uVar13 - uVar8) - (uint)(uVar7 < uVar15)) < 0 !=
            (SBORROW4(uVar13,uVar8) != SBORROW4(uVar13 - uVar8,(uint)(uVar7 < uVar15))))
        goto LAB_71b343be;
      }
    }
    else {
      puVar12 = puVar18;
      if ((int)((uVar13 - uVar2) - (uint)(uVar7 < uVar5)) < 0 ==
          (SBORROW4(uVar13,uVar2) != SBORROW4(uVar13 - uVar2,(uint)(uVar7 < uVar5)))) {
        *param_1 = uVar5;
        param_1[1] = uVar2;
        param_1[2] = uVar15;
        param_1[3] = uVar8;
        puVar4 = puVar3;
        if ((int)((uVar13 - uVar8) - (uint)(uVar7 < uVar15)) < 0 ==
            (SBORROW4(uVar13,uVar8) != SBORROW4(uVar13 - uVar8,(uint)(uVar7 < uVar15))))
        goto LAB_71b343c6;
      }
LAB_71b343be:
      *puVar12 = uVar15;
      puVar12[1] = uVar8;
      *puVar4 = uVar7;
      puVar4[1] = uVar13;
    }
LAB_71b343c6:
    if (param_1 + 6 != param_2) {
      iVar9 = 0;
      iVar17 = 0;
      puVar3 = param_1 + 6;
      do {
        puVar4 = puVar3;
        uVar7 = *puVar18;
        uVar2 = puVar18[1];
        uVar5 = *puVar4;
        uVar8 = puVar4[1];
        iVar1 = iVar9;
        if ((int)((uVar8 - uVar2) - (uint)(uVar5 < uVar7)) < 0 !=
            (SBORROW4(uVar8,uVar2) != SBORROW4(uVar8 - uVar2,(uint)(uVar5 < uVar7)))) {
          do {
            iVar6 = iVar1;
            *(uint *)((int)param_1 + iVar6 + 0x18) = uVar7;
            *(uint *)((int)param_1 + iVar6 + 0x1c) = uVar2;
            puVar3 = param_1;
            if (iVar6 == -0x10) goto LAB_71b343da;
            uVar7 = *(uint *)((int)param_1 + iVar6 + 8);
            uVar2 = *(uint *)((int)param_1 + iVar6 + 0xc);
            iVar1 = iVar6 + -8;
          } while ((int)((uVar8 - uVar2) - (uint)(uVar5 < uVar7)) < 0 !=
                   (SBORROW4(uVar8,uVar2) != SBORROW4(uVar8 - uVar2,(uint)(uVar5 < uVar7))));
          puVar3 = (uint *)((int)param_1 + iVar6 + 0x10);
LAB_71b343da:
          iVar17 = iVar17 + 1;
          *puVar3 = uVar5;
          puVar3[1] = uVar8;
          if (iVar17 == 8) {
            return (int)puVar4 - (int)param_2 == -8;
          }
        }
        iVar9 = iVar9 + 8;
        puVar3 = puVar4 + 2;
        puVar18 = puVar4;
      } while (puVar4 + 2 != param_2);
    }
  }
  return true;
}


// =========================================================================
// Function: FUN_71b34512
// Entry: 0x71b34512 | Size: 380 bytes
// =========================================================================

void FUN_71b34512(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar2 = *param_1;
  uVar3 = param_1[1];
  uVar7 = *param_2;
  uVar8 = param_2[1];
  uVar1 = *param_3;
  uVar5 = param_3[1];
  if ((int)((uVar8 - uVar3) - (uint)(uVar7 < uVar2)) < 0 ==
      (SBORROW4(uVar8,uVar3) != SBORROW4(uVar8 - uVar3,(uint)(uVar7 < uVar2)))) {
    if ((int)((uVar5 - uVar8) - (uint)(uVar1 < uVar7)) < 0 !=
        (SBORROW4(uVar5,uVar8) != SBORROW4(uVar5 - uVar8,(uint)(uVar1 < uVar7)))) {
      *param_2 = uVar1;
      *param_3 = uVar7;
      uVar4 = *param_1;
      uVar3 = *param_2;
      param_2[1] = uVar5;
      param_3[1] = uVar8;
      uVar6 = param_1[1];
      uVar2 = param_2[1];
      uVar1 = uVar7;
      uVar5 = uVar8;
      if ((int)((uVar2 - uVar6) - (uint)(uVar3 < uVar4)) < 0 !=
          (SBORROW4(uVar2,uVar6) != SBORROW4(uVar2 - uVar6,(uint)(uVar3 < uVar4)))) {
        *param_1 = uVar3;
        *param_2 = uVar4;
        param_1[1] = uVar2;
        uVar1 = *param_3;
        param_2[1] = uVar6;
        uVar5 = param_3[1];
      }
    }
  }
  else {
    if ((int)((uVar5 - uVar8) - (uint)(uVar1 < uVar7)) < 0 ==
        (SBORROW4(uVar5,uVar8) != SBORROW4(uVar5 - uVar8,(uint)(uVar1 < uVar7)))) {
      *param_1 = uVar7;
      *param_2 = uVar2;
      param_1[1] = uVar8;
      uVar1 = *param_3;
      param_2[1] = uVar3;
      uVar5 = param_3[1];
      if ((int)((uVar5 - uVar3) - (uint)(uVar1 < uVar2)) < 0 ==
          (SBORROW4(uVar5,uVar3) != SBORROW4(uVar5 - uVar3,(uint)(uVar1 < uVar2))))
      goto LAB_71b345b6;
      *param_2 = uVar1;
      param_2[1] = uVar5;
    }
    else {
      *param_1 = uVar1;
      param_1[1] = uVar5;
    }
    *param_3 = uVar2;
    param_3[1] = uVar3;
    uVar1 = uVar2;
    uVar5 = uVar3;
  }
LAB_71b345b6:
  uVar2 = *param_4;
  uVar3 = param_4[1];
  if ((int)((uVar3 - uVar5) - (uint)(uVar2 < uVar1)) < 0 !=
      (SBORROW4(uVar3,uVar5) != SBORROW4(uVar3 - uVar5,(uint)(uVar2 < uVar1)))) {
    *param_3 = uVar2;
    *param_4 = uVar1;
    uVar2 = *param_2;
    uVar1 = *param_3;
    param_3[1] = uVar3;
    param_4[1] = uVar5;
    uVar3 = param_2[1];
    uVar5 = param_3[1];
    if ((int)((uVar5 - uVar3) - (uint)(uVar1 < uVar2)) < 0 !=
        (SBORROW4(uVar5,uVar3) != SBORROW4(uVar5 - uVar3,(uint)(uVar1 < uVar2)))) {
      *param_2 = uVar1;
      *param_3 = uVar2;
      uVar7 = *param_1;
      param_2[1] = uVar5;
      uVar2 = *param_2;
      param_3[1] = uVar3;
      uVar1 = param_1[1];
      uVar5 = param_2[1];
      if ((int)((uVar5 - uVar1) - (uint)(uVar2 < uVar7)) < 0 !=
          (SBORROW4(uVar5,uVar1) != SBORROW4(uVar5 - uVar1,(uint)(uVar2 < uVar7)))) {
        *param_1 = uVar2;
        param_1[1] = uVar5;
        *param_2 = uVar7;
        param_2[1] = uVar1;
      }
    }
  }
  uVar1 = *param_4;
  uVar3 = param_4[1];
  uVar5 = *param_5;
  uVar2 = param_5[1];
  if ((int)((uVar2 - uVar3) - (uint)(uVar5 < uVar1)) < 0 !=
      (SBORROW4(uVar2,uVar3) != SBORROW4(uVar2 - uVar3,(uint)(uVar5 < uVar1)))) {
    *param_4 = uVar5;
    *param_5 = uVar1;
    uVar7 = *param_3;
    uVar1 = *param_4;
    param_4[1] = uVar2;
    param_5[1] = uVar3;
    uVar2 = param_3[1];
    uVar5 = param_4[1];
    if ((int)((uVar5 - uVar2) - (uint)(uVar1 < uVar7)) < 0 !=
        (SBORROW4(uVar5,uVar2) != SBORROW4(uVar5 - uVar2,(uint)(uVar1 < uVar7)))) {
      *param_3 = uVar1;
      *param_4 = uVar7;
      uVar1 = *param_2;
      param_3[1] = uVar5;
      uVar5 = *param_3;
      param_4[1] = uVar2;
      uVar3 = param_2[1];
      uVar2 = param_3[1];
      if ((int)((uVar2 - uVar3) - (uint)(uVar5 < uVar1)) < 0 !=
          (SBORROW4(uVar2,uVar3) != SBORROW4(uVar2 - uVar3,(uint)(uVar5 < uVar1)))) {
        *param_2 = uVar5;
        *param_3 = uVar1;
        uVar7 = *param_1;
        param_2[1] = uVar2;
        uVar2 = *param_2;
        param_3[1] = uVar3;
        uVar1 = param_1[1];
        uVar5 = param_2[1];
        if ((int)((uVar5 - uVar1) - (uint)(uVar2 < uVar7)) < 0 !=
            (SBORROW4(uVar5,uVar1) != SBORROW4(uVar5 - uVar1,(uint)(uVar2 < uVar7)))) {
          *param_1 = uVar2;
          param_1[1] = uVar5;
          *param_2 = uVar7;
          param_2[1] = uVar1;
        }
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71b346a6
// Entry: 0x71b346a6 | Size: 936 bytes
// =========================================================================

uint * FUN_71b346a6(uint *param_1,uint *param_2,uint *param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  int iVar19;
  int iVar20;
  
  puVar8 = param_3;
  if (param_1 != param_2) {
    iVar11 = (int)param_2 - (int)param_1 >> 3;
    if (1 < iVar11) {
      uVar12 = iVar11 - 2U >> 1;
      uVar6 = uVar12;
      do {
        if ((int)uVar6 <= (int)uVar12) {
          iVar4 = (uVar6 & 0x1fffffff) * 2;
          iVar19 = iVar4 + 1;
          iVar4 = iVar4 + 2;
          puVar8 = param_1 + iVar19 * 2;
          if (iVar4 < iVar11) {
            uVar9 = *puVar8;
            uVar3 = puVar8[1];
            uVar13 = puVar8[2];
            uVar10 = puVar8[3];
            bVar1 = (int)((uVar10 - uVar3) - (uint)(uVar13 < uVar9)) < 0 !=
                    (SBORROW4(uVar10,uVar3) != SBORROW4(uVar10 - uVar3,(uint)(uVar13 < uVar9)));
            uVar17 = uVar13;
            if (bVar1) {
              uVar17 = uVar9;
            }
            if ((int)((uVar3 - uVar10) - (uint)(uVar9 < uVar13)) < 0 !=
                (SBORROW4(uVar3,uVar10) != SBORROW4(uVar3 - uVar10,(uint)(uVar9 < uVar13)))) {
              puVar8 = puVar8 + 2;
              iVar19 = iVar4;
            }
            if (bVar1) {
              uVar10 = uVar3;
            }
          }
          else {
            uVar17 = *puVar8;
            uVar10 = puVar8[1];
          }
          puVar5 = param_1 + uVar6 * 2;
          uVar9 = *puVar5;
          uVar3 = puVar5[1];
          if ((int)((uVar10 - uVar3) - (uint)(uVar17 < uVar9)) < 0 ==
              (SBORROW4(uVar10,uVar3) != SBORROW4(uVar10 - uVar3,(uint)(uVar17 < uVar9)))) {
            do {
              puVar18 = puVar8;
              *puVar5 = uVar17;
              puVar5[1] = uVar10;
              if ((int)uVar12 < iVar19) break;
              iVar4 = iVar19 * 2 + 2;
              iVar19 = iVar19 * 2 + 1;
              puVar8 = param_1 + iVar19 * 2;
              if (iVar4 < iVar11) {
                uVar15 = *puVar8;
                uVar13 = puVar8[1];
                uVar16 = puVar8[2];
                uVar10 = puVar8[3];
                bVar1 = (int)((uVar10 - uVar13) - (uint)(uVar16 < uVar15)) < 0 !=
                        (SBORROW4(uVar10,uVar13) !=
                        SBORROW4(uVar10 - uVar13,(uint)(uVar16 < uVar15)));
                uVar17 = uVar16;
                if (bVar1) {
                  uVar17 = uVar15;
                }
                if ((int)((uVar13 - uVar10) - (uint)(uVar15 < uVar16)) < 0 !=
                    (SBORROW4(uVar13,uVar10) != SBORROW4(uVar13 - uVar10,(uint)(uVar15 < uVar16))))
                {
                  puVar8 = puVar8 + 2;
                  iVar19 = iVar4;
                }
                if (bVar1) {
                  uVar10 = uVar13;
                }
              }
              else {
                uVar17 = *puVar8;
                uVar10 = puVar8[1];
              }
              puVar5 = puVar18;
            } while ((int)((uVar10 - uVar3) - (uint)(uVar17 < uVar9)) < 0 ==
                     (SBORROW4(uVar10,uVar3) != SBORROW4(uVar10 - uVar3,(uint)(uVar17 < uVar9))));
            *puVar18 = uVar9;
            puVar18[1] = uVar3;
          }
        }
        bVar1 = 0 < (int)uVar6;
        uVar6 = uVar6 - 1;
      } while (bVar1);
    }
    puVar8 = param_2;
    if (param_2 != param_3) {
      puVar18 = param_1 + 2;
      puVar5 = param_2;
      do {
        uVar6 = *param_1;
        uVar10 = param_1[1];
        uVar12 = *puVar5;
        uVar17 = puVar5[1];
        if ((int)((uVar17 - uVar10) - (uint)(uVar12 < uVar6)) < 0 !=
            (SBORROW4(uVar17,uVar10) != SBORROW4(uVar17 - uVar10,(uint)(uVar12 < uVar6)))) {
          *puVar5 = uVar6;
          puVar5[1] = uVar10;
          *param_1 = uVar12;
          param_1[1] = uVar17;
          if (1 < iVar11) {
            uVar6 = *puVar18;
            uVar10 = param_1[3];
            puVar8 = puVar18;
            if ((int)param_2 - (int)param_1 == 0x10) {
              iVar19 = 1;
              uVar9 = uVar6;
              uVar3 = uVar10;
            }
            else {
              uVar13 = param_1[4];
              uVar15 = param_1[5];
              uVar9 = uVar13;
              uVar3 = uVar15;
              if ((int)((uVar15 - uVar10) - (uint)(uVar13 < uVar6)) < 0 !=
                  (SBORROW4(uVar15,uVar10) != SBORROW4(uVar15 - uVar10,(uint)(uVar13 < uVar6)))) {
                uVar9 = uVar6;
                uVar3 = uVar10;
              }
              iVar19 = 1;
              if ((int)((uVar10 - uVar15) - (uint)(uVar6 < uVar13)) < 0 !=
                  (SBORROW4(uVar10,uVar15) != SBORROW4(uVar10 - uVar15,(uint)(uVar6 < uVar13)))) {
                iVar19 = 2;
                puVar8 = param_1 + 4;
              }
            }
            puVar7 = param_1;
            if ((int)((uVar3 - uVar17) - (uint)(uVar9 < uVar12)) < 0 ==
                (SBORROW4(uVar3,uVar17) != SBORROW4(uVar3 - uVar17,(uint)(uVar9 < uVar12)))) {
              do {
                puVar14 = puVar8;
                *puVar7 = uVar9;
                puVar7[1] = uVar3;
                if ((int)(iVar11 - 2U >> 1) < iVar19) break;
                iVar4 = iVar19 * 2 + 2;
                iVar19 = iVar19 * 2 + 1;
                puVar8 = param_1 + iVar19 * 2;
                if (iVar4 < iVar11) {
                  uVar6 = *puVar8;
                  uVar13 = puVar8[1];
                  uVar10 = puVar8[2];
                  uVar3 = puVar8[3];
                  bVar1 = (int)((uVar3 - uVar13) - (uint)(uVar10 < uVar6)) < 0 !=
                          (SBORROW4(uVar3,uVar13) != SBORROW4(uVar3 - uVar13,(uint)(uVar10 < uVar6))
                          );
                  uVar9 = uVar10;
                  if (bVar1) {
                    uVar9 = uVar6;
                  }
                  if ((int)((uVar13 - uVar3) - (uint)(uVar6 < uVar10)) < 0 !=
                      (SBORROW4(uVar13,uVar3) != SBORROW4(uVar13 - uVar3,(uint)(uVar6 < uVar10)))) {
                    puVar8 = puVar8 + 2;
                    iVar19 = iVar4;
                  }
                  if (bVar1) {
                    uVar3 = uVar13;
                  }
                }
                else {
                  uVar9 = *puVar8;
                  uVar3 = puVar8[1];
                }
                puVar7 = puVar14;
              } while ((int)((uVar3 - uVar17) - (uint)(uVar9 < uVar12)) < 0 ==
                       (SBORROW4(uVar3,uVar17) != SBORROW4(uVar3 - uVar17,(uint)(uVar9 < uVar12))));
              *puVar14 = uVar12;
              puVar14[1] = uVar17;
            }
          }
        }
        puVar5 = puVar5 + 2;
        puVar8 = param_3;
      } while (puVar5 != param_3);
    }
    if (1 < iVar11) {
      do {
        uVar6 = *param_1;
        uVar12 = param_1[1];
        iVar19 = 0;
        puVar5 = param_1;
        do {
          iVar20 = iVar19 * 2 + 2;
          puVar18 = puVar5 + iVar19 * 2 + 2;
          iVar4 = iVar19 * 2 + 1;
          if (iVar20 < iVar11) {
            iVar2 = iVar19 * 2;
            uVar3 = puVar5[iVar2 + 4];
            uVar9 = puVar5[iVar19 * 2 + 2];
            uVar15 = puVar5[iVar19 * 2 + 3];
            uVar13 = puVar5[iVar19 * 2 + 5];
            uVar17 = uVar3;
            uVar10 = uVar13;
            if ((int)((uVar13 - uVar15) - (uint)(uVar3 < uVar9)) < 0 !=
                (SBORROW4(uVar13,uVar15) != SBORROW4(uVar13 - uVar15,(uint)(uVar3 < uVar9)))) {
              uVar17 = uVar9;
              uVar10 = uVar15;
            }
            iVar19 = iVar4;
            if ((int)((uVar15 - uVar13) - (uint)(uVar9 < uVar3)) < 0 !=
                (SBORROW4(uVar15,uVar13) != SBORROW4(uVar15 - uVar13,(uint)(uVar9 < uVar3)))) {
              iVar19 = iVar20;
              puVar18 = puVar5 + iVar2 + 4;
            }
          }
          else {
            uVar17 = *puVar18;
            uVar10 = puVar5[iVar19 * 2 + 3];
            iVar19 = iVar4;
          }
          *puVar5 = uVar17;
          puVar5[1] = uVar10;
          puVar5 = puVar18;
        } while (iVar19 <= (int)(iVar11 - 2U >> 1));
        puVar5 = param_2 + -2;
        if (puVar18 == puVar5) {
          *puVar18 = uVar6;
          puVar18[1] = uVar12;
        }
        else {
          uVar10 = param_2[-1];
          *puVar18 = *puVar5;
          puVar18[1] = uVar10;
          *puVar5 = uVar6;
          param_2[-1] = uVar12;
          iVar19 = (int)puVar18 + (8 - (int)param_1) >> 3;
          if (1 < iVar19) {
            uVar17 = *puVar18;
            uVar3 = puVar18[1];
            uVar12 = iVar19 - 2U >> 1;
            uVar10 = param_1[uVar12 * 2];
            uVar6 = (param_1 + uVar12 * 2)[1];
            puVar7 = param_1 + uVar12 * 2;
            if ((int)((uVar6 - uVar3) - (uint)(uVar10 < uVar17)) < 0 !=
                (SBORROW4(uVar6,uVar3) != SBORROW4(uVar6 - uVar3,(uint)(uVar10 < uVar17)))) {
              do {
                puVar14 = puVar7;
                *puVar18 = uVar10;
                puVar18[1] = uVar6;
                if (uVar12 == 0) break;
                uVar12 = uVar12 - 1 >> 1;
                uVar10 = param_1[uVar12 * 2];
                uVar6 = (param_1 + uVar12 * 2)[1];
                puVar7 = param_1 + uVar12 * 2;
                puVar18 = puVar14;
              } while ((int)((uVar6 - uVar3) - (uint)(uVar10 < uVar17)) < 0 !=
                       (SBORROW4(uVar6,uVar3) != SBORROW4(uVar6 - uVar3,(uint)(uVar10 < uVar17))));
              *puVar14 = uVar17;
              puVar14[1] = uVar3;
            }
          }
        }
        bVar1 = 2 < iVar11;
        iVar11 = iVar11 + -1;
        param_2 = puVar5;
      } while (bVar1);
    }
  }
  return puVar8;
}


// =========================================================================
// Function: FUN_71b34a68
// Entry: 0x71b34a68 | Size: 626 bytes
// =========================================================================

bool FUN_71b34a68(uint *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  uint *puStack_28;
  
  switch((int)param_2 - (int)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    uVar2 = *param_1;
    uVar5 = param_1[1];
    uVar7 = param_2[-1];
    if (uVar7 <= uVar5 && (uint)(uVar2 <= param_2[-2]) <= uVar7 - uVar5) {
      *param_1 = param_2[-2];
      param_1[1] = uVar7;
      param_2[-2] = uVar2;
      param_2[-1] = uVar5;
    }
    break;
  case 3:
    uVar13 = *param_1;
    uVar15 = param_1[1];
    uVar7 = param_1[2];
    uVar8 = param_1[3];
    uVar2 = param_2[-2];
    uVar5 = param_2[-1];
    if (uVar15 < uVar8 || uVar8 - uVar15 < (uint)(uVar13 <= uVar7)) {
      if (uVar5 <= uVar8 && (uint)(uVar7 <= uVar2) <= uVar5 - uVar8) {
        param_1[2] = uVar2;
        param_2[-2] = uVar7;
        param_1[3] = uVar5;
        uVar5 = *param_1;
        uVar7 = param_1[2];
        param_2[-1] = uVar8;
        uVar2 = param_1[1];
        uVar8 = param_1[3];
        if (uVar8 <= uVar2 && (uint)(uVar5 <= uVar7) <= uVar8 - uVar2) {
          *param_1 = uVar7;
          param_1[1] = uVar8;
          param_1[2] = uVar5;
          param_1[3] = uVar2;
        }
      }
    }
    else if (uVar8 < uVar5 || uVar5 - uVar8 < (uint)(uVar7 <= uVar2)) {
      *param_1 = uVar7;
      param_1[1] = uVar8;
      param_1[2] = uVar13;
      param_1[3] = uVar15;
      uVar2 = param_2[-1];
      if (uVar2 <= uVar15 && (uint)(uVar13 <= param_2[-2]) <= uVar2 - uVar15) {
        param_1[2] = param_2[-2];
        param_1[3] = uVar2;
        param_2[-2] = uVar13;
        param_2[-1] = uVar15;
      }
    }
    else {
      *param_1 = uVar2;
      param_1[1] = uVar5;
      param_2[-2] = uVar13;
      param_2[-1] = uVar15;
    }
    break;
  case 4:
    uVar15 = *param_1;
    uVar7 = param_1[1];
    puVar3 = param_1 + 2;
    uVar8 = *puVar3;
    uVar13 = param_1[3];
    uVar16 = param_1[5];
    puVar18 = param_1 + 4;
    uVar11 = *puVar18;
    uVar2 = uVar16;
    uVar5 = uVar11;
    if (uVar7 < uVar13 || uVar13 - uVar7 < (uint)(uVar15 <= uVar8)) {
      if (uVar16 <= uVar13 && (uint)(uVar8 <= uVar11) <= uVar16 - uVar13) {
        *puVar18 = uVar8;
        param_1[5] = uVar13;
        *puVar3 = uVar11;
        param_1[3] = uVar16;
        puVar4 = puVar3;
        uVar10 = uVar13;
        uVar2 = uVar13;
        uVar14 = uVar8;
        uVar5 = uVar8;
        puStack_28 = param_1;
        if (uVar16 <= uVar7 && (uint)(uVar15 <= uVar11) <= uVar16 - uVar7) goto LAB_71b34c56;
      }
    }
    else {
      puVar4 = puVar18;
      uVar10 = uVar7;
      uVar14 = uVar15;
      puStack_28 = param_1;
      if (uVar13 < uVar16 || uVar16 - uVar13 < (uint)(uVar8 <= uVar11)) {
        *param_1 = uVar8;
        param_1[1] = uVar13;
        param_1[2] = uVar15;
        param_1[3] = uVar7;
        puStack_28 = puVar3;
        if (uVar7 < uVar16 || uVar16 - uVar7 < (uint)(uVar15 <= uVar11)) goto LAB_71b34c66;
      }
LAB_71b34c56:
      *puVar4 = uVar15;
      puVar4[1] = uVar7;
      *puStack_28 = uVar11;
      puStack_28[1] = uVar16;
      uVar2 = uVar10;
      uVar5 = uVar14;
    }
LAB_71b34c66:
    uVar7 = param_2[-1];
    if (uVar7 <= uVar2 && (uint)(uVar5 <= param_2[-2]) <= uVar7 - uVar2) {
      *puVar18 = param_2[-2];
      param_2[-2] = uVar5;
      param_1[5] = uVar7;
      uVar8 = *puVar3;
      uVar5 = *puVar18;
      param_2[-1] = uVar2;
      uVar2 = param_1[5];
      uVar7 = param_1[3];
      if (uVar2 <= uVar7 && (uint)(uVar8 <= uVar5) <= uVar2 - uVar7) {
        uVar15 = *param_1;
        uVar13 = param_1[1];
        param_1[4] = uVar8;
        param_1[5] = uVar7;
        param_1[2] = uVar5;
        param_1[3] = uVar2;
        if (uVar2 <= uVar13 && (uint)(uVar15 <= uVar5) <= uVar2 - uVar13) {
          *param_1 = uVar5;
          param_1[1] = uVar2;
          param_1[2] = uVar15;
          param_1[3] = uVar13;
        }
      }
    }
    break;
  case 5:
    FUN_71b34d1a(param_1,param_1 + 2,param_1 + 4,param_1 + 6,param_2 + -2);
    break;
  default:
    uVar15 = *param_1;
    uVar8 = param_1[1];
    puVar3 = param_1 + 2;
    uVar5 = *puVar3;
    uVar2 = param_1[3];
    uVar13 = param_1[5];
    puVar18 = param_1 + 4;
    uVar7 = *puVar18;
    puVar4 = param_1;
    if (uVar8 < uVar2 || uVar2 - uVar8 < (uint)(uVar15 <= uVar5)) {
      if (uVar13 <= uVar2 && (uint)(uVar5 <= uVar7) <= uVar13 - uVar2) {
        *puVar18 = uVar5;
        param_1[5] = uVar2;
        *puVar3 = uVar7;
        param_1[3] = uVar13;
        puVar12 = puVar3;
        if (uVar13 <= uVar8 && (uint)(uVar15 <= uVar7) <= uVar13 - uVar8) goto LAB_71b34bc6;
      }
    }
    else {
      puVar12 = puVar18;
      if (uVar2 < uVar13 || uVar13 - uVar2 < (uint)(uVar5 <= uVar7)) {
        *param_1 = uVar5;
        param_1[1] = uVar2;
        param_1[2] = uVar15;
        param_1[3] = uVar8;
        puVar4 = puVar3;
        if (uVar8 < uVar13 || uVar13 - uVar8 < (uint)(uVar15 <= uVar7)) goto LAB_71b34bce;
      }
LAB_71b34bc6:
      *puVar12 = uVar15;
      puVar12[1] = uVar8;
      *puVar4 = uVar7;
      puVar4[1] = uVar13;
    }
LAB_71b34bce:
    if (param_1 + 6 != param_2) {
      iVar9 = 0;
      iVar17 = 0;
      puVar3 = param_1 + 6;
      do {
        puVar4 = puVar3;
        uVar7 = *puVar18;
        uVar2 = puVar18[1];
        uVar5 = *puVar4;
        uVar8 = puVar4[1];
        iVar1 = iVar9;
        if (uVar8 <= uVar2 && (uint)(uVar7 <= uVar5) <= uVar8 - uVar2) {
          do {
            iVar6 = iVar1;
            *(uint *)((int)param_1 + iVar6 + 0x18) = uVar7;
            *(uint *)((int)param_1 + iVar6 + 0x1c) = uVar2;
            puVar3 = param_1;
            if (iVar6 == -0x10) goto LAB_71b34be2;
            uVar7 = *(uint *)((int)param_1 + iVar6 + 8);
            uVar2 = *(uint *)((int)param_1 + iVar6 + 0xc);
            iVar1 = iVar6 + -8;
          } while (uVar8 <= uVar2 && (uint)(uVar7 <= uVar5) <= uVar8 - uVar2);
          puVar3 = (uint *)((int)param_1 + iVar6 + 0x10);
LAB_71b34be2:
          iVar17 = iVar17 + 1;
          *puVar3 = uVar5;
          puVar3[1] = uVar8;
          if (iVar17 == 8) {
            return (int)puVar4 - (int)param_2 == -8;
          }
        }
        iVar9 = iVar9 + 8;
        puVar3 = puVar4 + 2;
        puVar18 = puVar4;
      } while (puVar4 + 2 != param_2);
    }
  }
  return true;
}


// =========================================================================
// Function: FUN_71b34d1a
// Entry: 0x71b34d1a | Size: 380 bytes
// =========================================================================

void FUN_71b34d1a(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar2 = *param_1;
  uVar3 = param_1[1];
  uVar7 = *param_2;
  uVar8 = param_2[1];
  uVar1 = *param_3;
  uVar5 = param_3[1];
  if (uVar3 < uVar8 || uVar8 - uVar3 < (uint)(uVar2 <= uVar7)) {
    if (uVar5 <= uVar8 && (uint)(uVar7 <= uVar1) <= uVar5 - uVar8) {
      *param_2 = uVar1;
      *param_3 = uVar7;
      uVar4 = *param_1;
      uVar3 = *param_2;
      param_2[1] = uVar5;
      param_3[1] = uVar8;
      uVar6 = param_1[1];
      uVar2 = param_2[1];
      uVar1 = uVar7;
      uVar5 = uVar8;
      if (uVar2 <= uVar6 && (uint)(uVar4 <= uVar3) <= uVar2 - uVar6) {
        *param_1 = uVar3;
        *param_2 = uVar4;
        param_1[1] = uVar2;
        uVar1 = *param_3;
        param_2[1] = uVar6;
        uVar5 = param_3[1];
      }
    }
  }
  else {
    if (uVar8 < uVar5 || uVar5 - uVar8 < (uint)(uVar7 <= uVar1)) {
      *param_1 = uVar7;
      *param_2 = uVar2;
      param_1[1] = uVar8;
      uVar1 = *param_3;
      param_2[1] = uVar3;
      uVar5 = param_3[1];
      if (uVar3 < uVar5 || uVar5 - uVar3 < (uint)(uVar2 <= uVar1)) goto LAB_71b34dbe;
      *param_2 = uVar1;
      param_2[1] = uVar5;
    }
    else {
      *param_1 = uVar1;
      param_1[1] = uVar5;
    }
    *param_3 = uVar2;
    param_3[1] = uVar3;
    uVar1 = uVar2;
    uVar5 = uVar3;
  }
LAB_71b34dbe:
  uVar2 = param_4[1];
  if (uVar2 <= uVar5 && (uint)(uVar1 <= *param_4) <= uVar2 - uVar5) {
    *param_3 = *param_4;
    *param_4 = uVar1;
    uVar3 = *param_2;
    uVar1 = *param_3;
    param_3[1] = uVar2;
    param_4[1] = uVar5;
    uVar2 = param_2[1];
    uVar5 = param_3[1];
    if (uVar5 <= uVar2 && (uint)(uVar3 <= uVar1) <= uVar5 - uVar2) {
      *param_2 = uVar1;
      *param_3 = uVar3;
      uVar7 = *param_1;
      param_2[1] = uVar5;
      uVar3 = *param_2;
      param_3[1] = uVar2;
      uVar1 = param_1[1];
      uVar5 = param_2[1];
      if (uVar5 <= uVar1 && (uint)(uVar7 <= uVar3) <= uVar5 - uVar1) {
        *param_1 = uVar3;
        param_1[1] = uVar5;
        *param_2 = uVar7;
        param_2[1] = uVar1;
      }
    }
  }
  uVar1 = *param_4;
  uVar2 = param_4[1];
  uVar5 = param_5[1];
  if (uVar5 <= uVar2 && (uint)(uVar1 <= *param_5) <= uVar5 - uVar2) {
    *param_4 = *param_5;
    *param_5 = uVar1;
    uVar3 = *param_3;
    uVar1 = *param_4;
    param_4[1] = uVar5;
    param_5[1] = uVar2;
    uVar2 = param_3[1];
    uVar5 = param_4[1];
    if (uVar5 <= uVar2 && (uint)(uVar3 <= uVar1) <= uVar5 - uVar2) {
      *param_3 = uVar1;
      *param_4 = uVar3;
      uVar1 = *param_2;
      param_3[1] = uVar5;
      uVar5 = *param_3;
      param_4[1] = uVar2;
      uVar3 = param_2[1];
      uVar2 = param_3[1];
      if (uVar2 <= uVar3 && (uint)(uVar1 <= uVar5) <= uVar2 - uVar3) {
        *param_2 = uVar5;
        *param_3 = uVar1;
        uVar7 = *param_1;
        param_2[1] = uVar2;
        uVar2 = *param_2;
        param_3[1] = uVar3;
        uVar1 = param_1[1];
        uVar5 = param_2[1];
        if (uVar5 <= uVar1 && (uint)(uVar7 <= uVar2) <= uVar5 - uVar1) {
          *param_1 = uVar2;
          param_1[1] = uVar5;
          *param_2 = uVar7;
          param_2[1] = uVar1;
        }
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71b34eae
// Entry: 0x71b34eae | Size: 936 bytes
// =========================================================================

uint * FUN_71b34eae(uint *param_1,uint *param_2,uint *param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  
  puVar8 = param_3;
  if (param_1 != param_2) {
    iVar11 = (int)param_2 - (int)param_1 >> 3;
    if (1 < iVar11) {
      uVar12 = iVar11 - 2U >> 1;
      uVar7 = uVar12;
      do {
        if ((int)uVar7 <= (int)uVar12) {
          iVar4 = (uVar7 & 0x1fffffff) * 2;
          iVar18 = iVar4 + 1;
          iVar4 = iVar4 + 2;
          puVar8 = param_1 + iVar18 * 2;
          if (iVar4 < iVar11) {
            uVar9 = *puVar8;
            uVar3 = puVar8[1];
            uVar13 = puVar8[2];
            uVar10 = puVar8[3];
            bVar1 = (uint)(uVar9 <= uVar13) <= uVar10 - uVar3;
            uVar19 = uVar13;
            if (uVar10 <= uVar3 && bVar1) {
              uVar19 = uVar9;
            }
            if (uVar3 <= uVar10 && (uint)(uVar13 <= uVar9) <= uVar3 - uVar10) {
              puVar8 = puVar8 + 2;
              iVar18 = iVar4;
            }
            if (uVar10 <= uVar3 && bVar1) {
              uVar10 = uVar3;
            }
          }
          else {
            uVar19 = *puVar8;
            uVar10 = puVar8[1];
          }
          puVar5 = param_1 + uVar7 * 2;
          uVar9 = *puVar5;
          uVar3 = puVar5[1];
          if (uVar3 < uVar10 || uVar10 - uVar3 < (uint)(uVar9 <= uVar19)) {
            do {
              puVar17 = puVar8;
              *puVar5 = uVar19;
              puVar5[1] = uVar10;
              if ((int)uVar12 < iVar18) break;
              iVar4 = iVar18 * 2 + 2;
              iVar18 = iVar18 * 2 + 1;
              puVar8 = param_1 + iVar18 * 2;
              if (iVar4 < iVar11) {
                uVar15 = *puVar8;
                uVar13 = puVar8[1];
                uVar16 = puVar8[2];
                uVar10 = puVar8[3];
                bVar1 = (uint)(uVar15 <= uVar16) <= uVar10 - uVar13;
                uVar19 = uVar16;
                if (uVar10 <= uVar13 && bVar1) {
                  uVar19 = uVar15;
                }
                if (uVar13 <= uVar10 && (uint)(uVar16 <= uVar15) <= uVar13 - uVar10) {
                  puVar8 = puVar8 + 2;
                  iVar18 = iVar4;
                }
                if (uVar10 <= uVar13 && bVar1) {
                  uVar10 = uVar13;
                }
              }
              else {
                uVar19 = *puVar8;
                uVar10 = puVar8[1];
              }
              puVar5 = puVar17;
            } while (uVar3 < uVar10 || uVar10 - uVar3 < (uint)(uVar9 <= uVar19));
            *puVar17 = uVar9;
            puVar17[1] = uVar3;
          }
        }
        bVar1 = 0 < (int)uVar7;
        uVar7 = uVar7 - 1;
      } while (bVar1);
    }
    puVar8 = param_2;
    if (param_2 != param_3) {
      puVar17 = param_1 + 2;
      puVar5 = param_2;
      do {
        uVar12 = param_1[1];
        uVar7 = *puVar5;
        uVar10 = puVar5[1];
        if (uVar10 <= uVar12 && (uint)(*param_1 <= uVar7) <= uVar10 - uVar12) {
          *puVar5 = *param_1;
          puVar5[1] = uVar12;
          *param_1 = uVar7;
          param_1[1] = uVar10;
          if (1 < iVar11) {
            uVar12 = *puVar17;
            uVar19 = param_1[3];
            puVar8 = puVar17;
            if ((int)param_2 - (int)param_1 == 0x10) {
              iVar18 = 1;
              uVar9 = uVar12;
              uVar3 = uVar19;
            }
            else {
              uVar13 = param_1[4];
              uVar15 = param_1[5];
              uVar9 = uVar13;
              uVar3 = uVar15;
              if (uVar15 <= uVar19 && (uint)(uVar12 <= uVar13) <= uVar15 - uVar19) {
                uVar9 = uVar12;
                uVar3 = uVar19;
              }
              iVar18 = 1;
              if (uVar19 <= uVar15 && (uint)(uVar13 <= uVar12) <= uVar19 - uVar15) {
                iVar18 = 2;
                puVar8 = param_1 + 4;
              }
            }
            puVar6 = param_1;
            if (uVar10 < uVar3 || uVar3 - uVar10 < (uint)(uVar7 <= uVar9)) {
              do {
                puVar14 = puVar8;
                *puVar6 = uVar9;
                puVar6[1] = uVar3;
                if ((int)(iVar11 - 2U >> 1) < iVar18) break;
                iVar4 = iVar18 * 2 + 2;
                iVar18 = iVar18 * 2 + 1;
                puVar8 = param_1 + iVar18 * 2;
                if (iVar4 < iVar11) {
                  uVar12 = *puVar8;
                  uVar13 = puVar8[1];
                  uVar19 = puVar8[2];
                  uVar3 = puVar8[3];
                  bVar1 = (uint)(uVar12 <= uVar19) <= uVar3 - uVar13;
                  uVar9 = uVar19;
                  if (uVar3 <= uVar13 && bVar1) {
                    uVar9 = uVar12;
                  }
                  if (uVar13 <= uVar3 && (uint)(uVar19 <= uVar12) <= uVar13 - uVar3) {
                    puVar8 = puVar8 + 2;
                    iVar18 = iVar4;
                  }
                  if (uVar3 <= uVar13 && bVar1) {
                    uVar3 = uVar13;
                  }
                }
                else {
                  uVar9 = *puVar8;
                  uVar3 = puVar8[1];
                }
                puVar6 = puVar14;
              } while (uVar10 < uVar3 || uVar3 - uVar10 < (uint)(uVar7 <= uVar9));
              *puVar14 = uVar7;
              puVar14[1] = uVar10;
            }
          }
        }
        puVar5 = puVar5 + 2;
        puVar8 = param_3;
      } while (puVar5 != param_3);
    }
    if (1 < iVar11) {
      do {
        uVar7 = *param_1;
        uVar12 = param_1[1];
        iVar18 = 0;
        puVar5 = param_1;
        do {
          iVar20 = iVar18 * 2 + 2;
          puVar17 = puVar5 + iVar18 * 2 + 2;
          iVar4 = iVar18 * 2 + 1;
          if (iVar20 < iVar11) {
            iVar2 = iVar18 * 2;
            uVar3 = puVar5[iVar2 + 4];
            uVar9 = puVar5[iVar18 * 2 + 2];
            uVar15 = puVar5[iVar18 * 2 + 3];
            uVar13 = puVar5[iVar18 * 2 + 5];
            uVar19 = uVar3;
            uVar10 = uVar13;
            if (uVar13 <= uVar15 && (uint)(uVar9 <= uVar3) <= uVar13 - uVar15) {
              uVar19 = uVar9;
              uVar10 = uVar15;
            }
            iVar18 = iVar4;
            if (uVar15 <= uVar13 && (uint)(uVar3 <= uVar9) <= uVar15 - uVar13) {
              iVar18 = iVar20;
              puVar17 = puVar5 + iVar2 + 4;
            }
          }
          else {
            uVar19 = *puVar17;
            uVar10 = puVar5[iVar18 * 2 + 3];
            iVar18 = iVar4;
          }
          *puVar5 = uVar19;
          puVar5[1] = uVar10;
          puVar5 = puVar17;
        } while (iVar18 <= (int)(iVar11 - 2U >> 1));
        puVar5 = param_2 + -2;
        if (puVar17 == puVar5) {
          *puVar17 = uVar7;
          puVar17[1] = uVar12;
        }
        else {
          uVar10 = param_2[-1];
          *puVar17 = *puVar5;
          puVar17[1] = uVar10;
          *puVar5 = uVar7;
          param_2[-1] = uVar12;
          iVar18 = (int)puVar17 + (8 - (int)param_1) >> 3;
          if (1 < iVar18) {
            uVar19 = *puVar17;
            uVar3 = puVar17[1];
            uVar12 = iVar18 - 2U >> 1;
            uVar10 = param_1[uVar12 * 2];
            uVar7 = (param_1 + uVar12 * 2)[1];
            puVar6 = param_1 + uVar12 * 2;
            if (uVar7 <= uVar3 && (uint)(uVar19 <= uVar10) <= uVar7 - uVar3) {
              do {
                puVar14 = puVar6;
                *puVar17 = uVar10;
                puVar17[1] = uVar7;
                if (uVar12 == 0) break;
                uVar12 = uVar12 - 1 >> 1;
                uVar10 = param_1[uVar12 * 2];
                uVar7 = (param_1 + uVar12 * 2)[1];
                puVar6 = param_1 + uVar12 * 2;
                puVar17 = puVar14;
              } while (uVar7 <= uVar3 && (uint)(uVar19 <= uVar10) <= uVar7 - uVar3);
              *puVar14 = uVar19;
              puVar14[1] = uVar3;
            }
          }
        }
        bVar1 = 2 < iVar11;
        iVar11 = iVar11 + -1;
        param_2 = puVar5;
      } while (bVar1);
    }
  }
  return puVar8;
}


// =========================================================================
// Function: FUN_71b35270
// Entry: 0x71b35270 | Size: 622 bytes
// =========================================================================

bool FUN_71b35270(float *param_1,float *param_2)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  switch((int)param_2 - (int)param_1 >> 2) {
  case 0:
  case 1:
    break;
  case 2:
    fVar9 = *param_1;
    if ((int)((uint)(param_2[-1] < fVar9) << 0x1f) < 0) {
      *param_1 = param_2[-1];
      param_2[-1] = fVar9;
      return true;
    }
    return true;
  case 3:
    fVar9 = *param_1;
    fVar10 = param_1[1];
    fVar11 = param_2[-1];
    if (-1 < (int)((uint)(fVar10 < fVar9) << 0x1f)) {
      if (-1 < (int)((uint)(fVar11 < fVar10) << 0x1f)) {
        return true;
      }
      param_1[1] = fVar11;
      param_2[-1] = fVar10;
      fVar9 = *param_1;
      if ((int)((uint)(param_1[1] < fVar9) << 0x1f) < 0) {
        *param_1 = param_1[1];
        param_1[1] = fVar9;
        return true;
      }
      return true;
    }
    if ((int)((uint)(fVar11 < fVar10) << 0x1f) < 0) {
      *param_1 = fVar11;
      param_2[-1] = fVar9;
      return true;
    }
    *param_1 = fVar10;
    param_1[1] = fVar9;
    if ((int)((uint)(param_2[-1] < fVar9) << 0x1f) < 0) {
      param_1[1] = param_2[-1];
      param_2[-1] = fVar9;
      return true;
    }
    return true;
  case 4:
    fVar11 = *param_1;
    pfVar8 = param_1 + 2;
    fVar12 = param_1[1];
    pfVar5 = param_1 + 1;
    fVar10 = param_1[2];
    pfVar3 = param_1;
    fVar9 = fVar10;
    if ((int)((uint)(fVar12 < fVar11) << 0x1f) < 0) {
      pfVar2 = pfVar8;
      fVar13 = fVar11;
      if (-1 < (int)((uint)(fVar10 < fVar12) << 0x1f)) {
        *param_1 = fVar12;
        param_1[1] = fVar11;
        pfVar3 = pfVar5;
        if (-1 < (int)((uint)(fVar10 < fVar11) << 0x1f)) goto LAB_71b3546c;
      }
LAB_71b3545e:
      *pfVar2 = fVar11;
      *pfVar3 = fVar10;
      fVar9 = fVar13;
    }
    else if ((int)((uint)(fVar10 < fVar12) << 0x1f) < 0) {
      *pfVar8 = fVar12;
      *pfVar5 = fVar10;
      pfVar2 = pfVar5;
      fVar13 = fVar12;
      fVar9 = fVar12;
      if ((int)((uint)(fVar10 < fVar11) << 0x1f) < 0) goto LAB_71b3545e;
    }
LAB_71b3546c:
    if ((int)((uint)(param_2[-1] < fVar9) << 0x1f) < 0) {
      *pfVar8 = param_2[-1];
      param_2[-1] = fVar9;
      fVar9 = *pfVar8;
      if ((int)((uint)(fVar9 < *pfVar5) << 0x1f) < 0) {
        param_1[2] = *pfVar5;
        fVar10 = *param_1;
        param_1[1] = fVar9;
        if ((int)((uint)(fVar9 < fVar10) << 0x1f) < 0) {
          *param_1 = fVar9;
          param_1[1] = fVar10;
        }
      }
    }
    break;
  case 5:
    FUN_71b3551e(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    break;
  default:
    fVar9 = *param_1;
    pfVar5 = param_1 + 1;
    fVar11 = param_1[1];
    pfVar8 = param_1 + 2;
    fVar10 = param_1[2];
    pfVar3 = param_1;
    if ((int)((uint)(fVar11 < fVar9) << 0x1f) < 0) {
      pfVar2 = pfVar8;
      if (-1 < (int)((uint)(fVar10 < fVar11) << 0x1f)) {
        *param_1 = fVar11;
        param_1[1] = fVar9;
        pfVar3 = pfVar5;
        if (-1 < (int)((uint)(fVar10 < fVar9) << 0x1f)) goto LAB_71b353d6;
      }
LAB_71b353ce:
      *pfVar2 = fVar9;
      *pfVar3 = fVar10;
    }
    else if ((int)((uint)(fVar10 < fVar11) << 0x1f) < 0) {
      *pfVar8 = fVar11;
      *pfVar5 = fVar10;
      pfVar2 = pfVar5;
      if ((int)((uint)(fVar10 < fVar9) << 0x1f) < 0) goto LAB_71b353ce;
    }
LAB_71b353d6:
    if (param_1 + 3 != param_2) {
      iVar6 = 0;
      iVar7 = 0;
      pfVar3 = param_1 + 3;
      do {
        pfVar5 = pfVar3;
        fVar10 = *pfVar8;
        fVar9 = *pfVar5;
        iVar1 = iVar6;
        if ((int)((uint)(fVar9 < fVar10) << 0x1f) < 0) {
          do {
            iVar4 = iVar1;
            *(float *)((int)param_1 + iVar4 + 0xc) = fVar10;
            pfVar3 = param_1;
            if (iVar4 == -8) goto LAB_71b353e8;
            fVar10 = *(float *)((int)param_1 + iVar4 + 4);
            iVar1 = iVar4 + -4;
          } while ((int)((uint)(fVar9 < fVar10) << 0x1f) < 0);
          pfVar3 = (float *)((int)param_1 + iVar4 + 8);
LAB_71b353e8:
          iVar7 = iVar7 + 1;
          *pfVar3 = fVar9;
          if (iVar7 == 8) {
            return (int)pfVar5 - (int)param_2 == -4;
          }
        }
        iVar6 = iVar6 + 4;
        pfVar3 = pfVar5 + 1;
        pfVar8 = pfVar5;
      } while (pfVar5 + 1 != param_2);
    }
  }
  return true;
}


// =========================================================================
// Function: FUN_71b3551e
// Entry: 0x71b3551e | Size: 314 bytes
// =========================================================================

void FUN_71b3551e(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *param_1;
  fVar1 = *param_2;
  fVar3 = *param_3;
  if ((int)((uint)(fVar1 < fVar2) << 0x1f) < 0) {
    if ((int)((uint)(fVar3 < fVar1) << 0x1f) < 0) {
      *param_1 = fVar3;
    }
    else {
      *param_1 = fVar1;
      *param_2 = fVar2;
      fVar3 = *param_3;
      if (-1 < (int)((uint)(fVar3 < fVar2) << 0x1f)) goto LAB_71b3559e;
      *param_2 = fVar3;
    }
    *param_3 = fVar2;
    fVar3 = fVar2;
  }
  else if ((int)((uint)(fVar3 < fVar1) << 0x1f) < 0) {
    *param_2 = fVar3;
    *param_3 = fVar1;
    fVar2 = *param_1;
    fVar3 = fVar1;
    if ((int)((uint)(*param_2 < fVar2) << 0x1f) < 0) {
      *param_1 = *param_2;
      *param_2 = fVar2;
      fVar3 = *param_3;
    }
  }
LAB_71b3559e:
  if ((int)((uint)(*param_4 < fVar3) << 0x1f) < 0) {
    *param_3 = *param_4;
    *param_4 = fVar3;
    fVar3 = *param_2;
    if ((int)((uint)(*param_3 < fVar3) << 0x1f) < 0) {
      *param_2 = *param_3;
      *param_3 = fVar3;
      fVar3 = *param_1;
      if ((int)((uint)(*param_2 < fVar3) << 0x1f) < 0) {
        *param_1 = *param_2;
        *param_2 = fVar3;
      }
    }
  }
  fVar3 = *param_4;
  if ((int)((uint)(*param_5 < fVar3) << 0x1f) < 0) {
    *param_4 = *param_5;
    *param_5 = fVar3;
    fVar3 = *param_3;
    if (-1 < (int)((uint)(*param_4 < fVar3) << 0x1f)) {
      return;
    }
    *param_3 = *param_4;
    *param_4 = fVar3;
    fVar3 = *param_2;
    if ((int)((uint)(*param_3 < fVar3) << 0x1f) < 0) {
      *param_2 = *param_3;
      *param_3 = fVar3;
      fVar3 = *param_1;
      if ((int)((uint)(*param_2 < fVar3) << 0x1f) < 0) {
        *param_1 = *param_2;
        *param_2 = fVar3;
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71b35670
// Entry: 0x71b35670 | Size: 596 bytes
// =========================================================================

float * FUN_71b35670(float *param_1,float *param_2,float *param_3)

{
  bool bVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  
  pfVar3 = param_3;
  if (param_1 != param_2) {
    iVar10 = (int)param_2 - (int)param_1 >> 2;
    if (1 < iVar10) {
      uVar11 = iVar10 - 2U >> 1;
      uVar9 = uVar11;
      do {
        if ((int)uVar9 <= (int)uVar11) {
          iVar4 = (uVar9 & 0x3fffffff) * 2;
          iVar6 = iVar4 + 1;
          iVar4 = iVar4 + 2;
          pfVar3 = param_1 + iVar6;
          if ((iVar4 < iVar10) && ((int)((uint)(*pfVar3 < pfVar3[1]) << 0x1f) < 0)) {
            pfVar3 = pfVar3 + 1;
            iVar6 = iVar4;
          }
          fVar13 = *pfVar3;
          fVar12 = param_1[uVar9];
          pfVar5 = param_1 + uVar9;
          if (-1 < (int)((uint)(fVar13 < fVar12) << 0x1f)) {
            do {
              pfVar2 = pfVar3;
              *pfVar5 = fVar13;
              if ((int)uVar11 < iVar6) break;
              iVar4 = iVar6 * 2 + 2;
              iVar6 = iVar6 * 2 + 1;
              pfVar3 = param_1 + iVar6;
              if ((iVar4 < iVar10) && ((int)((uint)(*pfVar3 < pfVar3[1]) << 0x1f) < 0)) {
                pfVar3 = pfVar3 + 1;
                iVar6 = iVar4;
              }
              fVar13 = *pfVar3;
              pfVar5 = pfVar2;
            } while (-1 < (int)((uint)(fVar13 < fVar12) << 0x1f));
            *pfVar2 = fVar12;
          }
        }
        bVar1 = 0 < (int)uVar9;
        uVar9 = uVar9 - 1;
      } while (bVar1);
    }
    pfVar3 = param_2;
    if (param_2 != param_3) {
      pfVar5 = param_2;
      do {
        fVar12 = *pfVar5;
        if ((int)((uint)(fVar12 < *param_1) << 0x1f) < 0) {
          *pfVar5 = *param_1;
          *param_1 = fVar12;
          if (1 < iVar10) {
            if (((int)param_2 - (int)param_1 == 8) ||
               (-1 < (int)((uint)(param_1[1] < param_1[2]) << 0x1f))) {
              iVar6 = 1;
              pfVar3 = param_1 + 1;
            }
            else {
              iVar6 = 2;
              pfVar3 = param_1 + 2;
            }
            fVar13 = *pfVar3;
            pfVar2 = param_1;
            if (-1 < (int)((uint)(fVar13 < fVar12) << 0x1f)) {
              do {
                pfVar8 = pfVar3;
                *pfVar2 = fVar13;
                if ((int)(iVar10 - 2U >> 1) < iVar6) break;
                iVar4 = iVar6 * 2 + 2;
                iVar6 = iVar6 * 2 + 1;
                pfVar3 = param_1 + iVar6;
                if ((iVar4 < iVar10) && ((int)((uint)(*pfVar3 < pfVar3[1]) << 0x1f) < 0)) {
                  pfVar3 = pfVar3 + 1;
                  iVar6 = iVar4;
                }
                fVar13 = *pfVar3;
                pfVar2 = pfVar8;
              } while (-1 < (int)((uint)(fVar13 < fVar12) << 0x1f));
              *pfVar8 = fVar12;
            }
          }
        }
        pfVar5 = pfVar5 + 1;
        pfVar3 = param_3;
      } while (pfVar5 != param_3);
    }
    if (1 < iVar10) {
      do {
        fVar12 = *param_1;
        pfVar5 = param_1;
        iVar6 = 0;
        do {
          iVar7 = iVar6 * 2 + 2;
          pfVar2 = pfVar5 + iVar6 + 1;
          iVar4 = iVar6 * 2 + 1;
          if ((iVar7 < iVar10) && ((int)((uint)(pfVar5[iVar6 + 1] < pfVar5[iVar6 + 2]) << 0x1f) < 0)
             ) {
            pfVar2 = pfVar5 + iVar6 + 2;
            iVar4 = iVar7;
          }
          *pfVar5 = *pfVar2;
          pfVar5 = pfVar2;
          iVar6 = iVar4;
        } while (iVar4 <= (int)(iVar10 - 2U >> 1));
        param_2 = param_2 + -1;
        if (pfVar2 == param_2) {
          *pfVar2 = fVar12;
        }
        else {
          *pfVar2 = *param_2;
          *param_2 = fVar12;
          iVar6 = (int)pfVar2 + (4 - (int)param_1) >> 2;
          if (1 < iVar6) {
            fVar12 = *pfVar2;
            uVar9 = iVar6 - 2U >> 1;
            fVar13 = param_1[uVar9];
            pfVar5 = param_1 + uVar9;
            if ((int)((uint)(fVar13 < fVar12) << 0x1f) < 0) {
              do {
                pfVar8 = pfVar5;
                *pfVar2 = fVar13;
                if (uVar9 == 0) break;
                uVar9 = uVar9 - 1 >> 1;
                fVar13 = param_1[uVar9];
                pfVar2 = pfVar8;
                pfVar5 = param_1 + uVar9;
              } while ((int)((uint)(fVar13 < fVar12) << 0x1f) < 0);
              *pfVar8 = fVar12;
            }
          }
        }
        bVar1 = 2 < iVar10;
        iVar10 = iVar10 + -1;
      } while (bVar1);
    }
  }
  return pfVar3;
}


// =========================================================================
// Function: FUN_71b358dc
// Entry: 0x71b358dc | Size: 612 bytes
// =========================================================================

bool FUN_71b358dc(double *param_1,double *param_2)

{
  int iVar1;
  double *pdVar2;
  double *pdVar3;
  int iVar4;
  double *pdVar5;
  int iVar6;
  int iVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  switch((int)param_2 - (int)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    dVar9 = *param_1;
    if ((int)((uint)(param_2[-1] < dVar9) << 0x1f) < 0) {
      *param_1 = param_2[-1];
      param_2[-1] = dVar9;
      return true;
    }
    return true;
  case 3:
    dVar9 = *param_1;
    dVar10 = param_1[1];
    dVar11 = param_2[-1];
    if (-1 < (int)((uint)(dVar10 < dVar9) << 0x1f)) {
      if (-1 < (int)((uint)(dVar11 < dVar10) << 0x1f)) {
        return true;
      }
      param_1[1] = dVar11;
      param_2[-1] = dVar10;
      dVar9 = *param_1;
      if ((int)((uint)(param_1[1] < dVar9) << 0x1f) < 0) {
        *param_1 = param_1[1];
        param_1[1] = dVar9;
        return true;
      }
      return true;
    }
    if ((int)((uint)(dVar11 < dVar10) << 0x1f) < 0) {
      *param_1 = dVar11;
      param_2[-1] = dVar9;
      return true;
    }
    *param_1 = dVar10;
    param_1[1] = dVar9;
    if ((int)((uint)(param_2[-1] < dVar9) << 0x1f) < 0) {
      param_1[1] = param_2[-1];
      param_2[-1] = dVar9;
      return true;
    }
    return true;
  case 4:
    dVar11 = *param_1;
    dVar12 = param_1[1];
    pdVar8 = param_1 + 2;
    pdVar5 = param_1 + 1;
    dVar10 = param_1[2];
    pdVar3 = param_1;
    dVar9 = dVar10;
    if ((int)((uint)(dVar12 < dVar11) << 0x1f) < 0) {
      pdVar2 = pdVar8;
      dVar13 = dVar11;
      if (-1 < (int)((uint)(dVar10 < dVar12) << 0x1f)) {
        *param_1 = dVar12;
        param_1[1] = dVar11;
        pdVar3 = pdVar5;
        if (-1 < (int)((uint)(dVar10 < dVar11) << 0x1f)) goto LAB_71b35ad2;
      }
LAB_71b35ac4:
      *pdVar2 = dVar11;
      *pdVar3 = dVar10;
      dVar9 = dVar13;
    }
    else if ((int)((uint)(dVar10 < dVar12) << 0x1f) < 0) {
      *pdVar8 = dVar12;
      *pdVar5 = dVar10;
      pdVar2 = pdVar5;
      dVar13 = dVar12;
      dVar9 = dVar12;
      if ((int)((uint)(dVar10 < dVar11) << 0x1f) < 0) goto LAB_71b35ac4;
    }
LAB_71b35ad2:
    if ((int)((uint)(param_2[-1] < dVar9) << 0x1f) < 0) {
      *pdVar8 = param_2[-1];
      param_2[-1] = dVar9;
      dVar9 = *pdVar8;
      if ((int)((uint)(dVar9 < *pdVar5) << 0x1f) < 0) {
        param_1[2] = *pdVar5;
        dVar10 = *param_1;
        param_1[1] = dVar9;
        if ((int)((uint)(dVar9 < dVar10) << 0x1f) < 0) {
          *param_1 = dVar9;
          param_1[1] = dVar10;
        }
      }
    }
    break;
  case 5:
    FUN_71b35b80(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    break;
  default:
    dVar9 = *param_1;
    pdVar5 = param_1 + 1;
    dVar11 = param_1[1];
    pdVar8 = param_1 + 2;
    dVar10 = param_1[2];
    pdVar3 = param_1;
    if ((int)((uint)(dVar11 < dVar9) << 0x1f) < 0) {
      pdVar2 = pdVar8;
      if (-1 < (int)((uint)(dVar10 < dVar11) << 0x1f)) {
        *param_1 = dVar11;
        param_1[1] = dVar9;
        pdVar3 = pdVar5;
        if (-1 < (int)((uint)(dVar10 < dVar9) << 0x1f)) goto LAB_71b35a3a;
      }
LAB_71b35a32:
      *pdVar2 = dVar9;
      *pdVar3 = dVar10;
    }
    else if ((int)((uint)(dVar10 < dVar11) << 0x1f) < 0) {
      *pdVar8 = dVar11;
      *pdVar5 = dVar10;
      pdVar2 = pdVar5;
      if ((int)((uint)(dVar10 < dVar9) << 0x1f) < 0) goto LAB_71b35a32;
    }
LAB_71b35a3a:
    if (param_1 + 3 != param_2) {
      iVar6 = 0;
      iVar7 = 0;
      pdVar3 = param_1 + 3;
      do {
        pdVar5 = pdVar3;
        dVar10 = *pdVar8;
        dVar9 = *pdVar5;
        iVar1 = iVar6;
        if ((int)((uint)(dVar9 < dVar10) << 0x1f) < 0) {
          do {
            iVar4 = iVar1;
            *(double *)((int)param_1 + iVar4 + 0x18) = dVar10;
            pdVar3 = param_1;
            if (iVar4 == -0x10) goto LAB_71b35a4c;
            dVar10 = *(double *)((int)param_1 + iVar4 + 8);
            iVar1 = iVar4 + -8;
          } while ((int)((uint)(dVar9 < dVar10) << 0x1f) < 0);
          pdVar3 = (double *)((int)param_1 + iVar4 + 0x10);
LAB_71b35a4c:
          iVar7 = iVar7 + 1;
          *pdVar3 = dVar9;
          if (iVar7 == 8) {
            return (int)pdVar5 - (int)param_2 == -8;
          }
        }
        iVar6 = iVar6 + 8;
        pdVar3 = pdVar5 + 1;
        pdVar8 = pdVar5;
      } while (pdVar5 + 1 != param_2);
    }
  }
  return true;
}


// =========================================================================
// Function: FUN_71b35b80
// Entry: 0x71b35b80 | Size: 314 bytes
// =========================================================================

void FUN_71b35b80(double *param_1,double *param_2,double *param_3,double *param_4,double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = *param_1;
  dVar1 = *param_2;
  dVar3 = *param_3;
  if ((int)((uint)(dVar1 < dVar2) << 0x1f) < 0) {
    if ((int)((uint)(dVar3 < dVar1) << 0x1f) < 0) {
      *param_1 = dVar3;
    }
    else {
      *param_1 = dVar1;
      *param_2 = dVar2;
      dVar3 = *param_3;
      if (-1 < (int)((uint)(dVar3 < dVar2) << 0x1f)) goto LAB_71b35c00;
      *param_2 = dVar3;
    }
    *param_3 = dVar2;
    dVar3 = dVar2;
  }
  else if ((int)((uint)(dVar3 < dVar1) << 0x1f) < 0) {
    *param_2 = dVar3;
    *param_3 = dVar1;
    dVar2 = *param_1;
    dVar3 = dVar1;
    if ((int)((uint)(*param_2 < dVar2) << 0x1f) < 0) {
      *param_1 = *param_2;
      *param_2 = dVar2;
      dVar3 = *param_3;
    }
  }
LAB_71b35c00:
  if ((int)((uint)(*param_4 < dVar3) << 0x1f) < 0) {
    *param_3 = *param_4;
    *param_4 = dVar3;
    dVar3 = *param_2;
    if ((int)((uint)(*param_3 < dVar3) << 0x1f) < 0) {
      *param_2 = *param_3;
      *param_3 = dVar3;
      dVar3 = *param_1;
      if ((int)((uint)(*param_2 < dVar3) << 0x1f) < 0) {
        *param_1 = *param_2;
        *param_2 = dVar3;
      }
    }
  }
  dVar3 = *param_4;
  if ((int)((uint)(*param_5 < dVar3) << 0x1f) < 0) {
    *param_4 = *param_5;
    *param_5 = dVar3;
    dVar3 = *param_3;
    if (-1 < (int)((uint)(*param_4 < dVar3) << 0x1f)) {
      return;
    }
    *param_3 = *param_4;
    *param_4 = dVar3;
    dVar3 = *param_2;
    if ((int)((uint)(*param_3 < dVar3) << 0x1f) < 0) {
      *param_2 = *param_3;
      *param_3 = dVar3;
      dVar3 = *param_1;
      if ((int)((uint)(*param_2 < dVar3) << 0x1f) < 0) {
        *param_1 = *param_2;
        *param_2 = dVar3;
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71b35cd2
// Entry: 0x71b35cd2 | Size: 594 bytes
// =========================================================================

double * FUN_71b35cd2(double *param_1,double *param_2,double *param_3)

{
  bool bVar1;
  double *pdVar2;
  double *pdVar3;
  int iVar4;
  double *pdVar5;
  int iVar6;
  int iVar7;
  double *pdVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  
  pdVar3 = param_3;
  if (param_1 != param_2) {
    iVar10 = (int)param_2 - (int)param_1 >> 3;
    if (1 < iVar10) {
      uVar11 = iVar10 - 2U >> 1;
      uVar9 = uVar11;
      do {
        if ((int)uVar9 <= (int)uVar11) {
          iVar4 = (uVar9 & 0x1fffffff) * 2;
          iVar6 = iVar4 + 1;
          iVar4 = iVar4 + 2;
          pdVar3 = param_1 + iVar6;
          if ((iVar4 < iVar10) && ((int)((uint)(*pdVar3 < pdVar3[1]) << 0x1f) < 0)) {
            pdVar3 = pdVar3 + 1;
            iVar6 = iVar4;
          }
          dVar13 = *pdVar3;
          dVar12 = param_1[uVar9];
          pdVar5 = param_1 + uVar9;
          if (-1 < (int)((uint)(dVar13 < dVar12) << 0x1f)) {
            do {
              pdVar2 = pdVar3;
              *pdVar5 = dVar13;
              if ((int)uVar11 < iVar6) break;
              iVar4 = iVar6 * 2 + 2;
              iVar6 = iVar6 * 2 + 1;
              pdVar3 = param_1 + iVar6;
              if ((iVar4 < iVar10) && ((int)((uint)(*pdVar3 < pdVar3[1]) << 0x1f) < 0)) {
                pdVar3 = pdVar3 + 1;
                iVar6 = iVar4;
              }
              dVar13 = *pdVar3;
              pdVar5 = pdVar2;
            } while (-1 < (int)((uint)(dVar13 < dVar12) << 0x1f));
            *pdVar2 = dVar12;
          }
        }
        bVar1 = 0 < (int)uVar9;
        uVar9 = uVar9 - 1;
      } while (bVar1);
    }
    pdVar3 = param_2;
    if (param_2 != param_3) {
      pdVar5 = param_2;
      do {
        dVar12 = *pdVar5;
        if ((int)((uint)(dVar12 < *param_1) << 0x1f) < 0) {
          *pdVar5 = *param_1;
          *param_1 = dVar12;
          if (1 < iVar10) {
            if (((int)param_2 - (int)param_1 == 0x10) ||
               (-1 < (int)((uint)(param_1[1] < param_1[2]) << 0x1f))) {
              iVar6 = 1;
              pdVar3 = param_1 + 1;
            }
            else {
              iVar6 = 2;
              pdVar3 = param_1 + 2;
            }
            dVar13 = *pdVar3;
            pdVar2 = param_1;
            if (-1 < (int)((uint)(dVar13 < dVar12) << 0x1f)) {
              do {
                pdVar8 = pdVar3;
                *pdVar2 = dVar13;
                if ((int)(iVar10 - 2U >> 1) < iVar6) break;
                iVar4 = iVar6 * 2 + 2;
                iVar6 = iVar6 * 2 + 1;
                pdVar3 = param_1 + iVar6;
                if ((iVar4 < iVar10) && ((int)((uint)(*pdVar3 < pdVar3[1]) << 0x1f) < 0)) {
                  pdVar3 = pdVar3 + 1;
                  iVar6 = iVar4;
                }
                dVar13 = *pdVar3;
                pdVar2 = pdVar8;
              } while (-1 < (int)((uint)(dVar13 < dVar12) << 0x1f));
              *pdVar8 = dVar12;
            }
          }
        }
        pdVar5 = pdVar5 + 1;
        pdVar3 = param_3;
      } while (pdVar5 != param_3);
    }
    if (1 < iVar10) {
      do {
        dVar12 = *param_1;
        pdVar5 = param_1;
        iVar6 = 0;
        do {
          iVar7 = iVar6 * 2 + 2;
          pdVar2 = pdVar5 + iVar6 + 1;
          iVar4 = iVar6 * 2 + 1;
          if ((iVar7 < iVar10) && ((int)((uint)(pdVar5[iVar6 + 1] < pdVar5[iVar6 + 2]) << 0x1f) < 0)
             ) {
            pdVar2 = pdVar5 + iVar6 + 2;
            iVar4 = iVar7;
          }
          *pdVar5 = *pdVar2;
          pdVar5 = pdVar2;
          iVar6 = iVar4;
        } while (iVar4 <= (int)(iVar10 - 2U >> 1));
        param_2 = param_2 + -1;
        if (pdVar2 == param_2) {
          *pdVar2 = dVar12;
        }
        else {
          *pdVar2 = *param_2;
          iVar6 = (int)pdVar2 + (8 - (int)param_1) >> 3;
          *param_2 = dVar12;
          if (1 < iVar6) {
            dVar12 = *pdVar2;
            uVar9 = iVar6 - 2U >> 1;
            dVar13 = param_1[uVar9];
            pdVar5 = param_1 + uVar9;
            if ((int)((uint)(dVar13 < dVar12) << 0x1f) < 0) {
              do {
                pdVar8 = pdVar5;
                *pdVar2 = dVar13;
                if (uVar9 == 0) break;
                uVar9 = uVar9 - 1 >> 1;
                dVar13 = param_1[uVar9];
                pdVar2 = pdVar8;
                pdVar5 = param_1 + uVar9;
              } while ((int)((uint)(dVar13 < dVar12) << 0x1f) < 0);
              *pdVar8 = dVar12;
            }
          }
        }
        bVar1 = 2 < iVar10;
        iVar10 = iVar10 + -1;
      } while (bVar1);
    }
  }
  return pdVar3;
}


// =========================================================================
// Function: FUN_71b35f3c
// Entry: 0x71b35f3c | Size: 612 bytes
// =========================================================================

bool FUN_71b35f3c(double *param_1,double *param_2)

{
  int iVar1;
  double *pdVar2;
  double *pdVar3;
  int iVar4;
  double *pdVar5;
  int iVar6;
  int iVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  switch((int)param_2 - (int)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    dVar9 = *param_1;
    if ((int)((uint)(param_2[-1] < dVar9) << 0x1f) < 0) {
      *param_1 = param_2[-1];
      param_2[-1] = dVar9;
      return true;
    }
    return true;
  case 3:
    dVar9 = *param_1;
    dVar10 = param_1[1];
    dVar11 = param_2[-1];
    if (-1 < (int)((uint)(dVar10 < dVar9) << 0x1f)) {
      if (-1 < (int)((uint)(dVar11 < dVar10) << 0x1f)) {
        return true;
      }
      param_1[1] = dVar11;
      param_2[-1] = dVar10;
      dVar9 = *param_1;
      if ((int)((uint)(param_1[1] < dVar9) << 0x1f) < 0) {
        *param_1 = param_1[1];
        param_1[1] = dVar9;
        return true;
      }
      return true;
    }
    if ((int)((uint)(dVar11 < dVar10) << 0x1f) < 0) {
      *param_1 = dVar11;
      param_2[-1] = dVar9;
      return true;
    }
    *param_1 = dVar10;
    param_1[1] = dVar9;
    if ((int)((uint)(param_2[-1] < dVar9) << 0x1f) < 0) {
      param_1[1] = param_2[-1];
      param_2[-1] = dVar9;
      return true;
    }
    return true;
  case 4:
    dVar11 = *param_1;
    dVar12 = param_1[1];
    pdVar8 = param_1 + 2;
    pdVar5 = param_1 + 1;
    dVar10 = param_1[2];
    pdVar3 = param_1;
    dVar9 = dVar10;
    if ((int)((uint)(dVar12 < dVar11) << 0x1f) < 0) {
      pdVar2 = pdVar8;
      dVar13 = dVar11;
      if (-1 < (int)((uint)(dVar10 < dVar12) << 0x1f)) {
        *param_1 = dVar12;
        param_1[1] = dVar11;
        pdVar3 = pdVar5;
        if (-1 < (int)((uint)(dVar10 < dVar11) << 0x1f)) goto LAB_71b36132;
      }
LAB_71b36124:
      *pdVar2 = dVar11;
      *pdVar3 = dVar10;
      dVar9 = dVar13;
    }
    else if ((int)((uint)(dVar10 < dVar12) << 0x1f) < 0) {
      *pdVar8 = dVar12;
      *pdVar5 = dVar10;
      pdVar2 = pdVar5;
      dVar13 = dVar12;
      dVar9 = dVar12;
      if ((int)((uint)(dVar10 < dVar11) << 0x1f) < 0) goto LAB_71b36124;
    }
LAB_71b36132:
    if ((int)((uint)(param_2[-1] < dVar9) << 0x1f) < 0) {
      *pdVar8 = param_2[-1];
      param_2[-1] = dVar9;
      dVar9 = *pdVar8;
      if ((int)((uint)(dVar9 < *pdVar5) << 0x1f) < 0) {
        param_1[2] = *pdVar5;
        dVar10 = *param_1;
        param_1[1] = dVar9;
        if ((int)((uint)(dVar9 < dVar10) << 0x1f) < 0) {
          *param_1 = dVar9;
          param_1[1] = dVar10;
        }
      }
    }
    break;
  case 5:
    FUN_71b361e0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    break;
  default:
    dVar9 = *param_1;
    pdVar5 = param_1 + 1;
    dVar11 = param_1[1];
    pdVar8 = param_1 + 2;
    dVar10 = param_1[2];
    pdVar3 = param_1;
    if ((int)((uint)(dVar11 < dVar9) << 0x1f) < 0) {
      pdVar2 = pdVar8;
      if (-1 < (int)((uint)(dVar10 < dVar11) << 0x1f)) {
        *param_1 = dVar11;
        param_1[1] = dVar9;
        pdVar3 = pdVar5;
        if (-1 < (int)((uint)(dVar10 < dVar9) << 0x1f)) goto LAB_71b3609a;
      }
LAB_71b36092:
      *pdVar2 = dVar9;
      *pdVar3 = dVar10;
    }
    else if ((int)((uint)(dVar10 < dVar11) << 0x1f) < 0) {
      *pdVar8 = dVar11;
      *pdVar5 = dVar10;
      pdVar2 = pdVar5;
      if ((int)((uint)(dVar10 < dVar9) << 0x1f) < 0) goto LAB_71b36092;
    }
LAB_71b3609a:
    if (param_1 + 3 != param_2) {
      iVar6 = 0;
      iVar7 = 0;
      pdVar3 = param_1 + 3;
      do {
        pdVar5 = pdVar3;
        dVar10 = *pdVar8;
        dVar9 = *pdVar5;
        iVar1 = iVar6;
        if ((int)((uint)(dVar9 < dVar10) << 0x1f) < 0) {
          do {
            iVar4 = iVar1;
            *(double *)((int)param_1 + iVar4 + 0x18) = dVar10;
            pdVar3 = param_1;
            if (iVar4 == -0x10) goto LAB_71b360ac;
            dVar10 = *(double *)((int)param_1 + iVar4 + 8);
            iVar1 = iVar4 + -8;
          } while ((int)((uint)(dVar9 < dVar10) << 0x1f) < 0);
          pdVar3 = (double *)((int)param_1 + iVar4 + 0x10);
LAB_71b360ac:
          iVar7 = iVar7 + 1;
          *pdVar3 = dVar9;
          if (iVar7 == 8) {
            return (int)pdVar5 - (int)param_2 == -8;
          }
        }
        iVar6 = iVar6 + 8;
        pdVar3 = pdVar5 + 1;
        pdVar8 = pdVar5;
      } while (pdVar5 + 1 != param_2);
    }
  }
  return true;
}


// =========================================================================
// Function: FUN_71b361e0
// Entry: 0x71b361e0 | Size: 314 bytes
// =========================================================================

void FUN_71b361e0(double *param_1,double *param_2,double *param_3,double *param_4,double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = *param_1;
  dVar1 = *param_2;
  dVar3 = *param_3;
  if ((int)((uint)(dVar1 < dVar2) << 0x1f) < 0) {
    if ((int)((uint)(dVar3 < dVar1) << 0x1f) < 0) {
      *param_1 = dVar3;
    }
    else {
      *param_1 = dVar1;
      *param_2 = dVar2;
      dVar3 = *param_3;
      if (-1 < (int)((uint)(dVar3 < dVar2) << 0x1f)) goto LAB_71b36260;
      *param_2 = dVar3;
    }
    *param_3 = dVar2;
    dVar3 = dVar2;
  }
  else if ((int)((uint)(dVar3 < dVar1) << 0x1f) < 0) {
    *param_2 = dVar3;
    *param_3 = dVar1;
    dVar2 = *param_1;
    dVar3 = dVar1;
    if ((int)((uint)(*param_2 < dVar2) << 0x1f) < 0) {
      *param_1 = *param_2;
      *param_2 = dVar2;
      dVar3 = *param_3;
    }
  }
LAB_71b36260:
  if ((int)((uint)(*param_4 < dVar3) << 0x1f) < 0) {
    *param_3 = *param_4;
    *param_4 = dVar3;
    dVar3 = *param_2;
    if ((int)((uint)(*param_3 < dVar3) << 0x1f) < 0) {
      *param_2 = *param_3;
      *param_3 = dVar3;
      dVar3 = *param_1;
      if ((int)((uint)(*param_2 < dVar3) << 0x1f) < 0) {
        *param_1 = *param_2;
        *param_2 = dVar3;
      }
    }
  }
  dVar3 = *param_4;
  if ((int)((uint)(*param_5 < dVar3) << 0x1f) < 0) {
    *param_4 = *param_5;
    *param_5 = dVar3;
    dVar3 = *param_3;
    if (-1 < (int)((uint)(*param_4 < dVar3) << 0x1f)) {
      return;
    }
    *param_3 = *param_4;
    *param_4 = dVar3;
    dVar3 = *param_2;
    if ((int)((uint)(*param_3 < dVar3) << 0x1f) < 0) {
      *param_2 = *param_3;
      *param_3 = dVar3;
      dVar3 = *param_1;
      if ((int)((uint)(*param_2 < dVar3) << 0x1f) < 0) {
        *param_1 = *param_2;
        *param_2 = dVar3;
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71b36332
// Entry: 0x71b36332 | Size: 594 bytes
// =========================================================================

double * FUN_71b36332(double *param_1,double *param_2,double *param_3)

{
  bool bVar1;
  double *pdVar2;
  double *pdVar3;
  int iVar4;
  double *pdVar5;
  int iVar6;
  int iVar7;
  double *pdVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  
  pdVar3 = param_3;
  if (param_1 != param_2) {
    iVar10 = (int)param_2 - (int)param_1 >> 3;
    if (1 < iVar10) {
      uVar11 = iVar10 - 2U >> 1;
      uVar9 = uVar11;
      do {
        if ((int)uVar9 <= (int)uVar11) {
          iVar4 = (uVar9 & 0x1fffffff) * 2;
          iVar6 = iVar4 + 1;
          iVar4 = iVar4 + 2;
          pdVar3 = param_1 + iVar6;
          if ((iVar4 < iVar10) && ((int)((uint)(*pdVar3 < pdVar3[1]) << 0x1f) < 0)) {
            pdVar3 = pdVar3 + 1;
            iVar6 = iVar4;
          }
          dVar13 = *pdVar3;
          dVar12 = param_1[uVar9];
          pdVar5 = param_1 + uVar9;
          if (-1 < (int)((uint)(dVar13 < dVar12) << 0x1f)) {
            do {
              pdVar2 = pdVar3;
              *pdVar5 = dVar13;
              if ((int)uVar11 < iVar6) break;
              iVar4 = iVar6 * 2 + 2;
              iVar6 = iVar6 * 2 + 1;
              pdVar3 = param_1 + iVar6;
              if ((iVar4 < iVar10) && ((int)((uint)(*pdVar3 < pdVar3[1]) << 0x1f) < 0)) {
                pdVar3 = pdVar3 + 1;
                iVar6 = iVar4;
              }
              dVar13 = *pdVar3;
              pdVar5 = pdVar2;
            } while (-1 < (int)((uint)(dVar13 < dVar12) << 0x1f));
            *pdVar2 = dVar12;
          }
        }
        bVar1 = 0 < (int)uVar9;
        uVar9 = uVar9 - 1;
      } while (bVar1);
    }
    pdVar3 = param_2;
    if (param_2 != param_3) {
      pdVar5 = param_2;
      do {
        dVar12 = *pdVar5;
        if ((int)((uint)(dVar12 < *param_1) << 0x1f) < 0) {
          *pdVar5 = *param_1;
          *param_1 = dVar12;
          if (1 < iVar10) {
            if (((int)param_2 - (int)param_1 == 0x10) ||
               (-1 < (int)((uint)(param_1[1] < param_1[2]) << 0x1f))) {
              iVar6 = 1;
              pdVar3 = param_1 + 1;
            }
            else {
              iVar6 = 2;
              pdVar3 = param_1 + 2;
            }
            dVar13 = *pdVar3;
            pdVar2 = param_1;
            if (-1 < (int)((uint)(dVar13 < dVar12) << 0x1f)) {
              do {
                pdVar8 = pdVar3;
                *pdVar2 = dVar13;
                if ((int)(iVar10 - 2U >> 1) < iVar6) break;
                iVar4 = iVar6 * 2 + 2;
                iVar6 = iVar6 * 2 + 1;
                pdVar3 = param_1 + iVar6;
                if ((iVar4 < iVar10) && ((int)((uint)(*pdVar3 < pdVar3[1]) << 0x1f) < 0)) {
                  pdVar3 = pdVar3 + 1;
                  iVar6 = iVar4;
                }
                dVar13 = *pdVar3;
                pdVar2 = pdVar8;
              } while (-1 < (int)((uint)(dVar13 < dVar12) << 0x1f));
              *pdVar8 = dVar12;
            }
          }
        }
        pdVar5 = pdVar5 + 1;
        pdVar3 = param_3;
      } while (pdVar5 != param_3);
    }
    if (1 < iVar10) {
      do {
        dVar12 = *param_1;
        pdVar5 = param_1;
        iVar6 = 0;
        do {
          iVar7 = iVar6 * 2 + 2;
          pdVar2 = pdVar5 + iVar6 + 1;
          iVar4 = iVar6 * 2 + 1;
          if ((iVar7 < iVar10) && ((int)((uint)(pdVar5[iVar6 + 1] < pdVar5[iVar6 + 2]) << 0x1f) < 0)
             ) {
            pdVar2 = pdVar5 + iVar6 + 2;
            iVar4 = iVar7;
          }
          *pdVar5 = *pdVar2;
          pdVar5 = pdVar2;
          iVar6 = iVar4;
        } while (iVar4 <= (int)(iVar10 - 2U >> 1));
        param_2 = param_2 + -1;
        if (pdVar2 == param_2) {
          *pdVar2 = dVar12;
        }
        else {
          *pdVar2 = *param_2;
          iVar6 = (int)pdVar2 + (8 - (int)param_1) >> 3;
          *param_2 = dVar12;
          if (1 < iVar6) {
            dVar12 = *pdVar2;
            uVar9 = iVar6 - 2U >> 1;
            dVar13 = param_1[uVar9];
            pdVar5 = param_1 + uVar9;
            if ((int)((uint)(dVar13 < dVar12) << 0x1f) < 0) {
              do {
                pdVar8 = pdVar5;
                *pdVar2 = dVar13;
                if (uVar9 == 0) break;
                uVar9 = uVar9 - 1 >> 1;
                dVar13 = param_1[uVar9];
                pdVar2 = pdVar8;
                pdVar5 = param_1 + uVar9;
              } while ((int)((uint)(dVar13 < dVar12) << 0x1f) < 0);
              *pdVar8 = dVar12;
            }
          }
        }
        bVar1 = 2 < iVar10;
        iVar10 = iVar10 + -1;
      } while (bVar1);
    }
  }
  return pdVar3;
}


// =========================================================================
// Function: LVSKxonVlQ_JezDvNNmZbXNEgktzuaEIUJTgrI
// Entry: 0x71b3659c | Size: 20 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void LVSKxonVlQ_JezDvNNmZbXNEgktzuaEIUJTgrI(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: qQIuwbHcsSjxNZVoVQngv_KeaxNCHbhktIDXxmX
// Entry: 0x71b36960 | Size: 12 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void qQIuwbHcsSjxNZVoVQngv_KeaxNCHbhktIDXxmX(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: wGmVkYfENEhNvZZUngctRRitQCOBpfSWzWIsuwKaJTMqNawQKMC_EkEZNoZcKGXgrMbhpHDFfQMNGkujHejIdiMUstXHCVsPABYzSJuUhlGNZav
// Entry: 0x71b36a60 | Size: 24 bytes
// =========================================================================

void wGmVkYfENEhNvZZUngctRRitQCOBpfSWzWIsuwKaJTMqNawQKMC_EkEZNoZcKGXgrMbhpHDFfQMNGkujHejIdiMUstXHCVsPABYzSJuUhlGNZav
               (undefined4 *param_1)

{
  FUN_71ba3034(*param_1,param_1[1],1000000,0);
  return;
}


// =========================================================================
// Function: OLglnIByzIUmVYgdRdQylBnw_klnZfzgvbfyjHKdgE_CIYPb
// Entry: 0x71b36aac | Size: 18 bytes
// =========================================================================

void OLglnIByzIUmVYgdRdQylBnw_klnZfzgvbfyjHKdgE_CIYPb(longlong *param_1,int param_2)

{
  *param_1 = (longlong)param_2 * 1000000;
  return;
}


// =========================================================================
// Function: cAVowcMDgjNlKlwaXlLRnhcfdxnJsEWOPLMGMHS
// Entry: 0x71b36ad8 | Size: 12 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void cAVowcMDgjNlKlwaXlLRnhcfdxnJsEWOPLMGMHS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: SI_jHZGHEkRozkgfjpWJMmUiRrdj
// Entry: 0x71b36bc4 | Size: 1608 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

uint SI_jHZGHEkRozkgfjpWJMmUiRrdj(uint param_1)

{
  ushort uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 unaff_r6;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint extraout_r12;
  uint uVar10;
  bool bVar11;
  undefined4 in_cr2;
  undefined4 in_cr3;
  
  if (param_1 < 0xd4) {
    uVar4 = 0x30;
    puVar3 = (uint *)0x7009c200;
    do {
      uVar8 = uVar4 >> 1;
      if (puVar3[uVar4 >> 1] < param_1) {
        puVar3 = puVar3 + (uVar4 >> 1) + 1;
        uVar8 = uVar4 + ~(uVar4 >> 1);
      }
      uVar4 = uVar8;
    } while (uVar4 != 0);
    return *puVar3;
  }
  if (0xfffffffb < param_1) {
    uVar1 = FUN_71b377e8(s___next_prime_overflow_7006fc9c);
    coprocessor_function2(0xf,5,0,in_cr2,in_cr3,in_cr3);
    uVar10 = extraout_r12 & 0xfc2bffff;
    *(undefined4 *)(uVar10 - 4) = 0x71b371e5;
    *(uint *)(uVar10 - 8) = (uint)uVar1;
    *(undefined4 *)(uVar10 - 0xc) = unaff_r6;
    *(uint *)(uVar10 - 0x10) = (uint)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar4 = 0x30;
  uVar8 = param_1 / 0xd2;
  puVar3 = (uint *)&DAT_7009c2c0;
  do {
    uVar2 = uVar4 >> 1;
    if (puVar3[uVar4 >> 1] < param_1 % 0xd2) {
      puVar3 = puVar3 + (uVar4 >> 1) + 1;
      uVar2 = uVar4 + ~(uVar4 >> 1);
    }
    uVar4 = uVar2;
  } while (uVar4 != 0);
  iVar9 = (int)(puVar3 + -0x1c0270b0) >> 2;
  do {
    iVar6 = 5;
    uVar4 = *(int *)(&DAT_7009c2c0 + iVar9 * 4) + uVar8 * 0xd2;
    do {
      uVar5 = *(uint *)(iVar6 * 4 + 0x7009c200);
      uVar2 = FUN_71ba0484(uVar4,uVar5);
      if (uVar2 < uVar5) {
        return uVar4;
      }
      if (uVar4 == uVar5 * uVar2) goto LAB_71b371be;
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0x2f);
    uVar2 = 0x1a3;
    do {
      uVar7 = uVar2 - 0xd0;
      uVar5 = FUN_71ba0484(uVar4,uVar7);
      if (uVar5 < uVar7) {
        return uVar4;
      }
      if (uVar4 == uVar7 * uVar5) break;
      uVar5 = FUN_71ba0484(uVar4,uVar2 - 0xc6);
      if (uVar5 < uVar2 - 0xc6) {
        return uVar4;
      }
      if (uVar4 == (uVar2 - 0xc6) * uVar5) break;
      uVar5 = FUN_71ba0484(uVar4,uVar2 - 0xc4);
      if (uVar5 < uVar2 - 0xc4) {
        return uVar4;
      }
      if (uVar4 == (uVar2 - 0xc4) * uVar5) break;
      uVar5 = FUN_71ba0484(uVar4,uVar2 - 0xc0);
      if (uVar5 < uVar2 - 0xc0) {
        return uVar4;
      }
      if (uVar4 == (uVar2 - 0xc0) * uVar5) break;
      uVar5 = FUN_71ba0484(uVar4,uVar2 - 0xbe);
      if (uVar5 < uVar2 - 0xbe) {
        return uVar4;
      }
      if (uVar4 == (uVar2 - 0xbe) * uVar5) break;
      uVar5 = FUN_71ba0484(uVar4,uVar2 - 0xba);
      if (uVar5 < uVar2 - 0xba) {
        return uVar4;
      }
      if (uVar4 == (uVar2 - 0xba) * uVar5) break;
      uVar5 = FUN_71ba0484(uVar4,uVar2 - 0xb4);
      if (uVar5 < uVar2 - 0xb4) {
        return uVar4;
      }
      if (uVar4 == (uVar2 - 0xb4) * uVar5) break;
      uVar5 = FUN_71ba0484(uVar4,uVar2 - 0xb2);
      if (uVar5 < uVar2 - 0xb2) {
        return uVar4;
      }
      if (uVar4 == (uVar2 - 0xb2) * uVar5) break;
      uVar5 = FUN_71ba0484(uVar4,uVar2 - 0xac);
      if (uVar5 < uVar2 - 0xac) {
        return uVar4;
      }
      if (uVar4 == (uVar2 - 0xac) * uVar5) break;
      uVar5 = FUN_71ba0484(uVar4,uVar2 - 0xa8);
      if (uVar5 < uVar2 - 0xa8) {
        return uVar4;
      }
      if (uVar4 == (uVar2 - 0xa8) * uVar5) break;
      uVar5 = FUN_71ba0484(uVar4,uVar2 - 0xa6);
      if (uVar5 < uVar2 - 0xa6) {
        return uVar4;
      }
      if (uVar4 == (uVar2 - 0xa6) * uVar5) break;
      uVar5 = FUN_71ba0484(uVar4,uVar2 - 0xa2);
      if (uVar5 < uVar2 - 0xa2) {
        return uVar4;
      }
      if (uVar4 == (uVar2 - 0xa2) * uVar5) break;
      uVar5 = FUN_71ba0484(uVar4,uVar2 - 0x9c);
      if (uVar5 < uVar2 - 0x9c) {
        return uVar4;
      }
      if (uVar4 == (uVar2 - 0x9c) * uVar5) break;
      uVar5 = FUN_71ba0484(uVar4,uVar2 - 0x96);
      if (uVar5 < uVar2 - 0x96) {
        return uVar4;
      }
      if (uVar4 == (uVar2 - 0x96) * uVar5) break;
      uVar5 = FUN_71ba0484(uVar4,uVar2 - 0x94);
      if (uVar5 < uVar2 - 0x94) {
        return uVar4;
      }
      if (uVar4 == (uVar2 - 0x94) * uVar5) break;
      uVar5 = FUN_71ba0484(uVar4,uVar2 - 0x8e);
      if (uVar5 < uVar2 - 0x8e) {
        return uVar4;
      }
      if (uVar4 == (uVar2 - 0x8e) * uVar5) break;
      uVar5 = FUN_71ba0484(uVar4,uVar2 - 0x8a);
      if (uVar5 < uVar2 - 0x8a) {
        return uVar4;
      }
      if (uVar4 == (uVar2 - 0x8a) * uVar5) break;
      uVar5 = FUN_71ba0484(uVar4,uVar2 - 0x88);
      if (uVar5 < uVar2 - 0x88) {
        return uVar4;
      }
      if (uVar4 == (uVar2 - 0x88) * uVar5) break;
      uVar5 = FUN_71ba0484(uVar4,uVar2 - 0x82);
      if (uVar5 < uVar2 - 0x82) {
        return uVar4;
      }
      if (uVar4 == (uVar2 - 0x82) * uVar5) break;
      uVar5 = FUN_71ba0484(uVar4,uVar2 - 0x7e);
      if (uVar5 < uVar2 - 0x7e) {
        return uVar4;
      }
      if (uVar4 == (uVar2 - 0x7e) * uVar5) break;
      uVar5 = FUN_71ba0484(uVar4,uVar2 - 0x78);
      if (uVar5 < uVar2 - 0x78) {
        return uVar4;
      }
      if (uVar4 == (uVar2 - 0x78) * uVar5) break;
      uVar5 = FUN_71ba0484(uVar4,uVar2 - 0x70);
      if (uVar5 < uVar2 - 0x70) {
        return uVar4;
      }
      if (uVar4 == (uVar2 - 0x70) * uVar5) break;
      uVar5 = FUN_71ba0484(uVar4,uVar2 - 0x6c);
      if (uVar5 < uVar2 - 0x6c) {
        return uVar4;
      }
      if (uVar4 == (uVar2 - 0x6c) * uVar5) break;
      uVar5 = FUN_71ba0484(uVar4,uVar2 - 0x6a);
      if (uVar5 < uVar2 - 0x6a) {
        return uVar4;
      }
      if (uVar4 == (uVar2 - 0x6a) * uVar5) break;
      uVar5 = FUN_71ba0484(uVar4,uVar2 - 0x66);
      if (uVar5 < uVar2 - 0x66) {
        return uVar4;
      }
      if (uVar4 == (uVar2 - 0x66) * uVar5) break;
      uVar5 = FUN_71ba0484(uVar4,uVar2 - 100);
      if (uVar5 < uVar2 - 100) {
        return uVar4;
      }
      if (uVar4 == (uVar2 - 100) * uVar5) break;
      uVar5 = FUN_71ba0484(uVar4,uVar2 - 0x60);
      if (uVar5 < uVar2 - 0x60) {
        return uVar4;
      }
      if (uVar4 == (uVar2 - 0x60) * uVar5) break;
      uVar5 = FUN_71ba0484(uVar4,uVar2 - 0x58);
      if (uVar5 < uVar2 - 0x58) {
        return uVar4;
      }
      if (uVar4 == (uVar2 - 0x58) * uVar5) break;
      uVar5 = FUN_71ba0484(uVar4,uVar2 - 0x52);
      if (uVar5 < uVar2 - 0x52) {
        return uVar4;
      }
      if (uVar4 == (uVar2 - 0x52) * uVar5) break;
      uVar5 = FUN_71ba0484(uVar4,uVar2 - 0x4e);
      if (uVar5 < uVar2 - 0x4e) {
        return uVar4;
      }
      if (uVar4 == (uVar2 - 0x4e) * uVar5) break;
      uVar5 = FUN_71ba0484(uVar4,uVar2 - 0x48);
      if (uVar5 < uVar2 - 0x48) {
        return uVar4;
      }
      if (uVar4 == (uVar2 - 0x48) * uVar5) break;
      uVar5 = FUN_71ba0484(uVar4,uVar2 - 0x46);
      if (uVar5 < uVar2 - 0x46) {
        return uVar4;
      }
      if (uVar4 == (uVar2 - 0x46) * uVar5) break;
      uVar5 = FUN_71ba0484(uVar4,uVar2 - 0x42);
      if (uVar5 < uVar2 - 0x42) {
        return uVar4;
      }
      if (uVar4 == (uVar2 - 0x42) * uVar5) break;
      uVar5 = FUN_71ba0484(uVar4,uVar2 - 0x3c);
      if (uVar5 < uVar2 - 0x3c) {
        return uVar4;
      }
      if (uVar4 == (uVar2 - 0x3c) * uVar5) break;
      uVar5 = FUN_71ba0484(uVar4,uVar2 - 0x3a);
      if (uVar5 < uVar2 - 0x3a) {
        return uVar4;
      }
      if (uVar4 == (uVar2 - 0x3a) * uVar5) break;
      uVar5 = FUN_71ba0484(uVar4,uVar2 - 0x34);
      if (uVar5 < uVar2 - 0x34) {
        return uVar4;
      }
      if (uVar4 == (uVar2 - 0x34) * uVar5) break;
      uVar5 = FUN_71ba0484(uVar4,uVar2 - 0x2e);
      if (uVar5 < uVar2 - 0x2e) {
        return uVar4;
      }
      if (uVar4 == (uVar2 - 0x2e) * uVar5) break;
      uVar5 = FUN_71ba0484(uVar4,uVar2 - 0x2a);
      if (uVar5 < uVar2 - 0x2a) {
        return uVar4;
      }
      if (uVar4 == (uVar2 - 0x2a) * uVar5) break;
      uVar5 = FUN_71ba0484(uVar4,uVar2 - 0x28);
      if (uVar5 < uVar2 - 0x28) {
        return uVar4;
      }
      if (uVar4 == (uVar2 - 0x28) * uVar5) break;
      uVar5 = FUN_71ba0484(uVar4,uVar2 - 0x24);
      if (uVar5 < uVar2 - 0x24) {
        return uVar4;
      }
      if (uVar4 == (uVar2 - 0x24) * uVar5) break;
      uVar5 = FUN_71ba0484(uVar4,uVar2 - 0x1e);
      if (uVar5 < uVar2 - 0x1e) {
        return uVar4;
      }
      if (uVar4 == (uVar2 - 0x1e) * uVar5) break;
      uVar5 = FUN_71ba0484(uVar4,uVar2 - 0x1c);
      if (uVar5 < uVar2 - 0x1c) {
        return uVar4;
      }
      if (uVar4 == (uVar2 - 0x1c) * uVar5) break;
      uVar5 = FUN_71ba0484(uVar4,uVar2 - 0x16);
      if (uVar5 < uVar2 - 0x16) {
        return uVar4;
      }
      if (uVar4 == (uVar2 - 0x16) * uVar5) break;
      uVar5 = FUN_71ba0484(uVar4,uVar2 - 0x12);
      if (uVar5 < uVar2 - 0x12) {
        return uVar4;
      }
      if (uVar4 == (uVar2 - 0x12) * uVar5) break;
      uVar5 = FUN_71ba0484(uVar4,uVar2 - 0x10);
      if (uVar5 < uVar2 - 0x10) {
        return uVar4;
      }
      if (uVar4 == (uVar2 - 0x10) * uVar5) break;
      uVar5 = FUN_71ba0484(uVar4,uVar2 - 0xc);
      if (uVar5 < uVar2 - 0xc) {
        return uVar4;
      }
      if (uVar4 == (uVar2 - 0xc) * uVar5) break;
      uVar5 = FUN_71ba0484(uVar4,uVar2 - 10);
      if (uVar5 < uVar2 - 10) {
        return uVar4;
      }
      if (uVar4 == (uVar2 - 10) * uVar5) break;
      uVar5 = FUN_71ba0484(uVar4,uVar2);
      if (uVar5 < uVar2) {
        return uVar4;
      }
      uVar5 = uVar5 * uVar2;
      uVar2 = uVar2 + 0xd2;
    } while (uVar4 != uVar5);
LAB_71b371be:
    iVar6 = iVar9 + 1;
    if (iVar6 == 0x30) {
      uVar8 = uVar8 + 1;
    }
    bVar11 = iVar9 != 0x2f;
    iVar9 = 0;
    if (bVar11) {
      iVar9 = iVar6;
    }
  } while( true );
}


// =========================================================================
// Function: FUN_71b377e8
// Entry: 0x71b377e8 | Size: 8 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void FUN_71b377e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: LBnLtotRiEnyNDiSTYPvmDZgRjZEMb
// Entry: 0x71b37964 | Size: 4 bytes
// =========================================================================

void LBnLtotRiEnyNDiSTYPvmDZgRjZEMb(void)

{
  thunk_CnY_uZeaDyxdbKuhNYOsuNTHkGOv_Ep();
  return;
}


// =========================================================================
// Function: zrrVhClpbICsMYpanPNTfQPPblfaNN
// Entry: 0x71b3799c | Size: 6 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void zrrVhClpbICsMYpanPNTfQPPblfaNN(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: ExGTrcJNvSLQNHlPiGbZLecjJlCngLJYPa
// Entry: 0x71b37a00 | Size: 6 bytes
// =========================================================================

char * ExGTrcJNvSLQNHlPiGbZLecjJlCngLJYPa(void)

{
  return s_bad_weak_ptr_7006f38e;
}


// =========================================================================
// Function: ZXqJfnvcfugNBhbectKcQErwKgYSZROgdkCWh
// Entry: 0x71b37a40 | Size: 2 bytes
// =========================================================================

void ZXqJfnvcfugNBhbectKcQErwKgYSZROgdkCWh(void)

{
  return;
}


// =========================================================================
// Function: PedqZaBZSaSShpKDwqejmAbPNJjyhFwR
// Entry: 0x71b37a5a | Size: 2 bytes
// =========================================================================

void PedqZaBZSaSShpKDwqejmAbPNJjyhFwR(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfe,0x71b37a5a);
  (*pcVar1)();
}


// =========================================================================
// Function: hdOEAMKTazPNnilEDNvCbVrVdOkrZGBsxiVaO
// Entry: 0x71b37a74 | Size: 2 bytes
// =========================================================================

void hdOEAMKTazPNnilEDNvCbVrVdOkrZGBsxiVaO(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfe,0x71b37a74);
  (*pcVar1)();
}


// =========================================================================
// Function: HlRbwOrlbzNKfHCnsqMlbfbZmTzkkWGxYHojWIegRKng
// Entry: 0x71b37a8e | Size: 18 bytes
// =========================================================================

void HlRbwOrlbzNKfHCnsqMlbfbZmTzkkWGxYHojWIegRKng(int param_1)

{
  bool bVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 4);
  do {
    ExclusiveAccess(piVar2);
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = *piVar2 + 1;
  return;
}


// =========================================================================
// Function: bQItGWuxwpZDteJUIEcHY_LiTZVr_TKFLQw_wpJWCoAqfGMa
// Entry: 0x71b37ab8 | Size: 44 bytes
// =========================================================================

bool bQItGWuxwpZDteJUIEcHY_LiTZVr_TKFLQw_wpJWCoAqfGMa(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_1 + 1;
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(piVar2);
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  DataMemoryBarrier(0x1b);
  if (iVar3 == 0) {
    (**(code **)(*param_1 + 8))();
  }
  return iVar3 == 0;
}


// =========================================================================
// Function: oonkvMiUMlYxcXMQmEdKAczpRzXMxneDjBuYnTfjHOMgvLGpD
// Entry: 0x71b37afc | Size: 18 bytes
// =========================================================================

void oonkvMiUMlYxcXMQmEdKAczpRzXMxneDjBuYnTfjHOMgvLGpD(int param_1)

{
  bool bVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 4);
  do {
    ExclusiveAccess(piVar2);
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = *piVar2 + 1;
  return;
}


// =========================================================================
// Function: ioawvxsIXnzHBjjpZEmgMyjLpoqkUuEY_kFIEJhIlBQMUBG
// Entry: 0x71b37b26 | Size: 18 bytes
// =========================================================================

void ioawvxsIXnzHBjjpZEmgMyjLpoqkUuEY_kFIEJhIlBQMUBG(int param_1)

{
  bool bVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 8);
  do {
    ExclusiveAccess(piVar2);
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = *piVar2 + 1;
  return;
}


// =========================================================================
// Function: nauEOaSEMhZefIpoeWxbEBSVb_xMEyyKaipuKhOcqcHTFclbtVhbG
// Entry: 0x71b37b50 | Size: 92 bytes
// =========================================================================

void nauEOaSEMhZefIpoeWxbEBSVb_xMEyyKaipuKhOcqcHTFclbtVhbG(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_1 + 1;
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(piVar2);
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  DataMemoryBarrier(0x1b);
  if (iVar3 != 0) {
    return;
  }
  piVar2 = param_1 + 2;
  (**(code **)(*param_1 + 8))();
  DataMemoryBarrier(0x1b);
  if (*piVar2 != 0) {
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(piVar2);
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    DataMemoryBarrier(0x1b);
    if (iVar3 != 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x71b37baa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}


// =========================================================================
// Function: xwzSFoU_qvDa_PehyVStzHlBOSkJhkBLR_tNCbTfLzAoZMkmnRt
// Entry: 0x71b37bc4 | Size: 46 bytes
// =========================================================================

void xwzSFoU_qvDa_PehyVStzHlBOSkJhkBLR_tNCbTfLzAoZMkmnRt(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  DataMemoryBarrier(0x1b);
  if (param_1[2] != 0) {
    piVar3 = param_1 + 2;
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(piVar3);
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    DataMemoryBarrier(0x1b);
    if (iVar2 != 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x71b37bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}


// =========================================================================
// Function: GFOJguPsmJ_PWtSOYltfHodVcZngXASKwprDJXhQ
// Entry: 0x71b37c0a | Size: 78 bytes
// =========================================================================

int GFOJguPsmJ_PWtSOYltfHodVcZngXASKwprDJXhQ(int param_1)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  
  DataMemoryBarrier(0x1b);
  if (*(int *)(param_1 + 4) != -1) {
    piVar5 = (int *)(param_1 + 4);
    iVar4 = *(int *)(param_1 + 4);
    do {
      ExclusiveAccess(piVar5);
      iVar2 = *piVar5;
      if (iVar2 == iVar4) {
        DataMemoryBarrier(0x1b);
        bVar1 = (bool)hasExclusiveAccess(piVar5);
        if (bVar1) {
          *piVar5 = iVar4 + 1;
        }
        bVar3 = false;
        if (bVar1) {
          bVar3 = true;
        }
      }
      else {
        bVar3 = false;
        ClearExclusiveLocal();
      }
      DataMemoryBarrier(0x1b);
      if (bVar3) {
        return param_1;
      }
      iVar4 = iVar2;
    } while (iVar2 != -1);
  }
  return 0;
}


// =========================================================================
// Function: nMhBLStXNrRJycAHZUFcIPrMoJTqicORGChLWxFWPeqkGLlSnrzBJACLKQhnyeBU
// Entry: 0x71b37c70 | Size: 4 bytes
// =========================================================================

undefined4 nMhBLStXNrRJycAHZUFcIPrMoJTqicORGChLWxFWPeqkGLlSnrzBJACLKQhnyeBU(void)

{
  return 0;
}


// =========================================================================
// Function: qZm_iPKWkRKsinheMyfUFrgvOruf
// Entry: 0x71b37c8c | Size: 6 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void qZm_iPKWkRKsinheMyfUFrgvOruf(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: yNUnrqAuGFTffnIyQYyqeffjmJzias
// Entry: 0x71b37cec | Size: 6 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void yNUnrqAuGFTffnIyQYyqeffjmJzias(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: cVPKzvjBsgiwgjadmHfUbFZvZMWiVb
// Entry: 0x71b37d4c | Size: 50 bytes
// =========================================================================

int cVPKzvjBsgiwgjadmHfUbFZvZMWiVb(int param_1)

{
  uint uVar1;
  
  uVar1 = (param_1 * 0x5bd1e995 ^ (uint)(param_1 * 0x5bd1e995) >> 0x18) * 0x5bd1e995 ^ 0x6f47a654;
  uVar1 = (uVar1 ^ uVar1 >> 0xd) * 0x5bd1e995;
  return ((uVar1 ^ uVar1 >> 0xf) & 0x1f) * 4 + 0x701365b0;
}


// =========================================================================
// Function: MwgePpARGjeSnovwJETdpT_krt
// Entry: 0x71b37db8 | Size: 56 bytes
// =========================================================================

uint MwgePpARGjeSnovwJETdpT_krt(int param_1,uint param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_4;
  if (param_2 <= uVar3) {
    uVar1 = -param_1 & (*param_3 + param_1) - 1;
    uVar2 = uVar1 - *param_3;
    if (uVar2 <= uVar3 - param_2) {
      *param_4 = uVar3 - uVar2;
      *param_3 = uVar1;
      return uVar1;
    }
  }
  return 0;
}


// =========================================================================
// Function: _Dx_tsbGCqleSxweJUANDwxC
// Entry: 0x71b37e08 | Size: 6 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void _Dx_tsbGCqleSxweJUANDwxC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: UiH_ITDZjgyBMrUUrevnlNOrmminPC
// Entry: 0x71b37ed4 | Size: 8 bytes
// =========================================================================

void UiH_ITDZjgyBMrUUrevnlNOrmminPC(void)

{
  thunk_CnY_uZeaDyxdbKuhNYOsuNTHkGOv_Ep();
  return;
}


// =========================================================================
// Function: BrOUdMXBfQiwnpEwWGPd_oHVQBOSKn
// Entry: 0x71b37f0c | Size: 6 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void BrOUdMXBfQiwnpEwWGPd_oHVQBOSKn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: clsfHDaQFkrOwyVcLfPzfwvHX_CMjXIzMo
// Entry: 0x71b37f70 | Size: 6 bytes
// =========================================================================

char * clsfHDaQFkrOwyVcLfPzfwvHX_CMjXIzMo(void)

{
  return s_bad_optional_access_7006e340;
}


// =========================================================================
// Function: ySGIGaNryWOlhrdkQbuHRGMBlYQrOVrCKLsNHdJvOzMg
// Entry: 0x71b37fb0 | Size: 4 bytes
// =========================================================================

void ySGIGaNryWOlhrdkQbuHRGMBlYQrOVrCKLsNHdJvOzMg(void)

{
  thunk_yWQCKHflWNVsbmkMVfBMdga();
  return;
}


// =========================================================================
// Function: KlESgLBgHZYtjo_aiJJUjlonuYKAikUWNXZXzleBgiuc
// Entry: 0x71b37fe8 | Size: 6 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void KlESgLBgHZYtjo_aiJJUjlonuYKAikUWNXZXzleBgiuc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: ZnXNzHfpZiflRGafvhKKNNrxIcpFEAPYObTRZlFKXlFALHFJirlqtGhcJJBdLIbqmxfCocajtLbKrOvdZmTEhWsxba
// Entry: 0x71b3804c | Size: 34 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void ZnXNzHfpZiflRGafvhKKNNrxIcpFEAPYObTRZlFKXlFALHFJirlqtGhcJJBdLIbqmxfCocajtLbKrOvdZmTEhWsxba
               (undefined4 *param_1)

{
  *param_1 = &DAT_70b10388;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: WfkZEeuHdKMsbupmZh_AdtqB
// Entry: 0x71b3816c | Size: 24 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void WfkZEeuHdKMsbupmZh_AdtqB(undefined4 *param_1)

{
  *param_1 = &DAT_70b10388;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: WMYEyjRHvjqmeCDOSpuaIlNTT
// Entry: 0x71b38280 | Size: 40 bytes
// =========================================================================

void WMYEyjRHvjqmeCDOSpuaIlNTT(undefined4 *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *(int *)(param_2 + 4);
  *param_1 = &DAT_70b10388;
  param_1[1] = iVar2;
  piVar3 = (int *)(iVar2 + -4);
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(piVar3);
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = *piVar3 + 1;
  DataMemoryBarrier(0x1b);
  return;
}


// =========================================================================
// Function: onMQQsjLGzhzfWILVojMksadf
// Entry: 0x71b382e0 | Size: 74 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void onMQQsjLGzhzfWILVojMksadf(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_2 + 4);
  iVar4 = *(int *)(param_1 + 4);
  *(int *)(param_1 + 4) = iVar2;
  piVar3 = (int *)(iVar2 + -4);
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(piVar3);
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = *piVar3 + 1;
  piVar3 = (int *)(iVar4 + -4);
  DataMemoryBarrier(0x1b);
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(piVar3);
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  DataMemoryBarrier(0x1b);
  if (iVar2 + -1 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}


// =========================================================================
// Function: fuXQiMaotJWyEiZxaVDthCrobXjDwaMAAKYWvLoWZvQdXZMmjOozfUOYqjGeocHwqdqJxOjO_jlLQLYvTfrWKcsMfsVs
// Entry: 0x71b38368 | Size: 34 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void fuXQiMaotJWyEiZxaVDthCrobXjDwaMAAKYWvLoWZvQdXZMmjOozfUOYqjGeocHwqdqJxOjO_jlLQLYvTfrWKcsMfsVs
               (undefined4 *param_1)

{
  *param_1 = &DAT_70b1039c;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: YWhrMvLiObPzUdLMCUZrjZnJUk
// Entry: 0x71b38488 | Size: 24 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void YWhrMvLiObPzUdLMCUZrjZnJUk(undefined4 *param_1)

{
  *param_1 = &DAT_70b1039c;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: XkYAqFSmYHAlUwDwJtvQToxzMJ_
// Entry: 0x71b3859c | Size: 40 bytes
// =========================================================================

void XkYAqFSmYHAlUwDwJtvQToxzMJ_(undefined4 *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *(int *)(param_2 + 4);
  *param_1 = &DAT_70b1039c;
  param_1[1] = iVar2;
  piVar3 = (int *)(iVar2 + -4);
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(piVar3);
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = *piVar3 + 1;
  DataMemoryBarrier(0x1b);
  return;
}


// =========================================================================
// Function: HsVIbnrNNWXAKIbYOOAvgNXWTHp
// Entry: 0x71b385fc | Size: 74 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void HsVIbnrNNWXAKIbYOOAvgNXWTHp(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_2 + 4);
  iVar4 = *(int *)(param_1 + 4);
  *(int *)(param_1 + 4) = iVar2;
  piVar3 = (int *)(iVar2 + -4);
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(piVar3);
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = *piVar3 + 1;
  piVar3 = (int *)(iVar4 + -4);
  DataMemoryBarrier(0x1b);
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(piVar3);
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  DataMemoryBarrier(0x1b);
  if (iVar2 + -1 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}


// =========================================================================
// Function: TUCmDjoQzMjkpOirEhQdNHTvijPdaBsgrfkxVmE
// Entry: 0x71b38684 | Size: 8 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void TUCmDjoQzMjkpOirEhQdNHTvijPdaBsgrfkxVmE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: tcmSmzeisJWgYiEzFnaGDNEmWqHyouPRUhjCCOokRZYhQkWatiaJcmrH_IiTLOHDiOovCLLoMTZSoDBnY
// Entry: 0x71b38798 | Size: 382 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

uint * tcmSmzeisJWgYiEzFnaGDNEmWqHyouPRUhjCCOokRZYhQkWatiaJcmrH_IiTLOHDiOovCLLoMTZSoDBnY
                 (uint *param_1,uint param_2,uint param_3,byte *param_4,uint param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar5 = param_1[1];
  cVar1 = (byte)*param_1 * -0x80;
  if (cVar1 == '\0') {
    uVar5 = (uint)(byte)((byte)*param_1 >> 1);
  }
  if (uVar5 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_71b38b14(param_1);
  }
  uVar3 = uVar5 - param_2;
  uVar6 = param_3;
  if (uVar3 < param_3) {
    uVar6 = uVar3;
  }
  iVar2 = (*param_1 & 0xfffffffe) - 1;
  if (cVar1 == '\0') {
    iVar2 = 10;
  }
  if ((uVar6 - uVar5) + iVar2 < param_5) {
    if (-iVar2 - 10U < (uVar5 + param_5) - (uVar6 + iVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_71a11918(param_1);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar4 = (byte *)param_1[2];
  if ((*param_1 & 1) == 0) {
    pbVar4 = (byte *)((int)param_1 + 1);
  }
  uVar7 = param_5;
  if ((param_5 == uVar6) || (uVar7 = uVar6, uVar3 <= param_3)) {
    if (param_5 == 0) {
      uVar5 = uVar5 - uVar7;
      if ((*param_1 & 1) == 0) {
        *(char *)param_1 = (char)uVar5 * '\x02';
      }
      else {
        param_1[1] = uVar5;
      }
      pbVar4[uVar5] = 0;
      return param_1;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_5 < uVar6) {
    if (param_5 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((((param_4 < pbVar4 + uVar5) && (pbVar4 + param_2 + 1 <= param_4)) &&
      (param_4 < pbVar4 + uVar6 + param_2)) && (param_3 != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: FUN_71b38b14
// Entry: 0x71b38b14 | Size: 12 bytes
// =========================================================================

void FUN_71b38b14(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_71a66fdc(s_basic_string_7006ebe5);
}


// =========================================================================
// Function: hdDebEOpLOswDqgDtXODMzpMggTXxpUP_tIrneekgRvbKouSvcQYFIbyNiFtMJcjejDMiLEOtOxWQDigYXCOKvbncCHGnlIoXSt
// Entry: 0x71b38b74 | Size: 96 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void hdDebEOpLOswDqgDtXODMzpMggTXxpUP_tIrneekgRvbKouSvcQYFIbyNiFtMJcjejDMiLEOtOxWQDigYXCOKvbncCHGnlIoXSt
               (undefined4 param_1,int param_2,uint param_3)

{
  if (-param_2 - 10U < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_71a11918(param_1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: sUdALOAtpiGmFYiVomCDLhpMisqRqVbrSSFmiXuGmHxZIGotXmCAXevkYUnOTVxyYygTCwzhnSvWpPx
// Entry: 0x71b38d06 | Size: 134 bytes
// =========================================================================

int sUdALOAtpiGmFYiVomCDLhpMisqRqVbrSSFmiXuGmHxZIGotXmCAXevkYUnOTVxyYygTCwzhnSvWpPx
              (byte *param_1,byte *param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  
  bVar2 = *param_1;
  uVar5 = *(uint *)(param_1 + 4);
  pbVar8 = *(byte **)(param_1 + 8);
  if ((bVar2 & 1) == 0) {
    uVar5 = (uint)(bVar2 >> 1);
  }
  if (uVar5 < param_3) {
    param_3 = uVar5;
  }
  if (param_4 < uVar5 - param_3) {
    uVar5 = param_3 + param_4;
  }
  if ((bVar2 & 1) == 0) {
    pbVar8 = param_1 + 1;
  }
  pbVar3 = pbVar8 + uVar5;
  pbVar10 = pbVar3;
  if ((param_4 != 0) && (pbVar10 = pbVar8, uVar5 != 0)) {
    pbVar6 = pbVar8;
    pbVar9 = pbVar3;
    do {
      pbVar10 = pbVar9;
      if (*pbVar6 == *param_2) {
        uVar5 = 1;
        do {
          pbVar10 = pbVar6;
          if (param_4 == uVar5) break;
          pbVar7 = pbVar6 + uVar5;
          pbVar10 = pbVar9;
          if (pbVar7 == pbVar3) goto LAB_71b38d72;
          pbVar1 = param_2 + uVar5;
          uVar5 = uVar5 + 1;
        } while (*pbVar7 == *pbVar1);
      }
      pbVar6 = pbVar6 + 1;
      pbVar9 = pbVar10;
    } while (pbVar6 != pbVar3);
  }
LAB_71b38d72:
  iVar4 = (int)pbVar10 - (int)pbVar8;
  if (pbVar10 == pbVar3) {
    iVar4 = -1;
  }
  if (param_4 == 0) {
    iVar4 = (int)pbVar10 - (int)pbVar8;
  }
  return iVar4;
}


// =========================================================================
// Function: ntBrZSbKEFeaSmCoFrXMsPyNDrzUbGMAlhEs_MowifteiW_NTnkdiDrhsslLcuuaXpfGhLsCtdYLVXC
// Entry: 0x71b38da4 | Size: 52 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void ntBrZSbKEFeaSmCoFrXMsPyNDrzUbGMAlhEs_MowifteiW_NTnkdiDrhsslLcuuaXpfGhLsCtdYLVXC
               (char *param_1,undefined4 param_2,char param_3,uint param_4)

{
  if (0xfffffff7 < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_71a11918(param_1);
  }
  if (10 < param_4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = param_3 << 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: eEVVuADrEazXwOfJCedxSAyzuygebquCTzMxEwBEMJIGRGQNioch_mrnzSUxyeWEaDPROerRvy
// Entry: 0x71b38e62 | Size: 38 bytes
// =========================================================================

undefined8 *
eEVVuADrEazXwOfJCedxSAyzuygebquCTzMxEwBEMJIGRGQNioch_mrnzSUxyeWEaDPROerRvy
          (undefined8 *param_1,byte *param_2)

{
  undefined8 uVar1;
  
  if ((*param_2 & 1) == 0) {
    uVar1 = *(undefined8 *)param_2;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
    *param_1 = uVar1;
    return param_1;
  }
  FUN_712f6d58(param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 4));
  return param_1;
}


// =========================================================================
// Function: aViICvx_ctxcxZjvriYL_LGR_LPX_UMjJixPjPYdAyLRwUXJOBRzvMenbJJqWDWxJHzsxnXxQaoYrcaw
// Entry: 0x71b38ebc | Size: 20 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void aViICvx_ctxcxZjvriYL_LGR_LPX_UMjJixPjPYdAyLRwUXJOBRzvMenbJJqWDWxJHzsxnXxQaoYrcaw(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: aSOdMSeYd_EhWGBwHdTOQyOPRGgHWIGSFsKXHHOznzRetlIizuSwtDcUla_FZYELmjEsAXQOIHbLXbj
// Entry: 0x71b38f3a | Size: 38 bytes
// =========================================================================

undefined8 *
aSOdMSeYd_EhWGBwHdTOQyOPRGgHWIGSFsKXHHOznzRetlIizuSwtDcUla_FZYELmjEsAXQOIHbLXbj
          (undefined8 *param_1,byte *param_2)

{
  undefined8 uVar1;
  
  if ((*param_2 & 1) == 0) {
    uVar1 = *(undefined8 *)param_2;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
    *param_1 = uVar1;
    return param_1;
  }
  FUN_712f6d58(param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 4));
  return param_1;
}


// =========================================================================
// Function: NNTAGHdUktFIjHjOBatgarteXIa_ZdgdyeDLsVZMtsnGxuxlhUKuvuFABSerbkKeoJR_wNasOdgWEnjmxzYhb_RPAkr
// Entry: 0x71b38f94 | Size: 62 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

int NNTAGHdUktFIjHjOBatgarteXIa_ZdgdyeDLsVZMtsnGxuxlhUKuvuFABSerbkKeoJR_wNasOdgWEnjmxzYhb_RPAkr
              (byte *param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 4);
  if ((*param_1 & 1) == 0) {
    uVar1 = (uint)(*param_1 >> 1);
  }
  if (param_3 < uVar1) {
    uVar1 = param_3 + 1;
  }
  iVar2 = uVar1 - 1;
  if (iVar2 == -1) {
    iVar2 = -1;
  }
  else if (param_4 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return iVar2;
}


// =========================================================================
// Function: hQTdOelrMNrkAhpAyLgeyuZKpw_PgDSTIeSQbzaInfcbPfcDrwUOQOlNeBdUkRcLuQHddg
// Entry: 0x71b39012 | Size: 18 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void hQTdOelrMNrkAhpAyLgeyuZKpw_PgDSTIeSQbzaInfcbPfcDrwUOQOlNeBdUkRcLuQHddg(byte *param_1)

{
  if ((*param_1 & 1) == 0) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: TmxZLgUfpdFTUl_rJXYaMiKQvlaGmVzdcnuAwyWiTcJWWEHOCtSFXDLuTaVMTRaMoWrqlo__GbjdFMHGOzwlbMVHUqky
// Entry: 0x71b39064 | Size: 68 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

uint TmxZLgUfpdFTUl_rJXYaMiKQvlaGmVzdcnuAwyWiTcJWWEHOCtSFXDLuTaVMTRaMoWrqlo__GbjdFMHGOzwlbMVHUqky
               (byte *param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 4);
  if ((*param_1 & 1) == 0) {
    uVar1 = (uint)(*param_1 >> 1);
  }
  if (uVar1 <= param_3) {
    return 0xffffffff;
  }
  if (param_4 == 0) {
    return param_3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: IaVwlrqshyhaNkiHBdQdtNsKLAsmzrcWNcGqnnFAwBWsOAbTjecyioTmDECtwzhFrfnZWvHOQtyKJ
// Entry: 0x71b390ea | Size: 192 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

uint * IaVwlrqshyhaNkiHBdQdtNsKLAsmzrcWNcGqnnFAwBWsOAbTjecyioTmDECtwzhFrfnZWvHOQtyKJ
                 (uint *param_1,uint param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_1[1];
  cVar1 = (byte)*param_1 * -0x80;
  if (cVar1 == '\0') {
    uVar3 = (uint)(byte)((byte)*param_1 >> 1);
  }
  if (uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_71b38b14(param_1);
  }
  if (param_3 == 0) {
    return param_1;
  }
  iVar2 = (*param_1 & 0xfffffffe) - 1;
  if (cVar1 == '\0') {
    iVar2 = 10;
  }
  if (param_3 <= iVar2 - uVar3) {
    if (uVar3 == param_2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (-iVar2 - 9U < (uVar3 + param_3) - iVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_71a11918(param_1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: hgBvszkeYDnAsajdE_COEOpBbEtZwdJLVjhpiQjVGZlwGYjXOzRgHviUPJEwFnlLZyrNHb
// Entry: 0x71b39304 | Size: 30 bytes
// =========================================================================

void hgBvszkeYDnAsajdE_COEOpBbEtZwdJLVjhpiQjVGZlwGYjXOzRgHviUPJEwFnlLZyrNHb
               (byte *param_1,byte param_2)

{
  byte *pbVar1;
  
  if ((*param_1 & 1) == 0) {
    pbVar1 = param_1 + 1;
    *param_1 = 2;
  }
  else {
    pbVar1 = *(byte **)(param_1 + 8);
    param_1[4] = 1;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  *pbVar1 = param_2;
  pbVar1[1] = 0;
  return;
}


// =========================================================================
// Function: QrDfEwuzvNZROYLkUPDbHTMJzvLeSYzyEivibZJsYRIocaaYdlKnPvYkWT_dctmPtRwsWK_AFoyIqG
// Entry: 0x71b3933a | Size: 60 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void QrDfEwuzvNZROYLkUPDbHTMJzvLeSYzyEivibZJsYRIocaaYdlKnPvYkWT_dctmPtRwsWK_AFoyIqG
               (undefined1 *param_1,undefined4 param_2,uint param_3)

{
  if (0xfffffff7 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_71a11918(param_1);
  }
  if (param_3 < 0xb) {
    *param_1 = (char)(param_3 << 1);
    if (param_3 == 0) {
      param_1[1] = 0;
      return;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: CqjVdXTKydnpZUZYCOUemZXg_HJUkjgNyWMepQwhxTKTkaRpSLbRHL_XfhPAmlzSybMVuPYT
// Entry: 0x71b393f6 | Size: 38 bytes
// =========================================================================

byte * CqjVdXTKydnpZUZYCOUemZXg_HJUkjgNyWMepQwhxTKTkaRpSLbRHL_XfhPAmlzSybMVuPYT
                 (byte *param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  byte *pbVar3;
  
  uVar2 = *(uint *)(param_1 + 4);
  cVar1 = *param_1 * -0x80;
  if (cVar1 == '\0') {
    uVar2 = (uint)(*param_1 >> 1);
  }
  if (param_2 < uVar2) {
    pbVar3 = *(byte **)(param_1 + 8);
    if (cVar1 == '\0') {
      pbVar3 = param_1 + 1;
    }
    return pbVar3 + param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_71b38b14();
}


// =========================================================================
// Function: CYbDsHrJTXyBGDHcNLCvw_YyxhkAXeCeDFXVLOflOXCzbDvBTzUoqvshzV_THRUARbywmOgTcPiyWHK
// Entry: 0x71b39450 | Size: 212 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

uint * CYbDsHrJTXyBGDHcNLCvw_YyxhkAXeCeDFXVLOflOXCzbDvBTzUoqvshzV_THRUARbywmOgTcPiyWHK
                 (uint *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_1[1];
  cVar1 = (byte)*param_1 * -0x80;
  if (cVar1 == '\0') {
    uVar3 = (uint)(byte)((byte)*param_1 >> 1);
  }
  if (uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_71b38b14(param_1);
  }
  iVar2 = (*param_1 & 0xfffffffe) - 1;
  if (cVar1 == '\0') {
    iVar2 = 10;
  }
  if (param_4 <= iVar2 - uVar3) {
    if (param_4 == 0) {
      return param_1;
    }
    if (uVar3 != param_2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (-iVar2 - 10U < (uVar3 + param_4) - iVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_71a11918(param_1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: ipJSHxadGwRhEqXBtPnoCisOTSRYYMQSCPbmXNuzZmrvVqxghBFmsLYpUewhqzMpjnpgKOnOcdbVvzUVaHPJehAO
// Entry: 0x71b396be | Size: 96 bytes
// =========================================================================

int ipJSHxadGwRhEqXBtPnoCisOTSRYYMQSCPbmXNuzZmrvVqxghBFmsLYpUewhqzMpjnpgKOnOcdbVvzUVaHPJehAO
              (byte *param_1,byte *param_2,uint param_3,int param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  
  uVar6 = *(uint *)(param_1 + 4);
  pbVar5 = *(byte **)(param_1 + 8);
  if ((*param_1 & 1) == 0) {
    uVar6 = (uint)(*param_1 >> 1);
    pbVar5 = param_1 + 1;
  }
  if (param_4 == 0 || uVar6 <= param_3) {
    return -1;
  }
  pbVar1 = pbVar5 + param_3;
  pbVar7 = pbVar5 + uVar6;
  do {
    iVar3 = param_4;
    pbVar4 = param_2;
    do {
      pbVar2 = pbVar1;
      if (*pbVar1 == *pbVar4) goto LAB_71b3970c;
      iVar3 = iVar3 + -1;
      pbVar4 = pbVar4 + 1;
    } while (iVar3 != 0);
    pbVar1 = pbVar1 + 1;
    pbVar2 = pbVar7;
  } while (pbVar1 != pbVar7);
LAB_71b3970c:
  iVar3 = (int)pbVar2 - (int)pbVar5;
  if (pbVar2 == pbVar7) {
    iVar3 = -1;
  }
  return iVar3;
}


// =========================================================================
// Function: jG_cwnTqCLpdJMjCbFfHJIGSvNwjUfqLxrshgMgbyLebCuOFLBXmZJrejlJAeOZbjBnYPZOCIIJKfnz
// Entry: 0x71b39736 | Size: 242 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

uint * jG_cwnTqCLpdJMjCbFfHJIGSvNwjUfqLxrshgMgbyLebCuOFLBXmZJrejlJAeOZbjBnYPZOCIIJKfnz
                 (uint *param_1,uint param_2,uint param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = param_1[1];
  cVar1 = (byte)*param_1 * -0x80;
  if (cVar1 == '\0') {
    uVar4 = (uint)(byte)((byte)*param_1 >> 1);
  }
  if (uVar4 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_71b38b14(param_1);
  }
  param_2 = uVar4 - param_2;
  uVar5 = param_3;
  if (param_2 < param_3) {
    uVar5 = param_2;
  }
  iVar2 = (*param_1 & 0xfffffffe) - 1;
  if (cVar1 == '\0') {
    iVar2 = 10;
  }
  if ((uVar5 - uVar4) + iVar2 < param_4) {
    if ((uVar4 + param_4) - (uVar5 + iVar2) <= -iVar2 - 9U) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Subroutine does not return */
    FUN_71a11918(param_1);
  }
  pbVar3 = (byte *)param_1[2];
  if ((*param_1 & 1) == 0) {
    pbVar3 = (byte *)((int)param_1 + 1);
  }
  if ((param_3 < param_2) && (param_4 != uVar5)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_4 == 0) {
    uVar4 = uVar4 - uVar5;
    if ((*param_1 & 1) == 0) {
      *(char *)param_1 = (char)uVar4 * '\x02';
    }
    else {
      param_1[1] = uVar4;
    }
    pbVar3[uVar4] = 0;
    return param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: TwglkItvIWUoVhfDXPtMZCGfjlFRQXUzMyuqSKmsrLwVJsZsnfUelClVmlbUpTSctlEeWKdqnzbf_M
// Entry: 0x71b39976 | Size: 4 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

uint * TwglkItvIWUoVhfDXPtMZCGfjlFRQXUzMyuqSKmsrLwVJsZsnfUelClVmlbUpTSctlEeWKdqnzbf_M
                 (uint *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  
  uVar2 = *param_1;
  uVar1 = (uVar2 & 0xfffffffe) - 1;
  if ((*param_1 & 1) == 0) {
    uVar1 = 10;
  }
  if (uVar1 < param_3) {
    if (-uVar1 - 10 < param_3 - uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_71a11918(param_1);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar3 = (byte *)param_1[2];
  if ((uVar2 & 1) == 0) {
    pbVar3 = (byte *)((int)param_1 + 1);
  }
  if (param_3 == 0) {
    if ((uVar2 & 1) == 0) {
      *(byte *)param_1 = 0;
    }
    else {
      param_1[1] = 0;
    }
    *pbVar3 = 0;
    return param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: FUN_71b399ae
// Entry: 0x71b399ae | Size: 160 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

uint * FUN_71b399ae(uint *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  
  uVar2 = *param_1;
  uVar1 = (uVar2 & 0xfffffffe) - 1;
  if ((*param_1 & 1) == 0) {
    uVar1 = 10;
  }
  if (uVar1 < param_3) {
    if (-uVar1 - 10 < param_3 - uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_71a11918(param_1);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar3 = (byte *)param_1[2];
  if ((uVar2 & 1) == 0) {
    pbVar3 = (byte *)((int)param_1 + 1);
  }
  if (param_3 == 0) {
    if ((uVar2 & 1) == 0) {
      *(byte *)param_1 = 0;
    }
    else {
      param_1[1] = 0;
    }
    *pbVar3 = 0;
    return param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: unFyfir_BvUlKYauBEfhRelEEXsiapQSHvJAFghrgjyVAHOaZYfJlFFjqW_KkmNFIzQVgBGcyowb
// Entry: 0x71b39b1a | Size: 136 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void unFyfir_BvUlKYauBEfhRelEEXsiapQSHvJAFghrgjyVAHOaZYfJlFFjqW_KkmNFIzQVgBGcyowb
               (uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (0xfffffff7 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_71a11918(param_1);
  }
  uVar4 = *param_1;
  uVar1 = (uVar4 & 0xfffffffe) - 1;
  uVar2 = uVar1;
  if ((*param_1 & 1) == 0) {
    uVar2 = 10;
  }
  if (uVar2 < param_2) {
    uVar2 = param_1[1];
    if ((uVar4 & 1) == 0) {
      uVar2 = (uVar4 & 0xff) >> 1;
    }
    if (param_2 < uVar2) {
      param_2 = uVar2;
    }
    uVar3 = 10;
    if (10 < param_2) {
      uVar3 = param_2 | 7;
    }
    if ((uVar4 & 1) == 0) {
      uVar1 = 10;
    }
    if (uVar3 != uVar1) {
      if (uVar3 < 0xb) {
        if (uVar2 == 0xffffffff) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (uVar3 <= uVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return;
}


// =========================================================================
// Function: fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
// Entry: 0x71b39cd4 | Size: 164 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

uint * fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
                 (uint *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *param_1;
  uVar3 = param_1[1];
  if ((uVar1 & 1) == 0) {
    uVar3 = (uVar1 & 0xff) >> 1;
  }
  iVar2 = (uVar1 & 0xfffffffe) - 1;
  if ((*param_1 & 1) == 0) {
    iVar2 = 10;
  }
  if (param_3 <= iVar2 - uVar3) {
    if (param_3 == 0) {
      return param_1;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (-iVar2 - 10U < (uVar3 + param_3) - iVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_71a11918(param_1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: HusGNOzHgr_yddfgnWKDnBnoyBHOdpYsICJHPoYEqQSltyUQEVIwewfzHgUDdcuQDrhwMZWPIvnBYq_Th
// Entry: 0x71b39e8e | Size: 60 bytes
// =========================================================================

void HusGNOzHgr_yddfgnWKDnBnoyBHOdpYsICJHPoYEqQSltyUQEVIwewfzHgUDdcuQDrhwMZWPIvnBYq_Th
               (undefined4 param_1,byte *param_2,uint param_3,uint param_4)

{
  char cVar1;
  byte *pbVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_2 + 4);
  cVar1 = *param_2 * -0x80;
  if (cVar1 == '\0') {
    uVar3 = (uint)(*param_2 >> 1);
  }
                    /* WARNING: Subroutine does not return */
  if (uVar3 < param_3) {
    FUN_71b38b14();
  }
  pbVar2 = *(byte **)(param_2 + 8);
  if (cVar1 == '\0') {
    pbVar2 = param_2 + 1;
  }
  if (uVar3 - param_3 < param_4) {
    param_4 = uVar3 - param_3;
  }
  FUN_71b399ae(param_1,pbVar2 + param_3,param_4);
  return;
}


// =========================================================================
// Function: PJbXVJ_BxAtkbgLVLLhdLFIinITOpjzPBBgutniNpgVQRhkfhuVkYSGAOhUXEzSUByEmfKcPZxKCA
// Entry: 0x71b39f1a | Size: 62 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

undefined4
PJbXVJ_BxAtkbgLVLLhdLFIinITOpjzPBBgutniNpgVQRhkfhuVkYSGAOhUXEzSUByEmfKcPZxKCA
          (byte *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 4);
  if ((*param_1 & 1) == 0) {
    uVar1 = (uint)(*param_1 >> 1);
  }
  if (uVar1 < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_71b38b14();
  }
  if (uVar1 - param_4 < param_3) {
    param_3 = uVar1 - param_4;
  }
  if (param_3 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}


// =========================================================================
// Function: ZFKCkPECGHBgSCJ_ZjEqTubytdcCpUhDCPoZLelDzCoXkJthbTpGtmyZkwwJUtfGLsixlVYFGmLqiiTvD
// Entry: 0x71b39fac | Size: 108 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

undefined1 *
ZFKCkPECGHBgSCJ_ZjEqTubytdcCpUhDCPoZLelDzCoXkJthbTpGtmyZkwwJUtfGLsixlVYFGmLqiiTvD
          (undefined1 *param_1,byte *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 4);
  if ((*param_2 & 1) == 0) {
    uVar1 = (uint)(*param_2 >> 1);
  }
  if (uVar1 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_71b38b14(param_1);
  }
  if (uVar1 - param_3 < param_4) {
    param_4 = uVar1 - param_3;
  }
  if (param_4 < 0xfffffff8) {
    if (10 < param_4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *param_1 = (char)(param_4 << 1);
    if (param_4 == 0) {
      param_1[1] = 0;
      return param_1;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Subroutine does not return */
  FUN_71a11918(param_1);
}


// =========================================================================
// Function: jqZqCEXeMbwWkPQPsWPXtLIXsrprfLcULRyTsuHQaLjzixodrunQzQjJ_zMKoMhElbhaqoVSUZW
// Entry: 0x71b3a0b6 | Size: 44 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

undefined4
jqZqCEXeMbwWkPQPsWPXtLIXsrprfLcULRyTsuHQaLjzixodrunQzQjJ_zMKoMhElbhaqoVSUZW
          (byte *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 4);
  if ((*param_1 & 1) == 0) {
    uVar1 = (uint)(*param_1 >> 1);
  }
  if (param_3 < uVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0xffffffff;
}


// =========================================================================
// Function: jSHoqoodLsAVyaXwceZPsXxdtMlXYMIYUmEBXOuqwhXVvmghJOcQkoRDPqUgseTPrDkvLiPwEiR_
// Entry: 0x71b3a128 | Size: 60 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void jSHoqoodLsAVyaXwceZPsXxdtMlXYMIYUmEBXOuqwhXVvmghJOcQkoRDPqUgseTPrDkvLiPwEiR_
               (undefined1 *param_1,uint param_2)

{
  if (0xfffffff7 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_71a11918(param_1);
  }
  if (param_2 < 0xb) {
    *param_1 = (char)(param_2 << 1);
    if (param_2 == 0) {
      param_1[1] = 0;
      return;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: IqNXuzvug_UNs_nQpDWINeBvHEzWbHqywjwhxnPvUOpcsPzdSiKupWimgQsjbFdJUFjOsXnCiiLeFN
// Entry: 0x71b3a1e4 | Size: 16 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void IqNXuzvug_UNs_nQpDWINeBvHEzWbHqywjwhxnPvUOpcsPzdSiKupWimgQsjbFdJUFjOsXnCiiLeFN(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: ymBEplOjxgpkazfkvGzfIIrqUNcsjnZenTjlBFCKTvnhlnsCnvEauCAdIJyGGIPMuSW_AYdhjUafZAIOjUabPTH
// Entry: 0x71b3a25c | Size: 62 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

undefined4
ymBEplOjxgpkazfkvGzfIIrqUNcsjnZenTjlBFCKTvnhlnsCnvEauCAdIJyGGIPMuSW_AYdhjUafZAIOjUabPTH
          (byte *param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint uVar1;
  
  if (param_4 != 0) {
    uVar1 = *(uint *)(param_1 + 4);
    if ((*param_1 & 1) == 0) {
      uVar1 = (uint)(*param_1 >> 1);
    }
    if (param_3 < uVar1) {
      uVar1 = param_3 + 1;
    }
    if (uVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return 0xffffffff;
}


// =========================================================================
// Function: VTwMhyKnxmKwZxTKJSLbwazzowkrhxJYcEbwqctiTKXBPvpVtnksGYRNEZyTzoOOpxvpgfMROyymMfvezwm
// Entry: 0x71b3a2da | Size: 92 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void VTwMhyKnxmKwZxTKJSLbwazzowkrhxJYcEbwqctiTKXBPvpVtnksGYRNEZyTzoOOpxvpgfMROyymMfvezwm
               (undefined4 param_1,int param_2,uint param_3)

{
  if (-param_2 - 9U < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_71a11918(param_1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
// Entry: 0x71b3a42c | Size: 144 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
               (uint *param_1,byte param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  
  bVar1 = (byte)*param_1;
  if ((bVar1 & 1) == 0) {
    if (bVar1 != 0x14) {
      pbVar3 = (byte *)((int)param_1 + 1);
      *(byte *)param_1 = bVar1 + 2;
      uVar2 = (uint)(bVar1 >> 1);
LAB_71b3a4da:
      pbVar3[uVar2] = param_2;
      pbVar3[uVar2 + 1] = 0;
      return;
    }
  }
  else {
    uVar2 = param_1[1];
    uVar4 = (*param_1 & 0xfffffffe) - 1;
    if (uVar2 != uVar4) {
      pbVar3 = (byte *)param_1[2];
      param_1[1] = uVar2 + 1;
      goto LAB_71b3a4da;
    }
    if ((*param_1 & 0xfffffffe) == 0xfffffff8) {
                    /* WARNING: Subroutine does not return */
      FUN_71a11918(param_1);
    }
    if (0x7ffffff2 < uVar4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: jcuNLRRlCfuPrzIPOHumoSSGKRcRmDlL_tvDiEoZOwzUcWsVYCrRxnUeXVrTNLRofvyWjcgnFTtx
// Entry: 0x71b3a5b2 | Size: 168 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

uint * jcuNLRRlCfuPrzIPOHumoSSGKRcRmDlL_tvDiEoZOwzUcWsVYCrRxnUeXVrTNLRofvyWjcgnFTtx
                 (uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 == 0) {
    return param_1;
  }
  uVar2 = *param_1;
  uVar3 = param_1[1];
  if ((uVar2 & 1) == 0) {
    uVar3 = (uVar2 & 0xff) >> 1;
  }
  iVar1 = (uVar2 & 0xfffffffe) - 1;
  if ((*param_1 & 1) == 0) {
    iVar1 = 10;
  }
  if (param_2 <= iVar1 - uVar3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (-iVar1 - 9U < (uVar3 + param_2) - iVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_71a11918(param_1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: pqWMLpYQkevHwapJIPZboPsMrUGTuQHnfTsZrDxRScZyrsqnKLxWnFifGOliKNuSwJU_pwdbnMLX
// Entry: 0x71b3a742 | Size: 58 bytes
// =========================================================================

uint pqWMLpYQkevHwapJIPZboPsMrUGTuQHnfTsZrDxRScZyrsqnKLxWnFifGOliKNuSwJU_pwdbnMLX
               (byte *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  
  uVar2 = *(uint *)(param_1 + 4);
  pbVar3 = *(byte **)(param_1 + 8);
  if ((*param_1 & 1) == 0) {
    uVar2 = (uint)(*param_1 >> 1);
    pbVar3 = param_1 + 1;
  }
  if (uVar2 != 0) {
    if (param_3 < uVar2) {
      uVar2 = param_3 + 1;
    }
    while (uVar2 != 0) {
      iVar1 = uVar2 - 1;
      uVar2 = uVar2 - 1;
      if (pbVar3[iVar1] == param_2) {
        return uVar2;
      }
    }
  }
  return 0xffffffff;
}


// =========================================================================
// Function: nVdBpSbicY_ryZejXBhoNXjdMpkHUOkFnQhnmqIZwCSSZNEjvPleyHVTbAMiACEadLnAbEJerRDh
// Entry: 0x71b3a794 | Size: 158 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

uint * nVdBpSbicY_ryZejXBhoNXjdMpkHUOkFnQhnmqIZwCSSZNEjvPleyHVTbAMiACEadLnAbEJerRDh
                 (uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  
  uVar2 = *param_1;
  uVar1 = (uVar2 & 0xfffffffe) - 1;
  if ((*param_1 & 1) == 0) {
    uVar1 = 10;
  }
  if (uVar1 < param_2) {
    if (param_2 - uVar1 <= -uVar1 - 9) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Subroutine does not return */
    FUN_71a11918(param_1);
  }
  pbVar3 = (byte *)param_1[2];
  if ((uVar2 & 1) == 0) {
    pbVar3 = (byte *)((int)param_1 + 1);
  }
  if (param_2 == 0) {
    if ((uVar2 & 1) == 0) {
      *(byte *)param_1 = 0;
    }
    else {
      param_1[1] = 0;
    }
    *pbVar3 = 0;
    return param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: YNczSMHgYOdkxFzjwgKTXIYRUUpvMkDDRVSlSNiMseRMlCGBQDpczigERmNVdkeFrwxqEEKdkkc
// Entry: 0x71b3a8e0 | Size: 64 bytes
// =========================================================================

byte * YNczSMHgYOdkxFzjwgKTXIYRUUpvMkDDRVSlSNiMseRMlCGBQDpczigERmNVdkeFrwxqEEKdkkc
                 (byte *param_1,uint param_2,int param_3)

{
  char cVar1;
  byte *pbVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 4);
  cVar1 = *param_1 * -0x80;
  if (cVar1 == '\0') {
    uVar3 = (uint)(*param_1 >> 1);
  }
  if (param_2 <= uVar3) {
    if (param_3 != -1) {
      FUN_71b3a970();
      return param_1;
    }
    if (cVar1 == '\0') {
      pbVar2 = param_1 + 1;
      *param_1 = (byte)(param_2 << 1);
    }
    else {
      pbVar2 = *(byte **)(param_1 + 8);
      *(uint *)(param_1 + 4) = param_2;
    }
    pbVar2[param_2] = 0;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_71b38b14();
}


// =========================================================================
// Function: FUN_71b3a970
// Entry: 0x71b3a970 | Size: 86 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void FUN_71b3a970(byte *param_1,int param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  
  if (param_3 == 0) {
    return;
  }
  bVar1 = *param_1;
  uVar4 = *(uint *)(param_1 + 4);
  pbVar6 = *(byte **)(param_1 + 8);
  if ((bVar1 & 1) == 0) {
    pbVar6 = param_1 + 1;
    uVar4 = (uint)(bVar1 >> 1);
  }
  uVar3 = uVar4 - param_2;
  uVar5 = param_3;
  if (uVar3 < param_3) {
    uVar5 = uVar3;
  }
  if (uVar3 <= param_3) {
    iVar2 = uVar4 - uVar5;
    if ((bVar1 & 1) == 0) {
      *param_1 = (char)iVar2 * '\x02';
    }
    else {
      *(int *)(param_1 + 4) = iVar2;
    }
    pbVar6[iVar2] = 0;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: OoWfmjKwD_jgFtBrOFfuKEkYTcCAlTnPphkMkBCfCzDzQHuWRNnTsCuFPTWxUEoJwTpftEypiDdxokJQE
// Entry: 0x71b3aa02 | Size: 64 bytes
// =========================================================================

void OoWfmjKwD_jgFtBrOFfuKEkYTcCAlTnPphkMkBCfCzDzQHuWRNnTsCuFPTWxUEoJwTpftEypiDdxokJQE
               (undefined4 param_1,byte *param_2,uint param_3,uint param_4)

{
  char cVar1;
  byte *pbVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_2 + 4);
  cVar1 = *param_2 * -0x80;
  if (cVar1 == '\0') {
    uVar3 = (uint)(*param_2 >> 1);
  }
                    /* WARNING: Subroutine does not return */
  if (uVar3 < param_3) {
    FUN_71b38b14();
  }
  pbVar2 = *(byte **)(param_2 + 8);
  if (cVar1 == '\0') {
    pbVar2 = param_2 + 1;
  }
  if (uVar3 - param_3 < param_4) {
    param_4 = uVar3 - param_3;
  }
  thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
            (param_1,pbVar2 + param_3,param_4);
  return;
}


// =========================================================================
// Function: cHJdPHKOyIgkbFDRkmqaTDmnFLylOTRrLxHfLU_pJTyYLwQGQWoOCeBEsbyo_ZeYCptYJBSTzcUHfRd
// Entry: 0x71b3aa8e | Size: 14 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void cHJdPHKOyIgkbFDRkmqaTDmnFLylOTRrLxHfLU_pJTyYLwQGQWoOCeBEsbyo_ZeYCptYJBSTzcUHfRd(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: _EpB_iOmQjdRBUGWaNaayIQKKKHdXCUFNAbTBKvbSTLdYhbaCdcJHiJsyLRVWvpcYBnwEwmIevGHFbrwRG
// Entry: 0x71b3ab70 | Size: 66 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void _EpB_iOmQjdRBUGWaNaayIQKKKHdXCUFNAbTBKvbSTLdYhbaCdcJHiJsyLRVWvpcYBnwEwmIevGHFbrwRG
               (byte *param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 4);
  if ((*param_1 & 1) == 0) {
    uVar1 = (uint)(*param_1 >> 1);
  }
  if ((param_5 != -1) && (param_2 <= uVar1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Subroutine does not return */
  FUN_71b38b14();
}


// =========================================================================
// Function: eKJIqrGEIjTiRDUtdksRAqRSvjpkhBAEWxnasBYwNxWsiogd_pMpRSUjTuWEimzRGr_fMrfCNhIamskeY
// Entry: 0x71b3ac20 | Size: 18 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void eKJIqrGEIjTiRDUtdksRAqRSvjpkhBAEWxnasBYwNxWsiogd_pMpRSUjTuWEimzRGr_fMrfCNhIamskeY(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: gkkXbuXfyagJNUAByTdQEIcSJmOkQoOjkKQEYJBJZsaTushqwirhqWFbkPKBDteyXNHXfCl
// Entry: 0x71b3acfa | Size: 38 bytes
// =========================================================================

byte * gkkXbuXfyagJNUAByTdQEIcSJmOkQoOjkKQEYJBJZsaTushqwirhqWFbkPKBDteyXNHXfCl
                 (byte *param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  byte *pbVar3;
  
  uVar2 = *(uint *)(param_1 + 4);
  cVar1 = *param_1 * -0x80;
  if (cVar1 == '\0') {
    uVar2 = (uint)(*param_1 >> 1);
  }
  if (param_2 < uVar2) {
    pbVar3 = *(byte **)(param_1 + 8);
    if (cVar1 == '\0') {
      pbVar3 = param_1 + 1;
    }
    return pbVar3 + param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_71b38b14();
}


// =========================================================================
// Function: TLUeCDiekSSzXIoKMrpDGxbhUhOecwKWVtKHyZVlDPMMdVvsalzdkegtCtYHBtVMbgUoWiuRKGDAl
// Entry: 0x71b3ad54 | Size: 4 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void TLUeCDiekSSzXIoKMrpDGxbhUhOecwKWVtKHyZVlDPMMdVvsalzdkegtCtYHBtVMbgUoWiuRKGDAl(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: FUN_71b3ad8c
// Entry: 0x71b3ad8c | Size: 10 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void FUN_71b3ad8c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: mUGOyQZhIsvgCDDayPhpoo_HYXPKNMjtWVDjYdmiVVHQ_fhRFJzMgHwMfWlkZOKLQhj_MJUV_oFqeD
// Entry: 0x71b3adf8 | Size: 86 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

uint mUGOyQZhIsvgCDDayPhpoo_HYXPKNMjtWVDjYdmiVVHQ_fhRFJzMgHwMfWlkZOKLQhj_MJUV_oFqeD
               (byte *param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 4);
  if ((*param_1 & 1) == 0) {
    uVar1 = (uint)(*param_1 >> 1);
  }
  if (uVar1 < param_3) {
    param_3 = 0xffffffff;
  }
  else if (param_4 != 0) {
    if ((param_4 <= (int)(uVar1 - param_3)) && ((uVar1 - param_3) - param_4 != -1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_3 = 0xffffffff;
  }
  return param_3;
}


// =========================================================================
// Function: KPvGhPC_qQcJgOTnBi_xyKKvqLguNwCFRBQJyPQgnJOIXeUgMEKHBOpeKJDsvaZVyNQNJdLLDsbMUrXlXjNFx
// Entry: 0x71b3aec0 | Size: 102 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void KPvGhPC_qQcJgOTnBi_xyKKvqLguNwCFRBQJyPQgnJOIXeUgMEKHBOpeKJDsvaZVyNQNJdLLDsbMUrXlXjNFx
               (byte *param_1,uint param_2,undefined4 param_3,byte *param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 4);
  uVar1 = *(uint *)(param_4 + 4);
  if ((*param_1 & 1) == 0) {
    uVar2 = (uint)(*param_1 >> 1);
  }
  if ((*param_4 & 1) == 0) {
    uVar1 = (uint)(*param_4 >> 1);
  }
  if ((param_2 <= uVar2) && (param_5 <= uVar1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Subroutine does not return */
  FUN_71a66fdc(s_string_view__substr_70068a67);
}


// =========================================================================
// Function: lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi
// Entry: 0x71b3afc0 | Size: 80 bytes
// =========================================================================

void lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi
               (byte *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  undefined8 uVar4;
  
  if (param_1 == param_2) {
    return;
  }
  bVar1 = *param_2;
  if ((*param_1 & 1) != 0) {
    uVar2 = *(uint *)(param_2 + 4);
    pbVar3 = *(byte **)(param_2 + 8);
    if ((bVar1 & 1) == 0) {
      pbVar3 = param_2 + 1;
      uVar2 = (uint)(bVar1 >> 1);
    }
    FUN_71b3b14e(param_1,pbVar3,uVar2);
    return;
  }
  if ((bVar1 & 1) != 0) {
    FUN_71b3b060(param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 4));
    return;
  }
  uVar4 = *(undefined8 *)param_2;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined8 *)param_1 = uVar4;
  return;
}


// =========================================================================
// Function: FUN_71b3b060
// Entry: 0x71b3b060 | Size: 74 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

undefined1 * FUN_71b3b060(undefined1 *param_1,undefined4 param_2,uint param_3)

{
  if (10 < param_3) {
    if (0x12 < param_3 + 9) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Subroutine does not return */
    FUN_71a11918(param_1);
  }
  *param_1 = (char)(param_3 << 1);
  if (param_3 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  param_1[1] = 0;
  return param_1;
}


// =========================================================================
// Function: FUN_71b3b14e
// Entry: 0x71b3b14e | Size: 128 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

uint * FUN_71b3b14e(uint *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = *param_1 & 0xfffffffe;
  if (uVar1 <= param_3) {
    if (-uVar1 - 9 < (param_3 - uVar1) + 1) {
                    /* WARNING: Subroutine does not return */
      FUN_71a11918(param_1);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  param_1[1] = param_3;
  if (param_3 == 0) {
    *(undefined1 *)param_1[2] = 0;
    return param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
// Entry: 0x71b3b298 | Size: 10 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: bnZNhhedIoQYJNzihDkGlFgZiiXNgOsqaLunlElIvWBwSLRqxIjoHDtjOzFbxaMensTqaERRCuKFiBlBRciV
// Entry: 0x71b3b304 | Size: 62 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void bnZNhhedIoQYJNzihDkGlFgZiiXNgOsqaLunlElIvWBwSLRqxIjoHDtjOzFbxaMensTqaERRCuKFiBlBRciV(void)

{
  byte *in_r3;
  uint uVar1;
  uint in_stack_00000000;
  
  uVar1 = *(uint *)(in_r3 + 4);
  if ((*in_r3 & 1) == 0) {
    uVar1 = (uint)(*in_r3 >> 1);
  }
  if (in_stack_00000000 <= uVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Subroutine does not return */
  FUN_71b38b14();
}


// =========================================================================
// Function: cWyjHdTGqammusErfpXUafIiTnJjTGuOnYHuSGVxNRCFTOcujRKecbJLwXO_ZtacwmlnRpDjYRMMMguFEfkqlrHzzAbMfDSpW
// Entry: 0x71b3b39e | Size: 210 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

byte * cWyjHdTGqammusErfpXUafIiTnJjTGuOnYHuSGVxNRCFTOcujRKecbJLwXO_ZtacwmlnRpDjYRMMMguFEfkqlrHzzAbMfDSpW
                 (uint *param_1,int param_2,byte param_3)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  bVar1 = (byte)*param_1;
  uVar5 = param_1[1];
  pbVar3 = (byte *)param_1[2];
  if ((bVar1 & 1) == 0) {
    uVar5 = (uint)(bVar1 >> 1);
    pbVar3 = (byte *)((int)param_1 + 1);
  }
  uVar4 = (*param_1 & 0xfffffffe) - 1;
  uVar6 = param_2 - (int)pbVar3;
  if ((bVar1 & 1) == 0) {
    uVar4 = 10;
  }
  if (uVar4 == uVar5) {
    if (uVar5 != 0xfffffff7) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Subroutine does not return */
    FUN_71a11918(param_1);
  }
  pbVar3 = (byte *)param_1[2];
  if ((*param_1 & 1) == 0) {
    pbVar3 = (byte *)((int)param_1 + 1);
  }
  if (uVar5 != uVar6) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar5 = uVar5 + 1;
  pbVar3[uVar6] = param_3;
  pbVar3[uVar5] = 0;
  cVar2 = (byte)*param_1 * -0x80;
  if (cVar2 == '\0') {
    *(char *)param_1 = (char)uVar5 * '\x02';
  }
  else {
    param_1[1] = uVar5;
  }
  pbVar3 = (byte *)param_1[2];
  if (cVar2 == '\0') {
    pbVar3 = (byte *)((int)param_1 + 1);
  }
  return pbVar3 + uVar6;
}


// =========================================================================
// Function: wLbjLaQkcEfeJRuCRxg_oDQcVLMtFLsEzzpxnohPiQoEZoiZepfgwvWqHNdtGu_imMLxObZzXQrY
// Entry: 0x71b3b584 | Size: 64 bytes
// =========================================================================

void wLbjLaQkcEfeJRuCRxg_oDQcVLMtFLsEzzpxnohPiQoEZoiZepfgwvWqHNdtGu_imMLxObZzXQrY
               (byte *param_1,uint param_2)

{
  char cVar1;
  byte *pbVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 4);
  cVar1 = *param_1 * -0x80;
  if (cVar1 == '\0') {
    uVar3 = (uint)(*param_1 >> 1);
  }
  if (uVar3 < param_2) {
    thunk_jcuNLRRlCfuPrzIPOHumoSSGKRcRmDlL_tvDiEoZOwzUcWsVYCrRxnUeXVrTNLRofvyWjcgnFTtx
              (param_1,param_2 - uVar3);
    return;
  }
  if (cVar1 == '\0') {
    pbVar2 = param_1 + 1;
    *param_1 = (byte)(param_2 << 1);
  }
  else {
    pbVar2 = *(byte **)(param_1 + 8);
    *(uint *)(param_1 + 4) = param_2;
  }
  pbVar2[param_2] = 0;
  return;
}


// =========================================================================
// Function: yCgYNOwuUQSHgttdSVvlrkXr_dHQAiRVGqsVncLBgjzBXpPxeCjcCDMErpQsJMZvfysxrVDhWTAwxEgFCu
// Entry: 0x71b3b5f4 | Size: 64 bytes
// =========================================================================

void yCgYNOwuUQSHgttdSVvlrkXr_dHQAiRVGqsVncLBgjzBXpPxeCjcCDMErpQsJMZvfysxrVDhWTAwxEgFCu
               (undefined4 param_1,undefined4 param_2,byte *param_3,uint param_4,uint param_5)

{
  char cVar1;
  byte *pbVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_3 + 4);
  cVar1 = *param_3 * -0x80;
  if (cVar1 == '\0') {
    uVar3 = (uint)(*param_3 >> 1);
  }
                    /* WARNING: Subroutine does not return */
  if (uVar3 < param_4) {
    FUN_71b38b14();
  }
  pbVar2 = *(byte **)(param_3 + 8);
  if (cVar1 == '\0') {
    pbVar2 = param_3 + 1;
  }
  if (uVar3 - param_4 < param_5) {
    param_5 = uVar3 - param_4;
  }
  thunk_CYbDsHrJTXyBGDHcNLCvw_YyxhkAXeCeDFXVLOflOXCzbDvBTzUoqvshzV_THRUARbywmOgTcPiyWHK
            (param_1,param_2,pbVar2 + param_4,param_5);
  return;
}


// =========================================================================
// Function: qkBVlaMnbdSMqPUHjXmuQhZdiHkKXIr_PM__iUXQqNAhSUqxbtxbLmxeGkZHjWuJqLTKtdtEVjkWvZtBJ
// Entry: 0x71b3b680 | Size: 316 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

uint * qkBVlaMnbdSMqPUHjXmuQhZdiHkKXIr_PM__iUXQqNAhSUqxbtxbLmxeGkZHjWuJqLTKtdtEVjkWvZtBJ
                 (uint *param_1,uint param_2,uint param_3,uint *param_4,uint param_5)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  uint *puVar4;
  code *unaff_r6;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  
  puVar1 = param_1 + 1;
  uVar6 = *puVar1;
  cVar2 = (byte)*param_1 * -0x80;
  if (cVar2 == '\0') {
    uVar6 = (uint)(byte)((byte)*param_1 >> 1);
  }
  cVar9 = param_2 <= uVar6;
  if (!(bool)cVar9) {
    do {
      param_1 = (uint *)FUN_71b3b8d0(param_1);
    } while (cVar9 != '\0');
    (*unaff_r6)();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar3 = uVar6 - param_2;
  uVar7 = param_3;
  if (uVar3 < param_3) {
    uVar7 = uVar3;
  }
  iVar5 = (*param_1 & 0xfffffffe) - 1;
  if (cVar2 == '\0') {
    iVar5 = 1;
  }
  if ((uVar7 - uVar6) + iVar5 < param_5) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar4 = (uint *)param_1[2];
  if ((*param_1 & 1) == 0) {
    puVar4 = puVar1;
  }
  uVar8 = param_5;
  if ((param_5 == uVar7) || (uVar8 = uVar7, uVar3 <= param_3)) {
    if (param_5 == 0) {
      uVar6 = uVar6 - uVar8;
      if ((*param_1 & 1) == 0) {
        *(char *)param_1 = (char)uVar6 * '\x02';
      }
      else {
        *puVar1 = uVar6;
      }
      puVar4[uVar6] = 0;
      return param_1;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_5 < uVar7) {
    if (param_5 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((((param_4 < puVar4 + uVar6) && (puVar4 + param_2 + 1 <= param_4)) &&
      (param_4 < puVar4 + param_2 + uVar7)) && (param_3 != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: FUN_71b3b8d0
// Entry: 0x71b3b8d0 | Size: 12 bytes
// =========================================================================

void FUN_71b3b8d0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_71a66fdc(s_basic_string_7006ebe5);
}


// =========================================================================
// Function: HhwQeTdu_UjbhbRUbTQJjRjC_nTqRAeJZYCHwEjnRDGSTmuvmAR_JeCxbDTDFARcccWiheaXLgdrziqDVG_kKEVaxdMdA_nsMwq
// Entry: 0x71b3b930 | Size: 336 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

byte * HhwQeTdu_UjbhbRUbTQJjRjC_nTqRAeJZYCHwEjnRDGSTmuvmAR_JeCxbDTDFARcccWiheaXLgdrziqDVG_kKEVaxdMdA_nsMwq
                 (undefined4 param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint extraout_r3;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  uint *puVar12;
  undefined4 in_cr0;
  undefined4 in_cr12;
  
  if (param_3 <= 0x3ffffff6 - param_2) {
    if (param_2 < 0x1ffffff3) {
      param_3 = param_3 + param_2;
      if (param_3 <= param_2 * 2) {
        param_3 = param_2 << 1;
      }
      if (0x3fffffff < (param_3 | 1) + 1) {
                    /* WARNING: Subroutine does not return */
        FUN_719fe2ec();
      }
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_71b3bc8c(param_1);
  coprocessor_movefromRt(9,7,2,in_cr12,in_cr0);
  coprocessor_storelong(4,in_cr12,&stack0xfffffff8);
  puVar5 = (uint *)(param_2 * 0x10);
  pbVar3 = (byte *)((int)&stack0x00000398 * 8);
  if (0 < (int)pbVar3) {
    return pbVar3;
  }
  bVar2 = *pbVar3;
  puVar9 = *(uint **)(pbVar3 + 4);
  if ((bVar2 & 1) == 0) {
    puVar9 = (uint *)(uint)(bVar2 >> 1);
  }
  puVar6 = puVar5;
  if (puVar9 < puVar5) {
    puVar6 = puVar9;
  }
  if (extraout_r3 < (uint)((int)puVar9 - (int)puVar6)) {
    puVar9 = (uint *)((int)puVar6 + extraout_r3);
  }
  puVar6 = *(uint **)(pbVar3 + 8);
  if ((bVar2 & 1) == 0) {
    puVar6 = (uint *)(pbVar3 + 4);
  }
  puVar7 = puVar6 + (int)puVar9;
  puVar12 = puVar7;
  if ((extraout_r3 != 0) && (puVar12 = puVar6, puVar9 != (uint *)0x0)) {
    puVar9 = puVar6;
    puVar11 = puVar7;
    do {
      puVar12 = puVar11;
      if (*puVar9 == *puVar5) {
        iVar10 = 4;
        do {
          puVar12 = puVar9;
          if (extraout_r3 * 4 == iVar10) break;
          puVar8 = (uint *)((int)puVar9 + iVar10);
          puVar12 = puVar11;
          if (puVar8 == puVar7) goto LAB_71b3bb64;
          puVar1 = (uint *)((int)puVar5 + iVar10);
          iVar10 = iVar10 + 4;
        } while (*puVar8 == *puVar1);
      }
      puVar9 = puVar9 + 1;
      puVar11 = puVar12;
    } while (puVar9 != puVar7);
  }
LAB_71b3bb64:
  pbVar3 = (byte *)((int)puVar12 - (int)puVar6 >> 2);
  pbVar4 = pbVar3;
  if (puVar12 == puVar7) {
    pbVar4 = (byte *)0xffffffff;
  }
  if (extraout_r3 == 0) {
    pbVar4 = pbVar3;
  }
  return pbVar4;
}


// =========================================================================
// Function: WQwHFgQAwkVNpjhZvuMejmtbtuCCNJXedYoFSDJyBBkcLaxZtRpjWhldvuHRVdRcpGVXJzRlHfAwoYL
// Entry: 0x71b3baf0 | Size: 146 bytes
// =========================================================================

int WQwHFgQAwkVNpjhZvuMejmtbtuCCNJXedYoFSDJyBBkcLaxZtRpjWhldvuHRVdRcpGVXJzRlHfAwoYL
              (byte *param_1,uint *param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  
  bVar2 = *param_1;
  uVar6 = *(uint *)(param_1 + 4);
  if ((bVar2 & 1) == 0) {
    uVar6 = (uint)(bVar2 >> 1);
  }
  if (uVar6 < param_3) {
    param_3 = uVar6;
  }
  if (param_4 < uVar6 - param_3) {
    uVar6 = param_3 + param_4;
  }
  puVar11 = *(uint **)(param_1 + 8);
  if ((bVar2 & 1) == 0) {
    puVar11 = (uint *)(param_1 + 4);
  }
  puVar4 = puVar11 + uVar6;
  puVar10 = puVar4;
  if ((param_4 != 0) && (puVar10 = puVar11, uVar6 != 0)) {
    puVar7 = puVar11;
    puVar9 = puVar4;
    do {
      puVar10 = puVar9;
      if (*puVar7 == *param_2) {
        iVar8 = 4;
        do {
          puVar10 = puVar7;
          if (param_4 * 4 == iVar8) break;
          puVar5 = (uint *)((int)puVar7 + iVar8);
          puVar10 = puVar9;
          if (puVar5 == puVar4) goto LAB_71b3bb64;
          puVar1 = (uint *)((int)param_2 + iVar8);
          iVar8 = iVar8 + 4;
        } while (*puVar5 == *puVar1);
      }
      puVar7 = puVar7 + 1;
      puVar9 = puVar10;
    } while (puVar7 != puVar4);
  }
LAB_71b3bb64:
  iVar8 = (int)puVar10 - (int)puVar11 >> 2;
  iVar3 = iVar8;
  if (puVar10 == puVar4) {
    iVar3 = -1;
  }
  if (param_4 == 0) {
    iVar3 = iVar8;
  }
  return iVar3;
}


// =========================================================================
// Function: mcxXCNE_nAAyXUUwgmqHecEXZSlbZqWrVTAOqCBlBUOPaoAEZokkDVACeeSAvGevvbaVmUKC_zCWHxf
// Entry: 0x71b3bb9a | Size: 72 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void mcxXCNE_nAAyXUUwgmqHecEXZSlbZqWrVTAOqCBlBUOPaoAEZokkDVACeeSAvGevvbaVmUKC_zCWHxf
               (char *param_1,undefined4 param_2,char param_3,uint param_4)

{
  if (param_4 < 0x3ffffff8) {
    if (param_4 < 2) {
      *param_1 = param_3 << 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((param_4 | 1) < 0x3fffffff) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    FUN_71b3bc8c(param_1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_719fe2ec();
}


// =========================================================================
// Function: FUN_71b3bc8c
// Entry: 0x71b3bc8c | Size: 12 bytes
// =========================================================================

void FUN_71b3bc8c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_basic_string_7006ebe5);
}


// =========================================================================
// Function: xOW_UPZxwHolxLIBSXSVqWBPbGdSYQRIPVfLuddAnVQpTtYEbSOEtvXVwzXxthgdqusVSkWtMV
// Entry: 0x71b3bcec | Size: 38 bytes
// =========================================================================

undefined8 *
xOW_UPZxwHolxLIBSXSVqWBPbGdSYQRIPVfLuddAnVQpTtYEbSOEtvXVwzXxthgdqusVSkWtMV
          (undefined8 *param_1,byte *param_2)

{
  undefined8 uVar1;
  
  if ((*param_2 & 1) == 0) {
    uVar1 = *(undefined8 *)param_2;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
    *param_1 = uVar1;
    return param_1;
  }
  FUN_71b3bd46(param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 4));
  return param_1;
}


// =========================================================================
// Function: FUN_71b3bd46
// Entry: 0x71b3bd46 | Size: 68 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void FUN_71b3bd46(undefined1 *param_1,undefined4 param_2,uint param_3)

{
  if (param_3 < 2) {
    *param_1 = (char)(param_3 << 1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_3 < 0x3ffffff8) {
    if ((param_3 | 1) < 0x3fffffff) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    FUN_71b3bc8c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_719fe2ec();
}


// =========================================================================
// Function: ilOQkJkThGWaGBN_CoynimfeugXNnUHlgWdmJuqlpFAmcbVidpdwXfZgAqnaZcdZnwGICHs__XAowLIU
// Entry: 0x71b3be2a | Size: 20 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void ilOQkJkThGWaGBN_CoynimfeugXNnUHlgWdmJuqlpFAmcbVidpdwXfZgAqnaZcdZnwGICHs__XAowLIU(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: BtcOfLwGRuuhNJeXqOcCfnhzPaLydLB_srlF_XOBhYNPtGLxJpPafNwBqtHlIjYGvtAVPCmBtcToSbM
// Entry: 0x71b3bea8 | Size: 38 bytes
// =========================================================================

undefined8 *
BtcOfLwGRuuhNJeXqOcCfnhzPaLydLB_srlF_XOBhYNPtGLxJpPafNwBqtHlIjYGvtAVPCmBtcToSbM
          (undefined8 *param_1,byte *param_2)

{
  undefined8 uVar1;
  
  if ((*param_2 & 1) == 0) {
    uVar1 = *(undefined8 *)param_2;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
    *param_1 = uVar1;
    return param_1;
  }
  FUN_71b3bd46(param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 4));
  return param_1;
}


// =========================================================================
// Function: CMlqfRAfISiOrKrkDrkSKWDPuVJUwOgGnN_yiyNbUIDtXLthWmemzIQAcKsfbb_jHbrEblxtRpYLVChCAIOFIEPAayM
// Entry: 0x71b3bf02 | Size: 78 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

int CMlqfRAfISiOrKrkDrkSKWDPuVJUwOgGnN_yiyNbUIDtXLthWmemzIQAcKsfbb_jHbrEblxtRpYLVChCAIOFIEPAayM
              (byte *param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 4);
  if ((*param_1 & 1) == 0) {
    uVar2 = (uint)(*param_1 >> 1);
  }
  if (param_3 < uVar2) {
    uVar2 = param_3 + 1;
  }
  iVar1 = uVar2 * 4 + -4;
  if (iVar1 == -4) {
    return -1;
  }
  if (param_4 == 0) {
    return iVar1 >> 2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: MLlhbENvVZQtmkCDtutlRHkuYBIxuhlETInSWlTYVuEuCSFYE_XNCGWfjclzNhMkaKAJBc
// Entry: 0x71b3bf8e | Size: 18 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void MLlhbENvVZQtmkCDtutlRHkuYBIxuhlETInSWlTYVuEuCSFYE_XNCGWfjclzNhMkaKAJBc(byte *param_1)

{
  if ((*param_1 & 1) == 0) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: xJisbXHHJkrHuKygKIwlYJEPYbCTN_DiDwSPzwl_EhynQKTptOpVnYDNZNFHkuXXUDjmSdrdOTeklPgOmWPyaqjIGtYz
// Entry: 0x71b3bfe0 | Size: 78 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

int xJisbXHHJkrHuKygKIwlYJEPYbCTN_DiDwSPzwl_EhynQKTptOpVnYDNZNFHkuXXUDjmSdrdOTeklPgOmWPyaqjIGtYz
              (byte *param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 4);
  if ((*param_1 & 1) == 0) {
    uVar1 = (uint)(*param_1 >> 1);
  }
  if (uVar1 <= param_3) {
    return -1;
  }
  if (param_4 == 0) {
    return (int)(param_3 * 4) >> 2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: mINonvMojFLDvuAyOLiUrpmGKcMtcOxhNtjDHTdGIbOCMuoNLlJxDpaZmQFjURqJBupebakw_GkGD
// Entry: 0x71b3c070 | Size: 312 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void mINonvMojFLDvuAyOLiUrpmGKcMtcOxhNtjDHTdGIbOCMuoNLlJxDpaZmQFjURqJBupebakw_GkGD
               (undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  char cVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint extraout_r2;
  undefined4 *puVar9;
  uint extraout_r3;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  uint uVar10;
  undefined4 *unaff_r7;
  uint unaff_r8;
  undefined4 unaff_r9;
  uint *puVar11;
  uint *unaff_r10;
  uint unaff_r11;
  uint uVar12;
  undefined4 unaff_lr;
  undefined8 uVar13;
  
  uVar13 = CONCAT44(param_2,param_1);
  while( true ) {
    uVar7 = param_3;
    uVar8 = (uint)((ulonglong)uVar13 >> 0x20);
    puVar2 = (uint *)uVar13;
    *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
    *(undefined4 **)((int)register0x00000054 + -8) = unaff_r7;
    *(int *)((int)register0x00000054 + -0xc) = unaff_r6;
    *(int *)((int)register0x00000054 + -0x10) = unaff_r5;
    *(int *)((int)register0x00000054 + -0x14) = unaff_r4;
    unaff_r7 = (undefined4 *)((int)register0x00000054 + -8);
    *(uint *)((int)register0x00000054 + -0x18) = unaff_r11;
    *(uint **)((int)register0x00000054 + -0x1c) = unaff_r10;
    *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_r9;
    *(uint *)((int)register0x00000054 + -0x24) = unaff_r8;
    unaff_r10 = puVar2 + 1;
    uVar10 = *unaff_r10;
    cVar1 = (byte)*puVar2 * -0x80;
    if (cVar1 == '\0') {
      uVar10 = (uint)(byte)((byte)*puVar2 >> 1);
    }
    if (uVar8 <= uVar10) break;
    unaff_lr = 0x71b3c151;
    uVar13 = FUN_71b3b8d0();
    uVar6 = (undefined4)((ulonglong)uVar13 >> 0x20);
    unaff_r5 = (int)*(short *)(extraout_r2 + unaff_r5);
    unaff_r6 = uVar10 - 0x6d;
    *(char *)(unaff_r4 + 0x19) = (char)uVar13;
    *(undefined4 *)((int)register0x00000054 + -0x34) = 0x71b3c151;
    *(undefined4 **)((int)register0x00000054 + -0x38) = unaff_r7;
    *(int *)((int)register0x00000054 + -0x3c) = unaff_r4;
    *(uint *)((int)register0x00000054 + -0x40) = extraout_r2;
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x44);
    *(undefined4 *)register0x00000054 = uVar6;
    param_3 = extraout_r2;
    param_4 = extraout_r3;
    unaff_r8 = uVar8;
    unaff_r11 = uVar7;
    if ((int)(extraout_r2 - 0x6c) < 0) {
      if ((bRam00000000 & 1) == 0) {
        bRam00000000 = 2;
        puVar9 = (undefined4 *)&LAB_00000004;
      }
      else {
        _LAB_00000004 = 1;
        puVar9 = puRam00000008;
      }
      *puVar9 = uVar6;
      puVar9[1] = 0;
      return;
    }
  }
  if (uVar7 == 0) {
    return;
  }
  iVar3 = (*puVar2 & 0xfffffffe) - 1;
  if (cVar1 == '\0') {
    iVar3 = 1;
  }
  if (iVar3 - uVar10 < uVar7) {
    *(uint *)((int)register0x00000054 + -0x30) = uVar8;
    *(undefined4 *)((int)register0x00000054 + -0x2c) = 0;
    *(uint *)((int)register0x00000054 + -0x28) = uVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar11 = (uint *)puVar2[2];
  if ((*puVar2 & 1) == 0) {
    puVar11 = unaff_r10;
  }
  if (uVar10 != uVar8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar5 = puVar11 + uVar8;
  uVar8 = uVar7;
  if (3 < uVar7) {
    uVar12 = uVar7 & 0xfffffffc;
    puVar4 = puVar5 + uVar12;
    uVar8 = uVar12;
    do {
      *(ulonglong *)puVar5 = CONCAT44(param_4,param_4);
      *(ulonglong *)(puVar5 + 2) = CONCAT44(param_4,param_4);
      puVar5 = puVar5 + 4;
      uVar8 = uVar8 - 4;
    } while (uVar8 != 0);
    puVar5 = puVar4;
    uVar8 = uVar7 & 3;
    if (uVar12 == uVar7) goto LAB_71b3c12c;
  }
  do {
    *puVar5 = param_4;
    uVar8 = uVar8 - 1;
    puVar5 = puVar5 + 1;
  } while (uVar8 != 0);
LAB_71b3c12c:
  uVar10 = uVar10 + uVar7;
  if ((*puVar2 & 1) == 0) {
    *(char *)puVar2 = (char)uVar10 * '\x02';
  }
  else {
    *unaff_r10 = uVar10;
  }
  puVar11[uVar10] = 0;
  return;
}


// =========================================================================
// Function: QiSNqGsnHYWzabuVHhAILYXzfVyQoEreHQjGvHS_uKxCBeXxZbwXkSglsJFkFhINBbsJTt
// Entry: 0x71b3c1bc | Size: 30 bytes
// =========================================================================

void QiSNqGsnHYWzabuVHhAILYXzfVyQoEreHQjGvHS_uKxCBeXxZbwXkSglsJFkFhINBbsJTt
               (byte *param_1,undefined4 param_2)

{
  byte *pbVar1;
  
  pbVar1 = param_1 + 4;
  if ((*param_1 & 1) == 0) {
    *param_1 = 2;
  }
  else {
    pbVar1 = *(byte **)(param_1 + 8);
    param_1[4] = 1;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  *(undefined4 *)pbVar1 = param_2;
  pbVar1[4] = 0;
  pbVar1[5] = 0;
  pbVar1[6] = 0;
  pbVar1[7] = 0;
  return;
}


// =========================================================================
// Function: qeiEeIqGyotCnPFxIMCPYLbNOJuQTYxUvWemCkLktZLYQr_PUFWkvzzRVBQLzlbXScNoCWZaNvBIJq
// Entry: 0x71b3c1f2 | Size: 82 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void qeiEeIqGyotCnPFxIMCPYLbNOJuQTYxUvWemCkLktZLYQr_PUFWkvzzRVBQLzlbXScNoCWZaNvBIJq
               (undefined1 *param_1,undefined4 param_2,uint param_3)

{
  if (param_3 < 0x3ffffff8) {
    if (param_3 < 2) {
      *param_1 = (char)(param_3 << 1);
      if (param_3 == 0) {
        *(undefined4 *)(param_1 + 4) = 0;
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((param_3 | 1) < 0x3fffffff) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    FUN_71b3bc8c(param_1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_719fe2ec();
}


// =========================================================================
// Function: lFKajUpfYFONUNiOtvOHJXprW_TFePewvnfaWMBXvUzqkDhImelbZVheGufemDGccPEkCk_f
// Entry: 0x71b3c2e0 | Size: 62 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

uint * lFKajUpfYFONUNiOtvOHJXprW_TFePewvnfaWMBXvUzqkDhImelbZVheGufemDGccPEkCk_f
                 (byte *param_1,uint param_2)

{
  char cVar1;
  uint *puVar2;
  undefined4 extraout_r2;
  uint uVar3;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  undefined4 *unaff_r7;
  int unaff_lr;
  char cVar4;
  undefined4 *puVar5;
  
  while( true ) {
    *(int *)((int)register0x00000054 + -4) = unaff_lr;
    puVar5 = (undefined4 *)((int)register0x00000054 + -8);
    *puVar5 = unaff_r7;
    uVar3 = *(uint *)(param_1 + 4);
    cVar1 = *param_1 * -0x80;
    if (cVar1 == '\0') {
      uVar3 = (uint)(*param_1 >> 1);
    }
    cVar4 = param_2 <= uVar3;
    if (param_2 < uVar3) break;
    unaff_lr = 0x71b3c311;
    param_1 = (byte *)FUN_71b3b8d0();
    if (cVar4 != '\0') {
      *(short *)(unaff_r6 + 0x32) = (short)param_1;
      *(undefined4 *)((int)register0x00000054 + -0xc) = 0x71b3c311;
      *(int *)((int)register0x00000054 + -0x10) = unaff_r6;
      *(int *)((int)register0x00000054 + -0x14) = unaff_r5;
      *(int *)((int)register0x00000054 + -0x18) = unaff_r4;
      *(byte **)((int)register0x00000054 + -0x1c) = param_1;
      uRam00000026 = (short)unaff_r4;
      *puVar5 = extraout_r2;
      *(int *)((int)register0x00000054 + -4) = unaff_r4;
      *(undefined4 **)register0x00000054 = puVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    unaff_r4 = unaff_r5 << 0xb;
    param_2 = unaff_r5 << 4;
    unaff_r7 = puVar5;
    register0x00000054 = (BADSPACEBASE *)puVar5;
  }
  puVar2 = *(uint **)(param_1 + 8);
  if (cVar1 == '\0') {
    puVar2 = (uint *)(param_1 + 4);
  }
  return puVar2 + param_2;
}


// =========================================================================
// Function: kyMIMRoZoyAlZGNbWedNwdgLoqeY_LlMIFvhsZuCgTxrdnjzXFQYcaDYBojxGGpj_RmucHDHmDfPkQE
// Entry: 0x71b3c344 | Size: 280 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x71b3c356) overlaps instruction at (ram,0x71b3c354)
    */
/* WARNING: Removing unreachable block (ram,0x71b3c422) */
/* WARNING: Removing unreachable block (ram,0x71b3c43c) */
/* WARNING: Removing unreachable block (ram,0x71b3c49a) */
/* WARNING: Removing unreachable block (ram,0x71b3c4be) */
/* WARNING: Removing unreachable block (ram,0x71b3c4c2) */
/* WARNING: Removing unreachable block (ram,0x71b3c4c4) */
/* WARNING: Removing unreachable block (ram,0x71b3c4cc) */
/* WARNING: Removing unreachable block (ram,0x71b3c4ce) */
/* WARNING: Removing unreachable block (ram,0x71b3c4d0) */
/* WARNING: Removing unreachable block (ram,0x71b3c4d6) */

uint * kyMIMRoZoyAlZGNbWedNwdgLoqeY_LlMIFvhsZuCgTxrdnjzXFQYcaDYBojxGGpj_RmucHDHmDfPkQE
                 (undefined4 param_1,undefined4 param_2,int *param_3,uint param_4)

{
  undefined8 uVar1;
  uint *puVar2;
  uint uVar3;
  int *extraout_r2;
  int *piVar4;
  int *piVar5;
  uint extraout_r3;
  int unaff_r4;
  int iVar6;
  uint unaff_r5;
  int *piVar7;
  int unaff_r6;
  undefined4 unaff_r7;
  uint *unaff_r8;
  undefined4 unaff_r9;
  uint *unaff_r10;
  undefined4 unaff_r11;
  int extraout_r12;
  int *unaff_lr;
  char cVar8;
  undefined8 uVar9;
  
  uVar9 = CONCAT44(param_2,param_1);
  while( true ) {
    uVar3 = (uint)((ulonglong)uVar9 >> 0x20);
    puVar2 = (uint *)uVar9;
    *(int **)((int)register0x00000054 + -4) = unaff_lr;
    *(undefined4 *)((int)register0x00000054 + -8) = unaff_r7;
    *(int *)((int)register0x00000054 + -0xc) = unaff_r6;
    *(uint *)((int)register0x00000054 + -0x10) = unaff_r5;
    *(int *)((int)register0x00000054 + -0x14) = unaff_r4;
    *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_r11;
    *(uint **)((int)register0x00000054 + -0x1c) = unaff_r10;
    *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_r9;
    *(uint **)((int)register0x00000054 + -0x24) = unaff_r8;
    unaff_r8 = puVar2 + 1;
    unaff_r5 = *unaff_r8;
    unaff_r6 = (uint)(byte)*puVar2 * -0x80000000;
    if (unaff_r6 == 0) {
      unaff_r5 = (uint)(byte)((byte)*puVar2 >> 1);
    }
    cVar8 = SBORROW4(unaff_r5,uVar3);
    if (uVar3 <= unaff_r5) {
      iVar6 = (*puVar2 & 0xfffffffe) - 1;
      if (unaff_r6 == 0) {
        iVar6 = 1;
      }
      if (iVar6 - unaff_r5 < param_4) {
        *(uint *)((int)register0x00000054 + -0x30) = param_4;
        *(int **)((int)register0x00000054 + -0x2c) = param_3;
        *(uint *)((int)register0x00000054 + -0x38) = uVar3;
        *(undefined4 *)((int)register0x00000054 + -0x34) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (param_4 == 0) {
        return puVar2;
      }
      if (unaff_r5 == uVar3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(uint *)((int)register0x00000054 + -0x28) = uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    unaff_lr = (int *)0x71b3c41d;
    uVar9 = FUN_71b3b8d0(puVar2);
    unaff_r7 = 0x96;
    piVar4 = extraout_r2;
    if (cVar8 == '\0') break;
    unaff_r4 = (int)*(short *)((int)uVar9 + unaff_r4);
    param_3 = extraout_r2;
    param_4 = extraout_r3;
    unaff_r10 = puVar2;
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x38);
  }
  while (piVar4 = piVar4 + 1, piVar5 = unaff_lr, piVar4 != (int *)0x71b3c41d) {
    uVar1 = uVar9;
    do {
      piVar7 = (int *)((ulonglong)uVar1 >> 0x20);
      piVar5 = piVar4;
      if (*piVar4 == *piVar7) goto LAB_71b3c4fc;
      iVar6 = (int)uVar1 + -4;
      uVar1 = CONCAT44(piVar7 + 1,iVar6);
    } while (iVar6 != 0);
  }
LAB_71b3c4fc:
  puVar2 = (uint *)((int)piVar5 - extraout_r12 >> 2);
  if (piVar5 == (int *)0x71b3c41d) {
    puVar2 = (uint *)0xffffffff;
  }
  return puVar2;
}


// =========================================================================
// Function: uARD_LovEZlJelOyNKoiBSgwzVvqwqCkTxMnpswrgIrcRzkWaMaWv_aRGeriby_cnuFRWJzsujUzESojFZQxSAQy
// Entry: 0x71b3c4a4 | Size: 110 bytes
// =========================================================================

int uARD_LovEZlJelOyNKoiBSgwzVvqwqCkTxMnpswrgIrcRzkWaMaWv_aRGeriby_cnuFRWJzsujUzESojFZQxSAQy
              (byte *param_1,uint *param_2,uint param_3,int param_4)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  
  uVar6 = *(uint *)(param_1 + 4);
  puVar5 = *(uint **)(param_1 + 8);
  if ((*param_1 & 1) == 0) {
    uVar6 = (uint)(*param_1 >> 1);
    puVar5 = (uint *)(param_1 + 4);
  }
  if (param_4 == 0 || uVar6 <= param_3) {
    return -1;
  }
  puVar1 = puVar5 + param_3;
  puVar7 = puVar5 + uVar6;
  do {
    iVar3 = param_4 << 2;
    puVar4 = param_2;
    do {
      puVar2 = puVar1;
      if (*puVar1 == *puVar4) goto LAB_71b3c4fc;
      iVar3 = iVar3 + -4;
      puVar4 = puVar4 + 1;
    } while (iVar3 != 0);
    puVar1 = puVar1 + 1;
    puVar2 = puVar7;
  } while (puVar1 != puVar7);
LAB_71b3c4fc:
  iVar3 = (int)puVar2 - (int)puVar5 >> 2;
  if (puVar2 == puVar7) {
    iVar3 = -1;
  }
  return iVar3;
}


// =========================================================================
// Function: GJGafUphpqyfNxaiYBiONNopVCGazFVukvinALtTOgTOHJIgK_SzhQdxA_FvFNqcemkzSwnYRNKlBAc
// Entry: 0x71b3c52a | Size: 342 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

uint * GJGafUphpqyfNxaiYBiONNopVCGazFVukvinALtTOgTOHJIgK_SzhQdxA_FvFNqcemkzSwnYRNKlBAc
                 (uint *param_1,uint param_2,byte *param_3,byte *param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  byte *extraout_r2;
  byte *pbVar5;
  byte *extraout_r3;
  uint *puVar6;
  uint *puVar7;
  int unaff_r6;
  uint uVar8;
  undefined1 *puVar9;
  byte *unaff_r9;
  byte *unaff_r10;
  uint uVar10;
  byte *pbVar11;
  uint *puVar12;
  
  puVar9 = &stack0xfffffff8;
  puVar12 = param_1 + 1;
  uVar10 = *puVar12;
  puVar6 = (uint *)((uint)(byte)*param_1 * -0x80000000);
  if (puVar6 == (uint *)0x0) {
    uVar10 = (uint)(byte)((byte)*param_1 >> 1);
  }
  if (uVar10 < param_2) {
    puVar12 = (uint *)0x71b3c62b;
    FUN_71b3b8d0();
    param_1 = (uint *)*puVar6;
    uVar2 = puVar6[1];
    puVar9 = (undefined1 *)puVar6[2];
    puVar1 = puVar6 + 3;
    if (unaff_r6 != 0) {
LAB_71b3c650:
      param_1 = (uint *)((int)param_1 >> 0x16);
      uVar10 = *param_1;
      uVar8 = (uVar10 & 0xfffffffe) - 1;
      if ((*param_1 & 1) == 0) {
        uVar8 = 1;
      }
      if (uVar8 < uVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      puVar12 = (uint *)param_1[2];
      if ((uVar10 & 1) == 0) {
        puVar12 = param_1 + 1;
      }
      if (uVar2 == 0) {
        if ((uVar10 & 1) == 0) {
          *(byte *)param_1 = 0;
        }
        else {
          param_1[1] = 0;
        }
        *puVar12 = 0;
        return param_1;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar7 = (uint *)&UNK_71b3c8d4;
    uVar8 = 0;
    param_3 = extraout_r2;
    pbVar5 = extraout_r3;
    puVar6 = puVar1;
    if (extraout_r2 < &DAT_00000006) goto LAB_71b3c562;
    puVar9 = (undefined1 *)((int)extraout_r2 << 0xb);
    if (puVar1 == (uint *)0xd3) {
      param_1 = (uint *)0x0;
      goto LAB_71b3c650;
    }
    puVar12 = (uint *)0x0;
  }
  else {
    uVar8 = *param_1;
    pbVar5 = (byte *)(uVar10 - param_2);
    uVar2 = uVar8 & 0xfffffffe;
    unaff_r9 = param_3;
    if (pbVar5 < param_3) {
      unaff_r9 = pbVar5;
    }
    puVar7 = (uint *)(unaff_r9 + -uVar10);
    unaff_r10 = param_4;
LAB_71b3c562:
    puVar1 = param_1;
    iVar3 = uVar2 - 1;
    if (puVar6 == (uint *)0x0) {
      iVar3 = 1;
    }
    if ((byte *)((int)puVar7 + iVar3) < unaff_r10) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar7 = (uint *)puVar1[2];
    if ((uVar8 & 1) == 0) {
      puVar7 = puVar12;
    }
    if ((param_3 < pbVar5) && (unaff_r10 != unaff_r9)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  if (unaff_r10 != (byte *)0x0) {
    uVar2 = *(uint *)(puVar9 + 8);
    puVar6 = puVar7 + param_2;
    pbVar5 = unaff_r10;
    if ((byte *)0x3 < unaff_r10) {
      pbVar11 = (byte *)((uint)unaff_r10 & 0xfffffffc);
      puVar4 = puVar6 + (int)pbVar11;
      pbVar5 = pbVar11;
      do {
        *(ulonglong *)puVar6 = CONCAT44(uVar2,uVar2);
        *(ulonglong *)(puVar6 + 2) = CONCAT44(uVar2,uVar2);
        puVar6 = puVar6 + 4;
        pbVar5 = pbVar5 + -4;
      } while (pbVar5 != (byte *)0x0);
      puVar6 = puVar4;
      pbVar5 = (byte *)((uint)unaff_r10 & 3);
      if (pbVar11 == unaff_r10) goto LAB_71b3c604;
    }
    do {
      *puVar6 = uVar2;
      pbVar5 = pbVar5 + -1;
      puVar6 = puVar6 + 1;
    } while (pbVar5 != (byte *)0x0);
  }
LAB_71b3c604:
  pbVar5 = unaff_r10 + (uVar10 - (int)unaff_r9);
  if ((*puVar1 & 1) == 0) {
    *(char *)puVar1 = (char)pbVar5 * '\x02';
  }
  else {
    *puVar12 = (uint)pbVar5;
  }
  puVar7[(int)pbVar5] = 0;
  return puVar1;
}


// =========================================================================
// Function: kphVrTcOWlnmboqHovaCIDStNFE_QFGEhIKtcFYvLjhXfUuRPbEIdkGFfxwVcZnRUdSldbMTVhpuhN
// Entry: 0x71b3c696 | Size: 122 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

uint * kphVrTcOWlnmboqHovaCIDStNFE_QFGEhIKtcFYvLjhXfUuRPbEIdkGFfxwVcZnRUdSldbMTVhpuhN
                 (uint *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  uVar1 = *param_1;
  uVar2 = (uVar1 & 0xfffffffe) - 1;
  if ((*param_1 & 1) == 0) {
    uVar2 = 1;
  }
  if (uVar2 < param_3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar3 = (uint *)param_1[2];
  if ((uVar1 & 1) == 0) {
    puVar3 = param_1 + 1;
  }
  if (param_3 == 0) {
    if ((uVar1 & 1) == 0) {
      *(byte *)param_1 = 0;
    }
    else {
      param_1[1] = 0;
    }
    *puVar3 = 0;
    return param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: VWOAx_CbxskQqPdBQIXPwiGsvCa_kBzTSCjrPvRhSeNmisaVfUyobDFALXb_MabOlX_ZYpZnSEQg
// Entry: 0x71b3c7a0 | Size: 368 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void VWOAx_CbxskQqPdBQIXPwiGsvCa_kBzTSCjrPvRhSeNmisaVfUyobDFALXb_MabOlX_ZYpZnSEQg
               (uint *param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint extraout_r3;
  uint *unaff_r4;
  uint unaff_r5;
  uint unaff_r6;
  uint uVar5;
  uint *unaff_r7;
  uint *puVar6;
  uint unaff_r8;
  uint unaff_r9;
  uint unaff_r10;
  uint unaff_r11;
  uint *puVar7;
  uint unaff_lr;
  uint uVar8;
  
  do {
    *(uint *)((int)register0x00000054 + -4) = unaff_lr;
    puVar6 = (uint *)((int)register0x00000054 + -8);
    *puVar6 = (uint)unaff_r7;
    if (param_2 < 0x3ffffff8) {
      uVar8 = *param_1;
      uVar3 = (uVar8 & 0xfffffffe) - 1;
      uVar4 = uVar3;
      if ((*param_1 & 1) == 0) {
        uVar4 = 1;
      }
      if (param_2 <= uVar4) {
        return;
      }
      uVar4 = param_1[1];
      if ((uVar8 & 1) == 0) {
        uVar4 = (uVar8 & 0xff) >> 1;
      }
      if (uVar4 <= param_2) {
        uVar4 = param_2;
      }
      uVar4 = uVar4 | 1;
      if ((uVar8 & 1) == 0) {
        uVar3 = 1;
      }
      if (uVar4 == uVar3) {
        return;
      }
      puVar6 = (uint *)*puVar6;
      unaff_lr = *(uint *)((int)register0x00000054 + -4);
      puVar7 = (uint *)register0x00000054;
LAB_71b3c84e:
      puVar7[-1] = unaff_lr;
      puVar7[-2] = (uint)puVar6;
      puVar7[-3] = unaff_r6;
      puVar7[-4] = unaff_r5;
      puVar7[-5] = (uint)unaff_r4;
      puVar7[-6] = unaff_r11;
      puVar7[-7] = unaff_r10;
      puVar7[-8] = unaff_r9;
      puVar7[-9] = unaff_r8;
      uVar8 = param_1[1];
      iVar2 = (uint)(byte)*param_1 * -0x80000000;
      if (iVar2 == 0) {
        uVar8 = (uint)(byte)((byte)*param_1 >> 1);
      }
      if (uVar4 < 2) {
        puVar7[-10] = uVar4 + 1;
        if (uVar8 == 0xffffffff) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar5 = uVar4 + 1;
      uVar8 = (*param_1 & 0xfffffffe) - 1;
      if (iVar2 == 0) {
        uVar8 = 1;
      }
      puVar7[-10] = uVar5;
      if (uVar4 <= uVar8) {
        if (0x3fffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_719fe2ec(iVar2,uVar8,uVar3);
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (0x3fffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_719fe2ec(iVar2,uVar8,uVar3);
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    unaff_lr = 0x71b3c7ff;
    param_1 = (uint *)FUN_71b3bc8c();
    uVar3 = extraout_r3;
    if ((int)param_1 < 0xab) {
      uVar3 = (uint)*(byte *)((int)puVar6 * 2);
      if (-1 < (int)(unaff_r6 - 0xa5)) {
        param_1 = (uint *)((uint)param_1 & 2);
        unaff_r6 = (uint)*(ushort *)((unaff_r6 >> 0x17) + (int)unaff_r4) << 1;
        goto LAB_71b3c822;
      }
      unaff_r7 = (uint *)(uint)(byte)((int)puVar6 >> 0x1a);
    }
    else {
LAB_71b3c822:
                    /* WARNING: Read-only address (ram,0x71b3c8ef) is written */
      bVar1 = (bool)hasExclusiveAccess(0x71b3c8ef);
      if (bVar1) {
        puRam71b3c8ef = param_1;
      }
      uVar4 = (uint)!bVar1;
      uVar3 = uVar3 << 1;
      unaff_r7 = puVar6;
      if ((int)param_1 < 1) {
        unaff_r4 = (uint *)((int)puVar6 * 0x10);
        puVar7 = puVar6;
        goto LAB_71b3c84e;
      }
    }
    param_2 = (int)param_1 >> 0x1b;
    param_1 = (uint *)0x0;
    unaff_r6 = unaff_r5 << 3;
    unaff_r4 = (uint *)((int)register0x00000054 + 0x3b8);
    register0x00000054 = (BADSPACEBASE *)puVar6;
  } while( true );
}


// =========================================================================
// Function: syQs_KfvhDQFJmlicAwavYwkwQaOPsmdQwOevuliQMpRUwHHfCmpQwRAWrRjRIgpcslgTaSTmfihZX
// Entry: 0x71b3ca1c | Size: 106 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

uint * syQs_KfvhDQFJmlicAwavYwkwQaOPsmdQwOevuliQMpRUwHHfCmpQwRAWrRjRIgpcslgTaSTmfihZX
                 (uint *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *param_1;
  uVar1 = param_1[1];
  if ((uVar2 & 1) == 0) {
    uVar1 = (uVar2 & 0xff) >> 1;
  }
  iVar3 = (uVar2 & 0xfffffffe) - 1;
  if ((*param_1 & 1) == 0) {
    iVar3 = 1;
  }
  if (iVar3 - uVar1 < param_3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_3 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return param_1;
}


// =========================================================================
// Function: qcwGkLqKsmmiQdCaWhWSKldAbjpzGfhZaHcrvyqpfZezaucTUFkZAKIZeDGQHMRtMBjmKZnzoUWwIEihN
// Entry: 0x71b3caf6 | Size: 60 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

uint * qcwGkLqKsmmiQdCaWhWSKldAbjpzGfhZaHcrvyqpfZezaucTUFkZAKIZeDGQHMRtMBjmKZnzoUWwIEihN
                 (uint *param_1,byte *param_2,uint param_3,uint param_4)

{
  uint extraout_r2;
  uint extraout_r3;
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint extraout_r12;
  
  uVar3 = *(uint *)(param_2 + 4);
  if ((*param_2 & 1) == 0) {
    uVar3 = (uint)(*param_2 >> 1);
  }
  if (uVar3 < param_3) {
    param_1 = (uint *)FUN_71b3b8d0();
    param_3 = extraout_r2;
    param_4 = extraout_r3;
    uVar3 = extraout_r12;
  }
  if (uVar3 - param_3 < param_4) {
    param_4 = uVar3 - param_3;
  }
  uVar3 = *param_1;
  uVar1 = (uVar3 & 0xfffffffe) - 1;
  if ((*param_1 & 1) == 0) {
    uVar1 = 1;
  }
  if (param_4 <= uVar1) {
    puVar2 = (uint *)param_1[2];
    if ((uVar3 & 1) == 0) {
      puVar2 = param_1 + 1;
    }
    if (param_4 == 0) {
      if ((uVar3 & 1) == 0) {
        *(byte *)param_1 = 0;
      }
      else {
        param_1[1] = 0;
      }
      *puVar2 = 0;
      return param_1;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: mxQdTCYpW_bOAryFLpxFpLlhVLYh_npYidnYuxGgxMXlPzaPHQvrBElsBlJrniTPtCUaoPKQEHiaH
// Entry: 0x71b3cb82 | Size: 72 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

uint * mxQdTCYpW_bOAryFLpxFpLlhVLYh_npYidnYuxGgxMXlPzaPHQvrBElsBlJrniTPtCUaoPKQEHiaH
                 (byte *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  byte bVar1;
  uint *puVar2;
  byte *pbVar3;
  uint extraout_r2;
  uint uVar4;
  uint extraout_r2_00;
  uint extraout_r3;
  uint uVar5;
  uint extraout_r3_00;
  uint uVar6;
  uint *puVar7;
  uint extraout_r12;
  bool bVar8;
  bool bVar9;
  undefined8 uVar10;
  
  bVar1 = *param_1;
  uVar4 = *(uint *)(param_1 + 4);
  if ((bVar1 & 1) == 0) {
    uVar4 = (uint)(bVar1 >> 1);
  }
  bVar9 = param_4 <= uVar4;
  bVar8 = uVar4 == param_4;
  if (bVar9) {
    if (uVar4 - param_4 < param_3) {
      param_3 = uVar4 - param_4;
    }
    if (param_3 == 0) {
      return (uint *)0x0;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar10 = FUN_71b3b8d0();
  pbVar3 = (byte *)((ulonglong)uVar10 >> 0x20);
  puVar2 = (uint *)uVar10;
  *(short *)(bVar1 + 0x1e) = (short)uVar10;
  if (!bVar9 || bVar8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar1 = *pbVar3;
  uVar4 = *(uint *)(pbVar3 + 4);
  if ((bVar1 & 1) == 0) {
    uVar4 = (uint)(bVar1 >> 1);
  }
  uVar6 = extraout_r2_00;
  uVar5 = extraout_r3_00;
  if (uVar4 < extraout_r2_00) {
    puVar2 = (uint *)FUN_71b3b8d0();
    uVar6 = extraout_r2;
    uVar5 = extraout_r3;
    uVar4 = extraout_r12;
  }
  if (uVar4 - uVar6 < uVar5) {
    uVar5 = uVar4 - uVar6;
  }
  uVar4 = *puVar2;
  uVar6 = (uVar4 & 0xfffffffe) - 1;
  if ((*puVar2 & 1) == 0) {
    uVar6 = 1;
  }
  if (uVar5 <= uVar6) {
    puVar7 = (uint *)puVar2[2];
    if ((uVar4 & 1) == 0) {
      puVar7 = puVar2 + 1;
    }
    if (uVar5 == 0) {
      if ((uVar4 & 1) == 0) {
        *(byte *)puVar2 = 0;
      }
      else {
        puVar2[1] = 0;
      }
      *puVar7 = 0;
      return puVar2;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: fZDEfuzmyMGItkAsxbkbcWNoaGYvDVnXaZvVETWVd_EVyvFJQBynipgDpYPnNkSd_AqBYmkqIuFsjksCM
// Entry: 0x71b3cc16 | Size: 134 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

undefined1 *
fZDEfuzmyMGItkAsxbkbcWNoaGYvDVnXaZvVETWVd_EVyvFJQBynipgDpYPnNkSd_AqBYmkqIuFsjksCM
          (undefined1 *param_1,byte *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 4);
  if ((*param_2 & 1) == 0) {
    uVar1 = (uint)(*param_2 >> 1);
  }
  if (uVar1 < param_3) {
    FUN_71b3b8d0(param_1);
  }
  else {
    if (uVar1 - param_3 < param_4) {
      param_4 = uVar1 - param_3;
    }
    if (param_4 < 0x3ffffff8) {
      if (param_4 < 2) {
        *param_1 = (char)(param_4 << 1);
        if (param_4 == 0) {
          *(undefined4 *)(param_1 + 4) = 0;
          return param_1;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if ((param_4 | 1) < 0x3fffffff) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto LAB_71b3ccac;
    }
  }
  FUN_71b3bc8c(param_1);
LAB_71b3ccac:
                    /* WARNING: Subroutine does not return */
  FUN_719fe2ec();
}


// =========================================================================
// Function: XjVskW_hRbdTtdxNwhGWHzZqQLMQJuqAfrcgpYfBpuLzZGKLUhMptbsKTotsSJuhhbperSJdWaV
// Entry: 0x71b3cd54 | Size: 46 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

undefined4
XjVskW_hRbdTtdxNwhGWHzZqQLMQJuqAfrcgpYfBpuLzZGKLUhMptbsKTotsSJuhhbperSJdWaV
          (byte *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 4);
  if ((*param_1 & 1) == 0) {
    uVar1 = (uint)(*param_1 >> 1);
  }
  if (param_3 < uVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0xffffffff;
}


// =========================================================================
// Function: fcTOoXKVOnaOLwdVEvwQlJjGmISgmkgdzdLJWDc__wHYUQBZsANsByxFgOoROxt_poqGdayJFWNl
// Entry: 0x71b3cdcc | Size: 132 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void fcTOoXKVOnaOLwdVEvwQlJjGmISgmkgdzdLJWDc__wHYUQBZsANsByxFgOoROxt_poqGdayJFWNl
               (undefined1 *param_1,uint param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  
  if (param_2 < 0x3ffffff8) {
    if (param_2 < 2) {
      puVar5 = (undefined8 *)(param_1 + 4);
      *param_1 = (char)(param_2 << 1);
      if (param_2 != 0) {
        puVar1 = puVar5;
        uVar2 = param_2;
        if (3 < param_2) {
          uVar3 = param_2 & 0x3ffffffc;
          uVar2 = param_2 & 3;
          uVar4 = uVar3;
          do {
            *puVar1 = CONCAT44(param_3,param_3);
            puVar1[1] = CONCAT44(param_3,param_3);
            puVar1 = puVar1 + 2;
            uVar4 = uVar4 - 4;
          } while (uVar4 != 0);
          puVar1 = (undefined8 *)((int)puVar5 + uVar3 * 4);
          if (uVar3 == param_2) goto LAB_71b3ce4c;
        }
        do {
          *(undefined4 *)puVar1 = param_3;
          uVar2 = uVar2 - 1;
          puVar1 = (undefined8 *)((int)puVar1 + 4);
        } while (uVar2 != 0);
      }
LAB_71b3ce4c:
      *(undefined4 *)((int)puVar5 + param_2 * 4) = 0;
      return;
    }
    if ((param_2 | 1) < 0x3fffffff) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    FUN_71b3bc8c(param_1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_719fe2ec();
}


// =========================================================================
// Function: eZKzEOjXWOnJTJNdDymPaNoY_SvAVS_xkAjDSnHzxwztEcsfxwfvvVbBoWCGTCeUgZKtrBYwnwYkSS
// Entry: 0x71b3cece | Size: 16 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void eZKzEOjXWOnJTJNdDymPaNoY_SvAVS_xkAjDSnHzxwztEcsfxwfvvVbBoWCGTCeUgZKtrBYwnwYkSS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: ZCUXstDzinTtzQjmErqjUJLhcwugMXlnttTwrLLCiFKANftf_zYOcxYvDLzMPGahXPTAwrOJLUHmcQxcVLfexQT
// Entry: 0x71b3cf46 | Size: 62 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

undefined4
ZCUXstDzinTtzQjmErqjUJLhcwugMXlnttTwrLLCiFKANftf_zYOcxYvDLzMPGahXPTAwrOJLUHmcQxcVLfexQT
          (byte *param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint uVar1;
  
  if (param_4 != 0) {
    uVar1 = *(uint *)(param_1 + 4);
    if ((*param_1 & 1) == 0) {
      uVar1 = (uint)(*param_1 >> 1);
    }
    if (param_3 < uVar1) {
      uVar1 = param_3 + 1;
    }
    if ((uVar1 & 0x3fffffff) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return 0xffffffff;
}


// =========================================================================
// Function: XpRmKaZQRdfJiHzeRgBYPKNDqcKtzg_XHudKgFAoANGXnchMgsBjuLkaOLAJgBgtcQzeGqGJhQPimLOJpRV
// Entry: 0x71b3cfca | Size: 94 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void XpRmKaZQRdfJiHzeRgBYPKNDqcKtzg_XHudKgFAoANGXnchMgsBjuLkaOLAJgBgtcQzeGqGJhQPimLOJpRV
               (undefined4 param_1,uint param_2,uint param_3)

{
  if (param_3 <= 0x3ffffff7 - param_2) {
    if (param_2 < 0x1ffffff3) {
      param_3 = param_3 + param_2;
      if (param_3 <= param_2 * 2) {
        param_3 = param_2 << 1;
      }
      if (0x3fffffff < (param_3 | 1) + 1) goto LAB_71b3d07e;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_71b3bc8c(param_1);
LAB_71b3d07e:
                    /* WARNING: Subroutine does not return */
  FUN_719fe2ec();
}


// =========================================================================
// Function: ZyXCNhsAcLNdbFuElZFJbMkaAtEEaIxyTeKQPZeKSYjjrRztkrnFhOdJemnMYtHjKHothHeeyTTfXV
// Entry: 0x71b3d142 | Size: 96 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void ZyXCNhsAcLNdbFuElZFJbMkaAtEEaIxyTeKQPZeKSYjjrRztkrnFhOdJemnMYtHjKHothHeeyTTfXV
               (uint *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  
  bVar1 = (byte)*param_1;
  if ((bVar1 & 1) == 0) {
    if (bVar1 != 2) {
      puVar3 = param_1 + 1;
      *(byte *)param_1 = bVar1 + 2;
      uVar2 = (uint)(bVar1 >> 1);
LAB_71b3d194:
      puVar3[uVar2] = param_2;
      puVar3[uVar2 + 1] = 0;
      return;
    }
  }
  else {
    uVar2 = param_1[1];
    if (uVar2 != (*param_1 & 0xfffffffe) - 1) {
      puVar3 = (uint *)param_1[2];
      param_1[1] = uVar2 + 1;
      goto LAB_71b3d194;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: ecXHYRmEAduuLVUXVyxxPKAdXz_LanDPsAsgiWZGTdqixWcwJjVVOZhpOZhZtlmuWIrOAQORiNIy
// Entry: 0x71b3d1dc | Size: 178 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void ecXHYRmEAduuLVUXVyxxPKAdXz_LanDPsAsgiWZGTdqixWcwJjVVOZhpOZhZtlmuWIrOAQORiNIy
               (uint *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  
  if (param_2 == 0) {
    return;
  }
  uVar2 = *param_1;
  puVar1 = param_1 + 1;
  uVar6 = *puVar1;
  if ((uVar2 & 1) == 0) {
    uVar6 = (uVar2 & 0xff) >> 1;
  }
  iVar3 = (uVar2 & 0xfffffffe) - 1;
  if ((*param_1 & 1) == 0) {
    iVar3 = 1;
  }
  if (iVar3 - uVar6 < param_2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar7 = (uint *)param_1[2];
  if ((uVar2 & 1) == 0) {
    puVar7 = puVar1;
  }
  puVar4 = puVar7 + uVar6;
  uVar2 = param_2;
  if (3 < param_2) {
    uVar8 = param_2 & 0xfffffffc;
    puVar5 = puVar4 + uVar8;
    uVar2 = uVar8;
    do {
      *(ulonglong *)puVar4 = CONCAT44(param_3,param_3);
      *(ulonglong *)(puVar4 + 2) = CONCAT44(param_3,param_3);
      puVar4 = puVar4 + 4;
      uVar2 = uVar2 - 4;
    } while (uVar2 != 0);
    puVar4 = puVar5;
    uVar2 = param_2 & 3;
    if (uVar8 == param_2) goto LAB_71b3d280;
  }
  do {
    *puVar4 = param_3;
    uVar2 = uVar2 - 1;
    puVar4 = puVar4 + 1;
  } while (uVar2 != 0);
LAB_71b3d280:
  param_2 = param_2 + uVar6;
  if ((*param_1 & 1) == 0) {
    *(char *)param_1 = (char)param_2 * '\x02';
  }
  else {
    *puVar1 = param_2;
  }
  puVar7[param_2] = 0;
  return;
}


// =========================================================================
// Function: MRehApBNpzCSZpkJIwooeSGpHfhcrDSrsOoaDengjfDKdmYqESKkEbDwBWgnYGlVOgEoMkoIzUmB
// Entry: 0x71b3d2d6 | Size: 60 bytes
// =========================================================================

int MRehApBNpzCSZpkJIwooeSGpHfhcrDSrsOoaDengjfDKdmYqESKkEbDwBWgnYGlVOgEoMkoIzUmB
              (byte *param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  
  uVar3 = *(uint *)(param_1 + 4);
  puVar4 = *(uint **)(param_1 + 8);
  if ((*param_1 & 1) == 0) {
    uVar3 = (uint)(*param_1 >> 1);
    puVar4 = (uint *)(param_1 + 4);
  }
  if (uVar3 != 0) {
    if (param_3 < uVar3) {
      uVar3 = param_3 + 1;
    }
    iVar2 = uVar3 << 2;
    while (iVar2 != 0) {
      iVar1 = iVar2 + -4;
      iVar2 = iVar2 + -4;
      if (*(int *)((int)puVar4 + iVar1) == param_2) {
        return iVar2 >> 2;
      }
    }
  }
  return -1;
}


// =========================================================================
// Function: jU_imJfqrkiXuldbjSldVdsNhCfAUE_oRhXmuMuwJqQUVbSLnpSHrTwDifkrovJYPahv_GCvWEdG
// Entry: 0x71b3d32a | Size: 222 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void jU_imJfqrkiXuldbjSldVdsNhCfAUE_oRhXmuMuwJqQUVbSLnpSHrTwDifkrovJYPahv_GCvWEdG
               (uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  
  uVar3 = *param_1;
  uVar5 = (uVar3 & 0xfffffffe) - 1;
  uVar1 = uVar3 & 0xff;
  if ((*param_1 & 1) == 0) {
    uVar5 = 1;
  }
  if (uVar5 < param_2) {
    if (0x3ffffff7 - uVar5 < param_2 - uVar5) {
      FUN_71b3bc8c();
    }
    else {
      if (0x1ffffff2 < uVar5) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (param_2 <= uVar5 * 2) {
        param_2 = uVar5 << 1;
      }
      if ((param_2 | 1) + 1 < 0x40000000) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_719fe2ec();
  }
  puVar4 = (uint *)param_1[2];
  if ((uVar3 & 1) == 0) {
    puVar4 = param_1 + 1;
  }
  if (param_2 == 0) goto LAB_71b3d412;
  puVar2 = puVar4;
  uVar1 = param_2;
  if (param_2 < 4) {
LAB_71b3d408:
    do {
      *puVar2 = param_3;
      uVar1 = uVar1 - 1;
      puVar2 = puVar2 + 1;
    } while (uVar1 != 0);
  }
  else {
    uVar5 = param_2 & 0xfffffffc;
    uVar1 = param_2 & 3;
    uVar3 = uVar5;
    do {
      *(ulonglong *)puVar2 = CONCAT44(param_3,param_3);
      *(ulonglong *)(puVar2 + 2) = CONCAT44(param_3,param_3);
      puVar2 = puVar2 + 4;
      uVar3 = uVar3 - 4;
    } while (uVar3 != 0);
    puVar2 = puVar4 + uVar5;
    if (uVar5 != param_2) goto LAB_71b3d408;
  }
  uVar1 = (uint)(byte)*param_1;
LAB_71b3d412:
  if ((uVar1 & 1) == 0) {
    *(byte *)param_1 = (byte)(param_2 << 1);
  }
  else {
    param_1[1] = param_2;
  }
  puVar4[param_2] = 0;
  return;
}


// =========================================================================
// Function: vlAYTOMpLaVWsPzZSaPhkkRjAwbuwt_spCqZqbvTerbgPlUA_ygcnrpGzwjUssFmRpMaXFFiL_X
// Entry: 0x71b3d4d6 | Size: 234 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

uint * vlAYTOMpLaVWsPzZSaPhkkRjAwbuwt_spCqZqbvTerbgPlUA_ygcnrpGzwjUssFmRpMaXFFiL_X
                 (uint *param_1,uint param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int extraout_r3;
  int unaff_r4;
  uint uVar6;
  undefined4 unaff_r5;
  int iVar7;
  uint *unaff_r6;
  int unaff_r7;
  int *unaff_r9;
  uint unaff_r10;
  uint uVar8;
  int unaff_lr;
  uint *puVar9;
  bool bVar10;
  bool bVar11;
  undefined8 uVar12;
  
  uVar12 = CONCAT44(param_3,unaff_r5);
  while( true ) {
    iVar7 = (int)uVar12;
    *(int *)((int)register0x00000054 + -4) = unaff_lr;
    *(int *)((int)register0x00000054 + -8) = unaff_r7;
    *(uint **)((int)register0x00000054 + -0xc) = unaff_r6;
    piVar3 = (int *)((int)register0x00000054 + -0x10);
    *piVar3 = unaff_r4;
    bVar1 = (byte)*param_1;
    uVar6 = (uint)bVar1;
    puVar9 = param_1 + 1;
    uVar5 = *puVar9;
    if (uVar6 * -0x80000000 == 0) {
      uVar5 = (uint)(bVar1 >> 1);
    }
    bVar11 = param_2 <= uVar5;
    bVar10 = uVar5 == param_2;
    if (bVar11) {
      if ((int)((ulonglong)uVar12 >> 0x20) == -1) {
        if (uVar6 * -0x80000000 == 0) {
          *(byte *)param_1 = (byte)(param_2 << 1);
        }
        else {
          puVar9 = (uint *)param_1[2];
          param_1[1] = param_2;
        }
        puVar9[param_2] = 0;
        return param_1;
      }
      FUN_71b3d56a();
      return param_1;
    }
    unaff_lr = 0x71b3d51b;
    uVar12 = FUN_71b3b8d0();
    iVar2 = (int)uVar12;
    *(short *)(iVar7 + 0x1e) = (short)uVar12;
    if (!bVar11 || bVar10) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    unaff_r6 = (uint *)(extraout_r3 << 2);
    unaff_r7 = *(int *)((int)register0x00000054 + 0x1f0);
    param_1 = (uint *)(iVar2 << 4);
    if (0 < (int)param_1) break;
    unaff_r4 = iVar2 << 0xb;
    param_2 = iVar2 << 4;
    register0x00000054 = (BADSPACEBASE *)piVar3;
  }
  puVar9 = (uint *)*piVar3;
  *puVar9 = unaff_r10 | 1;
  puVar9[1] = 0;
  puVar9[2] = (uint)unaff_r9;
  piVar3 = unaff_r9;
  uVar5 = uVar6;
  if (3 < uVar6) {
    uVar8 = uVar6 & 0xfffffffc;
    uVar5 = uVar6 & 3;
    uVar4 = uVar8;
    do {
      *(ulonglong *)piVar3 = CONCAT44(iVar2,iVar2);
      *(ulonglong *)(piVar3 + 2) = CONCAT44(iVar2,iVar2);
      piVar3 = piVar3 + 4;
      uVar4 = uVar4 - 4;
    } while (uVar4 != 0);
    piVar3 = unaff_r9 + uVar8;
    if (uVar8 == uVar6) goto LAB_71b3d410;
  }
  do {
    *piVar3 = iVar2;
    uVar5 = uVar5 - 1;
    piVar3 = piVar3 + 1;
  } while (uVar5 != 0);
LAB_71b3d410:
  if ((*puVar9 & 1) == 0) {
    *(byte *)puVar9 = bVar1 << 1;
  }
  else {
    *unaff_r6 = uVar6;
  }
  unaff_r9[uVar6] = 0;
  return puVar9;
}


// =========================================================================
// Function: FUN_71b3d56a
// Entry: 0x71b3d56a | Size: 96 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void FUN_71b3d56a(byte *param_1,int param_2,uint param_3)

{
  uint *puVar1;
  byte bVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_3 == 0) {
    return;
  }
  bVar2 = *param_1;
  puVar1 = (uint *)(param_1 + 4);
  uVar6 = *puVar1;
  puVar3 = *(uint **)(param_1 + 8);
  if ((bVar2 & 1) == 0) {
    uVar6 = (uint)(bVar2 >> 1);
    puVar3 = puVar1;
  }
  uVar5 = uVar6 - param_2;
  uVar4 = param_3;
  if (uVar5 < param_3) {
    uVar4 = uVar5;
  }
  if (uVar5 <= param_3) {
    uVar6 = uVar6 - uVar4;
    if ((bVar2 & 1) == 0) {
      *param_1 = (char)uVar6 * '\x02';
    }
    else {
      *puVar1 = uVar6;
    }
    puVar3[uVar6] = 0;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: bYcrtOwcCiGkHyrSlxvJYWmCCUZiTLSXNzbMszXIVcfyUFwrefhleybiTcrYRdTFDnRAYegN_qxplS_uv
// Entry: 0x71b3d606 | Size: 180 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

uint * bYcrtOwcCiGkHyrSlxvJYWmCCUZiTLSXNzbMszXIVcfyUFwrefhleybiTcrYRdTFDnRAYegN_qxplS_uv
                 (undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  byte *pbVar3;
  uint *puVar4;
  uint extraout_r3;
  undefined1 *unaff_r4;
  int iVar5;
  uint unaff_r5;
  uint uVar6;
  undefined4 unaff_r6;
  uint uVar7;
  undefined1 *unaff_r7;
  undefined4 unaff_r8;
  uint *unaff_r9;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  bool bVar8;
  bool bVar9;
  undefined8 uVar10;
  
  uVar10 = CONCAT44(param_2,param_1);
  while( true ) {
    pbVar3 = (byte *)((ulonglong)uVar10 >> 0x20);
    puVar1 = (uint *)uVar10;
    *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
    *(undefined1 **)((int)register0x00000054 + -8) = unaff_r7;
    *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r6;
    *(uint *)((int)register0x00000054 + -0x10) = unaff_r5;
    *(undefined1 **)((int)register0x00000054 + -0x14) = unaff_r4;
    unaff_r7 = (undefined1 *)((int)register0x00000054 + -8);
    *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_r11;
    *(uint **)((int)register0x00000054 + -0x1c) = unaff_r9;
    *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_r8;
    unaff_r5 = (uint)*pbVar3;
    uVar2 = *(uint *)(pbVar3 + 4);
    if (unaff_r5 * -0x80000000 == 0) {
      uVar2 = (uint)(*pbVar3 >> 1);
    }
    bVar9 = param_3 <= uVar2;
    bVar8 = uVar2 == param_3;
    if (bVar9) break;
    unaff_lr = 0x71b3d6cb;
    uVar10 = FUN_71b3b8d0(puVar1);
    *(short *)(unaff_r5 + 0x1e) = (short)uVar10;
    if (!bVar9 || bVar8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    unaff_r4 = (undefined1 *)((int)register0x00000054 + 0x390);
    param_3 = unaff_r5 << 2;
    param_4 = extraout_r3;
    unaff_r9 = puVar1;
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x30);
  }
  uVar7 = *puVar1;
  uVar6 = puVar1[1];
  puVar4 = *(uint **)(pbVar3 + 8);
  if (unaff_r5 * -0x80000000 == 0) {
    puVar4 = (uint *)(pbVar3 + 4);
  }
  if ((uVar7 & 1) == 0) {
    uVar6 = (uVar7 & 0xff) >> 1;
  }
  iVar5 = (uVar7 & 0xfffffffe) - 1;
  if ((*puVar1 & 1) == 0) {
    iVar5 = 1;
  }
  if (uVar2 - param_3 < param_4) {
    param_4 = uVar2 - param_3;
  }
  if (iVar5 - uVar6 < param_4) {
    *(uint *)((int)register0x00000054 + -0x28) = param_4;
    *(uint **)((int)register0x00000054 + -0x24) = puVar4 + param_3;
    *(uint *)((int)register0x00000054 + -0x30) = uVar6;
    *(undefined4 *)((int)register0x00000054 + -0x2c) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_4 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return puVar1;
}


// =========================================================================
// Function: SsaprZLZhNYUGAnQDsPDKFsjqihnDEyNwpFLr_lXOQHPlZRCqwi_zkYTvczmcifNHdI_ewmwGJivGIU
// Entry: 0x71b3d736 | Size: 14 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void SsaprZLZhNYUGAnQDsPDKFsjqihnDEyNwpFLr_lXOQHPlZRCqwi_zkYTvczmcifNHdI_ewmwGJivGIU(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: p_zVMkQFVfWNClOtGNfqtMIqWirgrjidHuJkvfQBHFUysZdjlGaEuhX_ubjbOavUL_PmqbsipBRzbFeSPX
// Entry: 0x71b3d822 | Size: 100 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

uint p_zVMkQFVfWNClOtGNfqtMIqWirgrjidHuJkvfQBHFUysZdjlGaEuhX_ubjbOavUL_PmqbsipBRzbFeSPX
               (byte *param_1,uint param_2,uint param_3,undefined4 param_4,uint param_5)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 4);
  if ((*param_1 & 1) == 0) {
    uVar1 = (uint)(*param_1 >> 1);
  }
  if ((param_5 == 0xffffffff) || (uVar1 < param_2)) {
    FUN_71b3b8d0();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (uVar1 - param_2 < param_3) {
    param_3 = uVar1 - param_2;
  }
  uVar1 = param_5;
  if (param_3 < param_5) {
    uVar1 = param_3;
  }
  if (uVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = (uint)(param_3 >= param_5 && param_3 != param_5);
  if (param_3 < param_5) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


// =========================================================================
// Function: CogeUtEeKuBLUBghgzqTWWGEhGHYd_eqWalJYksJMNFlnVJBoZgOQoKqTLWadCKHhkUCwoliNUPUneutT
// Entry: 0x71b3d8e0 | Size: 18 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void CogeUtEeKuBLUBghgzqTWWGEhGHYd_eqWalJYksJMNFlnVJBoZgOQoKqTLWadCKHhkUCwoliNUPUneutT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: QuNitPiapGTxjFhpxNvliABamelvccvwG_EttFqlpxwbsrgKNpFJKroUMnFDNGkChSuqofz
// Entry: 0x71b3d9c2 | Size: 166 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x71b3d95a) */
/* WARNING: Removing unreachable block (ram,0x71b3d964) */
/* WARNING: Removing unreachable block (ram,0x71b3d966) */
/* WARNING: Removing unreachable block (ram,0x71b3d968) */
/* WARNING: Removing unreachable block (ram,0x71b3d96c) */
/* WARNING: Removing unreachable block (ram,0x71b3d96e) */

uint * QuNitPiapGTxjFhpxNvliABamelvccvwG_EttFqlpxwbsrgKNpFJKroUMnFDNGkChSuqofz
                 (undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  byte *pbVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 extraout_r2;
  uint uVar5;
  int unaff_r4;
  undefined4 unaff_r5;
  int unaff_r6;
  undefined4 *unaff_r7;
  int unaff_lr;
  char cVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  
  uVar8 = CONCAT44(param_2,param_1);
  while( true ) {
    uVar4 = (uint)((ulonglong)uVar8 >> 0x20);
    pbVar2 = (byte *)uVar8;
    *(int *)((int)register0x00000054 + -4) = unaff_lr;
    puVar7 = (undefined4 *)((int)register0x00000054 + -8);
    *puVar7 = unaff_r7;
    uVar5 = *(uint *)(pbVar2 + 4);
    cVar1 = *pbVar2 * -0x80;
    if (cVar1 == '\0') {
      uVar5 = (uint)(*pbVar2 >> 1);
    }
    cVar6 = uVar4 <= uVar5;
    if (uVar4 < uVar5) break;
    unaff_lr = 0x71b3d9f3;
    uVar8 = FUN_71b3b8d0();
    if (cVar6 != '\0') {
      *(short *)(unaff_r6 + 0x32) = (short)uVar8;
      *(undefined4 *)((int)register0x00000054 + -0xc) = 0x71b3d9f3;
      *(int *)((int)register0x00000054 + -0x10) = unaff_r6;
      *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r5;
      *(int *)((int)register0x00000054 + -0x18) = unaff_r4;
      *(int *)((int)register0x00000054 + -0x1c) = (int)uVar8;
      uRam00000026 = (short)unaff_r4;
      *puVar7 = extraout_r2;
      *(int *)((int)register0x00000054 + -4) = unaff_r4;
      *(undefined4 **)register0x00000054 = puVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    unaff_r4 = (int)puVar7 * 0x10;
    unaff_r7 = puVar7;
    register0x00000054 = (BADSPACEBASE *)puVar7;
  }
  puVar3 = *(uint **)(pbVar2 + 8);
  if (cVar1 == '\0') {
    puVar3 = (uint *)(pbVar2 + 4);
  }
  return puVar3 + uVar4;
}


// =========================================================================
// Function: FQoXmaITxcBqbqbjJBNUDqXdMyOqeVWoVXgzUZLQmdDPNADhBQUv_GFFTwQBBTMFHyIuXVNxnSWGq
// Entry: 0x71b3da26 | Size: 4 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void FQoXmaITxcBqbqbjJBNUDqXdMyOqeVWoVXgzUZLQmdDPNADhBQUv_GFFTwQBBTMFHyIuXVNxnSWGq(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: FUN_71b3da5e
// Entry: 0x71b3da5e | Size: 10 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void FUN_71b3da5e(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: tTapsxQjxNT_vsXCIwVqqfEizeboJVUOKmYFOOmZzKY_fziezuuTtuxkbAcIUKpIYPkHVpPPvxRyiw
// Entry: 0x71b3daca | Size: 100 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

uint tTapsxQjxNT_vsXCIwVqqfEizeboJVUOKmYFOOmZzKY_fziezuuTtuxkbAcIUKpIYPkHVpPPvxRyiw
               (byte *param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 4);
  if ((*param_1 & 1) == 0) {
    uVar1 = (uint)(*param_1 >> 1);
  }
  if (uVar1 < param_3) {
    param_3 = 0xffffffff;
  }
  else if (param_4 != 0) {
    iVar2 = uVar1 * 4 + param_3 * -4;
    if ((param_4 * 4 <= iVar2) && ((iVar2 >> 2) - param_4 != -1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_3 = 0xffffffff;
  }
  return param_3;
}


// =========================================================================
// Function: hlPxyerKVGbQMacWNpBpKuDUhXDpaKZzFJckIosXxoQnyfvMTliNn_iddQMRCoTXDNwBT_hYPERZTlbHWFxKE
// Entry: 0x71b3dba4 | Size: 146 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

undefined4
hlPxyerKVGbQMacWNpBpKuDUhXDpaKZzFJckIosXxoQnyfvMTliNn_iddQMRCoTXDNwBT_hYPERZTlbHWFxKE
          (byte *param_1,uint param_2,uint param_3,byte *param_4,uint param_5,uint param_6)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  
  bVar1 = *param_4;
  uVar3 = (uint)bVar1;
  uVar5 = *(uint *)(param_1 + 4);
  uVar6 = *(uint *)(param_4 + 4);
  if ((*param_1 & 1) == 0) {
    uVar5 = (uint)(*param_1 >> 1);
  }
  puVar4 = *(uint **)(param_4 + 8);
  if ((bVar1 & 1) == 0) {
    uVar6 = (uint)(bVar1 >> 1);
    puVar4 = (uint *)(param_4 + 4);
  }
  if (param_2 <= uVar5) {
    uVar3 = uVar5 - param_2;
    if (uVar3 < param_3) {
      param_3 = uVar3;
    }
    if (param_5 <= uVar6) {
      if (uVar6 - param_5 < param_6) {
        param_6 = uVar6 - param_5;
      }
      uVar6 = param_3;
      if (param_6 < param_3) {
        uVar6 = param_6;
      }
      if (uVar6 == 0) {
        if (param_3 != param_6) {
          uVar2 = 1;
          if (param_3 < param_6) {
            uVar2 = 0xffffffff;
          }
          return uVar2;
        }
        return 0;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_71a66fdc(s_string_view__substr_70068a67,param_2,uVar3,puVar4);
}


// =========================================================================
// Function: LSGBPTCSEmLjnRqcekVoJUfNVVazYFitMCxZhkbdRqQTdbPjxYtTvpOlFUdZPsCughdKwAEDuO
// Entry: 0x71b3dcb4 | Size: 244 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

uint * LSGBPTCSEmLjnRqcekVoJUfNVVazYFitMCxZhkbdRqQTdbPjxYtTvpOlFUdZPsCughdKwAEDuO
                 (uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_2) {
    return param_1;
  }
  bVar1 = (byte)*param_2;
  if ((*param_1 & 1) != 0) {
    uVar2 = param_2[1];
    if ((bVar1 & 1) == 0) {
      uVar2 = (uint)(bVar1 >> 1);
    }
    if ((*param_1 & 0xfffffffe) <= uVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_1[1] = uVar2;
    if (uVar2 == 0) {
      *(undefined4 *)param_1[2] = 0;
      return param_1;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bVar1 & 1) == 0) {
    uVar3 = *(undefined8 *)param_2;
    param_1[2] = param_2[2];
    *(undefined8 *)param_1 = uVar3;
    return param_1;
  }
  uVar2 = param_2[1];
  if (1 < uVar2) {
    if (uVar2 + 0xc0000009 < 0xc000000a) {
      FUN_71b3bc8c(param_1,param_2[2]);
    }
    else if ((uVar2 | 1) < 0x3fffffff) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Subroutine does not return */
    FUN_719fe2ec();
  }
  *(byte *)param_1 = (byte)(uVar2 << 1);
  if (uVar2 == 0) {
    param_1[1] = 0;
    return param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: KxvFGVDwrVVmN_vOkxEyWsStXNUFnvnpboPxycbMhGfmZlbahrsSYDZIxTcAwOWdzyamnYizbKHKl
// Entry: 0x71b3df12 | Size: 16 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void KxvFGVDwrVVmN_vOkxEyWsStXNUFnvnpboPxycbMhGfmZlbahrsSYDZIxTcAwOWdzyamnYizbKHKl(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: UtWFpmfuqEQHSCAksqjUYwEboZcOQJItjuqXeozhbvNocpltdwavQvj_OkLoAzMLysCxur_gQbJKcGlfYigG
// Entry: 0x71b3e010 | Size: 146 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

byte * UtWFpmfuqEQHSCAksqjUYwEboZcOQJItjuqXeozhbvNocpltdwavQvj_OkLoAzMLysCxur_gQbJKcGlfYigG(void)

{
  uint uVar1;
  uint *puVar2;
  byte bVar3;
  char cVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  byte *in_r3;
  int extraout_r3;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  uint in_stack_00000000;
  int *piStack_1c;
  
  bVar3 = *in_r3;
  uVar8 = *(uint *)(in_r3 + 4);
  if ((bVar3 & 1) == 0) {
    uVar8 = (uint)(bVar3 >> 1);
  }
  if (in_stack_00000000 <= uVar8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar11 = FUN_71b3b8d0();
  uVar8 = (uint)((ulonglong)uVar11 >> 0x20);
  *(ushort *)(bVar3 + 8) = (ushort)bVar3;
  if (*(char *)((int)uVar11 + 0x1d) == '\0') {
    if (extraout_r3 + -7 == 0) {
      FUN_71b42d04(&stack0xffffffe8);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (piStack_1c != (int *)0x0) {
      *piStack_1c = -(extraout_r3 + -7);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar5 = (uint *)((int)&stack0xfffffff8 >> 0x15);
  bVar3 = (byte)*puVar5;
  puVar2 = puVar5 + 1;
  uVar9 = *puVar2;
  puVar7 = (uint *)puVar5[2];
  if ((bVar3 & 1) == 0) {
    uVar9 = (uint)(bVar3 >> 1);
    puVar7 = puVar2;
  }
  iVar10 = uVar8 - (int)puVar7;
  uVar6 = (*puVar5 & 0xfffffffe) - 1;
  uVar1 = iVar10 >> 2;
  if ((bVar3 & 1) == 0) {
    uVar6 = 1;
  }
  if (uVar6 != uVar9) {
    puVar7 = (uint *)puVar5[2];
    if ((*puVar5 & 1) == 0) {
      puVar7 = puVar2;
    }
    if (uVar9 == uVar1) {
      uVar9 = uVar9 + 1;
      puVar7[uVar1] = uVar8;
      puVar7[uVar9] = 0;
      cVar4 = (byte)*puVar5 * -0x80;
      if (cVar4 == '\0') {
        *(char *)puVar5 = (char)uVar9 * '\x02';
      }
      else {
        *puVar2 = uVar9;
      }
      puVar7 = (uint *)puVar5[2];
      if (cVar4 == '\0') {
        puVar7 = puVar2;
      }
      return (byte *)((int)puVar7 + iVar10);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: ZxTBrQivlhdWDKRDPTtsoWNSnrEg_XAViPANgdnVpzRQSNET_ivTTdZD_tcNkMYESIEpbKNzdcYhgkrdTlVZwpYLehjzKijWU
// Entry: 0x71b3e0aa | Size: 152 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

byte * ZxTBrQivlhdWDKRDPTtsoWNSnrEg_XAViPANgdnVpzRQSNET_ivTTdZD_tcNkMYESIEpbKNzdcYhgkrdTlVZwpYLehjzKijWU
                 (uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  
  bVar3 = (byte)*param_1;
  puVar2 = param_1 + 1;
  uVar8 = *puVar2;
  puVar7 = (uint *)param_1[2];
  if ((bVar3 & 1) == 0) {
    uVar8 = (uint)(bVar3 >> 1);
    puVar7 = puVar2;
  }
  uVar5 = (*param_1 & 0xfffffffe) - 1;
  uVar1 = param_2 - (int)puVar7 >> 2;
  if ((bVar3 & 1) == 0) {
    uVar5 = 1;
  }
  if (uVar5 != uVar8) {
    puVar6 = (uint *)param_1[2];
    if ((*param_1 & 1) == 0) {
      puVar6 = puVar2;
    }
    if (uVar8 == uVar1) {
      uVar8 = uVar8 + 1;
      puVar6[uVar1] = param_3;
      puVar6[uVar8] = 0;
      cVar4 = (byte)*param_1 * -0x80;
      if (cVar4 == '\0') {
        *(char *)param_1 = (char)uVar8 * '\x02';
      }
      else {
        *puVar2 = uVar8;
      }
      puVar6 = (uint *)param_1[2];
      if (cVar4 == '\0') {
        puVar6 = puVar2;
      }
      return (byte *)((int)puVar6 + (param_2 - (int)puVar7));
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: J_HeYkAkosmII__lFZVoLYHWcfjOngGmGQpRjSKFmZBxIYhXssCxAGovdUBFp_MTZCs_YooayflP
// Entry: 0x71b3e1a2 | Size: 210 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void J_HeYkAkosmII__lFZVoLYHWcfjOngGmGQpRjSKFmZBxIYhXssCxAGovdUBFp_MTZCs_YooayflP
               (uint *param_1,uint param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  
  puVar7 = param_1 + 1;
  uVar6 = *puVar7;
  cVar1 = (byte)*param_1 * -0x80;
  uVar4 = uVar6;
  if (cVar1 == '\0') {
    uVar4 = (uint)(byte)((byte)*param_1 >> 1);
  }
  if (param_2 <= uVar4) {
    if (cVar1 == '\0') {
      *(byte *)param_1 = (byte)(param_2 << 1);
    }
    else {
      puVar7 = (uint *)param_1[2];
      param_1[1] = param_2;
    }
    puVar7 = puVar7 + param_2;
    goto LAB_71b3e27c;
  }
  param_2 = param_2 - uVar4;
  if (param_2 == 0) {
    return;
  }
  uVar4 = *param_1;
  if ((uVar4 & 1) == 0) {
    uVar6 = (uVar4 & 0xff) >> 1;
  }
  iVar2 = (uVar4 & 0xfffffffe) - 1;
  if (cVar1 == '\0') {
    iVar2 = 1;
  }
  if (iVar2 - uVar6 < param_2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar8 = (uint *)param_1[2];
  if ((uVar4 & 1) == 0) {
    puVar8 = puVar7;
  }
  puVar3 = puVar8 + uVar6;
  uVar4 = param_2;
  if (param_2 < 4) {
LAB_71b3e25c:
    do {
      *puVar3 = param_3;
      uVar4 = uVar4 - 1;
      puVar3 = puVar3 + 1;
    } while (uVar4 != 0);
  }
  else {
    uVar9 = param_2 & 0xfffffffc;
    puVar5 = puVar3 + uVar9;
    uVar4 = uVar9;
    do {
      *(ulonglong *)puVar3 = CONCAT44(param_3,param_3);
      *(ulonglong *)(puVar3 + 2) = CONCAT44(param_3,param_3);
      puVar3 = puVar3 + 4;
      uVar4 = uVar4 - 4;
    } while (uVar4 != 0);
    puVar3 = puVar5;
    uVar4 = param_2 & 3;
    if (param_2 != uVar9) goto LAB_71b3e25c;
  }
  uVar6 = uVar6 + param_2;
  if ((*param_1 & 1) == 0) {
    *(char *)param_1 = (char)uVar6 * '\x02';
  }
  else {
    *puVar7 = uVar6;
  }
  puVar7 = puVar8 + uVar6;
LAB_71b3e27c:
  *puVar7 = 0;
  return;
}


// =========================================================================
// Function: FNHOenrFlxOXpinzqHgkAsUmxThkjkwzqbiZksrOWuYYmLlUQjvu_IqInUzwujEJhJ_D__gjhRB_taReew
// Entry: 0x71b3e2bc | Size: 76 bytes
// =========================================================================

void FNHOenrFlxOXpinzqHgkAsUmxThkjkwzqbiZksrOWuYYmLlUQjvu_IqInUzwujEJhJ_D__gjhRB_taReew
               (undefined4 param_1,undefined4 param_2,byte *param_3,uint param_4,uint param_5)

{
  uint *puVar1;
  char cVar2;
  byte *extraout_r2;
  uint *puVar3;
  uint extraout_r3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar5 = CONCAT44(param_2,param_1);
  puVar1 = (uint *)(param_3 + 4);
  uVar4 = *puVar1;
  cVar2 = *param_3 * -0x80;
  if (cVar2 == '\0') {
    uVar4 = (uint)(*param_3 >> 1);
  }
  if (uVar4 < param_4) {
    uVar4 = 0x71b3e2dd;
    uVar5 = FUN_71b3b8d0();
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  puVar3 = *(uint **)(param_3 + 8);
  if (cVar2 == '\0') {
    puVar3 = puVar1;
  }
  if (uVar4 - param_4 < param_5) {
    param_5 = uVar4 - param_4;
  }
  thunk_kyMIMRoZoyAlZGNbWedNwdgLoqeY_LlMIFvhsZuCgTxrdnjzXFQYcaDYBojxGGpj_RmucHDHmDfPkQE
            ((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),puVar3 + param_4,param_5);
  return;
}


// =========================================================================
// Function: ACPvXABgTDKppmRiQuPVXmvfB_HeOltD_lCwyaDGJj_TyPZR_zqPlpiRxgxdAFbXtfGHEsKfuSmuyghkCdavNUVKpNwbn
// Entry: 0x71b3e354 | Size: 18 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void ACPvXABgTDKppmRiQuPVXmvfB_HeOltD_lCwyaDGJj_TyPZR_zqPlpiRxgxdAFbXtfGHEsKfuSmuyghkCdavNUVKpNwbn
               (void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: JyZeRDnvVhsdaMoaTQPWlqcUmcpkecsFYWUijPqWSpgZVZsCQXmySQWcPylJaAgXob
// Entry: 0x71b3e4b0 | Size: 12 bytes
// =========================================================================

void JyZeRDnvVhsdaMoaTQPWlqcUmcpkecsFYWUijPqWSpgZVZsCQXmySQWcPylJaAgXob(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_basic_string_7006ebe5);
}


// =========================================================================
// Function: zkRsvTzQvNudDanJcdowGigkhYJGhfUxvAfgngmpeoWJugdacJIMpuNXhFaOVcTtIb
// Entry: 0x71b3e510 | Size: 12 bytes
// =========================================================================

void zkRsvTzQvNudDanJcdowGigkhYJGhfUxvAfgngmpeoWJugdacJIMpuNXhFaOVcTtIb(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_71a66fdc(s_basic_string_7006ebe5);
}


// =========================================================================
// Function: MxsKFgqcjpOPaqDHtvQhJAXAMenA_TZfirNtGtgybJvGSfQtbQ_lUzfyHeourtAxe_CbcbtmoFega_mIN
// Entry: 0x71b3e570 | Size: 52 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void MxsKFgqcjpOPaqDHtvQhJAXAMenA_TZfirNtGtgybJvGSfQtbQ_lUzfyHeourtAxe_CbcbtmoFega_mIN(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: jHxGCnnrPvpkEODXDkpANbmaIewUvshngGGXb_yLLMjJSOyrobVyAyEKsozDxrWkqGhVnOMBouLuGfjMn
// Entry: 0x71b3e75c | Size: 52 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void jHxGCnnrPvpkEODXDkpANbmaIewUvshngGGXb_yLLMjJSOyrobVyAyEKsozDxrWkqGhVnOMBouLuGfjMn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: nDmKhFVTvKCzBenMawEJqAUTCKuXBdwsfqWjcBrepgnCmrMqHqvyNezZZYLKOTNkHCOBQdamdSoxM_haxX
// Entry: 0x71b3e948 | Size: 54 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void nDmKhFVTvKCzBenMawEJqAUTCKuXBdwsfqWjcBrepgnCmrMqHqvyNezZZYLKOTNkHCOBQdamdSoxM_haxX(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: goZqHStFRaIl_WzLfmIivTpzpnCQJOiwmuHUOuImRsHZAyHkNfmyWNDFzbrdavxtaa_UYJarLbANXMenko
// Entry: 0x71b3ebcc | Size: 54 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void goZqHStFRaIl_WzLfmIivTpzpnCQJOiwmuHUOuImRsHZAyHkNfmyWNDFzbrdavxtaa_UYJarLbANXMenko(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: RonwHAMfFkfHePDZsQbfotdXpZPBAQoByTKOHanuViHMotzDKNwxXwCpAKVkGpBVVUJqMnXd_RukzmaqRIk
// Entry: 0x71b3ee54 | Size: 60 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void RonwHAMfFkfHePDZsQbfotdXpZPBAQoByTKOHanuViHMotzDKNwxXwCpAKVkGpBVVUJqMnXd_RukzmaqRIk(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: IRTiqGrueLKDHelOkrxCRQFaZbhFNydzOQQGtgyNjAoTh_SfKMfpOxRORvPGBHNRWXvBsgurjtcMKiOi
// Entry: 0x71b3f0e0 | Size: 50 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void IRTiqGrueLKDHelOkrxCRQFaZbhFNydzOQQGtgyNjAoTh_SfKMfpOxRORvPGBHNRWXvBsgurjtcMKiOi(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: WzzKh_JGrkQoXUlpVBGmXvUfkbaHMYFdrOOMCqyyZgCNOsWllVELOhouWwsvcgUFmTonCULHXuXnxvRh
// Entry: 0x71b3f358 | Size: 50 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void WzzKh_JGrkQoXUlpVBGmXvUfkbaHMYFdrOOMCqyyZgCNOsWllVELOhouWwsvcgUFmTonCULHXuXnxvRh(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: XcDIvszLEexeZMlCebuejVBTYxAGkPPKaonQk_USeFsbcBGM_enlpTlUwQObKVjoykOeuqZjNNIjLIsxS
// Entry: 0x71b3f5d4 | Size: 52 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void XcDIvszLEexeZMlCebuejVBTYxAGkPPKaonQk_USeFsbcBGM_enlpTlUwQObKVjoykOeuqZjNNIjLIsxS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: gJWWOpYIykJHKVPDmpjxrPbFjFQyubmLYmozoDpT_k_ZqpjYTlTQpnINxJNakqRUXIYxbUmowtrfWYzFB
// Entry: 0x71b3f858 | Size: 52 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void gJWWOpYIykJHKVPDmpjxrPbFjFQyubmLYmozoDpT_k_ZqpjYTlTQpnINxJNakqRUXIYxbUmowtrfWYzFB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: LvdLZBMdUhCAcwiXKGDhaiheGgILwLirCZVRBQyhkUYucqFGDMnkNP_fcBeYTVnjnfBjTjYpdtJiPPbIh
// Entry: 0x71b3fa44 | Size: 52 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void LvdLZBMdUhCAcwiXKGDhaiheGgILwLirCZVRBQyhkUYucqFGDMnkNP_fcBeYTVnjnfBjTjYpdtJiPPbIh(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: vcq_YjvKIqsbClkOJwFRaiWejXmFVVNqItTWHFqGv_dFDfSLwGqxDxwhrHBwXqKioXorzamGADZKnlPxTK
// Entry: 0x71b3fc30 | Size: 54 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void vcq_YjvKIqsbClkOJwFRaiWejXmFVVNqItTWHFqGv_dFDfSLwGqxDxwhrHBwXqKioXorzamGADZKnlPxTK(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


