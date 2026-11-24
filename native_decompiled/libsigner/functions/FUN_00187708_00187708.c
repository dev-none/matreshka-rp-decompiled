// Function: FUN_00187708
// Entry: 00187708

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00187708(undefined4 *param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  undefined4 local_8c;
  long local_88;
  undefined4 local_7c;
  
  lVar1 = 0x1d661c397aef706e;
  if (param_4 == 0 || param_3 == 0) {
    lVar1 = 0x13d2507dd8409af9;
  }
  lVar4 = -0x6e4a66999490ea54;
LAB_00187820:
  while (lVar3 = lVar4, lVar4 = lVar3, 0x1b8a490d112319a2 < lVar3) {
    if (lVar3 < 0x5b29810836cc9611) {
      if (lVar3 < 0x2898d07d68d53ed0) {
        if (lVar3 < 0x272eb6725bf70139) {
          lVar4 = -0x720923deefa9dfcd;
          if ((lVar3 != 0x1b8a490d112319a3) && (lVar4 = lVar3, lVar3 == 0x1d661c397aef706e)) {
            lVar4 = 0x594f5c1f7d4a1ed0;
          }
        }
        else {
          lVar4 = 0x594f5c1f7d4a1ed0;
          if ((lVar3 != 0x272eb6725bf70139) && (lVar4 = lVar3, lVar3 == 0x27d517441ba4efc1)) {
            lVar4 = 0x473fb818c8d1df7d;
            if (DAT_001f824c == '\0') {
              lVar4 = 0x66f9fe45b4485017;
            }
          }
        }
      }
      else if (lVar3 < 0x2ece56e42a56ddb3) {
        if (lVar3 == 0x2898d07d68d53ed0) {
          DAT_001f818c = 0;
          local_88 = (**(code **)(*param_2 + 0x108))(param_2,unaff_x19,&DAT_001f6f58,&DAT_001f6f70);
          lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar4 = 0x6f1c968928829fb7;
          if (lVar3 != 0) {
            lVar4 = 0x2cca9336c61bdffb;
          }
        }
        else if (lVar3 == 0x2cca9336c61bdffb) {
          local_7c = 0xf;
LAB_00187d34:
          lVar4 = -0xe9dc4904d16c8f4;
        }
      }
      else {
        lVar4 = -0x2a59d677767bdc5b;
        if (((lVar3 != 0x2ece56e42a56ddb3) &&
            (lVar4 = 0x2898d07d68d53ed0, lVar3 != 0x473fb818c8d1df7d)) &&
           (lVar4 = lVar3, lVar3 == 0x594f5c1f7d4a1ed0)) {
          iVar2 = FUN_001ebe70(0,1,&DAT_001f8188);
          lVar4 = -0x6ebed165ead34d1e;
          if (iVar2 != 0) {
            lVar4 = 0x272eb6725bf70139;
          }
        }
      }
    }
    else if (lVar3 < 0x6f1c968928829fb7) {
      if (lVar3 < 0x66f9fe45b4485017) {
        lVar4 = 0x29b3c4006f556ef;
        if ((lVar3 != 0x5b29810836cc9611) && (lVar4 = lVar3, lVar3 == 0x5da26d43bbbc4a20)) {
          lVar4 = -0x2a59d677767bdc5b;
        }
      }
      else if (lVar3 == 0x66f9fe45b4485017) {
        DAT_001f6f60 = DAT_001f6f60 ^ 0xb1;
        DAT_001f6f62 = DAT_001f6f62 ^ 0xb1;
        DAT_001f6f61 = DAT_001f6f61 ^ 0xb1;
        DAT_001f6f58 = DAT_001f6f58 ^ 0xb1b1b1b1b1b1b1b1;
        DAT_001f824c = '\x01';
        lVar4 = 0x2898d07d68d53ed0;
      }
      else if (lVar3 == 0x6d580e7ea83d7c26) {
        DAT_001f8188 = 0;
        unaff_x19 = (**(code **)(*param_2 + 0x30))(param_2,&DAT_001f6f40);
        lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar4 = -0x7a9944824ff48c3d;
        if (lVar3 != 0) {
          lVar4 = -0x73921ada99323f97;
        }
      }
    }
    else if (lVar3 < 0x70346034deb5f84d) {
      if (lVar3 == 0x6f1c968928829fb7) {
        lVar4 = -0x39d147d84652f310;
        if (local_88 != 0) {
          lVar4 = 0x75f5096b676b126c;
        }
      }
      else if (lVar3 == 0x6f2385d59df8b6f7) {
        _DAT_001f6f70 = _DAT_001f6f70 ^ 0xd0d0d0d0d0d0d0d;
        uRam00000000001f6f78 = uRam00000000001f6f78 ^ 0xd0d0d0d0d0d0d0d;
        _DAT_001f6f80 = _DAT_001f6f80 ^ 0xd0d0d0d0d0d0d0d;
        uRam00000000001f6f88 = uRam00000000001f6f88 ^ 0xd0d0d0d0d0d0d0d;
        DAT_001f6f90 = DAT_001f6f90 ^ 0xd;
        DAT_001f824d = '\x01';
        lVar4 = -0x720923deefa9dfcd;
      }
    }
    else if (lVar3 == 0x70346034deb5f84d) {
      (**(code **)(*param_2 + 0xb8))(param_2,unaff_x19);
      lVar4 = 0x29b3c4006f556ef;
    }
    else if (lVar3 == 0x73f46f1badd613b4) {
      DAT_001f6f50 = DAT_001f6f50 ^ 0x1d;
      DAT_001f6f51 = DAT_001f6f51 ^ 0x1d;
      DAT_001f6f52 = DAT_001f6f52 ^ 0x1d;
      DAT_001f6f53 = DAT_001f6f53 ^ 0x1d;
      DAT_001f6f54 = DAT_001f6f54 ^ 0x1d;
      _DAT_001f6f40 = _DAT_001f6f40 ^ 0x1d1d1d1d1d1d1d1d;
      uRam00000000001f6f48 = uRam00000000001f6f48 ^ 0x1d1d1d1d1d1d1d1d;
      DAT_001f824b = '\x01';
      lVar4 = 0x6d580e7ea83d7c26;
    }
    else if (lVar3 == 0x75f5096b676b126c) {
      (**(code **)(*param_2 + 0x1e8))(param_2,param_3,local_88,param_4);
      lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
      lVar4 = 0x8be0a6c60961726;
      if (lVar3 != 0) {
        lVar4 = -0x8db71a1cb84e341;
      }
    }
  }
  if (-0x39d147d84652f311 < lVar3) {
    if (lVar3 < 0x462ed2464438bc5) {
      if (lVar3 < -0xe9dc4904d16c8f4) {
        if (lVar3 == -0x39d147d84652f310) {
          local_8c = 0xf;
LAB_00188214:
          lVar4 = 0x462ed2464438bc5;
        }
        else if (lVar3 == -0x2a59d677767bdc5b) {
          iVar2 = FUN_001ebe70(0,1,&DAT_001f8190);
          lVar4 = -0x6f8267a76982804a;
          if (iVar2 != 0) {
            lVar4 = 0x2ece56e42a56ddb3;
          }
        }
      }
      else {
        if (lVar3 == -0xe9dc4904d16c8f4) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          local_8c = local_7c;
          goto LAB_00188214;
        }
        if (lVar3 == -0x8db71a1cb84e341) {
          local_7c = 0x1a;
          goto LAB_00187d34;
        }
        if (lVar3 == 0x29b3c4006f556ef) {
          return;
        }
      }
    }
    else if (lVar3 < 0xcd2efae31551926) {
      if (lVar3 == 0x462ed2464438bc5) {
        *param_1 = local_8c;
        lVar4 = 0x70346034deb5f84d;
      }
      else if (lVar3 == 0x8be0a6c60961726) {
        lVar4 = 0x70346034deb5f84d;
      }
    }
    else {
      lVar4 = 0x70346034deb5f84d;
      if (lVar3 != 0xcd2efae31551926) {
        if (lVar3 == 0x13d2507dd8409af9) {
          *param_1 = 3;
          lVar4 = 0x29b3c4006f556ef;
        }
        else {
          lVar4 = lVar3;
          if (lVar3 == 0x156971be9a93a3ca) {
            lVar4 = 0x6d580e7ea83d7c26;
          }
        }
      }
    }
    goto LAB_00187820;
  }
  if (-0x6f8267a76982804b < lVar3) {
    if (lVar3 < -0x6e4a66999490ea54) {
      if (lVar3 == -0x6f8267a76982804a) {
        lVar4 = 0x1b8a490d112319a3;
        if (DAT_001f824d == '\0') {
          lVar4 = 0x6f2385d59df8b6f7;
        }
      }
      else if (lVar3 == -0x6ebed165ead34d1e) {
        lVar4 = 0x156971be9a93a3ca;
        if (DAT_001f824b == '\0') {
          lVar4 = 0x73f46f1badd613b4;
        }
      }
    }
    else {
      lVar4 = lVar1;
      if (lVar3 != -0x6e4a66999490ea54) {
        if (lVar3 == -0x5bf91e2f8ecef0d7) {
          iVar2 = FUN_001ebe70(0,1,&DAT_001f818c);
          lVar4 = 0x27d517441ba4efc1;
          if (iVar2 != 0) {
            lVar4 = -0x57178381153d360f;
          }
        }
        else {
          lVar4 = lVar3;
          if (lVar3 == -0x57178381153d360f) {
            lVar4 = -0x5bf91e2f8ecef0d7;
          }
        }
      }
    }
    goto LAB_00187820;
  }
  if (lVar3 < -0x720923deefa9dfcd) {
    if (lVar3 == -0x7a9944824ff48c3d) {
      lVar4 = -0x703b8ac831a93353;
      if (unaff_x19 != 0) {
        lVar4 = 0x5da26d43bbbc4a20;
      }
      goto LAB_00187820;
    }
    if (lVar3 != -0x73921ada99323f97) goto LAB_00187820;
    (**(code **)(*param_2 + 0x80))(param_2);
    (**(code **)(*param_2 + 0x88))(param_2);
    lVar4 = 0x5b29810836cc9611;
    if (unaff_x19 != 0) {
      lVar4 = 0xcd2efae31551926;
    }
  }
  else {
    if (lVar3 == -0x720923deefa9dfcd) {
      DAT_001f8190 = 0;
      lVar4 = -0x5bf91e2f8ecef0d7;
      goto LAB_00187820;
    }
    if (lVar3 != -0x703b8ac831a93353) goto LAB_00187820;
    lVar4 = 0x29b3c4006f556ef;
  }
  *param_1 = 0xf;
  goto LAB_00187820;
}


