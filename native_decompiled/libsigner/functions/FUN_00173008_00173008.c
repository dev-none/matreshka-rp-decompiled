// Function: FUN_00173008
// Entry: 00173008

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00173008(undefined4 *param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  byte unaff_w23;
  long unaff_x27;
  long unaff_x28;
  long local_b0;
  long local_a8;
  long local_98;
  long local_90;
  long local_80;
  undefined4 local_6c;
  long local_68;
  
  lVar1 = 0x7dfcf83e979bea6c;
  if (param_4 == 0 || param_3 == 0) {
    lVar1 = 0x686aafe978de1dba;
  }
  lVar4 = -0x2add63388c18cfe7;
LAB_001730f4:
  while (lVar3 = lVar4, lVar4 = lVar3, lVar3 < -0x1bdd340fae5291cd) {
    if (lVar3 < -0x52eb957c549ae831) {
      if (lVar3 < -0x5de29fbc91985c04) {
        if (lVar3 < -0x6f8b4935e625164f) {
          if (lVar3 == -0x7c087be1081466e1) {
            (**(code **)(*param_2 + 0xb8))(param_2,local_b0);
            goto LAB_001730dc;
          }
          if (lVar3 == -0x7906498b0c1386f9) {
            lVar4 = 0x1a25b2068074ba47;
          }
        }
        else if (lVar3 == -0x6f8b4935e625164f) {
          iVar2 = FUN_001ebe70(0,1,&DAT_001f80e4);
          lVar4 = 0x7530c2a066bfdf74;
          if (iVar2 != 0) {
            lVar4 = -0x2fd038e5b15bbca;
          }
        }
        else {
          lVar4 = -0x14f8c4e896943237;
          if ((lVar3 != -0x6e38b33ba26cc7c4) && (lVar4 = lVar3, lVar3 == -0x6738ab477cd999dd)) {
            lVar4 = -0x3227edfad4ae9f68;
            local_a8 = unaff_x28;
            if ((unaff_w23 & unaff_x28 != 0) == 0) {
              lVar4 = 0x7f14270c3590edea;
            }
          }
        }
      }
      else if (lVar3 < -0x5d31cafea13d402f) {
        if (lVar3 == -0x5de29fbc91985c04) {
          unaff_w23 = 1;
          lVar4 = -0x6738ab477cd999dd;
          unaff_x28 = unaff_x27;
          goto LAB_00173cc0;
        }
        if (lVar3 == -0x5d839d50d292350a) {
          lVar4 = -0x14f8c4e896943237;
        }
      }
      else {
        if (lVar3 == -0x5d31cafea13d402f) goto LAB_001730dc;
        if (lVar3 == -0x5a9e53c8fe58a72b) {
          lVar4 = -0x17f963b8561a3685;
          if (local_98 != 0) {
            lVar4 = 0x50fa2b6150a290e8;
          }
        }
        else if (lVar3 == -0x5315ab5ac0fea1f6) {
          return;
        }
      }
    }
    else if (lVar3 < -0x34c850c5a84f18e9) {
      if (lVar3 < -0x3eabc76882617b0d) {
        lVar4 = 0xcb1f7856ef3e66a;
        if ((lVar3 != -0x52eb957c549ae831) && (lVar4 = lVar3, lVar3 == -0x43f0442fbe464458)) {
          lVar4 = 0xcb1f7856ef3e66a;
        }
      }
      else if (lVar3 == -0x3eabc76882617b0d) {
        lVar4 = -0x7906498b0c1386f9;
        if (DAT_001f8225 == '\0') {
          lVar4 = -0x3b5567544767f883;
        }
      }
      else if (lVar3 == -0x3b5567544767f883) {
        DAT_001f6ad0 = DAT_001f6ad0 ^ 0x79;
        DAT_001f6ad1 = DAT_001f6ad1 ^ 0x79;
        DAT_001f6ad2 = DAT_001f6ad2 ^ 0x79;
        DAT_001f6ad4 = DAT_001f6ad4 ^ 0x79;
        DAT_001f6ad5 = DAT_001f6ad5 ^ 0x79;
        DAT_001f6ad6 = DAT_001f6ad6 ^ 0x79;
        DAT_001f6ad3 = DAT_001f6ad3 ^ 0x79;
        _DAT_001f6ab0 = _DAT_001f6ab0 ^ 0x7979797979797979;
        uRam00000000001f6ab8 = uRam00000000001f6ab8 ^ 0x7979797979797979;
        _DAT_001f6ac0 = _DAT_001f6ac0 ^ 0x7979797979797979;
        uRam00000000001f6ac8 = uRam00000000001f6ac8 ^ 0x7979797979797979;
        DAT_001f8225 = '\x01';
        lVar4 = 0x1a25b2068074ba47;
      }
      else if (lVar3 == -0x38e4f764dab36e4d) {
        local_80 = local_90;
        lVar4 = 0x5a11fb51b50ab0a1;
      }
    }
    else if (lVar3 < -0x2add63388c18cfe7) {
      if (lVar3 == -0x34c850c5a84f18e9) {
        DAT_001f80e4 = 0;
        local_98 = (**(code **)(*param_2 + 0x108))(param_2,unaff_x27,&DAT_001f6a9c,&DAT_001f6ab0);
        lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar4 = -0x5a9e53c8fe58a72b;
        if (lVar3 != 0) {
          lVar4 = -0x52eb957c549ae831;
        }
      }
      else if (lVar3 == -0x3227edfad4ae9f68) {
        (**(code **)(*param_2 + 0xb8))(param_2,local_a8);
        lVar4 = -0x5315ab5ac0fea1f6;
      }
    }
    else {
      lVar4 = lVar1;
      if (lVar3 != -0x2add63388c18cfe7) {
        if (lVar3 == -0x27e39c9d7fd6ef62) {
LAB_001730dc:
          unaff_w23 = 1;
          lVar4 = -0x6738ab477cd999dd;
          unaff_x28 = unaff_x27;
        }
        else {
          lVar4 = lVar3;
          if (lVar3 == -0x24ee3c5e246ec436) {
            (**(code **)(*param_2 + 0x80))(param_2);
            (**(code **)(*param_2 + 0x88))(param_2);
            lVar4 = -0x27e39c9d7fd6ef62;
            if (local_68 != 0) {
              lVar4 = 0x6a86f9a27a48a6ad;
            }
LAB_00173cc0:
            *param_1 = 0x1f;
          }
        }
      }
    }
  }
  if (lVar3 < 0x50fa2b6150a290e8) {
    if (lVar3 < -0x2fd038e5b15bbca) {
      if (-0x15b360a54b4976eb < lVar3) {
        if (lVar3 == -0x15b360a54b4976ea) {
          lVar4 = -0x5de29fbc91985c04;
          if (local_68 != 0) {
            lVar4 = -0x8f7c1b071b835ff;
          }
        }
        else if (lVar3 == -0x14f8c4e896943237) {
          iVar2 = FUN_001ebe70(0,1,&DAT_001f80e8);
          lVar4 = -0x3eabc76882617b0d;
          if (iVar2 != 0) {
            lVar4 = -0x5d839d50d292350a;
          }
        }
        else if (lVar3 == -0x8f7c1b071b835ff) {
          local_90 = (**(code **)(*param_2 + 0x110))(param_2,param_3,local_98,local_68);
          lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar4 = -0x38e4f764dab36e4d;
          if (lVar3 != 0) {
            lVar4 = 0x69e4dec6b0ebb25c;
          }
        }
        goto LAB_001730f4;
      }
      lVar4 = -0x34c850c5a84f18e9;
      if ((lVar3 == -0x1bdd340fae5291cd) || (lVar4 = lVar3, lVar3 != -0x17f963b8561a3685))
      goto LAB_001730f4;
    }
    else {
      if (0x1a25b2068074ba46 < lVar3) {
        if (lVar3 == 0x1a25b2068074ba47) {
          DAT_001f80e8 = 0;
          lVar4 = -0x6f8b4935e625164f;
        }
        else if (lVar3 == 0x3cfbe864c3a77289) {
          lVar4 = 0x5a3aced94a588832;
          if (unaff_x27 != 0) {
            lVar4 = -0x6e38b33ba26cc7c4;
          }
        }
        else if (lVar3 == 0x3db6504342eeb5c6) {
          DAT_001f6a9c = DAT_001f6a9c ^ 0x69;
          DAT_001f6a9d = DAT_001f6a9d ^ 0x69;
          DAT_001f6a9e = DAT_001f6a9e ^ 0x69;
          DAT_001f6aa0 = DAT_001f6aa0 ^ 0x69;
          DAT_001f6aa1 = DAT_001f6aa1 ^ 0x69;
          DAT_001f6aa2 = DAT_001f6aa2 ^ 0x69;
          DAT_001f6a9f = DAT_001f6a9f ^ 0x69;
          DAT_001f8224 = '\x01';
          lVar4 = -0x34c850c5a84f18e9;
        }
        goto LAB_001730f4;
      }
      lVar4 = -0x6f8b4935e625164f;
      if ((lVar3 == -0x2fd038e5b15bbca) || (lVar4 = lVar3, lVar3 != 0xcb1f7856ef3e66a))
      goto LAB_001730f4;
      (**(code **)(*param_2 + 0x80))(param_2);
      (**(code **)(*param_2 + 0x88))(param_2);
    }
  }
  else {
    if (0x69e4dec6b0ebb25b < lVar3) {
      if (lVar3 < 0x7530c2a066bfdf74) {
        if (lVar3 == 0x69e4dec6b0ebb25c) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          local_80 = local_90;
          *param_1 = 0x19;
          lVar4 = 0x5a11fb51b50ab0a1;
        }
        else if (lVar3 == 0x6a86f9a27a48a6ad) {
          local_80 = 0;
          lVar4 = 0x5a11fb51b50ab0a1;
        }
      }
      else if (lVar3 == 0x7530c2a066bfdf74) {
        lVar4 = -0x1bdd340fae5291cd;
        if (DAT_001f8224 == '\0') {
          lVar4 = 0x3db6504342eeb5c6;
        }
      }
      else if (lVar3 == 0x7dfcf83e979bea6c) {
        unaff_x27 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
        lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar4 = 0x3cfbe864c3a77289;
        if (lVar3 != 0) {
          lVar4 = -0x43f0442fbe464458;
        }
      }
      else if (lVar3 == 0x7f14270c3590edea) {
        lVar4 = -0x5315ab5ac0fea1f6;
      }
      goto LAB_001730f4;
    }
    if (lVar3 < 0x5a3aced94a588832) {
      if (lVar3 == 0x50fa2b6150a290e8) {
        local_68 = (**(code **)(*param_2 + 0x538))(param_2,param_4);
        lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar4 = -0x15b360a54b4976ea;
        if (lVar3 != 0) {
          lVar4 = -0x24ee3c5e246ec436;
        }
      }
      else if (lVar3 == 0x5a11fb51b50ab0a1) {
        (**(code **)(*param_2 + 0xb8))(param_2,local_68);
        local_b0 = local_80;
        lVar4 = -0x5d31cafea13d402f;
        if (local_80 != 0) {
          lVar4 = -0x7c087be1081466e1;
        }
      }
      goto LAB_001730f4;
    }
    if (lVar3 != 0x5a3aced94a588832) {
      if (lVar3 == 0x5b07d13b9a2c4c47) {
        *param_1 = local_6c;
        lVar4 = -0x6738ab477cd999dd;
        unaff_x28 = unaff_x19;
        unaff_w23 = param_2 != (long *)0x0;
      }
      else if (lVar3 == 0x686aafe978de1dba) {
        unaff_x19 = 0;
        local_6c = 3;
        lVar4 = 0x5b07d13b9a2c4c47;
      }
      goto LAB_001730f4;
    }
  }
  local_6c = 0xf;
  lVar4 = 0x5b07d13b9a2c4c47;
  unaff_x19 = unaff_x27;
  goto LAB_001730f4;
}


