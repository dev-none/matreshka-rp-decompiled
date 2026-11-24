// Function: FUN_001e4f6c
// Entry: 001e4f6c

undefined8 * FUN_001e4f6c(undefined4 *param_1,char *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  FILE *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  
  puVar1 = (undefined1 *)0x21d53de2b345f472;
  do {
    while( true ) {
      while( true ) {
        while (puVar3 = puVar1, (long)puVar3 < 0x12b21488b9618371) {
          if ((long)puVar3 < -0x21f9ff0f3589e147) {
            if (puVar3 == (undefined1 *)0xae2d64bf93f1b31a) {
              iVar2 = FUN_001ebe70(0,1,&DAT_001f8328);
              puVar1 = (undefined1 *)0xde0600f0ca761eb9;
              if (iVar2 != 0) {
                puVar1 = (undefined1 *)0x7772f905052e4c0f;
              }
            }
            else if (puVar3 == (undefined1 *)0xcb528befcd0fb52f) {
              *unaff_x24 = unaff_x23;
              FUN_001e29e0(unaff_x24 + 3);
              FUN_001e4850(unaff_x24 + 5);
              FUN_001e4850(unaff_x24 + 7);
              puVar1 = (undefined1 *)0x5e1b922e6e5165fd;
              unaff_x25 = unaff_x24;
            }
            else {
              puVar1 = puVar3;
              if (puVar3 == (undefined1 *)0xdc6dd27061ebaf34) {
                DAT_001f7a08 = DAT_001f7a08 ^ 0xad;
                DAT_001f7a0a = DAT_001f7a0a ^ 0xad;
                DAT_001f7a09 = DAT_001f7a09 ^ 0xad;
                DAT_001f8328._0_2_ = CONCAT11(1,(undefined1)DAT_001f8328);
                puVar1 = (undefined1 *)0x3f365012db6b56c1;
              }
            }
          }
          else if (puVar3 == (undefined1 *)0xde0600f0ca761eb9) {
            puVar1 = (undefined1 *)0xe156d0b4a667ab8e;
            if (DAT_001f8328._1_1_ == '\0') {
              puVar1 = (undefined1 *)0xdc6dd27061ebaf34;
            }
          }
          else {
            puVar1 = (undefined1 *)0x3f365012db6b56c1;
            if ((puVar3 != (undefined1 *)0xe156d0b4a667ab8e) &&
               (puVar1 = puVar3, puVar3 == (undefined1 *)0x3a4ee4b4cd18045)) {
              unaff_x25 = (undefined8 *)0x0;
              *param_1 = 1;
              puVar1 = (undefined1 *)0x5e1b922e6e5165fd;
            }
          }
        }
        if (0x5e1b922e6e5165fc < (long)puVar3) break;
        if (puVar3 == (undefined1 *)0x12b21488b9618371) {
          unaff_x24 = calloc(1,0x48);
          puVar1 = (undefined1 *)0x3a4ee4b4cd18045;
          if (unaff_x24 != (undefined8 *)0x0) {
            puVar1 = (undefined1 *)0xcb528befcd0fb52f;
          }
        }
        else {
          puVar1 = (undefined1 *)0xae2d64bf93f1b31a;
          if ((puVar3 != (undefined1 *)0x21d53de2b345f472) &&
             (puVar1 = puVar3, puVar3 == (undefined1 *)0x3f365012db6b56c1)) {
            DAT_001f8328 = 0;
            unaff_x23 = fopen(param_2,(char *)&DAT_001f7a08);
            puVar1 = &DAT_6b9fb694821e6034;
            if (unaff_x23 != (FILE *)0x0) {
              puVar1 = (undefined1 *)0x12b21488b9618371;
            }
          }
        }
      }
      if (puVar3 != &DAT_6b9fb694821e6034) break;
      unaff_x25 = (undefined8 *)0x0;
      *param_1 = 2;
      puVar1 = (undefined1 *)0x5e1b922e6e5165fd;
    }
    puVar1 = (undefined1 *)0xae2d64bf93f1b31a;
  } while ((puVar3 == (undefined1 *)0x7772f905052e4c0f) ||
          (puVar1 = puVar3, puVar3 != (undefined1 *)0x5e1b922e6e5165fd));
  return unaff_x25;
}


