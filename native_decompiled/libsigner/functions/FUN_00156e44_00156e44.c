// Function: FUN_00156e44
// Entry: 00156e44

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_00156e44(ulong param_1,ulong param_2,byte param_3)

{
  byte unaff_100000d0;
  byte unaff_1000026c;
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  ulong uVar7;
  byte in_w9;
  byte bVar8;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  ulong local_f8;
  long local_f0;
  ulong local_e8;
  long *local_e0;
  long local_d8;
  long *local_d0;
  uint local_c4;
  ulong local_c0;
  ulong local_b8;
  uint local_b0;
  byte local_ac;
  ulong local_a8;
  byte local_9c;
  ulong local_98;
  uint local_88;
  byte local_84;
  byte bVar6;
  byte bVar9;
  
  uVar3 = param_2;
  lVar11 = 0x77544cab5710fe2f;
LAB_00156f38:
  while (bVar9 = unaff_1000026c, bVar8 = in_w9, bVar6 = unaff_100000d0, bVar5 = param_3,
        lVar4 = lVar11, uVar7 = param_1, uVar12 = uVar3 & 0xffffffff, param_1 = uVar7,
        lVar11 = lVar4, param_3 = bVar5, unaff_100000d0 = bVar6, in_w9 = bVar8,
        unaff_1000026c = bVar9, lVar4 < -0xc4b2d2fed6b2625) {
    if (lVar4 < -0x469844def660fc13) {
      if (lVar4 < -0x62dd1f718c3b5182) {
        if (lVar4 < -0x72d5d6114eae821e) {
          if (lVar4 < -0x7798a2bf1cd1b926) {
            uVar3 = uVar12;
            lVar11 = 0x31c5c14c9e9ea9f4;
            param_3 = bVar6;
            in_w9 = bVar9;
            if (((lVar4 != -0x7b628666a95a3050) &&
                (lVar11 = -0x4efc96698a583666, lVar4 != -0x7b1bb405792785fc)) &&
               (lVar11 = lVar4, lVar4 == -0x789c4ffe458c96da)) {
              DAT_001f6720 = DAT_001f6720 ^ 0xd4;
              DAT_001f6721 = DAT_001f6721 ^ 0xd4;
              DAT_001f6722 = DAT_001f6722 ^ 0xd4;
              DAT_001f6723 = DAT_001f6723 ^ 0xd4;
              DAT_001f6724 = DAT_001f6724 ^ 0xd4;
              DAT_001f6725 = DAT_001f6725 ^ 0xd4;
              _DAT_001f6710 = _DAT_001f6710 ^ 0xd4d4d4d4d4d4d4d4;
              uRam00000000001f6718 = uRam00000000001f6718 ^ 0xd4d4d4d4d4d4d4d4;
              DAT_001f808b = '\x01';
              lVar11 = 0x7b153d247f528454;
            }
          }
          else {
            uVar3 = uVar12;
            lVar11 = -0x4161b593a1ad8f9a;
            param_3 = bVar6;
            in_w9 = bVar9;
            if (lVar4 != -0x7798a2bf1cd1b926) {
              if (lVar4 == -0x76790544126f80c5) {
                DAT_001f7c84 = 0;
                lVar4 = FUN_001cac50(*(undefined8 *)(param_2 + 0x18),&DAT_001f58b8);
                lVar11 = 0x78b425516e82819a;
                param_3 = bVar5;
                in_w9 = bVar8;
                if (lVar4 != 0) {
                  lVar11 = 0x1c3602cc2ca6e197;
                }
              }
              else {
                lVar11 = lVar4;
                if (lVar4 == -0x73fd90a3d2c5407f) {
                  DAT_001f6740 = DAT_001f6740 ^ 0x4c;
                  DAT_001f6741 = DAT_001f6741 ^ 0x4c;
                  DAT_001f6742 = DAT_001f6742 ^ 0x4c;
                  DAT_001f6738 = DAT_001f6738 ^ 0x4c4c4c4c4c4c4c4c;
                  DAT_001f808d = '\x01';
                  lVar11 = 0x31c5c14c9e9ea9f4;
                }
              }
            }
          }
        }
        else if (lVar4 < -0x6d317a172d06c7b9) {
          uVar3 = uVar12;
          lVar11 = -0xbae1127b5b72744;
          param_3 = bVar6;
          in_w9 = bVar9;
          if (lVar4 != -0x72d5d6114eae821e) {
            if (lVar4 == -0x7119dd9f57c501ed) {
              DAT_001f7f38 = 0;
              iVar2 = FUN_001ca28c(&DAT_001f6728,*local_e0);
              uVar10 = iVar2 == 0 | local_c4;
LAB_00158f1c:
              uVar3 = uVar12;
              lVar11 = 0x2631af2b586c623;
              local_b0 = uVar10;
              param_3 = bVar6;
              in_w9 = bVar9;
            }
            else {
              lVar11 = lVar4;
              if (lVar4 == -0x6d66731b6fa6c711) {
                lVar11 = -0x59201028bbba99d2;
              }
            }
          }
        }
        else if (lVar4 < -0x6b7135fd5b292c02) {
          uVar3 = uVar12;
          lVar11 = -0xe57de989cad22fd;
          param_3 = bVar6;
          if ((lVar4 != -0x6d317a172d06c7b9) && (lVar11 = lVar4, lVar4 == -0x6ce056cfdaae9b87)) {
            lVar11 = -0x6d66731b6fa6c711;
            param_3 = bVar5;
            if (DAT_001f8090 == '\0') {
              lVar11 = -0x41ac9f71dcd8dfd6;
            }
          }
        }
        else if (lVar4 == -0x6b7135fd5b292c02) {
          uVar3 = uVar12;
          lVar11 = -0x456de4331324f19d;
          if (DAT_001f808f == '\0') {
            lVar11 = 0x5992ecbc9a8fcf3;
          }
        }
        else {
          uVar3 = uVar12;
          param_3 = bVar6;
          in_w9 = bVar9;
          if (lVar4 == -0x6a3cca04a1192e39) {
            return bVar8 & 1;
          }
        }
      }
      else if (lVar4 < -0x5bb0d80ef81ff1f3) {
        if (lVar4 < -0x5ffa04d1de3b99e0) {
          uVar3 = uVar12;
          lVar11 = -0x6a3cca04a1192e39;
          param_3 = bVar6;
          in_w9 = local_84;
          unaff_1000026c = local_84;
          if (lVar4 != -0x62dd1f718c3b5182) {
            if (lVar4 == -0x61e6b0ca9f0568c9) {
              in_w9 = 0;
              unaff_1000026c = 0;
            }
            else {
              lVar11 = lVar4;
              in_w9 = bVar9;
              unaff_1000026c = bVar9;
              if (lVar4 == -0x60684d97be8f1607) {
                local_c0 = local_e8;
                lVar11 = 0x29d150b191f49850;
                local_ac = local_84;
              }
            }
          }
        }
        else if (lVar4 == -0x5ffa04d1de3b99e0) {
          DAT_001f7f18 = 0;
          iVar2 = FUN_001ca28c(&DAT_001f6658,*local_d0);
          param_3 = iVar2 == 0 | local_9c;
          uVar3 = uVar12;
          lVar11 = 0xaba098a5350b778;
          unaff_100000d0 = param_3;
          in_w9 = bVar9;
        }
        else {
          uVar3 = uVar12;
          lVar11 = -0x7119dd9f57c501ed;
          param_3 = bVar6;
          in_w9 = bVar9;
          if ((lVar4 != -0x5eb5fb2c94f59c89) && (lVar11 = lVar4, lVar4 == -0x5c3c45b3ad3c0b44)) {
            local_d0 = (long *)(param_2 + local_a8 * 0x10 + 0x78);
            lVar11 = 0x712c566eff875df3;
            param_3 = bVar5;
            in_w9 = bVar8;
            if (*local_d0 != 0) {
              lVar11 = 0x3118b870451b362a;
            }
          }
        }
      }
      else if (lVar4 < -0x58cfa7d81061cb99) {
        if (lVar4 == -0x5bb0d80ef81ff1f3) {
          DAT_001f6730 = DAT_001f6730 ^ 0xf0;
          DAT_001f6731 = DAT_001f6731 ^ 0xf0;
          DAT_001f6732 = DAT_001f6732 ^ 0xf0;
          DAT_001f6728 = DAT_001f6728 ^ 0xf0f0f0f0f0f0f0f0;
          DAT_001f808c = '\x01';
          uVar3 = uVar12;
          lVar11 = -0x7119dd9f57c501ed;
          param_3 = bVar6;
          in_w9 = bVar9;
        }
        else {
          uVar3 = uVar12;
          lVar11 = 0x25b48b5b936d5a7c;
          param_3 = bVar6;
          in_w9 = bVar9;
          if ((lVar4 != -0x5aad7996f3184d8d) && (lVar11 = lVar4, lVar4 == -0x59201028bbba99d2)) {
            DAT_001f7f48 = 0;
            iVar2 = FUN_001ca28c(*(undefined8 *)(param_2 + 0x40),&DAT_001f6758);
            lVar11 = 0x39b247741fd60a05;
            param_3 = bVar5;
            in_w9 = bVar8;
            if (iVar2 != 0) {
              lVar11 = 0xc736a0b5ad3f547;
            }
          }
        }
      }
      else if (lVar4 < -0x4efc96698a583666) {
        if (lVar4 == -0x58cfa7d81061cb99) {
          uVar3 = uVar12;
          lVar11 = 0x1554e2c9ff637cbd;
          if (DAT_001f808e == '\0') {
            lVar11 = -0x573b473172d0f4f5;
          }
        }
        else {
          uVar3 = uVar12;
          unaff_100000d0 = bVar5;
          if (lVar4 == -0x573b473172d0f4f5) {
            DAT_001f6746 = DAT_001f6746 ^ 0xe0;
            DAT_001f6744 = DAT_001f6744 ^ 0xe0;
            DAT_001f6745 = DAT_001f6745 ^ 0xe0;
            DAT_001f6747 = DAT_001f6747 ^ 0xe0;
            DAT_001f6748 = DAT_001f6748 ^ 0xe0;
            DAT_001f6749 = DAT_001f6749 ^ 0xe0;
            DAT_001f808e = '\x01';
            lVar11 = -0x10f8d85e6489a9a1;
          }
        }
      }
      else if (lVar4 == -0x4efc96698a583666) {
        uVar3 = uVar12;
        lVar11 = -0x13592c374a67b7a9;
        if (*(long *)(param_2 + 0x870) != 2) {
          lVar11 = -0x14d05e09a4ad9ed3;
        }
      }
      else {
        uVar3 = uVar12;
        param_3 = bVar6;
        in_w9 = bVar9;
        if (lVar4 == -0x4d78e8f6405ae2a7) {
          local_c0 = 0;
          lVar11 = 0x29d150b191f49850;
          local_ac = 0;
        }
      }
    }
    else if (lVar4 < -0x27195654b1873e9f) {
      if (lVar4 < -0x3e9ea5d9265506ca) {
        if (lVar4 < -0x43099ef641907ed5) {
          if (lVar4 == -0x469844def660fc13) {
            local_e0 = (long *)(param_2 + local_b8 * 0x10 + 0x78);
            uVar3 = uVar12;
            lVar11 = 0x6a583111bd3848bd;
            if (*local_e0 != 0) {
              lVar11 = -0x43099ef641907ed5;
            }
          }
          else {
            uVar3 = uVar12;
            lVar11 = -0x183090348630c762;
            param_3 = bVar6;
            if ((lVar4 != -0x456de4331324f19d) && (lVar11 = lVar4, lVar4 == -0x44bf72abcee99264)) {
              lVar11 = 0x54ea15208bd8dad6;
              param_3 = bVar5;
              if (DAT_001f808b == '\0') {
                lVar11 = -0x789c4ffe458c96da;
              }
            }
          }
        }
        else {
          uVar3 = uVar12;
          lVar11 = 0x7efbe50c20902ac6;
          param_3 = bVar6;
          in_w9 = bVar9;
          if (lVar4 != -0x43099ef641907ed5) {
            if (lVar4 == -0x41ac9f71dcd8dfd6) {
              DAT_001f6758 = DAT_001f6758 ^ 0xfbfbfbfbfbfbfbfb;
              DAT_001f8090 = '\x01';
              lVar11 = -0x59201028bbba99d2;
            }
            else {
              lVar11 = lVar4;
              if (lVar4 == -0x4161b593a1ad8f9a) {
                iVar2 = FUN_001ebe70(0,1,&DAT_001f7f44);
                lVar11 = -0x6b7135fd5b292c02;
                param_3 = bVar5;
                in_w9 = bVar8;
                if (iVar2 != 0) {
                  lVar11 = -0x7798a2bf1cd1b926;
                }
              }
            }
          }
        }
      }
      else if (lVar4 < -0x2e77692210f7015a) {
        if (lVar4 == -0x3e9ea5d9265506ca) {
          iVar2 = FUN_001ebe70(0,1,&DAT_001f7f18);
          uVar3 = uVar12;
          lVar11 = -0x1186d14447e7ebc9;
          if (iVar2 != 0) {
            lVar11 = -0x2e3c941d26e4e916;
          }
        }
        else if (lVar4 == -0x3c2471c8d210483b) {
          DAT_001f6660 = DAT_001f6660 ^ 0x7d;
          DAT_001f6658 = DAT_001f6658 ^ 0x7d7d7d7d7d7d7d7d;
          DAT_001f8084 = '\x01';
          uVar3 = uVar12;
          lVar11 = -0x5ffa04d1de3b99e0;
          param_3 = bVar6;
          in_w9 = bVar9;
        }
        else {
          uVar3 = uVar12;
          param_3 = bVar6;
          in_w9 = bVar9;
          if (lVar4 == -0x31e95dbbcd6960d3) {
            lVar11 = -0x7b628666a95a3050;
            param_3 = bVar5;
            in_w9 = bVar8;
            if (DAT_001f808d == '\0') {
              lVar11 = -0x73fd90a3d2c5407f;
            }
          }
        }
      }
      else {
        uVar3 = uVar12;
        lVar11 = 0x25b48b5b936d5a7c;
        param_3 = bVar6;
        in_w9 = bVar9;
        if (((lVar4 != -0x2e77692210f7015a) &&
            (lVar11 = -0x3e9ea5d9265506ca, lVar4 != -0x2e3c941d26e4e916)) &&
           (lVar11 = lVar4, lVar4 == -0x2b07d48263e04685)) {
          lVar11 = -0x4efc96698a583666;
        }
      }
    }
    else if (lVar4 < -0x13592c374a67b7a9) {
      if (lVar4 < -0x1677955c99963375) {
        uVar3 = uVar12;
        lVar11 = -0x3e9ea5d9265506ca;
        param_3 = bVar6;
        in_w9 = bVar9;
        if (lVar4 != -0x27195654b1873e9f) {
          if (lVar4 == -0x27015c83385981ad) {
            iVar2 = FUN_001ebe70(0,1,&DAT_001f7c84);
            lVar11 = 0xc600465f1f1711;
            param_3 = bVar5;
            in_w9 = bVar8;
            if (iVar2 != 0) {
              lVar11 = 0x5d5b462d0b84f1;
            }
          }
          else {
            lVar11 = lVar4;
            if (lVar4 == -0x183090348630c762) {
              DAT_001f7f44 = 0;
              iVar2 = FUN_001ca28c(*(undefined8 *)(param_2 + 0x50),&DAT_001f674c);
              lVar11 = 0x6432ced6a502a162;
              param_3 = bVar5;
              in_w9 = bVar8;
              if (iVar2 != 0) {
                lVar11 = -0x101436d1a7816e9d;
              }
            }
          }
        }
      }
      else {
        uVar3 = uVar12;
        lVar11 = -0xe57de989cad22fd;
        param_3 = bVar6;
        in_w9 = bVar9;
        if (lVar4 != -0x1677955c99963375) {
          if (lVar4 == -0x14d05e09a4ad9ed3) goto LAB_00158594;
          lVar11 = lVar4;
          if (lVar4 == -0x137fb996f96dfe00) {
            iVar2 = FUN_001ebe70(0,1,&DAT_001f7f4c);
            lVar11 = 0x650a20f074d9541d;
            param_3 = bVar5;
            in_w9 = bVar8;
            if (iVar2 != 0) {
              lVar11 = 0x1b3841cf0d2474f8;
            }
          }
        }
      }
    }
    else if (lVar4 < -0x1186d14447e7ebc9) {
      if (lVar4 == -0x13592c374a67b7a9) {
        uVar3 = 0;
        param_1 = 0;
        lVar11 = 0x4f1b8c20dd24e911;
        param_3 = bVar6;
        in_w9 = bVar9;
      }
      else {
        if (lVar4 == -0x127fc9046ee10f0a) goto LAB_00158718;
        uVar3 = uVar12;
        param_3 = bVar6;
        in_w9 = bVar9;
        if (lVar4 == -0x11f112b9ae193fe0) {
          lVar11 = 0x13830ef513b05b33;
        }
      }
    }
    else if (lVar4 < -0x101436d1a7816e9d) {
      if (lVar4 == -0x1186d14447e7ebc9) {
        uVar3 = uVar12;
        lVar11 = 0x3daf43d84229daa4;
        if (DAT_001f8084 == '\0') {
          lVar11 = -0x3c2471c8d210483b;
        }
      }
      else {
        uVar3 = uVar12;
        param_3 = bVar6;
        if (lVar4 == -0x10f8d85e6489a9a1) {
          DAT_001f7f40 = 0;
          iVar2 = FUN_001ca28c(*(undefined8 *)(param_2 + 8),&DAT_001f6744);
          lVar11 = 0x56af4b1edf2d3784;
          param_3 = bVar5;
          if (iVar2 != 0) {
            lVar11 = -0x2b07d48263e04685;
          }
        }
      }
    }
    else {
      uVar3 = uVar12;
      lVar11 = -0x4efc96698a583666;
      param_3 = bVar6;
      in_w9 = bVar9;
      if ((lVar4 != -0x101436d1a7816e9d) && (lVar11 = lVar4, lVar4 == -0xe57de989cad22fd)) {
        iVar2 = FUN_001ebe70(0,1,&DAT_001f7f38);
        lVar11 = 0x1e7115b07d36e38a;
        param_3 = bVar5;
        in_w9 = bVar8;
        if (iVar2 != 0) {
          lVar11 = -0x1677955c99963375;
        }
      }
    }
  }
  uVar10 = (uint)uVar3;
  if (lVar4 < 0x2f992fdd63449d01) {
    if (lVar4 < 0x1116487b107d95b6) {
      if (lVar4 < 0x2631af2b586c623) {
        if (lVar4 < 0x5d5b462d0b84f1) {
          uVar3 = (ulong)local_88;
          param_1 = local_98;
          lVar11 = 0x4f1b8c20dd24e911;
          param_3 = bVar6;
          if (lVar4 != -0xc4b2d2fed6b2625) {
            if (lVar4 == -0xbae1127b5b72744) {
              iVar2 = FUN_001ebe70(0,1,&DAT_001f7c84);
              uVar3 = uVar12;
              param_1 = uVar7;
              lVar11 = 0x65681340cec6dde7;
              param_3 = bVar5;
              if (iVar2 != 0) {
                lVar11 = -0x72d5d6114eae821e;
              }
            }
            else {
              uVar3 = uVar12;
              param_1 = uVar7;
              lVar11 = lVar4;
              if (lVar4 == -0x766d0b1627ff87b) goto LAB_00158594;
            }
          }
        }
        else {
          uVar3 = uVar12;
          lVar11 = -0x27015c83385981ad;
          param_3 = bVar6;
          in_w9 = bVar9;
          if (((lVar4 != 0x5d5b462d0b84f1) &&
              (lVar11 = 0xaba098a5350b778, param_3 = local_9c, unaff_100000d0 = local_9c,
              lVar4 != 0x86128ac9bde207)) &&
             (lVar11 = lVar4, param_3 = bVar6, unaff_100000d0 = bVar6, lVar4 == 0xc600465f1f1711)) {
            lVar11 = -0x11f112b9ae193fe0;
            param_3 = bVar5;
            in_w9 = bVar8;
            if (DAT_001f7fdf == '\0') {
              lVar11 = 0x2ee82b1f589f7af4;
            }
          }
        }
        goto LAB_00156f38;
      }
      if (lVar4 < 0xaba098a5350b778) {
        if (lVar4 == 0x2631af2b586c623) {
          local_f8 = *(ulong *)(param_2 + 0x870);
          local_88 = local_b0;
          local_98 = local_b8 + 1;
          uVar3 = uVar12;
          lVar11 = -0xc4b2d2fed6b2625;
          param_3 = bVar6;
          in_w9 = bVar9;
          if (local_f8 <= local_98) {
            lVar11 = 0x11da0409708e0658;
          }
        }
        else if (lVar4 == 0x5992ecbc9a8fcf3) {
          DAT_001f674e = DAT_001f674e ^ 0x97;
          DAT_001f674c = DAT_001f674c ^ 0x97;
          DAT_001f6750 = DAT_001f6750 ^ 0x97;
          DAT_001f674d = DAT_001f674d ^ 0x97;
          DAT_001f674f = DAT_001f674f ^ 0x97;
          DAT_001f808f = '\x01';
          uVar3 = uVar12;
          lVar11 = -0x183090348630c762;
          param_3 = bVar6;
          in_w9 = bVar9;
        }
        else {
          uVar3 = uVar12;
          param_3 = bVar6;
          in_w9 = bVar9;
          if (lVar4 == 0x97858d7f1738722) {
            DAT_001f6762 = DAT_001f6762 ^ 0x87;
            DAT_001f6760 = DAT_001f6760 ^ 0x87;
            DAT_001f6761 = DAT_001f6761 ^ 0x87;
            DAT_001f6763 = DAT_001f6763 ^ 0x87;
            DAT_001f6764 = DAT_001f6764 ^ 0x87;
            DAT_001f6765 = DAT_001f6765 ^ 0x87;
            DAT_001f8091 = '\x01';
            lVar11 = 0x39729888bac74157;
          }
        }
        goto LAB_00156f38;
      }
      if (lVar4 == 0xaba098a5350b778) {
        local_e8 = local_a8 + 1;
        uVar3 = uVar12;
        lVar11 = -0x60684d97be8f1607;
        param_3 = bVar6;
        local_84 = bVar5;
        in_w9 = bVar9;
        if (*(ulong *)(param_2 + 0x870) <= local_e8) {
          lVar11 = -0x62dd1f718c3b5182;
        }
        goto LAB_00156f38;
      }
      uVar3 = uVar12;
      lVar11 = -0x4efc96698a583666;
      param_3 = bVar6;
      in_w9 = bVar9;
      if ((lVar4 == 0xc736a0b5ad3f547) || (lVar11 = lVar4, lVar4 != 0xe174bdf5077df56))
      goto LAB_00156f38;
    }
    else {
      if (lVar4 < 0x1c3602cc2ca6e197) {
        if (lVar4 < 0x13937a90971a5167) {
          uVar3 = uVar12;
          lVar11 = -0x4efc96698a583666;
          param_3 = bVar6;
          in_w9 = bVar9;
          if (lVar4 != 0x1116487b107d95b6) {
            if (lVar4 == 0x11da0409708e0658) {
              lVar11 = -0x4d78e8f6405ae2a7;
              param_3 = bVar5;
              in_w9 = bVar8;
              if ((local_88 & local_f8 != 0) == 0) {
                lVar11 = -0x766d0b1627ff87b;
              }
            }
            else {
              lVar11 = lVar4;
              if (lVar4 == 0x13830ef513b05b33) {
                DAT_001f7c84 = 0;
                lVar11 = FUN_001cac50(*(undefined8 *)(param_2 + 0x58),&DAT_001f58b8);
                bVar1 = lVar11 == 0;
                lVar11 = -0x2e77692210f7015a;
                lVar4 = 0xe174bdf5077df56;
                goto LAB_00156f24;
              }
            }
          }
        }
        else {
          if (lVar4 == 0x13937a90971a5167) goto LAB_00158594;
          uVar3 = uVar12;
          lVar11 = -0x10f8d85e6489a9a1;
          param_3 = bVar6;
          in_w9 = bVar9;
          if ((lVar4 != 0x1554e2c9ff637cbd) && (lVar11 = lVar4, lVar4 == 0x1b3841cf0d2474f8)) {
            lVar11 = -0x137fb996f96dfe00;
          }
        }
        goto LAB_00156f38;
      }
      if (0x25b48b5b936d5a7b < lVar4) {
        if (lVar4 < 0x29d150b191f49850) {
          if (lVar4 == 0x25b48b5b936d5a7c) {
            iVar2 = FUN_001ebe70(0,1,&DAT_001f7f40);
            uVar3 = uVar12;
            lVar11 = -0x58cfa7d81061cb99;
            if (iVar2 != 0) {
              lVar11 = -0x5aad7996f3184d8d;
            }
          }
          else {
            uVar3 = uVar12;
            param_3 = bVar6;
            if (lVar4 == 0x28abd81598005d16) {
              lVar11 = 0x7efbe50c20902ac6;
            }
          }
        }
        else if (lVar4 == 0x29d150b191f49850) {
          local_a8 = local_c0;
          local_d8 = *(long *)(param_2 + local_c0 * 0x10 + 0x70);
          uVar3 = uVar12;
          lVar11 = -0x61e6b0ca9f0568c9;
          param_3 = bVar6;
          in_w9 = bVar9;
          local_9c = local_ac;
          if (local_d8 != 0) {
            lVar11 = -0x5c3c45b3ad3c0b44;
          }
        }
        else {
          uVar3 = uVar12;
          param_3 = bVar6;
          in_w9 = bVar9;
          if (lVar4 == 0x2ee82b1f589f7af4) {
            lVar11 = 0x13830ef513b05b33;
LAB_00158aa4:
            DAT_001f58b8 = DAT_001f58b8 ^ 0x5959595959595959;
            DAT_001f7fdf = '\x01';
            uVar3 = uVar12;
            param_3 = bVar6;
            in_w9 = bVar9;
          }
        }
        goto LAB_00156f38;
      }
      if (lVar4 != 0x1c3602cc2ca6e197) {
        if (lVar4 == 0x1e7115b07d36e38a) {
          uVar3 = uVar12;
          lVar11 = -0x5eb5fb2c94f59c89;
          if (DAT_001f808c == '\0') {
            lVar11 = -0x5bb0d80ef81ff1f3;
          }
        }
        else {
          uVar3 = uVar12;
          param_3 = bVar6;
          in_w9 = bVar9;
          if (lVar4 == 0x252995e1c503da75) {
            lVar11 = 0x4c4ab22fa7d3374b;
          }
        }
        goto LAB_00156f38;
      }
    }
LAB_00158718:
    uVar3 = uVar12;
    lVar11 = -0x6a3cca04a1192e39;
    param_3 = bVar6;
    in_w9 = 1;
    unaff_1000026c = 1;
    goto LAB_00156f38;
  }
  if (0x56af4b1edf2d3783 < lVar4) {
    if (lVar4 < 0x712c566eff875df3) {
      if (lVar4 < 0x65681340cec6dde7) {
        uVar3 = uVar12;
        lVar11 = -0x4161b593a1ad8f9a;
        param_3 = bVar6;
        in_w9 = bVar9;
        if (((lVar4 != 0x56af4b1edf2d3784) &&
            (lVar11 = 0x4c4ab22fa7d3374b, lVar4 != 0x6432ced6a502a162)) &&
           (lVar11 = lVar4, lVar4 == 0x650a20f074d9541d)) {
          lVar11 = 0x79564324757b45b9;
          param_3 = bVar5;
          in_w9 = bVar8;
          if (DAT_001f8091 == '\0') {
            lVar11 = 0x97858d7f1738722;
          }
        }
        goto LAB_00156f38;
      }
      if (lVar4 == 0x65681340cec6dde7) {
        uVar3 = uVar12;
        lVar11 = 0x2f992fdd63449d01;
        if (DAT_001f7fdf == '\0') {
          lVar11 = 0x7fe87df538f57c1c;
        }
        goto LAB_00156f38;
      }
      if (lVar4 != 0x6a583111bd3848bd) {
        uVar3 = uVar12;
        param_3 = bVar6;
        in_w9 = bVar9;
        if (lVar4 == 0x707eb1ddbc2a8aff) {
          lVar11 = -0x127fc9046ee10f0a;
          param_3 = bVar5;
          in_w9 = bVar8;
          if (*(long *)(param_2 + 0x68) != 0) {
            lVar11 = -0x7b1bb405792785fc;
          }
        }
        goto LAB_00156f38;
      }
    }
    else {
      if (0x79564324757b45b8 < lVar4) {
        if (lVar4 < 0x7efbe50c20902ac6) {
          uVar3 = uVar12;
          lVar11 = 0x39729888bac74157;
          param_3 = bVar6;
          if ((lVar4 != 0x79564324757b45b9) && (lVar11 = lVar4, lVar4 == 0x7b153d247f528454)) {
            DAT_001f7f34 = 0;
            iVar2 = FUN_001ca28c(&DAT_001f6710,local_f0);
            bVar1 = iVar2 == 0;
            lVar11 = -0x6d317a172d06c7b9;
            lVar4 = 0x3aca0bc407a2bd85;
            goto LAB_00156f24;
          }
          goto LAB_00156f38;
        }
        if (lVar4 != 0x7efbe50c20902ac6) {
          uVar3 = uVar12;
          param_3 = bVar6;
          in_w9 = bVar9;
          if (lVar4 == 0x7fe87df538f57c1c) {
            lVar11 = -0x76790544126f80c5;
            goto LAB_00158aa4;
          }
          goto LAB_00156f38;
        }
        iVar2 = FUN_001ebe70(0,1,&DAT_001f7f34);
        bVar1 = iVar2 == 0;
        lVar11 = -0x44bf72abcee99264;
        lVar4 = 0x28abd81598005d16;
        goto LAB_00156f24;
      }
      if (lVar4 != 0x712c566eff875df3) {
        uVar3 = uVar12;
        lVar11 = -0xbae1127b5b72744;
        param_3 = bVar6;
        in_w9 = bVar9;
        if ((lVar4 != 0x77544cab5710fe2f) && (lVar11 = lVar4, lVar4 == 0x78b425516e82819a)) {
          lVar11 = -0x27015c83385981ad;
        }
        goto LAB_00156f38;
      }
    }
LAB_00158594:
    uVar3 = uVar12;
    param_1 = uVar7;
    lVar11 = -0x6a3cca04a1192e39;
    param_3 = bVar6;
    in_w9 = 0;
    unaff_1000026c = 0;
    goto LAB_00156f38;
  }
  if (lVar4 < 0x3daf43d84229daa4) {
    if (0x39729888bac74156 < lVar4) {
      if (lVar4 == 0x39729888bac74157) {
        DAT_001f7f4c = 0;
        iVar2 = FUN_001ca28c(*(undefined8 *)(param_2 + 0x58),&DAT_001f6760);
        uVar3 = uVar12;
        lVar11 = 0x707eb1ddbc2a8aff;
        if (iVar2 != 0) {
          lVar11 = 0x1116487b107d95b6;
        }
      }
      else {
        uVar3 = uVar12;
        lVar11 = -0x137fb996f96dfe00;
        param_3 = bVar6;
        in_w9 = bVar9;
        if ((lVar4 != 0x39b247741fd60a05) &&
           (lVar11 = lVar4, uVar10 = local_c4, lVar4 == 0x3aca0bc407a2bd85)) goto LAB_00158f1c;
      }
      goto LAB_00156f38;
    }
    uVar3 = uVar12;
    lVar11 = -0x76790544126f80c5;
    param_3 = bVar6;
    if ((lVar4 == 0x2f992fdd63449d01) ||
       ((lVar11 = 0x564e35774c39b245, lVar4 == 0x3118b870451b362a ||
        (lVar11 = lVar4, lVar4 != 0x31c5c14c9e9ea9f4)))) goto LAB_00156f38;
    DAT_001f7f3c = 0;
    iVar2 = FUN_001ca28c(&DAT_001f6738,local_d8);
    bVar1 = iVar2 == 0;
    lVar11 = -0x27195654b1873e9f;
    lVar4 = 0x86128ac9bde207;
  }
  else if (lVar4 < 0x4f1b8c20dd24e911) {
    uVar3 = uVar12;
    lVar11 = -0x5ffa04d1de3b99e0;
    param_3 = bVar6;
    in_w9 = bVar9;
    if (((lVar4 == 0x3daf43d84229daa4) || (lVar11 = 0x564e35774c39b245, lVar4 == 0x44a8247c18c897f4)
        ) || (lVar11 = lVar4, lVar4 != 0x4c4ab22fa7d3374b)) goto LAB_00156f38;
    iVar2 = FUN_001ebe70(0,1,&DAT_001f7f48);
    lVar11 = -0x6ce056cfdaae9b87;
    lVar4 = 0x252995e1c503da75;
    bVar1 = iVar2 == 0;
  }
  else {
    if (lVar4 == 0x4f1b8c20dd24e911) {
      local_f0 = *(long *)(param_2 + uVar7 * 0x10 + 0x70);
      uVar3 = uVar12;
      lVar11 = 0x13937a90971a5167;
      local_c4 = uVar10;
      local_b8 = uVar7;
      param_3 = bVar6;
      in_w9 = bVar9;
      if (local_f0 != 0) {
        lVar11 = -0x469844def660fc13;
      }
      goto LAB_00156f38;
    }
    uVar3 = uVar12;
    lVar11 = 0x7b153d247f528454;
    param_3 = bVar6;
    in_w9 = bVar9;
    if ((lVar4 == 0x54ea15208bd8dad6) || (lVar11 = lVar4, lVar4 != 0x564e35774c39b245))
    goto LAB_00156f38;
    iVar2 = FUN_001ebe70(0,1,&DAT_001f7f3c);
    bVar1 = iVar2 == 0;
    lVar11 = -0x31e95dbbcd6960d3;
    lVar4 = 0x44a8247c18c897f4;
  }
LAB_00156f24:
  uVar3 = uVar12;
  param_3 = bVar5;
  in_w9 = bVar8;
  if (!bVar1) {
    lVar11 = lVar4;
  }
  goto LAB_00156f38;
}


