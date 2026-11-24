// Function: FUN_0019eb94
// Entry: 0019eb94

undefined1 * FUN_0019eb94(long *param_1,undefined8 *param_2,FILE *param_3)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  void *pvVar6;
  char *pcVar7;
  size_t sVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *in_x12;
  undefined1 *puVar13;
  undefined1 *unaff_x20;
  undefined1 *unaff_x23;
  size_t unaff_x24;
  undefined1 *unaff_x27;
  byte local_10c;
  undefined1 *local_108;
  undefined1 *local_100;
  undefined8 local_f8;
  char local_f0 [128];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  lVar9 = *param_1;
  puVar1 = (undefined1 *)0xde0600f0ca761eb9;
  if (lVar9 != 0) {
    puVar1 = (undefined1 *)0x2467c250713f82d4;
  }
  local_f0[8] = '\0';
  local_f0[9] = '\0';
  local_f0[10] = '\0';
  local_f0[0xb] = '\0';
  local_f0[0xc] = '\0';
  local_f0[0xd] = '\0';
  local_f0[0xe] = '\0';
  local_f0[0xf] = '\0';
  local_f0[0] = '\0';
  local_f0[1] = '\0';
  local_f0[2] = '\0';
  local_f0[3] = '\0';
  local_f0[4] = '\0';
  local_f0[5] = '\0';
  local_f0[6] = '\0';
  local_f0[7] = '\0';
  local_f0[0x18] = '\0';
  local_f0[0x19] = '\0';
  local_f0[0x1a] = '\0';
  local_f0[0x1b] = '\0';
  local_f0[0x1c] = '\0';
  local_f0[0x1d] = '\0';
  local_f0[0x1e] = '\0';
  local_f0[0x1f] = '\0';
  local_f0[0x10] = '\0';
  local_f0[0x11] = '\0';
  local_f0[0x12] = '\0';
  local_f0[0x13] = '\0';
  local_f0[0x14] = '\0';
  local_f0[0x15] = '\0';
  local_f0[0x16] = '\0';
  local_f0[0x17] = '\0';
  local_f0[0x28] = '\0';
  local_f0[0x29] = '\0';
  local_f0[0x2a] = '\0';
  local_f0[0x2b] = '\0';
  local_f0[0x2c] = '\0';
  local_f0[0x2d] = '\0';
  local_f0[0x2e] = '\0';
  local_f0[0x2f] = '\0';
  local_f0[0x20] = '\0';
  local_f0[0x21] = '\0';
  local_f0[0x22] = '\0';
  local_f0[0x23] = '\0';
  local_f0[0x24] = '\0';
  local_f0[0x25] = '\0';
  local_f0[0x26] = '\0';
  local_f0[0x27] = '\0';
  local_f0[0x38] = '\0';
  local_f0[0x39] = '\0';
  local_f0[0x3a] = '\0';
  local_f0[0x3b] = '\0';
  local_f0[0x3c] = '\0';
  local_f0[0x3d] = '\0';
  local_f0[0x3e] = '\0';
  local_f0[0x3f] = '\0';
  local_f0[0x30] = '\0';
  local_f0[0x31] = '\0';
  local_f0[0x32] = '\0';
  local_f0[0x33] = '\0';
  local_f0[0x34] = '\0';
  local_f0[0x35] = '\0';
  local_f0[0x36] = '\0';
  local_f0[0x37] = '\0';
  local_f0[0x48] = '\0';
  local_f0[0x49] = '\0';
  local_f0[0x4a] = '\0';
  local_f0[0x4b] = '\0';
  local_f0[0x4c] = '\0';
  local_f0[0x4d] = '\0';
  local_f0[0x4e] = '\0';
  local_f0[0x4f] = '\0';
  local_f0[0x40] = '\0';
  local_f0[0x41] = '\0';
  local_f0[0x42] = '\0';
  local_f0[0x43] = '\0';
  local_f0[0x44] = '\0';
  local_f0[0x45] = '\0';
  local_f0[0x46] = '\0';
  local_f0[0x47] = '\0';
  local_f0[0x58] = '\0';
  local_f0[0x59] = '\0';
  local_f0[0x5a] = '\0';
  local_f0[0x5b] = '\0';
  local_f0[0x5c] = '\0';
  local_f0[0x5d] = '\0';
  local_f0[0x5e] = '\0';
  local_f0[0x5f] = '\0';
  local_f0[0x50] = '\0';
  local_f0[0x51] = '\0';
  local_f0[0x52] = '\0';
  local_f0[0x53] = '\0';
  local_f0[0x54] = '\0';
  local_f0[0x55] = '\0';
  local_f0[0x56] = '\0';
  local_f0[0x57] = '\0';
  local_f0[0x68] = '\0';
  local_f0[0x69] = '\0';
  local_f0[0x6a] = '\0';
  local_f0[0x6b] = '\0';
  local_f0[0x6c] = '\0';
  local_f0[0x6d] = '\0';
  local_f0[0x6e] = '\0';
  local_f0[0x6f] = '\0';
  local_f0[0x60] = '\0';
  local_f0[0x61] = '\0';
  local_f0[0x62] = '\0';
  local_f0[99] = '\0';
  local_f0[100] = '\0';
  local_f0[0x65] = '\0';
  local_f0[0x66] = '\0';
  local_f0[0x67] = '\0';
  local_f0[0x78] = '\0';
  local_f0[0x79] = '\0';
  local_f0[0x7a] = '\0';
  local_f0[0x7b] = '\0';
  local_f0[0x7c] = '\0';
  local_f0[0x7d] = '\0';
  local_f0[0x7e] = '\0';
  local_f0[0x7f] = '\0';
  local_f0[0x70] = '\0';
  local_f0[0x71] = '\0';
  local_f0[0x72] = '\0';
  local_f0[0x73] = '\0';
  local_f0[0x74] = '\0';
  local_f0[0x75] = '\0';
  local_f0[0x76] = '\0';
  local_f0[0x77] = '\0';
  puVar3 = puVar1;
  puVar4 = (undefined1 *)0xde0600f0ca761eb9;
  puVar5 = (undefined1 *)0x5e1b922e6e5165fd;
  local_f8 = param_2;
LAB_0019ec58:
  while( true ) {
    while (puVar13 = in_x12, puVar12 = puVar5, puVar11 = puVar4, puVar10 = puVar3, puVar3 = puVar10,
          puVar4 = puVar11, puVar5 = puVar12, in_x12 = puVar13, -0x1ea92f4b59985473 < (long)puVar12)
    {
      if ((long)puVar12 < 0x1b767e91f4196530) {
        if ((long)puVar12 < -0x74736ab24c9835f) {
          puVar5 = (undefined1 *)0xe5248230beacb780;
          if ((puVar12 != (undefined1 *)0xe156d0b4a667ab8e) &&
             (puVar5 = puVar12, puVar12 == (undefined1 *)0xe5248230beacb780)) {
            puVar5 = (undefined1 *)0xf8b8c954db367ca1;
            in_x12 = (undefined1 *)0xffffffffffffffff;
          }
        }
        else if (puVar12 == (undefined1 *)0xf8b8c954db367ca1) {
          pcVar7 = fgets(local_f0,0x80,param_3);
          puVar5 = (undefined1 *)0xd937f9741a083d9f;
          unaff_x20 = puVar13;
          if (pcVar7 != (char *)0x0) {
            puVar5 = (undefined1 *)0x4c1b9edb721e7222;
          }
        }
        else if (puVar12 == &DAT_2b590051c346d3e) {
          puVar4 = (undefined1 *)*param_1;
          puVar5 = (undefined1 *)0x932656effdaaeaa5;
        }
      }
      else if ((long)puVar12 < 0x4c1b9edb721e7222) {
        puVar5 = (undefined1 *)0xf8b8c954db367ca1;
        in_x12 = unaff_x27;
        if ((puVar12 != &DAT_1b767e91f4196530) &&
           (puVar5 = puVar12, in_x12 = puVar13, puVar12 == (undefined1 *)0x2467c250713f82d4)) {
          FUN_001cc250(lVar9,0,*local_f8);
          puVar5 = (undefined1 *)0xe5248230beacb780;
        }
      }
      else if (puVar12 == (undefined1 *)0x4c1b9edb721e7222) {
        local_108 = (undefined1 *)0x0;
        if (unaff_x20 != (undefined1 *)0xffffffffffffffff) {
          local_108 = unaff_x20;
        }
        sVar8 = __strlen_chk(local_f0,0x80);
        local_10c = *(char *)((long)&local_f8 + sVar8 + 7) == '\n';
        unaff_x24 = sVar8 - 1;
        if (!(bool)local_10c) {
          unaff_x24 = sVar8;
        }
        unaff_x27 = local_108 + unaff_x24;
        local_100 = unaff_x27 + 1;
        puVar5 = (undefined1 *)0xc0eb019135e10a40;
        if (local_100 <= (undefined1 *)*local_f8) {
          puVar5 = &DAT_2b590051c346d3e;
        }
      }
      else if (puVar12 == (undefined1 *)0x5e1b922e6e5165fd) {
        puVar5 = puVar1;
      }
    }
    if ((long)puVar12 < -0x3f14fe6eca1ef5c0) break;
    if ((long)puVar12 < -0x24441355abedd3a5) {
      if (puVar12 == (undefined1 *)0xc0eb019135e10a40) {
        *local_f8 = unaff_x27 + (0x81 - ((ulong)local_100 & 0x7f));
        unaff_x23 = realloc((void *)*param_1,
                            (size_t)(unaff_x27 + (0x81 - ((ulong)local_100 & 0x7f))));
        *param_1 = (long)unaff_x23;
        puVar5 = (undefined1 *)0xdbbbecaa54122c5b;
        if (unaff_x23 != (undefined1 *)0x0) {
          puVar5 = (undefined1 *)0x8b1dacf6763fda11;
        }
      }
      else {
        puVar3 = unaff_x20;
        puVar5 = (undefined1 *)0xd136b47bc732bd2b;
        if ((puVar12 != (undefined1 *)0xd937f9741a083d9f) &&
           (puVar3 = puVar10, puVar5 = puVar12, puVar12 == (undefined1 *)0xd136b47bc732bd2b)) {
          if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return puVar10;
        }
      }
    }
    else {
      if (puVar12 == (undefined1 *)0xdbbbecaa54122c5b) goto LAB_0019f05c;
      if (puVar12 == (undefined1 *)0xde0600f0ca761eb9) {
        *local_f8 = 0x80;
        pvVar6 = calloc(0x80,1);
        *param_1 = (long)pvVar6;
        puVar5 = (undefined1 *)0xa0d7c67c60e7a82e;
        if (pvVar6 != (void *)0x0) {
          puVar5 = (undefined1 *)0xe156d0b4a667ab8e;
        }
      }
    }
  }
  if ((long)puVar12 < -0x6cd9a9100255155b) {
    puVar4 = unaff_x23;
    puVar5 = (undefined1 *)0x932656effdaaeaa5;
    if ((puVar12 == (undefined1 *)0x8b1dacf6763fda11) ||
       (puVar10 = unaff_x27, puVar4 = puVar11, puVar5 = puVar12,
       puVar12 != (undefined1 *)0x8b5d2aa4730e6d53)) goto LAB_0019ec58;
  }
  else {
    if (puVar12 == (undefined1 *)0x932656effdaaeaa5) {
      memcpy(puVar11 + (long)local_108,local_f0,unaff_x24);
      unaff_x27[*param_1] = 0;
      puVar5 = (undefined1 *)0x8b5d2aa4730e6d53;
      if ((local_10c & 1) == 0) {
        puVar5 = &DAT_1b767e91f4196530;
      }
      goto LAB_0019ec58;
    }
    if (puVar12 != (undefined1 *)0xa0d7c67c60e7a82e) goto LAB_0019ec58;
LAB_0019f05c:
    puVar10 = (undefined1 *)0xffffffffffffffff;
  }
  puVar3 = puVar10;
  puVar4 = puVar11;
  puVar5 = (undefined1 *)0xd136b47bc732bd2b;
  goto LAB_0019ec58;
}


