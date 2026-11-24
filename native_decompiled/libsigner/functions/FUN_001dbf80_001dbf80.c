// Function: FUN_001dbf80
// Entry: 001dbf80

void FUN_001dbf80(undefined8 *param_1,undefined1 *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  
  uVar6 = *(uint *)(param_1 + 8);
  puVar2 = (undefined1 *)((long)param_1 + (ulong)uVar6);
  uVar1 = uVar6 + 1;
  lVar3 = -0x78021ee995880f92;
  if (0x37 < uVar6) {
    lVar3 = -0x7d297ff0c8057c85;
  }
  lVar4 = 0x57dab7dd661b1869;
  if (0x3f < uVar1) {
    lVar4 = 0x55d58c2b8d472655;
  }
  lVar5 = -0x1795c34d98dcd73d;
  if (0x37 < uVar1) {
    lVar5 = 0x5e9249b5376f08fa;
  }
  *puVar2 = 0x80;
  lVar7 = 0x1db1d1f44155ec69;
  do {
    while( true ) {
      while( true ) {
        while (lVar8 = lVar7, lVar7 = lVar8, 0x2ac799c399899ac2 < lVar8) {
          if (lVar8 < 0x57dab7dd661b1869) {
            if (lVar8 == 0x2ac799c399899ac3) {
              FUN_001db018(param_1,param_1);
              param_1[6] = 0;
              param_1[3] = 0;
              param_1[2] = 0;
              param_1[5] = 0;
              param_1[4] = 0;
              param_1[1] = 0;
              *param_1 = 0;
              lVar7 = -0x6e8c5e03a6cc6a6b;
            }
            else if (lVar8 == 0x55d58c2b8d472655) {
              lVar7 = 0x2ac799c399899ac3;
            }
          }
          else if (lVar8 == 0x57dab7dd661b1869) {
            memset((void *)((long)param_1 + (ulong)uVar1),0,(ulong)(0x3e - uVar6) + 1);
            lVar7 = 0x2ac799c399899ac3;
          }
          else if (lVar8 == 0x5e9249b5376f08fa) {
            lVar7 = -0x6e8c5e03a6cc6a6b;
          }
        }
        if (-0x6e8c5e03a6cc6a6c < lVar8) break;
        lVar7 = lVar4;
        if ((lVar8 != -0x7d297ff0c8057c85) && (lVar7 = lVar8, lVar8 == -0x78021ee995880f92)) {
          lVar7 = lVar5;
        }
      }
      if (lVar8 != -0x1795c34d98dcd73d) break;
      memset(puVar2 + 1,0,0x37 - (ulong)uVar6);
      lVar7 = -0x6e8c5e03a6cc6a6b;
    }
    lVar7 = lVar3;
  } while ((lVar8 == 0x1db1d1f44155ec69) || (lVar7 = lVar8, lVar8 != -0x6e8c5e03a6cc6a6b));
  lVar3 = param_1[9] + (ulong)(uint)(*(int *)(param_1 + 8) << 3);
  param_1[9] = lVar3;
  *(char *)((long)param_1 + 0x3e) = (char)((ulong)lVar3 >> 8);
  *(char *)((long)param_1 + 0x3d) = (char)((ulong)lVar3 >> 0x10);
  *(char *)((long)param_1 + 0x3f) = (char)lVar3;
  *(char *)((long)param_1 + 0x3b) = (char)((ulong)lVar3 >> 0x20);
  *(char *)((long)param_1 + 0x3c) = (char)((ulong)lVar3 >> 0x18);
  *(char *)((long)param_1 + 0x3a) = (char)((ulong)lVar3 >> 0x28);
  *(char *)((long)param_1 + 0x39) = (char)((ulong)lVar3 >> 0x30);
  *(char *)(param_1 + 7) = (char)((ulong)lVar3 >> 0x38);
  FUN_001db018(param_1,param_1);
  *param_2 = *(undefined1 *)((long)param_1 + 0x53);
  param_2[4] = *(undefined1 *)((long)param_1 + 0x57);
  param_2[8] = *(undefined1 *)((long)param_1 + 0x5b);
  param_2[0xc] = *(undefined1 *)((long)param_1 + 0x5f);
  param_2[0x10] = *(undefined1 *)((long)param_1 + 99);
  param_2[1] = (char)*(undefined2 *)((long)param_1 + 0x52);
  param_2[5] = (char)*(undefined2 *)((long)param_1 + 0x56);
  param_2[9] = (char)*(undefined2 *)((long)param_1 + 0x5a);
  param_2[0xd] = (char)*(undefined2 *)((long)param_1 + 0x5e);
  param_2[0x11] = (char)*(undefined2 *)((long)param_1 + 0x62);
  param_2[2] = (char)((uint)*(undefined4 *)(param_1 + 10) >> 8);
  param_2[6] = (char)((uint)*(undefined4 *)((long)param_1 + 0x54) >> 8);
  param_2[10] = (char)((uint)*(undefined4 *)(param_1 + 0xb) >> 8);
  param_2[0xe] = (char)((uint)*(undefined4 *)((long)param_1 + 0x5c) >> 8);
  param_2[0x12] = (char)((uint)*(undefined4 *)(param_1 + 0xc) >> 8);
  param_2[3] = (char)*(undefined4 *)(param_1 + 10);
  param_2[7] = (char)*(undefined4 *)((long)param_1 + 0x54);
  param_2[0xb] = (char)*(undefined4 *)(param_1 + 0xb);
  param_2[0xf] = (char)*(undefined4 *)((long)param_1 + 0x5c);
  param_2[0x13] = (char)*(undefined4 *)(param_1 + 0xc);
  return;
}


