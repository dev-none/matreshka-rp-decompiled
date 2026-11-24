// Function: mz_inflateInit2
// Entry: 00107cc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 mz_inflateInit2(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  if ((param_2 != 0xf) && (param_2 != -0xf)) {
    return 0xffffd8f0;
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  puVar3 = PTR_miniz_def_alloc_func_0011c698;
  pcVar6 = *(code **)(param_1 + 0x40);
  if (*(code **)(param_1 + 0x40) == (code *)0x0) {
    *(undefined **)(param_1 + 0x40) = PTR_miniz_def_alloc_func_0011c698;
    pcVar6 = (code *)puVar3;
  }
  if (*(long *)(param_1 + 0x48) == 0) {
    *(undefined **)(param_1 + 0x48) = PTR_miniz_def_free_func_0011c6a0;
  }
  puVar4 = (undefined4 *)(*pcVar6)(*(undefined8 *)(param_1 + 0x50),1,0xab10);
  uVar2 = _UNK_00103408;
  uVar1 = _DAT_00103400;
  if (puVar4 == (undefined4 *)0x0) {
    uVar5 = 0xfffffffc;
  }
  else {
    uVar5 = 0;
    *(undefined4 **)(param_1 + 0x38) = puVar4;
    *puVar4 = 0;
    puVar4[0x2ac3] = 1;
    *(undefined8 *)(puVar4 + 0xac0) = uVar2;
    *(undefined8 *)(puVar4 + 0xabe) = uVar1;
    puVar4[0xac2] = param_2;
  }
  return uVar5;
}


