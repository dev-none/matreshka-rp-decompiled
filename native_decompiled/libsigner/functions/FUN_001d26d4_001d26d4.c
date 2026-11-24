// Function: FUN_001d26d4
// Entry: 001d26d4

undefined1 *
FUN_001d26d4(undefined1 *param_1,long param_2,undefined1 *param_3,undefined1 *param_4,
            undefined1 *param_5,undefined1 *param_6,undefined1 *param_7)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  int iVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  undefined1 *puVar30;
  undefined1 *puVar31;
  undefined1 *in_x15;
  undefined1 *puVar32;
  undefined1 *in_x16;
  undefined1 *puVar33;
  ulong uVar34;
  undefined1 *unaff_x28;
  undefined1 *puVar35;
  undefined1 *unaff_x30;
  undefined1 *puVar36;
  undefined1 *local_ac8;
  undefined1 *local_ac0;
  undefined1 *local_ab8;
  ulong local_ab0;
  undefined1 *local_aa8;
  undefined1 *local_aa0;
  undefined1 *local_a98;
  undefined1 *local_a90;
  undefined1 *local_a88;
  undefined1 *local_a80;
  byte local_a74;
  undefined1 *local_a70;
  undefined1 *local_a68;
  undefined1 *local_a50;
  undefined1 *local_a48;
  undefined1 *local_a40;
  undefined1 *local_a20;
  undefined1 *local_a18;
  undefined1 *local_a10;
  undefined1 *local_a08;
  undefined1 *local_a00;
  undefined1 *local_9f8;
  undefined1 *local_9f0;
  undefined1 *local_9e8;
  undefined1 *local_9e0;
  undefined1 *local_9d8;
  undefined1 *local_9d0;
  undefined1 *local_9c8;
  undefined1 *local_9c0;
  undefined1 *local_9b8;
  undefined1 *local_9b0;
  undefined1 *local_9a8;
  undefined1 *local_9a0;
  undefined1 *local_998;
  undefined1 *local_990;
  undefined1 *local_988;
  undefined1 *local_980;
  undefined1 *local_978;
  undefined1 *puStack_970;
  undefined1 *local_968;
  undefined1 *local_960;
  undefined1 *local_958;
  undefined1 *local_950;
  undefined1 *local_948;
  undefined1 *local_940;
  undefined1 *local_938;
  undefined1 *local_930;
  undefined1 *local_928;
  undefined1 *local_920;
  undefined1 *puStack_918;
  undefined1 *local_910;
  undefined1 *local_908;
  undefined1 *local_8f0;
  undefined1 *local_8e8;
  undefined1 *local_8c8;
  undefined1 *local_8c0;
  undefined1 *local_8b8;
  undefined1 *local_8b0;
  undefined1 *local_8a8;
  undefined1 *local_8a0;
  undefined1 *local_898;
  undefined8 auStack_890 [256];
  ulong local_90 [6];
  
  bVar8 = 0;
  bVar10 = 0;
  bVar7 = 0;
  bVar9 = 0;
  lVar12 = tpidr_el0;
  local_90[4] = *(long *)(lVar12 + 0x28);
  puVar1 = (undefined1 *)0xc84313bc4262f702;
  if ((long)param_4 <= param_2 - (long)param_1) {
    puVar1 = (undefined1 *)0xf494b3c44b0594a4;
  }
  puVar2 = &DAT_965cf93a9dddb88a;
  if (param_4 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)0x33970f856d03deee;
  }
  puVar11 = param_4 + -1;
  puVar3 = (undefined1 *)0xd7a28745f3a8fb05;
  if (param_4 == (undefined1 *)0x0 || puVar11 == (undefined1 *)0x0) {
    puVar3 = (undefined1 *)0xbac85a422f6dcf28;
  }
  puVar4 = (undefined1 *)0x7e7f415062326f70;
  if (param_4 == (undefined1 *)0x0 || puVar11 == (undefined1 *)0x0) {
    puVar4 = (undefined1 *)0x5701972a5c88a65c;
  }
  local_90[1] = 0;
  local_90[0] = 0;
  local_90[3] = 0;
  local_90[2] = 0;
  puVar19 = param_1;
  puVar20 = param_3;
  puVar5 = (undefined1 *)0x7f24efb1c885eb9b;
  puVar21 = puVar4;
  puVar22 = local_8b0;
LAB_001d2844:
  do {
    local_8b0 = puVar22;
    puVar36 = unaff_x30;
    puVar35 = unaff_x28;
    puVar33 = in_x16;
    puVar32 = in_x15;
    puVar30 = puVar21;
    puVar29 = puVar5;
    puVar28 = param_7;
    puVar27 = param_6;
    puVar26 = param_5;
    puVar25 = puVar20;
    puVar24 = puVar19;
    puVar18 = local_898;
    puVar17 = local_8a0;
    puVar16 = local_8a8;
    puVar31 = local_8b0;
    puVar15 = local_8b8;
    puVar14 = local_8c0;
    puVar13 = local_8c8;
    puVar5 = puVar29;
    puVar19 = puVar24;
    puVar20 = puVar25;
    param_5 = puVar26;
    param_6 = puVar27;
    param_7 = puVar28;
    puVar21 = puVar30;
    in_x15 = puVar32;
    in_x16 = puVar33;
    unaff_x28 = puVar35;
    unaff_x30 = puVar36;
    puVar22 = puVar31;
    if (0x102f8ffd02923753 < (long)puVar29) {
      if ((long)puVar29 < 0x45f288ff0a7ea1de) {
        if ((long)puVar29 < 0x2e7820ff94f2299e) {
          if ((long)puVar29 < 0x1c201a6f44d38273) {
            if (puVar29 == (undefined1 *)0x102f8ffd02923754) {
              puVar5 = (undefined1 *)0xfa5a19834426ec82;
              local_8c8 = puVar13;
              local_8c0 = puVar14;
              local_8b8 = puVar15;
              local_8a8 = puVar16;
              local_8a0 = puVar17;
              local_898 = puVar18;
              if (local_a08 != local_998) {
                puVar5 = (undefined1 *)0x65f514c9e7f64775;
              }
            }
            else if (puVar29 == (undefined1 *)0x129b99854ca09618) {
              local_938 = local_990 + 1;
              local_930 = (undefined1 *)0x1;
              local_948 = local_990;
LAB_001d49c0:
              local_940 = (undefined1 *)0x1;
              puVar5 = (undefined1 *)0x9ea3237b2a99da04;
              local_8c8 = puVar13;
              local_8c0 = puVar14;
              local_8b8 = puVar15;
              local_8a8 = puVar16;
              local_8a0 = puVar17;
              local_898 = puVar18;
            }
            else {
              local_8c8 = puVar13;
              local_8c0 = puVar14;
              local_8b8 = puVar15;
              local_8a8 = puVar16;
              local_8a0 = puVar17;
              local_898 = puVar18;
              if (puVar29 == (undefined1 *)0x1666a35a3e139985) {
                local_a40 = local_950 + (long)local_908;
                puVar5 = (undefined1 *)0x494913e247ec810;
                if (param_4 <= local_a40) {
                  puVar5 = (undefined1 *)0x93f8f1d59ed66f09;
                }
                local_a50 = local_950;
                local_a48 = local_908;
                local_968 = local_920;
                local_960 = puStack_918;
              }
            }
          }
          else if ((long)puVar29 < 0x28a29c505fd0878c) {
            if (puVar29 == (undefined1 *)0x1c201a6f44d38273) {
              local_a18 = local_a00;
              puVar5 = (undefined1 *)0x57f8c36627f7246e;
              local_8c8 = puVar13;
              local_8c0 = puVar14;
              local_8b8 = puVar15;
              local_8a8 = puVar16;
              local_8a0 = puVar17;
              local_898 = puVar18;
              if (param_3[(long)local_a00] != local_928[(long)local_a00]) {
                puVar5 = (undefined1 *)0xbcb67c35d138e776;
              }
            }
            else {
              puVar31 = local_a90;
              local_8c8 = puVar13;
              local_8c0 = puVar14;
              local_8b8 = puVar15;
              local_8a8 = puVar16;
              local_8a0 = puVar17;
              local_898 = puVar18;
              if (puVar29 == (undefined1 *)0x25e60e8a57340c35) {
LAB_001d38d8:
                puVar5 = (undefined1 *)0x1c201a6f44d38273;
                local_a00 = puVar31;
                local_8c8 = puVar13;
                local_8c0 = puVar14;
                local_8b8 = puVar15;
                local_8a8 = puVar16;
                local_8a0 = puVar17;
                local_898 = puVar18;
              }
            }
          }
          else {
            puVar5 = puVar3;
            local_8c8 = puVar13;
            local_8c0 = puVar14;
            local_8b8 = puVar15;
            local_8a8 = puVar16;
            local_8a0 = puVar17;
            local_898 = puVar18;
            if ((puVar29 != (undefined1 *)0x28a29c505fd0878c) &&
               (puVar5 = puVar29, puVar29 == (undefined1 *)0x297717612b720ee8)) {
              puVar5 = (undefined1 *)0x45f288ff0a7ea1de;
              if (bVar7 <= bVar8) {
                puVar5 = (undefined1 *)0x7c9736501c5f4f0a;
              }
            }
          }
        }
        else if ((long)puVar29 < 0x33970f856d03deee) {
          if (puVar29 == (undefined1 *)0x2e7820ff94f2299e) {
            bVar9 = param_3[(long)puVar36];
            bVar10 = param_3[(long)(puVar32 + (long)puVar24)];
            puVar5 = (undefined1 *)0xba6e2acce79821e0;
            local_aa0 = puVar36;
            local_9f0 = puVar32;
            local_9b8 = puVar24;
            local_990 = puVar25;
            local_988 = puVar26;
            local_8c8 = puVar13;
            local_8c0 = puVar14;
            local_8b8 = puVar15;
            local_8a8 = puVar16;
            local_8a0 = puVar17;
            local_898 = puVar18;
            if (bVar10 != bVar9) {
              puVar5 = (undefined1 *)0xaa9d77ce64023005;
            }
          }
          else {
            puVar19 = local_8f0;
            puVar20 = local_9c8;
            param_5 = local_8e8;
            puVar5 = (undefined1 *)0x2e7820ff94f2299e;
            in_x15 = local_9d0;
            unaff_x30 = local_9c0;
            local_8c8 = puVar13;
            local_8c0 = puVar14;
            local_8b8 = puVar15;
            local_8a8 = puVar16;
            local_8a0 = puVar17;
            local_898 = puVar18;
            if ((puVar29 != (undefined1 *)0x3303345eb4f85978) &&
               (puVar19 = puVar24, puVar20 = puVar25, param_5 = puVar26, puVar5 = puVar29,
               in_x15 = puVar32, unaff_x30 = puVar36, puVar29 == (undefined1 *)0x3359a89ff97157ac))
            {
              local_910 = (undefined1 *)0x0;
              puVar27 = param_4;
              puVar28 = local_910;
              goto LAB_001d3fbc;
            }
          }
        }
        else if ((long)puVar29 < 0x38b550c75dcbd861) {
          if (puVar29 == (undefined1 *)0x33970f856d03deee) {
            local_a10 = (undefined1 *)0x0;
            puVar5 = (undefined1 *)0x5427e3fe8053026a;
            local_8c8 = puVar13;
            local_8c0 = puVar14;
            local_8b8 = puVar15;
            local_8a8 = puVar16;
            local_8a0 = puVar17;
            local_898 = puVar18;
          }
          else {
            local_8c8 = puVar13;
            local_8c0 = puVar14;
            local_8b8 = puVar15;
            local_8a8 = puVar16;
            local_8a0 = puVar17;
            local_898 = puVar18;
            if (puVar29 == (undefined1 *)0x36fa2d308e82c2f8) {
              local_930 = local_aa0 + -(long)local_9b8;
              local_940 = (undefined1 *)0x1;
              local_938 = local_aa0;
LAB_001d330c:
              local_948 = local_9b8;
              puVar5 = (undefined1 *)0x9ea3237b2a99da04;
              local_8c8 = puVar13;
              local_8c0 = puVar14;
              local_8b8 = puVar15;
              local_8a8 = puVar16;
              local_8a0 = puVar17;
              local_898 = puVar18;
            }
          }
        }
        else if (puVar29 == (undefined1 *)0x38b550c75dcbd861) {
          local_a98 = local_8b8;
          if (local_8b0 + 1 <= local_8a8 + 1) {
            local_8b0 = local_8a8;
            local_a98 = puVar35;
          }
          local_980 = local_8b0 + 1;
          iVar23 = FUN_001cbfb0(param_3,param_3 + (long)local_a98);
          puVar5 = (undefined1 *)0x80946337e81a76ad;
          local_a20 = local_8b0;
          local_8c8 = puVar13;
          local_8c0 = puVar14;
          local_8b8 = puVar15;
          local_8a8 = puVar16;
          local_8a0 = puVar17;
          local_898 = puVar18;
          if (iVar23 != 0) {
            puVar5 = (undefined1 *)0x482e5862fb274eec;
          }
        }
        else {
          local_8c8 = puVar13;
          local_8c0 = puVar14;
          local_8b8 = puVar15;
          local_8a8 = puVar16;
          local_8a0 = puVar17;
          local_898 = puVar18;
          if (puVar29 == (undefined1 *)0x4517d092a6c8637b) {
            local_9d8 = local_928;
LAB_001d4508:
            puVar5 = (undefined1 *)0x6df6ddc7d68c40;
            local_8c8 = puVar13;
            local_8c0 = puVar14;
            local_8b8 = puVar15;
            local_8a8 = puVar16;
            local_8a0 = puVar17;
            local_898 = puVar18;
          }
        }
        goto LAB_001d2844;
      }
      if ((long)puVar29 < 0x57f8c36627f7246e) {
        if (0x5375277af4011242 < (long)puVar29) {
          if ((long)puVar29 < 0x55488ab70f6983fa) {
            local_8c0 = local_980;
            puVar5 = (undefined1 *)0x1029ba407f8d7b2d;
            local_8c8 = puVar13;
            local_8b8 = puVar15;
            local_8a8 = puVar16;
            local_8a0 = puVar17;
            local_898 = puVar18;
            if ((puVar29 != (undefined1 *)0x5375277af4011243) &&
               (puVar5 = puVar29, local_8c0 = puVar14, puVar29 == (undefined1 *)0x5427e3fe8053026a))
            {
              bVar6 = param_3[(long)local_a10];
              local_a68 = local_a10 + 1;
              uVar34 = (ulong)(bVar6 >> 3) & 0x18;
              puVar5 = (undefined1 *)0x28a29c505fd0878c;
              if (local_a68 != param_4) {
                puVar5 = (undefined1 *)0x8497e9c855873224;
              }
              *(ulong *)((long)local_90 + uVar34) =
                   1L << ((ulong)bVar6 & 0x3f) | *(ulong *)((long)local_90 + uVar34);
              auStack_890[bVar6] = local_a68;
            }
          }
          else {
            puVar5 = puVar4;
            local_8c8 = puVar13;
            local_8c0 = puVar14;
            local_8b8 = puVar15;
            local_8a8 = puVar16;
            local_8a0 = puVar17;
            local_898 = puVar18;
            if ((puVar29 != (undefined1 *)0x55488ab70f6983fa) &&
               (puVar5 = puVar29, puVar29 == (undefined1 *)0x5701972a5c88a65c)) {
              local_8a8 = local_8f0;
              unaff_x28 = local_8e8;
LAB_001d42d0:
              local_8b0 = (undefined1 *)0xffffffffffffffff;
              local_8b8 = (undefined1 *)0x1;
              puVar5 = (undefined1 *)0x38b550c75dcbd861;
              local_8c8 = puVar13;
              local_8c0 = puVar14;
              puVar22 = local_8b0;
              local_8a0 = puVar17;
              local_898 = puVar18;
            }
          }
          goto LAB_001d2844;
        }
        if (puVar29 != (undefined1 *)0x45f288ff0a7ea1de) {
          if (puVar29 == (undefined1 *)0x482e5862fb274eec) {
            puVar5 = local_a20;
            if (local_a20 <= param_4 + ~(ulong)local_a20) {
              puVar5 = param_4 + ~(ulong)local_a20;
            }
            local_978 = puVar5 + 1;
            puStack_970 = (undefined1 *)0x0;
            goto LAB_001d4958;
          }
          puVar31 = local_aa8;
          local_8c8 = puVar13;
          local_8c0 = puVar14;
          local_8b8 = puVar15;
          local_8a8 = puVar16;
          local_8a0 = puVar17;
          local_898 = puVar18;
          if (puVar29 == (undefined1 *)0x4d702a7aef09f0b4) goto LAB_001d38d8;
          goto LAB_001d2844;
        }
        local_908 = local_ab8;
        local_920 = local_ab8 + -(long)local_9a8;
        local_950 = (undefined1 *)0x1;
      }
      else {
        if (0x754d2b88abe28d01 < (long)puVar29) {
          if ((long)puVar29 < 0x7e7f415062326f70) {
            local_8c0 = local_9e0;
            puVar5 = (undefined1 *)0x1029ba407f8d7b2d;
            local_8c8 = puVar13;
            local_8b8 = puVar15;
            local_8a8 = puVar16;
            local_8a0 = puVar17;
            local_898 = puVar18;
            if ((puVar29 != (undefined1 *)0x754d2b88abe28d02) &&
               (puVar5 = puVar29, local_8c0 = puVar14, puVar29 == (undefined1 *)0x7c9736501c5f4f0a))
            {
              local_908 = local_9a0 + 1;
              local_920 = (undefined1 *)0x1;
              puStack_918 = local_9a0;
LAB_001d3c78:
              local_950 = (undefined1 *)0x1;
              puVar5 = (undefined1 *)0x1666a35a3e139985;
              local_8c8 = puVar13;
              local_8c0 = puVar14;
              local_8b8 = puVar15;
              local_8a8 = puVar16;
              local_8a0 = puVar17;
              local_898 = puVar18;
            }
          }
          else if (puVar29 == (undefined1 *)0x7e7f415062326f70) {
            local_898 = (undefined1 *)0x0;
            local_8a0 = (undefined1 *)0x1;
            local_8c8 = (undefined1 *)0x1;
            puVar5 = (undefined1 *)0xf9b878d6ad273076;
            puVar21 = (undefined1 *)0xffffffffffffffff;
            in_x16 = (undefined1 *)0x1;
            local_8c0 = puVar14;
            local_8b8 = puVar15;
            local_8a8 = puVar16;
          }
          else {
            local_8c8 = puVar13;
            local_8c0 = puVar14;
            local_8b8 = puVar15;
            local_8a8 = puVar16;
            local_8a0 = puVar17;
            local_898 = puVar18;
            if (puVar29 == (undefined1 *)0x7f24efb1c885eb9b) {
              puVar5 = puVar2;
            }
          }
          goto LAB_001d2844;
        }
        if ((long)puVar29 < 0x65f514c9e7f64775) {
          if (puVar29 == (undefined1 *)0x57f8c36627f7246e) {
            local_a90 = local_a18 + 1;
            puVar5 = (undefined1 *)0x5a82b43288d2c981;
            local_8c8 = puVar13;
            local_8c0 = puVar14;
            local_8b8 = puVar15;
            local_8a8 = puVar16;
            local_8a0 = puVar17;
            local_898 = puVar18;
            if (local_a90 != param_4) {
              puVar5 = (undefined1 *)0x25e60e8a57340c35;
            }
          }
          else {
            local_8c8 = puVar13;
            local_8c0 = puVar14;
            local_8b8 = puVar15;
            local_8a8 = puVar16;
            local_8a0 = puVar17;
            local_898 = puVar18;
            if (puVar29 == (undefined1 *)0x5a82b43288d2c981) {
              puVar5 = (undefined1 *)0x5375277af4011243;
            }
          }
          goto LAB_001d2844;
        }
        if (puVar29 != (undefined1 *)0x65f514c9e7f64775) {
          local_8c8 = puVar13;
          local_8c0 = puVar14;
          local_8b8 = puVar15;
          local_8a8 = puVar16;
          local_8a0 = puVar17;
          local_898 = puVar18;
          if (puVar29 == (undefined1 *)0x6ea6282306ea075c) {
            local_aa8 = local_980;
            if (local_980 <= local_9b0) {
              local_aa8 = local_9b0;
            }
            puVar5 = (undefined1 *)0x4d702a7aef09f0b4;
            if (param_4 <= local_aa8) {
              puVar5 = (undefined1 *)0xe8c9031141328d08;
            }
          }
          goto LAB_001d2844;
        }
        local_950 = local_a08 + 1;
        local_908 = local_9a0;
        local_920 = local_998;
      }
      puStack_918 = local_9a8;
      puVar5 = (undefined1 *)0x1666a35a3e139985;
      local_8c8 = puVar13;
      local_8c0 = puVar14;
      local_8b8 = puVar15;
      local_8a8 = puVar16;
      local_8a0 = puVar17;
      local_898 = puVar18;
      goto LAB_001d2844;
    }
    if ((long)puVar29 < -0x3a9a787bdaa35b1e) {
      if ((long)puVar29 < -0x59438dc72a51bac9) {
        if ((long)puVar29 < -0x6c070e2a612990f7) {
          if (puVar29 == (undefined1 *)0x80946337e81a76ad) {
            puStack_970 = param_4 + -(long)local_a98;
            local_978 = local_a98;
LAB_001d4958:
            puVar5 = (undefined1 *)0xdad5fc5726557d2b;
            local_8c8 = puVar13;
            local_8c0 = puVar14;
            local_8b8 = puVar15;
            local_8a8 = puVar16;
            local_8a0 = puVar17;
            local_898 = puVar18;
          }
          else {
            if (puVar29 == (undefined1 *)0x8238ab8752830617) {
              local_938 = local_990 + (long)local_988;
              local_930 = local_988;
              local_948 = local_9b8;
              goto LAB_001d49c0;
            }
            local_8c8 = puVar13;
            local_8c0 = puVar14;
            local_8b8 = puVar15;
            local_8a8 = puVar16;
            local_8a0 = puVar17;
            local_898 = puVar18;
            if (puVar29 == (undefined1 *)0x8497e9c855873224) {
              local_a10 = local_a68;
              puVar5 = (undefined1 *)0x5427e3fe8053026a;
            }
          }
        }
        else if ((long)puVar29 < -0x615cdc84d56625fc) {
          local_8a8 = local_8f0;
          local_8b0 = local_960;
          local_8b8 = local_968;
          puVar5 = (undefined1 *)0x38b550c75dcbd861;
          unaff_x28 = local_8e8;
          local_8c8 = puVar13;
          local_8c0 = puVar14;
          puVar22 = local_8b0;
          local_8a0 = puVar17;
          local_898 = puVar18;
          if ((puVar29 != (undefined1 *)0x93f8f1d59ed66f09) &&
             (puVar5 = puVar29, unaff_x28 = puVar35, local_8b8 = puVar15, puVar22 = puVar31,
             local_8a8 = puVar16, puVar29 == &DAT_965cf93a9dddb88a)) {
            unaff_x28 = (undefined1 *)0x1;
            local_8a8 = (undefined1 *)0xffffffffffffffff;
            goto LAB_001d42d0;
          }
        }
        else if (puVar29 == (undefined1 *)0x9ea3237b2a99da04) {
          local_9d0 = local_940;
          local_9c8 = local_938;
          local_9c0 = local_938 + (long)local_940;
          puVar5 = (undefined1 *)0x3303345eb4f85978;
          if (param_4 <= local_9c0) {
            puVar5 = (undefined1 *)0x55488ab70f6983fa;
          }
          local_8f0 = local_948;
          local_8e8 = local_930;
          local_8c8 = puVar13;
          local_8c0 = puVar14;
          local_8b8 = puVar15;
          local_8a8 = puVar16;
          local_8a0 = puVar17;
          local_898 = puVar18;
        }
        else {
          local_8c8 = puVar13;
          local_8c0 = puVar14;
          local_8b8 = puVar15;
          local_8a8 = puVar16;
          local_8a0 = puVar17;
          local_898 = puVar18;
          if (puVar29 == (undefined1 *)0xa5480f9b0f4a718f) {
LAB_001d3e94:
            local_9d8 = (undefined1 *)0x0;
            goto LAB_001d4508;
          }
        }
        goto LAB_001d2844;
      }
      if (-0x4537a5bdd09230d9 < (long)puVar29) {
        if ((long)puVar29 < -0x415d5952821d8fc8) {
          if (puVar29 == (undefined1 *)0xbac85a422f6dcf28) {
            local_8b0 = (undefined1 *)0xffffffffffffffff;
            local_8a8 = (undefined1 *)0xffffffffffffffff;
            local_8b8 = (undefined1 *)0x1;
            puVar5 = (undefined1 *)0x38b550c75dcbd861;
            unaff_x28 = (undefined1 *)0x1;
            local_8c8 = puVar13;
            local_8c0 = puVar14;
            puVar22 = local_8b0;
            local_8a0 = puVar17;
            local_898 = puVar18;
            goto LAB_001d2844;
          }
          local_8c8 = puVar13;
          local_8c0 = puVar14;
          local_8b8 = puVar15;
          local_8a8 = puVar16;
          local_8a0 = puVar17;
          local_898 = puVar18;
          if (puVar29 != (undefined1 *)0xbcb67c35d138e776) goto LAB_001d2844;
          local_910 = (undefined1 *)0x0;
          puVar27 = local_a18 + -(long)local_a20;
          puVar28 = local_910;
        }
        else {
          if (puVar29 == (undefined1 *)0xbea2a6ad7de27038) {
            local_9e0 = local_ac8 + -1;
            puVar5 = (undefined1 *)0x754d2b88abe28d02;
            local_8c8 = puVar13;
            local_8c0 = puVar14;
            local_8b8 = puVar15;
            local_8a8 = puVar16;
            local_8a0 = puVar17;
            local_898 = puVar18;
            if (param_3[(long)local_9e0] != local_928[(long)local_9e0]) {
              puVar5 = (undefined1 *)0xc0f9015491ea412b;
            }
            goto LAB_001d2844;
          }
          local_8c8 = puVar13;
          local_8c0 = puVar14;
          local_8b8 = puVar15;
          local_8a8 = puVar16;
          local_8a0 = puVar17;
          local_898 = puVar18;
          if (puVar29 != (undefined1 *)0xc0f9015491ea412b) goto LAB_001d2844;
        }
LAB_001d3fbc:
        local_910 = puVar28;
        local_958 = puVar27;
        puVar19 = puVar24;
        puVar20 = puVar25;
        param_5 = puVar26;
        puVar5 = (undefined1 *)0xc82fc556374cfb04;
        in_x15 = puVar32;
        unaff_x30 = puVar36;
        local_8c8 = puVar13;
        local_8c0 = puVar14;
        local_8b8 = puVar15;
        local_8a8 = puVar16;
        local_8a0 = puVar17;
        local_898 = puVar18;
        goto LAB_001d2844;
      }
      if (puVar29 == (undefined1 *)0xa6bc7238d5ae4537) {
        local_928 = local_9f8;
        local_ab0 = (ulong)(byte)local_9f8[(long)puVar11];
        local_9b0 = local_9e8;
        puVar5 = (undefined1 *)0x3359a89ff97157ac;
        local_8c8 = puVar13;
        local_8c0 = puVar14;
        local_8b8 = puVar15;
        local_8a8 = puVar16;
        local_8a0 = puVar17;
        local_898 = puVar18;
        if ((*(ulong *)((long)local_90 + ((ulong)((byte)local_9f8[(long)puVar11] >> 3) & 0x18)) >>
             (local_ab0 & 0x3f) & 1) != 0) {
          puVar5 = (undefined1 *)0x859356aa69720d1;
        }
      }
      else if (puVar29 == (undefined1 *)0xaa9d77ce64023005) {
        puVar5 = (undefined1 *)0x36fa2d308e82c2f8;
        local_8c8 = puVar13;
        local_8c0 = puVar14;
        local_8b8 = puVar15;
        local_8a8 = puVar16;
        local_8a0 = puVar17;
        local_898 = puVar18;
        if (bVar10 <= bVar9) {
          puVar5 = (undefined1 *)0x129b99854ca09618;
        }
      }
      else {
        local_8c8 = puVar13;
        local_8c0 = puVar14;
        local_8b8 = puVar15;
        local_8a8 = puVar16;
        local_8a0 = puVar17;
        local_898 = puVar18;
        if (puVar29 == (undefined1 *)0xba6e2acce79821e0) {
          puVar5 = (undefined1 *)0x8238ab8752830617;
          if (local_9f0 != local_988) {
            puVar5 = (undefined1 *)0xdaabd6243423b9d5;
          }
        }
      }
      goto LAB_001d2844;
    }
    if ((long)puVar29 < -0x1736fceebecd72f8) {
      if ((long)puVar29 < -0x285d78ba0c5704fb) {
        if (puVar29 == (undefined1 *)0xc5658784255ca4e2) {
          local_910 = (undefined1 *)0x0;
          local_958 = local_a80;
          if ((local_a74 & local_9b0 != (undefined1 *)0x0 & param_4 + -(long)local_a70 < puVar27) ==
              0) {
            local_958 = param_4 + -(long)local_a70;
          }
          puVar5 = (undefined1 *)0xc82fc556374cfb04;
          local_8c8 = puVar13;
          local_8c0 = puVar14;
          local_8b8 = puVar15;
          local_8a8 = puVar16;
          local_8a0 = puVar17;
          local_898 = puVar18;
        }
        else if (puVar29 == (undefined1 *)0xc82fc556374cfb04) {
          local_a88 = local_928 + (long)local_958;
          puVar5 = (undefined1 *)0xa5480f9b0f4a718f;
          if ((long)param_4 <= param_2 - (long)local_a88) {
            puVar5 = (undefined1 *)0xe3a89f94bb3e7e7e;
          }
          local_ac0 = local_910;
          local_8c8 = puVar13;
          local_8c0 = puVar14;
          local_8b8 = puVar15;
          local_8a8 = puVar16;
          local_8a0 = puVar17;
          local_898 = puVar18;
        }
        else {
          local_8c8 = puVar13;
          local_8c0 = puVar14;
          local_8b8 = puVar15;
          local_8a8 = puVar16;
          local_8a0 = puVar17;
          local_898 = puVar18;
          if (puVar29 == (undefined1 *)0xc84313bc4262f702) goto LAB_001d3e94;
        }
      }
      else if ((long)puVar29 < -0x252a03a8d9aa82d5) {
        if (puVar29 == (undefined1 *)0xd7a28745f3a8fb05) {
          puVar19 = (undefined1 *)0xffffffffffffffff;
          puVar20 = (undefined1 *)0x0;
          param_5 = (undefined1 *)0x1;
          puVar5 = (undefined1 *)0x2e7820ff94f2299e;
          in_x15 = (undefined1 *)0x1;
          unaff_x30 = (undefined1 *)0x1;
          local_8c8 = puVar13;
          local_8c0 = puVar14;
          local_8b8 = puVar15;
          local_8a8 = puVar16;
          local_8a0 = puVar17;
          local_898 = puVar18;
        }
        else {
          local_8c8 = puVar13;
          local_8c0 = puVar14;
          local_8b8 = puVar15;
          local_8a8 = puVar16;
          local_8a0 = puVar17;
          local_898 = puVar18;
          if (puVar29 == (undefined1 *)0xdaabd6243423b9d5) {
            local_940 = local_9f0 + 1;
            local_930 = local_988;
            local_938 = local_990;
            goto LAB_001d330c;
          }
        }
      }
      else {
        param_6 = local_978;
        param_7 = puStack_970;
        puVar5 = puVar1;
        local_8c8 = puVar13;
        local_8c0 = puVar14;
        local_8b8 = puVar15;
        local_8a8 = puVar16;
        local_8a0 = puVar17;
        local_898 = puVar18;
        if ((puVar29 != (undefined1 *)0xdad5fc5726557d2b) &&
           (param_6 = puVar27, param_7 = puVar28, puVar5 = puVar29,
           puVar29 == (undefined1 *)0xe3a89f94bb3e7e7e)) {
          local_9e8 = local_ac0;
          local_9f8 = local_a88;
          goto LAB_001d3e00;
        }
      }
    }
    else if ((long)puVar29 < 0x6df6ddc7d68c40) {
      if ((long)puVar29 < -0x647872952d8cf8a) {
        puVar5 = (undefined1 *)0x5375277af4011243;
        local_8c8 = puVar13;
        local_8c0 = puVar14;
        local_8b8 = puVar15;
        local_8a8 = puVar16;
        local_8a0 = puVar17;
        local_898 = puVar18;
        if ((puVar29 != (undefined1 *)0xe8c9031141328d08) &&
           (puVar5 = puVar29, puVar29 == (undefined1 *)0xf494b3c44b0594a4)) {
          local_a74 = puVar28 != (undefined1 *)0x0;
          local_9e8 = (undefined1 *)0x0;
          local_a80 = param_4 + -(long)puVar27;
          local_9f8 = param_1;
LAB_001d3e00:
          param_6 = puVar27;
          param_7 = puVar28;
          puVar5 = (undefined1 *)0xa6bc7238d5ae4537;
          local_8c8 = puVar13;
          local_8c0 = puVar14;
          local_8b8 = puVar15;
          local_8a8 = puVar16;
          local_8a0 = puVar17;
          local_898 = puVar18;
        }
      }
      else if (puVar29 == (undefined1 *)0xf9b878d6ad273076) {
        bVar7 = param_3[(long)puVar33];
        bVar8 = param_3[(long)(puVar30 + (long)local_8a0)];
        puVar5 = (undefined1 *)0x102f8ffd02923754;
        local_ab8 = puVar33;
        local_a08 = local_8a0;
        local_9a8 = puVar30;
        local_9a0 = local_898;
        local_998 = local_8c8;
        local_8c8 = puVar13;
        local_8c0 = puVar14;
        local_8b8 = puVar15;
        local_8a8 = puVar16;
        local_8a0 = puVar17;
        local_898 = puVar18;
        if (bVar8 != bVar7) {
          puVar5 = (undefined1 *)0x297717612b720ee8;
        }
      }
      else {
        local_8c8 = puVar13;
        local_8c0 = puVar14;
        local_8b8 = puVar15;
        local_8a8 = puVar16;
        local_8a0 = puVar17;
        local_898 = puVar18;
        if (puVar29 == (undefined1 *)0xfa5a19834426ec82) {
          local_908 = local_9a0 + (long)local_998;
          local_920 = local_998;
          puStack_918 = local_9a8;
          goto LAB_001d3c78;
        }
      }
    }
    else if ((long)puVar29 < 0x859356aa69720d1) {
      local_8a0 = local_a50;
      local_898 = local_a48;
      local_8c8 = local_968;
      puVar5 = (undefined1 *)0xf9b878d6ad273076;
      puVar21 = local_960;
      in_x16 = local_a40;
      local_8c0 = puVar14;
      local_8b8 = puVar15;
      local_8a8 = puVar16;
      if ((puVar29 != (undefined1 *)0x494913e247ec810) &&
         (puVar5 = puVar29, puVar21 = puVar30, in_x16 = puVar33, local_8c8 = puVar13,
         local_8a0 = puVar17, local_898 = puVar18, puVar29 == (undefined1 *)0x6df6ddc7d68c40)) {
        if (*(long *)(lVar12 + 0x28) == local_90[4]) {
          return local_9d8;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(puVar24,puVar25);
      }
    }
    else if (puVar29 == (undefined1 *)0x859356aa69720d1) {
      local_a70 = (undefined1 *)auStack_890[local_ab0];
      puVar5 = (undefined1 *)0x6ea6282306ea075c;
      local_8c8 = puVar13;
      local_8c0 = puVar14;
      local_8b8 = puVar15;
      local_8a8 = puVar16;
      local_8a0 = puVar17;
      local_898 = puVar18;
      if (local_a70 != param_4) {
        puVar5 = (undefined1 *)0xc5658784255ca4e2;
      }
    }
    else {
      local_8c8 = puVar13;
      local_8c0 = puVar14;
      local_8b8 = puVar15;
      local_8a8 = puVar16;
      local_8a0 = puVar17;
      local_898 = puVar18;
      if (puVar29 == (undefined1 *)0x1029ba407f8d7b2d) {
        puVar5 = (undefined1 *)0xbea2a6ad7de27038;
        local_ac8 = local_8c0;
        if (local_8c0 <= local_9b0) {
          puVar5 = (undefined1 *)0x4517d092a6c8637b;
        }
      }
    }
  } while( true );
}


