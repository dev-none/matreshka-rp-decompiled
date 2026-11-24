// Function: FUN_001c9028
// Entry: 001c9028

char * FUN_001c9028(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  char *in_x4;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *in_x11;
  char *pcVar11;
  char *unaff_x25;
  char *unaff_x27;
  char *local_90;
  char *local_80;
  char *local_78;
  char *local_70;
  char *local_68;
  
  pcVar1 = (char *)0xae2d64bf93f1b31a;
  if (param_1 != (char *)0x0) {
    pcVar1 = (char *)0x7772f905052e4c0f;
  }
  pcVar2 = param_1;
  pcVar3 = pcVar1;
  pcVar8 = (char *)0x21d53de2b345f472;
LAB_001c91e8:
  pcVar11 = in_x11;
  pcVar10 = pcVar8;
  pcVar7 = pcVar3;
  pcVar9 = pcVar2;
  pcVar8 = pcVar10;
  pcVar2 = pcVar9;
  pcVar3 = pcVar7;
  in_x11 = pcVar11;
  if (-0x1adb7dcf41534881 < (long)pcVar10) {
    if (0x2467c250713f82d3 < (long)pcVar10) {
      if ((long)pcVar10 < 0x5e1b922e6e5165fd) {
        if (pcVar10 == (char *)0x2467c250713f82d4) {
          pcVar8 = (char *)0xe5248230beacb780;
          local_70 = pcVar7;
          if (pcVar7 != (char *)0x0) {
            pcVar8 = (char *)0xf8b8c954db367ca1;
          }
          goto LAB_001c91e8;
        }
        if (pcVar10 != (char *)0x3f365012db6b56c1) {
          if (pcVar10 == (char *)0x4c1b9edb721e7222) {
            pcVar8 = &DAT_2b590051c346d3e;
          }
          goto LAB_001c91e8;
        }
        lVar6 = FUN_001ca1a8(param_1);
        in_x4 = (char *)(lVar6 + -1);
        bVar4 = in_x4 == (char *)0x0;
        pcVar8 = (char *)0x12b21488b9618371;
        pcVar9 = &DAT_6b9fb694821e6034;
      }
      else {
        if (pcVar10 == (char *)0x5e1b922e6e5165fd) {
          local_68 = unaff_x25 + -1;
          pcVar8 = (char *)0xe156d0b4a667ab8e;
          if (local_68 != (char *)0x0) {
            pcVar8 = (char *)0xde0600f0ca761eb9;
          }
          *local_78 = '\0';
          goto LAB_001c91e8;
        }
        pcVar8 = (char *)0x3a4ee4b4cd18045;
        in_x11 = in_x4;
        if ((pcVar10 == &DAT_6b9fb694821e6034) ||
           (pcVar8 = pcVar10, in_x11 = pcVar11, pcVar10 != (char *)0x7772f905052e4c0f))
        goto LAB_001c91e8;
        bVar4 = *param_1 == '\0';
        pcVar8 = (char *)0xdc6dd27061ebaf34;
        pcVar9 = (char *)0x3f365012db6b56c1;
      }
      in_x11 = pcVar11;
      if (!bVar4) {
        pcVar8 = pcVar9;
      }
      goto LAB_001c91e8;
    }
    if ((long)pcVar10 < 0x3a4ee4b4cd18045) {
      pcVar8 = &DAT_2b590051c346d3e;
      if (pcVar10 != (char *)0xe5248230beacb780) {
        if (pcVar10 == (char *)0xf8b8c954db367ca1) {
          local_80 = local_70 + -1;
          pcVar8 = (char *)0x4c1b9edb721e7222;
          if (param_1[(long)local_80] != '/') {
            pcVar8 = (char *)0xd937f9741a083d9f;
          }
        }
        else {
          pcVar8 = pcVar10;
          if (pcVar10 == &DAT_2b590051c346d3e) {
            unaff_x27 = param_1 + (long)local_70;
            goto LAB_001c96cc;
          }
        }
      }
    }
    else if ((long)pcVar10 < 0x1b767e91f4196530) {
      if (pcVar10 == (char *)0x3a4ee4b4cd18045) {
        local_78 = param_1 + (long)pcVar11;
        pcVar8 = (char *)0x5e1b922e6e5165fd;
        unaff_x25 = pcVar11;
        if (*local_78 != '/') {
          pcVar8 = (char *)0xcb528befcd0fb52f;
        }
      }
      else if (pcVar10 == (char *)0x12b21488b9618371) {
LAB_001c96a0:
        pcVar2 = (char *)0x0;
        pcVar8 = (char *)0xa0d7c67c60e7a82e;
        in_x11 = pcVar11;
      }
    }
    else {
      pcVar8 = pcVar1;
      if ((pcVar10 != (char *)0x21d53de2b345f472) &&
         (pcVar8 = pcVar10, pcVar10 == &DAT_1b767e91f4196530)) {
        DAT_001f8310 = 0;
        return local_90;
      }
    }
    goto LAB_001c91e8;
  }
  if ((long)pcVar10 < -0x34ad741032f04ad1) {
    if ((long)pcVar10 < -0x5f2839839f1857d2) {
      if (pcVar10 == (char *)0x8b1dacf6763fda11) {
        iVar5 = FUN_001ebe70(0,1,&DAT_001f8310);
        pcVar8 = (char *)0x8b5d2aa4730e6d53;
        if (iVar5 != 0) {
          pcVar8 = (char *)0xdbbbecaa54122c5b;
        }
      }
      else if (pcVar10 == (char *)0x8b5d2aa4730e6d53) {
        pcVar8 = (char *)0xd136b47bc732bd2b;
        if (DAT_001f8310._1_1_ == '\0') {
          pcVar8 = (char *)0x932656effdaaeaa5;
        }
      }
      else if (pcVar10 == (char *)0x932656effdaaeaa5) {
        DAT_001f79c8 = DAT_001f79c8 ^ 0xf8;
        DAT_001f79c9 = DAT_001f79c9 ^ 0xf8;
        DAT_001f8310._0_2_ = CONCAT11(1,(undefined1)DAT_001f8310);
        pcVar8 = &DAT_1b767e91f4196530;
      }
      goto LAB_001c91e8;
    }
    pcVar3 = pcVar9;
    pcVar8 = (char *)0x2467c250713f82d4;
    if (pcVar10 == (char *)0xa0d7c67c60e7a82e) goto LAB_001c91e8;
    if (pcVar10 != (char *)0xae2d64bf93f1b31a) {
      pcVar3 = pcVar7;
      pcVar8 = pcVar10;
      if (pcVar10 == (char *)0xc0eb019135e10a40) {
        pcVar8 = (char *)0x8b1dacf6763fda11;
        local_90 = unaff_x27;
      }
      goto LAB_001c91e8;
    }
  }
  else {
    if ((long)pcVar10 < -0x24441355abedd3a5) {
      pcVar2 = unaff_x25;
      pcVar8 = (char *)0xa0d7c67c60e7a82e;
      if (((pcVar10 != (char *)0xcb528befcd0fb52f) &&
          (pcVar2 = pcVar9, pcVar8 = &DAT_1b767e91f4196530, pcVar10 != (char *)0xd136b47bc732bd2b))
         && (pcVar8 = pcVar10, pcVar10 == (char *)0xd937f9741a083d9f)) {
        pcVar3 = local_80;
        pcVar8 = (char *)0x2467c250713f82d4;
      }
      goto LAB_001c91e8;
    }
    if (-0x21f9ff0f3589e148 < (long)pcVar10) {
      pcVar8 = (char *)0x3a4ee4b4cd18045;
      in_x11 = local_68;
      if ((pcVar10 != (char *)0xde0600f0ca761eb9) &&
         (pcVar8 = pcVar10, in_x11 = pcVar11, pcVar10 == (char *)0xe156d0b4a667ab8e))
      goto LAB_001c96a0;
      goto LAB_001c91e8;
    }
    pcVar8 = (char *)0x8b1dacf6763fda11;
    if ((pcVar10 == (char *)0xdbbbecaa54122c5b) ||
       (pcVar8 = pcVar10, pcVar10 != (char *)0xdc6dd27061ebaf34)) goto LAB_001c91e8;
  }
  unaff_x27 = (char *)&DAT_001f79c8;
LAB_001c96cc:
  pcVar3 = pcVar7;
  pcVar8 = (char *)0xc0eb019135e10a40;
  goto LAB_001c91e8;
}


