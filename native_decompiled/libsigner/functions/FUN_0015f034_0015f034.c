// Function: FUN_0015f034
// Entry: 0015f034

byte FUN_0015f034(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  byte unaff_w19;
  
  lVar3 = 0x6fc76110bc7e1d5c;
LAB_0015f134:
  do {
    while (lVar2 = lVar3, lVar3 = lVar2, lVar2 < 0x1f6f0d0e62d046b9) {
      if (lVar2 < -0x3b3f19a4c32f9514) {
        if (lVar2 < -0x4555912027a20e46) {
          if (lVar2 == -0x64ed8eab63facddd) {
            unaff_w19 = 1;
            lVar3 = 0x2aa05a9f7964a998;
          }
          else if (lVar2 == -0x547088ead9c7671c) {
            lVar3 = -0x4555912027a20e46;
            if (DAT_001f7f84._1_1_ == '\0') {
              lVar3 = 0x62e1ce36287b1ab4;
            }
          }
        }
        else {
          lVar3 = -0x41fd165d83373c62;
          if ((lVar2 != -0x4555912027a20e46) && (lVar3 = lVar2, lVar2 == -0x41fd165d83373c62)) {
            DAT_001f7f84 = 0;
            lVar2 = FUN_001cac50(*(undefined8 *)(param_1 + 8),&DAT_001f6890);
            lVar3 = 0x187da2a74d4a5758;
            if (lVar2 != 0) {
              lVar3 = -0x64ed8eab63facddd;
            }
          }
        }
      }
      else if (lVar2 < -0x181a1b6e96ec5ecd) {
        if (lVar2 == -0x3b3f19a4c32f9514) {
          lVar3 = 0x4ad01392ba5da2e0;
LAB_0015f128:
          DAT_001f6893 = DAT_001f6893 ^ 0xbb;
          DAT_001f6892 = DAT_001f6892 ^ 0xbb;
          DAT_001f6891 = DAT_001f6891 ^ 0xbb;
          DAT_001f6890 = DAT_001f6890 ^ 0xbb;
          DAT_001f6894 = DAT_001f6894 ^ 0xbb;
          DAT_001f7f84._0_2_ = CONCAT11(1,(undefined1)DAT_001f7f84);
        }
        else if (lVar2 == -0x1f327e7cf792c9e8) {
          lVar3 = 0x56a477522b4503c2;
          if (DAT_001f7f84._1_1_ == '\0') {
            lVar3 = -0x3b3f19a4c32f9514;
          }
        }
      }
      else {
        lVar3 = 0x514163c68543e96e;
        if ((lVar2 != -0x181a1b6e96ec5ecd) && (lVar3 = lVar2, lVar2 == 0x187da2a74d4a5758)) {
          lVar3 = 0x3b1fb966b41340bc;
        }
      }
    }
    if (lVar2 < 0x514163c68543e96e) {
      if (lVar2 < 0x3b1fb966b41340bc) {
        lVar3 = 0x3b1fb966b41340bc;
        if ((lVar2 != 0x1f6f0d0e62d046b9) && (lVar3 = lVar2, lVar2 == 0x2aa05a9f7964a998)) {
          return unaff_w19 & 1;
        }
      }
      else if (lVar2 == 0x3b1fb966b41340bc) {
        iVar1 = FUN_001ebe70(0,1,&DAT_001f7f84);
        lVar3 = -0x1f327e7cf792c9e8;
        if (iVar1 != 0) {
          lVar3 = 0x1f6f0d0e62d046b9;
        }
      }
      else if (lVar2 == 0x4ad01392ba5da2e0) {
        DAT_001f7f84 = 0;
        lVar3 = FUN_001cac50(*(undefined8 *)(param_1 + 0x18),&DAT_001f6890);
        unaff_w19 = lVar3 != 0;
        lVar3 = 0x2aa05a9f7964a998;
      }
      goto LAB_0015f134;
    }
    if (lVar2 < 0x62e1ce36287b1ab4) {
      if (lVar2 == 0x514163c68543e96e) {
        iVar1 = FUN_001ebe70(0,1,&DAT_001f7f84);
        lVar3 = -0x547088ead9c7671c;
        if (iVar1 != 0) {
          lVar3 = -0x181a1b6e96ec5ecd;
        }
      }
      else if (lVar2 == 0x56a477522b4503c2) {
        lVar3 = 0x4ad01392ba5da2e0;
      }
    }
    else {
      if (lVar2 == 0x62e1ce36287b1ab4) {
        lVar3 = -0x41fd165d83373c62;
        goto LAB_0015f128;
      }
      if (lVar2 == 0x6fc76110bc7e1d5c) {
        lVar3 = 0x514163c68543e96e;
      }
    }
  } while( true );
}


