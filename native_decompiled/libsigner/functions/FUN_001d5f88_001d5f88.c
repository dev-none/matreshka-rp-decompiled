// Function: FUN_001d5f88
// Entry: 001d5f88

byte * FUN_001d5f88(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  byte *pbVar25;
  byte *in_x11;
  byte *pbVar26;
  byte *in_x12;
  byte *pbVar27;
  byte *in_x13;
  byte *pbVar28;
  byte *in_x14;
  byte *pbVar29;
  byte *in_x16;
  byte *pbVar30;
  uint uVar31;
  ulong uVar32;
  byte *unaff_x21;
  byte *pbVar33;
  byte *unaff_x22;
  byte *pbVar34;
  byte *local_af0;
  byte *local_ae8;
  byte *local_ae0;
  byte *local_ad8;
  byte *local_ad0;
  byte *local_ac8;
  byte *local_ac0;
  byte *local_ab8;
  byte *local_ab0;
  byte *local_aa8;
  ulong local_aa0;
  byte *local_a98;
  byte local_a8c;
  byte *local_a88;
  byte *local_a80;
  uint local_a74;
  undefined8 local_a68;
  byte *local_a50;
  byte *local_a48;
  byte *local_a40;
  byte *local_a38;
  byte *local_a30;
  byte *local_a28;
  byte *local_a20;
  byte *local_a18;
  byte *local_a10;
  byte *local_a08;
  byte *local_a00;
  byte *local_9f8;
  ulong local_9f0;
  byte *local_9e8;
  byte *local_9e0;
  byte *local_9d8;
  byte *local_9d0;
  byte *local_9c8;
  byte *local_9c0;
  byte *pbStack_9b8;
  byte *local_9b0;
  byte *local_9a8;
  byte *local_9a0;
  byte *local_998;
  undefined8 local_990;
  byte *local_980;
  byte *local_978;
  byte *local_970;
  byte *local_968;
  byte *local_960;
  byte *local_958;
  byte *local_950;
  byte *local_948;
  byte *local_940;
  byte *local_938;
  byte *local_930;
  byte *local_928;
  byte *local_920;
  byte *local_918;
  byte *local_910;
  byte *local_908;
  byte *local_900;
  byte *local_8f8;
  byte *local_8f0;
  byte *local_8e8;
  byte *local_8e0;
  byte *local_8d8;
  byte *local_8d0;
  byte *local_8c8;
  byte *local_8c0;
  byte *local_8b8;
  byte *local_8b0;
  byte *local_8a8;
  byte *local_898;
  undefined8 auStack_890 [256];
  ulong local_90 [6];
  
  bVar6 = 0;
  bVar4 = 0;
  bVar7 = 0;
  bVar5 = 0;
  local_a68 = 0;
  local_a74 = 0;
  local_990 = 0;
  lVar8 = tpidr_el0;
  pbVar23 = (byte *)0xd0535adc928c1bbf;
  local_90[4] = *(long *)(lVar8 + 0x28);
  bVar3 = *param_2;
  local_90[1] = 0;
  local_90[0] = 0;
  local_90[3] = 0;
  local_90[2] = 0;
  pbVar9 = param_1;
  pbVar20 = param_2;
  pbVar2 = (byte *)0x4357c11efd169a0;
  pbVar10 = pbVar23;
  pbVar11 = in_x11;
  pbVar12 = in_x12;
  pbVar13 = in_x13;
  pbVar14 = in_x14;
  pbVar15 = in_x16;
  pbVar16 = unaff_x21;
  pbVar17 = unaff_x22;
  uVar18 = 0;
  pbVar1 = pbVar23;
  if (bVar3 != 0) {
    pbVar9 = param_1;
    pbVar10 = (byte *)0x9ea8bf2b74e4b439;
    pbVar11 = in_x11;
    pbVar12 = in_x12;
    pbVar13 = in_x13;
    pbVar14 = in_x14;
    pbVar15 = in_x16;
    pbVar16 = unaff_x21;
    pbVar17 = unaff_x22;
    pbVar1 = (byte *)0x9ea8bf2b74e4b439;
  }
LAB_001d608c:
  uVar31 = uVar18;
  pbVar34 = pbVar17;
  pbVar33 = pbVar16;
  pbVar30 = pbVar15;
  pbVar29 = pbVar14;
  pbVar28 = pbVar13;
  pbVar27 = pbVar12;
  pbVar26 = pbVar11;
  pbVar24 = pbVar23;
  pbVar22 = pbVar10;
  pbVar21 = pbVar2;
  pbVar25 = pbVar9;
  pbVar2 = pbVar21;
  pbVar9 = pbVar25;
  pbVar10 = pbVar22;
  pbVar23 = pbVar24;
  pbVar11 = pbVar26;
  pbVar12 = pbVar27;
  pbVar13 = pbVar28;
  pbVar14 = pbVar29;
  pbVar15 = pbVar30;
  pbVar16 = pbVar33;
  pbVar17 = pbVar34;
  uVar18 = uVar31;
  if (0x494913e247ec80f < (long)pbVar21) {
    if (0x4517d092a6c8637a < (long)pbVar21) {
      if ((long)pbVar21 < 0x57f8c36627f7246e) {
        if ((long)pbVar21 < 0x5375277af4011243) {
          if ((long)pbVar21 < 0x482e5862fb274eec) {
            if (pbVar21 == (byte *)0x45f288ff0a7ea1de) {
              local_9d8 = pbVar20 + -(long)local_a88;
              local_a08 = local_a88;
              goto LAB_001d7aa0;
            }
            if (pbVar21 == (byte *)0x4517d092a6c8637b) {
              if (*(long *)(lVar8 + 0x28) == local_90[4]) {
                return local_998;
              }
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
          }
          else {
            pbVar2 = (byte *)0xc84313bc4262f702;
            pbVar10 = local_938;
            if ((pbVar21 != (byte *)0x482e5862fb274eec) &&
               (pbVar2 = pbVar21, pbVar10 = pbVar22, pbVar21 == (byte *)0x4d702a7aef09f0b4)) {
              pbVar2 = (byte *)0x6ea6282306ea075c;
              pbVar11 = local_ab0;
              uVar18 = local_a68._4_4_;
            }
          }
        }
        else if ((long)pbVar21 < 0x55488ab70f6983fa) {
          pbVar2 = (byte *)0xa5480f9b0f4a718f;
          if ((pbVar21 != (byte *)0x5375277af4011243) &&
             (pbVar2 = pbVar21, pbVar21 == (byte *)0x5427e3fe8053026a)) {
            local_918 = local_948 + (long)local_940;
            local_900 = (byte *)0x1;
LAB_001d6ff0:
            local_910 = local_940;
            local_908 = local_950;
            goto LAB_001d7e40;
          }
        }
        else if (pbVar21 == (byte *)0x55488ab70f6983fa) {
          pbVar2 = (byte *)0x5701972a5c88a65c;
          if (bVar5 <= bVar4) {
            pbVar2 = (byte *)0x7e7f415062326f70;
          }
        }
        else if (pbVar21 == (byte *)0x5701972a5c88a65c) {
          local_918 = local_ac0;
          local_910 = local_ac0 + -(long)local_950;
          local_908 = local_950;
          local_900 = (byte *)0x1;
          pbVar2 = (byte *)0x2e7820ff94f2299e;
        }
      }
      else if ((long)pbVar21 < 0x75ce15e08caa4c6a) {
        if ((long)pbVar21 < 0x65f514c9e7f64775) {
          if (pbVar21 == (byte *)0x57f8c36627f7246e) {
            pbVar2 = (byte *)0x5a82b43288d2c981;
            local_af0 = pbVar27;
            if (pbVar27 <= local_980) {
              pbVar2 = (byte *)0x25e60e8a57340c35;
            }
          }
          else if (pbVar21 == (byte *)0x5a82b43288d2c981) {
            local_9b0 = local_af0 + -1;
            pbVar2 = (byte *)0x1029ba407f8d7b2d;
            if (param_2[(long)local_9b0] != local_8a8[(long)local_9b0]) {
              pbVar2 = (byte *)0xbcb67c35d138e776;
            }
          }
        }
        else if (pbVar21 == (byte *)0x65f514c9e7f64775) {
          local_9f8 = local_8f0;
          local_a88 = local_8f8;
          if (local_8f0 + 1 <= local_8d0 + 1) {
            local_9f8 = local_8d0;
            local_a88 = local_8e8;
          }
          local_920 = local_9f8 + 1;
          iVar19 = FUN_001cbfb0(param_2,param_2 + (long)local_a88);
          pbVar20 = local_8e0;
          pbVar2 = (byte *)0x45f288ff0a7ea1de;
          if (iVar19 != 0) {
            pbVar2 = (byte *)0x297717612b720ee8;
          }
        }
        else if (pbVar21 == (byte *)0x6ea6282306ea075c) {
          pbVar2 = (byte *)0xe8c9031141328d08;
          local_a38 = pbVar26;
          if (uVar31 != local_8a8[(long)pbVar26]) {
            pbVar2 = (byte *)0x1c201a6f44d38273;
          }
        }
      }
      else if ((long)pbVar21 < 0x7e7f415062326f70) {
        if (pbVar21 == (byte *)0x75ce15e08caa4c6a) {
LAB_001d7a1c:
          local_998 = (byte *)0x0;
LAB_001d7a3c:
          pbVar2 = (byte *)0x4517d092a6c8637b;
        }
        else if (pbVar21 == (byte *)0x7c9736501c5f4f0a) {
          local_9f0 = (ulong)pbVar20 | 0x3f;
          local_9c8 = local_a08;
          local_a98 = pbVar20 + -1;
          local_9d0 = local_9d8;
          local_9e0 = (byte *)0x0;
          pbVar2 = (byte *)0x1666a35a3e139985;
          local_a00 = param_1;
          local_9e8 = param_1;
        }
      }
      else if (pbVar21 == (byte *)0x7e7f415062326f70) {
        local_918 = local_948 + 1;
        local_910 = (byte *)0x1;
        local_900 = (byte *)0x1;
        local_908 = local_948;
LAB_001d7e40:
        pbVar2 = (byte *)0x2e7820ff94f2299e;
      }
      else if (pbVar21 == (byte *)0x7f24efb1c885eb9b) {
        local_a30 = local_898;
        uVar31 = local_a74;
LAB_001d7570:
        local_990 = CONCAT44(local_990._4_4_,uVar31);
        pbVar2 = (byte *)0xa6783f0b0f892393;
      }
      goto LAB_001d608c;
    }
    if ((long)pbVar21 < 0x28a29c505fd0878c) {
      if ((long)pbVar21 < 0x129b99854ca09618) {
        if ((long)pbVar21 < 0x1029ba407f8d7b2d) {
          if (pbVar21 == (byte *)0x494913e247ec810) {
            local_938 = (byte *)FUN_001cbd94(local_8b0,0,local_9f0);
            pbVar2 = (byte *)0xdad5fc5726557d2b;
            if (local_938 != (byte *)0x0) {
              pbVar2 = (byte *)0x38b550c75dcbd861;
            }
          }
          else if (pbVar21 == (byte *)0x859356aa69720d1) {
            local_9e8 = local_8a8 + (long)pbVar24;
            local_a00 = local_ae8;
            pbVar2 = (byte *)0x1666a35a3e139985;
            local_9e0 = pbVar25;
          }
        }
        else {
          pbVar2 = (byte *)0x57f8c36627f7246e;
          pbVar12 = local_9b0;
          if ((pbVar21 != (byte *)0x1029ba407f8d7b2d) &&
             (pbVar2 = pbVar21, pbVar12 = pbVar27, pbVar21 == (byte *)0x102f8ffd02923754)) {
            local_8f0 = local_928;
            local_8f8 = local_930;
LAB_001d70b8:
            local_8d0 = local_958;
            local_8e0 = local_898;
            local_8e8 = local_960;
            goto LAB_001d7ff0;
          }
        }
        goto LAB_001d608c;
      }
      if ((long)pbVar21 < 0x1c201a6f44d38273) {
        if (pbVar21 == (byte *)0x129b99854ca09618) {
          pbVar2 = (byte *)0x9ea3237b2a99da04;
          if (bVar6 <= bVar7) {
            pbVar2 = (byte *)0x3303345eb4f85978;
          }
        }
        else if (pbVar21 == (byte *)0x1666a35a3e139985) {
          local_ae0 = local_9e8;
          local_8b0 = local_a00;
          local_980 = local_9e0;
          pbVar2 = (byte *)0x494913e247ec810;
          local_8a8 = local_ae0;
          if ((long)pbVar20 <= (long)local_a00 - (long)local_9e8) {
            pbVar2 = (byte *)0x93f8f1d59ed66f09;
          }
        }
        goto LAB_001d608c;
      }
      if (pbVar21 != (byte *)0x1c201a6f44d38273) {
        if (pbVar21 == (byte *)0x25e60e8a57340c35) {
          local_998 = local_8a8;
          goto LAB_001d7a3c;
        }
        goto LAB_001d608c;
      }
      pbVar25 = local_a38 + -(long)local_9f8;
    }
    else {
      if ((long)pbVar21 < 0x3359a89ff97157ac) {
        if ((long)pbVar21 < 0x2e7820ff94f2299e) {
          if (pbVar21 == (byte *)0x28a29c505fd0878c) {
            pbVar2 = (byte *)0x8238ab8752830617;
            pbVar13 = (byte *)0xffffffffffffffff;
            pbVar14 = (byte *)0x1;
            pbVar15 = (byte *)0x1;
            pbVar16 = (byte *)0x1;
            pbVar17 = (byte *)0x0;
          }
          else if (pbVar21 == (byte *)0x297717612b720ee8) {
            local_9d8 = (byte *)0x0;
            pbVar2 = local_9f8;
            if (local_9f8 <= pbVar20 + ~(ulong)local_9f8) {
              pbVar2 = pbVar20 + ~(ulong)local_9f8;
            }
            local_a08 = pbVar2 + 1;
LAB_001d7aa0:
            pbVar2 = (byte *)0x7c9736501c5f4f0a;
          }
        }
        else if (pbVar21 == (byte *)0x2e7820ff94f2299e) {
          local_ad0 = local_900;
          local_ac8 = local_918;
          local_958 = local_908;
          local_a80 = local_918 + (long)local_900;
          local_960 = local_910;
          pbVar2 = (byte *)0xba6e2acce79821e0;
          if (local_898 <= local_a80) {
            pbVar2 = (byte *)0x33970f856d03deee;
          }
        }
        else if (pbVar21 == (byte *)0x3303345eb4f85978) {
          local_8b8 = local_970 + 1;
          local_8c0 = local_970;
          local_8c8 = (byte *)0x1;
          local_8d8 = (byte *)0x1;
          goto LAB_001d7e94;
        }
        goto LAB_001d608c;
      }
      if (0x36fa2d308e82c2f7 < (long)pbVar21) {
        if (pbVar21 == (byte *)0x36fa2d308e82c2f8) {
          local_8c8 = local_a18 + 1;
          local_8b8 = local_970;
          local_8d8 = local_968;
          goto LAB_001d7e78;
        }
        if (pbVar21 == (byte *)0x38b550c75dcbd861) {
          pbVar2 = (byte *)0x80946337e81a76ad;
          if ((long)pbVar20 <= (long)local_938 - (long)local_ae0) {
            pbVar2 = (byte *)0x482e5862fb274eec;
          }
        }
        goto LAB_001d608c;
      }
      if (pbVar21 != (byte *)0x3359a89ff97157ac) {
        if (pbVar21 == (byte *)0x33970f856d03deee) {
          pbVar2 = (byte *)0x28a29c505fd0878c;
          if ((local_a8c & 1) == 0) {
            pbVar2 = &DAT_965cf93a9dddb88a;
          }
        }
        goto LAB_001d608c;
      }
      pbVar25 = pbVar20 + -(long)local_aa8;
      if (pbVar20 + -(long)local_aa8 <= local_980) {
        pbVar25 = local_980;
      }
    }
LAB_001d7c50:
    pbVar9 = (byte *)0x0;
    pbVar2 = (byte *)0x859356aa69720d1;
    pbVar23 = pbVar25;
    goto LAB_001d608c;
  }
  if (-0x434983ca2ec7188b < (long)pbVar21) {
    if ((long)pbVar21 < -0x1f72c151724b0727) {
      if ((long)pbVar21 < -0x2faca5236d73e441) {
        if ((long)pbVar21 < -0x37d03aa9c8b304fc) {
          pbVar9 = local_9d0;
          pbVar2 = (byte *)0x859356aa69720d1;
          pbVar23 = local_9c8;
          if ((pbVar21 != (byte *)0xbcb67c35d138e776) &&
             (pbVar9 = pbVar25, pbVar2 = pbVar21, pbVar23 = pbVar24,
             pbVar21 == (byte *)0xc5658784255ca4e2)) {
            local_9a8 = local_920;
            if (local_920 <= local_980) {
              local_9a8 = local_980;
            }
            local_990 = (ulong)CONCAT14(param_2[(long)local_9a8],(undefined4)local_990);
            pbVar2 = (byte *)0xe3a89f94bb3e7e7e;
            if (param_2[(long)local_9a8] != 0) {
              pbVar2 = (byte *)0xc82fc556374cfb04;
            }
          }
        }
        else {
          pbVar2 = (byte *)0x6ea6282306ea075c;
          pbVar11 = local_9a8;
          uVar18 = local_990._4_4_;
          if ((pbVar21 != (byte *)0xc82fc556374cfb04) &&
             (pbVar2 = pbVar21, pbVar11 = pbVar26, uVar18 = uVar31,
             pbVar21 == (byte *)0xc84313bc4262f702)) {
            local_aa0 = (ulong)local_8a8[(long)local_a98];
            pbVar2 = (byte *)0xf494b3c44b0594a4;
            local_ae8 = pbVar22;
            if ((*(ulong *)((long)local_90 + ((ulong)(local_8a8[(long)local_a98] >> 3) & 0x18)) >>
                 (local_aa0 & 0x3f) & 1) != 0) {
              pbVar2 = (byte *)0xa6bc7238d5ae4537;
            }
          }
        }
        goto LAB_001d608c;
      }
      if (-0x255429dbcbdc462c < (long)pbVar21) {
        if (pbVar21 == (byte *)0xdaabd6243423b9d5) {
          pbVar2 = (byte *)0xaa9d77ce64023005;
          if (local_a18 != local_968) {
            pbVar2 = (byte *)0x36fa2d308e82c2f8;
          }
        }
        else if (pbVar21 == (byte *)0xdad5fc5726557d2b) {
          pbVar2 = (byte *)0xc84313bc4262f702;
          pbVar10 = local_8b0 + local_9f0;
        }
        goto LAB_001d608c;
      }
      if (pbVar21 != (byte *)0xd0535adc928c1bbf) {
        if (pbVar21 == (byte *)0xd7a28745f3a8fb05) {
          pbVar2 = (byte *)0x5427e3fe8053026a;
          if (local_a10 != local_940) {
            pbVar2 = (byte *)0x8497e9c855873224;
          }
        }
        goto LAB_001d608c;
      }
      local_8e0 = (byte *)0x0;
    }
    else {
      if (-0x9c369a095011bab < (long)pbVar21) {
        if ((long)pbVar21 < -0x5a5e67cbbd9137e) {
          if (pbVar21 == (byte *)0xf63c965f6afee456) {
            local_898 = local_ab8 + 1;
            uVar32 = (ulong)((uint)local_a68 >> 3) & 0x1ffffff8;
            local_a74 = (uint)param_2[(long)local_898];
            *(ulong *)((long)local_90 + uVar32) =
                 *(ulong *)((long)local_90 + uVar32) | 1L << (local_a68 & 0x3f);
            pbVar2 = (byte *)0xbca196f3040a25ee;
            if (local_a74 != 0) {
              pbVar2 = (byte *)0x7f24efb1c885eb9b;
            }
            auStack_890[local_a68 & 0xffffffff] = local_898;
          }
          else if (pbVar21 == (byte *)0xf9b878d6ad273076) {
            pbStack_9b8 = local_8b8;
            local_9c0 = local_8c8;
            local_928 = local_8c0;
            local_9a0 = local_8c8 + (long)local_8b8;
            local_930 = local_8d8;
            pbVar2 = (byte *)0xfa5a19834426ec82;
            if (local_898 <= local_9a0) {
              pbVar2 = (byte *)0x102f8ffd02923754;
            }
          }
        }
        else {
          pbVar2 = (byte *)0x8238ab8752830617;
          pbVar13 = local_928;
          pbVar14 = local_9c0;
          pbVar15 = local_9a0;
          pbVar16 = local_930;
          pbVar17 = pbStack_9b8;
          if ((pbVar21 != (byte *)0xfa5a19834426ec82) &&
             (pbVar2 = pbVar21, pbVar13 = pbVar28, pbVar14 = pbVar29, pbVar15 = pbVar30,
             pbVar16 = pbVar33, pbVar17 = pbVar34, pbVar21 == (byte *)0x4357c11efd169a0)) {
            pbVar2 = pbVar1;
          }
        }
        goto LAB_001d608c;
      }
      if (-0x1736fceebecd72f9 < (long)pbVar21) {
        if (pbVar21 == (byte *)0xe8c9031141328d08) {
          local_ab0 = local_a38 + 1;
          local_a68 = (ulong)CONCAT14(param_2[(long)local_ab0],(uint)local_a68);
          pbVar2 = (byte *)0x5375277af4011243;
          if (param_2[(long)local_ab0] != 0) {
            pbVar2 = (byte *)0x4d702a7aef09f0b4;
          }
        }
        else {
          pbVar25 = pbVar20;
          if (pbVar21 == (byte *)0xf494b3c44b0594a4) goto LAB_001d7c50;
        }
        goto LAB_001d608c;
      }
      if (pbVar21 != (byte *)0xe08d3eae8db4f8d9) {
        if (pbVar21 == (byte *)0xe3a89f94bb3e7e7e) {
          pbVar2 = (byte *)0xa5480f9b0f4a718f;
        }
        goto LAB_001d608c;
      }
      local_8e0 = local_898;
    }
    local_8d0 = (byte *)0xffffffffffffffff;
    local_8e8 = (byte *)0x1;
    local_8f0 = (byte *)0xffffffffffffffff;
    local_8f8 = (byte *)0x1;
LAB_001d7ff0:
    pbVar2 = (byte *)0x65f514c9e7f64775;
    pbVar10 = pbVar22;
    pbVar12 = pbVar27;
    goto LAB_001d608c;
  }
  if ((long)pbVar21 < -0x5ab7f064f0b58e71) {
    if ((long)pbVar21 < -0x6c070e2a612990f7) {
      if (pbVar21 == (byte *)0x80946337e81a76ad) goto LAB_001d7a1c;
      if (pbVar21 == (byte *)0x8238ab8752830617) {
        bVar6 = param_2[(long)pbVar30];
        bVar7 = param_2[(long)(pbVar29 + (long)pbVar28)];
        pbVar2 = (byte *)0xdaabd6243423b9d5;
        local_ad8 = pbVar30;
        local_a18 = pbVar29;
        local_978 = pbVar28;
        local_970 = pbVar34;
        local_968 = pbVar33;
        if (bVar7 != bVar6) {
          pbVar2 = (byte *)0x129b99854ca09618;
        }
      }
      else if (pbVar21 == (byte *)0x8497e9c855873224) {
        local_900 = local_a10 + 1;
        local_918 = local_948;
        goto LAB_001d6ff0;
      }
    }
    else if ((long)pbVar21 < -0x615cdc84d56625fc) {
      pbVar2 = (byte *)0xc84313bc4262f702;
      pbVar10 = local_8b0;
      if ((pbVar21 != (byte *)0x93f8f1d59ed66f09) &&
         (pbVar2 = pbVar21, pbVar10 = pbVar22, pbVar21 == &DAT_965cf93a9dddb88a)) {
        local_8f0 = (byte *)0xffffffffffffffff;
        local_8f8 = (byte *)0x1;
        goto LAB_001d70b8;
      }
    }
    else if (pbVar21 == (byte *)0x9ea3237b2a99da04) {
      local_8b8 = local_ad8;
      local_8d8 = local_ad8 + -(long)local_978;
LAB_001d7e70:
      local_8c8 = (byte *)0x1;
LAB_001d7e78:
      local_8c0 = local_978;
LAB_001d7e94:
      pbVar2 = (byte *)0xf9b878d6ad273076;
    }
    else if (pbVar21 == (byte *)0x9ea8bf2b74e4b439) {
      local_a30 = (byte *)0x0;
      uVar31 = (uint)bVar3;
      goto LAB_001d7570;
    }
    goto LAB_001d608c;
  }
  if ((long)pbVar21 < -0x556288319bfdcffb) {
    if ((long)pbVar21 < -0x59438dc72a51bac9) {
      pbVar2 = (byte *)0x57f8c36627f7246e;
      pbVar12 = local_920;
      if ((pbVar21 != (byte *)0xa5480f9b0f4a718f) &&
         (pbVar2 = pbVar21, pbVar12 = pbVar27, pbVar21 == (byte *)0xa6783f0b0f892393)) {
        local_a68 = CONCAT44(local_a68._4_4_,(undefined4)local_990);
        local_ab8 = local_a30;
        pbVar2 = (byte *)0x75ce15e08caa4c6a;
        if (param_1[(long)local_a30] != 0) {
          pbVar2 = (byte *)0xf63c965f6afee456;
        }
      }
      goto LAB_001d608c;
    }
    if (pbVar21 == (byte *)0xa6bc7238d5ae4537) {
      local_aa8 = (byte *)auStack_890[local_aa0];
      pbVar2 = (byte *)0xc5658784255ca4e2;
      if (pbVar20 != local_aa8) {
        pbVar2 = (byte *)0x3359a89ff97157ac;
      }
      goto LAB_001d608c;
    }
    if (pbVar21 != (byte *)0xa852b4a22d98453e) goto LAB_001d608c;
    local_a40 = (byte *)0x1;
    local_a28 = (byte *)0xffffffffffffffff;
    local_a20 = (byte *)0x0;
    local_a48 = (byte *)0x1;
    local_a50 = (byte *)0x1;
  }
  else {
    if (-0x4537a5bdd09230d9 < (long)pbVar21) {
      if (pbVar21 == (byte *)0xbac85a422f6dcf28) {
        local_950 = local_a28;
        local_a10 = local_a40;
        local_ac0 = local_a50;
        bVar4 = param_2[(long)local_a50];
        local_940 = local_a48;
        bVar5 = param_2[(long)(local_a40 + (long)local_a28)];
        local_948 = local_a20;
        pbVar2 = (byte *)0xd7a28745f3a8fb05;
        if (bVar5 != bVar4) {
          pbVar2 = (byte *)0x55488ab70f6983fa;
        }
      }
      else if (pbVar21 == (byte *)0xbca196f3040a25ee) {
        local_a8c = (byte *)0x1 < local_898;
        pbVar2 = (byte *)0xa852b4a22d98453e;
        if (local_898 < (byte *)0x2) {
          pbVar2 = (byte *)0xe08d3eae8db4f8d9;
        }
      }
      goto LAB_001d608c;
    }
    if (pbVar21 == (byte *)0xaa9d77ce64023005) {
      local_8b8 = local_970 + (long)local_968;
      local_8d8 = local_968;
      goto LAB_001d7e70;
    }
    if (pbVar21 != (byte *)0xba6e2acce79821e0) goto LAB_001d608c;
    local_a28 = local_958;
    local_a20 = local_ac8;
    local_a40 = local_ad0;
    local_a48 = local_960;
    local_a50 = local_a80;
  }
  pbVar2 = (byte *)0xbac85a422f6dcf28;
  goto LAB_001d608c;
}


