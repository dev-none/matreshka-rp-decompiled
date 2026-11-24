// Function: FUN_00141d44
// Entry: 00141d44

void FUN_00141d44(long param_1,float *param_2,ulong *param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long unaff_x24;
  float fVar5;
  
  lVar1 = 0x570cd34c2279984f;
  if (param_1 != 0) {
    lVar1 = -0x2fa8390f2f468da1;
  }
  lVar2 = -0x158fa7d208877a4b;
  do {
    while( true ) {
      while( true ) {
        while (lVar4 = lVar2, lVar2 = lVar4, lVar4 < -0x158fa7d208877a4b) {
          if (lVar4 < -0x696c024593839210) {
            if (lVar4 == -0x732f8aa833813f60) {
              lVar2 = -0x3ed07aaa2fff99fc;
              if (DAT_001f7fde == '\0') {
                lVar2 = -0x605c5ca2f82803be;
              }
            }
            else if (lVar4 == -0x7148c0ae32f51db6) {
              DAT_001f7c80 = 0;
              lVar4 = FUN_001cac50(unaff_x24,&DAT_001f58a8);
              lVar2 = -0x709bb49cf06fd3a6;
              if (lVar4 != 0) {
                lVar2 = -0x455acf13b8bfc06;
              }
            }
            else if (lVar4 == -0x709bb49cf06fd3a6) {
              lVar2 = 0x66645e84ab5d9129;
            }
          }
          else if (lVar4 < -0x3ed07aaa2fff99fc) {
            lVar2 = 0x66645e84ab5d9129;
            if ((lVar4 != -0x696c024593839210) && (lVar2 = lVar4, lVar4 == -0x605c5ca2f82803be)) {
              DAT_001f58b0 = DAT_001f58b0 ^ 0x80;
              DAT_001f58b2 = DAT_001f58b2 ^ 0x80;
              DAT_001f58b1 = DAT_001f58b1 ^ 0x80;
              DAT_001f58a8 = DAT_001f58a8 ^ 0x8080808080808080;
              DAT_001f7fde = '\x01';
              lVar2 = -0x7148c0ae32f51db6;
            }
          }
          else {
            lVar2 = -0x7148c0ae32f51db6;
            if ((lVar4 != -0x3ed07aaa2fff99fc) && (lVar2 = lVar4, lVar4 == -0x2fa8390f2f468da1)) {
              unaff_x24 = *(long *)(param_1 + 0x18);
              lVar2 = -0x7e1b494f1b94e4a;
              if (unaff_x24 == 0 || param_3 == (ulong *)0x0) {
                lVar2 = -0x696c024593839210;
              }
            }
          }
        }
        if (0x4b2b9d595b7452f3 < lVar4) break;
        lVar2 = lVar1;
        if (((lVar4 != -0x158fa7d208877a4b) &&
            (lVar2 = 0x4b2b9d595b7452f4, lVar4 != -0x7e1b494f1b94e4a)) &&
           (lVar2 = lVar4, lVar4 == -0x455acf13b8bfc06)) {
          fVar5 = *param_2;
          *param_3 = *param_3 | 0x2000;
          *param_2 = fVar5 + (1.0 - fVar5);
          lVar2 = 0x66645e84ab5d9129;
        }
      }
      if (0x66645e84ab5d9128 < lVar4) break;
      if (lVar4 == 0x4b2b9d595b7452f4) {
        iVar3 = FUN_001ebe70(0,1,&DAT_001f7c80);
        lVar2 = -0x732f8aa833813f60;
        if (iVar3 != 0) {
          lVar2 = 0x7db2a019ff75f3e3;
        }
      }
      else if (lVar4 == 0x570cd34c2279984f) {
        lVar2 = 0x66645e84ab5d9129;
      }
    }
    lVar2 = 0x4b2b9d595b7452f4;
  } while ((lVar4 == 0x7db2a019ff75f3e3) || (lVar2 = lVar4, lVar4 != 0x66645e84ab5d9129));
  return;
}


