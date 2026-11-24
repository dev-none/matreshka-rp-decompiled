// Function: zip_entry_write
// Entry: 001144cc

void zip_entry_write(long param_1,byte *param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  ulong uVar6;
  ulong local_40;
  long local_38;
  byte *pbVar5;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 == 0) {
    uVar3 = 0xffffffff;
    goto LAB_00114650;
  }
  if ((param_2 != (byte *)0x0) && (param_3 != 0)) {
    uVar2 = ~*(uint *)(param_1 + 0x98);
    *(ulong *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + param_3;
    pbVar5 = param_2;
    uVar6 = param_3;
    if (param_3 < 4) goto LAB_001145a4;
    do {
      uVar6 = uVar6 - 4;
      uVar2 = *(uint *)(&DAT_00103514 + ((ulong)(*pbVar5 ^ uVar2) & 0xff) * 4) ^ uVar2 >> 8;
      uVar2 = *(uint *)(&DAT_00103514 + ((ulong)(pbVar5[1] ^ uVar2) & 0xff) * 4) ^ uVar2 >> 8;
      uVar2 = *(uint *)(&DAT_00103514 + ((ulong)(pbVar5[2] ^ uVar2) & 0xff) * 4) ^ uVar2 >> 8;
      pbVar4 = pbVar5 + 4;
      uVar2 = *(uint *)(&DAT_00103514 + ((ulong)(pbVar5[3] ^ uVar2) & 0xff) * 4) ^ uVar2 >> 8;
      pbVar5 = pbVar4;
    } while (3 < uVar6);
    for (; pbVar5 = pbVar4, uVar6 != 0; uVar6 = uVar6 - 1) {
LAB_001145a4:
      pbVar4 = pbVar5 + 1;
      uVar2 = *(uint *)(&DAT_00103514 + ((ulong)(*pbVar5 ^ uVar2) & 0xff) * 4) ^ uVar2 >> 8;
    }
    *(uint *)(param_1 + 0x98) = ~uVar2;
    if ((*(byte *)(param_1 + 0x70) & 0xf) == 0) {
      uVar6 = (**(code **)(param_1 + 0x50))
                        (*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0xa0),param_2,
                         param_3);
      if (uVar6 != param_3) {
        uVar3 = 0xfffffff8;
        goto LAB_00114650;
      }
      *(ulong *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + param_3;
      *(ulong *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + param_3;
    }
    else {
      local_40 = param_3;
      uVar2 = tdefl_compress(param_1 + 0xf0,param_2,&local_40,0,0,0);
      if (1 < uVar2) {
        uVar3 = 0xfffffff4;
        goto LAB_00114650;
      }
    }
  }
  uVar3 = 0;
LAB_00114650:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


