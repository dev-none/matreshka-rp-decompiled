// Function: FUN_001ded8c
// Entry: 001ded8c

void FUN_001ded8c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  void *unaff_x20;
  void *unaff_x21;
  void *unaff_x24;
  void *unaff_x26;
  
  pvVar4 = (void *)*param_1;
  lVar1 = 0x76a7314c63096d5f;
  if (pvVar4 != (void *)0x0) {
    lVar1 = 0x299108bddc6a14bb;
  }
  lVar2 = 0x61af358a616341e0;
  do {
    while( true ) {
      while( true ) {
        while (lVar3 = lVar2, 0x340d68985851f29a < lVar3) {
          if (lVar3 < 0x6c05af2b61ea5a32) {
            if (lVar3 == 0x340d68985851f29b) {
              unaff_x20 = *(void **)((long)unaff_x26 + 8);
              lVar2 = 0x1073084a84eac6b1;
              if (unaff_x20 != (void *)0x0) {
                lVar2 = 0x37405310caf8563f;
              }
            }
            else if (lVar3 == 0x37405310caf8563f) {
              free(unaff_x20);
              lVar2 = 0x6c05af2b61ea5a32;
            }
            else {
              lVar2 = lVar3;
              if (lVar3 == 0x61af358a616341e0) {
                lVar2 = lVar1;
              }
            }
          }
          else if (lVar3 == 0x6c05af2b61ea5a32) {
            free(unaff_x26);
            unaff_x24 = (void *)*param_1;
            lVar2 = -0xa10d85245fd646a;
            if (unaff_x24 != (void *)0x0) {
              lVar2 = 0x78cedefaf48b4478;
            }
          }
          else {
            lVar2 = -0x2bf7c1f74e42bb60;
            if ((lVar3 != 0x76a7314c63096d5f) && (lVar2 = lVar3, lVar3 == 0x78cedefaf48b4478)) {
              lVar2 = -0x4c0f94e3e225570b;
              unaff_x21 = unaff_x24;
            }
          }
        }
        if (lVar3 < 0x208137b40ff0c41) break;
        if (lVar3 == 0x208137b40ff0c41) {
          param_1[1] = (long)param_1;
          lVar2 = 0x340d68985851f29b;
        }
        else {
          lVar2 = 0x6c05af2b61ea5a32;
          if ((lVar3 != 0x1073084a84eac6b1) && (lVar2 = lVar3, lVar3 == 0x299108bddc6a14bb)) {
            lVar2 = -0x4c0f94e3e225570b;
            unaff_x21 = pvVar4;
          }
        }
      }
      if (-0x2bf7c1f74e42bb61 < lVar3) break;
      lVar2 = 0x340d68985851f29b;
      if ((lVar3 != -0x6b53575728baf5fd) && (lVar2 = lVar3, lVar3 == -0x4c0f94e3e225570b)) {
        lVar2 = 0x208137b40ff0c41;
        if (*(long *)((long)unaff_x21 + 0x10) != 0) {
          lVar2 = -0x6b53575728baf5fd;
        }
        *param_1 = *(long *)((long)unaff_x21 + 0x10);
        unaff_x26 = unaff_x21;
      }
    }
    lVar2 = -0x2bf7c1f74e42bb60;
  } while ((lVar3 == -0xa10d85245fd646a) || (lVar2 = lVar3, lVar3 != -0x2bf7c1f74e42bb60));
  *param_1 = 0;
  param_1[1] = (long)param_1;
  return;
}


