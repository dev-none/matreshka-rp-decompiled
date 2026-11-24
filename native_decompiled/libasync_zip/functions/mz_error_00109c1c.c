// Function: mz_error
// Entry: 00109c1c

undefined * mz_error(int param_1)

{
  long lVar1;
  
  if (param_1 < -2) {
    if (param_1 < -5) {
      if (param_1 == -10000) {
        lVar1 = 9;
      }
      else {
        if (param_1 != -6) {
          return (undefined *)0x0;
        }
        lVar1 = 8;
      }
    }
    else if (param_1 == -5) {
      lVar1 = 7;
    }
    else if (param_1 == -4) {
      lVar1 = 6;
    }
    else {
      if (param_1 != -3) {
        return (undefined *)0x0;
      }
      lVar1 = 5;
    }
  }
  else if (param_1 < 0) {
    if (param_1 == -2) {
      lVar1 = 4;
    }
    else {
      if (param_1 != -1) {
        return (undefined *)0x0;
      }
      lVar1 = 3;
    }
  }
  else if (param_1 == 0) {
    lVar1 = 0;
  }
  else if (param_1 == 2) {
    lVar1 = 2;
  }
  else {
    if (param_1 != 1) {
      return (undefined *)0x0;
    }
    lVar1 = 1;
  }
  return (&PTR_DAT_0011c370)[lVar1 * 2];
}


