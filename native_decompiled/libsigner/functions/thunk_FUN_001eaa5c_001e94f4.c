// Function: thunk_FUN_001eaa5c
// Entry: 001e94f4

void thunk_FUN_001eaa5c(undefined4 *param_1)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  
  pvVar3 = calloc(1,0x10);
  lVar1 = 0x7772f905052e4c0f;
  if (pvVar3 != (void *)0x0) {
    lVar1 = -0x51d29b406c0e4ce6;
  }
  lVar2 = 0x21d53de2b345f472;
  do {
    while( true ) {
      while (lVar4 = lVar2, 0x21d53de2b345f471 < lVar4) {
        lVar2 = lVar1;
        if ((lVar4 != 0x21d53de2b345f472) && (lVar2 = lVar4, lVar4 == 0x7772f905052e4c0f)) {
          *param_1 = 2;
          lVar2 = -0x23922d8f9e1450cc;
        }
      }
      if (lVar4 != -0x51d29b406c0e4ce6) break;
      lVar2 = -0x23922d8f9e1450cc;
    }
    lVar2 = lVar4;
  } while (lVar4 != -0x23922d8f9e1450cc);
  return;
}


