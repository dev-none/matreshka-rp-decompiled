// Function: mz_inflateReset
// Entry: 00107e4c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 mz_inflateReset(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    puVar3 = *(undefined4 **)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    uVar2 = _UNK_00103408;
    uVar1 = _DAT_00103400;
    puVar3[0x2ac3] = 1;
    *puVar3 = 0;
    *(undefined8 *)(puVar3 + 0xac0) = uVar2;
    *(undefined8 *)(puVar3 + 0xabe) = uVar1;
    return 0;
  }
  return 0xfffffffe;
}


