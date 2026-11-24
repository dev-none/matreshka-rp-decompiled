// Function: mz_compressBound
// Entry: 00107c68

ulong mz_compressBound(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + (param_1 / 0x7c00) * 5 + 0x85;
  uVar2 = (param_1 * 0x6e) / 100 + 0x80;
  if (uVar2 <= uVar1) {
    uVar2 = uVar1;
  }
  return uVar2;
}


