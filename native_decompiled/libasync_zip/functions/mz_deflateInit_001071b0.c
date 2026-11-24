// Function: mz_deflateInit
// Entry: 001071b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 mz_deflateInit(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  int iVar6;
  code *pcVar7;
  uint uVar8;
  long lVar9;
  
  uVar3 = _UNK_00103418;
  uVar5 = _DAT_00103410;
  uVar2 = 0x81000;
  iVar6 = param_2;
  if (9 < param_2) {
    iVar6 = 10;
  }
  if (param_2 < 0) {
    iVar6 = 6;
  }
  if (param_2 != 0) {
    uVar2 = 0x1000;
  }
  uVar8 = 0x6000;
  if (3 < param_2) {
    uVar8 = 0x2000;
  }
  if (param_1 == 0) {
    uVar5 = 0xfffffffe;
  }
  else {
    uVar1 = *(uint *)(&DAT_00103c64 + (long)iVar6 * 4);
    pcVar7 = *(code **)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x68) = uVar3;
    *(undefined8 *)(param_1 + 0x60) = uVar5;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    puVar4 = PTR_miniz_def_alloc_func_0011c698;
    if (pcVar7 == (code *)0x0) {
      *(undefined **)(param_1 + 0x40) = PTR_miniz_def_alloc_func_0011c698;
      lVar9 = *(long *)(param_1 + 0x48);
      pcVar7 = (code *)puVar4;
    }
    else {
      lVar9 = *(long *)(param_1 + 0x48);
    }
    if (lVar9 == 0) {
      *(undefined **)(param_1 + 0x48) = PTR_miniz_def_free_func_0011c6a0;
    }
    lVar9 = (*pcVar7)(*(undefined8 *)(param_1 + 0x50),1,0x4df78);
    if (lVar9 == 0) {
      uVar5 = 0xfffffffc;
    }
    else {
      *(long *)(param_1 + 0x38) = lVar9;
      tdefl_init(lVar9,0,0,uVar8 | uVar2 | uVar1);
      uVar5 = 0;
    }
  }
  return uVar5;
}


