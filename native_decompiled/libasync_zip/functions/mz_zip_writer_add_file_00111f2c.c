// Function: mz_zip_writer_add_file
// Entry: 00111f2c

void mz_zip_writer_add_file
               (long param_1,undefined8 param_2,char *param_3,undefined8 param_4,undefined4 param_5,
               undefined4 param_6,undefined4 param_7)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  FILE *__stream;
  __off_t _Var4;
  undefined4 uVar5;
  __time_t local_f0 [12];
  __time_t local_90;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  iVar2 = stat(param_3,(stat *)(local_f0 + 1));
  if (iVar2 == 0) {
    local_f0[0] = local_90;
    __stream = fopen(param_3,"rb");
    if (__stream != (FILE *)0x0) {
      fseeko(__stream,0,2);
      _Var4 = ftello(__stream);
      fseeko(__stream,0,0);
      uVar3 = mz_zip_writer_add_read_buf_callback
                        (param_1,param_2,FUN_00111eb4,__stream,_Var4,local_f0,param_4,param_5,
                         param_6,param_7,0,0,0,0);
      fclose(__stream);
      goto LAB_00112030;
    }
    uVar3 = 0;
    if (param_1 == 0) goto LAB_00112030;
    uVar5 = 0x11;
  }
  else {
    uVar3 = 0;
    if (param_1 == 0) goto LAB_00112030;
    uVar5 = 0x17;
  }
  uVar3 = 0;
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
LAB_00112030:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


