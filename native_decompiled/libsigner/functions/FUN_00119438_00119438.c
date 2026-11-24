// Function: FUN_00119438
// Entry: 00119438

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00119438(int *param_1,long *param_2,undefined8 param_3,undefined8 param_4,long *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x28;
  long local_b8;
  long local_b0;
  undefined8 local_90;
  undefined8 local_88;
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
  local_90 = 0;
  lVar6 = (**(code **)(*param_2 + 0x538))(param_2,param_4);
  uVar7 = FUN_0016c3a0(param_2);
  lVar1 = -0x615740d48b1b4bc7;
  if (lVar6 != 0) {
    lVar1 = -0x2faca5236d73e441;
  }
  lVar2 = 0x55d58c2b8d472655;
  if ((uVar7 & 1) == 0 && lVar6 != 0) {
    lVar2 = 0x57dab7dd661b1869;
  }
  lVar3 = -0x7d297ff0c8057c85;
  do {
    while( true ) {
      do {
        while( true ) {
          while( true ) {
            while( true ) {
              while (lVar8 = lVar3, lVar3 = lVar8, -0xab4161c6ac76aca < lVar8) {
                if (lVar8 < 0x43d4efcefc88fa10) {
                  if (lVar8 < 0x4357c11efd169a0) {
                    if (lVar8 < -0x4c59a4c035b3e8e) {
                      if (lVar8 == -0xab4161c6ac76ac9) {
                        _DAT_001f5470 = _DAT_001f5470 ^ 0xe2e2e2e2e2e2e2e2;
                        uRam00000000001f5478 = uRam00000000001f5478 ^ 0xe2e2e2e2e2e2e2e2;
                        DAT_001f7bc4._0_2_ = CONCAT11(1,(undefined1)DAT_001f7bc4);
                        lVar3 = 0x6de583d82abca3c2;
                      }
                      else if (lVar8 == -0x9c369a095011baa) {
                        lVar3 = 0x6de583d82abca3c2;
                      }
                    }
                    else if (lVar8 == -0x4c59a4c035b3e8e) {
                      (**(code **)(*param_2 + 0xb8))(param_2,local_b0);
                      lVar3 = -0x6ebe183313cbdcac;
                    }
                    else if (lVar8 == 0x408409b1e5ac055) {
                      lVar3 = 0x26c60fa523ddda4b;
                      if (local_70 != 0) {
                        lVar3 = 0x6dbb77d6245fbf6c;
                      }
                      local_78 = 0;
                      unaff_x28 = local_70;
                    }
                  }
                  else if (lVar8 < 0x862419eaecdf1a5) {
                    if (lVar8 == 0x4357c11efd169a0) {
                      local_70 = 0;
                      lVar3 = lVar1;
                    }
                    else if (lVar8 == 0x4a5cd72dc1a18f6) {
                      (**(code **)(*param_2 + 0xb8))(param_2,local_b8);
                      lVar3 = 0x408409b1e5ac055;
                    }
                  }
                  else {
                    lVar3 = 0x408409b1e5ac055;
                    if (((lVar8 != 0x862419eaecdf1a5) &&
                        (lVar3 = 0x4357c11efd169a0, lVar8 != 0x26c60fa523ddda4b)) &&
                       (lVar3 = lVar8, lVar8 == 0x2ac799c399899ac3)) {
                      lVar3 = -0x44b8d533c6b4f6b5;
                    }
                  }
                }
                else if (lVar8 < 0x57dab7dd661b1869) {
                  if (lVar8 < 0x52d98d60f83cf13e) {
                    lVar3 = -0x44b8d533c6b4f6b5;
                    if ((lVar8 != 0x43d4efcefc88fa10) &&
                       (lVar3 = lVar8, lVar8 == 0x4bfd6150022cba99)) {
                      lVar3 = -0x44b8d533c6b4f6b5;
                    }
                  }
                  else {
                    lVar3 = -0x2ba6f13e1a81ae87;
                    if ((lVar8 != 0x52d98d60f83cf13e) &&
                       (lVar3 = lVar8, lVar8 == 0x55d58c2b8d472655)) {
                      *param_1 = 0x1f;
                      lVar3 = -0x44b8d533c6b4f6b5;
                    }
                  }
                }
                else if (lVar8 < 0x6de583d82abca3c2) {
                  if (lVar8 == 0x57dab7dd661b1869) {
                    FUN_00184aa4(param_1,param_2,param_3,&local_70);
                    lVar3 = -0x6e8c5e03a6cc6a6b;
                    if (*param_1 != 0) {
                      lVar3 = 0x2ac799c399899ac3;
                    }
                  }
                  else if (lVar8 == 0x6dbb77d6245fbf6c) {
                    (**(code **)(*param_2 + 0xb8))(param_2,unaff_x28);
                    lVar3 = 0x4357c11efd169a0;
                  }
                }
                else if (lVar8 == 0x6de583d82abca3c2) {
                  DAT_001f7bc4 = 0;
                  FUN_0018354c(param_1,param_2,local_78,&DAT_001f5470,&local_80);
                  lVar3 = -0x63d6c57ea08e5e11;
                  if (*param_1 != 0) {
                    lVar3 = 0x76eec756bc9b1bd1;
                  }
                }
                else if (lVar8 == 0x75ce15e08caa4c6a) {
                  lVar3 = -0x9c369a095011baa;
                  if (DAT_001f7bc4._1_1_ == '\0') {
                    lVar3 = -0xab4161c6ac76ac9;
                  }
                }
                else if (lVar8 == 0x76eec756bc9b1bd1) {
                  lVar3 = -0x44b8d533c6b4f6b5;
                }
              }
              if (lVar8 < -0x44b8d533c6b4f6b5) break;
              if (lVar8 < -0x2faca5236d73e441) {
                if (lVar8 < -0x3ed04c030289d596) {
                  if (lVar8 == -0x44b8d533c6b4f6b5) {
                    local_b0 = local_80;
                    lVar3 = -0x2a853f5056e0125e;
                    if (local_80 != 0) {
                      lVar3 = -0x4c59a4c035b3e8e;
                    }
                  }
                  else if (lVar8 == -0x435e690cfbf5da12) {
                    lVar3 = -0x1f72c151724b0727;
                    if (*param_1 != 0) {
                      lVar3 = -0x57ad4b5dd267bac2;
                    }
                  }
                }
                else if (lVar8 == -0x3ed04c030289d596) {
                  iVar5 = FUN_001ebe70(0,1,&DAT_001f7bc4);
                  lVar3 = 0x75ce15e08caa4c6a;
                  if (iVar5 != 0) {
                    lVar3 = -0x11cdc96087771421;
                  }
                }
                else if (lVar8 == -0x33b6ee172f5f7c77) {
                  lVar3 = -0x3ed04c030289d596;
                }
              }
              else if (lVar8 < -0x2a853f5056e0125e) {
                if (lVar8 == -0x2faca5236d73e441) {
                  (**(code **)(*param_2 + 0xb8))(param_2,lVar6);
                  lVar3 = -0x435e690cfbf5da12;
                }
                else if (lVar8 == -0x2ba6f13e1a81ae87) {
                  FUN_0016e030(param_2,local_80,local_88);
                  lVar3 = -0x44b8d533c6b4f6b5;
                }
              }
              else {
                lVar3 = -0x6ebe183313cbdcac;
                if (((lVar8 != -0x2a853f5056e0125e) &&
                    (lVar3 = -0x5987c0f4f076dc6d, lVar8 != -0x1f72c151724b0727)) &&
                   (lVar3 = lVar8, lVar8 == -0x11cdc96087771421)) {
                  lVar3 = -0x3ed04c030289d596;
                }
              }
            }
            if (-0x615740d48b1b4bc8 < lVar8) break;
            if (lVar8 < -0x6e8c5e03a6cc6a6b) {
              lVar3 = lVar2;
              if ((lVar8 != -0x7d297ff0c8057c85) && (lVar3 = lVar8, lVar8 == -0x6ebe183313cbdcac)) {
                local_b8 = local_78;
                local_80 = 0;
                lVar3 = 0x862419eaecdf1a5;
                if (local_78 != 0) {
                  lVar3 = 0x4a5cd72dc1a18f6;
                }
              }
            }
            else if (lVar8 == -0x6e8c5e03a6cc6a6b) {
              FUN_0018a620(param_1,param_2,local_70,lVar6,0,&local_78);
              lVar3 = -0x33b6ee172f5f7c77;
              if (*param_1 != 0) {
                lVar3 = 0x43d4efcefc88fa10;
              }
            }
            else if (lVar8 == -0x63d6c57ea08e5e11) {
              FUN_0016c4cc(param_1,param_2,local_80,&local_88,&local_90);
              lVar3 = -0x45bc5d4f2a354f46;
              if (*param_1 != 0) {
                lVar3 = 0x4bfd6150022cba99;
              }
            }
          }
          if (lVar8 < -0x57ad4b5dd267bac2) break;
          if (lVar8 == -0x57ad4b5dd267bac2) {
            *param_5 = 0;
            lVar3 = -0x5987c0f4f076dc6d;
          }
          else if (lVar8 == -0x45bc5d4f2a354f46) {
            lVar8 = FUN_001cdd28(local_88,local_90);
            lVar3 = -0x58581ec20935847c;
            if (lVar8 != 0) {
              lVar3 = 0x52d98d60f83cf13e;
            }
            *param_5 = lVar8;
          }
        }
        lVar3 = -0x435e690cfbf5da12;
      } while (lVar8 == -0x615740d48b1b4bc7);
      if (lVar8 != -0x58581ec20935847c) break;
      *param_1 = 2;
      lVar3 = -0x2ba6f13e1a81ae87;
    }
    lVar3 = lVar8;
  } while (lVar8 != -0x5987c0f4f076dc6d);
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


