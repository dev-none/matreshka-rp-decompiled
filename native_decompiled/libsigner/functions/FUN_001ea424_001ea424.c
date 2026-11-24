// Function: FUN_001ea424
// Entry: 001ea424

void FUN_001ea424(uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *__ptr;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  ulong unaff_x26;
  uint *puVar12;
  
  uVar4 = *param_2;
  puVar11 = *(uint **)(param_2 + 2);
  puVar2 = (uint *)0xe86a3cb2672328c3;
  if (uVar4 <= param_3) {
    puVar2 = (uint *)0x5e9249b5376f08fa;
  }
  puVar7 = param_1;
  puVar5 = param_2;
  puVar8 = puVar2;
  puVar6 = (uint *)0xe86a3cb2672328c3;
  puVar3 = (uint *)0x87fde1166a77f06e;
  do {
    while( true ) {
      while( true ) {
        puVar10 = puVar3;
        puVar9 = puVar6;
        __ptr = puVar5;
        puVar12 = (uint *)((ulong)puVar8 & 0xffffffff);
        puVar3 = puVar10;
        puVar5 = __ptr;
        puVar6 = puVar9;
        if ((long)puVar10 < 0x2ac799c399899ac3) break;
        if ((long)puVar10 < 0x55d58c2b8d472655) {
          if (puVar10 == (uint *)0x2ac799c399899ac3) {
            uVar1 = *param_2 + 0x80;
            unaff_x26 = (ulong)uVar1;
            puVar3 = (uint *)0x43d4efcefc88fa10;
            if (uVar1 <= param_3) {
              puVar3 = (uint *)0x9173a1fc59339595;
            }
            *param_2 = uVar1;
            puVar8 = puVar12;
          }
          else {
            puVar8 = puVar12;
            if (puVar10 == (uint *)0x43d4efcefc88fa10) {
              puVar6 = puVar7;
              puVar3 = (uint *)0x82d6800f37fa837b;
            }
          }
        }
        else if (puVar10 == (uint *)0x55d58c2b8d472655) {
          puVar7 = realloc(__ptr,(ulong)((int)puVar8 + 0x80) << 2);
          puVar3 = (uint *)0x57dab7dd661b1869;
          if (puVar7 != (uint *)0x0) {
            puVar3 = (uint *)0x2ac799c399899ac3;
          }
          *(uint **)(param_2 + 2) = puVar7;
          puVar8 = puVar12;
        }
        else if (puVar10 == (uint *)0x57dab7dd661b1869) {
          *param_1 = 2;
          puVar8 = puVar12;
          puVar3 = (uint *)0xcc4911e8d0a08389;
        }
        else {
          puVar8 = puVar12;
          if (puVar10 == (uint *)0x5e9249b5376f08fa) {
            puVar5 = puVar11;
            puVar8 = (uint *)(ulong)uVar4;
            puVar3 = (uint *)0x55d58c2b8d472655;
          }
        }
      }
      if (-0x6e8c5e03a6cc6a6c < (long)puVar10) break;
      if (puVar10 == (uint *)0x82d6800f37fa837b) {
        puVar9[param_3] = param_4;
        puVar8 = puVar12;
        puVar3 = (uint *)0xcc4911e8d0a08389;
      }
      else {
        puVar8 = puVar12;
        if (puVar10 == (uint *)0x87fde1166a77f06e) {
          puVar3 = puVar2;
        }
      }
    }
    puVar5 = puVar7;
    puVar8 = (uint *)(unaff_x26 & 0xffffffff);
    puVar3 = (uint *)0x55d58c2b8d472655;
  } while (((puVar10 == (uint *)0x9173a1fc59339595) ||
           (puVar5 = __ptr, puVar8 = puVar12, puVar6 = puVar11, puVar3 = (uint *)0x82d6800f37fa837b,
           puVar10 == (uint *)0xe86a3cb2672328c3)) ||
          (puVar6 = puVar9, puVar3 = puVar10, puVar10 != (uint *)0xcc4911e8d0a08389));
  return;
}


