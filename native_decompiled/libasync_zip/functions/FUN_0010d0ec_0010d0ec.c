// Function: FUN_0010d0ec
// Entry: 0010d0ec

void FUN_0010d0ec(ulong *param_1,ulong param_2,long param_3,ulong param_4,uint param_5,long param_6,
                 ulong param_7,void *param_8)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong local_2ff8;
  long local_2ff0;
  ulong local_2fe8;
  undefined4 local_2fe0 [2750];
  int local_4e8 [6];
  ushort local_4ce;
  ushort local_4cc;
  undefined1 auStack_4c8 [20];
  ushort local_4b4;
  ushort local_4b2;
  uint local_4a8;
  ulong local_4a0;
  ulong local_498;
  long local_488;
  int local_47c;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  uVar3 = 0;
  if (param_1 == (ulong *)0x0) goto LAB_0010d184;
  plVar8 = (long *)param_1[0xd];
  if ((((plVar8 == (long *)0x0) || ((param_3 == 0 && (param_4 != 0)))) ||
      ((param_6 == 0 && (param_7 != 0)))) || (param_1[9] == 0)) {
    uVar7 = 0x18;
    goto LAB_0010d17c;
  }
  if (param_8 == (void *)0x0) {
    if ((uint)param_2 < (uint)param_1[2]) {
      lVar4 = *plVar8 + (ulong)*(uint *)(plVar8[4] + (param_2 & 0xffffffff) * 4);
    }
    else {
      lVar4 = 0;
    }
    uVar3 = FUN_0010f008(param_1,param_2,lVar4,auStack_4c8,0);
    if ((int)uVar3 == 0) goto LAB_0010d184;
  }
  else {
    memcpy(auStack_4c8,param_8,0x458);
  }
  uVar3 = 1;
  if ((local_47c != 0) || (local_4a0 == 0)) goto LAB_0010d184;
  if ((local_4b4 & 0x61) != 0) {
    uVar3 = 0;
    *(undefined4 *)((long)param_1 + 0x1c) = 5;
    goto LAB_0010d184;
  }
  if (((param_5 >> 10 & 1) == 0) && ((local_4b2 | 8) != 8)) {
    uVar7 = 4;
  }
  else {
    uVar11 = local_498;
    if ((param_5 & 0x400) != 0) {
      uVar11 = local_4a0;
    }
    if (uVar11 <= param_4) {
      lVar4 = (*(code *)param_1[9])(param_1[0xc],local_488,local_4e8,0x1e);
      if (lVar4 == 0x1e) {
        if (local_4e8[0] == 0x4034b50) {
          lVar4 = local_488 + (ulong)local_4ce + (ulong)local_4cc + 0x1e;
          if (*param_1 < lVar4 + local_4a0) {
            uVar7 = 9;
            goto LAB_0010d17c;
          }
          if (((param_5 >> 10 & 1) == 0) && (local_4b2 != 0)) {
            local_2fe0[0] = 0;
            if (*(long *)(param_1[0xd] + 0x80) == 0) {
              if (param_6 == 0) {
                local_2ff8 = local_4a0;
                if (0x1fff < local_4a0) {
                  local_2ff8 = 0x2000;
                }
                lVar5 = (*(code *)param_1[5])(param_1[8],1,local_2ff8);
                if (lVar5 == 0) {
                  *(undefined4 *)((long)param_1 + 0x1c) = 0x10;
                  uVar3 = 0;
                  goto LAB_0010d184;
                }
              }
              else {
                lVar5 = param_6;
                local_2ff8 = param_7;
                if (param_7 == 0) {
                  uVar3 = 0;
                  goto LAB_0010d184;
                }
              }
              uVar11 = 0;
              uVar9 = local_4a0;
            }
            else {
              lVar5 = *(long *)(param_1[0xd] + 0x80) + lVar4;
              local_2ff8 = local_4a0;
              uVar9 = 0;
              uVar11 = local_4a0;
            }
            uVar10 = 0;
            lVar12 = 0;
            do {
              local_2ff0 = local_498 - uVar10;
              if (uVar11 == 0) {
                if (*(long *)(param_1[0xd] + 0x80) == 0) {
                  uVar11 = local_2ff8;
                  if (uVar9 <= local_2ff8) {
                    uVar11 = uVar9;
                  }
                  uVar6 = (*(code *)param_1[9])(param_1[0xc],lVar4,lVar5,uVar11);
                  if (uVar6 != uVar11) {
                    uVar7 = 0xb;
                    goto LAB_0010d4fc;
                  }
                  lVar12 = 0;
                  lVar4 = uVar11 + lVar4;
                  uVar9 = uVar9 - uVar11;
                }
                else {
                  uVar11 = 0;
                }
              }
              uVar7 = 4;
              if (uVar9 != 0) {
                uVar7 = 6;
              }
              local_2fe8 = uVar11;
              iVar2 = tinfl_decompress(local_2fe0,lVar5 + lVar12,&local_2fe8,param_3,
                                       param_3 + uVar10,&local_2ff0,uVar7);
              uVar11 = uVar11 - local_2fe8;
              lVar12 = local_2fe8 + lVar12;
              uVar10 = local_2ff0 + uVar10;
            } while (iVar2 == 1);
            if (iVar2 == 0) {
              if (uVar10 == local_498) {
                uVar11 = mz_crc32(0,param_3,uVar10);
                if (uVar11 == local_4a8) {
                  uVar3 = 1;
                  goto LAB_0010d504;
                }
                uVar7 = 0xe;
              }
              else {
                uVar7 = 0xd;
              }
LAB_0010d4fc:
              uVar3 = 0;
              *(undefined4 *)((long)param_1 + 0x1c) = uVar7;
            }
            else {
              uVar3 = 0;
            }
LAB_0010d504:
            if (param_6 == 0 && *(long *)(param_1[0xd] + 0x80) == 0) {
              (*(code *)param_1[6])(param_1[8],lVar5);
            }
            goto LAB_0010d184;
          }
          uVar9 = (*(code *)param_1[9])(param_1[0xc],lVar4,param_3,uVar11);
          if (uVar9 != uVar11) goto LAB_0010d374;
          if (((param_5 >> 10 & 1) != 0) ||
             (uVar11 = mz_crc32(0,param_3,local_498), uVar11 == local_4a8)) {
            uVar3 = 1;
            goto LAB_0010d184;
          }
          uVar7 = 0xe;
        }
        else {
          uVar7 = 9;
        }
      }
      else {
LAB_0010d374:
        uVar7 = 0x14;
      }
      uVar3 = 0;
      *(undefined4 *)((long)param_1 + 0x1c) = uVar7;
      goto LAB_0010d184;
    }
    uVar7 = 0x1a;
  }
LAB_0010d17c:
  uVar3 = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = uVar7;
LAB_0010d184:
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


