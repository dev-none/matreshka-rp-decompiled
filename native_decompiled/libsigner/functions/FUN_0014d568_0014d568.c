// Function: FUN_0014d568
// Entry: 0014d568

uint FUN_0014d568(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint unaff_w23;
  ulong unaff_x28;
  long local_88;
  long local_80;
  ulong local_68;
  
  uVar1 = 0xe9f5e3eb978177ec;
  if (param_1 != 0) {
    uVar1 = 0x4be6ab11ecc703e4;
  }
  uVar2 = uVar1;
  uVar5 = 0x8d4068a0efa2ce44;
LAB_0014d644:
  while (uVar7 = uVar5, uVar6 = uVar2, uVar2 = uVar6, uVar5 = uVar7,
        0x245ddb9f1ab10faf < (long)uVar7) {
    if ((long)uVar7 < 0x4db9abf5f019aedd) {
      if ((long)uVar7 < 0x30fd5562b074c779) {
        if (uVar7 == 0x245ddb9f1ab10fb0) {
          local_80 = *(long *)(param_1 + uVar6 * 0x10 + 0x70);
          uVar5 = 0xb5d69f509473df86;
          local_68 = uVar6;
          if (local_80 != 0) {
            uVar5 = 0xc8ac3e1356fed528;
          }
        }
        else if (uVar7 == 0x2831ef91666dade5) {
          unaff_x28 = local_68 + 1;
          uVar5 = 0xca0375e423df4e68;
          if (*(ulong *)(param_1 + 0x870) <= unaff_x28) {
            uVar5 = 0x894ce4e9c28750bc;
          }
        }
        else if (uVar7 == 0x2b344805a6f8fb91) {
LAB_0014d9b0:
          uVar5 = 0xb34965c57d8b6d96;
        }
      }
      else if ((long)uVar7 < 0x3b33882a9673e986) {
        if (uVar7 == 0x30fd5562b074c779) {
          DAT_001f7c00 = 0;
          lVar4 = FUN_001cac50(local_80,&DAT_001f55d8);
          uVar5 = 0x697ddfb5fc291600;
          if (lVar4 != 0) {
            uVar5 = 0x614e89c73f6bf375;
          }
        }
        else if (uVar7 == 0x39129b212bbd5ce5) goto LAB_0014dc24;
      }
      else {
        uVar5 = 0x7a697c0628ef3a30;
        if ((uVar7 != 0x3b33882a9673e986) && (uVar5 = uVar7, uVar7 == 0x4be6ab11ecc703e4)) {
          lVar4 = *(long *)(param_1 + 0x870);
          uVar6 = 0x4db9abf5f019aedd;
          uVar5 = 0x14f9c384648e34af;
LAB_0014dbcc:
          if (lVar4 != 0) {
            uVar5 = uVar6;
          }
        }
      }
    }
    else if ((long)uVar7 < 0x61644a730b11dc0a) {
      if ((long)uVar7 < 0x57230224a5954293) {
        if (uVar7 == 0x4db9abf5f019aedd) {
          uVar2 = 0;
          uVar5 = 0x245ddb9f1ab10fb0;
        }
        else if (uVar7 == 0x4fad994aed2faa66) {
          uVar5 = 0x30fd5562b074c779;
        }
      }
      else if (uVar7 == 0x57230224a5954293) {
        unaff_w23 = 1;
LAB_0014d630:
        uVar5 = 0xe93fc815a9a4bbe5;
      }
      else if (uVar7 == 0x614e89c73f6bf375) {
        uVar6 = 0xfae78a24a662485f;
        lVar4 = *(long *)(param_1 + local_68 * 0x10 + 0x78);
        uVar5 = 0xc8bbce199e3e3142;
        local_88 = lVar4;
        goto LAB_0014dbcc;
      }
    }
    else if ((long)uVar7 < 0x697ddfb5fc291600) {
      if (uVar7 == 0x61644a730b11dc0a) {
        uVar5 = 0x3b33882a9673e986;
        uVar6 = 0x243f60ac3d292ecf;
LAB_0014dda4:
        if (DAT_001f7fbe == '\0') {
          uVar5 = uVar6;
        }
      }
      else if (uVar7 == 0x634b5ed167f73cbc) {
        iVar3 = FUN_001ebe70(0,1,&DAT_001f7c00);
        uVar5 = 0xcf4f54cfb9ab339f;
        if (iVar3 != 0) {
          uVar5 = 0xce959746f30b0bfb;
        }
      }
    }
    else {
      uVar5 = 0x2831ef91666dade5;
      if ((uVar7 != 0x697ddfb5fc291600) && (uVar5 = uVar7, uVar7 == 0x7a697c0628ef3a30)) {
        DAT_001f7c00 = 0;
        lVar4 = FUN_001cac50(local_88,&DAT_001f55d8);
        uVar5 = 0x39129b212bbd5ce5;
        if (lVar4 != 0) {
          uVar5 = 0x57230224a5954293;
        }
      }
    }
  }
  if ((long)uVar7 < -0x35fc8a1bdc20b198) {
    if (-0x4a2960af6b8c207b < (long)uVar7) {
      if ((long)uVar7 < -0x3753c1eca9012ad8) {
        uVar5 = 0x2831ef91666dade5;
        if ((uVar7 != 0xb5d69f509473df86) && (uVar5 = uVar7, uVar7 == 0xc467524b471e5d83)) {
          uVar5 = 0x30fd5562b074c779;
LAB_0014db40:
          DAT_001f55d8 = DAT_001f55d8 ^ 0xcacacacacacacaca;
          DAT_001f55e1 = DAT_001f55e1 ^ 0xca;
          DAT_001f55e0 = DAT_001f55e0 ^ 0xca;
          DAT_001f7fbe = '\x01';
        }
      }
      else {
        uVar5 = 0x634b5ed167f73cbc;
        if ((uVar7 != 0xc8ac3e1356fed528) && (uVar5 = uVar7, uVar7 == 0xc8bbce199e3e3142)) {
LAB_0014dc24:
          uVar5 = 0x2831ef91666dade5;
        }
      }
      goto LAB_0014d644;
    }
    if (uVar7 != 0x894ce4e9c28750bc) {
      uVar5 = uVar1;
      if ((uVar7 != 0x8d4068a0efa2ce44) && (uVar5 = uVar7, uVar7 == 0xb34965c57d8b6d96)) {
        iVar3 = FUN_001ebe70(0,1,&DAT_001f7c00);
        uVar5 = 0x61644a730b11dc0a;
        if (iVar3 != 0) {
          uVar5 = 0x2b344805a6f8fb91;
        }
      }
      goto LAB_0014d644;
    }
  }
  else {
    if ((long)uVar7 < -0x160a1c14687e8814) {
      if ((long)uVar7 < -0x30b0ab304654cc61) {
        uVar2 = unaff_x28;
        uVar5 = 0x245ddb9f1ab10fb0;
        if ((uVar7 != 0xca0375e423df4e68) &&
           (uVar2 = uVar6, uVar5 = uVar7, uVar7 == 0xce959746f30b0bfb)) {
          uVar5 = 0x634b5ed167f73cbc;
        }
      }
      else {
        if (uVar7 == 0xcf4f54cfb9ab339f) {
          uVar5 = 0x4fad994aed2faa66;
          uVar6 = 0xc467524b471e5d83;
          goto LAB_0014dda4;
        }
        if (uVar7 == 0xe93fc815a9a4bbe5) {
          return unaff_w23 & 1;
        }
      }
      goto LAB_0014d644;
    }
    if (0x14f9c384648e34ae < (long)uVar7) {
      if (uVar7 == 0x14f9c384648e34af) goto LAB_0014d62c;
      if (uVar7 == 0x243f60ac3d292ecf) {
        uVar5 = 0x7a697c0628ef3a30;
        goto LAB_0014db40;
      }
      goto LAB_0014d644;
    }
    if (uVar7 != 0xe9f5e3eb978177ec) {
      if (uVar7 == 0xfae78a24a662485f) goto LAB_0014d9b0;
      goto LAB_0014d644;
    }
  }
LAB_0014d62c:
  unaff_w23 = 0;
  goto LAB_0014d630;
}


