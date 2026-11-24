// Function: mz_zip_reader_init
// Entry: 0010bbec

undefined4 mz_zip_reader_init(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long lVar5;
  
  puVar1 = PTR_miniz_def_alloc_func_0011c698;
  if (param_1 != (undefined8 *)0x0) {
    if (((param_1[9] == 0) || (param_1[0xd] != 0)) || (*(int *)((long)param_1 + 0x14) != 0)) {
      *(undefined4 *)((long)param_1 + 0x1c) = 0x18;
      return 0;
    }
    pcVar4 = (code *)param_1[5];
    if ((code *)param_1[5] == (code *)0x0) {
      param_1[5] = PTR_miniz_def_alloc_func_0011c698;
      pcVar4 = (code *)puVar1;
    }
    if (param_1[6] == 0) {
      param_1[6] = PTR_miniz_def_free_func_0011c6a0;
    }
    if (param_1[7] == 0) {
      param_1[7] = PTR_miniz_def_realloc_func_0011c6a8;
    }
    *(undefined4 *)((long)param_1 + 0x1c) = 0;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    puVar3 = (undefined8 *)(*pcVar4)(param_1[8],1,0x98);
    param_1[0xd] = puVar3;
    if (puVar3 == (undefined8 *)0x0) {
      *(undefined4 *)((long)param_1 + 0x1c) = 0x10;
      return 0;
    }
    puVar3[0x12] = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[0xb] = 0;
    puVar3[10] = 0;
    puVar3[0xd] = 0;
    puVar3[0xc] = 0;
    puVar3[0xf] = 0;
    puVar3[0xe] = 0;
    puVar3[0x11] = 0;
    puVar3[0x10] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    lVar5 = param_1[0xd];
    *(undefined4 *)(lVar5 + 0x18) = 1;
    *(undefined4 *)(lVar5 + 0x38) = 4;
    *(undefined4 *)(lVar5 + 0x58) = 4;
    *(undefined4 *)(lVar5 + 100) = 0;
    *(undefined4 *)(lVar5 + 0x68) = 0;
    *(undefined4 *)(lVar5 + 0x60) = param_3;
    *(undefined8 *)((long)param_1 + 0x14) = 0x100000001;
    *param_1 = param_2;
    iVar2 = FUN_0010bd28(param_1,param_3);
    if (iVar2 != 0) {
      return 1;
    }
    FUN_0010babc(param_1,0);
  }
  return 0;
}


