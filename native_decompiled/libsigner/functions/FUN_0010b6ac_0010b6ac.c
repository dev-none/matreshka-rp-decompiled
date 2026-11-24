// Function: FUN_0010b6ac
// Entry: 0010b6ac

void FUN_0010b6ac(int *param_1,long *param_2,long param_3,ulong param_4,undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long local_a0;
  
  FUN_0016e730(param_1,param_2,param_4 & 0xffffffff);
  puVar1 = (undefined1 *)0x93f8f1d59ed66f09;
  if (param_2 != (long *)0x0) {
    puVar1 = (undefined1 *)0x494913e247ec810;
  }
  puVar2 = (undefined1 *)0xfb3a65b3fca4c172;
  if (*param_1 != 0) {
    puVar2 = (undefined1 *)0xd57ac0afa91feda2;
  }
  puVar5 = (undefined1 *)0xbb472acc394b094b;
LAB_0010b838:
  while (puVar4 = puVar5, puVar5 = puVar4, 0x494913e247ec80f < (long)puVar4) {
    if ((long)puVar4 < 0x43f7eb53c5724ce0) {
      if ((long)puVar4 < 0x28a29c505fd0878c) {
        if ((long)puVar4 < 0x129b99854ca09618) {
          if ((long)puVar4 < 0x862419eaecdf1a5) {
            if (puVar4 == (undefined1 *)0x494913e247ec810) {
              local_a0 = *(long *)(param_3 + 0x18);
              puVar5 = (undefined1 *)0x38b550c75dcbd861;
              if (local_a0 != 0) {
                puVar5 = (undefined1 *)0x482e5862fb274eec;
              }
            }
            else if (puVar4 == (undefined1 *)0x4a5cd72dc1a18f6) {
              iVar3 = FUN_001ebe70(0,1,&DAT_001f7b2c);
              puVar5 = (undefined1 *)0xb0cc7ff791d48f3e;
              if (iVar3 != 0) {
                puVar5 = (undefined1 *)0x408409b1e5ac055;
              }
            }
            else if (puVar4 == (undefined1 *)0x859356aa69720d1) {
              puVar5 = (undefined1 *)0x3359a89ff97157ac;
            }
          }
          else {
            puVar5 = (undefined1 *)0x4a5cd72dc1a18f6;
            if (puVar4 != (undefined1 *)0x862419eaecdf1a5) {
              if (puVar4 == (undefined1 *)0x1029ba407f8d7b2d) {
                puVar5 = (undefined1 *)0x4517d092a6c8637b;
                if (DAT_001f7b9c._3_1_ == '\0') {
                  puVar5 = (undefined1 *)0xd0535adc928c1bbf;
                }
              }
              else {
                puVar5 = puVar4;
                if (puVar4 == (undefined1 *)0x102f8ffd02923754) {
                  iVar3 = FUN_001ebe70(0,1,&DAT_001f7b28);
                  puVar5 = (undefined1 *)0xd1d3887709769d6c;
                  if (iVar3 != 0) {
                    puVar5 = (undefined1 *)0xfa5a19834426ec82;
                  }
                }
              }
            }
          }
        }
        else if ((long)puVar4 < 0x1c201a6f44d38273) {
          if (puVar4 == (undefined1 *)0x129b99854ca09618) {
            iVar3 = FUN_001ebe70(0,1,&DAT_001f7b34);
            puVar5 = (undefined1 *)0x53bf3b45f912026b;
            if (iVar3 != 0) {
              puVar5 = (undefined1 *)0x9ea3237b2a99da04;
            }
          }
          else {
            puVar5 = (undefined1 *)0x297717612b720ee8;
            if ((puVar4 != (undefined1 *)0x135ff1730db8c077) &&
               (puVar5 = puVar4, puVar4 == (undefined1 *)0x1666a35a3e139985)) {
              puVar5 = puVar1;
            }
          }
        }
        else {
          if (puVar4 == (undefined1 *)0x1c201a6f44d38273) {
            puVar5 = (undefined1 *)0x57f8c36627f7246e;
            goto LAB_0010d2d0;
          }
          if (puVar4 == (undefined1 *)0x26c60fa523ddda4b) {
            DAT_001f52c4 = DAT_001f52c4 ^ 0xc2;
            DAT_001f52c5 = DAT_001f52c5 ^ 0xc2;
            DAT_001f7ba3 = '\x01';
            puVar5 = (undefined1 *)0x6dbb77d6245fbf6c;
          }
          else if (puVar4 == (undefined1 *)0x25e60e8a57340c35) {
            return;
          }
        }
      }
      else if ((long)puVar4 < 0x3359a89ff97157ac) {
        if ((long)puVar4 < 0x2e7820ff94f2299e) {
          if (puVar4 == (undefined1 *)0x28a29c505fd0878c) {
            DAT_001f5280 = DAT_001f5280 ^ 0xf2f2f2f2f2f2f2f2;
            DAT_001f7b9c._2_1_ = '\x01';
            puVar5 = (undefined1 *)0xbac85a422f6dcf28;
          }
          else if (puVar4 == (undefined1 *)0x297717612b720ee8) {
            DAT_001f7b28 = 0;
            FUN_00171f8c(param_1,param_2,*(undefined8 *)(param_3 + 0x10),&DAT_001f52b8,&DAT_001f52d0
                        );
            puVar5 = (undefined1 *)0x7c9736501c5f4f0a;
            if (*param_1 != 0) {
              puVar5 = (undefined1 *)0x45f288ff0a7ea1de;
            }
          }
        }
        else if (puVar4 == (undefined1 *)0x2e7820ff94f2299e) {
          iVar3 = FUN_001ebe70(0,1,&DAT_001f7b24);
          puVar5 = (undefined1 *)0x6853f5fa40398e94;
          if (iVar3 != 0) {
            puVar5 = (undefined1 *)0xba6e2acce79821e0;
          }
        }
        else {
          puVar5 = (undefined1 *)0x6dbb77d6245fbf6c;
          if ((puVar4 != (undefined1 *)0x30873d520a61889c) &&
             (puVar5 = puVar4, puVar4 == (undefined1 *)0x3303345eb4f85978)) {
            DAT_001f52d0 = DAT_001f52d0 ^ 9;
            DAT_001f52d1 = DAT_001f52d1 ^ 9;
            DAT_001f52d2 = DAT_001f52d2 ^ 9;
            DAT_001f52d3 = DAT_001f52d3 ^ 9;
            DAT_001f52d4 = DAT_001f52d4 ^ 9;
            DAT_001f7ba5 = '\x01';
            puVar5 = (undefined1 *)0xf9b878d6ad273076;
          }
        }
      }
      else if ((long)puVar4 < 0x38b550c75dcbd861) {
        if (puVar4 == (undefined1 *)0x3359a89ff97157ac) {
          iVar3 = FUN_001ebe70(0,1,&DAT_001f7b24);
          puVar5 = (undefined1 *)0x5e990c37db09f86a;
          if (iVar3 != 0) {
            puVar5 = (undefined1 *)0x859356aa69720d1;
          }
        }
        else if (puVar4 == (undefined1 *)0x33970f856d03deee) {
          iVar3 = FUN_001ebe70(0,1,&DAT_001f7b14);
          puVar5 = (undefined1 *)0x5a82b43288d2c981;
          if (iVar3 != 0) {
            puVar5 = &DAT_965cf93a9dddb88a;
          }
        }
        else if (puVar4 == (undefined1 *)0x36fa2d308e82c2f8) {
          puVar5 = (undefined1 *)0x129b99854ca09618;
        }
      }
      else {
        puVar5 = (undefined1 *)0x80946337e81a76ad;
        if (((puVar4 != (undefined1 *)0x38b550c75dcbd861) &&
            (puVar5 = (undefined1 *)0xe8c9031141328d08, puVar4 != (undefined1 *)0x41be9e0e5eb1efe4))
           && (puVar5 = puVar4, puVar4 == (undefined1 *)0x42f0c6f150e99035)) {
          puVar5 = (undefined1 *)0xa6bc7238d5ae4537;
        }
      }
    }
    else if ((long)puVar4 < 0x57f8c36627f7246e) {
      if ((long)puVar4 < 0x4d702a7aef09f0b4) {
        if ((long)puVar4 < 0x45f288ff0a7ea1de) {
          puVar5 = (undefined1 *)0xdaabd6243423b9d5;
          if ((puVar4 != (undefined1 *)0x43f7eb53c5724ce0) &&
             (puVar5 = puVar4, puVar4 == (undefined1 *)0x4517d092a6c8637b)) {
            puVar5 = (undefined1 *)0xbca196f3040a25ee;
          }
        }
        else {
          puVar5 = (undefined1 *)0x1666a35a3e139985;
          if (((puVar4 != (undefined1 *)0x45f288ff0a7ea1de) &&
              (puVar5 = (undefined1 *)0xc82fc556374cfb04, puVar4 != (undefined1 *)0x469bef0d6588cd58
              )) && (puVar5 = puVar4, puVar4 == (undefined1 *)0x482e5862fb274eec)) {
            (**(code **)(*param_2 + 0xb8))(param_2,local_a0);
            puVar5 = (undefined1 *)0x80946337e81a76ad;
          }
        }
      }
      else if ((long)puVar4 < 0x5427e3fe8053026a) {
        if (puVar4 == (undefined1 *)0x4d702a7aef09f0b4) {
          iVar3 = FUN_001ebe70(0,1,&DAT_001f7b18);
          puVar5 = (undefined1 *)0xbea2a6ad7de27038;
          if (iVar3 != 0) {
            puVar5 = (undefined1 *)0x5375277af4011243;
          }
        }
        else {
          puVar5 = (undefined1 *)0x4d702a7aef09f0b4;
          if ((puVar4 != (undefined1 *)0x5375277af4011243) &&
             (puVar5 = puVar4, puVar4 == (undefined1 *)0x53bf3b45f912026b)) {
            puVar5 = (undefined1 *)0x8da1aee586f30b54;
            if (DAT_001f7ba5 == '\0') {
              puVar5 = (undefined1 *)0x3303345eb4f85978;
            }
          }
        }
      }
      else {
        puVar5 = (undefined1 *)0x8497e9c855873224;
        if (((puVar4 != (undefined1 *)0x5427e3fe8053026a) &&
            (puVar4 != (undefined1 *)0x55488ab70f6983fa)) &&
           (puVar5 = puVar4, puVar4 == (undefined1 *)0x5701972a5c88a65c)) {
          DAT_001f52c8 = DAT_001f52c8 ^ 0xc6;
          DAT_001f52c9 = DAT_001f52c9 ^ 0xc6;
          DAT_001f52ca = DAT_001f52ca ^ 0xc6;
          DAT_001f52cc = DAT_001f52cc ^ 0xc6;
          DAT_001f52cd = DAT_001f52cd ^ 0xc6;
          DAT_001f52ce = DAT_001f52ce ^ 0xc6;
          DAT_001f52cb = DAT_001f52cb ^ 0xc6;
          DAT_001f7ba4 = '\x01';
          puVar5 = (undefined1 *)0x7e7f415062326f70;
        }
      }
    }
    else if ((long)puVar4 < 0x6ea6282306ea075c) {
      if ((long)puVar4 < 0x65f514c9e7f64775) {
        if (puVar4 == (undefined1 *)0x57f8c36627f7246e) {
          DAT_001f7b18 = 0;
          *(undefined8 *)(param_3 + 0x18) = 0;
          FUN_00173008(param_1,param_2,*(undefined8 *)(param_3 + 0x10),&DAT_001f5288);
          FUN_00173008(param_1,param_2,*(undefined8 *)(param_3 + 0x10),&DAT_001f5298);
          FUN_00173008(param_1,param_2,*(undefined8 *)(param_3 + 0x10),&DAT_001f52a8);
          FUN_00173008(param_1,param_2,*(undefined8 *)(param_3 + 0x10),&DAT_001f52b8);
          puVar5 = (undefined1 *)0x25e60e8a57340c35;
        }
        else if (puVar4 == (undefined1 *)0x5a82b43288d2c981) {
          puVar5 = (undefined1 *)0xbcb67c35d138e776;
          if (DAT_001f7b9c._2_1_ == '\0') {
            puVar5 = (undefined1 *)0x28a29c505fd0878c;
          }
        }
        else if (puVar4 == (undefined1 *)0x5e990c37db09f86a) {
          puVar5 = (undefined1 *)0x469bef0d6588cd58;
          if (DAT_001f7ba1 == '\0') {
            puVar5 = (undefined1 *)0xc5658784255ca4e2;
          }
        }
      }
      else if (puVar4 == (undefined1 *)0x65f514c9e7f64775) {
        puVar5 = (undefined1 *)0x297717612b720ee8;
LAB_0010b824:
        DAT_001f52b8 = DAT_001f52b8 ^ 0x505050505050505;
        DAT_001f52c1 = DAT_001f52c1 ^ 5;
        DAT_001f52c0 = DAT_001f52c0 ^ 5;
        DAT_001f7ba2 = '\x01';
      }
      else if (puVar4 == (undefined1 *)0x6853f5fa40398e94) {
        puVar5 = (undefined1 *)0x43f7eb53c5724ce0;
        if (DAT_001f7ba1 == '\0') {
          puVar5 = (undefined1 *)0x8238ab8752830617;
        }
      }
      else if (puVar4 == (undefined1 *)0x6dbb77d6245fbf6c) {
        DAT_001f7b2c = 0;
        puVar5 = (undefined1 *)0x4357c11efd169a0;
      }
    }
    else if ((long)puVar4 < 0x7c9736501c5f4f0a) {
      if (puVar4 == (undefined1 *)0x6ea6282306ea075c) {
        puVar5 = (undefined1 *)0xe8c9031141328d08;
LAB_0010cf08:
        DAT_001f52a6 = DAT_001f52a6 ^ 0xac;
        DAT_001f52a5 = DAT_001f52a5 ^ 0xac;
        DAT_001f52a4 = DAT_001f52a4 ^ 0xac;
        DAT_001f52a3 = DAT_001f52a3 ^ 0xac;
        DAT_001f52a2 = DAT_001f52a2 ^ 0xac;
        DAT_001f52a1 = DAT_001f52a1 ^ 0xac;
        DAT_001f52a0 = DAT_001f52a0 ^ 0xac;
        DAT_001f5298 = DAT_001f5298 ^ 0xacacacacacacacac;
        DAT_001f7ba0 = '\x01';
      }
      else if (puVar4 == (undefined1 *)0x754d2b88abe28d02) {
        puVar5 = (undefined1 *)0x6df6ddc7d68c40;
        if (DAT_001f7ba0 == '\0') {
          puVar5 = (undefined1 *)0xf63c965f6afee456;
        }
      }
      else if (puVar4 == (undefined1 *)0x75ce15e08caa4c6a) {
        puVar5 = (undefined1 *)0xa6783f0b0f892393;
      }
    }
    else {
      puVar5 = (undefined1 *)0x25e60e8a57340c35;
      if (puVar4 != (undefined1 *)0x7c9736501c5f4f0a) {
        if (puVar4 == (undefined1 *)0x7e7f415062326f70) {
          DAT_001f7b30 = 0;
          puVar5 = (undefined1 *)0x2e7820ff94f2299e;
        }
        else {
          puVar5 = puVar4;
          if (puVar4 == (undefined1 *)0x7f24efb1c885eb9b) {
            puVar5 = (undefined1 *)0x33970f856d03deee;
code_r0x0010d108:
            DAT_001f7b20 = 0;
          }
        }
      }
    }
  }
  if ((long)puVar4 < -0x415d5952821d8fc8) {
    if (-0x5ab7f064f0b58e72 < (long)puVar4) {
      if ((long)puVar4 < -0x4591d5331867de20) {
        if ((long)puVar4 < -0x57ad4b5dd267bac2) {
          puVar5 = (undefined1 *)0xe3a89f94bb3e7e7e;
          if (puVar4 != (undefined1 *)0xa5480f9b0f4a718f) {
            if (puVar4 == (undefined1 *)0xa6783f0b0f892393) {
              iVar3 = FUN_001ebe70(0,1,&DAT_001f7b20);
              puVar5 = (undefined1 *)0x754d2b88abe28d02;
              if (iVar3 != 0) {
                puVar5 = (undefined1 *)0x75ce15e08caa4c6a;
              }
            }
            else {
              puVar5 = puVar4;
              if (puVar4 == (undefined1 *)0xa6bc7238d5ae4537) {
                DAT_001f7b28 = 0;
                puVar5 = (undefined1 *)0x3359a89ff97157ac;
              }
            }
          }
        }
        else {
          puVar5 = (undefined1 *)0xa6783f0b0f892393;
          if (((puVar4 != (undefined1 *)0xa852b4a22d98453e) &&
              (puVar5 = (undefined1 *)0x1666a35a3e139985, puVar4 != (undefined1 *)0xaa9d77ce64023005
              )) && (puVar5 = puVar4, puVar4 == (undefined1 *)0xb0cc7ff791d48f3e)) {
            puVar5 = (undefined1 *)0x30873d520a61889c;
            if (DAT_001f7ba3 == '\0') {
              puVar5 = (undefined1 *)0x26c60fa523ddda4b;
            }
          }
        }
      }
      else if ((long)puVar4 < -0x435e690cfbf5da12) {
        puVar5 = (undefined1 *)0x2e7820ff94f2299e;
        if (puVar4 != (undefined1 *)0xba6e2acce79821e0) {
          if (puVar4 == (undefined1 *)0xbac85a422f6dcf28) {
            DAT_001f7b14 = 0;
            FUN_00171f8c(param_1,param_2,*(undefined8 *)(param_3 + 0x10),&DAT_001f5298,&DAT_001f5280
                        );
            puVar5 = (undefined1 *)0x5427e3fe8053026a;
            if (*param_1 != 0) {
              puVar5 = (undefined1 *)0xd7a28745f3a8fb05;
            }
          }
          else {
            puVar5 = puVar4;
            if (puVar4 == (undefined1 *)0xbb472acc394b094b) {
              puVar5 = puVar2;
            }
          }
        }
      }
      else if (puVar4 == (undefined1 *)0xbca196f3040a25ee) {
        DAT_001f7b18 = 0;
        FUN_00171f8c(param_1,param_2,*(undefined8 *)(param_3 + 0x10),&DAT_001f5288,&DAT_001f52c4);
        puVar5 = (undefined1 *)0xa852b4a22d98453e;
        if (*param_1 != 0) {
          puVar5 = (undefined1 *)0xe08d3eae8db4f8d9;
        }
      }
      else {
        puVar5 = (undefined1 *)0xbac85a422f6dcf28;
        if ((puVar4 != (undefined1 *)0xbcb67c35d138e776) &&
           (puVar5 = puVar4, puVar4 == (undefined1 *)0xbe042be3fe8bf539)) {
          puVar5 = (undefined1 *)0x7e7f415062326f70;
        }
      }
      goto LAB_0010b838;
    }
    if (-0x6e211a48bc109fd5 < (long)puVar4) {
      if ((long)puVar4 < -0x66cd56510b566201) {
        if (puVar4 == (undefined1 *)0x91dee5b743ef602c) {
          puVar5 = (undefined1 *)0x41be9e0e5eb1efe4;
          if (DAT_001f7ba0 == '\0') {
            puVar5 = (undefined1 *)0x6ea6282306ea075c;
          }
        }
        else {
          puVar5 = (undefined1 *)0x80946337e81a76ad;
          if ((puVar4 != (undefined1 *)0x93f8f1d59ed66f09) &&
             (puVar5 = puVar4, puVar4 == &DAT_965cf93a9dddb88a)) {
            puVar5 = (undefined1 *)0x33970f856d03deee;
          }
        }
      }
      else if (puVar4 == (undefined1 *)0x9932a9aef4a99dff) {
        puVar5 = (undefined1 *)0x42f0c6f150e99035;
        if (DAT_001f7ba2 == '\0') {
          puVar5 = (undefined1 *)0xf494b3c44b0594a4;
        }
      }
      else {
        puVar5 = (undefined1 *)0x129b99854ca09618;
        if ((puVar4 != (undefined1 *)0x9ea3237b2a99da04) &&
           (puVar5 = puVar4, puVar4 == (undefined1 *)0x9ea8bf2b74e4b439)) {
          puVar5 = (undefined1 *)0x4357c11efd169a0;
        }
      }
      goto LAB_0010b838;
    }
    if (-0x7b681637aa78cddd < (long)puVar4) {
      if (puVar4 == (undefined1 *)0x8497e9c855873224) {
        iVar3 = FUN_001ebe70(0,1,&DAT_001f7b30);
        puVar5 = (undefined1 *)0xe5d3e88b82b362ea;
        if (iVar3 != 0) {
          puVar5 = (undefined1 *)0x55488ab70f6983fa;
        }
      }
      else {
        puVar5 = (undefined1 *)0xf9b878d6ad273076;
        if ((puVar4 != (undefined1 *)0x8da1aee586f30b54) &&
           (puVar5 = puVar4, puVar4 == (undefined1 *)0x9141e7ccec342354)) {
          puVar5 = (undefined1 *)0x1666a35a3e139985;
        }
      }
      goto LAB_0010b838;
    }
    puVar5 = (undefined1 *)0xdad5fc5726557d2b;
    if ((puVar4 == (undefined1 *)0x80946337e81a76ad) ||
       (puVar5 = puVar4, puVar4 != (undefined1 *)0x8238ab8752830617)) goto LAB_0010b838;
    puVar5 = (undefined1 *)0xdaabd6243423b9d5;
  }
  else {
    if (-0x1f72c151724b0728 < (long)puVar4) {
      if ((long)puVar4 < -0x647872952d8cf8a) {
        if ((long)puVar4 < -0x1736fceebecd72f8) {
          puVar5 = (undefined1 *)0x1666a35a3e139985;
          if (puVar4 != (undefined1 *)0xe08d3eae8db4f8d9) {
            if (puVar4 == (undefined1 *)0xe3a89f94bb3e7e7e) {
              iVar3 = FUN_001ebe70(0,1,&DAT_001f7b20);
              puVar5 = (undefined1 *)0x91dee5b743ef602c;
              if (iVar3 != 0) {
                puVar5 = (undefined1 *)0xa5480f9b0f4a718f;
              }
            }
            else {
              puVar5 = puVar4;
              if (puVar4 == (undefined1 *)0xe5d3e88b82b362ea) {
                puVar5 = (undefined1 *)0xbe042be3fe8bf539;
                if (DAT_001f7ba4 == '\0') {
                  puVar5 = (undefined1 *)0x5701972a5c88a65c;
                }
              }
            }
          }
        }
        else {
          if (puVar4 == (undefined1 *)0xe8c9031141328d08) {
            puVar5 = (undefined1 *)0x4d702a7aef09f0b4;
            goto code_r0x0010d108;
          }
          if (puVar4 == (undefined1 *)0xf494b3c44b0594a4) {
            puVar5 = (undefined1 *)0xa6bc7238d5ae4537;
            goto LAB_0010b824;
          }
          if (puVar4 == (undefined1 *)0xf63c965f6afee456) {
            puVar5 = (undefined1 *)0x7f24efb1c885eb9b;
            goto LAB_0010cf08;
          }
        }
      }
      else if ((long)puVar4 < 0x6df6ddc7d68c40) {
        puVar5 = (undefined1 *)0x102f8ffd02923754;
        if (puVar4 == (undefined1 *)0xf9b878d6ad273076) {
          DAT_001f7b34 = 0;
        }
        else if ((puVar4 != (undefined1 *)0xfa5a19834426ec82) &&
                (puVar5 = puVar4, puVar4 == (undefined1 *)0xfb3a65b3fca4c172)) {
          FUN_0016ea18(param_1,param_2,*(long *)(param_3 + 0x18),0,param_4,param_5);
          puVar5 = (undefined1 *)0x862419eaecdf1a5;
          if (*param_1 != 0) {
            puVar5 = (undefined1 *)0x9141e7ccec342354;
          }
        }
      }
      else {
        puVar5 = (undefined1 *)0x7f24efb1c885eb9b;
        if (((puVar4 != (undefined1 *)0x6df6ddc7d68c40) &&
            (puVar5 = (undefined1 *)0x4a5cd72dc1a18f6, puVar4 != (undefined1 *)0x408409b1e5ac055))
           && (puVar5 = puVar4, puVar4 == (undefined1 *)0x4357c11efd169a0)) {
          iVar3 = FUN_001ebe70(0,1,&DAT_001f7b18);
          puVar5 = (undefined1 *)0x1029ba407f8d7b2d;
          if (iVar3 != 0) {
            puVar5 = (undefined1 *)0x9ea8bf2b74e4b439;
          }
        }
      }
      goto LAB_0010b838;
    }
    if (-0x2faca5236d73e442 < (long)puVar4) {
      if ((long)puVar4 < -0x285d78ba0c5704fb) {
        if (puVar4 == (undefined1 *)0xd0535adc928c1bbf) {
          puVar5 = (undefined1 *)0xbca196f3040a25ee;
LAB_0010d2d0:
          DAT_001f5288 = DAT_001f5288 ^ 0x1f1f1f1f1f1f1f1f;
          DAT_001f5292 = DAT_001f5292 ^ 0x1f;
          DAT_001f5290 = DAT_001f5290 ^ 0x1f;
          DAT_001f5291 = DAT_001f5291 ^ 0x1f;
          DAT_001f7b9c._3_1_ = '\x01';
        }
        else if (puVar4 == (undefined1 *)0xd1d3887709769d6c) {
          puVar5 = (undefined1 *)0x135ff1730db8c077;
          if (DAT_001f7ba2 == '\0') {
            puVar5 = (undefined1 *)0x65f514c9e7f64775;
          }
        }
        else if (puVar4 == (undefined1 *)0xd57ac0afa91feda2) {
          puVar5 = (undefined1 *)0x1666a35a3e139985;
        }
      }
      else {
        puVar5 = (undefined1 *)0x1666a35a3e139985;
        if (puVar4 != (undefined1 *)0xd7a28745f3a8fb05) {
          if (puVar4 == (undefined1 *)0xdaabd6243423b9d5) {
            DAT_001f7b24 = 0;
            FUN_00171f8c(param_1,param_2,*(undefined8 *)(param_3 + 0x10),&DAT_001f52a8,&DAT_001f52c8
                        );
            puVar5 = (undefined1 *)0x36fa2d308e82c2f8;
            if (*param_1 != 0) {
              puVar5 = (undefined1 *)0xaa9d77ce64023005;
            }
          }
          else {
            puVar5 = puVar4;
            if (puVar4 == (undefined1 *)0xdad5fc5726557d2b) {
              iVar3 = FUN_001ebe70(0,1,&DAT_001f7b28);
              puVar5 = (undefined1 *)0x9932a9aef4a99dff;
              if (iVar3 != 0) {
                puVar5 = (undefined1 *)0xc84313bc4262f702;
              }
            }
          }
        }
      }
      goto LAB_0010b838;
    }
    if ((long)puVar4 < -0x3a9a787bdaa35b1e) {
      if (puVar4 == (undefined1 *)0xbea2a6ad7de27038) {
        puVar5 = (undefined1 *)0xc0f9015491ea412b;
        if (DAT_001f7b9c._3_1_ == '\0') {
          puVar5 = (undefined1 *)0x1c201a6f44d38273;
        }
      }
      else if (puVar4 == (undefined1 *)0xc0f9015491ea412b) {
        puVar5 = (undefined1 *)0x57f8c36627f7246e;
      }
      goto LAB_0010b838;
    }
    if (puVar4 != (undefined1 *)0xc5658784255ca4e2) {
      if (puVar4 == (undefined1 *)0xc82fc556374cfb04) {
        DAT_001f7b24 = 0;
        puVar5 = (undefined1 *)0xe3a89f94bb3e7e7e;
      }
      else if (puVar4 == (undefined1 *)0xc84313bc4262f702) {
        puVar5 = (undefined1 *)0xdad5fc5726557d2b;
      }
      goto LAB_0010b838;
    }
    puVar5 = (undefined1 *)0xc82fc556374cfb04;
  }
  DAT_001f52b6 = DAT_001f52b6 ^ 3;
  DAT_001f52b5 = DAT_001f52b5 ^ 3;
  DAT_001f52b4 = DAT_001f52b4 ^ 3;
  DAT_001f52b3 = DAT_001f52b3 ^ 3;
  DAT_001f52b2 = DAT_001f52b2 ^ 3;
  DAT_001f52b1 = DAT_001f52b1 ^ 3;
  DAT_001f52b0 = DAT_001f52b0 ^ 3;
  DAT_001f52a8 = DAT_001f52a8 ^ 0x303030303030303;
  DAT_001f7ba1 = '\x01';
  goto LAB_0010b838;
}


