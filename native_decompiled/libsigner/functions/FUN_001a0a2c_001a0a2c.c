// Function: FUN_001a0a2c
// Entry: 001a0a2c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_001a0a2c(undefined4 *param_1,char *param_2)

{
  int unaff_1000013b;
  char *__s;
  bool bVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  int in_w9;
  int iVar6;
  long lVar7;
  undefined4 *puVar8;
  uint uVar9;
  char *pcVar10;
  long local_130;
  undefined4 *local_128;
  char *local_120;
  uint local_114;
  char *local_110;
  char *local_108;
  long local_100;
  char *local_f8;
  long local_f0;
  void *local_e8;
  uint local_dc;
  FILE *local_d8;
  uint local_cc;
  undefined8 *local_c8;
  long local_c0;
  long *local_b8;
  long local_b0;
  uint local_a4;
  long *local_a0;
  uint local_98;
  int iStack_94;
  undefined1 *local_90;
  uint local_84;
  long local_80;
  
  plVar4 = &local_130;
  local_130 = tpidr_el0;
  local_80 = *(long *)(local_130 + 0x28);
  lVar7 = 0x5427e3fe8053026a;
  local_128 = param_1;
  local_120 = param_2;
LAB_001a0b38:
  iVar6 = unaff_1000013b;
  iVar2 = in_w9;
  lVar5 = lVar7;
  __s = local_108;
  puVar8 = (undefined4 *)((ulong)param_1 & 0xffffffff);
  pcVar10 = (char *)((ulong)param_2 & 0xffffffff);
  uVar9 = (uint)param_1;
  lVar7 = lVar5;
  param_1 = puVar8;
  in_w9 = iVar2;
  unaff_1000013b = iVar6;
  if (lVar5 < 0x1666a35a3e139985) {
    if (-0x2e2c7788f6896295 < lVar5) {
      if (lVar5 < -0xb6b4c3bb4fa6b5c) {
        if (lVar5 < -0x1a2c17747d4c9d16) {
          if (-0x255429dbcbdc462c < lVar5) {
            if (lVar5 < -0x203d639f93f665df) {
              param_1 = (undefined4 *)(ulong)local_84;
              param_2 = pcVar10;
              lVar7 = 0x7e480ccd9447af9d;
              in_w9 = iVar6;
              if ((lVar5 != -0x255429dbcbdc462b) &&
                 (param_1 = puVar8, lVar7 = lVar5, lVar5 == -0x252a03a8d9aa82d5)) {
                lVar7 = -0x37bcec43bd9d08fe;
              }
            }
            else {
              if (lVar5 == -0x203d639f93f665df) goto LAB_001a292c;
              param_2 = pcVar10;
              in_w9 = iVar6;
              if (lVar5 == -0x1c57606b44c18182) {
LAB_001a1f9c:
                param_2 = pcVar10;
                lVar7 = -0x37d03aa9c8b304fc;
                in_w9 = iVar6;
              }
            }
            goto LAB_001a0b38;
          }
          if (lVar5 != -0x2e2c7788f6896294) {
            param_2 = (char *)(ulong)local_98;
            lVar7 = 0x3fe4345baf199427;
            in_w9 = iStack_94;
            unaff_1000013b = iStack_94;
            if ((lVar5 != -0x2c4303065cb3eee6) &&
               (param_2 = pcVar10, lVar7 = lVar5, in_w9 = iVar6, unaff_1000013b = iVar6,
               lVar5 == -0x2bf7c1f74e42bb60)) {
              lVar7 = -0x5c9aeb5b95069b35;
              in_w9 = iVar2;
              if (DAT_001f8304 == '\0') {
                lVar7 = 0x754d2b88abe28d02;
              }
            }
            goto LAB_001a0b38;
          }
        }
        else {
          if (-0x15c48858a06ca71e < lVar5) {
            if (lVar5 < -0x12c3a303aebdf85b) {
              if (lVar5 == -0x15c48858a06ca71d) {
                param_2 = pcVar10;
                lVar7 = 0x548f69369cb47b0a;
                if (DAT_001f82f8._1_1_ == '\0') {
                  lVar7 = 0x5701972a5c88a65c;
                }
              }
              else {
                param_2 = pcVar10;
                in_w9 = iVar6;
                if (lVar5 == -0x15a21fd5d20b04b8) {
                  local_cc = local_a4;
                  lVar7 = -0x7dc75478ad7cf9e9;
                }
              }
            }
            else {
              param_2 = pcVar10;
              lVar7 = 0x45f288ff0a7ea1de;
              in_w9 = iVar6;
              if ((lVar5 != -0x12c3a303aebdf85b) && (lVar7 = lVar5, lVar5 == -0xfd56005cdcebed6)) {
                DAT_001f82e4 = 0;
                local_c0 = *local_b8 - local_b0;
                lVar7 = FUN_001d17ac(local_b0,local_c0,&DAT_001f7450,0xf);
                bVar1 = lVar7 == 0;
                lVar5 = -0x608b613e0d15eb95;
                lVar7 = 0x56c7de269b39cb28;
                goto LAB_001a0b28;
              }
            }
            goto LAB_001a0b38;
          }
          if (lVar5 != -0x1a2c17747d4c9d16) {
            if (lVar5 == -0x17b186783e63ae61) {
              param_2 = pcVar10;
              lVar7 = -0x6bd1c6dbe046ca41;
              if (DAT_001f82fc == '\0') {
                lVar7 = 0x38b550c75dcbd861;
              }
            }
            else {
              param_2 = pcVar10;
              in_w9 = iVar6;
              if (lVar5 == -0x1736fceebecd72f8) goto LAB_001a25d4;
            }
            goto LAB_001a0b38;
          }
        }
        local_98 = local_84;
        iStack_94 = 4;
        param_2 = pcVar10;
        lVar7 = -0x2c4303065cb3eee6;
        in_w9 = iVar6;
        goto LAB_001a0b38;
      }
      if (lVar5 < 0x494913e247ec810) {
        if (-0x5a5e67cbbd9137f < lVar5) {
          if (lVar5 < 0x161e1b3a107f5a8) {
            if (lVar5 == -0x5a5e67cbbd9137e) {
              iVar3 = FUN_001ebe70(0,1,&DAT_001f82d4);
              bVar1 = iVar3 == 0;
              lVar5 = 0x65f514c9e7f64775;
              lVar7 = 0x7096451cc89b6285;
              goto LAB_001a0b28;
            }
            param_2 = pcVar10;
            in_w9 = iVar6;
            if (lVar5 == 0x6df6ddc7d68c40) {
              DAT_001f82f4 = 0;
              local_110 = (char *)FUN_001cde50(0,&DAT_001f7488,local_90);
              lVar7 = -0x6e211a48bc109fd4;
              in_w9 = iVar2;
              if (local_110 != (char *)0x0) {
                lVar7 = 0x41be9e0e5eb1efe4;
              }
            }
          }
          else if (lVar5 == 0x161e1b3a107f5a8) {
            param_2 = pcVar10;
            lVar7 = 0x73e1698da6d390e9;
            if (DAT_001f8305 == '\0') {
              lVar7 = 0x5e990c37db09f86a;
            }
          }
          else {
            param_2 = pcVar10;
            in_w9 = iVar6;
            if (lVar5 == 0x208137b40ff0c41) {
              lVar7 = 0x3582441379697640;
            }
          }
          goto LAB_001a0b38;
        }
        param_2 = pcVar10;
        lVar7 = -0x37bcec43bd9d08fe;
        in_w9 = iVar6;
        if (((lVar5 == -0xb6b4c3bb4fa6b5c) ||
            (lVar7 = -0x434983ca2ec7188a, lVar5 == -0xa10d85245fd646a)) ||
           (lVar7 = lVar5, lVar5 != -0x647872952d8cf8a)) goto LAB_001a0b38;
      }
      else {
        if (0x102f8ffd02923753 < lVar5) {
          if (lVar5 < 0x129b99854ca09618) {
            param_2 = pcVar10;
            lVar7 = -0x5a5e67cbbd9137e;
            in_w9 = iVar6;
            if ((lVar5 != 0x102f8ffd02923754) && (lVar7 = lVar5, lVar5 == 0x1073084a84eac6b1)) {
              lVar7 = 0x303d266b462771e7;
            }
          }
          else {
            param_2 = pcVar10;
            lVar7 = 0x36fa2d308e82c2f8;
            in_w9 = iVar6;
            if ((lVar5 != 0x129b99854ca09618) && (lVar7 = lVar5, lVar5 == 0x135ff1730db8c077)) {
              lVar7 = -0x66cd56510b566201;
            }
          }
          goto LAB_001a0b38;
        }
        if (lVar5 < 0xf1fa5ec267545b4) {
          param_2 = pcVar10;
          lVar7 = -0x6c070e2a612990f7;
          in_w9 = iVar6;
          if ((lVar5 != 0x494913e247ec810) && (lVar7 = lVar5, lVar5 == 0x859356aa69720d1))
          goto LAB_001a25d4;
          goto LAB_001a0b38;
        }
        if (lVar5 == 0xf1fa5ec267545b4) {
          param_2 = pcVar10;
          lVar7 = -0x3cff958be57398fb;
          if (DAT_001f8305 == '\0') {
            lVar7 = -0x4f3380086e2b70c2;
          }
          goto LAB_001a0b38;
        }
        param_2 = pcVar10;
        in_w9 = iVar6;
        if (lVar5 != 0x1029ba407f8d7b2d) goto LAB_001a0b38;
      }
LAB_001a25d4:
      param_2 = (char *)(ulong)local_84;
      lVar7 = 0x3fe4345baf199427;
      in_w9 = 4;
      unaff_1000013b = 4;
      goto LAB_001a0b38;
    }
    if (lVar5 < -0x57c5a7acde5d998b) {
      if (-0x6b53575728baf5fe < lVar5) {
        if (lVar5 < -0x608b613e0d15eb95) {
          if (lVar5 == -0x6b53575728baf5fd) {
            param_2 = pcVar10;
            lVar7 = 0x208137b40ff0c41;
            if (DAT_001f8301 == '\0') {
              lVar7 = -0x3c84e412275c5f52;
            }
          }
          else {
            if (lVar5 == -0x66cd56510b566201) {
              iVar3 = FUN_001ebe70(0,1,&DAT_001f82f8);
              bVar1 = iVar3 == 0;
              lVar5 = 0x42f0c6f150e99035;
              lVar7 = 0xf1fa5ec267545b4;
              goto LAB_001a0b28;
            }
            param_2 = pcVar10;
            in_w9 = iVar6;
            if (lVar5 == -0x615cdc84d56625fc) {
              lVar7 = 0x3303345eb4f85978;
              goto LAB_001a2d80;
            }
          }
          goto LAB_001a0b38;
        }
        if (lVar5 < -0x5ab7f064f0b58e71) {
          if (lVar5 == -0x608b613e0d15eb95) {
LAB_001a292c:
            local_98 = 1;
            iStack_94 = 5;
            goto LAB_001a2940;
          }
          param_2 = pcVar10;
          in_w9 = iVar6;
          if (lVar5 == -0x5c9aeb5b95069b35) {
            lVar7 = 0x6df6ddc7d68c40;
          }
          goto LAB_001a0b38;
        }
        if (lVar5 == -0x5ab7f064f0b58e71) {
          DAT_001f7484 = DAT_001f7484 ^ 0xf1;
          DAT_001f7485 = DAT_001f7485 ^ 0xf1;
          DAT_001f8303 = '\x01';
          param_2 = pcVar10;
          lVar7 = 0x6ea6282306ea075c;
          in_w9 = iVar6;
          goto LAB_001a0b38;
        }
        param_2 = pcVar10;
        in_w9 = iVar6;
        if (lVar5 != -0x59438dc72a51bac9) goto LAB_001a0b38;
        lVar7 = 0x3359a89ff97157ac;
        goto LAB_001a2d80;
      }
      if (lVar5 < -0x725e511a790cf4ac) {
        if (lVar5 == -0x7f6b9cc817e58953) goto LAB_001a25d4;
        if (lVar5 == -0x7dc75478ad7cf9e9) {
          lVar5 = FUN_0019eb94(local_a0,local_c8,local_d8);
          lVar7 = -0x255429dbcbdc462b;
          if (lVar5 != -1) {
            lVar7 = -0x556288319bfdcffb;
          }
          local_84 = local_cc;
          param_2 = pcVar10;
          in_w9 = iVar6;
          goto LAB_001a0b38;
        }
        param_2 = pcVar10;
        in_w9 = iVar6;
        if (lVar5 != -0x7b681637aa78cddc) goto LAB_001a0b38;
        iVar3 = FUN_001ebe70(0,1,&DAT_001f82c8);
        lVar5 = 0x55488ab70f6983fa;
        lVar7 = -0x15c48858a06ca71d;
        bVar1 = iVar3 == 0;
      }
      else {
        if (lVar5 < -0x6c070e2a612990f7) {
          param_2 = pcVar10;
          lVar7 = 0x53bf3b45f912026b;
          in_w9 = iVar6;
          if ((lVar5 == -0x725e511a790cf4ac) || (lVar7 = lVar5, lVar5 != -0x6e211a48bc109fd4))
          goto LAB_001a0b38;
          goto LAB_001a25d4;
        }
        if (lVar5 != -0x6c070e2a612990f7) {
          param_2 = pcVar10;
          in_w9 = iVar6;
          if (lVar5 == -0x6bd1c6dbe046ca41) {
            lVar7 = 0x482e5862fb274eec;
          }
          goto LAB_001a0b38;
        }
        iVar3 = FUN_001ebe70(0,1,&DAT_001f82d4);
        bVar1 = iVar3 == 0;
        lVar5 = 0x494913e247ec810;
        lVar7 = -0x17b186783e63ae61;
      }
    }
    else if (lVar5 < -0x41fbd41c01740ac7) {
      if (lVar5 < -0x4f3380086e2b70c2) {
        if (lVar5 == -0x57c5a7acde5d998b) {
          fclose(local_d8);
          local_dc = local_114;
          param_2 = pcVar10;
          lVar7 = 0x4e77b14c69e4757b;
          in_w9 = iVar6;
        }
        else {
          param_2 = pcVar10;
          lVar7 = 0x36fa2d308e82c2f8;
          in_w9 = iVar6;
          if ((lVar5 != -0x556288319bfdcffb) && (lVar7 = lVar5, lVar5 == -0x542fd3a52b2562e6))
          goto LAB_001a1ccc;
        }
        goto LAB_001a0b38;
      }
      if (lVar5 < -0x4591d5331867de20) {
        if (lVar5 == -0x4f3380086e2b70c2) {
          lVar7 = 0x30873d520a61889c;
          goto LAB_001a3170;
        }
        param_2 = pcVar10;
        in_w9 = iVar6;
        if (lVar5 == -0x4c0f94e3e225570b) {
          lVar7 = -0xfd56005cdcebed6;
        }
        goto LAB_001a0b38;
      }
      if (lVar5 == -0x4591d5331867de20) {
        local_cc = 0;
        *local_a0 = 0;
        *local_c8 = 0;
        param_2 = pcVar10;
        lVar7 = -0x7dc75478ad7cf9e9;
        in_w9 = iVar6;
        goto LAB_001a0b38;
      }
      param_2 = pcVar10;
      in_w9 = iVar6;
      if (lVar5 != -0x434983ca2ec7188a) goto LAB_001a0b38;
      DAT_001f82f4 = 0;
      local_108 = (char *)FUN_001cde50(local_f0,&DAT_001f7488,local_90);
      bVar1 = local_108 == (char *)0x0;
      lVar5 = 0x4517d092a6c8637b;
      lVar7 = 0x1029ba407f8d7b2d;
    }
    else if (lVar5 < -0x3c84e412275c5f52) {
      if (-0x3f06feab6e15bed6 < lVar5) {
        param_2 = pcVar10;
        lVar7 = -0x415d5952821d8fc8;
        in_w9 = iVar6;
        if ((lVar5 != -0x3f06feab6e15bed5) && (lVar7 = lVar5, lVar5 == -0x3cff958be57398fb)) {
          lVar7 = 0x30873d520a61889c;
        }
        goto LAB_001a0b38;
      }
      param_2 = pcVar10;
      lVar7 = 0x53bf3b45f912026b;
      in_w9 = iVar6;
      if ((lVar5 == -0x41fbd41c01740ac7) || (lVar7 = lVar5, lVar5 != -0x415d5952821d8fc8))
      goto LAB_001a0b38;
      iVar3 = FUN_001ebe70(0,1,&DAT_001f82f4);
      bVar1 = iVar3 == 0;
      lVar5 = -0x3f06feab6e15bed5;
      lVar7 = -0x2bf7c1f74e42bb60;
    }
    else {
      if (lVar5 < -0x37d03aa9c8b304fc) {
        if (lVar5 == -0x3c84e412275c5f52) {
          DAT_001f7468 = DAT_001f7468 ^ 0xc3;
          DAT_001f746a = DAT_001f746a ^ 0xc3;
          DAT_001f746b = DAT_001f746b ^ 0xc3;
          DAT_001f7469 = DAT_001f7469 ^ 0xc3;
          DAT_001f7460 = DAT_001f7460 ^ 0xc3c3c3c3c3c3c3c3;
          DAT_001f8301 = '\x01';
          param_2 = pcVar10;
          lVar7 = 0x3582441379697640;
          in_w9 = iVar6;
        }
        else {
          param_2 = pcVar10;
          in_w9 = iVar6;
          if (lVar5 == -0x3a9a787bdaa35b1e) goto LAB_001a1f9c;
        }
        goto LAB_001a0b38;
      }
      if (lVar5 != -0x37d03aa9c8b304fc) {
        param_2 = pcVar10;
        in_w9 = iVar6;
        if (lVar5 == -0x37bcec43bd9d08fe) {
          iVar3 = FUN_001ebe70(0,1,&DAT_001f82d4);
          bVar1 = iVar3 == 0;
          lVar5 = -0xb6b4c3bb4fa6b5c;
          lVar7 = 0x61af358a616341e0;
          goto LAB_001a0b28;
        }
        goto LAB_001a0b38;
      }
      iVar3 = FUN_001ebe70(0,1,&DAT_001f82f0);
      bVar1 = iVar3 == 0;
      lVar5 = -0x1c57606b44c18182;
      lVar7 = 0x37405310caf8563f;
    }
  }
  else if (lVar5 < 0x4d702a7aef09f0b4) {
    if (lVar5 < 0x3582441379697640) {
      if (lVar5 < 0x299108bddc6a14bb) {
        if (lVar5 < 0x2585bc4e4d7c8853) {
          param_2 = pcVar10;
          lVar7 = -0x6c070e2a612990f7;
          in_w9 = iVar6;
          if (((lVar5 != 0x1666a35a3e139985) &&
              (lVar7 = 0x57f8c36627f7246e, lVar5 != 0x1c201a6f44d38273)) &&
             (lVar7 = lVar5, lVar5 == 0x22bae9789d72b4f3)) {
LAB_001a1ccc:
            param_2 = pcVar10;
            lVar7 = 0x7c778a2912169367;
            in_w9 = iVar6;
          }
          goto LAB_001a0b38;
        }
        if (lVar5 < 0x25e60e8a57340c35) {
          if (lVar5 == 0x2585bc4e4d7c8853) {
            _DAT_001f7450 = _DAT_001f7450 ^ 0xc5c5c5c5c5c5c5c5;
            uRam00000000001f7458 = uRam00000000001f7458 ^ 0xc5c5c5c5c5c5c5c5;
            DAT_001f8300 = '\x01';
            param_2 = pcVar10;
            lVar7 = -0xfd56005cdcebed6;
            in_w9 = iVar6;
          }
          else {
            param_2 = pcVar10;
            in_w9 = iVar6;
            if (lVar5 == 0x25c1d80b3c53cec7) {
              lVar7 = 0x3303345eb4f85978;
            }
          }
          goto LAB_001a0b38;
        }
        param_2 = pcVar10;
        lVar7 = 0x57f8c36627f7246e;
        in_w9 = iVar6;
        if ((lVar5 == 0x25e60e8a57340c35) || (lVar7 = lVar5, lVar5 != 0x297717612b720ee8))
        goto LAB_001a0b38;
        lVar7 = 0x45f288ff0a7ea1de;
LAB_001a2d80:
        DAT_001f7481 = DAT_001f7481 ^ 0xca;
        DAT_001f7480 = DAT_001f7480 ^ 0xca;
        DAT_001f82fc = '\x01';
        param_2 = pcVar10;
        in_w9 = iVar6;
        goto LAB_001a0b38;
      }
      if (lVar5 < 0x30873d520a61889c) {
        if (lVar5 == 0x299108bddc6a14bb) {
          param_2 = pcVar10;
          lVar7 = -0x4c0f94e3e225570b;
          if (DAT_001f8300 == '\0') {
            lVar7 = 0x2585bc4e4d7c8853;
          }
        }
        else if (lVar5 == 0x2e7820ff94f2299e) {
          local_dc = 0;
          *local_128 = 8;
          param_2 = pcVar10;
          lVar7 = 0x4e77b14c69e4757b;
          in_w9 = iVar6;
        }
        else {
          param_2 = pcVar10;
          in_w9 = iVar6;
          if (lVar5 == 0x303d266b462771e7) {
            DAT_001f82ec = 0;
            lVar7 = FUN_001d17ac(local_b0,local_c0,&DAT_001f7470,0xe);
            iStack_94 = 5;
            if (lVar7 == 0) {
              iStack_94 = 0;
            }
            local_98 = lVar7 != 0 | local_84;
LAB_001a2940:
            param_2 = pcVar10;
            lVar7 = -0x2c4303065cb3eee6;
            in_w9 = iVar6;
          }
        }
        goto LAB_001a0b38;
      }
      if (lVar5 < 0x3359a89ff97157ac) {
        if (lVar5 == 0x30873d520a61889c) {
          DAT_001f82f8 = 0;
          local_b0 = *local_b8;
          iVar2 = sscanf(local_110,(char *)&DAT_001f748c);
          param_2 = pcVar10;
          lVar7 = -0x41fbd41c01740ac7;
          if (iVar2 != 1) {
            lVar7 = -0x1a2c17747d4c9d16;
          }
        }
        else {
          param_2 = pcVar10;
          in_w9 = iVar6;
          if (lVar5 == 0x3303345eb4f85978) {
            DAT_001f82d4 = 0;
            local_f0 = FUN_001cde50(*local_a0,&DAT_001f7480,local_90);
            lVar7 = -0x647872952d8cf8a;
            in_w9 = iVar2;
            if (local_f0 != 0) {
              lVar7 = 0x102f8ffd02923754;
            }
          }
        }
        goto LAB_001a0b38;
      }
      if (lVar5 != 0x3359a89ff97157ac) {
        param_2 = pcVar10;
        in_w9 = iVar6;
        if (lVar5 == 0x340d68985851f29b) {
          lVar7 = 0x1073084a84eac6b1;
          in_w9 = iVar2;
          if (DAT_001f8302 == '\0') {
            lVar7 = 0x5aee9e3b6c141ab1;
          }
        }
        goto LAB_001a0b38;
      }
      DAT_001f82d4 = 0;
      local_100 = FUN_001cde50(0,&DAT_001f7480,local_90);
      bVar1 = local_100 == 0;
      lVar5 = -0x3a9a787bdaa35b1e;
      lVar7 = 0x859356aa69720d1;
    }
    else {
      uVar9 = (uint)param_2;
      if (lVar5 < 0x4119c2fb696ac2cc) {
        if (0x38b550c75dcbd860 < lVar5) {
          if (lVar5 < 0x3dd1541672e77739) {
            if (lVar5 == 0x38b550c75dcbd861) {
              lVar7 = 0x482e5862fb274eec;
              goto LAB_001a2d80;
            }
            param_2 = pcVar10;
            in_w9 = iVar6;
            if (lVar5 == 0x3cf1d9509481ae04) {
              lVar7 = 0x4119c2fb696ac2cc;
            }
          }
          else if (lVar5 == 0x3dd1541672e77739) {
            param_2 = pcVar10;
            lVar7 = 0x25c1d80b3c53cec7;
            if (DAT_001f82fc == '\0') {
              lVar7 = -0x615cdc84d56625fc;
            }
          }
          else {
            param_2 = pcVar10;
            in_w9 = iVar6;
            if (lVar5 == 0x3fe4345baf199427) {
              lVar7 = 0x55a53f7fea287ef8;
              local_a4 = uVar9;
              if (iVar2 != 5) {
                lVar7 = -0x15a21fd5d20b04b8;
              }
            }
          }
          goto LAB_001a0b38;
        }
        if (lVar5 == 0x3582441379697640) {
          DAT_001f82e8 = 0;
          lVar7 = FUN_001d17ac(local_b0,local_c0,&DAT_001f7460,0xb);
          bVar1 = lVar7 == 0;
          lVar5 = -0x203d639f93f665df;
          lVar7 = 0x22bae9789d72b4f3;
        }
        else {
          if (lVar5 != 0x36fa2d308e82c2f8) {
            param_2 = pcVar10;
            in_w9 = iVar6;
            if (lVar5 == 0x37405310caf8563f) {
              lVar7 = 0x6c05af2b61ea5a32;
              in_w9 = iVar2;
              if (DAT_001f8303 == '\0') {
                lVar7 = -0x5ab7f064f0b58e71;
              }
            }
            goto LAB_001a0b38;
          }
          iVar3 = FUN_001ebe70(0,1,&DAT_001f82d4);
          bVar1 = iVar3 == 0;
          lVar5 = 0x129b99854ca09618;
          lVar7 = 0x3dd1541672e77739;
        }
      }
      else {
        if (lVar5 < 0x4517d092a6c8637b) {
          if (lVar5 < 0x42f0c6f150e99035) {
            if (lVar5 == 0x4119c2fb696ac2cc) {
              iVar2 = FUN_001ebe70(0,1,&DAT_001f82e8);
              param_2 = pcVar10;
              lVar7 = -0x6b53575728baf5fd;
              if (iVar2 != 0) {
                lVar7 = 0x3cf1d9509481ae04;
              }
              goto LAB_001a0b38;
            }
            param_2 = pcVar10;
            in_w9 = iVar6;
            if (lVar5 != 0x41be9e0e5eb1efe4) goto LAB_001a0b38;
          }
          else {
            param_2 = pcVar10;
            lVar7 = -0x66cd56510b566201;
            in_w9 = iVar6;
            if ((lVar5 == 0x42f0c6f150e99035) || (lVar7 = lVar5, lVar5 != 0x43f7eb53c5724ce0))
            goto LAB_001a0b38;
          }
          param_2 = pcVar10;
          lVar7 = 0x6853f5fa40398e94;
          in_w9 = iVar6;
          goto LAB_001a0b38;
        }
        if (lVar5 < 0x469bef0d6588cd58) {
          param_2 = pcVar10;
          lVar7 = -0x415d5952821d8fc8;
          in_w9 = iVar6;
          if ((lVar5 != 0x4517d092a6c8637b) && (lVar7 = lVar5, lVar5 == 0x45f288ff0a7ea1de)) {
            DAT_001f82d4 = 0;
            lVar7 = FUN_001cde50(0,&DAT_001f7480,local_90);
            bVar1 = lVar7 == 0;
            lVar5 = 0x1666a35a3e139985;
            lVar7 = 0x7c9736501c5f4f0a;
            goto LAB_001a0b28;
          }
          goto LAB_001a0b38;
        }
        if (lVar5 != 0x469bef0d6588cd58) {
          param_2 = pcVar10;
          in_w9 = iVar6;
          if (lVar5 == 0x482e5862fb274eec) {
            DAT_001f82d4 = 0;
            lVar5 = FUN_001cde50(0,&DAT_001f7480,local_90);
            lVar7 = -0x7f6b9cc817e58953;
            in_w9 = iVar2;
            if (lVar5 != 0) {
              lVar7 = -0x252a03a8d9aa82d5;
            }
          }
          goto LAB_001a0b38;
        }
        DAT_001f82f8 = 0;
        *local_b8 = -1;
        iVar3 = sscanf(__s,(char *)&DAT_001f748c);
        bVar1 = iVar3 == 1;
        lVar5 = -0x2e2c7788f6896294;
        lVar7 = 0x135ff1730db8c077;
      }
    }
  }
  else {
    unaff_1000013b = iVar2;
    if (lVar5 < 0x5e990c37db09f86a) {
      if (lVar5 < 0x55a53f7fea287ef8) {
        if (lVar5 < 0x53bf3b45f912026b) {
          if (lVar5 < 0x504fc213a833ef4e) {
            if (lVar5 == 0x4d702a7aef09f0b4) {
              lVar7 = strtol(local_f8,(char **)0x0,0x10);
              bVar1 = (int)lVar7 == 0;
              lVar5 = 0x1c201a6f44d38273;
              lVar7 = 0x5375277af4011243;
              goto LAB_001a0b28;
            }
            param_2 = pcVar10;
            in_w9 = iVar6;
            unaff_1000013b = iVar6;
            if (lVar5 == 0x4e77b14c69e4757b) {
              if (*(long *)(local_130 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
                __stack_chk_fail();
              }
              return local_dc & 1;
            }
          }
          else {
            param_2 = pcVar10;
            lVar7 = -0x57c5a7acde5d998b;
            in_w9 = iVar6;
            unaff_1000013b = iVar6;
            if ((lVar5 != 0x504fc213a833ef4e) && (lVar7 = lVar5, lVar5 == 0x5375277af4011243))
            goto LAB_001a25d4;
          }
          goto LAB_001a0b38;
        }
        if (lVar5 < 0x548f69369cb47b0a) {
          if (lVar5 == 0x53bf3b45f912026b) {
            iVar3 = FUN_001ebe70(0,1,&DAT_001f82e4);
            bVar1 = iVar3 == 0;
            lVar5 = -0x725e511a790cf4ac;
            lVar7 = 0x299108bddc6a14bb;
            goto LAB_001a0b28;
          }
          param_2 = pcVar10;
          in_w9 = iVar6;
          unaff_1000013b = iVar6;
          if (lVar5 != 0x5427e3fe8053026a) goto LAB_001a0b38;
        }
        else {
          param_2 = pcVar10;
          lVar7 = 0x7e7f415062326f70;
          in_w9 = iVar6;
          unaff_1000013b = iVar6;
          if ((lVar5 == 0x548f69369cb47b0a) || (lVar7 = lVar5, lVar5 != 0x55488ab70f6983fa))
          goto LAB_001a0b38;
        }
        param_2 = pcVar10;
        lVar7 = -0x7b681637aa78cddc;
        in_w9 = iVar6;
        unaff_1000013b = iVar6;
        goto LAB_001a0b38;
      }
      if (lVar5 < 0x57f8c36627f7246e) {
        param_1 = (undefined4 *)(ulong)local_a4;
        param_2 = pcVar10;
        lVar7 = 0x7e480ccd9447af9d;
        in_w9 = iVar6;
        unaff_1000013b = iVar6;
        if (((lVar5 != 0x55a53f7fea287ef8) &&
            (param_1 = puVar8, lVar7 = 0x4119c2fb696ac2cc, lVar5 != 0x56c7de269b39cb28)) &&
           (lVar7 = lVar5, lVar5 == 0x5701972a5c88a65c)) {
          DAT_001f7410 = DAT_001f7410 ^ 0x7b;
          DAT_001f7411 = DAT_001f7411 ^ 0x7b;
          DAT_001f82f8._0_2_ = CONCAT11(1,(undefined1)DAT_001f82f8);
          lVar7 = 0x7e7f415062326f70;
        }
      }
      else if (lVar5 < 0x5a82b43288d2c981) {
        if (lVar5 == 0x57f8c36627f7246e) {
          iVar3 = FUN_001ebe70(0,1,&DAT_001f82f4);
          bVar1 = iVar3 == 0;
          lVar5 = 0x25e60e8a57340c35;
          lVar7 = 0x78cedefaf48b4478;
          goto LAB_001a0b28;
        }
        param_2 = pcVar10;
        in_w9 = iVar6;
        unaff_1000013b = iVar6;
        if (lVar5 == 0x59ea2ac634eec38c) {
          free(local_e8);
          *local_a0 = 0;
          lVar7 = -0x57c5a7acde5d998b;
        }
      }
      else {
        if (lVar5 == 0x5a82b43288d2c981) {
          lVar7 = -0x434983ca2ec7188a;
          goto LAB_001a2d30;
        }
        param_2 = pcVar10;
        in_w9 = iVar6;
        unaff_1000013b = iVar6;
        if (lVar5 == 0x5aee9e3b6c141ab1) {
          DAT_001f7478 = DAT_001f7478 ^ 0x1f;
          DAT_001f7479 = DAT_001f7479 ^ 0x1f;
          DAT_001f747a = DAT_001f747a ^ 0x1f;
          DAT_001f747b = DAT_001f747b ^ 0x1f;
          DAT_001f747c = DAT_001f747c ^ 0x1f;
          DAT_001f747d = DAT_001f747d ^ 0x1f;
          DAT_001f747e = DAT_001f747e ^ 0x1f;
          DAT_001f7470 = DAT_001f7470 ^ 0x1f1f1f1f1f1f1f1f;
          DAT_001f8302 = '\x01';
          lVar7 = 0x303d266b462771e7;
        }
      }
      goto LAB_001a0b38;
    }
    if (lVar5 < 0x73e1698da6d390e9) {
      if (lVar5 < 0x6853f5fa40398e94) {
        if (lVar5 == 0x5e990c37db09f86a) {
          lVar7 = 0x469bef0d6588cd58;
LAB_001a3170:
          DAT_001f748e = DAT_001f748e ^ 0xfe;
          DAT_001f748d = DAT_001f748d ^ 0xfe;
          DAT_001f748c = DAT_001f748c ^ 0xfe;
          DAT_001f748f = DAT_001f748f ^ 0xfe;
          DAT_001f8305 = '\x01';
          param_2 = pcVar10;
          in_w9 = iVar6;
          unaff_1000013b = iVar6;
        }
        else if (lVar5 == 0x61af358a616341e0) {
          param_2 = pcVar10;
          lVar7 = 0x76a7314c63096d5f;
          unaff_1000013b = iVar6;
          if (DAT_001f82fc == '\0') {
            lVar7 = -0x59438dc72a51bac9;
          }
        }
        else {
          param_2 = pcVar10;
          in_w9 = iVar6;
          unaff_1000013b = iVar6;
          if (lVar5 == 0x65f514c9e7f64775) {
            lVar7 = -0x5a5e67cbbd9137e;
          }
        }
      }
      else if (lVar5 < 0x6ea6282306ea075c) {
        if (lVar5 == 0x6853f5fa40398e94) {
          iVar2 = FUN_001ebe70(0,1,&DAT_001f82f8);
          param_2 = pcVar10;
          lVar7 = 0x161e1b3a107f5a8;
          unaff_1000013b = iVar6;
          if (iVar2 != 0) {
            lVar7 = 0x43f7eb53c5724ce0;
          }
        }
        else {
          param_2 = pcVar10;
          in_w9 = iVar6;
          unaff_1000013b = iVar6;
          if (lVar5 == 0x6c05af2b61ea5a32) {
            lVar7 = 0x6ea6282306ea075c;
          }
        }
      }
      else if (lVar5 == 0x6ea6282306ea075c) {
        DAT_001f82f0 = 0;
        local_f8 = (char *)FUN_001cde50(local_100,&DAT_001f7484,local_90);
        param_2 = pcVar10;
        lVar7 = -0x1736fceebecd72f8;
        unaff_1000013b = iVar6;
        if (local_f8 != (char *)0x0) {
          lVar7 = 0x4d702a7aef09f0b4;
        }
      }
      else {
        param_2 = pcVar10;
        in_w9 = iVar6;
        unaff_1000013b = iVar6;
        if (lVar5 == 0x7096451cc89b6285) {
          lVar7 = -0x12c3a303aebdf85b;
          in_w9 = iVar2;
          if (DAT_001f82fc == '\0') {
            lVar7 = 0x297717612b720ee8;
          }
        }
      }
      goto LAB_001a0b38;
    }
    if (lVar5 < 0x7c778a2912169367) {
      if (lVar5 < 0x76a7314c63096d5f) {
        param_2 = pcVar10;
        lVar7 = 0x469bef0d6588cd58;
        if ((lVar5 != 0x73e1698da6d390e9) && (lVar7 = lVar5, lVar5 == 0x754d2b88abe28d02)) {
          lVar7 = 0x6df6ddc7d68c40;
LAB_001a2d30:
          DAT_001f7489 = DAT_001f7489 ^ 0x4b;
          DAT_001f7488 = DAT_001f7488 ^ 0x4b;
          DAT_001f8304 = '\x01';
          param_2 = pcVar10;
        }
      }
      else {
        param_2 = pcVar10;
        lVar7 = 0x3359a89ff97157ac;
        if ((lVar5 != 0x76a7314c63096d5f) && (lVar7 = lVar5, lVar5 == 0x78cedefaf48b4478)) {
          lVar7 = -0xa10d85245fd646a;
          unaff_1000013b = iVar6;
          if (DAT_001f8304 == '\0') {
            lVar7 = 0x5a82b43288d2c981;
          }
        }
      }
      goto LAB_001a0b38;
    }
    if (0x7e480ccd9447af9c < lVar5) {
      if (lVar5 == 0x7e480ccd9447af9d) {
        local_e8 = (void *)*local_a0;
        param_2 = pcVar10;
        lVar7 = 0x504fc213a833ef4e;
        in_w9 = iVar6;
        local_114 = uVar9;
        unaff_1000013b = iVar6;
        if (local_e8 != (void *)0x0) {
          lVar7 = 0x59ea2ac634eec38c;
        }
      }
      else {
        param_2 = pcVar10;
        in_w9 = iVar6;
        unaff_1000013b = iVar6;
        if (lVar5 == 0x7e7f415062326f70) {
          DAT_001f82c8 = 0;
          local_a0 = (long *)((long)plVar4 + -0x10);
          local_c8 = (undefined8 *)((long)plVar4 + -0x20);
          local_90 = (undefined1 *)((long)plVar4 + -0x30);
          plVar4 = (long *)((long)plVar4 + -0x40);
          local_b8 = plVar4;
          local_d8 = fopen(local_120,(char *)&DAT_001f7410);
          bVar1 = local_d8 == (FILE *)0x0;
          lVar5 = -0x4591d5331867de20;
          lVar7 = 0x2e7820ff94f2299e;
          goto LAB_001a0b28;
        }
      }
      goto LAB_001a0b38;
    }
    if (lVar5 != 0x7c778a2912169367) {
      param_2 = pcVar10;
      in_w9 = iVar6;
      unaff_1000013b = iVar6;
      if (lVar5 == 0x7c9736501c5f4f0a) goto LAB_001a25d4;
      goto LAB_001a0b38;
    }
    iVar3 = FUN_001ebe70(0,1,&DAT_001f82ec);
    bVar1 = iVar3 == 0;
    lVar5 = -0x542fd3a52b2562e6;
    lVar7 = 0x340d68985851f29b;
  }
LAB_001a0b28:
  param_2 = pcVar10;
  in_w9 = iVar2;
  unaff_1000013b = iVar6;
  if (!bVar1) {
    lVar7 = lVar5;
  }
  goto LAB_001a0b38;
}


