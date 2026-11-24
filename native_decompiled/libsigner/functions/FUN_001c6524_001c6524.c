// Function: FUN_001c6524
// Entry: 001c6524

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001c6524(int *param_1,long *param_2,undefined8 param_3,code *param_4,undefined8 param_5)

{
  char cVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long *unaff_x21;
  long local_c0;
  code *local_b8;
  undefined8 uStack_b0;
  void *local_a8;
  long local_a0;
  uint local_94;
  undefined1 *local_90;
  char *local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  long local_68;
  
  local_b8 = param_4;
  uStack_b0 = param_5;
  local_c0 = tpidr_el0;
  local_68 = *(long *)(local_c0 + 0x28);
  plVar3 = &local_c0;
  plVar2 = param_2;
  puVar7 = (undefined1 *)0x21d53de2b345f472;
LAB_001c6610:
  puVar8 = puVar7;
  plVar6 = plVar2;
  puVar7 = puVar8;
  plVar2 = plVar6;
  if (-0x11cdc96087771422 < (long)puVar8) {
    if ((long)puVar8 < 0x43d4efcefc88fa10) {
      if ((long)puVar8 < 0x1b767e91f4196530) {
        if ((long)puVar8 < 0x2b590051c346d3e) {
          if (puVar8 == (undefined1 *)0xf54be9e395389537) {
            puVar7 = (undefined1 *)0x6de583d82abca3c2;
            puVar8 = (undefined1 *)0xdc6dd27061ebaf34;
            cVar1 = DAT_001f830c._1_1_;
            goto LAB_001c72c8;
          }
          if (puVar8 == (undefined1 *)0xf8b8c954db367ca1) {
            bVar4 = (local_94 & 1) == 0;
            puVar8 = (undefined1 *)0x4c1b9edb721e7222;
            puVar7 = (undefined1 *)0xd937f9741a083d9f;
            goto LAB_001c6608;
          }
          if (puVar8 == (undefined1 *)0xee32369f7888ebdf) {
            if (*(long *)(local_c0 + 0x28) == local_68) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
        }
        else {
          puVar7 = (undefined1 *)0xc12fb3fcfd762a6a;
          if (((puVar8 != &DAT_2b590051c346d3e) &&
              (puVar7 = (undefined1 *)0x12b21488b9618371, puVar8 != (undefined1 *)0x3a4ee4b4cd18045)
              ) && (puVar7 = puVar8, puVar8 == (undefined1 *)0x12b21488b9618371)) {
            iVar5 = FUN_001ebe70(0,1,&DAT_001f830c);
            puVar7 = (undefined1 *)0x76eec756bc9b1bd1;
            if (iVar5 != 0) {
              puVar7 = (undefined1 *)0x3a4ee4b4cd18045;
            }
          }
        }
      }
      else if ((long)puVar8 < 0x2467c250713f82d4) {
        puVar7 = (undefined1 *)0x932656effdaaeaa5;
        if (((puVar8 != &DAT_1b767e91f4196530) &&
            (plVar2 = local_80, puVar7 = (undefined1 *)0x2467c250713f82d4,
            puVar8 != (undefined1 *)0x1db1d1f44155ec69)) &&
           (plVar2 = plVar6, puVar7 = puVar8, puVar8 == (undefined1 *)0x21d53de2b345f472)) {
LAB_001c6d94:
          plVar2 = plVar6;
          puVar7 = (undefined1 *)0xae2d64bf93f1b31a;
        }
      }
      else if (puVar8 == (undefined1 *)0x2467c250713f82d4) {
        local_94 = FUN_0010a69c(param_1,param_2,plVar6,unaff_x21);
        local_78 = plVar6;
        puVar7 = (undefined1 *)0xf8b8c954db367ca1;
        if (*param_1 != 0) {
          puVar7 = (undefined1 *)0xe5248230beacb780;
        }
      }
      else if (puVar8 == (undefined1 *)0x2ac799c399899ac3) {
        (**(code **)(*param_2 + 0xb8))(param_2,local_a0);
LAB_001c7284:
        puVar7 = (undefined1 *)0x9173a1fc59339595;
      }
      else if (puVar8 == (undefined1 *)0x3f365012db6b56c1) {
        DAT_001f8308 = 0;
        local_88 = (char *)((long)plVar3 + -0x10);
        unaff_x21 = (long *)((long)plVar3 + -0x20);
        *(undefined1 *)((long)plVar3 + -0x10) = 0;
        *(undefined8 *)((long)plVar3 + -0x20) = 0;
        local_90 = (undefined1 *)((long)plVar3 + -0x30);
        local_a8 = (void *)FUN_001cda84(&DAT_001f7570);
        *(void **)((long)plVar3 + -0x30) = local_a8;
        puVar7 = (undefined1 *)0xa0d7c67c60e7a82e;
        if (local_a8 != (void *)0x0) {
          puVar7 = &DAT_6b9fb694821e6034;
        }
        plVar3 = (long *)((long)plVar3 + -0x30);
      }
      goto LAB_001c6610;
    }
    if ((long)puVar8 < 0x5e1b922e6e5165fd) {
      if ((long)puVar8 < 0x4c1b9edb721e7222) {
        puVar7 = (undefined1 *)0xc12fb3fcfd762a6a;
        if ((puVar8 != (undefined1 *)0x43d4efcefc88fa10) &&
           (puVar7 = puVar8, puVar8 == (undefined1 *)0x4bfd6150022cba99)) {
          puVar7 = (undefined1 *)0xba43a2b0d5cab0ba;
          puVar8 = (undefined1 *)0x8b5d2aa4730e6d53;
          cVar1 = DAT_001f830c._2_1_;
LAB_001c72c8:
          if (cVar1 == '\0') {
            puVar7 = puVar8;
          }
        }
        goto LAB_001c6610;
      }
      if (puVar8 != (undefined1 *)0x4c1b9edb721e7222) {
        if (puVar8 == (undefined1 *)0x55d58c2b8d472655) {
          (*local_b8)(param_1,param_2,local_78,*unaff_x21,uStack_b0);
          local_a0 = *unaff_x21;
          bVar4 = *unaff_x21 == 0 || param_2 == (long *)0x0;
          puVar8 = (undefined1 *)0x57dab7dd661b1869;
          puVar7 = (undefined1 *)0x2ac799c399899ac3;
          goto LAB_001c6608;
        }
        if (puVar8 == (undefined1 *)0x57dab7dd661b1869) goto LAB_001c7284;
        goto LAB_001c6610;
      }
      FUN_0017db20(param_1,param_2,param_3,local_78,local_88);
      bVar4 = *param_1 == 0;
      puVar8 = &DAT_2b590051c346d3e;
      puVar7 = (undefined1 *)0xc0eb019135e10a40;
    }
    else {
      if (0x6de583d82abca3c1 < (long)puVar8) {
        puVar7 = (undefined1 *)0x3f365012db6b56c1;
        if (puVar8 != (undefined1 *)0x6de583d82abca3c2) {
          if (puVar8 == (undefined1 *)0x76eec756bc9b1bd1) {
            puVar8 = (undefined1 *)0xcb528befcd0fb52f;
            bVar4 = DAT_001f830c._2_1_ == '\0';
            puVar7 = (undefined1 *)0x9c293a815f71a1ef;
LAB_001c6608:
            if (bVar4) {
              puVar7 = puVar8;
            }
          }
          else {
            puVar7 = puVar8;
            if (puVar8 == (undefined1 *)0x7772f905052e4c0f) goto LAB_001c6d94;
          }
        }
        goto LAB_001c6610;
      }
      if (puVar8 == (undefined1 *)0x5e1b922e6e5165fd) {
        DAT_001f830c = 0;
        local_70 = (long *)FUN_001cce14(local_90,&DAT_001f79c4);
        puVar7 = (undefined1 *)0xde0600f0ca761eb9;
        if (local_70 != (long *)0x0) {
          puVar7 = (undefined1 *)0xe156d0b4a667ab8e;
        }
        goto LAB_001c6610;
      }
      if (puVar8 != (undefined1 *)0x5e9249b5376f08fa) {
        if (puVar8 == &DAT_6b9fb694821e6034) {
          puVar7 = (undefined1 *)0x12b21488b9618371;
        }
        goto LAB_001c6610;
      }
      FUN_0017e824(param_1,param_2,param_3,local_78,unaff_x21);
      bVar4 = *param_1 == 0;
      puVar8 = (undefined1 *)0xe86a3cb2672328c3;
      puVar7 = (undefined1 *)0x82d6800f37fa837b;
    }
LAB_001c73a8:
    if (!bVar4) {
      puVar7 = puVar8;
    }
    goto LAB_001c6610;
  }
  if ((long)puVar8 < -0x3ed04c030289d596) {
    if (-0x6cd9a9100255155c < (long)puVar8) {
      if ((long)puVar8 < -0x51d29b406c0e4ce6) {
        if (puVar8 == (undefined1 *)0x932656effdaaeaa5) {
          iVar5 = FUN_001ebe70(0,1,&DAT_001f830c);
          puVar7 = (undefined1 *)0x4bfd6150022cba99;
          if (iVar5 != 0) {
            puVar7 = &DAT_1b767e91f4196530;
          }
        }
        else {
          puVar7 = (undefined1 *)0x5e1b922e6e5165fd;
          if ((puVar8 != (undefined1 *)0x9c293a815f71a1ef) &&
             (puVar7 = puVar8, puVar8 == (undefined1 *)0xa0d7c67c60e7a82e)) {
            *param_1 = 2;
            puVar7 = (undefined1 *)0xee32369f7888ebdf;
          }
        }
      }
      else if (puVar8 == (undefined1 *)0xae2d64bf93f1b31a) {
        iVar5 = FUN_001ebe70(0,1,&DAT_001f8308);
        puVar7 = (undefined1 *)0xf54be9e395389537;
        if (iVar5 != 0) {
          puVar7 = (undefined1 *)0x7772f905052e4c0f;
        }
      }
      else {
        puVar7 = (undefined1 *)0xd136b47bc732bd2b;
        if ((puVar8 != (undefined1 *)0xba43a2b0d5cab0ba) &&
           (puVar7 = puVar8, puVar8 == (undefined1 *)0xc0eb019135e10a40)) {
          puVar8 = (undefined1 *)0x5e9249b5376f08fa;
          bVar4 = *local_88 == '\0';
          puVar7 = (undefined1 *)0x8b1dacf6763fda11;
          goto LAB_001c73a8;
        }
      }
      goto LAB_001c6610;
    }
    if ((long)puVar8 < -0x74e2530989c025ef) {
      puVar7 = (undefined1 *)0x55d58c2b8d472655;
      if ((puVar8 != (undefined1 *)0x82d6800f37fa837b) &&
         (puVar7 = puVar8, puVar8 == (undefined1 *)0x87fde1166a77f06e)) goto LAB_001c6e50;
      goto LAB_001c6610;
    }
    puVar7 = (undefined1 *)0xdbbbecaa54122c5b;
    if (puVar8 == (undefined1 *)0x8b1dacf6763fda11) goto LAB_001c6610;
    if (puVar8 != (undefined1 *)0x8b5d2aa4730e6d53) {
      puVar7 = puVar8;
      if (puVar8 == (undefined1 *)0x9173a1fc59339595) {
        iVar5 = *param_1;
        *unaff_x21 = 0;
        puVar7 = (undefined1 *)0xcc4911e8d0a08389;
        if (iVar5 != 0) {
          puVar7 = (undefined1 *)0x43d4efcefc88fa10;
        }
      }
      goto LAB_001c6610;
    }
    puVar7 = (undefined1 *)0xd136b47bc732bd2b;
  }
  else {
    if (-0x24441355abedd3a6 < (long)puVar8) {
      if ((long)puVar8 < -0x1ea92f4b59985472) {
        puVar7 = (undefined1 *)0x932656effdaaeaa5;
        if (puVar8 == (undefined1 *)0xdbbbecaa54122c5b) goto LAB_001c6610;
        if (puVar8 == (undefined1 *)0xdc6dd27061ebaf34) {
          _DAT_001f7570 = _DAT_001f7570 ^ 0x6666666666666666;
          uRam00000000001f7578 = uRam00000000001f7578 ^ 0x6666666666666666;
          _DAT_001f7580 = _DAT_001f7580 ^ 0x6666666666666666;
          uRam00000000001f7588 = uRam00000000001f7588 ^ 0x6666666666666666;
          _DAT_001f7590 = _DAT_001f7590 ^ 0x6666666666666666;
          uRam00000000001f7598 = uRam00000000001f7598 ^ 0x6666666666666666;
          _DAT_001f75a0 = _DAT_001f75a0 ^ 0x6666666666666666;
          uRam00000000001f75a8 = uRam00000000001f75a8 ^ 0x6666666666666666;
          DAT_001f79c0 = DAT_001f79c0 ^ 0x66;
          _DAT_001f75b0 = _DAT_001f75b0 ^ 0x6666666666666666;
          uRam00000000001f75b8 = uRam00000000001f75b8 ^ 0x6666666666666666;
          _DAT_001f75c0 = _DAT_001f75c0 ^ 0x6666666666666666;
          uRam00000000001f75c8 = uRam00000000001f75c8 ^ 0x6666666666666666;
          _DAT_001f75d0 = _DAT_001f75d0 ^ 0x6666666666666666;
          uRam00000000001f75d8 = uRam00000000001f75d8 ^ 0x6666666666666666;
          _DAT_001f75e0 = _DAT_001f75e0 ^ 0x6666666666666666;
          uRam00000000001f75e8 = uRam00000000001f75e8 ^ 0x6666666666666666;
          DAT_001f79c1 = DAT_001f79c1 ^ 0x66;
          _DAT_001f75f0 = _DAT_001f75f0 ^ 0x6666666666666666;
          uRam00000000001f75f8 = uRam00000000001f75f8 ^ 0x6666666666666666;
          _DAT_001f7600 = _DAT_001f7600 ^ 0x6666666666666666;
          uRam00000000001f7608 = uRam00000000001f7608 ^ 0x6666666666666666;
          DAT_001f79c2 = DAT_001f79c2 ^ 0x66;
          _DAT_001f7610 = _DAT_001f7610 ^ 0x6666666666666666;
          uRam00000000001f7618 = uRam00000000001f7618 ^ 0x6666666666666666;
          _DAT_001f7620 = _DAT_001f7620 ^ 0x6666666666666666;
          uRam00000000001f7628 = uRam00000000001f7628 ^ 0x6666666666666666;
          DAT_001f830c._0_2_ = CONCAT11(1,(undefined1)DAT_001f830c);
          _DAT_001f7630 = _DAT_001f7630 ^ 0x6666666666666666;
          uRam00000000001f7638 = uRam00000000001f7638 ^ 0x6666666666666666;
          _DAT_001f7640 = _DAT_001f7640 ^ 0x6666666666666666;
          uRam00000000001f7648 = uRam00000000001f7648 ^ 0x6666666666666666;
          _DAT_001f7650 = _DAT_001f7650 ^ 0x6666666666666666;
          uRam00000000001f7658 = uRam00000000001f7658 ^ 0x6666666666666666;
          _DAT_001f7660 = _DAT_001f7660 ^ 0x6666666666666666;
          uRam00000000001f7668 = uRam00000000001f7668 ^ 0x6666666666666666;
          _DAT_001f7670 = _DAT_001f7670 ^ 0x6666666666666666;
          uRam00000000001f7678 = uRam00000000001f7678 ^ 0x6666666666666666;
          _DAT_001f7680 = _DAT_001f7680 ^ 0x6666666666666666;
          uRam00000000001f7688 = uRam00000000001f7688 ^ 0x6666666666666666;
          _DAT_001f7690 = _DAT_001f7690 ^ 0x6666666666666666;
          uRam00000000001f7698 = uRam00000000001f7698 ^ 0x6666666666666666;
          _DAT_001f76a0 = _DAT_001f76a0 ^ 0x6666666666666666;
          uRam00000000001f76a8 = uRam00000000001f76a8 ^ 0x6666666666666666;
          _DAT_001f76b0 = _DAT_001f76b0 ^ 0x6666666666666666;
          uRam00000000001f76b8 = uRam00000000001f76b8 ^ 0x6666666666666666;
          _DAT_001f76c0 = _DAT_001f76c0 ^ 0x6666666666666666;
          uRam00000000001f76c8 = uRam00000000001f76c8 ^ 0x6666666666666666;
          _DAT_001f76d0 = _DAT_001f76d0 ^ 0x6666666666666666;
          uRam00000000001f76d8 = uRam00000000001f76d8 ^ 0x6666666666666666;
          _DAT_001f76e0 = _DAT_001f76e0 ^ 0x6666666666666666;
          uRam00000000001f76e8 = uRam00000000001f76e8 ^ 0x6666666666666666;
          _DAT_001f76f0 = _DAT_001f76f0 ^ 0x6666666666666666;
          uRam00000000001f76f8 = uRam00000000001f76f8 ^ 0x6666666666666666;
          _DAT_001f7700 = _DAT_001f7700 ^ 0x6666666666666666;
          uRam00000000001f7708 = uRam00000000001f7708 ^ 0x6666666666666666;
          _DAT_001f7710 = _DAT_001f7710 ^ 0x6666666666666666;
          uRam00000000001f7718 = uRam00000000001f7718 ^ 0x6666666666666666;
          _DAT_001f7720 = _DAT_001f7720 ^ 0x6666666666666666;
          uRam00000000001f7728 = uRam00000000001f7728 ^ 0x6666666666666666;
          _DAT_001f7730 = _DAT_001f7730 ^ 0x6666666666666666;
          uRam00000000001f7738 = uRam00000000001f7738 ^ 0x6666666666666666;
          _DAT_001f7740 = _DAT_001f7740 ^ 0x6666666666666666;
          uRam00000000001f7748 = uRam00000000001f7748 ^ 0x6666666666666666;
          _DAT_001f7750 = _DAT_001f7750 ^ 0x6666666666666666;
          uRam00000000001f7758 = uRam00000000001f7758 ^ 0x6666666666666666;
          _DAT_001f7760 = _DAT_001f7760 ^ 0x6666666666666666;
          uRam00000000001f7768 = uRam00000000001f7768 ^ 0x6666666666666666;
          _DAT_001f7770 = _DAT_001f7770 ^ 0x6666666666666666;
          uRam00000000001f7778 = uRam00000000001f7778 ^ 0x6666666666666666;
          _DAT_001f7780 = _DAT_001f7780 ^ 0x6666666666666666;
          uRam00000000001f7788 = uRam00000000001f7788 ^ 0x6666666666666666;
          _DAT_001f7790 = _DAT_001f7790 ^ 0x6666666666666666;
          uRam00000000001f7798 = uRam00000000001f7798 ^ 0x6666666666666666;
          _DAT_001f77a0 = _DAT_001f77a0 ^ 0x6666666666666666;
          uRam00000000001f77a8 = uRam00000000001f77a8 ^ 0x6666666666666666;
          _DAT_001f77b0 = _DAT_001f77b0 ^ 0x6666666666666666;
          uRam00000000001f77b8 = uRam00000000001f77b8 ^ 0x6666666666666666;
          _DAT_001f77c0 = _DAT_001f77c0 ^ 0x6666666666666666;
          uRam00000000001f77c8 = uRam00000000001f77c8 ^ 0x6666666666666666;
          _DAT_001f77d0 = _DAT_001f77d0 ^ 0x6666666666666666;
          uRam00000000001f77d8 = uRam00000000001f77d8 ^ 0x6666666666666666;
          _DAT_001f77e0 = _DAT_001f77e0 ^ 0x6666666666666666;
          uRam00000000001f77e8 = uRam00000000001f77e8 ^ 0x6666666666666666;
          _DAT_001f77f0 = _DAT_001f77f0 ^ 0x6666666666666666;
          uRam00000000001f77f8 = uRam00000000001f77f8 ^ 0x6666666666666666;
          _DAT_001f7800 = _DAT_001f7800 ^ 0x6666666666666666;
          uRam00000000001f7808 = uRam00000000001f7808 ^ 0x6666666666666666;
          _DAT_001f7810 = _DAT_001f7810 ^ 0x6666666666666666;
          uRam00000000001f7818 = uRam00000000001f7818 ^ 0x6666666666666666;
          _DAT_001f7820 = _DAT_001f7820 ^ 0x6666666666666666;
          uRam00000000001f7828 = uRam00000000001f7828 ^ 0x6666666666666666;
          _DAT_001f7830 = _DAT_001f7830 ^ 0x6666666666666666;
          uRam00000000001f7838 = uRam00000000001f7838 ^ 0x6666666666666666;
          _DAT_001f7840 = _DAT_001f7840 ^ 0x6666666666666666;
          uRam00000000001f7848 = uRam00000000001f7848 ^ 0x6666666666666666;
          _DAT_001f7850 = _DAT_001f7850 ^ 0x6666666666666666;
          uRam00000000001f7858 = uRam00000000001f7858 ^ 0x6666666666666666;
          _DAT_001f7860 = _DAT_001f7860 ^ 0x6666666666666666;
          uRam00000000001f7868 = uRam00000000001f7868 ^ 0x6666666666666666;
          _DAT_001f7870 = _DAT_001f7870 ^ 0x6666666666666666;
          uRam00000000001f7878 = uRam00000000001f7878 ^ 0x6666666666666666;
          _DAT_001f7880 = _DAT_001f7880 ^ 0x6666666666666666;
          uRam00000000001f7888 = uRam00000000001f7888 ^ 0x6666666666666666;
          _DAT_001f7890 = _DAT_001f7890 ^ 0x6666666666666666;
          uRam00000000001f7898 = uRam00000000001f7898 ^ 0x6666666666666666;
          _DAT_001f78a0 = _DAT_001f78a0 ^ 0x6666666666666666;
          uRam00000000001f78a8 = uRam00000000001f78a8 ^ 0x6666666666666666;
          _DAT_001f78b0 = _DAT_001f78b0 ^ 0x6666666666666666;
          uRam00000000001f78b8 = uRam00000000001f78b8 ^ 0x6666666666666666;
          _DAT_001f78c0 = _DAT_001f78c0 ^ 0x6666666666666666;
          uRam00000000001f78c8 = uRam00000000001f78c8 ^ 0x6666666666666666;
          _DAT_001f78d0 = _DAT_001f78d0 ^ 0x6666666666666666;
          uRam00000000001f78d8 = uRam00000000001f78d8 ^ 0x6666666666666666;
          _DAT_001f78e0 = _DAT_001f78e0 ^ 0x6666666666666666;
          uRam00000000001f78e8 = uRam00000000001f78e8 ^ 0x6666666666666666;
          _DAT_001f78f0 = _DAT_001f78f0 ^ 0x6666666666666666;
          uRam00000000001f78f8 = uRam00000000001f78f8 ^ 0x6666666666666666;
          _DAT_001f7900 = _DAT_001f7900 ^ 0x6666666666666666;
          uRam00000000001f7908 = uRam00000000001f7908 ^ 0x6666666666666666;
          _DAT_001f7910 = _DAT_001f7910 ^ 0x6666666666666666;
          uRam00000000001f7918 = uRam00000000001f7918 ^ 0x6666666666666666;
          _DAT_001f7920 = _DAT_001f7920 ^ 0x6666666666666666;
          uRam00000000001f7928 = uRam00000000001f7928 ^ 0x6666666666666666;
          _DAT_001f7930 = _DAT_001f7930 ^ 0x6666666666666666;
          uRam00000000001f7938 = uRam00000000001f7938 ^ 0x6666666666666666;
          _DAT_001f7940 = _DAT_001f7940 ^ 0x6666666666666666;
          uRam00000000001f7948 = uRam00000000001f7948 ^ 0x6666666666666666;
          _DAT_001f7950 = _DAT_001f7950 ^ 0x6666666666666666;
          uRam00000000001f7958 = uRam00000000001f7958 ^ 0x6666666666666666;
          _DAT_001f7960 = _DAT_001f7960 ^ 0x6666666666666666;
          uRam00000000001f7968 = uRam00000000001f7968 ^ 0x6666666666666666;
          _DAT_001f7970 = _DAT_001f7970 ^ 0x6666666666666666;
          uRam00000000001f7978 = uRam00000000001f7978 ^ 0x6666666666666666;
          _DAT_001f7980 = _DAT_001f7980 ^ 0x6666666666666666;
          uRam00000000001f7988 = uRam00000000001f7988 ^ 0x6666666666666666;
          _DAT_001f7990 = _DAT_001f7990 ^ 0x6666666666666666;
          uRam00000000001f7998 = uRam00000000001f7998 ^ 0x6666666666666666;
          _DAT_001f79a0 = _DAT_001f79a0 ^ 0x6666666666666666;
          uRam00000000001f79a8 = uRam00000000001f79a8 ^ 0x6666666666666666;
          _DAT_001f79b0 = _DAT_001f79b0 ^ 0x6666666666666666;
          uRam00000000001f79b8 = uRam00000000001f79b8 ^ 0x6666666666666666;
          puVar7 = (undefined1 *)0x3f365012db6b56c1;
          goto LAB_001c6610;
        }
        puVar7 = puVar8;
        if (puVar8 != (undefined1 *)0xde0600f0ca761eb9) goto LAB_001c6610;
      }
      else {
        plVar2 = local_70;
        puVar7 = (undefined1 *)0x2467c250713f82d4;
        if (((puVar8 == (undefined1 *)0xe156d0b4a667ab8e) ||
            (plVar2 = plVar6, puVar7 = (undefined1 *)0xc12fb3fcfd762a6a,
            puVar8 == (undefined1 *)0xe5248230beacb780)) ||
           (puVar7 = puVar8, puVar8 != (undefined1 *)0xe86a3cb2672328c3)) goto LAB_001c6610;
      }
LAB_001c6e50:
      plVar2 = plVar6;
      puVar7 = (undefined1 *)0xc12fb3fcfd762a6a;
      goto LAB_001c6610;
    }
    if (-0x33b6ee172f5f7c78 < (long)puVar8) {
      puVar7 = (undefined1 *)0xdbbbecaa54122c5b;
      if (puVar8 != (undefined1 *)0xcc4911e8d0a08389) {
        if (puVar8 == (undefined1 *)0xd136b47bc732bd2b) {
          DAT_001f830c = 0;
          local_80 = (long *)FUN_001cce14(local_90,&DAT_001f79c4);
          puVar7 = (undefined1 *)0x87fde1166a77f06e;
          if (local_80 != (long *)0x0) {
            puVar7 = (undefined1 *)0x1db1d1f44155ec69;
          }
        }
        else {
          puVar7 = puVar8;
          if (puVar8 == (undefined1 *)0xd937f9741a083d9f) {
            puVar7 = (undefined1 *)0x55d58c2b8d472655;
          }
        }
      }
      goto LAB_001c6610;
    }
    if (puVar8 == (undefined1 *)0xc12fb3fcfd762a6a) {
      free(local_a8);
      puVar7 = (undefined1 *)0xee32369f7888ebdf;
      goto LAB_001c6610;
    }
    if (puVar8 != (undefined1 *)0xcb528befcd0fb52f) goto LAB_001c6610;
    puVar7 = (undefined1 *)0x5e1b922e6e5165fd;
  }
  DAT_001f79c5 = DAT_001f79c5 ^ 0xed;
  DAT_001f79c4 = DAT_001f79c4 ^ 0xed;
  DAT_001f830c._0_3_ = CONCAT12(1,(undefined2)DAT_001f830c);
  goto LAB_001c6610;
}


