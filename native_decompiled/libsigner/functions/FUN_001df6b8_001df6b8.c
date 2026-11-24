// Function: FUN_001df6b8
// Entry: 001df6b8

void FUN_001df6b8(int *param_1,ulong param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong unaff_x19;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x28;
  int local_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  uVar2 = 0x57891d3e2c4beb93;
  if (param_3 != 0) {
    uVar2 = 0x4e8763835ac1d702;
  }
  local_68 = *(long *)(lVar3 + 0x28);
  local_6c = 0;
  uVar7 = param_2;
  uVar4 = 0x4e8763835ac1d702;
  uVar5 = 0x483b6742d550f13b;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar8 = uVar5;
            uVar6 = uVar4;
            uVar10 = uVar6 & 0xffffffff;
            uVar9 = uVar7 & 0xffffffff;
            uVar7 = uVar9;
            uVar4 = uVar10;
            uVar5 = uVar8;
            if (0x33be0a71a54cbf04 < (long)uVar8) break;
            if ((long)uVar8 < -0x5c7e28b4dc6972e1) {
              uVar4 = unaff_x19 & 0xffffffff;
              uVar5 = 0xcc8b8bd1fa28c651;
              if (uVar8 != 0x93fe74e1862e4ed1) {
                if (uVar8 == 0xa074f2b0d9fbb3ea) {
                  uVar1 = (int)unaff_x28 + local_6c + 4;
                  unaff_x19 = (ulong)uVar1;
                  uVar4 = uVar10;
                  uVar5 = 0xa381d74b23968d1f;
                  if (param_3 <= uVar1) {
                    uVar5 = 0x93fe74e1862e4ed1;
                  }
                }
                else {
                  uVar4 = uVar10;
                  uVar5 = uVar8;
                  if (uVar8 == 0xa104986673814c4a) {
                    uVar6 = FUN_001dc360(param_1,&local_6c,4,1,param_4);
                    uVar5 = 0xdfaa19e1b8cfff8b;
                    unaff_x28 = uVar9;
                    if ((uVar6 & 1) == 0) {
                      uVar5 = 0x506a30486f08dd66;
                    }
                  }
                }
              }
            }
            else if ((long)uVar8 < -0x2055e61e47300075) {
              uVar7 = unaff_x19 & 0xffffffff;
              uVar5 = 0xa104986673814c4a;
              if ((uVar8 != 0xa381d74b23968d1f) &&
                 (uVar7 = uVar9, uVar5 = uVar8, uVar8 == 0xcc8b8bd1fa28c651)) {
                uVar5 = 0xea0aadeac25c19b3;
                if ((uint)uVar6 != param_3) {
                  uVar5 = 0x7cbbcdd16a217848;
                }
              }
            }
            else if (uVar8 == 0xdfaa19e1b8cfff8b) {
              FUN_001df0f4(param_1,param_2,local_6c,param_4);
              uVar5 = 0xa074f2b0d9fbb3ea;
              if (*param_1 != 0) {
                uVar5 = 0x33be0a71a54cbf05;
              }
            }
            else if (uVar8 == 0xea0aadeac25c19b3) {
              uVar5 = 0x6f254f274b2d0830;
            }
          }
          if (0x506a30486f08dd65 < (long)uVar8) break;
          uVar5 = 0x6f254f274b2d0830;
          if (((uVar8 != 0x33be0a71a54cbf05) && (uVar5 = uVar2, uVar8 != 0x483b6742d550f13b)) &&
             (uVar5 = uVar8, uVar8 == 0x4e8763835ac1d702)) {
            uVar7 = 0;
            uVar5 = 0xa104986673814c4a;
          }
        }
        if (0x6f254f274b2d082f < (long)uVar8) break;
        uVar5 = 0x6f254f274b2d0830;
        if ((uVar8 != 0x506a30486f08dd66) && (uVar5 = uVar8, uVar8 == 0x57891d3e2c4beb93)) {
          uVar4 = 0;
          uVar5 = 0xcc8b8bd1fa28c651;
        }
      }
      if (uVar8 != 0x7cbbcdd16a217848) break;
      *param_1 = 8;
      uVar5 = 0x6f254f274b2d0830;
    }
  } while (uVar8 != 0x6f254f274b2d0830);
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


