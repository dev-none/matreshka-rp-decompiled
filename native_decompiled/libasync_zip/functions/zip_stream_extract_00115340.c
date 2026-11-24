// Function: zip_stream_extract
// Entry: 00115340

void zip_stream_extract(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                       undefined8 param_5)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  uVar3 = 0xffffffff;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((param_1 != 0) && (param_3 != 0)) {
    uStack_98 = 0;
    local_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    local_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_a8 = 0;
    local_b0 = 0;
    iVar2 = mz_zip_reader_init_mem(&local_b0,param_1,param_2,0);
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = FUN_001153ec(&local_b0,param_3,param_4,param_5);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


