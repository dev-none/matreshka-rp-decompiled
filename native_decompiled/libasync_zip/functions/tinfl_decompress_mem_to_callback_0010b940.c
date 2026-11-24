// Function: tinfl_decompress_mem_to_callback
// Entry: 0010b940

uint tinfl_decompress_mem_to_callback
               (long param_1,long *param_2,code *param_3,undefined8 param_4,uint param_5)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  void *__ptr;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  ulong local_2b78;
  long lStack_2b70;
  undefined4 local_2b68 [2750];
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  __ptr = malloc(0x8000);
  if (__ptr == (void *)0x0) {
    uVar5 = 0xffffffff;
  }
  else {
    lVar7 = 0;
    uVar6 = 0;
    local_2b68[0] = 0;
    while( true ) {
      local_2b78 = 0x8000 - uVar6;
      lStack_2b70 = *param_2 - lVar7;
      iVar3 = tinfl_decompress(local_2b68,param_1 + lVar7,&lStack_2b70,__ptr,(long)__ptr + uVar6,
                               &local_2b78,param_5 & 0xfffffff9);
      uVar2 = local_2b78;
      lVar7 = lStack_2b70 + lVar7;
      if ((local_2b78 != 0) &&
         (iVar4 = (*param_3)((long)__ptr + uVar6,local_2b78 & 0xffffffff,param_4), iVar4 == 0)) {
        uVar5 = 0;
        goto LAB_0010ba28;
      }
      if (iVar3 != 2) break;
      uVar6 = (ulong)(uint)((int)uVar2 + (int)uVar6) & 0x7fff;
    }
    uVar5 = (uint)(iVar3 == 0);
LAB_0010ba28:
    free(__ptr);
    *param_2 = lVar7;
  }
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


