// Function: FUN_001ccc8c
// Entry: 001ccc8c

char * FUN_001ccc8c(char *param_1,char param_2,char *param_3)

{
  char *pcVar1;
  char *extraout_x1;
  char *pcVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  
  pcVar1 = (char *)strlen(param_1);
  pcVar4 = extraout_x1 + -1;
  pcVar2 = extraout_x1;
  lVar3 = -0xfd56005cdcebed6;
  pcVar5 = pcVar1 + 1;
  do {
    while( true ) {
      while (lVar3 < 0x3582441379697640) {
        if (lVar3 == -0x608b613e0d15eb95) {
          lVar3 = 0x56c7de269b39cb28;
          if (pcVar5 != (char *)0x0) {
            lVar3 = 0x4119c2fb696ac2cc;
          }
          pcVar4 = pcVar5 + -1;
          pcVar2 = pcVar5;
        }
        else {
          if (lVar3 == -0x3c84e412275c5f52) {
            pcVar1 = param_1 + (long)param_3;
            goto LAB_001ccdec;
          }
          pcVar6 = pcVar5;
          if (lVar3 == -0xfd56005cdcebed6) goto LAB_001ccd94;
        }
      }
      if (0x4119c2fb696ac2cb < lVar3) break;
      if (lVar3 == 0x3582441379697640) {
        return pcVar1;
      }
      pcVar6 = param_3;
      if (lVar3 == 0x3cf1d9509481ae04) {
LAB_001ccd94:
        lVar3 = -0x608b613e0d15eb95;
        pcVar5 = pcVar6;
      }
    }
    if (lVar3 == 0x4119c2fb696ac2cc) {
      param_3 = pcVar4;
      lVar3 = -0x3c84e412275c5f52;
      if (param_1[(long)pcVar4] != param_2) {
        lVar3 = 0x3cf1d9509481ae04;
      }
    }
    else if (lVar3 == 0x56c7de269b39cb28) {
      pcVar1 = (char *)0x0;
LAB_001ccdec:
      pcVar4 = pcVar2 + -1;
      lVar3 = 0x3582441379697640;
    }
  } while( true );
}


