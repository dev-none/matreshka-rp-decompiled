// Function: FUN_001e95f8
// Entry: 001e95f8

void FUN_001e95f8(undefined4 *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  
  puVar3 = calloc(1,0x10);
  puVar1 = &DAT_6b9fb694821e6034;
  if (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined1 *)0x12b21488b9618371;
  }
  puVar2 = (undefined1 *)0x3f365012db6b56c1;
  while( true ) {
    while (puVar4 = puVar2, (undefined1 *)0x3f365012db6b56c0 < puVar4) {
      puVar2 = puVar1;
      if ((puVar4 != (undefined1 *)0x3f365012db6b56c1) &&
         (puVar2 = puVar4, puVar4 == &DAT_6b9fb694821e6034)) {
        *param_1 = 2;
        puVar2 = (undefined1 *)0x3a4ee4b4cd18045;
      }
    }
    if (puVar4 == (undefined1 *)0x3a4ee4b4cd18045) break;
    puVar2 = puVar4;
    if (puVar4 == (undefined1 *)0x12b21488b9618371) {
      uVar5 = *param_2;
      *puVar3 = param_3;
      *param_2 = puVar3;
      *(undefined8 *)(puVar3 + 2) = uVar5;
      puVar2 = (undefined1 *)0x3a4ee4b4cd18045;
    }
  }
  return;
}


