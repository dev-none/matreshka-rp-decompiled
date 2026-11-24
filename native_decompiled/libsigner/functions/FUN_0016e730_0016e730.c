// Function: FUN_0016e730
// Entry: 0016e730

void FUN_0016e730(int *param_1,long *param_2,undefined4 param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = (**(code **)(*param_2 + 0x580))(param_2,param_3);
  *param_4 = lVar1;
  lVar2 = (**(code **)(*param_2 + 0x78))(param_2);
  lVar1 = 0x135ff1730db8c077;
  if (lVar2 != 0) {
    lVar1 = -0x2e2c7788f6896294;
  }
  lVar2 = 0x469bef0d6588cd58;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          lVar3 = lVar2;
          lVar2 = lVar3;
          if (0x135ff1730db8c076 < lVar3) break;
          if (lVar3 < -0x41fbd41c01740ac7) {
            lVar2 = 0x42f0c6f150e99035;
            if (((lVar3 != -0x66cd56510b566201) && (lVar2 = lVar3, lVar3 == -0x4f3380086e2b70c2)) &&
               (lVar2 = -0x1a2c17747d4c9d16, *param_1 != 0)) {
              lVar2 = 0x30873d520a61889c;
            }
          }
          else if (lVar3 == -0x41fbd41c01740ac7) {
            *param_4 = 0;
            lVar2 = 0x53bf3b45f912026b;
          }
          else if (lVar3 == -0x2e2c7788f6896294) {
            (**(code **)(*param_2 + 0x80))(param_2);
            (**(code **)(*param_2 + 0x88))(param_2);
            lVar2 = 0x42f0c6f150e99035;
          }
          else if (lVar3 == -0x1a2c17747d4c9d16) {
            lVar2 = 0x53bf3b45f912026b;
          }
        }
        if (0x42f0c6f150e99034 < lVar3) break;
        if (lVar3 == 0x135ff1730db8c077) {
          lVar2 = -0x66cd56510b566201;
          if (*param_4 != 0) {
            lVar2 = -0x4f3380086e2b70c2;
          }
        }
        else if (lVar3 == 0x30873d520a61889c) {
          lVar2 = -0x41fbd41c01740ac7;
        }
      }
      if (lVar3 != 0x42f0c6f150e99035) break;
      *param_1 = 0x1c;
      lVar2 = -0x41fbd41c01740ac7;
    }
    lVar2 = lVar1;
  } while ((lVar3 == 0x469bef0d6588cd58) || (lVar2 = lVar3, lVar3 != 0x53bf3b45f912026b));
  return;
}


