// Function: FUN_0010a68c
// Entry: 0010a68c

undefined4 FUN_0010a68c(long *param_1,int param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  void *pvVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  
  if ((*(byte *)((long)param_1 + 0x12) >> 3 & 1) == 0) {
    bVar2 = false;
    if (*param_1 != 0) goto LAB_0010a70c;
LAB_0010a6e0:
    if ((ulong)(*(long *)param_1[0x14] - param_1[0x18]) < 0x14ccc) goto LAB_0010a70c;
    pvVar10 = (void *)(param_1[0x12] + param_1[0x18]);
  }
  else {
    bVar2 = (uint)(*(int *)((long)param_1 + 0x24) - (int)param_1[0xb]) <=
            *(uint *)((long)param_1 + 0x2c);
    if (*param_1 == 0) goto LAB_0010a6e0;
LAB_0010a70c:
    pvVar10 = (void *)((long)param_1 + 0x392aa);
  }
  param_1[0xe] = 0;
  param_1[8] = (long)pvVar10;
  param_1[9] = (long)pvVar10 + 0x14cbc;
  *(byte *)param_1[7] = *(byte *)param_1[7] >> (ulong)(*(uint *)(param_1 + 10) & 0x1f);
  param_1[6] = param_1[6] - (ulong)((int)param_1[10] == 8);
  if (((*(byte *)((long)param_1 + 0x11) >> 4 & 1) != 0) && (*(int *)((long)param_1 + 0x7c) == 0)) {
    uVar11 = *(uint *)((long)param_1 + 0x5c);
    uVar4 = *(uint *)(param_1 + 0xc) | 0x78 << (ulong)(uVar11 & 0x1f);
    uVar13 = uVar11 + 8;
    *(uint *)((long)param_1 + 0x5c) = uVar13;
    *(uint *)(param_1 + 0xc) = uVar4;
    if (uVar11 < 0xfffffff8) {
      do {
        puVar1 = (undefined1 *)param_1[8];
        if (puVar1 < (undefined1 *)param_1[9]) {
          param_1[8] = (long)(puVar1 + 1);
          *puVar1 = (char)uVar4;
          uVar13 = *(uint *)((long)param_1 + 0x5c);
          uVar4 = *(uint *)(param_1 + 0xc);
        }
        uVar4 = uVar4 >> 8;
        uVar13 = uVar13 - 8;
        *(uint *)((long)param_1 + 0x5c) = uVar13;
        *(uint *)(param_1 + 0xc) = uVar4;
      } while (7 < uVar13);
    }
    uVar11 = uVar13 | 8;
    uVar4 = uVar4 | 1 << (ulong)(uVar13 & 0x1f);
    *(uint *)((long)param_1 + 0x5c) = uVar11;
    *(uint *)(param_1 + 0xc) = uVar4;
    do {
      puVar1 = (undefined1 *)param_1[8];
      if (puVar1 < (undefined1 *)param_1[9]) {
        param_1[8] = (long)(puVar1 + 1);
        *puVar1 = (char)uVar4;
        uVar11 = *(uint *)((long)param_1 + 0x5c);
        uVar4 = *(uint *)(param_1 + 0xc);
      }
      uVar4 = uVar4 >> 8;
      uVar11 = uVar11 - 8;
      *(uint *)((long)param_1 + 0x5c) = uVar11;
      *(uint *)(param_1 + 0xc) = uVar4;
    } while (7 < uVar11);
  }
  uVar13 = *(uint *)((long)param_1 + 0x5c) + 1;
  uVar11 = *(uint *)(param_1 + 0xc) |
           (uint)(param_2 == 4) << (ulong)(*(uint *)((long)param_1 + 0x5c) & 0x1f);
  *(uint *)((long)param_1 + 0x5c) = uVar13;
  *(uint *)(param_1 + 0xc) = uVar11;
  while (7 < uVar13) {
    puVar1 = (undefined1 *)param_1[8];
    if (puVar1 < (undefined1 *)param_1[9]) {
      param_1[8] = (long)(puVar1 + 1);
      *puVar1 = (char)uVar11;
      uVar13 = *(uint *)((long)param_1 + 0x5c);
      uVar11 = *(uint *)(param_1 + 0xc);
    }
    uVar11 = uVar11 >> 8;
    uVar13 = uVar13 - 8;
    *(uint *)((long)param_1 + 0x5c) = uVar13;
    *(uint *)(param_1 + 0xc) = uVar11;
  }
  lVar14 = param_1[8];
  if (bVar2) {
    iVar3 = 0;
LAB_0010a808:
    if ((uint)(*(int *)((long)param_1 + 0x24) - (int)param_1[0xb]) <=
        *(uint *)((long)param_1 + 0x2c)) {
      uVar4 = uVar13 + 2;
      param_1[8] = lVar14;
      *(uint *)((long)param_1 + 0x5c) = uVar4;
      *(uint *)(param_1 + 0xc) = uVar11;
      if (uVar13 < 6) {
LAB_0010a92c:
        uVar13 = 8;
        *(undefined4 *)((long)param_1 + 0x5c) = 8;
        do {
          puVar1 = (undefined1 *)param_1[8];
          if (puVar1 < (undefined1 *)param_1[9]) {
            param_1[8] = (long)(puVar1 + 1);
            *puVar1 = (char)uVar11;
            uVar13 = *(uint *)((long)param_1 + 0x5c);
            uVar11 = *(uint *)(param_1 + 0xc);
          }
          uVar11 = uVar11 >> 8;
          uVar13 = uVar13 - 8;
          *(uint *)((long)param_1 + 0x5c) = uVar13;
          *(uint *)(param_1 + 0xc) = uVar11;
        } while (7 < uVar13);
      }
      else {
        do {
          puVar1 = (undefined1 *)param_1[8];
          if (puVar1 < (undefined1 *)param_1[9]) {
            param_1[8] = (long)(puVar1 + 1);
            *puVar1 = (char)uVar11;
            uVar4 = *(uint *)((long)param_1 + 0x5c);
            uVar11 = *(uint *)(param_1 + 0xc);
          }
          uVar11 = uVar11 >> 8;
          uVar4 = uVar4 - 8;
          *(uint *)((long)param_1 + 0x5c) = uVar4;
          *(uint *)(param_1 + 0xc) = uVar11;
        } while (7 < uVar4);
        if (uVar4 != 0) goto LAB_0010a92c;
        uVar13 = 0;
      }
      uVar4 = uVar13 | 0x10;
      uVar11 = uVar11 | (uint)*(ushort *)((long)param_1 + 0x54) << (ulong)(uVar13 & 0x1f);
      *(uint *)((long)param_1 + 0x5c) = uVar4;
      *(uint *)(param_1 + 0xc) = uVar11;
      do {
        puVar1 = (undefined1 *)param_1[8];
        if (puVar1 < (undefined1 *)param_1[9]) {
          param_1[8] = (long)(puVar1 + 1);
          *puVar1 = (char)uVar11;
          uVar4 = *(uint *)((long)param_1 + 0x5c);
          uVar11 = *(uint *)(param_1 + 0xc);
        }
        uVar11 = uVar11 >> 8;
        uVar4 = uVar4 - 8;
        *(uint *)((long)param_1 + 0x5c) = uVar4;
        *(uint *)(param_1 + 0xc) = uVar11;
      } while (7 < uVar4);
      uVar7 = *(uint *)((long)param_1 + 0x54) ^ 0xffff;
      *(uint *)((long)param_1 + 0x54) = uVar7;
      uVar13 = uVar4 | 0x10;
      uVar11 = uVar11 | (uVar7 & 0xffff) << (ulong)(uVar4 & 0x1f);
      *(uint *)((long)param_1 + 0x5c) = uVar13;
      *(uint *)(param_1 + 0xc) = uVar11;
      do {
        puVar1 = (undefined1 *)param_1[8];
        if (puVar1 < (undefined1 *)param_1[9]) {
          param_1[8] = (long)(puVar1 + 1);
          *puVar1 = (char)uVar11;
          uVar13 = *(uint *)((long)param_1 + 0x5c);
          uVar11 = *(uint *)(param_1 + 0xc);
        }
        uVar11 = uVar11 >> 8;
        uVar13 = uVar13 - 8;
        *(uint *)((long)param_1 + 0x5c) = uVar13;
        *(uint *)(param_1 + 0xc) = uVar11;
      } while (7 < uVar13);
      uVar4 = *(uint *)((long)param_1 + 0x54) ^ 0xffff;
      *(uint *)((long)param_1 + 0x54) = uVar4;
      if (uVar4 != 0) {
        uVar4 = 0;
        do {
          uVar7 = uVar13 & 0x1f;
          uVar13 = uVar13 + 8;
          uVar11 = uVar11 | (uint)*(byte *)((long)param_1 +
                                           (ulong)((int)param_1[0xb] + uVar4 & 0x7fff) + 200) <<
                            (ulong)uVar7;
          *(uint *)((long)param_1 + 0x5c) = uVar13;
          *(uint *)(param_1 + 0xc) = uVar11;
          do {
            puVar1 = (undefined1 *)param_1[8];
            if (puVar1 < (undefined1 *)param_1[9]) {
              param_1[8] = (long)(puVar1 + 1);
              *puVar1 = (char)uVar11;
              uVar13 = *(uint *)((long)param_1 + 0x5c);
              uVar11 = *(uint *)(param_1 + 0xc);
            }
            uVar11 = uVar11 >> 8;
            uVar13 = uVar13 - 8;
            *(uint *)((long)param_1 + 0x5c) = uVar13;
            *(uint *)(param_1 + 0xc) = uVar11;
          } while (7 < uVar13);
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)((long)param_1 + 0x54));
      }
      goto LAB_0010aa98;
    }
  }
  else {
    if ((*(byte *)((long)param_1 + 0x12) >> 2 & 1) == 0) {
      bVar2 = *(uint *)((long)param_1 + 0x54) < 0x30;
    }
    else {
      bVar2 = true;
    }
    iVar3 = FUN_00115e38(param_1,bVar2);
    if ((*(uint *)((long)param_1 + 0x54) != 0) &&
       ((long)(ulong)*(uint *)((long)param_1 + 0x54) <= (param_1[8] - lVar14) + 1))
    goto LAB_0010a808;
  }
  if (iVar3 == 0) {
    param_1[8] = lVar14;
    *(uint *)((long)param_1 + 0x5c) = uVar13;
    *(uint *)(param_1 + 0xc) = uVar11;
    FUN_00115e38(param_1,1);
  }
LAB_0010aa98:
  if (param_2 != 0) {
    if (param_2 == 4) {
      if (*(int *)((long)param_1 + 0x5c) == 0) {
        uVar13 = 0;
      }
      else {
        uVar11 = *(uint *)(param_1 + 0xc);
        uVar13 = 8;
        *(undefined4 *)((long)param_1 + 0x5c) = 8;
        do {
          puVar1 = (undefined1 *)param_1[8];
          if (puVar1 < (undefined1 *)param_1[9]) {
            param_1[8] = (long)(puVar1 + 1);
            *puVar1 = (char)uVar11;
            uVar13 = *(uint *)((long)param_1 + 0x5c);
            uVar11 = *(uint *)(param_1 + 0xc);
          }
          uVar11 = uVar11 >> 8;
          uVar13 = uVar13 - 8;
          *(uint *)((long)param_1 + 0x5c) = uVar13;
          *(uint *)(param_1 + 0xc) = uVar11;
        } while (7 < uVar13);
      }
      if ((*(byte *)((long)param_1 + 0x11) >> 4 & 1) != 0) {
        uVar4 = *(uint *)(param_1 + 4);
        uVar11 = *(uint *)(param_1 + 0xc) | (uVar4 >> 0x18) << (ulong)(uVar13 & 0x1f);
        uVar13 = uVar13 | 8;
        *(uint *)((long)param_1 + 0x5c) = uVar13;
        *(uint *)(param_1 + 0xc) = uVar11;
        do {
          puVar1 = (undefined1 *)param_1[8];
          uVar7 = uVar13;
          if (puVar1 < (undefined1 *)param_1[9]) {
            param_1[8] = (long)(puVar1 + 1);
            *puVar1 = (char)uVar11;
            uVar11 = *(uint *)(param_1 + 0xc);
            uVar7 = *(uint *)((long)param_1 + 0x5c);
          }
          uVar11 = uVar11 >> 8;
          uVar13 = uVar7 - 8;
          *(uint *)((long)param_1 + 0x5c) = uVar13;
          *(uint *)(param_1 + 0xc) = uVar11;
        } while (7 < uVar13);
        uVar11 = uVar11 | (uVar4 >> 0x10 & 0xff) << (ulong)(uVar13 & 0x1f);
        *(uint *)((long)param_1 + 0x5c) = uVar7;
        *(uint *)(param_1 + 0xc) = uVar11;
        do {
          puVar1 = (undefined1 *)param_1[8];
          uVar13 = uVar7;
          if (puVar1 < (undefined1 *)param_1[9]) {
            param_1[8] = (long)(puVar1 + 1);
            *puVar1 = (char)uVar11;
            uVar11 = *(uint *)(param_1 + 0xc);
            uVar13 = *(uint *)((long)param_1 + 0x5c);
          }
          uVar11 = uVar11 >> 8;
          uVar7 = uVar13 - 8;
          *(uint *)((long)param_1 + 0x5c) = uVar7;
          *(uint *)(param_1 + 0xc) = uVar11;
        } while (7 < uVar7);
        uVar11 = uVar11 | (uVar4 >> 8 & 0xff) << (ulong)(uVar7 & 0x1f);
        *(uint *)((long)param_1 + 0x5c) = uVar13;
        *(uint *)(param_1 + 0xc) = uVar11;
        do {
          puVar1 = (undefined1 *)param_1[8];
          uVar7 = uVar13;
          if (puVar1 < (undefined1 *)param_1[9]) {
            param_1[8] = (long)(puVar1 + 1);
            *puVar1 = (char)uVar11;
            uVar11 = *(uint *)(param_1 + 0xc);
            uVar7 = *(uint *)((long)param_1 + 0x5c);
          }
          uVar11 = uVar11 >> 8;
          uVar13 = uVar7 - 8;
          *(uint *)((long)param_1 + 0x5c) = uVar13;
          *(uint *)(param_1 + 0xc) = uVar11;
        } while (7 < uVar13);
        uVar11 = uVar11 | (uVar4 & 0xff) << (ulong)(uVar13 & 0x1f);
        *(uint *)((long)param_1 + 0x5c) = uVar7;
        *(uint *)(param_1 + 0xc) = uVar11;
        do {
          puVar1 = (undefined1 *)param_1[8];
          if (puVar1 < (undefined1 *)param_1[9]) {
            param_1[8] = (long)(puVar1 + 1);
            *puVar1 = (char)uVar11;
            uVar7 = *(uint *)((long)param_1 + 0x5c);
            uVar11 = *(uint *)(param_1 + 0xc);
          }
          uVar11 = uVar11 >> 8;
          uVar7 = uVar7 - 8;
          *(uint *)((long)param_1 + 0x5c) = uVar7;
          *(uint *)(param_1 + 0xc) = uVar11;
        } while (7 < uVar7);
      }
    }
    else {
      uVar13 = *(int *)((long)param_1 + 0x5c) + 3;
      *(uint *)((long)param_1 + 0x5c) = uVar13;
      if (7 < uVar13) {
        uVar11 = *(uint *)(param_1 + 0xc);
        do {
          puVar1 = (undefined1 *)param_1[8];
          if (puVar1 < (undefined1 *)param_1[9]) {
            param_1[8] = (long)(puVar1 + 1);
            *puVar1 = (char)uVar11;
            uVar13 = *(uint *)((long)param_1 + 0x5c);
            uVar11 = *(uint *)(param_1 + 0xc);
          }
          uVar11 = uVar11 >> 8;
          uVar13 = uVar13 - 8;
          *(uint *)((long)param_1 + 0x5c) = uVar13;
          *(uint *)(param_1 + 0xc) = uVar11;
        } while (7 < uVar13);
      }
      if (uVar13 == 0) {
        uVar11 = *(uint *)(param_1 + 0xc);
        uVar13 = 0x10;
      }
      else {
        uVar11 = *(uint *)(param_1 + 0xc);
        *(undefined4 *)((long)param_1 + 0x5c) = 8;
        uVar4 = 8;
        do {
          uVar13 = uVar4;
          puVar1 = (undefined1 *)param_1[8];
          if (puVar1 < (undefined1 *)param_1[9]) {
            param_1[8] = (long)(puVar1 + 1);
            *puVar1 = (char)uVar11;
            uVar13 = *(uint *)((long)param_1 + 0x5c);
            uVar11 = *(uint *)(param_1 + 0xc);
          }
          uVar11 = uVar11 >> 8;
          uVar4 = uVar13 - 8;
          *(uint *)((long)param_1 + 0x5c) = uVar4;
          *(uint *)(param_1 + 0xc) = uVar11;
        } while (7 < uVar4);
        uVar13 = uVar13 + 8;
      }
      *(uint *)((long)param_1 + 0x5c) = uVar13;
      *(uint *)(param_1 + 0xc) = uVar11;
      do {
        puVar1 = (undefined1 *)param_1[8];
        uVar4 = uVar13;
        if (puVar1 < (undefined1 *)param_1[9]) {
          param_1[8] = (long)(puVar1 + 1);
          *puVar1 = (char)uVar11;
          uVar11 = *(uint *)(param_1 + 0xc);
          uVar4 = *(uint *)((long)param_1 + 0x5c);
        }
        uVar11 = uVar11 >> 8;
        uVar13 = uVar4 - 8;
        *(uint *)((long)param_1 + 0x5c) = uVar13;
        *(uint *)(param_1 + 0xc) = uVar11;
      } while (7 < uVar13);
      uVar11 = uVar11 | 0xffff << (ulong)(uVar13 & 0x1f);
      uVar4 = uVar4 + 8;
      *(uint *)((long)param_1 + 0x5c) = uVar4;
      *(uint *)(param_1 + 0xc) = uVar11;
      do {
        puVar1 = (undefined1 *)param_1[8];
        if (puVar1 < (undefined1 *)param_1[9]) {
          param_1[8] = (long)(puVar1 + 1);
          *puVar1 = (char)uVar11;
          uVar4 = *(uint *)((long)param_1 + 0x5c);
          uVar11 = *(uint *)(param_1 + 0xc);
        }
        uVar11 = uVar11 >> 8;
        uVar4 = uVar4 - 8;
        *(uint *)((long)param_1 + 0x5c) = uVar4;
        *(uint *)(param_1 + 0xc) = uVar11;
      } while (7 < uVar4);
    }
  }
  memset((void *)((long)param_1 + 0x81ca),0,0x240);
  param_1[6] = (long)param_1 + 0x92ab;
  param_1[7] = (long)param_1 + 0x92aa;
  *(undefined8 *)((long)param_1 + 0x8412) = 0;
  *(undefined8 *)((long)param_1 + 0x840a) = 0;
  *(undefined8 *)((long)param_1 + 0x8422) = 0;
  *(undefined8 *)((long)param_1 + 0x841a) = 0;
  lVar9 = param_1[8];
  *(undefined8 *)((long)param_1 + 0x8432) = 0;
  *(undefined8 *)((long)param_1 + 0x842a) = 0;
  *(undefined8 *)((long)param_1 + 0x8442) = 0;
  *(undefined8 *)((long)param_1 + 0x843a) = 0;
  lVar14 = DAT_00103440;
  *(int *)(param_1 + 0xb) = (int)param_1[0xb] + *(int *)((long)param_1 + 0x54);
  param_1[10] = lVar14;
  *(int *)((long)param_1 + 0x7c) = *(int *)((long)param_1 + 0x7c) + 1;
  iVar3 = (int)(lVar9 - (long)pvVar10);
  if (iVar3 != 0) {
    pcVar5 = (code *)*param_1;
    if (pcVar5 == (code *)0x0) {
      uVar6 = (ulong)iVar3;
      if (pvVar10 == (void *)((long)param_1 + 0x392aa)) {
        uVar8 = *(long *)param_1[0x14] - param_1[0x18];
        if (uVar8 <= uVar6) {
          uVar6 = uVar8;
        }
        iVar12 = (int)uVar6;
        memcpy((void *)(param_1[0x12] + param_1[0x18]),(void *)((long)param_1 + 0x392aa),
               (long)iVar12);
        param_1[0x18] = (long)iVar12 + param_1[0x18];
        if (iVar3 - iVar12 != 0) {
          *(int *)(param_1 + 0xe) = iVar12;
          *(int *)((long)param_1 + 0x74) = iVar3 - iVar12;
        }
      }
      else {
        param_1[0x18] = param_1[0x18] + uVar6;
      }
    }
    else {
      lVar14 = param_1[1];
      *(long *)param_1[0x13] = param_1[0x16] - param_1[0x11];
      iVar3 = (*pcVar5)((long)param_1 + 0x392aa,lVar9 - (long)pvVar10 & 0xffffffff,lVar14);
      if (iVar3 == 0) {
        *(undefined4 *)((long)param_1 + 0x84) = 0xffffffff;
        return 0xffffffff;
      }
    }
  }
  return *(undefined4 *)((long)param_1 + 0x74);
}


