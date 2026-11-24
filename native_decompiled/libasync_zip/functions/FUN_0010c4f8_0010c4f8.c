// Function: FUN_0010c4f8
// Entry: 0010c4f8

size_t FUN_0010c4f8(ulong *param_1,ulong param_2,void *param_3,ulong param_4)

{
  size_t __n;
  
  __n = *param_1 - param_2;
  if (param_4 <= __n) {
    __n = param_4;
  }
  if (*param_1 <= param_2) {
    __n = 0;
  }
  memcpy(param_3,(void *)(*(long *)(param_1[0xd] + 0x80) + param_2),__n);
  return __n;
}


