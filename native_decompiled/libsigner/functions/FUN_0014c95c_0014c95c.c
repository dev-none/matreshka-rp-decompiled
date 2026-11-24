// Function: FUN_0014c95c
// Entry: 0014c95c

uint FUN_0014c95c(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong in_x12;
  ulong uVar13;
  ulong unaff_x21;
  ulong uVar14;
  ulong unaff_x25;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  ulong local_e8;
  long local_e0;
  long *local_d8;
  long local_d0;
  long *local_c8;
  uint local_a4;
  ulong local_a0;
  long *local_98;
  uint local_8c;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  uint local_64;
  
  uVar1 = 0xa712b0f17f876d72;
  if (param_3 != 0) {
    uVar1 = 0xcf31e7c4af2922c7;
  }
  uVar2 = 0xabfb60f767fb2846;
  if (param_2 == 0 || param_1 == 0) {
    uVar2 = 0xba075af37dbb17de;
  }
  uVar6 = param_2;
  uVar3 = param_3;
  uVar7 = uVar2;
  uVar10 = 0xabfb60f767fb2846;
  uVar11 = 0xc968c03c3182e18;
LAB_0014cb04:
  uVar13 = in_x12;
  uVar12 = uVar11;
  uVar8 = uVar10;
  uVar9 = uVar3;
  uVar14 = uVar8 & 0xffffffff;
  uVar17 = uVar7 & 0xffffffff;
  uVar15 = uVar6 & 0xffffffff;
  uVar6 = uVar15;
  uVar3 = uVar9;
  uVar10 = uVar14;
  uVar11 = uVar12;
  in_x12 = uVar13;
  if (0x8bca072d1eb92bd < (long)uVar12) {
    if ((long)uVar12 < 0x3c9fba692fcda299) {
      if ((long)uVar12 < 0x1a3ca34fcb1d8e5c) {
        if ((long)uVar12 < 0x12cbf00f4b954c30) {
          uVar7 = uVar17;
          uVar10 = unaff_x25 & 0xffffffff;
          uVar11 = 0x12cbf00f4b954c30;
          if ((uVar12 != 0x8bca072d1eb92be) &&
             (uVar10 = uVar14, uVar11 = uVar12, uVar12 == 0xc968c03c3182e18)) {
            uVar11 = uVar2;
          }
        }
        else {
          uVar7 = uVar17;
          uVar10 = unaff_x25 & 0xffffffff;
          uVar11 = 0x12cbf00f4b954c30;
          if ((uVar12 != 0x16fd975ef5a4a61a) &&
             (uVar10 = uVar14, uVar11 = uVar12, uVar12 == 0x12cbf00f4b954c30)) {
            return (uint)uVar8 & 1;
          }
        }
      }
      else if ((long)uVar12 < 0x2a1b9b1baf25359d) {
        if (uVar12 == 0x1a3ca34fcb1d8e5c) {
          local_78 = local_a0 + 1;
          local_64 = (uint)(param_3 <= local_78);
          uVar7 = uVar17;
          uVar11 = 0xa7c54856be8e72e3;
          if (local_78 != param_3) {
            uVar11 = 0xd29be7578e409a29;
          }
        }
        else {
          uVar7 = uVar17;
          if (uVar12 == 0x220abe6c1208b982) {
            local_e0 = *(long *)(param_1 + local_70 * 0x10 + 0x70);
            uVar11 = 0x3c9fba692fcda299;
            if (local_e0 != 0) {
              uVar11 = 0xb162e6fa475f2813;
            }
          }
        }
      }
      else {
        uVar16 = (uint)uVar7;
        if (uVar12 == 0x2a1b9b1baf25359d) {
          uVar7 = uVar17;
          uVar11 = 0x792e4ec167e31ace;
          unaff_x25 = uVar15;
          local_a0 = uVar9;
          if (uVar13 != 0) {
            uVar11 = 0xab81c36f19c9cac3;
          }
        }
        else {
          uVar7 = uVar17;
          if (uVar12 == 0x325bf1b8366a5fe6) {
            local_80 = *(ulong *)(param_1 + 0x870);
            local_e8 = local_70 + 1;
            uVar11 = 0x61649e558571a765;
            local_a4 = uVar16;
            if (local_80 <= local_e8) {
              uVar11 = 0x769c6876e3006897;
            }
          }
        }
      }
      goto LAB_0014cb04;
    }
    if ((long)uVar12 < 0x589845094b791780) {
      uVar7 = uVar17;
      uVar10 = unaff_x25 & 0xffffffff;
      uVar11 = 0x12cbf00f4b954c30;
      if (((uVar12 == 0x3c9fba692fcda299) ||
          (uVar10 = unaff_x25 & 0xffffffff, uVar12 == 0x4c5203ed6caa103f)) ||
         (uVar10 = uVar14, uVar11 = uVar12, uVar12 != 0x4f6db6f198f9a96f)) goto LAB_0014cb04;
    }
    else {
      if ((long)uVar12 < 0x769c6876e3006897) {
        uVar7 = uVar17;
        uVar11 = uVar1;
        if ((uVar12 != 0x589845094b791780) && (uVar11 = uVar12, uVar12 == 0x61649e558571a765)) {
          local_88 = local_e8;
          local_8c = local_a4;
LAB_0014ccf4:
          uVar7 = uVar17;
          uVar10 = uVar14;
          uVar11 = 0xa2aac5a3c8895884;
        }
        goto LAB_0014cb04;
      }
      if (uVar12 == 0x769c6876e3006897) {
        uVar7 = uVar17;
        uVar11 = 0x1a3ca34fcb1d8e5c;
        if ((local_a4 & 1) == 0) {
          uVar11 = 0x16fd975ef5a4a61a;
        }
        goto LAB_0014cb04;
      }
      uVar7 = uVar17;
      if (uVar12 != 0x792e4ec167e31ace) goto LAB_0014cb04;
    }
    uVar10 = unaff_x25 & 0xffffffff;
    goto LAB_0014d2c0;
  }
  if ((long)uVar12 < -0x45f8a50c8244e822) {
    if (-0x583ab7a941718d1e < (long)uVar12) {
      if ((long)uVar12 < -0x54049f089804d7ba) {
        uVar7 = uVar17;
        uVar10 = (ulong)local_64;
        uVar11 = 0x12cbf00f4b954c30;
        if ((uVar12 != 0xa7c54856be8e72e3) &&
           (uVar10 = uVar14, uVar11 = uVar12, uVar12 == 0xab81c36f19c9cac3)) {
          local_88 = 0;
          local_8c = 0;
          local_c8 = (long *)(param_2 + local_a0 * 0x10);
          local_98 = local_c8 + 1;
          goto LAB_0014ccf4;
        }
        goto LAB_0014cb04;
      }
      if (uVar12 == 0xabfb60f767fb2846) {
        uVar11 = 0x589845094b791780;
        bVar4 = *(ulong *)(param_1 + 0x870) == param_3;
        uVar9 = 0xc802f8be150b6a5f;
      }
      else {
        uVar7 = uVar17;
        if (uVar12 != 0xb162e6fa475f2813) goto LAB_0014cb04;
        uVar11 = 0x4c5203ed6caa103f;
        local_d8 = (long *)(param_1 + local_70 * 0x10 + 0x78);
        bVar4 = *local_d8 == 0;
        uVar9 = 0xc1a7550d1b58912d;
      }
LAB_0014caf8:
      uVar7 = uVar17;
      if (!bVar4) {
        uVar11 = uVar9;
      }
      goto LAB_0014cb04;
    }
    uVar7 = unaff_x21 & 0xffffffff;
    uVar11 = 0x325bf1b8366a5fe6;
    if (uVar12 == 0x87692e7785a96e62) goto LAB_0014cb04;
    if (uVar12 == 0xa2aac5a3c8895884) {
      unaff_x21 = (ulong)local_8c;
      local_d0 = *local_c8;
      local_70 = local_88;
      uVar7 = uVar17;
      uVar11 = 0x8bca072d1eb92be;
      if (local_d0 != 0) {
        uVar11 = 0xc748f5f76918fafd;
      }
      goto LAB_0014cb04;
    }
    uVar7 = uVar17;
    uVar11 = uVar12;
    if (uVar12 != 0xa712b0f17f876d72) goto LAB_0014cb04;
    uVar10 = 1;
  }
  else {
    if ((long)uVar12 < -0x37fd0741eaf495a1) {
      if (uVar12 != 0xba075af37dbb17de) {
        if (uVar12 == 0xc1a7550d1b58912d) {
          iVar5 = FUN_001ca28c(local_d0,local_e0);
          uVar7 = uVar17;
          uVar11 = 0x1a6ebd0f00a8f67;
          if (iVar5 != 0) {
            uVar11 = 0x87692e7785a96e62;
          }
        }
        else {
          uVar7 = uVar17;
          if (uVar12 == 0xc748f5f76918fafd) {
            uVar9 = 0x220abe6c1208b982;
            uVar11 = 0x4f6db6f198f9a96f;
            bVar4 = *local_98 == 0;
            goto LAB_0014caf8;
          }
        }
        goto LAB_0014cb04;
      }
    }
    else {
      if (-0x2d6418a871bf65d8 < (long)uVar12) {
        uVar6 = (ulong)local_64;
        uVar3 = local_78;
        uVar7 = uVar17;
        uVar11 = 0x2a1b9b1baf25359d;
        in_x12 = local_80;
        if ((uVar12 != 0xd29be7578e409a29) &&
           (uVar6 = uVar15, uVar3 = uVar9, uVar11 = uVar12, in_x12 = uVar13,
           uVar12 == 0x1a6ebd0f00a8f67)) {
          iVar5 = FUN_001ca28c(*local_98,*local_d8);
          uVar7 = (ulong)((uint)(iVar5 == 0) | (uint)unaff_x21);
          uVar11 = 0x325bf1b8366a5fe6;
        }
        goto LAB_0014cb04;
      }
      if (uVar12 != 0xc802f8be150b6a5f) {
        uVar7 = uVar17;
        if (uVar12 == 0xcf31e7c4af2922c7) {
          uVar6 = 0;
          uVar3 = 0;
          uVar11 = 0x2a1b9b1baf25359d;
          in_x12 = 1;
        }
        goto LAB_0014cb04;
      }
    }
    uVar10 = 0;
  }
LAB_0014d2c0:
  uVar7 = uVar17;
  uVar11 = 0x12cbf00f4b954c30;
  goto LAB_0014cb04;
}


