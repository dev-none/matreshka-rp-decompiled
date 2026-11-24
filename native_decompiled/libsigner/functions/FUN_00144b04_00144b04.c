// Function: FUN_00144b04
// Entry: 00144b04

void FUN_00144b04(long param_1,float *param_2,ulong *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  
  lVar1 = -0x2994ab7e43a03344;
  if (param_3 == (ulong *)0x0 || param_1 == 0) {
    lVar1 = -0x5b9cbb503f2fa995;
  }
  lVar2 = -0x1adfd399554e478e;
  do {
    while( true ) {
      do {
        while (lVar4 = lVar2, lVar4 < -0x1adfd399554e478e) {
          if (lVar4 == -0x5b9cbb503f2fa995) {
            lVar2 = 0x1412ad32ae78aae6;
          }
          else if (lVar4 == -0x2994ab7e43a03344) {
            uVar3 = FUN_00137328(param_1);
            lVar2 = -0x25acbb34c84b93c0;
            if ((uVar3 & 1) == 0) {
              lVar2 = -0xb9081d616f044d0;
            }
          }
          else {
            lVar2 = lVar4;
            if (lVar4 == -0x25acbb34c84b93c0) {
              fVar5 = *param_2;
              *param_3 = *param_3 | 0x80000;
              *param_2 = fVar5 + (1.0 - fVar5);
              lVar2 = 0x1412ad32ae78aae6;
            }
          }
        }
        lVar2 = lVar1;
      } while (lVar4 == -0x1adfd399554e478e);
      if (lVar4 != -0xb9081d616f044d0) break;
      lVar2 = 0x1412ad32ae78aae6;
    }
    lVar2 = lVar4;
  } while (lVar4 != 0x1412ad32ae78aae6);
  return;
}


