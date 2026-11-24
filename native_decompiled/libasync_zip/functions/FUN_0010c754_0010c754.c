// Function: FUN_0010c754
// Entry: 0010c754

size_t FUN_0010c754(long param_1,long param_2,void *param_3,size_t param_4)

{
  int iVar1;
  __off_t _Var2;
  size_t sVar3;
  long lVar4;
  
  _Var2 = ftello(*(FILE **)(*(long *)(param_1 + 0x68) + 0x70));
  lVar4 = *(long *)(param_1 + 0x68);
  param_2 = *(long *)(lVar4 + 0x78) + param_2;
  if (param_2 < 0) {
    return 0;
  }
  if (_Var2 != param_2) {
    iVar1 = fseeko(*(FILE **)(lVar4 + 0x70),param_2,0);
    if (iVar1 != 0) {
      return 0;
    }
    lVar4 = *(long *)(param_1 + 0x68);
  }
  sVar3 = fread(param_3,1,param_4,*(FILE **)(lVar4 + 0x70));
  return sVar3;
}


