// Function: FUN_0019dedc
// Entry: 0019dedc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0019dedc(ulong param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  ssize_t sVar5;
  undefined1 *puVar6;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong uVar7;
  undefined1 auStack_1890 [2047];
  undefined1 local_1091;
  undefined7 local_1090;
  undefined4 uStack_1089;
  undefined1 auStack_1080 [4096];
  long local_80;
  
  lVar1 = tpidr_el0;
  local_80 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined1 *)0x5e1b922e6e5165fd;
LAB_0019dfc4:
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (puVar6 = puVar2, puVar2 = puVar6, -0x1adb7dcf41534881 < (long)puVar6) {
            if ((long)puVar6 < 0x2ac799c399899ac3) {
              if ((long)puVar6 < 0x2b590051c346d3e) {
                if (puVar6 == (undefined1 *)0xe5248230beacb780) {
                  _DAT_001f7400 = _DAT_001f7400 ^ 0xa9a9a9a9a9a9a9a9;
                  uRam00000000001f7408 = uRam00000000001f7408 ^ 0xa9a9a9a9a9a9a9a9;
                  DAT_001f82bb = '\x01';
                  puVar2 = (undefined1 *)0xf8b8c954db367ca1;
                }
                else if (puVar6 == (undefined1 *)0xe86a3cb2672328c3) {
                  param_1 = FUN_001c99d0(unaff_x23 + 10);
                  puVar2 = (undefined1 *)0x82d6800f37fa837b;
                  if ((int)param_1 != 0) {
                    puVar2 = (undefined1 *)0x55d58c2b8d472655;
                  }
                }
                else if (puVar6 == (undefined1 *)0xf8b8c954db367ca1) {
                  DAT_001f82b0 = 0;
                  uVar3 = FUN_001d8714();
                  FUN_001cc250(auStack_1890,0,0x800);
                  memset(auStack_1080,0,0x1000);
                  param_1 = FUN_001c9940(auStack_1080,0x1000,&DAT_001f7400,uVar3);
                  puVar2 = (undefined1 *)0xd937f9741a083d9f;
                  if ((int)param_1 < 0x1000) {
                    puVar2 = (undefined1 *)0x4c1b9edb721e7222;
                  }
                }
              }
              else if ((long)puVar6 < 0x1db1d1f44155ec69) {
                puVar2 = (undefined1 *)0xdbbbecaa54122c5b;
                if ((puVar6 != &DAT_2b590051c346d3e) &&
                   (puVar2 = puVar6, puVar6 == &DAT_1b767e91f4196530)) {
                  param_1 = FUN_001ebe70(0,1,&DAT_001f82ac);
                  puVar2 = (undefined1 *)0x2ac799c399899ac3;
                  if ((int)param_1 != 0) {
                    puVar2 = (undefined1 *)0x8b5d2aa4730e6d53;
                  }
                }
              }
              else if (puVar6 == (undefined1 *)0x1db1d1f44155ec69) {
                DAT_001f82ac = 0;
                local_1091 = 0;
                uStack_1089 = CONCAT13(DAT_001f73f2,
                                       CONCAT12(DAT_001f73f1,
                                                CONCAT11(DAT_001f73f0,DAT_001f73e8._7_1_)));
                local_1090 = (undefined7)DAT_001f73e8;
                param_1 = FUN_001cac50(auStack_1890,&local_1090);
                puVar2 = (undefined1 *)0x87fde1166a77f06e;
                unaff_x23 = param_1;
                if (param_1 != 0) {
                  puVar2 = (undefined1 *)0xe86a3cb2672328c3;
                }
              }
              else if (puVar6 == (undefined1 *)0x2467c250713f82d4) {
                puVar2 = (undefined1 *)0xa0d7c67c60e7a82e;
              }
            }
            else if ((long)puVar6 < 0x55d58c2b8d472655) {
              if (puVar6 == (undefined1 *)0x2ac799c399899ac3) {
                puVar2 = (undefined1 *)0x9173a1fc59339595;
                if (DAT_001f82ba == '\0') {
                  puVar2 = (undefined1 *)0xd136b47bc732bd2b;
                }
              }
              else if (puVar6 == (undefined1 *)0x43d4efcefc88fa10) {
                puVar2 = (undefined1 *)0xcc4911e8d0a08389;
                if (DAT_001f82bb == '\0') {
                  puVar2 = (undefined1 *)0xe5248230beacb780;
                }
              }
              else if (puVar6 == (undefined1 *)0x4c1b9edb721e7222) {
                param_1 = __open_2(auStack_1080,0);
                unaff_x22 = param_1 & 0xffffffff;
                puVar2 = &DAT_2b590051c346d3e;
                if ((int)param_1 != -1) {
                  puVar2 = (undefined1 *)0xc0eb019135e10a40;
                }
              }
            }
            else if ((long)puVar6 < 0x5e1b922e6e5165fd) {
              if (puVar6 == (undefined1 *)0x55d58c2b8d472655) {
                DAT_001f82b9 = '\x01';
                puVar2 = (undefined1 *)0x57dab7dd661b1869;
              }
              else if (puVar6 == (undefined1 *)0x57dab7dd661b1869) {
                if (*(long *)(lVar1 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
                  __stack_chk_fail(param_1);
                }
                return;
              }
            }
            else if (puVar6 == (undefined1 *)0x5e9249b5376f08fa) {
              puVar2 = (undefined1 *)0x57dab7dd661b1869;
            }
            else if (puVar6 == (undefined1 *)0x5e1b922e6e5165fd) {
              puVar2 = (undefined1 *)0xde0600f0ca761eb9;
              if (DAT_001f82b9 == '\0') {
                puVar2 = (undefined1 *)0xe156d0b4a667ab8e;
              }
            }
          }
          if (-0x3f14fe6eca1ef5c1 < (long)puVar6) break;
          if ((long)puVar6 < -0x74a2d55b8cf192ad) goto LAB_0019e1fc;
          if ((long)puVar6 < -0x6cd9a9100255155b) {
            puVar2 = &DAT_1b767e91f4196530;
            if ((puVar6 != (undefined1 *)0x8b5d2aa4730e6d53) &&
               (puVar2 = puVar6, puVar6 == (undefined1 *)0x9173a1fc59339595)) {
              puVar2 = (undefined1 *)0x1db1d1f44155ec69;
            }
          }
          else {
            puVar2 = &DAT_1b767e91f4196530;
            if ((puVar6 != (undefined1 *)0x932656effdaaeaa5) &&
               (puVar2 = puVar6, puVar6 == (undefined1 *)0xa0d7c67c60e7a82e)) {
              param_1 = FUN_001ebe70(0,1,&DAT_001f82b0);
              puVar2 = (undefined1 *)0x43d4efcefc88fa10;
              if ((int)param_1 != 0) {
                puVar2 = (undefined1 *)0x2467c250713f82d4;
              }
            }
          }
        }
        if (-0x26c8068be5f7c262 < (long)puVar6) break;
        if (puVar6 == (undefined1 *)0xc0eb019135e10a40) {
          sVar5 = read((int)unaff_x22,auStack_1890,0x800);
          uVar4 = close((int)unaff_x22);
          param_1 = (ulong)uVar4;
          puVar2 = (undefined1 *)0x8b1dacf6763fda11;
          if (sVar5 != -1) {
            puVar2 = (undefined1 *)0x932656effdaaeaa5;
          }
        }
        else {
          puVar2 = (undefined1 *)0xf8b8c954db367ca1;
          if ((puVar6 != (undefined1 *)0xcc4911e8d0a08389) &&
             (puVar2 = puVar6, puVar6 == (undefined1 *)0xd136b47bc732bd2b)) {
            DAT_001f73f0 = DAT_001f73f0 ^ 0xe0;
            DAT_001f73f2 = DAT_001f73f2 ^ 0xe0;
            DAT_001f73f1 = DAT_001f73f1 ^ 0xe0;
            uVar7 = CONCAT17(DAT_001f73e8._7_1_,(undefined7)DAT_001f73e8) ^ 0xe0e0e0e0e0e0e0e0;
            DAT_001f73e8._0_7_ = (undefined7)uVar7;
            DAT_001f73e8._7_1_ = (undefined1)(uVar7 >> 0x38);
            DAT_001f82ba = '\x01';
            puVar2 = (undefined1 *)0x1db1d1f44155ec69;
          }
        }
      }
      if ((long)puVar6 < -0x21f9ff0f3589e147) break;
      puVar2 = (undefined1 *)0x57dab7dd661b1869;
      if ((puVar6 != (undefined1 *)0xde0600f0ca761eb9) &&
         (puVar2 = puVar6, puVar6 == (undefined1 *)0xe156d0b4a667ab8e)) {
        puVar2 = (undefined1 *)0xa0d7c67c60e7a82e;
      }
    }
    puVar2 = (undefined1 *)0xdbbbecaa54122c5b;
  } while ((puVar6 == (undefined1 *)0xd937f9741a083d9f) ||
          (puVar2 = puVar6, puVar6 != (undefined1 *)0xdbbbecaa54122c5b));
  goto LAB_0019e258;
LAB_0019e1fc:
  puVar2 = (undefined1 *)0x57dab7dd661b1869;
  if (((puVar6 != (undefined1 *)0x82d6800f37fa837b) &&
      (puVar2 = (undefined1 *)0x5e9249b5376f08fa, puVar6 != (undefined1 *)0x87fde1166a77f06e)) &&
     (puVar2 = puVar6, puVar6 == (undefined1 *)0x8b1dacf6763fda11)) {
LAB_0019e258:
    puVar2 = (undefined1 *)0x5e9249b5376f08fa;
  }
  goto LAB_0019dfc4;
}


