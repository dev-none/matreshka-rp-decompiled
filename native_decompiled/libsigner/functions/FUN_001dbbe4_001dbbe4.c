// Function: FUN_001dbbe4
// Entry: 001dbbe4

void FUN_001dbbe4(ulong param_1,long param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong unaff_10000021;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  uint in_w9;
  uint uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined1 *unaff_x20;
  ulong unaff_x24;
  ulong unaff_x25;
  undefined1 *unaff_x27;
  
  puVar1 = (undefined1 *)0x4c1b9edb721e7222;
  if (param_3 != (undefined1 *)0x0) {
    puVar1 = &DAT_2b590051c346d3e;
  }
  uVar4 = param_1;
  puVar3 = (undefined1 *)0x4c1b9edb721e7222;
  puVar2 = (undefined1 *)0xd937f9741a083d9f;
  do {
    while( true ) {
      while( true ) {
        uVar7 = in_w9;
        puVar8 = puVar2;
        puVar6 = puVar3;
        uVar9 = unaff_10000021 & 0xffffffff;
        uVar5 = uVar4 & 0xffffffff;
        in_w9 = (uint)unaff_10000021;
        uVar4 = uVar5;
        puVar3 = puVar6;
        unaff_10000021 = uVar9;
        if (-0x26c8068be5f7c262 < (long)puVar8) break;
        if ((long)puVar8 < -0x6cd9a9100255155b) {
          uVar4 = unaff_x24 & 0xffffffff;
          puVar2 = (undefined1 *)0x932656effdaaeaa5;
          if ((puVar8 != (undefined1 *)0x8b1dacf6763fda11) &&
             (uVar4 = uVar5, puVar2 = puVar8, puVar8 == (undefined1 *)0x8b5d2aa4730e6d53))
          goto LAB_001dbd00;
        }
        else if (puVar8 == (undefined1 *)0x932656effdaaeaa5) {
          unaff_x20 = unaff_x27 + 1;
          puVar2 = (undefined1 *)0x8b5d2aa4730e6d53;
          unaff_x25 = uVar5;
          if (unaff_x20 != param_3) {
            puVar2 = &DAT_1b767e91f4196530;
          }
        }
        else if (puVar8 == (undefined1 *)0xc0eb019135e10a40) {
          *(undefined1 *)(param_1 + uVar7) = puVar6[param_2];
          uVar7 = *(int *)(param_1 + 0x40) + 1;
          unaff_x24 = (ulong)uVar7;
          puVar2 = (undefined1 *)0xdbbbecaa54122c5b;
          if (uVar7 != 0x40) {
            puVar2 = (undefined1 *)0x8b1dacf6763fda11;
          }
          *(uint *)(param_1 + 0x40) = uVar7;
          unaff_x27 = puVar6;
        }
        else {
          puVar2 = puVar8;
          if (puVar8 == (undefined1 *)0xd136b47bc732bd2b) {
            return;
          }
        }
      }
      if ((long)puVar8 < 0x2b590051c346d3e) break;
      if (puVar8 == &DAT_2b590051c346d3e) {
        puVar3 = (undefined1 *)0x0;
        unaff_10000021 = (ulong)*(uint *)(param_1 + 0x40);
        puVar2 = (undefined1 *)0xc0eb019135e10a40;
        in_w9 = *(uint *)(param_1 + 0x40);
      }
      else {
        puVar3 = unaff_x20;
        unaff_10000021 = unaff_x25 & 0xffffffff;
        puVar2 = (undefined1 *)0xc0eb019135e10a40;
        in_w9 = (uint)unaff_x25;
        if ((puVar8 != &DAT_1b767e91f4196530) &&
           (puVar3 = puVar6, unaff_10000021 = uVar9, puVar2 = puVar8, in_w9 = uVar7,
           puVar8 == (undefined1 *)0x4c1b9edb721e7222)) {
LAB_001dbd00:
          uVar4 = uVar5;
          puVar3 = puVar6;
          unaff_10000021 = uVar9;
          puVar2 = (undefined1 *)0xd136b47bc732bd2b;
          in_w9 = uVar7;
        }
      }
    }
    puVar2 = puVar1;
    if ((puVar8 != (undefined1 *)0xd937f9741a083d9f) &&
       (puVar2 = puVar8, puVar8 == (undefined1 *)0xdbbbecaa54122c5b)) {
      FUN_001db018(param_1,param_1);
      *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 0x200;
      *(undefined4 *)(param_1 + 0x40) = 0;
      uVar4 = 0;
      puVar2 = (undefined1 *)0x932656effdaaeaa5;
    }
  } while( true );
}


