// Function: FUN_001e9264
// Entry: 001e9264

void FUN_001e9264(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = -0x11cdc96087771421;
  if (0x3f < param_2) {
    lVar1 = -0x3ed04c030289d596;
  }
  lVar2 = -0x33b6ee172f5f7c77;
  do {
    while( true ) {
      while (lVar2 < -0x11cdc96087771421) {
        if (lVar2 == -0x3ed04c030289d596) {
          lVar2 = -0xab4161c6ac76ac9;
        }
        else if (lVar2 == -0x33b6ee172f5f7c77) {
          lVar2 = lVar1;
        }
      }
      if (lVar2 != -0x11cdc96087771421) break;
      *(ulong *)(param_1 + 0x210) =
           *(ulong *)(param_1 + 0x210) ^ *(ulong *)(param_1 + (0x3f - param_2) * 8 + 0x10);
      lVar2 = -0xab4161c6ac76ac9;
    }
  } while (lVar2 != -0xab4161c6ac76ac9);
  return;
}


