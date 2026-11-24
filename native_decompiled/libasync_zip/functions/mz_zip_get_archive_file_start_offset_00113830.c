// Function: mz_zip_get_archive_file_start_offset
// Entry: 00113830

undefined8 mz_zip_get_archive_file_start_offset(long param_1)

{
  if ((param_1 != 0) && (*(long *)(param_1 + 0x68) != 0)) {
    return *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x78);
  }
  return 0;
}


