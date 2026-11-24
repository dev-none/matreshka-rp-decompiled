// Function: mz_inflate
// Entry: 00107e98

uint mz_inflate(long *param_1,uint param_2)

{
  uint uVar1;
  void *__dest;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong local_78;
  ulong local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar15 = param_1[7], lVar15 == 0)) {
LAB_00107f34:
    uVar11 = 0xfffffffe;
  }
  else {
    uVar2 = 2;
    if (param_2 != 1) {
      uVar2 = param_2;
    }
    uVar11 = 0xfffffffe;
    if ((4 < uVar2) || ((1 << (ulong)(uVar2 & 0x1f) & 0x15U) == 0)) goto LAB_00107f38;
    uVar17 = (ulong)*(uint *)(param_1 + 1);
    iVar10 = *(int *)(lVar15 + 0x2b00);
    *(undefined4 *)(lVar15 + 0x2b00) = 0;
    uVar11 = 8;
    if (0 < *(int *)(lVar15 + 0x2b08)) {
      uVar11 = 9;
    }
    if (-1 < *(int *)(lVar15 + 0xab0c)) {
      if ((uVar2 != 4) && (*(uint *)(lVar15 + 0x2b04) != 0)) goto LAB_00107f34;
      *(uint *)(lVar15 + 0x2b04) = *(uint *)(lVar15 + 0x2b04) | (uint)(uVar2 == 4);
      if ((uVar2 != 4) || (iVar10 == 0)) {
        uVar12 = *(uint *)(lVar15 + 0x2afc);
        uVar1 = uVar11 | 2;
        if (uVar2 == 4) {
          uVar1 = uVar11;
        }
        if (uVar12 == 0) {
          uVar12 = *(uint *)(lVar15 + 11000);
          lVar8 = lVar15 + 0x2b0c;
          uVar16 = uVar17;
          while( true ) {
            local_78 = (ulong)(0x8000 - uVar12);
            local_70 = uVar16;
            iVar10 = tinfl_decompress(lVar15,*param_1,&local_70,lVar8,lVar8 + (ulong)uVar12,
                                      &local_78,uVar1);
            lVar14 = param_1[1];
            lVar13 = *param_1;
            *(int *)(lVar15 + 0xab0c) = iVar10;
            __dest = (void *)param_1[3];
            *(int *)(param_1 + 1) = (int)lVar14 - (int)local_70;
            uVar11 = *(uint *)(lVar15 + 0x1c);
            *param_1 = lVar13 + (local_70 & 0xffffffff);
            param_1[0xc] = (ulong)uVar11;
            uVar11 = *(uint *)(lVar15 + 11000);
            param_1[2] = param_1[2] + (local_70 & 0xffffffff);
            uVar3 = *(uint *)(param_1 + 4);
            *(uint *)(lVar15 + 0x2afc) = (uint)local_78;
            if ((uint)local_78 <= uVar3) {
              uVar3 = (uint)local_78;
            }
            uVar16 = (ulong)uVar3;
            memcpy(__dest,(void *)(lVar8 + (ulong)uVar11),uVar16);
            uVar4 = *(uint *)(param_1 + 4);
            iVar6 = *(int *)(lVar15 + 11000);
            uVar5 = *(uint *)(lVar15 + 0x2afc);
            param_1[3] = param_1[3] + uVar16;
            *(uint *)(param_1 + 4) = uVar4 - uVar3;
            param_1[5] = param_1[5] + uVar16;
            uVar12 = iVar6 + uVar3 & 0x7fff;
            *(uint *)(lVar15 + 0x2afc) = uVar5 - uVar3;
            *(uint *)(lVar15 + 11000) = uVar12;
            if (iVar10 < 0) goto LAB_001081e8;
            if ((iVar10 == 1) && (uVar17 == 0)) break;
            if (uVar2 == 4) {
              if (iVar10 == 0) {
                uVar11 = 0xfffffffb;
                if (uVar5 == uVar3) {
                  uVar11 = 1;
                }
                goto LAB_00107f38;
              }
              if (uVar4 == uVar3) break;
              uVar16 = (ulong)*(uint *)(param_1 + 1);
            }
            else {
              if (iVar10 == 0) {
                bVar9 = uVar5 == uVar3;
                goto LAB_001081f4;
              }
              uVar16 = (ulong)*(uint *)(param_1 + 1);
              uVar11 = 0;
              if (((*(uint *)(param_1 + 1) == 0) || (uVar4 == uVar3)) || (uVar5 != uVar3))
              goto LAB_00107f38;
            }
          }
          uVar11 = 0xfffffffb;
        }
        else {
          if (*(uint *)(param_1 + 4) <= uVar12) {
            uVar12 = *(uint *)(param_1 + 4);
          }
          uVar17 = (ulong)uVar12;
          memcpy((void *)param_1[3],(void *)(lVar15 + 0x2b0c + (ulong)*(uint *)(lVar15 + 11000)),
                 uVar17);
          iVar6 = *(int *)(lVar15 + 0xab0c);
          *(uint *)(param_1 + 4) = (int)param_1[4] - uVar12;
          iVar10 = *(int *)(lVar15 + 11000);
          param_1[3] = param_1[3] + uVar17;
          uVar2 = *(uint *)(lVar15 + 0x2afc);
          param_1[5] = param_1[5] + uVar17;
          *(uint *)(lVar15 + 0x2afc) = uVar2 - uVar12;
          *(uint *)(lVar15 + 11000) = iVar10 + uVar12 & 0x7fff;
          if (iVar6 == 0) {
            bVar9 = uVar2 == uVar12;
LAB_001081f4:
            uVar11 = (uint)bVar9;
          }
          else {
            uVar11 = 0;
          }
        }
        goto LAB_00107f38;
      }
      local_78 = (ulong)*(uint *)(param_1 + 4);
      local_70 = uVar17;
      iVar10 = tinfl_decompress(lVar15,*param_1,&local_70,param_1[3],param_1[3],&local_78,uVar11 | 4
                               );
      lVar8 = param_1[1];
      lVar14 = *param_1;
      *(int *)(lVar15 + 0xab0c) = iVar10;
      param_1[0xc] = (ulong)*(uint *)(lVar15 + 0x1c);
      *(int *)(param_1 + 1) = (int)lVar8 - (int)local_70;
      *param_1 = lVar14 + (local_70 & 0xffffffff);
      param_1[2] = param_1[2] + (local_70 & 0xffffffff);
      param_1[3] = param_1[3] + (local_78 & 0xffffffff);
      *(int *)(param_1 + 4) = (int)param_1[4] - (int)local_78;
      param_1[5] = param_1[5] + (local_78 & 0xffffffff);
      if (-1 < iVar10) {
        if (iVar10 == 0) {
          uVar11 = 1;
        }
        else {
          *(undefined4 *)(lVar15 + 0xab0c) = 0xffffffff;
          uVar11 = 0xfffffffb;
        }
        goto LAB_00107f38;
      }
    }
LAB_001081e8:
    uVar11 = 0xfffffffd;
  }
LAB_00107f38:
  if (*(long *)(lVar7 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar11;
}


