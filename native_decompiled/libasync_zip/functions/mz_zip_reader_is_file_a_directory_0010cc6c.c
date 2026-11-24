// Function: mz_zip_reader_is_file_a_directory
// Entry: 0010cc6c

byte mz_zip_reader_is_file_a_directory(long param_1,uint param_2)

{
  long lVar1;
  long *plVar2;
  
  if (param_1 != 0) {
    plVar2 = *(long **)(param_1 + 0x68);
    if (((plVar2 != (long *)0x0) && (param_2 < *(uint *)(param_1 + 0x10))) && (*plVar2 != 0)) {
      lVar1 = *plVar2 + (ulong)*(uint *)(plVar2[4] + (ulong)param_2 * 4);
      if ((*(ushort *)(lVar1 + 0x1c) != 0) &&
         (*(char *)(lVar1 + (ulong)*(ushort *)(lVar1 + 0x1c) + 0x2d) == '/')) {
        return 1;
      }
      return *(byte *)(lVar1 + 0x26) >> 4 & 1;
    }
    *(undefined4 *)(param_1 + 0x1c) = 0x18;
  }
  return 0;
}


