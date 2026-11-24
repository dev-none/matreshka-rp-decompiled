// Function: Java_com_adjust_sdk_sig_NativeLibHelper_nOnResume
// Entry: 0019a088

void Java_com_adjust_sdk_sig_NativeLibHelper_nOnResume(void)

{
  long lVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  itimerspec iStack_110;
  undefined1 auStack_f0 [64];
  undefined1 auStack_b0 [64];
  long lStack_70;
  
  lVar1 = tpidr_el0;
  lStack_70 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined1 *)0x21d53de2b345f472;
  do {
    while( true ) {
      do {
        while( true ) {
          while (puVar4 = puVar2, puVar2 = puVar4, 0x21d53de2b345f471 < (long)puVar4) {
            if ((long)puVar4 < 0x6b9fb694821e6034) {
              if (puVar4 == (undefined1 *)0x21d53de2b345f472) {
                puVar2 = (undefined1 *)0xae2d64bf93f1b31a;
                if (DAT_001f82b8 == '\0') {
                  puVar2 = (undefined1 *)0x7772f905052e4c0f;
                }
              }
              else if ((puVar4 == (undefined1 *)0x3f365012db6b56c1) &&
                      (iVar3 = timer_settime(DAT_001f82c0,0,&iStack_110,(itimerspec *)0x0),
                      puVar2 = &DAT_6b9fb694821e6034, iVar3 != -1)) {
                puVar2 = (undefined1 *)0x12b21488b9618371;
              }
            }
            else {
              puVar2 = (undefined1 *)0x3a4ee4b4cd18045;
              if ((puVar4 != &DAT_6b9fb694821e6034) &&
                 (puVar2 = puVar4, puVar4 == (undefined1 *)0x7772f905052e4c0f)) {
                FUN_001cc250(auStack_f0,0,0x40);
                FUN_0019dedc();
                FUN_001cc250(auStack_b0,0,0x40);
                FUN_001cc250(&iStack_110,0,0x20);
                iStack_110.it_value.tv_sec = 1;
                auStack_b0._12_4_ = 2;
                iStack_110.it_interval.tv_sec = 1;
                auStack_b0._16_8_ = FUN_0019dedc;
                auStack_b0._24_8_ = (void *)0x0;
                iVar3 = timer_create(1,(sigevent *)auStack_b0,&DAT_001f82c0);
                puVar2 = (undefined1 *)0xdc6dd27061ebaf34;
                if (iVar3 != -1) {
                  puVar2 = (undefined1 *)0x3f365012db6b56c1;
                }
              }
            }
          }
          if ((long)puVar4 < 0x3a4ee4b4cd18045) break;
          if (puVar4 == (undefined1 *)0x3a4ee4b4cd18045) {
            puVar2 = (undefined1 *)0xcb528befcd0fb52f;
          }
          else if (puVar4 == (undefined1 *)0x12b21488b9618371) {
            DAT_001f82b8 = '\x01';
            puVar2 = (undefined1 *)0x3a4ee4b4cd18045;
          }
        }
        puVar2 = (undefined1 *)0xcb528befcd0fb52f;
      } while (puVar4 == (undefined1 *)0xae2d64bf93f1b31a);
      if (puVar4 != (undefined1 *)0xdc6dd27061ebaf34) break;
      puVar2 = (undefined1 *)0x3a4ee4b4cd18045;
    }
    puVar2 = puVar4;
  } while (puVar4 != (undefined1 *)0xcb528befcd0fb52f);
  if (*(long *)(lVar1 + 0x28) != lStack_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


