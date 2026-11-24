// Function: FUN_00112550
// Entry: 00112550

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00112550(float param_1,int *param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  float *pfVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float unaff_s8;
  undefined1 auStack_f0 [8];
  long local_e8;
  long local_e0;
  int *local_d8;
  long local_d0;
  float *local_c8;
  undefined8 local_c0;
  float *local_b8;
  float *local_b0;
  long local_a8;
  
  local_e8 = tpidr_el0;
  local_a8 = *(long *)(local_e8 + 0x28);
  local_e0 = param_5 + 0x20;
  pfVar1 = (float *)auStack_f0;
  lVar7 = -0x5315ab5ac0fea1f6;
  local_d8 = param_2;
  local_d0 = param_5;
  local_c0 = param_3;
LAB_00112698:
  fVar8 = param_1;
  lVar6 = lVar7;
  lVar4 = local_d0;
  lVar7 = lVar6;
  param_1 = fVar8;
  if (lVar6 < -0x297e5284291a1b1) {
    if (lVar6 < -0x45832819cb4590b3) {
      if (lVar6 < -0x636f7535c726478e) {
        if (lVar6 < -0x73d7620de68df6ac) {
          if (lVar6 < -0x7906498b0c1386f9) {
            if (lVar6 < -0x7aa52dcd7a55a7d4) {
              if (lVar6 == -0x7ba6f822c9acaf8c) {
                DAT_001f5308 = DAT_001f5308 ^ 0x4e;
                DAT_001f5309 = DAT_001f5309 ^ 0x4e;
                DAT_001f530a = DAT_001f530a ^ 0x4e;
                DAT_001f530b = DAT_001f530b ^ 0x4e;
                DAT_001f530c = DAT_001f530c ^ 0x4e;
                DAT_001f530d = DAT_001f530d ^ 0x4e;
                DAT_001f5300 = DAT_001f5300 ^ 0x4e4e4e4e4e4e4e4e;
                DAT_001f7ba8 = '\x01';
                lVar7 = 0x10d38f80d513e1a8;
              }
              else if (lVar6 == -0x7ae785cbc6a1d824) {
                iVar3 = FUN_001ebe70(0,1,&DAT_001f7b88);
                lVar7 = -0x6124575a84e3f0fd;
                if (iVar3 != 0) {
                  lVar7 = 0x5847f4142010501f;
                }
              }
            }
            else {
              lVar7 = -0x680189225e7a2da1;
              if ((lVar6 != -0x7aa52dcd7a55a7d4) && (lVar7 = lVar6, lVar6 == -0x79fed34670c0dc34)) {
                DAT_001f53e0 = DAT_001f53e0 ^ 0xfa;
                DAT_001f53e1 = DAT_001f53e1 ^ 0xfa;
                DAT_001f53d8 = DAT_001f53d8 ^ 0xfafafafafafafafa;
                DAT_001f7bba = '\x01';
                lVar7 = -0x6aa7492f140c06ee;
              }
            }
          }
          else if (lVar6 < -0x78d0cf406e3f4863) {
            if (lVar6 == -0x7906498b0c1386f9) {
              DAT_001f7b94 = 0;
              lVar7 = 0x234631381c95917;
            }
            else if (lVar6 == -0x78d3ac9962f3c6cb) {
              DAT_001f52f8 = DAT_001f52f8 ^ 0xebebebebebebebeb;
              DAT_001f7ba7 = '\x01';
              lVar7 = 0xeb2aec93f97aa5c;
            }
          }
          else if (lVar6 == -0x78d0cf406e3f4863) {
            DAT_001f5370 = DAT_001f5370 ^ 0x6b6b6b6b6b6b6b6b;
            DAT_001f7bb1 = '\x01';
            lVar7 = 0x5b0d4a9f4184ef99;
          }
          else {
            lVar7 = 0x79857f8bca48efa6;
            if ((lVar6 != -0x780db6a1feba97f8) && (lVar7 = lVar6, lVar6 == -0x75af5ab2a12bdcee)) {
              DAT_001f7b5c = 0;
              lVar7 = 0x29740ac8ef545617;
            }
          }
        }
        else if (lVar6 < -0x6bff13adf78205c3) {
          if (lVar6 < -0x6edd782ffdcff57a) {
            if (lVar6 == -0x73d7620de68df6ac) {
              lVar7 = -0x2fc3cc85303b8183;
              uVar5 = *(ulong *)local_b0 | 0x1000;
              fVar9 = *local_b8 + (1.0 - *local_b8) * 0.8;
LAB_00115810:
              *local_b8 = fVar9;
              *(ulong *)local_b0 = uVar5;
              param_1 = fVar8;
            }
            else if (lVar6 == -0x7122a6c701ea2131) {
              lVar7 = 0x566f8ae94cccfa6b;
            }
          }
          else if (lVar6 == -0x6edd782ffdcff57a) {
            DAT_001f53b0 = DAT_001f53b0 ^ 0x2323232323232323;
            DAT_001f7bb6 = '\x01';
            lVar7 = -0x6881d79d4cb15c9e;
          }
          else {
            lVar7 = 0x4752592ffa77a3bc;
            if ((lVar6 != -0x6e35521e7e43221e) && (lVar7 = lVar6, lVar6 == -0x6dbab0468ebfaa81)) {
              iVar3 = FUN_001ebe70(0,1,&DAT_001f7b38);
              lVar7 = 0x5248be69660583a4;
              if (iVar3 != 0) {
                lVar7 = -0x2ca8a3d94e30f8b9;
              }
            }
          }
        }
        else if (lVar6 < -0x6881d79d4cb15c9e) {
          if (lVar6 == -0x6bff13adf78205c3) {
            uVar5 = FUN_0016309c(local_c0,local_c8,0x18);
            lVar7 = -0x73d7620de68df6ac;
            if ((uVar5 & 1) == 0) {
              lVar7 = 0x66643c79f3f1b0b5;
            }
          }
          else if (lVar6 == -0x6aa7492f140c06ee) {
            DAT_001f7b88 = 0;
            lVar7 = 0x6ee5bc0885d24dc;
          }
        }
        else if (lVar6 == -0x6881d79d4cb15c9e) {
          DAT_001f7b78 = 0;
          lVar7 = 0x40819e97d442dc9d;
        }
        else if (lVar6 == -0x680189225e7a2da1) {
          DAT_001f7b84 = 0;
          lVar7 = -0x57072be448d4c849;
        }
        else if (lVar6 == -0x64a80b7fb63c62e6) {
          lVar7 = -0x636f7535c726478e;
        }
        goto LAB_00112698;
      }
      if (lVar6 < -0x56ac147b6cd8c407) {
        if (-0x5a8eeb2c74f1d434 < lVar6) {
          if (lVar6 < -0x5763a51f68b28411) {
            lVar7 = 0x47e69b36ea2f4aee;
            if ((lVar6 != -0x5a8eeb2c74f1d433) && (lVar7 = lVar6, lVar6 == -0x5818b08f5a964004)) {
              lVar4 = -0x2b4bbd77afad9498;
              bVar2 = DAT_001f7bb9 == '\0';
              lVar7 = -0x7aa52dcd7a55a7d4;
              goto LAB_0011561c;
            }
          }
          else {
            lVar7 = 0x18386275d03e1311;
            if (lVar6 != -0x5763a51f68b28411) {
              if (lVar6 == -0x57072be448d4c849) {
                iVar3 = FUN_001ebe70(0,1,&DAT_001f7b80);
                lVar7 = 0x58458128698b45a7;
                if (iVar3 != 0) {
                  lVar7 = 0x1022c6f24a7f67ef;
                }
              }
              else {
                lVar7 = lVar6;
                if (lVar6 == -0x5703a96198c4899c) {
                  lVar7 = 0x37d4cf95e31e6a0f;
                }
              }
            }
          }
          goto LAB_00112698;
        }
        if (-0x5e298bad9f3d2066 < lVar6) {
          if (lVar6 == -0x5e298bad9f3d2065) {
            DAT_001f5330 = DAT_001f5330 ^ 0xb;
            DAT_001f5331 = DAT_001f5331 ^ 0xb;
            DAT_001f5332 = DAT_001f5332 ^ 0xb;
            DAT_001f5328 = DAT_001f5328 ^ 0xb0b0b0b0b0b0b0b;
            DAT_001f7bab = '\x01';
            lVar7 = 0x8e1abef9fea63fd;
          }
          else if (lVar6 == -0x5bd66a47381358a3) {
            DAT_001f7b70 = 0;
            lVar7 = -0x636f7535c726478e;
          }
          else if (lVar6 == -0x5a905c7484595d4a) {
            DAT_001f52f0 = DAT_001f52f0 ^ 0x11;
            DAT_001f52e8 = DAT_001f52e8 ^ 0x1111111111111111;
            DAT_001f7ba6 = '\x01';
            lVar7 = 0x36feb8f9605ab9b5;
          }
          goto LAB_00112698;
        }
        if (lVar6 == -0x636f7535c726478e) {
          iVar3 = FUN_001ebe70(0,1,&DAT_001f7b6c);
          lVar7 = 0x5cbaad26459a9412;
          if (iVar3 != 0) {
            lVar7 = -0x64a80b7fb63c62e6;
          }
          goto LAB_00112698;
        }
        if (lVar6 != -0x6124575a84e3f0fd) goto LAB_00112698;
        lVar7 = -0x523aad75e0f50607;
        bVar2 = DAT_001f7bba == '\0';
        lVar4 = -0x79fed34670c0dc34;
      }
      else if (lVar6 < -0x4e944ab97fb0767a) {
        if (-0x53ae62bfdb3205cd < lVar6) {
          if (lVar6 == -0x53ae62bfdb3205cc) {
            DAT_001f53c0 = DAT_001f53c0 ^ 0x6d;
            DAT_001f53c1 = DAT_001f53c1 ^ 0x6d;
            DAT_001f53c2 = DAT_001f53c2 ^ 0x6d;
            DAT_001f53c3 = DAT_001f53c3 ^ 0x6d;
            DAT_001f53c4 = DAT_001f53c4 ^ 0x6d;
            DAT_001f53b8 = DAT_001f53b8 ^ 0x6d6d6d6d6d6d6d6d;
            DAT_001f7bb7 = '\x01';
            lVar7 = -0x4e944ab97fb0767a;
          }
          else {
            lVar7 = 0x7530c2a066bfdf74;
            if ((lVar6 != -0x5315ab5ac0fea1f6) && (lVar7 = lVar6, lVar6 == -0x523aad75e0f50607)) {
              lVar7 = -0x6aa7492f140c06ee;
            }
          }
          goto LAB_00112698;
        }
        lVar7 = -0x75af5ab2a12bdcee;
        if ((lVar6 == -0x56ac147b6cd8c407) || (lVar7 = lVar6, lVar6 != -0x53cf9d7e3ac35703))
        goto LAB_00112698;
        lVar7 = -0x83dfddd2269ee5f;
        bVar2 = DAT_001f7ba9 == '\0';
        lVar4 = -0x12118248101a9591;
      }
      else {
        if (lVar6 < -0x4b25be9a664b53b4) {
          if (lVar6 == -0x4e944ab97fb0767a) {
            DAT_001f7b7c = 0;
            lVar7 = 0x308383be08146ce0;
          }
          else if (lVar6 == -0x4b9ddbb0658c17f0) {
            lVar7 = 0x7f0035b5159d8766;
          }
          goto LAB_00112698;
        }
        if (lVar6 == -0x4b25be9a664b53b4) {
          lVar7 = -0x2c4abd4f67c988c5;
          bVar2 = DAT_001f7bb2 == '\0';
          lVar4 = 0x1881a0dc2a84e4a0;
        }
        else {
          if (lVar6 != -0x4a254f4af66891e8) {
            if (lVar6 == -0x458a8cbc94985bff) {
              lVar7 = -0x6881d79d4cb15c9e;
            }
            goto LAB_00112698;
          }
          lVar7 = -0x36b7b2d3c308d7c4;
          bVar2 = DAT_001f7bb4 == '\0';
          lVar4 = -0x23866d175297b5;
        }
      }
    }
    else if (lVar6 < -0x25334aea091425b3) {
      if (lVar6 < -0x311d94ffca55e1c8) {
        if (lVar6 < -0x3ddaa0d62df7c122) {
          if (lVar6 < -0x43ff1bcff542a9f2) {
            if (lVar6 == -0x45832819cb4590b3) {
              iVar3 = FUN_001ebe70(0,1,&DAT_001f7b50);
              lVar7 = 0xaed50d3f2664ab1;
              if (iVar3 != 0) {
                lVar7 = 0x1397bfa4330fd5d6;
              }
            }
            else if (lVar6 == -0x44be69b6dfcc8559) {
              lVar7 = 0xac1b67dc08eff86;
            }
          }
          else if (lVar6 == -0x43ff1bcff542a9f2) {
            DAT_001f5320 = DAT_001f5320 ^ 0x6d;
            DAT_001f5321 = DAT_001f5321 ^ 0x6d;
            DAT_001f5322 = DAT_001f5322 ^ 0x6d;
            DAT_001f5323 = DAT_001f5323 ^ 0x6d;
            DAT_001f5324 = DAT_001f5324 ^ 0x6d;
            DAT_001f5325 = DAT_001f5325 ^ 0x6d;
            DAT_001f5326 = DAT_001f5326 ^ 0x6d;
            DAT_001f7baa = '\x01';
            lVar7 = 0x566f8ae94cccfa6b;
          }
          else if (lVar6 == -0x3eabc76882617b0d) {
            DAT_001f5428 = DAT_001f5428 ^ 0xc9;
            DAT_001f5429 = DAT_001f5429 ^ 0xc9;
            DAT_001f5420 = DAT_001f5420 ^ 0xc9c9c9c9c9c9c9c9;
            DAT_001f7bbd = '\x01';
            lVar7 = -0x7906498b0c1386f9;
          }
          goto LAB_00112698;
        }
        if (-0x36b7b2d3c308d7c5 < lVar6) {
          lVar7 = -0x5bd66a47381358a3;
          if (lVar6 != -0x36b7b2d3c308d7c4) {
            if (lVar6 == -0x31ec1aa2761bff08) {
              iVar3 = FUN_001ebe70(0,1,&DAT_001f7b70);
              lVar7 = -0x4a254f4af66891e8;
              if (iVar3 != 0) {
                lVar7 = 0x41e801842f93af1a;
              }
            }
            else {
              lVar7 = lVar6;
              if (lVar6 == -0x31723789a1466bbd) {
                iVar3 = FUN_001ebe70(0,1,&DAT_001f7b40);
                lVar7 = 0x18464143196acc32;
                if (iVar3 != 0) {
                  lVar7 = 0x3a87f4272375ef31;
                }
              }
            }
          }
          goto LAB_00112698;
        }
        if (lVar6 == -0x3ddaa0d62df7c122) {
          lVar7 = 0x4153c0216ba47f98;
          bVar2 = DAT_001f7bb0 == '\0';
          lVar4 = -0xf57384651937ff8;
        }
        else {
          if (lVar6 != -0x389db5c0c83f75e1) goto LAB_00112698;
          lVar7 = 0x1213d11e5eeece8d;
          bVar2 = DAT_001f7bbd == '\0';
          lVar4 = -0x3eabc76882617b0d;
        }
      }
      else {
        if (-0x2b4bbd77afad9499 < lVar6) {
          if (lVar6 < -0x29ba968cbef48f47) {
            if (lVar6 == -0x2b4bbd77afad9498) {
              DAT_001f53d0 = DAT_001f53d0 ^ 0xb8;
              DAT_001f53d1 = DAT_001f53d1 ^ 0xb8;
              DAT_001f53d2 = DAT_001f53d2 ^ 0xb8;
              DAT_001f53d3 = DAT_001f53d3 ^ 0xb8;
              DAT_001f53d4 = DAT_001f53d4 ^ 0xb8;
              DAT_001f53d5 = DAT_001f53d5 ^ 0xb8;
              DAT_001f53d6 = DAT_001f53d6 ^ 0xb8;
              DAT_001f7bb9 = '\x01';
              lVar7 = -0x680189225e7a2da1;
            }
            else if (lVar6 == -0x2ab42e73df6afec4) {
              lVar7 = 0x2fdf0d7a4018e11c;
            }
          }
          else {
            lVar7 = 0x29740ac8ef545617;
            if (((lVar6 != -0x29ba968cbef48f47) &&
                (lVar7 = 0x5b1704f1c1f5e001, lVar6 != -0x2896e27364a1da3f)) &&
               (lVar7 = lVar6, lVar6 == -0x25f88141516142db)) {
              DAT_001f53f0 = DAT_001f53f0 ^ 0xfd;
              DAT_001f53f1 = DAT_001f53f1 ^ 0xfd;
              DAT_001f53f2 = DAT_001f53f2 ^ 0xfd;
              DAT_001f53e8 = DAT_001f53e8 ^ 0xfdfdfdfdfdfdfdfd;
              DAT_001f7bbb = '\x01';
              lVar7 = 0x47e69b36ea2f4aee;
            }
          }
          goto LAB_00112698;
        }
        if (-0x2ca8a3d94e30f8ba < lVar6) {
          lVar7 = -0x6dbab0468ebfaa81;
          if (((lVar6 != -0x2ca8a3d94e30f8b9) &&
              (lVar7 = 0x84f488b05c1a07b, lVar6 != -0x2c4abd4f67c988c5)) &&
             (lVar7 = lVar6, lVar6 == -0x2bfea02c4d487d66)) {
            DAT_001f53a8 = DAT_001f53a8 ^ 0x7a7a7a7a7a7a7a7a;
            DAT_001f7bb5 = '\x01';
            lVar7 = 0x4752592ffa77a3bc;
          }
          goto LAB_00112698;
        }
        if (lVar6 != -0x311d94ffca55e1c8) {
          if (lVar6 == -0x2fc3cc85303b8183) {
            uVar5 = FUN_00164ec4(local_c0,local_c8,0x18);
            lVar7 = 0x6db2c6c92bad4e44;
            if ((uVar5 & 1) == 0) {
              lVar7 = -0x297e5284291a1b1;
            }
            unaff_s8 = *local_b8;
          }
          goto LAB_00112698;
        }
        lVar7 = -0x2ab42e73df6afec4;
        bVar2 = DAT_001f7bad == '\0';
        lVar4 = 0xce4a090dc23f4c3;
      }
    }
    else {
      if (-0x13c2c36e60488da1 < lVar6) {
        if (lVar6 < -0xf22394f44ac0785) {
          if (lVar6 < -0x12118248101a9591) {
            if (lVar6 == -0x13c2c36e60488da0) {
              iVar3 = FUN_001ebe70(0,1,&DAT_001f7b3c);
              lVar7 = -0x13fcb01bfa5cd0ba;
              if (iVar3 != 0) {
                lVar7 = -0xbe318802187a4c;
              }
            }
            else if (lVar6 == -0x131117da2c3df22d) {
              DAT_001f7b44 = 0;
              lVar7 = -0x31723789a1466bbd;
            }
          }
          else if (lVar6 == -0x12118248101a9591) {
            DAT_001f5318 = DAT_001f5318 ^ 8;
            DAT_001f5319 = DAT_001f5319 ^ 8;
            DAT_001f531a = DAT_001f531a ^ 8;
            DAT_001f531b = DAT_001f531b ^ 8;
            DAT_001f531d = DAT_001f531d ^ 8;
            DAT_001f531c = DAT_001f531c ^ 8;
            DAT_001f531e = DAT_001f531e ^ 8;
            DAT_001f5310 = DAT_001f5310 ^ 0x808080808080808;
            DAT_001f7ba9 = '\x01';
            lVar7 = -0x131117da2c3df22d;
          }
          else {
            lVar7 = 0x489fa463e4cbee99;
            if ((lVar6 != -0xfea4cca4b34a481) && (lVar7 = lVar6, lVar6 == -0xf57384651937ff8)) {
              DAT_001f5368 = DAT_001f5368 ^ 0x9393939393939393;
              DAT_001f7bb0 = '\x01';
              lVar7 = 0xcea1a8642c2592;
            }
          }
          goto LAB_00112698;
        }
        if (-0x83dfddd2269ee60 < lVar6) {
          lVar7 = -0x131117da2c3df22d;
          if (lVar6 != -0x83dfddd2269ee5f) {
            if (lVar6 == -0x80852ac37a878ab) {
              lVar4 = -0x2bfea02c4d487d66;
              bVar2 = DAT_001f7bb5 == '\0';
              lVar7 = -0x6e35521e7e43221e;
              goto LAB_0011561c;
            }
            lVar7 = lVar6;
            if (lVar6 == -0x5f4ad0a0148f22e) {
              iVar3 = FUN_001ebe70(0,1,&DAT_001f7b7c);
              lVar7 = 0x3ef76250e275ccec;
              if (iVar3 != 0) {
                lVar7 = 0x6ea5f6ad327d8cfb;
              }
            }
          }
          goto LAB_00112698;
        }
        if (lVar6 != -0xf22394f44ac0785) {
          if (lVar6 == -0xb0d123d93fc7789) {
            DAT_001f5390 = DAT_001f5390 ^ 0x9d;
            DAT_001f5388 = DAT_001f5388 ^ 0x9d9d9d9d9d9d9d9d;
            DAT_001f7bb3 = '\x01';
            lVar7 = 0xc1a3ec4055af530;
          }
          goto LAB_00112698;
        }
        lVar4 = -0x43ff1bcff542a9f2;
        bVar2 = DAT_001f7baa == '\0';
        lVar7 = -0x7122a6c701ea2131;
        goto LAB_0011561c;
      }
      if (lVar6 < -0x1ad8fabb3a10f1c7) {
        if (lVar6 < -0x1e5889a1fe1df383) {
          lVar7 = 0x1d19cc0fc4193b1c;
          if ((lVar6 != -0x25334aea091425b3) && (lVar7 = lVar6, lVar6 == -0x2473bc79b32fe7b5)) {
            lVar7 = 0x8e1abef9fea63fd;
          }
          goto LAB_00112698;
        }
        if (lVar6 != -0x1e5889a1fe1df383) {
          lVar7 = -0x4e944ab97fb0767a;
          if ((lVar6 != -0x1cadf1932525afcf) && (lVar7 = lVar6, lVar6 == -0x1bdd340fae5291cd)) {
            lVar7 = 0x7530c2a066bfdf74;
          }
          goto LAB_00112698;
        }
        lVar7 = 0x470dfb8fe3a124c0;
        bVar2 = DAT_001f7bb1 == '\0';
        lVar4 = -0x78d0cf406e3f4863;
      }
      else {
        if (lVar6 < -0x18311b097026ac89) {
          lVar7 = 0xeb2aec93f97aa5c;
          if ((lVar6 != -0x1ad8fabb3a10f1c7) && (lVar7 = lVar6, lVar6 == -0x19bc5ed89f0d45e3)) {
            iVar3 = FUN_001ebe70(0,1,&DAT_001f7b54);
            lVar7 = -0x311d94ffca55e1c8;
            if (iVar3 != 0) {
              lVar7 = 0x46319599f41ae045;
            }
          }
          goto LAB_00112698;
        }
        if (lVar6 == -0x18311b097026ac89) {
          iVar3 = FUN_001ebe70(0,1,&DAT_001f7b60);
          lVar7 = -0x3ddaa0d62df7c122;
          if (iVar3 != 0) {
            lVar7 = 0x4e7b4227b9abb00a;
          }
          goto LAB_00112698;
        }
        lVar7 = 0x10d38f80d513e1a8;
        if ((lVar6 == -0x15e44613c9d7a207) || (lVar7 = lVar6, lVar6 != -0x13fcb01bfa5cd0ba))
        goto LAB_00112698;
        lVar7 = -0x1ad8fabb3a10f1c7;
        bVar2 = DAT_001f7ba7 == '\0';
        lVar4 = -0x78d3ac9962f3c6cb;
      }
    }
  }
  else {
    if (lVar6 < 0x37d4cf95e31e6a0f) {
      if (0x10d38f80d513e1a7 < lVar6) {
        if (lVar6 < 0x1d19cc0fc4193b1c) {
          if (lVar6 < 0x163771ef3f8afe74) {
            if (lVar6 < 0x1397bfa4330fd5d6) {
              if (lVar6 == 0x10d38f80d513e1a8) {
                DAT_001f7b40 = 0;
                lVar7 = -0x13c2c36e60488da0;
              }
              else if (lVar6 == 0x1213d11e5eeece8d) {
                lVar7 = -0x7906498b0c1386f9;
              }
            }
            else {
              lVar7 = -0x45832819cb4590b3;
              if (lVar6 != 0x1397bfa4330fd5d6) {
                if (lVar6 == 0x16065ea0724045fa) {
                  iVar3 = FUN_001ebe70(0,1,&DAT_001f7b64);
                  lVar7 = -0x1e5889a1fe1df383;
                  if (iVar3 != 0) {
                    lVar7 = 0x163771ef3f8afe74;
                  }
                }
                else {
                  lVar7 = lVar6;
                  if (lVar6 == 0x162452ca3478d199) {
                    DAT_001f5358 = DAT_001f5358 ^ 0xed;
                    DAT_001f5359 = DAT_001f5359 ^ 0xed;
                    DAT_001f5350 = DAT_001f5350 ^ 0xedededededededed;
                    DAT_001f7bae = '\x01';
                    lVar7 = 0x18386275d03e1311;
                  }
                }
              }
            }
          }
          else if (lVar6 < 0x18464143196acc32) {
            lVar7 = 0x16065ea0724045fa;
            if ((lVar6 != 0x163771ef3f8afe74) && (lVar7 = lVar6, lVar6 == 0x18386275d03e1311)) {
              DAT_001f7b58 = 0;
              lVar7 = -0x19bc5ed89f0d45e3;
            }
          }
          else {
            if (lVar6 == 0x18464143196acc32) {
              lVar7 = -0x15e44613c9d7a207;
              bVar2 = DAT_001f7ba8 == '\0';
              lVar4 = -0x7ba6f822c9acaf8c;
              goto LAB_00112690;
            }
            if (lVar6 == 0x1881a0dc2a84e4a0) {
              DAT_001f5380 = DAT_001f5380 ^ 0xa6;
              DAT_001f5381 = DAT_001f5381 ^ 0xa6;
              DAT_001f5378 = DAT_001f5378 ^ 0xa6a6a6a6a6a6a6a6;
              DAT_001f7bb2 = '\x01';
              lVar7 = 0x84f488b05c1a07b;
            }
            else if (lVar6 == 0x1b288bd9433a55da) {
              lVar7 = 0x43a7026a29cdafd;
            }
          }
        }
        else if (lVar6 < 0x2a9e210f6c5c8644) {
          if (lVar6 < 0x24d86171e88d2e6f) {
            lVar7 = 0x6ee5bc0885d24dc;
            if (lVar6 != 0x1f1b1150db66d00d) {
              if (lVar6 == 0x22b999fe7ba950f8) {
                DAT_001f5418 = DAT_001f5418 ^ 200;
                DAT_001f5419 = DAT_001f5419 ^ 200;
                _DAT_001f5400 = _DAT_001f5400 ^ 0xc8c8c8c8c8c8c8c8;
                uRam00000000001f5408 = uRam00000000001f5408 ^ 0xc8c8c8c8c8c8c8c8;
                DAT_001f5410 = DAT_001f5410 ^ 0xc8c8c8c8c8c8c8c8;
                DAT_001f7bbc = '\x01';
                lVar7 = 0x79cef8aa849ce9df;
              }
              else {
                lVar7 = lVar6;
                if (lVar6 == 0x1d19cc0fc4193b1c) {
                  FUN_00163084(local_d0);
                  *(ulong *)(lVar4 + 0x238) = *(ulong *)(lVar4 + 0x238) | 0x2001000;
                  if (*(long *)(local_e8 + 0x28) == local_a8) {
                    return;
                  }
                    /* WARNING: Subroutine does not return */
                  __stack_chk_fail(*local_d8 == 0);
                }
              }
            }
          }
          else {
            lVar7 = 0x40819e97d442dc9d;
            if ((lVar6 != 0x24d86171e88d2e6f) && (lVar7 = lVar6, lVar6 == 0x29740ac8ef545617)) {
              iVar3 = FUN_001ebe70(0,1,&DAT_001f7b58);
              lVar7 = 0x63ff56a89ca4dca0;
              if (iVar3 != 0) {
                lVar7 = -0x29ba968cbef48f47;
              }
            }
          }
        }
        else if (lVar6 < 0x308383be08146ce0) {
          if (lVar6 == 0x2a9e210f6c5c8644) {
            DAT_001f5338 = DAT_001f5338 ^ 0x5c5c5c5c5c5c5c5c;
            DAT_001f7bac = '\x01';
            lVar7 = 0x43a7026a29cdafd;
          }
          else if (lVar6 == 0x2fdf0d7a4018e11c) {
            DAT_001f7b54 = 0;
            lVar7 = -0x45832819cb4590b3;
          }
        }
        else if (lVar6 == 0x308383be08146ce0) {
          iVar3 = FUN_001ebe70(0,1,&DAT_001f7b78);
          lVar7 = 0x6ecba1bec80bf4de;
          if (iVar3 != 0) {
            lVar7 = 0x7a32d0a09c5321b1;
          }
        }
        else if (lVar6 == 0x360c7befbfab608f) {
          FUN_001e934c(local_e0,*(ulong *)local_b0);
          *(ulong *)(local_d0 + 0x238) = *(ulong *)(local_d0 + 0x238) | 1;
          lVar7 = 0x1d19cc0fc4193b1c;
        }
        else if (lVar6 == 0x36feb8f9605ab9b5) {
          DAT_001f7b38 = 0;
          local_c8 = pfVar1 + -0x30;
          local_b0 = pfVar1 + -0x34;
          pfVar1[-0x34] = 0.0;
          pfVar1[-0x33] = 0.0;
          pfVar1[-0x38] = 0.0;
          *(ulong **)(pfVar1 + -0x30) = &DAT_001f52e8;
          *(ulong **)(pfVar1 + -0x2e) = &DAT_001f52f8;
          *(ulong **)(pfVar1 + -0x2c) = &DAT_001f5300;
          *(ulong **)(pfVar1 + -0x2a) = &DAT_001f5310;
          *(byte **)(pfVar1 + -0x28) = &DAT_001f5320;
          *(ulong **)(pfVar1 + -0x26) = &DAT_001f5328;
          *(ulong **)(pfVar1 + -0x24) = &DAT_001f5338;
          *(ulong **)(pfVar1 + -0x22) = &DAT_001f5340;
          *(ulong **)(pfVar1 + -0x20) = &DAT_001f5350;
          *(byte **)(pfVar1 + -0x1e) = &DAT_001f535c;
          *(ulong **)(pfVar1 + -0x1c) = &DAT_001f5368;
          *(ulong **)(pfVar1 + -0x1a) = &DAT_001f5370;
          *(ulong **)(pfVar1 + -0x18) = &DAT_001f5378;
          *(ulong **)(pfVar1 + -0x16) = &DAT_001f5388;
          *(ulong **)(pfVar1 + -0x14) = &DAT_001f5398;
          *(ulong **)(pfVar1 + -0x12) = &DAT_001f53a8;
          *(ulong **)(pfVar1 + -0x10) = &DAT_001f53b0;
          *(ulong **)(pfVar1 + -0xe) = &DAT_001f53b8;
          *(ulong **)(pfVar1 + -0xc) = &DAT_001f53c8;
          *(byte **)(pfVar1 + -10) = &DAT_001f53d0;
          *(ulong **)(pfVar1 + -8) = &DAT_001f53d8;
          *(ulong **)(pfVar1 + -6) = &DAT_001f53e8;
          *(undefined **)(pfVar1 + -4) = &DAT_001f5400;
          *(ulong **)(pfVar1 + -2) = &DAT_001f5420;
          local_b8 = pfVar1 + -0x38;
          iVar3 = FUN_001600a0(local_c0);
          lVar7 = -0x6bff13adf78205c3;
          if (iVar3 != 0) {
            lVar7 = -0x25334aea091425b3;
          }
          *local_d8 = iVar3;
          pfVar1 = pfVar1 + -0x38;
        }
        goto LAB_00112698;
      }
      if (0x84f488b05c1a07a < lVar6) {
        if (lVar6 < 0xb0e72f002d35ffe) {
          if (lVar6 < 0x93ca136a2cc33c6) {
            if (lVar6 == 0x84f488b05c1a07b) {
              DAT_001f7b68 = 0;
              lVar7 = 0x16065ea0724045fa;
            }
            else if (lVar6 == 0x8e1abef9fea63fd) {
              DAT_001f7b4c = 0;
              lVar7 = 0x79857f8bca48efa6;
            }
          }
          else {
            if (lVar6 == 0x93ca136a2cc33c6) {
              lVar4 = 0x55dd68a0a80398df;
              bVar2 = DAT_001f7baf == '\0';
              lVar7 = -0x56ac147b6cd8c407;
              goto LAB_0011561c;
            }
            if (lVar6 == 0xac1b67dc08eff86) {
              iVar3 = FUN_001ebe70(0,1,&DAT_001f7b68);
              lVar7 = -0x4b25be9a664b53b4;
              if (iVar3 != 0) {
                lVar7 = -0x44be69b6dfcc8559;
              }
            }
            else if (lVar6 == 0xaed50d3f2664ab1) {
              lVar7 = 0x1b288bd9433a55da;
              bVar2 = DAT_001f7bac == '\0';
              lVar4 = 0x2a9e210f6c5c8644;
              goto LAB_00112690;
            }
          }
        }
        else if (lVar6 < 0xce4a090dc23f4c3) {
          lVar7 = 0x68e9eef73caee0ca;
          if ((lVar6 != 0xb0e72f002d35ffe) && (lVar7 = lVar6, lVar6 == 0xc1a3ec4055af530)) {
            DAT_001f7b6c = 0;
            lVar7 = 0xac1b67dc08eff86;
          }
        }
        else if (lVar6 == 0xce4a090dc23f4c3) {
          DAT_001f5348 = DAT_001f5348 ^ 6;
          DAT_001f5349 = DAT_001f5349 ^ 6;
          DAT_001f534a = DAT_001f534a ^ 6;
          DAT_001f5340 = DAT_001f5340 ^ 0x606060606060606;
          DAT_001f7bad = '\x01';
          lVar7 = 0x2fdf0d7a4018e11c;
        }
        else if (lVar6 == 0xeb2aec93f97aa5c) {
          DAT_001f7b3c = 0;
          lVar7 = -0x6dbab0468ebfaa81;
        }
        else if (lVar6 == 0x1022c6f24a7f67ef) {
          lVar7 = -0x57072be448d4c849;
        }
        goto LAB_00112698;
      }
      if (0xcea1a8642c2591 < lVar6) {
        if (lVar6 < 0x2583f3295d26c72) {
          if (lVar6 == 0xcea1a8642c2592) {
            DAT_001f7b60 = 0;
            lVar7 = 0x37d4cf95e31e6a0f;
          }
          else if (lVar6 == 0x234631381c95917) {
            iVar3 = FUN_001ebe70(0,1,&DAT_001f7b90);
            lVar7 = 0x4c548310584b9b9e;
            if (iVar3 != 0) {
              lVar7 = 0x2583f3295d26c72;
            }
          }
        }
        else {
          lVar7 = 0x234631381c95917;
          if (lVar6 != 0x2583f3295d26c72) {
            if (lVar6 == 0x43a7026a29cdafd) {
              DAT_001f7b50 = 0;
              lVar7 = 0x489fa463e4cbee99;
            }
            else {
              lVar7 = lVar6;
              if (lVar6 == 0x6ee5bc0885d24dc) {
                iVar3 = FUN_001ebe70(0,1,&DAT_001f7b84);
                lVar7 = -0x5818b08f5a964004;
                if (iVar3 != 0) {
                  lVar7 = 0x1f1b1150db66d00d;
                }
              }
            }
          }
        }
        goto LAB_00112698;
      }
      if (-0xbe318802187a4d < lVar6) {
        lVar7 = -0x13c2c36e60488da0;
        if ((lVar6 != -0xbe318802187a4c) && (lVar7 = lVar6, lVar6 == -0x23866d175297b5)) {
          DAT_001f53a0 = DAT_001f53a0 ^ 0x75;
          DAT_001f5398 = DAT_001f5398 ^ 0x7575757575757575;
          DAT_001f7bb4 = '\x01';
          lVar7 = -0x5bd66a47381358a3;
        }
        goto LAB_00112698;
      }
      lVar7 = 0x560ea1e3e95b6280;
      param_1 = unaff_s8;
      if ((lVar6 == -0x297e5284291a1b1) ||
         (lVar7 = lVar6, param_1 = fVar8, lVar6 != -0x209d629b640ed6c)) goto LAB_00112698;
      lVar4 = -0x25f88141516142db;
      bVar2 = DAT_001f7bbb == '\0';
      lVar7 = -0x5a8eeb2c74f1d433;
LAB_0011561c:
      param_1 = fVar8;
      if (bVar2) {
        lVar7 = lVar4;
      }
      goto LAB_00112698;
    }
    if (lVar6 < 0x5847f4142010501f) {
      if (0x47e69b36ea2f4aed < lVar6) {
        if (lVar6 < 0x5248be69660583a4) {
          if (lVar6 < 0x4c548310584b9b9e) {
            if (lVar6 == 0x47e69b36ea2f4aee) {
              DAT_001f7b8c = 0;
              lVar7 = -0x7ae785cbc6a1d824;
            }
            else if (lVar6 == 0x489fa463e4cbee99) {
              iVar3 = FUN_001ebe70(0,1,&DAT_001f7b4c);
              lVar7 = 0x6a1e1ead28174acd;
              if (iVar3 != 0) {
                lVar7 = -0xfea4cca4b34a481;
              }
            }
            goto LAB_00112698;
          }
          if (lVar6 != 0x4c548310584b9b9e) {
            lVar7 = -0x18311b097026ac89;
            if ((lVar6 != 0x4e7b4227b9abb00a) && (lVar7 = lVar6, lVar6 == 0x504d611a2b35c6c8)) {
              lVar7 = 0x1d19cc0fc4193b1c;
            }
            goto LAB_00112698;
          }
          lVar4 = 0x22b999fe7ba950f8;
          bVar2 = DAT_001f7bbc == '\0';
          lVar7 = 0x6152d3193720f1c8;
        }
        else {
          if (lVar6 < 0x560ea1e3e95b6280) {
            if (lVar6 == 0x5248be69660583a4) {
              lVar7 = 0x7380d3255d6f87f0;
              bVar2 = DAT_001f7ba6 == '\0';
              lVar4 = -0x5a905c7484595d4a;
              goto LAB_00112690;
            }
            if (lVar6 == 0x55dd68a0a80398df) {
              DAT_001f535c = DAT_001f535c ^ 0x17;
              DAT_001f535d = DAT_001f535d ^ 0x17;
              DAT_001f5360 = DAT_001f5360 ^ 0x17;
              DAT_001f535e = DAT_001f535e ^ 0x17;
              DAT_001f535f = DAT_001f535f ^ 0x17;
              DAT_001f5361 = DAT_001f5361 ^ 0x17;
              DAT_001f7baf = '\x01';
              lVar7 = -0x75af5ab2a12bdcee;
            }
            goto LAB_00112698;
          }
          if (lVar6 == 0x560ea1e3e95b6280) {
            lVar7 = 0x504d611a2b35c6c8;
            if (0.8 <= fVar8) {
              lVar7 = 0x360c7befbfab608f;
            }
            goto LAB_00112698;
          }
          if (lVar6 == 0x566f8ae94cccfa6b) {
            DAT_001f7b48 = 0;
            lVar7 = 0x7f0035b5159d8766;
            goto LAB_00112698;
          }
          if (lVar6 != 0x58458128698b45a7) goto LAB_00112698;
          lVar4 = 0x619c4635ae2a2aef;
          bVar2 = DAT_001f7bb8 == '\0';
          lVar7 = 0xb0e72f002d35ffe;
        }
        goto LAB_0011561c;
      }
      if (0x4153c0216ba47f97 < lVar6) {
        if (lVar6 < 0x46319599f41ae045) {
          lVar7 = 0xcea1a8642c2592;
          if ((lVar6 != 0x4153c0216ba47f98) && (lVar7 = lVar6, lVar6 == 0x41e801842f93af1a)) {
            lVar7 = -0x31ec1aa2761bff08;
          }
        }
        else {
          lVar7 = -0x19bc5ed89f0d45e3;
          if (((lVar6 != 0x46319599f41ae045) &&
              (lVar7 = 0x5b0d4a9f4184ef99, lVar6 != 0x470dfb8fe3a124c0)) &&
             (lVar7 = lVar6, lVar6 == 0x4752592ffa77a3bc)) {
            DAT_001f7b74 = 0;
            lVar7 = -0x31ec1aa2761bff08;
          }
        }
        goto LAB_00112698;
      }
      if (lVar6 < 0x3ef76250e275ccec) {
        if (lVar6 == 0x37d4cf95e31e6a0f) {
          iVar3 = FUN_001ebe70(0,1,&DAT_001f7b5c);
          lVar7 = 0x93ca136a2cc33c6;
          if (iVar3 != 0) {
            lVar7 = -0x5703a96198c4899c;
          }
        }
        else if (lVar6 == 0x3a87f4272375ef31) {
          lVar7 = -0x31723789a1466bbd;
        }
        goto LAB_00112698;
      }
      if (lVar6 != 0x3ef76250e275ccec) {
        if (lVar6 == 0x40819e97d442dc9d) {
          iVar3 = FUN_001ebe70(0,1,&DAT_001f7b74);
          lVar7 = -0x80852ac37a878ab;
          if (iVar3 != 0) {
            lVar7 = 0x24d86171e88d2e6f;
          }
        }
        goto LAB_00112698;
      }
      lVar7 = -0x1cadf1932525afcf;
      bVar2 = DAT_001f7bb7 == '\0';
      lVar4 = -0x53ae62bfdb3205cc;
    }
    else if (lVar6 < 0x6db2c6c92bad4e44) {
      if (lVar6 < 0x619c4635ae2a2aef) {
        if (lVar6 < 0x5b1704f1c1f5e001) {
          lVar7 = -0x7ae785cbc6a1d824;
          if ((lVar6 != 0x5847f4142010501f) && (lVar7 = lVar6, lVar6 == 0x5b0d4a9f4184ef99)) {
            DAT_001f7b64 = 0;
            lVar7 = -0x18311b097026ac89;
          }
        }
        else if (lVar6 == 0x5b1704f1c1f5e001) {
          iVar3 = FUN_001ebe70(0,1,&DAT_001f7b8c);
          lVar7 = -0x209d629b640ed6c;
          if (iVar3 != 0) {
            lVar7 = -0x2896e27364a1da3f;
          }
        }
        else {
          if (lVar6 == 0x5cbaad26459a9412) {
            lVar7 = 0x721346ffa560fb27;
            bVar2 = DAT_001f7bb3 == '\0';
            lVar4 = -0xb0d123d93fc7789;
            goto LAB_00112690;
          }
          if (lVar6 == 0x6152d3193720f1c8) {
            lVar7 = 0x79cef8aa849ce9df;
          }
        }
        goto LAB_00112698;
      }
      if (lVar6 < 0x66643c79f3f1b0b5) {
        if (lVar6 == 0x619c4635ae2a2aef) {
          DAT_001f53c8 = DAT_001f53c8 ^ 0x8383838383838383;
          DAT_001f7bb8 = '\x01';
          lVar7 = 0x68e9eef73caee0ca;
        }
        else if (lVar6 == 0x63ff56a89ca4dca0) {
          lVar4 = 0x162452ca3478d199;
          bVar2 = DAT_001f7bae == '\0';
          lVar7 = -0x5763a51f68b28411;
          goto LAB_0011561c;
        }
        goto LAB_00112698;
      }
      lVar7 = -0x2fc3cc85303b8183;
      if (lVar6 == 0x66643c79f3f1b0b5) goto LAB_00112698;
      if (lVar6 == 0x68e9eef73caee0ca) {
        DAT_001f7b80 = 0;
        lVar7 = -0x5f4ad0a0148f22e;
        goto LAB_00112698;
      }
      lVar7 = lVar6;
      if (lVar6 != 0x6a1e1ead28174acd) goto LAB_00112698;
      lVar7 = -0x2473bc79b32fe7b5;
      bVar2 = DAT_001f7bab == '\0';
      lVar4 = -0x5e298bad9f3d2065;
    }
    else {
      if (0x7530c2a066bfdf73 < lVar6) {
        if (lVar6 < 0x79cef8aa849ce9df) {
          if (lVar6 == 0x7530c2a066bfdf74) {
            iVar3 = FUN_001ebe70(0,1,&DAT_001f7b94);
            lVar7 = -0x389db5c0c83f75e1;
            if (iVar3 != 0) {
              lVar7 = -0x1bdd340fae5291cd;
            }
          }
          else if (lVar6 == 0x79857f8bca48efa6) {
            iVar3 = FUN_001ebe70(0,1,&DAT_001f7b48);
            lVar7 = -0xf22394f44ac0785;
            if (iVar3 != 0) {
              lVar7 = -0x780db6a1feba97f8;
            }
          }
        }
        else if (lVar6 == 0x79cef8aa849ce9df) {
          DAT_001f7b90 = 0;
          lVar7 = 0x5b1704f1c1f5e001;
        }
        else {
          lVar7 = 0x308383be08146ce0;
          if ((lVar6 != 0x7a32d0a09c5321b1) && (lVar7 = lVar6, lVar6 == 0x7f0035b5159d8766)) {
            iVar3 = FUN_001ebe70(0,1,&DAT_001f7b44);
            lVar7 = -0x53cf9d7e3ac35703;
            if (iVar3 != 0) {
              lVar7 = -0x4b9ddbb0658c17f0;
            }
          }
        }
        goto LAB_00112698;
      }
      if (lVar6 < 0x6ecba1bec80bf4de) {
        if (lVar6 == 0x6db2c6c92bad4e44) {
          lVar7 = 0x560ea1e3e95b6280;
          fVar9 = unaff_s8 + (1.0 - unaff_s8) * 0.8;
          uVar5 = *(ulong *)local_b0 | 0x2000000;
          fVar8 = fVar9;
          goto LAB_00115810;
        }
        if (lVar6 == 0x6ea5f6ad327d8cfb) {
          lVar7 = -0x5f4ad0a0148f22e;
        }
        goto LAB_00112698;
      }
      if (lVar6 != 0x6ecba1bec80bf4de) {
        lVar7 = 0xc1a3ec4055af530;
        if ((lVar6 != 0x721346ffa560fb27) && (lVar7 = lVar6, lVar6 == 0x7380d3255d6f87f0)) {
          lVar7 = 0x36feb8f9605ab9b5;
        }
        goto LAB_00112698;
      }
      lVar7 = -0x458a8cbc94985bff;
      bVar2 = DAT_001f7bb6 == '\0';
      lVar4 = -0x6edd782ffdcff57a;
    }
  }
LAB_00112690:
  if (bVar2) {
    lVar7 = lVar4;
  }
  goto LAB_00112698;
}


