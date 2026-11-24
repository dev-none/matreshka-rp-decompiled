// Function: FUN_00110f10
// Entry: 00110f10

bool FUN_00110f10(undefined8 param_1,int param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = (long)param_2;
  iVar1 = (**(code **)(*param_3 + 0x50))(*(undefined8 *)(*param_3 + 0x60),param_3[1],param_1,lVar2);
  if (iVar1 == param_2) {
    param_3[2] = param_3[2] + lVar2;
    param_3[1] = param_3[1] + lVar2;
  }
  return iVar1 == param_2;
}


