// Function: FUN_00136128
// Entry: 00136128

uint FUN_00136128(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = -0x6ebed165ead34d1e;
  if (((uint)((ulong)param_2 >> 0x18) & 0xff) != 1 || ((uint)((ulong)param_1 >> 0x18) & 0xff) == 1)
  {
    lVar1 = 0x29b3c4006f556ef;
  }
  lVar2 = 0x70346034deb5f84d;
  if ((((uint)param_2 ^ (uint)param_1) & 0xffffff) != 0) {
    lVar2 = 0x462ed2464438bc5;
  }
  lVar3 = -0xe9dc4904d16c8f4;
  while( true ) {
    while( true ) {
      while (lVar4 = lVar3, lVar3 = lVar4, lVar4 < 0x462ed2464438bc5) {
        if (lVar4 == -0x6ebed165ead34d1e) {
          param_2 = 1;
          lVar3 = 0x27d517441ba4efc1;
        }
        else {
          lVar3 = lVar2;
          if ((lVar4 != -0xe9dc4904d16c8f4) && (lVar3 = lVar4, lVar4 == 0x29b3c4006f556ef)) {
            lVar3 = 0x156971be9a93a3ca;
          }
        }
      }
      if (0x27d517441ba4efc0 < lVar4) break;
      if (lVar4 == 0x462ed2464438bc5) {
        lVar3 = 0x156971be9a93a3ca;
      }
      else if (lVar4 == 0x156971be9a93a3ca) {
        param_2 = 0;
        lVar3 = 0x27d517441ba4efc1;
      }
    }
    if (lVar4 == 0x27d517441ba4efc1) break;
    if (lVar4 == 0x70346034deb5f84d) {
      lVar3 = lVar1;
    }
  }
  return (uint)param_2 & 1;
}


