// Function: mz_zip_validate_file_archive
// Entry: 0010f74c

void mz_zip_validate_file_archive(long param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_1 == 0) {
    bVar3 = false;
    if (param_3 == (int *)0x0) goto LAB_0010f81c;
    iVar4 = 0x18;
  }
  else {
    uStack_a8 = 0;
    local_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    local_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    local_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    iVar4 = mz_zip_reader_init_file_v2(&local_c0,param_1,param_2,0,0);
    if (iVar4 == 0) {
      if (param_3 == (int *)0x0) {
        bVar3 = false;
        goto LAB_0010f81c;
      }
      bVar3 = false;
      iVar4 = uStack_a8._4_4_;
    }
    else {
      iVar5 = mz_zip_validate_archive(&local_c0,param_2);
      iVar4 = uStack_a8._4_4_;
      iVar6 = FUN_0010babc(&local_c0,iVar5 != 0);
      bVar3 = iVar6 != 0 && iVar5 != 0;
      if (param_3 == (int *)0x0) goto LAB_0010f81c;
      iVar1 = 0;
      if (iVar5 == 0) {
        iVar1 = iVar4;
      }
      iVar4 = uStack_a8._4_4_;
      if (iVar6 != 0 || iVar1 != 0) {
        iVar4 = iVar1;
      }
    }
  }
  *param_3 = iVar4;
LAB_0010f81c:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar3);
  }
  return;
}


