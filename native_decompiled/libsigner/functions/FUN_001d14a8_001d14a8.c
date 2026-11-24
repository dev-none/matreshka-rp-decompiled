// Function: FUN_001d14a8
// Entry: 001d14a8

char * FUN_001d14a8(char *param_1,char param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  char *in_x7;
  char cVar4;
  char *unaff_x19;
  char *unaff_x20;
  char *unaff_x21;
  char *unaff_x22;
  char cVar5;
  char *unaff_x26;
  char *pcVar6;
  char *unaff_x29;
  char *pcVar7;
  long lVar8;
  
  cVar4 = '\0';
  lVar1 = 0x41e801842f93af1a;
  if (param_2 != '\0') {
    lVar1 = -0x23866d175297b5;
  }
  lVar2 = -0x31ec1aa2761bff08;
  cVar3 = '\0';
  do {
    while( true ) {
      while( true ) {
        while (cVar5 = cVar3, lVar8 = lVar2, pcVar7 = unaff_x29, pcVar6 = unaff_x26,
              unaff_x26 = pcVar6, unaff_x29 = pcVar7, lVar2 = lVar8, cVar3 = cVar5,
              -0xb0d123d93fc778a < lVar8) {
          if (lVar8 < 0xac1b67dc08eff86) {
            if (lVar8 == -0xb0d123d93fc7789) {
              unaff_x19 = pcVar7 + 1;
              cVar4 = *pcVar7;
              unaff_x22 = pcVar7;
              lVar2 = 0xac1b67dc08eff86;
              if (cVar4 != param_2 && cVar4 != '\0') {
                lVar2 = 0xc1a3ec4055af530;
              }
            }
            else if (lVar8 == -0x23866d175297b5) {
              unaff_x29 = param_1;
              lVar2 = -0xb0d123d93fc7789;
            }
          }
          else {
            unaff_x26 = unaff_x22;
            lVar2 = -0x44be69b6dfcc8559;
            cVar3 = cVar4;
            if (((lVar8 != 0xac1b67dc08eff86) &&
                (unaff_x26 = pcVar6, unaff_x29 = unaff_x19, lVar2 = -0xb0d123d93fc7789,
                cVar3 = cVar5, lVar8 != 0xc1a3ec4055af530)) &&
               (unaff_x29 = pcVar7, lVar2 = lVar8, lVar8 == 0x41e801842f93af1a)) {
              unaff_x21 = param_1;
              lVar2 = -0x5bd66a47381358a3;
            }
          }
        }
        if (-0x5bd66a47381358a4 < lVar8) break;
        if (lVar8 == -0x64a80b7fb63c62e6) {
          unaff_x26 = unaff_x20;
          lVar2 = -0x44be69b6dfcc8559;
          cVar3 = *unaff_x20;
        }
        else if (lVar8 == -0x636f7535c726478e) {
          unaff_x21 = in_x7;
          lVar2 = -0x5bd66a47381358a3;
        }
      }
      if (lVar8 != -0x5bd66a47381358a3) break;
      in_x7 = unaff_x21 + 1;
      unaff_x20 = unaff_x21;
      lVar2 = -0x64a80b7fb63c62e6;
      if (*unaff_x21 != '\0') {
        lVar2 = -0x636f7535c726478e;
      }
    }
    lVar2 = lVar1;
  } while ((lVar8 == -0x31ec1aa2761bff08) || (lVar2 = lVar8, lVar8 != -0x44be69b6dfcc8559));
  if (cVar5 != param_2) {
    pcVar6 = (char *)0x0;
  }
  return pcVar6;
}


