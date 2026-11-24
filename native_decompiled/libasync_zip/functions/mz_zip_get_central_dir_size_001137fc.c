// Function: mz_zip_get_central_dir_size
// Entry: 001137fc

undefined8 mz_zip_get_central_dir_size(long param_1)

{
  if ((param_1 != 0) && (*(long *)(param_1 + 0x68) != 0)) {
    return *(undefined8 *)(*(long *)(param_1 + 0x68) + 8);
  }
  return 0;
}


