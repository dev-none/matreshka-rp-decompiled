// Function: FUN_0019e8c4
// Entry: 0019e8c4

byte FUN_0019e8c4(long param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  byte unaff_w21;
  int unaff_w22;
  long unaff_x23;
  byte unaff_w26;
  
  puVar1 = (undefined1 *)0x7772f905052e4c0f;
  if (param_3 == 0 || param_1 == 0) {
    puVar1 = (undefined1 *)0xae2d64bf93f1b31a;
  }
  puVar2 = (undefined1 *)0x21d53de2b345f472;
  do {
    while( true ) {
      while( true ) {
        while (puVar3 = puVar2, puVar2 = puVar3, 0x21d53de2b345f471 < (long)puVar3) {
          if ((long)puVar3 < 0x6b9fb694821e6034) {
            puVar2 = puVar1;
            if ((puVar3 != (undefined1 *)0x21d53de2b345f472) &&
               (puVar2 = puVar3, puVar3 == (undefined1 *)0x3f365012db6b56c1)) {
              unaff_x23 = FUN_001d853c(unaff_w22,param_3,param_2);
              unaff_w26 = unaff_x23 != -1;
              puVar2 = (undefined1 *)0x12b21488b9618371;
              if (!(bool)unaff_w26) {
                puVar2 = &DAT_6b9fb694821e6034;
              }
            }
          }
          else {
            puVar2 = (undefined1 *)0x3a4ee4b4cd18045;
            if ((puVar3 != &DAT_6b9fb694821e6034) &&
               (puVar2 = puVar3, puVar3 == (undefined1 *)0x7772f905052e4c0f)) {
              unaff_w22 = FUN_001d8250(param_1,0);
              puVar2 = (undefined1 *)0xdc6dd27061ebaf34;
              if (unaff_w22 != -1) {
                puVar2 = (undefined1 *)0x3f365012db6b56c1;
              }
            }
          }
        }
        if ((long)puVar3 < 0x3a4ee4b4cd18045) break;
        if (puVar3 == (undefined1 *)0x3a4ee4b4cd18045) {
          FUN_001d8554(unaff_w22);
          puVar2 = (undefined1 *)0xcb528befcd0fb52f;
          unaff_w21 = unaff_w26;
        }
        else if (puVar3 == (undefined1 *)0x12b21488b9618371) {
          *(undefined1 *)(unaff_x23 + param_3 + -1) = 0;
          puVar2 = (undefined1 *)0x3a4ee4b4cd18045;
        }
      }
      if ((puVar3 != (undefined1 *)0xae2d64bf93f1b31a) &&
         (puVar3 != (undefined1 *)0xdc6dd27061ebaf34)) break;
      puVar2 = (undefined1 *)0xcb528befcd0fb52f;
      unaff_w21 = 0;
    }
  } while (puVar3 != (undefined1 *)0xcb528befcd0fb52f);
  return unaff_w21 & 1;
}


