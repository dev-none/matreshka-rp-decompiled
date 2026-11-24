// Function: FUN_0019b060
// Entry: 0019b060

uint FUN_0019b060(undefined4 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  void *__ptr;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long unaff_x19;
  long unaff_x21;
  ulong unaff_x22;
  long unaff_x26;
  ulong unaff_x27;
  ulong unaff_x28;
  long local_120;
  long local_118;
  long local_110;
  ulong local_108;
  ulong local_100;
  undefined4 local_f4;
  char *local_f0;
  char *local_e8;
  char *local_e0;
  undefined2 *local_d8;
  char *local_d0;
  char *local_c8;
  char *local_c0;
  long local_b0;
  uint local_a4;
  ulong local_a0;
  long local_98;
  ulong local_90;
  undefined1 *local_88;
  long local_80;
  void *local_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  __ptr = (void *)FUN_001cda84(param_2);
  puVar1 = (undefined1 *)0x3a4ee4b4cd18045;
  if (__ptr != (void *)0x0) {
    puVar1 = (undefined1 *)0xae2d64bf93f1b31a;
  }
  puVar6 = (undefined1 *)0x21d53de2b345f472;
  local_88 = puVar1;
  local_78 = __ptr;
LAB_0019b158:
  puVar5 = puVar6;
  puVar6 = puVar5;
  if (-0x11cdc96087771422 < (long)puVar5) {
    if (0x2ac799c399899ac2 < (long)puVar5) {
      if ((long)puVar5 < 0x57dab7dd661b1869) {
        if ((long)puVar5 < 0x4bfd6150022cba99) {
          if ((long)puVar5 < 0x3f365012db6b56c1) {
            puVar6 = (undefined1 *)0x9173a1fc59339595;
            if ((puVar5 != (undefined1 *)0x2ac799c399899ac3) &&
               (puVar6 = puVar5, puVar5 == (undefined1 *)0x33970f856d03deee)) {
              puVar6 = &DAT_965cf93a9dddb88a;
              if (DAT_001f82a4._2_1_ == '\0') {
                puVar6 = (undefined1 *)0x4c1b9edb721e7222;
              }
            }
          }
          else {
            if (puVar5 == (undefined1 *)0x3f365012db6b56c1) {
              puVar6 = &DAT_6b9fb694821e6034;
              goto LAB_0019c64c;
            }
            if (puVar5 == (undefined1 *)0x43d4efcefc88fa10) {
              puVar6 = (undefined1 *)0x9173a1fc59339595;
            }
          }
        }
        else if ((long)puVar5 < 0x52d98d60f83cf13e) {
          if (puVar5 == (undefined1 *)0x4bfd6150022cba99) {
            DAT_001f8294 = 0;
            local_98 = strtol(local_d0,(char **)0x0,0x10);
            local_f0 = (char *)FUN_001cce14(&local_80,&DAT_001f73d0);
            puVar6 = (undefined1 *)0xba43a2b0d5cab0ba;
            if (local_f0 != (char *)0x0) {
              puVar6 = (undefined1 *)0x52d98d60f83cf13e;
            }
          }
          else if (puVar5 == (undefined1 *)0x4c1b9edb721e7222) {
            puVar6 = &DAT_2b590051c346d3e;
            goto LAB_0019b144;
          }
        }
        else {
          puVar6 = (undefined1 *)0xa7a7e13df6ca7b84;
          if (((puVar5 != (undefined1 *)0x52d98d60f83cf13e) &&
              (puVar6 = (undefined1 *)0x4bfd6150022cba99, puVar5 != (undefined1 *)0x5427e3fe8053026a
              )) && (puVar6 = puVar5, puVar5 == (undefined1 *)0x55d58c2b8d472655)) {
            DAT_001f8290 = 0;
            local_90 = strtol(local_e8,(char **)0x0,0x10);
            local_80 = FUN_001cce14(&local_78,&DAT_001f73cc);
            puVar5 = (undefined1 *)0x2ac799c399899ac3;
            puVar6 = (undefined1 *)0x57dab7dd661b1869;
LAB_0019b7b4:
            if (local_80 != 0) {
              puVar6 = puVar5;
            }
          }
        }
      }
      else if ((long)puVar5 < 0x6de583d82abca3c2) {
        if ((long)puVar5 < 0x5e9249b5376f08fa) {
          if (puVar5 == (undefined1 *)0x57dab7dd661b1869) {
LAB_0019c1a8:
            unaff_x27 = 0;
            unaff_x21 = 0;
            unaff_x26 = 0;
            unaff_x19 = 0;
            unaff_x28 = local_90;
            goto LAB_0019c3fc;
          }
          if (puVar5 == (undefined1 *)0x5e1b922e6e5165fd) {
            iVar4 = FUN_001ebe70(0,1,&DAT_001f8294);
            puVar6 = (undefined1 *)0xf63c965f6afee456;
            if (iVar4 != 0) {
              puVar6 = (undefined1 *)0xde0600f0ca761eb9;
            }
          }
        }
        else if (puVar5 == (undefined1 *)0x5e9249b5376f08fa) {
          iVar4 = FUN_001ebe70(0,1,&DAT_001f8290);
          puVar6 = (undefined1 *)0xe08d3eae8db4f8d9;
          if (iVar4 != 0) {
            puVar6 = (undefined1 *)0xe86a3cb2672328c3;
          }
        }
        else if (puVar5 == &DAT_6b9fb694821e6034) {
          DAT_001f8290 = 0;
          local_c0 = (char *)FUN_001cce14(&local_78,&DAT_001f73cc);
          puVar6 = (undefined1 *)0x12b21488b9618371;
          if (local_c0 != (char *)0x0) {
            puVar6 = (undefined1 *)0xdbbbecaa54122c5b;
          }
        }
        else if (puVar5 == (undefined1 *)0x6dbb77d6245fbf6c) {
          if (*(long *)(lVar2 + 0x28) == local_70) {
            return local_a4 & 1;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
      }
      else if ((long)puVar5 < 0x76eec756bc9b1bd1) {
        if (puVar5 == (undefined1 *)0x6de583d82abca3c2) {
          iVar4 = FUN_001ebe70(0,1,&DAT_001f8294);
          puVar6 = (undefined1 *)0xd7a28745f3a8fb05;
          if (iVar4 != 0) {
            puVar6 = (undefined1 *)0x76eec756bc9b1bd1;
          }
        }
        else if (puVar5 == (undefined1 *)0x75ce15e08caa4c6a) {
          puVar6 = (undefined1 *)0xd57ac0afa91feda2;
        }
      }
      else {
        puVar6 = (undefined1 *)0x6de583d82abca3c2;
        if (puVar5 != (undefined1 *)0x76eec756bc9b1bd1) {
          if (puVar5 == (undefined1 *)0x7772f905052e4c0f) {
            iVar4 = FUN_001ebe70(0,1,&DAT_001f8290);
            puVar6 = (undefined1 *)0x4357c11efd169a0;
            if (iVar4 != 0) {
              puVar6 = (undefined1 *)0xdc6dd27061ebaf34;
            }
          }
          else {
            puVar6 = puVar5;
            if (puVar5 == (undefined1 *)0x7f24efb1c885eb9b) {
              puVar6 = (undefined1 *)0xa0d7c67c60e7a82e;
            }
          }
        }
      }
      goto LAB_0019b158;
    }
    if ((long)puVar5 < 0x4a5cd72dc1a18f6) {
      if ((long)puVar5 < -0x4c59a4c035b3e8e) {
        if ((long)puVar5 < -0x9c369a095011baa) {
          if (puVar5 == (undefined1 *)0xee32369f7888ebdf) goto LAB_0019c1a8;
          if (puVar5 == (undefined1 *)0xf54be9e395389537) {
            puVar6 = (undefined1 *)0x6de583d82abca3c2;
          }
        }
        else if (puVar5 == (undefined1 *)0xf63c965f6afee456) {
          puVar6 = (undefined1 *)0x7f24efb1c885eb9b;
          if (DAT_001f82a4._2_1_ == '\0') {
            puVar6 = (undefined1 *)0xe156d0b4a667ab8e;
          }
        }
        else if (puVar5 == (undefined1 *)0xf8b8c954db367ca1) {
          iVar4 = FUN_001ebe70(0,1,&DAT_001f8294);
          puVar6 = (undefined1 *)0x33970f856d03deee;
          if (iVar4 != 0) {
            puVar6 = (undefined1 *)0xd937f9741a083d9f;
          }
        }
        goto LAB_0019b158;
      }
      if (0x3a4ee4b4cd18044 < (long)puVar5) {
        if ((puVar5 == (undefined1 *)0x3a4ee4b4cd18045) ||
           (puVar5 == (undefined1 *)0x408409b1e5ac055)) {
          local_a4 = 0;
          *param_1 = 2;
          puVar6 = (undefined1 *)0x6dbb77d6245fbf6c;
        }
        else if (puVar5 == (undefined1 *)0x4357c11efd169a0) {
          puVar6 = (undefined1 *)0x9ea8bf2b74e4b439;
          if (DAT_001f82a4._1_1_ == '\0') {
            puVar6 = (undefined1 *)0x3f365012db6b56c1;
          }
        }
        goto LAB_0019b158;
      }
      uVar3 = local_a0;
      if (puVar5 != (undefined1 *)0xfb3a65b3fca4c172) {
        if (puVar5 == &DAT_2b590051c346d3e) {
          DAT_001f8294 = 0;
          local_b0 = strtol(local_c8,(char **)0x0,0x10);
          local_e0 = (char *)FUN_001cce14(&local_80,&DAT_001f73d0);
          puVar6 = (undefined1 *)0xc0eb019135e10a40;
          if (local_e0 != (char *)0x0) {
            puVar6 = (undefined1 *)0x8b1dacf6763fda11;
          }
        }
        goto LAB_0019b158;
      }
    }
    else {
      if ((long)puVar5 < 0x1db1d1f44155ec69) {
        if ((long)puVar5 < 0x12b21488b9618371) {
          if (puVar5 == (undefined1 *)0x4a5cd72dc1a18f6) {
            local_d8 = calloc(1,0x30);
            puVar6 = (undefined1 *)0x408409b1e5ac055;
            if (local_d8 != (undefined2 *)0x0) {
              puVar6 = (undefined1 *)0x26c60fa523ddda4b;
            }
          }
          else if (puVar5 == (undefined1 *)0x862419eaecdf1a5) {
            local_a4 = 1;
            puVar6 = (undefined1 *)0x6dbb77d6245fbf6c;
          }
        }
        else if (puVar5 == (undefined1 *)0x12b21488b9618371) {
          unaff_x27 = 0;
          unaff_x21 = 0;
          unaff_x26 = 0;
          unaff_x19 = 0;
          unaff_x28 = 0;
          unaff_x22 = 0;
          puVar6 = (undefined1 *)0x9141e7ccec342354;
        }
        else if (puVar5 == &DAT_1b767e91f4196530) {
          puVar6 = (undefined1 *)0x932656effdaaeaa5;
        }
        goto LAB_0019b158;
      }
      if ((long)puVar5 < 0x2467c250713f82d4) {
        if (puVar5 == (undefined1 *)0x1db1d1f44155ec69) {
          unaff_x27 = 0;
          unaff_x21 = 0;
          unaff_x26 = 0;
          unaff_x19 = 0;
          unaff_x28 = 0;
          goto LAB_0019c3fc;
        }
        if (puVar5 == (undefined1 *)0x21d53de2b345f472) {
          puVar6 = puVar1;
        }
        goto LAB_0019b158;
      }
      uVar3 = local_a0;
      if (puVar5 != (undefined1 *)0x2467c250713f82d4) {
        if (puVar5 == (undefined1 *)0x26c60fa523ddda4b) {
          *local_d8 = (short)local_f4;
          *(ulong *)(local_d8 + 4) = local_100;
          *(long *)(local_d8 + 8) = local_110;
          *(ulong *)(local_d8 + 0xc) = local_108;
          *(long *)(local_d8 + 0x10) = local_118;
          local_a4 = 1;
          *(long *)(local_d8 + 0x14) = local_120;
          *param_3 = local_d8;
          puVar6 = (undefined1 *)0x6dbb77d6245fbf6c;
        }
        else if (puVar5 == (undefined1 *)0x28a29c505fd0878c) {
          puVar6 = (undefined1 *)0xbac85a422f6dcf28;
          if (DAT_001f82a4._2_1_ == '\0') {
            puVar6 = (undefined1 *)0xcc4911e8d0a08389;
          }
        }
        goto LAB_0019b158;
      }
    }
LAB_0019c2b0:
    unaff_x27 = uVar3;
    unaff_x26 = 0;
    unaff_x19 = 0;
    unaff_x21 = local_98;
    unaff_x28 = local_90;
LAB_0019c3fc:
    unaff_x22 = (ulong)local_88 & 0xffffffff;
    puVar6 = (undefined1 *)0x9141e7ccec342354;
    goto LAB_0019b158;
  }
  if (-0x435e690cfbf5da13 < (long)puVar5) {
    if ((long)puVar5 < -0x285d78ba0c5704fb) {
      if ((long)puVar5 < -0x33b6ee172f5f7c77) {
        if ((long)puVar5 < -0x3ed04c030289d596) {
          puVar6 = (undefined1 *)0xd136b47bc732bd2b;
          if ((puVar5 != (undefined1 *)0xbca196f3040a25ee) &&
             (puVar6 = puVar5, puVar5 == (undefined1 *)0xc0eb019135e10a40)) {
            unaff_x19 = 0;
            unaff_x21 = local_98;
            unaff_x26 = local_b0;
            unaff_x27 = local_a0;
            unaff_x28 = local_90;
            goto LAB_0019c3fc;
          }
        }
        else if (puVar5 == (undefined1 *)0xc12fb3fcfd762a6a) {
          DAT_001f8294 = 0;
          local_d0 = (char *)FUN_001cce14(&local_80,&DAT_001f73d0);
          puVar6 = (undefined1 *)0xee32369f7888ebdf;
          if (local_d0 != (char *)0x0) {
            puVar6 = (undefined1 *)0xf54be9e395389537;
          }
        }
        else if (puVar5 == (undefined1 *)0xcb528befcd0fb52f) {
          puVar6 = (undefined1 *)0x5e1b922e6e5165fd;
        }
        goto LAB_0019b158;
      }
      if (-0x2ec94b8438cd42d6 < (long)puVar5) {
        if (puVar5 == (undefined1 *)0xd136b47bc732bd2b) {
          DAT_001f8290 = 0;
          local_88 = (undefined1 *)strtol(local_c0,(char **)0x0,10);
          local_e8 = (char *)FUN_001cce14(&local_78,&DAT_001f73cc);
          puVar6 = (undefined1 *)0x1db1d1f44155ec69;
          if (local_e8 != (char *)0x0) {
            puVar6 = (undefined1 *)0x87fde1166a77f06e;
          }
        }
        else {
          puVar6 = (undefined1 *)0xa7a7e13df6ca7b84;
          if ((puVar5 != (undefined1 *)0xd4590ec1e57e5179) &&
             (puVar6 = puVar5, puVar5 == (undefined1 *)0xd57ac0afa91feda2)) {
            DAT_001f8290 = 0;
            local_a0 = strtol(local_f0,(char **)0x0,0x10);
            local_80 = FUN_001cce14(&local_78,&DAT_001f73cc);
            puVar5 = (undefined1 *)0xcb528befcd0fb52f;
            puVar6 = (undefined1 *)0xfb3a65b3fca4c172;
            goto LAB_0019b7b4;
          }
        }
        goto LAB_0019b158;
      }
      if (puVar5 != (undefined1 *)0xcc4911e8d0a08389) {
        if (puVar5 == (undefined1 *)0xd0535adc928c1bbf) {
          puVar6 = (undefined1 *)0xbca196f3040a25ee;
          if (DAT_001f82a4._1_1_ == '\0') {
            puVar6 = (undefined1 *)0x8b5d2aa4730e6d53;
          }
        }
        goto LAB_0019b158;
      }
      puVar6 = (undefined1 *)0xc12fb3fcfd762a6a;
    }
    else {
      if ((long)puVar5 < -0x21f9ff0f3589e147) {
        if ((long)puVar5 < -0x24441355abedd3a5) {
          if (puVar5 == (undefined1 *)0xd7a28745f3a8fb05) {
            puVar6 = (undefined1 *)0x5427e3fe8053026a;
            if (DAT_001f82a4._2_1_ == '\0') {
              puVar6 = (undefined1 *)0x9c293a815f71a1ef;
            }
          }
          else if (puVar5 == (undefined1 *)0xd937f9741a083d9f) {
            puVar6 = (undefined1 *)0xf8b8c954db367ca1;
          }
        }
        else {
          puVar6 = (undefined1 *)0x932656effdaaeaa5;
          if ((puVar5 != (undefined1 *)0xdbbbecaa54122c5b) &&
             (puVar6 = puVar5, puVar5 == (undefined1 *)0xdc6dd27061ebaf34)) {
            puVar6 = (undefined1 *)0x7772f905052e4c0f;
          }
        }
        goto LAB_0019b158;
      }
      if ((long)puVar5 < -0x1ea92f4b59985472) {
        puVar6 = (undefined1 *)0x5e1b922e6e5165fd;
        if ((puVar5 != (undefined1 *)0xde0600f0ca761eb9) &&
           (puVar6 = puVar5, puVar5 == (undefined1 *)0xe08d3eae8db4f8d9)) {
          puVar6 = (undefined1 *)0xa852b4a22d98453e;
          if (DAT_001f82a4._1_1_ == '\0') {
            puVar6 = (undefined1 *)0x82d6800f37fa837b;
          }
        }
        goto LAB_0019b158;
      }
      if (puVar5 != (undefined1 *)0xe156d0b4a667ab8e) {
        puVar6 = (undefined1 *)0xf8b8c954db367ca1;
        if ((puVar5 != (undefined1 *)0xe5248230beacb780) &&
           (puVar6 = puVar5, puVar5 == (undefined1 *)0xe86a3cb2672328c3)) {
          puVar6 = (undefined1 *)0x5e9249b5376f08fa;
        }
        goto LAB_0019b158;
      }
      puVar6 = (undefined1 *)0xa0d7c67c60e7a82e;
    }
LAB_0019b144:
    DAT_001f73d1 = DAT_001f73d1 ^ 0x82;
    DAT_001f73d0 = DAT_001f73d0 ^ 0x82;
    DAT_001f82a4._2_1_ = '\x01';
    goto LAB_0019b158;
  }
  if ((long)puVar5 < -0x615740d48b1b4bc7) {
    if (-0x6ebe183313cbdcad < (long)puVar5) {
      if ((long)puVar5 < -0x6cd9a9100255155b) {
        if (puVar5 == (undefined1 *)0x9141e7ccec342354) {
          free(__ptr);
          local_f4 = (undefined4)unaff_x22;
          puVar6 = (undefined1 *)0x862419eaecdf1a5;
          local_120 = unaff_x19;
          local_118 = unaff_x26;
          local_110 = unaff_x21;
          local_108 = unaff_x27;
          local_100 = unaff_x28;
          if ((((unaff_x27 & 0xffffffff00000000) == 0 && (unaff_x28 & 0xffffffff00000000) == 0) &&
              unaff_x19 != 0) && unaff_x21 != 0) {
            puVar6 = (undefined1 *)0x4a5cd72dc1a18f6;
          }
        }
        else if (puVar5 == (undefined1 *)0x9173a1fc59339595) {
          iVar4 = FUN_001ebe70(0,1,&DAT_001f8294);
          puVar6 = (undefined1 *)0x28a29c505fd0878c;
          if (iVar4 != 0) {
            puVar6 = (undefined1 *)0x43d4efcefc88fa10;
          }
        }
      }
      else if (puVar5 == (undefined1 *)0x932656effdaaeaa5) {
        iVar4 = FUN_001ebe70(0,1,&DAT_001f8290);
        puVar6 = (undefined1 *)0xd0535adc928c1bbf;
        if (iVar4 != 0) {
          puVar6 = &DAT_1b767e91f4196530;
        }
      }
      else {
        puVar6 = &DAT_2b590051c346d3e;
        if ((puVar5 != &DAT_965cf93a9dddb88a) &&
           (puVar6 = puVar5, puVar5 == (undefined1 *)0x9c293a815f71a1ef)) {
          puVar6 = (undefined1 *)0x4bfd6150022cba99;
          goto LAB_0019b144;
        }
      }
      goto LAB_0019b158;
    }
    if ((long)puVar5 < -0x74e2530989c025ef) {
      if (puVar5 != (undefined1 *)0x82d6800f37fa837b) {
        if (puVar5 == (undefined1 *)0x87fde1166a77f06e) {
          puVar6 = (undefined1 *)0x5e9249b5376f08fa;
        }
        goto LAB_0019b158;
      }
      puVar6 = (undefined1 *)0x55d58c2b8d472655;
    }
    else {
      if (puVar5 == (undefined1 *)0x8b1dacf6763fda11) {
        unaff_x19 = strtol(local_e0,(char **)0x0,0x10);
        unaff_x21 = local_98;
        unaff_x26 = local_b0;
        unaff_x27 = local_a0;
        unaff_x28 = local_90;
        goto LAB_0019c3fc;
      }
      if (puVar5 != (undefined1 *)0x8b5d2aa4730e6d53) goto LAB_0019b158;
      puVar6 = (undefined1 *)0xd136b47bc732bd2b;
    }
  }
  else {
    if ((long)puVar5 < -0x57ad4b5dd267bac2) {
      if ((long)puVar5 < -0x5987c0f4f076dc6d) {
        puVar6 = &DAT_6b9fb694821e6034;
        if ((puVar5 != (undefined1 *)0x9ea8bf2b74e4b439) &&
           (puVar6 = puVar5, puVar5 == (undefined1 *)0xa0d7c67c60e7a82e)) {
          DAT_001f8294 = 0;
          local_c8 = (char *)FUN_001cce14(&local_80,&DAT_001f73d0);
          puVar6 = (undefined1 *)0x2467c250713f82d4;
          if (local_c8 != (char *)0x0) {
            puVar6 = (undefined1 *)0xe5248230beacb780;
          }
        }
      }
      else if (puVar5 == (undefined1 *)0xa6783f0b0f892393) {
        puVar6 = (undefined1 *)0x75ce15e08caa4c6a;
        if (DAT_001f82a4._1_1_ == '\0') {
          puVar6 = (undefined1 *)0xbb472acc394b094b;
        }
      }
      else if (puVar5 == (undefined1 *)0xa7a7e13df6ca7b84) {
        iVar4 = FUN_001ebe70(0,1,&DAT_001f8290);
        puVar6 = (undefined1 *)0xa6783f0b0f892393;
        if (iVar4 != 0) {
          puVar6 = (undefined1 *)0xd4590ec1e57e5179;
        }
      }
      goto LAB_0019b158;
    }
    if ((long)puVar5 < -0x45bc5d4f2a354f46) {
      puVar6 = (undefined1 *)0x55d58c2b8d472655;
      if ((puVar5 != (undefined1 *)0xa852b4a22d98453e) &&
         (puVar6 = puVar5, puVar5 == (undefined1 *)0xae2d64bf93f1b31a)) {
        puVar6 = (undefined1 *)0x7772f905052e4c0f;
      }
      goto LAB_0019b158;
    }
    if (puVar5 == (undefined1 *)0xba43a2b0d5cab0ba) {
      uVar3 = 0;
      goto LAB_0019c2b0;
    }
    puVar6 = (undefined1 *)0xc12fb3fcfd762a6a;
    if ((puVar5 == (undefined1 *)0xbac85a422f6dcf28) ||
       (puVar6 = puVar5, puVar5 != (undefined1 *)0xbb472acc394b094b)) goto LAB_0019b158;
    puVar6 = (undefined1 *)0xd57ac0afa91feda2;
  }
LAB_0019c64c:
  DAT_001f73cc = DAT_001f73cc ^ 0xfb;
  DAT_001f73cd = DAT_001f73cd ^ 0xfb;
  DAT_001f82a4._1_1_ = '\x01';
  goto LAB_0019b158;
}


