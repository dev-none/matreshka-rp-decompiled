// Function: FUN_00110c64
// Entry: 00110c64

void FUN_00110c64(time_t param_1,short *param_2,short *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  tm *ptVar5;
  time_t local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  local_40 = param_1;
  ptVar5 = localtime(&local_40);
  iVar2 = ptVar5->tm_mday;
  iVar1 = ptVar5->tm_mon;
  iVar3 = ptVar5->tm_year;
  *param_2 = (short)ptVar5->tm_min * 0x20 + (short)(ptVar5->tm_hour << 0xb) +
             (short)((uint)ptVar5->tm_sec >> 1);
  *param_3 = (short)iVar3 * 0x200 + (short)(iVar1 << 5) + (short)iVar2 + 0x6020;
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


