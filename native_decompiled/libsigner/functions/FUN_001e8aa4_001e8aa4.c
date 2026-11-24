// Function: FUN_001e8aa4
// Entry: 001e8aa4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001e8aa4(undefined4 *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  undefined1 auVar5 [16];
  long lVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  long unaff_x21;
  uint uVar13;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  long lVar14;
  undefined1 auVar15 [16];
  long local_340;
  long lStack_338;
  ulong local_328;
  long local_320;
  long lStack_318;
  long local_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  long local_2d0;
  long lStack_2c8;
  ulong local_2c0;
  long local_2b8;
  byte local_2b0 [64];
  ulong local_270 [66];
  
  lVar4 = tpidr_el0;
  local_270[0x40] = *(long *)(lVar4 + 0x28);
  *param_1 = param_2;
  FUN_001daa3c();
  lVar7 = _UNK_00102818;
  lVar6 = _DAT_00102810;
  local_2b0[0x28] = 0;
  local_2b0[0x29] = 0;
  local_2b0[0x2a] = 0;
  local_2b0[0x2b] = 0;
  local_2b0[0x2c] = 0;
  local_2b0[0x2d] = 0;
  local_2b0[0x2e] = 0;
  local_2b0[0x2f] = 0;
  local_2b0[0x20] = 0;
  local_2b0[0x21] = 0;
  local_2b0[0x22] = 0;
  local_2b0[0x23] = 0;
  local_2b0[0x24] = 0;
  local_2b0[0x25] = 0;
  local_2b0[0x26] = 0;
  local_2b0[0x27] = 0;
  local_2b0[0x38] = 0;
  local_2b0[0x39] = 0;
  local_2b0[0x3a] = 0;
  local_2b0[0x3b] = 0;
  local_2b0[0x3c] = 0;
  local_2b0[0x3d] = 0;
  local_2b0[0x3e] = 0;
  local_2b0[0x3f] = 0;
  local_2b0[0x30] = 0;
  local_2b0[0x31] = 0;
  local_2b0[0x32] = 0;
  local_2b0[0x33] = 0;
  local_2b0[0x34] = 0;
  local_2b0[0x35] = 0;
  local_2b0[0x36] = 0;
  local_2b0[0x37] = 0;
  local_2b0[8] = 0;
  local_2b0[9] = 0;
  local_2b0[10] = 0;
  local_2b0[0xb] = 0;
  local_2b0[0xc] = 0;
  local_2b0[0xd] = 0;
  local_2b0[0xe] = 0;
  local_2b0[0xf] = 0;
  local_2b0[0] = 0;
  local_2b0[1] = 0;
  local_2b0[2] = 0;
  local_2b0[3] = 0;
  local_2b0[4] = 0;
  local_2b0[5] = 0;
  local_2b0[6] = 0;
  local_2b0[7] = 0;
  local_2b0[0x18] = 0;
  local_2b0[0x19] = 0;
  local_2b0[0x1a] = 0;
  local_2b0[0x1b] = 0;
  local_2b0[0x1c] = 0;
  local_2b0[0x1d] = 0;
  local_2b0[0x1e] = 0;
  local_2b0[0x1f] = 0;
  local_2b0[0x10] = 0;
  local_2b0[0x11] = 0;
  local_2b0[0x12] = 0;
  local_2b0[0x13] = 0;
  local_2b0[0x14] = 0;
  local_2b0[0x15] = 0;
  local_2b0[0x16] = 0;
  local_2b0[0x17] = 0;
  bVar3 = false;
  uVar8 = 0x102000;
  puVar1 = (undefined1 *)0x21d53de2b345f472;
  lVar14 = 0;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while (puVar12 = puVar1, uVar11 = uVar8, puVar1 = puVar12, uVar8 = uVar11,
                  0x3a4ee4b4cd18044 < (long)puVar12) {
              if ((long)puVar12 < 0x3f365012db6b56c1) {
                if ((long)puVar12 < 0x21d53de2b345f472) {
                  puVar1 = (undefined1 *)0x5e1b922e6e5165fd;
                  if ((puVar12 != (undefined1 *)0x3a4ee4b4cd18045) &&
                     (puVar1 = puVar12, puVar12 == (undefined1 *)0x12b21488b9618371)) {
                    auVar15._8_8_ = uStack_2f8;
                    auVar15._0_8_ = local_300;
                    lStack_338 = lStack_2c8;
                    local_340 = local_2d0;
                    auVar5._8_8_ = lStack_2c8;
                    auVar5._0_8_ = local_2d0;
                    auVar15 = NEON_ushl(auVar15,auVar5,8);
                    bVar3 = (auVar15._8_8_ & 0x8000000000000000) != 0;
                    puVar1 = (undefined1 *)0xcb528befcd0fb52f;
                    unaff_x24 = local_2b8;
                    if ((auVar15._0_8_ & 0x8000000000000000) == 0) {
                      puVar1 = (undefined1 *)0x3a4ee4b4cd18045;
                    }
                  }
                }
                else {
                  puVar1 = (undefined1 *)0xae2d64bf93f1b31a;
                  if ((puVar12 != (undefined1 *)0x21d53de2b345f472) &&
                     (puVar1 = puVar12, puVar12 == (undefined1 *)0x2467c250713f82d4)) {
                    local_2b8 = local_308;
                    lStack_2c8 = lStack_318;
                    local_2d0 = local_320;
                    puVar1 = (undefined1 *)0x12b21488b9618371;
                  }
                }
              }
              else if ((long)puVar12 < 0x5e1b922e6e5165fd) {
                if (puVar12 == (undefined1 *)0x3f365012db6b56c1) {
                  local_270[1] = 0;
                  local_270[0] = 0;
                  local_270[3] = 0;
                  local_270[2] = 0;
                  local_270[5] = 0;
                  local_270[4] = 0;
                  local_270[7] = 0;
                  local_270[6] = 0;
                  local_270[9] = 0;
                  local_270[8] = 0;
                  local_270[0xb] = 0;
                  local_270[10] = 0;
                  local_270[0xd] = 0;
                  local_270[0xc] = 0;
                  local_270[0xf] = 0;
                  local_270[0xe] = 0;
                  local_270[0x11] = 0;
                  local_270[0x10] = 0;
                  local_270[0x13] = 0;
                  local_270[0x12] = 0;
                  local_270[0x15] = 0;
                  local_270[0x14] = 0;
                  local_270[0x17] = 0;
                  local_270[0x16] = 0;
                  local_270[0x19] = 0;
                  local_270[0x18] = 0;
                  local_270[0x1b] = 0;
                  local_270[0x1a] = 0;
                  local_270[0x1d] = 0;
                  local_270[0x1c] = 0;
                  local_270[0x1f] = 0;
                  local_270[0x1e] = 0;
                  local_270[0x21] = 0;
                  local_270[0x20] = 0;
                  local_270[0x23] = 0;
                  local_270[0x22] = 0;
                  local_270[0x25] = 0;
                  local_270[0x24] = 0;
                  local_270[0x27] = 0;
                  local_270[0x26] = 0;
                  local_270[0x29] = 0;
                  local_270[0x28] = 0;
                  local_270[0x2b] = 0;
                  local_270[0x2a] = 0;
                  local_270[0x2d] = 0;
                  local_270[0x2c] = 0;
                  local_270[0x2f] = 0;
                  local_270[0x2e] = 0;
                  local_270[0x31] = 0;
                  local_270[0x30] = 0;
                  local_270[0x33] = 0;
                  local_270[0x32] = 0;
                  local_270[0x35] = 0;
                  local_270[0x34] = 0;
                  local_270[0x37] = 0;
                  local_270[0x36] = 0;
                  local_270[0x39] = 0;
                  local_270[0x38] = 0;
                  local_270[0x3b] = 0;
                  local_270[0x3a] = 0;
                  local_270[0x3d] = 0;
                  local_270[0x3c] = 0;
                  local_270[0x3f] = 0;
                  local_270[0x3e] = 0;
                  uVar8 = 0;
                  puVar1 = &DAT_6b9fb694821e6034;
                }
                else if (puVar12 == (undefined1 *)0x4c1b9edb721e7222) {
                  uVar11 = FUN_001da9a8(param_1 + 2);
                  unaff_x21 = unaff_x23 + 1;
                  uVar10 = 1L << ((ulong)~(uint)local_2b0[unaff_x23] & 0x3f);
                  puVar1 = (undefined1 *)0x3f365012db6b56c1;
                  if (unaff_x21 != 0x40) {
                    puVar1 = &DAT_2b590051c346d3e;
                  }
                  *(ulong *)(param_1 + unaff_x23 * 2 + 4) = uVar10 - 1 & uVar11 | uVar10;
                }
              }
              else if (puVar12 == (undefined1 *)0x5e1b922e6e5165fd) {
                puVar1 = (undefined1 *)0xe156d0b4a667ab8e;
                if (!bVar3) {
                  puVar1 = (undefined1 *)0xde0600f0ca761eb9;
                }
              }
              else if (puVar12 == &DAT_6b9fb694821e6034) {
                local_2c0 = 0x8000000000000000 >> (uVar11 & 0x3f);
                local_2b8 = 0;
                local_300 = *(undefined8 *)(param_1 + 4 + uVar11 * 2);
                lStack_2c8 = lVar7;
                local_2d0 = lVar6;
                puVar1 = (undefined1 *)0x12b21488b9618371;
                local_328 = uVar11;
                uStack_2f8 = local_300;
              }
              else if (puVar12 == (undefined1 *)0x7772f905052e4c0f) {
                puVar1 = (undefined1 *)0xae2d64bf93f1b31a;
                lVar14 = unaff_x22;
              }
            }
            if ((long)puVar12 < -0x21f9ff0f3589e147) break;
            if ((long)puVar12 < -0x1adb7dcf41534880) {
              puVar1 = (undefined1 *)0xa0d7c67c60e7a82e;
              if ((puVar12 != (undefined1 *)0xde0600f0ca761eb9) &&
                 (puVar1 = puVar12, puVar12 == (undefined1 *)0xe156d0b4a667ab8e)) {
                uVar11 = unaff_x24 << 3 | 8;
                *(ulong *)((long)local_270 + uVar11) =
                     *(ulong *)((long)local_270 + uVar11) | local_2c0;
                puVar1 = (undefined1 *)0xa0d7c67c60e7a82e;
              }
            }
            else if (puVar12 == (undefined1 *)0xe5248230beacb780) {
              unaff_x25 = local_328 + 1;
              puVar1 = (undefined1 *)0xd937f9741a083d9f;
              if (unaff_x25 != 0x40) {
                puVar1 = (undefined1 *)0xf8b8c954db367ca1;
              }
            }
            else {
              uVar8 = unaff_x25;
              puVar1 = &DAT_6b9fb694821e6034;
              if ((puVar12 != (undefined1 *)0xf8b8c954db367ca1) &&
                 (uVar8 = uVar11, puVar1 = puVar12, puVar12 == &DAT_2b590051c346d3e)) {
                puVar1 = (undefined1 *)0x4c1b9edb721e7222;
                unaff_x23 = unaff_x21;
              }
            }
          }
          if (-0x34ad741032f04ad2 < (long)puVar12) break;
          if (puVar12 == (undefined1 *)0xa0d7c67c60e7a82e) {
            local_308 = unaff_x24 + 2;
            local_320 = local_340 + 2;
            lStack_318 = lStack_338 + 2;
            puVar1 = (undefined1 *)0xe5248230beacb780;
            if (local_308 != 0x40) {
              puVar1 = (undefined1 *)0x2467c250713f82d4;
            }
          }
          else if (puVar12 == (undefined1 *)0xae2d64bf93f1b31a) {
            uVar9 = FUN_001da940(param_1 + 2);
            unaff_x22 = lVar14 + 1;
            uVar2 = 0;
            uVar13 = (uint)unaff_x22;
            if (uVar13 != 0) {
              uVar2 = uVar9 / uVar13;
            }
            puVar1 = (undefined1 *)0xdc6dd27061ebaf34;
            if (unaff_x22 != 0x40) {
              puVar1 = (undefined1 *)0x7772f905052e4c0f;
            }
            uVar9 = uVar9 - uVar2 * uVar13;
            local_2b0[lVar14] = local_2b0[uVar9];
            local_2b0[uVar9] = (byte)lVar14;
          }
        }
        if (puVar12 != (undefined1 *)0xcb528befcd0fb52f) break;
        local_270[unaff_x24] = local_270[unaff_x24] | local_2c0;
        puVar1 = (undefined1 *)0x5e1b922e6e5165fd;
      }
      if (puVar12 != (undefined1 *)0xdc6dd27061ebaf34) break;
      unaff_x23 = 0;
      puVar1 = (undefined1 *)0x4c1b9edb721e7222;
    }
  } while (puVar12 != (undefined1 *)0xd937f9741a083d9f);
  memcpy(param_1 + 4,local_270,0x200);
  *(undefined8 *)(param_1 + 0x84) = *(undefined8 *)(param_1 + 0x82);
  if (*(long *)(lVar4 + 0x28) != local_270[0x40]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


