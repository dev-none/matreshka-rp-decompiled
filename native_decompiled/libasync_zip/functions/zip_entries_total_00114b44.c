// Function: zip_entries_total
// Entry: 00114b44

ulong zip_entries_total(long param_1)

{
  if (param_1 != 0) {
    return (ulong)*(uint *)(param_1 + 0x10);
  }
  return 0xffffffffffffffff;
}


