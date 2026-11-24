// Function: FUN_001eac6c
// Entry: 001eac6c

int FUN_001eac6c(undefined4 *param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  
  iVar3 = *param_2;
  lVar1 = 0x5e1b922e6e5165fd;
  if (iVar3 != 0) {
    lVar1 = -0x21f9ff0f3589e147;
  }
  lVar2 = -0x34ad741032f04ad1;
  while( true ) {
    while (lVar4 = lVar2, lVar4 < -0x1ea92f4b59985472) {
      lVar2 = lVar1;
      if ((lVar4 != -0x34ad741032f04ad1) && (lVar2 = lVar4, lVar4 == -0x21f9ff0f3589e147)) {
        iVar3 = **(int **)(param_2 + 2);
        lVar2 = -0x1ea92f4b59985472;
      }
    }
    if (lVar4 == -0x1ea92f4b59985472) break;
    lVar2 = lVar4;
    if (lVar4 == 0x5e1b922e6e5165fd) {
      iVar3 = 0;
      *param_1 = 3;
      lVar2 = -0x1ea92f4b59985472;
    }
  }
  return iVar3;
}


