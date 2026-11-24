// =========================================================================
// Function: CgIUY_WPGLGfmhYrtaSWIDQoCrPZiECJrRVxVieNI_
// Entry: 0x71b9d59c | Size: 4 bytes
// =========================================================================

void CgIUY_WPGLGfmhYrtaSWIDQoCrPZiECJrRVxVieNI_(void)

{
  thunk_ZXqJfnvcfugNBhbectKcQErwKgYSZROgdkCWh();
  return;
}


// =========================================================================
// Function: FUN_71ba03a8
// Entry: 0x71ba03a8 | Size: 48 bytes
// =========================================================================

uint FUN_71ba03a8(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  
  uVar1 = param_1 * 2;
  uVar2 = param_2 * 2;
  bVar4 = (param_2 & 0x7fffffff) == 0;
  bVar5 = uVar1 == 0 && bVar4;
  uVar3 = 0;
  if (uVar1 != 0 || !bVar4) {
    uVar3 = param_1 ^ param_2;
    bVar5 = uVar3 == 0;
  }
  bVar4 = -1 < (int)uVar3;
  if (bVar4) {
    param_1 = uVar1 + param_2 * -2;
    bVar5 = param_1 == 0;
  }
  if (!bVar4 || uVar1 < uVar2) {
    param_1 = ~((int)param_2 >> 0x1f);
  }
  if ((bVar4 && uVar1 >= uVar2) && !bVar5) {
    param_1 = (int)param_2 >> 0x1f;
  }
  if (!bVar5) {
    param_1 = param_1 | 1;
  }
  if (uVar1 < 0xff000001) {
    uVar1 = uVar2;
  }
  if (0xff000000 < uVar1) {
    param_1 = 1;
  }
  return param_1;
}


// =========================================================================
// Function: FUN_71ba03d8
// Entry: 0x71ba03d8 | Size: 48 bytes
// =========================================================================

uint FUN_71ba03d8(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  
  uVar1 = param_1 * 2;
  uVar2 = param_2 * 2;
  bVar4 = (param_2 & 0x7fffffff) == 0;
  bVar5 = uVar1 == 0 && bVar4;
  uVar3 = 0;
  if (uVar1 != 0 || !bVar4) {
    uVar3 = param_1 ^ param_2;
    bVar5 = uVar3 == 0;
  }
  bVar4 = -1 < (int)uVar3;
  if (bVar4) {
    param_1 = uVar1 + param_2 * -2;
    bVar5 = param_1 == 0;
  }
  if (!bVar4 || uVar1 < uVar2) {
    param_1 = ~((int)param_2 >> 0x1f);
  }
  if ((bVar4 && uVar1 >= uVar2) && !bVar5) {
    param_1 = (int)param_2 >> 0x1f;
  }
  if (!bVar5) {
    param_1 = param_1 | 1;
  }
  if (uVar1 < 0xff000001) {
    uVar1 = uVar2;
  }
  if (0xff000000 < uVar1) {
    param_1 = 0xffffffff;
  }
  return param_1;
}


// =========================================================================
// Function: FUN_71ba0408
// Entry: 0x71ba0408 | Size: 28 bytes
// =========================================================================

bool FUN_71ba0408(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_1 * 2;
  if ((uint)(param_1 * 2) < 0xff000001) {
    uVar1 = param_2 * 2;
  }
  return 0xff000000 < uVar1;
}


// =========================================================================
// Function: FUN_71ba0440
// Entry: 0x71ba0440 | Size: 44 bytes
// =========================================================================

int FUN_71ba0440(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = FUN_71ba0484((param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f),
                       (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f));
  uVar1 = (int)(param_1 ^ param_2) >> 0x1f;
  return (uVar2 ^ uVar1) - uVar1;
}


// =========================================================================
// Function: FUN_71ba0484
// Entry: 0x71ba0484 | Size: 72 bytes
// =========================================================================

void FUN_71ba0484(uint param_1,uint param_2)

{
  if (param_2 == 0) {
    FUN_71ba2cd4(0);
    return;
  }
  if (param_2 != 1) {
    if (param_2 <= param_1) {
                    /* WARNING: Could not recover jumptable at 0x71ba04b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_71ba0640 + (LZCOUNT(param_2) - LZCOUNT(param_1)) * -0xc))();
      return;
    }
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_71ba0670
// Entry: 0x71ba0670 | Size: 1056 bytes
// =========================================================================

ulonglong FUN_71ba0670(uint param_1,uint param_2,uint param_3,uint param_4)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  
  uVar8 = param_2 & 0x7fffffff;
  uVar13 = param_4 & 0x7fffffff;
  if ((uVar8 + 0x80100000 < 0x80100001 && (param_1 != 0) <= uVar8) ||
     (uVar13 + 0x80100000 < 0x80100001 && (param_3 != 0) <= uVar13)) {
    if (0x7ff00000 < uVar8 || uVar8 + 0x80100000 < (uint)(param_1 != 0)) {
      return CONCAT44(param_2,param_1) | 0x8000000000000;
    }
    if (0x7ff00000 < uVar13 || uVar13 + 0x80100000 < (uint)(param_3 != 0)) {
      return CONCAT44(param_4,param_3) | 0x8000000000000;
    }
    if (param_1 == 0 && uVar8 == 0x7ff00000) {
      uVar14 = CONCAT44(param_2,param_1);
      if (param_3 == param_1 && (param_4 ^ param_2) == 0x80000000) {
        uVar14 = 0x7ff8000000000000;
      }
      return uVar14;
    }
    if (param_3 == 0 && uVar13 == 0x7ff00000) {
      return CONCAT44(param_4,param_3);
    }
    if (param_1 == 0 && uVar8 == 0) {
      if (param_3 != 0 || uVar13 != 0) {
        return CONCAT44(param_4,param_3);
      }
      return CONCAT44(param_4 & param_2,param_3 & param_1);
    }
    if (param_3 == 0 && uVar13 == 0) {
      return CONCAT44(param_2,param_1);
    }
  }
  uVar5 = param_4;
  uVar12 = param_2;
  uVar4 = param_1;
  if (uVar8 <= uVar13 && (uint)(param_3 <= param_1) <= uVar8 - uVar13) {
    uVar5 = param_2;
    uVar12 = param_4;
    uVar4 = param_3;
    param_3 = param_1;
  }
  uVar10 = (uVar5 & 0x7fffffff) >> 0x14;
  uVar13 = (uVar12 & 0x7fffffff) >> 0x14;
  uVar8 = uVar12 & 0xfffff;
  if (uVar13 == 0) {
    iVar7 = LZCOUNT(uVar8);
    if (uVar8 == 0) {
      iVar7 = LZCOUNT(uVar4) + 0x20;
    }
    uVar3 = iVar7 - 0x2b;
    uVar8 = uVar4 >> (0x2bU - iVar7 & 0xff) | uVar8 << (iVar7 - 0xbU & 0xff);
    uVar13 = 0xc - iVar7;
    if (-1 < (int)uVar3) {
      uVar8 = uVar4 << (uVar3 & 0xff);
    }
    uVar4 = uVar4 << (iVar7 - 0xbU & 0xff);
    if (-1 < (int)uVar3) {
      uVar4 = 0;
    }
  }
  uVar3 = uVar5 & 0xfffff;
  if (uVar10 == 0) {
    uVar5 = uVar5 & 0xfffff;
    iVar7 = LZCOUNT(uVar5);
    if (uVar5 == 0) {
      iVar7 = LZCOUNT(param_3) + 0x20;
    }
    uVar9 = iVar7 - 0x2b;
    uVar3 = param_3 >> (0x2bU - iVar7 & 0xff) | uVar5 << (iVar7 - 0xbU & 0xff);
    uVar10 = 0xc - iVar7;
    if (-1 < (int)uVar9) {
      uVar3 = param_3 << (uVar9 & 0xff);
    }
    param_3 = param_3 << (iVar7 - 0xbU & 0xff);
    if (-1 < (int)uVar9) {
      param_3 = 0;
    }
  }
  uVar5 = param_3 << 3;
  uVar3 = uVar3 << 3 | param_3 >> 0x1d | 0x800000;
  uVar10 = uVar13 - uVar10;
  if (uVar10 != 0) {
    if (uVar10 < 0x40) {
      uVar6 = 0x40 - uVar10;
      uVar11 = 0x20 - uVar10;
      uVar9 = uVar5 >> (0x20 - uVar6 & 0xff) | uVar3 << (uVar6 & 0xff);
      iVar7 = uVar5 << (uVar6 & 0xff);
      if (-1 < (int)uVar11) {
        iVar7 = 0;
        uVar9 = uVar5 << (uVar11 & 0xff);
      }
      uVar6 = uVar10 - 0x20;
      uVar5 = uVar5 >> (uVar10 & 0xff) | uVar3 << (uVar11 & 0xff);
      if (-1 < (int)uVar6) {
        uVar5 = uVar3 >> (uVar6 & 0xff);
      }
      uVar3 = uVar3 >> (uVar10 & 0xff);
      uVar5 = uVar5 | (iVar7 != 0 || uVar9 != 0);
      if (-1 < (int)uVar6) {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
      uVar5 = 1;
    }
  }
  uVar8 = uVar8 << 3 | uVar4 >> 0x1d | 0x800000;
  uVar12 = uVar12 & 0x80000000;
  uVar4 = uVar4 * 8;
  if ((int)(param_4 ^ param_2) < 0) {
    uVar9 = uVar4 - uVar5;
    uVar10 = uVar8 - (uVar3 + (uVar4 < uVar5));
    if (uVar4 == uVar5 && uVar8 == uVar3) {
      return 0;
    }
    if (uVar10 >> 0x17 != 0) goto LAB_71ba08cc;
    iVar7 = LZCOUNT(uVar10);
    if (uVar10 == 0) {
      iVar7 = LZCOUNT(uVar9) + 0x20;
    }
    uVar4 = iVar7 - 8;
    uVar8 = iVar7 - 0x28;
    uVar13 = uVar13 - uVar4;
    uVar10 = uVar9 >> (0x28U - iVar7 & 0xff) | uVar10 << (uVar4 & 0xff);
    if (-1 < (int)uVar8) {
      uVar10 = uVar9 << (uVar8 & 0xff);
    }
    uVar9 = uVar9 << (uVar4 & 0xff);
    if (-1 < (int)uVar8) {
      uVar9 = 0;
    }
  }
  else {
    uVar9 = uVar5 + uVar4;
    uVar10 = uVar3 + uVar8 + (uint)CARRY4(uVar5,uVar4);
    if ((uVar10 & 0x1000000) != 0) {
      bVar1 = (byte)uVar10;
      uVar10 = uVar10 >> 1;
      uVar13 = uVar13 + 1;
      uVar9 = (uint)(bVar1 & 1) << 0x1f | uVar9 >> 1 | uVar5 & 1;
    }
LAB_71ba08cc:
    if (0x7fe < (int)uVar13) {
      return (ulonglong)(uVar12 | 0x7ff00000) << 0x20;
    }
  }
  if ((int)uVar13 < 1) {
    uVar4 = 1 - uVar13;
    uVar5 = uVar13 + 0x3f;
    uVar8 = uVar9 >> (uVar4 & 0xff) | uVar10 << (0x20 - uVar4 & 0xff);
    uVar3 = -uVar13 - 0x1f;
    if (-1 < (int)uVar3) {
      uVar8 = uVar10 >> (uVar3 & 0xff);
    }
    uVar11 = uVar13 + 0x1f;
    uVar6 = uVar9 >> (uVar3 & 0xff) | uVar10 << (uVar5 & 0xff);
    uVar10 = uVar10 >> (uVar4 & 0xff);
    uVar13 = 0;
    if (-1 < (int)uVar11) {
      uVar6 = uVar9 << (uVar11 & 0xff);
    }
    iVar7 = uVar9 << (uVar5 & 0xff);
    if (-1 < (int)uVar11) {
      iVar7 = 0;
    }
    uVar9 = uVar8 | (iVar7 != 0 || uVar6 != 0);
    if (-1 < (int)uVar3) {
      uVar10 = 0;
    }
  }
  uVar4 = uVar9 >> 3 | uVar10 << 0x1d;
  uVar8 = uVar9 & 7;
  uVar13 = (uVar10 & 0x7fffff) >> 3 | uVar13 << 0x14 | uVar12;
  iVar7 = FUN_71ba0ab0();
  if (iVar7 == 2) {
    bVar2 = uVar12 == 0 && uVar8 != 0;
LAB_71ba0a40:
    uVar12 = uVar4 + bVar2;
    uVar5 = uVar13 + CARRY4(uVar4,(uint)bVar2);
joined_r0x71ba0a4c:
    if (uVar8 == 0) goto LAB_71ba0a54;
  }
  else {
    if (iVar7 == 1) {
      bVar2 = uVar12 != 0 && uVar8 != 0;
      goto LAB_71ba0a40;
    }
    uVar12 = uVar4;
    uVar5 = uVar13;
    if (iVar7 != 0) goto joined_r0x71ba0a4c;
    uVar5 = uVar13 + (0xfffffffe < uVar4);
    uVar12 = uVar4 + 1;
    if (uVar8 < 5) {
      uVar5 = uVar13;
      uVar12 = uVar4;
    }
    if (uVar8 != 4) goto joined_r0x71ba0a4c;
    uVar8 = uVar9 >> 3 & 1;
    uVar12 = uVar4 + uVar8;
    uVar5 = uVar13 + CARRY4(uVar4,uVar8);
  }
  FUN_71ba0b0c();
LAB_71ba0a54:
  return CONCAT44(uVar5,uVar12);
}


// =========================================================================
// Function: FUN_71ba0ab0
// Entry: 0x71ba0ab0 | Size: 52 bytes
// =========================================================================

undefined4 FUN_71ba0ab0(void)

{
  undefined4 uVar1;
  uint uVar2;
  uint in_fpscr;
  
  uVar2 = ((in_fpscr & 0xffffff) >> 0x16) - 1;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = *(undefined4 *)(&DAT_7009de44 + uVar2 * 4);
  }
  return uVar1;
}


// =========================================================================
// Function: FUN_71ba0b0c
// Entry: 0x71ba0b0c | Size: 20 bytes
// =========================================================================

undefined4 FUN_71ba0b0c(void)

{
  return 0;
}


// =========================================================================
// Function: FUN_71ba0b38
// Entry: 0x71ba0b38 | Size: 684 bytes
// =========================================================================

uint FUN_71ba0b38(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  uVar4 = param_1 & 0x7fffffff;
  uVar1 = 0x80800000;
  uVar3 = param_2 & 0x7fffffff;
  bVar9 = 0x80800000 < uVar4 + 0x80800000;
  if (bVar9) {
    uVar1 = uVar3 + 0x80800000;
  }
  if (!bVar9 || uVar1 < 0x80800001) {
    if (0x7f800000 < uVar4) {
      return param_1 | 0x400000;
    }
    if (0x7f800000 < uVar3) {
      return param_2 | 0x400000;
    }
    if (uVar4 == 0x7f800000) {
      if ((param_2 ^ param_1) == 0x80000000) {
        param_1 = 0x7fc00000;
      }
      return param_1;
    }
    if (uVar3 == 0x7f800000) {
      return param_2;
    }
    if (uVar4 == 0) {
      if (uVar3 != 0) {
        return param_2;
      }
      return param_2 & param_1;
    }
    if (uVar3 == 0) {
      return param_1;
    }
  }
  uVar1 = param_2;
  if (uVar4 < uVar3) {
    uVar1 = param_1;
  }
  uVar5 = 0;
  uVar2 = (uVar1 & 0x7fffffff) >> 0x17;
  iVar8 = LZCOUNT(uVar1 & 0x7fffff);
  if (uVar2 == 0) {
    uVar5 = iVar8 - 8;
  }
  uVar6 = 0;
  uVar5 = ((uVar1 & 0x7fffff) << (uVar5 & 0xff)) << 3 | 0x4000000;
  uVar1 = param_1;
  if (uVar4 < uVar3) {
    uVar1 = param_2;
  }
  uVar3 = (uVar1 & 0x7fffffff) >> 0x17;
  iVar7 = LZCOUNT(uVar1 & 0x7fffff);
  if (uVar3 == 0) {
    uVar6 = iVar7 - 8;
  }
  if (uVar2 == 0) {
    uVar2 = 9 - iVar8;
  }
  if (uVar3 == 0) {
    uVar3 = 9 - iVar7;
  }
  uVar4 = uVar5;
  if (uVar3 != uVar2) {
    uVar2 = uVar3 - uVar2;
    uVar4 = 1;
    if ((uVar2 < 0x20) && (uVar4 = uVar5 >> (uVar2 & 0xff), uVar5 << (0x20 - uVar2 & 0xff) != 0)) {
      uVar4 = uVar5 >> (uVar2 & 0xff) | 1;
    }
  }
  uVar2 = ((uVar1 & 0x7fffff) << (uVar6 & 0xff)) << 3 | 0x4000000;
  uVar1 = uVar1 & 0x80000000;
  if ((int)(param_2 ^ param_1) < 0) {
    uVar2 = uVar2 - uVar4;
    if (uVar2 == 0) {
      return 0;
    }
    if (0x3ffffff < uVar2) goto LAB_71ba0ca8;
    uVar3 = uVar3 - (LZCOUNT(uVar2) - 5U);
    uVar2 = uVar2 << (LZCOUNT(uVar2) - 5U & 0xff);
  }
  else {
    uVar2 = uVar4 + uVar2;
    if ((uVar2 & 0x8000000) != 0) {
      uVar3 = uVar3 + 1;
      uVar2 = uVar4 & 1 | uVar2 >> 1;
    }
LAB_71ba0ca8:
    if (0xfe < (int)uVar3) {
      return uVar1 | 0x7f800000;
    }
  }
  if ((int)uVar3 < 1) {
    uVar4 = uVar2 >> (1 - uVar3 & 0xff);
    if (uVar2 << (uVar3 + 0x1f & 0xff) != 0) {
      uVar4 = uVar2 >> (1 - uVar3 & 0xff) | 1;
    }
    uVar3 = 0;
    uVar2 = uVar4;
  }
  uVar4 = uVar2 & 7;
  uVar3 = uVar2 >> 3 & 0x7fffff | uVar3 << 0x17 | uVar1;
  iVar8 = FUN_71ba0ab0();
  if (iVar8 == 2) {
    bVar9 = uVar1 == 0 && uVar4 != 0;
LAB_71ba0da0:
    uVar1 = uVar3 + bVar9;
  }
  else {
    if (iVar8 == 1) {
      bVar9 = uVar1 != 0 && uVar4 != 0;
      goto LAB_71ba0da0;
    }
    uVar1 = uVar3;
    if (iVar8 == 0) {
      if (4 < uVar4) {
        uVar1 = uVar3 + 1;
      }
      if (uVar4 == 4) {
        uVar1 = uVar3 + (uVar2 >> 3 & 1);
        goto LAB_71ba0dac;
      }
    }
  }
  if (uVar4 == 0) {
    return uVar1;
  }
LAB_71ba0dac:
  FUN_71ba0b0c();
  return uVar1;
}


// =========================================================================
// Function: FUN_71ba0e04
// Entry: 0x71ba0e04 | Size: 140 bytes
// =========================================================================

undefined4 FUN_71ba0e04(uint param_1,uint param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_2 & 0x7fffffff;
  uVar1 = 1;
  if ((uVar3 < 0x7ff00000 || 0x7ff00000 - uVar3 < (uint)(param_1 == 0)) &&
     (uVar2 = param_4 & 0x7fffffff, uVar2 < 0x7ff00000 || 0x7ff00000 - uVar2 < (uint)(param_3 == 0))
     ) {
    if ((param_3 == 0 && param_1 == 0) && (uVar2 == 0 && uVar3 == 0)) {
      return 0;
    }
    if ((int)(param_4 & param_2) < 0) {
      if ((int)(param_4 - (param_2 + (param_3 < param_1))) < 0 !=
          (SBORROW4(param_4,param_2) != SBORROW4(param_4 - param_2,(uint)(param_3 < param_1)))) {
        return 0xffffffff;
      }
    }
    else if ((int)(param_2 - (param_4 + (param_1 < param_3))) < 0 !=
             (SBORROW4(param_2,param_4) != SBORROW4(param_2 - param_4,(uint)(param_1 < param_3)))) {
      return 0xffffffff;
    }
    uVar1 = 0;
    if (param_1 != param_3 || param_2 != param_4) {
      uVar1 = 1;
    }
  }
  return uVar1;
}


// =========================================================================
// Function: FUN_71ba0ea8
// Entry: 0x71ba0ea8 | Size: 132 bytes
// =========================================================================

undefined4 FUN_71ba0ea8(uint param_1,uint param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_2 & 0x7fffffff;
  uVar1 = 0xffffffff;
  if ((uVar3 < 0x7ff00000 || 0x7ff00000 - uVar3 < (uint)(param_1 == 0)) &&
     (uVar2 = param_4 & 0x7fffffff, uVar2 < 0x7ff00000 || 0x7ff00000 - uVar2 < (uint)(param_3 == 0))
     ) {
    if ((param_3 == 0 && param_1 == 0) && (uVar2 == 0 && uVar3 == 0)) {
      return 0;
    }
    if ((int)(param_4 & param_2) < 0) {
      if ((int)(param_4 - (param_2 + (param_3 < param_1))) < 0 !=
          (SBORROW4(param_4,param_2) != SBORROW4(param_4 - param_2,(uint)(param_3 < param_1)))) {
        return 0xffffffff;
      }
    }
    else if ((int)(param_2 - (param_4 + (param_1 < param_3))) < 0 !=
             (SBORROW4(param_2,param_4) != SBORROW4(param_2 - param_4,(uint)(param_1 < param_3)))) {
      return 0xffffffff;
    }
    uVar1 = 0;
    if (param_1 != param_3 || param_2 != param_4) {
      uVar1 = 1;
    }
  }
  return uVar1;
}


// =========================================================================
// Function: FUN_71ba0f44
// Entry: 0x71ba0f44 | Size: 60 bytes
// =========================================================================

bool FUN_71ba0f44(int param_1,uint param_2,int param_3,uint param_4)

{
  return 0x7fefffff < (param_2 & 0x7fffffff) &&
         (uint)(param_1 == 0) <= 0x7ff00000 - (param_2 & 0x7fffffff) ||
         0x7fefffff < (param_4 & 0x7fffffff) &&
         (uint)(param_3 == 0) <= 0x7ff00000 - (param_4 & 0x7fffffff);
}


// =========================================================================
// Function: FUN_71ba0f98
// Entry: 0x71ba0f98 | Size: 1064 bytes
// =========================================================================

ulonglong FUN_71ba0f98(uint param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  byte bVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  bool bVar18;
  ulonglong uVar19;
  int iStack_30;
  
  uVar17 = (param_4 & 0x7fffffff) >> 0x14;
  uVar13 = (param_2 & 0x7fffffff) >> 0x14;
  uVar9 = 0x7ff;
  uVar15 = (param_4 ^ param_2) & 0x80000000;
  bVar18 = 0xfffff801 < uVar13 - 0x7ff;
  uVar11 = param_4 & 0xfffff;
  if (bVar18) {
    uVar9 = uVar17 - 0x7ff;
  }
  uVar14 = param_2 & 0xfffff;
  if (bVar18 && 0xfffff801 < uVar9) {
    iStack_30 = 0;
LAB_71ba1018:
    uVar11 = uVar11 | 0x100000;
    uVar9 = param_3 >> 0x15 | uVar11 << 0xb;
    lVar1 = (ulonglong)(0x7504f333 - uVar9) *
            (ulonglong)(uint)-(int)((ulonglong)(0x7504f333 - uVar9) * (ulonglong)uVar9 >> 0x20);
    uVar7 = (uint)lVar1 >> 0x1f | (int)((ulonglong)lVar1 >> 0x20) << 1;
    lVar1 = (ulonglong)(uint)-(int)((ulonglong)uVar9 * (ulonglong)uVar7 >> 0x20) * (ulonglong)uVar7;
    uVar7 = (uint)lVar1 >> 0x1f | (int)((ulonglong)lVar1 >> 0x20) << 1;
    lVar1 = (ulonglong)(uint)-(int)((ulonglong)uVar9 * (ulonglong)uVar7 >> 0x20) * (ulonglong)uVar7;
    uVar7 = ((uint)lVar1 >> 0x1f | (int)((ulonglong)lVar1 >> 0x20) << 1) - 1;
    lVar1 = (ulonglong)uVar7 * (ulonglong)uVar9 +
            ((ulonglong)uVar7 * (ulonglong)(param_3 << 0xb) >> 0x20);
    uVar9 = (uint)lVar1;
    lVar1 = (ulonglong)-((int)((ulonglong)lVar1 >> 0x20) + (uint)(1 < uVar9)) * (ulonglong)uVar7;
    uVar10 = (uint)lVar1;
    lVar4 = (longlong)((ulonglong)uVar7 * (ulonglong)(1 - uVar9)) >> 0x1f;
    uVar5 = (uint)lVar4;
    uVar9 = uVar10 * 2;
    uVar6 = uVar5 + uVar9;
    uVar7 = param_1 << 1;
    uVar12 = uVar6 - 0xe1;
    uVar9 = ((((int)((ulonglong)lVar1 >> 0x20) << 1 | uVar10 >> 0x1f) -
             (int)((ulonglong)lVar4 >> 0x20)) + (uint)CARRY4(uVar5,uVar9)) - (uint)(uVar6 < 0xe1);
    uVar10 = (uVar14 | 0x100000) << 1 | param_1 >> 0x1f;
    uVar19 = (ulonglong)uVar7 * (ulonglong)uVar9;
    uVar2 = (ulonglong)uVar10 * (ulonglong)uVar12;
    uVar5 = (uint)uVar2;
    lVar1 = (ulonglong)uVar9 * (ulonglong)uVar10 + (uVar19 >> 0x20) + (uVar2 >> 0x20);
    uVar6 = (uint)lVar1;
    uVar12 = (uint)((ulonglong)uVar7 * (ulonglong)uVar12 >> 0x20);
    uVar9 = (uint)CARRY4(uVar12,uVar5);
    bVar18 = CARRY4(uVar12 + uVar5,(uint)uVar19);
    uVar5 = uVar6 + uVar9 + (uint)bVar18;
    uVar9 = (int)((ulonglong)lVar1 >> 0x20) +
            (uint)(CARRY4(uVar6,uVar9) || CARRY4(uVar6 + uVar9,(uint)bVar18));
    iStack_30 = iStack_30 + (uVar13 - uVar17);
    if (uVar9 >> 0x15 == 0) {
      iVar8 = (int)((ulonglong)param_3 * (ulonglong)uVar5);
      iVar16 = param_1 * 0x200000 -
               (uVar9 * param_3 +
                uVar5 * uVar11 + (int)((ulonglong)param_3 * (ulonglong)uVar5 >> 0x20) +
               (uint)(iVar8 != 0));
      iStack_30 = iStack_30 + 0x3fe;
    }
    else {
      bVar3 = (byte)uVar9;
      uVar9 = uVar9 >> 1;
      uVar5 = (uint)(bVar3 & 1) << 0x1f | uVar5 >> 1;
      iVar8 = (int)((ulonglong)param_3 * (ulonglong)uVar5);
      iStack_30 = iStack_30 + 0x3ff;
      iVar16 = param_1 * 0x100000 -
               (uVar9 * param_3 +
                uVar5 * uVar11 + (int)((ulonglong)param_3 * (ulonglong)uVar5 >> 0x20) +
               (uint)(iVar8 != 0));
      uVar10 = uVar14 | 0x100000;
      uVar7 = param_1;
    }
    if (iStack_30 < 0x7ff) {
      if (iStack_30 < 1) {
        if (iStack_30 < -0x34) {
          return (ulonglong)uVar15 << 0x20;
        }
        uVar17 = 1 - iStack_30;
        uVar13 = uVar9 >> (uVar17 & 0xff);
        uVar5 = uVar5 >> (uVar17 & 0xff) | uVar9 << (0x20 - uVar17 & 0xff);
        if (-1 < (int)(-iStack_30 - 0x1fU)) {
          uVar13 = 0;
          uVar5 = uVar9 >> (-iStack_30 - 0x1fU & 0xff);
        }
        uVar14 = (uint)((ulonglong)uVar5 * (ulonglong)param_3);
        uVar9 = iStack_30 + 0x14;
        uVar17 = uVar7 >> (-iStack_30 - 0x14U & 0xff) | uVar10 << (iStack_30 + 0x34U & 0xff);
        if (-1 < (int)uVar9) {
          uVar17 = uVar7 << (uVar9 & 0xff);
        }
        uVar7 = uVar7 << (iStack_30 + 0x34U & 0xff);
        if (-1 < (int)uVar9) {
          uVar7 = 0;
        }
        uVar9 = uVar7 + uVar14 * -2;
        uVar17 = uVar17 - (((uVar11 * uVar5 +
                            param_3 * uVar13 + (int)((ulonglong)uVar5 * (ulonglong)param_3 >> 0x20))
                            * 2 | uVar14 >> 0x1f) + (uint)(uVar7 < uVar14 * 2));
      }
      else {
        uVar17 = iVar16 << 1 | (uint)-iVar8 >> 0x1f;
        uVar13 = uVar9 & 0xfffff | iStack_30 << 0x14;
        uVar9 = iVar8 * -2;
      }
      uVar17 = uVar17 + CARRY4(uVar5 & 1,uVar9);
      bVar18 = uVar11 - uVar17 < (uint)((uVar5 & 1) + uVar9 <= param_3);
      uVar9 = uVar13 + (0xfffffffe < uVar5);
      if (uVar17 < uVar11 || bVar18) {
        uVar9 = uVar13;
      }
      uVar13 = uVar5 + 1;
      if (uVar17 < uVar11 || bVar18) {
        uVar13 = uVar5;
      }
      return CONCAT44(uVar9 | uVar15,uVar13);
    }
    return (ulonglong)(uVar15 | 0x7ff00000) << 0x20;
  }
  uVar9 = param_2 & 0x7fffffff;
  if (0x7ff00000 < uVar9 || uVar9 + 0x80100000 < (uint)(param_1 != 0)) {
    return CONCAT44(param_2,param_1) | 0x8000000000000;
  }
  uVar7 = param_4 & 0x7fffffff;
  if (0x7ff00000 < uVar7 || uVar7 + 0x80100000 < (uint)(param_3 != 0)) {
    return CONCAT44(param_4,param_3) | 0x8000000000000;
  }
  if (param_1 == 0 && uVar9 == 0x7ff00000) {
    if (param_3 == 0 && uVar7 == 0x7ff00000) {
      return 0x7ff8000000000000;
    }
  }
  else {
    if (param_3 == 0 && uVar7 == 0x7ff00000) {
      return (ulonglong)uVar15 << 0x20;
    }
    if (param_1 == 0 && uVar9 == 0) {
      uVar19 = (ulonglong)uVar15 << 0x20;
      if (param_3 == 0 && uVar7 == 0) {
        uVar19 = 0x7ff8000000000000;
      }
      return uVar19;
    }
    if (param_3 != 0 || uVar7 != 0) {
      iStack_30 = 0;
      if (uVar9 >> 0x14 == 0) {
        iStack_30 = LZCOUNT(uVar14);
        if (uVar14 == 0) {
          iStack_30 = LZCOUNT(param_1) + 0x20;
        }
        uVar14 = param_1 >> (0x2bU - iStack_30 & 0xff) | uVar14 << (iStack_30 - 0xbU & 0xff);
        uVar9 = iStack_30 - 0x2b;
        if (-1 < (int)uVar9) {
          uVar14 = param_1 << (uVar9 & 0xff);
        }
        param_1 = param_1 << (iStack_30 - 0xbU & 0xff);
        iStack_30 = 0xc - iStack_30;
        if (-1 < (int)uVar9) {
          param_1 = 0;
        }
      }
      if (uVar7 >> 0x14 == 0) {
        iVar8 = LZCOUNT(uVar11);
        if (uVar11 == 0) {
          iVar8 = LZCOUNT(param_3) + 0x20;
        }
        uVar11 = param_3 >> (0x2bU - iVar8 & 0xff) | uVar11 << (iVar8 - 0xbU & 0xff);
        uVar9 = iVar8 - 0x2b;
        iStack_30 = iVar8 + iStack_30 + -0xc;
        if (-1 < (int)uVar9) {
          uVar11 = param_3 << (uVar9 & 0xff);
        }
        param_3 = param_3 << (iVar8 - 0xbU & 0xff);
        if (-1 < (int)uVar9) {
          param_3 = 0;
        }
      }
      goto LAB_71ba1018;
    }
  }
  return (ulonglong)(uVar15 | 0x7ff00000) << 0x20;
}


// =========================================================================
// Function: FUN_71ba13e0
// Entry: 0x71ba13e0 | Size: 572 bytes
// =========================================================================

uint FUN_71ba13e0(uint param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  
  iVar6 = -0xff;
  uVar7 = (param_1 >> 0x17 & 0xff) - 0xff;
  bVar11 = 0xffffff01 < uVar7;
  bVar10 = uVar7 == 0xffffff02;
  if (bVar11) {
    uVar7 = param_2 >> 0x17;
  }
  if (bVar11) {
    uVar7 = (uVar7 & 0xff) - 0xff;
  }
  uVar9 = (param_2 ^ param_1) & 0x80000000;
  uVar5 = param_2 & 0x7fffff;
  uVar3 = param_1 & 0x7fffff;
  if (bVar11) {
    iVar6 = 0;
    bVar10 = uVar7 == 0xffffff01;
  }
  if ((bVar11 && 0xffffff00 < uVar7) && !bVar10) {
LAB_71ba14d4:
    uVar5 = uVar5 | 0x800000;
    uVar2 = uVar5 * -0x100 + 0x7504f333;
    uVar7 = uVar5 << 8;
    iVar6 = iVar6 + (((param_1 & 0x7fffffff) >> 0x17) - ((param_2 & 0x7fffffff) >> 0x17));
    lVar1 = (ulonglong)uVar2 * (ulonglong)(uint)-(int)((ulonglong)uVar7 * (ulonglong)uVar2 >> 0x20);
    uVar2 = (uint)lVar1 >> 0x1f | (int)((ulonglong)lVar1 >> 0x20) << 1;
    lVar1 = (ulonglong)(uint)-(int)((ulonglong)uVar7 * (ulonglong)uVar2 >> 0x20) * (ulonglong)uVar2;
    uVar2 = (uint)lVar1 >> 0x1f | (int)((ulonglong)lVar1 >> 0x20) << 1;
    lVar1 = (ulonglong)(uint)-(int)((ulonglong)uVar7 * (ulonglong)uVar2 >> 0x20) * (ulonglong)uVar2;
    uVar7 = (uVar3 | 0x800000) << 1;
    uVar2 = (uint)((ulonglong)uVar7 *
                   (ulonglong)(((uint)lVar1 >> 0x1f | (int)((ulonglong)lVar1 >> 0x20) << 1) - 0xc)
                  >> 0x20);
    if (uVar2 >> 0x18 == 0) {
      iVar6 = iVar6 + 0x7e;
      iVar4 = uVar3 * 0x1000000 - uVar5 * uVar2;
    }
    else {
      uVar2 = uVar2 >> 1;
      iVar6 = iVar6 + 0x7f;
      iVar4 = uVar3 * 0x800000 - uVar2 * uVar5;
      uVar7 = uVar3 | 0x800000;
    }
    if (iVar6 < 0xff) {
      if (iVar6 < 1) {
        if (iVar6 < -0x17) {
          return uVar9;
        }
        uVar2 = uVar2 >> (1U - iVar6 & 0xff);
        iVar4 = (uVar7 << (iVar6 + 0x17U & 0xff)) + uVar5 * uVar2 * -2;
      }
      else {
        uVar2 = uVar2 & 0x7fffff | iVar6 << 0x17;
        iVar4 = iVar4 << 1;
      }
      if (uVar5 < (uVar2 & 1) + iVar4) {
        uVar2 = uVar2 + 1;
      }
      return uVar2 | uVar9;
    }
    return uVar9 | 0x7f800000;
  }
  uVar7 = param_1 & 0x7fffffff;
  if (0x7f800000 < uVar7) {
    return param_1 | 0x400000;
  }
  uVar2 = param_2 & 0x7fffffff;
  if (0x7f800000 < uVar2) {
    return param_2 | 0x400000;
  }
  if (uVar7 == 0x7f800000) {
    if (uVar2 == 0x7f800000) {
      return 0x7fc00000;
    }
  }
  else {
    if (uVar2 == 0x7f800000) {
      return uVar9;
    }
    if (uVar7 == 0) {
      if (uVar2 == 0) {
        uVar9 = 0x7fc00000;
      }
      return uVar9;
    }
    if (uVar2 != 0) {
      uVar8 = 0;
      iVar6 = 0;
      if (uVar7 < 0x800000) {
        uVar8 = LZCOUNT(uVar3) - 8;
        iVar6 = 9 - LZCOUNT(uVar3);
      }
      uVar3 = uVar3 << (uVar8 & 0xff);
      if (uVar2 >> 0x17 == 0) {
        iVar6 = LZCOUNT(uVar5) + iVar6 + -9;
        uVar5 = uVar5 << (LZCOUNT(uVar5) - 8U & 0xff);
      }
      goto LAB_71ba14d4;
    }
  }
  return uVar9 | 0x7f800000;
}


// =========================================================================
// Function: FUN_71ba1638
// Entry: 0x71ba1638 | Size: 164 bytes
// =========================================================================

undefined8 FUN_71ba1638(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = (param_1 & 0x7fffffff) >> 0x17;
  uVar4 = param_1 & 0x7fffff;
  if (uVar1 == 0) {
    if (uVar4 == 0) {
      iVar3 = 0;
      uVar4 = 0;
      iVar5 = 0;
    }
    else {
      iVar2 = LZCOUNT(uVar4);
      iVar5 = 0x389 - iVar2;
      iVar3 = uVar4 << iVar2 + 0x15;
      uVar1 = uVar4 >> (0xbU - iVar2 & 0xff);
      if (-1 < (int)(iVar2 - 0xbU)) {
        iVar3 = 0;
        uVar1 = uVar4 << (iVar2 - 0xbU & 0xff);
      }
      uVar4 = uVar1 ^ 0x100000;
    }
  }
  else if (uVar1 == 0xff) {
    uVar4 = uVar4 >> 3;
    iVar3 = param_1 << 0x1d;
    iVar5 = 0x7ff;
  }
  else {
    iVar5 = (param_1 >> 0x17 & 0xff) + 0x380;
    uVar4 = uVar4 >> 3;
    iVar3 = param_1 << 0x1d;
  }
  return CONCAT44(param_1 & 0x80000000 | iVar5 << 0x14 | uVar4,iVar3);
}


// =========================================================================
// Function: FUN_71ba16f4
// Entry: 0x71ba16f4 | Size: 48 bytes
// =========================================================================

undefined8 FUN_71ba16f4(undefined4 param_1,undefined4 param_2)

{
  double dVar1;
  undefined8 uVar2;
  
  if ((double)CONCAT44(param_2,param_1) < 0.0) {
    dVar1 = -(double)CONCAT44(param_2,param_1);
    uVar2 = FUN_71ba1838(SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
    return CONCAT44(-((int)((ulonglong)uVar2 >> 0x20) + (uint)((int)uVar2 != 0)),-(int)uVar2);
  }
  uVar2 = FUN_71ba1838();
  return uVar2;
}


// =========================================================================
// Function: FUN_71ba173c
// Entry: 0x71ba173c | Size: 104 bytes
// =========================================================================

uint FUN_71ba173c(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (param_2 & 0x7fffffff) >> 0x14;
  uVar1 = 0;
  if (0x3fe < uVar3) {
    if (uVar3 - 0x41f < 0xffffffe0) {
      return (int)param_2 >> 0x1f ^ 0x7fffffff;
    }
    uVar2 = param_2 & 0xfffff | 0x100000;
    uVar1 = param_1 >> (0x433 - uVar3 & 0xff) | uVar2 << (0x20 - (0x433 - uVar3) & 0xff);
    if (-1 < (int)(0x413 - uVar3)) {
      uVar1 = uVar2 >> (0x413 - uVar3 & 0xff);
    }
    if (0x7fffffff < param_2) {
      uVar1 = -uVar1;
    }
  }
  return uVar1;
}


// =========================================================================
// Function: FUN_71ba17bc
// Entry: 0x71ba17bc | Size: 96 bytes
// =========================================================================

uint FUN_71ba17bc(uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = -1;
  uVar3 = (param_1 & 0x7fffffff) >> 0x17;
  if (param_1 < 0x80000000) {
    iVar2 = 1;
  }
  uVar1 = 0;
  if (0x7e < uVar3) {
    if (uVar3 - 0x9f < 0xffffffe0) {
      return (int)param_1 >> 0x1f ^ 0x7fffffff;
    }
    uVar1 = param_1 & 0x7fffff | 0x800000;
    if (uVar3 < 0x96) {
      uVar1 = uVar1 >> (0x96 - uVar3 & 0xff);
    }
    else {
      uVar1 = uVar1 << (uVar3 - 0x96 & 0xff);
    }
    uVar1 = uVar1 * iVar2;
  }
  return uVar1;
}


// =========================================================================
// Function: FUN_71ba1838
// Entry: 0x71ba1838 | Size: 64 bytes
// =========================================================================

undefined8 FUN_71ba1838(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint in_fpscr;
  double dVar4;
  double dVar5;
  
  dVar4 = (double)CONCAT44(param_2,param_1);
  uVar1 = in_fpscr & 0xfffffff | (uint)(dVar4 == 0.0) << 0x1e | (uint)(0.0 <= dVar4) << 0x1d;
  bVar3 = (byte)(uVar1 >> 0x18);
  if (!(bool)(bVar3 >> 5 & 1) || (bool)(bVar3 >> 6)) {
    return 0;
  }
  iVar2 = (uint)(0.0 < dVar4 * 2.3283064365386963e-10) *
          (int)(longlong)(dVar4 * 2.3283064365386963e-10);
  dVar5 = (double)VectorUnsignedToFloat(iVar2,(byte)(uVar1 >> 0x16) & 3);
  dVar4 = dVar4 + dVar5 * -4294967296.0;
  return CONCAT44(iVar2,(uint)(0.0 < dVar4) * (int)(longlong)dVar4);
}


// =========================================================================
// Function: FUN_71ba18a0
// Entry: 0x71ba18a0 | Size: 68 bytes
// =========================================================================

undefined8 FUN_71ba18a0(float param_1)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint in_fpscr;
  double dVar4;
  
  uVar1 = in_fpscr & 0xfffffff | (uint)(param_1 == 0.0) << 0x1e | (uint)(0.0 <= param_1) << 0x1d;
  bVar3 = (byte)(uVar1 >> 0x18);
  if (!(bool)(bVar3 >> 5 & 1) || (bool)(bVar3 >> 6)) {
    return 0;
  }
  dVar4 = (double)param_1 * 2.3283064365386963e-10;
  iVar2 = (uint)(0.0 < dVar4) * (int)(longlong)dVar4;
  dVar4 = (double)VectorUnsignedToFloat(iVar2,(byte)(uVar1 >> 0x16) & 3);
  dVar4 = (double)param_1 + dVar4 * -4294967296.0;
  return CONCAT44(iVar2,(uint)(0.0 < dVar4) * (int)(longlong)dVar4);
}


// =========================================================================
// Function: FUN_71ba1910
// Entry: 0x71ba1910 | Size: 84 bytes
// =========================================================================

uint FUN_71ba1910(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (param_1 & 0x7fffffff) >> 0x17;
  uVar1 = 0;
  if (-1 < (int)param_1) {
    if (0x7e < uVar2) {
      param_4 = uVar2 - 0x9f;
      uVar1 = 0xffffffff;
    }
    if (0x7e < uVar2 && 0xffffffdf < param_4) {
      uVar1 = param_1 & 0x7fffff | 0x800000;
      if (0x95 < uVar2) {
        return uVar1 << (uVar2 - 0x96 & 0xff);
      }
      return uVar1 >> (0x96 - uVar2 & 0xff);
    }
  }
  return uVar1;
}


// =========================================================================
// Function: FUN_71ba1980
// Entry: 0x71ba1980 | Size: 44 bytes
// =========================================================================

double FUN_71ba1980(uint param_1,undefined4 param_2)

{
  uint in_fpscr;
  double dVar1;
  
  dVar1 = (double)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  return dVar1 * 4294967296.0 + -4503599627370496.0 +
         (double)((ulonglong)param_1 + 0x4330000000000000);
}


// =========================================================================
// Function: FUN_71ba19d8
// Entry: 0x71ba19d8 | Size: 284 bytes
// =========================================================================

uint FUN_71ba19d8(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_1 == 0 && param_2 == 0) {
    return 0;
  }
  uVar1 = (int)param_2 >> 0x1f;
  uVar4 = (param_1 ^ uVar1) - uVar1;
  uVar3 = (param_2 ^ uVar1) - (uVar1 + ((param_1 ^ uVar1) < uVar1));
  uVar2 = LZCOUNT(uVar4) + 0x20;
  if (uVar3 != 0) {
    uVar2 = LZCOUNT(uVar3);
  }
  if (uVar2 < 0x28) {
    if (uVar2 != 0x26) {
      if (uVar2 == 0x27) {
        uVar4 = uVar4 * 2;
      }
      else {
        uVar7 = 6 - uVar2;
        uVar6 = uVar4 >> (uVar7 & 0xff) | uVar3 << uVar2 + 0x1a;
        iVar5 = uVar4 << uVar2 + 0x1a;
        if (-1 < (int)(uVar2 - 6)) {
          uVar6 = uVar4 << (uVar2 - 6 & 0xff);
          iVar5 = 0;
        }
        uVar4 = uVar4 >> (0x26 - uVar2 & 0xff) | uVar3 << (0x20 - (0x26 - uVar2) & 0xff);
        if (-1 < (int)uVar7) {
          uVar4 = uVar3 >> (uVar7 & 0xff);
        }
        uVar4 = uVar4 | (iVar5 != 0 || uVar6 != 0);
      }
    }
    uVar4 = (uVar4 | (uVar4 & 7) >> 2) + 1;
    if ((uVar4 & 0x4000000) != 0) {
      uVar4 = uVar4 >> 3;
      iVar5 = 0x40;
      goto LAB_71ba1ad0;
    }
    uVar4 = uVar4 >> 2;
  }
  else {
    uVar4 = uVar4 << (uVar2 - 0x28 & 0xff);
    if (-1 < (int)(uVar2 - 0x48)) {
      uVar4 = 0;
    }
  }
  iVar5 = 0x3f;
LAB_71ba1ad0:
  return uVar4 & 0x7fffff | uVar1 & 0x80000000 | ((iVar5 - uVar2) + 0x7f) * 0x800000;
}


// =========================================================================
// Function: FUN_71ba1b10
// Entry: 0x71ba1b10 | Size: 108 bytes
// =========================================================================

undefined8 FUN_71ba1b10(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_1 != 0) {
    uVar1 = param_1;
    if ((int)param_1 < 0) {
      uVar1 = -param_1;
    }
    iVar3 = LZCOUNT(uVar1);
    uVar5 = iVar3 - 0xb;
    uVar4 = uVar1 >> (0xbU - iVar3 & 0xff);
    if (-1 < (int)uVar5) {
      uVar4 = uVar1 << (uVar5 & 0xff);
    }
    iVar2 = uVar1 << iVar3 + 0x15;
    if (-1 < (int)uVar5) {
      iVar2 = 0;
    }
    return CONCAT44((uVar4 ^ 0x100000) + (0x41e - iVar3) * 0x100000 | param_1 & 0x80000000,iVar2);
  }
  return 0;
}


// =========================================================================
// Function: FUN_71ba1b94
// Entry: 0x71ba1b94 | Size: 132 bytes
// =========================================================================

uint FUN_71ba1b94(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar3 = param_1 & 0x80000000;
  if ((int)param_1 < 0) {
    param_1 = -param_1;
  }
  iVar1 = LZCOUNT(param_1);
  if (param_1 >> 0x18 == 0) {
    uVar2 = param_1 << (iVar1 - 8U & 0xff) ^ 0x800000;
  }
  else {
    uVar2 = param_1 >> (8U - iVar1 & 0xff) ^ 0x800000;
    if (0x80000000 < param_1 << iVar1 + 0x18) {
      uVar2 = uVar2 + 1;
    }
    if (param_1 << iVar1 + 0x18 == -0x80000000) {
      uVar2 = uVar2 + (uVar2 & 1);
    }
  }
  return uVar2 + iVar1 * -0x800000 + 0x4f000000 | uVar3;
}


// =========================================================================
// Function: FUN_71ba1c38
// Entry: 0x71ba1c38 | Size: 44 bytes
// =========================================================================

double FUN_71ba1c38(uint param_1,uint param_2)

{
  return (double)((ulonglong)param_2 + 0x4530000000000000) + -1.9342813118337666e+25 +
         (double)((ulonglong)param_1 + 0x4330000000000000);
}


// =========================================================================
// Function: FUN_71ba1c88
// Entry: 0x71ba1c88 | Size: 252 bytes
// =========================================================================

int FUN_71ba1c88(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_1 != 0 || param_2 != 0) {
    uVar2 = LZCOUNT(param_1) + 0x20;
    if (param_2 != 0) {
      uVar2 = LZCOUNT(param_2);
    }
    uVar6 = uVar2 ^ 0x3f;
    if (uVar2 < 0x28) {
      if (uVar2 != 0x26) {
        if (uVar2 == 0x27) {
          param_1 = param_1 << 1;
        }
        else {
          uVar5 = 6 - uVar2;
          uVar3 = uVar2 - 6;
          uVar1 = param_1 >> (uVar5 & 0xff) | param_2 << uVar2 + 0x1a;
          if (-1 < (int)uVar3) {
            uVar1 = param_1 << (uVar3 & 0xff);
          }
          iVar4 = param_1 << uVar2 + 0x1a;
          if (-1 < (int)uVar3) {
            iVar4 = 0;
          }
          param_1 = param_1 >> (0x26 - uVar2 & 0xff) | param_2 << (0x20 - (0x26 - uVar2) & 0xff);
          if (-1 < (int)uVar5) {
            param_1 = param_2 >> (uVar5 & 0xff);
          }
          param_1 = param_1 | (iVar4 != 0 || uVar1 != 0);
        }
      }
      param_1 = (param_1 | (param_1 & 7) >> 2) + 1;
      if ((param_1 & 0x4000000) == 0) {
        param_1 = param_1 >> 2;
      }
      else {
        param_1 = param_1 >> 3;
        uVar6 = 0x40 - uVar2;
      }
    }
    else {
      param_1 = param_1 << (uVar2 - 0x28 & 0xff);
      if (-1 < (int)(uVar2 - 0x48)) {
        param_1 = 0;
      }
    }
    return (param_1 & 0x7fffff | uVar6 << 0x17) + 0x3f800000;
  }
  return 0;
}


// =========================================================================
// Function: FUN_71ba1da0
// Entry: 0x71ba1da0 | Size: 84 bytes
// =========================================================================

undefined8 FUN_71ba1da0(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 != 0) {
    uVar2 = LZCOUNT(param_1) ^ 0x1f;
    uVar4 = 0x34 - uVar2;
    uVar2 = 0x14 - uVar2;
    uVar3 = param_1 >> (0x20 - uVar4 & 0xff);
    if (-1 < (int)uVar2) {
      uVar3 = param_1 << (uVar2 & 0xff);
    }
    iVar1 = param_1 << (uVar4 & 0xff);
    if (-1 < (int)uVar2) {
      iVar1 = 0;
    }
    return CONCAT44((uVar3 ^ 0x100000) + (0x41e - LZCOUNT(param_1)) * 0x100000,iVar1);
  }
  return 0;
}


// =========================================================================
// Function: FUN_71ba1e0c
// Entry: 0x71ba1e0c | Size: 120 bytes
// =========================================================================

int FUN_71ba1e0c(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = LZCOUNT(param_1);
  if ((uVar1 ^ 0x1f) < 0x18) {
    uVar2 = param_1 << (0x17 - (uVar1 ^ 0x1f) & 0xff) ^ 0x800000;
  }
  else {
    uVar2 = param_1 >> (8 - uVar1 & 0xff) ^ 0x800000;
    if (0x80000000 < param_1 << uVar1 + 0x18) {
      uVar2 = uVar2 + 1;
    }
    if (param_1 << uVar1 + 0x18 == -0x80000000) {
      uVar2 = uVar2 + (uVar2 & 1);
    }
  }
  return uVar2 + uVar1 * -0x800000 + 0x4f000000;
}


// =========================================================================
// Function: FUN_71ba1ea0
// Entry: 0x71ba1ea0 | Size: 808 bytes
// =========================================================================

ulonglong FUN_71ba1ea0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  
  uVar17 = (param_4 & 0x7fffffff) >> 0x14;
  uVar14 = (param_2 & 0x7fffffff) >> 0x14;
  iVar12 = 0x7ff;
  uVar9 = uVar14 - 0x7ff;
  uVar16 = (param_4 ^ param_2) & 0x80000000;
  bVar18 = 0xfffff801 < uVar9;
  uVar15 = param_4 & 0xfffff;
  if (bVar18) {
    uVar9 = uVar17 - 0x7ff;
  }
  uVar10 = param_2 & 0xfffff;
  if (bVar18) {
    iVar12 = 0;
  }
  if (!bVar18 || uVar9 < 0xfffff802) {
    uVar9 = param_2 & 0x7fffffff;
    if (0x7ff00000 < uVar9 || uVar9 + 0x80100000 < (uint)(param_1 != 0)) {
      return CONCAT44(param_2,param_1) | 0x8000000000000;
    }
    uVar5 = param_4 & 0x7fffffff;
    if (0x7ff00000 < uVar5 || uVar5 + 0x80100000 < (uint)(param_3 != 0)) {
      return CONCAT44(param_4,param_3) | 0x8000000000000;
    }
    if (param_1 == 0 && uVar9 == 0x7ff00000) {
      if (param_3 == 0 && uVar5 == 0) {
        return 0x7ff8000000000000;
      }
      goto LAB_71ba20c8;
    }
    if (param_3 == 0 && uVar5 == 0x7ff00000) {
      if (param_1 == 0 && uVar9 == 0) {
        return 0x7ff8000000000000;
      }
      goto LAB_71ba20c8;
    }
    if (param_1 == 0 && uVar9 == 0 || param_3 == 0 && uVar5 == 0) goto LAB_71ba21b4;
    iVar12 = 0;
    if (uVar9 >> 0x14 == 0) {
      iVar6 = LZCOUNT(uVar10);
      if (uVar10 == 0) {
        iVar6 = LZCOUNT(param_1) + 0x20;
      }
      iVar12 = 0xc - iVar6;
      uVar10 = param_1 >> (0x2bU - iVar6 & 0xff) | uVar10 << (iVar6 - 0xbU & 0xff);
      uVar9 = iVar6 - 0x2b;
      if (-1 < (int)uVar9) {
        uVar10 = param_1 << (uVar9 & 0xff);
      }
      param_1 = param_1 << (iVar6 - 0xbU & 0xff);
      if (-1 < (int)uVar9) {
        param_1 = 0;
      }
    }
    if (uVar5 >> 0x14 == 0) {
      iVar6 = LZCOUNT(uVar15);
      if (uVar15 == 0) {
        iVar6 = LZCOUNT(param_3) + 0x20;
      }
      uVar15 = param_3 >> (0x2bU - iVar6 & 0xff) | uVar15 << (iVar6 - 0xbU & 0xff);
      uVar9 = iVar6 - 0x2b;
      iVar12 = (iVar12 - iVar6) + 0xc;
      if (-1 < (int)uVar9) {
        uVar15 = param_3 << (uVar9 & 0xff);
      }
      param_3 = param_3 << (iVar6 - 0xbU & 0xff);
      if (-1 < (int)uVar9) {
        param_3 = 0;
      }
    }
  }
  lVar1 = (ulonglong)param_1 * (ulonglong)(param_3 << 0xb);
  uVar9 = (uint)lVar1;
  uVar11 = (uint)((ulonglong)lVar1 >> 0x20);
  uVar2 = (ulonglong)(uVar10 | 0x100000) * (ulonglong)(param_3 << 0xb);
  uVar8 = (uint)uVar2;
  uVar15 = uVar15 << 0xb | param_3 >> 0x15 | 0x80000000;
  uVar3 = (ulonglong)param_1 * (ulonglong)uVar15;
  uVar4 = (uint)uVar3;
  lVar1 = (ulonglong)uVar15 * (ulonglong)(uVar10 | 0x100000) + (uVar2 >> 0x20) + (uVar3 >> 0x20);
  uVar5 = (uint)lVar1;
  uVar7 = uVar8 + uVar11;
  uVar10 = (uint)CARRY4(uVar8,uVar11);
  uVar8 = uVar7 + uVar4;
  uVar15 = uVar5 + uVar10 + (uint)CARRY4(uVar7,uVar4);
  uVar10 = (int)((ulonglong)lVar1 >> 0x20) +
           (uint)(CARRY4(uVar5,uVar10) || CARRY4(uVar5 + uVar10,(uint)CARRY4(uVar7,uVar4)));
  iVar12 = uVar14 + uVar17 + iVar12;
  iVar6 = iVar12 + -0x3ff;
  if ((uVar10 & 0x100000) == 0) {
    uVar14 = uVar8 * 2 | uVar9 >> 0x1f;
    uVar10 = uVar10 * 2 | uVar15 >> 0x1f;
    uVar9 = uVar9 << 1;
    uVar15 = uVar15 * 2 | uVar8 >> 0x1f;
  }
  else {
    iVar6 = iVar12 + -0x3fe;
    uVar14 = uVar8;
  }
  if (0x7fe < iVar6) {
LAB_71ba20c8:
    return (ulonglong)(uVar16 | 0x7ff00000) << 0x20;
  }
  if (iVar6 < 1) {
    uVar17 = -iVar6 + 1;
    if (0x3f < uVar17) {
LAB_71ba21b4:
      return (ulonglong)uVar16 << 0x20;
    }
    uVar7 = -iVar6 - 0x1f;
    uVar4 = iVar6 + 0x3f;
    uVar5 = uVar9 >> (uVar17 & 0xff) | uVar14 << (0x20 - uVar17 & 0xff);
    if (-1 < (int)uVar7) {
      uVar5 = uVar14 >> (uVar7 & 0xff);
    }
    uVar8 = uVar15 << (uVar4 & 0xff);
    uVar11 = iVar6 + 0x1f;
    if (-1 < (int)uVar11) {
      uVar8 = 0;
    }
    iVar12 = uVar9 << (uVar4 & 0xff);
    if (-1 < (int)uVar11) {
      iVar12 = 0;
    }
    uVar13 = uVar9 >> (-iVar6 - 0x1fU & 0xff) | uVar14 << (uVar4 & 0xff);
    if (-1 < (int)uVar11) {
      uVar13 = uVar9 << (uVar11 & 0xff);
    }
    uVar9 = uVar8 | uVar5 | (uint)(iVar12 != 0 || uVar13 != 0);
    uVar5 = uVar15 >> (-iVar6 - 0x1fU & 0xff) | uVar10 << (uVar4 & 0xff);
    uVar14 = uVar14 >> (uVar17 & 0xff);
    if (-1 < (int)uVar11) {
      uVar5 = uVar15 << (uVar11 & 0xff);
    }
    if (-1 < (int)uVar7) {
      uVar14 = 0;
    }
    uVar14 = uVar5 | uVar14;
    uVar5 = uVar10 >> (uVar17 & 0xff);
    uVar15 = uVar15 >> (uVar17 & 0xff) | uVar10 << (0x20 - uVar17 & 0xff);
    if (-1 < (int)uVar7) {
      uVar15 = uVar10 >> (uVar7 & 0xff);
      uVar5 = 0;
    }
    uVar16 = uVar5 | uVar16;
    if (0x7fffffff < uVar14 && (uint)(uVar9 == 0) <= 0x80000000 - uVar14) goto LAB_71ba20a8;
LAB_71ba218c:
    if (uVar9 != 0 || uVar14 != 0x80000000) goto LAB_71ba21a4;
    bVar18 = CARRY4(uVar15,uVar15 & 1);
    uVar15 = uVar15 + (uVar15 & 1);
  }
  else {
    uVar16 = uVar10 & 0xfffff | iVar6 << 0x14 | uVar16;
    if (uVar14 < 0x80000000 || 0x80000000 - uVar14 < (uint)(uVar9 == 0)) goto LAB_71ba218c;
LAB_71ba20a8:
    bVar18 = 0xfffffffe < uVar15;
    uVar15 = uVar15 + 1;
  }
  uVar16 = uVar16 + bVar18;
LAB_71ba21a4:
  return CONCAT44(uVar16,uVar15);
}


// =========================================================================
// Function: FUN_71ba21e8
// Entry: 0x71ba21e8 | Size: 488 bytes
// =========================================================================

uint FUN_71ba21e8(uint param_1,uint param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  
  iVar6 = -0xff;
  uVar7 = (param_1 >> 0x17 & 0xff) - 0xff;
  bVar11 = 0xffffff01 < uVar7;
  bVar10 = uVar7 == 0xffffff02;
  if (bVar11) {
    uVar7 = param_2 >> 0x17;
  }
  uVar9 = (param_2 ^ param_1) & 0x80000000;
  if (bVar11) {
    uVar7 = (uVar7 & 0xff) - 0xff;
  }
  uVar5 = param_2 & 0x7fffff;
  uVar3 = param_1 & 0x7fffff;
  if (bVar11) {
    iVar6 = 0;
    bVar10 = uVar7 == 0xffffff01;
  }
  if ((!bVar11 || uVar7 < 0xffffff01) || bVar10) {
    uVar7 = param_1 & 0x7fffffff;
    if (0x7f800000 < uVar7) {
      return param_1 | 0x400000;
    }
    uVar2 = param_2 & 0x7fffffff;
    if (0x7f800000 < uVar2) {
      return param_2 | 0x400000;
    }
    uVar8 = uVar2;
    if ((uVar7 == 0x7f800000) || (uVar8 = uVar7, uVar2 == 0x7f800000)) {
      if (uVar8 == 0) {
        return 0x7fc00000;
      }
      return uVar9 | 0x7f800000;
    }
    if (uVar7 == 0 || uVar2 == 0) {
      return uVar9;
    }
    uVar8 = 0;
    iVar6 = 0;
    if (uVar7 < 0x800000) {
      uVar8 = LZCOUNT(uVar3) - 8;
      iVar6 = 9 - LZCOUNT(uVar3);
    }
    uVar3 = uVar3 << (uVar8 & 0xff);
    if (uVar2 >> 0x17 == 0) {
      iVar6 = (iVar6 - LZCOUNT(uVar5)) + 9;
      uVar5 = uVar5 << (LZCOUNT(uVar5) - 8U & 0xff);
    }
  }
  iVar6 = ((param_1 & 0x7fffffff) >> 0x17) + ((param_2 & 0x7fffffff) >> 0x17) + iVar6;
  uVar1 = (ulonglong)(uVar3 | 0x800000) * (ulonglong)(uVar5 << 8 | 0x80000000);
  iVar4 = iVar6 + -0x7f;
  if ((uVar1 & 0x80000000000000) == 0) {
    uVar1 = uVar1 * 2;
  }
  else {
    iVar4 = iVar6 + -0x7e;
  }
  if (0xfe < iVar4) {
    return uVar9 | 0x7f800000;
  }
  uVar7 = (uint)(uVar1 >> 0x20);
  uVar3 = (uint)uVar1;
  if (iVar4 < 1) {
    uVar5 = 1 - iVar4;
    if (0x1f < uVar5) {
      return uVar9;
    }
    iVar6 = uVar3 << (iVar4 + 0x1fU & 0xff);
    uVar3 = uVar7 << (iVar4 + 0x1fU & 0xff) | uVar3 >> (uVar5 & 0xff);
    uVar7 = uVar7 >> (uVar5 & 0xff);
    if (iVar6 != 0) {
      uVar3 = uVar3 | 1;
    }
  }
  else {
    uVar7 = uVar7 & 0x7fffff | iVar4 << 0x17;
  }
  uVar9 = uVar7 | uVar9;
  if (uVar3 < 0x80000001) {
    if (uVar3 == 0x80000000) {
      uVar9 = uVar9 + (uVar7 & 1);
    }
    return uVar9;
  }
  return uVar9 + 1;
}


// =========================================================================
// Function: FUN_71ba23ec
// Entry: 0x71ba23ec | Size: 8 bytes
// =========================================================================

void FUN_71ba23ec(void)

{
  FUN_71ba0670();
  return;
}


// =========================================================================
// Function: FUN_71ba240c
// Entry: 0x71ba240c | Size: 8 bytes
// =========================================================================

void FUN_71ba240c(undefined4 param_1,uint param_2)

{
  FUN_71ba0b38(param_1,param_2 ^ 0x80000000);
  return;
}


// =========================================================================
// Function: FUN_71ba242c
// Entry: 0x71ba242c | Size: 396 bytes
// =========================================================================

uint FUN_71ba242c(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar9 = (param_2 & 0x7fffffff) >> 0x14;
  uVar4 = param_2 & 0xfffff;
  if (uVar9 - 0x381 < 0xfe) {
    uVar4 = param_1 >> 0x1d | uVar4 << 3;
    if ((param_1 & 0x1fffffff) < 0x10000001) {
      if ((param_1 & 0x1fffffff) == 0x10000000) {
        uVar4 = (param_1 >> 0x1d & 1) + uVar4;
      }
    }
    else {
      uVar4 = uVar4 + 1;
    }
    iVar1 = 0xfc80;
    if (uVar4 >> 0x17 != 0) {
      uVar4 = 0;
      iVar1 = 0xfc81;
    }
    return param_2 & 0x80000000 | (iVar1 + uVar9) * 0x800000 | uVar4;
  }
  if ((param_1 == 0 && uVar4 == 0) || (uVar9 != 0x7ff)) {
    if (0x47e < uVar9) {
      return param_2 & 0x80000000 | 0x7f800000;
    }
    uVar6 = 0x381;
    if (uVar9 == 0) {
      uVar6 = 0x380;
    }
    uVar10 = uVar6 - uVar9;
    uVar2 = 0;
    iVar1 = 0;
    if ((int)uVar10 < 0x35) {
      uVar2 = 0x40 - uVar10;
      if (uVar9 != 0) {
        uVar4 = uVar4 | 0x100000;
      }
      uVar5 = 0x20 - uVar10;
      uVar8 = uVar10 - 0x20;
      uVar3 = param_1 >> (uVar10 & 0xff) | uVar4 << (uVar5 & 0xff);
      if (-1 < (int)uVar8) {
        uVar3 = uVar4 >> (uVar8 & 0xff);
      }
      uVar7 = param_1 >> (0x20 - uVar2 & 0xff) | uVar4 << (uVar2 & 0xff);
      uVar4 = uVar4 >> (uVar10 & 0xff);
      if (-1 < (int)uVar5) {
        uVar7 = param_1 << (uVar5 & 0xff);
      }
      iVar1 = param_1 << (uVar2 & 0xff);
      if (-1 < (int)uVar5) {
        iVar1 = 0;
      }
      if (-1 < (int)uVar8) {
        uVar4 = 0;
      }
      uVar9 = uVar3 & 0x1fffffff | (uint)(uVar6 != uVar9 && (iVar1 != 0 || uVar7 != 0));
      uVar4 = uVar3 >> 0x1d | uVar4 << 3;
      if (uVar9 < 0x10000001) {
        if (uVar9 == 0x10000000) {
          uVar4 = (uVar3 >> 0x1d & 1) + uVar4;
        }
      }
      else {
        uVar4 = uVar4 + 1;
      }
      bVar11 = uVar4 >> 0x17 != 0;
      if (bVar11) {
        uVar4 = uVar4 ^ 0x800000;
      }
      return param_2 & 0x80000000 | (uint)bVar11 << 0x17 | uVar4;
    }
  }
  else {
    iVar1 = 0xff;
    uVar2 = param_1 >> 0x1d | uVar4 << 3 | 0x400000;
  }
  return param_2 & 0x80000000 | iVar1 << 0x17 | uVar2;
}


// =========================================================================
// Function: XcxSszXLPjQrEGhecEv_
// Entry: 0x71ba25d0 | Size: 680 bytes
// =========================================================================

uint XcxSszXLPjQrEGhecEv_(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = param_1[2];
  DataMemoryBarrier(0xb);
  if (uVar4 == 0) {
    imp_pthread_once(&DAT_71205114,&LAB_71ba2a50);
    imp_pthread_mutex_lock(&DAT_71205118);
    uVar4 = param_1[2];
    if (uVar4 == 0) {
      uVar4 = DAT_71205110 + 1;
      DataMemoryBarrier(0xb);
      DAT_71205110 = uVar4;
      param_1[2] = uVar4;
    }
    imp_pthread_mutex_unlock(&DAT_71205118);
    puVar1 = (undefined4 *)imp_pthread_getspecific(DAT_7120510c);
    if (puVar1 == (undefined4 *)0x0) goto LAB_71ba26a8;
LAB_71ba2600:
    uVar2 = puVar1[1];
    if (uVar4 <= uVar2) goto LAB_71ba26f4;
    iVar3 = (uVar4 + 0x11 & 0xfffffff0) - 2;
    puVar1 = (undefined4 *)imp_realloc(puVar1,iVar3 * 4 + 8);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      imp_abort();
    }
    imp_memset(puVar1 + uVar2 + 2,0,(iVar3 - uVar2) * 4);
  }
  else {
    puVar1 = (undefined4 *)imp_pthread_getspecific(DAT_7120510c);
    if (puVar1 != (undefined4 *)0x0) goto LAB_71ba2600;
LAB_71ba26a8:
    iVar3 = (uVar4 + 0x11 & 0xfffffff0) - 2;
    puVar1 = (undefined4 *)imp_malloc(iVar3 * 4 + 8);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      imp_abort();
    }
    imp_memset(puVar1 + 2,0,iVar3 * 4);
    *puVar1 = 1;
  }
  puVar1[1] = iVar3;
  imp_pthread_setspecific(DAT_7120510c,puVar1);
LAB_71ba26f4:
  if (puVar1[uVar4 + 1] != 0) {
    return puVar1[uVar4 + 1];
  }
  uVar2 = param_1[1];
  if (uVar2 < 5) {
    uVar2 = 4;
  }
  if ((uVar2 & uVar2 - 1) != 0) {
                    /* WARNING: Subroutine does not return */
    imp_abort();
  }
  iVar5 = *param_1;
  iVar3 = imp_malloc(uVar2 + 3 + iVar5);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    imp_abort();
  }
  uVar2 = iVar3 + uVar2 + 3 & -uVar2;
  *(int *)(uVar2 - 4) = iVar3;
  if (param_1[3] != 0) {
    imp_memcpy(uVar2,param_1[3],iVar5);
    puVar1[uVar4 + 1] = uVar2;
    return uVar2;
  }
  imp_memset(uVar2,0,iVar5);
  puVar1[uVar4 + 1] = uVar2;
  return uVar2;
}


// =========================================================================
// Function: FUN_71ba2c1c
// Entry: 0x71ba2c1c | Size: 32 bytes
// =========================================================================

undefined4 FUN_71ba2c1c(void)

{
  int iVar1;
  
  iVar1 = FUN_71ba0e04();
  if (iVar1 != 0) {
    return 0;
  }
  return 1;
}


// =========================================================================
// Function: FUN_71ba2c3c
// Entry: 0x71ba2c3c | Size: 32 bytes
// =========================================================================

undefined4 FUN_71ba2c3c(void)

{
  int iVar1;
  
  iVar1 = FUN_71ba0e04();
  if (-1 < iVar1) {
    return 0;
  }
  return 1;
}


// =========================================================================
// Function: FUN_71ba2c5c
// Entry: 0x71ba2c5c | Size: 32 bytes
// =========================================================================

undefined4 FUN_71ba2c5c(void)

{
  int iVar1;
  
  iVar1 = FUN_71ba0e04();
  if (0 < iVar1) {
    return 0;
  }
  return 1;
}


// =========================================================================
// Function: FUN_71ba2c7c
// Entry: 0x71ba2c7c | Size: 32 bytes
// =========================================================================

undefined4 FUN_71ba2c7c(void)

{
  int iVar1;
  
  iVar1 = FUN_71ba0ea8();
  if (iVar1 < 0) {
    return 0;
  }
  return 1;
}


// =========================================================================
// Function: FUN_71ba2c9c
// Entry: 0x71ba2c9c | Size: 32 bytes
// =========================================================================

undefined4 FUN_71ba2c9c(void)

{
  int iVar1;
  
  iVar1 = FUN_71ba0ea8();
  if (iVar1 < 1) {
    return 0;
  }
  return 1;
}


// =========================================================================
// Function: FUN_71ba2cd4
// Entry: 0x71ba2cd4 | Size: 4 bytes
// =========================================================================

void FUN_71ba2cd4(void)

{
  return;
}


// =========================================================================
// Function: FUN_71ba2cf0
// Entry: 0x71ba2cf0 | Size: 32 bytes
// =========================================================================

undefined4 FUN_71ba2cf0(void)

{
  int iVar1;
  
  iVar1 = FUN_71ba03a8();
  if (iVar1 != 0) {
    return 0;
  }
  return 1;
}


// =========================================================================
// Function: FUN_71ba2d10
// Entry: 0x71ba2d10 | Size: 32 bytes
// =========================================================================

undefined4 FUN_71ba2d10(void)

{
  int iVar1;
  
  iVar1 = FUN_71ba03a8();
  if (-1 < iVar1) {
    return 0;
  }
  return 1;
}


// =========================================================================
// Function: FUN_71ba2d30
// Entry: 0x71ba2d30 | Size: 32 bytes
// =========================================================================

undefined4 FUN_71ba2d30(void)

{
  int iVar1;
  
  iVar1 = FUN_71ba03a8();
  if (0 < iVar1) {
    return 0;
  }
  return 1;
}


// =========================================================================
// Function: FUN_71ba2d50
// Entry: 0x71ba2d50 | Size: 32 bytes
// =========================================================================

undefined4 FUN_71ba2d50(void)

{
  int iVar1;
  
  iVar1 = FUN_71ba03d8();
  if (iVar1 < 0) {
    return 0;
  }
  return 1;
}


// =========================================================================
// Function: FUN_71ba2d70
// Entry: 0x71ba2d70 | Size: 32 bytes
// =========================================================================

undefined4 FUN_71ba2d70(void)

{
  int iVar1;
  
  iVar1 = FUN_71ba03d8();
  if (iVar1 < 1) {
    return 0;
  }
  return 1;
}


// =========================================================================
// Function: FUN_71ba2da8
// Entry: 0x71ba2da8 | Size: 28 bytes
// =========================================================================

void FUN_71ba2da8(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_8 [4];
  
  FUN_71ba2de0(param_1,param_2,auStack_8);
  return;
}


// =========================================================================
// Function: FUN_71ba2de0
// Entry: 0x71ba2de0 | Size: 68 bytes
// =========================================================================

int FUN_71ba2de0(uint param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (int)param_1 >> 0x1f;
  uVar3 = FUN_71ba2e3c((param_1 ^ uVar1) - uVar1,
                       (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f));
  uVar2 = (int)(param_1 ^ param_2) >> 0x1f;
  *param_3 = (*param_3 ^ uVar1) - uVar1;
  return (uVar3 ^ uVar2) - uVar2;
}


// =========================================================================
// Function: FUN_71ba2e3c
// Entry: 0x71ba2e3c | Size: 84 bytes
// =========================================================================

uint FUN_71ba2e3c(uint param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = FUN_71ba2cd4(0);
    return uVar1;
  }
  if (param_2 != 1) {
    if (param_2 <= param_1) {
                    /* WARNING: Could not recover jumptable at 0x71ba2e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(&UNK_71ba2fe4 + (LZCOUNT(param_2) - LZCOUNT(param_1)) * -0xc))();
      return uVar1;
    }
    *param_3 = param_1;
    return 0;
  }
  *param_3 = 0;
  return param_1;
}


// =========================================================================
// Function: FUN_71ba3034
// Entry: 0x71ba3034 | Size: 36 bytes
// =========================================================================

void FUN_71ba3034(void)

{
  FUN_71ba3070();
  return;
}


// =========================================================================
// Function: FUN_71ba3070
// Entry: 0x71ba3070 | Size: 124 bytes
// =========================================================================

undefined8 FUN_71ba3070(uint param_1,uint param_2,uint param_3,uint param_4,int *param_5)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uStack_18;
  uint uStack_14;
  
  uVar1 = (int)param_2 >> 0x1f;
  uVar2 = (int)param_4 >> 0x1f;
  uVar3 = FUN_71ba3104((param_1 ^ uVar1) - uVar1,
                       (param_2 ^ uVar1) - (uVar1 + ((param_1 ^ uVar1) < uVar1)),
                       (param_3 ^ uVar2) - uVar2,
                       (param_4 ^ uVar2) - (uVar2 + ((param_3 ^ uVar2) < uVar2)),&uStack_18);
  *param_5 = (uStack_18 ^ uVar1) - uVar1;
  param_5[1] = (uStack_14 ^ uVar1) - (uVar1 + ((uStack_18 ^ uVar1) < uVar1));
  uVar2 = (int)(param_4 ^ param_2) >> 0x1f;
  uVar1 = (uint)uVar3 ^ uVar2;
  return CONCAT44(((uint)((ulonglong)uVar3 >> 0x20) ^ uVar2) - (uVar2 + (uVar1 < uVar2)),
                  uVar1 - uVar2);
}


// =========================================================================
// Function: FUN_71ba3104
// Entry: 0x71ba3104 | Size: 736 bytes
// =========================================================================

ulonglong FUN_71ba3104(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  
  if (param_2 == 0) {
    if (param_4 == 0) {
      uVar14 = FUN_71ba0484(param_1,param_3);
      uVar8 = (uint)uVar14;
      if (param_5 != (uint *)0x0) {
        uVar8 = param_1 - uVar8 * param_3;
        uVar14 = uVar14 & 0xffffffff;
      }
LAB_71ba3358:
      if (param_5 != (uint *)0x0) {
        *param_5 = uVar8;
        param_5[1] = (uint)(uVar14 >> 0x20);
      }
      return uVar14 & 0xffffffff;
    }
    if (param_5 != (uint *)0x0) {
      param_2 = 0;
      *param_5 = param_1;
      param_5[1] = 0;
      param_1 = 0;
LAB_71ba3174:
      return CONCAT44(param_2,param_1);
    }
  }
  else {
    if (param_3 != 0) {
      if (param_4 == 0) {
        if ((param_3 & param_3 - 1) == 0) {
          if (param_5 != (uint *)0x0) {
            *param_5 = param_3 - 1 & param_1;
            param_5[1] = 0;
          }
          if (param_3 != 1) {
            bVar2 = (byte)param_3;
            bVar3 = (byte)(param_3 >> 8);
            bVar4 = (byte)(param_3 >> 0x10);
            bVar1 = (byte)(param_3 >> 0x18);
            uVar8 = LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 |
                                             bVar2 >> 2 & 1) << 1 | bVar2 >> 3 & 1) << 1 |
                                           bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                                         bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x18 |
                            (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                             bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                           bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                         bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x10 |
                            (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                             bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                           bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                         bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 8 |
                            (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                             bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                           bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                         bVar1 >> 6 & 1) << 1 | bVar1 >> 7));
            return CONCAT44(param_2 >> uVar8,
                            (param_2 << 1) << (~uVar8 & 0x1f) | param_1 >> (uVar8 & 0x1f));
          }
          goto LAB_71ba3174;
        }
        uVar8 = 0;
        uVar13 = (LZCOUNT(param_3) - LZCOUNT(param_2)) + 0x21;
        if (uVar13 != 0x20) {
          if (uVar13 < 0x20) {
            uVar12 = param_2 >> (uVar13 & 0xff);
            uVar11 = param_2 << (0x20 - uVar13 & 0xff) | param_1 >> (uVar13 & 0xff);
            uVar6 = param_1 << (0x20 - uVar13 & 0xff);
          }
          else {
            uVar8 = (LZCOUNT(param_3) - LZCOUNT(param_2)) + 1;
            uVar12 = 0;
            uVar6 = param_2 << (0x40 - uVar13 & 0xff) | param_1 >> (uVar8 & 0xff);
            uVar11 = param_2 >> (uVar8 & 0xff);
            uVar8 = param_1 << (0x40 - uVar13 & 0xff);
          }
          goto LAB_71ba32bc;
        }
      }
      else {
        uVar6 = LZCOUNT(param_4) - LZCOUNT(param_2);
        if (0x1f < uVar6) goto LAB_71ba3144;
        uVar13 = uVar6 + 1;
        uVar8 = 0;
        if (uVar13 != 0x20) {
          uVar12 = param_2 >> (uVar13 & 0xff);
          uVar11 = param_2 << ((uVar6 ^ 0x1f) & 0xff) | param_1 >> (uVar13 & 0xff);
          uVar6 = param_1 << ((uVar6 ^ 0x1f) & 0xff);
          goto LAB_71ba32bc;
        }
      }
      uVar8 = 0;
      uVar13 = 0x20;
      uVar12 = 0;
      uVar11 = param_2;
      uVar6 = param_1;
LAB_71ba32bc:
      uVar7 = 0;
      do {
        uVar9 = uVar8;
        uVar10 = uVar11 << 1 | uVar6 >> 0x1f;
        uVar8 = uVar12 << 1 | uVar11 >> 0x1f;
        uVar5 = ~uVar8 + param_4 + (uint)CARRY4(~uVar10,param_3);
        uVar11 = uVar10 - param_3;
        uVar12 = uVar8 - (param_4 + (uVar10 < param_3));
        if (-1 < (int)uVar5) {
          uVar11 = uVar10;
          uVar12 = uVar8;
        }
        uVar5 = uVar5 >> 0x1f;
        uVar6 = uVar6 << 1 | uVar9 >> 0x1f;
        uVar8 = uVar7 | uVar9 << 1;
        uVar13 = uVar13 - 1;
        uVar7 = uVar5;
      } while (uVar13 != 0);
      if (param_5 != (uint *)0x0) {
        *param_5 = uVar11;
        param_5[1] = uVar12;
      }
      return CONCAT44((uVar9 & 0x7fffffff) >> 0x1e | uVar6 << 1,uVar5 | uVar8 << 1);
    }
    if (param_4 == 0) {
      return CONCAT44(param_2,param_1);
    }
    if (param_1 == 0) {
      uVar14 = FUN_71ba0484(param_2,param_4);
      uVar8 = (uint)uVar14;
      if (param_5 != (uint *)0x0) {
        uVar14 = CONCAT44(param_2 - uVar8 * param_4,uVar8);
        uVar8 = 0;
      }
      goto LAB_71ba3358;
    }
    if ((param_4 & param_4 - 1) == 0) {
      bVar2 = (byte)param_4;
      bVar3 = (byte)(param_4 >> 8);
      bVar4 = (byte)(param_4 >> 0x10);
      bVar1 = (byte)(param_4 >> 0x18);
      if (param_5 != (uint *)0x0) {
        *param_5 = param_1;
        param_5[1] = param_4 - 1 & param_2;
      }
      param_2 = param_2 >>
                LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1)
                                         << 1 | bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 |
                                      bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1) << 1 | bVar2 >> 7) <<
                        0x18 | (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                                bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                              bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                            bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x10 |
                        (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1)
                                         << 1 | bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 |
                                      bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 8
                        | (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                           bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                         bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                       bVar1 >> 6 & 1) << 1 | bVar1 >> 7));
      goto LAB_71ba31c4;
    }
    uVar8 = LZCOUNT(param_4) - LZCOUNT(param_2);
    if (uVar8 < 0x1f) {
      uVar13 = uVar8 + 1;
      uVar6 = param_1 << ((uVar8 ^ 0x1f) & 0xff);
      uVar11 = param_2 << ((uVar8 ^ 0x1f) & 0xff) | param_1 >> (uVar13 & 0xff);
      uVar12 = param_2 >> (uVar13 & 0xff);
      uVar8 = 0;
      goto LAB_71ba32bc;
    }
LAB_71ba3144:
    if (param_5 != (uint *)0x0) {
      *param_5 = param_1;
      param_5[1] = param_2;
    }
  }
  param_2 = 0;
LAB_71ba31c4:
  return (ulonglong)param_2;
}


// =========================================================================
// Function: FUN_71ba33fc
// Entry: 0x71ba33fc | Size: 28 bytes
// =========================================================================

void FUN_71ba33fc(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_8 [4];
  
  FUN_71ba2e3c(param_1,param_2,auStack_8);
  return;
}


// =========================================================================
// Function: FUN_71ba3430
// Entry: 0x71ba3430 | Size: 36 bytes
// =========================================================================

void FUN_71ba3430(void)

{
  FUN_71ba3104();
  return;
}


// =========================================================================
// Function: FUN_71ba346c
// Entry: 0x71ba346c | Size: 132 bytes
// =========================================================================

uint * FUN_71ba346c(uint *param_1,undefined4 *param_2,int *param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar2 = *param_1;
  if (-1 < (int)uVar2) {
    *param_2 = 1;
    *param_3 = (uint)*(byte *)((int)param_1 + 7) * 4 + 4;
    return param_1 + 1;
  }
  uVar4 = (uVar2 & 0xfffffff) >> 0x18;
  if (uVar4 == 0) {
    uVar3 = 1;
    iVar1 = 4;
  }
  else {
    if (uVar4 != 3) {
      param_4 = (uint *)0x0;
    }
    if (uVar4 != 3 && uVar4 != 1) {
      return param_4;
    }
    iVar1 = ((uVar2 & 0xffffff) >> 0x10) * 4 + 4;
    uVar3 = 2;
  }
  *param_3 = iVar1;
  *param_2 = uVar3;
  return param_1;
}


// =========================================================================
// Function: FUN_71ba34f0
// Entry: 0x71ba34f0 | Size: 1328 bytes
// =========================================================================

undefined4 FUN_71ba34f0(undefined4 param_1,int param_2,uint param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  uint uStack_30;
  int *piStack_28;
  
  if (param_3 < param_4) {
    uStack_30 = 0;
    do {
      uVar7 = param_3 + 1;
      bVar1 = *(byte *)(param_2 + (param_3 ^ 3));
      uVar2 = (uint)(char)bVar1;
      uVar8 = (uint)bVar1;
      if (-1 < (int)uVar2) {
        FUN_71ba4970(param_1,0xd,&piStack_28);
        if (uVar8 < 0x40) {
          piStack_28 = piStack_28 + uVar8 + 1;
        }
        else {
          piStack_28 = (int *)((int)piStack_28 + (-4 - (uVar8 * 4 & 0xfc)));
        }
LAB_71ba3530:
        FUN_71ba49c8(param_1,0xd);
        goto LAB_71ba3540;
      }
      switch(uVar8 - 0x80 >> 4) {
      case 0:
        if (param_4 <= uVar7) {
          return 9;
        }
        uVar7 = (uVar8 & 0xf) << 0xc | (uint)*(byte *)(param_2 + (uVar7 ^ 3)) << 4;
        if (uVar7 == 0) {
          return 9;
        }
        FUN_71ba3c7c(param_1,0,uVar7,0);
        uStack_30 = uStack_30 | (uVar2 & 8) >> 3;
        piVar6 = piStack_28;
        goto LAB_71ba374c;
      case 1:
        if ((uVar2 & 0xd) == 0xd) {
          return 9;
        }
        FUN_71ba4970(param_1,uVar2 & 0xf,&piStack_28);
        goto LAB_71ba377c;
      case 2:
        FUN_71ba3c7c(param_1,0,(0x20 << (uVar2 & 7)) - 0x10U | (uVar2 & 8) << 0xb,0);
        break;
      case 3:
        switch(uVar8) {
        case 0xb0:
          goto switchD_71ba36f8_caseD_b0;
        case 0xb1:
          if (param_4 <= uVar7) {
            return 9;
          }
          uVar2 = (uint)*(byte *)(param_2 + (uVar7 ^ 3));
          if (0xe < uVar2 - 1) {
            return 9;
          }
          FUN_71ba3c7c(param_1,0,uVar2,0);
          piVar6 = piStack_28;
          goto LAB_71ba374c;
        case 0xb2:
          uVar8 = 0;
          uVar2 = 0;
          do {
            if (param_4 <= uVar7) {
              return 9;
            }
            uVar5 = uVar7 ^ 3;
            uVar7 = uVar7 + 1;
            uVar5 = (uint)*(char *)(param_2 + uVar5);
            uVar8 = uVar8 | (uVar5 & 0x7f) << (uVar2 & 0xff);
            uVar2 = uVar2 + 7;
          } while ((int)uVar5 < 0);
          FUN_71ba4970(param_1,0xd,&piStack_28);
          piStack_28 = piStack_28 + uVar8 + 0x81;
          goto LAB_71ba3530;
        case 0xb3:
          uVar2 = (uint)*(byte *)(param_2 + (uVar7 ^ 3));
          FUN_71ba3c7c(param_1,1,(uVar2 & 0xf | (uVar2 & 0xf0) << 0xc) + 1,1);
          uVar7 = param_3 + 2;
          break;
        case 0xb4:
          iVar3 = FUN_71ba4970(param_1,0xd,&piStack_28);
          if (iVar3 == 0) {
            piVar6 = (int *)*piStack_28;
            piStack_28 = piStack_28 + 1;
            FUN_71ba49c8(param_1,0xd);
            uVar4 = 0x8f;
LAB_71ba3788:
            FUN_71ba49c8(param_1,uVar4,piVar6);
          }
          break;
        case 0xb5:
        case 0xb6:
        case 0xb7:
          return 9;
        default:
          FUN_71ba3c7c(param_1,1,(uVar2 & 7) + 0x80001,1);
        }
        break;
      case 4:
        if ((uVar2 & 0xfe) != 200) {
          return 9;
        }
        bVar1 = *(byte *)(param_2 + (uVar7 ^ 3));
        uVar7 = (uint)(bVar1 >> 4) | (uint)(uVar8 == 200) << 4;
        uVar2 = uVar7 + (bVar1 & 0xf);
        if (0x1f < uVar2) {
          return 9;
        }
        iVar3 = FUN_71ba4970(param_1,0xd,&piStack_28);
        piVar6 = piStack_28;
        if (iVar3 == 0) {
          do {
            iVar3 = *piStack_28;
            piVar6 = piStack_28 + 2;
            if ((uVar7 == 0x20) ||
               (piVar6 = piStack_28 + 1, piStack_28 = piStack_28 + 2,
               iVar3 = FUN_71ba4afc(param_1,uVar7 + 0x100,iVar3,*piVar6), piVar6 = piStack_28,
               iVar3 != 0)) goto LAB_71ba374c;
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar2 + 1);
          FUN_71ba49c8(param_1,0xd,piStack_28);
          piVar6 = piStack_28;
        }
LAB_71ba374c:
        piStack_28 = piVar6;
        uVar7 = param_3 + 2;
        break;
      case 5:
        if ((uVar2 & 8) != 0) {
          return 9;
        }
        iVar3 = FUN_71ba4970(param_1,0xd,&piStack_28);
        if (iVar3 == 0) {
          iVar3 = *piStack_28;
          piVar6 = piStack_28 + 1;
          piStack_28 = piStack_28 + 2;
          iVar3 = FUN_71ba4afc(param_1,0x108,iVar3,*piVar6);
          if (iVar3 == 0) {
            uVar2 = uVar2 & 7;
            if (uVar2 != 0) {
              iVar3 = *piStack_28;
              piVar6 = piStack_28 + 1;
              piStack_28 = piStack_28 + 2;
              iVar3 = FUN_71ba4afc(param_1,0x109,iVar3,*piVar6);
              if (iVar3 != 0) break;
              if (uVar2 != 1) {
                iVar3 = *piStack_28;
                piVar6 = piStack_28 + 1;
                piStack_28 = piStack_28 + 2;
                iVar3 = FUN_71ba4afc(param_1,0x10a,iVar3,*piVar6);
                if (iVar3 != 0) break;
                if (uVar2 != 2) {
                  iVar3 = *piStack_28;
                  piVar6 = piStack_28 + 1;
                  piStack_28 = piStack_28 + 2;
                  iVar3 = FUN_71ba4afc(param_1,0x10b,iVar3,*piVar6);
                  if (iVar3 != 0) break;
                  if (uVar2 != 3) {
                    iVar3 = *piStack_28;
                    piVar6 = piStack_28 + 1;
                    piStack_28 = piStack_28 + 2;
                    iVar3 = FUN_71ba4afc(param_1,0x10c,iVar3,*piVar6);
                    if (iVar3 != 0) break;
                    if (uVar2 != 4) {
                      iVar3 = *piStack_28;
                      piVar6 = piStack_28 + 1;
                      piStack_28 = piStack_28 + 2;
                      iVar3 = FUN_71ba4afc(param_1,0x10d,iVar3,*piVar6);
                      if (iVar3 != 0) break;
                      if (uVar2 != 5) {
                        iVar3 = *piStack_28;
                        piVar6 = piStack_28 + 1;
                        piStack_28 = piStack_28 + 2;
                        iVar3 = FUN_71ba4afc(param_1,0x10e,iVar3,*piVar6);
                        if (iVar3 != 0) break;
                        if (uVar2 != 6) {
                          iVar3 = *piStack_28;
                          piVar6 = piStack_28 + 1;
                          piStack_28 = piStack_28 + 2;
                          iVar3 = FUN_71ba4afc(param_1,0x10f,iVar3,*piVar6);
                          if (iVar3 != 0) break;
                        }
                      }
                    }
                  }
                }
              }
            }
LAB_71ba377c:
            uVar4 = 0xd;
            piVar6 = piStack_28;
            goto LAB_71ba3788;
          }
        }
        break;
      default:
        return 9;
      }
LAB_71ba3540:
      param_3 = uVar7;
    } while (uVar7 < param_4);
switchD_71ba36f8_caseD_b0:
    if (uStack_30 != 0) {
      return 8;
    }
  }
  FUN_71ba4970(param_1,0xe,&piStack_28);
  FUN_71ba49c8(param_1,0xf,piStack_28);
  return 8;
}


// =========================================================================
// Function: FUN_71ba3a58
// Entry: 0x71ba3a58 | Size: 248 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_71ba3a58(undefined4 param_1,int param_2,uint param_3,uint param_4,undefined4 param_5)

{
  int iVar1;
  
  if (param_2 == 5) {
    if (param_4 != 0 || param_3 != 0) {
      return 2;
    }
    param_3 = 0x8f;
  }
  else {
    if (param_2 == 1) {
      if ((param_4 & 0xfffffffb) != 1) {
        return 2;
      }
      if (param_4 == 1) {
        if (0xf < param_3) {
          return 2;
        }
        FUN_71ba4bc0(param_1,2,param_5);
      }
      else if (0x1f < param_3) {
        return 2;
      }
      iVar1 = FUN_71ba4aa4(param_1,param_3 + 0x100,param_5);
      goto LAB_71ba3b04;
    }
    if (param_2 != 0) {
      iVar1 = _DAT_71bafb4c + 0xa8;
      func_0x712180f0(iVar1,&DAT_70822118,&DAT_7082d6bb,&DAT_708308cf);
      func_0x71219cc0(iVar1);
      iVar1 = func_0x71218450();
      return iVar1;
    }
    if ((0xf < param_3) || (param_4 != 0)) {
      return 2;
    }
  }
  iVar1 = FUN_71ba4970(param_1,param_3);
LAB_71ba3b04:
  return (uint)(iVar1 != 0) << 1;
}


// =========================================================================
// Function: FUN_71ba3b60
// Entry: 0x71ba3b60 | Size: 268 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_71ba3b60(undefined4 param_1,int param_2,uint param_3,uint param_4,undefined4 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 5) {
    if (param_4 != 0 || param_3 != 0) {
      return 2;
    }
    uVar2 = *param_5;
    param_3 = 0x8f;
  }
  else {
    if (param_2 == 1) {
      if ((param_4 & 0xfffffffb) != 1) {
        return 2;
      }
      if (param_4 == 1) {
        if (0xf < param_3) {
          return 2;
        }
        FUN_71ba4bc0();
      }
      else if (0x1f < param_3) {
        return 2;
      }
      iVar1 = FUN_71ba4afc(param_1,param_3 + 0x100,*param_5,param_5[1]);
      goto LAB_71ba3c20;
    }
    if (param_2 != 0) {
      iVar1 = _DAT_71bafb4c + 0xa8;
      func_0x712180f0(iVar1,&DAT_70822118,&DAT_70822775,&DAT_708308cf);
      func_0x71219cc0(iVar1);
      iVar1 = func_0x71218450();
      return iVar1;
    }
    if ((0xf < param_3) || (param_4 != 0)) {
      return 2;
    }
    uVar2 = *param_5;
  }
  iVar1 = FUN_71ba49c8(param_1,param_3,uVar2);
LAB_71ba3c20:
  return (uint)(iVar1 != 0) << 1;
}


// =========================================================================
// Function: FUN_71ba3c7c
// Entry: 0x71ba3c7c | Size: 1316 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_71ba3c7c(undefined4 param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piStack_30;
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  
  if (param_2 == 5) {
    if (param_4 != 0 || param_3 != 0) {
      return 2;
    }
    iVar1 = FUN_71ba4970(param_1,0xd,&piStack_30);
    if (iVar1 != 0) {
      return 2;
    }
    puVar6 = (undefined4 *)*piStack_30;
    piStack_30 = piStack_30 + 1;
    FUN_71ba49c8(param_1,0xd);
    uVar5 = 0x8f;
  }
  else {
    if (param_2 == 1) {
      if ((param_4 & 0xfffffffb) != 1) {
        return 2;
      }
      iVar1 = FUN_71ba4970(param_1,0xd,&puStack_2c);
      if (iVar1 != 0) {
        return 2;
      }
      if ((param_3 & 0xffff) != 0) {
        uVar7 = param_3 >> 0x10;
        uVar4 = uVar7 + (param_3 & 0xffff);
        if (param_4 == 1) {
          iVar1 = 0x10 - uVar7;
          if (0x10 < uVar7) {
            iVar1 = 0;
          }
          do {
            uVar5 = *puStack_2c;
            if (iVar1 == 0) {
              return 2;
            }
            uVar2 = puStack_2c[1];
            puStack_2c = puStack_2c + 2;
            FUN_71ba4bc0(param_1);
            iVar3 = FUN_71ba4afc(param_1,uVar7 | 0x100,uVar5,uVar2);
            if (iVar3 != 0) {
              return 2;
            }
            uVar7 = uVar7 + 1;
            iVar1 = iVar1 + -1;
          } while (uVar7 < uVar4);
        }
        else {
          iVar1 = 0x20 - uVar7;
          if (0x20 < uVar7) {
            iVar1 = 0;
          }
          do {
            uVar5 = *puStack_2c;
            if (iVar1 == 0) {
              return 2;
            }
            puVar6 = puStack_2c + 1;
            puStack_2c = puStack_2c + 2;
            iVar3 = FUN_71ba4afc(param_1,uVar7 | 0x100,uVar5,*puVar6);
            if (iVar3 != 0) {
              return 2;
            }
            uVar7 = uVar7 + 1;
            iVar1 = iVar1 + -1;
          } while (uVar7 < uVar4);
        }
      }
      puVar6 = puStack_2c;
      if (param_4 == 1) {
        puStack_2c = puStack_2c + 1;
        puVar6 = puStack_2c;
      }
    }
    else {
      if (param_2 != 0) {
        iVar1 = _DAT_71bafb4c + 0xa8;
        func_0x712180f0(iVar1,&DAT_70822118,&DAT_7083289b,&DAT_708308cf);
        func_0x71219cc0(iVar1);
        iVar1 = func_0x71218450();
        return iVar1;
      }
      if ((param_4 != 0) || (iVar1 = FUN_71ba4970(param_1,0xd,&puStack_28), iVar1 != 0)) {
        return 2;
      }
      if ((param_3 & 1) != 0) {
        uVar5 = *puStack_28;
        puStack_28 = puStack_28 + 1;
        iVar1 = FUN_71ba49c8(param_1,0,uVar5);
        if (iVar1 != 0) {
          return 2;
        }
      }
      if ((param_3 & 2) != 0) {
        uVar5 = *puStack_28;
        puStack_28 = puStack_28 + 1;
        iVar1 = FUN_71ba49c8(param_1,1,uVar5);
        if (iVar1 != 0) {
          return 2;
        }
      }
      if ((param_3 & 4) != 0) {
        uVar5 = *puStack_28;
        puStack_28 = puStack_28 + 1;
        iVar1 = FUN_71ba49c8(param_1,2,uVar5);
        if (iVar1 != 0) {
          return 2;
        }
      }
      if ((param_3 & 8) != 0) {
        uVar5 = *puStack_28;
        puStack_28 = puStack_28 + 1;
        iVar1 = FUN_71ba49c8(param_1,3,uVar5);
        if (iVar1 != 0) {
          return 2;
        }
      }
      if ((param_3 & 0x10) != 0) {
        uVar5 = *puStack_28;
        puStack_28 = puStack_28 + 1;
        iVar1 = FUN_71ba49c8(param_1,4,uVar5);
        if (iVar1 != 0) {
          return 2;
        }
      }
      if ((param_3 & 0x20) != 0) {
        uVar5 = *puStack_28;
        puStack_28 = puStack_28 + 1;
        iVar1 = FUN_71ba49c8(param_1,5,uVar5);
        if (iVar1 != 0) {
          return 2;
        }
      }
      if ((param_3 & 0x40) != 0) {
        uVar5 = *puStack_28;
        puStack_28 = puStack_28 + 1;
        iVar1 = FUN_71ba49c8(param_1,6,uVar5);
        if (iVar1 != 0) {
          return 2;
        }
      }
      if ((param_3 & 0x80) != 0) {
        uVar5 = *puStack_28;
        puStack_28 = puStack_28 + 1;
        iVar1 = FUN_71ba49c8(param_1,7,uVar5);
        if (iVar1 != 0) {
          return 2;
        }
      }
      if ((param_3 & 0x100) != 0) {
        uVar5 = *puStack_28;
        puStack_28 = puStack_28 + 1;
        iVar1 = FUN_71ba49c8(param_1,8,uVar5);
        if (iVar1 != 0) {
          return 2;
        }
      }
      if ((param_3 & 0x200) != 0) {
        uVar5 = *puStack_28;
        puStack_28 = puStack_28 + 1;
        iVar1 = FUN_71ba49c8(param_1,9,uVar5);
        if (iVar1 != 0) {
          return 2;
        }
      }
      if ((param_3 & 0x400) != 0) {
        uVar5 = *puStack_28;
        puStack_28 = puStack_28 + 1;
        iVar1 = FUN_71ba49c8(param_1,10,uVar5);
        if (iVar1 != 0) {
          return 2;
        }
      }
      if ((param_3 & 0x800) != 0) {
        uVar5 = *puStack_28;
        puStack_28 = puStack_28 + 1;
        iVar1 = FUN_71ba49c8(param_1,0xb,uVar5);
        if (iVar1 != 0) {
          return 2;
        }
      }
      if ((param_3 & 0x1000) != 0) {
        uVar5 = *puStack_28;
        puStack_28 = puStack_28 + 1;
        iVar1 = FUN_71ba49c8(param_1,0xc,uVar5);
        if (iVar1 != 0) {
          return 2;
        }
      }
      uVar7 = param_3 & 0x2000;
      if (uVar7 != 0) {
        uVar5 = *puStack_28;
        puStack_28 = puStack_28 + 1;
        iVar1 = FUN_71ba49c8(param_1,0xd,uVar5);
        if (iVar1 != 0) {
          return 2;
        }
      }
      if ((param_3 & 0x4000) != 0) {
        uVar5 = *puStack_28;
        puStack_28 = puStack_28 + 1;
        iVar1 = FUN_71ba49c8(param_1,0xe,uVar5);
        if (iVar1 != 0) {
          return 2;
        }
      }
      if ((param_3 & 0x8000) == 0) {
        puVar6 = puStack_28;
        if (uVar7 != 0) {
          return 0;
        }
      }
      else {
        uVar5 = *puStack_28;
        puStack_28 = puStack_28 + 1;
        iVar1 = FUN_71ba49c8(param_1,0xf,uVar5);
        uVar4 = (uint)(iVar1 != 0);
        puVar6 = puStack_28;
        if (iVar1 != 0 || uVar7 != 0) goto LAB_71ba4124;
      }
    }
    uVar5 = 0xd;
  }
  iVar1 = FUN_71ba49c8(param_1,uVar5,puVar6);
  uVar4 = 0;
  if (iVar1 != 0) {
    uVar4 = 1;
  }
LAB_71ba4124:
  return uVar4 << 1;
}


// =========================================================================
// Function: FUN_71ba41bc
// Entry: 0x71ba41bc | Size: 552 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_71ba41bc(int param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint auStack_4c [2];
  uint *puStack_44;
  
  bVar5 = *(byte *)(*(int *)(param_1 + 0x4c) + 3);
  iVar2 = FUN_71ba4b6c(param_2,auStack_4c);
  if (iVar2 != 0) {
    puStack_44 = (uint *)0x0;
  }
  if (((*(byte *)(param_1 + 0x50) & 1) == 0) && (uVar7 = *puStack_44, uVar7 != 0)) {
    bVar5 = bVar5 & 0xf;
    if (bVar5 == 3) {
      puVar9 = puStack_44;
      do {
        auStack_4c[0] = 0;
        iVar2 = *(int *)(param_1 + 0x48);
        uVar10 = puVar9[1];
        FUN_71ba4970(param_2,0xf,auStack_4c);
        puVar3 = puVar9 + 2;
        uVar6 = uVar7 & 1 | (uVar10 & 1) << 1;
        puVar8 = puVar3;
        if (1 < uVar6) {
          if (uVar6 != 2) goto LAB_71ba4374;
          uVar6 = iVar2 + (uVar10 & 0xfffffffe);
          puVar8 = puVar9 + 3;
          if ((uVar6 <= (auStack_4c[0] & 0xfffffffe)) &&
             ((auStack_4c[0] & 0xfffffffe) < uVar6 + (uVar7 & 0xfffffffe))) goto LAB_71ba4320;
        }
        uVar7 = *puVar8;
        puVar9 = puVar8;
      } while (uVar7 != 0);
    }
    else {
      if (bVar5 != 1) {
        return 9;
      }
      puVar9 = puStack_44;
      do {
        uVar1 = *(ushort *)((int)puVar9 + 2);
        auStack_4c[0] = 0;
        iVar2 = *(int *)(param_1 + 0x48);
        FUN_71ba4970(param_2,0xf,auStack_4c);
        puVar3 = puVar9 + 1;
        uVar6 = uVar7 & 1 | (uVar1 & 1) << 1;
        puVar8 = puVar3;
        if (1 < uVar6) {
          if (uVar6 != 2) {
LAB_71ba4374:
            iVar2 = _DAT_71bafb4c + 0xa8;
            func_0x712180f0(iVar2,&DAT_70822118,&DAT_708328ab,&DAT_7082f560);
            func_0x71219cc0(iVar2);
            uVar4 = func_0x71218450();
            return uVar4;
          }
          uVar6 = (uVar1 & 0xfffffffe) + iVar2;
          puVar8 = puVar9 + 2;
          if ((uVar6 <= (auStack_4c[0] & 0xfffffffe)) &&
             ((auStack_4c[0] & 0xfffffffe) < uVar6 + (uVar7 & 0xfffe))) {
LAB_71ba4320:
            uVar7 = (*puVar3 & 0x40000000) << 1 | *puVar3 & 0x7fffffff;
            uVar4 = 6;
            if (uVar7 != 0xffffffff) {
              if (uVar7 != 0xfffffffe) {
                iVar2 = _DAT_71bafb4c + 0xa8;
                func_0x712180f0(iVar2,&DAT_70822118,&DAT_708328ab,&DAT_70822785);
                func_0x71219cc0(iVar2);
                uVar4 = func_0x71218450();
                return uVar4;
              }
              uVar4 = 9;
            }
            return uVar4;
          }
        }
        uVar7 = *puVar8;
        puVar9 = puVar8;
      } while (uVar7 != 0);
    }
  }
  iVar2 = FUN_71ba4b5c(param_2);
  uVar4 = 9;
  if (iVar2 == 0) {
    uVar4 = 5;
  }
  if (iVar2 == 1) {
    uVar4 = 8;
  }
  return uVar4;
}


// =========================================================================
// Function: FUN_71ba441c
// Entry: 0x71ba441c | Size: 244 bytes
// =========================================================================

undefined4 FUN_71ba441c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_320 [392];
  undefined1 auStack_198 [336];
  undefined4 auStack_48 [3];
  code *pcStack_3c;
  undefined4 uStack_34;
  undefined4 uStack_28;
  
  FUN_71ba5df0(auStack_198);
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_71ba4898(auStack_320,auStack_198);
  iVar1 = FUN_71ba4b6c(auStack_320,auStack_48);
  uVar2 = 3;
  if (iVar1 == 0) {
    do {
      if (pcStack_3c != (code *)0x0) {
        *(undefined4 *)(param_1 + 0x48) = auStack_48[0];
        *(undefined4 *)(param_1 + 0x4c) = uStack_28;
        *(undefined4 *)(param_1 + 0x50) = uStack_34;
        iVar1 = (*pcStack_3c)(0,param_1,auStack_320);
        if (iVar1 != 8) {
          if (iVar1 != 6) {
            if (iVar1 == 9) {
              uVar2 = 9;
            }
            return uVar2;
          }
          FUN_71ba4510(auStack_198,auStack_320,param_1,0);
          return 2;
        }
      }
      iVar1 = FUN_71ba4b6c(auStack_320,auStack_48);
    } while (iVar1 == 0);
  }
  return 3;
}


// =========================================================================
// Function: FUN_71ba4510
// Entry: 0x71ba4510 | Size: 336 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71ba4510(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_54;
  undefined4 auStack_50 [3];
  code *pcStack_44;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  int iStack_28;
  
  FUN_71ba4898(param_2,param_1);
  iVar2 = 1;
  do {
    uVar3 = 1;
    if (((param_4 & 1) != 0) && (uVar3 = 2, iVar2 == 0)) {
      FUN_71ba49c8(param_2,0xffffffff,*(undefined4 *)(param_3 + 0x10));
      param_4 = 0;
    }
    FUN_71ba4970(param_2,0xfffffffe,&iStack_28);
    iVar1 = FUN_71ba4b6c(param_2,auStack_50);
    if (iVar1 != 0) {
      return;
    }
    if (pcStack_44 != (code *)0x0) {
      *(undefined4 *)(param_3 + 0x48) = auStack_50[0];
      *(undefined4 *)(param_3 + 0x4c) = uStack_30;
      *(undefined4 *)(param_3 + 0x50) = uStack_3c;
      iVar1 = (*pcStack_44)(uVar3,param_3,param_2);
      if (iVar1 != 8) {
        if (iVar1 == 7) {
          FUN_71ba4970(param_2,0xffffffff,&uStack_54);
          *(undefined4 *)(param_3 + 0x10) = uStack_54;
          FUN_71ba4ba0(param_2);
          return;
        }
        if (iVar1 != 9) {
          return;
        }
        func_0x71218450();
        return;
      }
      if (iStack_28 == *(int *)(param_3 + 0x20)) {
        iVar2 = _DAT_71bafb4c + 0xa8;
        func_0x712180f0(iVar2,&DAT_70822118,&DAT_70827e26,&DAT_7082c5c7);
        func_0x71219cc0(iVar2);
        func_0x71218450();
        return;
      }
    }
    iVar2 = iVar2 + -1;
  } while( true );
}


// =========================================================================
// Function: FUN_71ba470c
// Entry: 0x71ba470c | Size: 244 bytes
// =========================================================================

void FUN_71ba470c(undefined4 param_1,undefined4 param_2,int param_3,code *param_4,undefined4 param_5
                 )

{
  int iVar1;
  undefined4 auStack_48 [3];
  code *pcStack_3c;
  undefined4 uStack_34;
  undefined4 uStack_28;
  
  FUN_71ba4898(param_2,param_1);
  iVar1 = FUN_71ba4b6c(param_2,auStack_48);
  if (iVar1 == 0) {
    do {
      iVar1 = (*param_4)(1,10,param_3,param_3,param_2,param_5);
      if (iVar1 != 0) {
        return;
      }
      if (pcStack_3c != (code *)0x0) {
        *(undefined4 *)(param_3 + 0x48) = auStack_48[0];
        *(undefined4 *)(param_3 + 0x4c) = uStack_28;
        *(undefined4 *)(param_3 + 0x50) = uStack_34;
        iVar1 = (*pcStack_3c)(9,param_3,param_2);
        if (iVar1 == 7) {
          FUN_71ba4ba0(param_2);
        }
        else if (iVar1 != 8) {
          if (iVar1 != 5) {
            return;
          }
          (*param_4)(1,0x1a,param_3,param_3,param_2,param_5);
          return;
        }
      }
      iVar1 = FUN_71ba4b6c(param_2,auStack_48);
    } while (iVar1 == 0);
  }
  return;
}


// =========================================================================
// Function: FUN_71ba4800
// Entry: 0x71ba4800 | Size: 44 bytes
// =========================================================================

undefined4 FUN_71ba4800(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_30 [8];
  undefined4 uStack_28;
  
  iVar1 = FUN_71ba4b6c(param_1,auStack_30);
  if (iVar1 != 0) {
    uStack_28 = 0;
  }
  return uStack_28;
}


// =========================================================================
// Function: FUN_71ba482c
// Entry: 0x71ba482c | Size: 44 bytes
// =========================================================================

undefined4 FUN_71ba482c(undefined4 param_1)

{
  int iVar1;
  undefined4 auStack_30 [10];
  
  iVar1 = FUN_71ba4b6c(param_1,auStack_30);
  if (iVar1 != 0) {
    auStack_30[0] = 0;
  }
  return auStack_30[0];
}


// =========================================================================
// Function: FUN_71ba4870
// Entry: 0x71ba4870 | Size: 40 bytes
// =========================================================================

undefined4 FUN_71ba4870(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_71ba4b5c(param_2);
  uVar3 = 9;
  if (iVar1 == 0) {
    uVar3 = 5;
  }
  uVar2 = 0;
  if (iVar1 != 1) {
    uVar2 = uVar3;
  }
  return uVar2;
}


// =========================================================================
// Function: FUN_71ba4898
// Entry: 0x71ba4898 | Size: 208 bytes
// =========================================================================

undefined4 FUN_71ba4898(undefined4 *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  *(undefined1 *)((int)param_1 + 0x4e) = 0;
  *(undefined2 *)(param_1 + 0x13) = 0;
  *param_1 = 0x71bae6f4;
  param_1[1] = 0x7230a85c;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar6 = param_2[4];
  uVar7 = param_2[5];
  uVar8 = param_2[6];
  uVar9 = param_2[7];
  *(undefined8 *)(param_1 + 2) = *param_2;
  *(undefined8 *)(param_1 + 4) = uVar3;
  *(undefined8 *)(param_1 + 6) = uVar4;
  *(undefined8 *)(param_1 + 8) = uVar5;
  *(undefined8 *)(param_1 + 10) = uVar6;
  *(undefined8 *)(param_1 + 0xc) = uVar7;
  *(undefined8 *)(param_1 + 0xe) = uVar8;
  *(undefined8 *)(param_1 + 0x10) = uVar9;
  param_1[0x12] = 0;
  func_0x71218b70(param_1 + 0x14,0x132);
  uVar2 = param_1[0x11] & 0xfffffffe;
  if (uVar2 != 0) {
    iStack_1c = 0;
    iStack_24 = FUN_7121ff50(uVar2,&iStack_1c);
    iStack_20 = iStack_1c * 8;
    if ((iStack_24 != 0 && iStack_20 != 0) &&
       (iVar1 = FUN_71ba51e8(param_1,uVar2,&iStack_24), iVar1 != 0)) {
      return 0;
    }
  }
  *(undefined1 *)(param_1 + 0x60) = 1;
  return 0;
}


// =========================================================================
// Function: FUN_71ba4970
// Entry: 0x71ba4970 | Size: 88 bytes
// =========================================================================

undefined4 FUN_71ba4970(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*param_1 + 0xc))(param_1,param_2);
    *param_3 = uVar2;
    return 0;
  }
  return 0xffffe672;
}


// =========================================================================
// Function: FUN_71ba49c8
// Entry: 0x71ba49c8 | Size: 220 bytes
// =========================================================================

undefined4 FUN_71ba49c8(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_40 [16];
  int iStack_30;
  
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  if (iVar1 == 0) {
    return 0xffffe672;
  }
  (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3);
  if (param_2 != -1) {
    return 0;
  }
  (**(code **)(*param_1 + 0x24))(param_1,auStack_40);
  (**(code **)(*param_1 + 0x34))(param_1,0);
  if (iStack_30 != 0) {
    iVar1 = (**(code **)(*param_1 + 0xc))(param_1,0xfffffffe);
    (**(code **)(*param_1 + 0x10))(param_1,0xfffffffe,iStack_30 + iVar1);
  }
  return 0;
}


// =========================================================================
// Function: FUN_71ba4aa4
// Entry: 0x71ba4aa4 | Size: 88 bytes
// =========================================================================

undefined4 FUN_71ba4aa4(int *param_1,undefined4 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x14))(param_1);
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*param_1 + 0x18))(param_1,param_2);
    *param_3 = uVar2;
    return 0;
  }
  return 0xffffe672;
}


// =========================================================================
// Function: FUN_71ba4afc
// Entry: 0x71ba4afc | Size: 96 bytes
// =========================================================================

undefined4 FUN_71ba4afc(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x14))(param_1);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x1c))(param_1,param_2,param_3,param_4);
    return 0;
  }
  return 0xffffe672;
}


// =========================================================================
// Function: FUN_71ba4b5c
// Entry: 0x71ba4b5c | Size: 16 bytes
// =========================================================================

void FUN_71ba4b5c(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x71ba4b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1,0);
  return;
}


// =========================================================================
// Function: FUN_71ba4b6c
// Entry: 0x71ba4b6c | Size: 52 bytes
// =========================================================================

undefined4 FUN_71ba4b6c(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0x24))(param_1,param_2);
  uVar1 = 0;
  if (*(int *)(param_2 + 4) == 0) {
    uVar1 = 0xffffe66b;
  }
  return uVar1;
}


// =========================================================================
// Function: FUN_71ba4ba0
// Entry: 0x71ba4ba0 | Size: 32 bytes
// =========================================================================

undefined4 FUN_71ba4ba0(int *param_1)

{
  (**(code **)(*param_1 + 0x28))();
  return 0xffffe674;
}


// =========================================================================
// Function: FUN_71ba4bc0
// Entry: 0x71ba4bc0 | Size: 12 bytes
// =========================================================================

void FUN_71ba4bc0(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x71ba4bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x3c))();
  return;
}


// =========================================================================
// Function: FUN_71ba4dcc
// Entry: 0x71ba4dcc | Size: 248 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_71ba4dcc(int param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 & 0xfffffff0) == 0x110) {
    if (*(char *)(param_1 + 0x4e) == '\0') {
      *(undefined1 *)(param_1 + 0x4e) = 1;
      FUN_71ba5e18(param_1 + 0xd8);
    }
    return *(undefined8 *)(param_1 + param_2 * 8 + -0x7a8);
  }
  if ((param_2 & 0xfffffff0) == 0x100) {
    if (*(char *)(param_1 + 0x4d) != '\0') {
      return *(undefined8 *)(param_1 + param_2 * 8 + -0x7b0);
    }
    *(undefined1 *)(param_1 + 0x4d) = 1;
    if (*(char *)(param_1 + 0x4c) == '\0') {
      FUN_71ba5e08(param_1 + 0x50);
    }
    else {
      FUN_71ba5e10();
    }
    return *(undefined8 *)(param_1 + param_2 * 8 + -0x7b0);
  }
  iVar1 = _DAT_71bafb4c + 0xa8;
  func_0x712180f0(iVar1,&DAT_70822118,&DAT_70821a25,&DAT_708310da);
  func_0x71219cc0(iVar1);
  uVar2 = func_0x71218450();
  return uVar2;
}


// =========================================================================
// Function: FUN_71ba4ed4
// Entry: 0x71ba4ed4 | Size: 416 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71ba4ed4(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 extraout_r12;
  undefined4 in_cr7;
  undefined4 in_cr8;
  undefined4 in_cr13;
  undefined4 in_cr14;
  undefined4 unaff_s17;
  undefined4 unaff_s22;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  
  if ((param_2 & 0xfffffff0) == 0x110) {
    if (*(char *)(param_1 + 0x4e) == '\0') {
      *(undefined1 *)(param_1 + 0x4e) = 1;
      FUN_71ba5e18(param_1 + 0xd8);
    }
    param_1 = param_1 + param_2 * 8;
    *(undefined4 *)(param_1 + -0x7a8) = param_3;
    *(undefined4 *)(param_1 + -0x7a4) = param_4;
    return;
  }
  if ((param_2 & 0xfffffff0) == 0x100) {
    if (*(char *)(param_1 + 0x4d) != '\0') {
      param_1 = param_1 + param_2 * 8;
      *(undefined4 *)(param_1 + -0x7b0) = param_3;
      *(undefined4 *)(param_1 + -0x7ac) = param_4;
      return;
    }
    *(undefined1 *)(param_1 + 0x4d) = 1;
    if (*(char *)(param_1 + 0x4c) == '\0') {
      FUN_71ba5e08(param_1 + 0x50);
    }
    else {
      FUN_71ba5e10();
    }
    param_1 = param_1 + param_2 * 8;
    *(undefined4 *)(param_1 + -0x7b0) = param_3;
    *(undefined4 *)(param_1 + -0x7ac) = param_4;
    return;
  }
  iVar3 = _DAT_71bafb4c + 0xa8;
  func_0x712180f0(iVar3,&DAT_70822118,&DAT_7082aa43,&DAT_708310da);
  func_0x71219cc0(iVar3);
  piVar1 = (int *)func_0x71218450();
  coprocessor_function2(1,0xc,3,in_cr13,in_cr7,in_cr8);
  FPMaxNum(unaff_s17,unaff_s22);
  coprocessor_moveto(1,6,0,extraout_r12,in_cr8,in_cr14);
  iStack_30 = iVar3;
  uStack_2c = param_4;
  if ((char)piVar1[0x60] == '\0') {
    uStack_34 = 0;
    uStack_38 = 0;
    uVar2 = FUN_71ba346c(piVar1[0x5e],&uStack_38,&uStack_34);
    iVar3 = FUN_71ba34f0(piVar1,uVar2,uStack_38,uStack_34);
    if ((iVar3 != 8) || ((**(code **)(*piVar1 + 0x34))(piVar1,1), (char)piVar1[0x60] == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x71ba5070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)0x71ba4fd4)(iVar3 == 8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x71ba500c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x71ba4fd4)(0);
  return;
}


// =========================================================================
// Function: FUN_71ba50bc
// Entry: 0x71ba50bc | Size: 116 bytes
// =========================================================================

undefined8 FUN_71ba50bc(int param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x4d) != '\0') {
    if (*(char *)(param_1 + 0x4c) == '\0') {
      FUN_71ba5dd8(param_1 + 0x50);
      cVar1 = *(char *)(param_1 + 0x4e);
      goto joined_r0x71ba50f0;
    }
    FUN_71ba5de0();
  }
  cVar1 = *(char *)(param_1 + 0x4e);
joined_r0x71ba50f0:
  if (cVar1 != '\0') {
    FUN_71ba5de8(param_1 + 0xd8);
  }
  return *(undefined8 *)(param_1 + 8);
}


// =========================================================================
// Function: FUN_71ba5124
// Entry: 0x71ba5124 | Size: 32 bytes
// =========================================================================

undefined4 FUN_71ba5124(int *param_1)

{
  (**(code **)(*param_1 + 0xc))(param_1,0xffffffff);
  return 0;
}


// =========================================================================
// Function: FUN_71ba5144
// Entry: 0x71ba5144 | Size: 144 bytes
// =========================================================================

void FUN_71ba5144(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  uVar1 = (**(code **)(*param_1 + 0xc))(param_1,0xffffffff);
  if ((uVar1 & 0xfffffffe) != 0) {
    param_2 = (uVar1 & 0xfffffffe) - param_2;
    iStack_14 = 0;
    iStack_1c = FUN_7121ff50(param_2,&iStack_14);
    iStack_18 = iStack_14 * 8;
    if ((iStack_1c != 0 && iStack_18 != 0) &&
       (iVar2 = FUN_71ba51e8(param_1,param_2,&iStack_1c), iVar2 != 0)) {
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x60) = 1;
  return;
}


// =========================================================================
// Function: FUN_71ba51e8
// Entry: 0x71ba51e8 | Size: 512 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_71ba51e8(int param_1,uint param_2,int *param_3)

{
  undefined4 uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  uVar4 = (uint)param_3[1] >> 3;
  if (uVar4 == 0) {
    return 0;
  }
  iVar10 = *param_3;
  uVar6 = 0;
  uVar7 = uVar4;
  do {
    iVar9 = uVar6 + (uVar7 >> 1);
    puVar3 = (uint *)(iVar10 + iVar9 * 8);
    uVar5 = *puVar3;
    uVar5 = (uVar5 | (uVar5 & 0x40000000) << 1) + (int)puVar3;
    if (param_2 < uVar5) {
      uVar7 = uVar7 >> 1;
    }
    else {
      uVar6 = iVar9 + 1;
      uVar7 = uVar7 + ~(uVar7 >> 1);
    }
  } while (uVar7 != 0);
  if (uVar6 == 0) {
    return 0;
  }
  iVar9 = iVar10 + uVar6 * 8;
  iVar11 = -1;
  if (uVar6 != uVar4) {
    puVar3 = (uint *)(iVar10 + uVar6 * 8);
    uVar5 = *puVar3;
    uVar5 = uVar5 | (uVar5 & 0x40000000) << 1;
    iVar11 = uVar5 + (int)puVar3;
  }
  puVar2 = (uint *)(iVar9 + -8);
  uVar4 = *puVar2;
  puVar3 = (uint *)(iVar9 + -4);
  if (puVar3 != (uint *)0x0) {
    uVar5 = *puVar3;
  }
  if (puVar3 == (uint *)0x0 || uVar5 == 1) {
    return 0;
  }
  uVar7 = uVar5;
  if ((int)uVar5 < 0) {
LAB_71ba52d4:
    uVar6 = (uVar7 & 0xfffffff) >> 0x18;
    if (uVar6 == 2) {
      uVar6 = 2;
      iVar10 = _DAT_71bb0090;
    }
    else {
      if (uVar6 != 1) {
        if (uVar6 != 0) {
          iVar10 = _DAT_71bafb4c + 0xa8;
          func_0x712180f0(iVar10,&DAT_70822118,&DAT_70826c51,&DAT_7082857a);
          func_0x71219cc0(iVar10);
          uVar1 = func_0x71218450();
          return uVar1;
        }
        puVar8 = puVar3 + 1;
        iVar10 = _DAT_71bb0088;
        if ((int)uVar5 < 0) {
          puVar8 = (uint *)0x0;
        }
        goto LAB_71ba5304;
      }
      uVar6 = 0;
      iVar10 = _DAT_71bb008c;
    }
    uVar7 = (uVar7 & 0xffffff) >> 0x10;
    puVar8 = puVar3 + uVar7 + 1;
    if ((0x7fffffff < uVar5) && (uVar7 != 0)) {
      iVar10 = _DAT_71bafb4c + 0xa8;
      func_0x712180f0(iVar10,&DAT_70822118,&DAT_70826c51,&DAT_70832096);
      func_0x71219cc0(iVar10);
      uVar1 = func_0x71218450();
      return uVar1;
    }
  }
  else {
    puVar3 = (uint *)((uVar5 | (uVar5 & 0x40000000) << 1) + (int)puVar3);
    uVar7 = *puVar3;
    if ((int)uVar7 < 0) goto LAB_71ba52d4;
    puVar8 = puVar3 + *(byte *)((int)puVar3 + 7) + 2;
    iVar10 = (int)puVar3 + (uVar7 & 0x40000000) * 2 + uVar7;
LAB_71ba5304:
    uVar6 = 0;
  }
  *(uint **)(param_1 + 0x178) = puVar3;
  *(uint *)(param_1 + 0x16c) = uVar6 | uVar5 >> 0x1f;
  *(uint *)(param_1 + 0x158) = (uVar4 | (uVar4 & 0x40000000) << 1) + (int)puVar2;
  *(int *)(param_1 + 0x15c) = iVar11;
  *(uint **)(param_1 + 0x160) = puVar8;
  *(int *)(param_1 + 0x164) = iVar10;
  return 1;
}


// =========================================================================
// Function: FUN_71ba5dd8
// Entry: 0x71ba5dd8 | Size: 8 bytes
// =========================================================================

undefined4 FUN_71ba5dd8(undefined8 *param_1)

{
  return (int)*param_1;
}


// =========================================================================
// Function: FUN_71ba5de0
// Entry: 0x71ba5de0 | Size: 8 bytes
// =========================================================================

undefined4 FUN_71ba5de0(undefined8 *param_1)

{
  return (int)*param_1;
}


// =========================================================================
// Function: FUN_71ba5de8
// Entry: 0x71ba5de8 | Size: 8 bytes
// =========================================================================

void FUN_71ba5de8(void)

{
  return;
}


// =========================================================================
// Function: FUN_71ba5df0
// Entry: 0x71ba5df0 | Size: 24 bytes
// =========================================================================

undefined4 FUN_71ba5df0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 unaff_lr;
  
  *(int *)param_1 = param_1;
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined4 *)(param_1 + 0xc) = param_4;
  *(undefined4 *)(param_1 + 0x10) = unaff_r4;
  *(undefined4 *)(param_1 + 0x14) = unaff_r5;
  *(undefined4 *)(param_1 + 0x18) = unaff_r6;
  *(undefined4 *)(param_1 + 0x1c) = unaff_r7;
  *(undefined4 *)(param_1 + 0x20) = unaff_r8;
  *(undefined4 *)(param_1 + 0x24) = unaff_r9;
  *(undefined4 *)(param_1 + 0x28) = unaff_r10;
  *(undefined4 *)(param_1 + 0x2c) = unaff_r11;
  *(undefined4 *)(param_1 + 0x30) = in_r12;
  *(BADSPACEBASE **)(param_1 + 0x34) = register0x00000054;
  *(undefined4 *)(param_1 + 0x38) = unaff_lr;
  *(undefined4 *)(param_1 + 0x3c) = unaff_lr;
  return 0;
}


// =========================================================================
// Function: FUN_71ba5e08
// Entry: 0x71ba5e08 | Size: 8 bytes
// =========================================================================

void FUN_71ba5e08(undefined8 *param_1)

{
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 in_d4;
  undefined8 in_d5;
  undefined8 in_d6;
  undefined8 in_d7;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  undefined8 unaff_d15;
  
  *param_1 = in_d0;
  param_1[1] = in_d1;
  param_1[2] = in_d2;
  param_1[3] = in_d3;
  param_1[4] = in_d4;
  param_1[5] = in_d5;
  param_1[6] = in_d6;
  param_1[7] = in_d7;
  param_1[8] = unaff_d8;
  param_1[9] = unaff_d9;
  param_1[10] = unaff_d10;
  param_1[0xb] = unaff_d11;
  param_1[0xc] = unaff_d12;
  param_1[0xd] = unaff_d13;
  param_1[0xe] = unaff_d14;
  param_1[0xf] = unaff_d15;
  return;
}


// =========================================================================
// Function: FUN_71ba5e10
// Entry: 0x71ba5e10 | Size: 8 bytes
// =========================================================================

void FUN_71ba5e10(undefined8 *param_1)

{
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 in_d4;
  undefined8 in_d5;
  undefined8 in_d6;
  undefined8 in_d7;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  undefined8 unaff_d15;
  
  *param_1 = in_d0;
  param_1[1] = in_d1;
  param_1[2] = in_d2;
  param_1[3] = in_d3;
  param_1[4] = in_d4;
  param_1[5] = in_d5;
  param_1[6] = in_d6;
  param_1[7] = in_d7;
  param_1[8] = unaff_d8;
  param_1[9] = unaff_d9;
  param_1[10] = unaff_d10;
  param_1[0xb] = unaff_d11;
  param_1[0xc] = unaff_d12;
  param_1[0xd] = unaff_d13;
  param_1[0xe] = unaff_d14;
  param_1[0xf] = unaff_d15;
  return;
}


// =========================================================================
// Function: FUN_71ba5e18
// Entry: 0x71ba5e18 | Size: 8 bytes
// =========================================================================

void FUN_71ba5e18(undefined8 *param_1)

{
  undefined8 in_d16;
  undefined8 in_d17;
  undefined8 in_d18;
  undefined8 in_d19;
  undefined8 in_d20;
  undefined8 in_d21;
  undefined8 in_d22;
  undefined8 in_d23;
  undefined8 in_d24;
  undefined8 in_d25;
  undefined8 in_d26;
  undefined8 in_d27;
  undefined8 in_d28;
  undefined8 in_d29;
  undefined8 in_d30;
  undefined8 in_d31;
  
  *param_1 = in_d16;
  param_1[1] = in_d17;
  param_1[2] = in_d18;
  param_1[3] = in_d19;
  param_1[4] = in_d20;
  param_1[5] = in_d21;
  param_1[6] = in_d22;
  param_1[7] = in_d23;
  param_1[8] = in_d24;
  param_1[9] = in_d25;
  param_1[10] = in_d26;
  param_1[0xb] = in_d27;
  param_1[0xc] = in_d28;
  param_1[0xd] = in_d29;
  param_1[0xe] = in_d30;
  param_1[0xf] = in_d31;
  return;
}


// =========================================================================
// Function: imp_free
// Entry: 0x71ba5ef8 | Size: 4 bytes
// =========================================================================

void imp_free(void)

{
  imp_free();
  return;
}


// =========================================================================
// Function: thunk_dGrRHE
// Entry: 0x71ba5f1c | Size: 4 bytes
// =========================================================================

void thunk_dGrRHE(void)

{
  thunk_dGrRHE();
  return;
}


// =========================================================================
// Function: thunk_Xi_sAEfDuAvOIwmPirvQO
// Entry: 0x71ba5f28 | Size: 4 bytes
// =========================================================================

void thunk_Xi_sAEfDuAvOIwmPirvQO(void)

{
  thunk_Xi_sAEfDuAvOIwmPirvQO();
  return;
}


// =========================================================================
// Function: thunk_qPmRLPsHr_QnKToKtjJHxTRwxyTNbnHMFdgbqQDigs
// Entry: 0x71ba5f4c | Size: 4 bytes
// =========================================================================

void thunk_qPmRLPsHr_QnKToKtjJHxTRwxyTNbnHMFdgbqQDigs(void)

{
  thunk_qPmRLPsHr_QnKToKtjJHxTRwxyTNbnHMFdgbqQDigs();
  return;
}


// =========================================================================
// Function: thunk_mCoiVmxnheKMbrXa_UxiszbatfiG_gtSo
// Entry: 0x71ba5fe8 | Size: 4 bytes
// =========================================================================

void thunk_mCoiVmxnheKMbrXa_UxiszbatfiG_gtSo(void)

{
  thunk_mCoiVmxnheKMbrXa_UxiszbatfiG_gtSo();
  return;
}


// =========================================================================
// Function: thunk_yWQCKHflWNVsbmkMVfBMdga
// Entry: 0x71ba606c | Size: 4 bytes
// =========================================================================

void thunk_yWQCKHflWNVsbmkMVfBMdga(void)

{
  thunk_yWQCKHflWNVsbmkMVfBMdga();
  return;
}


// =========================================================================
// Function: thunk_jJGKcnfLgdrxxLeuIMkbyODuAc
// Entry: 0x71ba60b4 | Size: 4 bytes
// =========================================================================

void thunk_jJGKcnfLgdrxxLeuIMkbyODuAc(void)

{
  thunk_jJGKcnfLgdrxxLeuIMkbyODuAc();
  return;
}


// =========================================================================
// Function: thunk_ZXqJfnvcfugNBhbectKcQErwKgYSZROgdkCWh
// Entry: 0x71ba60e4 | Size: 4 bytes
// =========================================================================

void thunk_ZXqJfnvcfugNBhbectKcQErwKgYSZROgdkCWh(void)

{
  thunk_ZXqJfnvcfugNBhbectKcQErwKgYSZROgdkCWh();
  return;
}


// =========================================================================
// Function: thunk_zusBgibAXFoDNMrj_DlccYbfX
// Entry: 0x71ba60f0 | Size: 4 bytes
// =========================================================================

void thunk_zusBgibAXFoDNMrj_DlccYbfX(void)

{
  thunk_zusBgibAXFoDNMrj_DlccYbfX();
  return;
}


// =========================================================================
// Function: thunk_dFtdQKBTLXPwuw_uSvOPVjHwM_vzmb
// Entry: 0x71ba60fc | Size: 4 bytes
// =========================================================================

void thunk_dFtdQKBTLXPwuw_uSvOPVjHwM_vzmb(void)

{
  thunk_dFtdQKBTLXPwuw_uSvOPVjHwM_vzmb();
  return;
}


// =========================================================================
// Function: thunk_RehDUAMCkCFfVxNQgtXWNkobr
// Entry: 0x71ba6114 | Size: 4 bytes
// =========================================================================

void thunk_RehDUAMCkCFfVxNQgtXWNkobr(void)

{
  thunk_RehDUAMCkCFfVxNQgtXWNkobr();
  return;
}


// =========================================================================
// Function: thunk_jgSgccKkUfnxtlHenoXAigwPdtyteRaAHbWHtX
// Entry: 0x71ba612c | Size: 4 bytes
// =========================================================================

void thunk_jgSgccKkUfnxtlHenoXAigwPdtyteRaAHbWHtX(void)

{
  thunk_jgSgccKkUfnxtlHenoXAigwPdtyteRaAHbWHtX();
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x71bcfcf0 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: thunk_FUN_7188543c
// Entry: 0x71bd00e8 | Size: 4 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_7188543c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  char *pcVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  byte abStack_1040 [8];
  uint uStack_1038;
  undefined4 *puStack_1034;
  undefined1 auStack_1030 [4096];
  int iStack_30;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iStack_30 = _ext___stack_chk_guard;
  DataMemoryBarrier(0xb);
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  if (((DAT_71202734 & 1) == 0) && (iVar6 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_71202734), iVar6 != 0)) {
    thunk_raw_10ab3090(0x71b450e5,&DAT_71202730,&DAT_70b0e000);
    thunk_SixizuLbAnqfgRApsCY(&DAT_71202734);
  }
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71202730);
  imp___aeabi_memclr8(auStack_1030,0xfff);
  puStack_1034 = &uStack_c;
  imp___vsnprintf_chk(auStack_1030,0xfff,0,0xfff,param_1,puStack_1034);
  uVar1 = imp_strlen(auStack_1030);
  uVar1 = FUN_71886a98(&DAT_712026a8,auStack_1030,uVar1);
  abStack_1040[0] = 10;
  FUN_71886a98(uVar1,abStack_1040,1);
  iVar6 = DAT_71201808;
  if (DAT_71201808 != 0) {
    pcVar2 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_70102094);
    if (*pcVar2 == '\0') {
      puVar4 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_70102084);
      *(undefined2 *)(puVar4 + 2) = 0x1e3;
      *puVar4 = 0x84a44580;
      puVar4[1] = 0xf85a6105;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71886a6c,puVar4,&DAT_70b0e000);
      puVar5 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_70102094);
      *puVar5 = 1;
    }
    pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_70102084);
    if (pbVar3[9] != 0) {
      pbVar3[9] = 0;
      *pbVar3 = *pbVar3 ^ 0xe3;
      pbVar3[1] = pbVar3[1] ^ 0x37;
      pbVar3[2] = pbVar3[2] ^ 0xc5;
      pbVar3[3] = pbVar3[3] ^ 0xf7;
      pbVar3[4] = pbVar3[4] ^ 0x6d;
      pbVar3[5] = pbVar3[5] ^ 0xd;
      pbVar3[6] = pbVar3[6] ^ 0x35;
      pbVar3[7] = pbVar3[7] ^ 0x9f;
      pbVar3[8] = pbVar3[8] ^ 0xe3;
    }
    thunk_kQYqFxAwolEAJmJHuBnNLeFGVBJlINyxDZLgdjRUzMEZAzoSTEgsEiEDNcqptjEx_kzJstpEIQEl
              (abStack_1040,&DAT_712026ac);
    uVar7 = uStack_1038;
    if ((abStack_1040[0] & 1) == 0) {
      uVar7 = (uint)abStack_1040 | 1;
    }
    FUN_717db1ec(iVar6,pbVar3,uVar7);
    if ((abStack_1040[0] & 1) != 0) {
      thunk_qNQrlu(uStack_1038);
    }
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71202730);
  if (_ext___stack_chk_guard != iStack_30) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail();
  }
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x71bd1e78 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x71bd2134 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x71bde8cc | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x71bde940 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: thunk_FUN_714c9824
// Entry: 0x71be3d80 | Size: 4 bytes
// =========================================================================

undefined4 thunk_FUN_714c9824(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  
  iVar1 = DAT_71201808;
  piVar2 = (int *)FUN_717d1dc8();
  if (piVar2 != (int *)0x0) {
    bVar5 = *(int *)(iVar1 + 0x18) != 0;
    iVar4 = 0;
    if (bVar5) {
      iVar4 = *(int *)(iVar1 + 4);
    }
    if (bVar5 && iVar4 != 0) {
      iVar4 = (**(code **)(*piVar2 + 0x390))(piVar2);
      if (iVar4 == 0) {
        uVar3 = FUN_717dade0(piVar2,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 0x18));
        iVar1 = (**(code **)(*piVar2 + 0x390))(piVar2);
        if (iVar1 == 0) {
          return uVar3;
        }
      }
      (**(code **)(*piVar2 + 0x44))(piVar2);
      return 0x3c;
    }
  }
  return 0x3c;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x71be4614 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x71be4684 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x71be46f4 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x71be4764 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x71be47d4 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x71be4844 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x71be48b4 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x71be4924 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x71be4994 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x71be4a04 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x71be4a74 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: imp_free
// Entry: 0x71be4e84 | Size: 4 bytes
// =========================================================================

void imp_free(void)

{
  return;
}


// =========================================================================
// Function: imp_malloc
// Entry: 0x71be4e94 | Size: 4 bytes
// =========================================================================

void imp_malloc(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x71be5464 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x71be54e8 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: imp_pthread_mutex_lock
// Entry: 0x71c1675c | Size: 4 bytes
// =========================================================================

void imp_pthread_mutex_lock(void)

{
  return;
}


// =========================================================================
// Function: imp_pthread_mutex_unlock
// Entry: 0x71c1676c | Size: 4 bytes
// =========================================================================

void imp_pthread_mutex_unlock(void)

{
  return;
}


// =========================================================================
// Function: imp___cxa_finalize
// Entry: 0x71e02020 | Size: 1 bytes
// =========================================================================

void imp___cxa_finalize(void)

{
  return;
}


// =========================================================================
// Function: thunk_raw_10ab3090
// Entry: 0x71e02030 | Size: 1 bytes
// =========================================================================

void thunk_raw_10ab3090(void)

{
  FUN_10ab3090();
  return;
}


// =========================================================================
// Function: imp___register_atfork
// Entry: 0x71e02040 | Size: 1 bytes
// =========================================================================

void imp___register_atfork(void)

{
  return;
}


// =========================================================================
// Function: imp_sysconf
// Entry: 0x71e02050 | Size: 1 bytes
// =========================================================================

void imp_sysconf(void)

{
  return;
}


// =========================================================================
// Function: imp___memset_chk
// Entry: 0x71e02060 | Size: 1 bytes
// =========================================================================

void imp___memset_chk(void)

{
  return;
}


// =========================================================================
// Function: imp_mmap
// Entry: 0x71e02070 | Size: 1 bytes
// =========================================================================

void imp_mmap(void)

{
  return;
}


// =========================================================================
// Function: imp___memcpy_chk
// Entry: 0x71e02080 | Size: 1 bytes
// =========================================================================

void imp___memcpy_chk(void)

{
  return;
}


// =========================================================================
// Function: imp___errno
// Entry: 0x71e02090 | Size: 1 bytes
// =========================================================================

void imp___errno(void)

{
  return;
}


// =========================================================================
// Function: imp_malloc
// Entry: 0x71e020a0 | Size: 1 bytes
// =========================================================================

void imp_malloc(void)

{
  return;
}


// =========================================================================
// Function: imp_memcpy
// Entry: 0x71e020b0 | Size: 1 bytes
// =========================================================================

void imp_memcpy(void)

{
  return;
}


// =========================================================================
// Function: imp___aeabi_memcpy
// Entry: 0x71e020c0 | Size: 1 bytes
// =========================================================================

void imp___aeabi_memcpy(void)

{
  return;
}


// =========================================================================
// Function: thunk_dGrRHE
// Entry: 0x71e020d0 | Size: 1 bytes
// =========================================================================

void thunk_dGrRHE(void)

{
  dGrRHE();
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x71e020e0 | Size: 1 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  qNQrlu();
  return;
}


// =========================================================================
// Function: thunk_MwhHq
// Entry: 0x71e020f0 | Size: 1 bytes
// =========================================================================

void thunk_MwhHq(void)

{
  MwhHq();
  return;
}


// =========================================================================
// Function: imp_free
// Entry: 0x71e02100 | Size: 1 bytes
// =========================================================================

void imp_free(void)

{
  return;
}


// =========================================================================
// Function: imp_realloc
// Entry: 0x71e02110 | Size: 1 bytes
// =========================================================================

void imp_realloc(void)

{
  return;
}


// =========================================================================
// Function: imp_calloc
// Entry: 0x71e02120 | Size: 1 bytes
// =========================================================================

void imp_calloc(void)

{
  return;
}


// =========================================================================
// Function: imp_exp2
// Entry: 0x71e02130 | Size: 1 bytes
// =========================================================================

void imp_exp2(void)

{
  return;
}


// =========================================================================
// Function: imp_exp
// Entry: 0x71e02140 | Size: 1 bytes
// =========================================================================

void imp_exp(void)

{
  return;
}


// =========================================================================
// Function: imp_floor
// Entry: 0x71e02150 | Size: 1 bytes
// =========================================================================

void imp_floor(void)

{
  return;
}


// =========================================================================
// Function: imp_log
// Entry: 0x71e02160 | Size: 1 bytes
// =========================================================================

void imp_log(void)

{
  return;
}


// =========================================================================
// Function: imp_modf
// Entry: 0x71e02170 | Size: 1 bytes
// =========================================================================

void imp_modf(void)

{
  return;
}


// =========================================================================
// Function: imp_sin
// Entry: 0x71e02180 | Size: 1 bytes
// =========================================================================

void imp_sin(void)

{
  return;
}


// =========================================================================
// Function: imp_pow
// Entry: 0x71e02190 | Size: 1 bytes
// =========================================================================

void imp_pow(void)

{
  return;
}


// =========================================================================
// Function: imp_tan
// Entry: 0x71e021a0 | Size: 1 bytes
// =========================================================================

void imp_tan(void)

{
  return;
}


// =========================================================================
// Function: imp_cos
// Entry: 0x71e021b0 | Size: 1 bytes
// =========================================================================

void imp_cos(void)

{
  return;
}


// =========================================================================
// Function: imp_sinf
// Entry: 0x71e021c0 | Size: 1 bytes
// =========================================================================

void imp_sinf(void)

{
  return;
}


// =========================================================================
// Function: imp_cosf
// Entry: 0x71e021d0 | Size: 1 bytes
// =========================================================================

void imp_cosf(void)

{
  return;
}


// =========================================================================
// Function: imp_strchr
// Entry: 0x71e021e0 | Size: 1 bytes
// =========================================================================

void imp_strchr(void)

{
  return;
}


// =========================================================================
// Function: imp_strpbrk
// Entry: 0x71e021f0 | Size: 1 bytes
// =========================================================================

void imp_strpbrk(void)

{
  return;
}


// =========================================================================
// Function: imp_strrchr
// Entry: 0x71e02200 | Size: 1 bytes
// =========================================================================

void imp_strrchr(void)

{
  return;
}


// =========================================================================
// Function: imp_strstr
// Entry: 0x71e02210 | Size: 1 bytes
// =========================================================================

void imp_strstr(void)

{
  return;
}


// =========================================================================
// Function: imp_fopen
// Entry: 0x71e02220 | Size: 1 bytes
// =========================================================================

void imp_fopen(void)

{
  return;
}


// =========================================================================
// Function: imp___vsprintf_chk
// Entry: 0x71e02230 | Size: 1 bytes
// =========================================================================

void imp___vsprintf_chk(void)

{
  return;
}


// =========================================================================
// Function: imp___vsnprintf_chk
// Entry: 0x71e02240 | Size: 1 bytes
// =========================================================================

void imp___vsnprintf_chk(void)

{
  return;
}


// =========================================================================
// Function: imp_fprintf
// Entry: 0x71e02250 | Size: 1 bytes
// =========================================================================

void imp_fprintf(void)

{
  return;
}


// =========================================================================
// Function: imp_pthread_attr_getstacksize
// Entry: 0x71e02260 | Size: 1 bytes
// =========================================================================

void imp_pthread_attr_getstacksize(void)

{
  return;
}


// =========================================================================
// Function: imp_strlen
// Entry: 0x71e02270 | Size: 1 bytes
// =========================================================================

void imp_strlen(void)

{
  return;
}


// =========================================================================
// Function: imp_strncpy
// Entry: 0x71e02280 | Size: 1 bytes
// =========================================================================

void imp_strncpy(void)

{
  return;
}


// =========================================================================
// Function: imp___aeabi_memclr
// Entry: 0x71e02290 | Size: 1 bytes
// =========================================================================

void imp___aeabi_memclr(void)

{
  return;
}


// =========================================================================
// Function: imp___aeabi_memset
// Entry: 0x71e022a0 | Size: 1 bytes
// =========================================================================

void imp___aeabi_memset(void)

{
  return;
}


// =========================================================================
// Function: imp_alcOpenDevice
// Entry: 0x71e022b0 | Size: 1 bytes
// =========================================================================

void imp_alcOpenDevice(void)

{
  return;
}


// =========================================================================
// Function: imp_alcCreateContext
// Entry: 0x71e022c0 | Size: 1 bytes
// =========================================================================

void imp_alcCreateContext(void)

{
  return;
}


// =========================================================================
// Function: thunk_XcxSszXLPjQrEGhecEv_
// Entry: 0x71e022d0 | Size: 1 bytes
// =========================================================================

uint thunk_XcxSszXLPjQrEGhecEv_(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = param_1[2];
  DataMemoryBarrier(0xb);
  if (uVar4 == 0) {
    imp_pthread_once(&DAT_71205114,&LAB_71ba2a50);
    imp_pthread_mutex_lock(&DAT_71205118);
    uVar4 = param_1[2];
    if (uVar4 == 0) {
      uVar4 = DAT_71205110 + 1;
      DataMemoryBarrier(0xb);
      DAT_71205110 = uVar4;
      param_1[2] = uVar4;
    }
    imp_pthread_mutex_unlock(&DAT_71205118);
    puVar1 = (undefined4 *)imp_pthread_getspecific(DAT_7120510c);
    if (puVar1 == (undefined4 *)0x0) goto LAB_71ba26a8;
LAB_71ba2600:
    uVar2 = puVar1[1];
    if (uVar4 <= uVar2) goto LAB_71ba26f4;
    iVar3 = (uVar4 + 0x11 & 0xfffffff0) - 2;
    puVar1 = (undefined4 *)imp_realloc(puVar1,iVar3 * 4 + 8);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      imp_abort();
    }
    imp_memset(puVar1 + uVar2 + 2,0,(iVar3 - uVar2) * 4);
  }
  else {
    puVar1 = (undefined4 *)imp_pthread_getspecific(DAT_7120510c);
    if (puVar1 != (undefined4 *)0x0) goto LAB_71ba2600;
LAB_71ba26a8:
    iVar3 = (uVar4 + 0x11 & 0xfffffff0) - 2;
    puVar1 = (undefined4 *)imp_malloc(iVar3 * 4 + 8);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      imp_abort();
    }
    imp_memset(puVar1 + 2,0,iVar3 * 4);
    *puVar1 = 1;
  }
  puVar1[1] = iVar3;
  imp_pthread_setspecific(DAT_7120510c,puVar1);
LAB_71ba26f4:
  if (puVar1[uVar4 + 1] != 0) {
    return puVar1[uVar4 + 1];
  }
  uVar2 = param_1[1];
  if (uVar2 < 5) {
    uVar2 = 4;
  }
  if ((uVar2 & uVar2 - 1) != 0) {
                    /* WARNING: Subroutine does not return */
    imp_abort();
  }
  iVar5 = *param_1;
  iVar3 = imp_malloc(uVar2 + 3 + iVar5);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    imp_abort();
  }
  uVar2 = iVar3 + uVar2 + 3 & -uVar2;
  *(int *)(uVar2 - 4) = iVar3;
  if (param_1[3] != 0) {
    imp_memcpy(uVar2,param_1[3],iVar5);
    puVar1[uVar4 + 1] = uVar2;
    return uVar2;
  }
  imp_memset(uVar2,0,iVar5);
  puVar1[uVar4 + 1] = uVar2;
  return uVar2;
}


// =========================================================================
// Function: imp_raise
// Entry: 0x71e022e0 | Size: 1 bytes
// =========================================================================

void imp_raise(void)

{
  return;
}


// =========================================================================
// Function: thunk_GFDIUClbc_QcPNgD_wH
// Entry: 0x71e022f0 | Size: 1 bytes
// =========================================================================

void thunk_GFDIUClbc_QcPNgD_wH(void)

{
  GFDIUClbc_QcPNgD_wH();
  return;
}


// =========================================================================
// Function: imp___android_log_print
// Entry: 0x71e02300 | Size: 1 bytes
// =========================================================================

void imp___android_log_print(void)

{
  return;
}


// =========================================================================
// Function: thunk_SixizuLbAnqfgRApsCY
// Entry: 0x71e02310 | Size: 1 bytes
// =========================================================================

void thunk_SixizuLbAnqfgRApsCY(void)

{
  SixizuLbAnqfgRApsCY();
  return;
}


// =========================================================================
// Function: thunk_cuKsjVZRyspaVsDnqLy
// Entry: 0x71e02320 | Size: 1 bytes
// =========================================================================

void thunk_cuKsjVZRyspaVsDnqLy(void)

{
  cuKsjVZRyspaVsDnqLy();
  return;
}


// =========================================================================
// Function: imp_pthread_once
// Entry: 0x71e02330 | Size: 1 bytes
// =========================================================================

void imp_pthread_once(void)

{
  return;
}


// =========================================================================
// Function: imp_pthread_attr_destroy
// Entry: 0x71e02340 | Size: 1 bytes
// =========================================================================

void imp_pthread_attr_destroy(void)

{
  return;
}


// =========================================================================
// Function: imp_pthread_attr_init
// Entry: 0x71e02350 | Size: 1 bytes
// =========================================================================

void imp_pthread_attr_init(void)

{
  return;
}


// =========================================================================
// Function: imp_pthread_attr_getschedparam
// Entry: 0x71e02360 | Size: 1 bytes
// =========================================================================

void imp_pthread_attr_getschedparam(void)

{
  return;
}


// =========================================================================
// Function: imp_pthread_attr_setschedparam
// Entry: 0x71e02370 | Size: 1 bytes
// =========================================================================

void imp_pthread_attr_setschedparam(void)

{
  return;
}


// =========================================================================
// Function: imp_pthread_setschedparam
// Entry: 0x71e02380 | Size: 1 bytes
// =========================================================================

void imp_pthread_setschedparam(void)

{
  return;
}


// =========================================================================
// Function: imp_pthread_cond_init
// Entry: 0x71e02390 | Size: 1 bytes
// =========================================================================

void imp_pthread_cond_init(void)

{
  return;
}


// =========================================================================
// Function: imp_pthread_cond_wait
// Entry: 0x71e023a0 | Size: 1 bytes
// =========================================================================

void imp_pthread_cond_wait(void)

{
  return;
}


// =========================================================================
// Function: imp_pthread_cond_timedwait
// Entry: 0x71e023b0 | Size: 1 bytes
// =========================================================================

void imp_pthread_cond_timedwait(void)

{
  return;
}


// =========================================================================
// Function: imp_pthread_create
// Entry: 0x71e023c0 | Size: 1 bytes
// =========================================================================

void imp_pthread_create(void)

{
  return;
}


// =========================================================================
// Function: imp_pthread_getspecific
// Entry: 0x71e023d0 | Size: 1 bytes
// =========================================================================

void imp_pthread_getspecific(void)

{
  return;
}


// =========================================================================
// Function: imp_pthread_key_create
// Entry: 0x71e023e0 | Size: 1 bytes
// =========================================================================

void imp_pthread_key_create(void)

{
  return;
}


// =========================================================================
// Function: imp_pthread_key_delete
// Entry: 0x71e023f0 | Size: 1 bytes
// =========================================================================

void imp_pthread_key_delete(void)

{
  return;
}


// =========================================================================
// Function: imp_pthread_mutexattr_init
// Entry: 0x71e02400 | Size: 1 bytes
// =========================================================================

void imp_pthread_mutexattr_init(void)

{
  return;
}


// =========================================================================
// Function: imp_pthread_mutexattr_settype
// Entry: 0x71e02410 | Size: 1 bytes
// =========================================================================

void imp_pthread_mutexattr_settype(void)

{
  return;
}


// =========================================================================
// Function: imp_pthread_mutexattr_destroy
// Entry: 0x71e02420 | Size: 1 bytes
// =========================================================================

void imp_pthread_mutexattr_destroy(void)

{
  return;
}


// =========================================================================
// Function: imp_pthread_mutex_destroy
// Entry: 0x71e02430 | Size: 1 bytes
// =========================================================================

void imp_pthread_mutex_destroy(void)

{
  return;
}


// =========================================================================
// Function: imp_pthread_mutex_init
// Entry: 0x71e02440 | Size: 1 bytes
// =========================================================================

void imp_pthread_mutex_init(void)

{
  return;
}


// =========================================================================
// Function: imp_pthread_mutex_lock
// Entry: 0x71e02450 | Size: 1 bytes
// =========================================================================

void imp_pthread_mutex_lock(void)

{
  return;
}


// =========================================================================
// Function: imp_pthread_mutex_unlock
// Entry: 0x71e02460 | Size: 1 bytes
// =========================================================================

void imp_pthread_mutex_unlock(void)

{
  return;
}


// =========================================================================
// Function: imp_pthread_setspecific
// Entry: 0x71e02470 | Size: 1 bytes
// =========================================================================

void imp_pthread_setspecific(void)

{
  return;
}


// =========================================================================
// Function: imp_pthread_join
// Entry: 0x71e02480 | Size: 1 bytes
// =========================================================================

void imp_pthread_join(void)

{
  return;
}


// =========================================================================
// Function: imp_gettid
// Entry: 0x71e02490 | Size: 1 bytes
// =========================================================================

void imp_gettid(void)

{
  return;
}


// =========================================================================
// Function: imp_syscall
// Entry: 0x71e024a0 | Size: 1 bytes
// =========================================================================

void imp_syscall(void)

{
  return;
}


// =========================================================================
// Function: imp_acosf
// Entry: 0x71e024b0 | Size: 1 bytes
// =========================================================================

void imp_acosf(void)

{
  return;
}


// =========================================================================
// Function: imp_asinf
// Entry: 0x71e024c0 | Size: 1 bytes
// =========================================================================

void imp_asinf(void)

{
  return;
}


// =========================================================================
// Function: imp_atan2f
// Entry: 0x71e024d0 | Size: 1 bytes
// =========================================================================

void imp_atan2f(void)

{
  return;
}


// =========================================================================
// Function: imp_ceilf
// Entry: 0x71e024e0 | Size: 1 bytes
// =========================================================================

void imp_ceilf(void)

{
  return;
}


// =========================================================================
// Function: imp_exp2f
// Entry: 0x71e024f0 | Size: 1 bytes
// =========================================================================

void imp_exp2f(void)

{
  return;
}


// =========================================================================
// Function: imp_floorf
// Entry: 0x71e02500 | Size: 1 bytes
// =========================================================================

void imp_floorf(void)

{
  return;
}


// =========================================================================
// Function: imp_fmodf
// Entry: 0x71e02510 | Size: 1 bytes
// =========================================================================

void imp_fmodf(void)

{
  return;
}


// =========================================================================
// Function: imp_ldexpf
// Entry: 0x71e02520 | Size: 1 bytes
// =========================================================================

void imp_ldexpf(void)

{
  return;
}


// =========================================================================
// Function: imp_log10f
// Entry: 0x71e02530 | Size: 1 bytes
// =========================================================================

void imp_log10f(void)

{
  return;
}


// =========================================================================
// Function: imp_powf
// Entry: 0x71e02540 | Size: 1 bytes
// =========================================================================

void imp_powf(void)

{
  return;
}


// =========================================================================
// Function: imp_tanf
// Entry: 0x71e02550 | Size: 1 bytes
// =========================================================================

void imp_tanf(void)

{
  return;
}


// =========================================================================
// Function: imp_sincosf
// Entry: 0x71e02560 | Size: 1 bytes
// =========================================================================

void imp_sincosf(void)

{
  return;
}


// =========================================================================
// Function: imp_atof
// Entry: 0x71e02570 | Size: 1 bytes
// =========================================================================

void imp_atof(void)

{
  return;
}


// =========================================================================
// Function: imp_atoi
// Entry: 0x71e02580 | Size: 1 bytes
// =========================================================================

void imp_atoi(void)

{
  return;
}


// =========================================================================
// Function: imp_gettimeofday
// Entry: 0x71e02590 | Size: 1 bytes
// =========================================================================

void imp_gettimeofday(void)

{
  return;
}


// =========================================================================
// Function: imp_time
// Entry: 0x71e025a0 | Size: 1 bytes
// =========================================================================

void imp_time(void)

{
  return;
}


// =========================================================================
// Function: imp_abort
// Entry: 0x71e025b0 | Size: 1 bytes
// =========================================================================

void imp_abort(void)

{
  return;
}


// =========================================================================
// Function: imp_exit
// Entry: 0x71e025c0 | Size: 1 bytes
// =========================================================================

void imp_exit(void)

{
  return;
}


// =========================================================================
// Function: imp_fclose
// Entry: 0x71e025d0 | Size: 1 bytes
// =========================================================================

void imp_fclose(void)

{
  return;
}


// =========================================================================
// Function: imp_feof
// Entry: 0x71e025e0 | Size: 1 bytes
// =========================================================================

void imp_feof(void)

{
  return;
}


// =========================================================================
// Function: imp_ferror
// Entry: 0x71e025f0 | Size: 1 bytes
// =========================================================================

void imp_ferror(void)

{
  return;
}


// =========================================================================
// Function: imp_fputc
// Entry: 0x71e02600 | Size: 1 bytes
// =========================================================================

void imp_fputc(void)

{
  return;
}


// =========================================================================
// Function: imp_fread
// Entry: 0x71e02610 | Size: 1 bytes
// =========================================================================

void imp_fread(void)

{
  return;
}


// =========================================================================
// Function: imp_fseek
// Entry: 0x71e02620 | Size: 1 bytes
// =========================================================================

void imp_fseek(void)

{
  return;
}


// =========================================================================
// Function: imp_ftell
// Entry: 0x71e02630 | Size: 1 bytes
// =========================================================================

void imp_ftell(void)

{
  return;
}


// =========================================================================
// Function: imp_fwrite
// Entry: 0x71e02640 | Size: 1 bytes
// =========================================================================

void imp_fwrite(void)

{
  return;
}


// =========================================================================
// Function: imp_getenv
// Entry: 0x71e02650 | Size: 1 bytes
// =========================================================================

void imp_getenv(void)

{
  return;
}


// =========================================================================
// Function: imp_glActiveTexture
// Entry: 0x71e02660 | Size: 1 bytes
// =========================================================================

void imp_glActiveTexture(void)

{
  return;
}


// =========================================================================
// Function: imp_glAttachShader
// Entry: 0x71e02670 | Size: 1 bytes
// =========================================================================

void imp_glAttachShader(void)

{
  return;
}


// =========================================================================
// Function: imp_glBindAttribLocation
// Entry: 0x71e02680 | Size: 1 bytes
// =========================================================================

void imp_glBindAttribLocation(void)

{
  return;
}


// =========================================================================
// Function: imp_glBindBuffer
// Entry: 0x71e02690 | Size: 1 bytes
// =========================================================================

void imp_glBindBuffer(void)

{
  return;
}


// =========================================================================
// Function: imp_glBindFramebuffer
// Entry: 0x71e026a0 | Size: 1 bytes
// =========================================================================

void imp_glBindFramebuffer(void)

{
  return;
}


// =========================================================================
// Function: imp_glBindRenderbuffer
// Entry: 0x71e026b0 | Size: 1 bytes
// =========================================================================

void imp_glBindRenderbuffer(void)

{
  return;
}


// =========================================================================
// Function: imp_glBindTexture
// Entry: 0x71e026c0 | Size: 1 bytes
// =========================================================================

void imp_glBindTexture(void)

{
  return;
}


// =========================================================================
// Function: imp_glBufferData
// Entry: 0x71e026d0 | Size: 1 bytes
// =========================================================================

void imp_glBufferData(void)

{
  return;
}


// =========================================================================
// Function: imp_glCheckFramebufferStatus
// Entry: 0x71e026e0 | Size: 1 bytes
// =========================================================================

void imp_glCheckFramebufferStatus(void)

{
  return;
}


// =========================================================================
// Function: imp_glClear
// Entry: 0x71e026f0 | Size: 1 bytes
// =========================================================================

void imp_glClear(void)

{
  return;
}


// =========================================================================
// Function: imp_glClearColor
// Entry: 0x71e02700 | Size: 1 bytes
// =========================================================================

void imp_glClearColor(void)

{
  return;
}


// =========================================================================
// Function: imp_glClearDepthf
// Entry: 0x71e02710 | Size: 1 bytes
// =========================================================================

void imp_glClearDepthf(void)

{
  return;
}


// =========================================================================
// Function: imp_glClearStencil
// Entry: 0x71e02720 | Size: 1 bytes
// =========================================================================

void imp_glClearStencil(void)

{
  return;
}


// =========================================================================
// Function: imp_glCompileShader
// Entry: 0x71e02730 | Size: 1 bytes
// =========================================================================

void imp_glCompileShader(void)

{
  return;
}


// =========================================================================
// Function: imp_glCompressedTexImage2D
// Entry: 0x71e02740 | Size: 1 bytes
// =========================================================================

void imp_glCompressedTexImage2D(void)

{
  return;
}


// =========================================================================
// Function: imp_glCreateProgram
// Entry: 0x71e02750 | Size: 1 bytes
// =========================================================================

void imp_glCreateProgram(void)

{
  return;
}


// =========================================================================
// Function: imp_glCreateShader
// Entry: 0x71e02760 | Size: 1 bytes
// =========================================================================

void imp_glCreateShader(void)

{
  return;
}


// =========================================================================
// Function: imp_glDeleteBuffers
// Entry: 0x71e02770 | Size: 1 bytes
// =========================================================================

void imp_glDeleteBuffers(void)

{
  return;
}


// =========================================================================
// Function: imp_glDeleteFramebuffers
// Entry: 0x71e02780 | Size: 1 bytes
// =========================================================================

void imp_glDeleteFramebuffers(void)

{
  return;
}


// =========================================================================
// Function: imp_glDeleteProgram
// Entry: 0x71e02790 | Size: 1 bytes
// =========================================================================

void imp_glDeleteProgram(void)

{
  return;
}


// =========================================================================
// Function: imp_glDeleteShader
// Entry: 0x71e027a0 | Size: 1 bytes
// =========================================================================

void imp_glDeleteShader(void)

{
  return;
}


// =========================================================================
// Function: imp_glDeleteTextures
// Entry: 0x71e027b0 | Size: 1 bytes
// =========================================================================

void imp_glDeleteTextures(void)

{
  return;
}


// =========================================================================
// Function: imp_glDisable
// Entry: 0x71e027c0 | Size: 1 bytes
// =========================================================================

void imp_glDisable(void)

{
  return;
}


// =========================================================================
// Function: imp_glDisableVertexAttribArray
// Entry: 0x71e027d0 | Size: 1 bytes
// =========================================================================

void imp_glDisableVertexAttribArray(void)

{
  return;
}


// =========================================================================
// Function: imp_glDrawArrays
// Entry: 0x71e027e0 | Size: 1 bytes
// =========================================================================

void imp_glDrawArrays(void)

{
  return;
}


