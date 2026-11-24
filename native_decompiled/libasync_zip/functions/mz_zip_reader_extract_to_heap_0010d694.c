// Function: mz_zip_reader_extract_to_heap
// Entry: 0010d694

long mz_zip_reader_extract_to_heap(long param_1,uint param_2,undefined8 *param_3,uint param_4)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined1 auStack_4b0 [40];
  undefined8 local_488;
  undefined8 auStack_480 [133];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = 0;
  }
  if (((param_1 == 0) || (plVar5 = *(long **)(param_1 + 0x68), plVar5 == (long *)0x0)) ||
     (*(uint *)(param_1 + 0x10) <= param_2)) {
    lVar4 = 0;
  }
  else {
    lVar4 = *plVar5 + (ulong)*(uint *)(plVar5[4] + (ulong)param_2 * 4);
  }
  iVar3 = FUN_0010f008(param_1,param_2,lVar4,auStack_4b0,0);
  if (iVar3 != 0) {
    puVar1 = auStack_480;
    if ((param_4 & 0x400) != 0) {
      puVar1 = &local_488;
    }
    uVar6 = *puVar1;
    lVar4 = (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x40),1,uVar6);
    if (lVar4 == 0) {
      *(undefined4 *)(param_1 + 0x1c) = 0x10;
      goto LAB_0010d7a4;
    }
    iVar3 = FUN_0010d0ec(param_1,param_2,lVar4,uVar6,param_4,0,0,auStack_4b0);
    if (iVar3 != 0) {
      if (param_3 != (undefined8 *)0x0) {
        *param_3 = uVar6;
      }
      goto LAB_0010d7a4;
    }
    (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x40),lVar4);
  }
  lVar4 = 0;
LAB_0010d7a4:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


