// Function: zip_entry_comp_size
// Entry: 001144b4

undefined8 zip_entry_comp_size(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x90);
  }
  return uVar1;
}


