// Function: FUN_001d4f30
// Entry: 001d4f30

byte * FUN_001d4f30(byte *param_1,uint *param_2,byte *param_3,byte *param_4,undefined8 param_5,
                   byte *param_6)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  byte bVar4;
  uint uVar5;
  bool bVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  uint in_w11;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  byte *unaff_x22;
  byte *local_108;
  byte local_fc;
  uint local_f8;
  byte local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  byte *local_e0;
  byte *local_d8;
  byte local_cc;
  byte *local_c8;
  byte local_bc;
  byte *local_b8;
  uint local_a4;
  byte *local_a0;
  byte local_98;
  byte local_94;
  byte *local_90;
  uint local_84;
  byte *local_80;
  uint uVar6;
  
  uVar8 = *param_2;
  pbVar2 = (byte *)0xae2d64bf93f1b31a;
  if ((char)uVar8 != '\0') {
    pbVar2 = (byte *)0x7772f905052e4c0f;
  }
  pbVar13 = param_1;
  pbVar14 = (byte *)0x21d53de2b345f472;
  pbVar1 = (byte *)0xae2d64bf93f1b31a;
LAB_001d50b0:
  uVar17 = in_w11;
  pbVar16 = pbVar1;
  pbVar15 = pbVar14;
  pbVar10 = param_4;
  pbVar11 = param_3;
  pbVar9 = pbVar13;
  pbVar12 = (byte *)0x0;
  pbVar13 = pbVar9;
  param_3 = pbVar11;
  param_4 = pbVar10;
  pbVar14 = pbVar15;
  pbVar1 = pbVar16;
  in_w11 = uVar17;
  if ((long)pbVar15 < -0x74736ab24c9835f) {
    if (-0x34ad741032f04ad2 < (long)pbVar15) {
      if ((long)pbVar15 < -0x23922d8f9e1450cc) {
        if ((long)pbVar15 < -0x26c8068be5f7c261) {
          if (pbVar15 == (byte *)0xcb528befcd0fb52f) {
            local_bc = *(byte *)((long)param_2 + 2);
            pbVar14 = (byte *)0x5e1b922e6e5165fd;
            if (local_bc != 0) {
              pbVar14 = &DAT_2b590051c346d3e;
            }
          }
          else if (pbVar15 == (byte *)0xd136b47bc732bd2b) {
            local_a0 = local_d8;
            local_a4 = local_f8;
LAB_001d57d4:
            pbVar14 = (byte *)0x8b5d2aa4730e6d53;
          }
        }
        else {
          param_3 = local_90;
          pbVar14 = (byte *)0x4c1b9edb721e7222;
          if ((pbVar15 != (byte *)0xd937f9741a083d9f) &&
             (param_3 = pbVar11, pbVar14 = pbVar15, pbVar15 == (byte *)0xdbbbecaa54122c5b)) {
            local_ec = (uint)local_94 << 0x10 | (uint)local_bc << 8 | (uint)(byte)*param_2 << 0x18;
            local_f0 = (uint)local_98 << 0x10 | (uint)local_cc << 8 | (uint)*unaff_x22 << 0x18;
            pbVar14 = &DAT_1b767e91f4196530;
            if (local_f0 != local_ec) {
              pbVar14 = (byte *)0x932656effdaaeaa5;
            }
          }
        }
      }
      else if ((long)pbVar15 < -0x1ea92f4b59985472) {
        if (pbVar15 == (byte *)0xdc6dd27061ebaf34) goto LAB_001d5adc;
        if (pbVar15 == (byte *)0xde0600f0ca761eb9) {
          pbVar14 = (byte *)0xa0d7c67c60e7a82e;
          pbVar1 = local_b8;
          in_w11 = local_e8;
        }
      }
      else {
        param_3 = unaff_x22;
        pbVar14 = (byte *)0x4c1b9edb721e7222;
        if (pbVar15 != (byte *)0xe156d0b4a667ab8e) {
          if (pbVar15 == (byte *)0xe5248230beacb780) {
            param_3 = pbVar11;
            pbVar14 = (byte *)0xd937f9741a083d9f;
            if ((local_f4 & 1) == 0) {
              pbVar14 = (byte *)0xf8b8c954db367ca1;
            }
          }
          else {
            param_3 = pbVar11;
            pbVar14 = pbVar15;
            if (pbVar15 == (byte *)0xe86a3cb2672328c3) {
LAB_001d5ae4:
              pbVar13 = pbVar10;
              param_3 = pbVar11;
              pbVar14 = (byte *)0x43d4efcefc88fa10;
            }
          }
        }
      }
      goto LAB_001d50b0;
    }
    if ((long)pbVar15 < -0x6e8c5e03a6cc6a6b) {
      if ((long)pbVar15 < -0x74e2530989c025ef) {
        if (pbVar15 == (byte *)0x82d6800f37fa837b) {
          pbVar14 = (byte *)0x55d58c2b8d472655;
          if (unaff_x22[3] != 0) {
            pbVar14 = (byte *)0x57dab7dd661b1869;
          }
        }
        else if (pbVar15 == (byte *)0x87fde1166a77f06e) goto LAB_001d5adc;
        goto LAB_001d50b0;
      }
      if (pbVar15 == (byte *)0x8b1dacf6763fda11) {
        pbVar14 = (byte *)0xdbbbecaa54122c5b;
        if (*(char *)((long)param_2 + 3) != '\0') {
          pbVar14 = (byte *)0x82d6800f37fa837b;
        }
        goto LAB_001d50b0;
      }
      if (pbVar15 != (byte *)0x8b5d2aa4730e6d53) goto LAB_001d50b0;
      local_108 = local_a0;
      local_d8 = local_a0 + 1;
      local_fc = *local_d8 != 0;
      pbVar14 = (byte *)0xd136b47bc732bd2b;
      local_f8 = (local_a4 | *local_d8) << 8;
      bVar7 = (bool)local_fc && local_f8 != local_ec;
      pbVar12 = (byte *)0x1db1d1f44155ec69;
    }
    else {
      if ((long)pbVar15 < -0x5f2839839f1857d2) {
        if (pbVar15 == (byte *)0x9173a1fc59339595) {
          pbVar10 = (byte *)FUN_001d5f88(unaff_x22);
          goto LAB_001d5ae4;
        }
        if (pbVar15 == (byte *)0x932656effdaaeaa5) {
          local_a0 = local_c8;
          local_a4 = local_f0;
          goto LAB_001d57d4;
        }
        goto LAB_001d50b0;
      }
      if (pbVar15 != (byte *)0xa0d7c67c60e7a82e) {
        pbVar13 = param_1;
        pbVar14 = (byte *)0x43d4efcefc88fa10;
        if ((pbVar15 != (byte *)0xae2d64bf93f1b31a) &&
           (pbVar13 = pbVar9, pbVar14 = pbVar15, pbVar15 == (byte *)0xc0eb019135e10a40))
        goto LAB_001d5adc;
        goto LAB_001d50b0;
      }
      local_80 = pbVar16 + 1;
      local_f4 = *local_80 != 0;
      local_84 = (uVar17 & 0xff) << 8 | (uint)*local_80;
      bVar7 = (bool)local_f4 && local_84 != local_e4;
      pbVar12 = (byte *)0xe5248230beacb780;
      pbVar14 = (byte *)0x2467c250713f82d4;
      local_90 = pbVar16;
    }
    if (!bVar7) {
      pbVar14 = pbVar12;
    }
    goto LAB_001d50b0;
  }
  if (0x3f365012db6b56c0 < (long)pbVar15) {
    if ((long)pbVar15 < 0x5e1b922e6e5165fd) {
      if ((long)pbVar15 < 0x55d58c2b8d472655) {
        if (pbVar15 == (byte *)0x3f365012db6b56c1) {
          local_94 = *(byte *)((long)param_2 + 1);
          pbVar14 = &DAT_6b9fb694821e6034;
          if (local_94 != 0) {
            pbVar14 = (byte *)0x12b21488b9618371;
          }
        }
        else {
          pbVar13 = pbVar11;
          pbVar14 = (byte *)0x43d4efcefc88fa10;
          if ((pbVar15 != (byte *)0x4c1b9edb721e7222) &&
             (pbVar13 = pbVar9, pbVar14 = pbVar15, pbVar15 == (byte *)0x43d4efcefc88fa10)) {
            return pbVar9;
          }
        }
      }
      else {
        if (pbVar15 == (byte *)0x55d58c2b8d472655) goto LAB_001d5adc;
        if (pbVar15 == (byte *)0x57dab7dd661b1869) {
          pbVar14 = (byte *)0x2ac799c399899ac3;
          if ((char)param_2[1] != '\0') {
            pbVar14 = (byte *)0x9173a1fc59339595;
          }
        }
      }
    }
    else if ((long)pbVar15 < 0x6b9fb694821e6034) {
      if (pbVar15 == (byte *)0x5e1b922e6e5165fd) {
        local_e4 = (uint)CONCAT11((char)*param_2,local_94);
        local_e8 = (uint)CONCAT11(*unaff_x22,local_98);
        pbVar14 = (byte *)0xe156d0b4a667ab8e;
        if (local_e8 != local_e4) {
          pbVar14 = (byte *)0xde0600f0ca761eb9;
        }
      }
      else if (pbVar15 == (byte *)0x5e9249b5376f08fa) {
        param_4 = local_e0;
        pbVar14 = (byte *)0xe86a3cb2672328c3;
      }
    }
    else {
      pbVar13 = unaff_x22;
      pbVar14 = (byte *)0x43d4efcefc88fa10;
      if ((pbVar15 != &DAT_6b9fb694821e6034) &&
         (pbVar13 = pbVar9, pbVar14 = pbVar15, pbVar15 == (byte *)0x7772f905052e4c0f)) {
        unaff_x22 = (byte *)FUN_001d14a8(param_1,(char)uVar8);
        pbVar14 = (byte *)0xdc6dd27061ebaf34;
        if (unaff_x22 != (byte *)0x0) {
          pbVar14 = (byte *)0x3f365012db6b56c1;
        }
      }
    }
    goto LAB_001d50b0;
  }
  if (0x1b767e91f419652f < (long)pbVar15) {
    if ((long)pbVar15 < 0x21d53de2b345f472) {
      param_4 = unaff_x22;
      pbVar14 = (byte *)0xe86a3cb2672328c3;
      if ((pbVar15 != &DAT_1b767e91f4196530) &&
         (param_4 = pbVar10, pbVar14 = pbVar15, pbVar15 == (byte *)0x1db1d1f44155ec69)) {
        local_e0 = local_108 + -1;
        pbVar14 = (byte *)0x5e9249b5376f08fa;
        if ((local_fc & 1) == 0) {
          pbVar14 = (byte *)0x87fde1166a77f06e;
        }
      }
    }
    else {
      pbVar14 = pbVar2;
      if (((pbVar15 != (byte *)0x21d53de2b345f472) &&
          (pbVar14 = (byte *)0xa0d7c67c60e7a82e, pbVar1 = local_80, in_w11 = local_84,
          pbVar15 != (byte *)0x2467c250713f82d4)) &&
         (pbVar14 = pbVar15, pbVar1 = pbVar16, in_w11 = uVar17,
         pbVar15 == (byte *)0x2ac799c399899ac3)) {
        pbVar13 = unaff_x22 + 3;
        bVar4 = *pbVar13;
        uVar18 = (uint)bVar4;
        uVar5 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
        uVar6 = uVar5 >> 0x10 | uVar5 << 0x10;
        uVar19 = (uint)bVar4;
        uVar5 = (uint)*unaff_x22 << 0x18 | (uint)unaff_x22[1] << 0x10 | (uint)unaff_x22[2] << 8 |
                uVar19;
        lVar3 = 0x862419eaecdf1a5;
        if (uVar19 == 0 || uVar5 == uVar6) {
          lVar3 = -0x6ebe183313cbdcac;
        }
        lVar22 = -0x4c59a4c035b3e8e;
        pbVar14 = (byte *)0x1b767e91f419652f;
        uVar21 = 0x6e5165fc;
LAB_001d52a8:
        do {
          pbVar1 = pbVar14 + 1;
          do {
            while( true ) {
              while( true ) {
                while (lVar23 = lVar22, lVar22 = lVar23, lVar23 < 0x4a5cd72dc1a18f6) {
                  if (lVar23 == -0x6ebe183313cbdcac) {
                    pbVar11 = (byte *)(ulong)(uVar19 != 0);
                    lVar22 = 0x6dbb77d6245fbf6c;
                    pbVar9 = pbVar13;
                    goto LAB_001d52a8;
                  }
                  lVar22 = lVar3;
                  if ((lVar23 != -0x4c59a4c035b3e8e) &&
                     (lVar22 = lVar23, lVar23 == 0x408409b1e5ac055)) {
                    lVar22 = 0x6dbb77d6245fbf6c;
                    pbVar9 = param_6;
                    pbVar11 = pbVar12;
                    goto LAB_001d52a8;
                  }
                }
                if (lVar23 < 0x26c60fa523ddda4b) break;
                if (lVar23 == 0x26c60fa523ddda4b) {
                  lVar22 = 0x4a5cd72dc1a18f6;
                  pbVar14 = param_6;
                  uVar21 = uVar18;
                  goto LAB_001d52a8;
                }
                if (lVar23 == 0x6dbb77d6245fbf6c) {
                  pbVar13 = pbVar9 + -3;
                  if (((ulong)pbVar11 & 1) == 0) {
                    pbVar13 = (byte *)0x0;
                  }
                  pbVar14 = (byte *)0x43d4efcefc88fa10;
                  pbVar1 = pbVar16;
                  goto LAB_001d50b0;
                }
              }
              if (lVar23 != 0x4a5cd72dc1a18f6) break;
              uVar20 = (uint)*pbVar1;
              uVar18 = uVar21 << 8 | uVar20;
              pbVar12 = (byte *)(ulong)(uVar20 != 0);
              param_6 = pbVar1;
              lVar22 = 0x26c60fa523ddda4b;
              if (uVar20 == 0 || uVar18 == uVar6) {
                lVar22 = 0x408409b1e5ac055;
              }
            }
          } while (lVar23 != 0x862419eaecdf1a5);
          lVar22 = 0x4a5cd72dc1a18f6;
          pbVar14 = pbVar13;
          uVar21 = uVar5;
        } while( true );
      }
    }
    goto LAB_001d50b0;
  }
  if ((long)pbVar15 < 0x3a4ee4b4cd18045) {
    if (pbVar15 != (byte *)0xf8b8c954db367ca1) {
      if (pbVar15 == &DAT_2b590051c346d3e) {
        local_c8 = unaff_x22 + 2;
        local_cc = *local_c8;
        pbVar14 = (byte *)0xc0eb019135e10a40;
        if (local_cc != 0) {
          pbVar14 = (byte *)0x8b1dacf6763fda11;
        }
      }
      goto LAB_001d50b0;
    }
  }
  else if (pbVar15 != (byte *)0x3a4ee4b4cd18045) {
    if (pbVar15 == (byte *)0x12b21488b9618371) {
      local_b8 = unaff_x22 + 1;
      local_98 = *local_b8;
      pbVar14 = (byte *)0x3a4ee4b4cd18045;
      if (local_98 != 0) {
        pbVar14 = (byte *)0xcb528befcd0fb52f;
      }
    }
    goto LAB_001d50b0;
  }
LAB_001d5adc:
  pbVar10 = (byte *)0x0;
  goto LAB_001d5ae4;
}


