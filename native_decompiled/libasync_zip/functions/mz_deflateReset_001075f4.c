// Function: mz_deflateReset
// Entry: 001075f4

undefined8 mz_deflateReset(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  if ((((param_1 != 0) && (lVar2 = *(long *)(param_1 + 0x38), lVar2 != 0)) &&
      (*(long *)(param_1 + 0x40) != 0)) && (*(long *)(param_1 + 0x48) != 0)) {
    uVar1 = *(undefined4 *)(lVar2 + 0x10);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    tdefl_init(lVar2,0,0,uVar1);
    return 0;
  }
  return 0xfffffffe;
}


