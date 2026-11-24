// Function: tinfl_decompress_mem_to_mem
// Entry: 0010b8b8

void tinfl_decompress_mem_to_mem
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               uint param_5)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  undefined8 local_2b30;
  undefined8 local_2b28;
  undefined4 local_2b20 [2750];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  local_2b20[0] = 0;
  local_2b30 = param_4;
  local_2b28 = param_2;
  iVar3 = tinfl_decompress(local_2b20,param_3,&local_2b30,param_1,param_1,&local_2b28,
                           param_5 & 0xfffffff9 | 4);
  uVar1 = local_2b28;
  if (iVar3 != 0) {
    uVar1 = 0xffffffffffffffff;
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


