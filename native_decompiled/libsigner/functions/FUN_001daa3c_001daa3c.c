// Function: FUN_001daa3c
// Entry: 001daa3c

void FUN_001daa3c(ulong *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = -0x51d29b406c0e4ce6;
  if (param_1 != (ulong *)0x0) {
    lVar1 = 0x7772f905052e4c0f;
  }
  lVar2 = 0x21d53de2b345f472;
  do {
    while( true ) {
      while (lVar3 = lVar2, 0x21d53de2b345f471 < lVar3) {
        lVar2 = lVar1;
        if ((lVar3 != 0x21d53de2b345f472) && (lVar2 = lVar3, lVar3 == 0x7772f905052e4c0f)) {
          *param_1 = (ulong)param_2;
          lVar2 = -0x23922d8f9e1450cc;
        }
      }
      if (lVar3 != -0x51d29b406c0e4ce6) break;
      lVar2 = -0x23922d8f9e1450cc;
    }
    lVar2 = lVar3;
  } while (lVar3 != -0x23922d8f9e1450cc);
  return;
}


