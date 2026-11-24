// Function: FUN_0010da2c
// Entry: 0010da2c

void FUN_0010da2c(double param_1,double *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  long local_88;
  long local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  lVar1 = -0x15c48858a06ca71d;
  if (*(char *)(param_2 + 1) != '\0') {
    lVar1 = 0x4e77b14c69e4757b;
  }
  lVar3 = -0x57c5a7acde5d998b;
  dVar5 = param_1;
  do {
    while( true ) {
      while( true ) {
        while (lVar4 = lVar3, lVar3 = lVar4, lVar4 < 0x3dd1541672e77739) {
          lVar3 = lVar1;
          if (lVar4 != -0x57c5a7acde5d998b) {
            if (lVar4 == -0x15c48858a06ca71d) {
              local_88 = 0;
              local_80 = 0;
              FUN_001d8570(0,&local_88);
              dVar5 = (double)local_80 / 1000000.0 + (double)local_88 * 1000.0;
              lVar3 = 0x3dd1541672e77739;
              if (dVar5 - *param_2 <= param_1) {
                lVar3 = 0x548f69369cb47b0a;
              }
            }
            else {
              lVar3 = lVar4;
              if (lVar4 == 0x25c1d80b3c53cec7) {
                *param_2 = dVar5;
                lVar3 = 0x7096451cc89b6285;
              }
            }
          }
        }
        if (0x548f69369cb47b09 < lVar4) break;
        if (lVar4 == 0x3dd1541672e77739) {
          *(undefined1 *)(param_2 + 1) = 1;
          lVar3 = 0x25c1d80b3c53cec7;
        }
        else if (lVar4 == 0x4e77b14c69e4757b) {
          lVar3 = 0x7096451cc89b6285;
        }
      }
      if (lVar4 != 0x548f69369cb47b0a) break;
      lVar3 = 0x25c1d80b3c53cec7;
    }
  } while (lVar4 != 0x7096451cc89b6285);
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


