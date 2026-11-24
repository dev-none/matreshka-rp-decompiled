// Function: FUN_001c7534
// Entry: 001c7534

void FUN_001c7534(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_40 = 0;
  FUN_0016c0bc(param_1,param_2,param_4,&local_40);
  lVar1 = -0x2ba6f13e1a81ae87;
  if (*param_1 != 0) {
    lVar1 = -0x58581ec20935847c;
  }
  lVar3 = 0x52d98d60f83cf13e;
  do {
    while( true ) {
      while (-0x2ba6f13e1a81ae88 < lVar3) {
        if (lVar3 == -0x2ba6f13e1a81ae87) {
          lVar3 = -0x44b8d533c6b4f6b5;
          *param_5 = *param_5 + local_40;
        }
        else if (lVar3 == 0x52d98d60f83cf13e) {
          lVar3 = lVar1;
        }
      }
      if (lVar3 != -0x58581ec20935847c) break;
      lVar3 = -0x44b8d533c6b4f6b5;
    }
  } while (lVar3 != -0x44b8d533c6b4f6b5);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


