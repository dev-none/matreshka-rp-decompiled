// Function: FUN_0014467c
// Entry: 0014467c

void FUN_0014467c(long param_1,float *param_2,ulong *param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long unaff_x24;
  float fVar5;
  
  lVar1 = -0x4bdf7c53367c2249;
  if (param_1 != 0) {
    lVar1 = -0x5583eb7bb5d3c877;
  }
  lVar2 = -0x6fada702603cf97;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (lVar4 = lVar2, lVar2 = lVar4, lVar4 < -0x6fada702603cf97) {
            if (lVar4 < -0x37dca46e88cf0ffb) {
              lVar2 = -0x37dca46e88cf0ffb;
              if (lVar4 != -0x7917498936e1ab81) {
                if (lVar4 == -0x5583eb7bb5d3c877) {
                  unaff_x24 = *(long *)(param_1 + 0x20);
                  lVar2 = -0xf3fe83873dece1e;
                  if (unaff_x24 == 0 || param_3 == (ulong *)0x0) {
                    lVar2 = -0x2de6e126df0c3a56;
                  }
                }
                else {
                  lVar2 = lVar4;
                  if (lVar4 == -0x4bdf7c53367c2249) {
                    lVar2 = 0x5fffe4c298273a74;
                  }
                }
              }
            }
            else if (lVar4 < -0x21733ed2dbd95ef2) {
              if (lVar4 == -0x37dca46e88cf0ffb) {
                DAT_001f7c60 = 0;
                lVar4 = FUN_001cac50(unaff_x24,&DAT_001f5834);
                lVar2 = 0x4d8f3309053af86;
                if (lVar4 != 0) {
                  lVar2 = 0x1fdca52d412c42cf;
                }
              }
              else if (lVar4 == -0x2de6e126df0c3a56) {
                lVar2 = 0x5fffe4c298273a74;
              }
            }
            else if (lVar4 == -0x21733ed2dbd95ef2) {
              lVar2 = -0x7917498936e1ab81;
              if (DAT_001f7fd6 == '\0') {
                lVar2 = 0x163d088f2837102d;
              }
            }
            else if (lVar4 == -0xf3fe83873dece1e) {
              lVar2 = 0x69b6a593c541c374;
            }
          }
          if (0x1fdca52d412c42ce < lVar4) break;
          lVar2 = lVar1;
          if (((lVar4 != -0x6fada702603cf97) &&
              (lVar2 = 0x5fffe4c298273a74, lVar4 != 0x4d8f3309053af86)) &&
             (lVar2 = lVar4, lVar4 == 0x163d088f2837102d)) {
            DAT_001f5834 = DAT_001f5834 ^ 0xf4;
            DAT_001f5835 = DAT_001f5835 ^ 0xf4;
            DAT_001f5836 = DAT_001f5836 ^ 0xf4;
            DAT_001f5838 = DAT_001f5838 ^ 0xf4;
            DAT_001f5839 = DAT_001f5839 ^ 0xf4;
            DAT_001f583a = DAT_001f583a ^ 0xf4;
            DAT_001f5837 = DAT_001f5837 ^ 0xf4;
            DAT_001f7fd6 = '\x01';
            lVar2 = -0x37dca46e88cf0ffb;
          }
        }
        if (lVar4 < 0x65dc473106aadb38) break;
        lVar2 = 0x69b6a593c541c374;
        if ((lVar4 != 0x65dc473106aadb38) && (lVar2 = lVar4, lVar4 == 0x69b6a593c541c374)) {
          iVar3 = FUN_001ebe70(0,1,&DAT_001f7c60);
          lVar2 = -0x21733ed2dbd95ef2;
          if (iVar3 != 0) {
            lVar2 = 0x65dc473106aadb38;
          }
        }
      }
      if (lVar4 != 0x1fdca52d412c42cf) break;
      fVar5 = *param_2;
      *param_3 = *param_3 | 0x40000;
      *param_2 = fVar5 + (1.0 - fVar5);
      lVar2 = 0x5fffe4c298273a74;
    }
  } while (lVar4 != 0x5fffe4c298273a74);
  return;
}


