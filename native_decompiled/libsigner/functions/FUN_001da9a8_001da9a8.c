// Function: FUN_001da9a8
// Entry: 001da9a8

ulong FUN_001da9a8(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = 0x75bd924;
  if (*param_1 != 0) {
    uVar1 = *param_1;
  }
  uVar2 = uVar1 * 0x41a7 + (uVar1 / 0x1f31d) * -0x7fffffff;
  uVar1 = uVar2 + 0x7fffffff;
  if (-1 < (long)uVar2) {
    uVar1 = uVar2;
  }
  uVar2 = 0x75bd924;
  if (uVar1 != 0) {
    uVar2 = uVar1;
  }
  uVar3 = uVar2 * 0x41a7 + (uVar2 / 0x1f31d) * -0x7fffffff;
  uVar2 = uVar3 + 0x7fffffff;
  if (-1 < (long)uVar3) {
    uVar2 = uVar3;
  }
  *param_1 = uVar2;
  return uVar2 & 0x7fffffff | (uVar1 & 0x7fffffff) << 0x20;
}


