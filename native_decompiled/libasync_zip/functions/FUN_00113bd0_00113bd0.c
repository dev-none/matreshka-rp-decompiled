// Function: FUN_00113bd0
// Entry: 00113bd0

void FUN_00113bd0(ulong *param_1,char *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  ulong *puVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  size_t sVar7;
  void *pvVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  size_t sVar12;
  long *plVar13;
  char cVar14;
  ulong *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 auVar18 [16];
  ulong local_4d0;
  undefined2 local_4c8 [2];
  undefined2 local_4c4 [2];
  uint local_4c0 [2];
  ulong local_4b8;
  undefined2 local_4aa;
  ulong local_4a8;
  undefined4 local_4a0;
  undefined1 local_498 [16];
  undefined4 local_484;
  ulong local_480;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  local_4c4[0] = 0;
  local_4c8[0] = 0;
  if (param_1 == (ulong *)0x0) {
    uVar9 = 0xffffffff;
    goto LAB_00113cfc;
  }
  uVar17 = *param_1;
  local_4d0 = uVar17;
  if (param_2 != (char *)0x0) {
    sVar7 = strlen(param_2);
    if (sVar7 != 0) {
      if ((void *)param_1[0x10] != (void *)0x0) {
        free((void *)param_1[0x10]);
        param_1[0x10] = 0;
      }
      pvVar8 = calloc(sVar7 + 1,1);
      if (pvVar8 == (void *)0x0) {
        param_1[0x10] = 0;
        uVar9 = 0xfffffffe;
        goto LAB_00113cfc;
      }
      sVar12 = 0;
      do {
        cVar14 = param_2[sVar12];
        if (cVar14 == '\\') {
          cVar14 = '/';
        }
        else if (cVar14 == '\0') break;
        *(char *)((long)pvVar8 + sVar12) = cVar14;
        sVar12 = sVar12 + 1;
      } while (sVar7 != sVar12);
      param_1[0x10] = (ulong)pvVar8;
      if (*(int *)((long)param_1 + 0x14) == 1) {
        iVar6 = mz_zip_reader_locate_file_v2(param_1,pvVar8,0,(ulong)(param_3 != 0) << 8,local_4c0);
        if (iVar6 == 0) {
          local_4c0[0] = 0xffffffff;
        }
        param_1[0xf] = (long)(int)local_4c0[0];
        if (-1 < (int)local_4c0[0]) {
          plVar13 = (long *)param_1[0xd];
          if ((plVar13 == (long *)0x0) || ((uint)param_1[2] <= local_4c0[0])) {
            lVar11 = 0;
          }
          else {
            lVar11 = *plVar13 + (ulong)*(uint *)(plVar13[4] + (ulong)local_4c0[0] * 4);
          }
          iVar6 = FUN_0010f008(param_1,local_4c0[0],lVar11,local_4c0,0);
          if (iVar6 != 0) {
            uVar9 = 0;
            *(undefined4 *)(param_1 + 0x13) = local_4a0;
            auVar18 = NEON_ext(local_498,local_498,8,1);
            param_1[0x14] = local_4b8;
            param_1[0x19] = local_480;
            *(undefined2 *)(param_1 + 0x1a) = local_4aa;
            *(undefined4 *)(param_1 + 0x9c0d) = local_484;
            param_1[0x12] = auVar18._8_8_;
            param_1[0x11] = auVar18._0_8_;
            param_1[0x9c0e] = local_4a8;
            goto LAB_00113cfc;
          }
        }
        uVar9 = 0xfffffffd;
      }
      else {
        uVar10 = *param_1;
        uVar9 = 0xfffffffc;
        param_1[0x11] = 0;
        param_1[0x12] = 0;
        param_1[0xf] = (ulong)(uint)param_1[2];
        iVar6 = (int)param_1[4];
        uVar4 = iVar6 - 1;
        *(undefined4 *)(param_1 + 0x13) = 0;
        uVar1 = (uint)param_1[0xe] & 0xf;
        param_1[0x14] = uVar10;
        uVar2 = 0;
        if (param_1[4] != 0) {
          uVar2 = iVar6 - (uVar4 & (uint)uVar10) & uVar4;
        }
        uVar16 = (ulong)uVar2;
        param_1[0x19] = uVar10;
        puVar15 = param_1 + 0x15;
        *puVar15 = 0;
        param_1[0x16] = 0;
        param_1[0x17] = 0;
        *(undefined8 *)((long)param_1 + 0xbe) = 0;
        *(ushort *)(param_1 + 0x1a) = (ushort)(uVar1 != 0) << 3;
        *(undefined4 *)(param_1 + 0x9c0d) = 0;
        if ((*(int *)((long)param_1 + 0x14) == 2) && (param_1[0xd] != 0)) {
          if (((uint)param_1[0xe] >> 10 & 1) == 0) {
            iVar6 = FUN_00110cf4(param_1,uVar10,uVar16);
            if (iVar6 != 0) {
              local_4d0 = uVar17 + uVar16;
              uVar10 = time((time_t *)0x0);
              param_1[0x9c0e] = uVar10;
              FUN_00110c64(uVar10,local_4c4,local_4c8);
              puVar3 = &local_4d0;
              if (uVar17 + uVar16 < 0xffffffff) {
                puVar3 = (ulong *)0x0;
              }
              uVar17 = FUN_00110dc8(local_4c0,0,0,puVar3);
              uVar17 = uVar17 & 0xffffffff;
              FUN_00110e28(puVar15,sVar7 & 0xffffffff,uVar17,0,0,0,(short)param_1[0x1a],0x808,
                           local_4c4[0],local_4c8[0]);
              param_1[0x19] = param_1[0x14] + uVar16;
              lVar11 = (*(code *)param_1[10])(param_1[0xc],param_1[0x14] + uVar16,puVar15,0x1e);
              if (lVar11 == 0x1e) {
                uVar10 = uVar16 + param_1[0x14] + 0x1e;
                param_1[0x14] = uVar10;
                sVar12 = (*(code *)param_1[10])(param_1[0xc],uVar10,param_1[0x10],sVar7);
                if (sVar12 == sVar7) {
                  uVar10 = param_1[0x14];
                  param_1[0x14] = uVar10 + sVar7;
                  uVar10 = (*(code *)param_1[10])(param_1[0xc],uVar10 + sVar7,local_4c0,uVar17);
                  if (uVar10 == uVar17) {
                    uVar10 = param_1[0x14];
                    param_1[0x14] = uVar10 + uVar17;
                    if (uVar1 != 0) {
                      param_1[0x1b] = (ulong)param_1;
                      param_1[0x1c] = uVar10 + uVar17;
                      uVar2 = uVar1;
                      if (9 < uVar1) {
                        uVar2 = 10;
                      }
                      param_1[0x1d] = 0;
                      tdefl_init(param_1 + 0x1e,FUN_00110f10,param_1 + 0x1b,
                                 *(uint *)(&DAT_00103c64 + (ulong)uVar2 * 4) |
                                 (uint)(uVar1 < 4) << 0xe);
                    }
                    uVar9 = 0;
                    goto LAB_00113cfc;
                  }
                }
                uVar9 = 0xfffffff8;
                goto LAB_00113f88;
              }
            }
            uVar9 = 0xfffffff9;
          }
          else {
            uVar9 = 0xfffffffb;
          }
        }
      }
LAB_00113f88:
      if ((void *)param_1[0x10] != (void *)0x0) {
        free((void *)param_1[0x10]);
        param_1[0x10] = 0;
      }
      goto LAB_00113cfc;
    }
  }
  uVar9 = 0xfffffffe;
LAB_00113cfc:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
}


