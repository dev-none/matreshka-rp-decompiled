// Function: zip_entry_crc32
// Entry: 001144c0

undefined4 zip_entry_crc32(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x98);
  }
  return uVar1;
}


