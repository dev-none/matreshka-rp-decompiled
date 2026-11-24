// Function: mz_deflateEnd
// Entry: 001075a8

undefined8 mz_deflateEnd(long param_1)

{
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50));
    *(undefined8 *)(param_1 + 0x38) = 0;
    return 0;
  }
  return 0;
}


