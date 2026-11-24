// Function: FUN_001488a0
// Entry: 001488a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001488a0(long param_1,float *param_2,ulong *param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long unaff_x24;
  float fVar5;
  
  lVar1 = -0x123b1da40f2f53e1;
  if (param_1 != 0) {
    lVar1 = 0x5365bc072b17e36;
  }
  lVar2 = 0x24d90a00d4e5afca;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (lVar4 = lVar2, lVar2 = lVar4, lVar4 < 0x5365bc072b17e36) {
            if (lVar4 < -0x4e33d6678f2415bf) {
              if (lVar4 == -0x6e244152be660ff9) {
                fVar5 = *param_2;
                *param_3 = *param_3 | 0x800000;
                *param_2 = fVar5 + (1.0 - fVar5);
                lVar2 = 0x6850e0cc2376ecf3;
              }
              else {
                lVar2 = 0x6850e0cc2376ecf3;
                if ((lVar4 != -0x5f58826f683cd900) && (lVar2 = lVar4, lVar4 == -0x520803da00b28498))
                {
                  lVar2 = -0x4e33d6678f2415bf;
                  if (DAT_001f8069 == '\0') {
                    lVar2 = -0x170ebd543d51125f;
                  }
                }
              }
            }
            else if (lVar4 < -0x170ebd543d51125f) {
              lVar2 = 0x1b4d7d219d08e15f;
              if ((lVar4 != -0x4e33d6678f2415bf) && (lVar2 = lVar4, lVar4 == -0x18770c15e584e52c)) {
                lVar2 = 0x55fc87963ed563f5;
              }
            }
            else if (lVar4 == -0x170ebd543d51125f) {
              DAT_001f6470 = DAT_001f6470 ^ 0x2d;
              DAT_001f6471 = DAT_001f6471 ^ 0x2d;
              DAT_001f6472 = DAT_001f6472 ^ 0x2d;
              DAT_001f6473 = DAT_001f6473 ^ 0x2d;
              DAT_001f6474 = DAT_001f6474 ^ 0x2d;
              _DAT_001f6460 = _DAT_001f6460 ^ 0x2d2d2d2d2d2d2d2d;
              uRam00000000001f6468 = uRam00000000001f6468 ^ 0x2d2d2d2d2d2d2d2d;
              DAT_001f8069 = '\x01';
              lVar2 = 0x1b4d7d219d08e15f;
            }
            else if (lVar4 == -0x123b1da40f2f53e1) {
              lVar2 = 0x6850e0cc2376ecf3;
            }
          }
          if (0x337fe7e31dbf5eb1 < lVar4) break;
          if (lVar4 == 0x5365bc072b17e36) {
            unaff_x24 = *(long *)(param_1 + 0x30);
            lVar2 = 0x337fe7e31dbf5eb2;
            if (unaff_x24 == 0 || param_3 == (ulong *)0x0) {
              lVar2 = 0x4fbc6bc007ab582d;
            }
          }
          else if (lVar4 == 0x1b4d7d219d08e15f) {
            DAT_001f7eac = 0;
            lVar4 = FUN_001cac50(unaff_x24,&DAT_001f6460);
            lVar2 = -0x5f58826f683cd900;
            if (lVar4 != 0) {
              lVar2 = -0x6e244152be660ff9;
            }
          }
          else if (lVar4 == 0x24d90a00d4e5afca) {
            lVar2 = lVar1;
          }
        }
        if (0x55fc87963ed563f4 < lVar4) break;
        lVar2 = 0x55fc87963ed563f5;
        if ((lVar4 != 0x337fe7e31dbf5eb2) && (lVar2 = lVar4, lVar4 == 0x4fbc6bc007ab582d)) {
          lVar2 = 0x6850e0cc2376ecf3;
        }
      }
      if (lVar4 != 0x55fc87963ed563f5) break;
      iVar3 = FUN_001ebe70(0,1,&DAT_001f7eac);
      lVar2 = -0x520803da00b28498;
      if (iVar3 != 0) {
        lVar2 = -0x18770c15e584e52c;
      }
    }
  } while (lVar4 != 0x6850e0cc2376ecf3);
  return;
}


