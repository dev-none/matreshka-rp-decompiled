// Function: FUN_0016e150
// Entry: 0016e150

void FUN_0016e150(int *param_1,long *param_2,long param_3,long *param_4,undefined4 *param_5)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  int unaff_w26;
  
  lVar1 = -0x1736fceebecd72f8;
  if (param_3 != 0) {
    lVar1 = 0x4d702a7aef09f0b4;
  }
  lVar4 = 0x6ea6282306ea075c;
  do {
    while( true ) {
      while (lVar3 = lVar4, lVar4 = lVar3, 0x43f7eb53c5724cdf < lVar3) {
        if (lVar3 < 0x5a82b43288d2c981) {
          if (lVar3 < 0x4d702a7aef09f0b4) {
            if (lVar3 == 0x43f7eb53c5724ce0) {
              *param_5 = 0;
              *param_4 = 0;
              lVar4 = 0x5e990c37db09f86a;
            }
            else if (lVar3 == 0x4517d092a6c8637b) {
              lVar4 = (**(code **)(*param_2 + 0x5c0))(param_2,param_3,0);
              *param_4 = lVar4;
              lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
              lVar4 = -0x3f06feab6e15bed5;
              if (lVar3 != 0) {
                lVar4 = -0x415d5952821d8fc8;
              }
            }
          }
          else if (lVar3 == 0x4d702a7aef09f0b4) {
            uVar2 = (**(code **)(*param_2 + 0x558))(param_2,param_3);
            lVar4 = *param_2;
            *param_5 = uVar2;
            lVar3 = (**(code **)(lVar4 + 0x78))(param_2);
            lVar4 = 0x5375277af4011243;
            if (lVar3 != 0) {
              lVar4 = 0x25e60e8a57340c35;
            }
          }
          else if (lVar3 == 0x5375277af4011243) {
            lVar4 = 0x57f8c36627f7246e;
            if (*param_1 != 0) {
              lVar4 = 0x1c201a6f44d38273;
            }
          }
          else if (lVar3 == 0x57f8c36627f7246e) {
            lVar4 = 0x4517d092a6c8637b;
          }
        }
        else if (lVar3 < 0x6ea6282306ea075c) {
          if (lVar3 == 0x5a82b43288d2c981) {
            *param_5 = 0;
            lVar4 = 0x1029ba407f8d7b2d;
            if (*param_1 != 0) {
              lVar4 = -0x434983ca2ec7188a;
            }
          }
          else if (lVar3 == 0x6853f5fa40398e94) {
            *param_1 = unaff_w26;
            lVar4 = 0x43f7eb53c5724ce0;
          }
          else if (lVar3 == 0x5e990c37db09f86a) {
            return;
          }
        }
        else {
          if (lVar3 == 0x754d2b88abe28d02) goto LAB_0016e230;
          if (lVar3 == 0x6ea6282306ea075c) {
            lVar4 = lVar1;
          }
        }
      }
      if (0x6df6ddc7d68c3f < lVar3) break;
      if (lVar3 < -0x415d5952821d8fc8) {
        lVar4 = 0x43f7eb53c5724ce0;
        if ((lVar3 != -0x6e211a48bc109fd4) && (lVar4 = lVar3, lVar3 == -0x434983ca2ec7188a)) {
          lVar4 = 0x43f7eb53c5724ce0;
        }
      }
      else if (lVar3 == -0x415d5952821d8fc8) {
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
LAB_0016e230:
        unaff_w26 = 0x19;
        lVar4 = 0x6853f5fa40398e94;
      }
      else if (lVar3 == -0x3f06feab6e15bed5) {
        lVar4 = 0x754d2b88abe28d02;
        if (*param_4 != 0) {
          lVar4 = 0x6df6ddc7d68c40;
        }
      }
      else if (lVar3 == -0x1736fceebecd72f8) {
        unaff_w26 = 3;
        lVar4 = 0x6853f5fa40398e94;
      }
    }
    if (lVar3 < 0x1c201a6f44d38273) {
      if (lVar3 == 0x6df6ddc7d68c40) {
        lVar4 = 0x41be9e0e5eb1efe4;
        if (*param_1 != 0) {
          lVar4 = -0x6e211a48bc109fd4;
        }
      }
      else if (lVar3 == 0x1029ba407f8d7b2d) {
        lVar4 = 0x4517d092a6c8637b;
      }
    }
    else {
      lVar4 = 0x5a82b43288d2c981;
      if (lVar3 != 0x1c201a6f44d38273) {
        if (lVar3 == 0x25e60e8a57340c35) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          *param_1 = 0x19;
          lVar4 = 0x5a82b43288d2c981;
        }
        else {
          lVar4 = lVar3;
          if (lVar3 == 0x41be9e0e5eb1efe4) {
            lVar4 = 0x5e990c37db09f86a;
          }
        }
      }
    }
  } while( true );
}


