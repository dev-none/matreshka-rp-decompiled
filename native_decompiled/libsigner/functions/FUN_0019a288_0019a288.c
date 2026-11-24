// Function: FUN_0019a288
// Entry: 0019a288

void FUN_0019a288(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  int local_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_6c = 0;
  FUN_00108400(&local_6c,param_1,param_4);
  puVar1 = (undefined1 *)0xcb528befcd0fb52f;
  if (local_6c != 0) {
    puVar1 = (undefined1 *)0x5e1b922e6e5165fd;
  }
  puVar3 = (undefined1 *)0x3a4ee4b4cd18045;
LAB_0019a3bc:
  while (puVar5 = puVar3, puVar3 = puVar5, -0x1ea92f4b59985473 < (long)puVar5) {
    if ((long)puVar5 < 0x1b767e91f4196530) {
      if ((long)puVar5 < -0x74736ab24c9835f) {
        puVar3 = (undefined1 *)0x2467c250713f82d4;
        if ((puVar5 != (undefined1 *)0xe156d0b4a667ab8e) &&
           (puVar3 = puVar5, puVar5 == (undefined1 *)0xe5248230beacb780)) {
          FUN_0010d398(&local_6c,param_4);
          puVar3 = (undefined1 *)0xf8b8c954db367ca1;
          if (local_6c != 0) {
            puVar3 = (undefined1 *)0xd937f9741a083d9f;
          }
        }
      }
      else {
        puVar3 = (undefined1 *)0x4c1b9edb721e7222;
        if (puVar5 != (undefined1 *)0xf8b8c954db367ca1) {
          if (puVar5 == &DAT_2b590051c346d3e) {
            FUN_0010dc80(&local_6c,param_4);
            puVar3 = (undefined1 *)0xc0eb019135e10a40;
            if (local_6c != 0) {
              puVar3 = (undefined1 *)0x8b1dacf6763fda11;
            }
          }
          else {
            puVar3 = puVar5;
            if (puVar5 == (undefined1 *)0x3a4ee4b4cd18045) {
              puVar3 = puVar1;
            }
          }
        }
      }
    }
    else if ((long)puVar5 < 0x4c1b9edb721e7222) {
      if (puVar5 == &DAT_1b767e91f4196530) goto LAB_0019a6a8;
      if (puVar5 == (undefined1 *)0x2467c250713f82d4) {
        FUN_00118ad4(&local_6c,param_1,param_2,(undefined8 *)(param_4 + 0x270));
        puVar3 = (undefined1 *)0xe5248230beacb780;
        if (local_6c != 0) {
          puVar3 = (undefined1 *)0xd136b47bc732bd2b;
        }
      }
      else if (puVar5 == (undefined1 *)0x1db1d1f44155ec69) {
        FUN_00118960(param_4);
        if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
    else if (puVar5 == (undefined1 *)0x4c1b9edb721e7222) {
      FUN_00119438(&local_6c,param_1,param_2,*(undefined8 *)(param_4 + 0x270),param_4 + 0x278);
      puVar3 = &DAT_2b590051c346d3e;
      if (local_6c != 0) {
        puVar3 = (undefined1 *)0x8b5d2aa4730e6d53;
      }
    }
    else if (puVar5 == (undefined1 *)0x5e1b922e6e5165fd) {
      local_6c = 0;
      puVar3 = (undefined1 *)0xde0600f0ca761eb9;
    }
  }
  if ((long)puVar5 < -0x34ad741032f04ad1) {
    if (-0x6cd9a9100255155c < (long)puVar5) {
      puVar3 = (undefined1 *)0x1db1d1f44155ec69;
      if (puVar5 != (undefined1 *)0x932656effdaaeaa5) {
        if (puVar5 == (undefined1 *)0xa0d7c67c60e7a82e) {
          FUN_001100a4(param_4);
          local_6c = 0;
          puVar3 = (undefined1 *)0x2467c250713f82d4;
        }
        else {
          puVar3 = puVar5;
          if (puVar5 == (undefined1 *)0xc0eb019135e10a40) {
            puVar3 = (undefined1 *)0xdbbbecaa54122c5b;
          }
        }
      }
      goto LAB_0019a3bc;
    }
    if (puVar5 == (undefined1 *)0x8b1dacf6763fda11) {
      FUN_0010e3e8(param_4);
      local_6c = 0;
      puVar3 = (undefined1 *)0xdbbbecaa54122c5b;
      goto LAB_0019a3bc;
    }
    if (puVar5 != (undefined1 *)0x8b5d2aa4730e6d53) goto LAB_0019a3bc;
  }
  else {
    if (-0x26c8068be5f7c262 < (long)puVar5) {
      if (puVar5 == (undefined1 *)0xd937f9741a083d9f) {
        FUN_0010dc70(param_4);
        local_6c = 0;
        puVar3 = (undefined1 *)0x4c1b9edb721e7222;
      }
      else if (puVar5 == (undefined1 *)0xdbbbecaa54122c5b) {
        FUN_0010e578(&local_6c,param_4);
        puVar3 = (undefined1 *)0x932656effdaaeaa5;
        if (local_6c != 0) {
          puVar3 = &DAT_1b767e91f4196530;
        }
      }
      else if (puVar5 == (undefined1 *)0xde0600f0ca761eb9) {
        uVar4 = FUN_0010f174(param_1,&local_6c,param_4,param_2,param_3);
        puVar3 = (undefined1 *)0xe156d0b4a667ab8e;
        if ((uVar4 & 1) == 0) {
          puVar3 = (undefined1 *)0xa0d7c67c60e7a82e;
        }
      }
      goto LAB_0019a3bc;
    }
    puVar3 = (undefined1 *)0xde0600f0ca761eb9;
    if ((puVar5 == (undefined1 *)0xcb528befcd0fb52f) ||
       (puVar3 = puVar5, puVar5 != (undefined1 *)0xd136b47bc732bd2b)) goto LAB_0019a3bc;
    FUN_0010dc70(param_4);
  }
  FUN_0010e3e8(param_4);
LAB_0019a6a8:
  FUN_0010f164(param_4);
  local_6c = 0;
  puVar3 = (undefined1 *)0x1db1d1f44155ec69;
  goto LAB_0019a3bc;
}


