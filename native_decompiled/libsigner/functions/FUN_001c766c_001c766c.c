// Function: FUN_001c766c
// Entry: 001c766c

/* WARNING: Removing unreachable block (ram,0x001c78b0) */

void FUN_001c766c(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 ulong *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong unaff_x22;
  undefined8 unaff_x23;
  size_t unaff_x24;
  size_t local_78;
  undefined8 local_70;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  local_78 = 0;
  local_70 = 0;
  FUN_0016c4cc();
  lVar1 = -0x6ebe183313cbdcac;
  if (*param_1 != 0) {
    lVar1 = -0x4c59a4c035b3e8e;
  }
  lVar3 = -0x2a853f5056e0125e;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (lVar5 = lVar3, lVar3 = lVar5, lVar5 < 0x4357c11efd169a0) {
            if (lVar5 < -0x4c59a4c035b3e8e) {
              if (lVar5 == -0x6ebe183313cbdcac) {
                unaff_x22 = param_5[1];
                lVar3 = 0x862419eaecdf1a5;
                unaff_x24 = local_78;
                if (unaff_x22 <= *param_5) {
                  lVar3 = 0x4a5cd72dc1a18f6;
                }
              }
              else if (lVar5 == -0x2a853f5056e0125e) {
                lVar3 = lVar1;
              }
            }
            else {
              lVar3 = 0x408409b1e5ac055;
              if ((lVar5 != -0x4c59a4c035b3e8e) && (lVar3 = lVar5, lVar5 == 0x408409b1e5ac055)) {
                lVar3 = 0x26c60fa523ddda4b;
                unaff_x23 = local_70;
              }
            }
          }
          if (lVar5 < 0x26c60fa523ddda4b) break;
          lVar3 = 0x4357c11efd169a0;
          if ((lVar5 != 0x26c60fa523ddda4b) && (lVar3 = lVar5, lVar5 == 0x6dbb77d6245fbf6c)) {
            FUN_0016e030(param_2,param_4,unaff_x23);
            lVar3 = 0x4357c11efd169a0;
          }
        }
        if (lVar5 != 0x4a5cd72dc1a18f6) break;
        memcpy((void *)(param_5[2] + unaff_x22),(void *)0x0,unaff_x24);
        param_5[1] = param_5[1];
        lVar3 = 0x408409b1e5ac055;
      }
      if (lVar5 != 0x862419eaecdf1a5) break;
      *param_1 = 1;
      lVar3 = 0x408409b1e5ac055;
    }
  } while (lVar5 != 0x4357c11efd169a0);
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


