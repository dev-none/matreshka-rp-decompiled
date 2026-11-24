// Function: zip_is64
// Entry: 00113bac

undefined4 zip_is64(long param_1)

{
  if ((param_1 != 0) && (*(long *)(param_1 + 0x68) != 0)) {
    return *(undefined4 *)(*(long *)(param_1 + 0x68) + 100);
  }
  return 0xffffffff;
}


