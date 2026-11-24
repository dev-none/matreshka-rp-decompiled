// Function: FUN_001cb714
// Entry: 001cb714

int FUN_001cb714(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *unaff_x19;
  byte *unaff_x20;
  byte *unaff_x21;
  byte *unaff_x22;
  long lVar9;
  
  bVar4 = *param_1;
  uVar6 = 0;
  uVar7 = 0;
  lVar3 = -0x57ad4b5dd267bac2;
  if ((uint)bVar4 == (uint)*param_2 && bVar4 != 0) {
    lVar3 = -0x1f72c151724b0727;
  }
  lVar9 = -0x435e690cfbf5da12;
  uVar8 = 0;
  uVar5 = 0;
LAB_001cb7e8:
  do {
    pbVar1 = unaff_x19 + 1;
    pbVar2 = unaff_x20 + 1;
    do {
      while( true ) {
        while (lVar9 < -0x1f72c151724b0727) {
          if (lVar9 == -0x5987c0f4f076dc6d) {
            uVar6 = (uint)*pbVar1;
            uVar7 = (uint)*pbVar2;
            unaff_x21 = pbVar2;
            unaff_x22 = pbVar1;
            lVar9 = -0x9c369a095011baa;
            if (uVar6 == uVar7 && uVar6 != 0) {
              lVar9 = 0x75ce15e08caa4c6a;
            }
          }
          else {
            if (lVar9 == -0x57ad4b5dd267bac2) {
              uVar5 = (uint)bVar4;
              lVar9 = 0x7f24efb1c885eb9b;
              uVar8 = (uint)*param_2;
              goto LAB_001cb7e8;
            }
            if (lVar9 == -0x435e690cfbf5da12) {
              lVar9 = lVar3;
            }
          }
        }
        if (lVar9 < 0x75ce15e08caa4c6a) break;
        if (lVar9 == 0x75ce15e08caa4c6a) {
          lVar9 = -0x5987c0f4f076dc6d;
          unaff_x19 = unaff_x22;
          unaff_x20 = unaff_x21;
          goto LAB_001cb7e8;
        }
        if (lVar9 == 0x7f24efb1c885eb9b) {
          return uVar5 - uVar8;
        }
      }
      if (lVar9 == -0x1f72c151724b0727) {
        lVar9 = -0x5987c0f4f076dc6d;
        unaff_x19 = param_1;
        unaff_x20 = param_2;
        goto LAB_001cb7e8;
      }
    } while (lVar9 != -0x9c369a095011baa);
    lVar9 = 0x7f24efb1c885eb9b;
    uVar8 = uVar7;
    uVar5 = uVar6;
  } while( true );
}


