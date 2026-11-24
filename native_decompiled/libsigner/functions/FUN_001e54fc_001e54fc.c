// Function: FUN_001e54fc
// Entry: 001e54fc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001e54fc(int *param_1,undefined8 *param_2)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  int local_c0;
  uint local_bc;
  int local_ac;
  int local_a8;
  uint local_a4;
  int local_94;
  long local_90;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar7 = *param_2;
  local_84 = 0;
  local_90 = 0;
  local_78 = 0;
  uStack_70 = 0;
  puVar5 = param_2;
  puVar8 = (undefined1 *)0xd57ac0afa91feda2;
LAB_001e55f8:
  puVar6 = puVar8;
  puVar9 = (undefined8 *)((ulong)puVar5 & 0xffffffff);
  iVar3 = (int)puVar5;
  puVar8 = puVar6;
  if ((long)puVar6 < 0x408409b1e5ac055) {
    if ((long)puVar6 < -0x3a9a787bdaa35b1e) {
      if ((long)puVar6 < -0x5ab7f064f0b58e71) {
        if ((long)puVar6 < -0x6c070e2a612990f7) {
          if ((long)puVar6 < -0x7b681637aa78cddc) {
            if (puVar6 == (undefined1 *)0x80946337e81a76ad) {
              uVar4 = FUN_001dc470(param_1,*param_2,8 - param_2[2],1);
              puVar5 = puVar9;
              puVar8 = (undefined1 *)0xc84313bc4262f702;
              if ((uVar4 & 1) == 0) {
                puVar8 = (undefined1 *)0xdad5fc5726557d2b;
              }
            }
            else {
              puVar5 = puVar9;
              if (puVar6 == (undefined1 *)0x8238ab8752830617) {
                DAT_001f7a14 = DAT_001f7a14 ^ 0xb3;
                DAT_001f7a15 = DAT_001f7a15 ^ 0xb3;
                DAT_001f7a16 = DAT_001f7a16 ^ 0xb3;
                DAT_001f7a17 = DAT_001f7a17 ^ 0xb3;
                DAT_001f8334._0_3_ = CONCAT12(1,(undefined2)DAT_001f8334);
                puVar8 = (undefined1 *)0xdaabd6243423b9d5;
              }
            }
          }
          else {
            puVar5 = puVar9;
            puVar8 = (undefined1 *)0xc82fc556374cfb04;
            if ((puVar6 != (undefined1 *)0x8497e9c855873224) &&
               (puVar8 = puVar6, puVar6 == (undefined1 *)0x9141e7ccec342354)) {
              local_a8 = -0x16;
              puVar8 = (undefined1 *)0x862419eaecdf1a5;
            }
          }
        }
        else if ((long)puVar6 < -0x615cdc84d56625fc) {
          if (puVar6 == (undefined1 *)0x93f8f1d59ed66f09) {
            uVar4 = FUN_001dc56c(param_1,*param_2,param_2 + 1);
            puVar5 = puVar9;
            puVar8 = (undefined1 *)0x38b550c75dcbd861;
            if ((uVar4 & 1) == 0) {
              puVar8 = (undefined1 *)0x494913e247ec810;
            }
          }
          else {
            puVar5 = puVar9;
            if (puVar6 == &DAT_965cf93a9dddb88a) {
              uVar4 = FUN_001dc470(param_1,*param_2,0xc,1);
              puVar8 = (undefined1 *)0xbac85a422f6dcf28;
              if ((uVar4 & 1) == 0) {
                puVar8 = (undefined1 *)0x28a29c505fd0878c;
              }
            }
          }
        }
        else if (puVar6 == (undefined1 *)0x9ea3237b2a99da04) {
          uVar4 = FUN_001dc360(param_1,&local_78,0x10,1,*param_2);
          puVar5 = puVar9;
          puVar8 = (undefined1 *)0xf9b878d6ad273076;
          if ((uVar4 & 1) == 0) {
            puVar8 = (undefined1 *)0x3303345eb4f85978;
          }
        }
        else {
          puVar5 = puVar9;
          if (puVar6 == (undefined1 *)0x9ea8bf2b74e4b439) {
            local_a8 = local_c0;
            puVar8 = (undefined1 *)0x862419eaecdf1a5;
          }
        }
      }
      else if ((long)puVar6 < -0x556288319bfdcffb) {
        if ((long)puVar6 < -0x59438dc72a51bac9) {
          puVar5 = puVar9;
          puVar8 = (undefined1 *)0xa6783f0b0f892393;
          if ((puVar6 != (undefined1 *)0xa5480f9b0f4a718f) &&
             (puVar8 = puVar6, puVar6 == (undefined1 *)0xa6783f0b0f892393)) {
            DAT_001f832c = 0;
            iVar3 = FUN_001cbfb0(&DAT_001f7a10,&local_7c,4);
            local_a4 = local_ac - 1;
            bVar2 = local_a4 < 0xfffeffec || iVar3 == 0;
            puVar6 = (undefined1 *)0x75ce15e08caa4c6a;
            puVar8 = (undefined1 *)0xf63c965f6afee456;
            goto LAB_001e67cc;
          }
        }
        else if (puVar6 == (undefined1 *)0xa6bc7238d5ae4537) {
          puVar5 = puVar9;
          puVar8 = (undefined1 *)0x859356aa69720d1;
          if (param_2[2] != local_90) {
            puVar8 = (undefined1 *)0x3359a89ff97157ac;
          }
        }
        else {
          puVar5 = puVar9;
          if (puVar6 == (undefined1 *)0xa852b4a22d98453e) {
            DAT_001f7a10 = DAT_001f7a10 ^ 0x96;
            DAT_001f7a11 = DAT_001f7a11 ^ 0x96;
            DAT_001f7a12 = DAT_001f7a12 ^ 0x96;
            DAT_001f7a13 = DAT_001f7a13 ^ 0x96;
            DAT_001f8334._0_2_ = CONCAT11(1,(undefined1)DAT_001f8334);
            puVar8 = (undefined1 *)0xa6783f0b0f892393;
          }
        }
      }
      else if ((long)puVar6 < -0x4537a5bdd09230d8) {
        if (puVar6 == (undefined1 *)0xaa9d77ce64023005) {
          local_94 = 3;
LAB_001e55e0:
          puVar5 = puVar9;
          puVar8 = (undefined1 *)0xc5658784255ca4e2;
        }
        else {
          puVar5 = puVar9;
          if (puVar6 == (undefined1 *)0xba6e2acce79821e0) {
            puVar8 = (undefined1 *)0x2e7820ff94f2299e;
          }
        }
      }
      else if (puVar6 == (undefined1 *)0xbac85a422f6dcf28) {
        uVar4 = FUN_001dc360(param_1,&local_84,4,1,*param_2);
        puVar5 = puVar9;
        puVar8 = (undefined1 *)0x5427e3fe8053026a;
        if ((uVar4 & 1) == 0) {
          puVar8 = (undefined1 *)0xd7a28745f3a8fb05;
        }
      }
      else {
        puVar5 = puVar9;
        if (puVar6 == (undefined1 *)0xbca196f3040a25ee) {
          iVar3 = FUN_001ebe70(0,1,&DAT_001f832c);
          puVar8 = (undefined1 *)0xe3a89f94bb3e7e7e;
          if (iVar3 != 0) {
            puVar8 = (undefined1 *)0xe08d3eae8db4f8d9;
          }
        }
      }
      goto LAB_001e55f8;
    }
    if ((long)puVar6 < -0x1f72c151724b0727) {
      if ((long)puVar6 < -0x2a853f5056e0125e) {
        if ((long)puVar6 < -0x37bcec43bd9d08fe) {
          if (puVar6 == (undefined1 *)0xc5658784255ca4e2) {
            *param_1 = local_94;
            puVar5 = puVar9;
            puVar8 = (undefined1 *)0xc82fc556374cfb04;
          }
          else {
            puVar5 = puVar9;
            if (puVar6 == (undefined1 *)0xc82fc556374cfb04) {
              if (*(long *)(lVar1 + 0x28) == local_68) {
                return;
              }
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
          }
        }
        else if (puVar6 == (undefined1 *)0xc84313bc4262f702) {
          uVar4 = FUN_001dc360(param_1,&local_90,8,1,*param_2);
          puVar5 = puVar9;
          puVar8 = (undefined1 *)0xa6bc7238d5ae4537;
          if ((uVar4 & 1) == 0) {
            puVar8 = (undefined1 *)0xf494b3c44b0594a4;
          }
        }
        else {
          puVar5 = puVar9;
          if (puVar6 == (undefined1 *)0xd0535adc928c1bbf) {
            puVar8 = (undefined1 *)0xbca196f3040a25ee;
          }
        }
        goto LAB_001e55f8;
      }
      if ((long)puVar6 < -0x255429dbcbdc462b) {
        if (puVar6 == (undefined1 *)0xd57ac0afa91feda2) {
          uVar4 = FUN_001dc470(param_1,uVar7,0xffffffffffffffea,2);
          puVar5 = puVar9;
          puVar8 = (undefined1 *)0x9141e7ccec342354;
          if ((uVar4 & 1) == 0) {
            puVar8 = (undefined1 *)0xfb3a65b3fca4c172;
          }
        }
        else {
          puVar5 = puVar9;
          if (puVar6 == (undefined1 *)0xd7a28745f3a8fb05) goto LAB_001e656c;
        }
        goto LAB_001e55f8;
      }
      if (puVar6 == (undefined1 *)0xdaabd6243423b9d5) {
        DAT_001f8330 = 0;
        iVar3 = FUN_001cbfb0(&DAT_001f7a14,(long)&local_84 + 4,4);
        puVar5 = puVar9;
        puVar8 = (undefined1 *)0x36fa2d308e82c2f8;
        if (iVar3 != 0) {
          puVar8 = (undefined1 *)0xaa9d77ce64023005;
        }
        goto LAB_001e55f8;
      }
      puVar5 = puVar9;
      if (puVar6 != (undefined1 *)0xdad5fc5726557d2b) goto LAB_001e55f8;
    }
    else {
      if (-0x9c369a095011bab < (long)puVar6) {
        if ((long)puVar6 < -0x5a5e67cbbd9137e) {
          puVar5 = (undefined8 *)(ulong)local_a4;
          puVar8 = (undefined1 *)0x6dbb77d6245fbf6c;
          if ((puVar6 != (undefined1 *)0xf63c965f6afee456) &&
             (puVar5 = puVar9, puVar8 = puVar6, puVar6 == (undefined1 *)0xf9b878d6ad273076)) {
            puVar8 = (undefined1 *)0x102f8ffd02923754;
          }
        }
        else {
          puVar5 = puVar9;
          puVar8 = (undefined1 *)0x102f8ffd02923754;
          if ((puVar6 != (undefined1 *)0xfa5a19834426ec82) &&
             (puVar8 = puVar6, puVar6 == (undefined1 *)0xfb3a65b3fca4c172)) goto LAB_001e6008;
        }
        goto LAB_001e55f8;
      }
      if ((long)puVar6 < -0x1736fceebecd72f8) {
        puVar5 = puVar9;
        puVar8 = (undefined1 *)0xbca196f3040a25ee;
        if ((puVar6 != (undefined1 *)0xe08d3eae8db4f8d9) &&
           (puVar8 = puVar6, puVar6 == (undefined1 *)0xe3a89f94bb3e7e7e)) {
          puVar8 = (undefined1 *)0xa5480f9b0f4a718f;
          if (DAT_001f8334._1_1_ == '\0') {
            puVar8 = (undefined1 *)0xa852b4a22d98453e;
          }
        }
        goto LAB_001e55f8;
      }
      puVar5 = puVar9;
      puVar8 = (undefined1 *)0xdaabd6243423b9d5;
      if ((puVar6 == (undefined1 *)0xe8c9031141328d08) ||
         (puVar8 = puVar6, puVar6 != (undefined1 *)0xf494b3c44b0594a4)) goto LAB_001e55f8;
    }
  }
  else {
    if (0x36fa2d308e82c2f7 < (long)puVar6) {
      if ((long)puVar6 < 0x5701972a5c88a65c) {
        if ((long)puVar6 < 0x4d702a7aef09f0b4) {
          if ((long)puVar6 < 0x45f288ff0a7ea1de) {
            if (puVar6 == (undefined1 *)0x36fa2d308e82c2f8) {
              uVar4 = FUN_001dc470(param_1,*param_2,0xffffffffffffffec,1);
              puVar5 = puVar9;
              puVar8 = (undefined1 *)0x9ea3237b2a99da04;
              if ((uVar4 & 1) == 0) {
                puVar8 = (undefined1 *)0x129b99854ca09618;
              }
            }
            else {
              puVar5 = puVar9;
              if (puVar6 == (undefined1 *)0x38b550c75dcbd861) {
                uVar4 = FUN_001dc360(param_1,param_2 + 2,8,1,*param_2);
                puVar8 = (undefined1 *)0x80946337e81a76ad;
                if ((uVar4 & 1) == 0) {
                  puVar8 = (undefined1 *)0x482e5862fb274eec;
                }
              }
            }
          }
          else {
            if (puVar6 == (undefined1 *)0x45f288ff0a7ea1de) {
              local_94 = 5;
              goto LAB_001e55e0;
            }
            puVar5 = puVar9;
            if (puVar6 == (undefined1 *)0x482e5862fb274eec) goto LAB_001e656c;
          }
          goto LAB_001e55f8;
        }
        if (0x5427e3fe80530269 < (long)puVar6) {
          if (puVar6 == (undefined1 *)0x5427e3fe8053026a) {
            uVar4 = FUN_001dc470(param_1,*param_2,local_84 & 0xffffffff,0);
            puVar5 = puVar9;
            puVar8 = (undefined1 *)0x55488ab70f6983fa;
            if ((uVar4 & 1) == 0) {
              puVar8 = (undefined1 *)0x8497e9c855873224;
            }
          }
          else {
            puVar5 = puVar9;
            if (puVar6 == (undefined1 *)0x55488ab70f6983fa) {
              uVar4 = FUN_001dc360(param_1,(long)&local_84 + 4,4,1,*param_2);
              puVar8 = (undefined1 *)0x7e7f415062326f70;
              if ((uVar4 & 1) == 0) {
                puVar8 = (undefined1 *)0x5701972a5c88a65c;
              }
            }
          }
          goto LAB_001e55f8;
        }
        if (puVar6 != (undefined1 *)0x4d702a7aef09f0b4) {
          puVar5 = puVar9;
          if (puVar6 == (undefined1 *)0x5375277af4011243) {
            puVar8 = (undefined1 *)0x297717612b720ee8;
          }
          goto LAB_001e55f8;
        }
        puVar8 = (undefined1 *)0x5375277af4011243;
        bVar2 = DAT_001f8334._3_1_ == '\0';
        puVar6 = (undefined1 *)0x65f514c9e7f64775;
      }
      else {
        if (0x75ce15e08caa4c69 < (long)puVar6) {
          if ((long)puVar6 < 0x7e7f415062326f70) {
            puVar5 = puVar9;
            puVar8 = (undefined1 *)0x7f24efb1c885eb9b;
            if ((puVar6 != (undefined1 *)0x75ce15e08caa4c6a) &&
               (puVar8 = puVar6, puVar6 == (undefined1 *)0x7c9736501c5f4f0a)) {
              uVar4 = FUN_001dc470(param_1,*param_2,0xffffffffffffffe8,1);
              puVar8 = (undefined1 *)0x93f8f1d59ed66f09;
              if ((uVar4 & 1) == 0) {
                puVar8 = (undefined1 *)0x1666a35a3e139985;
              }
            }
          }
          else {
            puVar5 = puVar9;
            puVar8 = (undefined1 *)0x2e7820ff94f2299e;
            if ((puVar6 != (undefined1 *)0x7e7f415062326f70) &&
               (puVar8 = puVar6, puVar6 == (undefined1 *)0x7f24efb1c885eb9b)) {
              puVar8 = &DAT_965cf93a9dddb88a;
              if (*param_1 != 0) {
                puVar8 = (undefined1 *)0x33970f856d03deee;
              }
            }
          }
          goto LAB_001e55f8;
        }
        if ((long)puVar6 < 0x6dbb77d6245fbf6c) {
          puVar5 = puVar9;
          puVar8 = (undefined1 *)0xc82fc556374cfb04;
          if ((puVar6 != (undefined1 *)0x5701972a5c88a65c) &&
             (puVar8 = puVar6, puVar6 == (undefined1 *)0x65f514c9e7f64775)) {
            _DAT_001f7a20 = _DAT_001f7a20 ^ 0x3d3d3d3d3d3d3d3d;
            uRam00000000001f7a28 = uRam00000000001f7a28 ^ 0x3d3d3d3d3d3d3d3d;
            DAT_001f8334 = CONCAT13(1,(undefined3)DAT_001f8334);
            puVar8 = (undefined1 *)0x297717612b720ee8;
          }
          goto LAB_001e55f8;
        }
        if (puVar6 == (undefined1 *)0x6dbb77d6245fbf6c) {
          uVar4 = FUN_001dc470(param_1,uVar7,(long)iVar3,2);
          puVar5 = (undefined8 *)((ulong)puVar5 & 0xffffffff);
          puVar8 = (undefined1 *)0x9ea8bf2b74e4b439;
          local_c0 = iVar3;
          if ((uVar4 & 1) == 0) {
            puVar8 = (undefined1 *)0x4357c11efd169a0;
          }
          goto LAB_001e55f8;
        }
        puVar5 = puVar9;
        if (puVar6 != (undefined1 *)0x6ea6282306ea075c) goto LAB_001e55f8;
        puVar8 = (undefined1 *)0xe8c9031141328d08;
        bVar2 = DAT_001f8334._2_1_ == '\0';
        puVar6 = (undefined1 *)0x8238ab8752830617;
      }
LAB_001e67cc:
      puVar5 = puVar9;
      if (bVar2) {
        puVar8 = puVar6;
      }
      goto LAB_001e55f8;
    }
    if ((long)puVar6 < 0x1666a35a3e139985) {
      if ((long)puVar6 < 0x859356aa69720d1) {
        if ((long)puVar6 < 0x494913e247ec810) {
          puVar5 = puVar9;
          puVar8 = (undefined1 *)0x7f24efb1c885eb9b;
          if ((puVar6 != (undefined1 *)0x408409b1e5ac055) &&
             (puVar8 = puVar6, puVar6 == (undefined1 *)0x4357c11efd169a0)) {
LAB_001e6008:
            puVar5 = puVar9;
            puVar8 = (undefined1 *)0x7f24efb1c885eb9b;
          }
        }
        else {
          puVar5 = puVar9;
          puVar8 = (undefined1 *)0xc82fc556374cfb04;
          if ((puVar6 != (undefined1 *)0x494913e247ec810) &&
             (puVar8 = puVar6, puVar6 == (undefined1 *)0x4a5cd72dc1a18f6)) {
            local_bc = local_ac - 1;
            puVar8 = (undefined1 *)0x26c60fa523ddda4b;
            if (local_bc < 0xfffeffec) {
              puVar8 = (undefined1 *)0x408409b1e5ac055;
            }
          }
        }
        goto LAB_001e55f8;
      }
      if ((long)puVar6 < 0x102f8ffd02923754) {
        puVar5 = puVar9;
        puVar8 = (undefined1 *)0xc82fc556374cfb04;
        if ((puVar6 != (undefined1 *)0x859356aa69720d1) &&
           (puVar8 = puVar6, puVar6 == (undefined1 *)0x862419eaecdf1a5)) {
          local_7c = 0;
          uVar4 = FUN_001dc360(param_1,&local_7c,4,1,uVar7);
          puVar8 = (undefined1 *)0xd0535adc928c1bbf;
          if ((uVar4 & 1) == 0) {
            puVar8 = (undefined1 *)0x4a5cd72dc1a18f6;
          }
          local_ac = local_a8;
        }
        goto LAB_001e55f8;
      }
      if (puVar6 == (undefined1 *)0x102f8ffd02923754) {
        iVar3 = FUN_001ebe70(0,1,&DAT_001f8334);
        puVar5 = puVar9;
        puVar8 = (undefined1 *)0x4d702a7aef09f0b4;
        if (iVar3 != 0) {
          puVar8 = (undefined1 *)0xfa5a19834426ec82;
        }
        goto LAB_001e55f8;
      }
      puVar5 = puVar9;
      if (puVar6 != (undefined1 *)0x129b99854ca09618) goto LAB_001e55f8;
    }
    else {
      if ((long)puVar6 < 0x2e7820ff94f2299e) {
        if ((long)puVar6 < 0x28a29c505fd0878c) {
          puVar5 = puVar9;
          puVar8 = (undefined1 *)0xc82fc556374cfb04;
          if ((puVar6 != (undefined1 *)0x1666a35a3e139985) &&
             (puVar8 = puVar6, puVar6 == (undefined1 *)0x26c60fa523ddda4b)) {
            puVar5 = (undefined8 *)(ulong)local_bc;
            puVar8 = (undefined1 *)0x6dbb77d6245fbf6c;
          }
        }
        else {
          puVar5 = puVar9;
          puVar8 = (undefined1 *)0xc82fc556374cfb04;
          if ((puVar6 != (undefined1 *)0x28a29c505fd0878c) &&
             (puVar8 = puVar6, puVar6 == (undefined1 *)0x297717612b720ee8)) {
            DAT_001f8334 = 0;
            iVar3 = FUN_001cbfb0(&DAT_001f7a20,&local_78,0x10);
            puVar8 = (undefined1 *)0x7c9736501c5f4f0a;
            if (iVar3 != 0) {
              puVar8 = (undefined1 *)0x45f288ff0a7ea1de;
            }
          }
        }
        goto LAB_001e55f8;
      }
      if (0x3359a89ff97157ab < (long)puVar6) {
        if (puVar6 == (undefined1 *)0x3359a89ff97157ac) {
          local_94 = 6;
          goto LAB_001e55e0;
        }
        puVar5 = puVar9;
        if (puVar6 == (undefined1 *)0x33970f856d03deee) goto LAB_001e656c;
        goto LAB_001e55f8;
      }
      if (puVar6 == (undefined1 *)0x2e7820ff94f2299e) {
        iVar3 = FUN_001ebe70(0,1,&DAT_001f8330);
        puVar5 = puVar9;
        puVar8 = (undefined1 *)0x6ea6282306ea075c;
        if (iVar3 != 0) {
          puVar8 = (undefined1 *)0xba6e2acce79821e0;
        }
        goto LAB_001e55f8;
      }
      puVar5 = puVar9;
      if (puVar6 != (undefined1 *)0x3303345eb4f85978) goto LAB_001e55f8;
    }
  }
LAB_001e656c:
  puVar5 = puVar9;
  puVar8 = (undefined1 *)0xc82fc556374cfb04;
  goto LAB_001e55f8;
}


