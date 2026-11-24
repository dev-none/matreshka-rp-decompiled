// Function: FUN_001ca1a8
// Entry: 001ca1a8

long FUN_001ca1a8(char *param_1,char *param_2)

{
  char *pcVar1;
  char *in_x14;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = param_1 + 1;
  pcVar1 = param_1;
  lVar2 = 0x21d53de2b345f472;
  do {
    while( true ) {
      while (0x21d53de2b345f471 < lVar2) {
        if (lVar2 == 0x21d53de2b345f472) {
          lVar2 = -0x51d29b406c0e4ce6;
        }
        else if (lVar2 == 0x7772f905052e4c0f) {
          pcVar3 = param_2 + 1;
          pcVar1 = param_2;
          lVar2 = -0x51d29b406c0e4ce6;
        }
      }
      if (lVar2 != -0x51d29b406c0e4ce6) break;
      param_2 = pcVar3;
      in_x14 = pcVar1;
      lVar2 = -0x23922d8f9e1450cc;
      if (*pcVar1 != '\0') {
        lVar2 = 0x7772f905052e4c0f;
      }
    }
  } while (lVar2 != -0x23922d8f9e1450cc);
  return (long)in_x14 - (long)param_1;
}


