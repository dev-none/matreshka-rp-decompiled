// Function: FUN_0014a588
// Entry: 0014a588

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0014a588(undefined8 *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 auStack_d0 [8];
  long local_c8;
  undefined1 *local_c0;
  uint local_b4;
  undefined8 *local_b0;
  long local_a8;
  
  local_c8 = tpidr_el0;
  local_a8 = *(long *)(local_c8 + 0x28);
  puVar1 = auStack_d0;
  lVar5 = 0x4f26e81279767f85;
  local_b0 = param_1;
LAB_0014a6dc:
  while (lVar4 = lVar5, lVar5 = lVar4, lVar4 < -0x14e48278b642f3b6) {
    if (lVar4 < -0x3a9668573d49c671) {
      if (lVar4 < -0x5b889ce83bfbca9c) {
        if (lVar4 < -0x6b8da6ad2c11c608) {
          if (lVar4 < -0x705e89a8394556f7) {
            lVar5 = 0x2b19b49290db32d;
            if (((lVar4 != -0x7f1c7a598b6792a4) &&
                (lVar5 = -0x1839da07d8964c35, lVar4 != -0x7754eaeaa68cdae5)) &&
               (lVar5 = lVar4, lVar4 == -0x718513c057d4789e)) {
              DAT_001f7ee4 = 0;
              lVar4 = FUN_001cac50(local_b0[2],&DAT_001f656c);
              lVar5 = -0x24179ed16cab907d;
              if (lVar4 != 0) {
                lVar5 = -0x6f67610c764f6d5a;
              }
            }
          }
          else if (lVar4 == -0x705e89a8394556f7) {
            DAT_001f7ee4 = 0;
            lVar4 = FUN_001cac50(local_b0[6],&DAT_001f656c);
            lVar5 = -0x395def7f06a35ff7;
            if (lVar4 != 0) {
              lVar5 = -0x2793070bc941bf5e;
            }
          }
          else {
            if (lVar4 == -0x6f67610c764f6d5a) goto LAB_0014a6c4;
            if (lVar4 == -0x6ef45c5e1401861d) {
              iVar2 = FUN_001ebe70(0,1,&DAT_001f7ee4);
              lVar5 = -0x5b889ce83bfbca9c;
              if (iVar2 != 0) {
                lVar5 = -0x381da2dabf5e063d;
              }
            }
          }
        }
        else if (lVar4 < -0x640a5fe5b42e971d) {
          if (lVar4 == -0x6b8da6ad2c11c608) {
            DAT_001f7eec = 0;
            iVar2 = FUN_001ca28c(local_b0[0xb],&DAT_001f6580);
            lVar5 = 0x456cfa3e8f698a6b;
            if (iVar2 != 0) {
              lVar5 = 0x74bc1c50edbf4e60;
            }
          }
          else if (lVar4 == -0x69169bfdb2e7ef65) {
            iVar2 = FUN_001ebe70(0,1,&DAT_001f7ee4);
            lVar5 = -0x2cd8dace15291c65;
            if (iVar2 != 0) {
              lVar5 = -0x31fd504650cb3427;
            }
          }
          else if (lVar4 == -0x6686940db7c19cc2) {
            lVar5 = -0x7fda9d1a3e74eac;
          }
        }
        else if (lVar4 < -0x5c9e8f4eaf0f94aa) {
          lVar5 = -0x705e89a8394556f7;
          if ((lVar4 != -0x640a5fe5b42e971d) && (lVar5 = lVar4, lVar4 == -0x5f9b68e629c5b658)) {
            DAT_001f7ed4 = 0;
            lVar5 = 0x19395e45f9e7bc3c;
          }
        }
        else if (lVar4 == -0x5c9e8f4eaf0f94aa) {
          lVar5 = 0x3042387015eca79c;
          if (DAT_001f806f == '\0') {
            lVar5 = 0x3194729b0de53583;
          }
        }
        else if (lVar4 == -0x5c6586b351390a91) {
          lVar5 = -0x49db16dfc1c9d6e0;
        }
      }
      else if (lVar4 < -0x4cc3ad166f786130) {
        if (lVar4 < -0x5367c944fd392264) {
          if (lVar4 == -0x5b889ce83bfbca9c) {
            lVar5 = -0x343b74a830b76d7a;
            if (DAT_001f8077 == '\0') {
              lVar5 = -0x3138dc98ebb32040;
            }
          }
          else if (lVar4 == -0x581936f44b1e4c50) {
            DAT_001f64b0 = DAT_001f64b0 ^ 0x97;
            DAT_001f64b2 = DAT_001f64b2 ^ 0x97;
            DAT_001f64b1 = DAT_001f64b1 ^ 0x97;
            DAT_001f64a8 = DAT_001f64a8 ^ 0x9797979797979797;
            DAT_001f806e = '\x01';
            lVar5 = 0x716d85094791635b;
          }
          else if (lVar4 == -0x543601fb765c9742) {
            lVar5 = -0x640a5fe5b42e971d;
            if (DAT_001f8077 == '\0') {
              lVar5 = 0x346e81abbc621d09;
            }
          }
        }
        else if (lVar4 < -0x4d74029ecf42792c) {
          lVar5 = -0x5f9b68e629c5b658;
          if ((lVar4 != -0x5367c944fd392264) && (lVar5 = lVar4, lVar4 == -0x4efebe36a5e82257)) {
            lVar5 = -0x718513c057d4789e;
            goto LAB_0014c06c;
          }
        }
        else {
          lVar5 = -0x4c087de43728721b;
          if ((lVar4 != -0x4d74029ecf42792c) && (lVar5 = lVar4, lVar4 == -0x4d2f481fcf1841f6)) {
            DAT_001f7ec8 = 0;
            lVar5 = -0x21f5ae2a3accf7d0;
          }
        }
      }
      else if (lVar4 < -0x45669ed7dee69da3) {
        if (lVar4 == -0x4cc3ad166f786130) {
          iVar2 = FUN_001ebe70(0,1,&DAT_001f7ee8);
          lVar5 = -0x6520a64e0ed0dc1;
          if (iVar2 != 0) {
            lVar5 = 0x37bee2d6b33a776f;
          }
        }
        else if (lVar4 == -0x4c087de43728721b) {
          iVar2 = FUN_001ebe70(0,1,&DAT_001f7ee4);
          lVar5 = -0x543601fb765c9742;
          if (iVar2 != 0) {
            lVar5 = -0x4d74029ecf42792c;
          }
        }
        else if (lVar4 == -0x49db16dfc1c9d6e0) {
          iVar2 = FUN_001ebe70(0,1,&DAT_001f7ec0);
          lVar5 = 0x2ebd2266c5be6a3a;
          if (iVar2 != 0) {
            lVar5 = -0x5c6586b351390a91;
          }
        }
      }
      else if (lVar4 < -0x40076db54239bb0c) {
        if (lVar4 == -0x45669ed7dee69da3) {
          DAT_001f64f0 = DAT_001f64f0 ^ 0x50;
          DAT_001f64f1 = DAT_001f64f1 ^ 0x50;
          DAT_001f64f2 = DAT_001f64f2 ^ 0x50;
          DAT_001f64f3 = DAT_001f64f3 ^ 0x50;
          DAT_001f64e8 = DAT_001f64e8 ^ 0x5050505050505050;
          DAT_001f8072 = '\x01';
          lVar5 = 0x6a51f84ef2c8391;
        }
        else if (lVar4 == -0x44d4bfafd792e989) {
          DAT_001f6568 = DAT_001f6568 ^ 0xbc;
          DAT_001f6569 = DAT_001f6569 ^ 0xbc;
          DAT_001f656a = DAT_001f656a ^ 0xbc;
          _DAT_001f6550 = _DAT_001f6550 ^ 0xbcbcbcbcbcbcbcbc;
          uRam00000000001f6558 = uRam00000000001f6558 ^ 0xbcbcbcbcbcbcbcbc;
          DAT_001f6560 = DAT_001f6560 ^ 0xbcbcbcbcbcbcbcbc;
          DAT_001f8076 = '\x01';
          lVar5 = -0x221fcfffc80d1ad1;
        }
      }
      else {
        lVar5 = 0x5764ac433d2d5cf2;
        if ((lVar4 != -0x40076db54239bb0c) && (lVar5 = lVar4, lVar4 == -0x3ff3749ae70bcaf7)) {
          DAT_001f64c8 = DAT_001f64c8 ^ 0x4e4e4e4e4e4e4e4e;
          DAT_001f8070 = '\x01';
          lVar5 = -0x4d2f481fcf1841f6;
        }
      }
    }
    else if (lVar4 < -0x2fd9e35574318660) {
      if (lVar4 < -0x36b8c1606a0f4fb5) {
        if (lVar4 < -0x38c5822fb9e53ba6) {
          if (lVar4 < -0x395def7f06a35ff7) {
            lVar5 = 0x2c1220374010ba6f;
            if ((lVar4 != -0x3a9668573d49c671) && (lVar5 = lVar4, lVar4 == -0x3977527abdab672d)) {
              if (*(long *)(local_c8 + 0x28) != local_a8) {
                    /* WARNING: Subroutine does not return */
                __stack_chk_fail();
              }
              return local_b4 & 1;
            }
          }
          else {
            lVar5 = -0x4cc3ad166f786130;
            if ((lVar4 != -0x395def7f06a35ff7) && (lVar5 = lVar4, lVar4 == -0x38d8a35efdadd9a9)) {
              lVar5 = 0x71451f8aabe724a1;
              if (DAT_001f8076 == '\0') {
                lVar5 = -0x44d4bfafd792e989;
              }
            }
          }
        }
        else {
          if (lVar4 == -0x38c5822fb9e53ba6) goto LAB_0014a6c4;
          if (lVar4 == -0x3849d29e7f970b85) {
            iVar2 = FUN_001ebe70(0,1,&DAT_001f7ee0);
            lVar5 = -0x38d8a35efdadd9a9;
            if (iVar2 != 0) {
              lVar5 = 0x5f5d09e59fa8d2af;
            }
          }
          else if (lVar4 == -0x381da2dabf5e063d) {
            lVar5 = -0x6ef45c5e1401861d;
          }
        }
      }
      else if (lVar4 < -0x3254fd8b76ac1bb9) {
        if (lVar4 == -0x36b8c1606a0f4fb5) {
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
          lVar5 = 0x68e88d6e2dbb5888;
        }
        else {
          lVar5 = 0x657f304fa3b335cf;
          if ((lVar4 != -0x343b74a830b76d7a) && (lVar5 = lVar4, lVar4 == -0x33894aff3c1fc958))
          goto LAB_0014a6c4;
        }
      }
      else if (lVar4 < -0x316eeaeb857a4dce) {
        if (lVar4 == -0x3254fd8b76ac1bb9) {
          iVar2 = FUN_001ebe70(0,1,&DAT_001f7ee4);
          lVar5 = 0x7299fc55dd3cef46;
          if (iVar2 != 0) {
            lVar5 = 0x1d1a7a9eec1590c7;
          }
        }
        else if (lVar4 == -0x31fd504650cb3427) {
          lVar5 = -0x69169bfdb2e7ef65;
        }
      }
      else if (lVar4 == -0x316eeaeb857a4dce) {
        iVar2 = FUN_001ebe70(0,1,&DAT_001f7edc);
        lVar5 = -0x1d47fd6ab1ea5294;
        if (iVar2 != 0) {
          lVar5 = -0x14456f7541c3516d;
        }
      }
      else if (lVar4 == -0x3138dc98ebb32040) {
        lVar5 = 0x657f304fa3b335cf;
        goto LAB_0014c06c;
      }
    }
    else if (lVar4 < -0x21f5ae2a3accf7d0) {
      if (lVar4 < -0x2793070bc941bf5e) {
        lVar5 = 0x68e88d6e2dbb5888;
        if (lVar4 != -0x2fd9e35574318660) {
          if (lVar4 == -0x2cd8dace15291c65) {
            lVar5 = 0x57e70a255a2091f1;
            if (DAT_001f8077 == '\0') {
              lVar5 = -0x4efebe36a5e82257;
            }
          }
          else {
            lVar5 = lVar4;
            if (lVar4 == -0x27de3f405865e12a) {
              lVar5 = -0x6b8da6ad2c11c608;
            }
          }
        }
      }
      else if (lVar4 < -0x24179ed16cab907d) {
        if ((lVar4 == -0x2793070bc941bf5e) || (lVar4 == -0x26cf9c7074c02167)) {
LAB_0014a6c4:
          local_b4 = 1;
          lVar5 = -0x3977527abdab672d;
        }
      }
      else {
        lVar5 = -0x4c087de43728721b;
        if ((lVar4 != -0x24179ed16cab907d) && (lVar5 = lVar4, lVar4 == -0x221fcfffc80d1ad1)) {
          DAT_001f7ee0 = 0;
          lVar5 = -0x316eeaeb857a4dce;
        }
      }
    }
    else if (lVar4 < -0x1839da07d8964c35) {
      if (lVar4 == -0x21f5ae2a3accf7d0) {
        iVar2 = FUN_001ebe70(0,1,&DAT_001f7ec4);
        lVar5 = -0x5c9e8f4eaf0f94aa;
        if (iVar2 != 0) {
          lVar5 = 0x65ec5e12754f9f49;
        }
      }
      else if (lVar4 == -0x1d47fd6ab1ea5294) {
        lVar5 = 0x4ce483deee2ffdde;
        if (DAT_001f8075 == '\0') {
          lVar5 = 0x31d5c259b1923891;
        }
      }
      else if (lVar4 == -0x1a4832afb060296f) {
        DAT_001f6528 = DAT_001f6528 ^ 0xd7;
        DAT_001f6529 = DAT_001f6529 ^ 0xd7;
        DAT_001f652a = DAT_001f652a ^ 0xd7;
        _DAT_001f6510 = _DAT_001f6510 ^ 0xd7d7d7d7d7d7d7d7;
        uRam00000000001f6518 = uRam00000000001f6518 ^ 0xd7d7d7d7d7d7d7d7;
        DAT_001f6520 = DAT_001f6520 ^ 0xd7d7d7d7d7d7d7d7;
        DAT_001f8074 = '\x01';
        lVar5 = -0x14e48278b642f3b6;
      }
    }
    else if (lVar4 < -0x179787041eca641b) {
      if (lVar4 == -0x1839da07d8964c35) {
        iVar2 = FUN_001ebe70(0,1,&DAT_001f7eec);
        lVar5 = 0x72c59d940d6b5360;
        if (iVar2 != 0) {
          lVar5 = 0x959c6ba81eed576;
        }
      }
      else if (lVar4 == -0x17b2c098d4f7cf99) {
        iVar2 = FUN_001ebe70(0,1,&DAT_001f7ecc);
        lVar5 = 0x32a101a6c34b1b;
        if (iVar2 != 0) {
          lVar5 = 0x32eac5725aa67ca6;
        }
      }
    }
    else if (lVar4 == -0x179787041eca641b) {
      lVar5 = 0x1dcc2eb9363a5e47;
      if (DAT_001f806d == '\0') {
        lVar5 = 0x51323d59b6c06bc6;
      }
    }
    else if (lVar4 == -0x1782b759cff8e8d7) {
      lVar5 = -0x3254fd8b76ac1bb9;
    }
  }
  if (lVar4 < 0x3ac416beb3df0190) {
    if (lVar4 < 0x959c6ba81eed576) {
      if (lVar4 < -0x6520a64e0ed0dc1) {
        if (lVar4 < -0xf04769c024e5f93) {
          if (lVar4 == -0x14e48278b642f3b6) {
            DAT_001f7ed8 = 0;
            lVar5 = 0x7ef9c02c9c97dbab;
          }
          else {
            lVar5 = -0x316eeaeb857a4dce;
            if ((lVar4 != -0x14456f7541c3516d) && (lVar5 = lVar4, lVar4 == -0x119a04578674ad04)) {
              DAT_001f6574 = DAT_001f6574 ^ 0xb6;
              DAT_001f6575 = DAT_001f6575 ^ 0xb6;
              DAT_001f6576 = DAT_001f6576 ^ 0xb6;
              DAT_001f6577 = DAT_001f6577 ^ 0xb6;
              DAT_001f6578 = DAT_001f6578 ^ 0xb6;
              DAT_001f8078 = '\x01';
              lVar5 = -0x41011a133266216;
            }
          }
        }
        else if (lVar4 == -0xf04769c024e5f93) {
          lVar5 = 0x41cb8cc32c9a99d2;
          if (DAT_001f8072 == '\0') {
            lVar5 = -0x45669ed7dee69da3;
          }
        }
        else {
          lVar5 = -0x14e48278b642f3b6;
          if ((lVar4 != -0x9a1a81fe0a9070c) && (lVar5 = lVar4, lVar4 == -0x7fda9d1a3e74eac)) {
            iVar2 = FUN_001ebe70(0,1,&DAT_001f7ebc);
            lVar5 = -0x179787041eca641b;
            if (iVar2 != 0) {
              lVar5 = -0x6686940db7c19cc2;
            }
          }
        }
      }
      else if (lVar4 < 0x2b19b49290db32d) {
        if (lVar4 == -0x6520a64e0ed0dc1) {
          lVar5 = 0x6aad2fe2c149550e;
          if (DAT_001f8078 == '\0') {
            lVar5 = -0x119a04578674ad04;
          }
        }
        else if (lVar4 == -0x41011a133266216) {
          DAT_001f7ee8 = 0;
          iVar2 = FUN_001ca28c(local_b0[8],&DAT_001f6574);
          lVar5 = -0x26cf9c7074c02167;
          if (iVar2 != 0) {
            lVar5 = -0x7754eaeaa68cdae5;
          }
        }
        else if (lVar4 == 0x32a101a6c34b1b) {
          lVar5 = -0x2fd9e35574318660;
          if (DAT_001f8071 == '\0') {
            lVar5 = -0x36b8c1606a0f4fb5;
          }
        }
      }
      else if (lVar4 < 0x6a51f84ef2c8391) {
        if (lVar4 == 0x2b19b49290db32d) {
          DAT_001f7ee4 = 0;
          lVar4 = FUN_001cac50(local_b0[1],&DAT_001f656c);
          lVar5 = 0x3dcd5b10852da17b;
          if (lVar4 != 0) {
            lVar5 = -0x33894aff3c1fc958;
          }
        }
        else if (lVar4 == 0x4e6726f5a2989f5) {
          _DAT_001f6580 = _DAT_001f6580 ^ 0x7070707070707070;
          uRam00000000001f6588 = uRam00000000001f6588 ^ 0x7070707070707070;
          DAT_001f8079 = '\x01';
          lVar5 = -0x6b8da6ad2c11c608;
        }
      }
      else if (lVar4 == 0x6a51f84ef2c8391) {
        DAT_001f7ed0 = 0;
        lVar5 = -0x17b2c098d4f7cf99;
      }
      else if (lVar4 == 0x88ce58ec9b92ac5) {
        lVar5 = 0x6ae34f182015ea95;
        if (DAT_001f8070 == '\0') {
          lVar5 = -0x3ff3749ae70bcaf7;
        }
      }
      goto LAB_0014a6dc;
    }
    if (lVar4 < 0x3042387015eca79c) {
      if (lVar4 < 0x1d1a7a9eec1590c7) {
        lVar5 = -0x1839da07d8964c35;
        if (((lVar4 != 0x959c6ba81eed576) &&
            (lVar5 = 0x716d85094791635b, lVar4 != 0x17741ddd5c41c0eb)) &&
           (lVar5 = lVar4, lVar4 == 0x19395e45f9e7bc3c)) {
          iVar2 = FUN_001ebe70(0,1,&DAT_001f7ed0);
          lVar5 = -0xf04769c024e5f93;
          if (iVar2 != 0) {
            lVar5 = 0x58df1ffd4f849e54;
          }
        }
      }
      else if (lVar4 < 0x2c1220374010ba6f) {
        lVar5 = -0x3254fd8b76ac1bb9;
        if ((lVar4 != 0x1d1a7a9eec1590c7) && (lVar5 = lVar4, lVar4 == 0x1dcc2eb9363a5e47)) {
          lVar5 = 0x6121076048feb6a3;
        }
      }
      else if (lVar4 == 0x2c1220374010ba6f) {
        iVar2 = FUN_001ebe70(0,1,&DAT_001f7ec8);
        lVar5 = 0x88ce58ec9b92ac5;
        if (iVar2 != 0) {
          lVar5 = -0x3a9668573d49c671;
        }
      }
      else if (lVar4 == 0x2ebd2266c5be6a3a) {
        lVar5 = 0x17741ddd5c41c0eb;
        if (DAT_001f806e == '\0') {
          lVar5 = -0x581936f44b1e4c50;
        }
      }
      goto LAB_0014a6dc;
    }
    if (lVar4 < 0x32eac5725aa67ca6) {
      lVar5 = 0x3ac416beb3df0190;
      if (lVar4 != 0x3042387015eca79c) {
        if (lVar4 == 0x3194729b0de53583) {
          DAT_001f64c0 = DAT_001f64c0 ^ 0x18;
          DAT_001f64c1 = DAT_001f64c1 ^ 0x18;
          DAT_001f64b8 = DAT_001f64b8 ^ 0x1818181818181818;
          DAT_001f806f = '\x01';
          lVar5 = 0x3ac416beb3df0190;
        }
        else {
          lVar5 = lVar4;
          if (lVar4 == 0x31d5c259b1923891) {
            DAT_001f6540 = DAT_001f6540 ^ 0xcb;
            DAT_001f6542 = DAT_001f6542 ^ 0xcb;
            DAT_001f6541 = DAT_001f6541 ^ 0xcb;
            _DAT_001f6530 = _DAT_001f6530 ^ 0xcbcbcbcbcbcbcbcb;
            uRam00000000001f6538 = uRam00000000001f6538 ^ 0xcbcbcbcbcbcbcbcb;
            DAT_001f8075 = '\x01';
            lVar5 = 0x76ea4fcdc5a6178d;
          }
        }
      }
      goto LAB_0014a6dc;
    }
    if (0x34852f5ae3d3ba01 < lVar4) {
      if (lVar4 == 0x34852f5ae3d3ba02) {
        DAT_001f6500 = DAT_001f6500 ^ 0x8e;
        DAT_001f6501 = DAT_001f6501 ^ 0x8e;
        DAT_001f6502 = DAT_001f6502 ^ 0x8e;
        DAT_001f6504 = DAT_001f6504 ^ 0x8e;
        DAT_001f6505 = DAT_001f6505 ^ 0x8e;
        DAT_001f6503 = DAT_001f6503 ^ 0x8e;
        DAT_001f6506 = DAT_001f6506 ^ 0x8e;
        DAT_001f64f8 = DAT_001f64f8 ^ 0x8e8e8e8e8e8e8e8e;
        DAT_001f8073 = '\x01';
        lVar5 = -0x5f9b68e629c5b658;
      }
      else if (lVar4 == 0x37bee2d6b33a776f) {
        lVar5 = -0x4cc3ad166f786130;
      }
      goto LAB_0014a6dc;
    }
    lVar5 = -0x17b2c098d4f7cf99;
    if ((lVar4 == 0x32eac5725aa67ca6) || (lVar5 = lVar4, lVar4 != 0x346e81abbc621d09))
    goto LAB_0014a6dc;
    lVar5 = -0x705e89a8394556f7;
  }
  else {
    if (0x5f5d09e59fa8d2ae < lVar4) {
      if (lVar4 < 0x71451f8aabe724a1) {
        if (lVar4 < 0x65ec5e12754f9f49) {
          lVar5 = -0x3849d29e7f970b85;
          if (lVar4 != 0x5f5d09e59fa8d2af) {
            if (lVar4 == 0x6121076048feb6a3) {
              DAT_001f7ebc = 0;
              puVar6 = puVar1 + -0x80;
              *(undefined **)(puVar1 + -0x80) = &DAT_001f6490;
              *(ulong **)(puVar1 + -0x78) = &DAT_001f64a8;
              *(ulong **)(puVar1 + -0x70) = &DAT_001f64b8;
              *(ulong **)(puVar1 + -0x68) = &DAT_001f64a8;
              *(ulong **)(puVar1 + -0x60) = &DAT_001f64c8;
              *(ulong **)(puVar1 + -0x58) = &DAT_001f64a8;
              *(undefined **)(puVar1 + -0x50) = &DAT_001f64d0;
              *(ulong **)(puVar1 + -0x48) = &DAT_001f64e8;
              *(ulong **)(puVar1 + -0x40) = &DAT_001f64f8;
              *(ulong **)(puVar1 + -0x38) = &DAT_001f64e8;
              *(undefined **)(puVar1 + -0x30) = &DAT_001f6510;
              *(ulong **)(puVar1 + -0x28) = &DAT_001f64e8;
              *(undefined **)(puVar1 + -0x20) = &DAT_001f6530;
              *(ulong **)(puVar1 + -0x18) = &DAT_001f64e8;
              uVar3 = *local_b0;
              *(undefined **)(puVar1 + -0x10) = &DAT_001f6550;
              *(ulong **)(puVar1 + -8) = &DAT_001f64e8;
              local_c0 = puVar6;
              lVar4 = FUN_001cac50(uVar3,&DAT_001f656c);
              puVar1 = puVar6;
              lVar5 = -0x1782b759cff8e8d7;
              if (lVar4 != 0) {
                lVar5 = -0x38c5822fb9e53ba6;
              }
            }
            else {
              lVar5 = lVar4;
              if (lVar4 == 0x657f304fa3b335cf) {
                DAT_001f7ee4 = 0;
                lVar5 = -0x3849d29e7f970b85;
              }
            }
          }
        }
        else if (lVar4 < 0x6aad2fe2c149550e) {
          lVar5 = -0x21f5ae2a3accf7d0;
          if ((lVar4 != 0x65ec5e12754f9f49) && (lVar5 = lVar4, lVar4 == 0x68e88d6e2dbb5888)) {
            DAT_001f7ecc = 0;
            lVar5 = 0x2c1220374010ba6f;
          }
        }
        else {
          lVar5 = -0x41011a133266216;
          if ((lVar4 != 0x6aad2fe2c149550e) && (lVar5 = lVar4, lVar4 == 0x6ae34f182015ea95)) {
            lVar5 = -0x4d2f481fcf1841f6;
          }
        }
      }
      else if (lVar4 < 0x72c59d940d6b5360) {
        lVar5 = -0x221fcfffc80d1ad1;
        if (lVar4 != 0x71451f8aabe724a1) {
          if (lVar4 == 0x716d85094791635b) {
            DAT_001f7ec0 = 0;
            lVar5 = -0x7fda9d1a3e74eac;
          }
          else {
            lVar5 = lVar4;
            if (lVar4 == 0x7299fc55dd3cef46) {
              lVar5 = -0x7f1c7a598b6792a4;
              if (DAT_001f8077 == '\0') {
                lVar5 = 0x55e5e552f05336e1;
              }
            }
          }
        }
      }
      else if (lVar4 < 0x76ea4fcdc5a6178d) {
        if (lVar4 == 0x72c59d940d6b5360) {
          lVar5 = -0x27de3f405865e12a;
          if (DAT_001f8079 == '\0') {
            lVar5 = 0x4e6726f5a2989f5;
          }
        }
        else if (lVar4 == 0x74bc1c50edbf4e60) {
          local_b4 = FUN_0014c95c(local_b0,local_c0,8);
          lVar5 = -0x3977527abdab672d;
        }
      }
      else if (lVar4 == 0x76ea4fcdc5a6178d) {
        DAT_001f7edc = 0;
        lVar5 = 0x5764ac433d2d5cf2;
      }
      else if (lVar4 == 0x7ef9c02c9c97dbab) {
        iVar2 = FUN_001ebe70(0,1,&DAT_001f7ed4);
        lVar5 = 0x4197e837679ca2c6;
        if (iVar2 != 0) {
          lVar5 = 0x4a930f3fc68ef651;
        }
      }
      goto LAB_0014a6dc;
    }
    if (lVar4 < 0x4ce483deee2ffdde) {
      if (lVar4 < 0x41cb8cc32c9a99d2) {
        if (lVar4 == 0x3ac416beb3df0190) {
          DAT_001f7ec4 = 0;
          lVar5 = -0x49db16dfc1c9d6e0;
        }
        else {
          lVar5 = -0x69169bfdb2e7ef65;
          if ((lVar4 != 0x3dcd5b10852da17b) && (lVar5 = lVar4, lVar4 == 0x4197e837679ca2c6)) {
            lVar5 = -0x5367c944fd392264;
            if (DAT_001f8073 == '\0') {
              lVar5 = 0x34852f5ae3d3ba02;
            }
          }
        }
      }
      else if (lVar4 < 0x4a930f3fc68ef651) {
        lVar5 = 0x6a51f84ef2c8391;
        if ((lVar4 != 0x41cb8cc32c9a99d2) && (lVar5 = lVar4, lVar4 == 0x456cfa3e8f698a6b))
        goto LAB_0014a6c4;
      }
      else {
        lVar5 = 0x7ef9c02c9c97dbab;
        if ((lVar4 != 0x4a930f3fc68ef651) && (lVar5 = lVar4, lVar4 == 0x4bfc5b1596793ca6)) {
          lVar5 = -0x9a1a81fe0a9070c;
          if (DAT_001f8074 == '\0') {
            lVar5 = -0x1a4832afb060296f;
          }
        }
      }
      goto LAB_0014a6dc;
    }
    if (lVar4 < 0x55e5e552f05336e1) {
      lVar5 = 0x76ea4fcdc5a6178d;
      if (((lVar4 != 0x4ce483deee2ffdde) &&
          (lVar5 = -0x6ef45c5e1401861d, lVar4 != 0x4f26e81279767f85)) &&
         (lVar5 = lVar4, lVar4 == 0x51323d59b6c06bc6)) {
        DAT_001f64a0 = DAT_001f64a0 ^ 0xa0;
        DAT_001f64a1 = DAT_001f64a1 ^ 0xa0;
        DAT_001f64a2 = DAT_001f64a2 ^ 0xa0;
        DAT_001f64a3 = DAT_001f64a3 ^ 0xa0;
        _DAT_001f6490 = _DAT_001f6490 ^ 0xa0a0a0a0a0a0a0a0;
        uRam00000000001f6498 = uRam00000000001f6498 ^ 0xa0a0a0a0a0a0a0a0;
        DAT_001f806d = '\x01';
        lVar5 = 0x6121076048feb6a3;
      }
      goto LAB_0014a6dc;
    }
    if (0x57e70a255a2091f0 < lVar4) {
      lVar5 = -0x718513c057d4789e;
      if ((lVar4 != 0x57e70a255a2091f1) && (lVar5 = lVar4, lVar4 == 0x58df1ffd4f849e54)) {
        lVar5 = 0x19395e45f9e7bc3c;
      }
      goto LAB_0014a6dc;
    }
    if (lVar4 != 0x55e5e552f05336e1) {
      if (lVar4 == 0x5764ac433d2d5cf2) {
        iVar2 = FUN_001ebe70(0,1,&DAT_001f7ed8);
        lVar5 = 0x4bfc5b1596793ca6;
        if (iVar2 != 0) {
          lVar5 = -0x40076db54239bb0c;
        }
      }
      goto LAB_0014a6dc;
    }
    lVar5 = 0x2b19b49290db32d;
  }
LAB_0014c06c:
  DAT_001f6571 = DAT_001f6571 ^ 200;
  DAT_001f6570 = DAT_001f6570 ^ 200;
  DAT_001f656f = DAT_001f656f ^ 200;
  DAT_001f656e = DAT_001f656e ^ 200;
  DAT_001f656d = DAT_001f656d ^ 200;
  DAT_001f656c = DAT_001f656c ^ 200;
  DAT_001f6572 = DAT_001f6572 ^ 200;
  DAT_001f8077 = '\x01';
  goto LAB_0014a6dc;
}


