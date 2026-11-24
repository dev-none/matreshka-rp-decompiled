// Function: FUN_0016ec38
// Entry: 0016ec38

void FUN_0016ec38(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = -0x203d639f93f665df;
  if (param_3 == 0 || param_2 == 0) {
    lVar1 = 0x3582441379697640;
  }
  lVar2 = -0x3c84e412275c5f52;
  while( true ) {
    while (lVar3 = lVar2, lVar3 < 0x22bae9789d72b4f3) {
      lVar2 = lVar1;
      if ((lVar3 != -0x3c84e412275c5f52) && (lVar2 = lVar3, lVar3 == -0x203d639f93f665df)) {
        (**(code **)(*param_1 + 0x600))(param_1,param_2,param_3,0);
        lVar2 = 0x22bae9789d72b4f3;
      }
    }
    if (lVar3 == 0x22bae9789d72b4f3) break;
    lVar2 = lVar3;
    if (lVar3 == 0x3582441379697640) {
      lVar2 = 0x22bae9789d72b4f3;
    }
  }
  return;
}


