// Function: zip_close
// Entry: 00113b20

void zip_close(__off_t *param_1)

{
  int __fd;
  FILE *__stream;
  __off_t __length;
  
  if (param_1 != (__off_t *)0x0) {
    mz_zip_writer_finalize_archive();
    __length = *param_1;
    if (((((code *)param_1[10] != FUN_0010fa48) || (*(long *)(param_1[0xd] + 0x80) == 0)) &&
        (*(int *)((long)param_1 + 0x14) == 3)) &&
       (__stream = *(FILE **)(param_1[0xd] + 0x70), __stream != (FILE *)0x0)) {
      __fd = fileno(__stream);
      ftruncate(__fd,__length);
    }
    FUN_0010fb20(param_1,1);
    FUN_0010babc(param_1,1);
    free(param_1);
    return;
  }
  return;
}


