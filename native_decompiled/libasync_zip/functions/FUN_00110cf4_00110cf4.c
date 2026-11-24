// Function: FUN_00110cf4
// Entry: 00110cf4

void FUN_00110cf4(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_1058 [4096];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar1 = param_3;
  if (0xfff < param_3) {
    uVar1 = 0x1000;
  }
  __memset_chk(auStack_1058,0,uVar1,0x1000);
  do {
    if (param_3 == 0) {
      uVar4 = 1;
LAB_00110d94:
      if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar4);
      }
      return;
    }
    uVar1 = param_3;
    if (0xfff < param_3) {
      uVar1 = 0x1000;
    }
    uVar5 = (ulong)uVar1;
    uVar3 = (**(code **)(param_1 + 0x50))
                      (*(undefined8 *)(param_1 + 0x60),param_2,auStack_1058,uVar5);
    if (uVar3 != uVar5) {
      uVar4 = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0x13;
      goto LAB_00110d94;
    }
    param_3 = param_3 - uVar1;
    param_2 = param_2 + uVar5;
  } while( true );
}


