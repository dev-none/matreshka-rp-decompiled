// Function: FUN_0018d800
// Entry: 0018d800

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0018d800(int *param_1,long *param_2,long param_3,long *param_4)

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
  
  lVar1 = -0x1ff6074eeed76103;
  if (param_3 != 0) {
    lVar1 = 0x25878a1a4aea702d;
  }
  lVar4 = -0x7bc46f9a8104c8e9;
LAB_0018d904:
  do {
    while (lVar3 = lVar4, lVar4 = lVar3, -0x9d96ccf4b53447c < lVar3) {
      if (lVar3 < 0x27aeee6d030f5f0f) {
        if (lVar3 < 0xe34f317df4fe11a) {
          if (lVar3 < 0x4b8d0234017da64) {
            lVar4 = -0x19918e30b7f1a1ce;
            if ((lVar3 != -0x9d96ccf4b53447b) && (lVar4 = lVar3, lVar3 == -0x25a6e23b72e2587)) {
              lVar4 = (**(code **)(*param_2 + 0x110))(param_2,param_3,local_90);
              *param_4 = lVar4;
              lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
              lVar4 = -0x157e5afa4126e36a;
              if (lVar3 != 0) {
                lVar4 = 0x4b8d0234017da64;
              }
            }
          }
          else if (lVar3 == 0x4b8d0234017da64) {
            local_88 = 0x19;
LAB_0018e33c:
            lVar4 = 0x533562e7fc172028;
          }
          else if (lVar3 == 0xdd4b8bf30899b76) {
            *param_1 = local_74;
            lVar4 = 0x3ac234b8931b1e8d;
          }
        }
        else if (lVar3 < 0x167070aaafb1be05) {
          if (lVar3 == 0xe34f317df4fe11a) {
            *param_1 = local_84;
            lVar4 = -0x4a13a14501395744;
          }
          else if (lVar3 == 0x161fcc4cca165b57) {
            lVar4 = -0x3e6d111cdd51a91a;
          }
        }
        else if (lVar3 == 0x167070aaafb1be05) {
          DAT_001f6b00 = DAT_001f6b00 ^ 0x60;
          DAT_001f6b01 = DAT_001f6b01 ^ 0x60;
          DAT_001f6b02 = DAT_001f6b02 ^ 0x60;
          DAT_001f6b03 = DAT_001f6b03 ^ 0x60;
          DAT_001f6b04 = DAT_001f6b04 ^ 0x60;
          _DAT_001f6af0 = _DAT_001f6af0 ^ 0x6060606060606060;
          uRam00000000001f6af8 = uRam00000000001f6af8 ^ 0x6060606060606060;
          DAT_001f8227 = '\x01';
          lVar4 = 0x21cd7cd8b7fcc74b;
        }
        else if (lVar3 == 0x21cd7cd8b7fcc74b) {
          DAT_001f80f0 = 0;
          local_90 = (**(code **)(*param_2 + 0x108))(param_2,unaff_x27,&DAT_001f7120,&DAT_001f6af0);
          lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar4 = 0x6d72959834f24de6;
          if (lVar3 != 0) {
            lVar4 = -0x3bde73af16472982;
          }
        }
        else if (lVar3 == 0x25878a1a4aea702d) {
          unaff_x27 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
          lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar4 = 0x5487e496b0cb5eff;
          if (lVar3 != 0) {
            lVar4 = -0x7b60e0540480b2d5;
          }
        }
      }
      else if (lVar3 < 0x5487e496b0cb5eff) {
        if (lVar3 < 0x42541dcc71fd7998) {
          if (lVar3 == 0x27aeee6d030f5f0f) {
            lVar4 = -0x798fe48d7810a22e;
            if (DAT_001f825a == '\0') {
              lVar4 = -0x7d35e1dd707578b6;
            }
          }
          else if (lVar3 == 0x3ac234b8931b1e8d) {
            (**(code **)(*param_2 + 0xb8))(param_2,unaff_x27);
            lVar4 = -0x4ad38a25df268ab2;
            if (*param_1 != 0) {
              lVar4 = -0x7b467b7e0052b7c8;
            }
          }
        }
        else {
          lVar4 = 0x3ac234b8931b1e8d;
          if ((lVar3 != 0x42541dcc71fd7998) && (lVar4 = lVar3, lVar3 == 0x533562e7fc172028)) {
            (**(code **)(*param_2 + 0x80))(param_2);
            (**(code **)(*param_2 + 0x88))(param_2);
            local_74 = local_88;
            goto LAB_0018d8f0;
          }
        }
      }
      else if (lVar3 < 0x6d72959834f24de6) {
        if (lVar3 == 0x5487e496b0cb5eff) {
          lVar4 = 0x5c896a0ec4aca3d5;
          if (unaff_x27 != 0) {
            lVar4 = 0x161fcc4cca165b57;
          }
        }
        else if (lVar3 == 0x5c896a0ec4aca3d5) {
          local_84 = 0xf;
LAB_0018e2ec:
          lVar4 = 0xe34f317df4fe11a;
        }
      }
      else if (lVar3 == 0x6d72959834f24de6) {
        lVar4 = -0x2ddfa54500c77144;
        if (local_90 != 0) {
          lVar4 = -0x25a6e23b72e2587;
        }
      }
      else {
        lVar4 = -0x3e6d111cdd51a91a;
        if ((lVar3 != 0x6e1e93a69c10fbf5) && (lVar4 = lVar3, lVar3 == 0x722f86352b776dbb)) {
          lVar4 = -0x4a13a14501395744;
        }
      }
    }
    if (-0x4a13a14501395745 < lVar3) {
      if (lVar3 < -0x1ff6074eeed76103) {
        if (lVar3 < -0x3bde73af16472982) {
          if (lVar3 == -0x4a13a14501395744) {
            *param_4 = 0;
            lVar4 = -0x4f5b533bce500c89;
          }
          else if (lVar3 == -0x3e6d111cdd51a91a) {
            iVar2 = FUN_001ebe70(0,1,&DAT_001f81c4);
            lVar4 = 0x27aeee6d030f5f0f;
            if (iVar2 != 0) {
              lVar4 = 0x6e1e93a69c10fbf5;
            }
          }
        }
        else {
          if (lVar3 == -0x3bde73af16472982) {
            local_88 = 0xf;
            goto LAB_0018e33c;
          }
          if (lVar3 == -0x2ddfa54500c77144) {
            local_74 = 0xf;
LAB_0018d8f0:
            lVar4 = 0xdd4b8bf30899b76;
          }
        }
      }
      else if (lVar3 < -0x1693a86ab651454c) {
        if (lVar3 == -0x1ff6074eeed76103) {
          local_84 = 3;
          goto LAB_0018e2ec;
        }
        if (lVar3 == -0x19918e30b7f1a1ce) {
          iVar2 = FUN_001ebe70(0,1,&DAT_001f80f0);
          lVar4 = -0x6b338bc5e6ee0e72;
          if (iVar2 != 0) {
            lVar4 = -0x9d96ccf4b53447b;
          }
        }
      }
      else if (lVar3 == -0x1693a86ab651454c) {
        DAT_001f81c4 = 0;
        lVar4 = -0x19918e30b7f1a1ce;
      }
      else if (lVar3 == -0x157e5afa4126e36a) {
        lVar4 = -0x770862649fbfbeaf;
        if (*param_4 != 0) {
          lVar4 = 0x42541dcc71fd7998;
        }
      }
      else if (lVar3 == -0x10205026b17ff25b) {
        lVar4 = 0x21cd7cd8b7fcc74b;
      }
      goto LAB_0018d904;
    }
    if (lVar3 < -0x770862649fbfbeaf) {
      if (lVar3 < -0x7b60e0540480b2d5) {
        if (lVar3 == -0x7d35e1dd707578b6) {
          DAT_001f7128 = DAT_001f7128 ^ 0x6b;
          DAT_001f7129 = DAT_001f7129 ^ 0x6b;
          DAT_001f7120 = DAT_001f7120 ^ 0x6b6b6b6b6b6b6b6b;
          DAT_001f825a = '\x01';
          lVar4 = -0x1693a86ab651454c;
        }
        else if (lVar3 == -0x7bc46f9a8104c8e9) {
          lVar4 = lVar1;
        }
      }
      else if (lVar3 == -0x7b60e0540480b2d5) {
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        lVar4 = 0x722f86352b776dbb;
        if (unaff_x27 != 0) {
          lVar4 = -0x63d5a26b9e18ed33;
        }
        *param_1 = 0xf;
      }
      else {
        lVar4 = -0x4a13a14501395744;
        if ((lVar3 != -0x7b467b7e0052b7c8) && (lVar4 = lVar3, lVar3 == -0x798fe48d7810a22e)) {
          lVar4 = -0x1693a86ab651454c;
        }
      }
    }
    else if (lVar3 < -0x63d5a26b9e18ed33) {
      if (lVar3 == -0x770862649fbfbeaf) {
        local_74 = 0x19;
        goto LAB_0018d8f0;
      }
      if (lVar3 == -0x6b338bc5e6ee0e72) {
        lVar4 = -0x10205026b17ff25b;
        if (DAT_001f8227 == '\0') {
          lVar4 = 0x167070aaafb1be05;
        }
      }
    }
    else {
      lVar4 = 0x3ac234b8931b1e8d;
      if (((lVar3 != -0x63d5a26b9e18ed33) &&
          (lVar4 = -0x4f5b533bce500c89, lVar3 != -0x4ad38a25df268ab2)) &&
         (lVar4 = lVar3, lVar3 == -0x4f5b533bce500c89)) {
        return;
      }
    }
  } while( true );
}


