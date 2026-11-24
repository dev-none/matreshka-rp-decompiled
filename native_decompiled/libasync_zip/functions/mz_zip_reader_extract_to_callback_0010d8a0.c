// Function: mz_zip_reader_extract_to_callback
// Entry: 0010d8a0

void mz_zip_reader_extract_to_callback
               (ulong *param_1,ulong param_2,code *param_3,undefined8 param_4,uint param_5)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined4 uVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long local_3040;
  ulong local_3008;
  long local_2ff0;
  ulong local_2fe8;
  undefined4 local_2fe0 [2750];
  int local_4e8 [6];
  ushort local_4ce;
  ushort local_4cc;
  undefined1 auStack_4c8 [20];
  ushort local_4b4;
  ushort local_4b2;
  int local_4a8;
  ulong local_4a0;
  ulong local_498;
  long local_488;
  int local_47c;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  uVar5 = 0;
  if (param_1 == (ulong *)0x0) goto LAB_0010d924;
  if (((param_3 == (code *)0x0) || (plVar11 = (long *)param_1[0xd], plVar11 == (long *)0x0)) ||
     (param_1[9] == 0)) {
    uVar10 = 0x18;
LAB_0010d91c:
    uVar5 = 0;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar10;
    goto LAB_0010d924;
  }
  if ((uint)param_2 < (uint)param_1[2]) {
    lVar6 = *plVar11 + (ulong)*(uint *)(plVar11[4] + (param_2 & 0xffffffff) * 4);
  }
  else {
    lVar6 = 0;
  }
  uVar5 = FUN_0010f008(param_1,param_2,lVar6,auStack_4c8,0);
  if ((((int)uVar5 == 0) || (uVar5 = 1, local_47c != 0)) || (local_4a0 == 0)) goto LAB_0010d924;
  if ((local_4b4 & 0x61) == 0) {
    if (((param_5 >> 10 & 1) == 0) && ((local_4b2 | 8) != 8)) {
      uVar10 = 4;
      goto LAB_0010d91c;
    }
    lVar6 = (*(code *)param_1[9])(param_1[0xc],local_488,local_4e8,0x1e);
    if (lVar6 == 0x1e) {
      if (local_4e8[0] == 0x4034b50) {
        local_3040 = local_488 + (ulong)local_4ce + (ulong)local_4cc + 0x1e;
        if (*param_1 < local_3040 + local_4a0) {
          uVar10 = 9;
          goto LAB_0010d91c;
        }
        uVar15 = local_4a0;
        if (*(long *)(param_1[0xd] + 0x80) == 0) {
          if (0x1fff < local_4a0) {
            uVar15 = 0x2000;
          }
          lVar6 = (*(code *)param_1[5])(param_1[8],1,uVar15);
          if (lVar6 == 0) {
            *(undefined4 *)((long)param_1 + 0x1c) = 0x10;
            uVar5 = 0;
            goto LAB_0010d924;
          }
          uVar16 = 0;
          local_3008 = local_4a0;
        }
        else {
          local_3008 = 0;
          lVar6 = *(long *)(param_1[0xd] + 0x80) + local_3040;
          uVar16 = local_4a0;
        }
        if (((param_5 >> 10 & 1) == 0) && (local_4b2 != 0)) {
          local_2fe0[0] = 0;
          lVar7 = (*(code *)param_1[5])(param_1[8],1,0x8000);
          if (lVar7 == 0) {
            *(undefined4 *)((long)param_1 + 0x1c) = 0x10;
          }
          else {
            lVar14 = 0;
            uVar12 = 0;
            iVar4 = 0;
            do {
              uVar13 = uVar12 & 0x7fff;
              local_2ff0 = 0x8000 - uVar13;
              if (uVar16 == 0) {
                if (*(long *)(param_1[0xd] + 0x80) != 0) {
                  uVar16 = 0;
                  goto LAB_0010db98;
                }
                uVar16 = uVar15;
                if (local_3008 <= uVar15) {
                  uVar16 = local_3008;
                }
                uVar8 = (*(code *)param_1[9])(param_1[0xc],local_3040,lVar6,uVar16);
                if (uVar8 == uVar16) {
                  local_3040 = local_3040 + uVar16;
                  local_3008 = local_3008 - uVar16;
                  lVar14 = 0;
                  goto LAB_0010db98;
                }
                uVar10 = 0x14;
LAB_0010dd84:
                *(undefined4 *)((long)param_1 + 0x1c) = uVar10;
                uVar5 = 0;
                goto LAB_0010de04;
              }
LAB_0010db98:
              local_2fe8 = uVar16;
              iVar3 = tinfl_decompress(local_2fe0,lVar6 + lVar14,&local_2fe8,lVar7,lVar7 + uVar13,
                                       &local_2ff0,(ulong)(local_3008 != 0) << 1);
              uVar8 = local_2fe8;
              lVar2 = local_2ff0;
              if (local_2ff0 != 0) {
                lVar9 = (*param_3)(param_4,uVar12,lVar7 + uVar13,local_2ff0);
                if (lVar9 == lVar2) {
                  iVar4 = mz_crc32(iVar4,lVar7 + uVar13,lVar2);
                  uVar12 = lVar2 + uVar12;
                  if (uVar12 <= local_498) goto LAB_0010db08;
                  uVar10 = 0xb;
                }
                else {
                  uVar10 = 0x1f;
                }
                goto LAB_0010dd84;
              }
LAB_0010db08:
              uVar16 = uVar16 - uVar8;
              lVar14 = uVar8 + lVar14;
            } while (iVar3 - 1U < 2);
            if (iVar3 == 0) goto LAB_0010ddb8;
          }
          uVar5 = 0;
        }
        else if (*(long *)(param_1[0xd] + 0x80) == 0) {
          if (local_3008 == 0) {
            lVar7 = 0;
            uVar12 = 0;
            iVar4 = 0;
          }
          else {
            uVar12 = 0;
            iVar4 = 0;
            do {
              uVar16 = uVar15;
              if (local_3008 <= uVar15) {
                uVar16 = local_3008;
              }
              uVar13 = (*(code *)param_1[9])(param_1[0xc],local_3040,lVar6,uVar16);
              if (uVar13 != uVar16) {
                uVar10 = 0x14;
                goto LAB_0010dd38;
              }
              if ((param_5 >> 10 & 1) == 0) {
                iVar4 = mz_crc32(param_5,iVar4,lVar6,uVar16);
              }
              uVar13 = (*param_3)(param_4,uVar12,lVar6,uVar16);
              if (uVar13 != uVar16) goto LAB_0010dd2c;
              local_3008 = local_3008 - uVar16;
              local_3040 = local_3040 + uVar16;
              uVar12 = uVar12 + uVar16;
            } while (local_3008 != 0);
            lVar7 = 0;
          }
LAB_0010ddb8:
          if ((param_5 >> 10 & 1) == 0) {
LAB_0010ddbc:
            if (uVar12 == local_498) {
              if (iVar4 == local_4a8) goto LAB_0010ddd4;
              uVar10 = 0xb;
            }
            else {
              uVar10 = 0xd;
            }
            uVar5 = 0;
            *(undefined4 *)((long)param_1 + 0x1c) = uVar10;
          }
          else {
LAB_0010ddd4:
            uVar5 = 1;
          }
        }
        else {
          uVar12 = (*param_3)(param_4,0,lVar6);
          if (uVar12 == local_4a0) {
            if ((param_5 >> 10 & 1) == 0) {
              iVar4 = mz_crc32(0,lVar6,uVar12);
              lVar7 = 0;
              goto LAB_0010ddbc;
            }
            lVar7 = 0;
            uVar5 = 1;
          }
          else {
LAB_0010dd2c:
            uVar10 = 0x1f;
LAB_0010dd38:
            uVar5 = 0;
            lVar7 = 0;
            *(undefined4 *)((long)param_1 + 0x1c) = uVar10;
          }
        }
LAB_0010de04:
        if (*(long *)(param_1[0xd] + 0x80) == 0) {
          (*(code *)param_1[6])(param_1[8],lVar6);
        }
        if (lVar7 != 0) {
          (*(code *)param_1[6])(param_1[8],lVar7);
        }
        goto LAB_0010d924;
      }
      uVar10 = 9;
    }
    else {
      uVar10 = 0x14;
    }
  }
  else {
    uVar10 = 5;
  }
  uVar5 = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = uVar10;
LAB_0010d924:
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


