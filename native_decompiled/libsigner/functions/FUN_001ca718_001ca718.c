// Function: FUN_001ca718
// Entry: 001ca718

ulong FUN_001ca718(byte *param_1,byte *param_2,long param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  byte *pbVar5;
  byte *pbVar6;
  long lVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  byte *in_x14;
  byte *in_x15;
  long unaff_x20;
  uint uVar15;
  byte *unaff_x23;
  byte *unaff_x24;
  undefined1 *puVar16;
  byte *unaff_x26;
  uint uVar17;
  
  puVar11 = (undefined1 *)0xc0eb019135e10a40;
  uVar17 = 0;
  uVar14 = 0;
  uVar13 = 0;
  puVar2 = puVar11;
  if (param_3 != 0) {
    puVar2 = (undefined1 *)0x8b1dacf6763fda11;
  }
  pbVar5 = param_1;
  pbVar6 = param_2;
  lVar7 = param_3;
  puVar9 = puVar2;
  puVar3 = &DAT_2b590051c346d3e;
  uVar15 = 0;
  uVar8 = 0;
  uVar12 = 0;
LAB_001ca84c:
  do {
    while (puVar16 = puVar3, puVar3 = puVar16, -0x1795c34d98dcd73e < (long)puVar16) {
      if ((long)puVar16 < 0x2ac799c399899ac3) {
        if ((long)puVar16 < 0x1b767e91f4196530) {
          puVar3 = (undefined1 *)0x82d6800f37fa837b;
          if ((puVar16 != (undefined1 *)0xe86a3cb2672328c3) &&
             (puVar3 = puVar16, puVar16 == &DAT_2b590051c346d3e)) {
            puVar3 = puVar2;
          }
        }
        else if (puVar16 == &DAT_1b767e91f4196530) {
          uVar14 = (uint)*unaff_x24;
          lVar7 = unaff_x20 + -1;
          puVar3 = (undefined1 *)0xd136b47bc732bd2b;
          if (lVar7 == 0 || uVar14 == 0) {
            puVar3 = (undefined1 *)0x8b5d2aa4730e6d53;
          }
          puVar11 = (undefined1 *)(ulong)uVar12;
          in_x14 = unaff_x24;
          unaff_x26 = pbVar5;
          uVar8 = uVar12;
        }
        else if (puVar16 == (undefined1 *)0x1db1d1f44155ec69) {
          puVar3 = (undefined1 *)0x82d6800f37fa837b;
        }
      }
      else if ((long)puVar16 < 0x57dab7dd661b1869) {
        if (puVar16 == (undefined1 *)0x2ac799c399899ac3) {
          bVar4 = *pbVar6;
          uVar10 = uVar15;
          if (0xffffffe5 < uVar15 - 0x5b) {
            uVar10 = uVar15 | 0x20;
          }
          uVar1 = (uint)bVar4;
          if (0xffffffe5 < bVar4 - 0x5b) {
            uVar1 = bVar4 | 0x20;
          }
          puVar9 = (undefined1 *)(ulong)(uVar10 - uVar1);
          puVar3 = (undefined1 *)0x9173a1fc59339595;
        }
        else if (puVar16 == (undefined1 *)0x55d58c2b8d472655) {
          pbVar5 = in_x15;
          unaff_x20 = lVar7;
          unaff_x24 = unaff_x23;
          puVar3 = &DAT_1b767e91f4196530;
          uVar12 = uVar13;
        }
      }
      else if (puVar16 == (undefined1 *)0x57dab7dd661b1869) {
        uVar15 = 0;
        pbVar6 = unaff_x23;
        puVar3 = (undefined1 *)0x2ac799c399899ac3;
      }
      else if (puVar16 == (undefined1 *)0x5e9249b5376f08fa) {
LAB_001caaf0:
        pbVar6 = in_x14;
        puVar3 = (undefined1 *)0x2ac799c399899ac3;
        uVar15 = uVar8;
      }
    }
    if (-0x6e8c5e03a6cc6a6c < (long)puVar16) {
      if ((long)puVar16 < -0x2ec94b8438cd42d5) {
        if (puVar16 == (undefined1 *)0x932656effdaaeaa5) {
          pbVar6 = param_2;
          puVar3 = (undefined1 *)0x2ac799c399899ac3;
          uVar15 = 0;
        }
        else if (puVar16 == (undefined1 *)0xc0eb019135e10a40) {
          puVar9 = (undefined1 *)0x0;
          puVar3 = (undefined1 *)0x9173a1fc59339595;
        }
        else if (puVar16 == (undefined1 *)0x9173a1fc59339595) {
          return (ulong)puVar9 & 0xffffffff;
        }
      }
      else if (puVar16 == (undefined1 *)0xd136b47bc732bd2b) {
        puVar3 = (undefined1 *)0x1db1d1f44155ec69;
        if (uVar8 != uVar14) {
          puVar3 = (undefined1 *)0x87fde1166a77f06e;
        }
      }
      else if (puVar16 == (undefined1 *)0xdbbbecaa54122c5b) {
        pbVar5 = param_1;
        unaff_x20 = param_3;
        unaff_x24 = param_2;
        puVar3 = &DAT_1b767e91f4196530;
        uVar12 = uVar17;
      }
      goto LAB_001ca84c;
    }
    if ((long)puVar16 < -0x74e2530989c025ef) {
      if (puVar16 == (undefined1 *)0x82d6800f37fa837b) {
        in_x15 = unaff_x26 + 1;
        uVar13 = (uint)*in_x15;
        unaff_x23 = in_x14 + 1;
        puVar3 = (undefined1 *)0x57dab7dd661b1869;
        if (uVar13 != 0) {
          puVar3 = (undefined1 *)0x55d58c2b8d472655;
        }
      }
      else if (puVar16 == (undefined1 *)0x87fde1166a77f06e) {
        uVar10 = (uint)puVar11;
        if (0xffffffe5 < uVar10 - 0x5b) {
          uVar10 = uVar10 | 0x20;
        }
        uVar1 = uVar14;
        if (0xffffffe5 < uVar14 - 0x5b) {
          uVar1 = uVar14 | 0x20;
        }
        puVar3 = (undefined1 *)0xe86a3cb2672328c3;
        if (uVar10 != uVar1) {
          puVar3 = (undefined1 *)0x5e9249b5376f08fa;
        }
      }
    }
    else if (puVar16 == (undefined1 *)0x8b1dacf6763fda11) {
      uVar17 = (uint)*param_1;
      puVar3 = (undefined1 *)0x932656effdaaeaa5;
      if (uVar17 != 0) {
        puVar3 = (undefined1 *)0xdbbbecaa54122c5b;
      }
    }
    else if (puVar16 == (undefined1 *)0x8b5d2aa4730e6d53) goto LAB_001caaf0;
  } while( true );
}


