// Function: tdefl_compress_mem_to_output
// Entry: 0010aeec

void tdefl_compress_mem_to_output
               (long param_1,long param_2,long param_3,undefined8 param_4,undefined4 param_5)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  void *__ptr;
  long local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  bVar2 = false;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((param_2 == 0 || param_1 != 0) && (param_3 != 0)) {
    __ptr = malloc(0x4df78);
    bVar2 = false;
    if (__ptr != (void *)0x0) {
      tdefl_init(__ptr,param_3,param_4,param_5);
      local_60 = param_2;
      iVar3 = tdefl_compress(__ptr,param_1,&local_60,0,0,4);
      bVar2 = iVar3 == 1;
      free(__ptr);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


