// Function: FUN_00117a38
// Entry: 00117a38

bool FUN_00117a38(long param_1,long *param_2,ulong param_3,int param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_2[2];
  if (param_3 <= uVar2) {
    return true;
  }
  uVar3 = param_3;
  if (param_4 != 0) {
    if (uVar2 < 2) {
      uVar2 = 1;
    }
    do {
      uVar3 = uVar2;
      uVar2 = uVar3 << 1;
    } while (uVar3 < param_3);
  }
  lVar1 = (**(code **)(param_1 + 0x38))
                    (*(undefined8 *)(param_1 + 0x40),*param_2,(int)param_2[3],uVar3);
  if (lVar1 != 0) {
    *param_2 = lVar1;
    param_2[2] = uVar3;
  }
  return lVar1 != 0;
}


