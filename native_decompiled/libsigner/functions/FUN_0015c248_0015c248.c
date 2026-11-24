// Function: FUN_0015c248
// Entry: 0015c248

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0015c248(ulong param_1,uint param_2,byte param_3)

{
  byte unaff_1000047e;
  bool bVar1;
  int iVar2;
  ulong uVar3;
  byte bVar4;
  byte in_w8;
  byte bVar5;
  long lVar6;
  ulong in_x9;
  ulong uVar7;
  long lVar8;
  byte in_w10;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  ulong uVar12;
  ulong local_100;
  ulong local_f8;
  long local_f0;
  long *local_e8;
  long local_e0;
  long *local_d8;
  byte local_cc;
  ulong local_c8;
  ulong local_c0;
  byte local_b4;
  ulong local_b0;
  uint local_a4;
  ulong local_a0;
  byte local_94;
  byte local_90;
  uint local_8c;
  byte local_88;
  uint local_84;
  
  uVar3 = param_1;
  lVar8 = -0x86ca248ff98f640;
LAB_0015c31c:
  bVar4 = param_3;
  bVar5 = in_w8;
  bVar9 = unaff_1000047e;
  bVar10 = in_w10;
  uVar11 = param_2;
  lVar6 = lVar8;
  uVar7 = in_x9;
  uVar12 = uVar3 & 0xffffffff;
  in_x9 = uVar7;
  lVar8 = lVar6;
  param_2 = uVar11;
  in_w10 = bVar10;
  unaff_1000047e = bVar9;
  in_w8 = bVar5;
  param_3 = bVar4;
  if (lVar6 < -0x86ca248ff98f640) {
    if (lVar6 < -0x37ad68b31c88b12f) {
      if (lVar6 < -0x59479809adc72586) {
        if (lVar6 < -0x6642267d391d0c76) {
          if (lVar6 < -0x783025decaa7fd10) {
            if (lVar6 == -0x7fa18db4db2ff01e) goto LAB_0015dc64;
            uVar3 = uVar12;
            lVar8 = -0x498ef8a15abb5ad0;
            if ((lVar6 != -0x7b38f1ca6eebf3b4) && (lVar8 = lVar6, lVar6 == -0x7a80f43218efa9d9)) {
              lVar8 = 0x793d8821d94e1eac;
              if (DAT_001f8098 == '\0') {
                lVar8 = 0x2a7779e64e35c519;
              }
            }
          }
          else {
            uVar3 = (ulong)local_8c;
            in_x9 = local_a0;
            lVar8 = 0x1a61437f3a73d76;
            in_w10 = bVar9;
            if (lVar6 != -0x783025decaa7fd10) {
              if (lVar6 == -0x7576ccaee223cc2d) {
                local_d8 = (long *)(param_1 + local_c0 * 0x10 + 0x78);
                uVar3 = uVar12;
                in_x9 = uVar7;
                lVar8 = -0x7fa18db4db2ff01e;
                in_w10 = bVar10;
                if (*local_d8 != 0) {
                  lVar8 = -0x37ad68b31c88b12f;
                }
              }
              else {
                uVar3 = uVar12;
                in_x9 = uVar7;
                lVar8 = lVar6;
                if (lVar6 == -0x741bbbe22e33973e) {
                  lVar8 = -0x14dceab32f3245aa;
                }
              }
            }
          }
          goto LAB_0015c31c;
        }
        if (lVar6 < -0x5feda6d6be96d164) {
          if (lVar6 != -0x6642267d391d0c76) {
            if (lVar6 == -0x647e3db7e52e1a42) {
              uVar3 = uVar12;
              lVar8 = 0x5f936c17eba715b7;
              if (DAT_001f809c == '\0') {
                lVar8 = 0x2f2d7521ddf32bbf;
              }
            }
            else {
              uVar3 = uVar12;
              if (lVar6 == -0x62871fad29a57a30) {
LAB_0015d4a4:
                uVar3 = uVar12;
                lVar8 = -0x51622d1c94f8b946;
              }
            }
            goto LAB_0015c31c;
          }
          DAT_001f7f7c = 0;
          lVar8 = FUN_001cac50(*(undefined8 *)(param_1 + 8),&DAT_001f6868);
          bVar1 = lVar8 == 0;
          lVar6 = -0x2c9ba4ecb4331b07;
          lVar8 = 0x65afe2fa052cadb2;
        }
        else {
          if (lVar6 < -0x5ec0632d222b285c) {
            uVar3 = uVar12;
            lVar8 = -0x14dceab32f3245aa;
            if ((lVar6 != -0x5feda6d6be96d164) && (lVar8 = lVar6, lVar6 == -0x5f4c168d6c2474c4)) {
              lVar8 = -0x6642267d391d0c76;
            }
            goto LAB_0015c31c;
          }
          if (lVar6 != -0x5ec0632d222b285c) {
            uVar3 = uVar12;
            unaff_1000047e = bVar10;
            if (lVar6 == -0x59f7d0fe8f917acb) {
              lVar8 = -0x35b8c673f3060d74;
            }
            goto LAB_0015c31c;
          }
          iVar2 = FUN_001ebe70(0,1,&DAT_001f7f78);
          bVar1 = iVar2 == 0;
          lVar6 = 0x76b0a0805e67934b;
          lVar8 = -0x1bd72834baeba8fd;
        }
      }
      else if (lVar6 < -0x4dd84a2581c4e72b) {
        if (lVar6 < -0x523932b71661112d) {
          if (lVar6 != -0x59479809adc72586) {
            if (lVar6 == -0x587fceaffb1c45c8) {
              _DAT_001f67d0 = _DAT_001f67d0 ^ 0x2727272727272727;
              uRam00000000001f67d8 = uRam00000000001f67d8 ^ 0x2727272727272727;
              DAT_001f67f8 = DAT_001f67f8 ^ 0x27;
              _DAT_001f67e0 = _DAT_001f67e0 ^ 0x2727272727272727;
              uRam00000000001f67e8 = uRam00000000001f67e8 ^ 0x2727272727272727;
              DAT_001f67f9 = DAT_001f67f9 ^ 0x27;
              DAT_001f67fa = DAT_001f67fa ^ 0x27;
              DAT_001f67fb = DAT_001f67fb ^ 0x27;
              DAT_001f67f0 = DAT_001f67f0 ^ 0x2727272727272727;
              DAT_001f8096 = '\x01';
              uVar3 = uVar12;
              lVar8 = 0x511a39e86687077f;
              in_w10 = bVar9;
            }
            else {
              uVar3 = uVar12;
              if (lVar6 == -0x56e012081cc5c1b0) {
                iVar2 = FUN_001ebe70(0,1,&DAT_001f7f6c);
                lVar8 = -0x7a80f43218efa9d9;
                if (iVar2 != 0) {
                  lVar8 = -0x16c8201ce27b9c85;
                }
              }
            }
            goto LAB_0015c31c;
          }
          iVar2 = FUN_001ebe70(0,1,&DAT_001f7f68);
          bVar1 = iVar2 == 0;
          lVar6 = -0x24dd379cddd9518b;
          lVar8 = 0x11bbfb0d804167e1;
        }
        else {
          uVar3 = uVar12;
          lVar8 = 0x4a592b6f8bebe5f0;
          in_w10 = bVar9;
          if (lVar6 == -0x523932b71661112d) goto LAB_0015c31c;
          if (lVar6 != -0x51622d1c94f8b946) {
            lVar8 = lVar6;
            if (lVar6 == -0x4e2c644b6edc3dd6) {
              lVar8 = -0x49668883ffefee99;
            }
            goto LAB_0015c31c;
          }
          iVar2 = FUN_001ebe70(0,1,&DAT_001f7f7c);
          bVar1 = iVar2 == 0;
          lVar6 = -0x140ff81f3012b6ab;
          lVar8 = 0x391ec1731f98e0a5;
        }
      }
      else {
        if (-0x3f80c6090b61b1f1 < lVar6) {
          if (lVar6 < -0x3ba8dc67c4fa366c) {
            if (lVar6 == -0x3f80c6090b61b1f0) {
              DAT_001f7f70 = 0;
              iVar2 = FUN_001ca28c(*(undefined8 *)(param_1 + 8),&DAT_001f6848);
              local_90 = iVar2 == 0;
LAB_0015e28c:
              uVar3 = uVar12;
              lVar8 = -0x1c8968eb39016855;
              in_w10 = bVar9;
            }
            else {
              uVar3 = uVar12;
              if (lVar6 == -0x3d73bdd559b03b2e) {
                DAT_001f7f78 = 0;
                iVar2 = FUN_001ca28c(*(undefined8 *)(param_1 + 0x50),&DAT_001f685c);
                local_88 = iVar2 == 0;
LAB_0015e528:
                uVar3 = uVar12;
                lVar8 = 0x13d6017d25b6bcad;
                in_w10 = bVar9;
              }
            }
          }
          else if (lVar6 == -0x3ba8dc67c4fa366c) {
            uVar3 = uVar12;
            lVar8 = -0x2dd04f5a714333ee;
            if (DAT_001f8096 == '\0') {
              lVar8 = -0x587fceaffb1c45c8;
            }
          }
          else {
            uVar3 = uVar12;
            in_w10 = bVar9;
            if (lVar6 == -0x3878933c25512f8a) {
              lVar8 = 0x6f2cfc5b2041a2fe;
              in_w10 = bVar10;
              if (DAT_001f806d == '\0') {
                lVar8 = 0x5019d6c9a626623e;
              }
            }
          }
          goto LAB_0015c31c;
        }
        if (lVar6 == -0x4dd84a2581c4e72b) {
          uVar3 = 0;
          in_x9 = 0;
          lVar8 = 0x1a61437f3a73d76;
          in_w10 = bVar9;
          goto LAB_0015c31c;
        }
        if (lVar6 != -0x498ef8a15abb5ad0) {
          uVar3 = uVar12;
          if (lVar6 == -0x49668883ffefee99) {
            DAT_001f7f7c = 0;
            lVar6 = FUN_001cac50(*(undefined8 *)(param_1 + 0x30),&DAT_001f6868);
            lVar8 = -0x62871fad29a57a30;
            if (lVar6 != 0) {
              lVar8 = 0x47a4baa00738c8d;
            }
          }
          goto LAB_0015c31c;
        }
        iVar2 = FUN_001ebe70(0,1,&DAT_001f7f7c);
        bVar1 = iVar2 == 0;
        lVar6 = -0x7b38f1ca6eebf3b4;
        lVar8 = 0x5cc1ef2a71ca9ea1;
      }
    }
    else if (lVar6 < -0x1c8968eb39016855) {
      if (lVar6 < -0x29516a502fedeb9d) {
        if (-0x2c9ba4ecb4331b08 < lVar6) {
          if (lVar6 != -0x2c9ba4ecb4331b07) {
            if (lVar6 == -0x2b91bd6783ae4d6e) goto LAB_0015dc64;
            uVar3 = uVar12;
            in_w10 = bVar9;
            if (lVar6 != -0x2b235fca0483efcf) goto LAB_0015c31c;
          }
LAB_0015dae8:
          local_84 = 1;
          goto LAB_0015dc70;
        }
        uVar3 = uVar12;
        lVar8 = -0x59479809adc72586;
        if (lVar6 == -0x37ad68b31c88b12f) goto LAB_0015c31c;
        if (lVar6 != -0x35b8c673f3060d74) {
          lVar8 = lVar6;
          if (lVar6 == -0x2dd04f5a714333ee) {
            lVar8 = 0x511a39e86687077f;
          }
          goto LAB_0015c31c;
        }
        DAT_001f7f70 = 0;
        iVar2 = FUN_001ca28c(*(undefined8 *)(param_1 + 0x10),&DAT_001f6848);
        bVar1 = iVar2 == 0;
        lVar6 = 0x4f2d8da35243480d;
        lVar8 = 0x1bc7c5cb8c100461;
      }
      else {
        if (lVar6 < -0x24dd379cddd9518b) {
          if (lVar6 == -0x29516a502fedeb9d) {
            local_88 = false;
            goto LAB_0015e528;
          }
          if (lVar6 == -0x28d4527d203d8184) {
            bVar1 = *(long *)(param_1 + 0x870) == 2;
            lVar8 = -0xac3db8d0697c864;
            lVar6 = 0x1dc5e3f1b565650;
LAB_0015e5a8:
            uVar3 = uVar12;
            if (!bVar1) {
              lVar8 = lVar6;
            }
          }
          else {
            uVar3 = uVar12;
            if (lVar6 == -0x26879c9fef24641c) {
              lVar8 = -0x17111ec66de92c98;
            }
          }
          goto LAB_0015c31c;
        }
        if (lVar6 < -0x2348193effb871e9) {
          uVar3 = uVar12;
          lVar8 = -0x59479809adc72586;
          if ((lVar6 != -0x24dd379cddd9518b) && (lVar8 = lVar6, lVar6 == -0x235d4cfcd03342e9)) {
            lVar8 = -0x3f80c6090b61b1f0;
          }
          goto LAB_0015c31c;
        }
        if (lVar6 == -0x2348193effb871e9) goto LAB_0015dc64;
        uVar3 = uVar12;
        in_w10 = bVar9;
        if (lVar6 != -0x225b3f8a7bdf517b) goto LAB_0015c31c;
        DAT_001f7f74 = 0;
        iVar2 = FUN_001ca28c(*(undefined8 *)(param_1 + 0x58),&DAT_001f6850);
        bVar1 = iVar2 == 0;
        lVar6 = -0x29516a502fedeb9d;
        lVar8 = -0x1bb96c154dbc24c6;
      }
    }
    else if (lVar6 < -0x16c8201ce27b9c85) {
      if (lVar6 < -0x19032ef9dc64c0a9) {
        uVar3 = uVar12;
        lVar8 = -0x17111ec66de92c98;
        in_w8 = local_90;
        if (lVar6 != -0x1c8968eb39016855) {
          if (lVar6 == -0x1bd72834baeba8fd) {
            lVar8 = 0x286d4342225ba8c2;
            in_w8 = bVar5;
            if (DAT_001f809b == '\0') {
              lVar8 = 0x14f6301b0e8f9774;
            }
          }
          else {
            lVar8 = lVar6;
            in_w8 = bVar5;
            if (lVar6 == -0x1bb96c154dbc24c6) {
LAB_0015d3ec:
              uVar3 = uVar12;
              lVar8 = -0x5ec0632d222b285c;
              in_w8 = bVar5;
            }
          }
        }
        goto LAB_0015c31c;
      }
      uVar3 = uVar12;
      lVar8 = 0x7c14c9f83b7963a3;
      in_w10 = bVar9;
      param_3 = local_94;
      if (lVar6 == -0x19032ef9dc64c0a9) goto LAB_0015c31c;
      if (lVar6 == -0x18bd53eef4acbcd7) {
        DAT_001f6858 = DAT_001f6858 ^ 0xd2;
        DAT_001f6859 = DAT_001f6859 ^ 0xd2;
        DAT_001f6850 = DAT_001f6850 ^ 0xd2d2d2d2d2d2d2d2;
        DAT_001f809a = '\x01';
        lVar8 = -0x225b3f8a7bdf517b;
        param_3 = bVar4;
        goto LAB_0015c31c;
      }
      lVar8 = lVar6;
      param_3 = bVar4;
      if (lVar6 != -0x17111ec66de92c98) goto LAB_0015c31c;
      iVar2 = FUN_001ebe70(0,1,&DAT_001f7f74);
      bVar1 = iVar2 == 0;
      lVar6 = -0x26879c9fef24641c;
      lVar8 = 0x610b617b8f228398;
    }
    else if (lVar6 < -0xfc055bd6dbef338) {
      uVar3 = uVar12;
      lVar8 = -0x56e012081cc5c1b0;
      if (lVar6 == -0x16c8201ce27b9c85) goto LAB_0015c31c;
      if (lVar6 != -0x14dceab32f3245aa) {
        lVar8 = lVar6;
        if (lVar6 == -0x140ff81f3012b6ab) goto LAB_0015d4a4;
        goto LAB_0015c31c;
      }
      iVar2 = FUN_001ebe70(0,1,&DAT_001f7f64);
      bVar1 = iVar2 == 0;
      lVar6 = -0x741bbbe22e33973e;
      lVar8 = -0x3ba8dc67c4fa366c;
    }
    else {
      if (-0xce60e2d517bbc1d < lVar6) {
        if (lVar6 == -0xce60e2d517bbc1c) {
          local_c8 = local_b0;
          local_f0 = *(long *)(param_1 + local_b0 * 0x10 + 0x70);
          uVar3 = uVar12;
          lVar8 = 0x4582277cfca58c1a;
          in_w10 = bVar9;
          local_94 = local_b4;
          if (local_f0 != 0) {
            lVar8 = 0x2a6f593a2a23d0de;
          }
        }
        else {
          uVar3 = uVar12;
          in_w10 = bVar9;
          if (lVar6 == -0xac3db8d0697c864) {
            local_b0 = 0;
            local_b4 = 0;
            goto LAB_0015de98;
          }
        }
        goto LAB_0015c31c;
      }
      if (lVar6 == -0xfc055bd6dbef338) {
        DAT_001f7f68 = 0;
        iVar2 = FUN_001ca28c(&DAT_001f6800,local_e0);
        bVar1 = iVar2 == 0;
        lVar6 = 0x24006f20f66e7623;
        lVar8 = 0x65117ac6a248382d;
      }
      else {
        uVar3 = uVar12;
        if (lVar6 != -0xf2722f51db9af92) goto LAB_0015c31c;
        iVar2 = FUN_001ebe70(0,1,&DAT_001f7f70);
        bVar1 = iVar2 == 0;
        lVar6 = 0x6cd096775859b6ed;
        lVar8 = 0x5650c510b7491462;
      }
    }
LAB_0015c304:
    uVar3 = uVar12;
    in_w10 = bVar10;
    param_3 = bVar4;
    if (!bVar1) {
      lVar8 = lVar6;
    }
    goto LAB_0015c31c;
  }
  if (lVar6 < 0x3efc9cf8d25b5972) {
    if (lVar6 < 0x1a48fb84998a6a08) {
      uVar11 = (uint)uVar3;
      if (lVar6 < 0x8ffa4103ab7cc8c) {
        if (lVar6 < 0x47a4baa00738c8d) {
          uVar3 = uVar12;
          lVar8 = 0x7fda6b373a0c4b3;
          if (lVar6 != -0x86ca248ff98f640) {
            if (lVar6 == 0x1a61437f3a73d76) {
              local_e0 = *(long *)(param_1 + uVar7 * 0x10 + 0x70);
              lVar8 = 0x1eb3c819152dac53;
              local_c0 = uVar7;
              local_a4 = uVar11;
              in_w10 = bVar9;
              if (local_e0 != 0) {
                lVar8 = -0x7576ccaee223cc2d;
              }
            }
            else {
              lVar8 = lVar6;
              if (lVar6 == 0x1dc5e3f1b565650) {
LAB_0015dc64:
                local_84 = 0;
LAB_0015dc70:
                uVar3 = uVar12;
                lVar8 = 0x13a340508ea7aa34;
                in_w10 = bVar9;
              }
            }
          }
        }
        else {
          if (lVar6 == 0x47a4baa00738c8d) goto LAB_0015dae8;
          if (lVar6 == 0x52d8927729b627b) {
            DAT_001f7ebc = 0;
            iVar2 = FUN_001ca28c(&DAT_001f6490,local_f0);
            uVar3 = uVar12;
            lVar8 = -0x5feda6d6be96d164;
            if (iVar2 != 0) {
              lVar8 = -0x19032ef9dc64c0a9;
            }
          }
          else {
            uVar3 = uVar12;
            in_w10 = bVar9;
            if (lVar6 == 0x7fda6b373a0c4b3) {
              iVar2 = FUN_001ebe70(0,1,&DAT_001f7f70);
              lVar6 = 0x180f1c7d3303aebe;
              lVar8 = 0x3da3604e79d4d4c7;
              bVar1 = iVar2 == 0;
              goto LAB_0015c304;
            }
          }
        }
      }
      else if (lVar6 < 0x13d6017d25b6bcad) {
        if (lVar6 < 0x13a340508ea7aa34) {
          uVar3 = uVar12;
          lVar8 = -0xfc055bd6dbef338;
          if ((lVar6 != 0x8ffa4103ab7cc8c) && (lVar8 = lVar6, lVar6 == 0x11bbfb0d804167e1)) {
            lVar8 = 0x8ffa4103ab7cc8c;
            if (DAT_001f8097 == '\0') {
              lVar8 = 0x312a9bf3098b72db;
            }
          }
        }
        else {
          uVar3 = uVar12;
          lVar8 = -0x225b3f8a7bdf517b;
          in_w10 = bVar9;
          if ((lVar6 != 0x13a628df1027e313) && (lVar8 = lVar6, lVar6 == 0x13a340508ea7aa34)) {
            return local_84 & 1;
          }
        }
      }
      else {
        uVar3 = uVar12;
        lVar8 = -0x498ef8a15abb5ad0;
        in_w10 = local_88;
        unaff_1000047e = local_88;
        if (lVar6 != 0x13d6017d25b6bcad) {
          if (lVar6 == 0x14f6301b0e8f9774) {
            DAT_001f685e = DAT_001f685e ^ 0x6d;
            DAT_001f685c = DAT_001f685c ^ 0x6d;
            DAT_001f685d = DAT_001f685d ^ 0x6d;
            DAT_001f685f = DAT_001f685f ^ 0x6d;
            DAT_001f6860 = DAT_001f6860 ^ 0x6d;
            DAT_001f6861 = DAT_001f6861 ^ 0x6d;
            DAT_001f809b = '\x01';
            lVar8 = -0x3d73bdd559b03b2e;
            in_w10 = bVar9;
            unaff_1000047e = bVar9;
          }
          else {
            lVar8 = lVar6;
            in_w10 = bVar9;
            unaff_1000047e = bVar9;
            if (lVar6 == 0x180f1c7d3303aebe) {
              lVar8 = 0x7fda6b373a0c4b3;
            }
          }
        }
      }
      goto LAB_0015c31c;
    }
    if (lVar6 < 0x2a6f593a2a23d0de) {
      if (0x235079cb6a544ac0 < lVar6) {
        uVar3 = uVar12;
        lVar8 = 0x3a56c74515918357;
        in_w10 = bVar9;
        if (((lVar6 != 0x235079cb6a544ac1) &&
            (lVar8 = 0x69518e9332c333a0, param_2 = local_a4, lVar6 != 0x24006f20f66e7623)) &&
           (lVar8 = lVar6, param_2 = uVar11, lVar6 == 0x286d4342225ba8c2)) {
          lVar8 = -0x3d73bdd559b03b2e;
        }
        goto LAB_0015c31c;
      }
      if (lVar6 != 0x1a48fb84998a6a08) {
        if (lVar6 == 0x1bc7c5cb8c100461) {
          local_90 = true;
          goto LAB_0015e28c;
        }
        uVar3 = uVar12;
        if (lVar6 == 0x1eb3c819152dac53) goto LAB_0015dc64;
        goto LAB_0015c31c;
      }
      lVar8 = -0x49668883ffefee99;
      bVar10 = bVar9;
    }
    else {
      if (0x312a9bf3098b72da < lVar6) {
        if (lVar6 < 0x3a56c74515918357) {
          if (lVar6 == 0x312a9bf3098b72db) {
            DAT_001f6818 = DAT_001f6818 ^ 0xe4;
            DAT_001f6819 = DAT_001f6819 ^ 0xe4;
            _DAT_001f6800 = _DAT_001f6800 ^ 0xe4e4e4e4e4e4e4e4;
            uRam00000000001f6808 = uRam00000000001f6808 ^ 0xe4e4e4e4e4e4e4e4;
            DAT_001f681a = DAT_001f681a ^ 0xe4;
            DAT_001f681b = DAT_001f681b ^ 0xe4;
            DAT_001f681c = DAT_001f681c ^ 0xe4;
            DAT_001f681d = DAT_001f681d ^ 0xe4;
            DAT_001f6810 = DAT_001f6810 ^ 0xe4e4e4e4e4e4e4e4;
            DAT_001f8097 = '\x01';
            uVar3 = uVar12;
            lVar8 = -0xfc055bd6dbef338;
            in_w10 = bVar9;
          }
          else {
            uVar3 = uVar12;
            if (lVar6 == 0x391ec1731f98e0a5) {
              lVar8 = -0x5f4c168d6c2474c4;
              if (DAT_001f809c == '\0') {
                lVar8 = 0x45063489b65d3de6;
              }
            }
          }
        }
        else if (lVar6 == 0x3a56c74515918357) {
          iVar2 = FUN_001ebe70(0,1,&DAT_001f7f7c);
          uVar3 = uVar12;
          lVar8 = -0x647e3db7e52e1a42;
          if (iVar2 != 0) {
            lVar8 = 0x235079cb6a544ac1;
          }
        }
        else {
          uVar3 = uVar12;
          in_w10 = bVar9;
          if (lVar6 == 0x3da3604e79d4d4c7) {
            lVar8 = -0x59f7d0fe8f917acb;
            in_w10 = bVar10;
            if (DAT_001f8099 == '\0') {
              lVar8 = 0x3efc9cf8d25b5972;
            }
          }
        }
        goto LAB_0015c31c;
      }
      if (lVar6 == 0x2a6f593a2a23d0de) {
        local_e8 = (long *)(param_1 + local_c8 * 0x10 + 0x78);
        bVar1 = *local_e8 == 0;
        lVar8 = -0x2b91bd6783ae4d6e;
        lVar6 = -0x523932b71661112d;
        goto LAB_0015e5a8;
      }
      if (lVar6 == 0x2a7779e64e35c519) {
        DAT_001f6840 = DAT_001f6840 ^ 0xe2;
        DAT_001f6841 = DAT_001f6841 ^ 0xe2;
        DAT_001f6842 = DAT_001f6842 ^ 0xe2;
        DAT_001f6843 = DAT_001f6843 ^ 0xe2;
        DAT_001f6844 = DAT_001f6844 ^ 0xe2;
        _DAT_001f6820 = _DAT_001f6820 ^ 0xe2e2e2e2e2e2e2e2;
        uRam00000000001f6828 = uRam00000000001f6828 ^ 0xe2e2e2e2e2e2e2e2;
        DAT_001f6845 = DAT_001f6845 ^ 0xe2;
        DAT_001f6846 = DAT_001f6846 ^ 0xe2;
        _DAT_001f6830 = _DAT_001f6830 ^ 0xe2e2e2e2e2e2e2e2;
        uRam00000000001f6838 = uRam00000000001f6838 ^ 0xe2e2e2e2e2e2e2e2;
        DAT_001f8098 = '\x01';
        uVar3 = uVar12;
        lVar8 = 0x413d9596752fffc7;
        in_w10 = bVar9;
        goto LAB_0015c31c;
      }
      uVar3 = uVar12;
      if (lVar6 != 0x2f2d7521ddf32bbf) goto LAB_0015c31c;
      lVar8 = 0x7b2a496f8cad0654;
    }
LAB_0015e810:
    DAT_001f6870 = DAT_001f6870 ^ 0xfc;
    DAT_001f6871 = DAT_001f6871 ^ 0xfc;
    DAT_001f6868 = DAT_001f6868 ^ 0xfcfcfcfcfcfcfcfc;
    DAT_001f809c = '\x01';
    uVar3 = uVar12;
    in_w10 = bVar10;
    goto LAB_0015c31c;
  }
  if (lVar6 < 0x5f936c17eba715b7) {
    if (0x4a592b6f8bebe5ef < lVar6) {
      if (lVar6 < 0x511a39e86687077f) {
        if (lVar6 == 0x4a592b6f8bebe5f0) {
          iVar2 = FUN_001ebe70(0,1,&DAT_001f7ebc);
          uVar3 = uVar12;
          lVar8 = -0x3878933c25512f8a;
          if (iVar2 != 0) {
            lVar8 = 0x485a34e674be0370;
          }
        }
        else {
          uVar3 = uVar12;
          lVar8 = -0xf2722f51db9af92;
          if ((lVar6 != 0x4f2d8da35243480d) && (lVar8 = lVar6, lVar6 == 0x5019d6c9a626623e)) {
            DAT_001f64a0 = DAT_001f64a0 ^ 0xa0;
            DAT_001f64a1 = DAT_001f64a1 ^ 0xa0;
            DAT_001f64a2 = DAT_001f64a2 ^ 0xa0;
            DAT_001f64a3 = DAT_001f64a3 ^ 0xa0;
            _DAT_001f6490 = _DAT_001f6490 ^ 0xa0a0a0a0a0a0a0a0;
            uRam00000000001f6498 = uRam00000000001f6498 ^ 0xa0a0a0a0a0a0a0a0;
            DAT_001f806d = '\x01';
            lVar8 = 0x52d8927729b627b;
          }
        }
      }
      else if (lVar6 < 0x5cc1ef2a71ca9ea1) {
        if (lVar6 == 0x511a39e86687077f) {
          DAT_001f7f64 = 0;
          iVar2 = FUN_001ca28c(&DAT_001f67d0,*local_e8);
          uVar3 = uVar12;
          lVar8 = 0x7c14c9f83b7963a3;
          in_w10 = bVar9;
          param_3 = iVar2 == 0 | local_94;
        }
        else {
          uVar3 = uVar12;
          if (lVar6 == 0x5650c510b7491462) {
            lVar8 = -0x235d4cfcd03342e9;
            if (DAT_001f8099 == '\0') {
              lVar8 = 0x78d4891194816bd6;
            }
          }
        }
      }
      else if (lVar6 == 0x5cc1ef2a71ca9ea1) {
        uVar3 = uVar12;
        lVar8 = -0x4e2c644b6edc3dd6;
        if (DAT_001f809c == '\0') {
          lVar8 = 0x1a48fb84998a6a08;
        }
      }
      else {
        uVar3 = uVar12;
        in_w10 = bVar9;
        if (lVar6 == 0x5f83b8d5b5ee08c0) {
          local_b0 = local_f8;
          local_b4 = local_cc;
LAB_0015de98:
          uVar3 = uVar12;
          lVar8 = -0xce60e2d517bbc1c;
          in_w10 = bVar9;
        }
      }
      goto LAB_0015c31c;
    }
    if (0x45063489b65d3de5 < lVar6) {
      if (lVar6 == 0x45063489b65d3de6) {
        lVar8 = -0x6642267d391d0c76;
        bVar10 = bVar9;
        goto LAB_0015e810;
      }
      if (lVar6 == 0x4582277cfca58c1a) goto LAB_0015dc64;
      uVar3 = uVar12;
      in_w10 = bVar9;
      if (lVar6 == 0x485a34e674be0370) {
        lVar8 = 0x4a592b6f8bebe5f0;
      }
      goto LAB_0015c31c;
    }
    if (lVar6 != 0x3efc9cf8d25b5972) {
      if (lVar6 == 0x413d9596752fffc7) {
        DAT_001f7f6c = 0;
        iVar2 = FUN_001ca28c(&DAT_001f6820,*local_d8);
        uVar3 = uVar12;
        lVar8 = 0x69518e9332c333a0;
        param_2 = iVar2 == 0 | local_a4;
        in_w10 = bVar9;
      }
      else {
        uVar3 = uVar12;
        if (lVar6 == 0x421641bdee903e8a) {
          local_84 = local_8c;
          goto LAB_0015dc70;
        }
      }
      goto LAB_0015c31c;
    }
    lVar8 = -0x35b8c673f3060d74;
  }
  else {
    if (lVar6 < 0x6dca83b85c774e55) {
      if (lVar6 < 0x65afe2fa052cadb2) {
        uVar3 = uVar12;
        lVar8 = 0x7b2a496f8cad0654;
        if (lVar6 != 0x5f936c17eba715b7) {
          if (lVar6 == 0x610b617b8f228398) {
            lVar8 = 0x13a628df1027e313;
            if (DAT_001f809a == '\0') {
              lVar8 = -0x18bd53eef4acbcd7;
            }
          }
          else {
            lVar8 = lVar6;
            if (lVar6 == 0x65117ac6a248382d) {
              lVar8 = -0x56e012081cc5c1b0;
            }
          }
        }
      }
      else {
        uVar3 = uVar12;
        lVar8 = 0x3a56c74515918357;
        in_w10 = bVar9;
        if (lVar6 != 0x65afe2fa052cadb2) {
          if (lVar6 == 0x69518e9332c333a0) {
            local_a0 = local_c0 + 1;
            lVar8 = -0x783025decaa7fd10;
            local_8c = uVar11;
            if (*(ulong *)(param_1 + 0x870) <= local_a0) {
              lVar8 = 0x421641bdee903e8a;
            }
          }
          else {
            lVar8 = lVar6;
            if (lVar6 == 0x6cd096775859b6ed) {
              lVar8 = -0xf2722f51db9af92;
            }
          }
        }
      }
      goto LAB_0015c31c;
    }
    if (lVar6 < 0x78d4891194816bd6) {
      if (lVar6 == 0x6dca83b85c774e55) {
        uVar3 = uVar12;
        lVar8 = -0x4dd84a2581c4e72b;
        if ((local_cc & local_100 != 0) == 0) {
          lVar8 = -0x2348193effb871e9;
        }
      }
      else {
        uVar3 = uVar12;
        lVar8 = 0x52d8927729b627b;
        if ((lVar6 != 0x6f2cfc5b2041a2fe) && (lVar8 = lVar6, lVar6 == 0x76b0a0805e67934b))
        goto LAB_0015d3ec;
      }
      goto LAB_0015c31c;
    }
    if (0x7b2a496f8cad0653 < lVar6) {
      if (lVar6 == 0x7b2a496f8cad0654) {
        DAT_001f7f7c = 0;
        lVar6 = FUN_001cac50(*(undefined8 *)(param_1 + 0x58),&DAT_001f6868);
        uVar3 = uVar12;
        lVar8 = -0x2b235fca0483efcf;
        if (((bVar5 | bVar10) & 1) == 0 && lVar6 == 0) {
          lVar8 = -0x28d4527d203d8184;
        }
      }
      else {
        uVar3 = uVar12;
        in_w10 = bVar9;
        if (lVar6 == 0x7c14c9f83b7963a3) {
          local_100 = *(ulong *)(param_1 + 0x870);
          local_f8 = local_c8 + 1;
          lVar8 = 0x5f83b8d5b5ee08c0;
          local_cc = bVar4;
          if (local_100 <= local_f8) {
            lVar8 = 0x6dca83b85c774e55;
          }
        }
      }
      goto LAB_0015c31c;
    }
    if (lVar6 != 0x78d4891194816bd6) {
      uVar3 = uVar12;
      if (lVar6 == 0x793d8821d94e1eac) {
        lVar8 = 0x413d9596752fffc7;
      }
      goto LAB_0015c31c;
    }
    lVar8 = -0x3f80c6090b61b1f0;
  }
  DAT_001f684c = DAT_001f684c ^ 0xca;
  DAT_001f684b = DAT_001f684b ^ 0xca;
  DAT_001f684a = DAT_001f684a ^ 0xca;
  DAT_001f6849 = DAT_001f6849 ^ 0xca;
  DAT_001f6848 = DAT_001f6848 ^ 0xca;
  DAT_001f684d = DAT_001f684d ^ 0xca;
  DAT_001f8099 = '\x01';
  uVar3 = uVar12;
  in_w10 = bVar9;
  goto LAB_0015c31c;
}


