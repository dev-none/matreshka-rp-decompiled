// Function: FUN_0011d50c
// Entry: 0011d50c

void FUN_0011d50c(long param_1,long param_2,short *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long unaff_x28;
  
  lVar1 = 0x785a883b00ef416d;
  if (param_2 != 0) {
    lVar1 = 0x67d7fb9a0fcfedef;
  }
  lVar4 = 0x785a883b00ef416d;
  lVar2 = 0x385d80545f3737e5;
  do {
    while( true ) {
      while( true ) {
        while (lVar5 = lVar2, lVar2 = lVar5, 0x5a173ff8b4bb5be1 < lVar5) {
          if (lVar5 < 0x67d7fb9a0fcfedef) {
            if (lVar5 == 0x5a173ff8b4bb5be2) {
              *param_3 = *param_3 + 1;
              lVar2 = -0x72681e1acd6b059c;
            }
            else if (lVar5 == 0x5a6e055eb95c23c2) {
              lVar2 = -0x72681e1acd6b059c;
            }
          }
          else if (lVar5 == 0x67d7fb9a0fcfedef) {
            lVar2 = 0x2ac20a3475ce5e93;
            unaff_x28 = 0;
          }
          else {
            lVar2 = -0x1787ea94ea6448e;
            if ((lVar5 != 0x6f6126ed95917c7b) && (lVar2 = lVar5, lVar5 == 0x785a883b00ef416d)) {
              lVar2 = -0x1787ea94ea6448e;
            }
          }
        }
        if (-0x1787ea94ea6448f < lVar5) break;
        if (lVar5 == -0x72681e1acd6b059c) {
          unaff_x20 = lVar4 + 1;
          lVar2 = 0x6f6126ed95917c7b;
          if (unaff_x20 != param_2) {
            lVar2 = -0x31fdcae306c274f0;
          }
        }
        else if (lVar5 == -0x31fdcae306c274f0) {
          lVar2 = 0x2ac20a3475ce5e93;
          unaff_x28 = unaff_x20;
        }
      }
      if (lVar5 != 0x2ac20a3475ce5e93) break;
      uVar3 = FUN_0019f244(*(undefined8 *)(param_1 + unaff_x28 * 8));
      lVar4 = unaff_x28;
      lVar2 = 0x5a173ff8b4bb5be2;
      if ((uVar3 & 1) == 0) {
        lVar2 = 0x5a6e055eb95c23c2;
      }
    }
    lVar2 = lVar1;
  } while ((lVar5 == 0x385d80545f3737e5) || (lVar2 = lVar5, lVar5 != -0x1787ea94ea6448e));
  return;
}


