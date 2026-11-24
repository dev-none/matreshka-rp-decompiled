// Function: FUN_0010a69c
// Entry: 0010a69c

uint FUN_0010a69c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  uint unaff_w20;
  
  puVar1 = (undefined1 *)0x21d53de2b345f472;
  do {
    while( true ) {
      do {
        while( true ) {
          while( true ) {
            while (puVar5 = puVar1, puVar1 = puVar5, (long)puVar5 < 0x3a4ee4b4cd18045) {
              if ((long)puVar5 < -0x23922d8f9e1450cc) {
                if ((long)puVar5 < -0x34ad741032f04ad1) {
                  if (puVar5 == (undefined1 *)0xa0d7c67c60e7a82e) {
                    unaff_w20 = 0;
                    *param_1 = 0x1f;
                    puVar1 = (undefined1 *)0x2467c250713f82d4;
                  }
                  else if (puVar5 == (undefined1 *)0xae2d64bf93f1b31a) {
                    iVar2 = FUN_001ebe70(0,1,&DAT_001f7b10);
                    puVar1 = (undefined1 *)0xe5248230beacb780;
                    if (iVar2 != 0) {
                      puVar1 = (undefined1 *)0x7772f905052e4c0f;
                    }
                  }
                }
                else {
                  puVar1 = (undefined1 *)0x3a4ee4b4cd18045;
                  if ((puVar5 != (undefined1 *)0xcb528befcd0fb52f) &&
                     (puVar1 = puVar5, puVar5 == (undefined1 *)0xd937f9741a083d9f)) {
                    puVar1 = (undefined1 *)0x4c1b9edb721e7222;
                    if (DAT_001f7b9c._2_1_ == '\0') {
                      puVar1 = (undefined1 *)0x5e1b922e6e5165fd;
                    }
                  }
                }
              }
              else if ((long)puVar5 < -0x1ea92f4b59985472) {
                if (puVar5 == (undefined1 *)0xdc6dd27061ebaf34) {
                  DAT_001f5278 = DAT_001f5278 ^ 0x70;
                  DAT_001f5279 = DAT_001f5279 ^ 0x70;
                  DAT_001f5270 = DAT_001f5270 ^ 0x7070707070707070;
                  DAT_001f7b9c._1_1_ = '\x01';
                  puVar1 = (undefined1 *)0x3f365012db6b56c1;
                }
                else if (puVar5 == (undefined1 *)0xde0600f0ca761eb9) {
                  DAT_001f7b14 = 0;
                  uVar3 = (**(code **)(*param_2 + 0x538))(param_2,&DAT_001f5280);
                  *param_4 = uVar3;
                  uVar4 = FUN_0016c3a0(param_2);
                  puVar1 = (undefined1 *)0xa0d7c67c60e7a82e;
                  if ((uVar4 & 1) == 0) {
                    puVar1 = (undefined1 *)0xe156d0b4a667ab8e;
                  }
                }
              }
              else if (puVar5 == (undefined1 *)0xe156d0b4a667ab8e) {
                unaff_w20 = 1;
                puVar1 = (undefined1 *)0x2467c250713f82d4;
              }
              else if (puVar5 == (undefined1 *)0xe5248230beacb780) {
                puVar1 = (undefined1 *)0xf8b8c954db367ca1;
                if (DAT_001f7b9c._1_1_ == '\0') {
                  puVar1 = (undefined1 *)0xdc6dd27061ebaf34;
                }
              }
              else if (puVar5 == (undefined1 *)0xf8b8c954db367ca1) {
                puVar1 = (undefined1 *)0x3f365012db6b56c1;
              }
            }
            if ((long)puVar5 < 0x4c1b9edb721e7222) break;
            if ((long)puVar5 < 0x6b9fb694821e6034) {
              puVar1 = (undefined1 *)0xde0600f0ca761eb9;
              if ((puVar5 != (undefined1 *)0x4c1b9edb721e7222) &&
                 (puVar1 = puVar5, puVar5 == (undefined1 *)0x5e1b922e6e5165fd)) {
                DAT_001f5280 = DAT_001f5280 ^ 0xf2f2f2f2f2f2f2f2;
                DAT_001f7b9c._2_1_ = '\x01';
                puVar1 = (undefined1 *)0xde0600f0ca761eb9;
              }
            }
            else if (puVar5 == &DAT_6b9fb694821e6034) {
              unaff_w20 = 0;
              puVar1 = (undefined1 *)0x2467c250713f82d4;
            }
            else if (puVar5 == (undefined1 *)0x7772f905052e4c0f) {
              puVar1 = (undefined1 *)0xae2d64bf93f1b31a;
            }
          }
          if (0x21d53de2b345f471 < (long)puVar5) break;
          if (puVar5 == (undefined1 *)0x3a4ee4b4cd18045) {
            iVar2 = FUN_001ebe70(0,1,&DAT_001f7b14);
            puVar1 = (undefined1 *)0xd937f9741a083d9f;
            if (iVar2 != 0) {
              puVar1 = (undefined1 *)0xcb528befcd0fb52f;
            }
          }
          else if (puVar5 == (undefined1 *)0x12b21488b9618371) {
            puVar1 = (undefined1 *)0x3a4ee4b4cd18045;
          }
        }
        puVar1 = (undefined1 *)0xae2d64bf93f1b31a;
      } while (puVar5 == (undefined1 *)0x21d53de2b345f472);
      if (puVar5 != (undefined1 *)0x3f365012db6b56c1) break;
      DAT_001f7b10 = 0;
      iVar2 = FUN_001cb714(param_3,&DAT_001f5270);
      puVar1 = (undefined1 *)0x12b21488b9618371;
      if (iVar2 != 0) {
        puVar1 = &DAT_6b9fb694821e6034;
      }
    }
    puVar1 = puVar5;
  } while (puVar5 != (undefined1 *)0x2467c250713f82d4);
  return unaff_w20 & 1;
}


