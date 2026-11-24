// Function: zip_entry_isdir
// Entry: 0011441c

uint zip_entry_isdir(long param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  uVar2 = *(ulong *)(param_1 + 0x78);
  if (-1 < (long)uVar2) {
    plVar3 = *(long **)(param_1 + 0x68);
    if (((plVar3 != (long *)0x0) && ((uint)uVar2 < *(uint *)(param_1 + 0x10))) && (*plVar3 != 0)) {
      lVar1 = *plVar3 + (ulong)*(uint *)(plVar3[4] + (uVar2 & 0xffffffff) * 4);
      if ((*(ushort *)(lVar1 + 0x1c) != 0) &&
         (*(char *)(lVar1 + (ulong)*(ushort *)(lVar1 + 0x1c) + 0x2d) == '/')) {
        return 1;
      }
      return *(byte *)(lVar1 + 0x26) >> 4 & 1;
    }
    *(undefined4 *)(param_1 + 0x1c) = 0x18;
    return 0;
  }
  return 0xfffffff6;
}


