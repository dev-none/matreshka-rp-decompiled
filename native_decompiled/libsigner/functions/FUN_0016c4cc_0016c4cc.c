// Function: FUN_0016c4cc
// Entry: 0016c4cc

void FUN_0016c4cc(int *param_1,long *param_2,long param_3,long *param_4,long *param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  code *pcVar5;
  undefined1 *puVar6;
  int unaff_w21;
  
  puVar1 = (undefined1 *)0xf8b8c954db367ca1;
  if (param_3 != 0) {
    puVar1 = (undefined1 *)0xd937f9741a083d9f;
  }
  puVar2 = (undefined1 *)0xe5248230beacb780;
  do {
    while( true ) {
      do {
        while( true ) {
          while( true ) {
            while (puVar6 = puVar2, puVar2 = puVar6, -0x1795c34d98dcd73e < (long)puVar6) {
              if ((long)puVar6 < 0x2ac799c399899ac3) {
                if ((long)puVar6 < 0x2b590051c346d3e) {
                  if (puVar6 == (undefined1 *)0xe86a3cb2672328c3) {
                    *param_1 = 0x19;
                    puVar2 = (undefined1 *)0x2ac799c399899ac3;
                  }
                  else if (puVar6 == (undefined1 *)0xf8b8c954db367ca1) {
                    unaff_w21 = 3;
                    puVar2 = (undefined1 *)0xdbbbecaa54122c5b;
                  }
                }
                else if (puVar6 == &DAT_2b590051c346d3e) {
                  puVar2 = (undefined1 *)0x8b1dacf6763fda11;
                  if (*param_1 != 0) {
                    puVar2 = (undefined1 *)0xc0eb019135e10a40;
                  }
                }
                else {
                  puVar2 = (undefined1 *)0x2ac799c399899ac3;
                  if ((puVar6 != &DAT_1b767e91f4196530) &&
                     (puVar2 = puVar6, puVar6 == (undefined1 *)0x1db1d1f44155ec69)) {
                    (**(code **)(*param_2 + 0x80))(param_2);
                    (**(code **)(*param_2 + 0x88))(param_2);
                    puVar2 = (undefined1 *)0xe86a3cb2672328c3;
                  }
                }
              }
              else if ((long)puVar6 < 0x55d58c2b8d472655) {
                if (puVar6 == (undefined1 *)0x2ac799c399899ac3) {
                  *param_4 = 0;
                  *param_5 = 0;
                  puVar2 = (undefined1 *)0x9173a1fc59339595;
                }
                else if (puVar6 == (undefined1 *)0x4c1b9edb721e7222) {
                  (**(code **)(*param_2 + 0x80))(param_2);
                  (**(code **)(*param_2 + 0x88))(param_2);
                  unaff_w21 = 0x19;
                  puVar2 = (undefined1 *)0xdbbbecaa54122c5b;
                }
              }
              else {
                puVar2 = (undefined1 *)0x2ac799c399899ac3;
                if (((puVar6 != (undefined1 *)0x55d58c2b8d472655) &&
                    (puVar2 = (undefined1 *)0x9173a1fc59339595,
                    puVar6 != (undefined1 *)0x57dab7dd661b1869)) &&
                   (puVar2 = puVar6, puVar6 == (undefined1 *)0x5e9249b5376f08fa)) {
                  puVar2 = (undefined1 *)0xe86a3cb2672328c3;
                }
              }
            }
            if ((long)puVar6 < -0x3f14fe6eca1ef5c0) break;
            if ((long)puVar6 < -0x26c8068be5f7c261) {
              puVar2 = (undefined1 *)0x932656effdaaeaa5;
              if ((puVar6 != (undefined1 *)0xc0eb019135e10a40) &&
                 (puVar2 = puVar6, puVar6 == (undefined1 *)0xd136b47bc732bd2b)) {
                lVar4 = (**(code **)(*param_2 + 0x548))(param_2,param_3,0);
                *param_4 = lVar4;
                lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
                puVar2 = (undefined1 *)0x87fde1166a77f06e;
                if (lVar4 != 0) {
                  puVar2 = (undefined1 *)0x1db1d1f44155ec69;
                }
              }
            }
            else if (puVar6 == (undefined1 *)0xd937f9741a083d9f) {
              iVar3 = (**(code **)(*param_2 + 0x540))(param_2,param_3);
              pcVar5 = *(code **)(*param_2 + 0x78);
              *param_5 = (long)iVar3;
              lVar4 = (*pcVar5)(param_2);
              puVar2 = &DAT_2b590051c346d3e;
              if (lVar4 != 0) {
                puVar2 = (undefined1 *)0x4c1b9edb721e7222;
              }
            }
            else if (puVar6 == (undefined1 *)0xdbbbecaa54122c5b) {
              *param_1 = unaff_w21;
              puVar2 = (undefined1 *)0x932656effdaaeaa5;
            }
            else if (puVar6 == (undefined1 *)0xe5248230beacb780) {
              puVar2 = puVar1;
            }
          }
          if (-0x74a2d55b8cf192ae < (long)puVar6) break;
          if (puVar6 == (undefined1 *)0x82d6800f37fa837b) {
            puVar2 = (undefined1 *)0x57dab7dd661b1869;
            if (*param_1 != 0) {
              puVar2 = (undefined1 *)0x55d58c2b8d472655;
            }
          }
          else if (puVar6 == (undefined1 *)0x87fde1166a77f06e) {
            puVar2 = (undefined1 *)0x5e9249b5376f08fa;
            if (*param_4 != 0) {
              puVar2 = (undefined1 *)0x82d6800f37fa837b;
            }
          }
          else if (puVar6 == (undefined1 *)0x8b1dacf6763fda11) {
            puVar2 = (undefined1 *)0xd136b47bc732bd2b;
          }
        }
        puVar2 = (undefined1 *)0xd136b47bc732bd2b;
      } while (puVar6 == (undefined1 *)0x8b5d2aa4730e6d53);
      if (puVar6 != (undefined1 *)0x932656effdaaeaa5) break;
      *param_5 = 0;
      puVar2 = (undefined1 *)0x8b5d2aa4730e6d53;
      if (*param_1 != 0) {
        puVar2 = &DAT_1b767e91f4196530;
      }
    }
    puVar2 = puVar6;
  } while (puVar6 != (undefined1 *)0x9173a1fc59339595);
  return;
}


