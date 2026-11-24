// Function: zip_entry_name
// Entry: 001143fc

undefined8 zip_entry_name(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x80);
  }
  return uVar1;
}


