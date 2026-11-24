// Function: FUN_001da940
// Entry: 001da940

uint FUN_001da940(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0x75bd924;
  if (*param_1 != 0) {
    uVar1 = *param_1;
  }
  uVar2 = uVar1 * 0x41a7 + (uVar1 / 0x1f31d) * -0x7fffffff;
  uVar1 = uVar2 + 0x7fffffff;
  if (-1 < (long)uVar2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return (uint)uVar1 & 0x7fffffff;
}


