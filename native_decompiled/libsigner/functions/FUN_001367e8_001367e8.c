// Function: FUN_001367e8
// Entry: 001367e8

ulong FUN_001367e8(long param_1,ulong param_2,ulong param_3,long param_4,ulong param_5,
                  undefined8 param_6,undefined8 param_7,ulong param_8)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong in_x11;
  ulong in_x12;
  long lVar10;
  long in_x13;
  ulong in_x14;
  uint in_w15;
  ulong unaff_x19;
  ulong unaff_x20;
  long lVar11;
  uint uVar12;
  ulong unaff_x22;
  long unaff_x25;
  ulong uVar13;
  
  lVar7 = 0x14212817370b07ad;
  lVar1 = lVar7;
  if (param_4 != 0 && param_2 != 0) {
    lVar1 = -0x40959171c0afaa9;
  }
  lVar2 = param_1;
  uVar4 = param_2;
  uVar5 = param_3;
  lVar6 = param_4;
  lVar10 = -0x25b49ea36c8e566d;
LAB_00136934:
  do {
    while( true ) {
      lVar11 = lVar10;
      lVar9 = lVar2;
      uVar13 = in_x12 & 0xffffffff;
      uVar8 = unaff_x20 & 0xffffffff;
      lVar2 = lVar9;
      in_x12 = uVar13;
      unaff_x20 = uVar8;
      lVar10 = lVar11;
      if (-0x40959171c0afaaa < lVar11) break;
      if (lVar11 < -0x31a5c421f231c23b) {
        if (lVar11 < -0x443e4c548dd9a44b) {
          if (lVar11 == -0x741b80fddc321462) {
            in_w15 = *(uint *)(lVar7 + 8);
            uVar5 = (ulong)*(uint *)(lVar7 + 0x18);
            lVar9 = 0x67eecfa2931a5a5;
            bVar3 = ((*(uint *)(lVar7 + 0x18) ^ in_w15) & 0xffffff) == 0;
            lVar10 = -0x31a5c421f231c23b;
LAB_00136cc4:
            if (!bVar3) {
              lVar10 = lVar9;
            }
          }
          else if (lVar11 == -0x4a0d4201cc8dd2e5) {
            unaff_x19 = uVar4 & 0xffffffff;
            in_x11 = in_x14;
LAB_00136920:
            lVar10 = 0x7560a8fbfc56dd1a;
          }
        }
        else if (lVar11 == -0x443e4c548dd9a44b) {
          in_x14 = param_8 + 1;
          uVar4 = uVar8;
          lVar10 = 0x3e14c851d8ba269b;
          if (in_x14 != param_2) {
            lVar10 = -0x4a0d4201cc8dd2e5;
          }
        }
        else if (lVar11 == -0x43725cb0d7bc5046) goto LAB_00136b24;
      }
      else if (lVar11 < -0x2191cba062c57a27) {
        if (lVar11 == -0x31a5c421f231c23b) {
          uVar12 = (uint)unaff_x22;
          if (in_w15 >> 0x18 != 1 && ((uint)(uVar5 >> 0x18) & 0xff) == 1) {
            uVar12 = uVar12 + 1;
          }
          unaff_x20 = (ulong)uVar12;
LAB_00136cec:
          lVar10 = -0x443e4c548dd9a44b;
        }
        else if (lVar11 == -0x25b49ea36c8e566d) {
          lVar10 = lVar1;
        }
      }
      else {
        lVar2 = unaff_x25;
        in_x12 = uVar4 & 0xffffffff;
        lVar10 = 0x386dd620ab979a6c;
        if ((lVar11 != -0x2191cba062c57a27) &&
           (lVar2 = lVar9, in_x12 = uVar13, lVar10 = lVar11, lVar11 == -0x1eb48fc64ef5ed97)) {
          param_5 = uVar4 & 0xffffffff;
LAB_00136c20:
          lVar2 = lVar9;
          in_x12 = uVar13;
          lVar10 = 0x260376da72b43ad9;
        }
      }
    }
    if (0x3e14c851d8ba269a < lVar11) {
      if (lVar11 < 0x76cd1562fbf17bda) {
        if (lVar11 == 0x3e14c851d8ba269b) {
          unaff_x25 = in_x13 + 1;
          bVar3 = unaff_x25 == param_4;
          lVar9 = -0x2191cba062c57a27;
          lVar10 = -0x1eb48fc64ef5ed97;
          goto LAB_00136cc4;
        }
        if (lVar11 == 0x7560a8fbfc56dd1a) {
          lVar7 = *(long *)(param_1 + in_x11 * 8);
          unaff_x22 = unaff_x19 & 0xffffffff;
          param_8 = in_x11;
          lVar10 = 0x796dcbca6234ad77;
          if (lVar6 != *(long *)(lVar7 + 0x10)) {
            lVar10 = 0x76cd1562fbf17bda;
          }
        }
      }
      else {
        unaff_x20 = unaff_x22 & 0xffffffff;
        lVar10 = -0x443e4c548dd9a44b;
        if ((lVar11 != 0x76cd1562fbf17bda) &&
           (unaff_x20 = uVar8, lVar10 = lVar11, lVar11 == 0x796dcbca6234ad77)) {
          lVar10 = -0x741b80fddc321462;
          if (*(long *)(lVar7 + 0x28) != 1) {
            lVar10 = -0x43725cb0d7bc5046;
          }
        }
      }
      goto LAB_00136934;
    }
    if (lVar11 < 0x14212817370b07ad) {
      if (lVar11 == -0x40959171c0afaa9) {
        lVar2 = 0;
        in_x12 = 0;
        lVar10 = 0x386dd620ab979a6c;
      }
      else if (lVar11 == 0x67eecfa2931a5a5) {
LAB_00136b24:
        unaff_x20 = unaff_x22 & 0xffffffff;
        goto LAB_00136cec;
      }
    }
    else {
      if (lVar11 == 0x14212817370b07ad) {
        param_5 = 0;
        goto LAB_00136c20;
      }
      if (lVar11 == 0x386dd620ab979a6c) {
        lVar6 = *(long *)(*(long *)(param_3 + lVar9 * 8) + 0x10);
        in_x11 = 0;
        in_x13 = lVar9;
        unaff_x19 = uVar13;
        goto LAB_00136920;
      }
      if (lVar11 == 0x260376da72b43ad9) {
        return param_5 & 0xffffffff;
      }
    }
  } while( true );
}


