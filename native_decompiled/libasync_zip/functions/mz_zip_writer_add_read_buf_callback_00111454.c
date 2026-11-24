// Function: mz_zip_writer_add_read_buf_callback
// Entry: 00111454

void mz_zip_writer_add_read_buf_callback
               (ulong *param_1,char *param_2,code *param_3,undefined8 param_4,ulong param_5,
               undefined8 *param_6,long param_7,ulong param_8,uint param_9,undefined4 param_10,
               undefined8 param_11,uint param_12,undefined8 param_13,uint param_14)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  long lVar5;
  undefined2 uVar6;
  bool bVar7;
  int iVar8;
  undefined8 uVar9;
  size_t sVar10;
  long lVar11;
  size_t sVar12;
  long lVar13;
  ulong *puVar14;
  undefined8 *puVar15;
  undefined1 uVar16;
  undefined4 uVar17;
  uint uVar18;
  ulong *puVar19;
  code *pcVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  uint uVar24;
  undefined4 in_stack_fffffffffffffe58;
  undefined4 uVar25;
  undefined2 uVar26;
  ulong local_158;
  undefined1 *local_140;
  uint local_134;
  ulong local_130;
  undefined8 local_f0;
  ulong local_e8;
  ulong local_e0;
  undefined2 local_d8 [2];
  undefined2 local_d4 [2];
  ulong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  ulong local_b8;
  undefined1 auStack_ac [28];
  undefined8 local_90;
  undefined8 local_88;
  undefined6 uStack_80;
  undefined2 local_7a;
  undefined6 uStack_78;
  long local_70;
  
  uVar26 = (undefined2)((uint)in_stack_fffffffffffffe58 >> 0x10);
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  uVar18 = (param_9 >> 0xe ^ 0xffffffff) & 8;
  local_d4[0] = 0;
  local_d8[0] = 0;
  local_f0 = 0;
  local_e8 = 0;
  uVar1 = uVar18 | 0x800;
  if ((param_9 & 0x10000) != 0) {
    uVar1 = uVar18;
  }
  uVar18 = 6;
  if (-1 < (int)param_9) {
    uVar18 = param_9;
  }
  uVar9 = 0;
  if (param_1 == (ulong *)0x0) goto LAB_0011153c;
  uVar23 = param_1[0xd];
  if ((((uVar23 == 0) || (param_2 == (char *)0x0)) || (*(uint *)((long)param_1 + 0x14) != 2)) ||
     (((param_8 & 0xffff) != 0 && param_7 == 0 || (10 < (uVar18 & 0xf))))) {
LAB_00111530:
    uVar18 = 0x18;
LAB_00111534:
    uVar9 = 0;
  }
  else {
    uVar22 = *param_1;
    iVar8 = *(int *)(uVar23 + 100);
    if ((param_5 >> 0x20 != 0) && (iVar8 == 0)) {
      iVar8 = 1;
      *(undefined4 *)(uVar23 + 100) = 1;
    }
    if ((uVar18 >> 10 & 1) != 0) goto LAB_00111530;
    if (*param_2 == '/') {
LAB_001115a4:
      uVar18 = 0x19;
      goto LAB_00111534;
    }
    if (iVar8 != 0) {
      if ((uint)param_1[2] != 0xffffffff) goto LAB_00111580;
      uVar18 = 2;
      goto LAB_00111534;
    }
    if ((uint)param_1[2] == 0xffff) {
      *(undefined4 *)(uVar23 + 100) = 1;
    }
LAB_00111580:
    sVar10 = strlen(param_2);
    if (0xffff < sVar10) goto LAB_001115a4;
    if (param_1[4] == 0) {
      uVar24 = 0;
    }
    else {
      iVar8 = (int)param_1[4];
      uVar24 = iVar8 - 1;
      uVar24 = iVar8 - ((uint)*param_1 & uVar24) & uVar24;
    }
    if (0xfffffffe < (param_8 & 0xffff) + sVar10 + *(long *)(uVar23 + 8) + 0x4a) {
      uVar9 = 0;
      *(uint *)((long)param_1 + 0x1c) = 0xf;
      goto LAB_0011153c;
    }
    uVar21 = (ulong)param_12;
    if ((*(int *)(uVar23 + 100) == 0) &&
       ((param_8 & 0xffff) + uVar21 + (ulong)param_14 + sVar10 * 2 + (ulong)uVar24 +
        *(long *)(uVar23 + 8) + *param_1 + 0x472 >> 0x20 != 0)) {
      *(undefined4 *)(uVar23 + 100) = 1;
    }
    if (param_6 != (undefined8 *)0x0) {
      FUN_00110c64(*param_6,local_d4,local_d8);
    }
    uVar2 = 0;
    if (3 < param_5) {
      uVar2 = uVar18 & 0xf;
    }
    uVar9 = FUN_00110cf4(param_1,uVar22,uVar24);
    uVar4 = local_d4[0];
    uVar6 = local_d8[0];
    if ((int)uVar9 == 0) {
LAB_00111e40:
      uVar18 = 0x13;
    }
    else {
      bVar7 = uVar2 != 0;
      uVar22 = uVar22 + uVar24;
      local_88 = 0;
      uStack_80 = 0;
      local_90 = 0;
      local_7a = 0;
      uStack_78 = 0;
      local_e0 = uVar22;
      if (*(int *)(uVar23 + 100) == 0) {
        if ((local_f0._4_4_ == 0) && (uVar22 >> 0x20 == 0)) {
          uVar25 = CONCAT22(uVar26,local_d8[0]);
          FUN_00110e28(&local_90,sVar10,uVar21,0,0,0,(ulong)bVar7 << 3,uVar1,local_d4[0],uVar25);
          lVar11 = (*(code *)param_1[10])(param_1[0xc],uVar22,&local_90,0x1e);
          if (lVar11 == 0x1e) {
            lVar11 = uVar22 + 0x1e;
            sVar12 = (*(code *)param_1[10])(param_1[0xc],lVar11,param_2,sVar10);
            if (sVar12 == sVar10) {
              local_140 = (undefined1 *)0x0;
              local_134 = 0;
              local_158 = sVar10;
              goto LAB_00111884;
            }
          }
          goto LAB_00111e3c;
        }
LAB_00111cb0:
        uVar18 = 0x1d;
        goto LAB_00111534;
      }
      if ((param_5 < 0xffffffff) && (uVar22 < 0xffffffff)) {
        local_140 = (undefined1 *)0x0;
        local_134 = 0;
      }
      else {
        if ((uVar18 >> 0x11 & 1) == 0) {
          puVar14 = (ulong *)0x0;
          puVar15 = (undefined8 *)0x0;
        }
        else {
          puVar14 = &local_e8;
          puVar15 = &local_f0;
          if (param_5 < 0xffffffff) {
            puVar14 = (ulong *)0x0;
            puVar15 = (undefined8 *)0x0;
          }
        }
        puVar19 = &local_e0;
        if (uVar22 < 0xffffffff) {
          puVar19 = (ulong *)0x0;
        }
        local_140 = auStack_ac;
        local_134 = FUN_00110dc8(auStack_ac,puVar14,puVar15,puVar19);
      }
      uVar4 = local_d4[0];
      uVar6 = local_d8[0];
      uVar25 = CONCAT22(uVar26,local_d8[0]);
      FUN_00110e28(&local_90,sVar10,local_134 + param_12,0,0,0,(ulong)bVar7 << 3,uVar1,local_d4[0],
                   uVar25);
      lVar11 = (*(code *)param_1[10])(param_1[0xc],uVar22,&local_90,0x1e);
      if (lVar11 != 0x1e) {
LAB_00111e3c:
        uVar9 = 0;
        goto LAB_00111e40;
      }
      sVar12 = (*(code *)param_1[10])(param_1[0xc],uVar22 + 0x1e,param_2,sVar10);
      if (sVar12 != sVar10) goto LAB_00111e3c;
      local_158 = (ulong)local_134;
      lVar11 = uVar22 + 0x1e + sVar10;
      uVar23 = (*(code *)param_1[10])(param_1[0xc],lVar11,auStack_ac,local_158);
      if (uVar23 != local_158) goto LAB_00111e3c;
LAB_00111884:
      local_158 = lVar11 + local_158;
      if (param_12 != 0) {
        uVar23 = (*(code *)param_1[10])(param_1[0xc],local_158,param_11,uVar21);
        if (uVar23 != uVar21) goto LAB_00111e3c;
        local_158 = local_158 + uVar21;
      }
      uVar26 = (undefined2)((uint)uVar25 >> 0x10);
      if (param_5 == 0) {
        local_130 = 0;
LAB_00111b14:
        uVar23 = local_c0;
        if ((uVar18 >> 0x11 & 1) == 0) {
          local_c8 = (ulong *)((local_130 & 0xff) << 0x20);
          local_c8 = (ulong *)CONCAT17((char)(local_130 >> 0x18),
                                       CONCAT16((char)(local_130 >> 0x10),
                                                CONCAT15((char)(local_130 >> 8),(undefined5)local_c8
                                                        )));
          local_c8 = (ulong *)CONCAT44(local_c8._4_4_,(int)DAT_00103448);
          uVar16 = (undefined1)(local_e8 >> 0x18);
          if (local_140 == (undefined1 *)0x0) {
            if (local_f0 >> 0x20 != 0) goto LAB_00111cb0;
            lVar13 = 0x10;
            lVar11 = 0xf;
            local_c0._7_1_ = SUB81(uVar23,7);
            local_c0._0_7_ =
                 CONCAT16((char)(local_e8 >> 0x10),
                          CONCAT15((char)(local_e8 >> 8),CONCAT14((char)local_e8,(int)local_f0)));
          }
          else {
            lVar13 = 0x18;
            local_c0 = local_f0;
            uVar16 = (undefined1)(local_e8 >> 0x38);
            lVar11 = 0x17;
            local_b8._0_7_ = (undefined7)local_e8;
          }
          pcVar20 = (code *)param_1[10];
          uVar23 = param_1[0xc];
          *(undefined1 *)((long)&local_c8 + lVar11) = uVar16;
          lVar11 = (*pcVar20)(uVar23,local_158,&local_c8,lVar13);
          if (lVar11 != lVar13) {
            uVar9 = 0;
            goto LAB_0011153c;
          }
          local_158 = lVar13 + local_158;
          if (local_140 != (undefined1 *)0x0) {
LAB_00111d40:
            puVar14 = &local_e8;
            puVar15 = &local_f0;
            if (local_e8 < 0xffffffff) {
              puVar14 = (ulong *)0x0;
              puVar15 = (undefined8 *)0x0;
            }
            puVar19 = &local_e0;
            if (local_e0 < 0xffffffff) {
              puVar19 = (ulong *)0x0;
            }
            local_134 = FUN_00110dc8(auStack_ac,puVar14,puVar15,puVar19);
          }
LAB_00111d74:
          uVar9 = FUN_00110f7c(param_1,param_2,sVar10,local_140,local_134,param_7,
                               param_8 & 0xffffffff,local_e8,local_f0,(int)local_130,
                               (ushort)bVar7 << 3,(short)uVar1,uVar4,uVar6,local_e0,param_10,
                               param_13,param_14);
          if ((int)uVar9 != 0) {
            uVar9 = 1;
            *(uint *)(param_1 + 2) = (uint)param_1[2] + 1;
            *param_1 = local_158;
          }
          goto LAB_0011153c;
        }
        if (local_140 != (undefined1 *)0x0) {
          puVar14 = &local_e8;
          puVar15 = &local_f0;
          if (param_5 < 0xffffffff) {
            puVar14 = (ulong *)0x0;
            puVar15 = (undefined8 *)0x0;
          }
          puVar19 = &local_e0;
          if (local_e0 < 0xffffffff) {
            puVar19 = (ulong *)0x0;
          }
          local_134 = FUN_00110dc8(auStack_ac,puVar14,puVar15,puVar19);
        }
        uVar23 = 0xffffffff;
        if (param_5 < 0xffffffff) {
          uVar23 = local_e8;
        }
        uVar22 = 0xffffffff;
        if (param_5 < 0xffffffff) {
          uVar22 = local_f0;
        }
        FUN_00110e28(&local_90,sVar10,local_134 + param_12,uVar23,uVar22,local_130 & 0xffffffff,
                     (ushort)bVar7 << 3,uVar1,uVar4,CONCAT22(uVar26,uVar6));
        uVar23 = local_e0;
        lVar11 = (*(code *)param_1[10])(param_1[0xc],local_e0,&local_90,0x1e);
        if (lVar11 == 0x1e) {
          if (local_140 == (undefined1 *)0x0) goto LAB_00111d74;
          sVar12 = (*(code *)param_1[10])(param_1[0xc],uVar23 + 0x1e,param_2,sVar10);
          if ((sVar12 == sVar10) &&
             (uVar23 = (*(code *)param_1[10])
                                 (param_1[0xc],uVar23 + 0x1e + sVar10,auStack_ac,(ulong)local_134),
             uVar23 == local_134)) goto LAB_00111d40;
        }
        goto LAB_00111e3c;
      }
      lVar11 = (*(code *)param_1[5])(param_1[8],1,0x2000);
      if (lVar11 != 0) {
        if (uVar2 == 0) {
          uVar23 = (*param_3)(param_4,0,lVar11,0x2000);
          uVar26 = (undefined2)((uint)uVar25 >> 0x10);
          if (uVar23 == 0) {
            local_130 = 0;
            uVar21 = 0;
            uVar22 = 0;
          }
          else {
            uVar21 = 0;
            local_130 = 0;
            do {
              if ((0x2000 < uVar23) || (uVar21 = uVar23 + uVar21, param_5 < uVar21)) {
                (*(code *)param_1[6])(param_1[8],lVar11);
                uVar9 = 0;
                *(uint *)((long)param_1 + 0x1c) = 0x14;
                goto LAB_0011153c;
              }
              uVar22 = (*(code *)param_1[10])(param_1[0xc],local_158,lVar11,uVar23);
              if (uVar22 != uVar23) {
                (*(code *)param_1[6])(param_1[8],lVar11);
                goto LAB_00111e3c;
              }
              local_130 = mz_crc32(local_130,lVar11,uVar23);
              local_158 = uVar23 + local_158;
              uVar23 = (*param_3)(param_4,uVar21,lVar11,0x2000);
              uVar26 = (undefined2)((uint)uVar25 >> 0x10);
              uVar22 = uVar21;
            } while (uVar23 != 0);
          }
        }
        else {
          lVar13 = (*(code *)param_1[5])(param_1[8],1,0x4df78);
          if (lVar13 == 0) {
            (*(code *)param_1[6])(param_1[8],lVar11);
            uVar18 = 0x10;
            goto LAB_00111534;
          }
          local_b8 = 0;
          local_c8 = param_1;
          local_c0 = local_158;
          tdefl_init(lVar13,FUN_00110f10,&local_c8,
                     *(uint *)(&DAT_00103c64 + (ulong)uVar2 * 4) | (uint)(uVar2 < 4) << 0xe);
          uVar22 = 0;
          local_130 = 0;
          do {
            uVar23 = (*param_3)(param_4,uVar22,lVar11,0x2000);
            if ((0x2000 < uVar23) || (uVar22 = uVar23 + uVar22, param_5 < uVar22)) {
              uVar18 = 0x14;
              goto LAB_00111e00;
            }
            local_130 = mz_crc32(local_130,lVar11,uVar23);
            uVar17 = 0;
            if ((code *)param_1[0xb] != (code *)0x0) {
              iVar8 = (*(code *)param_1[0xb])(param_1[0xc]);
              uVar17 = 0;
              if (iVar8 != 0) {
                uVar17 = 3;
              }
            }
            uVar3 = 4;
            if (uVar23 != 0) {
              uVar3 = uVar17;
            }
            local_d0 = uVar23;
            iVar8 = tdefl_compress(lVar13,lVar11,&local_d0,0,0,uVar3);
            uVar26 = (undefined2)((uint)uVar25 >> 0x10);
          } while (iVar8 == 0);
          if (iVar8 != 1) {
            uVar18 = 0xc;
LAB_00111e00:
            *(uint *)((long)param_1 + 0x1c) = uVar18;
            (*(code *)param_1[6])(param_1[8],lVar13);
            (*(code *)param_1[6])(param_1[8],lVar11);
            uVar9 = 0;
            goto LAB_0011153c;
          }
          (*(code *)param_1[6])(param_1[8],lVar13);
          local_f0 = local_b8;
          local_158 = local_c0;
          uVar21 = local_f0;
        }
        local_e8 = uVar22;
        local_f0 = uVar21;
        (*(code *)param_1[6])(param_1[8],lVar11);
        goto LAB_00111b14;
      }
      uVar18 = 0x10;
      uVar9 = 0;
    }
  }
  *(uint *)((long)param_1 + 0x1c) = uVar18;
LAB_0011153c:
  if (*(long *)(lVar5 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
  return;
}


