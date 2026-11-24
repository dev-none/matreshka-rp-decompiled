// Function: FUN_00166dc8
// Entry: 00166dc8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00166dc8(undefined8 param_1,undefined8 param_2,long *param_3)

{
  int unaff_10000242;
  undefined1 *puVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  int in_w9;
  int iVar5;
  long lVar6;
  undefined1 *unaff_x22;
  undefined1 auStack_c0 [8];
  long local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  int local_9c;
  long local_98;
  
  local_b8 = tpidr_el0;
  local_98 = *(long *)(local_b8 + 0x28);
  puVar1 = auStack_c0;
  lVar4 = 0x3cd18aac7149e636;
  local_b0 = param_1;
  uStack_a8 = param_2;
LAB_00166ef4:
  iVar5 = unaff_10000242;
  iVar3 = in_w9;
  lVar6 = lVar4;
  lVar4 = lVar6;
  in_w9 = iVar5;
  unaff_10000242 = iVar5;
  if (lVar6 < 0x4ac24414845acbd) {
    if (lVar6 < -0x3306ca0dc07f2270) {
      if (lVar6 < -0x558cd843decec0bf) {
        if (lVar6 < -0x676d331335da0be1) {
          if (lVar6 < -0x6f65a01a87b0c97d) {
            lVar4 = -0x727fa09db7372434;
            if (lVar6 != -0x78c8806709e83ba5) {
              if (lVar6 == -0x766b51cd3dfd3191) {
                lVar4 = -0x6f65a01a87b0c97d;
LAB_00168d10:
                DAT_001f58a0 = DAT_001f58a0 ^ 0x3b;
                uRam00000000001f5898 = uRam00000000001f5898 ^ 0x3b3b3b3b3b3b3b3b;
                _DAT_001f5890 = _DAT_001f5890 ^ 0x3b3b3b3b3b3b3b3b;
                DAT_001f7fdd = '\x01';
              }
              else {
                lVar4 = lVar6;
                if (lVar6 == -0x727fa09db7372434) {
                  iVar3 = FUN_001ebe70(0,1,&DAT_001f7f98);
                  lVar4 = -0x5e6472b9fc6a2acd;
                  if (iVar3 != 0) {
                    lVar4 = -0x78c8806709e83ba5;
                  }
                }
              }
            }
          }
          else if (lVar6 < -0x6b5e978e082832c7) {
            if (lVar6 == -0x6f65a01a87b0c97d) {
              DAT_001f7c7c = 0;
              __system_property_get(&DAT_001f5890,unaff_x22);
              lVar6 = FUN_001cda84(unaff_x22);
              lVar4 = 0x7afb963e8c4fa5b3;
              if (lVar6 != 0) {
                lVar4 = -0x2122afdd800e259e;
              }
              param_3[2] = lVar6;
            }
            else if (lVar6 == -0x6f2fb9df6b0b9010) {
              if (*(long *)(local_b8 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
                __stack_chk_fail();
              }
              return iVar3;
            }
          }
          else if (lVar6 == -0x6b5e978e082832c7) {
            iVar3 = FUN_001ebe70(0,1,&DAT_001f7ca0);
            lVar4 = -0x66e7e668bb9149cb;
            if (iVar3 != 0) {
              lVar4 = -0x2acfdc93abc1c77;
            }
          }
          else if (lVar6 == -0x68f692e352d4296b) {
            DAT_001f68d8 = DAT_001f68d8 ^ 0x1a;
            DAT_001f68da = DAT_001f68da ^ 0x1a;
            DAT_001f68d9 = DAT_001f68d9 ^ 0x1a;
            DAT_001f68dc = DAT_001f68dc ^ 0x1a;
            DAT_001f68db = DAT_001f68db ^ 0x1a;
            DAT_001f68dd = DAT_001f68dd ^ 0x1a;
            DAT_001f68d0 = DAT_001f68d0 ^ 0x1a1a1a1a1a1a1a1a;
            DAT_001f80a1 = '\x01';
            lVar4 = -0xea2b1c39c01c174;
          }
          goto LAB_00166ef4;
        }
        if (lVar6 < -0x6248cbfdd056ab51) {
          if (lVar6 == -0x676d331335da0be1) {
            iVar3 = FUN_001ebe70(0,1,&DAT_001f7cb8);
            lVar4 = 0x4e7d4811a6a69225;
            if (iVar3 != 0) {
              lVar4 = -0x558cd843decec0bf;
            }
          }
          else {
            if (lVar6 == -0x66e7e668bb9149cb) {
              lVar4 = -0x28da0d40a89a47f1;
              bVar2 = DAT_001f7fe6 == '\0';
              lVar6 = -0x6248cbfdd056ab51;
              goto LAB_0016902c;
            }
            if (lVar6 == -0x65045a238079e2fb) {
              DAT_001f59a0 = DAT_001f59a0 ^ 0xb3;
              DAT_001f59a1 = DAT_001f59a1 ^ 0xb3;
              DAT_001f59a2 = DAT_001f59a2 ^ 0xb3;
              DAT_001f59a4 = DAT_001f59a4 ^ 0xb3;
              DAT_001f59a3 = DAT_001f59a3 ^ 0xb3;
              _DAT_001f5990 = _DAT_001f5990 ^ 0xb3b3b3b3b3b3b3b3;
              uRam00000000001f5998 = uRam00000000001f5998 ^ 0xb3b3b3b3b3b3b3b3;
              DAT_001f7fed = '\x01';
              lVar4 = -0x1063bf1764de6153;
            }
          }
          goto LAB_00166ef4;
        }
        if (lVar6 < -0x5e6472b9fc6a2acd) {
          if (lVar6 == -0x6248cbfdd056ab51) {
            DAT_001f5930 = DAT_001f5930 ^ 100;
            DAT_001f5931 = DAT_001f5931 ^ 100;
            _DAT_001f5920 = _DAT_001f5920 ^ 0x6464646464646464;
            uRam00000000001f5928 = uRam00000000001f5928 ^ 0x6464646464646464;
            DAT_001f7fe6 = '\x01';
            lVar4 = -0x30c9066fd0ad30ce;
          }
          else if (lVar6 == -0x6233aa1d257efd53) {
            iVar3 = FUN_001ebe70(0,1,&DAT_001f7cbc);
            lVar4 = 0x14b13b0443bf7c1c;
            if (iVar3 != 0) {
              lVar4 = -0x2c26a47ae70253f5;
            }
          }
          goto LAB_00166ef4;
        }
        if (lVar6 != -0x5e6472b9fc6a2acd) {
          if (lVar6 == -0x5b897bef210aea79) {
            DAT_001f7c5c = 0;
            __system_property_get(&DAT_001f5828,unaff_x22);
            lVar6 = FUN_001cda84(unaff_x22);
            lVar4 = -0x171a03e05e5df880;
            if (lVar6 != 0) {
              lVar4 = 0x472a44d09f8da76;
            }
            param_3[8] = lVar6;
          }
          goto LAB_00166ef4;
        }
        lVar4 = -0x2d15558437c2de2;
        bVar2 = DAT_001f80a1 == '\0';
        lVar6 = -0x68f692e352d4296b;
        goto LAB_0016902c;
      }
      if (lVar6 < -0x430b18da3dee264e) {
        if (lVar6 < -0x47f2082efbc193b7) {
          lVar4 = -0x676d331335da0be1;
          if (((lVar6 != -0x558cd843decec0bf) &&
              (lVar4 = 0x48982753e5cd0daa, lVar6 != -0x51296d2766edbec4)) &&
             (lVar4 = lVar6, lVar6 == -0x4cdee8d6726959e5)) goto LAB_00166ee0;
        }
        else if (lVar6 == -0x47f2082efbc193b7) {
          DAT_001f6900 = DAT_001f6900 ^ 0x3c;
          DAT_001f6901 = DAT_001f6901 ^ 0x3c;
          DAT_001f6902 = DAT_001f6902 ^ 0x3c;
          DAT_001f6903 = DAT_001f6903 ^ 0x3c;
          DAT_001f6904 = DAT_001f6904 ^ 0x3c;
          DAT_001f6905 = DAT_001f6905 ^ 0x3c;
          DAT_001f6906 = DAT_001f6906 ^ 0x3c;
          _DAT_001f68f0 = _DAT_001f68f0 ^ 0x3c3c3c3c3c3c3c3c;
          uRam00000000001f68f8 = uRam00000000001f68f8 ^ 0x3c3c3c3c3c3c3c3c;
          DAT_001f80a3 = '\x01';
          lVar4 = 0x4ac24414845acbd;
        }
        else {
          lVar4 = 0x7eedbe3fbdeb1539;
          if ((lVar6 != -0x47426002ba07700b) && (lVar4 = lVar6, lVar6 == -0x471a3b1642cffb6a)) {
LAB_00168740:
            lVar4 = 0x6978414fcbca70c1;
          }
        }
        goto LAB_00166ef4;
      }
      if (lVar6 < -0x3e25c1b4f8aed8b2) {
        lVar4 = 0x4ac24414845acbd;
        if (((lVar6 != -0x430b18da3dee264e) &&
            (lVar4 = -0x3889b45e665fb9e3, lVar6 != -0x4133099a83f533dd)) &&
           (lVar4 = lVar6, lVar6 == -0x3f9cf6d0b81b0b36)) {
          _DAT_001f5960 = _DAT_001f5960 ^ 0x8f8f8f8f8f8f8f8f;
          uRam00000000001f5968 = uRam00000000001f5968 ^ 0x8f8f8f8f8f8f8f8f;
          DAT_001f7fe9 = '\x01';
          lVar4 = -0x3889b45e665fb9e3;
        }
        goto LAB_00166ef4;
      }
      if (-0x3889b45e665fb9e4 < lVar6) {
        if (lVar6 == -0x3889b45e665fb9e3) {
          DAT_001f7cac = 0;
          __system_property_get(&DAT_001f5960,unaff_x22);
          lVar6 = FUN_001cda84(unaff_x22);
          lVar4 = 0x54253783887fbae6;
          if (lVar6 != 0) {
            lVar4 = 0x590d25f9ed69268;
          }
          *param_3 = lVar6;
        }
        else if (lVar6 == -0x34ca007ab046a8d5) goto LAB_00168740;
        goto LAB_00166ef4;
      }
      lVar4 = 0x4393ac1cc368c0b7;
      if ((lVar6 == -0x3e25c1b4f8aed8b2) || (lVar4 = lVar6, lVar6 != -0x3cd793e95987cab3))
      goto LAB_00166ef4;
    }
    else if (lVar6 < -0x1a696100e6824833) {
      if (lVar6 < -0x26ba0549265b772c) {
        if (lVar6 < -0x2de5f243befd46f0) {
          if (lVar6 == -0x3306ca0dc07f2270) {
            lVar6 = 0x13f504e239c0f68f;
            bVar2 = DAT_001f7fdc == '\0';
            lVar4 = -0x47426002ba07700b;
            goto LAB_00168e50;
          }
          lVar4 = 0x3f76a9a1fe1a6afa;
          if ((lVar6 != -0x31602ae551e2c1b5) && (lVar4 = lVar6, lVar6 == -0x30c9066fd0ad30ce)) {
            DAT_001f7ca0 = 0;
            __system_property_get(&DAT_001f5920,unaff_x22);
            lVar6 = FUN_001cda84(unaff_x22);
            lVar4 = -0x26ba0549265b772c;
            if (lVar6 != 0) {
              lVar4 = 0x344b2a974f05c09a;
            }
            param_3[4] = lVar6;
          }
        }
        else if (lVar6 == -0x2de5f243befd46f0) {
          iVar3 = FUN_001ebe70(0,1,&DAT_001f7fa0);
          lVar4 = 0x66ea8beb8c5debdc;
          if (iVar3 != 0) {
            lVar4 = -0xbd7ca894e983dda;
          }
        }
        else {
          lVar4 = -0x6233aa1d257efd53;
          if ((lVar6 != -0x2c26a47ae70253f5) && (lVar4 = lVar6, lVar6 == -0x28da0d40a89a47f1)) {
            lVar4 = -0x30c9066fd0ad30ce;
          }
        }
        goto LAB_00166ef4;
      }
      if (lVar6 < -0x24344ed4099ecf1f) {
        if (lVar6 != -0x26ba0549265b772c) {
          lVar4 = 0x45259f89eeba535a;
          if ((lVar6 != -0x26a1648718e7fdc7) && (lVar4 = lVar6, lVar6 == -0x25838fac14456094)) {
            lVar4 = 0x4393ac1cc368c0b7;
          }
          goto LAB_00166ef4;
        }
      }
      else {
        if (lVar6 < -0x1f52ce3ecaa46f27) {
          lVar4 = -0x6b5e978e082832c7;
          if ((lVar6 != -0x24344ed4099ecf1f) && (lVar4 = lVar6, lVar6 == -0x2122afdd800e259e)) {
            lVar4 = -0x676d331335da0be1;
          }
          goto LAB_00166ef4;
        }
        if (lVar6 != -0x1f52ce3ecaa46f27) {
          if (lVar6 == -0x1e79668475f30d22) {
            iVar3 = FUN_001ebe70(0,1,&DAT_001f7c7c);
            lVar4 = 0x29a578961b50a7d5;
            if (iVar3 != 0) {
              lVar4 = 0x1665bfaca7474ccc;
            }
          }
          goto LAB_00166ef4;
        }
      }
    }
    else if (lVar6 < -0x8aee467b12f153a) {
      if (-0xea2b1c39c01c175 < lVar6) {
        if (lVar6 < -0xc6bb4823b5a5783) {
          if (lVar6 == -0xea2b1c39c01c174) {
            DAT_001f7f98 = 0;
            __system_property_get(&DAT_001f68d0,unaff_x22);
            lVar6 = FUN_001cda84(unaff_x22);
            lVar4 = 0x6776ca8143dc62d5;
            if (lVar6 != 0) {
              lVar4 = 0x522822ad32d4f2f3;
            }
            param_3[0xb] = lVar6;
          }
          else if (lVar6 == -0xdb03496ce8582aa) {
            lVar4 = 0x123258930a1fc6ec;
          }
        }
        else if (lVar6 == -0xc6bb4823b5a5783) {
          in_w9 = FUN_0016a548(local_b0,uStack_a8,param_3);
          lVar4 = -0x6f2fb9df6b0b9010;
          unaff_10000242 = in_w9;
        }
        else if (lVar6 == -0xbd7ca894e983dda) {
LAB_00168558:
          lVar4 = -0x2de5f243befd46f0;
        }
        goto LAB_00166ef4;
      }
      if (lVar6 == -0x1a696100e6824833) {
        iVar3 = FUN_001ebe70(0,1,&DAT_001f7cdc);
        lVar4 = 0x5d80f3928ea4eb6f;
        if (iVar3 != 0) {
          lVar4 = 0x541a087ef9d7269f;
        }
        goto LAB_00166ef4;
      }
      if (lVar6 != -0x171a03e05e5df880) {
        if (lVar6 == -0x1063bf1764de6153) {
          DAT_001f7cbc = 0;
          __system_property_get(&DAT_001f5990,unaff_x22);
          lVar6 = FUN_001cda84(unaff_x22);
          lVar4 = -0x1f52ce3ecaa46f27;
          if (lVar6 != 0) {
            lVar4 = 0xda5550d29241fb;
          }
          param_3[6] = lVar6;
        }
        goto LAB_00166ef4;
      }
    }
    else {
      if (lVar6 < 0xda5550d29241fb) {
        lVar4 = 0x48982753e5cd0daa;
        if (((lVar6 != -0x8aee467b12f153a) &&
            (lVar4 = -0xea2b1c39c01c174, lVar6 != -0x2d15558437c2de2)) &&
           (lVar4 = lVar6, lVar6 == -0x2acfdc93abc1c77)) {
          lVar4 = -0x6b5e978e082832c7;
        }
        goto LAB_00166ef4;
      }
      if (0x2b7e63096ef2c23 < lVar6) {
        lVar4 = -0x6f65a01a87b0c97d;
        if ((lVar6 != 0x2b7e63096ef2c24) && (lVar4 = lVar6, lVar6 == 0x472a44d09f8da76))
        goto LAB_00168558;
        goto LAB_00166ef4;
      }
      lVar4 = 0xd652f89c394f5b0;
      if ((lVar6 == 0xda5550d29241fb) || (lVar4 = lVar6, lVar6 != 0x29d442ead523913))
      goto LAB_00166ef4;
    }
LAB_00166ee0:
    lVar4 = -0x6f2fb9df6b0b9010;
    in_w9 = 2;
    unaff_10000242 = 2;
    goto LAB_00166ef4;
  }
  if (lVar6 < 0x4393ac1cc368c0b7) {
    if (0x234184029134c220 < lVar6) {
      if (lVar6 < 0x382d99b17a3ba2fb) {
        if (lVar6 < 0x29a578961b50a7d5) {
          if (lVar6 == 0x234184029134c221) {
            DAT_001f5a30 = DAT_001f5a30 ^ 0xe9;
            DAT_001f5a32 = DAT_001f5a32 ^ 0xe9;
            DAT_001f5a33 = DAT_001f5a33 ^ 0xe9;
            DAT_001f5a31 = DAT_001f5a31 ^ 0xe9;
            _DAT_001f5a20 = _DAT_001f5a20 ^ 0xe9e9e9e9e9e9e9e9;
            uRam00000000001f5a28 = uRam00000000001f5a28 ^ 0xe9e9e9e9e9e9e9e9;
            DAT_001f7ff5 = '\x01';
            lVar4 = 0x7ffb4df2c4df0556;
          }
          else {
            if (lVar6 == 0x261e64711f513d72) {
              lVar4 = 0x382d99b17a3ba2fb;
              bVar2 = DAT_001f7fd5 == '\0';
              lVar6 = 0x37f87ce28f3b20c0;
              goto LAB_0016902c;
            }
            if (lVar6 == 0x288ba982629e6665) {
              lVar4 = 0x7ffb4df2c4df0556;
            }
          }
          goto LAB_00166ef4;
        }
        in_w9 = iVar3;
        if (0x344b2a974f05c099 < lVar6) {
          lVar4 = -0x1a696100e6824833;
          unaff_10000242 = iVar3;
          if ((lVar6 != 0x344b2a974f05c09a) && (lVar4 = lVar6, lVar6 == 0x37f87ce28f3b20c0)) {
            DAT_001f5830 = DAT_001f5830 ^ 0x76;
            DAT_001f5832 = DAT_001f5832 ^ 0x76;
            DAT_001f5833 = DAT_001f5833 ^ 0x76;
            DAT_001f5831 = DAT_001f5831 ^ 0x76;
            DAT_001f5828 = DAT_001f5828 ^ 0x7676767676767676;
            DAT_001f7fd5 = '\x01';
            lVar4 = -0x5b897bef210aea79;
          }
          goto LAB_00166ef4;
        }
        if (lVar6 == 0x29a578961b50a7d5) {
          lVar6 = 0x67fde0233e5cde86;
          bVar2 = DAT_001f7fdd == '\0';
          lVar4 = 0x639239dd366d6fb;
          goto LAB_00168e50;
        }
        if (lVar6 != 0x2ecb99db38cebc30) goto LAB_00166ef4;
      }
      else {
        if (lVar6 < 0x3cea2d11fa2397ad) {
          lVar4 = -0x5b897bef210aea79;
          if (lVar6 != 0x382d99b17a3ba2fb) {
            if (lVar6 == 0x3c3c75e84fbae786) {
              lVar6 = -0x3f9cf6d0b81b0b36;
              bVar2 = DAT_001f7fe9 == '\0';
              lVar4 = -0x4133099a83f533dd;
LAB_00168e50:
              in_w9 = iVar5;
              if (bVar2) {
                lVar4 = lVar6;
              }
            }
            else {
              lVar4 = lVar6;
              if (lVar6 == 0x3cd18aac7149e636) {
                lVar4 = 0x3f76a9a1fe1a6afa;
              }
            }
          }
          goto LAB_00166ef4;
        }
        if (lVar6 < 0x4013354be73ff69c) {
          if (lVar6 == 0x3cea2d11fa2397ad) goto LAB_00166ee0;
          if (lVar6 == 0x3f76a9a1fe1a6afa) {
            iVar3 = FUN_001ebe70(0,1,&DAT_001f7c6c);
            lVar4 = 0x4940e79e038fd0a8;
            if (iVar3 != 0) {
              lVar4 = -0x31602ae551e2c1b5;
            }
          }
          goto LAB_00166ef4;
        }
        if (lVar6 != 0x4013354be73ff69c) {
          if (lVar6 == 0x40df40290285ba8b) {
            DAT_001f7c7c = 0;
            __system_property_get(&DAT_001f5890,unaff_x22);
            lVar6 = FUN_001cda84(unaff_x22);
            lVar4 = 0x3cea2d11fa2397ad;
            if (lVar6 != 0) {
              lVar4 = -0x24344ed4099ecf1f;
            }
            param_3[3] = lVar6;
          }
          goto LAB_00166ef4;
        }
      }
      goto LAB_00166ee0;
    }
    if (lVar6 < 0x11f17c325cf3c828) {
      if (lVar6 < 0xa160e89f7658b73) {
        if (lVar6 == 0x4ac24414845acbd) {
          DAT_001f7fa0 = 0;
          __system_property_get(&DAT_001f68f0,unaff_x22);
          lVar6 = FUN_001cda84(unaff_x22);
          lVar4 = 0x7adf9ff5b5ff1e58;
          if (lVar6 != 0) {
            lVar4 = 0x60f9c54ed959fc4e;
          }
          param_3[0xd] = lVar6;
        }
        else {
          lVar4 = -0x727fa09db7372434;
          if ((lVar6 != 0x590d25f9ed69268) && (lVar4 = lVar6, lVar6 == 0x639239dd366d6fb)) {
            lVar4 = 0x40df40290285ba8b;
          }
        }
      }
      else {
        lVar4 = -0x6f2fb9df6b0b9010;
        in_w9 = local_9c;
        unaff_10000242 = local_9c;
        if (lVar6 != 0xa160e89f7658b73) {
          if (lVar6 == 0xa3fa18b9efa88c6) {
            DAT_001f68e8 = DAT_001f68e8 ^ 0x43;
            DAT_001f68ea = DAT_001f68ea ^ 0x43;
            DAT_001f68e9 = DAT_001f68e9 ^ 0x43;
            DAT_001f68ec = DAT_001f68ec ^ 0x43;
            DAT_001f68eb = DAT_001f68eb ^ 0x43;
            DAT_001f68ed = DAT_001f68ed ^ 0x43;
            DAT_001f68e0 = DAT_001f68e0 ^ 0x4343434343434343;
            DAT_001f80a2 = '\x01';
            lVar4 = 0x123258930a1fc6ec;
            in_w9 = iVar5;
            unaff_10000242 = iVar5;
          }
          else {
            lVar4 = lVar6;
            in_w9 = iVar5;
            unaff_10000242 = iVar5;
            if (lVar6 == 0xd652f89c394f5b0) {
              iVar3 = FUN_001ebe70(0,1,&DAT_001f7f9c);
              lVar4 = 0x439fe389791501d9;
              if (iVar3 != 0) {
                lVar4 = 0x50b060b4a2e9a704;
              }
            }
          }
        }
      }
      goto LAB_00166ef4;
    }
    if (lVar6 < 0x13f504e239c0f68f) {
      if (lVar6 == 0x11f17c325cf3c828) {
        DAT_001f5988 = DAT_001f5988 ^ 0x18;
        DAT_001f598a = DAT_001f598a ^ 0x18;
        DAT_001f5989 = DAT_001f5989 ^ 0x18;
        DAT_001f598c = DAT_001f598c ^ 0x18;
        DAT_001f598b = DAT_001f598b ^ 0x18;
        DAT_001f598d = DAT_001f598d ^ 0x18;
        DAT_001f5980 = DAT_001f5980 ^ 0x1818181818181818;
        DAT_001f7fec = '\x01';
        lVar4 = 0x14e55595f7d21938;
      }
      else if (lVar6 == 0x123258930a1fc6ec) {
        DAT_001f7f9c = 0;
        __system_property_get(&DAT_001f68e0,unaff_x22);
        lVar6 = FUN_001cda84(unaff_x22);
        lVar4 = 0x29d442ead523913;
        if (lVar6 != 0) {
          lVar4 = -0x25838fac14456094;
        }
        param_3[7] = lVar6;
      }
      else if (lVar6 == 0x13439fbbb70ee0a0) {
        lVar4 = 0x45259f89eeba535a;
      }
      goto LAB_00166ef4;
    }
    if (0x14e55595f7d21937 < lVar6) {
      if (lVar6 == 0x14e55595f7d21938) {
        DAT_001f7cb8 = 0;
        __system_property_get(&DAT_001f5980,unaff_x22);
        lVar6 = FUN_001cda84(unaff_x22);
        lVar4 = -0x3cd793e95987cab3;
        if (lVar6 != 0) {
          lVar4 = 0x13439fbbb70ee0a0;
        }
        param_3[10] = lVar6;
      }
      else if (lVar6 == 0x1665bfaca7474ccc) {
LAB_00168674:
        lVar4 = -0x1e79668475f30d22;
      }
      goto LAB_00166ef4;
    }
    if (lVar6 == 0x13f504e239c0f68f) {
      _DAT_001f5870 = _DAT_001f5870 ^ 0x2b2b2b2b2b2b2b2b;
      uRam00000000001f5878 = uRam00000000001f5878 ^ 0x2b2b2b2b2b2b2b2b;
      s_JH__YNY__001f5880._0_8_ = s_JH__YNY__001f5880._0_8_ ^ 0x2b2b2b2b2b2b2b2b;
      DAT_001f7fdc = '\x01';
      lVar4 = 0x7eedbe3fbdeb1539;
      goto LAB_00166ef4;
    }
    if (lVar6 != 0x14b13b0443bf7c1c) goto LAB_00166ef4;
    lVar4 = 0x597d845e9c1c9d11;
    bVar2 = DAT_001f7fed == '\0';
    lVar6 = -0x65045a238079e2fb;
  }
  else if (lVar6 < 0x597d845e9c1c9d11) {
    if (lVar6 < 0x4be5f4acbdd6fdbb) {
      if (lVar6 < 0x4665ab5fc91fd384) {
        if (lVar6 == 0x4393ac1cc368c0b7) {
          iVar3 = FUN_001ebe70(0,1,&DAT_001f7c7c);
          lVar4 = 0x73f4af3f0a5707e3;
          if (iVar3 != 0) {
            lVar4 = -0x3e25c1b4f8aed8b2;
          }
        }
        else {
          if (lVar6 == 0x439fe389791501d9) {
            lVar6 = 0xa3fa18b9efa88c6;
            bVar2 = DAT_001f80a2 == '\0';
            lVar4 = -0xdb03496ce8582aa;
            goto LAB_00168e50;
          }
          if (lVar6 == 0x45259f89eeba535a) {
            iVar3 = FUN_001ebe70(0,1,&DAT_001f7c5c);
            lVar4 = 0x261e64711f513d72;
            if (iVar3 != 0) {
              lVar4 = -0x26a1648718e7fdc7;
            }
          }
        }
        goto LAB_00166ef4;
      }
      lVar4 = 0x14e55595f7d21938;
      if (lVar6 == 0x4665ab5fc91fd384) goto LAB_00166ef4;
      if (lVar6 == 0x48982753e5cd0daa) {
        iVar3 = FUN_001ebe70(0,1,&DAT_001f7cac);
        lVar4 = 0x3c3c75e84fbae786;
        if (iVar3 != 0) {
          lVar4 = -0x8aee467b12f153a;
        }
        goto LAB_00166ef4;
      }
      lVar4 = lVar6;
      if (lVar6 != 0x4940e79e038fd0a8) goto LAB_00166ef4;
      lVar4 = 0x4be5f4acbdd6fdbb;
      bVar2 = DAT_001f7fd9 == '\0';
      lVar6 = 0x7447552354eb0556;
    }
    else {
      if (0x522822ad32d4f2f2 < lVar6) {
        if (lVar6 < 0x54253783887fbae6) {
          lVar4 = -0x6233aa1d257efd53;
          if ((lVar6 != 0x522822ad32d4f2f3) && (lVar4 = lVar6, lVar6 == 0x541a087ef9d7269f)) {
            lVar4 = -0x1a696100e6824833;
          }
        }
        else {
          if (lVar6 == 0x54253783887fbae6) goto LAB_00166ee0;
          if (lVar6 == 0x55062241e0c9fd49) goto LAB_00168674;
        }
        goto LAB_00166ef4;
      }
      lVar4 = 0x64e75caf1e877752;
      if (lVar6 == 0x4be5f4acbdd6fdbb) goto LAB_00166ef4;
      if (lVar6 != 0x4e7d4811a6a69225) {
        lVar4 = lVar6;
        if (lVar6 == 0x50b060b4a2e9a704) {
          lVar4 = 0xd652f89c394f5b0;
        }
        goto LAB_00166ef4;
      }
      lVar4 = 0x4665ab5fc91fd384;
      bVar2 = DAT_001f7fec == '\0';
      lVar6 = 0x11f17c325cf3c828;
    }
  }
  else if (lVar6 < 0x6978414fcbca70c1) {
    if (lVar6 < 0x64e75caf1e877752) {
      lVar4 = -0x1063bf1764de6153;
      if (lVar6 == 0x597d845e9c1c9d11) goto LAB_00166ef4;
      if (lVar6 != 0x5d80f3928ea4eb6f) {
        lVar4 = lVar6;
        if (lVar6 == 0x60f9c54ed959fc4e) {
          local_9c = FUN_00169198(local_b0,uStack_a8,param_3);
          lVar4 = -0xc6bb4823b5a5783;
          if (local_9c != 0) {
            lVar4 = 0xa160e89f7658b73;
          }
        }
        goto LAB_00166ef4;
      }
      lVar4 = 0x288ba982629e6665;
      bVar2 = DAT_001f7ff5 == '\0';
      lVar6 = 0x234184029134c221;
    }
    else {
      if (0x6776ca8143dc62d4 < lVar6) {
        if (lVar6 == 0x6776ca8143dc62d5) goto LAB_00166ee0;
        if (lVar6 == 0x67fde0233e5cde86) {
          lVar4 = 0x40df40290285ba8b;
          goto LAB_00168d10;
        }
        goto LAB_00166ef4;
      }
      if (lVar6 == 0x64e75caf1e877752) {
        DAT_001f7c6c = 0;
        unaff_x22 = puVar1 + -0x60;
        *(undefined8 *)(puVar1 + -0xc) = 0;
        *(undefined8 *)(puVar1 + -0x14) = 0;
        *(undefined8 *)(puVar1 + -0x48) = 0;
        *(undefined8 *)(puVar1 + -0x50) = 0;
        *(undefined8 *)(puVar1 + -0x38) = 0;
        *(undefined8 *)(puVar1 + -0x40) = 0;
        *(undefined8 *)(puVar1 + -0x28) = 0;
        *(undefined8 *)(puVar1 + -0x30) = 0;
        *(undefined8 *)(puVar1 + -0x18) = 0;
        *(undefined8 *)(puVar1 + -0x20) = 0;
        *(undefined8 *)(puVar1 + -0x58) = 0;
        *(undefined8 *)(puVar1 + -0x60) = 0;
        __system_property_get(&DAT_001f5848,unaff_x22);
        lVar6 = FUN_001cda84(unaff_x22);
        lVar4 = 0x2ecb99db38cebc30;
        if (lVar6 != 0) {
          lVar4 = -0x471a3b1642cffb6a;
        }
        param_3[9] = lVar6;
        puVar1 = unaff_x22;
        goto LAB_00166ef4;
      }
      if (lVar6 != 0x66ea8beb8c5debdc) goto LAB_00166ef4;
      lVar4 = -0x430b18da3dee264e;
      bVar2 = DAT_001f80a3 == '\0';
      lVar6 = -0x47f2082efbc193b7;
    }
  }
  else {
    if (0x7adf9ff5b5ff1e57 < lVar6) {
      if (0x7eedbe3fbdeb1538 < lVar6) {
        if (lVar6 == 0x7eedbe3fbdeb1539) {
          DAT_001f7c78 = 0;
          __system_property_get(&DAT_001f5870,unaff_x22);
          lVar6 = FUN_001cda84(unaff_x22);
          lVar4 = 0x4013354be73ff69c;
          if (lVar6 != 0) {
            lVar4 = 0x55062241e0c9fd49;
          }
          param_3[1] = lVar6;
        }
        else if (lVar6 == 0x7ffb4df2c4df0556) {
          DAT_001f7cdc = 0;
          __system_property_get(&DAT_001f5a20,unaff_x22);
          lVar6 = FUN_001cda84(unaff_x22);
          lVar4 = -0x4cdee8d6726959e5;
          if (lVar6 != 0) {
            lVar4 = -0x51296d2766edbec4;
          }
          param_3[5] = lVar6;
        }
        goto LAB_00166ef4;
      }
      if (lVar6 != 0x7adf9ff5b5ff1e58) {
        if (lVar6 == 0x7afb963e8c4fa5b3) goto LAB_00166ee0;
        goto LAB_00166ef4;
      }
      goto LAB_00166ee0;
    }
    if (lVar6 == 0x6978414fcbca70c1) {
      iVar3 = FUN_001ebe70(0,1,&DAT_001f7c78);
      lVar4 = -0x3306ca0dc07f2270;
      if (iVar3 != 0) {
        lVar4 = -0x34ca007ab046a8d5;
      }
      goto LAB_00166ef4;
    }
    if (lVar6 != 0x73f4af3f0a5707e3) {
      if (lVar6 == 0x7447552354eb0556) {
        DAT_001f5850 = DAT_001f5850 ^ 0xe;
        DAT_001f5852 = DAT_001f5852 ^ 0xe;
        DAT_001f5851 = DAT_001f5851 ^ 0xe;
        DAT_001f5854 = DAT_001f5854 ^ 0xe;
        DAT_001f5853 = DAT_001f5853 ^ 0xe;
        DAT_001f5855 = DAT_001f5855 ^ 0xe;
        DAT_001f5848 = DAT_001f5848 ^ 0xe0e0e0e0e0e0e0e;
        DAT_001f7fd9 = '\x01';
        lVar4 = 0x64e75caf1e877752;
      }
      goto LAB_00166ef4;
    }
    lVar4 = 0x2b7e63096ef2c24;
    bVar2 = DAT_001f7fdd == '\0';
    lVar6 = -0x766b51cd3dfd3191;
  }
LAB_0016902c:
  if (bVar2) {
    lVar4 = lVar6;
  }
  goto LAB_00166ef4;
}


