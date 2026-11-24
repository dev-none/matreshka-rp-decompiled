// Function: FUN_001dcfa0
// Entry: 001dcfa0

void FUN_001dcfa0(int *param_1,ulong param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x20;
  ulong uVar10;
  ulong unaff_x27;
  int local_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  uVar2 = 0x6de583d82abca3c2;
  if (param_3 != 0) {
    uVar2 = 0xf54be9e395389537;
  }
  local_68 = *(long *)(lVar3 + 0x28);
  local_6c = 0;
  uVar5 = param_2;
  uVar7 = 0xf54be9e395389537;
  uVar8 = 0xee32369f7888ebdf;
LAB_001dd074:
  do {
    while( true ) {
      uVar6 = uVar8;
      uVar9 = uVar7 & 0xffffffff;
      uVar10 = uVar5 & 0xffffffff;
      uVar5 = uVar10;
      uVar8 = uVar6;
      if ((long)uVar6 < -0x11cdc96087771421) break;
      if ((long)uVar6 < 0x4bfd6150022cba99) {
        uVar7 = uVar9;
        uVar8 = uVar2;
        if (uVar6 != 0xee32369f7888ebdf) {
          if (uVar6 == 0xf54be9e395389537) {
            uVar5 = 0;
            uVar8 = 0x76eec756bc9b1bd1;
          }
          else {
            uVar8 = uVar6;
            if (uVar6 == 0xfb3a65b3fca4c172) {
              *param_1 = 8;
              uVar8 = 0x9141e7ccec342354;
            }
          }
        }
      }
      else if ((long)uVar6 < 0x6de583d82abca3c2) {
        if (uVar6 == 0x4bfd6150022cba99) {
          FUN_001dca14(param_1,param_2,local_6c,param_4);
          bVar4 = *param_1 == 0;
          uVar8 = 0x52d98d60f83cf13e;
          uVar6 = 0xba43a2b0d5cab0ba;
LAB_001dd3dc:
          uVar7 = uVar9;
          if (!bVar4) {
            uVar8 = uVar6;
          }
        }
        else {
          uVar7 = uVar9;
          if (uVar6 == 0x52d98d60f83cf13e) {
            uVar1 = (int)unaff_x20 + local_6c + 4;
            unaff_x27 = (ulong)uVar1;
            uVar8 = 0xd4590ec1e57e5179;
            if (param_3 <= uVar1) {
              uVar8 = 0xa7a7e13df6ca7b84;
            }
          }
        }
      }
      else if (uVar6 == 0x6de583d82abca3c2) {
        uVar7 = 0;
        uVar8 = 0xbb472acc394b094b;
      }
      else {
        uVar7 = uVar9;
        if (uVar6 == 0x76eec756bc9b1bd1) {
          uVar6 = FUN_001dc360(param_1,&local_6c,4,1,param_4);
          uVar8 = 0x4bfd6150022cba99;
          unaff_x20 = uVar10;
          if ((uVar6 & 1) == 0) {
            uVar8 = 0x9c293a815f71a1ef;
          }
        }
      }
    }
    if (-0x44b8d533c6b4f6b6 < (long)uVar6) {
      if (uVar6 == 0xbb472acc394b094b) {
        bVar4 = (uint)uVar7 == param_3;
        uVar8 = 0xd57ac0afa91feda2;
        uVar6 = 0xfb3a65b3fca4c172;
        goto LAB_001dd3dc;
      }
      uVar5 = unaff_x27 & 0xffffffff;
      uVar7 = uVar9;
      uVar8 = 0x76eec756bc9b1bd1;
      if ((uVar6 != 0xd4590ec1e57e5179) &&
         (uVar5 = uVar10, uVar8 = uVar6, uVar6 == 0xd57ac0afa91feda2)) {
LAB_001dd1f4:
        uVar5 = uVar10;
        uVar7 = uVar9;
        uVar8 = 0x9141e7ccec342354;
      }
      goto LAB_001dd074;
    }
    if ((long)uVar6 < -0x58581ec20935847c) {
      uVar7 = uVar9;
      uVar8 = 0x9141e7ccec342354;
      if ((uVar6 != 0x9c293a815f71a1ef) && (uVar8 = uVar6, uVar6 == 0x9141e7ccec342354)) {
        if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
    else {
      uVar7 = unaff_x27 & 0xffffffff;
      uVar8 = 0xbb472acc394b094b;
      if ((uVar6 != 0xa7a7e13df6ca7b84) &&
         (uVar7 = uVar9, uVar8 = uVar6, uVar6 == 0xba43a2b0d5cab0ba)) goto LAB_001dd1f4;
    }
  } while( true );
}


