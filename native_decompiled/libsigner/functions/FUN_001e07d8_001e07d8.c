// Function: FUN_001e07d8
// Entry: 001e07d8

void FUN_001e07d8(int *param_1,ulong param_2,uint param_3,undefined8 param_4)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint unaff_w21;
  ulong unaff_x25;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  uint local_80;
  uint local_7c;
  undefined8 local_78;
  uint local_70;
  int local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_70 = 0;
  local_78 = 0;
  uVar3 = param_2;
  uVar4 = param_2 + 0x10;
  lVar6 = 0x49bfb75441afda81;
LAB_001e08b4:
  lVar5 = lVar6;
  uVar8 = uVar4 & 0xffffffff;
  uVar9 = uVar3 & 0xffffffff;
  uVar7 = (uint)uVar4;
  lVar6 = lVar5;
  uVar4 = uVar8;
  if (lVar5 < -0x28634e0beea7acd) {
    if (lVar5 < -0x53fcb8527fc1857c) {
      if (lVar5 < -0x60a1584a600614bc) {
        if (lVar5 < -0x683dfe9dd6fb123d) {
          uVar3 = uVar9;
          lVar6 = 0x177785e5fe74d286;
          if ((lVar5 != -0x79bf7dc00f11b1ef) && (lVar6 = lVar5, lVar5 == -0x68fcbb577ac8ebb5)) {
            uVar4 = 0;
            lVar6 = -0x5bf11c36ce907131;
          }
          goto LAB_001e08b4;
        }
        uVar3 = unaff_x25 & 0xffffffff;
        lVar6 = 0x1f03c9be91893b24;
        if ((lVar5 == -0x683dfe9dd6fb123d) ||
           (uVar3 = uVar9, lVar6 = lVar5, lVar5 != -0x649feb271572ccc3)) goto LAB_001e08b4;
        goto LAB_001e12f4;
      }
      if (lVar5 < -0x5bf11c36ce907131) {
        if (lVar5 == -0x60a1584a600614bc) {
          FUN_001dc470(param_1,param_4,param_3 - local_80,1);
          goto LAB_001e12f4;
        }
        uVar3 = uVar9;
        if (lVar5 == -0x5de9a88702221b6f) {
          lVar6 = 0x2562ff29debb7f8d;
          goto LAB_001e0f00;
        }
        goto LAB_001e08b4;
      }
      if (lVar5 == -0x5bf11c36ce907131) {
        uVar3 = uVar9;
        lVar6 = -0xab6d7693a1608dd;
        if (uVar7 != unaff_w21) {
          lVar6 = -0x5de9a88702221b6f;
        }
        goto LAB_001e08b4;
      }
      if (lVar5 != -0x566f96a9b368e0d8) {
        uVar3 = uVar9;
        if (lVar5 == -0x5573f3ffc6d4ae34) {
          lVar6 = 0x2562ff29debb7f8d;
        }
        goto LAB_001e08b4;
      }
      uVar7 = local_70 + 4;
      lVar6 = -0x37390d343568a937;
      lVar5 = -0x28634e0beea7acd;
      unaff_w21 = local_70;
    }
    else {
      if (-0x2bae5e104c3aded9 < lVar5) {
        if (lVar5 < -0x1f8eee9a244ffc80) {
          uVar3 = uVar9;
          lVar6 = 0x177785e5fe74d286;
          if ((lVar5 != -0x2bae5e104c3aded8) && (lVar6 = lVar5, lVar5 == -0x2385ce133751e9ac)) {
            FUN_001dca14(param_1,param_2,local_6c,param_4);
            lVar6 = -0x53fcb8527fc1857c;
            if (*param_1 != 0) {
              lVar6 = -0x5573f3ffc6d4ae34;
            }
          }
        }
        else {
          uVar3 = uVar9;
          lVar6 = -0x5372a13c3de6dbbe;
          if (lVar5 != -0x1f8eee9a244ffc80) {
            if (lVar5 == -0x1dcfbdf13e510211) {
              local_80 = (int)local_78 + local_8c;
              lVar6 = -0x60a1584a600614bc;
              if (param_3 <= local_80) {
                lVar6 = 0x76d7a27cf05aa1fd;
              }
            }
            else {
              lVar6 = lVar5;
              if (lVar5 == -0xab6d7693a1608dd) {
                lVar6 = -0x5372a13c3de6dbbe;
              }
            }
          }
        }
        goto LAB_001e08b4;
      }
      if (lVar5 < -0x417a36f1b91e6651) {
        if (lVar5 == -0x53fcb8527fc1857c) {
          uVar7 = local_94 + local_6c + 4;
          unaff_x25 = (ulong)uVar7;
          uVar3 = uVar9;
          lVar6 = -0x683dfe9dd6fb123d;
          if (unaff_w21 <= uVar7) {
            lVar6 = -0x417a36f1b91e6651;
          }
        }
        else {
          uVar3 = uVar9;
          if (lVar5 == -0x5372a13c3de6dbbe) {
            lVar6 = 0x7028d3a187050975;
            if (*param_1 != 0) {
              lVar6 = -0x2bae5e104c3aded8;
            }
          }
        }
        goto LAB_001e08b4;
      }
      uVar3 = uVar9;
      uVar4 = unaff_x25 & 0xffffffff;
      lVar6 = -0x5bf11c36ce907131;
      if (lVar5 == -0x417a36f1b91e6651) goto LAB_001e08b4;
      if (lVar5 != -0x3e25d1f1afeb5e6f) {
        uVar4 = uVar8;
        lVar6 = lVar5;
        if (lVar5 == -0x37390d343568a937) goto LAB_001e0e90;
        goto LAB_001e08b4;
      }
      local_8c = local_7c + local_88 + 0xc;
      local_90 = (int)local_78;
      lVar6 = 0x68bbcb416a80b2d5;
      uVar7 = (int)local_78 + local_8c;
      lVar5 = 0x4b0487fc41a2590e;
    }
    uVar3 = uVar9;
    uVar4 = uVar8;
    if (uVar7 <= param_3) {
      lVar6 = lVar5;
    }
    goto LAB_001e08b4;
  }
  if (0x4d38fa67cd1802ad < lVar5) {
    if (lVar5 < 0x74dfbd50c1679086) {
      if (lVar5 < 0x6a637c125f65a76b) {
        uVar3 = uVar9;
        lVar6 = 0x177785e5fe74d286;
        if ((lVar5 != 0x4d38fa67cd1802ae) && (lVar6 = lVar5, lVar5 == 0x68bbcb416a80b2d5)) {
LAB_001e0e90:
          lVar6 = 0x177785e5fe74d286;
LAB_001e0f00:
          *param_1 = 8;
          uVar3 = uVar9;
          uVar4 = uVar8;
        }
      }
      else if (lVar5 == 0x6a637c125f65a76b) {
        uVar3 = 0;
        lVar6 = 0x1f03c9be91893b24;
      }
      else {
        uVar3 = uVar9;
        if (lVar5 == 0x7028d3a187050975) {
          local_7c = local_70;
          uVar8 = FUN_001dc360(param_1,(long)&local_78 + 4,4,1,param_4);
          lVar6 = 0x7a0f616325dae33c;
          if ((uVar8 & 1) == 0) {
            lVar6 = 0x1967d52db0437643;
          }
        }
      }
    }
    else if (lVar5 < 0x76d7a27cf05aa1fd) {
      uVar3 = uVar9;
      lVar6 = 0x177785e5fe74d286;
      if ((lVar5 != 0x74dfbd50c1679086) && (lVar6 = lVar5, lVar5 == 0x754f3abf4a408c98)) {
        local_88 = local_78._4_4_;
        uVar8 = FUN_001dc360(param_1,&local_78,4,1,param_4);
        lVar6 = -0x3e25d1f1afeb5e6f;
        lVar5 = 0x4d38fa67cd1802ae;
LAB_001e121c:
        uVar3 = uVar9;
        if ((uVar8 & 1) == 0) {
          lVar6 = lVar5;
        }
      }
    }
    else if (lVar5 == 0x76d7a27cf05aa1fd) {
      bVar2 = local_80 == param_3;
      lVar5 = 0x154f676f4a5ce494;
      lVar6 = -0x79bf7dc00f11b1ef;
LAB_001e12d4:
      uVar3 = uVar9;
      if (!bVar2) {
        lVar6 = lVar5;
      }
    }
    else if (lVar5 == 0x7a0f616325dae33c) {
      local_84 = local_78._4_4_;
      uVar3 = uVar9;
      lVar6 = 0x1bce23f05448fc72;
      if (local_7c + local_78._4_4_ + 8 <= param_3) {
        lVar6 = 0x7c9c0d2413f69b48;
      }
    }
    else {
      uVar3 = uVar9;
      if (lVar5 == 0x7c9c0d2413f69b48) {
        FUN_001dd808(param_1,param_2 + 0x10,local_84,param_4);
        lVar6 = 0x754f3abf4a408c98;
        if (*param_1 != 0) {
          lVar6 = -0x649feb271572ccc3;
        }
      }
    }
    goto LAB_001e08b4;
  }
  if (lVar5 < 0x1f03c9be91893b24) {
    if (lVar5 < 0x177785e5fe74d286) {
      if (lVar5 == -0x28634e0beea7acd) {
        lVar6 = -0x68fcbb577ac8ebb5;
        if (unaff_w21 != 0) {
          lVar6 = 0x6a637c125f65a76b;
        }
        local_6c = 0;
        uVar3 = uVar9;
      }
      else {
        uVar3 = uVar9;
        if (lVar5 == 0x154f676f4a5ce494) goto LAB_001e0e90;
      }
    }
    else {
      lVar6 = 0x177785e5fe74d286;
      uVar3 = uVar9;
      if (lVar5 != 0x1967d52db0437643) {
        if (lVar5 == 0x1bce23f05448fc72) goto LAB_001e0f00;
        lVar6 = lVar5;
        if (lVar5 == 0x177785e5fe74d286) {
          if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
      }
    }
    goto LAB_001e08b4;
  }
  if (lVar5 < 0x49bfb75441afda81) {
    if (lVar5 == 0x1f03c9be91893b24) {
      uVar8 = FUN_001dc360(param_1,&local_6c,4,1,param_4);
      lVar6 = -0x2385ce133751e9ac;
      if ((uVar8 & 1) == 0) {
        lVar6 = -0x1f8eee9a244ffc80;
      }
      local_94 = (int)uVar3;
      uVar3 = uVar9;
    }
    else {
      uVar3 = uVar9;
      if (lVar5 == 0x2562ff29debb7f8d) goto LAB_001e12f4;
    }
    goto LAB_001e08b4;
  }
  if (lVar5 == 0x49bfb75441afda81) {
    uVar8 = FUN_001dc360(param_1,&local_70,4,1,param_4);
    lVar6 = -0x566f96a9b368e0d8;
    lVar5 = 0x74dfbd50c1679086;
    goto LAB_001e121c;
  }
  if (lVar5 == 0x4b0487fc41a2590e) {
    FUN_001de49c(param_1,param_2 + 0x20,local_90,param_4);
    bVar2 = *param_1 == 0;
    lVar5 = 0x4c807eaf406a59b4;
    lVar6 = -0x1dcfbdf13e510211;
    goto LAB_001e12d4;
  }
  uVar3 = uVar9;
  if (lVar5 != 0x4c807eaf406a59b4) goto LAB_001e08b4;
LAB_001e12f4:
  uVar3 = uVar9;
  lVar6 = 0x177785e5fe74d286;
  goto LAB_001e08b4;
}


