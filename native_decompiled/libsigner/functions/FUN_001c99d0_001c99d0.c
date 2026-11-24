// Function: FUN_001c99d0
// Entry: 001c99d0

int FUN_001c99d0(byte *param_1,int param_2,byte *param_3)

{
  undefined1 *puVar1;
  bool bVar2;
  byte *pbVar3;
  uint in_w6;
  uint uVar4;
  int in_w7;
  undefined1 *puVar5;
  undefined1 *puVar6;
  uint uVar7;
  byte *in_x13;
  byte *in_x16;
  int unaff_w19;
  int iVar8;
  uint uVar9;
  int unaff_w23;
  int iVar10;
  uint unaff_w26;
  byte *unaff_x27;
  byte *pbVar11;
  byte *unaff_x28;
  byte *unaff_x29;
  byte *pbVar12;
  int local_74;
  byte *local_70;
  int local_68;
  int local_64;
  
  puVar1 = (undefined1 *)0x12b21488b9618371;
  if (param_1 != (byte *)0x0) {
    puVar1 = &DAT_6b9fb694821e6034;
  }
  uVar7 = 0;
  uVar9 = 0;
  pbVar3 = param_1;
  puVar6 = (undefined1 *)0x3f365012db6b56c1;
LAB_001c9ae0:
  while (iVar10 = unaff_w23, iVar8 = unaff_w19, uVar4 = in_w6, pbVar12 = unaff_x29,
        pbVar11 = unaff_x27, puVar5 = puVar6, puVar6 = puVar5, unaff_x27 = pbVar11,
        unaff_x29 = pbVar12, in_w6 = uVar4, unaff_w19 = iVar8, unaff_w23 = iVar10,
        (long)puVar5 < -0x1adb7dcf41534880) {
    if ((long)puVar5 < -0x34ad741032f04ad1) {
      if ((long)puVar5 < -0x6cd9a9100255155b) {
        if (puVar5 == (undefined1 *)0x8b1dacf6763fda11) {
          puVar6 = (undefined1 *)0x8b5d2aa4730e6d53;
          unaff_w19 = 0;
        }
        else if (puVar5 == (undefined1 *)0x8b5d2aa4730e6d53) {
          local_68 = -iVar8;
          if (local_74 != 0) {
            local_68 = iVar8;
          }
          goto LAB_001c9f68;
        }
      }
      else {
        puVar6 = (undefined1 *)0xdbbbecaa54122c5b;
        unaff_x29 = param_3;
        in_w6 = unaff_w26;
        unaff_w23 = in_w7;
        if (puVar5 != (undefined1 *)0x932656effdaaeaa5) {
          if (puVar5 == (undefined1 *)0xa0d7c67c60e7a82e) goto LAB_001c9f88;
          puVar6 = puVar5;
          unaff_x29 = pbVar12;
          in_w6 = uVar4;
          unaff_w23 = iVar10;
          if (puVar5 == (undefined1 *)0xc0eb019135e10a40) {
            puVar6 = (undefined1 *)0xdbbbecaa54122c5b;
            unaff_x29 = local_70;
            in_w6 = (uint)pbVar3;
            unaff_w23 = 0;
          }
        }
      }
    }
    else if ((long)puVar5 < -0x24441355abedd3a5) {
      puVar6 = (undefined1 *)0x3a4ee4b4cd18045;
      unaff_x27 = in_x16;
      if (puVar5 != (undefined1 *)0xcb528befcd0fb52f) {
        if (puVar5 == (undefined1 *)0xd937f9741a083d9f) {
          local_64 = 1;
          goto LAB_001c9ed0;
        }
        puVar6 = puVar5;
        unaff_x27 = pbVar11;
        if (puVar5 == (undefined1 *)0xd136b47bc732bd2b) {
          return local_68;
        }
      }
    }
    else if (puVar5 == (undefined1 *)0xdbbbecaa54122c5b) {
      param_3 = pbVar12 + 1;
      unaff_w26 = *param_3 - 0x30;
      in_w7 = iVar10 * 10 - uVar4;
      puVar6 = &DAT_1b767e91f4196530;
      if (unaff_w26 < 10) {
        puVar6 = (undefined1 *)0x932656effdaaeaa5;
      }
    }
    else if (puVar5 == (undefined1 *)0xde0600f0ca761eb9) {
      puVar6 = (undefined1 *)0x2467c250713f82d4;
      if (',' < (char)uVar7) {
        puVar6 = (undefined1 *)0xe156d0b4a667ab8e;
      }
    }
    else if (puVar5 == (undefined1 *)0xe156d0b4a667ab8e) {
      puVar5 = (undefined1 *)0xa0d7c67c60e7a82e;
      puVar6 = (undefined1 *)0xd937f9741a083d9f;
      bVar2 = uVar7 == 0x2d;
      goto LAB_001c9ad0;
    }
  }
  if ((long)puVar5 < 0x1b767e91f4196530) {
    if (0x2b590051c346d3d < (long)puVar5) {
      if (puVar5 == &DAT_2b590051c346d3e) {
        pbVar3 = (byte *)(ulong)(uVar9 - 0x30);
        puVar6 = (undefined1 *)0x8b1dacf6763fda11;
        local_74 = param_2;
        local_70 = unaff_x28;
        if (uVar9 - 0x30 < 10) {
          puVar6 = (undefined1 *)0xc0eb019135e10a40;
        }
      }
      else if (puVar5 == (undefined1 *)0x3a4ee4b4cd18045) {
        in_x16 = pbVar11 + 1;
        uVar7 = (uint)*pbVar11;
        puVar6 = (undefined1 *)0x5e1b922e6e5165fd;
        in_x13 = pbVar11;
        if (0xfffffffa < uVar7 - 0xe || uVar7 == 0x20) {
          puVar6 = (undefined1 *)0xcb528befcd0fb52f;
        }
      }
      else if (puVar5 == (undefined1 *)0x12b21488b9618371) {
        local_68 = 0;
LAB_001c9f68:
        puVar6 = (undefined1 *)0xd136b47bc732bd2b;
      }
      goto LAB_001c9ae0;
    }
    if (puVar5 != (undefined1 *)0xe5248230beacb780) {
      if (puVar5 == (undefined1 *)0xf8b8c954db367ca1) {
        local_64 = 0;
LAB_001c9ed0:
        puVar6 = (undefined1 *)0x4c1b9edb721e7222;
        unaff_x27 = pbVar11;
      }
      goto LAB_001c9ae0;
    }
LAB_001c9f88:
    param_2 = 0;
    unaff_x28 = in_x13;
    uVar9 = uVar7;
  }
  else {
    if ((long)puVar5 < 0x4c1b9edb721e7222) {
      puVar6 = (undefined1 *)0x8b5d2aa4730e6d53;
      unaff_w19 = in_w7;
      if (puVar5 != &DAT_1b767e91f4196530) {
        if (puVar5 == (undefined1 *)0x2467c250713f82d4) {
          bVar2 = uVar7 == 0x2b;
          puVar5 = (undefined1 *)0xe5248230beacb780;
          puVar6 = (undefined1 *)0xf8b8c954db367ca1;
LAB_001c9ad0:
          unaff_w19 = iVar8;
          if (!bVar2) {
            puVar6 = puVar5;
          }
        }
        else {
          puVar6 = puVar5;
          unaff_w19 = iVar8;
          if (puVar5 == (undefined1 *)0x3f365012db6b56c1) {
            puVar6 = puVar1;
          }
        }
      }
      goto LAB_001c9ae0;
    }
    if (puVar5 != (undefined1 *)0x4c1b9edb721e7222) {
      if (puVar5 == (undefined1 *)0x5e1b922e6e5165fd) {
        puVar6 = (undefined1 *)0xde0600f0ca761eb9;
      }
      else if (puVar5 == &DAT_6b9fb694821e6034) {
        puVar6 = (undefined1 *)0x3a4ee4b4cd18045;
        unaff_x27 = param_1;
      }
      goto LAB_001c9ae0;
    }
    unaff_x28 = in_x16;
    uVar9 = (uint)*in_x16;
    param_2 = local_64;
  }
  puVar6 = &DAT_2b590051c346d3e;
  unaff_x29 = pbVar12;
  in_w6 = uVar4;
  unaff_w23 = iVar10;
  goto LAB_001c9ae0;
}


