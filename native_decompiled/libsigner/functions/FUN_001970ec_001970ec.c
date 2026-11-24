// Function: FUN_001970ec
// Entry: 001970ec

uint FUN_001970ec(undefined8 param_1,undefined4 *param_2,long param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined1 *puVar1;
  byte bVar2;
  undefined1 *puVar3;
  byte bVar4;
  byte bVar5;
  ulong uVar6;
  byte bVar7;
  byte bVar8;
  undefined1 *puVar9;
  uint unaff_w21;
  byte bVar10;
  
  bVar2 = *(byte *)(param_3 + 9);
  puVar1 = (undefined1 *)0x7772f905052e4c0f;
  if (bVar2 < 0x17) {
    puVar1 = (undefined1 *)0xae2d64bf93f1b31a;
  }
  puVar3 = (undefined1 *)0x21d53de2b345f472;
  bVar4 = 0;
  bVar10 = 0;
  bVar5 = 0;
LAB_001971f0:
  do {
    while( true ) {
      while (bVar7 = bVar5, bVar8 = bVar4, puVar9 = puVar3, puVar3 = puVar9, bVar4 = bVar8,
            bVar5 = bVar7, 0x12b21488b9618370 < (long)puVar9) {
        if ((long)puVar9 < 0x5e1b922e6e5165fd) {
          if ((long)puVar9 < 0x2467c250713f82d4) {
            puVar3 = (undefined1 *)0xde0600f0ca761eb9;
            bVar5 = bVar10;
            if ((puVar9 != (undefined1 *)0x12b21488b9618371) &&
               (puVar3 = puVar9, bVar5 = bVar7, puVar9 == (undefined1 *)0x21d53de2b345f472)) {
              puVar3 = puVar1;
            }
          }
          else if (puVar9 == (undefined1 *)0x3f365012db6b56c1) {
            puVar3 = &DAT_6b9fb694821e6034;
            bVar4 = *(byte *)(param_3 + 9);
          }
          else if (puVar9 == (undefined1 *)0x2467c250713f82d4) {
            return unaff_w21 & 1;
          }
        }
        else if (puVar9 == (undefined1 *)0x5e1b922e6e5165fd) {
          puVar3 = (undefined1 *)0xde0600f0ca761eb9;
          bVar5 = *(byte *)(param_3 + 9);
        }
        else if (puVar9 == &DAT_6b9fb694821e6034) {
          puVar3 = (undefined1 *)0x3a4ee4b4cd18045;
          bVar10 = bVar8;
          if (bVar8 < 0x12) {
            puVar3 = (undefined1 *)0x12b21488b9618371;
          }
        }
        else if (puVar9 == (undefined1 *)0x7772f905052e4c0f) {
          uVar6 = FUN_0019758c(param_1,param_2,param_5);
          puVar3 = (undefined1 *)0xdc6dd27061ebaf34;
          if ((uVar6 & 1) == 0) {
            puVar3 = (undefined1 *)0x3f365012db6b56c1;
          }
        }
      }
      if (-0x23922d8f9e1450cd < (long)puVar9) break;
      if (puVar9 == (undefined1 *)0xa0d7c67c60e7a82e) {
        unaff_w21 = 0;
        *param_2 = 0xf;
        puVar3 = (undefined1 *)0x2467c250713f82d4;
      }
      else {
        puVar3 = &DAT_6b9fb694821e6034;
        bVar4 = bVar2;
        if ((puVar9 != (undefined1 *)0xae2d64bf93f1b31a) &&
           (puVar3 = puVar9, bVar4 = bVar8, puVar9 == (undefined1 *)0xcb528befcd0fb52f)) {
LAB_00197354:
          unaff_w21 = 1;
LAB_00197528:
          puVar3 = (undefined1 *)0x2467c250713f82d4;
          bVar4 = bVar8;
        }
      }
    }
    if (-0x1ea92f4b59985473 < (long)puVar9) {
      if (puVar9 == (undefined1 *)0xe156d0b4a667ab8e) {
        unaff_w21 = 0;
        goto LAB_00197528;
      }
      if (puVar9 == (undefined1 *)0x3a4ee4b4cd18045) {
        uVar6 = FUN_00197cbc(param_1,param_2,param_4,param_5);
        puVar3 = (undefined1 *)0xcb528befcd0fb52f;
        if ((uVar6 & 1) == 0) {
          puVar3 = (undefined1 *)0x5e1b922e6e5165fd;
        }
      }
      goto LAB_001971f0;
    }
    if (puVar9 == (undefined1 *)0xdc6dd27061ebaf34) goto LAB_00197354;
    if ((puVar9 == (undefined1 *)0xde0600f0ca761eb9) &&
       (puVar3 = (undefined1 *)0xa0d7c67c60e7a82e, bVar7 != 0)) {
      puVar3 = (undefined1 *)0xe156d0b4a667ab8e;
    }
  } while( true );
}


