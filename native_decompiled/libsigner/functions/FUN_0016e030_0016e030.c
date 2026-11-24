// Function: FUN_0016e030
// Entry: 0016e030

void FUN_0016e030(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = -0x1c57606b44c18182;
  if (param_3 == 0 || param_2 == 0) {
    lVar1 = -0x37d03aa9c8b304fc;
  }
  lVar2 = -0x3a9a787bdaa35b1e;
  while( true ) {
    while (-0x37d03aa9c8b304fd < lVar2) {
      if (lVar2 == -0x1c57606b44c18182) {
        (**(code **)(*param_1 + 0x550))(param_1,param_2,param_3);
        lVar2 = -0x5ab7f064f0b58e71;
      }
      else if (lVar2 == -0x37d03aa9c8b304fc) {
        lVar2 = -0x5ab7f064f0b58e71;
      }
    }
    if (lVar2 == -0x5ab7f064f0b58e71) break;
    if (lVar2 == -0x3a9a787bdaa35b1e) {
      lVar2 = lVar1;
    }
  }
  return;
}


