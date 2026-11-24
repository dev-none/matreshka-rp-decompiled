// Function: mz_adler32
// Entry: 00106fa0

uint mz_adler32(ulong param_1,byte *param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar11;
  
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  uVar11 = param_1 >> 0x10;
  uVar10 = (uint)(param_1 >> 0x10);
  uVar12 = (uint)param_1 & 0xffff;
  if (param_3 != 0) {
    uVar9 = param_3 % 0x15b0;
    do {
      if (uVar9 < 8) {
        uVar15 = uVar9;
        uVar14 = uVar9;
        pbVar8 = param_2;
        if (uVar9 != 0) goto LAB_001070b4;
      }
      else {
        uVar13 = 0;
        do {
          pbVar8 = param_2 + uVar13;
          uVar13 = uVar13 + 8;
          iVar1 = uVar12 + *pbVar8;
          iVar2 = iVar1 + (uint)pbVar8[1];
          iVar3 = iVar2 + (uint)pbVar8[2];
          iVar4 = iVar3 + (uint)pbVar8[3];
          iVar5 = iVar4 + (uint)pbVar8[4];
          iVar6 = iVar5 + (uint)pbVar8[5];
          iVar7 = iVar6 + (uint)pbVar8[6];
          uVar12 = iVar7 + (uint)pbVar8[7];
          uVar11 = (ulong)(iVar1 + (int)uVar11 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 +
                          uVar12);
        } while ((int)uVar13 + 7U < (uint)uVar9);
        param_2 = param_2 + uVar13;
        uVar15 = uVar9 - (uVar13 & 0xffffffff);
        uVar14 = uVar15;
        pbVar8 = param_2;
        if ((uVar13 & 0xffffffff) <= uVar9 && uVar15 != 0) {
LAB_001070b4:
          do {
            uVar15 = uVar15 - 1;
            uVar12 = uVar12 + *param_2;
            uVar11 = (ulong)(uVar12 + (int)uVar11);
            param_2 = param_2 + 1;
          } while (uVar15 != 0);
          param_2 = pbVar8 + uVar14;
        }
      }
      param_3 = param_3 - uVar9;
      uVar9 = 0x15b0;
      uVar12 = uVar12 % 0xfff1;
      uVar10 = (int)uVar11 + (int)((uVar11 & 0xffffffff) / 0xfff1) * -0xfff1;
      uVar11 = (ulong)uVar10;
    } while (param_3 != 0);
  }
  return uVar12 | uVar10 << 0x10;
}


