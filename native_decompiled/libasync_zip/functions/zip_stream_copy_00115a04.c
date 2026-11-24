// Function: zip_stream_copy
// Entry: 00115a04

size_t zip_stream_copy(size_t *param_1,undefined8 *param_2,size_t *param_3)

{
  int __fd;
  FILE *__stream;
  void *__dest;
  size_t __size;
  
  if (param_1 == (size_t *)0x0) {
    __size = 0xffffffffffffffff;
  }
  else {
    mz_zip_writer_finalize_archive();
    __size = *param_1;
    if (((((code *)param_1[10] != FUN_0010fa48) || (*(long *)(param_1[0xd] + 0x80) == 0)) &&
        (*(int *)((long)param_1 + 0x14) == 3)) &&
       (__stream = *(FILE **)(param_1[0xd] + 0x70), __stream != (FILE *)0x0)) {
      __fd = fileno(__stream);
      ftruncate(__fd,__size);
      __size = *param_1;
    }
    if (param_3 != (size_t *)0x0) {
      *param_3 = __size;
    }
    __dest = calloc(1,__size);
    *param_2 = __dest;
    memcpy(__dest,*(void **)(param_1[0xd] + 0x80),__size);
  }
  return __size;
}


