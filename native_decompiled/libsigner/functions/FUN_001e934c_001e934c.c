// Function: FUN_001e934c
// Entry: 001e934c

void FUN_001e934c(long param_1,ulong param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  lVar4 = 0x6de583d82abca3c2;
  uVar6 = 1;
LAB_001e93fc:
  uVar3 = param_4;
  lVar1 = 0x4bfd6150022cba99;
  if ((param_2 >> (uVar6 & 0x3f) & 1) != 0) {
    lVar1 = -0x45bc5d4f2a354f46;
  }
  do {
    param_4 = uVar3;
    lVar2 = 0x76eec756bc9b1bd1;
    if (param_4 + 1 != 0x40) {
      lVar2 = -0x58581ec20935847c;
    }
    lVar5 = lVar4;
    while( true ) {
      while (0x4bfd6150022cba98 < lVar5) {
        if (lVar5 < 0x6de583d82abca3c2) {
          if (lVar5 == 0x4bfd6150022cba99) {
            lVar5 = 0x52d98d60f83cf13e;
          }
          else if (lVar5 == 0x52d98d60f83cf13e) {
            param_5 = param_4 + 1;
            lVar5 = lVar2;
          }
        }
        else if (lVar5 == 0x6de583d82abca3c2) {
          lVar5 = -0x63d6c57ea08e5e11;
        }
        else if (lVar5 == 0x76eec756bc9b1bd1) {
          return;
        }
      }
      uVar3 = uVar6;
      lVar4 = lVar1;
      if (lVar5 == -0x63d6c57ea08e5e11) break;
      if (lVar5 == -0x58581ec20935847c) {
        lVar4 = -0x63d6c57ea08e5e11;
        uVar6 = param_5;
        goto LAB_001e93fc;
      }
      if (lVar5 == -0x45bc5d4f2a354f46) {
        lVar5 = 0x52d98d60f83cf13e;
        *(ulong *)(param_1 + 0x210) =
             *(ulong *)(param_1 + 0x210) ^ *(ulong *)(param_1 + (0x3f - param_4) * 8 + 0x10);
      }
    }
  } while( true );
}


