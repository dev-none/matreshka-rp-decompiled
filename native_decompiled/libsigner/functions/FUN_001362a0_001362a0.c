// Function: FUN_001362a0
// Entry: 001362a0

ulong FUN_001362a0(long param_1,long param_2,long param_3,ulong param_4,ulong param_5,
                  undefined8 param_6,undefined8 param_7,uint param_8)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  ulong in_x9;
  long in_x10;
  ulong in_x11;
  ulong uVar9;
  ulong in_x13;
  ulong in_x14;
  long in_x15;
  ulong unaff_x21;
  ulong uVar10;
  ulong unaff_x26;
  long unaff_x29;
  long unaff_x30;
  
  lVar1 = 0x1b8a490d112319a3;
  if (param_4 != 0 && param_2 != 0) {
    lVar1 = -0x6f8267a76982804a;
  }
  lVar4 = param_3;
  uVar6 = param_4;
  lVar2 = 0x473fb818c8d1df7d;
LAB_001363c0:
  do {
    while( true ) {
      uVar8 = param_8;
      uVar9 = in_x11;
      lVar7 = lVar2;
      uVar10 = unaff_x21 & 0xffffffff;
      uVar3 = param_5 & 0xffffffff;
      lVar2 = lVar7;
      param_5 = uVar3;
      in_x11 = uVar9;
      unaff_x21 = uVar10;
      param_8 = uVar8;
      if (-0x14984775714e2887 < lVar7) break;
      uVar5 = (uint)uVar6;
      if (lVar7 < -0x5f3755a72093230f) {
        if (lVar7 == -0x6f8267a76982804a) {
          lVar2 = -0x14984775714e2886;
          in_x11 = 0;
          unaff_x21 = 0;
        }
        else {
          param_5 = in_x13 & 0xffffffff;
          lVar2 = 0x35d1b171ea3a1777;
          if ((lVar7 != -0x660330ca3882061d) &&
             (param_5 = uVar3, lVar2 = lVar7, lVar7 == -0x636a27c657495170)) {
            if (*(long *)(unaff_x30 + 8) == 0x100007f) {
              uVar5 = uVar5 + 1;
            }
            lVar2 = -0x31b66f5a47f19020;
            param_8 = uVar5;
          }
        }
      }
      else {
        lVar2 = -0x31b66f5a47f19020;
        if (lVar7 < -0x25b4a30fc4ce1574) {
          param_8 = uVar5;
          if ((lVar7 != -0x5f3755a72093230f) &&
             (lVar2 = lVar7, param_8 = uVar8, lVar7 == -0x31b66f5a47f19020)) {
            in_x10 = lVar4 + 1;
            lVar2 = 0xad8c4f61c52b1de;
            if (in_x10 != param_2) {
              lVar2 = -0x1dd3e93b47f9c0f2;
            }
            in_x13 = (ulong)uVar8;
          }
        }
        else {
          param_8 = uVar5;
          if ((lVar7 != -0x25b4a30fc4ce1574) &&
             (lVar2 = lVar7, param_8 = uVar8, lVar7 == -0x1dd3e93b47f9c0f2)) {
            in_x14 = in_x13 & 0xffffffff;
            unaff_x29 = in_x10;
LAB_001363ac:
            lVar2 = 0x31823dab86546405;
            param_8 = uVar8;
          }
        }
      }
    }
    if (lVar7 < 0x1b8a490d112319a3) {
      if (lVar7 < -0x3f4736edf946681) {
        if (lVar7 == -0x14984775714e2886) {
          in_x15 = *(long *)(*(long *)(param_3 + uVar9 * 8) + 0x10);
          in_x14 = uVar10;
          unaff_x26 = uVar9;
          unaff_x29 = 0;
          goto LAB_001363ac;
        }
        if (lVar7 == -0x6b20d3dbe64459c) {
          lVar2 = -0x636a27c657495170;
          if (*(long *)(unaff_x30 + 0x28) != 1) {
            lVar2 = -0x25b4a30fc4ce1574;
          }
        }
      }
      else {
        lVar2 = -0x14984775714e2886;
        in_x11 = in_x9;
        unaff_x21 = in_x13 & 0xffffffff;
        if (((lVar7 != -0x3f4736edf946681) &&
            (lVar2 = lVar7, in_x11 = uVar9, unaff_x21 = uVar10, lVar7 == 0xad8c4f61c52b1de)) &&
           (in_x9 = unaff_x26 + 1, lVar2 = -0x660330ca3882061d, in_x9 != param_4)) {
          lVar2 = -0x3f4736edf946681;
        }
      }
      goto LAB_001363c0;
    }
    if (lVar7 < 0x35d1b171ea3a1777) {
      if (lVar7 == 0x1b8a490d112319a3) {
        param_5 = 0;
        lVar2 = 0x35d1b171ea3a1777;
      }
      else if (lVar7 == 0x31823dab86546405) {
        unaff_x30 = *(long *)(param_1 + unaff_x29 * 8);
        uVar6 = in_x14 & 0xffffffff;
        lVar4 = unaff_x29;
        lVar2 = -0x6b20d3dbe64459c;
        if (in_x15 != *(long *)(unaff_x30 + 0x10)) {
          lVar2 = -0x5f3755a72093230f;
        }
      }
    }
    else {
      lVar2 = lVar1;
      if ((lVar7 != 0x473fb818c8d1df7d) && (lVar2 = lVar7, lVar7 == 0x35d1b171ea3a1777)) {
        return uVar3;
      }
    }
  } while( true );
}


