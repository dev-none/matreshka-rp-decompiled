// Function: tinfl_decompress_mem_to_heap
// Entry: 0010b78c

void * tinfl_decompress_mem_to_heap(long param_1,long param_2,long *param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  void *pvVar4;
  void *__ptr;
  size_t __size;
  long lVar5;
  long lVar6;
  long local_2b78;
  long lStack_2b70;
  undefined4 local_2b68 [2750];
  long local_70;
  
  lVar2 = tpidr_el0;
  lVar6 = 0;
  local_70 = *(long *)(lVar2 + 0x28);
  lVar5 = 0;
  __size = 0;
  *param_3 = 0;
  local_2b68[0] = 0;
  __ptr = (void *)0x0;
  while( true ) {
    lStack_2b70 = param_2 - lVar5;
    local_2b78 = __size - lVar6;
    lVar1 = 0;
    if (__ptr != (void *)0x0) {
      lVar1 = (long)__ptr + lVar6;
    }
    iVar3 = tinfl_decompress(local_2b68,param_1 + lVar5,&lStack_2b70,__ptr,lVar1,&local_2b78,
                             param_4 & 0xfffffff9 | 4);
    lVar1 = lStack_2b70;
    if ((iVar3 < 0) || (iVar3 == 1)) break;
    lVar6 = *param_3 + local_2b78;
    *param_3 = lVar6;
    if (iVar3 == 0) goto LAB_0010b878;
    __size = __size * 2;
    if (__size < 0x81) {
      __size = 0x80;
    }
    pvVar4 = realloc(__ptr,__size);
    if (pvVar4 == (void *)0x0) break;
    lVar5 = lVar1 + lVar5;
    __ptr = pvVar4;
  }
  free(__ptr);
  __ptr = (void *)0x0;
  *param_3 = 0;
LAB_0010b878:
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return __ptr;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


