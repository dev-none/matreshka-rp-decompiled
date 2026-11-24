// Function: FUN_0017e824
// Entry: 0017e824

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0017e824(int *param_1,long *param_2,long param_3,long param_4,long *param_5)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x28;
  long local_a0;
  long local_90;
  long local_80;
  int local_78;
  byte local_74;
  long local_70;
  
  lVar1 = -0x757d3260b1b3b0a0;
  if (param_4 == 0 || param_3 == 0) {
    lVar1 = 0x6b8a7e9c16ae14cf;
  }
  lVar3 = 0x7bbfe5ea790cb394;
LAB_0017e94c:
  lVar4 = lVar3;
  lVar3 = lVar4;
  if (lVar4 < 0x511e52f37548d8c) {
    if (lVar4 < -0x3df24a85230b3d1b) {
      if (lVar4 < -0x5e7f9659e56ed9fd) {
        if (lVar4 < -0x6b5dda43bb5b01ad) {
          if (lVar4 == -0x7f6d33b55f391ce0) {
            lVar3 = -0x3d5083a29cd02b3d;
            local_a0 = unaff_x20;
            if ((local_74 & unaff_x20 != 0) == 0) {
              lVar3 = -0x3ab61a3b5a5df653;
            }
          }
          else if (lVar4 == -0x757d3260b1b3b0a0) {
            unaff_x28 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
            lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar3 = 0x1a5f71e9469d587e;
            if (lVar4 != 0) {
              lVar3 = -0x32f98e97cc1ba9ef;
            }
          }
        }
        else {
          lVar3 = 0x472dd815bf663ad;
          if (lVar4 != -0x6b5dda43bb5b01ad) {
            if (lVar4 == -0x655eb191e915c507) {
LAB_0017f1b0:
              lVar3 = -0x7f6d33b55f391ce0;
              unaff_x20 = unaff_x28;
              local_74 = 1;
            }
            else {
              lVar3 = lVar4;
              if (lVar4 == -0x603e8451605b9955) {
                lVar3 = -0x57b13e33bef6c147;
                if (*param_1 != 0) {
                  lVar3 = -0x3df24a85230b3d1b;
                }
              }
            }
          }
        }
      }
      else if (lVar4 < -0x578c2f043c0b1eeb) {
        lVar3 = 0x411acb716f39f48c;
        if (lVar4 != -0x5e7f9659e56ed9fd) {
          if (lVar4 == -0x5b9cc4f99399843b) {
            iVar2 = FUN_001ebe70(0,1,&DAT_001f812c);
            lVar3 = 0x39a4bba2d8031fce;
            if (iVar2 != 0) {
              lVar3 = -0x578c2f043c0b1eeb;
            }
          }
          else {
            lVar3 = lVar4;
            if (lVar4 == -0x57b13e33bef6c147) {
              lVar3 = 0x66d81801f83d0f4a;
            }
          }
        }
      }
      else {
        lVar3 = -0x5b9cc4f99399843b;
        if (lVar4 != -0x578c2f043c0b1eeb) {
          if (lVar4 == -0x5321587054678f55) {
            DAT_001f80e8 = 0;
            local_90 = (**(code **)(*param_2 + 0x108))
                                 (param_2,unaff_x28,&DAT_001f6c9c,&DAT_001f6ab0);
            lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar3 = 0x381cd2c9dfc8aa95;
            if (lVar4 != 0) {
              lVar3 = -0x3fa05c06b3e8d449;
            }
          }
          else {
            lVar3 = lVar4;
            if (lVar4 == -0x3fa05c06b3e8d449) {
              lVar3 = -0x472a08e3f7a09a2;
            }
          }
        }
      }
      goto LAB_0017e94c;
    }
    if (lVar4 < -0x2dfe6c9ec51c6bfa) {
      if (lVar4 < -0x3c4948abc2b7c804) {
        if (lVar4 == -0x3df24a85230b3d1b) {
          *param_5 = 0;
          lVar3 = 0x66d81801f83d0f4a;
        }
        else if (lVar4 == -0x3d5083a29cd02b3d) {
          (**(code **)(*param_2 + 0xb8))(param_2,local_a0);
          lVar3 = -0x603e8451605b9955;
        }
      }
      else if (lVar4 == -0x3c4948abc2b7c804) {
        iVar2 = FUN_001ebe70(0,1,&DAT_001f80e8);
        lVar3 = 0x68b1ece5b7e1b1f8;
        if (iVar2 != 0) {
          lVar3 = 0x2c85b040a530b3b5;
        }
      }
      else {
        lVar3 = -0x603e8451605b9955;
        if ((lVar4 != -0x3ab61a3b5a5df653) && (lVar3 = lVar4, lVar4 == -0x32f98e97cc1ba9ef)) {
          lVar3 = -0x472a08e3f7a09a2;
        }
      }
      goto LAB_0017e94c;
    }
    if (lVar4 < -0xf8b0510004b337c) {
      if (lVar4 == -0x2dfe6c9ec51c6bfa) {
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
        lVar3 = -0x5321587054678f55;
      }
      else {
        lVar3 = -0x5b9cc4f99399843b;
        if ((lVar4 != -0x270f0eccef93cb06) && (lVar3 = lVar4, lVar4 == -0x2255323ecc8e4ab6)) {
          lVar3 = (**(code **)(*param_2 + 0x110))(param_2,param_3,local_90,local_70);
          *param_5 = lVar3;
          lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar3 = 0x1b82d9f4e870391e;
          if (lVar4 != 0) {
            lVar3 = 0x72db258d84467769;
          }
        }
      }
      goto LAB_0017e94c;
    }
    if (lVar4 == -0xf8b0510004b337c) {
      local_70 = (**(code **)(*param_2 + 0x538))(param_2,param_4);
      lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
      lVar3 = 0x511e52f37548d8c;
      if (lVar4 != 0) {
        lVar3 = 0x18c6d844e8c5deb1;
      }
      goto LAB_0017e94c;
    }
    if (lVar4 != -0x472a08e3f7a09a2) {
      if (lVar4 == 0x472dd815bf663ad) {
        *param_1 = 0x19;
        lVar3 = 0x5a2d156ddbe6a013;
      }
      goto LAB_0017e94c;
    }
    (**(code **)(*param_2 + 0x80))(param_2);
    (**(code **)(*param_2 + 0x88))(param_2);
  }
  else {
    if (0x39a4bba2d8031fcd < lVar4) {
      if (lVar4 < 0x6b8a7e9c16ae14cf) {
        if (lVar4 < 0x5baab65aef839a51) {
          if (lVar4 == 0x39a4bba2d8031fce) {
            lVar3 = -0x5e7f9659e56ed9fd;
            if (DAT_001f8236 == '\0') {
              lVar3 = 0x97042fccc42e1e6;
            }
          }
          else if (lVar4 == 0x411acb716f39f48c) {
            DAT_001f812c = 0;
            lVar3 = -0x3c4948abc2b7c804;
          }
          else if (lVar4 == 0x5a2d156ddbe6a013) {
            (**(code **)(*param_2 + 0xb8))(param_2,local_70);
            goto LAB_0017f1b0;
          }
        }
        else {
          if (lVar4 == 0x5baab65aef839a51) {
            local_74 = 1;
            lVar3 = -0x7f6d33b55f391ce0;
            unaff_x20 = unaff_x28;
            goto LAB_0017f4e4;
          }
          if (lVar4 == 0x68b1ece5b7e1b1f8) {
            lVar3 = 0x7b55386bb8e633d6;
            if (DAT_001f8225 == '\0') {
              lVar3 = -0x2dfe6c9ec51c6bfa;
            }
          }
          else if (lVar4 == 0x66d81801f83d0f4a) {
            return;
          }
        }
      }
      else if (lVar4 < 0x75ea2fb3e7b1e420) {
        if (lVar4 == 0x6b8a7e9c16ae14cf) {
          local_80 = 0;
          local_78 = 3;
          lVar3 = 0x153730adae4ee512;
        }
        else if (lVar4 == 0x72db258d84467769) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          lVar3 = 0x472dd815bf663ad;
        }
      }
      else {
        lVar3 = 0x5a2d156ddbe6a013;
        if (((lVar4 != 0x75ea2fb3e7b1e420) &&
            (lVar3 = -0x5321587054678f55, lVar4 != 0x7b55386bb8e633d6)) &&
           (lVar3 = lVar4, lVar4 == 0x7bbfe5ea790cb394)) {
          lVar3 = lVar1;
        }
      }
      goto LAB_0017e94c;
    }
    if (0x18c6d844e8c5deb0 < lVar4) {
      if (lVar4 < 0x1d7a8ba98331510d) {
        if (lVar4 == 0x18c6d844e8c5deb1) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          lVar3 = -0x655eb191e915c507;
          if (local_70 != 0) {
            lVar3 = 0x75ea2fb3e7b1e420;
          }
LAB_0017f4e4:
          *param_1 = 0x1f;
        }
        else if (lVar4 == 0x1a5f71e9469d587e) {
          lVar3 = 0x930759a7bedb4dd;
          if (unaff_x28 != 0) {
            lVar3 = -0x270f0eccef93cb06;
          }
        }
        else if (lVar4 == 0x1b82d9f4e870391e) {
          lVar3 = -0x6b5dda43bb5b01ad;
          if (*param_5 != 0) {
            lVar3 = 0x1d7a8ba98331510d;
          }
        }
      }
      else {
        lVar3 = 0x5a2d156ddbe6a013;
        if (((lVar4 != 0x1d7a8ba98331510d) &&
            (lVar3 = -0x3c4948abc2b7c804, lVar4 != 0x2c85b040a530b3b5)) &&
           (lVar3 = lVar4, lVar4 == 0x381cd2c9dfc8aa95)) {
          lVar3 = 0xaba53aa9e14658d;
          if (local_90 != 0) {
            lVar3 = -0xf8b0510004b337c;
          }
        }
      }
      goto LAB_0017e94c;
    }
    if (0x97042fccc42e1e5 < lVar4) {
      if (lVar4 == 0x97042fccc42e1e6) {
        DAT_001f6c9c = DAT_001f6c9c ^ 0x41;
        DAT_001f6c9d = DAT_001f6c9d ^ 0x41;
        DAT_001f6c9e = DAT_001f6c9e ^ 0x41;
        DAT_001f6c9f = DAT_001f6c9f ^ 0x41;
        DAT_001f8236 = '\x01';
        lVar3 = 0x411acb716f39f48c;
      }
      else {
        if (lVar4 == 0xaba53aa9e14658d) goto LAB_0017e930;
        if (lVar4 == 0x153730adae4ee512) {
          *param_1 = local_78;
          lVar3 = -0x7f6d33b55f391ce0;
          unaff_x20 = local_80;
          local_74 = param_2 != (long *)0x0;
        }
      }
      goto LAB_0017e94c;
    }
    if (lVar4 == 0x511e52f37548d8c) {
      lVar3 = 0x5baab65aef839a51;
      if (local_70 != 0) {
        lVar3 = -0x2255323ecc8e4ab6;
      }
      goto LAB_0017e94c;
    }
    if (lVar4 != 0x930759a7bedb4dd) goto LAB_0017e94c;
  }
LAB_0017e930:
  local_78 = 0xf;
  lVar3 = 0x153730adae4ee512;
  local_80 = unaff_x28;
  goto LAB_0017e94c;
}


