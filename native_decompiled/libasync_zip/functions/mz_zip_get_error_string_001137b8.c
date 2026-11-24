// Function: mz_zip_get_error_string
// Entry: 001137b8

char * mz_zip_get_error_string(uint param_1)

{
  if (param_1 < 0x21) {
    return &DAT_0010497c + *(int *)(&DAT_0010497c + (ulong)param_1 * 4);
  }
  return "unknown error";
}


