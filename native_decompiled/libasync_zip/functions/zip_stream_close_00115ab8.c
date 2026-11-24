// Function: zip_stream_close
// Entry: 00115ab8

void zip_stream_close(void *param_1)

{
  if (param_1 != (void *)0x0) {
    FUN_0010fb20(param_1,1);
    FUN_0010babc(param_1,1);
    free(param_1);
    return;
  }
  return;
}


