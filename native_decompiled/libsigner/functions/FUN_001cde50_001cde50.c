// Function: FUN_001cde50
// Entry: 001cde50

byte * FUN_001cde50(byte *param_1,byte *param_2,undefined8 *param_3,byte *param_4,byte *param_5)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  byte *pbVar12;
  uint uVar13;
  long lVar14;
  byte *in_x13;
  byte *pbVar15;
  ulong uVar16;
  uint uVar17;
  byte *unaff_x19;
  byte *pbVar18;
  uint uVar19;
  byte *unaff_x22;
  byte *pbVar20;
  byte *unaff_x23;
  byte *pbVar21;
  byte *unaff_x27;
  byte *pbVar22;
  byte *unaff_x30;
  byte *pbVar23;
  byte *local_1b0;
  byte *local_1a8;
  byte local_19c;
  byte *local_198;
  byte *local_190;
  byte *local_188;
  byte *local_180;
  uint local_174;
  byte *local_168;
  byte *local_160;
  byte *local_158;
  byte *local_150;
  byte *local_148;
  byte *local_140;
  uint local_134;
  byte *local_130;
  byte *local_128;
  byte *local_120;
  byte *local_118;
  byte *local_110;
  byte *local_108;
  byte *local_100;
  byte *local_f8;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  byte *local_d8;
  uint local_cc;
  byte *local_c0;
  byte *local_b8;
  ulong local_b0 [10];
  
  local_cc = 0;
  local_e4 = 0;
  local_ec = 0;
  local_134 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_174 = 0;
  lVar2 = tpidr_el0;
  lVar1 = -0x3904f4d3e6e92c9d;
  if (param_1 != (byte *)0x0) {
    lVar1 = 0x5dcf9f1451efb870;
  }
  local_b0[8] = *(long *)(lVar2 + 0x28);
  pbVar3 = param_1;
  uVar4 = 0;
  lVar14 = 0x60097c96feb43b65;
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
LAB_001cdf8c:
  while( true ) {
    uVar17 = uVar7;
    uVar19 = uVar6;
    uVar13 = uVar5;
    pbVar23 = unaff_x30;
    pbVar22 = unaff_x27;
    pbVar21 = unaff_x23;
    pbVar20 = unaff_x22;
    lVar11 = lVar14;
    pbVar18 = unaff_x19;
    pbVar15 = in_x13;
    pbVar10 = param_5;
    pbVar9 = param_4;
    uVar16 = uVar4;
    pbVar12 = pbVar3;
    lVar14 = lVar11;
    pbVar3 = pbVar12;
    uVar4 = uVar16;
    param_4 = pbVar9;
    param_5 = pbVar10;
    in_x13 = pbVar15;
    unaff_x19 = pbVar18;
    unaff_x22 = pbVar20;
    unaff_x23 = pbVar21;
    unaff_x27 = pbVar22;
    unaff_x30 = pbVar23;
    uVar5 = uVar13;
    uVar6 = uVar19;
    uVar7 = uVar17;
    if (lVar11 < -0x2c21dff77979008) break;
    if (lVar11 < 0x49bfb75441afda81) {
      if (lVar11 < 0x1ca1c4df0658c90c) {
        if (lVar11 < 0x99a64c8bb0943be) {
          if (lVar11 == -0x2c21dff77979008) {
            local_118 = (byte *)0x0;
            goto LAB_001cf614;
          }
          if (lVar11 == -0x28634e0beea7acd) {
            local_f8 = pbVar15 + 1;
            bVar8 = *local_f8 == 0;
            lVar14 = -0x68fcbb577ac8ebb5;
            lVar11 = 0x6a637c125f65a76b;
            goto LAB_001cdf80;
          }
          if (lVar11 == -0x1787ea94ea6448e) {
            pbVar3 = local_188;
            lVar14 = 0x67d7fb9a0fcfedef;
          }
        }
        else if (lVar11 < 0x1967d52db0437643) {
          if (lVar11 == 0x99a64c8bb0943be) {
            local_cc = (uint)*param_2;
            local_19c = local_cc == 0;
            lVar14 = -0x1d79d347f33a6cf9;
            if (!(bool)local_19c) {
              lVar14 = -0x617ea1f144a91e55;
            }
            local_b0[1] = 0;
            local_b0[0] = 0;
            local_b0[3] = 0;
            local_b0[2] = 0;
            local_c0 = pbVar21;
          }
          else if (lVar11 == 0x178e5d451f8af4fe) {
            lVar14 = -0x2c21dff77979008;
          }
        }
        else if (lVar11 == 0x1967d52db0437643) {
          local_118 = local_168;
          *param_3 = local_198 + 1;
          *local_198 = 0;
          lVar14 = 0x1bce23f05448fc72;
        }
        else if (lVar11 == 0x1bce23f05448fc72) {
          if (*(long *)(lVar2 + 0x28) != local_b0[8]) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return local_118;
        }
      }
      else if (lVar11 < 0x2ab93652bc5e6aed) {
        lVar14 = -0x2c21dff77979008;
        if (lVar11 != 0x1ca1c4df0658c90c) {
          if (lVar11 == 0x1f03c9be91893b24) {
            local_1b0 = local_148;
            local_190 = local_148 + 1;
            lVar14 = -0x2385ce133751e9ac;
            lVar11 = -0x1f8eee9a244ffc80;
            bVar8 = true;
            if (*local_148 != local_cc) {
              bVar8 = *local_148 == 0;
            }
            goto LAB_001cdf80;
          }
          lVar14 = lVar11;
          if (lVar11 == 0x2562ff29debb7f8d) {
            uVar4 = (ulong)local_174;
            param_4 = local_150;
            lVar14 = -0x5bf11c36ce907131;
          }
        }
      }
      else if (lVar11 < 0x385d80545f3737e5) {
        lVar14 = -0x5a8169c1901d1267;
        unaff_x30 = local_d8;
        if ((lVar11 != 0x2ab93652bc5e6aed) &&
           (lVar14 = lVar11, unaff_x30 = pbVar23, lVar11 == 0x2ac20a3475ce5e93)) {
          local_e4 = (uint)*local_c0;
          bVar8 = local_e4 == 0;
          lVar11 = 0x5a6e055eb95c23c2;
          lVar14 = 0x5a173ff8b4bb5be2;
          goto LAB_001cf5d8;
        }
      }
      else {
        pbVar3 = local_c0;
        lVar14 = 0x67d7fb9a0fcfedef;
        if ((lVar11 != 0x385d80545f3737e5) &&
           (pbVar3 = pbVar12, lVar14 = lVar11, lVar11 == 0x41e46d9f17477c95)) {
          lVar14 = 0x99a64c8bb0943be;
          unaff_x23 = local_180;
        }
      }
    }
    else if (lVar11 < 0x67d7fb9a0fcfedef) {
      if (lVar11 < 0x5a6e055eb95c23c2) {
        lVar14 = 0x74dfbd50c1679086;
        unaff_x22 = local_b8;
        if (lVar11 != 0x49bfb75441afda81) {
          if (lVar11 == 0x5a10b84f0fc76c75) {
            lVar14 = 0x49bfb75441afda81;
            unaff_x22 = pbVar20;
            if ((local_19c & 1) == 0) {
              lVar14 = -0x566f96a9b368e0d8;
            }
          }
          else {
            lVar14 = lVar11;
            unaff_x22 = pbVar20;
            if (lVar11 == 0x5a173ff8b4bb5be2) {
              lVar14 = -0x5a8169c1901d1267;
              unaff_x30 = local_c0;
            }
          }
        }
      }
      else {
        param_5 = local_c0;
        lVar14 = 0x6f6126ed95917c7b;
        uVar6 = local_e4;
        if (((lVar11 != 0x5a6e055eb95c23c2) &&
            (param_5 = pbVar10, lVar14 = 0x99a64c8bb0943be, unaff_x23 = param_1, uVar6 = uVar19,
            lVar11 != 0x5dcf9f1451efb870)) &&
           (lVar14 = lVar11, unaff_x23 = pbVar21, lVar11 == 0x60097c96feb43b65)) {
          lVar14 = lVar1;
        }
      }
    }
    else if (lVar11 < 0x7028d3a187050975) {
      if (lVar11 == 0x67d7fb9a0fcfedef) {
        local_188 = pbVar12 + 1;
        lVar14 = -0x1787ea94ea6448e;
        local_140 = pbVar12;
        if (*pbVar12 != local_cc) {
          lVar14 = 0x785a883b00ef416d;
        }
      }
      else {
        in_x13 = local_f8;
        lVar14 = -0x28634e0beea7acd;
        if ((lVar11 != 0x6a637c125f65a76b) &&
           (in_x13 = pbVar15, lVar14 = lVar11, lVar11 == 0x6f6126ed95917c7b)) {
          lVar14 = -0x30bb96c187aba16a;
          lVar11 = -0x1450d9bc1b0ae4d5;
          bVar8 = (*(ulong *)((long)local_b0 + ((ulong)(uVar19 >> 3) & 0x1ffffff8)) >>
                   ((ulong)uVar19 & 0x3f) & 1) == 0;
          local_110 = pbVar10;
          goto LAB_001cdf80;
        }
      }
    }
    else if (lVar11 < 0x785a883b00ef416d) {
      if (lVar11 == 0x7028d3a187050975) {
        local_168 = local_120;
        local_198 = local_120 + ((long)local_130 - (long)local_128);
        *param_3 = local_198;
        lVar14 = 0x7a0f616325dae33c;
        if (*local_198 != 0) {
          lVar14 = 0x1967d52db0437643;
        }
      }
      else if (lVar11 == 0x74dfbd50c1679086) {
        in_x13 = pbVar20;
        lVar14 = -0x28634e0beea7acd;
        local_1a8 = pbVar20;
      }
    }
    else {
      lVar14 = -0x5a8169c1901d1267;
      unaff_x30 = local_140;
      if ((lVar11 != 0x785a883b00ef416d) &&
         (lVar14 = lVar11, unaff_x30 = pbVar23, lVar11 == 0x7a0f616325dae33c)) {
        local_118 = local_168;
LAB_001cf614:
        *param_3 = 0;
        lVar14 = 0x1bce23f05448fc72;
        unaff_x30 = pbVar23;
      }
    }
  }
  if (-0x417a36f1b91e6652 < lVar11) {
    if (lVar11 < -0x28a2c7a0eb30305f) {
      if (-0x31fdcae306c274f1 < lVar11) {
        lVar14 = -0x72681e1acd6b059c;
        unaff_x27 = local_100;
        uVar7 = local_ec;
        if (((lVar11 != -0x31fdcae306c274f0) &&
            (lVar14 = -0x5a8169c1901d1267, unaff_x27 = pbVar22, unaff_x30 = local_110,
            uVar7 = uVar17, lVar11 != -0x30bb96c187aba16a)) &&
           (pbVar12 = local_158, lVar14 = lVar11, unaff_x30 = pbVar23, lVar11 == -0x2bae5e104c3aded8
           )) {
LAB_001cf8ec:
          local_128 = local_b8;
          local_120 = local_128;
LAB_001cf8f8:
          lVar14 = 0x7028d3a187050975;
          unaff_x27 = pbVar22;
          unaff_x30 = pbVar23;
          uVar7 = uVar17;
          local_130 = pbVar12;
          local_128 = local_120;
        }
        goto LAB_001cdf8c;
      }
      unaff_x19 = local_108;
      lVar14 = -0x53fcb8527fc1857c;
      uVar5 = local_f0;
      if (lVar11 == -0x417a36f1b91e6651) goto LAB_001cdf8c;
      if (lVar11 == -0x3904f4d3e6e92c9d) {
        local_180 = (byte *)*param_3;
        unaff_x19 = pbVar18;
        lVar14 = -0x659626d38519acc0;
        uVar5 = uVar13;
        if (local_180 != (byte *)0x0) {
          lVar14 = 0x41e46d9f17477c95;
        }
        goto LAB_001cdf8c;
      }
      pbVar12 = local_b8;
      unaff_x19 = pbVar18;
      lVar14 = lVar11;
      uVar5 = uVar13;
      if (lVar11 != -0x37390d343568a937) goto LAB_001cdf8c;
    }
    else {
      if (-0x1d79d347f33a6cfa < lVar11) {
        if (lVar11 < -0x12fc1cb5b49c762d) {
          if (lVar11 == -0x1d79d347f33a6cf9) {
            bVar8 = *local_c0 == 0;
            lVar11 = -0x28a2c7a0eb30305f;
            lVar14 = 0x178e5d451f8af4fe;
            goto LAB_001cf5d8;
          }
          if (lVar11 == -0x1450d9bc1b0ae4d5) {
            local_d8 = local_110 + 1;
            local_134 = (uint)*local_d8;
            lVar14 = 0x2ab93652bc5e6aed;
            if (local_134 != 0) {
              lVar14 = -0x12fc1cb5b49c762d;
            }
          }
        }
        else {
          param_5 = local_d8;
          lVar14 = 0x6f6126ed95917c7b;
          uVar6 = local_134;
          if ((lVar11 != -0x12fc1cb5b49c762d) &&
             (param_5 = pbVar10, pbVar12 = local_160, lVar14 = lVar11, uVar6 = uVar19,
             lVar11 == -0xab6d7693a1608dd)) {
LAB_001cf39c:
            param_5 = pbVar10;
            lVar14 = -0x2bae5e104c3aded8;
            uVar6 = uVar19;
            local_158 = pbVar12;
          }
        }
        goto LAB_001cdf8c;
      }
      if (lVar11 == -0x28a2c7a0eb30305f) {
        lVar14 = 0x74dfbd50c1679086;
        unaff_x22 = local_c0;
        goto LAB_001cdf8c;
      }
      pbVar12 = local_1b0;
      if (lVar11 == -0x2385ce133751e9ac) goto LAB_001cf8ec;
      pbVar12 = local_190;
      if (lVar11 != -0x1f8eee9a244ffc80) goto LAB_001cdf8c;
    }
    unaff_x19 = pbVar18;
    lVar14 = 0x1f03c9be91893b24;
    uVar5 = uVar13;
    local_148 = pbVar12;
    goto LAB_001cdf8c;
  }
  if (lVar11 < -0x5de9a88702221b6f) {
    if (lVar11 < -0x683dfe9dd6fb123d) {
      lVar14 = -0x72681e1acd6b059c;
      unaff_x27 = param_2;
      uVar7 = local_cc;
      if (lVar11 != -0x74fc9d6cdb93ed18) {
        if (lVar11 == -0x72681e1acd6b059c) {
          uVar16 = (ulong)(uVar17 >> 3) & 0x1ffffff8;
          *(ulong *)((long)local_b0 + uVar16) =
               *(ulong *)((long)local_b0 + uVar16) | 1L << ((ulong)uVar17 & 0x3f);
          local_100 = pbVar22 + 1;
          local_ec = (uint)*local_100;
          lVar14 = 0x2ac20a3475ce5e93;
          unaff_x27 = pbVar22;
          uVar7 = uVar17;
          if (local_ec != 0) {
            lVar14 = -0x31fdcae306c274f0;
          }
        }
        else {
          lVar14 = lVar11;
          unaff_x27 = pbVar22;
          uVar7 = uVar17;
          if (lVar11 == -0x68fcbb577ac8ebb5) {
            local_120 = local_1a8;
            pbVar12 = local_f8;
            goto LAB_001cf8f8;
          }
        }
      }
    }
    else {
      uVar4 = (ulong)local_e8;
      param_4 = local_b8;
      lVar14 = -0x5bf11c36ce907131;
      if (lVar11 != -0x683dfe9dd6fb123d) {
        if (lVar11 == -0x659626d38519acc0) {
          local_118 = (byte *)0x0;
          uVar4 = uVar16;
          param_4 = pbVar9;
          lVar14 = 0x1bce23f05448fc72;
        }
        else {
          uVar4 = uVar16;
          param_4 = pbVar9;
          lVar14 = lVar11;
          if (lVar11 == -0x617ea1f144a91e55) {
            lVar11 = -0x74fc9d6cdb93ed18;
            lVar14 = 0x385d80545f3737e5;
            bVar8 = param_2[1] == 0;
LAB_001cf5d8:
            uVar4 = uVar16;
            param_4 = pbVar9;
            unaff_x30 = pbVar23;
            if (!bVar8) {
              lVar14 = lVar11;
            }
          }
        }
      }
    }
    goto LAB_001cdf8c;
  }
  if (lVar11 < -0x566f96a9b368e0d8) {
    if (lVar11 == -0x5de9a88702221b6f) {
      local_150 = local_160 + 1;
      local_174 = (uint)*local_150;
      lVar14 = -0x5372a13c3de6dbbe;
      if (local_174 != 0) {
        lVar14 = 0x2562ff29debb7f8d;
      }
      goto LAB_001cdf8c;
    }
    if (lVar11 != -0x5bf11c36ce907131) {
      if (lVar11 == -0x5a8169c1901d1267) {
        local_e8 = (uint)*pbVar23;
        lVar14 = 0x1ca1c4df0658c90c;
        local_b8 = pbVar23;
        if (local_e8 != 0) {
          lVar14 = 0x5a10b84f0fc76c75;
        }
      }
      goto LAB_001cdf8c;
    }
    lVar14 = -0x5de9a88702221b6f;
    lVar11 = -0xab6d7693a1608dd;
    bVar8 = (*(ulong *)((long)local_b0 + (uVar16 >> 3 & 0x1ffffff8) + 0x20) >> (uVar16 & 0x3f) & 1)
            == 0;
    local_160 = pbVar9;
  }
  else {
    if (lVar11 < -0x53fcb8527fc1857c) {
      if (lVar11 == -0x566f96a9b368e0d8) {
        bVar8 = param_2[1] == 0;
        lVar11 = -0x5573f3ffc6d4ae34;
        lVar14 = -0x37390d343568a937;
        goto LAB_001cf5d8;
      }
      if (lVar11 == -0x5573f3ffc6d4ae34) {
        local_b0[5] = 0;
        local_b0[4] = 0;
        local_b0[7] = 0;
        local_b0[6] = 0;
        unaff_x19 = param_2;
        lVar14 = -0x53fcb8527fc1857c;
        uVar5 = local_cc;
      }
      goto LAB_001cdf8c;
    }
    if (lVar11 != -0x53fcb8527fc1857c) {
      pbVar12 = local_150;
      if (lVar11 == -0x5372a13c3de6dbbe) goto LAB_001cf39c;
      goto LAB_001cdf8c;
    }
    uVar16 = (ulong)(uVar13 >> 3) & 0x1ffffff8;
    lVar14 = -0x683dfe9dd6fb123d;
    *(ulong *)((long)local_b0 + uVar16 + 0x20) =
         *(ulong *)((long)local_b0 + uVar16 + 0x20) | 1L << ((ulong)uVar13 & 0x3f);
    local_108 = pbVar18 + 1;
    local_f0 = (uint)*local_108;
    bVar8 = local_f0 == 0;
    lVar11 = -0x417a36f1b91e6651;
  }
LAB_001cdf80:
  in_x13 = pbVar15;
  if (!bVar8) {
    lVar14 = lVar11;
  }
  goto LAB_001cdf8c;
}


