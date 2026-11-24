// Function: mz_zip_writer_finalize_heap_archive
// Entry: 001131bc

bool mz_zip_writer_finalize_heap_archive(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) {
    if (param_1 == 0) {
      return false;
    }
  }
  else {
    *param_2 = 0;
    *param_3 = 0;
    if (param_1 == 0) {
      return false;
    }
    if ((*(long *)(param_1 + 0x68) != 0) && (*(code **)(param_1 + 0x50) == FUN_0010fa48)) {
      iVar1 = mz_zip_writer_finalize_archive();
      if (iVar1 != 0) {
        *param_2 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x80);
        lVar2 = *(long *)(param_1 + 0x68);
        *param_3 = *(undefined8 *)(lVar2 + 0x88);
        *(undefined8 *)(lVar2 + 0x80) = 0;
        *(undefined8 *)(lVar2 + 0x88) = 0;
        *(undefined8 *)(lVar2 + 0x90) = 0;
      }
      return iVar1 != 0;
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0x18;
  return false;
}


