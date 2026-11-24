// Function: FUN_0014eec4
// Entry: 0014eec4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_0014eec4(ulong param_1,ulong param_2,byte param_3,byte param_4,byte param_5,byte param_6,
                 byte param_7,byte param_8)

{
  byte unaff_100001a8;
  bool bVar1;
  int iVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  ulong uVar10;
  long lVar11;
  byte in_w9;
  byte bVar12;
  long lVar13;
  ulong in_x10;
  ulong uVar14;
  ulong in_x12;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  ulong local_258;
  long local_250;
  ulong local_248;
  long *local_240;
  long local_238;
  long *local_230;
  ulong local_228;
  ulong local_220;
  long local_218;
  long *local_210;
  ulong local_208;
  ulong local_200;
  long local_1f8;
  long *local_1f0;
  ulong local_1e8;
  long local_1e0;
  long *local_1d8;
  ulong local_1d0;
  ulong local_1c8;
  long local_1c0;
  long *local_1b8;
  ulong local_1b0;
  long local_1a8;
  long *local_1a0;
  byte local_194;
  ulong local_190;
  byte local_184;
  ulong local_180;
  uint local_174;
  ulong local_170;
  byte local_164;
  ulong local_160;
  ulong local_158;
  byte local_150;
  byte local_14c;
  ulong local_148;
  byte local_13c;
  byte local_138;
  byte local_134;
  ulong local_130;
  byte local_124;
  ulong local_120;
  byte local_114;
  ulong local_110;
  uint local_104;
  ulong local_100;
  byte local_f4;
  ulong local_f0;
  ulong local_e8;
  byte local_dc;
  byte local_d8;
  uint local_d4;
  byte local_d0;
  byte local_cc;
  ulong local_c8;
  ulong local_c0;
  byte local_b4;
  byte local_b0;
  byte local_ac;
  
  uVar3 = param_2;
  lVar13 = 0x1fdf4110d715278b;
LAB_0014efd4:
  bVar12 = in_w9;
  bVar6 = param_5;
  bVar7 = param_6;
  bVar4 = param_3;
  bVar5 = param_4;
  bVar9 = param_8;
  bVar8 = param_7;
  lVar11 = lVar13;
  uVar15 = in_x12;
  uVar14 = in_x10;
  uVar10 = param_1;
  uVar17 = uVar3 & 0xffffffff;
  param_1 = uVar10;
  in_x10 = uVar14;
  in_x12 = uVar15;
  lVar13 = lVar11;
  param_7 = bVar8;
  param_8 = bVar9;
  param_4 = bVar5;
  param_3 = bVar4;
  param_6 = bVar7;
  param_5 = bVar6;
  in_w9 = bVar12;
  if (lVar11 < 0x803be724308477a) {
    if (lVar11 < -0x31ac0a6c3b286695) {
      uVar16 = (uint)uVar3;
      if (lVar11 < -0x5047d328f08522ac) {
        if (-0x6b830b490502b1fd < lVar11) {
          if (-0x5d11f9bf22d7a38d < lVar11) {
            if (lVar11 < -0x55300750eff949a2) {
              uVar3 = uVar17;
              lVar13 = 0x428a962b530a7909;
              param_3 = unaff_100001a8;
              if (lVar11 != -0x5d11f9bf22d7a38c) {
                if (lVar11 == -0x5660c95fbffe0388) {
                  lVar13 = 0x6b5d23c3a7dfa97d;
                  bVar1 = DAT_001f802d == '\0';
                  lVar11 = 0xa2d6d5eb3926c49;
                  goto LAB_00154a58;
                }
                lVar13 = lVar11;
                if (lVar11 == -0x55310a0b815e46e3) {
                  lVar13 = 0x583b6ecf3b20d4e5;
                }
              }
            }
            else {
              if (lVar11 == -0x55300750eff949a2) {
                local_1d8 = (long *)(param_2 + local_148 * 0x10 + 0x78);
                bVar1 = *local_1d8 == 0;
                lVar13 = -0x439d83996da364d;
                lVar11 = 0x13788edb98da5cb9;
                goto LAB_0015474c;
              }
              if (lVar11 == -0x5364da4ea7a75333) goto LAB_0015277c;
              uVar3 = uVar17;
              param_3 = unaff_100001a8;
              if (lVar11 == -0x50b1aed5507b24a0) {
                local_130 = local_160;
                local_1c0 = *(long *)(param_2 + local_160 * 0x10 + 0x70);
                lVar13 = 0x4ec62207f49df86c;
                local_138 = local_14c;
                param_3 = bVar4;
                unaff_100001a8 = bVar4;
                if (local_1c0 != 0) {
                  lVar13 = -0x40a6ac9d48381267;
                }
              }
            }
            goto LAB_0014efd4;
          }
          if (lVar11 < -0x65ee13bcf6a8745d) {
            uVar3 = uVar17;
            lVar13 = -0x374bd1bd9817312;
            param_3 = unaff_100001a8;
            if (lVar11 != -0x6b830b490502b1fc) {
              if (lVar11 == -0x682045da1d224e0d) {
                DAT_001f6540 = DAT_001f6540 ^ 0xcb;
                DAT_001f6541 = DAT_001f6541 ^ 0xcb;
                DAT_001f6542 = DAT_001f6542 ^ 0xcb;
                _DAT_001f6530 = _DAT_001f6530 ^ 0xcbcbcbcbcbcbcbcb;
                uRam00000000001f6538 = uRam00000000001f6538 ^ 0xcbcbcbcbcbcbcbcb;
                DAT_001f8075 = '\x01';
                lVar13 = 0x246f579dfc3f250e;
              }
              else {
                lVar13 = lVar11;
                if (lVar11 == -0x67e1651e9217c7dc) {
                  local_f0 = local_200;
                  local_f4 = local_164;
                  goto LAB_0015150c;
                }
              }
            }
            goto LAB_0014efd4;
          }
          if (lVar11 == -0x65ee13bcf6a8745d) {
            iVar2 = FUN_001ebe70(0,1,&DAT_001f7f1c);
            bVar1 = iVar2 == 0;
            lVar11 = 0x1b8b6233d03d20da;
            lVar13 = 0x4411d37948845466;
            goto LAB_0015448c;
          }
          if (lVar11 == -0x63ccba8d3d032c30) goto LAB_0014ef98;
          uVar3 = uVar17;
          param_3 = unaff_100001a8;
          if (lVar11 != -0x6274fda8a66e3859) goto LAB_0014efd4;
LAB_0015277c:
          in_w9 = 0;
          goto LAB_00152798;
        }
        if (-0x7398ccf9efdd5743 < lVar11) {
          if (lVar11 < -0x70b21e18a1b7bfe9) {
            if (lVar11 == -0x7398ccf9efdd5742) {
              in_w9 = 1;
LAB_00152798:
              uVar3 = uVar17;
              in_x12 = uVar15;
              lVar13 = -0x31ac0a6c3b286695;
              param_7 = bVar8;
              param_8 = bVar9;
              param_3 = unaff_100001a8;
            }
            else {
              uVar3 = uVar17;
              lVar13 = 0x6ff1ae91058fc9af;
              param_3 = unaff_100001a8;
              if ((lVar11 != -0x7338881a22a1e646) &&
                 (lVar13 = lVar11, lVar11 == -0x726b7adf6b504903)) {
                local_228 = *(ulong *)(param_2 + 0x870);
                local_220 = local_170 + 1;
                lVar13 = -0x3a9c3f8f3dfbd921;
                local_174 = uVar16;
                param_3 = bVar4;
                unaff_100001a8 = bVar4;
                if (local_228 <= local_220) {
                  lVar13 = -0x3a9ea67ef76bfad9;
                }
              }
            }
          }
          else {
            if (lVar11 == -0x70b21e18a1b7bfe9) {
              iVar2 = FUN_001ebe70(0,1,&DAT_001f7f0c);
              bVar1 = iVar2 == 0;
              lVar11 = 0x53b263098aeb45b5;
              lVar13 = -0x1dfdf53b9bef49a9;
              goto LAB_0015448c;
            }
            uVar3 = uVar17;
            lVar13 = 0x5d9a15fd72df2b2d;
            param_3 = unaff_100001a8;
            if ((lVar11 != -0x70256156d5700be7) && (lVar13 = lVar11, lVar11 == -0x6df148108f895d02))
            {
              DAT_001f7dbc = 0;
              iVar2 = FUN_001ca28c(&DAT_001f6134,*local_1a0);
              lVar13 = 0x5775204445bd9ca7;
              param_7 = iVar2 == 0 | local_ac;
            }
          }
          goto LAB_0014efd4;
        }
        if (lVar11 < -0x7754e05f40b87d9a) {
          uVar3 = uVar17;
          lVar13 = 0x1e9c7b3be4308f7c;
          param_3 = unaff_100001a8;
          if ((lVar11 != -0x7d31cd92636beaa0) && (lVar13 = lVar11, lVar11 == -0x784d0bdea4151311)) {
            lVar13 = -0x946ba40c3fa0e6;
          }
          goto LAB_0014efd4;
        }
        if (lVar11 == -0x7754e05f40b87d9a) goto LAB_0015277c;
        uVar3 = uVar17;
        lVar13 = 0x5e032c1f9e3f2788;
        param_4 = local_cc;
        param_3 = unaff_100001a8;
        if ((lVar11 == -0x77120ce1a7146e9b) ||
           (lVar13 = lVar11, param_4 = bVar5, lVar11 != -0x74cd7558f11bb16d)) goto LAB_0014efd4;
        lVar13 = 0x7204ca19f6201cc5;
        bVar1 = DAT_001f8051 == '\0';
        lVar11 = 0x1bbd4f8787dce624;
      }
      else if (lVar11 < -0x40a6ac9d48381267) {
        if (-0x45bbb75813cd70cf < lVar11) {
          if (lVar11 < -0x43be806e0ca8d6eb) {
            if (lVar11 == -0x45bbb75813cd70ce) {
              bVar1 = (local_b0 & local_1b0 != 0) == 0;
              lVar11 = 0x47fe3e74456134b9;
              lVar13 = 0xe0a8b07e9042c15;
              goto LAB_00154a58;
            }
            uVar3 = uVar17;
            lVar13 = 0x3f3161d8771d9add;
            unaff_100001a8 = bVar4;
            if ((lVar11 != -0x45399a473f007055) && (lVar13 = lVar11, lVar11 == -0x452ad1970f0ee6f5))
            {
              in_x10 = 0;
              lVar13 = -0x47bdbe8717512b95;
              param_3 = 0;
              unaff_100001a8 = 0;
            }
          }
          else if (lVar11 == -0x43be806e0ca8d6eb) {
            local_208 = *(ulong *)(param_2 + 0x870);
            local_200 = local_158 + 1;
            uVar3 = uVar17;
            lVar13 = -0x67e1651e9217c7dc;
            unaff_100001a8 = bVar4;
            local_164 = bVar6;
            if (local_208 <= local_200) {
              lVar13 = 0x42b3c7b58b5f6883;
            }
          }
          else if (lVar11 == -0x433b204825d8f6e5) {
            local_1a8 = *(long *)(param_2 + uVar15 * 0x10 + 0x70);
            uVar3 = uVar17;
            lVar13 = 0x425900edd6c73092;
            local_120 = uVar15;
            local_ac = bVar9;
            unaff_100001a8 = bVar4;
            if (local_1a8 != 0) {
              lVar13 = 0x6ae5352ca83a7116;
            }
          }
          else {
            uVar3 = uVar17;
            unaff_100001a8 = bVar4;
            if (lVar11 == -0x42a23076d2e47ac5) {
              iVar2 = FUN_001ebe70(0,1,&DAT_001f7f18);
              bVar1 = iVar2 == 0;
              lVar11 = 0x1dcd6511bbd4e067;
              lVar13 = -0x349068504140017a;
              goto LAB_0015448c;
            }
          }
          goto LAB_0014efd4;
        }
        if (-0x49f8afa0841f1ff4 < lVar11) {
          uVar3 = uVar17;
          lVar13 = 0x16120f84d26c7cc3;
          unaff_100001a8 = bVar4;
          if (lVar11 != -0x49f8afa0841f1ff3) {
            if (lVar11 == -0x47bdbe8717512b95) {
              local_1e0 = *(long *)(param_2 + uVar14 * 0x10 + 0x70);
              lVar13 = -0x1270bb0845f4929c;
              local_148 = uVar14;
              local_cc = bVar4;
              if (local_1e0 != 0) {
                lVar13 = -0x55300750eff949a2;
              }
            }
            else {
              lVar13 = lVar11;
              if (lVar11 == -0x45ed02011f253c76) {
                local_f0 = 0;
                local_f4 = 0;
LAB_0015150c:
                uVar3 = uVar17;
                lVar13 = -0x3c232363d4112f4d;
                param_3 = bVar4;
                unaff_100001a8 = bVar4;
              }
            }
          }
          goto LAB_0014efd4;
        }
        uVar3 = uVar17;
        in_x10 = local_c8;
        lVar13 = -0x47bdbe8717512b95;
        param_3 = local_b4;
        unaff_100001a8 = local_b4;
        if (((lVar11 == -0x5047d328f08522ac) ||
            (in_x10 = uVar14, lVar13 = -0x160b69e8b69f9986, param_3 = bVar4, unaff_100001a8 = bVar4,
            lVar11 == -0x4fb44d53b86ff141)) || (lVar13 = lVar11, lVar11 != -0x4d5cbd28ee8e8369))
        goto LAB_0014efd4;
        lVar13 = -0x1d3c5b0683e94078;
        bVar1 = DAT_001f807f == '\0';
        lVar11 = 0x71fd5f6de0bab75f;
      }
      else if (lVar11 < -0x35b815ebb2ef5ee0) {
        if (lVar11 < -0x3aa2b410caa491f9) {
          if (lVar11 == -0x40a6ac9d48381267) {
            local_1b8 = (long *)(param_2 + local_130 * 0x10 + 0x78);
            uVar3 = uVar17;
            lVar13 = -0x6274fda8a66e3859;
            unaff_100001a8 = bVar4;
            if (*local_1b8 != 0) {
              lVar13 = 0x3c07fa57b835b15a;
            }
          }
          else {
            uVar3 = uVar17;
            lVar13 = -0x31ac0a6c3b286695;
            unaff_100001a8 = bVar4;
            in_w9 = local_d8;
            if ((lVar11 != -0x3d85c3dc3eb75d7c) &&
               (lVar13 = lVar11, in_w9 = bVar12, lVar11 == -0x3c232363d4112f4d)) {
              local_158 = local_f0;
              local_1f8 = *(long *)(param_2 + local_f0 * 0x10 + 0x70);
              lVar13 = 0x403ea4e3db1f919a;
              local_d0 = local_f4;
              if (local_1f8 != 0) {
                lVar13 = 0x34a0affeb27eee57;
              }
            }
          }
          goto LAB_0014efd4;
        }
        if (lVar11 == -0x3aa2b410caa491f9) goto LAB_0014ef98;
        if (lVar11 != -0x3a9ea67ef76bfad9) {
          uVar3 = uVar17;
          unaff_100001a8 = bVar4;
          if (lVar11 == -0x3a9c3f8f3dfbd921) {
            local_100 = local_220;
            local_104 = local_174;
            goto LAB_00153690;
          }
          goto LAB_0014efd4;
        }
        bVar1 = (local_174 & local_228 != 0) == 0;
        lVar11 = -0x63ccba8d3d032c30;
        lVar13 = 0x12e3842709f924b9;
      }
      else {
        if (lVar11 < -0x349068504140017a) {
          if (lVar11 == -0x35b815ebb2ef5ee0) {
            iVar2 = FUN_001ebe70(0,1,&DAT_001f7f08);
            bVar1 = iVar2 == 0;
            lVar11 = 0xd78955e2cbe03cb;
            lVar13 = -0xee499d4c3b0f567;
            goto LAB_0015448c;
          }
          uVar3 = uVar17;
          lVar13 = 0x8696ade028f283a;
          param_3 = unaff_100001a8;
          if ((lVar11 != -0x35a060866818dee5) && (lVar13 = lVar11, lVar11 == -0x357f1f3c4099ddbf)) {
            local_210 = (long *)(param_2 + local_170 * 0x10 + 0x78);
            bVar1 = *local_210 == 0;
            lVar13 = 0x247995d0887a7f16;
            lVar11 = -0x5d11f9bf22d7a38c;
            goto LAB_0015474c;
          }
          goto LAB_0014efd4;
        }
        if (lVar11 == -0x349068504140017a) {
          lVar13 = 0x7cc3eb7853b6d35d;
          bVar1 = DAT_001f8084 == '\0';
          lVar11 = -0x1a0d1b5379b11db4;
        }
        else {
          if (lVar11 != -0x329e30a96569d818) {
            uVar3 = uVar17;
            param_3 = unaff_100001a8;
            if (lVar11 == -0x31d78830e846f1ba) {
              lVar13 = -0x91f7cff879c65ef;
              local_134 = local_194;
            }
            goto LAB_0014efd4;
          }
          lVar13 = 0x5def765d5334d892;
          bVar1 = DAT_001f8073 == '\0';
          lVar11 = -0x2397c51dadc7d7b4;
        }
      }
LAB_00154a58:
      uVar3 = uVar17;
      in_x10 = uVar14;
      param_4 = bVar5;
      param_3 = bVar4;
      unaff_100001a8 = bVar4;
      if (bVar1) {
        lVar13 = lVar11;
      }
      goto LAB_0014efd4;
    }
    if (-0x187af011dc36495b < lVar11) {
      if (-0xa568ce605b85d4f < lVar11) {
        if (lVar11 < -0xd2c4bfde361c8b) {
          if (lVar11 < -0x5d951a913e5fc42) {
            if (lVar11 == -0xa568ce605b85d4e) {
              DAT_001f64c0 = DAT_001f64c0 ^ 0x18;
              DAT_001f64c1 = DAT_001f64c1 ^ 0x18;
              DAT_001f64b8 = DAT_001f64b8 ^ 0x1818181818181818;
              DAT_001f806f = '\x01';
              uVar3 = uVar17;
              lVar13 = 0x1ecc85d119176d1d;
              param_3 = unaff_100001a8;
            }
            else if (lVar11 == -0x91f7cff879c65ef) {
              local_258 = *(ulong *)(param_2 + 0x870);
              local_e8 = local_190 + 1;
              uVar3 = uVar17;
              lVar13 = 0x2414899e2f1fe8ff;
              param_3 = unaff_100001a8;
              local_dc = local_134;
              if (local_258 <= local_e8) {
                lVar13 = 0x717a6686a0ab3943;
              }
            }
            else {
              uVar3 = uVar17;
              param_3 = unaff_100001a8;
              if (lVar11 == -0x6a3239dddcf7b76) {
                DAT_001f7f04 = 0;
                iVar2 = FUN_001ca28c(&DAT_001f65f0,local_250);
                bVar1 = iVar2 == 0;
                lVar11 = -0x31d78830e846f1ba;
                lVar13 = 0x5d132e262975d346;
                goto LAB_0015448c;
              }
            }
          }
          else {
            uVar3 = uVar17;
            lVar13 = 0x7975099620523a59;
            param_3 = unaff_100001a8;
            if (lVar11 != -0x5d951a913e5fc42) {
              if (lVar11 == -0x439d83996da364d) goto LAB_0015277c;
              lVar13 = lVar11;
              if (lVar11 == -0x374bd1bd9817312) {
                iVar2 = FUN_001ebe70(0,1,&DAT_001f7e4c);
                bVar1 = iVar2 == 0;
                lVar13 = -0x74cd7558f11bb16d;
                lVar11 = -0x6b830b490502b1fc;
                goto LAB_00153dbc;
              }
            }
          }
        }
        else if (lVar11 < 0xeefccf6613a404) {
          if (lVar11 == -0xd2c4bfde361c8b) {
            DAT_001f7f18 = 0;
            iVar2 = FUN_001ca28c(&DAT_001f6658,*local_1f0);
            uVar3 = uVar17;
            lVar13 = -0x43be806e0ca8d6eb;
            param_3 = unaff_100001a8;
            param_5 = iVar2 == 0 | local_d0;
          }
          else if (lVar11 == -0x946ba40c3fa0e6) {
            DAT_001f7dbc = 0;
            iVar2 = FUN_001ca28c(&DAT_001f6134,*local_230);
            local_124 = iVar2 == 0 | local_184;
            uVar3 = uVar17;
            lVar13 = 0x10f8450ea519cb52;
            param_3 = unaff_100001a8;
          }
          else {
            uVar3 = uVar17;
            param_3 = unaff_100001a8;
            if (lVar11 == -0x9221de495d5681) {
              lVar13 = 0x1c0829bba514e5eb;
            }
          }
        }
        else {
          uVar3 = uVar17;
          lVar13 = 0x16120f84d26c7cc3;
          param_3 = unaff_100001a8;
          if (((lVar11 != 0xeefccf6613a404) &&
              (lVar13 = -0x2d074258544c509a, lVar11 != 0x21494fd9946e258)) &&
             (lVar13 = lVar11, lVar11 == 0x47762b6f081f36f)) {
LAB_00152964:
            uVar3 = uVar17;
            lVar13 = 0x3ae3a2bdeeed7623;
            param_3 = unaff_100001a8;
          }
        }
        goto LAB_0014efd4;
      }
      if (lVar11 < -0x128e89b4eab96ead) {
        if (lVar11 < -0x1612c4a7971310f3) {
          uVar3 = uVar17;
          lVar13 = -0x43be806e0ca8d6eb;
          param_3 = unaff_100001a8;
          param_5 = local_d0;
          if ((lVar11 == -0x187af011dc36495a) ||
             (lVar13 = lVar11, param_5 = bVar6, lVar11 != -0x17c27d58757a79b2)) goto LAB_0014efd4;
        }
        else if (lVar11 != -0x1612c4a7971310f3) {
          if (lVar11 == -0x160b69e8b69f9986) {
            DAT_001f7f0c = 0;
            iVar2 = FUN_001ca28c(&DAT_001f6620,*local_1b8);
            local_150 = iVar2 == 0 | local_138;
            uVar3 = uVar17;
            lVar13 = 0x50a93fce74366d5b;
            param_3 = unaff_100001a8;
          }
          else {
            uVar3 = uVar17;
            param_3 = unaff_100001a8;
            if (lVar11 == -0x15cfb3997315ca83) {
              DAT_001f7f10 = 0;
              iVar2 = FUN_001ca28c(&DAT_001f6640,local_1e0);
              bVar1 = iVar2 == 0;
              lVar11 = -0x77120ce1a7146e9b;
              lVar13 = 0x47762b6f081f36f;
              goto LAB_0015448c;
            }
          }
          goto LAB_0014efd4;
        }
      }
      else {
        if (-0xee499d4c3b0f568 < lVar11) {
          if (lVar11 == -0xee499d4c3b0f567) {
            lVar13 = 0x197f7751465033da;
            bVar1 = DAT_001f8080 == '\0';
            lVar11 = 0xd31409c6565eeeb;
            goto LAB_00154a58;
          }
          if (lVar11 != -0xb3e052cdd010133) {
            uVar3 = uVar17;
            param_3 = unaff_100001a8;
            if (lVar11 == -0xa5e4660a45f67af) {
              lVar13 = 0x5d9a15fd72df2b2d;
            }
            goto LAB_0014efd4;
          }
          lVar13 = 0x4fc69a9e6d95180f;
          bVar1 = DAT_001f806f == '\0';
          lVar11 = -0xa568ce605b85d4e;
          goto LAB_00154a58;
        }
        uVar3 = uVar17;
        in_x12 = local_c0;
        lVar13 = -0x433b204825d8f6e5;
        param_8 = local_b0;
        param_3 = unaff_100001a8;
        if (lVar11 == -0x128e89b4eab96ead) goto LAB_0014efd4;
        if (lVar11 == -0x1270bb0845f4929c) goto LAB_0015277c;
        in_x12 = uVar15;
        lVar13 = lVar11;
        param_8 = bVar9;
        if (lVar11 != -0x125ac883f9278762) goto LAB_0014efd4;
      }
LAB_0014ef98:
      uVar3 = uVar17;
      in_x12 = uVar15;
      lVar13 = -0x31ac0a6c3b286695;
      param_8 = bVar9;
      param_3 = bVar4;
      param_5 = bVar6;
      in_w9 = 0;
      goto LAB_0014efd4;
    }
    if (-0x216e5c5b83330c03 < lVar11) {
      if (-0x1d3c5b0683e94079 < lVar11) {
        if (lVar11 < -0x1b9b7d6d8f81c1a0) {
          uVar3 = uVar17;
          lVar13 = -0x6a3239dddcf7b76;
          param_3 = unaff_100001a8;
          if (((lVar11 != -0x1d3c5b0683e94078) &&
              (lVar13 = 0x428a962b530a7909, lVar11 != -0x1cf18cc9906aeaba)) &&
             (lVar13 = lVar11, lVar11 == -0x1c0fa5224e193c1c)) {
            lVar13 = 0x2224774020b96a3b;
          }
        }
        else {
          uVar3 = uVar17;
          lVar13 = -0x65ee13bcf6a8745d;
          param_3 = unaff_100001a8;
          if (lVar11 != -0x1b9b7d6d8f81c1a0) {
            if (lVar11 == -0x1a0d1b5379b11db4) {
              DAT_001f6660 = DAT_001f6660 ^ 0x7d;
              DAT_001f6658 = DAT_001f6658 ^ 0x7d7d7d7d7d7d7d7d;
              DAT_001f8084 = '\x01';
              lVar13 = -0xd2c4bfde361c8b;
            }
            else {
              lVar13 = lVar11;
              if (lVar11 == -0x19cbd41ccc8d708b) {
                lVar13 = 0x10f8450ea519cb52;
                local_124 = local_184;
              }
            }
          }
        }
        goto LAB_0014efd4;
      }
      if (lVar11 < -0x1ec26f045df0250b) {
        uVar3 = uVar17;
        lVar13 = 0x1c0829bba514e5eb;
        param_3 = unaff_100001a8;
        if (lVar11 != -0x216e5c5b83330c02) {
          if (lVar11 == -0x20c7f920e69a584b) goto LAB_0014ef98;
          lVar13 = lVar11;
          if (lVar11 == -0x1ef8c80825811807) {
            lVar13 = -0x70b21e18a1b7bfe9;
          }
        }
        goto LAB_0014efd4;
      }
      if (lVar11 != -0x1ec26f045df0250b) {
        uVar3 = uVar17;
        lVar13 = 0x2224774020b96a3b;
        param_3 = unaff_100001a8;
        if ((lVar11 != -0x1e7aa524cc1a77b8) && (lVar13 = lVar11, lVar11 == -0x1dfdf53b9bef49a9)) {
          lVar13 = -0x4fb44d53b86ff141;
          param_3 = bVar4;
          unaff_100001a8 = bVar4;
          if (DAT_001f8081 == '\0') {
            lVar13 = 0x2250531768a195ca;
          }
        }
        goto LAB_0014efd4;
      }
      local_230 = (long *)(param_2 + local_180 * 0x10 + 0x78);
      bVar1 = *local_230 == 0;
      lVar13 = -0x20c7f920e69a584b;
      lVar11 = -0x7d31cd92636beaa0;
      goto LAB_0015474c;
    }
    if (lVar11 < -0x2bb08e5dd05a7682) {
      if (lVar11 < -0x2ec85482ec4f9089) {
        if (lVar11 == -0x31712cda0a81f16d) {
          local_170 = local_100;
          local_218 = *(long *)(param_2 + local_100 * 0x10 + 0x70);
          local_d4 = local_104;
          uVar3 = uVar17;
          lVar13 = 0x7e3242dd438e7dd6;
          unaff_100001a8 = bVar4;
          if (local_218 != 0) {
            lVar13 = -0x357f1f3c4099ddbf;
          }
        }
        else {
          if (lVar11 == -0x2fc11e15bb3770b8) {
            DAT_001f7ecc = 0;
            iVar2 = FUN_001ca28c(&DAT_001f64d0,local_218);
            bVar1 = iVar2 == 0;
            lVar11 = 0x7bf5996b50565e0a;
            lVar13 = -0x1e7aa524cc1a77b8;
            goto LAB_0015448c;
          }
          uVar3 = uVar17;
          param_3 = unaff_100001a8;
          if (lVar11 == -0x31ac0a6c3b286695) {
            return bVar12 & 1;
          }
        }
      }
      else if (lVar11 == -0x2ec85482ec4f9089) {
        DAT_001f6650 = DAT_001f6650 ^ 0x9e;
        DAT_001f6651 = DAT_001f6651 ^ 0x9e;
        DAT_001f6652 = DAT_001f6652 ^ 0x9e;
        DAT_001f6653 = DAT_001f6653 ^ 0x9e;
        _DAT_001f6640 = _DAT_001f6640 ^ 0x9e9e9e9e9e9e9e9e;
        uRam00000000001f6648 = uRam00000000001f6648 ^ 0x9e9e9e9e9e9e9e9e;
        DAT_001f8082 = '\x01';
        uVar3 = uVar17;
        lVar13 = -0x15cfb3997315ca83;
        param_3 = unaff_100001a8;
      }
      else {
        if (lVar11 == -0x2d074258544c509a) {
          iVar2 = FUN_001ebe70(0,1,&DAT_001f7ec4);
          bVar1 = iVar2 == 0;
          lVar11 = 0x21494fd9946e258;
          lVar13 = -0xb3e052cdd010133;
          goto LAB_0015448c;
        }
        uVar3 = uVar17;
        param_3 = unaff_100001a8;
        if (lVar11 == -0x2c48e7dd76ed6288) {
          in_x12 = 0;
          lVar13 = -0x433b204825d8f6e5;
          param_8 = 0;
        }
      }
      goto LAB_0014efd4;
    }
    if (-0x26e603a40595c9ba < lVar11) {
      if (lVar11 == -0x26e603a40595c9b9) {
        local_240 = (long *)(param_2 + local_190 * 0x10 + 0x78);
        bVar1 = *local_240 == 0;
        lVar13 = -0x125ac883f9278762;
        lVar11 = 0x47fd215430218a72;
        goto LAB_0015474c;
      }
      if (lVar11 == -0x2397c51dadc7d7b4) {
        DAT_001f6500 = DAT_001f6500 ^ 0x8e;
        DAT_001f6501 = DAT_001f6501 ^ 0x8e;
        DAT_001f6502 = DAT_001f6502 ^ 0x8e;
        DAT_001f6503 = DAT_001f6503 ^ 0x8e;
        DAT_001f6504 = DAT_001f6504 ^ 0x8e;
        DAT_001f6505 = DAT_001f6505 ^ 0x8e;
        DAT_001f6506 = DAT_001f6506 ^ 0x8e;
        DAT_001f64f8 = DAT_001f64f8 ^ 0x8e8e8e8e8e8e8e8e;
        DAT_001f8073 = '\x01';
        uVar3 = uVar17;
        lVar13 = 0x1e40ab1264ca964a;
        param_3 = unaff_100001a8;
      }
      else {
        uVar3 = uVar17;
        param_3 = unaff_100001a8;
        if (lVar11 == -0x21a866bf132d7a94) {
          local_160 = local_1c8;
          local_14c = local_13c;
          goto LAB_00151d9c;
        }
      }
      goto LAB_0014efd4;
    }
    if (lVar11 == -0x2bb08e5dd05a7682) goto LAB_0014ef98;
    if (lVar11 == -0x285536f77cef129a) {
      lVar13 = 0x50dbcb484d99cc6b;
      bVar1 = DAT_001f8074 == '\0';
      lVar11 = 0x2be5d1666ed62a59;
      goto LAB_00154a58;
    }
    uVar3 = uVar17;
    param_3 = unaff_100001a8;
    if (lVar11 != -0x27fea51c5eede43c) goto LAB_0014efd4;
    DAT_001f7ed8 = 0;
    iVar2 = FUN_001ca28c(&DAT_001f6510,local_238);
    bVar1 = iVar2 == 0;
    lVar11 = -0x19cbd41ccc8d708b;
    lVar13 = -0x9221de495d5681;
  }
  else {
    if (lVar11 < 0x3c07fa57b835b15a) {
      if (lVar11 < 0x1d4d42ce7ff000a5) {
        if (0x12f87178135f6b8a < lVar11) {
          if (0x197f7751465033d9 < lVar11) {
            if (lVar11 < 0x1b8b6233d03d20da) {
              uVar3 = uVar17;
              lVar13 = 0x803be724308477a;
              param_3 = unaff_100001a8;
              if (lVar11 != 0x197f7751465033da) {
                if (lVar11 == 0x19ba5a9d82fe5aa2) {
                  local_100 = 0;
                  local_104 = 0;
LAB_00153690:
                  uVar3 = uVar17;
                  lVar13 = -0x31712cda0a81f16d;
                  param_3 = bVar4;
                  unaff_100001a8 = bVar4;
                }
                else {
                  lVar13 = lVar11;
                  if (lVar11 == 0x19dacfa28452fcfc) {
                    lVar13 = -0x946ba40c3fa0e6;
                    goto LAB_00153b6c;
                  }
                }
              }
            }
            else {
              uVar3 = uVar17;
              lVar13 = -0x65ee13bcf6a8745d;
              param_3 = unaff_100001a8;
              if (lVar11 != 0x1b8b6233d03d20da) {
                if (lVar11 == 0x1bbd4f8787dce624) {
                  DAT_001f62d8 = DAT_001f62d8 ^ 0x4444444444444444;
                  DAT_001f8051 = '\x01';
                  lVar13 = 0x13257602034b8210;
                }
                else {
                  lVar13 = lVar11;
                  if (lVar11 == 0x1c0829bba514e5eb) {
                    iVar2 = FUN_001ebe70(0,1,&DAT_001f7dbc);
                    bVar1 = iVar2 == 0;
                    lVar11 = -0x216e5c5b83330c02;
                    lVar13 = 0x3d99a846e8850681;
                    goto LAB_0015448c;
                  }
                }
              }
            }
            goto LAB_0014efd4;
          }
          if (lVar11 < 0x14fa78e60261fb56) {
            uVar3 = uVar17;
            lVar13 = -0x2fc11e15bb3770b8;
            param_3 = unaff_100001a8;
            if (lVar11 != 0x12f87178135f6b8b) {
              if (lVar11 == 0x13257602034b8210) {
                DAT_001f7e4c = 0;
                lVar13 = FUN_001cac50(*(undefined8 *)(param_2 + 0x30),&DAT_001f62d8);
                bVar1 = lVar13 == 0;
                lVar13 = -0x7338881a22a1e646;
                lVar11 = -0x1b9b7d6d8f81c1a0;
                goto LAB_00153dbc;
              }
              lVar13 = lVar11;
              if (lVar11 == 0x13788edb98da5cb9) {
                lVar13 = 0x3f3161d8771d9add;
              }
            }
            goto LAB_0014efd4;
          }
          if (lVar11 == 0x14fa78e60261fb56) {
            DAT_001f6664 = DAT_001f6664 ^ 0xcb;
            DAT_001f6665 = DAT_001f6665 ^ 0xcb;
            DAT_001f6666 = DAT_001f6666 ^ 0xcb;
            DAT_001f6667 = DAT_001f6667 ^ 0xcb;
            DAT_001f6668 = DAT_001f6668 ^ 0xcb;
            DAT_001f6669 = DAT_001f6669 ^ 0xcb;
            DAT_001f666a = DAT_001f666a ^ 0xcb;
            DAT_001f8085 = '\x01';
            uVar3 = uVar17;
            lVar13 = 0x8696ade028f283a;
            param_3 = unaff_100001a8;
            goto LAB_0014efd4;
          }
          if (lVar11 != 0x16120f84d26c7cc3) {
            uVar3 = uVar17;
            param_3 = unaff_100001a8;
            if (lVar11 == 0x18b2ae18a4673b6e) goto LAB_0014ef98;
            goto LAB_0014efd4;
          }
          iVar2 = FUN_001ebe70(0,1,&DAT_001f7ed4);
          lVar11 = -0x49f8afa0841f1ff3;
          lVar13 = -0x329e30a96569d818;
          bVar1 = iVar2 == 0;
          goto LAB_0015448c;
        }
        if (0xd78955e2cbe03ca < lVar11) {
          if (lVar11 < 0x10f8450ea519cb52) {
            uVar3 = uVar17;
            lVar13 = -0x35b815ebb2ef5ee0;
            param_3 = unaff_100001a8;
            if (lVar11 != 0xd78955e2cbe03cb) {
              if (lVar11 == 0xd8637054bc6d52f) {
                param_1 = 0;
                lVar13 = 0x688e965820263093;
                param_6 = 0;
              }
              else {
                lVar13 = lVar11;
                if (lVar11 == 0xe0a8b07e9042c15) {
                  local_14c = 0;
                  local_160 = 0;
LAB_00151d9c:
                  uVar3 = uVar17;
                  lVar13 = -0x50b1aed5507b24a0;
                  param_3 = unaff_100001a8;
                }
              }
            }
          }
          else if (lVar11 == 0x10f8450ea519cb52) {
            local_248 = local_180 + 1;
            uVar3 = uVar17;
            lVar13 = 0x6bf796912202d1f4;
            param_3 = unaff_100001a8;
            local_d8 = local_124;
            if (*(ulong *)(param_2 + 0x870) <= local_248) {
              lVar13 = -0x3d85c3dc3eb75d7c;
            }
          }
          else if (lVar11 == 0x1190562e401dcc39) {
            DAT_001f6654 = DAT_001f6654 ^ 0x3c;
            DAT_001f6655 = DAT_001f6655 ^ 0x3c;
            DAT_001f6656 = DAT_001f6656 ^ 0x3c;
            DAT_001f6657 = DAT_001f6657 ^ 0x3c;
            DAT_001f8083 = '\x01';
            uVar3 = uVar17;
            lVar13 = 0x7d0bcdf4a984c1f3;
            param_3 = unaff_100001a8;
          }
          else {
            uVar3 = uVar17;
            param_3 = unaff_100001a8;
            if (lVar11 == 0x12e3842709f924b9) {
              local_110 = 0;
              local_114 = 0;
LAB_00152464:
              uVar3 = uVar17;
              lVar13 = 0x5a2a53b6bf19a5e2;
              param_3 = unaff_100001a8;
            }
          }
          goto LAB_0014efd4;
        }
        if (0xa2d6d5eb3926c48 < lVar11) {
          if (lVar11 == 0xa2d6d5eb3926c49) {
            lVar13 = 0x74c5264aa8f8e21f;
LAB_00153b6c:
            DAT_001f6137 = DAT_001f6137 ^ 0xae;
            DAT_001f6136 = DAT_001f6136 ^ 0xae;
            DAT_001f6135 = DAT_001f6135 ^ 0xae;
            DAT_001f6134 = DAT_001f6134 ^ 0xae;
            DAT_001f6138 = DAT_001f6138 ^ 0xae;
            DAT_001f802d = '\x01';
            uVar3 = uVar17;
            param_3 = unaff_100001a8;
          }
          else {
            if (lVar11 == 0xb1a5ae491173d07) {
              lVar13 = 0x23244142a1e266b3;
              bVar1 = DAT_001f802d == '\0';
              lVar11 = 0x288d0c8e8e9ed82e;
              goto LAB_00154a58;
            }
            uVar3 = uVar17;
            param_3 = unaff_100001a8;
            if (lVar11 == 0xd31409c6565eeeb) {
              _DAT_001f6610 = _DAT_001f6610 ^ 0x1010101010101010;
              uRam00000000001f6618 = uRam00000000001f6618 ^ 0x1010101010101010;
              DAT_001f8080 = '\x01';
              lVar13 = 0x803be724308477a;
            }
          }
          goto LAB_0014efd4;
        }
        if (lVar11 == 0x803be724308477a) {
          DAT_001f7f08 = 0;
          iVar2 = FUN_001ca28c(&DAT_001f6610,*local_240);
          local_134 = iVar2 == 0 | local_194;
          uVar3 = uVar17;
          lVar13 = -0x91f7cff879c65ef;
          param_3 = unaff_100001a8;
          goto LAB_0014efd4;
        }
        uVar3 = uVar17;
        param_3 = unaff_100001a8;
        if (lVar11 != 0x8696ade028f283a) goto LAB_0014efd4;
        DAT_001f7f1c = 0;
        iVar2 = FUN_001ca28c(*(undefined8 *)(param_2 + 8),&DAT_001f6664);
        bVar1 = iVar2 == 0;
        lVar13 = -0x7398ccf9efdd5742;
        lVar11 = 0x64a2c495fe628cd1;
      }
      else {
        if (0x247995d0887a7f15 < lVar11) {
          if (lVar11 < 0x2d783d12c7c2aca0) {
            if (lVar11 < 0x2b64a79a6c7ee933) {
              if (lVar11 == 0x247995d0887a7f16) goto LAB_0014ef98;
              if (lVar11 == 0x25034e08493b9ef8) {
                uVar3 = uVar17;
                lVar13 = 0x12f87178135f6b8b;
                unaff_100001a8 = bVar4;
                if (DAT_001f8071 == '\0') {
                  lVar13 = 0x6972d97784aac588;
                }
              }
              else {
                uVar3 = uVar17;
                param_3 = unaff_100001a8;
                if (lVar11 == 0x288d0c8e8e9ed82e) {
                  lVar13 = -0x6df148108f895d02;
                  goto LAB_00153b6c;
                }
              }
            }
            else {
              uVar3 = uVar17;
              lVar13 = 0x1e9c7b3be4308f7c;
              param_3 = unaff_100001a8;
              if (lVar11 != 0x2b64a79a6c7ee933) {
                if (lVar11 == 0x2be5d1666ed62a59) {
                  _DAT_001f6510 = _DAT_001f6510 ^ 0xd7d7d7d7d7d7d7d7;
                  uRam00000000001f6518 = uRam00000000001f6518 ^ 0xd7d7d7d7d7d7d7d7;
                  DAT_001f6528 = DAT_001f6528 ^ 0xd7;
                  DAT_001f6529 = DAT_001f6529 ^ 0xd7;
                  DAT_001f652a = DAT_001f652a ^ 0xd7;
                  DAT_001f6520 = DAT_001f6520 ^ 0xd7d7d7d7d7d7d7d7;
                  DAT_001f8074 = '\x01';
                  lVar13 = -0x27fea51c5eede43c;
                }
                else {
                  lVar13 = lVar11;
                  if (lVar11 == 0x2c7ef03e22ffef1a) {
                    lVar13 = 0x246f579dfc3f250e;
                  }
                }
              }
            }
            goto LAB_0014efd4;
          }
          if (lVar11 < 0x34a0affeb27eee57) {
            uVar3 = uVar17;
            lVar13 = 0x583b6ecf3b20d4e5;
            param_3 = unaff_100001a8;
            if (lVar11 == 0x2d783d12c7c2aca0) goto LAB_0014efd4;
            if (lVar11 == 0x2d8a33cd6c56a699) {
              lVar13 = -0x45ed02011f253c76;
              param_3 = bVar4;
              unaff_100001a8 = bVar4;
              if ((local_b4 & local_1e8 != 0) == 0) {
                lVar13 = -0x2bb08e5dd05a7682;
              }
              goto LAB_0014efd4;
            }
            lVar13 = lVar11;
            if (lVar11 != 0x3477c263f118b795) goto LAB_0014efd4;
            bVar1 = (local_13c & local_1d0 != 0) == 0;
            lVar11 = -0x7754e05f40b87d9a;
            lVar13 = -0x452ad1970f0ee6f5;
          }
          else {
            if (lVar11 == 0x34a0affeb27eee57) {
              local_1f0 = (long *)(param_2 + local_158 * 0x10 + 0x78);
              uVar3 = uVar17;
              lVar13 = -0x3aa2b410caa491f9;
              unaff_100001a8 = bVar4;
              if (*local_1f0 != 0) {
                lVar13 = 0xeefccf6613a404;
              }
              goto LAB_0014efd4;
            }
            if (lVar11 != 0x350e9169d587f106) {
              uVar3 = uVar17;
              param_3 = unaff_100001a8;
              if (lVar11 == 0x3ae3a2bdeeed7623) {
                iVar2 = FUN_001ebe70(0,1,&DAT_001f7f14);
                bVar1 = iVar2 == 0;
                lVar11 = 0x777f310d4d60c87c;
                lVar13 = 0x350e9169d587f106;
                goto LAB_0015448c;
              }
              goto LAB_0014efd4;
            }
            lVar13 = 0x69c49cd5913ad1c9;
            bVar1 = DAT_001f8083 == '\0';
            lVar11 = 0x1190562e401dcc39;
          }
          goto LAB_00154a58;
        }
        if (lVar11 < 0x1fdf4110d715278b) {
          if (lVar11 < 0x1e40ab1264ca964a) {
            if (lVar11 == 0x1d4d42ce7ff000a5) {
              lVar13 = 0x47403f4cbf81eccf;
              bVar1 = DAT_001f8082 == '\0';
              lVar11 = -0x2ec85482ec4f9089;
              goto LAB_00154a58;
            }
            uVar3 = uVar17;
            param_3 = unaff_100001a8;
            if (lVar11 == 0x1dcd6511bbd4e067) goto LAB_001530a4;
            goto LAB_0014efd4;
          }
          if (lVar11 == 0x1e40ab1264ca964a) {
            DAT_001f7ed4 = 0;
            iVar2 = FUN_001ca28c(&DAT_001f64f8,local_1f8);
            bVar1 = iVar2 == 0;
            lVar11 = -0x187af011dc36495a;
            lVar13 = 0x557960caf59f9cd8;
            goto LAB_0015448c;
          }
          if (lVar11 == 0x1e9c7b3be4308f7c) {
            iVar2 = FUN_001ebe70(0,1,&DAT_001f7ed8);
            bVar1 = iVar2 == 0;
            lVar13 = -0x285536f77cef129a;
            lVar11 = 0x2b64a79a6c7ee933;
          }
          else {
            uVar3 = uVar17;
            param_3 = unaff_100001a8;
            if (lVar11 != 0x1ecc85d119176d1d) goto LAB_0014efd4;
            DAT_001f7ec4 = 0;
            iVar2 = FUN_001ca28c(&DAT_001f64b8,local_1c0);
            bVar1 = iVar2 == 0;
            lVar13 = -0x1ef8c80825811807;
            lVar11 = 0x7c6090dbbfc1a016;
          }
        }
        else if (lVar11 < 0x23244142a1e266b3) {
          uVar3 = uVar17;
          lVar13 = -0x374bd1bd9817312;
          param_3 = unaff_100001a8;
          if (lVar11 == 0x1fdf4110d715278b) goto LAB_0014efd4;
          if (lVar11 != 0x2224774020b96a3b) {
            lVar13 = lVar11;
            if (lVar11 == 0x2250531768a195ca) {
              DAT_001f6630 = DAT_001f6630 ^ 0xb1;
              DAT_001f6631 = DAT_001f6631 ^ 0xb1;
              DAT_001f6632 = DAT_001f6632 ^ 0xb1;
              _DAT_001f6620 = _DAT_001f6620 ^ 0xb1b1b1b1b1b1b1b1;
              uRam00000000001f6628 = uRam00000000001f6628 ^ 0xb1b1b1b1b1b1b1b1;
              DAT_001f8081 = '\x01';
              lVar13 = -0x160b69e8b69f9986;
            }
            goto LAB_0014efd4;
          }
          iVar2 = FUN_001ebe70(0,1,&DAT_001f7dbc);
          bVar1 = iVar2 == 0;
          lVar13 = -0x5660c95fbffe0388;
          lVar11 = -0x1c0fa5224e193c1c;
        }
        else {
          uVar3 = uVar17;
          lVar13 = -0x6df148108f895d02;
          param_3 = unaff_100001a8;
          if (((lVar11 == 0x23244142a1e266b3) ||
              (param_1 = local_e8, lVar13 = 0x688e965820263093, param_6 = local_dc,
              lVar11 == 0x2414899e2f1fe8ff)) ||
             (param_1 = uVar10, lVar13 = lVar11, param_6 = bVar7, lVar11 != 0x246f579dfc3f250e))
          goto LAB_0014efd4;
          DAT_001f7edc = 0;
          iVar2 = FUN_001ca28c(&DAT_001f6530,local_1a8);
          bVar1 = iVar2 == 0;
          lVar13 = -0xa5e4660a45f67af;
          lVar11 = 0x69958a745c3d394d;
        }
      }
LAB_00153dbc:
      uVar3 = uVar17;
      param_1 = uVar10;
      param_3 = bVar4;
      unaff_100001a8 = bVar4;
      param_6 = bVar7;
      if (!bVar1) {
        lVar13 = lVar11;
      }
      goto LAB_0014efd4;
    }
    if (0x5d9a15fd72df2b2c < lVar11) {
      if (0x6ff1ae91058fc9ae < lVar11) {
        if (lVar11 < 0x7975099620523a59) {
          if (lVar11 < 0x7204ca19f6201cc5) {
            if (lVar11 == 0x6ff1ae91058fc9af) {
              lVar13 = 0xd8637054bc6d52f;
              bVar1 = *(long *)(param_2 + 0x870) == 7;
              lVar11 = -0x5364da4ea7a75333;
              goto LAB_0015474c;
            }
            if (lVar11 == 0x717a6686a0ab3943) {
              uVar3 = uVar17;
              lVar13 = -0x2c48e7dd76ed6288;
              unaff_100001a8 = bVar4;
              if ((local_dc & local_258 != 0) == 0) {
                lVar13 = 0x18b2ae18a4673b6e;
              }
            }
            else {
              uVar3 = uVar17;
              param_3 = unaff_100001a8;
              if (lVar11 == 0x71fd5f6de0bab75f) {
                _DAT_001f65f0 = _DAT_001f65f0 ^ 0x2121212121212121;
                uRam00000000001f65f8 = uRam00000000001f65f8 ^ 0x2121212121212121;
                DAT_001f6608 = DAT_001f6608 ^ 0x21;
                DAT_001f6600 = DAT_001f6600 ^ 0x2121212121212121;
                DAT_001f807f = '\x01';
                lVar13 = -0x6a3239dddcf7b76;
              }
            }
          }
          else {
            uVar3 = uVar17;
            lVar13 = 0x13257602034b8210;
            param_3 = unaff_100001a8;
            if (lVar11 != 0x7204ca19f6201cc5) {
              if (lVar11 == 0x74c5264aa8f8e21f) {
                DAT_001f7dbc = 0;
                iVar2 = FUN_001ca28c(&DAT_001f6134,*local_210);
                uVar3 = (ulong)(iVar2 == 0 | local_d4);
                lVar13 = -0x726b7adf6b504903;
              }
              else {
                lVar13 = lVar11;
                if (lVar11 == 0x777f310d4d60c87c) goto LAB_00152964;
              }
            }
          }
        }
        else if (lVar11 < 0x7cc3eb7853b6d35d) {
          if (lVar11 == 0x7975099620523a59) {
            iVar2 = FUN_001ebe70(0,1,&DAT_001f7f04);
            bVar1 = iVar2 == 0;
            lVar13 = -0x4d5cbd28ee8e8369;
            lVar11 = -0x5d951a913e5fc42;
            goto LAB_00153dbc;
          }
          uVar3 = (ulong)local_d4;
          lVar13 = -0x726b7adf6b504903;
          param_3 = unaff_100001a8;
          if ((lVar11 != 0x7bf5996b50565e0a) &&
             (uVar3 = uVar17, lVar13 = lVar11, lVar11 == 0x7c6090dbbfc1a016)) {
            lVar13 = 0x50a93fce74366d5b;
            local_150 = local_138;
          }
        }
        else {
          uVar3 = uVar17;
          lVar13 = -0xd2c4bfde361c8b;
          param_3 = unaff_100001a8;
          if (lVar11 != 0x7cc3eb7853b6d35d) {
            if (lVar11 == 0x7d0bcdf4a984c1f3) {
              DAT_001f7f14 = 0;
              iVar2 = FUN_001ca28c(&DAT_001f6654,*local_1d8);
              lVar13 = 0x5e032c1f9e3f2788;
              param_4 = iVar2 == 0 | local_cc;
            }
            else {
              lVar13 = lVar11;
              param_3 = bVar4;
              if (lVar11 == 0x7e3242dd438e7dd6) goto LAB_0014ef98;
            }
          }
        }
        goto LAB_0014efd4;
      }
      if (lVar11 < 0x69958a745c3d394d) {
        if (lVar11 < 0x64a2c495fe628cd1) {
          if (lVar11 == 0x5d9a15fd72df2b2d) {
            iVar2 = FUN_001ebe70(0,1,&DAT_001f7dbc);
            bVar1 = iVar2 == 0;
            lVar11 = -0x70256156d5700be7;
            lVar13 = 0xb1a5ae491173d07;
            goto LAB_0015448c;
          }
          uVar3 = uVar17;
          lVar13 = 0x1e40ab1264ca964a;
          param_3 = unaff_100001a8;
          if ((lVar11 != 0x5def765d5334d892) && (lVar13 = lVar11, lVar11 == 0x5e032c1f9e3f2788)) {
            local_1e8 = *(ulong *)(param_2 + 0x870);
            local_c8 = local_148 + 1;
            lVar13 = -0x5047d328f08522ac;
            local_b4 = bVar5;
            param_3 = bVar4;
            unaff_100001a8 = bVar4;
            if (local_1e8 <= local_c8) {
              lVar13 = 0x2d8a33cd6c56a699;
            }
          }
        }
        else {
          uVar3 = uVar17;
          lVar13 = 0x6ff1ae91058fc9af;
          param_3 = unaff_100001a8;
          if (lVar11 != 0x64a2c495fe628cd1) {
            if (lVar11 == 0x688e965820263093) {
              local_250 = *(long *)(param_2 + uVar10 * 0x10 + 0x70);
              lVar13 = -0x17c27d58757a79b2;
              local_190 = uVar10;
              local_194 = bVar7;
              if (local_250 != 0) {
                lVar13 = -0x26e603a40595c9b9;
              }
            }
            else {
              lVar13 = lVar11;
              if (lVar11 == 0x6972d97784aac588) {
                DAT_001f64e0 = DAT_001f64e0 ^ 0xc2;
                DAT_001f64e1 = DAT_001f64e1 ^ 0xc2;
                DAT_001f64e2 = DAT_001f64e2 ^ 0xc2;
                DAT_001f64e3 = DAT_001f64e3 ^ 0xc2;
                DAT_001f64e4 = DAT_001f64e4 ^ 0xc2;
                DAT_001f64e5 = DAT_001f64e5 ^ 0xc2;
                DAT_001f64e6 = DAT_001f64e6 ^ 0xc2;
                _DAT_001f64d0 = _DAT_001f64d0 ^ 0xc2c2c2c2c2c2c2c2;
                uRam00000000001f64d8 = uRam00000000001f64d8 ^ 0xc2c2c2c2c2c2c2c2;
                DAT_001f8071 = '\x01';
                lVar13 = -0x2fc11e15bb3770b8;
              }
            }
          }
        }
        goto LAB_0014efd4;
      }
      if (lVar11 < 0x6ae5352ca83a7116) {
        uVar3 = uVar17;
        lVar13 = 0x5775204445bd9ca7;
        param_7 = local_ac;
        param_3 = unaff_100001a8;
        if (((lVar11 != 0x69958a745c3d394d) &&
            (lVar13 = 0x7d0bcdf4a984c1f3, param_7 = bVar8, lVar11 != 0x69c49cd5913ad1c9)) &&
           (lVar13 = lVar11, lVar11 == 0x69f03c64c54993d3)) goto LAB_0015277c;
        goto LAB_0014efd4;
      }
      if (lVar11 != 0x6ae5352ca83a7116) {
        uVar3 = uVar17;
        lVar13 = 0x74c5264aa8f8e21f;
        param_3 = unaff_100001a8;
        if ((lVar11 != 0x6b5d23c3a7dfa97d) && (lVar13 = lVar11, lVar11 == 0x6bf796912202d1f4)) {
          local_110 = local_248;
          local_114 = local_d8;
          goto LAB_00152464;
        }
        goto LAB_0014efd4;
      }
      local_1a0 = (long *)(param_2 + local_120 * 0x10 + 0x78);
      bVar1 = *local_1a0 == 0;
      lVar13 = 0x69f03c64c54993d3;
      lVar11 = 0x2d783d12c7c2aca0;
LAB_0015474c:
      uVar3 = uVar17;
      param_3 = bVar4;
      unaff_100001a8 = bVar4;
      if (!bVar1) {
        lVar13 = lVar11;
      }
      goto LAB_0014efd4;
    }
    if (lVar11 < 0x4ec62207f49df86c) {
      if (0x428a962b530a7908 < lVar11) {
        if (lVar11 < 0x47403f4cbf81eccf) {
          if (lVar11 == 0x428a962b530a7909) {
            iVar2 = FUN_001ebe70(0,1,&DAT_001f7ecc);
            bVar1 = iVar2 == 0;
            lVar11 = -0x1cf18cc9906aeaba;
            lVar13 = 0x25034e08493b9ef8;
            goto LAB_0015448c;
          }
          if (lVar11 == 0x42b3c7b58b5f6883) {
            bVar1 = (local_164 & local_208 != 0) == 0;
            lVar11 = -0x1612c4a7971310f3;
            lVar13 = 0x19ba5a9d82fe5aa2;
            goto LAB_00154a58;
          }
          uVar3 = uVar17;
          param_3 = unaff_100001a8;
          if (lVar11 == 0x4411d37948845466) {
            lVar13 = -0x35a060866818dee5;
            param_3 = bVar4;
            unaff_100001a8 = bVar4;
            if (DAT_001f8085 == '\0') {
              lVar13 = 0x14fa78e60261fb56;
            }
          }
          goto LAB_0014efd4;
        }
        uVar3 = uVar17;
        lVar13 = -0x15cfb3997315ca83;
        param_3 = unaff_100001a8;
        if (((lVar11 == 0x47403f4cbf81eccf) ||
            (lVar13 = 0x7975099620523a59, lVar11 == 0x47fd215430218a72)) ||
           (lVar13 = lVar11, lVar11 != 0x47fe3e74456134b9)) goto LAB_0014efd4;
        goto LAB_0015277c;
      }
      if (lVar11 < 0x3f3161d8771d9add) {
        uVar3 = uVar17;
        lVar13 = -0x2d074258544c509a;
        param_3 = unaff_100001a8;
        if ((lVar11 != 0x3c07fa57b835b15a) && (lVar13 = lVar11, lVar11 == 0x3d99a846e8850681)) {
          lVar13 = -0x784d0bdea4151311;
          param_3 = bVar4;
          unaff_100001a8 = bVar4;
          if (DAT_001f802d == '\0') {
            lVar13 = 0x19dacfa28452fcfc;
          }
        }
        goto LAB_0014efd4;
      }
      if (lVar11 != 0x3f3161d8771d9add) {
        if (lVar11 == 0x403ea4e3db1f919a) goto LAB_0014ef98;
        uVar3 = uVar17;
        param_3 = unaff_100001a8;
        if (lVar11 == 0x425900edd6c73092) goto LAB_0015277c;
        goto LAB_0014efd4;
      }
      iVar2 = FUN_001ebe70(0,1,&DAT_001f7f10);
      bVar1 = iVar2 == 0;
      lVar11 = -0x45399a473f007055;
      lVar13 = 0x1d4d42ce7ff000a5;
    }
    else {
      if (lVar11 < 0x575f78a99fadc19a) {
        if (lVar11 < 0x50dbcb484d99cc6b) {
          if (lVar11 == 0x4ec62207f49df86c) goto LAB_0015277c;
          uVar3 = uVar17;
          lVar13 = 0x1ecc85d119176d1d;
          param_3 = unaff_100001a8;
          if ((lVar11 != 0x4fc69a9e6d95180f) && (lVar13 = lVar11, lVar11 == 0x50a93fce74366d5b)) {
            local_1d0 = *(ulong *)(param_2 + 0x870);
            local_1c8 = local_130 + 1;
            lVar13 = -0x21a866bf132d7a94;
            local_13c = local_150;
            param_3 = bVar4;
            unaff_100001a8 = bVar4;
            if (local_1d0 <= local_1c8) {
              lVar13 = 0x3477c263f118b795;
            }
          }
        }
        else {
          uVar3 = uVar17;
          lVar13 = -0x27fea51c5eede43c;
          param_3 = unaff_100001a8;
          if (((lVar11 != 0x50dbcb484d99cc6b) &&
              (lVar13 = -0x70b21e18a1b7bfe9, lVar11 != 0x53b263098aeb45b5)) &&
             (lVar13 = lVar11, lVar11 == 0x557960caf59f9cd8)) {
LAB_001530a4:
            uVar3 = uVar17;
            lVar13 = -0x42a23076d2e47ac5;
            param_3 = unaff_100001a8;
          }
        }
        goto LAB_0014efd4;
      }
      if (0x5a2a53b6bf19a5e1 < lVar11) {
        if (lVar11 == 0x5a2a53b6bf19a5e2) {
          local_180 = local_110;
          local_238 = *(long *)(param_2 + local_110 * 0x10 + 0x70);
          uVar3 = uVar17;
          lVar13 = 0x575f78a99fadc19a;
          unaff_100001a8 = bVar4;
          local_184 = local_114;
          if (local_238 != 0) {
            lVar13 = -0x1ec26f045df0250b;
          }
        }
        else {
          if (lVar11 == 0x5c2efaffad11cd71) {
            lVar13 = 0x2c7ef03e22ffef1a;
            bVar1 = DAT_001f8075 == '\0';
            lVar11 = -0x682045da1d224e0d;
            goto LAB_00154a58;
          }
          uVar3 = uVar17;
          param_3 = unaff_100001a8;
          if (lVar11 == 0x5d132e262975d346) {
            lVar13 = -0x35b815ebb2ef5ee0;
          }
        }
        goto LAB_0014efd4;
      }
      if (lVar11 == 0x575f78a99fadc19a) goto LAB_0014ef98;
      if (lVar11 == 0x5775204445bd9ca7) {
        local_1b0 = *(ulong *)(param_2 + 0x870);
        local_c0 = local_120 + 1;
        uVar3 = uVar17;
        lVar13 = -0x128e89b4eab96ead;
        local_b0 = bVar8;
        unaff_100001a8 = bVar4;
        if (local_1b0 <= local_c0) {
          lVar13 = -0x45bbb75813cd70ce;
        }
        goto LAB_0014efd4;
      }
      uVar3 = uVar17;
      param_3 = unaff_100001a8;
      if (lVar11 != 0x583b6ecf3b20d4e5) goto LAB_0014efd4;
      iVar2 = FUN_001ebe70(0,1,&DAT_001f7edc);
      bVar1 = iVar2 == 0;
      lVar11 = -0x55310a0b815e46e3;
      lVar13 = 0x5c2efaffad11cd71;
    }
  }
LAB_0015448c:
  uVar3 = uVar17;
  param_3 = bVar4;
  unaff_100001a8 = bVar4;
  if (!bVar1) {
    lVar13 = lVar11;
  }
  goto LAB_0014efd4;
}


