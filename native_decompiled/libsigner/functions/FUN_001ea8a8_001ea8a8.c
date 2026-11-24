// Function: FUN_001ea8a8
// Entry: 001ea8a8

void FUN_001ea8a8(void *param_1)

{
  long lVar1;
  long lVar2;
  void *local_70;
  
  lVar1 = -0x63d6c57ea08e5e11;
  if (param_1 != (void *)0x0) {
    lVar1 = 0x4bfd6150022cba99;
  }
  lVar2 = 0x76eec756bc9b1bd1;
  while( true ) {
    while( true ) {
      while (lVar2 < -0x2ba6f13e1a81ae87) {
        if (lVar2 == -0x63d6c57ea08e5e11) {
          lVar2 = -0x2ba6f13e1a81ae87;
        }
        else if (lVar2 == -0x58581ec20935847c) {
          free(param_1);
          lVar2 = -0x2ba6f13e1a81ae87;
        }
        else if (lVar2 == -0x45bc5d4f2a354f46) {
          lVar2 = -0x58581ec20935847c;
        }
      }
      if (lVar2 < 0x52d98d60f83cf13e) break;
      if (lVar2 == 0x52d98d60f83cf13e) {
        free(local_70);
        lVar2 = -0x58581ec20935847c;
      }
      else if (lVar2 == 0x76eec756bc9b1bd1) {
        lVar2 = lVar1;
      }
    }
    if (lVar2 == -0x2ba6f13e1a81ae87) break;
    if ((lVar2 == 0x4bfd6150022cba99) &&
       (local_70 = *(void **)((long)param_1 + 8), lVar2 = -0x45bc5d4f2a354f46,
       local_70 != (void *)0x0)) {
      lVar2 = 0x52d98d60f83cf13e;
    }
  }
  return;
}


