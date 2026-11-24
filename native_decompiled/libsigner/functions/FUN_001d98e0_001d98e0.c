// Function: FUN_001d98e0
// Entry: 001d98e0

byte FUN_001d98e0(undefined1 *param_1,undefined1 *param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  byte bVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  byte unaff_w21;
  char *local_e8;
  char *local_e0;
  char *local_d8;
  undefined1 *local_d0;
  long local_c8;
  undefined1 *local_c0;
  int *local_b8;
  byte local_ac;
  byte local_94;
  undefined1 *local_90;
  undefined1 *local_88;
  char *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  puVar1 = (undefined1 *)0xdc6dd27061ebaf34;
  if (param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)0x3f365012db6b56c1;
  }
  puVar2 = (undefined1 *)0x7772f905052e4c0f;
  if (param_3 == (undefined4 *)0x0 || param_1 == (undefined1 *)0x0) {
    puVar2 = (undefined1 *)0xae2d64bf93f1b31a;
  }
  puVar5 = param_2;
  puVar12 = (undefined1 *)0x21d53de2b345f472;
  puVar6 = puVar1;
LAB_001d9a30:
  puVar13 = puVar6;
  puVar11 = puVar12;
  puVar10 = puVar5;
  puVar5 = puVar10;
  puVar12 = puVar11;
  puVar6 = puVar13;
  if ((long)puVar11 < -0xab4161c6ac76ac9) {
    if ((long)puVar11 < -0x34ad741032f04ad1) {
      if (-0x6cd9a9100255155c < (long)puVar11) {
        if ((long)puVar11 < -0x51d29b406c0e4ce6) {
          puVar12 = (undefined1 *)0xdbbbecaa54122c5b;
          if (puVar11 != (undefined1 *)0x932656effdaaeaa5) {
            if (puVar11 == (undefined1 *)0x9c293a815f71a1ef) {
              puVar12 = (undefined1 *)0x4bfd6150022cba99;
              puVar10 = (undefined1 *)0x55d58c2b8d472655;
LAB_001da5e4:
              if (DAT_001f8320._1_1_ == '\0') {
                puVar12 = puVar10;
              }
            }
            else {
              puVar12 = puVar11;
              if (puVar11 == (undefined1 *)0xa0d7c67c60e7a82e) {
                puVar12 = (undefined1 *)0x2467c250713f82d4;
                local_d0 = puVar10;
              }
            }
          }
        }
        else {
          if (puVar11 == (undefined1 *)0xae2d64bf93f1b31a) goto LAB_001da360;
          if (puVar11 == (undefined1 *)0xc0eb019135e10a40) goto LAB_001da264;
          if (puVar11 == (undefined1 *)0xc12fb3fcfd762a6a) {
            if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
            return local_94 & 1;
          }
        }
        goto LAB_001d9a30;
      }
      if ((long)puVar11 < -0x74e2530989c025ef) {
        puVar12 = (undefined1 *)0xe86a3cb2672328c3;
        if ((puVar11 == (undefined1 *)0x82d6800f37fa837b) ||
           (puVar12 = puVar11, puVar11 != (undefined1 *)0x87fde1166a77f06e)) goto LAB_001d9a30;
LAB_001da264:
        unaff_w21 = false;
      }
      else {
        puVar12 = (undefined1 *)0xdbbbecaa54122c5b;
        if (puVar11 == (undefined1 *)0x8b1dacf6763fda11) goto LAB_001d9a30;
        if (puVar11 == (undefined1 *)0x8b5d2aa4730e6d53) {
          DAT_001f8320 = 0;
          local_e0 = (char *)FUN_001cde50(0,&DAT_001f79f4,&local_70);
          bVar7 = local_e0 == (char *)0x0;
          puVar10 = (undefined1 *)0x1db1d1f44155ec69;
          puVar12 = (undefined1 *)0xd136b47bc732bd2b;
          goto LAB_001d9a28;
        }
        puVar12 = puVar11;
        if (puVar11 != (undefined1 *)0x9173a1fc59339595) goto LAB_001d9a30;
        lVar9 = strtol(local_e8,&local_78,10);
        param_3[2] = (int)lVar9;
        unaff_w21 = *local_b8 != 0x22 && local_78 != local_e8;
      }
      puVar12 = (undefined1 *)0x43d4efcefc88fa10;
      goto LAB_001d9a30;
    }
    if ((long)puVar11 < -0x23922d8f9e1450cc) {
      if ((long)puVar11 < -0x2ec94b8438cd42d5) {
        if (puVar11 == (undefined1 *)0xcb528befcd0fb52f) {
LAB_001da360:
          bVar4 = 0;
        }
        else {
          bVar4 = local_ac;
          if (puVar11 != (undefined1 *)0xcc4911e8d0a08389) goto LAB_001d9a30;
        }
        puVar12 = (undefined1 *)0xc12fb3fcfd762a6a;
        local_94 = bVar4;
        goto LAB_001d9a30;
      }
      if (puVar11 == (undefined1 *)0xd136b47bc732bd2b) goto LAB_001da264;
      if (puVar11 != (undefined1 *)0xd937f9741a083d9f) {
        if (puVar11 == (undefined1 *)0xdbbbecaa54122c5b) {
          iVar8 = FUN_001ebe70(0,1,&DAT_001f8320);
          bVar7 = iVar8 == 0;
          puVar10 = (undefined1 *)0x932656effdaaeaa5;
          puVar12 = (undefined1 *)0x6de583d82abca3c2;
          goto LAB_001d9a28;
        }
        goto LAB_001d9a30;
      }
      DAT_001f8320 = 0;
      local_70 = 0;
      local_d8 = (char *)FUN_001cde50(local_d0,&DAT_001f79f4,&local_70);
      bVar7 = local_d8 == (char *)0x0;
      puVar10 = &DAT_2b590051c346d3e;
      puVar12 = (undefined1 *)0x4c1b9edb721e7222;
    }
    else {
      if ((long)puVar11 < -0x1adb7dcf41534880) {
        puVar5 = param_1;
        puVar12 = (undefined1 *)0xa0d7c67c60e7a82e;
        if (((puVar11 != (undefined1 *)0xdc6dd27061ebaf34) &&
            (puVar5 = puVar10, puVar12 = (undefined1 *)0x5e1b922e6e5165fd, puVar6 = local_90,
            puVar11 != (undefined1 *)0xde0600f0ca761eb9)) &&
           (puVar10 = local_c0, puVar12 = puVar11, puVar6 = puVar13,
           puVar11 == (undefined1 *)0xe156d0b4a667ab8e)) {
LAB_001d9c14:
          puVar5 = puVar10;
          puVar12 = (undefined1 *)0xa0d7c67c60e7a82e;
          puVar6 = puVar13;
        }
        goto LAB_001d9a30;
      }
      puVar12 = (undefined1 *)0x2467c250713f82d4;
      if (puVar11 == (undefined1 *)0xe5248230beacb780) goto LAB_001d9a30;
      if (puVar11 != (undefined1 *)0xe86a3cb2672328c3) {
        puVar12 = puVar11;
        if (puVar11 == (undefined1 *)0xee32369f7888ebdf) {
          puVar12 = (undefined1 *)0xf54be9e395389537;
          puVar10 = (undefined1 *)0xf8b8c954db367ca1;
          goto LAB_001da5e4;
        }
        goto LAB_001d9a30;
      }
      iVar8 = FUN_001ebe70(0,1,&DAT_001f8320);
      bVar7 = iVar8 == 0;
      puVar10 = (undefined1 *)0x82d6800f37fa837b;
      puVar12 = (undefined1 *)0x9c293a815f71a1ef;
    }
  }
  else {
    if ((long)puVar11 < 0x43d4efcefc88fa10) {
      if ((long)puVar11 < 0x1b767e91f4196530) {
        if (0x2b590051c346d3d < (long)puVar11) {
          if (puVar11 == &DAT_2b590051c346d3e) {
            local_78 = (char *)0x0;
            local_b8 = (int *)__errno();
            *local_b8 = 0;
            lVar9 = strtol(local_d8,&local_78,10);
            *param_3 = (int)lVar9;
            puVar12 = (undefined1 *)0xc0eb019135e10a40;
            if (local_78 != local_d8 && *local_b8 != 0x22) {
              puVar12 = (undefined1 *)0x8b1dacf6763fda11;
            }
          }
          else {
            puVar12 = (undefined1 *)0x5e1b922e6e5165fd;
            puVar6 = local_88;
            if ((puVar11 != (undefined1 *)0x3a4ee4b4cd18045) &&
               (puVar12 = puVar11, puVar6 = puVar13, puVar11 == (undefined1 *)0x12b21488b9618371)) {
              local_88 = (undefined1 *)FUN_001cac50(param_1,param_2);
              puVar12 = (undefined1 *)0xcb528befcd0fb52f;
              if (local_88 != (undefined1 *)0x0) {
                puVar12 = (undefined1 *)0x3a4ee4b4cd18045;
              }
            }
          }
          goto LAB_001d9a30;
        }
        puVar12 = (undefined1 *)0xd937f9741a083d9f;
        if ((puVar11 == (undefined1 *)0xf54be9e395389537) ||
           (puVar12 = puVar11, puVar11 != (undefined1 *)0xf8b8c954db367ca1)) goto LAB_001d9a30;
        puVar12 = (undefined1 *)0xd937f9741a083d9f;
      }
      else {
        if (0x2467c250713f82d3 < (long)puVar11) {
          if (puVar11 == (undefined1 *)0x2467c250713f82d4) {
            iVar8 = FUN_001ebe70(0,1,&DAT_001f8320);
            puVar10 = (undefined1 *)0xe5248230beacb780;
            puVar12 = (undefined1 *)0xee32369f7888ebdf;
            bVar7 = iVar8 == 0;
            goto LAB_001d9a28;
          }
          if (puVar11 == (undefined1 *)0x2ac799c399899ac3) goto LAB_001da264;
          if (puVar11 != (undefined1 *)0x3f365012db6b56c1) goto LAB_001d9a30;
          local_c8 = FUN_001ca1a8(param_2);
          bVar7 = local_c8 == 0;
          puVar10 = (undefined1 *)0x12b21488b9618371;
          puVar12 = &DAT_6b9fb694821e6034;
          goto LAB_001d9a28;
        }
        if (puVar11 != &DAT_1b767e91f4196530) {
          if (puVar11 == (undefined1 *)0x1db1d1f44155ec69) {
            lVar9 = strtol(local_e0,&local_78,10);
            param_3[1] = (int)lVar9;
            puVar12 = (undefined1 *)0x87fde1166a77f06e;
            if (local_78 != local_e0 && *local_b8 != 0x22) {
              puVar12 = (undefined1 *)0x5e9249b5376f08fa;
            }
          }
          else if (puVar11 == (undefined1 *)0x21d53de2b345f472) {
            puVar12 = puVar2;
          }
          goto LAB_001d9a30;
        }
        puVar12 = (undefined1 *)0x8b5d2aa4730e6d53;
      }
LAB_001da51c:
      DAT_001f79f4 = DAT_001f79f4 ^ 0xa9;
      DAT_001f79f5 = DAT_001f79f5 ^ 0xa9;
      DAT_001f8320._0_2_ = CONCAT11(1,(undefined1)DAT_001f8320);
      goto LAB_001d9a30;
    }
    if ((long)puVar11 < 0x5e1b922e6e5165fd) {
      if ((long)puVar11 < 0x4c1b9edb721e7222) {
        bVar4 = unaff_w21;
        if (puVar11 != (undefined1 *)0x43d4efcefc88fa10) {
          if (puVar11 == (undefined1 *)0x4bfd6150022cba99) {
            puVar12 = (undefined1 *)0x57dab7dd661b1869;
          }
          goto LAB_001d9a30;
        }
      }
      else {
        if (puVar11 != (undefined1 *)0x4c1b9edb721e7222) {
          if (puVar11 == (undefined1 *)0x55d58c2b8d472655) {
            puVar12 = (undefined1 *)0x57dab7dd661b1869;
            goto LAB_001da51c;
          }
          if (puVar11 == (undefined1 *)0x57dab7dd661b1869) {
            DAT_001f8320 = 0;
            local_e8 = (char *)FUN_001cde50(0,&DAT_001f79f4,&local_70);
            bVar7 = local_e8 == (char *)0x0;
            puVar10 = (undefined1 *)0x9173a1fc59339595;
            puVar12 = (undefined1 *)0x2ac799c399899ac3;
            goto LAB_001d9a28;
          }
          goto LAB_001d9a30;
        }
        bVar4 = 0;
      }
      puVar12 = (undefined1 *)0xcc4911e8d0a08389;
      local_ac = bVar4;
      goto LAB_001d9a30;
    }
    if (0x6de583d82abca3c1 < (long)puVar11) {
      if (puVar11 == (undefined1 *)0x6de583d82abca3c2) {
        puVar12 = (undefined1 *)0x76eec756bc9b1bd1;
        puVar10 = &DAT_1b767e91f4196530;
        goto LAB_001da5e4;
      }
      puVar12 = (undefined1 *)0x8b5d2aa4730e6d53;
      if ((puVar11 != (undefined1 *)0x76eec756bc9b1bd1) &&
         (puVar12 = puVar11, puVar11 == (undefined1 *)0x7772f905052e4c0f)) {
        puVar12 = puVar1;
      }
      goto LAB_001d9a30;
    }
    if (puVar11 != (undefined1 *)0x5e1b922e6e5165fd) {
      puVar12 = (undefined1 *)0xe86a3cb2672328c3;
      if ((puVar11 != (undefined1 *)0x5e9249b5376f08fa) &&
         (puVar10 = param_1, puVar12 = puVar11, puVar11 == &DAT_6b9fb694821e6034))
      goto LAB_001d9c14;
      goto LAB_001d9a30;
    }
    local_c0 = puVar13 + local_c8;
    local_90 = (undefined1 *)FUN_001cac50(local_c0,param_2);
    bVar7 = local_90 == (undefined1 *)0x0;
    puVar10 = (undefined1 *)0xde0600f0ca761eb9;
    puVar12 = (undefined1 *)0xe156d0b4a667ab8e;
  }
LAB_001d9a28:
  if (!bVar7) {
    puVar12 = puVar10;
  }
  goto LAB_001d9a30;
}


