// Function: FUN_001789b4
// Entry: 001789b4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001789b4(int *param_1,long *param_2,long param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x27;
  long local_a0;
  int local_98;
  int local_94;
  int local_7c;
  
  lVar1 = 0x64a34030189a08f;
  if (param_3 != 0) {
    lVar1 = -0x73b41bb6cacfcd0c;
  }
  lVar4 = -0x4154810d714b2ad1;
LAB_00178ab4:
  while (lVar3 = lVar4, lVar4 = lVar3, 0xafa449b1d8fc46c < lVar3) {
    if (lVar3 < 0x4cf3a029a1fce053) {
      if (lVar3 < 0x2f2e384764a31bcb) {
        if (lVar3 < 0x2a48f668877cdd32) {
          if (lVar3 == 0x2295d16d4cebc552) {
            (**(code **)(*param_2 + 0x80))(param_2);
            (**(code **)(*param_2 + 0x88))(param_2);
            lVar4 = -0x3211a5a2bdd4e786;
            if (unaff_x27 != 0) {
              lVar4 = 0x2a48f668877cdd32;
            }
            *param_1 = 0xf;
          }
          else {
            lVar4 = 0x2f2e384764a31bcb;
            if ((lVar3 != 0x253cafb9335e0ab4) && (lVar4 = lVar3, lVar3 == 0xafa449b1d8fc46d)) {
              return;
            }
          }
        }
        else {
          lVar4 = -0x3668951722a1537d;
          if ((lVar3 != 0x2a48f668877cdd32) && (lVar4 = lVar3, lVar3 == 0x2ec51580788120a1)) {
            DAT_001f811c = 0;
            local_a0 = (**(code **)(*param_2 + 0x108))
                                 (param_2,unaff_x27,&DAT_001f6c60,&DAT_001f6c70);
            lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar4 = 0x76d1d42eecd0e862;
            if (lVar3 != 0) {
              lVar4 = -0xc99df4c3f8a6996;
            }
          }
        }
      }
      else if (lVar3 < 0x3a9c231f2d8a4e3c) {
        if (lVar3 == 0x2f2e384764a31bcb) {
          DAT_001f8120 = 0;
          lVar4 = -0x6c22d72709c1d475;
        }
        else if (lVar3 == 0x36f58c134bb4da90) {
          *param_1 = local_94;
          lVar4 = 0x3a9c231f2d8a4e3c;
        }
      }
      else if (lVar3 == 0x3a9c231f2d8a4e3c) {
        *param_4 = 0;
        lVar4 = 0xafa449b1d8fc46d;
      }
      else if (lVar3 == 0x41b289a2dff1803f) {
        DAT_001f6c88 = DAT_001f6c88 ^ 0x35;
        DAT_001f6c89 = DAT_001f6c89 ^ 0x35;
        DAT_001f6c8a = DAT_001f6c8a ^ 0x35;
        DAT_001f6c8b = DAT_001f6c8b ^ 0x35;
        _DAT_001f6c70 = _DAT_001f6c70 ^ 0x3535353535353535;
        uRam00000000001f6c78 = uRam00000000001f6c78 ^ 0x3535353535353535;
        DAT_001f6c8c = DAT_001f6c8c ^ 0x35;
        DAT_001f6c80 = DAT_001f6c80 ^ 0x3535353535353535;
        DAT_001f8233 = '\x01';
        lVar4 = 0x2f2e384764a31bcb;
      }
      else if (lVar3 == 0x49764ceab7d1a78c) {
        iVar2 = FUN_001ebe70(0,1,&DAT_001f8120);
        lVar4 = 0x4cf3a029a1fce053;
        if (iVar2 != 0) {
          lVar4 = -0x23c0cf8654a78a4a;
        }
      }
    }
    else if (lVar3 < 0x6958e2c49555046a) {
      if (lVar3 < 0x59d216b5400806b3) {
        if (lVar3 == 0x4cf3a029a1fce053) {
          lVar4 = 0x253cafb9335e0ab4;
          if (DAT_001f8233 == '\0') {
            lVar4 = 0x41b289a2dff1803f;
          }
        }
        else if (lVar3 == 0x51fadc63073821de) {
          local_7c = 0xf;
          goto LAB_00178aa0;
        }
      }
      else if (lVar3 == 0x59d216b5400806b3) {
        DAT_001f6c68 = DAT_001f6c68 ^ 0x65;
        DAT_001f6c69 = DAT_001f6c69 ^ 0x65;
        DAT_001f6c6a = DAT_001f6c6a ^ 0x65;
        DAT_001f6c6b = DAT_001f6c6b ^ 0x65;
        DAT_001f6c6c = DAT_001f6c6c ^ 0x65;
        DAT_001f6c6d = DAT_001f6c6d ^ 0x65;
        DAT_001f6c60 = DAT_001f6c60 ^ 0x6565656565656565;
        DAT_001f8232 = '\x01';
        lVar4 = 0x2ec51580788120a1;
      }
      else if (lVar3 == 0x601969adc88064ff) {
        lVar4 = (**(code **)(*param_2 + 0x110))(param_2,param_3,local_a0);
        *param_4 = lVar4;
        lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar4 = 0x6db8b65106c88b15;
        if (lVar3 != 0) {
          lVar4 = -0x1486d5613cf26c5a;
        }
      }
    }
    else if (lVar3 < 0x7573cc54513b5ce4) {
      if (lVar3 == 0x6958e2c49555046a) {
        lVar4 = 0x7619f2f58e1fa273;
        if (DAT_001f8232 == '\0') {
          lVar4 = 0x59d216b5400806b3;
        }
      }
      else if (lVar3 == 0x6db8b65106c88b15) {
        lVar4 = -0x2a23b7cdbb09e17d;
        if (*param_4 != 0) {
          lVar4 = -0x3aaab867c5c68649;
        }
      }
    }
    else if (lVar3 == 0x7573cc54513b5ce4) {
      local_94 = 0xf;
LAB_001792e8:
      lVar4 = 0x36f58c134bb4da90;
    }
    else {
      lVar4 = 0x2ec51580788120a1;
      if ((lVar3 != 0x7619f2f58e1fa273) && (lVar4 = lVar3, lVar3 == 0x76d1d42eecd0e862)) {
        lVar4 = 0x51fadc63073821de;
        if (local_a0 != 0) {
          lVar4 = 0x601969adc88064ff;
        }
      }
    }
  }
  if (lVar3 < -0x3668951722a1537d) {
    if (-0x4aebcec72c2597a2 < lVar3) {
      if (lVar3 < -0x4154810d714b2ad1) {
        lVar4 = 0x49764ceab7d1a78c;
        if ((lVar3 != -0x4aebcec72c2597a1) && (lVar4 = lVar3, lVar3 == -0x424953ef3462bbe8)) {
          lVar4 = 0xafa449b1d8fc46d;
        }
      }
      else {
        lVar4 = lVar1;
        if (((lVar3 != -0x4154810d714b2ad1) &&
            (lVar4 = -0x3668951722a1537d, lVar3 != -0x3aaab867c5c68649)) &&
           (lVar4 = lVar3, lVar3 == -0x369b3f75eecf530c)) {
          lVar4 = -0x6c22d72709c1d475;
        }
      }
      goto LAB_00178ab4;
    }
    if (lVar3 < -0x50165b36112f161b) {
      if (lVar3 == -0x73b41bb6cacfcd0c) {
        unaff_x27 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
        lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar4 = -0x50165b36112f161b;
        if (lVar3 != 0) {
          lVar4 = 0x2295d16d4cebc552;
        }
      }
      else if (lVar3 == -0x6c22d72709c1d475) {
        iVar2 = FUN_001ebe70(0,1,&DAT_001f811c);
        lVar4 = 0x6958e2c49555046a;
        if (iVar2 != 0) {
          lVar4 = -0x369b3f75eecf530c;
        }
      }
      goto LAB_00178ab4;
    }
    if (lVar3 == -0x50165b36112f161b) {
      lVar4 = 0x7573cc54513b5ce4;
      if (unaff_x27 != 0) {
        lVar4 = -0x4aebcec72c2597a1;
      }
      goto LAB_00178ab4;
    }
    if (lVar3 != -0x4da74647737c4dfb) goto LAB_00178ab4;
    (**(code **)(*param_2 + 0x80))(param_2);
    (**(code **)(*param_2 + 0x88))(param_2);
    local_7c = local_98;
  }
  else {
    if (lVar3 < -0x2a23b7cdbb09e17d) {
      if (lVar3 < -0x3211a5a2bdd4e786) {
        if (lVar3 == -0x3668951722a1537d) {
          (**(code **)(*param_2 + 0xb8))(param_2,unaff_x27);
          lVar4 = -0x424953ef3462bbe8;
          if (*param_1 != 0) {
            lVar4 = -0x360c0f1539ebc480;
          }
        }
        else if (lVar3 == -0x360c0f1539ebc480) {
          lVar4 = 0x3a9c231f2d8a4e3c;
        }
      }
      else {
        lVar4 = 0x3a9c231f2d8a4e3c;
        if ((lVar3 != -0x3211a5a2bdd4e786) && (lVar4 = lVar3, lVar3 == -0x2d8c3ee201ca9c56)) {
          *param_1 = local_7c;
          lVar4 = -0x3668951722a1537d;
        }
      }
      goto LAB_00178ab4;
    }
    if (-0x1486d5613cf26c5b < lVar3) {
      if (lVar3 == -0x1486d5613cf26c5a) {
        local_98 = 0x19;
      }
      else {
        if (lVar3 != -0xc99df4c3f8a6996) {
          if (lVar3 == 0x64a34030189a08f) {
            local_94 = 3;
            goto LAB_001792e8;
          }
          goto LAB_00178ab4;
        }
        local_98 = 0xf;
      }
      lVar4 = -0x4da74647737c4dfb;
      goto LAB_00178ab4;
    }
    if (lVar3 != -0x2a23b7cdbb09e17d) {
      if (lVar3 == -0x23c0cf8654a78a4a) {
        lVar4 = 0x49764ceab7d1a78c;
      }
      goto LAB_00178ab4;
    }
    local_7c = 0x19;
  }
LAB_00178aa0:
  lVar4 = -0x2d8c3ee201ca9c56;
  goto LAB_00178ab4;
}


