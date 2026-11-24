// Function: FUN_001100b4
// Entry: 001100b4

void FUN_001100b4(int *param_1,undefined8 param_2,undefined8 param_3,double *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double *unaff_x23;
  double *unaff_x25;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double unaff_d8;
  undefined8 uStack_98;
  double *local_90;
  long local_88;
  long local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  lVar1 = -0xab6d7693a1608dd;
  if (*(char *)(param_4 + 1) != '\0') {
    lVar1 = -0x5bf11c36ce907131;
  }
  uStack_98 = 0;
  local_90 = (double *)0x0;
  lVar3 = -0x683dfe9dd6fb123d;
  do {
    while( true ) {
      while( true ) {
        while (lVar4 = lVar3, lVar3 = lVar4, 0x1967d52db0437642 < lVar4) {
          if (lVar4 < 0x7028d3a187050975) {
            if (lVar4 == 0x1967d52db0437643) {
              lVar3 = 0x7a0f616325dae33c;
              unaff_x23 = local_90;
            }
            else {
              lVar3 = -0x649feb271572ccc3;
              if ((lVar4 != 0x1bce23f05448fc72) && (lVar3 = lVar4, lVar4 == 0x2562ff29debb7f8d)) {
                *(undefined1 *)(param_4 + 1) = 1;
                lVar3 = -0x5372a13c3de6dbbe;
              }
            }
          }
          else if (lVar4 == 0x7028d3a187050975) {
            dVar5 = *local_90;
            dVar7 = local_90[3];
            dVar6 = local_90[2];
            uVar9 = *(undefined8 *)((long)local_90 + 0x21);
            uVar8 = *(undefined8 *)((long)local_90 + 0x19);
            param_4[0x49] = local_90[1];
            param_4[0x48] = dVar5;
            param_4[0x4b] = dVar7;
            param_4[0x4a] = dVar6;
            *(undefined8 *)((long)param_4 + 0x261) = uVar9;
            *(undefined8 *)((long)param_4 + 0x259) = uVar8;
            lVar3 = 0x7a0f616325dae33c;
            unaff_x23 = local_90;
          }
          else if (lVar4 == 0x7a0f616325dae33c) {
            lVar3 = 0x1bce23f05448fc72;
            unaff_x25 = unaff_x23;
            if (unaff_x23 != (double *)0x0) {
              lVar3 = 0x7c9c0d2413f69b48;
            }
          }
          else if (lVar4 == 0x7c9c0d2413f69b48) {
            free(unaff_x25);
            lVar3 = -0x649feb271572ccc3;
          }
        }
        if (lVar4 < -0x5372a13c3de6dbbe) break;
        if (lVar4 == -0x5372a13c3de6dbbe) {
          *param_4 = unaff_d8;
          lVar3 = -0x2bae5e104c3aded8;
        }
        else if (lVar4 == -0x2bae5e104c3aded8) {
          FUN_0011bc8c(param_1,param_2,param_3,*(undefined1 *)((long)param_4 + 9),&local_90,
                       &uStack_98);
          lVar3 = 0x7028d3a187050975;
          if (*param_1 != 0) {
            lVar3 = 0x1967d52db0437643;
          }
        }
        else if (lVar4 == -0xab6d7693a1608dd) {
          local_88 = 0;
          local_80 = 0;
          FUN_001d8570(0,&local_88);
          unaff_d8 = (double)local_80 / 1000000.0 + (double)local_88 * 1000.0;
          lVar3 = 0x2562ff29debb7f8d;
          if (unaff_d8 - *param_4 <= 15000.0) {
            lVar3 = -0x5de9a88702221b6f;
          }
        }
      }
      if (lVar4 < -0x5de9a88702221b6f) break;
      lVar3 = -0x5372a13c3de6dbbe;
      if ((lVar4 != -0x5de9a88702221b6f) && (lVar3 = lVar4, lVar4 == -0x5bf11c36ce907131)) {
        lVar3 = -0x2bae5e104c3aded8;
      }
    }
    lVar3 = lVar1;
  } while ((lVar4 == -0x683dfe9dd6fb123d) || (lVar3 = lVar4, lVar4 != -0x649feb271572ccc3));
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


