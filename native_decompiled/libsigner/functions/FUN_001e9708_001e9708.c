// Function: FUN_001e9708
// Entry: 001e9708

int FUN_001e9708(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int *__ptr;
  
  __ptr = (int *)*param_1;
  iVar2 = *__ptr + -1;
  lVar1 = -0x21f9ff0f3589e147;
  if (iVar2 != 0) {
    lVar1 = 0x5e1b922e6e5165fd;
  }
  *__ptr = iVar2;
  lVar3 = -0x34ad741032f04ad1;
  while( true ) {
    while (lVar4 = lVar3, lVar4 < -0x1ea92f4b59985472) {
      lVar3 = lVar1;
      if ((lVar4 != -0x34ad741032f04ad1) && (lVar3 = lVar4, lVar4 == -0x21f9ff0f3589e147)) {
        *param_1 = *(undefined8 *)(__ptr + 2);
        free(__ptr);
        lVar3 = -0x1ea92f4b59985472;
      }
    }
    if (lVar4 == -0x1ea92f4b59985472) break;
    lVar3 = lVar4;
    if (lVar4 == 0x5e1b922e6e5165fd) {
      lVar3 = -0x1ea92f4b59985472;
    }
  }
  return iVar2;
}


