// Function: FUN_00183efc
// Entry: 00183efc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00183efc(int *param_1,long *param_2,long param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x27;
  long local_90;
  int local_88;
  int local_84;
  int local_74;
  
  lVar1 = -0x3e294bb2522cdf24;
  if (param_3 != 0) {
    lVar1 = 0x73b42d81576c71ac;
  }
  lVar3 = -0x6503fc63f7f61b60;
LAB_00183ff8:
  do {
    while (lVar4 = lVar3, lVar3 = lVar4, -0x15245ebc9045f87e < lVar4) {
      if (lVar4 < 0x5af7a32f612e39f2) {
        if (lVar4 < 0x3f4498ba434567ad) {
          if (lVar4 < 0x1d67db5cc7f44335) {
            if (lVar4 == -0x15245ebc9045f87d) {
              DAT_001f6b00 = DAT_001f6b00 ^ 0x60;
              DAT_001f6b01 = DAT_001f6b01 ^ 0x60;
              DAT_001f6b02 = DAT_001f6b02 ^ 0x60;
              DAT_001f6b03 = DAT_001f6b03 ^ 0x60;
              DAT_001f6b04 = DAT_001f6b04 ^ 0x60;
              _DAT_001f6af0 = _DAT_001f6af0 ^ 0x6060606060606060;
              uRam00000000001f6af8 = uRam00000000001f6af8 ^ 0x6060606060606060;
              DAT_001f8227 = '\x01';
              lVar3 = -0x20c5bb03064befa6;
            }
            else if (lVar4 == 0xec8cc3841e1e128) {
              local_74 = 0x19;
              goto LAB_00183fe4;
            }
          }
          else {
            lVar3 = -0x1ff40bdd46dd35e2;
            if (((lVar4 != 0x1d67db5cc7f44335) &&
                (lVar3 = -0x1ceaace3f521fc47, lVar4 != 0x3df99279abb85227)) &&
               (lVar3 = lVar4, lVar4 == 0x1e18aa2bc7f7ae77)) {
              return;
            }
          }
        }
        else if (lVar4 < 0x40f420e97b2cab77) {
          if (lVar4 == 0x3f4498ba434567ad) {
            local_88 = 0x19;
            goto LAB_00184984;
          }
          if (lVar4 == 0x40e59449750ab2a8) {
            iVar2 = FUN_001ebe70(0,1,&DAT_001f8168);
            lVar3 = 0x4887996e07583970;
            if (iVar2 != 0) {
              lVar3 = 0x60072c6cddec3008;
            }
          }
        }
        else if (lVar4 == 0x40f420e97b2cab77) {
          local_74 = 0xf;
LAB_00183fe4:
          lVar3 = 0x60a7aef33609697b;
        }
        else if (lVar4 == 0x4887996e07583970) {
          lVar3 = 0x1d67db5cc7f44335;
          if (DAT_001f8243 == '\0') {
            lVar3 = -0x4647da1b3858b7e5;
          }
        }
        else if (lVar4 == 0x4f4c76b765241f3c) {
          lVar3 = -0x1ceaace3f521fc47;
        }
      }
      else if (lVar4 < 0x644a746ad9c46c66) {
        if (lVar4 < 0x60072c6cddec3008) {
          if (lVar4 == 0x5af7a32f612e39f2) {
            local_88 = 0xf;
LAB_00184984:
            lVar3 = -0x52ea9a0a449fd400;
          }
          else if (lVar4 == 0x5d1a0717f3c5623d) {
            iVar2 = FUN_001ebe70(0,1,&DAT_001f80f0);
            lVar3 = -0x6626c1cef8d82465;
            if (iVar2 != 0) {
              lVar3 = -0x61844598996e2fbb;
            }
          }
        }
        else {
          lVar3 = 0x40e59449750ab2a8;
          if ((lVar4 != 0x60072c6cddec3008) && (lVar3 = lVar4, lVar4 == 0x60a7aef33609697b)) {
            *param_1 = local_74;
            lVar3 = -0x1ceaace3f521fc47;
          }
        }
      }
      else if (lVar4 < 0x6f4adb1894b7c458) {
        if (lVar4 == 0x644a746ad9c46c66) {
          lVar3 = -0x52f56cc7e1cbc4a9;
          if (unaff_x27 != 0) {
            lVar3 = -0x232f93966791ea1f;
          }
        }
        else if (lVar4 == 0x6456fddd0cf1342a) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          lVar3 = -0x2392b4eeb48af7cd;
          if (unaff_x27 != 0) {
            lVar3 = 0x4f4c76b765241f3c;
          }
          *param_1 = 0xf;
        }
      }
      else if (lVar4 == 0x6f4adb1894b7c458) {
        lVar3 = (**(code **)(*param_2 + 0x110))(param_2,param_3,local_90);
        *param_4 = lVar3;
        lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar3 = -0x3a871589c752e65f;
        if (lVar4 != 0) {
          lVar3 = 0x3f4498ba434567ad;
        }
      }
      else if (lVar4 == 0x73b42d81576c71ac) {
        unaff_x27 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
        lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar3 = 0x644a746ad9c46c66;
        if (lVar4 != 0) {
          lVar3 = 0x6456fddd0cf1342a;
        }
      }
      else if (lVar4 == 0x752188bc91beead4) {
        lVar3 = 0x1e18aa2bc7f7ae77;
      }
    }
    if (lVar4 < -0x3a871589c752e65f) {
      if (lVar4 < -0x52f56cc7e1cbc4a9) {
        if (lVar4 < -0x61844598996e2fbb) {
          if (lVar4 == -0x6626c1cef8d82465) {
            lVar3 = -0x4d8ee04347ed08b1;
            if (DAT_001f8227 == '\0') {
              lVar3 = -0x15245ebc9045f87d;
            }
          }
          else if (lVar4 == -0x6503fc63f7f61b60) {
            lVar3 = lVar1;
          }
        }
        else {
          lVar3 = 0x5d1a0717f3c5623d;
          if ((lVar4 != -0x61844598996e2fbb) && (lVar3 = lVar4, lVar4 == -0x5835ae904717120c)) {
            *param_1 = local_84;
            lVar3 = -0x2f8633c4c130d097;
          }
        }
        goto LAB_00183ff8;
      }
      if (lVar4 < -0x4d8ee04347ed08b1) {
        if (lVar4 != -0x52f56cc7e1cbc4a9) {
          if (lVar4 == -0x52ea9a0a449fd400) {
            (**(code **)(*param_2 + 0x80))(param_2);
            (**(code **)(*param_2 + 0x88))(param_2);
            local_74 = local_88;
            goto LAB_00183fe4;
          }
          goto LAB_00183ff8;
        }
        local_84 = 0xf;
      }
      else {
        lVar3 = -0x20c5bb03064befa6;
        if (lVar4 == -0x4d8ee04347ed08b1) goto LAB_00183ff8;
        if (lVar4 == -0x4647da1b3858b7e5) {
          DAT_001f6e10 = DAT_001f6e10 ^ 0xcf;
          DAT_001f6e11 = DAT_001f6e11 ^ 0xcf;
          DAT_001f6e12 = DAT_001f6e12 ^ 0xcf;
          DAT_001f6e14 = DAT_001f6e14 ^ 0xcf;
          DAT_001f6e15 = DAT_001f6e15 ^ 0xcf;
          DAT_001f6e13 = DAT_001f6e13 ^ 0xcf;
          DAT_001f6e16 = DAT_001f6e16 ^ 0xcf;
          DAT_001f6e08 = DAT_001f6e08 ^ 0xcfcfcfcfcfcfcfcf;
          DAT_001f8243 = '\x01';
          lVar3 = -0x1ff40bdd46dd35e2;
          goto LAB_00183ff8;
        }
        lVar3 = lVar4;
        if (lVar4 != -0x3e294bb2522cdf24) goto LAB_00183ff8;
        local_84 = 3;
      }
      lVar3 = -0x5835ae904717120c;
      goto LAB_00183ff8;
    }
    if (lVar4 < -0x232f93966791ea1f) {
      if (lVar4 < -0x2674488a2381ea1a) {
        if (lVar4 == -0x3a871589c752e65f) {
          lVar3 = 0xec8cc3841e1e128;
          if (*param_4 != 0) {
            lVar3 = 0x3df99279abb85227;
          }
        }
        else if (lVar4 == -0x2f8633c4c130d097) {
          *param_4 = 0;
          lVar3 = 0x1e18aa2bc7f7ae77;
        }
      }
      else if (lVar4 == -0x2674488a2381ea1a) {
        lVar3 = 0x40f420e97b2cab77;
        if (local_90 != 0) {
          lVar3 = 0x6f4adb1894b7c458;
        }
      }
      else if (lVar4 == -0x2392b4eeb48af7cd) {
        lVar3 = -0x2f8633c4c130d097;
      }
    }
    else if (lVar4 < -0x1ff40bdd46dd35e2) {
      lVar3 = 0x40e59449750ab2a8;
      if ((lVar4 != -0x232f93966791ea1f) && (lVar3 = lVar4, lVar4 == -0x20c5bb03064befa6)) {
        DAT_001f80f0 = 0;
        local_90 = (**(code **)(*param_2 + 0x108))(param_2,unaff_x27,&DAT_001f6e08,&DAT_001f6af0);
        lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar3 = -0x2674488a2381ea1a;
        if (lVar4 != 0) {
          lVar3 = 0x5af7a32f612e39f2;
        }
      }
    }
    else if (lVar4 == -0x1ff40bdd46dd35e2) {
      DAT_001f8168 = 0;
      lVar3 = 0x5d1a0717f3c5623d;
    }
    else {
      lVar3 = -0x2f8633c4c130d097;
      if ((lVar4 != -0x1ecbfe88a62954ce) && (lVar3 = lVar4, lVar4 == -0x1ceaace3f521fc47)) {
        (**(code **)(*param_2 + 0xb8))(param_2,unaff_x27);
        lVar3 = 0x752188bc91beead4;
        if (*param_1 != 0) {
          lVar3 = -0x1ecbfe88a62954ce;
        }
      }
    }
  } while( true );
}


