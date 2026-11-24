// Function: FUN_00118f64
// Entry: 00118f64

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00118f64(undefined4 *param_1,long *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined4 unaff_w21;
  undefined1 *unaff_x23;
  long *plVar5;
  long unaff_x24;
  int unaff_w25;
  long local_80;
  undefined4 *local_78;
  long *local_70;
  long local_68;
  
  plVar5 = &local_80;
  local_80 = tpidr_el0;
  local_68 = *(long *)(local_80 + 0x28);
  puVar1 = (undefined1 *)0xf8b8c954db367ca1;
  local_78 = param_1;
  local_70 = param_2;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (puVar4 = puVar1, puVar1 = puVar4, -0x1795c34d98dcd73e < (long)puVar4) {
            if ((long)puVar4 < 0x1b767e91f4196530) {
              puVar1 = (undefined1 *)0xc0eb019135e10a40;
              if (((puVar4 != (undefined1 *)0xe86a3cb2672328c3) &&
                  (puVar1 = (undefined1 *)0xd937f9741a083d9f,
                  puVar4 != (undefined1 *)0xf8b8c954db367ca1)) &&
                 (puVar1 = puVar4, puVar4 == &DAT_2b590051c346d3e)) {
                DAT_001f5460 = DAT_001f5460 ^ 0xa2;
                DAT_001f5462 = DAT_001f5462 ^ 0xa2;
                DAT_001f5461 = DAT_001f5461 ^ 0xa2;
                _DAT_001f5450 = _DAT_001f5450 ^ 0xa2a2a2a2a2a2a2a2;
                uRam00000000001f5458 = uRam00000000001f5458 ^ 0xa2a2a2a2a2a2a2a2;
                DAT_001f7bc0._0_2_ = CONCAT11(1,(undefined1)DAT_001f7bc0);
                puVar1 = (undefined1 *)0xc0eb019135e10a40;
              }
            }
            else if ((long)puVar4 < 0x4c1b9edb721e7222) {
              if (puVar4 == &DAT_1b767e91f4196530) {
                lVar3 = FUN_001cdd28(unaff_x23,unaff_x24);
                puVar1 = (undefined1 *)0xd136b47bc732bd2b;
                if (lVar3 != 0) {
                  puVar1 = (undefined1 *)0x8b5d2aa4730e6d53;
                }
                *local_70 = lVar3;
              }
              else if (puVar4 == (undefined1 *)0x1db1d1f44155ec69) {
                *local_78 = unaff_w21;
                puVar1 = (undefined1 *)0x87fde1166a77f06e;
              }
            }
            else {
              puVar1 = (undefined1 *)0xd937f9741a083d9f;
              if ((puVar4 != (undefined1 *)0x4c1b9edb721e7222) &&
                 (puVar1 = puVar4, puVar4 == (undefined1 *)0x5e9249b5376f08fa)) {
                puVar1 = (undefined1 *)0xe86a3cb2672328c3;
                if (DAT_001f7bc0._1_1_ == '\0') {
                  puVar1 = &DAT_2b590051c346d3e;
                }
              }
            }
          }
          if ((long)puVar4 < -0x3f14fe6eca1ef5c0) break;
          if ((long)puVar4 < -0x26c8068be5f7c261) {
            if (puVar4 == (undefined1 *)0xc0eb019135e10a40) {
              plVar5 = (long *)((long)plVar5 + -0x1000);
              DAT_001f7bc0 = 0;
              unaff_w25 = FUN_001d8250(&DAT_001f5450,0);
              puVar1 = (undefined1 *)0x8b1dacf6763fda11;
              unaff_x23 = (undefined1 *)plVar5;
              if (unaff_w25 != -1) {
                puVar1 = (undefined1 *)0xdbbbecaa54122c5b;
              }
            }
            else if (puVar4 == (undefined1 *)0xd136b47bc732bd2b) {
              unaff_w21 = 2;
              puVar1 = (undefined1 *)0x1db1d1f44155ec69;
            }
          }
          else if (puVar4 == (undefined1 *)0xd937f9741a083d9f) {
            iVar2 = FUN_001ebe70(0,1,&DAT_001f7bc0);
            puVar1 = (undefined1 *)0x5e9249b5376f08fa;
            if (iVar2 != 0) {
              puVar1 = (undefined1 *)0x4c1b9edb721e7222;
            }
          }
          else if (puVar4 == (undefined1 *)0xdbbbecaa54122c5b) {
            unaff_x24 = FUN_001d853c(unaff_w25,unaff_x23,0xfff);
            FUN_001d8554(unaff_w25);
            puVar1 = (undefined1 *)0x932656effdaaeaa5;
            if (unaff_x24 != 0) {
              puVar1 = &DAT_1b767e91f4196530;
            }
          }
        }
        if ((long)puVar4 < -0x74a2d55b8cf192ad) break;
        puVar1 = (undefined1 *)0x87fde1166a77f06e;
        if ((puVar4 != (undefined1 *)0x8b5d2aa4730e6d53) &&
           (puVar1 = puVar4, puVar4 == (undefined1 *)0x932656effdaaeaa5)) {
          unaff_w21 = 0xc;
          puVar1 = (undefined1 *)0x1db1d1f44155ec69;
        }
      }
      if (puVar4 != (undefined1 *)0x8b1dacf6763fda11) break;
      unaff_w21 = 8;
      puVar1 = (undefined1 *)0x1db1d1f44155ec69;
    }
  } while (puVar4 != (undefined1 *)0x87fde1166a77f06e);
  if (*(long *)(local_80 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


