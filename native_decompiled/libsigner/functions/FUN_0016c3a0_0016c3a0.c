// Function: FUN_0016c3a0
// Entry: 0016c3a0

bool FUN_0016c3a0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x78))();
  lVar1 = -0x5f2839839f1857d2;
  if (lVar2 == 0) {
    lVar1 = -0x1ea92f4b59985472;
  }
  lVar3 = -0x21f9ff0f3589e147;
  while( true ) {
    while (lVar3 < -0x1ea92f4b59985472) {
      if (lVar3 == -0x5f2839839f1857d2) {
        (**(code **)(*param_1 + 0x80))(param_1);
        (**(code **)(*param_1 + 0x88))(param_1);
        lVar3 = 0x2467c250713f82d4;
      }
      else if (lVar3 == -0x21f9ff0f3589e147) {
        lVar3 = lVar1;
      }
    }
    if (lVar3 == 0x2467c250713f82d4) break;
    if (lVar3 == -0x1ea92f4b59985472) {
      lVar3 = 0x2467c250713f82d4;
    }
  }
  return lVar2 != 0;
}


