// Function: FUN_001e8a4c
// Entry: 001e8a4c

void FUN_001e8a4c(undefined8 param_1)

{
  long lVar1;
  undefined4 local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_001dab0c(local_30);
  FUN_001e8aa4(param_1,local_30[0]);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


