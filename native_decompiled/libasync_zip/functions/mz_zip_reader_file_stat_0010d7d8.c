// Function: mz_zip_reader_file_stat
// Entry: 0010d7d8

void mz_zip_reader_file_stat(long param_1,uint param_2,undefined8 param_3)

{
  long *plVar1;
  
  if (((param_1 != 0) && (plVar1 = *(long **)(param_1 + 0x68), plVar1 != (long *)0x0)) &&
     (param_2 < *(uint *)(param_1 + 0x10))) {
    FUN_0010f008(param_1,param_2,*plVar1 + (ulong)*(uint *)(plVar1[4] + (ulong)param_2 * 4),param_3,
                 0);
    return;
  }
  FUN_0010f008(param_1,param_2,0,param_3,0);
  return;
}


