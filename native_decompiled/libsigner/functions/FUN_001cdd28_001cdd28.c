// Function: FUN_001cdd28
// Entry: 001cdd28

void * FUN_001cdd28(void *param_1,size_t param_2)

{
  ulong uVar1;
  ulong uVar2;
  void *__dest;
  void *pvVar3;
  ulong uVar4;
  
  __dest = malloc(param_2 + 1);
  uVar1 = 0x19d992f260813f38;
  if (__dest != (void *)0x0) {
    uVar1 = 0x483b6742d550f13b;
  }
  pvVar3 = __dest;
  uVar2 = 0xd24d68cec5d5988;
  while( true ) {
    while (uVar4 = uVar2, uVar4 < 0x483b6742d550f13b) {
      uVar2 = uVar1;
      if ((uVar4 != 0xd24d68cec5d5988) && (uVar2 = uVar4, uVar4 == 0x19d992f260813f38)) {
        pvVar3 = (void *)0x0;
        uVar2 = 0x4e8763835ac1d702;
      }
    }
    if (uVar4 == 0x4e8763835ac1d702) break;
    uVar2 = uVar4;
    if (uVar4 == 0x483b6742d550f13b) {
      *(undefined1 *)((long)__dest + param_2) = 0;
      memcpy(__dest,param_1,param_2);
      pvVar3 = __dest;
      uVar2 = 0x4e8763835ac1d702;
    }
  }
  return pvVar3;
}


