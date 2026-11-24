// Function: FUN_00111eb4
// Entry: 00111eb4

size_t FUN_00111eb4(FILE *param_1,long param_2,void *param_3,size_t param_4)

{
  int iVar1;
  __off_t _Var2;
  size_t sVar3;
  
  _Var2 = ftello(param_1);
  if ((-1 < param_2) && ((_Var2 == param_2 || (iVar1 = fseeko(param_1,param_2,0), iVar1 == 0)))) {
    sVar3 = fread(param_3,1,param_4,param_1);
    return sVar3;
  }
  return 0;
}


