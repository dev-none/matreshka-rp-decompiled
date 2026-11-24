// Function: FUN_00173d0c
// Entry: 00173d0c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00173d0c(int *param_1,long *param_2,long param_3,long *param_4)

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
  
  lVar1 = 0x2583f3295d26c72;
  if (param_3 != 0) {
    lVar1 = 0x22b999fe7ba950f8;
  }
  lVar4 = 0x234631381c95917;
LAB_00173e10:
  lVar3 = lVar4;
  lVar4 = lVar3;
  if (0x2583f3295d26c71 < lVar3) {
    if (lVar3 < 0x4752592ffa77a3bc) {
      if (0x22b999fe7ba950f7 < lVar3) {
        if (lVar3 < 0x308383be08146ce0) {
          if (lVar3 == 0x22b999fe7ba950f8) {
            unaff_x27 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
            lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar4 = 0x79cef8aa849ce9df;
            if (lVar3 != 0) {
              lVar4 = -0x53ae62bfdb3205cc;
            }
          }
          else if (lVar3 == 0x24d86171e88d2e6f) {
            lVar4 = -0x31ec1aa2761bff08;
          }
        }
        else {
          lVar4 = 0x4752592ffa77a3bc;
          if (((lVar3 != 0x308383be08146ce0) && (lVar3 != 0x40819e97d442dc9d)) &&
             (lVar4 = lVar3, lVar3 == 0x41e801842f93af1a)) {
            lVar4 = -0x23866d175297b5;
            if (DAT_001f8226 == '\0') {
              lVar4 = 0x6ee5bc0885d24dc;
            }
          }
        }
        goto LAB_00173e10;
      }
      if (0x1022c6f24a7f67ee < lVar3) {
        if (lVar3 == 0x1022c6f24a7f67ef) {
          lVar4 = (**(code **)(*param_2 + 0x110))(param_2,param_3,local_90);
          *param_4 = lVar4;
          lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar4 = 0x68e9eef73caee0ca;
          if (lVar3 != 0) {
            lVar4 = 0x619c4635ae2a2aef;
          }
        }
        else if (lVar3 == 0x1f1b1150db66d00d) {
          DAT_001f80ec = 0;
          local_90 = (**(code **)(*param_2 + 0x108))(param_2,unaff_x27,&DAT_001f6ad8,&DAT_001f6af0);
          lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar4 = -0x680189225e7a2da1;
          if (lVar3 != 0) {
            lVar4 = -0x2b4bbd77afad9498;
          }
        }
        goto LAB_00173e10;
      }
      if (lVar3 != 0x2583f3295d26c72) {
        if (lVar3 == 0x6ee5bc0885d24dc) {
          DAT_001f6ae0 = DAT_001f6ae0 ^ 10;
          DAT_001f6ad8 = DAT_001f6ad8 ^ 0xa0a0a0a0a0a0a0a;
          DAT_001f8226 = '\x01';
          lVar4 = 0x1f1b1150db66d00d;
        }
        goto LAB_00173e10;
      }
      local_84 = 3;
    }
    else {
      if (0x619c4635ae2a2aee < lVar3) {
        if (lVar3 < 0x6ea5f6ad327d8cfb) {
          if (lVar3 == 0x619c4635ae2a2aef) {
            local_88 = 0x19;
LAB_0017471c:
            lVar4 = 0x7a32d0a09c5321b1;
          }
          else if (lVar3 == 0x68e9eef73caee0ca) {
            lVar4 = 0x6ea5f6ad327d8cfb;
            if (*param_4 != 0) {
              lVar4 = -0x5f4ad0a0148f22e;
            }
          }
          goto LAB_00173e10;
        }
        if (lVar3 == 0x6ea5f6ad327d8cfb) {
          local_74 = 0x19;
          goto LAB_00173dfc;
        }
        if (lVar3 == 0x79cef8aa849ce9df) {
          lVar4 = 0x5b1704f1c1f5e001;
          if (unaff_x27 != 0) {
            lVar4 = -0x2896e27364a1da3f;
          }
          goto LAB_00173e10;
        }
        if (lVar3 != 0x7a32d0a09c5321b1) goto LAB_00173e10;
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        local_74 = local_88;
        goto LAB_00173dfc;
      }
      if (lVar3 < 0x5847f4142010501f) {
        if (lVar3 == 0x4752592ffa77a3bc) {
          *param_4 = 0;
          lVar4 = -0x31ec1aa2761bff08;
        }
        else if (lVar3 == 0x47e69b36ea2f4aee) {
          lVar4 = -0x25f88141516142db;
        }
        goto LAB_00173e10;
      }
      if (lVar3 == 0x5847f4142010501f) {
        DAT_001f80f0 = 0;
        lVar4 = -0x79fed34670c0dc34;
        goto LAB_00173e10;
      }
      if (lVar3 != 0x5b1704f1c1f5e001) goto LAB_00173e10;
      local_84 = 0xf;
    }
    lVar4 = -0x2bfea02c4d487d66;
    goto LAB_00173e10;
  }
  if (-0x53ae62bfdb3205cd < lVar3) {
    if (lVar3 < -0x2896e27364a1da3f) {
      if (lVar3 < -0x31ec1aa2761bff08) {
        if (lVar3 == -0x53ae62bfdb3205cc) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          lVar4 = 0x308383be08146ce0;
          if (unaff_x27 != 0) {
            lVar4 = -0x4e944ab97fb0767a;
          }
          *param_1 = 0xf;
        }
        else if (lVar3 == -0x4e944ab97fb0767a) {
          lVar4 = -0x6881d79d4cb15c9e;
        }
      }
      else if (lVar3 == -0x2bfea02c4d487d66) {
        *param_1 = local_84;
        lVar4 = 0x4752592ffa77a3bc;
      }
      else {
        if (lVar3 == -0x2b4bbd77afad9498) {
          local_88 = 0xf;
          goto LAB_0017471c;
        }
        if (lVar3 == -0x31ec1aa2761bff08) {
          return;
        }
      }
    }
    else if (lVar3 < -0x5f4ad0a0148f22e) {
      lVar4 = -0x25f88141516142db;
      if ((lVar3 != -0x2896e27364a1da3f) && (lVar4 = lVar3, lVar3 == -0x25f88141516142db)) {
        iVar2 = FUN_001ebe70(0,1,&DAT_001f80f0);
        lVar4 = -0x5bd66a47381358a3;
        if (iVar2 != 0) {
          lVar4 = 0x47e69b36ea2f4aee;
        }
      }
    }
    else {
      lVar4 = -0x6881d79d4cb15c9e;
      if (((lVar3 != -0x5f4ad0a0148f22e) && (lVar4 = 0x1f1b1150db66d00d, lVar3 != -0x23866d175297b5)
          ) && (lVar4 = lVar3, lVar3 == 0x234631381c95917)) {
        lVar4 = lVar1;
      }
    }
    goto LAB_00173e10;
  }
  if (lVar3 < -0x6881d79d4cb15c9e) {
    if (lVar3 < -0x6edd782ffdcff57a) {
      if (lVar3 == -0x7ae785cbc6a1d824) {
        DAT_001f6b00 = DAT_001f6b00 ^ 0x60;
        DAT_001f6b01 = DAT_001f6b01 ^ 0x60;
        DAT_001f6b02 = DAT_001f6b02 ^ 0x60;
        DAT_001f6b03 = DAT_001f6b03 ^ 0x60;
        DAT_001f6b04 = DAT_001f6b04 ^ 0x60;
        _DAT_001f6af0 = _DAT_001f6af0 ^ 0x6060606060606060;
        uRam00000000001f6af8 = uRam00000000001f6af8 ^ 0x6060606060606060;
        DAT_001f8227 = '\x01';
        lVar4 = 0x5847f4142010501f;
      }
      else if (lVar3 == -0x79fed34670c0dc34) {
        iVar2 = FUN_001ebe70(0,1,&DAT_001f80ec);
        lVar4 = 0x41e801842f93af1a;
        if (iVar2 != 0) {
          lVar4 = -0x6aa7492f140c06ee;
        }
      }
    }
    else if (lVar3 == -0x6edd782ffdcff57a) {
      *param_1 = local_74;
      lVar4 = -0x6881d79d4cb15c9e;
    }
    else if (lVar3 == -0x6aa7492f140c06ee) {
      lVar4 = -0x79fed34670c0dc34;
    }
    goto LAB_00173e10;
  }
  if (lVar3 < -0x636f7535c726478e) {
    if (lVar3 == -0x6881d79d4cb15c9e) {
      (**(code **)(*param_2 + 0xb8))(param_2,unaff_x27);
      lVar4 = 0x24d86171e88d2e6f;
      if (*param_1 != 0) {
        lVar4 = 0x40819e97d442dc9d;
      }
    }
    else if (lVar3 == -0x680189225e7a2da1) {
      lVar4 = -0x57072be448d4c849;
      if (local_90 != 0) {
        lVar4 = 0x1022c6f24a7f67ef;
      }
    }
    goto LAB_00173e10;
  }
  lVar4 = 0x5847f4142010501f;
  if (lVar3 == -0x636f7535c726478e) goto LAB_00173e10;
  if (lVar3 == -0x5bd66a47381358a3) {
    lVar4 = -0x636f7535c726478e;
    if (DAT_001f8227 == '\0') {
      lVar4 = -0x7ae785cbc6a1d824;
    }
    goto LAB_00173e10;
  }
  lVar4 = lVar3;
  if (lVar3 != -0x57072be448d4c849) goto LAB_00173e10;
  local_74 = 0xf;
LAB_00173dfc:
  lVar4 = -0x6edd782ffdcff57a;
  goto LAB_00173e10;
}


