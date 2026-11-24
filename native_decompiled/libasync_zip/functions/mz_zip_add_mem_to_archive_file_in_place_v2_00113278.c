// Function: mz_zip_add_mem_to_archive_file_in_place_v2
// Entry: 00113278

void mz_zip_add_mem_to_archive_file_in_place_v2
               (char *param_1,char *param_2,long param_3,long param_4,long param_5,uint param_6,
               uint param_7,int *param_8)

{
  uint uVar1;
  int iVar2;
  char *__modes;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  FILE *pFVar10;
  stat sStack_160;
  undefined4 local_d0;
  int local_cc;
  undefined4 uStack_c8;
  int local_c4;
  ulong local_c0;
  code *pcStack_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  code *pcStack_98;
  code *local_90;
  undefined8 uStack_88;
  long *local_80;
  undefined8 *puStack_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  uVar1 = 6;
  if (-1 < (int)param_7) {
    uVar1 = param_7;
  }
  sStack_160.__unused[2] = 0;
  sStack_160.__unused[1] = 0;
  uStack_c8 = 0;
  local_c4 = 0;
  local_d0 = 0;
  local_cc = 0;
  pcStack_b8 = (code *)0x0;
  local_c0 = 0;
  local_a8 = (undefined *)0x0;
  local_b0 = (undefined *)0x0;
  pcStack_98 = (code *)0x0;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = (code *)0x0;
  puStack_78 = (undefined8 *)0x0;
  local_80 = (long *)0x0;
  if ((((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) || ((param_3 == 0 && (param_4 != 0))))
     || (((param_6 & 0xffff) != 0 && param_5 == 0 || (10 < (uVar1 & 0xf))))) {
    iVar7 = 0;
    if (param_8 == (int *)0x0) goto LAB_001132e4;
    iVar6 = 0x18;
  }
  else {
    if (*param_2 != '/') {
      iVar6 = stat(param_1,&sStack_160);
      if (iVar6 == 0) {
        iVar7 = mz_zip_reader_init_file_v2(sStack_160.__unused + 1,param_1,uVar1 | 0x800,0,0);
        if (iVar7 == 0) {
          iVar7 = 0;
          if (param_8 != (int *)0x0) {
            *param_8 = local_c4;
          }
          goto LAB_001132e4;
        }
        iVar7 = mz_zip_writer_init_from_reader_v2(sStack_160.__unused + 1,param_1,uVar1);
        if (iVar7 == 0) {
          if (param_8 != (int *)0x0) {
            *param_8 = local_c4;
          }
          FUN_0010babc(sStack_160.__unused + 1,0);
          iVar7 = 0;
          goto LAB_001132e4;
        }
LAB_001134ec:
        iVar8 = mz_zip_writer_add_mem_ex_v2
                          (sStack_160.__unused + 1,param_2,param_3,param_4,param_5,param_6,uVar1,0,0
                           ,0,0,0,0,0);
        iVar7 = local_c4;
        iVar9 = mz_zip_writer_finalize_archive(sStack_160.__unused + 1);
        iVar2 = 0;
        if (iVar9 != 0) {
          iVar2 = iVar8;
        }
        iVar8 = local_c4;
        if (iVar9 != 0 || iVar7 != 0) {
          iVar8 = iVar7;
        }
        iVar9 = FUN_0010fb20(sStack_160.__unused + 1,iVar2);
        iVar7 = 0;
        if (iVar9 != 0) {
          iVar7 = iVar2;
        }
        iVar2 = local_c4;
        if (iVar9 != 0 || iVar8 != 0) {
          iVar2 = iVar8;
        }
        if ((iVar6 != 0) && (iVar7 == 0)) {
          remove(param_1);
        }
        if (param_8 != (int *)0x0) {
          *param_8 = iVar2;
        }
      }
      else {
        local_90 = FUN_0010fe8c;
        uStack_88 = 0;
        if ((uVar1 >> 0xf & 1) != 0) {
          pcStack_98 = FUN_0010c754;
        }
        local_80 = sStack_160.__unused + 1;
        if ((((puStack_78 == (undefined8 *)0x0) && (local_cc == 0)) &&
            (((uVar1 >> 0xf & 1) == 0 || (pcStack_98 != (code *)0x0)))) &&
           ((local_c0 & local_c0 - 1) == 0)) {
          if (pcStack_b8 == (code *)0x0) {
            pcStack_b8 = (code *)PTR_miniz_def_alloc_func_0011c698;
          }
          if (local_b0 == (undefined *)0x0) {
            local_b0 = PTR_miniz_def_free_func_0011c6a0;
          }
          if (local_a8 == (undefined *)0x0) {
            local_a8 = PTR_miniz_def_realloc_func_0011c6a8;
          }
          sStack_160.__unused[1] = 0;
          sStack_160.__unused[2] = 0;
          local_d0 = 0;
          puStack_78 = (undefined8 *)(*pcStack_b8)(local_a0,1,0x98);
          if (puStack_78 == (undefined8 *)0x0) {
            iVar6 = 0x10;
          }
          else {
            puStack_78[0x12] = 0;
            puStack_78[1] = 0;
            *puStack_78 = 0;
            puStack_78[3] = 0;
            puStack_78[2] = 0;
            puStack_78[5] = 0;
            puStack_78[4] = 0;
            puStack_78[7] = 0;
            puStack_78[6] = 0;
            puStack_78[9] = 0;
            puStack_78[8] = 0;
            puStack_78[0xb] = 0;
            puStack_78[10] = 0;
            puStack_78[0xd] = 0;
            puStack_78[0xc] = 0;
            puStack_78[0xf] = 0;
            puStack_78[0xe] = 0;
            puStack_78[0x11] = 0;
            puStack_78[0x10] = 0;
            uVar5 = DAT_00103498;
            *(undefined4 *)(puStack_78 + 3) = 1;
            uVar3 = uVar1 >> 0xe & 1;
            *(undefined4 *)(puStack_78 + 7) = 4;
            *(undefined4 *)(puStack_78 + 0xb) = 4;
            *(uint *)((long)puStack_78 + 100) = uVar3;
            *(uint *)(puStack_78 + 0xd) = uVar3;
            local_cc = (int)uVar5;
            uStack_c8 = (undefined4)((ulong)uVar5 >> 0x20);
            __modes = "w+b";
            if ((uVar1 & 0x8000) == 0) {
              __modes = "wb";
            }
            pFVar10 = fopen(param_1,__modes);
            if (pFVar10 != (FILE *)0x0) {
              puStack_78[0xe] = pFVar10;
              uStack_c8 = 4;
              goto LAB_001134ec;
            }
            FUN_0010fb20(sStack_160.__unused + 1,1);
            iVar6 = 0x11;
          }
        }
        else {
          iVar6 = 0x18;
        }
        iVar7 = 0;
        if (param_8 != (int *)0x0) {
          iVar7 = 0;
          *param_8 = iVar6;
        }
      }
      goto LAB_001132e4;
    }
    iVar7 = 0;
    if (param_8 == (int *)0x0) goto LAB_001132e4;
    iVar6 = 0x19;
  }
  iVar7 = 0;
  *param_8 = iVar6;
LAB_001132e4:
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar7);
  }
  return;
}


