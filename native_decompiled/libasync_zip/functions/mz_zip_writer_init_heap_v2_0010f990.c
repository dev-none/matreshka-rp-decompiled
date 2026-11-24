// Function: mz_zip_writer_init_heap_v2
// Entry: 0010f990

undefined8 mz_zip_writer_init_heap_v2(long param_1,ulong param_2,ulong param_3,uint param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  *(code **)(param_1 + 0x50) = FUN_0010fa48;
  *(undefined8 *)(param_1 + 0x58) = 0;
  if ((param_4 >> 0xf & 1) != 0) {
    *(code **)(param_1 + 0x48) = FUN_0010c4f8;
  }
  *(long *)(param_1 + 0x60) = param_1;
  uVar1 = mz_zip_writer_init_v2(param_1,param_2,param_4);
  if ((int)uVar1 != 0) {
    if (param_3 <= param_2) {
      param_3 = param_2;
    }
    *(undefined4 *)(param_1 + 0x18) = 3;
    if (param_3 != 0) {
      lVar2 = (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x40),1,param_3);
      lVar3 = *(long *)(param_1 + 0x68);
      *(long *)(lVar3 + 0x80) = lVar2;
      if (lVar2 == 0) {
        FUN_0010fb20(param_1,0);
        *(undefined4 *)(param_1 + 0x1c) = 0x10;
        return 0;
      }
      *(ulong *)(lVar3 + 0x90) = param_3;
    }
    uVar1 = 1;
  }
  return uVar1;
}


