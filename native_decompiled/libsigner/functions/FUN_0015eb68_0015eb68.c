// Function: FUN_0015eb68
// Entry: 0015eb68

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_0015eb68(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  byte unaff_w19;
  
  lVar2 = 0x4e591caa7308c946;
LAB_0015ec38:
  do {
    while( true ) {
      while (lVar3 = lVar2, lVar2 = lVar3, lVar3 < -0x301dafc9152b8d0) {
        if (lVar3 < -0x42ba643ce308e1a0) {
          if (lVar3 < -0x6909bcf87b2c42c4) {
            if (lVar3 == -0x793092dc7f2e7c2b) {
              lVar2 = -0xadcfd02c09fc225;
              if (DAT_001f7f80._1_1_ == '\0') {
                lVar2 = 0x7898b91065b498d4;
              }
            }
            else if (lVar3 == -0x76fa0100c4d7ecc9) {
              unaff_w19 = 1;
              lVar2 = -0x5ba43ab785b7d44;
            }
          }
          else if (lVar3 == -0x6909bcf87b2c42c4) {
            DAT_001f7f80 = 0;
            iVar1 = FUN_001ca28c(param_1[4],&DAT_001f6880);
            lVar2 = -0x76fa0100c4d7ecc9;
            if (iVar1 != 0) {
              lVar2 = 0x7878458971dfe29d;
            }
          }
          else if (lVar3 == -0x4abae39d50774c76) {
            iVar1 = FUN_001ebe70(0,1,&DAT_001f7f80);
            lVar2 = -0x42ba643ce308e1a0;
            if (iVar1 != 0) {
              lVar2 = -0x301dafc9152b8d0;
            }
          }
        }
        else if (lVar3 < -0xadcfd02c09fc225) {
          if (lVar3 == -0x42ba643ce308e1a0) {
            lVar2 = 0x6d219ab8523128b4;
            if (DAT_001f7f80._1_1_ == '\0') {
              lVar2 = 0x3d647fef52d42d62;
            }
          }
          else if (lVar3 == -0x3bc03a42240f1df9) {
            DAT_001f7f80 = 0;
            iVar1 = FUN_001ca28c(*param_1,&DAT_001f6880);
            unaff_w19 = iVar1 == 0;
            lVar2 = -0x5ba43ab785b7d44;
          }
        }
        else {
          lVar2 = -0x6909bcf87b2c42c4;
          if ((lVar3 != -0xadcfd02c09fc225) && (lVar2 = lVar3, lVar3 == -0x5ba43ab785b7d44)) {
            return unaff_w19 & 1;
          }
        }
      }
      if (lVar3 < 0x6d219ab8523128b4) break;
      if (lVar3 < 0x7878458971dfe29d) {
        lVar2 = -0x3bc03a42240f1df9;
        if ((lVar3 != 0x6d219ab8523128b4) && (lVar2 = lVar3, lVar3 == 0x7126378a3dbc98ed)) {
          lVar2 = 0x3c2b3e395c27d5ef;
        }
      }
      else {
        lVar2 = -0x4abae39d50774c76;
        if ((lVar3 != 0x7878458971dfe29d) && (lVar2 = lVar3, lVar3 == 0x7898b91065b498d4)) {
          lVar2 = -0x6909bcf87b2c42c4;
LAB_0015ec24:
          DAT_001f7f80._0_2_ = CONCAT11(1,(undefined1)DAT_001f7f80);
          _DAT_001f6880 = _DAT_001f6880 ^ 0x4545454545454545;
          uRam00000000001f6888 = uRam00000000001f6888 ^ 0x4545454545454545;
        }
      }
    }
    if (lVar3 < 0x3d647fef52d42d62) {
      lVar2 = -0x4abae39d50774c76;
      if ((lVar3 != -0x301dafc9152b8d0) && (lVar2 = lVar3, lVar3 == 0x3c2b3e395c27d5ef)) {
        iVar1 = FUN_001ebe70(0,1,&DAT_001f7f80);
        lVar2 = -0x793092dc7f2e7c2b;
        if (iVar1 != 0) {
          lVar2 = 0x7126378a3dbc98ed;
        }
      }
      goto LAB_0015ec38;
    }
    if (lVar3 == 0x3d647fef52d42d62) {
      lVar2 = -0x3bc03a42240f1df9;
      goto LAB_0015ec24;
    }
    if (lVar3 == 0x4e591caa7308c946) {
      lVar2 = 0x3c2b3e395c27d5ef;
    }
  } while( true );
}


