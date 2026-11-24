// Function: tdefl_compress_mem_to_heap
// Entry: 0010afc4

undefined8
tdefl_compress_mem_to_heap(long param_1,long param_2,undefined8 *param_3,undefined4 param_4)

{
  long lVar1;
  int iVar2;
  void *__ptr;
  undefined8 uVar3;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uStack_68 = 0;
  local_70 = 0;
  local_58 = 0;
  local_60 = 0;
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = 0;
    local_58 = 1;
    if ((param_1 == 0) && (uVar3 = 0, param_2 != 0)) goto LAB_0010b090;
    __ptr = malloc(0x4df78);
    if (__ptr != (void *)0x0) {
      tdefl_init(__ptr,FUN_0010b0c0,&local_70,param_4);
      local_50 = param_2;
      iVar2 = tdefl_compress(__ptr,param_1,&local_50,0,0,4);
      free(__ptr);
      uVar3 = 0;
      if (iVar2 == 1) {
        *param_3 = local_70;
        uVar3 = local_60;
      }
      goto LAB_0010b090;
    }
  }
  uVar3 = 0;
LAB_0010b090:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


