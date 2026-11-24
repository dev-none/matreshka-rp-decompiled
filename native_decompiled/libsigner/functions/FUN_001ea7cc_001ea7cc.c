// Function: FUN_001ea7cc
// Entry: 001ea7cc

uint FUN_001ea7cc(uint *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = *param_1;
  lVar1 = -0xab4161c6ac76ac9;
  if (uVar3 <= param_2) {
    lVar1 = -0x11cdc96087771421;
  }
  lVar2 = -0x3ed04c030289d596;
  while( true ) {
    while (lVar4 = lVar2, lVar4 < -0xab4161c6ac76ac9) {
      lVar2 = lVar1;
      if ((lVar4 != -0x3ed04c030289d596) && (lVar2 = lVar4, lVar4 == -0x11cdc96087771421)) {
        uVar3 = 0;
        lVar2 = 0x6de583d82abca3c2;
      }
    }
    if (lVar4 == 0x6de583d82abca3c2) break;
    lVar2 = lVar4;
    if (lVar4 == -0xab4161c6ac76ac9) {
      uVar3 = *(uint *)(*(long *)(param_1 + 2) + (ulong)param_2 * 4);
      lVar2 = 0x6de583d82abca3c2;
    }
  }
  return uVar3;
}


