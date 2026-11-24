// Function: FUN_001dd440
// Entry: 001dd440

void FUN_001dd440(long *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *unaff_x20;
  void *unaff_x23;
  void *unaff_x27;
  void *pvVar6;
  
  pvVar6 = (void *)*param_1;
  pvVar1 = (void *)0x4a5cd72dc1a18f6;
  if (pvVar6 != (void *)0x0) {
    pvVar1 = (void *)0x408409b1e5ac055;
  }
  pvVar3 = (void *)0x408409b1e5ac055;
  pvVar2 = (void *)0x862419eaecdf1a5;
  do {
    while( true ) {
      while( true ) {
        while (pvVar5 = pvVar2, pvVar4 = pvVar3, pvVar3 = pvVar4, (long)pvVar5 < 0x408409b1e5ac055)
        {
          if ((long)pvVar5 < -0x435e690cfbf5da12) {
            if (pvVar5 == (void *)0x9ea8bf2b74e4b439) {
              unaff_x20 = *(void **)((long)unaff_x27 + 8);
              pvVar2 = (void *)0xd0535adc928c1bbf;
              if (unaff_x20 != (void *)0x0) {
                pvVar2 = (void *)0xbca196f3040a25ee;
              }
            }
            else {
              pvVar2 = (void *)0x75ce15e08caa4c6a;
              if ((pvVar5 != (void *)0xa6783f0b0f892393) &&
                 (pvVar2 = pvVar5, pvVar5 == (void *)0xa852b4a22d98453e)) {
                pvVar3 = unaff_x23;
                pvVar2 = (void *)0x26c60fa523ddda4b;
              }
            }
          }
          else if (pvVar5 == (void *)0xbca196f3040a25ee) {
            free(unaff_x20);
            pvVar2 = (void *)0xe08d3eae8db4f8d9;
          }
          else {
            pvVar2 = (void *)0xe08d3eae8db4f8d9;
            if ((pvVar5 != (void *)0xd0535adc928c1bbf) &&
               (pvVar2 = pvVar5, pvVar5 == (void *)0xe08d3eae8db4f8d9)) {
              free(unaff_x27);
              unaff_x23 = (void *)*param_1;
              pvVar2 = (void *)0xa6783f0b0f892393;
              if (unaff_x23 != (void *)0x0) {
                pvVar2 = (void *)0xa852b4a22d98453e;
              }
            }
          }
        }
        if (0x862419eaecdf1a4 < (long)pvVar5) break;
        pvVar3 = pvVar6;
        pvVar2 = (void *)0x26c60fa523ddda4b;
        if (pvVar5 != (void *)0x408409b1e5ac055) {
          if (pvVar5 == (void *)0x4357c11efd169a0) {
            param_1[1] = (long)param_1;
            pvVar3 = pvVar4;
            pvVar2 = (void *)0x9ea8bf2b74e4b439;
          }
          else {
            pvVar3 = pvVar4;
            pvVar2 = pvVar5;
            if (pvVar5 == (void *)0x4a5cd72dc1a18f6) {
              pvVar2 = (void *)0x75ce15e08caa4c6a;
            }
          }
        }
      }
      if (0x6dbb77d6245fbf6b < (long)pvVar5) break;
      pvVar2 = pvVar1;
      if ((pvVar5 != (void *)0x862419eaecdf1a5) &&
         (pvVar2 = pvVar5, pvVar5 == (void *)0x26c60fa523ddda4b)) {
        pvVar2 = (void *)0x4357c11efd169a0;
        if (*(long *)((long)pvVar4 + 0x10) != 0) {
          pvVar2 = (void *)0x6dbb77d6245fbf6c;
        }
        *param_1 = *(long *)((long)pvVar4 + 0x10);
        unaff_x27 = pvVar4;
      }
    }
    pvVar2 = (void *)0x9ea8bf2b74e4b439;
  } while ((pvVar5 == (void *)0x6dbb77d6245fbf6c) ||
          (pvVar2 = pvVar5, pvVar5 != (void *)0x75ce15e08caa4c6a));
  *param_1 = 0;
  param_1[1] = (long)param_1;
  return;
}


