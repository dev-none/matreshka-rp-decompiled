// Function: FUN_001cb8f0
// Entry: 001cb8f0

int FUN_001cb8f0(byte *param_1,byte *param_2,long param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  long lVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  byte *in_x15;
  byte *in_x17;
  byte *unaff_x24;
  long unaff_x25;
  byte *unaff_x26;
  byte *unaff_x27;
  byte *pbVar16;
  uint uVar17;
  int local_64;
  
  uVar11 = 0;
  uVar15 = 0;
  pbVar1 = &DAT_965cf93a9dddb88a;
  if (param_3 != 0) {
    pbVar1 = (byte *)0x28a29c505fd0878c;
  }
  pbVar2 = param_1;
  lVar3 = param_3;
  pbVar4 = &DAT_965cf93a9dddb88a;
  pbVar13 = (byte *)0x33970f856d03deee;
  uVar5 = 0;
  uVar9 = 0;
  uVar6 = 0;
LAB_001cb9cc:
  do {
    while (uVar17 = uVar6, uVar12 = uVar5, pbVar16 = unaff_x27, pbVar10 = pbVar13, pbVar14 = pbVar4,
          lVar8 = lVar3, pbVar7 = pbVar2, pbVar2 = pbVar7, lVar3 = lVar8, pbVar4 = pbVar14,
          unaff_x27 = pbVar16, uVar5 = uVar12, uVar6 = uVar17, 0x2e7820ff94f2299d < (long)pbVar10) {
      if ((long)pbVar10 < 0x55488ab70f6983fa) {
        if (pbVar10 == (byte *)0x2e7820ff94f2299e) {
          local_64 = uVar12 - *pbVar16;
LAB_001cb9b8:
          pbVar13 = (byte *)0xba6e2acce79821e0;
          unaff_x27 = pbVar16;
          uVar5 = uVar12;
        }
        else {
          pbVar13 = pbVar1;
          if ((pbVar10 != (byte *)0x33970f856d03deee) &&
             (pbVar13 = pbVar10, pbVar10 == (byte *)0x5427e3fe8053026a)) {
            unaff_x25 = lVar8 + -1;
            in_x15 = pbVar7;
            in_x17 = pbVar14;
            pbVar13 = (byte *)0x55488ab70f6983fa;
            uVar9 = uVar17;
            if ((uVar17 != *pbVar14 || unaff_x25 == 0) || *pbVar14 == 0) {
              pbVar13 = (byte *)0x8497e9c855873224;
            }
          }
        }
      }
      else if (pbVar10 == (byte *)0x55488ab70f6983fa) {
        unaff_x24 = in_x15 + 1;
        uVar15 = (uint)*unaff_x24;
        unaff_x26 = in_x17 + 1;
        pbVar10 = (byte *)0x5701972a5c88a65c;
        pbVar13 = (byte *)0x7e7f415062326f70;
        uVar12 = uVar15;
LAB_001cbd2c:
        pbVar2 = pbVar7;
        lVar3 = lVar8;
        pbVar4 = pbVar14;
        uVar6 = uVar17;
        if (uVar12 != 0) {
          pbVar13 = pbVar10;
        }
      }
      else {
        pbVar2 = unaff_x24;
        lVar3 = unaff_x25;
        pbVar4 = unaff_x26;
        pbVar13 = (byte *)0x5427e3fe8053026a;
        uVar6 = uVar15;
        if ((pbVar10 != (byte *)0x5701972a5c88a65c) &&
           (pbVar2 = pbVar7, lVar3 = lVar8, pbVar4 = pbVar14, pbVar13 = pbVar10, pbVar16 = unaff_x26
           , uVar6 = uVar17, pbVar10 == (byte *)0x7e7f415062326f70)) goto LAB_001cbcd4;
      }
    }
    if (-0x4537a5bdd09230d9 < (long)pbVar10) {
      pbVar2 = param_1;
      lVar3 = param_3;
      pbVar4 = param_2;
      pbVar13 = (byte *)0x5427e3fe8053026a;
      uVar6 = uVar11;
      if (pbVar10 != (byte *)0xbac85a422f6dcf28) {
        pbVar16 = param_2;
        if (pbVar10 == (byte *)0xd7a28745f3a8fb05) {
LAB_001cbcd4:
          pbVar2 = pbVar7;
          lVar3 = lVar8;
          pbVar4 = pbVar14;
          pbVar13 = (byte *)0x2e7820ff94f2299e;
          unaff_x27 = pbVar16;
          uVar5 = 0;
          uVar6 = uVar17;
        }
        else {
          pbVar2 = pbVar7;
          lVar3 = lVar8;
          pbVar4 = pbVar14;
          pbVar13 = pbVar10;
          uVar6 = uVar17;
          if (pbVar10 == (byte *)0x28a29c505fd0878c) {
            uVar11 = (uint)*param_1;
            pbVar10 = (byte *)0xbac85a422f6dcf28;
            pbVar13 = (byte *)0xd7a28745f3a8fb05;
            uVar12 = uVar11;
            goto LAB_001cbd2c;
          }
        }
      }
      goto LAB_001cb9cc;
    }
    pbVar13 = (byte *)0x2e7820ff94f2299e;
    unaff_x27 = in_x17;
    uVar5 = uVar9;
    if (pbVar10 != (byte *)0x8497e9c855873224) {
      if (pbVar10 == &DAT_965cf93a9dddb88a) {
        local_64 = 0;
        goto LAB_001cb9b8;
      }
      pbVar13 = pbVar10;
      unaff_x27 = pbVar16;
      uVar5 = uVar12;
      if (pbVar10 == (byte *)0xba6e2acce79821e0) {
        return local_64;
      }
    }
  } while( true );
}


