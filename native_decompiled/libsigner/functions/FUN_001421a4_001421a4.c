// Function: FUN_001421a4
// Entry: 001421a4

void FUN_001421a4(long param_1,float *param_2,ulong *param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long unaff_x24;
  float fVar5;
  
  lVar1 = 0x547f29f05c928613;
  if (param_1 != 0) {
    lVar1 = -0x32ea937174e01080;
  }
  lVar2 = -0x575200b42a0c621e;
  do {
    while( true ) {
      while( true ) {
        while (lVar4 = lVar2, lVar2 = lVar4, lVar4 < -0x18223b173e5470) {
          if (lVar4 < -0x575200b42a0c621e) {
            if (lVar4 == -0x7a2687d744a8ea10) {
              iVar3 = FUN_001ebe70(0,1,&DAT_001f7c88);
              lVar2 = -0x5db59dffbb923235;
              if (iVar3 != 0) {
                lVar2 = -0x18223b173e5470;
              }
            }
            else {
              lVar2 = 0x71e65e538e6ff61f;
              if ((lVar4 != -0x65aa8b6cbebdc7e2) && (lVar2 = lVar4, lVar4 == -0x5db59dffbb923235)) {
                lVar2 = -0x432b21b980fb4f4e;
                if (DAT_001f7fe0 == '\0') {
                  lVar2 = 0x2d03d23ddb3b5077;
                }
              }
            }
          }
          else if (lVar4 < -0x32ea937174e01080) {
            lVar2 = lVar1;
            if ((lVar4 != -0x575200b42a0c621e) && (lVar2 = lVar4, lVar4 == -0x432b21b980fb4f4e)) {
              lVar2 = 0x4105aa5812d713ab;
            }
          }
          else if (lVar4 == -0x32ea937174e01080) {
            unaff_x24 = *(long *)(param_1 + 0x18);
            lVar2 = 0x3810719b297accfe;
            if (unaff_x24 == 0 || param_3 == (ulong *)0x0) {
              lVar2 = -0x65aa8b6cbebdc7e2;
            }
          }
          else if (lVar4 == -0x2e51f0ef228f860d) {
            lVar2 = 0x71e65e538e6ff61f;
          }
        }
        if (0x393141ec6787535f < lVar4) break;
        lVar2 = -0x7a2687d744a8ea10;
        if (lVar4 != -0x18223b173e5470) {
          if (lVar4 == 0x2d03d23ddb3b5077) {
            DAT_001f58c8 = DAT_001f58c8 ^ 1;
            DAT_001f58c0 = DAT_001f58c0 ^ 0x101010101010101;
            DAT_001f7fe0 = '\x01';
            lVar2 = 0x4105aa5812d713ab;
          }
          else {
            lVar2 = lVar4;
            if (lVar4 == 0x3810719b297accfe) {
              lVar2 = -0x7a2687d744a8ea10;
            }
          }
        }
      }
      if (0x547f29f05c928612 < lVar4) break;
      if (lVar4 == 0x393141ec67875360) {
        fVar5 = *param_2;
        *param_3 = *param_3 | 0x4000;
        *param_2 = fVar5 + (1.0 - fVar5);
        lVar2 = 0x71e65e538e6ff61f;
      }
      else if (lVar4 == 0x4105aa5812d713ab) {
        DAT_001f7c88 = 0;
        lVar4 = FUN_001cac50(unaff_x24,&DAT_001f58c0);
        lVar2 = -0x2e51f0ef228f860d;
        if (lVar4 != 0) {
          lVar2 = 0x393141ec67875360;
        }
      }
    }
    lVar2 = 0x71e65e538e6ff61f;
  } while ((lVar4 == 0x547f29f05c928613) || (lVar2 = lVar4, lVar4 != 0x71e65e538e6ff61f));
  return;
}


