// Function: FUN_001153ec
// Entry: 001153ec

void FUN_001153ec(long param_1,char *param_2,code *param_3,undefined8 param_4)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  size_t sVar7;
  long lVar8;
  int *piVar9;
  char cVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  char *pcVar19;
  long lVar20;
  undefined1 auStack_ad8 [17];
  byte local_ac7;
  ulong local_aa8;
  undefined4 local_a9c;
  char local_a80 [1031];
  char acStack_679 [512];
  char acStack_479 [517];
  char local_274 [516];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  memset(acStack_479 + 1,0,0x201);
  memset(acStack_679,0,0x201);
  sVar7 = strlen(param_2);
  if (sVar7 + 1 < 0x201) {
    memset(auStack_ad8,0,0x458);
    __strcpy_chk(acStack_479 + 1,param_2,0x201);
    if ((acStack_479[sVar7] != '/') && (acStack_479[sVar7] != '\\')) {
      acStack_479[sVar7 + 1] = '/';
      sVar7 = sVar7 + 1;
    }
    uVar12 = 0x200 - sVar7;
    if (0x1ff < uVar12) {
      uVar12 = 0x200;
    }
    if ((param_1 == 0) || (uVar2 = *(uint *)(param_1 + 0x10), uVar2 == 0)) {
LAB_00115844:
      uVar14 = 0;
    }
    else {
      uVar18 = 0;
      puVar13 = (undefined8 *)((ulong)local_274 | 1);
      while( true ) {
        if (((param_1 == 0) || (plVar11 = *(long **)(param_1 + 0x68), plVar11 == (long *)0x0)) ||
           (*(uint *)(param_1 + 0x10) <= uVar18)) {
          lVar8 = 0;
        }
        else {
          lVar8 = *plVar11 + (ulong)*(uint *)(plVar11[4] + (ulong)uVar18 * 4);
        }
        iVar5 = FUN_0010f008(param_1,uVar18,lVar8,auStack_ad8,0);
        if (iVar5 == 0) break;
        lVar8 = __strlen_chk(local_a80,0x400);
        pcVar19 = local_a80;
        if (lVar8 == 0) {
          uVar14 = 0xfffffffe;
          goto LAB_00115848;
        }
        for (; (*pcVar19 == '/' || (*pcVar19 == '\\')); pcVar19 = pcVar19 + 1) {
        }
        lVar15 = 0;
        lVar20 = 0;
        lVar17 = 0;
        do {
          cVar10 = pcVar19[lVar17];
          if ((cVar10 == '\\') || (cVar10 == '/')) {
            if (lVar15 != 0) {
              iVar5 = strcmp(local_a80 + lVar20,".");
              if ((iVar5 == 0) || (iVar5 = strcmp(local_a80 + lVar20,".."), iVar5 == 0)) {
                lVar15 = 0;
              }
              else {
                lVar1 = lVar20 + lVar15;
                lVar15 = 0;
                lVar20 = lVar1 + 1;
                local_a80[lVar1] = cVar10;
              }
            }
          }
          else {
            local_a80[lVar15 + lVar20] = cVar10;
            lVar15 = lVar15 + 1;
          }
          lVar17 = lVar17 + 1;
        } while (lVar8 != lVar17);
        if (((lVar15 == 0) || (iVar5 = strcmp(local_a80 + lVar20,"."), iVar5 == 0)) ||
           (iVar5 = strcmp(local_a80 + lVar20,".."), iVar5 == 0)) {
          local_a80[lVar20] = '\0';
        }
        __strncpy_chk2(acStack_479 + sVar7 + 1,local_a80,uVar12,0xffffffffffffffff,0x200);
        puVar13[1] = 0;
        *puVar13 = 0;
        puVar13[3] = 0;
        puVar13[2] = 0;
        puVar13[5] = 0;
        puVar13[4] = 0;
        puVar13[7] = 0;
        puVar13[6] = 0;
        puVar13[9] = 0;
        puVar13[8] = 0;
        puVar13[0xb] = 0;
        puVar13[10] = 0;
        puVar13[0xd] = 0;
        puVar13[0xc] = 0;
        puVar13[0xf] = 0;
        puVar13[0xe] = 0;
        puVar13[0x11] = 0;
        puVar13[0x10] = 0;
        puVar13[0x13] = 0;
        puVar13[0x12] = 0;
        puVar13[0x15] = 0;
        puVar13[0x14] = 0;
        puVar13[0x17] = 0;
        puVar13[0x16] = 0;
        puVar13[0x19] = 0;
        puVar13[0x18] = 0;
        puVar13[0x1b] = 0;
        puVar13[0x1a] = 0;
        puVar13[0x1d] = 0;
        puVar13[0x1c] = 0;
        puVar13[0x1f] = 0;
        puVar13[0x1e] = 0;
        puVar13[0x21] = 0;
        puVar13[0x20] = 0;
        puVar13[0x23] = 0;
        puVar13[0x22] = 0;
        puVar13[0x25] = 0;
        puVar13[0x24] = 0;
        puVar13[0x27] = 0;
        puVar13[0x26] = 0;
        puVar13[0x29] = 0;
        puVar13[0x28] = 0;
        puVar13[0x2b] = 0;
        puVar13[0x2a] = 0;
        puVar13[0x2d] = 0;
        puVar13[0x2c] = 0;
        puVar13[0x2f] = 0;
        puVar13[0x2e] = 0;
        puVar13[0x31] = 0;
        puVar13[0x30] = 0;
        puVar13[0x33] = 0;
        puVar13[0x32] = 0;
        puVar13[0x35] = 0;
        puVar13[0x34] = 0;
        puVar13[0x37] = 0;
        puVar13[0x36] = 0;
        puVar13[0x39] = 0;
        puVar13[0x38] = 0;
        puVar13[0x3b] = 0;
        puVar13[0x3a] = 0;
        puVar13[0x3d] = 0;
        puVar13[0x3c] = 0;
        puVar13[0x3f] = 0;
        puVar13[0x3e] = 0;
        if ((acStack_479[1] != '\0') && (local_274[0] = acStack_479[1], acStack_479[2] != '\0')) {
          uVar16 = 1;
          cVar10 = acStack_479[2];
          do {
            if (cVar10 == '/') {
LAB_001156dc:
              iVar5 = mkdir(local_274,0x1ed);
              if ((iVar5 == -1) && (piVar9 = (int *)__errno(), *piVar9 != 0x11)) {
                uVar14 = 0xffffffe9;
                goto LAB_00115848;
              }
            }
            else if (cVar10 == '\\') {
              acStack_479[uVar16 + 1] = '/';
              goto LAB_001156dc;
            }
            cVar10 = acStack_479[uVar16 + 2];
            local_274[uVar16] = acStack_479[uVar16 + 1];
          } while ((cVar10 != '\0') && (bVar4 = uVar16 < 0x1ff, uVar16 = uVar16 + 1, bVar4));
        }
        if (((local_ac7 | 0x10) == 0x13) && ((local_a9c._3_1_ >> 5 & 1) != 0)) {
          if ((0x200 < local_aa8) ||
             (iVar5 = FUN_0010d0ec(param_1,uVar18,acStack_679,0x200,0,0,0,0), iVar5 == 0)) {
            uVar14 = 0xffffffee;
            goto LAB_00115848;
          }
          acStack_679[local_aa8] = '\0';
          iVar5 = symlink(acStack_679,acStack_479 + 1);
          if (iVar5 != 0) {
            uVar14 = 0xffffffe8;
            goto LAB_00115848;
          }
        }
        else {
          if (param_1 == 0) {
LAB_00115790:
            iVar5 = mz_zip_reader_extract_to_file(param_1,uVar18,acStack_479 + 1,0);
            if (iVar5 == 0) {
              uVar14 = 0xffffffed;
              goto LAB_00115848;
            }
          }
          else {
            plVar11 = *(long **)(param_1 + 0x68);
            if (((plVar11 == (long *)0x0) || (*(uint *)(param_1 + 0x10) <= uVar18)) ||
               (*plVar11 == 0)) {
              *(undefined4 *)(param_1 + 0x1c) = 0x18;
              goto LAB_00115790;
            }
            lVar8 = *plVar11 + (ulong)*(uint *)(plVar11[4] + (ulong)uVar18 * 4);
            if (((*(ushort *)(lVar8 + 0x1c) == 0) ||
                (*(char *)(lVar8 + (ulong)*(ushort *)(lVar8 + 0x1c) + 0x2d) != '/')) &&
               ((*(byte *)(lVar8 + 0x26) >> 4 & 1) == 0)) goto LAB_00115790;
          }
          if ((0xffff < local_a9c) && (iVar5 = chmod(acStack_479 + 1,local_a9c >> 0x10), iVar5 < 0))
          {
            uVar14 = 0xffffffec;
            goto LAB_00115848;
          }
        }
        if (param_3 == (code *)0x0) {
          uVar18 = uVar18 + 1;
          if (uVar2 <= uVar18) goto LAB_00115844;
        }
        else {
          iVar5 = (*param_3)(acStack_479 + 1,param_4);
          uVar14 = 0;
          if ((iVar5 < 0) || (uVar18 = uVar18 + 1, uVar2 <= uVar18)) goto LAB_00115848;
        }
      }
      uVar14 = 0xfffffffd;
    }
LAB_00115848:
    iVar5 = FUN_0010babc(param_1,1);
    uVar6 = 0xffffffe7;
    if (iVar5 != 0) {
      uVar6 = uVar14;
    }
  }
  else {
    uVar6 = 0xfffffffe;
  }
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}


