// Function: mz_deflate
// Entry: 00107648

undefined4 mz_deflate(long *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  ulong local_58;
  ulong uStack_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  if (param_1 == (long *)0x0) {
LAB_00107780:
    uVar11 = 0xfffffffe;
  }
  else {
    uVar11 = 0xfffffffe;
    if (((param_2 < 5) && (lVar8 = param_1[7], lVar8 != 0)) && (lVar10 = param_1[3], lVar10 != 0)) {
      uVar12 = *(uint *)(param_1 + 4);
      if (uVar12 == 0) {
        uVar11 = 0xfffffffb;
      }
      else {
        uVar3 = 2;
        if (param_2 != 1) {
          uVar3 = param_2;
        }
        if (*(int *)(lVar8 + 0x84) == 1) {
          uVar11 = 0xfffffffb;
          if (uVar3 == 4) {
            uVar11 = 1;
          }
        }
        else {
          lVar14 = param_1[2];
          lVar15 = param_1[5];
          uVar13 = *(uint *)(param_1 + 1);
          lVar9 = *param_1;
          do {
            uStack_50 = (ulong)uVar13;
            local_58 = (ulong)uVar12;
            iVar7 = tdefl_compress(lVar8,lVar9,&uStack_50,lVar10,&local_58,uVar3);
            lVar8 = param_1[7];
            lVar5 = param_1[1];
            uVar13 = (int)lVar5 - (int)uStack_50;
            lVar9 = *param_1 + (uStack_50 & 0xffffffff);
            param_1[0xc] = (ulong)*(uint *)(lVar8 + 0x20);
            lVar6 = param_1[4];
            *(uint *)(param_1 + 1) = uVar13;
            lVar1 = param_1[2] + (uStack_50 & 0xffffffff);
            *param_1 = lVar9;
            lVar10 = param_1[3] + (local_58 & 0xffffffff);
            uVar12 = (int)lVar6 - (int)local_58;
            lVar2 = param_1[5] + (local_58 & 0xffffffff);
            param_1[2] = lVar1;
            param_1[3] = lVar10;
            *(uint *)(param_1 + 4) = uVar12;
            param_1[5] = lVar2;
            if (iVar7 < 0) goto LAB_00107780;
            uVar11 = 1;
            if (iVar7 == 1) goto LAB_00107784;
            if ((int)lVar6 == (int)local_58) goto LAB_00107778;
          } while ((uVar3 == 4) || ((int)lVar5 != (int)uStack_50));
          if (uVar3 == 0) {
            uVar11 = 0xfffffffb;
            if (lVar2 != lVar15 || lVar1 != lVar14) {
              uVar11 = 0;
            }
          }
          else {
LAB_00107778:
            uVar11 = 0;
          }
        }
      }
    }
  }
LAB_00107784:
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar11;
}


