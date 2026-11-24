// Function: FUN_00112aec
// Entry: 00112aec

void FUN_00112aec(long *param_1,long param_2,short *param_3,uint param_4,undefined8 *param_5,
                 undefined8 *param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined1 local_a8 [4];
  undefined8 local_a4 [7];
  long local_68;
  
  lVar2 = tpidr_el0;
  uVar9 = (ulong)(param_4 + 0x40);
  local_68 = *(long *)(lVar2 + 0x28);
  uVar6 = param_1[2];
  if ((ulong)param_1[2] < uVar9) {
    lVar3 = (**(code **)(param_2 + 0x38))
                      (*(undefined8 *)(param_2 + 0x40),*param_1,(int)param_1[3],uVar9);
    if (lVar3 != 0) {
      *param_1 = lVar3;
      param_1[2] = uVar9;
      uVar6 = uVar9;
      goto LAB_00112b68;
    }
LAB_00112cec:
    uVar5 = 0;
    *(undefined4 *)(param_2 + 0x1c) = 0x10;
  }
  else {
LAB_00112b68:
    param_1[1] = 0;
    if (((param_5 != (undefined8 *)0x0) || (param_6 != (undefined8 *)0x0)) ||
       (param_7 != (undefined8 *)0x0)) {
      if (param_6 == (undefined8 *)0x0) {
        puVar1 = local_a4;
      }
      else {
        local_a4[0] = *param_6;
        puVar1 = local_a4 + 1;
      }
      puVar8 = puVar1;
      if (param_5 != (undefined8 *)0x0) {
        puVar8 = puVar1 + 1;
        *puVar1 = *param_5;
      }
      if (param_7 == (undefined8 *)0x0) {
        lVar3 = 0;
      }
      else {
        *puVar8 = *param_7;
        lVar3 = param_1[1];
        uVar6 = param_1[2];
        puVar8 = puVar8 + 1;
      }
      lVar10 = (long)puVar8 - (long)local_a8;
      uVar9 = lVar3 + lVar10;
      local_a8._2_2_ = (short)lVar10 + -4;
      local_a8._0_2_ = 1;
      if (uVar6 < uVar9) {
        if (uVar6 < 2) {
          uVar6 = 1;
        }
        do {
          uVar7 = uVar6;
          uVar6 = uVar7 << 1;
        } while (uVar7 < uVar9);
        lVar4 = (**(code **)(param_2 + 0x38))
                          (*(undefined8 *)(param_2 + 0x40),*param_1,(int)param_1[3],uVar7);
        if (lVar4 == 0) goto LAB_00112cec;
        *param_1 = lVar4;
        param_1[2] = uVar7;
      }
      param_1[1] = uVar9;
      if (puVar8 != (undefined8 *)local_a8) {
        memcpy((void *)(*param_1 + lVar3 * (ulong)*(uint *)(param_1 + 3)),local_a8,
               lVar10 * (ulong)*(uint *)(param_1 + 3));
      }
    }
    uVar5 = 1;
    if ((param_3 != (short *)0x0) && (param_4 != 0)) {
      do {
        if (param_4 < 4) {
LAB_00112cf8:
          if (param_2 == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = 0;
            *(undefined4 *)(param_2 + 0x1c) = 9;
          }
          goto LAB_00112d18;
        }
        lVar3 = (ulong)(ushort)param_3[1] + 4;
        if (param_4 < (uint)lVar3) goto LAB_00112cf8;
        if (*param_3 != 1) {
          lVar10 = param_1[1];
          uVar9 = param_1[2];
          uVar6 = lVar10 + lVar3;
          if (uVar9 < uVar6) {
            if (uVar9 < 2) {
              uVar9 = 1;
            }
            do {
              uVar7 = uVar9;
              uVar9 = uVar7 << 1;
            } while (uVar7 < uVar6);
            lVar4 = (**(code **)(param_2 + 0x38))
                              (*(undefined8 *)(param_2 + 0x40),*param_1,(int)param_1[3],uVar7);
            if (lVar4 == 0) goto LAB_00112cec;
            *param_1 = lVar4;
            param_1[2] = uVar7;
          }
          else {
            lVar4 = *param_1;
          }
          param_1[1] = uVar6;
          memcpy((void *)(lVar4 + lVar10 * (ulong)*(uint *)(param_1 + 3)),param_3,
                 (ulong)*(uint *)(param_1 + 3) * lVar3);
        }
        param_4 = param_4 - (uint)lVar3;
        param_3 = (short *)((long)param_3 + lVar3);
      } while (param_4 != 0);
      uVar5 = 1;
    }
  }
LAB_00112d18:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


