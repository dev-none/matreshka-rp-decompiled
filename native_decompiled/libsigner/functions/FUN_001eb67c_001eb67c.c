// Function: FUN_001eb67c
// Entry: 001eb67c

void FUN_001eb67c(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x52d98d60f83cf13e;
  if (param_1 != (void *)0x0) {
    lVar1 = -0x2ba6f13e1a81ae87;
  }
  lVar2 = -0x45bc5d4f2a354f46;
  while( true ) {
    while (-0x2ba6f13e1a81ae88 < lVar2) {
      if (lVar2 == -0x2ba6f13e1a81ae87) {
        FUN_001eb67c(*(undefined8 *)((long)param_1 + 8));
        free(param_1);
        lVar2 = -0x58581ec20935847c;
      }
      else if (lVar2 == 0x52d98d60f83cf13e) {
        lVar2 = -0x58581ec20935847c;
      }
    }
    if (lVar2 == -0x58581ec20935847c) break;
    if (lVar2 == -0x45bc5d4f2a354f46) {
      lVar2 = lVar1;
    }
  }
  return;
}


