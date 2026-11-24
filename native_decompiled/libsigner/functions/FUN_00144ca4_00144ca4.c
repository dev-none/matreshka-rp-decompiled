// Function: FUN_00144ca4
// Entry: 00144ca4

void FUN_00144ca4(long param_1,float *param_2,ulong *param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long unaff_x24;
  float fVar5;
  
  lVar1 = -0x339b3e4e114790e5;
  if (param_1 != 0) {
    lVar1 = 0x9e53e215557ed93;
  }
  lVar2 = -0x17177dbf65bd4f3f;
  do {
    while( true ) {
      while( true ) {
        while (lVar4 = lVar2, lVar2 = lVar4, -0x222ca5ab18afe7c6 < lVar4) {
          if (lVar4 < 0x9e53e215557ed93) {
            if (lVar4 == -0x222ca5ab18afe7c5) {
              lVar2 = 0x3301ae291e823c4c;
              if (DAT_001f8064 == '\0') {
                lVar2 = 0x4ede5b0d3e555c15;
              }
            }
            else {
              lVar2 = lVar1;
              if ((lVar4 != -0x17177dbf65bd4f3f) && (lVar2 = lVar4, lVar4 == 0x2248800aa15c58d)) {
                lVar2 = -0x77c0f4c72076ee35;
              }
            }
          }
          else if (lVar4 < 0x3301ae291e823c4c) {
            if (lVar4 == 0x9e53e215557ed93) {
              unaff_x24 = *(long *)(param_1 + 0x40);
              lVar2 = -0x74d18029a4b9a0ad;
              if (unaff_x24 == 0 || param_3 == (ulong *)0x0) {
                lVar2 = 0x2d0a5ac386207734;
              }
            }
            else if (lVar4 == 0x2d0a5ac386207734) {
              lVar2 = -0x77c0f4c72076ee35;
            }
          }
          else {
            lVar2 = -0x497e9593c5d05a0a;
            if ((lVar4 != 0x3301ae291e823c4c) && (lVar2 = lVar4, lVar4 == 0x4ede5b0d3e555c15)) {
              DAT_001f63e8 = DAT_001f63e8 ^ 0xc0;
              DAT_001f63e9 = DAT_001f63e9 ^ 0xc0;
              DAT_001f63ea = DAT_001f63ea ^ 0xc0;
              DAT_001f63eb = DAT_001f63eb ^ 0xc0;
              DAT_001f63e0 = DAT_001f63e0 ^ 0xc0c0c0c0c0c0c0c0;
              DAT_001f8064 = '\x01';
              lVar2 = -0x497e9593c5d05a0a;
            }
          }
        }
        if (lVar4 < -0x63b0b08eeea9929c) break;
        if (lVar4 == -0x63b0b08eeea9929c) {
          iVar3 = FUN_001ebe70(0,1,&DAT_001f7e98);
          lVar2 = -0x222ca5ab18afe7c5;
          if (iVar3 != 0) {
            lVar2 = -0x6f3305638d11e142;
          }
        }
        else if (lVar4 == -0x497e9593c5d05a0a) {
          DAT_001f7e98 = 0;
          lVar4 = FUN_001cac50(unaff_x24,&DAT_001f63e0);
          lVar2 = 0x2248800aa15c58d;
          if (lVar4 != 0) {
            lVar2 = -0x6f64e1e824f5cb28;
          }
        }
        else if (lVar4 == -0x339b3e4e114790e5) {
          lVar2 = -0x77c0f4c72076ee35;
        }
      }
      if (lVar4 < -0x6f64e1e824f5cb28) break;
      if (lVar4 == -0x6f64e1e824f5cb28) {
        fVar5 = *param_2;
        *param_3 = *param_3 | 0x100000;
        *param_2 = fVar5 + (1.0 - fVar5);
        lVar2 = -0x77c0f4c72076ee35;
      }
      else if (lVar4 == -0x6f3305638d11e142) {
        lVar2 = -0x63b0b08eeea9929c;
      }
    }
    lVar2 = -0x63b0b08eeea9929c;
  } while ((lVar4 == -0x74d18029a4b9a0ad) || (lVar2 = lVar4, lVar4 != -0x77c0f4c72076ee35));
  return;
}


