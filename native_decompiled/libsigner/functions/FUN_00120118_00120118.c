// Function: FUN_00120118
// Entry: 00120118

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00120118(short *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  ulong in_x9;
  long lVar8;
  undefined8 *unaff_x21;
  undefined8 *unaff_x26;
  undefined1 auStack_100 [8];
  long local_f8;
  long *local_f0;
  long *local_e8;
  long *local_e0;
  short *local_d8;
  long *local_d0;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  long *local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  long *local_88;
  
  local_d8 = param_1;
  local_f8 = tpidr_el0;
  local_88 = *(long **)(local_f8 + 0x28);
  puVar2 = (undefined8 *)auStack_100;
  plVar1 = *(long **)(local_f8 + 0x28);
  lVar8 = -0x2fd038e5b15bbca;
LAB_00120204:
  lVar7 = lVar8;
  uVar5 = in_x9;
  plVar6 = plVar1;
  plVar1 = plVar6;
  in_x9 = uVar5;
  lVar8 = lVar7;
  if (-0x8f7c1b071b83600 < lVar7) {
    if (lVar7 < 0x50fa2b6150a290e8) {
      if (lVar7 < 0xcb1f7856ef3e66a) {
        if (0x234631381c95916 < lVar7) {
          lVar8 = 0x2583f3295d26c72;
          if (lVar7 != 0x234631381c95917) {
            if (lVar7 == 0x2583f3295d26c72) {
              iVar4 = FUN_001ebe70(0,1,&DAT_001f7c1c);
              lVar8 = -0x4e944ab97fb0767a;
              if (iVar4 != 0) {
                lVar8 = 0x22b999fe7ba950f8;
              }
            }
            else {
              lVar8 = lVar7;
              if (lVar7 == 0x6ee5bc0885d24dc) {
                lVar8 = -0x2b4bbd77afad9498;
              }
            }
          }
          goto LAB_00120204;
        }
        if (lVar7 != -0x8f7c1b071b835ff) {
          lVar8 = 0xcb1f7856ef3e66a;
          if ((lVar7 != -0x5f4ad0a0148f22e) && (lVar8 = lVar7, lVar7 == -0x2fd038e5b15bbca)) {
LAB_00120780:
            lVar8 = 0x3db6504342eeb5c6;
          }
          goto LAB_00120204;
        }
        iVar4 = FUN_001ebe70(0,1,&DAT_001f7c18);
        bVar3 = iVar4 == 0;
        lVar7 = -0x38e4f764dab36e4d;
        lVar8 = 0x68e9eef73caee0ca;
      }
      else {
        if (lVar7 < 0x22b999fe7ba950f8) {
          if (lVar7 == 0xcb1f7856ef3e66a) {
            DAT_001f7c18 = 0;
            lVar8 = 0x5b07d13b9a2c4c47;
          }
          else if (lVar7 == 0x1022c6f24a7f67ef) {
            lVar8 = 0x619c4635ae2a2aef;
            if (DAT_001f7fc3 == '\0') {
              lVar8 = 0x6a86f9a27a48a6ad;
            }
          }
          else if (lVar7 == 0x1f1b1150db66d00d) {
            *local_d8 = *local_d8 + 1;
            lVar8 = -0x2b4bbd77afad9498;
          }
          goto LAB_00120204;
        }
        if (lVar7 < 0x3db6504342eeb5c6) {
          lVar8 = 0x2583f3295d26c72;
          if ((lVar7 != 0x22b999fe7ba950f8) && (lVar8 = lVar7, lVar7 == 0x308383be08146ce0)) {
            lVar8 = 0x5b1704f1c1f5e001;
          }
          goto LAB_00120204;
        }
        if (lVar7 != 0x3db6504342eeb5c6) {
          if (lVar7 == 0x47e69b36ea2f4aee) {
            local_a0 = local_b8;
            plVar1 = local_f0;
            in_x9 = 0;
            lVar8 = -0x7ae785cbc6a1d824;
          }
          goto LAB_00120204;
        }
        iVar4 = FUN_001ebe70(0,1,&DAT_001f7c20);
        lVar7 = -0x34c850c5a84f18e9;
        lVar8 = 0x7a32d0a09c5321b1;
        bVar3 = iVar4 == 0;
      }
    }
    else {
      if (0x69e4dec6b0ebb25b < lVar7) {
        if (lVar7 < 0x7530c2a066bfdf74) {
          if (lVar7 == 0x69e4dec6b0ebb25c) {
            DAT_001f56a8 = DAT_001f56a8 ^ 0xfd;
            DAT_001f56a9 = DAT_001f56a9 ^ 0xfd;
            DAT_001f56aa = DAT_001f56aa ^ 0xfd;
            DAT_001f56a0 = DAT_001f56a0 ^ 0xfdfdfdfdfdfdfdfd;
            DAT_001f7fc4 = '\x01';
            lVar8 = 0xcb1f7856ef3e66a;
            goto LAB_00120204;
          }
          if (lVar7 == 0x6a86f9a27a48a6ad) {
            _DAT_001f5670 = _DAT_001f5670 ^ 0x9292929292929292;
            uRam00000000001f5678 = uRam00000000001f5678 ^ 0x9292929292929292;
            _DAT_001f5680 = _DAT_001f5680 ^ 0x9292929292929292;
            uRam00000000001f5688 = uRam00000000001f5688 ^ 0x9292929292929292;
            DAT_001f5698 = DAT_001f5698 ^ 0x92;
            DAT_001f5690 = DAT_001f5690 ^ 0x9292929292929292;
            DAT_001f7fc3 = '\x01';
            lVar8 = -0x27e39c9d7fd6ef62;
            goto LAB_00120204;
          }
          if (lVar7 != 0x6ea5f6ad327d8cfb) goto LAB_00120204;
          lVar7 = -0x15b360a54b4976ea;
          bVar3 = DAT_001f7fc5 == '\0';
          lVar8 = -0x53ae62bfdb3205cc;
        }
        else {
          if (lVar7 < 0x7a32d0a09c5321b1) {
            if (lVar7 == 0x7530c2a066bfdf74) {
              lVar8 = FUN_001cac50(unaff_x26,unaff_x21[local_98 + 1]);
              bVar3 = lVar8 == 0;
              lVar7 = -0x3eabc76882617b0d;
              lVar8 = -0x1bdd340fae5291cd;
              goto LAB_00121104;
            }
            if (lVar7 == 0x79cef8aa849ce9df) {
              lVar8 = 0x5b1704f1c1f5e001;
              goto LAB_00120cbc;
            }
            goto LAB_00120204;
          }
          if (lVar7 != 0x7a32d0a09c5321b1) {
            if (lVar7 == 0x7f14270c3590edea) {
              local_b0 = local_c8;
              local_d0 = local_e0;
              goto LAB_00121178;
            }
            goto LAB_00120204;
          }
          lVar7 = -0x52eb957c549ae831;
          bVar3 = DAT_001f7fc6 == '\0';
          lVar8 = -0x6edd782ffdcff57a;
        }
LAB_001201f8:
        if (bVar3) {
          lVar8 = lVar7;
        }
        goto LAB_00120204;
      }
      if (lVar7 < 0x5b07d13b9a2c4c47) {
        lVar8 = -0x17f963b8561a3685;
        if (((lVar7 != 0x50fa2b6150a290e8) &&
            (plVar1 = local_a8, in_x9 = local_90, lVar8 = -0x7ae785cbc6a1d824,
            lVar7 != 0x5847f4142010501f)) &&
           (plVar1 = plVar6, in_x9 = uVar5, lVar8 = lVar7, lVar7 == 0x5a11fb51b50ab0a1)) {
LAB_00120afc:
          plVar1 = plVar6;
          in_x9 = uVar5;
          lVar8 = 0x234631381c95917;
        }
        goto LAB_00120204;
      }
      if (0x619c4635ae2a2aee < lVar7) {
        lVar8 = -0x27e39c9d7fd6ef62;
        if ((lVar7 != 0x619c4635ae2a2aef) && (lVar8 = lVar7, lVar7 == 0x68e9eef73caee0ca)) {
          lVar7 = 0x69e4dec6b0ebb25c;
          bVar3 = DAT_001f7fc4 == '\0';
          lVar8 = -0x5f4ad0a0148f22e;
          goto LAB_001201f8;
        }
        goto LAB_00120204;
      }
      if (lVar7 != 0x5b07d13b9a2c4c47) {
        if (lVar7 == 0x5b1704f1c1f5e001) {
          DAT_001f7c1c = 0;
          uVar5 = FUN_0019e8c4(&DAT_001f56b0,0x801,unaff_x26);
          lVar8 = -0x25f88141516142db;
          if ((uVar5 & 1) == 0) {
            lVar8 = -0x2896e27364a1da3f;
          }
        }
        goto LAB_00120204;
      }
      iVar4 = FUN_001ebe70(0,1,&DAT_001f7c14);
      bVar3 = iVar4 == 0;
      lVar7 = -0x24ee3c5e246ec436;
      lVar8 = 0x1022c6f24a7f67ef;
    }
LAB_00121104:
    if (!bVar3) {
      lVar8 = lVar7;
    }
    goto LAB_00120204;
  }
  if (lVar7 < -0x52eb957c549ae831) {
    if (lVar7 < -0x6738ab477cd999dd) {
      if (lVar7 < -0x7906498b0c1386f9) {
        if (lVar7 == -0x7c087be1081466e1) {
          local_b0 = 0;
          local_98 = local_c0;
          local_d0 = local_e8;
LAB_00121178:
          lVar8 = -0x6738ab477cd999dd;
        }
        else if (lVar7 == -0x7ae785cbc6a1d824) {
          local_a8 = plVar6 + 1;
          local_90 = uVar5 + 1;
          lVar8 = -0x79fed34670c0dc34;
          if (plVar6[1] != 0) {
            lVar8 = 0x5847f4142010501f;
          }
        }
        else if (lVar7 == -0x79fed34670c0dc34) {
          bVar3 = local_90 <= local_a0;
          lVar7 = -0x680189225e7a2da1;
          lVar8 = -0x6aa7492f140c06ee;
LAB_00120edc:
          if (bVar3) {
            lVar8 = lVar7;
          }
        }
      }
      else if (lVar7 < -0x6aa7492f140c06ee) {
        if (lVar7 == -0x7906498b0c1386f9) {
          local_c0 = local_98 + 1;
LAB_00120f70:
          lVar8 = -0x7c087be1081466e1;
        }
        else if (lVar7 == -0x6edd782ffdcff57a) {
          lVar8 = -0x5a9e53c8fe58a72b;
        }
      }
      else {
        if (lVar7 == -0x6aa7492f140c06ee) {
          lVar8 = FUN_001cac50(unaff_x26,unaff_x21[local_a0 + 0x16]);
          bVar3 = lVar8 == 0;
          lVar7 = 0x1f1b1150db66d00d;
          lVar8 = 0x6ee5bc0885d24dc;
          goto LAB_00121104;
        }
        if (lVar7 == -0x680189225e7a2da1) {
          FUN_001cc250(unaff_x26,0,0x801);
          lVar8 = -0x57072be448d4c849;
        }
      }
    }
    else if (lVar7 < -0x5a9e53c8fe58a72b) {
      if (lVar7 == -0x6738ab477cd999dd) {
        local_e0 = local_d0 + 1;
        local_c8 = local_b0 + 1;
        lVar8 = -0x3227edfad4ae9f68;
        if (local_d0[1] != 0) {
          lVar8 = 0x7f14270c3590edea;
        }
      }
      else if (lVar7 == -0x5de29fbc91985c04) {
        DAT_001f7c1c = 0;
        lVar8 = -0x8f7c1b071b835ff;
      }
      else if (lVar7 == -0x5d31cafea13d402f) {
        local_c0 = 0;
        goto LAB_00120f70;
      }
    }
    else if (lVar7 < -0x53ae62bfdb3205cc) {
      if (lVar7 == -0x5a9e53c8fe58a72b) {
        DAT_001f7c20 = 0;
        lVar8 = -0x17f963b8561a3685;
      }
      else if (lVar7 == -0x57072be448d4c849) {
        if (*(long **)(local_f8 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
    else {
      lVar8 = -0x5de29fbc91985c04;
      if ((lVar7 != -0x53ae62bfdb3205cc) && (lVar8 = lVar7, lVar7 == -0x5315ab5ac0fea1f6)) {
        FUN_001cc250(unaff_x26,0,0x801);
        goto LAB_00120afc;
      }
    }
    goto LAB_00120204;
  }
  if (lVar7 < -0x2896e27364a1da3f) {
    if (lVar7 < -0x38e4f764dab36e4d) {
      if (lVar7 == -0x52eb957c549ae831) {
        DAT_001f56d8 = DAT_001f56d8 ^ 0xd6d6d6d6d6d6d6d6;
        DAT_001f7fc6 = '\x01';
        lVar8 = -0x5a9e53c8fe58a72b;
      }
      else if (lVar7 == -0x4e944ab97fb0767a) {
        lVar8 = 0x308383be08146ce0;
        if (DAT_001f7fc5 == '\0') {
          lVar8 = 0x79cef8aa849ce9df;
        }
      }
      else if (lVar7 == -0x3eabc76882617b0d) {
        *local_d8 = *local_d8 + 1;
        lVar8 = -0x7906498b0c1386f9;
      }
      goto LAB_00120204;
    }
    if (lVar7 < -0x3227edfad4ae9f68) {
      lVar8 = -0x8f7c1b071b835ff;
      if ((lVar7 != -0x38e4f764dab36e4d) && (lVar8 = lVar7, lVar7 == -0x34c850c5a84f18e9))
      goto LAB_00120780;
      goto LAB_00120204;
    }
    if (lVar7 == -0x3227edfad4ae9f68) {
      bVar3 = local_c8 <= local_98;
      lVar7 = -0x5315ab5ac0fea1f6;
      lVar8 = 0x7530c2a066bfdf74;
      goto LAB_00120edc;
    }
    if (lVar7 != -0x2b4bbd77afad9498) goto LAB_00120204;
    local_b8 = local_a0 + 1;
  }
  else {
    if (-0x24ee3c5e246ec437 < lVar7) {
      if (lVar7 < -0x17f963b8561a3685) {
        lVar8 = 0x5b07d13b9a2c4c47;
        if ((lVar7 != -0x24ee3c5e246ec436) && (lVar8 = lVar7, lVar7 == -0x1bdd340fae5291cd)) {
          lVar8 = -0x7906498b0c1386f9;
        }
      }
      else {
        if (lVar7 == -0x17f963b8561a3685) {
          iVar4 = FUN_001ebe70(0,1,&DAT_001f7c1c);
          bVar3 = iVar4 == 0;
          lVar7 = 0x50fa2b6150a290e8;
          lVar8 = 0x6ea5f6ad327d8cfb;
          goto LAB_00121104;
        }
        if (lVar7 == -0x15b360a54b4976ea) {
          lVar8 = -0x5de29fbc91985c04;
LAB_00120cbc:
          DAT_001f56d6 = DAT_001f56d6 ^ 0x79;
          DAT_001f56d5 = DAT_001f56d5 ^ 0x79;
          DAT_001f56d4 = DAT_001f56d4 ^ 0x79;
          DAT_001f56d3 = DAT_001f56d3 ^ 0x79;
          DAT_001f56d2 = DAT_001f56d2 ^ 0x79;
          DAT_001f56d1 = DAT_001f56d1 ^ 0x79;
          DAT_001f56d0 = DAT_001f56d0 ^ 0x79;
          uRam00000000001f56b8 = uRam00000000001f56b8 ^ 0x7979797979797979;
          _DAT_001f56b0 = _DAT_001f56b0 ^ 0x7979797979797979;
          uRam00000000001f56c8 = uRam00000000001f56c8 ^ 0x7979797979797979;
          _DAT_001f56c0 = _DAT_001f56c0 ^ 0x7979797979797979;
          DAT_001f7fc5 = '\x01';
        }
      }
      goto LAB_00120204;
    }
    lVar8 = -0x57072be448d4c849;
    if (lVar7 == -0x2896e27364a1da3f) goto LAB_00120204;
    if (lVar7 == -0x27e39c9d7fd6ef62) {
      unaff_x26 = puVar2 + -0x102;
      DAT_001f7c14 = 0;
      unaff_x21 = puVar2 + -300;
      local_e8 = puVar2 + -299;
      *local_e8 = (long)&DAT_001f56a0;
      *unaff_x21 = &DAT_001f5670;
      puVar2[-0x12a] = 0;
      puVar2[-0x117] = &DAT_001f56b0;
      local_f0 = puVar2 + -0x116;
      *local_f0 = (long)&DAT_001f56d8;
      puVar2[-0x115] = 0;
      memset(unaff_x26,0,0x801);
      uVar5 = FUN_0019e8c4(&DAT_001f5670,0x801,unaff_x26);
      puVar2 = unaff_x21;
      lVar8 = -0x5d31cafea13d402f;
      if ((uVar5 & 1) == 0) {
        lVar8 = 0x5a11fb51b50ab0a1;
      }
      goto LAB_00120204;
    }
    lVar8 = lVar7;
    if (lVar7 != -0x25f88141516142db) goto LAB_00120204;
    local_b8 = 0;
  }
  lVar8 = 0x47e69b36ea2f4aee;
  goto LAB_00120204;
}


