// Function: zip_entry_index
// Entry: 00114408

undefined8 zip_entry_index(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x78);
  }
  return 0xffffffffffffffff;
}


