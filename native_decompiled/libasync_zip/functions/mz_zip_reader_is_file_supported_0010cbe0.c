// Function: mz_zip_reader_is_file_supported
// Entry: 0010cbe0

undefined8 mz_zip_reader_is_file_supported(long param_1,uint param_2)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  plVar2 = *(long **)(param_1 + 0x68);
  if (((plVar2 == (long *)0x0) || (*(uint *)(param_1 + 0x10) <= param_2)) || (*plVar2 == 0)) {
    uVar3 = 0x18;
  }
  else {
    lVar1 = *plVar2 + (ulong)*(uint *)(plVar2[4] + (ulong)param_2 * 4);
    if ((*(byte *)(lVar1 + 10) & 0xf7) == 0 && *(char *)(lVar1 + 0xb) == '\0') {
      if ((*(byte *)(lVar1 + 8) & 0x41) == 0) {
        if ((*(byte *)(lVar1 + 8) >> 5 & 1) == 0) {
          return 1;
        }
        uVar3 = 6;
      }
      else {
        uVar3 = 5;
      }
    }
    else {
      uVar3 = 4;
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  return 0;
}


