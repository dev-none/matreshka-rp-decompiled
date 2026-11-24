// Function: FUN_001c7944
// Entry: 001c7944

void FUN_001c7944(undefined8 param_1,int *param_2,long param_3,undefined8 param_4,undefined8 param_5
                 ,void *param_6)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  bool bVar15;
  int iVar16;
  time_t tVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  void *pvVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  undefined8 extraout_x14;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined1 *puVar32;
  undefined1 *puVar33;
  undefined8 extraout_x16;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined1 *extraout_x17;
  undefined1 *puVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  void *local_1a8;
  uint local_19c;
  ulong local_198;
  long local_190;
  undefined8 local_188;
  undefined1 *local_178;
  void *local_140;
  undefined8 local_138;
  long local_130;
  undefined8 local_128;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 *local_108;
  undefined8 local_100;
  undefined8 local_c8;
  void *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  long local_a8;
  undefined8 local_a0;
  time_t tStack_98;
  undefined8 local_90;
  long local_88 [2];
  undefined1 *local_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  local_90 = 0;
  tVar17 = time(&tStack_98);
  srand((uint)tVar17);
  lVar20 = param_3 + 0x230;
  uVar18 = FUN_001eb884(&local_90,8);
  puVar1 = &DAT_965cf93a9dddb88a;
  if ((int)local_90 != 0) {
    puVar1 = (undefined1 *)0x33970f856d03deee;
  }
  uVar9 = uVar18;
  puVar10 = puVar1;
  uVar11 = extraout_x14;
  puVar32 = (undefined1 *)0x7f24efb1c885eb9b;
  uVar12 = extraout_x16;
  puVar13 = extraout_x17;
  uVar14 = 0x1c79a8;
LAB_001c7ab8:
  uVar38 = uVar14;
  puVar36 = puVar13;
  uVar35 = uVar12;
  puVar33 = puVar32;
  uVar31 = uVar11;
  puVar28 = puVar10;
  pvVar27 = param_6;
  uVar26 = param_5;
  uVar24 = param_4;
  lVar22 = lVar20;
  uVar19 = uVar9;
  uVar8 = local_a0;
  lVar7 = local_a8;
  uVar6 = local_b0;
  uVar5 = local_b8;
  pvVar4 = local_c0;
  uVar3 = local_c8;
  uVar9 = uVar19;
  lVar20 = lVar22;
  lVar21 = local_130;
  param_4 = uVar24;
  uVar23 = local_138;
  param_5 = uVar26;
  uVar25 = local_128;
  param_6 = pvVar27;
  puVar10 = puVar28;
  uVar11 = uVar31;
  uVar30 = local_118;
  puVar32 = puVar33;
  uVar12 = uVar35;
  uVar34 = local_110;
  puVar13 = puVar36;
  puVar29 = local_108;
  uVar14 = uVar38;
  uVar37 = local_100;
  if ((long)puVar33 < 0x102f8ffd02923754) {
    if (-0x3a9a787bdaa35b1f < (long)puVar33) {
      if ((long)puVar33 < -0xb6b4c3bb4fa6b5c) {
        if ((long)puVar33 < -0x255429dbcbdc462b) {
          puVar32 = (undefined1 *)0xa6bc7238d5ae4537;
          local_c8 = uVar3;
          local_c0 = pvVar4;
          local_b8 = uVar5;
          local_b0 = uVar6;
          local_a8 = lVar7;
          local_a0 = uVar8;
          if (((puVar33 != (undefined1 *)0xc84313bc4262f702) &&
              (puVar32 = (undefined1 *)0x7e7f415062326f70,
              puVar33 != (undefined1 *)0xd7a28745f3a8fb05)) &&
             (puVar32 = puVar33, puVar33 == (undefined1 *)0xc5658784255ca4e2)) {
            if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail(*param_2 == 0,uVar19);
            }
            return;
          }
        }
        else {
          if (puVar33 == (undefined1 *)0xdaabd6243423b9d5) {
            lVar21 = 0;
            uVar23 = 0;
            uVar25 = 0;
            pvVar27 = (void *)0x0;
            goto LAB_001c7a98;
          }
          local_c8 = uVar3;
          local_c0 = pvVar4;
          local_b8 = uVar5;
          local_b0 = uVar6;
          local_a8 = lVar7;
          local_a0 = uVar8;
          if (puVar33 == (undefined1 *)0xdad5fc5726557d2b) {
            FUN_001ebad8(local_b8,uVar19);
            FUN_001eb990(uVar19);
            FUN_001eb990(local_c8);
            FUN_001eb990(local_b0);
            FUN_001eb990(uVar18);
            FUN_001eb990(local_a0);
            FUN_001eb990(local_a8);
            puVar32 = (undefined1 *)0xc84313bc4262f702;
            local_1a8 = local_c0;
            local_178 = puVar28;
            if (local_c0 != (void *)0x0) {
              puVar32 = (undefined1 *)0xf494b3c44b0594a4;
            }
          }
        }
        goto LAB_001c7ab8;
      }
      if ((long)puVar33 < -0x5a5e67cbbd9137e) {
        if (puVar33 == (undefined1 *)0xf494b3c44b0594a4) {
          free(local_1a8);
          puVar32 = (undefined1 *)0xa6bc7238d5ae4537;
          local_c8 = uVar3;
          local_c0 = pvVar4;
          local_b8 = uVar5;
          local_b0 = uVar6;
          local_a8 = lVar7;
          local_a0 = uVar8;
          goto LAB_001c7ab8;
        }
        local_c8 = uVar3;
        local_c0 = pvVar4;
        local_b8 = uVar5;
        local_b0 = uVar6;
        local_a8 = lVar7;
        local_a0 = uVar8;
        if (puVar33 != (undefined1 *)0xf9b878d6ad273076) goto LAB_001c7ab8;
      }
      else if (puVar33 != (undefined1 *)0xfa5a19834426ec82) {
        if (puVar33 == (undefined1 *)0x494913e247ec810) {
          FUN_0010b6ac(param_2,param_1,param_3,local_198,local_140);
          iVar16 = *param_2;
          puVar32 = (undefined1 *)0x482e5862fb274eec;
          puVar29 = (undefined1 *)0x38b550c75dcbd861;
LAB_001c8e60:
          local_c8 = uVar3;
          local_c0 = pvVar4;
          local_b8 = uVar5;
          local_b0 = uVar6;
          local_a8 = lVar7;
          local_a0 = uVar8;
          if (iVar16 != 0) {
            puVar32 = puVar29;
          }
        }
        else {
          local_c8 = uVar3;
          local_c0 = pvVar4;
          local_b8 = uVar5;
          local_b0 = uVar6;
          local_a8 = lVar7;
          local_a0 = uVar8;
          if (puVar33 == (undefined1 *)0x859356aa69720d1) {
            free(local_178);
            puVar32 = (undefined1 *)0xc5658784255ca4e2;
          }
        }
        goto LAB_001c7ab8;
      }
LAB_001c7a7c:
      pvVar27 = (void *)0x0;
      goto LAB_001c7a98;
    }
    if ((long)puVar33 < -0x615cdc84d56625fc) {
      if (-0x7b681637aa78cddd < (long)puVar33) {
        if (puVar33 == (undefined1 *)0x8497e9c855873224) {
          puVar32 = (undefined1 *)0x7e7f415062326f70;
          goto LAB_001c8dd8;
        }
        pvVar27 = local_140;
        if (puVar33 == (undefined1 *)0x93f8f1d59ed66f09) goto LAB_001c7a98;
        local_c8 = uVar3;
        local_c0 = pvVar4;
        local_b8 = uVar5;
        local_b0 = uVar6;
        local_a8 = lVar7;
        local_a0 = uVar8;
        if (puVar33 == &DAT_965cf93a9dddb88a) {
          local_100 = FUN_001eb884(&local_90,0x28,param_3 + 0x240);
          bVar15 = (int)local_90 == 0;
          puVar29 = (undefined1 *)0x28a29c505fd0878c;
          puVar32 = (undefined1 *)0xbac85a422f6dcf28;
          goto LAB_001c8d30;
        }
        goto LAB_001c7ab8;
      }
      if (puVar33 == (undefined1 *)0x80946337e81a76ad) {
        FUN_0010ac40((long)&local_90 + 4,param_1,param_3);
        uVar9 = uVar35;
        puVar10 = puVar36;
        puVar32 = (undefined1 *)0xdad5fc5726557d2b;
        local_c8 = uVar38;
        local_c0 = pvVar27;
        local_b8 = uVar26;
        local_b0 = uVar24;
        local_a8 = lVar22;
        local_a0 = uVar31;
        goto LAB_001c7ab8;
      }
      local_c8 = uVar3;
      local_c0 = pvVar4;
      local_b8 = uVar5;
      local_b0 = uVar6;
      local_a8 = lVar7;
      local_a0 = uVar8;
      if (puVar33 != (undefined1 *)0x8238ab8752830617) goto LAB_001c7ab8;
      local_118 = FUN_001eb884(&local_90,0x200,param_3 + 0x30);
      bVar15 = (int)local_90 == 0;
      puVar29 = (undefined1 *)0xdaabd6243423b9d5;
      puVar32 = (undefined1 *)0xaa9d77ce64023005;
    }
    else {
      if ((long)puVar33 < -0x556288319bfdcffb) {
        if (puVar33 == (undefined1 *)0x9ea3237b2a99da04) {
          uVar25 = 0;
          goto LAB_001c7a7c;
        }
        local_c8 = uVar3;
        local_c0 = pvVar4;
        local_b8 = uVar5;
        local_b0 = uVar6;
        local_a8 = lVar7;
        local_a0 = uVar8;
        if (puVar33 == (undefined1 *)0xa6bc7238d5ae4537) {
          puVar32 = (undefined1 *)0x3359a89ff97157ac;
          if (local_178 != (undefined1 *)0x0) {
            puVar32 = (undefined1 *)0x859356aa69720d1;
          }
        }
        goto LAB_001c7ab8;
      }
      if (puVar33 != (undefined1 *)0xaa9d77ce64023005) {
        if (puVar33 == (undefined1 *)0xba6e2acce79821e0) {
          lVar21 = 0;
          uVar23 = 0;
          uVar25 = 0;
          pvVar27 = (void *)0x0;
          uVar30 = 0;
          goto LAB_001c7a98;
        }
        local_c8 = uVar3;
        local_c0 = pvVar4;
        local_b8 = uVar5;
        local_b0 = uVar6;
        local_a8 = lVar7;
        local_a0 = uVar8;
        if (puVar33 == (undefined1 *)0xbac85a422f6dcf28) {
          local_188 = *(undefined8 *)(param_3 + 0x10);
          FUN_001cc250(local_88,0,0x18);
          FUN_001c6524(param_2,param_1,local_188,FUN_001c7534,local_88);
          iVar16 = *param_2;
          puVar29 = (undefined1 *)0xd7a28745f3a8fb05;
          puVar32 = (undefined1 *)0x5427e3fe8053026a;
          goto LAB_001c8e60;
        }
        goto LAB_001c7ab8;
      }
      local_130 = FUN_001eb884(&local_90,4,param_3 + 0x20);
      bVar15 = (int)local_90 == 0;
      puVar29 = (undefined1 *)0x36fa2d308e82c2f8;
      puVar32 = (undefined1 *)0x129b99854ca09618;
    }
LAB_001c8d30:
    local_c8 = uVar3;
    local_c0 = pvVar4;
    local_b8 = uVar5;
    local_b0 = uVar6;
    local_a8 = lVar7;
    local_a0 = uVar8;
    if (!bVar15) {
      puVar32 = puVar29;
    }
    goto LAB_001c7ab8;
  }
  if ((long)puVar33 < 0x38b550c75dcbd861) {
    if ((long)puVar33 < 0x2e7820ff94f2299e) {
      if ((long)puVar33 < 0x1666a35a3e139985) {
        if (puVar33 == (undefined1 *)0x102f8ffd02923754) {
          FUN_001a3be8(&local_90,local_128,6,uVar18,local_100,local_110,local_118,local_130,
                       local_138);
          puVar32 = (undefined1 *)0x65f514c9e7f64775;
          local_c8 = uVar3;
          local_c0 = pvVar4;
          local_b8 = uVar5;
          local_b0 = uVar6;
          local_a8 = lVar7;
          local_a0 = uVar8;
          if ((int)local_90 != 0) {
            puVar32 = (undefined1 *)0xfa5a19834426ec82;
          }
          goto LAB_001c7ab8;
        }
        local_c8 = uVar3;
        local_c0 = pvVar4;
        local_b8 = uVar5;
        local_b0 = uVar6;
        local_a8 = lVar7;
        local_a0 = uVar8;
        if (puVar33 != (undefined1 *)0x129b99854ca09618) goto LAB_001c7ab8;
        local_138 = FUN_001eb884(&local_90,local_190,local_108);
        bVar15 = (int)local_90 == 0;
        puVar29 = (undefined1 *)0x9ea3237b2a99da04;
        puVar32 = (undefined1 *)0x3303345eb4f85978;
        goto LAB_001c8d30;
      }
      if (puVar33 == (undefined1 *)0x1666a35a3e139985) {
        FUN_001eba94(&local_90,local_128,local_140);
        puVar32 = (undefined1 *)0x494913e247ec810;
        local_c8 = uVar3;
        local_c0 = pvVar4;
        local_b8 = uVar5;
        local_b0 = uVar6;
        local_a8 = lVar7;
        local_a0 = uVar8;
        if ((int)local_90 != 0) {
          puVar32 = (undefined1 *)0x93f8f1d59ed66f09;
        }
        goto LAB_001c7ab8;
      }
      if (puVar33 != (undefined1 *)0x28a29c505fd0878c) {
        local_c8 = uVar3;
        local_c0 = pvVar4;
        local_b8 = uVar5;
        local_b0 = uVar6;
        local_a8 = lVar7;
        local_a0 = uVar8;
        if (puVar33 == (undefined1 *)0x297717612b720ee8) goto LAB_001c7a7c;
        goto LAB_001c7ab8;
      }
      lVar21 = 0;
      uVar23 = 0;
      uVar25 = 0;
      pvVar27 = (void *)0x0;
      uVar30 = 0;
      uVar34 = 0;
      puVar29 = (undefined1 *)0x0;
    }
    else {
      if ((long)puVar33 < 0x3359a89ff97157ac) {
        if (puVar33 == (undefined1 *)0x2e7820ff94f2299e) {
          local_108 = local_78;
          local_190 = local_88[0];
          local_110 = FUN_001eb884(&local_90,8,param_3 + 0x238);
          puVar32 = (undefined1 *)0x8238ab8752830617;
          local_c8 = uVar3;
          local_c0 = pvVar4;
          local_b8 = uVar5;
          local_b0 = uVar6;
          local_a8 = lVar7;
          local_a0 = uVar8;
          if ((int)local_90 != 0) {
            puVar32 = (undefined1 *)0xba6e2acce79821e0;
          }
        }
        else {
          local_c8 = uVar3;
          local_c0 = pvVar4;
          local_b8 = uVar5;
          local_b0 = uVar6;
          local_a8 = lVar7;
          local_a0 = uVar8;
          if (puVar33 == (undefined1 *)0x3303345eb4f85978) {
            local_128 = FUN_001ebb18(&local_90,uVar19);
            puVar29 = (undefined1 *)0xf9b878d6ad273076;
            puVar32 = (undefined1 *)0x102f8ffd02923754;
            bVar15 = (int)local_90 == 0;
            goto LAB_001c8d30;
          }
        }
        goto LAB_001c7ab8;
      }
      puVar32 = (undefined1 *)0xc5658784255ca4e2;
      local_c8 = uVar3;
      local_c0 = pvVar4;
      local_b8 = uVar5;
      local_b0 = uVar6;
      local_a8 = lVar7;
      local_a0 = uVar8;
      if (puVar33 == (undefined1 *)0x3359a89ff97157ac) goto LAB_001c7ab8;
      if (puVar33 == (undefined1 *)0x33970f856d03deee) {
        lVar21 = 0;
        uVar23 = 0;
        uVar25 = 0;
        pvVar27 = (void *)0x0;
        uVar30 = 0;
        uVar34 = 0;
        puVar29 = (undefined1 *)0x0;
        uVar37 = 0;
      }
      else {
        puVar32 = puVar33;
        if (puVar33 != (undefined1 *)0x36fa2d308e82c2f8) goto LAB_001c7ab8;
        uVar23 = 0;
        uVar25 = 0;
        pvVar27 = (void *)0x0;
      }
    }
LAB_001c7a98:
    iVar16 = 4;
    puVar32 = (undefined1 *)0x80946337e81a76ad;
    lVar22 = lVar21;
    uVar24 = uVar23;
    uVar26 = uVar25;
    uVar31 = uVar30;
    uVar35 = uVar34;
    puVar36 = puVar29;
    uVar38 = uVar37;
  }
  else {
    if ((long)puVar33 < 0x5701972a5c88a65c) {
      if ((long)puVar33 < 0x482e5862fb274eec) {
        lVar20 = local_130;
        param_4 = local_138;
        param_5 = local_128;
        param_6 = local_140;
        uVar11 = local_118;
        puVar32 = (undefined1 *)0x80946337e81a76ad;
        uVar12 = local_110;
        puVar13 = local_108;
        uVar14 = local_100;
        local_c8 = uVar3;
        local_c0 = pvVar4;
        local_b8 = uVar5;
        local_b0 = uVar6;
        local_a8 = lVar7;
        local_a0 = uVar8;
        if ((puVar33 != (undefined1 *)0x38b550c75dcbd861) &&
           (lVar20 = lVar22, param_4 = uVar24, param_5 = uVar26, param_6 = pvVar27, uVar11 = uVar31,
           puVar32 = puVar33, uVar12 = uVar35, puVar13 = puVar36, uVar14 = uVar38,
           puVar33 == (undefined1 *)0x45f288ff0a7ea1de)) {
          local_198 = (ulong)local_19c;
          local_140 = calloc(local_198,1);
          puVar32 = (undefined1 *)0x7c9736501c5f4f0a;
          if (local_140 != (void *)0x0) {
            puVar32 = (undefined1 *)0x1666a35a3e139985;
          }
        }
      }
      else {
        local_a0 = local_118;
        local_a8 = local_130;
        local_b0 = local_138;
        local_b8 = local_128;
        local_c0 = local_140;
        local_c8 = local_100;
        uVar9 = local_110;
        puVar10 = local_108;
        puVar32 = (undefined1 *)0xdad5fc5726557d2b;
        if (puVar33 != (undefined1 *)0x482e5862fb274eec) {
          if (puVar33 == (undefined1 *)0x5427e3fe8053026a) {
            local_78 = calloc(local_88[0] + 1,1);
            uVar9 = uVar19;
            puVar10 = puVar28;
            puVar32 = (undefined1 *)0x8497e9c855873224;
            local_c8 = uVar3;
            local_c0 = pvVar4;
            local_b8 = uVar5;
            local_b0 = uVar6;
            local_a8 = lVar7;
            local_a0 = uVar8;
            if (local_78 != (undefined1 *)0x0) {
              puVar32 = (undefined1 *)0x55488ab70f6983fa;
            }
          }
          else {
            uVar9 = uVar19;
            puVar10 = puVar28;
            puVar32 = puVar33;
            local_c8 = uVar3;
            local_c0 = pvVar4;
            local_b8 = uVar5;
            local_b0 = uVar6;
            local_a8 = lVar7;
            local_a0 = uVar8;
            if (puVar33 == (undefined1 *)0x55488ab70f6983fa) {
              FUN_001c6524(param_2,param_1,local_188,FUN_001c766c,local_88);
              puVar32 = (undefined1 *)0x2e7820ff94f2299e;
              if (*param_2 != 0) {
                puVar32 = (undefined1 *)0x5701972a5c88a65c;
              }
            }
          }
        }
      }
      goto LAB_001c7ab8;
    }
    if ((long)puVar33 < 0x7c9736501c5f4f0a) {
      puVar32 = (undefined1 *)0x7e7f415062326f70;
      local_c8 = uVar3;
      local_c0 = pvVar4;
      local_b8 = uVar5;
      local_b0 = uVar6;
      local_a8 = lVar7;
      local_a0 = uVar8;
      if ((puVar33 != (undefined1 *)0x5701972a5c88a65c) &&
         (puVar32 = puVar33, puVar33 == (undefined1 *)0x65f514c9e7f64775)) {
        local_19c = FUN_001eba8c(&local_90,local_128);
        puVar32 = (undefined1 *)0x45f288ff0a7ea1de;
        if ((int)local_90 != 0) {
          puVar32 = (undefined1 *)0x297717612b720ee8;
        }
      }
      goto LAB_001c7ab8;
    }
    if (puVar33 != (undefined1 *)0x7c9736501c5f4f0a) {
      if (puVar33 == (undefined1 *)0x7e7f415062326f70) {
        lVar20 = 0;
        param_4 = 0;
        param_5 = 0;
        param_6 = (void *)0x0;
        uVar11 = 0;
        puVar32 = (undefined1 *)0x80946337e81a76ad;
        uVar12 = 0;
        puVar13 = (undefined1 *)0x0;
        uVar14 = local_100;
        local_c8 = uVar3;
        local_c0 = pvVar4;
        local_b8 = uVar5;
        local_b0 = uVar6;
        local_a8 = lVar7;
        local_a0 = uVar8;
      }
      else {
        local_c8 = uVar3;
        local_c0 = pvVar4;
        local_b8 = uVar5;
        local_b0 = uVar6;
        local_a8 = lVar7;
        local_a0 = uVar8;
        if (puVar33 == (undefined1 *)0x7f24efb1c885eb9b) {
          puVar32 = puVar1;
        }
      }
      goto LAB_001c7ab8;
    }
    pvVar27 = (void *)0x0;
    puVar32 = (undefined1 *)0x80946337e81a76ad;
    lVar22 = local_130;
    uVar24 = local_138;
    uVar26 = local_128;
    uVar31 = local_118;
    uVar35 = local_110;
    puVar36 = local_108;
    uVar38 = local_100;
LAB_001c8dd8:
    iVar16 = 2;
  }
  *param_2 = iVar16;
  lVar20 = lVar22;
  param_4 = uVar24;
  param_5 = uVar26;
  param_6 = pvVar27;
  uVar11 = uVar31;
  uVar12 = uVar35;
  puVar13 = puVar36;
  uVar14 = uVar38;
  local_c8 = uVar3;
  local_c0 = pvVar4;
  local_b8 = uVar5;
  local_b0 = uVar6;
  local_a8 = lVar7;
  local_a0 = uVar8;
  goto LAB_001c7ab8;
}


