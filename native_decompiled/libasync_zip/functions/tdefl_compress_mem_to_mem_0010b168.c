// Function: tdefl_compress_mem_to_mem
// Entry: 0010b168

void tdefl_compress_mem_to_mem
               (long param_1,undefined8 param_2,long param_3,long param_4,undefined4 param_5)

{
  long lVar1;
  int iVar2;
  void *__ptr;
  undefined8 uVar3;
  undefined8 local_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  lStack_50 = 0;
  uVar3 = 0;
  if (param_1 != 0) {
    uStack_58 = param_2;
    lStack_50 = param_1;
    if (((param_3 != 0) || (param_4 == 0)) && (__ptr = malloc(0x4df78), __ptr != (void *)0x0)) {
      tdefl_init(__ptr,FUN_0010b0c0,&local_60,param_5);
      local_40 = param_4;
      iVar2 = tdefl_compress(__ptr,param_3,&local_40,0,0,4);
      free(__ptr);
      uVar3 = local_60;
      if (iVar2 == 1) goto LAB_0010b214;
    }
    uVar3 = 0;
  }
LAB_0010b214:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


