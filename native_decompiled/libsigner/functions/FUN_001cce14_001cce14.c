// Function: FUN_001cce14
// Entry: 001cce14

byte * FUN_001cce14(byte *param_1,byte *param_2,undefined8 param_3,byte *param_4,undefined8 param_5,
                   undefined8 param_6,byte *param_7,byte *param_8)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  long lVar12;
  byte *in_x12;
  ulong uVar13;
  uint uVar14;
  byte *in_x14;
  byte *pbVar15;
  uint uVar16;
  byte *in_x17;
  uint uVar17;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  byte *pbVar18;
  uint uVar19;
  byte *unaff_x30;
  byte *pbVar20;
  byte *local_c0;
  byte *local_b8;
  byte *local_b0;
  byte *local_a8;
  undefined8 local_98;
  ulong local_90 [5];
  long local_68;
  
  local_98 = 0;
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pbVar10 = *(byte **)param_1;
  lVar1 = 0x22bae9789d72b4f3;
  if (pbVar10 != (byte *)0x0) {
    lVar1 = 0x7c778a2912169367;
  }
  uVar16 = 0;
  uVar14 = 0;
  pbVar7 = param_1;
  lVar11 = -0x203d639f93f665df;
  uVar4 = 0;
  uVar5 = 0;
LAB_001ccf34:
  uVar17 = uVar5;
  uVar19 = uVar4;
  pbVar18 = unaff_x25;
  pbVar15 = in_x14;
  pbVar20 = in_x12;
  pbVar9 = param_8;
  pbVar8 = param_4;
  lVar12 = lVar11;
  lVar11 = lVar12;
  param_4 = pbVar8;
  param_8 = pbVar9;
  in_x12 = pbVar20;
  in_x14 = pbVar15;
  unaff_x25 = pbVar18;
  uVar4 = uVar19;
  uVar5 = uVar17;
  if (lVar12 < 0x303d266b462771e7) {
    if (lVar12 < -0x17b186783e63ae61) {
      if (lVar12 < -0x542fd3a52b2562e6) {
        lVar11 = 0x61af358a616341e0;
        in_x12 = unaff_x24;
        if (lVar12 == -0x6bd1c6dbe046ca41) goto LAB_001ccf34;
        if (lVar12 == -0x6b53575728baf5fd) {
          *(byte **)param_1 = in_x17;
          lVar11 = 0x208137b40ff0c41;
          in_x12 = pbVar20;
          goto LAB_001ccf34;
        }
        lVar11 = lVar12;
        in_x12 = pbVar20;
        if (lVar12 != -0x57c5a7acde5d998b) goto LAB_001ccf34;
        bVar2 = *pbVar10;
        lVar12 = 0x4e77b14c69e4757b;
        lVar11 = -0x15c48858a06ca71d;
        local_98 = (ulong)CONCAT14(bVar2,(uint)local_98);
      }
      else {
        if (lVar12 < -0x2c4303065cb3eee6) {
          lVar11 = -0x2c4303065cb3eee6;
          param_4 = pbVar10;
          if ((lVar12 != -0x542fd3a52b2562e6) &&
             (lVar11 = lVar12, param_4 = pbVar8, lVar12 == -0x4c0f94e3e225570b)) {
            in_x17 = local_c0 + 1;
            *local_c0 = 0;
            lVar11 = -0x6b53575728baf5fd;
          }
          goto LAB_001ccf34;
        }
        if (lVar12 != -0x2c4303065cb3eee6) {
          if (lVar12 == -0x203d639f93f665df) {
            lVar11 = lVar1;
          }
          goto LAB_001ccf34;
        }
        local_a8 = pbVar8 + 1;
        bVar2 = *pbVar8;
        lVar12 = 0x3fe4345baf199427;
        lVar11 = -0x15a21fd5d20b04b8;
        local_b0 = pbVar8;
      }
      in_x12 = pbVar20;
      if (bVar2 != 0) {
        lVar11 = lVar12;
      }
      goto LAB_001ccf34;
    }
    if (0x208137b40ff0c40 < lVar12) {
      if (lVar12 < 0x25c1d80b3c53cec7) {
        lVar11 = 0x208137b40ff0c41;
        if ((lVar12 != 0x22bae9789d72b4f3) && (lVar11 = lVar12, lVar12 == 0x208137b40ff0c41)) {
          if (*(long *)(lVar3 + 0x28) == local_68) {
            return pbVar10;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
      }
      else {
        if (lVar12 == 0x25c1d80b3c53cec7) {
          lVar11 = -0x12c3a303aebdf85b;
          lVar12 = 0x7096451cc89b6285;
          bVar6 = (*(ulong *)((long)local_90 + ((ulong)(uVar19 >> 3) & 0x1ffffff8)) >>
                   ((ulong)uVar19 & 0x3f) & 1) == 0;
          unaff_x23 = pbVar9;
          goto LAB_001ccf28;
        }
        if (lVar12 == 0x299108bddc6a14bb) {
          in_x17 = (byte *)0x0;
          lVar11 = -0x6b53575728baf5fd;
        }
      }
      goto LAB_001ccf34;
    }
    if (lVar12 < -0x15a21fd5d20b04b8) {
      lVar11 = 0x25c1d80b3c53cec7;
      param_8 = unaff_x24;
      uVar4 = uVar14;
      if ((lVar12 != -0x17b186783e63ae61) &&
         (lVar11 = lVar12, param_8 = pbVar9, uVar4 = uVar19, lVar12 == -0x15c48858a06ca71d)) {
        lVar11 = 0x61af358a616341e0;
        in_x12 = pbVar10;
      }
      goto LAB_001ccf34;
    }
    pbVar20 = local_b0;
    if (lVar12 == -0x15a21fd5d20b04b8) goto LAB_001cd8b8;
    if (lVar12 != -0x12c3a303aebdf85b) goto LAB_001ccf34;
    unaff_x24 = unaff_x23 + 1;
    uVar14 = (uint)*unaff_x24;
    lVar11 = -0x6bd1c6dbe046ca41;
    lVar12 = -0x17b186783e63ae61;
    bVar6 = uVar14 == 0;
  }
  else if (lVar12 < 0x59ea2ac634eec38c) {
    if (lVar12 < 0x4e77b14c69e4757b) {
      lVar11 = 0x55a53f7fea287ef8;
      unaff_x25 = pbVar10;
      if (((lVar12 != 0x303d266b462771e7) &&
          (lVar11 = 0x548f69369cb47b0a, in_x14 = pbVar7, unaff_x25 = pbVar18, uVar5 = uVar16,
          lVar12 != 0x3dd1541672e77739)) &&
         (lVar11 = lVar12, in_x14 = pbVar15, uVar5 = uVar17, lVar12 == 0x3fe4345baf199427)) {
        lVar11 = -0x2c4303065cb3eee6;
        param_4 = local_a8;
      }
      goto LAB_001ccf34;
    }
    if (lVar12 < 0x548f69369cb47b0a) {
      lVar11 = 0x25c1d80b3c53cec7;
      param_8 = pbVar10;
      uVar4 = local_98._4_4_;
      if ((lVar12 != 0x4e77b14c69e4757b) &&
         (lVar11 = lVar12, param_8 = pbVar9, pbVar20 = local_b8, uVar4 = uVar19,
         lVar12 == 0x504fc213a833ef4e)) {
LAB_001cd8b8:
        lVar11 = 0x76a7314c63096d5f;
        param_8 = pbVar9;
        unaff_x30 = pbVar20;
        uVar4 = uVar19;
      }
      goto LAB_001ccf34;
    }
    if (lVar12 != 0x548f69369cb47b0a) {
      if (lVar12 == 0x55a53f7fea287ef8) {
        param_7 = pbVar18 + 1;
        lVar11 = 0x504fc213a833ef4e;
        lVar12 = 0x7e480ccd9447af9d;
        bVar6 = *pbVar18 == (uint)local_98 || *pbVar18 == 0;
        local_b8 = pbVar18;
        goto LAB_001ccf28;
      }
      goto LAB_001ccf34;
    }
    uVar13 = (ulong)(uVar17 >> 3) & 0x1ffffff8;
    lVar11 = -0x57c5a7acde5d998b;
    *(ulong *)((long)local_90 + uVar13) =
         *(ulong *)((long)local_90 + uVar13) | 1L << ((ulong)uVar17 & 0x3f);
    pbVar7 = pbVar15 + 1;
    uVar16 = (uint)*pbVar7;
    bVar6 = uVar16 == 0;
    lVar12 = 0x3dd1541672e77739;
  }
  else if (lVar12 < 0x7096451cc89b6285) {
    if (lVar12 == 0x59ea2ac634eec38c) {
      local_90[1] = 0;
      local_90[0] = 0;
      local_90[3] = 0;
      local_90[2] = 0;
      lVar11 = 0x548f69369cb47b0a;
      in_x14 = param_2;
      uVar5 = (uint)local_98;
      goto LAB_001ccf34;
    }
    if (lVar12 != 0x5aee9e3b6c141ab1) {
      if (lVar12 == 0x61af358a616341e0) goto LAB_001cd8b8;
      goto LAB_001ccf34;
    }
    lVar11 = 0x303d266b462771e7;
    lVar12 = 0x59ea2ac634eec38c;
    bVar6 = param_2[1] == 0;
  }
  else {
    if (lVar12 < 0x7c778a2912169367) {
      lVar11 = 0x61af358a616341e0;
      in_x12 = unaff_x23;
      if ((lVar12 != 0x7096451cc89b6285) &&
         (lVar11 = lVar12, in_x12 = pbVar20, lVar12 == 0x76a7314c63096d5f)) {
        lVar11 = 0x299108bddc6a14bb;
        local_c0 = unaff_x30;
        if (*unaff_x30 != 0) {
          lVar11 = -0x4c0f94e3e225570b;
        }
      }
      goto LAB_001ccf34;
    }
    if (lVar12 != 0x7c778a2912169367) {
      if (lVar12 == 0x7e480ccd9447af9d) {
        lVar11 = 0x55a53f7fea287ef8;
        unaff_x25 = param_7;
      }
      goto LAB_001ccf34;
    }
    lVar11 = -0x542fd3a52b2562e6;
    lVar12 = 0x5aee9e3b6c141ab1;
    bVar6 = *param_2 == 0;
    local_98 = CONCAT44(local_98._4_4_,(uint)*param_2);
  }
LAB_001ccf28:
  if (!bVar6) {
    lVar11 = lVar12;
  }
  goto LAB_001ccf34;
}


