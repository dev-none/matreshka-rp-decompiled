// Function: FUN_001cac50
// Entry: 001cac50

byte * FUN_001cac50(byte *param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *in_x6;
  byte *in_x7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  byte *in_x12;
  byte *pbVar11;
  long lVar12;
  byte *in_x16;
  byte *pbVar13;
  byte *unaff_x19;
  byte *unaff_x20;
  byte *unaff_x21;
  long unaff_x23;
  long lVar14;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint local_bc;
  byte *local_b8;
  byte *pbStack_b0;
  byte *local_a8;
  byte *local_a0;
  undefined8 local_98;
  long local_90;
  uint local_84;
  long local_78;
  uint local_6c;
  
  uVar16 = 0;
  local_98 = 0;
  local_6c = 0;
  local_84 = 0;
  lVar12 = 0x43d4efcefc88fa10;
  pbVar1 = param_2;
  uVar2 = 0;
  uVar3 = 0;
  uVar4 = 0;
  uVar18 = 0;
LAB_001cad38:
  uVar8 = uVar4;
  uVar17 = uVar3;
  uVar9 = uVar2;
  pbVar15 = pbVar1;
  lVar14 = unaff_x23;
  lVar10 = lVar12;
  pbVar7 = unaff_x20;
  pbVar13 = in_x16;
  pbVar11 = in_x12;
  pbVar6 = param_3;
  param_3 = pbVar6;
  in_x12 = pbVar11;
  in_x16 = pbVar13;
  unaff_x20 = pbVar7;
  lVar12 = lVar10;
  unaff_x23 = lVar14;
  pbVar1 = pbVar15;
  uVar2 = uVar9;
  uVar3 = uVar17;
  uVar4 = uVar8;
  if (lVar10 < -0x4c59a4c035b3e8e) {
    if (-0x3ed04c030289d597 < lVar10) {
      if (lVar10 < -0x2a853f5056e0125e) {
        if (lVar10 < -0x2faca5236d73e441) {
          lVar12 = -0x33b6ee172f5f7c77;
          pbVar1 = unaff_x19;
          if ((lVar10 != -0x3ed04c030289d596) &&
             (lVar12 = lVar10, pbVar1 = pbVar15, lVar10 == -0x33b6ee172f5f7c77)) {
            unaff_x19 = pbVar15 + 1;
            bVar5 = *pbVar15 == 0;
            lVar10 = -0x3ed04c030289d596;
            lVar12 = -0x11cdc96087771421;
            local_a8 = pbVar15;
            goto LAB_001cad2c;
          }
        }
        else {
          lVar12 = -0x6ebe183313cbdcac;
          if ((lVar10 != -0x2ba6f13e1a81ae87) && (lVar12 = lVar10, lVar10 == -0x2faca5236d73e441)) {
            return pbVar6;
          }
        }
      }
      else {
        lVar12 = 0x408409b1e5ac055;
        uVar3 = uVar16;
        uVar4 = uVar18;
        if (lVar10 != -0x2a853f5056e0125e) {
          if (lVar10 == -0x11cdc96087771421) {
            local_78 = (long)local_a8 - (long)param_2;
            lVar12 = -0xab4161c6ac76ac9;
            bVar5 = *param_1 == 0;
            lVar10 = 0x6de583d82abca3c2;
            local_98 = (ulong)CONCAT14(*param_1,(uint)local_98);
            goto LAB_001cad2c;
          }
          lVar12 = lVar10;
          uVar3 = uVar17;
          uVar4 = uVar8;
          if (lVar10 == -0xab4161c6ac76ac9) {
LAB_001cb1d4:
            pbVar7 = (byte *)0x0;
LAB_001cb2b4:
            param_3 = pbVar7;
            in_x12 = pbVar11;
            in_x16 = pbVar13;
            lVar12 = -0x2faca5236d73e441;
            unaff_x23 = lVar14;
            uVar2 = uVar9;
            uVar3 = uVar17;
            uVar4 = uVar8;
          }
        }
      }
      goto LAB_001cad38;
    }
    if (lVar10 < -0x58581ec20935847c) {
      if (lVar10 == -0x6ebe183313cbdcac) {
        in_x7 = local_b8 + 1;
        unaff_x21 = pbStack_b0 + 1;
        local_84 = (uint)*in_x7;
        bVar5 = local_84 == 0;
        lVar10 = 0x862419eaecdf1a5;
        lVar12 = 0x4a5cd72dc1a18f6;
LAB_001cad2c:
        pbVar1 = pbVar15;
        uVar3 = uVar17;
        uVar4 = uVar8;
        if (!bVar5) {
          lVar12 = lVar10;
        }
      }
      else {
        param_3 = param_1;
        lVar12 = -0x2faca5236d73e441;
        if ((lVar10 != -0x63d6c57ea08e5e11) &&
           (param_3 = pbVar6, lVar12 = lVar10, lVar10 == -0x615740d48b1b4bc7)) goto LAB_001cb1d4;
      }
      goto LAB_001cad38;
    }
    if (lVar10 == -0x58581ec20935847c) {
      lVar10 = -0x44b8d533c6b4f6b5;
      lVar12 = -0x2ba6f13e1a81ae87;
      bVar5 = uVar18 == uVar16;
    }
    else {
      if (lVar10 == -0x45bc5d4f2a354f46) {
        local_90 = lVar14 + -1;
        uVar16 = (uint)*pbVar11;
        lVar12 = -0x58581ec20935847c;
        uVar18 = uVar9;
        local_bc = uVar9;
        local_b8 = pbVar13;
        pbStack_b0 = pbVar11;
        if (local_90 == 0 || uVar16 == 0) {
          lVar12 = 0x52d98d60f83cf13e;
        }
        goto LAB_001cad38;
      }
      if (lVar10 != -0x44b8d533c6b4f6b5) goto LAB_001cad38;
      uVar8 = local_bc;
      if (0xffffffe5 < local_bc - 0x5b) {
        uVar8 = local_bc | 0x20;
      }
      uVar17 = uVar16;
      if (0xffffffe5 < uVar16 - 0x5b) {
        uVar17 = uVar16 | 0x20;
      }
      bVar5 = uVar8 == uVar17;
      lVar10 = -0x2a853f5056e0125e;
      lVar12 = -0x4c59a4c035b3e8e;
    }
LAB_001cb5dc:
    if (!bVar5) {
      lVar12 = lVar10;
    }
    goto LAB_001cad38;
  }
  if (lVar10 < 0x43d4efcefc88fa10) {
    if (0x4a5cd72dc1a18f5 < lVar10) {
      if (lVar10 == 0x4a5cd72dc1a18f6) {
        uVar8 = (uint)*unaff_x21;
        uVar17 = 0;
LAB_001cb590:
        in_x12 = pbVar11;
        in_x16 = pbVar13;
        unaff_x20 = pbVar7;
        lVar12 = 0x408409b1e5ac055;
        unaff_x23 = lVar14;
        uVar2 = uVar9;
        uVar3 = uVar8;
        uVar4 = uVar17;
      }
      else {
        in_x12 = unaff_x21;
        in_x16 = in_x7;
        lVar12 = -0x45bc5d4f2a354f46;
        unaff_x23 = local_90;
        uVar2 = local_84;
        if ((lVar10 != 0x862419eaecdf1a5) &&
           (in_x12 = pbVar11, in_x16 = pbVar13, lVar12 = lVar10, unaff_x23 = lVar14, uVar2 = uVar9,
           lVar10 == 0x26c60fa523ddda4b)) goto LAB_001cb2b4;
      }
      goto LAB_001cad38;
    }
    lVar12 = -0x6ebe183313cbdcac;
    if (lVar10 == -0x4c59a4c035b3e8e) goto LAB_001cad38;
    if (lVar10 == 0x408409b1e5ac055) {
      if (0xffffffe5 < uVar8 - 0x5b) {
        uVar8 = uVar8 | 0x20;
      }
      if (0xffffffe5 < uVar17 - 0x5b) {
        uVar17 = uVar17 | 0x20;
      }
      bVar5 = uVar8 == uVar17;
      lVar10 = 0x6dbb77d6245fbf6c;
      lVar12 = 0x26c60fa523ddda4b;
      goto LAB_001cb5dc;
    }
    pbVar7 = local_a0;
    lVar12 = lVar10;
    uVar8 = (uint)local_98;
    if (lVar10 != 0x4357c11efd169a0) goto LAB_001cad38;
  }
  else {
    if (lVar10 < 0x6dbb77d6245fbf6c) {
      lVar12 = -0x33b6ee172f5f7c77;
      if (((lVar10 != 0x43d4efcefc88fa10) &&
          (in_x12 = param_2, in_x16 = in_x6, unaff_x20 = in_x6, lVar12 = -0x45bc5d4f2a354f46,
          unaff_x23 = local_78, uVar2 = local_6c, lVar10 != 0x4bfd6150022cba99)) &&
         (in_x12 = pbVar11, in_x16 = pbVar13, unaff_x20 = pbVar7, lVar12 = lVar10,
         unaff_x23 = lVar14, uVar2 = uVar9, uVar8 = uVar16, uVar17 = uVar18,
         lVar10 == 0x52d98d60f83cf13e)) goto LAB_001cb590;
      goto LAB_001cad38;
    }
    if (lVar10 == 0x6dbb77d6245fbf6c) {
      local_a0 = pbVar7 + 1;
      local_98 = CONCAT44(local_98._4_4_,(uint)*local_a0);
      lVar12 = -0x615740d48b1b4bc7;
      if (*local_a0 != 0) {
        lVar12 = 0x4357c11efd169a0;
      }
      goto LAB_001cad38;
    }
    if (lVar10 == 0x6de583d82abca3c2) {
      lVar12 = -0x63d6c57ea08e5e11;
      if (local_78 != 0) {
        lVar12 = 0x76eec756bc9b1bd1;
      }
      goto LAB_001cad38;
    }
    pbVar7 = param_1;
    uVar8 = local_98._4_4_;
    if (lVar10 != 0x76eec756bc9b1bd1) goto LAB_001cad38;
  }
  in_x6 = pbVar7;
  lVar12 = 0x4bfd6150022cba99;
  local_6c = uVar8;
  goto LAB_001cad38;
}


