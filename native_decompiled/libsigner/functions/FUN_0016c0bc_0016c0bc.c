// Function: FUN_0016c0bc
// Entry: 0016c0bc

void FUN_0016c0bc(int *param_1,long *param_2,long param_3,long *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  code *pcVar5;
  undefined1 *puVar6;
  int unaff_w27;
  
  puVar1 = (undefined1 *)0xae2d64bf93f1b31a;
  if (param_3 != 0) {
    puVar1 = (undefined1 *)0x7772f905052e4c0f;
  }
  puVar2 = (undefined1 *)0x21d53de2b345f472;
  do {
    while( true ) {
      do {
        while( true ) {
          while (puVar6 = puVar2, puVar2 = puVar6, (long)puVar6 < 0x21d53de2b345f472) {
            if ((long)puVar6 < -0x23922d8f9e1450cc) {
              if (puVar6 == (undefined1 *)0xae2d64bf93f1b31a) {
                unaff_w27 = 3;
                puVar2 = (undefined1 *)0x3a4ee4b4cd18045;
              }
              else if (puVar6 == (undefined1 *)0xcb528befcd0fb52f) {
                *param_4 = 0;
                puVar2 = (undefined1 *)0x5e1b922e6e5165fd;
              }
            }
            else if (puVar6 == (undefined1 *)0xdc6dd27061ebaf34) {
              (**(code **)(*param_2 + 0x80))(param_2);
              (**(code **)(*param_2 + 0x88))(param_2);
              unaff_w27 = 0x19;
              puVar2 = (undefined1 *)0x3a4ee4b4cd18045;
            }
            else if (puVar6 == (undefined1 *)0x3a4ee4b4cd18045) {
              *param_1 = unaff_w27;
              puVar2 = (undefined1 *)0xcb528befcd0fb52f;
            }
            else if (puVar6 == (undefined1 *)0x12b21488b9618371) {
              puVar2 = (undefined1 *)0x5e1b922e6e5165fd;
            }
          }
          if (0x5e1b922e6e5165fc < (long)puVar6) break;
          puVar2 = puVar1;
          if (((puVar6 != (undefined1 *)0x21d53de2b345f472) &&
              (puVar2 = puVar6, puVar6 == (undefined1 *)0x3f365012db6b56c1)) &&
             (puVar2 = (undefined1 *)0x12b21488b9618371, *param_1 != 0)) {
            puVar2 = &DAT_6b9fb694821e6034;
          }
        }
        puVar2 = (undefined1 *)0xcb528befcd0fb52f;
      } while (puVar6 == &DAT_6b9fb694821e6034);
      if (puVar6 != (undefined1 *)0x7772f905052e4c0f) break;
      iVar3 = (**(code **)(*param_2 + 0x540))(param_2,param_3);
      pcVar5 = *(code **)(*param_2 + 0x78);
      *param_4 = (long)iVar3;
      lVar4 = (*pcVar5)(param_2);
      puVar2 = (undefined1 *)0x3f365012db6b56c1;
      if (lVar4 != 0) {
        puVar2 = (undefined1 *)0xdc6dd27061ebaf34;
      }
    }
    puVar2 = puVar6;
  } while (puVar6 != (undefined1 *)0x5e1b922e6e5165fd);
  return;
}


