// Function: mz_uncompress2
// Entry: 00109a6c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void mz_uncompress2(undefined8 param_1,ulong *param_2,undefined8 param_3,ulong *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 local_a8;
  ulong local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulong uStack_88;
  ulong local_80;
  undefined8 uStack_78;
  undefined4 *local_70;
  undefined *puStack_68;
  code *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  puStack_68 = (undefined *)0x0;
  local_70 = (undefined4 *)0x0;
  uStack_58 = 0;
  local_60 = (code *)0x0;
  uStack_98 = 0;
  local_a0 = 0;
  if ((*param_2 | *param_4) >> 0x20 == 0) {
    local_a0 = *param_4 & 0xffffffff;
    uStack_88 = *param_2 & 0xffffffff;
    local_80 = 0;
    uStack_78 = 0;
    local_48 = 0;
    uStack_40 = 0;
    puStack_68 = PTR_miniz_def_alloc_func_0011c698;
    local_60 = (code *)PTR_miniz_def_free_func_0011c6a0;
    local_a8 = param_3;
    local_90 = param_1;
    puVar5 = malloc(0xab10);
    if (puVar5 == (undefined4 *)0x0) {
      iVar4 = -4;
    }
    else {
      puVar5[0x2ac3] = 1;
      uVar3 = _UNK_00103408;
      uVar2 = _DAT_00103400;
      *puVar5 = 0;
      *(undefined8 *)(puVar5 + 0xac0) = uVar3;
      *(undefined8 *)(puVar5 + 0xabe) = uVar2;
      puVar5[0xac2] = 0xf;
      local_70 = puVar5;
      iVar4 = mz_inflate(&local_a8,4);
      *param_4 = *param_4 - (local_a0 & 0xffffffff);
      if (iVar4 == 1) {
        *param_2 = local_80;
        if (local_70 != (undefined4 *)0x0) {
          (*local_60)(uStack_58);
        }
        iVar4 = 0;
      }
      else {
        if (local_70 != (undefined4 *)0x0) {
          (*local_60)(uStack_58);
        }
        if ((int)local_a0 == 0 && iVar4 == -5) {
          iVar4 = -3;
        }
      }
    }
  }
  else {
    iVar4 = -10000;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar4);
}


