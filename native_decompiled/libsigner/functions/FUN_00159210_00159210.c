// Function: FUN_00159210
// Entry: 00159210

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_00159210(undefined8 *param_1,byte param_2)

{
  char cVar1;
  byte unaff_100000ea;
  bool bVar2;
  int iVar3;
  byte bVar4;
  long lVar6;
  long lVar7;
  byte unaff_w27;
  ulong local_f8;
  ulong local_f0;
  long local_e8;
  ulong local_e0;
  long *local_d8;
  long local_d0;
  long *local_c8;
  byte local_bc;
  ulong local_b8;
  ulong local_b0;
  byte local_a4;
  byte local_a0;
  byte local_9c;
  ulong local_98;
  byte local_8c;
  ulong local_88;
  byte local_78;
  byte local_74;
  byte bVar5;
  
  lVar7 = 0x6f3eb5a3ad0d319;
LAB_00159300:
  bVar5 = param_2;
  bVar4 = unaff_100000ea;
  lVar6 = lVar7;
  lVar7 = lVar6;
  unaff_100000ea = bVar4;
  param_2 = bVar4;
  if (lVar6 < 0x6f3eb5a3ad0d319) {
    if (-0x41abebe57fa4ed60 < lVar6) {
      if (lVar6 < -0x1c037e8114fb49d0) {
        if (lVar6 < -0x2bcac19a937d16d6) {
          if (lVar6 < -0x38f51ccf0db080f4) {
            if (lVar6 == -0x41abebe57fa4ed5f) {
              local_e0 = local_98 + 1;
              lVar7 = -0x1bf5eb6d443c7c51;
              local_a4 = local_8c;
              if ((ulong)param_1[0x10e] <= local_e0) {
                lVar7 = -0x30924456b0edbf72;
              }
            }
            else if (lVar6 == -0x3b2e2cdb5db35c5d) {
              local_f8 = param_1[0x10e];
              local_f0 = local_b0 + 1;
              lVar7 = 0x4ddeb4ff0137630e;
              local_bc = bVar5;
              if (local_f8 <= local_f0) {
                lVar7 = 0x2ca9159ac037efcb;
              }
            }
          }
          else if (lVar6 == -0x38f51ccf0db080f4) {
            bVar2 = param_1[0x10e] == 2;
            lVar6 = 0x775ec7254fcf7e99;
            lVar7 = -0x7b08d47853ae12ec;
LAB_0015a8d0:
            if (!bVar2) {
              lVar7 = lVar6;
            }
          }
          else if (lVar6 == -0x30924456b0edbf72) {
            lVar7 = -0x7553dfb745b9bf35;
            unaff_w27 = local_a4;
          }
          goto LAB_00159300;
        }
        if (lVar6 < -0x29a35812d6c0b5bc) {
          if (lVar6 == -0x2bcac19a937d16d6) {
            iVar3 = FUN_001ebe70(0,1,&DAT_001f7f2c);
            lVar7 = 0x4ad759a1e2b17e48;
            if (iVar3 != 0) {
              lVar7 = 0x468d32cfb61a47d5;
            }
          }
          else if (lVar6 == -0x2b4fcd7cb586831a) {
            lVar7 = 0x6cb76bf0e42add01;
          }
          goto LAB_00159300;
        }
        if (lVar6 == -0x29a35812d6c0b5bc) {
          DAT_001f6688 = DAT_001f6688 ^ 0x6d;
          DAT_001f6689 = DAT_001f6689 ^ 0x6d;
          DAT_001f668a = DAT_001f668a ^ 0x6d;
          DAT_001f668b = DAT_001f668b ^ 0x6d;
          DAT_001f668c = DAT_001f668c ^ 0x6d;
          DAT_001f668d = DAT_001f668d ^ 0x6d;
          _DAT_001f6670 = _DAT_001f6670 ^ 0x6d6d6d6d6d6d6d6d;
          uRam00000000001f6678 = uRam00000000001f6678 ^ 0x6d6d6d6d6d6d6d6d;
          DAT_001f6680 = DAT_001f6680 ^ 0x6d6d6d6d6d6d6d6d;
          DAT_001f8086 = '\x01';
          lVar7 = -0xca03aeb10c089ac;
          goto LAB_00159300;
        }
        if (lVar6 != -0x2526b373b764e18b) {
          if (lVar6 == -0x1c90366b85791aa2) {
            _DAT_001f6780 = _DAT_001f6780 ^ 0x5858585858585858;
            uRam00000000001f6788 = uRam00000000001f6788 ^ 0x5858585858585858;
            DAT_001f8093 = '\x01';
            lVar7 = -0xeac20341e9b16d3;
          }
          goto LAB_00159300;
        }
      }
      else {
        if (lVar6 < -0xca03aeb10c089ac) {
          if (lVar6 < -0x16c31168149ca3a6) {
            if (lVar6 == -0x1c037e8114fb49d0) {
              local_9c = 0;
              local_b8 = 0;
              lVar7 = -0x7d3ad68cfd873e62;
            }
            else if (lVar6 == -0x1bf5eb6d443c7c51) {
              local_b8 = local_e0;
              lVar7 = -0x7d3ad68cfd873e62;
              local_9c = local_a4;
            }
          }
          else if (lVar6 == -0x16c31168149ca3a6) {
            iVar3 = FUN_001ebe70(0,1,&DAT_001f7f50);
            lVar7 = 0x6bf883ccfbbb641c;
            if (iVar3 != 0) {
              lVar7 = 0x6c385047221aaeca;
            }
          }
          else if (lVar6 == -0xeac20341e9b16d3) {
            DAT_001f7f54 = 0;
            iVar3 = FUN_001ca28c(param_1[3],&DAT_001f6780);
            lVar7 = 0x2780a313320b4eeb;
            if (iVar3 != 0) {
              lVar7 = -0x38f51ccf0db080f4;
            }
          }
          goto LAB_00159300;
        }
        if (lVar6 < 0xea54267aa09b5) {
          if (lVar6 == -0xca03aeb10c089ac) {
            DAT_001f7f20 = 0;
            iVar3 = FUN_001ca28c(&DAT_001f6670,local_e8);
            lVar7 = -0x4b01149ff79adaeb;
            if (iVar3 != 0) {
              lVar7 = -0x65b039f167b392eb;
            }
          }
          else if (lVar6 == -0x70e1bdf660366da) {
            DAT_001f7f2c = 0;
            iVar3 = FUN_001ca28c(&DAT_001f66d0,local_d0);
            lVar7 = -0x5e235bd90287a746;
            if (iVar3 != 0) {
              lVar7 = -0x7b7e99b2a2f246af;
            }
          }
          goto LAB_00159300;
        }
        lVar7 = 0x6dd52dce8d7834e4;
        if (((lVar6 == 0xea54267aa09b5) || (lVar7 = 0x6cb76bf0e42add01, lVar6 == 0x2bcda55a70b96fd))
           || (lVar7 = lVar6, lVar6 != 0x473ba0a3f2f106f)) goto LAB_00159300;
      }
LAB_001598cc:
      unaff_w27 = 1;
      goto LAB_00159e78;
    }
    if (lVar6 < -0x5f70e66d5b043fb1) {
      if (lVar6 < -0x6a87ec508baefc50) {
        if (lVar6 < -0x7b08d47853ae12ec) {
          if (lVar6 == -0x7d3ad68cfd873e62) {
            local_98 = local_b8;
            local_d0 = param_1[local_b8 * 2 + 0xe];
            lVar7 = 0x50225e5b7376cf11;
            local_a0 = local_9c;
            if (local_d0 != 0) {
              lVar7 = 0x16de9a411a99f21b;
            }
          }
          else if (lVar6 == -0x7b7e99b2a2f246af) {
            lVar7 = -0x41abebe57fa4ed5f;
            local_8c = local_a0;
          }
        }
        else if (lVar6 == -0x7b08d47853ae12ec) {
          local_88 = 0;
          local_78 = 0;
LAB_0015a658:
          lVar7 = 0x7c529962b492ebee;
        }
        else {
          lVar7 = 0x4023002f7db92316;
          if ((lVar6 != -0x740ecb3b1468d822) && (lVar7 = lVar6, lVar6 == -0x7553dfb745b9bf35)) {
            return unaff_w27 & 1;
          }
        }
      }
      else if (lVar6 < -0x65b039f167b392eb) {
        if (lVar6 == -0x6a87ec508baefc50) {
          lVar7 = 0x50d239ac3b0013a2;
          bVar2 = DAT_001f8092 == '\0';
          lVar6 = -0x60d98ac66f21a425;
          goto LAB_001592f8;
        }
        if (lVar6 == -0x689908b96e4c27d3) {
          lVar7 = 0x564a24a363c43c57;
        }
      }
      else {
        lVar7 = -0x3b2e2cdb5db35c5d;
        unaff_100000ea = local_74;
        param_2 = local_74;
        if (((lVar6 != -0x65b039f167b392eb) &&
            (lVar7 = 0x58e81cea9e47d1cd, unaff_100000ea = bVar4, param_2 = bVar4,
            lVar6 != -0x62e357a7efa73cae)) && (lVar7 = lVar6, lVar6 == -0x60d98ac66f21a425)) {
          lVar7 = 0x1aa36fb7c2e2ab81;
LAB_00159fa8:
          DAT_001f6770 = DAT_001f6770 ^ 0xc5;
          DAT_001f6768 = DAT_001f6768 ^ 0xc5c5c5c5c5c5c5c5;
          DAT_001f8092 = '\x01';
          unaff_100000ea = bVar4;
          param_2 = bVar4;
        }
      }
      goto LAB_00159300;
    }
    if (-0x5b620fa1fe4c81c1 < lVar6) {
      if (lVar6 < -0x591ebb13737542dc) {
        lVar7 = 0x58e81cea9e47d1cd;
        if ((lVar6 != -0x5b620fa1fe4c81c0) && (lVar7 = lVar6, lVar6 == -0x5a329f4abb11cd17)) {
          lVar7 = 0x4823df0ede90c3c8;
          goto LAB_00159fa8;
        }
      }
      else {
        if (lVar6 == -0x591ebb13737542dc) goto LAB_00159e74;
        lVar7 = 0x37a015af3921dbe0;
        if ((lVar6 != -0x4b01149ff79adaeb) && (lVar7 = lVar6, lVar6 == -0x481deeec003670de)) {
          lVar7 = -0x70e1bdf660366da;
        }
      }
      goto LAB_00159300;
    }
    if (-0x5c92498a65877186 < lVar6) {
      lVar7 = 0x30161b6359fa741f;
      if ((lVar6 == -0x5c92498a65877185) || (lVar7 = lVar6, lVar6 != -0x5b9660cb24c6b89e))
      goto LAB_00159300;
      lVar7 = 0xea54267aa09b5;
      bVar2 = DAT_001f8087 == '\0';
      lVar6 = 0x3173fa9e147d3ffc;
LAB_001592f8:
      unaff_100000ea = bVar4;
      param_2 = bVar5;
      if (bVar2) {
        lVar7 = lVar6;
      }
      goto LAB_00159300;
    }
    if (lVar6 != -0x5f70e66d5b043fb1) {
      if (lVar6 == -0x5e235bd90287a746) {
        lVar7 = 0x4023002f7db92316;
      }
      goto LAB_00159300;
    }
  }
  else if (lVar6 < 0x468d32cfb61a47d5) {
    if (lVar6 < 0x29556cb144212814) {
      if (lVar6 < 0x1612ba6e65112267) {
        if (lVar6 < 0xa75f8ab0378919a) {
          lVar7 = 0x30161b6359fa741f;
          if ((lVar6 != 0x6f3eb5a3ad0d319) && (lVar7 = lVar6, lVar6 == 0x9fb7299d133e59a)) {
            lVar7 = -0xca03aeb10c089ac;
          }
        }
        else {
          lVar7 = 0x37a015af3921dbe0;
          if ((lVar6 != 0xa75f8ab0378919a) && (lVar7 = lVar6, lVar6 == 0x15e77934acd0ddd4)) {
            local_d8 = param_1 + local_b0 * 2 + 0xf;
            bVar2 = *local_d8 == 0;
            lVar6 = -0x5b620fa1fe4c81c0;
            lVar7 = -0x5f70e66d5b043fb1;
            goto LAB_0015a8d0;
          }
        }
        goto LAB_00159300;
      }
      if (0x1aa36fb7c2e2ab80 < lVar6) {
        if (lVar6 == 0x1aa36fb7c2e2ab81) {
          DAT_001f7f50 = 0;
          iVar3 = FUN_001ca28c(*param_1,&DAT_001f6768);
          lVar7 = 0x473ba0a3f2f106f;
          if (iVar3 != 0) {
            lVar7 = 0x35eb351ad3398db1;
          }
        }
        else {
          if (lVar6 == 0x264a9151225e1509) {
            lVar7 = 0x66aa6162886434a0;
            bVar2 = DAT_001f8093 == '\0';
            lVar6 = -0x1c90366b85791aa2;
            goto LAB_001592f8;
          }
          if (lVar6 == 0x2780a313320b4eeb) goto LAB_001598cc;
        }
        goto LAB_00159300;
      }
      if (lVar6 != 0x1612ba6e65112267) {
        if (lVar6 == 0x16de9a411a99f21b) {
          local_c8 = param_1 + local_98 * 2 + 0xf;
          lVar7 = 0x29556cb144212814;
          if (*local_c8 != 0) {
            lVar7 = 0x3129e14d2a6ad40e;
          }
        }
        goto LAB_00159300;
      }
    }
    else {
      if (0x3173fa9e147d3ffb < lVar6) {
        if (lVar6 < 0x37a015af3921dbe0) {
          if (lVar6 == 0x3173fa9e147d3ffc) {
            lVar7 = 0x6dd52dce8d7834e4;
LAB_0015a7f0:
            _DAT_001f6690 = _DAT_001f6690 ^ 0xe5e5e5e5e5e5e5e5;
            uRam00000000001f6698 = uRam00000000001f6698 ^ 0xe5e5e5e5e5e5e5e5;
            _DAT_001f66a0 = _DAT_001f66a0 ^ 0xe5e5e5e5e5e5e5e5;
            uRam00000000001f66a8 = uRam00000000001f66a8 ^ 0xe5e5e5e5e5e5e5e5;
            DAT_001f8087 = '\x01';
          }
          else if (lVar6 == 0x35eb351ad3398db1) {
            lVar7 = -0x16c31168149ca3a6;
          }
        }
        else if (lVar6 == 0x37a015af3921dbe0) {
          iVar3 = FUN_001ebe70(0,1,&DAT_001f7f24);
          lVar7 = -0x5b9660cb24c6b89e;
          if (iVar3 != 0) {
            lVar7 = 0xa75f8ab0378919a;
          }
        }
        else if (lVar6 == 0x3ab914c3be46190c) {
          DAT_001f66e8 = DAT_001f66e8 ^ 0xa2;
          DAT_001f66e9 = DAT_001f66e9 ^ 0xa2;
          DAT_001f66ea = DAT_001f66ea ^ 0xa2;
          _DAT_001f66d0 = _DAT_001f66d0 ^ 0xa2a2a2a2a2a2a2a2;
          uRam00000000001f66d8 = uRam00000000001f66d8 ^ 0xa2a2a2a2a2a2a2a2;
          DAT_001f66eb = DAT_001f66eb ^ 0xa2;
          DAT_001f66e0 = DAT_001f66e0 ^ 0xa2a2a2a2a2a2a2a2;
          DAT_001f8089 = '\x01';
          lVar7 = -0x70e1bdf660366da;
        }
        else if (lVar6 == 0x4023002f7db92316) {
          iVar3 = FUN_001ebe70(0,1,&DAT_001f7f24);
          lVar7 = 0x4d0a4e77e11dd778;
          if (iVar3 != 0) {
            lVar7 = -0x740ecb3b1468d822;
          }
        }
        goto LAB_00159300;
      }
      if (0x30161b6359fa741e < lVar6) {
        if (lVar6 == 0x30161b6359fa741f) {
          iVar3 = FUN_001ebe70(0,1,&DAT_001f7f50);
          lVar7 = -0x6a87ec508baefc50;
          if (iVar3 != 0) {
            lVar7 = -0x5c92498a65877185;
          }
        }
        else if (lVar6 == 0x3129e14d2a6ad40e) {
          lVar7 = -0x2bcac19a937d16d6;
        }
        goto LAB_00159300;
      }
      if (lVar6 != 0x29556cb144212814) {
        if (lVar6 == 0x2ca9159ac037efcb) {
          bVar2 = (local_bc & local_f8 != 0) == 0;
          lVar6 = -0x591ebb13737542dc;
          lVar7 = -0x1c037e8114fb49d0;
          goto LAB_001592f8;
        }
        goto LAB_00159300;
      }
    }
  }
  else {
    if (lVar6 < 0x564a24a363c43c57) {
      if (lVar6 < 0x4d0a4e77e11dd778) {
        if (lVar6 < 0x4a77a02797023287) {
          lVar7 = -0x2bcac19a937d16d6;
          if ((lVar6 != 0x468d32cfb61a47d5) && (lVar7 = lVar6, lVar6 == 0x4823df0ede90c3c8)) {
            DAT_001f7f50 = 0;
            iVar3 = FUN_001ca28c(param_1[4],&DAT_001f6768);
            lVar7 = -0x2526b373b764e18b;
            if (iVar3 != 0) {
              lVar7 = -0x2b4fcd7cb586831a;
            }
          }
          goto LAB_00159300;
        }
        lVar7 = 0x4823df0ede90c3c8;
        if ((lVar6 == 0x4a77a02797023287) || (lVar7 = lVar6, lVar6 != 0x4ad759a1e2b17e48))
        goto LAB_00159300;
        lVar6 = 0x3ab914c3be46190c;
        lVar7 = -0x481deeec003670de;
        cVar1 = DAT_001f8089;
      }
      else {
        if (0x4e88f8fda5b50f28 < lVar6) {
          if (lVar6 == 0x4e88f8fda5b50f29) {
            lVar7 = 0x564a24a363c43c57;
            goto LAB_0015a7f0;
          }
          if (lVar6 == 0x50225e5b7376cf11) goto LAB_00159e74;
          if (lVar6 == 0x50d239ac3b0013a2) {
            lVar7 = 0x1aa36fb7c2e2ab81;
          }
          goto LAB_00159300;
        }
        if (lVar6 != 0x4d0a4e77e11dd778) {
          if (lVar6 == 0x4ddeb4ff0137630e) {
            local_88 = local_f0;
            local_78 = local_bc;
            goto LAB_0015a658;
          }
          goto LAB_00159300;
        }
        lVar6 = 0x4e88f8fda5b50f29;
        lVar7 = -0x689908b96e4c27d3;
        cVar1 = DAT_001f8087;
      }
      if (cVar1 == '\0') {
        lVar7 = lVar6;
      }
      goto LAB_00159300;
    }
    if (lVar6 < 0x6c385047221aaeca) {
      if (lVar6 < 0x66aa6162886434a0) {
        if (lVar6 == 0x564a24a363c43c57) {
          DAT_001f7f24 = 0;
          iVar3 = FUN_001ca28c(&DAT_001f6690,*local_c8);
          lVar7 = -0x41abebe57fa4ed5f;
          local_8c = iVar3 == 0 | local_a0;
        }
        else if (lVar6 == 0x58e81cea9e47d1cd) {
          iVar3 = FUN_001ebe70(0,1,&DAT_001f7f20);
          lVar7 = 0x6b2e590408870a89;
          if (iVar3 != 0) {
            lVar7 = -0x62e357a7efa73cae;
          }
        }
        goto LAB_00159300;
      }
      lVar7 = -0xeac20341e9b16d3;
      unaff_100000ea = bVar5;
      param_2 = bVar5;
      if (lVar6 == 0x66aa6162886434a0) goto LAB_00159300;
      if (lVar6 != 0x6b2e590408870a89) {
        lVar7 = lVar6;
        if (lVar6 == 0x6bf883ccfbbb641c) {
          lVar7 = 0x4a77a02797023287;
          bVar2 = DAT_001f8092 == '\0';
          lVar6 = -0x5a329f4abb11cd17;
          goto LAB_001592f8;
        }
        goto LAB_00159300;
      }
      lVar7 = 0x9fb7299d133e59a;
      bVar2 = DAT_001f8086 == '\0';
      lVar6 = -0x29a35812d6c0b5bc;
      goto LAB_001592f8;
    }
    if (lVar6 < 0x6dd52dce8d7834e4) {
      lVar7 = -0x16c31168149ca3a6;
      if ((lVar6 != 0x6c385047221aaeca) && (lVar7 = lVar6, lVar6 == 0x6cb76bf0e42add01)) {
        iVar3 = FUN_001ebe70(0,1,&DAT_001f7f54);
        lVar7 = 0x264a9151225e1509;
        if (iVar3 != 0) {
          lVar7 = 0x2bcda55a70b96fd;
        }
      }
      goto LAB_00159300;
    }
    if (lVar6 == 0x6dd52dce8d7834e4) {
      DAT_001f7f24 = 0;
      iVar3 = FUN_001ca28c(&DAT_001f6690,*local_d8);
      unaff_100000ea = iVar3 == 0 | local_74;
      lVar7 = -0x3b2e2cdb5db35c5d;
      param_2 = unaff_100000ea;
      goto LAB_00159300;
    }
    if (lVar6 != 0x775ec7254fcf7e99) {
      if (lVar6 == 0x7c529962b492ebee) {
        local_b0 = local_88;
        local_e8 = param_1[local_88 * 2 + 0xe];
        lVar7 = 0x1612ba6e65112267;
        local_74 = local_78;
        if (local_e8 != 0) {
          lVar7 = 0x15e77934acd0ddd4;
        }
      }
      goto LAB_00159300;
    }
  }
LAB_00159e74:
  unaff_w27 = 0;
LAB_00159e78:
  lVar7 = -0x7553dfb745b9bf35;
  goto LAB_00159300;
}


