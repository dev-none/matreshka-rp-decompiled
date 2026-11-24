// Function: FUN_001dc470
// Entry: 001dc470

bool FUN_001dc470(undefined4 *param_1,FILE *param_2,long param_3,int param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  
  iVar3 = fseek(param_2,param_3,param_4);
  puVar1 = &DAT_6b9fb694821e6034;
  if (iVar3 != 0) {
    puVar1 = (undefined1 *)0x12b21488b9618371;
  }
  puVar2 = (undefined1 *)0x3f365012db6b56c1;
  while( true ) {
    while (puVar4 = puVar2, (undefined1 *)0x3f365012db6b56c0 < puVar4) {
      puVar2 = puVar1;
      if ((puVar4 != (undefined1 *)0x3f365012db6b56c1) &&
         (puVar2 = puVar4, puVar4 == &DAT_6b9fb694821e6034)) {
        puVar2 = (undefined1 *)0x3a4ee4b4cd18045;
      }
    }
    if (puVar4 == (undefined1 *)0x3a4ee4b4cd18045) break;
    puVar2 = puVar4;
    if (puVar4 == (undefined1 *)0x12b21488b9618371) {
      *param_1 = 2;
      puVar2 = (undefined1 *)0x3a4ee4b4cd18045;
    }
  }
  return iVar3 == 0;
}


