// Function: mz_zip_writer_add_mem_ex_v2
// Entry: 001102e0

void mz_zip_writer_add_mem_ex_v2
               (ulong *param_1,char *param_2,long param_3,ulong param_4,long param_5,ulong param_6,
               uint param_7,ulong param_8,undefined4 param_9,time_t *param_10,undefined8 param_11,
               uint param_12,undefined8 param_13,uint param_14)

{
  ushort uVar1;
  bool bVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  time_t tVar7;
  size_t sVar8;
  size_t sVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  ushort uVar13;
  long lVar14;
  undefined2 uVar15;
  ulong uVar16;
  ulong *puVar17;
  code *pcVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined1 uVar23;
  long lVar24;
  ulong uVar25;
  uint uVar26;
  uint uVar27;
  ulong uVar28;
  long lVar29;
  uint uVar30;
  undefined2 uVar31;
  ulong uVar32;
  undefined4 in_stack_fffffffffffffe68;
  undefined2 uVar33;
  uint local_148;
  undefined2 local_144;
  undefined1 *local_140;
  undefined4 local_130;
  undefined8 local_f0;
  ulong local_e8;
  undefined2 local_e0 [2];
  undefined2 local_dc [2];
  ulong local_d8;
  ulong local_d0;
  undefined8 local_c8;
  ulong local_c0;
  undefined8 local_b8;
  undefined1 auStack_ac [28];
  time_t local_90 [2];
  undefined6 uStack_80;
  undefined2 local_7a;
  undefined6 uStack_78;
  long local_70;
  
  uVar33 = (undefined2)((uint)in_stack_fffffffffffffe68 >> 0x10);
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  uVar27 = 6;
  if (-1 < (int)param_7) {
    uVar27 = param_7;
  }
  local_dc[0] = 0;
  local_e0[0] = 0;
  local_f0 = 0;
  if (param_8 == 0) {
    uVar30 = uVar27 & 0x400;
    uVar26 = 0;
    if (param_4 == 0 || uVar30 != 0) {
      uVar26 = uVar30;
    }
    uVar13 = 8;
    if (param_4 == 0 || uVar30 != 0) {
      uVar13 = 0;
    }
  }
  else {
    uVar26 = uVar27 & 0x400;
    uVar13 = 8;
  }
  uVar1 = uVar13 | 0x800;
  if ((uVar27 & 0x10000) != 0) {
    uVar1 = uVar13;
  }
  uVar27 = uVar27 & 0xf;
  bVar4 = uVar27 == 0;
  local_d8 = param_8;
  if (param_1 == (ulong *)0x0) {
LAB_00110c2c:
    uVar6 = 0;
    goto LAB_00110c30;
  }
  uVar28 = param_1[0xd];
  if ((uVar28 == 0) || (*(int *)((long)param_1 + 0x14) != 2)) {
LAB_00110408:
    uVar10 = 0x18;
  }
  else {
    if ((param_2 == (char *)0x0) ||
       (((param_3 == 0 && param_4 != 0 || ((param_6 & 0xffff) != 0 && param_5 == 0)) ||
        (10 < uVar27)))) goto LAB_00110408;
    uVar32 = *param_1;
    local_e8 = uVar32;
    if (*(int *)(uVar28 + 100) == 0) {
      if (((param_8 | param_4) >> 0x20 != 0) || ((int)param_1[2] == 0xffff)) {
        *(undefined4 *)(uVar28 + 100) = 1;
      }
LAB_00110400:
      if ((param_8 != 0) && (uVar26 == 0)) goto LAB_00110408;
      if (*param_2 == '/') {
        uVar10 = 0x19;
        goto LAB_0011040c;
      }
      if (param_10 == (time_t *)0x0) {
        time(local_90);
        tVar7 = local_90[0];
      }
      else {
        tVar7 = *param_10;
      }
      FUN_00110c64(tVar7,local_dc,local_e0);
      if (uVar26 == 0) {
        param_9 = mz_crc32(0,param_3,param_4);
        if (param_4 < 4) {
          uVar27 = 0;
        }
        bVar4 = param_4 < 4 || (uVar26 != 0 || bVar4);
        local_d8 = param_4;
      }
      else {
        bVar4 = true;
      }
      sVar8 = strlen(param_2);
      if (sVar8 < 0x10000) {
        if (param_1[4] == 0) {
          uVar30 = 0;
        }
        else {
          iVar5 = (int)param_1[4];
          uVar30 = iVar5 - 1;
          uVar30 = iVar5 - ((uint)*param_1 & uVar30) & uVar30;
        }
        lVar14 = *(long *)(uVar28 + 8);
        uVar16 = param_6 & 0xffff;
        if (0xfffffffe < uVar16 + sVar8 + lVar14 + 0x4a) {
          uVar10 = 0xf;
LAB_00110524:
          uVar6 = 0;
          *(undefined4 *)((long)param_1 + 0x1c) = uVar10;
          goto LAB_00110c30;
        }
        uVar25 = (ulong)param_12;
        if (*(int *)(uVar28 + 100) == 0) {
          if (uVar16 + uVar25 + (ulong)param_14 + sVar8 * 2 + (ulong)uVar30 +
              lVar14 + *param_1 + -0xffffff8e < 0xffffffff00000000) {
            *(undefined4 *)(uVar28 + 100) = 1;
            goto LAB_0011057c;
          }
          lVar20 = 0;
          if (sVar8 != 0) goto LAB_00110584;
LAB_001105b0:
          local_130 = 0;
        }
        else {
LAB_0011057c:
          lVar20 = 0x1c;
          if (sVar8 == 0) goto LAB_001105b0;
LAB_00110584:
          if (param_2[sVar8 - 1] != '/') goto LAB_001105b0;
          if (param_4 != 0 || local_d8 != 0) {
            uVar10 = 0x18;
            goto LAB_00110524;
          }
          local_130 = 0x10;
        }
        uVar16 = uVar16 + sVar8 + lVar20 + lVar14 + 0x2e;
        if (((*(ulong *)(uVar28 + 0x10) < uVar16) &&
            (iVar5 = FUN_00117a38(param_1,uVar28,uVar16,1), iVar5 == 0)) ||
           ((uVar16 = *(long *)(uVar28 + 0x28) + 1, *(ulong *)(uVar28 + 0x30) < uVar16 &&
            (iVar5 = FUN_00117a38(param_1,uVar28 + 0x20,uVar16,1), iVar5 == 0)))) {
LAB_001106e0:
          uVar6 = 0;
          *(undefined4 *)((long)param_1 + 0x1c) = 0x10;
          goto LAB_00110c30;
        }
        bVar2 = bVar4;
        if (param_4 == 0) {
          bVar2 = true;
        }
        if (bVar2) {
          lVar14 = 0;
        }
        else {
          lVar14 = (*(code *)param_1[5])(param_1[8],1,0x4df78);
          if (lVar14 == 0) goto LAB_001106e0;
        }
        iVar5 = FUN_00110cf4(param_1,uVar32,uVar30);
        uVar31 = local_e0[0];
        if (iVar5 == 0) {
          (*(code *)param_1[6])(param_1[8],lVar14);
          uVar6 = 0;
          goto LAB_00110c30;
        }
        local_90[1] = 0;
        uStack_80 = 0;
        bVar2 = (bool)(bVar4 ^ 1);
        uVar16 = local_e8 + uVar30;
        if (uVar26 != 0) {
          bVar2 = true;
        }
        uVar32 = uVar32 + uVar30;
        local_90[0] = 0;
        uVar15 = 8;
        if (!bVar2) {
          uVar15 = 0;
        }
        local_7a = 0;
        uStack_78 = 0;
        local_e8 = uVar16;
        if (*(int *)(uVar28 + 100) == 0) {
          if ((local_f0._4_4_ != 0) || (uVar32 >> 0x20 != 0)) {
LAB_00110af0:
            uVar10 = 0x1d;
            goto LAB_001104c0;
          }
          local_144 = local_dc[0];
          FUN_00110e28(local_90,sVar8,uVar25,0,0,0,uVar15,uVar1,local_dc[0],
                       CONCAT22(uVar33,local_e0[0]));
          lVar20 = (*(code *)param_1[10])(param_1[0xc],uVar16,local_90,0x1e);
          if (lVar20 == 0x1e) {
            sVar9 = (*(code *)param_1[10])(param_1[0xc],uVar32 + 0x1e,param_2,sVar8);
            if (sVar9 == sVar8) {
              local_140 = (undefined1 *)0x0;
              local_148 = 0;
              uVar28 = uVar32 + 0x1e + sVar8;
              goto LAB_001108d0;
            }
            goto LAB_00110948;
          }
        }
        else {
          if ((local_d8 < 0xffffffff) && (uVar16 < 0xffffffff)) {
            local_140 = (undefined1 *)0x0;
            local_148 = 0;
          }
          else {
            puVar17 = &local_d8;
            puVar11 = &local_f0;
            if (local_d8 < 0xffffffff) {
              puVar17 = (ulong *)0x0;
              puVar11 = (undefined8 *)0x0;
            }
            puVar12 = &local_e8;
            if (uVar16 < 0xffffffff) {
              puVar12 = (ulong *)0x0;
            }
            local_140 = auStack_ac;
            local_148 = FUN_00110dc8(auStack_ac,puVar17,puVar11,puVar12);
          }
          uVar31 = local_e0[0];
          uVar28 = local_e8;
          local_144 = local_dc[0];
          FUN_00110e28(local_90,sVar8,local_148 + param_12,0,0,0,uVar15,uVar1,local_dc[0],
                       CONCAT22(uVar33,local_e0[0]));
          lVar20 = (*(code *)param_1[10])(param_1[0xc],uVar28,local_90,0x1e);
          if (lVar20 == 0x1e) {
            sVar9 = (*(code *)param_1[10])(param_1[0xc],uVar32 + 0x1e,param_2,sVar8);
            if (sVar9 != sVar8) {
LAB_00110948:
              (*(code *)param_1[6])(param_1[8],lVar14);
              uVar10 = 0x13;
LAB_00110960:
              uVar6 = 0;
              *(undefined4 *)((long)param_1 + 0x1c) = uVar10;
              goto LAB_00110c30;
            }
            uVar28 = uVar32 + 0x1e + sVar8;
            if (local_140 == (undefined1 *)0x0) {
              local_140 = (undefined1 *)0x0;
            }
            else {
              uVar16 = (ulong)local_148;
              uVar32 = (*(code *)param_1[10])(param_1[0xc],uVar28,auStack_ac,uVar16);
              if (uVar32 != uVar16) goto LAB_0011093c;
              uVar28 = uVar28 + uVar16;
            }
LAB_001108d0:
            if (param_12 != 0) {
              uVar32 = (*(code *)param_1[10])(param_1[0xc],uVar28,param_11,uVar25);
              if (uVar32 != uVar25) goto LAB_0011093c;
              uVar28 = uVar28 + uVar25;
            }
            if (bVar4) {
              uVar32 = (*(code *)param_1[10])(param_1[0xc],uVar28,param_3,param_4);
              if (uVar32 != param_4) goto LAB_00110948;
              uVar28 = uVar28 + param_4;
              local_f0 = param_4;
            }
            else if (param_4 != 0) {
              uVar30 = *(uint *)(&DAT_00103c64 + (ulong)uVar27 * 4) | (uint)(uVar27 < 4) << 0xe;
              local_b8 = 0;
              uVar26 = uVar30 | 0x80000;
              if (uVar27 != 0) {
                uVar26 = uVar30;
              }
              local_c8 = param_1;
              local_c0 = uVar28;
              tdefl_init(lVar14,FUN_00110f10,&local_c8,uVar26);
              local_d0 = param_4;
              iVar5 = tdefl_compress(lVar14,param_3,&local_d0,0,0,4);
              if (iVar5 != 1) {
                (*(code *)param_1[6])(param_1[8],lVar14);
                uVar10 = 0xc;
                goto LAB_00110960;
              }
              local_f0 = local_b8;
              uVar28 = local_c0;
            }
            (*(code *)param_1[6])(param_1[8],lVar14);
            if (local_d8 == 0) {
              uVar32 = 0;
            }
            else {
              local_c8 = (ulong *)CONCAT44(param_9,(int)DAT_00103448);
              uVar23 = (undefined1)local_d8;
              if (local_140 == (undefined1 *)0x0) {
                if (local_f0 >> 0x20 != 0) goto LAB_00110af0;
                local_c0 = CONCAT44(local_c0._4_4_,(int)local_f0);
                lVar14 = 0xf;
                lVar20 = 0x18;
                lVar19 = 0xe;
                puVar17 = &local_c0;
                lVar22 = 0x10;
                lVar21 = 0xd;
                lVar24 = 8;
                lVar29 = 0x10;
              }
              else {
                lVar29 = 0x18;
                lVar22 = 0x30;
                lVar24 = 0x28;
                local_c0 = local_f0;
                puVar17 = &local_b8;
                lVar14 = 0x17;
                lVar20 = 0x38;
                lVar19 = 0x16;
                lVar21 = 0x15;
                local_b8 = CONCAT71(CONCAT43(local_b8._4_4_,(int3)(local_d8 >> 8)),uVar23);
                uVar23 = (char)(local_d8 >> 0x20);
              }
              *(undefined1 *)((long)puVar17 + 4) = uVar23;
              *(char *)((long)&local_c8 + lVar21) = (char)(local_d8 >> lVar24);
              pcVar18 = (code *)param_1[10];
              uVar32 = param_1[0xc];
              *(char *)((long)&local_c8 + lVar19) = (char)(local_d8 >> lVar22);
              *(char *)((long)&local_c8 + lVar14) = (char)(local_d8 >> lVar20);
              lVar14 = (*pcVar18)(uVar32,uVar28,&local_c8,lVar29);
              if (lVar14 != lVar29) goto LAB_00110c2c;
              uVar28 = lVar29 + uVar28;
              uVar32 = local_d8;
            }
            if (local_140 != (undefined1 *)0x0) {
              puVar17 = &local_d8;
              puVar11 = &local_f0;
              if (uVar32 < 0xffffffff) {
                puVar17 = (ulong *)0x0;
                puVar11 = (undefined8 *)0x0;
              }
              puVar12 = &local_e8;
              if (local_e8 < 0xffffffff) {
                puVar12 = (ulong *)0x0;
              }
              local_148 = FUN_00110dc8(auStack_ac,puVar17,puVar11,puVar12);
              uVar32 = local_d8;
            }
            uVar6 = FUN_00110f7c(param_1,param_2,sVar8,local_140,local_148,param_5,
                                 param_6 & 0xffffffff,uVar32,local_f0,param_9,uVar15,uVar1,local_144
                                 ,uVar31,local_e8,local_130,param_13,param_14);
            if ((int)uVar6 != 0) {
              uVar6 = 1;
              *param_1 = uVar28;
              *(int *)(param_1 + 2) = (int)param_1[2] + 1;
            }
            goto LAB_00110c30;
          }
        }
LAB_0011093c:
        uVar10 = 0x13;
      }
      else {
        uVar10 = 0x19;
      }
LAB_001104c0:
      uVar6 = 0;
      *(undefined4 *)((long)param_1 + 0x1c) = uVar10;
      goto LAB_00110c30;
    }
    if ((int)param_1[2] != -1) goto LAB_00110400;
    uVar10 = 2;
  }
LAB_0011040c:
  uVar6 = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = uVar10;
LAB_00110c30:
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}


