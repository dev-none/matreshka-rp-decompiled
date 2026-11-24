// Function: mz_zip_reader_extract_iter_new
// Entry: 0010deec

void mz_zip_reader_extract_iter_new(ulong *param_1,uint param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined4 uVar7;
  code *pcVar8;
  ulong uVar9;
  long lVar10;
  int local_58 [6];
  ushort local_3e;
  ushort local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)0x0;
  if (param_1 == (ulong *)0x0) goto LAB_0010e1a4;
  if (param_1[0xd] != 0) {
    plVar3 = (long *)(*(code *)param_1[5])(param_1[8],1,0x2fb0);
    if (plVar3 == (long *)0x0) {
      *(undefined4 *)((long)param_1 + 0x1c) = 0x10;
      goto LAB_0010e1a4;
    }
    plVar6 = (long *)param_1[0xd];
    if (plVar6 == (long *)0x0) {
      lVar5 = 0;
    }
    else if (param_2 < (uint)param_1[2]) {
      lVar5 = *plVar6 + (ulong)*(uint *)(plVar6[4] + (ulong)param_2 * 4);
    }
    else {
      lVar5 = 0;
    }
    iVar2 = FUN_0010f008(param_1,(ulong)param_2,lVar5,plVar3 + 9,0);
    if (iVar2 == 0) {
LAB_0010e190:
      (*(code *)param_1[6])(param_1[8],plVar3);
    }
    else {
      if ((*(ushort *)((long)plVar3 + 0x5c) & 0x61) == 0) {
        if (((param_3 >> 10 & 1) != 0) || ((*(ushort *)((long)plVar3 + 0x5e) | 8) == 8)) {
          *(undefined4 *)((long)plVar3 + 0xc) = 0;
          *(undefined4 *)(plVar3 + 2) = 0;
          plVar3[0x94] = 0;
          plVar3[0x96] = 0;
          plVar3[0x95] = 0;
          *(uint *)(plVar3 + 1) = param_3;
          pcVar8 = (code *)param_1[9];
          uVar4 = param_1[0xc];
          *plVar3 = (long)param_1;
          plVar3[4] = 0;
          plVar3[7] = 0;
          plVar3[8] = plVar3[0x11];
          lVar5 = (*pcVar8)(uVar4,plVar3[0x11],local_58,0x1e);
          if (lVar5 == 0x1e) {
            if (local_58[0] == 0x4034b50) {
              uVar4 = plVar3[0xe];
              uVar9 = *param_1;
              lVar5 = (ulong)local_3e + (ulong)local_3c + plVar3[8] + 0x1e;
              plVar3[8] = lVar5;
              if (uVar9 < lVar5 + uVar4) {
                uVar7 = 9;
LAB_0010e070:
                *(undefined4 *)((long)param_1 + 0x1c) = uVar7;
                (*(code *)param_1[6])(param_1[8],plVar3);
                goto LAB_0010e1a0;
              }
              lVar10 = *(long *)(param_1[0xd] + 0x80);
              if (lVar10 == 0) {
                if (((param_3 >> 10 & 1) == 0) && (*(short *)((long)plVar3 + 0x5e) != 0)) {
                  if (0x1fff < uVar4) {
                    uVar4 = 0x2000;
                  }
                  uVar9 = param_1[8];
                  pcVar8 = (code *)param_1[5];
                  plVar3[3] = uVar4;
                  lVar5 = (*pcVar8)(uVar9,1);
                  plVar3[0x94] = lVar5;
                  if (lVar5 == 0) {
                    uVar7 = 0x10;
                    goto LAB_0010e070;
                  }
                  uVar4 = plVar3[0xe];
                }
                else {
                  plVar3[3] = 0;
                }
                plVar3[5] = 0;
              }
              else {
                plVar3[5] = uVar4;
                plVar3[0x94] = lVar10 + lVar5;
                plVar3[3] = uVar4;
              }
              plVar3[6] = uVar4;
              if (((param_3 >> 10 & 1) != 0) || (*(short *)((long)plVar3 + 0x5e) == 0))
              goto LAB_0010e1a4;
              uVar4 = param_1[8];
              pcVar8 = (code *)param_1[5];
              *(undefined4 *)(plVar3 + 0x97) = 0;
              lVar5 = (*pcVar8)(uVar4,1,0x8000);
              plVar3[0x95] = lVar5;
              if (lVar5 != 0) goto LAB_0010e1a4;
              lVar5 = plVar3[0x94];
              *(undefined4 *)((long)param_1 + 0x1c) = 0x10;
              if (lVar5 != 0) {
                (*(code *)param_1[6])(param_1[8]);
              }
              goto LAB_0010e190;
            }
            uVar7 = 9;
          }
          else {
            uVar7 = 0x14;
          }
          *(undefined4 *)((long)param_1 + 0x1c) = uVar7;
          (*(code *)param_1[6])(param_1[8],plVar3);
          goto LAB_0010e1a0;
        }
        uVar7 = 4;
      }
      else {
        uVar7 = 5;
      }
      *(undefined4 *)((long)param_1 + 0x1c) = uVar7;
      (*(code *)param_1[6])(param_1[8],plVar3);
    }
  }
LAB_0010e1a0:
  plVar3 = (long *)0x0;
LAB_0010e1a4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar3);
}


