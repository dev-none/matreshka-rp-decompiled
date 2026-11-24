// Function: FUN_001e3148
// Entry: 001e3148

void FUN_001e3148(int *param_1,long param_2,uint param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  ulong unaff_x23;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  undefined8 local_74;
  int local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_6c = 0;
  local_74 = 0;
  puVar2 = (undefined1 *)0x21d53de2b345f472;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (puVar4 = puVar2, puVar2 = puVar4, (long)puVar4 < -0x1adb7dcf41534880) {
            if ((long)puVar4 < -0x34ad741032f04ad1) {
              if ((long)puVar4 < -0x5f2839839f1857d2) {
                if (puVar4 == (undefined1 *)0x8b1dacf6763fda11) {
                  FUN_001de49c(param_1,param_2 + 0x28,unaff_x23 & 0xffffffff,param_4);
                  puVar2 = (undefined1 *)0x932656effdaaeaa5;
                  if (*param_1 != 0) {
                    puVar2 = (undefined1 *)0xdbbbecaa54122c5b;
                  }
                }
                else {
                  puVar2 = (undefined1 *)0x1db1d1f44155ec69;
                  if ((puVar4 != (undefined1 *)0x8b5d2aa4730e6d53) &&
                     (puVar2 = puVar4, puVar4 == (undefined1 *)0x932656effdaaeaa5)) {
                    puVar2 = (undefined1 *)0x8b5d2aa4730e6d53;
                    if ((int)local_74 + local_88 != param_3) {
                      puVar2 = &DAT_1b767e91f4196530;
                    }
                  }
                }
              }
              else if (puVar4 == (undefined1 *)0xa0d7c67c60e7a82e) {
                local_84 = local_74._4_4_;
                uVar3 = FUN_001dc360(param_1,param_2 + 0x20,4,1,param_4);
                puVar2 = (undefined1 *)0xe5248230beacb780;
                if ((uVar3 & 1) == 0) {
                  puVar2 = (undefined1 *)0x2467c250713f82d4;
                }
              }
              else {
                puVar2 = (undefined1 *)0x1db1d1f44155ec69;
                if ((puVar4 != (undefined1 *)0xae2d64bf93f1b31a) &&
                   (puVar2 = puVar4, puVar4 == (undefined1 *)0xc0eb019135e10a40)) {
                  puVar2 = (undefined1 *)0xd136b47bc732bd2b;
                }
              }
            }
            else if ((long)puVar4 < -0x24441355abedd3a5) {
              if (puVar4 == (undefined1 *)0xcb528befcd0fb52f) {
                local_80 = local_74._4_4_;
                puVar2 = (undefined1 *)0x5e1b922e6e5165fd;
                if (local_78 + local_74._4_4_ + 8U <= param_3) {
                  puVar2 = (undefined1 *)0xde0600f0ca761eb9;
                }
              }
              else if (puVar4 == (undefined1 *)0xd136b47bc732bd2b) {
                *param_1 = 8;
                puVar2 = (undefined1 *)0x1db1d1f44155ec69;
              }
              else if (puVar4 == (undefined1 *)0xd937f9741a083d9f) {
                uVar3 = FUN_001dc360(param_1,&local_74,4,1,param_4);
                puVar2 = &DAT_2b590051c346d3e;
                if ((uVar3 & 1) == 0) {
                  puVar2 = (undefined1 *)0x4c1b9edb721e7222;
                }
              }
            }
            else if ((long)puVar4 < -0x21f9ff0f3589e147) {
              puVar2 = (undefined1 *)0x1db1d1f44155ec69;
              if ((puVar4 != (undefined1 *)0xdbbbecaa54122c5b) &&
                 (puVar2 = puVar4, puVar4 == (undefined1 *)0xdc6dd27061ebaf34)) {
                puVar2 = (undefined1 *)0xd136b47bc732bd2b;
              }
            }
            else if (puVar4 == (undefined1 *)0xde0600f0ca761eb9) {
              FUN_001dd808(param_1,param_2 + 0x10,local_80,param_4);
              puVar2 = (undefined1 *)0xa0d7c67c60e7a82e;
              if (*param_1 != 0) {
                puVar2 = (undefined1 *)0xe156d0b4a667ab8e;
              }
            }
            else if (puVar4 == (undefined1 *)0xe156d0b4a667ab8e) {
              puVar2 = (undefined1 *)0x1db1d1f44155ec69;
            }
          }
          if ((long)puVar4 < 0x21d53de2b345f472) break;
          if ((long)puVar4 < 0x4c1b9edb721e7222) {
            if (puVar4 == (undefined1 *)0x21d53de2b345f472) {
              uVar3 = FUN_001dc360(param_1,&local_6c,4,1,param_4);
              puVar2 = (undefined1 *)0x7772f905052e4c0f;
              if ((uVar3 & 1) == 0) {
                puVar2 = (undefined1 *)0xae2d64bf93f1b31a;
              }
            }
            else {
              puVar2 = (undefined1 *)0x1db1d1f44155ec69;
              if ((puVar4 != (undefined1 *)0x2467c250713f82d4) &&
                 (puVar2 = puVar4, puVar4 == (undefined1 *)0x3f365012db6b56c1)) {
                FUN_001dcfa0(param_1,param_2,local_7c,param_4);
                puVar2 = (undefined1 *)0x12b21488b9618371;
                if (*param_1 != 0) {
                  puVar2 = &DAT_6b9fb694821e6034;
                }
              }
            }
          }
          else if ((long)puVar4 < 0x6b9fb694821e6034) {
            puVar2 = (undefined1 *)0x1db1d1f44155ec69;
            if ((puVar4 != (undefined1 *)0x4c1b9edb721e7222) &&
               (puVar2 = puVar4, puVar4 == (undefined1 *)0x5e1b922e6e5165fd)) {
              puVar2 = (undefined1 *)0xd136b47bc732bd2b;
            }
          }
          else {
            puVar2 = (undefined1 *)0x1db1d1f44155ec69;
            if ((puVar4 != &DAT_6b9fb694821e6034) &&
               (puVar2 = puVar4, puVar4 == (undefined1 *)0x7772f905052e4c0f)) {
              local_7c = local_6c;
              puVar2 = (undefined1 *)0xdc6dd27061ebaf34;
              if (local_6c + 4U <= param_3) {
                puVar2 = (undefined1 *)0x3f365012db6b56c1;
              }
            }
          }
        }
        if (0x3a4ee4b4cd18044 < (long)puVar4) break;
        if (puVar4 == (undefined1 *)0xe5248230beacb780) {
          uVar3 = FUN_001dc360(param_1,param_2 + 0x24,4,1,param_4);
          puVar2 = (undefined1 *)0xd937f9741a083d9f;
          if ((uVar3 & 1) == 0) {
            puVar2 = (undefined1 *)0xf8b8c954db367ca1;
          }
        }
        else {
          puVar2 = (undefined1 *)0x1db1d1f44155ec69;
          if ((puVar4 != (undefined1 *)0xf8b8c954db367ca1) &&
             (puVar2 = puVar4, puVar4 == &DAT_2b590051c346d3e)) {
            unaff_x23 = local_74 & 0xffffffff;
            local_88 = local_78 + local_84 + 0x14;
            puVar2 = (undefined1 *)0xc0eb019135e10a40;
            if ((uint)((int)local_74 + local_88) <= param_3) {
              puVar2 = (undefined1 *)0x8b1dacf6763fda11;
            }
          }
        }
      }
      if (0x1b767e91f419652f < (long)puVar4) break;
      puVar2 = (undefined1 *)0x1db1d1f44155ec69;
      if ((puVar4 != (undefined1 *)0x3a4ee4b4cd18045) &&
         (puVar2 = puVar4, puVar4 == (undefined1 *)0x12b21488b9618371)) {
        local_78 = local_6c;
        uVar3 = FUN_001dc360(param_1,(long)&local_74 + 4,4,1,param_4);
        puVar2 = (undefined1 *)0xcb528befcd0fb52f;
        if ((uVar3 & 1) == 0) {
          puVar2 = (undefined1 *)0x3a4ee4b4cd18045;
        }
      }
    }
    puVar2 = (undefined1 *)0xd136b47bc732bd2b;
  } while ((puVar4 == &DAT_1b767e91f4196530) ||
          (puVar2 = puVar4, puVar4 != (undefined1 *)0x1db1d1f44155ec69));
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


