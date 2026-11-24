// Function: FUN_001ebb18
// Entry: 001ebb18

undefined8 * FUN_001ebb18(int *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *extraout_x1;
  undefined8 *puVar7;
  undefined1 *puVar8;
  
  puVar5 = calloc(1,0x20);
  puVar1 = (undefined1 *)0xae2d64bf93f1b31a;
  if (puVar5 != (undefined8 *)0x0) {
    puVar1 = (undefined1 *)0x7772f905052e4c0f;
  }
  puVar3 = extraout_x1;
  puVar4 = (undefined1 *)0x21d53de2b345f472;
  do {
    while( true ) {
      while (puVar8 = puVar4, puVar7 = puVar3, puVar3 = puVar7, puVar4 = puVar8,
            (long)puVar8 < 0x12b21488b9618371) {
        if ((long)puVar8 < -0x21f9ff0f3589e147) {
          if (puVar8 == (undefined1 *)0xae2d64bf93f1b31a) {
            *param_1 = 2;
            puVar3 = (undefined8 *)0x0;
            puVar4 = (undefined1 *)0xe156d0b4a667ab8e;
          }
          else if (puVar8 == (undefined1 *)0xcb528befcd0fb52f) {
            uVar6 = thunk_FUN_001eaa5c(param_1);
            iVar2 = *param_1;
            puVar5[3] = uVar6;
            puVar4 = (undefined1 *)0x5e1b922e6e5165fd;
            if (iVar2 != 0) {
              puVar4 = (undefined1 *)0xde0600f0ca761eb9;
            }
          }
          else if (puVar8 == (undefined1 *)0xdc6dd27061ebaf34) goto LAB_001ebc04;
        }
        else {
          if ((puVar8 == (undefined1 *)0xde0600f0ca761eb9) ||
             (puVar8 == (undefined1 *)0x3a4ee4b4cd18045)) goto LAB_001ebc04;
          if (puVar8 == (undefined1 *)0xe156d0b4a667ab8e) {
            return puVar7;
          }
        }
      }
      if (0x5e1b922e6e5165fc < (long)puVar8) break;
      if (puVar8 == (undefined1 *)0x12b21488b9618371) {
        uVar6 = FUN_001e9504(param_1);
        iVar2 = *param_1;
        puVar5[2] = uVar6;
        puVar4 = (undefined1 *)0xcb528befcd0fb52f;
        if (iVar2 != 0) {
          puVar4 = (undefined1 *)0x3a4ee4b4cd18045;
        }
      }
      else {
        puVar4 = puVar1;
        if ((puVar8 != (undefined1 *)0x21d53de2b345f472) &&
           (puVar4 = puVar8, puVar8 == (undefined1 *)0x3f365012db6b56c1)) {
          uVar6 = FUN_001e9a30(param_1,0x100);
          iVar2 = *param_1;
          puVar5[1] = uVar6;
          puVar4 = (undefined1 *)0x12b21488b9618371;
          if (iVar2 != 0) {
            puVar4 = &DAT_6b9fb694821e6034;
          }
        }
      }
    }
    puVar3 = puVar5;
    puVar4 = (undefined1 *)0xe156d0b4a667ab8e;
    if (puVar8 != (undefined1 *)0x5e1b922e6e5165fd) {
      if (puVar8 == &DAT_6b9fb694821e6034) {
LAB_001ebc04:
        FUN_001ebad8(puVar5);
        puVar3 = (undefined8 *)0x0;
        puVar4 = (undefined1 *)0xe156d0b4a667ab8e;
      }
      else {
        puVar3 = puVar7;
        puVar4 = puVar8;
        if (puVar8 == (undefined1 *)0x7772f905052e4c0f) {
          uVar6 = FUN_001eaa5c(param_1);
          iVar2 = *param_1;
          *puVar5 = uVar6;
          puVar4 = (undefined1 *)0x3f365012db6b56c1;
          if (iVar2 != 0) {
            puVar4 = (undefined1 *)0xdc6dd27061ebaf34;
          }
        }
      }
    }
  } while( true );
}


