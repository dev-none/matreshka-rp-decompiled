// Function: FUN_0010d398
// Entry: 0010d398

void FUN_0010d398(int *param_1,double *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  void *unaff_x22;
  double unaff_d8;
  double unaff_d9;
  void *local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  lVar1 = -0x608b613e0d15eb95;
  if (*(char *)(param_2 + 1) != '\0') {
    lVar1 = -0xfd56005cdcebed6;
  }
  local_a0 = (void *)0x0;
  lVar5 = 0x2585bc4e4d7c8853;
LAB_0010d4d4:
  do {
    while( true ) {
      while (lVar4 = lVar5, lVar5 = lVar4, lVar4 < 0x3582441379697640) {
        if (lVar4 < -0x15a21fd5d20b04b8) {
          if (lVar4 < -0x3c84e412275c5f52) {
            if (lVar4 == -0x608b613e0d15eb95) {
              local_98 = 0;
              local_90 = 0;
              FUN_001d8570(0,&local_98);
              unaff_d8 = (double)local_90 / 1000000.0 + (double)local_98 * 1000.0;
              lVar5 = 0x4119c2fb696ac2cc;
              if (unaff_d8 - *param_2 <= 15000.0) {
                lVar5 = 0x56c7de269b39cb28;
              }
            }
            else if (lVar4 == -0x542fd3a52b2562e6) {
              lVar5 = 0x303d266b462771e7;
            }
          }
          else if (lVar4 == -0x3c84e412275c5f52) {
            FUN_00118f64(param_1,&local_a0);
            lVar5 = -0x203d639f93f665df;
            if (*param_1 != 0) {
              lVar5 = 0x3582441379697640;
            }
          }
          else if (lVar4 == -0x2c4303065cb3eee6) {
            iVar3 = FUN_001cb714(param_2[0x4e],local_a0);
            lVar5 = 0x3fe4345baf199427;
            if (iVar3 != 0) {
              lVar5 = -0x15a21fd5d20b04b8;
            }
          }
          else if (lVar4 == -0x203d639f93f665df) {
            lVar5 = 0x7c778a2912169367;
            if (*(char *)(param_2 + 1) != '\0') {
              lVar5 = 0x22bae9789d72b4f3;
            }
          }
        }
        else if (lVar4 < 0x22bae9789d72b4f3) {
          if (lVar4 == -0x15a21fd5d20b04b8) {
            FUN_001e9264(param_2 + 4,9);
            param_2[0x47] = (double)((ulong)param_2[0x47] | 1);
            lVar5 = 0x55a53f7fea287ef8;
          }
          else if (lVar4 == -0xfd56005cdcebed6) {
            lVar5 = -0x3c84e412275c5f52;
          }
        }
        else {
          lVar5 = -0x2c4303065cb3eee6;
          if (((lVar4 != 0x22bae9789d72b4f3) && (lVar5 = lVar1, lVar4 != 0x2585bc4e4d7c8853)) &&
             (lVar5 = lVar4, lVar4 == 0x303d266b462771e7)) {
            *param_2 = unaff_d9;
            lVar5 = -0x2c4303065cb3eee6;
          }
        }
      }
      if (0x55a53f7fea287ef7 < lVar4) break;
      lVar5 = 0x55a53f7fea287ef8;
      if (lVar4 < 0x3fe4345baf199427) {
        if ((lVar4 != 0x3582441379697640) && (lVar5 = lVar4, lVar4 == 0x3cf1d9509481ae04)) {
          *param_2 = unaff_d8;
          lVar5 = -0x3c84e412275c5f52;
        }
      }
      else if (lVar4 != 0x3fe4345baf199427) {
        if (lVar4 == 0x4119c2fb696ac2cc) {
          lVar5 = 0x3cf1d9509481ae04;
LAB_0010d9e4:
          *(undefined1 *)(param_2 + 1) = 1;
        }
        else {
          lVar5 = lVar4;
          if (lVar4 == 0x504fc213a833ef4e) {
            free(unaff_x22);
            lVar5 = 0x59ea2ac634eec38c;
          }
        }
      }
    }
    if (0x5aee9e3b6c141ab0 < lVar4) {
      if (lVar4 == 0x5aee9e3b6c141ab1) {
        lVar5 = 0x303d266b462771e7;
        goto LAB_0010d9e4;
      }
      if (lVar4 == 0x7c778a2912169367) {
        local_88 = 0;
        local_80 = 0;
        FUN_001d8570(0,&local_88);
        unaff_d9 = (double)local_80 / 1000000.0 + (double)local_88 * 1000.0;
        lVar5 = 0x5aee9e3b6c141ab1;
        if (unaff_d9 - *param_2 <= 15000.0) {
          lVar5 = -0x542fd3a52b2562e6;
        }
      }
      else if (lVar4 == 0x7e480ccd9447af9d) {
        lVar5 = 0x59ea2ac634eec38c;
      }
      goto LAB_0010d4d4;
    }
    if (lVar4 == 0x55a53f7fea287ef8) {
      lVar5 = 0x7e480ccd9447af9d;
      if (local_a0 != (void *)0x0) {
        lVar5 = 0x504fc213a833ef4e;
      }
      param_2[0x47] = (double)((ulong)param_2[0x47] | 0x200);
      unaff_x22 = local_a0;
    }
    else {
      lVar5 = 0x3cf1d9509481ae04;
      if ((lVar4 != 0x56c7de269b39cb28) && (lVar5 = lVar4, lVar4 == 0x59ea2ac634eec38c)) {
        if (*(long *)(lVar2 + 0x28) == local_78) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
  } while( true );
}


