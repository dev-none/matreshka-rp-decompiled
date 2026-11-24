// Function: FUN_001dc56c
// Entry: 001dc56c

uint FUN_001dc56c(undefined4 *param_1,FILE *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = ftell(param_2);
  lVar1 = -0x21f9ff0f3589e147;
  if (lVar3 < 0) {
    lVar1 = 0x5e1b922e6e5165fd;
  }
  lVar2 = -0x34ad741032f04ad1;
  while( true ) {
    while (lVar4 = lVar2, lVar4 < -0x1ea92f4b59985472) {
      lVar2 = lVar1;
      if ((lVar4 != -0x34ad741032f04ad1) && (lVar2 = lVar4, lVar4 == -0x21f9ff0f3589e147)) {
        *param_3 = lVar3;
        lVar2 = -0x1ea92f4b59985472;
      }
    }
    if (lVar4 == -0x1ea92f4b59985472) break;
    lVar2 = lVar4;
    if (lVar4 == 0x5e1b922e6e5165fd) {
      *param_1 = 2;
      lVar2 = -0x1ea92f4b59985472;
    }
  }
  return (uint)((ulong)lVar3 >> 0x3f) ^ 1;
}


