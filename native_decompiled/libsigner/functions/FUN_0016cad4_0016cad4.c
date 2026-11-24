// Function: FUN_0016cad4
// Entry: 0016cad4

void FUN_0016cad4(int *param_1,long *param_2,long param_3,undefined4 *param_4)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  int unaff_w20;
  
  lVar1 = -0x33b6ee172f5f7c77;
  if (param_3 != 0) {
    lVar1 = -0x3ed04c030289d596;
  }
  lVar4 = 0x43d4efcefc88fa10;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (lVar3 = lVar4, lVar4 = lVar3, -0xab4161c6ac76aca < lVar3) {
            if (lVar3 < 0x4bfd6150022cba99) {
              if (lVar3 == -0xab4161c6ac76ac9) {
                lVar4 = 0x76eec756bc9b1bd1;
                if (*param_1 != 0) {
                  lVar4 = 0x6de583d82abca3c2;
                }
              }
              else if (lVar3 == 0x43d4efcefc88fa10) {
                lVar4 = lVar1;
              }
            }
            else if (lVar3 == 0x4bfd6150022cba99) {
              *param_4 = 0;
              lVar4 = -0x45bc5d4f2a354f46;
            }
            else {
              lVar4 = 0x4bfd6150022cba99;
              if ((lVar3 != 0x6de583d82abca3c2) && (lVar4 = lVar3, lVar3 == 0x76eec756bc9b1bd1)) {
                lVar4 = -0x45bc5d4f2a354f46;
              }
            }
          }
          if (lVar3 < -0x33b6ee172f5f7c77) break;
          if (lVar3 == -0x33b6ee172f5f7c77) {
            unaff_w20 = 3;
            lVar4 = -0x63d6c57ea08e5e11;
          }
          else if (lVar3 == -0x11cdc96087771421) {
            (**(code **)(*param_2 + 0x80))(param_2);
            (**(code **)(*param_2 + 0x88))(param_2);
            unaff_w20 = 0x19;
            lVar4 = -0x63d6c57ea08e5e11;
          }
        }
        if (lVar3 != -0x63d6c57ea08e5e11) break;
        *param_1 = unaff_w20;
        lVar4 = 0x4bfd6150022cba99;
      }
      if (lVar3 != -0x3ed04c030289d596) break;
      uVar2 = (**(code **)(*param_2 + 0x558))(param_2,param_3);
      lVar4 = *param_2;
      *param_4 = uVar2;
      lVar3 = (**(code **)(lVar4 + 0x78))(param_2);
      lVar4 = -0xab4161c6ac76ac9;
      if (lVar3 != 0) {
        lVar4 = -0x11cdc96087771421;
      }
    }
  } while (lVar3 != -0x45bc5d4f2a354f46);
  return;
}


