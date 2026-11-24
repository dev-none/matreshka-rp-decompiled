// Function: thunk_FUN_001e4550
// Entry: 001e4858

void thunk_FUN_001e4550(long *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  void *unaff_x23;
  
  pvVar6 = (void *)*param_1;
  pvVar1 = (void *)0x5427e3fe8053026a;
  if (pvVar6 != (void *)0x0) {
    pvVar1 = (void *)0x8497e9c855873224;
  }
  pvVar4 = pvVar1;
  pvVar2 = pvVar6;
  pvVar3 = (void *)0xd7a28745f3a8fb05;
  do {
    while( true ) {
      while (pvVar8 = pvVar3, pvVar7 = pvVar2, pvVar2 = pvVar7, 0x2e7820ff94f2299d < (long)pvVar8) {
        if ((long)pvVar8 < 0x55488ab70f6983fa) {
          if (pvVar8 == (void *)0x2e7820ff94f2299e) {
            FUN_001de0e8((long)unaff_x23 + 0x28);
            FUN_001dd440((long)unaff_x23 + 0x10);
            *(undefined8 *)((long)unaff_x23 + 0x20) = 0;
            FUN_001dc670(unaff_x23);
            FUN_001ded8c((long)unaff_x23 + 0x40);
            FUN_001e1540((long)unaff_x23 + 0x50);
            free(unaff_x23);
            pvVar4 = (void *)*param_1;
            pvVar3 = (void *)0x8238ab8752830617;
            if (pvVar4 != (void *)0x0) {
              pvVar3 = (void *)0xba6e2acce79821e0;
            }
          }
          else {
            pvVar3 = pvVar8;
            if (pvVar8 == (void *)0x5427e3fe8053026a) {
              pvVar3 = (void *)0xdaabd6243423b9d5;
            }
          }
        }
        else if (pvVar8 == (void *)0x55488ab70f6983fa) {
          lVar5 = *(long *)((long)pvVar7 + 0x60);
          *param_1 = lVar5;
          pvVar3 = (void *)0x7e7f415062326f70;
          unaff_x23 = pvVar7;
          if (lVar5 != 0) {
            pvVar3 = (void *)0x5701972a5c88a65c;
          }
        }
        else {
          pvVar3 = (void *)0x2e7820ff94f2299e;
          if ((pvVar8 != (void *)0x5701972a5c88a65c) &&
             (pvVar3 = pvVar8, pvVar8 == (void *)0x7e7f415062326f70)) {
            param_1[1] = (long)param_1;
            pvVar3 = (void *)0x2e7820ff94f2299e;
          }
        }
      }
      if (-0x4591d5331867de21 < (long)pvVar8) break;
      pvVar3 = (void *)0xdaabd6243423b9d5;
      if ((pvVar8 != (void *)0x8238ab8752830617) &&
         (pvVar3 = pvVar8, pvVar8 == (void *)0x8497e9c855873224)) {
        pvVar2 = pvVar6;
        pvVar3 = (void *)0x55488ab70f6983fa;
      }
    }
    pvVar2 = pvVar4;
    pvVar3 = (void *)0x55488ab70f6983fa;
  } while (((pvVar8 == (void *)0xba6e2acce79821e0) ||
           (pvVar2 = pvVar7, pvVar3 = pvVar1, pvVar8 == (void *)0xd7a28745f3a8fb05)) ||
          (pvVar3 = pvVar8, pvVar8 != (void *)0xdaabd6243423b9d5));
  *param_1 = 0;
  param_1[1] = (long)param_1;
  return;
}


