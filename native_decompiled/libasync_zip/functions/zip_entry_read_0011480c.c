// Function: zip_entry_read
// Entry: 0011480c

void zip_entry_read(long param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = 0;
  if (param_1 == 0) {
    uVar2 = 0xffffffffffffffff;
  }
  else if ((*(int *)(param_1 + 0x14) == 1) && (uVar4 = *(ulong *)(param_1 + 0x78), -1 < (long)uVar4)
          ) {
    plVar5 = *(long **)(param_1 + 0x68);
    if (((plVar5 == (long *)0x0) || (*(uint *)(param_1 + 0x10) <= (uint)uVar4)) || (*plVar5 == 0)) {
      *(undefined4 *)(param_1 + 0x1c) = 0x18;
    }
    else {
      lVar3 = *plVar5 + (ulong)*(uint *)(plVar5[4] + (uVar4 & 0xffffffff) * 4);
      if (((*(ushort *)(lVar3 + 0x1c) != 0) &&
          (*(char *)(lVar3 + (ulong)*(ushort *)(lVar3 + 0x1c) + 0x2d) == '/')) ||
         ((*(byte *)(lVar3 + 0x26) >> 4 & 1) != 0)) {
        uVar2 = 0xffffffffffffffef;
        goto LAB_001148a4;
      }
    }
    lVar3 = mz_zip_reader_extract_to_heap(param_1,uVar4 & 0xffffffff,&local_40,0);
    *param_2 = lVar3;
    uVar2 = local_40;
    if ((param_3 != (undefined8 *)0x0) && (lVar3 != 0)) {
      *param_3 = local_40;
    }
  }
  else {
    uVar2 = 0xfffffffffffffffd;
  }
LAB_001148a4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


