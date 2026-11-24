// Function: FUN_001104dc
// Entry: 001104dc

void FUN_001104dc(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = (ulong)*(byte *)(param_1 + 8);
  lVar1 = 0x4d38fa67cd1802ae;
  if (*(byte *)(param_1 + 8) != 0) {
    lVar1 = -0x3e25d1f1afeb5e6f;
  }
  lVar3 = 0x754f3abf4a408c98;
  while( true ) {
    while (lVar3 < 0x68bbcb416a80b2d5) {
      if (lVar3 == -0x3e25d1f1afeb5e6f) {
        FUN_001e9264(param_1 + 0x20,5);
        uVar2 = *(ulong *)(param_1 + 0x238) | 1;
        lVar3 = 0x68bbcb416a80b2d5;
      }
      else if (lVar3 == 0x4d38fa67cd1802ae) {
        uVar2 = *(ulong *)(param_1 + 0x238);
        lVar3 = 0x68bbcb416a80b2d5;
      }
    }
    if (lVar3 == 0x68bbcb416a80b2d5) break;
    if (lVar3 == 0x754f3abf4a408c98) {
      lVar3 = lVar1;
    }
  }
  *(ulong *)(param_1 + 0x238) = uVar2 | 0x20;
  return;
}


