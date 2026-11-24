// Function: FUN_00189ac8
// Entry: 00189ac8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00189ac8(int *param_1,long *param_2,long param_3,long *param_4)

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
  
  lVar1 = -0x1839f45c16b2762a;
  if (param_3 != 0) {
    lVar1 = -0x67b7e98c6f096227;
  }
  lVar4 = 0x6e562ade2b985666;
LAB_00189bec:
  while (lVar3 = lVar4, lVar4 = lVar3, lVar3 < 0x3f43b29580a0e29) {
    if (lVar3 < -0x3d76873282d502ab) {
      if (lVar3 < -0x4ba34784b63fa2ad) {
        if (lVar3 < -0x71ace05b798941c5) {
          if (lVar3 == -0x761cdbd517382106) {
            *param_1 = local_74;
            lVar4 = -0x2abb7032b43cefec;
          }
          else if (lVar3 == -0x7418835b513aa96c) {
            iVar2 = FUN_001ebe70(0,1,&DAT_001f81a0);
            lVar4 = 0x2c174db2a95631f;
            if (iVar2 != 0) {
              lVar4 = 0x75be0783ac392aaa;
            }
          }
        }
        else {
          lVar4 = -0x2abb7032b43cefec;
          if (lVar3 != -0x71ace05b798941c5) {
            if (lVar3 == -0x67b7e98c6f096227) {
              unaff_x27 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
              lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
              lVar4 = 0x3d39c5f1eec81f28;
              if (lVar3 != 0) {
                lVar4 = -0x43a1262e7afc52cc;
              }
            }
            else {
              lVar4 = lVar3;
              if (lVar3 == -0x5031929c25822247) {
                local_74 = 0x19;
                goto LAB_00189bd8;
              }
            }
          }
        }
      }
      else if (lVar3 < -0x42e4dcef3e9c533c) {
        lVar4 = 0x4b145a13fac2d08d;
        if ((lVar3 != -0x4ba34784b63fa2ad) && (lVar4 = lVar3, lVar3 == -0x43a1262e7afc52cc)) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          lVar4 = 0x14dcb8d334440025;
          if (unaff_x27 != 0) {
            lVar4 = 0x708113e7c2c5a431;
          }
          *param_1 = 0xf;
        }
      }
      else if (lVar3 == -0x4201161af6611c9c) {
        lVar4 = 0x71a348daf5e1926d;
        if (DAT_001f8252 == '\0') {
          lVar4 = -0x7d7127e33674ac3;
        }
      }
      else {
        if (lVar3 == -0x3e6db780cb8d076e) {
          local_84 = 0xf;
          goto LAB_0018a330;
        }
        if (lVar3 == -0x42e4dcef3e9c533c) {
          return;
        }
      }
    }
    else if (lVar3 < -0xd3ef42990e44b83) {
      if (lVar3 < -0x1fdb8d73dd1d66d5) {
        if (lVar3 == -0x3d76873282d502ab) {
          lVar4 = (**(code **)(*param_2 + 0x2f8))(param_2,param_3,local_90);
          *param_4 = lVar4;
          lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar4 = 0x330ca9647f1fe9c9;
          if (lVar3 != 0) {
            lVar4 = 0x3f43b29580a0e29;
          }
        }
        else if (lVar3 == -0x2abb7032b43cefec) {
          (**(code **)(*param_2 + 0xb8))(param_2,unaff_x27);
          lVar4 = 0x34d7ce1a9b4e76c1;
          if (*param_1 != 0) {
            lVar4 = -0x4ba34784b63fa2ad;
          }
        }
      }
      else if (lVar3 == -0x1fdb8d73dd1d66d5) {
        lVar4 = 0x605e2b62e497eb65;
        if (local_90 != 0) {
          lVar4 = -0x3d76873282d502ab;
        }
      }
      else if (lVar3 == -0x1839f45c16b2762a) {
        local_84 = 3;
LAB_0018a330:
        lVar4 = 0x9efeb0943450822;
      }
    }
    else if (lVar3 < -0x7d7127e33674ac3) {
      lVar4 = 0x62edf5f78eba0964;
      if ((lVar3 != -0xd3ef42990e44b83) && (lVar4 = lVar3, lVar3 == -0xc3d77264a239280)) {
        DAT_001f6ff8 = DAT_001f6ff8 ^ 0x7d;
        DAT_001f6ff9 = DAT_001f6ff9 ^ 0x7d;
        DAT_001f6ffa = DAT_001f6ffa ^ 0x7d;
        DAT_001f6ffb = DAT_001f6ffb ^ 0x7d;
        DAT_001f6ff0 = DAT_001f6ff0 ^ 0x7d7d7d7d7d7d7d7d;
        DAT_001f8251 = '\x01';
        lVar4 = -0x1cb43f90f7a98f6;
      }
    }
    else if (lVar3 == -0x7d7127e33674ac3) {
      _DAT_001f7000 = _DAT_001f7000 ^ 0xafafafafafafafaf;
      uRam00000000001f7008 = uRam00000000001f7008 ^ 0xafafafafafafafaf;
      _DAT_001f7010 = _DAT_001f7010 ^ 0xafafafafafafafaf;
      uRam00000000001f7018 = uRam00000000001f7018 ^ 0xafafafafafafafaf;
      DAT_001f7020 = DAT_001f7020 ^ 0xaf;
      DAT_001f8252 = '\x01';
      lVar4 = 0x2e7c4efc8492ae85;
    }
    else if (lVar3 == -0x1cb43f90f7a98f6) {
      DAT_001f81a0 = 0;
      local_90 = (**(code **)(*param_2 + 0x2f0))(param_2,unaff_x27,&DAT_001f6ff0,&DAT_001f7000);
      lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
      lVar4 = -0x1fdb8d73dd1d66d5;
      if (lVar3 != 0) {
        lVar4 = 0x3037ffa4df435e8b;
      }
    }
    else if (lVar3 == 0x2c174db2a95631f) {
      lVar4 = 0x49c9024f5316a37b;
      if (DAT_001f8251 == '\0') {
        lVar4 = -0xc3d77264a239280;
      }
    }
  }
  if (0x49c9024f5316a37a < lVar3) {
    if (lVar3 < 0x62edf5f78eba0964) {
      if (lVar3 < 0x4fb188d793996c1d) {
        lVar4 = -0x1cb43f90f7a98f6;
        if ((lVar3 != 0x49c9024f5316a37b) && (lVar4 = lVar3, lVar3 == 0x4b145a13fac2d08d)) {
          *param_4 = 0;
          lVar4 = -0x42e4dcef3e9c533c;
        }
      }
      else {
        lVar4 = 0x62edf5f78eba0964;
        if ((lVar3 != 0x4fb188d793996c1d) && (lVar4 = lVar3, lVar3 == 0x605e2b62e497eb65)) {
          local_74 = 0xf;
LAB_00189bd8:
          lVar4 = -0x761cdbd517382106;
        }
      }
    }
    else if (lVar3 < 0x708113e7c2c5a431) {
      if (lVar3 == 0x62edf5f78eba0964) {
        iVar2 = FUN_001ebe70(0,1,&DAT_001f81a4);
        lVar4 = -0x4201161af6611c9c;
        if (iVar2 != 0) {
          lVar4 = -0xd3ef42990e44b83;
        }
      }
      else if (lVar3 == 0x6e562ade2b985666) {
        lVar4 = lVar1;
      }
    }
    else {
      lVar4 = -0x2abb7032b43cefec;
      if (((lVar3 != 0x708113e7c2c5a431) &&
          (lVar4 = 0x2e7c4efc8492ae85, lVar3 != 0x71a348daf5e1926d)) &&
         (lVar4 = lVar3, lVar3 == 0x75be0783ac392aaa)) {
        lVar4 = -0x7418835b513aa96c;
      }
    }
    goto LAB_00189bec;
  }
  if (lVar3 < 0x3037ffa4df435e8b) {
    if (0x14dcb8d334440024 < lVar3) {
      lVar4 = 0x4b145a13fac2d08d;
      if ((lVar3 != 0x14dcb8d334440025) && (lVar4 = lVar3, lVar3 == 0x2e7c4efc8492ae85)) {
        DAT_001f81a4 = 0;
        lVar4 = -0x7418835b513aa96c;
      }
      goto LAB_00189bec;
    }
    if (lVar3 != 0x3f43b29580a0e29) {
      if (lVar3 == 0x9efeb0943450822) {
        *param_1 = local_84;
        lVar4 = 0x4b145a13fac2d08d;
      }
      goto LAB_00189bec;
    }
    local_88 = 0x19;
  }
  else {
    if (0x34d7ce1a9b4e76c0 < lVar3) {
      lVar4 = -0x42e4dcef3e9c533c;
      if (lVar3 != 0x34d7ce1a9b4e76c1) {
        if (lVar3 == 0x3b2de8edc3b18b7d) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          local_74 = local_88;
          goto LAB_00189bd8;
        }
        lVar4 = lVar3;
        if (lVar3 == 0x3d39c5f1eec81f28) {
          lVar4 = -0x3e6db780cb8d076e;
          if (unaff_x27 != 0) {
            lVar4 = 0x4fb188d793996c1d;
          }
        }
      }
      goto LAB_00189bec;
    }
    if (lVar3 != 0x3037ffa4df435e8b) {
      if (lVar3 == 0x330ca9647f1fe9c9) {
        lVar4 = -0x5031929c25822247;
        if (*param_4 != 0) {
          lVar4 = -0x71ace05b798941c5;
        }
      }
      goto LAB_00189bec;
    }
    local_88 = 0xf;
  }
  lVar4 = 0x3b2de8edc3b18b7d;
  goto LAB_00189bec;
}


