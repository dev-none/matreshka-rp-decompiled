// Function: FUN_001827a0
// Entry: 001827a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001827a0(undefined4 *param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long unaff_x24;
  
  lVar3 = 0x182797b00068551d;
LAB_00182860:
  do {
    while( true ) {
      while (lVar2 = lVar3, lVar3 = lVar2, 0x182797b00068551c < lVar2) {
        if (lVar2 < 0x4d1245d0094e62fc) {
          lVar3 = 0x18c241c6935f96b8;
          if (lVar2 != 0x182797b00068551d) {
            if (lVar2 == 0x18c241c6935f96b8) {
              iVar1 = FUN_001ebe70(0,1,&DAT_001f815c);
              lVar3 = 0x2a50a3961bd26a35;
              if (iVar1 != 0) {
                lVar3 = -0x3789cce97330a252;
              }
            }
            else {
              lVar3 = lVar2;
              if (lVar2 == 0x2a50a3961bd26a35) {
                lVar3 = 0x6de3984a98505cc9;
                if (DAT_001f815c._1_1_ == '\0') {
                  lVar3 = -0x39779dfb7287cb38;
                }
              }
            }
          }
        }
        else if (lVar2 < 0x6de3984a98505cc9) {
          if (lVar2 == 0x4d1245d0094e62fc) {
            (**(code **)(*param_2 + 0x70))(param_2,unaff_x24,param_3);
            lVar3 = 0x795c9bcf9ab5127f;
          }
          else if (lVar2 == 0x52bc34c12223fb21) {
            lVar3 = -0x4439eb1867282607;
          }
        }
        else {
          lVar3 = -0x1816deaa65a32375;
          if ((lVar2 != 0x6de3984a98505cc9) && (lVar3 = lVar2, lVar2 == 0x795c9bcf9ab5127f)) {
            (**(code **)(*param_2 + 0xb8))(param_2,unaff_x24);
            lVar3 = -0x4439eb1867282607;
          }
        }
      }
      if (lVar2 < -0x3789cce97330a252) break;
      if (lVar2 < -0x1bfea367b8b3d61f) {
        lVar3 = 0x18c241c6935f96b8;
        if ((lVar2 != -0x3789cce97330a252) && (lVar3 = lVar2, lVar2 == -0x1c38d41b7d907de6)) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          lVar3 = 0x52bc34c12223fb21;
          if (unaff_x24 != 0) {
            lVar3 = -0x67f7b361812184cb;
          }
LAB_00182858:
          *param_1 = 0xf;
        }
      }
      else if (lVar2 == -0x1bfea367b8b3d61f) {
        lVar3 = -0x772f048d139935ea;
        if (unaff_x24 != 0) {
          lVar3 = 0x4d1245d0094e62fc;
        }
      }
      else if (lVar2 == -0x1816deaa65a32375) {
        DAT_001f815c = 0;
        unaff_x24 = (**(code **)(*param_2 + 0x30))(param_2,&DAT_001f6dd0);
        lVar2 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar3 = -0x1bfea367b8b3d61f;
        if (lVar2 != 0) {
          lVar3 = -0x1c38d41b7d907de6;
        }
      }
    }
    if (-0x4439eb1867282608 < lVar2) {
      if (lVar2 == -0x39779dfb7287cb38) {
        DAT_001f6de0 = DAT_001f6de0 ^ 8;
        DAT_001f6de1 = DAT_001f6de1 ^ 8;
        DAT_001f6de2 = DAT_001f6de2 ^ 8;
        DAT_001f6de3 = DAT_001f6de3 ^ 8;
        _DAT_001f6dd0 = _DAT_001f6dd0 ^ 0x808080808080808;
        uRam00000000001f6dd8 = uRam00000000001f6dd8 ^ 0x808080808080808;
        DAT_001f815c._0_2_ = CONCAT11(1,(undefined1)DAT_001f815c);
        lVar3 = -0x1816deaa65a32375;
      }
      else if (lVar2 == -0x4439eb1867282607) {
        return;
      }
      goto LAB_00182860;
    }
    if (lVar2 == -0x772f048d139935ea) {
      lVar3 = -0x4439eb1867282607;
      goto LAB_00182858;
    }
    if (lVar2 == -0x67f7b361812184cb) {
      lVar3 = 0x795c9bcf9ab5127f;
    }
  } while( true );
}


