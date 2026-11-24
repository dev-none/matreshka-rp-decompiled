// Function: FUN_0010e578
// Entry: 0010e578

void FUN_0010e578(undefined4 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  long lVar12;
  bool bVar13;
  int iVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long extraout_x10;
  long unaff_x23;
  long unaff_x26;
  undefined1 auVar21 [16];
  byte local_14c;
  long local_148;
  undefined4 *local_140;
  long local_138;
  long local_120;
  int local_118;
  undefined1 auStack_114 [20];
  undefined1 auStack_100 [124];
  undefined1 auStack_84 [20];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  local_118 = 0;
  auVar21 = FUN_001ca1a8();
  lVar1 = -0x6765aa352c53cbd4;
  if (auVar21._0_8_ != 0x28) {
    lVar1 = 0x4bb9872e6d9c6197;
  }
  lVar20 = -0x7ce346db1411e4b3;
  lVar12 = extraout_x10;
LAB_0010e684:
  auVar3 = auVar21;
  lVar17 = lVar12;
  lVar19 = lVar20;
  uVar18 = auVar3._8_8_;
  uVar15 = auVar3._0_8_;
  auVar21._8_8_ = unaff_x23;
  auVar21._0_8_ = uVar15;
  auVar11._8_8_ = uVar15;
  auVar11._0_8_ = uVar15;
  auVar10._8_8_ = uVar18;
  auVar10._0_8_ = unaff_x23;
  auVar9._8_8_ = unaff_x23;
  auVar9._0_8_ = uVar15;
  auVar8._8_8_ = uVar18;
  auVar8._0_8_ = unaff_x23;
  auVar7._8_8_ = unaff_x23;
  auVar7._0_8_ = uVar15;
  auVar6._8_8_ = unaff_x23;
  auVar6._0_8_ = uVar15;
  auVar5._8_8_ = unaff_x23;
  auVar5._0_8_ = uVar15;
  auVar4._8_8_ = unaff_x23;
  auVar4._0_8_ = uVar15;
  lVar20 = lVar19;
  lVar12 = lVar17;
  if (lVar19 < -0xe69a20ca30d454f) {
    if (lVar19 < -0x5c7e28b4dc6972e1) {
      if (lVar19 < -0x68535bff6e1aa5a3) {
        if (lVar19 < -0x6c018b1e79d1b12f) {
          lVar20 = lVar1;
          auVar21 = auVar3;
          if ((lVar19 != -0x7ce346db1411e4b3) && (lVar20 = lVar19, lVar19 == -0x7c5cc15037ed23ed)) {
            lVar20 = 0x4e8763835ac1d702;
          }
          goto LAB_0010e684;
        }
        lVar20 = 0x68ebe042d21d5359;
        auVar21 = auVar8;
        if ((lVar19 == -0x6c018b1e79d1b12f) ||
           (lVar20 = lVar19, auVar21 = auVar3, lVar19 != -0x68a8af9eb3eb862b)) goto LAB_0010e684;
        local_138 = *(long *)(unaff_x23 + 0x38);
        bVar13 = local_138 == 0;
        lVar20 = -0xe69a20ca30d454f;
        lVar19 = 0x20d92a490db73055;
        local_14c = bVar13;
      }
      else {
        if (-0x5f8b0d4f26044c17 < lVar19) {
          lVar20 = 0x7cbbcdd16a217848;
          lVar12 = local_120;
          auVar21 = auVar3;
          if ((lVar19 != -0x5f8b0d4f26044c16) &&
             (lVar20 = lVar19, lVar12 = lVar17, lVar19 == -0x5efb67998c7eb3b6)) goto LAB_0010ee84;
          goto LAB_0010e684;
        }
        lVar20 = -0x58e55f5bb8204d3f;
        auVar21 = auVar9;
        if ((lVar19 == -0x68535bff6e1aa5a3) ||
           (lVar20 = lVar19, auVar21 = auVar3, lVar19 != -0x6765aa352c53cbd4)) goto LAB_0010e684;
        unaff_x23 = FUN_001e4f6c(&local_118,*(undefined8 *)(param_2 + 0x278));
        bVar13 = local_118 == 0;
        lVar20 = 0x533e47b8d921314f;
        lVar19 = -0x68535bff6e1aa5a3;
      }
    }
    else {
      if (-0x3d70350d82dad050 < lVar19) {
        if (lVar19 < -0x2055e61e47300075) {
          lVar20 = -0x58e55f5bb8204d3f;
          auVar21 = auVar6;
          if ((lVar19 != -0x3d70350d82dad04f) &&
             (lVar17 = unaff_x23, lVar20 = lVar19, auVar21 = auVar3, lVar19 == -0x3374742e05d739af))
          goto LAB_0010ed7c;
        }
        else {
          lVar20 = 0x7cbbcdd16a217848;
          lVar12 = unaff_x26;
          auVar21 = auVar3;
          if (((lVar19 != -0x2055e61e47300075) &&
              (lVar20 = -0x58e55f5bb8204d3f, lVar12 = lVar17, auVar21 = auVar4,
              lVar19 != -0x15f552153da3e64d)) &&
             (lVar20 = lVar19, auVar21 = auVar3, lVar19 == -0x13dbada936e01e99)) {
LAB_0010ee84:
            lVar20 = -0x58e55f5bb8204d3f;
            lVar12 = lVar17;
            auVar21 = auVar5;
          }
        }
        goto LAB_0010e684;
      }
      if (-0x556fb0b8c357cda4 < lVar19) {
        lVar20 = 0x6eeab4686c73ddec;
        auVar21 = auVar3;
        if ((lVar19 != -0x556fb0b8c357cda3) && (lVar20 = lVar19, lVar19 == -0x53ca464092a249ac)) {
          *param_1 = 1;
          lVar20 = -0x58e55f5bb8204d3f;
          auVar21 = auVar7;
        }
        goto LAB_0010e684;
      }
      if (lVar19 == -0x5c7e28b4dc6972e1) {
        lVar20 = -0x15f552153da3e64d;
        auVar21 = auVar3;
        if ((local_14c & 1) == 0) {
          lVar20 = -0x3374742e05d739af;
        }
        goto LAB_0010e684;
      }
      auVar21 = auVar3;
      if (lVar19 != -0x58e55f5bb8204d3f) goto LAB_0010e684;
      *(ulong *)(param_2 + 0x238) = *(ulong *)(param_2 + 0x238) | 0x40000000000;
      FUN_001e5318(uVar18);
      bVar13 = local_118 == 0;
      lVar20 = -0x556fb0b8c357cda3;
      lVar19 = 0x2da499b57eb5c12d;
    }
  }
  else {
    if (lVar19 < 0x4e8763835ac1d702) {
      if (lVar19 < 0x2da499b57eb5c12d) {
        if (lVar19 < 0x19d992f260813f38) {
          lVar20 = 0x4e8763835ac1d702;
          auVar21 = auVar3;
          if ((lVar19 != -0xe69a20ca30d454f) && (lVar20 = lVar19, lVar19 == 0xd24d68cec5d5988)) {
            FUN_001cc250(auStack_100,0,0x78);
            FUN_001dbbb8(auStack_100);
            FUN_001dbbe4(auStack_100,*(undefined8 *)(local_140 + 2),*local_140);
            FUN_001dbf80(auStack_100,auStack_84);
            iVar14 = FUN_001cbfb0(auStack_114,auStack_84,0x14);
            bVar13 = iVar14 == 0;
            lVar19 = 0x19d992f260813f38;
            lVar20 = 0x483b6742d550f13b;
            goto LAB_0010e678;
          }
        }
        else {
          lVar20 = 0x4e8763835ac1d702;
          auVar21 = auVar3;
          if ((lVar19 != 0x19d992f260813f38) && (lVar20 = lVar19, lVar19 == 0x20d92a490db73055)) {
            local_140 = *(undefined4 **)(local_138 + 0x10);
            lVar20 = -0x7c5cc15037ed23ed;
            if (local_140 != (undefined4 *)0x0) {
              lVar20 = 0xd24d68cec5d5988;
            }
          }
        }
      }
      else if (lVar19 < 0x483b6742d550f13b) {
        if (lVar19 == 0x2da499b57eb5c12d) {
          *param_1 = 0x27;
          lVar20 = 0x6eeab4686c73ddec;
          auVar21 = auVar3;
        }
        else {
          auVar21 = auVar3;
          if (lVar19 == 0x33be0a71a54cbf05) {
            local_120 = *(long *)(unaff_x23 + 0x18);
            lVar20 = -0x6c018b1e79d1b12f;
            if (local_120 != 0) {
              lVar20 = -0x5f8b0d4f26044c16;
            }
          }
        }
      }
      else {
        lVar20 = -0x58e55f5bb8204d3f;
        if ((lVar19 != 0x483b6742d550f13b) &&
           (lVar20 = lVar19, auVar21 = auVar3, lVar19 == 0x4bb9872e6d9c6197)) {
          lVar17 = 0;
LAB_0010ed7c:
          auVar21._8_8_ = uVar18;
          auVar21._0_8_ = lVar17;
          lVar20 = 0x68ebe042d21d5359;
        }
      }
      goto LAB_0010e684;
    }
    if (0x6107ce89302545b0 < lVar19) {
      if (lVar19 < 0x6eeab4686c73ddec) {
        if (lVar19 == 0x6107ce89302545b1) {
          uVar16 = FUN_001d8bb0(param_2 + 0x240,0x28,auStack_114,0x14);
          lVar20 = -0x68a8af9eb3eb862b;
          auVar21 = auVar3;
          if ((uVar16 & 1) == 0) {
            lVar20 = -0x53ca464092a249ac;
          }
        }
        else {
          auVar21 = auVar3;
          if (lVar19 == 0x68ebe042d21d5359) {
            FUN_001e9264(param_2 + 0x20,0x2a);
            *(ulong *)(param_2 + 0x238) = *(ulong *)(param_2 + 0x238) | 1;
            lVar20 = -0x58e55f5bb8204d3f;
            auVar21 = auVar11;
          }
        }
      }
      else {
        lVar20 = 0x68ebe042d21d5359;
        auVar21 = auVar10;
        if (lVar19 != 0x6f254f274b2d0830) {
          if (lVar19 == 0x7cbbcdd16a217848) {
            uVar16 = FUN_0010e3f8(auStack_114,lVar17 + 0x10);
            lVar20 = -0x3d70350d82dad04f;
            auVar21 = auVar3;
            if ((uVar16 & 1) == 0) {
              lVar20 = 0x6f254f274b2d0830;
            }
          }
          else {
            lVar20 = lVar19;
            auVar21 = auVar3;
            if (lVar19 == 0x6eeab4686c73ddec) {
              if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
                __stack_chk_fail();
              }
              return;
            }
          }
        }
      }
      goto LAB_0010e684;
    }
    if (lVar19 < 0x533e47b8d921314f) {
      if (lVar19 == 0x4e8763835ac1d702) {
        local_148 = *(long *)(unaff_x23 + 0x28);
        bVar13 = local_148 == 0;
        lVar20 = 0x506a30486f08dd66;
        lVar19 = 0x57891d3e2c4beb93;
        goto LAB_0010e678;
      }
      auVar21 = auVar3;
      if (lVar19 == 0x506a30486f08dd66) {
        unaff_x26 = *(long *)(unaff_x23 + 0x18);
        lVar20 = -0x5c7e28b4dc6972e1;
        if (unaff_x26 != 0) {
          lVar20 = -0x2055e61e47300075;
        }
      }
      goto LAB_0010e684;
    }
    if (lVar19 != 0x533e47b8d921314f) {
      auVar21 = auVar3;
      if (lVar19 == 0x57891d3e2c4beb93) {
        uVar16 = FUN_0010e3f8(auStack_114,local_148 + 0x10);
        lVar20 = -0x5efb67998c7eb3b6;
        if ((uVar16 & 1) == 0) {
          lVar20 = 0x33be0a71a54cbf05;
        }
      }
      goto LAB_0010e684;
    }
    FUN_001e69e8(&local_118,unaff_x23);
    bVar13 = local_118 == 0;
    lVar20 = 0x6107ce89302545b1;
    lVar19 = -0x13dbada936e01e99;
  }
LAB_0010e678:
  auVar21 = auVar3;
  if (!bVar13) {
    lVar20 = lVar19;
  }
  goto LAB_0010e684;
}


