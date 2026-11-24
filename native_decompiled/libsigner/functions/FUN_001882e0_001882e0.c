// Function: FUN_001882e0
// Entry: 001882e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001882e0(int *param_1,long *param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long unaff_x28;
  long local_90;
  int local_84;
  int local_74;
  
  lVar3 = -0x14984775714e2886;
LAB_001883b0:
  do {
    while (lVar2 = lVar3, lVar3 = lVar2, -0x3f4736edf946682 < lVar2) {
      if (lVar2 < 0x386dd620ab979a6c) {
        if (lVar2 < 0x14212817370b07ad) {
          if (lVar2 < 0x67eecfa2931a5a5) {
            if (lVar2 == -0x3f4736edf946681) {
              lVar3 = 0xc4df6634f2d3a60;
              goto LAB_00188e18;
            }
            if (lVar2 == 0x4b7e07f23cad2a3) {
              lVar3 = 0x7bd8b327f44a7e6d;
              if (DAT_001f8221 == '\0') {
                lVar3 = -0x40959171c0afaa9;
              }
            }
          }
          else {
            if (lVar2 == 0x67eecfa2931a5a5) {
              local_74 = 0xf;
              goto LAB_0018839c;
            }
            if (lVar2 == 0xad8c4f61c52b1de) {
              lVar3 = -0x3f4736edf946681;
              if (unaff_x28 != 0) {
                lVar3 = -0x660330ca3882061d;
              }
            }
            else if (lVar2 == 0xc4df6634f2d3a60) {
              *param_3 = 0;
              lVar3 = 0x5c1860de60b3ffcf;
            }
          }
        }
        else if (lVar2 < 0x2960f807ee05b349) {
          if (lVar2 == 0x14212817370b07ad) {
            DAT_001f80d8 = 0;
            lVar3 = 0x386dd620ab979a6c;
          }
          else if (lVar2 == 0x260376da72b43ad9) {
            *param_1 = local_74;
            lVar3 = 0x5617c25d11de1e41;
          }
        }
        else {
          lVar3 = 0x796dcbca6234ad77;
          if (lVar2 != 0x2960f807ee05b349) {
            if (lVar2 == 0x31823dab86546405) {
              iVar1 = FUN_001ebe70(0,1,&DAT_001f8194);
              lVar3 = -0x6ccead6fd5ab6ab6;
              if (iVar1 != 0) {
                lVar3 = -0x5f3755a72093230f;
              }
            }
            else {
              lVar3 = lVar2;
              if (lVar2 == 0x35d1b171ea3a1777) {
                iVar1 = FUN_001ebe70(0,1,&DAT_001f80d8);
                lVar3 = 0x4b7e07f23cad2a3;
                if (iVar1 != 0) {
                  lVar3 = -0x25b49ea36c8e566d;
                }
              }
            }
          }
        }
      }
      else if (lVar2 < 0x7560a8fbfc56dd1a) {
        if (lVar2 < 0x3e45784a0df6e8ce) {
          if (lVar2 == 0x386dd620ab979a6c) {
            iVar1 = FUN_001ebe70(0,1,&DAT_001f80d4);
            lVar3 = -0x578c07d54e4b8925;
            if (iVar1 != 0) {
              lVar3 = 0x7560a8fbfc56dd1a;
            }
          }
          else if (lVar2 == 0x3e14c851d8ba269b) {
            lVar3 = 0x5617c25d11de1e41;
          }
        }
        else {
          lVar3 = -0x25b4a30fc4ce1574;
          if (lVar2 != 0x3e45784a0df6e8ce) {
            if (lVar2 == 0x5617c25d11de1e41) {
              (**(code **)(*param_2 + 0xb8))(param_2,unaff_x28);
              lVar3 = 0x7c447757119e16fb;
              if (*param_1 != 0) {
                lVar3 = -0x2967e804cc53e7d0;
              }
            }
            else {
              lVar3 = lVar2;
              if (lVar2 == 0x5c1860de60b3ffcf) {
                return;
              }
            }
          }
        }
      }
      else if (lVar2 < 0x796dcbca6234ad77) {
        lVar3 = 0x386dd620ab979a6c;
        if ((lVar2 != 0x7560a8fbfc56dd1a) && (lVar3 = lVar2, lVar2 == 0x76cd1562fbf17bda)) {
          DAT_001f6a44 = DAT_001f6a44 ^ 0x98;
          DAT_001f6a45 = DAT_001f6a45 ^ 0x98;
          DAT_001f6a46 = DAT_001f6a46 ^ 0x98;
          DAT_001f6a48 = DAT_001f6a48 ^ 0x98;
          DAT_001f6a49 = DAT_001f6a49 ^ 0x98;
          DAT_001f6a4a = DAT_001f6a4a ^ 0x98;
          DAT_001f6a47 = DAT_001f6a47 ^ 0x98;
          DAT_001f8220 = '\x01';
          lVar3 = 0x796dcbca6234ad77;
        }
      }
      else if (lVar2 == 0x796dcbca6234ad77) {
        DAT_001f80d4 = 0;
        local_90 = (**(code **)(*param_2 + 0x108))(param_2,unaff_x28,&DAT_001f6a44,&DAT_001f6a4c);
        lVar2 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar3 = -0x741b80fddc321462;
        if (lVar2 != 0) {
          lVar3 = -0x43725cb0d7bc5046;
        }
      }
      else {
        lVar3 = 0x14212817370b07ad;
        if ((lVar2 != 0x7bd8b327f44a7e6d) && (lVar3 = lVar2, lVar2 == 0x7c447757119e16fb)) {
          lVar3 = 0x5c1860de60b3ffcf;
        }
      }
    }
    if (-0x31a5c421f231c23c < lVar2) {
      if (lVar2 < -0x1eb48fc64ef5ed97) {
        if (lVar2 < -0x25b4a30fc4ce1574) {
          if (lVar2 == -0x31a5c421f231c23b) {
            lVar3 = (**(code **)(*param_2 + 0xe0))(param_2,unaff_x28,local_90);
            *param_3 = lVar3;
            lVar2 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar3 = -0x4a0d4201cc8dd2e5;
            if (lVar2 != 0) {
              lVar3 = -0x443e4c548dd9a44b;
            }
          }
          else if (lVar2 == -0x2967e804cc53e7d0) {
            lVar3 = 0xc4df6634f2d3a60;
          }
          goto LAB_001883b0;
        }
        if (lVar2 == -0x25b4a30fc4ce1574) {
          DAT_001f8194 = 0;
          unaff_x28 = (**(code **)(*param_2 + 0x30))(param_2,&DAT_001f6fa0);
          lVar2 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar3 = 0xad8c4f61c52b1de;
          if (lVar2 != 0) {
            lVar3 = -0x636a27c657495170;
          }
          goto LAB_001883b0;
        }
        lVar3 = 0x35d1b171ea3a1777;
        if ((lVar2 == -0x25b49ea36c8e566d) || (lVar3 = lVar2, lVar2 != -0x2191cba062c57a27))
        goto LAB_001883b0;
        local_74 = 0x1a;
      }
      else {
        if (-0x14984775714e2887 < lVar2) {
          lVar3 = 0x31823dab86546405;
          if (lVar2 != -0x14984775714e2886) {
            if (lVar2 == -0x6b20d3dbe64459c) {
              DAT_001f6fb8 = DAT_001f6fb8 ^ 0xc0;
              DAT_001f6fb9 = DAT_001f6fb9 ^ 0xc0;
              DAT_001f6fba = DAT_001f6fba ^ 0xc0;
              DAT_001f6fbb = DAT_001f6fbb ^ 0xc0;
              _DAT_001f6fa0 = _DAT_001f6fa0 ^ 0xc0c0c0c0c0c0c0c0;
              uRam00000000001f6fa8 = uRam00000000001f6fa8 ^ 0xc0c0c0c0c0c0c0c0;
              DAT_001f6fb0 = DAT_001f6fb0 ^ 0xc0c0c0c0c0c0c0c0;
              DAT_001f824e = '\x01';
              lVar3 = -0x25b4a30fc4ce1574;
            }
            else {
              lVar3 = lVar2;
              if (lVar2 == -0x40959171c0afaa9) {
                DAT_001f6a4c = DAT_001f6a4c ^ 0x4f;
                DAT_001f6a4d = DAT_001f6a4d ^ 0x4f;
                DAT_001f6a4e = DAT_001f6a4e ^ 0x4f;
                DAT_001f6a4f = DAT_001f6a4f ^ 0x4f;
                DAT_001f8221 = '\x01';
                lVar3 = 0x14212817370b07ad;
              }
            }
          }
          goto LAB_001883b0;
        }
        if (lVar2 != -0x1eb48fc64ef5ed97) {
          if (lVar2 == -0x1dd3e93b47f9c0f2) {
            lVar3 = 0xc4df6634f2d3a60;
          }
          goto LAB_001883b0;
        }
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        local_74 = local_84;
      }
LAB_0018839c:
      lVar3 = 0x260376da72b43ad9;
      goto LAB_001883b0;
    }
    if (-0x578c07d54e4b8926 < lVar2) {
      if (-0x443e4c548dd9a44c < lVar2) {
        if (lVar2 == -0x443e4c548dd9a44b) {
          local_84 = 0x1a;
        }
        else {
          if (lVar2 != -0x43725cb0d7bc5046) {
            if (lVar2 == -0x31b66f5a47f19020) {
              lVar3 = 0x5617c25d11de1e41;
            }
            goto LAB_001883b0;
          }
          local_84 = 0xf;
        }
        lVar3 = -0x1eb48fc64ef5ed97;
        goto LAB_001883b0;
      }
      if (lVar2 == -0x578c07d54e4b8925) {
        lVar3 = 0x2960f807ee05b349;
        if (DAT_001f8220 == '\0') {
          lVar3 = 0x76cd1562fbf17bda;
        }
      }
      else if (lVar2 == -0x4a0d4201cc8dd2e5) {
        lVar3 = -0x2191cba062c57a27;
        if (*param_3 != 0) {
          lVar3 = 0x3e14c851d8ba269b;
        }
      }
      goto LAB_001883b0;
    }
    if (lVar2 < -0x660330ca3882061d) {
      if (lVar2 == -0x741b80fddc321462) {
        lVar3 = 0x67eecfa2931a5a5;
        if (local_90 != 0) {
          lVar3 = -0x31a5c421f231c23b;
        }
      }
      else if (lVar2 == -0x6ccead6fd5ab6ab6) {
        lVar3 = 0x3e45784a0df6e8ce;
        if (DAT_001f824e == '\0') {
          lVar3 = -0x6b20d3dbe64459c;
        }
      }
    }
    else {
      lVar3 = 0x35d1b171ea3a1777;
      if (lVar2 != -0x660330ca3882061d) {
        if (lVar2 == -0x636a27c657495170) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          lVar3 = -0x1dd3e93b47f9c0f2;
          if (unaff_x28 != 0) {
            lVar3 = -0x31b66f5a47f19020;
          }
LAB_00188e18:
          *param_1 = 0xf;
        }
        else {
          lVar3 = lVar2;
          if (lVar2 == -0x5f3755a72093230f) {
            lVar3 = 0x31823dab86546405;
          }
        }
      }
    }
  } while( true );
}


