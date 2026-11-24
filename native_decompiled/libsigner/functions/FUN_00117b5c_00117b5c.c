// Function: FUN_00117b5c
// Entry: 00117b5c

/* WARNING: Removing unreachable block (ram,0x00117f14) */

uint FUN_00117b5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,double *param_4)

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
  lVar1 = -0x536752e094130b43;
  if ((uVar5 & 1) == 0) {
    lVar1 = -0x2bc6ce70b48fb865;
  }
  lVar3 = -0x195ed6262fcbb0c1;
  do {
    while( true ) {
      while( true ) {
        while (lVar6 = lVar3, lVar3 = lVar6, lVar6 < -0x2bc6ce70b48fb865) {
          if (lVar6 < -0x4aebcec72c2597a1) {
            if (lVar6 == -0x73b41bb6cacfcd0c) {
              *(undefined1 *)(param_4 + 1) = 1;
              lVar3 = -0x50165b36112f161b;
            }
            else if (lVar6 == -0x536752e094130b43) {
              sVar4 = FUN_001362a0(param_2,param_3,0,0);
              lVar3 = -0x438def986340b862;
              if (sVar4 != 0) {
                lVar3 = -0x1c148f8be5148cf1;
              }
            }
            else if (lVar6 == -0x50165b36112f161b) {
              *param_4 = unaff_d8;
              lVar3 = 0x7573cc54513b5ce4;
            }
          }
          else if (lVar6 < -0x4154810d714b2ad1) {
            lVar3 = -0x23c0cf8654a78a4a;
            if ((lVar6 != -0x4aebcec72c2597a1) && (lVar3 = lVar6, lVar6 == -0x438def986340b862)) {
              lVar3 = -0x30a8264e0c5c9f7e;
            }
          }
          else if (lVar6 == -0x4154810d714b2ad1) {
            local_88 = 0;
            local_80 = 0;
            FUN_001d8570(0,&local_88);
            unaff_d8 = (double)local_80 / 1000000.0 + (double)local_88 * 1000.0;
            lVar3 = -0x73b41bb6cacfcd0c;
            if (unaff_d8 - *param_4 <= 15000.0) {
              lVar3 = 0x64a34030189a08f;
            }
          }
          else if ((lVar6 == -0x30a8264e0c5c9f7e) &&
                  (lVar3 = -0x4154810d714b2ad1, *(char *)(param_4 + 1) != '\0')) {
            lVar3 = 0x6577e5f70193d2a2;
          }
        }
        if (lVar6 < 0x64a34030189a08f) break;
        if (lVar6 < 0x6577e5f70193d2a2) {
          lVar3 = -0x50165b36112f161b;
          if ((lVar6 != 0x64a34030189a08f) && (lVar3 = lVar6, lVar6 == 0x49764ceab7d1a78c)) {
            free(unaff_x24);
            lVar3 = -0x23c0cf8654a78a4a;
          }
        }
        else {
          lVar3 = 0x7573cc54513b5ce4;
          if ((lVar6 != 0x6577e5f70193d2a2) && (lVar3 = lVar6, lVar6 == 0x7573cc54513b5ce4)) {
            param_4[0x47] = (double)((ulong)param_4[0x47] | 0x400);
            lVar3 = -0x4aebcec72c2597a1;
            unaff_x24 = local_90;
          }
        }
      }
      if (lVar6 < -0x1c148f8be5148cf1) break;
      if (lVar6 == -0x1c148f8be5148cf1) {
        FUN_001e9264(param_4 + 4,10);
        param_4[0x47] = (double)((ulong)param_4[0x47] | 1);
        lVar3 = -0x30a8264e0c5c9f7e;
      }
      else if (lVar6 == -0x195ed6262fcbb0c1) {
        lVar3 = lVar1;
      }
    }
    lVar3 = 0x7573cc54513b5ce4;
  } while ((lVar6 == -0x2bc6ce70b48fb865) || (lVar3 = lVar6, lVar6 != -0x23c0cf8654a78a4a));
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5 & 1;
}


