// Function: FUN_00110dc8
// Entry: 00110dc8

int FUN_00110dc8(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  
  *param_1 = 1;
  puVar2 = (undefined8 *)(param_1 + 1);
  if (param_2 == (undefined8 *)0x0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = '\b';
    *(undefined8 *)(param_1 + 1) = *param_2;
    puVar2 = (undefined8 *)(param_1 + 3);
  }
  puVar1 = puVar2;
  if (param_3 != (undefined8 *)0x0) {
    cVar3 = cVar3 + '\b';
    puVar1 = puVar2 + 1;
    *puVar2 = *param_3;
  }
  puVar2 = puVar1;
  if (param_4 != (undefined8 *)0x0) {
    cVar3 = cVar3 + '\b';
    puVar2 = puVar1 + 1;
    *puVar1 = *param_4;
  }
  *(char *)((long)param_1 + 2) = cVar3;
  *(undefined1 *)((long)param_1 + 3) = 0;
  return (int)puVar2 - (int)param_1;
}


