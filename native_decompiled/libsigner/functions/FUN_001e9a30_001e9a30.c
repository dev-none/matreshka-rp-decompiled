// Function: FUN_001e9a30
// Entry: 001e9a30

uint * FUN_001e9a30(undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint *__ptr;
  void *pvVar4;
  undefined1 *puVar5;
  uint *local_68;
  
  __ptr = calloc(1,0x10);
  uVar1 = (-param_2 & 0x7fU) + param_2;
  puVar2 = (undefined1 *)0xae2d64bf93f1b31a;
  if (__ptr != (uint *)0x0) {
    puVar2 = (undefined1 *)0x7772f905052e4c0f;
  }
  puVar3 = (undefined1 *)0x21d53de2b345f472;
  do {
    while( true ) {
      while( true ) {
        while (puVar5 = puVar3, puVar3 = puVar5, 0x21d53de2b345f471 < (long)puVar5) {
          if ((long)puVar5 < 0x6b9fb694821e6034) {
            puVar3 = puVar2;
            if ((puVar5 != (undefined1 *)0x21d53de2b345f472) &&
               (puVar3 = puVar5, puVar5 == (undefined1 *)0x3f365012db6b56c1)) {
              free(__ptr);
              puVar3 = &DAT_6b9fb694821e6034;
            }
          }
          else if (puVar5 == &DAT_6b9fb694821e6034) {
            local_68 = (uint *)0x0;
            *param_1 = 2;
            puVar3 = (undefined1 *)0x12b21488b9618371;
          }
          else if (puVar5 == (undefined1 *)0x7772f905052e4c0f) {
            *__ptr = uVar1;
            pvVar4 = calloc((ulong)uVar1,4);
            *(void **)(__ptr + 2) = pvVar4;
            puVar3 = (undefined1 *)0x3f365012db6b56c1;
            if (pvVar4 != (void *)0x0) {
              puVar3 = (undefined1 *)0xdc6dd27061ebaf34;
            }
          }
        }
        if (puVar5 != (undefined1 *)0xae2d64bf93f1b31a) break;
        puVar3 = &DAT_6b9fb694821e6034;
      }
      if (puVar5 != (undefined1 *)0xdc6dd27061ebaf34) break;
      puVar3 = (undefined1 *)0x12b21488b9618371;
      local_68 = __ptr;
    }
  } while (puVar5 != (undefined1 *)0x12b21488b9618371);
  return local_68;
}


