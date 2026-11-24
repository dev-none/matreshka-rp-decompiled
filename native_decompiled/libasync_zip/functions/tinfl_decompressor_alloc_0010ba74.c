// Function: tinfl_decompressor_alloc
// Entry: 0010ba74

void tinfl_decompressor_alloc(void)

{
  undefined4 *puVar1;
  
  puVar1 = malloc(11000);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  return;
}


