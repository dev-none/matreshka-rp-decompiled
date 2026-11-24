// Function: mz_zip_extract_archive_file_to_heap_v2
// Entry: 001135f4

void mz_zip_extract_archive_file_to_heap_v2
               (long param_1,long param_2,undefined8 param_3,undefined8 *param_4,uint param_5,
               undefined4 *param_6)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
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
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = 0;
  }
  if ((param_1 == 0) || (param_2 == 0)) {
    lVar3 = 0;
    if (param_6 == (undefined4 *)0x0) goto LAB_001136e8;
    uVar4 = 0x18;
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
    iVar2 = mz_zip_reader_init_file_v2(&local_c0,param_1,param_5 | 0x800,0,0);
    if (iVar2 == 0) {
      if (param_6 == (undefined4 *)0x0) {
        lVar3 = 0;
        goto LAB_001136e8;
      }
      lVar3 = 0;
      uVar4 = uStack_a8._4_4_;
    }
    else {
      iVar2 = mz_zip_reader_locate_file_v2(&local_c0,param_2,param_3,param_5,&local_4c);
      if (iVar2 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = mz_zip_reader_extract_to_heap(&local_c0,local_4c,param_4,param_5);
      }
      FUN_0010babc(&local_c0,lVar3 != 0);
      if (param_6 == (undefined4 *)0x0) goto LAB_001136e8;
      uVar4 = uStack_a8._4_4_;
    }
  }
  *param_6 = uVar4;
LAB_001136e8:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar3);
  }
  return;
}


