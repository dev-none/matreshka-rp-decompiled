// Function: FUN_00143dd0
// Entry: 00143dd0

void FUN_00143dd0(long param_1,float *param_2,ulong *param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long unaff_x24;
  float fVar5;
  
  lVar1 = -0x38b884dc10206507;
  if (param_1 != 0) {
    lVar1 = 0x51c90e3b88e85464;
  }
  lVar2 = -0x59868b7258ce204a;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (lVar4 = lVar2, lVar2 = lVar4, lVar4 < 0x367ea0d191a71458) {
            if (lVar4 < -0x38b884dc10206507) {
              lVar2 = 0x6c4d0155a023c025;
              if (((lVar4 != -0x7201aa7d14c12231) &&
                  (lVar2 = 0x367ea0d191a71458, lVar4 != -0x6e751b498964140f)) &&
                 (lVar2 = lVar4, lVar4 == -0x59868b7258ce204a)) {
                lVar2 = lVar1;
              }
            }
            else if (lVar4 < 0x10f5c3e2cef22e85) {
              lVar2 = 0x367ea0d191a71458;
              if ((lVar4 != -0x38b884dc10206507) && (lVar2 = lVar4, lVar4 == -0x4815f0e4a02893d)) {
                lVar2 = 0x10f5c3e2cef22e85;
              }
            }
            else if (lVar4 == 0x10f5c3e2cef22e85) {
              iVar3 = FUN_001ebe70(0,1,&DAT_001f7c30);
              lVar2 = 0x3792b710f803a173;
              if (iVar3 != 0) {
                lVar2 = -0x4815f0e4a02893d;
              }
            }
            else if (lVar4 == 0x31213f8be2a56456) {
              DAT_001f5720 = DAT_001f5720 ^ 0x38;
              DAT_001f5718 = DAT_001f5718 ^ 0x3838383838383838;
              DAT_001f7fca = '\x01';
              lVar2 = 0x6c4d0155a023c025;
            }
          }
          if (lVar4 < 0x58181d57ded539c1) break;
          lVar2 = 0x367ea0d191a71458;
          if (lVar4 != 0x58181d57ded539c1) {
            if (lVar4 == 0x6a1cfa41c598fe35) {
              fVar5 = *param_2;
              *param_3 = *param_3 | 0x10000;
              *param_2 = fVar5 + (1.0 - fVar5);
              lVar2 = 0x367ea0d191a71458;
            }
            else {
              lVar2 = lVar4;
              if (lVar4 == 0x6c4d0155a023c025) {
                DAT_001f7c30 = 0;
                lVar4 = FUN_001cac50(unaff_x24,&DAT_001f5718);
                lVar2 = -0x6e751b498964140f;
                if (lVar4 != 0) {
                  lVar2 = 0x6a1cfa41c598fe35;
                }
              }
            }
          }
        }
        if (lVar4 < 0x50656b66cc70efec) break;
        lVar2 = 0x10f5c3e2cef22e85;
        if ((lVar4 != 0x50656b66cc70efec) && (lVar2 = lVar4, lVar4 == 0x51c90e3b88e85464)) {
          unaff_x24 = *(long *)(param_1 + 0x40);
          lVar2 = 0x50656b66cc70efec;
          if (unaff_x24 == 0 || param_3 == (ulong *)0x0) {
            lVar2 = 0x58181d57ded539c1;
          }
        }
      }
      if (lVar4 != 0x3792b710f803a173) break;
      lVar2 = -0x7201aa7d14c12231;
      if (DAT_001f7fca == '\0') {
        lVar2 = 0x31213f8be2a56456;
      }
    }
  } while (lVar4 != 0x367ea0d191a71458);
  return;
}


