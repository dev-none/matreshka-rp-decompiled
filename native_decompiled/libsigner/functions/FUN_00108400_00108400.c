// Function: FUN_00108400
// Entry: 00108400

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00108400(int *param_1,undefined8 *param_2,long param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int *piVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  bool bVar8;
  int iVar9;
  int *piVar10;
  long lVar11;
  undefined8 uVar12;
  size_t sVar13;
  size_t sVar14;
  int *piVar15;
  long lVar16;
  ulong uVar17;
  undefined1 *puVar18;
  long *plVar19;
  undefined1 *puVar20;
  ulong in_x10;
  undefined8 *puVar21;
  long in_x12;
  uint *puVar22;
  long *unaff_x24;
  undefined8 *puVar23;
  long local_1b0;
  long local_1a8;
  ulong local_1a0;
  long local_198;
  uint *local_190;
  void *local_188;
  long *local_180;
  ulong *local_178;
  undefined8 *local_170;
  long local_168;
  int *local_160;
  ulong local_158;
  undefined8 uStack_150;
  undefined8 *local_148;
  undefined8 local_140;
  ulong uStack_138;
  ulong local_130;
  undefined8 uStack_128;
  long local_120;
  ulong local_118;
  undefined8 uStack_110;
  long *local_108;
  size_t local_100;
  long local_f8;
  ulong local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  long *local_d8;
  long *local_d0;
  long local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  long local_a8;
  int *local_a0;
  int *local_98;
  long local_90;
  
  local_1b0 = tpidr_el0;
  local_90 = *(long *)(local_1b0 + 0x28);
  local_1a8 = param_3 + 0x20;
  plVar7 = &local_1b0;
  lVar5 = local_1a8;
  plVar6 = &local_a8;
  puVar20 = (undefined1 *)0x21d53de2b345f472;
  local_170 = param_2;
  local_168 = param_3;
  local_a0 = param_1;
LAB_001084f8:
  puVar18 = puVar20;
  lVar16 = in_x12;
  uVar17 = in_x10;
  plVar19 = plVar6;
  lVar11 = lVar5;
  puVar23 = param_2;
  piVar10 = param_1;
  piVar4 = local_98;
  piVar15 = local_a0;
  puVar3 = local_b8;
  puVar2 = local_c0;
  puVar21 = local_e0;
  param_1 = piVar10;
  param_2 = puVar23;
  lVar5 = lVar11;
  plVar6 = plVar19;
  in_x10 = uVar17;
  in_x12 = lVar16;
  puVar20 = puVar18;
  if ((long)puVar18 < -0x11cdc96087771421) {
    if (-0x4537a5bdd09230d9 < (long)puVar18) {
      if ((long)puVar18 < -0x2a853f5056e0125e) {
        if ((long)puVar18 < -0x34ad741032f04ad1) {
          if ((long)puVar18 < -0x435e690cfbf5da12) {
            if (puVar18 == (undefined1 *)0xbac85a422f6dcf28) {
              free(local_160);
              puVar20 = (undefined1 *)0xd7a28745f3a8fb05;
            }
            else if (puVar18 == (undefined1 *)0xbb472acc394b094b) {
              DAT_001f7b08 = 0;
              puVar20 = (undefined1 *)0xd57ac0afa91feda2;
            }
          }
          else if (puVar18 == (undefined1 *)0xbca196f3040a25ee) {
            local_f0 = local_1a0 + 1;
            puVar20 = (undefined1 *)0xa852b4a22d98453e;
            if (*local_178 <= local_f0) {
              puVar20 = (undefined1 *)0xe08d3eae8db4f8d9;
            }
          }
          else {
            puVar20 = &DAT_1b767e91f4196530;
            if ((puVar18 != (undefined1 *)0xc0eb019135e10a40) &&
               (puVar20 = puVar18, puVar18 == (undefined1 *)0xc12fb3fcfd762a6a)) {
              local_100 = 1;
              goto LAB_0010a1d8;
            }
          }
        }
        else if ((long)puVar18 < -0x2faca5236d73e441) {
          puVar20 = (undefined1 *)0x3a4ee4b4cd18045;
          if ((puVar18 != (undefined1 *)0xcb528befcd0fb52f) &&
             (puVar20 = puVar18, puVar18 == (undefined1 *)0xcc4911e8d0a08389)) {
            lVar5 = 0;
            plVar6 = (long *)0x0;
            puVar20 = (undefined1 *)0x9c293a815f71a1ef;
          }
        }
        else if (puVar18 == (undefined1 *)0xd0535adc928c1bbf) {
          iVar9 = 2;
LAB_0010a488:
          *local_a0 = iVar9;
          param_1 = (int *)0x0;
          puVar20 = (undefined1 *)0xf63c965f6afee456;
        }
        else {
          if (puVar18 == (undefined1 *)0xd136b47bc732bd2b) {
            uStack_110 = *local_c0;
            local_118 = (ulong)*local_190;
            iVar9 = FUN_001da6e0(uStack_110,local_118,*local_e0,*(undefined4 *)(local_e0 + 1));
            uStack_128 = *local_b0;
            puVar18 = (undefined1 *)0x1db1d1f44155ec69;
            local_130 = (ulong)*(uint *)(puVar21 + 5);
            puVar20 = (undefined1 *)0x87fde1166a77f06e;
            goto LAB_0010a398;
          }
          if (puVar18 == (undefined1 *)0xd4590ec1e57e5179) {
            DAT_001f526c = DAT_001f526c ^ 0xd9;
            DAT_001f526d = DAT_001f526d ^ 0xd9;
            DAT_001f7b0d = '\x01';
            puVar20 = (undefined1 *)0xbb472acc394b094b;
          }
        }
      }
      else if ((long)puVar18 < -0x21f9ff0f3589e147) {
        if ((long)puVar18 < -0x255429dbcbdc462b) {
          if (puVar18 == (undefined1 *)0xd57ac0afa91feda2) {
            iVar9 = FUN_001ebe70(0,1,&DAT_001f7b04);
            puVar20 = (undefined1 *)0xba6e2acce79821e0;
            if (iVar9 != 0) {
              puVar20 = (undefined1 *)0xfb3a65b3fca4c172;
            }
          }
          else if (puVar18 == (undefined1 *)0xd937f9741a083d9f) {
            DAT_001f5249 = DAT_001f5249 ^ 0x54;
            DAT_001f5248 = DAT_001f5248 ^ 0x54;
            DAT_001f524a = DAT_001f524a ^ 0x54;
            DAT_001f524b = DAT_001f524b ^ 0x54;
            DAT_001f5240 = DAT_001f5240 ^ 0x5454545454545454;
            DAT_001f524c = DAT_001f524c ^ 0x54;
            puVar20 = (undefined1 *)0x4c1b9edb721e7222;
          }
          else if (puVar18 == (undefined1 *)0xd7a28745f3a8fb05) {
            if (*(long *)(local_1b0 + 0x28) == local_90) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
        }
        else if (puVar18 == (undefined1 *)0xdaabd6243423b9d5) {
          puVar20 = (undefined1 *)0xaa9d77ce64023005;
          if (DAT_001f7b0d == '\0') {
            puVar20 = (undefined1 *)0xd4590ec1e57e5179;
          }
        }
        else {
          puVar20 = &DAT_1b767e91f4196530;
          if ((puVar18 != (undefined1 *)0xdbbbecaa54122c5b) &&
             (puVar20 = puVar18, puVar18 == (undefined1 *)0xdc6dd27061ebaf34)) {
            DAT_001f51f8 = DAT_001f51f8 ^ 0xe1;
            DAT_001f51f9 = DAT_001f51f9 ^ 0xe1;
            DAT_001f51fa = DAT_001f51fa ^ 0xe1;
            DAT_001f51f0 = DAT_001f51f0 ^ 0xe1e1e1e1e1e1e1e1;
            DAT_001f7b08._0_2_ = CONCAT11(1,(undefined1)DAT_001f7b08);
            puVar20 = (undefined1 *)0x3f365012db6b56c1;
          }
        }
      }
      else if ((long)puVar18 < -0x1ea92f4b59985472) {
        if (puVar18 == (undefined1 *)0xde0600f0ca761eb9) {
          DAT_001f7afc = 0;
          uVar17 = FUN_001d98e0(*local_108,&DAT_001f5200,local_c0);
          puVar20 = (undefined1 *)0xa0d7c67c60e7a82e;
          if ((uVar17 & 1) == 0) {
            puVar20 = (undefined1 *)0xe156d0b4a667ab8e;
          }
        }
        else {
          piVar15 = local_98;
          if (puVar18 == (undefined1 *)0xe08d3eae8db4f8d9) goto LAB_0010a554;
        }
      }
      else {
        if (puVar18 == (undefined1 *)0xe156d0b4a667ab8e) {
          iVar9 = 5;
          goto LAB_0010a488;
        }
        puVar20 = (undefined1 *)0x2467c250713f82d4;
        if ((puVar18 != (undefined1 *)0xe5248230beacb780) &&
           (puVar20 = puVar18, puVar18 == (undefined1 *)0xe86a3cb2672328c3)) {
          param_2 = local_e0;
          puVar20 = (undefined1 *)0x2ac799c399899ac3;
        }
      }
      goto LAB_001084f8;
    }
    if (-0x63d6c57ea08e5e12 < (long)puVar18) {
      if ((long)puVar18 < -0x57ad4b5dd267bac2) {
        if ((long)puVar18 < -0x5f2839839f1857d2) {
          if (puVar18 == (undefined1 *)0x9c293a815f71a1ef) {
            puVar21 = (undefined8 *)(local_120 + lVar11 * 0x10);
            sVar13 = strlen((char *)*puVar21);
            sVar14 = strlen((char *)puVar21[1]);
            local_f8 = lVar11 + 1;
            unaff_x24 = (long *)((long)plVar19 + sVar14 + sVar13 + 3);
            puVar20 = (undefined1 *)0xee32369f7888ebdf;
            if (local_f8 != local_c8) {
              puVar20 = (undefined1 *)0x4bfd6150022cba99;
            }
          }
          else if (puVar18 == (undefined1 *)0x9ea8bf2b74e4b439) {
            local_180 = local_148 + 2;
            in_x10 = 0;
            puVar20 = (undefined1 *)0xa6783f0b0f892393;
          }
        }
        else {
          puVar20 = (undefined1 *)0x2467c250713f82d4;
          if (puVar18 != (undefined1 *)0xa0d7c67c60e7a82e) {
            if (puVar18 == (undefined1 *)0xa6783f0b0f892393) {
              lVar11 = FUN_001cac50(local_98,*(undefined8 *)(*local_180 + uVar17 * 8));
              puVar20 = (undefined1 *)0x75ce15e08caa4c6a;
              local_1a0 = uVar17;
              if (lVar11 != 0) {
                puVar20 = (undefined1 *)0xbca196f3040a25ee;
              }
            }
            else {
              puVar20 = puVar18;
              if (puVar18 == (undefined1 *)0xa7a7e13df6ca7b84) {
                puVar20 = (undefined1 *)0x52d98d60f83cf13e;
              }
            }
          }
        }
      }
      else if ((long)puVar18 < -0x51d29b406c0e4ce6) {
        in_x10 = local_f0;
        puVar20 = (undefined1 *)0xa6783f0b0f892393;
        if ((puVar18 != (undefined1 *)0xa852b4a22d98453e) &&
           (in_x10 = uVar17, puVar20 = puVar18, puVar18 == (undefined1 *)0xaa9d77ce64023005)) {
          puVar20 = (undefined1 *)0xbb472acc394b094b;
        }
      }
      else {
        if (puVar18 == (undefined1 *)0xae2d64bf93f1b31a) {
          iVar9 = FUN_001ebe70(0,1,&DAT_001f7af8);
          puVar18 = (undefined1 *)0x7772f905052e4c0f;
          puVar20 = (undefined1 *)0x5427e3fe8053026a;
          bVar8 = iVar9 == 0;
          goto LAB_0010a3e4;
        }
        in_x12 = local_a8;
        puVar20 = (undefined1 *)0x52d98d60f83cf13e;
        if ((puVar18 != (undefined1 *)0xba43a2b0d5cab0ba) &&
           (in_x12 = lVar16, puVar20 = puVar18, puVar18 == (undefined1 *)0xba6e2acce79821e0)) {
          puVar20 = (undefined1 *)0x8238ab8752830617;
          if (DAT_001f7b0c == '\0') {
            puVar20 = (undefined1 *)0x9141e7ccec342354;
          }
        }
      }
      goto LAB_001084f8;
    }
    if (-0x74a2d55b8cf192ae < (long)puVar18) {
      if ((long)puVar18 < -0x6e8c5e03a6cc6a6b) {
        param_2 = local_e8;
        puVar20 = (undefined1 *)0x2ac799c399899ac3;
        if ((puVar18 != (undefined1 *)0x8b5d2aa4730e6d53) &&
           (param_2 = puVar23, puVar20 = puVar18, puVar18 == (undefined1 *)0x9141e7ccec342354)) {
          DAT_001f5269 = DAT_001f5269 ^ 0x54;
          DAT_001f526a = DAT_001f526a ^ 0x54;
          DAT_001f5268 = DAT_001f5268 ^ 0x54;
          DAT_001f7b0c = '\x01';
          puVar20 = (undefined1 *)0x862419eaecdf1a5;
        }
      }
      else {
        if (puVar18 == (undefined1 *)0x9173a1fc59339595) goto LAB_00109474;
        param_2 = local_b8;
        puVar20 = (undefined1 *)0x2ac799c399899ac3;
        if ((puVar18 != (undefined1 *)0x932656effdaaeaa5) &&
           (param_2 = puVar23, puVar20 = puVar18, puVar18 == &DAT_965cf93a9dddb88a)) {
          puVar20 = (undefined1 *)0x28a29c505fd0878c;
          if (local_160 != (int *)0x0) {
            puVar20 = (undefined1 *)0xbac85a422f6dcf28;
          }
        }
      }
      goto LAB_001084f8;
    }
    if (-0x7b681637aa78cddd < (long)puVar18) {
      puVar20 = (undefined1 *)0x3f365012db6b56c1;
      if (puVar18 != (undefined1 *)0x8497e9c855873224) {
        if (puVar18 == (undefined1 *)0x87fde1166a77f06e) {
          iVar9 = FUN_001da6e0(uStack_110,local_118,uStack_128,local_130);
          puVar20 = (undefined1 *)0xe86a3cb2672328c3;
          if (-1 < iVar9) {
            puVar20 = (undefined1 *)0x5e9249b5376f08fa;
          }
        }
        else {
          puVar20 = puVar18;
          if (puVar18 == (undefined1 *)0x8b1dacf6763fda11) {
            iVar9 = FUN_001da6e0(local_140,uStack_138,uStack_150,local_158);
            puVar20 = (undefined1 *)0x932656effdaaeaa5;
            if (-1 < iVar9) {
              puVar20 = (undefined1 *)0xdbbbecaa54122c5b;
            }
          }
        }
      }
      goto LAB_001084f8;
    }
    puVar20 = (undefined1 *)0x862419eaecdf1a5;
    if ((puVar18 == (undefined1 *)0x8238ab8752830617) ||
       (puVar20 = puVar18, puVar18 != (undefined1 *)0x82d6800f37fa837b)) goto LAB_001084f8;
    iVar9 = FUN_001da6e0(uStack_110,local_118,uStack_128,local_130);
    bVar8 = iVar9 == 0;
    puVar18 = (undefined1 *)0x55d58c2b8d472655;
    puVar20 = (undefined1 *)0x57dab7dd661b1869;
  }
  else {
    if (0x33970f856d03deed < (long)puVar18) {
      if ((long)puVar18 < 0x57dab7dd661b1869) {
        if ((long)puVar18 < 0x52d98d60f83cf13e) {
          if ((long)puVar18 < 0x43d4efcefc88fa10) {
            if (puVar18 == (undefined1 *)0x33970f856d03deee) {
              free(local_188);
LAB_0010a164:
              puVar20 = &DAT_965cf93a9dddb88a;
            }
            else if (puVar18 == (undefined1 *)0x3f365012db6b56c1) {
              DAT_001f7af8 = 0;
              local_108 = plVar7 + -2;
              local_c0 = plVar7 + -4;
              local_d0 = plVar7 + -6;
              local_d8 = plVar7 + -8;
              local_b8 = plVar7 + -0x10;
              puVar21 = plVar7 + -0x18;
              plVar7[-2] = 0;
              plVar7[-6] = 0;
              plVar7[-8] = 0;
              local_e0 = puVar21;
              FUN_0017f5d8(local_a0,local_170,*(undefined8 *)(local_168 + 0x10),&DAT_001f51f0);
              plVar7 = puVar21;
              puVar20 = (undefined1 *)0x12b21488b9618371;
              if (*piVar15 != 0) {
                puVar20 = &DAT_6b9fb694821e6034;
              }
            }
          }
          else if (puVar18 == (undefined1 *)0x43d4efcefc88fa10) {
            local_c8 = *local_d8;
            local_120 = *local_d0;
            puVar20 = (undefined1 *)0xc12fb3fcfd762a6a;
            if (local_c8 != 0) {
              puVar20 = (undefined1 *)0xcc4911e8d0a08389;
            }
          }
          else {
            lVar5 = local_f8;
            plVar6 = unaff_x24;
            puVar20 = (undefined1 *)0x9c293a815f71a1ef;
            if ((puVar18 != (undefined1 *)0x4bfd6150022cba99) &&
               (lVar5 = lVar11, plVar6 = plVar19, puVar20 = puVar18,
               puVar18 == (undefined1 *)0x4c1b9edb721e7222)) {
              DAT_001f5260 = DAT_001f5260 ^ 0x54;
              DAT_001f5261 = DAT_001f5261 ^ 0x54;
              DAT_001f5262 = DAT_001f5262 ^ 0x54;
              DAT_001f5263 = DAT_001f5263 ^ 0x54;
              DAT_001f5264 = DAT_001f5264 ^ 0x54;
              DAT_001f5265 = DAT_001f5265 ^ 0x54;
              _DAT_001f5250 = _DAT_001f5250 ^ 0x5454545454545454;
              uRam00000000001f5258 = uRam00000000001f5258 ^ 0x5454545454545454;
              puVar20 = &DAT_2b590051c346d3e;
            }
          }
          goto LAB_001084f8;
        }
        if ((long)puVar18 < 0x55488ab70f6983fa) {
          if (puVar18 == (undefined1 *)0x52d98d60f83cf13e) {
            iVar9 = FUN_001ebe70(0,1,&DAT_001f7b08);
            puVar20 = (undefined1 *)0xdaabd6243423b9d5;
            if (iVar9 != 0) {
              puVar20 = (undefined1 *)0xa7a7e13df6ca7b84;
            }
          }
          else if (puVar18 == (undefined1 *)0x5427e3fe8053026a) {
            puVar20 = (undefined1 *)0x8497e9c855873224;
            if (DAT_001f7b08._1_1_ == '\0') {
              puVar20 = (undefined1 *)0xdc6dd27061ebaf34;
            }
          }
          goto LAB_001084f8;
        }
        if (puVar18 == (undefined1 *)0x55488ab70f6983fa) {
          puVar20 = (undefined1 *)0x5701972a5c88a65c;
          puVar18 = (undefined1 *)0x5e1b922e6e5165fd;
          cVar1 = DAT_001f7b08._2_1_;
LAB_0010a5a8:
          if (cVar1 == '\0') {
            puVar20 = puVar18;
          }
          goto LAB_001084f8;
        }
        if (puVar18 != (undefined1 *)0x55d58c2b8d472655) {
          if (puVar18 == (undefined1 *)0x5701972a5c88a65c) {
            puVar20 = (undefined1 *)0xde0600f0ca761eb9;
          }
          goto LAB_001084f8;
        }
      }
      else {
        if (0x6de583d82abca3c1 < (long)puVar18) {
          if ((long)puVar18 < 0x7772f905052e4c0f) {
            puVar20 = (undefined1 *)0x26c60fa523ddda4b;
            if (puVar18 != (undefined1 *)0x6de583d82abca3c2) {
              if (puVar18 == (undefined1 *)0x75ce15e08caa4c6a) {
                FUN_001e9264(local_1a8,0x2b);
                piVar15 = local_98;
                goto LAB_0010a554;
              }
              puVar20 = puVar18;
              if (puVar18 == (undefined1 *)0x76eec756bc9b1bd1) {
                local_a8 = 0;
                goto LAB_00108ebc;
              }
            }
          }
          else {
            puVar20 = (undefined1 *)0xae2d64bf93f1b31a;
            if (puVar18 != (undefined1 *)0x7772f905052e4c0f) {
              if (puVar18 == (undefined1 *)0x7e7f415062326f70) {
                puVar20 = (undefined1 *)0x2e7820ff94f2299e;
                puVar18 = (undefined1 *)0xf8b8c954db367ca1;
                cVar1 = DAT_001f7b08._3_1_;
                goto LAB_0010a5a8;
              }
              puVar20 = puVar18;
              if (puVar18 == (undefined1 *)0x7f24efb1c885eb9b) goto LAB_0010a164;
            }
          }
          goto LAB_001084f8;
        }
        if ((long)puVar18 < 0x5e9249b5376f08fa) {
          param_2 = local_b0;
          puVar20 = (undefined1 *)0x2ac799c399899ac3;
          if ((puVar18 != (undefined1 *)0x57dab7dd661b1869) &&
             (param_2 = puVar23, puVar20 = puVar18, puVar18 == (undefined1 *)0x5e1b922e6e5165fd)) {
            DAT_001f5200 = DAT_001f5200 ^ 0x5353535353535353;
            DAT_001f7b08._0_3_ = CONCAT12(1,(undefined2)DAT_001f7b08);
            puVar20 = (undefined1 *)0xde0600f0ca761eb9;
          }
          goto LAB_001084f8;
        }
        puVar20 = (undefined1 *)0x82d6800f37fa837b;
        if (puVar18 == (undefined1 *)0x5e9249b5376f08fa) goto LAB_001084f8;
        if (puVar18 != &DAT_6b9fb694821e6034) {
          puVar20 = puVar18;
          if (puVar18 == (undefined1 *)0x6dbb77d6245fbf6c) {
            local_178 = local_148 + 3;
            puVar20 = (undefined1 *)0x4357c11efd169a0;
            if (*local_178 != 0) {
              puVar20 = (undefined1 *)0x9ea8bf2b74e4b439;
            }
          }
          goto LAB_001084f8;
        }
      }
LAB_00109474:
      piVar15 = (int *)0x0;
LAB_0010a554:
      param_1 = piVar15;
      puVar20 = (undefined1 *)0xf63c965f6afee456;
      goto LAB_001084f8;
    }
    if (0x862419eaecdf1a4 < (long)puVar18) {
      if ((long)puVar18 < 0x2467c250713f82d4) {
        if (0x1b767e91f419652f < (long)puVar18) {
          if (puVar18 == &DAT_1b767e91f4196530) {
            iVar9 = FUN_001da6e0(local_140,uStack_138,uStack_150,local_158);
            puVar20 = (undefined1 *)0x8b5d2aa4730e6d53;
            if (iVar9 != 0) {
              puVar20 = (undefined1 *)0xd136b47bc732bd2b;
            }
          }
          else {
            puVar20 = (undefined1 *)0x82d6800f37fa837b;
            if ((puVar18 != (undefined1 *)0x1db1d1f44155ec69) &&
               (puVar20 = puVar18, puVar18 == (undefined1 *)0x21d53de2b345f472)) {
              puVar20 = (undefined1 *)0xae2d64bf93f1b31a;
            }
          }
          goto LAB_001084f8;
        }
        if (puVar18 != (undefined1 *)0x862419eaecdf1a5) {
          if (puVar18 == (undefined1 *)0x12b21488b9618371) {
            puVar20 = (undefined1 *)0x3a4ee4b4cd18045;
          }
          goto LAB_001084f8;
        }
        puVar21 = (undefined8 *)(local_120 + lVar16 * 0x10);
        DAT_001f7b04 = 0;
        FUN_001cfadc(local_98,*puVar21);
        FUN_001cfadc(piVar4,&DAT_001f5268);
        FUN_001cfadc(piVar4,puVar21[1]);
        FUN_001cfadc(piVar4,&DAT_001f526c);
        local_198 = lVar16 + 1;
        bVar8 = local_198 == local_c8;
        puVar20 = (undefined1 *)0x408409b1e5ac055;
        puVar18 = (undefined1 *)0x4a5cd72dc1a18f6;
      }
      else {
        if (0x28a29c505fd0878b < (long)puVar18) {
          puVar20 = (undefined1 *)0xd7a28745f3a8fb05;
          if (puVar18 != (undefined1 *)0x28a29c505fd0878c) {
            if (puVar18 == (undefined1 *)0x2ac799c399899ac3) {
              FUN_001939c0(local_a0,local_170,local_d0,0x14,local_d8);
              puVar20 = (undefined1 *)0x43d4efcefc88fa10;
              local_148 = puVar23;
              if (*piVar15 != 0) {
                puVar20 = (undefined1 *)0x9173a1fc59339595;
              }
            }
            else {
              puVar20 = puVar18;
              if (puVar18 == (undefined1 *)0x2e7820ff94f2299e) {
                puVar20 = &DAT_2b590051c346d3e;
              }
            }
          }
          goto LAB_001084f8;
        }
        if (puVar18 == (undefined1 *)0x2467c250713f82d4) {
          iVar9 = FUN_001ebe70(0,1,&DAT_001f7b00);
          bVar8 = iVar9 == 0;
          puVar18 = (undefined1 *)0xe5248230beacb780;
          puVar20 = (undefined1 *)0x7e7f415062326f70;
          goto LAB_0010a3e4;
        }
        if (puVar18 != (undefined1 *)0x26c60fa523ddda4b) goto LAB_001084f8;
        bVar8 = local_98 == (int *)0x0;
        puVar18 = (undefined1 *)0x6dbb77d6245fbf6c;
        puVar20 = (undefined1 *)0xd0535adc928c1bbf;
      }
      if (!bVar8) {
        puVar20 = puVar18;
      }
      goto LAB_001084f8;
    }
    if ((long)puVar18 < 0x2b590051c346d3e) {
      if ((long)puVar18 < -0x9c369a095011baa) {
        if (puVar18 == (undefined1 *)0xee32369f7888ebdf) {
          local_100 = (long)unaff_x24 + 1;
LAB_0010a1d8:
          puVar20 = (undefined1 *)0xf54be9e395389537;
        }
        else if (puVar18 == (undefined1 *)0xf54be9e395389537) {
          local_98 = calloc(local_100,1);
          puVar20 = (undefined1 *)0x76eec756bc9b1bd1;
          if (local_98 == (int *)0x0 || local_c8 == 0) {
            puVar20 = (undefined1 *)0x6de583d82abca3c2;
          }
        }
      }
      else if (puVar18 == (undefined1 *)0xf63c965f6afee456) {
        lVar11 = *local_d0;
        lVar16 = *local_d8;
        *(ulong *)(local_168 + 0x238) = *(ulong *)(local_168 + 0x238) | 0x80000000000;
        FUN_00196c4c(lVar11,lVar16);
        local_188 = (void *)*local_108;
        puVar20 = (undefined1 *)0x7f24efb1c885eb9b;
        local_160 = piVar10;
        if (local_188 != (void *)0x0) {
          puVar20 = (undefined1 *)0x33970f856d03deee;
        }
      }
      else if (puVar18 == (undefined1 *)0xf8b8c954db367ca1) {
        _DAT_001f5220 = _DAT_001f5220 ^ 0x5454545454545454;
        uRam00000000001f5228 = uRam00000000001f5228 ^ 0x5454545454545454;
        _DAT_001f5230 = _DAT_001f5230 ^ 0x5454545454545454;
        uRam00000000001f5238 = uRam00000000001f5238 ^ 0x5454545454545454;
        DAT_001f7b08 = CONCAT13(1,(undefined3)DAT_001f7b08);
        puVar20 = (undefined1 *)0xd937f9741a083d9f;
      }
      else if (puVar18 == (undefined1 *)0xfb3a65b3fca4c172) {
        puVar20 = (undefined1 *)0xd57ac0afa91feda2;
      }
      goto LAB_001084f8;
    }
    if (0x408409b1e5ac054 < (long)puVar18) {
      puVar20 = (undefined1 *)0x26c60fa523ddda4b;
      if (((puVar18 != (undefined1 *)0x408409b1e5ac055) &&
          (param_1 = local_98, puVar20 = (undefined1 *)0xf63c965f6afee456,
          puVar18 != (undefined1 *)0x4357c11efd169a0)) &&
         (param_1 = piVar10, puVar20 = puVar18, puVar18 == (undefined1 *)0x4a5cd72dc1a18f6)) {
        local_a8 = local_198;
LAB_00108ebc:
        param_1 = piVar10;
        puVar20 = (undefined1 *)0xba43a2b0d5cab0ba;
      }
      goto LAB_001084f8;
    }
    if (puVar18 == &DAT_2b590051c346d3e) {
      DAT_001f7b00 = 0;
      *(undefined4 *)(local_b8 + 1) = 2;
      uVar12 = *puVar2;
      puVar3[2] = &PTR_DAT_001f5208;
      puVar3[3] = 3;
      *puVar3 = 0x2600000004;
      puVar23 = puVar3 + 4;
      *puVar23 = 0x2600000004;
      puVar3[6] = &PTR_DAT_001f5208;
      puVar3[7] = 3;
      puVar22 = (uint *)(puVar2 + 1);
      uVar17 = (ulong)*puVar22;
      *(undefined4 *)(puVar21 + 1) = 0;
      *(undefined4 *)(puVar3 + 5) = 5;
      *puVar21 = 5;
      puVar21[2] = &PTR_DAT_001f5208;
      puVar21[3] = 3;
      *(undefined4 *)(puVar21 + 5) = 0;
      puVar21[6] = &PTR_DAT_001f5208;
      puVar21[7] = 3;
      puVar21[4] = 0x200000005;
      local_190 = puVar22;
      local_140 = uVar12;
      uStack_138 = uVar17;
      local_b0 = puVar21 + 4;
      iVar9 = FUN_001da6e0(uVar12,uVar17,0x2600000004,2);
      uStack_150 = *puVar23;
      local_158 = (ulong)*(uint *)(puVar3 + 5);
      puVar20 = (undefined1 *)0x8b1dacf6763fda11;
      puVar18 = (undefined1 *)0xc0eb019135e10a40;
      local_e8 = puVar23;
LAB_0010a398:
      if (iVar9 < 0) {
        puVar20 = puVar18;
      }
      goto LAB_001084f8;
    }
    if (puVar18 != (undefined1 *)0x3a4ee4b4cd18045) goto LAB_001084f8;
    iVar9 = FUN_001ebe70(0,1,&DAT_001f7afc);
    bVar8 = iVar9 == 0;
    puVar18 = (undefined1 *)0xcb528befcd0fb52f;
    puVar20 = (undefined1 *)0x55488ab70f6983fa;
  }
LAB_0010a3e4:
  if (!bVar8) {
    puVar20 = puVar18;
  }
  goto LAB_001084f8;
}


