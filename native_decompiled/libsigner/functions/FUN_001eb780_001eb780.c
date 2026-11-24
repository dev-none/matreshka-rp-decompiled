// Function: FUN_001eb780
// Entry: 001eb780

void FUN_001eb780(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = -0x2a853f5056e0125e;
  if (param_1 != (void *)0x0) {
    lVar1 = -0x4c59a4c035b3e8e;
  }
  lVar2 = -0x44b8d533c6b4f6b5;
  while( true ) {
    while (-0x2a853f5056e0125f < lVar2) {
      if (lVar2 == -0x4c59a4c035b3e8e) {
        FUN_001eb67c(*(undefined8 *)((long)param_1 + 8));
        free(param_1);
        lVar2 = -0x6ebe183313cbdcac;
      }
      else if (lVar2 == -0x2a853f5056e0125e) {
        lVar2 = -0x6ebe183313cbdcac;
      }
    }
    if (lVar2 == -0x6ebe183313cbdcac) break;
    if (lVar2 == -0x44b8d533c6b4f6b5) {
      lVar2 = lVar1;
    }
  }
  return;
}


