// Function: mz_zip_writer_init_v2
// Entry: 0010f850

undefined4 mz_zip_writer_init_v2(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  long lVar6;
  undefined4 uVar7;
  
  puVar3 = PTR_miniz_def_alloc_func_0011c698;
  if (param_1 == (undefined8 *)0x0) {
    uVar7 = 0;
  }
  else if ((((param_1[0xd] == 0) && (param_1[10] != 0)) && (*(int *)((long)param_1 + 0x14) == 0)) &&
          ((((param_3 >> 0xf & 1) == 0 || (param_1[9] != 0)) && ((param_1[4] & param_1[4] - 1) == 0)
           ))) {
    pcVar5 = (code *)param_1[5];
    if ((code *)param_1[5] == (code *)0x0) {
      param_1[5] = PTR_miniz_def_alloc_func_0011c698;
      pcVar5 = (code *)puVar3;
    }
    if (param_1[6] == 0) {
      param_1[6] = PTR_miniz_def_free_func_0011c6a0;
    }
    if (param_1[7] == 0) {
      param_1[7] = PTR_miniz_def_realloc_func_0011c6a8;
    }
    *param_1 = param_2;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    uVar7 = 1;
    puVar4 = (undefined8 *)(*pcVar5)(param_1[8],1,0x98);
    param_1[0xd] = puVar4;
    if (puVar4 == (undefined8 *)0x0) {
      uVar7 = 0;
      *(undefined4 *)((long)param_1 + 0x1c) = 0x10;
    }
    else {
      puVar4[0x12] = 0;
      uVar1 = param_3 >> 0xe & 1;
      puVar4[3] = 0;
      puVar4[2] = 0;
      puVar4[5] = 0;
      puVar4[4] = 0;
      puVar4[7] = 0;
      puVar4[6] = 0;
      puVar4[9] = 0;
      puVar4[8] = 0;
      puVar4[0xb] = 0;
      puVar4[10] = 0;
      puVar4[0xd] = 0;
      puVar4[0xc] = 0;
      puVar4[0xf] = 0;
      puVar4[0xe] = 0;
      puVar4[0x11] = 0;
      puVar4[0x10] = 0;
      puVar4[1] = 0;
      *puVar4 = 0;
      lVar6 = param_1[0xd];
      *(undefined4 *)(lVar6 + 0x38) = 4;
      *(undefined4 *)(lVar6 + 0x58) = 4;
      uVar2 = DAT_00103498;
      *(undefined4 *)(lVar6 + 0x18) = 1;
      *(uint *)(lVar6 + 100) = uVar1;
      *(uint *)(lVar6 + 0x68) = uVar1;
      *(undefined8 *)((long)param_1 + 0x14) = uVar2;
    }
  }
  else {
    uVar7 = 0;
    *(undefined4 *)((long)param_1 + 0x1c) = 0x18;
  }
  return uVar7;
}


