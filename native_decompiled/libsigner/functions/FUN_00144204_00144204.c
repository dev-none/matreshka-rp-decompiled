// Function: FUN_00144204
// Entry: 00144204

void FUN_00144204(long param_1,float *param_2,ulong *param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long unaff_x24;
  float fVar5;
  
  lVar1 = 0xca71950b682486e;
  if (param_1 != 0) {
    lVar1 = -0x267c75a1d46a8919;
  }
  lVar2 = 0x36e9940f0373a6b4;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (lVar4 = lVar2, lVar2 = lVar4, 0x2a8e72f35a700b2f < lVar4) {
            if (lVar4 < 0x4b800d170c782a2a) {
              lVar2 = 0x756b7cd2976b8e7e;
              if (lVar4 != 0x2a8e72f35a700b30) {
                if (lVar4 == 0x3400db1c91d5beb6) {
                  DAT_001f5834 = DAT_001f5834 ^ 0xf4;
                  DAT_001f5835 = DAT_001f5835 ^ 0xf4;
                  DAT_001f5836 = DAT_001f5836 ^ 0xf4;
                  DAT_001f5838 = DAT_001f5838 ^ 0xf4;
                  DAT_001f5839 = DAT_001f5839 ^ 0xf4;
                  DAT_001f583a = DAT_001f583a ^ 0xf4;
                  DAT_001f5837 = DAT_001f5837 ^ 0xf4;
                  DAT_001f7fd6 = '\x01';
                  lVar2 = 0x756b7cd2976b8e7e;
                }
                else {
                  lVar2 = lVar4;
                  if (lVar4 == 0x36e9940f0373a6b4) {
                    lVar2 = lVar1;
                  }
                }
              }
            }
            else if (lVar4 < 0x5ead6f5cd6738af4) {
              lVar2 = -0x758a3f7e9fac7785;
              if ((lVar4 != 0x4b800d170c782a2a) && (lVar2 = lVar4, lVar4 == 0x59c9b0fde2e94768)) {
                lVar2 = -0x758a3f7e9fac7785;
              }
            }
            else if (lVar4 == 0x5ead6f5cd6738af4) {
              fVar5 = *param_2;
              *param_3 = *param_3 | 0x20000;
              *param_2 = fVar5 + (1.0 - fVar5);
              lVar2 = -0x758a3f7e9fac7785;
            }
            else if (lVar4 == 0x756b7cd2976b8e7e) {
              DAT_001f7c60 = 0;
              lVar4 = FUN_001cac50(unaff_x24,&DAT_001f5834);
              lVar2 = 0x4b800d170c782a2a;
              if (lVar4 != 0) {
                lVar2 = 0x5ead6f5cd6738af4;
              }
            }
          }
          if (lVar4 < -0x2a1b184005d29f43) break;
          lVar2 = -0x6b37dc58a784e390;
          if (lVar4 != -0x2a1b184005d29f43) {
            if (lVar4 == -0x267c75a1d46a8919) {
              unaff_x24 = *(long *)(param_1 + 0x40);
              lVar2 = -0x2a1b184005d29f43;
              if (unaff_x24 == 0 || param_3 == (ulong *)0x0) {
                lVar2 = 0x59c9b0fde2e94768;
              }
            }
            else {
              lVar2 = lVar4;
              if (lVar4 == 0xca71950b682486e) {
                lVar2 = -0x758a3f7e9fac7785;
              }
            }
          }
        }
        if (lVar4 < -0x5d7f967e89340a6f) break;
        lVar2 = -0x6b37dc58a784e390;
        if (((lVar4 != -0x5d7f967e89340a6f) && (lVar2 = lVar4, lVar4 == -0x4369a8320632256e)) &&
           (lVar2 = 0x2a8e72f35a700b30, DAT_001f7fd6 == '\0')) {
          lVar2 = 0x3400db1c91d5beb6;
        }
      }
      if (lVar4 != -0x6b37dc58a784e390) break;
      iVar3 = FUN_001ebe70(0,1,&DAT_001f7c60);
      lVar2 = -0x4369a8320632256e;
      if (iVar3 != 0) {
        lVar2 = -0x5d7f967e89340a6f;
      }
    }
  } while (lVar4 != -0x758a3f7e9fac7785);
  return;
}


