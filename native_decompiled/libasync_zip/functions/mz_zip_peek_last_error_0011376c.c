// Function: mz_zip_peek_last_error
// Entry: 0011376c

undefined4 mz_zip_peek_last_error(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x1c);
  }
  return 0x18;
}


