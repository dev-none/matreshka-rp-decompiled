// Function: mz_zip_writer_finalize_archive
// Entry: 00112d4c

undefined8 mz_zip_writer_finalize_archive(ulong *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  undefined4 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined4 local_158;
  long local_154;
  undefined1 uStack_14c;
  undefined1 uStack_14b;
  undefined1 uStack_14a;
  undefined1 uStack_149;
  undefined1 uStack_148;
  undefined1 uStack_147;
  undefined1 uStack_146;
  undefined1 uStack_145;
  undefined4 uStack_144;
  undefined1 uStack_140;
  undefined1 uStack_13f;
  undefined1 uStack_13e;
  undefined1 uStack_13d;
  undefined4 uStack_13c;
  undefined1 uStack_138;
  undefined1 uStack_137;
  undefined1 uStack_136;
  undefined1 uStack_135;
  undefined4 uStack_134;
  undefined1 uStack_130;
  undefined1 uStack_12f;
  undefined1 uStack_12e;
  undefined1 uStack_12d;
  undefined1 uStack_12c;
  undefined1 uStack_12b;
  undefined1 uStack_12a;
  undefined1 uStack_129;
  undefined1 local_128;
  undefined1 uStack_127;
  undefined1 uStack_126;
  undefined1 uStack_125;
  undefined1 uStack_124;
  undefined1 uStack_123;
  undefined1 uStack_122;
  undefined1 uStack_121;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_1 == (ulong *)0x0) {
    uVar5 = 0;
    goto LAB_00112dfc;
  }
  puVar11 = (undefined8 *)param_1[0xd];
  if ((puVar11 == (undefined8 *)0x0) || (*(int *)((long)param_1 + 0x14) != 2)) {
    uVar8 = 0x18;
  }
  else {
    iVar2 = *(int *)((long)puVar11 + 100);
    if (iVar2 == 0) {
      uVar6 = (uint)param_1[2];
      if (uVar6 >> 0x10 == 0) {
        uVar9 = *param_1;
        uVar10 = puVar11[1];
        if (0xfffffffeffffffff < (uVar9 - 0xffffffea) + uVar10) goto LAB_00112e2c;
      }
    }
    else {
      uVar10 = puVar11[1];
      if (uVar10 < 0xffffffff) {
        uVar6 = (uint)param_1[2];
        uVar9 = *param_1;
LAB_00112e2c:
        if (uVar6 == 0) {
          uVar10 = 0;
          uVar3 = 0;
          uVar6 = 0;
LAB_00112e84:
          if (iVar2 != 0) {
            local_158 = (undefined4)DAT_00103468;
            uStack_148 = 0;
            uStack_147 = 0;
            uStack_146 = 0;
            uStack_145 = 0;
            uStack_144 = 0;
            uStack_140 = (undefined1)uVar6;
            uStack_13f = (undefined1)(uVar6 >> 8);
            uStack_12f = (undefined1)(uVar10 >> 8);
            uStack_12d = (undefined1)(uVar10 >> 0x18);
            uStack_12e = (undefined1)(uVar10 >> 0x10);
            uStack_12b = (undefined1)(uVar10 >> 0x28);
            uStack_12c = (undefined1)(uVar10 >> 0x20);
            uStack_129 = (undefined1)(uVar10 >> 0x38);
            uStack_120 = 0;
            uStack_11c = 0;
            uStack_12a = (undefined1)(uVar10 >> 0x30);
            uStack_127 = (undefined1)(uVar3 >> 8);
            uStack_126 = (undefined1)(uVar3 >> 0x10);
            uStack_125 = (undefined1)(uVar3 >> 0x18);
            uStack_13e = (undefined1)(uVar6 >> 0x10);
            uStack_124 = (undefined1)(uVar3 >> 0x20);
            uStack_123 = (undefined1)(uVar3 >> 0x28);
            uStack_60 = 0;
            local_68 = 0;
            uStack_64 = 0;
            uStack_70 = 0;
            uStack_6c = 0;
            local_78 = 0;
            uStack_74 = 0;
            uStack_80 = 0;
            uStack_7c = 0;
            local_88 = 0;
            uStack_84 = 0;
            uStack_90 = 0;
            uStack_8c = 0;
            local_98 = 0;
            uStack_94 = 0;
            uStack_a0 = 0;
            uStack_9c = 0;
            local_a8 = 0;
            uStack_a4 = 0;
            uStack_b0 = 0;
            uStack_ac = 0;
            local_b8 = 0;
            uStack_b4 = 0;
            uStack_c0 = 0;
            uStack_bc = 0;
            local_c8 = 0;
            uStack_c4 = 0;
            uStack_d0 = 0;
            uStack_cc = 0;
            local_d8 = 0;
            uStack_d4 = 0;
            uStack_e0 = 0;
            uStack_dc = 0;
            local_e8 = 0;
            uStack_e4 = 0;
            uStack_f0 = 0;
            uStack_ec = 0;
            local_f8 = 0;
            uStack_f4 = 0;
            uStack_100 = 0;
            uStack_fc = 0;
            local_108 = 0;
            uStack_104 = 0;
            uStack_110 = 0;
            uStack_10c = 0;
            local_118 = 0;
            uStack_114 = 0;
            local_154 = 0x2c;
            uStack_14c = (undefined1)DAT_00103460;
            uStack_14b = (undefined1)((ulong)DAT_00103460 >> 8);
            uStack_14a = (undefined1)((ulong)DAT_00103460 >> 0x10);
            uStack_149 = (undefined1)((ulong)DAT_00103460 >> 0x18);
            uStack_13d = (undefined1)(uVar6 >> 0x18);
            uStack_13c = 0;
            uStack_134 = 0;
            uStack_130 = (undefined1)uVar10;
            local_128 = (undefined1)uVar3;
            uStack_122 = (undefined1)(uVar3 >> 0x30);
            uStack_121 = (undefined1)(uVar3 >> 0x38);
            uStack_138 = uStack_140;
            uStack_137 = uStack_13f;
            uStack_136 = uStack_13e;
            uStack_135 = uStack_13d;
            lVar4 = (*(code *)param_1[10])(param_1[0xc],uVar9,&local_158,0x38);
            if (lVar4 == 0x38) {
              uVar7 = *param_1;
              *param_1 = uVar7 + 0x38;
              uStack_147 = 0;
              uStack_145 = 0;
              uStack_cc = 0;
              local_c8 = 0;
              uStack_d4 = 0;
              uStack_d0 = 0;
              uStack_bc = 0;
              local_b8 = 0;
              uStack_c4 = 0;
              uStack_c0 = 0;
              uStack_ac = 0;
              local_a8 = 0;
              uStack_b4 = 0;
              uStack_b0 = 0;
              uStack_9c = 0;
              local_98 = 0;
              uStack_a4 = 0;
              uStack_a0 = 0;
              uStack_8c = 0;
              local_88 = 0;
              uStack_94 = 0;
              uStack_90 = 0;
              uStack_7c = 0;
              local_78 = 0;
              uStack_84 = 0;
              uStack_80 = 0;
              uStack_6c = 0;
              uStack_74 = 0;
              uStack_70 = 0;
              uStack_13c = 0;
              uStack_138 = 0;
              uStack_137 = 0;
              uStack_136 = 0;
              uStack_135 = 0;
              uStack_144 = 0;
              uStack_140 = 0;
              uStack_13f = 0;
              uStack_13e = 0;
              uStack_13d = 0;
              uStack_12c = 0;
              uStack_12b = 0;
              uStack_12a = 0;
              uStack_129 = 0;
              local_128 = 0;
              uStack_127 = 0;
              uStack_126 = 0;
              uStack_125 = 0;
              uStack_134 = 0;
              uStack_130 = 0;
              uStack_12f = 0;
              uStack_12e = 0;
              uStack_12d = 0;
              uStack_14c = (undefined1)(uVar9 >> 0x20);
              uStack_11c = 0;
              local_118 = 0;
              uStack_124 = 0;
              uStack_123 = 0;
              uStack_122 = 0;
              uStack_121 = 0;
              uStack_120 = 0;
              uStack_14b = (undefined1)(uVar9 >> 0x28);
              uStack_10c = 0;
              local_108 = 0;
              uStack_114 = 0;
              uStack_110 = 0;
              uStack_14a = (undefined1)(uVar9 >> 0x30);
              uStack_fc = 0;
              local_f8 = 0;
              uStack_104 = 0;
              uStack_100 = 0;
              uStack_ec = 0;
              local_e8 = 0;
              uStack_f4 = 0;
              uStack_f0 = 0;
              uStack_dc = 0;
              local_d8 = 0;
              uStack_e4 = 0;
              uStack_e0 = 0;
              uStack_60 = 0;
              local_68 = 0;
              uStack_64 = 0;
              uStack_148 = 1;
              local_158 = (undefined4)DAT_00103480;
              local_154 = uVar9 << 0x20;
              uStack_149 = (undefined1)(uVar9 >> 0x38);
              uStack_146 = 0;
              lVar4 = (*(code *)param_1[10])(param_1[0xc],uVar7 + 0x38,&local_158,0x14);
              if (lVar4 == 0x14) {
                uVar9 = *param_1 + 0x14;
                uVar6 = (uint)param_1[2];
                *param_1 = uVar9;
                goto LAB_00113094;
              }
            }
            goto LAB_001131a0;
          }
LAB_00113094:
          if (0xfffe < uVar6) {
            uVar6 = 0xffff;
          }
          uStack_60 = 0;
          uStack_64 = 0;
          uStack_6c = 0;
          local_68 = 0;
          uStack_74 = 0;
          uStack_70 = 0;
          uStack_7c = 0;
          local_78 = 0;
          uStack_84 = 0;
          uStack_80 = 0;
          uStack_8c = 0;
          local_88 = 0;
          uStack_94 = 0;
          uStack_90 = 0;
          uStack_9c = 0;
          local_98 = 0;
          uStack_a4 = 0;
          uStack_a0 = 0;
          uStack_ac = 0;
          local_a8 = 0;
          uStack_b4 = 0;
          uStack_b0 = 0;
          uStack_bc = 0;
          local_b8 = 0;
          uStack_c4 = 0;
          uStack_c0 = 0;
          uStack_cc = 0;
          local_c8 = 0;
          uStack_d4 = 0;
          uStack_d0 = 0;
          uStack_dc = 0;
          local_d8 = 0;
          uStack_e4 = 0;
          uStack_e0 = 0;
          uStack_ec = 0;
          local_e8 = 0;
          uStack_f4 = 0;
          uStack_f0 = 0;
          uStack_fc = 0;
          local_f8 = 0;
          uStack_104 = 0;
          uStack_100 = 0;
          uStack_10c = 0;
          local_108 = 0;
          uStack_114 = 0;
          uStack_110 = 0;
          uStack_11c = 0;
          local_118 = 0;
          uStack_124 = 0;
          uStack_123 = 0;
          uStack_122 = 0;
          uStack_121 = 0;
          uStack_120 = 0;
          uStack_12c = 0;
          uStack_12b = 0;
          uStack_12a = 0;
          uStack_129 = 0;
          local_128 = 0;
          uStack_127 = 0;
          uStack_126 = 0;
          uStack_125 = 0;
          uStack_134 = 0;
          uStack_130 = 0;
          uStack_12f = 0;
          uStack_12e = 0;
          uStack_12d = 0;
          uStack_13c = 0;
          uStack_138 = 0;
          uStack_137 = 0;
          uStack_136 = 0;
          uStack_135 = 0;
          uStack_144 = 0;
          uStack_140 = 0;
          uStack_13f = 0;
          uStack_13e = 0;
          uStack_13d = 0;
          if (0xfffffffe < uVar10) {
            uVar10 = 0xffffffff;
          }
          local_154 = (ulong)CONCAT13((char)(uVar6 >> 8),CONCAT12((char)uVar6,(short)uVar6)) << 0x20
          ;
          uStack_14c = (undefined1)uVar10;
          uStack_14b = (undefined1)(uVar10 >> 8);
          local_158 = (undefined4)DAT_00103488;
          uStack_14a = (undefined1)(uVar10 >> 0x10);
          if (0xfffffffe < uVar3) {
            uVar3 = 0xffffffff;
          }
          uStack_149 = (undefined1)(uVar10 >> 0x18);
          uStack_148 = (undefined1)uVar3;
          uStack_147 = (undefined1)(uVar3 >> 8);
          uStack_146 = (undefined1)(uVar3 >> 0x10);
          uStack_145 = (undefined1)(uVar3 >> 0x18);
          lVar4 = (*(code *)param_1[10])(param_1[0xc],uVar9,&local_158,0x16);
          if (lVar4 != 0x16) goto LAB_001131a0;
          if ((FILE *)puVar11[0xe] == (FILE *)0x0) {
LAB_00113184:
            *(undefined4 *)((long)param_1 + 0x14) = 3;
            *param_1 = *param_1 + 0x16;
            uVar5 = 1;
            goto LAB_00112dfc;
          }
          iVar2 = fflush((FILE *)puVar11[0xe]);
          if (iVar2 != -1) goto LAB_00113184;
          uVar8 = 0x15;
        }
        else {
          uVar5 = *puVar11;
          param_1[1] = uVar9;
          uVar3 = (*(code *)param_1[10])(param_1[0xc],uVar9,uVar5,uVar10);
          if (uVar3 == uVar10) {
            uVar7 = *param_1;
            iVar2 = *(int *)((long)puVar11 + 100);
            uVar6 = (uint)param_1[2];
            *param_1 = uVar7 + uVar10;
            uVar3 = uVar9;
            uVar9 = uVar7 + uVar10;
            goto LAB_00112e84;
          }
LAB_001131a0:
          uVar8 = 0x13;
        }
        uVar5 = 0;
        *(undefined4 *)((long)param_1 + 0x1c) = uVar8;
        goto LAB_00112dfc;
      }
    }
    uVar8 = 2;
  }
  uVar5 = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = uVar8;
LAB_00112dfc:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


