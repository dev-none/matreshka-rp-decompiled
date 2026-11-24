// Function: mz_zip_reader_get_filename
// Entry: 00113898

int mz_zip_reader_get_filename(long param_1,uint param_2,undefined1 *param_3,int param_4)

{
  long lVar1;
  ushort uVar2;
  int iVar3;
  long *plVar4;
  uint uVar5;
  
  if ((((param_1 == 0) || (plVar4 = *(long **)(param_1 + 0x68), plVar4 == (long *)0x0)) ||
      (*(uint *)(param_1 + 0x10) <= param_2)) || (*plVar4 == 0)) {
    if (param_4 != 0) {
      *param_3 = 0;
    }
    iVar3 = 0;
    if (param_1 != 0) {
      *(undefined4 *)(param_1 + 0x1c) = 0x18;
      return 0;
    }
  }
  else {
    lVar1 = *plVar4 + (ulong)*(uint *)(plVar4[4] + (ulong)param_2 * 4);
    uVar2 = *(ushort *)(lVar1 + 0x1c);
    uVar5 = (uint)uVar2;
    if (param_4 != 0) {
      uVar5 = (uint)uVar2;
      if (param_4 - 1U <= (uint)uVar2) {
        uVar5 = param_4 - 1U;
      }
      memcpy(param_3,(void *)(lVar1 + 0x2e),(ulong)uVar5);
      param_3[uVar5] = 0;
    }
    iVar3 = uVar5 + 1;
  }
  return iVar3;
}


