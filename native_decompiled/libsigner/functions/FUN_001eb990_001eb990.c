// Function: FUN_001eb990
// Entry: 001eb990

void FUN_001eb990(void *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar1 = &DAT_6b9fb694821e6034;
  if (param_1 != (void *)0x0) {
    puVar1 = (undefined1 *)0x12b21488b9618371;
  }
  puVar2 = (undefined1 *)0x3f365012db6b56c1;
  while( true ) {
    while (puVar3 = puVar2, (undefined1 *)0x3f365012db6b56c0 < puVar3) {
      puVar2 = puVar1;
      if ((puVar3 != (undefined1 *)0x3f365012db6b56c1) &&
         (puVar2 = puVar3, puVar3 == &DAT_6b9fb694821e6034)) {
        puVar2 = (undefined1 *)0x3a4ee4b4cd18045;
      }
    }
    if (puVar3 == (undefined1 *)0x3a4ee4b4cd18045) break;
    puVar2 = puVar3;
    if (puVar3 == (undefined1 *)0x12b21488b9618371) {
      free(param_1);
      puVar2 = (undefined1 *)0x3a4ee4b4cd18045;
    }
  }
  return;
}


