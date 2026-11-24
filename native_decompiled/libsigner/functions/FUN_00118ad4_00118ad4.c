// Function: FUN_00118ad4
// Entry: 00118ad4

void FUN_00118ad4(int *param_1,long *param_2,undefined8 param_3,long *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long unaff_x22;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_70 = 0;
  local_80 = 0;
  local_78 = 0;
  FUN_00183efc();
  puVar1 = (undefined1 *)0x7772f905052e4c0f;
  if (*param_1 != 0) {
    puVar1 = (undefined1 *)0xae2d64bf93f1b31a;
  }
  puVar2 = (undefined1 *)0x21d53de2b345f472;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (puVar5 = puVar2, puVar2 = puVar5, 0x12b21488b9618370 < (long)puVar5) {
            if ((long)puVar5 < 0x3f365012db6b56c1) {
              if (puVar5 == (undefined1 *)0x12b21488b9618371) {
                *param_1 = 2;
                puVar2 = (undefined1 *)0x3a4ee4b4cd18045;
              }
              else {
                puVar2 = puVar1;
                if ((puVar5 != (undefined1 *)0x21d53de2b345f472) &&
                   (puVar2 = puVar5, puVar5 == (undefined1 *)0x2467c250713f82d4)) {
                  *param_4 = 0;
                  puVar2 = (undefined1 *)0xe5248230beacb780;
                }
              }
            }
            else if ((long)puVar5 < 0x6b9fb694821e6034) {
              if (puVar5 == (undefined1 *)0x3f365012db6b56c1) {
                lVar4 = FUN_001cdd28(local_78,local_80);
                puVar2 = (undefined1 *)0x12b21488b9618371;
                if (lVar4 != 0) {
                  puVar2 = &DAT_6b9fb694821e6034;
                }
                *param_4 = lVar4;
              }
              else if (puVar5 == (undefined1 *)0x5e1b922e6e5165fd) {
                puVar2 = (undefined1 *)0xe156d0b4a667ab8e;
              }
            }
            else {
              puVar2 = (undefined1 *)0x3a4ee4b4cd18045;
              if ((puVar5 != &DAT_6b9fb694821e6034) &&
                 (puVar2 = puVar5, puVar5 == (undefined1 *)0x7772f905052e4c0f)) {
                FUN_0016c4cc(param_1,param_2,local_70,&local_78,&local_80);
                puVar2 = (undefined1 *)0x3f365012db6b56c1;
                if (*param_1 != 0) {
                  puVar2 = (undefined1 *)0xdc6dd27061ebaf34;
                }
              }
            }
          }
          if (-0x21f9ff0f3589e148 < (long)puVar5) break;
          if ((long)puVar5 < -0x34ad741032f04ad1) {
            puVar2 = (undefined1 *)0xe5248230beacb780;
            if ((puVar5 != (undefined1 *)0xa0d7c67c60e7a82e) &&
               (puVar2 = puVar5, puVar5 == (undefined1 *)0xae2d64bf93f1b31a)) {
              puVar2 = (undefined1 *)0xcb528befcd0fb52f;
            }
          }
          else if (puVar5 == (undefined1 *)0xcb528befcd0fb52f) {
            puVar2 = (undefined1 *)0xde0600f0ca761eb9;
            unaff_x22 = local_70;
            if (local_70 == 0 || param_2 == (long *)0x0) {
              puVar2 = (undefined1 *)0x5e1b922e6e5165fd;
            }
          }
          else if (puVar5 == (undefined1 *)0xdc6dd27061ebaf34) {
            puVar2 = (undefined1 *)0xcb528befcd0fb52f;
          }
        }
        if (-0x1adb7dcf41534881 < (long)puVar5) break;
        if (puVar5 == (undefined1 *)0xde0600f0ca761eb9) {
          (**(code **)(*param_2 + 0xb8))(param_2,unaff_x22);
          puVar2 = (undefined1 *)0xe156d0b4a667ab8e;
        }
        else if (puVar5 == (undefined1 *)0xe156d0b4a667ab8e) {
          puVar2 = (undefined1 *)0xa0d7c67c60e7a82e;
          if (*param_1 != 0) {
            puVar2 = (undefined1 *)0x2467c250713f82d4;
          }
        }
      }
      if (puVar5 != (undefined1 *)0x3a4ee4b4cd18045) break;
      FUN_0016e030(param_2,local_70,local_78);
      puVar2 = (undefined1 *)0xcb528befcd0fb52f;
    }
  } while (puVar5 != (undefined1 *)0xe5248230beacb780);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


