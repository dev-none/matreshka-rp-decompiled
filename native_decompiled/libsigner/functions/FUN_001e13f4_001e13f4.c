// Function: FUN_001e13f4
// Entry: 001e13f4

void FUN_001e13f4(undefined4 *param_1,uint *param_2,uint param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  
  *param_2 = param_3;
  pvVar3 = calloc(1,(ulong)param_3);
  lVar1 = -0x2542d43fb85d23b1;
  if (pvVar3 != (void *)0x0) {
    lVar1 = -0x7bcdbae8aaceaa68;
  }
  *(void **)(param_2 + 2) = pvVar3;
  lVar2 = 0x127ab137eea64fe;
  do {
    while (lVar4 = lVar2, lVar4 < 0x127ab137eea64fe) {
      if (lVar4 == -0x7bcdbae8aaceaa68) {
        FUN_001dc360(param_1,pvVar3,(ulong)param_3,1,param_4);
        lVar2 = 0x2789dc481b795cf1;
      }
      else {
        lVar2 = lVar4;
        if (lVar4 == -0x2542d43fb85d23b1) {
          *param_1 = 1;
          lVar2 = 0x2789dc481b795cf1;
        }
      }
    }
    lVar2 = lVar1;
  } while ((lVar4 == 0x127ab137eea64fe) || (lVar2 = lVar4, lVar4 != 0x2789dc481b795cf1));
  return;
}


