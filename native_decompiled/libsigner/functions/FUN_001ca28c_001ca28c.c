// Function: FUN_001ca28c
// Entry: 001ca28c

int FUN_001ca28c(byte *param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  byte *in_x17;
  uint uVar15;
  byte *unaff_x28;
  byte *unaff_x29;
  byte *unaff_x30;
  
  pbVar13 = (byte *)0x12b21488b9618371;
  uVar9 = 0;
  uVar15 = 0;
  pbVar2 = pbVar13;
  if (*param_1 != 0) {
    pbVar2 = &DAT_6b9fb694821e6034;
  }
  pbVar7 = param_2;
  pbVar4 = (byte *)0x3f365012db6b56c1;
  pbVar5 = pbVar2;
  uVar6 = 0;
  uVar10 = 0;
  uVar11 = 0;
  do {
    while( true ) {
      while( true ) {
        while (uVar14 = uVar6, pbVar12 = pbVar5, pbVar8 = pbVar4, pbVar4 = pbVar8, pbVar5 = pbVar12,
              uVar6 = uVar14, (long)pbVar8 < 0x3a4ee4b4cd18045) {
          if ((long)pbVar8 < -0x21f9ff0f3589e147) {
            pbVar4 = (byte *)0x4c1b9edb721e7222;
            pbVar5 = unaff_x28;
            uVar6 = uVar11;
            if (((pbVar8 != (byte *)0xa0d7c67c60e7a82e) && (pbVar8 != (byte *)0xcb528befcd0fb52f))
               && (pbVar4 = pbVar8, pbVar5 = pbVar12, uVar6 = uVar14,
                  pbVar8 == (byte *)0xd937f9741a083d9f)) {
              pbVar4 = (byte *)0x4c1b9edb721e7222;
              pbVar5 = pbVar13;
              uVar6 = 0;
            }
          }
          else if ((long)pbVar8 < -0x1adb7dcf41534880) {
            pbVar4 = (byte *)0xe5248230beacb780;
            if ((pbVar8 != (byte *)0xde0600f0ca761eb9) &&
               (pbVar4 = pbVar8, pbVar8 == (byte *)0xe156d0b4a667ab8e)) {
              uVar14 = param_3;
              if (0xffffffe5 < param_3 - 0x5b) {
                uVar14 = param_3 | 0x20;
              }
              uVar1 = uVar9;
              if (0xffffffe5 < uVar9 - 0x5b) {
                uVar1 = uVar9 | 0x20;
              }
              pbVar4 = (byte *)0x2467c250713f82d4;
              if (uVar14 != uVar1) {
                pbVar4 = (byte *)0xa0d7c67c60e7a82e;
              }
            }
          }
          else if (pbVar8 == (byte *)0xe5248230beacb780) {
            unaff_x29 = in_x17 + 1;
            uVar15 = (uint)*unaff_x29;
            pbVar13 = unaff_x28 + 1;
            pbVar4 = (byte *)0xd937f9741a083d9f;
            if (uVar15 != 0) {
              pbVar4 = (byte *)0xf8b8c954db367ca1;
            }
          }
          else if (pbVar8 == (byte *)0xf8b8c954db367ca1) {
            pbVar7 = pbVar13;
            pbVar4 = (byte *)0x3a4ee4b4cd18045;
            unaff_x30 = unaff_x29;
            uVar10 = uVar15;
          }
        }
        if (0x3f365012db6b56c0 < (long)pbVar8) break;
        if (pbVar8 == (byte *)0x3a4ee4b4cd18045) {
          uVar9 = (uint)*pbVar7;
          pbVar4 = (byte *)0xcb528befcd0fb52f;
          in_x17 = unaff_x30;
          unaff_x28 = pbVar7;
          uVar11 = uVar10;
          param_3 = uVar10;
          if (uVar9 != 0) {
            pbVar4 = (byte *)0x5e1b922e6e5165fd;
          }
        }
        else if (pbVar8 == (byte *)0x12b21488b9618371) {
          pbVar4 = (byte *)0x4c1b9edb721e7222;
          pbVar5 = param_2;
          uVar6 = 0;
        }
        else if (pbVar8 == (byte *)0x2467c250713f82d4) {
          pbVar4 = (byte *)0xe5248230beacb780;
        }
      }
      if ((long)pbVar8 < 0x5e1b922e6e5165fd) break;
      if (pbVar8 == (byte *)0x5e1b922e6e5165fd) {
        pbVar4 = (byte *)0xde0600f0ca761eb9;
        if (uVar11 != uVar9) {
          pbVar4 = (byte *)0xe156d0b4a667ab8e;
        }
      }
      else if (pbVar8 == &DAT_6b9fb694821e6034) {
        pbVar7 = param_2;
        pbVar4 = (byte *)0x3a4ee4b4cd18045;
        unaff_x30 = param_1;
        uVar10 = (uint)*param_1;
      }
    }
    pbVar4 = pbVar2;
  } while ((pbVar8 == (byte *)0x3f365012db6b56c1) ||
          (pbVar4 = pbVar8, pbVar8 != (byte *)0x4c1b9edb721e7222));
  bVar3 = *pbVar12;
  if (0xffffffe5 < uVar14 - 0x5b) {
    uVar14 = uVar14 | 0x20;
  }
  uVar9 = (uint)bVar3;
  if (0xffffffe5 < bVar3 - 0x5b) {
    uVar9 = bVar3 | 0x20;
  }
  return uVar14 - uVar9;
}


