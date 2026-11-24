// Function: FUN_0010dc80
// Entry: 0010dc80

void FUN_0010dc80(int *param_1,double *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *****pppppuVar3;
  bool bVar4;
  int iVar5;
  undefined8 *****pppppuVar6;
  long lVar7;
  long lVar8;
  undefined8 *****unaff_x24;
  undefined8 *****unaff_x27;
  double dVar9;
  double unaff_d8;
  double unaff_d9;
  undefined8 ****local_b0;
  undefined8 ****local_a8;
  undefined8 ****ppppuStack_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  lVar1 = -0x6bd1c6dbe046ca41;
  if (*(char *)(param_2 + 1) != '\0') {
    lVar1 = -0x17b186783e63ae61;
  }
  local_a8 = (undefined8 *****)0x0;
  ppppuStack_a0 = &local_a8;
  pppppuVar3 = &local_a8;
  lVar8 = -0x12c3a303aebdf85b;
LAB_0010dda8:
  lVar7 = lVar8;
  pppppuVar6 = pppppuVar3;
  pppppuVar3 = pppppuVar6;
  lVar8 = lVar7;
  if (0x208137b40ff0c40 < lVar7) {
    if (0x37405310caf8563e < lVar7) {
      if (lVar7 < 0x73e1698da6d390e9) {
        lVar8 = 0x78cedefaf48b4478;
        if (((lVar7 == 0x37405310caf8563f) ||
            (lVar8 = 0x299108bddc6a14bb, lVar7 == 0x61af358a616341e0)) ||
           (lVar8 = lVar7, lVar7 != 0x6c05af2b61ea5a32)) goto LAB_0010dda8;
        lVar8 = 0x78cedefaf48b4478;
      }
      else {
        if (lVar7 == 0x73e1698da6d390e9) {
          unaff_x27 = (undefined8 *****)local_b0[1];
          lVar7 = 0xf1fa5ec267545b4;
          lVar8 = -0x7d67305aaf633e7;
          pppppuVar6 = unaff_x27;
LAB_0010e38c:
          if (pppppuVar6 != (undefined8 *****)0x0) {
            lVar8 = lVar7;
          }
          goto LAB_0010dda8;
        }
        if (lVar7 != 0x76a7314c63096d5f) {
          if (lVar7 == 0x78cedefaf48b4478) {
            *param_2 = unaff_d9;
            lVar8 = -0xa10d85245fd646a;
          }
          goto LAB_0010dda8;
        }
        lVar8 = 0x299108bddc6a14bb;
      }
      *(undefined1 *)(param_2 + 1) = 1;
      goto LAB_0010dda8;
    }
    if (lVar7 < 0x1073084a84eac6b1) {
      if (lVar7 == 0x208137b40ff0c41) {
        bVar4 = *(char *)(param_2 + 1) == '\0';
        lVar8 = 0x1073084a84eac6b1;
        lVar7 = 0x340d68985851f29b;
        goto LAB_0010e180;
      }
      pppppuVar3 = unaff_x27;
      lVar8 = -0x5c9aeb5b95069b35;
      if ((lVar7 != 0xf1fa5ec267545b4) &&
         (pppppuVar3 = pppppuVar6, lVar8 = lVar7, lVar7 == 0x1005bd1355363683)) {
        param_2[0x47] = (double)((ulong)param_2[0x47] | 0x20000000000);
        FUN_0011adfc(&local_a8);
        if (*(long *)(lVar2 + 0x28) == local_78) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
    else if (lVar7 == 0x1073084a84eac6b1) {
      local_88 = 0;
      local_80 = 0;
      FUN_001d8570(0,&local_88);
      lVar8 = 0x6c05af2b61ea5a32;
      unaff_d9 = (double)local_80 / 1000000.0 + (double)local_88 * 1000.0;
      dVar9 = unaff_d9 - *param_2;
      lVar7 = 0x37405310caf8563f;
LAB_0010e2d4:
      if (dVar9 <= 15000.0) {
        lVar8 = lVar7;
      }
    }
    else if (lVar7 == 0x299108bddc6a14bb) {
      *param_2 = unaff_d8;
      lVar8 = -0x4c0f94e3e225570b;
    }
    else if (lVar7 == 0x340d68985851f29b) {
      lVar8 = -0xa10d85245fd646a;
    }
    goto LAB_0010dda8;
  }
  if (lVar7 < -0x2bf7c1f74e42bb60) {
    if (-0x5c9aeb5b95069b36 < lVar7) {
      if (lVar7 == -0x5c9aeb5b95069b35) {
        iVar5 = FUN_001cb714(param_2[0x4f],*pppppuVar6);
        lVar8 = 0x161e1b3a107f5a8;
        local_b0 = pppppuVar6;
        if (iVar5 != 0) {
          lVar8 = 0x73e1698da6d390e9;
        }
      }
      else if (lVar7 == -0x4c0f94e3e225570b) {
        FUN_00119f4c(param_1,param_2[0x4e],&local_a8);
        bVar4 = *param_1 == 0;
        lVar8 = 0x208137b40ff0c41;
        lVar7 = -0x6b53575728baf5fd;
LAB_0010e180:
        if (!bVar4) {
          lVar8 = lVar7;
        }
      }
      else if (lVar7 == -0x3cff958be57398fb) {
        *param_1 = 1;
        lVar8 = 0x1005bd1355363683;
      }
      goto LAB_0010dda8;
    }
    if (lVar7 == -0x6bd1c6dbe046ca41) {
      local_98 = 0;
      local_90 = 0;
      FUN_001d8570(0,&local_98);
      lVar8 = 0x76a7314c63096d5f;
      unaff_d8 = (double)local_90 / 1000000.0 + (double)local_98 * 1000.0;
      dVar9 = unaff_d8 - *param_2;
      lVar7 = 0x61af358a616341e0;
      goto LAB_0010e2d4;
    }
    if (lVar7 != -0x6b53575728baf5fd) goto LAB_0010dda8;
  }
  else {
    if (lVar7 < -0xa10d85245fd646a) {
      pppppuVar3 = unaff_x24;
      lVar8 = -0x5c9aeb5b95069b35;
      if (((lVar7 != -0x2bf7c1f74e42bb60) &&
          (pppppuVar3 = pppppuVar6, lVar8 = -0x4c0f94e3e225570b, lVar7 != -0x17b186783e63ae61)) &&
         (lVar8 = lVar7, lVar7 == -0x12c3a303aebdf85b)) {
        lVar8 = lVar1;
      }
      goto LAB_0010dda8;
    }
    if (lVar7 == -0xa10d85245fd646a) {
      lVar8 = -0x3cff958be57398fb;
      lVar7 = -0x2bf7c1f74e42bb60;
      unaff_x24 = (undefined8 *****)local_a8;
      pppppuVar6 = (undefined8 *****)local_a8;
      goto LAB_0010e38c;
    }
    if (lVar7 == -0x7d67305aaf633e7) {
      FUN_001e9264(param_2 + 4,0x29);
      param_2[0x47] = (double)((ulong)param_2[0x47] | 1);
      lVar8 = 0x1005bd1355363683;
      goto LAB_0010dda8;
    }
    if (lVar7 != 0x161e1b3a107f5a8) goto LAB_0010dda8;
  }
  lVar8 = 0x1005bd1355363683;
  goto LAB_0010dda8;
}


