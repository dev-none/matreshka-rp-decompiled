// Function: FUN_001eae80
// Entry: 001eae80

void FUN_001eae80(undefined4 *param_1,uint *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *unaff_x19;
  undefined4 *puVar8;
  uint unaff_w21;
  uint uVar9;
  undefined4 *unaff_x22;
  undefined4 *unaff_x23;
  uint local_68;
  undefined4 local_64;
  
  uVar3 = *param_2;
  puVar1 = (undefined4 *)0x8b1dacf6763fda11;
  if (param_3 != 0) {
    puVar1 = (undefined4 *)0xc0eb019135e10a40;
  }
  puVar2 = (undefined4 *)&DAT_2b590051c346d3e;
  if (uVar3 <= param_3) {
    puVar2 = (undefined4 *)0x4c1b9edb721e7222;
  }
  puVar6 = param_1;
  puVar4 = (undefined4 *)&DAT_2b590051c346d3e;
  puVar5 = (undefined4 *)0xd937f9741a083d9f;
LAB_001eafcc:
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          puVar7 = puVar5;
          puVar8 = puVar4;
          puVar4 = puVar8;
          if ((long)puVar7 < -0x26c8068be5f7c261) break;
          if ((long)puVar7 < 0x1b767e91f4196530) {
            puVar5 = puVar2;
            if (puVar7 != (undefined4 *)0xd937f9741a083d9f) {
              if (puVar7 == (undefined4 *)0xdbbbecaa54122c5b) {
                local_64 = *puVar8;
                puVar6 = calloc(1,0x10);
                puVar5 = (undefined4 *)0x932656effdaaeaa5;
                if (puVar6 != (undefined4 *)0x0) {
                  puVar5 = (undefined4 *)&DAT_1b767e91f4196530;
                }
              }
              else {
                puVar5 = puVar7;
                if (puVar7 == (undefined4 *)&DAT_2b590051c346d3e) {
                  unaff_x23 = *(undefined4 **)(param_2 + 2);
                  puVar5 = puVar1;
                }
              }
            }
          }
          else if (puVar7 == (undefined4 *)&DAT_1b767e91f4196530) {
            *(undefined4 **)(puVar6 + 2) = unaff_x23;
            *puVar6 = local_64;
            *(undefined4 **)(param_2 + 2) = puVar6;
            *param_2 = uVar3 + 1;
            puVar5 = (undefined4 *)0x87fde1166a77f06e;
          }
          else {
            puVar4 = unaff_x22;
            puVar5 = (undefined4 *)0xdbbbecaa54122c5b;
            if ((puVar7 != (undefined4 *)0x1db1d1f44155ec69) &&
               (puVar4 = puVar8, puVar5 = puVar7, puVar7 == (undefined4 *)0x4c1b9edb721e7222)) {
              *param_1 = 4;
              puVar5 = (undefined4 *)0x87fde1166a77f06e;
            }
          }
        }
        if (-0x6cd9a9100255155c < (long)puVar7) break;
        puVar4 = unaff_x23;
        puVar5 = (undefined4 *)0xdbbbecaa54122c5b;
        if (puVar7 != (undefined4 *)0x8b1dacf6763fda11) {
          if (puVar7 == (undefined4 *)0x8b5d2aa4730e6d53) {
            local_68 = unaff_w21 + 1;
            unaff_x22 = *(undefined4 **)(unaff_x19 + 2);
            puVar4 = puVar8;
            puVar5 = (undefined4 *)0x1db1d1f44155ec69;
            if (local_68 != param_3) {
              puVar5 = (undefined4 *)0xd136b47bc732bd2b;
            }
          }
          else {
            puVar4 = puVar8;
            puVar5 = puVar7;
            if (puVar7 == (undefined4 *)0x87fde1166a77f06e) {
              return;
            }
          }
        }
      }
      if (puVar7 != (undefined4 *)0x932656effdaaeaa5) break;
      *param_1 = 2;
      puVar5 = (undefined4 *)0x87fde1166a77f06e;
    }
    if (puVar7 == (undefined4 *)0xc0eb019135e10a40) {
      puVar8 = unaff_x23;
      uVar9 = 0;
    }
    else {
      puVar5 = puVar7;
      puVar8 = unaff_x22;
      uVar9 = local_68;
      if (puVar7 != (undefined4 *)0xd136b47bc732bd2b) goto LAB_001eafcc;
    }
    puVar5 = (undefined4 *)0x8b5d2aa4730e6d53;
    unaff_x19 = puVar8;
    unaff_w21 = uVar9;
  } while( true );
}


