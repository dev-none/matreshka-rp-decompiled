// Function: FUN_0010b0c0
// Entry: 0010b0c0

undefined8 FUN_0010b0c0(void *param_1,int param_2,ulong *param_3)

{
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  size_t __size;
  
  uVar3 = *param_3;
  __size = param_3[1];
  uVar1 = uVar3 + (long)param_2;
  if (__size < uVar1) {
    if ((int)param_3[3] == 0) {
      return 0;
    }
    do {
      __size = __size * 2;
      if (__size < 0x81) {
        __size = 0x80;
      }
    } while (__size < uVar1);
    pvVar2 = realloc((void *)param_3[2],__size);
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
    uVar3 = *param_3;
    param_3[1] = __size;
    param_3[2] = (ulong)pvVar2;
  }
  else {
    pvVar2 = (void *)param_3[2];
  }
  memcpy((void *)((long)pvVar2 + uVar3),param_1,(long)param_2);
  *param_3 = uVar1;
  return 1;
}


