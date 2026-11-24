// Function: mz_zip_reader_init_file_v2_rpb
// Entry: 0010c7e0

undefined4
mz_zip_reader_init_file_v2_rpb
          (ulong *param_1,char *param_2,undefined4 param_3,undefined8 param_4,ulong param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  int iVar3;
  FILE *__stream;
  undefined8 *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  code *pcVar7;
  
  if ((param_1 == (ulong *)0x0) || (param_2 == (char *)0x0)) {
    if (param_1 != (ulong *)0x0) goto LAB_0010c860;
  }
  else {
    if (param_5 - 1 < 0x15) {
LAB_0010c860:
      *(undefined4 *)((long)param_1 + 0x1c) = 0x18;
      return 0;
    }
    __stream = fopen(param_2,"r+b");
    if (__stream == (FILE *)0x0) {
      uVar5 = 0x11;
      goto LAB_0010c8c4;
    }
    if (param_5 == 0) {
      iVar3 = fseeko(__stream,0,2);
      if (iVar3 != 0) {
        fclose(__stream);
        uVar5 = 0x16;
LAB_0010c8c4:
        *(undefined4 *)((long)param_1 + 0x1c) = uVar5;
        return 0;
      }
      param_5 = ftello(__stream);
      if (param_5 < 0x16) {
        fclose(__stream);
        uVar5 = 8;
        goto LAB_0010c8c4;
      }
    }
    puVar2 = PTR_miniz_def_alloc_func_0011c698;
    if ((param_1[0xd] == 0) && (*(int *)((long)param_1 + 0x14) == 0)) {
      pcVar7 = (code *)param_1[5];
      if ((code *)param_1[5] == (code *)0x0) {
        param_1[5] = (ulong)PTR_miniz_def_alloc_func_0011c698;
        pcVar7 = (code *)puVar2;
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
      puVar4 = (undefined8 *)(*pcVar7)(param_1[8],1,0x98);
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
        uVar6 = param_1[0xd];
        *(undefined4 *)(uVar6 + 0x38) = 4;
        *(undefined4 *)(uVar6 + 0x58) = 4;
        uVar1 = DAT_00103458;
        *(undefined4 *)(uVar6 + 0x18) = 1;
        *(undefined4 *)(uVar6 + 100) = 0;
        *(undefined4 *)(uVar6 + 0x68) = 0;
        *(undefined4 *)(uVar6 + 0x60) = param_3;
        *(undefined8 *)((long)param_1 + 0x14) = uVar1;
        param_1[9] = (ulong)FUN_0010c754;
        param_1[0xc] = (ulong)param_1;
        *param_1 = param_5;
        *(FILE **)(uVar6 + 0x70) = __stream;
        *(undefined8 *)(uVar6 + 0x78) = param_4;
        iVar3 = FUN_0010bd28(param_1,param_3);
        if (iVar3 == 0) {
          FUN_0010babc(param_1,0);
          return 0;
        }
        return 1;
      }
      *(undefined4 *)((long)param_1 + 0x1c) = 0x10;
    }
    else {
      *(undefined4 *)((long)param_1 + 0x1c) = 0x18;
    }
    fclose(__stream);
  }
  return 0;
}


