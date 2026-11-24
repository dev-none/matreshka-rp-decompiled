// Function: mz_zip_get_cfile
// Entry: 0011384c

undefined8 mz_zip_get_cfile(long param_1)

{
  if ((param_1 != 0) && (*(long *)(param_1 + 0x68) != 0)) {
    return *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x70);
  }
  return 0;
}


