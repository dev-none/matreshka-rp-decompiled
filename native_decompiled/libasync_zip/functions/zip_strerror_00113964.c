// Function: zip_strerror
// Entry: 00113964

undefined8 zip_strerror(uint param_1)

{
  if (param_1 < 0xffffffe3) {
    return 0;
  }
  return *(undefined8 *)(&DAT_0011c408 + (ulong)-param_1 * 8);
}


