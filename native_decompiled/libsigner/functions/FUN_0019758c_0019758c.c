// Function: FUN_0019758c
// Entry: 0019758c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0019758c(long *param_1,int *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  uint unaff_w26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 local_b0 [4];
  undefined1 auStack_90 [8];
  long local_88;
  uint local_7c;
  undefined8 *local_78;
  long local_70;
  long local_68;
  
  local_78 = param_3;
  local_88 = tpidr_el0;
  local_68 = *(long *)(local_88 + 0x28);
  puVar2 = (undefined8 *)auStack_90;
  puVar1 = (undefined1 *)0xe5248230beacb780;
LAB_00197668:
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (puVar4 = puVar1, puVar1 = puVar4, -0x1adb7dcf41534881 < (long)puVar4) {
            if ((long)puVar4 < 0x2ac799c399899ac3) {
              if ((long)puVar4 < 0x2b590051c346d3e) {
                puVar1 = (undefined1 *)0xf8b8c954db367ca1;
                if (puVar4 != (undefined1 *)0xe5248230beacb780) {
                  if (puVar4 == (undefined1 *)0xe86a3cb2672328c3) {
                    local_7c = unaff_w26;
                    local_70 = *unaff_x27;
                    puVar1 = (undefined1 *)0x55d58c2b8d472655;
                    if (*unaff_x27 == 0 || param_1 == (long *)0x0) {
                      puVar1 = (undefined1 *)0x82d6800f37fa837b;
                    }
                  }
                  else {
                    puVar1 = puVar4;
                    if (puVar4 == (undefined1 *)0xf8b8c954db367ca1) {
                      iVar3 = FUN_001ebe70(0,1,&DAT_001f8274);
                      puVar1 = (undefined1 *)0x2ac799c399899ac3;
                      if (iVar3 != 0) {
                        puVar1 = (undefined1 *)0xd937f9741a083d9f;
                      }
                    }
                  }
                }
              }
              else if (puVar4 == &DAT_2b590051c346d3e) {
                DAT_001f8274 = 0;
                unaff_x27 = puVar2 + -2;
                unaff_x28 = puVar2 + -4;
                puVar2[-2] = 0;
                puVar2[-4] = 0;
                FUN_001753c4(param_2,param_1,&DAT_001f7370,unaff_x27);
                puVar2 = unaff_x28;
                puVar1 = (undefined1 *)0x8b1dacf6763fda11;
                if (*param_2 != 0) {
                  puVar1 = (undefined1 *)0xc0eb019135e10a40;
                }
              }
              else if (puVar4 == &DAT_1b767e91f4196530) {
                iVar3 = FUN_001ebe70(0,1,&DAT_001f8278);
                puVar1 = (undefined1 *)0x43d4efcefc88fa10;
                if (iVar3 != 0) {
                  puVar1 = (undefined1 *)0x8b5d2aa4730e6d53;
                }
              }
              else if (puVar4 == (undefined1 *)0x1db1d1f44155ec69) {
                DAT_001f8278 = 0;
                FUN_00177b78(param_2,param_1,*unaff_x27,&DAT_001f7380,0,unaff_x28);
                puVar1 = (undefined1 *)0x5e9249b5376f08fa;
                if (*param_2 != 0) {
                  puVar1 = (undefined1 *)0x87fde1166a77f06e;
                }
              }
            }
            else if ((long)puVar4 < 0x55d58c2b8d472655) {
              if (puVar4 == (undefined1 *)0x2ac799c399899ac3) {
                puVar1 = (undefined1 *)0x9173a1fc59339595;
                if (DAT_001f8288._1_1_ == '\0') {
                  puVar1 = (undefined1 *)0x4c1b9edb721e7222;
                }
              }
              else if (puVar4 == (undefined1 *)0x43d4efcefc88fa10) {
                puVar1 = (undefined1 *)0xcc4911e8d0a08389;
                if (DAT_001f8288._2_1_ == '\0') {
                  puVar1 = (undefined1 *)0xd136b47bc732bd2b;
                }
              }
              else if (puVar4 == (undefined1 *)0x4c1b9edb721e7222) {
                _DAT_001f7370 = _DAT_001f7370 ^ 0x9d9d9d9d9d9d9d9d;
                uRam00000000001f7378 = uRam00000000001f7378 ^ 0x9d9d9d9d9d9d9d9d;
                DAT_001f8288._1_1_ = '\x01';
                puVar1 = &DAT_2b590051c346d3e;
              }
            }
            else if (puVar4 == (undefined1 *)0x55d58c2b8d472655) {
              (**(code **)(*param_1 + 0xb8))(param_1,local_70);
              puVar1 = (undefined1 *)0x57dab7dd661b1869;
            }
            else if (puVar4 == (undefined1 *)0x5e9249b5376f08fa) {
              unaff_w26 = 1;
              *local_78 = *unaff_x28;
              puVar1 = (undefined1 *)0xe86a3cb2672328c3;
            }
            else if (puVar4 == (undefined1 *)0x57dab7dd661b1869) {
              if (*(long *)(local_88 + 0x28) == local_68) {
                return local_7c & 1;
              }
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
          }
          if (-0x6cd9a9100255155c < (long)puVar4) break;
          if ((long)puVar4 < -0x74e2530989c025ef) goto LAB_00197624;
          if (puVar4 == (undefined1 *)0x8b1dacf6763fda11) {
            FUN_0017636c(param_2,param_1,*unaff_x27,0);
            puVar1 = (undefined1 *)0x932656effdaaeaa5;
            if (*param_2 != 0) {
              puVar1 = (undefined1 *)0xdbbbecaa54122c5b;
            }
          }
          else {
            puVar1 = &DAT_1b767e91f4196530;
            if ((puVar4 != (undefined1 *)0x8b5d2aa4730e6d53) &&
               (puVar1 = puVar4, puVar4 == (undefined1 *)0x9173a1fc59339595)) {
              puVar1 = &DAT_2b590051c346d3e;
            }
          }
        }
        if (-0x2ec94b8438cd42d6 < (long)puVar4) break;
        puVar1 = &DAT_1b767e91f4196530;
        if (puVar4 != (undefined1 *)0x932656effdaaeaa5) {
          if (puVar4 == (undefined1 *)0xc0eb019135e10a40) goto LAB_001979d0;
          puVar1 = puVar4;
          if (puVar4 == (undefined1 *)0xcc4911e8d0a08389) {
            puVar1 = (undefined1 *)0x1db1d1f44155ec69;
          }
        }
      }
      if (puVar4 != (undefined1 *)0xd136b47bc732bd2b) break;
      DAT_001f7380 = DAT_001f7380 ^ 0xe2;
      DAT_001f7381 = DAT_001f7381 ^ 0xe2;
      DAT_001f7382 = DAT_001f7382 ^ 0xe2;
      DAT_001f7383 = DAT_001f7383 ^ 0xe2;
      DAT_001f7384 = DAT_001f7384 ^ 0xe2;
      DAT_001f8288._2_1_ = '\x01';
      puVar1 = (undefined1 *)0x1db1d1f44155ec69;
    }
    puVar1 = (undefined1 *)0xf8b8c954db367ca1;
  } while ((puVar4 == (undefined1 *)0xd937f9741a083d9f) ||
          (puVar1 = puVar4, puVar4 != (undefined1 *)0xdbbbecaa54122c5b));
LAB_001979d0:
  unaff_w26 = 0;
  puVar1 = (undefined1 *)0xe86a3cb2672328c3;
  goto LAB_00197668;
LAB_00197624:
  puVar1 = (undefined1 *)0x57dab7dd661b1869;
  if ((puVar4 == (undefined1 *)0x82d6800f37fa837b) ||
     (puVar1 = puVar4, puVar4 != (undefined1 *)0x87fde1166a77f06e)) goto LAB_00197668;
  goto LAB_001979d0;
}


