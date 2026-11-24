// Function: FUN_001d8bb0
// Entry: 001d8bb0

uint FUN_001d8bb0(char *param_1,char *param_2,void *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  uint unaff_w23;
  char *unaff_x27;
  char *local_b0;
  char *local_98;
  char *local_90;
  char *local_88;
  char *local_70;
  
  pcVar1 = (char *)((ulong)param_2 & 1);
  pcVar2 = (char *)0x5e9249b5376f08fa;
  if (pcVar1 != (char *)0x0) {
    pcVar2 = (char *)0x43d4efcefc88fa10;
  }
  pcVar3 = (char *)0xd937f9741a083d9f;
  if ((char *)0x2 < param_2) {
    pcVar3 = (char *)0x4c1b9edb721e7222;
  }
  pcVar4 = (char *)0xe5248230beacb780;
  if (pcVar1 + ((ulong)param_2 >> 1) <= param_4) {
    pcVar4 = (char *)0xf8b8c954db367ca1;
  }
  pcVar5 = param_1;
  pcVar6 = param_2;
  pcVar7 = pcVar4;
  pcVar14 = (char *)0x2467c250713f82d4;
LAB_001d8d10:
  pcVar13 = pcVar14;
  pcVar11 = pcVar7;
  pcVar10 = pcVar6;
  pcVar12 = pcVar5;
  pcVar5 = pcVar12;
  pcVar6 = pcVar10;
  pcVar7 = pcVar11;
  pcVar14 = pcVar13;
  if ((long)pcVar13 < -0x1adb7dcf41534880) {
    if ((long)pcVar13 < -0x44b8d533c6b4f6b5) {
      if (-0x6e8c5e03a6cc6a6c < (long)pcVar13) {
        if ((long)pcVar13 < -0x63d6c57ea08e5e11) {
          pcVar14 = (char *)0x9c293a815f71a1ef;
          if ((pcVar13 != (char *)0x9173a1fc59339595) &&
             (pcVar14 = pcVar13, pcVar13 == (char *)0x932656effdaaeaa5)) {
            DAT_001f8318 = 0;
            iVar9 = sscanf(param_1 + (long)local_98,(char *)&DAT_001f79e4,
                           (char *)((long)param_3 + (long)local_90));
            pcVar14 = (char *)0x8b5d2aa4730e6d53;
            if (iVar9 != 1) {
              pcVar14 = &DAT_1b767e91f4196530;
            }
          }
        }
        else {
          if (pcVar13 == (char *)0x9c293a815f71a1ef) {
            memset(param_3,0,(size_t)local_b0);
            unaff_w23 = 1;
            goto LAB_001d9740;
          }
          if (pcVar13 == (char *)0xa7a7e13df6ca7b84) {
            pcVar14 = (char *)0xd4590ec1e57e5179;
            if (DAT_001f831c._1_1_ == '\0') {
              pcVar14 = (char *)0x55d58c2b8d472655;
            }
          }
          else if (pcVar13 == (char *)0xba43a2b0d5cab0ba) {
            pcVar14 = (char *)0x52d98d60f83cf13e;
            if (DAT_001f831c._1_1_ == '\0') {
              pcVar14 = (char *)0xdbbbecaa54122c5b;
            }
          }
        }
        goto LAB_001d8d10;
      }
      if ((long)pcVar13 < -0x74e2530989c025ef) {
        pcVar14 = (char *)0xe86a3cb2672328c3;
        if ((pcVar13 != (char *)0x82d6800f37fa837b) &&
           (pcVar14 = pcVar13, pcVar13 == (char *)0x87fde1166a77f06e)) {
          local_88 = (char *)((long)param_3 + (long)pcVar11);
          pcVar14 = pcVar2;
          local_b0 = pcVar11;
        }
        goto LAB_001d8d10;
      }
      pcVar14 = (char *)0xc0eb019135e10a40;
      if ((pcVar13 == (char *)0x8b1dacf6763fda11) ||
         (pcVar14 = pcVar13, pcVar13 != (char *)0x8b5d2aa4730e6d53)) goto LAB_001d8d10;
      local_70 = local_98 + -2;
      pcVar14 = (char *)0x1db1d1f44155ec69;
      bVar8 = local_70 == (char *)0x0 || local_98 == pcVar1;
      unaff_x27 = local_90 + -1;
      pcVar12 = (char *)0xd136b47bc732bd2b;
    }
    else {
      if (-0x2ec94b8438cd42d6 < (long)pcVar13) {
        if ((long)pcVar13 < -0x2a853f5056e0125e) {
          pcVar5 = local_70;
          pcVar6 = unaff_x27;
          pcVar14 = &DAT_2b590051c346d3e;
          if ((pcVar13 != (char *)0xd136b47bc732bd2b) &&
             (pcVar5 = pcVar12, pcVar6 = pcVar10, pcVar14 = pcVar13,
             pcVar13 == (char *)0xd4590ec1e57e5179)) {
            pcVar14 = (char *)0x57dab7dd661b1869;
          }
        }
        else {
          pcVar14 = (char *)0xf54be9e395389537;
          if (((pcVar13 != (char *)0xd57ac0afa91feda2) &&
              (pcVar7 = param_4 + -1, pcVar14 = (char *)0x87fde1166a77f06e,
              pcVar13 != (char *)0xd937f9741a083d9f)) &&
             (pcVar7 = pcVar11, pcVar14 = pcVar13, pcVar13 == (char *)0xdbbbecaa54122c5b)) {
            pcVar14 = (char *)0x932656effdaaeaa5;
LAB_001d9830:
            DAT_001f79e8 = DAT_001f79e8 ^ 0xe;
            DAT_001f79e7 = DAT_001f79e7 ^ 0xe;
            DAT_001f79e6 = DAT_001f79e6 ^ 0xe;
            DAT_001f79e5 = DAT_001f79e5 ^ 0xe;
            DAT_001f79e4 = DAT_001f79e4 ^ 0xe;
            DAT_001f79e9 = DAT_001f79e9 ^ 0xe;
            DAT_001f831c._0_2_ = CONCAT11(1,(undefined1)DAT_001f831c);
            pcVar7 = pcVar11;
          }
        }
        goto LAB_001d8d10;
      }
      if (-0x3ed04c030289d597 < (long)pcVar13) {
        pcVar14 = (char *)0xcc4911e8d0a08389;
        if ((pcVar13 != (char *)0xc12fb3fcfd762a6a) &&
           (pcVar14 = pcVar13, pcVar13 == (char *)0xcc4911e8d0a08389)) {
          iVar9 = FUN_001ebe70(0,1,&DAT_001f831c);
          pcVar14 = (char *)0xbb472acc394b094b;
          if (iVar9 != 0) {
            pcVar14 = (char *)0xc12fb3fcfd762a6a;
          }
        }
        goto LAB_001d8d10;
      }
      if (pcVar13 == (char *)0xbb472acc394b094b) {
        pcVar14 = (char *)0xd57ac0afa91feda2;
        if (DAT_001f831c._2_1_ == '\0') {
          pcVar14 = (char *)0xee32369f7888ebdf;
        }
        goto LAB_001d8d10;
      }
      if (pcVar13 != (char *)0xc0eb019135e10a40) goto LAB_001d8d10;
      iVar9 = FUN_001ebe70(0,1,&DAT_001f8318);
      bVar8 = iVar9 == 0;
      pcVar12 = (char *)0x8b1dacf6763fda11;
      pcVar14 = (char *)0xba43a2b0d5cab0ba;
    }
  }
  else {
    if (0x2ac799c399899ac2 < (long)pcVar13) {
      if ((long)pcVar13 < 0x55d58c2b8d472655) {
        if ((long)pcVar13 < 0x4bfd6150022cba99) {
          if (pcVar13 == (char *)0x2ac799c399899ac3) goto LAB_001d95a0;
          if (pcVar13 == (char *)0x43d4efcefc88fa10) {
            pcVar14 = (char *)0xcc4911e8d0a08389;
          }
        }
        else {
          pcVar5 = param_2 + -2;
          pcVar6 = param_4 + -1;
          pcVar14 = &DAT_2b590051c346d3e;
          if (((pcVar13 != (char *)0x4c1b9edb721e7222) &&
              (pcVar5 = pcVar12, pcVar6 = pcVar10, pcVar14 = (char *)0x932656effdaaeaa5,
              pcVar13 != (char *)0x52d98d60f83cf13e)) &&
             (pcVar14 = pcVar13, pcVar13 == (char *)0x4bfd6150022cba99)) {
            return unaff_w23 & 1;
          }
        }
      }
      else if ((long)pcVar13 < 0x5e9249b5376f08fa) {
        if (pcVar13 == (char *)0x55d58c2b8d472655) {
          pcVar14 = (char *)0x57dab7dd661b1869;
          goto LAB_001d9830;
        }
        if (pcVar13 == (char *)0x57dab7dd661b1869) {
          DAT_001f8318 = 0;
          iVar9 = sscanf(param_1,(char *)&DAT_001f79e4,local_88);
          pcVar14 = (char *)0x9173a1fc59339595;
          if (iVar9 != 1) {
            pcVar14 = (char *)0x2ac799c399899ac3;
          }
        }
      }
      else {
        pcVar14 = (char *)0xe86a3cb2672328c3;
        if (pcVar13 != (char *)0x5e9249b5376f08fa) {
          if (pcVar13 == (char *)0x6de583d82abca3c2) goto LAB_001d95a0;
          pcVar14 = pcVar13;
          if (pcVar13 == (char *)0x76eec756bc9b1bd1) {
            pcVar14 = (char *)0x9c293a815f71a1ef;
          }
        }
      }
      goto LAB_001d8d10;
    }
    if (-0x74736ab24c98360 < (long)pcVar13) {
      if ((long)pcVar13 < 0x1b767e91f4196530) {
        pcVar14 = pcVar3;
        if ((pcVar13 != (char *)0xf8b8c954db367ca1) &&
           (pcVar14 = pcVar13, pcVar13 == &DAT_2b590051c346d3e)) {
          pcVar14 = (char *)0xc0eb019135e10a40;
          local_98 = pcVar12;
          local_90 = pcVar10;
        }
      }
      else if (pcVar13 == &DAT_1b767e91f4196530) {
LAB_001d95a0:
        unaff_w23 = 0;
LAB_001d9740:
        pcVar14 = (char *)0x4bfd6150022cba99;
      }
      else {
        pcVar7 = unaff_x27;
        pcVar14 = (char *)0x87fde1166a77f06e;
        if ((pcVar13 != (char *)0x1db1d1f44155ec69) &&
           (pcVar7 = pcVar11, pcVar14 = pcVar13, pcVar13 == (char *)0x2467c250713f82d4)) {
          pcVar14 = pcVar4;
        }
      }
      goto LAB_001d8d10;
    }
    if (-0x11cdc96087771422 < (long)pcVar13) {
      if (pcVar13 == (char *)0xee32369f7888ebdf) {
        DAT_001f79ed = DAT_001f79ed ^ 0x2b;
        DAT_001f79ec = DAT_001f79ec ^ 0x2b;
        DAT_001f79ee = DAT_001f79ee ^ 0x2b;
        DAT_001f79ef = DAT_001f79ef ^ 0x2b;
        DAT_001f79f0 = DAT_001f79f0 ^ 0x2b;
        DAT_001f79f1 = DAT_001f79f1 ^ 0x2b;
        DAT_001f831c._0_3_ = CONCAT12(1,(undefined2)DAT_001f831c);
        pcVar14 = (char *)0xf54be9e395389537;
      }
      else if (pcVar13 == (char *)0xf54be9e395389537) {
        DAT_001f831c = 0;
        iVar9 = sscanf(param_1,(char *)&DAT_001f79ec,local_88);
        bVar8 = iVar9 == 1;
        pcVar12 = (char *)0x6de583d82abca3c2;
        pcVar14 = (char *)0x76eec756bc9b1bd1;
        goto LAB_001d8d04;
      }
      goto LAB_001d8d10;
    }
    if (pcVar13 == (char *)0xe5248230beacb780) goto LAB_001d95a0;
    if (pcVar13 != (char *)0xe86a3cb2672328c3) goto LAB_001d8d10;
    iVar9 = FUN_001ebe70(0,1,&DAT_001f8318);
    bVar8 = iVar9 == 0;
    pcVar12 = (char *)0x82d6800f37fa837b;
    pcVar14 = (char *)0xa7a7e13df6ca7b84;
  }
LAB_001d8d04:
  if (!bVar8) {
    pcVar14 = pcVar12;
  }
  goto LAB_001d8d10;
}


