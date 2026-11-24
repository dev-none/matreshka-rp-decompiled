// Function: mz_zip_reader_init_mem
// Entry: 0010c380

undefined4 mz_zip_reader_init_mem(ulong *param_1,long param_2,ulong param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  
  puVar2 = PTR_miniz_def_alloc_func_0011c698;
  if (param_2 == 0) {
    if (param_1 == (ulong *)0x0) {
      return 0;
    }
  }
  else {
    if (param_3 < 0x16) {
      if (param_1 == (ulong *)0x0) {
        return 0;
      }
      uVar5 = 8;
      goto LAB_0010c3cc;
    }
    if (param_1 == (ulong *)0x0) {
      return 0;
    }
    if ((param_1[0xd] == 0) && (*(int *)((long)param_1 + 0x14) == 0)) {
      pcVar6 = (code *)param_1[5];
      if ((code *)param_1[5] == (code *)0x0) {
        param_1[5] = (ulong)PTR_miniz_def_alloc_func_0011c698;
        pcVar6 = (code *)puVar2;
      }
      if (param_1[6] == 0) {
        param_1[6] = (ulong)PTR_miniz_def_free_func_0011c6a0;
      }
      if (param_1[7] == 0) {
        param_1[7] = (ulong)PTR_miniz_def_realloc_func_0011c6a8;
      }
      *(undefined4 *)((long)param_1 + 0x1c) = 0;
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 2) = 0;
      puVar4 = (undefined8 *)(*pcVar6)(param_1[8],1,0x98);
      param_1[0xd] = (ulong)puVar4;
      if (puVar4 != (undefined8 *)0x0) {
        puVar4[0x12] = 0;
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
        uVar7 = param_1[0xd];
        *(undefined4 *)(uVar7 + 0x38) = 4;
        *(undefined4 *)(uVar7 + 0x58) = 4;
        uVar1 = DAT_00103470;
        *(undefined4 *)(uVar7 + 0x18) = 1;
        *(undefined4 *)(uVar7 + 100) = 0;
        *(undefined4 *)(uVar7 + 0x68) = 0;
        *(undefined4 *)(uVar7 + 0x60) = param_4;
        *(undefined8 *)((long)param_1 + 0x14) = uVar1;
        *param_1 = param_3;
        param_1[9] = (ulong)FUN_0010c4f8;
        param_1[0xb] = 0;
        param_1[0xc] = (ulong)param_1;
        *(long *)(uVar7 + 0x80) = param_2;
        *(ulong *)(uVar7 + 0x88) = param_3;
        iVar3 = FUN_0010bd28(param_1,param_4);
        if (iVar3 == 0) {
          FUN_0010babc(param_1,0);
          return 0;
        }
        return 1;
      }
      *(undefined4 *)((long)param_1 + 0x1c) = 0x10;
      return 0;
    }
  }
  uVar5 = 0x18;
LAB_0010c3cc:
  *(undefined4 *)((long)param_1 + 0x1c) = uVar5;
  return 0;
}


