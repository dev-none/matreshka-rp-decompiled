// Function: FUN_00197cbc
// Entry: 00197cbc

uint FUN_00197cbc(long *param_1,int *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  long *plVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  long *unaff_x25;
  long *unaff_x26;
  int *piVar12;
  long local_e0;
  uint local_d4;
  undefined8 local_d0;
  undefined8 *local_c8;
  long *local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  undefined8 *local_a0;
  long local_98;
  uint local_8c;
  long *local_88;
  uint local_7c;
  long local_78;
  
  plVar4 = &local_e0;
  local_d0 = param_3;
  local_c8 = param_4;
  local_e0 = tpidr_el0;
  local_78 = *(long *)(local_e0 + 0x28);
  piVar3 = param_2;
  puVar11 = (undefined1 *)0xc12fb3fcfd762a6a;
LAB_00197db4:
  while( true ) {
    puVar10 = puVar11;
    piVar8 = piVar3;
    plVar2 = local_88;
    plVar1 = local_c0;
    piVar12 = (int *)((ulong)piVar8 & 0xffffffff);
    puVar11 = puVar10;
    piVar3 = piVar12;
    if (-0x9c369a095011bab < (long)puVar10) break;
    if ((long)puVar10 < -0x4537a5bdd09230d8) {
      if ((long)puVar10 < -0x5987c0f4f076dc6d) {
        if ((long)puVar10 < -0x69a306c562224776) {
          puVar11 = (undefined1 *)0x4357c11efd169a0;
          if (puVar10 != (undefined1 *)0x8238ab8752830617) {
            if (puVar10 == (undefined1 *)0x9141e7ccec342354) {
              uVar7 = FUN_0019925c(param_1,param_2,*unaff_x25,local_c0);
              local_98 = *plVar1;
              bVar5 = (uVar7 & 1) == 0;
              puVar10 = (undefined1 *)0x862419eaecdf1a5;
              puVar11 = (undefined1 *)0x4a5cd72dc1a18f6;
              goto LAB_00198a64;
            }
            piVar3 = (int *)((ulong)piVar8 & 0xffffffff);
            puVar11 = puVar10;
            if (puVar10 == (undefined1 *)0x8497e9c855873224) {
              if (*(long *)(local_e0 + 0x28) == local_78) {
                return local_d4 & 1;
              }
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
          }
        }
        else {
          puVar11 = (undefined1 *)0xbac85a422f6dcf28;
          if (puVar10 != &DAT_965cf93a9dddb88a) {
            piVar3 = (int *)((ulong)piVar8 & 0xffffffff);
            puVar11 = (undefined1 *)0xbca196f3040a25ee;
            if ((puVar10 != (undefined1 *)0x9c293a815f71a1ef) &&
               (piVar3 = (int *)((ulong)piVar8 & 0xffffffff), puVar11 = puVar10,
               puVar10 == (undefined1 *)0x9ea8bf2b74e4b439)) {
LAB_00198674:
              local_8c = 0;
              piVar3 = piVar12;
              puVar11 = (undefined1 *)0xe08d3eae8db4f8d9;
            }
          }
        }
      }
      else if ((long)puVar10 < -0x57ad4b5dd267bac2) {
        if (puVar10 == (undefined1 *)0xa6783f0b0f892393) {
          (**(code **)(*param_1 + 0xb8))(param_1,local_98);
          piVar3 = (int *)(ulong)local_7c;
          puVar11 = (undefined1 *)0x75ce15e08caa4c6a;
        }
        else if (puVar10 == (undefined1 *)0xa7a7e13df6ca7b84) {
          DAT_001f73c0 = DAT_001f73c0 ^ 0x37;
          DAT_001f73c1 = DAT_001f73c1 ^ 0x37;
          DAT_001f73c2 = DAT_001f73c2 ^ 0x37;
          DAT_001f73c3 = DAT_001f73c3 ^ 0x37;
          DAT_001f73c4 = DAT_001f73c4 ^ 0x37;
          DAT_001f73c5 = DAT_001f73c5 ^ 0x37;
          DAT_001f73b8 = DAT_001f73b8 ^ 0x3737373737373737;
          DAT_001f828d = '\x01';
          puVar11 = (undefined1 *)0xd4590ec1e57e5179;
        }
      }
      else {
        piVar3 = (int *)(ulong)local_7c;
        puVar11 = (undefined1 *)0x75ce15e08caa4c6a;
        if (puVar10 != (undefined1 *)0xa852b4a22d98453e) {
          if (puVar10 == (undefined1 *)0xba43a2b0d5cab0ba) {
            iVar6 = FUN_001ebe70(0,1,&DAT_001f8284);
            piVar3 = piVar12;
            puVar11 = (undefined1 *)0x7e7f415062326f70;
            if (iVar6 != 0) {
              puVar11 = (undefined1 *)0x52d98d60f83cf13e;
            }
          }
          else {
            piVar3 = piVar12;
            puVar11 = puVar10;
            if (puVar10 == (undefined1 *)0xba6e2acce79821e0) {
              puVar11 = (undefined1 *)0x8238ab8752830617;
              if (DAT_001f828e == '\0') {
                puVar11 = (undefined1 *)0x6dbb77d6245fbf6c;
              }
            }
          }
        }
      }
    }
    else if ((long)puVar10 < -0x2ba6f13e1a81ae87) {
      if ((long)puVar10 < -0x435e690cfbf5da12) {
        if (puVar10 == (undefined1 *)0xbac85a422f6dcf28) {
          *unaff_x26 = 0;
          local_b8 = *plVar2;
          puVar11 = (undefined1 *)0x5427e3fe8053026a;
          if (*plVar2 == 0 || param_1 == (long *)0x0) {
            puVar11 = (undefined1 *)0xd7a28745f3a8fb05;
          }
        }
        else if (puVar10 == (undefined1 *)0xbb472acc394b094b) {
          puVar11 = (undefined1 *)0xbca196f3040a25ee;
        }
      }
      else if (puVar10 == (undefined1 *)0xbca196f3040a25ee) {
        piVar3 = (int *)0x0;
        puVar11 = (undefined1 *)0x75ce15e08caa4c6a;
      }
      else {
        puVar11 = (undefined1 *)0xee32369f7888ebdf;
        if ((puVar10 != (undefined1 *)0xc12fb3fcfd762a6a) &&
           (puVar11 = puVar10, puVar10 == (undefined1 *)0xd0535adc928c1bbf)) {
          local_8c = 1;
          *local_c8 = *local_a0;
          puVar11 = (undefined1 *)0xe08d3eae8db4f8d9;
        }
      }
    }
    else if ((long)puVar10 < -0x1f72c151724b0727) {
      if (puVar10 == (undefined1 *)0xd4590ec1e57e5179) {
        DAT_001f8284 = 0;
        FUN_0018ef18(param_2,param_1,*unaff_x26,&DAT_001f73b8,0,local_88);
        bVar5 = *param_2 == 0;
        puVar11 = (undefined1 *)0xd57ac0afa91feda2;
        puVar10 = (undefined1 *)0xbb472acc394b094b;
        goto LAB_00197dac;
      }
      if (puVar10 == (undefined1 *)0xd57ac0afa91feda2) {
        FUN_0016cdb8(param_2,param_1,*local_88,unaff_x25);
        puVar11 = (undefined1 *)0x9141e7ccec342354;
        if (*param_2 != 0) {
          puVar11 = (undefined1 *)0xfb3a65b3fca4c172;
        }
      }
      else if (puVar10 == (undefined1 *)0xd7a28745f3a8fb05) {
LAB_00198784:
        puVar11 = (undefined1 *)0x8497e9c855873224;
      }
    }
    else if (puVar10 == (undefined1 *)0xe08d3eae8db4f8d9) {
      puVar11 = (undefined1 *)0xa6783f0b0f892393;
      if (local_98 == 0 || param_1 == (long *)0x0) {
        puVar11 = (undefined1 *)0xa852b4a22d98453e;
      }
      local_7c = local_8c;
    }
    else if (puVar10 == (undefined1 *)0xee32369f7888ebdf) {
      iVar6 = FUN_001ebe70(0,1,&DAT_001f8280);
      puVar11 = (undefined1 *)0x55488ab70f6983fa;
      if (iVar6 != 0) {
        puVar11 = (undefined1 *)0xf54be9e395389537;
      }
    }
    else if (puVar10 == (undefined1 *)0xf54be9e395389537) {
      puVar11 = (undefined1 *)0xee32369f7888ebdf;
    }
  }
  if (0x4bfd6150022cba98 < (long)puVar10) {
    if ((long)puVar10 < 0x6dbb77d6245fbf6c) {
      if ((long)puVar10 < 0x5427e3fe8053026a) {
        puVar11 = (undefined1 *)0xba43a2b0d5cab0ba;
        if ((puVar10 != (undefined1 *)0x4bfd6150022cba99) &&
           (puVar11 = puVar10, puVar10 == (undefined1 *)0x52d98d60f83cf13e)) {
          puVar11 = (undefined1 *)0xba43a2b0d5cab0ba;
        }
        goto LAB_00197db4;
      }
      if (puVar10 == (undefined1 *)0x5427e3fe8053026a) {
        (**(code **)(*param_1 + 0xb8))(param_1,local_b8);
        goto LAB_00198784;
      }
      if (puVar10 != (undefined1 *)0x55488ab70f6983fa) {
        if (puVar10 == (undefined1 *)0x5701972a5c88a65c) {
          puVar11 = (undefined1 *)0x76eec756bc9b1bd1;
        }
        goto LAB_00197db4;
      }
      puVar11 = (undefined1 *)0x5701972a5c88a65c;
      bVar5 = DAT_001f828c == '\0';
      puVar10 = (undefined1 *)0x6de583d82abca3c2;
    }
    else {
      if ((long)puVar10 < 0x76eec756bc9b1bd1) {
        if (puVar10 == (undefined1 *)0x6dbb77d6245fbf6c) {
          DAT_001f73c8 = DAT_001f73c8 ^ 0xba;
          DAT_001f73c9 = DAT_001f73c9 ^ 0xba;
          DAT_001f73ca = DAT_001f73ca ^ 0xba;
          DAT_001f73cb = DAT_001f73cb ^ 0xba;
          DAT_001f828e = '\x01';
          puVar11 = (undefined1 *)0x4357c11efd169a0;
        }
        else if (puVar10 == (undefined1 *)0x6de583d82abca3c2) {
          DAT_001f73b0 = DAT_001f73b0 ^ 0xbf;
          DAT_001f73b1 = DAT_001f73b1 ^ 0xbf;
          DAT_001f73b2 = DAT_001f73b2 ^ 0xbf;
          DAT_001f73b3 = DAT_001f73b3 ^ 0xbf;
          DAT_001f73a8 = DAT_001f73a8 ^ 0xbfbfbfbfbfbfbfbf;
          DAT_001f828c = '\x01';
          puVar11 = (undefined1 *)0x76eec756bc9b1bd1;
        }
        else if (puVar10 == (undefined1 *)0x75ce15e08caa4c6a) {
          local_d4 = (uint)piVar8;
          local_a8 = *unaff_x25;
          puVar11 = (undefined1 *)0x7f24efb1c885eb9b;
          if (*unaff_x25 == 0 || param_1 == (long *)0x0) {
            puVar11 = (undefined1 *)0xf63c965f6afee456;
          }
        }
        goto LAB_00197db4;
      }
      if (puVar10 == (undefined1 *)0x76eec756bc9b1bd1) {
        DAT_001f8280 = 0;
        local_88 = (long *)((long)plVar4 + -0x10);
        unaff_x26 = (long *)((long)plVar4 + -0x20);
        local_a0 = (undefined8 *)((long)plVar4 + -0x30);
        unaff_x25 = (long *)((long)plVar4 + -0x40);
        *(undefined8 *)((long)plVar4 + -0x10) = 0;
        *(undefined8 *)((long)plVar4 + -0x20) = 0;
        *(undefined8 *)((long)plVar4 + -0x30) = 0;
        *(undefined8 *)((long)plVar4 + -0x40) = 0;
        *(undefined8 *)((long)plVar4 + -0x50) = 0;
        local_c0 = (long *)((long)plVar4 + -0x50);
        FUN_00185628(param_2,param_1,local_d0,&DAT_001f73a8,0,unaff_x26);
        bVar5 = *param_2 == 0;
        puVar11 = (undefined1 *)0x4bfd6150022cba99;
        puVar10 = (undefined1 *)0x9c293a815f71a1ef;
        plVar4 = (long *)((long)plVar4 + -0x50);
LAB_00197dac:
        if (!bVar5) {
          puVar11 = puVar10;
        }
        goto LAB_00197db4;
      }
      if (puVar10 != (undefined1 *)0x7e7f415062326f70) {
        if (puVar10 == (undefined1 *)0x7f24efb1c885eb9b) {
          (**(code **)(*param_1 + 0xb8))(param_1,local_a8);
          puVar11 = (undefined1 *)0x33970f856d03deee;
        }
        goto LAB_00197db4;
      }
      puVar11 = (undefined1 *)0x2e7820ff94f2299e;
      bVar5 = DAT_001f828d == '\0';
      puVar10 = (undefined1 *)0xa7a7e13df6ca7b84;
    }
LAB_00198a64:
    if (bVar5) {
      puVar11 = puVar10;
    }
    goto LAB_00197db4;
  }
  if ((long)puVar10 < 0x862419eaecdf1a5) {
    if ((long)puVar10 < 0x408409b1e5ac055) {
      puVar11 = (undefined1 *)0x33970f856d03deee;
      if ((puVar10 != (undefined1 *)0xf63c965f6afee456) &&
         (puVar11 = puVar10, puVar10 == (undefined1 *)0xfb3a65b3fca4c172)) {
        *param_2 = 0x17;
        puVar11 = (undefined1 *)0xbca196f3040a25ee;
      }
      goto LAB_00197db4;
    }
    if (puVar10 == (undefined1 *)0x408409b1e5ac055) {
      iVar6 = FUN_001ebe70(0,1,&DAT_001f8288);
      puVar11 = (undefined1 *)0xba6e2acce79821e0;
      if (iVar6 != 0) {
        puVar11 = (undefined1 *)0x26c60fa523ddda4b;
      }
      goto LAB_00197db4;
    }
    if (puVar10 == (undefined1 *)0x4357c11efd169a0) {
      DAT_001f8288 = 0;
      FUN_0018bd80(param_2,param_1,local_98,&DAT_001f73c8,local_a0);
      bVar5 = *param_2 == 0;
      puVar11 = (undefined1 *)0xd0535adc928c1bbf;
      puVar10 = (undefined1 *)0x9ea8bf2b74e4b439;
      goto LAB_00197dac;
    }
    if (puVar10 != (undefined1 *)0x4a5cd72dc1a18f6) goto LAB_00197db4;
  }
  else {
    if (0x28a29c505fd0878b < (long)puVar10) {
      if (puVar10 == (undefined1 *)0x28a29c505fd0878c) {
        (**(code **)(*param_1 + 0xb8))(param_1,local_b0);
        puVar11 = (undefined1 *)0xbac85a422f6dcf28;
      }
      else {
        puVar11 = (undefined1 *)0xd4590ec1e57e5179;
        if ((puVar10 != (undefined1 *)0x2e7820ff94f2299e) &&
           (puVar11 = puVar10, puVar10 == (undefined1 *)0x33970f856d03deee)) {
          lVar9 = *unaff_x26;
          *unaff_x25 = 0;
          local_b0 = lVar9;
          puVar11 = (undefined1 *)0x28a29c505fd0878c;
          if (lVar9 == 0 || param_1 == (long *)0x0) {
            puVar11 = &DAT_965cf93a9dddb88a;
          }
        }
      }
      goto LAB_00197db4;
    }
    if (puVar10 == (undefined1 *)0x862419eaecdf1a5) goto LAB_00198674;
    if (puVar10 != (undefined1 *)0x26c60fa523ddda4b) goto LAB_00197db4;
  }
  puVar11 = (undefined1 *)0x408409b1e5ac055;
  goto LAB_00197db4;
}


