// Function: FUN_001d8570
// Entry: 001d8570

ulong FUN_001d8570(uint param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  
  uVar3 = syscall(0x71,(ulong)param_1,param_2);
  puVar1 = (undefined1 *)0x3f365012db6b56c1;
  if (param_1 != 0) {
    puVar1 = (undefined1 *)0xdc6dd27061ebaf34;
  }
  puVar2 = (undefined1 *)0x7772f905052e4c0f;
  if ((int)uVar3 != -0x26) {
    puVar2 = (undefined1 *)0xae2d64bf93f1b31a;
  }
  uVar4 = uVar3;
  puVar5 = (undefined1 *)0x21d53de2b345f472;
  while( true ) {
    while( true ) {
      while ((long)puVar5 < 0x3f365012db6b56c1) {
        if (puVar5 == (undefined1 *)0xae2d64bf93f1b31a) {
          uVar4 = uVar3 & 0xffffffff;
          puVar5 = &DAT_6b9fb694821e6034;
        }
        else if (puVar5 == (undefined1 *)0xdc6dd27061ebaf34) {
          uVar4 = 0xffffffea;
          puVar5 = &DAT_6b9fb694821e6034;
        }
        else if (puVar5 == (undefined1 *)0x21d53de2b345f472) {
          puVar5 = puVar2;
        }
      }
      if (puVar5 != (undefined1 *)0x3f365012db6b56c1) break;
      syscall(0xa9,param_2,0);
      uVar4 = 0;
      *(long *)(param_2 + 8) = *(long *)(param_2 + 8) * 0x3e800000000 >> 0x20;
      puVar5 = &DAT_6b9fb694821e6034;
    }
    if (puVar5 == &DAT_6b9fb694821e6034) break;
    if (puVar5 == (undefined1 *)0x7772f905052e4c0f) {
      puVar5 = puVar1;
    }
  }
  return uVar4;
}


