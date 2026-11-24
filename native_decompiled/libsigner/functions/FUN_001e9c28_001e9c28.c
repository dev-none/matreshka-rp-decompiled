// Function: FUN_001e9c28
// Entry: 001e9c28

void FUN_001e9c28(int *param_1,uint *param_2,int param_3,uint param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  int *piVar9;
  int *piVar10;
  undefined1 *puVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  undefined1 *puVar15;
  ulong uVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  int *unaff_x21;
  int *unaff_x23;
  ulong unaff_x26;
  ulong unaff_x27;
  ulong uVar19;
  ulong local_98;
  uint local_6c;
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  uVar16 = (ulong)(param_4 >> 2);
  uVar6 = *param_2;
  uVar7 = (param_4 + param_3) - 1;
  uVar2 = uVar16;
  if ((param_4 & 3) != 0) {
    uVar2 = uVar16 + 1;
  }
  puVar3 = (undefined1 *)0xdbbbecaa54122c5b;
  if (uVar2 != 0) {
    puVar3 = (undefined1 *)0x932656effdaaeaa5;
  }
  puVar4 = (undefined1 *)0xe156d0b4a667ab8e;
  if (uVar6 <= uVar7) {
    puVar4 = (undefined1 *)0xde0600f0ca761eb9;
  }
  piVar13 = (int *)(4 - ((ulong)-param_4 & 3));
  puVar5 = (undefined1 *)0x5e1b922e6e5165fd;
  if (param_4 + param_3 <= uVar6) {
    puVar5 = (undefined1 *)0xcb528befcd0fb52f;
  }
  piVar9 = param_1;
  piVar10 = piVar13;
  puVar11 = puVar5;
  puVar18 = (undefined1 *)0x3a4ee4b4cd18045;
LAB_001e9e7c:
  while( true ) {
    puVar17 = puVar18;
    puVar15 = puVar11;
    piVar14 = piVar10;
    piVar12 = piVar9;
    puVar18 = puVar17;
    piVar9 = piVar12;
    piVar10 = piVar14;
    if ((long)puVar17 < -0x1ea92f4b59985472) break;
    if ((long)puVar17 < 0x1b767e91f4196530) {
      if ((long)puVar17 < -0x74736ab24c9835f) {
        piVar10 = unaff_x21;
        puVar11 = (undefined1 *)((ulong)puVar15 & 0xffffffff);
        puVar18 = (undefined1 *)0x4c1b9edb721e7222;
        if ((puVar17 != (undefined1 *)0xe156d0b4a667ab8e) &&
           (piVar10 = piVar14, puVar11 = (undefined1 *)((ulong)puVar15 & 0xffffffff),
           puVar18 = puVar17, puVar17 == (undefined1 *)0xe5248230beacb780)) {
          uVar1 = *param_2 + 0x80;
          unaff_x26 = (ulong)uVar1;
          puVar18 = (undefined1 *)0xd937f9741a083d9f;
          if (uVar1 <= uVar7) {
            puVar18 = (undefined1 *)0xf8b8c954db367ca1;
          }
          *param_2 = uVar1;
          puVar11 = (undefined1 *)((ulong)puVar15 & 0xffffffff);
        }
      }
      else {
        piVar9 = unaff_x23;
        puVar11 = (undefined1 *)(unaff_x26 & 0xffffffff);
        puVar18 = (undefined1 *)0xa0d7c67c60e7a82e;
        if (puVar17 != (undefined1 *)0xf8b8c954db367ca1) {
          piVar9 = piVar12;
          puVar11 = (undefined1 *)((ulong)puVar15 & 0xffffffff);
          puVar18 = (undefined1 *)0x1db1d1f44155ec69;
          if ((puVar17 != &DAT_2b590051c346d3e) &&
             (puVar11 = (undefined1 *)((ulong)puVar15 & 0xffffffff), puVar18 = puVar17,
             puVar17 == (undefined1 *)0x3a4ee4b4cd18045)) {
            puVar11 = (undefined1 *)((ulong)puVar15 & 0xffffffff);
            puVar18 = puVar5;
          }
        }
      }
    }
    else if ((long)puVar17 < 0x4c1b9edb721e7222) {
      if (puVar17 == &DAT_1b767e91f4196530) {
        uVar1 = *(uint *)(*(long *)(param_2 + 2) + (ulong)(uint)((int)unaff_x27 + param_3) * 4);
        uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
        local_6c = uVar1 >> 0x10 | uVar1 << 0x10;
        piVar12 = piVar13;
        if (unaff_x27 <= uVar16) {
          piVar12 = (int *)0x4;
        }
        memcpy((void *)(param_5 + unaff_x27 * 4),&local_6c,(size_t)piVar12);
        local_98 = unaff_x27 + 1;
        puVar18 = (undefined1 *)0xd136b47bc732bd2b;
        if (local_98 != uVar2) {
          puVar18 = (undefined1 *)0x8b5d2aa4730e6d53;
        }
        goto LAB_001ea3b8;
      }
      if (puVar17 == (undefined1 *)0x2467c250713f82d4) {
        *param_1 = 2;
        puVar11 = (undefined1 *)((ulong)puVar15 & 0xffffffff);
        puVar18 = (undefined1 *)0x1db1d1f44155ec69;
      }
      else {
        puVar11 = (undefined1 *)((ulong)puVar15 & 0xffffffff);
        if (puVar17 == (undefined1 *)0x1db1d1f44155ec69) {
          if (*(long *)(lVar8 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
      }
    }
    else if (puVar17 == (undefined1 *)0x4c1b9edb721e7222) {
      piVar14[uVar7] = 0;
      puVar18 = (undefined1 *)0xc0eb019135e10a40;
      if (*param_1 != 0) {
        puVar18 = &DAT_2b590051c346d3e;
      }
LAB_001ea3b8:
      puVar11 = (undefined1 *)((ulong)puVar15 & 0xffffffff);
    }
    else {
      puVar11 = (undefined1 *)((ulong)puVar15 & 0xffffffff);
      if (puVar17 == (undefined1 *)0x5e1b922e6e5165fd) {
        unaff_x21 = *(int **)(param_2 + 2);
        puVar11 = (undefined1 *)((ulong)puVar15 & 0xffffffff);
        puVar18 = puVar4;
      }
    }
  }
  if (-0x34ad741032f04ad2 < (long)puVar17) {
    if ((long)puVar17 < -0x26c8068be5f7c261) {
      puVar11 = (undefined1 *)((ulong)puVar15 & 0xffffffff);
      puVar18 = (undefined1 *)0x8b1dacf6763fda11;
      if ((puVar17 != (undefined1 *)0xcb528befcd0fb52f) &&
         (puVar11 = (undefined1 *)((ulong)puVar15 & 0xffffffff), puVar18 = puVar17,
         puVar17 == (undefined1 *)0xd136b47bc732bd2b)) {
        puVar11 = (undefined1 *)((ulong)puVar15 & 0xffffffff);
        puVar18 = (undefined1 *)0x1db1d1f44155ec69;
      }
    }
    else {
      piVar10 = unaff_x23;
      puVar11 = (undefined1 *)((ulong)puVar15 & 0xffffffff);
      puVar18 = (undefined1 *)0x4c1b9edb721e7222;
      if (puVar17 != (undefined1 *)0xd937f9741a083d9f) {
        piVar10 = piVar14;
        puVar11 = (undefined1 *)((ulong)puVar15 & 0xffffffff);
        puVar18 = (undefined1 *)0x1db1d1f44155ec69;
        if ((puVar17 != (undefined1 *)0xdbbbecaa54122c5b) &&
           (puVar11 = (undefined1 *)((ulong)puVar15 & 0xffffffff), puVar18 = puVar17,
           puVar17 == (undefined1 *)0xde0600f0ca761eb9)) {
          piVar9 = unaff_x21;
          puVar11 = (undefined1 *)(ulong)uVar6;
          puVar18 = (undefined1 *)0xa0d7c67c60e7a82e;
        }
      }
    }
    goto LAB_001e9e7c;
  }
  if ((long)puVar17 < -0x6cd9a9100255155b) {
    puVar11 = (undefined1 *)((ulong)puVar15 & 0xffffffff);
    puVar18 = puVar3;
    if ((puVar17 == (undefined1 *)0x8b1dacf6763fda11) ||
       (puVar11 = (undefined1 *)((ulong)puVar15 & 0xffffffff), puVar18 = puVar17, uVar19 = local_98,
       puVar17 != (undefined1 *)0x8b5d2aa4730e6d53)) goto LAB_001e9e7c;
  }
  else {
    if (puVar17 != (undefined1 *)0x932656effdaaeaa5) {
      if (puVar17 == (undefined1 *)0xa0d7c67c60e7a82e) {
        unaff_x23 = realloc(piVar12,(ulong)((int)puVar15 + 0x80) << 2);
        puVar18 = (undefined1 *)0x2467c250713f82d4;
        if (unaff_x23 != (int *)0x0) {
          puVar18 = (undefined1 *)0xe5248230beacb780;
        }
        *(int **)(param_2 + 2) = unaff_x23;
        puVar11 = (undefined1 *)((ulong)puVar15 & 0xffffffff);
      }
      else {
        puVar11 = (undefined1 *)((ulong)puVar15 & 0xffffffff);
        if (puVar17 == (undefined1 *)0xc0eb019135e10a40) {
          puVar11 = (undefined1 *)((ulong)puVar15 & 0xffffffff);
          puVar18 = (undefined1 *)0x8b1dacf6763fda11;
        }
      }
      goto LAB_001e9e7c;
    }
    uVar19 = 0;
  }
  puVar11 = (undefined1 *)((ulong)puVar15 & 0xffffffff);
  puVar18 = &DAT_1b767e91f4196530;
  unaff_x27 = uVar19;
  goto LAB_001e9e7c;
}


