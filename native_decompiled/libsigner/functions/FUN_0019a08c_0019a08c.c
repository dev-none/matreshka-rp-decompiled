// Function: FUN_0019a08c
// Entry: 0019a08c

void FUN_0019a08c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined4 local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_6c = 0;
  puVar3 = (undefined1 *)0x21d53de2b345f472;
  do {
    while( true ) {
      while( true ) {
        while (0x21d53de2b345f471 < (long)puVar3) {
          if ((long)puVar3 < 0x6b9fb694821e6034) {
            if (puVar3 == (undefined1 *)0x21d53de2b345f472) {
              uVar2 = FUN_0011630c(&local_6c,param_3);
              puVar3 = (undefined1 *)0xae2d64bf93f1b31a;
              if ((uVar2 & 1) == 0) {
                puVar3 = (undefined1 *)0x7772f905052e4c0f;
              }
            }
            else if (puVar3 == (undefined1 *)0x3f365012db6b56c1) {
              puVar3 = (undefined1 *)0x12b21488b9618371;
            }
          }
          else if (puVar3 == &DAT_6b9fb694821e6034) {
            FUN_00116278(param_3);
            puVar3 = (undefined1 *)0x12b21488b9618371;
          }
          else if (puVar3 == (undefined1 *)0x7772f905052e4c0f) {
            FUN_00118030(param_3);
            local_6c = 0;
            puVar3 = (undefined1 *)0xdc6dd27061ebaf34;
          }
        }
        if (puVar3 != (undefined1 *)0xae2d64bf93f1b31a) break;
        puVar3 = (undefined1 *)0xdc6dd27061ebaf34;
      }
      if (puVar3 != (undefined1 *)0xdc6dd27061ebaf34) break;
      uVar2 = FUN_001105f8(param_1,&local_6c,param_2,param_3);
      puVar3 = (undefined1 *)0x3f365012db6b56c1;
      if ((uVar2 & 1) == 0) {
        puVar3 = &DAT_6b9fb694821e6034;
      }
    }
  } while (puVar3 != (undefined1 *)0x12b21488b9618371);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


