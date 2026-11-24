// =========================================================================
// Function: cpcjlwbnjQwgzUIMWynS
// Entry: 0x719e7cdc | Size: 140 bytes
// =========================================================================

undefined8 cpcjlwbnjQwgzUIMWynS(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  undefined1 auStack_38 [4];
  uint uStack_34;
  uint uStack_30;
  int iStack_2c;
  
  uVar1 = 0;
  iVar2 = 0;
  do {
    if (param_2 == 0) goto LAB_719e7d58;
    FUN_719e7af4(auStack_38,param_1,param_2);
    bVar3 = CARRY4(uStack_30,uVar1);
    uVar1 = uStack_30 + uVar1;
    iVar2 = iStack_2c + iVar2 + (uint)bVar3;
    if (0xffffff88 < uStack_34) break;
    param_2 = param_2 - uStack_34;
    param_1 = param_1 + uStack_34;
  } while (uStack_30 != 0xfffffffe || iStack_2c != -1);
  uVar1 = 0xfffffffe;
  iVar2 = -1;
LAB_719e7d58:
  return CONCAT44(iVar2,uVar1);
}


// =========================================================================
// Function: VHuFGIQBmCJ_hfJGrpjIunpp
// Entry: 0x719e7d9c | Size: 224 bytes
// =========================================================================

uint VHuFGIQBmCJ_hfJGrpjIunpp(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_68 [16];
  uint uStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_48;
  int iStack_38;
  uint uStack_34;
  int iStack_30;
  int iStack_2c;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar6 = 0;
  iVar7 = 0;
  do {
    FUN_719e7af4(&iStack_38,param_1,param_2);
    iVar4 = iStack_2c;
    iVar3 = iStack_30;
    uVar2 = uStack_34;
    uVar5 = thunk_iORHUobxeUIiFYwJEwlWbjG_JkTc(auStack_68,param_1,param_2,0);
    uVar1 = uVar5;
    if (uVar5 < 0xffffff89) {
      uVar5 = 0xffffffec;
      uVar1 = uVar2;
    }
    if (0xffffff88 < uVar1) {
      return uVar5;
    }
    if (iVar3 == -2 && iVar4 == -1) {
      return uVar5;
    }
    if (iStack_54 == 0) {
      iVar7 = iStack_50 + iVar7;
      if (iStack_48 != 0) {
        iVar7 = iVar7 + 4;
      }
      iVar7 = iVar7 + iStack_38 * 3;
      if (uVar6 <= uStack_58) {
        uVar6 = uStack_58;
      }
    }
    else {
      iVar7 = uVar2 + iVar7;
    }
    param_2 = param_2 - uVar2;
    param_1 = param_1 + uVar2;
  } while (param_2 != 0);
  return uVar6 + iVar7;
}


// =========================================================================
// Function: feGGlZZlvvzAPtzY
// Entry: 0x719e7ecc | Size: 44 bytes
// =========================================================================

int feGGlZZlvvzAPtzY(int param_1,int param_2,int param_3)

{
  FUN_719f363c();
  *(int *)(param_1 + 0x74ac) = param_2 + param_3;
  return param_3;
}


// =========================================================================
// Function: EQIdRbA_FgSDCbTWXNnJpDhLr
// Entry: 0x719e7f2c | Size: 56 bytes
// =========================================================================

void EQIdRbA_FgSDCbTWXNnJpDhLr(void)

{
  FUN_719e7f98();
  return;
}


// =========================================================================
// Function: FUN_719e7f98
// Entry: 0x719e7f98 | Size: 1920 bytes
// =========================================================================

uint FUN_719e7f98(int *param_1,undefined1 *param_2,int param_3,uint *param_4,uint param_5,
                 int *param_6,uint param_7,int param_8)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  undefined1 *puVar15;
  int *piVar16;
  undefined1 *puVar17;
  int *piVar18;
  uint uVar19;
  undefined1 *puStack_78;
  int *piStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  uint uStack_28;
  
  piVar18 = param_1 + 0x1d2b;
  if (param_8 == 0) {
    piStack_38 = param_6;
  }
  else {
    piStack_38 = (int *)FUN_719e620c(param_8);
    param_7 = FUN_719e622c(param_8);
  }
  uVar4 = 1;
  if (param_1[0x1d5b] == 0) {
    uVar4 = 5;
  }
  puVar17 = param_2;
  if (uVar4 <= param_5) {
    piVar12 = param_1 + 0xa0a;
    bVar2 = 0;
    piVar13 = param_1 + 4;
    iStack_34 = param_3;
    do {
      while ((3 < param_5 && (*param_4 >> 4 == 0x184d2a5))) {
        if (param_5 < 8) {
          return 0xffffffb8;
        }
        if (0xfffffff7 < param_4[1]) {
          return 0xfffffff2;
        }
        uVar19 = param_4[1] + 8;
        if (param_5 < uVar19) {
          uVar19 = 0xffffffb8;
        }
        if (0xffffff88 < uVar19) {
          return uVar19;
        }
        param_5 = param_5 - uVar19;
        param_4 = (uint *)((int)param_4 + uVar19);
        if (param_5 < uVar4) goto LAB_719e8010;
      }
      if (param_8 == 0) {
        param_1[3] = (int)piVar12;
        param_1[0x1d2f] = uVar4;
        *piVar18 = 0;
        param_1[0x1d2c] = 0;
        param_1[0x1d3c] = 0;
        param_1[0x1d3d] = 0;
        param_1[0x1d3e] = 0;
        param_1[0x1d3f] = 0;
        param_1[0x1d2d] = 0;
        param_1[0x1d2e] = 0;
        param_1[0x1d67] = 0;
        param_1[0x1d41] = 0;
        param_1[0x1d42] = 0;
        param_1[0x1d43] = 0;
        *piVar12 = 0xc00000c;
        param_1[0x1d40] = 3;
        param_1[0x1a0b] = 1;
        param_1[0x1a0c] = 4;
        param_1[0x1a0d] = 8;
        *param_1 = (int)piVar13;
        param_1[1] = (int)(param_1 + 0x608);
        param_1[2] = (int)(param_1 + 0x406);
        if (param_7 != 0 && piStack_38 != (int *)0x0) {
          piVar7 = piStack_38;
          piVar16 = piStack_38;
          if ((7 < param_7) && (*piStack_38 == -0x13cf5bc9)) {
            param_1[0x1d67] = piStack_38[1];
            uVar4 = FUN_719e960c(piVar13);
            if (0xffffff88 < uVar4) {
              return 0xffffffe2;
            }
            piVar16 = (int *)((int)piStack_38 + uVar4);
            param_1[0x1d2e] = *piVar18;
            param_1[0x1d42] = 1;
            piVar7 = (int *)((int)piVar16 + (param_1[0x1d2c] - *piVar18));
            param_1[0x1d43] = 1;
          }
          param_1[0x1d2d] = (int)piVar7;
          *piVar18 = (int)piStack_38 + param_7;
          param_1[0x1d2c] = (int)piVar16;
        }
      }
      else {
        iVar5 = FUN_719e620c(param_8);
        iVar6 = FUN_719e622c(param_8);
        param_1[0x1d3c] = 0;
        param_1[0x1d3d] = 0;
        param_1[0x1d3e] = 0;
        param_1[0x1d3f] = 0;
        *piVar12 = 0xc00000c;
        param_1[0x1d40] = 3;
        iVar14 = 1;
        if (param_1[0x1d5b] == 0) {
          iVar14 = 5;
        }
        *piVar18 = 0;
        param_1[0x1d2c] = 0;
        param_1[0x1d68] = (uint)(param_1[0x1d2e] != iVar5 + iVar6);
        param_1[0x1a0b] = 1;
        param_1[0x1a0c] = 4;
        param_1[0x1a0d] = 8;
        *param_1 = (int)piVar13;
        param_1[1] = (int)(param_1 + 0x608);
        param_1[2] = (int)(param_1 + 0x406);
        param_1[0x1d2d] = 0;
        param_1[0x1d67] = 0;
        param_1[0x1d41] = 0;
        param_1[0x1d42] = 0;
        param_1[0x1d43] = 0;
        param_1[0x1d2e] = 0;
        param_1[0x1d2f] = iVar14;
        param_1[3] = (int)piVar12;
        FUN_719e624c(param_1,param_8);
      }
      FUN_719f363c(param_1,puVar17,iStack_34);
      uVar4 = 5;
      if (param_1[0x1d5b] == 0) {
        uVar4 = 9;
      }
      if (param_5 < uVar4) {
        uVar4 = 0xffffffb8;
      }
      else {
        iVar5 = 1;
        if (param_1[0x1d5b] == 0) {
          iVar5 = 5;
        }
        bVar1 = *(byte *)((int)param_4 + iVar5 + -1);
        uVar4 = (uint)bVar1;
        uVar19 = *(int *)(&DAT_70086e38 + (uVar4 & 3) * 4) + iVar5 +
                 *(int *)(&DAT_70086dd8 + (uint)(bVar1 >> 6) * 4) + ((uVar4 & 0x20) >> 5 ^ 1) +
                 ((uint)(uVar4 < 0x40) & (uVar4 & 0x20) >> 5);
        uVar4 = uVar19;
        if (uVar19 < 0xffffff89) {
          if (param_5 < uVar19 + 3) {
LAB_719e83dc:
            uVar4 = 0xffffffb8;
          }
          else {
            uVar4 = FUN_719e93fc(param_1,param_4,uVar19);
            if (uVar4 < 0xffffff89) {
              puVar8 = (uint *)((int)param_4 + uVar19);
              uVar19 = param_5 - uVar19;
              uVar9 = FUN_719ec2c8(puVar8,uVar19,&iStack_30);
              uVar4 = uVar9;
              if (uVar9 < 0xffffff89) {
                puVar10 = puVar17 + iStack_34;
                puStack_78 = puVar17;
                do {
                  uVar4 = uStack_28;
                  if (uVar19 - 3 < uVar9) goto LAB_719e83dc;
                  puVar15 = (undefined1 *)((int)puVar8 + 3);
                  puVar11 = puVar10;
                  if (puVar15 < puVar10) {
                    puVar11 = puVar15;
                  }
                  if (puVar15 < puStack_78) {
                    puVar11 = puVar10;
                  }
                  if (iStack_30 == 0) {
                    if ((uint)((int)puVar10 - (int)puStack_78) < uVar9) {
LAB_719e86d0:
                      uVar4 = 0xffffffba;
                      break;
                    }
                    uVar3 = uVar9;
                    if (puStack_78 == (undefined1 *)0x0) {
joined_r0x719e85a8:
                      uVar4 = 0;
                      if (uVar3 != 0) {
                        uVar4 = 0xffffffb6;
                        break;
                      }
                    }
                    else {
                      imp___aeabi_memmove(puStack_78,puVar15);
                      uVar4 = uVar9;
                    }
                  }
                  else {
                    if (iStack_30 == 1) {
                      if ((uint)((int)puVar11 - (int)puStack_78) < uStack_28) goto LAB_719e86d0;
                      uVar3 = uStack_28;
                      if (puStack_78 == (undefined1 *)0x0) goto joined_r0x719e85a8;
                      imp___aeabi_memset(puStack_78,uStack_28,*puVar15);
                    }
                    else {
                      if (iStack_30 != 2) {
                        uVar4 = 0xffffffec;
                        break;
                      }
                      uVar4 = FUN_719ed2e8(param_1,puStack_78,(int)puVar11 - (int)puStack_78,puVar15
                                           ,uVar9,1,0);
                    }
                    if (0xffffff88 < uVar4) break;
                  }
                  if (param_1[0x1d5d] != 0) {
                    FUN_719684b8(param_1 + 0x1d44,puStack_78,uVar4);
                  }
                  puStack_78 = puStack_78 + uVar4;
                  uVar19 = (uVar19 - 3) - uVar9;
                  puVar8 = (uint *)(puVar15 + uVar9);
                  if (iStack_2c != 0) {
                    if (((param_1[0x1d30] & param_1[0x1d31]) != 0xffffffff) &&
                       (uVar4 = 0xffffffec,
                       param_1[0x1d30] != (int)puStack_78 - (int)puVar17 ||
                       param_1[0x1d31] != (int)puStack_78 - (int)puVar17 >> 0x1f)) break;
                    if (param_1[0x1d38] != 0) {
                      uVar4 = 0xffffffea;
                      if ((uVar19 < 4) ||
                         ((param_1[0x1d5c] == 0 &&
                          (uVar9 = FUN_719689dc(param_1 + 0x1d44), *puVar8 != uVar9)))) break;
                      puVar8 = puVar8 + 1;
                      uVar19 = uVar19 - 4;
                    }
                    param_5 = uVar19;
                    param_4 = puVar8;
                    uVar4 = (int)puStack_78 - (int)puVar17;
                    break;
                  }
                  uVar9 = FUN_719ec2c8(puVar8,uVar19,&iStack_30);
                  uVar4 = uVar9;
                } while (uVar9 < 0xffffff89);
              }
            }
          }
        }
      }
      iVar5 = thunk_SfQHmAdePbttjvBOY(uVar4);
      if ((bool)(iVar5 == 10 & bVar2)) {
        return 0xffffffb8;
      }
      if (0xffffff88 < uVar4) {
        return uVar4;
      }
      puVar17 = puVar17 + uVar4;
      iStack_34 = iStack_34 - uVar4;
      bVar2 = 1;
      uVar4 = 1;
      if (param_1[0x1d5b] == 0) {
        uVar4 = 5;
      }
    } while (uVar4 <= param_5);
  }
LAB_719e8010:
  uVar4 = 0xffffffb8;
  if (param_5 == 0) {
    uVar4 = (int)puVar17 - (int)param_2;
  }
  return uVar4;
}


// =========================================================================
// Function: oyMpwHYLjoIBvuHtfFr
// Entry: 0x719e8950 | Size: 152 bytes
// =========================================================================

void oyMpwHYLjoIBvuHtfFr(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                        undefined4 param_5)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x75a4) != -1) {
    if (*(int *)(param_1 + 0x75a4) != 1) {
      thunk_mpOsAuPTCkfXUz(*(undefined4 *)(param_1 + 0x7594));
      uVar1 = 0;
      *(undefined4 *)(param_1 + 0x75a4) = 0;
      *(undefined4 *)(param_1 + 0x7594) = 0;
      *(undefined4 *)(param_1 + 0x7598) = 0;
      goto LAB_719e89c8;
    }
    *(undefined4 *)(param_1 + 0x75a4) = 0;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x7598);
LAB_719e89c8:
  FUN_719e7f98(param_1,param_2,param_3,param_4,param_5,0,0,uVar1);
  return;
}


// =========================================================================
// Function: rDQaRDzFAFPoLzTHJKvix_feru
// Entry: 0x719e8a38 | Size: 52 bytes
// =========================================================================

void rDQaRDzFAFPoLzTHJKvix_feru(void)

{
  FUN_719e7f98();
  return;
}


// =========================================================================
// Function: FUN_719e8aa0
// Entry: 0x719e8aa0 | Size: 80 bytes
// =========================================================================

undefined4 FUN_719e8aa0(int param_1)

{
  if (*(int *)(param_1 + 0x75a4) != -1) {
    if (*(int *)(param_1 + 0x75a4) != 1) {
      thunk_mpOsAuPTCkfXUz(*(undefined4 *)(param_1 + 0x7594));
      *(undefined4 *)(param_1 + 0x75a4) = 0;
      *(undefined4 *)(param_1 + 0x7594) = 0;
      *(undefined4 *)(param_1 + 0x7598) = 0;
      return 0;
    }
    *(undefined4 *)(param_1 + 0x75a4) = 0;
  }
  return *(undefined4 *)(param_1 + 0x7598);
}


// =========================================================================
// Function: qq_DXQfD_mTyeCa
// Entry: 0x719e8b24 | Size: 240 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void qq_DXQfD_mTyeCa(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_17668 [29880];
  undefined4 uStack_101b0;
  undefined4 uStack_100fc;
  undefined4 uStack_100f8;
  undefined4 uStack_100d8;
  undefined4 uStack_100d4;
  undefined4 uStack_100d0;
  undefined4 uStack_100c8;
  undefined4 uStack_100c4;
  undefined4 uStack_100c0;
  undefined4 uStack_100bc;
  undefined4 uStack_100b8;
  undefined4 uStack_100b4;
  undefined4 uStack_100b0;
  undefined4 uStack_100ac;
  undefined4 uStack_100a4;
  undefined4 uStack_1009c;
  undefined4 uStack_10088;
  undefined4 uStack_10084;
  
  iVar1 = _ext___stack_chk_guard;
  uStack_101b0 = 0;
  uStack_100a4 = 0x8000001;
  uStack_100fc = 0;
  uStack_1009c = 0;
  uStack_100c8 = 0;
  uStack_100d8 = 0;
  uStack_10088 = 0;
  uStack_10084 = 0;
  uStack_100c0 = 0;
  uStack_100bc = 0;
  uStack_100b8 = 0;
  uStack_100b4 = 0;
  uStack_100b0 = 0;
  uStack_100ac = 0;
  uStack_100f8 = 1;
  thunk_mpOsAuPTCkfXUz(0);
  uStack_100c4 = 0;
  uStack_100d4 = 0;
  uStack_100d0 = 0;
  FUN_719e7f98(auStack_17668,param_1,param_2,param_3,param_4,0,0,0);
  if (_ext___stack_chk_guard != iVar1) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail();
  }
  return;
}


// =========================================================================
// Function: JpDToJXqgGmwHKn__sgxlPnQFOjA
// Entry: 0x719e8cc0 | Size: 12 bytes
// =========================================================================

undefined4 JpDToJXqgGmwHKn__sgxlPnQFOjA(int param_1)

{
  return *(undefined4 *)(param_1 + 0x74bc);
}


// =========================================================================
// Function: sxCDnqCQPLpcBPVmv_
// Entry: 0x719e8ce4 | Size: 36 bytes
// =========================================================================

undefined4 sxCDnqCQPLpcBPVmv_(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = *(int *)(param_1 + 0x7504) - 2;
  uVar1 = 0;
  if (uVar2 < 6) {
    uVar1 = *(undefined4 *)(&DAT_7008df1c + uVar2 * 4);
  }
  return uVar1;
}


// =========================================================================
// Function: WxORCdnHXhUNmauorT_abwE
// Entry: 0x719e8d40 | Size: 1268 bytes
// =========================================================================

uint WxORCdnHXhUNmauorT_abwE(int param_1,int param_2,uint param_3,uint *param_4,uint param_5)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  
  if (*(int *)(param_1 + 0x7504) - 3U < 2) {
    uVar5 = *(uint *)(param_1 + 0x74bc);
    if (*(int *)(param_1 + 0x7500) == 0) {
      if (param_5 <= uVar5) {
        uVar5 = param_5;
      }
      if (uVar5 < 2) {
        uVar5 = 1;
      }
    }
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x74bc);
  }
  if (uVar5 != param_5) {
    return 0xffffffb8;
  }
  FUN_719f363c(param_1);
  uVar5 = *(uint *)(param_1 + 0x74f0);
  *(uint *)(param_1 + 0x74f0) = uVar5 + param_5;
  *(uint *)(param_1 + 0x74f4) = *(int *)(param_1 + 0x74f4) + (uint)CARRY4(uVar5,param_5);
  switch(*(undefined4 *)(param_1 + 0x7504)) {
  case 0:
    uVar5 = 1;
    if ((*(int *)(param_1 + 0x756c) != 0) || (uVar5 = 5, *param_4 >> 4 != 0x184d2a5)) {
      if (param_5 < uVar5) {
        *(undefined4 *)(param_1 + 0x7568) = 0xffffffb8;
        return 0xffffffb8;
      }
      bVar1 = *(byte *)((int)param_4 + (uVar5 - 1));
      uVar4 = (uint)bVar1;
      uVar5 = *(int *)(&DAT_70086e38 + (uVar4 & 3) * 4) + uVar5 +
              *(int *)(&DAT_70086dd8 + (uint)(bVar1 >> 6) * 4) + ((uVar4 & 0x20) >> 5 ^ 1) +
              ((uint)(uVar4 < 0x40) & (uVar4 & 0x20) >> 5);
      *(uint *)(param_1 + 0x7568) = uVar5;
      if (0xffffff88 < uVar5) {
        return uVar5;
      }
      imp___aeabi_memcpy(param_1 + 0x17620,param_4,param_5);
      *(undefined4 *)(param_1 + 0x7504) = 1;
      *(uint *)(param_1 + 0x74bc) = uVar5 - param_5;
      return 0;
    }
    imp___aeabi_memcpy(param_1 + 0x17620,param_4,param_5);
    *(undefined4 *)(param_1 + 0x7504) = 6;
    iVar2 = 8 - param_5;
    break;
  case 1:
    imp___aeabi_memcpy(param_1 + 0x17620 + (*(int *)(param_1 + 0x7568) - param_5),param_4,param_5);
    uVar5 = FUN_719e93fc(param_1,param_1 + 0x17620,*(undefined4 *)(param_1 + 0x7568));
    if (0xffffff88 < uVar5) {
      return uVar5;
    }
    *(undefined4 *)(param_1 + 0x7504) = 2;
    iVar2 = 3;
    break;
  case 2:
    uVar5 = FUN_719ec2c8(param_4,3,&uStack_2c);
    if (0xffffff88 < uVar5) {
      return uVar5;
    }
    if (uVar5 <= *(uint *)(param_1 + 0x74d0)) {
      *(uint *)(param_1 + 0x74bc) = uVar5;
      *(undefined4 *)(param_1 + 0x7500) = uStack_2c;
      *(undefined4 *)(param_1 + 0x758c) = uStack_24;
      if (uVar5 == 0) {
        if (iStack_28 == 0) {
          *(undefined4 *)(param_1 + 0x74bc) = 3;
          uVar3 = 2;
        }
        else if (*(int *)(param_1 + 0x74e0) == 0) {
          uVar3 = 0;
          *(undefined4 *)(param_1 + 0x74bc) = 0;
        }
        else {
          *(undefined4 *)(param_1 + 0x74bc) = 4;
          uVar3 = 5;
        }
      }
      else {
        uVar3 = 4;
        if (iStack_28 == 0) {
          uVar3 = 3;
        }
      }
      *(undefined4 *)(param_1 + 0x7504) = uVar3;
      return 0;
    }
    return 0xffffffec;
  case 3:
  case 4:
    iVar2 = *(int *)(param_1 + 0x7500);
    if (iVar2 == 0) {
      if (param_3 < param_5) {
        return 0xffffffba;
      }
      if (param_2 == 0) {
        if (param_5 != 0) {
          return 0xffffffb6;
        }
      }
      else {
        imp___aeabi_memmove(param_2,param_4,param_5);
        if (0xffffff88 < param_5) {
          return param_5;
        }
      }
      iVar2 = *(int *)(param_1 + 0x74bc) - param_5;
      *(int *)(param_1 + 0x74bc) = iVar2;
    }
    else {
      if (iVar2 == 1) {
        uVar5 = *(uint *)(param_1 + 0x758c);
        param_5 = 0xffffffba;
        if (uVar5 <= param_3) {
          param_5 = uVar5;
          if (param_2 == 0) {
            if (uVar5 != 0) {
              param_5 = 0xffffffb6;
            }
          }
          else {
            imp___aeabi_memset(param_2,uVar5,(char)*param_4);
          }
        }
      }
      else {
        if (iVar2 != 2) {
          return 0xffffffec;
        }
        param_5 = FUN_719ed2e8(param_1,param_2,param_3,param_4,param_5,1,1);
      }
      iVar2 = 0;
      *(undefined4 *)(param_1 + 0x74bc) = 0;
      if (0xffffff88 < param_5) {
        return param_5;
      }
    }
    if (*(uint *)(param_1 + 0x74d0) < param_5) {
      return 0xffffffec;
    }
    puVar6 = (uint *)(param_1 + 0x74f8);
    uVar5 = *puVar6;
    *puVar6 = uVar5 + param_5;
    *(uint *)(param_1 + 0x74fc) = *(int *)(param_1 + 0x74fc) + (uint)CARRY4(uVar5,param_5);
    if (*(int *)(param_1 + 0x7574) != 0) {
      FUN_719684b8(param_1 + 0x7510,param_2,param_5);
      iVar2 = *(int *)(param_1 + 0x74bc);
    }
    *(uint *)(param_1 + 0x74ac) = param_2 + param_5;
    if (iVar2 == 0) {
      if (*(int *)(param_1 + 0x7504) == 4) {
        if (((*(uint *)(param_1 + 0x74c0) & *(uint *)(param_1 + 0x74c4)) != 0xffffffff) &&
           (*puVar6 != *(uint *)(param_1 + 0x74c0) ||
            *(uint *)(param_1 + 0x74fc) != *(uint *)(param_1 + 0x74c4))) {
          return 0xffffffec;
        }
        if (*(int *)(param_1 + 0x74e0) == 0) {
          uVar3 = 0;
          *(undefined4 *)(param_1 + 0x7504) = 0;
        }
        else {
          *(undefined4 *)(param_1 + 0x7504) = 5;
          uVar3 = 4;
        }
        *(undefined4 *)(param_1 + 0x74bc) = uVar3;
      }
      else {
        *(undefined4 *)(param_1 + 0x74bc) = 3;
        *(undefined4 *)(param_1 + 0x7504) = 2;
      }
    }
    return param_5;
  case 5:
    if ((*(int *)(param_1 + 0x7574) != 0) &&
       (uVar5 = FUN_719689dc(param_1 + 0x7510), *param_4 != uVar5)) {
      return 0xffffffea;
    }
  case 7:
    *(undefined4 *)(param_1 + 0x7504) = 0;
    *(undefined4 *)(param_1 + 0x74bc) = 0;
    return 0;
  case 6:
    imp___aeabi_memcpy((param_1 - param_5) + 0x17628,param_4,param_5);
    *(undefined4 *)(param_1 + 0x7504) = 7;
    iVar2 = *(int *)(param_1 + 0x17624);
    break;
  default:
    return 0xffffffff;
  }
  *(int *)(param_1 + 0x74bc) = iVar2;
  return 0;
}


// =========================================================================
// Function: FUN_719e93fc
// Entry: 0x719e93fc | Size: 364 bytes
// =========================================================================

uint FUN_719e93fc(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int extraout_r2;
  int iVar5;
  int extraout_r2_00;
  int extraout_r2_01;
  int *piVar6;
  uint *puVar7;
  undefined8 uVar8;
  int iStack_28;
  
  piVar6 = (int *)(param_1 + 0x74dc);
  uVar1 = thunk_iORHUobxeUIiFYwJEwlWbjG_JkTc
                    (param_1 + 0x74c0,param_2,param_3,*(undefined4 *)(param_1 + 0x756c));
  uVar2 = uVar1;
  if ((uVar1 < 0xffffff89) && (uVar2 = 0xffffffb8, uVar1 == 0)) {
    uVar2 = *(uint *)(param_1 + 0x75ac);
    iVar5 = extraout_r2;
    if (uVar2 == 1) {
      puVar7 = *(uint **)(param_1 + 0x75a8);
      if (puVar7 != (uint *)0x0) {
        uVar2 = *(uint *)(param_1 + 0x7598);
      }
      if (puVar7 != (uint *)0x0 && uVar2 != 0) {
        iVar5 = *piVar6;
        iStack_28 = iVar5;
        uVar2 = FUN_71967848(&iStack_28,4,0,0);
        uVar1 = puVar7[1];
        uVar2 = uVar1 - 1 & uVar2;
        do {
          uVar4 = uVar2;
          uVar8 = thunk_zLrieaXFsLuFSkKtwNXnEDiw(*(undefined4 *)(*puVar7 + uVar4 * 4));
          uVar2 = (uint)((ulonglong)uVar8 >> 0x20);
          iVar3 = (int)uVar8;
          if (iVar3 != iVar5) {
            uVar2 = (uVar4 & uVar1 - 1) + 1;
          }
        } while (iVar3 != iVar5 && iVar3 != 0);
        uVar2 = *puVar7;
        iVar3 = *(int *)(uVar2 + uVar4 * 4);
        iVar5 = extraout_r2_00;
        if (iVar3 != 0) {
          thunk_mpOsAuPTCkfXUz(*(undefined4 *)(param_1 + 0x7594));
          uVar2 = 0;
          *(undefined4 *)(param_1 + 0x75a4) = 0xffffffff;
          *(undefined4 *)(param_1 + 0x7594) = 0;
          *(int *)(param_1 + 0x7598) = iVar3;
          *(int *)(param_1 + 0x759c) = *piVar6;
          iVar5 = extraout_r2_01;
        }
      }
    }
    iVar3 = *piVar6;
    if (iVar3 != 0) {
      iVar5 = *(int *)(param_1 + 0x759c);
      uVar2 = 0xffffffe0;
    }
    if (iVar3 == 0 || iVar5 == iVar3) {
      if (*(int *)(param_1 + 0x74e0) == 0) {
        *(undefined4 *)(param_1 + 0x7574) = 0;
      }
      else {
        *(uint *)(param_1 + 0x7574) = (uint)(*(int *)(param_1 + 0x7570) == 0);
        if (*(int *)(param_1 + 0x7570) == 0) {
          FUN_719683fc(param_1 + 0x7510,1,0,0);
        }
      }
      uVar2 = *(uint *)(param_1 + 0x74f0);
      *(uint *)(param_1 + 0x74f0) = uVar2 + param_3;
      *(uint *)(param_1 + 0x74f4) = *(int *)(param_1 + 0x74f4) + (uint)CARRY4(uVar2,param_3);
      return 0;
    }
  }
  return uVar2;
}


// =========================================================================
// Function: FUN_719e960c
// Entry: 0x719e960c | Size: 596 bytes
// =========================================================================

int FUN_719e960c(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined1 auStack_96 [106];
  uint uStack_2c;
  uint uStack_28;
  
  iVar3 = -0x1e;
  if (8 < param_3) {
    uVar1 = FUN_719e28c4(param_1 + 0x2818,param_2 + 8,param_3 - 8,param_1,0x2818,0);
    if (uVar1 < 0xffffff89) {
      piVar6 = (int *)(param_2 + param_3);
      iVar5 = param_2 + 8 + uVar1;
      uStack_28 = 0x1f;
      uVar8 = FUN_71965d0c(auStack_96,&uStack_28,&uStack_2c,iVar5,(int)piVar6 - iVar5);
      if ((uint)uVar8 < 0xffffff89) {
        bVar7 = 0x1e < uStack_28;
        uVar1 = (uint)((ulonglong)uVar8 >> 0x20);
        if (uStack_28 < 0x20) {
          bVar7 = 8 < uStack_2c;
          uVar1 = uStack_2c;
        }
        if (!bVar7) {
          iVar4 = param_1 + 0x6828;
          FUN_719eca94(param_1 + 0x1008,auStack_96,uStack_28,&DAT_7008dcbc,&DAT_7008dd3c,uVar1,iVar4
                       ,0x274,0,iVar4);
          iVar5 = iVar5 + (uint)uVar8;
          uStack_28 = 0x34;
          uVar8 = FUN_71965d0c(auStack_96,&uStack_28,&uStack_2c,iVar5,(int)piVar6 - iVar5);
          if ((uint)uVar8 < 0xffffff89) {
            bVar7 = 0x33 < uStack_28;
            uVar1 = (uint)((ulonglong)uVar8 >> 0x20);
            if (uStack_28 < 0x35) {
              bVar7 = 9 < uStack_2c;
              uVar1 = uStack_2c;
            }
            if (!bVar7) {
              FUN_719eca94(param_1 + 0x1810,auStack_96,uStack_28,&DAT_7008dd5c,&DAT_7008de30,uVar1,
                           iVar4,0x274,0);
              iVar5 = iVar5 + (uint)uVar8;
              uStack_28 = 0x23;
              uVar8 = FUN_71965d0c(auStack_96,&uStack_28,&uStack_2c,iVar5,(int)piVar6 - iVar5);
              if ((uint)uVar8 < 0xffffff89) {
                bVar7 = 0x22 < uStack_28;
                uVar1 = (uint)((ulonglong)uVar8 >> 0x20);
                if (uStack_28 < 0x24) {
                  bVar7 = 9 < uStack_2c;
                  uVar1 = uStack_2c;
                }
                if (!bVar7) {
                  FUN_719eca94(param_1,auStack_96,uStack_28,&DAT_7008de68,&DAT_7008def8,uVar1,iVar4,
                               0x274,0);
                  piVar2 = (int *)(iVar5 + (uint)uVar8);
                  if (piVar2 + 3 <= piVar6) {
                    uVar1 = (int)piVar6 - (int)(piVar2 + 3);
                    if (*piVar2 - 1U < uVar1) {
                      *(int *)(param_1 + 0x681c) = *piVar2;
                      if (piVar2[1] - 1U < uVar1) {
                        *(int *)(param_1 + 0x6820) = piVar2[1];
                        if (piVar2[2] - 1U < uVar1) {
                          *(int *)(param_1 + 0x6824) = piVar2[2];
                          iVar3 = (int)piVar2 + (0xc - param_2);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar3;
}


// =========================================================================
// Function: HuIewWaDjYoUkQROTkES
// Entry: 0x719e99fc | Size: 204 bytes
// =========================================================================

undefined4 HuIewWaDjYoUkQROTkES(int *param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if (param_1[0x1d5b] == 0) {
    iVar1 = 5;
  }
  param_1[0x1d2f] = iVar1;
  param_1[0x1d41] = 0;
  param_1[0x1d2b] = 0;
  param_1[0x1d2c] = 0;
  param_1[0x1d2d] = 0;
  param_1[0x1d2e] = 0;
  param_1[0x1d3c] = 0;
  param_1[0x1d43] = 0;
  param_1[0x1d3d] = 0;
  param_1[0x1d3e] = 0;
  param_1[0x1d3f] = 0;
  param_1[0x1d67] = 0;
  param_1[0x1d42] = 0;
  param_1[0x1d40] = 3;
  param_1[0x1a0b] = 1;
  param_1[0x1a0c] = 4;
  param_1[0x1a0d] = 8;
  param_1[0xa0a] = 0xc00000c;
  *param_1 = (int)(param_1 + 4);
  param_1[1] = (int)(param_1 + 0x608);
  param_1[2] = (int)(param_1 + 0x406);
  param_1[3] = (int)(param_1 + 0xa0a);
  return 0;
}


// =========================================================================
// Function: flrRXTHOzMSTSWRQAQKqtkVonfekEj
// Entry: 0x719e9ae0 | Size: 344 bytes
// =========================================================================

undefined4 flrRXTHOzMSTSWRQAQKqtkVonfekEj(int *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = param_1 + 0x1d2b;
  *piVar3 = 0;
  param_1[0x1d41] = 0;
  param_1[0x1d2c] = 0;
  param_1[0x1d2d] = 0;
  param_1[0x1d2e] = 0;
  param_1[0x1d3c] = 0;
  iVar2 = 1;
  param_1[0x1d43] = 0;
  param_1[0x1d3d] = 0;
  param_1[0x1d3e] = 0;
  param_1[0x1d3f] = 0;
  param_1[0x1d40] = 3;
  param_1[0x1d67] = 0;
  param_1[0x1d42] = 0;
  param_1[0x1a0b] = 1;
  param_1[0x1a0c] = 4;
  param_1[0x1a0d] = 8;
  if (param_1[0x1d5b] == 0) {
    iVar2 = 5;
  }
  param_1[0x1d2f] = iVar2;
  param_1[0xa0a] = 0xc00000c;
  *param_1 = (int)(param_1 + 4);
  param_1[1] = (int)(param_1 + 0x608);
  param_1[2] = (int)(param_1 + 0x406);
  param_1[3] = (int)(param_1 + 0xa0a);
  if (param_2 != (int *)0x0 && param_3 != 0) {
    if ((param_3 < 8) || (*param_2 != -0x13cf5bc9)) {
      param_1[0x1d2c] = (int)param_2;
      param_1[0x1d2d] = (int)param_2;
    }
    else {
      param_1[0x1d67] = param_2[1];
      uVar1 = FUN_719e960c(param_1 + 4);
      if (0xffffff88 < uVar1) {
        return 0xffffffe2;
      }
      param_1[0x1d42] = 1;
      param_1[0x1d43] = 1;
      iVar2 = param_1[0x1d2c];
      param_1[0x1d2e] = *piVar3;
      param_1[0x1d2c] = (int)param_2 + uVar1;
      param_1[0x1d2d] = (int)param_2 + uVar1 + (iVar2 - *piVar3);
    }
    *piVar3 = (int)param_2 + param_3;
    return 0;
  }
  return 0;
}


// =========================================================================
// Function: _mzbFwZmhxpBRkvGGNwUclEQFBmCaSf
// Entry: 0x719e9c6c | Size: 280 bytes
// =========================================================================

undefined4 _mzbFwZmhxpBRkvGGNwUclEQFBmCaSf(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != 0) {
    iVar1 = FUN_719e620c(param_2);
    iVar2 = FUN_719e622c(param_2);
    param_1[0x1d68] = (uint)(param_1[0x1d2e] != iVar1 + iVar2);
  }
  param_1[0xa0a] = 0xc00000c;
  param_1[0x1d40] = 3;
  param_1[0x1d67] = 0;
  param_1[0x1d41] = 0;
  param_1[0x1d42] = 0;
  param_1[0x1d43] = 0;
  param_1[0x1d2b] = 0;
  param_1[0x1d2c] = 0;
  param_1[0x1d2d] = 0;
  param_1[0x1d2e] = 0;
  param_1[0x1d3c] = 0;
  iVar1 = 1;
  param_1[0x1d3d] = 0;
  param_1[0x1d3e] = 0;
  param_1[0x1d3f] = 0;
  param_1[0x1a0b] = 1;
  param_1[3] = (int)(param_1 + 0xa0a);
  param_1[0x1a0c] = 4;
  param_1[0x1a0d] = 8;
  if (param_1[0x1d5b] == 0) {
    iVar1 = 5;
  }
  param_1[0x1d2f] = iVar1;
  *param_1 = (int)(param_1 + 4);
  param_1[1] = (int)(param_1 + 0x608);
  param_1[2] = (int)(param_1 + 0x406);
  if (param_2 != 0) {
    FUN_719e624c(param_1,param_2);
  }
  return 0;
}


// =========================================================================
// Function: akMygCaZ_aJIAsrdZJtSpox
// Entry: 0x719e9df0 | Size: 40 bytes
// =========================================================================

int akMygCaZ_aJIAsrdZJtSpox(int *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 < 8) {
    return 0;
  }
  if (*param_1 == -0x13cf5bc9) {
    iVar1 = param_1[1];
  }
  return iVar1;
}


// =========================================================================
// Function: o_ZGYxITTrNOTJuUQcSjstrh
// Entry: 0x719e9e30 | Size: 84 bytes
// =========================================================================

undefined4 o_ZGYxITTrNOTJuUQcSjstrh(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined1 auStack_48 [28];
  undefined4 uStack_2c;
  
  imp___aeabi_memclr8(auStack_48,0x30);
  uVar1 = thunk_iORHUobxeUIiFYwJEwlWbjG_JkTc(auStack_48,param_1,param_2,0);
  if (0xffffff88 < uVar1) {
    uStack_2c = 0;
  }
  return uStack_2c;
}


// =========================================================================
// Function: SFnnMRrfcXZXrHrYQx
// Entry: 0x719e9ed4 | Size: 144 bytes
// =========================================================================

void SFnnMRrfcXZXrHrYQx(void)

{
  int iVar1;
  
  iVar1 = imp_malloc(0x17638);
  if (iVar1 == 0) {
    return;
  }
  *(undefined4 *)(iVar1 + 0x17634) = 0;
  *(undefined4 *)(iVar1 + 0x757c) = 0;
  *(undefined4 *)(iVar1 + 0x7580) = 0;
  *(undefined4 *)(iVar1 + 0x7584) = 0;
  *(undefined4 *)(iVar1 + 0x7590) = 0;
  *(undefined4 *)(iVar1 + 0x7594) = 0;
  *(undefined4 *)(iVar1 + 0x7598) = 0;
  *(undefined4 *)(iVar1 + 0x75cc) = 0;
  *(undefined4 *)(iVar1 + 0x74b8) = 0;
  *(undefined4 *)(iVar1 + 0x75e0) = 0;
  *(undefined4 *)(iVar1 + 0x75e4) = 0;
  *(undefined4 *)(iVar1 + 0x75c4) = 0x8000001;
  *(undefined4 *)(iVar1 + 0x75a0) = 0;
  *(undefined4 *)(iVar1 + 0x75a4) = 0;
  *(undefined4 *)(iVar1 + 0x75a8) = 0;
  *(undefined4 *)(iVar1 + 0x75ac) = 0;
  *(undefined4 *)(iVar1 + 0x75b0) = 0;
  *(undefined4 *)(iVar1 + 0x75b4) = 0;
  *(undefined4 *)(iVar1 + 0x75b8) = 0;
  *(undefined4 *)(iVar1 + 0x75bc) = 0;
  *(undefined4 *)(iVar1 + 0x756c) = 0;
  *(undefined4 *)(iVar1 + 0x7570) = 0;
  return;
}


// =========================================================================
// Function: WMLCDVvUyHAGXVwuCJfQXh
// Entry: 0x719e9f98 | Size: 156 bytes
// =========================================================================

uint WMLCDVvUyHAGXVwuCJfQXh(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((0x17637 < param_2) && ((param_1 & 7) == 0)) {
    *(uint *)(param_1 + 0x7590) = param_2;
    *(undefined4 *)(param_1 + 0x7594) = 0;
    *(undefined4 *)(param_1 + 0x7598) = 0;
    *(undefined4 *)(param_1 + 0x75cc) = 0;
    *(undefined4 *)(param_1 + 0x74b8) = 0;
    *(undefined4 *)(param_1 + 0x75e0) = 0;
    *(undefined4 *)(param_1 + 0x75e4) = 0;
    *(undefined4 *)(param_1 + 0x75c4) = 0x8000001;
    *(undefined4 *)(param_1 + 0x756c) = 0;
    *(undefined4 *)(param_1 + 0x7570) = 0;
    *(undefined4 *)(param_1 + 0x75a0) = 0;
    *(undefined4 *)(param_1 + 0x75a4) = 0;
    *(undefined4 *)(param_1 + 0x75a8) = 0;
    *(undefined4 *)(param_1 + 0x75ac) = 0;
    *(undefined4 *)(param_1 + 0x75b0) = 0;
    *(undefined4 *)(param_1 + 0x75b4) = 0;
    *(uint *)(param_1 + 0x75b8) = param_1 + 0x17638;
    *(undefined4 *)(param_1 + 0x75bc) = 0;
    *(undefined4 *)(param_1 + 0x17634) = 0;
    uVar1 = param_1;
  }
  return uVar1;
}


// =========================================================================
// Function: KdxYEqOnRLzMYzwmkUpRaDM_ygJ
// Entry: 0x719ea04c | Size: 224 bytes
// =========================================================================

int KdxYEqOnRLzMYzwmkUpRaDM_ygJ(code *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((param_1 == (code *)0x0) == (param_2 == 0)) {
    if (param_1 == (code *)0x0) {
      iVar1 = imp_malloc(0x17638);
    }
    else {
      iVar1 = (*param_1)(param_3);
    }
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x17634) = 0;
      *(code **)(iVar1 + 0x757c) = param_1;
      *(int *)(iVar1 + 0x7580) = param_2;
      *(undefined4 *)(iVar1 + 0x7584) = param_3;
      *(undefined4 *)(iVar1 + 0x7590) = 0;
      *(undefined4 *)(iVar1 + 0x7594) = 0;
      *(undefined4 *)(iVar1 + 0x7598) = 0;
      *(undefined4 *)(iVar1 + 0x75cc) = 0;
      *(undefined4 *)(iVar1 + 0x74b8) = 0;
      *(undefined4 *)(iVar1 + 0x75e0) = 0;
      *(undefined4 *)(iVar1 + 0x75e4) = 0;
      *(undefined4 *)(iVar1 + 0x75c4) = 0x8000001;
      *(undefined4 *)(iVar1 + 0x75a0) = 0;
      *(undefined4 *)(iVar1 + 0x75a4) = 0;
      *(undefined4 *)(iVar1 + 0x75a8) = 0;
      *(undefined4 *)(iVar1 + 0x75ac) = 0;
      *(undefined4 *)(iVar1 + 0x75b0) = 0;
      *(undefined4 *)(iVar1 + 0x75b4) = 0;
      *(undefined4 *)(iVar1 + 0x75b8) = 0;
      *(undefined4 *)(iVar1 + 0x75bc) = 0;
      *(undefined4 *)(iVar1 + 0x756c) = 0;
      *(undefined4 *)(iVar1 + 0x7570) = 0;
      iVar2 = iVar1;
    }
  }
  return iVar2;
}


// =========================================================================
// Function: AXhUOMrcjpvNcONs
// Entry: 0x719ea160 | Size: 4 bytes
// =========================================================================

undefined4 AXhUOMrcjpvNcONs(int param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x7590) != 0) {
    return 0xffffffc0;
  }
  pcVar2 = *(code **)(param_1 + 0x7580);
  uVar3 = *(undefined4 *)(param_1 + 0x7584);
  thunk_mpOsAuPTCkfXUz(*(undefined4 *)(param_1 + 0x7594));
  *(undefined4 *)(param_1 + 0x75a4) = 0;
  *(undefined4 *)(param_1 + 0x7594) = 0;
  *(undefined4 *)(param_1 + 0x7598) = 0;
  if (*(int *)(param_1 + 0x75b8) != 0) {
    if (pcVar2 == (code *)0x0) {
      imp_free(*(int *)(param_1 + 0x75b8));
    }
    else {
      (*pcVar2)(uVar3);
    }
  }
  *(undefined4 *)(param_1 + 0x75b8) = 0;
  piVar1 = *(int **)(param_1 + 0x75a8);
  if (piVar1 == (int *)0x0) goto LAB_719e70d8;
  if (*piVar1 == 0) {
    if (pcVar2 != (code *)0x0) goto LAB_719e70b0;
LAB_719e70c8:
    imp_free(piVar1);
  }
  else {
    if (pcVar2 == (code *)0x0) {
      imp_free(*piVar1);
      goto LAB_719e70c8;
    }
    (*pcVar2)(uVar3);
LAB_719e70b0:
    (*pcVar2)(uVar3,piVar1);
  }
  *(undefined4 *)(param_1 + 0x75a8) = 0;
LAB_719e70d8:
  if (pcVar2 == (code *)0x0) {
    imp_free(param_1);
    return 0;
  }
  (*pcVar2)(uVar3,param_1);
  return 0;
}


// =========================================================================
// Function: xkoiHLhMFApJjhsWI_
// Entry: 0x719ea198 | Size: 12 bytes
// =========================================================================

undefined4 xkoiHLhMFApJjhsWI_(void)

{
  return 0x20003;
}


// =========================================================================
// Function: Ug_uMhUpXdmyqxNfqee
// Entry: 0x719ea1bc | Size: 8 bytes
// =========================================================================

undefined4 Ug_uMhUpXdmyqxNfqee(void)

{
  return 0x20000;
}


// =========================================================================
// Function: WHkgOpsYDPBFIuGyLCMbfRPEwmhJpuYLK
// Entry: 0x719ea1dc | Size: 168 bytes
// =========================================================================

undefined4
WHkgOpsYDPBFIuGyLCMbfRPEwmhJpuYLK
          (int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0xffffffc4;
  if (*(int *)(param_1 + 0x75b4) == 0) {
    thunk_mpOsAuPTCkfXUz(*(undefined4 *)(param_1 + 0x7594));
    uVar1 = 0;
    *(undefined4 *)(param_1 + 0x75a4) = 0;
    *(undefined4 *)(param_1 + 0x7594) = 0;
    *(undefined4 *)(param_1 + 0x7598) = 0;
    if (param_2 != 0 && param_3 != 0) {
      iVar2 = thunk_QiNLYgHlfAinnnRAjGfwSOOtg
                        (param_2,param_3,param_4,param_5,*(undefined4 *)(param_1 + 0x757c),
                         *(undefined4 *)(param_1 + 0x7580),*(undefined4 *)(param_1 + 0x7584));
      *(int *)(param_1 + 0x7594) = iVar2;
      if (iVar2 != 0) {
        *(int *)(param_1 + 0x7598) = iVar2;
        *(undefined4 *)(param_1 + 0x75a4) = 0xffffffff;
        return 0;
      }
      return 0xffffffc0;
    }
  }
  return uVar1;
}


// =========================================================================
// Function: HhkIocJwwVUyHNtXEvNOQsovsjGjEtLLzUNO
// Entry: 0x719ea2d4 | Size: 164 bytes
// =========================================================================

undefined4 HhkIocJwwVUyHNtXEvNOQsovsjGjEtLLzUNO(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0xffffffc4;
  if (*(int *)(param_1 + 0x75b4) == 0) {
    thunk_mpOsAuPTCkfXUz(*(undefined4 *)(param_1 + 0x7594));
    uVar1 = 0;
    *(undefined4 *)(param_1 + 0x75a4) = 0;
    *(undefined4 *)(param_1 + 0x7594) = 0;
    *(undefined4 *)(param_1 + 0x7598) = 0;
    if (param_2 != 0 && param_3 != 0) {
      iVar2 = thunk_QiNLYgHlfAinnnRAjGfwSOOtg
                        (param_2,param_3,1,0,*(undefined4 *)(param_1 + 0x757c),
                         *(undefined4 *)(param_1 + 0x7580),*(undefined4 *)(param_1 + 0x7584));
      *(int *)(param_1 + 0x7594) = iVar2;
      if (iVar2 != 0) {
        *(int *)(param_1 + 0x7598) = iVar2;
        *(undefined4 *)(param_1 + 0x75a4) = 0xffffffff;
        return 0;
      }
      return 0xffffffc0;
    }
  }
  return uVar1;
}


// =========================================================================
// Function: pYRtqUQuUfmoJRvmvLDJAmAA
// Entry: 0x719ea3c8 | Size: 164 bytes
// =========================================================================

undefined4 pYRtqUQuUfmoJRvmvLDJAmAA(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0xffffffc4;
  if (*(int *)(param_1 + 0x75b4) == 0) {
    thunk_mpOsAuPTCkfXUz(*(undefined4 *)(param_1 + 0x7594));
    uVar1 = 0;
    *(undefined4 *)(param_1 + 0x75a4) = 0;
    *(undefined4 *)(param_1 + 0x7594) = 0;
    *(undefined4 *)(param_1 + 0x7598) = 0;
    if (param_2 != 0 && param_3 != 0) {
      iVar2 = thunk_QiNLYgHlfAinnnRAjGfwSOOtg
                        (param_2,param_3,0,0,*(undefined4 *)(param_1 + 0x757c),
                         *(undefined4 *)(param_1 + 0x7580),*(undefined4 *)(param_1 + 0x7584));
      *(int *)(param_1 + 0x7594) = iVar2;
      if (iVar2 != 0) {
        *(int *)(param_1 + 0x7598) = iVar2;
        *(undefined4 *)(param_1 + 0x75a4) = 0xffffffff;
        return 0;
      }
      return 0xffffffc0;
    }
  }
  return uVar1;
}


// =========================================================================
// Function: aZvppmiSvkebZwbmayUlPzBndmxr
// Entry: 0x719ea4bc | Size: 172 bytes
// =========================================================================

undefined4 aZvppmiSvkebZwbmayUlPzBndmxr(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x75b4) != 0) {
    return 0xffffffc4;
  }
  thunk_mpOsAuPTCkfXUz(*(undefined4 *)(param_1 + 0x7594));
  *(undefined4 *)(param_1 + 0x75a4) = 0;
  *(undefined4 *)(param_1 + 0x7594) = 0;
  *(undefined4 *)(param_1 + 0x7598) = 0;
  if (param_2 != 0 && param_3 != 0) {
    iVar1 = thunk_QiNLYgHlfAinnnRAjGfwSOOtg
                      (param_2,param_3,1,param_4,*(undefined4 *)(param_1 + 0x757c),
                       *(undefined4 *)(param_1 + 0x7580),*(undefined4 *)(param_1 + 0x7584));
    *(int *)(param_1 + 0x7594) = iVar1;
    if (iVar1 == 0) {
      return 0xffffffc0;
    }
    *(int *)(param_1 + 0x7598) = iVar1;
  }
  *(undefined4 *)(param_1 + 0x75a4) = 1;
  return 0;
}


// =========================================================================
// Function: MiuHhYxCyKomehM_Mjx
// Entry: 0x719ea5b8 | Size: 168 bytes
// =========================================================================

undefined4 MiuHhYxCyKomehM_Mjx(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x75b4) != 0) {
    return 0xffffffc4;
  }
  thunk_mpOsAuPTCkfXUz(*(undefined4 *)(param_1 + 0x7594));
  *(undefined4 *)(param_1 + 0x75a4) = 0;
  *(undefined4 *)(param_1 + 0x7594) = 0;
  *(undefined4 *)(param_1 + 0x7598) = 0;
  if (param_2 != 0 && param_3 != 0) {
    iVar1 = thunk_QiNLYgHlfAinnnRAjGfwSOOtg
                      (param_2,param_3,1,1,*(undefined4 *)(param_1 + 0x757c),
                       *(undefined4 *)(param_1 + 0x7580),*(undefined4 *)(param_1 + 0x7584));
    *(int *)(param_1 + 0x7594) = iVar1;
    if (iVar1 == 0) {
      return 0xffffffc0;
    }
    *(int *)(param_1 + 0x7598) = iVar1;
  }
  *(undefined4 *)(param_1 + 0x75a4) = 1;
  return 0;
}


// =========================================================================
// Function: ElIyyzdQCDwcwPVXIXeokhsGjt
// Entry: 0x719ea6b0 | Size: 168 bytes
// =========================================================================

undefined4 ElIyyzdQCDwcwPVXIXeokhsGjt(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x75e0) = 0;
  *(undefined4 *)(param_1 + 0x75b4) = 0;
  thunk_mpOsAuPTCkfXUz(*(undefined4 *)(param_1 + 0x7594));
  *(undefined4 *)(param_1 + 0x75a4) = 0;
  *(undefined4 *)(param_1 + 0x7594) = 0;
  *(undefined4 *)(param_1 + 0x7598) = 0;
  if (param_2 != 0 && param_3 != 0) {
    iVar2 = thunk_QiNLYgHlfAinnnRAjGfwSOOtg
                      (param_2,param_3,0,0,*(undefined4 *)(param_1 + 0x757c),
                       *(undefined4 *)(param_1 + 0x7580),*(undefined4 *)(param_1 + 0x7584));
    *(int *)(param_1 + 0x7594) = iVar2;
    if (iVar2 == 0) {
      return 0xffffffc0;
    }
    *(int *)(param_1 + 0x7598) = iVar2;
    *(undefined4 *)(param_1 + 0x75a4) = 0xffffffff;
  }
  uVar1 = 1;
  if (*(int *)(param_1 + 0x756c) == 0) {
    uVar1 = 5;
  }
  return uVar1;
}


// =========================================================================
// Function: aqSxZUHGbzDSPqr
// Entry: 0x719ea7a8 | Size: 124 bytes
// =========================================================================

undefined4 aqSxZUHGbzDSPqr(int param_1,uint param_2)

{
  if ((param_2 & 0xfffffffd) == 1) {
    *(undefined4 *)(param_1 + 0x75e0) = 0;
    *(undefined4 *)(param_1 + 0x75b4) = 0;
  }
  if ((param_2 & 0xfffffffe) == 2) {
    if (*(int *)(param_1 + 0x75b4) != 0) {
      return 0xffffffc4;
    }
    thunk_mpOsAuPTCkfXUz(*(undefined4 *)(param_1 + 0x7594));
    *(undefined4 *)(param_1 + 0x75a4) = 0;
    *(undefined4 *)(param_1 + 0x7594) = 0;
    *(undefined4 *)(param_1 + 0x7598) = 0;
    *(undefined4 *)(param_1 + 0x75e4) = 0;
    *(undefined4 *)(param_1 + 0x75c4) = 0x8000001;
    *(undefined4 *)(param_1 + 0x75ac) = 0;
    *(undefined4 *)(param_1 + 0x75b0) = 0;
    *(undefined4 *)(param_1 + 0x756c) = 0;
    *(undefined4 *)(param_1 + 0x7570) = 0;
  }
  return 0;
}


// =========================================================================
// Function: WOTiyAkRSIfKpvcq
// Entry: 0x719ea858 | Size: 72 bytes
// =========================================================================

undefined4 WOTiyAkRSIfKpvcq(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x75e0) = 0;
  *(undefined4 *)(param_1 + 0x75b4) = 0;
  thunk_mpOsAuPTCkfXUz(*(undefined4 *)(param_1 + 0x7594));
  uVar1 = 1;
  *(undefined4 *)(param_1 + 0x75a4) = 0;
  *(undefined4 *)(param_1 + 0x7594) = 0;
  *(undefined4 *)(param_1 + 0x7598) = 0;
  if (*(int *)(param_1 + 0x756c) == 0) {
    uVar1 = 5;
  }
  return uVar1;
}


// =========================================================================
// Function: __dKVBUCgltEWoflCu
// Entry: 0x719ea8d4 | Size: 832 bytes
// =========================================================================

undefined4 __dKVBUCgltEWoflCu(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uVar9;
  uint uVar10;
  code *pcVar11;
  uint uVar12;
  int iStack_2c;
  int iStack_28;
  
  if (*(int *)(param_1 + 0x75b4) != 0) {
    return 0xffffffc4;
  }
  thunk_mpOsAuPTCkfXUz(*(undefined4 *)(param_1 + 0x7594));
  *(undefined4 *)(param_1 + 0x75a4) = 0;
  *(undefined4 *)(param_1 + 0x7594) = 0;
  *(undefined4 *)(param_1 + 0x7598) = 0;
  if (param_2 == 0) {
    return 0;
  }
  *(int *)(param_1 + 0x7598) = param_2;
  *(undefined4 *)(param_1 + 0x75a4) = 0xffffffff;
  if (*(int *)(param_1 + 0x75ac) != 1) {
    return 0;
  }
  piVar8 = *(int **)(param_1 + 0x75a8);
  if (piVar8 == (int *)0x0) {
    pcVar5 = *(code **)(param_1 + 0x757c);
    uVar9 = *(undefined4 *)(param_1 + 0x7584);
    if (pcVar5 == (code *)0x0) {
      pcVar5 = *(code **)(param_1 + 0x7580);
      piVar8 = (int *)imp_malloc(0xc);
      if (piVar8 == (int *)0x0) {
LAB_719eac00:
        *(undefined4 *)(param_1 + 0x75a8) = 0;
        return 0xffffffc0;
      }
      iVar1 = imp_calloc(1,0x100);
      *piVar8 = iVar1;
      if (iVar1 == 0) {
        if (pcVar5 == (code *)0x0) {
          imp_free(piVar8);
        }
        else {
          (*pcVar5)(uVar9,piVar8);
        }
        goto LAB_719eac00;
      }
    }
    else {
      piVar8 = (int *)(*pcVar5)(uVar9,0xc);
      if (piVar8 == (int *)0x0) goto LAB_719eac00;
      iVar1 = (*pcVar5)(uVar9,0x100);
      imp___aeabi_memclr(iVar1,0x100);
      *piVar8 = iVar1;
    }
    piVar8[1] = 0x40;
    piVar8[2] = 0;
    *(int **)(param_1 + 0x75a8) = piVar8;
  }
  uVar6 = piVar8[1];
  if (uVar6 <= (uint)(piVar8[2] * 4)) {
    pcVar5 = *(code **)(param_1 + 0x757c);
    pcVar11 = *(code **)(param_1 + 0x7580);
    iVar1 = uVar6 << 3;
    uVar9 = *(undefined4 *)(param_1 + 0x7584);
    if (pcVar5 == (code *)0x0) {
      iVar2 = imp_calloc(1,iVar1);
      uVar7 = uVar6;
    }
    else {
      iVar2 = (*pcVar5)(uVar9,iVar1);
      imp___aeabi_memclr(iVar2,iVar1);
      uVar7 = piVar8[1];
    }
    if (iVar2 == 0) {
      return 0xffffffc0;
    }
    iVar1 = *piVar8;
    uVar12 = 0;
    piVar8[1] = uVar6 << 1;
    piVar8[2] = 0;
    *piVar8 = iVar2;
    if (uVar7 != 0) {
      do {
        iVar2 = *(int *)(iVar1 + uVar12 * 4);
        if (iVar2 != 0) {
          iVar3 = thunk_zLrieaXFsLuFSkKtwNXnEDiw(iVar2);
          iStack_2c = iVar3;
          uVar6 = FUN_71967848(&iStack_2c,4,0,0);
          if (piVar8[2] == piVar8[1]) {
            return 0xffffffff;
          }
          uVar10 = piVar8[1] - 1;
          for (uVar6 = uVar10 & uVar6; *(int *)(*piVar8 + uVar6 * 4) != 0;
              uVar6 = (uVar6 & uVar10) + 1) {
            iVar4 = thunk_zLrieaXFsLuFSkKtwNXnEDiw();
            if (iVar4 == iVar3) {
              *(int *)(*piVar8 + uVar6 * 4) = iVar2;
              goto LAB_719eab28;
            }
          }
          *(int *)(*piVar8 + uVar6 * 4) = iVar2;
          piVar8[2] = piVar8[2] + 1;
        }
LAB_719eab28:
        uVar12 = uVar12 + 1;
      } while (uVar12 != uVar7);
    }
    if (iVar1 != 0) {
      if (pcVar11 == (code *)0x0) {
        imp_free(iVar1);
      }
      else {
        (*pcVar11)(uVar9,iVar1);
      }
    }
  }
  iVar1 = thunk_zLrieaXFsLuFSkKtwNXnEDiw(param_2);
  iStack_28 = iVar1;
  uVar6 = FUN_71967848(&iStack_28,4,0,0);
  if (piVar8[2] == piVar8[1]) {
    return 0xffffffff;
  }
  uVar7 = piVar8[1] - 1;
  uVar6 = uVar7 & uVar6;
  while( true ) {
    if (*(int *)(*piVar8 + uVar6 * 4) == 0) {
      *(int *)(*piVar8 + uVar6 * 4) = param_2;
      piVar8[2] = piVar8[2] + 1;
      return 0;
    }
    iVar2 = thunk_zLrieaXFsLuFSkKtwNXnEDiw();
    if (iVar2 == iVar1) break;
    uVar6 = (uVar6 & uVar7) + 1;
  }
  *(int *)(*piVar8 + uVar6 * 4) = param_2;
  return 0;
}


// =========================================================================
// Function: QaoVZnxYVIIOgcdtVemvmrHwnWM
// Entry: 0x719eadb4 | Size: 60 bytes
// =========================================================================

uint QaoVZnxYVIIOgcdtVemvmrHwnWM(int param_1)

{
  uint uVar1;
  
  *(undefined4 *)(param_1 + 0x75e0) = 0;
  *(undefined4 *)(param_1 + 0x75b4) = 0;
  uVar1 = thunk___dKVBUCgltEWoflCu();
  if ((uVar1 < 0xffffff89) && (uVar1 = 1, *(int *)(param_1 + 0x756c) == 0)) {
    uVar1 = 5;
  }
  return uVar1;
}


// =========================================================================
// Function: PdMVGJoAHxbRwnsp_
// Entry: 0x719eae24 | Size: 36 bytes
// =========================================================================

undefined4 PdMVGJoAHxbRwnsp_(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x75e0) = 0;
  *(undefined4 *)(param_1 + 0x75b4) = 0;
  uVar1 = 1;
  if (*(int *)(param_1 + 0x756c) == 0) {
    uVar1 = 5;
  }
  return uVar1;
}


// =========================================================================
// Function: IcUvMUY_SbikSrhBUeUkHJAiNT
// Entry: 0x719eae60 | Size: 64 bytes
// =========================================================================

undefined4 IcUvMUY_SbikSrhBUeUkHJAiNT(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x75b4) == 0) {
    uVar1 = 0xffffffd6;
    if (0xc00003fe < param_2 + 0xbfffffffU) {
      *(int *)(param_1 + 0x75c4) = param_2;
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0xffffffc4;
}


// =========================================================================
// Function: fAtIhJhPRmbaBdKVjOiVH
// Entry: 0x719eaeb8 | Size: 88 bytes
// =========================================================================

void fAtIhJhPRmbaBdKVjOiVH(undefined4 *param_1,int param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  switch(param_2) {
  case 1000:
  case 0x3e9:
  case 0x3ea:
  case 0x3eb:
  case 0x3ec:
    param_1[2] = 1;
    return;
  }
  if (param_2 != 100) {
    *param_1 = 0xffffffd8;
    return;
  }
  param_1[1] = 10;
  param_1[2] = 0x1e;
  return;
}


// =========================================================================
// Function: udETrVNjkLlfREuozOr
// Entry: 0x719eaf3c | Size: 44 bytes
// =========================================================================

undefined4 udETrVNjkLlfREuozOr(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x75b4) == 0) {
    uVar1 = 0xffffffd6;
    if (param_2 < 2) {
      uVar1 = 0;
      *(uint *)(param_1 + 0x756c) = param_2;
    }
    return uVar1;
  }
  return 0xffffffc4;
}


// =========================================================================
// Function: hcLKKrjDrvOpEHPIdFUlCc
// Entry: 0x719eaf80 | Size: 244 bytes
// =========================================================================

undefined4 hcLKKrjDrvOpEHPIdFUlCc(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffc4;
  if (*(int *)(param_1 + 0x75b4) == 0) {
    switch(param_2) {
    case 1000:
      uVar1 = 0xffffffd6;
      if (param_3 < 2) {
        *(uint *)(param_1 + 0x756c) = param_3;
        return 0;
      }
      break;
    case 0x3e9:
      uVar1 = 0xffffffd6;
      if (param_3 < 2) {
        *(uint *)(param_1 + 0x75e4) = param_3;
        return 0;
      }
      break;
    case 0x3ea:
      uVar1 = 0xffffffd6;
      if (param_3 < 2) {
        *(uint *)(param_1 + 0x7570) = param_3;
        return 0;
      }
      break;
    case 0x3eb:
      uVar1 = 0xffffffd6;
      if ((param_3 < 2) && (uVar1 = 0xffffffd8, *(int *)(param_1 + 0x7590) == 0)) {
        *(uint *)(param_1 + 0x75ac) = param_3;
        return 0;
      }
      break;
    case 0x3ec:
      if (param_3 < 2) {
        *(uint *)(param_1 + 0x75b0) = param_3;
        return 0;
      }
      return 0xffffffd6;
    default:
      uVar1 = 0xffffffd8;
      if (param_2 == 100) {
        uVar1 = 0xffffffd6;
        if (param_3 == 0) {
          param_3 = 0x1b;
        }
        if (0xffffffea < param_3 - 0x1f) {
          *(int *)(param_1 + 0x75c4) = 1 << (param_3 & 0xff);
          return 0;
        }
      }
    }
  }
  return uVar1;
}


// =========================================================================
// Function: xIpDFEciylvSbcUWYNTNzW
// Entry: 0x719eb0a0 | Size: 108 bytes
// =========================================================================

undefined4 xIpDFEciylvSbcUWYNTNzW(int param_1,int param_2,int *param_3)

{
  int iVar1;
  
  switch(param_2) {
  case 1000:
    iVar1 = *(int *)(param_1 + 0x756c);
    break;
  case 0x3e9:
    iVar1 = *(int *)(param_1 + 0x75e4);
    break;
  case 0x3ea:
    iVar1 = *(int *)(param_1 + 0x7570);
    break;
  case 0x3eb:
    iVar1 = *(int *)(param_1 + 0x75ac);
    break;
  case 0x3ec:
    iVar1 = *(int *)(param_1 + 0x75b0);
    break;
  default:
    if (param_2 != 100) {
      return 0xffffffd8;
    }
    iVar1 = 0x1f - LZCOUNT(*(undefined4 *)(param_1 + 0x75c4));
  }
  *param_3 = iVar1;
  return 0;
}


// =========================================================================
// Function: vXzECamtgFkiHaMYXly
// Entry: 0x719eb138 | Size: 64 bytes
// =========================================================================

int vXzECamtgFkiHaMYXly(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = thunk_HAXgEjUFtaVqUCgLc(*(undefined4 *)(param_1 + 0x7594));
    return iVar1 + *(int *)(param_1 + 0x75bc) + *(int *)(param_1 + 0x75cc) + 0x17638;
  }
  return 0;
}


// =========================================================================
// Function: pjLsRxvBd_r_ngtDDQyTmrPSxBS
// Entry: 0x719eb1ac | Size: 96 bytes
// =========================================================================

undefined8 pjLsRxvBd_r_ngtDDQyTmrPSxBS(uint param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0x20000;
  if (param_1 < 0x20000) {
    uVar3 = param_1;
  }
  if (param_2 != 0) {
    uVar3 = 0x20000;
  }
  uVar1 = param_1 + uVar3 + 0x20040;
  uVar3 = param_2 + (uint)CARRY4(param_1,uVar3) + (uint)(0xfffdffbf < param_1 + uVar3);
  iVar2 = uVar3 - (param_4 + (param_3 > uVar1));
  if (param_4 < uVar3 || uVar3 - param_4 < (uint)(param_3 <= uVar1)) {
    uVar1 = param_3;
    uVar3 = param_4;
  }
  if (uVar3 != 0) {
    uVar1 = 0xfffffff0;
  }
  return CONCAT44(iVar2,uVar1);
}


// =========================================================================
// Function: ZTSvthFurmTbRJdujZTfRyMb
// Entry: 0x719eb224 | Size: 60 bytes
// =========================================================================

int ZTSvthFurmTbRJdujZTfRyMb(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1;
  if (0x1ffff < param_1) {
    uVar2 = 0x20000;
  }
  iVar1 = param_1 + uVar2 + 0x20040;
  if ((char)(CARRY4(param_1,uVar2) + (0xfffdffbf < param_1 + uVar2)) != '\0') {
    iVar1 = -0x10;
  }
  return uVar2 + iVar1 + 0x17638;
}


// =========================================================================
// Function: kb_PjDUHOzCnXVTSywEYLacSjLFfJqzBUA
// Entry: 0x719eb278 | Size: 136 bytes
// =========================================================================

undefined1 * kb_PjDUHOzCnXVTSywEYLacSjLFfJqzBUA(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_38 [8];
  undefined1 *puStack_30;
  int iStack_2c;
  
  puVar1 = (undefined1 *)thunk_iORHUobxeUIiFYwJEwlWbjG_JkTc(auStack_38,param_1,param_2,0);
  puVar2 = puVar1;
  if ((puVar1 < (undefined1 *)0xffffff89) &&
     (puVar2 = (undefined1 *)0xffffffb8, puVar1 == (undefined1 *)0x0)) {
    puVar2 = (undefined1 *)0xfffffff0;
    if ((uint)-iStack_2c < (uint)(puStack_30 < &DAT_40000001)) {
      puVar2 = (undefined1 *)0x20000;
      if (puStack_30 < (undefined1 *)0x20000) {
        puVar2 = puStack_30;
      }
      puVar1 = (undefined1 *)0x20000;
      if (iStack_2c == 0) {
        puVar1 = puVar2;
      }
      return puStack_30 + (int)puVar1 + (int)puVar2 + 0x37678;
    }
  }
  return puVar2;
}


// =========================================================================
// Function: pLdJRSRuEsGbMScWdwgEO
// Entry: 0x719eb334 | Size: 3156 bytes
// =========================================================================

uint pLdJRSRuEsGbMScWdwgEO(int *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int *piVar24;
  bool bVar25;
  undefined8 uVar26;
  int iStack_50;
  int iStack_38;
  uint uStack_34;
  
  uVar22 = param_3[2];
  uVar12 = param_3[1];
  if (uVar12 < uVar22) {
    return 0xffffffb8;
  }
  uVar13 = param_2[1];
  uVar1 = param_2[2];
  if (uVar13 < uVar1) {
    return 0xffffffba;
  }
  iVar14 = *param_2;
  piVar2 = param_1 + 0x1d7a;
  if ((param_1[0x1d79] == 1) && (param_1[0x1d6d] != 0)) {
    if (*piVar2 != iVar14) {
      return 0xffffff98;
    }
    uVar18 = param_1[0x1d7c];
    bVar25 = uVar18 != uVar1;
    uVar23 = uVar1;
    if (!bVar25) {
      uVar18 = param_1[0x1d7b];
      uVar23 = uVar13;
    }
    if (bVar25 || uVar18 != uVar23) {
      return 0xffffff98;
    }
  }
  puVar3 = (uint *)(param_1 + 0x5d88);
  iVar4 = iVar14 + uVar13;
  iVar15 = *param_3 + uVar22;
  iVar20 = *param_3 + uVar12;
  puVar5 = (uint *)(param_1 + 0x1d30);
  piVar6 = param_1 + 0x1d74;
  iVar19 = iVar14 + uVar1;
  iStack_50 = iVar15;
  while( true ) {
    while( true ) {
      while (param_1[0x1d6d] == 4) {
        uVar21 = iVar4 - iVar19;
        iVar7 = param_1[0x1d74];
        uVar18 = param_1[0x1d75] - iVar7;
        uVar23 = uVar18;
        if (uVar21 < uVar18) {
          uVar23 = uVar21;
        }
        if (uVar23 != 0) {
          imp___aeabi_memcpy(iVar19,param_1[0x1d72] + iVar7,uVar23);
          iVar7 = param_1[0x1d74];
        }
        if (iVar19 != 0) {
          iVar19 = iVar19 + uVar23;
        }
        *piVar6 = iVar7 + uVar23;
        iVar9 = iStack_50;
        if (uVar21 < uVar18) goto LAB_719ebdf8;
        param_1[0x1d6d] = 2;
        if (((uint)(*puVar5 <= (uint)param_1[0x1d73]) <= (uint)-param_1[0x1d31]) &&
           ((uint)param_1[0x1d73] < param_1[0x1d34] + iVar7 + uVar23)) {
          param_1[0x1d74] = 0;
          param_1[0x1d75] = 0;
        }
      }
      switch(param_1[0x1d6d]) {
      case 0:
        param_1[0x1d6d] = 1;
        iVar7 = 0;
        param_1[0x1d70] = 0;
        *piVar6 = 0;
        param_1[0x1d75] = 0;
        param_1[0x1d76] = 0;
        param_1[0x1d77] = 0;
        iVar9 = param_2[1];
        iVar17 = param_2[2];
        *piVar2 = *param_2;
        param_1[0x1d7b] = iVar9;
        param_1[0x1d7c] = iVar17;
        break;
      case 1:
        iVar7 = param_1[0x1d76];
        break;
      case 2:
        goto switchD_719eb560_caseD_2;
      case 3:
        uVar23 = param_1[0x1d2f];
        iVar7 = param_1[0x1d41];
        goto LAB_719ebb1c;
      default:
        return 0xffffffff;
      }
      uVar23 = thunk_iORHUobxeUIiFYwJEwlWbjG_JkTc(puVar5,puVar3,iVar7,param_1[0x1d5b]);
      iVar7 = param_1[0x1d6b];
      if (iVar7 != 0) {
        piVar24 = (int *)param_1[0x1d6a];
        if (piVar24 != (int *)0x0) {
          iVar7 = param_1[0x1d66];
        }
        if (piVar24 != (int *)0x0 && iVar7 != 0) {
          iVar9 = param_1[0x1d37];
          iStack_38 = iVar9;
          uVar18 = FUN_71967848(&iStack_38,4,0,0);
          iVar7 = piVar24[1];
          uVar18 = iVar7 - 1U & uVar18;
          do {
            uVar21 = uVar18;
            uVar26 = thunk_zLrieaXFsLuFSkKtwNXnEDiw(*(undefined4 *)(*piVar24 + uVar21 * 4));
            uVar18 = (uint)((ulonglong)uVar26 >> 0x20);
            iVar17 = (int)uVar26;
            if (iVar17 != iVar9) {
              uVar18 = (uVar21 & iVar7 - 1U) + 1;
            }
          } while (iVar17 != iVar9 && iVar17 != 0);
          iVar7 = *(int *)(*piVar24 + uVar21 * 4);
          if (iVar7 != 0) {
            thunk_mpOsAuPTCkfXUz(param_1[0x1d65]);
            param_1[0x1d69] = -1;
            param_1[0x1d65] = 0;
            param_1[0x1d66] = iVar7;
            param_1[0x1d67] = param_1[0x1d37];
          }
        }
      }
      if (0xffffff88 < uVar23) {
        return uVar23;
      }
      if (uVar23 == 0) break;
      uVar18 = iVar20 - iStack_50;
      iVar7 = param_1[0x1d76];
      uVar21 = uVar23 - iVar7;
      if (uVar18 < uVar21) {
        if (iVar20 != iStack_50) {
          imp___aeabi_memcpy((int)puVar3 + iVar7,iStack_50,uVar18);
          param_1[0x1d76] = param_1[0x1d76] + uVar18;
        }
        param_3[2] = param_3[1];
        uVar12 = thunk_iORHUobxeUIiFYwJEwlWbjG_JkTc(puVar5,puVar3,param_1[0x1d76],param_1[0x1d5b]);
        if (0xffffff88 < uVar12) {
          return uVar12;
        }
        uVar12 = 2;
        if (param_1[0x1d5b] == 0) {
          uVar12 = 6;
        }
        if (uVar12 <= uVar23) {
          uVar12 = uVar23;
        }
        return (uVar12 - param_1[0x1d76]) + 3;
      }
      imp___aeabi_memcpy((int)puVar3 + iVar7,iStack_50,uVar21);
      iStack_50 = iStack_50 + uVar21;
      param_1[0x1d76] = uVar23;
    }
    uVar23 = *puVar5 & param_1[0x1d31];
    bVar25 = uVar23 != 0xffffffff;
    if (bVar25) {
      uVar23 = param_1[0x1d35];
    }
    if (((bVar25 && uVar23 != 1) &&
        ((uint)-param_1[0x1d31] < (uint)(*puVar5 <= (uint)(iVar4 - iVar19)))) &&
       (FUN_719e7af4(&iStack_38,iVar15,iVar20 - iVar15), uStack_34 <= (uint)(iVar20 - iVar15)))
    break;
    if ((param_1[0x1d79] == 1) && (param_1[0x1d35] != 1)) {
      if ((*puVar5 != 0xffffffff || param_1[0x1d31] != -1) &&
         ((uint)(*puVar5 <= (uint)(iVar4 - iVar19)) <= (uint)-param_1[0x1d31])) {
        return 0xffffffba;
      }
    }
    if (param_1[0x1d69] == -1) {
LAB_719eb6d8:
      iVar7 = param_1[0x1d66];
      if (iVar7 == 0) {
        iVar7 = 0;
        bVar25 = true;
      }
      else {
        iVar9 = FUN_719e620c(iVar7);
        iVar17 = FUN_719e622c(iVar7);
        param_1[0x1d68] = (uint)(param_1[0x1d2e] != iVar9 + iVar17);
        bVar25 = false;
      }
    }
    else {
      if (param_1[0x1d69] == 1) {
        param_1[0x1d69] = 0;
        goto LAB_719eb6d8;
      }
      thunk_mpOsAuPTCkfXUz(param_1[0x1d65]);
      iVar7 = 0;
      bVar25 = true;
      param_1[0x1d69] = 0;
      param_1[0x1d65] = 0;
      param_1[0x1d66] = 0;
    }
    param_1[0x1d67] = 0;
    param_1[0x1d2b] = 0;
    param_1[0x1d2c] = 0;
    param_1[0x1d2d] = 0;
    param_1[0x1d2e] = 0;
    param_1[0x1d41] = 0;
    param_1[0x1d42] = 0;
    param_1[0x1d3c] = 0;
    param_1[0x1d3d] = 0;
    param_1[0x1d3e] = 0;
    param_1[0x1d3f] = 0;
    param_1[0x1d43] = 0;
    param_1[0xa0a] = 0xc00000c;
    param_1[0x1d40] = 3;
    param_1[0x1a0b] = 1;
    param_1[0x1a0c] = 4;
    param_1[0x1a0d] = 8;
    iVar9 = 1;
    if (param_1[0x1d5b] == 0) {
      iVar9 = 5;
    }
    param_1[0x1d2f] = iVar9;
    *param_1 = (int)(param_1 + 4);
    param_1[1] = (int)(param_1 + 0x608);
    param_1[2] = (int)(param_1 + 0x406);
    param_1[3] = (int)(param_1 + 0xa0a);
    if (!bVar25) {
      FUN_719e624c(param_1,iVar7);
    }
    if (*puVar3 >> 4 == 0x184d2a5) {
      iVar7 = param_1[0x5d89];
      iVar9 = 7;
    }
    else {
      uVar23 = FUN_719e93fc(param_1,puVar3,param_1[0x1d76]);
      if (0xffffff88 < uVar23) {
        return uVar23;
      }
      iVar9 = 2;
      iVar7 = 3;
    }
    param_1[0x1d41] = iVar9;
    param_1[0x1d2f] = iVar7;
    uVar18 = param_1[0x1d32];
    iVar7 = param_1[0x1d33];
    uVar23 = 0x400;
    if (0x400 < uVar18) {
      uVar23 = uVar18;
    }
    if (iVar7 == 0) {
      uVar18 = uVar23;
    }
    param_1[0x1d32] = uVar18;
    if ((uint)(uVar18 <= (uint)param_1[0x1d71]) <= (uint)-iVar7) {
      return 0xfffffff0;
    }
    uVar21 = param_1[0x1d34];
    uVar23 = 0;
    if (uVar21 < 5) {
      uVar21 = 4;
    }
    uVar8 = 0;
    if (param_1[0x1d79] == 0) {
      uVar23 = 0x20000;
      if (uVar18 < 0x20000) {
        uVar23 = uVar18;
      }
      if (iVar7 != 0) {
        uVar23 = 0x20000;
      }
      uVar16 = uVar18 + uVar23 + 0x20040;
      uVar11 = iVar7 + (uint)CARRY4(uVar18,uVar23) + (uint)(0xfffdffbf < uVar18 + uVar23);
      uVar18 = param_1[0x1d31];
      uVar23 = *puVar5;
      if (uVar11 <= uVar18 && (uint)(*puVar5 <= uVar16) <= uVar11 - uVar18) {
        uVar23 = uVar16;
        uVar18 = uVar11;
      }
      if (uVar18 != 0) {
        uVar23 = 0xfffffff0;
      }
    }
    uVar18 = uVar23 + uVar21;
    if (uVar18 * 3 <= (uint)(param_1[0x1d73] + param_1[0x1d6f])) {
      uVar8 = param_1[0x5d8d] + 1;
    }
    param_1[0x5d8d] = uVar8;
    if (((uint)param_1[0x1d6f] < uVar21 || (uint)param_1[0x1d73] < uVar23) || (0x7f < uVar8)) {
      if (param_1[0x1d64] == 0) {
        if (param_1[0x1d6e] != 0) {
          if ((code *)param_1[0x1d60] == (code *)0x0) {
            imp_free(param_1[0x1d6e]);
          }
          else {
            (*(code *)param_1[0x1d60])(param_1[0x1d61]);
          }
        }
        param_1[0x1d73] = 0;
        param_1[0x1d6f] = 0;
        if ((code *)param_1[0x1d5f] == (code *)0x0) {
          iVar7 = imp_malloc(uVar18);
        }
        else {
          iVar7 = (*(code *)param_1[0x1d5f])(param_1[0x1d61],uVar18);
        }
        param_1[0x1d6e] = iVar7;
        if (iVar7 == 0) {
          return 0xffffffc0;
        }
      }
      else {
        if (param_1[0x1d64] - 0x17638U < uVar18) {
          return 0xffffffc0;
        }
        iVar7 = param_1[0x1d6e];
      }
      param_1[0x1d6f] = uVar21;
      param_1[0x1d72] = iVar7 + uVar21;
      param_1[0x1d73] = uVar23;
    }
    param_1[0x1d6d] = 2;
switchD_719eb560_caseD_2:
    iVar7 = param_1[0x1d41];
    uVar18 = iVar20 - iStack_50;
    if (iVar7 - 3U < 2) {
      uVar23 = param_1[0x1d2f];
      uVar21 = uVar23;
      if (param_1[0x1d40] != 0) goto LAB_719ebaf0;
      uVar21 = uVar18;
      if (uVar23 < uVar18) {
        uVar21 = uVar23;
      }
      if (uVar21 < 2) {
        uVar21 = 1;
      }
    }
    else {
      uVar21 = param_1[0x1d2f];
LAB_719ebaf0:
      uVar23 = uVar21;
      if (uVar21 == 0) goto LAB_719ebd54;
    }
    if (uVar18 < uVar21) {
      iVar9 = iVar20;
      if (iStack_50 == iVar20) goto LAB_719ebdf8;
      param_1[0x1d6d] = 3;
LAB_719ebb1c:
      iVar9 = param_1[0x1d70];
      uVar18 = uVar23 - iVar9;
      if (iVar7 == 7) {
        uVar21 = iVar20 - iStack_50;
        if (uVar18 < (uint)(iVar20 - iStack_50)) {
          uVar21 = uVar18;
        }
        if (uVar21 == 0) goto LAB_719ebbf0;
LAB_719ebb90:
        iStack_50 = iStack_50 + uVar21;
        param_1[0x1d70] = iVar9 + uVar21;
        iVar9 = iStack_50;
        if (uVar21 < uVar18) goto LAB_719ebdf8;
      }
      else {
        if ((uint)(param_1[0x1d6f] - iVar9) < uVar18) {
          return 0xffffffec;
        }
        uVar21 = iVar20 - iStack_50;
        if (uVar18 < (uint)(iVar20 - iStack_50)) {
          uVar21 = uVar18;
        }
        if (uVar21 != 0) {
          imp___aeabi_memcpy(param_1[0x1d6e] + iVar9,iStack_50,uVar21);
          iVar9 = param_1[0x1d70];
          goto LAB_719ebb90;
        }
LAB_719ebbf0:
        iVar9 = iStack_50;
        if (uVar18 != 0) goto LAB_719ebdf8;
      }
      iVar7 = param_1[0x1d41];
      param_1[0x1d70] = 0;
      if (param_1[0x1d79] == 0) {
        if (iVar7 == 7) {
          iVar17 = 0;
          iVar9 = *piVar6;
        }
        else {
          iVar9 = param_1[0x1d74];
          iVar17 = param_1[0x1d73] - iVar9;
        }
        uVar23 = thunk_WxORCdnHXhUNmauorT_abwE
                           (param_1,param_1[0x1d72] + iVar9,iVar17,param_1[0x1d6e],uVar23);
        if (0xffffff88 < uVar23) {
          return uVar23;
        }
        if (uVar23 == 0 && iVar7 != 7) goto LAB_719ebc40;
        param_1[0x1d75] = param_1[0x1d74] + uVar23;
        iVar7 = 4;
      }
      else {
        iVar9 = 0;
        if (iVar7 != 7) {
          iVar9 = iVar4 - iVar19;
        }
        uVar23 = thunk_WxORCdnHXhUNmauorT_abwE(param_1,iVar19,iVar9,param_1[0x1d6e],uVar23);
        if (0xffffff88 < uVar23) {
          return uVar23;
        }
        iVar19 = iVar19 + uVar23;
LAB_719ebc40:
        iVar7 = 2;
      }
      param_1[0x1d6d] = iVar7;
    }
    else {
      if (param_1[0x1d79] == 0) {
        if (iVar7 == 7) {
          iVar17 = 0;
          iVar9 = *piVar6;
        }
        else {
          iVar9 = param_1[0x1d74];
          iVar17 = param_1[0x1d73] - iVar9;
        }
        uVar23 = thunk_WxORCdnHXhUNmauorT_abwE
                           (param_1,param_1[0x1d72] + iVar9,iVar17,iStack_50,uVar21);
        if (0xffffff88 < uVar23) {
          return uVar23;
        }
        if (uVar23 == 0 && iVar7 != 7) goto LAB_719ebbe8;
        param_1[0x1d75] = param_1[0x1d74] + uVar23;
        iVar7 = 4;
      }
      else {
        iVar9 = 0;
        if (iVar7 != 7) {
          iVar9 = iVar4 - iVar19;
        }
        uVar23 = thunk_WxORCdnHXhUNmauorT_abwE(param_1,iVar19,iVar9,iStack_50,uVar21);
        if (0xffffff88 < uVar23) {
          return uVar23;
        }
        iVar19 = iVar19 + uVar23;
LAB_719ebbe8:
        iVar7 = 2;
      }
      param_1[0x1d6d] = iVar7;
      iStack_50 = iStack_50 + uVar21;
    }
  }
  uVar10 = FUN_719e8aa0(param_1);
  uVar23 = FUN_719e7f98(param_1,iVar19,iVar4 - iVar19,iVar15,uStack_34,0,0,uVar10);
  if (0xffffff88 < uVar23) {
    return uVar23;
  }
  if (iVar19 != 0) {
    iVar19 = iVar19 + uVar23;
  }
  param_1[0x1d2f] = 0;
  iStack_50 = iVar15 + uStack_34;
LAB_719ebd54:
  param_1[0x1d6d] = 0;
  iVar9 = iStack_50;
LAB_719ebdf8:
  iStack_50 = iVar9;
  param_3[2] = iStack_50 - *param_3;
  iVar4 = param_2[1];
  iVar20 = iVar19 - *param_2;
  param_2[2] = iVar20;
  *piVar2 = *param_2;
  param_1[0x1d7b] = iVar4;
  param_1[0x1d7c] = iVar20;
  iVar4 = iVar15;
  if (iStack_50 == iVar15) {
    iVar4 = iVar14 + uVar1;
  }
  if (iStack_50 == iVar15 && iVar19 == iVar4) {
    iVar14 = param_1[0x1d78];
    param_1[0x1d78] = iVar14 + 1;
    if (0xe < iVar14) {
      if (uVar1 == uVar13) {
        return 0xffffffb0;
      }
      if (uVar22 == uVar12) {
        return 0xffffffae;
      }
    }
  }
  else {
    param_1[0x1d78] = 0;
  }
  if (param_1[0x1d2f] != 0) {
    uVar12 = param_1[0x1d2f] - param_1[0x1d70];
    if (param_1[0x1d41] == 3) {
      uVar12 = uVar12 + 3;
    }
    return uVar12;
  }
  if (param_1[0x1d75] == param_1[0x1d74]) {
    uVar12 = 0;
    if (param_1[0x1d77] != 0) {
      if ((uint)param_3[2] < (uint)param_3[1]) {
        param_3[2] = param_3[2] + 1;
        return 0;
      }
      param_1[0x1d6d] = 2;
      return 1;
    }
  }
  else {
    uVar12 = 1;
    if (param_1[0x1d77] == 0) {
      param_3[2] = param_3[2] + -1;
      param_1[0x1d77] = 1;
      return 1;
    }
  }
  return uVar12;
}


// =========================================================================
// Function: cWyUuG_pkbrIbDBUUaoEZCGCrLuHPJAB
// Entry: 0x719ec234 | Size: 96 bytes
// =========================================================================

void cWyUuG_pkbrIbDBUUaoEZCGCrLuHPJAB
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
               undefined4 param_5,undefined4 param_6,undefined4 *param_7)

{
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_24 = param_6;
  uStack_28 = param_5;
  uStack_14 = *param_4;
  uStack_20 = *param_7;
  uStack_1c = param_2;
  uStack_18 = param_3;
  thunk_pLdJRSRuEsGbMScWdwgEO(param_1,&uStack_1c,&uStack_28);
  *param_4 = uStack_14;
  *param_7 = uStack_20;
  return;
}


// =========================================================================
// Function: FUN_719ec2c8
// Entry: 0x719ec2c8 | Size: 76 bytes
// =========================================================================

uint FUN_719ec2c8(uint3 *param_1,uint param_2,uint *param_3)

{
  uint3 uVar1;
  uint3 uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 < 3) {
    return 0xffffffb8;
  }
  uVar2 = *param_1;
  uVar1 = *param_1;
  uVar3 = ((ushort)uVar2 & 7) >> 1;
  *param_3 = uVar3;
  param_3[1] = (ushort)uVar2 & 1;
  param_3[2] = (uint)(uVar1 >> 3);
  uVar4 = 1;
  if ((uVar3 != 1) && (uVar4 = (uint)(uVar1 >> 3), uVar3 == 3)) {
    return 0xffffffec;
  }
  return uVar4;
}


// =========================================================================
// Function: FUN_719ec32c
// Entry: 0x719ec32c | Size: 1548 bytes
// =========================================================================

uint FUN_719ec32c(int param_1,uint *param_2,uint param_3,int param_4,uint param_5,int param_6)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  uint uStack_28;
  
  if (param_3 < 2) {
    return 0xffffffec;
  }
  bVar1 = (byte)*param_2;
  uVar5 = (uint)bVar1;
  uVar9 = uVar5 & 3;
  switch(uVar9) {
  case 0:
    uVar9 = (uVar5 & 0xf) >> 2;
    uVar5 = param_5;
    if (0x1ffff < param_5) {
      uVar5 = 0x20000;
    }
    if (uVar9 == 1) {
      uVar9 = (uint)(ushort)*param_2;
      iVar6 = 2;
    }
    else {
      if (uVar9 != 3) {
        uVar9 = (uint)(bVar1 >> 3);
        iVar6 = 1;
        goto LAB_719ec494;
      }
      if (param_3 == 2) {
        return 0xffffffec;
      }
      iVar6 = 3;
      uVar9 = (uint)(uint3)*param_2;
    }
    uVar9 = uVar9 >> 4;
LAB_719ec494:
    if (uVar5 < uVar9) {
      return 0xffffffba;
    }
    if (param_4 != 0 || uVar9 == 0) {
      if ((param_6 == 0) && (uVar9 + 0x20040 < param_5)) {
        uVar4 = 1;
        param_4 = param_4 + 0x20020;
        *(int *)(param_1 + 0x75f4) = param_4;
        iVar3 = param_4 + uVar9;
        bVar2 = false;
      }
      else if (uVar9 < 0x10001) {
        param_4 = param_1 + 0x7600;
        bVar2 = false;
        iVar3 = param_4 + uVar9;
        uVar4 = 0;
        *(int *)(param_1 + 0x75f4) = param_4;
      }
      else {
        bVar2 = true;
        param_4 = ((param_4 + uVar5) - uVar9) + 0xffe0;
        *(int *)(param_1 + 0x75f4) = param_4;
        iVar3 = param_4 + uVar9 + -0x10000;
        uVar4 = 2;
      }
      *(int *)(param_1 + 0x75f8) = iVar3;
      *(undefined4 *)(param_1 + 0x75fc) = uVar4;
      uVar5 = iVar6 + uVar9;
      if (uVar5 + 0x20 <= param_3) {
        *(uint *)(param_1 + 0x7588) = uVar9;
        *(byte **)(param_1 + 0x7578) = (byte *)((int)param_2 + iVar6);
        *(byte **)(param_1 + 0x75f8) = (byte *)((int)param_2 + iVar6) + uVar9;
        *(undefined4 *)(param_1 + 0x75fc) = 0;
        return uVar5;
      }
      if (uVar5 <= param_3) {
        pbVar7 = (byte *)((int)param_2 + iVar6);
        uVar10 = uVar9;
        if (bVar2) {
          imp___aeabi_memcpy(param_4,pbVar7,uVar9 - 0x10000);
          pbVar7 = pbVar7 + (uVar9 - 0x10000);
          param_4 = param_1 + 0x7600;
          uVar10 = 0x10000;
        }
        imp___aeabi_memcpy(param_4,pbVar7,uVar10);
        *(uint *)(param_1 + 0x7588) = uVar9;
        *(undefined4 *)(param_1 + 0x7578) = *(undefined4 *)(param_1 + 0x75f4);
        return uVar5;
      }
      return 0xffffffec;
    }
    return 0xffffffba;
  case 1:
    uVar9 = (uVar5 & 0xf) >> 2;
    uVar5 = param_5;
    if (0x1ffff < param_5) {
      uVar5 = 0x20000;
    }
    if (uVar9 == 1) {
      if (param_3 == 2) {
        return 0xffffffec;
      }
      uVar9 = (uint)(ushort)*param_2;
      iVar6 = 2;
LAB_719ec484:
      uVar9 = uVar9 >> 4;
    }
    else {
      if (uVar9 == 3) {
        if (param_3 < 4) {
          return 0xffffffec;
        }
        uVar9 = (uint)(uint3)*param_2;
        iVar6 = 3;
        goto LAB_719ec484;
      }
      uVar9 = (uint)(bVar1 >> 3);
      iVar6 = 1;
    }
    if ((param_4 == 0) && (uVar9 != 0)) {
      return 0xffffffba;
    }
    if (0x20000 < uVar9) {
      return 0xffffffec;
    }
    if (param_5 < uVar9) {
      return 0xffffffba;
    }
    if ((param_6 == 0) && (uVar9 + 0x20040 < param_5)) {
      uVar4 = 1;
      param_4 = param_4 + 0x20020;
    }
    else {
      if (0x10000 < uVar9) {
        iVar3 = ((param_4 + uVar5) - uVar9) + 0xffe0;
        *(uint *)(param_1 + 0x75f8) = (uVar9 - 0x10000) + iVar3;
        *(int *)(param_1 + 0x75f4) = iVar3;
        *(undefined4 *)(param_1 + 0x75fc) = 2;
        imp___aeabi_memset(iVar3,uVar9 - 0x10000,*(byte *)((int)param_2 + iVar6));
        imp___aeabi_memset8(param_1 + 0x7600,0x10000,*(byte *)((int)param_2 + iVar6));
        goto LAB_719ec778;
      }
      param_4 = param_1 + 0x7600;
      uVar4 = 0;
    }
    *(int *)(param_1 + 0x75f4) = param_4;
    *(uint *)(param_1 + 0x75f8) = param_4 + uVar9;
    *(undefined4 *)(param_1 + 0x75fc) = uVar4;
    imp___aeabi_memset(param_4,uVar9,*(byte *)((int)param_2 + iVar6));
LAB_719ec778:
    *(uint *)(param_1 + 0x7588) = uVar9;
    *(undefined4 *)(param_1 + 0x7578) = *(undefined4 *)(param_1 + 0x75f4);
    return iVar6 + 1;
  case 3:
    if (*(int *)(param_1 + 0x7508) == 0) {
      return 0xffffffe2;
    }
  }
  if (param_3 < 5) {
    return 0xffffffec;
  }
  uVar10 = *param_2;
  uVar8 = (uVar5 & 0xf) >> 2;
  uVar5 = param_5;
  if (0x1ffff < param_5) {
    uVar5 = 0x20000;
  }
  if (uVar8 == 2) {
    uStack_28 = uVar10 >> 0x12;
    uVar10 = uVar10 & 0x3ffff;
    iVar6 = 4;
  }
  else {
    if (uVar8 != 3) {
      uStack_28 = (uVar10 & 0xffffff) >> 0xe;
      iVar6 = 3;
      uVar10 = (uVar10 & 0x3fff) >> 4;
      bVar2 = false;
      if (uVar8 != 0) {
        bVar2 = true;
      }
      goto LAB_719ec57c;
    }
    uStack_28 = (uint)(byte)param_2[1] << 10 | uVar10 >> 0x16;
    uVar10 = uVar10 & 0x3fffff;
    iVar6 = 5;
  }
  uVar10 = uVar10 >> 4;
  bVar2 = true;
LAB_719ec57c:
  if ((param_4 == 0) && (uVar10 != 0)) {
    return 0xffffffba;
  }
  if (uVar10 < 0x20001) {
    if ((bool)(bVar2 & uVar10 < 6)) {
      return 0xffffffe8;
    }
    uVar8 = iVar6 + uStack_28;
    if (uVar8 <= param_3) {
      if (uVar5 < uVar10) {
        return 0xffffffba;
      }
      if ((param_6 == 0) && (uVar10 + 0x20040 < param_5)) {
        uVar4 = 1;
        param_4 = param_4 + 0x20020;
        *(int *)(param_1 + 0x75f4) = param_4;
        iVar3 = param_4 + uVar10;
      }
      else {
        if (uVar10 < 0x10001) {
          param_4 = param_1 + 0x7600;
          uVar4 = 0;
          iVar3 = param_4 + uVar10;
        }
        else {
          iVar3 = param_4 + uVar5;
          uVar4 = 2;
          param_4 = iVar3 - uVar10;
        }
        *(int *)(param_1 + 0x75f4) = param_4;
      }
      *(int *)(param_1 + 0x75f8) = iVar3;
      *(undefined4 *)(param_1 + 0x75fc) = uVar4;
      if ((0x300 < uVar10) && (*(int *)(param_1 + 0x75a0) != 0)) {
        uVar5 = 0;
        do {
          HintPreloadData(*(int *)(param_1 + 0xc) + uVar5);
          bVar11 = uVar5 < 0x3fc4;
          uVar5 = uVar5 + 0x40;
        } while (bVar11);
      }
      iVar3 = (uint)(*(int *)(param_1 + 0x75b0) != 0) << 4;
      if (uVar9 == 3) {
        if (bVar2) {
          uVar5 = FUN_719e3688(param_4,uVar10,(byte *)((int)param_2 + iVar6),uStack_28,
                               *(undefined4 *)(param_1 + 0xc),iVar3);
        }
        else {
          uVar5 = FUN_719e3330(param_4,uVar10,(byte *)((int)param_2 + iVar6),uStack_28,
                               *(undefined4 *)(param_1 + 0xc),iVar3);
        }
      }
      else if (bVar2) {
        uVar5 = FUN_719e5d28(param_1 + 0x2828,param_4,uVar10,(byte *)((int)param_2 + iVar6),
                             uStack_28,param_1 + 0x6aac,0xa00,iVar3);
      }
      else {
        uVar5 = FUN_719e3258(param_1 + 0x2828,param_4,uVar10,(byte *)((int)param_2 + iVar6),
                             uStack_28,param_1 + 0x6aac,0xa00,iVar3);
      }
      if (*(int *)(param_1 + 0x75fc) == 2) {
        imp___aeabi_memcpy(param_1 + 0x7600,*(int *)(param_1 + 0x75f8) + -0x10000,0x10000);
        imp___aeabi_memmove(*(int *)(param_1 + 0x75f4) + 0xffe0,*(int *)(param_1 + 0x75f4),
                            uVar10 - 0x10000);
        *(int *)(param_1 + 0x75f4) = *(int *)(param_1 + 0x75f4) + 0xffe0;
        *(int *)(param_1 + 0x75f8) = *(int *)(param_1 + 0x75f8) + -0x20;
      }
      if (uVar5 < 0xffffff89) {
        *(uint *)(param_1 + 0x7588) = uVar10;
        *(int *)(param_1 + 0x7508) = 1;
        *(undefined4 *)(param_1 + 0x7578) = *(undefined4 *)(param_1 + 0x75f4);
        if (uVar9 == 2) {
          *(int *)(param_1 + 0xc) = param_1 + 0x2828;
          return uVar8;
        }
        return uVar8;
      }
      return 0xffffffec;
    }
  }
  return 0xffffffec;
}


// =========================================================================
// Function: FUN_719eca94
// Entry: 0x719eca94 | Size: 672 bytes
// =========================================================================

void FUN_719eca94(undefined4 *param_1,short *param_2,int param_3,int param_4,int param_5,
                 uint param_6,short *param_7)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  short sVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  short *psVar17;
  bool bVar18;
  
  uVar14 = 1;
  uVar15 = (1 << (param_6 & 0xff)) - 1;
  uVar1 = 1 << (param_6 & 0xff);
  if (param_3 == -1) {
    *param_1 = 1;
    param_1[1] = param_6;
    iVar16 = (uVar1 >> 3) + (uVar1 >> 1) + 3;
  }
  else {
    iVar16 = 0;
    psVar5 = param_2;
    uVar4 = uVar15;
    psVar17 = param_7;
    do {
      sVar12 = *psVar5;
      if (sVar12 == -1) {
        sVar12 = 1;
        param_1[uVar4 * 2 + 3] = iVar16;
        uVar4 = uVar4 - 1;
      }
      else if ((0x10000 << (param_6 - 1 & 0xff)) >> 0x10 <= (int)sVar12) {
        uVar14 = 0;
      }
      iVar16 = iVar16 + 1;
      *psVar17 = sVar12;
      psVar5 = psVar5 + 1;
      psVar17 = psVar17 + 1;
    } while (param_3 + 1 != iVar16);
    *param_1 = uVar14;
    param_1[1] = param_6;
    if (uVar4 != uVar15) {
      uVar13 = 0;
      iVar16 = 0;
      do {
        sVar12 = param_2[iVar16];
        if (0 < sVar12) {
          iVar3 = 0;
          do {
            param_1[uVar13 * 2 + 3] = iVar16;
            do {
              uVar13 = (uVar1 >> 3) + (uVar1 >> 1) + 3 + uVar13 & uVar15;
            } while (uVar4 < uVar13);
            iVar3 = iVar3 + 1;
          } while (iVar3 != sVar12);
        }
        bVar18 = iVar16 != param_3;
        iVar16 = iVar16 + 1;
      } while (bVar18);
      goto LAB_719eccd0;
    }
    iVar3 = 0;
    uVar4 = 0;
    uVar13 = 0;
    iVar16 = 0;
    do {
      iVar6 = (int)param_2[iVar16];
      puVar9 = (uint *)((int)param_7 + iVar3 + 0x6a);
      *puVar9 = uVar4;
      puVar9[1] = uVar13;
      if (8 < iVar6) {
        iVar10 = 0x72;
        do {
          puVar9 = (uint *)((int)param_7 + iVar10 + iVar3);
          *puVar9 = uVar4;
          puVar9[1] = uVar13;
          iVar11 = iVar10 + -0x62;
          iVar10 = iVar10 + 8;
        } while (iVar11 < iVar6);
      }
      bVar18 = 0xfefefefe < uVar4;
      uVar4 = uVar4 + 0x1010101;
      iVar3 = iVar3 + iVar6;
      uVar13 = uVar13 + 0x1010101 + (uint)bVar18;
      bVar18 = iVar16 != param_3;
      iVar16 = iVar16 + 1;
    } while (bVar18);
    iVar16 = (uVar1 >> 3) + 3 + (uVar1 >> 1);
  }
  uVar13 = 0;
  uVar4 = 0;
  do {
    uVar8 = uVar4 + 2;
    param_1[(uVar13 & uVar15) * 2 + 3] = (uint)*(byte *)((int)param_7 + uVar4 + 0x6a);
    param_1[(uVar13 + iVar16 & uVar15) * 2 + 3] = (uint)*(byte *)((int)param_7 + uVar4 + 0x6b);
    uVar13 = uVar13 + iVar16 * 2 & uVar15;
    uVar4 = uVar8;
  } while (uVar8 < uVar1);
LAB_719eccd0:
  piVar7 = param_1 + 3;
  uVar15 = uVar1;
  do {
    iVar16 = *piVar7;
    uVar15 = uVar15 - 1;
    uVar2 = param_7[iVar16];
    param_7[iVar16] = uVar2 + 1;
    uVar4 = (param_6 - 0x1f) + LZCOUNT((uint)uVar2);
    *(char *)((int)piVar7 + -1) = (char)uVar4;
    *(ushort *)(piVar7 + -1) = (uVar2 << (uVar4 & 0xff)) - (short)uVar1;
    *(undefined1 *)((int)piVar7 + -2) = *(undefined1 *)(param_5 + iVar16);
    *piVar7 = *(int *)(param_4 + iVar16 * 4);
    piVar7 = piVar7 + 2;
  } while (uVar15 != 0);
  return;
}


// =========================================================================
// Function: FUN_719ecd4c
// Entry: 0x719ecd4c | Size: 572 bytes
// =========================================================================

byte * FUN_719ecd4c(int param_1,uint *param_2,byte *param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  
  pbVar4 = (byte *)0xffffffb8;
  if (param_4 != 0) {
    pbVar5 = param_3 + 1;
    bVar1 = *param_3;
    uVar6 = (uint)bVar1;
    if (uVar6 == 0) {
      pbVar4 = (byte *)0x1;
      if (param_4 != 1) {
        pbVar4 = (byte *)0xffffffb8;
      }
      *param_2 = 0;
    }
    else {
      if ((char)bVar1 < '\0') {
        if (uVar6 == 0xff) {
          if (param_4 < 3) {
            return &DAT_ffffffb8;
          }
          pbVar5 = param_3 + 3;
          uVar6 = *(ushort *)(param_3 + 1) + 0x7f00;
        }
        else {
          if (param_4 < 2) {
            return &DAT_ffffffb8;
          }
          pbVar5 = param_3 + 2;
          uVar6 = CONCAT11(bVar1,param_3[1]) - 0x8000;
        }
      }
      pbVar7 = param_3 + param_4;
      pbVar8 = pbVar5 + 1;
      *param_2 = uVar6;
      if (pbVar8 <= pbVar7) {
        puVar9 = (undefined4 *)(param_1 + 0x750c);
        iVar3 = param_1 + 0x6aac;
        bVar1 = *pbVar5;
        uVar2 = FUN_719ed114(param_1 + 0x10,param_1,bVar1 >> 6,0x23,9,pbVar8,
                             (int)pbVar7 - (int)pbVar8,&DAT_7008df34,&DAT_7008dfc4,&DAT_7008dfe8,
                             *puVar9,*(undefined4 *)(param_1 + 0x75a0),uVar6,iVar3);
        pbVar4 = (byte *)0xffffffec;
        if (uVar2 < 0xffffff89) {
          pbVar8 = pbVar8 + uVar2;
          uVar2 = FUN_719ed114(param_1 + 0x1018,param_1 + 8,(bVar1 & 0x3f) >> 4,0x1f,8,pbVar8,
                               (int)pbVar7 - (int)pbVar8,&DAT_7008e1f0,&DAT_7008e270,&DAT_7008e290,
                               *puVar9,*(undefined4 *)(param_1 + 0x75a0),uVar6,iVar3);
          if (uVar2 < 0xffffff89) {
            pbVar8 = pbVar8 + uVar2;
            uVar6 = FUN_719ed114(param_1 + 0x1820,param_1 + 4,(bVar1 & 0xf) >> 2,0x34,9,pbVar8,
                                 (int)pbVar7 - (int)pbVar8,&DAT_7008e398,&DAT_7008e46c,&DAT_7008e4a4
                                 ,*puVar9,*(undefined4 *)(param_1 + 0x75a0),uVar6,iVar3);
            pbVar4 = (byte *)0xffffffec;
            if (uVar6 < 0xffffff89) {
              pbVar4 = pbVar8 + (uVar6 - (int)param_3);
            }
          }
          else {
            pbVar4 = (byte *)0xffffffec;
          }
        }
      }
    }
  }
  return pbVar4;
}


// =========================================================================
// Function: FUN_719ed114
// Entry: 0x719ed114 | Size: 60 bytes
// =========================================================================

void FUN_719ed114(undefined4 param_1,undefined4 param_2,int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x719ed14c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_719ed150 + *(int *)(&LAB_719ed150 + param_3 * 4)))();
  return;
}


// =========================================================================
// Function: FUN_719ed2e8
// Entry: 0x719ed2e8 | Size: 11392 bytes
// =========================================================================

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint * FUN_719ed2e8(int *param_1,int *param_2,uint param_3,int param_4,uint param_5,int param_6,
                   undefined4 param_7)

{
  int *piVar1;
  byte bVar2;
  uint *puVar3;
  undefined *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  undefined1 *puVar13;
  ushort *puVar14;
  int *piVar15;
  int *piVar16;
  byte bVar17;
  uint uVar18;
  int *piVar19;
  uint uVar20;
  ushort *puVar21;
  int *piVar22;
  uint uVar23;
  uint *puVar24;
  int iVar25;
  uint uVar26;
  ushort *puVar27;
  uint uVar28;
  undefined *puVar29;
  int iVar30;
  int *piVar31;
  int iVar32;
  uint uVar33;
  uint uVar34;
  uint *puVar35;
  undefined *puVar36;
  bool bVar37;
  bool bVar38;
  bool bVar39;
  int *piStack_fc;
  uint uStack_f0;
  uint uStack_ec;
  int iStack_e0;
  uint uStack_c8;
  uint uStack_c4;
  undefined *puStack_c0;
  uint *puStack_bc;
  uint *puStack_b8;
  uint *puStack_b4;
  uint uStack_b0;
  int iStack_ac;
  uint uStack_a8;
  int iStack_a4;
  uint uStack_a0;
  int iStack_9c;
  uint auStack_98 [4];
  uint auStack_88 [23];
  int *apiStack_2c [2];
  
  if (0x20000 < param_5) {
    return (uint *)&DAT_ffffffb8;
  }
  puVar3 = (uint *)FUN_719ec32c(param_1,param_4,param_5,param_2,param_3,param_7);
  if ((uint *)0xffffff88 < puVar3) {
    return puVar3;
  }
  puVar35 = (uint *)(param_5 - (int)puVar3);
  if (param_6 == 0) {
    uVar6 = param_3;
    if (0x1ffff < param_3) {
      uVar6 = 0x20000;
    }
  }
  else {
    uVar6 = param_1[0x1d34];
    if (param_3 <= (uint)param_1[0x1d34]) {
      uVar6 = param_3;
    }
  }
  puVar4 = (undefined *)param_1[0x1d68];
  iVar32 = param_1[0x1d2d];
  puVar5 = (uint *)FUN_719ecd4c(param_1,&uStack_c8,param_4 + (int)puVar3,puVar35);
  puVar8 = (undefined *)((int)param_2 + (uVar6 - iVar32));
  bVar38 = (undefined *)0x3fffffc < puVar8;
  if ((uint *)0xffffff88 < puVar5) {
    return puVar5;
  }
  if ((param_2 == (int *)0x0 || param_3 == 0) && (0 < (int)uStack_c8)) {
    return (uint *)&DAT_ffffffba;
  }
  puVar3 = (uint *)(param_4 + (int)puVar3 + (int)puVar5);
  uVar6 = (int)puVar35 - (int)puVar5;
  if (puVar8 < (undefined *)0x3fffffd) {
    if (puVar4 == (undefined *)0x0) {
      if (((undefined *)0x1000000 < puVar8) && (8 < (int)uStack_c8)) {
        uVar18 = 0;
        iVar32 = 0;
        uVar7 = *(uint *)(param_1[2] + 4);
        do {
          iVar9 = uVar18 * 8;
          uVar18 = uVar18 + 1;
          if (0x16 < *(byte *)(param_1[2] + 10 + iVar9)) {
            iVar32 = iVar32 + 1;
          }
        } while (uVar18 >> (uVar7 & 0xff) == 0);
        uVar7 = iVar32 << (8 - uVar7 & 0xff);
        goto LAB_719ed4f0;
      }
      bVar38 = false;
    }
    else {
      bVar38 = false;
    }
LAB_719ed518:
    param_1[0x1d68] = 0;
    if (puVar4 == (undefined *)0x0) {
      if (param_1[0x1d7f] == 2) {
        puVar3 = (uint *)FUN_719f0480(param_1,param_2,param_3,puVar3,uVar6,uStack_c8,bVar38);
        return puVar3;
      }
      puVar3 = (uint *)FUN_719f2850(param_1,param_2,param_3,puVar3,uVar6,uStack_c8,bVar38);
      return puVar3;
    }
  }
  else {
    if (uStack_c8 == 0) {
      uVar7 = 0;
      bVar38 = false;
    }
    else {
      bVar17 = 0;
      uVar18 = 0;
      iVar32 = 0;
      uVar7 = *(uint *)(param_1[2] + 4);
      do {
        bVar2 = *(byte *)(param_1[2] + 10 + uVar18 * 8);
        uVar18 = uVar18 + 1;
        if (0x16 < bVar2) {
          iVar32 = iVar32 + 1;
        }
        if (bVar17 <= bVar2) {
          bVar17 = bVar2;
        }
      } while (uVar18 >> (uVar7 & 0xff) == 0);
      bVar38 = 0x19 < bVar17 && bVar38;
      uVar7 = iVar32 << (8 - uVar7 & 0xff);
    }
LAB_719ed4f0:
    puVar8 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      puVar4 = (undefined *)0x0;
      if (0x13 < uVar7) {
        puVar4 = (undefined *)0x1;
      }
      goto LAB_719ed518;
    }
    param_1[0x1d68] = 0;
  }
  iVar32 = param_1[0x1d7f];
  piVar19 = (int *)param_1[0x1d2c];
  if (iVar32 != 1) {
    puVar8 = (undefined *)((int)param_2 + param_3);
  }
  piStack_fc = (int *)param_1[0x1d7e];
  if (iVar32 == 1) {
    puVar8 = (undefined *)param_1[0x1d7d];
  }
  iVar9 = param_1[0x1d2d];
  piVar10 = (int *)param_1[0x1d2e];
  piVar11 = (int *)param_1[0x1d5e];
  apiStack_2c[0] = piVar11;
  piVar31 = param_2;
  if (uStack_c8 == 0) goto joined_r0x719ed60c;
  param_1[0x1d43] = 1;
  auStack_98[0] = param_1[0x1a0b];
  uVar7 = uStack_c8;
  if (7 < (int)uStack_c8) {
    uVar7 = 8;
  }
  auStack_98[1] = param_1[0x1a0c];
  auStack_98[2] = param_1[0x1a0d];
  if (puVar35 == puVar5) {
    return (uint *)0xffffffec;
  }
  puStack_b4 = puVar3 + 1;
  if (uVar6 < 4) {
    uStack_c4 = (uint)(byte)*puVar3;
    if (uVar6 == 2) {
LAB_719ed6e0:
      uStack_c4 = uStack_c4 + (uint)*(byte *)((int)puVar3 + 1) * 0x100;
    }
    else if (uVar6 == 3) {
      uStack_c4 = uStack_c4 | (uint)*(byte *)((int)puVar3 + 2) << 0x10;
      goto LAB_719ed6e0;
    }
    uVar18 = (uint)*(byte *)(param_4 + param_5 + -1);
    if (uVar18 == 0) {
      return (uint *)0xffffffec;
    }
    iVar32 = LZCOUNT(uVar18) + uVar6 * -8 + 9;
    uVar18 = 0;
    puStack_bc = puVar3;
  }
  else {
    uVar18 = uVar6 - 4;
    uStack_c4 = *(uint *)((int)puVar3 + uVar18);
    if (uStack_c4 >> 0x18 == 0) {
      return (uint *)0xffffffec;
    }
    iVar32 = 8 - (LZCOUNT(uStack_c4 >> 0x18) ^ 0x1fU);
    puStack_bc = (uint *)((int)puVar3 + uVar18);
    if (0xffffff88 < uVar6) {
      return (uint *)0xffffffec;
    }
  }
  iVar25 = *(int *)(*param_1 + 4);
  puStack_c0 = (undefined *)(iVar25 + iVar32);
  uStack_b0 = *(uint *)(&DAT_7008e6ac + iVar25 * 4) & uStack_c4 >> (-(int)puStack_c0 & 0x1fU);
  if (puStack_c0 < 0x21) {
    if ((int)uVar18 < 4) {
      if (uVar18 == 0) {
        uVar18 = 0;
        goto LAB_719ed804;
      }
      uVar6 = uVar18;
      if (puVar3 <= (uint *)((int)puVar3 + (uVar18 - ((uint)puStack_c0 >> 3)))) {
        uVar6 = (uint)puStack_c0 >> 3;
      }
      puStack_c0 = (undefined *)((int)puStack_c0 + uVar6 * -8);
    }
    else {
      uVar6 = (uint)puStack_c0 >> 3;
      puStack_c0 = (undefined *)((uint)puStack_c0 & 7);
    }
    uVar18 = uVar18 - uVar6;
    puStack_bc = (uint *)((int)puVar3 + uVar18);
    uStack_c4 = *(uint *)((int)puVar3 + uVar18);
  }
LAB_719ed804:
  iStack_ac = *param_1 + 8;
  iVar32 = *(int *)(param_1[2] + 4);
  puStack_c0 = (undefined *)(iVar32 + (int)puStack_c0);
  uStack_a8 = *(uint *)(&DAT_7008e6ac + iVar32 * 4) & uStack_c4 >> (-(int)puStack_c0 & 0x1fU);
  if (puStack_c0 < 0x21) {
    if ((int)uVar18 < 4) {
      if (uVar18 == 0) {
        uVar18 = 0;
        goto LAB_719ed8a8;
      }
      uVar6 = uVar18;
      if (puVar3 <= (uint *)((int)puVar3 + (uVar18 - ((uint)puStack_c0 >> 3)))) {
        uVar6 = (uint)puStack_c0 >> 3;
      }
      puStack_c0 = (undefined *)((int)puStack_c0 + uVar6 * -8);
    }
    else {
      uVar6 = (uint)puStack_c0 >> 3;
      puStack_c0 = (undefined *)((uint)puStack_c0 & 7);
    }
    uVar18 = uVar18 - uVar6;
    puStack_bc = (uint *)((int)puVar3 + uVar18);
    uStack_c4 = *(uint *)((int)puVar3 + uVar18);
  }
LAB_719ed8a8:
  iStack_e0 = (int)param_2 - (int)piVar19;
  iVar32 = param_1[1];
  iStack_a4 = param_1[2] + 8;
  puStack_c0 = (undefined *)(*(int *)(iVar32 + 4) + (int)puStack_c0);
  uStack_a0 = *(uint *)(&DAT_7008e6ac + *(int *)(iVar32 + 4) * 4) &
              uStack_c4 >> (-(int)puStack_c0 & 0x1fU);
  if (puStack_c0 < (undefined *)0x21) {
    if ((int)uVar18 < 4) {
      if (uVar18 == 0) {
        iStack_9c = iVar32 + 8;
        uVar18 = 0;
      }
      else {
        iStack_9c = iVar32 + 8;
        uVar6 = uVar18;
        if (puVar3 <= (uint *)((int)puVar3 + (uVar18 - ((uint)puStack_c0 >> 3)))) {
          uVar6 = (uint)puStack_c0 >> 3;
        }
        uVar18 = uVar18 - uVar6;
        puStack_c0 = puStack_c0 + uVar6 * -8;
        puStack_bc = (uint *)((int)puVar3 + uVar18);
        uStack_c4 = *puStack_bc;
        uVar6 = 0;
        if ((undefined *)0x20 < puStack_c0) goto LAB_719ed914;
      }
    }
    else {
      uVar18 = uVar18 - ((uint)puStack_c0 >> 3);
      puStack_c0 = (undefined *)((uint)puStack_c0 & 7);
      puStack_bc = (uint *)((int)puVar3 + uVar18);
      uStack_c4 = *puStack_bc;
      iStack_9c = iVar32 + 8;
    }
    uVar6 = 0;
    puVar35 = auStack_98 + 4;
    uVar26 = uVar7 & ~((int)uVar7 >> 0x1f);
    uVar23 = uStack_c4;
    do {
      if ((int)uVar18 < 4) {
        if (uVar18 != 0) {
          uVar23 = uVar18;
          if (puVar3 <= (uint *)((int)puVar3 + (uVar18 - ((uint)puStack_c0 >> 3)))) {
            uVar23 = (uint)puStack_c0 >> 3;
          }
          puVar4 = puStack_c0 + uVar23 * -8;
          goto LAB_719edadc;
        }
        uVar18 = 0;
      }
      else {
        puVar4 = (undefined *)((uint)puStack_c0 & 7);
        uVar23 = (uint)puStack_c0 >> 3;
LAB_719edadc:
        uVar18 = uVar18 - uVar23;
        puStack_bc = (uint *)((int)puVar3 + uVar18);
        uVar23 = *puStack_bc;
        uStack_c4 = uVar23;
        puStack_c0 = puVar4;
      }
      if (uVar26 == uVar6) goto LAB_719edf7c;
      puVar27 = (ushort *)(iStack_ac + uStack_b0 * 8);
      uVar33 = (uint)(byte)puVar27[1];
      puVar14 = (ushort *)(iVar32 + 8 + uStack_a0 * 8);
      puVar21 = (ushort *)(iStack_a4 + uStack_a8 * 8);
      uVar20 = (uint)(byte)puVar14[1];
      uVar28 = (uint)(byte)puVar21[1];
      iVar25 = *(int *)(puVar21 + 2);
      uStack_f0 = *(uint *)(puVar27 + 2);
      uStack_ec = *(uint *)(puVar14 + 2);
      if (uVar28 < 2) {
        if (uVar28 == 0) {
          uVar28 = auStack_98[uStack_f0 == 0];
          auStack_98[0] = auStack_98[uStack_f0 != 0];
        }
        else {
          uVar28 = (uint)puStack_c0 & 0x1f;
          puStack_c0 = puStack_c0 + 1;
          iVar25 = (iVar25 - ((int)(uVar23 << uVar28) >> 0x1f)) + (uint)(uStack_f0 == 0);
          if (iVar25 == 3) {
            uVar28 = auStack_98[0] - 1;
            if (auStack_98[0] - 1 == 0) {
              uVar28 = auStack_98[0];
            }
          }
          else {
            uVar28 = auStack_98[iVar25];
            if (uVar28 == 0) {
              uVar28 = 1;
            }
            if (iVar25 == 1) goto LAB_719edcf4;
          }
          auStack_98[2] = auStack_98[1];
        }
      }
      else {
        uVar34 = uVar23 << ((uint)puStack_c0 & 0x1f);
        if ((bVar38 == false) || (uVar28 < 0x19)) {
          puStack_c0 = puStack_c0 + uVar28;
          uVar28 = iVar25 + (uVar34 >> (-uVar28 & 0x1f));
          if (puStack_c0 < (undefined *)0x21) {
            if ((int)uVar18 < 4) {
              if (uVar18 == 0) {
                uVar18 = 0;
                goto LAB_719edcf0;
              }
              uVar23 = uVar18;
              if (puVar3 <= (uint *)((int)puVar3 + (uVar18 - ((uint)puStack_c0 >> 3)))) {
                uVar23 = (uint)puStack_c0 >> 3;
              }
              puVar4 = puStack_c0 + uVar23 * -8;
            }
            else {
              puVar4 = (undefined *)((uint)puStack_c0 & 7);
              uVar23 = (uint)puStack_c0 >> 3;
            }
            uVar18 = uVar18 - uVar23;
            puStack_bc = (uint *)((int)puVar3 + uVar18);
            uVar23 = *puStack_bc;
            puStack_c0 = puVar4;
            uStack_c4 = uVar23;
          }
        }
        else {
          puVar4 = puStack_c0 + (uVar28 - 5);
          if (puVar4 < (undefined *)0x21) {
            if ((int)uVar18 < 4) {
              if (uVar18 == 0) {
                uVar18 = 0;
              }
              else {
                uVar23 = uVar18;
                if (puVar3 <= (uint *)((int)puVar3 + (uVar18 - ((uint)puVar4 >> 3)))) {
                  uVar23 = (uint)puVar4 >> 3;
                }
                uVar18 = uVar18 - uVar23;
                puVar4 = puVar4 + uVar23 * -8;
                puStack_bc = (uint *)((int)puVar3 + uVar18);
                uVar23 = *puStack_bc;
                uStack_c4 = uVar23;
              }
            }
            else {
              uVar18 = uVar18 - ((uint)puVar4 >> 3);
              puVar4 = (undefined *)((uint)puVar4 & 7);
              puStack_bc = (uint *)((int)puVar3 + uVar18);
              uVar23 = *puStack_bc;
              uStack_c4 = uVar23;
            }
          }
          puStack_c0 = puVar4 + 5;
          uVar28 = iVar25 + (uVar34 >> (5 - uVar28 & 0x1f)) * 0x20 +
                   ((uVar23 << ((uint)puVar4 & 0x1f)) >> 0x1b);
        }
LAB_719edcf0:
        auStack_98[2] = auStack_98[1];
      }
LAB_719edcf4:
      auStack_98[1] = auStack_98[0];
      auStack_98[0] = uVar28;
      if (uVar20 != 0) {
        uVar34 = (uint)puStack_c0 & 0x1f;
        puStack_c0 = puStack_c0 + uVar20;
        uStack_ec = uStack_ec + ((uVar23 << uVar34) >> (-uVar20 & 0x1f));
      }
      if ((0x13 < uVar20 + uVar33) && (puStack_c0 < (undefined *)0x21)) {
        if ((int)uVar18 < 4) {
          if (uVar18 == 0) {
            uVar18 = 0;
          }
          else {
            uVar23 = uVar18;
            if (puVar3 <= (uint *)((int)puVar3 + (uVar18 - ((uint)puStack_c0 >> 3)))) {
              uVar23 = (uint)puStack_c0 >> 3;
            }
            uVar18 = uVar18 - uVar23;
            puStack_c0 = puStack_c0 + uVar23 * -8;
            puStack_bc = (uint *)((int)puVar3 + uVar18);
            uVar23 = *puStack_bc;
            uStack_c4 = uVar23;
          }
        }
        else {
          uVar18 = uVar18 - ((uint)puStack_c0 >> 3);
          puStack_c0 = (undefined *)((uint)puStack_c0 & 7);
          puStack_bc = (uint *)((int)puVar3 + uVar18);
          uVar23 = *puStack_bc;
          uStack_c4 = uVar23;
        }
      }
      if (uVar33 != 0) {
        uVar20 = (uint)puStack_c0 & 0x1f;
        puStack_c0 = puStack_c0 + uVar33;
        uStack_f0 = uStack_f0 + ((uVar23 << uVar20) >> (-uVar33 & 0x1f));
      }
      if (puStack_c0 < (undefined *)0x21) {
        if ((int)uVar18 < 4) {
          if (uVar18 == 0) {
            uVar18 = 0;
          }
          else {
            uVar33 = uVar18;
            if (puVar3 <= (uint *)((int)puVar3 + (uVar18 - ((uint)puStack_c0 >> 3)))) {
              uVar33 = (uint)puStack_c0 >> 3;
            }
            uVar18 = uVar18 - uVar33;
            puStack_bc = (uint *)((int)puVar3 + uVar18);
            uVar23 = *puStack_bc;
            puStack_c0 = puStack_c0 + uVar33 * -8;
            uStack_c4 = uVar23;
          }
        }
        else {
          uVar18 = uVar18 - ((uint)puStack_c0 >> 3);
          puStack_c0 = (undefined *)((uint)puStack_c0 & 7);
          puStack_bc = (uint *)((int)puVar3 + uVar18);
          uVar23 = *puStack_bc;
          uStack_c4 = uVar23;
        }
      }
      puVar4 = puStack_c0 + *(byte *)((int)puVar27 + 3) + *(byte *)((int)puVar14 + 3);
      uStack_b0 = (*(uint *)(&DAT_7008e6ac + (uint)*(byte *)((int)puVar27 + 3) * 4) &
                  uVar23 >> (-(int)(puStack_c0 + *(byte *)((int)puVar27 + 3)) & 0x1fU)) +
                  (uint)*puVar27;
      uStack_a0 = (*(uint *)(&DAT_7008e6ac + (uint)*(byte *)((int)puVar14 + 3) * 4) &
                  uVar23 >> (-(int)puVar4 & 0x1fU)) + (uint)*puVar14;
      if (puVar4 < (undefined *)0x21) {
        if ((int)uVar18 < 4) {
          if (uVar18 == 0) {
            uVar18 = 0;
          }
          else {
            uVar23 = uVar18;
            if (puVar3 <= (uint *)((int)puVar3 + (uVar18 - ((uint)puVar4 >> 3)))) {
              uVar23 = (uint)puVar4 >> 3;
            }
            uVar18 = uVar18 - uVar23;
            puVar4 = puVar4 + uVar23 * -8;
            puStack_bc = (uint *)((int)puVar3 + uVar18);
            uVar23 = *puStack_bc;
            uStack_c4 = uVar23;
          }
        }
        else {
          uVar18 = uVar18 - ((uint)puVar4 >> 3);
          puVar4 = (undefined *)((uint)puVar4 & 7);
          puStack_bc = (uint *)((int)puVar3 + uVar18);
          uVar23 = *puStack_bc;
          uStack_c4 = uVar23;
        }
      }
      puStack_c0 = puVar4 + *(byte *)((int)puVar21 + 3);
      uStack_a8 = (*(uint *)(&DAT_7008e6ac + (uint)*(byte *)((int)puVar21 + 3) * 4) &
                  uVar23 >> (-(int)puStack_c0 & 0x1fU)) + (uint)*puVar21;
      uVar33 = uStack_f0 + iStack_e0;
      piVar11 = piVar19;
      if (uVar33 < uVar28) {
        piVar11 = piVar10;
      }
      HintPreloadData((undefined1 *)((int)piVar11 + (uVar33 - uVar28)));
      HintPreloadData((undefined1 *)((int)piVar11 + (uVar33 - uVar28) + 0x40));
      puVar35[-1] = uStack_f0;
      iStack_e0 = uVar33 + uStack_ec;
      uVar6 = uVar6 + 1;
      *puVar35 = uStack_ec;
      puVar35[1] = uVar28;
      puVar35 = puVar35 + 3;
    } while (puStack_c0 < (undefined *)0x21);
  }
  else {
    uVar6 = 0;
    iStack_9c = iVar32 + 8;
  }
LAB_719ed914:
  uVar26 = uVar6;
  if ((int)uVar6 < (int)uVar7) {
    return (uint *)0xffffffec;
  }
LAB_719edf7c:
  puVar4 = puVar8 + -0x20;
  piVar11 = param_1 + 0x1d80;
  puStack_b8 = puVar3;
  while (puStack_c0 < (undefined *)0x21) {
    if (puStack_bc < puStack_b4) {
      if (puStack_bc != puStack_b8) {
        uVar6 = (uint)puStack_c0 >> 3;
        if ((uint *)((int)puStack_bc - ((uint)puStack_c0 >> 3)) < puStack_b8) {
          uVar6 = (int)puStack_bc - (int)puStack_b8;
        }
        puVar36 = puStack_c0 + uVar6 * -8;
        uStack_c4 = *(uint *)((int)puStack_bc - uVar6);
        goto LAB_719ee120;
      }
    }
    else {
      puVar36 = (undefined *)((uint)puStack_c0 & 7);
      uVar6 = (uint)puStack_c0 >> 3;
      uStack_c4 = *(uint *)((int)puStack_bc - ((uint)puStack_c0 >> 3));
LAB_719ee120:
      puStack_bc = (uint *)((int)puStack_bc - uVar6);
      puStack_c0 = puVar36;
    }
    if ((int)uStack_c8 <= (int)uVar26) goto LAB_719ef258;
    puVar14 = (ushort *)(iStack_ac + uStack_b0 * 8);
    uVar33 = (uint)(byte)puVar14[1];
    puVar21 = (ushort *)(iStack_9c + uStack_a0 * 8);
    puVar27 = (ushort *)(iStack_a4 + uStack_a8 * 8);
    uVar23 = (uint)(byte)puVar21[1];
    uVar6 = (uint)(byte)puVar27[1];
    iVar32 = *(int *)(puVar27 + 2);
    uVar28 = *(uint *)(puVar14 + 2);
    uVar18 = *(uint *)(puVar21 + 2);
    puVar3 = auStack_98;
    if (uVar6 < 2) {
      if (uVar6 == 0) {
        uVar20 = auStack_98[uVar28 == 0];
        puVar3 = auStack_98 + (uVar28 != 0);
      }
      else {
        uVar6 = (uint)puStack_c0 & 0x1f;
        puStack_c0 = puStack_c0 + 1;
        iVar32 = (iVar32 + (uint)(uVar28 == 0)) - ((int)(uStack_c4 << uVar6) >> 0x1f);
        if (iVar32 == 3) {
          uVar20 = auStack_98[0] - 1;
          if (auStack_98[0] - 1 == 0) {
            uVar20 = auStack_98[0];
          }
        }
        else {
          uVar20 = auStack_98[iVar32];
          if (uVar20 == 0) {
            uVar20 = 1;
          }
          if (iVar32 == 1) goto LAB_719ee498;
        }
        auStack_98[2] = auStack_98[1];
      }
    }
    else {
      uVar20 = uStack_c4 << ((uint)puStack_c0 & 0x1f);
      if ((bVar38 == false) || (uVar6 < 0x19)) {
        uVar20 = iVar32 + (uVar20 >> (-uVar6 & 0x1f));
        puStack_c0 = puStack_c0 + uVar6;
        if (puStack_c0 < (undefined *)0x21) {
          if (puStack_bc < puStack_b4) {
            if (puStack_bc != puStack_b8) {
              uVar6 = (uint)puStack_c0 >> 3;
              if ((uint *)((int)puStack_bc - ((uint)puStack_c0 >> 3)) < puStack_b8) {
                uVar6 = (int)puStack_bc - (int)puStack_b8;
              }
              uStack_c4 = *(uint *)((int)puStack_bc - uVar6);
              puStack_c0 = puStack_c0 + uVar6 * -8;
              puStack_bc = (uint *)((int)puStack_bc - uVar6);
            }
          }
          else {
            uVar6 = (uint)puStack_c0 >> 3;
            uStack_c4 = *(uint *)((int)puStack_bc - ((uint)puStack_c0 >> 3));
            puStack_c0 = (undefined *)((uint)puStack_c0 & 7);
            puStack_bc = (uint *)((int)puStack_bc - uVar6);
          }
        }
      }
      else {
        puVar36 = puStack_c0 + (uVar6 - 5);
        if (puVar36 < (undefined *)0x21) {
          if (puStack_bc < puStack_b4) {
            if (puStack_bc == puStack_b8) goto LAB_719ee464;
            uVar34 = (uint)puVar36 >> 3;
            if ((uint *)((int)puStack_bc - ((uint)puVar36 >> 3)) < puStack_b8) {
              uVar34 = (int)puStack_bc - (int)puStack_b8;
            }
            puVar29 = puVar36 + uVar34 * -8;
            uStack_c4 = *(uint *)((int)puStack_bc - uVar34);
          }
          else {
            puVar29 = (undefined *)((uint)puVar36 & 7);
            uVar34 = (uint)puVar36 >> 3;
            uStack_c4 = *(uint *)((int)puStack_bc - ((uint)puVar36 >> 3));
          }
          puStack_bc = (uint *)((int)puStack_bc - uVar34);
          puVar36 = puVar29;
        }
LAB_719ee464:
        puStack_c0 = puVar36 + 5;
        uVar20 = iVar32 + (uVar20 >> (5 - uVar6 & 0x1f)) * 0x20 +
                 ((uStack_c4 << ((uint)puVar36 & 0x1f)) >> 0x1b);
      }
      auStack_98[2] = auStack_98[1];
    }
LAB_719ee498:
    auStack_98[0] = uVar20;
    auStack_98[1] = *puVar3;
    if (uVar23 != 0) {
      uVar6 = (uint)puStack_c0 & 0x1f;
      puStack_c0 = puStack_c0 + uVar23;
      uVar18 = uVar18 + ((uStack_c4 << uVar6) >> (-uVar23 & 0x1f));
    }
    if ((0x13 < uVar23 + uVar33) && (puStack_c0 < (undefined *)0x21)) {
      if (puStack_bc < puStack_b4) {
        if (puStack_bc == puStack_b8) goto LAB_719ee540;
        uVar6 = (uint)puStack_c0 >> 3;
        if ((uint *)((int)puStack_bc - ((uint)puStack_c0 >> 3)) < puStack_b8) {
          uVar6 = (int)puStack_bc - (int)puStack_b8;
        }
        puVar36 = puStack_c0 + uVar6 * -8;
        uStack_c4 = *(uint *)((int)puStack_bc - uVar6);
      }
      else {
        puVar36 = (undefined *)((uint)puStack_c0 & 7);
        uVar6 = (uint)puStack_c0 >> 3;
        uStack_c4 = *(uint *)((int)puStack_bc - ((uint)puStack_c0 >> 3));
      }
      puStack_bc = (uint *)((int)puStack_bc - uVar6);
      puStack_c0 = puVar36;
    }
LAB_719ee540:
    if (uVar33 != 0) {
      uVar6 = (uint)puStack_c0 & 0x1f;
      puStack_c0 = puStack_c0 + uVar33;
      uVar28 = uVar28 + ((uStack_c4 << uVar6) >> (-uVar33 & 0x1f));
    }
    if (puStack_c0 < (undefined *)0x21) {
      if (puStack_bc < puStack_b4) {
        if (puStack_bc == puStack_b8) goto LAB_719ee5e4;
        uVar6 = (uint)puStack_c0 >> 3;
        if ((uint *)((int)puStack_bc - ((uint)puStack_c0 >> 3)) < puStack_b8) {
          uVar6 = (int)puStack_bc - (int)puStack_b8;
        }
        puVar36 = puStack_c0 + uVar6 * -8;
        uStack_c4 = *(uint *)((int)puStack_bc - uVar6);
      }
      else {
        puVar36 = (undefined *)((uint)puStack_c0 & 7);
        uVar6 = (uint)puStack_c0 >> 3;
        uStack_c4 = *(uint *)((int)puStack_bc - ((uint)puStack_c0 >> 3));
      }
      puStack_bc = (uint *)((int)puStack_bc - uVar6);
      puStack_c0 = puVar36;
    }
LAB_719ee5e4:
    puVar3 = (uint *)&DAT_7008e6ac;
    uStack_b0 = (*(uint *)(&DAT_7008e6ac + (uint)*(byte *)((int)puVar14 + 3) * 4) &
                uStack_c4 >> (-(int)(puStack_c0 + *(byte *)((int)puVar14 + 3)) & 0x1fU)) +
                (uint)*puVar14;
    puVar35 = (uint *)(puStack_c0 + *(byte *)((int)puVar14 + 3) + *(byte *)((int)puVar21 + 3));
    uStack_a0 = (*(uint *)(&DAT_7008e6ac + (uint)*(byte *)((int)puVar21 + 3) * 4) &
                uStack_c4 >> (-(int)puVar35 & 0x1fU)) + (uint)*puVar21;
    if (puVar35 < (uint *)0x21) {
      if (puStack_bc < puStack_b4) {
        if (puStack_bc == puStack_b8) goto LAB_719ee698;
        puVar3 = (uint *)((uint)puVar35 >> 3);
        if ((uint *)((int)puStack_bc - ((uint)puVar35 >> 3)) < puStack_b8) {
          puVar3 = (uint *)((int)puStack_bc - (int)puStack_b8);
        }
        puVar24 = puVar35 + (int)puVar3 * -2;
        uStack_c4 = *(uint *)((int)puStack_bc - (int)puVar3);
        puVar5 = puVar3;
      }
      else {
        puVar24 = (uint *)((uint)puVar35 & 7);
        puVar5 = (uint *)((uint)puVar35 >> 3);
        uStack_c4 = *(uint *)((int)puStack_bc - ((uint)puVar35 >> 3));
      }
      puStack_bc = (uint *)((int)puStack_bc - (int)puVar5);
      puVar35 = puVar24;
    }
LAB_719ee698:
    puStack_c0 = (undefined *)((int)puVar35 + (uint)*(byte *)((int)puVar27 + 3));
    uStack_a8 = (*(uint *)(&DAT_7008e6ac + (uint)*(byte *)((int)puVar27 + 3) * 4) &
                uStack_c4 >> (-(int)puStack_c0 & 0x1fU)) + (uint)*puVar27;
    uVar6 = uVar26 & 7;
    if (param_1[0x1d7f] == 2) {
      piVar15 = (int *)param_1[0x1d7e];
      puVar3 = auStack_98 + uVar6 * 3 + 3;
      uVar23 = auStack_98[uVar6 * 3 + 3];
      piVar22 = (int *)((int)apiStack_2c[0] + uVar23);
      if (piVar22 <= piVar15) {
        uVar34 = auStack_98[uVar6 * 3 + 4];
        bVar39 = piStack_fc <= piVar22;
        bVar37 = piVar22 == piStack_fc;
        uVar33 = auStack_98[uVar6 * 3 + 5];
        puVar3 = puVar35;
        if (!bVar39 || bVar37) {
          puVar3 = (uint *)(uVar34 + uVar23);
          bVar39 = piVar22 + -8 <= (int *)((int)piVar31 + (int)puVar3);
          bVar37 = (int *)((int)piVar31 + (int)puVar3) == piVar22 + -8;
        }
        if ((bVar39 && !bVar37) || (puVar8 + -(int)piVar31 < puVar3 + 8)) {
          puVar3 = (uint *)FUN_719f3cb4(piVar31,puVar8,piVar22 + -8,uVar23,uVar34,uVar33,apiStack_2c
                                        ,piStack_fc,piVar19,iVar9,piVar10);
        }
        else {
          piVar15 = (int *)((int)piVar31 + uVar23);
          iVar32 = *apiStack_2c[0];
          iVar30 = apiStack_2c[0][1];
          iVar25 = apiStack_2c[0][2];
          piVar31[3] = apiStack_2c[0][3];
          piVar31[2] = iVar25;
          piVar31[1] = iVar30;
          *piVar31 = iVar32;
          if (0x10 < uVar23) {
            iVar30 = apiStack_2c[0][5];
            iVar25 = apiStack_2c[0][6];
            iVar32 = apiStack_2c[0][7];
            piVar31[4] = apiStack_2c[0][4];
            piVar31[7] = iVar32;
            piVar31[6] = iVar25;
            piVar31[5] = iVar30;
            if (0x10 < (int)(uVar23 - 0x10)) {
              piVar12 = piVar31 + 8;
              do {
                iVar32 = apiStack_2c[0][8];
                iVar30 = apiStack_2c[0][9];
                iVar25 = apiStack_2c[0][10];
                piVar12[3] = apiStack_2c[0][0xb];
                piVar12[2] = iVar25;
                piVar12[1] = iVar30;
                *piVar12 = iVar32;
                iVar32 = apiStack_2c[0][0xc];
                iVar30 = apiStack_2c[0][0xd];
                iVar25 = apiStack_2c[0][0xe];
                piVar12[7] = apiStack_2c[0][0xf];
                piVar12[6] = iVar25;
                piVar12[5] = iVar30;
                piVar12[4] = iVar32;
                piVar12 = piVar12 + 8;
                apiStack_2c[0] = apiStack_2c[0] + 8;
              } while (piVar12 < piVar15);
            }
          }
          piVar12 = (int *)((int)piVar15 - uVar33);
          apiStack_2c[0] = piVar22;
          if ((uint)((int)piVar15 - (int)piVar19) < uVar33) {
            if ((uint)((int)piVar15 - iVar9) < uVar33) {
              return (uint *)0xffffffec;
            }
            iVar32 = (int)piVar12 - (int)piVar19;
            puVar13 = (undefined1 *)((int)piVar10 + iVar32);
            if (puVar13 + uVar34 <= piVar10) {
              imp___aeabi_memmove(piVar15,puVar13,uVar34);
              goto LAB_719ee054;
            }
            imp___aeabi_memmove(piVar15,puVar13,-iVar32);
            uVar34 = iVar32 + uVar34;
            piVar15 = (int *)((int)piVar15 - iVar32);
            piVar12 = piVar19;
          }
          if (uVar33 < 0x10) {
            if (uVar33 < 8) {
              *(char *)piVar15 = (char)*piVar12;
              *(undefined1 *)((int)piVar15 + 1) = *(undefined1 *)((int)piVar12 + 1);
              *(undefined1 *)((int)piVar15 + 2) = *(undefined1 *)((int)piVar12 + 2);
              *(undefined1 *)((int)piVar15 + 3) = *(undefined1 *)((int)piVar12 + 3);
              iVar32 = *(int *)(&DAT_70060bb8 + uVar33 * 4);
              piVar15[1] = *(int *)((int)piVar12 + iVar32);
              piVar12 = (int *)(((int)piVar12 + iVar32) - *(int *)(&DAT_70060958 + uVar33 * 4));
            }
            else {
              iVar32 = *piVar12;
              piVar15[1] = piVar12[1];
              *piVar15 = iVar32;
            }
            if (8 < uVar34) {
              piVar22 = piVar15 + 2;
              piVar16 = piVar12 + 2;
              if ((int)piVar22 - (int)piVar16 < 0x10) {
                do {
                  iVar32 = *piVar16;
                  piVar12 = piVar16 + 1;
                  piVar16 = piVar16 + 2;
                  piVar22[1] = *piVar12;
                  *piVar22 = iVar32;
                  piVar22 = piVar22 + 2;
                } while (piVar22 < (int *)((int)piVar15 + uVar34));
              }
              else {
                iVar30 = *piVar16;
                iVar25 = piVar12[3];
                iVar32 = piVar12[4];
                piVar15[5] = piVar12[5];
                piVar15[4] = iVar32;
                piVar15[3] = iVar25;
                *piVar22 = iVar30;
                if (0x18 < (int)uVar34) {
                  piVar12 = piVar12 + 6;
                  piVar22 = piVar15 + 6;
                  do {
                    iVar32 = *piVar12;
                    iVar30 = piVar12[1];
                    iVar25 = piVar12[2];
                    piVar22[3] = piVar12[3];
                    piVar22[2] = iVar25;
                    piVar22[1] = iVar30;
                    *piVar22 = iVar32;
                    iVar32 = piVar12[4];
                    iVar30 = piVar12[5];
                    iVar25 = piVar12[6];
                    piVar16 = piVar12 + 7;
                    piVar12 = piVar12 + 8;
                    piVar22[7] = *piVar16;
                    piVar22[6] = iVar25;
                    piVar22[5] = iVar30;
                    piVar22[4] = iVar32;
                    piVar22 = piVar22 + 8;
                  } while (piVar22 < (int *)((int)piVar15 + uVar34));
                }
              }
            }
          }
          else {
            iVar32 = *piVar12;
            iVar25 = piVar12[1];
            iVar30 = piVar12[2];
            piVar15[3] = piVar12[3];
            piVar15[2] = iVar30;
            piVar15[1] = iVar25;
            *piVar15 = iVar32;
            if (0x10 < (int)uVar34) {
              piVar12 = piVar12 + 4;
              piVar22 = piVar15 + 4;
              do {
                iVar30 = *piVar12;
                iVar25 = piVar12[1];
                iVar32 = piVar12[2];
                piVar22[3] = piVar12[3];
                piVar22[2] = iVar32;
                piVar22[1] = iVar25;
                *piVar22 = iVar30;
                iVar30 = piVar12[4];
                iVar25 = piVar12[5];
                iVar32 = piVar12[6];
                piVar16 = piVar12 + 7;
                piVar12 = piVar12 + 8;
                piVar22[7] = *piVar16;
                piVar22[6] = iVar32;
                piVar22[5] = iVar25;
                piVar22[4] = iVar30;
                piVar22 = piVar22 + 8;
              } while (piVar22 < (int *)((int)piVar15 + uVar34));
            }
          }
        }
        goto LAB_719ee054;
      }
      if (piVar15 != apiStack_2c[0]) {
        uVar23 = (int)piVar15 - (int)apiStack_2c[0];
        if ((uint)((int)puVar8 - (int)piVar31) < uVar23) goto LAB_719eff80;
        piVar15 = (int *)((int)piVar31 + uVar23);
        if (((int)piVar31 - (int)apiStack_2c[0] < -7) && (7 < (int)uVar23)) {
          piVar22 = piVar31;
          if (((uint)((int)piVar31 - (int)apiStack_2c[0]) < 0xfffffff0) &&
             (piVar12 = piVar15 + -8, piVar31 <= piVar12)) {
            iVar25 = apiStack_2c[0][1];
            iVar32 = apiStack_2c[0][2];
            iVar30 = apiStack_2c[0][3];
            *piVar31 = *apiStack_2c[0];
            piVar31[3] = iVar30;
            piVar31[2] = iVar32;
            piVar31[1] = iVar25;
            if (0x10 < (int)piVar12 - (int)piVar31) {
              piVar22 = apiStack_2c[0] + 4;
              piVar16 = piVar31 + 4;
              do {
                iVar30 = *piVar22;
                iVar32 = piVar22[1];
                iVar25 = piVar22[2];
                piVar16[3] = piVar22[3];
                piVar16[2] = iVar25;
                piVar16[1] = iVar32;
                *piVar16 = iVar30;
                iVar30 = piVar22[4];
                iVar32 = piVar22[5];
                iVar25 = piVar22[6];
                piVar1 = piVar22 + 7;
                piVar22 = piVar22 + 8;
                piVar16[7] = *piVar1;
                piVar16[6] = iVar25;
                piVar16[5] = iVar32;
                piVar16[4] = iVar30;
                piVar16 = piVar16 + 8;
              } while (piVar16 < piVar12);
            }
            apiStack_2c[0] = (int *)((int)apiStack_2c[0] + ((int)piVar12 - (int)piVar31));
            piVar22 = piVar12;
          }
          puVar36 = (undefined *)((int)piVar31 + (uVar23 - (int)piVar22));
          do {
            puVar36 = puVar36 + -1;
            *(char *)piVar22 = (char)*apiStack_2c[0];
            apiStack_2c[0] = (int *)((int)apiStack_2c[0] + 1);
            piVar22 = (int *)((int)piVar22 + 1);
          } while (puVar36 != (undefined *)0x0);
        }
        else if (0 < (int)uVar23) {
          do {
            piVar22 = (int *)((int)piVar31 + 1);
            *(char *)piVar31 = (char)*apiStack_2c[0];
            apiStack_2c[0] = (int *)((int)apiStack_2c[0] + 1);
            piVar31 = piVar22;
          } while (piVar22 < piVar15);
        }
        uVar23 = *puVar3 - uVar23;
        *puVar3 = uVar23;
        piVar31 = piVar15;
      }
      uVar33 = auStack_98[uVar6 * 3 + 4];
      uVar34 = auStack_98[uVar6 * 3 + 5];
      param_1[0x1d7f] = 0;
      if ((((int)uVar23 < 0x10001) &&
          (puVar35 = (uint *)(uVar33 + uVar23), (undefined *)((int)piVar31 + (int)puVar35) <= puVar4
          )) && (puVar35 + 8 <= puVar8 + -(int)piVar31)) {
        piVar15 = (int *)((int)piVar31 + uVar23);
        iVar32 = *piVar11;
        iVar25 = param_1[0x1d81];
        iVar30 = param_1[0x1d82];
        piVar31[3] = param_1[0x1d83];
        piVar31[2] = iVar30;
        piVar31[1] = iVar25;
        *piVar31 = iVar32;
        if (0x10 < uVar23) {
          iVar32 = param_1[0x1d85];
          iVar30 = param_1[0x1d86];
          iVar25 = param_1[0x1d87];
          piVar31[4] = param_1[0x1d84];
          piVar31[7] = iVar25;
          piVar31[6] = iVar30;
          piVar31[5] = iVar32;
          if (0x10 < (int)(uVar23 - 0x10)) {
            piVar12 = piVar31 + 8;
            piVar22 = param_1 + 0x1d8c;
            do {
              iVar25 = piVar22[-4];
              iVar30 = piVar22[-3];
              iVar32 = piVar22[-1];
              piVar12[2] = piVar22[-2];
              piVar12[3] = iVar32;
              piVar12[1] = iVar30;
              *piVar12 = iVar25;
              iVar25 = *piVar22;
              piVar16 = piVar22 + 2;
              iVar30 = piVar22[1];
              iVar32 = piVar22[3];
              piVar22 = piVar22 + 8;
              piVar12[6] = *piVar16;
              piVar12[7] = iVar32;
              piVar12[5] = iVar30;
              piVar12[4] = iVar25;
              piVar12 = piVar12 + 8;
            } while (piVar12 < piVar15);
          }
        }
        apiStack_2c[0] = (int *)((int)piVar11 + uVar23);
        piVar22 = (int *)((int)piVar15 - uVar34);
        if ((uint)((int)piVar15 - (int)piVar19) < uVar34) {
          if ((uint)((int)piVar15 - iVar9) < uVar34) {
            return (uint *)0xffffffec;
          }
          iVar32 = (int)((int)piVar15 - uVar34) - (int)piVar19;
          puVar13 = (undefined1 *)((int)piVar10 + iVar32);
          if (puVar13 + uVar33 <= piVar10) {
            imp___aeabi_memmove(piVar15,puVar13,uVar33);
            goto LAB_719eebdc;
          }
          imp___aeabi_memmove(piVar15,puVar13,-iVar32);
          uVar33 = iVar32 + uVar33;
          piVar15 = (int *)((int)piVar15 - iVar32);
          piVar22 = piVar19;
        }
        if (uVar34 < 0x10) {
          if (uVar34 < 8) {
            *(char *)piVar15 = (char)*piVar22;
            *(undefined1 *)((int)piVar15 + 1) = *(undefined1 *)((int)piVar22 + 1);
            *(undefined1 *)((int)piVar15 + 2) = *(undefined1 *)((int)piVar22 + 2);
            *(undefined1 *)((int)piVar15 + 3) = *(undefined1 *)((int)piVar22 + 3);
            iVar32 = *(int *)(&DAT_70060bb8 + uVar34 * 4);
            piVar15[1] = *(int *)((int)piVar22 + iVar32);
            piVar22 = (int *)(((int)piVar22 + iVar32) - *(int *)(&DAT_70060958 + uVar34 * 4));
          }
          else {
            iVar32 = *piVar22;
            piVar15[1] = piVar22[1];
            *piVar15 = iVar32;
          }
          if (8 < uVar33) {
            piVar12 = piVar15 + 2;
            piVar16 = piVar22 + 2;
            if ((int)piVar12 - (int)piVar16 < 0x10) {
              do {
                iVar32 = *piVar16;
                piVar22 = piVar16 + 1;
                piVar16 = piVar16 + 2;
                piVar12[1] = *piVar22;
                *piVar12 = iVar32;
                piVar12 = piVar12 + 2;
              } while (piVar12 < (int *)((int)piVar15 + uVar33));
            }
            else {
              iVar30 = *piVar16;
              iVar32 = piVar22[3];
              iVar25 = piVar22[4];
              piVar15[5] = piVar22[5];
              piVar15[4] = iVar25;
              piVar15[3] = iVar32;
              *piVar12 = iVar30;
              if (0x18 < (int)uVar33) {
                piVar22 = piVar22 + 6;
                piVar12 = piVar15 + 6;
                do {
                  iVar32 = *piVar22;
                  iVar30 = piVar22[1];
                  iVar25 = piVar22[2];
                  piVar12[3] = piVar22[3];
                  piVar12[2] = iVar25;
                  piVar12[1] = iVar30;
                  *piVar12 = iVar32;
                  iVar32 = piVar22[4];
                  iVar30 = piVar22[5];
                  iVar25 = piVar22[6];
                  piVar16 = piVar22 + 7;
                  piVar22 = piVar22 + 8;
                  piVar12[7] = *piVar16;
                  piVar12[6] = iVar25;
                  piVar12[5] = iVar30;
                  piVar12[4] = iVar32;
                  piVar12 = piVar12 + 8;
                } while (piVar12 < (int *)((int)piVar15 + uVar33));
              }
            }
          }
        }
        else {
          iVar32 = *piVar22;
          iVar25 = piVar22[1];
          iVar30 = piVar22[2];
          piVar15[3] = piVar22[3];
          piVar15[2] = iVar30;
          piVar15[1] = iVar25;
          *piVar15 = iVar32;
          if (0x10 < (int)uVar33) {
            piVar22 = piVar22 + 4;
            piVar12 = piVar15 + 4;
            do {
              iVar30 = *piVar22;
              iVar25 = piVar22[1];
              iVar32 = piVar22[2];
              piVar12[3] = piVar22[3];
              piVar12[2] = iVar32;
              piVar12[1] = iVar25;
              *piVar12 = iVar30;
              iVar30 = piVar22[4];
              iVar25 = piVar22[5];
              iVar32 = piVar22[6];
              piVar16 = piVar22 + 7;
              piVar22 = piVar22 + 8;
              piVar12[7] = *piVar16;
              piVar12[6] = iVar32;
              piVar12[5] = iVar25;
              piVar12[4] = iVar30;
              piVar12 = piVar12 + 8;
            } while (piVar12 < (int *)((int)piVar15 + uVar33));
          }
        }
      }
      else {
        apiStack_2c[0] = piVar11;
        puVar35 = (uint *)FUN_719f3730(piVar31,puVar8,uVar23,uVar33,uVar34,apiStack_2c,
                                       param_1 + 0x5d80,piVar19,iVar9,piVar10);
      }
LAB_719eebdc:
      if ((uint *)0xffffff88 < puVar35) {
        return puVar35;
      }
      piVar31 = (int *)((int)piVar31 + (int)puVar35);
      uVar23 = uVar28 + iStack_e0;
      piVar15 = piVar19;
      if (uVar23 < uVar20) {
        piVar15 = piVar10;
      }
      HintPreloadData((undefined1 *)((int)piVar15 + (uVar23 - uVar20)));
      HintPreloadData((undefined1 *)((int)piVar15 + (uVar23 - uVar20) + 0x40));
      *puVar3 = uVar28;
      auStack_98[uVar6 * 3 + 4] = uVar18;
      auStack_98[uVar6 * 3 + 5] = uVar20;
      piStack_fc = param_1 + 0x5d80;
    }
    else {
      uVar23 = auStack_98[uVar6 * 3 + 3];
      uVar34 = auStack_98[uVar6 * 3 + 4];
      uVar33 = auStack_98[uVar6 * 3 + 5];
      piVar15 = (int *)((int)apiStack_2c[0] + uVar23);
      bVar39 = piStack_fc <= piVar15;
      bVar37 = piVar15 == piStack_fc;
      if (!bVar39 || bVar37) {
        puVar3 = (uint *)(uVar34 + uVar23);
        bVar39 = puVar4 <= (undefined *)((int)piVar31 + (int)puVar3);
        bVar37 = (undefined *)((int)piVar31 + (int)puVar3) == puVar4;
      }
      if ((bVar39 && !bVar37) || (puVar8 + -(int)piVar31 < puVar3 + 8)) {
        puVar3 = (uint *)FUN_719f3730(piVar31,puVar8,uVar23,uVar34,uVar33,apiStack_2c,piStack_fc,
                                      piVar19,iVar9,piVar10);
      }
      else {
        piVar22 = (int *)((int)piVar31 + uVar23);
        iVar30 = *apiStack_2c[0];
        iVar25 = apiStack_2c[0][1];
        iVar32 = apiStack_2c[0][2];
        piVar31[3] = apiStack_2c[0][3];
        piVar31[2] = iVar32;
        piVar31[1] = iVar25;
        *piVar31 = iVar30;
        if (0x10 < uVar23) {
          iVar32 = apiStack_2c[0][4];
          iVar30 = apiStack_2c[0][5];
          iVar25 = apiStack_2c[0][6];
          piVar31[7] = apiStack_2c[0][7];
          piVar31[6] = iVar25;
          piVar31[5] = iVar30;
          piVar31[4] = iVar32;
          if (0x10 < (int)(uVar23 - 0x10)) {
            piVar12 = piVar31 + 8;
            do {
              iVar32 = apiStack_2c[0][8];
              iVar30 = apiStack_2c[0][9];
              iVar25 = apiStack_2c[0][10];
              piVar12[3] = apiStack_2c[0][0xb];
              piVar12[2] = iVar25;
              piVar12[1] = iVar30;
              *piVar12 = iVar32;
              iVar32 = apiStack_2c[0][0xc];
              iVar30 = apiStack_2c[0][0xd];
              iVar25 = apiStack_2c[0][0xe];
              piVar12[7] = apiStack_2c[0][0xf];
              piVar12[6] = iVar25;
              piVar12[5] = iVar30;
              piVar12[4] = iVar32;
              piVar12 = piVar12 + 8;
              apiStack_2c[0] = apiStack_2c[0] + 8;
            } while (piVar12 < piVar22);
          }
        }
        apiStack_2c[0] = piVar15;
        piVar15 = (int *)((int)piVar22 - uVar33);
        if ((uint)((int)piVar22 - (int)piVar19) < uVar33) {
          if ((uint)((int)piVar22 - iVar9) < uVar33) {
            return (uint *)0xffffffec;
          }
          iVar32 = (int)((int)piVar22 - uVar33) - (int)piVar19;
          puVar13 = (undefined1 *)((int)piVar10 + iVar32);
          if (puVar13 + uVar34 <= piVar10) {
            imp___aeabi_memmove(piVar22,puVar13,uVar34);
            goto LAB_719ee054;
          }
          imp___aeabi_memmove(piVar22,puVar13,-iVar32);
          piVar22 = (int *)((int)piVar22 - iVar32);
          uVar34 = iVar32 + uVar34;
          piVar15 = piVar19;
        }
        if (uVar33 < 0x10) {
          if (uVar33 < 8) {
            *(char *)piVar22 = (char)*piVar15;
            *(undefined1 *)((int)piVar22 + 1) = *(undefined1 *)((int)piVar15 + 1);
            *(undefined1 *)((int)piVar22 + 2) = *(undefined1 *)((int)piVar15 + 2);
            *(undefined1 *)((int)piVar22 + 3) = *(undefined1 *)((int)piVar15 + 3);
            iVar32 = *(int *)(&DAT_70060bb8 + uVar33 * 4);
            piVar22[1] = *(int *)((int)piVar15 + iVar32);
            piVar15 = (int *)(((int)piVar15 + iVar32) - *(int *)(&DAT_70060958 + uVar33 * 4));
          }
          else {
            iVar32 = *piVar15;
            piVar22[1] = piVar15[1];
            *piVar22 = iVar32;
          }
          if (8 < uVar34) {
            piVar12 = piVar22 + 2;
            piVar16 = piVar15 + 2;
            if ((int)piVar12 - (int)piVar16 < 0x10) {
              do {
                iVar32 = *piVar16;
                piVar15 = piVar16 + 1;
                piVar16 = piVar16 + 2;
                piVar12[1] = *piVar15;
                *piVar12 = iVar32;
                piVar12 = piVar12 + 2;
              } while (piVar12 < (int *)((int)piVar22 + uVar34));
            }
            else {
              iVar30 = *piVar16;
              iVar25 = piVar15[3];
              iVar32 = piVar15[4];
              piVar22[5] = piVar15[5];
              piVar22[4] = iVar32;
              piVar22[3] = iVar25;
              *piVar12 = iVar30;
              if (0x18 < (int)uVar34) {
                piVar15 = piVar15 + 6;
                piVar12 = piVar22 + 6;
                do {
                  iVar32 = *piVar15;
                  iVar30 = piVar15[1];
                  iVar25 = piVar15[2];
                  piVar12[3] = piVar15[3];
                  piVar12[2] = iVar25;
                  piVar12[1] = iVar30;
                  *piVar12 = iVar32;
                  iVar32 = piVar15[4];
                  iVar30 = piVar15[5];
                  iVar25 = piVar15[6];
                  piVar16 = piVar15 + 7;
                  piVar15 = piVar15 + 8;
                  piVar12[7] = *piVar16;
                  piVar12[6] = iVar25;
                  piVar12[5] = iVar30;
                  piVar12[4] = iVar32;
                  piVar12 = piVar12 + 8;
                } while (piVar12 < (int *)((int)piVar22 + uVar34));
              }
            }
          }
        }
        else {
          iVar32 = *piVar15;
          iVar25 = piVar15[1];
          iVar30 = piVar15[2];
          piVar22[3] = piVar15[3];
          piVar22[2] = iVar30;
          piVar22[1] = iVar25;
          *piVar22 = iVar32;
          if (0x10 < (int)uVar34) {
            piVar15 = piVar15 + 4;
            piVar12 = piVar22 + 4;
            do {
              iVar30 = *piVar15;
              iVar25 = piVar15[1];
              iVar32 = piVar15[2];
              piVar12[3] = piVar15[3];
              piVar12[2] = iVar32;
              piVar12[1] = iVar25;
              *piVar12 = iVar30;
              iVar30 = piVar15[4];
              iVar25 = piVar15[5];
              iVar32 = piVar15[6];
              piVar16 = piVar15 + 7;
              piVar15 = piVar15 + 8;
              piVar12[7] = *piVar16;
              piVar12[6] = iVar32;
              piVar12[5] = iVar25;
              piVar12[4] = iVar30;
              piVar12 = piVar12 + 8;
            } while (piVar12 < (int *)((int)piVar22 + uVar34));
          }
        }
      }
LAB_719ee054:
      if ((uint *)0xffffff88 < puVar3) {
        return puVar3;
      }
      piVar31 = (int *)((int)piVar31 + (int)puVar3);
      uVar23 = uVar28 + iStack_e0;
      piVar15 = piVar19;
      if (uVar23 < uVar20) {
        piVar15 = piVar10;
      }
      HintPreloadData((undefined1 *)((int)piVar15 + (uVar23 - uVar20)));
      HintPreloadData((undefined1 *)((int)piVar15 + (uVar23 - uVar20) + 0x40));
      auStack_98[uVar6 * 3 + 3] = uVar28;
      auStack_98[uVar6 * 3 + 4] = uVar18;
      auStack_98[uVar6 * 3 + 5] = uVar20;
    }
    iStack_e0 = uVar28 + iStack_e0 + uVar18;
    uVar26 = uVar26 + 1;
  }
  if ((int)uVar26 < (int)uStack_c8) {
    return (uint *)0xffffffec;
  }
LAB_719ef258:
  uVar26 = uVar26 - uVar7;
  if ((int)uVar26 < (int)uStack_c8) {
    do {
      uVar6 = uVar26 & 7;
      puVar3 = auStack_98 + uVar6 * 3 + 3;
      if (param_1[0x1d7f] == 2) {
        uVar7 = *puVar3;
        piVar15 = (int *)param_1[0x1d7e];
        piVar22 = (int *)((int)apiStack_2c[0] + uVar7);
        if (piVar22 <= piVar15) {
          uVar18 = auStack_98[uVar6 * 3 + 4];
          bVar37 = piStack_fc <= piVar22;
          bVar38 = piVar22 == piStack_fc;
          uVar6 = auStack_98[uVar6 * 3 + 5];
          if (!bVar37 || bVar38) {
            puVar3 = (uint *)(uVar18 + uVar7);
            bVar37 = piVar22 + -8 <= (int *)((int)piVar31 + (int)puVar3);
            bVar38 = (int *)((int)piVar31 + (int)puVar3) == piVar22 + -8;
          }
          if ((bVar37 && !bVar38) || (puVar8 + -(int)piVar31 < puVar3 + 8)) {
            puVar3 = (uint *)FUN_719f3cb4(piVar31,puVar8,piVar22 + -8,uVar7,uVar18,uVar6,apiStack_2c
                                          ,piStack_fc,piVar19,iVar9,piVar10);
          }
          else {
            piVar15 = (int *)((int)piVar31 + uVar7);
            iVar32 = *apiStack_2c[0];
            iVar30 = apiStack_2c[0][1];
            iVar25 = apiStack_2c[0][2];
            piVar31[3] = apiStack_2c[0][3];
            piVar31[2] = iVar25;
            piVar31[1] = iVar30;
            *piVar31 = iVar32;
            if (0x10 < uVar7) {
              iVar30 = apiStack_2c[0][5];
              iVar25 = apiStack_2c[0][6];
              iVar32 = apiStack_2c[0][7];
              piVar31[4] = apiStack_2c[0][4];
              piVar31[7] = iVar32;
              piVar31[6] = iVar25;
              piVar31[5] = iVar30;
              if (0x10 < (int)(uVar7 - 0x10)) {
                piVar16 = piVar31 + 8;
                piVar12 = apiStack_2c[0];
                do {
                  iVar32 = piVar12[8];
                  iVar30 = piVar12[9];
                  iVar25 = piVar12[10];
                  piVar16[3] = piVar12[0xb];
                  piVar16[2] = iVar25;
                  piVar16[1] = iVar30;
                  *piVar16 = iVar32;
                  iVar32 = piVar12[0xc];
                  iVar30 = piVar12[0xd];
                  iVar25 = piVar12[0xe];
                  piVar16[7] = piVar12[0xf];
                  piVar16[6] = iVar25;
                  piVar16[5] = iVar30;
                  piVar16[4] = iVar32;
                  piVar16 = piVar16 + 8;
                  piVar12 = piVar12 + 8;
                } while (piVar16 < piVar15);
              }
            }
            apiStack_2c[0] = piVar22;
            piVar22 = (int *)((int)piVar15 - uVar6);
            if ((uint)((int)piVar15 - (int)piVar19) < uVar6) {
              if ((uint)((int)piVar15 - iVar9) < uVar6) {
                return (uint *)0xffffffec;
              }
              iVar32 = (int)((int)piVar15 - uVar6) - (int)piVar19;
              puVar13 = (undefined1 *)((int)piVar10 + iVar32);
              if (puVar13 + uVar18 <= piVar10) {
                imp___aeabi_memmove(piVar15,puVar13,uVar18);
                goto LAB_719ef31c;
              }
              imp___aeabi_memmove(piVar15,puVar13,-iVar32);
              uVar18 = iVar32 + uVar18;
              piVar15 = (int *)((int)piVar15 - iVar32);
              piVar22 = piVar19;
            }
            if (uVar6 < 0x10) {
              if (uVar6 < 8) {
                *(char *)piVar15 = (char)*piVar22;
                *(undefined1 *)((int)piVar15 + 1) = *(undefined1 *)((int)piVar22 + 1);
                *(undefined1 *)((int)piVar15 + 2) = *(undefined1 *)((int)piVar22 + 2);
                *(undefined1 *)((int)piVar15 + 3) = *(undefined1 *)((int)piVar22 + 3);
                iVar32 = *(int *)(&DAT_70060bb8 + uVar6 * 4);
                piVar15[1] = *(int *)((int)piVar22 + iVar32);
                piVar22 = (int *)(((int)piVar22 + iVar32) - *(int *)(&DAT_70060958 + uVar6 * 4));
              }
              else {
                iVar32 = *piVar22;
                piVar15[1] = piVar22[1];
                *piVar15 = iVar32;
              }
              if (8 < uVar18) {
                piVar12 = piVar15 + 2;
                piVar16 = piVar22 + 2;
                if ((int)piVar12 - (int)piVar16 < 0x10) {
                  do {
                    iVar32 = *piVar16;
                    piVar22 = piVar16 + 1;
                    piVar16 = piVar16 + 2;
                    piVar12[1] = *piVar22;
                    *piVar12 = iVar32;
                    piVar12 = piVar12 + 2;
                  } while (piVar12 < (int *)((int)piVar15 + uVar18));
                }
                else {
                  iVar30 = *piVar16;
                  iVar25 = piVar22[3];
                  iVar32 = piVar22[4];
                  piVar15[5] = piVar22[5];
                  piVar15[4] = iVar32;
                  piVar15[3] = iVar25;
                  *piVar12 = iVar30;
                  if (0x18 < (int)uVar18) {
                    piVar22 = piVar22 + 6;
                    piVar12 = piVar15 + 6;
                    do {
                      iVar32 = *piVar22;
                      iVar30 = piVar22[1];
                      iVar25 = piVar22[2];
                      piVar12[3] = piVar22[3];
                      piVar12[2] = iVar25;
                      piVar12[1] = iVar30;
                      *piVar12 = iVar32;
                      iVar32 = piVar22[4];
                      iVar30 = piVar22[5];
                      iVar25 = piVar22[6];
                      piVar16 = piVar22 + 7;
                      piVar22 = piVar22 + 8;
                      piVar12[7] = *piVar16;
                      piVar12[6] = iVar25;
                      piVar12[5] = iVar30;
                      piVar12[4] = iVar32;
                      piVar12 = piVar12 + 8;
                    } while (piVar12 < (int *)((int)piVar15 + uVar18));
                  }
                }
              }
            }
            else {
              iVar32 = *piVar22;
              iVar25 = piVar22[1];
              iVar30 = piVar22[2];
              piVar15[3] = piVar22[3];
              piVar15[2] = iVar30;
              piVar15[1] = iVar25;
              *piVar15 = iVar32;
              if (0x10 < (int)uVar18) {
                piVar22 = piVar22 + 4;
                piVar12 = piVar15 + 4;
                do {
                  iVar30 = *piVar22;
                  iVar25 = piVar22[1];
                  iVar32 = piVar22[2];
                  piVar12[3] = piVar22[3];
                  piVar12[2] = iVar32;
                  piVar12[1] = iVar25;
                  *piVar12 = iVar30;
                  iVar30 = piVar22[4];
                  iVar25 = piVar22[5];
                  iVar32 = piVar22[6];
                  piVar16 = piVar22 + 7;
                  piVar22 = piVar22 + 8;
                  piVar12[7] = *piVar16;
                  piVar12[6] = iVar32;
                  piVar12[5] = iVar25;
                  piVar12[4] = iVar30;
                  piVar12 = piVar12 + 8;
                } while (piVar12 < (int *)((int)piVar15 + uVar18));
              }
            }
          }
          goto LAB_719ef31c;
        }
        if (piVar15 != apiStack_2c[0]) {
          uVar7 = (int)piVar15 - (int)apiStack_2c[0];
          if ((uint)((int)puVar8 - (int)piVar31) < uVar7) {
LAB_719eff80:
            return (uint *)&DAT_ffffffba;
          }
          piVar15 = (int *)((int)piVar31 + uVar7);
          if (((int)piVar31 - (int)apiStack_2c[0] < -7) && (7 < (int)uVar7)) {
            piVar22 = piVar31;
            if (((uint)((int)piVar31 - (int)apiStack_2c[0]) < 0xfffffff0) &&
               (piVar12 = piVar15 + -8, piVar31 <= piVar12)) {
              iVar30 = *apiStack_2c[0];
              iVar25 = apiStack_2c[0][1];
              iVar32 = apiStack_2c[0][2];
              piVar31[3] = apiStack_2c[0][3];
              piVar31[2] = iVar32;
              piVar31[1] = iVar25;
              *piVar31 = iVar30;
              if (0x10 < (int)piVar12 - (int)piVar31) {
                piVar16 = apiStack_2c[0] + 4;
                piVar22 = piVar31 + 4;
                do {
                  iVar25 = *piVar16;
                  iVar32 = piVar16[1];
                  iVar30 = piVar16[2];
                  piVar22[3] = piVar16[3];
                  piVar22[2] = iVar30;
                  piVar22[1] = iVar32;
                  *piVar22 = iVar25;
                  iVar30 = piVar16[4];
                  iVar25 = piVar16[5];
                  iVar32 = piVar16[6];
                  piVar1 = piVar16 + 7;
                  piVar16 = piVar16 + 8;
                  piVar22[7] = *piVar1;
                  piVar22[6] = iVar32;
                  piVar22[5] = iVar25;
                  piVar22[4] = iVar30;
                  piVar22 = piVar22 + 8;
                } while (piVar22 < piVar12);
              }
              apiStack_2c[0] = (int *)((int)apiStack_2c[0] + ((int)piVar12 - (int)piVar31));
              piVar22 = piVar12;
            }
            puVar36 = (undefined *)((int)piVar31 + (uVar7 - (int)piVar22));
            piVar31 = apiStack_2c[0];
            do {
              puVar36 = puVar36 + -1;
              *(char *)piVar22 = (char)*piVar31;
              piVar31 = (int *)((int)piVar31 + 1);
              piVar22 = (int *)((int)piVar22 + 1);
            } while (puVar36 != (undefined *)0x0);
          }
          else {
            piVar22 = apiStack_2c[0];
            if (0 < (int)uVar7) {
              do {
                piVar12 = (int *)((int)piVar31 + 1);
                *(char *)piVar31 = (char)*piVar22;
                piVar22 = (int *)((int)piVar22 + 1);
                piVar31 = piVar12;
              } while (piVar12 < piVar15);
            }
          }
          uVar7 = *puVar3 - uVar7;
          *puVar3 = uVar7;
          piVar31 = piVar15;
        }
        uVar18 = auStack_98[uVar6 * 3 + 4];
        uVar6 = auStack_98[uVar6 * 3 + 5];
        param_1[0x1d7f] = 0;
        if ((((int)uVar7 < 0x10001) &&
            (puVar3 = (uint *)(uVar18 + uVar7), (undefined *)((int)piVar31 + (int)puVar3) <= puVar4)
            ) && (puVar3 + 8 <= puVar8 + -(int)piVar31)) {
          piVar15 = (int *)((int)piVar31 + uVar7);
          iVar32 = *piVar11;
          iVar25 = param_1[0x1d81];
          iVar30 = param_1[0x1d82];
          piVar31[3] = param_1[0x1d83];
          piVar31[2] = iVar30;
          piVar31[1] = iVar25;
          *piVar31 = iVar32;
          if (0x10 < uVar7) {
            iVar32 = param_1[0x1d85];
            iVar30 = param_1[0x1d86];
            iVar25 = param_1[0x1d87];
            piVar31[4] = param_1[0x1d84];
            piVar31[7] = iVar25;
            piVar31[6] = iVar30;
            piVar31[5] = iVar32;
            if (0x10 < (int)(uVar7 - 0x10)) {
              piVar12 = piVar31 + 8;
              piVar22 = param_1 + 0x1d8c;
              do {
                iVar25 = piVar22[-4];
                iVar30 = piVar22[-3];
                iVar32 = piVar22[-1];
                piVar12[2] = piVar22[-2];
                piVar12[3] = iVar32;
                piVar12[1] = iVar30;
                *piVar12 = iVar25;
                iVar25 = *piVar22;
                piVar16 = piVar22 + 2;
                iVar30 = piVar22[1];
                iVar32 = piVar22[3];
                piVar22 = piVar22 + 8;
                piVar12[6] = *piVar16;
                piVar12[7] = iVar32;
                piVar12[5] = iVar30;
                piVar12[4] = iVar25;
                piVar12 = piVar12 + 8;
              } while (piVar12 < piVar15);
            }
          }
          apiStack_2c[0] = (int *)((int)piVar11 + uVar7);
          piVar22 = (int *)((int)piVar15 - uVar6);
          if ((uint)((int)piVar15 - (int)piVar19) < uVar6) {
            if ((uint)((int)piVar15 - iVar9) < uVar6) {
              return (uint *)0xffffffec;
            }
            iVar32 = (int)((int)piVar15 - uVar6) - (int)piVar19;
            puVar13 = (undefined1 *)((int)piVar10 + iVar32);
            if (puVar13 + uVar18 <= piVar10) {
              imp___aeabi_memmove(piVar15,puVar13,uVar18);
              goto LAB_719ef968;
            }
            imp___aeabi_memmove(piVar15,puVar13,-iVar32);
            uVar18 = iVar32 + uVar18;
            piVar15 = (int *)((int)piVar15 - iVar32);
            piVar22 = piVar19;
          }
          if (uVar6 < 0x10) {
            if (uVar6 < 8) {
              *(char *)piVar15 = (char)*piVar22;
              *(undefined1 *)((int)piVar15 + 1) = *(undefined1 *)((int)piVar22 + 1);
              *(undefined1 *)((int)piVar15 + 2) = *(undefined1 *)((int)piVar22 + 2);
              *(undefined1 *)((int)piVar15 + 3) = *(undefined1 *)((int)piVar22 + 3);
              iVar32 = *(int *)(&DAT_70060bb8 + uVar6 * 4);
              piVar15[1] = *(int *)((int)piVar22 + iVar32);
              piVar22 = (int *)(((int)piVar22 + iVar32) - *(int *)(&DAT_70060958 + uVar6 * 4));
            }
            else {
              iVar32 = *piVar22;
              piVar15[1] = piVar22[1];
              *piVar15 = iVar32;
            }
            if (8 < uVar18) {
              piVar12 = piVar15 + 2;
              piVar16 = piVar22 + 2;
              if ((int)piVar12 - (int)piVar16 < 0x10) {
                do {
                  iVar32 = *piVar16;
                  piVar22 = piVar16 + 1;
                  piVar16 = piVar16 + 2;
                  piVar12[1] = *piVar22;
                  *piVar12 = iVar32;
                  piVar12 = piVar12 + 2;
                } while (piVar12 < (int *)((int)piVar15 + uVar18));
              }
              else {
                iVar30 = *piVar16;
                iVar25 = piVar22[3];
                iVar32 = piVar22[4];
                piVar15[5] = piVar22[5];
                piVar15[4] = iVar32;
                piVar15[3] = iVar25;
                *piVar12 = iVar30;
                if (0x18 < (int)uVar18) {
                  piVar22 = piVar22 + 6;
                  piVar12 = piVar15 + 6;
                  do {
                    iVar32 = *piVar22;
                    iVar30 = piVar22[1];
                    iVar25 = piVar22[2];
                    piVar12[3] = piVar22[3];
                    piVar12[2] = iVar25;
                    piVar12[1] = iVar30;
                    *piVar12 = iVar32;
                    iVar32 = piVar22[4];
                    iVar30 = piVar22[5];
                    iVar25 = piVar22[6];
                    piVar16 = piVar22 + 7;
                    piVar22 = piVar22 + 8;
                    piVar12[7] = *piVar16;
                    piVar12[6] = iVar25;
                    piVar12[5] = iVar30;
                    piVar12[4] = iVar32;
                    piVar12 = piVar12 + 8;
                  } while (piVar12 < (int *)((int)piVar15 + uVar18));
                }
              }
            }
          }
          else {
            iVar32 = *piVar22;
            iVar25 = piVar22[1];
            iVar30 = piVar22[2];
            piVar15[3] = piVar22[3];
            piVar15[2] = iVar30;
            piVar15[1] = iVar25;
            *piVar15 = iVar32;
            if (0x10 < (int)uVar18) {
              piVar22 = piVar22 + 4;
              piVar12 = piVar15 + 4;
              do {
                iVar30 = *piVar22;
                iVar25 = piVar22[1];
                iVar32 = piVar22[2];
                piVar12[3] = piVar22[3];
                piVar12[2] = iVar32;
                piVar12[1] = iVar25;
                *piVar12 = iVar30;
                iVar30 = piVar22[4];
                iVar25 = piVar22[5];
                iVar32 = piVar22[6];
                piVar16 = piVar22 + 7;
                piVar22 = piVar22 + 8;
                piVar12[7] = *piVar16;
                piVar12[6] = iVar32;
                piVar12[5] = iVar25;
                piVar12[4] = iVar30;
                piVar12 = piVar12 + 8;
              } while (piVar12 < (int *)((int)piVar15 + uVar18));
            }
          }
        }
        else {
          apiStack_2c[0] = piVar11;
          puVar3 = (uint *)FUN_719f3730(piVar31,puVar8,uVar7,uVar18,uVar6,apiStack_2c,
                                        param_1 + 0x5d80,piVar19,iVar9,piVar10);
        }
LAB_719ef968:
        if ((uint *)0xffffff88 < puVar3) {
          return puVar3;
        }
        piVar31 = (int *)((int)piVar31 + (int)puVar3);
        piStack_fc = param_1 + 0x5d80;
      }
      else {
        uVar7 = *puVar3;
        uVar18 = auStack_98[uVar6 * 3 + 4];
        uVar6 = auStack_98[uVar6 * 3 + 5];
        piVar15 = (int *)((int)apiStack_2c[0] + uVar7);
        bVar37 = piStack_fc <= piVar15;
        bVar38 = piVar15 == piStack_fc;
        if (!bVar37 || bVar38) {
          puVar3 = (uint *)(uVar18 + uVar7);
          bVar37 = puVar4 <= (undefined *)((int)piVar31 + (int)puVar3);
          bVar38 = (undefined *)((int)piVar31 + (int)puVar3) == puVar4;
        }
        if ((bVar37 && !bVar38) || (puVar8 + -(int)piVar31 < puVar3 + 8)) {
          puVar3 = (uint *)FUN_719f3730(piVar31,puVar8,uVar7,uVar18,uVar6,apiStack_2c,piStack_fc,
                                        piVar19,iVar9,piVar10);
        }
        else {
          piVar22 = (int *)((int)piVar31 + uVar7);
          iVar30 = *apiStack_2c[0];
          iVar32 = apiStack_2c[0][1];
          iVar25 = apiStack_2c[0][2];
          piVar31[3] = apiStack_2c[0][3];
          piVar31[2] = iVar25;
          piVar31[1] = iVar32;
          *piVar31 = iVar30;
          if (0x10 < uVar7) {
            iVar32 = apiStack_2c[0][4];
            iVar30 = apiStack_2c[0][5];
            iVar25 = apiStack_2c[0][6];
            piVar31[7] = apiStack_2c[0][7];
            piVar31[6] = iVar25;
            piVar31[5] = iVar30;
            piVar31[4] = iVar32;
            if (0x10 < (int)(uVar7 - 0x10)) {
              piVar16 = piVar31 + 8;
              piVar12 = apiStack_2c[0];
              do {
                iVar32 = piVar12[8];
                iVar30 = piVar12[9];
                iVar25 = piVar12[10];
                piVar16[3] = piVar12[0xb];
                piVar16[2] = iVar25;
                piVar16[1] = iVar30;
                *piVar16 = iVar32;
                iVar32 = piVar12[0xc];
                iVar30 = piVar12[0xd];
                iVar25 = piVar12[0xe];
                piVar16[7] = piVar12[0xf];
                piVar16[6] = iVar25;
                piVar16[5] = iVar30;
                piVar16[4] = iVar32;
                piVar16 = piVar16 + 8;
                piVar12 = piVar12 + 8;
              } while (piVar16 < piVar22);
            }
          }
          piVar12 = (int *)((int)piVar22 - uVar6);
          apiStack_2c[0] = piVar15;
          if ((uint)((int)piVar22 - (int)piVar19) < uVar6) {
            if ((uint)((int)piVar22 - iVar9) < uVar6) {
              return (uint *)0xffffffec;
            }
            iVar32 = (int)piVar12 - (int)piVar19;
            puVar13 = (undefined1 *)((int)piVar10 + iVar32);
            if (puVar13 + uVar18 <= piVar10) {
              imp___aeabi_memmove(piVar22,puVar13,uVar18);
              goto LAB_719ef31c;
            }
            imp___aeabi_memmove(piVar22,puVar13,-iVar32);
            uVar18 = iVar32 + uVar18;
            piVar22 = (int *)((int)piVar22 - iVar32);
            piVar12 = piVar19;
          }
          if (uVar6 < 0x10) {
            if (uVar6 < 8) {
              *(char *)piVar22 = (char)*piVar12;
              *(undefined1 *)((int)piVar22 + 1) = *(undefined1 *)((int)piVar12 + 1);
              *(undefined1 *)((int)piVar22 + 2) = *(undefined1 *)((int)piVar12 + 2);
              *(undefined1 *)((int)piVar22 + 3) = *(undefined1 *)((int)piVar12 + 3);
              iVar32 = *(int *)(&DAT_70060bb8 + uVar6 * 4);
              piVar22[1] = *(int *)((int)piVar12 + iVar32);
              piVar12 = (int *)(((int)piVar12 + iVar32) - *(int *)(&DAT_70060958 + uVar6 * 4));
            }
            else {
              iVar32 = *piVar12;
              piVar22[1] = piVar12[1];
              *piVar22 = iVar32;
            }
            if (8 < uVar18) {
              piVar15 = piVar22 + 2;
              piVar16 = piVar12 + 2;
              if ((int)piVar15 - (int)piVar16 < 0x10) {
                do {
                  iVar32 = *piVar16;
                  piVar12 = piVar16 + 1;
                  piVar16 = piVar16 + 2;
                  piVar15[1] = *piVar12;
                  *piVar15 = iVar32;
                  piVar15 = piVar15 + 2;
                } while (piVar15 < (int *)((int)piVar22 + uVar18));
              }
              else {
                iVar30 = *piVar16;
                iVar25 = piVar12[3];
                iVar32 = piVar12[4];
                piVar22[5] = piVar12[5];
                piVar22[4] = iVar32;
                piVar22[3] = iVar25;
                *piVar15 = iVar30;
                if (0x18 < (int)uVar18) {
                  piVar12 = piVar12 + 6;
                  piVar15 = piVar22 + 6;
                  do {
                    iVar32 = *piVar12;
                    iVar30 = piVar12[1];
                    iVar25 = piVar12[2];
                    piVar15[3] = piVar12[3];
                    piVar15[2] = iVar25;
                    piVar15[1] = iVar30;
                    *piVar15 = iVar32;
                    iVar32 = piVar12[4];
                    iVar30 = piVar12[5];
                    iVar25 = piVar12[6];
                    piVar16 = piVar12 + 7;
                    piVar12 = piVar12 + 8;
                    piVar15[7] = *piVar16;
                    piVar15[6] = iVar25;
                    piVar15[5] = iVar30;
                    piVar15[4] = iVar32;
                    piVar15 = piVar15 + 8;
                  } while (piVar15 < (int *)((int)piVar22 + uVar18));
                }
              }
            }
          }
          else {
            iVar32 = *piVar12;
            iVar25 = piVar12[1];
            iVar30 = piVar12[2];
            piVar22[3] = piVar12[3];
            piVar22[2] = iVar30;
            piVar22[1] = iVar25;
            *piVar22 = iVar32;
            if (0x10 < (int)uVar18) {
              piVar12 = piVar12 + 4;
              piVar15 = piVar22 + 4;
              do {
                iVar30 = *piVar12;
                iVar25 = piVar12[1];
                iVar32 = piVar12[2];
                piVar15[3] = piVar12[3];
                piVar15[2] = iVar32;
                piVar15[1] = iVar25;
                *piVar15 = iVar30;
                iVar30 = piVar12[4];
                iVar25 = piVar12[5];
                iVar32 = piVar12[6];
                piVar16 = piVar12 + 7;
                piVar12 = piVar12 + 8;
                piVar15[7] = *piVar16;
                piVar15[6] = iVar32;
                piVar15[5] = iVar25;
                piVar15[4] = iVar30;
                piVar15 = piVar15 + 8;
              } while (piVar15 < (int *)((int)piVar22 + uVar18));
            }
          }
        }
LAB_719ef31c:
        if ((uint *)0xffffff88 < puVar3) {
          return puVar3;
        }
        piVar31 = (int *)((int)piVar31 + (int)puVar3);
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != uStack_c8);
  }
  param_1[0x1a0b] = auStack_98[0];
  param_1[0x1a0c] = auStack_98[1];
  param_1[0x1a0d] = auStack_98[2];
  iVar32 = param_1[0x1d7f];
  piVar11 = apiStack_2c[0];
joined_r0x719ed60c:
  apiStack_2c[0] = piVar11;
  if (iVar32 == 2) {
    uVar6 = (int)piStack_fc - (int)piVar11;
    if ((uint)((int)puVar8 - (int)piVar31) < uVar6) {
      return (uint *)&DAT_ffffffba;
    }
    if (piVar31 == (int *)0x0) {
      piVar31 = (int *)0x0;
    }
    else {
      imp___aeabi_memmove(piVar31,piVar11,uVar6);
      piVar31 = (int *)((int)piVar31 + uVar6);
    }
    piVar11 = param_1 + 0x1d80;
    piStack_fc = param_1 + 0x5d80;
  }
  uVar6 = (int)piStack_fc - (int)piVar11;
  if ((uint)((int)puVar8 - (int)piVar31) < uVar6) {
    return (uint *)&DAT_ffffffba;
  }
  if (piVar31 == (int *)0x0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    imp___aeabi_memmove(piVar31,piVar11,uVar6);
    puVar4 = (undefined *)((int)piVar31 + uVar6);
  }
  return (uint *)(puVar4 + -(int)param_2);
}


// =========================================================================
// Function: FUN_719f0480
// Entry: 0x719f0480 | Size: 8356 bytes
// =========================================================================

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int * FUN_719f0480(int *param_1,int *param_2,int param_3,uint *param_4,uint param_5,int param_6,
                  int param_7)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int *piVar6;
  uint *puVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ushort *puVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  ushort *puVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  ushort *puVar23;
  undefined1 *puVar24;
  int *piVar25;
  uint uVar26;
  int *piVar27;
  int *piVar28;
  int *piVar29;
  int iVar30;
  bool bVar31;
  bool bVar32;
  int *piStack_84;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_60;
  uint uStack_5c;
  uint *puStack_58;
  int iStack_4c;
  int iStack_44;
  int iStack_3c;
  uint auStack_34 [3];
  int *piStack_28;
  
  piVar29 = (int *)param_1[0x1d2c];
  iVar1 = param_1[0x1d2d];
  uVar9 = param_1[0x1d2e];
  puVar2 = (undefined1 *)((int)param_2 + param_3);
  piStack_28 = (int *)param_1[0x1d5e];
  piStack_84 = (int *)param_1[0x1d7e];
  piVar28 = param_2;
  if (param_6 == 0) {
LAB_719f0560:
    piVar29 = piStack_28;
    piVar27 = piVar28;
    if (param_1[0x1d7f] == 2) {
      uVar9 = (int)piStack_84 - (int)piStack_28;
      if ((uint)((int)puVar2 - (int)piVar28) < uVar9) {
        return (int *)&DAT_ffffffba;
      }
      piVar27 = (int *)0x0;
      if (piVar28 != (int *)0x0) {
        imp___aeabi_memmove(piVar28,piStack_28,uVar9);
        piVar27 = (int *)((int)piVar28 + uVar9);
      }
      piVar29 = param_1 + 0x1d80;
      param_1[0x1d7f] = 0;
      piStack_84 = param_1 + 0x5d80;
    }
    uVar9 = (int)piStack_84 - (int)piVar29;
    piVar28 = (int *)&DAT_ffffffba;
    if (uVar9 <= (uint)((int)puVar2 - (int)piVar27)) {
      if (piVar27 == (int *)0x0) {
        puVar2 = (undefined1 *)0x0;
      }
      else {
        imp___aeabi_memcpy(piVar27,piVar29,uVar9);
        puVar2 = (undefined1 *)((int)piVar27 + uVar9);
      }
      piVar28 = (int *)(puVar2 + -(int)param_2);
    }
  }
  else {
    param_1[0x1d43] = 1;
    auStack_34[1] = param_1[0x1a0b];
    uVar3 = param_1[0x1a0c];
    if (param_5 != 0) {
      puVar4 = param_4 + 1;
      if (param_5 < 4) {
        uStack_60 = (uint)(byte)*param_4;
        if (param_5 == 2) {
LAB_719f062c:
          uStack_60 = uStack_60 + (uint)*(byte *)((int)param_4 + 1) * 0x100;
        }
        else if (param_5 == 3) {
          uStack_60 = uStack_60 | (uint)*(byte *)((int)param_4 + 2) << 0x10;
          goto LAB_719f062c;
        }
        uVar5 = (uint)*(byte *)((int)param_4 + (param_5 - 1));
        if (uVar5 == 0) goto LAB_719f1bec;
        iVar16 = LZCOUNT(uVar5) + param_5 * -8 + 9;
        uVar5 = 0;
        puStack_58 = param_4;
      }
      else {
        uVar5 = param_5 - 4;
        puStack_58 = (uint *)((int)param_4 + uVar5);
        uStack_60 = *puStack_58;
        if ((uStack_60 >> 0x18 == 0) ||
           (iVar16 = 8 - (LZCOUNT(uStack_60 >> 0x18) ^ 0x1fU), 0xffffff88 < param_5))
        goto LAB_719f1bec;
      }
      iVar19 = *(int *)(*param_1 + 4);
      uStack_5c = iVar19 + iVar16;
      uVar12 = uStack_60 >> (-uStack_5c & 0x1f);
      if (uStack_5c < 0x21) {
        if ((int)uVar5 < 4) {
          if (uVar5 == 0) {
            uVar5 = 0;
            goto LAB_719f06fc;
          }
          uVar26 = uVar5;
          if (param_4 <= (uint *)((int)param_4 + (uVar5 - (uStack_5c >> 3)))) {
            uVar26 = uStack_5c >> 3;
          }
          uStack_5c = uStack_5c + uVar26 * -8;
        }
        else {
          uVar26 = uStack_5c >> 3;
          uStack_5c = uStack_5c & 7;
        }
        uVar5 = uVar5 - uVar26;
        puStack_58 = (uint *)((int)param_4 + uVar5);
        uStack_60 = *(uint *)((int)param_4 + uVar5);
      }
LAB_719f06fc:
      iVar16 = *param_1 + 8;
      iVar20 = *(int *)(param_1[2] + 4);
      uStack_5c = iVar20 + uStack_5c;
      uVar26 = uStack_60 >> (-uStack_5c & 0x1f);
      if (uStack_5c < 0x21) {
        if ((int)uVar5 < 4) {
          if (uVar5 == 0) {
            uVar5 = 0;
            goto LAB_719f0790;
          }
          uVar11 = uVar5;
          if (param_4 <= (uint *)((int)param_4 + (uVar5 - (uStack_5c >> 3)))) {
            uVar11 = uStack_5c >> 3;
          }
          uStack_5c = uStack_5c + uVar11 * -8;
        }
        else {
          uVar11 = uStack_5c >> 3;
          uStack_5c = uStack_5c & 7;
        }
        uVar5 = uVar5 - uVar11;
        puStack_58 = (uint *)((int)param_4 + uVar5);
        uStack_60 = *(uint *)((int)param_4 + uVar5);
      }
LAB_719f0790:
      iVar17 = param_1[2] + 8;
      iVar21 = *(int *)(param_1[1] + 4);
      uStack_5c = iVar21 + uStack_5c;
      uVar11 = uStack_60 >> (-uStack_5c & 0x1f);
      if (uStack_5c < 0x21) {
        if ((int)uVar5 < 4) {
          if (uVar5 == 0) {
            uVar5 = 0;
            goto LAB_719f0828;
          }
          uVar15 = uVar5;
          if (param_4 <= (uint *)((int)param_4 + (uVar5 - (uStack_5c >> 3)))) {
            uVar15 = uStack_5c >> 3;
          }
          uStack_5c = uStack_5c + uVar15 * -8;
        }
        else {
          uVar15 = uStack_5c >> 3;
          uStack_5c = uStack_5c & 7;
        }
        uVar5 = uVar5 - uVar15;
        puStack_58 = (uint *)((int)param_4 + uVar5);
        uStack_60 = *(uint *)((int)param_4 + uVar5);
      }
LAB_719f0828:
      iVar22 = param_1[1] + 8;
      puVar23 = (ushort *)(iVar22 + (*(uint *)(&DAT_7008e6ac + iVar21 * 4) & uVar11) * 8);
      uVar11 = (uint)(byte)puVar23[1];
      puVar14 = (ushort *)(iVar16 + (*(uint *)(&DAT_7008e6ac + iVar19 * 4) & uVar12) * 8);
      uVar12 = (uint)(byte)puVar14[1];
      puVar18 = (ushort *)(iVar17 + (*(uint *)(&DAT_7008e6ac + iVar20 * 4) & uVar26) * 8);
      uVar26 = (uint)(byte)puVar18[1];
      iVar19 = *(int *)(puVar18 + 2);
      uStack_6c = *(uint *)(puVar14 + 2);
      uStack_68 = *(uint *)(puVar23 + 2);
      auStack_34[2] = uVar3;
      if (uVar26 < 2) {
        auStack_34[2] = param_1[0x1a0d];
        if (uVar26 == 0) {
          uVar26 = auStack_34[uStack_6c == 0];
          auStack_34[1] = auStack_34[uStack_6c != 0];
          uVar15 = uStack_5c;
        }
        else {
          iVar19 = (iVar19 - ((int)(uStack_60 << (uStack_5c & 0x1f)) >> 0x1f)) +
                   (uint)(uStack_6c == 0);
          uVar15 = uStack_5c + 1;
          if (iVar19 == 3) {
            uVar26 = auStack_34[1] - 1;
            if (auStack_34[1] - 1 == 0) {
              uVar26 = auStack_34[1];
            }
          }
          else {
            uVar26 = auStack_34[iVar19];
            if (uVar26 == 0) {
              uVar26 = 1;
            }
            if (iVar19 == 1) goto LAB_719f0a78;
          }
          auStack_34[2] = uVar3;
        }
      }
      else {
        uVar15 = uStack_5c + uVar26;
        uVar3 = uStack_60 << (uStack_5c & 0x1f);
        if ((param_7 == 0) || (uVar26 < 0x19)) {
          uVar26 = iVar19 + (uVar3 >> (-uVar26 & 0x1f));
          if (uVar15 < 0x21) {
            if ((int)uVar5 < 4) {
              if (uVar5 == 0) {
                uVar5 = 0;
                goto LAB_719f0a78;
              }
              uVar3 = uVar5;
              if (param_4 <= (uint *)((int)param_4 + (uVar5 - (uVar15 >> 3)))) {
                uVar3 = uVar15 >> 3;
              }
              uVar13 = uVar15 + uVar3 * -8;
            }
            else {
              uVar13 = uVar15 & 7;
              uVar3 = uVar15 >> 3;
            }
            uVar5 = uVar5 - uVar3;
            puStack_58 = (uint *)((int)param_4 + uVar5);
            uStack_60 = *puStack_58;
            uVar15 = uVar13;
          }
        }
        else {
          uVar13 = uVar15 - 5;
          if (uVar13 < 0x21) {
            if ((int)uVar5 < 4) {
              if (uVar5 == 0) {
                uVar5 = 0;
              }
              else {
                uVar15 = uVar5;
                if (param_4 <= (uint *)((int)param_4 + (uVar5 - (uVar13 >> 3)))) {
                  uVar15 = uVar13 >> 3;
                }
                uVar5 = uVar5 - uVar15;
                uVar13 = uVar13 + uVar15 * -8;
                puStack_58 = (uint *)((int)param_4 + uVar5);
                uStack_60 = *puStack_58;
              }
            }
            else {
              uVar5 = uVar5 - (uVar13 >> 3);
              uVar13 = uVar13 & 7;
              puStack_58 = (uint *)((int)param_4 + uVar5);
              uStack_60 = *puStack_58;
            }
          }
          uVar15 = uVar13 + 5;
          uVar26 = iVar19 + (uVar3 >> (5 - uVar26 & 0x1f)) * 0x20 +
                   ((uStack_60 << (uVar13 & 0x1f)) >> 0x1b);
        }
      }
LAB_719f0a78:
      if (uVar11 != 0) {
        uVar3 = uVar15 & 0x1f;
        uVar15 = uVar15 + uVar11;
        uStack_68 = uStack_68 + ((uStack_60 << uVar3) >> (-uVar11 & 0x1f));
      }
      if ((0x13 < uVar11 + uVar12) && (uVar15 < 0x21)) {
        if ((int)uVar5 < 4) {
          if (uVar5 == 0) {
            uVar5 = 0;
          }
          else {
            uVar3 = uVar5;
            if (param_4 <= (uint *)((int)param_4 + (uVar5 - (uVar15 >> 3)))) {
              uVar3 = uVar15 >> 3;
            }
            uVar5 = uVar5 - uVar3;
            uVar15 = uVar15 + uVar3 * -8;
            puStack_58 = (uint *)((int)param_4 + uVar5);
            uStack_60 = *puStack_58;
          }
        }
        else {
          uVar5 = uVar5 - (uVar15 >> 3);
          uVar15 = uVar15 & 7;
          puStack_58 = (uint *)((int)param_4 + uVar5);
          uStack_60 = *puStack_58;
        }
      }
      if (uVar12 != 0) {
        uVar3 = uVar15 & 0x1f;
        uVar15 = uVar15 + uVar12;
        uStack_6c = uStack_6c + ((uStack_60 << uVar3) >> (-uVar12 & 0x1f));
      }
      if (uVar15 < 0x21) {
        if ((int)uVar5 < 4) {
          if (uVar5 == 0) {
            uVar5 = 0;
          }
          else {
            uVar3 = uVar5;
            if (param_4 <= (uint *)((int)param_4 + (uVar5 - (uVar15 >> 3)))) {
              uVar3 = uVar15 >> 3;
            }
            uVar5 = uVar5 - uVar3;
            puStack_58 = (uint *)((int)param_4 + uVar5);
            uStack_60 = *puStack_58;
            uVar15 = uVar15 + uVar3 * -8;
          }
        }
        else {
          uVar5 = uVar5 - (uVar15 >> 3);
          uVar15 = uVar15 & 7;
          puStack_58 = (uint *)((int)param_4 + uVar5);
          uStack_60 = *puStack_58;
        }
      }
      iVar19 = uVar15 + *(byte *)((int)puVar14 + 3);
      iStack_4c = (*(uint *)(&DAT_7008e6ac + (uint)*(byte *)((int)puVar14 + 3) * 4) &
                  uStack_60 >> (-iVar19 & 0x1fU)) + (uint)*puVar14;
      uStack_5c = iVar19 + (uint)*(byte *)((int)puVar23 + 3);
      iStack_3c = (*(uint *)(&DAT_7008e6ac + (uint)*(byte *)((int)puVar23 + 3) * 4) &
                  uStack_60 >> (-uStack_5c & 0x1f)) + (uint)*puVar23;
      if (uStack_5c < 0x21) {
        if ((int)uVar5 < 4) {
          if (uVar5 != 0) {
            uVar3 = uVar5;
            if (param_4 <= (uint *)((int)param_4 + (uVar5 - (uStack_5c >> 3)))) {
              uVar3 = uStack_5c >> 3;
            }
            puStack_58 = (uint *)((int)param_4 + (uVar5 - uVar3));
            uStack_60 = *puStack_58;
            uStack_5c = uStack_5c + uVar3 * -8;
          }
        }
        else {
          puStack_58 = (uint *)((int)param_4 + (uVar5 - (uStack_5c >> 3)));
          uStack_60 = *puStack_58;
          uStack_5c = uStack_5c & 7;
        }
      }
      uStack_5c = uStack_5c + *(byte *)((int)puVar18 + 3);
      iStack_44 = (*(uint *)(&DAT_7008e6ac + (uint)*(byte *)((int)puVar18 + 3) * 4) &
                  uStack_60 >> (-uStack_5c & 0x1f)) + (uint)*puVar18;
      piVar6 = (int *)((int)piStack_28 + uStack_6c);
      piVar27 = piStack_84;
      if (piVar6 <= piStack_84) {
        do {
          piVar25 = piVar6 + -8;
          bVar32 = piStack_84 <= piVar6;
          bVar31 = piVar6 == piStack_84;
          piVar27 = param_1 + 0x1d2c;
          if (!bVar32 || bVar31) {
            piVar27 = (int *)(uStack_68 + uStack_6c);
            bVar32 = piVar25 <= (int *)((int)piVar28 + (int)piVar27);
            bVar31 = (int *)((int)piVar28 + (int)piVar27) == piVar25;
          }
          auStack_34[0] = uVar26;
          if ((bVar32 && !bVar31) || (puVar2 + -(int)piVar28 < piVar27 + 8)) {
            piVar27 = (int *)FUN_719f3cb4(piVar28,puVar2,piVar25,uStack_6c,uStack_68,uVar26,
                                          &piStack_28,piStack_84,piVar29,iVar1,uVar9);
          }
          else {
            piVar25 = (int *)((int)piVar28 + uStack_6c);
            iVar19 = *piStack_28;
            iVar21 = piStack_28[1];
            iVar20 = piStack_28[2];
            piVar28[3] = piStack_28[3];
            piVar28[2] = iVar20;
            piVar28[1] = iVar21;
            *piVar28 = iVar19;
            if (0x10 < uStack_6c) {
              iVar19 = piStack_28[4];
              iVar21 = piStack_28[5];
              iVar20 = piStack_28[6];
              piVar28[7] = piStack_28[7];
              piVar28[4] = iVar19;
              piVar28[6] = iVar20;
              piVar28[5] = iVar21;
              if (0x10 < (int)(uStack_6c - 0x10)) {
                piVar8 = piVar28 + 8;
                do {
                  iVar19 = piStack_28[8];
                  iVar21 = piStack_28[9];
                  iVar20 = piStack_28[10];
                  piVar8[3] = piStack_28[0xb];
                  piVar8[2] = iVar20;
                  piVar8[1] = iVar21;
                  *piVar8 = iVar19;
                  iVar19 = piStack_28[0xc];
                  iVar21 = piStack_28[0xd];
                  iVar20 = piStack_28[0xe];
                  piVar8[7] = piStack_28[0xf];
                  piVar8[6] = iVar20;
                  piVar8[5] = iVar21;
                  piVar8[4] = iVar19;
                  piVar8 = piVar8 + 8;
                  piStack_28 = piStack_28 + 8;
                } while (piVar8 < piVar25);
              }
            }
            piVar8 = (int *)((int)piVar25 - uVar26);
            piStack_28 = piVar6;
            if ((uint)((int)piVar25 - (int)piVar29) < uVar26) {
              if ((uint)((int)piVar25 - iVar1) < uVar26) goto LAB_719f1bec;
              iVar20 = (int)piVar8 - (int)piVar29;
              iVar19 = uVar9 + iVar20;
              if (iVar19 + uStack_68 <= uVar9) {
                imp___aeabi_memmove(piVar25,iVar19,uStack_68);
                goto LAB_719f1000;
              }
              imp___aeabi_memmove(piVar25,iVar19,-iVar20);
              uStack_68 = iVar20 + uStack_68;
              piVar25 = (int *)((int)piVar25 - iVar20);
              piVar8 = piVar29;
            }
            if (uVar26 < 0x10) {
              if (uVar26 < 8) {
                *(char *)piVar25 = (char)*piVar8;
                *(undefined1 *)((int)piVar25 + 1) = *(undefined1 *)((int)piVar8 + 1);
                *(undefined1 *)((int)piVar25 + 2) = *(undefined1 *)((int)piVar8 + 2);
                *(undefined1 *)((int)piVar25 + 3) = *(undefined1 *)((int)piVar8 + 3);
                iVar19 = *(int *)(&DAT_70060bb8 + uVar26 * 4);
                piVar25[1] = *(int *)((int)piVar8 + iVar19);
                piVar8 = (int *)(((int)piVar8 + iVar19) - *(int *)(&DAT_70060958 + uVar26 * 4));
              }
              else {
                iVar19 = *piVar8;
                piVar25[1] = piVar8[1];
                *piVar25 = iVar19;
              }
              if (8 < uStack_68) {
                piVar6 = piVar25 + 2;
                piVar10 = piVar8 + 2;
                if ((int)piVar6 - (int)piVar10 < 0x10) {
                  do {
                    iVar19 = *piVar10;
                    piVar8 = piVar10 + 1;
                    piVar10 = piVar10 + 2;
                    piVar6[1] = *piVar8;
                    *piVar6 = iVar19;
                    piVar6 = piVar6 + 2;
                  } while (piVar6 < (int *)((int)piVar25 + uStack_68));
                }
                else {
                  iVar21 = *piVar10;
                  iVar20 = piVar8[3];
                  iVar19 = piVar8[4];
                  piVar25[5] = piVar8[5];
                  piVar25[4] = iVar19;
                  piVar25[3] = iVar20;
                  *piVar6 = iVar21;
                  if (0x18 < (int)uStack_68) {
                    piVar8 = piVar8 + 6;
                    piVar6 = piVar25 + 6;
                    do {
                      iVar19 = *piVar8;
                      iVar21 = piVar8[1];
                      iVar20 = piVar8[2];
                      piVar6[3] = piVar8[3];
                      piVar6[2] = iVar20;
                      piVar6[1] = iVar21;
                      *piVar6 = iVar19;
                      iVar19 = piVar8[4];
                      iVar21 = piVar8[5];
                      iVar20 = piVar8[6];
                      piVar10 = piVar8 + 7;
                      piVar8 = piVar8 + 8;
                      piVar6[7] = *piVar10;
                      piVar6[6] = iVar20;
                      piVar6[5] = iVar21;
                      piVar6[4] = iVar19;
                      piVar6 = piVar6 + 8;
                    } while (piVar6 < (int *)((int)piVar25 + uStack_68));
                  }
                }
              }
            }
            else {
              iVar19 = *piVar8;
              iVar20 = piVar8[1];
              iVar21 = piVar8[2];
              piVar25[3] = piVar8[3];
              piVar25[2] = iVar21;
              piVar25[1] = iVar20;
              *piVar25 = iVar19;
              if (0x10 < (int)uStack_68) {
                piVar8 = piVar8 + 4;
                piVar6 = piVar25 + 4;
                do {
                  iVar19 = *piVar8;
                  iVar21 = piVar8[1];
                  iVar20 = piVar8[2];
                  piVar6[3] = piVar8[3];
                  piVar6[2] = iVar20;
                  piVar6[1] = iVar21;
                  *piVar6 = iVar19;
                  iVar19 = piVar8[4];
                  iVar21 = piVar8[5];
                  iVar20 = piVar8[6];
                  piVar10 = piVar8 + 7;
                  piVar8 = piVar8 + 8;
                  piVar6[7] = *piVar10;
                  piVar6[6] = iVar20;
                  piVar6[5] = iVar21;
                  piVar6[4] = iVar19;
                  piVar6 = piVar6 + 8;
                } while (piVar6 < (int *)((int)piVar25 + uStack_68));
              }
            }
          }
LAB_719f1000:
          if ((int *)0xffffff88 < piVar27) {
            return piVar27;
          }
          piVar28 = (int *)((int)piVar28 + (int)piVar27);
          param_6 = param_6 + -1;
          if (param_6 == 0) goto LAB_719f24e4;
          if (uStack_5c < 0x21) {
            if (puStack_58 < puVar4) {
              if (puStack_58 == param_4) goto LAB_719f1088;
              uVar3 = uStack_5c >> 3;
              if ((uint *)((int)puStack_58 - (uStack_5c >> 3)) < param_4) {
                uVar3 = (int)puStack_58 - (int)param_4;
              }
              uVar5 = uStack_5c + uVar3 * -8;
              uStack_60 = *(uint *)((int)puStack_58 - uVar3);
            }
            else {
              uVar5 = uStack_5c & 7;
              uVar3 = uStack_5c >> 3;
              uStack_60 = *(uint *)((int)puStack_58 - (uStack_5c >> 3));
            }
            puStack_58 = (uint *)((int)puStack_58 - uVar3);
            uStack_5c = uVar5;
          }
LAB_719f1088:
          puVar14 = (ushort *)(iVar16 + iStack_4c * 8);
          uVar12 = (uint)(byte)puVar14[1];
          uStack_6c = *(uint *)(puVar14 + 2);
          puVar23 = (ushort *)(iVar22 + iStack_3c * 8);
          puVar18 = (ushort *)(iVar17 + iStack_44 * 8);
          uVar3 = (uint)(byte)puVar18[1];
          uVar5 = (uint)(byte)puVar23[1];
          iVar19 = *(int *)(puVar18 + 2);
          uStack_68 = *(uint *)(puVar23 + 2);
          puVar7 = auStack_34;
          if (uVar3 < 2) {
            if (uVar3 == 0) {
              uVar26 = auStack_34[uStack_6c == 0];
              puVar7 = auStack_34 + (uStack_6c != 0);
            }
            else {
              uVar3 = uStack_5c & 0x1f;
              uStack_5c = uStack_5c + 1;
              iVar19 = (iVar19 + (uint)(uStack_6c == 0)) - ((int)(uStack_60 << uVar3) >> 0x1f);
              if (iVar19 == 3) {
                uVar26 = auStack_34[0] - 1;
                if (auStack_34[0] - 1 == 0) {
                  uVar26 = auStack_34[0];
                }
              }
              else {
                uVar26 = auStack_34[iVar19];
                if (uVar26 == 0) {
                  uVar26 = 1;
                }
                if (iVar19 == 1) goto LAB_719f1288;
              }
              auStack_34[2] = auStack_34[1];
            }
          }
          else {
            uVar11 = uStack_5c + uVar3;
            uVar26 = uStack_60 << (uStack_5c & 0x1f);
            if ((param_7 == 0) || (uVar3 < 0x19)) {
              uVar26 = iVar19 + (uVar26 >> (-uVar3 & 0x1f));
              if (uVar11 < 0x21) {
                if (puStack_58 < puVar4) {
                  if (puStack_58 == param_4) goto LAB_719f1278;
                  uVar3 = uVar11 >> 3;
                  if ((uint *)((int)puStack_58 - (uVar11 >> 3)) < param_4) {
                    uVar3 = (int)puStack_58 - (int)param_4;
                  }
                  uVar15 = uVar11 + uVar3 * -8;
                  uStack_60 = *(uint *)((int)puStack_58 - uVar3);
                }
                else {
                  uVar15 = uVar11 & 7;
                  uVar3 = uVar11 >> 3;
                  uStack_60 = *(uint *)((int)puStack_58 - (uVar11 >> 3));
                }
                puStack_58 = (uint *)((int)puStack_58 - uVar3);
                uVar11 = uVar15;
              }
            }
            else {
              uVar11 = uVar11 + -5;
              if (uVar11 < 0x21) {
                if (puStack_58 < puVar4) {
                  if (puStack_58 == param_4) goto LAB_719f1254;
                  uVar15 = uVar11 >> 3;
                  if ((uint *)((int)puStack_58 - (uVar11 >> 3)) < param_4) {
                    uVar15 = (int)puStack_58 - (int)param_4;
                  }
                  uVar13 = uVar11 + uVar15 * -8;
                  uStack_60 = *(uint *)((int)puStack_58 - uVar15);
                }
                else {
                  uVar13 = uVar11 & 7;
                  uVar15 = uVar11 >> 3;
                  uStack_60 = *(uint *)((int)puStack_58 - (uVar11 >> 3));
                }
                puStack_58 = (uint *)((int)puStack_58 - uVar15);
                uVar11 = uVar13;
              }
LAB_719f1254:
              uVar26 = iVar19 + (uVar26 >> (5 - uVar3 & 0x1f)) * 0x20 +
                       ((uStack_60 << (uVar11 & 0x1f)) >> 0x1b);
              uVar11 = uVar11 + 5;
            }
LAB_719f1278:
            auStack_34[2] = auStack_34[1];
            uStack_5c = uVar11;
          }
LAB_719f1288:
          auStack_34[1] = *puVar7;
          if (uVar5 != 0) {
            uVar3 = uStack_5c & 0x1f;
            uStack_5c = uStack_5c + uVar5;
            uStack_68 = uStack_68 + ((uStack_60 << uVar3) >> (-uVar5 & 0x1f));
          }
          if ((0x13 < uVar5 + uVar12) && (uStack_5c < 0x21)) {
            if (puStack_58 < puVar4) {
              if (puStack_58 == param_4) goto LAB_719f133c;
              uVar3 = uStack_5c >> 3;
              if ((uint *)((int)puStack_58 - (uStack_5c >> 3)) < param_4) {
                uVar3 = (int)puStack_58 - (int)param_4;
              }
              uVar5 = uStack_5c + uVar3 * -8;
              uStack_60 = *(uint *)((int)puStack_58 - uVar3);
            }
            else {
              uVar5 = uStack_5c & 7;
              uVar3 = uStack_5c >> 3;
              uStack_60 = *(uint *)((int)puStack_58 - (uStack_5c >> 3));
            }
            puStack_58 = (uint *)((int)puStack_58 - uVar3);
            uStack_5c = uVar5;
          }
LAB_719f133c:
          if (uVar12 != 0) {
            uVar3 = uStack_5c & 0x1f;
            uStack_5c = uStack_5c + uVar12;
            uStack_6c = uStack_6c + ((uStack_60 << uVar3) >> (-uVar12 & 0x1f));
          }
          if (uStack_5c < 0x21) {
            if (puStack_58 < puVar4) {
              if (puStack_58 == param_4) goto LAB_719f13d0;
              uVar3 = uStack_5c >> 3;
              if ((uint *)((int)puStack_58 - (uStack_5c >> 3)) < param_4) {
                uVar3 = (int)puStack_58 - (int)param_4;
              }
              uVar5 = uStack_5c + uVar3 * -8;
              uStack_60 = *(uint *)((int)puStack_58 - uVar3);
            }
            else {
              uVar5 = uStack_5c & 7;
              uVar3 = uStack_5c >> 3;
              uStack_60 = *(uint *)((int)puStack_58 - (uStack_5c >> 3));
            }
            puStack_58 = (uint *)((int)puStack_58 - uVar3);
            uStack_5c = uVar5;
          }
LAB_719f13d0:
          iVar19 = uStack_5c + *(byte *)((int)puVar14 + 3);
          iStack_4c = (*(uint *)(&DAT_7008e6ac + (uint)*(byte *)((int)puVar14 + 3) * 4) &
                      uStack_60 >> (-iVar19 & 0x1fU)) + (uint)*puVar14;
          uStack_5c = iVar19 + (uint)*(byte *)((int)puVar23 + 3);
          iStack_3c = (*(uint *)(&DAT_7008e6ac + (uint)*(byte *)((int)puVar23 + 3) * 4) &
                      uStack_60 >> (-uStack_5c & 0x1f)) + (uint)*puVar23;
          if (uStack_5c < 0x21) {
            if (puStack_58 < puVar4) {
              if (puStack_58 == param_4) goto LAB_719f0de0;
              uVar3 = uStack_5c >> 3;
              if ((uint *)((int)puStack_58 - (uStack_5c >> 3)) < param_4) {
                uVar3 = (int)puStack_58 - (int)param_4;
              }
              uVar5 = uStack_5c + uVar3 * -8;
              uStack_60 = *(uint *)((int)puStack_58 - uVar3);
            }
            else {
              uVar5 = uStack_5c & 7;
              uVar3 = uStack_5c >> 3;
              uStack_60 = *(uint *)((int)puStack_58 - (uStack_5c >> 3));
            }
            puStack_58 = (uint *)((int)puStack_58 - uVar3);
            uStack_5c = uVar5;
          }
LAB_719f0de0:
          uStack_5c = uStack_5c + *(byte *)((int)puVar18 + 3);
          iStack_44 = (*(uint *)(&DAT_7008e6ac + (uint)*(byte *)((int)puVar18 + 3) * 4) &
                      uStack_60 >> (-uStack_5c & 0x1f)) + (uint)*puVar18;
          piVar6 = (int *)((int)piStack_28 + uStack_6c);
          piVar27 = (int *)param_1[0x1d7e];
        } while (piVar6 <= (int *)param_1[0x1d7e]);
      }
      if (0 < param_6) {
        if (piVar27 != piStack_28) {
          uVar3 = (int)piVar27 - (int)piStack_28;
          if ((uint)((int)puVar2 - (int)piVar28) < uVar3) {
            return (int *)&DAT_ffffffba;
          }
          piVar27 = (int *)((int)piVar28 + uVar3);
          if (((int)uVar3 < 8) || (-8 < (int)piVar28 - (int)piStack_28)) {
            if (0 < (int)uVar3) {
              do {
                piVar6 = (int *)((int)piVar28 + 1);
                *(char *)piVar28 = (char)*piStack_28;
                piStack_28 = (int *)((int)piStack_28 + 1);
                piVar28 = piVar6;
              } while (piVar6 < piVar27);
            }
          }
          else {
            piVar6 = piVar28;
            if (((uint)((int)piVar28 - (int)piStack_28) < 0xfffffff0) &&
               (piVar25 = piVar27 + -8, piVar28 <= piVar25)) {
              iVar19 = *piStack_28;
              iVar21 = piStack_28[1];
              iVar20 = piStack_28[2];
              piVar28[3] = piStack_28[3];
              piVar28[2] = iVar20;
              piVar28[1] = iVar21;
              *piVar28 = iVar19;
              if (0x10 < (int)piVar25 - (int)piVar28) {
                piVar8 = piStack_28 + 4;
                piVar6 = piVar28 + 4;
                do {
                  iVar20 = *piVar8;
                  iVar21 = piVar8[1];
                  iVar19 = piVar8[2];
                  piVar6[3] = piVar8[3];
                  piVar6[2] = iVar19;
                  piVar6[1] = iVar21;
                  *piVar6 = iVar20;
                  iVar19 = piVar8[4];
                  iVar20 = piVar8[5];
                  iVar21 = piVar8[6];
                  piVar10 = piVar8 + 7;
                  piVar8 = piVar8 + 8;
                  piVar6[7] = *piVar10;
                  piVar6[6] = iVar21;
                  piVar6[5] = iVar20;
                  piVar6[4] = iVar19;
                  piVar6 = piVar6 + 8;
                } while (piVar6 < piVar25);
              }
              piStack_28 = (int *)((int)piStack_28 + ((int)piVar25 - (int)piVar28));
              piVar6 = piVar25;
            }
            puVar24 = (undefined1 *)((int)piVar28 + (uVar3 - (int)piVar6));
            do {
              puVar24 = puVar24 + -1;
              *(char *)piVar6 = (char)*piStack_28;
              piStack_28 = (int *)((int)piStack_28 + 1);
              piVar6 = (int *)((int)piVar6 + 1);
            } while (puVar24 != (undefined1 *)0x0);
          }
          uStack_6c = uStack_6c - uVar3;
          piVar28 = piVar27;
        }
        param_1[0x1d7f] = 0;
        piStack_28 = param_1 + 0x1d80;
        piStack_84 = param_1 + 0x5d80;
        puVar24 = puVar2 + -0x20;
        auStack_34[0] = uVar26;
        if ((((int)uStack_6c < 0x10001) &&
            (piVar27 = (int *)(uStack_6c + uStack_68),
            (undefined1 *)((int)piVar28 + (int)piVar27) <= puVar24)) &&
           (piVar27 + 8 <= puVar2 + -(int)piVar28)) {
          piVar25 = (int *)((int)piVar28 + uStack_6c);
          piVar6 = (int *)((int)piStack_28 + uStack_6c);
          iVar19 = *piStack_28;
          iVar20 = param_1[0x1d81];
          iVar21 = param_1[0x1d82];
          piVar28[3] = param_1[0x1d83];
          piVar28[2] = iVar21;
          piVar28[1] = iVar20;
          *piVar28 = iVar19;
          if (0x10 < uStack_6c) {
            iVar20 = param_1[0x1d85];
            iVar21 = param_1[0x1d86];
            iVar19 = param_1[0x1d87];
            piVar28[4] = param_1[0x1d84];
            piVar28[7] = iVar19;
            piVar28[6] = iVar21;
            piVar28[5] = iVar20;
            if (0x10 < (int)(uStack_6c - 0x10)) {
              piVar10 = piVar28 + 8;
              piVar8 = param_1 + 0x1d8c;
              do {
                iVar21 = piVar8[-4];
                iVar20 = piVar8[-3];
                iVar19 = piVar8[-2];
                piVar10[3] = piVar8[-1];
                piVar10[2] = iVar19;
                piVar10[1] = iVar20;
                *piVar10 = iVar21;
                iVar30 = *piVar8;
                iVar21 = piVar8[1];
                iVar20 = piVar8[2];
                iVar19 = piVar8[3];
                piVar8 = piVar8 + 8;
                piVar10[4] = iVar30;
                piVar10[7] = iVar19;
                piVar10[6] = iVar20;
                piVar10[5] = iVar21;
                piVar10 = piVar10 + 8;
              } while (piVar10 < piVar25);
            }
          }
          piVar8 = (int *)((int)piVar25 - uVar26);
          piStack_28 = piVar6;
          if ((uint)((int)piVar25 - (int)piVar29) < uVar26) {
            if ((uint)((int)piVar25 - iVar1) < uVar26) goto LAB_719f1bec;
            iVar20 = (int)((int)piVar25 - uVar26) - (int)piVar29;
            iVar19 = uVar9 + iVar20;
            if (iVar19 + uStack_68 <= uVar9) {
              imp___aeabi_memmove(piVar25,iVar19,uStack_68);
              goto LAB_719f18d8;
            }
            imp___aeabi_memmove(piVar25,iVar19,-iVar20);
            uStack_68 = iVar20 + uStack_68;
            piVar25 = (int *)((int)piVar25 - iVar20);
            piVar8 = piVar29;
          }
          if (uVar26 < 0x10) {
            if (uVar26 < 8) {
              *(char *)piVar25 = (char)*piVar8;
              *(undefined1 *)((int)piVar25 + 1) = *(undefined1 *)((int)piVar8 + 1);
              *(undefined1 *)((int)piVar25 + 2) = *(undefined1 *)((int)piVar8 + 2);
              *(undefined1 *)((int)piVar25 + 3) = *(undefined1 *)((int)piVar8 + 3);
              iVar19 = *(int *)(&DAT_70060bb8 + uVar26 * 4);
              piVar25[1] = *(int *)((int)piVar8 + iVar19);
              piVar8 = (int *)(((int)piVar8 + iVar19) - *(int *)(&DAT_70060958 + uVar26 * 4));
            }
            else {
              iVar19 = *piVar8;
              piVar25[1] = piVar8[1];
              *piVar25 = iVar19;
            }
            if (8 < uStack_68) {
              piVar6 = piVar25 + 2;
              piVar10 = piVar8 + 2;
              if ((int)piVar6 - (int)piVar10 < 0x10) {
                do {
                  iVar19 = *piVar10;
                  piVar8 = piVar10 + 1;
                  piVar10 = piVar10 + 2;
                  piVar6[1] = *piVar8;
                  *piVar6 = iVar19;
                  piVar6 = piVar6 + 2;
                } while (piVar6 < (int *)((int)piVar25 + uStack_68));
              }
              else {
                iVar21 = *piVar10;
                iVar19 = piVar8[3];
                iVar20 = piVar8[4];
                piVar25[5] = piVar8[5];
                piVar25[4] = iVar20;
                piVar25[3] = iVar19;
                *piVar6 = iVar21;
                if (0x18 < (int)uStack_68) {
                  piVar8 = piVar8 + 6;
                  piVar6 = piVar25 + 6;
                  do {
                    iVar19 = *piVar8;
                    iVar21 = piVar8[1];
                    iVar20 = piVar8[2];
                    piVar6[3] = piVar8[3];
                    piVar6[2] = iVar20;
                    piVar6[1] = iVar21;
                    *piVar6 = iVar19;
                    iVar19 = piVar8[4];
                    iVar21 = piVar8[5];
                    iVar20 = piVar8[6];
                    piVar10 = piVar8 + 7;
                    piVar8 = piVar8 + 8;
                    piVar6[7] = *piVar10;
                    piVar6[6] = iVar20;
                    piVar6[5] = iVar21;
                    piVar6[4] = iVar19;
                    piVar6 = piVar6 + 8;
                  } while (piVar6 < (int *)((int)piVar25 + uStack_68));
                }
              }
            }
          }
          else {
            iVar19 = *piVar8;
            iVar20 = piVar8[1];
            iVar21 = piVar8[2];
            piVar25[3] = piVar8[3];
            piVar25[2] = iVar21;
            piVar25[1] = iVar20;
            *piVar25 = iVar19;
            if (0x10 < (int)uStack_68) {
              piVar8 = piVar8 + 4;
              piVar6 = piVar25 + 4;
              do {
                iVar19 = *piVar8;
                iVar21 = piVar8[1];
                iVar20 = piVar8[2];
                piVar6[3] = piVar8[3];
                piVar6[2] = iVar20;
                piVar6[1] = iVar21;
                *piVar6 = iVar19;
                iVar19 = piVar8[4];
                iVar21 = piVar8[5];
                iVar20 = piVar8[6];
                piVar10 = piVar8 + 7;
                piVar8 = piVar8 + 8;
                piVar6[7] = *piVar10;
                piVar6[6] = iVar20;
                piVar6[5] = iVar21;
                piVar6[4] = iVar19;
                piVar6 = piVar6 + 8;
              } while (piVar6 < (int *)((int)piVar25 + uStack_68));
            }
          }
        }
        else {
          piVar27 = (int *)FUN_719f3730(piVar28,puVar2,uStack_6c,uStack_68,uVar26,&piStack_28,
                                        piStack_84,piVar29,iVar1,uVar9);
        }
LAB_719f18d8:
        if ((int *)0xffffff88 < piVar27) {
          return piVar27;
        }
        piVar28 = (int *)((int)piVar28 + (int)piVar27);
        param_6 = param_6 + -1;
        if (param_6 != 0) {
          if (uStack_5c < 0x21) {
            if (puStack_58 < puVar4) {
              if (puStack_58 != param_4) {
                uVar3 = uStack_5c >> 3;
                if ((uint *)((int)puStack_58 - (uStack_5c >> 3)) < param_4) {
                  uVar3 = (int)puStack_58 - (int)param_4;
                }
                uStack_60 = *(uint *)((int)puStack_58 - uVar3);
                uStack_5c = uStack_5c + uVar3 * -8;
                puStack_58 = (uint *)((int)puStack_58 - uVar3);
              }
            }
            else {
              uVar3 = uStack_5c >> 3;
              uStack_60 = *(uint *)((int)puStack_58 - (uStack_5c >> 3));
              uStack_5c = uStack_5c & 7;
              puStack_58 = (uint *)((int)puStack_58 - uVar3);
            }
          }
LAB_719f1c24:
          puVar14 = (ushort *)(iVar16 + iStack_4c * 8);
          uVar12 = (uint)(byte)puVar14[1];
          puVar18 = (ushort *)(iVar22 + iStack_3c * 8);
          puVar23 = (ushort *)(iVar17 + iStack_44 * 8);
          piVar27 = (int *)(uint)(byte)puVar18[1];
          uVar3 = (uint)(byte)puVar23[1];
          iVar19 = *(int *)(puVar23 + 2);
          uVar5 = *(uint *)(puVar14 + 2);
          uVar26 = *(uint *)(puVar18 + 2);
          puVar7 = auStack_34;
          if (uVar3 < 2) {
            if (uVar3 == 0) {
              uVar3 = auStack_34[uVar5 == 0];
              puVar7 = auStack_34 + (uVar5 != 0);
            }
            else {
              uVar3 = uStack_5c & 0x1f;
              uStack_5c = uStack_5c + 1;
              iVar19 = (iVar19 + (uint)(uVar5 == 0)) - ((int)(uStack_60 << uVar3) >> 0x1f);
              if (iVar19 == 3) {
                uVar3 = auStack_34[0] - 1;
                if (auStack_34[0] - 1 == 0) {
                  uVar3 = auStack_34[0];
                }
              }
              else {
                uVar3 = auStack_34[iVar19];
                if (uVar3 == 0) {
                  uVar3 = 1;
                }
                if (iVar19 == 1) goto LAB_719f1e54;
              }
              auStack_34[2] = auStack_34[1];
            }
          }
          else {
            uVar11 = uStack_5c & 0x1f;
            uStack_5c = uStack_5c + uVar3;
            uVar11 = uStack_60 << uVar11;
            if ((param_7 == 0) || (uVar3 < 0x19)) {
              uVar3 = iVar19 + (uVar11 >> (-uVar3 & 0x1f));
              if (uStack_5c < 0x21) {
                if (puStack_58 < puVar4) {
                  if (puStack_58 != param_4) {
                    uVar11 = uStack_5c >> 3;
                    if ((uint *)((int)puStack_58 - (uStack_5c >> 3)) < param_4) {
                      uVar11 = (int)puStack_58 - (int)param_4;
                    }
                    uStack_60 = *(uint *)((int)puStack_58 - uVar11);
                    uStack_5c = uStack_5c + uVar11 * -8;
                    puStack_58 = (uint *)((int)puStack_58 - uVar11);
                  }
                }
                else {
                  uVar11 = uStack_5c >> 3;
                  uStack_60 = *(uint *)((int)puStack_58 - (uStack_5c >> 3));
                  uStack_5c = uStack_5c & 7;
                  puStack_58 = (uint *)((int)puStack_58 - uVar11);
                }
              }
            }
            else {
              uStack_5c = uStack_5c + -5;
              if (uStack_5c < 0x21) {
                if (puStack_58 < puVar4) {
                  if (puStack_58 == param_4) goto LAB_719f1e10;
                  uVar15 = uStack_5c >> 3;
                  if ((uint *)((int)puStack_58 - (uStack_5c >> 3)) < param_4) {
                    uVar15 = (int)puStack_58 - (int)param_4;
                  }
                  uVar13 = uStack_5c + uVar15 * -8;
                  uStack_60 = *(uint *)((int)puStack_58 - uVar15);
                }
                else {
                  uVar13 = uStack_5c & 7;
                  uVar15 = uStack_5c >> 3;
                  uStack_60 = *(uint *)((int)puStack_58 - (uStack_5c >> 3));
                }
                puStack_58 = (uint *)((int)puStack_58 - uVar15);
                uStack_5c = uVar13;
              }
LAB_719f1e10:
              uVar3 = iVar19 + (uVar11 >> (5 - uVar3 & 0x1f)) * 0x20 +
                      ((uStack_60 << (uStack_5c & 0x1f)) >> 0x1b);
              uStack_5c = uStack_5c + 5;
            }
            auStack_34[2] = auStack_34[1];
          }
LAB_719f1e54:
          auStack_34[1] = *puVar7;
          if (piVar27 != (int *)0x0) {
            uVar11 = uStack_5c & 0x1f;
            uStack_5c = uStack_5c + (int)piVar27;
            uVar26 = uVar26 + ((uStack_60 << uVar11) >> (-(int)piVar27 & 0x1fU));
          }
          if (((undefined1 *)0x13 < (undefined1 *)((int)piVar27 + uVar12)) && (uStack_5c < 0x21)) {
            if (puStack_58 < puVar4) {
              if (puStack_58 == param_4) goto joined_r0x719f1ee8;
              uVar11 = uStack_5c >> 3;
              if ((uint *)((int)puStack_58 - (uStack_5c >> 3)) < param_4) {
                uVar11 = (int)puStack_58 - (int)param_4;
              }
              uVar15 = uStack_5c + uVar11 * -8;
              uStack_60 = *(uint *)((int)puStack_58 - uVar11);
            }
            else {
              uVar15 = uStack_5c & 7;
              uVar11 = uStack_5c >> 3;
              uStack_60 = *(uint *)((int)puStack_58 - (uStack_5c >> 3));
            }
            puStack_58 = (uint *)((int)puStack_58 - uVar11);
            uStack_5c = uVar15;
          }
joined_r0x719f1ee8:
          if (uVar12 != 0) {
            uVar11 = uStack_5c & 0x1f;
            uStack_5c = uStack_5c + uVar12;
            uVar5 = uVar5 + ((uStack_60 << uVar11) >> (-uVar12 & 0x1f));
          }
          if (uStack_5c < 0x21) {
            if (puStack_58 < puVar4) {
              if (puStack_58 == param_4) goto LAB_719f1fac;
              uVar12 = uStack_5c >> 3;
              if ((uint *)((int)puStack_58 - (uStack_5c >> 3)) < param_4) {
                uVar12 = (int)puStack_58 - (int)param_4;
              }
              uVar11 = uStack_5c + uVar12 * -8;
              uStack_60 = *(uint *)((int)puStack_58 - uVar12);
            }
            else {
              uVar11 = uStack_5c & 7;
              uVar12 = uStack_5c >> 3;
              uStack_60 = *(uint *)((int)puStack_58 - (uStack_5c >> 3));
            }
            puStack_58 = (uint *)((int)puStack_58 - uVar12);
            uStack_5c = uVar11;
          }
LAB_719f1fac:
          iVar19 = uStack_5c + *(byte *)((int)puVar14 + 3);
          iStack_4c = (*(uint *)(&DAT_7008e6ac + (uint)*(byte *)((int)puVar14 + 3) * 4) &
                      uStack_60 >> (-iVar19 & 0x1fU)) + (uint)*puVar14;
          uStack_5c = iVar19 + (uint)*(byte *)((int)puVar18 + 3);
          iStack_3c = (*(uint *)(&DAT_7008e6ac + (uint)*(byte *)((int)puVar18 + 3) * 4) &
                      uStack_60 >> (-uStack_5c & 0x1f)) + (uint)*puVar18;
          if (uStack_5c < 0x21) {
            if (puStack_58 < puVar4) {
              if (puStack_58 == param_4) goto LAB_719f206c;
              uVar12 = uStack_5c >> 3;
              if ((uint *)((int)puStack_58 - (uStack_5c >> 3)) < param_4) {
                uVar12 = (int)puStack_58 - (int)param_4;
              }
              uVar11 = uStack_5c + uVar12 * -8;
              uStack_60 = *(uint *)((int)puStack_58 - uVar12);
            }
            else {
              uVar11 = uStack_5c & 7;
              uVar12 = uStack_5c >> 3;
              uStack_60 = *(uint *)((int)puStack_58 - (uStack_5c >> 3));
            }
            puStack_58 = (uint *)((int)puStack_58 - uVar12);
            uStack_5c = uVar11;
          }
LAB_719f206c:
          uStack_5c = uStack_5c + *(byte *)((int)puVar23 + 3);
          iStack_44 = (*(uint *)(&DAT_7008e6ac + (uint)*(byte *)((int)puVar23 + 3) * 4) &
                      uStack_60 >> (-uStack_5c & 0x1f)) + (uint)*puVar23;
          piVar6 = (int *)((int)piStack_28 + uVar5);
          bVar32 = piStack_84 <= piVar6;
          bVar31 = piVar6 == piStack_84;
          if (!bVar32 || bVar31) {
            piVar27 = (int *)(uVar5 + uVar26);
            bVar32 = puVar24 <= (undefined1 *)((int)piVar28 + (int)piVar27);
            bVar31 = (undefined1 *)((int)piVar28 + (int)piVar27) == puVar24;
          }
          auStack_34[0] = uVar3;
          if ((bVar32 && !bVar31) || (puVar2 + -(int)piVar28 < piVar27 + 8)) {
            piVar27 = (int *)FUN_719f3730(piVar28,puVar2,uVar5,uVar26,uVar3,&piStack_28,piStack_84,
                                          piVar29,iVar1,uVar9);
          }
          else {
            piVar25 = (int *)((int)piVar28 + uVar5);
            iVar19 = *piStack_28;
            iVar21 = piStack_28[1];
            iVar20 = piStack_28[3];
            piVar28[2] = piStack_28[2];
            piVar28[3] = iVar20;
            piVar28[1] = iVar21;
            *piVar28 = iVar19;
            if (0x10 < uVar5) {
              iVar19 = piStack_28[4];
              iVar21 = piStack_28[5];
              iVar20 = piStack_28[6];
              piVar28[7] = piStack_28[7];
              piVar28[6] = iVar20;
              piVar28[5] = iVar21;
              piVar28[4] = iVar19;
              if (0x10 < (int)(uVar5 - 0x10)) {
                piVar8 = piVar28 + 8;
                do {
                  iVar19 = piStack_28[8];
                  iVar21 = piStack_28[9];
                  iVar20 = piStack_28[10];
                  piVar8[3] = piStack_28[0xb];
                  piVar8[2] = iVar20;
                  piVar8[1] = iVar21;
                  *piVar8 = iVar19;
                  iVar19 = piStack_28[0xc];
                  iVar21 = piStack_28[0xd];
                  iVar20 = piStack_28[0xe];
                  piVar8[7] = piStack_28[0xf];
                  piVar8[6] = iVar20;
                  piVar8[5] = iVar21;
                  piVar8[4] = iVar19;
                  piVar8 = piVar8 + 8;
                  piStack_28 = piStack_28 + 8;
                } while (piVar8 < piVar25);
              }
            }
            piVar8 = (int *)((int)piVar25 - uVar3);
            piStack_28 = piVar6;
            if ((uint)((int)piVar25 - (int)piVar29) < uVar3) {
              if ((uint)((int)piVar25 - iVar1) < uVar3) goto LAB_719f1bec;
              iVar20 = (int)((int)piVar25 - uVar3) - (int)piVar29;
              iVar19 = uVar9 + iVar20;
              if (iVar19 + uVar26 <= uVar9) {
                imp___aeabi_memmove(piVar25,iVar19,uVar26);
                goto LAB_719f2248;
              }
              imp___aeabi_memmove(piVar25,iVar19,-iVar20);
              piVar25 = (int *)((int)piVar25 - iVar20);
              uVar26 = iVar20 + uVar26;
              piVar8 = piVar29;
            }
            if (uVar3 < 0x10) {
              if (uVar3 < 8) {
                *(char *)piVar25 = (char)*piVar8;
                *(undefined1 *)((int)piVar25 + 1) = *(undefined1 *)((int)piVar8 + 1);
                *(undefined1 *)((int)piVar25 + 2) = *(undefined1 *)((int)piVar8 + 2);
                *(undefined1 *)((int)piVar25 + 3) = *(undefined1 *)((int)piVar8 + 3);
                iVar19 = *(int *)(&DAT_70060bb8 + uVar3 * 4);
                piVar25[1] = *(int *)((int)piVar8 + iVar19);
                piVar8 = (int *)(((int)piVar8 + iVar19) - *(int *)(&DAT_70060958 + uVar3 * 4));
              }
              else {
                iVar19 = *piVar8;
                piVar25[1] = piVar8[1];
                *piVar25 = iVar19;
              }
              if (8 < uVar26) {
                piVar6 = piVar25 + 2;
                piVar10 = piVar8 + 2;
                if ((int)piVar6 - (int)piVar10 < 0x10) {
                  do {
                    iVar19 = *piVar10;
                    piVar8 = piVar10 + 1;
                    piVar10 = piVar10 + 2;
                    piVar6[1] = *piVar8;
                    *piVar6 = iVar19;
                    piVar6 = piVar6 + 2;
                  } while (piVar6 < (int *)((int)piVar25 + uVar26));
                }
                else {
                  iVar21 = *piVar10;
                  iVar20 = piVar8[3];
                  iVar19 = piVar8[4];
                  piVar25[5] = piVar8[5];
                  piVar25[4] = iVar19;
                  piVar25[3] = iVar20;
                  *piVar6 = iVar21;
                  if (0x18 < (int)uVar26) {
                    piVar8 = piVar8 + 6;
                    piVar6 = piVar25 + 6;
                    do {
                      iVar19 = *piVar8;
                      iVar21 = piVar8[1];
                      iVar20 = piVar8[2];
                      piVar6[3] = piVar8[3];
                      piVar6[2] = iVar20;
                      piVar6[1] = iVar21;
                      *piVar6 = iVar19;
                      iVar19 = piVar8[4];
                      iVar21 = piVar8[5];
                      iVar20 = piVar8[6];
                      piVar10 = piVar8 + 7;
                      piVar8 = piVar8 + 8;
                      piVar6[7] = *piVar10;
                      piVar6[6] = iVar20;
                      piVar6[5] = iVar21;
                      piVar6[4] = iVar19;
                      piVar6 = piVar6 + 8;
                    } while (piVar6 < (int *)((int)piVar25 + uVar26));
                  }
                }
              }
            }
            else {
              iVar19 = *piVar8;
              iVar20 = piVar8[1];
              iVar21 = piVar8[2];
              piVar25[3] = piVar8[3];
              piVar25[2] = iVar21;
              piVar25[1] = iVar20;
              *piVar25 = iVar19;
              if (0x10 < (int)uVar26) {
                piVar8 = piVar8 + 4;
                piVar6 = piVar25 + 4;
                do {
                  iVar19 = *piVar8;
                  iVar21 = piVar8[1];
                  iVar20 = piVar8[2];
                  piVar6[3] = piVar8[3];
                  piVar6[2] = iVar20;
                  piVar6[1] = iVar21;
                  *piVar6 = iVar19;
                  iVar19 = piVar8[4];
                  iVar21 = piVar8[5];
                  iVar20 = piVar8[6];
                  piVar10 = piVar8 + 7;
                  piVar8 = piVar8 + 8;
                  piVar6[7] = *piVar10;
                  piVar6[6] = iVar20;
                  piVar6[5] = iVar21;
                  piVar6[4] = iVar19;
                  piVar6 = piVar6 + 8;
                } while (piVar6 < (int *)((int)piVar25 + uVar26));
              }
            }
          }
LAB_719f2248:
          if ((int *)0xffffff88 < piVar27) {
            return piVar27;
          }
          piVar28 = (int *)((int)piVar28 + (int)piVar27);
          param_6 = param_6 + -1;
          if (param_6 != 0) {
            if (uStack_5c < 0x21) {
              if (puStack_58 < puVar4) {
                if (puStack_58 != param_4) {
                  uVar3 = uStack_5c >> 3;
                  if ((uint *)((int)puStack_58 - (uStack_5c >> 3)) < param_4) {
                    uVar3 = (int)puStack_58 - (int)param_4;
                  }
                  uStack_60 = *(uint *)((int)puStack_58 - uVar3);
                  uStack_5c = uStack_5c + uVar3 * -8;
                  puStack_58 = (uint *)((int)puStack_58 - uVar3);
                }
              }
              else {
                uVar3 = uStack_5c >> 3;
                uStack_60 = *(uint *)((int)puStack_58 - (uStack_5c >> 3));
                uStack_5c = uStack_5c & 7;
                puStack_58 = (uint *)((int)puStack_58 - uVar3);
              }
            }
            goto LAB_719f1c24;
          }
        }
LAB_719f24e4:
        if (uStack_5c < 0x21) {
          if ((uStack_5c != 0x20) || (puVar4 <= puStack_58)) goto LAB_719f1bec;
          if (puStack_58 != param_4) {
            return (int *)0xffffffec;
          }
        }
        param_1[0x1a0b] = auStack_34[0];
        param_1[0x1a0c] = auStack_34[1];
        param_1[0x1a0d] = auStack_34[2];
        goto LAB_719f0560;
      }
    }
LAB_719f1bec:
    piVar28 = (int *)0xffffffec;
  }
  return piVar28;
}


// =========================================================================
// Function: FUN_719f2850
// Entry: 0x719f2850 | Size: 3204 bytes
// =========================================================================

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_719f2850(int *param_1,undefined4 *param_2,int param_3,uint *param_4,uint param_5,
                 int param_6,int param_7)

{
  ushort *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  ushort *puVar16;
  uint uVar17;
  undefined4 uVar18;
  int iVar19;
  uint uVar20;
  undefined4 *puVar21;
  ushort *puVar22;
  int iVar23;
  uint uVar24;
  undefined4 uVar25;
  int iVar26;
  uint uVar27;
  undefined4 *puVar28;
  uint uVar29;
  undefined4 *puVar30;
  uint uVar31;
  bool bVar32;
  bool bVar33;
  int iStack_78;
  uint uStack_60;
  uint uStack_5c;
  uint *puStack_58;
  uint uStack_4c;
  uint uStack_44;
  uint uStack_3c;
  uint auStack_34 [3];
  undefined4 *puStack_28;
  
  puVar30 = (undefined4 *)param_1[0x1d2c];
  if (param_1[0x1d7f] == 0) {
    param_3 = (int)param_2 + param_3;
  }
  else {
    param_3 = param_1[0x1d7d];
  }
  iVar5 = param_1[0x1d2d];
  uVar6 = param_1[0x1d2e];
  puStack_28 = (undefined4 *)param_1[0x1d5e];
  puVar9 = (undefined4 *)((int)puStack_28 + param_1[0x1d62]);
  puVar28 = param_2;
  if (param_6 == 0) goto LAB_719f293c;
  param_1[0x1d43] = 1;
  auStack_34[0] = param_1[0x1a0b];
  auStack_34[1] = param_1[0x1a0c];
  auStack_34[2] = param_1[0x1a0d];
  if (param_5 == 0) {
    return 0xffffffec;
  }
  puVar10 = param_4 + 1;
  if (param_5 < 4) {
    uStack_60 = (uint)(byte)*param_4;
    if (param_5 == 2) {
LAB_719f2998:
      uStack_60 = uStack_60 + (uint)*(byte *)((int)param_4 + 1) * 0x100;
    }
    else if (param_5 == 3) {
      uStack_60 = uStack_60 | (uint)*(byte *)((int)param_4 + 2) << 0x10;
      goto LAB_719f2998;
    }
    uVar27 = (uint)*(byte *)((int)param_4 + (param_5 - 1));
    if (uVar27 == 0) {
      return 0xffffffec;
    }
    uVar29 = 0;
    iVar11 = LZCOUNT(uVar27) + param_5 * -8 + 9;
    puStack_58 = param_4;
  }
  else {
    uVar29 = param_5 - 4;
    puStack_58 = (uint *)((int)param_4 + uVar29);
    uStack_60 = *puStack_58;
    if (uStack_60 >> 0x18 == 0) {
      return 0xffffffec;
    }
    iVar11 = 8 - (LZCOUNT(uStack_60 >> 0x18) ^ 0x1fU);
    if (0xffffff88 < param_5) {
      return 0xffffffec;
    }
  }
  iVar23 = *param_1;
  iVar7 = *(int *)(iVar23 + 4);
  uStack_5c = iVar7 + iVar11;
  iStack_78 = param_6;
  uStack_4c = *(uint *)(&DAT_7008e6ac + iVar7 * 4) & uStack_60 >> (-uStack_5c & 0x1f);
  if (uStack_5c < 0x21) {
    if ((int)uVar29 < 4) {
      if (uVar29 == 0) {
        uVar29 = 0;
        goto LAB_719f2a6c;
      }
      uVar27 = uVar29;
      if (param_4 <= (uint *)((int)param_4 + (uVar29 - (uStack_5c >> 3)))) {
        uVar27 = uStack_5c >> 3;
      }
      uStack_5c = uStack_5c + uVar27 * -8;
    }
    else {
      uVar27 = uStack_5c >> 3;
      uStack_5c = uStack_5c & 7;
    }
    uVar29 = uVar29 - uVar27;
    puStack_58 = (uint *)((int)param_4 + uVar29);
    uStack_60 = *(uint *)((int)param_4 + uVar29);
  }
LAB_719f2a6c:
  iVar7 = param_1[2];
  iVar11 = *(int *)(iVar7 + 4);
  uStack_5c = iVar11 + uStack_5c;
  uStack_44 = *(uint *)(&DAT_7008e6ac + iVar11 * 4) & uStack_60 >> (-uStack_5c & 0x1f);
  if (uStack_5c < 0x21) {
    if ((int)uVar29 < 4) {
      if (uVar29 == 0) {
        uVar29 = 0;
        goto LAB_719f2b00;
      }
      uVar27 = uVar29;
      if (param_4 <= (uint *)((int)param_4 + (uVar29 - (uStack_5c >> 3)))) {
        uVar27 = uStack_5c >> 3;
      }
      uStack_5c = uStack_5c + uVar27 * -8;
    }
    else {
      uVar27 = uStack_5c >> 3;
      uStack_5c = uStack_5c & 7;
    }
    uVar29 = uVar29 - uVar27;
    puStack_58 = (uint *)((int)param_4 + uVar29);
    uStack_60 = *(uint *)((int)param_4 + uVar29);
  }
LAB_719f2b00:
  iVar26 = param_1[1];
  iVar11 = *(int *)(iVar26 + 4);
  uStack_5c = iVar11 + uStack_5c;
  uStack_3c = *(uint *)(&DAT_7008e6ac + iVar11 * 4) & uStack_60 >> (-uStack_5c & 0x1f);
  if (uStack_5c < 0x21) {
    if ((int)uVar29 < 4) {
      if (uVar29 == 0) goto LAB_719f2b88;
      uVar27 = uVar29;
      if (param_4 <= (uint *)((int)param_4 + (uVar29 - (uStack_5c >> 3)))) {
        uVar27 = uStack_5c >> 3;
      }
      uStack_5c = uStack_5c + uVar27 * -8;
    }
    else {
      uVar27 = uStack_5c >> 3;
      uStack_5c = uStack_5c & 7;
    }
    puStack_58 = (uint *)((int)param_4 + (uVar29 - uVar27));
    uStack_60 = *puStack_58;
  }
LAB_719f2b88:
LAB_719f2bcc:
  do {
    puVar16 = (ushort *)(iVar23 + 8 + uStack_4c * 8);
    puVar1 = (ushort *)(iVar26 + 8 + uStack_3c * 8);
    uVar13 = (uint)(byte)puVar16[1];
    puVar22 = (ushort *)(iVar7 + 8 + uStack_44 * 8);
    uVar29 = (uint)(byte)puVar22[1];
    uVar27 = (uint)(byte)puVar1[1];
    iVar11 = *(int *)(puVar22 + 2);
    uVar12 = *(uint *)(puVar16 + 2);
    uVar24 = *(uint *)(puVar1 + 2);
    puVar2 = auStack_34;
    if (uVar29 < 2) {
      if (uVar29 == 0) {
        uVar29 = auStack_34[uVar12 == 0];
        puVar2 = auStack_34 + (uVar12 != 0);
      }
      else {
        uVar29 = uStack_5c & 0x1f;
        uStack_5c = uStack_5c + 1;
        iVar11 = (iVar11 + (uint)(uVar12 == 0)) - ((int)(uStack_60 << uVar29) >> 0x1f);
        if (iVar11 == 3) {
          uVar29 = auStack_34[0] - 1;
          if (auStack_34[0] - 1 == 0) {
            uVar29 = auStack_34[0];
          }
        }
        else {
          uVar29 = auStack_34[iVar11];
          if (uVar29 == 0) {
            uVar29 = 1;
          }
          if (iVar11 == 1) goto LAB_719f2dc0;
        }
        auStack_34[2] = auStack_34[1];
      }
    }
    else {
      uVar31 = uStack_5c + uVar29;
      uVar3 = uStack_60 << (uStack_5c & 0x1f);
      if ((param_7 == 0) || (uVar29 < 0x19)) {
        uVar29 = iVar11 + (uVar3 >> (-uVar29 & 0x1f));
        if (uVar31 < 0x21) {
          if (puStack_58 < puVar10) {
            if (puStack_58 == param_4) goto LAB_719f2db4;
            uVar3 = uVar31 >> 3;
            if ((uint *)((int)puStack_58 - (uVar31 >> 3)) < param_4) {
              uVar3 = (int)puStack_58 - (int)param_4;
            }
            uVar17 = uVar31 + uVar3 * -8;
            uStack_60 = *(uint *)((int)puStack_58 - uVar3);
          }
          else {
            uVar17 = uVar31 & 7;
            uVar3 = uVar31 >> 3;
            uStack_60 = *(uint *)((int)puStack_58 - (uVar31 >> 3));
          }
          puStack_58 = (uint *)((int)puStack_58 - uVar3);
          uVar31 = uVar17;
        }
      }
      else {
        uVar17 = uVar31 - 5;
        if (uVar17 < 0x21) {
          if (puStack_58 < puVar10) {
            if (puStack_58 == param_4) goto LAB_719f2d8c;
            uVar31 = uVar17 >> 3;
            if ((uint *)((int)puStack_58 - (uVar17 >> 3)) < param_4) {
              uVar31 = (int)puStack_58 - (int)param_4;
            }
            uVar20 = uVar17 + uVar31 * -8;
            uStack_60 = *(uint *)((int)puStack_58 - uVar31);
          }
          else {
            uVar20 = uVar17 & 7;
            uVar31 = uVar17 >> 3;
            uStack_60 = *(uint *)((int)puStack_58 - (uVar17 >> 3));
          }
          puStack_58 = (uint *)((int)puStack_58 - uVar31);
          uVar17 = uVar20;
        }
LAB_719f2d8c:
        uVar31 = uVar17 + 5;
        uVar29 = iVar11 + (uVar3 >> (5 - uVar29 & 0x1f)) * 0x20 +
                 ((uStack_60 << (uVar17 & 0x1f)) >> 0x1b);
      }
LAB_719f2db4:
      auStack_34[2] = auStack_34[1];
      uStack_5c = uVar31;
    }
LAB_719f2dc0:
    auStack_34[1] = *puVar2;
    if (uVar27 != 0) {
      uVar3 = uStack_5c & 0x1f;
      uStack_5c = uStack_5c + uVar27;
      uVar24 = uVar24 + ((uStack_60 << uVar3) >> (-uVar27 & 0x1f));
    }
    if ((0x13 < uVar27 + uVar13) && (uStack_5c < 0x21)) {
      if (puStack_58 < puVar10) {
        if (puStack_58 == param_4) goto joined_r0x719f2e58;
        uVar3 = uStack_5c >> 3;
        if ((uint *)((int)puStack_58 - (uStack_5c >> 3)) < param_4) {
          uVar3 = (int)puStack_58 - (int)param_4;
        }
        uVar31 = uStack_5c + uVar3 * -8;
        uStack_60 = *(uint *)((int)puStack_58 - uVar3);
      }
      else {
        uVar31 = uStack_5c & 7;
        uVar3 = uStack_5c >> 3;
        uStack_60 = *(uint *)((int)puStack_58 - (uStack_5c >> 3));
      }
      puStack_58 = (uint *)((int)puStack_58 - uVar3);
      uStack_5c = uVar31;
    }
joined_r0x719f2e58:
    if (uVar13 != 0) {
      uVar3 = uStack_5c & 0x1f;
      uStack_5c = uStack_5c + uVar13;
      uVar12 = uVar12 + ((uStack_60 << uVar3) >> (-uVar13 & 0x1f));
    }
    if (uStack_5c < 0x21) {
      if (puStack_58 < puVar10) {
        if (puStack_58 == param_4) goto LAB_719f2eec;
        uVar13 = uStack_5c >> 3;
        if ((uint *)((int)puStack_58 - (uStack_5c >> 3)) < param_4) {
          uVar13 = (int)puStack_58 - (int)param_4;
        }
        uVar3 = uStack_5c + uVar13 * -8;
        uStack_60 = *(uint *)((int)puStack_58 - uVar13);
      }
      else {
        uVar3 = uStack_5c & 7;
        uVar13 = uStack_5c >> 3;
        uStack_60 = *(uint *)((int)puStack_58 - (uStack_5c >> 3));
      }
      puStack_58 = (uint *)((int)puStack_58 - uVar13);
      uStack_5c = uVar3;
    }
LAB_719f2eec:
    iVar11 = uStack_5c + *(byte *)((int)puVar16 + 3);
    uStack_4c = (*(uint *)(&DAT_7008e6ac + (uint)*(byte *)((int)puVar16 + 3) * 4) &
                uStack_60 >> (-iVar11 & 0x1fU)) + (uint)*puVar16;
    uStack_5c = iVar11 + (uint)*(byte *)((int)puVar1 + 3);
    uStack_3c = (*(uint *)(&DAT_7008e6ac + (uint)*(byte *)((int)puVar1 + 3) * 4) &
                uStack_60 >> (-uStack_5c & 0x1f)) + (uint)*puVar1;
    if (uStack_5c < 0x21) {
      if (puStack_58 < puVar10) {
        if (puStack_58 == param_4) goto LAB_719f2fa8;
        uVar13 = uStack_5c >> 3;
        if ((uint *)((int)puStack_58 - (uStack_5c >> 3)) < param_4) {
          uVar13 = (int)puStack_58 - (int)param_4;
        }
        uVar3 = uStack_5c + uVar13 * -8;
        uStack_60 = *(uint *)((int)puStack_58 - uVar13);
      }
      else {
        uVar3 = uStack_5c & 7;
        uVar13 = uStack_5c >> 3;
        uStack_60 = *(uint *)((int)puStack_58 - (uStack_5c >> 3));
      }
      puStack_58 = (uint *)((int)puStack_58 - uVar13);
      uStack_5c = uVar3;
    }
LAB_719f2fa8:
    uStack_5c = uStack_5c + *(byte *)((int)puVar22 + 3);
    uStack_44 = (*(uint *)(&DAT_7008e6ac + (uint)*(byte *)((int)puVar22 + 3) * 4) &
                uStack_60 >> (-uStack_5c & 0x1f)) + (uint)*puVar22;
    puVar8 = (undefined4 *)((int)puStack_28 + uVar12);
    bVar33 = puVar9 <= puVar8;
    bVar32 = puVar8 == puVar9;
    if (!bVar33 || bVar32) {
      uVar27 = uVar12 + uVar24;
      bVar33 = param_3 - 0x20U <= (int)puVar28 + uVar27;
      bVar32 = (int)puVar28 + uVar27 == param_3 - 0x20U;
    }
    auStack_34[0] = uVar29;
    if ((bVar33 && !bVar32) || ((uint)(param_3 - (int)puVar28) < uVar27 + 0x20)) {
      uVar27 = FUN_719f3730(puVar28,param_3,uVar12,uVar24,uVar29,&puStack_28,puVar9,puVar30,iVar5,
                            uVar6);
    }
    else {
      puVar21 = (undefined4 *)((int)puVar28 + uVar12);
      uVar14 = *puStack_28;
      uVar18 = puStack_28[1];
      uVar25 = puStack_28[2];
      puVar28[3] = puStack_28[3];
      puVar28[2] = uVar25;
      puVar28[1] = uVar18;
      *puVar28 = uVar14;
      if (0x10 < uVar12) {
        uVar14 = puStack_28[4];
        uVar25 = puStack_28[5];
        uVar18 = puStack_28[6];
        puVar28[7] = puStack_28[7];
        puVar28[6] = uVar18;
        puVar28[5] = uVar25;
        puVar28[4] = uVar14;
        if (0x10 < (int)(uVar12 - 0x10)) {
          puVar4 = puVar28 + 8;
          do {
            uVar14 = puStack_28[8];
            uVar25 = puStack_28[9];
            uVar18 = puStack_28[10];
            puVar4[3] = puStack_28[0xb];
            puVar4[2] = uVar18;
            puVar4[1] = uVar25;
            *puVar4 = uVar14;
            uVar14 = puStack_28[0xc];
            uVar25 = puStack_28[0xd];
            uVar18 = puStack_28[0xe];
            puVar4[7] = puStack_28[0xf];
            puVar4[6] = uVar18;
            puVar4[5] = uVar25;
            puVar4[4] = uVar14;
            puVar4 = puVar4 + 8;
            puStack_28 = puStack_28 + 8;
          } while (puVar4 < puVar21);
        }
      }
      puVar4 = (undefined4 *)((int)puVar21 - uVar29);
      puStack_28 = puVar8;
      if ((uint)((int)puVar21 - (int)puVar30) < uVar29) {
        if ((uint)((int)puVar21 - iVar5) < uVar29) {
          return 0xffffffec;
        }
        iVar19 = (int)((int)puVar21 - uVar29) - (int)puVar30;
        iVar11 = uVar6 + iVar19;
        if (iVar11 + uVar24 <= uVar6) {
          imp___aeabi_memmove(puVar21,iVar11,uVar24);
          goto LAB_719f31c8;
        }
        imp___aeabi_memmove(puVar21,iVar11,-iVar19);
        uVar24 = iVar19 + uVar24;
        puVar21 = (undefined4 *)((int)puVar21 - iVar19);
        puVar4 = puVar30;
      }
      if (uVar29 < 0x10) {
        if (uVar29 < 8) {
          *(undefined1 *)puVar21 = *(undefined1 *)puVar4;
          *(undefined1 *)((int)puVar21 + 1) = *(undefined1 *)((int)puVar4 + 1);
          *(undefined1 *)((int)puVar21 + 2) = *(undefined1 *)((int)puVar4 + 2);
          *(undefined1 *)((int)puVar21 + 3) = *(undefined1 *)((int)puVar4 + 3);
          iVar11 = *(int *)(&DAT_70060bb8 + uVar29 * 4);
          puVar21[1] = *(undefined4 *)((int)puVar4 + iVar11);
          puVar4 = (undefined4 *)(((int)puVar4 + iVar11) - *(int *)(&DAT_70060958 + uVar29 * 4));
        }
        else {
          uVar14 = *puVar4;
          puVar21[1] = puVar4[1];
          *puVar21 = uVar14;
        }
        if (8 < uVar24) {
          puVar8 = puVar21 + 2;
          puVar15 = puVar4 + 2;
          if ((int)puVar8 - (int)puVar15 < 0x10) {
            do {
              uVar14 = *puVar15;
              puVar4 = puVar15 + 1;
              puVar15 = puVar15 + 2;
              puVar8[1] = *puVar4;
              *puVar8 = uVar14;
              puVar8 = puVar8 + 2;
            } while (puVar8 < (undefined4 *)((int)puVar21 + uVar24));
          }
          else {
            uVar25 = *puVar15;
            uVar18 = puVar4[3];
            uVar14 = puVar4[4];
            puVar21[5] = puVar4[5];
            puVar21[4] = uVar14;
            puVar21[3] = uVar18;
            *puVar8 = uVar25;
            if (0x18 < (int)uVar24) {
              puVar4 = puVar4 + 6;
              puVar8 = puVar21 + 6;
              do {
                uVar14 = *puVar4;
                uVar25 = puVar4[1];
                uVar18 = puVar4[2];
                puVar8[3] = puVar4[3];
                puVar8[2] = uVar18;
                puVar8[1] = uVar25;
                *puVar8 = uVar14;
                uVar14 = puVar4[4];
                uVar25 = puVar4[5];
                uVar18 = puVar4[6];
                puVar15 = puVar4 + 7;
                puVar4 = puVar4 + 8;
                puVar8[7] = *puVar15;
                puVar8[6] = uVar18;
                puVar8[5] = uVar25;
                puVar8[4] = uVar14;
                puVar8 = puVar8 + 8;
              } while (puVar8 < (undefined4 *)((int)puVar21 + uVar24));
            }
          }
        }
      }
      else {
        uVar14 = *puVar4;
        uVar18 = puVar4[1];
        uVar25 = puVar4[2];
        puVar21[3] = puVar4[3];
        puVar21[2] = uVar25;
        puVar21[1] = uVar18;
        *puVar21 = uVar14;
        if (0x10 < (int)uVar24) {
          puVar4 = puVar4 + 4;
          puVar8 = puVar21 + 4;
          do {
            uVar14 = *puVar4;
            uVar25 = puVar4[1];
            uVar18 = puVar4[2];
            puVar8[3] = puVar4[3];
            puVar8[2] = uVar18;
            puVar8[1] = uVar25;
            *puVar8 = uVar14;
            uVar14 = puVar4[4];
            uVar25 = puVar4[5];
            uVar18 = puVar4[6];
            puVar15 = puVar4 + 7;
            puVar4 = puVar4 + 8;
            puVar8[7] = *puVar15;
            puVar8[6] = uVar18;
            puVar8[5] = uVar25;
            puVar8[4] = uVar14;
            puVar8 = puVar8 + 8;
          } while (puVar8 < (undefined4 *)((int)puVar21 + uVar24));
        }
      }
    }
LAB_719f31c8:
    if (0xffffff88 < uVar27) {
      return uVar27;
    }
    puVar28 = (undefined4 *)((int)puVar28 + uVar27);
    iStack_78 = iStack_78 + -1;
    if (iStack_78 == 0) break;
    if (uStack_5c < 0x21) {
      if (puStack_58 < puVar10) {
        if (puStack_58 == param_4) goto LAB_719f2bcc;
        uVar27 = uStack_5c >> 3;
        if ((uint *)((int)puStack_58 - (uStack_5c >> 3)) < param_4) {
          uVar27 = (int)puStack_58 - (int)param_4;
        }
        uVar29 = uStack_5c + uVar27 * -8;
        uStack_60 = *(uint *)((int)puStack_58 - uVar27);
      }
      else {
        uVar29 = uStack_5c & 7;
        uVar27 = uStack_5c >> 3;
        uStack_60 = *(uint *)((int)puStack_58 - (uStack_5c >> 3));
      }
      puStack_58 = (uint *)((int)puStack_58 - uVar27);
      uStack_5c = uVar29;
    }
  } while( true );
  if (uStack_5c < 0x21) {
    if (uStack_5c != 0x20) {
      return 0xffffffec;
    }
    if (puVar10 <= puStack_58) {
      return 0xffffffec;
    }
    if (puStack_58 != param_4) {
      return 0xffffffec;
    }
  }
  param_1[0x1a0b] = auStack_34[0];
  param_1[0x1a0c] = auStack_34[1];
  param_1[0x1a0d] = auStack_34[2];
LAB_719f293c:
  uVar27 = 0xffffffba;
  uVar6 = (int)puVar9 - (int)puStack_28;
  if (uVar6 <= (uint)(param_3 - (int)puVar28)) {
    if (puVar28 == (undefined4 *)0x0) {
      iVar5 = 0;
    }
    else {
      imp___aeabi_memcpy(puVar28,puStack_28,uVar6);
      iVar5 = (int)puVar28 + uVar6;
    }
    uVar27 = iVar5 - (int)param_2;
  }
  return uVar27;
}


// =========================================================================
// Function: FUN_719f363c
// Entry: 0x719f363c | Size: 56 bytes
// =========================================================================

void FUN_719f363c(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (param_3 != 0) {
    param_1 = param_1 + 0x1d2b;
    iVar1 = *param_1;
  }
  if (param_3 != 0 && iVar1 != param_2) {
    iVar2 = param_1[1];
    param_1[3] = iVar1;
    *param_1 = param_2;
    param_1[1] = param_2;
    param_1[2] = param_2 + (iVar2 - iVar1);
    return;
  }
  return;
}


// =========================================================================
// Function: kKUfXdHrumEqQzgUuRPz
// Entry: 0x719f368c | Size: 112 bytes
// =========================================================================

void kKUfXdHrumEqQzgUuRPz(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(param_1 + 0x74ac);
  iVar1 = *piVar2;
  if (param_3 != 0 && iVar1 != param_2) {
    iVar3 = *(int *)(param_1 + 0x74b0);
    *(int *)(param_1 + 0x74b8) = iVar1;
    *piVar2 = param_2;
    *(int *)(param_1 + 0x74b0) = param_2;
    *(int *)(param_1 + 0x74b4) = param_2 + (iVar3 - iVar1);
  }
  iVar1 = FUN_719ed2e8(param_1,param_2,param_3,param_4,param_5,0,0);
  *piVar2 = param_2 + iVar1;
  return;
}


// =========================================================================
// Function: FUN_719f3730
// Entry: 0x719f3730 | Size: 608 bytes
// =========================================================================

uint FUN_719f3730(undefined4 *param_1,int param_2,uint param_3,int param_4,uint param_5,
                 undefined4 *param_6,int param_7,int param_8,int param_9,uint param_10)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  
  uVar11 = param_3 + param_4;
  uVar12 = 0xffffffba;
  if (uVar11 <= (uint)(param_2 - (int)param_1)) {
    puVar8 = (undefined4 *)*param_6;
    uVar12 = 0xffffffec;
    if (param_3 <= (uint)(param_7 - (int)puVar8)) {
      puVar2 = (undefined4 *)((int)param_1 + param_3);
      puVar3 = (undefined4 *)(param_2 + -0x20);
      if ((int)param_3 < 8) {
        puVar5 = puVar8;
        if (0 < (int)param_3) {
          do {
            puVar13 = (undefined4 *)((int)param_1 + 1);
            *(undefined1 *)param_1 = *(undefined1 *)puVar5;
            puVar5 = (undefined4 *)((int)puVar5 + 1);
            param_1 = puVar13;
          } while (puVar13 < puVar2);
        }
      }
      else if (puVar3 < puVar2) {
        puVar5 = puVar8;
        if (param_1 <= puVar3) {
          uVar4 = *puVar8;
          uVar6 = puVar8[1];
          uVar9 = puVar8[2];
          param_1[3] = puVar8[3];
          param_1[2] = uVar9;
          param_1[1] = uVar6;
          *param_1 = uVar4;
          if (0x10 < (int)puVar3 - (int)param_1) {
            puVar5 = puVar8 + 4;
            puVar13 = param_1 + 4;
            do {
              uVar9 = *puVar5;
              uVar6 = puVar5[1];
              uVar4 = puVar5[2];
              puVar13[3] = puVar5[3];
              puVar13[2] = uVar4;
              puVar13[1] = uVar6;
              *puVar13 = uVar9;
              uVar9 = puVar5[4];
              uVar6 = puVar5[5];
              uVar4 = puVar5[6];
              puVar1 = puVar5 + 7;
              puVar5 = puVar5 + 8;
              puVar13[7] = *puVar1;
              puVar13[6] = uVar4;
              puVar13[5] = uVar6;
              puVar13[4] = uVar9;
              puVar13 = puVar13 + 8;
            } while (puVar13 < puVar3);
          }
          puVar5 = (undefined4 *)((int)puVar8 + ((int)puVar3 - (int)param_1));
          param_1 = puVar3;
        }
        for (; param_1 < puVar2; param_1 = (undefined4 *)((int)param_1 + 1)) {
          *(undefined1 *)param_1 = *(undefined1 *)puVar5;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
        }
      }
      else {
        uVar6 = *puVar8;
        uVar4 = puVar8[1];
        uVar9 = puVar8[3];
        param_1[2] = puVar8[2];
        param_1[3] = uVar9;
        param_1[1] = uVar4;
        *param_1 = uVar6;
        if (0x10 < param_3) {
          puVar5 = puVar8 + 4;
          param_1 = param_1 + 4;
          do {
            uVar9 = *puVar5;
            uVar4 = puVar5[1];
            uVar6 = puVar5[2];
            param_1[3] = puVar5[3];
            param_1[2] = uVar6;
            param_1[1] = uVar4;
            *param_1 = uVar9;
            uVar9 = puVar5[4];
            uVar6 = puVar5[5];
            uVar4 = puVar5[6];
            puVar13 = puVar5 + 7;
            puVar5 = puVar5 + 8;
            param_1[7] = *puVar13;
            param_1[6] = uVar4;
            param_1[5] = uVar6;
            param_1[4] = uVar9;
            param_1 = param_1 + 8;
          } while (param_1 < puVar2);
        }
      }
      *param_6 = (undefined1 *)((int)puVar8 + param_3);
      iVar7 = (int)puVar2 - param_5;
      if ((uint)((int)puVar2 - param_8) < param_5) {
        if ((uint)((int)puVar2 - param_9) < param_5) {
          return 0xffffffec;
        }
        iVar10 = ((int)puVar2 - param_5) - param_8;
        iVar7 = param_10 + iVar10;
        if ((uint)(iVar7 + param_4) <= param_10) {
          imp___aeabi_memmove(puVar2,iVar7,param_4);
          return uVar11;
        }
        imp___aeabi_memmove(puVar2,iVar7,-iVar10);
        param_4 = iVar10 + param_4;
        puVar2 = (undefined4 *)((int)puVar2 - iVar10);
        iVar7 = param_8;
      }
      FUN_719f39fc(puVar2,puVar3,iVar7,param_4,1);
      uVar12 = uVar11;
    }
  }
  return uVar12;
}


// =========================================================================
// Function: FUN_719f39fc
// Entry: 0x719f39fc | Size: 608 bytes
// =========================================================================

void FUN_719f39fc(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,uint param_4,
                 int param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  
  puVar8 = (undefined4 *)((int)param_1 + param_4);
  if ((int)param_4 < 8) {
    if (0 < (int)param_4) {
      do {
        puVar2 = (undefined4 *)((int)param_1 + 1);
        *(undefined1 *)param_1 = *(undefined1 *)param_3;
        param_1 = puVar2;
        param_3 = (undefined4 *)((int)param_3 + 1);
      } while (puVar2 < puVar8);
    }
  }
  else {
    if (param_5 == 1) {
      uVar3 = (int)param_1 - (int)param_3;
      if (uVar3 < 8) {
        *(undefined1 *)param_1 = *(undefined1 *)param_3;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_3 + 1);
        *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)((int)param_3 + 2);
        *(undefined1 *)((int)param_1 + 3) = *(undefined1 *)((int)param_3 + 3);
        iVar4 = *(int *)(&DAT_70060bb8 + uVar3 * 4);
        param_1[1] = *(undefined4 *)((int)param_3 + iVar4);
        param_3 = (undefined4 *)(((int)param_3 + iVar4) - *(int *)(&DAT_70060958 + uVar3 * 4));
      }
      else {
        uVar6 = *param_3;
        param_1[1] = param_3[1];
        *param_1 = uVar6;
      }
      param_4 = param_4 - 8;
      param_1 = param_1 + 2;
      param_3 = param_3 + 2;
    }
    if (param_2 < puVar8) {
      if (param_1 <= param_2) {
        iVar4 = (int)param_2 - (int)param_1;
        if ((param_5 == 1) && (puVar2 = param_3, (int)param_1 - (int)param_3 < 0x10)) {
          do {
            uVar6 = *puVar2;
            param_1[1] = puVar2[1];
            *param_1 = uVar6;
            param_1 = param_1 + 2;
            puVar2 = puVar2 + 2;
          } while (param_1 < param_2);
        }
        else {
          uVar6 = *param_3;
          uVar7 = param_3[1];
          uVar5 = param_3[2];
          param_1[3] = param_3[3];
          param_1[2] = uVar5;
          param_1[1] = uVar7;
          *param_1 = uVar6;
          if (0x10 < iVar4) {
            puVar2 = param_3 + 4;
            param_1 = param_1 + 4;
            do {
              uVar7 = *puVar2;
              uVar5 = puVar2[1];
              uVar6 = puVar2[2];
              param_1[3] = puVar2[3];
              param_1[2] = uVar6;
              param_1[1] = uVar5;
              *param_1 = uVar7;
              uVar7 = puVar2[4];
              uVar5 = puVar2[5];
              uVar6 = puVar2[6];
              puVar1 = puVar2 + 7;
              puVar2 = puVar2 + 8;
              param_1[7] = *puVar1;
              param_1[6] = uVar6;
              param_1[5] = uVar5;
              param_1[4] = uVar7;
              param_1 = param_1 + 8;
            } while (param_1 < param_2);
          }
        }
        param_3 = (undefined4 *)((int)param_3 + iVar4);
        param_1 = param_2;
      }
      for (; param_1 < puVar8; param_1 = (undefined4 *)((int)param_1 + 1)) {
        *(undefined1 *)param_1 = *(undefined1 *)param_3;
        param_3 = (undefined4 *)((int)param_3 + 1);
      }
    }
    else {
      puVar8 = (undefined4 *)((int)param_1 + param_4);
      if ((param_5 == 1) && ((int)param_1 - (int)param_3 < 0x10)) {
        do {
          uVar6 = *param_3;
          puVar2 = param_3 + 1;
          param_3 = param_3 + 2;
          param_1[1] = *puVar2;
          *param_1 = uVar6;
          param_1 = param_1 + 2;
        } while (param_1 < puVar8);
      }
      else {
        uVar5 = *param_3;
        uVar7 = param_3[1];
        uVar6 = param_3[2];
        param_1[3] = param_3[3];
        param_1[2] = uVar6;
        param_1[1] = uVar7;
        *param_1 = uVar5;
        if (0x10 < param_4) {
          param_3 = param_3 + 4;
          param_1 = param_1 + 4;
          do {
            uVar6 = *param_3;
            uVar7 = param_3[1];
            uVar5 = param_3[2];
            param_1[3] = param_3[3];
            param_1[2] = uVar5;
            param_1[1] = uVar7;
            *param_1 = uVar6;
            uVar6 = param_3[4];
            uVar5 = param_3[5];
            uVar7 = param_3[6];
            puVar2 = param_3 + 7;
            param_3 = param_3 + 8;
            param_1[7] = *puVar2;
            param_1[6] = uVar7;
            param_1[5] = uVar5;
            param_1[4] = uVar6;
            param_1 = param_1 + 8;
          } while (param_1 < puVar8);
        }
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_719f3cb4
// Entry: 0x719f3cb4 | Size: 552 bytes
// =========================================================================

uint FUN_719f3cb4(undefined4 *param_1,int param_2,undefined4 param_3,uint param_4,int param_5,
                 uint param_6,undefined4 *param_7,int param_8,int param_9,int param_10,uint param_11
                 )

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  int iStack_28;
  
  iStack_28 = param_5;
  uVar11 = param_4 + param_5;
  uVar8 = 0xffffffba;
  if (uVar11 <= (uint)(param_2 - (int)param_1)) {
    puVar3 = (undefined4 *)*param_7;
    if ((uint)(param_8 - (int)puVar3) < param_4) {
      uVar8 = 0xffffffec;
    }
    else {
      puVar15 = (undefined4 *)((int)puVar3 + param_4);
      if ((param_1 <= puVar3) || (puVar15 <= param_1)) {
        puVar2 = (undefined4 *)((int)param_1 + param_4);
        if (((int)param_4 < 8) || (-8 < (int)param_1 - (int)puVar3)) {
          if (0 < (int)param_4) {
            do {
              puVar10 = (undefined4 *)((int)param_1 + 1);
              *(undefined1 *)param_1 = *(undefined1 *)puVar3;
              puVar3 = (undefined4 *)((int)puVar3 + 1);
              param_1 = puVar10;
            } while (puVar10 < puVar2);
          }
        }
        else {
          puVar9 = puVar2 + -8;
          puVar10 = param_1;
          if ((param_1 <= puVar9) && ((uint)((int)param_1 - (int)puVar3) < 0xfffffff0)) {
            uVar14 = *puVar3;
            uVar6 = puVar3[1];
            uVar12 = puVar3[3];
            param_1[2] = puVar3[2];
            param_1[3] = uVar12;
            param_1[1] = uVar6;
            *param_1 = uVar14;
            if (0x10 < (int)puVar9 - (int)param_1) {
              puVar13 = puVar3 + 4;
              puVar10 = param_1 + 4;
              do {
                uVar6 = *puVar13;
                uVar12 = puVar13[1];
                uVar14 = puVar13[2];
                puVar10[3] = puVar13[3];
                puVar10[2] = uVar14;
                puVar10[1] = uVar12;
                *puVar10 = uVar6;
                uVar12 = puVar13[4];
                uVar14 = puVar13[5];
                uVar6 = puVar13[6];
                puVar1 = puVar13 + 7;
                puVar13 = puVar13 + 8;
                puVar10[7] = *puVar1;
                puVar10[6] = uVar6;
                puVar10[5] = uVar14;
                puVar10[4] = uVar12;
                puVar10 = puVar10 + 8;
              } while (puVar10 < puVar9);
            }
            puVar3 = (undefined4 *)((int)puVar3 + ((int)puVar9 - (int)param_1));
            puVar10 = puVar9;
          }
          puVar7 = (undefined1 *)((int)param_1 + (param_4 - (int)puVar10));
          do {
            puVar7 = puVar7 + -1;
            *(undefined1 *)puVar10 = *(undefined1 *)puVar3;
            puVar3 = (undefined4 *)((int)puVar3 + 1);
            puVar10 = (undefined4 *)((int)puVar10 + 1);
          } while (puVar7 != (undefined1 *)0x0);
        }
        iVar4 = (int)puVar2 - param_6;
        *param_7 = puVar15;
        if ((uint)((int)puVar2 - param_9) < param_6) {
          if ((uint)((int)puVar2 - param_10) < param_6) {
            return 0xffffffec;
          }
          iVar4 = iVar4 - param_9;
          iVar5 = param_11 + iVar4;
          if ((uint)(iVar5 + param_5) <= param_11) {
            imp___aeabi_memmove(puVar2,iVar5,param_5);
            return uVar11;
          }
          imp___aeabi_memmove(puVar2,iVar5,-iVar4);
          puVar2 = (undefined4 *)((int)puVar2 - iVar4);
          iStack_28 = iVar4 + param_5;
          iVar4 = param_9;
        }
        FUN_719f39fc(puVar2,param_3,iVar4,iStack_28,1);
        uVar8 = uVar11;
      }
    }
  }
  return uVar8;
}


// =========================================================================
// Function: kwRabNKJIZxsdydjFLnIns
// Entry: 0x719f3f48 | Size: 328 bytes
// =========================================================================

undefined1 * kwRabNKJIZxsdydjFLnIns(undefined4 param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  puVar1 = (undefined1 *)imp_malloc(0x20);
  uVar2 = imp_strlen(param_1);
  if (0xfffffff7 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_2c);
  }
  if (uVar2 < 0xb) {
    uVar3 = (uint)&uStack_2c | 1;
    uStack_2c = CONCAT31(uStack_2c._1_3_,(char)(uVar2 << 1));
    if (uVar2 == 0) goto LAB_719f3fcc;
  }
  else {
    uVar3 = thunk_MwhHq((uVar2 | 7) + 1);
    uStack_2c = (uVar2 | 7) + 2;
    uStack_28 = uVar2;
    uStack_24 = uVar3;
  }
  imp___aeabi_memcpy(uVar3,param_1,uVar2);
LAB_719f3fcc:
  *(undefined1 *)(uVar3 + uVar2) = 0;
  lVar4 = FUN_719f412c(&uStack_2c,1);
  if ((uStack_2c & 1) != 0) {
    qNQrlu(uStack_24);
  }
  if (lVar4 == 0) {
    *puVar1 = 0;
  }
  else {
    FUN_719f4490(puVar1,0x20);
  }
  return puVar1;
}


// =========================================================================
// Function: FUN_719f412c
// Entry: 0x719f412c | Size: 648 bytes
// =========================================================================

undefined8 FUN_719f412c(byte *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  if (param_2 == 0) {
    pbVar3 = *(byte **)(param_1 + 8);
    if ((*param_1 & 1) == 0) {
      pbVar3 = param_1 + 1;
    }
    uVar1 = imp_strlen(pbVar3);
    if (0xfffffff7 < uVar1) goto LAB_71c21440;
    if (uVar1 < 0xb) {
      uVar5 = (uint)&uStack_40 | 1;
      uStack_40 = CONCAT31(uStack_40._1_3_,(char)(uVar1 << 1));
      if (uVar1 != 0) goto LAB_719f4260;
    }
    else {
      uVar5 = thunk_MwhHq((uVar1 | 7) + 1);
      uStack_40 = (uVar1 | 7) + 2;
      uStack_3c = uVar1;
      uStack_38 = uVar5;
LAB_719f4260:
      imp___aeabi_memmove(uVar5,pbVar3,uVar1);
    }
    *(undefined1 *)(uVar5 + uVar1) = 0;
    uVar1 = uStack_38;
    if ((uStack_40 & 1) == 0) {
      uVar1 = (uint)&uStack_40 | 1;
    }
    iVar2 = FUN_714c5f6c(0,&iStack_24,uVar1,0);
    iVar4 = iStack_24;
    if (iVar2 != 0) {
      iVar4 = 0;
    }
    goto LAB_719f42a4;
  }
  pbVar3 = *(byte **)(param_1 + 8);
  if ((*param_1 & 1) == 0) {
    pbVar3 = param_1 + 1;
  }
  uVar1 = imp_strlen(pbVar3);
  if (0xfffffff7 < uVar1) {
LAB_71c21440:
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_40);
  }
  if (uVar1 < 0xb) {
    uStack_40 = CONCAT31(uStack_40._1_3_,(char)(uVar1 << 1));
    uVar5 = (uint)&uStack_40 | 1;
    if (uVar1 != 0) goto LAB_719f41f4;
  }
  else {
    uVar5 = thunk_MwhHq((uVar1 | 7) + 1);
    uStack_40 = (uVar1 | 7) + 2;
    uStack_3c = uVar1;
    uStack_38 = uVar5;
LAB_719f41f4:
    imp___aeabi_memmove(uVar5,pbVar3,uVar1);
  }
  *(undefined1 *)(uVar5 + uVar1) = 0;
  uVar1 = uStack_38;
  if ((uStack_40 & 1) == 0) {
    uVar1 = (uint)&uStack_40 | 1;
  }
  iVar2 = FUN_714c5f6c(3,&iStack_24,uVar1,0);
  iVar4 = iStack_24;
  if (iVar2 != 0) {
    iVar4 = 0;
  }
LAB_719f42a4:
  if ((uStack_40 & 1) != 0) {
    qNQrlu(uStack_38);
  }
  if (iVar4 != 0) {
    uStack_28 = 0;
    uStack_2c = 0;
    uStack_30 = 0;
    uStack_34 = 0;
    uStack_38 = 0;
    uStack_3c = 0;
    uStack_40 = 0;
    iVar2 = FUN_719f73a0(iVar4,&uStack_40);
    FUN_714c82ec(iVar4);
    if (iVar2 == 0) {
      uStack_34 = 0;
      uStack_38 = 0;
    }
    return CONCAT44(uStack_34,uStack_38);
  }
  return 0;
}


// =========================================================================
// Function: FUN_719f4490
// Entry: 0x719f4490 | Size: 96 bytes
// =========================================================================

void FUN_719f4490(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_4;
  
  uStack_4 = param_4;
  imp___vsprintf_chk(param_1,0,param_2,s__016llx_70066e00,&uStack_4);
  return;
}


// =========================================================================
// Function: ixJquHvqsbRStuFLrsEqL_ZXDoT
// Entry: 0x719f4528 | Size: 328 bytes
// =========================================================================

undefined1 * ixJquHvqsbRStuFLrsEqL_ZXDoT(undefined4 param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  puVar1 = (undefined1 *)imp_malloc(0x20);
  uVar2 = imp_strlen(param_1);
  if (0xfffffff7 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_2c);
  }
  if (uVar2 < 0xb) {
    uVar3 = (uint)&uStack_2c | 1;
    uStack_2c = CONCAT31(uStack_2c._1_3_,(char)(uVar2 << 1));
    if (uVar2 == 0) goto LAB_719f45ac;
  }
  else {
    uVar3 = thunk_MwhHq((uVar2 | 7) + 1);
    uStack_2c = (uVar2 | 7) + 2;
    uStack_28 = uVar2;
    uStack_24 = uVar3;
  }
  imp___aeabi_memcpy(uVar3,param_1,uVar2);
LAB_719f45ac:
  *(undefined1 *)(uVar3 + uVar2) = 0;
  lVar4 = FUN_719f470c(&uStack_2c,1);
  if ((uStack_2c & 1) != 0) {
    qNQrlu(uStack_24);
  }
  if (lVar4 == 0) {
    *puVar1 = 0;
  }
  else {
    FUN_719f4490(puVar1,0x20);
  }
  return puVar1;
}


// =========================================================================
// Function: FUN_719f470c
// Entry: 0x719f470c | Size: 648 bytes
// =========================================================================

undefined8 FUN_719f470c(byte *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  if (param_2 == 0) {
    pbVar3 = *(byte **)(param_1 + 8);
    if ((*param_1 & 1) == 0) {
      pbVar3 = param_1 + 1;
    }
    uVar1 = imp_strlen(pbVar3);
    if (0xfffffff7 < uVar1) goto LAB_71c215a0;
    if (uVar1 < 0xb) {
      uVar5 = (uint)&uStack_40 | 1;
      uStack_40 = CONCAT31(uStack_40._1_3_,(char)(uVar1 << 1));
      if (uVar1 != 0) goto LAB_719f4840;
    }
    else {
      uVar5 = thunk_MwhHq((uVar1 | 7) + 1);
      uStack_40 = (uVar1 | 7) + 2;
      uStack_3c = uVar1;
      uStack_38 = uVar5;
LAB_719f4840:
      imp___aeabi_memmove(uVar5,pbVar3,uVar1);
    }
    *(undefined1 *)(uVar5 + uVar1) = 0;
    uVar1 = uStack_38;
    if ((uStack_40 & 1) == 0) {
      uVar1 = (uint)&uStack_40 | 1;
    }
    iVar2 = FUN_714c5f6c(0,&iStack_24,uVar1,0);
    iVar4 = iStack_24;
    if (iVar2 != 0) {
      iVar4 = 0;
    }
    goto LAB_719f4884;
  }
  pbVar3 = *(byte **)(param_1 + 8);
  if ((*param_1 & 1) == 0) {
    pbVar3 = param_1 + 1;
  }
  uVar1 = imp_strlen(pbVar3);
  if (0xfffffff7 < uVar1) {
LAB_71c215a0:
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_40);
  }
  if (uVar1 < 0xb) {
    uStack_40 = CONCAT31(uStack_40._1_3_,(char)(uVar1 << 1));
    uVar5 = (uint)&uStack_40 | 1;
    if (uVar1 != 0) goto LAB_719f47d4;
  }
  else {
    uVar5 = thunk_MwhHq((uVar1 | 7) + 1);
    uStack_40 = (uVar1 | 7) + 2;
    uStack_3c = uVar1;
    uStack_38 = uVar5;
LAB_719f47d4:
    imp___aeabi_memmove(uVar5,pbVar3,uVar1);
  }
  *(undefined1 *)(uVar5 + uVar1) = 0;
  uVar1 = uStack_38;
  if ((uStack_40 & 1) == 0) {
    uVar1 = (uint)&uStack_40 | 1;
  }
  iVar2 = FUN_714c5f6c(3,&iStack_24,uVar1,0);
  iVar4 = iStack_24;
  if (iVar2 != 0) {
    iVar4 = 0;
  }
LAB_719f4884:
  if ((uStack_40 & 1) != 0) {
    qNQrlu(uStack_38);
  }
  if (iVar4 != 0) {
    uStack_28 = 0;
    uStack_2c = 0;
    uStack_30 = 0;
    uStack_34 = 0;
    uStack_38 = 0;
    uStack_3c = 0;
    uStack_40 = 0;
    iVar2 = FUN_719f73a0(iVar4,&uStack_40);
    FUN_714c82ec(iVar4);
    if (iVar2 == 0) {
      uStack_2c = 0;
      uStack_30 = 0;
    }
    return CONCAT44(uStack_2c,uStack_30);
  }
  return 0;
}


// =========================================================================
// Function: FUN_719f4a70
// Entry: 0x719f4a70 | Size: 632 bytes
// =========================================================================

byte * FUN_719f4a70(byte *param_1)

{
  bool bVar1;
  int iVar2;
  byte *pbVar3;
  int *piVar4;
  byte *pbVar5;
  int *piVar6;
  byte *pbVar7;
  
  FUN_719f4de0();
  pbVar5 = *(byte **)(param_1 + 0x8c);
  if (pbVar5 != (byte *)0x0) {
    pbVar3 = *(byte **)(param_1 + 0x90);
    pbVar7 = pbVar5;
    if (pbVar3 != pbVar5) {
      do {
        pbVar7 = pbVar3 + -0xc;
        if ((*pbVar7 & 1) != 0) {
          qNQrlu(*(undefined4 *)(pbVar3 + -4));
        }
        pbVar3 = pbVar7;
      } while (pbVar7 != pbVar5);
      pbVar7 = *(byte **)(param_1 + 0x8c);
    }
    *(byte **)(param_1 + 0x90) = pbVar5;
    qNQrlu(pbVar7);
  }
  pbVar5 = *(byte **)(param_1 + 0x80);
  if (pbVar5 != (byte *)0x0) {
    pbVar3 = *(byte **)(param_1 + 0x84);
    pbVar7 = pbVar5;
    if (pbVar3 != pbVar5) {
      do {
        pbVar7 = pbVar3 + -0xc;
        if ((*pbVar7 & 1) != 0) {
          qNQrlu(*(undefined4 *)(pbVar3 + -4));
        }
        pbVar3 = pbVar7;
      } while (pbVar7 != pbVar5);
      pbVar7 = *(byte **)(param_1 + 0x80);
    }
    *(byte **)(param_1 + 0x84) = pbVar5;
    qNQrlu(pbVar7);
  }
  if (*(int *)(param_1 + 0x74) != 0) {
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x74);
    qNQrlu();
  }
  if (*(int *)(param_1 + 100) != 0) {
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 100);
    qNQrlu();
  }
  FUN_719f8c80(param_1 + 0x58,*(undefined4 *)(param_1 + 0x5c));
  if (*(int *)(param_1 + 0x4c) != 0) {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x4c);
    qNQrlu();
  }
  pbVar5 = *(byte **)(param_1 + 0x40);
  if (pbVar5 != (byte *)0x0) {
    pbVar7 = pbVar5;
    pbVar3 = *(byte **)(param_1 + 0x44);
    if (*(byte **)(param_1 + 0x44) != pbVar5) {
      do {
        piVar6 = *(int **)(pbVar3 + -4);
        if (piVar6 != (int *)0x0) {
          piVar4 = piVar6 + 1;
          DataMemoryBarrier(0xb);
          do {
            iVar2 = *piVar4;
            bVar1 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar1);
          *piVar4 = iVar2 + -1;
          DataMemoryBarrier(0xb);
          if (iVar2 == 0) {
            (**(code **)(*piVar6 + 8))(piVar6);
            xwzSFoU_qvDa_PehyVStzHlBOSkJhkBLR_tNCbTfLzAoZMkmnRt(piVar6);
          }
        }
        pbVar7 = pbVar3 + -0x48;
        if ((*pbVar7 & 1) != 0) {
          qNQrlu(*(undefined4 *)(pbVar3 + -0x40));
        }
        pbVar3 = pbVar7;
      } while (pbVar7 != pbVar5);
      pbVar7 = *(byte **)(param_1 + 0x40);
    }
    *(byte **)(param_1 + 0x44) = pbVar5;
    qNQrlu(pbVar7);
  }
  if ((param_1[0x18] & 1) != 0) {
    qNQrlu(*(undefined4 *)(param_1 + 0x20));
  }
  if ((*param_1 & 1) != 0) {
    qNQrlu(*(undefined4 *)(param_1 + 8));
  }
  return param_1;
}


// =========================================================================
// Function: FUN_719f4de0
// Entry: 0x719f4de0 | Size: 516 bytes
// =========================================================================

void FUN_719f4de0(int param_1)

{
  bool bVar1;
  byte *pbVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  int *piVar7;
  byte *pbVar8;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_714c82ec();
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  piVar4 = *(int **)(param_1 + 0x78);
  for (piVar7 = *(int **)(param_1 + 0x74); piVar7 != piVar4; piVar7 = piVar7 + 1) {
    if (*piVar7 != 0) {
      qNQrlu();
    }
  }
  pbVar8 = *(byte **)(param_1 + 0x40);
  pbVar6 = *(byte **)(param_1 + 0x44);
  while (pbVar2 = pbVar6, pbVar2 != pbVar8) {
    piVar4 = *(int **)(pbVar2 + -4);
    if (piVar4 != (int *)0x0) {
      piVar7 = piVar4 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar7;
        bVar1 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar1);
      *piVar7 = iVar3 + -1;
      DataMemoryBarrier(0xb);
      if (iVar3 == 0) {
        (**(code **)(*piVar4 + 8))(piVar4);
        xwzSFoU_qvDa_PehyVStzHlBOSkJhkBLR_tNCbTfLzAoZMkmnRt(piVar4);
      }
    }
    pbVar6 = pbVar2 + -0x48;
    if ((*pbVar6 & 1) != 0) {
      qNQrlu(*(undefined4 *)(pbVar2 + -0x40));
    }
  }
  puVar5 = (undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x4c);
  *(byte **)(param_1 + 0x44) = pbVar8;
  FUN_719f8c80(param_1 + 0x58,*puVar5);
  pbVar8 = *(byte **)(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 **)(param_1 + 0x58) = puVar5;
  *puVar5 = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  pbVar6 = *(byte **)(param_1 + 0x84);
  while (pbVar2 = pbVar6, pbVar2 != pbVar8) {
    pbVar6 = pbVar2 + -0xc;
    if ((*pbVar6 & 1) != 0) {
      qNQrlu(*(undefined4 *)(pbVar2 + -4));
    }
  }
  *(byte **)(param_1 + 0x84) = pbVar8;
  pbVar8 = *(byte **)(param_1 + 0x8c);
  pbVar6 = *(byte **)(param_1 + 0x90);
  while (pbVar2 = pbVar6, pbVar2 != pbVar8) {
    pbVar6 = pbVar2 + -0xc;
    if ((*pbVar6 & 1) != 0) {
      qNQrlu(*(undefined4 *)(pbVar2 + -4));
    }
  }
  iVar3 = *(int *)(param_1 + 100);
  *(byte **)(param_1 + 0x90) = pbVar8;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  if (iVar3 != 0) {
    qNQrlu();
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  return;
}


// =========================================================================
// Function: FUN_719f507c
// Entry: 0x719f507c | Size: 1616 bytes
// =========================================================================

void FUN_719f507c(int *param_1,byte *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined4 uVar11;
  byte *pbVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint uVar15;
  undefined4 uVar16;
  int iVar17;
  byte bStack_40;
  undefined2 uStack_3f;
  undefined4 uStack_3d;
  undefined1 uStack_39;
  uint uStack_38;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  uVar6 = FUN_714bafa8(param_2,0,0);
  iVar7 = imp_readdir();
  if (iVar7 != 0) {
    do {
      iVar17 = iVar7 + 0x13;
      iVar8 = imp_strcmp(iVar17,&DAT_70064d23);
      if ((iVar8 != 0) && (iVar8 = imp_strcmp(iVar17,&DAT_7006871d), iVar8 != 0)) {
        if (*(char *)(iVar7 + 0x12) == '\x04') {
          bVar1 = *param_2;
          uVar13 = *(uint *)(param_2 + 4);
          if ((bVar1 & 1) == 0) {
            uVar13 = (uint)(bVar1 >> 1);
          }
          iVar7 = imp_strlen(&DAT_700645a0);
          uVar15 = uVar13 + iVar7;
          if (0xfffffff7 < uVar15) {
                    /* WARNING: Subroutine does not return */
            FUN_712f6c1c(&bStack_40);
          }
          if (uVar15 < 0xb) {
            bStack_40 = (char)uVar15 * '\x02';
            uStack_3f = 0;
            uStack_38 = 0;
            uVar4 = 0;
            uStack_3d = 0;
            uStack_39 = 0;
          }
          else {
            uStack_38 = thunk_MwhHq((uVar15 | 7) + 1);
            uVar3 = (uVar15 | 7) + 2;
            bStack_40 = (byte)uVar3;
            uStack_3f = (undefined2)(uVar3 >> 8);
            uVar4 = uVar3 & 0xff;
            uStack_3d._1_3_ = (undefined3)uVar15;
            uStack_3d = CONCAT31(uStack_3d._1_3_,(char)(uVar3 >> 0x18));
            uStack_39 = (undefined1)(uVar15 >> 0x18);
          }
          uVar15 = uStack_38;
          if ((uVar4 & 1) == 0) {
            uVar15 = (uint)&bStack_40 | 1;
          }
          if (uVar13 != 0) {
            pbVar12 = *(byte **)(param_2 + 8);
            if ((bVar1 & 1) == 0) {
              pbVar12 = param_2 + 1;
            }
            imp___aeabi_memmove(uVar15,pbVar12,uVar13);
          }
          if (iVar7 != 0) {
            imp___aeabi_memcpy(uVar15 + uVar13,&DAT_700645a0,iVar7);
          }
          *(undefined1 *)(uVar15 + uVar13 + iVar7) = 0;
          puVar10 = (uint *)PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
                                      (&bStack_40,iVar17);
          uStack_30 = *puVar10;
          uStack_2c = puVar10[1];
          uStack_28 = puVar10[2];
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10[2] = 0;
          FUN_719f507c(param_1,&uStack_30);
          if ((uStack_30 & 1) != 0) {
            qNQrlu(uStack_28);
          }
          if ((bStack_40 & 1) != 0) {
            qNQrlu(uStack_38);
          }
        }
        else if (*(char *)(iVar7 + 0x12) == '\b') {
          bVar1 = *param_2;
          uVar13 = *(uint *)(param_2 + 4);
          if ((bVar1 & 1) == 0) {
            uVar13 = (uint)(bVar1 >> 1);
          }
          iVar7 = imp_strlen(&DAT_700645a0);
          uVar15 = uVar13 + iVar7;
          if (0xfffffff7 < uVar15) {
                    /* WARNING: Subroutine does not return */
            FUN_712f6c1c(&uStack_30);
          }
          if (uVar15 < 0xb) {
            uStack_30 = (uint)(byte)((char)uVar15 * '\x02');
            uStack_28 = 0;
            uVar3 = 0;
            uStack_2c = 0;
          }
          else {
            uStack_28 = thunk_MwhHq((uVar15 | 7) + 1);
            uStack_30 = (uVar15 | 7) + 2;
            uVar3 = uStack_30 & 0xff;
            uStack_2c = uVar15;
          }
          uVar15 = uStack_28;
          if ((uVar3 & 1) == 0) {
            uVar15 = (uint)&uStack_30 | 1;
          }
          if (uVar13 != 0) {
            pbVar12 = *(byte **)(param_2 + 8);
            if ((bVar1 & 1) == 0) {
              pbVar12 = param_2 + 1;
            }
            imp___aeabi_memmove(uVar15,pbVar12,uVar13);
          }
          if (iVar7 != 0) {
            imp___aeabi_memcpy(uVar15 + uVar13,&DAT_700645a0,iVar7);
          }
          *(undefined1 *)(uVar15 + uVar13 + iVar7) = 0;
          puVar9 = (undefined4 *)
                   PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
                             (&uStack_30,iVar17);
          uVar16 = puVar9[2];
          puVar9[2] = 0;
          uVar2 = *(undefined1 *)puVar9;
          uVar11 = *(undefined4 *)((int)puVar9 + 1);
          *puVar9 = 0;
          uStack_3d = puVar9[1];
          puVar9[1] = 0;
          bStack_40 = (byte)uVar11;
          uStack_3f = (undefined2)((uint)uVar11 >> 8);
          puVar5 = (undefined1 *)param_1[1];
          if (puVar5 < (undefined1 *)param_1[2]) {
            *puVar5 = uVar2;
            puVar14 = puVar5 + 0xc;
            *(uint *)(puVar5 + 1) = CONCAT13((undefined1)uStack_3d,(int3)uVar11);
            *(undefined4 *)(puVar5 + 4) = uStack_3d;
            *(undefined4 *)(puVar5 + 8) = uVar16;
          }
          else {
            iVar7 = *param_1;
            iVar8 = (int)puVar5 - iVar7;
            uVar13 = (iVar8 >> 2) * -0x55555555 + 1;
            if (0x15555555 < uVar13) {
                    /* WARNING: Subroutine does not return */
              FUN_712f6ffc(param_1);
            }
            iVar17 = param_1[2] - iVar7 >> 2;
            if (uVar13 < (uint)(iVar17 * 0x55555556)) {
              uVar13 = iVar17 * 0x55555556;
            }
            if (0xaaaaaa9 < (uint)(iVar17 * -0x55555555)) {
              uVar13 = 0x15555555;
            }
            if (uVar13 == 0) {
              iVar17 = 0;
            }
            else {
              if (0x15555555 < uVar13) {
                    /* WARNING: Subroutine does not return */
                FUN_712f6cf0();
              }
              iVar17 = thunk_MwhHq(uVar13 * 0xc);
            }
            puVar5 = (undefined1 *)(iVar17 + (iVar8 >> 2) * 4);
            *puVar5 = uVar2;
            *(undefined4 *)(puVar5 + 8) = uVar16;
            *(uint *)(puVar5 + 1) = CONCAT13((undefined1)uStack_3d,CONCAT21(uStack_3f,bStack_40));
            *(undefined4 *)(puVar5 + 4) = uStack_3d;
            imp___aeabi_memcpy4((int)puVar5 - iVar8,iVar7,iVar8);
            puVar14 = puVar5 + 0xc;
            *param_1 = (int)puVar5 - iVar8;
            param_1[1] = (int)puVar14;
            param_1[2] = iVar17 + uVar13 * 0xc;
            if (iVar7 != 0) {
              qNQrlu(iVar7);
            }
          }
          param_1[1] = (int)puVar14;
          if ((uStack_30 & 1) != 0) {
            qNQrlu(uStack_28);
          }
        }
      }
      iVar7 = imp_readdir(uVar6);
    } while (iVar7 != 0);
  }
  imp_closedir(uVar6);
  return;
}


// =========================================================================
// Function: FUN_719f5944
// Entry: 0x719f5944 | Size: 5272 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_719f5944(int param_1,byte *param_2,int param_3,uint param_4)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  uint uVar10;
  byte *pbVar11;
  undefined2 *puVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  int *piVar17;
  uint uVar18;
  uint uVar19;
  int *piVar20;
  uint uVar21;
  undefined4 *puVar22;
  byte *pbVar23;
  int *piVar24;
  char cVar25;
  bool bVar26;
  char cVar27;
  undefined4 in_cr0;
  undefined4 in_cr2;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_cr8;
  undefined4 in_cr11;
  undefined4 in_cr15;
  byte *pbStack_a8;
  byte *pbStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  uint uStack_90;
  uint *apuStack_88 [2];
  uint uStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_50;
  uint uStack_4c;
  byte *pbStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  byte abStack_38 [4];
  uint uStack_34;
  uint uStack_30;
  undefined1 uStack_29;
  uint *puStack_28;
  
  uVar10 = pqWMLpYQkevHwapJIPZboPsMrUGTuQHnfTsZrDxRScZyrsqnKLxWnFifGOliKNuSwJU_pwdbnMLX
                     (param_2,0x2e,0xffffffff);
  bVar2 = *param_2;
  uVar19 = *(uint *)(param_2 + 4);
  if ((bVar2 & 1) == 0) {
    uVar19 = (uint)(bVar2 >> 1);
  }
  if (uVar10 <= uVar19) {
    uVar19 = uVar10;
  }
  pbVar11 = *(byte **)(param_2 + 8);
  if ((bVar2 & 1) == 0) {
    pbVar11 = param_2 + 1;
  }
  if (0xfffffff7 < uVar19) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_44);
  }
  if (uVar19 < 0xb) {
    uVar10 = (uint)&uStack_44 | 1;
    uStack_44 = CONCAT31(uStack_44._1_3_,(char)(uVar19 << 1));
    if (uVar19 != 0) goto LAB_719f59e4;
  }
  else {
    uVar10 = thunk_MwhHq((uVar19 | 7) + 1);
    uStack_44 = (uVar19 | 7) + 2;
    uStack_40 = uVar19;
    uStack_3c = uVar10;
LAB_719f59e4:
    imp___aeabi_memmove(uVar10,pbVar11,uVar19);
  }
  *(undefined1 *)(uVar10 + uVar19) = 0;
  FUN_714bab0c(abStack_38,&uStack_44);
  if ((uStack_44 & 1) != 0) {
    qNQrlu(uStack_3c);
  }
  uVar19 = uStack_30;
  if ((abStack_38[0] & 1) == 0) {
    uVar19 = (uint)abStack_38 | 1;
  }
  pbVar11 = (byte *)imp_strlen(uVar19);
  if ((byte *)0xfffffff7 < pbVar11) goto LAB_719f6990;
  if (pbVar11 < (byte *)0xb) {
    uVar10 = (uint)&pbStack_a8 | 1;
    pbStack_a8 = (byte *)CONCAT31(pbStack_a8._1_3_,(char)((int)pbVar11 << 1));
    if (pbVar11 != (byte *)0x0) goto LAB_719f5a90;
  }
  else {
    uVar10 = thunk_MwhHq(((uint)pbVar11 | 7) + 1);
    pbStack_a8 = (byte *)(((uint)pbVar11 | 7) + 2);
    pbStack_a4 = pbVar11;
    uStack_a0 = uVar10;
LAB_719f5a90:
    imp___aeabi_memmove(uVar10,uVar19,pbVar11);
  }
  pbVar11[uVar10] = 0;
  uVar19 = FUN_714ba2d4(&pbStack_a8,0,0);
  if (((uint)pbStack_a8 & 1) != 0) {
    qNQrlu(uStack_a0);
  }
  lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi(param_1,param_2);
  if ((uVar19 & param_4) != 1) {
    pbVar11 = *(byte **)(param_2 + 8);
    if ((*param_2 & 1) == 0) {
      pbVar11 = param_2 + 1;
    }
    pbVar23 = (byte *)imp_strlen(pbVar11);
    if ((byte *)0xfffffff7 < pbVar23) {
LAB_719f6990:
                    /* WARNING: Subroutine does not return */
      FUN_712f6c1c(&pbStack_a8);
    }
    if (pbVar23 < (byte *)0xb) {
      uVar19 = (uint)&pbStack_a8 | 1;
      pbStack_a8 = (byte *)CONCAT31(pbStack_a8._1_3_,(char)((int)pbVar23 << 1));
      if (pbVar23 != (byte *)0x0) goto LAB_719f5ca8;
    }
    else {
      uVar19 = thunk_MwhHq(((uint)pbVar23 | 7) + 1);
      pbStack_a8 = (byte *)(((uint)pbVar23 | 7) + 2);
      pbStack_a4 = pbVar23;
      uStack_a0 = uVar19;
LAB_719f5ca8:
      imp___aeabi_memmove(uVar19,pbVar11,pbVar23);
    }
    uVar10 = 0;
    pbVar23[uVar19] = 0;
    uVar19 = uStack_a0;
    if (((uint)pbStack_a8 & 1) == 0) {
      uVar19 = (uint)&pbStack_a8 | 1;
    }
    iVar3 = FUN_714c5f6c(0,&uStack_50,uVar19,0);
    uVar19 = uStack_50;
    if (iVar3 != 0) {
      uVar19 = 0;
    }
    *(uint *)(param_1 + 0x28) = uVar19;
    if (((uint)pbStack_a8 & 1) != 0) {
      qNQrlu(uStack_a0);
      uVar19 = *(uint *)(param_1 + 0x28);
    }
    if (uVar19 == 0) {
      uVar15 = 0;
      goto LAB_719f6944;
    }
    uStack_90 = 0;
    uStack_94 = 0;
    uStack_98 = 0;
    uStack_9c = 0;
    uStack_a0 = 0;
    pbStack_a4 = (byte *)0x0;
    pbStack_a8 = (byte *)0x0;
    iVar3 = FUN_719f73a0(uVar19,&pbStack_a8);
    if (iVar3 == 0) {
      FUN_714c82ec(*(undefined4 *)(param_1 + 0x28));
      *(undefined4 *)(param_1 + 0x28) = 0;
      uVar15 = 0;
      goto LAB_719f6944;
    }
    piVar24 = (int *)(param_1 + 0x4c);
    iVar3 = *piVar24;
    *(undefined4 *)(param_1 + 0x30) = uStack_98;
    iVar4 = *(int *)(param_1 + 0x50) - iVar3;
    *(undefined4 *)(param_1 + 0x34) = uStack_94;
    uVar19 = iVar4 * -0x73ecade3;
    if (uVar19 < uStack_90) {
      FUN_719f8d54(piVar24,uStack_90 + iVar4 * 0x73ecade3);
      iVar3 = *piVar24;
      if (uStack_90 != 0) goto LAB_719f5da4;
LAB_719f666c:
      uVar19 = 0x1c;
    }
    else {
      if (uStack_90 < uVar19) {
        *(uint *)(param_1 + 0x50) = uStack_90 * 0x35 + iVar3;
      }
      if (uStack_90 == 0) goto LAB_719f666c;
LAB_719f5da4:
      FUN_714c5410(*(undefined4 *)(param_1 + 0x28),iVar3,uStack_90 * 0x35);
      iVar3 = *(int *)(param_1 + 0x4c);
      uVar19 = uStack_90 * 0x35 + 0x1c;
    }
    uVar10 = uVar19;
    while (iVar3 != *(int *)(param_1 + 0x50)) {
      piVar24 = (int *)(iVar3 + 0x19);
      piVar20 = (int *)(iVar3 + 0x2d);
      iVar3 = iVar3 + 0x35;
      uVar7 = *piVar24 + *piVar20;
      if (uVar10 < uVar7) {
        uVar10 = uVar7;
      }
    }
    FUN_714c89e8(*(undefined4 *)(param_1 + 0x28),uVar19,uVar10);
    piVar24 = *(int **)(param_1 + 0x4c);
    *(uint *)(param_1 + 0x38) = uVar19;
    *(uint *)(param_1 + 0x3c) = uVar10;
    if (piVar24 == *(int **)(param_1 + 0x50)) {
      uVar19 = 0xffffffff;
    }
    else {
      uVar19 = 0xffffffff;
      do {
        uVar7 = uVar19;
        if ((uint)piVar24[1] < uVar19) {
          uVar7 = piVar24[1];
        }
        uVar19 = *(uint *)((int)piVar24 + 0x31);
        if (uVar7 <= *(uint *)((int)piVar24 + 0x31)) {
          uVar19 = uVar7;
        }
        if (*piVar24 != 1) {
          uVar19 = uVar7;
        }
        piVar24 = (int *)((int)piVar24 + 0x35);
      } while (piVar24 != *(int **)(param_1 + 0x50));
    }
    uVar7 = FUN_714c8774(*(undefined4 *)(param_1 + 0x28));
    if (((*(int *)(param_1 + 0x4c) != *(int *)(param_1 + 0x50)) && (uVar10 <= uVar19)) &&
       (iVar3 = (int)uVar7 >> 0x1f,
       (int)-(iVar3 + (uint)(uVar19 < uVar7)) < 0 !=
       (SBORROW4(0,iVar3) != SBORROW4(-iVar3,(uint)(uVar19 < uVar7))))) {
      uVar7 = uVar7 - uVar19;
      iVar4 = *(int *)(param_1 + 100);
      iVar3 = *(int *)(param_1 + 0x68);
      uVar10 = iVar3 - iVar4;
      if (uVar10 < uVar7) {
        uVar21 = uVar7 - uVar10;
        if ((uint)(*(int *)(param_1 + 0x6c) - iVar3) < uVar21) {
          cVar27 = SCARRY4(uVar7,1);
          cVar25 = (int)(uVar7 + 1) < 0;
          bVar26 = uVar7 == 0xffffffff;
          if ((int)uVar7 < 0) {
            FUN_71533508();
            coprocessor_function2(1,0xe,1,in_cr15,in_cr2,in_cr11);
            coprocessor_function2(6,0xe,2,in_cr8,in_cr5,in_cr0);
            coprocessor_function2(3,0xe,4,in_cr8,in_cr5,in_cr4);
            if (bVar26 || cVar25 != cVar27) {
              software_interrupt(0x698748);
            }
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          uVar14 = *(int *)(param_1 + 0x6c) - iVar4;
          uVar18 = uVar7;
          if (uVar7 < uVar14 * 2) {
            uVar18 = uVar14 * 2;
          }
          if (0x3ffffffe < uVar14) {
            uVar18 = 0x7fffffff;
          }
          iVar3 = thunk_MwhHq(uVar18);
          imp___aeabi_memclr(iVar3 + uVar10,uVar21);
          imp___aeabi_memcpy(iVar3,iVar4,uVar10);
          *(int *)(param_1 + 100) = iVar3;
          *(uint *)(param_1 + 0x68) = iVar3 + uVar7;
          *(uint *)(param_1 + 0x6c) = iVar3 + uVar18;
          if (iVar4 != 0) {
            qNQrlu(iVar4);
          }
        }
        else {
          imp___aeabi_memclr(iVar3,uVar21);
          iVar3 = iVar3 + uVar21;
LAB_719f67f0:
          *(int *)(param_1 + 0x68) = iVar3;
        }
      }
      else if (uVar7 < uVar10) {
        iVar3 = iVar4 + uVar7;
        goto LAB_719f67f0;
      }
      FUN_714c5bec(*(undefined4 *)(param_1 + 0x28),uVar19);
      iVar3 = FUN_714c5410(*(undefined4 *)(param_1 + 0x28),*(int *)(param_1 + 100),
                           *(int *)(param_1 + 0x68) - *(int *)(param_1 + 100));
      if (iVar3 != 0) {
        iVar3 = *(int *)(param_1 + 100);
        uVar19 = 0;
        *(undefined4 *)(param_1 + 0x6c) = 0;
        *(undefined4 *)(param_1 + 0x68) = 0;
        *(undefined4 *)(param_1 + 100) = 0;
        if (iVar3 != 0) {
          qNQrlu();
        }
      }
      *(uint *)(param_1 + 0x70) = uVar19;
    }
    iVar3 = *(int *)(param_1 + 0x4c);
    iVar4 = *(int *)(param_1 + 0x50);
    if (iVar3 != iVar4) {
      piVar24 = (int *)(param_1 + 0x58);
      do {
        FUN_719f77d4(&uStack_50,param_1,*(undefined4 *)(iVar3 + 4));
        puVar8 = (undefined4 *)FUN_719f9608(piVar24,&uStack_60,&uStack_50);
        puVar22 = (undefined4 *)*puVar8;
        if (puVar22 == (undefined4 *)0x0) {
          puVar22 = (undefined4 *)thunk_MwhHq(0x20);
          *puVar22 = 0;
          puVar22[1] = 0;
          puVar22[4] = uStack_50;
          puVar22[5] = uStack_4c;
          puVar22[6] = pbStack_48;
          puVar22[7] = 0;
          puVar22[2] = uStack_60;
          uStack_50 = 0;
          uStack_4c = 0;
          pbStack_48 = (byte *)0x0;
          *puVar8 = puVar22;
          puVar16 = puVar22;
          if (*(int *)*piVar24 != 0) {
            *piVar24 = *(int *)*piVar24;
            puVar16 = (undefined4 *)*puVar8;
          }
          FUN_712f807c(*(undefined4 *)(param_1 + 0x5c),puVar16);
          *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
        }
        puVar22[7] = iVar3;
        if ((uStack_50 & 1) != 0) {
          qNQrlu(pbStack_48);
        }
        iVar3 = iVar3 + 0x35;
      } while (iVar3 != iVar4);
    }
    *(undefined1 *)(param_1 + 0xc) = 1;
    uVar15 = uStack_9c;
    uVar10 = uStack_a0;
    goto LAB_719f6944;
  }
  uVar19 = imp_strlen(&DAT_70064a63);
  if (0xfffffff7 < uVar19) {
LAB_719f6968:
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_50);
  }
  if (uVar19 < 0xb) {
    uStack_50 = CONCAT31(uStack_50._1_3_,(char)(uVar19 << 1));
    pbVar11 = (byte *)((uint)&uStack_50 | 1);
    if (uVar19 != 0) goto LAB_719f5b90;
  }
  else {
    pbVar11 = (byte *)thunk_MwhHq((uVar19 | 7) + 1);
    uStack_50 = (uVar19 | 7) + 2;
    uStack_4c = uVar19;
    pbStack_48 = pbVar11;
LAB_719f5b90:
    imp___aeabi_memclr(pbVar11,uVar19);
  }
  pbVar11[uVar19] = 0;
  FUN_714ba554(&pbStack_a8,&uStack_50,0,0,0);
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    qNQrlu(*(undefined4 *)(param_1 + 0x20));
  }
  pbVar11 = pbStack_a8;
  pbStack_a8 = (byte *)((uint)pbStack_a8 & 0xffff0000);
  *(byte **)(param_1 + 0x18) = pbVar11;
  *(byte **)(param_1 + 0x1c) = pbStack_a4;
  *(uint *)(param_1 + 0x20) = uStack_a0;
  if ((uStack_50 & 1) != 0) {
    qNQrlu(pbStack_48);
  }
  *(undefined1 *)(param_1 + 0x14) = 1;
  uStack_a0 = 0;
  pbStack_a4 = (byte *)0x0;
  pbStack_a8 = (byte *)0x0;
  *(int *)(param_1 + 0x10) = param_3;
  FUN_719f507c(&pbStack_a8,abStack_38);
  piVar24 = (int *)(param_1 + 0x4c);
  iVar3 = *(int *)(param_1 + 0x50) - *piVar24;
  iVar4 = (int)pbStack_a4 - (int)pbStack_a8;
  uVar19 = (iVar4 >> 2) * -0x55555555;
  bVar26 = uVar19 < (uint)(iVar3 * -0x73ecade3);
  if (bVar26 || uVar19 + iVar3 * 0x73ecade3 == 0) {
    if (bVar26) {
      *(int *)(param_1 + 0x50) = (iVar4 >> 2) * 0x55555567 + *piVar24;
    }
  }
  else {
    FUN_719f8d54(piVar24,uVar19 + iVar3 * 0x73ecade3);
    iVar4 = (int)pbStack_a4 - (int)pbStack_a8;
    uVar19 = (iVar4 >> 2) * -0x55555555;
  }
  piVar20 = (int *)(param_1 + 0x80);
  iVar3 = (int)*(byte **)(param_1 + 0x84) - *piVar20 >> 2;
  uVar10 = iVar3 * -0x55555555;
  if (uVar10 < uVar19) {
    FUN_719f901c(piVar20,uVar19 + iVar3 * 0x55555555);
  }
  else if (uVar19 < uVar10) {
    pbVar23 = (byte *)(*piVar20 + iVar4);
    pbVar11 = *(byte **)(param_1 + 0x84);
    while (pbVar9 = pbVar11, pbVar9 != pbVar23) {
      pbVar11 = pbVar9 + -0xc;
      if ((*pbVar11 & 1) != 0) {
        qNQrlu(*(undefined4 *)(pbVar9 + -4));
      }
    }
    *(byte **)(param_1 + 0x84) = pbVar23;
  }
  uVar19 = ((int)pbStack_a4 - (int)pbStack_a8 >> 2) * -0x55555555;
  piVar5 = (int *)(param_1 + 0x8c);
  iVar3 = (int)*(byte **)(param_1 + 0x90) - *piVar5 >> 2;
  bVar26 = uVar19 < (uint)(iVar3 * -0x55555555);
  if (bVar26 || uVar19 + iVar3 * 0x55555555 == 0) {
    if (bVar26) {
      pbVar23 = (byte *)(*piVar5 + ((int)pbStack_a4 - (int)pbStack_a8));
      pbVar11 = *(byte **)(param_1 + 0x90);
      while (pbVar9 = pbVar11, pbVar9 != pbVar23) {
        pbVar11 = pbVar9 + -0xc;
        if ((*pbVar11 & 1) != 0) {
          qNQrlu(*(undefined4 *)(pbVar9 + -4));
        }
      }
      *(byte **)(param_1 + 0x90) = pbVar23;
    }
  }
  else {
    FUN_719f901c(piVar5,uVar19 + iVar3 * 0x55555555);
  }
  if (param_3 == 1) {
    piVar17 = (int *)(param_1 + 0x74);
    iVar3 = (int)pbStack_a4 - (int)pbStack_a8 >> 2;
    uVar10 = iVar3 * -0x55555555;
    uVar19 = *(int *)(param_1 + 0x78) - *piVar17 >> 2;
    if (uVar10 < uVar19 || uVar10 - uVar19 == 0) {
      if (uVar10 < uVar19) {
        *(int *)(param_1 + 0x78) = *piVar17 + iVar3 * -0x55555554;
      }
      pbVar11 = pbStack_a8;
      pbVar23 = pbStack_a8;
      if (pbStack_a4 != pbStack_a8) goto LAB_719f5f40;
    }
    else {
      FUN_719f9274(piVar17,uVar10 - uVar19);
      pbVar11 = pbStack_a8;
      pbVar23 = pbStack_a8;
      if (pbStack_a4 != pbStack_a8) {
LAB_719f5f40:
        iVar4 = 0;
        iVar3 = 0;
        uVar10 = 0;
        uVar19 = (uint)&uStack_60 | 1;
        do {
          pbVar11 = pbStack_a8;
          puVar12 = (undefined2 *)thunk_MwhHq(0x10c);
          puVar6 = (uint *)(pbVar11 + iVar3);
          if ((*puVar6 & 1) == 0) {
            uStack_50 = *puVar6;
            uStack_4c = puVar6[1];
            pbStack_48 = (byte *)puVar6[2];
          }
          else {
            FUN_712f6d58(&uStack_50,*(undefined4 *)(pbVar11 + iVar3 + 8),
                         *(undefined4 *)(pbVar11 + iVar3 + 4));
          }
          iVar13 = pqWMLpYQkevHwapJIPZboPsMrUGTuQHnfTsZrDxRScZyrsqnKLxWnFifGOliKNuSwJU_pwdbnMLX
                             (&uStack_50,0x2f,0xffffffff);
          uVar21 = iVar13 + 1;
          uVar7 = uStack_4c;
          if ((uStack_50 & 1) == 0) {
            uVar7 = uStack_50 >> 1 & 0x7f;
          }
          if (uVar7 < uVar21) {
                    /* WARNING: Subroutine does not return */
            FUN_712f6b48(&uStack_60);
          }
          pbVar11 = pbStack_48;
          if ((uStack_50 & 1) == 0) {
            pbVar11 = (byte *)((uint)&uStack_50 | 1);
          }
          uVar18 = uVar7 - uVar21;
          if (0xfffffff7 < uVar18) {
                    /* WARNING: Subroutine does not return */
            FUN_712f6c1c(&uStack_60);
          }
          if (uVar18 < 0xb) {
            uStack_60 = CONCAT31(uStack_60._1_3_,(char)uVar18 * '\x02');
            uVar14 = uVar19;
            if (uVar7 != uVar21) goto LAB_719f6088;
          }
          else {
            uVar14 = thunk_MwhHq((uVar18 | 7) + 1);
            uStack_60 = (uVar18 | 7) + 2;
            uStack_5c = uVar18;
            uStack_58 = uVar14;
LAB_719f6088:
            imp___aeabi_memmove(uVar14,pbVar11 + uVar21,uVar18);
          }
          *(undefined1 *)(uVar14 + uVar18) = 0;
          uVar21 = jqZqCEXeMbwWkPQPsWPXtLIXsrprfLcULRyTsuHQaLjzixodrunQzQjJ_zMKoMhElbhaqoVSUZW
                             (&uStack_60,0x2e,0);
          uVar7 = uStack_5c;
          if ((uStack_60 & 1) == 0) {
            uVar7 = uStack_60 >> 1 & 0x7f;
          }
          if (uVar21 <= uVar7) {
            uVar7 = uVar21;
          }
          uVar21 = uStack_58;
          if ((uStack_60 & 1) == 0) {
            uVar21 = uVar19;
          }
          if (0xfffffff7 < uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_712f6c1c(&uStack_70);
          }
          if (uVar7 < 0xb) {
            uStack_70 = CONCAT31(uStack_70._1_3_,(char)(uVar7 << 1));
            uVar18 = (uint)&uStack_70 | 1;
            if (uVar7 != 0) goto LAB_719f6120;
          }
          else {
            uVar18 = thunk_MwhHq((uVar7 | 7) + 1);
            uStack_70 = (uVar7 | 7) + 2;
            uStack_6c = uVar7;
            uStack_68 = uVar18;
LAB_719f6120:
            imp___aeabi_memmove(uVar18,uVar21,uVar7);
          }
          *(undefined1 *)(uVar18 + uVar7) = 0;
          if ((uStack_60 & 1) != 0) {
            qNQrlu(uStack_58);
          }
          uStack_60 = uStack_70;
          uStack_5c = uStack_6c;
          uStack_58 = uStack_68;
          puVar6 = (uint *)(pbStack_a8 + iVar3);
          if ((*puVar6 & 1) == 0) {
            uStack_70 = *puVar6;
            uStack_6c = puVar6[1];
            uStack_68 = puVar6[2];
          }
          else {
            FUN_712f6d58(&uStack_70,*(undefined4 *)(pbStack_a8 + iVar3 + 8),
                         *(undefined4 *)(pbStack_a8 + iVar3 + 4));
          }
          FUN_714ba554(apuStack_88,&uStack_70,0,0,0);
          uVar7 = uStack_80;
          if (((uint)apuStack_88[0] & 1) == 0) {
            uVar7 = (uint)apuStack_88 | 1;
          }
          FUN_7191b4a8(uVar7,&iStack_74,&iStack_78,&iStack_7c);
          if (((uint)apuStack_88[0] & 1) != 0) {
            qNQrlu(uStack_80);
          }
          *puVar12 = (short)iStack_74;
          puVar12[1] = (short)iStack_78;
          *(undefined1 *)(puVar12 + 3) = 1;
          puVar12[2] = 0;
          *(undefined4 *)(puVar12 + 4) = 0;
          *(bool *)((int)puVar12 + 7) = iStack_7c != 4;
          *(undefined2 **)(*piVar17 + uVar10 * 4) = puVar12;
          iVar13 = iStack_78 * iStack_74 * iStack_7c;
          puVar8 = (undefined4 *)(*piVar24 + iVar4);
          *puVar8 = 1;
          puVar8[2] = 0;
          puVar8[1] = uVar10;
          puVar8[3] = 0;
          puVar8[4] = 0;
          puVar8[5] = 0;
          *(undefined1 *)(puVar8 + 6) = 0;
          *(uint *)((int)puVar8 + 0x31) = uVar10;
          *(uint *)((int)puVar8 + 0x2d) = uVar10;
          *(int *)((int)puVar8 + 0x1d) = iVar13;
          *(int *)((int)puVar8 + 0x19) = iVar13;
          lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi
                    (*piVar20 + iVar3,&uStack_70);
          lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi
                    (*piVar5 + iVar3,&uStack_60);
          iVar13 = *piVar24;
          puStack_28 = &uStack_60;
          FUN_719f94b0(apuStack_88,param_1 + 0x58,&uStack_60,&DAT_7008e764,&puStack_28,&uStack_29);
          apuStack_88[0][7] = iVar13 + iVar4;
          if ((uStack_70 & 1) != 0) {
            qNQrlu(uStack_68);
          }
          if ((uStack_60 & 1) != 0) {
            qNQrlu(uStack_58);
          }
          if ((uStack_50 & 1) != 0) {
            qNQrlu(pbStack_48);
          }
          iVar4 = iVar4 + 0x35;
          iVar3 = iVar3 + 0xc;
          uVar10 = uVar10 + 1;
          pbVar11 = pbStack_a4;
          pbVar23 = pbStack_a8;
        } while (uVar10 < (uint)(((int)pbStack_a4 - (int)pbStack_a8 >> 2) * -0x55555555));
      }
    }
  }
  else {
    pbVar11 = pbStack_a4;
    pbVar23 = pbStack_a4;
    if (pbStack_a4 != pbStack_a8) {
      uVar19 = 0;
      pbVar9 = (byte *)((uint)&uStack_50 | 1);
      do {
        pbVar11 = pbStack_a8 + uVar19 * 0xc;
        bVar2 = *pbVar11;
        uVar10 = *(uint *)(pbVar11 + 4);
        if ((bVar2 & 1) == 0) {
          uVar10 = (uint)(bVar2 >> 1);
        }
        uVar7 = uStack_34;
        if ((abStack_38[0] & 1) == 0) {
          uVar7 = (uint)(abStack_38[0] >> 1);
        }
        uVar7 = uVar7 + 1;
        if (uVar10 < uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_712f6b48(&uStack_50);
        }
        pbVar23 = *(byte **)(pbVar11 + 8);
        if ((bVar2 & 1) == 0) {
          pbVar23 = pbVar11 + 1;
        }
        uVar21 = uVar10 - uVar7;
        if (0xfffffff7 < uVar21) goto LAB_719f6968;
        if (uVar21 < 0xb) {
          uStack_50 = CONCAT31(uStack_50._1_3_,(char)uVar21 * '\x02');
          pbVar11 = pbVar9;
          if (uVar10 != uVar7) goto LAB_719f6414;
        }
        else {
          pbVar11 = (byte *)thunk_MwhHq((uVar21 | 7) + 1);
          uStack_50 = (uVar21 | 7) + 2;
          uStack_4c = uVar21;
          pbStack_48 = pbVar11;
LAB_719f6414:
          imp___aeabi_memmove(pbVar11,pbVar23 + uVar7,uVar21);
        }
        pbVar11[uVar21] = 0;
        pbVar11 = pbStack_48;
        uVar10 = uStack_4c;
        if ((uStack_50 & 1) == 0) {
          uVar10 = (uint)((byte)uStack_50 >> 1);
          pbVar11 = pbVar9;
        }
        for (; uVar10 != 0; uVar10 = uVar10 - 1) {
          if (*pbVar11 == 0x5c) {
            *pbVar11 = 0x2f;
          }
          pbVar11 = pbVar11 + 1;
        }
        pbVar11 = pbStack_48;
        uVar10 = uStack_4c;
        if ((uStack_50 & 1) == 0) {
          pbVar11 = pbVar9;
          uVar10 = (uint)((byte)uStack_50 >> 1);
        }
        for (; uVar10 != 0; uVar10 = uVar10 - 1) {
          bVar2 = *pbVar11;
          if (0xffffffe5 < bVar2 - 0x5b) {
            bVar2 = bVar2 | 0x20;
          }
          *pbVar11 = bVar2;
          pbVar11 = pbVar11 + 1;
        }
        puVar6 = (uint *)(pbStack_a8 + uVar19 * 0xc);
        if ((*puVar6 & 1) == 0) {
          uStack_60 = *puVar6;
          uStack_5c = puVar6[1];
          uStack_58 = puVar6[2];
        }
        else {
          FUN_712f6d58(&uStack_60,puVar6[2],puVar6[1]);
        }
        uVar15 = FUN_714c5db0(&uStack_60);
        puVar8 = (undefined4 *)(*(int *)(param_1 + 0x4c) + uVar19 * 0x35);
        *puVar8 = *(undefined4 *)(param_1 + 0x10);
        puVar8[5] = 0;
        *(undefined1 *)(puVar8 + 6) = 0;
        puVar8[4] = 0;
        puVar8[3] = 0;
        puVar8[2] = 0;
        puVar8[1] = uVar19;
        *(uint *)((int)puVar8 + 0x2d) = uVar19;
        *(undefined4 *)((int)puVar8 + 0x1d) = uVar15;
        *(undefined4 *)((int)puVar8 + 0x19) = uVar15;
        lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi
                  (*(int *)(param_1 + 0x80) + uVar19 * 0xc,pbStack_a8 + uVar19 * 0xc);
        lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi
                  (*(int *)(param_1 + 0x8c) + uVar19 * 0xc,&uStack_50);
        iVar3 = *(int *)(param_1 + 0x4c);
        apuStack_88[0] = &uStack_50;
        FUN_719f94b0(&uStack_70,param_1 + 0x58,&uStack_50,&DAT_7008e764,apuStack_88,&puStack_28);
        *(uint *)(uStack_70 + 0x1c) = uVar19 * 0x35 + iVar3;
        if ((uStack_60 & 1) != 0) {
          qNQrlu(uStack_58);
        }
        if ((uStack_50 & 1) != 0) {
          qNQrlu(pbStack_48);
        }
        uVar19 = uVar19 + 1;
        pbVar11 = pbStack_a4;
        pbVar23 = pbStack_a8;
      } while (uVar19 < (uint)(((int)pbStack_a4 - (int)pbStack_a8 >> 2) * -0x55555555));
    }
  }
  *(undefined1 *)(param_1 + 0xc) = 1;
  pbVar9 = pbVar11;
  if (pbVar23 != (byte *)0x0) {
    while (pbVar1 = pbVar11, pbVar1 != pbVar23) {
      pbVar11 = pbVar1 + -0xc;
      pbVar9 = pbStack_a8;
      if ((*pbVar11 & 1) != 0) {
        qNQrlu(*(undefined4 *)(pbVar1 + -4));
        pbVar9 = pbStack_a8;
      }
    }
    pbStack_a4 = pbVar23;
    qNQrlu(pbVar9);
  }
  uVar15 = 0;
  uVar10 = 0;
LAB_719f6944:
  if ((abStack_38[0] & 1) != 0) {
    qNQrlu(uStack_30);
  }
  return CONCAT44(uVar15,uVar10);
}


// =========================================================================
// Function: FUN_719f73a0
// Entry: 0x719f73a0 | Size: 736 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_719f73a0(undefined4 param_1,uint *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_38 [16];
  int iStack_28;
  
  iStack_28 = _ext___stack_chk_guard;
  FUN_714c5bec(param_1,0);
  iVar8 = FUN_714c5410(param_1,auStack_38,0x10);
  if (iVar8 == 0) {
    FUN_714c8a1c(param_1,auStack_38);
    FUN_714c5bec(param_1,0);
    FUN_714c5410(param_1,param_2,8);
    FUN_714c5410(param_1,param_2 + 2,8);
    FUN_714c5410(param_1,param_2 + 4,8);
    FUN_714c5410(param_1,param_2 + 6,4);
    iVar8 = FUN_714c8c44(param_1);
    if (iVar8 != 0) {
      uVar9 = *(uint *)(iVar8 + 0x28);
      iVar8 = *(int *)(iVar8 + 0x2c);
      uVar12 = param_2[3] ^ uVar9 + 0xe96dd4de;
      uVar10 = param_2[5] ^ 0xa4a44072 - uVar9;
      uVar4 = (ulonglong)uVar12 * (ulonglong)uVar10;
      uVar11 = param_2[4] ^ iVar8 + -0x24686f7d + (uint)(0x16922b21 < uVar9);
      uVar5 = (ulonglong)uVar11 * (ulonglong)uVar10;
      uVar10 = param_2[6] ^ 0x1f67b3b7 - (iVar8 + (uint)(0xa4a44072 < uVar9));
      uVar1 = (ulonglong)uVar10 * (ulonglong)uVar12 + (uVar5 & 0xffffffff) + (uVar4 >> 0x20);
      lVar2 = (ulonglong)uVar10 * (ulonglong)uVar11 + (uVar5 >> 0x20) + (uVar1 >> 0x20);
      uVar12 = param_2[2] ^ uVar9 + 0x396cfeb8;
      uVar10 = param_2[3] ^ iVar8 + -0x41b45bdd + (uint)(0xc6930147 < uVar9);
      uVar11 = param_2[4] ^ 0x2c81017c - uVar9;
      uVar9 = param_2[5] ^ 0x1cad21f7 - (iVar8 + (uint)(0x2c81017c < uVar9));
      uVar6 = (ulonglong)uVar12 * (ulonglong)uVar11;
      uVar7 = (ulonglong)uVar10 * (ulonglong)uVar11;
      uVar5 = (ulonglong)uVar9 * (ulonglong)uVar12 + (uVar7 & 0xffffffff) + (uVar6 >> 0x20);
      lVar3 = (ulonglong)uVar9 * (ulonglong)uVar10 + (uVar7 >> 0x20) + (uVar5 >> 0x20);
      uVar10 = (uint)uVar4 ^ (uint)lVar2;
      uVar11 = (uint)uVar6 ^ (uint)lVar3;
      uVar9 = uVar11 + uVar10;
      uVar10 = ((uint)uVar5 ^ (uint)((ulonglong)lVar3 >> 0x20)) +
               ((uint)uVar1 ^ (uint)((ulonglong)lVar2 >> 0x20)) + (uint)CARRY4(uVar11,uVar10) +
               0x5c5581de + (uint)(0x89942d73 < uVar9);
      uVar9 = uVar9 + 0x766bd28c ^ uVar10 >> 5;
      lVar2 = (ulonglong)uVar9 * 0x9e3779f9;
      uVar10 = uVar10 * -0x61c88607 + uVar9 * 0x16566791 + (int)((ulonglong)lVar2 >> 0x20);
      if (*param_2 == (uVar10 ^ (uint)lVar2) && param_2[1] == uVar10) goto LAB_719f75b8;
    }
    FUN_714c8c04(param_1);
  }
LAB_719f75b8:
  if (_ext___stack_chk_guard != iStack_28) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail(iStack_28);
  }
  return;
}


// =========================================================================
// Function: FUN_719f776c
// Entry: 0x719f776c | Size: 64 bytes
// =========================================================================

void FUN_719f776c(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  iVar1 = *(int *)(param_1 + 100);
  *(undefined4 *)(param_1 + 100) = 0;
  if (iVar1 != 0) {
    qNQrlu();
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  return;
}


// =========================================================================
// Function: FUN_719f77d4
// Entry: 0x719f77d4 | Size: 460 bytes
// =========================================================================

void FUN_719f77d4(byte *param_1,int param_2,uint param_3)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 uStack_1c;
  
  if (*(char *)(param_2 + 0x14) != '\0') {
    pbVar1 = (byte *)(*(int *)(param_2 + 0x8c) + param_3 * 0xc);
    if ((*pbVar1 & 1) != 0) {
      FUN_712f6d58(param_1,*(undefined4 *)(pbVar1 + 8),*(undefined4 *)(pbVar1 + 4));
      return;
    }
    uVar3 = *(undefined4 *)(pbVar1 + 4);
    uVar2 = *(undefined4 *)(pbVar1 + 8);
    *(undefined4 *)param_1 = *(undefined4 *)pbVar1;
    *(undefined4 *)(param_1 + 4) = uVar3;
    *(undefined4 *)(param_1 + 8) = uVar2;
    return;
  }
  if (param_3 < *(uint *)(param_2 + 0x70)) {
LAB_719f7858:
    FUN_714c5bec(*(undefined4 *)(param_2 + 0x28),param_3);
    FUN_714c5410(*(undefined4 *)(param_2 + 0x28),&uStack_1c,4);
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    wLbjLaQkcEfeJRuCRxg_oDQcVLMtFLsEzzpxnohPiQoEZoiZepfgwvWqHNdtGu_imMLxObZzXQrY
              (param_1,uStack_1c,0);
    pbVar1 = *(byte **)(param_1 + 8);
    if ((*param_1 & 1) == 0) {
      pbVar1 = param_1 + 1;
    }
    FUN_714c5410(*(undefined4 *)(param_2 + 0x28),pbVar1,uStack_1c);
    return;
  }
  uVar4 = *(int *)(param_2 + 0x68) - *(int *)(param_2 + 100);
  if ((uVar4 < 4) || (uVar6 = param_3 - *(uint *)(param_2 + 0x70), uVar4 - 4 < uVar6))
  goto LAB_719f7858;
  puVar7 = (uint *)(*(int *)(param_2 + 100) + uVar6);
  uVar5 = *puVar7;
  if ((uVar4 - uVar6) - 4 < uVar5) goto LAB_719f7858;
  if (0xfffffff7 < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c();
  }
  if (uVar5 < 0xb) {
    pbVar1 = param_1 + 1;
    *param_1 = (byte)(uVar5 << 1);
    if (uVar5 == 0) goto LAB_719f7930;
  }
  else {
    pbVar1 = (byte *)thunk_MwhHq((uVar5 | 7) + 1);
    *(byte **)(param_1 + 8) = pbVar1;
    *(uint *)param_1 = (uVar5 | 7) + 2;
    *(uint *)(param_1 + 4) = uVar5;
  }
  imp___aeabi_memmove(pbVar1,puVar7 + 1,uVar5);
LAB_719f7930:
  pbVar1[uVar5] = 0;
  return;
}


// =========================================================================
// Function: FUN_719f7a3c
// Entry: 0x719f7a3c | Size: 248 bytes
// =========================================================================

void FUN_719f7a3c(undefined4 *param_1,int param_2,uint param_3,int param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  if (param_4 == 1) {
    cVar1 = *(char *)(param_2 + 0x14);
    uVar5 = thunk_MwhHq(0x10c);
    if (cVar1 != '\0') {
      iVar2 = *(int *)(*(int *)(param_2 + 0x74) + param_3 * 4);
LAB_719f7a7c:
      imp___aeabi_memcpy(uVar5,iVar2,0x10c);
      *param_1 = uVar5;
      return;
    }
    imp___aeabi_memclr8(uVar5,0x10c);
    if (*(uint *)(param_2 + 0x70) <= param_3) {
      uVar4 = *(int *)(param_2 + 0x68) - *(int *)(param_2 + 100);
      if ((0x10b < uVar4) && (uVar3 = param_3 - *(uint *)(param_2 + 0x70), uVar3 <= uVar4 - 0x10c))
      {
        iVar2 = *(int *)(param_2 + 100) + uVar3;
        goto LAB_719f7a7c;
      }
    }
    FUN_714c5bec(*(undefined4 *)(param_2 + 0x28),param_3);
    FUN_714c5410(*(undefined4 *)(param_2 + 0x28),uVar5,0x10c);
  }
  *param_1 = uVar5;
  return;
}


// =========================================================================
// Function: FUN_719f7b9c
// Entry: 0x719f7b9c | Size: 8 bytes
// =========================================================================

int FUN_719f7b9c(int param_1)

{
  return param_1 + 0x4c;
}


// =========================================================================
// Function: FUN_719f7bbc
// Entry: 0x719f7bbc | Size: 920 bytes
// =========================================================================

uint FUN_719f7bbc(int param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  byte abStack_3c [8];
  uint uStack_34;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  
  if (*(char *)(param_1 + 0x14) == '\0') {
    FUN_714c5bec(*(undefined4 *)(param_1 + 0x28),param_5 + param_4);
    FUN_714c5410(*(undefined4 *)(param_1 + 0x28),param_2,param_3);
    uVar3 = *(uint *)(param_1 + 0x38);
    if ((uVar3 <= param_4) && (uVar3 = *(uint *)(param_1 + 0x3c), param_4 < uVar3)) {
      iVar5 = FUN_714c8c44(*(undefined4 *)(param_1 + 0x28));
      uVar3 = 0;
      if (iVar5 != 0) {
        uVar11 = param_5 + param_3;
        uVar3 = 0;
        uVar2 = (uint)CARRY4(param_5,param_3);
        if (param_3 != 0) {
          uVar3 = (uint)*(byte *)(iVar5 + 0x30);
        }
        if (param_3 != 0 && uVar3 != 0) {
          if (param_5 < 0x100) {
            uVar3 = 0x100;
            if (uVar11 < 0x100) {
              uVar3 = uVar11;
            }
            if (uVar2 != 0) {
              uVar3 = 0x100;
            }
            FUN_719f87c8(iVar5,param_2,uVar3 - param_5);
          }
          uVar9 = param_5 >> 0xd;
          if (param_5 < 0x2000) {
            uVar9 = 1;
          }
          bVar12 = uVar11 <= uVar9 << 0xd;
          uVar3 = -(uVar2 + !bVar12);
          if ((uint)bVar12 <= -uVar2) {
            uVar3 = uVar9 << 0xd;
            uVar6 = 0;
            iVar10 = 0;
            do {
              uVar7 = uVar3 | 0x40;
              bVar12 = uVar2 <= uVar6;
              bVar1 = (uint)(uVar7 <= uVar11) <= uVar2 - uVar6;
              uVar8 = uVar6;
              if (bVar12 && bVar1) {
                uVar8 = uVar2;
              }
              if (-uVar6 < (uint)(uVar3 <= param_5)) {
                uVar6 = 0;
                uVar3 = param_5;
              }
              if (bVar12 && bVar1) {
                uVar7 = uVar11;
              }
              if (uVar6 <= uVar8 && (uint)(uVar7 <= uVar3) <= uVar6 - uVar8) {
                FUN_719f87c8(iVar5,param_2 + (uVar3 - param_5),uVar7 - uVar3,uVar6,uVar3 + param_4,
                             uVar6 + CARRY4(uVar3,param_4));
              }
              bVar12 = 0xfffffffe < uVar9;
              uVar9 = uVar9 + 1;
              iVar10 = iVar10 + (uint)bVar12;
              uVar6 = iVar10 * 0x2000 | uVar9 >> 0x13;
              uVar3 = uVar9 * 0x2000;
            } while (uVar6 <= uVar2 && (uint)(uVar11 <= uVar9 * 0x2000) <= uVar6 - uVar2);
          }
        }
      }
    }
    return uVar3;
  }
  if (*(int *)(param_1 + 0x10) != 1) {
    FUN_71526338(abStack_3c,param_1 + 0x18,*(int *)(param_1 + 0x80) + param_4 * 0xc);
    uVar3 = uStack_34;
    if ((abStack_3c[0] & 1) == 0) {
      uVar3 = (uint)abStack_3c | 1;
    }
    uVar4 = imp_fopen(uVar3,&DAT_70068f6e);
    if ((abStack_3c[0] & 1) != 0) {
      qNQrlu(uStack_34);
    }
    imp_fseek(uVar4,param_5,0);
    imp_fread(param_2,1,param_3,uVar4);
    uVar3 = imp_fclose(uVar4);
    return uVar3;
  }
  FUN_71526338(abStack_3c,param_1 + 0x18,*(int *)(param_1 + 0x80) + param_4 * 0xc);
  uVar3 = uStack_34;
  if ((abStack_3c[0] & 1) == 0) {
    uVar3 = (uint)abStack_3c | 1;
  }
  uVar4 = FUN_71919540(uVar3,auStack_28,auStack_2c,auStack_30,0);
  if ((abStack_3c[0] & 1) != 0) {
    qNQrlu(uStack_34);
  }
  imp___aeabi_memcpy(param_2,uVar4,param_3);
  uVar3 = imp_free(uVar4);
  return uVar3;
}


// =========================================================================
// Function: FUN_719f807c
// Entry: 0x719f807c | Size: 772 bytes
// =========================================================================

undefined4 FUN_719f807c(byte *param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  byte bVar14;
  uint uVar15;
  int unaff_r7;
  bool bVar16;
  bool bVar17;
  
  uVar5 = 0;
  if (param_2 != 0 && param_3 != 0) {
    bVar16 = *(char *)(param_2 + 8) != '\0';
    if (bVar16) {
      unaff_r7 = *(int *)(param_2 + 0x19);
    }
    if (!bVar16 || unaff_r7 == 0) {
      FUN_719f7bbc(param_1,param_3,*(undefined4 *)(param_2 + 0x1d),*(undefined4 *)(param_2 + 0x2d),0
                  );
      return 1;
    }
    iVar6 = imp_malloc(unaff_r7);
    uVar5 = 0;
    if (iVar6 != 0) {
      FUN_719f7bbc(param_1,iVar6,unaff_r7,*(undefined4 *)(param_2 + 0x2d),0);
      iVar7 = qq_DXQfD_mTyeCa(param_3,*(undefined4 *)(param_2 + 0x1d),iVar6,
                              *(undefined4 *)(param_2 + 0x19));
      imp_free(iVar6);
      iVar6 = LsnTkDchAn_z(iVar7);
      if ((iVar6 != 0) || (uVar5 = 1, iVar7 != *(int *)(param_2 + 0x1d))) {
        pcVar8 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_70136504);
        if (*pcVar8 == '\0') {
          puVar9 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_701364f4);
          *(undefined1 *)(puVar9 + 0xd) = 1;
          uVar3 = DAT_7008e73c;
          uVar2 = DAT_7008e738;
          uVar5 = DAT_7008e734;
          *puVar9 = DAT_7008e730;
          puVar9[1] = uVar5;
          puVar9[2] = uVar2;
          puVar9[3] = uVar3;
          uVar3 = DAT_7008e74c;
          uVar2 = DAT_7008e748;
          uVar5 = DAT_7008e744;
          puVar9[4] = DAT_7008e740;
          puVar9[5] = uVar5;
          puVar9[6] = uVar2;
          puVar9[7] = uVar3;
          uVar4 = DAT_7008e760;
          uVar3 = DAT_7008e75c;
          uVar2 = DAT_7008e758;
          uVar5 = DAT_7008e754;
          puVar9[8] = DAT_7008e750;
          puVar9[9] = uVar5;
          puVar9[10] = uVar2;
          puVar9[0xb] = uVar3;
          puVar9[0xc] = uVar4;
          GFDIUClbc_QcPNgD_wH(&LAB_719f8c30,puVar9,&DAT_70b0e000);
          puVar10 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_70136504);
          *puVar10 = 1;
        }
        iVar6 = XcxSszXLPjQrEGhecEv_(&DAT_701364f4);
        if (*(char *)(iVar6 + 0x34) != '\0') {
          uVar13 = 0;
          uVar15 = 0;
          do {
            iVar7 = (uVar13 & 7) * 8;
            uVar11 = iVar7 - 0x20;
            bVar14 = (byte)(0x810979d5 >> iVar7) |
                     (byte)(0x31bb7579 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
            if (-1 < (int)uVar11) {
              bVar14 = (byte)(0x31bb7579 >> (uVar11 & 0xff));
            }
            *(byte *)(iVar6 + uVar13) = *(byte *)(iVar6 + uVar13) ^ bVar14;
            bVar17 = 0xfffffffe < uVar13;
            bVar16 = uVar15 == 0;
            bVar1 = (0x32 < uVar13) <= uVar15;
            uVar13 = uVar13 + 1;
            uVar15 = uVar15 + bVar17;
          } while (bVar16 && bVar1);
          *(undefined1 *)(iVar6 + 0x34) = 0;
        }
        pbVar12 = *(byte **)(param_1 + 8);
        if ((*param_1 & 1) == 0) {
          pbVar12 = param_1 + 1;
        }
        FUN_7188543c(iVar6,pbVar12,*(undefined4 *)(param_2 + 0x19),*(undefined4 *)(param_2 + 0x1d));
        return 0;
      }
    }
  }
  return uVar5;
}


// =========================================================================
// Function: FUN_719f84c8
// Entry: 0x719f84c8 | Size: 540 bytes
// =========================================================================

undefined4 FUN_719f84c8(int param_1,uint *param_2)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  undefined4 uVar6;
  byte *pbVar7;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  byte *pbStack_28;
  
  if ((*param_2 & 1) == 0) {
    uStack_30 = *param_2;
    uStack_2c = param_2[1];
    pbStack_28 = (byte *)param_2[2];
  }
  else {
    FUN_712f6d58(&uStack_30,param_2[2],param_2[1]);
  }
  pbVar1 = (byte *)((uint)&uStack_30 | 1);
  pbVar7 = pbStack_28;
  uVar2 = uStack_2c;
  if ((uStack_30 & 1) == 0) {
    uVar2 = (uint)((byte)uStack_30 >> 1);
    pbVar7 = pbVar1;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    if (*pbVar7 == 0x5c) {
      *pbVar7 = 0x2f;
    }
    pbVar7 = pbVar7 + 1;
  }
  pbVar7 = pbStack_28;
  uVar2 = uStack_2c;
  if ((uStack_30 & 1) == 0) {
    pbVar7 = pbVar1;
    uVar2 = (uint)((byte)uStack_30 >> 1);
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    bVar4 = *pbVar7;
    if (0xffffffe5 < bVar4 - 0x5b) {
      bVar4 = bVar4 | 0x20;
    }
    *pbVar7 = bVar4;
    pbVar7 = pbVar7 + 1;
  }
  pbVar7 = pbStack_28;
  if ((uStack_30 & 1) == 0) {
    pbVar7 = pbVar1;
  }
  uVar2 = imp_strlen(pbVar7);
  if (0xfffffff7 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_3c);
  }
  if (uVar2 < 0xb) {
    uVar5 = (uint)&uStack_3c | 1;
    uStack_3c = CONCAT31(uStack_3c._1_3_,(char)(uVar2 << 1));
    if (uVar2 == 0) goto LAB_719f8628;
  }
  else {
    uVar5 = thunk_MwhHq((uVar2 | 7) + 1);
    uStack_3c = (uVar2 | 7) + 2;
    uStack_38 = uVar2;
    uStack_34 = uVar5;
  }
  imp___aeabi_memmove(uVar5,pbVar7,uVar2);
LAB_719f8628:
  uVar6 = 0;
  *(undefined1 *)(uVar5 + uVar2) = 0;
  iVar3 = FUN_719f9758(param_1 + 0x58,&uStack_3c);
  if ((uStack_3c & 1) != 0) {
    qNQrlu(uStack_34);
  }
  if (param_1 + 0x5c != iVar3) {
    uVar6 = *(undefined4 *)(iVar3 + 0x1c);
  }
  if ((uStack_30 & 1) != 0) {
    qNQrlu(pbStack_28);
  }
  return uVar6;
}


// =========================================================================
// Function: FUN_719f8780
// Entry: 0x719f8780 | Size: 16 bytes
// =========================================================================

bool FUN_719f8780(int param_1)

{
  return *(int *)(param_1 + 0x28) != 0;
}


// =========================================================================
// Function: FUN_719f87a8
// Entry: 0x719f87a8 | Size: 8 bytes
// =========================================================================

undefined1 FUN_719f87a8(int param_1)

{
  return *(undefined1 *)(param_1 + 0x14);
}


// =========================================================================
// Function: FUN_719f87c8
// Entry: 0x719f87c8 | Size: 1088 bytes
// =========================================================================

void FUN_719f87c8(uint param_1,uint param_2,uint param_3,undefined4 param_4,uint param_5,
                 uint param_6)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint auStack_a8 [16];
  uint auStack_68 [17];
  
  uVar4 = param_1;
  uVar3 = param_2;
  if (param_3 != 0) {
    uVar4 = (uint)*(byte *)(param_1 + 0x30);
    uVar3 = param_1;
  }
  if (param_3 != 0 && uVar4 != 0) {
    uVar4 = param_5 & 0x3f;
    uVar18 = 0;
    uVar16 = param_5 >> 6 | param_6 << 0x1a;
    param_6 = param_6 >> 6;
    do {
      if (*(uint *)(uVar3 + 0x38) != uVar16 || *(uint *)(uVar3 + 0x3c) != param_6) {
        auStack_68[3] = 0x6b206574;
        auStack_68[2] = 0x79622d32;
        auStack_68[1] = 0x3320646e;
        auStack_68[0] = 0x61707865;
        imp___aeabi_memcpy(auStack_68 + 4,uVar3,0x20);
        uStack_b8 = *(uint *)(uVar3 + 0x20);
        auStack_a8[0xf] = *(uint *)(uVar3 + 0x24);
        auStack_68[0xd] = param_6;
        auStack_68[0xc] = uVar16;
        iVar8 = 4;
        uStack_b0 = auStack_68[9];
        uStack_b4 = auStack_68[1];
        auStack_a8[6] = auStack_68[6];
        auStack_a8[0xb] = auStack_68[0xb];
        auStack_a8[4] = auStack_68[4];
        auStack_a8[10] = auStack_68[10];
        auStack_a8[7] = auStack_68[7];
        auStack_a8[5] = auStack_68[5];
        auStack_a8[8] = auStack_68[8];
        uStack_bc = uVar16;
        uStack_ac = param_6;
        do {
          auStack_a8[0xf] = auStack_a8[0xf] ^ auStack_68[3] + auStack_a8[7];
          auStack_a8[0xb] = auStack_a8[0xb] + (auStack_a8[0xf] >> 0x10 | auStack_a8[0xf] << 0x10);
          uVar5 = auStack_a8[0xb] ^ auStack_a8[7];
          uVar15 = auStack_68[3] + auStack_a8[7] + (uVar5 >> 0x14 | uVar5 << 0xc);
          uStack_bc = uStack_bc ^ auStack_68[0] + auStack_a8[4];
          auStack_a8[8] = auStack_a8[8] + (uStack_bc >> 0x10 | uStack_bc << 0x10);
          uVar9 = auStack_a8[8] ^ auStack_a8[4];
          auStack_68[0] = auStack_68[0] + auStack_a8[4] + (uVar9 >> 0x14 | uVar9 << 0xc);
          uVar6 = auStack_68[0] ^ (uStack_bc >> 0x10 | uStack_bc << 0x10);
          auStack_a8[8] = auStack_a8[8] + (uVar6 >> 0x18 | uVar6 << 8);
          uVar19 = auStack_a8[8] ^ (uVar9 >> 0x14 | uVar9 << 0xc);
          uStack_b8 = uStack_b8 ^ auStack_68[2] + auStack_a8[6];
          auStack_68[3] = uVar15 + (uVar19 >> 0x19 | uVar19 << 7);
          auStack_a8[10] = auStack_a8[10] + (uStack_b8 >> 0x10 | uStack_b8 << 0x10);
          uVar17 = auStack_a8[10] ^ auStack_a8[6];
          auStack_68[2] = auStack_68[2] + auStack_a8[6] + (uVar17 >> 0x14 | uVar17 << 0xc);
          uVar9 = auStack_68[2] ^ (uStack_b8 >> 0x10 | uStack_b8 << 0x10);
          uVar7 = auStack_68[3] ^ (uVar9 >> 0x18 | uVar9 << 8);
          auStack_a8[10] = auStack_a8[10] + (uVar9 >> 0x18 | uVar9 << 8);
          uStack_ac = uStack_ac ^ uStack_b4 + auStack_a8[5];
          uStack_b0 = uStack_b0 + (uStack_ac >> 0x10 | uStack_ac << 0x10);
          uVar10 = uStack_b0 ^ auStack_a8[5];
          uStack_b4 = uStack_b4 + auStack_a8[5] + (uVar10 >> 0x14 | uVar10 << 0xc);
          uVar11 = uStack_b4 ^ (uStack_ac >> 0x10 | uStack_ac << 0x10);
          uStack_b0 = uStack_b0 + (uVar11 >> 0x18 | uVar11 << 8);
          uVar9 = uStack_b0 + (uVar7 >> 0x10 | uVar7 << 0x10);
          uVar19 = uVar9 ^ (uVar19 >> 0x19 | uVar19 << 7);
          auStack_68[3] = auStack_68[3] + (uVar19 >> 0x14 | uVar19 << 0xc);
          uVar20 = auStack_68[3] ^ (uVar7 >> 0x10 | uVar7 << 0x10);
          uStack_b8 = uVar20 >> 0x18 | uVar20 << 8;
          uVar15 = uVar15 ^ (auStack_a8[0xf] >> 0x10 | auStack_a8[0xf] << 0x10);
          auStack_a8[0xb] = auStack_a8[0xb] + (uVar15 >> 0x18 | uVar15 << 8);
          uVar5 = auStack_a8[0xb] ^ (uVar5 >> 0x14 | uVar5 << 0xc);
          auStack_68[2] = auStack_68[2] + (uVar5 >> 0x19 | uVar5 << 7);
          uVar7 = auStack_68[2] ^ (uVar11 >> 0x18 | uVar11 << 8);
          auStack_a8[8] = auStack_a8[8] + (uVar7 >> 0x10 | uVar7 << 0x10);
          uVar5 = auStack_a8[8] ^ (uVar5 >> 0x19 | uVar5 << 7);
          auStack_68[2] = auStack_68[2] + (uVar5 >> 0x14 | uVar5 << 0xc);
          uVar7 = auStack_68[2] ^ (uVar7 >> 0x10 | uVar7 << 0x10);
          uStack_ac = uVar7 >> 0x18 | uVar7 << 8;
          auStack_a8[8] = auStack_a8[8] + (uVar7 >> 0x18 | uVar7 << 8);
          uVar7 = auStack_a8[10] ^ (uVar17 >> 0x14 | uVar17 << 0xc);
          uStack_b0 = uStack_b0 ^ (uVar10 >> 0x14 | uVar10 << 0xc);
          uVar5 = auStack_a8[8] ^ (uVar5 >> 0x14 | uVar5 << 0xc);
          uStack_b4 = uStack_b4 + (uVar7 >> 0x19 | uVar7 << 7);
          uVar6 = uStack_b4 ^ (uVar6 >> 0x18 | uVar6 << 8);
          auStack_a8[7] = uVar5 >> 0x19 | uVar5 << 7;
          auStack_a8[0xb] = auStack_a8[0xb] + (uVar6 >> 0x10 | uVar6 << 0x10);
          uVar5 = auStack_a8[0xb] ^ (uVar7 >> 0x19 | uVar7 << 7);
          uStack_b4 = uStack_b4 + (uVar5 >> 0x14 | uVar5 << 0xc);
          uVar6 = uStack_b4 ^ (uVar6 >> 0x10 | uVar6 << 0x10);
          uStack_bc = uVar6 >> 0x18 | uVar6 << 8;
          auStack_a8[0xb] = auStack_a8[0xb] + (uVar6 >> 0x18 | uVar6 << 8);
          uVar5 = auStack_a8[0xb] ^ (uVar5 >> 0x14 | uVar5 << 0xc);
          auStack_a8[6] = uVar5 >> 0x19 | uVar5 << 7;
          auStack_68[0] = auStack_68[0] + (uStack_b0 >> 0x19 | uStack_b0 << 7);
          uVar5 = auStack_68[0] ^ (uVar15 >> 0x18 | uVar15 << 8);
          auStack_a8[10] = auStack_a8[10] + (uVar5 >> 0x10 | uVar5 << 0x10);
          uVar6 = auStack_a8[10] ^ (uStack_b0 >> 0x19 | uStack_b0 << 7);
          auStack_68[0] = auStack_68[0] + (uVar6 >> 0x14 | uVar6 << 0xc);
          uVar5 = auStack_68[0] ^ (uVar5 >> 0x10 | uVar5 << 0x10);
          auStack_a8[10] = auStack_a8[10] + (uVar5 >> 0x18 | uVar5 << 8);
          uStack_b0 = uVar9 + (uVar20 >> 0x18 | uVar20 << 8);
          uVar9 = auStack_a8[10] ^ (uVar6 >> 0x14 | uVar6 << 0xc);
          auStack_a8[0xf] = uVar5 >> 0x18 | uVar5 << 8;
          auStack_a8[5] = uVar9 >> 0x19 | uVar9 << 7;
          uVar9 = uStack_b0 ^ (uVar19 >> 0x14 | uVar19 << 0xc);
          iVar8 = iVar8 + -1;
          auStack_a8[4] = uVar9 >> 0x19 | uVar9 << 7;
        } while (iVar8 != 0);
        auStack_a8[0xc] = uStack_bc;
        auStack_a8[0xd] = uStack_ac;
        auStack_a8[1] = uStack_b4;
        auStack_a8[0xe] = uStack_b8;
        iVar8 = 0;
        auStack_a8[0] = auStack_68[0];
        auStack_a8[9] = uStack_b0;
        auStack_a8[2] = auStack_68[2];
        auStack_a8[3] = auStack_68[3];
        do {
          piVar1 = (int *)((int)auStack_a8 + iVar8);
          piVar2 = (int *)((int)auStack_68 + iVar8);
          iVar12 = uVar3 + iVar8;
          iVar8 = iVar8 + 4;
          *(int *)(iVar12 + 0x40) = *piVar2 + *piVar1;
        } while (iVar8 != 0x40);
        *(uint *)(uVar3 + 0x38) = uVar16;
        *(uint *)(uVar3 + 0x3c) = param_6;
      }
      uVar9 = param_3 - uVar18;
      if (0x40 - uVar4 < param_3 - uVar18) {
        uVar9 = 0x40 - uVar4;
      }
      if (param_3 != uVar18) {
        pbVar14 = (byte *)(uVar3 + 0x40 + uVar4);
        uVar4 = uVar9;
        pbVar13 = (byte *)(param_2 + uVar18);
        if (uVar9 < 2) {
          uVar4 = 1;
        }
        do {
          uVar4 = uVar4 - 1;
          *pbVar13 = *pbVar13 ^ *pbVar14;
          pbVar13 = pbVar13 + 1;
          pbVar14 = pbVar14 + 1;
        } while (uVar4 != 0);
      }
      bVar21 = 0xfffffffe < uVar16;
      uVar16 = uVar16 + 1;
      uVar18 = uVar9 + uVar18;
      param_6 = param_6 + bVar21;
      uVar4 = 0;
    } while (uVar18 < param_3);
  }
  return;
}


// =========================================================================
// Function: FUN_719f8c80
// Entry: 0x719f8c80 | Size: 120 bytes
// =========================================================================

void FUN_719f8c80(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  FUN_719f8c80(param_1,*param_2);
  FUN_719f8c80(param_1,param_2[1]);
  if ((*(byte *)(param_2 + 4) & 1) != 0) {
    qNQrlu(param_2[6]);
  }
  thunk_qNQrlu(param_2);
  return;
}


// =========================================================================
// Function: FUN_719f8d54
// Entry: 0x719f8d54 | Size: 464 bytes
// =========================================================================

void FUN_719f8d54(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar3 = param_1[1];
  if (param_2 <= (uint)((param_1[2] - iVar3) * -0x73ecade3)) {
    if (param_2 != 0) {
      uVar5 = param_2 * 0x35 - 0x35;
      iVar6 = (uVar5 / 0x35) * 0x35 + 0x35;
      imp___aeabi_memclr(iVar3,iVar6,uVar5 * 0x3521cfb3);
      iVar3 = iVar3 + iVar6;
    }
    param_1[1] = iVar3;
    return;
  }
  iVar6 = *param_1;
  iVar3 = iVar3 - iVar6;
  uVar5 = iVar3 * -0x73ecade3 + param_2;
  if (uVar5 < 0x4d4873f) {
    iVar1 = param_1[2] - iVar6;
    if (uVar5 < (uint)(iVar1 * 0x1826a43a)) {
      uVar5 = iVar1 * 0x1826a43a;
    }
    if (0x26a439e < (uint)(iVar1 * -0x73ecade3)) {
      uVar5 = 0x4d4873e;
    }
    if (uVar5 == 0) {
      iVar1 = 0;
    }
    else {
      if (0x4d4873e < uVar5) goto LAB_71c22430;
      iVar1 = thunk_MwhHq(uVar5 * 0x35);
    }
    iVar4 = iVar3 + iVar1;
    iVar2 = ((param_2 * 0x35 - 0x35) / 0x35) * 0x35 + 0x35;
    imp___aeabi_memclr(iVar4,iVar2);
    imp___aeabi_memcpy(iVar4 - iVar3,iVar6,iVar3);
    *param_1 = iVar4 - iVar3;
    param_1[1] = iVar4 + iVar2;
    param_1[2] = uVar5 * 0x35 + iVar1;
    if (iVar6 != 0) {
      thunk_qNQrlu(iVar6);
      return;
    }
    return;
  }
  FUN_719f8fb4(param_1);
LAB_71c22430:
                    /* WARNING: Subroutine does not return */
  FUN_712f6cf0();
}


// =========================================================================
// Function: FUN_719f8fb4
// Entry: 0x719f8fb4 | Size: 44 bytes
// =========================================================================

void FUN_719f8fb4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_719f901c
// Entry: 0x719f901c | Size: 452 bytes
// =========================================================================

void FUN_719f901c(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar2 = param_1[1];
  if (param_2 <= (uint)((param_1[2] - iVar2 >> 2) * -0x55555555)) {
    if (param_2 != 0) {
      iVar3 = ((param_2 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
      imp___aeabi_memclr4(iVar2,iVar3);
      iVar2 = iVar2 + iVar3;
    }
    param_1[1] = iVar2;
    return;
  }
  iVar6 = *param_1;
  iVar3 = iVar2 - iVar6 >> 2;
  uVar5 = iVar3 * -0x55555555 + param_2;
  if (0x15555555 < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6ffc(param_1);
  }
  iVar1 = param_1[2] - iVar6 >> 2;
  if (uVar5 < (uint)(iVar1 * 0x55555556)) {
    uVar5 = iVar1 * 0x55555556;
  }
  if (0xaaaaaa9 < (uint)(iVar1 * -0x55555555)) {
    uVar5 = 0x15555555;
  }
  if (uVar5 == 0) {
    iVar1 = 0;
  }
  else {
    if (0x15555555 < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_712f6cf0();
    }
    iVar1 = thunk_MwhHq(uVar5 * 0xc);
  }
  iVar3 = iVar1 + iVar3 * 4;
  iVar4 = ((param_2 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
  imp___aeabi_memclr4(iVar3,iVar4);
  iVar2 = iVar3 - (iVar2 - iVar6);
  imp___aeabi_memcpy4(iVar2,iVar6);
  *param_1 = iVar2;
  param_1[1] = iVar3 + iVar4;
  param_1[2] = iVar1 + uVar5 * 0xc;
  if (iVar6 != 0) {
    thunk_qNQrlu(iVar6);
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_719f9274
// Entry: 0x719f9274 | Size: 324 bytes
// =========================================================================

void FUN_719f9274(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar4 = param_1[1];
  if (param_2 <= (uint)(param_1[2] - iVar4 >> 2)) {
    if (param_2 != 0) {
      imp___aeabi_memclr4(iVar4,param_2 << 2);
      iVar4 = iVar4 + param_2 * 4;
    }
    param_1[1] = iVar4;
    return;
  }
  iVar6 = *param_1;
  iVar7 = iVar4 - iVar6 >> 2;
  uVar5 = param_2 + iVar7;
  if (uVar5 < 0x40000000) {
    uVar2 = param_1[2] - iVar6;
    uVar1 = (int)uVar2 >> 1;
    if (uVar5 < uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffb < uVar2) {
      uVar5 = 0x3fffffff;
    }
    if (uVar5 == 0) {
      iVar3 = 0;
    }
    else {
      if (0x3fffffff < uVar5) goto LAB_71c22530;
      iVar3 = thunk_MwhHq(uVar5 << 2);
    }
    iVar7 = iVar3 + iVar7 * 4;
    imp___aeabi_memclr4(iVar7,param_2 << 2);
    imp___aeabi_memcpy4(iVar3,iVar6,iVar4 - iVar6);
    *param_1 = iVar3;
    param_1[1] = iVar7 + param_2 * 4;
    param_1[2] = iVar3 + uVar5 * 4;
    if (iVar6 != 0) {
      thunk_qNQrlu(iVar6);
      return;
    }
    return;
  }
  FUN_719f9448(param_1);
LAB_71c22530:
                    /* WARNING: Subroutine does not return */
  FUN_712f6cf0();
}


// =========================================================================
// Function: FUN_719f9448
// Entry: 0x719f9448 | Size: 44 bytes
// =========================================================================

void FUN_719f9448(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_719f94b0
// Entry: 0x719f94b0 | Size: 256 bytes
// =========================================================================

void FUN_719f94b0(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uStack_24;
  
  puVar2 = (undefined4 *)FUN_719f9608(param_2,&uStack_24);
  puVar7 = (undefined4 *)*puVar2;
  uVar1 = 0;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)thunk_MwhHq(0x20);
    pbVar3 = (byte *)*param_5;
    if ((*pbVar3 & 1) == 0) {
      uVar6 = *(undefined4 *)(pbVar3 + 4);
      uVar4 = *(undefined4 *)(pbVar3 + 8);
      puVar7[4] = *(undefined4 *)pbVar3;
      puVar7[5] = uVar6;
      puVar7[6] = uVar4;
    }
    else {
      FUN_712f6d58(puVar7 + 4,*(undefined4 *)(pbVar3 + 8),*(undefined4 *)(pbVar3 + 4));
    }
    puVar7[1] = 0;
    puVar7[2] = uStack_24;
    puVar7[7] = 0;
    *puVar7 = 0;
    *puVar2 = puVar7;
    puVar5 = puVar7;
    if (*(int *)*param_2 != 0) {
      *param_2 = *(int *)*param_2;
      puVar5 = (undefined4 *)*puVar2;
    }
    FUN_712f807c(param_2[1],puVar5);
    param_2[2] = param_2[2] + 1;
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 1) = uVar1;
  *param_1 = puVar7;
  return;
}


// =========================================================================
// Function: FUN_719f9608
// Entry: 0x719f9608 | Size: 280 bytes
// =========================================================================

int * FUN_719f9608(int param_1,undefined4 *param_2,byte *param_3)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  int *piVar9;
  int *piVar10;
  
  piVar9 = (int *)(param_1 + 4);
  piVar2 = (int *)*piVar9;
  piVar10 = piVar9;
  if (piVar2 != (int *)0x0) {
    uVar7 = *(uint *)(param_3 + 4);
    pbVar8 = *(byte **)(param_3 + 8);
    if ((*param_3 & 1) == 0) {
      pbVar8 = param_3 + 1;
      uVar7 = (uint)(*param_3 >> 1);
    }
    do {
      while( true ) {
        piVar9 = piVar2;
        uVar4 = piVar9[5];
        iVar5 = piVar9[6];
        if ((*(byte *)(piVar9 + 4) & 1) == 0) {
          iVar5 = (int)piVar9 + 0x11;
          uVar4 = (uint)(*(byte *)(piVar9 + 4) >> 1);
        }
        uVar6 = uVar7;
        if (uVar4 < uVar7) {
          uVar6 = uVar4;
        }
        iVar3 = imp_memcmp(pbVar8,iVar5,uVar6);
        bVar1 = uVar4 <= uVar7;
        if (iVar3 != 0) {
          bVar1 = -1 < iVar3;
        }
        if (!bVar1) break;
        iVar5 = imp_memcmp(iVar5,pbVar8,uVar6);
        bVar1 = -1 < iVar5;
        if (iVar5 == 0) {
          bVar1 = uVar7 <= uVar4;
        }
        if (bVar1) goto LAB_719f96f4;
        piVar10 = piVar9 + 1;
        piVar2 = (int *)*piVar10;
        if ((int *)*piVar10 == (int *)0x0) goto LAB_719f96f4;
      }
      piVar2 = (int *)*piVar9;
      piVar10 = piVar9;
    } while ((int *)*piVar9 != (int *)0x0);
  }
LAB_719f96f4:
  *param_2 = piVar9;
  return piVar10;
}


// =========================================================================
// Function: FUN_719f9758
// Entry: 0x719f9758 | Size: 280 bytes
// =========================================================================

int * FUN_719f9758(int param_1,byte *param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  byte *pbVar10;
  
  piVar9 = (int *)(param_1 + 4);
  piVar5 = (int *)*piVar9;
  if (piVar5 != (int *)0x0) {
    pbVar10 = *(byte **)(param_2 + 8);
    uVar8 = *(uint *)(param_2 + 4);
    piVar6 = piVar9;
    if ((*param_2 & 1) == 0) {
      pbVar10 = param_2 + 1;
      uVar8 = (uint)(*param_2 >> 1);
    }
    do {
      uVar7 = piVar5[5];
      iVar3 = piVar5[6];
      if ((*(byte *)(piVar5 + 4) & 1) == 0) {
        uVar7 = (uint)(*(byte *)(piVar5 + 4) >> 1);
        iVar3 = (int)piVar5 + 0x11;
      }
      uVar4 = uVar7;
      if (uVar8 < uVar7) {
        uVar4 = uVar8;
      }
      iVar3 = imp_memcmp(iVar3,pbVar10,uVar4);
      bVar1 = uVar8 <= uVar7;
      if (iVar3 != 0) {
        bVar1 = -1 < iVar3;
      }
      piVar2 = piVar5;
      if (!bVar1) {
        piVar5 = piVar5 + 1;
        piVar2 = piVar6;
      }
      piVar6 = piVar2;
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)0x0);
    if (piVar6 != piVar9) {
      uVar7 = piVar6[5];
      iVar3 = piVar6[6];
      if ((*(byte *)(piVar6 + 4) & 1) == 0) {
        uVar7 = (uint)(*(byte *)(piVar6 + 4) >> 1);
        iVar3 = (int)piVar6 + 0x11;
      }
      uVar4 = uVar8;
      if (uVar7 < uVar8) {
        uVar4 = uVar7;
      }
      iVar3 = imp_memcmp(pbVar10,iVar3,uVar4);
      bVar1 = uVar7 <= uVar8;
      if (iVar3 != 0) {
        bVar1 = -1 < iVar3;
      }
      if (bVar1) {
        piVar9 = piVar6;
      }
    }
  }
  return piVar9;
}


// =========================================================================
// Function: bGhOQgLuIAkZtmmrbConYQQoveQTzlRb_gjolxcsDLxEKbROHhbAmAExQaQwSAWPIREdvzPce_GUR_ciaesmXaiXRVfvoRTINFAriIpKupAjCeXuqKOjfPkqonwzgLvIfvyjhgXDIeEKkliXiAlbWpxG
// Entry: 0x719f98a8 | Size: 20 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void bGhOQgLuIAkZtmmrbConYQQoveQTzlRb_gjolxcsDLxEKbROHhbAmAExQaQwSAWPIREdvzPce_GUR_ciaesmXaiXRVfvoRTINFAriIpKupAjCeXuqKOjfPkqonwzgLvIfvyjhgXDIeEKkliXiAlbWpxG
               (void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: gU_okWobkqLbcDT_kstxqtkDnnAFed
// Entry: 0x719f9a38 | Size: 24 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void gU_okWobkqLbcDT_kstxqtkDnnAFed(undefined4 *param_1)

{
  *param_1 = &DAT_70b0ff50;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: noKWRqUBSjAQPbbNlkToVjWhMkZUXw
// Entry: 0x719f9ec4 | Size: 4 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void noKWRqUBSjAQPbbNlkToVjWhMkZUXw(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: UYVTdmLtXikCIiIlxTDfNaRaV_X_VhbLGM
// Entry: 0x719f9f24 | Size: 60 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void UYVTdmLtXikCIiIlxTDfNaRaV_X_VhbLGM(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  
  DataMemoryBarrier(0x1b);
  *(undefined1 *)(param_1 + 0x3c) = 1;
  puVar2 = (undefined4 *)(param_1 + 0x60);
  DataMemoryBarrier(0x1b);
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(puVar2);
    bVar1 = (bool)hasExclusiveAccess(puVar2);
  } while (!bVar1);
  *puVar2 = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  DataMemoryBarrier(0x1b);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: RzoWWsPhVnWTBZpsdAweiFrKvSDOSEbfl
// Entry: 0x719fa100 | Size: 66 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void RzoWWsPhVnWTBZpsdAweiFrKvSDOSEbfl(int param_1)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  
  pbVar3 = (byte *)(param_1 + 0x3c);
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(pbVar3);
    bVar1 = *pbVar3;
    bVar2 = (bool)hasExclusiveAccess(pbVar3);
  } while (!bVar2);
  *pbVar3 = 0;
  DataMemoryBarrier(0x1b);
  if ((bVar1 & 1) != 0) {
    DataMemoryBarrier(0x1b);
    *(undefined1 *)(param_1 + 0x95) = 0;
    DataMemoryBarrier(0x1b);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}


// =========================================================================
// Function: wmuvxq_JaMUVRTBWKUzRBkGKjlpTOCbjrAn_QFy
// Entry: 0x719fa396 | Size: 14 bytes
// =========================================================================

byte wmuvxq_JaMUVRTBWKUzRBkGKjlpTOCbjrAn_QFy(int param_1)

{
  DataMemoryBarrier(0x1b);
  return *(byte *)(param_1 + 0x3c) & 1;
}


// =========================================================================
// Function: UKTlKkJICGplUMwSPflErG_TcXbsNZBSEbCHyYMqgcf
// Entry: 0x719fa3bc | Size: 158 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void UKTlKkJICGplUMwSPflErG_TcXbsNZBSEbCHyYMqgcf(int param_1,undefined1 param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  float fVar3;
  
  DataMemoryBarrier(0x1b);
  *(undefined1 *)(param_1 + 0x3d) = param_2;
  DataMemoryBarrier(0x1b);
  if (*(int *)(param_1 + 0x11c) != 0) {
    DataMemoryBarrier(0x1b);
    if (((*(byte *)(param_1 + 0x3d) & 1) == 0) &&
       (DataMemoryBarrier(0x1b), *(int *)(param_1 + 0x40) == 0)) {
      fVar3 = 1.0;
    }
    else {
      fVar3 = *(float *)(param_1 + 0x68);
      bVar1 = fVar3 < 0.15;
      if (1.0 < fVar3) {
        fVar3 = 1.0;
      }
      if ((int)((uint)bVar1 << 0x1f) < 0) {
        fVar3 = 0.15;
      }
      DataMemoryBarrier(0x1b);
    }
    DataMemoryBarrier(0x1b);
    *(float *)(*(int *)(param_1 + 0x11c) + 0x1c) = fVar3;
    DataMemoryBarrier(0x1b);
  }
  puVar2 = (undefined4 *)(param_1 + 0x60);
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(puVar2);
    bVar1 = (bool)hasExclusiveAccess(puVar2);
  } while (!bVar1);
  *puVar2 = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  DataMemoryBarrier(0x1b);
  DataMemoryBarrier(0x1b);
  if ((*(byte *)(param_1 + 0x3c) & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}


// =========================================================================
// Function: BIKQtAqxsqzWgdqwBVhyTfznpkGondwlkcKrVxLxoXx
// Entry: 0x719fa4e8 | Size: 14 bytes
// =========================================================================

byte BIKQtAqxsqzWgdqwBVhyTfznpkGondwlkcKrVxLxoXx(int param_1)

{
  DataMemoryBarrier(0x1b);
  return *(byte *)(param_1 + 0x3d) & 1;
}


// =========================================================================
// Function: AWhejAxvJKzsfYkGSkWBGxinCXmyKthSoGQSm
// Entry: 0x719fa510 | Size: 134 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void AWhejAxvJKzsfYkGSkWBGxinCXmyKthSoGQSm(int param_1,int param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  float fVar3;
  
  if (param_2 == 0) {
    return;
  }
  DataMemoryBarrier(0x1b);
  *(int *)(param_1 + 0x40) = param_2;
  DataMemoryBarrier(0x1b);
  if (*(int *)(param_1 + 0x11c) != 0) {
    fVar3 = *(float *)(param_1 + 0x68);
    bVar1 = fVar3 < 0.15;
    if (1.0 < fVar3) {
      fVar3 = 1.0;
    }
    if ((int)((uint)bVar1 << 0x1f) < 0) {
      fVar3 = 0.15;
    }
    DataMemoryBarrier(0x1b);
    DataMemoryBarrier(0x1b);
    *(float *)(*(int *)(param_1 + 0x11c) + 0x1c) = fVar3;
    DataMemoryBarrier(0x1b);
  }
  puVar2 = (undefined4 *)(param_1 + 0x60);
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(puVar2);
    bVar1 = (bool)hasExclusiveAccess(puVar2);
  } while (!bVar1);
  *puVar2 = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  DataMemoryBarrier(0x1b);
  DataMemoryBarrier(0x1b);
  if ((*(byte *)(param_1 + 0x3c) & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}


// =========================================================================
// Function: GaKCxXIHkOcytCUfFK_PcIUyzCEQhQpxWGKA
// Entry: 0x719fa624 | Size: 98 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void GaKCxXIHkOcytCUfFK_PcIUyzCEQhQpxWGKA(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  
  DataMemoryBarrier(0x1b);
  *(undefined4 *)(param_1 + 0x40) = 0;
  DataMemoryBarrier(0x1b);
  if ((*(int *)(param_1 + 0x11c) != 0) &&
     (DataMemoryBarrier(0x1b), (*(byte *)(param_1 + 0x3d) & 1) == 0)) {
    DataMemoryBarrier(0x1b);
    *(undefined4 *)(*(int *)(param_1 + 0x11c) + 0x1c) = 0x3f800000;
    DataMemoryBarrier(0x1b);
  }
  puVar2 = (undefined4 *)(param_1 + 0x60);
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(puVar2);
    bVar1 = (bool)hasExclusiveAccess(puVar2);
  } while (!bVar1);
  *puVar2 = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  DataMemoryBarrier(0x1b);
  DataMemoryBarrier(0x1b);
  if ((*(byte *)(param_1 + 0x3c) & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}


// =========================================================================
// Function: aDelNAcCqYnrsobwMHIUdsyvjlIdudGJatjnwUTPFd
// Entry: 0x719fa70e | Size: 14 bytes
// =========================================================================

bool aDelNAcCqYnrsobwMHIUdsyvjlIdudGJatjnwUTPFd(int param_1)

{
  DataMemoryBarrier(0x1b);
  return *(int *)(param_1 + 0x40) != 0;
}


// =========================================================================
// Function: tbprZmblL_VVBqPEnB_eVHvDvyPYYlItHKMcVIKAqUAQnja
// Entry: 0x719fa734 | Size: 28 bytes
// =========================================================================

void tbprZmblL_VVBqPEnB_eVHvDvyPYYlItHKMcVIKAqUAQnja(int param_1,undefined4 param_2)

{
  DataMemoryBarrier(0x1b);
  *(undefined4 *)(param_1 + 0x44) = param_2;
  DataMemoryBarrier(0x1b);
  if (*(int *)(param_1 + 0x11c) == 0) {
    return;
  }
  thunk_sgNdFRQraCODaHcGaQsQbGmJVEWhxwQQerZy();
  return;
}


// =========================================================================
// Function: sRPUayGjBbmpwnuMomLnYXzcRMYcIFbmqkxoSyyGwIqWCtE
// Entry: 0x719fa780 | Size: 24 bytes
// =========================================================================

byte sRPUayGjBbmpwnuMomLnYXzcRMYcIFbmqkxoSyyGwIqWCtE(int param_1)

{
  byte bVar1;
  
  if (*(int *)(param_1 + 0x11c) == 0) {
    bVar1 = 0;
  }
  else {
    DataMemoryBarrier(0x1b);
    bVar1 = *(byte *)(*(int *)(param_1 + 0x11c) + 0x24) & 1;
  }
  return bVar1;
}


// =========================================================================
// Function: cRIWxEmOeRnzcwpTLHVfmKFRMgpLqWLaISuSLbPMlehSEf
// Entry: 0x719fa7b0 | Size: 12 bytes
// =========================================================================

void cRIWxEmOeRnzcwpTLHVfmKFRMgpLqWLaISuSLbPMlehSEf(int param_1,undefined4 param_2)

{
  DataMemoryBarrier(0x1b);
  *(undefined4 *)(param_1 + 0x48) = param_2;
  DataMemoryBarrier(0x1b);
  return;
}


// =========================================================================
// Function: uRiZzsFgHgbjNDhPhlBGbsVJxrUqdZeFNYpgVRp_xsYtB
// Entry: 0x719fa7d4 | Size: 30 bytes
// =========================================================================

void uRiZzsFgHgbjNDhPhlBGbsVJxrUqdZeFNYpgVRp_xsYtB(int param_1,undefined4 param_2)

{
  DataMemoryBarrier(0x1b);
  *(undefined4 *)(param_1 + 0x4c) = param_2;
  DataMemoryBarrier(0x1b);
  if (*(int *)(param_1 + 0x11c) != 0) {
    DataMemoryBarrier(0x1b);
    *(undefined4 *)(*(int *)(param_1 + 0x11c) + 0x10) = param_2;
    DataMemoryBarrier(0x1b);
  }
  return;
}


// =========================================================================
// Function: TVrRktuXQULmaTcetiyO_IcshcDDbsKVFwUVqZRBSOmXhc
// Entry: 0x719fa80a | Size: 8 bytes
// =========================================================================

undefined4 TVrRktuXQULmaTcetiyO_IcshcDDbsKVFwUVqZRBSOmXhc(int param_1)

{
  DataMemoryBarrier(0x1b);
  return *(undefined4 *)(param_1 + 0x4c);
}


// =========================================================================
// Function: PXwkVdqlzWJoDFeTaeVxTWEcCnD_xDQvzPRhWyQOy
// Entry: 0x719fa82a | Size: 30 bytes
// =========================================================================

void PXwkVdqlzWJoDFeTaeVxTWEcCnD_xDQvzPRhWyQOy(int param_1,undefined4 param_2)

{
  DataMemoryBarrier(0x1b);
  *(undefined4 *)(param_1 + 0x50) = param_2;
  DataMemoryBarrier(0x1b);
  if (*(int *)(param_1 + 0x11c) != 0) {
    DataMemoryBarrier(0x1b);
    *(undefined4 *)(*(int *)(param_1 + 0x11c) + 0x14) = param_2;
    DataMemoryBarrier(0x1b);
  }
  return;
}


// =========================================================================
// Function: VmFAfWkQZySGkfdhPkXMbSnBhiIDYPVdeUTxuliSj
// Entry: 0x719fa860 | Size: 30 bytes
// =========================================================================

void VmFAfWkQZySGkfdhPkXMbSnBhiIDYPVdeUTxuliSj(int param_1,undefined4 param_2)

{
  DataMemoryBarrier(0x1b);
  *(undefined4 *)(param_1 + 0x54) = param_2;
  DataMemoryBarrier(0x1b);
  if (*(int *)(param_1 + 0x11c) != 0) {
    DataMemoryBarrier(0x1b);
    *(undefined4 *)(*(int *)(param_1 + 0x11c) + 0x18) = param_2;
    DataMemoryBarrier(0x1b);
  }
  return;
}


// =========================================================================
// Function: MKjdyqKUHyEppmsWUvOuVvSOdquWCKkjRprLBUrzDj
// Entry: 0x719fa898 | Size: 80 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void MKjdyqKUHyEppmsWUvOuVvSOdquWCKkjRprLBUrzDj(int param_1,float param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  
  DataMemoryBarrier(0x1b);
  *(float *)(param_1 + 0x58) = param_2;
  DataMemoryBarrier(0x1b);
  iVar3 = *(int *)(param_1 + 0xe0);
  if (iVar3 != 0) {
    if (0.0001 < param_2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar2 = (undefined4 *)(iVar3 + 0x20);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar2);
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = 0;
    *(undefined4 *)(iVar3 + 0x24) = 0xc05e0000;
    DataMemoryBarrier(0x1b);
  }
  return;
}


// =========================================================================
// Function: ErfNJBstbArDGfKKVShdKLeTrxMTeQhnSLdcoTMMpOGfXGXw
// Entry: 0x719fa938 | Size: 100 bytes
// =========================================================================

void ErfNJBstbArDGfKKVShdKLeTrxMTeQhnSLdcoTMMpOGfXGXw(int param_1,float param_2)

{
  bool bVar1;
  
  DataMemoryBarrier(0x1b);
  *(float *)(param_1 + 0x68) = param_2;
  DataMemoryBarrier(0x1b);
  if (*(int *)(param_1 + 0x11c) != 0) {
    DataMemoryBarrier(0x1b);
    if (((*(byte *)(param_1 + 0x3d) & 1) == 0) &&
       (DataMemoryBarrier(0x1b), *(int *)(param_1 + 0x40) == 0)) {
      return;
    }
    bVar1 = param_2 < 0.15;
    if (1.0 < param_2) {
      param_2 = 1.0;
    }
    if ((int)((uint)bVar1 << 0x1f) < 0) {
      param_2 = 0.15;
    }
    DataMemoryBarrier(0x1b);
    *(float *)(*(int *)(param_1 + 0x11c) + 0x1c) = param_2;
    DataMemoryBarrier(0x1b);
  }
  return;
}


// =========================================================================
// Function: dpfwllXBBdgCUOBaolNNsMKBXDQVFChSUOnfasIqlJQUdGKJK
// Entry: 0x719fa9b8 | Size: 46 bytes
// =========================================================================

void dpfwllXBBdgCUOBaolNNsMKBXDQVFChSUOnfasIqlJQUdGKJK(int param_1,float param_2)

{
  bool bVar1;
  double *pdVar2;
  
  if (*(int *)(param_1 + 0xe0) != 0) {
    pdVar2 = (double *)(*(int *)(param_1 + 0xe0) + 0x18);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(pdVar2);
      bVar1 = (bool)hasExclusiveAccess(pdVar2);
    } while (!bVar1);
    *pdVar2 = (double)param_2;
    DataMemoryBarrier(0x1b);
    return;
  }
  return;
}


// =========================================================================
// Function: KlGEtDaDzAmeJxwcSPxLJtRDozqMMOrUcjGbvYOwpQeHRUcnc
// Entry: 0x719fa9fe | Size: 12 bytes
// =========================================================================

void KlGEtDaDzAmeJxwcSPxLJtRDozqMMOrUcjGbvYOwpQeHRUcnc(int param_1,undefined1 param_2)

{
  if (*(int *)(param_1 + 0xe0) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0xe0) + 4) = param_2;
  }
  return;
}


// =========================================================================
// Function: vQSwVrWySdxPhhjBySkwIzXRQQnUQKzPTpLPievRtQtfCUArwhpDMbNloGlxqSLj
// Entry: 0x719faa22 | Size: 42 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void vQSwVrWySdxPhhjBySkwIzXRQQnUQKzPTpLPievRtQtfCUArwhpDMbNloGlxqSLj(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0x70);
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(piVar3);
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = param_2;
  DataMemoryBarrier(0x1b);
  if (iVar2 != param_2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}


// =========================================================================
// Function: GQmuRdEKUdbTVNvpFmwnVVnhsoLfaWdEZRSYlotDpaTr_FhEG
// Entry: 0x719faad8 | Size: 30 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void GQmuRdEKUdbTVNvpFmwnVVnhsoLfaWdEZRSYlotDpaTr_FhEG(int param_1,undefined1 param_2)

{
  DataMemoryBarrier(0x1b);
  *(undefined1 *)(param_1 + 0x6c) = param_2;
  DataMemoryBarrier(0x1b);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: mgJlzKDWnmUiLZRvkpQgMljfVTbmqSUwJmNPJJuGOnNtwy
// Entry: 0x719faba6 | Size: 60 bytes
// =========================================================================

void mgJlzKDWnmUiLZRvkpQgMljfVTbmqSUwJmNPJJuGOnNtwy(int *param_1,int param_2)

{
  undefined1 uVar1;
  
  DataMemoryBarrier(0x1b);
  param_1[0x1d] = param_2;
  DataMemoryBarrier(0x1b);
  DataMemoryBarrier(0x1b);
  if (param_1[0x1c] == 0) {
    DataMemoryBarrier(0x1b);
    uVar1 = 0;
    if (param_1[0x1d] != 0) {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 1;
  }
  if (param_1[0x36] != 0) {
    *(undefined1 *)(param_1[0x36] + 4) = uVar1;
  }
  if (param_1[0x37] != 0) {
    *(undefined1 *)(param_1[0x37] + 4) = uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x719fabe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x60))();
  return;
}


// =========================================================================
// Function: dKtTjyThQjLbOTboWxTlanLxzd_SfFcZNnnizdAcrH
// Entry: 0x719fabfa | Size: 66 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void dKtTjyThQjLbOTboWxTlanLxzd_SfFcZNnnizdAcrH(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  
  DataMemoryBarrier(0x1b);
  *(undefined1 *)(param_1 + 0x78) = 1;
  puVar2 = (undefined4 *)(param_1 + 0x60);
  DataMemoryBarrier(0x1b);
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(puVar2);
    bVar1 = (bool)hasExclusiveAccess(puVar2);
  } while (!bVar1);
  *puVar2 = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  DataMemoryBarrier(0x1b);
  DataMemoryBarrier(0x1b);
  if ((*(byte *)(param_1 + 0x3c) & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}


// =========================================================================
// Function: bLmeTSmQEirxugvxjBbIqhwoGvSygoVCVQesLdPDY
// Entry: 0x719facc4 | Size: 204 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void bLmeTSmQEirxugvxjBbIqhwoGvSygoVCVQesLdPDY(int param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined1 extraout_r1;
  undefined4 *puVar4;
  uint uVar5;
  
  if (param_2 < 1) {
    param_2 = 20000;
  }
  *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x80);
  uVar5 = ((*(int *)(param_1 + 4) * param_2) / 1000) * *(int *)(param_1 + 8);
  *(uint *)(param_1 + 0x8c) = uVar5;
  uVar1 = *(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x80) >> 1;
  if (uVar1 <= uVar5 && uVar5 - uVar1 != 0) {
    if ((int)uVar5 < 0) {
      iVar3 = FUN_719fe110();
      if (*(int *)(iVar3 + 0xd8) != 0) {
        *(undefined1 *)(*(int *)(iVar3 + 0xd8) + 4) = extraout_r1;
      }
      if (*(int *)(iVar3 + 0xdc) != 0) {
        *(undefined1 *)(*(int *)(iVar3 + 0xdc) + 4) = extraout_r1;
      }
      thunk_HwKVSqItZbTblNfsqwJDtrVwkTRzVhwllsieOpYMilrpQTz();
      return;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  DataMemoryBarrier(0x1b);
  *(undefined1 *)(param_1 + 0x7a) = 0;
  DataMemoryBarrier(0x1b);
  DataMemoryBarrier(0x1b);
  *(undefined1 *)(param_1 + 0x79) = 1;
  DataMemoryBarrier(0x1b);
  DataMemoryBarrier(0x1b);
  *(undefined4 *)(param_1 + 0x7c) = 0xc2f00000;
  puVar4 = (undefined4 *)(param_1 + 0x60);
  DataMemoryBarrier(0x1b);
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(puVar4);
    bVar2 = (bool)hasExclusiveAccess(puVar4);
  } while (!bVar2);
  *puVar4 = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  DataMemoryBarrier(0x1b);
  DataMemoryBarrier(0x1b);
  if ((*(byte *)(param_1 + 0x3c) & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}


// =========================================================================
// Function: IYdcRlZRKLJxvaXybnQzCCUWdjLNMZYQeDMJrQms
// Entry: 0x719fae66 | Size: 64 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void IYdcRlZRKLJxvaXybnQzCCUWdjLNMZYQeDMJrQms(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  
  DataMemoryBarrier(0x1b);
  *(undefined1 *)(param_1 + 0x79) = 0;
  puVar2 = (undefined4 *)(param_1 + 0x60);
  DataMemoryBarrier(0x1b);
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(puVar2);
    bVar1 = (bool)hasExclusiveAccess(puVar2);
  } while (!bVar1);
  *puVar2 = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  DataMemoryBarrier(0x1b);
  DataMemoryBarrier(0x1b);
  if ((*(byte *)(param_1 + 0x3c) & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}


// =========================================================================
// Function: vekQSVcQ_isefMSQFYwbcuUIfHMoIVbeSORsdNdC
// Entry: 0x719faf2e | Size: 92 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void vekQSVcQ_isefMSQFYwbcuUIfHMoIVbeSORsdNdC(int param_1,int param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  
  if (param_2 != 0) {
    DataMemoryBarrier(0x1b);
    *(undefined1 *)(param_1 + 0x79) = 0;
    DataMemoryBarrier(0x1b);
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  DataMemoryBarrier(0x1b);
  *(bool *)(param_1 + 0x7a) = param_2 != 0;
  puVar2 = (undefined4 *)(param_1 + 0x60);
  DataMemoryBarrier(0x1b);
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(puVar2);
    bVar1 = (bool)hasExclusiveAccess(puVar2);
  } while (!bVar1);
  *puVar2 = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  DataMemoryBarrier(0x1b);
  DataMemoryBarrier(0x1b);
  if ((*(byte *)(param_1 + 0x3c) & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}


// =========================================================================
// Function: RZXSCdwAmNGHktwfLBGCPwhCxmLepINtYzwdIhPLaVyo
// Entry: 0x719fb012 | Size: 8 bytes
// =========================================================================

undefined4 RZXSCdwAmNGHktwfLBGCPwhCxmLepINtYzwdIhPLaVyo(int param_1)

{
  DataMemoryBarrier(0x1b);
  return *(undefined4 *)(param_1 + 0x7c);
}


// =========================================================================
// Function: wwjVFiEjJFutMheIcuUniacaUXxkqmkSCDQT_UNApy
// Entry: 0x719fb032 | Size: 14 bytes
// =========================================================================

byte wwjVFiEjJFutMheIcuUniacaUXxkqmkSCDQT_UNApy(int param_1)

{
  DataMemoryBarrier(0x1b);
  return *(byte *)(param_1 + 0x79) & 1;
}


// =========================================================================
// Function: MKtpnlsmQ_iTUjCnOpBfMSDxRyDJTvvmpDvJJcrlHlfEen
// Entry: 0x719fb058 | Size: 14 bytes
// =========================================================================

byte MKtpnlsmQ_iTUjCnOpBfMSDxRyDJTvvmpDvJJcrlHlfEen(int param_1)

{
  DataMemoryBarrier(0x1b);
  return *(byte *)(param_1 + 0x7a) & 1;
}


// =========================================================================
// Function: ndQbQpvrCkkpFxqMsLxwuSGVMSVmuANlBLDjb_
// Entry: 0x719fb080 | Size: 34 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void ndQbQpvrCkkpFxqMsLxwuSGVMSVmuANlBLDjb_(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: NazWFdMgqQWsUrKlYQWpfDTNsxPEbJAbmqZelRhruH
// Entry: 0x719fb240 | Size: 20 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void NazWFdMgqQWsUrKlYQWpfDTNsxPEbJAbmqZelRhruH(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: lOiGimygkwbstEbCKnDslokjzxqmAZVh_gsu_BzugYpt
// Entry: 0x719fb388 | Size: 34 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void lOiGimygkwbstEbCKnDslokjzxqmAZVh_gsu_BzugYpt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: yXVbuucRDyRDjKnzJmUZNddPBtNeKDYLdmQxtUFPfHRUAE
// Entry: 0x719fb550 | Size: 32 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void yXVbuucRDyRDjKnzJmUZNddPBtNeKDYLdmQxtUFPfHRUAE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: eGMWUXxwjlZFsDGlnrVufuAtxQahGkkOlXwrlBbJ
// Entry: 0x719fb790 | Size: 28 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void eGMWUXxwjlZFsDGlnrVufuAtxQahGkkOlXwrlBbJ(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: oOCWPJvrJwMtjcNeIOzxpeiiFqyCJAXMBGqEJTqwX
// Entry: 0x719fb910 | Size: 20 bytes
// =========================================================================

void oOCWPJvrJwMtjcNeIOzxpeiiFqyCJAXMBGqEJTqwX(int param_1)

{
  if (*(int **)(param_1 + 0x34) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x719fb922. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x34) + 0x28))();
    return;
  }
  return;
}


// =========================================================================
// Function: aNGPfGpNiGJZcrDLUnMvKyldFtvDmVREthBPxRvIbppZnW
// Entry: 0x719fb93c | Size: 168 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x719fb9ca) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 aNGPfGpNiGJZcrDLUnMvKyldFtvDmVREthBPxRvIbppZnW(int param_1)

{
  uint uVar1;
  bool bVar2;
  
  DataMemoryBarrier(0x1b);
  if ((((*(byte *)(param_1 + 0x3c) & 1) != 0) &&
      (((DataMemoryBarrier(0x1b), (*(byte *)(param_1 + 0x3d) & 1) != 0 ||
        (DataMemoryBarrier(0x1b), *(int *)(param_1 + 0x40) != 0)) &&
       (DataMemoryBarrier(0x1b), (*(byte *)(param_1 + 0x95) & 1) != 0)))) &&
     (DataMemoryBarrier(0x1b), (*(byte *)(param_1 + 0x79) & 1) == 0)) {
    DataMemoryBarrier(0x1b);
    uVar1 = (uint)*(byte *)(param_1 + 0x97) << 0x1f;
    bVar2 = uVar1 == 0;
    if (bVar2) {
      uVar1 = (uint)*(byte *)(param_1 + 0x96);
      DataMemoryBarrier(0x1b);
    }
    if (bVar2 && (uVar1 & 1) == 0) {
      ExclusiveAccess((int *)(param_1 + 0x60));
      ClearExclusiveLocal();
      DataMemoryBarrier(0x1b);
      if (*(int *)(param_1 + 0x60) != 0 || *(int *)(param_1 + 100) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  return 0xc2f00000;
}


// =========================================================================
// Function: cwnrINQ_pPWktifnaYvSzUQoHyOQfbtQBm_K_nEVyydJPEAE
// Entry: 0x719fbacc | Size: 92 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void cwnrINQ_pPWktifnaYvSzUQoHyOQfbtQBm_K_nEVyydJPEAE(int param_1,uint param_2)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  
  pbVar3 = (byte *)(param_1 + 0x94);
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(pbVar3);
    bVar1 = *pbVar3;
    bVar2 = (bool)hasExclusiveAccess(pbVar3);
  } while (!bVar2);
  *pbVar3 = (byte)param_2;
  DataMemoryBarrier(0x1b);
  if ((bVar1 & 1) == param_2) {
    return;
  }
  if (param_2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar4 = (undefined4 *)(param_1 + 0x60);
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(puVar4);
    bVar2 = (bool)hasExclusiveAccess(puVar4);
  } while (!bVar2);
  *puVar4 = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  DataMemoryBarrier(0x1b);
  DataMemoryBarrier(0x1b);
  if ((*(byte *)(param_1 + 0x3c) & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}


// =========================================================================
// Function: gIG_QsaOUuJhNwgswPpSHrnBQSBtcESphqJCFPIPXlHpfJoF
// Entry: 0x719fbc4e | Size: 14 bytes
// =========================================================================

byte gIG_QsaOUuJhNwgswPpSHrnBQSBtcESphqJCFPIPXlHpfJoF(int param_1)

{
  DataMemoryBarrier(0x1b);
  return *(byte *)(param_1 + 0x94) & 1;
}


// =========================================================================
// Function: KgqhwzmitsIHZnLtOqRyIEbrxGFGAxbSunDoGfzIMyYFWDnuODHWbQgkUrNTnSvKpRrcbVJjyNEIkWzGhHBCiXvTSOPRdoyF_rVsAEftOSc
// Entry: 0x719fbc74 | Size: 132 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x719fbcbe) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void KgqhwzmitsIHZnLtOqRyIEbrxGFGAxbSunDoGfzIMyYFWDnuODHWbQgkUrNTnSvKpRrcbVJjyNEIkWzGhHBCiXvTSOPRdoyF_rVsAEftOSc
               (int param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4)

{
  uint uVar1;
  bool bVar2;
  
  DataMemoryBarrier(0x1b);
  uVar1 = (uint)*(byte *)(param_1 + 0x95) << 0x1f;
  bVar2 = uVar1 == 0;
  if (bVar2) {
    uVar1 = (uint)*(byte *)(param_1 + 0x96);
    DataMemoryBarrier(0x1b);
  }
  if (!bVar2 || (uVar1 & 1) != 0) {
    return;
  }
  DataMemoryBarrier(0x1b);
  *(undefined1 *)(param_1 + 0x97) = 0;
  DataMemoryBarrier(0x1b);
  *(undefined2 *)(param_1 + 0x124) = param_4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: PEzcUgrHFJojgkDfoozSJfCojucRayvfXJqXUkMZ
// Entry: 0x719fc5b4 | Size: 72 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void PEzcUgrHFJojgkDfoozSJfCojucRayvfXJqXUkMZ(int param_1)

{
  DataMemoryBarrier(0x1b);
  *(undefined1 *)(param_1 + 0x95) = 0;
  DataMemoryBarrier(0x1b);
  DataMemoryBarrier(0x1b);
  *(undefined4 *)(param_1 + 0x40) = 0;
  DataMemoryBarrier(0x1b);
  DataMemoryBarrier(0x1b);
  *(undefined4 *)(param_1 + 0x48) = 0;
  DataMemoryBarrier(0x1b);
  DataMemoryBarrier(0x1b);
  *(undefined1 *)(param_1 + 0x96) = 0;
  DataMemoryBarrier(0x1b);
  DataMemoryBarrier(0x1b);
  *(undefined1 *)(param_1 + 0x97) = 0;
  DataMemoryBarrier(0x1b);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: BggZFeF_vMkv_gWSqitvReGTbZLuwwNwwouCugSfZm
// Entry: 0x719fc6d0 | Size: 14 bytes
// =========================================================================

byte BggZFeF_vMkv_gWSqitvReGTbZLuwwNwwouCugSfZm(int param_1)

{
  DataMemoryBarrier(0x1b);
  return *(byte *)(param_1 + 0x95) & 1;
}


// =========================================================================
// Function: TTygHqZS_fUjVJfJmRsdzFibeudfYDvfRhqNlo
// Entry: 0x719fc6f6 | Size: 14 bytes
// =========================================================================

byte TTygHqZS_fUjVJfJmRsdzFibeudfYDvfRhqNlo(int param_1)

{
  DataMemoryBarrier(0x1b);
  return *(byte *)(param_1 + 0x96) & 1;
}


// =========================================================================
// Function: noM_lNMIjfnNozpBYCnxCJNNhfvUWWTzxxzBwSJYzHAAYu
// Entry: 0x719fc71c | Size: 14 bytes
// =========================================================================

byte noM_lNMIjfnNozpBYCnxCJNNhfvUWWTzxxzBwSJYzHAAYu(int param_1)

{
  DataMemoryBarrier(0x1b);
  return *(byte *)(param_1 + 0x97) & 1;
}


// =========================================================================
// Function: qK_RwwkuzksdTwefSxRrBUqjoWgUEiAtgLeqHeQhPittqEaBx
// Entry: 0x719fc742 | Size: 66 bytes
// =========================================================================

void qK_RwwkuzksdTwefSxRrBUqjoWgUEiAtgLeqHeQhPittqEaBx(int param_1)

{
  if (*(int *)(param_1 + 0x11c) == 0) {
    return;
  }
  thunk_oatQKqcSjdtEKERdnnFXPgy_ZyvuIzAFIGjB_y();
  return;
}


// =========================================================================
// Function: xZ_qcLjxMrfURtbnMojfOdFbQvAWOarjjgFRIhLVviPIySPt
// Entry: 0x719fc7b4 | Size: 26 bytes
// =========================================================================

void xZ_qcLjxMrfURtbnMojfOdFbQvAWOarjjgFRIhLVviPIySPt(int param_1)

{
  if (*(int *)(param_1 + 0x11c) == 0) {
    return;
  }
  thunk_cqRozOlUtcCeYXW_IyKnLvgbMRNzuOoJADLTa();
  return;
}


// =========================================================================
// Function: LEjVeNYeUswkvSyWyRIRwTglgXKwbBcpWEeDKdTkamdOjQTf
// Entry: 0x719fc800 | Size: 136 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void LEjVeNYeUswkvSyWyRIRwTglgXKwbBcpWEeDKdTkamdOjQTf
               (int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  
  if (param_2 != 0) {
    if (0 < param_3) {
      param_3 = param_4;
    }
    if (0 < param_3) {
      for (piVar1 = *(int **)(param_1 + 0xcc); piVar1 != *(int **)(param_1 + 0xd0);
          piVar1 = piVar1 + 1) {
        if ((*(byte *)(*piVar1 + 4) & 1) != 0) {
          DataMemoryBarrier(0x1b);
          if ((*(byte *)(param_1 + 0x95) & 1) == 0) {
            return;
          }
          if (*(int *)(param_1 + 4) != param_5) {
            if (DAT_71204350 != '\0') {
              return;
            }
            DAT_71204350 = 1;
            imp_fprintf(_ext_stderr,&DAT_7006af3c);
            return;
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
    }
  }
  return;
}


// =========================================================================
// Function: Z_UxBhPMHtGmRxXnzkt
// Entry: 0x719fcc08 | Size: 16 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void Z_UxBhPMHtGmRxXnzkt(int param_1)

{
  if (*(int *)(param_1 + 0x7c) != 0) {
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x7c);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: ASqPmjWWuQNeUASRjGCwnkqJO
// Entry: 0x719fce98 | Size: 18 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void ASqPmjWWuQNeUASRjGCwnkqJO(int param_1)

{
  if (*(int *)(param_1 + 0x30) != 0) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x30);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: MWwXENACOfDcfSeoFUpRyEenNQYDbsilaFx_k
// Entry: 0x719fcfd8 | Size: 48 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void MWwXENACOfDcfSeoFUpRyEenNQYDbsilaFx_k(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: AxNBeAoEyZJlYPuSDDlezjmHtGLEcZCxjjxuquZpCsw
// Entry: 0x719fd514 | Size: 140 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void AxNBeAoEyZJlYPuSDDlezjmHtGLEcZCxjjxuquZpCsw(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puStack_48;
  int iStack_44;
  int *piStack_38;
  undefined *puStack_30;
  int iStack_2c;
  undefined **ppuStack_20;
  int iStack_14;
  
  ppuVar4 = &puStack_48;
  iStack_14 = _ext___stack_chk_guard;
  piVar1 = *(int **)(param_1 + 0x34);
  if (piVar1 != (int *)0x0) {
    ppuVar3 = &puStack_30;
    puStack_30 = &DAT_70b100ac;
    iStack_2c = param_1;
    ppuStack_20 = ppuVar3;
    (**(code **)(*piVar1 + 0x24))(piVar1,ppuVar3);
    if (ppuStack_20 == ppuVar3) {
      iVar2 = 0x10;
    }
    else {
      if (ppuStack_20 == (undefined **)0x0) goto LAB_719fd55a;
      iVar2 = 0x14;
      ppuVar3 = ppuStack_20;
    }
    (**(code **)(*ppuVar3 + iVar2))(ppuVar3);
  }
LAB_719fd55a:
  piVar1 = *(int **)(param_1 + 0x38);
  if (piVar1 != (int *)0x0) {
    puStack_48 = &DAT_70b100f4;
    iStack_44 = param_1;
    piStack_38 = (int *)&puStack_48;
    (**(code **)(*piVar1 + 0x14))(piVar1,&puStack_48);
    if ((undefined **)piStack_38 == &puStack_48) {
      iVar2 = 0x10;
    }
    else {
      if (piStack_38 == (int *)0x0) goto LAB_719fd58e;
      iVar2 = 0x14;
      ppuVar4 = (undefined **)piStack_38;
    }
    (**(code **)((int)*ppuVar4 + iVar2))(ppuVar4);
  }
LAB_719fd58e:
  if (_ext___stack_chk_guard != iStack_14) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}


// =========================================================================
// Function: FUN_719fd9a2
// Entry: 0x719fd9a2 | Size: 202 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void FUN_719fd9a2(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  bool in_ZR;
  bool in_CY;
  
  param_4 = (undefined4 *)*param_4;
  if (!in_CY || in_ZR) {
    software_interrupt(0x36);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar5 = (undefined4 *)param_1[1];
  if (puVar5 < (undefined4 *)param_1[2]) {
    uVar3 = *param_4;
    *param_4 = 0;
    *puVar5 = uVar3;
    param_1[1] = (int)(puVar5 + 1);
    return;
  }
  iVar1 = (int)puVar5 - *param_1 >> 2;
  uVar6 = iVar1 + 1;
  if (uVar6 < 0x40000000) {
    uVar4 = param_1[2] - *param_1;
    uVar2 = (int)uVar4 >> 1;
    if (uVar6 < uVar2) {
      uVar6 = uVar2;
    }
    if (0x7ffffffb < uVar4) {
      uVar6 = 0x3fffffff;
    }
    if (uVar6 == 0) {
      uVar3 = *param_4;
      *param_4 = 0;
      *(undefined4 *)(iVar1 << 2) = uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (uVar6 < 0x40000000) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    FUN_71a00b5c(param_1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_719fe2ec();
}


// =========================================================================
// Function: FUN_719fdab8
// Entry: 0x719fdab8 | Size: 416 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void FUN_719fdab8(undefined4 *param_1,uint param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint extraout_r2;
  undefined8 *puVar6;
  int extraout_r3;
  int unaff_r4;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  
  puVar10 = (undefined8 *)*param_1;
  uVar4 = param_1[2];
  if ((uint)((int)(uVar4 - (int)puVar10) >> 1) < param_2) {
    if (puVar10 != (undefined8 *)0x0) {
      param_1[1] = puVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (-1 < (int)param_2) {
      if (param_2 < uVar4) {
        param_2 = uVar4;
      }
      if (0x7ffffffd < uVar4) {
        param_2 = 0x7fffffff;
      }
      if (-1 < (int)param_2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    uVar11 = FUN_719fe110(param_1);
    puVar5 = (undefined8 *)((ulonglong)uVar11 >> 0x20);
    puVar10 = (undefined8 *)uVar11;
    *(char *)(unaff_r4 + 0x19) = (char)uVar11;
    if ((int)(extraout_r2 - 0x6c) < 0) {
      puVar3 = (undefined4 *)((int)puVar5 * 0x10);
      *puVar3 = &DAT_70b1002c;
      if (puVar3[10] != 0) {
        puVar3[0xb] = puVar3[10];
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar1 = (undefined2)extraout_r2;
    if (0x6b < extraout_r2) {
      uVar11 = CONCAT44(CONCAT22(uVar1,uVar1),CONCAT22(uVar1,uVar1));
      uVar8 = extraout_r3 + 1U & 0xfffffff8;
      puVar6 = (undefined8 *)((int)puVar10 + uVar8 * 2);
      uVar4 = uVar8;
      do {
        *puVar10 = uVar11;
        puVar10[1] = uVar11;
        puVar10 = puVar10 + 2;
        uVar4 = uVar4 - 8;
      } while (uVar4 != 0);
      puVar10 = puVar6;
      if (extraout_r3 + 1U == uVar8) goto LAB_719fdbd8;
    }
    do {
      puVar6 = (undefined8 *)((int)puVar10 + 2);
      *(undefined2 *)puVar10 = uVar1;
      puVar10 = puVar6;
    } while (puVar6 != puVar5);
LAB_719fdbd8:
    param_1[1] = puVar5;
    return;
  }
  puVar5 = (undefined8 *)param_1[1];
  uVar4 = (int)puVar5 - (int)puVar10 >> 1;
  uVar8 = param_2;
  if (uVar4 < param_2) {
    uVar8 = uVar4;
  }
  if (uVar8 != 0) {
    uVar1 = *param_3;
    puVar6 = puVar10;
    uVar2 = uVar8;
    if (7 < uVar8) {
      uVar9 = uVar8 & 0xfffffff8;
      uVar2 = uVar8 & 7;
      uVar11 = CONCAT44(CONCAT22(uVar1,uVar1),CONCAT22(uVar1,uVar1));
      uVar7 = uVar9;
      do {
        *puVar6 = uVar11;
        puVar6[1] = uVar11;
        puVar6 = puVar6 + 2;
        uVar7 = uVar7 - 8;
      } while (uVar7 != 0);
      puVar6 = (undefined8 *)((int)puVar10 + uVar9 * 2);
      if (uVar8 == uVar9) goto LAB_719fdb90;
    }
    do {
      *(undefined2 *)puVar6 = uVar1;
      uVar2 = uVar2 - 1;
      puVar6 = (undefined8 *)((int)puVar6 + 2);
    } while (uVar2 != 0);
  }
LAB_719fdb90:
  if (uVar4 < param_2) {
    uVar1 = *param_3;
    uVar8 = (param_2 * 2 - ((int)puVar5 - (int)puVar10)) - 2;
    puVar10 = (undefined8 *)((int)puVar5 + (param_2 - uVar4) * 2);
    if (0xd < uVar8) {
      uVar11 = CONCAT44(CONCAT22(uVar1,uVar1),CONCAT22(uVar1,uVar1));
      uVar2 = (uVar8 >> 1) + 1;
      uVar8 = uVar2 & 0xfffffff8;
      puVar6 = (undefined8 *)((int)puVar5 + uVar8 * 2);
      uVar4 = uVar8;
      do {
        *puVar5 = uVar11;
        puVar5[1] = uVar11;
        puVar5 = puVar5 + 2;
        uVar4 = uVar4 - 8;
      } while (uVar4 != 0);
      puVar5 = puVar6;
      if (uVar2 == uVar8) goto LAB_719fdc06;
    }
    do {
      puVar6 = (undefined8 *)((int)puVar5 + 2);
      *(undefined2 *)puVar5 = uVar1;
      puVar5 = puVar6;
    } while (puVar6 != puVar10);
  }
  else {
    puVar10 = (undefined8 *)((int)puVar10 + param_2 * 2);
  }
LAB_719fdc06:
  param_1[1] = puVar10;
  return;
}


// =========================================================================
// Function: IcCxzWFNygCBdvTqWotrDM
// Entry: 0x719fdc84 | Size: 24 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void IcCxzWFNygCBdvTqWotrDM(undefined4 *param_1)

{
  *param_1 = &DAT_70b1002c;
  if (param_1[10] != 0) {
    param_1[0xb] = param_1[10];
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: wbMGjSLhTUnLdXiKReiEMV
// Entry: 0x719fdd64 | Size: 24 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void wbMGjSLhTUnLdXiKReiEMV(undefined4 *param_1)

{
  *param_1 = &DAT_70b1002c;
  if (param_1[10] != 0) {
    param_1[0xb] = param_1[10];
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: QXueEfgDVTFKx_NMVtBNZRInde
// Entry: 0x719fde68 | Size: 6 bytes
// =========================================================================

undefined * QXueEfgDVTFKx_NMVtBNZRInde(void)

{
  return &DAT_700613df;
}


// =========================================================================
// Function: EiCovuwbSdOkKTziQHmbEduATCVCwL_ESimCfQ
// Entry: 0x719fdea8 | Size: 16 bytes
// =========================================================================

void EiCovuwbSdOkKTziQHmbEduATCVCwL_ESimCfQ(int param_1)

{
  if (*(int *)(param_1 + 8) == 0) {
    return;
  }
  thunk_wD_iIfpJrATzIqwtiLeyFPx_zxxHoTOJemlmUXOALLXLvHo();
  return;
}


// =========================================================================
// Function: QOJfJsVoXsfasWbEGoekgkpARFGGaGtApdkCep
// Entry: 0x719fdee8 | Size: 120 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x719fdf70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void QOJfJsVoXsfasWbEGoekgkpARFGGaGtApdkCep(int param_1,int param_2,int param_3)

{
  if ((((*(int *)(param_1 + 8) != 0) && (0 < param_3)) && (param_2 != 0)) &&
     (0 < *(int *)(param_1 + 0xc))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}


// =========================================================================
// Function: sVgaafmsGkLjbGOVLNCHnrIPULTHtGyzccPODFwPXi
// Entry: 0x719fe0f4 | Size: 2 bytes
// =========================================================================

void sVgaafmsGkLjbGOVLNCHnrIPULTHtGyzccPODFwPXi(void)

{
  return;
}


// =========================================================================
// Function: FUN_719fe110
// Entry: 0x719fe110 | Size: 12 bytes
// =========================================================================

void FUN_719fe110(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_719fe170
// Entry: 0x719fe170 | Size: 8 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void FUN_719fe170(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: FUN_719fe2ec
// Entry: 0x719fe2ec | Size: 6 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void FUN_719fe2ec(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: gSAzs_aQwkpQClFIvmOeundBzqlWqPBTWAvbDZrBRkpZrdvIJvaFafEAzOTqJ_d_diWyaZtNHwju_WuvXjidwtUtUOrvcYjpEDtJbfTUTdpaMxrsImcanKYLHnXgRVwCDa_gAxXlvZUtemUTgqxvDXqtR
// Entry: 0x719fe74c | Size: 1112 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gSAzs_aQwkpQClFIvmOeundBzqlWqPBTWAvbDZrBRkpZrdvIJvaFafEAzOTqJ_d_diWyaZtNHwju_WuvXjidwtUtUOrvcYjpEDtJbfTUTdpaMxrsImcanKYLHnXgRVwCDa_gAxXlvZUtemUTgqxvDXqtR
               (int *param_1,int param_2,int *param_3,int param_4,undefined2 *param_5,
               undefined2 *param_6,uint param_7)

{
  undefined2 uVar1;
  int *piVar2;
  uint uVar3;
  undefined2 *puVar4;
  uint uVar5;
  undefined2 *puVar6;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  int *piVar16;
  int iVar17;
  undefined2 *puVar18;
  int *piStack_38;
  undefined2 *puStack_34;
  int iStack_28;
  
  iStack_28 = _ext___stack_chk_guard;
  uVar12 = *(uint *)(param_2 + 0x10);
  iVar14 = *(int *)(param_2 + 4);
  iVar17 = *(int *)(param_2 + 8);
  uVar15 = uVar12 >> 0xb;
  piVar2 = (int *)(iVar14 + uVar15 * 4);
  if (iVar17 == iVar14) {
    iVar7 = 0;
    if (param_4 == 0) goto LAB_719fe7a4;
  }
  else {
    iVar7 = *piVar2 + (uVar12 & 0x7ff) * 2;
    if (iVar7 == param_4) {
LAB_719fe7a4:
      uVar5 = 0;
      goto LAB_719fe7a6;
    }
  }
  uVar5 = ((param_4 - *param_3 >> 1) + ((int)param_3 - (int)piVar2) * 0x200) -
          (iVar7 - *piVar2 >> 1);
LAB_719fe7a6:
  iVar7 = *(int *)(param_2 + 0x14);
  if (uVar5 < iVar7 - uVar5) {
    if (uVar12 < param_7) {
      FUN_719fece4(param_2,param_7 - uVar12);
      uVar12 = *(uint *)(param_2 + 0x10);
      iVar14 = *(int *)(param_2 + 4);
      iVar17 = *(int *)(param_2 + 8);
      uVar15 = uVar12 >> 0xb;
    }
    piStack_38 = (int *)(iVar14 + uVar15 * 4);
    if (iVar17 == iVar14) {
      puStack_34 = (undefined2 *)0x0;
    }
    else {
      puStack_34 = (undefined2 *)(*piStack_38 + (uVar12 & 0x7ff) * 2);
    }
    puVar9 = puStack_34;
    piVar2 = piStack_38;
    if (uVar5 < param_7) {
      puVar11 = param_5 + (param_7 - uVar5);
      if (uVar5 < param_7 >> 1) {
        puVar11 = param_6 + -uVar5;
      }
      param_7 = uVar5;
      if (puVar11 != param_5) {
        puVar4 = (undefined2 *)*piStack_38;
        iVar14 = *(int *)(param_2 + 0x14);
        puVar18 = puVar11;
        do {
          if (puVar9 == puVar4) {
            piVar2 = piVar2 + -1;
            puVar4 = (undefined2 *)*piVar2;
            puVar9 = puVar4 + 0x800;
          }
          puVar18 = puVar18 + -1;
          iVar14 = iVar14 + 1;
          puVar9 = puVar9 + -1;
          *puVar9 = *puVar18;
          uVar12 = uVar12 - 1;
        } while (puVar18 != param_5);
        *(uint *)(param_2 + 0x10) = uVar12;
        *(int *)(param_2 + 0x14) = iVar14;
        param_5 = puVar11;
      }
    }
    if (param_7 != 0) {
      uVar15 = param_7 + ((int)puStack_34 - *piStack_38 >> 1);
      if ((int)uVar15 < 1) {
        uVar3 = 0x7ff - uVar15;
        uVar15 = ~uVar3;
        piVar16 = (int *)((int)piStack_38 - (uVar3 >> 9 & 0xfffffffc));
        puVar11 = (undefined2 *)*piVar16;
      }
      else {
        puVar11 = (undefined2 *)piStack_38[uVar15 >> 0xb];
        piVar16 = piStack_38 + (uVar15 >> 0xb);
      }
      puVar18 = puVar11 + (uVar15 & 0x7ff);
      if (puVar18 != puStack_34) {
        puVar10 = (undefined2 *)*piVar2;
        iVar14 = *(int *)(param_2 + 0x14);
        puVar4 = puVar18;
        piVar13 = piVar16;
        do {
          if (puVar9 == puVar10) {
            piVar2 = piVar2 + -1;
            puVar10 = (undefined2 *)*piVar2;
            puVar9 = puVar10 + 0x800;
          }
          if (puVar4 == puVar11) {
            piVar13 = piVar13 + -1;
            puVar11 = (undefined2 *)*piVar13;
            puVar4 = puVar11 + 0x800;
          }
          puVar4 = puVar4 + -1;
          puVar9 = puVar9 + -1;
          iVar14 = iVar14 + 1;
          uVar12 = uVar12 - 1;
          *puVar9 = *puVar4;
        } while (puVar4 != puStack_34);
        *(uint *)(param_2 + 0x10) = uVar12;
        *(int *)(param_2 + 0x14) = iVar14;
      }
      if (param_7 < uVar5) {
        uVar12 = uVar5 + ((int)puStack_34 - *piStack_38 >> 1);
        if ((int)uVar12 < 1) {
          piVar2 = (int *)((int)piStack_38 - (0x7ff - uVar12 >> 9 & 0xfffffffc));
          iVar14 = *piVar2 + (~(0x7ff - uVar12) & 0x7ff) * 2;
        }
        else {
          piVar2 = piStack_38 + (uVar12 >> 0xb);
          iVar14 = piStack_38[uVar12 >> 0xb] + (uVar12 & 0x7ff) * 2;
        }
        FUN_71a00514(piVar16,puVar18,piVar2,iVar14,&piStack_38);
      }
      if (param_5 != param_6) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  else {
    iVar8 = 0;
    if (iVar17 != iVar14) {
      iVar8 = (iVar17 - iVar14) * 0x200 + -1;
    }
    uVar12 = uVar12 + iVar7;
    if (iVar8 - uVar12 < param_7) {
      FUN_719ff5ec(param_2,param_7 - (iVar8 - uVar12));
      iVar7 = *(int *)(param_2 + 0x14);
      iVar14 = *(int *)(param_2 + 4);
      iVar17 = *(int *)(param_2 + 8);
      uVar12 = *(int *)(param_2 + 0x10) + iVar7;
    }
    piVar2 = (int *)(iVar14 + (uVar12 >> 0xb) * 4);
    if (iVar17 == iVar14) {
      puVar9 = (undefined2 *)0x0;
    }
    else {
      puVar9 = (undefined2 *)(*piVar2 + (uVar12 & 0x7ff) * 2);
    }
    uVar12 = iVar7 - uVar5;
    piVar16 = piVar2;
    puVar11 = puVar9;
    if (uVar12 < param_7) {
      puVar18 = param_6 + (uVar12 - param_7);
      if (uVar12 < param_7 >> 1) {
        puVar18 = param_5 + uVar12;
      }
      param_7 = uVar12;
      if (puVar18 != param_6) {
        puVar4 = (undefined2 *)*piVar2;
        puVar10 = puVar9;
        puVar6 = puVar18;
        do {
          iVar7 = iVar7 + 1;
          puVar11 = puVar10 + 1;
          *puVar10 = *puVar6;
          puVar6 = puVar6 + 1;
          if ((int)puVar11 - (int)puVar4 == 0x1000) {
            piVar16 = piVar16 + 1;
            puVar11 = (undefined2 *)*piVar16;
            puVar4 = puVar11;
          }
          puVar10 = puVar11;
        } while (puVar6 != param_6);
        *(int *)(param_2 + 0x14) = iVar7;
        param_6 = puVar18;
      }
    }
    if (param_7 != 0) {
      uVar15 = ((int)puVar9 - *piVar2 >> 1) - param_7;
      if ((int)uVar15 < 1) {
        uVar3 = 0x7ff - uVar15;
        uVar15 = ~uVar3;
        piVar13 = (int *)((int)piVar2 - (uVar3 >> 9 & 0xfffffffc));
        puVar18 = (undefined2 *)*piVar13;
      }
      else {
        puVar18 = (undefined2 *)piVar2[uVar15 >> 0xb];
        piVar13 = piVar2 + (uVar15 >> 0xb);
      }
      puVar4 = puVar18 + (uVar15 & 0x7ff);
      if (puVar4 != puVar9) {
        puVar10 = (undefined2 *)*piVar16;
        do {
          uVar1 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar6 = puVar11 + 1;
          *puVar11 = uVar1;
          iVar7 = iVar7 + 1;
          if ((int)puVar6 - (int)puVar10 == 0x1000) {
            piVar16 = piVar16 + 1;
            puVar6 = (undefined2 *)*piVar16;
            puVar10 = puVar6;
          }
          if ((int)puVar4 - (int)puVar18 == 0x1000) {
            piVar13 = piVar13 + 1;
            puVar4 = (undefined2 *)*piVar13;
            puVar18 = puVar4;
          }
          puVar11 = puVar6;
        } while (puVar4 != puVar9);
        *(int *)(param_2 + 0x14) = iVar7;
      }
      if (param_7 < uVar12) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (param_6 != param_5) {
        iVar14 = *piVar2;
        while( true ) {
          piVar2 = piVar2 + -1;
          iVar14 = (int)puVar9 - iVar14 >> 1;
          iVar17 = (int)param_6 - (int)param_5 >> 1;
          if (iVar17 < iVar14) {
            iVar14 = iVar17;
          }
          param_6 = param_6 + -iVar14;
          if (iVar14 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (param_6 == param_5) break;
          iVar14 = *piVar2;
          puVar9 = (undefined2 *)(iVar14 + 0x1000);
        }
      }
    }
  }
  piVar2 = (int *)(*(int *)(param_2 + 4) + (*(uint *)(param_2 + 0x10) >> 0xb) * 4);
  if (*(int *)(param_2 + 8) == *(int *)(param_2 + 4)) {
    iVar14 = 0;
  }
  else {
    iVar14 = *piVar2 + (*(uint *)(param_2 + 0x10) & 0x7ff) * 2;
  }
  *param_1 = (int)piVar2;
  param_1[1] = iVar14;
  if (uVar5 != 0) {
    uVar5 = uVar5 + (iVar14 - *piVar2 >> 1);
    if ((int)uVar5 < 1) {
      uVar12 = 0x7ff - uVar5;
      uVar5 = ~uVar12;
      piVar2 = (int *)((int)piVar2 - (uVar12 >> 9 & 0xfffffffc));
      iVar14 = *piVar2;
    }
    else {
      iVar14 = piVar2[uVar5 >> 0xb];
      piVar2 = piVar2 + (uVar5 >> 0xb);
    }
    *param_1 = (int)piVar2;
    param_1[1] = iVar14 + (uVar5 & 0x7ff) * 2;
  }
  if (_ext___stack_chk_guard == iStack_28) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: FUN_719fece4
// Entry: 0x719fece4 | Size: 332 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_719fece4(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uStack_2c;
  int iStack_28;
  
  iStack_28 = _ext___stack_chk_guard;
  iVar2 = param_1[1];
  iVar7 = param_1[2];
  iVar1 = param_1[4];
  if (iVar7 == iVar2) {
    param_2 = param_2 + 1;
  }
  uVar3 = param_2 >> 0xb;
  if ((param_2 & 0x7ff) != 0) {
    uVar3 = (param_2 >> 0xb) + 1;
  }
  iVar4 = 0;
  if (iVar7 != iVar2) {
    iVar4 = (iVar7 - iVar2) * 0x200 + -1;
  }
  uVar5 = iVar4 - (param_1[5] + iVar1);
  uVar6 = uVar3;
  if (uVar5 >> 0xb <= uVar3) {
    uVar6 = uVar5 >> 0xb;
  }
  if (uVar5 >> 0xb < uVar3) {
    uVar3 = uVar3 - uVar6;
    iVar7 = iVar7 - iVar2 >> 2;
    if ((uint)((param_1[3] - *param_1 >> 2) - iVar7) < uVar3) {
      uVar3 = uVar3 + iVar7;
      uVar6 = param_1[3] - *param_1 >> 1;
      if (uVar3 < uVar6) {
        uVar3 = uVar6;
      }
      if (uVar3 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (0x3fffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_719fe2ec();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (uVar3 != 0) {
      if (iVar2 == *param_1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_1[4] = iVar1 + uVar6 * 0x800;
    if (uVar6 != 0) {
      do {
        uStack_2c = *(undefined4 *)(param_1[2] + -4);
        param_1[2] = param_1[2] + -4;
        FUN_71a00020(param_1,&uStack_2c);
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  else {
    param_1[4] = iVar1 + uVar6 * 0x800;
    if (uVar6 != 0) {
      do {
        uStack_2c = *(undefined4 *)(param_1[2] + -4);
        param_1[2] = param_1[2] + -4;
        FUN_71a00020(param_1,&uStack_2c);
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  if (_ext___stack_chk_guard != iStack_28) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}


// =========================================================================
// Function: FUN_719ff5ec
// Entry: 0x719ff5ec | Size: 518 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_719ff5ec(uint *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  
  iVar2 = _ext___stack_chk_guard;
  puVar6 = (undefined4 *)param_1[2];
  uVar4 = param_1[4];
  if (puVar6 == (undefined4 *)param_1[1]) {
    param_2 = param_2 + 1;
  }
  uVar5 = param_2 >> 0xb;
  if ((param_2 & 0x7ff) != 0) {
    uVar5 = (param_2 >> 0xb) + 1;
  }
  uVar3 = uVar5;
  if (uVar4 >> 0xb <= uVar5) {
    uVar3 = uVar4 >> 0xb;
  }
  if (uVar4 >> 0xb < uVar5) {
    uVar5 = uVar5 - uVar3;
    iVar1 = (int)puVar6 - (int)param_1[1] >> 2;
    if ((uint)(((int)(param_1[3] - *param_1) >> 2) - iVar1) < uVar5) {
      uVar5 = uVar5 + iVar1;
      uVar4 = (int)(param_1[3] - *param_1) >> 1;
      if (uVar5 < uVar4) {
        uVar5 = uVar4;
      }
      if (uVar5 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (uVar5 < 0x40000000) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
LAB_719ffc06:
                    /* WARNING: Subroutine does not return */
      FUN_719fe2ec();
    }
    if (uVar5 != 0) {
      if (param_1[3] == param_1[2]) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_1[4] = param_1[4] + uVar3 * -0x800;
    if (uVar3 != 0) {
      puVar6 = (undefined4 *)param_1[2];
      do {
        puVar8 = (undefined4 *)param_1[1] + 1;
        uVar9 = *(undefined4 *)param_1[1];
        param_1[1] = (uint)puVar8;
        puVar7 = puVar6;
        if (puVar6 == (undefined4 *)param_1[3]) {
          puVar7 = (undefined4 *)*param_1;
          if (puVar8 <= puVar7) {
            uVar4 = (int)puVar6 - (int)puVar7 >> 1;
            if ((int)puVar6 - (int)puVar7 == 0) {
              uVar4 = 1;
            }
            if (uVar4 < 0x40000000) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            goto LAB_719ffc06;
          }
          iVar1 = (((int)puVar8 - (int)puVar7 >> 2) + 1) / 2;
          puVar7 = puVar8 + -iVar1;
          if (puVar6 != puVar8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          param_1[1] = (uint)(puVar6 + -iVar1);
          param_1[2] = (uint)puVar7;
        }
        *puVar7 = uVar9;
        uVar3 = uVar3 - 1;
        puVar6 = (undefined4 *)(param_1[2] + 4);
        param_1[2] = (uint)puVar6;
      } while (uVar3 != 0);
    }
  }
  else {
    param_1[4] = uVar4 + uVar3 * -0x800;
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      puVar8 = (undefined4 *)param_1[1] + 1;
      uVar9 = *(undefined4 *)param_1[1];
      param_1[1] = (uint)puVar8;
      puVar7 = puVar6;
      if (puVar6 == (undefined4 *)param_1[3]) {
        puVar7 = (undefined4 *)*param_1;
        if (puVar8 <= puVar7) {
          uVar4 = (int)puVar6 - (int)puVar7 >> 1;
          if ((int)puVar6 - (int)puVar7 == 0) {
            uVar4 = 1;
          }
          if (uVar4 < 0x40000000) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          goto LAB_719ffc06;
        }
        iVar1 = (((int)puVar8 - (int)puVar7 >> 2) + 1) / 2;
        puVar7 = puVar8 + -iVar1;
        if (puVar6 != puVar8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        param_1[1] = (uint)(puVar6 + -iVar1);
        param_1[2] = (uint)puVar7;
      }
      *puVar7 = uVar9;
      puVar6 = (undefined4 *)(param_1[2] + 4);
      param_1[2] = (uint)puVar6;
    }
  }
  if (_ext___stack_chk_guard != iVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}


// =========================================================================
// Function: FUN_71a00020
// Entry: 0x71a00020 | Size: 128 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void FUN_71a00020(int *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = param_1[1];
  if (iVar5 == *param_1) {
    uVar3 = param_1[2];
    uVar2 = param_1[3];
    if (uVar2 <= uVar3) {
      uVar3 = (int)(uVar2 - iVar5) >> 1;
      if (uVar2 - iVar5 == 0) {
        uVar3 = 1;
      }
      if (0x3fffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_719fe2ec();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar1 = (((int)(uVar2 - uVar3) >> 2) + 1) / 2;
    iVar4 = (uVar3 + iVar1 * 4) - (uVar3 - iVar5);
    if (uVar3 - iVar5 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_1[1] = iVar4;
    param_1[2] = iVar5 + iVar1 * 4;
    iVar5 = iVar4;
  }
  *(undefined4 *)(iVar5 + -4) = *param_2;
  param_1[1] = param_1[1] + -4;
  return;
}


// =========================================================================
// Function: FUN_71a00514
// Entry: 0x71a00514 | Size: 442 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x71a005e8) */
/* WARNING: Removing unreachable block (ram,0x71a005fe) */
/* WARNING: Removing unreachable block (ram,0x71a00604) */
/* WARNING: Removing unreachable block (ram,0x71a00656) */

void FUN_71a00514(int *param_1,int param_2,int *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  piVar4 = (int *)*param_5;
  iVar6 = param_5[1];
  if (param_1 == param_3) {
    if (param_2 != param_4) {
      iVar3 = *piVar4;
      while( true ) {
        piVar5 = piVar4 + 1;
        iVar1 = param_4 - param_2 >> 1;
        iVar3 = (iVar3 - iVar6) + 0x1000 >> 1;
        if (iVar1 < iVar3) {
          iVar3 = iVar1;
        }
        if (iVar3 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (param_2 == param_4) break;
        iVar3 = *piVar5;
        iVar6 = iVar3;
        piVar4 = piVar5;
      }
      if (*piVar4 + 0x1000 == iVar6) {
        iVar6 = *piVar5;
        piVar4 = piVar5;
      }
    }
  }
  else {
    iVar3 = *param_1 + 0x1000;
    if (iVar3 != param_2) {
      iVar1 = *piVar4;
      while( true ) {
        piVar5 = piVar4 + 1;
        iVar2 = iVar3 - param_2 >> 1;
        iVar1 = (iVar1 - iVar6) + 0x1000 >> 1;
        if (iVar2 < iVar1) {
          iVar1 = iVar2;
        }
        if (iVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (param_2 == iVar3) break;
        iVar1 = *piVar5;
        iVar6 = iVar1;
        piVar4 = piVar5;
      }
      if (*piVar4 + 0x1000 == iVar6) {
        iVar6 = *piVar5;
        piVar4 = piVar5;
      }
    }
    *param_5 = (int)piVar4;
    param_5[1] = iVar6;
    if (param_1 + 1 != param_3) {
      iVar3 = *piVar4;
      while( true ) {
        piVar4 = piVar4 + 1;
        iVar6 = (iVar3 - iVar6) + 0x1000 >> 1;
        if (0x800 < iVar6) {
          iVar6 = 0x800;
        }
        if (iVar6 != 0) break;
        iVar3 = *piVar4;
        iVar6 = iVar3;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar3 = *param_3;
    if (iVar3 != param_4) {
      iVar1 = *piVar4;
      while( true ) {
        piVar5 = piVar4 + 1;
        iVar2 = param_4 - iVar3 >> 1;
        iVar1 = (iVar1 - iVar6) + 0x1000 >> 1;
        if (iVar2 < iVar1) {
          iVar1 = iVar2;
        }
        if (iVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (iVar3 == param_4) break;
        iVar1 = *piVar5;
        iVar6 = iVar1;
        piVar4 = piVar5;
      }
      if (*piVar4 + 0x1000 == iVar6) {
        iVar6 = *piVar5;
        piVar4 = piVar5;
      }
    }
  }
  *param_5 = (int)piVar4;
  param_5[1] = iVar6;
  return;
}


// =========================================================================
// Function: hXGndMPoTPedqAeOKjpCkxmiAiTVmPOqOkhKzDobWWjPPposYTvVymjepvgBFAjdvRREszmABDDuSIiejSwWtMTsAYWWUIUxuSAEBwJOwKhyLkJOFAnGug_MpalGZyFBFflfHBpmsxoReBMyYfaFJEOhEdFzpulWuPgsAyNPIEzRLuIvpdJgtwqysnpqdIXMaYiLBYQYscnUsFAegcXww
// Entry: 0x71a0090c | Size: 438 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void hXGndMPoTPedqAeOKjpCkxmiAiTVmPOqOkhKzDobWWjPPposYTvVymjepvgBFAjdvRREszmABDDuSIiejSwWtMTsAYWWUIUxuSAEBwJOwKhyLkJOFAnGug_MpalGZyFBFflfHBpmsxoReBMyYfaFJEOhEdFzpulWuPgsAyNPIEzRLuIvpdJgtwqysnpqdIXMaYiLBYQYscnUsFAegcXww
               (undefined4 *param_1,undefined4 param_2,int *param_3,int param_4,int *param_5,
               int param_6,int *param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  if (param_3 == param_5) {
    if (param_4 != param_6) {
      piVar6 = param_7 + 1;
      iVar3 = *param_7;
      iVar4 = param_6;
      while( true ) {
        iVar3 = param_8 - iVar3 >> 1;
        iVar1 = iVar4 - param_4 >> 1;
        if (iVar1 < iVar3) {
          iVar3 = iVar1;
        }
        param_8 = param_8 + iVar3 * -2;
        iVar4 = iVar4 + iVar3 * -2;
        if (iVar3 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (iVar4 == param_4) break;
        iVar3 = piVar6[-2];
        piVar6 = piVar6 + -1;
        param_8 = iVar3 + 0x1000;
      }
      param_7 = piVar6 + -1;
      if (piVar6[-1] + 0x1000 == param_8) {
        param_8 = *piVar6;
        param_7 = piVar6;
      }
    }
    *param_1 = param_5;
    param_1[1] = param_6;
  }
  else {
    iVar4 = *param_5;
    if (iVar4 != param_6) {
      piVar6 = param_7 + 1;
      iVar1 = *param_7;
      iVar3 = param_6;
      while( true ) {
        iVar1 = param_8 - iVar1 >> 1;
        iVar2 = iVar3 - iVar4 >> 1;
        if (iVar2 < iVar1) {
          iVar1 = iVar2;
        }
        param_8 = param_8 + iVar1 * -2;
        iVar3 = iVar3 + iVar1 * -2;
        if (iVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (iVar3 == iVar4) break;
        iVar1 = piVar6[-2];
        piVar6 = piVar6 + -1;
        param_8 = iVar1 + 0x1000;
      }
      param_7 = piVar6 + -1;
      if (piVar6[-1] + 0x1000 == param_8) {
        param_8 = *piVar6;
        param_7 = piVar6;
      }
    }
    piVar6 = param_5 + -1;
    if (piVar6 != param_3) {
      iVar4 = *param_7;
      do {
        iVar1 = *piVar6;
        piVar5 = param_7 + 1;
        iVar3 = iVar1 + 0x1000;
        while( true ) {
          iVar4 = param_8 - iVar4 >> 1;
          iVar2 = iVar3 - iVar1 >> 1;
          if (iVar2 < iVar4) {
            iVar4 = iVar2;
          }
          param_8 = param_8 + iVar4 * -2;
          iVar3 = iVar3 + iVar4 * -2;
          if (iVar4 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (iVar3 == iVar1) break;
          iVar4 = piVar5[-2];
          piVar5 = piVar5 + -1;
          param_8 = iVar4 + 0x1000;
        }
        piVar6 = piVar6 + -1;
        iVar4 = piVar5[-1];
        param_7 = piVar5 + -1;
        if (iVar4 + 0x1000 == param_8) {
          param_8 = *piVar5;
          param_7 = piVar5;
          iVar4 = param_8;
        }
      } while (piVar6 != param_3);
    }
    iVar4 = *param_3 + 0x1000;
    if (iVar4 != param_4) {
      piVar6 = param_7 + 1;
      iVar3 = *param_7;
      while( true ) {
        iVar3 = param_8 - iVar3 >> 1;
        iVar1 = iVar4 - param_4 >> 1;
        if (iVar1 < iVar3) {
          iVar3 = iVar1;
        }
        param_8 = param_8 + iVar3 * -2;
        iVar4 = iVar4 + iVar3 * -2;
        if (iVar3 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (iVar4 == param_4) break;
        iVar3 = piVar6[-2];
        piVar6 = piVar6 + -1;
        param_8 = iVar3 + 0x1000;
      }
      param_7 = piVar6 + -1;
      if (piVar6[-1] + 0x1000 == param_8) {
        param_8 = *piVar6;
        param_7 = piVar6;
      }
    }
    *param_1 = param_5;
    param_1[1] = param_6;
  }
  param_1[2] = param_7;
  param_1[3] = param_8;
  return;
}


// =========================================================================
// Function: FUN_71a00b5c
// Entry: 0x71a00b5c | Size: 12 bytes
// =========================================================================

void FUN_71a00b5c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_vector_7006dad5);
}


// =========================================================================
// Function: reoTToJBKyoJJeEsDxUKIAqqzzK
// Entry: 0x71a00bbc | Size: 24 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void reoTToJBKyoJJeEsDxUKIAqqzzK(undefined4 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &DAT_70b1005c;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: prdqhlhjnAa_pJvIEdJsDIQDfGl
// Entry: 0x71a00d3c | Size: 28 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void prdqhlhjnAa_pJvIEdJsDIQDfGl(undefined4 *param_1)

{
  *param_1 = &DAT_70b1005c;
  if (param_1[3] != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1[4] != 0) {
    param_1[5] = param_1[4];
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: TwVsXNbmFWyFOVTiuwWrBASiTpS
// Entry: 0x71a00df4 | Size: 28 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void TwVsXNbmFWyFOVTiuwWrBASiTpS(undefined4 *param_1)

{
  *param_1 = &DAT_70b1005c;
  if (param_1[3] != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1[4] != 0) {
    param_1[5] = param_1[4];
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: vxqFtlvVNVULPgfqrRdRbueCCCTkwpb
// Entry: 0x71a00ed0 | Size: 6 bytes
// =========================================================================

char * vxqFtlvVNVULPgfqrRdRbueCCCTkwpb(void)

{
  return s_rnnoise_7006d7c8;
}


// =========================================================================
// Function: IGaXHOryhuNMrX_JfnYWKHJ_iiMFNnEefYZygupWQIU
// Entry: 0x71a00f10 | Size: 162 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void IGaXHOryhuNMrX_JfnYWKHJ_iiMFNnEefYZygupWQIU(int param_1,undefined8 *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  short *psVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint in_fpscr;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  
  if (((*(int *)(param_1 + 0xc) == 0) || (uVar1 = *(uint *)(param_1 + 8), (int)uVar1 < 1)) ||
     (param_3 < (int)uVar1)) {
    return;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  if (0 < (int)uVar1) {
    if (uVar1 < 4) {
      uVar4 = 0;
    }
    else {
      uVar4 = uVar1 & 0x7ffffffc;
      uVar6 = uVar4;
      puVar8 = param_2;
      puVar9 = puVar3;
      do {
        uVar11 = *puVar8;
        puVar8 = puVar8 + 1;
        uVar6 = uVar6 - 4;
        auVar12 = VectorCopyLong(uVar11,2,0);
        auVar12 = FixedToFP(auVar12,0,0,0,0x20);
        *puVar9 = auVar12._0_8_;
        puVar9[1] = auVar12._8_8_;
        puVar9 = puVar9 + 2;
      } while (uVar6 != 0);
      if (uVar1 == uVar4) {
        halt_baddata();
      }
    }
    puVar7 = (undefined4 *)((int)puVar3 + uVar4 * 4);
    iVar2 = uVar1 - uVar4;
    psVar5 = (short *)(uVar4 * 2 + (int)param_2);
    do {
      iVar2 = iVar2 + -1;
      uVar10 = VectorSignedToFloat((int)*psVar5,(byte)(in_fpscr >> 0x16) & 3);
      *puVar7 = uVar10;
      puVar7 = puVar7 + 1;
      psVar5 = psVar5 + 1;
    } while (iVar2 != 0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: FUN_71a0103c
// Entry: 0x71a0103c | Size: 12 bytes
// =========================================================================

void FUN_71a0103c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_vector_7006dad5);
}


// =========================================================================
// Function: DYrFqobYCKRSENYadFfBsSfijv
// Entry: 0x71a0109c | Size: 2 bytes
// =========================================================================

void DYrFqobYCKRSENYadFfBsSfijv(void)

{
  return;
}


// =========================================================================
// Function: ENqFfUNNmJyQrTVajztMgVMUXsVXb
// Entry: 0x71a010b6 | Size: 4 bytes
// =========================================================================

void ENqFfUNNmJyQrTVajztMgVMUXsVXb(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: VcWcIlZCUyeAuiHJRYiCYEAbguIFvqurF
// Entry: 0x71a010f0 | Size: 6 bytes
// =========================================================================

undefined * VcWcIlZCUyeAuiHJRYiCYEAbguIFvqurF(void)

{
  return &DAT_7006d0c6;
}


// =========================================================================
// Function: aQErLij_MFbGSKzZcrxmC_JFEqxrWyoukFlySgKLiSDpC
// Entry: 0x71a01130 | Size: 306 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void aQErLij_MFbGSKzZcrxmC_JFEqxrWyoukFlySgKLiSDpC(int param_1,short *param_2,int param_3)

{
  uint uVar1;
  short *psVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  
  if (param_3 < 1) {
    return;
  }
  dVar12 = 0.0;
  iVar4 = 0;
  do {
    psVar2 = param_2 + iVar4;
    iVar4 = iVar4 + 1;
    dVar13 = (double)VectorSignedToFloat((int)*psVar2,(byte)(in_fpscr >> 0x16) & 3);
    dVar12 = dVar12 + dVar13 * 3.0517578125e-05 * dVar13 * 3.0517578125e-05;
  } while (param_3 != iVar4);
  dVar13 = (double)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
  if (1e-09 < SQRT(dVar12 / dVar13)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  ExclusiveAccess((double *)(param_1 + 0x20));
  ClearExclusiveLocal();
  DataMemoryBarrier(0x1b);
  DataMemoryBarrier(0x1b);
  dVar13 = *(double *)(param_1 + 0x20) + -120.0;
  *(float *)(param_1 + 0x28) = (float)dVar13;
  DataMemoryBarrier(0x1b);
  ExclusiveAccess((double *)(param_1 + 0x18));
  dVar12 = *(double *)(param_1 + 0x18);
  ClearExclusiveLocal();
  DataMemoryBarrier(0x1b);
  uVar1 = in_fpscr & 0xfffffff | (uint)(dVar13 < dVar12) << 0x1f | (uint)(dVar13 == dVar12) << 0x1e;
  bVar3 = (byte)(uVar1 >> 0x18);
  if ((bool)(bVar3 >> 6 & 1) || (bool)(bVar3 >> 7) != (NAN(dVar13) || NAN(dVar12))) {
    iVar4 = *(int *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (iVar4 < 1) goto LAB_71a0122e;
    iVar5 = iVar4 + -1;
    fVar7 = 1.0;
    if (iVar4 == 1) {
      fVar7 = 0.0;
    }
  }
  else {
    iVar6 = *(int *)(param_1 + 0xc);
    iVar5 = *(int *)(param_1 + 0x10);
    *(int *)(param_1 + 0x10) = iVar5 + 1;
    iVar4 = iVar6;
    if (iVar6 < 1) {
      iVar4 = iVar5 + -1;
    }
    if (iVar4 < 0 != (iVar6 < 1 && SBORROW4(iVar5,1))) {
LAB_71a0122e:
      fVar7 = 0.0;
      goto LAB_71a01232;
    }
    iVar5 = 0xc;
    fVar7 = 1.0;
  }
  *(int *)(param_1 + 0xc) = iVar5;
LAB_71a01232:
  fVar8 = *(float *)(param_1 + 8);
  iVar4 = param_3;
  if (param_3 < 2) {
    iVar4 = 1;
  }
  fVar9 = (float)VectorSignedToFloat(param_3,(byte)(uVar1 >> 0x16) & 3);
  fVar10 = fVar7 - fVar8;
  do {
    fVar8 = fVar10 / fVar9 + fVar8;
    iVar4 = iVar4 + -1;
    fVar11 = (float)VectorSignedToFloat((int)*param_2,(byte)(uVar1 >> 0x16) & 3);
    *param_2 = (short)(int)(fVar8 * fVar11);
    param_2 = param_2 + 1;
  } while (iVar4 != 0);
  *(float *)(param_1 + 8) = fVar7;
  return;
}


// =========================================================================
// Function: BczFmrdsbYOgLeBRdccKznVDMm_bXcgsgTCzasGxNxfyWLMsfzHkNfWGomOPrSyNAOAUaIJZnIOdSYyju_DOnqkX_NwSeRPI_BgATbAMdBOChykSRqHekAcZyMjCxccOoP_t
// Entry: 0x71a012ea | Size: 4 bytes
// =========================================================================

void BczFmrdsbYOgLeBRdccKznVDMm_bXcgsgTCzasGxNxfyWLMsfzHkNfWGomOPrSyNAOAUaIJZnIOdSYyju_DOnqkX_NwSeRPI_BgATbAMdBOChykSRqHekAcZyMjCxccOoP_t
               (void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_71a013dc
// Entry: 0x71a013dc | Size: 2 bytes
// =========================================================================

void FUN_71a013dc(void)

{
  return;
}


// =========================================================================
// Function: FUN_71a013f6
// Entry: 0x71a013f6 | Size: 4 bytes
// =========================================================================

void FUN_71a013f6(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: qAhWzUBHPqTnUVJztaRKWzKsvyHWCgTpoLVomwuKOUODSbQRndFWUUqrSaYRJBAKUFaKslkXWSUWOyu
// Entry: 0x71a014f4 | Size: 392 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x71a01692) */
/* WARNING: Removing unreachable block (ram,0x71a016c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void qAhWzUBHPqTnUVJztaRKWzKsvyHWCgTpoLVomwuKOUODSbQRndFWUUqrSaYRJBAKUFaKslkXWSUWOyu
               (int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  bool bVar5;
  uint in_fpscr;
  
  iVar4 = *param_1;
  DataMemoryBarrier(0x1b);
  DataMemoryBarrier(0x1b);
  DataMemoryBarrier(0x1b);
  if ((*(int *)(iVar4 + 0x40) == 0) && ((*(byte *)(iVar4 + 0x3d) & 1) != 0)) {
    DataMemoryBarrier(0x1b);
LAB_71a01548:
    DataMemoryBarrier(0x1b);
    if (((*(byte *)(iVar4 + 0x95) & 1) != 0) &&
       (DataMemoryBarrier(0x1b), (*(byte *)(iVar4 + 0x97) & 1) == 0)) {
      DataMemoryBarrier(0x1b);
      bVar3 = ~*(byte *)(iVar4 + 0x96) & 1;
      goto LAB_71a01578;
    }
  }
  else if ((*(byte *)(iVar4 + 0x3d) & 1) != 0 || *(int *)(iVar4 + 0x40) != 0) goto LAB_71a01548;
  bVar3 = 0;
LAB_71a01578:
  iVar2 = (uint)*(byte *)(iVar4 + 0x79) << 0x1f;
  if (iVar2 != 0 || bVar3 != 0) {
    for (piVar1 = *(int **)(iVar4 + 0xcc); piVar1 != *(int **)(iVar4 + 0xd0); piVar1 = piVar1 + 1) {
      if ((*(byte *)(*piVar1 + 4) & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    DataMemoryBarrier(0x1b);
    if (*(float *)(iVar4 + 0x58) != 1.0) {
      if ((short *)*param_2 != *(short **)(iVar4 + 0xe4)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (0 < (int)param_2[1]) {
        VectorSignedToFloat((int)*(short *)*param_2,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    if (iVar2 != 0) {
      thunk_HOiXtOwYIpiiJbTEputKBWeQBxMMFYTjaWBAmpUCDVWcWX();
      return;
    }
    if (bVar3 != 0) {
      bVar5 = *(int *)(iVar4 + 0x120) != 0;
      if (bVar5) {
        piVar1 = *(int **)(iVar4 + 0x118);
      }
      if (bVar5 && piVar1 != (int *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  return;
}


// =========================================================================
// Function: HOiXtOwYIpiiJbTEputKBWeQBxMMFYTjaWBAmpUCDVWcWX
// Entry: 0x71a018d8 | Size: 198 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void HOiXtOwYIpiiJbTEputKBWeQBxMMFYTjaWBAmpUCDVWcWX
               (int param_1,int param_2,int param_3,byte param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_fpscr;
  double dVar4;
  double dVar5;
  
  if (param_3 < 1) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0xe0);
  if (iVar2 != 0) {
    param_4 = *(byte *)(iVar2 + 4);
  }
  if (iVar2 != 0 && (param_4 & 1) != 0) {
    uVar3 = *(undefined4 *)(iVar2 + 0x28);
    DataMemoryBarrier(0x1b);
  }
  else {
    dVar4 = 0.0;
    iVar2 = 0;
    do {
      iVar1 = iVar2 * 2;
      iVar2 = iVar2 + 1;
      dVar5 = (double)VectorSignedToFloat((int)*(short *)(param_2 + iVar1),
                                          (byte)(in_fpscr >> 0x16) & 3);
      dVar4 = dVar4 + dVar5 * 3.0517578125e-05 * dVar5 * 3.0517578125e-05;
    } while (param_3 != iVar2);
    dVar5 = (double)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
    if (1e-06 < SQRT(dVar4 / dVar5)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar3 = 0xc2f00000;
  }
  DataMemoryBarrier(0x1b);
  *(undefined4 *)(param_1 + 0x7c) = uVar3;
  DataMemoryBarrier(0x1b);
  if (*(int *)(param_1 + 0x8c) <= *(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x80) >> 1) {
    DataMemoryBarrier(0x1b);
    *(undefined1 *)(param_1 + 0x79) = 0;
    DataMemoryBarrier(0x1b);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: gTgTYtYKC_PsuGWKxPcolAxGKsXxRLfNmTJZYkm
// Entry: 0x71a01a38 | Size: 92 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

undefined4 gTgTYtYKC_PsuGWKxPcolAxGKsXxRLfNmTJZYkm(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint in_fpscr;
  double dVar3;
  double dVar4;
  
  if (0 < param_2) {
    dVar3 = 0.0;
    iVar2 = 0;
    do {
      iVar1 = iVar2 * 2;
      iVar2 = iVar2 + 1;
      dVar4 = (double)VectorSignedToFloat((int)*(short *)(param_1 + iVar1),
                                          (byte)(in_fpscr >> 0x16) & 3);
      dVar3 = dVar3 + dVar4 * 3.0517578125e-05 * dVar4 * 3.0517578125e-05;
    } while (param_2 != iVar2);
    if (0 < param_2) {
      dVar4 = (double)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
      if (1e-06 < SQRT(dVar3 / dVar4)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  return 0xc2f00000;
}


// =========================================================================
// Function: fZVIogSIzDYEWTVXoOHMDKoDaANeCexOcuBExdubEAIKAoSlDsnZzsDdyEIrRXruKpQIQAeEFIBKWkZpfieDB
// Entry: 0x71a01af0 | Size: 324 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */

undefined *
fZVIogSIzDYEWTVXoOHMDKoDaANeCexOcuBExdubEAIKAoSlDsnZzsDdyEIrRXruKpQIQAeEFIBKWkZpfieDB
          (int *param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  int extraout_r2;
  undefined8 *puVar7;
  int extraout_r3;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  int unaff_r8;
  int iVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar10 = (undefined *)*param_1;
  uVar1 = param_1[2];
  if (param_4 <= (uint)((int)(uVar1 - (int)puVar10) >> 1)) {
    iVar6 = param_1[1] - (int)puVar10;
    if (((uint)(iVar6 >> 1) < param_4) &&
       (param_2 = param_2 + iVar6, (undefined *)param_1[1] != puVar10)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (param_3 == param_2) {
      param_1[1] = (int)puVar10;
      return puVar10;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (puVar10 != (undefined *)0x0) {
    param_1[1] = (int)puVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (-1 < (int)param_4) {
    if (param_4 < uVar1) {
      param_4 = uVar1;
    }
    if (0x7ffffffd < uVar1) {
      param_4 = 0x7fffffff;
    }
    if (-1 < (int)param_4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  uVar15 = FUN_719fe110(param_1);
  iVar5 = (int)((ulonglong)uVar15 >> 0x20);
  iVar6 = (int)uVar15;
  *(undefined1 **)(extraout_r2 + 0x40) = &stack0xfffffff8;
  param_1[0x14] = (int)param_1;
  *(int *)iVar6 = iVar6;
  *(undefined4 *)(iVar6 + 4) = 0x71a01e5;
  DAT_071a01eb = SUB41(param_1,0);
  piVar2 = (int *)(iVar5 * 0x10);
  if (unaff_r8 < 1) goto LAB_71a01de4;
  puVar11 = (undefined8 *)piVar2[1];
  if (piVar2[2] - (int)puVar11 >> 1 < unaff_r8) {
    uVar1 = unaff_r8 + ((int)puVar11 - *piVar2 >> 1);
    if ((int)uVar1 < 0) {
      FUN_719fe110(piVar2);
    }
    else {
      uVar3 = piVar2[2] - *piVar2;
      if (uVar1 < uVar3) {
        uVar1 = uVar3;
      }
      if (0x7ffffffd < uVar3) {
        uVar1 = 0x7fffffff;
      }
      if (uVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (-1 < (int)uVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_719fe2ec();
  }
  iVar6 = (int)(puVar11 + -0xe3403ca) >> 1;
  if (iVar6 < unaff_r8) {
    iVar12 = iVar5 + (int)(puVar11 + -0xe3403ca);
    if (extraout_r3 != iVar12) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    piVar2[1] = (int)puVar11;
    if (iVar6 < 1) goto LAB_71a01de4;
  }
  else {
    iVar12 = iVar5 + unaff_r8 * 2;
  }
  puVar9 = (undefined8 *)((int)puVar11 + unaff_r8 * -2);
  puVar7 = puVar11;
  if (puVar9 < puVar11) {
    puVar7 = (undefined8 *)((int)puVar9 + 2);
    if ((undefined8 *)((int)puVar9 + 2) < puVar11) {
      puVar7 = puVar11;
    }
    puVar10 = (undefined *)((int)puVar7 + ~(uint)puVar11 + unaff_r8 * 2);
    puVar4 = puVar11;
    if ((&DAT_0000000d < puVar10) && (0xf < (uint)(unaff_r8 * 2))) {
      uVar3 = ((uint)puVar10 >> 1) + 1;
      uVar13 = uVar3 & 0xfffffff8;
      puVar7 = (undefined8 *)((int)puVar11 + uVar13 * 2);
      puVar8 = (undefined8 *)((int)puVar9 + uVar13 * 2);
      uVar1 = uVar13;
      do {
        uVar15 = *puVar9;
        uVar14 = puVar9[1];
        puVar9 = puVar9 + 2;
        uVar1 = uVar1 - 8;
        *puVar4 = uVar15;
        puVar4[1] = uVar14;
        puVar4 = puVar4 + 2;
      } while (uVar1 != 0);
      puVar4 = puVar7;
      puVar9 = puVar8;
      if (uVar3 == uVar13) goto LAB_71a01d5a;
    }
    do {
      puVar8 = (undefined8 *)((int)puVar9 + 2);
      puVar7 = (undefined8 *)((int)puVar4 + 2);
      *(undefined2 *)puVar4 = *(undefined2 *)puVar9;
      puVar4 = puVar7;
      puVar9 = puVar8;
    } while (puVar8 < puVar11);
  }
LAB_71a01d5a:
  piVar2[1] = (int)puVar7;
  if (puVar11 != (undefined8 *)(&UNK_71a01e50 + unaff_r8 * 2)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (iVar12 != iVar5) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_71a01de4:
  return &UNK_71a01e50;
}


// =========================================================================
// Function: VzLCktuHVYUkPhKjvUpVwqUUDEEItmLrrxiLpIlPHdfTFHKWVgDWUDpllCqajhm_apawOkFboMQCzajYFgysjnTILmhppIDPGtcYSJbFJrxMDDhJTvT
// Entry: 0x71a01c6c | Size: 342 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

int VzLCktuHVYUkPhKjvUpVwqUUDEEItmLrrxiLpIlPHdfTFHKWVgDWUDpllCqajhm_apawOkFboMQCzajYFgysjnTILmhppIDPGtcYSJbFJrxMDDhJTvT
              (int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (param_5 < 1) {
    return param_2;
  }
  puVar7 = (undefined8 *)param_1[1];
  if (param_1[2] - (int)puVar7 >> 1 < param_5) {
    uVar9 = param_5 + ((int)puVar7 - *param_1 >> 1);
    if ((int)uVar9 < 0) {
      FUN_719fe110(param_1);
    }
    else {
      uVar2 = param_1[2] - *param_1;
      if (uVar9 < uVar2) {
        uVar9 = uVar2;
      }
      if (0x7ffffffd < uVar2) {
        uVar9 = 0x7fffffff;
      }
      if (uVar9 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (-1 < (int)uVar9) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_719fe2ec();
  }
  iVar1 = (int)puVar7 - param_2 >> 1;
  if (iVar1 < param_5) {
    iVar8 = param_3 + ((int)puVar7 - param_2);
    if (param_4 != iVar8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_1[1] = (int)puVar7;
    if (iVar1 < 1) {
      return param_2;
    }
  }
  else {
    iVar8 = param_3 + param_5 * 2;
  }
  puVar6 = (undefined8 *)((int)puVar7 + param_5 * -2);
  puVar4 = puVar7;
  if (puVar6 < puVar7) {
    puVar4 = (undefined8 *)((int)puVar6 + 2);
    if ((undefined8 *)((int)puVar6 + 2) < puVar7) {
      puVar4 = puVar7;
    }
    uVar9 = (int)puVar4 + ~(uint)puVar7 + param_5 * 2;
    puVar3 = puVar7;
    if ((0xd < uVar9) && (0xf < (uint)(param_5 * 2))) {
      uVar2 = (uVar9 >> 1) + 1;
      uVar10 = uVar2 & 0xfffffff8;
      puVar4 = (undefined8 *)((int)puVar7 + uVar10 * 2);
      puVar5 = (undefined8 *)((int)puVar6 + uVar10 * 2);
      uVar9 = uVar10;
      do {
        uVar11 = *puVar6;
        uVar12 = puVar6[1];
        puVar6 = puVar6 + 2;
        uVar9 = uVar9 - 8;
        *puVar3 = uVar11;
        puVar3[1] = uVar12;
        puVar3 = puVar3 + 2;
      } while (uVar9 != 0);
      puVar3 = puVar4;
      puVar6 = puVar5;
      if (uVar2 == uVar10) goto LAB_71a01d5a;
    }
    do {
      puVar5 = (undefined8 *)((int)puVar6 + 2);
      puVar4 = (undefined8 *)((int)puVar3 + 2);
      *(undefined2 *)puVar3 = *(undefined2 *)puVar6;
      puVar3 = puVar4;
      puVar6 = puVar5;
    } while (puVar5 < puVar7);
  }
LAB_71a01d5a:
  param_1[1] = (int)puVar4;
  if (puVar7 != (undefined8 *)(param_2 + param_5 * 2)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (iVar8 == param_3) {
    return param_2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: VfyNZAtzFsQfPDyRzsaGYjJewVFAJMTLYDwPKwSeOpDbiHIrlxuWFeueheVfekFDrsLNbXGCvpBLeRabpLBi_JwsJsTvQqmcRFZlTCoejYqpRmMzpFCfbplSgdFMYRjrYPVtto
// Entry: 0x71a01f76 | Size: 4 bytes
// =========================================================================

void VfyNZAtzFsQfPDyRzsaGYjJewVFAJMTLYDwPKwSeOpDbiHIrlxuWFeueheVfekFDrsLNbXGCvpBLeRabpLBi_JwsJsTvQqmcRFZlTCoejYqpRmMzpFCfbplSgdFMYRjrYPVtto
               (void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_71a02068
// Entry: 0x71a02068 | Size: 2 bytes
// =========================================================================

void FUN_71a02068(void)

{
  return;
}


// =========================================================================
// Function: FUN_71a02082
// Entry: 0x71a02082 | Size: 4 bytes
// =========================================================================

void FUN_71a02082(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: TXxetvJDXystgBvBfNzth_fcCtwhoPSObtjoLmOppUk_AGR_RTjxXG__mVJEbaflpxoqBynpRYAGWWJsP
// Entry: 0x71a02180 | Size: 710 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TXxetvJDXystgBvBfNzth_fcCtwhoPSObtjoLmOppUk_AGR_RTjxXG__mVJEbaflpxoqBynpRYAGWWJsP
               (int *param_1,int *param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined8 *puVar6;
  short sVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  uint in_fpscr;
  double dVar19;
  undefined1 auVar20 [16];
  double dVar21;
  undefined8 uVar22;
  undefined2 auStack_30 [4];
  int iStack_28;
  
  iVar17 = _ext___stack_chk_guard;
  iStack_28 = _ext___stack_chk_guard;
  iVar16 = *param_1;
  uVar14 = param_2[2];
  uVar15 = uVar14;
  if ((int)uVar14 < 2) {
    uVar15 = 1;
  }
  DataMemoryBarrier(0x1b);
  if ((*(byte *)(iVar16 + 0x7a) & 1) == 0) {
    DataMemoryBarrier(0x1b);
    bVar18 = (*(byte *)(iVar16 + 0x95) & 1) != 0;
    iVar2 = 0;
    if (bVar18) {
      iVar2 = *(int *)(iVar16 + 0x11c);
    }
    if (!bVar18 || iVar2 == 0) {
      if (*(int *)(iVar16 + 0xf4) - *(int *)(iVar16 + 0xf0) >> 1 < param_2[1]) {
        auStack_30[0] = 0;
        FUN_719fdab8((int *)(iVar16 + 0xf0),param_2[1],auStack_30);
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar2 = param_2[1] * uVar15;
    if (*(int *)(iVar16 + 0x148) < iVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (0 < iVar2) {
      iVar3 = *(int *)(iVar16 + 0x138);
      iVar12 = 0;
      uVar5 = *(uint *)(iVar16 + 0x144);
      do {
        uVar8 = uVar5 + 1;
        iVar11 = *(int *)(iVar16 + 0x148);
        *(undefined2 *)(*param_2 + iVar12 * 2) =
             *(undefined2 *)(*(int *)(iVar3 + (uVar5 >> 0xb) * 4) + (uVar5 & 0x7ff) * 2);
        *(uint *)(iVar16 + 0x144) = uVar8;
        *(int *)(iVar16 + 0x148) = iVar11 + -1;
        if (0xfff < uVar8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        iVar12 = iVar12 + 1;
        uVar5 = uVar8;
      } while (iVar2 - iVar12 != 0);
    }
    for (piVar4 = *(int **)(iVar16 + 0xcc); piVar4 != *(int **)(iVar16 + 0xd0); piVar4 = piVar4 + 1)
    {
      if ((*(byte *)(*piVar4 + 4) & 1) != 0) {
        iVar17 = param_2[1];
        piVar4 = (int *)(iVar16 + 0xf0);
        iVar2 = *piVar4;
        if (*(int *)(iVar16 + 0xf4) - iVar2 >> 1 < iVar17) {
          auStack_30[0] = 0;
          FUN_719fdab8(piVar4,iVar17,auStack_30);
          iVar2 = *piVar4;
          iVar17 = param_2[1];
        }
        if (iVar17 < 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar13 = (undefined8 *)*param_2;
        iVar16 = 0;
        do {
          if (3 < (int)uVar14) {
            auVar20 = (undefined1  [16])0x0;
            uVar5 = uVar15 & 0x7ffffffc;
            puVar6 = puVar13;
            do {
              uVar22 = *puVar6;
              puVar6 = puVar6 + 1;
              uVar5 = uVar5 - 4;
              auVar20 = VectorAdd(auVar20,uVar22,2,0);
            } while (uVar5 != 0);
            uVar22 = VectorAdd(auVar20._0_8_,auVar20._8_8_,4);
            iVar3 = (int)((ulonglong)uVar22 >> 0x20) + (int)uVar22;
            uVar5 = uVar15 & 0x7ffffffc;
            goto joined_r0x71a02620;
          }
          uVar5 = 0;
          iVar3 = 0;
          do {
            iVar12 = uVar5 * 2;
            uVar5 = uVar5 + 1;
            iVar3 = iVar3 + *(short *)((int)puVar13 + iVar12);
joined_r0x71a02620:
          } while (uVar15 != uVar5);
          uVar1 = FUN_71ba0440(iVar3,uVar15);
          *(undefined2 *)(iVar2 + iVar16 * 2) = uVar1;
          iVar16 = iVar16 + 1;
          puVar13 = (undefined8 *)((int)puVar13 + uVar15 * 2);
        } while (iVar16 != iVar17);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  else {
    iVar2 = param_2[1];
    if (iVar2 < 1) {
      uVar5 = *(uint *)(iVar16 + 0x90);
      uVar8 = *(int *)(iVar16 + 0x84) - *(int *)(iVar16 + 0x80) >> 1;
    }
    else {
      iVar12 = *(int *)(iVar16 + 0x80);
      puVar13 = (undefined8 *)*param_2;
      uVar5 = *(uint *)(iVar16 + 0x90);
      dVar19 = 0.0;
      uVar8 = *(int *)(iVar16 + 0x84) - iVar12 >> 1;
      iVar11 = 0;
      iVar3 = 0;
      do {
        if (uVar5 < uVar8) {
          iVar11 = iVar11 + 1;
          sVar7 = *(short *)(iVar12 + uVar5 * 2);
          uVar5 = uVar5 + 1;
          *(uint *)(iVar16 + 0x90) = uVar5;
          dVar21 = (double)VectorSignedToFloat((int)sVar7,(byte)(in_fpscr >> 0x16) & 3);
          dVar19 = dVar19 + dVar21 * 3.0517578125e-05 * dVar21 * 3.0517578125e-05;
        }
        else {
          sVar7 = 0;
        }
        if (7 < (int)uVar14) {
          uVar22 = CONCAT44(CONCAT22(sVar7,sVar7),CONCAT22(sVar7,sVar7));
          puVar6 = puVar13;
          uVar10 = uVar15 & 0x7ffffff8;
          do {
            *puVar6 = uVar22;
            puVar6[1] = uVar22;
            puVar6 = puVar6 + 2;
            uVar10 = uVar10 - 8;
            uVar9 = uVar15 & 0x7ffffff8;
            if (uVar10 == 0) goto joined_r0x71a02354;
          } while( true );
        }
        uVar9 = 0;
        do {
          *(short *)((int)puVar13 + uVar9 * 2) = sVar7;
          uVar9 = uVar9 + 1;
joined_r0x71a02354:
        } while (uVar15 != uVar9);
        iVar3 = iVar3 + 1;
        puVar13 = (undefined8 *)((int)puVar13 + uVar15 * 2);
      } while (iVar3 != iVar2);
      if ((0 < iVar11) &&
         (dVar21 = (double)VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x16) & 3),
         1e-06 < SQRT(dVar19 / dVar21))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    DataMemoryBarrier(0x1b);
    *(undefined4 *)(iVar16 + 0x7c) = 0xc2f00000;
    DataMemoryBarrier(0x1b);
    if (uVar8 <= uVar5) {
      DataMemoryBarrier(0x1b);
      *(undefined1 *)(iVar16 + 0x7a) = 0;
      DataMemoryBarrier(0x1b);
    }
  }
  if (_ext___stack_chk_guard == iVar17) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: xztmx_HcjzpmnmVhnXd_UJIpgSsJBvtGmRrXnLa_VymLYioXFctXXEQhcfAzJCbqxvLeoiJUQIEDmWEzWzhqhNdESHvrsxPgvhOhKEHJULnXHNgJZxNwsdGGjpNfTydABVdXnnTYq_ufsjZmDFaOzBagxFLVDELAmi_hcZVveRNy
// Entry: 0x71a02948 | Size: 1090 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void xztmx_HcjzpmnmVhnXd_UJIpgSsJBvtGmRrXnLa_VymLYioXFctXXEQhcfAzJCbqxvLeoiJUQIEDmWEzWzhqhNdESHvrsxPgvhOhKEHJULnXHNgJZxNwsdGGjpNfTydABVdXnnTYq_ufsjZmDFaOzBagxFLVDELAmi_hcZVveRNy
               (int *param_1,int param_2,int *param_3,int param_4,undefined2 *param_5,
               undefined2 *param_6,uint param_7)

{
  undefined2 uVar1;
  int *piVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined2 *puVar11;
  int *piVar12;
  uint uVar13;
  undefined2 *puVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  undefined2 *puVar18;
  int *piStack_38;
  undefined2 *puStack_34;
  int iStack_28;
  
  iStack_28 = _ext___stack_chk_guard;
  uVar10 = *(uint *)(param_2 + 0x10);
  iVar17 = *(int *)(param_2 + 4);
  iVar16 = *(int *)(param_2 + 8);
  uVar13 = uVar10 >> 0xb;
  piVar2 = (int *)(iVar17 + uVar13 * 4);
  if (iVar16 == iVar17) {
    iVar8 = 0;
    if (param_4 == 0) goto LAB_71a029a0;
  }
  else {
    iVar8 = *piVar2 + (uVar10 & 0x7ff) * 2;
    if (iVar8 == param_4) {
LAB_71a029a0:
      uVar7 = 0;
      goto LAB_71a029a2;
    }
  }
  uVar7 = ((param_4 - *param_3 >> 1) + ((int)param_3 - (int)piVar2) * 0x200) -
          (iVar8 - *piVar2 >> 1);
LAB_71a029a2:
  iVar8 = *(int *)(param_2 + 0x14);
  if (uVar7 < iVar8 - uVar7) {
    if (uVar10 < param_7) {
      FUN_719fece4(param_2,param_7 - uVar10);
      uVar10 = *(uint *)(param_2 + 0x10);
      iVar17 = *(int *)(param_2 + 4);
      iVar16 = *(int *)(param_2 + 8);
      uVar13 = uVar10 >> 0xb;
    }
    piStack_38 = (int *)(iVar17 + uVar13 * 4);
    if (iVar16 == iVar17) {
      puStack_34 = (undefined2 *)0x0;
    }
    else {
      puStack_34 = (undefined2 *)(*piStack_38 + (uVar10 & 0x7ff) * 2);
    }
    piVar2 = piStack_38;
    puVar11 = puStack_34;
    if (uVar7 < param_7) {
      puVar5 = param_5 + (param_7 - uVar7);
      if (uVar7 < param_7 >> 1) {
        puVar5 = param_6 + -uVar7;
      }
      param_7 = uVar7;
      if (puVar5 != param_5) {
        puVar3 = (undefined2 *)*piStack_38;
        iVar16 = *(int *)(param_2 + 0x14);
        puVar18 = puVar5;
        do {
          if (puVar11 == puVar3) {
            piVar2 = piVar2 + -1;
            puVar3 = (undefined2 *)*piVar2;
            puVar11 = puVar3 + 0x800;
          }
          puVar18 = puVar18 + -1;
          iVar16 = iVar16 + 1;
          puVar11 = puVar11 + -1;
          *puVar11 = *puVar18;
          uVar10 = uVar10 - 1;
        } while (puVar18 != param_5);
        *(uint *)(param_2 + 0x10) = uVar10;
        *(int *)(param_2 + 0x14) = iVar16;
        param_5 = puVar5;
      }
    }
    if (param_7 != 0) {
      uVar13 = param_7 + ((int)puStack_34 - *piStack_38 >> 1);
      if ((int)uVar13 < 1) {
        uVar4 = 0x7ff - uVar13;
        uVar13 = ~uVar4;
        piVar15 = (int *)((int)piStack_38 - (uVar4 >> 9 & 0xfffffffc));
        puVar5 = (undefined2 *)*piVar15;
      }
      else {
        puVar5 = (undefined2 *)piStack_38[uVar13 >> 0xb];
        piVar15 = piStack_38 + (uVar13 >> 0xb);
      }
      puVar18 = puVar5 + (uVar13 & 0x7ff);
      if (puVar18 != puStack_34) {
        iVar16 = *(int *)(param_2 + 0x14);
        puVar14 = (undefined2 *)*piVar2;
        puVar3 = puVar18;
        piVar12 = piVar15;
        do {
          if (puVar11 == puVar14) {
            piVar2 = piVar2 + -1;
            puVar14 = (undefined2 *)*piVar2;
            puVar11 = puVar14 + 0x800;
          }
          if (puVar3 == puVar5) {
            piVar12 = piVar12 + -1;
            puVar5 = (undefined2 *)*piVar12;
            puVar3 = puVar5 + 0x800;
          }
          puVar3 = puVar3 + -1;
          puVar11 = puVar11 + -1;
          iVar16 = iVar16 + 1;
          uVar10 = uVar10 - 1;
          *puVar11 = *puVar3;
        } while (puVar3 != puStack_34);
        *(uint *)(param_2 + 0x10) = uVar10;
        *(int *)(param_2 + 0x14) = iVar16;
      }
      if (param_7 < uVar7) {
        uVar10 = uVar7 + ((int)puStack_34 - *piStack_38 >> 1);
        if ((int)uVar10 < 1) {
          piVar2 = (int *)((int)piStack_38 - (0x7ff - uVar10 >> 9 & 0xfffffffc));
          iVar16 = *piVar2 + (~(0x7ff - uVar10) & 0x7ff) * 2;
        }
        else {
          piVar2 = piStack_38 + (uVar10 >> 0xb);
          iVar16 = piStack_38[uVar10 >> 0xb] + (uVar10 & 0x7ff) * 2;
        }
        FUN_71a00514(piVar15,puVar18,piVar2,iVar16,&piStack_38);
      }
      if (param_5 != param_6) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  else {
    iVar9 = 0;
    if (iVar16 != iVar17) {
      iVar9 = (iVar16 - iVar17) * 0x200 + -1;
    }
    uVar10 = uVar10 + iVar8;
    if (iVar9 - uVar10 < param_7) {
      FUN_719ff5ec(param_2,param_7 - (iVar9 - uVar10));
      iVar8 = *(int *)(param_2 + 0x14);
      iVar17 = *(int *)(param_2 + 4);
      iVar16 = *(int *)(param_2 + 8);
      uVar10 = *(int *)(param_2 + 0x10) + iVar8;
    }
    piVar2 = (int *)(iVar17 + (uVar10 >> 0xb) * 4);
    if (iVar16 == iVar17) {
      puVar11 = (undefined2 *)0x0;
    }
    else {
      puVar11 = (undefined2 *)(*piVar2 + (uVar10 & 0x7ff) * 2);
    }
    uVar10 = iVar8 - uVar7;
    piVar15 = piVar2;
    puVar5 = puVar11;
    if (uVar10 < param_7) {
      puVar18 = param_6 + (uVar10 - param_7);
      if (uVar10 < param_7 >> 1) {
        puVar18 = param_5 + uVar10;
      }
      param_7 = uVar10;
      if (puVar18 != param_6) {
        puVar3 = (undefined2 *)*piVar2;
        puVar14 = puVar11;
        puVar6 = puVar18;
        do {
          iVar8 = iVar8 + 1;
          puVar5 = puVar14 + 1;
          *puVar14 = *puVar6;
          puVar6 = puVar6 + 1;
          if ((int)puVar5 - (int)puVar3 == 0x1000) {
            piVar15 = piVar15 + 1;
            puVar5 = (undefined2 *)*piVar15;
            puVar3 = puVar5;
          }
          puVar14 = puVar5;
        } while (puVar6 != param_6);
        *(int *)(param_2 + 0x14) = iVar8;
        param_6 = puVar18;
      }
    }
    if (param_7 != 0) {
      uVar13 = ((int)puVar11 - *piVar2 >> 1) - param_7;
      if ((int)uVar13 < 1) {
        uVar4 = 0x7ff - uVar13;
        uVar13 = ~uVar4;
        piVar12 = (int *)((int)piVar2 - (uVar4 >> 9 & 0xfffffffc));
        puVar18 = (undefined2 *)*piVar12;
      }
      else {
        puVar18 = (undefined2 *)piVar2[uVar13 >> 0xb];
        piVar12 = piVar2 + (uVar13 >> 0xb);
      }
      puVar3 = puVar18 + (uVar13 & 0x7ff);
      if (puVar3 != puVar11) {
        puVar14 = (undefined2 *)*piVar15;
        do {
          uVar1 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar6 = puVar5 + 1;
          *puVar5 = uVar1;
          iVar8 = iVar8 + 1;
          if ((int)puVar6 - (int)puVar14 == 0x1000) {
            piVar15 = piVar15 + 1;
            puVar6 = (undefined2 *)*piVar15;
            puVar14 = puVar6;
          }
          if ((int)puVar3 - (int)puVar18 == 0x1000) {
            piVar12 = piVar12 + 1;
            puVar3 = (undefined2 *)*piVar12;
            puVar18 = puVar3;
          }
          puVar5 = puVar6;
        } while (puVar3 != puVar11);
        *(int *)(param_2 + 0x14) = iVar8;
      }
      if (param_7 < uVar10) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (param_6 != param_5) {
        iVar16 = *piVar2;
        while( true ) {
          piVar2 = piVar2 + -1;
          iVar16 = (int)puVar11 - iVar16 >> 1;
          iVar17 = (int)param_6 - (int)param_5 >> 1;
          if (iVar17 < iVar16) {
            iVar16 = iVar17;
          }
          param_6 = param_6 + -iVar16;
          if (iVar16 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (param_6 == param_5) break;
          iVar16 = *piVar2;
          puVar11 = (undefined2 *)(iVar16 + 0x1000);
        }
      }
    }
  }
  piVar2 = (int *)(*(int *)(param_2 + 4) + (*(uint *)(param_2 + 0x10) >> 0xb) * 4);
  if (*(int *)(param_2 + 8) == *(int *)(param_2 + 4)) {
    iVar16 = 0;
  }
  else {
    iVar16 = *piVar2 + (*(uint *)(param_2 + 0x10) & 0x7ff) * 2;
  }
  *param_1 = (int)piVar2;
  param_1[1] = iVar16;
  if (uVar7 != 0) {
    uVar7 = uVar7 + (iVar16 - *piVar2 >> 1);
    if ((int)uVar7 < 1) {
      uVar10 = 0x7ff - uVar7;
      uVar7 = ~uVar10;
      piVar2 = (int *)((int)piVar2 - (uVar10 >> 9 & 0xfffffffc));
      iVar16 = *piVar2;
    }
    else {
      iVar16 = piVar2[uVar7 >> 0xb];
      piVar2 = piVar2 + (uVar7 >> 0xb);
    }
    *param_1 = (int)piVar2;
    param_1[1] = iVar16 + (uVar7 & 0x7ff) * 2;
  }
  if (_ext___stack_chk_guard == iStack_28) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: GPLWPbpXfrElSCndxxtiPZiChGeWNcwPuuLIWiHiZGPDp
// Entry: 0x71a03258 | Size: 16 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void GPLWPbpXfrElSCndxxtiPZiChGeWNcwPuuLIWiHiZGPDp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: mLxyKQYauGNciBADnTJirshJMM_wYBPVwEMgxbprPIMr
// Entry: 0x71a03404 | Size: 120 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void mLxyKQYauGNciBADnTJirshJMM_wYBPVwEMgxbprPIMr(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int aiStack_48 [4];
  int *piStack_38;
  int aiStack_30 [4];
  int *piStack_20;
  int iStack_14;
  
  piVar4 = aiStack_48;
  iStack_14 = _ext___stack_chk_guard;
  piVar1 = *(int **)(param_1 + 0x34);
  if (piVar1 != (int *)0x0) {
    piStack_20 = (int *)0x0;
    piVar3 = aiStack_30;
    (**(code **)(*piVar1 + 0x24))(piVar1,piVar3);
    if (piStack_20 == piVar3) {
      iVar2 = 0x10;
    }
    else {
      if (piStack_20 == (int *)0x0) goto LAB_71a03440;
      iVar2 = 0x14;
      piVar3 = piStack_20;
    }
    (**(code **)(*piVar3 + iVar2))(piVar3);
  }
LAB_71a03440:
  piVar1 = *(int **)(param_1 + 0x38);
  if (piVar1 != (int *)0x0) {
    piStack_38 = (int *)0x0;
    (**(code **)(*piVar1 + 0x14))(piVar1,aiStack_48);
    if (piStack_38 == aiStack_48) {
      iVar2 = 0x10;
    }
    else {
      if (piStack_38 == (int *)0x0) goto LAB_71a0346a;
      iVar2 = 0x14;
      piVar4 = piStack_38;
    }
    (**(code **)(*piVar4 + iVar2))(piVar4);
  }
LAB_71a0346a:
  if (_ext___stack_chk_guard != iStack_14) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}


// =========================================================================
// Function: HwKVSqItZbTblNfsqwJDtrVwkTRzVhwllsieOpYMilrpQTz
// Entry: 0x71a03530 | Size: 28 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void HwKVSqItZbTblNfsqwJDtrVwkTRzVhwllsieOpYMilrpQTz(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: CsELvjMARnKqnPUOBWOQNlrutoQhdhLFdhSmGVXRpTutt_sIXoMpmYIkERzmFjwtkhGfPakLX_AvcpqmQooYorQHgEWmlabcxbaIkYQYyVEXVpwkyLZqd_tBELOkq_BRbwWtfFzTIPbjG_vfvaEeHzNOLqGTfaWZGQNRvXHWjRNgRTRekGEbjFewjSkBFgC_TyGdUlIJCTWSThlLlJheLOBRRuwr_YFjFqkjrMuBQnsvbLoVzmlwklbJKRtgViWLueJQl_qCjSbEYwYw_eWPeWwgKvDqvBEZhA_buqFcYEgzUTsSHuapLzTCwMiWptVAts_wMBHwtsopiHPcXquAiYqvvIcMYLNFklynHvQxcFRHzszIofjfnph
// Entry: 0x71a037a4 | Size: 198 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void CsELvjMARnKqnPUOBWOQNlrutoQhdhLFdhSmGVXRpTutt_sIXoMpmYIkERzmFjwtkhGfPakLX_AvcpqmQooYorQHgEWmlabcxbaIkYQYyVEXVpwkyLZqd_tBELOkq_BRbwWtfFzTIPbjG_vfvaEeHzNOLqGTfaWZGQNRvXHWjRNgRTRekGEbjFewjSkBFgC_TyGdUlIJCTWSThlLlJheLOBRRuwr_YFjFqkjrMuBQnsvbLoVzmlwklbJKRtgViWLueJQl_qCjSbEYwYw_eWPeWwgKvDqvBEZhA_buqFcYEgzUTsSHuapLzTCwMiWptVAts_wMBHwtsopiHPcXquAiYqvvIcMYLNFklynHvQxcFRHzszIofjfnph
               (undefined4 *param_1,int *param_2,ushort *param_3)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar4;
  int *unaff_r6;
  uint uVar5;
  uint uVar6;
  
  uVar4 = param_2[1];
  uVar6 = (uint)*param_3;
  if (uVar4 != 0) {
    uVar1 = uVar4 - (uVar4 >> 1 & 0x55555555);
    uVar1 = (uVar1 & 0x33333333) + (uVar1 >> 2 & 0x33333333);
    uVar1 = (uVar1 + (uVar1 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
    if (uVar1 < 2) {
      uVar5 = uVar4 - 1 & uVar6;
    }
    else {
      uVar5 = uVar6;
      if (uVar4 <= uVar6) {
        FUN_71ba33fc(uVar6,uVar4 & 0xffff);
        uVar5 = extraout_r1;
      }
    }
    piVar2 = *(int **)(*param_2 + uVar5 * 4);
    if (piVar2 != (int *)0x0) {
      unaff_r6 = (int *)*piVar2;
    }
    if (piVar2 != (int *)0x0 && unaff_r6 != (int *)0x0) {
      do {
        uVar3 = unaff_r6[1];
        if (uVar3 == uVar6) {
          if (*(ushort *)(unaff_r6 + 2) == uVar6) {
            *(undefined1 *)(param_1 + 1) = 0;
            *param_1 = unaff_r6;
            return;
          }
        }
        else {
          if (uVar1 < 2) {
            uVar3 = uVar3 & uVar4 - 1;
          }
          else if (uVar4 <= uVar3) {
            FUN_71ba33fc(uVar3,uVar4);
            uVar3 = extraout_r1_00;
          }
          if (uVar3 != uVar5) {
            halt_baddata();
          }
        }
        unaff_r6 = (int *)*unaff_r6;
      } while (unaff_r6 != (int *)0x0);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: lqBUPQVCdhrWjMemcYUEcstMwvfyhr_FI_MrLob_YG_Fgfoqc_JsMBYUcvMYnevFairuqUQmWCCvOoyUvibnAsoszqBkVdsFFaUwDLQY_LTwzbbuhvjBcKTlhbmSIpHroqMUixMWFxwHOlsuiccbtVeGArQUrNregBHvLENCVnhkEwfxIHYbV_BgZocHlWlxUqhQonYGJaWHBYwfdumxTnyIFWnTkgfhwehHCXpAlpEzcqB
// Entry: 0x71a03b86 | Size: 38 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void lqBUPQVCdhrWjMemcYUEcstMwvfyhr_FI_MrLob_YG_Fgfoqc_JsMBYUcvMYnevFairuqUQmWCCvOoyUvibnAsoszqBkVdsFFaUwDLQY_LTwzbbuhvjBcKTlhbmSIpHroqMUixMWFxwHOlsuiccbtVeGArQUrNregBHvLENCVnhkEwfxIHYbV_BgZocHlWlxUqhQonYGJaWHBYwfdumxTnyIFWnTkgfhwehHCXpAlpEzcqB
               (undefined4 *param_1,uint param_2)

{
  if (param_2 == 0) {
    *param_1 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_2 < 0x40000000) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Subroutine does not return */
  FUN_719fe2ec();
}


// =========================================================================
// Function: DKEOSoclWolrzhrCseSmYmCavlWNLUBxaurUdYTPGUkzSVIwDpbugqZAjEZexnBcuVgKPrrs_XescCGAzKXLBYNZUnUhjbHJKCURZoSKPhfgWBvDMZSMBdXjikJXSITLJdSRHHWSeDxmqPLdcUFZLzEVqLJxsIllaDOXavCwkEEEgJQLSIhUjTkOfpshGDNtglrqDSAbjNL_CpQQTSwNkbhIAfHJtjAXFzfXCaIfufyr_lzkpE
// Entry: 0x71a03d54 | Size: 212 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
DKEOSoclWolrzhrCseSmYmCavlWNLUBxaurUdYTPGUkzSVIwDpbugqZAjEZexnBcuVgKPrrs_XescCGAzKXLBYNZUnUhjbHJKCURZoSKPhfgWBvDMZSMBdXjikJXSITLJdSRHHWSeDxmqPLdcUFZLzEVqLJxsIllaDOXavCwkEEEgJQLSIhUjTkOfpshGDNtglrqDSAbjNL_CpQQTSwNkbhIAfHJtjAXFzfXCaIfufyr_lzkpE
          (int *param_1,ushort *param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_34 [12];
  int iStack_28;
  
  iStack_28 = _ext___stack_chk_guard;
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    uVar5 = (uint)*param_2;
    uVar1 = uVar4 - (uVar4 >> 1 & 0x55555555);
    uVar1 = (uVar1 & 0x33333333) + (uVar1 >> 2 & 0x33333333);
    uVar1 = (uVar1 + (uVar1 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
    if (uVar1 < 2) {
      uVar6 = uVar4 - 1 & uVar5;
    }
    else {
      uVar6 = uVar5;
      if (uVar4 <= uVar5) {
        FUN_71ba33fc(uVar5,uVar4 & 0xffff);
        uVar6 = extraout_r1;
      }
    }
    piVar2 = *(int **)(*param_1 + uVar6 * 4);
    if ((piVar2 != (int *)0x0) && (piVar2 = (int *)*piVar2, piVar2 != (int *)0x0)) {
      do {
        uVar3 = piVar2[1];
        if (uVar3 == uVar5) {
          if (*(ushort *)(piVar2 + 2) == uVar5) {
            FUN_71a03f18(auStack_34,param_1,piVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
        else {
          if (uVar1 < 2) {
            uVar3 = uVar3 & uVar4 - 1;
          }
          else if (uVar4 <= uVar3) {
            FUN_71ba33fc(uVar3,uVar4);
            uVar3 = extraout_r1_00;
          }
          if (uVar3 != uVar6) break;
        }
        piVar2 = (int *)*piVar2;
      } while (piVar2 != (int *)0x0);
    }
  }
  if (_ext___stack_chk_guard != iStack_28) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}


// =========================================================================
// Function: FUN_71a03f18
// Entry: 0x71a03f18 | Size: 312 bytes
// =========================================================================

void FUN_71a03f18(undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar5 = param_2[1];
  uVar6 = param_3[1];
  uVar2 = uVar5 - (uVar5 >> 1 & 0x55555555);
  uVar2 = (uVar2 & 0x33333333) + (uVar2 >> 2 & 0x33333333);
  uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
  if (uVar2 < 2) {
    uVar6 = uVar6 & uVar5 - 1;
  }
  else if (uVar5 <= uVar6) {
    FUN_71ba33fc(uVar6,uVar5);
    uVar6 = extraout_r1;
  }
  iVar7 = *param_2;
  piVar1 = *(int **)(iVar7 + uVar6 * 4);
  do {
    piVar3 = piVar1;
    piVar1 = (int *)*piVar3;
  } while ((int *)*piVar3 != param_3);
  if (piVar3 != param_2 + 2) {
    uVar4 = piVar3[1];
    if (uVar2 < 2) {
      uVar4 = uVar4 & uVar5 - 1;
    }
    else if (uVar5 <= uVar4) {
      FUN_71ba33fc(uVar4,uVar5);
      uVar4 = extraout_r1_00;
    }
    if (uVar4 == uVar6) goto LAB_71a03fe6;
  }
  if (*param_3 != 0) {
    uVar4 = *(uint *)(*param_3 + 4);
    if (uVar2 < 2) {
      uVar4 = uVar4 & uVar5 - 1;
    }
    else if (uVar5 <= uVar4) {
      FUN_71ba33fc(uVar4,uVar5);
      uVar4 = extraout_r1_01;
    }
    if (uVar4 == uVar6) goto LAB_71a03fe6;
  }
  *(undefined4 *)(iVar7 + uVar6 * 4) = 0;
LAB_71a03fe6:
  iVar7 = *param_3;
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = *(uint *)(iVar7 + 4);
    if (uVar2 < 2) {
      uVar4 = uVar4 & uVar5 - 1;
    }
    else if (uVar5 <= uVar4) {
      FUN_71ba33fc(uVar4,uVar5);
      uVar4 = extraout_r1_02;
    }
    if (uVar4 != uVar6) {
      *(int **)(*param_2 + uVar4 * 4) = piVar3;
      iVar7 = *param_3;
    }
  }
  *piVar3 = iVar7;
  *(undefined1 *)(param_1 + 2) = 1;
  iVar7 = param_2[3];
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *param_3 = 0;
  param_2[3] = iVar7 + -1;
  return;
}


// =========================================================================
// Function: LMUmF_lVuhlDhvIlmVqggqTIgCorDpd_BTrgGZnqMJHVlbzem_YQbyuUCoZKvEERodJErHHGmYsiFkyFJpjbOrDHRlAzRgiouMPDVqHOzlIaTzekWClTTbdWoNnyPSukzanGZJdnKWsOldYVqQxTdNOCsfnwL_kbdNTXAPfXdH
// Entry: 0x71a040f2 | Size: 4 bytes
// =========================================================================

void LMUmF_lVuhlDhvIlmVqggqTIgCorDpd_BTrgGZnqMJHVlbzem_YQbyuUCoZKvEERodJErHHGmYsiFkyFJpjbOrDHRlAzRgiouMPDVqHOzlIaTzekWClTTbdWoNnyPSukzanGZJdnKWsOldYVqQxTdNOCsfnwL_kbdNTXAPfXdH
               (void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: tKYUFKSaBs_zfWrmSmkjgBxG_NUwvFeuWIuRzwlVRWOSsHf_kZSjEQfMlUYBuShzYiBHxnBeaDGlitMIufeXEnULBjmTZOaonGBSEsyey_BGjCgWYfynwznOVozWuqofMYSlnH_VFWnSmfrnwuLMCqGlmV
// Entry: 0x71a0456c | Size: 4 bytes
// =========================================================================

void tKYUFKSaBs_zfWrmSmkjgBxG_NUwvFeuWIuRzwlVRWOSsHf_kZSjEQfMlUYBuShzYiBHxnBeaDGlitMIufeXEnULBjmTZOaonGBSEsyey_BGjCgWYfynwznOVozWuqofMYSlnH_VFWnSmfrnwuLMCqGlmV
               (void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: AOKASdjvraysqSrPaoMtezMeVxYXDtWQ_KDUWVrsFmabrPPGrDJsULpbGZPfZp_cLkyCGaTxcOfXwSTedoGBKCqewWPeejo_fpdDBilPbxlKEZqassOUpHLQTcHxRGCmfqKjEAOUhZpdFAYIYNzkLgqTAD
// Entry: 0x71a0482a | Size: 4 bytes
// =========================================================================

void AOKASdjvraysqSrPaoMtezMeVxYXDtWQ_KDUWVrsFmabrPPGrDJsULpbGZPfZp_cLkyCGaTxcOfXwSTedoGBKCqewWPeejo_fpdDBilPbxlKEZqassOUpHLQTcHxRGCmfqKjEAOUhZpdFAYIYNzkLgqTAD
               (void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: XSsngtJdEltwXEPTHkftuHMfMYswVn
// Entry: 0x71a05028 | Size: 16 bytes
// =========================================================================

void XSsngtJdEltwXEPTHkftuHMfMYswVn(undefined1 param_1)

{
  DataMemoryBarrier(0x1b);
  DAT_70136514 = param_1;
  DataMemoryBarrier(0x1b);
  return;
}


// =========================================================================
// Function: JCimGkwQJRZN_NiLZRgiLgVvDNE
// Entry: 0x71a05070 | Size: 16 bytes
// =========================================================================

byte JCimGkwQJRZN_NiLZRgiLgVvDNE(void)

{
  DataMemoryBarrier(0x1b);
  return DAT_70136514 & 1;
}


// =========================================================================
// Function: mrEXFvVDe_YKLJPAxfZeuqnGYoEXqN_y
// Entry: 0x71a050b8 | Size: 22 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void mrEXFvVDe_YKLJPAxfZeuqnGYoEXqN_y(void)

{
  DataMemoryBarrier(0x1b);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: nxTRydxMudUzaKrqvZkMWmsMHXRndxvNY
// Entry: 0x71a05198 | Size: 8 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void nxTRydxMudUzaKrqvZkMWmsMHXRndxvNY(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: NaIqoNRtCAGEePRSTuryLtMqrlCwbWPXktTTJmgatKa_p
// Entry: 0x71a05240 | Size: 14 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void NaIqoNRtCAGEePRSTuryLtMqrlCwbWPXktTTJmgatKa_p(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: AtTJQeptwSfpawAlVWPCesKOif_OdXEXgNVdPnNVeVP
// Entry: 0x71a05390 | Size: 48 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void AtTJQeptwSfpawAlVWPCesKOif_OdXEXgNVdPnNVeVP(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((int)param_2 + 5);
  *param_1 = *param_2;
  *(undefined8 *)((int)param_1 + 5) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: kNriATwefwYrRbeikbaEu_Xvo
// Entry: 0x71a05780 | Size: 30 bytes
// =========================================================================

void kNriATwefwYrRbeikbaEu_Xvo(undefined4 *param_1)

{
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  *param_1 = 48000;
  param_1[1] = 1;
  param_1[2] = 0x1010001;
  return;
}


// =========================================================================
// Function: XEdyDTUgKJAxUtDaHcHgOljGi
// Entry: 0x71a057b6 | Size: 24 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void XEdyDTUgKJAxUtDaHcHgOljGi(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x20) != 0) {
      *(int *)(iVar1 + 0x24) = *(int *)(iVar1 + 0x20);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}


// =========================================================================
// Function: wD_iIfpJrATzIqwtiLeyFPx_zxxHoTOJemlmUXOALLXLvHo
// Entry: 0x71a058f4 | Size: 174 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int wD_iIfpJrATzIqwtiLeyFPx_zxxHoTOJemlmUXOALLXLvHo(int param_1,int param_2,int param_3)

{
  int iVar1;
  int extraout_r1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  char cStack_98;
  char cStack_97;
  int iStack_28;
  
  iStack_28 = _ext___stack_chk_guard;
  iVar1 = -1;
  if (((param_2 != 0) && (0 < param_3)) &&
     (piVar2 = *(int **)(param_1 + 0x18), piVar2 != (int *)0x0)) {
    if (*piVar2 == 0) {
      iVar1 = -1;
    }
    else {
      FUN_71ba2da8(param_3,piVar2[7]);
      if (extraout_r1 == 0) {
        iVar3 = 0;
        while (iVar1 = param_2 + iVar3 * 2,
              iVar1 = (**(code **)(*(int *)*piVar2 + 0x40))
                                ((int *)*piVar2,iVar1,piVar2 + 1,piVar2 + 1,iVar1), iVar1 == 0) {
          iVar3 = iVar3 + piVar2[7];
          if (param_3 <= iVar3) {
            (**(code **)(*(int *)*piVar2 + 0x7c))(&cStack_98);
            if (cStack_97 != '\0') {
              uVar4 = 0x3f800000;
              if (cStack_98 == '\0') {
                uVar4 = 0;
              }
              *(char *)(param_1 + 0x10) = cStack_98;
              *(undefined4 *)(param_1 + 0x14) = uVar4;
            }
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
      }
      else {
        iVar1 = -2;
      }
    }
  }
  if (_ext___stack_chk_guard != iStack_28) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return iVar1;
}


// =========================================================================
// Function: eeWqNjKk_edspeKyhBHFFIKTmlfspJedrqrAexttkJXNUZyD
// Entry: 0x71a05a5c | Size: 106 bytes
// =========================================================================

int eeWqNjKk_edspeKyhBHFFIKTmlfspJedrqrAexttkJXNUZyD(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int extraout_r1;
  int *piVar3;
  
  iVar1 = -1;
  if (((param_2 != 0) && (0 < param_3)) &&
     (piVar3 = *(int **)(param_1 + 0x18), piVar3 != (int *)0x0)) {
    if (*piVar3 == 0) {
      iVar1 = -1;
    }
    else {
      FUN_71ba2da8(param_3,piVar3[7]);
      if (extraout_r1 == 0) {
        iVar1 = 0;
        do {
          iVar2 = (**(code **)(*(int *)*piVar3 + 0x48))
                            ((int *)*piVar3,param_2 + iVar1 * 2,piVar3 + 4,piVar3 + 4,piVar3[8]);
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar1 = iVar1 + piVar3[7];
        } while (iVar1 < param_3);
        iVar1 = 0;
      }
      else {
        iVar1 = -2;
      }
    }
  }
  return iVar1;
}


// =========================================================================
// Function: FoOydpyumkRonuJBUbSmHdbNQTDlJbrHnyqclkVSY
// Entry: 0x71a05afa | Size: 18 bytes
// =========================================================================

void FoOydpyumkRonuJBUbSmHdbNQTDlJbrHnyqclkVSY(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 0x18);
  piVar2 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)*piVar1;
  }
  if (piVar1 != (int *)0x0 && piVar2 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x71a05b0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar2 + 0x60))();
    return;
  }
  return;
}


// =========================================================================
// Function: BZjgrVvObRBgjvwYYgXNVMcSKjhJ_VYPddeQpwIFzzsbk
// Entry: 0x71a05b24 | Size: 14 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void BZjgrVvObRBgjvwYYgXNVMcSKjhJ_VYPddeQpwIFzzsbk(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: HGbevJQsUahvWVFugWDmVYpyQhJsUiltHDXOXzDWZSZ
// Entry: 0x71a05c68 | Size: 64 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void HGbevJQsUahvWVFugWDmVYpyQhJsUiltHDXOXzDWZSZ(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = *(undefined8 *)((int)param_2 + 0xc);
  uVar3 = *(undefined8 *)((int)param_2 + 0x14);
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined8 *)((int)param_1 + 0xc) = uVar2;
  *(undefined8 *)((int)param_1 + 0x14) = uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: vat_qkRlZilLhnXGrRBmJyj
// Entry: 0x71a05ed0 | Size: 34 bytes
// =========================================================================

void vat_qkRlZilLhnXGrRBmJyj(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 3) = 10;
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined2 *)((int)param_1 + 0x14) = 0x101;
  *param_1 = 0x10000bb80;
  param_1[1] = 0x7d0000000014;
  *(undefined4 *)(param_1 + 2) = 5;
  return;
}


// =========================================================================
// Function: YNSJEWxgPSgxlVnvKsrqXvo
// Entry: 0x71a05f28 | Size: 18 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

int YNSJEWxgPSgxlVnvKsrqXvo(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(int *)(param_1 + 0x20) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return param_1;
}


// =========================================================================
// Function: wUIJdSfMZAYTAeYdtQJxmqjHamSeylamPr
// Entry: 0x71a05fb2 | Size: 40 bytes
// =========================================================================

undefined4 wUIJdSfMZAYTAeYdtQJxmqjHamSeylamPr(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  if (((0 < param_3) && (param_4 != 0 && param_2 != 0)) && (*(int *)(param_1 + 0x1c) != 0)) {
    uVar1 = imp_opus_encode();
    return uVar1;
  }
  return 0xffffffff;
}


// =========================================================================
// Function: vJqZYUFupBK_PmuxHKrJXsnPNQdTaEpwQL
// Entry: 0x71a0600a | Size: 34 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

undefined4
vJqZYUFupBK_PmuxHKrJXsnPNQdTaEpwQL(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if (param_4 != 0) {
    param_1 = *(int *)(param_1 + 0x20);
  }
  if (param_4 != 0 && param_1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0xffffffff;
}


// =========================================================================
// Function: onESePNMwzPdhndSanUUKwKfvGERQGKuO
// Entry: 0x71a06068 | Size: 32 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

undefined4 onESePNMwzPdhndSanUUKwKfvGERQGKuO(int param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = *(int *)(param_1 + 0x20);
  }
  if (param_2 != 0 && param_1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0xffffffff;
}


// =========================================================================
// Function: WxHQEJMHHGCoCLSRBuKAiaDDmSBPwy_Iv
// Entry: 0x71a060c4 | Size: 22 bytes
// =========================================================================

void WxHQEJMHHGCoCLSRBuKAiaDDmSBPwy_Iv(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  imp_opus_encoder_ctl(*(int *)(param_1 + 0x1c),0xfa2);
  return;
}


// =========================================================================
// Function: PqCKjoOXqhKdPFQCrOQWvBVu_UASyKzbWtbUpnZ
// Entry: 0x71a0610e | Size: 26 bytes
// =========================================================================

void PqCKjoOXqhKdPFQCrOQWvBVu_UASyKzbWtbUpnZ(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  imp_opus_encoder_ctl(*(int *)(param_1 + 0x1c),0xfae);
  return;
}


// =========================================================================
// Function: YmCKmBfiKjQCOzMuQuRf
// Entry: 0x71a06158 | Size: 214 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * YmCKmBfiKjQCOzMuQuRf(int *param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 uStack_2a;
  int iStack_28;
  
  auVar1._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
  auVar1._0_8_ = 0x3f8000003f800000;
  auVar1 = auVar1 << 0x40 | auVar1;
  iVar2 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iVar3 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iVar4 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_28 = _ext___stack_chk_guard;
  param_1[4] = *(int *)auVar1;
  param_1[5] = *(int *)(auVar1 + (undefined1  [16])0x4);
  param_1[6] = *(int *)(auVar1 + (undefined1  [16])0x8);
  param_1[7] = *(int *)(auVar1 + (undefined1  [16])0xc);
  *param_1 = param_2;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = iVar2;
  param_1[0xc] = iVar3;
  param_1[0xd] = iVar4;
  param_1[0xe] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = iVar2;
  param_1[0x1c] = iVar3;
  param_1[0x1d] = iVar4;
  param_1[0x1e] = 0x3f800000;
  param_1[0x15] = 0;
  param_1[0x16] = iVar2;
  param_1[0x17] = iVar3;
  param_1[0x18] = iVar4;
  param_1[0x19] = 0x3f800000;
  param_1[0x10] = 0;
  param_1[0x11] = iVar2;
  param_1[0x12] = iVar3;
  param_1[0x13] = iVar4;
  param_1[0xf] = 0x3f800000;
  param_1[0x14] = 0x3f800000;
  if (param_3 < 2) {
    param_3 = 1;
  }
  param_1[1] = param_3;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  iVar5 = (param_2 / 1000) * 0x14;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)((int)param_1 + 0x85) = 0;
  *(undefined4 *)((int)param_1 + 0x81) = 0;
  uStack_2a = 0;
  param_1[2] = iVar5;
  param_1[3] = iVar5 * param_3;
  param_1[0x23] = 0;
  param_1[0x24] = iVar2;
  param_1[0x25] = iVar3;
  param_1[0x26] = iVar4;
  param_1[0x27] = 0;
  param_1[0x28] = iVar2;
  param_1[0x29] = iVar3;
  param_1[0x2a] = iVar4;
  param_1[0x2b] = 0;
  FUN_719fdab8(param_1 + 0x1f,iVar5,&uStack_2a);
  if (_ext___stack_chk_guard != iStack_28) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return param_1;
}


// =========================================================================
// Function: LWMvWqudSbq_gzxEHLLxAWyKlzxNfaVqFuKseNZEIgxphJu
// Entry: 0x71a06520 | Size: 266 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * LWMvWqudSbq_gzxEHLLxAWyKlzxNfaVqFuKseNZEIgxphJu(int param_1,ushort *param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *unaff_r10;
  bool bVar10;
  
  iVar1 = _ext___stack_chk_guard;
  uVar7 = *(uint *)(param_1 + 0x30);
  if (uVar7 != 0) {
    uVar6 = *(uint *)(param_2 + 2);
    uVar8 = (uint)*param_2;
    uVar2 = uVar7 - (uVar7 >> 1 & 0x55555555);
    uVar9 = uVar8 | uVar6 << 0x10;
    uVar2 = (uVar2 & 0x33333333) + (uVar2 >> 2 & 0x33333333);
    puVar5 = (uint *)((uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18);
    if (puVar5 < (uint *)0x2) {
      uVar2 = uVar7 - 1 & uVar9;
    }
    else {
      uVar2 = uVar9;
      if (uVar7 <= uVar9) {
        FUN_71ba33fc(uVar9,uVar7);
        uVar2 = extraout_r1;
        unaff_r10 = puVar5;
      }
    }
    puVar3 = *(uint **)(*(int *)(param_1 + 0x2c) + uVar2 * 4);
    if (puVar3 != (uint *)0x0) {
      unaff_r10 = (uint *)*puVar3;
    }
    if (puVar3 != (uint *)0x0 && unaff_r10 != (uint *)0x0) {
      do {
        uVar4 = unaff_r10[1];
        if (uVar4 == uVar9) {
          uVar4 = (uint)(ushort)unaff_r10[2];
          bVar10 = uVar4 == uVar8;
          if (bVar10) {
            uVar4 = unaff_r10[3];
          }
          if (bVar10 && uVar4 == uVar6) {
            if (_ext___stack_chk_guard != iVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            return unaff_r10 + 4;
          }
        }
        else {
          if (puVar5 < (uint *)0x2) {
            uVar4 = uVar4 & uVar7 - 1;
          }
          else if (uVar7 <= uVar4) {
            FUN_71ba33fc(uVar4,uVar7);
            uVar4 = extraout_r1_00;
          }
          if (uVar4 != uVar2) {
            halt_baddata();
          }
        }
        unaff_r10 = (uint *)*unaff_r10;
      } while (unaff_r10 != (uint *)0x0);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: smSWRzQwmUdKdvwTKCxueV_QEl
// Entry: 0x71a06aac | Size: 16 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void smSWRzQwmUdKdvwTKCxueV_QEl(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: NgrLCATbCzII_pMIjpuqvHKTsjtYRqFXSwIiS
// Entry: 0x71a06b40 | Size: 34 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void NgrLCATbCzII_pMIjpuqvHKTsjtYRqFXSwIiS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: sgNdFRQraCODaHcGaQsQbGmJVEWhxwQQerZy
// Entry: 0x71a06cd8 | Size: 18 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void sgNdFRQraCODaHcGaQsQbGmJVEWhxwQQerZy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: pDWhtTFWkrsDWWcvdvvDDnzqJFLqh
// Entry: 0x71a06eb0 | Size: 34 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void pDWhtTFWkrsDWWcvdvvDDnzqJFLqh(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: oatQKqcSjdtEKERdnnFXPgy_ZyvuIzAFIGjB_y
// Entry: 0x71a07098 | Size: 22 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void oatQKqcSjdtEKERdnnFXPgy_ZyvuIzAFIGjB_y(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: cqRozOlUtcCeYXW_IyKnLvgbMRNzuOoJADLTa
// Entry: 0x71a07138 | Size: 36 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void cqRozOlUtcCeYXW_IyKnLvgbMRNzuOoJADLTa(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: TlSzQMAbwsMMyeYcHpwHgmILpMwwDFbZ
// Entry: 0x71a072e4 | Size: 324 bytes
// =========================================================================

float TlSzQMAbwsMMyeYcHpwHgmILpMwwDFbZ(int param_1,uint *param_2,float param_3)

{
  uint *extraout_r1;
  uint *extraout_r1_00;
  uint uVar1;
  uint *puVar2;
  uint *unaff_r4;
  uint *puVar3;
  uint *unaff_r6;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (1.0 < param_3) {
    bVar4 = *(char *)(param_1 + 0x88) != '\0';
    if (bVar4) {
      unaff_r4 = *(uint **)(param_1 + 0x6c);
    }
    if (bVar4 && unaff_r4 != (uint *)0x0) {
      uVar1 = (int)unaff_r4 - ((uint)unaff_r4 >> 1 & 0x55555555);
      uVar1 = (uVar1 & 0x33333333) + (uVar1 >> 2 & 0x33333333);
      uVar1 = (uVar1 + (uVar1 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
      if (uVar1 < 2) {
        puVar3 = (uint *)((int)unaff_r4 - 1U & (uint)param_2);
      }
      else {
        puVar3 = param_2;
        if (unaff_r4 <= param_2) {
          FUN_71ba33fc(param_2,(uint)unaff_r4 & 0xffff);
          puVar3 = extraout_r1;
          unaff_r6 = param_2;
        }
      }
      puVar2 = *(uint **)(*(int *)(param_1 + 0x68) + (int)puVar3 * 4);
      if (puVar2 != (uint *)0x0) {
        unaff_r6 = (uint *)*puVar2;
      }
      if (puVar2 != (uint *)0x0 && unaff_r6 != (uint *)0x0) {
        do {
          puVar2 = (uint *)unaff_r6[1];
          if (puVar2 == param_2) {
            if ((uint *)(uint)(ushort)unaff_r6[2] == param_2) {
              fVar6 = (float)unaff_r6[4] - *(float *)(param_1 + 0x90);
              fVar5 = (float)unaff_r6[3] - *(float *)(param_1 + 0x8c);
              fVar7 = (float)unaff_r6[5] - *(float *)(param_1 + 0x94);
              fVar5 = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar7 * fVar7);
              if (fVar5 <= 1.0) {
                return 1.0;
              }
              if (fVar5 < param_3) {
                return (param_3 - fVar5) / (param_3 + -1.0);
              }
              return 0.0;
            }
          }
          else {
            if (uVar1 < 2) {
              puVar2 = (uint *)((uint)puVar2 & (int)unaff_r4 - 1U);
            }
            else if (unaff_r4 <= puVar2) {
              FUN_71ba33fc(puVar2,unaff_r4);
              puVar2 = extraout_r1_00;
            }
            if (puVar2 != puVar3) {
              return 1.0;
            }
          }
          unaff_r6 = (uint *)*unaff_r6;
        } while (unaff_r6 != (uint *)0x0);
      }
    }
  }
  return 1.0;
}


// =========================================================================
// Function: fOpwaTDthTBglaUSlcbcXWXWTHTRBOfuAkK_w
// Entry: 0x71a0747c | Size: 546 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void fOpwaTDthTBglaUSlcbcXWXWTHTRBOfuAkK_w
               (int param_1,uint param_2,float param_3,undefined4 *param_4,undefined4 *param_5)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint extraout_r1;
  uint uVar5;
  uint extraout_r1_00;
  uint unaff_r4;
  undefined4 *unaff_r10;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  cVar1 = *(char *)(param_1 + 0x88);
  *param_5 = 0x3f800000;
  bVar6 = cVar1 != '\0';
  *param_4 = 0x3f800000;
  if (bVar6) {
    unaff_r4 = *(uint *)(param_1 + 0x6c);
  }
  if (bVar6 && unaff_r4 != 0) {
    uVar2 = unaff_r4 - (unaff_r4 >> 1 & 0x55555555);
    uVar2 = (uVar2 & 0x33333333) + (uVar2 >> 2 & 0x33333333);
    uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
    if (uVar2 < 2) {
      uVar5 = unaff_r4 - 1 & param_2;
    }
    else {
      uVar5 = param_2;
      if (unaff_r4 <= param_2) {
        FUN_71ba33fc(param_2,unaff_r4 & 0xffff);
        uVar5 = extraout_r1;
        unaff_r10 = param_5;
      }
    }
    puVar3 = *(undefined4 **)(*(int *)(param_1 + 0x68) + uVar5 * 4);
    if (puVar3 != (undefined4 *)0x0) {
      unaff_r10 = (undefined4 *)*puVar3;
    }
    if (puVar3 != (undefined4 *)0x0 && unaff_r10 != (undefined4 *)0x0) {
      do {
        uVar4 = unaff_r10[1];
        if (uVar4 == param_2) {
          if (*(ushort *)(unaff_r10 + 2) == param_2) {
            fVar9 = (float)unaff_r10[4] - *(float *)(param_1 + 0x90);
            fVar7 = (float)unaff_r10[3] - *(float *)(param_1 + 0x8c);
            fVar8 = (float)unaff_r10[5] - *(float *)(param_1 + 0x94);
            if ((1.0 < param_3) && (param_3 <= SQRT(fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8)))
            {
              *param_5 = 0;
              *param_4 = 0;
              return;
            }
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
        else {
          if (uVar2 < 2) {
            uVar4 = uVar4 & unaff_r4 - 1;
          }
          else if (unaff_r4 <= uVar4) {
            FUN_71ba33fc(uVar4,unaff_r4);
            uVar4 = extraout_r1_00;
          }
          if (uVar4 != uVar5) {
            return;
          }
        }
        unaff_r10 = (undefined4 *)*unaff_r10;
      } while (unaff_r10 != (undefined4 *)0x0);
    }
  }
  return;
}


// =========================================================================
// Function: vECatuWQidrmiAbkVpDIOgxksHFDVPc
// Entry: 0x71a07738 | Size: 34 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void vECatuWQidrmiAbkVpDIOgxksHFDVPc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: ANxsBIktOrTHxxuRME_pXEVrvCgRunie
// Entry: 0x71a078ec | Size: 34 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void ANxsBIktOrTHxxuRME_pXEVrvCgRunie(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: EdJoLbAOFpP_jZqXtTVkd_Hcjep
// Entry: 0x71a07a98 | Size: 84 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x71a07d80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 EdJoLbAOFpP_jZqXtTVkd_Hcjep(undefined4 param_1,int param_2,int param_3)

{
  if ((param_2 != 0) && (0 < param_3)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}


// =========================================================================
// Function: EprRLaJWExHMirt_JMOvHpgYBaBCGxBWgk_nGhsMsLVhnzfOrkSndTXQyDlPNVpKrfPthEFpnMJCLWC_enqYLasMqXCUyrNOnJUrEOZeYBaMWzKJhDbFDgJX_houwnNzzZvXsDUYyRjQJlGhdTIsniJLhDQfCPUQkwPPIRybZydXFaTpBKUKLrgzbWtswCrCtUXgLdUxCimj_VLQqgtuMtgXloRhUGYrckdTqWYLOkgVO_kZPlPXMgwaMuYeLPMajXYESPFxiDCaaVp_YRRTzNEVpWqwwvOEKKnFhYelvpxcvrYnzwukTEBvatsYYktYXtCenDVPXFPSjGOdgNWpJeaC
// Entry: 0x71a07fb4 | Size: 256 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void EprRLaJWExHMirt_JMOvHpgYBaBCGxBWgk_nGhsMsLVhnzfOrkSndTXQyDlPNVpKrfPthEFpnMJCLWC_enqYLasMqXCUyrNOnJUrEOZeYBaMWzKJhDbFDgJX_houwnNzzZvXsDUYyRjQJlGhdTIsniJLhDQfCPUQkwPPIRybZydXFaTpBKUKLrgzbWtswCrCtUXgLdUxCimj_VLQqgtuMtgXloRhUGYrckdTqWYLOkgVO_kZPlPXMgwaMuYeLPMajXYESPFxiDCaaVp_YRRTzNEVpWqwwvOEKKnFhYelvpxcvrYnzwukTEBvatsYYktYXtCenDVPXFPSjGOdgNWpJeaC
               (undefined4 *param_1,int *param_2,ushort *param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint extraout_r1;
  uint uVar5;
  uint extraout_r1_00;
  int *unaff_r4;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  iVar1 = _ext___stack_chk_guard;
  uVar6 = *(uint *)(param_3 + 2);
  uVar8 = (uint)*param_3;
  uVar7 = param_2[1];
  uVar9 = uVar8 | uVar6 << 0x10;
  if (uVar7 != 0) {
    uVar2 = uVar7 - (uVar7 >> 1 & 0x55555555);
    uVar2 = (uVar2 & 0x33333333) + (uVar2 >> 2 & 0x33333333);
    uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
    if (uVar2 < 2) {
      uVar5 = uVar7 - 1 & uVar9;
    }
    else {
      uVar5 = uVar9;
      if (uVar7 <= uVar9) {
        FUN_71ba33fc(uVar9,uVar7);
        uVar5 = extraout_r1;
      }
    }
    piVar3 = *(int **)(*param_2 + uVar5 * 4);
    if (piVar3 != (int *)0x0) {
      unaff_r4 = (int *)*piVar3;
    }
    if (piVar3 != (int *)0x0 && unaff_r4 != (int *)0x0) {
      do {
        uVar4 = unaff_r4[1];
        if (uVar4 == uVar9) {
          uVar4 = (uint)*(ushort *)(unaff_r4 + 2);
          bVar10 = uVar4 == uVar8;
          if (bVar10) {
            uVar4 = unaff_r4[3];
          }
          if (bVar10 && uVar4 == uVar6) {
            *(undefined1 *)(param_1 + 1) = 0;
            *param_1 = unaff_r4;
            if (_ext___stack_chk_guard != iVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            return;
          }
        }
        else {
          if (uVar2 < 2) {
            uVar4 = uVar4 & uVar7 - 1;
          }
          else if (uVar7 <= uVar4) {
            FUN_71ba33fc(uVar4,uVar7);
            uVar4 = extraout_r1_00;
          }
          if (uVar4 != uVar5) {
            halt_baddata();
          }
        }
        unaff_r4 = (int *)*unaff_r4;
      } while (unaff_r4 != (int *)0x0);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: XqvqhweRbIzSNwMRYylaNIDhDgwfGqgMHXOOGQFJVvrkCytlbNtPNslRkqgzYinVAOwEWzxigdVLvNiavslaBUt_YhwOmpvwjFJefksbHxGkbzUOikLsMCAiNjfGQV_jH_NfIueqSgnAryhmRTmoHHTDEXVJYcaWSDxrOYNxXKRSHwDWB_CmKgkXkXpCvWHJIGEpXsOrannZhYdGXFi_RvmCRRMMOfjsGHLWettPQCzgcsCfjp_ssOmFwLrFw
// Entry: 0x71a0850c | Size: 38 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void XqvqhweRbIzSNwMRYylaNIDhDgwfGqgMHXOOGQFJVvrkCytlbNtPNslRkqgzYinVAOwEWzxigdVLvNiavslaBUt_YhwOmpvwjFJefksbHxGkbzUOikLsMCAiNjfGQV_jH_NfIueqSgnAryhmRTmoHHTDEXVJYcaWSDxrOYNxXKRSHwDWB_CmKgkXkXpCvWHJIGEpXsOrannZhYdGXFi_RvmCRRMMOfjsGHLWettPQCzgcsCfjp_ssOmFwLrFw
               (undefined4 *param_1,uint param_2)

{
  if (param_2 == 0) {
    *param_1 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_2 < 0x40000000) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Subroutine does not return */
  FUN_719fe2ec();
}


// =========================================================================
// Function: FyNcichpYQxPotAqYYQdWlGGjlWdKRgErMlvcgOcfuwSHaMgXAACiKyUkjdSrHEzEZY_PydE_GBKvIXYAgZyaC_kRdXwioaHiIItYpUqPEPpBqDSxapJrFanphvx_peXoHFMWtPiRjLMPPTMZLnykWmv_RgUiEUbBmksVSvOrzsetdDhVBntHPVCmyxwwMpq_VSubEFNgwylHqcB
// Entry: 0x71a08a04 | Size: 212 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FyNcichpYQxPotAqYYQdWlGGjlWdKRgErMlvcgOcfuwSHaMgXAACiKyUkjdSrHEzEZY_PydE_GBKvIXYAgZyaC_kRdXwioaHiIItYpUqPEPpBqDSxapJrFanphvx_peXoHFMWtPiRjLMPPTMZLnykWmv_RgUiEUbBmksVSvOrzsetdDhVBntHPVCmyxwwMpq_VSubEFNgwylHqcB
          (int *param_1,ushort *param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_34 [12];
  int iStack_28;
  
  iStack_28 = _ext___stack_chk_guard;
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    uVar5 = (uint)*param_2;
    uVar1 = uVar4 - (uVar4 >> 1 & 0x55555555);
    uVar1 = (uVar1 & 0x33333333) + (uVar1 >> 2 & 0x33333333);
    uVar1 = (uVar1 + (uVar1 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
    if (uVar1 < 2) {
      uVar6 = uVar4 - 1 & uVar5;
    }
    else {
      uVar6 = uVar5;
      if (uVar4 <= uVar5) {
        FUN_71ba33fc(uVar5,uVar4 & 0xffff);
        uVar6 = extraout_r1;
      }
    }
    piVar2 = *(int **)(*param_1 + uVar6 * 4);
    if ((piVar2 != (int *)0x0) && (piVar2 = (int *)*piVar2, piVar2 != (int *)0x0)) {
      do {
        uVar3 = piVar2[1];
        if (uVar3 == uVar5) {
          if (*(ushort *)(piVar2 + 2) == uVar5) {
            FUN_71a08bc8(auStack_34,param_1,piVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
        else {
          if (uVar1 < 2) {
            uVar3 = uVar3 & uVar4 - 1;
          }
          else if (uVar4 <= uVar3) {
            FUN_71ba33fc(uVar3,uVar4);
            uVar3 = extraout_r1_00;
          }
          if (uVar3 != uVar6) break;
        }
        piVar2 = (int *)*piVar2;
      } while (piVar2 != (int *)0x0);
    }
  }
  if (_ext___stack_chk_guard != iStack_28) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}


// =========================================================================
// Function: FUN_71a08bc8
// Entry: 0x71a08bc8 | Size: 312 bytes
// =========================================================================

void FUN_71a08bc8(undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar5 = param_2[1];
  uVar6 = param_3[1];
  uVar2 = uVar5 - (uVar5 >> 1 & 0x55555555);
  uVar2 = (uVar2 & 0x33333333) + (uVar2 >> 2 & 0x33333333);
  uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
  if (uVar2 < 2) {
    uVar6 = uVar6 & uVar5 - 1;
  }
  else if (uVar5 <= uVar6) {
    FUN_71ba33fc(uVar6,uVar5);
    uVar6 = extraout_r1;
  }
  iVar7 = *param_2;
  piVar1 = *(int **)(iVar7 + uVar6 * 4);
  do {
    piVar3 = piVar1;
    piVar1 = (int *)*piVar3;
  } while ((int *)*piVar3 != param_3);
  if (piVar3 != param_2 + 2) {
    uVar4 = piVar3[1];
    if (uVar2 < 2) {
      uVar4 = uVar4 & uVar5 - 1;
    }
    else if (uVar5 <= uVar4) {
      FUN_71ba33fc(uVar4,uVar5);
      uVar4 = extraout_r1_00;
    }
    if (uVar4 == uVar6) goto LAB_71a08c96;
  }
  if (*param_3 != 0) {
    uVar4 = *(uint *)(*param_3 + 4);
    if (uVar2 < 2) {
      uVar4 = uVar4 & uVar5 - 1;
    }
    else if (uVar5 <= uVar4) {
      FUN_71ba33fc(uVar4,uVar5);
      uVar4 = extraout_r1_01;
    }
    if (uVar4 == uVar6) goto LAB_71a08c96;
  }
  *(undefined4 *)(iVar7 + uVar6 * 4) = 0;
LAB_71a08c96:
  iVar7 = *param_3;
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = *(uint *)(iVar7 + 4);
    if (uVar2 < 2) {
      uVar4 = uVar4 & uVar5 - 1;
    }
    else if (uVar5 <= uVar4) {
      FUN_71ba33fc(uVar4,uVar5);
      uVar4 = extraout_r1_02;
    }
    if (uVar4 != uVar6) {
      *(int **)(*param_2 + uVar4 * 4) = piVar3;
      iVar7 = *param_3;
    }
  }
  *piVar3 = iVar7;
  *(undefined1 *)(param_1 + 2) = 1;
  iVar7 = param_2[3];
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *param_3 = 0;
  param_2[3] = iVar7 + -1;
  return;
}


// =========================================================================
// Function: vWOoDijWPDXCPoEgCPUosikzKsfaVpNbPHLbVsNcSdmfCJtQnybCUeFNJ_bXLnYNjUpvuVSLGN_gFPdKIvmdskvrzOtzozLSUzCyaeDIGIfJbTmumeIKKFjsEcZtsVZElyaXeQVnBtTjLwQMWpIINAwjBLQmVikXWylEZOSAErZRkUctRKEULHOBdvPGMS_eqTi_DRqJYJRxmB_D
// Entry: 0x71a08d88 | Size: 212 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
vWOoDijWPDXCPoEgCPUosikzKsfaVpNbPHLbVsNcSdmfCJtQnybCUeFNJ_bXLnYNjUpvuVSLGN_gFPdKIvmdskvrzOtzozLSUzCyaeDIGIfJbTmumeIKKFjsEcZtsVZElyaXeQVnBtTjLwQMWpIINAwjBLQmVikXWylEZOSAErZRkUctRKEULHOBdvPGMS_eqTi_DRqJYJRxmB_D
          (int *param_1,ushort *param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_34 [12];
  int iStack_28;
  
  iStack_28 = _ext___stack_chk_guard;
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    uVar5 = (uint)*param_2;
    uVar1 = uVar4 - (uVar4 >> 1 & 0x55555555);
    uVar1 = (uVar1 & 0x33333333) + (uVar1 >> 2 & 0x33333333);
    uVar1 = (uVar1 + (uVar1 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
    if (uVar1 < 2) {
      uVar6 = uVar4 - 1 & uVar5;
    }
    else {
      uVar6 = uVar5;
      if (uVar4 <= uVar5) {
        FUN_71ba33fc(uVar5,uVar4 & 0xffff);
        uVar6 = extraout_r1;
      }
    }
    piVar2 = *(int **)(*param_1 + uVar6 * 4);
    if ((piVar2 != (int *)0x0) && (piVar2 = (int *)*piVar2, piVar2 != (int *)0x0)) {
      do {
        uVar3 = piVar2[1];
        if (uVar3 == uVar5) {
          if (*(ushort *)(piVar2 + 2) == uVar5) {
            FUN_71a08f4c(auStack_34,param_1,piVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
        else {
          if (uVar1 < 2) {
            uVar3 = uVar3 & uVar4 - 1;
          }
          else if (uVar4 <= uVar3) {
            FUN_71ba33fc(uVar3,uVar4);
            uVar3 = extraout_r1_00;
          }
          if (uVar3 != uVar6) break;
        }
        piVar2 = (int *)*piVar2;
      } while (piVar2 != (int *)0x0);
    }
  }
  if (_ext___stack_chk_guard != iStack_28) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}


// =========================================================================
// Function: FUN_71a08f4c
// Entry: 0x71a08f4c | Size: 312 bytes
// =========================================================================

void FUN_71a08f4c(undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar5 = param_2[1];
  uVar6 = param_3[1];
  uVar2 = uVar5 - (uVar5 >> 1 & 0x55555555);
  uVar2 = (uVar2 & 0x33333333) + (uVar2 >> 2 & 0x33333333);
  uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
  if (uVar2 < 2) {
    uVar6 = uVar6 & uVar5 - 1;
  }
  else if (uVar5 <= uVar6) {
    FUN_71ba33fc(uVar6,uVar5);
    uVar6 = extraout_r1;
  }
  iVar7 = *param_2;
  piVar1 = *(int **)(iVar7 + uVar6 * 4);
  do {
    piVar3 = piVar1;
    piVar1 = (int *)*piVar3;
  } while ((int *)*piVar3 != param_3);
  if (piVar3 != param_2 + 2) {
    uVar4 = piVar3[1];
    if (uVar2 < 2) {
      uVar4 = uVar4 & uVar5 - 1;
    }
    else if (uVar5 <= uVar4) {
      FUN_71ba33fc(uVar4,uVar5);
      uVar4 = extraout_r1_00;
    }
    if (uVar4 == uVar6) goto LAB_71a0901a;
  }
  if (*param_3 != 0) {
    uVar4 = *(uint *)(*param_3 + 4);
    if (uVar2 < 2) {
      uVar4 = uVar4 & uVar5 - 1;
    }
    else if (uVar5 <= uVar4) {
      FUN_71ba33fc(uVar4,uVar5);
      uVar4 = extraout_r1_01;
    }
    if (uVar4 == uVar6) goto LAB_71a0901a;
  }
  *(undefined4 *)(iVar7 + uVar6 * 4) = 0;
LAB_71a0901a:
  iVar7 = *param_3;
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = *(uint *)(iVar7 + 4);
    if (uVar2 < 2) {
      uVar4 = uVar4 & uVar5 - 1;
    }
    else if (uVar5 <= uVar4) {
      FUN_71ba33fc(uVar4,uVar5);
      uVar4 = extraout_r1_02;
    }
    if (uVar4 != uVar6) {
      *(int **)(*param_2 + uVar4 * 4) = piVar3;
      iVar7 = *param_3;
    }
  }
  *piVar3 = iVar7;
  *(undefined1 *)(param_1 + 2) = 1;
  iVar7 = param_2[3];
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *param_3 = 0;
  param_2[3] = iVar7 + -1;
  return;
}


// =========================================================================
// Function: BMSVZmlsgSwjsiGxZCjJuQahbRFXaSUQlNDrZJHmaCvQlArnjYOdzLwRqMGiZDsFAmKvmdWFJupwBgoIXNOKVzQTkxdeqaSqraqifjKeAyd_IBFNzqJ_EBDpJQOlNOKPRbLfuBDHBHscntWCEytzB_xBGFDLYaifHgkkKYxHXJQnGwfMUtNTWQnopvdawjIpxOHiUHptVKTsSpPPSwlEkvubYyUekwTkMG
// Entry: 0x71a0910c | Size: 212 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
BMSVZmlsgSwjsiGxZCjJuQahbRFXaSUQlNDrZJHmaCvQlArnjYOdzLwRqMGiZDsFAmKvmdWFJupwBgoIXNOKVzQTkxdeqaSqraqifjKeAyd_IBFNzqJ_EBDpJQOlNOKPRbLfuBDHBHscntWCEytzB_xBGFDLYaifHgkkKYxHXJQnGwfMUtNTWQnopvdawjIpxOHiUHptVKTsSpPPSwlEkvubYyUekwTkMG
          (int *param_1,ushort *param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_34 [12];
  int iStack_28;
  
  iStack_28 = _ext___stack_chk_guard;
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    uVar5 = (uint)*param_2;
    uVar1 = uVar4 - (uVar4 >> 1 & 0x55555555);
    uVar1 = (uVar1 & 0x33333333) + (uVar1 >> 2 & 0x33333333);
    uVar1 = (uVar1 + (uVar1 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
    if (uVar1 < 2) {
      uVar6 = uVar4 - 1 & uVar5;
    }
    else {
      uVar6 = uVar5;
      if (uVar4 <= uVar5) {
        FUN_71ba33fc(uVar5,uVar4 & 0xffff);
        uVar6 = extraout_r1;
      }
    }
    piVar2 = *(int **)(*param_1 + uVar6 * 4);
    if ((piVar2 != (int *)0x0) && (piVar2 = (int *)*piVar2, piVar2 != (int *)0x0)) {
      do {
        uVar3 = piVar2[1];
        if (uVar3 == uVar5) {
          if (*(ushort *)(piVar2 + 2) == uVar5) {
            FUN_71a092d0(auStack_34,param_1,piVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
        else {
          if (uVar1 < 2) {
            uVar3 = uVar3 & uVar4 - 1;
          }
          else if (uVar4 <= uVar3) {
            FUN_71ba33fc(uVar3,uVar4);
            uVar3 = extraout_r1_00;
          }
          if (uVar3 != uVar6) break;
        }
        piVar2 = (int *)*piVar2;
      } while (piVar2 != (int *)0x0);
    }
  }
  if (_ext___stack_chk_guard != iStack_28) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}


// =========================================================================
// Function: FUN_71a092d0
// Entry: 0x71a092d0 | Size: 312 bytes
// =========================================================================

void FUN_71a092d0(undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar5 = param_2[1];
  uVar6 = param_3[1];
  uVar2 = uVar5 - (uVar5 >> 1 & 0x55555555);
  uVar2 = (uVar2 & 0x33333333) + (uVar2 >> 2 & 0x33333333);
  uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
  if (uVar2 < 2) {
    uVar6 = uVar6 & uVar5 - 1;
  }
  else if (uVar5 <= uVar6) {
    FUN_71ba33fc(uVar6,uVar5);
    uVar6 = extraout_r1;
  }
  iVar7 = *param_2;
  piVar1 = *(int **)(iVar7 + uVar6 * 4);
  do {
    piVar3 = piVar1;
    piVar1 = (int *)*piVar3;
  } while ((int *)*piVar3 != param_3);
  if (piVar3 != param_2 + 2) {
    uVar4 = piVar3[1];
    if (uVar2 < 2) {
      uVar4 = uVar4 & uVar5 - 1;
    }
    else if (uVar5 <= uVar4) {
      FUN_71ba33fc(uVar4,uVar5);
      uVar4 = extraout_r1_00;
    }
    if (uVar4 == uVar6) goto LAB_71a0939e;
  }
  if (*param_3 != 0) {
    uVar4 = *(uint *)(*param_3 + 4);
    if (uVar2 < 2) {
      uVar4 = uVar4 & uVar5 - 1;
    }
    else if (uVar5 <= uVar4) {
      FUN_71ba33fc(uVar4,uVar5);
      uVar4 = extraout_r1_01;
    }
    if (uVar4 == uVar6) goto LAB_71a0939e;
  }
  *(undefined4 *)(iVar7 + uVar6 * 4) = 0;
LAB_71a0939e:
  iVar7 = *param_3;
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = *(uint *)(iVar7 + 4);
    if (uVar2 < 2) {
      uVar4 = uVar4 & uVar5 - 1;
    }
    else if (uVar5 <= uVar4) {
      FUN_71ba33fc(uVar4,uVar5);
      uVar4 = extraout_r1_02;
    }
    if (uVar4 != uVar6) {
      *(int **)(*param_2 + uVar4 * 4) = piVar3;
      iVar7 = *param_3;
    }
  }
  *piVar3 = iVar7;
  *(undefined1 *)(param_1 + 2) = 1;
  iVar7 = param_2[3];
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *param_3 = 0;
  param_2[3] = iVar7 + -1;
  return;
}


// =========================================================================
// Function: pHRyNpzYSFHJsayORSTfeEMRozDZI_WAStKWNYpCFGRfpSOXCTjyCdBCuQmGFZAiqtZdkjlgbaasUPKsLOGTEOiTDoRpsztxuuxJCvwjYNfknQOMOgtGxnpASqUxYNnuyamUxsYQhvBcawKhoarySeZJQnWKkJgVVVdKAfPwrvBesYVVNXjCDyogVhRAjWkrOQUTa_rPnGecnHqRcTCCQNmFjA__zoAfCPuFknkFNvxJTUUEacCQDCcLmAXznXdePIOFZRTQwhofOzgiMGDOxUvAkqptBgCS_rgYnYRuKARkxPPcRQBJfqLqRsiZyMNDYFBuMo_JwdkUPWtIwppppKeI_ivVJwnwSOWNdmW
// Entry: 0x71a09490 | Size: 198 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void pHRyNpzYSFHJsayORSTfeEMRozDZI_WAStKWNYpCFGRfpSOXCTjyCdBCuQmGFZAiqtZdkjlgbaasUPKsLOGTEOiTDoRpsztxuuxJCvwjYNfknQOMOgtGxnpASqUxYNnuyamUxsYQhvBcawKhoarySeZJQnWKkJgVVVdKAfPwrvBesYVVNXjCDyogVhRAjWkrOQUTa_rPnGecnHqRcTCCQNmFjA__zoAfCPuFknkFNvxJTUUEacCQDCcLmAXznXdePIOFZRTQwhofOzgiMGDOxUvAkqptBgCS_rgYnYRuKARkxPPcRQBJfqLqRsiZyMNDYFBuMo_JwdkUPWtIwppppKeI_ivVJwnwSOWNdmW
               (undefined4 *param_1,int *param_2,ushort *param_3)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar4;
  int *unaff_r6;
  uint uVar5;
  uint uVar6;
  
  uVar4 = param_2[1];
  uVar6 = (uint)*param_3;
  if (uVar4 != 0) {
    uVar1 = uVar4 - (uVar4 >> 1 & 0x55555555);
    uVar1 = (uVar1 & 0x33333333) + (uVar1 >> 2 & 0x33333333);
    uVar1 = (uVar1 + (uVar1 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
    if (uVar1 < 2) {
      uVar5 = uVar4 - 1 & uVar6;
    }
    else {
      uVar5 = uVar6;
      if (uVar4 <= uVar6) {
        FUN_71ba33fc(uVar6,uVar4 & 0xffff);
        uVar5 = extraout_r1;
      }
    }
    piVar2 = *(int **)(*param_2 + uVar5 * 4);
    if (piVar2 != (int *)0x0) {
      unaff_r6 = (int *)*piVar2;
    }
    if (piVar2 != (int *)0x0 && unaff_r6 != (int *)0x0) {
      do {
        uVar3 = unaff_r6[1];
        if (uVar3 == uVar6) {
          if (*(ushort *)(unaff_r6 + 2) == uVar6) {
            *(undefined1 *)(param_1 + 1) = 0;
            *param_1 = unaff_r6;
            return;
          }
        }
        else {
          if (uVar1 < 2) {
            uVar3 = uVar3 & uVar4 - 1;
          }
          else if (uVar4 <= uVar3) {
            FUN_71ba33fc(uVar3,uVar4);
            uVar3 = extraout_r1_00;
          }
          if (uVar3 != uVar5) {
            halt_baddata();
          }
        }
        unaff_r6 = (int *)*unaff_r6;
      } while (unaff_r6 != (int *)0x0);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: BaoMUtftocDqlKntUABZlYEXDOnumbmhWGBrHXHCZlKIkmGsxJGDvMin_MlDTSNZpJXprQjIWPjWcLuZvcJZpCRCThjbrXassoybKSVSOPbKzVQqBOVoILYxmqEKBSabq_yMZYkRQrPpVNGPIdIGyaTPiobwGxsUSXfqPnVPTSBGunGqAPCQmFJgPHFVFKdHSNLZeGDCcjpzfyAXvhZPGuY_EMEgJWs
// Entry: 0x71a09860 | Size: 38 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void BaoMUtftocDqlKntUABZlYEXDOnumbmhWGBrHXHCZlKIkmGsxJGDvMin_MlDTSNZpJXprQjIWPjWcLuZvcJZpCRCThjbrXassoybKSVSOPbKzVQqBOVoILYxmqEKBSabq_yMZYkRQrPpVNGPIdIGyaTPiobwGxsUSXfqPnVPTSBGunGqAPCQmFJgPHFVFKdHSNLZeGDCcjpzfyAXvhZPGuY_EMEgJWs
               (undefined4 *param_1,uint param_2)

{
  if (param_2 == 0) {
    *param_1 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_2 < 0x40000000) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Subroutine does not return */
  FUN_719fe2ec();
}


// =========================================================================
// Function: ByPmmLDuGKCBwIIoAHNgL_iiVGikFrQKFuaYMyXJEhBkbAKjchMlnUWrgaoOoXdBRiiElMnMxVVyClDR_OCHMGHHyTSHciUqrHRNCFPWFFMKuJWAQz_nhACF_gRlxQgeLHIixVhuPauzteRKKbyFsjNhNwOcKNrEm_viwibRKllJ_vBoqWTEeCrjRxPVqrMPXUHgMtUGmdSzIgTIKuDwBaqwxykxE_vAgckimlYPfvrbaAYLauwgJItwQZVKhpKXryzaaahvJpvfXYwzygudjOnDfsblYfyqtfyXYiYOXMoCS_uPIjXtJiVEuLCnNNhWjrlr_AfArLbIiXbvTCrOt
// Entry: 0x71a09a2c | Size: 198 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void ByPmmLDuGKCBwIIoAHNgL_iiVGikFrQKFuaYMyXJEhBkbAKjchMlnUWrgaoOoXdBRiiElMnMxVVyClDR_OCHMGHHyTSHciUqrHRNCFPWFFMKuJWAQz_nhACF_gRlxQgeLHIixVhuPauzteRKKbyFsjNhNwOcKNrEm_viwibRKllJ_vBoqWTEeCrjRxPVqrMPXUHgMtUGmdSzIgTIKuDwBaqwxykxE_vAgckimlYPfvrbaAYLauwgJItwQZVKhpKXryzaaahvJpvfXYwzygudjOnDfsblYfyqtfyXYiYOXMoCS_uPIjXtJiVEuLCnNNhWjrlr_AfArLbIiXbvTCrOt
               (undefined4 *param_1,int *param_2,ushort *param_3)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar4;
  int *unaff_r6;
  uint uVar5;
  uint uVar6;
  
  uVar4 = param_2[1];
  uVar6 = (uint)*param_3;
  if (uVar4 != 0) {
    uVar1 = uVar4 - (uVar4 >> 1 & 0x55555555);
    uVar1 = (uVar1 & 0x33333333) + (uVar1 >> 2 & 0x33333333);
    uVar1 = (uVar1 + (uVar1 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
    if (uVar1 < 2) {
      uVar5 = uVar4 - 1 & uVar6;
    }
    else {
      uVar5 = uVar6;
      if (uVar4 <= uVar6) {
        FUN_71ba33fc(uVar6,uVar4 & 0xffff);
        uVar5 = extraout_r1;
      }
    }
    piVar2 = *(int **)(*param_2 + uVar5 * 4);
    if (piVar2 != (int *)0x0) {
      unaff_r6 = (int *)*piVar2;
    }
    if (piVar2 != (int *)0x0 && unaff_r6 != (int *)0x0) {
      do {
        uVar3 = unaff_r6[1];
        if (uVar3 == uVar6) {
          if (*(ushort *)(unaff_r6 + 2) == uVar6) {
            *(undefined1 *)(param_1 + 1) = 0;
            *param_1 = unaff_r6;
            return;
          }
        }
        else {
          if (uVar1 < 2) {
            uVar3 = uVar3 & uVar4 - 1;
          }
          else if (uVar4 <= uVar3) {
            FUN_71ba33fc(uVar3,uVar4);
            uVar3 = extraout_r1_00;
          }
          if (uVar3 != uVar5) {
            halt_baddata();
          }
        }
        unaff_r6 = (int *)*unaff_r6;
      } while (unaff_r6 != (int *)0x0);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: cjutAgHzUYnjP_UKXDhg_CvUinBOrIQaUtAndiNcqUQfjsXFTHeWnTvEqZsCbmgqsXRMRDJNKMaFZhdOdXSHscxIjHnNJaIyqdwbHSAlQvFSsFqmNDemCmJkAAAHhrKxlSelkDZwqlUfKwAWMHvpPFpwsdKmGWGmAGmrMkweq_jIHVErOzWnTLqHzTUtrEOrSt_jTAnjGcNZr
// Entry: 0x71a09df8 | Size: 38 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void cjutAgHzUYnjP_UKXDhg_CvUinBOrIQaUtAndiNcqUQfjsXFTHeWnTvEqZsCbmgqsXRMRDJNKMaFZhdOdXSHscxIjHnNJaIyqdwbHSAlQvFSsFqmNDemCmJkAAAHhrKxlSelkDZwqlUfKwAWMHvpPFpwsdKmGWGmAGmrMkweq_jIHVErOzWnTLqHzTUtrEOrSt_jTAnjGcNZr
               (undefined4 *param_1,uint param_2)

{
  if (param_2 == 0) {
    *param_1 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_2 < 0x40000000) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Subroutine does not return */
  FUN_719fe2ec();
}


// =========================================================================
// Function: XKLApskbNQlBFxpFxqmtdiIJwoUaNxOazShswceCsiOXbItNHZDEUMgqcbYRLWvVcjtNJUmD_VPewamsFppgeicTjtBSZSFIphfyXhWTHEiqkHgyktdWfQPjDGkzxWjoxrF_VXtfbODtWIGxgEVRe_qSzNyx_dLdIYDd_yVdqiDjohdmaqXOlsfKQVnJzNNK_UTZggmyWrhIHtnGQfbRhbOSITVFrepBgTgxPaNlOjVaXNTLTUeBclMzFzdtUVTNlzsVxcccBEQGUcXAKnbaYYIReCmCrFfzSWsVuGvzeUUUoOhx_TZX_hMJrqCtqwc_GTiULTf_IAwFPZsOcuCUZ
// Entry: 0x71a09fc4 | Size: 198 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void XKLApskbNQlBFxpFxqmtdiIJwoUaNxOazShswceCsiOXbItNHZDEUMgqcbYRLWvVcjtNJUmD_VPewamsFppgeicTjtBSZSFIphfyXhWTHEiqkHgyktdWfQPjDGkzxWjoxrF_VXtfbODtWIGxgEVRe_qSzNyx_dLdIYDd_yVdqiDjohdmaqXOlsfKQVnJzNNK_UTZggmyWrhIHtnGQfbRhbOSITVFrepBgTgxPaNlOjVaXNTLTUeBclMzFzdtUVTNlzsVxcccBEQGUcXAKnbaYYIReCmCrFfzSWsVuGvzeUUUoOhx_TZX_hMJrqCtqwc_GTiULTf_IAwFPZsOcuCUZ
               (undefined4 *param_1,int *param_2,ushort *param_3)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar4;
  int *unaff_r6;
  uint uVar5;
  uint uVar6;
  
  uVar4 = param_2[1];
  uVar6 = (uint)*param_3;
  if (uVar4 != 0) {
    uVar1 = uVar4 - (uVar4 >> 1 & 0x55555555);
    uVar1 = (uVar1 & 0x33333333) + (uVar1 >> 2 & 0x33333333);
    uVar1 = (uVar1 + (uVar1 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
    if (uVar1 < 2) {
      uVar5 = uVar4 - 1 & uVar6;
    }
    else {
      uVar5 = uVar6;
      if (uVar4 <= uVar6) {
        FUN_71ba33fc(uVar6,uVar4 & 0xffff);
        uVar5 = extraout_r1;
      }
    }
    piVar2 = *(int **)(*param_2 + uVar5 * 4);
    if (piVar2 != (int *)0x0) {
      unaff_r6 = (int *)*piVar2;
    }
    if (piVar2 != (int *)0x0 && unaff_r6 != (int *)0x0) {
      do {
        uVar3 = unaff_r6[1];
        if (uVar3 == uVar6) {
          if (*(ushort *)(unaff_r6 + 2) == uVar6) {
            *(undefined1 *)(param_1 + 1) = 0;
            *param_1 = unaff_r6;
            return;
          }
        }
        else {
          if (uVar1 < 2) {
            uVar3 = uVar3 & uVar4 - 1;
          }
          else if (uVar4 <= uVar3) {
            FUN_71ba33fc(uVar3,uVar4);
            uVar3 = extraout_r1_00;
          }
          if (uVar3 != uVar5) {
            halt_baddata();
          }
        }
        unaff_r6 = (int *)*unaff_r6;
      } while (unaff_r6 != (int *)0x0);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: HXkeOCkWqODuYvjEFSaIZIzneK_VNEqbMrPovKUbxQyphBaPDTlTtSaLMxFYkKHOLlaiilPhgnxzadeyUoWcDgZDBrRXUkggwACcAe__MxTdF_MKpgWZpZRHFnEiFTn_utLfOApvKLknLryNRagzqluOoHIxpASbnwfwhZPiTks_kregKqlfTWMsyIwbIDZs_NzxGbdgdHpII
// Entry: 0x71a0a390 | Size: 38 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void HXkeOCkWqODuYvjEFSaIZIzneK_VNEqbMrPovKUbxQyphBaPDTlTtSaLMxFYkKHOLlaiilPhgnxzadeyUoWcDgZDBrRXUkggwACcAe__MxTdF_MKpgWZpZRHFnEiFTn_utLfOApvKLknLryNRagzqluOoHIxpASbnwfwhZPiTks_kregKqlfTWMsyIwbIDZs_NzxGbdgdHpII
               (undefined4 *param_1,uint param_2)

{
  if (param_2 == 0) {
    *param_1 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_2 < 0x40000000) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Subroutine does not return */
  FUN_719fe2ec();
}


// =========================================================================
// Function: WppMzXkrx_QqgLuMxehnIbHHol
// Entry: 0x71a0a55c | Size: 40 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void WppMzXkrx_QqgLuMxehnIbHHol(undefined4 *param_1)

{
  *param_1 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: dk_frUhS_KeAeWhjkFZsXtPflVW
// Entry: 0x71a0a89e | Size: 34 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void dk_frUhS_KeAeWhjkFZsXtPflVW(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[2];
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0xc) != 0) {
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0xc);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: rBPFJGUWjXdI_tkHQbol_BQDtuOGLETvlACyWwb
// Entry: 0x71a0a948 | Size: 10 bytes
// =========================================================================

void rBPFJGUWjXdI_tkHQbol_BQDtuOGLETvlACyWwb(int param_1)

{
  thunk_VbRiuVwHWQk_oGrSwnBDyQbrlWNAxTsUod(param_1 + 4);
  return;
}


// =========================================================================
// Function: LStkHDFPeluMkKFmKFOpelVoXigpzwkr
// Entry: 0x71a0a982 | Size: 50 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

undefined4 LStkHDFPeluMkKFmKFOpelVoXigpzwkr(int *param_1,int param_2,int param_3)

{
  if ((param_2 != 0) && (0 < param_3)) {
    if (*param_1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}


// =========================================================================
// Function: OLeIqMKxfmIisdRDmoTHAXOpDTAH
// Entry: 0x71a0aae0 | Size: 38 bytes
// =========================================================================

void OLeIqMKxfmIisdRDmoTHAXOpDTAH(undefined4 *param_1,int param_2,int param_3)

{
  if (param_3 <= param_2) {
    param_3 = param_2;
  }
  if (param_2 < 2) {
    param_2 = 1;
  }
  param_1[5] = 0;
  param_1[6] = param_2;
  *param_1 = 0;
  param_1[1] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  param_1[7] = param_3;
  param_1[4] = 0x3f800000;
  return;
}


// =========================================================================
// Function: VbRiuVwHWQk_oGrSwnBDyQbrlWNAxTsUod
// Entry: 0x71a0ab20 | Size: 116 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void VbRiuVwHWQk_oGrSwnBDyQbrlWNAxTsUod(int param_1,short param_2,int param_3,int param_4)

{
  int iVar1;
  short sVar2;
  
  iVar1 = _ext___stack_chk_guard;
  if ((param_3 != 0) && (0 < param_4)) {
    if (*(char *)(param_1 + 0x16) == '\0') {
      *(short *)(param_1 + 0x14) = param_2;
      *(undefined1 *)(param_1 + 0x16) = 1;
      sVar2 = param_2;
    }
    else {
      sVar2 = *(short *)(param_1 + 0x14);
    }
    if (-1 < (short)(param_2 - sVar2)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  if (_ext___stack_chk_guard != iVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}


// =========================================================================
// Function: tCjoIZREVn_DRfdiDhzswtqUmlVPEt_JyeBWdsUGuCvggmWYGkjNmFnlcjkpYxqgWgKf
// Entry: 0x71a0acb8 | Size: 320 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
tCjoIZREVn_DRfdiDhzswtqUmlVPEt_JyeBWdsUGuCvggmWYGkjNmFnlcjkpYxqgWgKf(int *param_1,int *param_2)

{
  ushort uVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint extraout_r1;
  uint extraout_r1_00;
  int *unaff_r4;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int aiStack_34 [2];
  char cStack_2c;
  int iStack_28;
  
  iStack_28 = _ext___stack_chk_guard;
  if (*(char *)((int)param_1 + 0x17) == '\0') {
    if (param_1[6] <= param_1[3]) {
      *(undefined1 *)((int)param_1 + 0x17) = 1;
      goto LAB_71a0ace6;
    }
  }
  else {
LAB_71a0ace6:
    uVar7 = param_1[1];
    uVar1 = *(ushort *)(param_1 + 5);
    uVar8 = (uint)uVar1;
    if (uVar7 != 0) {
      uVar2 = uVar7 - (uVar7 >> 1 & 0x55555555);
      uVar2 = (uVar2 & 0x33333333) + (uVar2 >> 2 & 0x33333333);
      uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
      if (uVar2 < 2) {
        uVar9 = uVar7 - 1 & uVar8;
      }
      else {
        uVar9 = uVar8;
        if (uVar7 <= uVar8) {
          FUN_71ba33fc(uVar8,uVar7 & 0xffff);
          uVar9 = extraout_r1;
        }
      }
      piVar3 = *(int **)(*param_1 + uVar9 * 4);
      if (piVar3 != (int *)0x0) {
        unaff_r4 = (int *)*piVar3;
      }
      if (piVar3 != (int *)0x0 && unaff_r4 != (int *)0x0) {
        do {
          uVar5 = unaff_r4[1];
          if (uVar5 == uVar8) {
            if (*(ushort *)(unaff_r4 + 2) == uVar8) {
              iVar6 = *param_2;
              *param_2 = unaff_r4[3];
              unaff_r4[3] = iVar6;
              iVar6 = param_2[1];
              param_2[1] = unaff_r4[4];
              unaff_r4[4] = iVar6;
              iVar6 = param_2[2];
              param_2[2] = unaff_r4[5];
              unaff_r4[5] = iVar6;
              FUN_71a0b958(aiStack_34,param_1,unaff_r4);
              if (aiStack_34[0] != 0) {
                iVar6 = 0;
                if (cStack_2c != '\0') {
                  iVar6 = *(int *)(aiStack_34[0] + 0xc);
                }
                if (cStack_2c != '\0' && iVar6 != 0) {
                  *(int *)(aiStack_34[0] + 0x10) = iVar6;
                }
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              *(short *)(param_1 + 5) = (short)param_1[5] + 1;
              uVar4 = 0;
              goto LAB_71a0ad64;
            }
          }
          else {
            if (uVar2 < 2) {
              uVar5 = uVar5 & uVar7 - 1;
            }
            else if (uVar7 <= uVar5) {
              FUN_71ba33fc(uVar5,uVar7);
              uVar5 = extraout_r1_00;
            }
            if (uVar5 != uVar9) break;
          }
          unaff_r4 = (int *)*unaff_r4;
        } while (unaff_r4 != (int *)0x0);
      }
    }
    if (param_1[3] != 0) {
      *(ushort *)(param_1 + 5) = uVar1 + 1;
      uVar4 = 1;
      goto LAB_71a0ad64;
    }
    *(undefined1 *)((int)param_1 + 0x17) = 0;
  }
  uVar4 = 2;
LAB_71a0ad64:
  if (_ext___stack_chk_guard == iStack_28) {
    return uVar4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: ibODFPFQWANzCYMNbEBPWuwYZpMbVTEJUSZobCBCEfAZMkexnVnyvYEDsbvTnHvoWktPHfxUtiGECJJUYcBCxWDUJY_xxAxZiStcBzqvjpEkUmrtQZdWEFjJMiZjzRmGwduybgJNoRIgzZoBnauVpKSUYXLSaDmhVYJgfLBqIDOtQKGDWUbcZfgvmOaBOlryfAiiEtwEFEEKEWtpbMkOKCr_uqaXUUPg_CdIeCBKwiOzhUMxciqBmjKclXRnalidCKYvahEe_eGjuWuLxxHNiAIMhZoTkVGjSRbanJSkPwXIFBdAQcWoRjaCwCxeaYfNediApFoFpLVQtoMkIHzEZNFjcOGyBZdZYFoJZcbOYo
// Entry: 0x71a0af08 | Size: 214 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ibODFPFQWANzCYMNbEBPWuwYZpMbVTEJUSZobCBCEfAZMkexnVnyvYEDsbvTnHvoWktPHfxUtiGECJJUYcBCxWDUJY_xxAxZiStcBzqvjpEkUmrtQZdWEFjJMiZjzRmGwduybgJNoRIgzZoBnauVpKSUYXLSaDmhVYJgfLBqIDOtQKGDWUbcZfgvmOaBOlryfAiiEtwEFEEKEWtpbMkOKCr_uqaXUUPg_CdIeCBKwiOzhUMxciqBmjKclXRnalidCKYvahEe_eGjuWuLxxHNiAIMhZoTkVGjSRbanJSkPwXIFBdAQcWoRjaCwCxeaYfNediApFoFpLVQtoMkIHzEZNFjcOGyBZdZYFoJZcbOYo
               (int *param_1,int *param_2,ushort *param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint extraout_r1;
  uint extraout_r1_00;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar1 = _ext___stack_chk_guard;
  uVar6 = param_2[1];
  uVar8 = (uint)*param_3;
  if (uVar6 != 0) {
    uVar2 = uVar6 - (uVar6 >> 1 & 0x55555555);
    uVar2 = (uVar2 & 0x33333333) + (uVar2 >> 2 & 0x33333333);
    uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
    if (uVar2 < 2) {
      uVar7 = uVar6 - 1 & uVar8;
    }
    else {
      uVar7 = uVar8;
      if (uVar6 <= uVar8) {
        FUN_71ba33fc(uVar8,uVar6 & 0xffff);
        uVar7 = extraout_r1;
      }
    }
    piVar3 = *(int **)(*param_2 + uVar7 * 4);
    piVar5 = param_1;
    if (piVar3 != (int *)0x0) {
      piVar5 = (int *)*piVar3;
    }
    if (piVar3 != (int *)0x0 && piVar5 != (int *)0x0) {
      do {
        uVar4 = piVar5[1];
        if (uVar4 == uVar8) {
          if (*(ushort *)(piVar5 + 2) == uVar8) {
            *(undefined1 *)(param_1 + 1) = 0;
            *param_1 = (int)piVar5;
            if (_ext___stack_chk_guard != iVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            return;
          }
        }
        else {
          if (uVar2 < 2) {
            uVar4 = uVar4 & uVar6 - 1;
          }
          else if (uVar6 <= uVar4) {
            FUN_71ba33fc(uVar4,uVar6);
            uVar4 = extraout_r1_00;
          }
          if (uVar4 != uVar7) {
            halt_baddata();
          }
        }
        piVar5 = (int *)*piVar5;
      } while (piVar5 != (int *)0x0);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: LxAyRwsIlcAmyRwIQnIldrrwJTcphodDcZlZIDCHKZXhR_KiPoNafyEhDWFXEDzbkKNaUvlvEZaWiZwBgETOlGaFBhYYbrUxGlUxgsNRtTPUgimCOkYcTscNFCcLqTXNeztgRAIJRepPCeamjjheoyDaHeOuqwaRnYOWnQFsNexFRVuBYDwQKOCQEMpAoJMVQceSoubWeAkKSqdmeUYsgIyxENxSSmnxoO
// Entry: 0x71a0b3cc | Size: 38 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void LxAyRwsIlcAmyRwIQnIldrrwJTcphodDcZlZIDCHKZXhR_KiPoNafyEhDWFXEDzbkKNaUvlvEZaWiZwBgETOlGaFBhYYbrUxGlUxgsNRtTPUgimCOkYcTscNFCcLqTXNeztgRAIJRepPCeamjjheoyDaHeOuqwaRnYOWnQFsNexFRVuBYDwQKOCQEMpAoJMVQceSoubWeAkKSqdmeUYsgIyxENxSSmnxoO
               (undefined4 *param_1,uint param_2)

{
  if (param_2 == 0) {
    *param_1 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_2 < 0x40000000) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Subroutine does not return */
  FUN_719fe2ec();
}


// =========================================================================
// Function: EWJLCADIyuHnpDoOXmwKQbQiBjVcUVTHKhoUTvBuylSnpfvSkiRwDakYmnfVmOdlqnkHhM_WaHFeKwWGHJcxY
// Entry: 0x71a0b598 | Size: 310 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x71a0b6f8) */

void EWJLCADIyuHnpDoOXmwKQbQiBjVcUVTHKhoUTvBuylSnpfvSkiRwDakYmnfVmOdlqnkHhM_WaHFeKwWGHJcxY
               (int *param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint extraout_r2;
  int iVar3;
  undefined8 uVar4;
  undefined4 in_stack_00000160;
  
  iVar3 = *param_1;
  if (param_4 <= (uint)(param_1[2] - iVar3)) {
    uVar2 = param_1[1] - iVar3;
    if ((uVar2 < param_4) && (param_2 = param_2 + uVar2, param_1[1] != iVar3)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (param_3 == param_2) {
      param_1[1] = iVar3;
      return;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (iVar3 != 0) {
    param_1[1] = iVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (-1 < (int)param_4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar4 = FUN_71a0b704(param_1);
  uVar1 = (uint)((ulonglong)uVar4 >> 0x20);
  uVar2 = (uint)uVar4 & 0x1f;
  *(undefined1 *)((uVar1 >> uVar2 | uVar1 << 0x20 - uVar2) + 0x10) = 0xf3;
  uRam00000008 = param_4;
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_vector_7006dad5,0xaf,0xaf,extraout_r2 >> 0x10,in_stack_00000160,0x71a0b643);
}


