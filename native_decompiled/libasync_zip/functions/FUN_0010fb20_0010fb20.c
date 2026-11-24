// Function: FUN_0010fb20
// Entry: 0010fb20

undefined4 FUN_0010fb20(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if (param_1 != 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x68);
    if ((((puVar3 == (undefined8 *)0x0) || (*(long *)(param_1 + 0x28) == 0)) ||
        (*(code **)(param_1 + 0x30) == (code *)0x0)) ||
       ((*(uint *)(param_1 + 0x14) & 0xfffffffe) != 2)) {
      if (param_2 != 0) {
        *(undefined4 *)(param_1 + 0x1c) = 0x18;
      }
      uVar4 = 0;
    }
    else {
      uVar2 = *puVar3;
      *(undefined8 *)(param_1 + 0x68) = 0;
      (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x40),uVar2);
      puVar3[1] = 0;
      *puVar3 = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x40),puVar3[4]);
      puVar3[5] = 0;
      puVar3[4] = 0;
      puVar3[7] = 0;
      puVar3[6] = 0;
      (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x40),puVar3[8]);
      puVar3[9] = 0;
      puVar3[8] = 0;
      puVar3[0xb] = 0;
      puVar3[10] = 0;
      if ((FILE *)puVar3[0xe] == (FILE *)0x0) {
        uVar4 = 1;
      }
      else {
        if (*(int *)(param_1 + 0x18) == 4) {
          iVar1 = fclose((FILE *)puVar3[0xe]);
          if (iVar1 == -1) {
            uVar4 = 0;
            if (param_2 != 0) {
              uVar4 = 0;
              *(undefined4 *)(param_1 + 0x1c) = 0x15;
            }
          }
          else {
            uVar4 = 1;
          }
        }
        else {
          uVar4 = 1;
        }
        puVar3[0xe] = 0;
      }
      if ((*(code **)(param_1 + 0x50) == FUN_0010fa48) && (puVar3[0x10] != 0)) {
        (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x40));
        puVar3[0x10] = 0;
      }
      (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x40),puVar3);
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
  }
  return uVar4;
}


