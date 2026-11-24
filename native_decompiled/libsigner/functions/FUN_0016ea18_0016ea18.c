// Function: FUN_0016ea18
// Entry: 0016ea18

void FUN_0016ea18(undefined4 *param_1,long *param_2,long param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 in_w10;
  
  lVar1 = 0x2585bc4e4d7c8853;
  if (param_3 != 0) {
    lVar1 = -0xfd56005cdcebed6;
  }
  lVar2 = -0x725e511a790cf4ac;
  do {
    while( true ) {
      while( true ) {
        while (lVar3 = lVar2, lVar2 = lVar3, lVar3 < 0x2585bc4e4d7c8853) {
          lVar2 = lVar1;
          if (lVar3 != -0x725e511a790cf4ac) {
            if (lVar3 == -0x608b613e0d15eb95) {
              lVar2 = 0x3cf1d9509481ae04;
            }
            else {
              lVar2 = lVar3;
              if (lVar3 == -0xfd56005cdcebed6) {
                (**(code **)(*param_2 + 0x680))(param_2,param_3,param_4,param_5,param_6);
                lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
                lVar2 = -0x608b613e0d15eb95;
                if (lVar3 != 0) {
                  lVar2 = 0x56c7de269b39cb28;
                }
              }
            }
          }
        }
        if (lVar3 < 0x4119c2fb696ac2cc) break;
        if (lVar3 == 0x4119c2fb696ac2cc) {
          *param_1 = in_w10;
          lVar2 = 0x3cf1d9509481ae04;
        }
        else if (lVar3 == 0x56c7de269b39cb28) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          in_w10 = 0x1d;
          lVar2 = 0x4119c2fb696ac2cc;
        }
      }
      if (lVar3 != 0x2585bc4e4d7c8853) break;
      in_w10 = 3;
      lVar2 = 0x4119c2fb696ac2cc;
    }
  } while (lVar3 != 0x3cf1d9509481ae04);
  return;
}


