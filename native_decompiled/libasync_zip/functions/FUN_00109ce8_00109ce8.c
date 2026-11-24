// Function: FUN_00109ce8
// Entry: 00109ce8

bool FUN_00109ce8(long param_1)

{
  long lVar1;
  bool bVar2;
  size_t __n;
  
  if (*(long **)(param_1 + 0x98) != (long *)0x0) {
    **(long **)(param_1 + 0x98) = *(long *)(param_1 + 0xb0) - *(long *)(param_1 + 0x88);
  }
  if (*(long **)(param_1 + 0xa0) != (long *)0x0) {
    __n = **(long **)(param_1 + 0xa0) - *(long *)(param_1 + 0xc0);
    if (*(uint *)(param_1 + 0x74) <= __n) {
      __n = (ulong)*(uint *)(param_1 + 0x74);
    }
    memcpy((void *)(*(long *)(param_1 + 0x90) + *(long *)(param_1 + 0xc0)),
           (void *)(param_1 + 0x392aa + (ulong)*(uint *)(param_1 + 0x70)),__n);
    lVar1 = *(long *)(param_1 + 0xc0) + __n;
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + (int)__n;
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) - (int)__n;
    *(long *)(param_1 + 0xc0) = lVar1;
    **(long **)(param_1 + 0xa0) = lVar1;
  }
  if (*(int *)(param_1 + 0x78) == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(int *)(param_1 + 0x74) == 0;
  }
  return bVar2;
}


