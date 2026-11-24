// Function: mz_zip_get_archive_size
// Entry: 00113824

undefined8 mz_zip_get_archive_size(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = *param_1;
  }
  return uVar1;
}


