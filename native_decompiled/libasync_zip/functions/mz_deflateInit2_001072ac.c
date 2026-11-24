// Function: mz_deflateInit2
// Entry: 001072ac

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 mz_deflateInit2(long param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  code *pcVar9;
  int iVar10;
  long lVar11;
  
  iVar10 = param_2;
  if (9 < param_2) {
    iVar10 = 10;
  }
  if (param_2 < 0) {
    iVar10 = 6;
  }
  uVar4 = *(uint *)(&DAT_00103c64 + (long)iVar10 * 4) | (uint)(param_2 < 4) << 0xe;
  uVar1 = uVar4 | 0x1000;
  if (param_4 < 1) {
    uVar1 = uVar4;
  }
  uVar4 = uVar1 | 0x40000;
  if (param_6 != 4) {
    uVar4 = uVar1;
  }
  uVar3 = uVar1 | 0x10000;
  if (param_6 != 3) {
    uVar3 = uVar4;
  }
  uVar4 = uVar1 & 0xfffff000;
  if (param_6 != 2) {
    uVar4 = uVar1;
  }
  uVar2 = uVar1 | 0x20000;
  if (param_6 != 1) {
    uVar2 = uVar4;
  }
  if (param_6 < 3) {
    uVar3 = uVar2;
  }
  if (param_2 == 0) {
    uVar3 = uVar1 | 0x80000;
  }
  if (param_1 == 0) {
    uVar8 = 0xfffffffe;
  }
  else {
    uVar8 = 0xffffd8f0;
    if (((param_3 == 8) && (0xfffffff6 < param_5 - 10U)) && ((param_4 == 0xf || (param_4 == -0xf))))
    {
      *(undefined4 *)(param_1 + 0x58) = 0;
      uVar6 = _UNK_00103418;
      uVar5 = _DAT_00103410;
      pcVar9 = *(code **)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x68) = uVar6;
      *(undefined8 *)(param_1 + 0x60) = uVar5;
      puVar7 = PTR_miniz_def_alloc_func_0011c698;
      if (pcVar9 == (code *)0x0) {
        *(undefined **)(param_1 + 0x40) = PTR_miniz_def_alloc_func_0011c698;
        lVar11 = *(long *)(param_1 + 0x48);
        pcVar9 = (code *)puVar7;
      }
      else {
        lVar11 = *(long *)(param_1 + 0x48);
      }
      if (lVar11 == 0) {
        *(undefined **)(param_1 + 0x48) = PTR_miniz_def_free_func_0011c6a0;
      }
      lVar11 = (*pcVar9)(*(undefined8 *)(param_1 + 0x50),1,0x4df78);
      if (lVar11 == 0) {
        uVar8 = 0xfffffffc;
      }
      else {
        *(long *)(param_1 + 0x38) = lVar11;
        tdefl_init(lVar11,0,0,uVar3 | 0x2000);
        uVar8 = 0;
      }
    }
  }
  return uVar8;
}


