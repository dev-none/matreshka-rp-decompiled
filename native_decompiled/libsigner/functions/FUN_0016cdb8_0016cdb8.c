// Function: FUN_0016cdb8
// Entry: 0016cdb8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0016cdb8(int *param_1,long *param_2,long param_3,long *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  undefined1 *puVar5;
  long unaff_x23;
  long local_90;
  int local_88;
  int local_84;
  int local_74;
  
  puVar1 = (undefined1 *)0xa7a7e13df6ca7b84;
  if (param_3 != 0) {
    puVar1 = (undefined1 *)0xd4590ec1e57e5179;
  }
  puVar2 = (undefined1 *)0x52d98d60f83cf13e;
LAB_0016ceb4:
  puVar5 = puVar2;
  puVar2 = puVar5;
  if ((long)puVar5 < -0x4c59a4c035b3e8e) {
    if ((long)puVar5 < -0x4537a5bdd09230d8) {
      if ((long)puVar5 < -0x615740d48b1b4bc7) {
        if ((long)puVar5 < -0x6ebe183313cbdcac) {
          if (puVar5 == (undefined1 *)0x8238ab8752830617) {
            *param_1 = local_84;
            puVar2 = (undefined1 *)0xdaabd6243423b9d5;
          }
          else if (puVar5 == (undefined1 *)0x8497e9c855873224) {
            puVar2 = (undefined1 *)0xdaabd6243423b9d5;
          }
        }
        else if (puVar5 == (undefined1 *)0x9141e7ccec342354) {
          DAT_001f80a8 = 0;
          unaff_x23 = (**(code **)(*param_2 + 0x30))(param_2,&DAT_001f6950);
          lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
          puVar2 = (undefined1 *)0x862419eaecdf1a5;
          if (lVar4 != 0) {
            puVar2 = (undefined1 *)0xd7a28745f3a8fb05;
          }
        }
        else if (puVar5 == &DAT_965cf93a9dddb88a) {
          puVar2 = (undefined1 *)0xbac85a422f6dcf28;
          if (*param_4 != 0) {
            puVar2 = (undefined1 *)0x28a29c505fd0878c;
          }
        }
        else if (puVar5 == (undefined1 *)0x9ea3237b2a99da04) {
          puVar2 = (undefined1 *)0x3303345eb4f85978;
          if (DAT_001f8214._2_1_ == '\0') {
            puVar2 = (undefined1 *)0xe08d3eae8db4f8d9;
          }
        }
      }
      else if ((long)puVar5 < -0x57ad4b5dd267bac2) {
        if (puVar5 == (undefined1 *)0x9ea8bf2b74e4b439) {
          DAT_001f80b0 = 0;
          puVar2 = (undefined1 *)0xd0535adc928c1bbf;
        }
        else {
          if (puVar5 == (undefined1 *)0xa6783f0b0f892393) {
            local_88 = 0xf;
            goto LAB_0016d714;
          }
          if (puVar5 == (undefined1 *)0xa7a7e13df6ca7b84) {
            local_84 = 3;
            goto LAB_0016d774;
          }
        }
      }
      else if (puVar5 == (undefined1 *)0xa852b4a22d98453e) {
        DAT_001f80ac = 0;
        local_90 = (**(code **)(*param_2 + 0x388))(param_2,unaff_x23,&DAT_001f6964,&DAT_001f6970);
        lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
        puVar2 = (undefined1 *)0x75ce15e08caa4c6a;
        if (lVar4 != 0) {
          puVar2 = (undefined1 *)0xa6783f0b0f892393;
        }
      }
      else {
        puVar2 = (undefined1 *)0xaa9d77ce64023005;
        if ((puVar5 != (undefined1 *)0xba6e2acce79821e0) &&
           (puVar2 = puVar5, puVar5 == (undefined1 *)0xaa9d77ce64023005)) {
          return;
        }
      }
      goto LAB_0016ceb4;
    }
    if ((long)puVar5 < -0x2a853f5056e0125e) {
      if ((long)puVar5 < -0x435e690cfbf5da12) {
        if (puVar5 == (undefined1 *)0xbac85a422f6dcf28) {
          local_74 = 0x19;
          goto LAB_0016cea0;
        }
        if (puVar5 == (undefined1 *)0xbb472acc394b094b) {
          iVar3 = FUN_001ebe70(0,1,&DAT_001f80a8);
          puVar2 = (undefined1 *)0x36fa2d308e82c2f8;
          if (iVar3 != 0) {
            puVar2 = (undefined1 *)0xd57ac0afa91feda2;
          }
        }
      }
      else {
        puVar2 = (undefined1 *)0xd0535adc928c1bbf;
        if (puVar5 != (undefined1 *)0xbca196f3040a25ee) {
          if (puVar5 == (undefined1 *)0xd0535adc928c1bbf) {
            iVar3 = FUN_001ebe70(0,1,&DAT_001f80ac);
            puVar2 = (undefined1 *)0x9ea3237b2a99da04;
            if (iVar3 != 0) {
              puVar2 = (undefined1 *)0xbca196f3040a25ee;
            }
          }
          else {
            puVar2 = puVar5;
            if (puVar5 == (undefined1 *)0xd4590ec1e57e5179) {
              puVar2 = (undefined1 *)0xbb472acc394b094b;
            }
          }
        }
      }
      goto LAB_0016ceb4;
    }
    if ((long)puVar5 < -0x1f72c151724b0727) {
      puVar2 = (undefined1 *)0xbb472acc394b094b;
      if (puVar5 != (undefined1 *)0xd57ac0afa91feda2) {
        if (puVar5 == (undefined1 *)0xd7a28745f3a8fb05) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          puVar2 = (undefined1 *)0x8497e9c855873224;
          if (unaff_x23 != 0) {
            puVar2 = (undefined1 *)0x5427e3fe8053026a;
          }
          *param_1 = 0xf;
        }
        else {
          puVar2 = puVar5;
          if (puVar5 == (undefined1 *)0xdaabd6243423b9d5) {
            *param_4 = 0;
            puVar2 = (undefined1 *)0xaa9d77ce64023005;
          }
        }
      }
      goto LAB_0016ceb4;
    }
    if (puVar5 == (undefined1 *)0xe08d3eae8db4f8d9) {
      DAT_001f6964 = DAT_001f6964 ^ 0xe4;
      DAT_001f6965 = DAT_001f6965 ^ 0xe4;
      DAT_001f6966 = DAT_001f6966 ^ 0xe4;
      DAT_001f6968 = DAT_001f6968 ^ 0xe4;
      DAT_001f6969 = DAT_001f6969 ^ 0xe4;
      DAT_001f696a = DAT_001f696a ^ 0xe4;
      DAT_001f6967 = DAT_001f6967 ^ 0xe4;
      DAT_001f8214._2_1_ = '\x01';
      puVar2 = (undefined1 *)0xa852b4a22d98453e;
      goto LAB_0016ceb4;
    }
    if (puVar5 != (undefined1 *)0xf63c965f6afee456) {
      if (puVar5 == (undefined1 *)0xf9b878d6ad273076) {
        puVar2 = (undefined1 *)0x102f8ffd02923754;
        if (DAT_001f8214._3_1_ == '\0') {
          puVar2 = (undefined1 *)0x4357c11efd169a0;
        }
      }
      goto LAB_0016ceb4;
    }
    local_74 = 0xf;
  }
  else {
    if ((long)puVar5 < 0x3303345eb4f85978) {
      if ((long)puVar5 < 0x102f8ffd02923754) {
        if ((long)puVar5 < 0x4357c11efd169a0) {
          if (puVar5 == (undefined1 *)0xfb3a65b3fca4c172) {
            DAT_001f6960 = DAT_001f6960 ^ 0xa9;
            DAT_001f6961 = DAT_001f6961 ^ 0xa9;
            DAT_001f6962 = DAT_001f6962 ^ 0xa9;
            DAT_001f6963 = DAT_001f6963 ^ 0xa9;
            _DAT_001f6950 = _DAT_001f6950 ^ 0xa9a9a9a9a9a9a9a9;
            uRam00000000001f6958 = uRam00000000001f6958 ^ 0xa9a9a9a9a9a9a9a9;
            DAT_001f8214._1_1_ = '\x01';
            puVar2 = (undefined1 *)0x9141e7ccec342354;
          }
          else if (puVar5 == (undefined1 *)0x408409b1e5ac055) {
            puVar2 = (undefined1 *)0x26c60fa523ddda4b;
          }
        }
        else if (puVar5 == (undefined1 *)0x4357c11efd169a0) {
          _DAT_001f6970 = _DAT_001f6970 ^ 0x6161616161616161;
          uRam00000000001f6978 = uRam00000000001f6978 ^ 0x6161616161616161;
          DAT_001f6980 = DAT_001f6980 ^ 0x6161616161616161;
          DAT_001f8214._3_1_ = '\x01';
          puVar2 = (undefined1 *)0x9ea8bf2b74e4b439;
        }
        else if (puVar5 == (undefined1 *)0x4a5cd72dc1a18f6) {
          local_84 = 0xf;
LAB_0016d774:
          puVar2 = (undefined1 *)0x8238ab8752830617;
        }
        else if (puVar5 == (undefined1 *)0x862419eaecdf1a5) {
          puVar2 = (undefined1 *)0x4a5cd72dc1a18f6;
          if (unaff_x23 != 0) {
            puVar2 = (undefined1 *)0x408409b1e5ac055;
          }
        }
      }
      else if ((long)puVar5 < 0x26c60fa523ddda4b) {
        puVar2 = (undefined1 *)0x9ea8bf2b74e4b439;
        if ((puVar5 != (undefined1 *)0x102f8ffd02923754) &&
           (puVar2 = puVar5, puVar5 == (undefined1 *)0x129b99854ca09618)) {
          puVar2 = (undefined1 *)0x9141e7ccec342354;
        }
      }
      else if (puVar5 == (undefined1 *)0x26c60fa523ddda4b) {
        iVar3 = FUN_001ebe70(0,1,&DAT_001f80b0);
        puVar2 = (undefined1 *)0xf9b878d6ad273076;
        if (iVar3 != 0) {
          puVar2 = (undefined1 *)0x6dbb77d6245fbf6c;
        }
      }
      else {
        puVar2 = (undefined1 *)0x7e7f415062326f70;
        if ((puVar5 != (undefined1 *)0x28a29c505fd0878c) &&
           (puVar2 = puVar5, puVar5 == (undefined1 *)0x2e7820ff94f2299e)) {
          puVar2 = (undefined1 *)0xdaabd6243423b9d5;
        }
      }
      goto LAB_0016ceb4;
    }
    if ((long)puVar5 < 0x55488ab70f6983fa) {
      if ((long)puVar5 < 0x36fa2d308e82c2f8) {
        puVar2 = (undefined1 *)0xa852b4a22d98453e;
        if ((puVar5 != (undefined1 *)0x3303345eb4f85978) &&
           (puVar2 = puVar5, puVar5 == (undefined1 *)0x33970f856d03deee)) {
          local_88 = 0x19;
LAB_0016d714:
          puVar2 = (undefined1 *)0x55488ab70f6983fa;
        }
      }
      else if (puVar5 == (undefined1 *)0x36fa2d308e82c2f8) {
        puVar2 = (undefined1 *)0x129b99854ca09618;
        if (DAT_001f8214._1_1_ == '\0') {
          puVar2 = (undefined1 *)0xfb3a65b3fca4c172;
        }
      }
      else {
        puVar2 = puVar1;
        if ((puVar5 != (undefined1 *)0x52d98d60f83cf13e) &&
           (puVar2 = puVar5, puVar5 == (undefined1 *)0x5427e3fe8053026a)) {
          puVar2 = (undefined1 *)0x7e7f415062326f70;
        }
      }
      goto LAB_0016ceb4;
    }
    if (0x75ce15e08caa4c69 < (long)puVar5) {
      if (puVar5 == (undefined1 *)0x75ce15e08caa4c6a) {
        puVar2 = (undefined1 *)0xf63c965f6afee456;
        if (local_90 != 0) {
          puVar2 = (undefined1 *)0x7f24efb1c885eb9b;
        }
      }
      else if (puVar5 == (undefined1 *)0x7e7f415062326f70) {
        (**(code **)(*param_2 + 0xb8))(param_2,unaff_x23);
        puVar2 = (undefined1 *)0xba6e2acce79821e0;
        if (*param_1 != 0) {
          puVar2 = (undefined1 *)0x2e7820ff94f2299e;
        }
      }
      else if (puVar5 == (undefined1 *)0x7f24efb1c885eb9b) {
        lVar4 = (**(code **)(*param_2 + 0x390))(param_2,unaff_x23,local_90,param_3,0);
        *param_4 = lVar4;
        lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
        puVar2 = &DAT_965cf93a9dddb88a;
        if (lVar4 != 0) {
          puVar2 = (undefined1 *)0x33970f856d03deee;
        }
      }
      goto LAB_0016ceb4;
    }
    if (puVar5 != (undefined1 *)0x55488ab70f6983fa) {
      if (puVar5 == (undefined1 *)0x5701972a5c88a65c) {
        *param_1 = local_74;
        puVar2 = (undefined1 *)0x7e7f415062326f70;
      }
      else if (puVar5 == (undefined1 *)0x6dbb77d6245fbf6c) {
        puVar2 = (undefined1 *)0x26c60fa523ddda4b;
      }
      goto LAB_0016ceb4;
    }
    (**(code **)(*param_2 + 0x80))(param_2);
    (**(code **)(*param_2 + 0x88))(param_2);
    local_74 = local_88;
  }
LAB_0016cea0:
  puVar2 = (undefined1 *)0x5701972a5c88a65c;
  goto LAB_0016ceb4;
}


