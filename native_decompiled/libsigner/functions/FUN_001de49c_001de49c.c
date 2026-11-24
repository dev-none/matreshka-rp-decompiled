// Function: FUN_001de49c
// Entry: 001de49c

void FUN_001de49c(int *param_1,long *param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  long *plVar5;
  bool bVar6;
  int *piVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong unaff_x20;
  void *unaff_x24;
  void *unaff_x25;
  int *piVar12;
  int local_a4;
  long local_a0;
  ulong local_98;
  int local_90;
  int local_80;
  uint local_7c;
  int local_6c;
  long *local_68;
  
  lVar3 = tpidr_el0;
  lVar2 = 0x4119c2fb696ac2cc;
  if (param_3 != 0) {
    lVar2 = 0x3cf1d9509481ae04;
  }
  local_68 = *(long **)(lVar3 + 0x28);
  local_6c = 0;
  piVar4 = param_1;
  plVar5 = local_68;
  lVar11 = 0x56c7de269b39cb28;
LAB_001de58c:
  lVar9 = lVar11;
  plVar10 = plVar5;
  piVar7 = piVar4;
  piVar12 = (int *)((ulong)piVar7 & 0xffffffff);
  lVar11 = lVar9;
  piVar4 = piVar12;
  plVar5 = plVar10;
  if (lVar9 < 0x3cf1d9509481ae04) {
    if (lVar9 < -0x15c48858a06ca71d) {
      if (lVar9 < -0x2c4303065cb3eee6) {
        if (lVar9 < -0x542fd3a52b2562e6) {
          if (lVar9 == -0x57c5a7acde5d998b) {
            bVar6 = *param_1 == 0;
            lVar11 = -0x15c48858a06ca71d;
            lVar9 = 0x4e77b14c69e4757b;
            goto LAB_001de580;
          }
          if (lVar9 == -0x6bd1c6dbe046ca41) {
            if (*(long **)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
            return;
          }
        }
        else {
          if (lVar9 == -0x542fd3a52b2562e6) {
            bVar6 = *param_2 == 0;
            local_a0 = (long)unaff_x24 + 0x10;
            lVar11 = 0x5aee9e3b6c141ab1;
            lVar9 = 0x303d266b462771e7;
            goto LAB_001de580;
          }
          if (lVar9 == -0x3c84e412275c5f52) {
            uVar8 = FUN_001dc360(param_1,&local_6c,4,1,param_4);
            lVar11 = -0x203d639f93f665df;
            if ((uVar8 & 1) == 0) {
              lVar11 = 0x3582441379697640;
            }
            piVar4 = (int *)((ulong)piVar7 & 0xffffffff);
            local_a4 = (int)piVar7;
          }
        }
      }
      else if (lVar9 == -0x2c4303065cb3eee6) {
        *plVar10 = (long)unaff_x24;
        param_2[1] = local_a0;
        lVar11 = -0x15a21fd5d20b04b8;
        bVar6 = *param_1 == 0;
        lVar9 = 0x3fe4345baf199427;
LAB_001de580:
        if (!bVar6) {
          lVar11 = lVar9;
        }
      }
      else if (lVar9 == -0x203d639f93f665df) {
        local_90 = local_6c;
        unaff_x24 = calloc(1,0x18);
        lVar11 = 0x7c778a2912169367;
        if (unaff_x24 != (void *)0x0) {
          lVar11 = 0x22bae9789d72b4f3;
        }
      }
      else if (lVar9 == -0x17b186783e63ae61) {
        *param_1 = local_80;
        lVar11 = -0x6bd1c6dbe046ca41;
      }
      goto LAB_001de58c;
    }
    if (0x22bae9789d72b4f2 < lVar9) {
      if (lVar9 < 0x303d266b462771e7) {
        lVar11 = -0x542fd3a52b2562e6;
        if ((lVar9 != 0x22bae9789d72b4f3) && (lVar11 = lVar9, lVar9 == 0x25c1d80b3c53cec7)) {
          lVar11 = -0x12c3a303aebdf85b;
          if (local_7c != param_3) {
            lVar11 = 0x7096451cc89b6285;
          }
        }
      }
      else if (lVar9 == 0x303d266b462771e7) {
        plVar5 = (long *)param_2[1];
        lVar11 = -0x2c4303065cb3eee6;
      }
      else if (lVar9 == 0x3582441379697640) goto LAB_001deb20;
      goto LAB_001de58c;
    }
    if (lVar9 == -0x15c48858a06ca71d) {
      uVar1 = local_a4 + local_6c + 4;
      unaff_x20 = (ulong)uVar1;
      lVar11 = 0x3dd1541672e77739;
      if (param_3 <= uVar1) {
        lVar11 = 0x548f69369cb47b0a;
      }
      goto LAB_001de58c;
    }
    if (lVar9 == -0x15a21fd5d20b04b8) {
      uVar8 = FUN_001dc360(param_1,unaff_x24,4,1,param_4);
      lVar11 = 0x7e480ccd9447af9d;
      if ((uVar8 & 1) == 0) {
        lVar11 = 0x55a53f7fea287ef8;
      }
      goto LAB_001de58c;
    }
    if (lVar9 != -0x12c3a303aebdf85b) goto LAB_001de58c;
  }
  else {
    if (0x55a53f7fea287ef7 < lVar9) {
      if (lVar9 < 0x5aee9e3b6c141ab1) {
        lVar11 = -0x57c5a7acde5d998b;
        if (((lVar9 != 0x55a53f7fea287ef8) &&
            (piVar4 = (int *)((ulong)piVar7 & 0xffffffff), lVar11 = lVar2,
            lVar9 != 0x56c7de269b39cb28)) &&
           (piVar4 = (int *)((ulong)piVar7 & 0xffffffff), lVar11 = lVar9,
           lVar9 == 0x59ea2ac634eec38c)) {
          FUN_001dc360(param_1,unaff_x25,local_98,1,param_4);
          piVar4 = (int *)((ulong)piVar7 & 0xffffffff);
          lVar11 = -0x57c5a7acde5d998b;
        }
      }
      else if (lVar9 < 0x7c778a2912169367) {
        plVar5 = param_2;
        lVar11 = -0x2c4303065cb3eee6;
        if ((lVar9 != 0x5aee9e3b6c141ab1) &&
           (plVar5 = plVar10, lVar11 = lVar9, lVar9 == 0x7096451cc89b6285)) {
          local_80 = 8;
LAB_001deba4:
          plVar5 = plVar10;
          lVar11 = -0x17b186783e63ae61;
        }
      }
      else if (lVar9 == 0x7c778a2912169367) {
        *param_1 = 1;
        lVar11 = -0x542fd3a52b2562e6;
      }
      else if (lVar9 == 0x7e480ccd9447af9d) {
        local_98 = (ulong)(local_90 - 4U);
        *(uint *)((long)unaff_x24 + 4) = local_90 - 4U;
        unaff_x25 = calloc(1,local_98);
        lVar11 = 0x504fc213a833ef4e;
        if (unaff_x25 != (void *)0x0) {
          lVar11 = 0x59ea2ac634eec38c;
        }
        *(void **)((long)unaff_x24 + 8) = unaff_x25;
      }
      goto LAB_001de58c;
    }
    if (0x4119c2fb696ac2cb < lVar9) {
      if (lVar9 < 0x504fc213a833ef4e) {
        if (lVar9 != 0x4119c2fb696ac2cc) {
          if (lVar9 == 0x4e77b14c69e4757b) goto LAB_001deb20;
          goto LAB_001de58c;
        }
        local_7c = 0;
      }
      else {
        if (lVar9 == 0x504fc213a833ef4e) {
          local_80 = 1;
          goto LAB_001deba4;
        }
        if (lVar9 != 0x548f69369cb47b0a) goto LAB_001de58c;
        local_7c = (uint)unaff_x20;
      }
      lVar11 = 0x25c1d80b3c53cec7;
      goto LAB_001de58c;
    }
    if (lVar9 == 0x3cf1d9509481ae04) {
      piVar4 = (int *)0x0;
      lVar11 = -0x3c84e412275c5f52;
      goto LAB_001de58c;
    }
    piVar4 = (int *)(unaff_x20 & 0xffffffff);
    lVar11 = -0x3c84e412275c5f52;
    if ((lVar9 == 0x3dd1541672e77739) ||
       (piVar4 = piVar12, lVar11 = lVar9, lVar9 != 0x3fe4345baf199427)) goto LAB_001de58c;
  }
LAB_001deb20:
  piVar4 = piVar12;
  lVar11 = -0x6bd1c6dbe046ca41;
  goto LAB_001de58c;
}


