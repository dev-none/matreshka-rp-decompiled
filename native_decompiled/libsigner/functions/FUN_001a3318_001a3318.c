// Function: FUN_001a3318
// Entry: 001a3318

uint FUN_001a3318(char *param_1,undefined8 *param_2,ulong param_3)

{
  undefined1 *puVar1;
  long lVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  char *__file;
  int *piVar7;
  undefined8 *puVar8;
  undefined8 *in_x7;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  char *pcVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  int unaff_w23;
  undefined1 *unaff_x24;
  ulong uVar16;
  ulong unaff_x27;
  char *local_100;
  undefined8 *local_f8;
  stat sStack_f0;
  
  lVar2 = tpidr_el0;
  sStack_f0.__unused[1] = *(long *)(lVar2 + 0x28);
  pcVar12 = (char *)*param_2;
  puVar1 = (undefined1 *)0x7772f905052e4c0f;
  if (pcVar12 != (char *)0x0) {
    puVar1 = (undefined1 *)0xae2d64bf93f1b31a;
  }
  pcVar3 = param_1;
  puVar4 = param_2;
  puVar9 = puVar1;
  puVar11 = (undefined1 *)0xae2d64bf93f1b31a;
  puVar5 = (undefined1 *)0x21d53de2b345f472;
LAB_001a3498:
  while( true ) {
    puVar13 = puVar5;
    puVar10 = puVar11;
    puVar8 = puVar4;
    __file = pcVar3;
    puVar15 = (undefined1 *)((ulong)puVar10 & 0xffffffff);
    puVar14 = (undefined1 *)((ulong)puVar9 & 0xffffffff);
    uVar16 = param_3 & 0xffffffff;
    pcVar3 = __file;
    puVar4 = puVar8;
    param_3 = uVar16;
    puVar9 = puVar14;
    puVar11 = puVar15;
    puVar5 = puVar13;
    if (-0x74736ab24c98360 < (long)puVar13) break;
    if ((long)puVar13 < -0x26c8068be5f7c261) {
      if ((long)puVar13 < -0x51d29b406c0e4ce6) {
        puVar11 = (undefined1 *)((ulong)unaff_x24 & 0xffffffff);
        puVar5 = (undefined1 *)0xdbbbecaa54122c5b;
        if ((puVar13 != (undefined1 *)0x8b1dacf6763fda11) &&
           (puVar11 = puVar15, puVar5 = puVar13, puVar13 == (undefined1 *)0xa0d7c67c60e7a82e)) {
          puVar9 = (undefined1 *)(unaff_x27 & 0xffffffff);
          puVar5 = &DAT_2b590051c346d3e;
        }
      }
      else if (puVar13 == (undefined1 *)0xae2d64bf93f1b31a) {
        pcVar3 = pcVar12;
        puVar4 = (undefined8 *)0x0;
        param_3 = 0;
        puVar5 = (undefined1 *)0xdc6dd27061ebaf34;
      }
      else {
        pcVar3 = local_100;
        puVar4 = local_f8;
        param_3 = (ulong)unaff_x24 & 0xffffffff;
        puVar5 = (undefined1 *)0xdc6dd27061ebaf34;
        if ((puVar13 != (undefined1 *)0xc0eb019135e10a40) &&
           (pcVar3 = __file, puVar4 = puVar8, param_3 = uVar16, puVar5 = puVar13,
           puVar13 == (undefined1 *)0xcb528befcd0fb52f)) {
LAB_001a3474:
          pcVar3 = __file;
          puVar4 = puVar8;
          param_3 = uVar16;
          puVar5 = (undefined1 *)0xd937f9741a083d9f;
        }
      }
    }
    else if ((long)puVar13 < -0x21f9ff0f3589e147) {
      if (puVar13 == (undefined1 *)0xd937f9741a083d9f) {
        param_1[0] = '\n';
        param_1[1] = '\0';
        param_1[2] = '\0';
        param_1[3] = '\0';
        puVar9 = (undefined1 *)0x1;
        puVar5 = &DAT_2b590051c346d3e;
      }
      else if (puVar13 == (undefined1 *)0xdc6dd27061ebaf34) {
        iVar6 = stat(__file,&sStack_f0);
        in_x7 = puVar8;
        puVar5 = (undefined1 *)0x3f365012db6b56c1;
        unaff_x27 = uVar16;
        if (iVar6 != -1) {
          puVar5 = (undefined1 *)0x4c1b9edb721e7222;
        }
      }
      else if (puVar13 == (undefined1 *)0xdbbbecaa54122c5b) {
        if (*(long *)(lVar2 + 0x28) != sStack_f0.__unused[1]) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return ((uint)puVar10 ^ 1) & 1;
      }
    }
    else if (puVar13 == (undefined1 *)0xde0600f0ca761eb9) {
      puVar5 = (undefined1 *)0xa0d7c67c60e7a82e;
      if (unaff_w23 != 0xd) {
        puVar5 = (undefined1 *)0xe156d0b4a667ab8e;
      }
    }
    else {
      puVar5 = (undefined1 *)0xd937f9741a083d9f;
      if ((puVar13 != (undefined1 *)0xe156d0b4a667ab8e) &&
         (puVar5 = puVar13, puVar13 == (undefined1 *)0xe5248230beacb780)) goto LAB_001a3474;
    }
  }
  if ((long)puVar13 < 0x2467c250713f82d4) {
    if ((long)puVar13 < 0x3a4ee4b4cd18045) {
      puVar9 = (undefined1 *)(unaff_x27 & 0xffffffff);
      puVar5 = &DAT_2b590051c346d3e;
      if ((puVar13 != (undefined1 *)0xf8b8c954db367ca1) &&
         (puVar9 = puVar14, puVar5 = puVar13, puVar13 == &DAT_2b590051c346d3e)) {
        local_f8 = (undefined8 *)((long)in_x7 + 1);
        local_100 = (char *)param_2[(long)local_f8];
        puVar5 = (undefined1 *)0x8b1dacf6763fda11;
        unaff_x24 = puVar14;
        if (local_100 != (char *)0x0) {
          puVar5 = (undefined1 *)0xc0eb019135e10a40;
        }
      }
    }
    else if (puVar13 == (undefined1 *)0x3a4ee4b4cd18045) {
      puVar5 = (undefined1 *)0x5e1b922e6e5165fd;
      if (unaff_w23 != 0x14) {
        puVar5 = (undefined1 *)0xcb528befcd0fb52f;
      }
    }
    else if (puVar13 == (undefined1 *)0x12b21488b9618371) {
      puVar5 = (undefined1 *)0xde0600f0ca761eb9;
      if (0x13 < unaff_w23) {
        puVar5 = (undefined1 *)0x3a4ee4b4cd18045;
      }
    }
    else if (puVar13 == (undefined1 *)0x21d53de2b345f472) {
      puVar5 = puVar1;
    }
    goto LAB_001a3498;
  }
  if ((long)puVar13 < 0x5e1b922e6e5165fd) {
    if (puVar13 == (undefined1 *)0x2467c250713f82d4) {
      puVar5 = (undefined1 *)0xf8b8c954db367ca1;
      if (1 < unaff_w23 - 1U) {
        puVar5 = (undefined1 *)0xe5248230beacb780;
      }
      goto LAB_001a3498;
    }
    if (puVar13 == (undefined1 *)0x3f365012db6b56c1) {
      piVar7 = (int *)__errno();
      unaff_w23 = *piVar7;
      puVar5 = &DAT_6b9fb694821e6034;
      goto LAB_001a3498;
    }
    if (puVar13 != (undefined1 *)0x4c1b9edb721e7222) goto LAB_001a3498;
    puVar11 = (undefined1 *)0x1;
  }
  else {
    puVar9 = (undefined1 *)(unaff_x27 & 0xffffffff);
    puVar5 = &DAT_2b590051c346d3e;
    if (puVar13 == (undefined1 *)0x5e1b922e6e5165fd) goto LAB_001a3498;
    if (puVar13 == &DAT_6b9fb694821e6034) {
      puVar9 = puVar14;
      puVar5 = (undefined1 *)0x2467c250713f82d4;
      if (0xc < unaff_w23) {
        puVar5 = (undefined1 *)0x12b21488b9618371;
      }
      goto LAB_001a3498;
    }
    puVar9 = puVar14;
    puVar5 = puVar13;
    if (puVar13 != (undefined1 *)0x7772f905052e4c0f) goto LAB_001a3498;
    puVar11 = (undefined1 *)0x0;
  }
  puVar9 = puVar14;
  puVar5 = (undefined1 *)0xdbbbecaa54122c5b;
  goto LAB_001a3498;
}


