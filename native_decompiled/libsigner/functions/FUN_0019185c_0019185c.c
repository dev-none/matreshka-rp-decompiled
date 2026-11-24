// Function: FUN_0019185c
// Entry: 0019185c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0019185c(int *param_1,long *param_2,long param_3,long *param_4)

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
  
  lVar1 = -0x49c80dcb93230f40;
  if (param_3 != 0) {
    lVar1 = 0x4aa8ce6325af04b7;
  }
  lVar3 = 0x7978e4a229929f2;
LAB_00191958:
  do {
    lVar4 = lVar3;
    lVar3 = lVar4;
    if (0x2737bf40b8fa4120 < lVar4) {
      if (lVar4 < 0x5be18224ddabb847) {
        if (lVar4 < 0x319f548f5baf7ca1) {
          if (lVar4 < 0x2926bc7d6aba0697) {
            if (lVar4 == 0x2737bf40b8fa4121) {
              lVar3 = -0x117972f9874cfe1;
              if (local_90 != 0) {
                lVar3 = 0x600e43dcfefd5331;
              }
            }
            else if (lVar4 == 0x27bfd7cfab875417) {
              (**(code **)(*param_2 + 0x80))(param_2);
              (**(code **)(*param_2 + 0x88))(param_2);
              lVar3 = 0x6a402ee8e460f5e7;
              if (unaff_x27 != 0) {
                lVar3 = 0x583f121cdbb0cca0;
              }
              *param_1 = 0xf;
            }
          }
          else {
            lVar3 = -0x1739851c2d563111;
            if ((lVar4 != 0x2926bc7d6aba0697) && (lVar3 = lVar4, lVar4 == 0x2aa5e4b17ed655a2)) {
              lVar3 = -0x479f5d356ba1b36f;
              if (*param_4 != 0) {
                lVar3 = -0x213fa7be3b08a9f5;
              }
            }
          }
          goto LAB_00191958;
        }
        if (0x4aa8ce6325af04b6 < lVar4) {
          if (lVar4 == 0x4aa8ce6325af04b7) {
            unaff_x27 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
            lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar3 = 0x7a96e48d16065c03;
            if (lVar4 != 0) {
              lVar3 = 0x27bfd7cfab875417;
            }
          }
          else if (lVar4 == 0x53ad69879913a7a6) {
            *param_1 = local_84;
            lVar3 = -0xffc3b35787e27a3;
          }
          else if (lVar4 == 0x583f121cdbb0cca0) {
            lVar3 = 0x6f2bebe684fa8815;
          }
          goto LAB_00191958;
        }
        if (lVar4 == 0x319f548f5baf7ca1) {
          lVar3 = 0x2e34c998e8575e1;
          if (DAT_001f8262 == '\0') {
            lVar3 = 0x6aebff7c8346e29f;
          }
          goto LAB_00191958;
        }
        if (lVar4 != 0x32499b1ca84c83a7) goto LAB_00191958;
        local_88 = 0x19;
      }
      else {
        if (0x6f2bebe684fa8814 < lVar4) {
          if (lVar4 < 0x7a96e48d16065c03) {
            if (lVar4 == 0x6f2bebe684fa8815) {
              (**(code **)(*param_2 + 0xb8))(param_2,unaff_x27);
              lVar3 = 0x2926bc7d6aba0697;
              if (*param_1 != 0) {
                lVar3 = -0x2bda2d54b95f7842;
              }
            }
            else if (lVar4 == 0x6fb86ba43ec2ec5f) {
              iVar2 = FUN_001ebe70(0,1,&DAT_001f81e4);
              lVar3 = 0x319f548f5baf7ca1;
              if (iVar2 != 0) {
                lVar3 = -0xc59ac640d1e3002;
              }
            }
          }
          else if (lVar4 == 0x7a96e48d16065c03) {
            lVar3 = -0x41f015117739737d;
            if (unaff_x27 != 0) {
              lVar3 = -0x60bea92e0c4cde71;
            }
          }
          else if (lVar4 == 0x7dc7e8c205614577) {
            lVar3 = -0x37a13f717cc050a8;
            if (DAT_001f8261 == '\0') {
              lVar3 = -0x40cf8bdba5e03117;
            }
          }
          else if (lVar4 == 0x7dd84fdeea256b87) {
            lVar3 = -0xc3039ae2356c417;
          }
          goto LAB_00191958;
        }
        if (0x6a402ee8e460f5e6 < lVar4) {
          lVar3 = -0xffc3b35787e27a3;
          if ((lVar4 != 0x6a402ee8e460f5e7) && (lVar3 = lVar4, lVar4 == 0x6aebff7c8346e29f)) {
            DAT_001f7228 = DAT_001f7228 ^ 0xad;
            DAT_001f7229 = DAT_001f7229 ^ 0xad;
            DAT_001f722a = DAT_001f722a ^ 0xad;
            DAT_001f722b = DAT_001f722b ^ 0xad;
            _DAT_001f7210 = _DAT_001f7210 ^ 0xadadadadadadadad;
            uRam00000000001f7218 = uRam00000000001f7218 ^ 0xadadadadadadadad;
            DAT_001f722c = DAT_001f722c ^ 0xad;
            DAT_001f7220 = DAT_001f7220 ^ 0xadadadadadadadad;
            DAT_001f8262 = '\x01';
            lVar3 = -0x6e0aad8e3d314d7;
          }
          goto LAB_00191958;
        }
        if (lVar4 != 0x5be18224ddabb847) {
          if (lVar4 == 0x600e43dcfefd5331) {
            lVar3 = (**(code **)(*param_2 + 0x110))(param_2,param_3,local_90);
            *param_4 = lVar3;
            lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar3 = 0x2aa5e4b17ed655a2;
            if (lVar4 != 0) {
              lVar3 = 0x32499b1ca84c83a7;
            }
          }
          goto LAB_00191958;
        }
        local_88 = 0xf;
      }
      lVar3 = -0x2e6b24ecec9dbe82;
      goto LAB_00191958;
    }
    if (lVar4 < -0x2bda2d54b95f7842) {
      if (lVar4 < -0x479f5d356ba1b36f) {
        if (lVar4 < -0x58319fb707205289) {
          if (lVar4 == -0x6ed692f8099591eb) {
            DAT_001f81e0 = 0;
            local_90 = (**(code **)(*param_2 + 0x108))
                                 (param_2,unaff_x27,&DAT_001f7210,&DAT_001f71e0);
            lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar3 = 0x2737bf40b8fa4121;
            if (lVar4 != 0) {
              lVar3 = 0x5be18224ddabb847;
            }
          }
          else if (lVar4 == -0x60bea92e0c4cde71) {
            lVar3 = 0x6fb86ba43ec2ec5f;
          }
        }
        else if (lVar4 == -0x58319fb707205289) {
          *param_1 = local_74;
          lVar3 = 0x6f2bebe684fa8815;
        }
        else if (lVar4 == -0x49c80dcb93230f40) {
          local_84 = 3;
LAB_00192014:
          lVar3 = 0x53ad69879913a7a6;
        }
        goto LAB_00191958;
      }
      if (lVar4 < -0x40cf8bdba5e03117) {
        if (lVar4 != -0x479f5d356ba1b36f) {
          if (lVar4 == -0x41f015117739737d) {
            local_84 = 0xf;
            goto LAB_00192014;
          }
          goto LAB_00191958;
        }
        local_74 = 0x19;
      }
      else {
        if (lVar4 == -0x40cf8bdba5e03117) {
          DAT_001f7200 = DAT_001f7200 ^ 0x55;
          DAT_001f7201 = DAT_001f7201 ^ 0x55;
          _DAT_001f71e0 = _DAT_001f71e0 ^ 0x5555555555555555;
          uRam00000000001f71e8 = uRam00000000001f71e8 ^ 0x5555555555555555;
          _DAT_001f71f0 = _DAT_001f71f0 ^ 0x5555555555555555;
          uRam00000000001f71f8 = uRam00000000001f71f8 ^ 0x5555555555555555;
          DAT_001f8261 = '\x01';
          lVar3 = -0x6ed692f8099591eb;
          goto LAB_00191958;
        }
        lVar3 = -0x6ed692f8099591eb;
        if ((lVar4 == -0x37a13f717cc050a8) || (lVar3 = lVar4, lVar4 != -0x2e6b24ecec9dbe82))
        goto LAB_00191958;
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        local_74 = local_88;
      }
LAB_00191944:
      lVar3 = -0x58319fb707205289;
      goto LAB_00191958;
    }
    if (lVar4 < -0xc3039ae2356c417) {
      if (lVar4 < -0x1739851c2d563111) {
        lVar3 = -0xffc3b35787e27a3;
        if ((lVar4 != -0x2bda2d54b95f7842) && (lVar3 = lVar4, lVar4 == -0x213fa7be3b08a9f5)) {
          lVar3 = 0x6f2bebe684fa8815;
        }
      }
      else if (lVar4 == -0xffc3b35787e27a3) {
        *param_4 = 0;
        lVar3 = -0x1739851c2d563111;
      }
      else {
        lVar3 = 0x6fb86ba43ec2ec5f;
        if ((lVar4 != -0xc59ac640d1e3002) && (lVar3 = lVar4, lVar4 == -0x1739851c2d563111)) {
          return;
        }
      }
    }
    else if (lVar4 < -0x117972f9874cfe1) {
      if (lVar4 == -0xc3039ae2356c417) {
        iVar2 = FUN_001ebe70(0,1,&DAT_001f81e0);
        lVar3 = 0x7dc7e8c205614577;
        if (iVar2 != 0) {
          lVar3 = 0x7dd84fdeea256b87;
        }
      }
      else if (lVar4 == -0x6e0aad8e3d314d7) {
        DAT_001f81e4 = 0;
        lVar3 = -0xc3039ae2356c417;
      }
    }
    else {
      if (lVar4 == -0x117972f9874cfe1) {
        local_74 = 0xf;
        goto LAB_00191944;
      }
      lVar3 = -0x6e0aad8e3d314d7;
      if ((lVar4 != 0x2e34c998e8575e1) && (lVar3 = lVar4, lVar4 == 0x7978e4a229929f2)) {
        lVar3 = lVar1;
      }
    }
  } while( true );
}


