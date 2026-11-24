// Function: FUN_001d8750
// Entry: 001d8750

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001d8750(long param_1,long param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  undefined1 *puVar6;
  long unaff_x19;
  long unaff_x21;
  
  puVar1 = (undefined1 *)0x7772f905052e4c0f;
  if (param_2 != 0) {
    puVar1 = (undefined1 *)0xae2d64bf93f1b31a;
  }
  lVar3 = param_2;
  puVar2 = (undefined1 *)0x21d53de2b345f472;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          puVar6 = puVar2;
          lVar5 = lVar3;
          lVar3 = lVar5;
          if ((long)puVar6 < 0x12b21488b9618371) break;
          if ((long)puVar6 < 0x5e1b922e6e5165fd) {
            puVar2 = &DAT_6b9fb694821e6034;
            if (((puVar6 != (undefined1 *)0x12b21488b9618371) &&
                (puVar2 = puVar1, puVar6 != (undefined1 *)0x21d53de2b345f472)) &&
               (puVar2 = puVar6, puVar6 == (undefined1 *)0x3f365012db6b56c1)) {
              puVar2 = &DAT_6b9fb694821e6034;
              unaff_x19 = lVar5;
            }
          }
          else {
            lVar3 = unaff_x21;
            puVar2 = (undefined1 *)0x3f365012db6b56c1;
            if (puVar6 != (undefined1 *)0x5e1b922e6e5165fd) {
              if (puVar6 == &DAT_6b9fb694821e6034) {
                iVar4 = FUN_001ebe70(0,1,&DAT_001f8314);
                lVar3 = lVar5;
                puVar2 = (undefined1 *)0xe156d0b4a667ab8e;
                if (iVar4 != 0) {
                  puVar2 = (undefined1 *)0x12b21488b9618371;
                }
              }
              else {
                lVar3 = lVar5;
                puVar2 = puVar6;
                if (puVar6 == (undefined1 *)0x7772f905052e4c0f) {
                  puVar2 = (undefined1 *)0xdc6dd27061ebaf34;
                }
              }
            }
          }
        }
        if (-0x23922d8f9e1450cd < (long)puVar6) break;
        puVar2 = (undefined1 *)0xcb528befcd0fb52f;
        if (puVar6 != (undefined1 *)0xa0d7c67c60e7a82e) {
          if (puVar6 == (undefined1 *)0xae2d64bf93f1b31a) {
            lVar3 = 0;
            puVar2 = (undefined1 *)0x3f365012db6b56c1;
          }
          else {
            puVar2 = puVar6;
            if (puVar6 == (undefined1 *)0xcb528befcd0fb52f) {
              DAT_001f8314 = 0;
              unaff_x21 = unaff_x19 + 1;
              puVar6 = (undefined1 *)(param_3 + unaff_x19 * 2);
              puVar2 = (undefined1 *)0xde0600f0ca761eb9;
              if (unaff_x21 != param_2) {
                puVar2 = (undefined1 *)0x5e1b922e6e5165fd;
              }
              *puVar6 = (&DAT_001f79d0)[*(byte *)(param_1 + unaff_x19) >> 4];
              puVar6[1] = (&DAT_001f79d0)[(ulong)*(byte *)(param_1 + unaff_x19) & 0xf];
            }
          }
        }
      }
      if ((long)puVar6 < -0x1ea92f4b59985472) break;
      if (puVar6 == (undefined1 *)0xe156d0b4a667ab8e) {
        puVar2 = (undefined1 *)0xa0d7c67c60e7a82e;
        if (DAT_001f8314._1_1_ == '\0') {
          puVar2 = (undefined1 *)0x3a4ee4b4cd18045;
        }
      }
      else {
        puVar2 = puVar6;
        if (puVar6 == (undefined1 *)0x3a4ee4b4cd18045) {
          DAT_001f79e0 = DAT_001f79e0 ^ 0x84;
          _DAT_001f79d0 = _DAT_001f79d0 ^ 0x8484848484848484;
          uRam00000000001f79d8 = uRam00000000001f79d8 ^ 0x8484848484848484;
          DAT_001f8314._0_2_ = CONCAT11(1,(undefined1)DAT_001f8314);
          puVar2 = (undefined1 *)0xcb528befcd0fb52f;
        }
      }
    }
    puVar2 = (undefined1 *)0xdc6dd27061ebaf34;
  } while ((puVar6 == (undefined1 *)0xde0600f0ca761eb9) ||
          (puVar2 = puVar6, puVar6 != (undefined1 *)0xdc6dd27061ebaf34));
  *(undefined1 *)(param_3 + param_2 * 2) = 0;
  return;
}


