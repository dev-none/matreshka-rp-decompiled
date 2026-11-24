// Function: FUN_0011b300
// Entry: 0011b300

void FUN_0011b300(int *param_1,long *param_2,undefined8 param_3,byte param_4,undefined1 *param_5,
                 undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x28;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_98;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  local_78 = 0;
  local_70 = 0;
  local_88 = 0;
  local_80 = 0;
  FUN_00183efc();
  lVar1 = 0x4119c2fb696ac2cc;
  if (param_5 != (undefined1 *)0x0) {
    lVar1 = 0x56c7de269b39cb28;
  }
  lVar2 = -0x1a2c17747d4c9d16;
  if (param_4 < 0x1c) {
    lVar2 = 0x3cf1d9509481ae04;
  }
  lVar3 = 0x42f0c6f150e99035;
  if (*param_1 != 0) {
    lVar3 = -0x66cd56510b566201;
  }
  lVar5 = 0x135ff1730db8c077;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (lVar6 = lVar5, lVar5 = lVar6, lVar6 < 0x303d266b462771e7) {
            if (lVar6 < -0x2c4303065cb3eee6) {
              if (lVar6 < -0x542fd3a52b2562e6) {
                lVar5 = -0x203d639f93f665df;
                if (((lVar6 != -0x725e511a790cf4ac) && (lVar6 != -0x66cd56510b566201)) &&
                   (lVar5 = lVar6, lVar6 == -0x608b613e0d15eb95)) {
                  local_98 = local_88;
                  lVar5 = lVar1;
                }
              }
              else if (lVar6 < -0x41fbd41c01740ac7) {
                if (lVar6 == -0x542fd3a52b2562e6) {
                  local_b8 = local_80;
                  local_88 = 0;
                  lVar5 = 0x303d266b462771e7;
                  if (local_80 == 0 || param_2 == (long *)0x0) {
                    lVar5 = 0x5aee9e3b6c141ab1;
                  }
                }
                else if (lVar6 == -0x4f3380086e2b70c2) {
                  lVar5 = -0x203d639f93f665df;
                }
              }
              else {
                lVar5 = -0x203d639f93f665df;
                if ((lVar6 != -0x41fbd41c01740ac7) && (lVar5 = lVar6, lVar6 == -0x3c84e412275c5f52))
                {
                  lVar5 = -0x203d639f93f665df;
                }
              }
            }
            else if (lVar6 < -0xfd56005cdcebed6) {
              if (lVar6 < -0x1a2c17747d4c9d16) {
                if (lVar6 == -0x2c4303065cb3eee6) {
                  local_c0 = local_78;
                  local_80 = 0;
                  lVar5 = -0x15a21fd5d20b04b8;
                  if (local_78 == 0 || param_2 == (long *)0x0) {
                    lVar5 = 0x3fe4345baf199427;
                  }
                }
                else if (lVar6 == -0x203d639f93f665df) {
                  local_b0 = local_88;
                  lVar5 = 0x7c778a2912169367;
                  if (local_88 == 0 || param_2 == (long *)0x0) {
                    lVar5 = 0x22bae9789d72b4f3;
                  }
                }
              }
              else if (lVar6 == -0x1a2c17747d4c9d16) {
                FUN_0018b1b4(param_1,param_2,local_78,local_70,0x8000000,&local_80);
                lVar5 = 0x53bf3b45f912026b;
                if (*param_1 != 0) {
                  lVar5 = -0x41fbd41c01740ac7;
                }
              }
              else if (lVar6 == -0x15a21fd5d20b04b8) {
                (**(code **)(*param_2 + 0xb8))(param_2,local_c0);
                lVar5 = 0x55a53f7fea287ef8;
              }
            }
            else if (lVar6 < 0x22bae9789d72b4f3) {
              lVar5 = -0x203d639f93f665df;
              if ((lVar6 != -0xfd56005cdcebed6) && (lVar5 = lVar6, lVar6 == 0x135ff1730db8c077)) {
                lVar5 = lVar3;
              }
            }
            else {
              lVar5 = -0x542fd3a52b2562e6;
              if ((lVar6 != 0x22bae9789d72b4f3) && (lVar5 = lVar6, lVar6 == 0x2585bc4e4d7c8853)) {
                FUN_001923e4(param_1,param_2,local_88,param_5);
                lVar5 = -0x608b613e0d15eb95;
                if (*param_1 != 0) {
                  lVar5 = -0xfd56005cdcebed6;
                }
              }
            }
          }
          if (0x504fc213a833ef4d < lVar6) break;
          if (lVar6 < 0x3cf1d9509481ae04) {
            if (lVar6 == 0x303d266b462771e7) {
              (**(code **)(*param_2 + 0xb8))(param_2,local_b8);
              lVar5 = -0x2c4303065cb3eee6;
            }
            else {
              lVar5 = lVar2;
              if ((lVar6 != 0x30873d520a61889c) && (lVar5 = lVar6, lVar6 == 0x3582441379697640)) {
                FUN_00188f80(param_1,param_2,local_80,param_6);
                lVar5 = -0x203d639f93f665df;
              }
            }
          }
          else if (lVar6 < 0x4119c2fb696ac2cc) {
            if (lVar6 == 0x3cf1d9509481ae04) {
              *param_5 = 0;
              FUN_0018b1b4(param_1,param_2,local_78,local_70,0x40,&local_80);
              lVar5 = 0x3582441379697640;
              if (*param_1 != 0) {
                lVar5 = -0x3c84e412275c5f52;
              }
            }
            else if (lVar6 == 0x3fe4345baf199427) {
              lVar5 = 0x55a53f7fea287ef8;
            }
          }
          else if (lVar6 == 0x4119c2fb696ac2cc) {
            FUN_0019185c(param_1,param_2,local_98,param_6);
            lVar5 = -0x203d639f93f665df;
          }
          else if (lVar6 == 0x42f0c6f150e99035) {
            FUN_00184aa4(param_1,param_2,param_3,&local_78);
            lVar5 = 0x30873d520a61889c;
            if (*param_1 != 0) {
              lVar5 = -0x4f3380086e2b70c2;
            }
          }
        }
        if (0x59ea2ac634eec38b < lVar6) break;
        if (lVar6 < 0x55a53f7fea287ef8) {
          if (lVar6 == 0x504fc213a833ef4e) {
            (**(code **)(*param_2 + 0xb8))(param_2,unaff_x28);
            lVar5 = 0x59ea2ac634eec38c;
          }
          else if (lVar6 == 0x53bf3b45f912026b) {
            FUN_00189ac8(param_1,param_2,local_80,&local_88);
            lVar5 = 0x2585bc4e4d7c8853;
            if (*param_1 != 0) {
              lVar5 = -0x725e511a790cf4ac;
            }
          }
        }
        else if (lVar6 == 0x55a53f7fea287ef8) {
          local_78 = 0;
          lVar5 = 0x504fc213a833ef4e;
          unaff_x28 = local_70;
          if (local_70 == 0 || param_2 == (long *)0x0) {
            lVar5 = 0x7e480ccd9447af9d;
          }
        }
        else if (lVar6 == 0x56c7de269b39cb28) {
          FUN_00190ce4(param_1,param_2,local_98,param_6);
          lVar5 = -0x203d639f93f665df;
        }
      }
      if (lVar6 < 0x7c778a2912169367) break;
      if (lVar6 == 0x7c778a2912169367) {
        (**(code **)(*param_2 + 0xb8))(param_2,local_b0);
        lVar5 = -0x542fd3a52b2562e6;
      }
      else if (lVar6 == 0x7e480ccd9447af9d) {
        lVar5 = 0x59ea2ac634eec38c;
      }
    }
    lVar5 = -0x2c4303065cb3eee6;
  } while ((lVar6 == 0x5aee9e3b6c141ab1) || (lVar5 = lVar6, lVar6 != 0x59ea2ac634eec38c));
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


