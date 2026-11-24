// Function: FUN_001e9824
// Entry: 001e9824

void FUN_001e9824(void *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = 0x2467c250713f82d4;
  if (param_1 != (void *)0x0) {
    lVar1 = -0x74736ab24c9835f;
  }
  lVar2 = -0x5f2839839f1857d2;
  do {
    while (lVar3 = lVar2, -0x74736ab24c98360 < lVar3) {
      if (lVar3 == -0x74736ab24c9835f) {
        FUN_001e9824(*(undefined8 *)((long)param_1 + 8));
        free(param_1);
        lVar2 = -0x1adb7dcf41534880;
      }
      else {
        lVar2 = lVar3;
        if (lVar3 == 0x2467c250713f82d4) {
          lVar2 = -0x1adb7dcf41534880;
        }
      }
    }
    lVar2 = lVar1;
  } while ((lVar3 == -0x5f2839839f1857d2) || (lVar2 = lVar3, lVar3 != -0x1adb7dcf41534880));
  return;
}


