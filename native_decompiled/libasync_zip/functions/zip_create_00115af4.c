// Function: zip_create
// Entry: 00115af4

void zip_create(char *param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  FILE *pFVar8;
  char *pcVar9;
  char *pcVar10;
  undefined8 uVar11;
  char *__file;
  long lVar12;
  stat local_150;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined *local_a0;
  undefined *puStack_98;
  undefined *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  code *local_78;
  undefined8 uStack_70;
  long *local_68;
  void *local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    uVar11 = 0xffffffea;
  }
  else {
    local_78 = FUN_0010fe8c;
    uStack_70 = 0;
    local_68 = local_150.__unused + 2;
    uStack_88 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    local_a0 = PTR_miniz_def_alloc_func_0011c698;
    puStack_98 = PTR_miniz_def_free_func_0011c6a0;
    local_80 = 0;
    local_90 = PTR_miniz_def_realloc_func_0011c6a8;
    local_60 = calloc(1,0x98);
    local_150.__unused[2] = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    if (local_60 == (void *)0x0) {
      uVar11 = 0xffffffff;
    }
    else {
      *(undefined4 *)((long)local_60 + 0x18) = 1;
      uVar11 = DAT_00103498;
      *(undefined4 *)((long)local_60 + 0x38) = 4;
      *(undefined4 *)((long)local_60 + 0x58) = 4;
      local_b4 = (undefined4)uVar11;
      uStack_b0 = (undefined4)((ulong)uVar11 >> 0x20);
      pFVar8 = fopen(param_1,"wb");
      if (pFVar8 == (FILE *)0x0) {
        uVar11 = 0xffffffff;
      }
      else {
        uStack_b0 = 4;
        *(FILE **)((long)local_60 + 0x70) = pFVar8;
        local_150.st_ino = 0;
        local_150.st_dev = 0;
        local_150.st_mode = 0;
        local_150.st_uid = 0;
        local_150.st_nlink = 0;
        local_150.st_rdev = 0;
        local_150.st_gid = 0;
        local_150.__pad0 = 0;
        local_150.st_blksize = 0;
        local_150.st_size = 0;
        local_150.st_atim.tv_sec = 0;
        local_150.st_blocks = 0;
        local_150.st_mtim.tv_sec = 0;
        local_150.st_atim.tv_nsec = 0;
        local_150.st_ctim.tv_sec = 0;
        local_150.st_mtim.tv_nsec = 0;
        local_150.__unused[0] = 0;
        local_150.st_ctim.tv_nsec = 0;
        uVar11 = 0;
        if (param_3 != 0) {
          lVar12 = 0;
          do {
            __file = *(char **)(param_2 + lVar12 * 8);
            if (__file == (char *)0x0) {
              uVar11 = 0xfffffffe;
              goto LAB_00115d44;
            }
            iVar7 = stat(__file,&local_150);
            if (iVar7 != 0) {
LAB_00115d38:
              uVar11 = 0xffffffed;
              goto LAB_00115d44;
            }
            uVar1 = (uint)local_150.st_nlink & 0xf000;
            uVar3 = (uint)local_150.st_nlink;
            if (uVar1 != 0x4000) {
              uVar3 = (uint)local_150.st_nlink & 0xfff;
            }
            uVar2 = uVar3 | 0xffff8000;
            if (uVar1 != 0x8000) {
              uVar2 = uVar3;
            }
            uVar3 = uVar2 | 0xffffa000;
            if (uVar1 != 0xa000) {
              uVar3 = uVar2;
            }
            uVar2 = uVar3 | 0x6000;
            if (uVar1 != 0x6000) {
              uVar2 = uVar3;
            }
            uVar3 = uVar2 | 0x2000;
            if (uVar1 != 0x2000) {
              uVar3 = uVar2;
            }
            uVar2 = uVar3 | 0x1000;
            if (uVar1 != 0x1000) {
              uVar2 = uVar3;
            }
            uVar3 = uVar2 | 0xc000;
            if (uVar1 != 0xc000) {
              uVar3 = uVar2;
            }
            uVar3 = ((uint)local_150.st_nlink >> 7 & 1 | uVar3 << 0x10) ^ 1;
            bVar6 = true;
            pcVar9 = __file;
            pcVar10 = __file + 1;
            while( true ) {
              while( true ) {
                cVar4 = pcVar10[-1];
                if ((cVar4 != '/') && (cVar4 != '\\')) break;
                pcVar9 = pcVar10;
                pcVar10 = pcVar10 + 1;
              }
              if (cVar4 == '\0') break;
              bVar6 = false;
              pcVar10 = pcVar10 + 1;
            }
            uVar2 = uVar3 | 0x10;
            if (uVar1 != 0x4000) {
              uVar2 = uVar3;
            }
            if (*pcVar9 == '\0') {
              if (((*__file == '/') || (*__file == '\\')) && (bVar6)) {
                pcVar9 = pcVar9 + -1;
              }
            }
            iVar7 = mz_zip_writer_add_file
                              (local_150.__unused + 2,pcVar9,__file,&DAT_00103978,0,6,uVar2);
            if (iVar7 == 0) goto LAB_00115d38;
            lVar12 = lVar12 + 1;
          } while (lVar12 != param_3);
          uVar11 = 0;
        }
LAB_00115d44:
        mz_zip_writer_finalize_archive(local_150.__unused + 2);
      }
      FUN_0010fb20(local_150.__unused + 2,1);
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar11);
}


