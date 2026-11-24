// Function: FUN_00110f7c
// Entry: 00110f7c

void FUN_00110f7c(long param_1,void *param_2,ulong param_3,void *param_4,uint param_5,void *param_6,
                 uint param_7,ulong param_8,ulong param_9,undefined4 param_10,short param_11,
                 undefined2 param_12,undefined2 param_13,undefined2 param_14,ulong param_15,
                 undefined4 param_16,void *param_17,uint param_18)

{
  undefined1 uVar1;
  long lVar2;
  uint6 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  byte bVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined4 local_a4;
  undefined4 local_a0;
  int local_9c;
  undefined1 uStack_98;
  undefined1 uStack_97;
  short sStack_96;
  undefined2 uStack_94;
  undefined1 uStack_92;
  undefined1 uStack_91;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  undefined1 uStack_8e;
  undefined1 uStack_8d;
  undefined1 local_8c [6];
  undefined1 uStack_86;
  undefined1 uStack_85;
  undefined8 uStack_84;
  undefined2 local_7c;
  undefined1 local_7a;
  undefined1 local_79;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined1 local_74;
  undefined1 local_73;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  plVar14 = *(long **)(param_1 + 0x68);
  uVar15 = plVar14[1];
  local_a4 = (undefined4)uVar15;
  if ((param_15 >> 0x20 == 0) || (*(int *)((long)plVar14 + 100) != 0)) {
    uVar18 = param_3 & 0xffff;
    uVar12 = (ulong)param_5 & 0xffff;
    uVar13 = (ulong)param_18;
    uVar11 = (ulong)param_7 & 0xffff;
    if (uVar18 + uVar12 + uVar11 + uVar13 + uVar15 + 0x2e < 0xffffffff) {
      local_7c = 0;
      local_a0 = (undefined4)DAT_00103450;
      bVar10 = 0;
      if (param_11 != 0) {
        bVar10 = 0x14;
      }
      _local_9c = CONCAT26(param_11,CONCAT15((char)((ushort)param_12 >> 8),
                                             CONCAT14((char)param_12,(uint)bVar10 << 0x10)));
      if (0xfffffffe < param_9) {
        param_9 = 0xffffffff;
      }
      if (0xfffffffe < param_8) {
        param_8 = 0xffffffff;
      }
      if (0xfffffffe < param_15) {
        param_15 = 0xffffffff;
      }
      local_8c._0_5_ = CONCAT14((char)param_8,(int)param_9);
      lVar6 = plVar14[1];
      uVar17 = plVar14[2];
      _local_8c = CONCAT17((char)(param_8 >> 0x18),
                           CONCAT16((char)(param_8 >> 0x10),
                                    CONCAT15((char)(param_8 >> 8),local_8c._0_5_)));
      local_7a = (undefined1)param_16;
      uVar16 = lVar6 + 0x2e;
      uVar1 = (undefined1)(param_7 >> 8);
      uStack_84._0_5_ =
           (uint5)CONCAT12((char)(param_18 + param_5 >> 8),
                           CONCAT11((char)(param_18 + param_5),(char)(param_3 >> 8))) << 8;
      uStack_84._0_6_ = CONCAT15(uVar1,(int5)uStack_84);
      local_76 = (undefined1)param_15;
      local_79 = (undefined1)((uint)param_16 >> 8);
      _uStack_94 = CONCAT17((char)((uint)param_10 >> 0x18),
                            CONCAT16((char)((uint)param_10 >> 0x10),
                                     CONCAT15((char)((uint)param_10 >> 8),
                                              CONCAT14((char)param_10,
                                                       CONCAT13((char)((ushort)param_14 >> 8),
                                                                CONCAT12((char)param_14,param_13))))
                                    ));
      local_77 = (undefined1)((uint)param_16 >> 0x18);
      uVar3 = (uint6)(undefined6)uStack_84 >> 8;
      uStack_84._0_5_ = CONCAT14((char)param_7,(int)CONCAT51((int5)uVar3,(char)param_3));
      uStack_84 = (ulong)CONCAT15(uVar1,(int5)uStack_84);
      local_78 = (undefined1)((uint)param_16 >> 0x10);
      local_75 = (undefined1)(param_15 >> 8);
      local_74 = (undefined1)(param_15 >> 0x10);
      local_73 = (undefined1)(param_15 >> 0x18);
      if (uVar17 < uVar16) {
        if (uVar17 < 2) {
          uVar17 = 1;
        }
        do {
          uVar9 = uVar17;
          uVar17 = uVar9 << 1;
        } while (uVar9 < uVar16);
        lVar5 = (**(code **)(param_1 + 0x38))
                          (*(undefined8 *)(param_1 + 0x40),*plVar14,(int)plVar14[3],uVar9);
        if (lVar5 != 0) {
          *plVar14 = lVar5;
          plVar14[2] = uVar9;
          goto LAB_001111c4;
        }
      }
      else {
        lVar5 = *plVar14;
LAB_001111c4:
        plVar14[1] = uVar16;
        memcpy((void *)(lVar5 + lVar6 * (ulong)*(uint *)(plVar14 + 3)),&local_a0,
               (ulong)*(uint *)(plVar14 + 3) * 0x2e);
        lVar6 = plVar14[1];
        uVar17 = plVar14[2];
        uVar16 = lVar6 + uVar18;
        if (uVar17 < uVar16) {
          uVar9 = uVar17;
          if (uVar17 < 2) {
            uVar9 = 1;
          }
          do {
            uVar17 = uVar9;
            uVar9 = uVar17 << 1;
          } while (uVar17 < uVar16);
          lVar5 = (**(code **)(param_1 + 0x38))
                            (*(undefined8 *)(param_1 + 0x40),*plVar14,(int)plVar14[3],uVar17);
          if (lVar5 == 0) goto LAB_001113e4;
          *plVar14 = lVar5;
          plVar14[2] = uVar17;
        }
        plVar14[1] = uVar16;
        if ((param_3 & 0xffff) != 0) {
          memcpy((void *)(*plVar14 + lVar6 * (ulong)*(uint *)(plVar14 + 3)),param_2,
                 *(uint *)(plVar14 + 3) * uVar18);
          uVar16 = plVar14[1];
          uVar17 = plVar14[2];
        }
        uVar18 = uVar16 + uVar12;
        if (uVar17 < uVar18) {
          uVar9 = uVar17;
          if (uVar17 < 2) {
            uVar9 = 1;
          }
          do {
            uVar17 = uVar9;
            uVar9 = uVar17 << 1;
          } while (uVar17 < uVar18);
          lVar6 = (**(code **)(param_1 + 0x38))
                            (*(undefined8 *)(param_1 + 0x40),*plVar14,(int)plVar14[3],uVar17);
          if (lVar6 == 0) goto LAB_001113e4;
          *plVar14 = lVar6;
          plVar14[2] = uVar17;
        }
        plVar14[1] = uVar18;
        if ((param_5 & 0xffff) != 0) {
          memcpy((void *)(*plVar14 + uVar16 * *(uint *)(plVar14 + 3)),param_4,
                 *(uint *)(plVar14 + 3) * uVar12);
          uVar18 = plVar14[1];
          uVar17 = plVar14[2];
        }
        uVar12 = uVar18 + uVar13;
        if (uVar17 < uVar12) {
          uVar16 = uVar17;
          if (uVar17 < 2) {
            uVar16 = 1;
          }
          do {
            uVar17 = uVar16;
            uVar16 = uVar17 << 1;
          } while (uVar17 < uVar12);
          lVar6 = (**(code **)(param_1 + 0x38))
                            (*(undefined8 *)(param_1 + 0x40),*plVar14,(int)plVar14[3],uVar17);
          if (lVar6 == 0) goto LAB_001113e4;
          *plVar14 = lVar6;
          plVar14[2] = uVar17;
        }
        plVar14[1] = uVar12;
        if (param_18 != 0) {
          memcpy((void *)(*plVar14 + uVar18 * *(uint *)(plVar14 + 3)),param_17,
                 *(uint *)(plVar14 + 3) * uVar13);
          uVar12 = plVar14[1];
          uVar17 = plVar14[2];
        }
        uVar13 = uVar12 + uVar11;
        if ((uVar13 <= uVar17) || (iVar4 = FUN_00117a38(param_1,plVar14,uVar13,1), iVar4 != 0)) {
          plVar14[1] = uVar13;
          if ((param_7 & 0xffff) != 0) {
            memcpy((void *)(*plVar14 + uVar12 * *(uint *)(plVar14 + 3)),param_6,
                   *(uint *)(plVar14 + 3) * uVar11);
          }
          lVar6 = plVar14[5];
          uVar11 = lVar6 + 1;
          if ((uVar11 <= (ulong)plVar14[6]) ||
             (iVar4 = FUN_00117a38(param_1,plVar14 + 4,uVar11,1), iVar4 != 0)) {
            plVar14[5] = uVar11;
            memcpy((void *)(plVar14[4] + lVar6 * (ulong)*(uint *)(plVar14 + 7)),&local_a4,
                   (ulong)*(uint *)(plVar14 + 7));
            uVar7 = 1;
            goto LAB_00111420;
          }
        }
      }
LAB_001113e4:
      if ((ulong)plVar14[2] < uVar15) {
        lVar6 = (**(code **)(param_1 + 0x38))
                          (*(undefined8 *)(param_1 + 0x40),*plVar14,(int)plVar14[3],uVar15);
        if (lVar6 != 0) {
          *plVar14 = lVar6;
          plVar14[2] = uVar15;
          goto LAB_00111410;
        }
      }
      else {
LAB_00111410:
        plVar14[1] = uVar15;
      }
      uVar8 = 0x10;
    }
    else {
      uVar8 = 0xf;
    }
  }
  else {
    uVar8 = 3;
  }
  uVar7 = 0;
  *(undefined4 *)(param_1 + 0x1c) = uVar8;
LAB_00111420:
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}


