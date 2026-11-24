// Function: FUN_001dc670
// Entry: 001dc670

void FUN_001dc670(long *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  void *unaff_x20;
  undefined1 *unaff_x24;
  undefined1 *unaff_x28;
  
  puVar5 = (undefined1 *)*param_1;
  puVar1 = (undefined1 *)0xae2d64bf93f1b31a;
  if (puVar5 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)0x7772f905052e4c0f;
  }
  puVar3 = (undefined1 *)0x7772f905052e4c0f;
  puVar2 = (undefined1 *)0x21d53de2b345f472;
LAB_001dc734:
  do {
    while( true ) {
      while (puVar6 = puVar2, puVar4 = puVar3, puVar2 = puVar6, puVar3 = puVar4,
            0x12b21488b9618370 < (long)puVar6) {
        if ((long)puVar6 < 0x5e1b922e6e5165fd) {
          if (puVar6 == (undefined1 *)0x12b21488b9618371) {
            unaff_x20 = *(void **)(unaff_x28 + 8);
            puVar2 = (undefined1 *)0x3a4ee4b4cd18045;
            if (unaff_x20 != (void *)0x0) {
              puVar2 = (undefined1 *)0xcb528befcd0fb52f;
            }
          }
          else {
            puVar2 = puVar1;
            if ((puVar6 != (undefined1 *)0x21d53de2b345f472) &&
               (puVar2 = puVar6, puVar6 == (undefined1 *)0x3f365012db6b56c1)) {
              puVar2 = (undefined1 *)0x12b21488b9618371;
            }
          }
        }
        else if (puVar6 == (undefined1 *)0x5e1b922e6e5165fd) {
          free(unaff_x28);
          unaff_x24 = (undefined1 *)*param_1;
          puVar2 = (undefined1 *)0xe156d0b4a667ab8e;
          if (unaff_x24 != (undefined1 *)0x0) {
            puVar2 = (undefined1 *)0xde0600f0ca761eb9;
          }
        }
        else if (puVar6 == &DAT_6b9fb694821e6034) {
          param_1[1] = (long)param_1;
          puVar2 = (undefined1 *)0x12b21488b9618371;
        }
        else if (puVar6 == (undefined1 *)0x7772f905052e4c0f) {
          puVar3 = puVar5;
          puVar2 = (undefined1 *)0xdc6dd27061ebaf34;
        }
      }
      if ((long)puVar6 < -0x21f9ff0f3589e147) break;
      puVar3 = unaff_x24;
      puVar2 = (undefined1 *)0xdc6dd27061ebaf34;
      if (((puVar6 != (undefined1 *)0xde0600f0ca761eb9) &&
          (puVar3 = puVar4, puVar2 = (undefined1 *)0xa0d7c67c60e7a82e,
          puVar6 != (undefined1 *)0xe156d0b4a667ab8e)) &&
         (puVar2 = puVar6, puVar6 == (undefined1 *)0x3a4ee4b4cd18045)) {
LAB_001dc720:
        puVar3 = puVar4;
        puVar2 = (undefined1 *)0x5e1b922e6e5165fd;
      }
    }
    if ((long)puVar6 < -0x34ad741032f04ad1) {
      puVar2 = (undefined1 *)0xa0d7c67c60e7a82e;
      if ((puVar6 != (undefined1 *)0xae2d64bf93f1b31a) &&
         (puVar2 = puVar6, puVar6 == (undefined1 *)0xa0d7c67c60e7a82e)) {
        *param_1 = 0;
        param_1[1] = (long)param_1;
        return;
      }
      goto LAB_001dc734;
    }
    if (puVar6 == (undefined1 *)0xcb528befcd0fb52f) {
      free(unaff_x20);
      goto LAB_001dc720;
    }
    if (puVar6 == (undefined1 *)0xdc6dd27061ebaf34) {
      puVar2 = &DAT_6b9fb694821e6034;
      if (*(long *)(puVar4 + 0x10) != 0) {
        puVar2 = (undefined1 *)0x3f365012db6b56c1;
      }
      *param_1 = *(long *)(puVar4 + 0x10);
      unaff_x28 = puVar4;
    }
  } while( true );
}


