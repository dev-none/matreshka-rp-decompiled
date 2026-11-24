// Function: zip_entry_size
// Entry: 0011449c

undefined8 zip_entry_size(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x88);
  }
  return uVar1;
}


