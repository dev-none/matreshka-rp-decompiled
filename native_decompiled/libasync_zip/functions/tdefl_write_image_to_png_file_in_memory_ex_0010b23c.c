// Function: tdefl_write_image_to_png_file_in_memory_ex
// Entry: 0010b23c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tdefl_write_image_to_png_file_in_memory_ex
               (long param_1,uint param_2,uint param_3,int param_4,ulong *param_5,uint param_6,
               int param_7)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  int iVar11;
  void *__ptr;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong __size;
  size_t __size_00;
  byte *pbVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  int iVar19;
  ulong uVar20;
  undefined8 *puVar21;
  int local_94;
  ulong local_90;
  ulong uStack_88;
  undefined8 *local_80;
  undefined8 local_78;
  long local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  __ptr = malloc(0x4df78);
  *param_5 = 0;
  puVar12 = (undefined8 *)0x0;
  if (__ptr == (void *)0x0) goto LAB_0010b73c;
  iVar5 = param_4 * param_2;
  iVar11 = param_3 + param_3 * iVar5;
  local_90 = 0;
  local_80 = (undefined8 *)0x0;
  local_78 = 1;
  if (iVar11 < 0x41) {
    iVar11 = 0x40;
  }
  uVar18 = (ulong)(iVar11 + 0x39);
  uStack_88 = uVar18;
  puVar12 = malloc(uVar18);
  local_80 = puVar12;
  if (puVar12 == (undefined8 *)0x0) {
    free(__ptr);
  }
  else {
    uVar20 = 0;
    local_94 = 0x29;
    puVar14 = puVar12;
    do {
      iVar11 = local_94;
      uVar16 = uVar20 + 1;
      __size = uVar18;
      puVar21 = puVar12;
      uVar9 = uStack_88;
      puVar10 = local_80;
      if (uVar18 < uVar16) {
        puVar13 = puVar14;
        if ((int)local_78 != 0) {
          do {
            __size = __size * 2;
            if (__size < 0x81) {
              __size = 0x80;
            }
          } while (__size < uVar16);
          puVar14 = realloc(puVar12,__size);
          puVar13 = puVar12;
          puVar21 = puVar14;
          uVar9 = __size;
          puVar10 = puVar14;
          if (puVar14 != (undefined8 *)0x0) goto LAB_0010b308;
        }
      }
      else {
LAB_0010b308:
        local_80 = puVar10;
        uStack_88 = uVar9;
        *(undefined1 *)((long)puVar14 + uVar20) = (undefined1)local_94;
        puVar13 = puVar14;
        uVar18 = __size;
        uVar20 = uVar16;
        puVar12 = puVar21;
        iVar11 = local_94;
        local_90 = uVar16;
      }
      local_94 = iVar11 + -1;
      puVar14 = puVar13;
    } while (local_94 != 0);
    if (9 < param_6) {
      param_6 = 10;
    }
    tdefl_init(__ptr,FUN_0010b0c0,&local_90,*(uint *)(&DAT_00103c64 + (ulong)param_6 * 4) | 0x1000);
    iVar11 = param_3 - 1;
    if (0 < (int)param_3) {
      iVar19 = 0;
      do {
        local_70 = 1;
        tdefl_compress(__ptr,&local_94,&local_70,0,0,0);
        iVar2 = iVar19;
        if (param_7 != 0) {
          iVar2 = iVar11;
        }
        local_70 = (long)iVar5;
        tdefl_compress(__ptr,param_1 + iVar2 * iVar5,&local_70,0,0,0);
        iVar11 = iVar11 + -1;
        iVar19 = iVar19 + 1;
      } while (iVar11 != -1);
    }
    local_70 = 0;
    iVar11 = tdefl_compress(__ptr,0,&local_70,0,0,4);
    uVar18 = local_90;
    if (iVar11 == 1) {
      uVar16 = local_90 - 0x29;
      *param_5 = uVar16;
      uVar8 = _UNK_00103ca0;
      uVar7 = _DAT_00103c98;
      bVar4 = (&DAT_00103c90)[param_4];
      uVar17 = *(uint *)(&DAT_00103514 +
                        (ulong)((*(uint *)(&DAT_00103514 + ((ulong)(param_2 >> 8 ^ 0xc4) & 0xff) * 4
                                          ) ^ 0x75a723 ^ param_2) & 0xff) * 4) ^
               (*(uint *)(&DAT_00103514 + ((ulong)(param_2 >> 8 ^ 0xc4) & 0xff) * 4) ^ 0x75a723) >>
               8;
      uVar17 = *(uint *)(&DAT_00103514 + (ulong)(uVar17 & 0xff) * 4) ^ uVar17 >> 8;
      uVar17 = *(uint *)(&DAT_00103514 + (ulong)(uVar17 & 0xff) * 4) ^ uVar17 >> 8;
      uVar17 = *(uint *)(&DAT_00103514 + (ulong)((param_3 >> 8 ^ uVar17) & 0xff) * 4) ^ uVar17 >> 8;
      uVar17 = *(uint *)(&DAT_00103514 + (ulong)((uVar17 ^ param_3) & 0xff) * 4) ^ uVar17 >> 8;
      uVar17 = *(uint *)(&DAT_00103514 + (ulong)(uVar17 & 0xff ^ 8) * 4) ^ uVar17 >> 8;
      uVar17 = *(uint *)(&DAT_00103514 + ((ulong)(bVar4 ^ uVar17) & 0xff) * 4) ^ uVar17 >> 8;
      uVar17 = *(uint *)(&DAT_00103514 + (ulong)(uVar17 & 0xff) * 4) ^ uVar17 >> 8;
      uVar3 = *(uint *)(&DAT_00103514 + (ulong)(uVar17 & 0xff) * 4) ^ uVar17 >> 8;
      uVar17 = *(uint *)(&DAT_00103514 + (ulong)(uVar3 & 0xff) * 4);
      *(char *)((long)local_80 + 0x12) = (char)(param_2 >> 8);
      *(undefined1 *)(local_80 + 3) = 8;
      local_80[1] = uVar8;
      *local_80 = uVar7;
      uVar17 = uVar17 ^ uVar3 >> 8 ^ 0xffffffff;
      *(undefined2 *)(local_80 + 2) = 0;
      *(char *)((long)local_80 + 0x21) = (char)(uVar16 >> 0x18);
      *(char *)((long)local_80 + 0x16) = (char)(param_3 >> 8);
      *(byte *)((long)local_80 + 0x19) = bVar4;
      *(char *)((long)local_80 + 0x24) = (char)uVar16;
      uVar20 = local_90 + 0x10;
      *(char *)(local_80 + 4) = (char)uVar17;
      *(char *)((long)local_80 + 0x1d) = (char)(uVar17 >> 0x18);
      *(char *)((long)local_80 + 0x13) = (char)param_2;
      *(undefined2 *)((long)local_80 + 0x14) = 0;
      *(char *)((long)local_80 + 0x17) = (char)param_3;
      *(undefined2 *)((long)local_80 + 0x1a) = 0;
      *(undefined1 *)((long)local_80 + 0x1c) = 0;
      *(char *)((long)local_80 + 0x22) = (char)(uVar16 >> 0x10);
      *(char *)((long)local_80 + 0x23) = (char)(uVar16 >> 8);
      *(char *)((long)local_80 + 0x1e) = (char)(uVar17 >> 0x10);
      *(char *)((long)local_80 + 0x1f) = (char)(uVar17 >> 8);
      *(undefined4 *)((long)local_80 + 0x25) = 0x54414449;
      __size_00 = uStack_88;
      puVar12 = local_80;
      if (uVar20 <= uStack_88) {
code_r0x0010b600:
        local_80 = puVar12;
        uStack_88 = __size_00;
        uVar7 = _DAT_00103cc1;
        uVar17 = 0xffffffff;
        ((undefined8 *)((long)local_80 + local_90))[1] = _UNK_00103cc9;
        *(undefined8 *)((long)local_80 + local_90) = uVar7;
        pbVar15 = (byte *)((long)local_80 + 0x25);
        uVar16 = *param_5 + 4;
        if (*param_5 < 0xfffffffffffffffc) {
          do {
            uVar16 = uVar16 - 4;
            uVar17 = *(uint *)(&DAT_00103514 + ((ulong)(*pbVar15 ^ uVar17) & 0xff) * 4) ^
                     uVar17 >> 8;
            uVar17 = *(uint *)(&DAT_00103514 + ((ulong)(pbVar15[1] ^ uVar17) & 0xff) * 4) ^
                     uVar17 >> 8;
            uVar17 = *(uint *)(&DAT_00103514 + ((ulong)(pbVar15[2] ^ uVar17) & 0xff) * 4) ^
                     uVar17 >> 8;
            pbVar1 = pbVar15 + 3;
            pbVar15 = pbVar15 + 4;
            uVar17 = *(uint *)(&DAT_00103514 + ((ulong)(*pbVar1 ^ uVar17) & 0xff) * 4) ^ uVar17 >> 8
            ;
          } while (3 < uVar16);
        }
        for (; uVar16 != 0; uVar16 = uVar16 - 1) {
          uVar17 = *(uint *)(&DAT_00103514 + ((ulong)(*pbVar15 ^ uVar17) & 0xff) * 4) ^ uVar17 >> 8;
          pbVar15 = pbVar15 + 1;
        }
        uVar17 = ~uVar17;
        *(char *)((long)local_80 + uVar18) = (char)(uVar17 >> 0x18);
        *(char *)((long)local_80 + uVar18 + 1) = (char)(uVar17 >> 0x10);
        *(char *)((long)local_80 + uVar18 + 2) = (char)(uVar17 >> 8);
        *(char *)((long)local_80 + uVar18 + 3) = (char)uVar17;
        *param_5 = *param_5 + 0x39;
        local_90 = uVar20;
        free(__ptr);
        puVar12 = local_80;
        goto LAB_0010b73c;
      }
      if ((int)local_78 != 0) {
        do {
          __size_00 = __size_00 * 2;
          if (__size_00 < 0x81) {
            __size_00 = 0x80;
          }
        } while (__size_00 < uVar20);
        puVar12 = realloc(local_80,__size_00);
        if (puVar12 != (undefined8 *)0x0) goto code_r0x0010b600;
      }
      *param_5 = 0;
    }
    free(__ptr);
    free(local_80);
  }
  puVar12 = (undefined8 *)0x0;
LAB_0010b73c:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar12);
}


