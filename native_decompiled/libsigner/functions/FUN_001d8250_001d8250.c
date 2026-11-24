// Function: FUN_001d8250
// Entry: 001d8250

void FUN_001d8250(undefined8 param_1,uint param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  uint *unaff_x23;
  uint unaff_w24;
  undefined1 *puVar7;
  uint *in_stack_ffffffffffffff78;
  undefined1 *local_80;
  
  uVar2 = param_2 >> 6 & 1;
  lVar3 = tpidr_el0;
  if (((param_2 ^ 0xffffffff) & 0x404000) == 0) {
    uVar2 = 1;
  }
  uVar5 = *(ulong *)(lVar3 + 0x28);
  puVar1 = (undefined1 *)0x7772f905052e4c0f;
  if (uVar2 == 0) {
    puVar1 = (undefined1 *)0xae2d64bf93f1b31a;
  }
  uVar6 = uVar5;
  puVar4 = (undefined1 *)0x21d53de2b345f472;
  do {
    while( true ) {
      do {
        while( true ) {
          while (puVar7 = puVar4, (long)puVar7 < 0x21d53de2b345f472) {
            if ((long)puVar7 < -0x23922d8f9e1450cc) {
              if (puVar7 == (undefined1 *)0xae2d64bf93f1b31a) {
                uVar6 = 0;
                puVar4 = (undefined1 *)0x5e1b922e6e5165fd;
              }
              else {
                puVar4 = puVar7;
                if (puVar7 == (undefined1 *)0xcb528befcd0fb52f) {
                  uVar6 = (ulong)*unaff_x23;
                  puVar4 = (undefined1 *)0x5e1b922e6e5165fd;
                }
              }
            }
            else {
              puVar4 = (undefined1 *)0x3a4ee4b4cd18045;
              if (puVar7 != (undefined1 *)0xdc6dd27061ebaf34) {
                if (puVar7 == (undefined1 *)0x3a4ee4b4cd18045) {
                  unaff_x23 = in_stack_ffffffffffffff78;
                  puVar4 = (undefined1 *)0xcb528befcd0fb52f;
                  in_stack_ffffffffffffff78 = in_stack_ffffffffffffff78 + 2;
                }
                else {
                  puVar4 = puVar7;
                  if (puVar7 == (undefined1 *)0x12b21488b9618371) {
                    unaff_x23 = (uint *)(local_80 + (int)unaff_w24);
                    puVar4 = (undefined1 *)0xcb528befcd0fb52f;
                  }
                }
              }
            }
          }
          if (0x5e1b922e6e5165fc < (long)puVar7) break;
          puVar4 = puVar1;
          if (((puVar7 != (undefined1 *)0x21d53de2b345f472) &&
              (puVar4 = puVar7, puVar7 == (undefined1 *)0x3f365012db6b56c1)) &&
             (puVar4 = (undefined1 *)0x12b21488b9618371, 0xfffffff8 < unaff_w24)) {
            puVar4 = &DAT_6b9fb694821e6034;
          }
        }
        puVar4 = (undefined1 *)0x3a4ee4b4cd18045;
      } while (puVar7 == &DAT_6b9fb694821e6034);
      if (puVar7 != (undefined1 *)0x7772f905052e4c0f) break;
      unaff_w24 = 0xffffffd0;
      puVar4 = (undefined1 *)0x3f365012db6b56c1;
      in_stack_ffffffffffffff78 = (uint *)register0x00000008;
      local_80 = &stack0xffffffffffffff78;
    }
    puVar4 = puVar7;
  } while (puVar7 != (undefined1 *)0x5e1b922e6e5165fd);
  syscall(0x38,0xffffff9c,param_1,(ulong)param_2,uVar6);
  if (*(ulong *)(lVar3 + 0x28) == uVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


