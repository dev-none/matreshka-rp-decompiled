// Function: FUN_001eb884
// Entry: 001eb884

void FUN_001eb884(undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  
  puVar3 = calloc(1,0x10);
  lVar1 = -0x51d29b406c0e4ce6;
  if (puVar3 != (undefined4 *)0x0) {
    lVar1 = 0x7772f905052e4c0f;
  }
  lVar2 = 0x21d53de2b345f472;
  do {
    while( true ) {
      while (lVar4 = lVar2, 0x21d53de2b345f471 < lVar4) {
        lVar2 = lVar1;
        if ((lVar4 != 0x21d53de2b345f472) && (lVar2 = lVar4, lVar4 == 0x7772f905052e4c0f)) {
          *puVar3 = param_2;
          *(undefined8 *)(puVar3 + 2) = param_3;
          lVar2 = -0x23922d8f9e1450cc;
        }
      }
      if (lVar4 != -0x51d29b406c0e4ce6) break;
      *param_1 = 2;
      lVar2 = -0x23922d8f9e1450cc;
    }
    lVar2 = lVar4;
  } while (lVar4 != -0x23922d8f9e1450cc);
  return;
}


