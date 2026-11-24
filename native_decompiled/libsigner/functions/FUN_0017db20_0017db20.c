// Function: FUN_0017db20
// Entry: 0017db20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0017db20(int *param_1,long *param_2,long param_3,long param_4,undefined1 *param_5)

{
  long lVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long unaff_x24;
  byte unaff_w25;
  long unaff_x28;
  long local_a8;
  long local_88;
  int local_7c;
  long local_78;
  
  lVar1 = -0x615e5ef99e4dd8a4;
  if (param_4 == 0 || param_3 == 0) {
    lVar1 = -0x75fee390776ef830;
  }
  lVar5 = 0x3a7651dcc58160d4;
LAB_0017dc20:
  lVar4 = lVar5;
  lVar5 = lVar4;
  if (lVar4 < 0x86bcf09829d0c45) {
    if (lVar4 < -0x3d2871054bf9f335) {
      if (lVar4 < -0x615e5ef99e4dd8a4) {
        if (lVar4 < -0x6fdc1e388e705b18) {
          if (lVar4 == -0x7f2bfb17ab538146) {
            iVar3 = FUN_001ebe70(0,1,&DAT_001f8148);
            lVar5 = 0x2561357dd8b493c4;
            if (iVar3 != 0) {
              lVar5 = 0x17fa6765449d7a89;
            }
          }
          else if (lVar4 == -0x75fee390776ef830) {
            unaff_x24 = 0;
            local_7c = 3;
            lVar5 = -0x14e2f8666e4637d5;
          }
        }
        else {
          lVar5 = -0x1a28e4d070e984c9;
          if (lVar4 != -0x6fdc1e388e705b18) {
            if (lVar4 == -0x6e7333cc243172ad) {
              lVar5 = 0x86bcf09829d0c45;
              if (*param_1 != 0) {
                lVar5 = -0x3234e7f7bc7477f7;
              }
            }
            else {
              lVar5 = lVar4;
              if (lVar4 == -0x63aa0b7c8c4bd40c) {
                lVar5 = -0x6e7333cc243172ad;
              }
            }
          }
        }
      }
      else if (lVar4 < -0x48c6245be1252aaf) {
        if (lVar4 == -0x615e5ef99e4dd8a4) {
          unaff_x28 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
          lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar5 = 0x2446a10cf2bc4fab;
          if (lVar4 != 0) {
            lVar5 = 0x6cb701e11340db03;
          }
        }
        else if (lVar4 == -0x4bd7b45c4eb6901a) {
          lVar5 = -0x1a28e4d070e984c9;
        }
      }
      else if (lVar4 == -0x48c6245be1252aaf) {
        DAT_001f814c = 0;
        lVar5 = -0x7f2bfb17ab538146;
      }
      else {
        lVar5 = 0x790235fd48c827f6;
        if ((lVar4 != -0x45ee731304c66d15) && (lVar5 = lVar4, lVar4 == -0x44090efcbccd3505)) {
          uVar2 = (**(code **)(*param_2 + 0x128))(param_2,param_3,local_88,local_78);
          *param_5 = uVar2;
          lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar5 = -0x6fdc1e388e705b18;
          if (lVar4 != 0) {
            lVar5 = 0x54d3d54d0947b344;
          }
        }
      }
      goto LAB_0017dc20;
    }
    if (lVar4 < -0x14e2f8666e4637d5) {
      if (lVar4 < -0x2dcbf771db7f2440) {
        if (lVar4 == -0x3d2871054bf9f335) {
          unaff_w25 = 1;
          lVar5 = -0x21482627d25fb44;
          unaff_x20 = unaff_x28;
          goto LAB_0017e740;
        }
        if (lVar4 == -0x3234e7f7bc7477f7) {
          *param_5 = 0;
          lVar5 = 0xa10dddddf110eed;
        }
      }
      else if (lVar4 == -0x2dcbf771db7f2440) {
        lVar5 = 0x20a1c533b4cc6da;
        if (local_88 != 0) {
          lVar5 = 0x216573925bf8ebe9;
        }
      }
      else if (lVar4 == -0x1cc38afa9500798b) {
        DAT_001f6d60 = DAT_001f6d60 ^ 0xa1;
        DAT_001f6d61 = DAT_001f6d61 ^ 0xa1;
        DAT_001f6d62 = DAT_001f6d62 ^ 0xa1;
        DAT_001f6d64 = DAT_001f6d64 ^ 0xa1;
        DAT_001f6d63 = DAT_001f6d63 ^ 0xa1;
        DAT_001f6d65 = DAT_001f6d65 ^ 0xa1;
        _DAT_001f6d50 = _DAT_001f6d50 ^ 0xa1a1a1a1a1a1a1a1;
        uRam00000000001f6d58 = uRam00000000001f6d58 ^ 0xa1a1a1a1a1a1a1a1;
        DAT_001f823e = '\x01';
        lVar5 = -0x48c6245be1252aaf;
      }
      else if (lVar4 == -0x1a28e4d070e984c9) {
        (**(code **)(*param_2 + 0xb8))(param_2,local_78);
        goto LAB_0017ded4;
      }
      goto LAB_0017dc20;
    }
    if (lVar4 < -0x89518c7aa476a2a) {
      if (lVar4 == -0x14e2f8666e4637d5) {
        *param_1 = local_7c;
        lVar5 = -0x21482627d25fb44;
        unaff_x20 = unaff_x24;
        unaff_w25 = param_2 != (long *)0x0;
      }
      else if (lVar4 == -0xbf2d2c28f7801b5) {
        lVar5 = -0x3d2871054bf9f335;
        if (local_78 != 0) {
          lVar5 = -0x44090efcbccd3505;
        }
      }
      goto LAB_0017dc20;
    }
    if (lVar4 == -0x89518c7aa476a2a) {
      (**(code **)(*param_2 + 0xb8))(param_2,local_a8);
      lVar5 = -0x6e7333cc243172ad;
      goto LAB_0017dc20;
    }
    if (lVar4 == -0x21482627d25fb44) {
      lVar5 = -0x89518c7aa476a2a;
      local_a8 = unaff_x20;
      if ((unaff_w25 & unaff_x20 != 0) == 0) {
        lVar5 = -0x63aa0b7c8c4bd40c;
      }
      goto LAB_0017dc20;
    }
    if (lVar4 != 0x20a1c533b4cc6da) goto LAB_0017dc20;
  }
  else {
    if (lVar4 < 0x3bfd422f12ed9271) {
      if (lVar4 < 0x2561357dd8b493c4) {
        if (lVar4 < 0x17fa6765449d7a89) {
          lVar5 = 0xa10dddddf110eed;
          if (((lVar4 != 0x86bcf09829d0c45) &&
              (lVar5 = 0x49c3dc5e390a51eb, lVar4 != 0xb3616d314dbba99)) &&
             (lVar5 = lVar4, lVar4 == 0xa10dddddf110eed)) {
            return;
          }
        }
        else {
          lVar5 = -0x7f2bfb17ab538146;
          if (lVar4 != 0x17fa6765449d7a89) {
            if (lVar4 == 0x216573925bf8ebe9) {
              local_78 = (**(code **)(*param_2 + 0x538))(param_2,param_4);
              lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
              lVar5 = -0xbf2d2c28f7801b5;
              if (lVar4 != 0) {
                lVar5 = 0x39f9df39cdb037d8;
              }
            }
            else {
              lVar5 = lVar4;
              if (lVar4 == 0x2446a10cf2bc4fab) {
                lVar5 = 0x6d8fc760e884be90;
                if (unaff_x28 != 0) {
                  lVar5 = 0xb3616d314dbba99;
                }
              }
            }
          }
        }
      }
      else if (lVar4 < 0x39f9df39cdb037d8) {
        if (lVar4 == 0x2561357dd8b493c4) {
          lVar5 = 0x615570a981e333bc;
          if (DAT_001f823d == '\0') {
            lVar5 = 0x3bddb77ddccd3f35;
          }
        }
        else if (lVar4 == 0x3479906b8ee4af96) {
          DAT_001f8148 = 0;
          local_88 = (**(code **)(*param_2 + 0x108))(param_2,unaff_x28,&DAT_001f6d38,&DAT_001f6d50);
          lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar5 = -0x2dcbf771db7f2440;
          if (lVar4 != 0) {
            lVar5 = -0x45ee731304c66d15;
          }
        }
      }
      else if (lVar4 == 0x39f9df39cdb037d8) {
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        lVar5 = 0x5a2c11f0e268e8c8;
        if (local_78 != 0) {
          lVar5 = -0x4bd7b45c4eb6901a;
        }
LAB_0017e740:
        *param_1 = 0x1f;
      }
      else {
        lVar5 = lVar1;
        if ((lVar4 != 0x3a7651dcc58160d4) && (lVar5 = lVar4, lVar4 == 0x3bddb77ddccd3f35)) {
          DAT_001f6d40 = DAT_001f6d40 ^ 0xab;
          DAT_001f6d41 = DAT_001f6d41 ^ 0xab;
          DAT_001f6d42 = DAT_001f6d42 ^ 0xab;
          DAT_001f6d43 = DAT_001f6d43 ^ 0xab;
          DAT_001f6d38 = DAT_001f6d38 ^ 0xabababababababab;
          DAT_001f823d = '\x01';
          lVar5 = 0x3479906b8ee4af96;
        }
      }
      goto LAB_0017dc20;
    }
    if (lVar4 < 0x615570a981e333bc) {
      if (lVar4 < 0x54d3d54d0947b344) {
        lVar5 = 0x49c3dc5e390a51eb;
        if ((lVar4 != 0x3bfd422f12ed9271) && (lVar5 = lVar4, lVar4 == 0x49c3dc5e390a51eb)) {
          iVar3 = FUN_001ebe70(0,1,&DAT_001f814c);
          lVar5 = 0x5e16e817aad195f2;
          if (iVar3 != 0) {
            lVar5 = 0x3bfd422f12ed9271;
          }
        }
      }
      else if (lVar4 == 0x54d3d54d0947b344) {
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        *param_1 = 0x19;
        lVar5 = -0x1a28e4d070e984c9;
      }
      else if (lVar4 == 0x5a2c11f0e268e8c8) {
LAB_0017ded4:
        lVar5 = -0x21482627d25fb44;
        unaff_x20 = unaff_x28;
        unaff_w25 = 1;
      }
      else if (lVar4 == 0x5e16e817aad195f2) {
        lVar5 = 0x7838d9065edaa658;
        if (DAT_001f823e == '\0') {
          lVar5 = -0x1cc38afa9500798b;
        }
      }
      goto LAB_0017dc20;
    }
    if (lVar4 < 0x6d8fc760e884be90) {
      lVar5 = 0x3479906b8ee4af96;
      if ((lVar4 != 0x615570a981e333bc) && (lVar5 = lVar4, lVar4 == 0x6cb701e11340db03)) {
        lVar5 = 0x790235fd48c827f6;
      }
      goto LAB_0017dc20;
    }
    if (lVar4 != 0x6d8fc760e884be90) {
      lVar5 = -0x48c6245be1252aaf;
      if ((lVar4 != 0x7838d9065edaa658) && (lVar5 = lVar4, lVar4 == 0x790235fd48c827f6)) {
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        goto LAB_0017dc04;
      }
      goto LAB_0017dc20;
    }
  }
LAB_0017dc04:
  local_7c = 0xf;
  lVar5 = -0x14e2f8666e4637d5;
  unaff_x24 = unaff_x28;
  goto LAB_0017dc20;
}


