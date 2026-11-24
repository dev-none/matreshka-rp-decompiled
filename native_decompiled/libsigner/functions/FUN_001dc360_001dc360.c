// Function: FUN_001dc360
// Entry: 001dc360

bool FUN_001dc360(undefined4 *param_1,void *param_2,size_t param_3,ulong param_4,FILE *param_5)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  long lVar4;
  
  sVar3 = fread(param_2,param_3,param_4,param_5);
  lVar1 = -0x51d29b406c0e4ce6;
  if (sVar3 < param_4) {
    lVar1 = 0x7772f905052e4c0f;
  }
  lVar2 = 0x21d53de2b345f472;
  do {
    while( true ) {
      while (lVar4 = lVar2, 0x21d53de2b345f471 < lVar4) {
        lVar2 = lVar1;
        if ((lVar4 != 0x21d53de2b345f472) && (lVar2 = lVar4, lVar4 == 0x7772f905052e4c0f)) {
          *param_1 = 2;
          lVar2 = -0x23922d8f9e1450cc;
        }
      }
      if (lVar4 != -0x51d29b406c0e4ce6) break;
      lVar2 = -0x23922d8f9e1450cc;
    }
    lVar2 = lVar4;
  } while (lVar4 != -0x23922d8f9e1450cc);
  return param_4 <= sVar3;
}


