// Function: FUN_0019e794
// Entry: 0019e794

void FUN_0019e794(ulong param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = -0x3ed04c030289d596;
LAB_0019e818:
  do {
    lVar1 = -0xab4161c6ac76ac9;
    if (DAT_001f82b9 == '\0') {
      lVar1 = -0x11cdc96087771421;
    }
    do {
      while (lVar3 = lVar2, -0xab4161c6ac76aca < lVar3) {
        if (lVar3 == -0xab4161c6ac76ac9) {
          FUN_001e9264(param_2 + 0x20,0x26);
          param_1 = *(ulong *)(param_2 + 0x238) | 1;
          lVar2 = 0x6de583d82abca3c2;
          goto LAB_0019e818;
        }
        lVar2 = lVar3;
        if (lVar3 == 0x6de583d82abca3c2) {
          *(ulong *)(param_2 + 0x238) = param_1 | 0x4000000000;
          return;
        }
      }
      lVar2 = lVar1;
    } while ((lVar3 == -0x3ed04c030289d596) || (lVar2 = lVar3, lVar3 != -0x11cdc96087771421));
    param_1 = *(ulong *)(param_2 + 0x238);
    lVar2 = 0x6de583d82abca3c2;
  } while( true );
}


