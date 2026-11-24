// Function: mz_zip_writer_init_cfile
// Entry: 0010ff28

undefined8 mz_zip_writer_init_cfile(long param_1,FILE *param_2,uint param_3)

{
  undefined8 uVar1;
  __off_t _Var2;
  
  *(code **)(param_1 + 0x50) = FUN_0010fe8c;
  *(undefined8 *)(param_1 + 0x58) = 0;
  if ((param_3 >> 0xf & 1) != 0) {
    *(code **)(param_1 + 0x48) = FUN_0010c754;
  }
  *(long *)(param_1 + 0x60) = param_1;
  uVar1 = mz_zip_writer_init_v2(param_1,0);
  if ((int)uVar1 != 0) {
    *(FILE **)(*(long *)(param_1 + 0x68) + 0x70) = param_2;
    _Var2 = ftello(param_2);
    *(undefined4 *)(param_1 + 0x18) = 5;
    *(__off_t *)(*(long *)(param_1 + 0x68) + 0x78) = _Var2;
    uVar1 = 1;
  }
  return uVar1;
}


