// Function: FUN_0019fa18
// Entry: 0019fa18

uint FUN_0019fa18(undefined4 *param_1,char *param_2)

{
  dirent *pdVar1;
  char *pcVar2;
  long lVar3;
  dirent *pdVar4;
  dirent *pdVar5;
  dirent *pdVar6;
  bool bVar7;
  int iVar8;
  dirent *__dirp;
  ssize_t sVar9;
  long lVar10;
  dirent *extraout_x1;
  dirent *pdVar11;
  dirent *pdVar12;
  dirent *pdVar13;
  dirent *pdVar14;
  dirent *pdVar15;
  dirent *local_20b8;
  uint local_20ac;
  char *local_20a8;
  dirent *local_20a0;
  dirent *local_2098;
  uint local_2084;
  char acStack_2080 [4096];
  char acStack_1080 [4096];
  long local_80;
  
  lVar3 = tpidr_el0;
  local_80 = *(long *)(lVar3 + 0x28);
  __dirp = (dirent *)opendir(param_2);
  pdVar1 = (dirent *)0xe86a3cb2672328c3;
  if (__dirp != (dirent *)0x0) {
    pdVar1 = (dirent *)0x1db1d1f44155ec69;
  }
  pdVar4 = __dirp;
  pdVar5 = extraout_x1;
  pdVar6 = pdVar1;
  pdVar15 = (dirent *)0xd136b47bc732bd2b;
LAB_0019fb64:
  pdVar14 = pdVar15;
  pdVar12 = pdVar6;
  pdVar11 = pdVar5;
  pdVar13 = pdVar4;
  pdVar4 = pdVar13;
  pdVar5 = pdVar11;
  pdVar6 = pdVar12;
  pdVar15 = pdVar14;
  if ((long)pdVar14 < -0xab4161c6ac76ac9) {
    if (-0x44b8d533c6b4f6b6 < (long)pdVar14) {
      if ((long)pdVar14 < -0x2ba6f13e1a81ae87) {
        if ((long)pdVar14 < -0x33b6ee172f5f7c77) {
          pdVar15 = (dirent *)0xd4590ec1e57e5179;
          if (pdVar14 != (dirent *)0xbb472acc394b094b) {
            if (pdVar14 == (dirent *)0xbca196f3040a25ee) goto LAB_001a04ec;
            pdVar15 = pdVar14;
            if (pdVar14 == (dirent *)0xc12fb3fcfd762a6a) {
              iVar8 = FUN_001ebe70(0,1,&DAT_001f82d8);
              bVar7 = iVar8 == 0;
              pdVar13 = (dirent *)0xee32369f7888ebdf;
              pdVar15 = (dirent *)0x7f24efb1c885eb9b;
              goto LAB_0019fb58;
            }
          }
        }
        else {
          pdVar15 = (dirent *)0xc12fb3fcfd762a6a;
          if (((pdVar14 != (dirent *)0xcc4911e8d0a08389) &&
              (pdVar4 = local_20a0, pdVar15 = (dirent *)0x52d98d60f83cf13e,
              pdVar14 != (dirent *)0xd0535adc928c1bbf)) &&
             (pdVar4 = pdVar13, pdVar15 = pdVar14, pdVar14 == (dirent *)0xd136b47bc732bd2b)) {
            pdVar15 = pdVar1;
          }
        }
      }
      else if ((long)pdVar14 < -0x1f72c151724b0727) {
        if (pdVar14 == (dirent *)0xd4590ec1e57e5179) {
          iVar8 = FUN_001ebe70(0,1,&DAT_001f82dc);
          pdVar15 = (dirent *)&DAT_965cf93a9dddb88a;
          if (iVar8 != 0) {
            pdVar15 = (dirent *)0xbb472acc394b094b;
          }
        }
        else if (pdVar14 == (dirent *)0xd57ac0afa91feda2) {
          DAT_001f742d = DAT_001f742d ^ 0x58;
          DAT_001f742c = DAT_001f742c ^ 0x58;
          DAT_001f742e = DAT_001f742e ^ 0x58;
          DAT_001f742f = DAT_001f742f ^ 0x58;
          DAT_001f7430 = DAT_001f7430 ^ 0x58;
          DAT_001f7431 = DAT_001f7431 ^ 0x58;
          DAT_001f82fe = '\x01';
          pdVar15 = (dirent *)0xfb3a65b3fca4c172;
        }
        else if (pdVar14 == (dirent *)0xd7a28745f3a8fb05) {
          pdVar15 = (dirent *)0x26c60fa523ddda4b;
        }
      }
      else {
        if (pdVar14 == (dirent *)0xe08d3eae8db4f8d9) goto LAB_001a05a4;
        if (pdVar14 == (dirent *)0xe86a3cb2672328c3) {
          local_20ac = 0;
          *param_1 = 7;
          pdVar15 = (dirent *)0xa6783f0b0f892393;
        }
        else if (pdVar14 == (dirent *)0xee32369f7888ebdf) {
          pdVar15 = (dirent *)0xc12fb3fcfd762a6a;
        }
      }
      goto LAB_0019fb64;
    }
    if (-0x615740d48b1b4bc8 < (long)pdVar14) {
      if ((long)pdVar14 < -0x57ad4b5dd267bac2) {
        if (pdVar14 == (dirent *)0x9ea8bf2b74e4b439) {
          local_20a0 = readdir((DIR *)__dirp);
          bVar7 = local_20a0 == (dirent *)0x0;
          pdVar13 = (dirent *)0xd0535adc928c1bbf;
          pdVar15 = (dirent *)0xbca196f3040a25ee;
          goto LAB_0019fb58;
        }
        if (pdVar14 == (dirent *)0xa7a7e13df6ca7b84) {
          pdVar15 = (dirent *)0xd4590ec1e57e5179;
        }
        else if (pdVar14 == (dirent *)0xa6783f0b0f892393) {
          if (*(long *)(lVar3 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return local_20ac & 1;
        }
      }
      else if (pdVar14 == (dirent *)0xa852b4a22d98453e) {
        closedir((DIR *)__dirp);
        local_20ac = local_2084;
        pdVar15 = (dirent *)0xa6783f0b0f892393;
      }
      else if (pdVar14 == (dirent *)0xba43a2b0d5cab0ba) {
LAB_001a04ec:
        local_2084 = 0;
LAB_001a0758:
        pdVar15 = (dirent *)0xa852b4a22d98453e;
      }
      else if (pdVar14 == (dirent *)0xbac85a422f6dcf28) {
        pdVar15 = (dirent *)0xd7a28745f3a8fb05;
        if (DAT_001f82ff == '\0') {
          pdVar15 = (dirent *)0x408409b1e5ac055;
        }
      }
      goto LAB_0019fb64;
    }
    if ((long)pdVar14 < -0x6e8c5e03a6cc6a6b) {
      pdVar6 = pdVar11;
      pdVar15 = (dirent *)0x55d58c2b8d472655;
      if (((pdVar14 != (dirent *)0x82d6800f37fa837b) &&
          (pdVar5 = local_2098, pdVar6 = pdVar12, pdVar15 = (dirent *)0x82d6800f37fa837b,
          pdVar14 != (dirent *)0x87fde1166a77f06e)) &&
         (pdVar5 = pdVar11, pdVar15 = pdVar14, pdVar14 == (dirent *)0x9141e7ccec342354)) {
        pdVar15 = (dirent *)0x862419eaecdf1a5;
      }
      goto LAB_0019fb64;
    }
    if (pdVar14 == (dirent *)0x9173a1fc59339595) {
      local_20a8 = pdVar12->d_name;
      DAT_001f82d0 = 0;
      iVar8 = FUN_001cb714(local_20a8,&DAT_001f7424);
      bVar7 = iVar8 == 0;
      pdVar13 = (dirent *)0xcc4911e8d0a08389;
      pdVar15 = (dirent *)0x43d4efcefc88fa10;
      goto LAB_0019fb58;
    }
    if (pdVar14 == (dirent *)&DAT_965cf93a9dddb88a) {
      pdVar15 = (dirent *)0x28a29c505fd0878c;
      if (DAT_001f82fe == '\0') {
        pdVar15 = (dirent *)0xd57ac0afa91feda2;
      }
      goto LAB_0019fb64;
    }
    if (pdVar14 != (dirent *)0x9c293a815f71a1ef) goto LAB_0019fb64;
    local_20b8 = readdir((DIR *)__dirp);
    bVar7 = local_20b8 == (dirent *)0x0;
    pdVar13 = (dirent *)0x4bfd6150022cba99;
    pdVar15 = (dirent *)0xba43a2b0d5cab0ba;
  }
  else if ((long)pdVar14 < 0x33970f856d03deee) {
    if ((long)pdVar14 < 0x4a5cd72dc1a18f6) {
      if ((long)pdVar14 < -0x4c59a4c035b3e8e) {
        if (pdVar14 == (dirent *)0xf54be9e395389537) {
          DAT_001f7428 = DAT_001f7428 ^ 0xc9;
          DAT_001f7429 = DAT_001f7429 ^ 0xc9;
          DAT_001f742a = DAT_001f742a ^ 0xc9;
          DAT_001f82fd = '\x01';
          pdVar15 = (dirent *)0x6de583d82abca3c2;
        }
        else if (pdVar14 == (dirent *)0xf63c965f6afee456) {
          pdVar15 = (dirent *)0x9173a1fc59339595;
        }
      }
      else if (pdVar14 == (dirent *)0xfb3a65b3fca4c172) {
        DAT_001f82dc = 0;
        FUN_001c9940(acStack_1080,0x1000,&DAT_001f742c,param_2,local_20a8);
        memset(acStack_2080,0,0x1000);
        sVar9 = readlink(acStack_1080,acStack_2080,0xfff);
        pdVar15 = (dirent *)0xe08d3eae8db4f8d9;
        if (-1 < sVar9) {
          pdVar15 = (dirent *)0x9141e7ccec342354;
        }
      }
      else if (pdVar14 == (dirent *)0x408409b1e5ac055) {
        DAT_001f7440 = DAT_001f7440 ^ 0x65;
        DAT_001f7438 = DAT_001f7438 ^ 0x6565656565656565;
        DAT_001f82ff = '\x01';
        pdVar15 = (dirent *)0x26c60fa523ddda4b;
      }
      else if (pdVar14 == (dirent *)0x4357c11efd169a0) {
LAB_001a05a4:
        pdVar15 = (dirent *)0x9ea8bf2b74e4b439;
      }
      goto LAB_0019fb64;
    }
    if (0x26c60fa523ddda4a < (long)pdVar14) {
      if (pdVar14 == (dirent *)0x26c60fa523ddda4b) {
        DAT_001f82e0 = 0;
        lVar10 = FUN_001ccc8c(acStack_2080,0x2f);
        pcVar2 = acStack_2080;
        if (lVar10 != 0) {
          pcVar2 = (char *)(lVar10 + 1);
        }
        lVar10 = FUN_001cac50(pcVar2,&DAT_001f7438);
        pdVar15 = (dirent *)0x4357c11efd169a0;
        if (lVar10 != 0) {
          pdVar15 = (dirent *)0x6dbb77d6245fbf6c;
        }
      }
      else {
        pdVar15 = (dirent *)0xfb3a65b3fca4c172;
        if ((pdVar14 != (dirent *)0x28a29c505fd0878c) &&
           (pdVar15 = pdVar14, pdVar14 == (dirent *)0x2ac799c399899ac3)) {
          DAT_001f7424 = DAT_001f7424 ^ 0x99;
          DAT_001f7425 = DAT_001f7425 ^ 0x99;
          DAT_001f82f8._3_1_ = '\x01';
          pdVar15 = (dirent *)0x9173a1fc59339595;
        }
      }
      goto LAB_0019fb64;
    }
    pdVar15 = (dirent *)0x862419eaecdf1a5;
    if (pdVar14 == (dirent *)0x4a5cd72dc1a18f6) goto LAB_0019fb64;
    if (pdVar14 == (dirent *)0x862419eaecdf1a5) {
      iVar8 = FUN_001ebe70(0,1,&DAT_001f82e0);
      pdVar15 = (dirent *)0xbac85a422f6dcf28;
      if (iVar8 != 0) {
        pdVar15 = (dirent *)0x4a5cd72dc1a18f6;
      }
      goto LAB_0019fb64;
    }
    pdVar15 = pdVar14;
    if (pdVar14 != (dirent *)0x1db1d1f44155ec69) goto LAB_0019fb64;
    local_2098 = readdir((DIR *)__dirp);
    bVar7 = local_2098 == (dirent *)0x0;
    pdVar13 = (dirent *)0x87fde1166a77f06e;
    pdVar15 = (dirent *)0x5e9249b5376f08fa;
  }
  else if ((long)pdVar14 < 0x5e9249b5376f08fa) {
    if ((long)pdVar14 < 0x52d98d60f83cf13e) {
      pdVar15 = (dirent *)0x6de583d82abca3c2;
      if (((pdVar14 != (dirent *)0x33970f856d03deee) &&
          (pdVar15 = (dirent *)0x9c293a815f71a1ef, pdVar14 != (dirent *)0x43d4efcefc88fa10)) &&
         (pdVar15 = pdVar14, pdVar14 == (dirent *)0x4bfd6150022cba99)) {
        pdVar4 = local_20b8;
        pdVar15 = (dirent *)0x52d98d60f83cf13e;
      }
      goto LAB_0019fb64;
    }
    pdVar5 = pdVar13;
    pdVar15 = (dirent *)0x82d6800f37fa837b;
    if (pdVar14 == (dirent *)0x52d98d60f83cf13e) goto LAB_0019fb64;
    if (pdVar14 != (dirent *)0x55d58c2b8d472655) {
      pdVar5 = pdVar11;
      pdVar15 = pdVar14;
      if (pdVar14 == (dirent *)0x57dab7dd661b1869) {
        pdVar15 = (dirent *)0x55d58c2b8d472655;
      }
      goto LAB_0019fb64;
    }
    iVar8 = FUN_001ebe70(0,1,&DAT_001f82d0);
    pdVar13 = (dirent *)0x57dab7dd661b1869;
    pdVar15 = (dirent *)0x75ce15e08caa4c6a;
    bVar7 = iVar8 == 0;
  }
  else {
    if (0x75ce15e08caa4c69 < (long)pdVar14) {
      if (pdVar14 == (dirent *)0x75ce15e08caa4c6a) {
        pdVar15 = (dirent *)0xf63c965f6afee456;
        if (DAT_001f82f8._3_1_ == '\0') {
          pdVar15 = (dirent *)0x2ac799c399899ac3;
        }
      }
      else {
        pdVar15 = (dirent *)0x9c293a815f71a1ef;
        if ((pdVar14 != (dirent *)0x76eec756bc9b1bd1) &&
           (pdVar15 = pdVar14, pdVar14 == (dirent *)0x7f24efb1c885eb9b)) {
          pdVar15 = (dirent *)0x33970f856d03deee;
          if (DAT_001f82fd == '\0') {
            pdVar15 = (dirent *)0xf54be9e395389537;
          }
        }
      }
      goto LAB_0019fb64;
    }
    if (pdVar14 == (dirent *)0x5e9249b5376f08fa) goto LAB_001a04ec;
    if (pdVar14 == (dirent *)0x6dbb77d6245fbf6c) {
      local_2084 = 1;
      goto LAB_001a0758;
    }
    if (pdVar14 != (dirent *)0x6de583d82abca3c2) goto LAB_0019fb64;
    DAT_001f82d8 = 0;
    iVar8 = FUN_001cb714(local_20a8,&DAT_001f7428);
    bVar7 = iVar8 == 0;
    pdVar13 = (dirent *)0xa7a7e13df6ca7b84;
    pdVar15 = (dirent *)0x76eec756bc9b1bd1;
  }
LAB_0019fb58:
  pdVar5 = pdVar11;
  if (!bVar7) {
    pdVar15 = pdVar13;
  }
  goto LAB_0019fb64;
}


