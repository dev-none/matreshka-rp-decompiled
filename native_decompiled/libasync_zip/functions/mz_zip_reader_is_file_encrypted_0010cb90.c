// Function: mz_zip_reader_is_file_encrypted
// Entry: 0010cb90

bool mz_zip_reader_is_file_encrypted(long param_1,uint param_2)

{
  long *plVar1;
  
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 0x68);
    if (((plVar1 != (long *)0x0) && (param_2 < *(uint *)(param_1 + 0x10))) && (*plVar1 != 0)) {
      return (*(byte *)(*plVar1 + (ulong)*(uint *)(plVar1[4] + (ulong)param_2 * 4) + 8) & 0x41) != 0
      ;
    }
    *(undefined4 *)(param_1 + 0x1c) = 0x18;
  }
  return false;
}


