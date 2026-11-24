// Function: FUN_0011768c
// Entry: 0011768c

/* WARNING: Removing unreachable block (ram,0x00117a64) */

uint FUN_0011768c(undefined8 param_1,undefined8 param_2,undefined8 param_3,double *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  short sVar4;
  uint uVar5;
  long lVar6;
  void *unaff_x24;
  double unaff_d8;
  void *local_90;
  long local_88;
  long local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  local_90 = (void *)0x0;
  uVar5 = FUN_00136d94();
  lVar1 = 0x2e4416946e4eba83;
  if ((uVar5 & 1) == 0) {
    lVar1 = 0x17bec7a35daac0cd;
  }
  lVar3 = 0x1d59549402704151;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (lVar6 = lVar3, lVar3 = lVar6, lVar6 < 0x17bec7a35daac0cd) {
            if (lVar6 < -0x486dbd8dbdc08dce) {
              if (lVar6 == -0x7ee7d73fd1da5d08) {
                free(unaff_x24);
                lVar3 = 0x2ad02d786e3545b7;
              }
              else {
                lVar3 = 0x6a24dff73a624149;
                if ((lVar6 != -0x7d5c903b2535086b) && (lVar3 = lVar6, lVar6 == -0x60101e7559962c23))
                {
                  FUN_001e9264(param_4 + 4,4);
                  param_4[0x47] = (double)((ulong)param_4[0x47] | 1);
                  lVar3 = 0x5fe1018dfd190df7;
                }
              }
            }
            else if (lVar6 < -0x6c9d8d14783d0fc) {
              lVar3 = 0x72c279b2e408a6a6;
              if ((lVar6 != -0x486dbd8dbdc08dce) && (lVar3 = lVar6, lVar6 == -0x9f55d28793dfb10)) {
                lVar3 = 0x5fe1018dfd190df7;
              }
            }
            else {
              lVar3 = 0x2ad02d786e3545b7;
              if ((lVar6 != -0x6c9d8d14783d0fc) && (lVar3 = lVar6, lVar6 == 0xa72ea1f1b160578)) {
                local_88 = 0;
                local_80 = 0;
                FUN_001d8570(0,&local_88);
                unaff_d8 = (double)local_80 / 1000000.0 + (double)local_88 * 1000.0;
                lVar3 = 0x5c5e67d6533a27e5;
                if (unaff_d8 - *param_4 <= 15000.0) {
                  lVar3 = -0x7d5c903b2535086b;
                }
              }
            }
          }
          if (lVar6 < 0x5c5e67d6533a27e5) break;
          if (lVar6 < 0x6a24dff73a624149) {
            if (lVar6 == 0x5c5e67d6533a27e5) {
              *(undefined1 *)(param_4 + 1) = 1;
              lVar3 = 0x6a24dff73a624149;
            }
            else if (lVar6 == 0x5fe1018dfd190df7) {
              lVar3 = 0xa72ea1f1b160578;
              if (*(char *)(param_4 + 1) != '\0') {
                lVar3 = -0x486dbd8dbdc08dce;
              }
            }
          }
          else if (lVar6 == 0x6a24dff73a624149) {
            *param_4 = unaff_d8;
            lVar3 = 0x72c279b2e408a6a6;
          }
          else if (lVar6 == 0x72c279b2e408a6a6) {
            param_4[0x47] = (double)((ulong)param_4[0x47] | 0x10);
            lVar3 = -0x6c9d8d14783d0fc;
            unaff_x24 = local_90;
          }
        }
        if (0x2ad02d786e3545b6 < lVar6) break;
        lVar3 = 0x72c279b2e408a6a6;
        if ((lVar6 != 0x17bec7a35daac0cd) && (lVar3 = lVar6, lVar6 == 0x1d59549402704151)) {
          lVar3 = lVar1;
        }
      }
      if (lVar6 != 0x2e4416946e4eba83) break;
      sVar4 = FUN_001367e8(param_2,param_3,0,0);
      lVar3 = -0x9f55d28793dfb10;
      if (sVar4 != 0) {
        lVar3 = -0x60101e7559962c23;
      }
    }
  } while (lVar6 != 0x2ad02d786e3545b7);
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5 & 1;
}


