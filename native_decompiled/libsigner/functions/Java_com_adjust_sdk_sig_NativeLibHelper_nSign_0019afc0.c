// Function: Java_com_adjust_sdk_sig_NativeLibHelper_nSign
// Entry: 0019afc0

undefined8
Java_com_adjust_sdk_sig_NativeLibHelper_nSign
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined4 param_6)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_80;
  undefined8 *puStack_78;
  undefined8 *local_70;
  undefined8 *puStack_68;
  undefined4 *local_60;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  timespec tStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_54 = param_6;
  local_50 = param_5;
  local_48 = param_4;
  uStack_40 = param_3;
  FUN_0019dc20();
  puStack_78 = &uStack_40;
  local_70 = &local_48;
  puStack_68 = &local_50;
  local_60 = &local_54;
  local_80 = param_1;
  clock_gettime(0,&tStack_38);
  uVar3 = FUN_0019a8ac(&local_80);
  iVar2 = clock_gettime(0,&tStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


