// Function: thunk_FUN_001ead4c
// Entry: 001e94fc

undefined4 thunk_FUN_001ead4c(undefined4 *param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 *__ptr;
  long lVar4;
  undefined4 unaff_w21;
  
  iVar2 = *param_2;
  lVar1 = 0x2467c250713f82d4;
  if (iVar2 != 0) {
    lVar1 = -0x1adb7dcf41534880;
  }
  lVar3 = -0x5f2839839f1857d2;
  while( true ) {
    while (lVar4 = lVar3, lVar4 < -0x74736ab24c9835f) {
      lVar3 = lVar1;
      if ((lVar4 != -0x5f2839839f1857d2) && (lVar3 = lVar4, lVar4 == -0x1adb7dcf41534880)) {
        __ptr = *(undefined4 **)(param_2 + 2);
        *param_2 = iVar2 + -1;
        unaff_w21 = *__ptr;
        *(undefined8 *)(param_2 + 2) = *(undefined8 *)(__ptr + 2);
        free(__ptr);
        lVar3 = -0x74736ab24c9835f;
      }
    }
    if (lVar4 == -0x74736ab24c9835f) break;
    lVar3 = lVar4;
    if (lVar4 == 0x2467c250713f82d4) {
      unaff_w21 = 0;
      *param_1 = 3;
      lVar3 = -0x74736ab24c9835f;
    }
  }
  return unaff_w21;
}


