// Function: FUN_00196c4c
// Entry: 00196c4c

void FUN_00196c4c(void *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  void *unaff_x21;
  void *unaff_x22;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  long unaff_x28;
  
  lVar1 = 0x4b0a73ce1a719530;
  if (param_2 != 0) {
    lVar1 = 0x625158d8eb0a2f85;
  }
  lVar2 = -0xb3a88f872aa4ebb;
  if (param_1 != (void *)0x0) {
    lVar2 = -0x7a2aeb38331c8df8;
  }
  lVar3 = -0xa49f0b639b28b0f;
  do {
    while( true ) {
      while( true ) {
        while (lVar4 = lVar3, lVar3 = lVar4, lVar4 < -0xa49f0b639b28b0f) {
          if (lVar4 < -0x34b9166c69833b0e) {
            if (lVar4 < -0x497a35cc0a348547) {
              lVar3 = lVar1;
              if ((lVar4 != -0x7a2aeb38331c8df8) && (lVar3 = lVar4, lVar4 == -0x6dc874ccc457c41f)) {
                lVar3 = -0x437e6c43307f18e0;
              }
            }
            else {
              lVar3 = -0x34b9166c69833b0e;
              if ((lVar4 != -0x497a35cc0a348547) && (lVar3 = lVar4, lVar4 == -0x437e6c43307f18e0)) {
                unaff_x28 = unaff_x20 + 1;
                lVar3 = -0x497a35cc0a348547;
                if (unaff_x28 != param_2) {
                  lVar3 = -0x18f09efd70646824;
                }
              }
            }
          }
          else if (lVar4 < -0x181b3a2bfe60c12d) {
            if (lVar4 == -0x34b9166c69833b0e) {
              free(param_1);
              lVar3 = -0x134fb71cf4b16a8;
            }
            else if (lVar4 == -0x18f09efd70646824) {
              lVar3 = -0x181b3a2bfe60c12d;
              unaff_x27 = unaff_x28;
            }
          }
          else if (lVar4 == -0x181b3a2bfe60c12d) {
            unaff_x26 = (undefined8 *)((long)param_1 + unaff_x27 * 0x10);
            unaff_x21 = (void *)*unaff_x26;
            lVar3 = 0xea6ab4ac5e4fc57;
            unaff_x20 = unaff_x27;
            if (unaff_x21 != (void *)0x0) {
              lVar3 = 0x5d5a99d37413ed62;
            }
          }
          else if (lVar4 == -0xb3a88f872aa4ebb) {
            lVar3 = -0x134fb71cf4b16a8;
          }
        }
        if (lVar4 < 0x18325180716c790a) break;
        if (lVar4 < 0x5d5a99d37413ed62) {
          if (lVar4 == 0x18325180716c790a) {
            unaff_x25 = (undefined8 *)((long)param_1 + unaff_x20 * 0x10 + 8);
            unaff_x22 = (void *)*unaff_x25;
            lVar3 = -0x6dc874ccc457c41f;
            if (unaff_x22 != (void *)0x0) {
              lVar3 = 0x142f2282c4db8c8d;
            }
          }
          else if (lVar4 == 0x4b0a73ce1a719530) {
            lVar3 = -0x34b9166c69833b0e;
          }
        }
        else if (lVar4 == 0x5d5a99d37413ed62) {
          free(unaff_x21);
          *unaff_x26 = 0;
          lVar3 = 0x18325180716c790a;
        }
        else if (lVar4 == 0x625158d8eb0a2f85) {
          unaff_x27 = 0;
          lVar3 = -0x181b3a2bfe60c12d;
        }
      }
      if (lVar4 < 0xea6ab4ac5e4fc57) break;
      lVar3 = 0x18325180716c790a;
      if ((lVar4 != 0xea6ab4ac5e4fc57) && (lVar3 = lVar4, lVar4 == 0x142f2282c4db8c8d)) {
        free(unaff_x22);
        *unaff_x25 = 0;
        lVar3 = -0x437e6c43307f18e0;
      }
    }
    lVar3 = lVar2;
  } while ((lVar4 == -0xa49f0b639b28b0f) || (lVar3 = lVar4, lVar4 != -0x134fb71cf4b16a8));
  return;
}


