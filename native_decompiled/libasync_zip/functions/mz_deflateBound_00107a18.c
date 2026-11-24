// Function: mz_deflateBound
// Entry: 00107a18

ulong mz_deflateBound(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_2 + (param_2 / 0x7c00) * 5 + 0x85;
  uVar2 = (param_2 * 0x6e) / 100 + 0x80;
  if (uVar2 <= uVar1) {
    uVar2 = uVar1;
  }
  return uVar2;
}


