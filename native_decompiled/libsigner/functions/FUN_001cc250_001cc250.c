// Function: FUN_001cc250
// Entry: 001cc250

void FUN_001cc250(byte *param_1,byte param_2,ulong param_3,undefined8 param_4,byte *param_5,
                 undefined8 param_6,byte *param_7,ulong param_8)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  byte *in_x17;
  ulong unaff_x19;
  ulong uVar18;
  undefined8 uVar19;
  ulong unaff_x24;
  ulong unaff_x25;
  ulong uVar20;
  byte *unaff_x27;
  ulong unaff_x28;
  byte *unaff_x29;
  byte *pbVar21;
  ulong local_78;
  byte *local_70;
  ulong local_68;
  
  uVar13 = (ulong)(uint)-(int)param_1 & 3;
  iVar9 = (uint)param_2 * 0x1010101;
  pbVar1 = param_1 + uVar13;
  uVar13 = param_3 - uVar13;
  uVar16 = uVar13 & 0xfffffffffffffffc;
  uVar2 = 0x6df6ddc7d68c40;
  if (8 < uVar16) {
    uVar2 = 0x91dee5b743ef602c;
  }
  uVar3 = 0xc0f9015491ea412b;
  if (8 < param_3) {
    uVar3 = 0x754d2b88abe28d02;
  }
  uVar4 = 0x4517d092a6c8637b;
  if (6 < param_3) {
    uVar4 = 0xbea2a6ad7de27038;
  }
  uVar19 = CONCAT44(iVar9,iVar9);
  uVar5 = 0xbcb67c35d138e776;
  if (2 < param_3) {
    uVar5 = 0x1029ba407f8d7b2d;
  }
  uVar14 = (uVar13 - 0x38) - ((ulong)pbVar1 & 4);
  uVar17 = (ulong)pbVar1 & 4 | 0x18;
  uVar13 = 0x25e60e8a57340c35;
  if (param_3 != 0) {
    uVar13 = 0x5a82b43288d2c981;
  }
  uVar20 = uVar16 - uVar17;
  uVar6 = 0x5e990c37db09f86a;
  if (uVar20 < 0x20) {
    uVar6 = 0x43f7eb53c5724ce0;
  }
  uVar15 = 0x41be9e0e5eb1efe4;
  uVar7 = uVar15;
  if (0x18 < uVar16) {
    uVar7 = 0x6853f5fa40398e94;
  }
  uVar8 = 0x57f8c36627f7246e;
LAB_001cc49c:
  do {
    while (pbVar21 = unaff_x29, uVar18 = unaff_x19, uVar12 = param_8, pbVar11 = param_7,
          uVar10 = uVar8, uVar8 = uVar10, param_7 = pbVar11, param_8 = uVar12, unaff_x19 = uVar18,
          unaff_x29 = pbVar21, (long)uVar10 < 0x2585bc4e4d7c8853) {
      if ((long)uVar10 < -0x415d5952821d8fc8) {
        if ((long)uVar10 < -0x4f3380086e2b70c2) {
          uVar8 = 0xbe042be3fe8bf539;
          unaff_x19 = unaff_x28;
          unaff_x29 = in_x17;
          if (uVar10 != 0x8da1aee586f30b54) {
            if (uVar10 == 0x91dee5b743ef602c) {
              *(int *)(pbVar1 + 4) = iVar9;
              *(int *)(pbVar1 + 8) = iVar9;
              *(int *)(pbVar1 + (uVar16 - 0xc)) = iVar9;
              *(int *)(pbVar1 + (uVar16 - 8)) = iVar9;
              uVar8 = uVar7;
              unaff_x19 = uVar18;
              unaff_x29 = pbVar21;
            }
            else {
              uVar8 = uVar10;
              unaff_x19 = uVar18;
              unaff_x29 = pbVar21;
              if (uVar10 == 0x9932a9aef4a99dff) {
                uVar8 = 0x135ff1730db8c077;
                unaff_x24 = local_78;
              }
            }
          }
        }
        else {
          uVar8 = 0xe5d3e88b82b362ea;
          param_7 = param_5;
          param_8 = unaff_x25;
          if (((uVar10 != 0xb0cc7ff791d48f3e) &&
              (uVar8 = 0x2585bc4e4d7c8853, param_7 = pbVar11, param_8 = uVar12,
              uVar10 != 0xbcb67c35d138e776)) && (uVar8 = uVar10, uVar10 == 0xbe042be3fe8bf539)) {
            unaff_x28 = uVar18 - 0x20;
            *(undefined8 *)pbVar21 = uVar19;
            *(undefined8 *)(pbVar21 + 8) = uVar19;
            in_x17 = pbVar21 + 0x20;
            uVar8 = 0x8da1aee586f30b54;
            if (unaff_x28 < 0x20) {
              uVar8 = 0x53bf3b45f912026b;
            }
            *(undefined8 *)(pbVar21 + 0x10) = uVar19;
            *(undefined8 *)(pbVar21 + 0x18) = uVar19;
          }
        }
      }
      else if ((long)uVar10 < -0x1a2c17747d4c9d16) {
        if (uVar10 == 0xbea2a6ad7de27038) {
          param_1[3] = param_2;
          param_1[param_3 - 4] = param_2;
          uVar8 = uVar3;
        }
        else {
          uVar8 = 0x2585bc4e4d7c8853;
          if ((uVar10 != 0xc0f9015491ea412b) && (uVar8 = uVar10, uVar10 == 0xd1d3887709769d6c)) {
            local_70 = unaff_x27 + 0x18;
            unaff_x24 = 0;
            uVar15 = local_68 & 0xfffffffffffffffc;
            unaff_x25 = uVar20 + uVar15 * -0x20;
            param_5 = unaff_x27 + uVar15 * 0x20;
            uVar8 = 0x135ff1730db8c077;
          }
        }
      }
      else if ((long)uVar10 < 0x1029ba407f8d7b2d) {
        uVar8 = 0xbe042be3fe8bf539;
        unaff_x19 = uVar12;
        unaff_x29 = pbVar11;
        if ((uVar10 != 0xe5d3e88b82b362ea) &&
           (uVar8 = uVar10, unaff_x19 = uVar18, unaff_x29 = pbVar21, uVar10 == 0x6df6ddc7d68c40)) {
LAB_001cc944:
          uVar8 = 0x2585bc4e4d7c8853;
          unaff_x19 = uVar18;
          unaff_x29 = pbVar21;
        }
      }
      else if (uVar10 == 0x1029ba407f8d7b2d) {
        param_1[1] = param_2;
        param_1[2] = param_2;
        param_1[param_3 - 2] = param_2;
        param_1[param_3 - 3] = param_2;
        uVar8 = uVar4;
      }
      else if (uVar10 == 0x135ff1730db8c077) {
        pbVar11 = local_70 + unaff_x24 * 0x20;
        pbVar21 = local_70 + (unaff_x24 * 0x20 | 0x40);
        local_78 = unaff_x24 + 4;
        *(undefined8 *)(pbVar11 + 0x10) = uVar19;
        *(undefined8 *)(pbVar11 + 8) = uVar19;
        *(undefined8 *)pbVar11 = uVar19;
        *(undefined8 *)(pbVar11 + -8) = uVar19;
        *(undefined8 *)(pbVar11 + -0x10) = uVar19;
        *(undefined8 *)(pbVar11 + -0x18) = uVar19;
        *(undefined8 *)(pbVar11 + 0x20) = uVar19;
        *(undefined8 *)(pbVar11 + 0x18) = uVar19;
        *(undefined8 *)(pbVar21 + 0x10) = uVar19;
        *(undefined8 *)(pbVar21 + 8) = uVar19;
        uVar8 = 0x42f0c6f150e99035;
        if (local_78 != uVar15) {
          uVar8 = 0x9932a9aef4a99dff;
        }
        *(undefined8 *)(pbVar21 + 0x20) = uVar19;
        *(undefined8 *)(pbVar21 + 0x18) = uVar19;
        *(undefined8 *)(pbVar21 + -0x10) = uVar19;
        *(undefined8 *)(pbVar21 + -0x18) = uVar19;
        *(undefined8 *)pbVar21 = uVar19;
        *(undefined8 *)(pbVar21 + -8) = uVar19;
      }
    }
    if (0x469bef0d6588cd57 < (long)uVar10) {
      if ((long)uVar10 < 0x5a82b43288d2c981) {
        uVar8 = 0xe5d3e88b82b362ea;
        param_7 = unaff_x27;
        param_8 = uVar20;
        if (((uVar10 != 0x469bef0d6588cd58) &&
            (uVar8 = 0x2585bc4e4d7c8853, param_7 = pbVar11, param_8 = uVar12,
            uVar10 != 0x53bf3b45f912026b)) && (uVar8 = uVar10, uVar10 == 0x57f8c36627f7246e)) {
          uVar8 = uVar13;
        }
      }
      else if ((long)uVar10 < 0x6853f5fa40398e94) {
        if (uVar10 == 0x5a82b43288d2c981) {
          *param_1 = param_2;
          param_1[param_3 - 1] = param_2;
          uVar8 = uVar5;
        }
        else if (uVar10 == 0x5e990c37db09f86a) {
          unaff_x27 = pbVar1 + uVar17;
          local_68 = (uVar14 >> 5) + 1;
          uVar8 = 0x469bef0d6588cd58;
          if (0x5f < uVar14) {
            uVar8 = 0xd1d3887709769d6c;
          }
        }
      }
      else if (uVar10 == 0x6853f5fa40398e94) {
        *(ulong *)(pbVar1 + 0x14) = CONCAT44(iVar9,iVar9);
        *(ulong *)(pbVar1 + 0xc) = CONCAT44(iVar9,iVar9);
        *(ulong *)(pbVar1 + (uVar16 - 0x14)) = CONCAT44(iVar9,iVar9);
        *(ulong *)(pbVar1 + (uVar16 - 0x1c)) = CONCAT44(iVar9,iVar9);
        uVar8 = uVar6;
      }
      else if (uVar10 == 0x754d2b88abe28d02) {
        *(int *)pbVar1 = iVar9;
        *(int *)(pbVar1 + (uVar16 - 4)) = iVar9;
        uVar8 = uVar2;
      }
      goto LAB_001cc49c;
    }
    if ((long)uVar10 < 0x42f0c6f150e99035) {
      uVar8 = 0x2585bc4e4d7c8853;
      if ((long)uVar10 < 0x30873d520a61889c) {
        if ((uVar10 != 0x25e60e8a57340c35) && (uVar8 = uVar10, uVar10 == 0x2585bc4e4d7c8853)) {
          return;
        }
      }
      else if ((uVar10 != 0x30873d520a61889c) && (uVar8 = uVar10, uVar10 == 0x41be9e0e5eb1efe4))
      goto LAB_001cc944;
    }
    else if (uVar10 == 0x42f0c6f150e99035) {
      uVar8 = 0x30873d520a61889c;
      if (local_68 != uVar15) {
        uVar8 = 0xb0cc7ff791d48f3e;
      }
    }
    else {
      uVar8 = 0x2585bc4e4d7c8853;
      if ((uVar10 != 0x43f7eb53c5724ce0) && (uVar8 = uVar10, uVar10 == 0x4517d092a6c8637b))
      goto LAB_001cc944;
    }
  } while( true );
}


