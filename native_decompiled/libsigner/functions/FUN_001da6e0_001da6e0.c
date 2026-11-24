// Function: FUN_001da6e0
// Entry: 001da6e0

int FUN_001da6e0(undefined8 param_1,uint param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  int unaff_w24;
  int iVar9;
  long lVar10;
  
  lVar1 = 0x4a5cd72dc1a18f6;
  if (param_2 <= param_4) {
    lVar1 = 0x408409b1e5ac055;
  }
  uVar7 = (uint)((ulong)param_1 >> 0x20);
  uVar8 = (uint)((ulong)param_3 >> 0x20);
  lVar2 = -0x6ebe183313cbdcac;
  if (uVar8 <= uVar7) {
    lVar2 = 0x862419eaecdf1a5;
  }
  lVar3 = -0x2a853f5056e0125e;
  if (uVar7 <= uVar8) {
    lVar3 = -0x4c59a4c035b3e8e;
  }
  lVar4 = -0x2ba6f13e1a81ae87;
  if ((uint)param_3 <= (uint)param_1) {
    lVar4 = -0x44b8d533c6b4f6b5;
  }
  lVar5 = 0x52d98d60f83cf13e;
  if ((uint)param_1 <= (uint)param_3) {
    lVar5 = -0x58581ec20935847c;
  }
  lVar6 = -0x45bc5d4f2a354f46;
LAB_001da844:
  while (iVar9 = unaff_w24, lVar10 = lVar6, unaff_w24 = iVar9, -0x4c59a4c035b3e8f < lVar10) {
    if (lVar10 < 0x862419eaecdf1a5) {
      lVar6 = lVar2;
      if (((lVar10 != -0x4c59a4c035b3e8e) &&
          (lVar6 = 0x26c60fa523ddda4b, unaff_w24 = -(uint)(param_2 < param_4),
          lVar10 != 0x408409b1e5ac055)) &&
         (lVar6 = lVar10, unaff_w24 = iVar9, lVar10 == 0x4a5cd72dc1a18f6)) {
LAB_001da830:
        lVar6 = 0x26c60fa523ddda4b;
        unaff_w24 = 1;
      }
    }
    else {
      lVar6 = lVar1;
      if (lVar10 != 0x862419eaecdf1a5) {
        if (lVar10 == 0x52d98d60f83cf13e) goto LAB_001da830;
        lVar6 = lVar10;
        if (lVar10 == 0x26c60fa523ddda4b) {
          return iVar9;
        }
      }
    }
  }
  if (lVar10 < -0x44b8d533c6b4f6b5) {
    if (lVar10 != -0x6ebe183313cbdcac) {
      lVar6 = lVar4;
      if ((lVar10 != -0x58581ec20935847c) && (lVar6 = lVar10, lVar10 == -0x45bc5d4f2a354f46)) {
        lVar6 = lVar5;
      }
      goto LAB_001da844;
    }
  }
  else {
    lVar6 = lVar3;
    if (lVar10 == -0x44b8d533c6b4f6b5) goto LAB_001da844;
    if (lVar10 != -0x2ba6f13e1a81ae87) {
      lVar6 = lVar10;
      if (lVar10 == -0x2a853f5056e0125e) goto LAB_001da830;
      goto LAB_001da844;
    }
  }
  lVar6 = 0x26c60fa523ddda4b;
  unaff_w24 = -1;
  goto LAB_001da844;
}


