// Function: mz_zip_is_zip64
// Entry: 001137e0

undefined4 mz_zip_is_zip64(long param_1)

{
  if ((param_1 != 0) && (*(long *)(param_1 + 0x68) != 0)) {
    return *(undefined4 *)(*(long *)(param_1 + 0x68) + 100);
  }
  return 0;
}


