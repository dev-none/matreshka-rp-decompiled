// Function: FUN_00117ab0
// Entry: 00117ab0

void FUN_00117ab0(undefined8 *param_1,long param_2,uint param_3)

{
  bool bVar1;
  void *__src;
  void *__dest;
  uint uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  long lVar18;
  undefined8 *puVar19;
  size_t __n;
  int iVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  if (0 < (int)param_3) {
    uVar23 = (ulong)param_3;
    uVar21 = 0;
LAB_00117b18:
    iVar20 = (int)uVar21;
    uVar6 = (ulong)iVar20;
    lVar18 = uVar21 << 0x20;
    uVar13 = param_3;
    if ((int)param_3 <= iVar20 + 1) {
      uVar13 = iVar20 + 1;
    }
    uVar22 = (ulong)uVar13;
    do {
      if (*(int *)(param_2 + uVar6 * 4) != 0) {
        if ((int)(uint)uVar6 < (int)param_3) {
          uVar21 = lVar18 >> 0x20;
          if (*(int *)(param_2 + (lVar18 >> 0x1e)) != 0) goto LAB_00117b74;
          bVar1 = true;
        }
        else {
          bVar1 = false;
          uVar21 = uVar6 & 0xffffffff;
        }
        goto joined_r0x00117bcc;
      }
      uVar6 = uVar6 + 1;
      lVar18 = lVar18 + 0x100000000;
    } while ((long)uVar6 < (long)uVar23);
    bVar1 = false;
    uVar21 = uVar22;
    if (uVar13 != param_3) goto LAB_00117bd0;
    goto LAB_00117b10;
  }
LAB_00117e70:
  iVar20 = 0;
LAB_00117e84:
  param_1[5] = -(ulong)(param_3 - iVar20 >> 0x1f) & 0xfffffffc00000000 |
               (ulong)(param_3 - iVar20) << 2;
  return;
  while (lVar18 = uVar21 * 4, uVar21 = uVar21 + 1, *(int *)(param_2 + 4 + lVar18) != 0) {
LAB_00117b74:
    if (uVar23 - 1 == uVar21) {
      bVar1 = false;
      uVar21 = (ulong)param_3;
      goto joined_r0x00117bcc;
    }
  }
  bVar1 = (long)uVar21 < (long)uVar23;
joined_r0x00117bcc:
  uVar22 = uVar6;
  if ((uint)uVar6 == param_3) goto LAB_00117b10;
LAB_00117bd0:
  uVar12 = (uint)uVar21;
  uVar13 = *(uint *)(param_1[4] + (long)(int)uVar22 * 4);
  uVar6 = (ulong)uVar13;
  if (uVar12 == param_3) {
    __n = 0;
  }
  else {
    __dest = (void *)*param_1;
    uVar22 = (ulong)*(uint *)(param_1[4] + (long)(int)uVar12 * 4);
    lVar18 = (long)(int)uVar12;
    __src = (void *)((long)__dest + uVar22);
    __n = param_1[1] - uVar22;
    iVar20 = (int)__src - (int)(void *)((long)__dest + uVar6);
    if ((__dest != (void *)0x0) && (uVar13 == 0)) {
      memmove(__dest,__src,__n);
      pvVar4 = realloc((void *)*param_1,__n);
      *param_1 = pvVar4;
      if (bVar1) {
        uVar22 = uVar23 - lVar18;
        lVar7 = param_1[4];
        lVar8 = lVar18;
        if (7 < uVar22) {
          uVar14 = uVar22 & 0xfffffffffffffff8;
          lVar8 = uVar14 + lVar18;
          puVar15 = (undefined8 *)(lVar7 + lVar18 * 4 + 0x10);
          uVar5 = uVar14;
          do {
            uVar5 = uVar5 - 8;
            puVar15[-1] = CONCAT44((int)((ulong)puVar15[-1] >> 0x20) - iVar20,
                                   (int)puVar15[-1] - iVar20);
            puVar15[-2] = CONCAT44((int)((ulong)puVar15[-2] >> 0x20) - iVar20,
                                   (int)puVar15[-2] - iVar20);
            puVar15[1] = CONCAT44((int)((ulong)puVar15[1] >> 0x20) - iVar20,(int)puVar15[1] - iVar20
                                 );
            *puVar15 = CONCAT44((int)((ulong)*puVar15 >> 0x20) - iVar20,(int)*puVar15 - iVar20);
            puVar15 = puVar15 + 4;
          } while (uVar5 != 0);
          if (uVar22 == uVar14) goto LAB_00117cc4;
        }
        lVar10 = uVar23 - lVar8;
        piVar9 = (int *)(lVar7 + lVar8 * 4);
        do {
          lVar10 = lVar10 + -1;
          *piVar9 = *piVar9 - iVar20;
          piVar9 = piVar9 + 1;
        } while (lVar10 != 0);
      }
    }
LAB_00117cc4:
    if (((__dest != (void *)0x0) && (__n * uVar6 != 0)) &&
       (memmove((void *)((long)__dest + uVar6),__src,__n), bVar1)) {
      uVar22 = uVar23 - lVar18;
      lVar8 = param_1[4];
      if (7 < uVar22) {
        lVar7 = lVar18 * 4;
        uVar14 = uVar22 & 0xfffffffffffffff8;
        lVar18 = uVar14 + lVar18;
        puVar15 = (undefined8 *)(lVar8 + lVar7 + 0x10);
        uVar5 = uVar14;
        do {
          uVar5 = uVar5 - 8;
          puVar15[-1] = CONCAT44((int)((ulong)puVar15[-1] >> 0x20) - iVar20,
                                 (int)puVar15[-1] - iVar20);
          puVar15[-2] = CONCAT44((int)((ulong)puVar15[-2] >> 0x20) - iVar20,
                                 (int)puVar15[-2] - iVar20);
          puVar15[1] = CONCAT44((int)((ulong)puVar15[1] >> 0x20) - iVar20,(int)puVar15[1] - iVar20);
          *puVar15 = CONCAT44((int)((ulong)*puVar15 >> 0x20) - iVar20,(int)*puVar15 - iVar20);
          puVar15 = puVar15 + 4;
        } while (uVar5 != 0);
        if (uVar22 == uVar14) goto LAB_00117b08;
      }
      lVar7 = uVar23 - lVar18;
      piVar9 = (int *)(lVar8 + lVar18 * 4);
      do {
        lVar7 = lVar7 + -1;
        *piVar9 = *piVar9 - iVar20;
        piVar9 = piVar9 + 1;
      } while (lVar7 != 0);
    }
  }
LAB_00117b08:
  param_1[1] = __n + uVar6;
LAB_00117b10:
  if ((int)param_3 <= (int)uVar21) goto LAB_00117d60;
  goto LAB_00117b18;
LAB_00117d60:
  if (0 < (int)param_3) {
    iVar20 = 0;
    uVar21 = 0;
    do {
      iVar11 = (int)uVar21;
      lVar18 = (long)iVar11;
      uVar13 = param_3;
      if ((int)param_3 <= iVar11 + 1) {
        uVar13 = iVar11 + 1;
      }
      do {
        if (*(int *)(param_2 + lVar18 * 4) != 0) {
          uVar13 = (uint)lVar18;
          break;
        }
        lVar18 = lVar18 + 1;
      } while (lVar18 < (long)uVar23);
      if (uVar13 == param_3) break;
      uVar21 = (ulong)uVar13;
      if ((int)uVar13 < (int)param_3) {
        uVar21 = (ulong)(int)uVar13;
        while (*(int *)(param_2 + uVar21 * 4) != 0) {
          uVar21 = uVar21 + 1;
          uVar12 = param_3;
          if (uVar23 == uVar21) goto LAB_00117e7c;
        }
      }
      uVar12 = (uint)uVar21;
      uVar2 = param_3 - uVar12;
      uVar6 = (ulong)uVar2;
      if (uVar2 == 0 || (int)param_3 < (int)uVar12) {
LAB_00117e7c:
        iVar20 = (iVar20 - uVar13) + uVar12;
        break;
      }
      lVar8 = param_1[4];
      lVar18 = (long)(int)uVar12;
      lVar7 = (long)(int)uVar13;
      if ((uVar2 < 8) || ((lVar7 - lVar18 & 0x3ffffffffffffff8U) == 0)) {
        uVar22 = 0;
LAB_00117e38:
        lVar10 = uVar6 - uVar22;
        puVar16 = (undefined4 *)(lVar8 + uVar22 * 4 + lVar7 * 4);
        puVar17 = (undefined4 *)(lVar8 + lVar18 * 4);
        do {
          lVar10 = lVar10 + -1;
          *puVar16 = *puVar17;
          puVar16 = puVar16 + 1;
          puVar17 = puVar17 + 1;
        } while (lVar10 != 0);
      }
      else {
        uVar22 = uVar6 & 0xfffffff8;
        puVar15 = (undefined8 *)(lVar8 + 0x10 + lVar18 * 4);
        puVar19 = (undefined8 *)(lVar8 + 0x10 + lVar7 * 4);
        lVar18 = uVar22 + lVar18;
        uVar5 = uVar22;
        do {
          puVar3 = puVar15 + -1;
          uVar24 = puVar15[-2];
          uVar26 = puVar15[1];
          uVar25 = *puVar15;
          uVar5 = uVar5 - 8;
          puVar15 = puVar15 + 4;
          puVar19[-1] = *puVar3;
          puVar19[-2] = uVar24;
          puVar19[1] = uVar26;
          *puVar19 = uVar25;
          puVar19 = puVar19 + 4;
        } while (uVar5 != 0);
        if (uVar22 != uVar6) goto LAB_00117e38;
      }
      iVar20 = (iVar20 - uVar13) + uVar12;
    } while ((int)uVar12 < (int)param_3);
    goto LAB_00117e84;
  }
  goto LAB_00117e70;
}


