// Function: zip_entry_close
// Entry: 00114168

undefined4 zip_entry_close(undefined8 *param_1)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  size_t sVar10;
  tm *ptVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  ulong *puVar15;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  long lStack_90;
  time_t local_88 [4];
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  if (param_1 == (undefined8 *)0x0) {
    uVar8 = 0xffffffff;
    goto LAB_001143c4;
  }
  if (*(int *)((long)param_1 + 0x14) == 1) {
    uVar8 = 0;
  }
  else {
    if ((*(byte *)(param_1 + 0xe) & 0xf) != 0) {
      local_88[0] = 0;
      uVar7 = tdefl_compress(param_1 + 0x1e,&DAT_00103978,local_88,0,0,4);
      if (1 < uVar7) {
        uVar8 = 0xfffffff4;
        goto LAB_001143b0;
      }
      param_1[0x12] = param_1[0x1d];
      param_1[0x14] = param_1[0x1c];
      *(undefined2 *)(param_1 + 0x1a) = 8;
    }
    sVar10 = strlen((char *)param_1[0x10]);
    local_88[0] = param_1[0x9c0e];
    ptVar11 = localtime(local_88);
    plVar13 = param_1 + 0x11;
    lStack_90 = *plVar13;
    local_9c = *(undefined4 *)(param_1 + 0x13);
    uVar7 = ptVar11->tm_sec;
    iVar3 = ptVar11->tm_min;
    iVar9 = ptVar11->tm_mon;
    iVar4 = ptVar11->tm_year;
    iVar2 = ptVar11->tm_hour;
    iVar5 = ptVar11->tm_mday;
    puVar14 = param_1 + 0x12;
    local_98 = *puVar14;
    local_a0 = (undefined4)DAT_00103448;
    lVar12 = (*(code *)param_1[10])(param_1[0xc],param_1[0x14],&local_a0,0x18);
    if (lVar12 == 0x18) {
      puVar15 = param_1 + 0x19;
      plVar1 = plVar13;
      if ((ulong)param_1[0x11] < 0xffffffff) {
        plVar1 = (long *)0x0;
      }
      if ((ulong)param_1[0x12] < 0xffffffff) {
        puVar14 = (undefined8 *)0x0;
      }
      if (*puVar15 < 0xffffffff) {
        puVar15 = (ulong *)0x0;
      }
      param_1[0x14] = param_1[0x14] + 0x18;
      uVar8 = FUN_00110dc8(local_88,plVar1,puVar14,puVar15);
      if ((sVar10 & 0xffff) == 0) {
        lVar12 = *plVar13;
      }
      else {
        lVar12 = *plVar13;
        if ((*(char *)(param_1[0x10] + (sVar10 & 0xffff) + -1) == '/') && (lVar12 == 0)) {
          *(uint *)(param_1 + 0x9c0d) = *(uint *)(param_1 + 0x9c0d) | 0x10;
        }
      }
      iVar9 = FUN_00110f7c(param_1,param_1[0x10],sVar10 & 0xffffffff,local_88,uVar8,&DAT_00103978,0,
                           lVar12,param_1[0x12],*(undefined4 *)(param_1 + 0x13),
                           *(undefined2 *)(param_1 + 0x1a),0x808,
                           (short)iVar3 * 0x20 + (short)(iVar2 << 0xb) + (short)(uVar7 >> 1),
                           (short)iVar4 * 0x200 + (short)iVar9 * 0x20 + (short)iVar5 + 0x6020,
                           param_1[0x19],*(undefined4 *)(param_1 + 0x9c0d),0,0);
      if (iVar9 == 0) {
        uVar8 = 0xfffffff1;
      }
      else {
        uVar8 = 0;
        *param_1 = param_1[0x14];
        *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + 1;
      }
    }
    else {
      uVar8 = 0xfffffff2;
    }
  }
LAB_001143b0:
  param_1[0x9c0e] = 0;
  if ((void *)param_1[0x10] != (void *)0x0) {
    free((void *)param_1[0x10]);
    param_1[0x10] = 0;
  }
LAB_001143c4:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


