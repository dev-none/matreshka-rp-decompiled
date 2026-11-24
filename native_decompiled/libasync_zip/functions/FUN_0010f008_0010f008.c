// Function: FUN_0010f008
// Entry: 0010f008

void FUN_0010f008(long param_1,uint param_2,long param_3,uint *param_4,undefined4 *param_5)

{
  void *__src;
  long lVar1;
  time_t tVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  uint uVar11;
  short *psVar12;
  short *psVar13;
  tm local_a0;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  if ((param_3 == 0) || (param_4 == (uint *)0x0)) {
    uVar3 = 0;
    if (param_1 != 0) {
      *(undefined4 *)(param_1 + 0x1c) = 0x18;
    }
    goto LAB_0010f3c8;
  }
  lVar6 = *(long *)(param_1 + 0x68);
  *param_4 = param_2;
  local_a0.tm_wday = 0;
  local_a0.tm_yday = 0;
  local_a0.tm_isdst = -1;
  local_a0._36_4_ = 0;
  *(ulong *)(param_4 + 2) = (ulong)*(uint *)(*(long *)(lVar6 + 0x20) + (ulong)param_2 * 4);
  local_a0.tm_zone = (char *)0x0;
  local_a0.tm_gmtoff = 0;
  *(undefined2 *)(param_4 + 4) = *(undefined2 *)(param_3 + 4);
  *(undefined2 *)((long)param_4 + 0x12) = *(undefined2 *)(param_3 + 6);
  *(undefined2 *)(param_4 + 5) = *(undefined2 *)(param_3 + 8);
  *(undefined2 *)((long)param_4 + 0x16) = *(undefined2 *)(param_3 + 10);
  local_a0.tm_hour = (int)(*(byte *)(param_3 + 0xd) >> 3);
  local_a0.tm_mday = *(byte *)(param_3 + 0xe) & 0x1f;
  local_a0.tm_year = (*(byte *)(param_3 + 0xf) >> 1) + 0x50;
  local_a0.tm_min = *(ushort *)(param_3 + 0xc) >> 5 & 0x3f;
  local_a0.tm_mon = (*(ushort *)(param_3 + 0xe) >> 5 & 0xf) - 1;
  local_a0.tm_sec = (*(byte *)(param_3 + 0xc) & 0x1f) << 1;
  tVar2 = mktime(&local_a0);
  *(time_t *)(param_4 + 6) = tVar2;
  __src = (void *)(param_3 + 0x2e);
  param_4[8] = *(uint *)(param_3 + 0x10);
  uVar7 = (ulong)*(uint *)(param_3 + 0x14);
  *(ulong *)(param_4 + 10) = uVar7;
  uVar8 = (ulong)*(uint *)(param_3 + 0x18);
  *(ulong *)(param_4 + 0xc) = uVar8;
  *(undefined2 *)(param_4 + 0xe) = *(undefined2 *)(param_3 + 0x24);
  param_4[0xf] = *(uint *)(param_3 + 0x26);
  uVar9 = (ulong)*(uint *)(param_3 + 0x2a);
  *(ulong *)(param_4 + 0x10) = uVar9;
  uVar11 = (uint)*(ushort *)(param_3 + 0x1c);
  if (0x1fe < *(ushort *)(param_3 + 0x1c)) {
    uVar11 = 0x1ff;
  }
  memcpy(param_4 + 0x16,__src,(ulong)uVar11);
  *(undefined1 *)((long)(param_4 + 0x16) + (ulong)uVar11) = 0;
  uVar11 = (uint)*(ushort *)(param_3 + 0x20);
  if (0x1fe < uVar11) {
    uVar11 = 0x1ff;
  }
  param_4[0x12] = uVar11;
  memcpy(param_4 + 0x96,
         (void *)((long)__src +
                 (ulong)*(ushort *)(param_3 + 0x1e) + (ulong)*(ushort *)(param_3 + 0x1c)),
         (ulong)uVar11);
  *(undefined1 *)((long)(param_4 + 0x96) + (ulong)uVar11) = 0;
  plVar10 = *(long **)(param_1 + 0x68);
  if (plVar10 == (long *)0x0) {
    uVar4 = 0x18;
    param_4[0x13] = 0;
    param_4[0x14] = 0;
LAB_0010f298:
    uVar11 = 0;
    *(undefined4 *)(param_1 + 0x1c) = uVar4;
  }
  else {
    if ((param_2 < *(uint *)(param_1 + 0x10)) && (*plVar10 != 0)) {
      lVar6 = *plVar10 + (ulong)*(uint *)(plVar10[4] + (ulong)param_2 * 4);
      if ((*(ushort *)(lVar6 + 0x1c) == 0) ||
         (*(char *)(lVar6 + (ulong)*(ushort *)(lVar6 + 0x1c) + 0x2d) != '/')) {
        uVar11 = *(byte *)(lVar6 + 0x26) >> 4 & 1;
      }
      else {
        uVar11 = 1;
      }
    }
    else {
      uVar11 = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0x18;
    }
    uVar5 = *(uint *)(param_1 + 0x10);
    param_4[0x13] = uVar11;
    if ((param_2 < uVar5) && (*plVar10 != 0)) {
      uVar11 = (uint)((*(byte *)(*plVar10 + (ulong)*(uint *)(plVar10[4] + (ulong)param_2 * 4) + 8) &
                      0x41) != 0);
    }
    else {
      uVar11 = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0x18;
    }
    uVar5 = *(uint *)(param_1 + 0x10);
    param_4[0x14] = uVar11;
    if ((uVar5 <= param_2) || (*plVar10 == 0)) {
      uVar4 = 0x18;
      goto LAB_0010f298;
    }
    lVar6 = *plVar10 + (ulong)*(uint *)(plVar10[4] + (ulong)param_2 * 4);
    if ((*(byte *)(lVar6 + 10) & 0xf7) != 0 || *(char *)(lVar6 + 0xb) != '\0') {
      uVar4 = 4;
      goto LAB_0010f298;
    }
    if ((*(byte *)(lVar6 + 8) & 0x41) != 0) {
      uVar4 = 5;
      goto LAB_0010f298;
    }
    if ((*(byte *)(lVar6 + 8) >> 5 & 1) != 0) {
      uVar4 = 6;
      goto LAB_0010f298;
    }
    uVar11 = 1;
  }
  param_4[0x15] = uVar11;
  if (uVar7 <= uVar8) {
    uVar7 = uVar8;
  }
  if (uVar7 <= uVar9) {
    uVar7 = uVar9;
  }
  if ((uVar7 == 0xffffffff) &&
     (uVar11 = (uint)*(ushort *)(param_3 + 0x1e), *(ushort *)(param_3 + 0x1e) != 0)) {
    psVar13 = (short *)((long)__src + (ulong)*(ushort *)(param_3 + 0x1c));
    do {
      if (uVar11 < 4) {
LAB_0010f37c:
        uVar3 = 0;
        *(undefined4 *)(param_1 + 0x1c) = 9;
        goto LAB_0010f3c8;
      }
      uVar7 = (ulong)(ushort)psVar13[1];
      if (uVar11 < (uint)(uVar7 + 4)) goto LAB_0010f37c;
      uVar5 = (uint)(ushort)psVar13[1];
      if (*psVar13 == 1) {
        psVar12 = psVar13 + 2;
        if (param_5 != (undefined4 *)0x0) {
          *param_5 = 1;
        }
        if (uVar8 == 0xffffffff) {
          if (uVar5 < 8) goto LAB_0010f37c;
          uVar7 = (ulong)(uVar5 - 8);
          *(undefined8 *)(param_4 + 0xc) = *(undefined8 *)(psVar13 + 2);
          psVar12 = psVar13 + 6;
        }
        uVar11 = (uint)uVar7;
        psVar13 = psVar12;
        if (*(long *)(param_4 + 10) == 0xffffffff) {
          if (uVar11 < 8) goto LAB_0010f37c;
          psVar13 = psVar12 + 4;
          uVar11 = uVar11 - 8;
          *(undefined8 *)(param_4 + 10) = *(undefined8 *)psVar12;
        }
        if (uVar9 == 0xffffffff) {
          if (uVar11 < 8) goto LAB_0010f37c;
          *(undefined8 *)(param_4 + 0x10) = *(undefined8 *)psVar13;
        }
        break;
      }
      psVar13 = (short *)((long)psVar13 + uVar7 + 4);
      uVar11 = (uVar11 - uVar5) - 4;
    } while (uVar11 != 0);
  }
  uVar3 = 1;
LAB_0010f3c8:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


