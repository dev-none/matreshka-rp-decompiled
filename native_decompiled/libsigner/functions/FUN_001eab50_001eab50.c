// Function: FUN_001eab50
// Entry: 001eab50

void FUN_001eab50(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  
  puVar4 = calloc(1,0x10);
  puVar1 = &DAT_6b9fb694821e6034;
  if (puVar4 != (undefined4 *)0x0) {
    puVar1 = (undefined1 *)0x12b21488b9618371;
  }
  puVar3 = (undefined1 *)0x3f365012db6b56c1;
  while( true ) {
    while (puVar5 = puVar3, (undefined1 *)0x3f365012db6b56c0 < puVar5) {
      puVar3 = puVar1;
      if ((puVar5 != (undefined1 *)0x3f365012db6b56c1) &&
         (puVar3 = puVar5, puVar5 == &DAT_6b9fb694821e6034)) {
        *param_1 = 2;
        puVar3 = (undefined1 *)0x3a4ee4b4cd18045;
      }
    }
    if (puVar5 == (undefined1 *)0x3a4ee4b4cd18045) break;
    puVar3 = puVar5;
    if (puVar5 == (undefined1 *)0x12b21488b9618371) {
      iVar2 = *param_2;
      *puVar4 = param_3;
      uVar6 = *(undefined8 *)(param_2 + 2);
      *(undefined4 **)(param_2 + 2) = puVar4;
      *(undefined8 *)(puVar4 + 2) = uVar6;
      *param_2 = iVar2 + 1;
      puVar3 = (undefined1 *)0x3a4ee4b4cd18045;
    }
  }
  return;
}


