// Function: tdefl_create_comp_flags_from_zip_params
// Entry: 00107404

uint tdefl_create_comp_flags_from_zip_params(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = param_1;
  if (9 < param_1) {
    iVar5 = 10;
  }
  if (param_1 < 0) {
    iVar5 = 6;
  }
  uVar4 = *(uint *)(&DAT_00103c64 + (long)iVar5 * 4) | (uint)(param_1 < 4) << 0xe;
  uVar1 = uVar4 | 0x1000;
  if (param_2 < 1) {
    uVar1 = uVar4;
  }
  uVar4 = uVar1 | 0x40000;
  if (param_3 != 4) {
    uVar4 = uVar1;
  }
  uVar3 = uVar1 | 0x10000;
  if (param_3 != 3) {
    uVar3 = uVar4;
  }
  uVar4 = uVar1 & 0xfffff000;
  if (param_3 != 2) {
    uVar4 = uVar1;
  }
  uVar2 = uVar1 | 0x20000;
  if (param_3 != 1) {
    uVar2 = uVar4;
  }
  if (param_3 < 3) {
    uVar3 = uVar2;
  }
  if (param_1 == 0) {
    uVar3 = uVar1 | 0x80000;
  }
  return uVar3;
}


