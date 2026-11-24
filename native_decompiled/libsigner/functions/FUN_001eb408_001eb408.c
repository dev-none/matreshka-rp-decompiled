// Function: FUN_001eb408
// Entry: 001eb408

void FUN_001eb408(undefined4 *param_1,uint *param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 *unaff_x20;
  undefined4 *unaff_x21;
  undefined4 unaff_w22;
  uint unaff_w23;
  uint unaff_w24;
  undefined4 *unaff_x25;
  undefined4 *unaff_x26;
  undefined4 unaff_w27;
  long lVar4;
  
  lVar1 = -0x11cdc96087771421;
  if (param_3 != 0) {
    lVar1 = -0x3ed04c030289d596;
  }
  lVar2 = -0x33b6ee172f5f7c77;
  if (*param_2 <= param_3) {
    lVar2 = 0x43d4efcefc88fa10;
  }
  lVar3 = -0x6e8c5e03a6cc6a6b;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (lVar4 = lVar3, lVar3 = lVar4, lVar4 < -0xab4161c6ac76ac9) {
            if (lVar4 < -0x3ed04c030289d596) {
              lVar3 = lVar2;
              if ((lVar4 != -0x6e8c5e03a6cc6a6b) && (lVar3 = lVar4, lVar4 == -0x63d6c57ea08e5e11)) {
                unaff_x26 = unaff_x25;
                lVar3 = 0x76eec756bc9b1bd1;
                unaff_w24 = unaff_w23;
              }
            }
            else if (lVar4 == -0x3ed04c030289d596) {
              unaff_x26 = unaff_x20;
              lVar3 = 0x76eec756bc9b1bd1;
              unaff_w24 = 0;
            }
            else if (lVar4 == -0x33b6ee172f5f7c77) {
              unaff_x20 = *(undefined4 **)(param_2 + 2);
              unaff_w22 = *unaff_x20;
              lVar3 = lVar1;
            }
            else if (lVar4 == -0x11cdc96087771421) {
              unaff_x21 = unaff_x20;
              lVar3 = 0x6de583d82abca3c2;
              unaff_w27 = unaff_w22;
            }
          }
          if (0x4bfd6150022cba98 < lVar4) break;
          if (lVar4 == -0xab4161c6ac76ac9) {
            unaff_w27 = *unaff_x25;
            unaff_x21 = unaff_x25;
            lVar3 = 0x6de583d82abca3c2;
          }
          else if (lVar4 == 0x43d4efcefc88fa10) {
            *param_1 = 4;
            lVar3 = 0x4bfd6150022cba99;
          }
        }
        if (lVar4 != 0x6de583d82abca3c2) break;
        *unaff_x20 = unaff_w27;
        *unaff_x21 = unaff_w22;
        lVar3 = 0x4bfd6150022cba99;
      }
      if (lVar4 != 0x76eec756bc9b1bd1) break;
      unaff_w23 = unaff_w24 + 1;
      unaff_x25 = *(undefined4 **)(unaff_x26 + 2);
      lVar3 = -0xab4161c6ac76ac9;
      if (unaff_w23 != param_3) {
        lVar3 = -0x63d6c57ea08e5e11;
      }
    }
  } while (lVar4 != 0x4bfd6150022cba99);
  return;
}


