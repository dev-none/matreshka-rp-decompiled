// Function: FUN_001db018
// Entry: 001db018

void FUN_001db018(ulong param_1,uint *param_2,uint param_3,uint param_4,undefined8 param_5,
                 undefined8 param_6,uint param_7)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint unaff_100000f9;
  uint unaff_10000101;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint in_w15;
  uint uVar19;
  uint in_w17;
  uint uVar20;
  uint unaff_w22;
  uint uVar22;
  long unaff_x23;
  long lVar23;
  uint local_29c;
  uint local_298;
  uint local_294;
  uint local_290;
  uint local_28c;
  int local_288;
  long local_280;
  long local_278;
  int local_26c;
  long local_268;
  int local_260;
  int local_25c;
  long local_250;
  long local_248;
  uint local_240;
  uint local_23c;
  uint local_238;
  uint local_234;
  uint local_230;
  uint local_22c;
  uint local_228;
  uint uStack_224;
  uint local_220;
  uint local_21c;
  uint uStack_218;
  uint local_214;
  uint local_210;
  uint local_20c;
  uint uStack_208;
  uint local_204;
  uint local_200;
  uint local_1fc;
  uint local_1f8;
  uint local_1f4;
  uint local_1f0 [2];
  long local_1e8;
  uint local_1e0;
  uint uStack_1dc;
  long local_1d8;
  long local_1d0;
  uint local_1c4;
  uint local_1c0;
  uint auStack_1bc [4];
  uint local_1ac;
  uint local_1a8;
  uint local_1a4;
  uint local_1a0;
  uint local_19c;
  uint local_198;
  uint local_194;
  uint local_190;
  uint local_18c;
  uint local_188;
  uint local_184;
  uint local_180;
  uint local_17c;
  uint local_178;
  uint local_174;
  long local_70;
  uint uVar21;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  uVar2 = (param_2[2] & 0xff00ff00) >> 8 | (param_2[2] & 0xff00ff) << 8;
  uVar3 = (param_2[3] & 0xff00ff00) >> 8 | (param_2[3] & 0xff00ff) << 8;
  uVar4 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
  uVar5 = (param_2[1] & 0xff00ff00) >> 8 | (param_2[1] & 0xff00ff) << 8;
  local_1a8 = uVar2 >> 0x10 | uVar2 << 0x10;
  auStack_1bc[3] = uVar4 >> 0x10 | uVar4 << 0x10;
  uVar2 = (param_2[4] & 0xff00ff00) >> 8 | (param_2[4] & 0xff00ff) << 8;
  local_1ac = uVar5 >> 0x10 | uVar5 << 0x10;
  uVar5 = (param_2[5] & 0xff00ff00) >> 8 | (param_2[5] & 0xff00ff) << 8;
  uVar4 = param_2[0xb];
  local_1a4 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar3 = (param_2[7] & 0xff00ff00) >> 8 | (param_2[7] & 0xff00ff) << 8;
  local_1a0 = uVar2 >> 0x10 | uVar2 << 0x10;
  local_194 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar2 = (param_2[10] & 0xff00ff00) >> 8 | (param_2[10] & 0xff00ff) << 8;
  local_19c = uVar5 >> 0x10 | uVar5 << 0x10;
  uVar3 = (param_2[6] & 0xff00ff00) >> 8 | (param_2[6] & 0xff00ff) << 8;
  uVar5 = (param_2[9] & 0xff00ff00) >> 8 | (param_2[9] & 0xff00ff) << 8;
  local_188 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = param_2[0xe];
  local_198 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar8 = (param_2[8] & 0xff00ff00) >> 8 | (param_2[8] & 0xff00ff) << 8;
  local_18c = uVar5 >> 0x10 | uVar5 << 0x10;
  uVar5 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
  uVar3 = param_2[0xc];
  local_190 = uVar8 >> 0x10 | uVar8 << 0x10;
  local_184 = uVar5 >> 0x10 | uVar5 << 0x10;
  uVar5 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  uVar8 = (param_2[0xd] & 0xff00ff00) >> 8 | (param_2[0xd] & 0xff00ff) << 8;
  uVar10 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  local_180 = uVar10 >> 0x10 | uVar10 << 0x10;
  local_178 = uVar5 >> 0x10 | uVar5 << 0x10;
  local_17c = uVar8 >> 0x10 | uVar8 << 0x10;
  uVar5 = (param_2[0xf] & 0xff00ff00) >> 8 | (param_2[0xf] & 0xff00ff) << 8;
  local_174 = uVar5 >> 0x10 | uVar5 << 0x10;
  local_250 = 0x10;
  uVar9 = param_1;
  puVar1 = (undefined1 *)0x21d53de2b345f472;
  lVar7 = 0x10;
  uVar5 = local_180;
LAB_001db178:
  do {
    while( true ) {
      while( true ) {
        while (uVar22 = unaff_w22, uVar11 = param_4, uVar10 = param_3, uVar21 = unaff_10000101,
              uVar19 = unaff_100000f9, uVar13 = param_7, uVar20 = in_w17, uVar15 = uVar5,
              uVar18 = uVar3, uVar16 = uVar2, uVar17 = uVar4, lVar23 = unaff_x23, lVar14 = lVar7,
              puVar12 = puVar1, uVar8 = (uint)uVar9, puVar1 = puVar12, lVar7 = lVar14,
              unaff_x23 = lVar23, uVar4 = uVar17, uVar2 = uVar16, uVar3 = uVar18, uVar5 = uVar15,
              in_w17 = uVar21, param_7 = uVar13, unaff_100000f9 = uVar19, unaff_10000101 = uVar21,
              param_3 = uVar10, param_4 = uVar11, unaff_w22 = uVar22,
              (long)puVar12 < 0x3a4ee4b4cd18045) {
          if ((long)puVar12 < -0x21f9ff0f3589e147) {
            if ((long)puVar12 < -0x34ad741032f04ad1) {
              puVar1 = (undefined1 *)0xe156d0b4a667ab8e;
              lVar7 = local_1d0;
              uVar3 = local_1c4;
              in_w15 = uVar19;
              in_w17 = auStack_1bc[1];
              unaff_10000101 = auStack_1bc[1];
              param_3 = auStack_1bc[2];
              param_4 = local_1c0;
              unaff_w22 = auStack_1bc[0];
              if ((puVar12 != (undefined1 *)0xa0d7c67c60e7a82e) &&
                 (puVar1 = puVar12, lVar7 = lVar14, uVar3 = uVar18, in_w17 = uVar21,
                 unaff_10000101 = uVar21, param_3 = uVar10, param_4 = uVar11, unaff_w22 = uVar22,
                 puVar12 == (undefined1 *)0xae2d64bf93f1b31a)) {
                local_268 = local_250 + 1;
                uVar3 = *(uint *)((long)&local_1d0 + local_250 * 4) ^ auStack_1bc[local_250] ^
                        *(uint *)((long)&local_1e8 + local_250 * 4) ^ local_1f0[local_250];
                puVar1 = (undefined1 *)0xdc6dd27061ebaf34;
                if (local_268 != 0x50) {
                  puVar1 = (undefined1 *)0x7772f905052e4c0f;
                }
                auStack_1bc[local_250 + 3] = uVar3 >> 0x1f | uVar3 << 1;
                uVar3 = uVar18;
              }
            }
            else if (puVar12 == (undefined1 *)0xcb528befcd0fb52f) {
              uStack_224 = local_1f0[0];
              local_228 = local_1f8;
              local_22c = local_210;
              local_1fc = local_200 >> 2 | local_200 << 0x1e;
              uVar9 = uVar9 & 0xffffffff;
              local_280 = local_1e8 + 1;
              puVar1 = (undefined1 *)0x3a4ee4b4cd18045;
              if (local_280 != 0x28) {
                puVar1 = (undefined1 *)0x5e1b922e6e5165fd;
              }
              local_214 = (local_210 >> 0x1b | local_210 << 5) +
                          local_1f0[1] + (local_1f8 ^ local_1f0[0] ^ local_200) + local_25c +
                          auStack_1bc[local_1e8 + 3];
              in_w15 = uVar19;
            }
            else {
              in_w15 = uVar19;
              if (puVar12 == (undefined1 *)0xdc6dd27061ebaf34) {
                local_29c = *(uint *)(param_1 + 0x50);
                local_298 = *(uint *)(param_1 + 0x54);
                local_294 = *(uint *)(param_1 + 0x58);
                uVar9 = (ulong)local_294;
                local_290 = *(uint *)(param_1 + 0x5c);
                local_1d8 = 0;
                local_28c = *(uint *)(param_1 + 0x60);
                local_288 = *(int *)(param_1 + 100);
                local_1e0 = local_298;
                uStack_1dc = local_29c;
                puVar1 = &DAT_6b9fb694821e6034;
                local_20c = local_290;
                uStack_208 = local_28c;
              }
            }
          }
          else if ((long)puVar12 < -0x1adb7dcf41534880) {
            if (puVar12 == (undefined1 *)0xde0600f0ca761eb9) {
              local_26c = *(int *)(param_1 + 0x70);
              puVar1 = (undefined1 *)0x2467c250713f82d4;
              unaff_x23 = 0x3c;
              uVar4 = auStack_1bc[0];
              uVar2 = auStack_1bc[1];
              uVar5 = local_1c0;
              in_w15 = auStack_1bc[2];
              param_7 = local_1c4;
              unaff_100000f9 = auStack_1bc[2];
            }
            else {
              in_w15 = uVar19;
              if (puVar12 == (undefined1 *)0xe156d0b4a667ab8e) {
                auStack_1bc[2] = uVar18 >> 2 | uVar18 << 0x1e;
                local_1d0 = lVar14 + 1;
                auStack_1bc[1] =
                     (uVar20 >> 0x1b | uVar20 << 5) + uVar22 +
                     ((uVar10 ^ uVar11) & uVar18 ^ uVar10 & uVar11) + local_260 +
                     auStack_1bc[lVar14 + 3];
                puVar1 = (undefined1 *)0xde0600f0ca761eb9;
                if (lVar14 + 1 != 0x3c) {
                  puVar1 = (undefined1 *)0xa0d7c67c60e7a82e;
                }
                local_1c0 = uVar10;
                auStack_1bc[0] = uVar11;
                local_1c4 = uVar20;
              }
            }
          }
          else {
            puVar1 = (undefined1 *)0x2467c250713f82d4;
            unaff_x23 = local_248;
            uVar4 = local_238;
            uVar2 = local_234;
            uVar5 = local_23c;
            in_w15 = local_230;
            param_7 = local_240;
            unaff_100000f9 = local_230;
            if ((puVar12 != (undefined1 *)0xe5248230beacb780) &&
               (puVar1 = puVar12, unaff_x23 = lVar23, uVar4 = uVar17, uVar2 = uVar16, uVar5 = uVar15
               , in_w15 = uVar19, param_7 = uVar13, unaff_100000f9 = uVar19,
               puVar12 == (undefined1 *)0xf8b8c954db367ca1)) {
              *(uint *)(param_1 + 0x50) = local_234 + local_29c;
              *(uint *)(param_1 + 0x54) = local_240 + local_298;
              *(uint *)(param_1 + 0x58) = local_230 + local_294;
              *(uint *)(param_1 + 0x5c) = local_23c + local_290;
              *(uint *)(param_1 + 0x60) = local_238 + local_28c;
              if (*(long *)(lVar6 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
                __stack_chk_fail();
              }
              return;
            }
          }
        }
        in_w17 = uVar20;
        unaff_100000f9 = in_w15;
        unaff_10000101 = uVar20;
        if (0x3f365012db6b56c0 < (long)puVar12) break;
        if ((long)puVar12 < 0x21d53de2b345f472) {
          if (puVar12 == (undefined1 *)0x3a4ee4b4cd18045) {
            local_260 = *(int *)(param_1 + 0x6c);
            puVar1 = (undefined1 *)0xe156d0b4a667ab8e;
            lVar7 = 0x28;
            uVar3 = local_22c;
            in_w17 = local_214;
            unaff_10000101 = local_214;
            param_3 = local_1fc;
            param_4 = local_228;
            unaff_w22 = uStack_224;
          }
          else if (puVar12 == (undefined1 *)0x12b21488b9618371) {
            uVar9 = (ulong)local_1f4;
            local_1d8 = local_278;
            local_20c = local_21c;
            uStack_208 = uStack_218;
            local_1e0 = local_220;
            uStack_1dc = local_204;
            puVar1 = &DAT_6b9fb694821e6034;
          }
        }
        else {
          puVar1 = (undefined1 *)0xae2d64bf93f1b31a;
          if ((puVar12 != (undefined1 *)0x21d53de2b345f472) &&
             (puVar1 = puVar12, puVar12 == (undefined1 *)0x2467c250713f82d4)) {
            local_230 = uVar13 >> 2 | uVar13 << 0x1e;
            local_248 = lVar23 + 1;
            puVar1 = (undefined1 *)0xf8b8c954db367ca1;
            if (local_248 != 0x50) {
              puVar1 = (undefined1 *)0xe5248230beacb780;
            }
            local_234 = (uVar16 >> 0x1b | uVar16 << 5) + uVar17 + (in_w15 ^ uVar15 ^ uVar13) +
                        local_26c + auStack_1bc[lVar23 + 3];
            local_240 = uVar16;
            local_23c = in_w15;
            local_238 = uVar15;
          }
        }
      }
      if ((long)puVar12 < 0x6b9fb694821e6034) break;
      if (puVar12 == &DAT_6b9fb694821e6034) {
        local_220 = uStack_1dc;
        uStack_218 = local_20c;
        local_1f4 = local_1e0 >> 2 | local_1e0 << 0x1e;
        local_278 = local_1d8 + 1;
        local_204 = (local_1e0 & uVar8) + uStack_208 + (local_20c & (local_1e0 ^ 0xffffffff)) +
                    (uStack_1dc >> 0x1b | uStack_1dc << 5) + local_288 + auStack_1bc[local_1d8 + 3];
        puVar1 = (undefined1 *)0x3f365012db6b56c1;
        in_w15 = uVar19;
        in_w17 = uVar21;
        local_21c = uVar8;
        unaff_100000f9 = uVar19;
        unaff_10000101 = uVar21;
        if (local_278 != 0x14) {
          puVar1 = (undefined1 *)0x12b21488b9618371;
        }
      }
      else {
        in_w15 = uVar19;
        in_w17 = uVar21;
        unaff_100000f9 = uVar19;
        unaff_10000101 = uVar21;
        if (puVar12 == (undefined1 *)0x7772f905052e4c0f) {
          local_250 = local_268;
          puVar1 = (undefined1 *)0xae2d64bf93f1b31a;
        }
      }
    }
    if (puVar12 == (undefined1 *)0x3f365012db6b56c1) {
      local_25c = *(int *)(param_1 + 0x68);
      local_1e8 = 0x14;
      local_1f0[0] = local_21c;
      local_1f0[1] = uStack_218;
      local_1f8 = local_1f4;
      local_200 = local_220;
      local_210 = local_204;
    }
    else {
      if (puVar12 != (undefined1 *)0x5e1b922e6e5165fd) goto LAB_001db178;
      local_1e8 = local_280;
      local_1f0[0] = local_228;
      local_1f0[1] = uStack_224;
      local_1f8 = local_1fc;
      local_200 = local_22c;
      local_210 = local_214;
    }
    puVar1 = (undefined1 *)0xcb528befcd0fb52f;
    unaff_100000f9 = uVar19;
    unaff_10000101 = uVar21;
  } while( true );
}


