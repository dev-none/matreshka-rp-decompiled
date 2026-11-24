// Function: mz_zip_reader_init_cfile
// Entry: 0010c9e4

undefined4 mz_zip_reader_init_cfile(ulong *param_1,FILE *param_2,ulong param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  int iVar3;
  __off_t _Var4;
  __off_t _Var5;
  undefined8 *puVar6;
  undefined4 uVar7;
  code *pcVar8;
  ulong uVar9;
  
  if ((param_1 == (ulong *)0x0) || (param_2 == (FILE *)0x0)) {
    if (param_1 == (ulong *)0x0) {
      return 0;
    }
    uVar7 = 0x11;
    goto LAB_0010cb70;
  }
  _Var4 = ftello(param_2);
  if (param_3 == 0) {
    iVar3 = fseeko(param_2,0,2);
    if (iVar3 != 0) {
      uVar7 = 0x16;
      goto LAB_0010cb70;
    }
    _Var5 = ftello(param_2);
    param_3 = _Var5 - _Var4;
    if (param_3 < 0x16) {
      uVar7 = 8;
      goto LAB_0010cb70;
    }
  }
  puVar2 = PTR_miniz_def_alloc_func_0011c698;
  if ((param_1[0xd] == 0) && (*(int *)((long)param_1 + 0x14) == 0)) {
    pcVar8 = (code *)param_1[5];
    if ((code *)param_1[5] == (code *)0x0) {
      param_1[5] = (ulong)PTR_miniz_def_alloc_func_0011c698;
      pcVar8 = (code *)puVar2;
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
    puVar6 = (undefined8 *)(*pcVar8)(param_1[8],1,0x98);
    param_1[0xd] = (ulong)puVar6;
    if (puVar6 != (undefined8 *)0x0) {
      puVar6[0x12] = 0;
      puVar6[3] = 0;
      puVar6[2] = 0;
      puVar6[5] = 0;
      puVar6[4] = 0;
      puVar6[7] = 0;
      puVar6[6] = 0;
      puVar6[9] = 0;
      puVar6[8] = 0;
      puVar6[0xb] = 0;
      puVar6[10] = 0;
      puVar6[0xd] = 0;
      puVar6[0xc] = 0;
      puVar6[0xf] = 0;
      puVar6[0xe] = 0;
      puVar6[0x11] = 0;
      puVar6[0x10] = 0;
      puVar6[1] = 0;
      *puVar6 = 0;
      uVar9 = param_1[0xd];
      *(undefined4 *)(uVar9 + 0x38) = 4;
      *(undefined4 *)(uVar9 + 0x58) = 4;
      uVar1 = DAT_00103478;
      *(undefined4 *)(uVar9 + 0x18) = 1;
      *(undefined4 *)(uVar9 + 100) = 0;
      *(undefined4 *)(uVar9 + 0x68) = 0;
      *(undefined4 *)(uVar9 + 0x60) = param_4;
      *(undefined8 *)((long)param_1 + 0x14) = uVar1;
      param_1[9] = (ulong)FUN_0010c754;
      param_1[0xc] = (ulong)param_1;
      *param_1 = param_3;
      *(FILE **)(uVar9 + 0x70) = param_2;
      *(__off_t *)(uVar9 + 0x78) = _Var4;
      iVar3 = FUN_0010bd28(param_1,param_4);
      if (iVar3 == 0) {
        FUN_0010babc(param_1,0);
        return 0;
      }
      return 1;
    }
    uVar7 = 0x10;
  }
  else {
    uVar7 = 0x18;
  }
LAB_0010cb70:
  *(undefined4 *)((long)param_1 + 0x1c) = uVar7;
  return 0;
}


