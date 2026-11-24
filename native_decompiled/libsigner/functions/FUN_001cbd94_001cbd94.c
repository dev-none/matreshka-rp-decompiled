// Function: FUN_001cbd94
// Entry: 001cbd94

char * FUN_001cbd94(char *param_1,char param_2,long param_3)

{
  long lVar1;
  long lVar2;
  char *in_x7;
  char *pcVar3;
  char *unaff_x19;
  long unaff_x20;
  long lVar4;
  long unaff_x21;
  char *unaff_x22;
  long unaff_x23;
  char *unaff_x24;
  long lVar5;
  
  lVar1 = 0x297717612b720ee8;
  if (param_3 != 0) {
    lVar1 = 0x45f288ff0a7ea1de;
  }
  lVar2 = 0x65f514c9e7f64775;
LAB_001cbe94:
  do {
    while (lVar5 = lVar2, pcVar3 = unaff_x24, unaff_x24 = pcVar3, lVar2 = lVar5,
          lVar5 < 0x38b550c75dcbd861) {
      if (lVar5 < 0x1666a35a3e139985) {
        if (lVar5 == -0x6c070e2a612990f7) {
          unaff_x21 = unaff_x23 + -1;
          unaff_x19 = unaff_x22 + 1;
          lVar2 = 0x38b550c75dcbd861;
          if (unaff_x21 != 0) {
            lVar2 = 0x494913e247ec810;
          }
        }
        else {
          pcVar3 = unaff_x19;
          lVar4 = unaff_x21;
          if (lVar5 == 0x494913e247ec810) {
LAB_001cbf2c:
            in_x7 = pcVar3;
            unaff_x20 = lVar4;
            lVar2 = 0x7c9736501c5f4f0a;
          }
        }
      }
      else {
        unaff_x24 = unaff_x22;
        lVar2 = 0x482e5862fb274eec;
        if ((lVar5 != 0x1666a35a3e139985) &&
           (unaff_x24 = pcVar3, lVar2 = lVar5, lVar5 == 0x297717612b720ee8)) {
LAB_001cbf70:
          unaff_x24 = (char *)0x0;
          lVar2 = 0x482e5862fb274eec;
        }
      }
    }
    if (lVar5 < 0x482e5862fb274eec) {
      if (lVar5 == 0x38b550c75dcbd861) goto LAB_001cbf70;
      pcVar3 = param_1;
      lVar4 = param_3;
      if (lVar5 == 0x45f288ff0a7ea1de) goto LAB_001cbf2c;
      goto LAB_001cbe94;
    }
    lVar2 = lVar1;
    if (lVar5 != 0x65f514c9e7f64775) {
      if (lVar5 == 0x7c9736501c5f4f0a) {
        unaff_x22 = in_x7;
        unaff_x23 = unaff_x20;
        lVar2 = 0x1666a35a3e139985;
        if (*in_x7 != param_2) {
          lVar2 = -0x6c070e2a612990f7;
        }
      }
      else {
        lVar2 = lVar5;
        if (lVar5 == 0x482e5862fb274eec) {
          return pcVar3;
        }
      }
    }
  } while( true );
}


