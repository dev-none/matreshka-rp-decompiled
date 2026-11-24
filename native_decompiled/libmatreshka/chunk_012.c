// =========================================================================
// Function: FUN_7175be7c
// Entry: 0x7175be7c | Size: 64 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7175be7c(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uStack_1a0;
  int iStack_19c;
  int iStack_198;
  int iStack_190;
  int iStack_18c;
  int iStack_184;
  int iStack_180;
  undefined1 auStack_169 [3];
  undefined1 *puStack_166;
  undefined4 uStack_157;
  undefined1 auStack_142 [258];
  undefined4 uStack_40;
  char cStack_3c;
  int iStack_30;
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  cVar1 = *(char *)(param_1 + 0x140);
  if (cVar1 != '\0') {
    iVar8 = 0;
    do {
      uVar9 = (&DAT_70b0f220)[-iVar8];
      iVar2 = FUN_71567160(DAT_711a3938,uVar9);
      if (iVar2 == 0) {
        FUN_71568138(DAT_711a3938,uVar9);
      }
      iVar8 = iVar8 + -1;
    } while (iVar8 != -0x29);
    uVar9 = *(undefined4 *)(DAT_711a3938 + 0x13898);
    FUN_714dd738(uVar9);
    FUN_714dd5c0(uVar9);
    thunk_FUN_7156a9f4(1,4);
    thunk_FUN_7156ad48(1,4);
    thunk_FUN_7156ab84(1,4);
    FUN_715c4e30(*(undefined4 *)(param_1 + 0x130),1);
    if (DAT_700fa468 == '\0') {
      FUN_715c4028(*(undefined4 *)(param_1 + 0x130));
    }
    DAT_700fa468 = '\0';
    FUN_71566f10(DAT_711a3938,*(undefined4 *)(param_1 + 6),*(undefined4 *)(param_1 + 10));
    FUN_715c543c(*(undefined4 *)(param_1 + 0x130),*(undefined4 *)(param_1 + 6),
                 *(undefined4 *)(param_1 + 10),*(undefined4 *)(param_1 + 0xe),
                 *(undefined4 *)(param_1 + 0x12));
    FUN_715be6fc(*(undefined4 *)(param_1 + 0x130),*(undefined4 *)(param_1 + 1),0);
    FUN_715c524c(*(undefined4 *)(param_1 + 0x130));
    FUN_715c53c0(*(undefined4 *)(param_1 + 0x130));
    thunk_FUN_7156700c(DAT_711a3938);
    uVar10 = *(undefined4 *)(param_1 + 6);
    uVar11 = *(undefined4 *)(param_1 + 10);
    uVar9 = FUN_71ba0b38(*(undefined4 *)(param_1 + 0xe),0x3f000000);
    FUN_715601e8(*(undefined4 *)(param_1 + 0x130),uVar10,uVar11,uVar9);
    FUN_715bebf0(*(undefined4 *)(param_1 + 0x130),*(undefined4 *)(param_1 + 0x12));
    *(undefined1 *)(param_1 + 0x12a) = 1;
    iStack_30 = 0x800;
    puStack_166 = auStack_142;
    *(undefined1 *)(param_1 + 0x134) = 0;
    *(undefined1 *)(param_1 + 0x114) = 0;
    uStack_157 = 0;
    uStack_40 = 0;
    cStack_3c = '\x01';
    if (DAT_711f6d58 != (undefined4 *)0x0) {
      (**(code **)(*(int *)*DAT_711f6d58 + 0xec))
                ((int *)*DAT_711f6d58,&DAT_701021c8,auStack_169,1,10,0,0,0xffffffff,0xffff,0xffff,0)
      ;
    }
    iVar8 = DAT_712017f8;
    DataMemoryBarrier(0xb);
    if (((DAT_711f6d54 & 1) == 0) && (iVar2 = cuKsjVZRyspaVsDnqLy(&DAT_711f6d54), iVar2 != 0)) {
      pcVar4 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fa4dc);
      if (*pcVar4 == '\0') {
        puVar6 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa4cc);
        *puVar6 = 0xbd6b2b3a;
        puVar6[1] = 0x4db442ea;
        puVar6[2] = 0xa65a3506;
        *(undefined1 *)((int)puVar6 + 0xe) = 1;
        *(undefined2 *)(puVar6 + 3) = 0x3be5;
        GFDIUClbc_QcPNgD_wH(&LAB_71760654,puVar6,&DAT_70b0e000);
        puVar7 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa4dc);
        *puVar7 = 1;
      }
      pbVar5 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fa4cc);
      if (pbVar5[0xe] != 0) {
        *pbVar5 = *pbVar5 ^ 0x55;
        pbVar5[1] = pbVar5[1] ^ 0x45;
        pbVar5[2] = pbVar5[2] ^ 0x3b;
        pbVar5[3] = pbVar5[3] ^ 0xd1;
        pbVar5[0xe] = 0;
        pbVar5[4] = pbVar5[4] ^ 0x8b;
        pbVar5[5] = pbVar5[5] ^ 0x3b;
        pbVar5[6] = pbVar5[6] ^ 0xd1;
        pbVar5[7] = pbVar5[7] ^ 0x3f;
        pbVar5[8] = pbVar5[8] ^ 0x55;
        pbVar5[9] = pbVar5[9] ^ 0x45;
        pbVar5[10] = pbVar5[10] ^ 0x3b;
        pbVar5[0xb] = pbVar5[0xb] ^ 0xd1;
        pbVar5[0xc] = pbVar5[0xc] ^ 0x8b;
        pbVar5[0xd] = pbVar5[0xd] ^ 0x3b;
      }
      DAT_711f6d50 = FUN_71885ba4(pbVar5,0);
      SixizuLbAnqfgRApsCY(&DAT_711f6d54);
    }
    uVar9 = DAT_711f6d50;
    imp___aeabi_memclr4(&iStack_19c,0x30);
    uStack_1a0 = uVar9;
    cfqspBX_JrdDvACwYrAyrngjQ(iVar8 + 0x34);
    piVar3 = (int *)thunk_MwhHq(0x3c);
    *piVar3 = 0;
    piVar3[1] = 0;
    FUN_713a10f8(piVar3 + 2,&uStack_1a0);
    piVar3[1] = iVar8 + 0x38;
    iVar2 = *(int *)(iVar8 + 0x38);
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    *(int **)(iVar8 + 0x38) = piVar3;
    *(int *)(iVar8 + 0x40) = *(int *)(iVar8 + 0x40) + 1;
    QgduklVhdVlmSiqzGQeutncbrNj(iVar8 + 0x34);
    if (iStack_184 != 0) {
      iStack_180 = iStack_184;
      qNQrlu();
    }
    if (iStack_190 != 0) {
      iStack_18c = iStack_190;
      qNQrlu();
    }
    if (iStack_19c != 0) {
      iStack_198 = iStack_19c;
      qNQrlu();
    }
    if ((cStack_3c != '\0') && (0x800 < iStack_30)) {
      imp_free(puStack_166);
    }
  }
  if (_ext___stack_chk_guard == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail(cVar1);
}


// =========================================================================
// Function: FUN_7175c99c
// Entry: 0x7175c99c | Size: 456 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7175c99c(int param_1)

{
  undefined4 uVar1;
  undefined1 auStack_159 [3];
  undefined1 *puStack_156;
  undefined4 uStack_147;
  undefined1 uStack_132;
  undefined1 uStack_131;
  undefined1 uStack_130;
  undefined1 uStack_12f;
  undefined4 uStack_30;
  char cStack_2c;
  int iStack_20;
  int iStack_1c;
  
  iStack_1c = _ext___stack_chk_guard;
  *(undefined1 *)(param_1 + 0x142) = 0;
  if (*(int *)(param_1 + 0x130) != 0) {
    FUN_715c4028();
    thunk_FUN_715c4104(*(undefined4 *)(param_1 + 0x130),0x42c80000);
    FUN_715c4e30(*(undefined4 *)(param_1 + 0x130),0);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x13c);
  uStack_132 = (undefined1)uVar1;
  iStack_20 = 0x800;
  cStack_2c = '\x01';
  puStack_156 = &uStack_132;
  uStack_12f = (undefined1)((uint)uVar1 >> 0x18);
  uStack_130 = (undefined1)((uint)uVar1 >> 0x10);
  uStack_30 = 0;
  uStack_131 = (undefined1)((uint)uVar1 >> 8);
  uStack_147 = 0x20;
  (**(code **)(*(int *)*DAT_711f6d58 + 0xec))
            ((int *)*DAT_711f6d58,&DAT_701021bc,auStack_159,1,9,0,0,0xffffffff,0xffff,0xffff,0);
  if ((cStack_2c != '\0') && (0x800 < iStack_20)) {
    imp_free(puStack_156);
  }
  if (_ext___stack_chk_guard == iStack_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_7175cc18
// Entry: 0x7175cc18 | Size: 24 bytes
// =========================================================================

void FUN_7175cc18(int param_1)

{
  if (*(int *)(param_1 + 0x130) != 0) {
    FUN_715c524c();
    FUN_715be6fc(*(undefined4 *)(param_1 + 0x130),*(undefined4 *)(param_1 + 1),0);
  }
  *(undefined1 *)(param_1 + 0x142) = 1;
  return;
}


// =========================================================================
// Function: FUN_7175ccb4
// Entry: 0x7175ccb4 | Size: 24 bytes
// =========================================================================

undefined4 FUN_7175ccb4(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  
  uVar5 = 0;
  if ((*(int *)(param_1 + 0x130) != 0) && (iVar1 = thunk_FUN_715bf66c(), iVar1 == 0)) {
    iVar1 = FUN_71886108();
    uVar5 = 1;
    if (999 < (uint)(iVar1 - *(int *)(param_1 + 0x138))) {
      uVar5 = 0;
      iVar1 = *(int *)(DAT_711f6d58 + 4);
      uVar2 = FUN_713f4b98(0,1,1);
      uVar3 = FUN_717b9354(iVar1);
      uVar6 = uVar3 & 0xffff;
      if (((uVar6 < 0x7d1) && (uVar6 < 0x7d1)) &&
         (*(char *)(iVar1 + (uVar3 & 0x7ff) + 0x3e88) != '\0')) {
        iVar7 = *(int *)(iVar1 + (uVar3 & 0x7ff) * 4);
        uVar4 = FUN_715613f8(iVar7);
        iVar1 = FUN_71ba2d10(uVar4,0x40800000);
        if ((iVar1 != 0) && (uVar3 = FUN_71602de4(iVar7), (uVar2 | uVar3) == 1)) {
          uVar5 = FUN_715c4810(*(undefined4 *)(param_1 + 0x130),*(undefined4 *)(iVar7 + 8),1);
          FUN_7175cf1c(uVar5,uVar6,1);
          uVar5 = FUN_71886108();
          *(undefined4 *)(param_1 + 0x138) = uVar5;
          return 1;
        }
      }
    }
  }
  return uVar5;
}


// =========================================================================
// Function: FUN_7175cf1c
// Entry: 0x7175cf1c | Size: 72 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_7175cf1c(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auStack_151 [3];
  undefined1 *puStack_14e;
  undefined4 uStack_13f;
  undefined1 uStack_12a;
  undefined1 uStack_129;
  undefined1 uStack_128;
  undefined4 uStack_28;
  char cStack_24;
  int iStack_18;
  int iStack_14;
  
  iStack_14 = _ext___stack_chk_guard;
  iStack_18 = 0x800;
  cStack_24 = '\x01';
  uStack_13f = 0x18;
  puStack_14e = &uStack_12a;
  uStack_28 = 0;
  uStack_12a = (undefined1)param_2;
  uStack_129 = (undefined1)((uint)param_2 >> 8);
  uStack_128 = param_3;
  (**(code **)(*(int *)*DAT_711f6d58 + 0xec))
            ((int *)*DAT_711f6d58,&DAT_701021d0,auStack_151,1,10,0,0,0xffffffff,0xffff,0xffff,0);
  if ((cStack_24 != '\0') && (0x800 < iStack_18)) {
    imp_free(puStack_14e);
  }
  if (_ext___stack_chk_guard == iStack_14) {
                    /* WARNING: Could not recover jumptable at 0x7175d018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_7175d0f0
// Entry: 0x7175d0f0 | Size: 24 bytes
// =========================================================================

uint FUN_7175d0f0(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x130) == 0) {
    return 0;
  }
  iVar2 = FUN_715c50e4();
  uVar1 = 2;
  if (iVar2 == 0) {
    iVar2 = thunk_FUN_715ccc94(*(undefined4 *)(param_1 + 0x130));
    if ((iVar2 != 0) && (uVar1 = *(uint *)(*(int *)(param_1 + 0x130) + 0xd4), uVar1 < 4)) {
      return uVar1 + 5 & 0xff;
    }
    iVar2 = FUN_715ccacc();
    uVar1 = 10;
    if (iVar2 == 0) {
      iVar2 = FUN_715d04ac(*(undefined4 *)(param_1 + 0x130));
      uVar1 = 0xb;
      if (iVar2 == 0) {
        iVar2 = FUN_715cd984(*(undefined4 *)(param_1 + 0x130));
        uVar1 = 0x44;
        if (iVar2 == 0) {
          iVar2 = FUN_715c13cc(*(undefined4 *)(param_1 + 0x130));
          uVar1 = 1;
          if (iVar2 == 0) {
            iVar2 = FUN_715d0ea0(*(undefined4 *)(param_1 + 0x130));
            uVar1 = 3;
            if (iVar2 == 0) {
              iVar2 = FUN_715d0f60(*(undefined4 *)(param_1 + 0x130));
              uVar1 = 4;
              if (iVar2 == 0) {
                iVar2 = FUN_715ce49c(*(undefined4 *)(param_1 + 0x130));
                uVar1 = 0x14;
                if (iVar2 != 1) {
                  iVar2 = FUN_715ce49c(*(undefined4 *)(param_1 + 0x130));
                  uVar1 = 0x16;
                  if (iVar2 != 2) {
                    iVar2 = FUN_715ce49c(*(undefined4 *)(param_1 + 0x130));
                    uVar1 = 0x17;
                    if (iVar2 != 3) {
                      iVar2 = FUN_715ce49c(*(undefined4 *)(param_1 + 0x130));
                      uVar1 = 0x15;
                      if (iVar2 != 4) {
                        iVar2 = FUN_715d07a0(*(undefined4 *)(param_1 + 0x130));
                        uVar1 = 0x18;
                        if (iVar2 == 0) {
                          iVar2 = FUN_715d0c0c(*(undefined4 *)(param_1 + 0x130));
                          uVar1 = 0;
                          if (iVar2 != 0) {
                            uVar1 = 0x19;
                          }
                          return uVar1;
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
  return uVar1;
}


// =========================================================================
// Function: FUN_7175d430
// Entry: 0x7175d430 | Size: 64 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7175d430(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  undefined1 auStack_161 [3];
  undefined1 *puStack_15e;
  uint uStack_14f;
  undefined1 auStack_13a [258];
  undefined4 uStack_38;
  char cStack_34;
  uint uStack_28;
  int iStack_24;
  
  iStack_24 = _ext___stack_chk_guard;
  uStack_28 = 0x800;
  uStack_14f = 0;
  uStack_38 = 0;
  cStack_34 = '\x01';
  puStack_15e = auStack_13a;
  if (param_2 < 0x7d1) {
    iVar3 = DAT_711f6d58[1];
    bVar5 = *(char *)(iVar3 + param_2 + 0x3e88) != '\0';
    if (bVar5) {
      iVar3 = *(int *)(iVar3 + param_2 * 4);
    }
    if (bVar5 && iVar3 != 0) {
      iVar3 = thunk_FUN_715c3f6c(*(undefined4 *)(param_1 + 0x130));
      uVar2 = uStack_28;
      if (iVar3 == 0) {
        *(short *)(param_1 + 0x128) = (short)param_2;
      }
      uVar4 = uStack_14f + 0x10;
      if ((-0x10 < (int)uStack_14f) && ((int)(uStack_28 - 1) >> 3 < (int)(uStack_14f + 0xf >> 3))) {
        uVar1 = uVar4 * 2;
        iVar3 = uVar4 * 2;
        if (puStack_15e == auStack_13a) {
          bVar5 = 0x400 < uVar4;
          uVar4 = uVar1;
          if (bVar5) {
            puStack_15e = (undefined1 *)imp_malloc(iVar3 + 7U >> 3);
            imp___aeabi_memcpy(puStack_15e,auStack_13a,(int)(uVar2 + 7) >> 3);
          }
        }
        else {
          puStack_15e = (undefined1 *)imp_realloc();
          uVar2 = uStack_28;
          uVar4 = uVar1;
        }
      }
      if ((int)uVar2 < (int)uVar4) {
        uStack_28 = uVar4;
      }
      uVar2 = uStack_14f & 7;
      iVar3 = (int)uStack_14f >> 3;
      if (uVar2 == 0) {
        puStack_15e[iVar3] = (char)param_2;
        puStack_15e[(int)(uStack_14f + 8) >> 3] = (char)(param_2 >> 8);
      }
      else {
        puStack_15e[iVar3] = puStack_15e[iVar3] | (byte)((param_2 & 0xff) >> uVar2);
        puStack_15e[iVar3 + 1] = (char)((param_2 & 0xff) << (8 - uVar2 & 0xff));
        iVar3 = (int)(uStack_14f + 8) >> 3;
        puStack_15e[iVar3] = puStack_15e[iVar3] | (byte)((param_2 >> 8) >> uVar2);
        puStack_15e[iVar3 + 1] = (char)((param_2 >> 8) << (8 - uVar2 & 0xff));
      }
      uStack_14f = uStack_14f + 0x10;
      (**(code **)(*(int *)*DAT_711f6d58 + 0xec))
                ((int *)*DAT_711f6d58,&DAT_701021d4,auStack_161,1,10,0,0,0xffffffff,0xffff,0xffff,0)
      ;
      if ((cStack_34 != '\0') && (0x800 < (int)uStack_28)) {
        imp_free(puStack_15e);
      }
    }
  }
  if (_ext___stack_chk_guard == iStack_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_7175d7e0
// Entry: 0x7175d7e0 | Size: 44 bytes
// =========================================================================

void FUN_7175d7e0(int param_1,undefined4 param_2)

{
  imp___aeabi_memcpy(param_1,param_2,0x2e);
  *(undefined1 *)(param_1 + 0x140) = 1;
  return;
}


// =========================================================================
// Function: FUN_7175d834
// Entry: 0x7175d834 | Size: 68 bytes
// =========================================================================

undefined4 FUN_7175d834(void)

{
  ushort uVar1;
  uint uVar2;
  
  uVar1 = *(ushort *)(*(int *)(DAT_711f6d58 + 0xac) + 0x1f68);
  uVar2 = uVar1 - 0x3ec;
  if (uVar2 < 3) {
    return *(undefined4 *)(&DAT_70082990 + uVar2 * 4);
  }
  if (0x7c < uVar1 >> 3) {
    return 0xe2c063ff;
  }
  return *(undefined4 *)(&DAT_711a3d78 + (uint)uVar1 * 4);
}


// =========================================================================
// Function: FUN_7175e0c4
// Entry: 0x7175e0c4 | Size: 1080 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7175e0c4(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  undefined2 uStack_1b0;
  undefined4 uStack_1ae;
  undefined4 uStack_19e;
  undefined4 uStack_19a;
  undefined4 uStack_196;
  undefined4 uStack_192;
  undefined4 uStack_18e;
  undefined1 auStack_18a [12];
  undefined1 auStack_17e [12];
  undefined2 uStack_172;
  undefined4 uStack_170;
  undefined1 auStack_169 [3];
  undefined1 *puStack_166;
  uint uStack_157;
  undefined1 auStack_142 [258];
  undefined4 uStack_40;
  char cStack_3c;
  uint uStack_30;
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  if ((((DAT_711f6d58 != (undefined4 *)0x0) && (DAT_711f6d58[10] == 0xe)) &&
      (*(int *)(param_1 + 0x158) != 0)) && (*(short *)(param_1 + 0x126) == -1)) {
    uStack_30 = 0x800;
    cStack_3c = '\x01';
    uVar8 = (uint)&uStack_1b0 | 6;
    auStack_142[0] = 0xcf;
    uStack_157 = 8;
    uStack_40 = 0;
    puStack_166 = auStack_142;
    FUN_7136cdfc(uVar8);
    uStack_192 = 0;
    uStack_196 = 0;
    uStack_19a = 0;
    uStack_19e = 0;
    FUN_7136cdfc(auStack_18a);
    FUN_7136cdfc(auStack_17e);
    uStack_1b0 = *(undefined2 *)(param_1 + 0xcc);
    uStack_1ae = *(undefined4 *)(param_1 + 0xce);
    FUN_7136d040(uVar8,param_1 + 0xd4);
    uStack_19e = *(undefined4 *)(param_1 + 0xe0);
    uStack_19a = *(undefined4 *)(param_1 + 0xe4);
    uStack_18e = *(undefined4 *)(param_1 + 0xf0);
    uStack_196 = *(undefined4 *)(param_1 + 0xe8);
    uStack_192 = *(undefined4 *)(param_1 + 0xec);
    FUN_7136d040(auStack_18a,param_1 + 0xf4);
    FUN_7136d040(auStack_17e,param_1 + 0x100);
    uVar8 = uStack_30;
    uStack_172 = *(undefined2 *)(param_1 + 0x10c);
    uStack_170 = *(undefined4 *)(param_1 + 0x110);
    uVar5 = uStack_157 + 0x220;
    if ((uStack_157 & 7) == 0) {
      if ((-0x220 < (int)uStack_157) && ((int)(uStack_30 - 1) >> 3 < (int)(uStack_157 + 0x21f >> 3))
         ) {
        uVar3 = uVar5 >> 2;
        uVar6 = uVar5 * 2;
        if (puStack_166 == auStack_142) {
          bVar1 = 0x400 < uVar5;
          uVar5 = uVar6;
          if (bVar1) {
            puStack_166 = (undefined1 *)imp_malloc(uVar3);
            imp___aeabi_memcpy(puStack_166,auStack_142,(int)(uVar8 + 7) >> 3);
          }
        }
        else {
          puStack_166 = (undefined1 *)imp_realloc();
          uVar5 = uVar6;
          uVar8 = uStack_30;
        }
      }
      if ((int)uVar8 < (int)uVar5) {
        uStack_30 = uVar5;
      }
      imp___aeabi_memcpy(puStack_166 + ((int)(uStack_157 + 7) >> 3),&uStack_1b0,0x44);
      uStack_157 = uStack_157 + 0x220;
    }
    else {
      if ((-0x220 < (int)uStack_157) && ((int)(uStack_30 - 1) >> 3 < (int)(uStack_157 + 0x21f >> 3))
         ) {
        iVar2 = uVar5 * 2;
        uVar6 = uVar5 * 2;
        if (puStack_166 == auStack_142) {
          bVar1 = 0x400 < uVar5;
          uVar5 = uVar6;
          if (bVar1) {
            puStack_166 = (undefined1 *)imp_malloc(iVar2 + 7U >> 3);
            imp___aeabi_memcpy(puStack_166,auStack_142,(int)(uVar8 + 7) >> 3);
          }
        }
        else {
          puStack_166 = (undefined1 *)imp_realloc();
          uVar8 = uStack_30;
          uVar5 = uVar6;
        }
      }
      uVar6 = 0x220;
      if ((int)uVar8 < (int)uVar5) {
        uStack_30 = uVar5;
      }
      uVar8 = uStack_157 & 7;
      pbVar7 = (byte *)&uStack_1b0;
      do {
        bVar4 = *pbVar7;
        iVar2 = (int)uStack_157 >> 3;
        if (uVar8 == 0) {
          puStack_166[iVar2] = bVar4;
        }
        else {
          puStack_166[iVar2] = puStack_166[iVar2] | bVar4 >> uVar8;
          if (8 - uVar8 < uVar6) {
            puStack_166[iVar2 + 1] = bVar4 << (8 - uVar8 & 0xff);
          }
        }
        uVar6 = uVar6 - 8;
        uStack_157 = uStack_157 + 8;
        pbVar7 = pbVar7 + 1;
      } while (uVar6 != 0);
    }
    (**(code **)(*(int *)*DAT_711f6d58 + 0x3c))((int *)*DAT_711f6d58,auStack_169,1,7,0);
    if ((cStack_3c != '\0') && (0x800 < (int)uStack_30)) {
      imp_free(puStack_166);
    }
  }
  if (_ext___stack_chk_guard == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_7175e634
// Entry: 0x7175e634 | Size: 784 bytes
// =========================================================================

void FUN_7175e634(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4,
                 int *param_5)

{
  int iVar1;
  int iVar2;
  
  DataMemoryBarrier(0xb);
  if (((DAT_711f6cc4 & 1) == 0) && (iVar1 = cuKsjVZRyspaVsDnqLy(&DAT_711f6cc4), iVar1 != 0)) {
    FUN_7175ead0(&DAT_711f6c98);
    SixizuLbAnqfgRApsCY(&DAT_711f6cc4);
  }
  imp___aeabi_memclr8(&DAT_711f6c98,0x2c);
  DAT_711f6c9c = *param_2;
  DAT_711f6ca0 = param_2[1];
  DAT_711f6ca4 = param_2[2];
  DAT_711f6ca8 = *param_4;
  DAT_711f6cac = param_4[1];
  DAT_711f6cb0 = param_4[2];
  iVar1 = DAT_711f6cc0;
  if (((param_5 != (int *)0x0) && (iVar2 = *param_5, DAT_711f6cc8 = iVar2, iVar2 != 0)) &&
     (iVar1 = iVar2, *(int *)(iVar2 + 0x14) != 0)) {
    if (DAT_711f6d58 != 0) {
      if (*(int *)(DAT_711f6d58 + 0x40c) == 1) {
        imp___aeabi_memclr8(&DAT_711f6cd0,0x40);
        imp___aeabi_memclr8(&DAT_711f6d10,0x40);
        FUN_7141c894(&DAT_711f6d10,*(undefined4 *)(iVar2 + 0x14));
        FUN_7141cccc(&DAT_711f6cd0,&DAT_711f6d10);
        FUN_715eea98(&DAT_711f6cb4,&DAT_711f6cd0,param_4);
        iVar1 = DAT_711f6cc8;
        goto LAB_7175e7b0;
      }
      if (*(int *)(DAT_711f6d58 + 0x40c) == 2) {
        DAT_711f6cb4 = FUN_71ba240c(*param_4,*(undefined4 *)(*(int *)(iVar2 + 0x14) + 0x30));
        FUN_71ba240c(param_4[1],*(undefined4 *)(*(int *)(iVar2 + 0x14) + 0x34));
      }
    }
    DAT_711f6cb4 = 0;
    DAT_711f6cb8 = 0;
    DAT_711f6cbc = 0;
  }
LAB_7175e7b0:
  DAT_711f6cc0 = iVar1;
  if (*(int *)(param_1 + 0x130) == 0) {
    return;
  }
  FUN_715c0b2c(*(int *)(param_1 + 0x130),&DAT_711f6c98);
  return;
}


// =========================================================================
// Function: FUN_7175ead0
// Entry: 0x7175ead0 | Size: 80 bytes
// =========================================================================

int FUN_7175ead0(int param_1)

{
  FUN_7136cdfc(param_1 + 4);
  FUN_7136cdfc(param_1 + 0x10);
  FUN_7136cdfc(param_1 + 0x1c);
  return param_1;
}


// =========================================================================
// Function: FUN_7175ecb4
// Entry: 0x7175ecb4 | Size: 532 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7175ecb4(undefined4 param_1,char param_2,uint param_3,uint param_4,uint param_5,
                 uint param_6)

{
  undefined1 auStack_159 [3];
  byte *pbStack_156;
  undefined4 uStack_147;
  byte bStack_132;
  byte bStack_131;
  byte bStack_130;
  byte bStack_12f;
  byte bStack_12e;
  byte bStack_12d;
  byte bStack_12c;
  byte bStack_12b;
  byte bStack_12a;
  byte bStack_129;
  byte bStack_128;
  byte bStack_127;
  byte bStack_126;
  byte bStack_125;
  byte bStack_124;
  undefined4 uStack_30;
  char cStack_2c;
  int iStack_20;
  int iStack_1c;
  
  iStack_1c = _ext___stack_chk_guard;
  iStack_20 = 0x800;
  cStack_2c = '\x01';
  pbStack_156 = &bStack_132;
  bStack_124 = (byte)(param_6 >> 0x11) & 0x80;
  uStack_30 = 0;
  bStack_125 = (byte)(param_6 >> 9) & 0x80 | (byte)(param_6 >> 0x19);
  bStack_126 = (byte)(param_6 >> 1) & 0x80 | (byte)(param_6 >> 0x10) >> 1;
  bStack_127 = (byte)(param_6 >> 8) >> 1 | (byte)(param_6 << 7);
  bStack_128 = (byte)(param_5 >> 0x11) & 0x80 | (byte)((param_6 & 0xff) >> 1);
  bStack_129 = (byte)(param_5 >> 9) & 0x80 | (byte)(param_5 >> 0x19);
  bStack_12a = (byte)(param_5 >> 1) & 0x80 | (byte)(param_5 >> 0x10) >> 1;
  bStack_12b = (byte)(param_5 >> 8) >> 1 | (byte)(param_5 << 7);
  bStack_12c = (byte)(param_4 >> 0x11) & 0x80 | (byte)((param_5 & 0xff) >> 1);
  bStack_12d = (byte)(param_4 >> 9) & 0x80 | (byte)(param_4 >> 0x19);
  bStack_12e = (byte)(param_4 >> 1) & 0x80 | (byte)(param_4 >> 0x10) >> 1;
  bStack_12f = (byte)(param_4 >> 8) >> 1 | (byte)(param_4 << 7);
  bStack_130 = (byte)(param_3 >> 1) & 0x80 | (byte)((param_4 & 0xff) >> 1);
  bStack_131 = (byte)(param_3 << 7) | (byte)(param_3 >> 9);
  bStack_132 = (byte)((param_3 & 0xff) >> 1) | param_2 << 7;
  uStack_147 = 0x71;
  (**(code **)(*(int *)*DAT_711f6d58 + 0xec))
            ((int *)*DAT_711f6d58,&DAT_70102244,auStack_159,1,9,0,0,0xffffffff,0xffff,0xffff,0);
  if ((cStack_2c != '\0') && (0x800 < iStack_20)) {
    imp_free(pbStack_156);
  }
  if (_ext___stack_chk_guard != iStack_1c) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail();
  }
  return;
}


// =========================================================================
// Function: FUN_7175ef3c
// Entry: 0x7175ef3c | Size: 520 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7175ef3c(undefined4 param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  undefined1 auStack_159 [3];
  byte *pbStack_156;
  undefined4 uStack_147;
  byte bStack_132;
  byte bStack_131;
  byte bStack_130;
  byte bStack_12f;
  byte bStack_12e;
  byte bStack_12d;
  byte bStack_12c;
  byte bStack_12b;
  byte bStack_12a;
  byte bStack_129;
  byte bStack_128;
  byte bStack_127;
  byte bStack_126;
  byte bStack_125;
  byte bStack_124;
  undefined4 uStack_30;
  char cStack_2c;
  int iStack_20;
  int iStack_1c;
  
  iStack_1c = _ext___stack_chk_guard;
  iStack_20 = 0x800;
  cStack_2c = '\x01';
  pbStack_156 = &bStack_132;
  uStack_30 = 0;
  bStack_124 = (byte)(param_5 >> 0x11) & 0x80;
  bStack_125 = (byte)(param_5 >> 9) & 0x80 | (byte)(param_5 >> 0x19);
  bStack_126 = (byte)(param_5 >> 1) & 0x80 | (byte)(param_5 >> 0x10) >> 1;
  bStack_127 = (byte)(param_5 >> 8) >> 1 | (byte)(param_5 << 7);
  bStack_128 = (byte)(param_4 >> 0x11) & 0x80 | (byte)((param_5 & 0xff) >> 1);
  bStack_129 = (byte)(param_4 >> 9) & 0x80 | (byte)(param_4 >> 0x19);
  bStack_12a = (byte)(param_4 >> 1) & 0x80 | (byte)(param_4 >> 0x10) >> 1;
  bStack_12b = (byte)(param_4 >> 8) >> 1 | (byte)(param_4 << 7);
  bStack_12c = (byte)(param_3 >> 0x11) & 0x80 | (byte)((param_4 & 0xff) >> 1);
  bStack_12d = (byte)(param_3 >> 9) & 0x80 | (byte)(param_3 >> 0x19);
  bStack_12e = (byte)(param_3 >> 1) & 0x80 | (byte)(param_3 >> 0x10) >> 1;
  bStack_12f = (byte)(param_3 >> 8) >> 1 | (byte)(param_3 << 7);
  bStack_130 = (byte)(param_2 >> 1) & 0x80 | (byte)((param_3 & 0xff) >> 1);
  bStack_131 = (byte)(param_2 << 7) | (byte)(param_2 >> 9);
  bStack_132 = (byte)(param_2 >> 1) | 0x80;
  uStack_147 = 0x71;
  (**(code **)(*(int *)*DAT_711f6d58 + 0xec))
            ((int *)*DAT_711f6d58,&DAT_70102248,auStack_159,1,9,0,0,0xffffffff,0xffff,0xffff,0);
  if ((cStack_2c != '\0') && (0x800 < iStack_20)) {
    imp_free(pbStack_156);
  }
  if (_ext___stack_chk_guard != iStack_1c) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail();
  }
  return;
}


// =========================================================================
// Function: FUN_7175f1b8
// Entry: 0x7175f1b8 | Size: 864 bytes
// =========================================================================

undefined4 FUN_7175f1b8(int param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  bool bVar8;
  
  if ((DAT_711f6d58 != 0 && param_3 != 0) && (param_2 < 0x7d2)) {
    bVar8 = *(int *)(DAT_711f6d58 + 0xac) == 0;
    iVar4 = 0;
    if (!bVar8) {
      iVar4 = *(int *)(param_3 + 0xc);
    }
    if (bVar8 || iVar4 == 0) {
      return 0;
    }
    iVar4 = FUN_71602de4(param_3);
    if (((iVar4 != 0) || (iVar4 = FUN_7160358c(param_3), iVar4 != 0)) ||
       (iVar4 = FUN_71603620(param_3), iVar4 != 0)) {
      return 0;
    }
    uVar1 = FUN_715613f8(param_3);
    uVar7 = 0x42b40000;
    iVar4 = FUN_71ba2d70(uVar1,0x42b40000);
    if (iVar4 != 0) {
      return 0;
    }
    iVar4 = *(int *)(param_3 + 0xc);
    iVar3 = *(int *)(iVar4 + 0x468);
    if ((iVar3 == 0) || (*(int *)(iVar3 + 0x59c) != 0)) {
      iVar3 = *(int *)(iVar4 + 0x46c);
      if ((iVar3 == 0) || (*(int *)(iVar3 + 0x59c) != 0)) {
        iVar3 = *(int *)(iVar4 + 0x470);
        if ((iVar3 == 0) || (*(int *)(iVar3 + 0x59c) != 0)) {
          iVar3 = *(int *)(iVar4 + 0x474);
          if ((iVar3 == 0) || (*(int *)(iVar3 + 0x59c) != 0)) {
            iVar3 = *(int *)(iVar4 + 0x478);
            if ((iVar3 == 0) || (*(int *)(iVar3 + 0x59c) != 0)) {
              iVar3 = *(int *)(iVar4 + 0x47c);
              if ((iVar3 == 0) || (*(int *)(iVar3 + 0x59c) != 0)) {
                iVar3 = *(int *)(iVar4 + 0x480);
                if ((iVar3 == 0) || (*(int *)(iVar3 + 0x59c) != 0)) {
                  iVar3 = *(int *)(DAT_711f6d58 + 0xac);
                  iVar4 = DAT_711f6d58;
                  if (iVar3 != 0) {
                    iVar4 = *(int *)(DAT_711f6d58 + 4);
                  }
                  if (iVar3 == 0 || iVar4 == 0) {
                    return 0;
                  }
                  if (*(int *)(param_1 + 0x130) != 0) {
                    uVar7 = FUN_715c16ac(*(int *)(param_1 + 0x130),param_3);
                  }
                  iVar4 = FUN_71ba2d70(uVar7,0x42b40000);
                  uVar6 = (uint)*(ushort *)(iVar3 + 0x1f68);
                  if (iVar4 != 0) {
                    uVar7 = 0x42b40000;
                  }
                  uVar5 = 0;
                  do {
                    iVar4 = *(int *)(iVar3 + 0x1f8c + uVar5 * 4);
                    if ((((iVar4 != 0) && (*(char *)(iVar4 + 0x1c) == '\0')) &&
                        (iVar4 = *(int *)(iVar4 + 0x10), iVar4 != 0)) &&
                       (iVar2 = thunk_FUN_715609f0(iVar4,param_2), iVar2 != 0)) {
                      uVar1 = FUN_715c16ac(iVar4,param_3);
                      iVar4 = FUN_71ba2d10(uVar1,uVar7);
                      if (iVar4 != 0) {
                        uVar6 = uVar5;
                        uVar7 = uVar1;
                      }
                    }
                    uVar5 = uVar5 + 1;
                  } while (uVar5 != 0x3ec);
                  uVar7 = 0;
                  if ((uVar6 & 0xffff) != (uint)*(ushort *)(iVar3 + 0x1f68)) {
                    return 0;
                  }
                  goto LAB_7175f470;
                }
                uVar7 = 7;
              }
              else {
                uVar7 = 6;
              }
            }
            else {
              uVar7 = 5;
            }
          }
          else {
            uVar7 = 4;
          }
        }
        else {
          uVar7 = 3;
        }
      }
      else {
        uVar7 = 2;
      }
    }
    else {
      uVar7 = 1;
    }
    if (iVar3 == *(int *)(*(int *)(param_1 + 0x130) + 0x8c)) {
LAB_7175f470:
      FUN_7175f5ec(0,param_2,uVar7);
      return 1;
    }
  }
  return 0;
}


// =========================================================================
// Function: FUN_7175f5ec
// Entry: 0x7175f5ec | Size: 1916 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7175f5ec(undefined4 param_1,uint param_2,undefined1 param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  byte *pbVar11;
  bool bVar12;
  undefined2 uStack_1f0;
  undefined1 uStack_1ee;
  undefined1 auStack_1bd [17];
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_17c;
  uint uStack_178;
  uint uStack_174;
  undefined1 auStack_169 [3];
  undefined1 *puStack_166;
  uint uStack_157;
  undefined1 auStack_142 [258];
  undefined4 uStack_40;
  char cStack_3c;
  uint uStack_30;
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  if ((param_2 < 0x7d1) && (DAT_711f6d58[10] == 0xe)) {
    iVar10 = 0x3e88;
    bVar12 = *(char *)(DAT_711f6d58[1] + param_2 + 0x3e88) != '\0';
    if (bVar12) {
      iVar10 = *(int *)(DAT_711f6d58[1] + param_2 * 4);
    }
    if (bVar12 && iVar10 != 0) {
      iVar3 = *(int *)(iVar10 + 4);
      iVar4 = 0;
      if (iVar3 != 0) {
        iVar4 = *(int *)(iVar3 + 0x14);
      }
      if (iVar3 != 0 && iVar4 != 0) {
        uStack_30 = 0x800;
        uStack_157 = 0;
        puVar9 = (undefined4 *)((uint)&uStack_1f0 | 3);
        uStack_40 = 0;
        cStack_3c = '\x01';
        puStack_166 = auStack_142;
        FUN_7136cdfc(puVar9);
        FUN_7136cdfc(puVar9 + 3);
        FUN_7136cdfc();
        FUN_7136cdfc(puVar9 + 9);
        FUN_7136cdfc(auStack_1bd);
        thunk_FUN_715600f0(iVar10,&uStack_1ac);
        thunk_FUN_715608f0(iVar10,puVar9 + 9);
        thunk_FUN_71560950(iVar10,auStack_1bd);
        puVar9[6] = uStack_17c;
        *puVar9 = uStack_1ac;
        puVar9[1] = uStack_1a8;
        uStack_1f0 = (undefined2)param_2;
        puVar9[7] = uStack_178;
        puVar9[8] = uStack_174;
        puVar9[2] = uStack_1a4;
        puVar9[3] = uStack_19c;
        puVar9[4] = uStack_198;
        puVar9[5] = uStack_194;
        uStack_1ee = param_3;
        uVar6 = thunk_FUN_715f68dc(iVar10);
        puVar9[0xf] = uVar6;
        uVar5 = puVar9[9];
        iVar10 = FUN_71ba2cf0(uVar5 & 0x7fffffff,0x7f800000);
        iVar4 = FUN_71ba0408(uVar5 & 0x7fffffff,0x7f800000);
        if (iVar4 == 0 && iVar10 == 0) {
          uVar5 = puVar9[10];
          iVar10 = FUN_71ba2cf0(uVar5 & 0x7fffffff,0x7f800000);
          iVar4 = FUN_71ba0408(uVar5 & 0x7fffffff,0x7f800000);
          if (iVar4 == 0 && iVar10 == 0) {
            uVar5 = puVar9[0xb];
            iVar10 = FUN_71ba2cf0(uVar5 & 0x7fffffff,0x7f800000);
            iVar4 = FUN_71ba0408(uVar5 & 0x7fffffff,0x7f800000);
            if (iVar4 == 0 && iVar10 == 0) {
              uVar5 = puVar9[6];
              iVar10 = FUN_71ba2cf0(uVar5 & 0x7fffffff,0x7f800000);
              iVar4 = FUN_71ba0408(uVar5 & 0x7fffffff,0x7f800000);
              if (iVar4 == 0 && iVar10 == 0) {
                uVar5 = puVar9[7] & 0x7fffffff;
                iVar10 = FUN_71ba2cf0(uVar5,0x7f800000);
                iVar4 = FUN_71ba0408(uVar5,0x7f800000);
                if (iVar4 == 0 && iVar10 == 0) {
                  uVar5 = puVar9[8] & 0x7fffffff;
                  iVar10 = FUN_71ba2cf0(uVar5,0x7f800000);
                  iVar4 = FUN_71ba0408(uVar5,0x7f800000);
                  uVar5 = uStack_30;
                  if (iVar4 == 0 && iVar10 == 0) {
                    uVar7 = uStack_157 + 8;
                    if ((-8 < (int)uStack_157) &&
                       ((int)(uStack_30 - 1) >> 3 < (int)(uStack_157 + 7 >> 3))) {
                      uVar1 = uVar7 * 2;
                      iVar10 = uVar7 * 2;
                      if (puStack_166 == auStack_142) {
                        bVar12 = 0x400 < uVar7;
                        uVar7 = uVar1;
                        if (bVar12) {
                          puStack_166 = (undefined1 *)imp_malloc(iVar10 + 7U >> 3);
                          imp___aeabi_memcpy(puStack_166,auStack_142,(int)(uVar5 + 7) >> 3);
                        }
                      }
                      else {
                        puStack_166 = (undefined1 *)imp_realloc();
                        uVar5 = uStack_30;
                        uVar7 = uVar1;
                      }
                    }
                    uVar1 = uStack_157;
                    if ((int)uVar5 < (int)uVar7) {
                      uStack_30 = uVar7;
                    }
                    uVar5 = uStack_30;
                    uVar7 = uStack_157 & 7;
                    iVar10 = (int)uStack_157 >> 3;
                    if (uVar7 == 0) {
                      puStack_166[iVar10] = 0xd1;
                    }
                    else {
                      puStack_166[iVar10] = puStack_166[iVar10] | (byte)(0xd1 >> uVar7);
                      puStack_166[iVar10 + 1] = (char)(0xd1 << (8 - uVar7 & 0xff));
                    }
                    uVar8 = uStack_157 + 0x220;
                    uVar7 = uStack_157 & 7;
                    uStack_157 = uStack_157 + 8;
                    if (uVar7 == 0) {
                      if ((-0x220 < (int)uVar1) &&
                         ((int)(uStack_30 - 1) >> 3 < (int)(uVar1 + 0x21f >> 3))) {
                        uVar1 = uVar8 >> 2;
                        uVar7 = uVar8 * 2;
                        if (puStack_166 == auStack_142) {
                          bVar12 = 0x400 < uVar8;
                          uVar8 = uVar7;
                          if (bVar12) {
                            puStack_166 = (undefined1 *)imp_malloc(uVar1);
                            imp___aeabi_memcpy(puStack_166,auStack_142,(int)(uVar5 + 7) >> 3);
                          }
                        }
                        else {
                          puStack_166 = (undefined1 *)imp_realloc();
                          uVar5 = uStack_30;
                          uVar8 = uVar7;
                        }
                      }
                      if ((int)uVar5 < (int)uVar8) {
                        uStack_30 = uVar8;
                      }
                      imp___aeabi_memcpy(puStack_166 + ((int)(uStack_157 + 7) >> 3),&uStack_1f0,0x43
                                        );
                      uStack_157 = uStack_157 + 0x218;
                    }
                    else {
                      if ((-0x220 < (int)uVar1) &&
                         ((int)(uStack_30 - 1) >> 3 < (int)(uVar1 + 0x21f >> 3))) {
                        uVar7 = uVar8 * 2;
                        iVar10 = uVar8 * 2;
                        if (puStack_166 == auStack_142) {
                          bVar12 = 0x400 < uVar8;
                          uVar8 = uVar7;
                          if (bVar12) {
                            puStack_166 = (undefined1 *)imp_malloc(iVar10 + 7U >> 3);
                            imp___aeabi_memcpy(puStack_166,auStack_142,(int)(uVar5 + 7) >> 3);
                          }
                        }
                        else {
                          puStack_166 = (undefined1 *)imp_realloc();
                          uVar5 = uStack_30;
                          uVar8 = uVar7;
                        }
                      }
                      if ((int)uVar5 < (int)uVar8) {
                        uStack_30 = uVar8;
                      }
                      uVar7 = 0x218;
                      uVar5 = uStack_157 & 7;
                      pbVar11 = (byte *)&uStack_1f0;
                      do {
                        bVar2 = *pbVar11;
                        iVar10 = (int)uStack_157 >> 3;
                        if (uVar5 == 0) {
                          puStack_166[iVar10] = bVar2;
                        }
                        else {
                          puStack_166[iVar10] = puStack_166[iVar10] | bVar2 >> uVar5;
                          if (8 - uVar5 < uVar7) {
                            puStack_166[iVar10 + 1] = bVar2 << (8 - uVar5 & 0xff);
                          }
                        }
                        uVar7 = uVar7 - 8;
                        uStack_157 = uStack_157 + 8;
                        pbVar11 = pbVar11 + 1;
                      } while (uVar7 != 0);
                    }
                    (**(code **)(*(int *)*DAT_711f6d58 + 0x3c))
                              ((int *)*DAT_711f6d58,auStack_169,1,7,0);
                  }
                }
              }
            }
          }
        }
        if ((cStack_3c != '\0') && (0x800 < (int)uStack_30)) {
          imp_free(puStack_166);
        }
      }
    }
  }
  if (_ext___stack_chk_guard == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_7175ffd8
// Entry: 0x7175ffd8 | Size: 68 bytes
// =========================================================================

void FUN_7175ffd8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  
  iVar1 = FUN_71ba2cf0(param_6,0);
  if ((iVar1 == 0) && (iVar1 = FUN_71ba2cf0(param_7,0), iVar1 == 0)) {
    *(undefined4 *)(param_1 + 0x1dc) = param_2;
    *(undefined4 *)(param_1 + 0x1e0) = param_3;
    *(undefined4 *)(param_1 + 0x1e4) = param_4;
    *(undefined1 *)(param_1 + 0x1d8) = 1;
    *(undefined4 *)(param_1 + 0x1e8) = param_5;
    *(undefined4 *)(param_1 + 0x1ec) = param_6;
    *(undefined4 *)(param_1 + 0x1f0) = param_7;
  }
  return;
}


// =========================================================================
// Function: FUN_717600e4
// Entry: 0x717600e4 | Size: 8 bytes
// =========================================================================

void FUN_717600e4(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x200) = param_2;
  return;
}


// =========================================================================
// Function: FUN_71760104
// Entry: 0x71760104 | Size: 8 bytes
// =========================================================================

undefined1 FUN_71760104(int param_1)

{
  return *(undefined1 *)(param_1 + 0x200);
}


// =========================================================================
// Function: FUN_71760144
// Entry: 0x71760144 | Size: 8 bytes
// =========================================================================

undefined1 FUN_71760144(int param_1)

{
  return *(undefined1 *)(param_1 + 0x201);
}


// =========================================================================
// Function: FUN_71760164
// Entry: 0x71760164 | Size: 636 bytes
// =========================================================================

void FUN_71760164(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 auStack_a8 [48];
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*(int *)(param_1 + 0x130) != 0) {
    iVar1 = FUN_71ba2cf0(*(undefined4 *)(param_1 + 0x214),0);
    if (((iVar1 != 0) && (iVar1 = FUN_71ba2cf0(*(undefined4 *)(param_1 + 0x218),0), iVar1 != 0)) &&
       (iVar1 = FUN_71ba2cf0(*(undefined4 *)(param_1 + 0x21c),0), iVar1 != 0)) {
      *(undefined4 *)(param_1 + 0x224) = 0;
      *(undefined2 *)(param_1 + 0x210) = 0;
      *(undefined4 *)(param_1 + 0x204) = 0xffff;
      return;
    }
    if (*(int *)(param_1 + 0x224) != 0) {
      FUN_7136cdfc(&uStack_b4);
      FUN_7136cdfc(&uStack_c0);
      thunk_FUN_715600f0(*(undefined4 *)(param_1 + 0x130),&uStack_68);
      iVar1 = *(int *)(param_1 + 0x20c);
      iVar2 = *(int *)(param_1 + 0x204);
      if (((iVar1 != 0) && (iVar2 < 0x7d1)) ||
         ((iVar1 != 0 && ((2000 < iVar2 && (iVar2 != 0xffff)))))) {
        thunk_FUN_715600f0(iVar1,auStack_a8);
        thunk_FUN_715608f0(*(undefined4 *)(param_1 + 0x20c),&uStack_b4);
        thunk_FUN_71560950(*(undefined4 *)(param_1 + 0x20c),&uStack_c0);
        if (*(int *)(param_1 + 0x224) == 2) {
          FUN_715eea98(&uStack_78,auStack_a8,(undefined4 *)(param_1 + 0x214));
          uStack_38 = uStack_78;
          uStack_34 = uStack_74;
          uStack_30 = uStack_70;
          FUN_7156063c(*(undefined4 *)(param_1 + 0x130),uStack_68,uStack_64,uStack_60,uStack_5c,
                       uStack_58,uStack_54,uStack_50,uStack_4c,uStack_48,uStack_44,uStack_40,
                       uStack_3c,uStack_78,uStack_74,uStack_70,uStack_2c);
          thunk_FUN_71560058(*(undefined4 *)(param_1 + 0x130),uStack_b4,uStack_b0,uStack_ac);
          thunk_FUN_715600a4(*(undefined4 *)(param_1 + 0x130),uStack_c0,uStack_bc,uStack_b8);
        }
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_717604c8
// Entry: 0x717604c8 | Size: 60 bytes
// =========================================================================

void FUN_717604c8(int param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  
  *(undefined2 *)(param_1 + 0x228) = param_2;
  *(undefined4 *)(param_1 + 0x22c) = param_3;
  *(undefined4 *)(param_1 + 0x230) = param_4;
  *(undefined4 *)(param_1 + 0x234) = param_5;
  uVar1 = FUN_71886108();
  *(undefined4 *)(param_1 + 0x238) = uVar1;
  return;
}


// =========================================================================
// Function: FUN_7176052c
// Entry: 0x7176052c | Size: 124 bytes
// =========================================================================

void FUN_7176052c(undefined2 *param_1,undefined2 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = *param_2;
  uVar2 = *(undefined4 *)(param_2 + 1);
  uVar1 = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 2) = uVar2;
  uVar2 = *(undefined4 *)(param_2 + 7);
  uVar3 = *(undefined4 *)(param_2 + 9);
  uVar1 = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 10) = uVar3;
  *(undefined4 *)(param_1 + 8) = uVar2;
  uVar2 = *(undefined4 *)(param_2 + 0xf);
  uVar1 = *(undefined4 *)(param_2 + 0x11);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x13);
  *(undefined4 *)(param_1 + 0x12) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  uVar2 = *(undefined4 *)(param_2 + 0x17);
  uVar1 = *(undefined4 *)(param_2 + 0x19);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x15);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1a) = uVar1;
  return;
}


// =========================================================================
// Function: wqBtiMYk_tCPOO
// Entry: 0x71760684 | Size: 1632 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wqBtiMYk_tCPOO(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                   undefined4 param_6,int param_7,int param_8,undefined1 param_9)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int *piVar18;
  int iStack_98;
  byte bStack_94;
  undefined2 uStack_93;
  undefined1 uStack_91;
  uint uStack_90;
  uint uStack_8c;
  int iStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  int iStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  int iStack_68;
  int iStack_64;
  undefined1 uStack_60;
  uint uStack_5c;
  int iStack_58;
  int iStack_54;
  undefined2 uStack_50;
  undefined1 uStack_4e;
  undefined2 uStack_4c;
  undefined1 uStack_4a;
  undefined2 uStack_48;
  undefined1 uStack_46;
  undefined2 uStack_44;
  undefined1 uStack_42;
  undefined4 uStack_40;
  uint uStack_3c;
  uint uStack_38;
  int *piStack_30;
  int iStack_28;
  
  iStack_28 = _ext___stack_chk_guard;
  uStack_4c = 0;
  uStack_4a = 0;
  uStack_50 = 0;
  uStack_4e = 0;
  uVar12 = imp_strlen(param_2);
  if (0xfffffff7 < uVar12) goto LAB_71760b8c;
  if (uVar12 < 0xb) {
    uStack_40 = CONCAT31(uStack_40._1_3_,(char)(uVar12 << 1));
    uVar17 = (uint)&uStack_40 | 1;
    if (uVar12 != 0) goto LAB_71760724;
  }
  else {
    uVar17 = thunk_MwhHq((uVar12 | 7) + 1);
    uStack_40 = (uVar12 | 7) + 2;
    uStack_3c = uVar12;
    uStack_38 = uVar17;
LAB_71760724:
    imp___aeabi_memcpy(uVar17,param_2,uVar12);
  }
  uVar9 = uStack_38;
  uVar2 = uStack_3c;
  uVar6 = uStack_40;
  *(undefined1 *)(uVar17 + uVar12) = 0;
  uStack_44 = uStack_40._1_2_;
  uStack_42 = uStack_40._3_1_;
  uVar12 = imp_strlen(param_4);
  if (0xfffffff7 < uVar12) goto LAB_71760b8c;
  if (uVar12 < 0xb) {
    uStack_40 = CONCAT31(uStack_40._1_3_,(char)(uVar12 << 1));
    uVar17 = (uint)&uStack_40 | 1;
    if (uVar12 != 0) goto LAB_717607c0;
  }
  else {
    uVar17 = thunk_MwhHq((uVar12 | 7) + 1);
    uStack_40 = (uVar12 | 7) + 2;
    uStack_3c = uVar12;
    uStack_38 = uVar17;
LAB_717607c0:
    imp___aeabi_memcpy(uVar17,param_4,uVar12);
  }
  uVar10 = uStack_38;
  uVar3 = uStack_3c;
  uVar7 = uStack_40;
  *(undefined1 *)(uVar17 + uVar12) = 0;
  uStack_48 = uStack_40._1_2_;
  uStack_46 = uStack_40._3_1_;
  uVar12 = imp_strlen(param_6);
  if (0xfffffff7 < uVar12) {
LAB_71760b8c:
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_40);
  }
  if (uVar12 < 0xb) {
    uStack_40 = CONCAT31(uStack_40._1_3_,(char)(uVar12 << 1));
    uVar17 = (uint)&uStack_40 | 1;
    if (uVar12 != 0) goto LAB_71760854;
  }
  else {
    uVar17 = thunk_MwhHq((uVar12 | 7) + 1);
    uStack_40 = (uVar12 | 7) + 2;
    uStack_3c = uVar12;
    uStack_38 = uVar17;
LAB_71760854:
    imp___aeabi_memcpy(uVar17,param_6,uVar12);
  }
  uVar11 = uStack_38;
  uVar4 = uStack_3c;
  uVar8 = uStack_40;
  *(undefined1 *)(uVar17 + uVar12) = 0;
  uVar1 = DAT_712017fc;
  piVar18 = (int *)((uint)&iStack_98 | 4);
  uStack_4c = uStack_40._1_2_;
  uStack_4a = uStack_40._3_1_;
  uVar5 = (undefined1)uStack_40;
  iStack_98 = param_1;
  if ((uVar6 & 1) == 0) {
    bStack_94 = (byte)uVar6;
    uStack_93 = uStack_44;
    uStack_91 = uStack_42;
    uStack_8c = uVar9;
    uStack_90 = uVar2;
  }
  else {
    FUN_712f6d58(piVar18,uVar9,uVar2);
  }
  iStack_88 = param_3;
  if ((uVar7 & 1) == 0) {
    uStack_84 = CONCAT13(uStack_46,CONCAT21(uStack_48,(char)uVar7));
    uStack_7c = uVar10;
    uStack_80 = uVar3;
  }
  else {
    FUN_712f6d58(&uStack_84,uVar10,uVar3);
  }
  iStack_78 = param_5;
  if ((uVar8 & 1) == 0) {
    uStack_74 = CONCAT31(CONCAT12(uStack_4a,uStack_4c),uVar5);
    uStack_6c = uVar11;
    uStack_70 = uVar4;
  }
  else {
    FUN_712f6d58(&uStack_74,uVar11,uVar4);
  }
  iVar14 = iStack_78;
  uStack_5c = (uint)CONCAT12(uStack_4e,uStack_50) << 8;
  uStack_60 = param_9;
  iStack_64 = param_8;
  iStack_68 = param_7;
  iStack_54 = 0;
  iStack_58 = 0;
  piStack_30 = (int *)thunk_MwhHq(0x4c);
  uVar4 = uStack_6c;
  uVar3 = uStack_70;
  uVar2 = uStack_74;
  uVar17 = uStack_7c;
  uVar12 = uStack_80;
  iVar16 = *piVar18;
  iVar15 = piVar18[1];
  iVar13 = piVar18[2];
  *piVar18 = 0;
  piVar18[1] = 0;
  piVar18[2] = 0;
  piStack_30[3] = iVar15;
  piStack_30[4] = iVar13;
  piStack_30[6] = uStack_84;
  piStack_30[5] = iStack_88;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  piStack_30[10] = uVar2;
  piStack_30[0xb] = uVar3;
  piStack_30[0xc] = uVar4;
  piStack_30[0xd] = iStack_68;
  piStack_30[2] = iVar16;
  *(undefined1 *)(piStack_30 + 0xf) = uStack_60;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  piStack_30[9] = iVar14;
  piVar18 = &uStack_40;
  *piStack_30 = (int)&DAT_70b0f2cc;
  piStack_30[1] = iStack_98;
  piStack_30[7] = uVar12;
  piStack_30[8] = uVar17;
  piStack_30[0xe] = iStack_64;
  piStack_30[0x10] = uStack_5c;
  piStack_30[0x11] = iStack_58;
  piStack_30[0x12] = iStack_54;
  iStack_54 = 0;
  iStack_58 = 0;
  uStack_5c = 0;
  FUN_717ccb10(uVar1,piVar18);
  if (piStack_30 == piVar18) {
    iVar14 = 0x10;
  }
  else {
    iVar14 = 0x14;
    piVar18 = piStack_30;
    if (piStack_30 == (int *)0x0) goto LAB_71760ae0;
  }
  (**(code **)(*piVar18 + iVar14))();
LAB_71760ae0:
  if ((uStack_5c & 1) != 0) {
    qNQrlu(iStack_54);
  }
  if ((uStack_74 & 1) != 0) {
    qNQrlu(uStack_6c);
  }
  if ((uStack_84 & 1) != 0) {
    qNQrlu(uStack_7c);
  }
  if ((bStack_94 & 1) != 0) {
    qNQrlu(uStack_8c);
  }
  if ((uVar8 & 1) != 0) {
    qNQrlu(uVar11);
  }
  if ((uVar7 & 1) != 0) {
    qNQrlu(uVar10);
  }
  if ((uVar6 & 1) != 0) {
    qNQrlu(uVar9);
  }
  if (_ext___stack_chk_guard == iStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: kCJUwWaSxEhYpKZWS
// Entry: 0x71760eb0 | Size: 248 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void kCJUwWaSxEhYpKZWS(void)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *apuStack_30 [4];
  int *piStack_20;
  int iStack_14;
  
  piStack_20 = (int *)apuStack_30;
  ppuVar1 = apuStack_30;
  iStack_14 = _ext___stack_chk_guard;
  apuStack_30[0] = &DAT_70b0f2f0;
  FUN_717ccb10(DAT_712017fc,apuStack_30);
  if ((undefined **)piStack_20 == apuStack_30) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = 0x14;
    ppuVar1 = (undefined **)piStack_20;
    if (piStack_20 == (int *)0x0) goto LAB_71760f2c;
  }
  (**(code **)((int)*ppuVar1 + iVar2))();
LAB_71760f2c:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: nhfRGKThNeUpaSaY
// Entry: 0x71761020 | Size: 248 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void nhfRGKThNeUpaSaY(void)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *apuStack_30 [4];
  int *piStack_20;
  int iStack_14;
  
  piStack_20 = (int *)apuStack_30;
  ppuVar1 = apuStack_30;
  iStack_14 = _ext___stack_chk_guard;
  apuStack_30[0] = &DAT_70b0f314;
  FUN_717ccb10(DAT_712017fc,apuStack_30);
  if ((undefined **)piStack_20 == apuStack_30) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = 0x14;
    ppuVar1 = (undefined **)piStack_20;
    if (piStack_20 == (int *)0x0) goto LAB_7176109c;
  }
  (**(code **)((int)*ppuVar1 + iVar2))();
LAB_7176109c:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: EiXstlWDCfJcuEc_teMJ_EXcp
// Entry: 0x71761190 | Size: 56 bytes
// =========================================================================

void EiXstlWDCfJcuEc_teMJ_EXcp(void)

{
  if (DAT_711f6d58 == 0) {
    return;
  }
  DataMemoryBarrier(0xb);
  *(undefined1 *)(DAT_711f6d58 + 0x12d) = 1;
  DataMemoryBarrier(0xb);
  return;
}


// =========================================================================
// Function: _YiOZujnVZRtgDaeliNNJORtM
// Entry: 0x717611ec | Size: 56 bytes
// =========================================================================

void _YiOZujnVZRtgDaeliNNJORtM(void)

{
  if (DAT_711f6d58 == 0) {
    return;
  }
  DataMemoryBarrier(0xb);
  *(undefined1 *)(DAT_711f6d58 + 0x12d) = 0;
  DataMemoryBarrier(0xb);
  return;
}


// =========================================================================
// Function: uAMSCYJYrBCpQPvFcAPlVC
// Entry: 0x71761248 | Size: 56 bytes
// =========================================================================

bool uAMSCYJYrBCpQPvFcAPlVC(void)

{
  bool bVar1;
  
  if (DAT_711f6d58 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(int *)(DAT_711f6d58 + 0x28) == 0xe;
  }
  return bVar1;
}


// =========================================================================
// Function: FUN_717612a4
// Entry: 0x717612a4 | Size: 132 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x71764794) */
/* WARNING: Removing unreachable block (ram,0x71765114) */
/* WARNING: Removing unreachable block (ram,0x71763770) */
/* WARNING: Removing unreachable block (ram,0x71763f58) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_717612a4(undefined4 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  int *piVar10;
  char *pcVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  undefined2 *puVar18;
  undefined1 *puVar19;
  uint uVar20;
  uint uVar21;
  int *piVar22;
  uint *puVar23;
  uint *puVar24;
  int *piVar25;
  byte *pbVar26;
  undefined4 *puVar27;
  uint *puVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  int *extraout_r2;
  uint uVar35;
  int *piVar36;
  uint uVar37;
  uint *puVar38;
  uint *puVar39;
  uint *puVar40;
  uint *puVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  int iVar46;
  uint *puVar47;
  uint uVar48;
  uint uVar49;
  int *piVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint *puVar54;
  uint *puVar55;
  uint uVar56;
  uint uVar57;
  uint *puVar58;
  uint uVar59;
  uint uVar60;
  bool bVar61;
  uint auStack_f8 [2];
  byte *pbStack_f0;
  uint auStack_ec [3];
  uint *puStack_e0;
  undefined4 *puStack_dc;
  undefined4 *puStack_d8;
  uint *puStack_d4;
  uint *puStack_d0;
  uint *puStack_cc;
  int *piStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  undefined4 *puStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  int *piStack_9c;
  uint *puStack_98;
  uint *puStack_94;
  undefined4 uStack_90;
  undefined1 auStack_8c [96];
  int iStack_2c;
  
  puVar24 = auStack_f8;
  puVar54 = auStack_f8;
  puVar55 = auStack_f8;
  puVar38 = auStack_f8;
  puVar39 = auStack_f8;
  puVar40 = auStack_f8;
  puVar41 = auStack_f8;
  puVar28 = auStack_f8;
  puVar47 = auStack_f8;
  puVar58 = auStack_f8;
  iStack_2c = _ext___stack_chk_guard;
  param_1[0xac] = 0;
  puStack_d8 = param_1 + 0xac;
  *(undefined2 *)(param_1 + 0x4b) = 0;
  param_1[0xad] = 0;
  param_1[0x4a] = 0;
  while( true ) {
    uVar20 = puVar24[1] ^ 0x679b29b;
    uVar9 = *puVar24 ^ 0x6a4dab1f | uVar20;
    bVar61 = uVar9 == 0;
    if (bVar61) {
      uVar20 = puVar24[3] ^ 0xfcc126c8;
      uVar9 = puVar24[2] ^ 0x6efdd0cf;
    }
    if ((bVar61 && (uVar9 == 0 && uVar20 == 0)) &&
       (puVar24[4] == 0xbefc55d6 && puVar24[5] == 0x370f3a77)) break;
    puVar24 = puVar24 + 1;
  }
  puStack_98 = (uint *)puVar24[0xc017];
  if (puStack_98 == (uint *)0x0) {
    puStack_98 = (uint *)thunk_MwhHq(0xc);
    puStack_98[1] = 0;
    puStack_98[2] = 0;
    *puStack_98 = (uint)(puStack_98 + 1);
    puVar24[0xc017] = (uint)puStack_98;
  }
  puVar23 = param_1 + 0xae;
  uVar21 = 0;
  uVar60 = 1;
  uVar20 = 0x56d677d7;
  puVar24 = puVar23;
  uVar9 = 0x27d4eb7f;
  do {
    if (uVar21 == 0 && (7 < uVar60) <= uVar21) {
      if (uVar21 == 0 && (3 < uVar60) <= uVar21) {
        if (uVar60 == 0 && uVar21 == 0) break;
        lVar1 = (ulonglong)(uint)(byte)*puVar24 * 0x165667c5;
        uVar35 = (uint)lVar1 ^ uVar20;
        uVar9 = (uint)(byte)*puVar24 * 0x27d4eb2f + (int)((ulonglong)lVar1 >> 0x20) ^ uVar9;
        uVar45 = uVar35 << 0xb | uVar9 >> 0x15;
        lVar1 = (ulonglong)uVar45 * 0x85ebca87;
        uVar20 = (uint)lVar1;
        iVar46 = 1;
        uVar35 = (uVar9 << 0xb | uVar35 >> 0x15) * -0x7a143579 +
                 uVar45 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20);
        uVar49 = 0xffffffff;
      }
      else {
        lVar1 = (ulonglong)*puVar24 * 0x85ebca87;
        uVar35 = (uint)lVar1 ^ uVar20;
        uVar9 = *puVar24 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20) ^ uVar9;
        uVar49 = uVar35 << 0x17 | uVar9 >> 9;
        lVar1 = (ulonglong)uVar49 * 0x27d4eb4f;
        uVar45 = (uint)lVar1;
        uVar20 = uVar45 + 0x9e3779f9;
        iVar46 = 4;
        uVar35 = (uVar9 << 0x17 | uVar35 >> 9) * 0x27d4eb4f +
                 uVar49 * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20) + 0x165667b1 +
                 (uint)(0x61c88606 < uVar45);
        uVar49 = 0xfffffffc;
      }
    }
    else {
      uVar45 = *puVar24;
      uVar35 = (uint)((ulonglong)uVar45 * 0x80000000) |
               puVar24[1] * 0x27d4eb4f +
               uVar45 * -0x3d4d51c3 + (int)((ulonglong)uVar45 * 0x27d4eb4f >> 0x20) >> 1;
      lVar1 = (ulonglong)uVar35 * 0x85ebca87;
      uVar35 = (puVar24[1] * -0x80000000 +
               uVar45 * -0x6c158a59 + (int)((ulonglong)uVar45 * 0x80000000 >> 0x20)) * -0x7a143579 +
               uVar35 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20) ^ uVar9;
      uVar45 = (uint)lVar1 ^ uVar20;
      uVar48 = uVar45 << 0x1b | uVar35 >> 5;
      lVar1 = (ulonglong)uVar48 * 0x85ebca87;
      uVar44 = (uint)lVar1;
      uVar49 = 0xfffffff8;
      uVar20 = uVar44 + 0xc2b2ae63;
      iVar46 = 8;
      uVar35 = (uVar35 << 0x1b | uVar45 >> 5) * -0x7a143579 +
               uVar48 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20) + -0x7a143589 +
               (uint)(0x3d4d519c < uVar44);
      puStack_94 = (uint *)uVar9;
    }
    bVar61 = CARRY4(uVar49,uVar60);
    uVar60 = uVar49 + uVar60;
    puVar24 = (uint *)((int)puVar24 + iVar46);
    uVar21 = (uVar21 - 1) + (uint)bVar61;
    uVar9 = uVar35;
  } while( true );
  uVar20 = uVar20 ^ uVar9 >> 1;
  lVar1 = (ulonglong)uVar20 * 0x27d4eb4f;
  uVar21 = (uint)lVar1;
  uVar9 = uVar9 * 0x27d4eb4f + uVar20 * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20);
  uVar21 = (uVar21 >> 0x1d | uVar9 * 8) ^ uVar21;
  lVar1 = (ulonglong)uVar21 * 0x9e3779f9;
  uVar9 = (uVar9 ^ uVar9 >> 0x1d) * -0x61c88607 +
          uVar21 * 0x165667b1 + (int)((ulonglong)lVar1 >> 0x20);
  piVar22 = (int *)(puStack_98 + 1);
  piVar10 = (int *)*piVar22;
  while (piVar36 = piVar22, puStack_d4 = puVar23, puStack_b4 = param_1, piVar10 != (int *)0x0) {
    while (piVar22 = piVar10, (uint *)piVar22[4] <= puVar23) {
      if (puVar23 <= (uint *)piVar22[4]) goto LAB_717616bc;
      piVar10 = (int *)piVar22[1];
      if ((int *)piVar22[1] == (int *)0x0) {
        piVar36 = piVar22 + 1;
        goto LAB_71761658;
      }
    }
    piVar10 = (int *)*piVar22;
  }
LAB_71761658:
  piVar10 = (int *)thunk_MwhHq(0x24);
  puVar24 = puStack_98;
  piVar10[4] = (int)puVar23;
  piVar10[1] = 0;
  piVar10[2] = (int)piVar22;
  *piVar10 = 0;
  *piVar36 = (int)piVar10;
  piVar22 = piVar10;
  if (*(int *)*puStack_98 != 0) {
    *puStack_98 = *(int *)*puStack_98;
    piVar22 = (int *)*piVar36;
  }
  FUN_712f807c(puStack_98[1],piVar22);
  puVar24[2] = puVar24[2] + 1;
  piVar22 = piVar10;
LAB_717616bc:
  puVar27 = puStack_b4;
  piVar22[5] = (int)puStack_d4;
  piVar22[6] = 1;
  piVar22[7] = uVar9 ^ (uint)lVar1;
  piVar22[8] = uVar9;
  puStack_b4[0xaf] = 0;
  puStack_b4[0xb1] = 0;
  puStack_b4[0xb2] = 0;
  puStack_b4[0xb3] = 0;
  puStack_b4[0xb5] = 0;
  puStack_b4[0xb6] = 0;
  puStack_b4[0xb7] = 0;
  puStack_b4[0xb9] = 0;
  puStack_b4[0xba] = 0;
  puStack_b4[0xbb] = 0;
  puStack_b4[0xbf] = 0;
  puStack_b4[0xc0] = 0;
  puStack_b4[0xc1] = 0;
  puStack_b4[0xb0] = 0xffffffff;
  FUN_71766cf8(puStack_b4 + 0xc2);
  for (; ((*puVar54 != 0x6a4dab1f || puVar54[1] != 0x679b29b ||
          (puVar54[2] != 0x6efdd0cf || puVar54[3] != -0x33ed938)) ||
         (puVar54[4] != -0x4103aa2a || puVar54[5] != 0x370f3a77)); puVar54 = puVar54 + 1) {
  }
  piVar22 = (int *)puVar54[0xc017];
  if (piVar22 == (int *)0x0) {
    piVar22 = (int *)thunk_MwhHq(0xc);
    piVar22[1] = 0;
    piVar22[2] = 0;
    *piVar22 = (int)(piVar22 + 1);
    puVar54[0xc017] = (uint)piVar22;
  }
  puVar54 = (uint *)((int)puVar27 + 0x341);
  uVar20 = 0;
  uVar60 = 1;
  uVar9 = 0x56d677d7;
  uVar21 = 0x27d4eb7f;
  puStack_98 = (uint *)piVar22;
  puStack_cc = puVar54;
  puVar24 = puVar54;
  do {
    if (uVar20 == 0 && (7 < uVar60) <= uVar20) {
      if (uVar20 == 0 && (3 < uVar60) <= uVar20) {
        if (uVar60 == 0 && uVar20 == 0) break;
        lVar1 = (ulonglong)(uint)(byte)*puVar24 * 0x165667c5;
        uVar35 = (uint)lVar1 ^ uVar9;
        uVar21 = (uint)(byte)*puVar24 * 0x27d4eb2f + (int)((ulonglong)lVar1 >> 0x20) ^ uVar21;
        uVar45 = uVar35 << 0xb | uVar21 >> 0x15;
        lVar1 = (ulonglong)uVar45 * 0x85ebca87;
        uVar9 = (uint)lVar1;
        iVar46 = 1;
        uVar21 = (uVar21 << 0xb | uVar35 >> 0x15) * -0x7a143579 +
                 uVar45 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20);
        uVar35 = 0xffffffff;
      }
      else {
        lVar1 = (ulonglong)*puVar24 * 0x85ebca87;
        uVar35 = (uint)lVar1 ^ uVar9;
        uVar21 = *puVar24 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20) ^ uVar21;
        uVar49 = uVar35 << 0x17 | uVar21 >> 9;
        lVar1 = (ulonglong)uVar49 * 0x27d4eb4f;
        uVar45 = (uint)lVar1;
        uVar9 = uVar45 + 0x9e3779f9;
        iVar46 = 4;
        uVar21 = (uVar21 << 0x17 | uVar35 >> 9) * 0x27d4eb4f +
                 uVar49 * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20) + 0x165667b1 +
                 (uint)(0x61c88606 < uVar45);
        uVar35 = 0xfffffffc;
      }
    }
    else {
      uVar49 = *puVar24;
      puStack_94 = (uint *)uVar20;
      uVar35 = (uint)((ulonglong)uVar49 * 0x80000000) |
               puVar24[1] * 0x27d4eb4f +
               uVar49 * -0x3d4d51c3 + (int)((ulonglong)uVar49 * 0x27d4eb4f >> 0x20) >> 1;
      lVar1 = (ulonglong)uVar35 * 0x85ebca87;
      uVar45 = (uint)lVar1 ^ uVar9;
      uVar21 = (puVar24[1] * -0x80000000 +
               uVar49 * -0x6c158a59 + (int)((ulonglong)uVar49 * 0x80000000 >> 0x20)) * -0x7a143579 +
               uVar35 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20) ^ uVar21;
      uVar44 = uVar45 << 0x1b | uVar21 >> 5;
      lVar1 = (ulonglong)uVar44 * 0x85ebca87;
      uVar49 = (uint)lVar1;
      uVar35 = 0xfffffff8;
      uVar9 = uVar49 + 0xc2b2ae63;
      iVar46 = 8;
      uVar21 = (uVar21 << 0x1b | uVar45 >> 5) * -0x7a143579 +
               uVar44 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20) + -0x7a143589 +
               (uint)(0x3d4d519c < uVar49);
    }
    bVar61 = CARRY4(uVar35,uVar60);
    uVar60 = uVar35 + uVar60;
    puVar24 = (uint *)((int)puVar24 + iVar46);
    uVar20 = (uVar20 - 1) + (uint)bVar61;
  } while( true );
  uVar9 = uVar9 ^ uVar21 >> 1;
  lVar1 = (ulonglong)uVar9 * 0x27d4eb4f;
  uVar20 = (uint)lVar1;
  uVar9 = uVar21 * 0x27d4eb4f + uVar9 * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20);
  uVar20 = (uVar20 >> 0x1d | uVar9 * 8) ^ uVar20;
  lVar1 = (ulonglong)uVar20 * 0x9e3779f9;
  uVar9 = (uVar9 ^ uVar9 >> 0x1d) * -0x61c88607 +
          uVar20 * 0x165667b1 + (int)((ulonglong)lVar1 >> 0x20);
  piVar22 = piVar22 + 1;
  piVar10 = (int *)*piVar22;
  while (piVar36 = piVar22, piVar10 != (int *)0x0) {
    while (piVar22 = piVar10, (uint *)piVar22[4] <= puVar54) {
      if (puVar54 <= (uint *)piVar22[4]) goto LAB_71761b00;
      piVar10 = (int *)piVar22[1];
      if ((int *)piVar22[1] == (int *)0x0) {
        piVar36 = piVar22 + 1;
        goto LAB_71761a98;
      }
    }
    piVar10 = (int *)*piVar22;
  }
LAB_71761a98:
  piVar10 = (int *)thunk_MwhHq(0x24);
  puVar24 = puStack_98;
  piVar10[4] = (int)puVar54;
  *piVar10 = 0;
  piVar10[1] = 0;
  piVar10[2] = (int)piVar22;
  *piVar36 = (int)piVar10;
  piVar22 = piVar10;
  if (*(int *)*puStack_98 != 0) {
    *puStack_98 = *(int *)*puStack_98;
    piVar22 = (int *)*piVar36;
  }
  FUN_712f807c(puStack_98[1],piVar22);
  puVar24[2] = puVar24[2] + 1;
  piVar22 = piVar10;
LAB_71761b00:
  puVar27 = puStack_b4;
  piVar22[7] = uVar9 ^ (uint)lVar1;
  piVar22[6] = 1;
  piVar22[5] = (int)puStack_cc;
  piVar22[8] = uVar9;
  for (; ((*puVar55 != 0x6a4dab1f || puVar55[1] != 0x679b29b ||
          (puVar55[2] != 0x6efdd0cf || puVar55[3] != -0x33ed938)) ||
         (puVar55[4] != -0x4103aa2a || puVar55[5] != 0x370f3a77)); puVar55 = puVar55 + 1) {
  }
  puStack_94 = (uint *)puVar55[0xc017];
  if (puStack_94 == (uint *)0x0) {
    puStack_94 = (uint *)thunk_MwhHq(0xc);
    puStack_94[1] = 0;
    puStack_94[2] = 0;
    *puStack_94 = (uint)(puStack_94 + 1);
    puVar55[0xc017] = (uint)puStack_94;
  }
  puVar54 = (uint *)((int)puVar27 + 0x359);
  uVar60 = 0;
  uVar20 = 1;
  uVar9 = 0x56d677d7;
  uVar21 = 0x27d4eb7f;
  puStack_98 = puVar54;
  puVar24 = puVar54;
  do {
    if (uVar60 == 0 && (7 < uVar20) <= uVar60) {
      if (uVar60 == 0 && (3 < uVar20) <= uVar60) {
        if (uVar20 == 0 && uVar60 == 0) break;
        lVar1 = (ulonglong)(uint)(byte)*puVar24 * 0x165667c5;
        uVar35 = (uint)lVar1 ^ uVar9;
        uVar49 = 0xffffffff;
        uVar21 = (uint)(byte)*puVar24 * 0x27d4eb2f + (int)((ulonglong)lVar1 >> 0x20) ^ uVar21;
        uVar45 = uVar35 << 0xb | uVar21 >> 0x15;
        lVar1 = (ulonglong)uVar45 * 0x85ebca87;
        uVar9 = (uint)lVar1;
        iVar46 = 1;
        uVar21 = (uVar21 << 0xb | uVar35 >> 0x15) * -0x7a143579 +
                 uVar45 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20);
      }
      else {
        lVar1 = (ulonglong)*puVar24 * 0x85ebca87;
        uVar35 = (uint)lVar1 ^ uVar9;
        uVar21 = *puVar24 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20) ^ uVar21;
        uVar49 = uVar35 << 0x17 | uVar21 >> 9;
        lVar1 = (ulonglong)uVar49 * 0x27d4eb4f;
        uVar45 = (uint)lVar1;
        uVar9 = uVar45 + 0x9e3779f9;
        iVar46 = 4;
        uVar21 = (uVar21 << 0x17 | uVar35 >> 9) * 0x27d4eb4f +
                 uVar49 * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20) + 0x165667b1 +
                 (uint)(0x61c88606 < uVar45);
        uVar49 = 0xfffffffc;
      }
    }
    else {
      uVar44 = *puVar24;
      uVar35 = (uint)((ulonglong)uVar44 * 0x80000000) |
               puVar24[1] * 0x27d4eb4f +
               uVar44 * -0x3d4d51c3 + (int)((ulonglong)uVar44 * 0x27d4eb4f >> 0x20) >> 1;
      lVar1 = (ulonglong)uVar35 * 0x85ebca87;
      uVar45 = (uint)lVar1 ^ uVar9;
      uVar49 = 0xfffffff8;
      uVar21 = (puVar24[1] * -0x80000000 +
               uVar44 * -0x6c158a59 + (int)((ulonglong)uVar44 * 0x80000000 >> 0x20)) * -0x7a143579 +
               uVar35 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20) ^ uVar21;
      uVar44 = uVar45 << 0x1b | uVar21 >> 5;
      lVar1 = (ulonglong)uVar44 * 0x85ebca87;
      uVar35 = (uint)lVar1;
      uVar9 = uVar35 + 0xc2b2ae63;
      iVar46 = 8;
      uVar21 = (uVar21 << 0x1b | uVar45 >> 5) * -0x7a143579 +
               uVar44 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20) + -0x7a143589 +
               (uint)(0x3d4d519c < uVar35);
    }
    bVar61 = CARRY4(uVar49,uVar20);
    uVar20 = uVar49 + uVar20;
    puVar24 = (uint *)((int)puVar24 + iVar46);
    uVar60 = (uVar60 - 1) + (uint)bVar61;
  } while( true );
  uVar9 = uVar9 ^ uVar21 >> 1;
  lVar1 = (ulonglong)uVar9 * 0x27d4eb4f;
  uVar20 = (uint)lVar1;
  uVar9 = uVar21 * 0x27d4eb4f + uVar9 * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20);
  uVar20 = (uVar20 >> 0x1d | uVar9 * 8) ^ uVar20;
  lVar1 = (ulonglong)uVar20 * 0x9e3779f9;
  piVar36 = (int *)((uVar9 ^ uVar9 >> 0x1d) * -0x61c88607 +
                   uVar20 * 0x165667b1 + (int)((ulonglong)lVar1 >> 0x20));
  piVar22 = (int *)(puStack_94 + 1);
  uVar9 = (uint)piVar36 ^ (uint)lVar1;
  piVar10 = (int *)*piVar22;
  while (piVar25 = piVar22, piVar10 != (int *)0x0) {
    while (piVar22 = piVar10, (uint *)piVar22[4] <= puVar54) {
      if (puVar54 <= (uint *)piVar22[4]) goto LAB_71761f00;
      piVar10 = (int *)piVar22[1];
      if ((int *)piVar22[1] == (int *)0x0) {
        piVar25 = piVar22 + 1;
        goto LAB_71761e80;
      }
    }
    piVar10 = (int *)*piVar22;
  }
LAB_71761e80:
  uStack_a0 = uVar9;
  piStack_9c = piVar36;
  piVar10 = (int *)thunk_MwhHq(0x24);
  puVar24 = puStack_94;
  piVar10[4] = (int)puVar54;
  piVar10[1] = 0;
  piVar10[2] = (int)piVar22;
  *piVar10 = 0;
  *piVar25 = (int)piVar10;
  piVar22 = piVar10;
  if (*(int *)*puStack_94 != 0) {
    *puStack_94 = *(int *)*puStack_94;
    piVar22 = (int *)*piVar25;
  }
  FUN_712f807c(puStack_94[1],piVar22);
  puVar24[2] = puVar24[2] + 1;
  uVar9 = uStack_a0;
  piVar36 = piStack_9c;
  piVar22 = piVar10;
LAB_71761f00:
  puVar27 = puStack_b4;
  piVar22[7] = uVar9;
  piVar22[6] = 1;
  piVar22[5] = (int)puStack_98;
  piVar22[8] = (int)piVar36;
  while( true ) {
    uVar20 = puVar38[1] ^ 0x679b29b;
    uVar9 = *puVar38 ^ 0x6a4dab1f | uVar20;
    bVar61 = uVar9 == 0;
    if (bVar61) {
      uVar20 = puVar38[3] ^ 0xfcc126c8;
      uVar9 = puVar38[2] ^ 0x6efdd0cf;
    }
    if ((bVar61 && (uVar9 == 0 && uVar20 == 0)) &&
       (puVar38[4] == 0xbefc55d6 && puVar38[5] == 0x370f3a77)) break;
    puVar38 = puVar38 + 1;
  }
  piVar22 = (int *)puVar38[0xc017];
  if (piVar22 == (int *)0x0) {
    piVar22 = (int *)thunk_MwhHq(0xc);
    piVar22[1] = 0;
    piVar22[2] = 0;
    *piVar22 = (int)(piVar22 + 1);
    puVar38[0xc017] = (uint)piVar22;
  }
  puVar54 = (uint *)((int)puVar27 + 0x35a);
  uVar60 = 0;
  uVar20 = 1;
  uVar9 = 0x56d677d7;
  uVar21 = 0x27d4eb7f;
  puStack_94 = (uint *)piVar22;
  puStack_98 = puVar54;
  puVar24 = puVar54;
  do {
    if (uVar60 == 0 && (7 < uVar20) <= uVar60) {
      if (uVar60 == 0 && (3 < uVar20) <= uVar60) {
        if (uVar20 == 0 && uVar60 == 0) break;
        lVar1 = (ulonglong)(uint)(byte)*puVar24 * 0x165667c5;
        uVar35 = (uint)lVar1 ^ uVar9;
        uVar49 = 0xffffffff;
        uVar21 = (uint)(byte)*puVar24 * 0x27d4eb2f + (int)((ulonglong)lVar1 >> 0x20) ^ uVar21;
        uVar45 = uVar35 << 0xb | uVar21 >> 0x15;
        lVar1 = (ulonglong)uVar45 * 0x85ebca87;
        uVar9 = (uint)lVar1;
        iVar46 = 1;
        uVar21 = (uVar21 << 0xb | uVar35 >> 0x15) * -0x7a143579 +
                 uVar45 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20);
      }
      else {
        lVar1 = (ulonglong)*puVar24 * 0x85ebca87;
        uVar35 = (uint)lVar1 ^ uVar9;
        uVar21 = *puVar24 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20) ^ uVar21;
        uVar49 = uVar35 << 0x17 | uVar21 >> 9;
        lVar1 = (ulonglong)uVar49 * 0x27d4eb4f;
        uVar45 = (uint)lVar1;
        uVar9 = uVar45 + 0x9e3779f9;
        iVar46 = 4;
        uVar21 = (uVar21 << 0x17 | uVar35 >> 9) * 0x27d4eb4f +
                 uVar49 * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20) + 0x165667b1 +
                 (uint)(0x61c88606 < uVar45);
        uVar49 = 0xfffffffc;
      }
    }
    else {
      uVar44 = *puVar24;
      uVar35 = (uint)((ulonglong)uVar44 * 0x80000000) |
               puVar24[1] * 0x27d4eb4f +
               uVar44 * -0x3d4d51c3 + (int)((ulonglong)uVar44 * 0x27d4eb4f >> 0x20) >> 1;
      lVar1 = (ulonglong)uVar35 * 0x85ebca87;
      uVar45 = (uint)lVar1 ^ uVar9;
      uVar49 = 0xfffffff8;
      uVar21 = (puVar24[1] * -0x80000000 +
               uVar44 * -0x6c158a59 + (int)((ulonglong)uVar44 * 0x80000000 >> 0x20)) * -0x7a143579 +
               uVar35 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20) ^ uVar21;
      uVar44 = uVar45 << 0x1b | uVar21 >> 5;
      lVar1 = (ulonglong)uVar44 * 0x85ebca87;
      uVar35 = (uint)lVar1;
      uVar9 = uVar35 + 0xc2b2ae63;
      iVar46 = 8;
      uVar21 = (uVar21 << 0x1b | uVar45 >> 5) * -0x7a143579 +
               uVar44 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20) + -0x7a143589 +
               (uint)(0x3d4d519c < uVar35);
    }
    bVar61 = CARRY4(uVar49,uVar20);
    uVar20 = uVar49 + uVar20;
    puVar24 = (uint *)((int)puVar24 + iVar46);
    uVar60 = (uVar60 - 1) + (uint)bVar61;
  } while( true );
  uVar9 = uVar9 ^ uVar21 >> 1;
  lVar1 = (ulonglong)uVar9 * 0x27d4eb4f;
  uVar20 = (uint)lVar1;
  uVar9 = uVar21 * 0x27d4eb4f + uVar9 * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20);
  uVar20 = (uVar20 >> 0x1d | uVar9 * 8) ^ uVar20;
  lVar1 = (ulonglong)uVar20 * 0x9e3779f9;
  piVar36 = (int *)((uVar9 ^ uVar9 >> 0x1d) * -0x61c88607 +
                   uVar20 * 0x165667b1 + (int)((ulonglong)lVar1 >> 0x20));
  piVar22 = piVar22 + 1;
  uVar9 = (uint)piVar36 ^ (uint)lVar1;
  piVar10 = (int *)*piVar22;
  while (piVar25 = piVar22, piVar10 != (int *)0x0) {
    while (piVar22 = piVar10, (uint *)piVar22[4] <= puVar54) {
      if (puVar54 <= (uint *)piVar22[4]) goto LAB_717622f0;
      piVar10 = (int *)piVar22[1];
      if ((int *)piVar22[1] == (int *)0x0) {
        piVar25 = piVar22 + 1;
        goto LAB_71762270;
      }
    }
    piVar10 = (int *)*piVar22;
  }
LAB_71762270:
  uStack_a0 = uVar9;
  piStack_9c = piVar36;
  piVar10 = (int *)thunk_MwhHq(0x24);
  puVar24 = puStack_94;
  piVar10[4] = (int)puVar54;
  piVar10[1] = 0;
  piVar10[2] = (int)piVar22;
  *piVar10 = 0;
  *piVar25 = (int)piVar10;
  piVar22 = piVar10;
  if (*(int *)*puStack_94 != 0) {
    *puStack_94 = *(int *)*puStack_94;
    piVar22 = (int *)*piVar25;
  }
  FUN_712f807c(puStack_94[1],piVar22);
  puVar24[2] = puVar24[2] + 1;
  uVar9 = uStack_a0;
  piVar36 = piStack_9c;
  piVar22 = piVar10;
LAB_717622f0:
  puVar27 = puStack_b4;
  piVar22[7] = uVar9;
  piVar22[6] = 1;
  piVar22[5] = (int)puStack_98;
  piVar22[8] = (int)piVar36;
  while( true ) {
    uVar20 = puVar39[1] ^ 0x679b29b;
    uVar9 = *puVar39 ^ 0x6a4dab1f | uVar20;
    bVar61 = uVar9 == 0;
    if (bVar61) {
      uVar20 = puVar39[3] ^ 0xfcc126c8;
      uVar9 = puVar39[2] ^ 0x6efdd0cf;
    }
    if ((bVar61 && (uVar9 == 0 && uVar20 == 0)) &&
       (puVar39[4] == 0xbefc55d6 && puVar39[5] == 0x370f3a77)) break;
    puVar39 = puVar39 + 1;
  }
  piVar22 = (int *)puVar39[0xc017];
  if (piVar22 == (int *)0x0) {
    piVar22 = (int *)thunk_MwhHq(0xc);
    piVar22[1] = 0;
    piVar22[2] = 0;
    *piVar22 = (int)(piVar22 + 1);
    puVar39[0xc017] = (uint)piVar22;
  }
  puVar54 = (uint *)((int)puVar27 + 0x35b);
  uVar60 = 0;
  uVar20 = 1;
  uVar9 = 0x56d677d7;
  uVar21 = 0x27d4eb7f;
  puStack_98 = (uint *)piVar22;
  puStack_94 = puVar54;
  puVar24 = puVar54;
  do {
    if (uVar60 == 0 && (7 < uVar20) <= uVar60) {
      if (uVar60 == 0 && (3 < uVar20) <= uVar60) {
        if (uVar20 == 0 && uVar60 == 0) break;
        lVar1 = (ulonglong)(uint)(byte)*puVar24 * 0x165667c5;
        uVar35 = (uint)lVar1 ^ uVar9;
        uVar49 = 0xffffffff;
        uVar21 = (uint)(byte)*puVar24 * 0x27d4eb2f + (int)((ulonglong)lVar1 >> 0x20) ^ uVar21;
        uVar45 = uVar35 << 0xb | uVar21 >> 0x15;
        lVar1 = (ulonglong)uVar45 * 0x85ebca87;
        uVar9 = (uint)lVar1;
        iVar46 = 1;
        uVar21 = (uVar21 << 0xb | uVar35 >> 0x15) * -0x7a143579 +
                 uVar45 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20);
      }
      else {
        lVar1 = (ulonglong)*puVar24 * 0x85ebca87;
        uVar35 = (uint)lVar1 ^ uVar9;
        uVar21 = *puVar24 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20) ^ uVar21;
        uVar49 = uVar35 << 0x17 | uVar21 >> 9;
        lVar1 = (ulonglong)uVar49 * 0x27d4eb4f;
        uVar45 = (uint)lVar1;
        uVar9 = uVar45 + 0x9e3779f9;
        iVar46 = 4;
        uVar21 = (uVar21 << 0x17 | uVar35 >> 9) * 0x27d4eb4f +
                 uVar49 * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20) + 0x165667b1 +
                 (uint)(0x61c88606 < uVar45);
        uVar49 = 0xfffffffc;
      }
    }
    else {
      uVar44 = *puVar24;
      uVar35 = (uint)((ulonglong)uVar44 * 0x80000000) |
               puVar24[1] * 0x27d4eb4f +
               uVar44 * -0x3d4d51c3 + (int)((ulonglong)uVar44 * 0x27d4eb4f >> 0x20) >> 1;
      lVar1 = (ulonglong)uVar35 * 0x85ebca87;
      uVar45 = (uint)lVar1 ^ uVar9;
      uVar49 = 0xfffffff8;
      uVar21 = (puVar24[1] * -0x80000000 +
               uVar44 * -0x6c158a59 + (int)((ulonglong)uVar44 * 0x80000000 >> 0x20)) * -0x7a143579 +
               uVar35 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20) ^ uVar21;
      uVar44 = uVar45 << 0x1b | uVar21 >> 5;
      lVar1 = (ulonglong)uVar44 * 0x85ebca87;
      uVar35 = (uint)lVar1;
      uVar9 = uVar35 + 0xc2b2ae63;
      iVar46 = 8;
      uVar21 = (uVar21 << 0x1b | uVar45 >> 5) * -0x7a143579 +
               uVar44 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20) + -0x7a143589 +
               (uint)(0x3d4d519c < uVar35);
    }
    bVar61 = CARRY4(uVar49,uVar20);
    uVar20 = uVar49 + uVar20;
    puVar24 = (uint *)((int)puVar24 + iVar46);
    uVar60 = (uVar60 - 1) + (uint)bVar61;
  } while( true );
  uVar9 = uVar9 ^ uVar21 >> 1;
  lVar1 = (ulonglong)uVar9 * 0x27d4eb4f;
  uVar20 = (uint)lVar1;
  uVar9 = uVar21 * 0x27d4eb4f + uVar9 * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20);
  uVar20 = (uVar20 >> 0x1d | uVar9 * 8) ^ uVar20;
  lVar1 = (ulonglong)uVar20 * 0x9e3779f9;
  uVar9 = (uVar9 ^ uVar9 >> 0x1d) * -0x61c88607 +
          uVar20 * 0x165667b1 + (int)((ulonglong)lVar1 >> 0x20);
  piVar10 = piVar22 + 1;
  piVar25 = (int *)(uVar9 ^ (uint)lVar1);
  piVar36 = (int *)*piVar10;
  while (piVar50 = piVar10, piVar36 != (int *)0x0) {
    while (piVar10 = piVar36, (uint *)piVar10[4] <= puVar54) {
      if (puVar54 <= (uint *)piVar10[4]) goto LAB_717626c0;
      piVar36 = (int *)piVar10[1];
      if ((int *)piVar10[1] == (int *)0x0) {
        piVar50 = piVar10 + 1;
        goto LAB_71762658;
      }
    }
    piVar36 = (int *)*piVar10;
  }
LAB_71762658:
  piStack_9c = piVar25;
  piVar36 = (int *)thunk_MwhHq(0x24);
  piVar36[4] = (int)puVar54;
  *piVar36 = 0;
  piVar36[1] = 0;
  piVar36[2] = (int)piVar10;
  *piVar50 = (int)piVar36;
  piVar10 = piVar36;
  if (*(int *)*piVar22 != 0) {
    *piVar22 = *(int *)*piVar22;
    piVar10 = (int *)*piVar50;
  }
  FUN_712f807c(piVar22[1],piVar10);
  piVar22[2] = piVar22[2] + 1;
  piVar25 = piStack_9c;
  piVar10 = piVar36;
LAB_717626c0:
  puVar27 = puStack_b4;
  piVar10[7] = (int)piVar25;
  piVar10[6] = 1;
  piVar10[5] = (int)puStack_94;
  piVar10[8] = uVar9;
  for (; ((*puVar40 != 0x6a4dab1f || puVar40[1] != 0x679b29b ||
          (puVar40[2] != 0x6efdd0cf || puVar40[3] != -0x33ed938)) ||
         (puVar40[4] != -0x4103aa2a || puVar40[5] != 0x370f3a77)); puVar40 = puVar40 + 1) {
  }
  piVar22 = (int *)puVar40[0xc017];
  if (piVar22 == (int *)0x0) {
    piVar22 = (int *)thunk_MwhHq(0xc);
    piVar22[1] = 0;
    piVar22[2] = 0;
    *piVar22 = (int)(piVar22 + 1);
    puVar40[0xc017] = (uint)piVar22;
  }
  piStack_9c = piVar22;
  puVar55 = puVar27 + 0x100;
  uVar9 = 0x56d677da;
  puVar54 = (uint *)0x0;
  uVar21 = 4;
  uVar20 = 0x27d4eb7f;
  puStack_98 = puVar55;
  puVar24 = puVar55;
  do {
    if (puVar54 == (uint *)0x0 && (uint *)(uint)(7 < uVar21) <= puVar54) {
      if (puVar54 == (uint *)0x0 && (uint *)(uint)(3 < uVar21) <= puVar54) {
        if (uVar21 == 0 && puVar54 == (uint *)0x0) break;
        lVar1 = (ulonglong)(uint)(byte)*puVar24 * 0x165667c5;
        uVar60 = (uint)lVar1 ^ uVar9;
        uVar20 = (uint)(byte)*puVar24 * 0x27d4eb2f + (int)((ulonglong)lVar1 >> 0x20) ^ uVar20;
        uVar35 = uVar60 << 0xb | uVar20 >> 0x15;
        lVar1 = (ulonglong)uVar35 * 0x85ebca87;
        uVar9 = (uint)lVar1;
        iVar46 = 1;
        uVar20 = (uVar20 << 0xb | uVar60 >> 0x15) * -0x7a143579 +
                 uVar35 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20);
        uVar60 = 0xffffffff;
      }
      else {
        lVar1 = (ulonglong)*puVar24 * 0x85ebca87;
        uVar60 = (uint)lVar1 ^ uVar9;
        uVar20 = *puVar24 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20) ^ uVar20;
        uVar45 = uVar60 << 0x17 | uVar20 >> 9;
        lVar1 = (ulonglong)uVar45 * 0x27d4eb4f;
        uVar35 = (uint)lVar1;
        uVar9 = uVar35 + 0x9e3779f9;
        iVar46 = 4;
        uVar20 = (uVar20 << 0x17 | uVar60 >> 9) * 0x27d4eb4f +
                 uVar45 * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20) + 0x165667b1 +
                 (uint)(0x61c88606 < uVar35);
        uVar60 = 0xfffffffc;
      }
    }
    else {
      uVar45 = *puVar24;
      puStack_94 = puVar54;
      uVar60 = (uint)((ulonglong)uVar45 * 0x80000000) |
               puVar24[1] * 0x27d4eb4f +
               uVar45 * -0x3d4d51c3 + (int)((ulonglong)uVar45 * 0x27d4eb4f >> 0x20) >> 1;
      lVar1 = (ulonglong)uVar60 * 0x85ebca87;
      uVar35 = (uint)lVar1 ^ uVar9;
      uVar20 = (puVar24[1] * -0x80000000 +
               uVar45 * -0x6c158a59 + (int)((ulonglong)uVar45 * 0x80000000 >> 0x20)) * -0x7a143579 +
               uVar60 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20) ^ uVar20;
      uVar49 = uVar35 << 0x1b | uVar20 >> 5;
      lVar1 = (ulonglong)uVar49 * 0x85ebca87;
      uVar45 = (uint)lVar1;
      uVar60 = 0xfffffff8;
      uVar9 = uVar45 + 0xc2b2ae63;
      iVar46 = 8;
      uVar20 = (uVar20 << 0x1b | uVar35 >> 5) * -0x7a143579 +
               uVar49 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20) + -0x7a143589 +
               (uint)(0x3d4d519c < uVar45);
    }
    bVar61 = CARRY4(uVar60,uVar21);
    uVar21 = uVar60 + uVar21;
    puVar24 = (uint *)((int)puVar24 + iVar46);
    puVar54 = (uint *)((int)puVar54 + (bVar61 - 1));
  } while( true );
  uVar9 = uVar9 ^ uVar20 >> 1;
  lVar1 = (ulonglong)uVar9 * 0x27d4eb4f;
  uVar21 = (uint)lVar1;
  uVar9 = uVar20 * 0x27d4eb4f + uVar9 * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20);
  uVar21 = (uVar21 >> 0x1d | uVar9 * 8) ^ uVar21;
  lVar1 = (ulonglong)uVar21 * 0x9e3779f9;
  uVar9 = (uVar9 ^ uVar9 >> 0x1d) * -0x61c88607 +
          uVar21 * 0x165667b1 + (int)((ulonglong)lVar1 >> 0x20);
  piVar22 = piVar22 + 1;
  piVar10 = (int *)*piVar22;
  while (piVar36 = piVar22, piVar10 != (int *)0x0) {
    while (piVar22 = piVar10, (uint *)piVar22[4] <= puVar55) {
      if (puVar55 <= (uint *)piVar22[4]) goto LAB_71762ab4;
      piVar10 = (int *)piVar22[1];
      if ((int *)piVar22[1] == (int *)0x0) {
        piVar36 = piVar22 + 1;
        goto LAB_71762a4c;
      }
    }
    piVar10 = (int *)*piVar22;
  }
LAB_71762a4c:
  piVar25 = (int *)thunk_MwhHq(0x24);
  piVar10 = piStack_9c;
  piVar25[4] = (int)puVar55;
  *piVar25 = 0;
  piVar25[1] = 0;
  piVar25[2] = (int)piVar22;
  *piVar36 = (int)piVar25;
  piVar22 = piVar25;
  if (*(int *)*piStack_9c != 0) {
    *piStack_9c = *(int *)*piStack_9c;
    piVar22 = (int *)*piVar36;
  }
  FUN_712f807c(piStack_9c[1],piVar22);
  piVar10[2] = piVar10[2] + 1;
  piVar22 = piVar25;
LAB_71762ab4:
  puVar27 = puStack_b4;
  piVar22[8] = uVar9;
  piVar22[7] = uVar9 ^ (uint)lVar1;
  piVar22[6] = 4;
  piVar22[5] = (int)puStack_98;
  for (; ((*puVar41 != 0x6a4dab1f || puVar41[1] != 0x679b29b ||
          (puVar41[2] != 0x6efdd0cf || puVar41[3] != -0x33ed938)) ||
         (puVar41[4] != -0x4103aa2a || puVar41[5] != 0x370f3a77)); puVar41 = puVar41 + 1) {
  }
  piVar22 = (int *)puVar41[0xc017];
  if (piVar22 == (int *)0x0) {
    piVar22 = (int *)thunk_MwhHq(0xc);
    piVar22[1] = 0;
    piVar22[2] = 0;
    *piVar22 = (int)(piVar22 + 1);
    puVar41[0xc017] = (uint)piVar22;
  }
  puVar54 = puVar27 + 0x104;
  uVar9 = 0x56d677da;
  uVar21 = 0;
  puVar55 = (uint *)&LAB_00000004;
  uVar20 = 0x27d4eb7f;
  puVar24 = puVar54;
  do {
    if (uVar21 == 0 && (&DAT_00000007 < puVar55) <= uVar21) {
      if (uVar21 == 0 && ((uint *)0x3 < puVar55) <= uVar21) {
        if (puVar55 == (uint *)0x0 && uVar21 == 0) break;
        lVar1 = (ulonglong)(uint)(byte)*puVar24 * 0x165667c5;
        uVar60 = (uint)lVar1 ^ uVar9;
        uVar20 = (uint)(byte)*puVar24 * 0x27d4eb2f + (int)((ulonglong)lVar1 >> 0x20) ^ uVar20;
        uVar35 = uVar60 << 0xb | uVar20 >> 0x15;
        lVar1 = (ulonglong)uVar35 * 0x85ebca87;
        uVar9 = (uint)lVar1;
        iVar46 = 1;
        uVar20 = (uVar20 << 0xb | uVar60 >> 0x15) * -0x7a143579 +
                 uVar35 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20);
        uVar60 = 0xffffffff;
      }
      else {
        lVar1 = (ulonglong)*puVar24 * 0x85ebca87;
        uVar60 = (uint)lVar1 ^ uVar9;
        uVar20 = *puVar24 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20) ^ uVar20;
        uVar45 = uVar60 << 0x17 | uVar20 >> 9;
        lVar1 = (ulonglong)uVar45 * 0x27d4eb4f;
        uVar35 = (uint)lVar1;
        uVar9 = uVar35 + 0x9e3779f9;
        iVar46 = 4;
        uVar20 = (uVar20 << 0x17 | uVar60 >> 9) * 0x27d4eb4f +
                 uVar45 * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20) + 0x165667b1 +
                 (uint)(0x61c88606 < uVar35);
        uVar60 = 0xfffffffc;
      }
    }
    else {
      uVar45 = *puVar24;
      uVar60 = (uint)((ulonglong)uVar45 * 0x80000000) |
               puVar24[1] * 0x27d4eb4f +
               uVar45 * -0x3d4d51c3 + (int)((ulonglong)uVar45 * 0x27d4eb4f >> 0x20) >> 1;
      lVar1 = (ulonglong)uVar60 * 0x85ebca87;
      uVar35 = (uint)lVar1 ^ uVar9;
      uVar20 = (puVar24[1] * -0x80000000 +
               uVar45 * -0x6c158a59 + (int)((ulonglong)uVar45 * 0x80000000 >> 0x20)) * -0x7a143579 +
               uVar60 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20) ^ uVar20;
      uVar49 = uVar35 << 0x1b | uVar20 >> 5;
      lVar1 = (ulonglong)uVar49 * 0x85ebca87;
      uVar45 = (uint)lVar1;
      uVar60 = 0xfffffff8;
      uVar9 = uVar45 + 0xc2b2ae63;
      iVar46 = 8;
      uVar20 = (uVar20 << 0x1b | uVar35 >> 5) * -0x7a143579 +
               uVar49 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20) + -0x7a143589 +
               (uint)(0x3d4d519c < uVar45);
      puStack_94 = puVar55;
    }
    bVar61 = CARRY4(uVar60,(uint)puVar55);
    puVar55 = (uint *)(uVar60 + (int)puVar55);
    puVar24 = (uint *)((int)puVar24 + iVar46);
    uVar21 = (uVar21 - 1) + (uint)bVar61;
  } while( true );
  uVar9 = uVar9 ^ uVar20 >> 1;
  lVar1 = (ulonglong)uVar9 * 0x27d4eb4f;
  uVar21 = (uint)lVar1;
  uVar9 = uVar20 * 0x27d4eb4f + uVar9 * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20);
  uVar21 = (uVar21 >> 0x1d | uVar9 * 8) ^ uVar21;
  lVar1 = (ulonglong)uVar21 * 0x9e3779f9;
  puVar24 = (uint *)((uVar9 ^ uVar9 >> 0x1d) * -0x61c88607 +
                    uVar21 * 0x165667b1 + (int)((ulonglong)lVar1 >> 0x20));
  piVar10 = piVar22 + 1;
  uVar9 = (uint)puVar24 ^ (uint)lVar1;
  piVar36 = (int *)*piVar10;
  while (piVar25 = piVar10, puStack_d0 = puVar54, piStack_9c = piVar22, piVar36 != (int *)0x0) {
    while (piVar10 = piVar36, (uint *)piVar10[4] <= puVar54) {
      if (puVar54 <= (uint *)piVar10[4]) goto LAB_71762eac;
      piVar36 = (int *)piVar10[1];
      if ((int *)piVar10[1] == (int *)0x0) {
        piVar25 = piVar10 + 1;
        goto LAB_71762e40;
      }
    }
    piVar36 = (int *)*piVar10;
  }
LAB_71762e40:
  uStack_a0 = uVar9;
  puStack_94 = puVar24;
  piVar36 = (int *)thunk_MwhHq(0x24);
  piVar22 = piStack_9c;
  piVar36[4] = (int)puVar54;
  *piVar36 = 0;
  piVar36[1] = 0;
  piVar36[2] = (int)piVar10;
  *piVar25 = (int)piVar36;
  piVar10 = piVar36;
  if (*(int *)*piStack_9c != 0) {
    *piStack_9c = *(int *)*piStack_9c;
    piVar10 = (int *)*piVar25;
  }
  FUN_712f807c(piStack_9c[1],piVar10);
  piVar22[2] = piVar22[2] + 1;
  uVar9 = uStack_a0;
  puVar24 = puStack_94;
  piVar10 = piVar36;
LAB_71762eac:
  puVar27 = puStack_b4;
  piVar10[5] = (int)puStack_d0;
  piVar10[6] = 4;
  piVar10[7] = uVar9;
  piVar10[8] = (int)puVar24;
  puStack_b4[0x106] = 0;
  *(undefined1 *)((int)puStack_b4 + 0x12e) = 0;
  auStack_f8[0] = 1;
  imp___strncpy_chk2((int)puStack_b4 + 0x22d,&DAT_70064a63,0x7f,0x7f);
  puVar27[0xab] = 0x1e61;
  uVar14 = DAT_71201808;
  pcVar11 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fa4fc);
  if (*pcVar11 == '\0') {
    puVar17 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa4ec);
    *puVar17 = 0x158ef2dd;
    puVar17[1] = 0xd487a00b;
    *(undefined1 *)((int)puVar17 + 0xb) = 1;
    *(undefined4 *)((int)puVar17 + 7) = 0xe7e6cbd4;
    GFDIUClbc_QcPNgD_wH(&LAB_717817b8,puVar17,&DAT_70b0e000);
    puVar19 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa4fc);
    *puVar19 = 1;
  }
  pbVar12 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fa4ec);
  if (pbVar12[0xb] != 0) {
    *pbVar12 = *pbVar12 ^ 0xbf;
    pbVar12[1] = pbVar12[1] ^ 0x87;
    pbVar12[2] = pbVar12[2] ^ 0xe7;
    pbVar12[3] = pbVar12[3] ^ 0x79;
    pbVar12[0xb] = 0;
    pbVar12[4] = pbVar12[4] ^ 0x6f;
    pbVar12[5] = ~pbVar12[5];
    pbVar12[6] = pbVar12[6] ^ 0xe3;
    pbVar12[7] = pbVar12[7] ^ 0xb5;
    pbVar12[8] = pbVar12[8] ^ 0xbf;
    pbVar12[9] = pbVar12[9] ^ 0x87;
    pbVar12[10] = pbVar12[10] ^ 0xe7;
  }
  pbVar13 = (byte *)FUN_717d25cc();
  pbVar26 = *(byte **)(pbVar13 + 8);
  if ((*pbVar13 & 1) == 0) {
    pbVar26 = pbVar13 + 1;
  }
  FUN_717db1ec(uVar14,pbVar12,pbVar26);
  pcVar11 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fa51c);
  if (*pcVar11 == '\0') {
    puVar17 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa50c);
    *(undefined1 *)(puVar17 + 3) = 1;
    *puVar17 = 0xdaf40112;
    puVar17[1] = 0x7d76f059;
    puVar17[2] = 0xffab5418;
    GFDIUClbc_QcPNgD_wH(&LAB_717817e4,puVar17,&DAT_70b0e000);
    puVar19 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa51c);
    *puVar19 = 1;
  }
  pbVar12 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fa50c);
  if (pbVar12[0xc] != 0) {
    *pbVar12 = *pbVar12 ^ 0x37;
    pbVar12[1] = pbVar12[1] ^ 0x71;
    pbVar12[2] = pbVar12[2] ^ 0xdb;
    pbVar12[3] = ~pbVar12[3];
    pbVar12[0xc] = 0;
    pbVar12[4] = pbVar12[4] ^ 0x29;
    pbVar12[5] = pbVar12[5] ^ 0xdf;
    pbVar12[6] = pbVar12[6] ^ 0x53;
    pbVar12[7] = pbVar12[7] ^ 0xd;
    pbVar12[8] = pbVar12[8] ^ 0x37;
    pbVar12[9] = pbVar12[9] ^ 0x71;
    pbVar12[10] = pbVar12[10] ^ 0xdb;
    pbVar12[0xb] = ~pbVar12[0xb];
  }
  auStack_f8[0] = DAT_70135cc0;
  auStack_f8[1] = DAT_70135cc4;
  pbStack_f0 = (byte *)DAT_70135cc8;
  auStack_ec[0] = DAT_70135ccc;
  FUN_71766ef0(auStack_8c);
  uVar14 = DAT_71201808;
  pcVar11 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fa53c);
  if (*pcVar11 == '\0') {
    puVar17 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa52c);
    *puVar17 = 0x6c0dbea6;
    puVar17[1] = 0xc68073a;
    *(undefined1 *)((int)puVar17 + 10) = 1;
    *(undefined2 *)(puVar17 + 2) = 0xd1a0;
    GFDIUClbc_QcPNgD_wH(&LAB_71781810,puVar17,&DAT_70b0e000);
    puVar19 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa53c);
    *puVar19 = 1;
  }
  pbVar12 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fa52c);
  if (pbVar12[10] != 0) {
    *pbVar12 = *pbVar12 ^ 0xc5;
    pbVar12[1] = pbVar12[1] ^ 0xd1;
    pbVar12[2] = pbVar12[2] ^ 0x69;
    pbVar12[3] = pbVar12[3] ^ 9;
    pbVar12[10] = 0;
    pbVar12[4] = pbVar12[4] ^ 0x65;
    pbVar12[5] = pbVar12[5] ^ 0x65;
    pbVar12[6] = pbVar12[6] ^ 9;
    pbVar12[7] = pbVar12[7] ^ 0x7f;
    pbVar12[8] = pbVar12[8] ^ 0xc5;
    pbVar12[9] = pbVar12[9] ^ 0xd1;
  }
  FUN_717db1ec(uVar14,pbVar12,auStack_8c);
  thunk_MwhHq(0x1c71c);
  iVar46 = FUN_71794a94();
  *(undefined1 *)(iVar46 + 0x1f70) = 0;
  puVar27[0x2b] = iVar46;
  thunk_MwhHq(0xb3c7);
  uVar14 = FUN_717b7f08();
  puVar27[1] = uVar14;
  thunk_MwhHq(5000);
  uVar14 = FUN_71793c24();
  puVar27[2] = uVar14;
  thunk_MwhHq(0x23004);
  uVar14 = FUN_7179419c();
  puVar27[3] = uVar14;
  thunk_MwhHq(0x1400);
  uVar14 = FUN_71750cdc();
  puVar27[4] = uVar14;
  thunk_MwhHq(0x404);
  uVar14 = FUN_717974f0();
  puVar27[5] = uVar14;
  thunk_MwhHq(0x280c);
  uVar14 = FUN_717b77a4();
  puVar27[6] = uVar14;
  thunk_MwhHq(0x3c10);
  uVar14 = FUN_717b5cb0();
  puVar27[7] = uVar14;
  FUN_716441bc(uVar14,1);
  uVar14 = thunk_MwhHq(0xa0);
  FUN_7161779c();
  puStack_94 = (uint *)DAT_70ffc974;
  DAT_711ad10c = uVar14;
  uVar15 = FUN_71ba1b94(*(undefined4 *)(DAT_70ffc974 + 8));
  uVar15 = FUN_71ba21e8(uVar15,0x3e99999a);
  uVar15 = FUN_71ba0b38(uVar15,0xc3340000);
  pcVar11 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fa55c);
  if (*pcVar11 == '\0') {
    puVar17 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa54c);
    *(undefined1 *)(puVar17 + 2) = 1;
    *puVar17 = 0x7419146e;
    puVar17[1] = 0x31d2a06;
    GFDIUClbc_QcPNgD_wH(&LAB_7178183c,puVar17,&DAT_70b0e000);
    puVar19 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa55c);
    *puVar19 = 1;
  }
  pbStack_f0 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fa54c);
  if (pbStack_f0[8] != 0) {
    pbStack_f0[8] = 0;
    *pbStack_f0 = *pbStack_f0 ^ 3;
    pbStack_f0[1] = pbStack_f0[1] ^ 0x71;
    pbStack_f0[2] = pbStack_f0[2] ^ 0x77;
    pbStack_f0[3] = pbStack_f0[3] ^ 1;
    pbStack_f0[4] = pbStack_f0[4] ^ 0x59;
    pbStack_f0[5] = pbStack_f0[5] ^ 0x5f;
    pbStack_f0[6] = pbStack_f0[6] ^ 0x6d;
    pbStack_f0[7] = pbStack_f0[7] ^ 3;
  }
  auStack_f8[0] = 0x43020000;
  auStack_f8[1] = 0x43020000;
  FUN_71617804(uVar14,1,0x44d48000,uVar15);
  uVar14 = FUN_716179bc(DAT_711ad10c,1);
  uVar15 = FUN_71ba21e8(*(undefined4 *)(DAT_711e9ee4 + 0x2c),0x44b22000);
  puVar24 = puStack_94;
  uVar16 = FUN_71ba1b94(*(undefined4 *)((int)puStack_94 + 8));
  uVar16 = FUN_71ba21e8(uVar16,0x3e99999a);
  FUN_71616ff4(uVar14,uVar15,uVar16);
  uVar14 = FUN_71ba1b94(*(undefined4 *)((int)puVar24 + 8));
  uVar14 = FUN_71ba21e8(uVar14,0x3e99999a);
  uVar15 = FUN_71ba0b38(uVar14,0xc1f00000);
  uVar14 = DAT_711ad10c;
  pcVar11 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fa57c);
  if (*pcVar11 == '\0') {
    puVar17 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa56c);
    *puVar17 = 0x84f19a32;
    puVar17[1] = 0x7cb46990;
    *(undefined1 *)((int)puVar17 + 10) = 1;
    *(undefined2 *)(puVar17 + 2) = 0xff31;
    GFDIUClbc_QcPNgD_wH(&LAB_71781864,puVar17,&DAT_70b0e000);
    puVar19 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa57c);
    *puVar19 = 1;
  }
  pbStack_f0 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fa56c);
  if (pbStack_f0[10] != 0) {
    *pbStack_f0 = *pbStack_f0 ^ 0x5f;
    pbStack_f0[1] = ~pbStack_f0[1];
    pbStack_f0[2] = pbStack_f0[2] ^ 0x9f;
    pbStack_f0[3] = pbStack_f0[3] ^ 0xf1;
    pbStack_f0[10] = 0;
    pbStack_f0[4] = pbStack_f0[4] ^ 0xcf;
    pbStack_f0[5] = pbStack_f0[5] ^ 0xd;
    pbStack_f0[6] = pbStack_f0[6] ^ 0xdb;
    pbStack_f0[7] = pbStack_f0[7] ^ 0xb;
    pbStack_f0[8] = pbStack_f0[8] ^ 0x5f;
    pbStack_f0[9] = ~pbStack_f0[9];
  }
  auStack_f8[0] = 0x43020000;
  auStack_f8[1] = 0x43020000;
  FUN_71617804(uVar14,2,0x44d48000,uVar15);
  uVar14 = FUN_716179bc(DAT_711ad10c,2);
  uVar15 = FUN_71ba21e8(*(undefined4 *)(DAT_711e9ee4 + 0x2c),0x44c9e000);
  uVar16 = FUN_71ba1b94(*(undefined4 *)((int)puStack_94 + 8));
  uVar16 = FUN_71ba21e8(uVar16,0x3e99999a);
  FUN_71616ff4(uVar14,uVar15,uVar16);
  thunk_MwhHq(5000);
  uVar14 = FUN_7173c46c();
  puVar27[8] = uVar14;
  thunk_MwhHq(0xc);
  uVar14 = FUN_7173c7bc();
  puVar27[9] = uVar14;
  uVar14 = FUN_718982d8();
  *puVar27 = uVar14;
  FUN_71792cc4();
  FUN_717b3f34(*puVar27);
  FUN_7174f130(*puVar27);
  piVar22 = (int *)*puVar27;
  pcVar11 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fa59c);
  if (*pcVar11 == '\0') {
    puVar18 = (undefined2 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa58c);
    *puVar18 = 0x1b3;
    GFDIUClbc_QcPNgD_wH(&LAB_71781890,puVar18,&DAT_70b0e000);
    puVar19 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa59c);
    *puVar19 = 1;
  }
  pbVar12 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fa58c);
  if (pbVar12[1] != 0) {
    pbVar12[1] = 0;
    *pbVar12 = *pbVar12 ^ 0xb3;
  }
  (**(code **)(*piVar22 + 0xa8))(piVar22);
  uVar14 = FUN_71886108();
  puVar27[0xb] = uVar14;
  uVar14 = FUN_71886108();
  puVar27[0xc] = uVar14;
  puVar27[0xca] = 0;
  puVar27[0xcb] = 0;
  puVar27[0xcc] = 0;
  puVar27[10] = 4;
  *(undefined1 *)(puVar27 + 200) = 0;
  uVar14 = FUN_71886108();
  puVar27[0xd3] = 0;
  *(undefined1 *)(puVar27 + 0xd6) = 1;
  puVar27[0xc9] = uVar14;
  while( true ) {
    uVar9 = *puVar28 ^ 0x6a4dab1f;
    uVar20 = uVar9 | puVar28[1] ^ 0x679b29b;
    bVar61 = uVar20 == 0;
    if (bVar61) {
      uVar20 = puVar28[3] ^ 0xfcc126c8;
      uVar9 = puVar28[2] ^ 0x6efdd0cf;
    }
    if ((bVar61 && (uVar9 == 0 && uVar20 == 0)) &&
       (puVar28[4] == 0xbefc55d6 && puVar28[5] == 0x370f3a77)) break;
    puVar28 = puVar28 + 1;
  }
  uVar9 = puVar28[0xc017];
  if (uVar9 != 0) {
    piVar36 = (int *)(uVar9 + 4);
    piVar25 = (int *)*piVar36;
    piVar22 = piVar36;
    piVar10 = piVar36;
    if (piVar25 != (int *)0x0) {
      do {
        piVar22 = piVar25;
        if ((uint *)piVar25[4] < puStack_98) {
          piVar25 = piVar25 + 1;
          piVar22 = piVar10;
        }
        piVar25 = (int *)*piVar25;
        piVar10 = piVar22;
      } while (piVar25 != (int *)0x0);
      if (piVar22 == piVar36) goto LAB_71763e94;
      if (puStack_98 < (uint *)piVar22[4]) {
        piVar22 = piVar36;
      }
    }
    if (piVar36 != piVar22) {
      *puStack_98 = 0x3c03126f;
      puVar27 = *(undefined4 **)(puVar28[0xc017] + 4);
joined_r0x71763784:
      if (puVar27 != (undefined4 *)0x0) {
        while (puStack_98 < (uint *)puVar27[4]) {
          puVar27 = (undefined4 *)*puVar27;
          if (puVar27 == (undefined4 *)0x0) goto LAB_717647d8;
        }
        if ((uint *)puVar27[4] < puStack_98) goto code_r0x717637a8;
        uVar9 = 0x56d677d6;
        puVar28 = (uint *)puVar27[5];
        puStack_dc = puVar27;
        iVar46 = 0x27d4eb7f;
        uVar20 = puVar27[6];
        if (0x1f < uVar20) {
          piStack_9c = (int *)0x50;
          puStack_98 = (uint *)0x40801011;
          uStack_a0 = 0xee40c5e7;
          puStack_94 = (uint *)0x61c8869e;
          uVar21 = 0x60ea283e;
          uStack_ac = 0xba94458a;
          uVar35 = 0xc2b2ae8d;
          uVar60 = 0;
          uStack_a4 = 0x6854fb60;
          auStack_ec[2] = uVar20;
          puStack_e0 = puVar28;
          puVar24 = puVar28;
          uVar9 = uVar20;
          do {
            uStack_a8 = uVar60;
            lVar1 = (ulonglong)puVar24[6] * 0x27d4eb4f;
            uVar45 = (uint)lVar1;
            puVar54 = puVar24 + 3;
            uVar49 = uVar45 + uStack_ac;
            uVar44 = puVar24[7] * 0x27d4eb4f +
                     puVar24[6] * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20) + (int)puStack_94 +
                     (uint)CARRY4(uVar45,uStack_ac);
            uVar45 = uVar44 >> 1;
            uStack_b8 = uVar49 * -0x80000000 | uVar45;
            uStack_ac = (uint)((ulonglong)uStack_b8 * 0x85ebca87);
            uVar49 = uVar49 >> 1;
            uStack_bc = uVar44 * -0x80000000 | uVar49;
            puStack_94 = (uint *)(uStack_bc * -0x7a143579 +
                                 uStack_b8 * -0x61c8864f +
                                 (int)((ulonglong)uStack_b8 * 0x85ebca87 >> 0x20));
            lVar1 = (ulonglong)puVar24[4] * 0x27d4eb4f;
            uVar44 = (uint)lVar1;
            uVar48 = uVar44 + (int)puStack_98;
            uVar37 = puVar24[5] * 0x27d4eb4f +
                     puVar24[4] * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20) + (int)piStack_9c +
                     (uint)CARRY4(uVar44,(uint)puStack_98);
            uVar44 = uVar37 >> 1;
            uStack_c4 = uVar48 * -0x80000000 | uVar44;
            puStack_98 = (uint *)((ulonglong)uStack_c4 * 0x85ebca87);
            uVar48 = uVar48 >> 1;
            uStack_c0 = uVar37 * -0x80000000 | uVar48;
            puVar55 = puVar24 + 2;
            piStack_9c = (int *)(uStack_c0 * -0x7a143579 +
                                uStack_c4 * -0x61c8864f +
                                (int)((ulonglong)uStack_c4 * 0x85ebca87 >> 0x20));
            uVar29 = *puVar24;
            puVar38 = puVar24 + 1;
            puVar24 = puVar24 + 8;
            lVar1 = (ulonglong)*puVar55 * 0x27d4eb4f;
            uVar37 = (uint)lVar1;
            uVar42 = uVar37 + uStack_a4;
            uVar35 = *puVar54 * 0x27d4eb4f +
                     *puVar55 * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20) + uVar35 +
                     (uint)CARRY4(uVar37,uStack_a4);
            uVar37 = uVar35 >> 1;
            uStack_b0 = uVar42 * -0x80000000 | uVar37;
            uVar42 = uVar42 >> 1;
            piStack_c8 = (int *)(uVar35 * -0x80000000 | uVar42);
            uStack_a4 = (uint)((ulonglong)uStack_b0 * 0x85ebca87);
            uVar35 = (int)piStack_c8 * -0x7a143579 +
                     uStack_b0 * -0x61c8864f + (int)((ulonglong)uStack_b0 * 0x85ebca87 >> 0x20);
            lVar1 = (ulonglong)uVar29 * 0x27d4eb4f;
            uVar43 = (uint)lVar1;
            uVar53 = uVar43 + uStack_a0;
            uVar21 = *puVar38 * 0x27d4eb4f + uVar29 * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20)
                     + uVar21 + (uint)CARRY4(uVar43,uStack_a0);
            bVar61 = uVar9 < 0x20;
            uVar9 = uVar9 - 0x20;
            uVar60 = uVar60 - bVar61;
            uVar43 = uVar21 >> 1;
            uVar30 = uVar53 * -0x80000000 | uVar43;
            uStack_a0 = (uint)((ulonglong)uVar30 * 0x85ebca87);
            uVar53 = uVar53 >> 1;
            uVar29 = uVar21 * -0x80000000 | uVar53;
            uVar21 = uVar29 * -0x7a143579 +
                     uVar30 * -0x61c8864f + (int)((ulonglong)uVar30 * 0x85ebca87 >> 0x20);
          } while ((uint)(uVar9 < 0x20) <= -uVar60);
          uVar9 = uStack_a4 << 7 | uVar35 >> 0x19;
          uVar52 = uStack_a0 << 1 | uVar21 >> 0x1f;
          uVar31 = uVar9 + uVar52;
          uVar51 = (int)puStack_98 << 0xc | (uint)piStack_9c >> 0x14;
          uVar60 = uVar31 + uVar51;
          uStack_a0 = (uVar35 * 0x80 | uStack_a4 >> 0x19) + (uVar21 * 2 | uStack_a0 >> 0x1f) +
                      (uint)CARRY4(uVar9,uVar52) +
                      ((int)piStack_9c * 0x1000 | (uint)puStack_98 >> 0x14) +
                      (uint)CARRY4(uVar31,uVar51);
          puStack_98 = (uint *)((ulonglong)uVar30 * 0x80000000 >> 0x20);
          uVar21 = (uint)((ulonglong)uVar30 * 0x80000000) |
                   uVar29 * 0xf796ca9 +
                   uVar30 * -0x210ca4ff + (int)((ulonglong)uVar30 * 0xf796ca9 >> 0x20) >> 1;
          lVar1 = (ulonglong)uVar21 * 0x85ebca87;
          uVar34 = uStack_ac << 0x12 | (uint)puStack_94 >> 0xe;
          uVar56 = uVar60 + uVar34 ^ (uint)lVar1;
          lVar3 = (ulonglong)uVar56 * 0x85ebca87;
          piStack_9c = (int *)lVar3;
          uVar57 = (uint)((ulonglong)uStack_b0 * 0x80000000) |
                   (int)piStack_c8 * 0xf796ca9 +
                   uStack_b0 * -0x210ca4ff + (int)((ulonglong)uStack_b0 * 0xf796ca9 >> 0x20) >> 1;
          lVar4 = (ulonglong)uVar57 * 0x85ebca87;
          uVar35 = (int)piStack_9c + 0xc2b2ae63U ^ (uint)lVar4;
          lVar5 = (ulonglong)uVar35 * 0x85ebca87;
          uVar32 = (uint)lVar5;
          uVar33 = (uint)((ulonglong)uStack_c4 * 0x80000000) |
                   uStack_c0 * 0xf796ca9 +
                   uStack_c4 * -0x210ca4ff + (int)((ulonglong)uStack_c4 * 0xf796ca9 >> 0x20) >> 1;
          lVar6 = (ulonglong)uVar33 * 0x85ebca87;
          uVar29 = uVar32 + 0xc2b2ae63 ^ (uint)lVar6;
          lVar7 = (ulonglong)uVar29 * 0x85ebca87;
          uVar51 = (uint)lVar7;
          uVar52 = (uint)((ulonglong)uStack_b8 * 0x80000000) |
                   uStack_bc * 0xf796ca9 +
                   uStack_b8 * -0x210ca4ff + (int)((ulonglong)uStack_b8 * 0xf796ca9 >> 0x20) >> 1;
          lVar8 = (ulonglong)uVar52 * 0x85ebca87;
          uVar30 = uVar51 + 0xc2b2ae63 ^ (uint)lVar8;
          lVar2 = (ulonglong)uVar30 * 0x85ebca87;
          uVar31 = (uint)lVar2;
          uVar9 = uVar31 + 0xc2b2ae63;
          iVar46 = ((((uStack_a0 + ((int)puStack_94 * 0x40000 | uStack_ac >> 0xe) +
                       (uint)CARRY4(uVar60,uVar34) ^
                      (int)(puStack_98 + uVar43 * -0x1e10d26b + uVar53 * -0x20000000) * -0x7a143579
                      + uVar21 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20)) * -0x7a143579 +
                      uVar56 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20) + -0x7a143589 +
                      (uint)((int *)0x3d4d519c < piStack_9c) ^
                     (uVar42 * -0x80000000 +
                     uVar37 * -0x784349ac + (int)((ulonglong)uStack_b0 * 0x80000000 >> 0x20)) *
                     -0x7a143579 + uVar57 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20)) *
                     -0x7a143579 + uVar35 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) +
                     -0x7a143589 + (uint)(0x3d4d519c < uVar32) ^
                    (uVar48 * -0x80000000 +
                    uVar44 * -0x784349ac + (int)((ulonglong)uStack_c4 * 0x80000000 >> 0x20)) *
                    -0x7a143579 + uVar33 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20)) *
                    -0x7a143579 + uVar29 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20) +
                    -0x7a143589 + (uint)(0x3d4d519c < uVar51) ^
                   (uVar49 * -0x80000000 +
                   uVar45 * -0x784349ac + (int)((ulonglong)uStack_b8 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar52 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20)) *
                   -0x7a143579 + uVar30 * -0x61c8864f + (int)((ulonglong)lVar2 >> 0x20) +
                   -0x7a143589 + (uint)(0x3d4d519c < uVar31);
        }
        uVar21 = uVar9 + uVar20;
        uVar9 = iVar46 + (uint)CARRY4(uVar9,uVar20);
        puVar28 = (uint *)((int)puVar28 + (uVar20 & 0xffffffe0));
        uVar20 = uVar20 & 0x1f;
        for (uVar60 = 0; uVar60 != 0 || uVar60 < (7 < uVar20); uVar60 = (uVar60 - 1) + (uint)bVar61)
        {
          uVar35 = *puVar28;
          uVar49 = (uint)((ulonglong)uVar35 * 0x80000000) |
                   puVar28[1] * 0x27d4eb4f +
                   uVar35 * -0x3d4d51c3 + (int)((ulonglong)uVar35 * 0x27d4eb4f >> 0x20) >> 1;
          lVar1 = (ulonglong)uVar49 * 0x85ebca87;
          uVar44 = 0xfffffff8;
          uVar45 = (uint)lVar1 ^ uVar21;
          uVar9 = (puVar28[1] * -0x80000000 +
                  uVar35 * -0x6c158a59 + (int)((ulonglong)uVar35 * 0x80000000 >> 0x20)) *
                  -0x7a143579 + uVar49 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20) ^ uVar9;
          uVar49 = uVar45 << 0x1b | uVar9 >> 5;
          lVar1 = (ulonglong)uVar49 * 0x85ebca87;
          uVar35 = (uint)lVar1;
          uVar21 = uVar35 + 0xc2b2ae63;
          iVar46 = 8;
          uVar9 = (uVar9 << 0x1b | uVar45 >> 5) * -0x7a143579 +
                  uVar49 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20) + -0x7a143589 +
                  (uint)(0x3d4d519c < uVar35);
LAB_71763cf0:
          bVar61 = CARRY4(uVar44,uVar20);
          uVar20 = uVar44 + uVar20;
          puVar28 = (uint *)((int)puVar28 + iVar46);
        }
        if (uVar60 != 0 || uVar60 < (3 < uVar20)) {
          lVar1 = (ulonglong)*puVar28 * 0x85ebca87;
          uVar35 = (uint)lVar1 ^ uVar21;
          uVar9 = *puVar28 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20) ^ uVar9;
          uVar49 = uVar35 << 0x17 | uVar9 >> 9;
          lVar1 = (ulonglong)uVar49 * 0x27d4eb4f;
          uVar45 = (uint)lVar1;
          iVar46 = 4;
          uVar21 = uVar45 + 0x9e3779f9;
          uVar9 = (uVar9 << 0x17 | uVar35 >> 9) * 0x27d4eb4f +
                  uVar49 * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20) + 0x165667b1 +
                  (uint)(0x61c88606 < uVar45);
          uVar44 = 0xfffffffc;
          goto LAB_71763cf0;
        }
        if (uVar20 != 0 || uVar60 != 0) {
          lVar1 = (ulonglong)(uint)(byte)*puVar28 * 0x165667c5;
          uVar35 = (uint)lVar1 ^ uVar21;
          uVar9 = (uint)(byte)*puVar28 * 0x27d4eb2f + (int)((ulonglong)lVar1 >> 0x20) ^ uVar9;
          uVar45 = uVar35 << 0xb | uVar9 >> 0x15;
          lVar1 = (ulonglong)uVar45 * 0x85ebca87;
          uVar21 = (uint)lVar1;
          iVar46 = 1;
          uVar9 = (uVar9 << 0xb | uVar35 >> 0x15) * -0x7a143579 +
                  uVar45 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20);
          uVar44 = 0xffffffff;
          goto LAB_71763cf0;
        }
        uVar21 = uVar21 ^ uVar9 >> 1;
        lVar1 = (ulonglong)uVar21 * 0x27d4eb4f;
        uVar20 = (uint)lVar1;
        uVar9 = uVar9 * 0x27d4eb4f + uVar21 * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20);
        uVar20 = (uVar20 >> 0x1d | uVar9 * 8) ^ uVar20;
        lVar1 = (ulonglong)uVar20 * 0x9e3779f9;
        uVar9 = (uVar9 ^ uVar9 >> 0x1d) * -0x61c88607 +
                uVar20 * 0x165667b1 + (int)((ulonglong)lVar1 >> 0x20);
        puVar27[8] = uVar9;
        puVar27[7] = uVar9 ^ (uint)lVar1;
        puVar27 = puStack_b4;
        goto LAB_71763e94;
      }
      goto LAB_717647d8;
    }
  }
LAB_71763e94:
  while( true ) {
    uVar9 = *puVar47 ^ 0x6a4dab1f;
    uVar20 = uVar9 | puVar47[1] ^ 0x679b29b;
    bVar61 = uVar20 == 0;
    if (bVar61) {
      uVar20 = puVar47[3] ^ 0xfcc126c8;
      uVar9 = puVar47[2] ^ 0x6efdd0cf;
    }
    if ((bVar61 && (uVar9 == 0 && uVar20 == 0)) &&
       (puVar47[4] == 0xbefc55d6 && puVar47[5] == 0x370f3a77)) break;
    puVar47 = puVar47 + 1;
  }
  uVar9 = puVar47[0xc017];
  if (uVar9 != 0) {
    piVar36 = (int *)(uVar9 + 4);
    piVar25 = (int *)*piVar36;
    piVar22 = piVar36;
    piVar10 = piVar36;
    if (piVar25 != (int *)0x0) {
      do {
        piVar22 = piVar25;
        if ((uint *)piVar25[4] < puStack_cc) {
          piVar25 = piVar25 + 1;
          piVar22 = piVar10;
        }
        piVar25 = (int *)*piVar25;
        piVar10 = piVar22;
      } while (piVar25 != (int *)0x0);
      if (piVar22 == piVar36) goto LAB_71764698;
      if (puStack_cc < (uint *)piVar22[4]) {
        piVar22 = piVar36;
      }
    }
    if (piVar36 != piVar22) {
      *(byte *)puStack_cc = 0;
      piVar22 = *(int **)(puVar47[0xc017] + 4);
joined_r0x71763f6c:
      if (piVar22 != (int *)0x0) {
        while (puStack_cc < (uint *)piVar22[4]) {
          piVar22 = (int *)*piVar22;
          if (piVar22 == (int *)0x0) goto LAB_717647d8;
        }
        if ((uint *)piVar22[4] < puStack_cc) goto code_r0x71763f90;
        uVar9 = 0x56d677d6;
        puVar28 = (uint *)piVar22[5];
        piStack_c8 = piVar22;
        iVar46 = 0x27d4eb7f;
        puVar27 = (undefined4 *)piVar22[6];
        if (&DAT_0000001f < puVar27) {
          uStack_a0 = 0x50;
          piStack_9c = (int *)0x40801011;
          uVar9 = 0x60ea283e;
          uStack_a4 = 0xee40c5e7;
          iVar46 = 0;
          puStack_98 = (uint *)0x61c8869e;
          puStack_94 = (uint *)0xba94458a;
          uStack_ac = 0xc2b2ae8d;
          puStack_dc = puVar27;
          uStack_a8 = 0x6854fb60;
          puStack_cc = puVar28;
          puVar47 = puVar28;
          puVar17 = puVar27;
          do {
            uStack_b0 = uVar9;
            lVar1 = (ulonglong)puVar47[6] * 0x27d4eb4f;
            uVar20 = (uint)lVar1;
            puVar24 = puVar47 + 1;
            uVar21 = uVar20 + (int)puStack_94;
            pbVar12 = (byte *)((int)puStack_98 +
                              (uint)CARRY4(uVar20,(uint)puStack_94) +
                              puVar47[7] * 0x27d4eb4f +
                              puVar47[6] * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20));
            uVar20 = (uint)pbVar12 >> 1;
            uStack_c4 = uVar21 * -0x80000000 | uVar20;
            puStack_94 = (uint *)((ulonglong)uStack_c4 * 0x85ebca87);
            uVar21 = uVar21 >> 1;
            uStack_b8 = (int)pbVar12 * -0x80000000 | uVar21;
            puStack_98 = (uint *)(uStack_b8 * -0x7a143579 +
                                 uStack_c4 * -0x61c8864f +
                                 (int)((ulonglong)uStack_c4 * 0x85ebca87 >> 0x20));
            lVar1 = (ulonglong)puVar47[4] * 0x27d4eb4f;
            uVar60 = (uint)lVar1;
            uVar35 = uVar60 + (int)piStack_9c;
            uVar45 = puVar47[5] * 0x27d4eb4f +
                     puVar47[4] * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20) + uStack_a0 +
                     (uint)CARRY4(uVar60,(uint)piStack_9c);
            uVar60 = uVar45 >> 1;
            uStack_bc = uVar35 * -0x80000000 | uVar60;
            piStack_9c = (int *)((ulonglong)uStack_bc * 0x85ebca87);
            uVar35 = uVar35 >> 1;
            uStack_c0 = uVar45 * -0x80000000 | uVar35;
            puVar54 = puVar47 + 2;
            uStack_a0 = uStack_c0 * -0x7a143579 +
                        uStack_bc * -0x61c8864f + (int)((ulonglong)uStack_bc * 0x85ebca87 >> 0x20);
            puVar55 = puVar47 + 3;
            uVar42 = *puVar47;
            puVar47 = puVar47 + 8;
            lVar1 = (ulonglong)*puVar54 * 0x27d4eb4f;
            uVar45 = (uint)lVar1;
            uVar49 = uVar45 + uStack_a8;
            uVar44 = *puVar55 * 0x27d4eb4f +
                     *puVar54 * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20) + uStack_ac +
                     (uint)CARRY4(uVar45,uStack_a8);
            uVar45 = uVar44 >> 1;
            uVar37 = uVar49 * -0x80000000 | uVar45;
            uStack_a8 = (uint)((ulonglong)uVar37 * 0x85ebca87);
            uVar49 = uVar49 >> 1;
            uVar43 = uVar44 * -0x80000000 | uVar49;
            uStack_ac = uVar43 * -0x7a143579 +
                        uVar37 * -0x61c8864f + (int)((ulonglong)uVar37 * 0x85ebca87 >> 0x20);
            lVar1 = (ulonglong)uVar42 * 0x27d4eb4f;
            uVar44 = (uint)lVar1;
            uVar48 = uVar44 + uStack_a4;
            uVar9 = *puVar24 * 0x27d4eb4f + uVar42 * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20) +
                    uVar9 + (uint)CARRY4(uVar44,uStack_a4);
            bVar61 = puVar17 < (undefined4 *)0x20;
            puVar17 = puVar17 + -8;
            uVar44 = uVar9 >> 1;
            uVar53 = uVar48 * -0x80000000 | uVar44;
            iVar46 = iVar46 - (uint)bVar61;
            uStack_a4 = (uint)((ulonglong)uVar53 * 0x85ebca87);
            uVar48 = uVar48 >> 1;
            uVar42 = uVar9 * -0x80000000 | uVar48;
            uVar9 = uVar42 * -0x7a143579 +
                    uVar53 * -0x61c8864f + (int)((ulonglong)uVar53 * 0x85ebca87 >> 0x20);
          } while ((uint)(puVar17 < (undefined4 *)0x20) <= (uint)-iVar46);
          uVar29 = uStack_a4 << 1 | uVar9 >> 0x1f;
          uVar51 = uStack_a8 << 7 | uStack_ac >> 0x19;
          uVar30 = uVar51 + uVar29;
          uVar52 = (int)piStack_9c << 0xc | uStack_a0 >> 0x14;
          uVar56 = uVar30 + uVar52;
          piStack_9c = (int *)((uStack_ac * 0x80 | uStack_a8 >> 0x19) +
                               (uVar9 * 2 | uStack_a4 >> 0x1f) + (uint)CARRY4(uVar51,uVar29) +
                               (uStack_a0 * 0x1000 | (uint)piStack_9c >> 0x14) +
                              (uint)CARRY4(uVar30,uVar52));
          uStack_a0 = (uint)((ulonglong)uVar53 * 0x80000000 >> 0x20);
          uVar57 = (uint)((ulonglong)uVar53 * 0x80000000) |
                   uVar42 * 0xf796ca9 +
                   uVar53 * -0x210ca4ff + (int)((ulonglong)uVar53 * 0xf796ca9 >> 0x20) >> 1;
          lVar1 = (ulonglong)uVar57 * 0x85ebca87;
          uStack_a8 = (uint)((ulonglong)lVar1 >> 0x20);
          uVar42 = (int)puStack_94 << 0x12 | (uint)puStack_98 >> 0xe;
          uVar53 = uVar56 + uVar42 ^ (uint)lVar1;
          lVar1 = (ulonglong)uVar53 * 0x85ebca87;
          uStack_a4 = (uint)lVar1;
          uVar51 = (uint)((ulonglong)uVar37 * 0x80000000) |
                   uVar43 * 0xf796ca9 +
                   uVar37 * -0x210ca4ff + (int)((ulonglong)uVar37 * 0xf796ca9 >> 0x20) >> 1;
          lVar3 = (ulonglong)uVar51 * 0x85ebca87;
          uVar43 = uStack_a4 + 0xc2b2ae63 ^ (uint)lVar3;
          lVar4 = (ulonglong)uVar43 * 0x85ebca87;
          uVar52 = (uint)lVar4;
          uVar31 = (uint)((ulonglong)uStack_bc * 0x80000000) |
                   uStack_c0 * 0xf796ca9 +
                   uStack_bc * -0x210ca4ff + (int)((ulonglong)uStack_bc * 0xf796ca9 >> 0x20) >> 1;
          lVar5 = (ulonglong)uVar31 * 0x85ebca87;
          uVar29 = uVar52 + 0xc2b2ae63 ^ (uint)lVar5;
          lVar6 = (ulonglong)uVar29 * 0x85ebca87;
          uVar32 = (uint)lVar6;
          uVar33 = (uint)((ulonglong)uStack_c4 * 0x80000000) |
                   uStack_b8 * 0xf796ca9 +
                   uStack_c4 * -0x210ca4ff + (int)((ulonglong)uStack_c4 * 0xf796ca9 >> 0x20) >> 1;
          lVar7 = (ulonglong)uVar33 * 0x85ebca87;
          uVar30 = uVar32 + 0xc2b2ae63 ^ (uint)lVar7;
          lVar8 = (ulonglong)uVar30 * 0x85ebca87;
          uVar34 = (uint)lVar8;
          uVar9 = uVar34 + 0xc2b2ae63;
          iVar46 = (((((int)piStack_9c +
                       (uint)CARRY4(uVar56,uVar42) +
                       ((int)puStack_98 * 0x40000 | (uint)puStack_94 >> 0xe) ^
                      (uVar48 * -0x80000000 + uVar44 * -0x784349ac + uStack_a0) * -0x7a143579 +
                      uVar57 * -0x61c8864f + uStack_a8) * -0x7a143579 +
                      uVar53 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20) + -0x7a143589 +
                      (uint)(0x3d4d519c < uStack_a4) ^
                     (uVar49 * -0x80000000 +
                     uVar45 * -0x784349ac + (int)((ulonglong)uVar37 * 0x80000000 >> 0x20)) *
                     -0x7a143579 + uVar51 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20)) *
                     -0x7a143579 + uVar43 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) +
                     -0x7a143589 + (uint)(0x3d4d519c < uVar52) ^
                    (uVar35 * -0x80000000 +
                    uVar60 * -0x784349ac + (int)((ulonglong)uStack_bc * 0x80000000 >> 0x20)) *
                    -0x7a143579 + uVar31 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20)) *
                    -0x7a143579 + uVar29 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20) +
                    -0x7a143589 + (uint)(0x3d4d519c < uVar32) ^
                   (uVar21 * -0x80000000 +
                   uVar20 * -0x784349ac + (int)((ulonglong)uStack_c4 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar33 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20)) *
                   -0x7a143579 + uVar30 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20) +
                   -0x7a143589 + (uint)(0x3d4d519c < uVar34);
        }
        puVar19 = (undefined1 *)(uVar9 + (int)puVar27);
        uVar9 = iVar46 + (uint)CARRY4(uVar9,(uint)puVar27);
        puVar28 = (uint *)((int)puVar28 + ((uint)puVar27 & 0xffffffe0));
        uVar20 = (uint)puVar27 & 0x1f;
        for (uVar21 = 0; uVar21 != 0 || uVar21 < (7 < uVar20); uVar21 = (uVar21 - 1) + (uint)bVar61)
        {
          uVar60 = *puVar28;
          uVar45 = (uint)((ulonglong)uVar60 * 0x80000000) |
                   puVar28[1] * 0x27d4eb4f +
                   uVar60 * -0x3d4d51c3 + (int)((ulonglong)uVar60 * 0x27d4eb4f >> 0x20) >> 1;
          lVar1 = (ulonglong)uVar45 * 0x85ebca87;
          uVar49 = 0xfffffff8;
          uVar35 = (uint)lVar1 ^ (uint)puVar19;
          uVar9 = (puVar28[1] * -0x80000000 +
                  uVar60 * -0x6c158a59 + (int)((ulonglong)uVar60 * 0x80000000 >> 0x20)) *
                  -0x7a143579 + uVar45 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20) ^ uVar9;
          uVar45 = uVar35 << 0x1b | uVar9 >> 5;
          lVar1 = (ulonglong)uVar45 * 0x85ebca87;
          uVar60 = (uint)lVar1;
          puVar19 = (undefined1 *)(uVar60 + 0xc2b2ae63);
          iVar46 = 8;
          uVar9 = (uVar9 << 0x1b | uVar35 >> 5) * -0x7a143579 +
                  uVar45 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20) + -0x7a143589 +
                  (uint)(0x3d4d519c < uVar60);
LAB_71764524:
          bVar61 = CARRY4(uVar49,uVar20);
          uVar20 = uVar49 + uVar20;
          puVar28 = (uint *)((int)puVar28 + iVar46);
        }
        if (uVar21 != 0 || uVar21 < (3 < uVar20)) {
          lVar1 = (ulonglong)*puVar28 * 0x85ebca87;
          uVar60 = (uint)lVar1 ^ (uint)puVar19;
          uVar9 = *puVar28 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20) ^ uVar9;
          uVar45 = uVar60 << 0x17 | uVar9 >> 9;
          lVar1 = (ulonglong)uVar45 * 0x27d4eb4f;
          uVar35 = (uint)lVar1;
          iVar46 = 4;
          puVar19 = (undefined1 *)(uVar35 + 0x9e3779f9);
          uVar9 = (uVar9 << 0x17 | uVar60 >> 9) * 0x27d4eb4f +
                  uVar45 * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20) + 0x165667b1 +
                  (uint)(0x61c88606 < uVar35);
          uVar49 = 0xfffffffc;
          goto LAB_71764524;
        }
        if (uVar20 != 0 || uVar21 != 0) {
          lVar1 = (ulonglong)(uint)(byte)*puVar28 * 0x165667c5;
          uVar60 = (uint)lVar1 ^ (uint)puVar19;
          uVar9 = (uint)(byte)*puVar28 * 0x27d4eb2f + (int)((ulonglong)lVar1 >> 0x20) ^ uVar9;
          uVar35 = uVar60 << 0xb | uVar9 >> 0x15;
          lVar1 = (ulonglong)uVar35 * 0x85ebca87;
          puVar19 = (undefined1 *)lVar1;
          iVar46 = 1;
          uVar9 = (uVar9 << 0xb | uVar60 >> 0x15) * -0x7a143579 +
                  uVar35 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20);
          uVar49 = 0xffffffff;
          goto LAB_71764524;
        }
        uVar20 = (uint)puVar19 ^ uVar9 >> 1;
        lVar1 = (ulonglong)uVar20 * 0x27d4eb4f;
        uVar21 = (uint)lVar1;
        uVar9 = uVar9 * 0x27d4eb4f + uVar20 * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20);
        uVar21 = (uVar21 >> 0x1d | uVar9 * 8) ^ uVar21;
        lVar1 = (ulonglong)uVar21 * 0x9e3779f9;
        uVar9 = (uVar9 ^ uVar9 >> 0x1d) * -0x61c88607 +
                uVar21 * 0x165667b1 + (int)((ulonglong)lVar1 >> 0x20);
        piVar22[8] = uVar9;
        piVar22[7] = uVar9 ^ (uint)lVar1;
        puVar27 = puStack_b4;
        goto LAB_71764698;
      }
      goto LAB_717647d8;
    }
  }
LAB_71764698:
  *(undefined1 *)(puVar27 + 0xd2) = 0;
  while( true ) {
    uVar9 = *puVar58 ^ 0x6a4dab1f;
    uVar20 = uVar9 | puVar58[1] ^ 0x679b29b;
    bVar61 = uVar20 == 0;
    if (bVar61) {
      uVar20 = puVar58[3] ^ 0xfcc126c8;
      uVar9 = puVar58[2] ^ 0x6efdd0cf;
    }
    if ((bVar61 && (uVar9 == 0 && uVar20 == 0)) &&
       (puVar58[4] == 0xbefc55d6 && puVar58[5] == 0x370f3a77)) break;
    puVar58 = puVar58 + 1;
  }
  uVar9 = puVar58[0xc017];
  if (uVar9 == 0) goto LAB_71764e90;
  piVar36 = (int *)(uVar9 + 4);
  piVar25 = (int *)*piVar36;
  piVar22 = piVar36;
  piVar10 = piVar36;
  if (piVar25 != (int *)0x0) {
    do {
      piVar50 = piVar25;
      if ((uint *)piVar25[4] < puStack_d0) {
        piVar25 = piVar25 + 1;
        piVar50 = piVar22;
      }
      piVar25 = (int *)*piVar25;
      piVar22 = piVar50;
    } while (piVar25 != (int *)0x0);
    if ((piVar50 != piVar36) && (piVar10 = piVar50, puStack_d0 < (uint *)piVar50[4])) {
      piVar10 = piVar36;
    }
  }
  if (piVar36 == piVar10) goto LAB_71764e90;
  *puStack_d0 = 0x42700000;
  for (piVar22 = *(int **)(puVar58[0xc017] + 4); piVar22 != (int *)0x0; piVar22 = (int *)*piVar22) {
    while ((uint *)piVar22[4] <= puStack_d0) {
      if (puStack_d0 <= (uint *)piVar22[4]) goto LAB_717647e4;
      piVar22 = (int *)piVar22[1];
      if (piVar22 == (int *)0x0) goto LAB_717647d8;
    }
  }
LAB_717647d8:
  FUN_712f6bb0(s_map__at__key_not_found_700619a7);
  piVar22 = extraout_r2;
LAB_717647e4:
  uVar9 = 0x56d677d6;
  puVar47 = (uint *)piVar22[5];
  piStack_c8 = piVar22;
  iVar46 = 0x27d4eb7f;
  puVar28 = (uint *)piVar22[6];
  if (&DAT_0000001f < puVar28) {
    uStack_a0 = 0x50;
    piStack_9c = (int *)0x40801011;
    uVar9 = 0x60ea283e;
    uStack_a4 = 0xee40c5e7;
    iVar46 = 0;
    puStack_98 = (uint *)0x61c8869e;
    puStack_94 = (uint *)0xba94458a;
    uStack_ac = 0xc2b2ae8d;
    puStack_d0 = puVar28;
    uStack_a8 = 0x6854fb60;
    puStack_cc = puVar47;
    puVar58 = puVar47;
    puVar24 = puVar28;
    do {
      uStack_b0 = uVar9;
      lVar1 = (ulonglong)puVar58[6] * 0x27d4eb4f;
      uVar20 = (uint)lVar1;
      puVar54 = puVar58 + 1;
      uVar21 = uVar20 + (int)puStack_94;
      pbVar12 = (byte *)((int)puStack_98 +
                        (uint)CARRY4(uVar20,(uint)puStack_94) +
                        puVar58[7] * 0x27d4eb4f +
                        puVar58[6] * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20));
      uVar20 = (uint)pbVar12 >> 1;
      uStack_c4 = uVar21 * -0x80000000 | uVar20;
      puStack_94 = (uint *)((ulonglong)uStack_c4 * 0x85ebca87);
      uVar21 = uVar21 >> 1;
      uStack_b8 = (int)pbVar12 * -0x80000000 | uVar21;
      puStack_98 = (uint *)(uStack_b8 * -0x7a143579 +
                           uStack_c4 * -0x61c8864f +
                           (int)((ulonglong)uStack_c4 * 0x85ebca87 >> 0x20));
      lVar1 = (ulonglong)puVar58[4] * 0x27d4eb4f;
      uVar60 = (uint)lVar1;
      uVar35 = uVar60 + (int)piStack_9c;
      uVar45 = puVar58[5] * 0x27d4eb4f + puVar58[4] * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20)
               + uStack_a0 + (uint)CARRY4(uVar60,(uint)piStack_9c);
      uVar60 = uVar45 >> 1;
      uStack_bc = uVar35 * -0x80000000 | uVar60;
      piStack_9c = (int *)((ulonglong)uStack_bc * 0x85ebca87);
      uVar35 = uVar35 >> 1;
      uStack_c0 = uVar45 * -0x80000000 | uVar35;
      puVar55 = puVar58 + 2;
      uStack_a0 = uStack_c0 * -0x7a143579 +
                  uStack_bc * -0x61c8864f + (int)((ulonglong)uStack_bc * 0x85ebca87 >> 0x20);
      puVar38 = puVar58 + 3;
      uVar42 = *puVar58;
      puVar58 = puVar58 + 8;
      lVar1 = (ulonglong)*puVar55 * 0x27d4eb4f;
      uVar45 = (uint)lVar1;
      uVar49 = uVar45 + uStack_a8;
      uVar44 = *puVar38 * 0x27d4eb4f + *puVar55 * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20) +
               uStack_ac + (uint)CARRY4(uVar45,uStack_a8);
      uVar45 = uVar44 >> 1;
      uVar37 = uVar49 * -0x80000000 | uVar45;
      uStack_a8 = (uint)((ulonglong)uVar37 * 0x85ebca87);
      uVar49 = uVar49 >> 1;
      uVar43 = uVar44 * -0x80000000 | uVar49;
      uStack_ac = uVar43 * -0x7a143579 +
                  uVar37 * -0x61c8864f + (int)((ulonglong)uVar37 * 0x85ebca87 >> 0x20);
      lVar1 = (ulonglong)uVar42 * 0x27d4eb4f;
      uVar44 = (uint)lVar1;
      uVar48 = uVar44 + uStack_a4;
      uVar9 = *puVar54 * 0x27d4eb4f + uVar42 * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20) + uVar9
              + (uint)CARRY4(uVar44,uStack_a4);
      bVar61 = puVar24 < (uint *)0x20;
      puVar24 = puVar24 + -8;
      uVar44 = uVar9 >> 1;
      uVar53 = uVar48 * -0x80000000 | uVar44;
      iVar46 = iVar46 - (uint)bVar61;
      uStack_a4 = (uint)((ulonglong)uVar53 * 0x85ebca87);
      uVar48 = uVar48 >> 1;
      uVar42 = uVar9 * -0x80000000 | uVar48;
      uVar9 = uVar42 * -0x7a143579 +
              uVar53 * -0x61c8864f + (int)((ulonglong)uVar53 * 0x85ebca87 >> 0x20);
    } while ((uint)(puVar24 < (uint *)0x20) <= (uint)-iVar46);
    uVar29 = uStack_a4 << 1 | uVar9 >> 0x1f;
    uVar51 = uStack_a8 << 7 | uStack_ac >> 0x19;
    uVar30 = uVar51 + uVar29;
    uVar52 = (int)piStack_9c << 0xc | uStack_a0 >> 0x14;
    uVar56 = uVar30 + uVar52;
    piStack_9c = (int *)((uStack_ac * 0x80 | uStack_a8 >> 0x19) + (uVar9 * 2 | uStack_a4 >> 0x1f) +
                         (uint)CARRY4(uVar51,uVar29) +
                         (uStack_a0 * 0x1000 | (uint)piStack_9c >> 0x14) +
                        (uint)CARRY4(uVar30,uVar52));
    uStack_a0 = (uint)((ulonglong)uVar53 * 0x80000000 >> 0x20);
    uVar57 = (uint)((ulonglong)uVar53 * 0x80000000) |
             uVar42 * 0xf796ca9 +
             uVar53 * -0x210ca4ff + (int)((ulonglong)uVar53 * 0xf796ca9 >> 0x20) >> 1;
    lVar1 = (ulonglong)uVar57 * 0x85ebca87;
    uStack_a8 = (uint)((ulonglong)lVar1 >> 0x20);
    uVar42 = (int)puStack_94 << 0x12 | (uint)puStack_98 >> 0xe;
    uVar53 = uVar56 + uVar42 ^ (uint)lVar1;
    lVar1 = (ulonglong)uVar53 * 0x85ebca87;
    uStack_a4 = (uint)lVar1;
    uVar51 = (uint)((ulonglong)uVar37 * 0x80000000) |
             uVar43 * 0xf796ca9 +
             uVar37 * -0x210ca4ff + (int)((ulonglong)uVar37 * 0xf796ca9 >> 0x20) >> 1;
    lVar3 = (ulonglong)uVar51 * 0x85ebca87;
    uVar43 = uStack_a4 + 0xc2b2ae63 ^ (uint)lVar3;
    lVar4 = (ulonglong)uVar43 * 0x85ebca87;
    uVar52 = (uint)lVar4;
    uVar31 = (uint)((ulonglong)uStack_bc * 0x80000000) |
             uStack_c0 * 0xf796ca9 +
             uStack_bc * -0x210ca4ff + (int)((ulonglong)uStack_bc * 0xf796ca9 >> 0x20) >> 1;
    lVar5 = (ulonglong)uVar31 * 0x85ebca87;
    uVar29 = uVar52 + 0xc2b2ae63 ^ (uint)lVar5;
    lVar6 = (ulonglong)uVar29 * 0x85ebca87;
    uVar32 = (uint)lVar6;
    uVar33 = (uint)((ulonglong)uStack_c4 * 0x80000000) |
             uStack_b8 * 0xf796ca9 +
             uStack_c4 * -0x210ca4ff + (int)((ulonglong)uStack_c4 * 0xf796ca9 >> 0x20) >> 1;
    lVar7 = (ulonglong)uVar33 * 0x85ebca87;
    uVar30 = uVar32 + 0xc2b2ae63 ^ (uint)lVar7;
    lVar8 = (ulonglong)uVar30 * 0x85ebca87;
    uVar34 = (uint)lVar8;
    uVar9 = uVar34 + 0xc2b2ae63;
    iVar46 = (((((int)piStack_9c +
                 (uint)CARRY4(uVar56,uVar42) + ((int)puStack_98 * 0x40000 | (uint)puStack_94 >> 0xe)
                ^ (uVar48 * -0x80000000 + uVar44 * -0x784349ac + uStack_a0) * -0x7a143579 +
                  uVar57 * -0x61c8864f + uStack_a8) * -0x7a143579 +
                uVar53 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20) + -0x7a143589 +
                (uint)(0x3d4d519c < uStack_a4) ^
               (uVar49 * -0x80000000 +
               uVar45 * -0x784349ac + (int)((ulonglong)uVar37 * 0x80000000 >> 0x20)) * -0x7a143579 +
               uVar51 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20)) * -0x7a143579 +
               uVar43 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) + -0x7a143589 +
               (uint)(0x3d4d519c < uVar52) ^
              (uVar35 * -0x80000000 +
              uVar60 * -0x784349ac + (int)((ulonglong)uStack_bc * 0x80000000 >> 0x20)) * -0x7a143579
              + uVar31 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20)) * -0x7a143579 +
              uVar29 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20) + -0x7a143589 +
              (uint)(0x3d4d519c < uVar32) ^
             (uVar21 * -0x80000000 +
             uVar20 * -0x784349ac + (int)((ulonglong)uStack_c4 * 0x80000000 >> 0x20)) * -0x7a143579
             + uVar33 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20)) * -0x7a143579 +
             uVar30 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20) + -0x7a143589 +
             (uint)(0x3d4d519c < uVar34);
  }
  pbVar12 = (byte *)(uVar9 + (int)puVar28);
  uVar9 = iVar46 + (uint)CARRY4(uVar9,(uint)puVar28);
  puVar47 = (uint *)((int)puVar47 + ((uint)puVar28 & 0xffffffe0));
  uVar20 = (uint)puVar28 & 0x1f;
  uVar21 = 0;
  do {
    if (uVar21 == 0 && (7 < uVar20) <= uVar21) {
      if (uVar21 == 0 && (3 < uVar20) <= uVar21) {
        if (uVar20 == 0 && uVar21 == 0) goto LAB_71764e18;
        lVar1 = (ulonglong)(uint)(byte)*puVar47 * 0x165667c5;
        uVar60 = (uint)lVar1 ^ (uint)pbVar12;
        uVar9 = (uint)(byte)*puVar47 * 0x27d4eb2f + (int)((ulonglong)lVar1 >> 0x20) ^ uVar9;
        uVar35 = uVar60 << 0xb | uVar9 >> 0x15;
        lVar1 = (ulonglong)uVar35 * 0x85ebca87;
        pbVar12 = (byte *)lVar1;
        iVar46 = 1;
        uVar9 = (uVar9 << 0xb | uVar60 >> 0x15) * -0x7a143579 +
                uVar35 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20);
        uVar49 = 0xffffffff;
      }
      else {
        lVar1 = (ulonglong)*puVar47 * 0x85ebca87;
        uVar60 = (uint)lVar1 ^ (uint)pbVar12;
        uVar9 = *puVar47 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20) ^ uVar9;
        uVar45 = uVar60 << 0x17 | uVar9 >> 9;
        lVar1 = (ulonglong)uVar45 * 0x27d4eb4f;
        uVar35 = (uint)lVar1;
        iVar46 = 4;
        pbVar12 = (byte *)(uVar35 + 0x9e3779f9);
        uVar9 = (uVar9 << 0x17 | uVar60 >> 9) * 0x27d4eb4f +
                uVar45 * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20) + 0x165667b1 +
                (uint)(0x61c88606 < uVar35);
        uVar49 = 0xfffffffc;
      }
    }
    else {
      uVar60 = *puVar47;
      uVar45 = (uint)((ulonglong)uVar60 * 0x80000000) |
               puVar47[1] * 0x27d4eb4f +
               uVar60 * -0x3d4d51c3 + (int)((ulonglong)uVar60 * 0x27d4eb4f >> 0x20) >> 1;
      lVar1 = (ulonglong)uVar45 * 0x85ebca87;
      uVar49 = 0xfffffff8;
      uVar35 = (uint)lVar1 ^ (uint)pbVar12;
      uVar9 = (puVar47[1] * -0x80000000 +
              uVar60 * -0x6c158a59 + (int)((ulonglong)uVar60 * 0x80000000 >> 0x20)) * -0x7a143579 +
              uVar45 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20) ^ uVar9;
      uVar45 = uVar35 << 0x1b | uVar9 >> 5;
      lVar1 = (ulonglong)uVar45 * 0x85ebca87;
      uVar60 = (uint)lVar1;
      pbVar12 = (byte *)(uVar60 + 0xc2b2ae63);
      iVar46 = 8;
      uVar9 = (uVar9 << 0x1b | uVar35 >> 5) * -0x7a143579 +
              uVar45 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20) + -0x7a143589 +
              (uint)(0x3d4d519c < uVar60);
    }
    bVar61 = CARRY4(uVar49,uVar20);
    uVar20 = uVar49 + uVar20;
    puVar47 = (uint *)((int)puVar47 + iVar46);
    uVar21 = (uVar21 - 1) + (uint)bVar61;
  } while( true );
code_r0x717637a8:
  puVar27 = (undefined4 *)puVar27[1];
  goto joined_r0x71763784;
code_r0x71763f90:
  piVar22 = (int *)piVar22[1];
  goto joined_r0x71763f6c;
LAB_71764e18:
  uVar20 = (uint)pbVar12 ^ uVar9 >> 1;
  lVar1 = (ulonglong)uVar20 * 0x27d4eb4f;
  uVar21 = (uint)lVar1;
  uVar9 = uVar9 * 0x27d4eb4f + uVar20 * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20);
  uVar21 = (uVar21 >> 0x1d | uVar9 * 8) ^ uVar21;
  lVar1 = (ulonglong)uVar21 * 0x9e3779f9;
  uVar9 = (uVar9 ^ uVar9 >> 0x1d) * -0x61c88607 +
          uVar21 * 0x165667b1 + (int)((ulonglong)lVar1 >> 0x20);
  piVar22[8] = uVar9;
  piVar22[7] = uVar9 ^ (uint)lVar1;
  puVar27 = puStack_b4;
LAB_71764e90:
  *(undefined1 *)(puVar27 + 0x102) = 0;
  *(undefined1 *)(puVar27 + 0xd0) = 0;
  puVar27[0x101] = 0;
  puVar28 = auStack_f8;
  while( true ) {
    uVar9 = *puVar28 ^ 0x6a4dab1f;
    uVar20 = uVar9 | puVar28[1] ^ 0x679b29b;
    bVar61 = uVar20 == 0;
    if (bVar61) {
      uVar20 = puVar28[3] ^ 0xfcc126c8;
      uVar9 = puVar28[2] ^ 0x6efdd0cf;
    }
    if ((bVar61 && (uVar9 == 0 && uVar20 == 0)) &&
       (piVar22 = (int *)0xbefc55d6, puVar28[4] == 0xbefc55d6 && puVar28[5] == 0x370f3a77)) break;
    puVar28 = puVar28 + 1;
  }
  piVar10 = (int *)puVar28[0xc017];
  bVar61 = piVar10 != (int *)0x0;
  if (bVar61) {
    piVar10 = piVar10 + 1;
    piVar22 = (int *)*piVar10;
  }
  piVar36 = piVar10;
  if (!bVar61 || piVar22 == (int *)0x0) {
LAB_71764f24:
    DataMemoryBarrier(0xb);
    puVar27[0xcd] = 0;
    DataMemoryBarrier(0xb);
    puVar27[0xce] = 0;
    DataMemoryBarrier(0xb);
    puVar27[0xcf] = 0;
    DataMemoryBarrier(0xb);
    puStack_d8[0x4b] = 0x3f800000;
    puStack_d8[0x4c] = 0x3f800000;
    puStack_d8[0x4d] = 0x3f800000;
    puStack_d8[0x4e] = 0x3f800000;
    puStack_d8[0x4f] = 0x3f800000;
    puStack_d8[0x50] = 0x3f800000;
    puStack_d8[0x51] = 0x3f800000;
    puStack_d8[0x52] = 0x3f800000;
    puStack_d8[0x43] = 0x3f800000;
    puStack_d8[0x44] = 0x3f800000;
    puStack_d8[0x45] = 0x3f800000;
    puStack_d8[0x46] = 0x3f800000;
    puStack_d8[0x47] = 0x3f800000;
    puStack_d8[0x48] = 0x3f800000;
    puStack_d8[0x49] = 0x3f800000;
    puStack_d8[0x4a] = 0x3f800000;
    puStack_d8[0x3b] = 0x3f800000;
    puStack_d8[0x3c] = 0x3f800000;
    puStack_d8[0x3d] = 0x3f800000;
    puStack_d8[0x3e] = 0x3f800000;
    puStack_d8[0x3f] = 0x3f800000;
    puStack_d8[0x40] = 0x3f800000;
    puStack_d8[0x41] = 0x3f800000;
    puStack_d8[0x42] = 0x3f800000;
    puStack_d8[0x33] = 0x3f800000;
    puStack_d8[0x34] = 0x3f800000;
    puStack_d8[0x35] = 0x3f800000;
    puStack_d8[0x36] = 0x3f800000;
    puStack_d8[0x37] = 0x3f800000;
    puStack_d8[0x38] = 0x3f800000;
    puStack_d8[0x39] = 0x3f800000;
    puStack_d8[0x3a] = 0x3f800000;
    puStack_d8[0x2b] = 0x3f800000;
    puStack_d8[0x2c] = 0x3f800000;
    puStack_d8[0x2d] = 0x3f800000;
    puStack_d8[0x2e] = 0x3f800000;
    puStack_d8[0x2f] = 0x3f800000;
    puStack_d8[0x30] = 0x3f800000;
    puStack_d8[0x31] = 0x3f800000;
    puStack_d8[0x32] = 0x3f800000;
    thunk_FUN_71566a68(DAT_711a3938,0);
    DataMemoryBarrier(0xb);
    *(undefined1 *)((int)puVar27 + 0x12d) = 0;
    DataMemoryBarrier(0xb);
    *(undefined1 *)(puVar27 + 0x4b) = 1;
    DataMemoryBarrier(0xb);
    uVar14 = thunk_MwhHq(4);
    IqYTnHtEYRLvLLTOJMZHzxakOfRAHvNTt();
    puVar17 = (undefined4 *)thunk_MwhHq(0x10);
    *puVar17 = uVar14;
    puVar17[1] = &LAB_71766f58;
    puVar17[2] = 0;
    puVar17[3] = puVar27;
    iVar46 = imp_pthread_create(&uStack_90,0,&LAB_71782e64);
    if (iVar46 == 0) {
      if (puVar27[0x4a] == 0) {
        puVar27[0x4a] = uStack_90;
        uStack_90 = 0;
        uQwrLJbzyUVbHmvQcVNflhV(&uStack_90);
        if (_ext___stack_chk_guard == iStack_2c) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        imp___stack_chk_fail(iStack_2c);
      }
    }
    else {
      BryazjfoMPqEkZEtKkG_KttlecoGMjr_tAmWbCi(iVar46,s_thread_constructor_failed_70063c8c);
    }
    KLoalMQagZzrpvz();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
    piVar25 = piVar22;
    if ((uint *)piVar22[4] < puStack_d4) {
      piVar22 = piVar22 + 1;
      piVar25 = piVar36;
    }
    piVar22 = (int *)*piVar22;
    piVar36 = piVar25;
  } while (piVar22 != (int *)0x0);
  if ((piVar25 == piVar10) || (puStack_d4 < (uint *)piVar25[4])) goto LAB_71764f24;
  *(byte *)puStack_d4 = 0;
  for (puVar28 = *(uint **)(puVar28[0xc017] + 4); puVar28 != (uint *)0x0; puVar28 = (uint *)*puVar28
      ) {
    while ((uint *)puVar28[4] <= puStack_d4) {
      if (puStack_d4 <= (uint *)puVar28[4]) {
        uVar9 = 0x56d677d6;
        puVar58 = (uint *)puVar28[5];
        puVar47 = (uint *)puVar28[6];
        iVar46 = 0x27d4eb7f;
        if (&DAT_0000001f < puVar47) {
          piStack_9c = (int *)0x50;
          uStack_a0 = 0xee40c5e7;
          puStack_98 = (uint *)0x61c8869e;
          puStack_94 = (uint *)0xba94458a;
          uStack_b8 = 0x40801011;
          uStack_a8 = 0xc2b2ae8d;
          uStack_a4 = 0x6854fb60;
          uVar9 = 0x60ea283e;
          uVar20 = 0;
          puVar24 = puVar47;
          puVar54 = puVar58;
          do {
            uStack_ac = uVar20;
            uStack_b0 = uVar9;
            lVar1 = (ulonglong)puVar54[6] * 0x27d4eb4f;
            uVar9 = (uint)lVar1;
            uVar60 = uVar9 + (int)puStack_94;
            pbVar12 = (byte *)((int)puStack_98 +
                              (uint)CARRY4(uVar9,(uint)puStack_94) +
                              puVar54[7] * 0x27d4eb4f +
                              puVar54[6] * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20));
            uVar21 = (uint)pbVar12 >> 1;
            uStack_bc = uVar60 * -0x80000000 | uVar21;
            puStack_94 = (uint *)((ulonglong)uStack_bc * 0x85ebca87);
            uVar60 = uVar60 >> 1;
            uStack_c0 = (int)pbVar12 * -0x80000000 | uVar60;
            puStack_98 = (uint *)(uStack_c0 * -0x7a143579 +
                                 uStack_bc * -0x61c8864f +
                                 (int)((ulonglong)uStack_bc * 0x85ebca87 >> 0x20));
            lVar1 = (ulonglong)puVar54[4] * 0x27d4eb4f;
            uVar9 = (uint)lVar1;
            uVar45 = uVar9 + uStack_b8;
            uVar9 = puVar54[5] * 0x27d4eb4f +
                    puVar54[4] * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20) + (int)piStack_9c +
                    (uint)CARRY4(uVar9,uStack_b8);
            uVar35 = uVar9 >> 1;
            uStack_c4 = uVar45 * -0x80000000 | uVar35;
            uStack_b8 = (uint)((ulonglong)uStack_c4 * 0x85ebca87);
            uVar45 = uVar45 >> 1;
            piStack_c8 = (int *)(uVar9 * -0x80000000 | uVar45);
            puVar55 = puVar54 + 2;
            puVar38 = puVar54 + 3;
            lVar1 = (ulonglong)*puVar55 * 0x27d4eb4f;
            uVar9 = (uint)lVar1;
            piStack_9c = (int *)((int)piStack_c8 * -0x7a143579 +
                                uStack_c4 * -0x61c8864f +
                                (int)((ulonglong)uStack_c4 * 0x85ebca87 >> 0x20));
            uVar20 = *puVar54;
            uVar44 = uVar9 + uStack_a4;
            puVar39 = puVar54 + 1;
            puVar54 = puVar54 + 8;
            uVar9 = *puVar38 * 0x27d4eb4f + *puVar55 * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20)
                    + uStack_a8 + (uint)CARRY4(uVar9,uStack_a4);
            uVar49 = uVar9 >> 1;
            uVar42 = uVar44 * -0x80000000 | uVar49;
            uVar44 = uVar44 >> 1;
            uVar53 = uVar9 * -0x80000000 | uVar44;
            uStack_a4 = (uint)((ulonglong)uVar42 * 0x85ebca87);
            uStack_a8 = uVar53 * -0x7a143579 +
                        uVar42 * -0x61c8864f + (int)((ulonglong)uVar42 * 0x85ebca87 >> 0x20);
            lVar1 = (ulonglong)uVar20 * 0x27d4eb4f;
            uVar9 = (uint)lVar1;
            uVar37 = uVar9 + uStack_a0;
            uVar9 = *puVar39 * 0x27d4eb4f + uVar20 * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20) +
                    uStack_b0 + (uint)CARRY4(uVar9,uStack_a0);
            bVar61 = puVar24 < (uint *)0x20;
            puVar24 = puVar24 + -8;
            uVar48 = uVar9 >> 1;
            uVar29 = uVar37 * -0x80000000 | uVar48;
            uStack_a0 = (uint)((ulonglong)uVar29 * 0x85ebca87);
            uVar37 = uVar37 >> 1;
            uVar43 = uVar9 * -0x80000000 | uVar37;
            uVar9 = uVar43 * -0x7a143579 +
                    uVar29 * -0x61c8864f + (int)((ulonglong)uVar29 * 0x85ebca87 >> 0x20);
            uVar20 = uStack_ac - bVar61;
          } while ((uint)(puVar24 < (uint *)0x20) <= -uVar20);
          uVar20 = uStack_a0 << 1 | uVar9 >> 0x1f;
          uVar51 = uStack_a4 << 7 | uStack_a8 >> 0x19;
          uVar30 = uVar51 + uVar20;
          uVar52 = uStack_b8 << 0xc | (uint)piStack_9c >> 0x14;
          uVar57 = uVar30 + uVar52;
          piStack_9c = (int *)((uStack_a8 * 0x80 | uStack_a4 >> 0x19) +
                               (uVar9 * 2 | uStack_a0 >> 0x1f) + (uint)CARRY4(uVar51,uVar20) +
                               ((int)piStack_9c * 0x1000 | uStack_b8 >> 0x14) +
                              (uint)CARRY4(uVar30,uVar52));
          uStack_a0 = (uint)((ulonglong)uVar29 * 0x80000000 >> 0x20);
          uVar20 = (uint)((ulonglong)uVar29 * 0x80000000) |
                   uVar43 * 0xf796ca9 +
                   uVar29 * -0x210ca4ff + (int)((ulonglong)uVar29 * 0xf796ca9 >> 0x20) >> 1;
          lVar1 = (ulonglong)uVar20 * 0x85ebca87;
          uVar30 = (int)puStack_94 << 0x12 | (uint)puStack_98 >> 0xe;
          uVar51 = uVar57 + uVar30 ^ (uint)lVar1;
          lVar3 = (ulonglong)uVar51 * 0x85ebca87;
          uVar59 = (uint)lVar3;
          uVar52 = (uint)((ulonglong)uVar42 * 0x80000000) |
                   uVar53 * 0xf796ca9 +
                   uVar42 * -0x210ca4ff + (int)((ulonglong)uVar42 * 0xf796ca9 >> 0x20) >> 1;
          lVar4 = (ulonglong)uVar52 * 0x85ebca87;
          uVar43 = uVar59 + 0xc2b2ae63 ^ (uint)lVar4;
          lVar5 = (ulonglong)uVar43 * 0x85ebca87;
          uVar31 = (uint)lVar5;
          uVar32 = (uint)((ulonglong)uStack_c4 * 0x80000000) |
                   (int)piStack_c8 * 0xf796ca9 +
                   uStack_c4 * -0x210ca4ff + (int)((ulonglong)uStack_c4 * 0xf796ca9 >> 0x20) >> 1;
          lVar6 = (ulonglong)uVar32 * 0x85ebca87;
          uVar53 = uVar31 + 0xc2b2ae63 ^ (uint)lVar6;
          lVar7 = (ulonglong)uVar53 * 0x85ebca87;
          uVar33 = (uint)lVar7;
          uVar34 = (uint)((ulonglong)uStack_bc * 0x80000000) |
                   uStack_c0 * 0xf796ca9 +
                   uStack_bc * -0x210ca4ff + (int)((ulonglong)uStack_bc * 0xf796ca9 >> 0x20) >> 1;
          lVar8 = (ulonglong)uVar34 * 0x85ebca87;
          uVar29 = uVar33 + 0xc2b2ae63 ^ (uint)lVar8;
          lVar2 = (ulonglong)uVar29 * 0x85ebca87;
          uVar56 = (uint)lVar2;
          uVar9 = uVar56 + 0xc2b2ae63;
          iVar46 = (((((int)piStack_9c +
                       (uint)CARRY4(uVar57,uVar30) +
                       ((int)puStack_98 * 0x40000 | (uint)puStack_94 >> 0xe) ^
                      (uVar37 * -0x80000000 + uVar48 * -0x784349ac + uStack_a0) * -0x7a143579 +
                      uVar20 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20)) * -0x7a143579 +
                      uVar51 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20) + -0x7a143589 +
                      (uint)(0x3d4d519c < uVar59) ^
                     (uVar44 * -0x80000000 +
                     uVar49 * -0x784349ac + (int)((ulonglong)uVar42 * 0x80000000 >> 0x20)) *
                     -0x7a143579 + uVar52 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20)) *
                     -0x7a143579 + uVar43 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) +
                     -0x7a143589 + (uint)(0x3d4d519c < uVar31) ^
                    (uVar45 * -0x80000000 +
                    uVar35 * -0x784349ac + (int)((ulonglong)uStack_c4 * 0x80000000 >> 0x20)) *
                    -0x7a143579 + uVar32 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20)) *
                    -0x7a143579 + uVar53 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20) +
                    -0x7a143589 + (uint)(0x3d4d519c < uVar33) ^
                   (uVar60 * -0x80000000 +
                   uVar21 * -0x784349ac + (int)((ulonglong)uStack_bc * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar34 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20)) *
                   -0x7a143579 + uVar29 * -0x61c8864f + (int)((ulonglong)lVar2 >> 0x20) +
                   -0x7a143589 + (uint)(0x3d4d519c < uVar56);
          puStack_d4 = puVar47;
          puStack_d0 = puVar58;
        }
        pbVar12 = (byte *)(uVar9 + (int)puVar47);
        uVar9 = iVar46 + (uint)CARRY4(uVar9,(uint)puVar47);
        puVar58 = (uint *)((int)puVar58 + ((uint)puVar47 & 0xffffffe0));
        uVar20 = (uint)puVar47 & 0x1f;
        uVar21 = 0;
        do {
          if (uVar21 == 0 && (7 < uVar20) <= uVar21) {
            if (uVar21 == 0 && (3 < uVar20) <= uVar21) {
              if (uVar20 == 0 && uVar21 == 0) {
                uVar20 = (uint)pbVar12 ^ uVar9 >> 1;
                lVar1 = (ulonglong)uVar20 * 0x27d4eb4f;
                uVar21 = (uint)lVar1;
                uVar9 = uVar9 * 0x27d4eb4f + uVar20 * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20);
                uVar21 = (uVar21 >> 0x1d | uVar9 * 8) ^ uVar21;
                lVar1 = (ulonglong)uVar21 * 0x9e3779f9;
                uVar9 = (uVar9 ^ uVar9 >> 0x1d) * -0x61c88607 +
                        uVar21 * 0x165667b1 + (int)((ulonglong)lVar1 >> 0x20);
                puVar28[8] = uVar9;
                puVar28[7] = uVar9 ^ (uint)lVar1;
                puVar27 = puStack_b4;
                puStack_cc = puVar28;
                goto LAB_71764f24;
              }
              lVar1 = (ulonglong)(uint)(byte)*puVar58 * 0x165667c5;
              uVar60 = (uint)lVar1 ^ (uint)pbVar12;
              uVar9 = (uint)(byte)*puVar58 * 0x27d4eb2f + (int)((ulonglong)lVar1 >> 0x20) ^ uVar9;
              uVar35 = uVar60 << 0xb | uVar9 >> 0x15;
              lVar1 = (ulonglong)uVar35 * 0x85ebca87;
              pbVar12 = (byte *)lVar1;
              iVar46 = 1;
              uVar9 = (uVar9 << 0xb | uVar60 >> 0x15) * -0x7a143579 +
                      uVar35 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20);
              uVar49 = 0xffffffff;
            }
            else {
              lVar1 = (ulonglong)*puVar58 * 0x85ebca87;
              uVar60 = (uint)lVar1 ^ (uint)pbVar12;
              uVar9 = *puVar58 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20) ^ uVar9;
              uVar45 = uVar60 << 0x17 | uVar9 >> 9;
              lVar1 = (ulonglong)uVar45 * 0x27d4eb4f;
              uVar35 = (uint)lVar1;
              iVar46 = 4;
              pbVar12 = (byte *)(uVar35 + 0x9e3779f9);
              uVar9 = (uVar9 << 0x17 | uVar60 >> 9) * 0x27d4eb4f +
                      uVar45 * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20) + 0x165667b1 +
                      (uint)(0x61c88606 < uVar35);
              uVar49 = 0xfffffffc;
            }
          }
          else {
            uVar60 = *puVar58;
            uVar45 = (uint)((ulonglong)uVar60 * 0x80000000) |
                     puVar58[1] * 0x27d4eb4f +
                     uVar60 * -0x3d4d51c3 + (int)((ulonglong)uVar60 * 0x27d4eb4f >> 0x20) >> 1;
            lVar1 = (ulonglong)uVar45 * 0x85ebca87;
            uVar49 = 0xfffffff8;
            uVar35 = (uint)lVar1 ^ (uint)pbVar12;
            uVar9 = (puVar58[1] * -0x80000000 +
                    uVar60 * -0x6c158a59 + (int)((ulonglong)uVar60 * 0x80000000 >> 0x20)) *
                    -0x7a143579 + uVar45 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20) ^ uVar9;
            uVar45 = uVar35 << 0x1b | uVar9 >> 5;
            lVar1 = (ulonglong)uVar45 * 0x85ebca87;
            uVar60 = (uint)lVar1;
            iVar46 = 8;
            pbVar12 = (byte *)(uVar60 + 0xc2b2ae63);
            uVar9 = (uVar9 << 0x1b | uVar35 >> 5) * -0x7a143579 +
                    uVar45 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20) + -0x7a143589 +
                    (uint)(0x3d4d519c < uVar60);
          }
          bVar61 = CARRY4(uVar49,uVar20);
          uVar20 = uVar49 + uVar20;
          puVar58 = (uint *)((int)puVar58 + iVar46);
          uVar21 = (uVar21 - 1) + (uint)bVar61;
        } while( true );
      }
      puVar28 = (uint *)puVar28[1];
      if (puVar28 == (uint *)0x0) goto LAB_717647d8;
    }
  }
  goto LAB_717647d8;
}


// =========================================================================
// Function: FUN_71766cf8
// Entry: 0x71766cf8 | Size: 352 bytes
// =========================================================================

undefined4 * FUN_71766cf8(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = thunk_MwhHq(8);
  *(undefined1 *)(iVar1 + 1) = 0;
  param_1[3] = iVar1;
  iVar2 = thunk_MwhHq(8);
  *(undefined1 *)(iVar2 + 1) = 0;
  *(int *)(iVar1 + 4) = iVar2;
  iVar2 = *(int *)(iVar1 + 4);
  param_1[2] = iVar2;
  iVar1 = thunk_MwhHq(8);
  *(undefined1 *)(iVar1 + 1) = 0;
  *(int *)(iVar2 + 4) = iVar1;
  iVar2 = *(int *)(param_1[2] + 4);
  param_1[2] = iVar2;
  iVar1 = thunk_MwhHq(8);
  *(undefined1 *)(iVar1 + 1) = 0;
  *(int *)(iVar2 + 4) = iVar1;
  iVar2 = *(int *)(param_1[2] + 4);
  param_1[2] = iVar2;
  iVar1 = thunk_MwhHq(8);
  *(undefined1 *)(iVar1 + 1) = 0;
  *(int *)(iVar2 + 4) = iVar1;
  iVar2 = *(int *)(param_1[2] + 4);
  param_1[2] = iVar2;
  iVar1 = thunk_MwhHq(8);
  *(undefined1 *)(iVar1 + 1) = 0;
  *(int *)(iVar2 + 4) = iVar1;
  iVar2 = *(int *)(param_1[2] + 4);
  param_1[2] = iVar2;
  iVar1 = thunk_MwhHq(8);
  *(undefined1 *)(iVar1 + 1) = 0;
  *(int *)(iVar2 + 4) = iVar1;
  iVar2 = *(int *)(param_1[2] + 4);
  param_1[2] = iVar2;
  iVar1 = thunk_MwhHq(8);
  *(undefined1 *)(iVar1 + 1) = 0;
  *(int *)(iVar2 + 4) = iVar1;
  uVar3 = param_1[3];
  *(undefined4 *)(*(int *)(param_1[2] + 4) + 4) = uVar3;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = uVar3;
  param_1[1] = uVar3;
  param_1[2] = uVar3;
  return param_1;
}


// =========================================================================
// Function: FUN_71766ef0
// Entry: 0x71766ef0 | Size: 64 bytes
// =========================================================================

void FUN_71766ef0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  imp___vsnprintf_chk(param_1,0x60,0,0x60,param_4,&stack0x00000000);
  return;
}


// =========================================================================
// Function: FUN_7176709c
// Entry: 0x7176709c | Size: 2148 bytes
// =========================================================================

void FUN_7176709c(undefined4 *param_1,undefined4 *param_2)

{
  char *pcVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined2 *puVar6;
  undefined4 uVar7;
  int iVar8;
  byte *pbVar9;
  byte bVar10;
  int *piVar11;
  
  if (param_1[10] != 4) {
    FUN_71767c84(param_1,0);
  }
  param_1[0xb0] = *param_2;
  lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi
            (param_1 + 0xb1,param_2 + 1);
  param_1[0xb4] = param_2[4];
  lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi
            (param_1 + 0xb5,param_2 + 5);
  param_1[0xb8] = param_2[8];
  lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi
            (param_1 + 0xb9,param_2 + 9);
  uVar7 = param_2[0xd];
  param_1[0xbc] = param_2[0xc];
  param_1[0xbd] = uVar7;
  *(undefined1 *)(param_1 + 0xbe) = *(undefined1 *)(param_2 + 0xe);
  lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi
            (param_1 + 0xbf,param_2 + 0xf);
  pcVar1 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fa5bc);
  if (*pcVar1 == '\0') {
    puVar4 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa5ac);
    *puVar4 = 0x1d596ef6;
    puVar4[1] = 0xf4ff8886;
    *(undefined1 *)((int)puVar4 + 10) = 1;
    *(undefined2 *)(puVar4 + 2) = 0xfda;
    GFDIUClbc_QcPNgD_wH(&LAB_714b3cd8,puVar4,&DAT_70b0e000);
    puVar5 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa5bc);
    *puVar5 = 1;
  }
  pbVar2 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fa5ac);
  if (pbVar2[10] != 0) {
    *pbVar2 = *pbVar2 ^ 0xbb;
    pbVar2[1] = pbVar2[1] ^ 0xf;
    pbVar2[2] = pbVar2[2] ^ 0x2d;
    pbVar2[3] = pbVar2[3] ^ 0x6f;
    pbVar2[10] = 0;
    pbVar2[4] = pbVar2[4] ^ 0xe3;
    pbVar2[5] = pbVar2[5] ^ 0xfb;
    pbVar2[6] = pbVar2[6] ^ 0x97;
    pbVar2[7] = pbVar2[7] ^ 0x9f;
    pbVar2[8] = pbVar2[8] ^ 0xbb;
    pbVar2[9] = pbVar2[9] ^ 0xf;
  }
  imp___strcpy_chk((int)param_1 + 0x12e,pbVar2,0xff);
  iVar8 = param_2[0xb];
  if ((*(byte *)(param_2 + 9) & 1) == 0) {
    iVar8 = (int)param_2 + 0x25;
  }
  imp_strncpy((int)param_1 + 0x22d,iVar8,0x7f);
  param_1[0xab] = param_2[0xc];
  uVar7 = DAT_71201808;
  pcVar1 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fa5dc);
  if (*pcVar1 == '\0') {
    puVar4 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa5cc);
    *puVar4 = 0xed2d943a;
    puVar4[1] = 0xf448ffe4;
    *(undefined1 *)((int)puVar4 + 10) = 1;
    *(undefined2 *)(puVar4 + 2) = 0xf139;
    GFDIUClbc_QcPNgD_wH(&LAB_717818b4,puVar4,&DAT_70b0e000);
    puVar5 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa5dc);
    *puVar5 = 1;
  }
  pbVar2 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fa5cc);
  if (pbVar2[10] != 0) {
    *pbVar2 = *pbVar2 ^ 0x49;
    pbVar2[1] = pbVar2[1] ^ 0xf1;
    pbVar2[2] = pbVar2[2] ^ 0x5f;
    pbVar2[3] = pbVar2[3] ^ 0x9b;
    pbVar2[10] = 0;
    pbVar2[4] = pbVar2[4] ^ 0x81;
    pbVar2[5] = pbVar2[5] ^ 0x8d;
    pbVar2[6] = pbVar2[6] ^ 0x17;
    pbVar2[7] = pbVar2[7] ^ 0x9d;
    pbVar2[8] = pbVar2[8] ^ 0x49;
    pbVar2[9] = pbVar2[9] ^ 0xf1;
  }
  FUN_717db1ec(uVar7,pbVar2,(int)param_1 + 0x22d);
  iVar8 = param_2[7];
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    iVar8 = (int)param_2 + 0x15;
  }
  imp___strcpy_chk(param_1[0x2b] + 0x1f70,iVar8,0x19);
  FUN_717db330(DAT_71201808,param_1[0x2b] + 0x1f70);
  piVar11 = (int *)*param_1;
  if (*(char *)(param_2 + 0xe) == '\0') {
    pcVar1 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fa61c);
    if (*pcVar1 == '\0') {
      puVar6 = (undefined2 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa60c);
      *puVar6 = 0x18d;
      GFDIUClbc_QcPNgD_wH(&LAB_71781910,puVar6,&DAT_70b0e000);
      puVar5 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa61c);
      *puVar5 = 1;
    }
    pbVar3 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fa60c);
    pbVar9 = pbVar3 + 1;
    bVar10 = 0x8d;
    pbVar2 = pbVar3;
    if (*pbVar9 == 0) goto LAB_71767474;
  }
  else {
    pcVar1 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fa5fc);
    if (*pcVar1 == '\0') {
      puVar4 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa5ec);
      *(undefined1 *)(puVar4 + 4) = 1;
      *puVar4 = 0x37ddc2c8;
      puVar4[1] = 0xe0b0d8d0;
      puVar4[2] = 0x39caf09b;
      puVar4[3] = 0xd3e8ded5;
      GFDIUClbc_QcPNgD_wH(&LAB_717818e0,puVar4,&DAT_70b0e000);
      puVar5 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa5fc);
      *puVar5 = 1;
    }
    pbVar3 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fa5ec);
    pbVar9 = pbVar3 + 0x10;
    if (*pbVar9 == 0) goto LAB_71767474;
    *pbVar3 = *pbVar3 ^ 0xa9;
    bVar10 = 0xd3;
    pbVar3[1] = pbVar3[1] ^ 0xb1;
    pbVar3[2] = pbVar3[2] ^ 0x99;
    pbVar3[3] = pbVar3[3] ^ 0x7d;
    pbVar3[4] = pbVar3[4] ^ 0xbf;
    pbVar3[5] = pbVar3[5] ^ 0xb1;
    pbVar3[6] = pbVar3[6] ^ 0x81;
    pbVar3[7] = pbVar3[7] ^ 0xd3;
    pbVar3[8] = pbVar3[8] ^ 0xa9;
    pbVar3[9] = pbVar3[9] ^ 0xb1;
    pbVar3[10] = pbVar3[10] ^ 0x99;
    pbVar3[0xb] = pbVar3[0xb] ^ 0x7d;
    pbVar3[0xc] = pbVar3[0xc] ^ 0xbf;
    pbVar3[0xd] = pbVar3[0xd] ^ 0xb1;
    pbVar3[0xe] = pbVar3[0xe] ^ 0x81;
    pbVar2 = pbVar3 + 0xf;
  }
  *pbVar9 = 0;
  *pbVar2 = *pbVar2 ^ bVar10;
LAB_71767474:
  (**(code **)(*piVar11 + 0xa8))(piVar11,pbVar3);
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[10] = 0x13;
  return;
}


// =========================================================================
// Function: FUN_71767c84
// Entry: 0x71767c84 | Size: 1328 bytes
// =========================================================================

void FUN_71767c84(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int unaff_r9;
  int unaff_r10;
  int iStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_48;
  int iStack_44;
  int iStack_3c;
  int iStack_38;
  
  piVar1 = (int *)*param_1;
  iVar8 = param_1[10];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xd4))(piVar1,2000,0);
  }
  FUN_714d2048();
  FUN_717683fc(param_1);
  iVar2 = DAT_70c38ed8;
  if (*(int *)(DAT_70c38ed8 + 0x48) == 0) goto LAB_71767ddc;
  FUN_7145b75c();
  unaff_r9 = 0;
  *(undefined4 *)(iVar2 + 0x48) = 0;
  DataMemoryBarrier(0xb);
  unaff_r10 = DAT_712017f8;
  iStack_5c = iVar8;
  if ((DAT_711f6d78 & 1) == 0) goto LAB_71767e40;
  while( true ) {
    uVar7 = DAT_711f6d74;
    imp___aeabi_memclr4(&iStack_54,0x30);
    uStack_58 = uVar7;
    uVar7 = FUN_713a0424(&uStack_58,0x186a2);
    cfqspBX_JrdDvACwYrAyrngjQ(unaff_r10 + 0x34);
    piVar1 = (int *)thunk_MwhHq(0x3c);
    *piVar1 = unaff_r9;
    piVar1[1] = unaff_r9;
    FUN_713a10f8(piVar1 + 2,uVar7);
    piVar1[1] = unaff_r10 + 0x38;
    iVar8 = *(int *)(unaff_r10 + 0x38);
    *piVar1 = iVar8;
    *(int **)(iVar8 + 4) = piVar1;
    *(int **)(unaff_r10 + 0x38) = piVar1;
    *(int *)(unaff_r10 + 0x40) = *(int *)(unaff_r10 + 0x40) + 1;
    QgduklVhdVlmSiqzGQeutncbrNj(unaff_r10 + 0x34);
    if (iStack_3c != 0) {
      iStack_38 = iStack_3c;
      qNQrlu();
    }
    if (iStack_48 != 0) {
      iStack_44 = iStack_48;
      qNQrlu();
    }
    iVar8 = iStack_5c;
    if (iStack_54 != 0) {
      iStack_50 = iStack_54;
      qNQrlu();
    }
LAB_71767ddc:
    param_1[0xca] = 0;
    param_1[0xcb] = 0;
    param_1[0xcc] = 0;
    param_1[0x106] = 0;
    iVar2 = 4;
    if (param_2 != 0) {
      iVar2 = 0x13;
    }
    param_1[10] = iVar2;
    FUN_71621838(iVar8 == 0xe,param_2);
    if ((DAT_711f6c2e == '\0') || (param_2 != 0)) break;
    imp__exit(0);
LAB_71767e40:
    iVar8 = cuKsjVZRyspaVsDnqLy(&DAT_711f6d78);
    if (iVar8 != 0) {
      pcVar3 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fa63c);
      if (*pcVar3 == '\0') {
        puVar5 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa62c);
        *puVar5 = 0x7248ee5b;
        puVar5[1] = 0x724cc6d1;
        puVar5[2] = 0x7246c259;
        *(undefined1 *)((int)puVar5 + 0xe) = 1;
        *(undefined2 *)(puVar5 + 3) = 0xa3c9;
        GFDIUClbc_QcPNgD_wH(&LAB_71781934,puVar5,&DAT_70b0e000);
        puVar6 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa63c);
        *puVar6 = 1;
      }
      pbVar4 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fa62c);
      if (pbVar4[0xe] != 0) {
        *pbVar4 = *pbVar4 ^ 0x29;
        pbVar4[1] = pbVar4[1] ^ 0x8b;
        pbVar4[2] = pbVar4[2] ^ 0x25;
        pbVar4[3] = pbVar4[3] ^ 0x1d;
        pbVar4[0xe] = 0;
        pbVar4[4] = pbVar4[4] ^ 0xa7;
        pbVar4[5] = pbVar4[5] ^ 0xa3;
        pbVar4[6] = pbVar4[6] ^ 1;
        pbVar4[7] = pbVar4[7] ^ 0x13;
        pbVar4[8] = pbVar4[8] ^ 0x29;
        pbVar4[9] = pbVar4[9] ^ 0x8b;
        pbVar4[10] = pbVar4[10] ^ 0x25;
        pbVar4[0xb] = pbVar4[0xb] ^ 0x1d;
        pbVar4[0xc] = pbVar4[0xc] ^ 0xa7;
        pbVar4[0xd] = pbVar4[0xd] ^ 0xa3;
      }
      DAT_711f6d74 = FUN_71885ba4(pbVar4,0);
      SixizuLbAnqfgRApsCY(&DAT_711f6d78);
    }
  }
  return;
}


// =========================================================================
// Function: FUN_717683fc
// Entry: 0x717683fc | Size: 28 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x71769898) */
/* WARNING: Removing unreachable block (ram,0x71768844) */
/* WARNING: Removing unreachable block (ram,0x7176909c) */
/* WARNING: Removing unreachable block (ram,0x7176a098) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_717683fc(int param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  uint uVar15;
  int *piVar16;
  undefined4 uVar17;
  undefined4 *puVar18;
  int *piVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint *extraout_r1;
  int *piVar26;
  uint *puVar27;
  int *piVar28;
  int *piVar29;
  int iVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint *puVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint *puVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  int iVar49;
  uint uVar50;
  uint uVar51;
  byte *pbVar52;
  int *piVar53;
  uint *puVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint *puVar60;
  uint uVar61;
  undefined1 *puVar62;
  int *piVar63;
  int extraout_r12;
  int iVar64;
  bool bVar65;
  int iStack_88;
  uint *apuStack_84 [2];
  int aiStack_7c [2];
  uint *apuStack_74 [2];
  uint uStack_6c;
  int *piStack_68;
  uint *puStack_64;
  uint *puStack_60;
  uint *puStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  piVar63 = &iStack_88;
  piVar13 = &iStack_88;
  piVar19 = &iStack_88;
  piVar14 = &iStack_88;
  piVar16 = &iStack_88;
  FUN_71555b00();
  FUN_7154e888();
  uVar46 = 0;
  do {
    if (*(int *)(*(int *)(param_1 + 0xac) + uVar46 * 4 + 0x1f8c) != 0) {
      FUN_717a23c4();
      FUN_71794bfc(*(undefined4 *)(param_1 + 0xac),uVar46 & 0xffff,0);
    }
    uVar46 = uVar46 + 1;
  } while (uVar46 != 0x3ec);
  iVar49 = *(int *)(*(int *)(param_1 + 0xac) + 0x1f6c);
  if (iVar49 != 0) {
    FUN_71752b94(iVar49);
    if (DAT_711f29fc != '\0') {
      FUN_716abc60(0);
    }
    FUN_71756d20(iVar49,0);
  }
  thunk_FUN_7151eaa8();
  *(undefined4 *)(param_1 + 0x28) = 0x12;
  *(undefined1 *)(iVar49 + 0x12a) = 0;
  FUN_71795348(*(undefined4 *)(param_1 + 0xac));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_717b7fbc();
    qNQrlu();
  }
  thunk_MwhHq(0xb3c7);
  uVar17 = FUN_717b7f08();
  *(undefined4 *)(param_1 + 4) = uVar17;
  if (*(int *)(param_1 + 8) != 0) {
    FUN_71793c8c();
    qNQrlu();
  }
  thunk_MwhHq(5000);
  uVar17 = FUN_71793c24();
  *(undefined4 *)(param_1 + 8) = uVar17;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_71794258();
    qNQrlu();
  }
  thunk_MwhHq(0x23004);
  uVar17 = FUN_7179419c();
  *(undefined4 *)(param_1 + 0xc) = uVar17;
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_71750d44();
    qNQrlu();
  }
  thunk_MwhHq(0x1400);
  uVar17 = FUN_71750cdc();
  *(undefined4 *)(param_1 + 0x10) = uVar17;
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_71797558();
    qNQrlu();
  }
  thunk_MwhHq(0x404);
  uVar17 = FUN_717974f0();
  *(undefined4 *)(param_1 + 0x14) = uVar17;
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_717b780c();
    qNQrlu();
  }
  thunk_MwhHq(0x280c);
  uVar17 = FUN_717b77a4();
  *(undefined4 *)(param_1 + 0x18) = uVar17;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_71644330();
    if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
    }
  }
  thunk_MwhHq(0x3c10);
  uVar17 = FUN_717b5cb0();
  *(undefined4 *)(param_1 + 0x1c) = uVar17;
  FUN_716441bc(uVar17,1);
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_7173c4d4();
    qNQrlu();
  }
  thunk_MwhHq(5000);
  uVar17 = FUN_7173c46c();
  *(undefined4 *)(param_1 + 0x20) = uVar17;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_7173c7ec();
    qNQrlu();
  }
  thunk_MwhHq(0xc);
  uVar17 = FUN_7173c7bc();
  *(undefined4 *)(param_1 + 0x24) = uVar17;
  FUN_71526c24(DAT_711a381c);
  FUN_714d71cc();
  *(undefined1 *)(param_1 + 0x348) = 0;
  DAT_711f6b51 = 0;
  for (; ((*piVar63 != 0x6a4dab1f || piVar63[1] != 0x679b29b ||
          (piVar63[2] != 0x6efdd0cf || piVar63[3] != -0x33ed938)) ||
         (piVar63[4] != -0x4103aa2a || piVar63[5] != 0x370f3a77)); piVar63 = piVar63 + 1) {
  }
  iVar49 = piVar63[0xc017];
  aiStack_7c[0] = param_1;
  if (iVar49 != 0) {
    piVar26 = (int *)(iVar49 + 4);
    piVar53 = (int *)*piVar26;
    puVar18 = (undefined4 *)(param_1 + 0x410);
    piVar28 = piVar26;
    piVar29 = piVar26;
    if (piVar53 != (int *)0x0) {
      do {
        piVar12 = piVar53;
        if ((undefined4 *)piVar53[4] < puVar18) {
          piVar53 = piVar53 + 1;
          piVar12 = piVar29;
        }
        piVar29 = piVar12;
        piVar53 = (int *)*piVar53;
      } while (piVar53 != (int *)0x0);
      if ((piVar29 != piVar26) && (piVar28 = piVar29, puVar18 < (undefined4 *)piVar29[4])) {
        piVar28 = piVar26;
      }
    }
    if (piVar26 != piVar28) {
      *puVar18 = 0x42700000;
      puVar27 = *(uint **)(piVar63[0xc017] + 4);
joined_r0x71768854:
      if (puVar27 != (uint *)0x0) {
        while (puVar18 < (undefined4 *)puVar27[4]) {
          puVar27 = (uint *)*puVar27;
          if (puVar27 == (uint *)0x0) goto LAB_7176a0d8;
        }
        if ((undefined4 *)puVar27[4] < puVar18) goto code_r0x71768878;
        puVar45 = (uint *)puVar27[6];
        puVar38 = (uint *)puVar27[5];
        uVar46 = 0x56d677d6;
        puStack_5c = puVar27;
        iVar49 = 0x27d4eb7f;
        if (&DAT_0000001f < puVar45) {
          uStack_28 = 0x61c8869e;
          uStack_38 = 0x40801011;
          uStack_2c = 0x50;
          uStack_30 = 0x6854fb60;
          iVar49 = 0;
          uStack_3c = 0xba94458a;
          uVar47 = 0xee40c5e7;
          uVar50 = 0x60ea283e;
          uStack_34 = 0xc2b2ae8d;
          puStack_64 = puVar45;
          puStack_60 = puVar38;
          puVar54 = puVar45;
          puVar60 = puVar38;
          do {
            uStack_44 = uVar47;
            uStack_40 = uVar50;
            lVar4 = (ulonglong)puVar60[6] * 0x27d4eb4f;
            uVar46 = (uint)lVar4;
            uVar31 = uVar46 + uStack_3c;
            uVar46 = puVar60[7] * 0x27d4eb4f +
                     puVar60[6] * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + uStack_28 +
                     (uint)CARRY4(uVar46,uStack_3c);
            uVar25 = uVar46 >> 1;
            uStack_48 = uVar31 * -0x80000000 | uVar25;
            uVar31 = uVar31 >> 1;
            uStack_4c = uVar46 * -0x80000000 | uVar31;
            uStack_3c = (uint)((ulonglong)uStack_48 * 0x85ebca87);
            uStack_28 = uStack_4c * -0x7a143579 +
                        uStack_48 * -0x61c8864f + (int)((ulonglong)uStack_48 * 0x85ebca87 >> 0x20);
            lVar4 = (ulonglong)puVar60[4] * 0x27d4eb4f;
            uVar46 = (uint)lVar4;
            puVar1 = puVar60 + 3;
            uVar32 = uVar46 + uStack_38;
            uVar46 = puVar60[5] * 0x27d4eb4f +
                     puVar60[4] * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + uStack_2c +
                     (uint)CARRY4(uVar46,uStack_38);
            uVar51 = uVar46 >> 1;
            uStack_50 = uVar32 * -0x80000000 | uVar51;
            uStack_38 = (uint)((ulonglong)uStack_50 * 0x85ebca87);
            uVar32 = uVar32 >> 1;
            uStack_54 = uVar46 * -0x80000000 | uVar32;
            puVar2 = puVar60 + 2;
            uStack_2c = uStack_54 * -0x7a143579 +
                        uStack_50 * -0x61c8864f + (int)((ulonglong)uStack_50 * 0x85ebca87 >> 0x20);
            uVar39 = *puVar60;
            lVar4 = (ulonglong)*puVar2 * 0x27d4eb4f;
            uVar46 = (uint)lVar4;
            puVar3 = puVar60 + 1;
            puVar60 = puVar60 + 8;
            uVar20 = uVar46 + uStack_30;
            uVar46 = *puVar1 * 0x27d4eb4f + *puVar2 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20)
                     + uStack_34 + (uint)CARRY4(uVar46,uStack_30);
            uVar59 = uVar46 >> 1;
            uVar21 = uVar20 * -0x80000000 | uVar59;
            uVar20 = uVar20 >> 1;
            uStack_58 = uVar46 * -0x80000000 | uVar20;
            uStack_30 = (uint)((ulonglong)uVar21 * 0x85ebca87);
            uStack_34 = uStack_58 * -0x7a143579 +
                        uVar21 * -0x61c8864f + (int)((ulonglong)uVar21 * 0x85ebca87 >> 0x20);
            lVar4 = (ulonglong)uVar39 * 0x27d4eb4f;
            uVar46 = (uint)lVar4;
            uVar15 = uVar46 + uVar47;
            uVar46 = *puVar3 * 0x27d4eb4f + uVar39 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) +
                     uVar50 + (uint)CARRY4(uVar46,uVar47);
            bVar65 = puVar54 < (uint *)0x20;
            puVar54 = puVar54 + -8;
            uVar39 = uVar46 >> 1;
            uVar61 = uVar15 * -0x80000000 | uVar39;
            iVar49 = iVar49 - (uint)bVar65;
            uVar47 = (uint)((ulonglong)uVar61 * 0x85ebca87);
            uVar15 = uVar15 >> 1;
            uVar46 = uVar46 * -0x80000000 | uVar15;
            uVar50 = uVar46 * -0x7a143579 +
                     uVar61 * -0x61c8864f + (int)((ulonglong)uVar61 * 0x85ebca87 >> 0x20);
          } while ((uint)(puVar54 < (uint *)0x20) <= (uint)-iVar49);
          uVar37 = uVar47 << 1 | uVar50 >> 0x1f;
          uVar58 = uStack_30 << 7 | uStack_34 >> 0x19;
          uVar40 = uVar58 + uVar37;
          uVar22 = uStack_2c * 0x1000;
          uVar55 = uStack_38 << 0xc | uStack_2c >> 0x14;
          uVar41 = uVar40 + uVar55;
          uStack_2c = (uint)((ulonglong)uVar61 * 0x80000000 >> 0x20);
          uVar56 = uStack_3c << 0x12 | uStack_28 >> 0xe;
          uVar24 = (uint)((ulonglong)uVar61 * 0x80000000) |
                   uVar46 * 0xf796ca9 +
                   uVar61 * -0x210ca4ff + (int)((ulonglong)uVar61 * 0xf796ca9 >> 0x20) >> 1;
          lVar4 = (ulonglong)uVar24 * 0x85ebca87;
          uVar42 = uVar41 + uVar56 ^ (uint)lVar4;
          lVar5 = (ulonglong)uVar42 * 0x85ebca87;
          uVar57 = (uint)lVar5;
          uVar43 = (uint)((ulonglong)uVar21 * 0x80000000) |
                   uStack_58 * 0xf796ca9 +
                   uVar21 * -0x210ca4ff + (int)((ulonglong)uVar21 * 0xf796ca9 >> 0x20) >> 1;
          lVar6 = (ulonglong)uVar43 * 0x85ebca87;
          uVar33 = uVar57 + 0xc2b2ae63 ^ (uint)lVar6;
          lVar7 = (ulonglong)uVar33 * 0x85ebca87;
          uVar44 = (uint)lVar7;
          uVar48 = (uint)((ulonglong)uStack_50 * 0x80000000) |
                   uStack_54 * 0xf796ca9 +
                   uStack_50 * -0x210ca4ff + (int)((ulonglong)uStack_50 * 0xf796ca9 >> 0x20) >> 1;
          lVar8 = (ulonglong)uVar48 * 0x85ebca87;
          uVar61 = uVar44 + 0xc2b2ae63 ^ (uint)lVar8;
          lVar9 = (ulonglong)uVar61 * 0x85ebca87;
          uVar34 = (uint)lVar9;
          uVar35 = (uint)((ulonglong)uStack_48 * 0x80000000) |
                   uStack_4c * 0xf796ca9 +
                   uStack_48 * -0x210ca4ff + (int)((ulonglong)uStack_48 * 0xf796ca9 >> 0x20) >> 1;
          lVar10 = (ulonglong)uVar35 * 0x85ebca87;
          uVar23 = uVar34 + 0xc2b2ae63 ^ (uint)lVar10;
          lVar11 = (ulonglong)uVar23 * 0x85ebca87;
          uVar36 = (uint)lVar11;
          uVar46 = uVar36 + 0xc2b2ae63;
          iVar49 = (((((uStack_34 * 0x80 | uStack_30 >> 0x19) + (uVar50 * 2 | uVar47 >> 0x1f) +
                       (uint)CARRY4(uVar58,uVar37) + (uVar22 | uStack_38 >> 0x14) +
                       (uint)CARRY4(uVar40,uVar55) + (uStack_28 * 0x40000 | uStack_3c >> 0xe) +
                       (uint)CARRY4(uVar41,uVar56) ^
                      (uVar15 * -0x80000000 + uVar39 * -0x784349ac + uStack_2c) * -0x7a143579 +
                      uVar24 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20)) * -0x7a143579 +
                      uVar42 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) + -0x7a143589 +
                      (uint)(0x3d4d519c < uVar57) ^
                     (uVar20 * -0x80000000 +
                     uVar59 * -0x784349ac + (int)((ulonglong)uVar21 * 0x80000000 >> 0x20)) *
                     -0x7a143579 + uVar43 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20)) *
                     -0x7a143579 + uVar33 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20) +
                     -0x7a143589 + (uint)(0x3d4d519c < uVar44) ^
                    (uVar32 * -0x80000000 +
                    uVar51 * -0x784349ac + (int)((ulonglong)uStack_50 * 0x80000000 >> 0x20)) *
                    -0x7a143579 + uVar48 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20)) *
                    -0x7a143579 + uVar61 * -0x61c8864f + (int)((ulonglong)lVar9 >> 0x20) +
                    -0x7a143589 + (uint)(0x3d4d519c < uVar34) ^
                   (uVar31 * -0x80000000 +
                   uVar25 * -0x784349ac + (int)((ulonglong)uStack_48 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar35 * -0x61c8864f + (int)((ulonglong)lVar10 >> 0x20)) *
                   -0x7a143579 + uVar23 * -0x61c8864f + (int)((ulonglong)lVar11 >> 0x20) +
                   -0x7a143589 + (uint)(0x3d4d519c < uVar36);
        }
        puVar62 = (undefined1 *)(uVar46 + (int)puVar45);
        uVar46 = iVar49 + (uint)CARRY4(uVar46,(uint)puVar45);
        puVar38 = (uint *)((int)puVar38 + ((uint)puVar45 & 0xffffffe0));
        uVar47 = (uint)puVar45 & 0x1f;
        for (uVar50 = 0; uVar50 != 0 || uVar50 < (7 < uVar47); uVar50 = (uVar50 - 1) + (uint)bVar65)
        {
          uVar31 = *puVar38;
          uStack_28 = uVar46;
          uVar25 = (uint)((ulonglong)uVar31 * 0x80000000) |
                   puVar38[1] * 0x27d4eb4f +
                   uVar31 * -0x3d4d51c3 + (int)((ulonglong)uVar31 * 0x27d4eb4f >> 0x20) >> 1;
          lVar4 = (ulonglong)uVar25 * 0x85ebca87;
          uVar46 = (puVar38[1] * -0x80000000 +
                   uVar31 * -0x6c158a59 + (int)((ulonglong)uVar31 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar25 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) ^ uVar46;
          uVar25 = (uint)lVar4 ^ (uint)puVar62;
          uVar31 = uVar25 << 0x1b | uVar46 >> 5;
          lVar4 = (ulonglong)uVar31 * 0x85ebca87;
          uVar51 = (uint)lVar4;
          iVar49 = 8;
          puVar62 = (undefined1 *)(uVar51 + 0xc2b2ae63);
          uVar32 = 0xfffffff8;
          uVar46 = (uVar46 << 0x1b | uVar25 >> 5) * -0x7a143579 +
                   uVar31 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) + -0x7a143589 +
                   (uint)(0x3d4d519c < uVar51);
LAB_71768de0:
          bVar65 = CARRY4(uVar32,uVar47);
          uVar47 = uVar32 + uVar47;
          puVar38 = (uint *)((int)puVar38 + iVar49);
        }
        if (uVar50 != 0 || uVar50 < (3 < uVar47)) {
          lVar4 = (ulonglong)*puVar38 * 0x85ebca87;
          uVar25 = (uint)lVar4 ^ (uint)puVar62;
          uVar46 = *puVar38 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) ^ uVar46;
          uVar31 = uVar25 << 0x17 | uVar46 >> 9;
          lVar4 = (ulonglong)uVar31 * 0x27d4eb4f;
          uVar51 = (uint)lVar4;
          iVar49 = 4;
          puVar62 = (undefined1 *)(uVar51 + 0x9e3779f9);
          uVar46 = (uVar46 << 0x17 | uVar25 >> 9) * 0x27d4eb4f +
                   uVar31 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + 0x165667b1 +
                   (uint)(0x61c88606 < uVar51);
          uVar32 = 0xfffffffc;
          goto LAB_71768de0;
        }
        if (uVar47 != 0 || uVar50 != 0) {
          lVar4 = (ulonglong)(uint)(byte)*puVar38 * 0x165667c5;
          uVar25 = (uint)lVar4 ^ (uint)puVar62;
          uVar46 = (uint)(byte)*puVar38 * 0x27d4eb2f + (int)((ulonglong)lVar4 >> 0x20) ^ uVar46;
          uVar31 = uVar25 << 0xb | uVar46 >> 0x15;
          lVar4 = (ulonglong)uVar31 * 0x85ebca87;
          puVar62 = (undefined1 *)lVar4;
          uVar46 = (uVar46 << 0xb | uVar25 >> 0x15) * -0x7a143579 +
                   uVar31 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20);
          uVar32 = 0xffffffff;
          iVar49 = 1;
          goto LAB_71768de0;
        }
        uVar47 = (uint)puVar62 ^ uVar46 >> 1;
        lVar4 = (ulonglong)uVar47 * 0x27d4eb4f;
        uVar50 = (uint)lVar4;
        uVar46 = uVar46 * 0x27d4eb4f + uVar47 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20);
        uVar50 = (uVar50 >> 0x1d | uVar46 * 8) ^ uVar50;
        lVar4 = (ulonglong)uVar50 * 0x9e3779f9;
        uVar46 = (uVar46 ^ uVar46 >> 0x1d) * -0x61c88607 +
                 uVar50 * 0x165667b1 + (int)((ulonglong)lVar4 >> 0x20);
        puVar27[8] = uVar46;
        puVar27[7] = uVar46 ^ (uint)lVar4;
        goto LAB_71768f50;
      }
      goto LAB_7176a0d8;
    }
  }
LAB_71768f50:
  *(undefined1 *)(param_1 + 0x358) = 1;
  for (; ((*piVar13 != 0x6a4dab1f || piVar13[1] != 0x679b29b ||
          (piVar13[2] != 0x6efdd0cf || piVar13[3] != -0x33ed938)) ||
         (piVar13[4] != -0x4103aa2a || piVar13[5] != 0x370f3a77)); piVar13 = piVar13 + 1) {
  }
  iVar49 = piVar13[0xc017];
  if (iVar49 != 0) {
    piVar28 = (int *)(iVar49 + 4);
    piVar26 = (int *)*piVar28;
    puVar62 = (undefined1 *)(param_1 + 0x2b8);
    piVar29 = piVar28;
    piVar63 = piVar28;
    if (piVar26 != (int *)0x0) {
      do {
        piVar53 = piVar26;
        if ((undefined1 *)piVar26[4] < puVar62) {
          piVar26 = piVar26 + 1;
          piVar53 = piVar63;
        }
        piVar63 = piVar53;
        piVar26 = (int *)*piVar26;
      } while (piVar26 != (int *)0x0);
      if ((piVar63 != piVar28) && (piVar29 = piVar63, puVar62 < (undefined1 *)piVar63[4])) {
        piVar29 = piVar28;
      }
    }
    if (piVar28 != piVar29) {
      *puVar62 = 1;
      puVar27 = *(uint **)(piVar13[0xc017] + 4);
joined_r0x717690ac:
      if (puVar27 != (uint *)0x0) {
        while (puVar62 < (undefined1 *)puVar27[4]) {
          puVar27 = (uint *)*puVar27;
          if (puVar27 == (uint *)0x0) goto LAB_7176a0d8;
        }
        if ((undefined1 *)puVar27[4] < puVar62) goto code_r0x717690d0;
        puVar45 = (uint *)puVar27[6];
        puVar38 = (uint *)puVar27[5];
        uVar46 = 0x56d677d6;
        puStack_5c = puVar27;
        iVar49 = 0x27d4eb7f;
        if (&DAT_0000001f < puVar45) {
          uStack_28 = 0x61c8869e;
          uStack_2c = 0x40801011;
          uStack_30 = 0x50;
          uStack_34 = 0x6854fb60;
          puStack_64 = puVar45;
          iVar49 = 0;
          uStack_38 = 0xba94458a;
          uVar50 = 0xc2b2ae8d;
          uVar47 = 0xee40c5e7;
          uVar25 = 0x60ea283e;
          puStack_60 = puVar38;
          puVar54 = puVar45;
          puVar60 = puVar38;
          do {
            uStack_40 = uVar25;
            uStack_3c = uVar47;
            lVar4 = (ulonglong)puVar60[6] * 0x27d4eb4f;
            uVar46 = (uint)lVar4;
            uVar51 = uVar46 + uStack_38;
            uVar46 = puVar60[7] * 0x27d4eb4f +
                     puVar60[6] * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + uStack_28 +
                     (uint)CARRY4(uVar46,uStack_38);
            uVar31 = uVar46 >> 1;
            uStack_44 = uVar51 * -0x80000000 | uVar31;
            uVar51 = uVar51 >> 1;
            uStack_48 = uVar46 * -0x80000000 | uVar51;
            uStack_38 = (uint)((ulonglong)uStack_44 * 0x85ebca87);
            uStack_28 = uStack_48 * -0x7a143579 +
                        uStack_44 * -0x61c8864f + (int)((ulonglong)uStack_44 * 0x85ebca87 >> 0x20);
            lVar4 = (ulonglong)puVar60[4] * 0x27d4eb4f;
            uVar46 = (uint)lVar4;
            uVar59 = uVar46 + uStack_2c;
            uVar46 = puVar60[5] * 0x27d4eb4f +
                     puVar60[4] * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + uStack_30 +
                     (uint)CARRY4(uVar46,uStack_2c);
            uVar32 = uVar46 >> 1;
            uStack_4c = uVar59 * -0x80000000 | uVar32;
            uStack_2c = (uint)((ulonglong)uStack_4c * 0x85ebca87);
            uVar59 = uVar59 >> 1;
            uStack_50 = uVar46 * -0x80000000 | uVar59;
            uStack_30 = uStack_50 * -0x7a143579 +
                        uStack_4c * -0x61c8864f + (int)((ulonglong)uStack_4c * 0x85ebca87 >> 0x20);
            puVar1 = puVar60 + 2;
            puVar2 = puVar60 + 3;
            uVar15 = *puVar60;
            puVar3 = puVar60 + 1;
            puVar60 = puVar60 + 8;
            lVar4 = (ulonglong)*puVar1 * 0x27d4eb4f;
            uVar46 = (uint)lVar4;
            uVar39 = uVar46 + uStack_34;
            uVar46 = *puVar2 * 0x27d4eb4f + *puVar1 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20)
                     + uVar50 + (uint)CARRY4(uVar46,uStack_34);
            uVar20 = uVar46 >> 1;
            uStack_54 = uVar39 * -0x80000000 | uVar20;
            uStack_34 = (uint)((ulonglong)uStack_54 * 0x85ebca87);
            uVar39 = uVar39 >> 1;
            uStack_58 = uVar46 * -0x80000000 | uVar39;
            uVar50 = uStack_58 * -0x7a143579 +
                     uStack_54 * -0x61c8864f + (int)((ulonglong)uStack_54 * 0x85ebca87 >> 0x20);
            lVar4 = (ulonglong)uVar15 * 0x27d4eb4f;
            uVar46 = (uint)lVar4;
            uVar61 = uVar46 + uVar47;
            uVar46 = *puVar3 * 0x27d4eb4f + uVar15 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) +
                     uVar25 + (uint)CARRY4(uVar46,uVar47);
            bVar65 = puVar54 < (uint *)0x20;
            puVar54 = puVar54 + -8;
            uVar15 = uVar46 >> 1;
            uVar21 = uVar61 * -0x80000000 | uVar15;
            uVar61 = uVar61 >> 1;
            uVar46 = uVar46 * -0x80000000 | uVar61;
            iVar49 = iVar49 - (uint)bVar65;
            uVar47 = (uint)((ulonglong)uVar21 * 0x85ebca87);
            uVar25 = uVar46 * -0x7a143579 +
                     uVar21 * -0x61c8864f + (int)((ulonglong)uVar21 * 0x85ebca87 >> 0x20);
          } while ((uint)(puVar54 < (uint *)0x20) <= (uint)-iVar49);
          uVar34 = uVar47 << 1 | uVar25 >> 0x1f;
          uVar56 = uStack_34 << 7 | uVar50 >> 0x19;
          uVar35 = uVar56 + uVar34;
          uVar57 = uStack_2c << 0xc | uStack_30 >> 0x14;
          uVar36 = uVar35 + uVar57;
          uVar55 = uStack_38 << 0x12 | uStack_28 >> 0xe;
          uVar22 = (uint)((ulonglong)uVar21 * 0x80000000) |
                   uVar46 * 0xf796ca9 +
                   uVar21 * -0x210ca4ff + (int)((ulonglong)uVar21 * 0xf796ca9 >> 0x20) >> 1;
          lVar4 = (ulonglong)uVar22 * 0x85ebca87;
          uVar37 = uVar36 + uVar55 ^ (uint)lVar4;
          lVar5 = (ulonglong)uVar37 * 0x85ebca87;
          uVar58 = (uint)lVar5;
          uVar40 = (uint)((ulonglong)uStack_54 * 0x80000000) |
                   uStack_58 * 0xf796ca9 +
                   uStack_54 * -0x210ca4ff + (int)((ulonglong)uStack_54 * 0xf796ca9 >> 0x20) >> 1;
          lVar6 = (ulonglong)uVar40 * 0x85ebca87;
          uVar23 = uVar58 + 0xc2b2ae63 ^ (uint)lVar6;
          lVar7 = (ulonglong)uVar23 * 0x85ebca87;
          uVar41 = (uint)lVar7;
          uVar42 = (uint)((ulonglong)uStack_4c * 0x80000000) |
                   uStack_50 * 0xf796ca9 +
                   uStack_4c * -0x210ca4ff + (int)((ulonglong)uStack_4c * 0xf796ca9 >> 0x20) >> 1;
          lVar8 = (ulonglong)uVar42 * 0x85ebca87;
          uVar24 = uVar41 + 0xc2b2ae63 ^ (uint)lVar8;
          lVar9 = (ulonglong)uVar24 * 0x85ebca87;
          uVar43 = (uint)lVar9;
          uVar44 = (uint)((ulonglong)uStack_44 * 0x80000000) |
                   uStack_48 * 0xf796ca9 +
                   uStack_44 * -0x210ca4ff + (int)((ulonglong)uStack_44 * 0xf796ca9 >> 0x20) >> 1;
          lVar10 = (ulonglong)uVar44 * 0x85ebca87;
          uVar33 = uVar43 + 0xc2b2ae63 ^ (uint)lVar10;
          lVar11 = (ulonglong)uVar33 * 0x85ebca87;
          uVar48 = (uint)lVar11;
          uVar46 = uVar48 + 0xc2b2ae63;
          iVar49 = (((((uVar50 * 0x80 | uStack_34 >> 0x19) + (uVar25 * 2 | uVar47 >> 0x1f) +
                       (uint)CARRY4(uVar56,uVar34) + (uStack_30 * 0x1000 | uStack_2c >> 0x14) +
                       (uint)CARRY4(uVar35,uVar57) + (uStack_28 * 0x40000 | uStack_38 >> 0xe) +
                       (uint)CARRY4(uVar36,uVar55) ^
                      (uVar61 * -0x80000000 +
                      uVar15 * -0x784349ac + (int)((ulonglong)uVar21 * 0x80000000 >> 0x20)) *
                      -0x7a143579 + uVar22 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20)) *
                      -0x7a143579 + uVar37 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) +
                      -0x7a143589 + (uint)(0x3d4d519c < uVar58) ^
                     (uVar39 * -0x80000000 +
                     uVar20 * -0x784349ac + (int)((ulonglong)uStack_54 * 0x80000000 >> 0x20)) *
                     -0x7a143579 + uVar40 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20)) *
                     -0x7a143579 + uVar23 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20) +
                     -0x7a143589 + (uint)(0x3d4d519c < uVar41) ^
                    (uVar59 * -0x80000000 +
                    uVar32 * -0x784349ac + (int)((ulonglong)uStack_4c * 0x80000000 >> 0x20)) *
                    -0x7a143579 + uVar42 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20)) *
                    -0x7a143579 + uVar24 * -0x61c8864f + (int)((ulonglong)lVar9 >> 0x20) +
                    -0x7a143589 + (uint)(0x3d4d519c < uVar43) ^
                   (uVar51 * -0x80000000 +
                   uVar31 * -0x784349ac + (int)((ulonglong)uStack_44 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar44 * -0x61c8864f + (int)((ulonglong)lVar10 >> 0x20)) *
                   -0x7a143579 + uVar33 * -0x61c8864f + (int)((ulonglong)lVar11 >> 0x20) +
                   -0x7a143589 + (uint)(0x3d4d519c < uVar48);
        }
        puVar62 = (undefined1 *)(uVar46 + (int)puVar45);
        uVar47 = (uint)puVar45 & 0x1f;
        uStack_28 = iVar49 + (uint)CARRY4(uVar46,(uint)puVar45);
        puVar38 = (uint *)((int)puVar38 + ((uint)puVar45 & 0xffffffe0));
        for (uVar46 = 0; uVar46 != 0 || uVar46 < (7 < uVar47); uVar46 = (uVar46 - 1) + (uint)bVar65)
        {
          uVar25 = *puVar38;
          uVar50 = (uint)((ulonglong)uVar25 * 0x80000000) |
                   puVar38[1] * 0x27d4eb4f +
                   uVar25 * -0x3d4d51c3 + (int)((ulonglong)uVar25 * 0x27d4eb4f >> 0x20) >> 1;
          lVar4 = (ulonglong)uVar50 * 0x85ebca87;
          uStack_28 = (puVar38[1] * -0x80000000 +
                      uVar25 * -0x6c158a59 + (int)((ulonglong)uVar25 * 0x80000000 >> 0x20)) *
                      -0x7a143579 + uVar50 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) ^
                      uStack_28;
          uVar50 = (uint)lVar4 ^ (uint)puVar62;
          uVar25 = uVar50 << 0x1b | uStack_28 >> 5;
          lVar4 = (ulonglong)uVar25 * 0x85ebca87;
          uVar31 = (uint)lVar4;
          iVar49 = 8;
          puVar62 = (undefined1 *)(uVar31 + 0xc2b2ae63);
          uVar51 = 0xfffffff8;
          uStack_28 = (uStack_28 << 0x1b | uVar50 >> 5) * -0x7a143579 +
                      uVar25 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) + -0x7a143589 +
                      (uint)(0x3d4d519c < uVar31);
LAB_7176961c:
          bVar65 = CARRY4(uVar51,uVar47);
          uVar47 = uVar51 + uVar47;
          puVar38 = (uint *)((int)puVar38 + iVar49);
        }
        if (uVar46 != 0 || uVar46 < (3 < uVar47)) {
          lVar4 = (ulonglong)*puVar38 * 0x85ebca87;
          uVar50 = (uint)lVar4 ^ (uint)puVar62;
          uStack_28 = *puVar38 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) ^ uStack_28;
          uVar25 = uVar50 << 0x17 | uStack_28 >> 9;
          lVar4 = (ulonglong)uVar25 * 0x27d4eb4f;
          uVar31 = (uint)lVar4;
          iVar49 = 4;
          puVar62 = (undefined1 *)(uVar31 + 0x9e3779f9);
          uStack_28 = (uStack_28 << 0x17 | uVar50 >> 9) * 0x27d4eb4f +
                      uVar25 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + 0x165667b1 +
                      (uint)(0x61c88606 < uVar31);
          uVar51 = 0xfffffffc;
          goto LAB_7176961c;
        }
        if (uVar47 != 0 || uVar46 != 0) {
          lVar4 = (ulonglong)(uint)(byte)*puVar38 * 0x165667c5;
          uVar50 = (uint)lVar4 ^ (uint)puVar62;
          uStack_28 = (uint)(byte)*puVar38 * 0x27d4eb2f + (int)((ulonglong)lVar4 >> 0x20) ^
                      uStack_28;
          uVar25 = uVar50 << 0xb | uStack_28 >> 0x15;
          lVar4 = (ulonglong)uVar25 * 0x85ebca87;
          puVar62 = (undefined1 *)lVar4;
          iVar49 = 1;
          uStack_28 = (uStack_28 << 0xb | uVar50 >> 0x15) * -0x7a143579 +
                      uVar25 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20);
          uVar51 = 0xffffffff;
          goto LAB_7176961c;
        }
        uVar46 = (uint)puVar62 ^ uStack_28 >> 1;
        lVar4 = (ulonglong)uVar46 * 0x27d4eb4f;
        uVar47 = (uint)lVar4;
        uVar46 = uStack_28 * 0x27d4eb4f + uVar46 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20);
        uVar47 = (uVar47 >> 0x1d | uVar46 * 8) ^ uVar47;
        lVar4 = (ulonglong)uVar47 * 0x9e3779f9;
        uVar46 = (uVar46 ^ uVar46 >> 0x1d) * -0x61c88607 +
                 uVar47 * 0x165667b1 + (int)((ulonglong)lVar4 >> 0x20);
        puVar27[8] = uVar46;
        puVar27[7] = uVar46 ^ (uint)lVar4;
        goto LAB_717697b8;
      }
      goto LAB_7176a0d8;
    }
  }
LAB_717697b8:
  for (; ((*piVar19 != 0x6a4dab1f || piVar19[1] != 0x679b29b ||
          (piVar19[2] != 0x6efdd0cf || piVar19[3] != -0x33ed938)) ||
         (piVar19[4] != -0x4103aa2a || piVar19[5] != 0x370f3a77)); piVar19 = piVar19 + 1) {
  }
  iVar49 = piVar19[0xc017];
  if (iVar49 != 0) {
    piVar29 = (int *)(iVar49 + 4);
    piVar28 = (int *)*piVar29;
    puVar62 = (undefined1 *)(param_1 + 0x341);
    piVar13 = piVar29;
    piVar63 = piVar29;
    if (piVar28 != (int *)0x0) {
      do {
        piVar26 = piVar28;
        if ((undefined1 *)piVar28[4] < puVar62) {
          piVar28 = piVar28 + 1;
          piVar26 = piVar63;
        }
        piVar63 = piVar26;
        piVar28 = (int *)*piVar28;
      } while (piVar28 != (int *)0x0);
      if ((piVar63 != piVar29) && (piVar13 = piVar63, puVar62 < (undefined1 *)piVar63[4])) {
        piVar13 = piVar29;
      }
    }
    if (piVar29 != piVar13) {
      *puVar62 = 0;
      puVar27 = *(uint **)(piVar19[0xc017] + 4);
joined_r0x717698a8:
      if (puVar27 != (uint *)0x0) {
        while (puVar62 < (undefined1 *)puVar27[4]) {
          puVar27 = (uint *)*puVar27;
          if (puVar27 == (uint *)0x0) goto LAB_7176a0d8;
        }
        if ((undefined1 *)puVar27[4] < puVar62) goto code_r0x717698cc;
        puVar45 = (uint *)puVar27[6];
        puVar38 = (uint *)puVar27[5];
        uVar46 = 0x56d677d6;
        puStack_5c = puVar27;
        iVar49 = 0x27d4eb7f;
        if (&DAT_0000001f < puVar45) {
          uStack_28 = 0x61c8869e;
          uStack_2c = 0x40801011;
          uStack_30 = 0x50;
          uStack_34 = 0x6854fb60;
          puStack_64 = puVar45;
          iVar49 = 0;
          uStack_38 = 0xba94458a;
          uVar50 = 0xc2b2ae8d;
          uVar47 = 0xee40c5e7;
          uVar25 = 0x60ea283e;
          puStack_60 = puVar38;
          puVar54 = puVar45;
          puVar60 = puVar38;
          do {
            uStack_40 = uVar25;
            uStack_3c = uVar47;
            lVar4 = (ulonglong)puVar60[6] * 0x27d4eb4f;
            uVar46 = (uint)lVar4;
            uVar51 = uVar46 + uStack_38;
            uVar46 = puVar60[7] * 0x27d4eb4f +
                     puVar60[6] * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + uStack_28 +
                     (uint)CARRY4(uVar46,uStack_38);
            uVar31 = uVar46 >> 1;
            uStack_44 = uVar51 * -0x80000000 | uVar31;
            uVar51 = uVar51 >> 1;
            uStack_48 = uVar46 * -0x80000000 | uVar51;
            uStack_38 = (uint)((ulonglong)uStack_44 * 0x85ebca87);
            uStack_28 = uStack_48 * -0x7a143579 +
                        uStack_44 * -0x61c8864f + (int)((ulonglong)uStack_44 * 0x85ebca87 >> 0x20);
            lVar4 = (ulonglong)puVar60[4] * 0x27d4eb4f;
            uVar46 = (uint)lVar4;
            uVar59 = uVar46 + uStack_2c;
            uVar46 = puVar60[5] * 0x27d4eb4f +
                     puVar60[4] * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + uStack_30 +
                     (uint)CARRY4(uVar46,uStack_2c);
            uVar32 = uVar46 >> 1;
            uStack_4c = uVar59 * -0x80000000 | uVar32;
            uStack_2c = (uint)((ulonglong)uStack_4c * 0x85ebca87);
            uVar59 = uVar59 >> 1;
            uStack_50 = uVar46 * -0x80000000 | uVar59;
            uStack_30 = uStack_50 * -0x7a143579 +
                        uStack_4c * -0x61c8864f + (int)((ulonglong)uStack_4c * 0x85ebca87 >> 0x20);
            puVar1 = puVar60 + 2;
            puVar2 = puVar60 + 3;
            uVar15 = *puVar60;
            puVar3 = puVar60 + 1;
            puVar60 = puVar60 + 8;
            lVar4 = (ulonglong)*puVar1 * 0x27d4eb4f;
            uVar46 = (uint)lVar4;
            uVar39 = uVar46 + uStack_34;
            uVar46 = *puVar2 * 0x27d4eb4f + *puVar1 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20)
                     + uVar50 + (uint)CARRY4(uVar46,uStack_34);
            uVar20 = uVar46 >> 1;
            uStack_54 = uVar39 * -0x80000000 | uVar20;
            uStack_34 = (uint)((ulonglong)uStack_54 * 0x85ebca87);
            uVar39 = uVar39 >> 1;
            uStack_58 = uVar46 * -0x80000000 | uVar39;
            uVar50 = uStack_58 * -0x7a143579 +
                     uStack_54 * -0x61c8864f + (int)((ulonglong)uStack_54 * 0x85ebca87 >> 0x20);
            lVar4 = (ulonglong)uVar15 * 0x27d4eb4f;
            uVar46 = (uint)lVar4;
            uVar61 = uVar46 + uVar47;
            uVar46 = *puVar3 * 0x27d4eb4f + uVar15 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) +
                     uVar25 + (uint)CARRY4(uVar46,uVar47);
            bVar65 = puVar54 < (uint *)0x20;
            puVar54 = puVar54 + -8;
            uVar15 = uVar46 >> 1;
            uVar21 = uVar61 * -0x80000000 | uVar15;
            uVar61 = uVar61 >> 1;
            uVar46 = uVar46 * -0x80000000 | uVar61;
            iVar49 = iVar49 - (uint)bVar65;
            uVar47 = (uint)((ulonglong)uVar21 * 0x85ebca87);
            uVar25 = uVar46 * -0x7a143579 +
                     uVar21 * -0x61c8864f + (int)((ulonglong)uVar21 * 0x85ebca87 >> 0x20);
          } while ((uint)(puVar54 < (uint *)0x20) <= (uint)-iVar49);
          uVar34 = uVar47 << 1 | uVar25 >> 0x1f;
          uVar56 = uStack_34 << 7 | uVar50 >> 0x19;
          uVar35 = uVar56 + uVar34;
          uVar57 = uStack_2c << 0xc | uStack_30 >> 0x14;
          uVar36 = uVar35 + uVar57;
          uVar55 = uStack_38 << 0x12 | uStack_28 >> 0xe;
          uVar22 = (uint)((ulonglong)uVar21 * 0x80000000) |
                   uVar46 * 0xf796ca9 +
                   uVar21 * -0x210ca4ff + (int)((ulonglong)uVar21 * 0xf796ca9 >> 0x20) >> 1;
          lVar4 = (ulonglong)uVar22 * 0x85ebca87;
          uVar37 = uVar36 + uVar55 ^ (uint)lVar4;
          lVar5 = (ulonglong)uVar37 * 0x85ebca87;
          uVar58 = (uint)lVar5;
          uVar40 = (uint)((ulonglong)uStack_54 * 0x80000000) |
                   uStack_58 * 0xf796ca9 +
                   uStack_54 * -0x210ca4ff + (int)((ulonglong)uStack_54 * 0xf796ca9 >> 0x20) >> 1;
          lVar6 = (ulonglong)uVar40 * 0x85ebca87;
          uVar23 = uVar58 + 0xc2b2ae63 ^ (uint)lVar6;
          lVar7 = (ulonglong)uVar23 * 0x85ebca87;
          uVar41 = (uint)lVar7;
          uVar42 = (uint)((ulonglong)uStack_4c * 0x80000000) |
                   uStack_50 * 0xf796ca9 +
                   uStack_4c * -0x210ca4ff + (int)((ulonglong)uStack_4c * 0xf796ca9 >> 0x20) >> 1;
          lVar8 = (ulonglong)uVar42 * 0x85ebca87;
          uVar24 = uVar41 + 0xc2b2ae63 ^ (uint)lVar8;
          lVar9 = (ulonglong)uVar24 * 0x85ebca87;
          uVar43 = (uint)lVar9;
          uVar44 = (uint)((ulonglong)uStack_44 * 0x80000000) |
                   uStack_48 * 0xf796ca9 +
                   uStack_44 * -0x210ca4ff + (int)((ulonglong)uStack_44 * 0xf796ca9 >> 0x20) >> 1;
          lVar10 = (ulonglong)uVar44 * 0x85ebca87;
          uVar33 = uVar43 + 0xc2b2ae63 ^ (uint)lVar10;
          lVar11 = (ulonglong)uVar33 * 0x85ebca87;
          uVar48 = (uint)lVar11;
          uVar46 = uVar48 + 0xc2b2ae63;
          iVar49 = (((((uVar50 * 0x80 | uStack_34 >> 0x19) + (uVar25 * 2 | uVar47 >> 0x1f) +
                       (uint)CARRY4(uVar56,uVar34) + (uStack_30 * 0x1000 | uStack_2c >> 0x14) +
                       (uint)CARRY4(uVar35,uVar57) + (uStack_28 * 0x40000 | uStack_38 >> 0xe) +
                       (uint)CARRY4(uVar36,uVar55) ^
                      (uVar61 * -0x80000000 +
                      uVar15 * -0x784349ac + (int)((ulonglong)uVar21 * 0x80000000 >> 0x20)) *
                      -0x7a143579 + uVar22 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20)) *
                      -0x7a143579 + uVar37 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) +
                      -0x7a143589 + (uint)(0x3d4d519c < uVar58) ^
                     (uVar39 * -0x80000000 +
                     uVar20 * -0x784349ac + (int)((ulonglong)uStack_54 * 0x80000000 >> 0x20)) *
                     -0x7a143579 + uVar40 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20)) *
                     -0x7a143579 + uVar23 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20) +
                     -0x7a143589 + (uint)(0x3d4d519c < uVar41) ^
                    (uVar59 * -0x80000000 +
                    uVar32 * -0x784349ac + (int)((ulonglong)uStack_4c * 0x80000000 >> 0x20)) *
                    -0x7a143579 + uVar42 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20)) *
                    -0x7a143579 + uVar24 * -0x61c8864f + (int)((ulonglong)lVar9 >> 0x20) +
                    -0x7a143589 + (uint)(0x3d4d519c < uVar43) ^
                   (uVar51 * -0x80000000 +
                   uVar31 * -0x784349ac + (int)((ulonglong)uStack_44 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar44 * -0x61c8864f + (int)((ulonglong)lVar10 >> 0x20)) *
                   -0x7a143579 + uVar33 * -0x61c8864f + (int)((ulonglong)lVar11 >> 0x20) +
                   -0x7a143589 + (uint)(0x3d4d519c < uVar48);
        }
        puVar62 = (undefined1 *)(uVar46 + (int)puVar45);
        uVar47 = (uint)puVar45 & 0x1f;
        uStack_28 = iVar49 + (uint)CARRY4(uVar46,(uint)puVar45);
        puVar38 = (uint *)((int)puVar38 + ((uint)puVar45 & 0xffffffe0));
        for (uVar46 = 0; uVar46 != 0 || uVar46 < (7 < uVar47); uVar46 = (uVar46 - 1) + (uint)bVar65)
        {
          uVar25 = *puVar38;
          uVar50 = (uint)((ulonglong)uVar25 * 0x80000000) |
                   puVar38[1] * 0x27d4eb4f +
                   uVar25 * -0x3d4d51c3 + (int)((ulonglong)uVar25 * 0x27d4eb4f >> 0x20) >> 1;
          lVar4 = (ulonglong)uVar50 * 0x85ebca87;
          uStack_28 = (puVar38[1] * -0x80000000 +
                      uVar25 * -0x6c158a59 + (int)((ulonglong)uVar25 * 0x80000000 >> 0x20)) *
                      -0x7a143579 + uVar50 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) ^
                      uStack_28;
          uVar50 = (uint)lVar4 ^ (uint)puVar62;
          uVar25 = uVar50 << 0x1b | uStack_28 >> 5;
          lVar4 = (ulonglong)uVar25 * 0x85ebca87;
          uVar31 = (uint)lVar4;
          iVar49 = 8;
          puVar62 = (undefined1 *)(uVar31 + 0xc2b2ae63);
          uVar51 = 0xfffffff8;
          uStack_28 = (uStack_28 << 0x1b | uVar50 >> 5) * -0x7a143579 +
                      uVar25 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) + -0x7a143589 +
                      (uint)(0x3d4d519c < uVar31);
LAB_71769e14:
          bVar65 = CARRY4(uVar51,uVar47);
          uVar47 = uVar51 + uVar47;
          puVar38 = (uint *)((int)puVar38 + iVar49);
        }
        if (uVar46 != 0 || uVar46 < (3 < uVar47)) {
          lVar4 = (ulonglong)*puVar38 * 0x85ebca87;
          uVar50 = (uint)lVar4 ^ (uint)puVar62;
          uStack_28 = *puVar38 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) ^ uStack_28;
          uVar25 = uVar50 << 0x17 | uStack_28 >> 9;
          lVar4 = (ulonglong)uVar25 * 0x27d4eb4f;
          uVar31 = (uint)lVar4;
          iVar49 = 4;
          puVar62 = (undefined1 *)(uVar31 + 0x9e3779f9);
          uStack_28 = (uStack_28 << 0x17 | uVar50 >> 9) * 0x27d4eb4f +
                      uVar25 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + 0x165667b1 +
                      (uint)(0x61c88606 < uVar31);
          uVar51 = 0xfffffffc;
          goto LAB_71769e14;
        }
        if (uVar47 != 0 || uVar46 != 0) {
          lVar4 = (ulonglong)(uint)(byte)*puVar38 * 0x165667c5;
          uVar50 = (uint)lVar4 ^ (uint)puVar62;
          uStack_28 = (uint)(byte)*puVar38 * 0x27d4eb2f + (int)((ulonglong)lVar4 >> 0x20) ^
                      uStack_28;
          uVar25 = uVar50 << 0xb | uStack_28 >> 0x15;
          lVar4 = (ulonglong)uVar25 * 0x85ebca87;
          puVar62 = (undefined1 *)lVar4;
          iVar49 = 1;
          uStack_28 = (uStack_28 << 0xb | uVar50 >> 0x15) * -0x7a143579 +
                      uVar25 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20);
          uVar51 = 0xffffffff;
          goto LAB_71769e14;
        }
        uVar46 = (uint)puVar62 ^ uStack_28 >> 1;
        lVar4 = (ulonglong)uVar46 * 0x27d4eb4f;
        uVar47 = (uint)lVar4;
        uVar46 = uStack_28 * 0x27d4eb4f + uVar46 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20);
        uVar47 = (uVar47 >> 0x1d | uVar46 * 8) ^ uVar47;
        lVar4 = (ulonglong)uVar47 * 0x9e3779f9;
        uVar46 = (uVar46 ^ uVar46 >> 0x1d) * -0x61c88607 +
                 uVar47 * 0x165667b1 + (int)((ulonglong)lVar4 >> 0x20);
        puVar27[8] = uVar46;
        puVar27[7] = uVar46 ^ (uint)lVar4;
        goto LAB_71769f88;
      }
      goto LAB_7176a0d8;
    }
  }
LAB_71769f88:
  iVar64 = 0x6a4dab1f;
  iVar49 = -0x3d4d51c3;
  for (; ((*piVar14 != 0x6a4dab1f || piVar14[1] != 0x679b29b ||
          (piVar14[2] != 0x6efdd0cf || piVar14[3] != -0x33ed938)) ||
         (piVar14[4] != -0x4103aa2a || piVar14[5] != 0x370f3a77)); piVar14 = piVar14 + 1) {
  }
  iVar30 = piVar14[0xc017];
  apuStack_84[1] = (uint *)(param_1 + 0x400);
  if (iVar30 != 0) {
    piVar19 = (int *)(iVar30 + 4);
    piVar29 = (int *)*piVar19;
    piVar63 = piVar19;
    piVar13 = piVar19;
    if (piVar29 != (int *)0x0) {
      do {
        piVar28 = piVar29;
        if ((undefined4 *)piVar29[4] < apuStack_84[1]) {
          piVar29 = piVar29 + 1;
          piVar28 = piVar13;
        }
        piVar29 = (int *)*piVar29;
        piVar13 = piVar28;
      } while (piVar29 != (int *)0x0);
      if ((piVar28 != piVar19) && (piVar63 = piVar28, apuStack_84[1] < (undefined4 *)piVar28[4])) {
        piVar63 = piVar19;
      }
    }
    if (piVar19 != piVar63) {
      *apuStack_84[1] = 0x3c03126f;
      for (puVar27 = *(uint **)(piVar14[0xc017] + 4); puVar27 != (uint *)0x0;
          puVar27 = (uint *)puVar27[1]) {
        while (apuStack_84[1] < (undefined4 *)puVar27[4]) {
          puVar27 = (uint *)*puVar27;
          if (puVar27 == (uint *)0x0) goto LAB_7176a0d8;
        }
        if (apuStack_84[1] <= (undefined4 *)puVar27[4]) goto LAB_7176a0e4;
      }
LAB_7176a0d8:
      iVar64 = 0x71bd9aa8;
      FUN_712f6bb0(s_map__at__key_not_found_700619a7);
      puVar27 = extraout_r1;
      iVar49 = extraout_r12;
LAB_7176a0e4:
      piVar63 = (int *)puVar27[6];
      puVar38 = (uint *)puVar27[5];
      uVar46 = 0x56d677d6;
      iVar30 = 0x27d4eb7f;
      puStack_60 = puVar27;
      if (&DAT_0000001f < piVar63) {
        uStack_28 = 0x61c8869e;
        uStack_2c = 0x40801011;
        uStack_30 = 0x6854fb60;
        iVar49 = 0;
        uStack_38 = 0xc2b2ae8d;
        uStack_40 = 0xba94458a;
        uVar47 = 0xee40c5e7;
        uVar50 = 0x60ea283e;
        piStack_68 = piVar63;
        puStack_64 = puVar38;
        uStack_34 = 0x50;
        piVar13 = piVar63;
        puVar45 = puVar38;
        do {
          uStack_44 = uVar47;
          uStack_3c = uVar50;
          lVar4 = (ulonglong)puVar45[6] * 0x27d4eb4f;
          uVar46 = (uint)lVar4;
          puVar54 = puVar45 + 1;
          uVar31 = uVar46 + uStack_40;
          uVar46 = puVar45[7] * 0x27d4eb4f +
                   puVar45[6] * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + uStack_28 +
                   (uint)CARRY4(uVar46,uStack_40);
          uVar25 = uVar46 >> 1;
          uStack_48 = uVar31 * -0x80000000 | uVar25;
          uVar31 = uVar31 >> 1;
          uStack_4c = uVar46 * -0x80000000 | uVar31;
          uStack_40 = (uint)((ulonglong)uStack_48 * 0x85ebca87);
          uStack_28 = uStack_4c * -0x7a143579 +
                      uStack_48 * -0x61c8864f + (int)((ulonglong)uStack_48 * 0x85ebca87 >> 0x20);
          lVar4 = (ulonglong)puVar45[4] * 0x27d4eb4f;
          uVar46 = (uint)lVar4;
          uVar32 = uVar46 + uStack_2c;
          uVar46 = puVar45[5] * 0x27d4eb4f +
                   puVar45[4] * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + uStack_34 +
                   (uint)CARRY4(uVar46,uStack_2c);
          uVar51 = uVar46 >> 1;
          uStack_50 = uVar32 * -0x80000000 | uVar51;
          uStack_2c = (uint)((ulonglong)uStack_50 * 0x85ebca87);
          uVar32 = uVar32 >> 1;
          uStack_54 = uVar46 * -0x80000000 | uVar32;
          uStack_34 = uStack_54 * -0x7a143579 +
                      uStack_50 * -0x61c8864f + (int)((ulonglong)uStack_50 * 0x85ebca87 >> 0x20);
          puVar60 = puVar45 + 2;
          puVar1 = puVar45 + 3;
          uVar39 = *puVar45;
          puVar45 = puVar45 + 8;
          lVar4 = (ulonglong)*puVar60 * 0x27d4eb4f;
          uVar46 = (uint)lVar4;
          uVar20 = uVar46 + uStack_30;
          uVar46 = *puVar1 * 0x27d4eb4f + *puVar60 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) +
                   uStack_38 + (uint)CARRY4(uVar46,uStack_30);
          uVar59 = uVar46 >> 1;
          uStack_58 = uVar20 * -0x80000000 | uVar59;
          uVar20 = uVar20 >> 1;
          puStack_5c = (uint *)(uVar46 * -0x80000000 | uVar20);
          uStack_30 = (uint)((ulonglong)uStack_58 * 0x85ebca87);
          uStack_38 = (int)puStack_5c * -0x7a143579 +
                      uStack_58 * -0x61c8864f + (int)((ulonglong)uStack_58 * 0x85ebca87 >> 0x20);
          lVar4 = (ulonglong)uVar39 * 0x27d4eb4f;
          uVar46 = (uint)lVar4;
          uVar15 = uVar46 + uVar47;
          uVar46 = *puVar54 * 0x27d4eb4f + uVar39 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) +
                   uVar50 + (uint)CARRY4(uVar46,uVar47);
          bVar65 = piVar13 < (int *)0x20;
          piVar13 = piVar13 + -8;
          uVar39 = uVar46 >> 1;
          uVar61 = uVar15 * -0x80000000 | uVar39;
          iVar49 = iVar49 - (uint)bVar65;
          uVar47 = (uint)((ulonglong)uVar61 * 0x85ebca87);
          uVar15 = uVar15 >> 1;
          uVar46 = uVar46 * -0x80000000 | uVar15;
          uVar50 = uVar46 * -0x7a143579 +
                   uVar61 * -0x61c8864f + (int)((ulonglong)uVar61 * 0x85ebca87 >> 0x20);
        } while ((uint)(piVar13 < (int *)0x20) <= (uint)-iVar49);
        uVar40 = uVar47 << 1 | uVar50 >> 0x1f;
        uVar56 = uStack_30 << 7 | uStack_38 >> 0x19;
        uVar41 = uVar56 + uVar40;
        uVar57 = uStack_2c << 0xc | uStack_34 >> 0x14;
        uVar42 = uVar41 + uVar57;
        uVar48 = uStack_40 << 0x12 | uStack_28 >> 0xe;
        uVar21 = (uint)((ulonglong)uVar61 * 0x80000000) |
                 uVar46 * 0xf796ca9 +
                 uVar61 * -0x210ca4ff + (int)((ulonglong)uVar61 * 0xf796ca9 >> 0x20) >> 1;
        lVar4 = (ulonglong)uVar21 * 0x85ebca87;
        uVar43 = uVar42 + uVar48 ^ (uint)lVar4;
        lVar5 = (ulonglong)uVar43 * 0x85ebca87;
        uVar58 = (uint)lVar5;
        uVar44 = (uint)((ulonglong)uStack_58 * 0x80000000) |
                 (int)puStack_5c * 0xf796ca9 +
                 uStack_58 * -0x210ca4ff + (int)((ulonglong)uStack_58 * 0xf796ca9 >> 0x20) >> 1;
        lVar6 = (ulonglong)uVar44 * 0x85ebca87;
        uVar22 = uVar58 + 0xc2b2ae63 ^ (uint)lVar6;
        lVar7 = (ulonglong)uVar22 * 0x85ebca87;
        uVar33 = (uint)lVar7;
        uVar34 = (uint)((ulonglong)uStack_50 * 0x80000000) |
                 uStack_54 * 0xf796ca9 +
                 uStack_50 * -0x210ca4ff + (int)((ulonglong)uStack_50 * 0xf796ca9 >> 0x20) >> 1;
        lVar8 = (ulonglong)uVar34 * 0x85ebca87;
        uVar23 = uVar33 + 0xc2b2ae63 ^ (uint)lVar8;
        lVar9 = (ulonglong)uVar23 * 0x85ebca87;
        uVar35 = (uint)lVar9;
        iVar49 = -0x3d4d51c3;
        uVar36 = (uint)((ulonglong)uStack_48 * 0x80000000) |
                 uStack_4c * 0xf796ca9 +
                 uStack_48 * -0x210ca4ff + (int)((ulonglong)uStack_48 * 0xf796ca9 >> 0x20) >> 1;
        lVar10 = (ulonglong)uVar36 * 0x85ebca87;
        uVar24 = uVar35 + 0xc2b2ae63 ^ (uint)lVar10;
        lVar11 = (ulonglong)uVar24 * 0x85ebca87;
        uVar37 = (uint)lVar11;
        iVar64 = 0x6a4dab1f;
        uVar46 = uVar37 + 0xc2b2ae63;
        iVar30 = (((((uStack_38 * 0x80 | uStack_30 >> 0x19) + (uVar50 * 2 | uVar47 >> 0x1f) +
                     (uint)CARRY4(uVar56,uVar40) + (uStack_34 * 0x1000 | uStack_2c >> 0x14) +
                     (uint)CARRY4(uVar41,uVar57) + (uStack_28 * 0x40000 | uStack_40 >> 0xe) +
                     (uint)CARRY4(uVar42,uVar48) ^
                    (uVar15 * -0x80000000 +
                    uVar39 * -0x784349ac + (int)((ulonglong)uVar61 * 0x80000000 >> 0x20)) *
                    -0x7a143579 + uVar21 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20)) *
                    -0x7a143579 + uVar43 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) +
                    -0x7a143589 + (uint)(0x3d4d519c < uVar58) ^
                   (uVar20 * -0x80000000 +
                   uVar59 * -0x784349ac + (int)((ulonglong)uStack_58 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar44 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20)) *
                   -0x7a143579 + uVar22 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20) +
                   -0x7a143589 + (uint)(0x3d4d519c < uVar33) ^
                  (uVar32 * -0x80000000 +
                  uVar51 * -0x784349ac + (int)((ulonglong)uStack_50 * 0x80000000 >> 0x20)) *
                  -0x7a143579 + uVar34 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20)) *
                  -0x7a143579 + uVar23 * -0x61c8864f + (int)((ulonglong)lVar9 >> 0x20) + -0x7a143589
                  + (uint)(0x3d4d519c < uVar35) ^
                 (uVar31 * -0x80000000 +
                 uVar25 * -0x784349ac + (int)((ulonglong)uStack_48 * 0x80000000 >> 0x20)) *
                 -0x7a143579 + uVar36 * -0x61c8864f + (int)((ulonglong)lVar10 >> 0x20)) *
                 -0x7a143579 + uVar24 * -0x61c8864f + (int)((ulonglong)lVar11 >> 0x20) + -0x7a143589
                 + (uint)(0x3d4d519c < uVar37);
      }
      puVar62 = (undefined1 *)(uVar46 + (int)piVar63);
      uVar47 = (uint)piVar63 & 0x1f;
      uVar46 = iVar30 + (uint)CARRY4(uVar46,(uint)piVar63);
      puVar38 = (uint *)((int)puVar38 + ((uint)piVar63 & 0xffffffe0));
      uVar50 = 0;
      do {
        if (uVar50 == 0 && (7 < uVar47) <= uVar50) {
          if (uVar50 == 0 && (3 < uVar47) <= uVar50) {
            if (uVar47 == 0 && uVar50 == 0) goto LAB_7176a738;
            lVar4 = (ulonglong)(uint)(byte)*puVar38 * 0x165667c5;
            uVar25 = (uint)lVar4 ^ (uint)puVar62;
            uVar46 = (uint)(byte)*puVar38 * 0x27d4eb2f + (int)((ulonglong)lVar4 >> 0x20) ^ uVar46;
            uVar31 = uVar25 << 0xb | uVar46 >> 0x15;
            lVar4 = (ulonglong)uVar31 * 0x85ebca87;
            puVar62 = (undefined1 *)lVar4;
            uVar46 = (uVar46 << 0xb | uVar25 >> 0x15) * -0x7a143579 +
                     uVar31 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20);
            uVar51 = 0xffffffff;
            iVar30 = 1;
          }
          else {
            lVar4 = (ulonglong)*puVar38 * 0x85ebca87;
            uVar25 = (uint)lVar4 ^ (uint)puVar62;
            uVar46 = *puVar38 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) ^ uVar46;
            uVar31 = uVar25 << 0x17 | uVar46 >> 9;
            lVar4 = (ulonglong)uVar31 * 0x27d4eb4f;
            uVar51 = (uint)lVar4;
            iVar30 = 4;
            puVar62 = (undefined1 *)(uVar51 + 0x9e3779f9);
            uVar46 = (uVar46 << 0x17 | uVar25 >> 9) * 0x27d4eb4f +
                     uVar31 * iVar49 + (int)((ulonglong)lVar4 >> 0x20) + 0x165667b1 +
                     (uint)(0x61c88606 < uVar51);
            uVar51 = 0xfffffffc;
          }
        }
        else {
          uVar31 = *puVar38;
          uStack_28 = uVar46;
          uVar25 = (uint)((ulonglong)uVar31 * 0x80000000) |
                   puVar38[1] * 0x27d4eb4f +
                   uVar31 * iVar49 + (int)((ulonglong)uVar31 * 0x27d4eb4f >> 0x20) >> 1;
          lVar4 = (ulonglong)uVar25 * 0x85ebca87;
          uStack_2c = (uint)lVar4;
          iVar49 = -0x3d4d51c3;
          uVar46 = (puVar38[1] * -0x80000000 +
                   uVar31 * -0x6c158a59 + (int)((ulonglong)uVar31 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar25 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) ^ uVar46;
          uVar25 = uStack_2c ^ (uint)puVar62;
          iVar64 = 0x6a4dab1f;
          uVar31 = uVar25 << 0x1b | uVar46 >> 5;
          lVar4 = (ulonglong)uVar31 * 0x85ebca87;
          uVar32 = (uint)lVar4;
          puVar62 = (undefined1 *)(uVar32 + 0xc2b2ae63);
          iVar30 = 8;
          uVar51 = 0xfffffff8;
          uVar46 = (uVar46 << 0x1b | uVar25 >> 5) * -0x7a143579 +
                   uVar31 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) + -0x7a143589 +
                   (uint)(0x3d4d519c < uVar32);
        }
        bVar65 = CARRY4(uVar51,uVar47);
        uVar47 = uVar51 + uVar47;
        puVar38 = (uint *)((int)puVar38 + iVar30);
        uVar50 = (uVar50 - 1) + (uint)bVar65;
      } while( true );
    }
  }
LAB_7176a7a0:
  iVar30 = aiStack_7c[0];
  *(undefined4 *)(aiStack_7c[0] + 0x404) = 0;
  for (; ((*piVar16 != iVar64 || piVar16[1] != 0x679b29b ||
          (piVar16[2] != 0x6efdd0cf || piVar16[3] != -0x33ed938)) ||
         (piVar16[4] != -0x4103aa2a || piVar16[5] != 0x370f3a77)); piVar16 = piVar16 + 1) {
  }
  piVar63 = piVar16 + 0xc01a;
  if (*piVar63 < 9) {
    *piVar63 = *piVar63 + 1;
    apuStack_84[0] = (uint *)(piVar16 + 0xc019);
    uStack_6c = *apuStack_84[0];
    apuStack_74[1] = (uint *)(piVar16 + 0x800b);
    if (0xfff < uStack_6c) {
      uStack_6c = 0;
      *apuStack_84[0] = 0;
    }
    puVar27 = (uint *)0x0;
LAB_7176b01c:
    if (uStack_6c + (int)puVar27 >> 0xc == 0) {
      puVar38 = apuStack_74[1] + (uStack_6c + (int)puVar27) * 4;
      puVar45 = (uint *)*puVar38;
      puStack_64 = (uint *)puVar38[2];
      uVar47 = puVar38[1];
      piStack_68 = (int *)puVar38[3];
      uVar46 = 0x56d677d6;
      iVar49 = 0x27d4eb7f;
      if (0x1f < uVar47) {
        uStack_28 = 0x61c8869e;
        uStack_2c = 0x40801011;
        uStack_30 = 0x50;
        uStack_34 = 0x6854fb60;
        uStack_44 = 0xba94458a;
        uStack_38 = 0xc2b2ae8d;
        uStack_3c = 0xee40c5e7;
        uVar46 = 0;
        puVar38 = puVar45;
        uVar50 = uVar47;
        uVar25 = 0x60ea283e;
        do {
          uStack_48 = uVar25;
          uStack_40 = uVar46;
          lVar4 = (ulonglong)puVar38[6] * 0x27d4eb4f;
          uVar46 = (uint)lVar4;
          uVar51 = uVar46 + uStack_44;
          uVar46 = puVar38[7] * 0x27d4eb4f +
                   puVar38[6] * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + uStack_28 +
                   (uint)CARRY4(uVar46,uStack_44);
          uVar31 = uVar46 >> 1;
          uStack_4c = uVar51 * -0x80000000 | uVar31;
          uVar51 = uVar51 >> 1;
          uStack_50 = uVar46 * -0x80000000 | uVar51;
          uStack_44 = (uint)((ulonglong)uStack_4c * 0x85ebca87);
          uStack_28 = uStack_50 * -0x7a143579 +
                      uStack_4c * -0x61c8864f + (int)((ulonglong)uStack_4c * 0x85ebca87 >> 0x20);
          lVar4 = (ulonglong)puVar38[4] * 0x27d4eb4f;
          uVar46 = (uint)lVar4;
          puVar54 = puVar38 + 1;
          uVar59 = uVar46 + uStack_2c;
          uVar46 = puVar38[5] * 0x27d4eb4f +
                   puVar38[4] * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + uStack_30 +
                   (uint)CARRY4(uVar46,uStack_2c);
          uVar32 = uVar46 >> 1;
          uStack_54 = uVar59 * -0x80000000 | uVar32;
          uVar59 = uVar59 >> 1;
          uStack_58 = uVar46 * -0x80000000 | uVar59;
          uStack_2c = (uint)((ulonglong)uStack_54 * 0x85ebca87);
          uStack_30 = uStack_58 * -0x7a143579 +
                      uStack_54 * -0x61c8864f + (int)((ulonglong)uStack_54 * 0x85ebca87 >> 0x20);
          puVar60 = puVar38 + 3;
          uVar25 = *puVar38;
          puVar1 = puVar38 + 2;
          puVar38 = puVar38 + 8;
          lVar4 = (ulonglong)*puVar1 * 0x27d4eb4f;
          uVar46 = (uint)lVar4;
          uVar39 = uVar46 + uStack_34;
          uVar46 = *puVar60 * 0x27d4eb4f + *puVar1 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) +
                   uStack_38 + (uint)CARRY4(uVar46,uStack_34);
          uVar20 = uVar46 >> 1;
          puStack_5c = (uint *)(uVar39 * -0x80000000 | uVar20);
          uVar39 = uVar39 >> 1;
          uVar22 = uVar46 * -0x80000000 | uVar39;
          lVar4 = (ulonglong)uVar25 * 0x27d4eb4f;
          uVar46 = (uint)lVar4;
          uStack_34 = (uint)(ZEXT48(puStack_5c) * 0x85ebca87);
          uStack_38 = uVar22 * -0x7a143579 +
                      (int)puStack_5c * -0x61c8864f + (int)(ZEXT48(puStack_5c) * 0x85ebca87 >> 0x20)
          ;
          uVar61 = uVar46 + uStack_3c;
          uVar46 = *puVar54 * 0x27d4eb4f + uVar25 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) +
                   uStack_48 + (uint)CARRY4(uVar46,uStack_3c);
          bVar65 = uVar50 < 0x20;
          uVar50 = uVar50 - 0x20;
          uVar15 = uVar46 >> 1;
          uVar23 = uVar61 * -0x80000000 | uVar15;
          uVar61 = uVar61 >> 1;
          uVar21 = uVar46 * -0x80000000 | uVar61;
          uStack_3c = (uint)((ulonglong)uVar23 * 0x85ebca87);
          uVar25 = uVar21 * -0x7a143579 +
                   uVar23 * -0x61c8864f + (int)((ulonglong)uVar23 * 0x85ebca87 >> 0x20);
          uVar46 = uStack_40 - bVar65;
        } while ((uint)(uVar50 < 0x20) <= -uVar46);
        uVar46 = uStack_3c << 1 | uVar25 >> 0x1f;
        uVar24 = uStack_34 << 7 | uStack_38 >> 0x19;
        uVar50 = uVar24 + uVar46;
        uVar33 = uStack_2c << 0xc | uStack_30 >> 0x14;
        uVar37 = uVar50 + uVar33;
        uStack_2c = (uStack_38 * 0x80 | uStack_34 >> 0x19) + (uVar25 * 2 | uStack_3c >> 0x1f) +
                    (uint)CARRY4(uVar24,uVar46) + (uStack_30 * 0x1000 | uStack_2c >> 0x14) +
                    (uint)CARRY4(uVar50,uVar33);
        uVar42 = uStack_44 << 0x12 | uStack_28 >> 0xe;
        uVar24 = (uint)((ulonglong)uVar23 * 0x80000000) |
                 uVar21 * 0xf796ca9 +
                 uVar23 * -0x210ca4ff + (int)((ulonglong)uVar23 * 0xf796ca9 >> 0x20) >> 1;
        lVar4 = (ulonglong)uVar24 * 0x85ebca87;
        uVar40 = uVar37 + uVar42 ^ (uint)lVar4;
        lVar5 = (ulonglong)uVar40 * 0x85ebca87;
        uStack_30 = (uint)lVar5;
        uVar41 = (uint)(ZEXT48(puStack_5c) * 0x80000000) |
                 uVar22 * 0xf796ca9 +
                 (int)puStack_5c * -0x210ca4ff + (int)(ZEXT48(puStack_5c) * 0xf796ca9 >> 0x20) >> 1;
        lVar6 = (ulonglong)uVar41 * 0x85ebca87;
        uVar50 = uStack_30 + 0xc2b2ae63 ^ (uint)lVar6;
        lVar7 = (ulonglong)uVar50 * 0x85ebca87;
        uVar22 = (uint)lVar7;
        uVar33 = (uint)((ulonglong)uStack_54 * 0x80000000) |
                 uStack_58 * 0xf796ca9 +
                 uStack_54 * -0x210ca4ff + (int)((ulonglong)uStack_54 * 0xf796ca9 >> 0x20) >> 1;
        lVar8 = (ulonglong)uVar33 * 0x85ebca87;
        uVar25 = uVar22 + 0xc2b2ae63 ^ (uint)lVar8;
        lVar9 = (ulonglong)uVar25 * 0x85ebca87;
        uVar34 = (uint)lVar9;
        uVar35 = (uint)((ulonglong)uStack_4c * 0x80000000) |
                 uStack_50 * 0xf796ca9 +
                 uStack_4c * -0x210ca4ff + (int)((ulonglong)uStack_4c * 0xf796ca9 >> 0x20) >> 1;
        lVar10 = (ulonglong)uVar35 * 0x85ebca87;
        uVar21 = uVar34 + 0xc2b2ae63 ^ (uint)lVar10;
        lVar11 = (ulonglong)uVar21 * 0x85ebca87;
        uVar36 = (uint)lVar11;
        uVar46 = uVar36 + 0xc2b2ae63;
        iVar49 = ((((uStack_2c + (uStack_28 * 0x40000 | uStack_44 >> 0xe) +
                     (uint)CARRY4(uVar37,uVar42) ^
                    (uVar61 * -0x80000000 +
                    uVar15 * -0x784349ac + (int)((ulonglong)uVar23 * 0x80000000 >> 0x20)) *
                    -0x7a143579 + uVar24 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20)) *
                    -0x7a143579 + uVar40 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) +
                    -0x7a143589 + (uint)(0x3d4d519c < uStack_30) ^
                   (uVar39 * -0x80000000 +
                   uVar20 * -0x784349ac + (int)(ZEXT48(puStack_5c) * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar41 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20)) *
                   -0x7a143579 + uVar50 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20) +
                   -0x7a143589 + (uint)(0x3d4d519c < uVar22) ^
                  (uVar59 * -0x80000000 +
                  uVar32 * -0x784349ac + (int)((ulonglong)uStack_54 * 0x80000000 >> 0x20)) *
                  -0x7a143579 + uVar33 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20)) *
                  -0x7a143579 + uVar25 * -0x61c8864f + (int)((ulonglong)lVar9 >> 0x20) + -0x7a143589
                  + (uint)(0x3d4d519c < uVar34) ^
                 (uVar51 * -0x80000000 +
                 uVar31 * -0x784349ac + (int)((ulonglong)uStack_4c * 0x80000000 >> 0x20)) *
                 -0x7a143579 + uVar35 * -0x61c8864f + (int)((ulonglong)lVar10 >> 0x20)) *
                 -0x7a143579 + uVar21 * -0x61c8864f + (int)((ulonglong)lVar11 >> 0x20) + -0x7a143589
                 + (uint)(0x3d4d519c < uVar36);
        aiStack_7c[1] = uVar47;
        apuStack_74[0] = puVar45;
      }
      uVar50 = uVar46 + uVar47;
      puVar45 = (uint *)((int)puVar45 + (uVar47 & 0xffffffe0));
      uVar46 = iVar49 + (uint)CARRY4(uVar46,uVar47);
      uVar47 = uVar47 & 0x1f;
      uVar25 = 0;
      do {
        if (uVar25 == 0 && (7 < uVar47) <= uVar25) {
          if (uVar25 == 0 && (3 < uVar47) <= uVar25) {
            if (uVar47 == 0 && uVar25 == 0) goto LAB_7176afa0;
            lVar4 = (ulonglong)(uint)(byte)*puVar45 * 0x165667c5;
            uVar31 = (uint)lVar4 ^ uVar50;
            uVar46 = (uint)(byte)*puVar45 * 0x27d4eb2f + (int)((ulonglong)lVar4 >> 0x20) ^ uVar46;
            uVar51 = uVar31 << 0xb | uVar46 >> 0x15;
            lVar4 = (ulonglong)uVar51 * 0x85ebca87;
            uVar50 = (uint)lVar4;
            uVar46 = (uVar46 << 0xb | uVar31 >> 0x15) * -0x7a143579 +
                     uVar51 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20);
            uVar32 = 0xffffffff;
            iVar49 = 1;
          }
          else {
            lVar4 = (ulonglong)*puVar45 * 0x85ebca87;
            uVar31 = (uint)lVar4 ^ uVar50;
            uVar46 = *puVar45 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) ^ uVar46;
            uVar51 = uVar31 << 0x17 | uVar46 >> 9;
            lVar4 = (ulonglong)uVar51 * 0x27d4eb4f;
            uVar32 = (uint)lVar4;
            uVar50 = uVar32 + 0x9e3779f9;
            iVar49 = 4;
            uVar46 = (uVar46 << 0x17 | uVar31 >> 9) * 0x27d4eb4f +
                     uVar51 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + 0x165667b1 +
                     (uint)(0x61c88606 < uVar32);
            uVar32 = 0xfffffffc;
          }
        }
        else {
          uVar51 = *puVar45;
          uVar32 = (uint)((ulonglong)uVar51 * 0x80000000) |
                   puVar45[1] * 0x27d4eb4f +
                   uVar51 * -0x3d4d51c3 + (int)((ulonglong)uVar51 * 0x27d4eb4f >> 0x20) >> 1;
          lVar4 = (ulonglong)uVar32 * 0x85ebca87;
          uVar31 = (uint)lVar4 ^ uVar50;
          uVar46 = (puVar45[1] * -0x80000000 +
                   uVar51 * -0x6c158a59 + (int)((ulonglong)uVar51 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar32 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) ^ uVar46;
          uVar51 = uVar31 << 0x1b | uVar46 >> 5;
          lVar4 = (ulonglong)uVar51 * 0x85ebca87;
          uVar59 = (uint)lVar4;
          uVar32 = 0xfffffff8;
          uVar50 = uVar59 + 0xc2b2ae63;
          iVar49 = 8;
          uVar46 = (uVar46 << 0x1b | uVar31 >> 5) * -0x7a143579 +
                   uVar51 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) + -0x7a143589 +
                   (uint)(0x3d4d519c < uVar59);
        }
        bVar65 = CARRY4(uVar32,uVar47);
        uVar47 = uVar32 + uVar47;
        puVar45 = (uint *)((int)puVar45 + iVar49);
        uVar25 = (uVar25 - 1) + (uint)bVar65;
      } while( true );
    }
    goto LAB_7176b010;
  }
  puVar27 = (uint *)0x0;
  *piVar63 = 0;
  apuStack_84[0] = (uint *)(piVar16 + 0xc018);
  if (*apuStack_84[0] >> 0xc != 0) {
    *apuStack_84[0] = 0;
  }
  piStack_68 = piVar16 + 0x400b;
  uStack_6c = *apuStack_84[0];
LAB_7176a90c:
  if (uStack_6c + (int)puVar27 >> 0xc == 0) {
    piVar63 = piVar16 + 0x400b + (uStack_6c + (int)puVar27) * 4;
    puVar38 = (uint *)*piVar63;
    puStack_60 = (uint *)piVar63[2];
    puVar45 = (uint *)piVar63[1];
    puStack_64 = (uint *)piVar63[3];
    uVar46 = 0x56d677d6;
    iVar64 = 0x27d4eb7f;
    if (&DAT_0000001f < puVar45) {
      uStack_28 = 0x61c8869e;
      uStack_2c = 0x40801011;
      uStack_30 = 0x50;
      uStack_34 = 0x6854fb60;
      uStack_44 = 0xba94458a;
      uStack_3c = 0xc2b2ae8d;
      uStack_38 = 0xee40c5e7;
      uVar46 = 0;
      puVar54 = puVar45;
      puVar60 = puVar38;
      uVar47 = 0x60ea283e;
      do {
        uStack_48 = uVar47;
        uStack_40 = uVar46;
        lVar4 = (ulonglong)puVar60[6] * 0x27d4eb4f;
        uVar46 = (uint)lVar4;
        uVar25 = uVar46 + uStack_44;
        puVar1 = puVar60 + 3;
        uVar46 = puVar60[7] * 0x27d4eb4f +
                 puVar60[6] * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + uStack_28 +
                 (uint)CARRY4(uVar46,uStack_44);
        uVar50 = uVar46 >> 1;
        uStack_4c = uVar25 * -0x80000000 | uVar50;
        uStack_44 = (uint)((ulonglong)uStack_4c * 0x85ebca87);
        uVar25 = uVar25 >> 1;
        uStack_50 = uVar46 * -0x80000000 | uVar25;
        uStack_28 = uStack_50 * -0x7a143579 +
                    uStack_4c * -0x61c8864f + (int)((ulonglong)uStack_4c * 0x85ebca87 >> 0x20);
        lVar4 = (ulonglong)puVar60[4] * 0x27d4eb4f;
        uVar46 = (uint)lVar4;
        uVar51 = uVar46 + uStack_2c;
        uVar46 = puVar60[5] * 0x27d4eb4f +
                 puVar60[4] * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + uStack_30 +
                 (uint)CARRY4(uVar46,uStack_2c);
        uVar31 = uVar46 >> 1;
        uStack_54 = uVar51 * -0x80000000 | uVar31;
        uStack_2c = (uint)((ulonglong)uStack_54 * 0x85ebca87);
        uVar51 = uVar51 >> 1;
        uStack_58 = uVar46 * -0x80000000 | uVar51;
        uStack_30 = uStack_58 * -0x7a143579 +
                    uStack_54 * -0x61c8864f + (int)((ulonglong)uStack_54 * 0x85ebca87 >> 0x20);
        puVar2 = puVar60 + 2;
        uVar47 = *puVar60;
        puVar3 = puVar60 + 1;
        puVar60 = puVar60 + 8;
        lVar4 = (ulonglong)*puVar2 * 0x27d4eb4f;
        uVar46 = (uint)lVar4;
        uVar59 = uVar46 + uStack_34;
        uVar46 = *puVar1 * 0x27d4eb4f + *puVar2 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) +
                 uStack_3c + (uint)CARRY4(uVar46,uStack_34);
        uVar32 = uVar46 >> 1;
        uVar22 = uVar59 * -0x80000000 | uVar32;
        uStack_34 = (uint)((ulonglong)uVar22 * 0x85ebca87);
        uVar59 = uVar59 >> 1;
        uVar21 = uVar46 * -0x80000000 | uVar59;
        uStack_3c = uVar21 * -0x7a143579 +
                    uVar22 * -0x61c8864f + (int)((ulonglong)uVar22 * 0x85ebca87 >> 0x20);
        lVar4 = (ulonglong)uVar47 * 0x27d4eb4f;
        uVar46 = (uint)lVar4;
        uVar39 = uVar46 + uStack_38;
        uVar46 = *puVar3 * 0x27d4eb4f + uVar47 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) +
                 uStack_48 + (uint)CARRY4(uVar46,uStack_38);
        bVar65 = puVar54 < (uint *)0x20;
        puVar54 = puVar54 + -8;
        uVar20 = uVar46 >> 1;
        uVar15 = uVar39 * -0x80000000 | uVar20;
        uVar39 = uVar39 >> 1;
        uVar61 = uVar46 * -0x80000000 | uVar39;
        uStack_38 = (uint)((ulonglong)uVar15 * 0x85ebca87);
        uVar47 = uVar61 * -0x7a143579 +
                 uVar15 * -0x61c8864f + (int)((ulonglong)uVar15 * 0x85ebca87 >> 0x20);
        uVar46 = uStack_40 - bVar65;
      } while ((uint)(puVar54 < (uint *)0x20) <= -uVar46);
      uVar24 = uStack_38 << 1 | uVar47 >> 0x1f;
      uVar46 = uStack_34 << 7 | uStack_3c >> 0x19;
      uVar33 = uVar46 + uVar24;
      uVar23 = uStack_2c << 0xc | uStack_30 >> 0x14;
      uVar41 = uVar33 + uVar23;
      uStack_2c = (uStack_3c * 0x80 | uStack_34 >> 0x19) + (uVar47 * 2 | uStack_38 >> 0x1f) +
                  (uint)CARRY4(uVar46,uVar24) + (uStack_30 * 0x1000 | uStack_2c >> 0x14) +
                  (uint)CARRY4(uVar33,uVar23);
      uStack_30 = (uint)((ulonglong)uVar15 * 0x80000000 >> 0x20);
      uVar40 = (uint)((ulonglong)uVar15 * 0x80000000) |
               uVar61 * 0xf796ca9 +
               uVar15 * -0x210ca4ff + (int)((ulonglong)uVar15 * 0xf796ca9 >> 0x20) >> 1;
      lVar4 = (ulonglong)uVar40 * 0x85ebca87;
      uVar47 = uStack_44 << 0x12 | uStack_28 >> 0xe;
      uVar15 = uVar41 + uVar47 ^ (uint)lVar4;
      lVar5 = (ulonglong)uVar15 * 0x85ebca87;
      uVar42 = (uint)lVar5;
      uVar24 = (uint)((ulonglong)uVar22 * 0x80000000) |
               uVar21 * 0xf796ca9 +
               uVar22 * -0x210ca4ff + (int)((ulonglong)uVar22 * 0xf796ca9 >> 0x20) >> 1;
      lVar6 = (ulonglong)uVar24 * 0x85ebca87;
      uVar61 = uVar42 + 0xc2b2ae63 ^ (uint)lVar6;
      lVar7 = (ulonglong)uVar61 * 0x85ebca87;
      uVar33 = (uint)lVar7;
      uVar34 = (uint)((ulonglong)uStack_54 * 0x80000000) |
               uStack_58 * 0xf796ca9 +
               uStack_54 * -0x210ca4ff + (int)((ulonglong)uStack_54 * 0xf796ca9 >> 0x20) >> 1;
      lVar8 = (ulonglong)uVar34 * 0x85ebca87;
      uVar21 = uVar33 + 0xc2b2ae63 ^ (uint)lVar8;
      lVar9 = (ulonglong)uVar21 * 0x85ebca87;
      uVar35 = (uint)lVar9;
      uVar36 = (uint)((ulonglong)uStack_4c * 0x80000000) |
               uStack_50 * 0xf796ca9 +
               uStack_4c * -0x210ca4ff + (int)((ulonglong)uStack_4c * 0xf796ca9 >> 0x20) >> 1;
      lVar10 = (ulonglong)uVar36 * 0x85ebca87;
      uVar23 = uVar35 + 0xc2b2ae63 ^ (uint)lVar10;
      lVar11 = (ulonglong)uVar23 * 0x85ebca87;
      uVar37 = (uint)lVar11;
      iVar49 = -0x3d4d51c3;
      uVar46 = uVar37 + 0xc2b2ae63;
      iVar64 = ((((uStack_2c + (uStack_28 * 0x40000 | uStack_44 >> 0xe) +
                   (uint)CARRY4(uVar41,uVar47) ^
                  (uVar39 * -0x80000000 + uVar20 * -0x784349ac + uStack_30) * -0x7a143579 +
                  uVar40 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20)) * -0x7a143579 +
                  uVar15 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) + -0x7a143589 +
                  (uint)(0x3d4d519c < uVar42) ^
                 (uVar59 * -0x80000000 +
                 uVar32 * -0x784349ac + (int)((ulonglong)uVar22 * 0x80000000 >> 0x20)) * -0x7a143579
                 + uVar24 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20)) * -0x7a143579 +
                 uVar61 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20) + -0x7a143589 +
                 (uint)(0x3d4d519c < uVar33) ^
                (uVar51 * -0x80000000 +
                uVar31 * -0x784349ac + (int)((ulonglong)uStack_54 * 0x80000000 >> 0x20)) *
                -0x7a143579 + uVar34 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20)) * -0x7a143579
                + uVar21 * -0x61c8864f + (int)((ulonglong)lVar9 >> 0x20) + -0x7a143589 +
                (uint)(0x3d4d519c < uVar35) ^
               (uVar25 * -0x80000000 +
               uVar50 * -0x784349ac + (int)((ulonglong)uStack_4c * 0x80000000 >> 0x20)) *
               -0x7a143579 + uVar36 * -0x61c8864f + (int)((ulonglong)lVar10 >> 0x20)) * -0x7a143579
               + uVar23 * -0x61c8864f + (int)((ulonglong)lVar11 >> 0x20) + -0x7a143589 +
               (uint)(0x3d4d519c < uVar37);
      apuStack_74[0] = puVar45;
      apuStack_74[1] = puVar38;
    }
    puVar62 = (undefined1 *)(uVar46 + (int)puVar45);
    uVar46 = iVar64 + (uint)CARRY4(uVar46,(uint)puVar45);
    puVar38 = (uint *)((int)puVar38 + ((uint)puVar45 & 0xffffffe0));
    uVar47 = (uint)puVar45 & 0x1f;
    uVar50 = 0;
    do {
      if (uVar50 == 0 && (7 < uVar47) <= uVar50) {
        if (uVar50 == 0 && (3 < uVar47) <= uVar50) {
          if (uVar47 == 0 && uVar50 == 0) goto LAB_7176a898;
          lVar4 = (ulonglong)(uint)(byte)*puVar38 * 0x165667c5;
          uVar25 = (uint)lVar4 ^ (uint)puVar62;
          uVar46 = (uint)(byte)*puVar38 * 0x27d4eb2f + (int)((ulonglong)lVar4 >> 0x20) ^ uVar46;
          uVar31 = uVar25 << 0xb | uVar46 >> 0x15;
          lVar4 = (ulonglong)uVar31 * 0x85ebca87;
          puVar62 = (undefined1 *)lVar4;
          iVar64 = 1;
          uVar46 = (uVar46 << 0xb | uVar25 >> 0x15) * -0x7a143579 +
                   uVar31 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20);
          uVar25 = 0xffffffff;
        }
        else {
          lVar4 = (ulonglong)*puVar38 * 0x85ebca87;
          uVar25 = (uint)lVar4 ^ (uint)puVar62;
          uVar46 = *puVar38 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) ^ uVar46;
          uVar51 = uVar25 << 0x17 | uVar46 >> 9;
          lVar4 = (ulonglong)uVar51 * 0x27d4eb4f;
          uVar31 = (uint)lVar4;
          puVar62 = (undefined1 *)(uVar31 + 0x9e3779f9);
          iVar64 = 4;
          uVar46 = (uVar46 << 0x17 | uVar25 >> 9) * 0x27d4eb4f +
                   uVar51 * iVar49 + (int)((ulonglong)lVar4 >> 0x20) + 0x165667b1 +
                   (uint)(0x61c88606 < uVar31);
          uVar25 = 0xfffffffc;
        }
      }
      else {
        uVar51 = *puVar38;
        uVar25 = (uint)((ulonglong)uVar51 * 0x80000000) |
                 puVar38[1] * 0x27d4eb4f +
                 uVar51 * iVar49 + (int)((ulonglong)uVar51 * 0x27d4eb4f >> 0x20) >> 1;
        lVar4 = (ulonglong)uVar25 * 0x85ebca87;
        uVar31 = (uint)lVar4 ^ (uint)puVar62;
        uVar46 = (puVar38[1] * -0x80000000 +
                 uVar51 * -0x6c158a59 + (int)((ulonglong)uVar51 * 0x80000000 >> 0x20)) * -0x7a143579
                 + uVar25 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) ^ uVar46;
        uVar32 = uVar31 << 0x1b | uVar46 >> 5;
        lVar4 = (ulonglong)uVar32 * 0x85ebca87;
        uVar51 = (uint)lVar4;
        uVar25 = 0xfffffff8;
        puVar62 = (undefined1 *)(uVar51 + 0xc2b2ae63);
        iVar49 = -0x3d4d51c3;
        iVar64 = 8;
        uVar46 = (uVar46 << 0x1b | uVar31 >> 5) * -0x7a143579 +
                 uVar32 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) + -0x7a143589 +
                 (uint)(0x3d4d519c < uVar51);
        uStack_28 = uVar50;
      }
      bVar65 = CARRY4(uVar25,uVar47);
      uVar47 = uVar25 + uVar47;
      puVar38 = (uint *)((int)puVar38 + iVar64);
      uVar50 = (uVar50 - 1) + (uint)bVar65;
    } while( true );
  }
  goto LAB_7176a900;
code_r0x71768878:
  puVar27 = (uint *)puVar27[1];
  goto joined_r0x71768854;
code_r0x717690d0:
  puVar27 = (uint *)puVar27[1];
  goto joined_r0x717690ac;
code_r0x717698cc:
  puVar27 = (uint *)puVar27[1];
  goto joined_r0x717698a8;
LAB_7176a738:
  uVar47 = (uint)puVar62 ^ uVar46 >> 1;
  lVar4 = (ulonglong)uVar47 * 0x27d4eb4f;
  uVar50 = (uint)lVar4;
  uVar46 = uVar46 * 0x27d4eb4f + uVar47 * iVar49 + (int)((ulonglong)lVar4 >> 0x20);
  uVar50 = (uVar50 >> 0x1d | uVar46 * 8) ^ uVar50;
  lVar4 = (ulonglong)uVar50 * 0x9e3779f9;
  uVar46 = (uVar46 ^ uVar46 >> 0x1d) * -0x61c88607 +
           uVar50 * 0x165667b1 + (int)((ulonglong)lVar4 >> 0x20);
  puVar27[8] = uVar46;
  puVar27[7] = uVar46 ^ (uint)lVar4;
  goto LAB_7176a7a0;
LAB_7176afa0:
  uVar50 = uVar50 ^ uVar46 >> 1;
  lVar4 = (ulonglong)uVar50 * 0x27d4eb4f;
  uVar47 = (uint)lVar4;
  uVar46 = uVar46 * 0x27d4eb4f + uVar50 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20);
  uVar47 = (uVar47 >> 0x1d | uVar46 * 8) ^ uVar47;
  lVar4 = (ulonglong)uVar47 * 0x9e3779f9;
  piVar63 = (int *)((uVar46 ^ uVar46 >> 0x1d) * -0x61c88607 +
                   uVar47 * 0x165667b1 + (int)((ulonglong)lVar4 >> 0x20));
  puStack_60 = puVar27;
  if (puStack_64 != (uint *)((uint)piVar63 ^ (uint)lVar4) || piStack_68 != piVar63)
  goto LAB_7176b7d4;
LAB_7176b010:
  puVar27 = (uint *)((int)puVar27 + 1);
  if (puVar27 == (uint *)0x12) goto LAB_7176b678;
  goto LAB_7176b01c;
LAB_7176b678:
  iVar49 = 0x12;
  goto LAB_7176b67c;
LAB_7176a898:
  uVar47 = (uint)puVar62 ^ uVar46 >> 1;
  lVar4 = (ulonglong)uVar47 * 0x27d4eb4f;
  uVar50 = (uint)lVar4;
  uVar46 = uVar46 * 0x27d4eb4f + uVar47 * iVar49 + (int)((ulonglong)lVar4 >> 0x20);
  uVar50 = (uVar50 >> 0x1d | uVar46 * 8) ^ uVar50;
  lVar4 = (ulonglong)uVar50 * 0x9e3779f9;
  puVar38 = (uint *)((uVar46 ^ uVar46 >> 0x1d) * -0x61c88607 +
                    uVar50 * 0x165667b1 + (int)((ulonglong)lVar4 >> 0x20));
  puStack_5c = puVar27;
  if (puStack_60 != (uint *)((uint)puVar38 ^ (uint)lVar4) || puStack_64 != puVar38) {
    pbVar52 = (byte *)0x0;
    software_interrupt(0);
    imp___aeabi_memcpy(0,&DAT_70085120,0x3c,0x22);
    do {
      *pbVar52 = *pbVar52 ^ 0x50;
      pbVar52 = pbVar52 + 1;
    } while (pbVar52 != (byte *)0x3c);
    uRam00000000 = 0xe3b00004;
    _LAB_00000004 = 0xe3b01000;
    FUN_719344e4(0,0x3c,0);
    (*(code *)0x0)();
LAB_7176b7d4:
    pbVar52 = (byte *)0x0;
    software_interrupt(0);
    imp___aeabi_memcpy(0,&DAT_70085120,0x3c,0x22);
    do {
      *pbVar52 = *pbVar52 ^ 0x50;
      pbVar52 = pbVar52 + 1;
    } while (pbVar52 != (byte *)0x3c);
    uRam00000000 = 0xe3b00002;
    _LAB_00000004 = 0xe3b01000;
    FUN_719344e4(0,0x3c,0);
    (*(code *)0x0)();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_7176a900:
  puVar27 = (uint *)((int)puVar27 + 1);
  if (puVar27 == (uint *)0x16) goto LAB_7176b670;
  goto LAB_7176a90c;
LAB_7176b670:
  iVar49 = 0x16;
LAB_7176b67c:
  *apuStack_84[0] = *apuStack_84[0] + iVar49;
  piVar63 = (int *)(DAT_711a3938 + 0x1389c);
  iVar49 = *piVar63;
  if (iVar49 == 0) {
    iVar49 = FUN_713c301c(0);
    if (iVar49 == 0) {
      iVar49 = *piVar63;
      if (iVar49 == 0) goto LAB_7176b6e8;
    }
    else {
      thunk_MwhHq(0x3a0);
      iVar49 = FUN_715ba834();
      *piVar63 = iVar49;
    }
  }
  thunk_FUN_715c4180(iVar49,0);
LAB_7176b6e8:
  thunk_FUN_7156842c(DAT_711a3938);
  thunk_FUN_71566a68(DAT_711a3938,0);
  *(undefined1 *)(iVar30 + 0x340) = 0;
  FUN_715d1fc8();
  thunk_FUN_71568310(DAT_711a3938,*apuStack_84[1]);
  return;
}


// =========================================================================
// Function: FUN_7176bffc
// Entry: 0x7176bffc | Size: 28 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7176bffc(uint *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  byte bVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  char *pcVar24;
  undefined4 uVar25;
  undefined4 *puVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint *puVar36;
  uint *puVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  char *pcVar44;
  uint *puVar45;
  uint uVar46;
  uint uVar47;
  int *piVar48;
  uint uVar49;
  byte *pbVar50;
  undefined1 *puVar51;
  uint uVar52;
  uint uVar53;
  uint **ppuVar54;
  uint *puVar55;
  uint uVar56;
  uint *puVar57;
  uint uVar58;
  undefined1 *puVar59;
  uint uVar60;
  bool bVar61;
  bool bVar62;
  uint *puStack_90;
  uint uStack_8c;
  uint *apuStack_88 [6];
  uint *puStack_70;
  uint *puStack_6c;
  uint *puStack_68;
  uint *puStack_64;
  uint *puStack_60;
  uint uStack_5c;
  undefined1 *puStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  undefined1 *puStack_28;
  
  ppuVar54 = &puStack_90;
  DataMemoryBarrier(0xb);
  if (((DAT_711f6d6c & 1) == 0) && (iVar21 = cuKsjVZRyspaVsDnqLy(&DAT_711f6d6c), iVar21 != 0)) {
    DAT_711f6d68 = FUN_71886108();
    SixizuLbAnqfgRApsCY(&DAT_711f6d6c);
  }
  iVar21 = FUN_71886108();
  apuStack_88[2] = (uint *)(iVar21 - DAT_711f6d68);
  puStack_6c = param_1;
  if ((uint *)0x20 < (uint *)(iVar21 - DAT_711f6d68)) {
    for (; ((*ppuVar54 != (uint *)0x6a4dab1f || ppuVar54[1] != (uint *)0x679b29b ||
            (ppuVar54[2] != (uint *)0x6efdd0cf || ppuVar54[3] != (uint *)0xfcc126c8)) ||
           (ppuVar54[4] != (uint *)0xbefc55d6 || ppuVar54[5] != (uint *)0x370f3a77));
        ppuVar54 = ppuVar54 + 1) {
    }
    piVar48 = (int *)(ppuVar54 + 0xc01a);
    if (*piVar48 < 9) {
      *piVar48 = *piVar48 + 1;
      apuStack_88[1] = (uint *)(ppuVar54 + 0xc019);
      puStack_68 = (uint *)*apuStack_88[1];
      puStack_70 = (uint *)(ppuVar54 + 0x800b);
      if ((uint *)0xfff < puStack_68) {
        puStack_68 = (uint *)0x0;
        *apuStack_88[1] = 0;
      }
      uVar29 = 0;
LAB_7176c908:
      if ((int)puStack_68 + uVar29 >> 0xc == 0) {
        puVar36 = puStack_70 + ((int)puStack_68 + uVar29) * 4;
        puVar37 = (uint *)*puVar36;
        puStack_60 = (uint *)puVar36[2];
        puVar45 = (uint *)puVar36[1];
        puStack_64 = (uint *)puVar36[3];
        uVar19 = 0x56d677d6;
        iVar21 = 0x27d4eb7f;
        if (&DAT_0000001f < puVar45) {
          iVar21 = 0;
          puStack_28 = (undefined1 *)0xba94458a;
          uStack_2c = 0x61c8869e;
          uStack_30 = 0x40801011;
          uStack_34 = 0x50;
          uStack_38 = 0x6854fb60;
          uStack_3c = 0xc2b2ae8d;
          uStack_40 = 0xee40c5e7;
          puVar36 = puVar37;
          puVar55 = puVar45;
          uVar19 = 0x60ea283e;
          do {
            uStack_44 = uVar19;
            lVar7 = (ulonglong)puVar36[6] * 0x27d4eb4f;
            uVar19 = (uint)lVar7;
            puVar51 = puStack_28 + uVar19;
            uVar19 = puVar36[7] * 0x27d4eb4f +
                     puVar36[6] * -0x3d4d51c3 + (int)((ulonglong)lVar7 >> 0x20) + uStack_2c +
                     (uint)CARRY4(uVar19,(uint)puStack_28);
            uVar35 = uVar19 >> 1;
            uStack_48 = (int)puVar51 * -0x80000000 | uVar35;
            puStack_28 = (undefined1 *)((ulonglong)uStack_48 * 0x85ebca87);
            uVar41 = (uint)puVar51 >> 1;
            uStack_4c = uVar19 * -0x80000000 | uVar41;
            uStack_2c = uStack_4c * -0x7a143579 +
                        uStack_48 * -0x61c8864f + (int)((ulonglong)uStack_48 * 0x85ebca87 >> 0x20);
            lVar7 = (ulonglong)puVar36[4] * 0x27d4eb4f;
            uVar19 = (uint)lVar7;
            puVar57 = puVar36 + 1;
            uVar42 = uVar19 + uStack_30;
            uVar19 = puVar36[5] * 0x27d4eb4f +
                     puVar36[4] * -0x3d4d51c3 + (int)((ulonglong)lVar7 >> 0x20) + uStack_34 +
                     (uint)CARRY4(uVar19,uStack_30);
            uVar28 = uVar19 >> 1;
            uStack_54 = uVar42 * -0x80000000 | uVar28;
            uStack_30 = (uint)((ulonglong)uStack_54 * 0x85ebca87);
            uVar42 = uVar42 >> 1;
            uStack_50 = uVar19 * -0x80000000 | uVar42;
            puVar1 = puVar36 + 2;
            uStack_34 = uStack_50 * -0x7a143579 +
                        uStack_54 * -0x61c8864f + (int)((ulonglong)uStack_54 * 0x85ebca87 >> 0x20);
            uVar30 = *puVar36;
            lVar7 = (ulonglong)*puVar1 * 0x27d4eb4f;
            uVar19 = (uint)lVar7;
            puVar2 = puVar36 + 3;
            puVar36 = puVar36 + 8;
            uVar27 = uVar19 + uStack_38;
            uVar19 = *puVar2 * 0x27d4eb4f + *puVar1 * -0x3d4d51c3 + (int)((ulonglong)lVar7 >> 0x20)
                     + uStack_3c + (uint)CARRY4(uVar19,uStack_38);
            uVar53 = uVar19 >> 1;
            uVar56 = uVar27 * -0x80000000 | uVar53;
            uVar27 = uVar27 >> 1;
            puStack_58 = (undefined1 *)(uVar19 * -0x80000000 | uVar27);
            uStack_38 = (uint)((ulonglong)uVar56 * 0x85ebca87);
            uStack_3c = (int)puStack_58 * -0x7a143579 +
                        uVar56 * -0x61c8864f + (int)((ulonglong)uVar56 * 0x85ebca87 >> 0x20);
            lVar7 = (ulonglong)uVar30 * 0x27d4eb4f;
            uVar19 = (uint)lVar7;
            uVar20 = uVar19 + uStack_40;
            uVar19 = *puVar57 * 0x27d4eb4f + uVar30 * -0x3d4d51c3 + (int)((ulonglong)lVar7 >> 0x20)
                     + uStack_44 + (uint)CARRY4(uVar19,uStack_40);
            bVar61 = puVar55 < (uint *)0x20;
            puVar55 = puVar55 + -8;
            iVar21 = iVar21 - (uint)bVar61;
            uVar30 = uVar19 >> 1;
            uVar43 = uVar20 * -0x80000000 | uVar30;
            uVar20 = uVar20 >> 1;
            uVar60 = uVar19 * -0x80000000 | uVar20;
            uStack_40 = (uint)((ulonglong)uVar43 * 0x85ebca87);
            uVar19 = uVar60 * -0x7a143579 +
                     uVar43 * -0x61c8864f + (int)((ulonglong)uVar43 * 0x85ebca87 >> 0x20);
          } while ((uint)(puVar55 < (uint *)0x20) <= (uint)-iVar21);
          uVar46 = uStack_38 << 7 | uStack_3c >> 0x19;
          uVar38 = uStack_40 << 1 | uVar19 >> 0x1f;
          uVar39 = uVar46 + uVar38;
          uVar47 = uStack_30 << 0xc | uStack_34 >> 0x14;
          uVar58 = uVar39 + uVar47;
          uStack_30 = (uStack_3c * 0x80 | uStack_38 >> 0x19) + (uVar19 * 2 | uStack_40 >> 0x1f) +
                      (uint)CARRY4(uVar46,uVar38) + (uStack_34 * 0x1000 | uStack_30 >> 0x14) +
                      (uint)CARRY4(uVar39,uVar47);
          uStack_34 = (uint)((ulonglong)uVar43 * 0x80000000 >> 0x20);
          uVar52 = (uint)((ulonglong)uVar43 * 0x80000000) |
                   uVar60 * 0xf796ca9 +
                   uVar43 * -0x210ca4ff + (int)((ulonglong)uVar43 * 0xf796ca9 >> 0x20) >> 1;
          lVar7 = (ulonglong)uVar52 * 0x85ebca87;
          uStack_38 = (uint)((ulonglong)lVar7 >> 0x20);
          uVar43 = (int)puStack_28 << 0x12 | uStack_2c >> 0xe;
          uVar60 = uVar58 + uVar43 ^ (uint)lVar7;
          lVar7 = (ulonglong)uVar60 * 0x85ebca87;
          uVar49 = (uint)lVar7;
          uVar40 = (uint)((ulonglong)uVar56 * 0x80000000) |
                   (int)puStack_58 * 0xf796ca9 +
                   uVar56 * -0x210ca4ff + (int)((ulonglong)uVar56 * 0xf796ca9 >> 0x20) >> 1;
          lVar8 = (ulonglong)uVar40 * 0x85ebca87;
          uVar38 = uVar49 + 0xc2b2ae63 ^ (uint)lVar8;
          lVar9 = (ulonglong)uVar38 * 0x85ebca87;
          uVar47 = (uint)lVar9;
          uVar31 = (uint)((ulonglong)uStack_54 * 0x80000000) |
                   uStack_50 * 0xf796ca9 +
                   uStack_54 * -0x210ca4ff + (int)((ulonglong)uStack_54 * 0xf796ca9 >> 0x20) >> 1;
          lVar10 = (ulonglong)uVar31 * 0x85ebca87;
          uVar39 = uVar47 + 0xc2b2ae63 ^ (uint)lVar10;
          lVar11 = (ulonglong)uVar39 * 0x85ebca87;
          uVar32 = (uint)lVar11;
          uVar33 = (uint)((ulonglong)uStack_48 * 0x80000000) |
                   uStack_4c * 0xf796ca9 +
                   uStack_48 * -0x210ca4ff + (int)((ulonglong)uStack_48 * 0xf796ca9 >> 0x20) >> 1;
          lVar12 = (ulonglong)uVar33 * 0x85ebca87;
          uVar46 = uVar32 + 0xc2b2ae63 ^ (uint)lVar12;
          lVar13 = (ulonglong)uVar46 * 0x85ebca87;
          uVar34 = (uint)lVar13;
          uVar19 = uVar34 + 0xc2b2ae63;
          iVar21 = ((((uStack_30 + (uStack_2c * 0x40000 | (uint)puStack_28 >> 0xe) +
                       (uint)CARRY4(uVar58,uVar43) ^
                      (uVar20 * -0x80000000 + uVar30 * -0x784349ac + uStack_34) * -0x7a143579 +
                      uVar52 * -0x61c8864f + uStack_38) * -0x7a143579 +
                      uVar60 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20) + -0x7a143589 +
                      (uint)(0x3d4d519c < uVar49) ^
                     (uVar27 * -0x80000000 +
                     uVar53 * -0x784349ac + (int)((ulonglong)uVar56 * 0x80000000 >> 0x20)) *
                     -0x7a143579 + uVar40 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20)) *
                     -0x7a143579 + uVar38 * -0x61c8864f + (int)((ulonglong)lVar9 >> 0x20) +
                     -0x7a143589 + (uint)(0x3d4d519c < uVar47) ^
                    (uVar42 * -0x80000000 +
                    uVar28 * -0x784349ac + (int)((ulonglong)uStack_54 * 0x80000000 >> 0x20)) *
                    -0x7a143579 + uVar31 * -0x61c8864f + (int)((ulonglong)lVar10 >> 0x20)) *
                    -0x7a143579 + uVar39 * -0x61c8864f + (int)((ulonglong)lVar11 >> 0x20) +
                    -0x7a143589 + (uint)(0x3d4d519c < uVar32) ^
                   (uVar41 * -0x80000000 +
                   uVar35 * -0x784349ac + (int)((ulonglong)uStack_48 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar33 * -0x61c8864f + (int)((ulonglong)lVar12 >> 0x20)) *
                   -0x7a143579 + uVar46 * -0x61c8864f + (int)((ulonglong)lVar13 >> 0x20) +
                   -0x7a143589 + (uint)(0x3d4d519c < uVar34);
          apuStack_88[4] = puVar45;
          apuStack_88[5] = puVar37;
        }
        puVar51 = (undefined1 *)(uVar19 + (int)puVar45);
        puVar37 = (uint *)((int)puVar37 + ((uint)puVar45 & 0xffffffe0));
        uVar19 = iVar21 + (uint)CARRY4(uVar19,(uint)puVar45);
        uVar35 = (uint)puVar45 & 0x1f;
        uVar41 = 0;
        do {
          if (uVar41 == 0 && (7 < uVar35) <= uVar41) {
            if (uVar41 == 0 && (3 < uVar35) <= uVar41) {
              if (uVar35 == 0 && uVar41 == 0) goto LAB_7176c88c;
              lVar7 = (ulonglong)(uint)(byte)*puVar37 * 0x165667c5;
              uVar28 = (uint)lVar7 ^ (uint)puVar51;
              uVar19 = (uint)(byte)*puVar37 * 0x27d4eb2f + (int)((ulonglong)lVar7 >> 0x20) ^ uVar19;
              uVar42 = uVar28 << 0xb | uVar19 >> 0x15;
              lVar7 = (ulonglong)uVar42 * 0x85ebca87;
              puVar51 = (undefined1 *)lVar7;
              iVar21 = 1;
              uVar19 = (uVar19 << 0xb | uVar28 >> 0x15) * -0x7a143579 +
                       uVar42 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20);
              uVar28 = 0xffffffff;
            }
            else {
              lVar7 = (ulonglong)*puVar37 * 0x85ebca87;
              uVar28 = (uint)lVar7 ^ (uint)puVar51;
              uVar19 = *puVar37 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20) ^ uVar19;
              uVar53 = uVar28 << 0x17 | uVar19 >> 9;
              lVar7 = (ulonglong)uVar53 * 0x27d4eb4f;
              uVar42 = (uint)lVar7;
              puVar51 = (undefined1 *)(uVar42 + 0x9e3779f9);
              iVar21 = 4;
              uVar19 = (uVar19 << 0x17 | uVar28 >> 9) * 0x27d4eb4f +
                       uVar53 * -0x3d4d51c3 + (int)((ulonglong)lVar7 >> 0x20) + 0x165667b1 +
                       (uint)(0x61c88606 < uVar42);
              uVar28 = 0xfffffffc;
            }
          }
          else {
            uVar28 = *puVar37;
            uVar53 = (uint)((ulonglong)uVar28 * 0x80000000) |
                     puVar37[1] * 0x27d4eb4f +
                     uVar28 * -0x3d4d51c3 + (int)((ulonglong)uVar28 * 0x27d4eb4f >> 0x20) >> 1;
            lVar7 = (ulonglong)uVar53 * 0x85ebca87;
            uVar42 = (uint)lVar7 ^ (uint)puVar51;
            uVar19 = (puVar37[1] * -0x80000000 +
                     uVar28 * -0x6c158a59 + (int)((ulonglong)uVar28 * 0x80000000 >> 0x20)) *
                     -0x7a143579 + uVar53 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20) ^ uVar19;
            uVar27 = uVar42 << 0x1b | uVar19 >> 5;
            lVar7 = (ulonglong)uVar27 * 0x85ebca87;
            uVar53 = (uint)lVar7;
            uVar28 = 0xfffffff8;
            puVar51 = (undefined1 *)(uVar53 + 0xc2b2ae63);
            iVar21 = 8;
            uVar19 = (uVar19 << 0x1b | uVar42 >> 5) * -0x7a143579 +
                     uVar27 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20) + -0x7a143589 +
                     (uint)(0x3d4d519c < uVar53);
          }
          bVar61 = CARRY4(uVar28,uVar35);
          uVar35 = uVar28 + uVar35;
          puVar37 = (uint *)((int)puVar37 + iVar21);
          uVar41 = (uVar41 - 1) + (uint)bVar61;
        } while( true );
      }
      goto LAB_7176c8fc;
    }
    puVar36 = (uint *)0x0;
    *piVar48 = 0;
    apuStack_88[1] = (uint *)(ppuVar54 + 0xc018);
    if (*apuStack_88[1] >> 0xc != 0) {
      *apuStack_88[1] = 0;
    }
    puStack_70 = (uint *)(ppuVar54 + 0x400b);
    apuStack_88[5] = (uint *)*apuStack_88[1];
LAB_7176c1f0:
    if ((uint)((int)apuStack_88[5] + (int)puVar36) >> 0xc == 0) {
      puVar37 = (uint *)(ppuVar54 + 0x400b + ((int)apuStack_88[5] + (int)puVar36) * 4);
      puVar45 = (uint *)*puVar37;
      puStack_64 = (uint *)puVar37[2];
      puVar55 = (uint *)puVar37[1];
      puStack_68 = (uint *)puVar37[3];
      uVar29 = 0x56d677d6;
      iVar21 = 0x27d4eb7f;
      if (&DAT_0000001f < puVar55) {
        puStack_28 = (undefined1 *)0x61c8869e;
        iVar21 = 0;
        uStack_2c = 0x40801011;
        uStack_30 = 0x50;
        uStack_40 = 0xba94458a;
        uStack_34 = 0x6854fb60;
        uStack_38 = 0xc2b2ae8d;
        uStack_3c = 0xee40c5e7;
        puVar37 = puVar55;
        uVar29 = 0x60ea283e;
        puVar57 = puVar45;
        do {
          uStack_44 = uVar29;
          lVar7 = (ulonglong)puVar57[6] * 0x27d4eb4f;
          uVar29 = (uint)lVar7;
          uVar35 = uVar29 + uStack_40;
          uVar19 = (uint)(puStack_28 +
                         (uint)CARRY4(uVar29,uStack_40) +
                         puVar57[7] * 0x27d4eb4f +
                         puVar57[6] * -0x3d4d51c3 + (int)((ulonglong)lVar7 >> 0x20)) >> 1;
          uStack_4c = uVar35 * -0x80000000 | uVar19;
          uVar35 = uVar35 >> 1;
          uStack_50 = (int)(puStack_28 +
                           (uint)CARRY4(uVar29,uStack_40) +
                           puVar57[7] * 0x27d4eb4f +
                           puVar57[6] * -0x3d4d51c3 + (int)((ulonglong)lVar7 >> 0x20)) * -0x80000000
                      | uVar35;
          uStack_40 = (uint)((ulonglong)uStack_4c * 0x85ebca87);
          puStack_28 = (undefined1 *)
                       (uStack_50 * -0x7a143579 +
                       uStack_4c * -0x61c8864f + (int)((ulonglong)uStack_4c * 0x85ebca87 >> 0x20));
          lVar7 = (ulonglong)puVar57[4] * 0x27d4eb4f;
          uVar29 = (uint)lVar7;
          uVar28 = uVar29 + uStack_2c;
          uVar29 = puVar57[5] * 0x27d4eb4f +
                   puVar57[4] * -0x3d4d51c3 + (int)((ulonglong)lVar7 >> 0x20) + uStack_30 +
                   (uint)CARRY4(uVar29,uStack_2c);
          uVar41 = uVar29 >> 1;
          uStack_54 = uVar28 * -0x80000000 | uVar41;
          uVar28 = uVar28 >> 1;
          puStack_58 = (undefined1 *)(uVar29 * -0x80000000 | uVar28);
          uVar27 = *puVar57;
          uStack_2c = (uint)((ulonglong)uStack_54 * 0x85ebca87);
          uStack_30 = (int)puStack_58 * -0x7a143579 +
                      uStack_54 * -0x61c8864f + (int)((ulonglong)uStack_54 * 0x85ebca87 >> 0x20);
          puVar1 = puVar57 + 3;
          uStack_48 = puVar57[1];
          puVar2 = puVar57 + 2;
          puVar57 = puVar57 + 8;
          lVar7 = (ulonglong)*puVar2 * 0x27d4eb4f;
          uVar29 = (uint)lVar7;
          uVar53 = uVar29 + uStack_34;
          uVar29 = *puVar1 * 0x27d4eb4f + *puVar2 * -0x3d4d51c3 + (int)((ulonglong)lVar7 >> 0x20) +
                   uStack_38 + (uint)CARRY4(uVar29,uStack_34);
          uVar42 = uVar29 >> 1;
          uStack_5c = uVar53 * -0x80000000 | uVar42;
          uVar53 = uVar53 >> 1;
          uVar20 = uVar29 * -0x80000000 | uVar53;
          uStack_34 = (uint)((ulonglong)uStack_5c * 0x85ebca87);
          uStack_38 = uVar20 * -0x7a143579 +
                      uStack_5c * -0x61c8864f + (int)((ulonglong)uStack_5c * 0x85ebca87 >> 0x20);
          lVar7 = (ulonglong)uVar27 * 0x27d4eb4f;
          uVar29 = (uint)lVar7;
          uVar30 = uVar29 + uStack_3c;
          uVar29 = uStack_48 * 0x27d4eb4f + uVar27 * -0x3d4d51c3 + (int)((ulonglong)lVar7 >> 0x20) +
                   uStack_44 + (uint)CARRY4(uVar29,uStack_3c);
          bVar61 = puVar37 < (uint *)0x20;
          puVar37 = puVar37 + -8;
          uVar27 = uVar29 >> 1;
          uVar43 = uVar30 * -0x80000000 | uVar27;
          iVar21 = iVar21 - (uint)bVar61;
          uStack_3c = (uint)((ulonglong)uVar43 * 0x85ebca87);
          uVar30 = uVar30 >> 1;
          uVar56 = uVar29 * -0x80000000 | uVar30;
          uVar29 = uVar56 * -0x7a143579 +
                   uVar43 * -0x61c8864f + (int)((ulonglong)uVar43 * 0x85ebca87 >> 0x20);
        } while ((uint)(puVar37 < (uint *)0x20) <= (uint)-iVar21);
        uVar39 = uStack_3c << 1 | uVar29 >> 0x1f;
        uVar60 = uStack_34 << 7 | uStack_38 >> 0x19;
        uVar46 = uVar60 + uVar39;
        uVar38 = uStack_2c << 0xc | uStack_30 >> 0x14;
        uVar49 = uVar46 + uVar38;
        uStack_2c = (uStack_38 * 0x80 | uStack_34 >> 0x19) + (uVar29 * 2 | uStack_3c >> 0x1f) +
                    (uint)CARRY4(uVar60,uVar39) + (uStack_30 * 0x1000 | uStack_2c >> 0x14) +
                    (uint)CARRY4(uVar46,uVar38);
        uStack_30 = (uint)((ulonglong)uVar43 * 0x80000000 >> 0x20);
        uVar40 = (uint)((ulonglong)uVar43 * 0x80000000) |
                 uVar56 * 0xf796ca9 +
                 uVar43 * -0x210ca4ff + (int)((ulonglong)uVar43 * 0xf796ca9 >> 0x20) >> 1;
        lVar7 = (ulonglong)uVar40 * 0x85ebca87;
        uVar43 = uStack_40 << 0x12 | (uint)puStack_28 >> 0xe;
        uVar56 = uVar49 + uVar43 ^ (uint)lVar7;
        lVar8 = (ulonglong)uVar56 * 0x85ebca87;
        uVar34 = (uint)lVar8;
        uVar33 = (uint)((ulonglong)uStack_5c * 0x80000000) |
                 uVar20 * 0xf796ca9 +
                 uStack_5c * -0x210ca4ff + (int)((ulonglong)uStack_5c * 0xf796ca9 >> 0x20) >> 1;
        lVar9 = (ulonglong)uVar33 * 0x85ebca87;
        uVar20 = uVar34 + 0xc2b2ae63 ^ (uint)lVar9;
        lVar10 = (ulonglong)uVar20 * 0x85ebca87;
        uVar39 = (uint)lVar10;
        uVar46 = (uint)((ulonglong)uStack_54 * 0x80000000) |
                 (int)puStack_58 * 0xf796ca9 +
                 uStack_54 * -0x210ca4ff + (int)((ulonglong)uStack_54 * 0xf796ca9 >> 0x20) >> 1;
        lVar11 = (ulonglong)uVar46 * 0x85ebca87;
        uVar60 = uVar39 + 0xc2b2ae63 ^ (uint)lVar11;
        lVar12 = (ulonglong)uVar60 * 0x85ebca87;
        uVar47 = (uint)lVar12;
        uVar31 = (uint)((ulonglong)uStack_4c * 0x80000000) |
                 uStack_50 * 0xf796ca9 +
                 uStack_4c * -0x210ca4ff + (int)((ulonglong)uStack_4c * 0xf796ca9 >> 0x20) >> 1;
        lVar13 = (ulonglong)uVar31 * 0x85ebca87;
        uVar38 = uVar47 + 0xc2b2ae63 ^ (uint)lVar13;
        lVar6 = (ulonglong)uVar38 * 0x85ebca87;
        uVar32 = (uint)lVar6;
        uVar29 = uVar32 + 0xc2b2ae63;
        iVar21 = ((((uStack_2c + ((int)puStack_28 * 0x40000 | uStack_40 >> 0xe) +
                     (uint)CARRY4(uVar49,uVar43) ^
                    (uVar30 * -0x80000000 + uVar27 * -0x784349ac + uStack_30) * -0x7a143579 +
                    uVar40 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20)) * -0x7a143579 +
                    uVar56 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20) + -0x7a143589 +
                    (uint)(0x3d4d519c < uVar34) ^
                   (uVar53 * -0x80000000 +
                   uVar42 * -0x784349ac + (int)((ulonglong)uStack_5c * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar33 * -0x61c8864f + (int)((ulonglong)lVar9 >> 0x20)) *
                   -0x7a143579 + uVar20 * -0x61c8864f + (int)((ulonglong)lVar10 >> 0x20) +
                   -0x7a143589 + (uint)(0x3d4d519c < uVar39) ^
                  (uVar28 * -0x80000000 +
                  uVar41 * -0x784349ac + (int)((ulonglong)uStack_54 * 0x80000000 >> 0x20)) *
                  -0x7a143579 + uVar46 * -0x61c8864f + (int)((ulonglong)lVar11 >> 0x20)) *
                  -0x7a143579 + uVar60 * -0x61c8864f + (int)((ulonglong)lVar12 >> 0x20) +
                  -0x7a143589 + (uint)(0x3d4d519c < uVar47) ^
                 (uVar35 * -0x80000000 +
                 uVar19 * -0x784349ac + (int)((ulonglong)uStack_4c * 0x80000000 >> 0x20)) *
                 -0x7a143579 + uVar31 * -0x61c8864f + (int)((ulonglong)lVar13 >> 0x20)) *
                 -0x7a143579 + uVar38 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20) + -0x7a143589
                 + (uint)(0x3d4d519c < uVar32);
        apuStack_88[3] = puVar55;
        apuStack_88[4] = puVar45;
      }
      puVar59 = (undefined1 *)(uVar29 + (int)puVar55);
      uVar29 = iVar21 + (uint)CARRY4(uVar29,(uint)puVar55);
      puVar45 = (uint *)((int)puVar45 + ((uint)puVar55 & 0xffffffe0));
      uVar19 = (uint)puVar55 & 0x1f;
      puVar51 = (undefined1 *)0x0;
      do {
        if (puVar51 == (undefined1 *)0x0 && (undefined1 *)(uint)(7 < uVar19) <= puVar51) {
          if (puVar51 == (undefined1 *)0x0 && (undefined1 *)(uint)(3 < uVar19) <= puVar51) {
            if (uVar19 == 0 && puVar51 == (undefined1 *)0x0) goto LAB_7176c174;
            lVar7 = (ulonglong)(uint)(byte)*puVar45 * 0x165667c5;
            uVar35 = (uint)lVar7 ^ (uint)puVar59;
            uVar29 = (uint)(byte)*puVar45 * 0x27d4eb2f + (int)((ulonglong)lVar7 >> 0x20) ^ uVar29;
            uVar41 = uVar35 << 0xb | uVar29 >> 0x15;
            lVar7 = (ulonglong)uVar41 * 0x85ebca87;
            puVar59 = (undefined1 *)lVar7;
            iVar21 = 1;
            uVar29 = (uVar29 << 0xb | uVar35 >> 0x15) * -0x7a143579 +
                     uVar41 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20);
            uVar35 = 0xffffffff;
          }
          else {
            lVar7 = (ulonglong)*puVar45 * 0x85ebca87;
            uVar35 = (uint)lVar7 ^ (uint)puVar59;
            uVar29 = *puVar45 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20) ^ uVar29;
            uVar28 = uVar35 << 0x17 | uVar29 >> 9;
            lVar7 = (ulonglong)uVar28 * 0x27d4eb4f;
            uVar41 = (uint)lVar7;
            puVar59 = (undefined1 *)(uVar41 + 0x9e3779f9);
            iVar21 = 4;
            uVar29 = (uVar29 << 0x17 | uVar35 >> 9) * 0x27d4eb4f +
                     uVar28 * -0x3d4d51c3 + (int)((ulonglong)lVar7 >> 0x20) + 0x165667b1 +
                     (uint)(0x61c88606 < uVar41);
            uVar35 = 0xfffffffc;
          }
        }
        else {
          uVar35 = *puVar45;
          uVar28 = (uint)((ulonglong)uVar35 * 0x80000000) |
                   puVar45[1] * 0x27d4eb4f +
                   uVar35 * -0x3d4d51c3 + (int)((ulonglong)uVar35 * 0x27d4eb4f >> 0x20) >> 1;
          lVar7 = (ulonglong)uVar28 * 0x85ebca87;
          uVar41 = (uint)lVar7 ^ (uint)puVar59;
          uVar29 = (puVar45[1] * -0x80000000 +
                   uVar35 * -0x6c158a59 + (int)((ulonglong)uVar35 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar28 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20) ^ uVar29;
          uVar42 = uVar41 << 0x1b | uVar29 >> 5;
          lVar7 = (ulonglong)uVar42 * 0x85ebca87;
          uVar28 = (uint)lVar7;
          uVar35 = 0xfffffff8;
          puVar59 = (undefined1 *)(uVar28 + 0xc2b2ae63);
          iVar21 = 8;
          uVar29 = (uVar29 << 0x1b | uVar41 >> 5) * -0x7a143579 +
                   uVar42 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20) + -0x7a143589 +
                   (uint)(0x3d4d519c < uVar28);
          puStack_28 = puVar51;
        }
        bVar61 = CARRY4(uVar35,uVar19);
        uVar19 = uVar35 + uVar19;
        puVar45 = (uint *)((int)puVar45 + iVar21);
        puVar51 = puVar51 + (bVar61 - 1);
      } while( true );
    }
    goto LAB_7176c1e4;
  }
  goto LAB_7176cf74;
LAB_7176c88c:
  uVar35 = (uint)puVar51 ^ uVar19 >> 1;
  lVar7 = (ulonglong)uVar35 * 0x27d4eb4f;
  uVar41 = (uint)lVar7;
  uVar19 = uVar19 * 0x27d4eb4f + uVar35 * -0x3d4d51c3 + (int)((ulonglong)lVar7 >> 0x20);
  uVar41 = (uVar41 >> 0x1d | uVar19 * 8) ^ uVar41;
  lVar7 = (ulonglong)uVar41 * 0x9e3779f9;
  puVar36 = (uint *)((uVar19 ^ uVar19 >> 0x1d) * -0x61c88607 +
                    uVar41 * 0x165667b1 + (int)((ulonglong)lVar7 >> 0x20));
  uStack_5c = uVar29;
  if (puStack_60 != (uint *)((uint)puVar36 ^ (uint)lVar7) || puStack_64 != puVar36)
  goto LAB_7176eb78;
LAB_7176c8fc:
  uVar29 = uVar29 + 1;
  if (uVar29 == 0x12) goto LAB_7176cf44;
  goto LAB_7176c908;
LAB_7176cf44:
  iVar21 = 0x12;
  goto LAB_7176cf48;
LAB_7176c174:
  uVar19 = (uint)puVar59 ^ uVar29 >> 1;
  lVar7 = (ulonglong)uVar19 * 0x27d4eb4f;
  uVar35 = (uint)lVar7;
  uVar29 = uVar29 * 0x27d4eb4f + uVar19 * -0x3d4d51c3 + (int)((ulonglong)lVar7 >> 0x20);
  uVar35 = (uVar35 >> 0x1d | uVar29 * 8) ^ uVar35;
  lVar7 = (ulonglong)uVar35 * 0x9e3779f9;
  puVar37 = (uint *)((uVar29 ^ uVar29 >> 0x1d) * -0x61c88607 +
                    uVar35 * 0x165667b1 + (int)((ulonglong)lVar7 >> 0x20));
  puStack_60 = puVar36;
  if (puStack_64 == (uint *)((uint)puVar37 ^ (uint)lVar7) && puStack_68 == puVar37) {
LAB_7176c1e4:
    puVar36 = (uint *)((int)puVar36 + 1);
    if (puVar36 == (uint *)0x16) goto LAB_7176cf34;
    goto LAB_7176c1f0;
  }
  pbVar50 = (byte *)0x0;
  software_interrupt(0);
  imp___aeabi_memcpy(0,&DAT_70085120,0x3c,0x22);
  do {
    *pbVar50 = *pbVar50 ^ 0x50;
    pbVar50 = pbVar50 + 1;
  } while (pbVar50 != (byte *)0x3c);
  uRam00000000 = 0xe3b00004;
  _LAB_00000004 = 0xe3b01000;
  FUN_719344e4(0,0x3c,0);
  (*(code *)0x0)();
LAB_7176eb78:
  pbVar50 = (byte *)0x0;
  software_interrupt(0);
  imp___aeabi_memcpy(0,&DAT_70085120,0x3c,0x22);
  do {
    *pbVar50 = *pbVar50 ^ 0x50;
    pbVar50 = pbVar50 + 1;
  } while (pbVar50 != (byte *)0x3c);
  uRam00000000 = 0xe3b00002;
  _LAB_00000004 = 0xe3b01000;
  FUN_719344e4(0,0x3c,0);
  (*(code *)0x0)();
  goto LAB_7176ec28;
LAB_7176dfb0:
  uVar19 = (uint)puStack_28 ^ uVar29 >> 1;
  lVar7 = (ulonglong)uVar19 * 0x27d4eb4f;
  uVar35 = (uint)lVar7;
  uVar29 = uVar29 * 0x27d4eb4f + uVar19 * -0x3d4d51c3 + (int)((ulonglong)lVar7 >> 0x20);
  uVar35 = (uVar35 >> 0x1d | uVar29 * 8) ^ uVar35;
  lVar7 = (ulonglong)uVar35 * 0x9e3779f9;
  puVar36 = (uint *)((uVar29 ^ uVar29 >> 0x1d) * -0x61c88607 +
                    uVar35 * 0x165667b1 + (int)((ulonglong)lVar7 >> 0x20));
  puStack_70 = puVar37;
  if (puStack_64 != (uint *)((uint)puVar36 ^ (uint)lVar7) || puStack_68 != puVar36)
  goto LAB_7176eea8;
  puVar45 = (uint *)puStack_60[1];
  puVar55 = puStack_60;
  if ((uint *)puStack_60[1] == (uint *)0x0) {
    do {
      puVar36 = (uint *)puVar55[2];
      bVar61 = (uint *)*puVar36 != puVar55;
      puVar55 = puVar36;
    } while (bVar61);
  }
  else {
    do {
      puVar36 = puVar45;
      puVar45 = (uint *)*puVar36;
    } while ((uint *)*puVar36 != (uint *)0x0);
  }
  param_1 = puStack_6c;
  if (puVar36 == puVar37) goto LAB_7176d3dc;
  goto LAB_7176d97c;
LAB_7176ea0c:
  uVar19 = uVar19 ^ uVar29 >> 1;
  lVar7 = (ulonglong)uVar19 * 0x27d4eb4f;
  uVar35 = (uint)lVar7;
  uVar29 = uVar29 * 0x27d4eb4f + uVar19 * -0x3d4d51c3 + (int)((ulonglong)lVar7 >> 0x20);
  uVar35 = (uVar35 >> 0x1d | uVar29 * 8) ^ uVar35;
  lVar7 = (ulonglong)uVar35 * 0x9e3779f9;
  puVar36 = (uint *)((uVar29 ^ uVar29 >> 0x1d) * -0x61c88607 +
                    uVar35 * 0x165667b1 + (int)((ulonglong)lVar7 >> 0x20));
  param_1 = puStack_6c;
  if (uStack_5c != ((uint)puVar36 ^ (uint)lVar7) || puStack_60 != puVar36) goto LAB_7176efe8;
  goto LAB_7176ea84;
LAB_7176e31c:
  uVar19 = uVar19 ^ (uint)puStack_28 >> 1;
  lVar7 = (ulonglong)uVar19 * 0x27d4eb4f;
  uVar35 = (uint)lVar7;
  uVar29 = (int)puStack_28 * 0x27d4eb4f + uVar19 * -0x3d4d51c3 + (int)((ulonglong)lVar7 >> 0x20);
  uVar35 = (uVar35 >> 0x1d | uVar29 * 8) ^ uVar35;
  lVar7 = (ulonglong)uVar35 * 0x9e3779f9;
  puVar36 = (uint *)((uVar29 ^ uVar29 >> 0x1d) * -0x61c88607 +
                    uVar35 * 0x165667b1 + (int)((ulonglong)lVar7 >> 0x20));
  puStack_58 = (undefined1 *)0x3;
  if (uStack_5c == ((uint)puVar36 ^ (uint)lVar7) && puStack_60 == puVar36) {
    puStack_58 = (undefined1 *)0x3;
    param_1 = puStack_6c;
    goto LAB_7176ea84;
  }
  goto LAB_7176ef48;
LAB_7176cf34:
  iVar21 = 0x16;
LAB_7176cf48:
  *apuStack_88[1] = *apuStack_88[1] + iVar21;
  FUN_7176f93c(param_1);
  DAT_711f6d68 = FUN_71886108();
LAB_7176cf74:
  if ((param_1[0x2b] != 0) && (iVar21 = *(int *)(param_1[0x2b] + 0x1f6c), iVar21 != 0)) {
    bVar61 = *(char *)(iVar21 + 0x12a) != '\0';
    if (bVar61) {
      iVar21 = *(int *)(iVar21 + 0x130);
    }
    if (bVar61 && iVar21 != 0) {
      FUN_71564ad8(DAT_711a3938);
    }
  }
  if (((char)param_1[0xd6] != '\0') && (DAT_711f6bf8 == 0)) {
    thunk_FUN_715668c0(DAT_711a3938,*(undefined1 *)((int)param_1 + 0x359),
                       *(undefined1 *)((int)param_1 + 0x35a));
  }
  if (param_1[10] != 0xe) {
    uVar29 = FUN_714f658c();
    bVar61 = uVar29 == 0;
    if (bVar61) {
      uVar29 = (uint)DAT_711f6bf8;
    }
    if (bVar61 && uVar29 == 0) {
      piVar48 = (int *)(DAT_711a3938 + 0x1389c);
      iVar21 = *piVar48;
      if (iVar21 == 0) {
        iVar21 = FUN_713c301c(0);
        if (iVar21 == 0) {
          iVar21 = *piVar48;
        }
        else {
          iVar21 = thunk_MwhHq(0x3a0);
          iVar22 = FUN_715ba834();
          *piVar48 = iVar22;
        }
      }
      if ((iVar21 != 0) && (iVar22 = *(int *)(DAT_711a3938 + 0x13898), iVar22 != 0)) {
        iVar23 = thunk_FUN_715bf66c(iVar21);
        if (iVar23 == 0) {
          FUN_715601e8(iVar21,0xc2d9bff3,0x43a4baa6,0x414309d5);
        }
        else {
          FUN_715bf69c(iVar21);
        }
        FUN_715bf554(iVar21);
        FUN_715c426c(iVar21,0);
        puStack_90 = (uint *)0x0;
        uStack_8c = 0;
        apuStack_88[0] = (uint *)0x0;
        FUN_714dd7fc(iVar22,0x437de553,0x4491035d,0x418947ad);
        puStack_90 = (uint *)0x2;
        FUN_714dda40(iVar22,0x437caf68,0x44906971,0x41843b22);
        thunk_FUN_71566994(DAT_711a3938,*(undefined1 *)((int)param_1 + 0x35b));
        thunk_FUN_7156a9f4(0,4);
      }
    }
LAB_7176ea84:
    uVar29 = param_1[10];
    if (uVar29 == 9) {
      iVar21 = FUN_71886108();
      if (3000 < iVar21 - param_1[0xb]) {
        uVar29 = param_1[0xca];
        param_1[0xca] = uVar29 + 1;
        puVar36 = DAT_712017f8;
        if ((int)uVar29 < 9) {
          DataMemoryBarrier(0xb);
          if (((DAT_711f6d88 & 1) == 0) &&
             (iVar21 = cuKsjVZRyspaVsDnqLy(&DAT_711f6d88), iVar21 != 0)) {
            pcVar24 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fa69c);
            if (*pcVar24 == '\0') {
              puVar26 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa68c);
              *puVar26 = 0xcc3239b2;
              puVar26[1] = 0xd68e8d1f;
              puVar26[2] = 0xc20504a9;
              *(undefined1 *)((int)puVar26 + 0xf) = 1;
              *(undefined4 *)((int)puVar26 + 0xb) = 0xeb8616c2;
              GFDIUClbc_QcPNgD_wH(&LAB_717819cc,puVar26,&DAT_70b0e000);
              puVar51 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa69c);
              *puVar51 = 1;
            }
            pbVar50 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fa68c);
            if (pbVar50[0xf] != 0) {
              *pbVar50 = *pbVar50 ^ 0xdd;
              pbVar50[1] = pbVar50[1] ^ 0x57;
              pbVar50[2] = pbVar50[2] ^ 0x71;
              pbVar50[3] = pbVar50[3] ^ 0xa3;
              pbVar50[0xf] = 0;
              pbVar50[4] = pbVar50[4] ^ 0x71;
              pbVar50[5] = pbVar50[5] ^ 0xe3;
              pbVar50[6] = pbVar50[6] ^ 0xeb;
              pbVar50[7] = pbVar50[7] ^ 0xb5;
              pbVar50[8] = pbVar50[8] ^ 0xdd;
              pbVar50[9] = pbVar50[9] ^ 0x57;
              pbVar50[10] = pbVar50[10] ^ 0x71;
              pbVar50[0xb] = pbVar50[0xb] ^ 0xa3;
              pbVar50[0xc] = pbVar50[0xc] ^ 0x71;
              pbVar50[0xd] = pbVar50[0xd] ^ 0xe3;
              pbVar50[0xe] = pbVar50[0xe] ^ 0xeb;
            }
            DAT_711f6d84 = (undefined1 *)FUN_71885ba4(pbVar50,0);
            SixizuLbAnqfgRApsCY(&DAT_711f6d88);
          }
          puVar51 = DAT_711f6d84;
          imp___aeabi_memclr4(&uStack_54,0x30);
          puStack_58 = puVar51;
          pcVar24 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fa6bc);
          if (*pcVar24 == '\0') {
            puVar26 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa6ac);
            *(undefined1 *)((int)puVar26 + 0x12) = 1;
            uVar15 = DAT_70085184;
            uVar14 = DAT_70085180;
            uVar25 = DAT_7008517c;
            *puVar26 = DAT_70085178;
            puVar26[1] = uVar25;
            puVar26[2] = uVar14;
            puVar26[3] = uVar15;
            *(undefined2 *)(puVar26 + 4) = DAT_70085188;
            GFDIUClbc_QcPNgD_wH(&LAB_717819fc,puVar26,&DAT_70b0e000);
            puVar51 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa6bc);
            *puVar51 = 1;
          }
          iVar21 = XcxSszXLPjQrEGhecEv_(&DAT_700fa6ac);
          if (*(char *)(iVar21 + 0x12) != '\0') {
            uVar29 = 0;
            uVar19 = 0;
            do {
              iVar22 = (uVar29 & 7) * 8;
              uVar35 = iVar22 - 0x20;
              bVar18 = (byte)(0xa37157dd >> iVar22) |
                       (byte)(-0x4a141c8f << ((uVar29 & 7) * -8 + 0x20 & 0xff));
              if (-1 < (int)uVar35) {
                bVar18 = (byte)(0xb5ebe371 >> (uVar35 & 0xff));
              }
              *(byte *)(iVar21 + uVar29) = *(byte *)(iVar21 + uVar29) ^ bVar18;
              bVar62 = 0xfffffffe < uVar29;
              bVar61 = uVar19 == 0;
              bVar4 = (0x10 < uVar29) <= uVar19;
              uVar29 = uVar29 + 1;
              uVar19 = uVar19 + bVar62;
            } while (bVar61 && bVar4);
            *(undefined1 *)(iVar21 + 0x12) = 0;
          }
          puVar37 = (uint *)imp_strlen(iVar21);
          if ((uint *)0xfffffff7 < puVar37) goto LAB_717777e4;
          if (puVar37 < (uint *)0xb) {
            puStack_70 = (uint *)CONCAT31(puStack_70._1_3_,(char)((int)puVar37 << 1));
            puVar45 = (uint *)((uint)&puStack_70 | 1);
            if (puVar37 != (uint *)0x0) goto LAB_71776e24;
          }
          else {
            puVar45 = (uint *)thunk_MwhHq(((uint)puVar37 | 7) + 1);
            puStack_70 = (uint *)(((uint)puVar37 | 7) + 2);
            puStack_6c = puVar37;
            puStack_68 = puVar45;
LAB_71776e24:
            imp___aeabi_memmove(puVar45,iVar21,puVar37);
          }
          *(undefined1 *)((int)puVar45 + (int)puVar37) = 0;
          FUN_717300d8(&puStack_64,&puStack_70);
          FUN_71524948(&puStack_58,&puStack_64);
          uVar25 = FUN_713a1f9c(&puStack_58,0);
          uVar25 = FUN_713a1f9c(uVar25,0);
          cfqspBX_JrdDvACwYrAyrngjQ(puVar36 + 0xd);
          puVar37 = (uint *)thunk_MwhHq(0x3c);
          *puVar37 = 0;
          puVar37[1] = 0;
          FUN_713a10f8(puVar37 + 2,uVar25);
          puVar37[1] = (uint)(puVar36 + 0xe);
          uVar29 = puVar36[0xe];
          *puVar37 = uVar29;
          *(uint **)(uVar29 + 4) = puVar37;
          puVar36[0xe] = (uint)puVar37;
          puVar36[0x10] = puVar36[0x10] + 1;
          QgduklVhdVlmSiqzGQeutncbrNj(puVar36 + 0xd);
          if (((uint)puStack_64 & 1) != 0) {
            qNQrlu(uStack_5c);
          }
          if (((uint)puStack_70 & 1) != 0) {
            qNQrlu(puStack_68);
          }
          if (uStack_3c != 0) {
            uStack_38 = uStack_3c;
            qNQrlu();
          }
          if (uStack_48 != 0) {
            uStack_44 = uStack_48;
            qNQrlu();
          }
          if (uStack_54 != 0) {
            uStack_50 = uStack_54;
            qNQrlu();
          }
          DAT_711f6d5c = 1;
          uVar29 = FUN_71886108();
          param_1[0xb] = uVar29;
          puStack_90 = (uint *)0x0;
          uStack_8c = 5;
          iVar21 = (**(code **)(*(int *)*param_1 + 200))
                             ((int *)*param_1,(undefined1 *)((int)param_1 + 0x22d),
                              (short)param_1[0xab],0);
          puVar36 = DAT_712017f8;
          if (iVar21 != 0) {
            uVar29 = 0xd;
            goto LAB_71777354;
          }
          DataMemoryBarrier(0xb);
          if (((DAT_711f6d90 & 1) == 0) &&
             (iVar21 = cuKsjVZRyspaVsDnqLy(&DAT_711f6d90), iVar21 != 0)) {
            pcVar24 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fa6dc);
            if (*pcVar24 == '\0') {
              puVar26 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa6cc);
              *puVar26 = 0xa0fc07b6;
              puVar26[1] = 0x7e66e12b;
              puVar26[2] = 0xaecb3aad;
              *(undefined1 *)((int)puVar26 + 0xf) = 1;
              *(undefined4 *)((int)puVar26 + 0xb) = 0x3ea22ae;
              GFDIUClbc_QcPNgD_wH(&LAB_71781a30,puVar26,&DAT_70b0e000);
              puVar51 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa6dc);
              *puVar51 = 1;
            }
            pbVar50 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fa6cc);
            if (pbVar50[0xf] != 0) {
              *pbVar50 = *pbVar50 ^ 0xd9;
              pbVar50[1] = pbVar50[1] ^ 0x69;
              pbVar50[2] = pbVar50[2] ^ 0xbf;
              pbVar50[3] = pbVar50[3] ^ 0xcf;
              pbVar50[0xf] = 0;
              pbVar50[4] = pbVar50[4] ^ 0x45;
              pbVar50[5] = pbVar50[5] ^ 0x8f;
              pbVar50[6] = pbVar50[6] ^ 3;
              pbVar50[7] = pbVar50[7] ^ 0x1d;
              pbVar50[8] = pbVar50[8] ^ 0xd9;
              pbVar50[9] = pbVar50[9] ^ 0x69;
              pbVar50[10] = pbVar50[10] ^ 0xbf;
              pbVar50[0xb] = pbVar50[0xb] ^ 0xcf;
              pbVar50[0xc] = pbVar50[0xc] ^ 0x45;
              pbVar50[0xd] = pbVar50[0xd] ^ 0x8f;
              pbVar50[0xe] = pbVar50[0xe] ^ 3;
            }
            DAT_711f6d8c = (undefined1 *)FUN_71885ba4(pbVar50,0);
            SixizuLbAnqfgRApsCY(&DAT_711f6d90);
          }
          puVar51 = DAT_711f6d8c;
          imp___aeabi_memclr4(&uStack_54,0x30);
          puStack_58 = puVar51;
          pcVar24 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fa6fc);
          if (*pcVar24 == '\0') {
            puVar26 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa6ec);
            *(undefined1 *)((int)puVar26 + 0x21) = 1;
            uVar15 = DAT_7008519c;
            uVar14 = DAT_70085198;
            uVar25 = DAT_70085194;
            *puVar26 = DAT_70085190;
            puVar26[1] = uVar25;
            puVar26[2] = uVar14;
            puVar26[3] = uVar15;
            uVar15 = DAT_700851ac;
            uVar14 = DAT_700851a8;
            uVar25 = DAT_700851a4;
            puVar26[4] = DAT_700851a0;
            puVar26[5] = uVar25;
            puVar26[6] = uVar14;
            puVar26[7] = uVar15;
            *(undefined1 *)(puVar26 + 8) = DAT_700851b0;
            GFDIUClbc_QcPNgD_wH(&LAB_71781a60,puVar26,&DAT_70b0e000);
            puVar51 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa6fc);
            *puVar51 = 1;
          }
          iVar21 = XcxSszXLPjQrEGhecEv_(&DAT_700fa6ec);
          if (*(char *)(iVar21 + 0x21) != '\0') {
            uVar29 = 0;
            uVar19 = 0;
            do {
              iVar22 = (uVar29 & 7) * 8;
              uVar35 = iVar22 - 0x20;
              bVar18 = (byte)(0xcfbf69d9 >> iVar22) |
                       (byte)(0x1d038f45 << ((uVar29 & 7) * -8 + 0x20 & 0xff));
              if (-1 < (int)uVar35) {
                bVar18 = (byte)(0x1d038f45 >> (uVar35 & 0xff));
              }
              *(byte *)(iVar21 + uVar29) = *(byte *)(iVar21 + uVar29) ^ bVar18;
              bVar62 = 0xfffffffe < uVar29;
              bVar61 = uVar19 == 0;
              bVar4 = (0x1f < uVar29) <= uVar19;
              uVar29 = uVar29 + 1;
              uVar19 = uVar19 + bVar62;
            } while (bVar61 && bVar4);
            *(undefined1 *)(iVar21 + 0x21) = 0;
          }
          puVar37 = (uint *)imp_strlen(iVar21);
          if (puVar37 < (uint *)0xfffffff8) {
            if (puVar37 < (uint *)0xb) {
              puStack_70 = (uint *)CONCAT31(puStack_70._1_3_,(char)((int)puVar37 << 1));
              puVar45 = (uint *)((uint)&puStack_70 | 1);
              if (puVar37 == (uint *)0x0) goto LAB_717773a4;
            }
            else {
              puVar45 = (uint *)thunk_MwhHq(((uint)puVar37 | 7) + 1);
              puStack_70 = (uint *)(((uint)puVar37 | 7) + 2);
              puStack_6c = puVar37;
              puStack_68 = puVar45;
            }
            imp___aeabi_memmove(puVar45,iVar21,puVar37);
LAB_717773a4:
            *(undefined1 *)((int)puVar45 + (int)puVar37) = 0;
            FUN_717300d8(&puStack_64,&puStack_70);
            FUN_71524948(&puStack_58,&puStack_64);
            uVar25 = FUN_713a1f9c(&puStack_58,0);
            uVar25 = FUN_713a1f9c(uVar25,0);
            cfqspBX_JrdDvACwYrAyrngjQ(puVar36 + 0xd);
            puVar37 = (uint *)thunk_MwhHq(0x3c);
            *puVar37 = 0;
            puVar37[1] = 0;
            FUN_713a10f8(puVar37 + 2,uVar25);
            puVar37[1] = (uint)(puVar36 + 0xe);
            uVar29 = puVar36[0xe];
            *puVar37 = uVar29;
            *(uint **)(uVar29 + 4) = puVar37;
            puVar36[0xe] = (uint)puVar37;
            puVar36[0x10] = puVar36[0x10] + 1;
            QgduklVhdVlmSiqzGQeutncbrNj(puVar36 + 0xd);
            if (((uint)puStack_64 & 1) != 0) {
              qNQrlu(uStack_5c);
            }
            if (((uint)puStack_70 & 1) != 0) {
              qNQrlu(puStack_68);
            }
            if (uStack_3c != 0) {
              uStack_38 = uStack_3c;
              qNQrlu();
            }
            if (uStack_48 != 0) {
              uStack_44 = uStack_48;
              qNQrlu();
            }
            if (uStack_54 == 0) {
              return;
            }
            uStack_50 = uStack_54;
            qNQrlu();
            return;
          }
          goto LAB_717777e4;
        }
        DataMemoryBarrier(0xb);
        if (((DAT_711f6d80 & 1) == 0) && (iVar21 = cuKsjVZRyspaVsDnqLy(&DAT_711f6d80), iVar21 != 0))
        {
          pcVar24 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fa65c);
          if (*pcVar24 == '\0') {
            puVar26 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa64c);
            *puVar26 = 0xb2709d14;
            puVar26[1] = 0x3ece33e7;
            puVar26[2] = 0xbc47a00f;
            *(undefined1 *)((int)puVar26 + 0xf) = 1;
            *(undefined4 *)((int)puVar26 + 0xb) = 0xab38eebc;
            GFDIUClbc_QcPNgD_wH(&LAB_71781964,puVar26,&DAT_70b0e000);
            puVar51 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa65c);
            *puVar51 = 1;
          }
          pbVar50 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fa64c);
          if (pbVar50[0xf] != 0) {
            *pbVar50 = *pbVar50 ^ 0x7b;
            pbVar50[1] = pbVar50[1] ^ 0xf3;
            pbVar50[2] = pbVar50[2] ^ 0x33;
            pbVar50[3] = pbVar50[3] ^ 0xdd;
            pbVar50[0xf] = 0;
            pbVar50[4] = pbVar50[4] ^ 0x89;
            pbVar50[5] = pbVar50[5] ^ 0x5d;
            pbVar50[6] = pbVar50[6] ^ 0xab;
            pbVar50[7] = pbVar50[7] ^ 0x5d;
            pbVar50[8] = pbVar50[8] ^ 0x7b;
            pbVar50[9] = pbVar50[9] ^ 0xf3;
            pbVar50[10] = pbVar50[10] ^ 0x33;
            pbVar50[0xb] = pbVar50[0xb] ^ 0xdd;
            pbVar50[0xc] = pbVar50[0xc] ^ 0x89;
            pbVar50[0xd] = pbVar50[0xd] ^ 0x5d;
            pbVar50[0xe] = pbVar50[0xe] ^ 0xab;
          }
          DAT_711f6d7c = (undefined1 *)FUN_71885ba4(pbVar50,0);
          SixizuLbAnqfgRApsCY(&DAT_711f6d80);
        }
        puVar51 = DAT_711f6d7c;
        imp___aeabi_memclr4(&uStack_54,0x30);
        puStack_58 = puVar51;
        pcVar24 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fa67c);
        if (*pcVar24 == '\0') {
          puVar26 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa66c);
          *(undefined1 *)(puVar26 + 6) = 1;
          uVar17 = DAT_70085174;
          uVar16 = DAT_70085170;
          uVar15 = DAT_7008516c;
          uVar14 = DAT_70085168;
          uVar25 = DAT_70085164;
          *puVar26 = DAT_70085160;
          puVar26[1] = uVar25;
          puVar26[2] = uVar14;
          puVar26[3] = uVar15;
          puVar26[4] = uVar16;
          puVar26[5] = uVar17;
          GFDIUClbc_QcPNgD_wH(&LAB_71781994,puVar26,&DAT_70b0e000);
          puVar51 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa67c);
          *puVar51 = 1;
        }
        iVar21 = XcxSszXLPjQrEGhecEv_(&DAT_700fa66c);
        if (*(char *)(iVar21 + 0x18) != '\0') {
          uVar29 = 0;
          uVar19 = 0;
          do {
            iVar22 = (uVar29 & 7) * 8;
            uVar35 = iVar22 - 0x20;
            bVar18 = (byte)(0xdd33f37b >> iVar22) |
                     (byte)(0x5dab5d89 << ((uVar29 & 7) * -8 + 0x20 & 0xff));
            if (-1 < (int)uVar35) {
              bVar18 = (byte)(0x5dab5d89 >> (uVar35 & 0xff));
            }
            *(byte *)(iVar21 + uVar29) = *(byte *)(iVar21 + uVar29) ^ bVar18;
            bVar62 = 0xfffffffe < uVar29;
            bVar61 = uVar19 == 0;
            bVar4 = (0x16 < uVar29) <= uVar19;
            uVar29 = uVar29 + 1;
            uVar19 = uVar19 + bVar62;
          } while (bVar61 && bVar4);
          *(undefined1 *)(iVar21 + 0x18) = 0;
        }
        puVar37 = (uint *)imp_strlen(iVar21);
        if ((uint *)0xfffffff7 < puVar37) goto LAB_717777e4;
        if (puVar37 < (uint *)0xb) {
          puStack_70 = (uint *)CONCAT31(puStack_70._1_3_,(char)((int)puVar37 << 1));
          puVar45 = (uint *)((uint)&puStack_70 | 1);
          if (puVar37 != (uint *)0x0) goto LAB_71776cf0;
        }
        else {
          puVar45 = (uint *)thunk_MwhHq(((uint)puVar37 | 7) + 1);
          puStack_70 = (uint *)(((uint)puVar37 | 7) + 2);
          puStack_6c = puVar37;
          puStack_68 = puVar45;
LAB_71776cf0:
          imp___aeabi_memmove(puVar45,iVar21,puVar37);
        }
        *(undefined1 *)((int)puVar45 + (int)puVar37) = 0;
        FUN_717300d8(&puStack_64,&puStack_70);
        FUN_71524948(&puStack_58,&puStack_64);
        uVar25 = FUN_713a1f9c(&puStack_58,0);
        uVar25 = FUN_713a1f9c(uVar25,1);
        cfqspBX_JrdDvACwYrAyrngjQ(puVar36 + 0xd);
        puVar37 = (uint *)thunk_MwhHq(0x3c);
        *puVar37 = 0;
        puVar37[1] = 0;
        FUN_713a10f8(puVar37 + 2,uVar25);
        puVar37[1] = (uint)(puVar36 + 0xe);
        uVar29 = puVar36[0xe];
        *puVar37 = uVar29;
        *(uint **)(uVar29 + 4) = puVar37;
        puVar36[0xe] = (uint)puVar37;
        puVar36[0x10] = puVar36[0x10] + 1;
        QgduklVhdVlmSiqzGQeutncbrNj(puVar36 + 0xd);
        if (((uint)puStack_64 & 1) != 0) {
          qNQrlu(uStack_5c);
        }
        if (((uint)puStack_70 & 1) != 0) {
          qNQrlu(puStack_68);
        }
        if (uStack_3c != 0) {
          uStack_38 = uStack_3c;
          qNQrlu();
        }
        if (uStack_48 != 0) {
          uStack_44 = uStack_48;
          qNQrlu();
        }
        if (uStack_54 != 0) {
          uStack_50 = uStack_54;
          qNQrlu();
        }
        uVar29 = 4;
        goto LAB_71777354;
      }
      uVar29 = param_1[10];
    }
    if (uVar29 != 0x13) {
LAB_7177658c:
      if (uVar29 == 0x14) {
        pcVar44 = (char *)param_1[0xc2];
        pcVar24 = (char *)0x14;
        if (pcVar44 != (char *)0x0) {
          pcVar24 = (char *)param_1[0xc5];
        }
        if (pcVar44 != (char *)0x0 && pcVar44 != pcVar24) {
          apuStack_88[1] = (uint *)XcxSszXLPjQrEGhecEv_(&DAT_700fa78c);
          apuStack_88[3] = &uStack_54;
          iVar21 = XcxSszXLPjQrEGhecEv_(&DAT_700fa7ac);
          apuStack_88[2] = (uint *)((uint)&puStack_70 | 1);
          apuStack_88[4] = param_1;
          do {
            if (pcVar44[1] == '\0') {
              return;
            }
            param_1[0xc2] = *(uint *)(pcVar44 + 4);
            if (*pcVar44 == '\0') {
              apuStack_88[5] = DAT_712017f8;
              DataMemoryBarrier(0xb);
              if (((DAT_711f6da8 & 1) == 0) &&
                 (iVar22 = cuKsjVZRyspaVsDnqLy(&DAT_711f6da8), iVar22 != 0)) {
                pcVar24 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fa79c);
                if (*pcVar24 == '\0') {
                  puVar26 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa78c);
                  *(undefined1 *)((int)puVar26 + 0xf) = 1;
                  *puVar26 = 0x282f7ea;
                  puVar26[1] = 0xa21285db;
                  puVar26[2] = 0xcb5caf1;
                  *(undefined4 *)((int)puVar26 + 0xb) = 0x778ed20c;
                  GFDIUClbc_QcPNgD_wH(&LAB_71781b84,puVar26,&DAT_70b0e000);
                  puVar51 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa79c);
                  *puVar51 = 1;
                }
                if (*(byte *)((int)apuStack_88[1] + 0xf) != 0) {
                  *(byte *)apuStack_88[1] = (byte)*apuStack_88[1] ^ 0x85;
                  *(byte *)((int)apuStack_88[1] + 1) = *(byte *)((int)apuStack_88[1] + 1) ^ 0x99;
                  *(byte *)((int)apuStack_88[1] + 2) = *(byte *)((int)apuStack_88[1] + 2) ^ 0xc1;
                  *(byte *)((int)apuStack_88[1] + 3) = *(byte *)((int)apuStack_88[1] + 3) ^ 0x6d;
                  *(byte *)((int)apuStack_88[1] + 0xf) = 0;
                  *(byte *)(apuStack_88[1] + 1) = (byte)apuStack_88[1][1] ^ 0xb5;
                  *(byte *)((int)apuStack_88[1] + 5) = *(byte *)((int)apuStack_88[1] + 5) ^ 0xeb;
                  *(byte *)((int)apuStack_88[1] + 6) = *(byte *)((int)apuStack_88[1] + 6) ^ 0x77;
                  *(byte *)((int)apuStack_88[1] + 7) = *(byte *)((int)apuStack_88[1] + 7) ^ 0xc1;
                  *(byte *)(apuStack_88[1] + 2) = (byte)apuStack_88[1][2] ^ 0x85;
                  *(byte *)((int)apuStack_88[1] + 9) = *(byte *)((int)apuStack_88[1] + 9) ^ 0x99;
                  *(byte *)((int)apuStack_88[1] + 10) = *(byte *)((int)apuStack_88[1] + 10) ^ 0xc1;
                  *(byte *)((int)apuStack_88[1] + 0xb) = *(byte *)((int)apuStack_88[1] + 0xb) ^ 0x6d
                  ;
                  *(byte *)(apuStack_88[1] + 3) = (byte)apuStack_88[1][3] ^ 0xb5;
                  *(byte *)((int)apuStack_88[1] + 0xd) = *(byte *)((int)apuStack_88[1] + 0xd) ^ 0xeb
                  ;
                  *(byte *)((int)apuStack_88[1] + 0xe) = *(byte *)((int)apuStack_88[1] + 0xe) ^ 0x77
                  ;
                }
                DAT_711f6da4 = (undefined1 *)FUN_71885ba4(apuStack_88[1],0);
                SixizuLbAnqfgRApsCY(&DAT_711f6da8);
              }
              puVar51 = DAT_711f6da4;
              imp___aeabi_memclr4(apuStack_88[3],0x30);
              puStack_58 = puVar51;
              pcVar24 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fa7bc);
              if (*pcVar24 == '\0') {
                puVar26 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa7ac);
                *(undefined1 *)((int)puVar26 + 0x25) = 1;
                uVar15 = DAT_700851fc;
                uVar14 = DAT_700851f8;
                uVar25 = DAT_700851f4;
                *puVar26 = DAT_700851f0;
                puVar26[1] = uVar25;
                puVar26[2] = uVar14;
                puVar26[3] = uVar15;
                uVar16 = DAT_70085210;
                uVar15 = DAT_7008520c;
                uVar14 = DAT_70085208;
                uVar25 = DAT_70085204;
                puVar26[4] = DAT_70085200;
                puVar26[5] = uVar25;
                puVar26[6] = uVar14;
                puVar26[7] = uVar15;
                puVar26[8] = uVar16;
                *(undefined1 *)(puVar26 + 9) = DAT_70085214;
                GFDIUClbc_QcPNgD_wH(&LAB_71781bb4,puVar26,&DAT_70b0e000);
                puVar51 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa7bc);
                *puVar51 = 1;
              }
              if (*(char *)(iVar21 + 0x25) != '\0') {
                uVar29 = 0;
                uVar19 = 0;
                do {
                  iVar22 = (uVar29 & 7) * 8;
                  uVar35 = iVar22 - 0x20;
                  bVar18 = (byte)(0x6dc19985 >> iVar22) |
                           (byte)(-0x3e88144b << ((uVar29 & 7) * -8 + 0x20 & 0xff));
                  if (-1 < (int)uVar35) {
                    bVar18 = (byte)(0xc177ebb5 >> (uVar35 & 0xff));
                  }
                  *(byte *)(iVar21 + uVar29) = *(byte *)(iVar21 + uVar29) ^ bVar18;
                  bVar62 = 0xfffffffe < uVar29;
                  bVar61 = uVar19 == 0;
                  bVar4 = (0x23 < uVar29) <= uVar19;
                  uVar29 = uVar29 + 1;
                  uVar19 = uVar19 + bVar62;
                } while (bVar61 && bVar4);
                *(undefined1 *)(iVar21 + 0x25) = 0;
              }
              puVar36 = (uint *)imp_strlen(iVar21);
              if ((uint *)0xfffffff7 < puVar36) goto LAB_717777e4;
              if (puVar36 < (uint *)0xb) {
                puStack_70 = (uint *)CONCAT31(puStack_70._1_3_,(char)((int)puVar36 << 1));
                puVar37 = apuStack_88[2];
                if (puVar36 != (uint *)0x0) goto LAB_7177688c;
              }
              else {
                puVar37 = (uint *)thunk_MwhHq(((uint)puVar36 | 7) + 1);
                puStack_70 = (uint *)(((uint)puVar36 | 7) + 2);
                puStack_6c = puVar36;
                puStack_68 = puVar37;
LAB_7177688c:
                imp___aeabi_memmove(puVar37,iVar21,puVar36);
              }
              *(undefined1 *)((int)puVar37 + (int)puVar36) = 0;
              FUN_717300d8(&puStack_64,&puStack_70);
              FUN_71524948(&puStack_58,&puStack_64);
              uVar25 = FUN_713a1f9c(&puStack_58,0);
              uVar25 = FUN_713a1f9c(uVar25,0);
              puVar36 = apuStack_88[5];
              puVar45 = apuStack_88[5] + 0xd;
              cfqspBX_JrdDvACwYrAyrngjQ(puVar45);
              puVar37 = (uint *)thunk_MwhHq(0x3c);
              *puVar37 = 0;
              puVar37[1] = 0;
              FUN_713a10f8(puVar37 + 2,uVar25);
              puVar37[1] = (uint)(puVar36 + 0xe);
              uVar29 = puVar36[0xe];
              *puVar37 = uVar29;
              *(uint **)(uVar29 + 4) = puVar37;
              puVar36[0xe] = (uint)puVar37;
              puVar36[0x10] = puVar36[0x10] + 1;
              QgduklVhdVlmSiqzGQeutncbrNj(puVar45);
              if (((uint)puStack_64 & 1) != 0) {
                qNQrlu(uStack_5c);
              }
              param_1 = apuStack_88[4];
              if (((uint)puStack_70 & 1) != 0) {
                qNQrlu(puStack_68);
              }
              if (uStack_3c != 0) {
                uStack_38 = uStack_3c;
                qNQrlu();
              }
              if (uStack_48 != 0) {
                uStack_44 = uStack_48;
                qNQrlu();
              }
              if (uStack_54 != 0) {
                uStack_50 = uStack_54;
                qNQrlu();
              }
              uVar29 = 0x13;
            }
            else {
              param_1[0xca] = 0;
              uVar29 = 9;
              DataMemoryBarrier(0xb);
              param_1[0xcd] = 0;
              DataMemoryBarrier(0xb);
              param_1[0xce] = 0;
              DataMemoryBarrier(0xb);
              param_1[0xcf] = 0;
              DataMemoryBarrier(0xb);
            }
            param_1[10] = uVar29;
            param_1[0xc6] = param_1[0xc6] + 1;
            *(undefined1 *)(param_1[0xc4] + 1) = 0;
            pcVar24 = *(char **)(param_1[0xc4] + 4);
            pcVar44 = (char *)param_1[0xc2];
            param_1[0xc4] = (uint)pcVar24;
            if (pcVar44 != (char *)0x0) {
              pcVar24 = (char *)param_1[0xc5];
            }
          } while (pcVar44 != (char *)0x0 && pcVar44 != pcVar24);
        }
      }
      return;
    }
    iVar21 = FUN_71886108();
    if (iVar21 - param_1[0xc] < 0xbb9) {
      uVar29 = param_1[10];
      goto LAB_7177658c;
    }
    puVar37 = param_1 + 0xcb;
    uVar29 = *puVar37;
    *puVar37 = uVar29 + 1;
    puVar36 = DAT_712017f8;
    if (8 < (int)uVar29) {
      uVar35 = param_1[0xcf];
      DataMemoryBarrier(0xb);
      uVar19 = param_1[0xce];
      DataMemoryBarrier(0xb);
      uVar29 = param_1[0xcd];
      DataMemoryBarrier(0xb);
      puVar37 = (uint *)param_1[0xcc];
      DataMemoryBarrier(0xb);
      apuStack_88[4] = param_1;
      if (((DAT_711f6d98 & 1) == 0) && (iVar21 = cuKsjVZRyspaVsDnqLy(&DAT_711f6d98), iVar21 != 0)) {
        pcVar24 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fa71c);
        if (*pcVar24 == '\0') {
          puVar26 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa70c);
          *puVar26 = 0x4678f3c0;
          puVar26[1] = 0xee8cdf51;
          puVar26[2] = 0x484fcedb;
          *(undefined1 *)((int)puVar26 + 0xf) = 1;
          *(undefined4 *)((int)puVar26 + 0xb) = 0xe9d45848;
          GFDIUClbc_QcPNgD_wH(&LAB_71781ab0,puVar26,&DAT_70b0e000);
          puVar51 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa71c);
          *puVar51 = 1;
        }
        pbVar50 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fa70c);
        if (pbVar50[0xf] != 0) {
          *pbVar50 = *pbVar50 ^ 0xaf;
          pbVar50[1] = pbVar50[1] ^ 0x9d;
          pbVar50[2] = pbVar50[2] ^ 0x3b;
          pbVar50[3] = pbVar50[3] ^ 0x29;
          pbVar50[0xf] = 0;
          pbVar50[4] = pbVar50[4] ^ 0x3f;
          pbVar50[5] = pbVar50[5] ^ 0xb1;
          pbVar50[6] = pbVar50[6] ^ 0xe9;
          pbVar50[7] = pbVar50[7] ^ 0x8d;
          pbVar50[8] = pbVar50[8] ^ 0xaf;
          pbVar50[9] = pbVar50[9] ^ 0x9d;
          pbVar50[10] = pbVar50[10] ^ 0x3b;
          pbVar50[0xb] = pbVar50[0xb] ^ 0x29;
          pbVar50[0xc] = pbVar50[0xc] ^ 0x3f;
          pbVar50[0xd] = pbVar50[0xd] ^ 0xb1;
          pbVar50[0xe] = pbVar50[0xe] ^ 0xe9;
        }
        DAT_711f6d94 = (undefined1 *)FUN_71885ba4(pbVar50,0);
        SixizuLbAnqfgRApsCY(&DAT_711f6d98);
      }
      puVar51 = DAT_711f6d94;
      imp___aeabi_memclr4(&uStack_54,0x30);
      puStack_58 = puVar51;
      pcVar24 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fa73c);
      if (*pcVar24 == '\0') {
        puVar26 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa72c);
        *(undefined1 *)(puVar26 + 7) = 1;
        uVar14 = DAT_700851c0;
        uVar25 = DAT_700851bc;
        *puVar26 = DAT_700851b8;
        puVar26[1] = uVar25;
        puVar26[2] = uVar14;
        uVar15 = DAT_700851d0;
        uVar14 = DAT_700851cc;
        uVar25 = DAT_700851c8;
        puVar26[3] = DAT_700851c4;
        puVar26[4] = uVar25;
        puVar26[5] = uVar14;
        puVar26[6] = uVar15;
        GFDIUClbc_QcPNgD_wH(&LAB_71781ae0,puVar26,&DAT_70b0e000);
        puVar51 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa73c);
        *puVar51 = 1;
      }
      iVar21 = XcxSszXLPjQrEGhecEv_(&DAT_700fa72c);
      if (*(char *)(iVar21 + 0x1c) != '\0') {
        uVar41 = 0;
        uVar28 = 0;
        do {
          iVar22 = (uVar41 & 7) * 8;
          bVar18 = (byte)(0x293b9daf >> iVar22) |
                   (byte)(-0x72164ec1 << ((uVar41 & 7) * -8 + 0x20 & 0xff));
          uVar42 = iVar22 - 0x20;
          if (-1 < (int)uVar42) {
            bVar18 = (byte)(0x8de9b13f >> (uVar42 & 0xff));
          }
          *(byte *)(iVar21 + uVar41) = *(byte *)(iVar21 + uVar41) ^ bVar18;
          bVar62 = 0xfffffffe < uVar41;
          bVar61 = uVar28 == 0;
          bVar4 = (0x1a < uVar41) <= uVar28;
          uVar41 = uVar41 + 1;
          uVar28 = uVar28 + bVar62;
        } while (bVar61 && bVar4);
        *(undefined1 *)(iVar21 + 0x1c) = 0;
        apuStack_88[3] = puVar37;
        apuStack_88[5] = puVar36;
      }
      puVar45 = (uint *)imp_strlen(iVar21);
      if ((uint *)0xfffffff7 < puVar45) goto LAB_717777e4;
      if (puVar45 < (uint *)0xb) {
        puStack_70 = (uint *)CONCAT31(puStack_70._1_3_,(char)((int)puVar45 << 1));
        puVar55 = (uint *)((uint)&puStack_70 | 1);
        puVar57 = apuStack_88[4];
        if (puVar45 == (uint *)0x0) goto LAB_717770c4;
      }
      else {
        puVar55 = (uint *)thunk_MwhHq(((uint)puVar45 | 7) + 1);
        puStack_70 = (uint *)(((uint)puVar45 | 7) + 2);
        puStack_6c = puVar45;
        puStack_68 = puVar55;
      }
      puVar57 = apuStack_88[4];
      imp___aeabi_memmove(puVar55,iVar21,puVar45);
LAB_717770c4:
      *(undefined1 *)((int)puVar55 + (int)puVar45) = 0;
      FUN_717300d8(&puStack_64,&puStack_70,
                   (undefined1 *)(uVar19 * 100 + uVar35 * 1000 + uVar29 * 10 + (int)puVar37));
      FUN_71524948(&puStack_58,&puStack_64);
      uVar25 = FUN_713a1f9c(&puStack_58,0);
      uVar25 = FUN_713a1f9c(uVar25,1);
      cfqspBX_JrdDvACwYrAyrngjQ(puVar36 + 0xd);
      puVar37 = (uint *)thunk_MwhHq(0x3c);
      *puVar37 = 0;
      puVar37[1] = 0;
      FUN_713a10f8(puVar37 + 2,uVar25);
      puVar37[1] = (uint)(puVar36 + 0xe);
      uVar29 = puVar36[0xe];
      *puVar37 = uVar29;
      *(uint **)(uVar29 + 4) = puVar37;
      puVar36[0xe] = (uint)puVar37;
      puVar36[0x10] = puVar36[0x10] + 1;
      QgduklVhdVlmSiqzGQeutncbrNj(puVar36 + 0xd);
      if (((uint)puStack_64 & 1) != 0) {
        qNQrlu(uStack_5c);
      }
      if (((uint)puStack_70 & 1) != 0) {
        qNQrlu(puStack_68);
      }
      if (uStack_3c != 0) {
        uStack_38 = uStack_3c;
        qNQrlu();
      }
      if (uStack_48 != 0) {
        uStack_44 = uStack_48;
        qNQrlu();
      }
      if (uStack_54 != 0) {
        uStack_50 = uStack_54;
        qNQrlu();
      }
      puVar57[10] = 4;
      return;
    }
    DataMemoryBarrier(0xb);
    if (((DAT_711f6da0 & 1) == 0) && (iVar21 = cuKsjVZRyspaVsDnqLy(&DAT_711f6da0), iVar21 != 0)) {
      pcVar24 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fa75c);
      if (*pcVar24 == '\0') {
        puVar26 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa74c);
        *puVar26 = 0xbc748b06;
        puVar26[1] = 0x3e2a2729;
        puVar26[2] = 0xb243b61d;
        *(undefined1 *)((int)puVar26 + 0xf) = 1;
        *(undefined4 *)((int)puVar26 + 0xb) = 0x4f2c20b2;
        GFDIUClbc_QcPNgD_wH(&LAB_71781b1c,puVar26,&DAT_70b0e000);
        puVar51 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa75c);
        *puVar51 = 1;
      }
      pbVar50 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fa74c);
      if (pbVar50[0xf] != 0) {
        *pbVar50 = *pbVar50 ^ 0x69;
        pbVar50[1] = pbVar50[1] ^ 0xe5;
        pbVar50[2] = pbVar50[2] ^ 0x37;
        pbVar50[3] = pbVar50[3] ^ 0xd3;
        pbVar50[0xf] = 0;
        pbVar50[4] = pbVar50[4] ^ 0x47;
        pbVar50[5] = pbVar50[5] ^ 0x49;
        pbVar50[6] = pbVar50[6] ^ 0x4f;
        pbVar50[7] = pbVar50[7] ^ 0x5d;
        pbVar50[8] = pbVar50[8] ^ 0x69;
        pbVar50[9] = pbVar50[9] ^ 0xe5;
        pbVar50[10] = pbVar50[10] ^ 0x37;
        pbVar50[0xb] = pbVar50[0xb] ^ 0xd3;
        pbVar50[0xc] = pbVar50[0xc] ^ 0x47;
        pbVar50[0xd] = pbVar50[0xd] ^ 0x49;
        pbVar50[0xe] = pbVar50[0xe] ^ 0x4f;
      }
      DAT_711f6d9c = (undefined1 *)FUN_71885ba4(pbVar50,0);
      SixizuLbAnqfgRApsCY(&DAT_711f6da0);
    }
    puVar51 = DAT_711f6d9c;
    imp___aeabi_memclr4(&uStack_54,0x30);
    puStack_58 = puVar51;
    pcVar24 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fa77c);
    if (*pcVar24 == '\0') {
      puVar26 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa76c);
      *(undefined1 *)((int)puVar26 + 0x16) = 1;
      uVar16 = DAT_700851e8;
      uVar15 = DAT_700851e4;
      uVar14 = DAT_700851e0;
      uVar25 = DAT_700851dc;
      *puVar26 = DAT_700851d8;
      puVar26[1] = uVar25;
      puVar26[2] = uVar14;
      puVar26[3] = uVar15;
      puVar26[4] = uVar16;
      *(undefined2 *)(puVar26 + 5) = DAT_700851ec;
      GFDIUClbc_QcPNgD_wH(&LAB_71781b4c,puVar26,&DAT_70b0e000);
      puVar51 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa77c);
      *puVar51 = 1;
    }
    iVar21 = XcxSszXLPjQrEGhecEv_(&DAT_700fa76c);
    if (*(char *)(iVar21 + 0x16) != '\0') {
      uVar29 = 0;
      uVar19 = 0;
      do {
        iVar22 = (uVar29 & 7) * 8;
        uVar35 = iVar22 - 0x20;
        bVar18 = (byte)(0xa37d05d7 >> iVar22) |
                 (byte)(-0x5c94fc2d << ((uVar29 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar35) {
          bVar18 = (byte)(0xa36b03d3 >> (uVar35 & 0xff));
        }
        *(byte *)(iVar21 + uVar29) = *(byte *)(iVar21 + uVar29) ^ bVar18;
        bVar62 = 0xfffffffe < uVar29;
        bVar61 = uVar19 == 0;
        bVar4 = (0x14 < uVar29) <= uVar19;
        uVar29 = uVar29 + 1;
        uVar19 = uVar19 + bVar62;
      } while (bVar61 && bVar4);
      *(undefined1 *)(iVar21 + 0x16) = 0;
    }
    puVar45 = (uint *)imp_strlen(iVar21);
    if ((uint *)0xfffffff7 < puVar45) {
LAB_717777e4:
                    /* WARNING: Subroutine does not return */
      FUN_712f6c1c(&puStack_70);
    }
    if (puVar45 < (uint *)0xb) {
      puStack_70 = (uint *)CONCAT31(puStack_70._1_3_,(char)((int)puVar45 << 1));
      puVar55 = (uint *)((uint)&puStack_70 | 1);
      if (puVar45 != (uint *)0x0) goto LAB_71777208;
    }
    else {
      puVar55 = (uint *)thunk_MwhHq(((uint)puVar45 | 7) + 1);
      puStack_70 = (uint *)(((uint)puVar45 | 7) + 2);
      puStack_6c = puVar45;
      puStack_68 = puVar55;
LAB_71777208:
      imp___aeabi_memmove(puVar55,iVar21,puVar45);
    }
    *(undefined1 *)((int)puVar55 + (int)puVar45) = 0;
    FUN_717300d8(&puStack_64,&puStack_70);
    FUN_71524948(&puStack_58,&puStack_64);
    uVar25 = FUN_713a1f9c(&puStack_58,0);
    uVar25 = FUN_713a1f9c(uVar25,0);
    cfqspBX_JrdDvACwYrAyrngjQ(puVar36 + 0xd);
    puVar45 = (uint *)thunk_MwhHq(0x3c);
    *puVar45 = 0;
    puVar45[1] = 0;
    FUN_713a10f8(puVar45 + 2,uVar25);
    puVar45[1] = (uint)(puVar36 + 0xe);
    uVar29 = puVar36[0xe];
    *puVar45 = uVar29;
    *(uint **)(uVar29 + 4) = puVar45;
    puVar36[0xe] = (uint)puVar45;
    puVar36[0x10] = puVar36[0x10] + 1;
    QgduklVhdVlmSiqzGQeutncbrNj(puVar36 + 0xd);
    if (((uint)puStack_64 & 1) != 0) {
      qNQrlu(uStack_5c);
    }
    if (((uint)puStack_70 & 1) != 0) {
      qNQrlu(puStack_68);
    }
    if (uStack_3c != 0) {
      uStack_38 = uStack_3c;
      qNQrlu();
    }
    if (uStack_48 != 0) {
      uStack_44 = uStack_48;
      qNQrlu();
    }
    if (uStack_54 != 0) {
      uStack_50 = uStack_54;
      qNQrlu();
    }
    if (param_1[0xbd] != 0) {
      uVar29 = FUN_71886108();
      param_1[0xc] = uVar29;
      iVar21 = (**(code **)(DAT_71201e2c + 0x10))();
      if (iVar21 == 0) {
        iVar21 = (**(code **)(DAT_71201e2c + 0x18))();
        if (iVar21 == 0) {
          iVar21 = (**(code **)(DAT_71201e2c + 0x1c))();
          if (iVar21 == 0) {
            iVar21 = FUN_717d3484(DAT_71201808);
            if (iVar21 != 0) {
              uVar19 = param_1[0xc2];
              uVar29 = 0x14;
              param_1[10] = 0x14;
              if (uVar19 != 0) {
                uVar29 = param_1[0xc5];
              }
              if (uVar19 != 0 && uVar19 != uVar29) {
                do {
                  bVar61 = *(char *)(uVar19 + 1) != '\0';
                  if (bVar61) {
                    param_1[0xc2] = *(uint *)(uVar19 + 4);
                    param_1[0xc6] = param_1[0xc6] + 1;
                    *(undefined1 *)(param_1[0xc4] + 1) = 0;
                    param_1[0xc4] = *(uint *)(param_1[0xc4] + 4);
                    uVar19 = param_1[0xc2];
                  }
                } while ((bVar61 && uVar19 != 0) && (uVar19 != param_1[0xc5]));
              }
              DataMemoryBarrier(0xb);
              param_1[0xcd] = 0;
              puStack_90 = param_1 + 0xb9;
              DataMemoryBarrier(0xb);
              param_1[0xce] = 0;
              DataMemoryBarrier(0xb);
              param_1[0xcf] = 0;
              DataMemoryBarrier(0xb);
              uStack_54 = 0;
              puStack_58 = &LAB_7177a2a4;
              uStack_8c = (uint)(param_1 + 0xbc);
              apuStack_88[0] = puVar37;
              puStack_70 = param_1;
              FUN_7177ad34(&puStack_64,&puStack_58,&puStack_70,param_1 + 0xbd);
              dtOmRBwkVHnGtYLYirTdLYLImchz();
              uQwrLJbzyUVbHmvQcVNflhV(&puStack_64);
              return;
            }
            uVar29 = 4;
          }
          else {
            uVar29 = 3;
          }
        }
        else {
          uVar29 = 2;
        }
      }
      else {
        uVar29 = 1;
      }
      param_1[0xcc] = uVar29;
      return;
    }
    uVar29 = 9;
LAB_71777354:
    param_1[10] = uVar29;
    return;
  }
  if ((param_1[0x106] != 0) && (iVar21 = FUN_71886108(), 29999 < iVar21 - param_1[0x106])) {
    FUN_71767c84(param_1,0);
  }
  if (((uint *)0x20 < apuStack_88[2]) && (param_1[0x2b] != 0)) {
    FUN_71795348();
  }
  if (param_1[2] != 0) {
    FUN_71793ff4();
  }
  if ((param_1[1] != 0) && (5 < DAT_711f6d60)) {
    FUN_717b8100();
    DAT_711f6d60 = 0;
  }
  if ((param_1[3] == 0) || (DAT_711f6d64 < 6)) {
    DAT_711f6d60 = DAT_711f6d60 + 1;
    DAT_711f6d64 = DAT_711f6d64 + 1;
  }
  else {
    FUN_717947d0();
    DAT_711f6d64 = 0;
  }
  bVar61 = param_1[0xac] != 0 || param_1[0xad] != 0;
  uVar29 = 0;
  if (bVar61) {
    uVar29 = param_1[0x2b];
  }
  ppuVar54 = &puStack_90;
  if ((bVar61 && uVar29 != 0) &&
     (iVar21 = FUN_71886108(), ppuVar54 = &puStack_90, 1999 < iVar21 - param_1[0xaf])) {
    uVar29 = FUN_71886108();
    param_1[0xaf] = uVar29;
    puStack_90 = (uint *)param_1[0xac];
    uStack_8c = param_1[0xad];
    FUN_714d1b40((undefined1 *)((int)param_1 + 0x22d),(short)param_1[0xab] + 2,
                 *(undefined2 *)(param_1[0x2b] + 0x1f68));
    ppuVar54 = &puStack_90;
  }
  while( true ) {
    uVar29 = (uint)*ppuVar54 ^ 0x6a4dab1f;
    uVar19 = uVar29 | (uint)ppuVar54[1] ^ 0x679b29b;
    bVar61 = uVar19 == 0;
    if (bVar61) {
      uVar19 = (uint)ppuVar54[3] ^ 0xfcc126c8;
      uVar29 = (uint)ppuVar54[2] ^ 0x6efdd0cf;
    }
    if ((bVar61 && (uVar29 == 0 && uVar19 == 0)) &&
       (ppuVar54[4] == (uint *)0xbefc55d6 && ppuVar54[5] == (uint *)0x370f3a77)) break;
    ppuVar54 = ppuVar54 + 1;
  }
  bVar61 = (char)ppuVar54[0x4006] != '\0';
  cVar5 = '\0';
  if (bVar61) {
    cVar5 = *(char *)((int)ppuVar54 + 0x10019);
  }
  if (bVar61 && cVar5 != '\0') goto LAB_7176d2f4;
  do {
    param_1 = (uint *)0xffffffff;
    pbVar50 = (byte *)0x0;
    software_interrupt(0);
    imp___aeabi_memcpy(0,&DAT_70085120,0x3c,0x22);
    do {
      *pbVar50 = *pbVar50 ^ 0x50;
      pbVar50 = pbVar50 + 1;
    } while (pbVar50 != (byte *)0x3c);
    uRam00000000 = 0xe3b0003a;
    _LAB_00000004 = 0xe3b01000;
    ppuVar54 = (uint **)0xf0002;
    FUN_719344e4(0,0x3c,0);
    (*(code *)0x0)();
LAB_7176d2f4:
  } while (*(char *)((int)ppuVar54 + 0x1001a) == '\0');
  if (ppuVar54[0xc01e] == ppuVar54[0xc01c]) {
LAB_7176ec28:
    pbVar50 = (byte *)0x0;
    software_interrupt(0);
    imp___aeabi_memcpy(0,&DAT_70085120,0x3c,0x22);
    do {
      *pbVar50 = *pbVar50 ^ 0x50;
      pbVar50 = pbVar50 + 1;
    } while (pbVar50 != (byte *)0x3c);
    uRam00000000 = 0xe3b00006;
    _LAB_00000004 = 0xe3b01000;
    FUN_719344e4(0,0x3c,0);
    (*(code *)0x0)();
LAB_7176ecc8:
    pbVar50 = (byte *)0x0;
    software_interrupt(0);
    imp___aeabi_memcpy(0,&DAT_70085120,0x3c,0x22);
    do {
      *pbVar50 = *pbVar50 ^ 0x50;
      pbVar50 = pbVar50 + 1;
    } while (pbVar50 != (byte *)0x3c);
    uRam00000000 = 0xe3b00008;
    _LAB_00000004 = 0xe3b01000;
    FUN_719344e4(0,0x3c,0);
    (*(code *)0x0)();
LAB_7176ed68:
    pbVar50 = (byte *)0x0;
    software_interrupt(0);
    imp___aeabi_memcpy(0,&DAT_70085120,0x3c,0x22);
    do {
      *pbVar50 = *pbVar50 ^ 0x50;
      pbVar50 = pbVar50 + 1;
    } while (pbVar50 != (byte *)0x3c);
    uRam00000000 = 0xe3b0000a;
    _LAB_00000004 = 0xe3b01000;
    FUN_719344e4(0,0x3c,0);
    (*(code *)0x0)();
  }
  else {
    puVar51 = (undefined1 *)ppuVar54[0xc01c];
    if ((puVar51 < &LAB_7176d330) && (&LAB_7176d330 < puVar51 + (int)ppuVar54[0xc01d]))
    goto LAB_7176ecc8;
    puVar51 = (undefined1 *)ppuVar54[0xc01e];
    if ((&LAB_7176d330 < puVar51) || (puVar51 + (int)ppuVar54[0xc01f] < &LAB_7176d330))
    goto LAB_7176ed68;
    iVar21 = FUN_717d2588();
    if (iVar21 == 0xa1b) {
      apuStack_88[3] = (uint *)ppuVar54;
      apuStack_88[2] = (uint *)(ppuVar54 + 0xc01b);
      uVar29 = *apuStack_88[2];
      if (uVar29 == 0x1e) {
        *apuStack_88[2] = 0;
        uVar29 = *apuStack_88[2];
      }
      if (((uVar29 & 3) == 0) && (ppuVar54[0xc017] != (uint *)0x0)) {
        puVar26 = ppuVar54[0xc017];
        puVar37 = puVar26 + 1;
        puVar36 = (uint *)*puVar26;
        if (puVar36 != puVar37) {
LAB_7176d97c:
          puStack_60 = puVar36;
          puStack_64 = (uint *)puStack_60[7];
          iVar21 = 0x27d4eb7f;
          puVar45 = (uint *)puStack_60[6];
          puVar36 = (uint *)puStack_60[5];
          puStack_68 = (uint *)puStack_60[8];
          uVar29 = 0x56d677d6;
          if (&DAT_0000001f < puVar45) {
            puStack_28 = (undefined1 *)0xba94458a;
            uStack_2c = 0x61c8869e;
            uStack_30 = 0x40801011;
            uStack_34 = 0x50;
            uStack_38 = 0x6854fb60;
            uStack_3c = 0xc2b2ae8d;
            uVar29 = 0;
            uVar19 = 0xee40c5e7;
            uVar35 = 0x60ea283e;
            puVar55 = puVar45;
            puVar57 = puVar36;
            do {
              uStack_44 = uVar35;
              uStack_48 = uVar19;
              uStack_40 = uVar29;
              lVar7 = (ulonglong)puVar57[6] * 0x27d4eb4f;
              uVar29 = (uint)lVar7;
              uVar28 = uVar29 + (int)puStack_28;
              uVar29 = puVar57[7] * 0x27d4eb4f +
                       puVar57[6] * -0x3d4d51c3 + (int)((ulonglong)lVar7 >> 0x20) + uStack_2c +
                       (uint)CARRY4(uVar29,(uint)puStack_28);
              uVar41 = uVar29 >> 1;
              uStack_4c = uVar28 * -0x80000000 | uVar41;
              puStack_28 = (undefined1 *)((ulonglong)uStack_4c * 0x85ebca87);
              uVar28 = uVar28 >> 1;
              uStack_50 = uVar29 * -0x80000000 | uVar28;
              uStack_2c = uStack_50 * -0x7a143579 +
                          uStack_4c * -0x61c8864f + (int)((ulonglong)uStack_4c * 0x85ebca87 >> 0x20)
              ;
              lVar7 = (ulonglong)puVar57[4] * 0x27d4eb4f;
              uVar29 = (uint)lVar7;
              uVar53 = uVar29 + uStack_30;
              uVar29 = puVar57[5] * 0x27d4eb4f +
                       puVar57[4] * -0x3d4d51c3 + (int)((ulonglong)lVar7 >> 0x20) + uStack_34 +
                       (uint)CARRY4(uVar29,uStack_30);
              uVar42 = uVar29 >> 1;
              uStack_54 = uVar53 * -0x80000000 | uVar42;
              uVar53 = uVar53 >> 1;
              puStack_58 = (undefined1 *)(uVar29 * -0x80000000 | uVar53);
              puVar1 = puVar57 + 1;
              uStack_30 = (uint)((ulonglong)uStack_54 * 0x85ebca87);
              uStack_34 = (int)puStack_58 * -0x7a143579 +
                          uStack_54 * -0x61c8864f + (int)((ulonglong)uStack_54 * 0x85ebca87 >> 0x20)
              ;
              puVar2 = puVar57 + 2;
              puVar3 = puVar57 + 3;
              lVar7 = (ulonglong)*puVar2 * 0x27d4eb4f;
              uVar19 = (uint)lVar7;
              uVar29 = *puVar57;
              puVar57 = puVar57 + 8;
              uVar30 = uVar19 + uStack_38;
              uVar19 = *puVar3 * 0x27d4eb4f +
                       *puVar2 * -0x3d4d51c3 + (int)((ulonglong)lVar7 >> 0x20) + uStack_3c +
                       (uint)CARRY4(uVar19,uStack_38);
              uVar27 = uVar19 >> 1;
              uStack_5c = uVar30 * -0x80000000 | uVar27;
              uVar30 = uVar30 >> 1;
              uVar56 = uVar19 * -0x80000000 | uVar30;
              uStack_38 = (uint)((ulonglong)uStack_5c * 0x85ebca87);
              uStack_3c = uVar56 * -0x7a143579 +
                          uStack_5c * -0x61c8864f + (int)((ulonglong)uStack_5c * 0x85ebca87 >> 0x20)
              ;
              lVar7 = (ulonglong)uVar29 * 0x27d4eb4f;
              uVar19 = (uint)lVar7;
              uVar43 = uVar19 + uStack_48;
              uVar29 = *puVar1 * 0x27d4eb4f + uVar29 * -0x3d4d51c3 + (int)((ulonglong)lVar7 >> 0x20)
                       + uStack_44 + (uint)CARRY4(uVar19,uStack_48);
              bVar61 = puVar55 < (uint *)0x20;
              puVar55 = puVar55 + -8;
              uVar20 = uVar29 >> 1;
              uVar60 = uVar43 * -0x80000000 | uVar20;
              uVar43 = uVar43 >> 1;
              uVar38 = uVar29 * -0x80000000 | uVar43;
              uVar19 = (uint)((ulonglong)uVar60 * 0x85ebca87);
              uVar29 = uStack_40 - bVar61;
              uVar35 = uVar38 * -0x7a143579 +
                       uVar60 * -0x61c8864f + (int)((ulonglong)uVar60 * 0x85ebca87 >> 0x20);
            } while ((uint)(puVar55 < (uint *)0x20) <= -uVar29);
            uVar39 = uVar19 << 1 | uVar35 >> 0x1f;
            uVar47 = uStack_38 << 7 | uStack_3c >> 0x19;
            uVar46 = uVar47 + uVar39;
            uVar29 = uStack_38 >> 0x19;
            uVar31 = uStack_30 << 0xc | uStack_34 >> 0x14;
            uStack_38 = uVar46 + uVar31;
            uStack_30 = (uStack_3c * 0x80 | uVar29) + (uVar35 * 2 | uVar19 >> 0x1f) +
                        (uint)CARRY4(uVar47,uVar39) + (uStack_34 * 0x1000 | uStack_30 >> 0x14) +
                        (uint)CARRY4(uVar46,uVar31);
            uStack_34 = (uint)((ulonglong)uVar60 * 0x80000000 >> 0x20);
            uVar40 = (uint)((ulonglong)uVar60 * 0x80000000) |
                     uVar38 * 0xf796ca9 +
                     uVar60 * -0x210ca4ff + (int)((ulonglong)uVar60 * 0xf796ca9 >> 0x20) >> 1;
            lVar7 = (ulonglong)uVar40 * 0x85ebca87;
            uVar33 = (int)puStack_28 << 0x12 | uStack_2c >> 0xe;
            uVar31 = uStack_38 + uVar33 ^ (uint)lVar7;
            lVar8 = (ulonglong)uVar31 * 0x85ebca87;
            uVar34 = (uint)lVar8;
            uVar32 = (uint)((ulonglong)uStack_5c * 0x80000000) |
                     uVar56 * 0xf796ca9 +
                     uStack_5c * -0x210ca4ff + (int)((ulonglong)uStack_5c * 0xf796ca9 >> 0x20) >> 1;
            lVar9 = (ulonglong)uVar32 * 0x85ebca87;
            uVar19 = uVar34 + 0xc2b2ae63 ^ (uint)lVar9;
            lVar10 = (ulonglong)uVar19 * 0x85ebca87;
            uVar60 = (uint)lVar10;
            uVar38 = (uint)((ulonglong)uStack_54 * 0x80000000) |
                     (int)puStack_58 * 0xf796ca9 +
                     uStack_54 * -0x210ca4ff + (int)((ulonglong)uStack_54 * 0xf796ca9 >> 0x20) >> 1;
            lVar11 = (ulonglong)uVar38 * 0x85ebca87;
            uVar35 = uVar60 + 0xc2b2ae63 ^ (uint)lVar11;
            lVar12 = (ulonglong)uVar35 * 0x85ebca87;
            uVar39 = (uint)lVar12;
            uVar46 = (uint)((ulonglong)uStack_4c * 0x80000000) |
                     uStack_50 * 0xf796ca9 +
                     uStack_4c * -0x210ca4ff + (int)((ulonglong)uStack_4c * 0xf796ca9 >> 0x20) >> 1;
            lVar13 = (ulonglong)uVar46 * 0x85ebca87;
            uVar56 = uVar39 + 0xc2b2ae63 ^ (uint)lVar13;
            lVar6 = (ulonglong)uVar56 * 0x85ebca87;
            uVar47 = (uint)lVar6;
            uVar29 = uVar47 + 0xc2b2ae63;
            iVar21 = ((((uStack_30 + (uStack_2c * 0x40000 | (uint)puStack_28 >> 0xe) +
                         (uint)CARRY4(uStack_38,uVar33) ^
                        (uVar43 * -0x80000000 + uVar20 * -0x784349ac + uStack_34) * -0x7a143579 +
                        uVar40 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20)) * -0x7a143579 +
                        uVar31 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20) + -0x7a143589 +
                        (uint)(0x3d4d519c < uVar34) ^
                       (uVar30 * -0x80000000 +
                       uVar27 * -0x784349ac + (int)((ulonglong)uStack_5c * 0x80000000 >> 0x20)) *
                       -0x7a143579 + uVar32 * -0x61c8864f + (int)((ulonglong)lVar9 >> 0x20)) *
                       -0x7a143579 + uVar19 * -0x61c8864f + (int)((ulonglong)lVar10 >> 0x20) +
                       -0x7a143589 + (uint)(0x3d4d519c < uVar60) ^
                      (uVar53 * -0x80000000 +
                      uVar42 * -0x784349ac + (int)((ulonglong)uStack_54 * 0x80000000 >> 0x20)) *
                      -0x7a143579 + uVar38 * -0x61c8864f + (int)((ulonglong)lVar11 >> 0x20)) *
                      -0x7a143579 + uVar35 * -0x61c8864f + (int)((ulonglong)lVar12 >> 0x20) +
                      -0x7a143589 + (uint)(0x3d4d519c < uVar39) ^
                     (uVar28 * -0x80000000 +
                     uVar41 * -0x784349ac + (int)((ulonglong)uStack_4c * 0x80000000 >> 0x20)) *
                     -0x7a143579 + uVar46 * -0x61c8864f + (int)((ulonglong)lVar13 >> 0x20)) *
                     -0x7a143579 + uVar56 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20) +
                     -0x7a143589 + (uint)(0x3d4d519c < uVar47);
            apuStack_88[4] = puVar45;
            apuStack_88[5] = puVar36;
          }
          puStack_28 = (undefined1 *)(uVar29 + (int)puVar45);
          uVar19 = (uint)puVar45 & 0x1f;
          puVar36 = (uint *)((int)puVar36 + ((uint)puVar45 & 0xffffffe0));
          uVar35 = 0;
          uVar29 = iVar21 + (uint)CARRY4(uVar29,(uint)puVar45);
          do {
            if (uVar35 == 0 && (7 < uVar19) <= uVar35) {
              if (uVar35 == 0 && (3 < uVar19) <= uVar35) {
                if (uVar19 == 0 && uVar35 == 0) goto LAB_7176dfb0;
                lVar7 = (ulonglong)(uint)(byte)*puVar36 * 0x165667c5;
                uVar41 = (uint)lVar7 ^ (uint)puStack_28;
                uVar29 = (uint)(byte)*puVar36 * 0x27d4eb2f + (int)((ulonglong)lVar7 >> 0x20) ^
                         uVar29;
                uVar28 = uVar41 << 0xb | uVar29 >> 0x15;
                lVar7 = (ulonglong)uVar28 * 0x85ebca87;
                puStack_28 = (undefined1 *)lVar7;
                iVar21 = 1;
                uVar41 = (uVar29 << 0xb | uVar41 >> 0x15) * -0x7a143579 +
                         uVar28 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20);
                uVar27 = 0xffffffff;
              }
              else {
                lVar7 = (ulonglong)*puVar36 * 0x85ebca87;
                uVar41 = (uint)lVar7 ^ (uint)puStack_28;
                uVar29 = *puVar36 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20) ^ uVar29;
                uVar28 = uVar41 << 0x17 | uVar29 >> 9;
                lVar7 = (ulonglong)uVar28 * 0x27d4eb4f;
                uVar42 = (uint)lVar7;
                puStack_28 = (undefined1 *)(uVar42 + 0x9e3779f9);
                iVar21 = 4;
                uVar41 = (uVar29 << 0x17 | uVar41 >> 9) * 0x27d4eb4f +
                         uVar28 * -0x3d4d51c3 + (int)((ulonglong)lVar7 >> 0x20) + 0x165667b1 +
                         (uint)(0x61c88606 < uVar42);
                uVar27 = 0xfffffffc;
              }
            }
            else {
              uVar41 = *puVar36;
              uVar28 = (uint)((ulonglong)uVar41 * 0x80000000) |
                       puVar36[1] * 0x27d4eb4f +
                       uVar41 * -0x3d4d51c3 + (int)((ulonglong)uVar41 * 0x27d4eb4f >> 0x20) >> 1;
              lVar7 = (ulonglong)uVar28 * 0x85ebca87;
              uVar27 = 0xfffffff8;
              uVar41 = (puVar36[1] * -0x80000000 +
                       uVar41 * -0x6c158a59 + (int)((ulonglong)uVar41 * 0x80000000 >> 0x20)) *
                       -0x7a143579 + uVar28 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20) ^ uVar29
              ;
              uVar28 = (uint)lVar7 ^ (uint)puStack_28;
              uVar42 = uVar28 << 0x1b | uVar41 >> 5;
              lVar7 = (ulonglong)uVar42 * 0x85ebca87;
              uVar53 = (uint)lVar7;
              puStack_28 = (undefined1 *)(uVar53 + 0xc2b2ae63);
              iVar21 = 8;
              uVar41 = (uVar41 << 0x1b | uVar28 >> 5) * -0x7a143579 +
                       uVar42 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20) + -0x7a143589 +
                       (uint)(0x3d4d519c < uVar53);
              uStack_2c = uVar29;
            }
            bVar61 = CARRY4(uVar27,uVar19);
            uVar19 = uVar27 + uVar19;
            puVar36 = (uint *)((int)puVar36 + iVar21);
            uVar35 = (uVar35 - 1) + (uint)bVar61;
            uVar29 = uVar41;
          } while( true );
        }
      }
LAB_7176d3dc:
      uVar29 = *apuStack_88[2];
      *apuStack_88[2] = uVar29 + 1;
      if (uVar29 == 6) {
        uStack_5c = (uint)ppuVar54[0xc011];
        puVar37 = ppuVar54[0xc010];
        puVar36 = ppuVar54[0xc00f];
        puStack_60 = ppuVar54[0xc012];
        if (puVar37 < (uint *)0x20) {
          iVar21 = 0x27d4eb7f;
          uVar29 = 0x56d677d6;
        }
        else {
          uStack_30 = 0x50;
          uStack_38 = 0x40801011;
          uStack_2c = 0x61c8869e;
          puStack_28 = (undefined1 *)0xba94458a;
          uStack_3c = 0xc2b2ae8d;
          iVar21 = 0;
          uStack_34 = 0x6854fb60;
          uVar29 = 0xee40c5e7;
          uVar19 = 0x60ea283e;
          puVar45 = puVar36;
          puVar55 = puVar37;
          do {
            uStack_44 = uVar19;
            uStack_40 = uVar29;
            lVar7 = (ulonglong)puVar45[6] * 0x27d4eb4f;
            uVar19 = (uint)lVar7;
            uVar29 = puVar45[7] * 0x27d4eb4f +
                     puVar45[6] * -0x3d4d51c3 + (int)((ulonglong)lVar7 >> 0x20) + uStack_2c +
                     (uint)CARRY4(uVar19,(uint)puStack_28);
            uVar35 = uVar29 >> 1;
            uStack_48 = (int)(puStack_28 + uVar19) * -0x80000000 | uVar35;
            uVar41 = (uint)(puStack_28 + uVar19) >> 1;
            uStack_4c = uVar29 * -0x80000000 | uVar41;
            puStack_28 = (undefined1 *)((ulonglong)uStack_48 * 0x85ebca87);
            uStack_2c = uStack_4c * -0x7a143579 +
                        uStack_48 * -0x61c8864f + (int)((ulonglong)uStack_48 * 0x85ebca87 >> 0x20);
            lVar7 = (ulonglong)puVar45[4] * 0x27d4eb4f;
            uVar29 = (uint)lVar7;
            uVar42 = uVar29 + uStack_38;
            uVar29 = puVar45[5] * 0x27d4eb4f +
                     puVar45[4] * -0x3d4d51c3 + (int)((ulonglong)lVar7 >> 0x20) + uStack_30 +
                     (uint)CARRY4(uVar29,uStack_38);
            uVar28 = uVar29 >> 1;
            uStack_50 = uVar42 * -0x80000000 | uVar28;
            uVar42 = uVar42 >> 1;
            uStack_54 = uVar29 * -0x80000000 | uVar42;
            puVar57 = puVar45 + 1;
            uStack_38 = (uint)((ulonglong)uStack_50 * 0x85ebca87);
            uStack_30 = uStack_54 * -0x7a143579 +
                        uStack_50 * -0x61c8864f + (int)((ulonglong)uStack_50 * 0x85ebca87 >> 0x20);
            puVar1 = puVar45 + 2;
            puVar2 = puVar45 + 3;
            lVar7 = (ulonglong)*puVar1 * 0x27d4eb4f;
            uVar19 = (uint)lVar7;
            uVar29 = *puVar45;
            puVar45 = puVar45 + 8;
            uVar27 = uVar19 + uStack_34;
            uVar19 = *puVar2 * 0x27d4eb4f + *puVar1 * -0x3d4d51c3 + (int)((ulonglong)lVar7 >> 0x20)
                     + uStack_3c + (uint)CARRY4(uVar19,uStack_34);
            uVar53 = uVar19 >> 1;
            uVar60 = uVar27 * -0x80000000 | uVar53;
            uVar27 = uVar27 >> 1;
            puStack_58 = (undefined1 *)(uVar19 * -0x80000000 | uVar27);
            uStack_34 = (uint)((ulonglong)uVar60 * 0x85ebca87);
            uStack_3c = (int)puStack_58 * -0x7a143579 +
                        uVar60 * -0x61c8864f + (int)((ulonglong)uVar60 * 0x85ebca87 >> 0x20);
            lVar7 = (ulonglong)uVar29 * 0x27d4eb4f;
            uVar19 = (uint)lVar7;
            uVar20 = uVar19 + uStack_40;
            uVar29 = *puVar57 * 0x27d4eb4f + uVar29 * -0x3d4d51c3 + (int)((ulonglong)lVar7 >> 0x20)
                     + uStack_44 + (uint)CARRY4(uVar19,uStack_40);
            bVar61 = puVar55 < (uint *)0x20;
            puVar55 = puVar55 + -8;
            uVar30 = uVar29 >> 1;
            uVar43 = uVar20 * -0x80000000 | uVar30;
            uVar20 = uVar20 >> 1;
            uVar56 = uVar29 * -0x80000000 | uVar20;
            iVar21 = iVar21 - (uint)bVar61;
            uVar29 = (uint)((ulonglong)uVar43 * 0x85ebca87);
            uVar19 = uVar56 * -0x7a143579 +
                     uVar43 * -0x61c8864f + (int)((ulonglong)uVar43 * 0x85ebca87 >> 0x20);
          } while ((uint)(puVar55 < (uint *)0x20) <= (uint)-iVar21);
          uVar46 = uVar29 << 1 | uVar19 >> 0x1f;
          uVar38 = uStack_34 << 7 | uStack_3c >> 0x19;
          uVar47 = uVar38 + uVar46;
          uVar39 = uStack_38 << 0xc | uStack_30 >> 0x14;
          uVar49 = uVar47 + uVar39;
          uStack_30 = (uStack_3c * 0x80 | uStack_34 >> 0x19) + (uVar19 * 2 | uVar29 >> 0x1f) +
                      (uint)CARRY4(uVar38,uVar46) + (uStack_30 * 0x1000 | uStack_38 >> 0x14) +
                      (uint)CARRY4(uVar47,uVar39);
          uStack_34 = (uint)((ulonglong)uVar43 * 0x80000000 >> 0x20);
          uVar40 = (uint)((ulonglong)uVar43 * 0x80000000) |
                   uVar56 * 0xf796ca9 +
                   uVar43 * -0x210ca4ff + (int)((ulonglong)uVar43 * 0xf796ca9 >> 0x20) >> 1;
          uVar38 = (int)puStack_28 << 0x12 | uStack_2c >> 0xe;
          lVar7 = (ulonglong)uVar40 * 0x85ebca87;
          uVar39 = uVar49 + uVar38 ^ (uint)lVar7;
          lVar8 = (ulonglong)uVar39 * 0x85ebca87;
          uVar52 = (uint)lVar8;
          uVar46 = (uint)((ulonglong)uVar60 * 0x80000000) |
                   (int)puStack_58 * 0xf796ca9 +
                   uVar60 * -0x210ca4ff + (int)((ulonglong)uVar60 * 0xf796ca9 >> 0x20) >> 1;
          lVar9 = (ulonglong)uVar46 * 0x85ebca87;
          uVar19 = uVar52 + 0xc2b2ae63 ^ (uint)lVar9;
          lVar10 = (ulonglong)uVar19 * 0x85ebca87;
          uVar47 = (uint)lVar10;
          uVar31 = (uint)((ulonglong)uStack_50 * 0x80000000) |
                   uStack_54 * 0xf796ca9 +
                   uStack_50 * -0x210ca4ff + (int)((ulonglong)uStack_50 * 0xf796ca9 >> 0x20) >> 1;
          lVar11 = (ulonglong)uVar31 * 0x85ebca87;
          uVar43 = uVar47 + 0xc2b2ae63 ^ (uint)lVar11;
          lVar12 = (ulonglong)uVar43 * 0x85ebca87;
          uVar32 = (uint)lVar12;
          uVar33 = (uint)((ulonglong)uStack_48 * 0x80000000) |
                   uStack_4c * 0xf796ca9 +
                   uStack_48 * -0x210ca4ff + (int)((ulonglong)uStack_48 * 0xf796ca9 >> 0x20) >> 1;
          lVar13 = (ulonglong)uVar33 * 0x85ebca87;
          uVar56 = uVar32 + 0xc2b2ae63 ^ (uint)lVar13;
          lVar6 = (ulonglong)uVar56 * 0x85ebca87;
          uVar34 = (uint)lVar6;
          uVar29 = uVar34 + 0xc2b2ae63;
          iVar21 = ((((uStack_30 + (uStack_2c * 0x40000 | (uint)puStack_28 >> 0xe) +
                       (uint)CARRY4(uVar49,uVar38) ^
                      (uVar20 * -0x80000000 + uVar30 * -0x784349ac + uStack_34) * -0x7a143579 +
                      uVar40 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20)) * -0x7a143579 +
                      uVar39 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20) + -0x7a143589 +
                      (uint)(0x3d4d519c < uVar52) ^
                     (uVar27 * -0x80000000 +
                     uVar53 * -0x784349ac + (int)((ulonglong)uVar60 * 0x80000000 >> 0x20)) *
                     -0x7a143579 + uVar46 * -0x61c8864f + (int)((ulonglong)lVar9 >> 0x20)) *
                     -0x7a143579 + uVar19 * -0x61c8864f + (int)((ulonglong)lVar10 >> 0x20) +
                     -0x7a143589 + (uint)(0x3d4d519c < uVar47) ^
                    (uVar42 * -0x80000000 +
                    uVar28 * -0x784349ac + (int)((ulonglong)uStack_50 * 0x80000000 >> 0x20)) *
                    -0x7a143579 + uVar31 * -0x61c8864f + (int)((ulonglong)lVar11 >> 0x20)) *
                    -0x7a143579 + uVar43 * -0x61c8864f + (int)((ulonglong)lVar12 >> 0x20) +
                    -0x7a143589 + (uint)(0x3d4d519c < uVar32) ^
                   (uVar41 * -0x80000000 +
                   uVar35 * -0x784349ac + (int)((ulonglong)uStack_48 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar33 * -0x61c8864f + (int)((ulonglong)lVar13 >> 0x20)) *
                   -0x7a143579 + uVar56 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20) +
                   -0x7a143589 + (uint)(0x3d4d519c < uVar34);
          puStack_68 = puVar37;
          puStack_64 = puVar36;
        }
        uVar19 = uVar29 + (int)puVar37;
        uVar35 = (uint)puVar37 & 0x1f;
        uVar29 = iVar21 + (uint)CARRY4(uVar29,(uint)puVar37);
        puVar36 = (uint *)((int)puVar36 + ((uint)puVar37 & 0xffffffe0));
        uVar41 = 0;
        do {
          if (uVar41 == 0 && (7 < uVar35) <= uVar41) {
            if (uVar41 == 0 && (3 < uVar35) <= uVar41) {
              if (uVar35 == 0 && uVar41 == 0) goto LAB_7176ea0c;
              lVar7 = (ulonglong)(uint)(byte)*puVar36 * 0x165667c5;
              uVar28 = (uint)lVar7 ^ uVar19;
              uVar29 = (uint)(byte)*puVar36 * 0x27d4eb2f + (int)((ulonglong)lVar7 >> 0x20) ^ uVar29;
              uVar42 = uVar28 << 0xb | uVar29 >> 0x15;
              lVar7 = (ulonglong)uVar42 * 0x85ebca87;
              uVar19 = (uint)lVar7;
              iVar21 = 1;
              uVar29 = (uVar29 << 0xb | uVar28 >> 0x15) * -0x7a143579 +
                       uVar42 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20);
              uVar28 = 0xffffffff;
            }
            else {
              lVar7 = (ulonglong)*puVar36 * 0x85ebca87;
              uVar28 = (uint)lVar7 ^ uVar19;
              uVar29 = *puVar36 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20) ^ uVar29;
              uVar53 = uVar28 << 0x17 | uVar29 >> 9;
              lVar7 = (ulonglong)uVar53 * 0x27d4eb4f;
              uVar42 = (uint)lVar7;
              uVar19 = uVar42 + 0x9e3779f9;
              iVar21 = 4;
              uVar29 = (uVar29 << 0x17 | uVar28 >> 9) * 0x27d4eb4f +
                       uVar53 * -0x3d4d51c3 + (int)((ulonglong)lVar7 >> 0x20) + 0x165667b1 +
                       (uint)(0x61c88606 < uVar42);
              uVar28 = 0xfffffffc;
            }
          }
          else {
            uVar28 = *puVar36;
            uVar42 = (uint)((ulonglong)uVar28 * 0x80000000) |
                     puVar36[1] * 0x27d4eb4f +
                     uVar28 * -0x3d4d51c3 + (int)((ulonglong)uVar28 * 0x27d4eb4f >> 0x20) >> 1;
            lVar7 = (ulonglong)uVar42 * 0x85ebca87;
            uVar53 = (uint)lVar7 ^ uVar19;
            uVar29 = (puVar36[1] * -0x80000000 +
                     uVar28 * -0x6c158a59 + (int)((ulonglong)uVar28 * 0x80000000 >> 0x20)) *
                     -0x7a143579 + uVar42 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20) ^ uVar29;
            uVar42 = uVar53 << 0x1b | uVar29 >> 5;
            lVar7 = (ulonglong)uVar42 * 0x85ebca87;
            uVar28 = (uint)lVar7;
            uVar19 = uVar28 + 0xc2b2ae63;
            iVar21 = 8;
            uVar29 = (uVar29 << 0x1b | uVar53 >> 5) * -0x7a143579 +
                     uVar42 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20) + -0x7a143589 +
                     (uint)(0x3d4d519c < uVar28);
            uVar28 = 0xfffffff8;
          }
          bVar61 = CARRY4(uVar28,uVar35);
          uVar35 = uVar28 + uVar35;
          puVar36 = (uint *)((int)puVar36 + iVar21);
          uVar41 = (uVar41 - 1) + (uint)bVar61;
        } while( true );
      }
      if (uVar29 == 2) {
        uStack_5c = (uint)ppuVar54[0x4009];
        puVar37 = ppuVar54[0x4008];
        puVar36 = ppuVar54[0x4007];
        puStack_60 = ppuVar54[0x400a];
        if (puVar37 < (uint *)0x20) {
          iVar21 = 0x27d4eb7f;
          uVar29 = 0x56d677d6;
        }
        else {
          uStack_30 = 0x50;
          uStack_2c = 0x40801011;
          puStack_28 = (undefined1 *)0x61c8869e;
          uStack_38 = 0xc2b2ae8d;
          uStack_40 = 0xba94458a;
          iVar21 = 0;
          uStack_34 = 0x6854fb60;
          uVar29 = 0xee40c5e7;
          puVar45 = puVar36;
          uVar19 = 0x60ea283e;
          puVar55 = puVar37;
          do {
            uStack_3c = uVar19;
            uStack_44 = uVar29;
            puVar57 = puVar45 + 1;
            lVar7 = (ulonglong)puVar45[6] * 0x27d4eb4f;
            uVar29 = (uint)lVar7;
            uVar41 = uVar29 + uStack_40;
            uVar29 = puVar45[7] * 0x27d4eb4f +
                     puVar45[6] * -0x3d4d51c3 + (int)((ulonglong)lVar7 >> 0x20) + (int)puStack_28 +
                     (uint)CARRY4(uVar29,uStack_40);
            uVar35 = uVar29 >> 1;
            uStack_48 = uVar41 * -0x80000000 | uVar35;
            uVar41 = uVar41 >> 1;
            uStack_4c = uVar29 * -0x80000000 | uVar41;
            uStack_40 = (uint)((ulonglong)uStack_48 * 0x85ebca87);
            puStack_28 = (undefined1 *)
                         (uStack_4c * -0x7a143579 +
                         uStack_48 * -0x61c8864f + (int)((ulonglong)uStack_48 * 0x85ebca87 >> 0x20))
            ;
            lVar7 = (ulonglong)puVar45[4] * 0x27d4eb4f;
            uVar29 = (uint)lVar7;
            uVar42 = uVar29 + uStack_2c;
            uVar29 = puVar45[5] * 0x27d4eb4f +
                     puVar45[4] * -0x3d4d51c3 + (int)((ulonglong)lVar7 >> 0x20) + uStack_30 +
                     (uint)CARRY4(uVar29,uStack_2c);
            uVar28 = uVar29 >> 1;
            uStack_50 = uVar42 * -0x80000000 | uVar28;
            uVar42 = uVar42 >> 1;
            uStack_54 = uVar29 * -0x80000000 | uVar42;
            puVar1 = puVar45 + 3;
            uStack_2c = (uint)((ulonglong)uStack_50 * 0x85ebca87);
            uStack_30 = uStack_54 * -0x7a143579 +
                        uStack_50 * -0x61c8864f + (int)((ulonglong)uStack_50 * 0x85ebca87 >> 0x20);
            uVar19 = *puVar45;
            puVar2 = puVar45 + 2;
            puVar45 = puVar45 + 8;
            lVar7 = (ulonglong)*puVar2 * 0x27d4eb4f;
            uVar29 = (uint)lVar7;
            uVar27 = uVar29 + uStack_34;
            uVar29 = *puVar1 * 0x27d4eb4f + *puVar2 * -0x3d4d51c3 + (int)((ulonglong)lVar7 >> 0x20)
                     + uStack_38 + (uint)CARRY4(uVar29,uStack_34);
            uVar53 = uVar29 >> 1;
            uVar56 = uVar27 * -0x80000000 | uVar53;
            uVar27 = uVar27 >> 1;
            uVar43 = uVar29 * -0x80000000 | uVar27;
            uStack_34 = (uint)((ulonglong)uVar56 * 0x85ebca87);
            uStack_38 = uVar43 * -0x7a143579 +
                        uVar56 * -0x61c8864f + (int)((ulonglong)uVar56 * 0x85ebca87 >> 0x20);
            lVar7 = (ulonglong)uVar19 * 0x27d4eb4f;
            uVar29 = (uint)lVar7;
            uVar20 = uVar29 + uStack_44;
            uVar29 = *puVar57 * 0x27d4eb4f + uVar19 * -0x3d4d51c3 + (int)((ulonglong)lVar7 >> 0x20)
                     + uStack_3c + (uint)CARRY4(uVar29,uStack_44);
            bVar61 = puVar55 < (uint *)0x20;
            puVar55 = puVar55 + -8;
            uVar30 = uVar29 >> 1;
            uVar60 = uVar20 * -0x80000000 | uVar30;
            uVar20 = uVar20 >> 1;
            uVar38 = uVar29 * -0x80000000 | uVar20;
            iVar21 = iVar21 - (uint)bVar61;
            uVar29 = (uint)((ulonglong)uVar60 * 0x85ebca87);
            uVar19 = uVar38 * -0x7a143579 +
                     uVar60 * -0x61c8864f + (int)((ulonglong)uVar60 * 0x85ebca87 >> 0x20);
          } while ((uint)(puVar55 < (uint *)0x20) <= (uint)-iVar21);
          uVar39 = uVar29 << 1 | uVar19 >> 0x1f;
          uVar47 = uStack_34 << 7 | uStack_38 >> 0x19;
          uVar46 = uVar47 + uVar39;
          uVar31 = uStack_2c << 0xc | uStack_30 >> 0x14;
          uVar33 = uVar46 + uVar31;
          uStack_2c = (uStack_38 * 0x80 | uStack_34 >> 0x19) + (uVar19 * 2 | uVar29 >> 0x1f) +
                      (uint)CARRY4(uVar47,uVar39) + (uStack_30 * 0x1000 | uStack_2c >> 0x14) +
                      (uint)CARRY4(uVar46,uVar31);
          uStack_30 = (uint)((ulonglong)uVar60 * 0x80000000 >> 0x20);
          uVar19 = (uint)((ulonglong)uVar60 * 0x80000000) |
                   uVar38 * 0xf796ca9 +
                   uVar60 * -0x210ca4ff + (int)((ulonglong)uVar60 * 0xf796ca9 >> 0x20) >> 1;
          lVar7 = (ulonglong)uVar19 * 0x85ebca87;
          uVar40 = uStack_40 << 0x12 | (uint)puStack_28 >> 0xe;
          uVar34 = uVar33 + uVar40 ^ (uint)lVar7;
          lVar8 = (ulonglong)uVar34 * 0x85ebca87;
          uStack_34 = (uint)lVar8;
          uVar49 = (uint)((ulonglong)uVar56 * 0x80000000) |
                   uVar43 * 0xf796ca9 +
                   uVar56 * -0x210ca4ff + (int)((ulonglong)uVar56 * 0xf796ca9 >> 0x20) >> 1;
          lVar9 = (ulonglong)uVar49 * 0x85ebca87;
          uVar43 = uStack_34 + 0xc2b2ae63 ^ (uint)lVar9;
          lVar10 = (ulonglong)uVar43 * 0x85ebca87;
          uVar39 = (uint)lVar10;
          uVar46 = (uint)((ulonglong)uStack_50 * 0x80000000) |
                   uStack_54 * 0xf796ca9 +
                   uStack_50 * -0x210ca4ff + (int)((ulonglong)uStack_50 * 0xf796ca9 >> 0x20) >> 1;
          lVar11 = (ulonglong)uVar46 * 0x85ebca87;
          uVar60 = uVar39 + 0xc2b2ae63 ^ (uint)lVar11;
          lVar12 = (ulonglong)uVar60 * 0x85ebca87;
          uVar47 = (uint)lVar12;
          uVar31 = (uint)((ulonglong)uStack_48 * 0x80000000) |
                   uStack_4c * 0xf796ca9 +
                   uStack_48 * -0x210ca4ff + (int)((ulonglong)uStack_48 * 0xf796ca9 >> 0x20) >> 1;
          lVar13 = (ulonglong)uVar31 * 0x85ebca87;
          uVar38 = uVar47 + 0xc2b2ae63 ^ (uint)lVar13;
          lVar6 = (ulonglong)uVar38 * 0x85ebca87;
          uVar32 = (uint)lVar6;
          uVar29 = uVar32 + 0xc2b2ae63;
          iVar21 = ((((uStack_2c + ((int)puStack_28 * 0x40000 | uStack_40 >> 0xe) +
                       (uint)CARRY4(uVar33,uVar40) ^
                      (uVar20 * -0x80000000 + uVar30 * -0x784349ac + uStack_30) * -0x7a143579 +
                      uVar19 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20)) * -0x7a143579 +
                      uVar34 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20) + -0x7a143589 +
                      (uint)(0x3d4d519c < uStack_34) ^
                     (uVar27 * -0x80000000 +
                     uVar53 * -0x784349ac + (int)((ulonglong)uVar56 * 0x80000000 >> 0x20)) *
                     -0x7a143579 + uVar49 * -0x61c8864f + (int)((ulonglong)lVar9 >> 0x20)) *
                     -0x7a143579 + uVar43 * -0x61c8864f + (int)((ulonglong)lVar10 >> 0x20) +
                     -0x7a143589 + (uint)(0x3d4d519c < uVar39) ^
                    (uVar42 * -0x80000000 +
                    uVar28 * -0x784349ac + (int)((ulonglong)uStack_50 * 0x80000000 >> 0x20)) *
                    -0x7a143579 + uVar46 * -0x61c8864f + (int)((ulonglong)lVar11 >> 0x20)) *
                    -0x7a143579 + uVar60 * -0x61c8864f + (int)((ulonglong)lVar12 >> 0x20) +
                    -0x7a143589 + (uint)(0x3d4d519c < uVar47) ^
                   (uVar41 * -0x80000000 +
                   uVar35 * -0x784349ac + (int)((ulonglong)uStack_48 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar31 * -0x61c8864f + (int)((ulonglong)lVar13 >> 0x20)) *
                   -0x7a143579 + uVar38 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20) +
                   -0x7a143589 + (uint)(0x3d4d519c < uVar32);
          puStack_68 = puVar37;
          puStack_64 = puVar36;
        }
        uVar19 = uVar29 + (int)puVar37;
        uVar35 = (uint)puVar37 & 0x1f;
        puStack_28 = (undefined1 *)(iVar21 + (uint)CARRY4(uVar29,(uint)puVar37));
        uVar29 = 0;
        puVar36 = (uint *)((int)puVar36 + ((uint)puVar37 & 0xffffffe0));
        do {
          if (uVar29 == 0 && (7 < uVar35) <= uVar29) {
            if (uVar29 == 0 && (3 < uVar35) <= uVar29) {
              if (uVar35 == 0 && uVar29 == 0) goto LAB_7176e31c;
              iVar21 = 1;
              lVar7 = (ulonglong)(uint)(byte)*puVar36 * 0x165667c5;
              uVar28 = (uint)lVar7 ^ uVar19;
              uVar41 = (uint)(byte)*puVar36 * 0x27d4eb2f + (int)((ulonglong)lVar7 >> 0x20) ^
                       (uint)puStack_28;
              uVar42 = uVar28 << 0xb | uVar41 >> 0x15;
              lVar7 = (ulonglong)uVar42 * 0x85ebca87;
              uVar19 = (uint)lVar7;
              puStack_28 = (undefined1 *)
                           ((uVar41 << 0xb | uVar28 >> 0x15) * -0x7a143579 +
                           uVar42 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20));
              uVar41 = 0xffffffff;
            }
            else {
              lVar7 = (ulonglong)*puVar36 * 0x85ebca87;
              uVar28 = (uint)lVar7 ^ uVar19;
              uVar41 = *puVar36 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20) ^ (uint)puStack_28;
              uVar42 = uVar28 << 0x17 | uVar41 >> 9;
              lVar7 = (ulonglong)uVar42 * 0x27d4eb4f;
              uVar53 = (uint)lVar7;
              iVar21 = 4;
              uVar19 = uVar53 + 0x9e3779f9;
              puStack_28 = (undefined1 *)
                           ((uVar41 << 0x17 | uVar28 >> 9) * 0x27d4eb4f +
                            uVar42 * -0x3d4d51c3 + (int)((ulonglong)lVar7 >> 0x20) + 0x165667b1 +
                           (uint)(0x61c88606 < uVar53));
              uVar41 = 0xfffffffc;
            }
          }
          else {
            uVar41 = *puVar36;
            uVar28 = (uint)((ulonglong)uVar41 * 0x80000000) |
                     puVar36[1] * 0x27d4eb4f +
                     uVar41 * -0x3d4d51c3 + (int)((ulonglong)uVar41 * 0x27d4eb4f >> 0x20) >> 1;
            lVar7 = (ulonglong)uVar28 * 0x85ebca87;
            uVar41 = (puVar36[1] * -0x80000000 +
                     uVar41 * -0x6c158a59 + (int)((ulonglong)uVar41 * 0x80000000 >> 0x20)) *
                     -0x7a143579 + uVar28 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20) ^
                     (uint)puStack_28;
            uVar28 = (uint)lVar7 ^ uVar19;
            iVar21 = 8;
            uVar42 = uVar28 << 0x1b | uVar41 >> 5;
            lVar7 = (ulonglong)uVar42 * 0x85ebca87;
            uVar53 = (uint)lVar7;
            uVar19 = uVar53 + 0xc2b2ae63;
            puStack_28 = (undefined1 *)
                         ((uVar41 << 0x1b | uVar28 >> 5) * -0x7a143579 +
                          uVar42 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20) + -0x7a143589 +
                         (uint)(0x3d4d519c < uVar53));
            uVar41 = 0xfffffff8;
            uStack_2c = uVar29;
          }
          bVar61 = CARRY4(uVar41,uVar35);
          uVar35 = uVar41 + uVar35;
          puVar36 = (uint *)((int)puVar36 + iVar21);
          uVar29 = (uVar29 - 1) + (uint)bVar61;
        } while( true );
      }
      goto LAB_7176ea84;
    }
  }
  pbVar50 = (byte *)0x0;
  software_interrupt(0);
  imp___aeabi_memcpy(0,&DAT_70085120,0x3c,0x22);
  do {
    *pbVar50 = *pbVar50 ^ 0x50;
    pbVar50 = pbVar50 + 1;
  } while (pbVar50 != (byte *)0x3c);
  uRam00000000 = 0xe3b00036;
  _LAB_00000004 = 0xe3b01000;
  FUN_719344e4(0,0x3c,0);
  (*(code *)0x0)();
LAB_7176eea8:
  pbVar50 = (byte *)0x0;
  software_interrupt(0);
  imp___aeabi_memcpy(0,&DAT_70085120,0x3c,0x22);
  do {
    *pbVar50 = *pbVar50 ^ 0x50;
    pbVar50 = pbVar50 + 1;
  } while (pbVar50 != (byte *)0x3c);
  uRam00000000 = 0xe3b0000c;
  _LAB_00000004 = 0xe3b01000;
  FUN_719344e4(0,0x3c,0);
  (*(code *)0x0)();
LAB_7176ef48:
  pbVar50 = (byte *)0x0;
  software_interrupt(0);
  imp___aeabi_memcpy(0,&DAT_70085120,0x3c,0x22);
  do {
    *pbVar50 = *pbVar50 ^ 0x50;
    pbVar50 = pbVar50 + 1;
  } while (pbVar50 != (byte *)0x3c);
  uRam00000000 = 0xe3b0000e;
  _LAB_00000004 = 0xe3b01000;
  FUN_719344e4(0,0x3c,0);
  (*(code *)0x0)();
LAB_7176efe8:
  pbVar50 = (byte *)0x0;
  software_interrupt(0);
  imp___aeabi_memcpy(0,&DAT_70085120,0x3c,0x22);
  do {
    *pbVar50 = *pbVar50 ^ 0x50;
    pbVar50 = pbVar50 + 1;
  } while (pbVar50 != (byte *)0x3c);
  uRam00000000 = 0xe3b00010;
  _LAB_00000004 = 0xe3b01000;
  FUN_719344e4(0,0x3c,0);
  (*(code *)0x0)();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: FUN_7176f93c
// Entry: 0x7176f93c | Size: 19632 bytes
// =========================================================================
// Decompile failed: Exception while decompiling 7176f93c: process: timeout


// =========================================================================
// Function: FUN_7177ad34
// Entry: 0x7177ad34 | Size: 296 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void FUN_7177ad34(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 byte *param_5,undefined4 *param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar1 = thunk_MwhHq(4);
  IqYTnHtEYRLvLLTOJMZHzxakOfRAHvNTt();
  puVar2 = (undefined4 *)thunk_MwhHq(0x28);
  uVar4 = param_2[1];
  uVar5 = *param_3;
  uVar6 = *param_4;
  puVar2[1] = *param_2;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  puVar2[4] = uVar6;
  *puVar2 = uVar1;
  if ((*param_5 & 1) == 0) {
    uVar4 = *(undefined4 *)(param_5 + 4);
    uVar1 = *(undefined4 *)(param_5 + 8);
    puVar2[5] = *(undefined4 *)param_5;
    puVar2[6] = uVar4;
    puVar2[7] = uVar1;
  }
  else {
    FUN_712f6d58(puVar2 + 5,*(undefined4 *)(param_5 + 8),*(undefined4 *)(param_5 + 4));
  }
  uVar1 = *param_7;
  puVar2[8] = *param_6;
  puVar2[9] = uVar1;
  iVar3 = imp_pthread_create(param_1,0,&LAB_71782f74,puVar2);
  if (iVar3 != 0) {
    BryazjfoMPqEkZEtKkG_KttlecoGMjr_tAmWbCi(iVar3,s_thread_constructor_failed_70063c8c);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}


// =========================================================================
// Function: FUN_7177aef4
// Entry: 0x7177aef4 | Size: 540 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void FUN_7177aef4(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined1 auStack_1c [4];
  
  uVar5 = *(uint *)(param_1 + 0x28);
  bVar8 = uVar5 == 0xe;
  if (bVar8) {
    uVar5 = (uint)*(byte *)(param_1 + 800);
  }
  if ((!bVar8 || uVar5 != 0) ||
     (iVar2 = FUN_71886108(), (uint)(iVar2 - *(int *)(param_1 + 0x324)) < 0x7d1)) {
    return;
  }
  iVar6 = *(int *)(param_1 + 0x308);
  iVar2 = 1;
  *(undefined1 *)(param_1 + 800) = 1;
  if (iVar6 != 0) {
    iVar2 = *(int *)(param_1 + 0x314);
  }
  if (iVar6 != 0 && iVar6 != iVar2) {
    do {
      bVar8 = *(char *)(iVar6 + 1) != '\0';
      if (bVar8) {
        *(undefined4 *)(param_1 + 0x308) = *(undefined4 *)(iVar6 + 4);
        *(int *)(param_1 + 0x318) = *(int *)(param_1 + 0x318) + 1;
        *(undefined1 *)(*(int *)(param_1 + 0x310) + 1) = 0;
        *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(*(int *)(param_1 + 0x310) + 4);
        iVar6 = *(int *)(param_1 + 0x308);
      }
    } while ((bVar8 && iVar6 != 0) && (iVar6 != *(int *)(param_1 + 0x314)));
  }
  uVar3 = thunk_MwhHq(4);
  IqYTnHtEYRLvLLTOJMZHzxakOfRAHvNTt();
  puVar4 = (undefined4 *)thunk_MwhHq(0x28);
  uVar7 = *(undefined4 *)(param_1 + 0x2f4);
  puVar4[1] = &LAB_7177a2a4;
  puVar4[4] = uVar7;
  bVar1 = *(byte *)(param_1 + 0x2e4);
  puVar4[2] = 0;
  *puVar4 = uVar3;
  puVar4[3] = param_1;
  if ((bVar1 & 1) == 0) {
    uVar7 = *(undefined4 *)(param_1 + 0x2e8);
    uVar3 = *(undefined4 *)(param_1 + 0x2ec);
    puVar4[5] = *(undefined4 *)(param_1 + 0x2e4);
    puVar4[6] = uVar7;
    puVar4[7] = uVar3;
  }
  else {
    FUN_712f6d58(puVar4 + 5,*(undefined4 *)(param_1 + 0x2ec),*(undefined4 *)(param_1 + 0x2e8));
  }
  uVar3 = *(undefined4 *)(param_1 + 0x32c);
  puVar4[8] = *(undefined4 *)(param_1 + 0x2f0);
  puVar4[9] = uVar3;
  iVar2 = imp_pthread_create(auStack_1c,0,&LAB_71782f74,puVar4);
  if (iVar2 == 0) {
    dtOmRBwkVHnGtYLYirTdLYLImchz(auStack_1c);
    uQwrLJbzyUVbHmvQcVNflhV(auStack_1c);
    return;
  }
  BryazjfoMPqEkZEtKkG_KttlecoGMjr_tAmWbCi(iVar2,s_thread_constructor_failed_70063c8c);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: FUN_7177b1e8
// Entry: 0x7177b1e8 | Size: 164 bytes
// =========================================================================

void FUN_7177b1e8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x28) != 0xe) {
    return;
  }
  if (*(char *)(param_1 + 800) != '\0') {
    iVar1 = *(int *)(param_1 + 0x308);
    if (iVar1 != 0) {
      param_2 = *(int *)(param_1 + 0x314);
    }
    if (iVar1 != 0 && iVar1 != param_2) {
      do {
        if (*(char *)(iVar1 + 1) == '\0') {
          return;
        }
        uVar2 = *(undefined4 *)(iVar1 + 4);
        *(undefined1 *)(param_1 + 800) = 0;
        *(undefined4 *)(param_1 + 0x308) = uVar2;
        uVar2 = FUN_71886108();
        *(undefined4 *)(param_1 + 0x324) = uVar2;
        iVar3 = *(int *)(param_1 + 0x318) + 1;
        *(int *)(param_1 + 0x318) = iVar3;
        *(undefined1 *)(*(int *)(param_1 + 0x310) + 1) = 0;
        *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(*(int *)(param_1 + 0x310) + 4);
        iVar1 = *(int *)(param_1 + 0x308);
        if (iVar1 != 0) {
          iVar3 = *(int *)(param_1 + 0x314);
        }
      } while (iVar1 != 0 && iVar1 != iVar3);
    }
  }
  return;
}


// =========================================================================
// Function: FUN_7177b2b4
// Entry: 0x7177b2b4 | Size: 2516 bytes
// =========================================================================

void FUN_7177b2b4(int param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  byte *pbVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  int iStack_44;
  int iStack_40;
  int iStack_38;
  int iStack_34;
  
  iVar8 = DAT_712017f8;
  if ((*(uint *)(param_1 + 0x28) | 2) == 0xf) {
    DataMemoryBarrier(0xb);
    if (((DAT_711f6dd8 & 1) == 0) && (iVar7 = cuKsjVZRyspaVsDnqLy(&DAT_711f6dd8), iVar7 != 0)) {
      pcVar6 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fa95c);
      if (*pcVar6 == '\0') {
        puVar11 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa94c);
        *puVar11 = 0x78727f04;
        puVar11[1] = 0xe8cc377d;
        puVar11[2] = 0x7645421f;
        *(undefined1 *)((int)puVar11 + 0xf) = 1;
        *(undefined4 *)((int)puVar11 + 0xb) = 0xa93c7476;
        GFDIUClbc_QcPNgD_wH(&LAB_71781e84,puVar11,&DAT_70b0e000);
        puVar12 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa95c);
        *puVar12 = 1;
      }
      pbVar13 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fa94c);
      if (pbVar13[0xf] != 0) {
        *pbVar13 = *pbVar13 ^ 0x6b;
        pbVar13[1] = pbVar13[1] ^ 0x11;
        pbVar13[2] = pbVar13[2] ^ 0x31;
        pbVar13[3] = pbVar13[3] ^ 0x17;
        pbVar13[0xf] = 0;
        pbVar13[4] = pbVar13[4] ^ 0x13;
        pbVar13[5] = pbVar13[5] ^ 0x59;
        pbVar13[6] = pbVar13[6] ^ 0xa9;
        pbVar13[7] = pbVar13[7] ^ 0x8b;
        pbVar13[8] = pbVar13[8] ^ 0x6b;
        pbVar13[9] = pbVar13[9] ^ 0x11;
        pbVar13[10] = pbVar13[10] ^ 0x31;
        pbVar13[0xb] = pbVar13[0xb] ^ 0x17;
        pbVar13[0xc] = pbVar13[0xc] ^ 0x13;
        pbVar13[0xd] = pbVar13[0xd] ^ 0x59;
        pbVar13[0xe] = pbVar13[0xe] ^ 0xa9;
      }
      DAT_711f6dd4 = FUN_71885ba4(pbVar13,0);
      SixizuLbAnqfgRApsCY(&DAT_711f6dd8);
    }
    uVar14 = DAT_711f6dd4;
    imp___aeabi_memclr4(&uStack_50,0x30);
    uStack_54 = uVar14;
    pcVar6 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fa97c);
    if (*pcVar6 == '\0') {
      puVar11 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa96c);
      *(undefined1 *)(puVar11 + 8) = 1;
      uVar4 = DAT_70060ca4;
      uVar3 = DAT_70060ca0;
      uVar9 = DAT_70060c9c;
      *puVar11 = DAT_70060c98;
      puVar11[1] = uVar9;
      puVar11[2] = uVar3;
      puVar11[3] = uVar4;
      uVar4 = DAT_70060cb4;
      uVar3 = DAT_70060cb0;
      uVar9 = DAT_70060cac;
      puVar11[4] = DAT_70060ca8;
      puVar11[5] = uVar9;
      puVar11[6] = uVar3;
      puVar11[7] = uVar4;
      GFDIUClbc_QcPNgD_wH(&LAB_71781eb4,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa97c);
      *puVar12 = 1;
    }
    iVar7 = XcxSszXLPjQrEGhecEv_(&DAT_700fa96c);
    if (*(char *)(iVar7 + 0x20) != '\0') {
      uVar14 = 0;
      uVar17 = 0;
      do {
        iVar15 = (uVar14 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar5 = (byte)(0x1731116b >> iVar15) |
                (byte)(-0x7456a6ed << ((uVar14 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar5 = (byte)(0x8ba95913 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar7 + uVar14) = *(byte *)(iVar7 + uVar14) ^ bVar5;
        bVar18 = 0xfffffffe < uVar14;
        bVar1 = uVar17 == 0;
        bVar2 = (0x1e < uVar14) <= uVar17;
        uVar14 = uVar14 + 1;
        uVar17 = uVar17 + bVar18;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar7 + 0x20) = 0;
    }
    uVar14 = imp_strlen(iVar7);
    if (0xfffffff7 < uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_712f6c1c(&uStack_6c);
    }
    if (uVar14 < 0xb) {
      uVar17 = (uint)&uStack_6c | 1;
      uStack_6c = CONCAT31(uStack_6c._1_3_,(char)(uVar14 << 1));
      if (uVar14 != 0) goto LAB_7177b4e8;
    }
    else {
      uVar17 = thunk_MwhHq((uVar14 | 7) + 1);
      uStack_6c = (uVar14 | 7) + 2;
      uStack_68 = uVar14;
      uStack_64 = uVar17;
LAB_7177b4e8:
      imp___aeabi_memmove(uVar17,iVar7,uVar14);
    }
    *(undefined1 *)(uVar17 + uVar14) = 0;
    FUN_717300d8(&uStack_60,&uStack_6c);
    FUN_71524948(&uStack_54,&uStack_60);
    uVar9 = FUN_713a1f9c(&uStack_54,0);
    uVar9 = FUN_713a1f9c(uVar9,1);
    cfqspBX_JrdDvACwYrAyrngjQ(iVar8 + 0x34);
    piVar10 = (int *)thunk_MwhHq(0x3c);
    *piVar10 = 0;
    piVar10[1] = 0;
    FUN_713a10f8(piVar10 + 2,uVar9);
    piVar10[1] = iVar8 + 0x38;
    iVar7 = *(int *)(iVar8 + 0x38);
    *piVar10 = iVar7;
    *(int **)(iVar7 + 4) = piVar10;
    *(int **)(iVar8 + 0x38) = piVar10;
    *(int *)(iVar8 + 0x40) = *(int *)(iVar8 + 0x40) + 1;
    QgduklVhdVlmSiqzGQeutncbrNj(iVar8 + 0x34);
    if ((uStack_60 & 1) != 0) {
      qNQrlu(uStack_58);
    }
    if ((uStack_6c & 1) != 0) {
      qNQrlu(uStack_64);
    }
    if (iStack_38 != 0) {
      iStack_34 = iStack_38;
      qNQrlu();
    }
    if (iStack_44 != 0) {
      iStack_40 = iStack_44;
      qNQrlu();
    }
    if (uStack_50 == 0) goto LAB_7177b678;
    uStack_4c = uStack_50;
  }
  else {
    pcVar6 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fa99c);
    if (*pcVar6 == '\0') {
      puVar11 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa98c);
      *(undefined1 *)(puVar11 + 8) = 1;
      uVar4 = DAT_70060944;
      uVar3 = DAT_70060940;
      uVar9 = DAT_7006093c;
      *puVar11 = DAT_70060938;
      puVar11[1] = uVar9;
      puVar11[2] = uVar3;
      puVar11[3] = uVar4;
      uVar4 = DAT_70060954;
      uVar3 = DAT_70060950;
      uVar9 = DAT_7006094c;
      puVar11[4] = DAT_70060948;
      puVar11[5] = uVar9;
      puVar11[6] = uVar3;
      puVar11[7] = uVar4;
      GFDIUClbc_QcPNgD_wH(&LAB_71781ef4,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa99c);
      *puVar12 = 1;
    }
    iVar8 = XcxSszXLPjQrEGhecEv_(&DAT_700fa98c);
    if (*(char *)(iVar8 + 0x20) != '\0') {
      uVar14 = 0;
      uVar17 = 0;
      do {
        iVar7 = (uVar14 & 7) * 8;
        uVar16 = iVar7 - 0x20;
        bVar5 = (byte)(0x6f7f1305 >> iVar7) |
                (byte)(-0x6c846ccf << ((uVar14 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar5 = (byte)(0x937b9331 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar8 + uVar14) = *(byte *)(iVar8 + uVar14) ^ bVar5;
        bVar18 = 0xfffffffe < uVar14;
        bVar1 = uVar17 == 0;
        bVar2 = (0x1e < uVar14) <= uVar17;
        uVar14 = uVar14 + 1;
        uVar17 = uVar17 + bVar18;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x20) = 0;
    }
    uVar14 = imp_strlen(iVar8);
    if (0xfffffff7 < uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_712f6c1c(&uStack_60);
    }
    if (uVar14 < 0xb) {
      uVar17 = (uint)&uStack_60 | 1;
      uStack_60 = CONCAT31(uStack_60._1_3_,(char)(uVar14 << 1));
      if (uVar14 != 0) goto LAB_7177b614;
    }
    else {
      uVar17 = thunk_MwhHq((uVar14 | 7) + 1);
      uStack_60 = (uVar14 | 7) + 2;
      uStack_5c = uVar14;
      uStack_58 = uVar17;
LAB_7177b614:
      imp___aeabi_memmove(uVar17,iVar8,uVar14);
    }
    *(undefined1 *)(uVar17 + uVar14) = 0;
    FUN_717303d0(&uStack_54,&uStack_60);
    uVar14 = uStack_4c;
    if ((uStack_54 & 1) == 0) {
      uVar14 = (uint)&uStack_54 | 1;
    }
    FUN_71647fdc(uVar14);
    if ((uStack_54 & 1) != 0) {
      qNQrlu(uStack_4c);
    }
    uStack_50 = uStack_58;
    if ((uStack_60 & 1) == 0) goto LAB_7177b678;
  }
  qNQrlu(uStack_50);
LAB_7177b678:
  FUN_71767c84(param_1,0);
  return;
}


// =========================================================================
// Function: FUN_7177c108
// Entry: 0x7177c108 | Size: 2520 bytes
// =========================================================================

void FUN_7177c108(int param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  byte bVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  byte *pbVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  int iStack_48;
  int iStack_44;
  int iStack_3c;
  int iStack_38;
  
  iVar10 = DAT_712017f8;
  if ((*(uint *)(param_1 + 0x28) | 2) == 0xf) {
    DataMemoryBarrier(0xb);
    if (((DAT_711f6de0 & 1) == 0) && (iVar9 = cuKsjVZRyspaVsDnqLy(&DAT_711f6de0), iVar9 != 0)) {
      pcVar8 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fa9bc);
      if (*pcVar8 == '\0') {
        puVar13 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa9ac);
        *puVar13 = 0x7a9ce17c;
        puVar13[1] = 0xdef84591;
        puVar13[2] = 0x74abdc67;
        *(undefined1 *)((int)puVar13 + 0xf) = 1;
        *(undefined4 *)((int)puVar13 + 0xb) = 0x9d4e9874;
        GFDIUClbc_QcPNgD_wH(&LAB_71781f34,puVar13,&DAT_70b0e000);
        puVar14 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa9bc);
        *puVar14 = 1;
      }
      pbVar15 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fa9ac);
      if (pbVar15[0xf] != 0) {
        *pbVar15 = *pbVar15 ^ 0x13;
        pbVar15[1] = pbVar15[1] ^ 0x8f;
        pbVar15[2] = pbVar15[2] ^ 0xdf;
        pbVar15[3] = pbVar15[3] ^ 0x15;
        pbVar15[0xf] = 0;
        pbVar15[4] = ~pbVar15[4];
        pbVar15[5] = pbVar15[5] ^ 0x2b;
        pbVar15[6] = pbVar15[6] ^ 0x9d;
        pbVar15[7] = pbVar15[7] ^ 0xbd;
        pbVar15[8] = pbVar15[8] ^ 0x13;
        pbVar15[9] = pbVar15[9] ^ 0x8f;
        pbVar15[10] = pbVar15[10] ^ 0xdf;
        pbVar15[0xb] = pbVar15[0xb] ^ 0x15;
        pbVar15[0xc] = ~pbVar15[0xc];
        pbVar15[0xd] = pbVar15[0xd] ^ 0x2b;
        pbVar15[0xe] = pbVar15[0xe] ^ 0x9d;
      }
      DAT_711f6ddc = FUN_71885ba4(pbVar15,0);
      SixizuLbAnqfgRApsCY(&DAT_711f6de0);
    }
    uVar16 = DAT_711f6ddc;
    imp___aeabi_memclr4(&uStack_54,0x30);
    uStack_58 = uVar16;
    pcVar8 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fa9dc);
    if (*pcVar8 == '\0') {
      puVar13 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa9cc);
      *(undefined1 *)((int)puVar13 + 0x17) = 1;
      uVar5 = DAT_700852c0;
      uVar4 = DAT_700852bc;
      uVar3 = DAT_700852b8;
      uVar11 = DAT_700852b4;
      *puVar13 = DAT_700852b0;
      puVar13[1] = uVar11;
      puVar13[2] = uVar3;
      puVar13[3] = uVar4;
      puVar13[4] = uVar5;
      uVar6 = DAT_700852c6;
      *(undefined2 *)(puVar13 + 5) = DAT_700852c4;
      *(undefined1 *)((int)puVar13 + 0x16) = uVar6;
      GFDIUClbc_QcPNgD_wH(&LAB_71781f64,puVar13,&DAT_70b0e000);
      puVar14 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa9dc);
      *puVar14 = 1;
    }
    iVar9 = XcxSszXLPjQrEGhecEv_(&DAT_700fa9cc);
    if (*(char *)(iVar9 + 0x17) != '\0') {
      uVar16 = 0;
      uVar19 = 0;
      do {
        iVar17 = (uVar16 & 7) * 8;
        uVar18 = iVar17 - 0x20;
        bVar7 = (byte)(0x15df8f13 >> iVar17) |
                (byte)(-0x4262d401 << ((uVar16 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar18) {
          bVar7 = (byte)(0xbd9d2bff >> (uVar18 & 0xff));
        }
        *(byte *)(iVar9 + uVar16) = *(byte *)(iVar9 + uVar16) ^ bVar7;
        bVar20 = 0xfffffffe < uVar16;
        bVar1 = uVar19 == 0;
        bVar2 = (0x15 < uVar16) <= uVar19;
        uVar16 = uVar16 + 1;
        uVar19 = uVar19 + bVar20;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x17) = 0;
    }
    uVar16 = imp_strlen(iVar9);
    if (0xfffffff7 < uVar16) {
                    /* WARNING: Subroutine does not return */
      FUN_712f6c1c(&uStack_70);
    }
    if (uVar16 < 0xb) {
      uVar19 = (uint)&uStack_70 | 1;
      uStack_70 = CONCAT31(uStack_70._1_3_,(char)(uVar16 << 1));
      if (uVar16 != 0) goto LAB_7177c328;
    }
    else {
      uVar19 = thunk_MwhHq((uVar16 | 7) + 1);
      uStack_70 = (uVar16 | 7) + 2;
      uStack_6c = uVar16;
      uStack_68 = uVar19;
LAB_7177c328:
      imp___aeabi_memmove(uVar19,iVar9,uVar16);
    }
    *(undefined1 *)(uVar19 + uVar16) = 0;
    FUN_717300d8(&uStack_64,&uStack_70);
    FUN_71524948(&uStack_58,&uStack_64);
    uVar11 = FUN_713a1f9c(&uStack_58,0);
    uVar11 = FUN_713a1f9c(uVar11,0);
    cfqspBX_JrdDvACwYrAyrngjQ(iVar10 + 0x34);
    piVar12 = (int *)thunk_MwhHq(0x3c);
    *piVar12 = 0;
    piVar12[1] = 0;
    FUN_713a10f8(piVar12 + 2,uVar11);
    piVar12[1] = iVar10 + 0x38;
    iVar9 = *(int *)(iVar10 + 0x38);
    *piVar12 = iVar9;
    *(int **)(iVar9 + 4) = piVar12;
    *(int **)(iVar10 + 0x38) = piVar12;
    *(int *)(iVar10 + 0x40) = *(int *)(iVar10 + 0x40) + 1;
    QgduklVhdVlmSiqzGQeutncbrNj(iVar10 + 0x34);
    if ((uStack_64 & 1) != 0) {
      qNQrlu(uStack_5c);
    }
    if ((uStack_70 & 1) != 0) {
      qNQrlu(uStack_68);
    }
    if (iStack_3c != 0) {
      iStack_38 = iStack_3c;
      qNQrlu();
    }
    if (iStack_48 != 0) {
      iStack_44 = iStack_48;
      qNQrlu();
    }
    if (uStack_54 == 0) goto LAB_7177c4b8;
    uStack_50 = uStack_54;
  }
  else {
    pcVar8 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fa9fc);
    if (*pcVar8 == '\0') {
      puVar13 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa9ec);
      *(undefined1 *)((int)puVar13 + 0x17) = 1;
      uVar5 = DAT_700852d8;
      uVar4 = DAT_700852d4;
      uVar3 = DAT_700852d0;
      uVar11 = DAT_700852cc;
      *puVar13 = DAT_700852c8;
      puVar13[1] = uVar11;
      puVar13[2] = uVar3;
      puVar13[3] = uVar4;
      puVar13[4] = uVar5;
      uVar6 = DAT_700852de;
      *(undefined2 *)(puVar13 + 5) = DAT_700852dc;
      *(undefined1 *)((int)puVar13 + 0x16) = uVar6;
      GFDIUClbc_QcPNgD_wH(&LAB_71781f9c,puVar13,&DAT_70b0e000);
      puVar14 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa9fc);
      *puVar14 = 1;
    }
    iVar10 = XcxSszXLPjQrEGhecEv_(&DAT_700fa9ec);
    if (*(char *)(iVar10 + 0x17) != '\0') {
      uVar16 = 0;
      uVar19 = 0;
      do {
        iVar9 = (uVar16 & 7) * 8;
        uVar18 = iVar9 - 0x20;
        bVar7 = (byte)(0x23b109cd >> iVar9) |
                (byte)(0x353b47d9 << ((uVar16 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar18) {
          bVar7 = (byte)(0x353b47d9 >> (uVar18 & 0xff));
        }
        *(byte *)(iVar10 + uVar16) = *(byte *)(iVar10 + uVar16) ^ bVar7;
        bVar20 = 0xfffffffe < uVar16;
        bVar1 = uVar19 == 0;
        bVar2 = (0x15 < uVar16) <= uVar19;
        uVar16 = uVar16 + 1;
        uVar19 = uVar19 + bVar20;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar10 + 0x17) = 0;
    }
    uVar16 = imp_strlen(iVar10);
    if (0xfffffff7 < uVar16) {
                    /* WARNING: Subroutine does not return */
      FUN_712f6c1c(&uStack_64);
    }
    if (uVar16 < 0xb) {
      uVar19 = (uint)&uStack_64 | 1;
      uStack_64 = CONCAT31(uStack_64._1_3_,(char)(uVar16 << 1));
      if (uVar16 != 0) goto LAB_7177c454;
    }
    else {
      uVar19 = thunk_MwhHq((uVar16 | 7) + 1);
      uStack_64 = (uVar16 | 7) + 2;
      uStack_60 = uVar16;
      uStack_5c = uVar19;
LAB_7177c454:
      imp___aeabi_memmove(uVar19,iVar10,uVar16);
    }
    *(undefined1 *)(uVar19 + uVar16) = 0;
    FUN_717303d0(&uStack_58,&uStack_64);
    uVar16 = uStack_50;
    if ((uStack_58 & 1) == 0) {
      uVar16 = (uint)&uStack_58 | 1;
    }
    FUN_71647fdc(uVar16);
    if ((uStack_58 & 1) != 0) {
      qNQrlu(uStack_50);
    }
    uStack_54 = uStack_5c;
    if ((uStack_64 & 1) == 0) goto LAB_7177c4b8;
  }
  qNQrlu(uStack_54);
LAB_7177c4b8:
  FUN_71767c84(param_1,1);
  return;
}


// =========================================================================
// Function: FUN_7177cf58
// Entry: 0x7177cf58 | Size: 4068 bytes
// =========================================================================

/* WARNING: Type propagation algorithm not settling */

void FUN_7177cf58(int param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  undefined2 uVar4;
  undefined3 uVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  byte bVar12;
  uint uVar13;
  undefined4 *puVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  char *pcVar20;
  uint *puVar21;
  byte *pbVar22;
  byte bVar23;
  uint uVar24;
  uint uVar25;
  undefined8 uVar26;
  undefined4 uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  byte bStack_78;
  byte bStack_77;
  byte bStack_76;
  byte bStack_75;
  byte bStack_74;
  byte bStack_73;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint *puStack_5c;
  uint uStack_58;
  char cStack_54;
  char cStack_53;
  byte bStack_52;
  byte bStack_51;
  uint uStack_50;
  uint *puStack_4c;
  uint uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined2 uStack_38;
  undefined4 uStack_34;
  byte bStack_2f;
  byte bStack_2e;
  byte bStack_2d;
  undefined4 uStack_2c;
  byte bStack_28;
  byte bStack_26;
  
  pbVar22 = (byte *)&uStack_70;
  uVar24 = *(uint *)(param_2 + 0xc);
  iVar6 = *(int *)(param_2 + 0x14);
  FUN_7136cdfc(pbVar22);
  puVar21 = &uStack_50;
  uVar25 = 0;
  uStack_58 = 0;
  puStack_5c = (uint *)0x0;
  uStack_60 = 0;
  uStack_64 = 0;
  FUN_7136cdfc(puVar21);
  FUN_7136cdfc(&uStack_44);
  if (*(int *)(param_1 + 0x28) != 0xe) {
    return;
  }
  uVar16 = uVar24 * 8;
  imp___aeabi_memclr8(&bStack_78,0x48);
  uVar18 = (uint)(7 < (int)uVar16);
  uVar9 = uVar18 * 8;
  if ((int)uVar16 < (int)((uVar18 | 2) * 8)) {
    uStack_94 = 0;
    if ((int)uVar16 <= (int)uVar9) goto LAB_7177d054;
LAB_7177d03c:
    uVar18 = uVar9 >> 3;
    uVar9 = uVar9 + 1;
    if ((*(byte *)(iVar6 + uVar18) & 0x80) != 0) goto LAB_7177d054;
  }
  else {
    uStack_94 = (uint)*(byte *)(iVar6 + uVar18);
    uVar25 = uVar9 + 8;
    uVar9 = uVar9 | 0x10;
    uVar25 = (uint)*(byte *)(iVar6 + (uVar25 >> 3));
    if ((int)uVar9 < (int)uVar16) goto LAB_7177d03c;
LAB_7177d054:
    if ((int)(uVar9 + 0x10) <= (int)uVar16) {
      uVar18 = uVar9 & 7;
      pcVar20 = (char *)(iVar6 + (uVar9 >> 3));
      bVar23 = *pcVar20 << uVar18;
      if (uVar18 != 0) {
        bVar23 = bVar23 | (byte)pcVar20[1] >> (8 - uVar18 & 0xff);
      }
      puVar21 = (uint *)0x0;
      pbVar7 = (byte *)(iVar6 + (uVar9 + 8 >> 3));
      uVar24 = (uint)*pbVar7 << uVar18;
      bVar2 = (byte)uVar24;
      if (uVar18 != 0) {
        bVar2 = bVar2 | pbVar7[1] >> (8 - uVar18 & 0xff);
      }
      _bStack_78 = CONCAT11(bVar2,bVar23);
      uVar9 = uVar9 + 0x10;
    }
  }
  if ((((int)uVar16 <= (int)uVar9) ||
      (uVar18 = uVar9 >> 3, uVar13 = uVar9 + 1, uVar8 = uVar9 & 7, uVar9 = uVar13,
      ((uint)*(byte *)(iVar6 + uVar18) << uVar8 & 0x80) != 0)) &&
     (uVar13 = uVar9, (int)(uVar9 + 0x10) <= (int)uVar16)) {
    uVar18 = uVar9 & 7;
    pcVar20 = (char *)(iVar6 + (uVar9 >> 3));
    bVar23 = *pcVar20 << uVar18;
    if (uVar18 != 0) {
      bVar23 = bVar23 | (byte)pcVar20[1] >> (8 - uVar18 & 0xff);
    }
    puVar21 = (uint *)0x0;
    pbVar7 = (byte *)(iVar6 + (uVar9 + 8 >> 3));
    uVar24 = (uint)*pbVar7 << uVar18;
    bVar2 = (byte)uVar24;
    if (uVar18 != 0) {
      bVar2 = bVar2 | pbVar7[1] >> (8 - uVar18 & 0xff);
    }
    _bStack_76 = CONCAT11(bVar2,bVar23);
    uVar13 = uVar9 + 0x10;
  }
  uVar9 = uVar13 + 0x10;
  if ((int)uVar9 <= (int)uVar16) {
    uVar18 = uVar13 & 7;
    pcVar20 = (char *)(iVar6 + (uVar13 >> 3));
    bVar23 = *pcVar20 << uVar18;
    if (uVar18 != 0) {
      bVar23 = bVar23 | (byte)pcVar20[1] >> (8 - uVar18 & 0xff);
    }
    puVar21 = (uint *)0x0;
    pbVar7 = (byte *)(iVar6 + (uVar13 + 8 >> 3));
    uVar24 = (uint)*pbVar7 << uVar18;
    _bStack_74 = CONCAT11((byte)uVar24,bVar23);
    uVar13 = uVar9;
    if (uVar18 != 0) {
      _bStack_74 = CONCAT11((byte)uVar24 | pbVar7[1] >> (8 - uVar18 & 0xff),bVar23);
    }
  }
  uVar18 = uVar13 + 0x60;
  uVar9 = uVar13 & 7;
  if (uVar9 == 0) {
    if ((int)uVar18 <= (int)uVar16) {
      puVar14 = (undefined4 *)(iVar6 + (uVar13 >> 3));
      uStack_70 = *puVar14;
      uStack_6c = puVar14[1];
      uStack_68 = puVar14[2];
      uVar13 = uVar18;
    }
  }
  else if ((int)uVar18 <= (int)uVar16) {
    uVar18 = 0x60;
    uStack_70 = 0;
    uStack_6c = 0;
    uStack_68 = 0;
    do {
      puVar21 = (uint *)(uint)*pbVar22;
      pbVar7 = (byte *)(iVar6 + ((int)uVar13 >> 3));
      uVar13 = uVar13 + 8;
      uVar24 = (uint)puVar21 | (uint)*pbVar7 << uVar9;
      *pbVar22 = (byte)uVar24;
      if (8 - uVar9 < uVar18) {
        *pbVar22 = (byte)uVar24 | pbVar7[1] >> (8 - uVar9 & 0xff);
      }
      pbVar22 = pbVar22 + 1;
      uVar18 = uVar18 - 8;
    } while (uVar18 != 0);
  }
  uVar9 = uVar25;
  if ((int)uVar13 < (int)uVar16) {
    iVar15 = (int)uVar13 >> 3;
    uVar9 = uVar13 & 7;
    uVar13 = uVar13 + 1;
    uVar9 = ((uint)*(byte *)(iVar6 + iVar15) << uVar9 & 0xff) >> 7;
  }
  if ((int)uVar13 < (int)uVar16) {
    iVar15 = (int)uVar13 >> 3;
    uVar18 = uVar13 & 7;
    uVar13 = uVar13 + 1;
    uStack_90 = ((uint)*(byte *)(iVar6 + iVar15) << uVar18 & 0xff) >> 7;
  }
  if ((int)uVar13 < (int)uVar16) {
    iVar15 = (int)uVar13 >> 3;
    uVar18 = uVar13 & 7;
    uVar13 = uVar13 + 1;
    uStack_98 = ((uint)*(byte *)(iVar6 + iVar15) << uVar18 & 0xff) >> 7;
  }
  if ((int)uVar13 < (int)uVar16) {
    iVar15 = (int)uVar13 >> 3;
    uVar18 = uVar13 & 7;
    uVar13 = uVar13 + 1;
    uStack_9c = ((uint)*(byte *)(iVar6 + iVar15) << uVar18 & 0xff) >> 7;
  }
  uVar18 = uVar13 + 0x10;
  if ((int)uVar18 <= (int)uVar16) {
    uVar18 = uVar13 & 7;
    pcVar20 = (char *)(iVar6 + ((int)uVar13 >> 3));
    cVar1 = *pcVar20;
    uVar24 = 0;
    if (uVar18 != 0) {
      pcVar20 = (char *)(uint)(byte)pcVar20[1];
    }
    bVar23 = cVar1 << uVar18;
    uVar8 = (uint)uStack_2c >> 8;
    if (uVar18 != 0) {
      bVar23 = bVar23 | (byte)((uint)pcVar20 >> (8 - uVar18 & 0xff));
    }
    uStack_2c = CONCAT31((int3)uVar8,bVar23);
    pcVar20 = (char *)(iVar6 + ((int)(uVar13 + 8) >> 3));
    bStack_26 = *pcVar20 << uVar18;
    if (uVar18 != 0) {
      bStack_26 = bStack_26 | (byte)pcVar20[1] >> (8 - uVar18 & 0xff);
    }
    uVar18 = uVar13 + 0x20;
    uVar13 = uVar13 + 0x10;
  }
  if ((int)uVar18 <= (int)uVar16) {
    uVar18 = uVar13 & 7;
    pcVar20 = (char *)(iVar6 + ((int)uVar13 >> 3));
    cVar1 = *pcVar20;
    uVar24 = 0;
    if (uVar18 != 0) {
      pcVar20 = (char *)(uint)(byte)pcVar20[1];
    }
    bStack_28 = cVar1 << uVar18;
    if (uVar18 != 0) {
      bStack_28 = bStack_28 | (byte)((uint)pcVar20 >> (8 - uVar18 & 0xff));
    }
    pcVar20 = (char *)(iVar6 + ((int)(uVar13 + 8) >> 3));
    bStack_2d = *pcVar20 << uVar18;
    if (uVar18 != 0) {
      bStack_2d = bStack_2d | (byte)pcVar20[1] >> (8 - uVar18 & 0xff);
    }
    uVar18 = uVar13 + 0x20;
    uVar13 = uVar13 + 0x10;
  }
  uVar8 = uVar16;
  if ((int)uVar18 <= (int)uVar16) {
    uVar24 = uVar13 & 7;
    pcVar20 = (char *)(iVar6 + ((int)uVar13 >> 3));
    cVar1 = *pcVar20;
    if (uVar24 != 0) {
      pcVar20 = (char *)(uint)(byte)pcVar20[1];
    }
    bStack_2e = cVar1 << uVar24;
    if (uVar24 != 0) {
      bStack_2e = bStack_2e | (byte)((uint)pcVar20 >> (8 - uVar24 & 0xff));
    }
    pcVar20 = (char *)(iVar6 + ((int)(uVar13 + 8) >> 3));
    bStack_2f = *pcVar20 << uVar24;
    if (uVar24 != 0) {
      bStack_2f = bStack_2f | (byte)pcVar20[1] >> (8 - uVar24 & 0xff);
    }
    uVar26 = FUN_71ba1da0(CONCAT11(bStack_26,(undefined1)uStack_2c));
    FUN_71ba0f98((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),0,0x40efffe0);
    uVar8 = FUN_71ba242c();
    uVar26 = FUN_71ba1da0(CONCAT11(bStack_2d,bStack_28));
    FUN_71ba0f98((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),0,0x40efffe0);
    puVar21 = (uint *)FUN_71ba242c();
    uVar26 = FUN_71ba1da0(CONCAT11(bStack_2f,bStack_2e));
    FUN_71ba0f98((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),0,0x40efffe0);
    uVar24 = FUN_71ba242c();
    if ((uStack_90 & 0xff) != 0) {
      uVar8 = uVar8 ^ 0x80000000;
    }
    uVar10 = FUN_71ba21e8(uVar8,uVar8);
    uVar10 = FUN_71ba240c(0x3f800000,uVar10);
    if ((uStack_98 & 0xff) != 0) {
      puVar21 = (uint *)((uint)puVar21 ^ 0x80000000);
    }
    uVar11 = FUN_71ba21e8(puVar21,puVar21);
    uVar10 = FUN_71ba240c(uVar10,uVar11);
    if ((uStack_9c & 0xff) != 0) {
      uVar24 = uVar24 ^ 0x80000000;
    }
    uVar11 = FUN_71ba21e8(uVar24,uVar24);
    uVar10 = FUN_71ba240c(uVar10,uVar11);
    iVar15 = FUN_71ba2d10(uVar10,0);
    if (iVar15 != 0) {
      uVar10 = 0;
    }
    uVar18 = imp_sqrtf(uVar10);
    uVar13 = uVar13 + 0x10;
    if (uVar9 != 0) {
      uVar18 = uVar18 ^ 0x80000000;
    }
  }
  cStack_53 = '\0';
  uVar9 = uVar13 + 8;
  if ((int)uVar16 < (int)uVar9) {
    uVar17 = 0;
    uVar19 = 0;
    uVar9 = uVar13;
    cStack_53 = '\0';
  }
  else {
    uVar17 = uVar13 & 7;
    pbVar22 = (byte *)(iVar6 + ((int)uVar13 >> 3));
    bVar23 = *pbVar22;
    if (uVar17 != 0) {
      pbVar22 = (byte *)(uint)pbVar22[1];
    }
    uVar19 = (uint)bVar23 << uVar17;
    if (uVar17 != 0) {
      uVar19 = uVar19 | (uint)pbVar22 >> (8 - uVar17 & 0xff);
    }
    uVar13 = uVar19 & 0xf;
    uVar19 = uVar19 & 0xff;
    uVar17 = uVar19 >> 4;
    if (uVar13 == 0xf) {
      cStack_53 = 'd';
    }
    else if (uVar13 != 0) {
      cStack_53 = (char)uVar13 * '\a';
    }
  }
  cStack_54 = (char)uVar17 * '\a';
  if (uVar19 < 0x10) {
    cStack_54 = '\0';
  }
  if (uVar17 == 0xf) {
    cStack_54 = 'd';
  }
  iVar15 = uVar9 + 8;
  if (iVar15 <= (int)uVar16) {
    uVar13 = uVar9 & 7;
    pcVar20 = (char *)(iVar6 + ((int)uVar9 >> 3));
    bStack_52 = *pcVar20 << uVar13;
    if (uVar13 != 0) {
      bStack_52 = bStack_52 | (byte)pcVar20[1] >> (8 - uVar13 & 0xff);
    }
    iVar15 = uVar9 + 0x10;
    uVar9 = uVar9 + 8;
  }
  if (iVar15 <= (int)uVar16) {
    uVar13 = uVar9 & 7;
    pcVar20 = (char *)(iVar6 + ((int)uVar9 >> 3));
    uVar9 = uVar9 + 8;
    bStack_51 = *pcVar20 << uVar13;
    if (uVar13 != 0) {
      bStack_51 = bStack_51 | (byte)pcVar20[1] >> (8 - uVar13 & 0xff);
    }
  }
  uVar13 = uVar9 + 0x20;
  uStack_64 = uVar18;
  uStack_60 = uVar8;
  puStack_5c = puVar21;
  uStack_58 = uVar24;
  if ((int)uVar13 <= (int)uVar16) {
    uVar18 = uVar9 & 7;
    pcVar20 = (char *)(iVar6 + ((int)uVar9 >> 3));
    cVar1 = *pcVar20;
    if (uVar18 != 0) {
      pcVar20 = (char *)(uint)(byte)pcVar20[1];
    }
    bVar23 = cVar1 << uVar18;
    uVar17 = 8 - uVar18;
    if (uVar18 != 0) {
      bVar23 = bVar23 | (byte)((uint)pcVar20 >> (uVar17 & 0xff));
    }
    pcVar20 = (char *)(iVar6 + ((int)(uVar9 + 8) >> 3));
    cVar1 = *pcVar20;
    if (uVar18 != 0) {
      pcVar20 = (char *)(uint)(byte)pcVar20[1];
    }
    bVar2 = cVar1 << uVar18;
    if (uVar18 != 0) {
      bVar2 = bVar2 | (byte)((uint)pcVar20 >> (uVar17 & 0xff));
    }
    pcVar20 = (char *)(iVar6 + ((int)(uVar9 + 0x10) >> 3));
    cVar1 = *pcVar20;
    if (uVar18 != 0) {
      pcVar20 = (char *)(uint)(byte)pcVar20[1];
    }
    bVar3 = cVar1 << uVar18;
    if (uVar18 != 0) {
      bVar3 = bVar3 | (byte)((uint)pcVar20 >> (uVar17 & 0xff));
    }
    pcVar20 = (char *)(iVar6 + ((int)(uVar9 + 0x18) >> 3));
    cVar1 = *pcVar20;
    if (uVar18 != 0) {
      pcVar20 = (char *)(uint)(byte)pcVar20[1];
    }
    bVar12 = cVar1 << uVar18;
    if (uVar18 != 0) {
      bVar12 = bVar12 | (byte)((uint)pcVar20 >> (uVar17 & 0xff));
    }
    uStack_2c = CONCAT13(bVar12,CONCAT12(bVar3,CONCAT11(bVar2,bVar23)));
    uVar10 = uStack_2c;
    iVar15 = FUN_71ba2cf0(uStack_2c,0);
    if (iVar15 == 0) {
      iVar15 = uVar9 + 0x30;
      if (iVar15 <= (int)uVar16) {
        uVar18 = uVar13 & 7;
        pcVar20 = (char *)(iVar6 + ((int)uVar13 >> 3));
        cVar1 = *pcVar20;
        if (uVar18 != 0) {
          pcVar20 = (char *)(uint)(byte)pcVar20[1];
        }
        bStack_26 = cVar1 << uVar18;
        if (uVar18 != 0) {
          bStack_26 = bStack_26 | (byte)((uint)pcVar20 >> (8 - uVar18 & 0xff));
        }
        pcVar20 = (char *)(iVar6 + ((int)(uVar9 + 0x28) >> 3));
        bStack_28 = *pcVar20 << uVar18;
        if (uVar18 != 0) {
          bStack_28 = bStack_28 | (byte)pcVar20[1] >> (8 - uVar18 & 0xff);
        }
        uVar11 = FUN_71ba1e0c(CONCAT11(bStack_28,bStack_26));
        uVar11 = FUN_71ba13e0(uVar11,0x46ffff00);
        uStack_9c = FUN_71ba0b38(uVar11,0xbf800000);
        iVar15 = uVar9 + 0x40;
        uVar13 = uVar9 + 0x30;
      }
      if (iVar15 <= (int)uVar16) {
        uVar9 = uVar13 & 7;
        pcVar20 = (char *)(iVar6 + ((int)uVar13 >> 3));
        cVar1 = *pcVar20;
        if (uVar9 != 0) {
          pcVar20 = (char *)(uint)(byte)pcVar20[1];
        }
        bStack_26 = cVar1 << uVar9;
        if (uVar9 != 0) {
          bStack_26 = bStack_26 | (byte)((uint)pcVar20 >> (8 - uVar9 & 0xff));
        }
        pcVar20 = (char *)(iVar6 + ((int)(uVar13 + 8) >> 3));
        bStack_28 = *pcVar20 << uVar9;
        if (uVar9 != 0) {
          bStack_28 = bStack_28 | (byte)pcVar20[1] >> (8 - uVar9 & 0xff);
        }
        uVar11 = FUN_71ba1e0c(CONCAT11(bStack_28,bStack_26));
        uVar11 = FUN_71ba13e0(uVar11,0x46ffff00);
        uStack_a0 = FUN_71ba0b38(uVar11,0xbf800000);
        iVar15 = uVar13 + 0x20;
        uVar13 = uVar13 + 0x10;
      }
      uVar9 = uVar13;
      if (iVar15 <= (int)uVar16) {
        uVar24 = uVar13 & 7;
        pcVar20 = (char *)(iVar6 + ((int)uVar13 >> 3));
        cVar1 = *pcVar20;
        if (uVar24 != 0) {
          pcVar20 = (char *)(uint)(byte)pcVar20[1];
        }
        bStack_26 = cVar1 << uVar24;
        if (uVar24 != 0) {
          bStack_26 = bStack_26 | (byte)((uint)pcVar20 >> (8 - uVar24 & 0xff));
        }
        pcVar20 = (char *)(iVar6 + ((int)(uVar13 + 8) >> 3));
        bStack_28 = *pcVar20 << uVar24;
        if (uVar24 != 0) {
          bStack_28 = bStack_28 | (byte)pcVar20[1] >> (8 - uVar24 & 0xff);
        }
        uVar4 = CONCAT11(bStack_28,bStack_26);
        uVar8 = FUN_71ba21e8(uVar10,uStack_9c);
        puVar21 = (uint *)FUN_71ba21e8(uVar10,uStack_a0);
        uVar11 = FUN_71ba1e0c(uVar4);
        uVar11 = FUN_71ba13e0(uVar11,0x46ffff00);
        uVar11 = FUN_71ba0b38(uVar11,0xbf800000);
        uVar24 = FUN_71ba21e8(uVar10,uVar11);
        uVar9 = uVar13 + 0x10;
      }
    }
    else {
      uVar8 = 0;
      puVar21 = (uint *)0x0;
      uVar24 = 0;
      uVar9 = uVar13;
    }
  }
  uVar18 = uVar9;
  if (((int)uVar9 < (int)uVar16) &&
     (uVar18 = uVar9 + 1, ((uint)*(byte *)(iVar6 + ((int)uVar9 >> 3)) << (uVar9 & 7) & 0x80) != 0))
  {
    uVar13 = uVar9 + 0x11;
    if ((int)uVar13 <= (int)uVar16) {
      uVar17 = uVar18 & 7;
      pcVar20 = (char *)(iVar6 + ((int)uVar18 >> 3));
      bVar23 = *pcVar20 << uVar17;
      if (uVar17 != 0) {
        bVar23 = bVar23 | (byte)pcVar20[1] >> (8 - uVar17 & 0xff);
      }
      pcVar20 = (char *)(iVar6 + ((int)(uVar9 + 9) >> 3));
      bVar2 = *pcVar20 << uVar17;
      uStack_38 = CONCAT11(bVar2,bVar23);
      uVar18 = uVar13;
      if (uVar17 != 0) {
        uStack_38 = CONCAT11(bVar2 | (byte)pcVar20[1] >> (8 - uVar17 & 0xff),bVar23);
      }
    }
    iVar15 = uVar18 + 0x20;
    if (iVar15 <= (int)uVar16) {
      uVar13 = uVar18 & 7;
      pcVar20 = (char *)(iVar6 + ((int)uVar18 >> 3));
      bVar23 = *pcVar20 << uVar13;
      uVar9 = 8 - uVar13;
      if (uVar13 != 0) {
        bVar23 = bVar23 | (byte)pcVar20[1] >> (uVar9 & 0xff);
      }
      pcVar20 = (char *)(iVar6 + ((int)(uVar18 + 8) >> 3));
      bVar2 = *pcVar20 << uVar13;
      if (uVar13 != 0) {
        bVar2 = bVar2 | (byte)pcVar20[1] >> (uVar9 & 0xff);
      }
      pcVar20 = (char *)(iVar6 + ((int)(uVar18 + 0x10) >> 3));
      bVar3 = *pcVar20 << uVar13;
      if (uVar13 != 0) {
        bVar3 = bVar3 | (byte)pcVar20[1] >> (uVar9 & 0xff);
      }
      pcVar20 = (char *)(iVar6 + ((int)(uVar18 + 0x18) >> 3));
      bVar12 = *pcVar20 << uVar13;
      if (uVar13 != 0) {
        bVar12 = bVar12 | (byte)pcVar20[1] >> (uVar9 & 0xff);
      }
      uStack_44 = CONCAT13(bVar12,CONCAT12(bVar3,CONCAT11(bVar2,bVar23)));
      iVar15 = uVar18 + 0x40;
      uVar18 = uVar18 + 0x20;
    }
    if (iVar15 <= (int)uVar16) {
      uVar13 = uVar18 & 7;
      pcVar20 = (char *)(iVar6 + ((int)uVar18 >> 3));
      bVar23 = *pcVar20 << uVar13;
      uVar9 = 8 - uVar13;
      if (uVar13 != 0) {
        bVar23 = bVar23 | (byte)pcVar20[1] >> (uVar9 & 0xff);
      }
      pcVar20 = (char *)(iVar6 + ((int)(uVar18 + 8) >> 3));
      bVar2 = *pcVar20 << uVar13;
      if (uVar13 != 0) {
        bVar2 = bVar2 | (byte)pcVar20[1] >> (uVar9 & 0xff);
      }
      pcVar20 = (char *)(iVar6 + ((int)(uVar18 + 0x10) >> 3));
      bVar3 = *pcVar20 << uVar13;
      if (uVar13 != 0) {
        bVar3 = bVar3 | (byte)pcVar20[1] >> (uVar9 & 0xff);
      }
      pcVar20 = (char *)(iVar6 + ((int)(uVar18 + 0x18) >> 3));
      bVar12 = *pcVar20 << uVar13;
      if (uVar13 != 0) {
        bVar12 = bVar12 | (byte)pcVar20[1] >> (uVar9 & 0xff);
      }
      uStack_40 = CONCAT13(bVar12,CONCAT12(bVar3,CONCAT11(bVar2,bVar23)));
      iVar15 = uVar18 + 0x40;
      uVar18 = uVar18 + 0x20;
    }
    if (iVar15 <= (int)uVar16) {
      uVar13 = uVar18 & 7;
      pcVar20 = (char *)(iVar6 + ((int)uVar18 >> 3));
      bVar23 = *pcVar20 << uVar13;
      uVar9 = 8 - uVar13;
      if (uVar13 != 0) {
        bVar23 = bVar23 | (byte)pcVar20[1] >> (uVar9 & 0xff);
      }
      pcVar20 = (char *)(iVar6 + ((int)(uVar18 + 8) >> 3));
      bVar2 = *pcVar20 << uVar13;
      if (uVar13 != 0) {
        bVar2 = bVar2 | (byte)pcVar20[1] >> (uVar9 & 0xff);
      }
      pcVar20 = (char *)(iVar6 + ((int)(uVar18 + 0x10) >> 3));
      bVar3 = *pcVar20 << uVar13;
      if (uVar13 != 0) {
        bVar3 = bVar3 | (byte)pcVar20[1] >> (uVar9 & 0xff);
      }
      pcVar20 = (char *)(iVar6 + ((int)(uVar18 + 0x18) >> 3));
      bVar12 = *pcVar20 << uVar13;
      if (uVar13 != 0) {
        bVar12 = bVar12 | (byte)pcVar20[1] >> (uVar9 & 0xff);
      }
      uStack_3c = CONCAT13(bVar12,CONCAT12(bVar3,CONCAT11(bVar2,bVar23)));
      uVar18 = uVar18 + 0x20;
    }
  }
  else {
    uStack_38 = 0xffff;
  }
  uStack_34 = 0;
  if ((int)uVar18 < (int)uVar16) {
    if (((uint)*(byte *)(iVar6 + ((int)uVar18 >> 3)) << (uVar18 & 7) & 0x80) == 0)
    goto LAB_7177dac8;
    uVar18 = uVar18 + 1;
  }
  if ((int)(uVar18 + 0x20) <= (int)uVar16) {
    uVar16 = uVar18 & 7;
    pcVar20 = (char *)(iVar6 + ((int)uVar18 >> 3));
    bVar23 = *pcVar20 << uVar16;
    if (uVar16 != 0) {
      pcVar20 = (char *)(uint)(byte)pcVar20[1];
    }
    uVar9 = 8 - uVar16;
    if (uVar16 != 0) {
      bVar23 = bVar23 | (byte)((uint)pcVar20 >> (uVar9 & 0xff));
    }
    pcVar20 = (char *)(iVar6 + ((int)(uVar18 + 8) >> 3));
    bVar2 = *pcVar20 << uVar16;
    if (uVar16 != 0) {
      bVar2 = bVar2 | (byte)pcVar20[1] >> (uVar9 & 0xff);
    }
    pcVar20 = (char *)(iVar6 + ((int)(uVar18 + 0x10) >> 3));
    bVar3 = *pcVar20 << uVar16;
    if (uVar16 != 0) {
      bVar3 = bVar3 | (byte)pcVar20[1] >> (uVar9 & 0xff);
    }
    uVar5 = CONCAT12(bVar3,CONCAT11(bVar2,bVar23));
    pcVar20 = (char *)(iVar6 + ((int)(uVar18 + 0x18) >> 3));
    bVar23 = *pcVar20 << uVar16;
    uStack_34 = CONCAT13(bVar23,uVar5);
    if (uVar16 != 0) {
      uStack_34 = CONCAT13(bVar23 | (byte)pcVar20[1] >> (uVar9 & 0xff),uVar5);
    }
  }
LAB_7177dac8:
  if (((*(int *)(param_1 + 0xac) != 0) && (uStack_94 = uStack_94 | uVar25 << 8, uStack_94 < 0x3ed))
     && (iVar6 = *(int *)(*(int *)(param_1 + 0xac) + uStack_94 * 4 + 0x1f8c), iVar6 != 0)) {
    uStack_50 = uVar8;
    puStack_4c = puVar21;
    uStack_48 = uVar24;
    FUN_717a1c74(iVar6,&bStack_78,0,0);
  }
  return;
}


// =========================================================================
// Function: FUN_7177e18c
// Entry: 0x7177e18c | Size: 3688 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x7177e434) */
/* WARNING: Removing unreachable block (ram,0x7177e414) */
/* WARNING: Removing unreachable block (ram,0x7177e408) */
/* WARNING: Removing unreachable block (ram,0x7177e3cc) */
/* WARNING: Removing unreachable block (ram,0x7177e3b0) */
/* WARNING: Removing unreachable block (ram,0x7177e3a4) */
/* WARNING: Removing unreachable block (ram,0x7177e368) */
/* WARNING: Removing unreachable block (ram,0x7177e34c) */
/* WARNING: Removing unreachable block (ram,0x7177e340) */
/* WARNING: Removing unreachable block (ram,0x7177e2b4) */
/* WARNING: Removing unreachable block (ram,0x7177e298) */
/* WARNING: Removing unreachable block (ram,0x7177e28c) */
/* WARNING: Removing unreachable block (ram,0x7177e290) */
/* WARNING: Removing unreachable block (ram,0x7177e2b0) */
/* WARNING: Removing unreachable block (ram,0x7177e2b8) */
/* WARNING: Removing unreachable block (ram,0x7177e344) */
/* WARNING: Removing unreachable block (ram,0x7177e364) */
/* WARNING: Removing unreachable block (ram,0x7177e36c) */
/* WARNING: Removing unreachable block (ram,0x7177e3a8) */
/* WARNING: Removing unreachable block (ram,0x7177e3c8) */
/* WARNING: Removing unreachable block (ram,0x7177e3d0) */
/* WARNING: Removing unreachable block (ram,0x7177e40c) */
/* WARNING: Removing unreachable block (ram,0x7177e430) */
/* WARNING: Removing unreachable block (ram,0x7177e438) */
/* WARNING: Type propagation algorithm not settling */

void FUN_7177e18c(int param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  undefined3 uVar6;
  byte bVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  char *pcVar17;
  undefined4 *puVar18;
  int iVar19;
  byte *pbVar20;
  int iVar21;
  undefined4 *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_80;
  uint uStack_78;
  undefined2 uStack_70;
  undefined2 uStack_6e;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 auStack_4c [4];
  undefined4 uStack_48;
  undefined4 *puStack_44;
  undefined4 uStack_40;
  char cStack_3c;
  char cStack_3b;
  byte bStack_3a;
  undefined1 uStack_39;
  undefined1 uStack_38;
  undefined2 uStack_37;
  undefined4 uStack_35;
  byte bStack_2f;
  byte bStack_2e;
  byte bStack_2d;
  undefined4 uStack_2c;
  byte bStack_28;
  byte bStack_26;
  
  pbVar20 = (byte *)&uStack_58;
  iVar19 = *(int *)(param_2 + 0xc);
  iVar21 = *(int *)(param_2 + 0x14);
  uStack_5c = 0;
  uStack_60 = 0;
  uStack_64 = 0;
  uStack_68 = 0;
  FUN_7136cdfc(pbVar20);
  puVar10 = (undefined4 *)FUN_7136cdfc(auStack_4c);
  if (*(int *)(param_1 + 0x28) != 0xe) {
    return;
  }
  uStack_78 = 0;
  iVar19 = iVar19 * 8;
  imp___aeabi_memclr8(&uStack_70,0x3f);
  uVar15 = (uint)(7 < iVar19);
  puVar8 = (undefined4 *)(uVar15 << 3 | 0x10);
  puVar22 = (undefined4 *)(uVar15 * 8);
  if (iVar19 < (int)puVar8) {
    uStack_80 = 0;
  }
  else {
    uStack_80 = (uint)*(byte *)(iVar21 + uVar15);
    uStack_78 = (uint)*(byte *)(iVar21 + ((uint)(puVar22 + 2) >> 3));
    puVar8 = (undefined4 *)((uint)puVar22 | 0x20);
    puVar22 = (undefined4 *)((uint)puVar22 | 0x10);
  }
  if ((int)puVar8 <= iVar19) {
    uStack_70 = CONCAT11(*(undefined1 *)(iVar21 + ((uint)(puVar22 + 2) >> 3)),
                         *(undefined1 *)(iVar21 + ((uint)puVar22 >> 3)));
    puVar8 = (undefined4 *)((uint)puVar22 | 0x20);
    puVar22 = puVar22 + 4;
  }
  if ((int)puVar8 <= iVar19) {
    uStack_6e = CONCAT11(*(undefined1 *)(iVar21 + ((uint)(puVar22 + 2) >> 3)),
                         *(undefined1 *)(iVar21 + ((uint)puVar22 >> 3)));
    puVar8 = puVar22 + 8;
    puVar22 = puVar22 + 4;
  }
  if ((int)puVar8 <= iVar19) {
    uStack_6c = CONCAT11(*(undefined1 *)(iVar21 + ((uint)((int)puVar22 + 8U) >> 3)),
                         *(undefined1 *)(iVar21 + ((uint)puVar22 >> 3)));
    puVar8 = (undefined4 *)((int)puVar22 + 0x20);
    puVar22 = (undefined4 *)((int)puVar22 + 0x10);
  }
  if ((int)puVar8 <= iVar19) {
    uVar15 = (uint)puVar22 >> 3;
    puVar8 = puVar22 + 2;
    puVar22 = puVar22 + 4;
    uStack_6a = CONCAT11(*(undefined1 *)(iVar21 + ((uint)puVar8 >> 3)),
                         *(undefined1 *)(iVar21 + uVar15));
  }
  if ((int)puVar22 < iVar19) {
    uVar15 = (uint)puVar22 >> 3;
    puVar22 = (undefined4 *)((int)puVar22 + 1);
    uStack_8c = (uint)(*(byte *)(iVar21 + uVar15) >> 7);
  }
  if ((int)puVar22 < iVar19) {
    uVar15 = (uint)puVar22 >> 3;
    uVar16 = (uint)puVar22 & 7;
    puVar22 = (undefined4 *)((int)puVar22 + 1);
    uStack_90 = ((uint)*(byte *)(iVar21 + uVar15) << uVar16 & 0xff) >> 7;
  }
  if ((int)puVar22 < iVar19) {
    uVar15 = (uint)puVar22 >> 3;
    uVar16 = (uint)puVar22 & 7;
    puVar22 = (undefined4 *)((int)puVar22 + 1);
    uStack_94 = ((uint)*(byte *)(iVar21 + uVar15) << uVar16 & 0xff) >> 7;
  }
  if ((int)puVar22 < iVar19) {
    uVar15 = (uint)puVar22 >> 3;
    uVar16 = (uint)puVar22 & 7;
    puVar22 = (undefined4 *)((int)puVar22 + 1);
    uStack_98 = ((uint)*(byte *)(iVar21 + uVar15) << uVar16 & 0xff) >> 7;
  }
  puVar8 = puVar22 + 4;
  if ((int)puVar8 <= iVar19) {
    uVar15 = (uint)puVar22 & 7;
    pcVar17 = (char *)(iVar21 + ((uint)puVar22 >> 3));
    cVar1 = *pcVar17;
    if (uVar15 != 0) {
      pcVar17 = (char *)(uint)(byte)pcVar17[1];
    }
    bVar7 = cVar1 << uVar15;
    if (uVar15 != 0) {
      bVar7 = bVar7 | (byte)((uint)pcVar17 >> (8 - uVar15 & 0xff));
    }
    uStack_2c = CONCAT31(uStack_2c._1_3_,bVar7);
    pcVar17 = (char *)(iVar21 + ((uint)(puVar22 + 2) >> 3));
    bStack_26 = *pcVar17 << uVar15;
    uVar16 = 0;
    if (uVar15 != 0) {
      uVar16 = (uint)(byte)pcVar17[1];
    }
    if (uVar15 != 0) {
      bStack_26 = bStack_26 | (byte)(uVar16 >> (8 - uVar15 & 0xff));
    }
    puVar8 = puVar22 + 8;
    puVar22 = puVar22 + 4;
  }
  if ((int)puVar8 <= iVar19) {
    uVar15 = (uint)puVar22 & 7;
    pcVar17 = (char *)(iVar21 + ((uint)puVar22 >> 3));
    cVar1 = *pcVar17;
    if (uVar15 != 0) {
      pcVar17 = (char *)(uint)(byte)pcVar17[1];
    }
    bStack_28 = cVar1 << uVar15;
    if (uVar15 != 0) {
      bStack_28 = cVar1 << uVar15 | (byte)((uint)pcVar17 >> (8 - uVar15 & 0xff));
    }
    pcVar17 = (char *)(iVar21 + ((uint)(puVar22 + 2) >> 3));
    bStack_2d = *pcVar17 << uVar15;
    uVar16 = 0;
    if (uVar15 != 0) {
      uVar16 = (uint)(byte)pcVar17[1];
    }
    if (uVar15 != 0) {
      bStack_2d = bStack_2d | (byte)(uVar16 >> (8 - uVar15 & 0xff));
    }
    puVar8 = puVar22 + 8;
    puVar22 = puVar22 + 4;
  }
  if ((int)puVar8 <= iVar19) {
    uVar15 = (uint)puVar22 & 7;
    pcVar17 = (char *)(iVar21 + ((uint)puVar22 >> 3));
    cVar1 = *pcVar17;
    if (uVar15 != 0) {
      pcVar17 = (char *)(uint)(byte)pcVar17[1];
    }
    bStack_2e = cVar1 << uVar15;
    if (uVar15 != 0) {
      bStack_2e = bStack_2e | (byte)((uint)pcVar17 >> (8 - uVar15 & 0xff));
    }
    pcVar17 = (char *)(iVar21 + ((uint)(puVar22 + 2) >> 3));
    bStack_2f = *pcVar17 << uVar15;
    if (uVar15 != 0) {
      bStack_2f = bStack_2f | (byte)pcVar17[1] >> (8 - uVar15 & 0xff);
    }
    uVar23 = FUN_71ba1da0(CONCAT11(bStack_26,(undefined1)uStack_2c));
    FUN_71ba0f98((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),0,0x40efffe0);
    uVar15 = FUN_71ba242c();
    uStack_64 = uVar15;
    uVar23 = FUN_71ba1da0(CONCAT11(bStack_2d,bStack_28));
    FUN_71ba0f98((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),0,0x40efffe0);
    uVar16 = FUN_71ba242c();
    uStack_60 = uVar16;
    uVar23 = FUN_71ba1da0(CONCAT11(bStack_2f,bStack_2e));
    FUN_71ba0f98((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),0,0x40efffe0);
    uVar11 = FUN_71ba242c();
    puVar22 = puVar22 + 4;
    if ((uStack_90 & 0xff) != 0) {
      uVar15 = uVar15 ^ 0x80000000;
      uStack_64 = uVar15;
    }
    if ((uStack_94 & 0xff) != 0) {
      uVar16 = uVar16 ^ 0x80000000;
      uStack_60 = uVar16;
    }
    if ((uStack_98 & 0xff) != 0) {
      uVar11 = uVar11 ^ 0x80000000;
    }
    uStack_5c = uVar11;
    uVar12 = FUN_71ba21e8(uVar15,uVar15);
    uVar12 = FUN_71ba240c(0x3f800000,uVar12);
    uVar13 = FUN_71ba21e8(uVar16,uVar16);
    uVar12 = FUN_71ba240c(uVar12,uVar13);
    uVar13 = FUN_71ba21e8(uVar11,uVar11);
    uVar12 = FUN_71ba240c(uVar12,uVar13);
    iVar14 = FUN_71ba2d10(uVar12,0);
    if (iVar14 != 0) {
      uVar12 = 0;
    }
    uStack_68 = imp_sqrtf(uVar12);
    if ((uStack_8c & 0xff) != 0) {
      uStack_68 = uStack_68 ^ 0x80000000;
    }
  }
  puVar8 = puVar22 + 0x18;
  uVar15 = (uint)puVar22 & 7;
  if (uVar15 == 0) {
    if ((int)puVar8 <= iVar19) {
      puVar22 = (undefined4 *)(iVar21 + ((uint)puVar22 >> 3));
      uStack_58 = *puVar22;
      uStack_54 = puVar22[1];
      uStack_50 = puVar22[2];
      puVar22 = puVar8;
    }
  }
  else if ((int)puVar8 <= iVar19) {
    uStack_58 = 0;
    uVar16 = 0x60;
    uStack_54 = 0;
    uStack_50 = 0;
    do {
      pcVar17 = (char *)(iVar21 + ((int)puVar22 >> 3));
      puVar22 = puVar22 + 2;
      bVar7 = *pbVar20 | *pcVar17 << uVar15;
      *pbVar20 = bVar7;
      if (8 - uVar15 < uVar16) {
        *pbVar20 = bVar7 | (byte)pcVar17[1] >> (8 - uVar15 & 0xff);
      }
      pbVar20 = pbVar20 + 1;
      uVar16 = uVar16 - 8;
    } while (uVar16 != 0);
  }
  puVar8 = puVar22 + 8;
  puVar18 = puVar22;
  if ((int)puVar8 <= iVar19) {
    uVar15 = (uint)puVar22 & 7;
    pcVar17 = (char *)(iVar21 + ((int)puVar22 >> 3));
    cVar1 = *pcVar17;
    if (uVar15 != 0) {
      pcVar17 = (char *)(uint)(byte)pcVar17[1];
    }
    bVar7 = cVar1 << uVar15;
    uVar16 = 8 - uVar15;
    if (uVar15 != 0) {
      bVar7 = bVar7 | (byte)((uint)pcVar17 >> (uVar16 & 0xff));
    }
    pcVar17 = (char *)(iVar21 + ((int)(puVar22 + 2) >> 3));
    cVar1 = *pcVar17;
    if (uVar15 != 0) {
      pcVar17 = (char *)(uint)(byte)pcVar17[1];
    }
    bVar3 = cVar1 << uVar15;
    if (uVar15 != 0) {
      bVar3 = bVar3 | (byte)((uint)pcVar17 >> (uVar16 & 0xff));
    }
    pcVar17 = (char *)(iVar21 + ((int)(puVar22 + 4) >> 3));
    cVar1 = *pcVar17;
    if (uVar15 != 0) {
      pcVar17 = (char *)(uint)(byte)pcVar17[1];
    }
    bVar4 = cVar1 << uVar15;
    if (uVar15 != 0) {
      bVar4 = bVar4 | (byte)((uint)pcVar17 >> (uVar16 & 0xff));
    }
    pcVar17 = (char *)(iVar21 + ((int)(puVar22 + 6) >> 3));
    cVar1 = *pcVar17;
    if (uVar15 != 0) {
      pcVar17 = (char *)(uint)(byte)pcVar17[1];
    }
    bVar2 = cVar1 << uVar15;
    if (uVar15 != 0) {
      bVar2 = bVar2 | (byte)((uint)pcVar17 >> (uVar16 & 0xff));
    }
    uStack_2c = CONCAT13(bVar2,CONCAT12(bVar4,CONCAT11(bVar3,bVar7)));
    uVar12 = uStack_2c;
    uVar24 = FUN_71ba2cf0(uStack_2c,0);
    uVar23 = CONCAT44((int)((ulonglong)uVar24 >> 0x20),uStack_8c);
    if ((int)uVar24 == 0) {
      puVar9 = puVar22 + 0xc;
      if ((int)puVar9 <= iVar19) {
        uVar15 = (uint)puVar8 & 7;
        pcVar17 = (char *)(iVar21 + ((int)puVar8 >> 3));
        cVar1 = *pcVar17;
        if (uVar15 != 0) {
          pcVar17 = (char *)(uint)(byte)pcVar17[1];
        }
        bStack_26 = cVar1 << uVar15;
        if (uVar15 != 0) {
          bStack_26 = bStack_26 | (byte)((uint)pcVar17 >> (8 - uVar15 & 0xff));
        }
        pcVar17 = (char *)(iVar21 + ((int)(puVar22 + 10) >> 3));
        bStack_28 = *pcVar17 << uVar15;
        if (uVar15 != 0) {
          bStack_28 = bStack_28 | (byte)pcVar17[1] >> (8 - uVar15 & 0xff);
        }
        uVar13 = FUN_71ba1e0c(CONCAT11(bStack_28,bStack_26));
        uVar13 = FUN_71ba13e0(uVar13,0x46ffff00);
        uVar23 = FUN_71ba0b38(uVar13,0xbf800000);
        uStack_8c = (uint)uVar23;
        puVar9 = puVar22 + 0x10;
        puVar8 = puVar22 + 0xc;
      }
      if ((int)puVar9 <= iVar19) {
        uVar15 = (uint)puVar8 & 7;
        pcVar17 = (char *)(iVar21 + ((int)puVar8 >> 3));
        cVar1 = *pcVar17;
        if (uVar15 != 0) {
          pcVar17 = (char *)(uint)(byte)pcVar17[1];
        }
        bStack_26 = cVar1 << uVar15;
        if (uVar15 != 0) {
          bStack_26 = bStack_26 | (byte)((uint)pcVar17 >> (8 - uVar15 & 0xff));
        }
        pcVar17 = (char *)(iVar21 + ((int)(puVar8 + 2) >> 3));
        bStack_28 = *pcVar17 << uVar15;
        if (uVar15 != 0) {
          bStack_28 = bStack_28 | (byte)pcVar17[1] >> (8 - uVar15 & 0xff);
        }
        uVar13 = FUN_71ba1e0c(CONCAT11(bStack_28,bStack_26));
        uVar13 = FUN_71ba13e0(uVar13,0x46ffff00);
        uVar13 = FUN_71ba0b38(uVar13,0xbf800000);
        uVar23 = CONCAT44(uVar13,uStack_8c);
        puVar9 = puVar8 + 8;
        puVar8 = puVar8 + 4;
      }
      puVar22 = puVar9;
      puVar18 = puVar8;
      if ((int)puVar9 <= iVar19) {
        uStack_8c = (uint)uVar23;
        uVar15 = (uint)puVar8 & 7;
        pcVar17 = (char *)(iVar21 + ((int)puVar8 >> 3));
        cVar1 = *pcVar17;
        if (uVar15 != 0) {
          pcVar17 = (char *)(uint)(byte)pcVar17[1];
        }
        bStack_26 = cVar1 << uVar15;
        if (uVar15 != 0) {
          bStack_26 = bStack_26 | (byte)((uint)pcVar17 >> (8 - uVar15 & 0xff));
        }
        pcVar17 = (char *)(iVar21 + ((int)(puVar8 + 2) >> 3));
        bStack_28 = *pcVar17 << uVar15;
        if (uVar15 != 0) {
          bStack_28 = bStack_28 | (byte)pcVar17[1] >> (8 - uVar15 & 0xff);
        }
        uStack_48 = FUN_71ba21e8(uVar12,(int)((ulonglong)uVar23 >> 0x20));
        bVar3 = bStack_26;
        bVar7 = bStack_28;
        uVar13 = FUN_71ba21e8(uVar12,uStack_8c);
        *puVar10 = uVar13;
        uVar13 = FUN_71ba1e0c(CONCAT11(bVar7,bVar3));
        uVar13 = FUN_71ba13e0(uVar13,0x46ffff00);
        uVar13 = FUN_71ba0b38(uVar13,0xbf800000);
        puStack_44 = (undefined4 *)FUN_71ba21e8(uVar12,uVar13);
        puVar22 = puStack_44;
        puVar18 = puVar8 + 4;
      }
    }
    else {
      uStack_48 = 0;
      puStack_44 = (undefined4 *)0x0;
      *puVar10 = 0;
      puVar22 = puVar10;
      puVar18 = puVar8;
    }
  }
  if ((int)(puVar18 + 4) <= iVar19) {
    uVar15 = (uint)puVar18 & 7;
    pcVar17 = (char *)(iVar21 + ((int)puVar18 >> 3));
    cVar1 = *pcVar17;
    if (uVar15 != 0) {
      pcVar17 = (char *)(uint)(byte)pcVar17[1];
    }
    bVar7 = cVar1 << uVar15;
    if (uVar15 != 0) {
      bVar7 = bVar7 | (byte)((uint)pcVar17 >> (8 - uVar15 & 0xff));
    }
    uStack_2c = CONCAT31(uStack_2c._1_3_,bVar7);
    pcVar17 = (char *)(iVar21 + ((int)(puVar18 + 2) >> 3));
    bStack_26 = *pcVar17 << uVar15;
    if (uVar15 != 0) {
      bStack_26 = bStack_26 | (byte)pcVar17[1] >> (8 - uVar15 & 0xff);
    }
    puVar22 = (undefined4 *)(uint)CONCAT11(bStack_26,bVar7);
    puVar18 = puVar18 + 4;
  }
  uStack_40 = FUN_71ba1e0c((uint)puVar22 & 0xffff);
  puVar10 = puVar18 + 2;
  bVar7 = 0;
  if (iVar19 < (int)puVar10) {
    cStack_3b = '\0';
    uVar15 = 0;
    uVar16 = 0;
    puVar10 = puVar18;
  }
  else {
    uVar15 = (uint)puVar18 & 7;
    pbVar20 = (byte *)(iVar21 + ((int)puVar18 >> 3));
    bVar3 = *pbVar20;
    if (uVar15 != 0) {
      pbVar20 = (byte *)(uint)pbVar20[1];
    }
    uVar16 = (uint)bVar3 << uVar15;
    if (uVar15 != 0) {
      uVar16 = uVar16 | (uint)pbVar20 >> (8 - uVar15 & 0xff);
    }
    uVar11 = uVar16 & 0xf;
    uVar16 = uVar16 & 0xff;
    uVar15 = uVar16 >> 4;
    if (uVar11 == 0xf) {
      cStack_3b = 'd';
    }
    else if (uVar11 == 0) {
      cStack_3b = '\0';
    }
    else {
      cStack_3b = (char)uVar11 * '\a';
    }
  }
  cStack_3c = (char)uVar15 * '\a';
  if (uVar16 < 0x10) {
    cStack_3c = '\0';
  }
  if (uVar15 == 0xf) {
    cStack_3c = 'd';
  }
  if ((int)(puVar10 + 2) <= iVar19) {
    pcVar17 = (char *)(iVar21 + ((int)puVar10 >> 3));
    cVar1 = *pcVar17;
    uVar15 = (uint)puVar10 & 7;
    if (uVar15 != 0) {
      pcVar17 = (char *)(uint)(byte)pcVar17[1];
    }
    bVar7 = cVar1 << uVar15;
    if (uVar15 != 0) {
      bVar7 = bVar7 | (byte)((uint)pcVar17 >> (8 - uVar15 & 0xff));
    }
    bVar7 = bVar7 & 0x3f;
    puVar10 = puVar10 + 2;
  }
  bStack_3a = bStack_3a & 0xc0 | bVar7;
  puVar22 = puVar10;
  if (((int)puVar10 < iVar19) &&
     (puVar22 = (undefined4 *)((int)puVar10 + 1),
     ((uint)*(byte *)(iVar21 + ((int)puVar10 >> 3)) << ((uint)puVar10 & 7) & 0x80) == 0)) {
    puVar10 = puVar22;
    if ((int)puVar22 < iVar19) {
LAB_7177ec68:
      puVar22 = (undefined4 *)((int)puVar10 + 1);
      if (((uint)*(byte *)(iVar21 + ((int)puVar10 >> 3)) << ((uint)puVar10 & 7) & 0x80) != 0)
      goto LAB_7177ec84;
    }
    bVar5 = true;
    if ((int)puVar22 < iVar19) {
LAB_7177eca8:
      puVar10 = (undefined4 *)((int)puVar22 + 1);
      if (((uint)*(byte *)(iVar21 + ((int)puVar22 >> 3)) << ((uint)puVar22 & 7) & 0x80) != 0)
      goto LAB_7177ecc0;
      bVar5 = true;
      goto LAB_7177ed9c;
    }
LAB_7177ed74:
    if (iVar19 <= (int)puVar22) goto LAB_7177eda8;
LAB_7177ed7c:
    if (((uint)*(byte *)(iVar21 + ((int)puVar22 >> 3)) << ((uint)puVar22 & 7) & 0x80) == 0)
    goto LAB_7177ee0c;
    puVar22 = (undefined4 *)((int)puVar22 + 1);
  }
  else {
    uStack_39 = 1;
    puVar10 = puVar22;
    if ((int)puVar22 < iVar19) goto LAB_7177ec68;
LAB_7177ec84:
    uStack_38 = 1;
    puVar10 = puVar22;
    if ((int)puVar22 < iVar19) goto LAB_7177eca8;
LAB_7177ecc0:
    puVar22 = puVar10 + 8;
    bVar5 = false;
    if ((int)puVar22 <= iVar19) {
      pcVar17 = (char *)(iVar21 + ((int)puVar10 >> 3));
      uVar16 = (uint)puVar10 & 7;
      bVar7 = *pcVar17 << uVar16;
      uVar15 = 8 - uVar16;
      if (uVar16 != 0) {
        bVar7 = bVar7 | (byte)pcVar17[1] >> (uVar15 & 0xff);
      }
      pcVar17 = (char *)(iVar21 + ((int)(puVar10 + 2) >> 3));
      bVar3 = *pcVar17 << uVar16;
      if (uVar16 != 0) {
        bVar3 = bVar3 | (byte)pcVar17[1] >> (uVar15 & 0xff);
      }
      pcVar17 = (char *)(iVar21 + ((int)(puVar10 + 4) >> 3));
      bVar4 = *pcVar17 << uVar16;
      if (uVar16 != 0) {
        bVar4 = bVar4 | (byte)pcVar17[1] >> (uVar15 & 0xff);
      }
      uVar6 = CONCAT12(bVar4,CONCAT11(bVar3,bVar7));
      pbVar20 = (byte *)(iVar21 + ((int)(puVar10 + 6) >> 3));
      uStack_35 = CONCAT13((char)((uint)*pbVar20 << uVar16),uVar6);
      if (uVar16 != 0) {
        pbVar20 = (byte *)((uint)*pbVar20 << uVar16 | (uint)(pbVar20[1] >> (uVar15 & 0xff)));
      }
      bVar5 = false;
      if (uVar16 != 0) {
        uStack_35 = CONCAT13((char)pbVar20,uVar6);
      }
      goto LAB_7177ed74;
    }
LAB_7177ed9c:
    puVar22 = puVar10;
    if ((int)puVar22 < iVar19) goto LAB_7177ed7c;
LAB_7177eda8:
    if (bVar5) goto LAB_7177ee0c;
  }
  if ((int)(puVar22 + 4) <= iVar19) {
    uVar15 = (uint)puVar22 & 7;
    pcVar17 = (char *)(iVar21 + ((int)puVar22 >> 3));
    bVar7 = *pcVar17 << uVar15;
    if (uVar15 != 0) {
      bVar7 = bVar7 | (byte)pcVar17[1] >> (8 - uVar15 & 0xff);
    }
    pcVar17 = (char *)(iVar21 + ((int)(puVar22 + 2) >> 3));
    bVar3 = *pcVar17 << uVar15;
    uStack_37 = CONCAT11(bVar3,bVar7);
    if (uVar15 != 0) {
      uStack_37 = CONCAT11(bVar3 | (byte)pcVar17[1] >> (8 - uVar15 & 0xff),bVar7);
    }
  }
LAB_7177ee0c:
  if (((*(int *)(param_1 + 0xac) != 0) &&
      (uStack_80 = uStack_80 | uStack_78 << 8, uStack_80 < 0x3ed)) &&
     (iVar19 = *(int *)(*(int *)(param_1 + 0xac) + uStack_80 * 4 + 0x1f8c), iVar19 != 0)) {
    FUN_717a1fe0(iVar19,&uStack_70,0);
  }
  return;
}


// =========================================================================
// Function: FUN_7177f244
// Entry: 0x7177f244 | Size: 360 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x7177f2d8) */
/* WARNING: Removing unreachable block (ram,0x7177f2e0) */
/* WARNING: Removing unreachable block (ram,0x7177f304) */
/* WARNING: Removing unreachable block (ram,0x7177f320) */
/* WARNING: Removing unreachable block (ram,0x7177f324) */
/* WARNING: Removing unreachable block (ram,0x7177f328) */
/* WARNING: Removing unreachable block (ram,0x7177f32c) */
/* WARNING: Removing unreachable block (ram,0x7177f338) */

void FUN_7177f244(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_40 [12];
  undefined1 auStack_34 [16];
  
  FUN_7136cdfc(auStack_34);
  if (*(int *)(param_1 + 0x28) == 0xe) {
    iVar5 = *(int *)(param_2 + 0x14);
    uVar4 = 0;
    iVar1 = *(int *)(param_2 + 0xc) * 8;
    uVar3 = (uint)(7 < iVar1);
    uVar2 = uVar3 * 8;
    if (*(int *)(param_2 + 0xc) * 8 < (int)(uVar3 << 3 | 0x10)) {
      uVar3 = 0;
    }
    else {
      uVar4 = uVar2 + 8;
      uVar3 = (uint)*(byte *)(iVar5 + uVar3);
      uVar2 = uVar2 | 0x10;
      uVar4 = (uint)*(byte *)(iVar5 + (uVar4 >> 3));
    }
    if ((int)(uVar2 | 0xc0) <= iVar1) {
      imp___aeabi_memcpy(auStack_40,iVar5 + (uVar2 >> 3),0x18);
    }
    if (((*(int *)(param_1 + 0xac) != 0) && (uVar3 = uVar3 | uVar4 << 8, uVar3 < 0x3ed)) &&
       (iVar1 = *(int *)(*(int *)(param_1 + 0xac) + uVar3 * 4 + 0x1f8c), iVar1 != 0)) {
      FUN_717a21d4(iVar1,auStack_40);
    }
  }
  return;
}


// =========================================================================
// Function: FUN_7177f3fc
// Entry: 0x7177f3fc | Size: 984 bytes
// =========================================================================

void FUN_7177f3fc(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uStack_50;
  uint uStack_48;
  uint uStack_44;
  uint uStack_38;
  byte bStack_2d;
  byte bStack_2c;
  byte bStack_2b;
  byte bStack_2a;
  byte bStack_29;
  byte bStack_28;
  byte bStack_27;
  byte bStack_26;
  
  if (*(int *)(param_1 + 0x28) == 0xe) {
    iVar1 = *(int *)(param_2 + 0xc) * 8;
    uVar13 = (uint)(7 < iVar1);
    if ((int)(uVar13 << 3 | 0x20) <= *(int *)(param_2 + 0xc) * 8) {
      iVar11 = *(int *)(param_2 + 0x14);
      uVar7 = uVar13 * 8;
      uVar13 = (uint)*(byte *)(iVar11 + (uVar7 + 0x18 >> 3)) << 0x18 |
               (uint)((byte *)(iVar11 + uVar13))[2] << 0x10 |
               (uint)*(byte *)(iVar11 + (uVar7 + 8 >> 3)) << 8 | (uint)*(byte *)(iVar11 + uVar13);
      if (0 < (int)uVar13) {
        bVar3 = false;
        uStack_50 = (uint)bStack_2d;
        uStack_44 = (uint)bStack_2c;
        uVar14 = (uint)bStack_2b;
        uVar12 = (uint)bStack_29;
        uVar10 = (uint)bStack_28;
        uVar15 = (uint)bStack_26;
        uStack_48 = (uint)bStack_2a;
        uStack_38 = (uint)bStack_27;
        uVar7 = uVar7 | 0x20;
        do {
          uVar4 = uVar7 + 0x10;
          if (iVar1 < (int)uVar4) {
            uVar4 = uVar7;
            if ((int)uVar7 < iVar1) goto LAB_7177f508;
LAB_7177f590:
            if (bVar3) goto LAB_7177f5a0;
            bVar3 = false;
            bVar6 = true;
          }
          else {
            uVar8 = uVar7 & 7;
            pbVar9 = (byte *)(iVar11 + ((int)uVar7 >> 3));
            bVar2 = *pbVar9;
            if (uVar8 != 0) {
              pbVar9 = (byte *)(uint)pbVar9[1];
            }
            uVar15 = (uint)bVar2 << uVar8 & 0xff;
            if (uVar8 != 0) {
              uVar15 = uVar15 | (uint)pbVar9 >> (8 - uVar8 & 0xff);
            }
            pbVar9 = (byte *)(iVar11 + ((int)(uVar7 + 8) >> 3));
            uVar7 = 0;
            if (uVar8 != 0) {
              uVar7 = (uint)pbVar9[1];
            }
            uStack_38 = (uint)*pbVar9 << uVar8 & 0xff;
            if (uVar8 != 0) {
              uStack_38 = uStack_38 | uVar7 >> (8 - uVar8 & 0xff);
            }
            if (iVar1 <= (int)uVar4) goto LAB_7177f590;
LAB_7177f508:
            bVar6 = true;
            if (((uint)*(byte *)(iVar11 + ((int)uVar4 >> 3)) << (uVar4 & 7) & 0x80) == 0) {
              bVar3 = false;
              uVar4 = uVar4 + 1;
            }
            else {
              bVar3 = true;
              uVar4 = uVar4 + 1;
LAB_7177f5a0:
              iVar5 = uVar4 + 0x10;
              if (iVar5 <= iVar1) {
                uVar7 = uVar4 & 7;
                pbVar9 = (byte *)(iVar11 + ((int)uVar4 >> 3));
                bVar2 = *pbVar9;
                if (uVar7 != 0) {
                  pbVar9 = (byte *)(uint)pbVar9[1];
                }
                uVar10 = (uint)bVar2 << uVar7 & 0xff;
                if (uVar7 != 0) {
                  uVar10 = uVar10 | (uint)pbVar9 >> (8 - uVar7 & 0xff);
                }
                pbVar9 = (byte *)(iVar11 + ((int)(uVar4 + 8) >> 3));
                uVar8 = 0;
                if (uVar7 != 0) {
                  uVar8 = (uint)pbVar9[1];
                }
                uVar12 = (uint)*pbVar9 << uVar7 & 0xff;
                if (uVar7 != 0) {
                  uVar12 = uVar12 | uVar8 >> (8 - uVar7 & 0xff);
                }
                iVar5 = uVar4 + 0x20;
                uVar4 = uVar4 + 0x10;
              }
              if (iVar5 <= iVar1) {
                uVar7 = uVar4 & 7;
                pbVar9 = (byte *)(iVar11 + ((int)uVar4 >> 3));
                bVar2 = *pbVar9;
                if (uVar7 != 0) {
                  pbVar9 = (byte *)(uint)pbVar9[1];
                }
                uStack_48 = (uint)bVar2 << uVar7 & 0xff;
                if (uVar7 != 0) {
                  uStack_48 = uStack_48 | (uint)pbVar9 >> (8 - uVar7 & 0xff);
                }
                pbVar9 = (byte *)(iVar11 + ((int)(uVar4 + 8) >> 3));
                uVar8 = 0;
                if (uVar7 != 0) {
                  uVar8 = (uint)pbVar9[1];
                }
                uVar14 = (uint)*pbVar9 << uVar7 & 0xff;
                if (uVar7 != 0) {
                  uVar14 = uVar14 | uVar8 >> (8 - uVar7 & 0xff);
                }
                iVar5 = uVar4 + 0x20;
                uVar4 = uVar4 + 0x10;
              }
              bVar6 = false;
              if (iVar5 <= iVar1) {
                uVar7 = uVar4 & 7;
                pbVar9 = (byte *)(iVar11 + ((int)uVar4 >> 3));
                bVar2 = *pbVar9;
                if (uVar7 != 0) {
                  pbVar9 = (byte *)(uint)pbVar9[1];
                }
                uStack_44 = (uint)bVar2 << uVar7 & 0xff;
                if (uVar7 != 0) {
                  uStack_44 = uStack_44 | (uint)pbVar9 >> (8 - uVar7 & 0xff);
                }
                iVar5 = uVar4 + 8;
                uVar4 = uVar4 + 0x10;
                pbVar9 = (byte *)(iVar11 + (iVar5 >> 3));
                uVar8 = 0;
                if (uVar7 != 0) {
                  uVar8 = (uint)pbVar9[1];
                }
                uStack_50 = (uint)*pbVar9 << uVar7 & 0xff;
                if (uVar7 != 0) {
                  uStack_50 = uStack_50 | uVar8 >> (8 - uVar7 & 0xff);
                }
              }
            }
          }
          uVar8 = uVar15 | uStack_38 << 8;
          uVar7 = uVar8 & 0xffff;
          if (((uVar7 >> 2 < 0xfb) &&
              (*(char *)(*(int *)(param_1 + 0xac) + (uVar8 & 0xffff) + 0x3eec) != '\0')) &&
             (iVar5 = *(int *)(*(int *)(param_1 + 0xac) + uVar7 * 4 + 0x1f8c), iVar5 != 0)) {
            if (bVar6) {
              FUN_717a25f4();
            }
            else {
              FUN_717a2690(iVar5,(int)(short)((ushort)uVar10 | (ushort)(uVar12 << 8)),
                           (int)(short)((ushort)uStack_48 | (ushort)(uVar14 << 8)),
                           (int)(short)((ushort)uStack_44 | (ushort)(uStack_50 << 8)));
            }
          }
          uVar13 = uVar13 - 1;
          uVar7 = uVar4;
        } while (uVar13 != 0);
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_7177f814
// Entry: 0x7177f814 | Size: 376 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x7177f8b4) */
/* WARNING: Removing unreachable block (ram,0x7177f8bc) */
/* WARNING: Removing unreachable block (ram,0x7177f8ec) */
/* WARNING: Removing unreachable block (ram,0x7177f908) */
/* WARNING: Removing unreachable block (ram,0x7177f90c) */
/* WARNING: Removing unreachable block (ram,0x7177f910) */
/* WARNING: Removing unreachable block (ram,0x7177f914) */
/* WARNING: Removing unreachable block (ram,0x7177f920) */

void FUN_7177f814(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined3 uStack_24;
  
  iVar5 = *(int *)(param_2 + 0x14);
  uVar4 = 0;
  uStack_24 = 0;
  uStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_34 = 0;
  uStack_38 = 0;
  uStack_3c = 0;
  uStack_40 = 0;
  if (*(int *)(param_1 + 0x28) == 0xe) {
    iVar1 = *(int *)(param_2 + 0xc) * 8;
    uVar3 = (uint)(7 < iVar1);
    uVar2 = uVar3 * 8;
    if (iVar1 < (int)((uVar3 | 2) * 8)) {
      uVar3 = 0;
    }
    else {
      uVar4 = uVar2 + 8;
      uVar3 = (uint)*(byte *)(iVar5 + uVar3);
      uVar2 = uVar2 | 0x10;
      uVar4 = (uint)*(byte *)(iVar5 + (uVar4 >> 3));
    }
    if ((int)(uVar2 + 0xf8) <= iVar1) {
      imp___aeabi_memcpy(&uStack_40,iVar5 + (uVar2 >> 3),0x1f);
    }
    uVar3 = uVar3 | uVar4 << 8;
    if ((uVar3 < 0x3ed) &&
       (iVar5 = *(int *)(*(int *)(param_1 + 0xac) + uVar3 * 4 + 0x1f8c), iVar5 != 0)) {
      FUN_717a0cb0(iVar5,&uStack_40);
    }
  }
  return;
}


// =========================================================================
// Function: thunk_FUN_7177f9e0
// Entry: 0x7177f9cc | Size: 12 bytes
// =========================================================================

void thunk_FUN_7177f9e0(void)

{
  FUN_7177f9e0();
  return;
}


// =========================================================================
// Function: FUN_7177f9e0
// Entry: 0x7177f9e0 | Size: 364 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x7177fa4c) */
/* WARNING: Removing unreachable block (ram,0x7177fa54) */
/* WARNING: Removing unreachable block (ram,0x7177fa7c) */
/* WARNING: Removing unreachable block (ram,0x7177fa98) */
/* WARNING: Removing unreachable block (ram,0x7177fa9c) */
/* WARNING: Removing unreachable block (ram,0x7177faa0) */
/* WARNING: Removing unreachable block (ram,0x7177faa4) */
/* WARNING: Removing unreachable block (ram,0x7177fab0) */

void FUN_7177f9e0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_50 [44];
  
  if (*(int *)(param_1 + 0x28) == 0xe) {
    uVar3 = 0;
    iVar4 = *(int *)(param_2 + 0x14);
    iVar1 = *(int *)(param_2 + 0xc) * 8;
    uVar5 = (uint)(7 < iVar1);
    uVar2 = uVar5 * 8;
    if (iVar1 < (int)((uVar5 | 2) * 8)) {
      uVar5 = 0;
    }
    else {
      uVar3 = uVar2 + 8;
      uVar5 = (uint)*(byte *)(iVar4 + uVar5);
      uVar2 = uVar2 | 0x10;
      uVar3 = (uint)*(byte *)(iVar4 + (uVar3 >> 3));
    }
    if ((int)(uVar2 | 0x140) <= iVar1) {
      imp___aeabi_memcpy(auStack_50,iVar4 + (uVar2 >> 3),0x28);
    }
    uVar5 = uVar5 | uVar3 << 8;
    if (uVar5 < 0x3ed) {
      uVar2 = *(uint *)(param_1 + 0xac);
      iVar1 = *(int *)(uVar2 + uVar5 * 4 + 0x1f8c);
      if (iVar1 != 0) {
        uVar2 = (uint)*(ushort *)(uVar2 + 0x1f68);
      }
      if (iVar1 != 0 && uVar2 != uVar5) {
        FUN_717a0674(iVar1,auStack_50);
      }
    }
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_7177fb94
// Entry: 0x7177fb94 | Size: 480 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x7177fc20) */
/* WARNING: Removing unreachable block (ram,0x7177fc28) */
/* WARNING: Removing unreachable block (ram,0x7177fc44) */
/* WARNING: Removing unreachable block (ram,0x7177fc60) */
/* WARNING: Removing unreachable block (ram,0x7177fc64) */
/* WARNING: Removing unreachable block (ram,0x7177fc68) */
/* WARNING: Removing unreachable block (ram,0x7177fc6c) */
/* WARNING: Removing unreachable block (ram,0x7177fc78) */

void FUN_7177fb94(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_98 [16];
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 auStack_78 [12];
  undefined1 auStack_6c [12];
  undefined1 auStack_60 [30];
  undefined1 auStack_42 [12];
  undefined1 auStack_36 [18];
  
  if (*(int *)(param_1 + 0x28) == 0xe) {
    iVar2 = *(int *)(param_2 + 0xc);
    iVar6 = *(int *)(param_2 + 0x14);
    iVar4 = iVar2 * 8;
    FUN_7136cdfc((uint)auStack_60 | 2);
    FUN_7136cdfc(auStack_42);
    FUN_7136cdfc(auStack_36);
    uVar3 = (uint)(7 < iVar4);
    uVar7 = 0;
    uVar5 = uVar3 * 8;
    iVar1 = (uVar3 + 1) * 8;
    if (iVar1 + iVar2 * -8 == 0 || iVar1 < iVar4) {
      uVar7 = (uint)*(byte *)(iVar6 + uVar3);
      uVar5 = uVar5 + 8;
    }
    if ((int)(uVar5 + 0x1b0) <= iVar4) {
      imp___aeabi_memcpy(auStack_60,iVar6 + (uVar5 >> 3),0x36);
    }
    iVar4 = *(int *)(*(int *)(param_1 + 0xac) + uVar7 * 4 + 0x1f8c);
    if (iVar4 != 0) {
      FUN_7136cdfc((uint)auStack_98 | 4);
      uStack_7c = 0;
      uStack_80 = 0;
      uStack_84 = 0;
      uStack_88 = 0;
      FUN_7136cdfc(auStack_78);
      FUN_7136cdfc(auStack_6c);
      FUN_7176052c(auStack_98,auStack_60);
      FUN_717a0480(iVar4,auStack_98);
    }
  }
  return;
}


// =========================================================================
// Function: FUN_7177fe34
// Entry: 0x7177fe34 | Size: 296 bytes
// =========================================================================

void FUN_7177fe34(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_68 [15];
  undefined1 auStack_59 [12];
  undefined1 auStack_4d [12];
  undefined1 auStack_41 [12];
  undefined1 auStack_35 [21];
  
  if (*(int *)(param_1 + 0x28) == 0xe) {
    iVar5 = *(int *)(param_2 + 0x14);
    iVar2 = *(int *)(param_2 + 0xc) * 8;
    FUN_7136cdfc((uint)auStack_68 | 3);
    FUN_7136cdfc(auStack_59);
    FUN_7136cdfc(auStack_4d);
    FUN_7136cdfc(auStack_41);
    FUN_7136cdfc(auStack_35);
    if (iVar2 < 0x18) {
      uVar1 = 8;
      uVar4 = 0;
      uVar3 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)(iVar5 + 1);
      uVar1 = 0x18;
      uVar4 = (uint)*(byte *)(iVar5 + 2);
    }
    if ((int)(uVar1 + 0x218) <= iVar2) {
      imp___aeabi_memcpy(auStack_68,iVar5 + (uVar1 >> 3),0x43);
    }
    uVar3 = uVar3 | uVar4 << 8;
    if ((uVar3 < 0x3ed) &&
       (iVar2 = *(int *)(*(int *)(param_1 + 0xac) + uVar3 * 4 + 0x1f8c), iVar2 != 0)) {
      FUN_717a0f4c(iVar2,auStack_68);
    }
  }
  return;
}


// =========================================================================
// Function: FUN_7177ffec
// Entry: 0x7177ffec | Size: 1544 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x71780258) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7177ffec(undefined4 *param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  byte bVar8;
  char *pcVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  byte bStack_171;
  byte bStack_170;
  undefined2 uStack_16f;
  undefined1 *puStack_16d;
  undefined1 uStack_169;
  uint uStack_168;
  undefined4 uStack_164;
  undefined2 uStack_160;
  undefined2 uStack_15e;
  undefined2 uStack_15c;
  undefined2 uStack_15a;
  undefined1 *puStack_158;
  undefined4 uStack_154;
  uint uStack_150;
  undefined1 auStack_149 [258];
  undefined4 uStack_47;
  char cStack_43;
  int iStack_37;
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  pcVar9 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fa91c);
  if (*pcVar9 == '\0') {
    puVar12 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa90c);
    *(undefined1 *)((int)puVar12 + 0x17) = 1;
    uVar6 = DAT_700852a8;
    uVar5 = DAT_700852a4;
    uVar4 = DAT_700852a0;
    uVar3 = DAT_7008529c;
    *puVar12 = DAT_70085298;
    puVar12[1] = uVar3;
    puVar12[2] = uVar4;
    puVar12[3] = uVar5;
    puVar12[4] = uVar6;
    uVar7 = DAT_700852ae;
    *(undefined2 *)(puVar12 + 5) = DAT_700852ac;
    *(undefined1 *)((int)puVar12 + 0x16) = uVar7;
    GFDIUClbc_QcPNgD_wH(&LAB_71781e24,puVar12,&DAT_70b0e000);
    puVar13 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa91c);
    *puVar13 = 1;
  }
  iVar10 = XcxSszXLPjQrEGhecEv_(&DAT_700fa90c);
  if (*(char *)(iVar10 + 0x17) != '\0') {
    uVar11 = 0;
    uVar16 = 0;
    do {
      iVar14 = (uVar11 & 7) * 8;
      uVar15 = iVar14 - 0x20;
      bVar8 = (byte)(0x4b3f3f07 >> iVar14) |
              (byte)(-0x384eca0d << ((uVar11 & 7) * -8 + 0x20 & 0xff));
      if (-1 < (int)uVar15) {
        bVar8 = (byte)(0xc7b135f3 >> (uVar15 & 0xff));
      }
      *(byte *)(iVar10 + uVar11) = *(byte *)(iVar10 + uVar11) ^ bVar8;
      bVar17 = 0xfffffffe < uVar11;
      bVar1 = uVar16 == 0;
      bVar2 = (0x15 < uVar11) <= uVar16;
      uVar11 = uVar11 + 1;
      uVar16 = uVar16 + bVar17;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar10 + 0x17) = 0;
  }
  uVar11 = imp_strlen(iVar10);
  if (0xfffffff7 < uVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&bStack_170);
  }
  if (uVar11 < 0xb) {
    uVar16 = (uint)&bStack_170 | 1;
    bStack_170 = (byte)(uVar11 << 1);
    if (uVar11 == 0) goto LAB_71780124;
  }
  else {
    uVar16 = thunk_MwhHq((uVar11 | 7) + 1);
    iVar14 = (uVar11 | 7) + 2;
    uStack_169 = (undefined1)(uVar11 >> 0x18);
    bStack_170 = (byte)iVar14;
    uStack_16f = (undefined2)((uint)iVar14 >> 8);
    puStack_16d._0_1_ = (undefined1)((uint)iVar14 >> 0x18);
    puStack_16d = (undefined1 *)CONCAT31((int3)uVar11,puStack_16d._0_1_);
    uStack_168 = uVar16;
  }
  imp___aeabi_memmove(uVar16,iVar10,uVar11);
LAB_71780124:
  *(undefined1 *)(uVar16 + uVar11) = 0;
  iVar10 = FUN_717c5e7c(&bStack_170);
  if ((bStack_170 & 1) != 0) {
    qNQrlu(uStack_168);
  }
  if (iVar10 != 0) {
    iVar10 = FUN_71886108();
    uStack_154 = 0x26d5d038;
    uStack_168 = 0x370;
    uStack_164 = 0;
    puStack_158 = &LAB_49abac16;
    uStack_15c = 0;
    uStack_15a = 0;
    uStack_160 = 0x3d4;
    uStack_15e = 0;
    bStack_171 = 0;
    do {
      (&bStack_170)[(char)bStack_171] =
           (byte)(0xcce70a >> (((int)(char)bStack_171 & 0x1fU) << 3)) ^ 0xea;
      bStack_171 = bStack_171 + 1;
    } while (bStack_171 < 4);
    uStack_150 = 0xcce70a;
    bStack_171 = 0;
    do {
      bStack_171 = bStack_171 + 1;
      uStack_150 = (uStack_150 | 0xccada3) >> 2 ^ 0xacb01c;
    } while (bStack_171 < 8);
    bStack_171 = 0;
    do {
      (&bStack_170)[(char)bStack_171] = (&bStack_170)[(char)bStack_171] ^ 0xea;
      bStack_171 = bStack_171 + 1;
    } while (bStack_171 < 4);
    bStack_171 = 0;
    do {
      bStack_171 = bStack_171 + 1;
    } while (bStack_171 < 8);
    if ((CONCAT13(puStack_16d._0_1_,CONCAT21(uStack_16f,bStack_170)) ^ 0xccfc52) <=
        (uint)(iVar10 - DAT_711f6d70)) {
      DAT_711f6d70 = FUN_71886108();
      iStack_37 = 0x800;
      cStack_43 = '\x01';
      puStack_16d = auStack_149;
      uStack_15e = 0;
      uStack_15c = 0;
      uStack_47 = 0;
      (**(code **)(*(int *)*param_1 + 0xec))
                ((int *)*param_1,&DAT_70102204,&bStack_170,1,8,0,0,0xffffffff,0xffff,0xffff,0);
      if ((cStack_43 != '\0') && (0x800 < iStack_37)) {
        imp_free(puStack_16d);
      }
    }
  }
  if (_ext___stack_chk_guard != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail();
  }
  return;
}


// =========================================================================
// Function: FUN_717807c4
// Entry: 0x717807c4 | Size: 1128 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_717807c4(undefined4 *param_1,byte *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_169 [3];
  undefined1 *puStack_166;
  uint uStack_157;
  undefined1 auStack_142 [258];
  undefined4 uStack_40;
  char cStack_3c;
  uint uStack_30;
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  if (param_1[10] == 0xe) {
    uStack_30 = 0x800;
    uStack_157 = 0;
    uStack_40 = 0;
    cStack_3c = '\x01';
    puStack_166 = auStack_142;
    uVar6 = imp_strlen(param_2);
    uVar9 = uStack_30;
    uVar7 = uStack_157 + 8;
    if ((-8 < (int)uStack_157) && ((int)(uStack_30 - 1) >> 3 < (int)(uStack_157 + 7 >> 3))) {
      iVar2 = uVar7 * 2;
      uVar8 = uVar7 * 2;
      if (puStack_166 == auStack_142) {
        bVar1 = 0x400 < uVar7;
        uVar7 = uVar8;
        if (bVar1) {
          puStack_166 = (undefined1 *)imp_malloc(iVar2 + 7U >> 3);
          imp___aeabi_memcpy(puStack_166,auStack_142,(int)(uVar9 + 7) >> 3);
        }
      }
      else {
        puStack_166 = (undefined1 *)imp_realloc(puStack_166);
        uVar9 = uStack_30;
        uVar7 = uVar8;
      }
    }
    if ((int)uVar9 < (int)uVar7) {
      uStack_30 = uVar7;
    }
    uVar9 = uStack_30;
    uVar7 = uStack_157 & 7;
    iVar2 = (int)uStack_157 >> 3;
    if (uVar7 == 0) {
      puStack_166[iVar2] = (char)uVar6;
    }
    else {
      puStack_166[iVar2] = puStack_166[iVar2] | (byte)((uVar6 & 0xff) >> uVar7);
      puStack_166[iVar2 + 1] = (char)(uVar6 << (8 - uVar7 & 0xff));
    }
    uVar6 = uVar6 & 0xff;
    uVar7 = uStack_157 + 8;
    if (uVar6 != 0) {
      uVar8 = uVar7 + uVar6 * 8;
      if ((uStack_157 & 7) == 0) {
        uStack_157 = uVar7;
        if ((0 < (int)uVar8) && ((int)(uStack_30 - 1) >> 3 < (int)(uVar8 - 1 >> 3))) {
          uVar4 = uVar8 >> 2;
          uVar3 = uVar8 * 2;
          if (puStack_166 == auStack_142) {
            bVar1 = 0x400 < uVar8;
            uVar8 = uVar3;
            if (bVar1) {
              puStack_166 = (undefined1 *)imp_malloc(uVar4);
              imp___aeabi_memcpy(puStack_166,auStack_142,(int)(uVar9 + 7) >> 3);
            }
          }
          else {
            puStack_166 = (undefined1 *)imp_realloc();
            uVar8 = uVar3;
            uVar9 = uStack_30;
          }
        }
        if ((int)uVar9 < (int)uVar8) {
          uStack_30 = uVar8;
        }
        imp___aeabi_memcpy(puStack_166 + ((int)(uStack_157 + 7) >> 3),param_2,uVar6);
        uVar7 = uStack_157 + uVar6 * 8;
      }
      else {
        uStack_157 = uVar7;
        if ((0 < (int)uVar8) && ((int)(uStack_30 - 1) >> 3 < (int)(uVar8 - 1 >> 3))) {
          uVar3 = uVar8 * 2;
          iVar2 = uVar8 * 2;
          if (puStack_166 == auStack_142) {
            bVar1 = 0x400 < uVar8;
            uVar8 = uVar3;
            if (bVar1) {
              puStack_166 = (undefined1 *)imp_malloc(iVar2 + 7U >> 3);
              imp___aeabi_memcpy(puStack_166,auStack_142,(int)(uVar9 + 7) >> 3);
            }
          }
          else {
            puStack_166 = (undefined1 *)imp_realloc();
            uVar8 = uVar3;
            uVar9 = uStack_30;
          }
        }
        if ((int)uVar9 < (int)uVar8) {
          uStack_30 = uVar8;
        }
        uVar8 = uStack_157 & 7;
        uVar9 = uVar6 * 8;
        do {
          bVar5 = *param_2;
          iVar2 = (int)uStack_157 >> 3;
          if (uVar8 == 0) {
            puStack_166[iVar2] = bVar5;
          }
          else {
            puStack_166[iVar2] = puStack_166[iVar2] | bVar5 >> uVar8;
            if (8 - uVar8 < uVar9) {
              puStack_166[iVar2 + 1] = bVar5 << (8 - uVar8 & 0xff);
            }
          }
          uVar6 = uVar9 - 8;
          uStack_157 = uStack_157 + 8;
          bVar1 = 7 < (int)uVar9;
          param_2 = param_2 + 1;
          uVar9 = uVar6;
          uVar7 = uStack_157;
        } while (uVar6 != 0 && bVar1);
      }
    }
    uStack_157 = uVar7;
    (**(code **)(*(int *)*param_1 + 0xec))
              ((int *)*param_1,&DAT_701021cc,auStack_169,1,8,0,0,0xffffffff,0xffff,0xffff,0);
    if ((cStack_3c != '\0') && (0x800 < (int)uStack_30)) {
      imp_free(puStack_166);
    }
  }
  if (_ext___stack_chk_guard == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_71780d4c
// Entry: 0x71780d4c | Size: 1340 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71780d4c(undefined4 *param_1,byte *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_169 [3];
  undefined1 *puStack_166;
  uint uStack_157;
  undefined1 auStack_142 [258];
  undefined4 uStack_40;
  char cStack_3c;
  uint uStack_30;
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  if (param_1[10] == 0xe) {
    uStack_30 = 0x800;
    uStack_157 = 0;
    uStack_40 = 0;
    cStack_3c = '\x01';
    puStack_166 = auStack_142;
    uVar8 = imp_strlen(param_2);
    uVar7 = uStack_30;
    uVar9 = uStack_157 + 0x20;
    if ((-0x20 < (int)uStack_157) && ((int)(uStack_30 - 1) >> 3 < (int)(uStack_157 + 0x1f >> 3))) {
      uVar6 = uVar9 * 2;
      iVar2 = uVar9 * 2;
      if (puStack_166 == auStack_142) {
        bVar1 = 0x400 < uVar9;
        uVar9 = uVar6;
        if (bVar1) {
          puStack_166 = (undefined1 *)imp_malloc(iVar2 + 7U >> 3);
          imp___aeabi_memcpy(puStack_166,auStack_142,(int)(uVar7 + 7) >> 3);
        }
      }
      else {
        puStack_166 = (undefined1 *)imp_realloc();
        uVar9 = uVar6;
        uVar7 = uStack_30;
      }
    }
    uVar6 = uStack_157;
    if ((int)uVar7 < (int)uVar9) {
      uStack_30 = uVar9;
    }
    uVar7 = uStack_30;
    uVar9 = uStack_157 & 7;
    iVar2 = (int)uStack_157 >> 3;
    if (uVar9 == 0) {
      puStack_166[iVar2] = (char)uVar8;
      puStack_166[(int)(uStack_157 + 8) >> 3] = (char)(uVar8 >> 8);
      puStack_166[(int)(uStack_157 + 0x10) >> 3] = (char)(uVar8 >> 0x10);
      puStack_166[(int)(uStack_157 + 0x18) >> 3] = (char)(uVar8 >> 0x18);
    }
    else {
      puStack_166[iVar2] = puStack_166[iVar2] | (byte)((uVar8 & 0xff) >> uVar9);
      uVar10 = 8 - uVar9;
      puStack_166[iVar2 + 1] = (char)(uVar8 << (uVar10 & 0xff));
      iVar2 = (int)(uStack_157 + 8) >> 3;
      puStack_166[iVar2] = puStack_166[iVar2] | (byte)((uVar8 >> 8 & 0xff) >> uVar9);
      puStack_166[iVar2 + 1] = (char)((uVar8 >> 8) << (uVar10 & 0xff));
      iVar2 = (int)(uStack_157 + 0x10) >> 3;
      puStack_166[iVar2] = puStack_166[iVar2] | (byte)((uVar8 >> 0x10 & 0xff) >> uVar9);
      puStack_166[iVar2 + 1] = (char)((uVar8 >> 0x10) << (uVar10 & 0xff));
      iVar2 = (int)(uStack_157 + 0x18) >> 3;
      puStack_166[iVar2] = puStack_166[iVar2] | (byte)((uVar8 >> 0x18) >> uVar9);
      puStack_166[iVar2 + 1] = (char)((uVar8 >> 0x18) << (uVar10 & 0xff));
    }
    uStack_157 = uStack_157 + 0x18;
    uVar6 = uVar6 + 0x20;
    if (uVar8 != 0) {
      uVar9 = uVar8 * 8;
      if ((uStack_157 & 7) == 0) {
        uStack_157 = uVar6;
        if (0 < (int)uVar9) {
          uVar10 = uVar6 + uVar9;
          if ((0 < (int)uVar10) && ((int)(uStack_30 - 1) >> 3 < (int)(uVar10 - 1 >> 3))) {
            uVar4 = uVar10 >> 2;
            uVar3 = uVar10 * 2;
            if (puStack_166 == auStack_142) {
              bVar1 = 0x400 < uVar10;
              uVar10 = uVar3;
              if (bVar1) {
                puStack_166 = (undefined1 *)imp_malloc(uVar4);
                imp___aeabi_memcpy(puStack_166,auStack_142,(int)(uVar7 + 7) >> 3);
              }
            }
            else {
              puStack_166 = (undefined1 *)imp_realloc();
              uVar10 = uVar3;
              uVar7 = uStack_30;
            }
          }
          if ((int)uVar7 < (int)uVar10) {
            uStack_30 = uVar10;
          }
        }
        imp___aeabi_memcpy(puStack_166 + ((int)(uStack_157 + 7) >> 3),param_2,uVar8);
        uVar6 = uStack_157 + uVar9;
      }
      else if (0 < (int)uVar8) {
        uVar8 = uVar6 + uVar9;
        uStack_157 = uVar6;
        if ((0 < (int)uVar8) && ((int)(uStack_30 - 1) >> 3 < (int)(uVar8 - 1 >> 3))) {
          uVar10 = uVar8 * 2;
          iVar2 = uVar8 * 2;
          if (puStack_166 == auStack_142) {
            bVar1 = 0x400 < uVar8;
            uVar8 = uVar10;
            if (bVar1) {
              puStack_166 = (undefined1 *)imp_malloc(iVar2 + 7U >> 3);
              imp___aeabi_memcpy(puStack_166,auStack_142,(int)(uVar7 + 7) >> 3);
            }
          }
          else {
            puStack_166 = (undefined1 *)imp_realloc();
            uVar8 = uVar10;
            uVar7 = uStack_30;
          }
        }
        if ((int)uVar7 < (int)uVar8) {
          uStack_30 = uVar8;
        }
        uVar7 = uStack_157 & 7;
        do {
          bVar5 = *param_2;
          iVar2 = (int)uStack_157 >> 3;
          if (uVar7 == 0) {
            puStack_166[iVar2] = bVar5;
          }
          else {
            puStack_166[iVar2] = puStack_166[iVar2] | bVar5 >> uVar7;
            if (8 - uVar7 < uVar9) {
              puStack_166[iVar2 + 1] = bVar5 << (8 - uVar7 & 0xff);
            }
          }
          uVar8 = uVar9 - 8;
          uStack_157 = uStack_157 + 8;
          bVar1 = 7 < (int)uVar9;
          param_2 = param_2 + 1;
          uVar9 = uVar8;
          uVar6 = uStack_157;
        } while (uVar8 != 0 && bVar1);
      }
    }
    uStack_157 = uVar6;
    (**(code **)(*(int *)*param_1 + 0xec))
              ((int *)*param_1,&DAT_70102228,auStack_169,1,8,0,0,0xffffffff,0xffff,0xffff,0);
    if ((cStack_3c != '\0') && (0x800 < (int)uStack_30)) {
      imp_free(puStack_166);
    }
  }
  if (_ext___stack_chk_guard == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_717813a8
// Entry: 0x717813a8 | Size: 716 bytes
// =========================================================================

undefined4 FUN_717813a8(void)

{
  int iVar1;
  char *pcVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  
  DataMemoryBarrier(0xb);
  if ((DAT_711f6de8 & 1) == 0) {
    iVar1 = cuKsjVZRyspaVsDnqLy(&DAT_711f6de8);
    if (iVar1 != 0) {
      pcVar2 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700faabc);
      if (*pcVar2 == '\0') {
        puVar4 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700faaac);
        *puVar4 = 0x52722df6;
        puVar4[1] = 0xb2a4f31d;
        puVar4[2] = 0x5c4510ed;
        *(undefined1 *)((int)puVar4 + 0xf) = 1;
        *(undefined4 *)((int)puVar4 + 0xb) = 0xc1f8145c;
        GFDIUClbc_QcPNgD_wH(&LAB_717820c8,puVar4,&DAT_70b0e000);
        puVar5 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700faabc);
        *puVar5 = 1;
      }
      pbVar3 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700faaac);
      if (pbVar3[0xf] != 0) {
        *pbVar3 = *pbVar3 ^ 0x99;
        pbVar3[1] = pbVar3[1] ^ 0x43;
        pbVar3[2] = pbVar3[2] ^ 0x31;
        pbVar3[3] = pbVar3[3] ^ 0x3d;
        pbVar3[0xf] = 0;
        pbVar3[4] = pbVar3[4] ^ 0x73;
        pbVar3[5] = pbVar3[5] ^ 0x9d;
        pbVar3[6] = pbVar3[6] ^ 0xc1;
        pbVar3[7] = pbVar3[7] ^ 0xd1;
        pbVar3[8] = pbVar3[8] ^ 0x99;
        pbVar3[9] = pbVar3[9] ^ 0x43;
        pbVar3[10] = pbVar3[10] ^ 0x31;
        pbVar3[0xb] = pbVar3[0xb] ^ 0x3d;
        pbVar3[0xc] = pbVar3[0xc] ^ 0x73;
        pbVar3[0xd] = pbVar3[0xd] ^ 0x9d;
        pbVar3[0xe] = pbVar3[0xe] ^ 0xc1;
      }
      DAT_711f6de4 = FUN_71885ba4(pbVar3,0);
      SixizuLbAnqfgRApsCY(&DAT_711f6de8);
    }
  }
  return DAT_711f6de4;
}


// =========================================================================
// Function: FUN_7178258c
// Entry: 0x7178258c | Size: 160 bytes
// =========================================================================

void FUN_7178258c(int param_1)

{
  if ((*(byte *)(param_1 + 0x40) & 1) != 0) {
    qNQrlu(*(undefined4 *)(param_1 + 0x48));
  }
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    qNQrlu(*(undefined4 *)(param_1 + 0x30));
  }
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    qNQrlu(*(undefined4 *)(param_1 + 0x20));
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    qNQrlu(*(undefined4 *)(param_1 + 0x10));
  }
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: FUN_71782be8
// Entry: 0x71782be8 | Size: 4 bytes
// =========================================================================

void FUN_71782be8(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x71782c04 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x71782c20 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_71782da4
// Entry: 0x71782da4 | Size: 4 bytes
// =========================================================================

void FUN_71782da4(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x71782dc0 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x71782ddc | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_71783228
// Entry: 0x71783228 | Size: 104 bytes
// =========================================================================

void FUN_71783228(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  iVar1 = *(int *)(iVar2 + 4);
  *(int *)(param_1 + 0x14) = iVar1;
  if (iVar1 != iVar2) {
    do {
      iVar1 = *(int *)(iVar1 + 4);
      qNQrlu();
      *(int *)(param_1 + 0x14) = iVar1;
    } while (iVar1 != *(int *)(param_1 + 0x10));
    iVar2 = iVar1;
    if (iVar1 == 0) {
      return;
    }
  }
  thunk_qNQrlu(iVar2);
  return;
}


// =========================================================================
// Function: FUN_717835c0
// Entry: 0x717835c0 | Size: 232 bytes
// =========================================================================

undefined4 * FUN_717835c0(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  piVar4 = (int *)*param_1;
  *param_1 = 0;
  if (piVar4 != (int *)0x0) {
    piVar5 = (int *)piVar4[7];
    if (piVar5 != (int *)0x0) {
      piVar3 = piVar5 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar2 + -1;
      DataMemoryBarrier(0xb);
      if (iVar2 == 0) {
        (**(code **)(*piVar5 + 8))(piVar5);
        xwzSFoU_qvDa_PehyVStzHlBOSkJhkBLR_tNCbTfLzAoZMkmnRt(piVar5);
      }
    }
    if ((*(byte *)(piVar4 + 1) & 1) != 0) {
      qNQrlu(piVar4[3]);
    }
    iVar2 = *piVar4;
    *piVar4 = 0;
    if (iVar2 != 0) {
      RYJOfoHFfaslEZJHEIdHJEJsamhUbv_Gq();
      qNQrlu();
    }
    qNQrlu(piVar4);
  }
  return param_1;
}


// =========================================================================
// Function: FUN_717839c8
// Entry: 0x717839c8 | Size: 232 bytes
// =========================================================================

undefined4 * FUN_717839c8(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  piVar4 = (int *)*param_1;
  *param_1 = 0;
  if (piVar4 != (int *)0x0) {
    piVar5 = (int *)piVar4[7];
    if (piVar5 != (int *)0x0) {
      piVar3 = piVar5 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar2 + -1;
      DataMemoryBarrier(0xb);
      if (iVar2 == 0) {
        (**(code **)(*piVar5 + 8))(piVar5);
        xwzSFoU_qvDa_PehyVStzHlBOSkJhkBLR_tNCbTfLzAoZMkmnRt(piVar5);
      }
    }
    if ((*(byte *)(piVar4 + 1) & 1) != 0) {
      qNQrlu(piVar4[3]);
    }
    iVar2 = *piVar4;
    *piVar4 = 0;
    if (iVar2 != 0) {
      RYJOfoHFfaslEZJHEIdHJEJsamhUbv_Gq();
      qNQrlu();
    }
    qNQrlu(piVar4);
  }
  return param_1;
}


// =========================================================================
// Function: FUN_71792cc4
// Entry: 0x71792cc4 | Size: 24 bytes
// =========================================================================

void FUN_71792cc4(int *param_1)

{
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_701021b0,&LAB_71783b18);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_701021a8,&LAB_7178b5b0);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_701021ac,&LAB_7178b884);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_70102210,&LAB_7178b940);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_701021cc,&LAB_7178bbbc);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_701021bc,&LAB_7178be40);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_701021c0,&LAB_7178c908);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_70102220,&LAB_7178bfb8);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_70102214,&LAB_7178ca24);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_70102224,&LAB_7178d324);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_701021e0,&LAB_7178e4e8);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_701021e8,&LAB_7178ed78);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_701021f4,&LAB_7178ee4c);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_701021f8,&LAB_7178f118);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_701021fc,&LAB_7178f184);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_70102200,&LAB_7178f774);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_701021ec,&LAB_7178f7e0);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_701021f0,&LAB_7178fce4);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_701021d0,&LAB_7178fe58);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_701021d4,&LAB_7178ffa0);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_70102208,&LAB_71790074);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_7010220c,&LAB_71789440);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_70102218,&LAB_71790508);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_7010221c,&LAB_71790638);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_7010237c,&LAB_71790714);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_70102380,&LAB_71790e90);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_701021dc,&LAB_717912c8);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_70102294,&LAB_71791624);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_701021e4,&LAB_71792310);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_701021d8,&LAB_717923e4);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_7010224c,&LAB_717926ac);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_70102250,&LAB_71792c18);
                    /* WARNING: Could not recover jumptable at 0x71793104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_70102204,0x7178b384);
  return;
}


// =========================================================================
// Function: FUN_71793c24
// Entry: 0x71793c24 | Size: 24 bytes
// =========================================================================

undefined4 FUN_71793c24(undefined4 param_1)

{
  imp___aeabi_memclr4(param_1,5000);
  return param_1;
}


// =========================================================================
// Function: FUN_71793c8c
// Entry: 0x71793c8c | Size: 32 bytes
// =========================================================================

int FUN_71793c8c(int param_1)

{
  int *piVar1;
  int iVar2;
  int unaff_r7;
  bool bVar3;
  
  iVar2 = 0;
  do {
    bVar3 = *(char *)(param_1 + iVar2) != '\0';
    piVar1 = (int *)0x0;
    if (bVar3) {
      unaff_r7 = param_1 + iVar2 * 4;
      piVar1 = *(int **)(unaff_r7 + 1000);
    }
    if (bVar3 && piVar1 != (int *)0x0) {
      *(undefined1 *)(param_1 + iVar2) = 0;
      (**(code **)(*piVar1 + 4))();
      *(undefined4 *)(unaff_r7 + 1000) = 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 1000);
  return param_1;
}


// =========================================================================
// Function: FUN_71793db8
// Entry: 0x71793db8 | Size: 244 bytes
// =========================================================================

bool FUN_71793db8(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = param_1 + 1000;
  if ((*(int *)(iVar3 + param_2 * 4) != 0) && (param_2 >> 3 < 0x7d)) {
    bVar4 = *(char *)(param_1 + param_2) != '\0';
    piVar1 = (int *)0x0;
    if (bVar4) {
      piVar1 = *(int **)(iVar3 + param_2 * 4);
    }
    if (bVar4 && piVar1 != (int *)0x0) {
      *(undefined1 *)(param_1 + param_2) = 0;
      (**(code **)(*piVar1 + 4))();
      *(undefined4 *)(iVar3 + param_2 * 4) = 0;
    }
  }
  iVar2 = FUN_71561f60(DAT_711a3938,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10
                      );
  *(int *)(iVar3 + param_2 * 4) = iVar2;
  if (iVar2 != 0) {
    *(undefined1 *)(param_1 + param_2) = 1;
  }
  return iVar2 != 0;
}


// =========================================================================
// Function: FUN_71793f10
// Entry: 0x71793f10 | Size: 24 bytes
// =========================================================================

int FUN_71793f10(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = -0xf9c;
  while ((iVar1 = *(int *)(param_1 + iVar2 + 5000), iVar1 == 0 || (*(int *)(iVar1 + 4) != param_2)))
  {
    iVar2 = iVar2 + 4;
    if (iVar2 == 0) {
      return 0;
    }
  }
  return iVar1;
}


// =========================================================================
// Function: thunk_FUN_71793f90
// Entry: 0x71793f7c | Size: 12 bytes
// =========================================================================

void thunk_FUN_71793f90(void)

{
  FUN_71793f90();
  return;
}


// =========================================================================
// Function: FUN_71793f90
// Entry: 0x71793f90 | Size: 76 bytes
// =========================================================================

uint FUN_71793f90(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  bool bVar3;
  
  piVar2 = (int *)(param_1 + 0x3ec);
  uVar1 = 0xfffffc19;
  while ((*piVar2 == 0 || (*(int *)(*piVar2 + 4) != param_2))) {
    piVar2 = piVar2 + 1;
    bVar3 = 0xfffffffe < uVar1;
    uVar1 = uVar1 + 1;
    if (bVar3) {
      return 0xffff;
    }
  }
  return uVar1 + 1000 & 0xffff;
}


// =========================================================================
// Function: FUN_71793ff4
// Entry: 0x71793ff4 | Size: 24 bytes
// =========================================================================

void FUN_71793ff4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (DAT_711f6e1c == 0) {
    DAT_711f6e1c = FUN_71886108();
  }
  iVar1 = FUN_71886108();
  uVar2 = FUN_71ba1e0c(iVar1 - DAT_711f6e1c);
  uVar2 = FUN_71ba13e0(uVar2,0x447a0000);
  iVar3 = 0;
  do {
    if (*(char *)(param_1 - iVar3) != '\0') {
      FUN_715b759c(*(undefined4 *)(param_1 + iVar3 * -4 + 1000),uVar2);
    }
    iVar3 = iVar3 + -1;
  } while (iVar3 != -1000);
  DAT_711f6e1c = iVar1;
  return;
}


// =========================================================================
// Function: FUN_7179419c
// Entry: 0x7179419c | Size: 28 bytes
// =========================================================================

undefined4 * FUN_7179419c(undefined4 *param_1)

{
  int iVar1;
  
  imp___aeabi_memclr(param_1 + 0x3c01,0x14000);
  *param_1 = 0;
  imp___aeabi_memset(param_1 + 1,0x8000,0xff);
  iVar1 = 0;
  do {
    param_1[iVar1 + 0x2001] = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x1000);
  return param_1;
}


// =========================================================================
// Function: FUN_71794258
// Entry: 0x71794258 | Size: 24 bytes
// =========================================================================

int FUN_71794258(int param_1)

{
  int iVar1;
  
  iVar1 = 1;
  do {
    if (*(int *)(param_1 + iVar1 * 4) != -1) {
      FUN_715d33c8(&DAT_7008544e);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x1001);
  return param_1;
}


// =========================================================================
// Function: FUN_7179430c
// Entry: 0x7179430c | Size: 264 bytes
// =========================================================================

void FUN_7179430c(int *param_1,int *param_2,uint param_3)

{
  int iVar1;
  int iStack_24;
  
  if ((param_3 >> 0xc == 0) && (*param_1 < 0x1000)) {
    if (param_1[param_3 + 1] != -1) {
      FUN_715d33c8(&DAT_7008544e,param_1[param_3 + 1]);
    }
    param_1[param_3 * 5 + 0x3c01] = *param_2;
    param_1[param_3 * 5 + 0x3c02] = param_2[1];
    param_1[param_3 * 5 + 0x3c03] = param_2[2];
    param_1[param_3 * 5 + 0x3c04] = param_2[3];
    param_1[param_3 * 5 + 0x3c05] = param_2[4];
    iStack_24 = 0;
    *(undefined1 *)((int)param_1 + param_3 * 3 + 0xc004) = 0;
    iVar1 = FUN_715622e0(DAT_711a3938,*param_2,param_2[1],param_2[2],param_2[3],param_2[4],
                         &iStack_24);
    param_1[param_3 + 1] = iVar1;
    param_1[param_3 + 0x1001] = iStack_24;
    *param_1 = *param_1 + 1;
  }
  return;
}


// =========================================================================
// Function: FUN_717947d0
// Entry: 0x717947d0 | Size: 432 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_717947d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_169 [3];
  int *piStack_166;
  undefined4 uStack_157;
  int aiStack_142 [64];
  undefined4 uStack_40;
  char cStack_3c;
  int iStack_30;
  int iStack_2c;
  
  iVar3 = 0xc005;
  iVar4 = 0xf008;
  iVar2 = 0;
  iStack_2c = _ext___stack_chk_guard;
  do {
    if (*(int *)(param_1 + iVar2 * 4 + 4) != -1) {
      if ((*(char *)(param_1 + 0xc004 + iVar2 * 3) == '\0') && (*(int *)(param_1 + iVar4) != 0xe)) {
        iVar1 = *(int *)(param_1 + 0x8004 + iVar2 * 4);
        if (iVar1 != 0) {
          *(int *)(param_1 + 0x8004 + iVar2 * 4) = iVar1 + -1;
        }
      }
      else {
        iVar1 = FUN_715d33c8(&DAT_70085460);
        if (iVar1 != 0) {
          uStack_40 = 0;
          iStack_30 = 0x800;
          cStack_3c = '\x01';
          if (*(char *)(param_1 + 0xc004 + iVar2 * 3) == '\0') {
            uStack_157 = 0x20;
            aiStack_142[0] = iVar2;
          }
          else {
            aiStack_142[0] = CONCAT22(aiStack_142[0]._2_2_,*(undefined2 *)(param_1 + iVar3));
            uStack_157 = 0x10;
          }
          piStack_166 = aiStack_142;
          (**(code **)(*(int *)*DAT_711f6d58 + 0xec))
                    ((int *)*DAT_711f6d58,&DAT_7010222c,auStack_169,1,10,0,0,0xffffffff,0xffff,
                     0xffff,0);
          if ((cStack_3c != '\0') && (0x800 < iStack_30)) {
            imp_free(piStack_166);
          }
        }
      }
    }
    iVar2 = iVar2 + 1;
    iVar4 = iVar4 + 0x14;
    iVar3 = iVar3 + 3;
  } while (iVar2 != 0x1000);
  if (_ext___stack_chk_guard == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_71794a94
// Entry: 0x71794a94 | Size: 24 bytes
// =========================================================================

undefined4 * FUN_71794a94(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  thunk_MwhHq(0x248);
  uVar1 = FUN_717524cc();
  param_1[0x7db] = uVar1;
  imp___aeabi_memclr4(param_1 + 0x7e3,0xfb0);
  iVar2 = 0;
  do {
    *(undefined1 *)((int)param_1 + iVar2 + 0x3eec) = 0;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x3ec);
  *param_1 = 0;
  param_1[1] = 0;
  imp___aeabi_memclr4(param_1 + 2,0xfb0);
  imp___aeabi_memclr4(param_1 + 0x3ee,0xfb0);
  imp___aeabi_memclr4(param_1 + 0x2a34,0x11e4c);
  return param_1;
}


// =========================================================================
// Function: FUN_71794bfc
// Entry: 0x71794bfc | Size: 744 bytes
// =========================================================================

undefined4 FUN_71794bfc(int param_1,uint param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  uint uVar16;
  int iVar17;
  bool bVar18;
  undefined4 uStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_44;
  int iStack_40;
  int iStack_38;
  int iStack_34;
  
  FUN_715559a8(param_2);
  uVar6 = 0;
  if (((param_2 >> 2 < 0xfb) && (*(char *)(param_1 + 0x3eec + param_2) != '\0')) &&
     (iVar17 = param_1 + 0x1f8c, *(int *)(iVar17 + param_2 * 4) != 0)) {
    iVar7 = *(int *)(param_1 + 0x1f6c);
    if ((*(char *)(iVar7 + 0x11c) != '\0') && (*(uint *)(iVar7 + 0x120) == param_2)) {
      FUN_71756d20(iVar7,0);
    }
    *(undefined1 *)(param_1 + 0x3eec + param_2) = 0;
    if (*(int *)(iVar17 + param_2 * 4) != 0) {
      FUN_7179b040();
      thunk_qNQrlu();
    }
    *(undefined4 *)(iVar17 + param_2 * 4) = 0;
    *(undefined4 *)(param_1 + param_2 * 4 + 0x2f3c) = 0;
    FUN_714d2430(param_2);
    iVar17 = DAT_712017f8;
    DataMemoryBarrier(0xb);
    if (((DAT_711f6e2c & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711f6e2c), iVar7 != 0))
    {
      pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fad8c);
      if (*pcVar9 == '\0') {
        puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fad7c);
        *(undefined1 *)((int)puVar10 + 0x15) = 1;
        uVar5 = DAT_700854a0;
        uVar4 = DAT_7008549c;
        uVar3 = DAT_70085498;
        uVar6 = DAT_70085494;
        *puVar10 = DAT_70085490;
        puVar10[1] = uVar6;
        puVar10[2] = uVar3;
        puVar10[3] = uVar4;
        puVar10[4] = uVar5;
        *(undefined1 *)(puVar10 + 5) = DAT_700854a4;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71797060,puVar10,&DAT_70b0e000);
        puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fad8c);
        *puVar11 = 1;
      }
      iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fad7c);
      if (*(char *)(iVar7 + 0x15) != '\0') {
        uVar14 = 0;
        uVar16 = 0;
        do {
          iVar12 = (uVar14 & 7) * 8;
          uVar13 = iVar12 - 0x20;
          bVar15 = (byte)(0xcf65775b >> iVar12) |
                   (byte)(0x298b4d93 << ((uVar14 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar13) {
            bVar15 = (byte)(0x298b4d93 >> (uVar13 & 0xff));
          }
          *(byte *)(iVar7 + uVar14) = *(byte *)(iVar7 + uVar14) ^ bVar15;
          bVar18 = 0xfffffffe < uVar14;
          bVar1 = uVar16 == 0;
          bVar2 = (0x13 < uVar14) <= uVar16;
          uVar14 = uVar14 + 1;
          uVar16 = uVar16 + bVar18;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar7 + 0x15) = 0;
      }
      DAT_711f6e28 = FUN_71885ba4(iVar7,0);
      thunk_SixizuLbAnqfgRApsCY(&DAT_711f6e2c);
    }
    uVar6 = DAT_711f6e28;
    imp___aeabi_memclr4(&iStack_50,0x30);
    uStack_54 = uVar6;
    uVar6 = FUN_713a0424(&uStack_54,param_2);
    uVar6 = FUN_71521824(uVar6,&DAT_70064a63);
    thunk_cfqspBX_JrdDvACwYrAyrngjQ(iVar17 + 0x34);
    piVar8 = (int *)thunk_MwhHq(0x3c);
    *piVar8 = 0;
    piVar8[1] = 0;
    FUN_713a10f8(piVar8 + 2,uVar6);
    piVar8[1] = iVar17 + 0x38;
    iVar7 = *(int *)(iVar17 + 0x38);
    *piVar8 = iVar7;
    *(int **)(iVar7 + 4) = piVar8;
    *(int **)(iVar17 + 0x38) = piVar8;
    *(int *)(iVar17 + 0x40) = *(int *)(iVar17 + 0x40) + 1;
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(iVar17 + 0x34);
    if (iStack_38 != 0) {
      iStack_34 = iStack_38;
      thunk_qNQrlu();
    }
    if (iStack_44 != 0) {
      iStack_40 = iStack_44;
      thunk_qNQrlu();
    }
    if (iStack_50 != 0) {
      iStack_4c = iStack_50;
      thunk_qNQrlu();
    }
    uVar6 = 1;
  }
  return uVar6;
}


// =========================================================================
// Function: FUN_71795348
// Entry: 0x71795348 | Size: 1684 bytes
// =========================================================================

undefined4 FUN_71795348(int param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_a8 [16];
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  undefined1 auStack_64 [48];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pbVar1 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700facfc);
  pbVar2 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700facdc);
  uVar8 = 0;
  do {
    if (*(char *)(param_1 + 0x3eec + uVar8) != '\0') {
      FUN_7179b1e8(*(undefined4 *)(param_1 + 0x1f8c + uVar8 * 4));
      iVar11 = *(int *)(*(int *)(param_1 + 0x1f8c + uVar8 * 4) + 0x10);
      if (iVar11 != 0) {
        thunk_FUN_715600f0(iVar11,auStack_64);
        FUN_714d2318(uVar8 & 0xffff,uStack_34,uStack_30,uStack_2c);
        iVar3 = thunk_FUN_715609b0(iVar11);
        if (iVar3 == 0x84) {
          if (*(int *)(iVar11 + 0x108) == 0) {
            pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700facec);
            if (*pcVar4 == '\0') {
              puVar5 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700facdc);
              *puVar5 = 0xd6c843b1;
              *(undefined1 *)((int)puVar5 + 6) = 1;
              *(undefined2 *)(puVar5 + 1) = 0x5514;
              thunk_GFDIUClbc_QcPNgD_wH(&LAB_71796f80,puVar5,&DAT_70b0e000);
              puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700facec);
              *puVar6 = 1;
            }
            if (pbVar2[6] != 0) {
              *pbVar2 = *pbVar2 ^ 0xd7;
              pbVar2[1] = pbVar2[1] ^ 0x2f;
              pbVar2[2] = pbVar2[2] ^ 0xa9;
              pbVar2[3] = pbVar2[3] ^ 0xbb;
              pbVar2[6] = 0;
              pbVar2[4] = pbVar2[4] ^ 0x71;
              pbVar2[5] = pbVar2[5] ^ 0x55;
            }
            FUN_715d1018(iVar11,pbVar2,5,0,0,0,0,0,0);
          }
        }
        else if (*(char *)(iVar11 + 0x179) == '\0') {
          if (*(int *)(iVar11 + 0x108) != 0) {
            FUN_715bf5cc(iVar11);
          }
        }
        else if (*(int *)(iVar11 + 0x108) == 0) {
          pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fad0c);
          if (*pcVar4 == '\0') {
            puVar5 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700facfc);
            *(undefined1 *)((int)puVar5 + 10) = 1;
            *puVar5 = 0xf884fd53;
            puVar5[1] = 0x16d2243a;
            *(undefined2 *)(puVar5 + 2) = 0x9154;
            thunk_GFDIUClbc_QcPNgD_wH(&LAB_71796fa8,puVar5,&DAT_70b0e000);
            puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fad0c);
            *puVar6 = 1;
          }
          if (pbVar1[10] != 0) {
            *pbVar1 = *pbVar1 ^ 0x31;
            pbVar1[1] = pbVar1[1] ^ 0x91;
            pbVar1[2] = pbVar1[2] ^ 0xf1;
            pbVar1[3] = pbVar1[3] ^ 0x9d;
            pbVar1[10] = 0;
            pbVar1[4] = pbVar1[4] ^ 0x49;
            pbVar1[5] = pbVar1[5] ^ 0x49;
            pbVar1[6] = pbVar1[6] ^ 0xbd;
            pbVar1[7] = pbVar1[7] ^ 0x7d;
            pbVar1[8] = pbVar1[8] ^ 0x31;
            pbVar1[9] = pbVar1[9] ^ 0x91;
          }
          FUN_715d1018(iVar11,pbVar1,0,0,0,0xbf19999a,0,0,0);
        }
      }
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 != 0x3ec);
  FUN_71754600(*(int *)(param_1 + 0x1f6c));
  iVar11 = *(int *)(*(int *)(param_1 + 0x1f6c) + 0x130);
  if (iVar11 == 0) {
    return 1;
  }
  thunk_FUN_715600f0(iVar11,auStack_64);
  imp___aeabi_memclr8(auStack_a8,0x40);
  uVar12 = 0;
  if (DAT_711a3938 == 0) {
    uVar10 = 0;
    uVar13 = 0;
    uVar7 = 0;
    uVar8 = 0;
    uVar9 = 0;
  }
  else {
    uVar8 = 0;
    uVar7 = 0;
    uVar9 = 0;
    uVar13 = 0;
    uVar10 = 0;
    if (*(int *)(DAT_711a3938 + 0x13898) != 0) {
      thunk_FUN_714e0378(*(int *)(DAT_711a3938 + 0x13898),auStack_a8);
      uVar8 = uStack_84;
      uVar7 = uStack_80;
      uVar9 = uStack_88;
      uVar13 = uStack_98;
      uVar10 = uStack_94;
      uVar12 = uStack_90;
    }
  }
  FUN_714d21d8(uStack_34,uStack_30,uStack_2c,uVar9 ^ 0x80000000,uVar8 ^ 0x80000000,
               uVar7 ^ 0x80000000,uVar13,uVar10,uVar12);
  iVar3 = thunk_FUN_715609b0(iVar11);
  if (iVar3 == 0x84) {
    if (*(int *)(iVar11 + 0x108) != 0) {
      return 1;
    }
    pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fad2c);
    if (*pcVar4 == '\0') {
      puVar5 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fad1c);
      *puVar5 = 0xc82a4105;
      *(undefined1 *)((int)puVar5 + 6) = 1;
      *(undefined2 *)(puVar5 + 1) = 0x2df0;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71796fd4,puVar5,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fad2c);
      *puVar6 = 1;
    }
    pbVar1 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fad1c);
    if (pbVar1[6] != 0) {
      pbVar1[6] = 0;
      *pbVar1 = *pbVar1 ^ 99;
      pbVar1[1] = pbVar1[1] ^ 0x2d;
      pbVar1[2] = pbVar1[2] ^ 0x4b;
      pbVar1[3] = pbVar1[3] ^ 0xa5;
      pbVar1[4] = pbVar1[4] ^ 0x95;
      pbVar1[5] = pbVar1[5] ^ 0x2d;
    }
    uVar12 = 5;
    uVar13 = 0;
  }
  else {
    if (*(char *)(iVar11 + 0x179) == '\0') {
      if (*(int *)(iVar11 + 0x108) == 0) {
        return 1;
      }
      FUN_715bf5cc(iVar11);
      return 1;
    }
    if (*(int *)(iVar11 + 0x108) != 0) {
      return 1;
    }
    pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fad4c);
    if (*pcVar4 == '\0') {
      puVar5 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fad3c);
      *puVar5 = 0xd4aaa1e5;
      puVar5[1] = 0xaef01042;
      *(undefined1 *)((int)puVar5 + 10) = 1;
      *(undefined2 *)(puVar5 + 2) = 0xcde2;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71796ffc,puVar5,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fad4c);
      *puVar6 = 1;
    }
    pbVar1 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fad3c);
    if (pbVar1[10] != 0) {
      *pbVar1 = *pbVar1 ^ 0x87;
      pbVar1[1] = pbVar1[1] ^ 0xcd;
      pbVar1[2] = pbVar1[2] ^ 0xdf;
      pbVar1[3] = pbVar1[3] ^ 0xb1;
      pbVar1[10] = 0;
      pbVar1[4] = pbVar1[4] ^ 0x31;
      pbVar1[5] = pbVar1[5] ^ 0x7d;
      pbVar1[6] = pbVar1[6] ^ 0x9f;
      pbVar1[7] = pbVar1[7] ^ 0xc5;
      pbVar1[8] = pbVar1[8] ^ 0x87;
      pbVar1[9] = pbVar1[9] ^ 0xcd;
    }
    uVar13 = 0xbf19999a;
    uVar12 = 0;
  }
  FUN_715d1018(iVar11,pbVar1,uVar12,0,0,uVar13,0,0,0);
  return 1;
}


// =========================================================================
// Function: FUN_717960f0
// Entry: 0x717960f0 | Size: 756 bytes
// =========================================================================

void FUN_717960f0(int param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  byte bVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  bool bVar18;
  undefined4 uStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_54;
  int iStack_50;
  int iStack_48;
  int iStack_44;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  imp_strcpy(param_2 * 0x19 + param_1 + 0x42d8,param_3);
  imp_strcpy(param_2 * 0x49 + param_1 + 0xa8d0,param_3);
  uVar7 = imp_strlen(param_3);
  if (0xfffffff7 < uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_30);
  }
  if (uVar7 < 0xb) {
    uVar17 = (uint)&uStack_30 | 1;
    uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar7 << 1));
    if (uVar7 == 0) goto LAB_717961a0;
  }
  else {
    uVar17 = thunk_MwhHq((uVar7 | 7) + 1);
    uStack_30 = (uVar7 | 7) + 2;
    uStack_2c = uVar7;
    uStack_28 = uVar17;
  }
  imp___aeabi_memcpy(uVar17,param_3,uVar7);
LAB_717961a0:
  *(undefined1 *)(uVar17 + uVar7) = 0;
  iVar6 = DAT_712017f8;
  DataMemoryBarrier(0xb);
  if (((DAT_711f6e24 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711f6e24), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fad6c);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fad5c);
      *(undefined1 *)((int)puVar11 + 0x15) = 1;
      uVar5 = DAT_70085488;
      uVar4 = DAT_70085484;
      uVar3 = DAT_70085480;
      uVar15 = DAT_7008547c;
      *puVar11 = DAT_70085478;
      puVar11[1] = uVar15;
      puVar11[2] = uVar3;
      puVar11[3] = uVar4;
      puVar11[4] = uVar5;
      *(undefined1 *)(puVar11 + 5) = DAT_7008548c;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71797028,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fad6c);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fad5c);
    if (*(char *)(iVar9 + 0x15) != '\0') {
      uVar7 = 0;
      uVar17 = 0;
      do {
        iVar16 = (uVar7 & 7) * 8;
        bVar13 = (byte)(0x478bbd0b >> iVar16) |
                 (byte)(-0x24940853 << ((uVar7 & 7) * -8 + 0x20 & 0xff));
        uVar14 = iVar16 - 0x20;
        if (-1 < (int)uVar14) {
          bVar13 = (byte)(0xdb6bf7ad >> (uVar14 & 0xff));
        }
        *(byte *)(iVar9 + uVar7) = *(byte *)(iVar9 + uVar7) ^ bVar13;
        bVar18 = 0xfffffffe < uVar7;
        bVar1 = uVar17 == 0;
        bVar2 = (0x13 < uVar7) <= uVar17;
        uVar7 = uVar7 + 1;
        uVar17 = uVar17 + bVar18;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x15) = 0;
    }
    DAT_711f6e20 = FUN_71885ba4(iVar9,0);
    thunk_SixizuLbAnqfgRApsCY(&DAT_711f6e24);
  }
  uVar15 = DAT_711f6e20;
  imp___aeabi_memclr4(&iStack_60,0x30);
  uStack_64 = uVar15;
  uVar15 = FUN_713a0424(&uStack_64,param_2);
  FUN_71524948(uVar15,&uStack_30);
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(iVar6 + 0x34);
  piVar8 = (int *)thunk_MwhHq(0x3c);
  *piVar8 = 0;
  piVar8[1] = 0;
  FUN_713a10f8(piVar8 + 2,uVar15);
  piVar8[1] = iVar6 + 0x38;
  iVar9 = *(int *)(iVar6 + 0x38);
  *piVar8 = iVar9;
  *(int **)(iVar9 + 4) = piVar8;
  *(int **)(iVar6 + 0x38) = piVar8;
  *(int *)(iVar6 + 0x40) = *(int *)(iVar6 + 0x40) + 1;
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(iVar6 + 0x34);
  if (iStack_48 != 0) {
    iStack_44 = iStack_48;
    thunk_qNQrlu();
  }
  if (iStack_54 != 0) {
    iStack_50 = iStack_54;
    thunk_qNQrlu();
  }
  if (iStack_60 != 0) {
    iStack_5c = iStack_60;
    thunk_qNQrlu();
  }
  if ((uStack_30 & 1) != 0) {
    thunk_qNQrlu(uStack_28);
  }
  return;
}


// =========================================================================
// Function: FUN_71796858
// Entry: 0x71796858 | Size: 20 bytes
// =========================================================================

int FUN_71796858(int param_1,int param_2)

{
  return param_2 * 0x19 + param_1 + 0x42d8;
}


// =========================================================================
// Function: FUN_71796884
// Entry: 0x71796884 | Size: 20 bytes
// =========================================================================

int FUN_71796884(int param_1,int param_2)

{
  return param_2 * 0x49 + param_1 + 0xa8d0;
}


// =========================================================================
// Function: FFrBGIAPGHNVPkLrVoBVJscqWxu
// Entry: 0x717968b0 | Size: 468 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FFrBGIAPGHNVPkLrVoBVJscqWxu(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uStack_68;
  int iStack_64;
  int iStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  int iStack_4c;
  int iStack_48;
  int aiStack_40 [4];
  int *piStack_30;
  int iStack_24;
  
  iStack_24 = _ext___stack_chk_guard;
  uVar2 = imp_strlen(param_2);
  if (0xfffffff7 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_5c);
  }
  if (uVar2 < 0xb) {
    uVar4 = (uint)&uStack_5c | 1;
    uStack_5c = CONCAT31(uStack_5c._1_3_,(char)(uVar2 << 1));
    if (uVar2 != 0) goto LAB_71796930;
  }
  else {
    uVar4 = thunk_MwhHq((uVar2 | 7) + 1);
    uStack_5c = (uVar2 | 7) + 2;
    uStack_58 = uVar2;
    uStack_54 = uVar4;
LAB_71796930:
    imp___aeabi_memcpy(uVar4,param_2,uVar2);
  }
  *(undefined1 *)(uVar4 + uVar2) = 0;
  FUN_71800d24(&uStack_50,&uStack_5c);
  if ((uStack_5c & 1) != 0) {
    thunk_qNQrlu(uStack_54);
  }
  iVar1 = DAT_712017fc;
  if (DAT_712017fc == 0) goto LAB_71796a44;
  if ((uStack_50 & 1) == 0) {
    uStack_68 = uStack_50;
    iStack_64 = iStack_4c;
    iStack_60 = iStack_48;
  }
  else {
    FUN_712f6d58(&uStack_68,iStack_48,iStack_4c);
  }
  iVar5 = 0x14;
  piStack_30 = (int *)thunk_MwhHq(0x14);
  *piStack_30 = (int)&DAT_70b0f354;
  piStack_30[1] = param_1;
  piStack_30[2] = uStack_68;
  piStack_30[3] = iStack_64;
  piStack_30[4] = iStack_60;
  piVar3 = aiStack_40;
  uStack_68 = 0;
  iStack_64 = 0;
  iStack_60 = 0;
  FUN_717ccb10(iVar1,piVar3);
  if (piStack_30 == piVar3) {
    iVar5 = 0x10;
LAB_71796a24:
    (**(code **)(*piVar3 + iVar5))();
  }
  else {
    piVar3 = piStack_30;
    if (piStack_30 != (int *)0x0) goto LAB_71796a24;
  }
  if ((uStack_68 & 1) != 0) {
    thunk_qNQrlu(iStack_60);
  }
LAB_71796a44:
  if ((uStack_50 & 1) != 0) {
    thunk_qNQrlu(iStack_48);
  }
  if (_ext___stack_chk_guard == iStack_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_71796c6c
// Entry: 0x71796c6c | Size: 24 bytes
// =========================================================================

undefined4 FUN_71796c6c(int param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  int *piVar2;
  
  thunk_MwhHq(0x13c);
  iVar1 = FUN_7179add8();
  piVar2 = (int *)(param_1 + param_2 * 4 + 0x1f8c);
  *piVar2 = iVar1;
  FUN_717960f0(param_1,param_2,param_3);
  *(short *)(*piVar2 + 0x18) = (short)param_2;
  *(undefined1 *)(*piVar2 + 0x1c) = param_4;
  *(undefined1 *)(param_1 + param_2 + 0x3eec) = 1;
  return 1;
}


// =========================================================================
// Function: FUN_71796d54
// Entry: 0x71796d54 | Size: 16 bytes
// =========================================================================

uint FUN_71796d54(int param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  
  uVar2 = 0xffff;
  if ((param_2 != 0) && ((*(byte *)(param_2 + 0x3a) & 7) == 3)) {
    uVar1 = *(ushort *)(param_2 + 0x24);
    if (0xfa < uVar1 >> 2) {
      return 0xffff;
    }
    if (*(char *)(param_1 + (uint)uVar1 + 0x3eec) != '\0') {
      uVar2 = (uint)uVar1;
    }
  }
  return uVar2;
}


// =========================================================================
// Function: FUN_71796dc8
// Entry: 0x71796dc8 | Size: 40 bytes
// =========================================================================

void FUN_71796dc8(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int unaff_r4;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar2 = *(int *)(param_1 + 0x1f8c + iVar3 * -4);
    if (iVar2 != 0) {
      unaff_r4 = *(int *)(iVar2 + 0x10);
    }
    if ((iVar2 != 0 && unaff_r4 != 0) && (iVar2 = thunk_FUN_715bf66c(unaff_r4), iVar2 == 0)) {
      uVar1 = thunk_FUN_7156074c(unaff_r4);
      *(undefined1 *)((param_1 + 0xa4e4) - iVar3) = uVar1;
      thunk_FUN_71560790(unaff_r4,1);
    }
    iVar3 = iVar3 + -1;
  } while (iVar3 != -0x3ec);
  return;
}


// =========================================================================
// Function: FUN_71796eb8
// Entry: 0x71796eb8 | Size: 40 bytes
// =========================================================================

void FUN_71796eb8(int param_1)

{
  int iVar1;
  int unaff_r4;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = *(int *)(param_1 + 0x1f8c + iVar2 * -4);
    if (iVar1 != 0) {
      unaff_r4 = *(int *)(iVar1 + 0x10);
    }
    if ((iVar1 != 0 && unaff_r4 != 0) && (iVar1 = thunk_FUN_715bf66c(unaff_r4), iVar1 == 0)) {
      thunk_FUN_71560790(unaff_r4,*(undefined1 *)((param_1 + 0xa4e4) - iVar2));
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != -0x3ec);
  return;
}


// =========================================================================
// Function: FUN_717973a4
// Entry: 0x717973a4 | Size: 48 bytes
// =========================================================================

void FUN_717973a4(int param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    thunk_qNQrlu(*(undefined4 *)(param_1 + 0x10));
  }
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: FUN_7179745c
// Entry: 0x7179745c | Size: 64 bytes
// =========================================================================

void FUN_7179745c(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    iVar1 = param_1 + 9;
  }
  iVar1 = imp_strncpy(param_3 * 0x49 + param_4 + 0xa8d0,iVar1,0x48);
  *(undefined1 *)(iVar1 + 0x48) = 0;
  return;
}


// =========================================================================
// Function: FUN_717974f0
// Entry: 0x717974f0 | Size: 24 bytes
// =========================================================================

undefined4 FUN_717974f0(undefined4 param_1)

{
  imp___aeabi_memclr4(param_1,0x402);
  return param_1;
}


// =========================================================================
// Function: FUN_71797558
// Entry: 0x71797558 | Size: 36 bytes
// =========================================================================

int FUN_71797558(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    piVar1 = *(int **)(param_1 + iVar2 * 4);
    if (piVar1 != (int *)0x0) {
      if (piVar1[3] != 0) {
        piVar1[4] = piVar1[3];
        thunk_qNQrlu();
      }
      if (*piVar1 != 0) {
        piVar1[1] = *piVar1;
        thunk_qNQrlu();
      }
      thunk_qNQrlu(piVar1);
      *(undefined4 *)(param_1 + iVar2 * 4) = 0;
      *(short *)(param_1 + 0x400) = *(short *)(param_1 + 0x400) + -1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x100);
  return param_1;
}


// =========================================================================
// Function: FUN_71798e00
// Entry: 0x71798e00 | Size: 2140 bytes
// =========================================================================

void FUN_71798e00(undefined4 param_1,int *param_2,uint param_3,int param_4,int param_5)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int extraout_r1;
  undefined4 *puVar13;
  byte *pbVar14;
  uint uVar15;
  int iVar16;
  undefined4 *puVar17;
  undefined4 uVar18;
  undefined4 *puStack_66c;
  undefined4 auStack_668 [4];
  undefined4 uStack_658;
  undefined4 uStack_654;
  undefined4 uStack_650;
  undefined4 uStack_64c;
  undefined4 uStack_648;
  undefined4 uStack_644;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  undefined4 uStack_638;
  undefined4 uStack_634;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  undefined4 auStack_628 [128];
  undefined4 auStack_428 [128];
  undefined4 auStack_228 [129];
  
  if (0xffffff < param_3) {
    imp___aeabi_memclr8(auStack_228,0x200);
    iVar8 = DAT_70ffc974;
    iVar3 = *param_2;
    if (param_2[1] == iVar3) {
      uVar9 = 0;
    }
    else {
      iVar16 = 0;
      uVar15 = 0;
      do {
        auStack_428[0] = *(undefined4 *)(iVar3 + iVar16);
        auStack_428[1] = ((undefined4 *)(iVar3 + iVar16))[1];
        FUN_7145bb7c(auStack_428,auStack_428);
        puVar13 = (undefined4 *)((int)auStack_228 + iVar16);
        FUN_7145bfac(puVar13,auStack_428);
        if (param_4 != 0) {
          uVar4 = FUN_71ba1b94(*(undefined4 *)(iVar8 + 8));
          uVar4 = FUN_71ba21e8(uVar4,0x3b124925);
          uVar5 = FUN_71ba21e8(*puVar13,uVar4);
          *puVar13 = uVar5;
          uVar4 = FUN_71ba21e8(uVar4,*(undefined4 *)((int)auStack_228 + iVar16 + 4));
          *(undefined4 *)((int)auStack_228 + iVar16 + 4) = uVar4;
        }
        iVar16 = iVar16 + 8;
        uVar15 = uVar15 + 1;
        iVar3 = *param_2;
        uVar9 = param_2[1] - iVar3 >> 3;
      } while (uVar15 < uVar9);
    }
    puVar17 = DAT_70b3eee8;
    puVar13 = DAT_70b3eee4;
    if (param_5 == 0) {
      iVar8 = param_2[3];
      if (2 < (uint)(param_2[4] - iVar8)) {
        iVar3 = 0;
        do {
          if (DAT_711f6e30 - 0x5feU < 0xfffff9ff) {
            FUN_71799f18();
            iVar8 = param_2[3];
          }
          iVar16 = DAT_711f6e30;
          bVar1 = *(byte *)(iVar8 + iVar3);
          iVar8 = DAT_711f6e30 * 0x1c;
          *(undefined4 *)(&DAT_711f6e34 + iVar8) = auStack_228[(uint)bVar1 * 2];
          *(undefined4 *)(&DAT_711f6e38 + iVar8) = auStack_228[(uint)bVar1 * 2 + 1];
          uVar4 = FUN_71ba0b38(*puVar13,0x38d1b717);
          *(undefined4 *)(&DAT_711f6e3c + iVar8) = uVar4;
          *(undefined4 *)(&DAT_711f6e40 + iVar8) = *puVar17;
          *(uint *)(&DAT_711f6e44 + iVar8) = param_3;
          uVar9 = (uint)*(byte *)(param_2[3] + iVar3 + 1);
          uVar4 = auStack_228[uVar9 * 2 + 1];
          *(undefined4 *)(&DAT_711f6e50 + iVar8) = auStack_228[uVar9 * 2];
          *(undefined4 *)(&DAT_711f6e54 + iVar8) = uVar4;
          uVar4 = FUN_71ba0b38(*puVar13,0x38d1b717);
          *(undefined4 *)(&DAT_711f6e58 + iVar8) = uVar4;
          *(undefined4 *)(&DAT_711f6e5c + iVar8) = *puVar17;
          *(uint *)(&DAT_711f6e60 + iVar8) = param_3;
          uVar9 = (uint)*(byte *)(param_2[3] + iVar3 + 2);
          uVar4 = auStack_228[uVar9 * 2 + 1];
          *(undefined4 *)(&DAT_711f6e6c + iVar8) = auStack_228[uVar9 * 2];
          *(undefined4 *)(&DAT_711f6e70 + iVar8) = uVar4;
          uVar4 = FUN_71ba0b38(*puVar13,0x38d1b717);
          *(undefined4 *)(&DAT_711f6e74 + iVar8) = uVar4;
          DAT_711f6e30 = iVar16 + 3;
          *(undefined4 *)(&DAT_711f6e78 + iVar8) = *puVar17;
          uVar9 = iVar3 + 5;
          *(uint *)(&DAT_711f6e7c + iVar8) = param_3;
          iVar8 = param_2[3];
          iVar3 = iVar3 + 3;
        } while (uVar9 < (uint)(param_2[4] - iVar8));
      }
    }
    else {
      puVar13 = auStack_428;
      imp___aeabi_memclr8(puVar13,0x200);
      puStack_66c = auStack_628;
      imp___aeabi_memclr8(puStack_66c,0x200);
      if (uVar9 != 0) {
        puVar17 = auStack_228;
        uVar15 = 1;
        do {
          uVar6 = 0;
          if (uVar15 != uVar9) {
            uVar6 = uVar15;
          }
          uVar4 = FUN_71ba240c(auStack_228[uVar6 * 2],*puVar17);
          uVar6 = FUN_71ba240c(auStack_228[uVar6 * 2 + 1],puVar17[1]);
          uVar5 = FUN_71ba21e8(uVar6,uVar6);
          uVar7 = FUN_71ba21e8(uVar4,uVar4);
          FUN_71ba0b38(uVar7,uVar5);
          uVar5 = imp_sqrtf();
          iVar8 = FUN_71ba2d70(uVar5,0x38d1b717);
          if (iVar8 != 0) {
            uVar5 = FUN_71ba13e0(0x3f800000,uVar5);
            uVar4 = FUN_71ba21e8(uVar4,uVar5);
            puVar13[1] = uVar4;
            uVar4 = FUN_71ba21e8(uVar5,uVar6 ^ 0x80000000);
            *puVar13 = uVar4;
          }
          uVar15 = uVar15 + 1;
          puVar17 = puVar17 + 2;
          puVar13 = puVar13 + 2;
        } while (uVar15 - uVar9 != 1);
        puVar13 = auStack_428;
        uVar15 = 0;
        do {
          FUN_71ba33fc(uVar9 + uVar15 + -1,uVar9);
          uVar18 = *puVar13;
          uVar5 = FUN_71ba0b38(auStack_428[extraout_r1 * 2],uVar18);
          uVar4 = puVar13[1];
          uVar7 = FUN_71ba0b38(auStack_428[extraout_r1 * 2 + 1],uVar4);
          uVar10 = FUN_71ba21e8(uVar7,uVar7);
          uVar11 = FUN_71ba21e8(uVar5,uVar5);
          FUN_71ba0b38(uVar11,uVar10);
          uVar10 = imp_sqrtf();
          iVar8 = FUN_71ba2d70(uVar10,0x38d1b717);
          if (iVar8 == 0) {
            uVar7 = FUN_71ba21e8(uVar18,0x3fc00000);
            uVar5 = 0x3fc00000;
          }
          else {
            uVar11 = FUN_71ba13e0(uVar5,uVar10);
            uVar10 = FUN_71ba13e0(uVar7,uVar10);
            uVar4 = FUN_71ba21e8(uVar4,uVar10);
            uVar5 = FUN_71ba21e8(uVar11,uVar18);
            uVar4 = FUN_71ba0b38(uVar5,uVar4);
            iVar8 = FUN_71ba2d10(uVar4,0x3e800000);
            if (iVar8 != 0) {
              uVar4 = 0x3e800000;
            }
            uVar5 = FUN_71ba13e0(0x3fc00000,uVar4);
            uVar7 = FUN_71ba21e8(uVar11,uVar5);
            uVar4 = uVar10;
          }
          uVar4 = FUN_71ba21e8(uVar4,uVar5);
          puVar2 = DAT_70b3eee8;
          puVar17 = DAT_70b3eee4;
          puVar13 = puVar13 + 2;
          uVar15 = uVar15 + 1;
          puVar12 = puStack_66c + 1;
          *puStack_66c = uVar7;
          puStack_66c = puStack_66c + 2;
          *puVar12 = uVar4;
        } while (uVar9 != uVar15);
        uVar15 = 0;
        do {
          iVar8 = DAT_711f6e30;
          uVar10 = auStack_628[uVar15 * 2];
          uVar4 = auStack_228[uVar15 * 2];
          auStack_668[2] = FUN_71ba240c(uVar4,uVar10);
          uVar11 = auStack_228[uVar15 * 2 + 1];
          uVar7 = auStack_628[uVar15 * 2 + 1];
          auStack_668[1] = FUN_71ba0b38(uVar11,uVar7);
          auStack_668[3] = FUN_71ba240c(uVar11,uVar7);
          uVar5 = FUN_71ba21e8(uVar10,0x3fd55555);
          uStack_658 = FUN_71ba0b38(uVar4,uVar5);
          uStack_650 = FUN_71ba240c(uVar4,uVar5);
          uVar5 = FUN_71ba21e8(uVar7,0x3fd55555);
          uStack_654 = FUN_71ba0b38(uVar11,uVar5);
          uStack_64c = FUN_71ba240c(uVar11,uVar5);
          uVar15 = uVar15 + 1;
          uVar6 = 0;
          if (uVar15 != uVar9) {
            uVar6 = uVar15;
          }
          uVar11 = auStack_228[uVar6 * 2];
          uVar18 = auStack_628[uVar6 * 2];
          uStack_648 = FUN_71ba0b38(uVar11,uVar18);
          uVar7 = auStack_228[uVar6 * 2 + 1];
          uVar5 = auStack_628[uVar6 * 2 + 1];
          uStack_644 = FUN_71ba0b38(uVar7,uVar5);
          auStack_668[0] = FUN_71ba0b38(uVar4,uVar10);
          uStack_63c = FUN_71ba240c(uVar7,uVar5);
          uStack_640 = FUN_71ba240c(uVar11,uVar18);
          uVar4 = FUN_71ba21e8(uVar18,0x3fd55555);
          uStack_638 = FUN_71ba0b38(uVar11,uVar4);
          uVar5 = FUN_71ba21e8(uVar5,0x3fd55555);
          uStack_634 = FUN_71ba0b38(uVar7,uVar5);
          uStack_630 = FUN_71ba240c(uVar11,uVar4);
          uStack_62c = FUN_71ba240c(uVar7,uVar5);
          if (iVar8 - 0x5efU < 0xfffff9ff) {
            FUN_71799f18();
            iVar8 = DAT_711f6e30;
          }
          iVar3 = 0;
          pbVar14 = &DAT_700854a5;
          do {
            bVar1 = *pbVar14;
            puVar13 = (undefined4 *)(&DAT_711f6e34 + iVar3 + iVar8 * 0x1c);
            *puVar13 = auStack_668[(uint)bVar1 * 2];
            puVar13[1] = auStack_668[(uint)bVar1 * 2 + 1];
            uVar4 = FUN_71ba0b38(*puVar17,0x38d1b717);
            puVar13[2] = uVar4;
            iVar3 = iVar3 + 0x1c;
            puVar13[3] = *puVar2;
            uVar6 = param_3 & 0xffffff;
            if ((bVar1 & 2) == 0) {
              uVar6 = param_3 & 0xffffff | 0xff000000;
            }
            puVar13[4] = uVar6;
            pbVar14 = pbVar14 + 1;
          } while (iVar3 != 0x1f8);
          DAT_711f6e30 = iVar8 + 0x12;
        } while (uVar15 != uVar9);
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71799f18
// Entry: 0x71799f18 | Size: 132 bytes
// =========================================================================

void FUN_71799f18(void)

{
  if (DAT_711f6e30 == 0) {
    return;
  }
  FUN_71413b60(1,0);
  FUN_71413b60(0xc,1);
  FUN_71413b60(10,5);
  FUN_71413b60(0xb,6);
  FUN_71413f98(3,&DAT_711f6e34,DAT_711f6e30);
  FUN_71413b60(0xc,0);
  DAT_711f6e30 = 0;
  return;
}


// =========================================================================
// Function: FUN_7179a0dc
// Entry: 0x7179a0dc | Size: 1224 bytes
// =========================================================================

void FUN_7179a0dc(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  char *pcVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  
  iVar2 = FUN_71886108();
  if (499 < (uint)(iVar2 - DAT_71201634)) {
    DAT_71201638 = ~DAT_71201638;
    DAT_71201634 = iVar2;
  }
  if (*(short *)(param_1 + 0x400) == 0) {
    return;
  }
  pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fadac);
  if (*pcVar3 == '\0') {
    puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fad9c);
    *(undefined1 *)(puVar11 + 3) = 1;
    *puVar11 = 0x158c0a45;
    puVar11[1] = 0xd896f08e;
    puVar11[2] = 0x79830651;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_7179abac,puVar11,&DAT_70b0e000);
    puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fadac);
    *puVar12 = 1;
  }
  pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fad9c);
  if (pbVar4[0xc] != 0) {
    *pbVar4 = *pbVar4 ^ 0x21;
    pbVar4[1] = pbVar4[1] ^ 99;
    pbVar4[2] = pbVar4[2] ^ 0xed;
    pbVar4[3] = pbVar4[3] ^ 0x79;
    pbVar4[0xc] = 0;
    pbVar4[4] = pbVar4[4] ^ 0xe1;
    pbVar4[5] = pbVar4[5] ^ 0x97;
    pbVar4[6] = pbVar4[6] ^ 0xc9;
    pbVar4[7] = pbVar4[7] ^ 0xb7;
    pbVar4[8] = pbVar4[8] ^ 0x21;
    pbVar4[9] = pbVar4[9] ^ 99;
    pbVar4[10] = pbVar4[10] ^ 0xed;
    pbVar4[0xb] = pbVar4[0xb] ^ 0x79;
  }
  uVar5 = imp_strlen(pbVar4);
  if (0xfffffff7 < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_38);
  }
  if (uVar5 < 0xb) {
    uVar14 = (uint)&uStack_38 | 1;
    uStack_38 = CONCAT31(uStack_38._1_3_,(char)(uVar5 << 1));
    if (uVar5 == 0) goto LAB_7179a27c;
  }
  else {
    uVar14 = thunk_MwhHq((uVar5 | 7) + 1);
    uStack_38 = (uVar5 | 7) + 2;
    uStack_34 = uVar5;
    uStack_30 = uVar14;
  }
  imp___aeabi_memmove(uVar14,pbVar4,uVar5);
LAB_7179a27c:
  *(undefined1 *)(uVar14 + uVar5) = 0;
  iVar2 = FUN_717c5e7c(&uStack_38);
  if ((uStack_38 & 1) != 0) {
    thunk_qNQrlu(uStack_30);
  }
  if (iVar2 == 0) {
    iVar2 = FUN_71638070();
    if (iVar2 == 0) {
      iVar6 = FUN_7156ace4();
      if (iVar6 == 0) {
        return;
      }
      thunk_FUN_713f5aa4(&DAT_711b2fa8);
    }
    puVar1 = DAT_710002d0;
    puVar11 = DAT_710002c8;
    iVar6 = 0;
    puVar7 = DAT_710002c8 + 1;
    do {
      iVar15 = *(int *)(param_1 + iVar6 * 4);
      if (iVar15 != 0) {
        if (iVar2 == 0) {
          uVar8 = FUN_71ba21e8(*puVar1,0x3fb9999a);
          uVar13 = *puVar11;
          uVar9 = FUN_71ba240c(uVar13,uVar8);
          iVar10 = FUN_71ba2d10(*(undefined4 *)(iVar15 + 0x20),uVar9);
          if (iVar10 == 0) {
            uVar9 = FUN_71ba0b38(uVar8,uVar13);
            iVar10 = FUN_71ba2d70(*(undefined4 *)(iVar15 + 0x18),uVar9);
            if (iVar10 == 0) {
              uVar13 = *puVar7;
              uVar9 = FUN_71ba240c(uVar13,uVar8);
              iVar10 = FUN_71ba2d10(*(undefined4 *)(iVar15 + 0x24),uVar9);
              if (iVar10 == 0) {
                uVar8 = FUN_71ba0b38(uVar8,uVar13);
                iVar10 = FUN_71ba2d70(*(undefined4 *)(iVar15 + 0x1c),uVar8);
                if (iVar10 == 0) goto LAB_7179a30c;
              }
            }
          }
        }
        else {
LAB_7179a30c:
          iVar10 = 0x2c;
          if (DAT_71201638 == 0) {
            iVar10 = 0x28;
          }
          FUN_71798e00(0,iVar15,*(undefined4 *)(iVar15 + iVar10),iVar2,0);
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0x100);
    FUN_71799f18();
    iVar6 = 0;
    do {
      iVar15 = *(int *)(param_1 + iVar6 * 4);
      if (iVar15 != 0) {
        if (iVar2 == 0) {
          uVar8 = FUN_71ba21e8(*puVar1,0x3fb9999a);
          uVar13 = *puVar11;
          uVar9 = FUN_71ba240c(uVar13,uVar8);
          iVar10 = FUN_71ba2d10(*(undefined4 *)(iVar15 + 0x20),uVar9);
          if (iVar10 == 0) {
            uVar9 = FUN_71ba0b38(uVar8,uVar13);
            iVar10 = FUN_71ba2d70(*(undefined4 *)(iVar15 + 0x18),uVar9);
            if (iVar10 == 0) {
              uVar13 = *puVar7;
              uVar9 = FUN_71ba240c(uVar13,uVar8);
              iVar10 = FUN_71ba2d10(*(undefined4 *)(iVar15 + 0x24),uVar9);
              if (iVar10 == 0) {
                uVar8 = FUN_71ba0b38(uVar8,uVar13);
                iVar10 = FUN_71ba2d70(*(undefined4 *)(iVar15 + 0x1c),uVar8);
                if (iVar10 == 0) goto LAB_7179a418;
              }
            }
          }
        }
        else {
LAB_7179a418:
          iVar10 = 0x2c;
          if (DAT_71201638 == 0) {
            iVar10 = 0x28;
          }
          FUN_71798e00(1,iVar15,*(undefined4 *)(iVar15 + iVar10),iVar2,1);
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0x100);
    FUN_71799f18();
    if (iVar2 == 0) {
      uStack_2c = 0;
      uStack_30 = 0;
      uStack_34 = 0;
      uStack_38 = 0;
      thunk_FUN_713f5aa4(&uStack_38);
      return;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_7179abd8
// Entry: 0x7179abd8 | Size: 416 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void FUN_7179abd8(int *param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  undefined4 in_cr15;
  
  iVar3 = *param_1;
  uVar1 = param_1[2];
  if (param_4 <= (uint)((int)(uVar1 - iVar3) >> 3)) {
    iVar2 = param_1[1] - iVar3;
    if ((uint)(iVar2 >> 3) < param_4) {
      iVar2 = param_2 + iVar2;
      if (param_1[1] != iVar3) {
        imp___aeabi_memmove4(iVar3,param_2);
        iVar3 = param_1[1];
      }
      param_3 = param_3 - iVar2;
      if (param_3 != 0) {
        imp___aeabi_memmove4(iVar3,iVar2,param_3);
      }
      param_1[1] = iVar3 + param_3;
      return;
    }
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      imp___aeabi_memmove4(iVar3,param_2,param_3);
    }
LAB_7179ace8:
    param_1[1] = iVar3 + param_3;
    return;
  }
  if (iVar3 != 0) {
    param_1[1] = iVar3;
    thunk_qNQrlu(iVar3);
    uVar1 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  bVar6 = 0x1fffffff < param_4;
  if (!bVar6) {
    if (param_4 < (uint)((int)uVar1 >> 2)) {
      param_4 = (int)uVar1 >> 2;
    }
    if (0x7ffffff7 < uVar1) {
      param_4 = 0x1fffffff;
    }
    bVar6 = 0x1fffffff < param_4;
    if (!bVar6) {
      iVar3 = thunk_MwhHq(param_4 << 3);
      param_3 = param_3 - param_2;
      *param_1 = iVar3;
      param_1[1] = iVar3;
      param_1[2] = iVar3 + param_4 * 8;
      if (param_3 != 0) {
        imp___aeabi_memcpy4(iVar3,param_2,param_3);
      }
      goto LAB_7179ace8;
    }
  }
  uVar5 = SBORROW4(param_4,0x20000000);
  bVar4 = param_4 == 0x20000000;
  FUN_71750c74(param_1);
  if (!bVar6 || bVar4) {
    func_0x72c26910();
  }
  if (!(bool)uVar5) {
    coprocessor_loadlong(0,in_cr15,param_2 + -0xb0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: FUN_7179add8
// Entry: 0x7179add8 | Size: 172 bytes
// =========================================================================

undefined1 * FUN_7179add8(undefined1 *param_1)

{
  FUN_7136cdfc(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  FUN_7136cdfc(param_1 + 0x70);
  FUN_7136cdfc(param_1 + 0x7c);
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  FUN_7136cdfc(param_1 + 0xa8);
  FUN_7136cdfc(param_1 + 0xb4);
  FUN_7136cdfc(param_1 + 0xdc);
  FUN_7136cdfc(param_1 + 0xec);
  FUN_7136cdfc(param_1 + 0xf8);
  FUN_7136cdfc(param_1 + 0x104);
  FUN_7136cdfc(param_1 + 0x110);
  FUN_7136cdfc(param_1 + 0x11c);
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *(undefined2 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *param_1 = 1;
  param_1[0x1e] = 0xff;
  *(undefined2 *)(param_1 + 0x1c) = 0x100;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined2 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0xe8] = 0xff;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[0xc] = 0;
  param_1[0x13a] = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return param_1;
}


// =========================================================================
// Function: FUN_7179b040
// Entry: 0x7179b040 | Size: 24 bytes
// =========================================================================

undefined4 FUN_7179b040(undefined4 param_1)

{
  FUN_7179b08c();
  return param_1;
}


// =========================================================================
// Function: FUN_7179b08c
// Entry: 0x7179b08c | Size: 24 bytes
// =========================================================================

void FUN_7179b08c(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_71563ccc(DAT_711a3938);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_71563ccc(DAT_711a3938);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_71561e40(DAT_711a3938);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}


// =========================================================================
// Function: FUN_7179b1e8
// Entry: 0x7179b1e8 | Size: 2212 bytes
// =========================================================================

void FUN_7179b1e8(int param_1)

{
  bool bVar1;
  bool bVar2;
  ushort uVar3;
  char cVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  char cVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  bool bVar18;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 auStack_a8 [48];
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar17 = *(int *)(DAT_711f6d58 + 0xac);
  uVar5 = FUN_7136cdfc(&uStack_b4);
  iVar11 = *(int *)(param_1 + 0x10);
  if (iVar11 != 0) {
    uVar5 = (uint)*(byte *)(param_1 + 0x28);
  }
  if (iVar11 == 0 || uVar5 == 0) {
    if (iVar11 == 0) {
      return;
    }
    FUN_71561e40(DAT_711a3938);
    *(undefined4 *)(param_1 + 0x10) = 0;
    return;
  }
  FUN_7171fcf4(*(undefined4 *)(iVar11 + 0x8c));
  cVar9 = *(char *)(param_1 + 0x28);
  cVar4 = *(char *)(param_1 + 0x29);
  if (cVar9 == '\x11' && cVar4 == '\x01') {
    iVar11 = thunk_FUN_715bf66c(*(undefined4 *)(param_1 + 0x10));
    if (iVar11 != 0) {
      cVar9 = *(char *)(param_1 + 0x28);
      cVar4 = *(char *)(param_1 + 0x29);
      goto LAB_7179b284;
    }
    uVar5 = FUN_715c0530(*(undefined4 *)(param_1 + 0x10));
    if (uVar5 != *(byte *)(param_1 + 0x6e)) {
      FUN_715c1944(*(undefined4 *)(param_1 + 0x10),(uint)*(byte *)(param_1 + 0x6e),9999);
      FUN_715c3b44(*(undefined4 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x6e));
    }
    thunk_FUN_7179c4c0(param_1,(undefined4 *)(param_1 + 0x50),param_1 + 0x70);
    FUN_7179c530(param_1);
    FUN_7179cb04(param_1);
  }
  else {
LAB_7179b284:
    if (cVar9 == '\x13' && cVar4 == '\x02') {
      iVar11 = thunk_FUN_715bf66c(*(undefined4 *)(param_1 + 0x10));
      if (iVar11 != 0) {
        if (*(int *)(param_1 + 0x14) == 0) {
          return;
        }
        iVar11 = FUN_713513f4(*(undefined4 *)(*(int *)(param_1 + 0x14) + 8));
        if (iVar11 == 0) {
          return;
        }
        FUN_71358370(param_1 + 0x98);
        FUN_71357e24(param_1 + 0x98,auStack_a8);
        uStack_78 = *(undefined4 *)(param_1 + 0xa8);
        uStack_74 = *(undefined4 *)(param_1 + 0xac);
        uStack_70 = *(undefined4 *)(param_1 + 0xb0);
        iVar11 = FUN_715f8740(*(undefined4 *)(param_1 + 0x14));
        if (((iVar11 != 0x21a) &&
            (iVar11 = FUN_715f8740(*(undefined4 *)(param_1 + 0x14)), iVar11 != 0x219)) &&
           (iVar11 = FUN_715f8740(*(undefined4 *)(param_1 + 0x14)), iVar11 != 0x1c1)) {
          iVar11 = thunk_FUN_715f4594(*(undefined4 *)(param_1 + 0x14));
          if ((iVar11 == 9) ||
             (iVar11 = thunk_FUN_715f4594(*(undefined4 *)(param_1 + 0x14)), iVar11 == 10)) {
            FUN_71603228(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0xcb));
          }
          FUN_7179d638(param_1,auStack_a8,(undefined4 *)(param_1 + 0xa8),param_1 + 0xb4);
          FUN_7179d79c(param_1);
        }
        FUN_715f5be4(*(undefined4 *)(param_1 + 0x14),*(char *)(param_1 + 199) != '\0');
        uVar15 = *(undefined4 *)(param_1 + 0xc0);
        iVar11 = FUN_71ba2d10(uVar15,0x43960000);
        if (iVar11 != 0) {
          uVar15 = 0x43960000;
          *(undefined4 *)(param_1 + 0xc0) = 0x43960000;
        }
        thunk_FUN_715f68a0(*(undefined4 *)(param_1 + 0x14),uVar15);
        uVar15 = FUN_715613f8(*(undefined4 *)(param_1 + 0x14));
        iVar11 = FUN_71ba2d10(uVar15,0x43480000);
        if (iVar11 == 0) {
          thunk_FUN_715f686c(*(undefined4 *)(param_1 + 0x14),0);
        }
        else {
          uVar3 = *(ushort *)(param_1 + 0xc9);
          iVar11 = thunk_FUN_715f6784(*(undefined4 *)(param_1 + 0x14));
          if (uVar3 - 1 >> 4 < 0x7d) {
            uVar5 = (uint)*(ushort *)(param_1 + 0xc9);
            if (((uVar5 < 0x7d1) && (*(char *)(*(int *)(DAT_711f6d58 + 4) + uVar5 + 0x3e88) != '\0')
                ) && ((iVar11 == 0 && (*(int *)(*(int *)(DAT_711f6d58 + 4) + uVar5 * 4) != 0)))) {
              thunk_FUN_715f686c(*(undefined4 *)(param_1 + 0x14));
              thunk_FUN_715f65c4(*(undefined4 *)(param_1 + 0x14));
            }
          }
          else if (iVar11 != 0) {
            FUN_715f6638(*(undefined4 *)(param_1 + 0x14));
            thunk_FUN_715f686c(*(undefined4 *)(param_1 + 0x14),0);
          }
        }
        goto LAB_7179b4d0;
      }
      cVar9 = *(char *)(param_1 + 0x28);
      cVar4 = *(char *)(param_1 + 0x29);
    }
    if ((cVar9 == '\x12' && cVar4 == '\x03') && (*(int *)(param_1 + 0x14) == 0)) {
      return;
    }
  }
LAB_7179b4d0:
  *(undefined1 *)(param_1 + 0x29) = 0;
  cVar9 = *(char *)(param_1 + 0x28);
  if (cVar9 == '\x11') {
    iVar11 = thunk_FUN_715bf66c(*(undefined4 *)(param_1 + 0x10));
    if (iVar11 == 0) {
      FUN_7179e250(param_1,*(undefined1 *)(param_1 + 0x6f));
      FUN_7179f298(param_1);
      if (*(char *)(param_1 + 0xe8) == -1) {
        thunk_FUN_715cc968(*(undefined4 *)(param_1 + 0x10),*(undefined2 *)(param_1 + 0x4c),
                           *(undefined2 *)(param_1 + 0x48),*(undefined2 *)(param_1 + 0x4a));
      }
      else {
        *(char *)(param_1 + 0x6e) = *(char *)(param_1 + 0xe8);
        FUN_715c3b44(*(undefined4 *)(param_1 + 0x10));
        uVar16 = *(undefined4 *)(param_1 + 0x10);
        uVar15 = thunk_FUN_7151dc0c(*(undefined4 *)(*(int *)(iVar17 + 0x1f6c) + 0x130));
        thunk_FUN_715bf890(uVar16,uVar15);
        thunk_FUN_715cc968(*(undefined4 *)(param_1 + 0x10),4,*(undefined2 *)(param_1 + 0x48),
                           *(undefined2 *)(param_1 + 0x4a));
        *(undefined1 *)(param_1 + 0xe8) = 0xff;
      }
      if ((&DAT_711f51a0)[(short)(ushort)*(byte *)(*(int *)(param_1 + 0x10) + 0x52) * 0x1d] == '\0')
      {
        FUN_715c3a48();
      }
      else {
        FUN_715c3d90();
      }
      uVar15 = *(undefined4 *)(param_1 + 0x70);
      iVar11 = FUN_71ba2cf0(uVar15,0);
      if (iVar11 != 0) {
        uVar16 = *(undefined4 *)(param_1 + 0x74);
        iVar11 = FUN_71ba2cf0(uVar16,0);
        if (iVar11 != 0) {
          uVar14 = *(undefined4 *)(param_1 + 0x78);
          iVar11 = FUN_71ba2cf0(uVar14,0);
          if (iVar11 != 0) {
            thunk_FUN_71560058(*(undefined4 *)(param_1 + 0x10),uVar15,uVar16,uVar14);
          }
        }
      }
      uVar15 = 1;
      if ((*(char *)(param_1 + 0x28) == '\x11') && (*(ushort *)(param_1 + 0x88) - 1 < 3000)) {
        FUN_7179f664(param_1);
        uVar15 = 0;
      }
      FUN_71560364(*(undefined4 *)(param_1 + 0x10),uVar15);
      thunk_FUN_71560790(*(undefined4 *)(param_1 + 0x10),uVar15);
      iVar11 = FUN_71886108();
      if ((uint)(iVar11 - *(int *)(param_1 + 0x2c)) < 0x5dd) {
        if (*(char *)(param_1 + 0x1d) == '\0') goto LAB_7179b984;
      }
      else {
        *(undefined1 *)(param_1 + 0x1d) = 1;
      }
      iVar11 = FUN_71886108();
      if (3000 < (uint)(iVar11 - *(int *)(param_1 + 0x2c))) {
        *(undefined4 *)(param_1 + 0x48) = 0;
        uStack_b0 = 0;
        uStack_ac = 0;
        uStack_b4 = 0;
        thunk_FUN_71560058(*(undefined4 *)(param_1 + 0x10),0,0,0);
        thunk_FUN_715600f0(*(undefined4 *)(param_1 + 0x10),&uStack_68);
        uStack_34 = *(undefined4 *)(param_1 + 0x54);
        uStack_30 = *(undefined4 *)(param_1 + 0x58);
        uStack_38 = *(undefined4 *)(param_1 + 0x50);
        FUN_7156063c(*(undefined4 *)(param_1 + 0x10),uStack_68,uStack_64,uStack_60,uStack_5c,
                     uStack_58,uStack_54,uStack_50,uStack_4c,uStack_48,uStack_44,uStack_40,uStack_3c
                     ,uStack_38,uStack_34,uStack_30,uStack_2c);
      }
      goto LAB_7179b984;
    }
    cVar9 = *(char *)(param_1 + 0x28);
  }
  if (cVar9 == '\x13') {
    iVar11 = thunk_FUN_715bf66c(*(undefined4 *)(param_1 + 0x10));
    if (iVar11 == 0) {
      cVar9 = *(char *)(param_1 + 0x28);
      goto LAB_7179b718;
    }
    if (*(int *)(param_1 + 0x14) == 0) {
      return;
    }
    iVar11 = FUN_713513f4(*(undefined4 *)(*(int *)(param_1 + 0x14) + 8));
    if (iVar11 == 0) {
      return;
    }
    iVar11 = *(int *)(param_1 + 0x14);
    if (*(int *)(iVar11 + 0xc) == 0) {
      uVar15 = FUN_713513f4(*(undefined4 *)(iVar11 + 8));
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc) = uVar15;
      pcVar6 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fadcc);
      if (*pcVar6 == '\0') {
        puVar7 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fadbc);
        *(undefined1 *)((int)puVar7 + 0x22) = 1;
        uVar14 = DAT_700854c4;
        uVar16 = DAT_700854c0;
        uVar15 = DAT_700854bc;
        *puVar7 = DAT_700854b8;
        puVar7[1] = uVar15;
        puVar7[2] = uVar16;
        puVar7[3] = uVar14;
        uVar14 = DAT_700854d4;
        uVar16 = DAT_700854d0;
        uVar15 = DAT_700854cc;
        puVar7[4] = DAT_700854c8;
        puVar7[5] = uVar15;
        puVar7[6] = uVar16;
        puVar7[7] = uVar14;
        *(undefined2 *)(puVar7 + 8) = DAT_700854d8;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_717a2abc,puVar7,&DAT_70b0e000);
        puVar8 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fadcc);
        *puVar8 = 1;
      }
      iVar11 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fadbc);
      if (*(char *)(iVar11 + 0x22) != '\0') {
        uVar5 = 0;
        uVar12 = 0;
        do {
          iVar17 = (uVar5 & 7) * 8;
          bVar10 = (byte)(0xb5d189bd >> iVar17) |
                   (byte)(0x51916f5b << ((uVar5 & 7) * -8 + 0x20 & 0xff));
          uVar13 = iVar17 - 0x20;
          if (-1 < (int)uVar13) {
            bVar10 = (byte)(0x51916f5b >> (uVar13 & 0xff));
          }
          *(byte *)(iVar11 + uVar5) = *(byte *)(iVar11 + uVar5) ^ bVar10;
          bVar18 = 0xfffffffe < uVar5;
          bVar1 = uVar12 == 0;
          bVar2 = (0x20 < uVar5) <= uVar12;
          uVar5 = uVar5 + 1;
          uVar12 = uVar12 + bVar18;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar11 + 0x22) = 0;
      }
      FUN_7188543c(iVar11,*(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc),
                   *(undefined4 *)(*(int *)(param_1 + 0x14) + 8));
      iVar11 = *(int *)(param_1 + 0x14);
    }
    iVar11 = FUN_715f8740(iVar11);
    if (((iVar11 != 0x21a) &&
        (iVar11 = FUN_715f8740(*(undefined4 *)(param_1 + 0x14)), iVar11 != 0x219)) &&
       (iVar11 = FUN_715f8740(*(undefined4 *)(param_1 + 0x14)), iVar11 != 0x1c1)) {
      FUN_7179f9d4(param_1);
    }
    thunk_FUN_715cc968(*(undefined4 *)(param_1 + 0x10),*(undefined2 *)(param_1 + 0x96),
                       *(undefined2 *)(param_1 + 0x92),*(undefined2 *)(param_1 + 0x94));
    uVar15 = *(undefined4 *)(param_1 + 0xb4);
    iVar11 = FUN_71ba2cf0(uVar15,0);
    if (iVar11 == 0) {
      uVar16 = *(undefined4 *)(param_1 + 0xb8);
      iVar11 = FUN_71ba2cf0(uVar16,0);
      if ((iVar11 != 0) || (iVar11 = FUN_71ba2cf0(*(undefined4 *)(param_1 + 0xbc),0), iVar11 != 0))
      goto LAB_7179ba00;
      iVar11 = FUN_71886108();
      uVar5 = iVar11 - *(int *)(param_1 + 0x2c);
      uVar12 = 0x2ef;
    }
    else {
      uVar16 = *(undefined4 *)(param_1 + 0xb8);
LAB_7179ba00:
      thunk_FUN_71560058(*(undefined4 *)(param_1 + 0x10),uVar15,uVar16,
                         *(undefined4 *)(param_1 + 0xbc));
      iVar11 = FUN_71886108();
      uVar5 = iVar11 - *(int *)(param_1 + 0x2c);
      uVar12 = 0x5dd;
    }
  }
  else {
LAB_7179b718:
    if (cVar9 != '\x12') {
      thunk_FUN_715cc968(*(undefined4 *)(param_1 + 0x10),0,0,0);
      uStack_b0 = 0;
      uStack_ac = 0;
      uStack_b4 = 0;
      thunk_FUN_71560058(*(undefined4 *)(param_1 + 0x10),0,0,0);
      goto LAB_7179b984;
    }
    iVar11 = FUN_71886108();
    uVar5 = iVar11 - *(int *)(param_1 + 0x2c);
    uVar12 = 3000;
  }
  if (uVar12 <= uVar5) {
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
LAB_7179b984:
  if (*(char *)(param_1 + 0x28) != ' ') {
    thunk_FUN_715c4104(*(undefined4 *)(param_1 + 0x10),0x447a0000);
  }
  iVar11 = FUN_71886108();
  if (0x5db < (uint)(iVar11 - *(int *)(param_1 + 0x2c))) {
    return;
  }
  *(undefined1 *)(param_1 + 0x1d) = 0;
  return;
}


// =========================================================================
// Function: thunk_FUN_7179c4c0
// Entry: 0x7179c4ac | Size: 12 bytes
// =========================================================================

void thunk_FUN_7179c4c0(void)

{
  FUN_7179c4c0();
  return;
}


// =========================================================================
// Function: FUN_7179c4c0
// Entry: 0x7179c4c0 | Size: 60 bytes
// =========================================================================

void FUN_7179c4c0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0xf8) = *param_2;
  *(undefined4 *)(param_1 + 0xfc) = param_2[1];
  *(undefined4 *)(param_1 + 0x100) = param_2[2];
  uVar1 = *param_3;
  *(undefined4 *)(param_1 + 0x104) = uVar1;
  uVar2 = param_3[1];
  *(undefined4 *)(param_1 + 0x108) = uVar2;
  *(undefined4 *)(param_1 + 0x10c) = param_3[2];
  thunk_FUN_71560058(*(undefined4 *)(param_1 + 0x10),uVar1,uVar2);
  return;
}


// =========================================================================
// Function: FUN_7179c530
// Entry: 0x7179c530 | Size: 816 bytes
// =========================================================================

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_7179c530(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar6 = *(int *)(param_1 + 0x10);
  if (iVar6 == 0) {
    return;
  }
  imp___aeabi_memclr8(&uStack_68,0x40);
  thunk_FUN_715600f0(iVar6,&uStack_68);
  iVar6 = thunk_FUN_715609f0(*(undefined4 *)(param_1 + 0x10));
  if (iVar6 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0xfc);
    uVar3 = FUN_71ba240c(*(undefined4 *)(param_1 + 0x100),uStack_30);
    uVar8 = uStack_38;
    uStack_6c = uVar3 & 0x7fffffff;
    uVar7 = *(undefined4 *)(param_1 + 0xf8);
    uVar4 = FUN_71ba240c(uVar2,uStack_34);
    uStack_70 = uVar4 & 0x7fffffff;
    uVar5 = FUN_71ba240c(uVar7,uVar8);
    uStack_74 = uVar5 & 0x7fffffff;
    FUN_7136d040((undefined4 *)(param_1 + 0xec),&uStack_74);
    uVar8 = *(undefined4 *)(param_1 + 0xec);
    iVar6 = FUN_71ba2d70(uVar8,0x3727c5ac);
    if (iVar6 == 0) {
      iVar6 = FUN_71ba2d70(*(undefined4 *)(param_1 + 0xf0),0x3727c5ac);
      bVar1 = false;
      if ((iVar6 == 0) &&
         (iVar6 = FUN_71ba2d70(*(undefined4 *)(param_1 + 0xf4),0x3727c5ac), iVar6 == 0)) {
        return;
      }
    }
    else {
      bVar1 = true;
    }
    iVar6 = FUN_71ba2d70(uVar8,0x40000000);
    if (iVar6 == 0) {
      uVar8 = *(undefined4 *)(param_1 + 0xf0);
      iVar6 = FUN_71ba2d70(uVar8,0x40000000);
      if (iVar6 == 0) {
        uVar2 = *(undefined4 *)(param_1 + 0xf4);
        iVar6 = FUN_71ba2d70(uVar2,0x3f800000);
        if (iVar6 == 0) {
          if (bVar1) {
            uVar7 = FUN_71ba21e8(uVar5,0x3eb33333);
            uStack_38 = FUN_71ba0b38(uVar7,uStack_38);
          }
          iVar6 = FUN_71ba2d70(uVar8,0x3727c5ac);
          if (iVar6 != 0) {
            uVar8 = FUN_71ba21e8(uVar4,0x3eb33333);
            uStack_34 = FUN_71ba0b38(uVar8,uStack_34);
          }
          iVar6 = FUN_71ba2d70(uVar2,0x3727c5ac);
          if (iVar6 != 0) {
            uVar8 = FUN_71ba21e8(uVar3,0x3eb33333);
            uStack_30 = FUN_71ba0b38(uVar8,uStack_30);
          }
          goto LAB_7179c70c;
        }
      }
    }
  }
  uStack_38 = *(undefined4 *)(param_1 + 0xf8);
  uStack_34 = *(undefined4 *)(param_1 + 0xfc);
  uStack_30 = *(undefined4 *)(param_1 + 0x100);
LAB_7179c70c:
  FUN_7156063c(*(undefined4 *)(param_1 + 0x10),uStack_68,uStack_64,uStack_60,uStack_5c,uStack_58,
               uStack_54,uStack_50,uStack_4c,uStack_48,uStack_44,uStack_40,uStack_3c,uStack_38,
               uStack_34,uStack_30,uStack_2c);
  thunk_FUN_71560058(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x104),
                     *(undefined4 *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x10c));
  return;
}


// =========================================================================
// Function: FUN_7179cb04
// Entry: 0x7179cb04 | Size: 1340 bytes
// =========================================================================

void FUN_7179cb04(int param_1)

{
  int iVar1;
  char *pcVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  uint extraout_r1;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar9 = *(uint *)(param_1 + 0x3c);
    if (uVar9 == *(uint *)(param_1 + 0x8c)) {
      uVar10 = uVar9;
      if ((uVar9 & 0x1000000) != 0) {
        iVar1 = FUN_715c6fb8();
        uVar10 = *(uint *)(param_1 + 0x8c);
        if (iVar1 == 0) {
          FUN_715c72dc(*(undefined4 *)(param_1 + 0x10),uVar10);
          uVar10 = *(uint *)(param_1 + 0x8c);
        }
      }
    }
    else {
      if (*(uint *)(param_1 + 0x8c) == 0) {
        uVar10 = 0;
        uVar7 = 0;
      }
      else {
        FUN_715c72dc();
        uVar9 = *(uint *)(param_1 + 0x3c);
        uVar10 = *(uint *)(param_1 + 0x8c);
        uVar7 = extraout_r1;
      }
      if (uVar10 == 0) {
        uVar7 = 0x1804067c;
      }
      if (uVar10 == 0 && uVar9 == uVar7) {
        uVar8 = *(undefined4 *)(param_1 + 0x10);
        pcVar2 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fadec);
        if (*pcVar2 == '\0') {
          puVar5 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700faddc);
          *puVar5 = 0x5191ca45;
          puVar5[1] = 0xe9dc6ea0;
          *(undefined1 *)((int)puVar5 + 0xb) = 1;
          *(undefined4 *)((int)puVar5 + 7) = 0xdfdf4ce9;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_717a2b0c,puVar5,&DAT_70b0e000);
          puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fadec);
          *puVar6 = 1;
        }
        pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700faddc);
        if (pbVar3[0xb] != 0) {
          *pbVar3 = *pbVar3 ^ 0x13;
          pbVar3[1] = pbVar3[1] ^ 0x8f;
          pbVar3[2] = pbVar3[2] ^ 0xdf;
          pbVar3[3] = pbVar3[3] ^ 0x15;
          pbVar3[0xb] = 0;
          pbVar3[4] = ~pbVar3[4];
          pbVar3[5] = pbVar3[5] ^ 0x2b;
          pbVar3[6] = pbVar3[6] ^ 0x9d;
          pbVar3[7] = pbVar3[7] ^ 0xbd;
          pbVar3[8] = pbVar3[8] ^ 0x13;
          pbVar3[9] = pbVar3[9] ^ 0x8f;
          pbVar3[10] = pbVar3[10] ^ 0xdf;
        }
        pcVar2 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fae0c);
        if (*pcVar2 == '\0') {
          puVar5 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fadfc);
          *puVar5 = 0x5191ca45;
          puVar5[1] = 0xbdda65b6;
          *(undefined1 *)(puVar5 + 2) = 1;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_717a2b38,puVar5,&DAT_70b0e000);
          puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fae0c);
          *puVar6 = 1;
        }
        pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fadfc);
        if (pbVar4[8] != 0) {
          pbVar4[8] = 0;
          *pbVar4 = *pbVar4 ^ 0x13;
          pbVar4[1] = pbVar4[1] ^ 0x8f;
          pbVar4[2] = pbVar4[2] ^ 0xdf;
          pbVar4[3] = pbVar4[3] ^ 0x15;
          pbVar4[4] = ~pbVar4[4];
          pbVar4[5] = pbVar4[5] ^ 0x2b;
          pbVar4[6] = pbVar4[6] ^ 0x9d;
          pbVar4[7] = pbVar4[7] ^ 0xbd;
        }
        uVar10 = 0xffffffff;
        FUN_715c7638(uVar8,pbVar3,pbVar4,0x40800000,0,0,0,0,0xffffffff);
        *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
      }
      *(uint *)(param_1 + 0x3c) = uVar10;
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
    if ((*(int *)(param_1 + 0x40) == 0 && uVar10 == 0) &&
       (iVar1 = FUN_715c70ac(*(undefined4 *)(param_1 + 0x10)), iVar1 != 0)) {
      uVar8 = *(undefined4 *)(param_1 + 0x10);
      pcVar2 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fae2c);
      if (*pcVar2 == '\0') {
        puVar5 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fae1c);
        *(undefined1 *)(puVar5 + 3) = 1;
        *puVar5 = 0x7ca981d8;
        puVar5[1] = 0xa19b7d0a;
        puVar5[2] = 0x5b792d2;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_717a2b60,puVar5,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fae2c);
        *puVar6 = 1;
      }
      pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fae1c);
      if (pbVar3[0xc] != 0) {
        *pbVar3 = *pbVar3 ^ 0xbb;
        pbVar3[1] = pbVar3[1] ^ 0xf3;
        pbVar3[2] = pbVar3[2] ^ 0xdb;
        pbVar3[3] = pbVar3[3] ^ 5;
        pbVar3[0xc] = 0;
        pbVar3[4] = pbVar3[4] ^ 0x55;
        pbVar3[5] = pbVar3[5] ^ 0xd;
        pbVar3[6] = pbVar3[6] ^ 0xe9;
        pbVar3[7] = pbVar3[7] ^ 0xd5;
        pbVar3[8] = pbVar3[8] ^ 0xbb;
        pbVar3[9] = pbVar3[9] ^ 0xf3;
        pbVar3[10] = pbVar3[10] ^ 0xdb;
        pbVar3[0xb] = pbVar3[0xb] ^ 5;
      }
      pcVar2 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fae4c);
      if (*pcVar2 == '\0') {
        puVar5 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fae3c);
        *puVar5 = 0x5789b2f8;
        *(undefined1 *)((int)puVar5 + 6) = 1;
        *(undefined2 *)(puVar5 + 1) = 0xd0c;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_717a2b8c,puVar5,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fae4c);
        *puVar6 = 1;
      }
      pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fae3c);
      if (pbVar4[6] != 0) {
        pbVar4[6] = 0;
        *pbVar4 = *pbVar4 ^ 0xbb;
        pbVar4[1] = pbVar4[1] ^ 0xf3;
        pbVar4[2] = pbVar4[2] ^ 0xdb;
        pbVar4[3] = pbVar4[3] ^ 5;
        pbVar4[4] = pbVar4[4] ^ 0x55;
        pbVar4[5] = pbVar4[5] ^ 0xd;
      }
      FUN_715c7638(uVar8,pbVar3,pbVar4,0x40800000,0,0,0,0,0);
    }
  }
  return;
}


// =========================================================================
// Function: FUN_7179d638
// Entry: 0x7179d638 | Size: 268 bytes
// =========================================================================

void FUN_7179d638(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  FUN_71357554(param_1 + 0x128,*param_2,param_2[1],param_2[2],param_2[3],param_2[4],param_2[5],
               param_2[6],param_2[7],param_2[8],param_2[9],param_2[10],param_2[0xb],param_2[0xc],
               param_2[0xd],param_2[0xe],param_2[0xf]);
  *(undefined4 *)(param_1 + 0x110) = *param_3;
  *(undefined4 *)(param_1 + 0x114) = param_3[1];
  *(undefined4 *)(param_1 + 0x118) = param_3[2];
  *(undefined4 *)(param_1 + 0x11c) = *param_4;
  *(undefined4 *)(param_1 + 0x120) = param_4[1];
  *(undefined4 *)(param_1 + 0x124) = param_4[2];
  thunk_FUN_71560058(*(undefined4 *)(param_1 + 0x14),*param_4,param_4[1]);
  return;
}


// =========================================================================
// Function: FUN_7179d79c
// Entry: 0x7179d79c | Size: 1400 bytes
// =========================================================================

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_7179d79c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uStack_68 = 0;
  uStack_6c = 0;
  uStack_70 = 0;
  if (*(int *)(param_1 + 0x14) == 0) {
    return;
  }
  puVar9 = (undefined4 *)(param_1 + 0xec);
  thunk_FUN_715600f0(*(int *)(param_1 + 0x14),&uStack_64);
  iVar1 = thunk_FUN_715609f0(*(undefined4 *)(param_1 + 0x14));
  uVar5 = uStack_34;
  puVar6 = (undefined4 *)(param_1 + 0x110);
  uVar8 = *puVar6;
  if (iVar1 == 0) {
    uStack_30 = *(undefined4 *)(param_1 + 0x114);
    uStack_2c = *(undefined4 *)(param_1 + 0x118);
    uStack_34 = uVar8;
    FUN_7156063c(*(undefined4 *)(param_1 + 0x14),uStack_64,uStack_60,uStack_5c,uStack_58,uStack_54,
                 uStack_50,uStack_4c,uStack_48,uStack_44,uStack_40,uStack_3c,uStack_38,uVar8,
                 uStack_30,uStack_2c,uStack_28);
    return;
  }
  iVar1 = FUN_71ba2d50(uVar8,uStack_34);
  uVar2 = FUN_71ba240c(uVar8,uVar5);
  uVar8 = FUN_71ba240c(uVar5,uVar8);
  uVar5 = uStack_30;
  if (iVar1 != 0) {
    uVar8 = uVar2;
  }
  *puVar9 = uVar8;
  puVar3 = (undefined4 *)(param_1 + 0x114);
  uVar8 = *puVar3;
  iVar1 = FUN_71ba2d50(uVar8,uStack_30);
  uVar2 = FUN_71ba240c(uVar8,uVar5);
  uVar8 = FUN_71ba240c(uVar5,uVar8);
  uVar5 = uStack_2c;
  if (iVar1 != 0) {
    uVar8 = uVar2;
  }
  puVar10 = (undefined4 *)(param_1 + 0xf0);
  *puVar10 = uVar8;
  puVar4 = (undefined4 *)(param_1 + 0x118);
  uVar2 = *puVar4;
  iVar1 = FUN_71ba2d50(uVar2,uStack_2c);
  uVar8 = FUN_71ba240c(uVar2,uVar5);
  uVar5 = FUN_71ba240c(uVar5,uVar2);
  if (iVar1 != 0) {
    uVar5 = uVar8;
  }
  puVar7 = (undefined4 *)(param_1 + 0xf4);
  *puVar7 = uVar5;
  iVar1 = FUN_71ba2d70(uVar5,0x3d4ccccd);
  if (iVar1 == 0) {
    uVar5 = *puVar10;
    iVar1 = FUN_71ba2d70(*puVar9,0x3d4ccccd);
    if ((iVar1 == 0) && (iVar1 = FUN_71ba2d70(uVar5,0x3d4ccccd), iVar1 == 0)) {
      return;
    }
  }
  iVar1 = thunk_FUN_715f4594(*(undefined4 *)(param_1 + 0x14));
  if ((iVar1 == 5) || (iVar1 = thunk_FUN_715f4594(*(undefined4 *)(param_1 + 0x14)), iVar1 == 4)) {
    uVar5 = 0x40000000;
  }
  else {
    iVar1 = thunk_FUN_715f4594(*(undefined4 *)(param_1 + 0x14));
    uVar5 = 0x3f000000;
    if (iVar1 == 3) {
      uVar5 = 0x40000000;
    }
  }
  iVar1 = FUN_71ba2d70(*puVar9,0x41000000);
  if (iVar1 == 0) {
    uVar8 = *puVar7;
    iVar1 = FUN_71ba2d70(*puVar10,0x41000000);
    if ((iVar1 == 0) && (iVar1 = FUN_71ba2d70(uVar8,uVar5), iVar1 == 0)) {
      thunk_FUN_715608f0(*(undefined4 *)(param_1 + 0x14),&uStack_70);
      iVar1 = FUN_71ba2d70(*puVar9,0x3d4ccccd);
      if (iVar1 != 0) {
        uVar5 = FUN_71ba240c(*puVar6,uStack_34);
        uVar5 = FUN_71ba21e8(uVar5,0x3d75c28f);
        uStack_70 = FUN_71ba0b38(uVar5,uStack_70);
      }
      iVar1 = FUN_71ba2d70(*puVar10,0x3d4ccccd);
      if (iVar1 != 0) {
        uVar5 = FUN_71ba240c(*puVar3,uStack_30);
        uVar5 = FUN_71ba21e8(uVar5,0x3d75c28f);
        uStack_6c = FUN_71ba0b38(uVar5,uStack_6c);
      }
      iVar1 = FUN_71ba2d70(*puVar7,0x3d4ccccd);
      if (iVar1 != 0) {
        uVar5 = FUN_71ba240c(*puVar4,uStack_2c);
        uVar5 = FUN_71ba21e8(uVar5,0x3d75c28f);
        uStack_68 = FUN_71ba0b38(uVar5,uStack_68);
      }
      uVar5 = uStack_70;
      iVar1 = FUN_71ba2d50(uStack_70,0);
      uVar8 = FUN_71ba240c(0,uVar5);
      if (iVar1 != 0) {
        uVar8 = uVar5;
      }
      iVar1 = FUN_71ba2d70(uVar8,0x3c23d70a);
      uVar5 = uStack_6c;
      if (iVar1 == 0) {
        iVar1 = FUN_71ba2d50(uStack_6c,0);
        uVar8 = FUN_71ba240c(0,uVar5);
        if (iVar1 != 0) {
          uVar8 = uVar5;
        }
        iVar1 = FUN_71ba2d70(uVar8,0x3c23d70a);
        uVar5 = uStack_68;
        if (iVar1 == 0) {
          iVar1 = FUN_71ba2d50(uStack_68,0);
          uVar8 = FUN_71ba240c(0,uVar5);
          if (iVar1 != 0) {
            uVar8 = uVar5;
          }
          iVar1 = FUN_71ba2d70(uVar8,0x3c23d70a);
          if (iVar1 == 0) {
            return;
          }
        }
      }
      puVar6 = &uStack_70;
      uVar5 = *(undefined4 *)(param_1 + 0x14);
      goto LAB_7179dd3c;
    }
  }
  uStack_34 = *puVar6;
  FUN_7156063c(*(undefined4 *)(param_1 + 0x14),uStack_64,uStack_60,uStack_5c,uStack_58,uStack_54,
               uStack_50,uStack_4c,uStack_48,uStack_44,uStack_40,uStack_3c,uStack_38,uStack_34,
               *puVar3,*puVar4,uStack_28);
  uVar5 = *(undefined4 *)(param_1 + 0x14);
  puVar6 = (undefined4 *)(param_1 + 0x11c);
LAB_7179dd3c:
  thunk_FUN_71560058(uVar5,*puVar6,puVar6[1],puVar6[2]);
  return;
}


// =========================================================================
// Function: FUN_7179e250
// Entry: 0x7179e250 | Size: 1856 bytes
// =========================================================================

void FUN_7179e250(int param_1,uint param_2)

{
  int iVar1;
  char *pcVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    return;
  }
  iVar1 = thunk_FUN_715609f0();
  if (iVar1 == 0) {
    return;
  }
  if (((*(char *)(param_1 + 0x28) == '\x11') &&
      (iVar1 = FUN_71886108(), 500 < (uint)(iVar1 - *(int *)(param_1 + 0x30)))) &&
     (DAT_711e9ac8 != 0)) {
    pcVar2 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fae6c);
    if (*pcVar2 == '\0') {
      puVar5 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fae5c);
      *(undefined1 *)(puVar5 + 4) = 1;
      *puVar5 = 0x5c422add;
      puVar5[1] = 0x99a4f111;
      puVar5[2] = &DAT_705522fc;
      puVar5[3] = 0xd1a4eb1c;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_717a2bb4,puVar5,&DAT_70b0e000);
      puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fae6c);
      *puVar7 = 1;
    }
    pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fae5c);
    if (pbVar3[0x10] != 0) {
      *pbVar3 = *pbVar3 ^ 0x99;
      pbVar3[1] = pbVar3[1] ^ 0x43;
      pbVar3[2] = pbVar3[2] ^ 0x31;
      pbVar3[3] = pbVar3[3] ^ 0x3d;
      pbVar3[0x10] = 0;
      pbVar3[4] = pbVar3[4] ^ 0x73;
      pbVar3[5] = pbVar3[5] ^ 0x9d;
      pbVar3[6] = pbVar3[6] ^ 0xc1;
      pbVar3[7] = pbVar3[7] ^ 0xd1;
      pbVar3[8] = pbVar3[8] ^ 0x99;
      pbVar3[9] = pbVar3[9] ^ 0x43;
      pbVar3[10] = pbVar3[10] ^ 0x31;
      pbVar3[0xb] = pbVar3[0xb] ^ 0x3d;
      pbVar3[0xc] = pbVar3[0xc] ^ 0x73;
      pbVar3[0xd] = pbVar3[0xd] ^ 0x9d;
      pbVar3[0xe] = pbVar3[0xe] ^ 0xc1;
      pbVar3[0xf] = pbVar3[0xf] ^ 0xd1;
    }
    uVar4 = imp_strlen(pbVar3);
    if (0xfffffff7 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_712f6c1c(&uStack_30);
    }
    if (uVar4 < 0xb) {
      uVar8 = (uint)&uStack_30 | 1;
      uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar4 << 1));
      if (uVar4 != 0) goto LAB_7179e418;
    }
    else {
      uVar8 = thunk_MwhHq((uVar4 | 7) + 1);
      uStack_30 = (uVar4 | 7) + 2;
      uStack_2c = uVar4;
      uStack_28 = uVar8;
LAB_7179e418:
      imp___aeabi_memmove(uVar8,pbVar3,uVar4);
    }
    *(undefined1 *)(uVar8 + uVar4) = 0;
    iVar1 = FUN_717c5e7c(&uStack_30);
    if ((uStack_30 & 1) != 0) {
      thunk_qNQrlu(uStack_28);
    }
    if (iVar1 == 0) {
      FUN_7136cdfc(&uStack_30);
      puVar5 = (undefined4 *)FUN_7151e610(*(undefined1 *)(*(int *)(param_1 + 0x10) + 0x52));
      uVar9 = puVar5[3];
      uVar6 = FUN_71ba21e8(*puVar5,0x41a00000);
      uStack_30 = FUN_71ba0b38(uVar6,uVar9);
      uVar9 = puVar5[4];
      uVar6 = FUN_71ba21e8(puVar5[1],0x41a00000);
      uStack_2c = FUN_71ba0b38(uVar6,uVar9);
      uVar9 = puVar5[5];
      uVar6 = FUN_71ba21e8(puVar5[2],0x41a00000);
      uStack_28 = FUN_71ba0b38(uVar6,uVar9);
      uVar6 = *(undefined4 *)(param_1 + 0x10);
      pcVar2 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fae8c);
      if (*pcVar2 == '\0') {
        puVar5 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fae7c);
        *(undefined1 *)(puVar5 + 3) = 1;
        *puVar5 = 0xf073cf9;
        puVar5[1] = 0xeca7da32;
        puVar5[2] = 0x632a00db;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_717a2be4,puVar5,&DAT_70b0e000);
        puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fae8c);
        *puVar7 = 1;
      }
      pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fae7c);
      if (pbVar3[0xc] != 0) {
        *pbVar3 = *pbVar3 ^ 0xbf;
        pbVar3[1] = pbVar3[1] ^ 0x53;
        pbVar3[2] = pbVar3[2] ^ 0x6b;
        pbVar3[3] = pbVar3[3] ^ 99;
        pbVar3[0xc] = 0;
        pbVar3[4] = pbVar3[4] ^ 0x5d;
        pbVar3[5] = pbVar3[5] ^ 0xad;
        pbVar3[6] = pbVar3[6] ^ 0xf7;
        pbVar3[7] = pbVar3[7] ^ 0x89;
        pbVar3[8] = pbVar3[8] ^ 0xbf;
        pbVar3[9] = pbVar3[9] ^ 0x53;
        pbVar3[10] = pbVar3[10] ^ 0x6b;
        pbVar3[0xb] = pbVar3[0xb] ^ 99;
      }
      FUN_715c3e88(uVar6,pbVar3,0,2000,0xffffffff,&uStack_30,0,0x3dcccccd,500,3,0);
      uVar6 = FUN_71886108();
      *(undefined4 *)(param_1 + 0x30) = uVar6;
    }
  }
  iVar1 = FUN_715c13cc(*(undefined4 *)(param_1 + 0x10));
  if (param_2 == 1) {
    if (iVar1 == 0) {
      FUN_715c12a4(*(undefined4 *)(param_1 + 0x10));
      return;
    }
LAB_7179e654:
    iVar1 = FUN_715d04ac(*(undefined4 *)(param_1 + 0x10));
    if (iVar1 != 0) {
      uVar6 = *(undefined4 *)(param_1 + 0x10);
      uVar9 = 0;
LAB_7179e69c:
      FUN_715d03bc(uVar6,uVar9);
      return;
    }
    iVar1 = FUN_715c50e4(*(undefined4 *)(param_1 + 0x10));
    if (param_2 == 2) {
      if (iVar1 == 0) {
        FUN_715d0548(*(undefined4 *)(param_1 + 0x10));
        return;
      }
      goto LAB_7179e6e4;
    }
    if (iVar1 != 0) {
LAB_7179e6b0:
      FUN_715d0670(*(undefined4 *)(param_1 + 0x10));
      return;
    }
    if (param_2 != 10) goto LAB_7179e6e4;
    iVar1 = FUN_715ccacc(*(undefined4 *)(param_1 + 0x10));
    if (iVar1 == 0) {
      FUN_715ccb70(*(undefined4 *)(param_1 + 0x10));
    }
LAB_7179e720:
    iVar1 = FUN_715cd984(*(undefined4 *)(param_1 + 0x10));
    if (iVar1 != 0) {
      FUN_715ce310(*(undefined4 *)(param_1 + 0x10));
    }
  }
  else {
    if (iVar1 != 0) {
      FUN_715c1460(*(undefined4 *)(param_1 + 0x10));
    }
    if (param_2 != 0xb) goto LAB_7179e654;
    iVar1 = FUN_715d04ac(*(undefined4 *)(param_1 + 0x10));
    uVar6 = *(undefined4 *)(param_1 + 0x10);
    if (iVar1 == 0) {
      uVar9 = 1;
      goto LAB_7179e69c;
    }
    iVar1 = FUN_715c50e4(uVar6);
    if (iVar1 != 0) goto LAB_7179e6b0;
LAB_7179e6e4:
    iVar1 = FUN_715ccacc(*(undefined4 *)(param_1 + 0x10));
    if (iVar1 != 0) {
      FUN_715cce10(*(undefined4 *)(param_1 + 0x10));
    }
    if (param_2 != 0x44) goto LAB_7179e720;
    iVar1 = FUN_715cd984(*(undefined4 *)(param_1 + 0x10));
    if (iVar1 == 0) {
      FUN_715cd9f0(*(undefined4 *)(param_1 + 0x10));
    }
  }
  iVar1 = thunk_FUN_715ccc94(*(undefined4 *)(param_1 + 0x10));
  if ((iVar1 == 0) && ((param_2 - 5 & 0xff) < 4)) {
    FUN_715cccbc(*(undefined4 *)(param_1 + 0x10));
  }
  iVar1 = thunk_FUN_715ccc94(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 != 0) {
    if ((param_2 - 9 & 0xff) < 0xfc) {
      FUN_715cce10();
    }
    else {
      FUN_715ccf08(*(undefined4 *)(param_1 + 0x10));
    }
  }
  switch(param_2) {
  case 0x14:
    iVar1 = FUN_715ce49c(*(undefined4 *)(param_1 + 0x10));
    uVar6 = 1;
    if (iVar1 != 1) {
LAB_7179e7e4:
      FUN_715cf6dc(*(undefined4 *)(param_1 + 0x10),uVar6);
    }
    break;
  case 0x15:
    iVar1 = FUN_715ce49c(*(undefined4 *)(param_1 + 0x10));
    uVar6 = 4;
    if (iVar1 != 4) goto LAB_7179e7e4;
    break;
  case 0x16:
    iVar1 = FUN_715ce49c(*(undefined4 *)(param_1 + 0x10));
    uVar6 = 2;
    if (iVar1 != 2) goto LAB_7179e7e4;
    break;
  case 0x17:
    iVar1 = FUN_715ce49c(*(undefined4 *)(param_1 + 0x10));
    uVar6 = 3;
    if (iVar1 != 3) goto LAB_7179e7e4;
  }
  iVar1 = FUN_715ce49c(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 != 0) {
    if ((param_2 & 0xfc) == 0x14) {
      FUN_715ce508();
    }
    else {
      FUN_715cfddc(*(undefined4 *)(param_1 + 0x10));
    }
  }
  if (param_2 - 3 < 2) {
    return;
  }
  if (param_2 == 0x18) {
    iVar1 = FUN_715d07a0(*(undefined4 *)(param_1 + 0x10));
    if (iVar1 == 0) {
      FUN_715d07c8(*(undefined4 *)(param_1 + 0x10),1);
    }
  }
  else {
    iVar1 = FUN_715d07a0(*(undefined4 *)(param_1 + 0x10));
    if (iVar1 != 0) {
      FUN_715d07c8(*(undefined4 *)(param_1 + 0x10),0);
    }
    if (param_2 == 0x19) {
      iVar1 = FUN_715d0c0c(*(undefined4 *)(param_1 + 0x10));
      if (iVar1 != 0) {
        return;
      }
      uVar6 = *(undefined4 *)(param_1 + 0x10);
      uVar9 = 1;
      goto LAB_7179e8a4;
    }
  }
  iVar1 = FUN_715d0c0c(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 == 0) {
    return;
  }
  uVar6 = *(undefined4 *)(param_1 + 0x10);
  uVar9 = 0;
LAB_7179e8a4:
  FUN_715d0c34(uVar6,uVar9);
  return;
}


// =========================================================================
// Function: FUN_7179f298
// Entry: 0x7179f298 | Size: 548 bytes
// =========================================================================

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_7179f298(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uStack_6c = 0;
  uStack_70 = 0;
  uStack_74 = 0;
  uStack_78 = 0;
  uStack_7c = 0;
  uStack_80 = 0;
  uStack_84 = 0;
  uStack_88 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    thunk_FUN_715600f0(*(int *)(param_1 + 0x10),&uStack_64);
    FUN_71357554(&uStack_78,uStack_64,uStack_60,uStack_5c,uStack_58,uStack_54,uStack_50,uStack_4c,
                 uStack_48,uStack_44,uStack_40,uStack_3c,uStack_38,uStack_34,uStack_30,uStack_2c,
                 uStack_28);
    FUN_71358590(&uStack_88,param_1 + 0x5c,&uStack_78,0x3f400000);
    FUN_71357e24(&uStack_88,&uStack_64);
    FUN_7156063c(*(undefined4 *)(param_1 + 0x10),uStack_64,uStack_60,uStack_5c,uStack_58,uStack_54,
                 uStack_50,uStack_4c,uStack_48,uStack_44,uStack_40,uStack_3c,uStack_38,uStack_34,
                 uStack_30,uStack_2c,uStack_28);
    imp_atan2f(uStack_54 ^ 0x80000000,uStack_50);
    uVar4 = FUN_71ba1638();
    FUN_71ba1ea0((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0xfceb7889,0x404ca5db);
    uVar1 = FUN_71ba242c();
    iVar2 = FUN_71ba2d70(uVar1,0x43b40000);
    uVar3 = FUN_71ba0b38(uVar1,0xc3b40000);
    if (iVar2 != 0) {
      uVar1 = uVar3;
    }
    iVar2 = FUN_71ba2d10(uVar1,0);
    uVar3 = FUN_71ba0b38(uVar1,0x43b40000);
    if (iVar2 != 0) {
      uVar1 = uVar3;
    }
    FUN_715c559c(*(undefined4 *)(param_1 + 0x10),uVar1);
  }
  return;
}


// =========================================================================
// Function: FUN_7179f664
// Entry: 0x7179f664 | Size: 512 bytes
// =========================================================================

void FUN_7179f664(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_68 [48];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  if (*(char *)(param_1 + 0x28) != '\x11') {
    return;
  }
  uVar1 = (uint)*(ushort *)(param_1 + 0x88);
  if ((uVar1 - 1 & 0xffff) >> 4 < 0x7d) {
    iVar2 = *(int *)(DAT_711f6d58 + 4);
    if (iVar2 == 0) {
      return;
    }
    if (*(char *)(iVar2 + uVar1 + 0x3e88) == '\0') {
      return;
    }
    iVar2 = *(int *)(iVar2 + uVar1 * 4);
  }
  else {
    if (0x7c < (uVar1 - 0x7d1 & 0xffff) >> 3) {
      return;
    }
    *(short *)(param_1 + 0x88) = (short)(uVar1 - 2000);
    iVar2 = *(int *)(DAT_711f6d58 + 8);
    if (iVar2 == 0) {
      return;
    }
    uVar1 = uVar1 - 2000 & 0xff;
    if (*(char *)(iVar2 + uVar1) == '\0') {
      return;
    }
    iVar2 = *(int *)(iVar2 + uVar1 * 4 + 1000);
  }
  if (iVar2 == 0) {
    return;
  }
  FUN_7136cdfc(&uStack_b4);
  FUN_7136cdfc(&uStack_c0);
  thunk_FUN_715600f0(*(undefined4 *)(param_1 + 0x10),&uStack_a8);
  thunk_FUN_715600f0(iVar2,auStack_68);
  thunk_FUN_715608f0(iVar2,&uStack_b4);
  thunk_FUN_71560950(iVar2,&uStack_c0);
  FUN_715eea98(&uStack_38,auStack_68,param_1 + 0x7c);
  uStack_78 = uStack_38;
  uStack_74 = uStack_34;
  uStack_70 = uStack_30;
  FUN_7156063c(*(undefined4 *)(param_1 + 0x10),uStack_a8,uStack_a4,uStack_a0,uStack_9c,uStack_98,
               uStack_94,uStack_90,uStack_8c,uStack_88,uStack_84,uStack_80,uStack_7c,uStack_38,
               uStack_34,uStack_30,uStack_6c);
  thunk_FUN_71560058(*(undefined4 *)(param_1 + 0x10),uStack_b4,uStack_b0,uStack_ac);
  thunk_FUN_715600a4(*(undefined4 *)(param_1 + 0x10),uStack_c0,uStack_bc,uStack_b8);
  return;
}


// =========================================================================
// Function: FUN_7179f9d4
// Entry: 0x7179f9d4 | Size: 680 bytes
// =========================================================================

void FUN_7179f9d4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_34 = 0;
  uStack_38 = 0;
  uStack_3c = 0;
  uStack_40 = 0;
  uStack_44 = 0;
  uStack_48 = 0;
  uStack_8c = 0;
  uStack_90 = 0;
  uStack_94 = 0;
  if (*(int *)(param_1 + 0x14) == 0) {
    return;
  }
  thunk_FUN_71560950(*(int *)(param_1 + 0x14),&uStack_94);
  uVar4 = uStack_94;
  uVar6 = 0x3ca3d70a;
  iVar2 = FUN_71ba2d30(uStack_94,0x3ca3d70a);
  if (iVar2 == 0) {
    uStack_94 = 0x3ca3d70a;
    uVar4 = uVar6;
  }
  else {
    iVar2 = FUN_71ba2d10(uVar4,0xbca3d70a);
    if (iVar2 != 0) {
      uStack_94 = 0xbca3d70a;
      uVar4 = 0xbca3d70a;
    }
  }
  uVar5 = uStack_90;
  iVar2 = FUN_71ba2d30(uStack_90,0x3ca3d70a);
  uVar3 = uVar6;
  if (iVar2 != 0) {
    uVar3 = 0xbca3d70a;
    iVar2 = FUN_71ba2d10(uVar5,0xbca3d70a);
    if (iVar2 == 0) goto LAB_7179fae4;
  }
  uVar5 = uVar3;
  uStack_90 = uVar3;
LAB_7179fae4:
  uVar3 = uStack_8c;
  iVar2 = FUN_71ba2d30(uStack_8c,0x3ca3d70a);
  uVar1 = 0x3ca3d70a;
  if (iVar2 != 0) {
    iVar2 = FUN_71ba2d10(uVar3,0xbca3d70a);
    uVar6 = uVar3;
    uVar1 = uStack_8c;
    if (iVar2 != 0) {
      uVar6 = 0xbca3d70a;
      uVar1 = 0xbca3d70a;
    }
  }
  uStack_8c = uVar1;
  thunk_FUN_715600a4(*(undefined4 *)(param_1 + 0x14),uVar4,uVar5,uVar6);
  thunk_FUN_715600f0(*(undefined4 *)(param_1 + 0x14),&uStack_88);
  FUN_71357554(&uStack_38,uStack_88,uStack_84,uStack_80,uStack_7c,uStack_78,uStack_74,uStack_70,
               uStack_6c,uStack_68,uStack_64,uStack_60,uStack_5c,uStack_58,uStack_54,uStack_50,
               uStack_4c);
  FUN_71358590(&uStack_48,param_1 + 0x128,&uStack_38,0x3f400000);
  FUN_71358370(&uStack_48);
  FUN_71357e24(&uStack_48,&uStack_88);
  FUN_7156063c(*(undefined4 *)(param_1 + 0x14),uStack_88,uStack_84,uStack_80,uStack_7c,uStack_78,
               uStack_74,uStack_70,uStack_6c,uStack_68,uStack_64,uStack_60,uStack_5c,uStack_58,
               uStack_54,uStack_50,uStack_4c);
  return;
}


// =========================================================================
// Function: FUN_7179fe24
// Entry: 0x7179fe24 | Size: 388 bytes
// =========================================================================

bool FUN_7179fe24(int param_1,int param_2,undefined1 param_3,undefined4 param_4,undefined4 *param_5,
                 undefined4 param_6,int param_7,int param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_71561e40(DAT_711a3938);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  iVar1 = FUN_71561d40(DAT_711a3938,param_4,*param_5,param_5[1],param_5[2],param_6,0);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x28) == '\0') goto LAB_7179ff9c;
    uVar3 = 0;
    uVar2 = 0;
  }
  else {
    *(short *)(*(int *)(iVar1 + 0x8c) + 0x24) = (short)param_2;
    *(undefined4 *)(*(int *)(DAT_711f6d58 + 0xac) + param_2 * 4 + 0x2f3c) =
         *(undefined4 *)(iVar1 + 0x8c);
    if (param_7 != 0) {
      FUN_717a00ec(param_1);
    }
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_71563ccc(DAT_711a3938);
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    if (*(int *)(DAT_711f6d58 + 0x354) != 0) {
      FUN_715c8398(iVar1,*(undefined2 *)(param_1 + 0x18));
    }
    *(int *)(param_1 + 0x10) = iVar1;
    *(undefined4 *)(param_1 + 4) = 0x42c80000;
    if (param_8 != 4) {
      FUN_715c8548(iVar1,param_8);
    }
    *(undefined1 *)(param_1 + 0x1e) = param_3;
    if (*(char *)(param_1 + 0x28) == '!') goto LAB_7179ff9c;
    uVar3 = 0x21;
    uVar2 = 0x21;
  }
  FUN_717a2834(param_1,uVar2,0);
  *(undefined1 *)(param_1 + 0x28) = uVar3;
LAB_7179ff9c:
  return iVar1 != 0;
}


// =========================================================================
// Function: FUN_717a00ec
// Entry: 0x717a00ec | Size: 20 bytes
// =========================================================================

void FUN_717a00ec(int param_1,undefined4 param_2)

{
  if (*(ushort *)(param_1 + 0x18) >> 5 < 0x7d) {
    *(undefined4 *)(&DAT_711a3d78 + (uint)*(ushort *)(param_1 + 0x18) * 4) = param_2;
  }
  return;
}


// =========================================================================
// Function: FUN_717a0128
// Entry: 0x717a0128 | Size: 24 bytes
// =========================================================================

void FUN_717a0128(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  bool bVar7;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar6 = *(int *)(DAT_711f6d58 + 4);
    uVar3 = thunk_FUN_715c4d3c();
    if (uVar3 == *(byte *)(param_1 + 0x139)) {
      return;
    }
    uVar3 = (uint)*(ushort *)(param_1 + 0x1a);
    if (uVar3 < 0x7d1) {
      bVar7 = *(char *)(iVar6 + uVar3 + 0x3e88) != '\0';
      iVar4 = 0;
      if (bVar7) {
        iVar4 = *(int *)(iVar6 + uVar3 * 4);
      }
      if (bVar7 && iVar4 != 0) {
        uVar5 = FUN_717b92f0(iVar6);
        iVar6 = *(int *)(param_1 + 0x10);
        bVar1 = *(byte *)(param_1 + 0x139);
        if (((*(int *)(iVar6 + 0x8c) != 0) && (iVar4 = FUN_713513f4(uVar5), iVar4 != 0)) &&
           (iVar4 = FUN_71351810(*(undefined4 *)(iVar6 + 8)), iVar4 != 0)) {
          iVar4 = FUN_713513f4(uVar5);
          iVar2 = FUN_71ba2cf0(*(undefined4 *)(iVar4 + 0x4cc),0);
          if ((iVar2 == 0) && ((*(byte *)(iVar4 + 0x3a) & 7) - 2 < 3)) {
            if ((*(int *)(iVar6 + 0x8c) != 0) &&
               ((iVar2 = FUN_71351810(*(undefined4 *)(iVar6 + 8)), iVar2 != 0 &&
                (*(int *)(*(int *)(iVar6 + 0x8c) + *(char *)(*(int *)(iVar6 + 0x8c) + 0x71c) * 0x1c
                         + 0x5a4) == 0x2e)))) {
              *DAT_7118e024 = *(undefined1 *)(iVar6 + 0x52);
              thunk_FUN_7151e868();
              FUN_7151e770(*(undefined1 *)(iVar6 + 0x52));
              FUN_715c3b44(iVar6,0);
              thunk_FUN_7151e684();
              *DAT_7118e024 = 0;
            }
            if (bVar1 == 0) {
              iVar4 = *(int *)(iVar4 + 0x464);
              bVar1 = 0;
              if (iVar4 != 0) {
                bVar1 = *(byte *)(iVar4 + 0x485);
              }
              if (iVar4 != 0 && (bVar1 & 1) != 0) {
                return;
              }
              FUN_715d33c8(&DAT_70082588,*(undefined4 *)(iVar6 + 8),uVar5);
            }
            else {
              FUN_715d33c8(&DAT_7008259a,*(undefined4 *)(iVar6 + 8),uVar5,bVar1 - 1);
            }
            iVar2 = *(int *)(iVar6 + 0x8c);
            iVar4 = FUN_713c301c(0);
            if (iVar2 == iVar4) {
              iVar6 = *(int *)(iVar6 + 0x8c);
              bVar1 = 0;
              if (iVar6 != 0) {
                bVar1 = *(byte *)(iVar6 + 0x485);
              }
              if (iVar6 != 0 && (bVar1 & 1) != 0) {
                FUN_714dd5c0(*(undefined4 *)(DAT_711a3938 + 0x13898));
                return;
              }
            }
          }
        }
        return;
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_717a0480
// Entry: 0x717a0480 | Size: 324 bytes
// =========================================================================

void FUN_717a0480(undefined4 param_1,ushort *param_2)

{
  uint uVar1;
  int unaff_r4;
  bool bVar2;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar1 = (uint)*param_2;
  if ((uVar1 != 0) && (uVar1 < 0x7d1)) {
    bVar2 = *(char *)(*(int *)(DAT_711f6d58 + 4) + uVar1 + 0x3e88) != '\0';
    if (bVar2) {
      unaff_r4 = *(int *)(*(int *)(DAT_711f6d58 + 4) + uVar1 * 4);
    }
    if (bVar2 && unaff_r4 != 0) {
      FUN_71357e24(param_2 + 8,&uStack_64);
      uStack_34 = *(undefined4 *)(param_2 + 2);
      uStack_30 = *(undefined4 *)(param_2 + 4);
      uStack_2c = *(undefined4 *)(param_2 + 6);
      FUN_7156063c(unaff_r4,uStack_64,uStack_60,uStack_5c,uStack_58,uStack_54,uStack_50,uStack_4c,
                   uStack_48,uStack_44,uStack_40,uStack_3c,uStack_38,uStack_34,uStack_30,uStack_2c,
                   uStack_28);
      thunk_FUN_71560058(unaff_r4,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x12),
                         *(undefined4 *)(param_2 + 0x14));
      thunk_FUN_715600a4(unaff_r4,*(undefined4 *)(param_2 + 0x16),*(undefined4 *)(param_2 + 0x18),
                         *(undefined4 *)(param_2 + 0x1a));
      return;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_717a0674
// Entry: 0x717a0674 | Size: 28 bytes
// =========================================================================

void FUN_717a0674(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  bool bVar11;
  undefined1 auStack_50 [40];
  undefined4 uStack_28;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    return;
  }
  iVar2 = thunk_FUN_715609f0();
  if (iVar2 == 0) {
    return;
  }
  puVar10 = (undefined4 *)((uint)auStack_50 | 4);
  FUN_7136cdfc(puVar10);
  FUN_7136cdfc(puVar10 + 3);
  FUN_7136cdfc(puVar10 + 6);
  imp___aeabi_memclr8(auStack_50,0x2c);
  *puVar10 = *(undefined4 *)(param_2 + 3);
  puVar10[4] = *(undefined4 *)(param_2 + 0x13);
  uVar5 = *(undefined4 *)(param_2 + 7);
  uVar6 = *(undefined4 *)(param_2 + 0xb);
  uVar7 = *(undefined4 *)(param_2 + 0xf);
  puVar10[5] = *(undefined4 *)(param_2 + 0x17);
  uVar3 = *(uint *)(param_2 + 0x1b);
  uVar8 = *(uint *)(param_2 + 0x1f);
  uVar9 = *(undefined4 *)(param_2 + 0x23);
  puVar10[1] = uVar5;
  puVar10[2] = uVar6;
  puVar10[3] = uVar7;
  puVar10[6] = uVar3;
  puVar10[7] = uVar8;
  puVar10[8] = uVar9;
  cVar1 = *param_2;
  if (cVar1 == '\0') goto LAB_717a0838;
  iVar2 = FUN_71ba2d70(uVar3 & 0x7fffffff,0x43960000);
  if (iVar2 != 0) {
    return;
  }
  iVar2 = FUN_71ba2d70(uVar8 & 0x7fffffff,0x43960000);
  if (iVar2 != 0) {
    return;
  }
  iVar2 = FUN_71ba2d70(uVar9,0x43960000);
  if (iVar2 != 0) {
    return;
  }
  iVar2 = FUN_71ba2d10(uVar9,0xc3960000);
  if (iVar2 != 0) {
    return;
  }
  if (cVar1 == '\x02') {
    iVar2 = *(int *)(DAT_711f6d58 + 4);
    if ((iVar2 == 0) || (uVar3 = (uint)*(ushort *)(param_2 + 1), 2000 < uVar3)) goto LAB_717a0838;
    bVar11 = *(char *)(iVar2 + uVar3 + 0x3e88) != '\0';
    if (bVar11) {
      iVar2 = *(int *)(iVar2 + uVar3 * 4);
    }
    if (!bVar11 || iVar2 == 0) goto LAB_717a0838;
    puVar10 = (undefined4 *)(iVar2 + 0xc);
  }
  else {
    if ((cVar1 != '\x01') || (iVar2 = *(int *)(DAT_711f6d58 + 0xac), iVar2 == 0)) goto LAB_717a0838;
    uVar3 = (uint)*(ushort *)(param_2 + 1);
    if (uVar3 == *(ushort *)(iVar2 + 0x1f68)) {
      iVar2 = FUN_716488a8(DAT_711a3938);
      puVar10 = (undefined4 *)(iVar2 + 0x8c);
    }
    else {
      if (uVar3 == *(ushort *)(param_1 + 0x18)) {
        return;
      }
      if (0x3ec < uVar3) goto LAB_717a0838;
      iVar4 = *(int *)(iVar2 + uVar3 * 4 + 0x1f8c);
      iVar2 = 0;
      if (iVar4 != 0) {
        iVar2 = *(int *)(iVar4 + 0x10);
      }
      if (iVar4 == 0 || iVar2 == 0) goto LAB_717a0838;
      puVar10 = (undefined4 *)(iVar2 + 0x8c);
    }
  }
  uStack_28 = *puVar10;
LAB_717a0838:
  uVar3 = (uint)(byte)param_2[0x27];
  iVar2 = thunk_FUN_715609f0(*(undefined4 *)(param_1 + 0x10));
  if ((iVar2 != 0) && (uVar8 = FUN_715c0530(*(undefined4 *)(param_1 + 0x10)), uVar8 != uVar3)) {
    FUN_715c3b44(*(undefined4 *)(param_1 + 0x10),uVar3);
    uVar8 = FUN_715c0530(*(undefined4 *)(param_1 + 0x10));
    if (uVar8 != uVar3) {
      FUN_715c1944(*(undefined4 *)(param_1 + 0x10),uVar3,9999);
      FUN_715c3b44(*(undefined4 *)(param_1 + 0x10),uVar3);
    }
  }
  FUN_715c0b2c(*(undefined4 *)(param_1 + 0x10),auStack_50);
  FUN_715bf9bc(*(undefined4 *)(param_1 + 0x10));
  return;
}


// =========================================================================
// Function: FUN_717a0b58
// Entry: 0x717a0b58 | Size: 24 bytes
// =========================================================================

void FUN_717a0b58(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  
  if (*(int *)(DAT_711f6d58 + 0xac) != 0) {
    uVar1 = FUN_71796858(*(int *)(DAT_711f6d58 + 0xac),*(undefined2 *)(param_1 + 0x18));
    if (*(int *)(param_1 + 0x10) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x178);
    }
    uVar2 = thunk_FUN_717a0c74(param_1);
    FUN_716498b8(uVar1,uVar2,param_2,uVar3);
    return;
  }
  return;
}


// =========================================================================
// Function: thunk_FUN_717a0c74
// Entry: 0x717a0c60 | Size: 12 bytes
// =========================================================================

void thunk_FUN_717a0c74(void)

{
  FUN_717a0c74();
  return;
}


// =========================================================================
// Function: FUN_717a0c74
// Entry: 0x717a0c74 | Size: 80 bytes
// =========================================================================

undefined4 FUN_717a0c74(int param_1)

{
  ushort uVar1;
  uint uVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x18);
  uVar2 = uVar1 - 0x3ec;
  if (uVar2 < 3) {
    return *(undefined4 *)(&DAT_70082990 + uVar2 * 4);
  }
  if (0x7c < uVar1 >> 3) {
    return 0xe2c063ff;
  }
  return *(undefined4 *)(&DAT_711a3d78 + (uint)uVar1 * 4);
}


// =========================================================================
// Function: FUN_717a0cb0
// Entry: 0x717a0cb0 | Size: 328 bytes
// =========================================================================

void FUN_717a0cb0(int param_1,undefined1 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_715bf918(*(int *)(param_1 + 0x10),*param_2);
    uStack_4c = *(undefined4 *)(param_2 + 5);
    uStack_3c = *(undefined4 *)(param_2 + 0x15);
    uStack_48 = *(undefined4 *)(param_2 + 9);
    uStack_44 = *(undefined4 *)(param_2 + 0xd);
    uStack_40 = *(undefined4 *)(param_2 + 0x11);
    uStack_50 = *(undefined4 *)(param_2 + 1);
    uStack_38 = uStack_44;
    uStack_34 = uStack_40;
    uStack_30 = uStack_3c;
    uStack_2c = uStack_50;
    uStack_28 = uStack_4c;
    uStack_24 = uStack_48;
    thunk_FUN_715bf890(*(undefined4 *)(param_1 + 0x10),&uStack_50);
    thunk_FUN_715cca5c(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_2 + 0x19));
    cVar1 = param_2[0x1e];
    uVar2 = FUN_71ba1e0c(cVar1);
    uVar2 = FUN_71ba13e0(uVar2,0x42c80000);
    uVar3 = FUN_71ba0b38(uVar2,0x3f800000);
    uVar2 = 0;
    if (cVar1 != '\0') {
      uVar2 = uVar3;
    }
    FUN_7151ec54(*(undefined1 *)(*(int *)(param_1 + 0x10) + 0x52),uVar2);
    *(undefined1 *)(param_1 + 1) = 0;
    uVar2 = FUN_71ba1e0c(param_2[0x1d] & 0x3f);
    uVar2 = FUN_71ba13e0(uVar2,0x427c0000);
    thunk_FUN_715c14fc(*(undefined4 *)(param_1 + 0x10),uVar2);
    iVar4 = thunk_FUN_715c04ec(*(undefined4 *)(param_1 + 0x10));
    if ((byte)param_2[0x1d] >> 6 == 2) {
      if (3 < *(int *)(iVar4 + 8)) {
        return;
      }
      uVar5 = 4;
    }
    else {
      uVar5 = (uint)((byte)param_2[0x1d] >> 6);
      if (uVar5 == 3) {
        *(undefined4 *)(iVar4 + 4) = 2;
        return;
      }
    }
    *(uint *)(iVar4 + 8) = uVar5;
  }
  return;
}


// =========================================================================
// Function: FUN_717a0f4c
// Entry: 0x717a0f4c | Size: 1748 bytes
// =========================================================================

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_717a0f4c(int param_1,ushort *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int unaff_r4;
  uint uVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  
  uVar7 = (uint)*param_2;
  if ((uVar7 < 0x7d1) && (iVar8 = *(int *)(DAT_711f6d58 + 4), iVar8 != 0)) {
    bVar10 = *(char *)(iVar8 + uVar7 + 0x3e88) != '\0';
    if (bVar10) {
      unaff_r4 = *(int *)(iVar8 + uVar7 * 4);
    }
    if ((((bVar10 && unaff_r4 != 0) && (iVar8 = thunk_FUN_715609f0(unaff_r4), iVar8 != 0)) &&
        (iVar8 = FUN_71602de4(unaff_r4), iVar8 == 0)) &&
       (iVar8 = FUN_716036c4(unaff_r4), iVar8 == 0)) {
      iVar8 = FUN_71ba2d30(*(uint *)((int)param_2 + 0xf) & 0x7fffffff,0x3f800000);
      if ((((((iVar8 != 0) ||
             (iVar8 = FUN_71ba2d30(*(uint *)((int)param_2 + 0x13) & 0x7fffffff,0x3f800000),
             iVar8 != 0)) ||
            (iVar8 = FUN_71ba2d30(*(uint *)((int)param_2 + 0x17) & 0x7fffffff,0x3f800000),
            iVar8 != 0)) &&
           (((iVar8 = FUN_71ba2d30(*(uint *)((int)param_2 + 3) & 0x7fffffff,0x3f800000), iVar8 != 0
             || (iVar8 = FUN_71ba2d30(*(uint *)((int)param_2 + 7) & 0x7fffffff,0x3f800000),
                iVar8 != 0)) ||
            (iVar8 = FUN_71ba2d30(*(uint *)((int)param_2 + 0xb) & 0x7fffffff,0x3f800000), iVar8 != 0
            )))) && (((iVar8 = FUN_71ba2d30(*(uint *)((int)param_2 + 0x27) & 0x7fffffff,0x42c80000),
                      iVar8 != 0 ||
                      (iVar8 = FUN_71ba2d30(*(uint *)((int)param_2 + 0x2b) & 0x7fffffff,0x42c80000),
                      iVar8 != 0)) ||
                     (iVar8 = FUN_71ba2d30(*(uint *)((int)param_2 + 0x2f) & 0x7fffffff,0x42c80000),
                     iVar8 != 0)))) &&
         (((iVar8 = FUN_71ba2d30(*(uint *)((int)param_2 + 0x33) & 0x7fffffff,0x42c80000), iVar8 != 0
           || (iVar8 = FUN_71ba2d30(*(uint *)((int)param_2 + 0x37) & 0x7fffffff,0x42c80000),
              iVar8 != 0)) ||
          (iVar8 = FUN_71ba2d30(*(uint *)((int)param_2 + 0x3b) & 0x7fffffff,0x42c80000), iVar8 != 0)
          ))) {
        puVar1 = (uint *)((int)param_2 + 0x1b);
        uVar7 = *puVar1;
        iVar8 = FUN_71ba2d70(uVar7 & 0x7fffffff,0x469c4000);
        if (iVar8 == 0) {
          puVar2 = (uint *)((int)param_2 + 0x1f);
          uVar9 = *puVar2;
          iVar8 = FUN_71ba2d70(uVar9 & 0x7fffffff,0x469c4000);
          if (iVar8 == 0) {
            puVar3 = (uint *)((int)param_2 + 0x23);
            uVar6 = *puVar3;
            iVar8 = FUN_71ba2d70(uVar6 & 0x7fffffff,0x469c4000);
            if (iVar8 == 0) {
              uVar4 = FUN_71561790(unaff_r4,uVar7,uVar9,uVar6);
              iVar8 = FUN_71ba2d10(uVar4,0x3f0a3d71);
              if (iVar8 == 0) {
                thunk_FUN_715600f0(unaff_r4,&uStack_64);
                uStack_50 = *(undefined4 *)((int)param_2 + 0x13);
                uStack_54 = *(uint *)((int)param_2 + 0xf);
                uStack_64 = *(uint *)((int)param_2 + 3);
                uStack_4c = *(undefined4 *)((int)param_2 + 0x17);
                uStack_60 = *(undefined4 *)((int)param_2 + 7);
                uStack_5c = *(undefined4 *)((int)param_2 + 0xb);
                uVar4 = FUN_71561790(unaff_r4,*puVar1,*puVar2,*puVar3);
                iVar8 = FUN_71ba2d70(uVar4,0x4077ae14);
                uVar7 = uStack_34;
                uVar9 = *puVar1;
                if (iVar8 != 0) {
                  uStack_2c = *puVar3;
                  uStack_30 = *puVar2;
                  uStack_34 = uVar9;
                  FUN_7156063c(unaff_r4,uStack_64,uStack_60,uStack_5c,uStack_58,uStack_54,uStack_50,
                               uStack_4c,uStack_48,uStack_44,uStack_40,uStack_3c,uStack_38,uVar9,
                               uStack_30,uStack_2c,uStack_28);
                  thunk_FUN_71560058(unaff_r4,*(undefined4 *)((int)param_2 + 0x27),
                                     *(undefined4 *)((int)param_2 + 0x2b),
                                     *(undefined4 *)((int)param_2 + 0x2f));
                  thunk_FUN_715600a4(unaff_r4,*(undefined4 *)((int)param_2 + 0x33),
                                     *(undefined4 *)((int)param_2 + 0x37),
                                     *(undefined4 *)((int)param_2 + 0x3b));
                  return;
                }
                iVar8 = FUN_71ba2d50(uVar9,uStack_34);
                uVar5 = FUN_71ba240c(uVar9,uVar7);
                uVar4 = FUN_71ba240c(uVar7,uVar9);
                uVar7 = uStack_30;
                if (iVar8 != 0) {
                  uVar4 = uVar5;
                }
                *(undefined4 *)(param_1 + 0xec) = uVar4;
                uVar9 = *puVar2;
                iVar8 = FUN_71ba2d50(uVar9,uStack_30);
                uVar5 = FUN_71ba240c(uVar9,uVar7);
                uVar4 = FUN_71ba240c(uVar7,uVar9);
                uVar7 = uStack_2c;
                if (iVar8 != 0) {
                  uVar4 = uVar5;
                }
                *(undefined4 *)(param_1 + 0xf0) = uVar4;
                uVar9 = *puVar3;
                iVar8 = FUN_71ba2d50(uVar9,uStack_2c);
                uVar5 = FUN_71ba240c(uVar9,uVar7);
                uVar4 = FUN_71ba240c(uVar7,uVar9);
                if (iVar8 != 0) {
                  uVar4 = uVar5;
                }
                *(undefined4 *)(param_1 + 0xf4) = uVar4;
                FUN_7156063c(unaff_r4,uStack_64,uStack_60,uStack_5c,uStack_58,uStack_54,uStack_50,
                             uStack_4c,uStack_48,uStack_44,uStack_40,uStack_3c,uStack_38,uStack_34,
                             uStack_30,uStack_2c,uStack_28);
                thunk_FUN_71560058(unaff_r4,*(undefined4 *)((int)param_2 + 0x27),
                                   *(undefined4 *)((int)param_2 + 0x2b),
                                   *(undefined4 *)((int)param_2 + 0x2f));
                thunk_FUN_715600a4(unaff_r4,*(undefined4 *)((int)param_2 + 0x33),
                                   *(undefined4 *)((int)param_2 + 0x37),
                                   *(undefined4 *)((int)param_2 + 0x3b));
                uStack_6c = 0;
                uStack_70 = 0;
                uStack_68 = 0;
                thunk_FUN_715608f0(unaff_r4,&uStack_70);
                uVar11 = FUN_71ba1638(*(undefined4 *)(param_1 + 0xec));
                iVar8 = FUN_71ba2c9c((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0x9999999a,
                                     0x3fa99999);
                if (iVar8 != 0) {
                  uVar4 = FUN_71ba240c(*puVar1,uStack_34);
                  uVar4 = FUN_71ba21e8(uVar4,0x3d4ccccd);
                  uStack_70 = FUN_71ba0b38(uVar4,uStack_70);
                }
                uVar11 = FUN_71ba1638(*(undefined4 *)(param_1 + 0xf0));
                iVar8 = FUN_71ba2c9c((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0x9999999a,
                                     0x3fa99999);
                if (iVar8 != 0) {
                  uVar4 = FUN_71ba240c(*puVar2,uStack_30);
                  uVar4 = FUN_71ba21e8(uVar4,0x3d4ccccd);
                  uStack_6c = FUN_71ba0b38(uVar4,uStack_6c);
                }
                uVar11 = FUN_71ba1638(*(undefined4 *)(param_1 + 0xf4));
                iVar8 = FUN_71ba2c9c((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0x9999999a,
                                     0x3fa99999);
                if (iVar8 != 0) {
                  uVar4 = FUN_71ba240c(*puVar3,uStack_2c);
                  uVar4 = FUN_71ba21e8(uVar4,0x3d4ccccd);
                  uStack_68 = FUN_71ba0b38(uVar4,uStack_68);
                }
                thunk_FUN_71560058(unaff_r4,uStack_70,uStack_6c,uStack_68);
                return;
              }
            }
          }
        }
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_717a1c74
// Entry: 0x717a1c74 | Size: 24 bytes
// =========================================================================

void FUN_717a1c74(int param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0x38) = param_4;
  *(undefined4 *)(param_1 + 0x34) = param_3;
  uVar1 = FUN_71886108();
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  imp___aeabi_memcpy(param_1 + 0x48,param_2,0x48);
  iVar2 = FUN_71ba2d10(*(uint *)(param_1 + 0x70) & 0x7fffffff,0x3b449ba6);
  if (iVar2 != 0) {
    *(uint *)(param_1 + 0x70) = 0;
  }
  iVar2 = FUN_71ba2d10(*(uint *)(param_1 + 0x74) & 0x7fffffff,0x3b449ba6);
  if (iVar2 != 0) {
    *(uint *)(param_1 + 0x74) = 0;
  }
  iVar2 = FUN_71ba2d10(*(uint *)(param_1 + 0x78) & 0x7fffffff,0x3b449ba6);
  if (iVar2 != 0) {
    *(uint *)(param_1 + 0x78) = 0;
  }
  uVar1 = FUN_71ba1e0c(*(undefined1 *)(param_2 + 0x24));
  *(undefined4 *)(param_1 + 4) = uVar1;
  uVar1 = FUN_71ba1e0c(*(undefined1 *)(param_2 + 0x25));
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined1 *)(param_1 + 0x138) = *(undefined1 *)(param_2 + 0x27);
  *(undefined1 *)(param_1 + 0x29) = 1;
  if (0x7fffffff < *(uint *)(param_1 + 0x8c)) {
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  if ((((*(int *)(param_1 + 0x10) != 0) && (iVar2 = thunk_FUN_715bf66c(), iVar2 != 0)) &&
      (1 < *(byte *)(param_1 + 0x138) - 3)) &&
     (iVar2 = FUN_715d0f60(*(undefined4 *)(param_1 + 0x10)), iVar2 == 0)) {
    FUN_717a1f10(param_1);
  }
  if (*(char *)(param_1 + 0x28) != '\x11') {
    FUN_717a2834(param_1,0x11,0);
    *(undefined1 *)(param_1 + 0x28) = 0x11;
  }
  return;
}


// =========================================================================
// Function: FUN_717a1f10
// Entry: 0x717a1f10 | Size: 92 bytes
// =========================================================================

void FUN_717a1f10(int param_1)

{
  int iVar1;
  undefined1 auStack_50 [48];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if ((*(int *)(param_1 + 0x10) != 0) && (iVar1 = thunk_FUN_715bf66c(), iVar1 != 0)) {
    thunk_FUN_715600f0(*(undefined4 *)(param_1 + 0x10),auStack_50);
    FUN_715bf69c(*(undefined4 *)(param_1 + 0x10),uStack_20,uStack_1c,uStack_18);
  }
  return;
}


// =========================================================================
// Function: FUN_717a1fe0
// Entry: 0x717a1fe0 | Size: 24 bytes
// =========================================================================

void FUN_717a1fe0(int param_1,ushort *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  *(undefined4 *)(param_1 + 0x34) = param_3;
  iVar4 = *(int *)(DAT_711f6d58 + 4);
  imp___aeabi_memcpy(param_1 + 0x90,param_2,0x3f);
  uVar2 = (uint)*param_2;
  *(ushort *)(param_1 + 0x1a) = *param_2;
  if (iVar4 != 0) {
    uVar3 = 0;
    if ((uVar2 < 0x7d1) && (*(char *)(iVar4 + uVar2 + 0x3e88) != '\0')) {
      uVar3 = *(undefined4 *)(iVar4 + uVar2 * 4);
    }
    *(undefined4 *)(param_1 + 0x14) = uVar3;
  }
  *(undefined1 *)(param_1 + 0x139) = 0;
  uVar3 = FUN_71ba1e0c((char)param_2[0x1a]);
  *(undefined4 *)(param_1 + 4) = uVar3;
  uVar1 = *(undefined1 *)((int)param_2 + 0x35);
  *(undefined1 *)(param_1 + 0x29) = 2;
  uVar3 = FUN_71ba1e0c(uVar1);
  *(undefined4 *)(param_1 + 8) = uVar3;
  uVar3 = FUN_71886108();
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  *(undefined1 *)(param_1 + 0x138) = 0;
  if ((*(int *)(param_1 + 0x10) != 0) &&
     (uVar2 = thunk_FUN_715c4d3c(), uVar2 != *(byte *)(param_1 + 0x139))) {
    FUN_717a0128(param_1);
  }
  if (*(char *)(param_1 + 0x28) != '\x13') {
    FUN_717a2834(param_1,0x13,0);
    *(undefined1 *)(param_1 + 0x28) = 0x13;
  }
  return;
}


// =========================================================================
// Function: FUN_717a21d4
// Entry: 0x717a21d4 | Size: 24 bytes
// =========================================================================

void FUN_717a21d4(int param_1,ushort *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(DAT_711f6d58 + 4);
  imp___aeabi_memcpy(param_1 + 0xd0,param_2,0x18);
  uVar2 = (uint)*param_2;
  *(ushort *)(param_1 + 0x1a) = *param_2;
  *(byte *)(param_1 + 0x139) = (byte)param_2[1] & 0x7f;
  if (iVar4 != 0) {
    uVar3 = 0;
    if ((uVar2 < 0x7d1) && (*(char *)(iVar4 + uVar2 + 0x3e88) != '\0')) {
      uVar3 = *(undefined4 *)(iVar4 + uVar2 * 4);
    }
    *(undefined4 *)(param_1 + 0x14) = uVar3;
  }
  uVar3 = FUN_71ba1e0c((char)param_2[2]);
  *(undefined4 *)(param_1 + 4) = uVar3;
  uVar1 = *(undefined1 *)((int)param_2 + 5);
  *(undefined1 *)(param_1 + 0x29) = 3;
  uVar3 = FUN_71ba1e0c(uVar1);
  *(undefined4 *)(param_1 + 8) = uVar3;
  uVar3 = FUN_71886108();
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  if ((*(int *)(param_1 + 0x10) != 0) &&
     (uVar2 = thunk_FUN_715c4d3c(), uVar2 != *(byte *)(param_1 + 0x139))) {
    FUN_717a0128(param_1);
  }
  if (*(char *)(param_1 + 0x28) != '\x12') {
    FUN_717a2834(param_1,0x12,0);
    *(undefined1 *)(param_1 + 0x28) = 0x12;
  }
  return;
}


// =========================================================================
// Function: FUN_717a23c4
// Entry: 0x717a23c4 | Size: 24 bytes
// =========================================================================

void FUN_717a23c4(int param_1)

{
  *(undefined2 *)(param_1 + 0x1a) = 0;
  imp___aeabi_memclr4(param_1 + 0x48,0x48);
  imp___aeabi_memclr4(param_1 + 0x90,0x3f);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined1 *)(param_1 + 0x139) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


// =========================================================================
// Function: FUN_717a25f4
// Entry: 0x717a25f4 | Size: 24 bytes
// =========================================================================

void FUN_717a25f4(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_71563ccc(DAT_711a3938);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}


// =========================================================================
// Function: FUN_717a2690
// Entry: 0x717a2690 | Size: 184 bytes
// =========================================================================

void FUN_717a2690(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_71563ccc(DAT_711a3938);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar1 = FUN_71ba1b94(param_4);
    uVar2 = FUN_71ba1b94(param_2);
    uVar3 = FUN_71ba1b94(param_3);
    uVar1 = FUN_71563d2c(DAT_711a3938,0,uVar2,uVar3,uVar1,*(undefined2 *)(param_1 + 0x18),0);
    *(undefined4 *)(param_1 + 0x24) = uVar1;
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_717a2834
// Entry: 0x717a2834 | Size: 272 bytes
// =========================================================================

void FUN_717a2834(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStack_58 [48];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  if (param_2 == 0x13) {
    piVar5 = (int *)(DAT_711a3938 + 0x1389c);
    iVar4 = *piVar5;
    if (iVar4 == 0) {
      iVar4 = FUN_713c301c(0);
      if (iVar4 == 0) {
        iVar4 = *piVar5;
        if (iVar4 == 0) {
          return;
        }
      }
      else {
        iVar4 = thunk_MwhHq(0x3a0);
        iVar1 = FUN_715ba834();
        *piVar5 = iVar1;
      }
    }
    iVar1 = thunk_FUN_715bf66c(iVar4);
    if (((iVar1 != 0) && (iVar1 = thunk_FUN_715c3f6c(iVar4), iVar1 == 0)) &&
       (iVar1 = *(int *)(DAT_711f6d58 + 4), iVar1 != 0)) {
      uVar2 = thunk_FUN_715c4004(iVar4);
      uVar3 = FUN_717b92b8(iVar1,uVar2);
      if (uVar3 == *(ushort *)(param_1 + 0x1a)) {
        thunk_FUN_715600f0(iVar4,auStack_58);
        uVar2 = FUN_71ba0b38(uStack_20,0x3f800000);
        FUN_715bf69c(iVar4,uStack_28,uStack_24,uVar2);
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_717a9698
// Entry: 0x717a9698 | Size: 188 bytes
// =========================================================================

void FUN_717a9698(undefined4 *param_1)

{
  int iVar1;
  undefined4 unaff_r4;
  int *piVar2;
  
  if (0x1f < ((int)param_1[1] / 8) * 8 + 8) {
    unaff_r4 = *(undefined4 *)*param_1;
  }
  piVar2 = (int *)(DAT_711a3938 + 0x1389c);
  iVar1 = *piVar2;
  if (iVar1 == 0) {
    iVar1 = FUN_713c301c(0);
    if (iVar1 == 0) {
      iVar1 = *piVar2;
    }
    else {
      thunk_MwhHq(0x3a0);
      iVar1 = FUN_715ba834();
      *piVar2 = iVar1;
    }
  }
  FUN_715bebf0(iVar1,unaff_r4);
  return;
}


// =========================================================================
// Function: FUN_717a97bc
// Entry: 0x717a97bc | Size: 236 bytes
// =========================================================================

void FUN_717a97bc(undefined4 *param_1)

{
  uint uVar1;
  int *piVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  
  pbVar6 = (byte *)*param_1;
  uVar7 = 0;
  uVar4 = 0;
  bVar3 = 0;
  iVar5 = ((int)param_1[1] / 8) * 8 + 8;
  uVar1 = 0;
  if (0xf < iVar5) {
    uVar1 = 0x10;
  }
  if (0xf < iVar5) {
    uVar4 = (uint)*pbVar6;
    uVar7 = (uint)pbVar6[1];
  }
  if ((int)(uVar1 | 8) <= iVar5) {
    bVar3 = pbVar6[uVar1 >> 3];
  }
  iVar5 = *(int *)(DAT_711f6d58 + 0xac);
  if (iVar5 != 0) {
    uVar4 = uVar4 | uVar7 << 8;
    if (uVar4 == *(ushort *)(iVar5 + 0x1f68)) {
      piVar2 = (int *)(iVar5 + 0x1f6c);
      iVar5 = 0x130;
    }
    else {
      if (0xfa < uVar4 >> 2) {
        return;
      }
      if (*(char *)(iVar5 + uVar4 + 0x3eec) == '\0') {
        return;
      }
      piVar2 = (int *)(iVar5 + uVar4 * 4 + 0x1f8c);
      iVar5 = 0x10;
    }
    if (*(int *)(*piVar2 + iVar5) != 0) {
      FUN_715c8548(*(int *)(*piVar2 + iVar5),bVar3);
      return;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_717a98e0
// Entry: 0x717a98e0 | Size: 340 bytes
// =========================================================================

void FUN_717a98e0(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  pbVar6 = (byte *)*param_1;
  uVar10 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar4 = 0;
  iVar2 = ((int)param_1[1] / 8) * 8 + 8;
  uVar1 = 0;
  uVar9 = 0;
  if (0x1f < iVar2) {
    uVar1 = (uint)*pbVar6;
    uVar4 = (uint)pbVar6[1] << 8;
    uVar8 = (uint)pbVar6[2] << 0x10;
    uVar7 = (uint)pbVar6[3] << 0x18;
    uVar9 = 0x20;
  }
  uVar11 = 0;
  uVar3 = 0;
  uVar5 = 0;
  if ((int)(uVar9 + 0x20) <= iVar2) {
    pbVar6 = pbVar6 + (uVar9 >> 3);
    uVar11 = (uint)*pbVar6;
    uVar5 = (uint)pbVar6[1] << 8;
    uVar3 = (uint)pbVar6[2] << 0x10;
    uVar10 = (uint)pbVar6[3] << 0x18;
  }
  iVar2 = *(int *)(DAT_711f6d58 + 0xac);
  if ((uVar7 | uVar8 | uVar4 | uVar1) == (uint)*(ushort *)(iVar2 + 0x1f68)) {
    iVar2 = *(int *)(*(int *)(iVar2 + 0x1f6c) + 0x130);
  }
  else if (((0xfa < (uVar4 | uVar1) >> 2) ||
           (uVar1 = uVar4 & 0x3ff | uVar1, *(char *)(iVar2 + uVar1 + 0x3eec) == '\0')) ||
          (iVar2 = *(int *)(*(int *)(iVar2 + uVar1 * 4 + 0x1f8c) + 0x10), iVar2 == 0)) {
    return;
  }
  FUN_715be6fc(iVar2,uVar10 | uVar3 | uVar5 | uVar11,0);
  return;
}


// =========================================================================
// Function: FUN_717ae35c
// Entry: 0x717ae35c | Size: 2948 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_717ae35c(int param_1,int param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  char *pcVar11;
  uint unaff_r5;
  uint uVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  bool bVar20;
  uint uStack_ac4;
  uint uStack_ac0;
  uint uStack_abc;
  uint uStack_ab8;
  uint uStack_ab4;
  uint uStack_ab0;
  uint uStack_aac;
  uint uStack_aa8;
  uint uStack_aa4;
  byte *pbStack_aa0;
  uint uStack_a94;
  uint uStack_a90;
  uint uStack_a8c;
  uint uStack_a88;
  uint uStack_a84;
  uint uStack_a80;
  byte bStack_a5f;
  byte bStack_a5e;
  byte bStack_a5d;
  byte bStack_a5c;
  byte bStack_a5b;
  byte bStack_a5a;
  byte bStack_a59;
  byte bStack_a58;
  byte bStack_a57;
  byte bStack_a56;
  byte bStack_a55;
  byte bStack_a54;
  byte bStack_a53;
  byte bStack_a52;
  undefined1 auStack_a50 [2048];
  byte abStack_250 [288];
  byte abStack_130 [260];
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  if (param_1 != 0) {
    uStack_a94 = (uint)bStack_a52;
    iVar9 = 0;
    pbStack_aa0 = (byte *)(uint)bStack_a53;
    uStack_ac0 = (uint)bStack_a56;
    uStack_ac4 = (uint)bStack_a57;
    uStack_aa8 = (uint)bStack_a5a;
    uStack_ab0 = (uint)bStack_a5b;
    uStack_a80 = (uint)bStack_a5c;
    uStack_aac = (uint)bStack_a5e;
    uStack_ab4 = (uint)bStack_a5f;
    uStack_aa4 = 0;
    uStack_a84 = 0;
    uVar17 = (uint)bStack_a54;
    uVar15 = (uint)bStack_a55;
    uVar16 = (uint)bStack_a58;
    uVar5 = (uint)bStack_a59;
    uVar12 = (uint)bStack_a5d;
    uStack_a88 = 0;
    do {
      imp___aeabi_memclr8(abStack_130,0x100);
      imp___aeabi_memclr8(abStack_250 + 0x20,0x100);
      abStack_250[0x1c] = 0;
      abStack_250[0x1d] = 0;
      abStack_250[0x1e] = 0;
      abStack_250[0x1f] = 0;
      abStack_250[0x18] = 0;
      abStack_250[0x19] = 0;
      abStack_250[0x1a] = 0;
      abStack_250[0x1b] = 0;
      abStack_250[0x14] = 0;
      abStack_250[0x15] = 0;
      abStack_250[0x16] = 0;
      abStack_250[0x17] = 0;
      abStack_250[0x10] = 0;
      abStack_250[0x11] = 0;
      abStack_250[0x12] = 0;
      abStack_250[0x13] = 0;
      abStack_250[0xc] = 0;
      abStack_250[0xd] = 0;
      abStack_250[0xe] = 0;
      abStack_250[0xf] = 0;
      abStack_250[8] = 0;
      abStack_250[9] = 0;
      abStack_250[10] = 0;
      abStack_250[0xb] = 0;
      abStack_250[4] = 0;
      abStack_250[5] = 0;
      abStack_250[6] = 0;
      abStack_250[7] = 0;
      abStack_250[0] = 0;
      abStack_250[1] = 0;
      abStack_250[2] = 0;
      abStack_250[3] = 0;
      imp___aeabi_memclr8(auStack_a50,0x800);
      uVar6 = *(uint *)(param_3 + 0x129);
      iVar19 = *(int *)(param_3 + 0x12);
      uVar2 = uVar6 + 8;
      if ((int)uVar2 <= iVar19) {
        pbVar10 = (byte *)(*(int *)(param_3 + 3) + ((int)uVar6 >> 3));
        bVar1 = *pbVar10;
        uVar6 = uVar6 & 7;
        bVar20 = uVar6 != 0;
        if (bVar20) {
          pbVar10 = (byte *)(uint)pbVar10[1];
        }
        unaff_r5 = (uint)bVar1 << uVar6;
        uVar18 = 0;
        if (bVar20) {
          uVar18 = 8 - uVar6;
        }
        *(uint *)(param_3 + 0x129) = uVar2;
        uVar6 = uVar2;
        if (bVar20) {
          unaff_r5 = unaff_r5 | (uint)pbVar10 >> (uVar18 & 0xff);
        }
      }
      if ((unaff_r5 & 0xff) == 2) {
        iVar8 = uVar6 + 8;
        if (iVar8 <= iVar19) {
          uVar2 = uVar6 & 7;
          pbVar10 = (byte *)(*(int *)(param_3 + 3) + ((int)uVar6 >> 3));
          bVar1 = *pbVar10;
          if (uVar2 != 0) {
            pbVar10 = (byte *)(uint)pbVar10[1];
          }
          uStack_aa4 = (uint)bVar1 << uVar2;
          if (uVar2 != 0) {
            uStack_aa4 = uStack_aa4 | (uint)pbVar10 >> (8 - uVar2 & 0xff);
          }
          iVar8 = uVar6 + 0x10;
          *(uint *)(param_3 + 0x129) = uVar6 + 8;
          uStack_aa4 = uStack_aa4 & 0xff;
          uVar6 = uVar6 + 8;
        }
        if (iVar8 <= iVar19) {
          uVar2 = uVar6 & 7;
          bVar20 = uVar2 != 0;
          pbVar10 = (byte *)(*(int *)(param_3 + 3) + ((int)uVar6 >> 3));
          bVar1 = *pbVar10;
          if (bVar20) {
            pbVar10 = (byte *)(uint)pbVar10[1];
          }
          uStack_a8c = (uint)bVar1 << uVar2;
          uVar18 = 0;
          if (bVar20) {
            uVar18 = 8 - uVar2;
          }
          *(uint *)(param_3 + 0x129) = uVar6 + 8;
          if (bVar20) {
            uStack_a8c = uStack_a8c | (uint)pbVar10 >> (uVar18 & 0xff);
          }
          iVar8 = uVar6 + 0x10;
          uVar6 = uVar6 + 8;
        }
        if (iVar8 <= iVar19) {
          uVar2 = uVar6 & 7;
          bVar20 = uVar2 != 0;
          pbVar10 = (byte *)(*(int *)(param_3 + 3) + ((int)uVar6 >> 3));
          bVar1 = *pbVar10;
          uVar6 = uVar6 + 8;
          if (bVar20) {
            pbVar10 = (byte *)(uint)pbVar10[1];
          }
          uStack_a88 = (uint)bVar1 << uVar2;
          uVar18 = 0;
          if (bVar20) {
            uVar18 = 8 - uVar2;
          }
          *(uint *)(param_3 + 0x129) = uVar6;
          if (bVar20) {
            uStack_a88 = uStack_a88 | (uint)pbVar10 >> (uVar18 & 0xff);
          }
          uStack_a88 = uStack_a88 & 0xff;
        }
        uVar18 = uVar6 & 7;
        uVar2 = uStack_a88 * 8 + uVar6;
        if (uVar18 == 0) {
          if ((int)uVar2 <= iVar19) {
            imp___memcpy_chk(abStack_250,*(int *)(param_3 + 3) + ((int)uVar6 >> 3),uStack_a88,0x20);
            *(uint *)(param_3 + 0x129) = uVar2;
            uVar6 = uVar2;
          }
        }
        else if ((uStack_a88 != 0) && ((int)uVar2 <= iVar19)) {
          pbVar10 = abStack_250;
          imp___memset_chk(pbVar10,0,uStack_a88,0x20);
          iVar8 = *(int *)(param_3 + 3);
          uVar3 = 8 - uVar18;
          uVar2 = uStack_a88 * 8;
          do {
            pcVar11 = (char *)(iVar8 + ((int)uVar6 >> 3));
            uVar6 = uVar6 + 8;
            bVar1 = *pbVar10 | *pcVar11 << uVar18;
            *pbVar10 = bVar1;
            if (uVar3 < uVar2) {
              pcVar11 = (char *)(uint)(byte)pcVar11[1];
            }
            *(uint *)(param_3 + 0x129) = uVar6;
            if (uVar3 < uVar2) {
              *pbVar10 = bVar1 | (byte)((uint)pcVar11 >> (uVar3 & 0xff));
            }
            pbVar10 = pbVar10 + 1;
            uVar14 = uVar2 - 8;
            bVar20 = 7 < (int)uVar2;
            uVar2 = uVar14;
          } while (uVar14 != 0 && bVar20);
        }
        abStack_250[uStack_a88] = 0;
        iVar8 = uVar6 + 8;
        if (iVar8 <= iVar19) {
          uVar2 = uVar6 & 7;
          pbVar10 = (byte *)(*(int *)(param_3 + 3) + ((int)uVar6 >> 3));
          bVar1 = *pbVar10;
          if (uVar2 != 0) {
            pbVar10 = (byte *)(uint)pbVar10[1];
          }
          uStack_ab8 = (uint)bVar1 << uVar2;
          if (uVar2 != 0) {
            uStack_ab8 = uStack_ab8 | (uint)pbVar10 >> (8 - uVar2 & 0xff);
          }
          iVar8 = uVar6 + 0x10;
          *(uint *)(param_3 + 0x129) = uVar6 + 8;
          uVar6 = uVar6 + 8;
        }
        if (iVar8 <= iVar19) {
          uVar2 = uVar6 & 7;
          bVar20 = uVar2 != 0;
          pbVar10 = (byte *)(*(int *)(param_3 + 3) + ((int)uVar6 >> 3));
          bVar1 = *pbVar10;
          uVar6 = uVar6 + 8;
          if (bVar20) {
            pbVar10 = (byte *)(uint)pbVar10[1];
          }
          uStack_abc = (uint)bVar1 << uVar2;
          uVar18 = 0;
          if (bVar20) {
            uVar18 = 8 - uVar2;
          }
          *(uint *)(param_3 + 0x129) = uVar6;
          if (bVar20) {
            uStack_abc = uStack_abc | (uint)pbVar10 >> (uVar18 & 0xff);
          }
        }
        iVar8 = uVar6 + 0x20;
        if (iVar8 <= iVar19) {
          iVar8 = *(int *)(param_3 + 3);
          uVar2 = uVar6 & 7;
          pbVar10 = (byte *)(iVar8 + ((int)uVar6 >> 3));
          bVar1 = *pbVar10;
          if (uVar2 != 0) {
            pbVar10 = (byte *)(uint)pbVar10[1];
          }
          *(uint *)(param_3 + 0x129) = uVar6 + 8;
          uVar16 = (uint)bVar1 << uVar2 & 0xff;
          uVar18 = 8 - uVar2;
          if (uVar2 != 0) {
            uVar16 = uVar16 | (uint)pbVar10 >> (uVar18 & 0xff);
          }
          pbVar10 = (byte *)(iVar8 + ((int)(uVar6 + 8) >> 3));
          bVar1 = *pbVar10;
          if (uVar2 != 0) {
            pbVar10 = (byte *)(uint)pbVar10[1];
          }
          uVar5 = (uint)bVar1 << uVar2 & 0xff;
          if (uVar2 != 0) {
            uVar5 = uVar5 | (uint)pbVar10 >> (uVar18 & 0xff);
          }
          *(uint *)(param_3 + 0x129) = uVar6 + 0x10;
          pbVar10 = (byte *)(iVar8 + ((int)(uVar6 + 0x10) >> 3));
          bVar1 = *pbVar10;
          if (uVar2 != 0) {
            pbVar10 = (byte *)(uint)pbVar10[1];
          }
          uStack_aa8 = (uint)bVar1 << uVar2 & 0xff;
          if (uVar2 != 0) {
            uStack_aa8 = uStack_aa8 | (uint)pbVar10 >> (uVar18 & 0xff);
          }
          *(uint *)(param_3 + 0x129) = uVar6 + 0x18;
          pbVar10 = (byte *)(iVar8 + ((int)(uVar6 + 0x18) >> 3));
          uStack_ab0 = (uint)*pbVar10 << uVar2 & 0xff;
          if (uVar2 != 0) {
            uStack_ab0 = uStack_ab0 | pbVar10[1] >> (uVar18 & 0xff);
          }
          iVar8 = uVar6 + 0x40;
          *(uint *)(param_3 + 0x129) = uVar6 + 0x20;
          uVar6 = uVar6 + 0x20;
        }
        if (iVar8 <= iVar19) {
          iVar8 = *(int *)(param_3 + 3);
          uVar18 = uVar6 & 7;
          pbVar10 = (byte *)(iVar8 + ((int)uVar6 >> 3));
          uStack_a80 = (uint)*pbVar10 << uVar18 & 0xff;
          uVar2 = 8 - uVar18;
          if (uVar18 != 0) {
            uStack_a80 = uStack_a80 | pbVar10[1] >> (uVar2 & 0xff);
          }
          *(uint *)(param_3 + 0x129) = uVar6 + 8;
          pbVar10 = (byte *)(iVar8 + ((int)(uVar6 + 8) >> 3));
          bVar1 = *pbVar10;
          if (uVar18 != 0) {
            pbVar10 = (byte *)(uint)pbVar10[1];
          }
          uVar12 = (uint)bVar1 << uVar18 & 0xff;
          if (uVar18 != 0) {
            uVar12 = uVar12 | (uint)pbVar10 >> (uVar2 & 0xff);
          }
          *(uint *)(param_3 + 0x129) = uVar6 + 0x10;
          pbVar10 = (byte *)(iVar8 + ((int)(uVar6 + 0x10) >> 3));
          bVar1 = *pbVar10;
          if (uVar18 != 0) {
            pbVar10 = (byte *)(uint)pbVar10[1];
          }
          uStack_aac = (uint)bVar1 << uVar18 & 0xff;
          if (uVar18 != 0) {
            uStack_aac = uStack_aac | (uint)pbVar10 >> (uVar2 & 0xff);
          }
          *(uint *)(param_3 + 0x129) = uVar6 + 0x18;
          pbVar10 = (byte *)(iVar8 + ((int)(uVar6 + 0x18) >> 3));
          uVar6 = uVar6 + 0x20;
          uVar14 = (uint)*pbVar10 << uVar18 & 0xff;
          uStack_ab4 = uVar14;
          uVar3 = 0;
          if (uVar18 != 0) {
            uStack_ab4 = (uint)pbVar10[1];
            uVar3 = uVar14;
          }
          *(uint *)(param_3 + 0x129) = uVar6;
          if (uVar18 != 0) {
            uStack_ab4 = uVar3 | uStack_ab4 >> (uVar2 & 0xff);
          }
        }
        if ((int)(uVar6 + 8) <= iVar19) {
          pbVar10 = (byte *)(*(int *)(param_3 + 3) + ((int)uVar6 >> 3));
          uVar2 = uVar6 & 7;
          uStack_a90 = (uint)*pbVar10 << uVar2;
          if (uVar2 != 0) {
            uStack_a90 = uStack_a90 | pbVar10[1] >> (8 - uVar2 & 0xff);
          }
          *(uint *)(param_3 + 0x129) = uVar6 + 8;
        }
        uVar4 = FUN_718c5780();
        FUN_718c5ab0(uVar4,auStack_a50,0x800,param_3,0);
        uVar6 = imp___strlen_chk(abStack_250,0x20);
        if ((param_2 != 0) && (uVar6 < 0x21)) {
          FUN_715b9900(param_2,uStack_aa4,uStack_a8c & 0xff,abStack_250,uStack_ab8 & 0xff,
                       uStack_abc & 0xff,
                       uStack_ab0 << 0x18 | uStack_aa8 << 0x10 | uVar5 << 8 | uVar16,
                       uStack_ab4 << 0x18 | uStack_aac << 0x10 | uVar12 << 8 | uStack_a80,
                       uStack_a90 & 0xff,auStack_a50);
        }
      }
      else if ((unaff_r5 & 0xff) == 1) {
        uVar2 = uVar6 + 8;
        if ((int)uVar2 <= iVar19) {
          uVar18 = uVar6 & 7;
          bVar20 = uVar18 != 0;
          pbVar10 = (byte *)(*(int *)(param_3 + 3) + ((int)uVar6 >> 3));
          bVar1 = *pbVar10;
          if (bVar20) {
            pbVar10 = (byte *)(uint)pbVar10[1];
          }
          uStack_aa4 = (uint)bVar1 << uVar18;
          uVar6 = 0;
          if (bVar20) {
            uVar6 = 8 - uVar18;
          }
          *(uint *)(param_3 + 0x129) = uVar2;
          if (bVar20) {
            uStack_aa4 = uStack_aa4 | (uint)pbVar10 >> (uVar6 & 0xff);
          }
          uStack_aa4 = uStack_aa4 & 0xff;
          uVar6 = uVar2;
        }
        uVar2 = uVar6 + 0x10;
        if ((int)uVar2 <= iVar19) {
          uVar18 = uVar6 & 7;
          pbVar10 = (byte *)(*(int *)(param_3 + 3) + ((int)uVar6 >> 3));
          bVar1 = *pbVar10;
          if (uVar18 != 0) {
            pbVar10 = (byte *)(uint)pbVar10[1];
          }
          *(uint *)(param_3 + 0x129) = uVar6 + 8;
          pbVar13 = (byte *)(*(int *)(param_3 + 3) + ((int)(uVar6 + 8) >> 3));
          uStack_a94 = (uint)bVar1 << uVar18 & 0xff;
          if (uVar18 != 0) {
            uStack_a94 = uStack_a94 | (uint)pbVar10 >> (8 - uVar18 & 0xff);
          }
          pbVar7 = (byte *)((uint)*pbVar13 << uVar18 & 0xff);
          pbStack_aa0 = pbVar7;
          if (uVar18 != 0) {
            pbStack_aa0 = (byte *)(uint)pbVar13[1];
            pbVar10 = pbVar7;
          }
          *(uint *)(param_3 + 0x129) = uVar2;
          uVar6 = uVar2;
          if (uVar18 != 0) {
            pbStack_aa0 = (byte *)((uint)pbVar10 | (uint)pbStack_aa0 >> (8 - uVar18 & 0xff));
          }
        }
        uVar2 = uVar6 + 8;
        if ((int)uVar2 <= iVar19) {
          uVar18 = uVar6 & 7;
          bVar20 = uVar18 != 0;
          pbVar10 = (byte *)(*(int *)(param_3 + 3) + ((int)uVar6 >> 3));
          bVar1 = *pbVar10;
          if (bVar20) {
            pbVar10 = (byte *)(uint)pbVar10[1];
          }
          uStack_a84 = (uint)bVar1 << uVar18;
          uVar6 = 0;
          if (bVar20) {
            uVar6 = 8 - uVar18;
          }
          *(uint *)(param_3 + 0x129) = uVar2;
          if (bVar20) {
            uStack_a84 = uStack_a84 | (uint)pbVar10 >> (uVar6 & 0xff);
          }
          uStack_a84 = uStack_a84 & 0xff;
          uVar6 = uVar2;
        }
        uVar18 = uVar6 & 7;
        uVar2 = uStack_a84 * 8 + uVar6;
        if (uVar18 == 0) {
          if ((int)uVar2 <= iVar19) {
            imp___memcpy_chk(abStack_130,*(int *)(param_3 + 3) + ((int)uVar6 >> 3),uStack_a84,0x100)
            ;
            *(uint *)(param_3 + 0x129) = uVar2;
            uVar6 = uVar2;
          }
        }
        else if ((uStack_a84 != 0) && ((int)uVar2 <= iVar19)) {
          pbVar10 = abStack_130;
          imp___memset_chk(pbVar10,0,uStack_a84,0x100);
          iVar8 = *(int *)(param_3 + 3);
          uVar3 = 8 - uVar18;
          uVar2 = uStack_a84 * 8;
          do {
            pcVar11 = (char *)(iVar8 + ((int)uVar6 >> 3));
            uVar6 = uVar6 + 8;
            bVar1 = *pbVar10 | *pcVar11 << uVar18;
            *pbVar10 = bVar1;
            if (uVar3 < uVar2) {
              pcVar11 = (char *)(uint)(byte)pcVar11[1];
            }
            *(uint *)(param_3 + 0x129) = uVar6;
            if (uVar3 < uVar2) {
              *pbVar10 = bVar1 | (byte)((uint)pcVar11 >> (uVar3 & 0xff));
            }
            pbVar10 = pbVar10 + 1;
            uVar14 = uVar2 - 8;
            bVar20 = 7 < (int)uVar2;
            uVar2 = uVar14;
          } while (uVar14 != 0 && bVar20);
        }
        uVar2 = uVar6 + 8;
        abStack_130[uStack_a84] = 0;
        if ((int)uVar2 <= iVar19) {
          uVar18 = uVar6 & 7;
          bVar20 = uVar18 != 0;
          pbVar10 = (byte *)(*(int *)(param_3 + 3) + ((int)uVar6 >> 3));
          bVar1 = *pbVar10;
          if (bVar20) {
            pbVar10 = (byte *)(uint)pbVar10[1];
          }
          uStack_a84 = (uint)bVar1 << uVar18;
          uVar6 = 0;
          if (bVar20) {
            uVar6 = 8 - uVar18;
          }
          *(uint *)(param_3 + 0x129) = uVar2;
          if (bVar20) {
            uStack_a84 = uStack_a84 | (uint)pbVar10 >> (uVar6 & 0xff);
          }
          uStack_a84 = uStack_a84 & 0xff;
          uVar6 = uVar2;
        }
        uVar18 = uVar6 & 7;
        uVar2 = uStack_a84 * 8 + uVar6;
        if (uVar18 == 0) {
          if ((int)uVar2 <= iVar19) {
            imp___memcpy_chk(abStack_250 + 0x20,*(int *)(param_3 + 3) + ((int)uVar6 >> 3),uStack_a84
                             ,0x100);
            *(uint *)(param_3 + 0x129) = uVar2;
            uVar6 = uVar2;
          }
        }
        else if ((uStack_a84 != 0) && ((int)uVar2 <= iVar19)) {
          pbVar10 = abStack_250 + 0x20;
          imp___memset_chk(pbVar10,0,uStack_a84,0x100);
          iVar8 = *(int *)(param_3 + 3);
          uVar3 = 8 - uVar18;
          uVar2 = uStack_a84 * 8;
          do {
            pcVar11 = (char *)(iVar8 + ((int)uVar6 >> 3));
            uVar6 = uVar6 + 8;
            bVar1 = *pbVar10 | *pcVar11 << uVar18;
            *pbVar10 = bVar1;
            if (uVar3 < uVar2) {
              pcVar11 = (char *)(uint)(byte)pcVar11[1];
            }
            *(uint *)(param_3 + 0x129) = uVar6;
            if (uVar3 < uVar2) {
              *pbVar10 = bVar1 | (byte)((uint)pcVar11 >> (uVar3 & 0xff));
            }
            pbVar10 = pbVar10 + 1;
            uVar14 = uVar2 - 8;
            bVar20 = 7 < (int)uVar2;
            uVar2 = uVar14;
          } while (uVar14 != 0 && bVar20);
        }
        abStack_250[uStack_a84 + 0x20] = 0;
        if ((int)(uVar6 + 0x20) <= iVar19) {
          iVar19 = *(int *)(param_3 + 3);
          uVar2 = uVar6 & 7;
          pbVar10 = (byte *)(iVar19 + ((int)uVar6 >> 3));
          bVar1 = *pbVar10;
          if (uVar2 != 0) {
            pbVar10 = (byte *)(uint)pbVar10[1];
          }
          *(uint *)(param_3 + 0x129) = uVar6 + 8;
          uVar17 = (uint)bVar1 << uVar2 & 0xff;
          uVar18 = 8 - uVar2;
          if (uVar2 != 0) {
            uVar17 = uVar17 | (uint)pbVar10 >> (uVar18 & 0xff);
          }
          pbVar10 = (byte *)(iVar19 + ((int)(uVar6 + 8) >> 3));
          bVar1 = *pbVar10;
          if (uVar2 != 0) {
            pbVar10 = (byte *)(uint)pbVar10[1];
          }
          uVar15 = (uint)bVar1 << uVar2 & 0xff;
          if (uVar2 != 0) {
            uVar15 = uVar15 | (uint)pbVar10 >> (uVar18 & 0xff);
          }
          *(uint *)(param_3 + 0x129) = uVar6 + 0x10;
          pbVar10 = (byte *)(iVar19 + ((int)(uVar6 + 0x10) >> 3));
          bVar1 = *pbVar10;
          if (uVar2 != 0) {
            pbVar10 = (byte *)(uint)pbVar10[1];
          }
          uStack_ac0 = (uint)bVar1 << uVar2 & 0xff;
          if (uVar2 != 0) {
            uStack_ac0 = uStack_ac0 | (uint)pbVar10 >> (uVar18 & 0xff);
          }
          *(uint *)(param_3 + 0x129) = uVar6 + 0x18;
          pbVar10 = (byte *)(iVar19 + ((int)(uVar6 + 0x18) >> 3));
          uVar3 = (uint)*pbVar10 << uVar2;
          uStack_ac4 = uVar3 & 0xff;
          if (uVar2 != 0) {
            uVar3 = (uint)pbVar10[1];
          }
          *(uint *)(param_3 + 0x129) = uVar6 + 0x20;
          if (uVar2 != 0) {
            uStack_ac4 = uStack_ac4 | uVar3 >> (uVar18 & 0xff);
          }
        }
        uVar6 = imp___strlen_chk(abStack_130,0x100);
        if (((uVar6 < 0x20) && (uVar6 = imp___strlen_chk(abStack_250 + 0x20,0x100), param_2 != 0))
           && (uVar6 < 0x20)) {
          FUN_715b8ddc(param_2,uStack_a94 | (int)pbStack_aa0 << 8,uStack_aa4,abStack_130,
                       abStack_250 + 0x20,
                       uStack_ac4 << 0x18 | uStack_ac0 << 0x10 | uVar15 << 8 | uVar17);
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != param_1);
  }
  if (_ext___stack_chk_guard == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: thunk_FUN_717b1c10
// Entry: 0x717b1bfc | Size: 12 bytes
// =========================================================================

void thunk_FUN_717b1c10(void)

{
  FUN_717b1c10();
  return;
}


// =========================================================================
// Function: FUN_717b1c10
// Entry: 0x717b1c10 | Size: 44 bytes
// =========================================================================

undefined4 FUN_717b1c10(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 - 1U < 0x12) {
    uVar1 = *(undefined4 *)(&DAT_7008554c + (param_1 - 1U) * 4);
  }
  return uVar1;
}


// =========================================================================
// Function: FUN_717b2654
// Entry: 0x717b2654 | Size: 1916 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x717b2784) */
/* WARNING: Removing unreachable block (ram,0x717b276c) */
/* WARNING: Removing unreachable block (ram,0x717b2758) */
/* WARNING: Removing unreachable block (ram,0x717b273c) */
/* WARNING: Removing unreachable block (ram,0x717b271c) */
/* WARNING: Removing unreachable block (ram,0x717b2704) */
/* WARNING: Removing unreachable block (ram,0x717b2d64) */
/* WARNING: Removing unreachable block (ram,0x717b2d48) */
/* WARNING: Removing unreachable block (ram,0x717b2d30) */
/* WARNING: Removing unreachable block (ram,0x717b2d18) */
/* WARNING: Removing unreachable block (ram,0x717b2cf8) */
/* WARNING: Removing unreachable block (ram,0x717b2ce0) */
/* WARNING: Removing unreachable block (ram,0x717b2cb0) */
/* WARNING: Removing unreachable block (ram,0x717b2c94) */
/* WARNING: Removing unreachable block (ram,0x717b2c7c) */
/* WARNING: Removing unreachable block (ram,0x717b2c64) */
/* WARNING: Removing unreachable block (ram,0x717b2c44) */
/* WARNING: Removing unreachable block (ram,0x717b2c2c) */
/* WARNING: Removing unreachable block (ram,0x717b2bfc) */
/* WARNING: Removing unreachable block (ram,0x717b2be0) */
/* WARNING: Removing unreachable block (ram,0x717b2bc8) */
/* WARNING: Removing unreachable block (ram,0x717b2bb0) */
/* WARNING: Removing unreachable block (ram,0x717b2b90) */
/* WARNING: Removing unreachable block (ram,0x717b2b78) */
/* WARNING: Removing unreachable block (ram,0x717b2b48) */
/* WARNING: Removing unreachable block (ram,0x717b2b2c) */
/* WARNING: Removing unreachable block (ram,0x717b2b14) */
/* WARNING: Removing unreachable block (ram,0x717b2afc) */
/* WARNING: Removing unreachable block (ram,0x717b2adc) */
/* WARNING: Removing unreachable block (ram,0x717b2ac4) */
/* WARNING: Removing unreachable block (ram,0x717b2a94) */
/* WARNING: Removing unreachable block (ram,0x717b2a78) */
/* WARNING: Removing unreachable block (ram,0x717b2a60) */
/* WARNING: Removing unreachable block (ram,0x717b2a48) */
/* WARNING: Removing unreachable block (ram,0x717b2a28) */
/* WARNING: Removing unreachable block (ram,0x717b2a10) */
/* WARNING: Removing unreachable block (ram,0x717b29e0) */
/* WARNING: Removing unreachable block (ram,0x717b29c4) */
/* WARNING: Removing unreachable block (ram,0x717b29ac) */
/* WARNING: Removing unreachable block (ram,0x717b2994) */
/* WARNING: Removing unreachable block (ram,0x717b2974) */
/* WARNING: Removing unreachable block (ram,0x717b295c) */
/* WARNING: Removing unreachable block (ram,0x717b292c) */
/* WARNING: Removing unreachable block (ram,0x717b2910) */
/* WARNING: Removing unreachable block (ram,0x717b28f8) */
/* WARNING: Removing unreachable block (ram,0x717b28e0) */
/* WARNING: Removing unreachable block (ram,0x717b28c0) */
/* WARNING: Removing unreachable block (ram,0x717b28a8) */
/* WARNING: Removing unreachable block (ram,0x717b2870) */
/* WARNING: Removing unreachable block (ram,0x717b2854) */
/* WARNING: Removing unreachable block (ram,0x717b283c) */
/* WARNING: Removing unreachable block (ram,0x717b2824) */
/* WARNING: Removing unreachable block (ram,0x717b2804) */
/* WARNING: Removing unreachable block (ram,0x717b27ec) */
/* WARNING: Removing unreachable block (ram,0x717b27fc) */
/* WARNING: Removing unreachable block (ram,0x717b2814) */
/* WARNING: Removing unreachable block (ram,0x717b282c) */
/* WARNING: Removing unreachable block (ram,0x717b284c) */
/* WARNING: Removing unreachable block (ram,0x717b2868) */
/* WARNING: Removing unreachable block (ram,0x717b2874) */
/* WARNING: Removing unreachable block (ram,0x717b28b8) */
/* WARNING: Removing unreachable block (ram,0x717b28d0) */
/* WARNING: Removing unreachable block (ram,0x717b28e8) */
/* WARNING: Removing unreachable block (ram,0x717b2908) */
/* WARNING: Removing unreachable block (ram,0x717b2924) */
/* WARNING: Removing unreachable block (ram,0x717b2930) */
/* WARNING: Removing unreachable block (ram,0x717b296c) */
/* WARNING: Removing unreachable block (ram,0x717b2984) */
/* WARNING: Removing unreachable block (ram,0x717b299c) */
/* WARNING: Removing unreachable block (ram,0x717b29bc) */
/* WARNING: Removing unreachable block (ram,0x717b29d8) */
/* WARNING: Removing unreachable block (ram,0x717b29e4) */
/* WARNING: Removing unreachable block (ram,0x717b2a20) */
/* WARNING: Removing unreachable block (ram,0x717b2a38) */
/* WARNING: Removing unreachable block (ram,0x717b2a50) */
/* WARNING: Removing unreachable block (ram,0x717b2a70) */
/* WARNING: Removing unreachable block (ram,0x717b2a8c) */
/* WARNING: Removing unreachable block (ram,0x717b2a98) */
/* WARNING: Removing unreachable block (ram,0x717b2ad4) */
/* WARNING: Removing unreachable block (ram,0x717b2aec) */
/* WARNING: Removing unreachable block (ram,0x717b2b04) */
/* WARNING: Removing unreachable block (ram,0x717b2b24) */
/* WARNING: Removing unreachable block (ram,0x717b2b40) */
/* WARNING: Removing unreachable block (ram,0x717b2b4c) */
/* WARNING: Removing unreachable block (ram,0x717b2b88) */
/* WARNING: Removing unreachable block (ram,0x717b2ba0) */
/* WARNING: Removing unreachable block (ram,0x717b2bb8) */
/* WARNING: Removing unreachable block (ram,0x717b2bd8) */
/* WARNING: Removing unreachable block (ram,0x717b2bf4) */
/* WARNING: Removing unreachable block (ram,0x717b2c00) */
/* WARNING: Removing unreachable block (ram,0x717b2c3c) */
/* WARNING: Removing unreachable block (ram,0x717b2c54) */
/* WARNING: Removing unreachable block (ram,0x717b2c6c) */
/* WARNING: Removing unreachable block (ram,0x717b2c8c) */
/* WARNING: Removing unreachable block (ram,0x717b2ca8) */
/* WARNING: Removing unreachable block (ram,0x717b2cb4) */
/* WARNING: Removing unreachable block (ram,0x717b2cf0) */
/* WARNING: Removing unreachable block (ram,0x717b2d08) */
/* WARNING: Removing unreachable block (ram,0x717b2d20) */
/* WARNING: Removing unreachable block (ram,0x717b2d40) */
/* WARNING: Removing unreachable block (ram,0x717b2d5c) */
/* WARNING: Removing unreachable block (ram,0x717b2d68) */
/* WARNING: Removing unreachable block (ram,0x717b2714) */
/* WARNING: Removing unreachable block (ram,0x717b272c) */
/* WARNING: Removing unreachable block (ram,0x717b2744) */
/* WARNING: Removing unreachable block (ram,0x717b2768) */
/* WARNING: Removing unreachable block (ram,0x717b2778) */
/* WARNING: Removing unreachable block (ram,0x717b2788) */
/* WARNING: Type propagation algorithm not settling */

void FUN_717b2654(undefined4 *param_1)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pbVar1 = (byte *)*param_1;
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
  iVar2 = ((int)param_1[1] / 8) * 8 + 8;
  if (0xf < iVar2) {
    uVar5 = 0x10;
  }
  uVar3 = uVar5 | 0x20;
  if (0xf < iVar2) {
    uVar7 = (uint)*pbVar1;
    uVar6 = (uint)pbVar1[1];
  }
  if ((int)uVar3 <= iVar2) {
    uVar4 = uVar5 | 0x40;
    uVar5 = uVar3;
    uVar3 = uVar4;
  }
  if ((int)uVar3 <= iVar2) {
    uVar3 = uVar5 | 0x40;
    uVar5 = uVar5 + 0x20;
  }
  if ((int)uVar3 <= iVar2) {
    uVar3 = uVar5 + 0x40;
    uVar5 = uVar5 + 0x20;
  }
  if ((int)uVar3 <= iVar2) {
    uStack_28 = CONCAT13(pbVar1[uVar5 + 0x18 >> 3],
                         CONCAT12(pbVar1[uVar5 + 0x10 >> 3],
                                  CONCAT11(pbVar1[uVar5 + 8 >> 3],pbVar1[uVar5 >> 3])));
    uVar3 = uVar5 + 0x40;
    uVar5 = uVar5 + 0x20;
  }
  if ((int)uVar3 <= iVar2) {
    uStack_2c = CONCAT13(pbVar1[uVar5 + 0x18 >> 3],
                         CONCAT12(pbVar1[uVar5 + 0x10 >> 3],
                                  CONCAT11(pbVar1[uVar5 + 8 >> 3],pbVar1[uVar5 >> 3])));
    uVar3 = uVar5 + 0x40;
    uVar5 = uVar5 + 0x20;
  }
  if ((int)uVar3 <= iVar2) {
    uStack_30 = CONCAT13(pbVar1[uVar5 + 0x18 >> 3],
                         CONCAT12(pbVar1[uVar5 + 0x10 >> 3],
                                  CONCAT11(pbVar1[uVar5 + 8 >> 3],pbVar1[uVar5 >> 3])));
    uVar3 = uVar5 + 0x40;
    uVar5 = uVar5 + 0x20;
  }
  if ((int)uVar3 <= iVar2) {
    uStack_34 = CONCAT13(pbVar1[uVar5 + 0x18 >> 3],
                         CONCAT12(pbVar1[uVar5 + 0x10 >> 3],
                                  CONCAT11(pbVar1[uVar5 + 8 >> 3],pbVar1[uVar5 >> 3])));
    uVar3 = uVar5 + 0x40;
    uVar5 = uVar5 + 0x20;
  }
  if ((int)uVar3 <= iVar2) {
    uStack_38 = CONCAT13(pbVar1[uVar5 + 0x18 >> 3],
                         CONCAT12(pbVar1[uVar5 + 0x10 >> 3],
                                  CONCAT11(pbVar1[uVar5 + 8 >> 3],pbVar1[uVar5 >> 3])));
    uVar3 = uVar5 + 0x40;
    uVar5 = uVar5 + 0x20;
  }
  if ((int)uVar3 <= iVar2) {
    uStack_3c = CONCAT13(pbVar1[uVar5 + 0x18 >> 3],
                         CONCAT12(pbVar1[uVar5 + 0x10 >> 3],
                                  CONCAT11(pbVar1[uVar5 + 8 >> 3],pbVar1[uVar5 >> 3])));
    uVar3 = uVar5 + 0x40;
    uVar5 = uVar5 + 0x20;
  }
  if ((int)uVar3 <= iVar2) {
    uStack_40 = CONCAT13(pbVar1[uVar5 + 0x18 >> 3],
                         CONCAT12(pbVar1[uVar5 + 0x10 >> 3],
                                  CONCAT11(pbVar1[uVar5 + 8 >> 3],pbVar1[uVar5 >> 3])));
  }
  uVar7 = uVar7 | uVar6 << 8;
  if (uVar7 >> 3 < 0x7d) {
    bVar8 = *(char *)(*(int *)(DAT_711f6d58 + 8) + uVar7) != '\0';
    if (bVar8) {
      uVar7 = *(uint *)(*(int *)(DAT_711f6d58 + 8) + uVar7 * 4 + 1000);
    }
    if (bVar8 && uVar7 != 0) {
      FUN_715b8d8c(uVar7,uStack_28,uStack_2c,uStack_30,uStack_34,uStack_38,uStack_3c,uStack_40);
      return;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_717b3f34
// Entry: 0x717b3f34 | Size: 24 bytes
// =========================================================================

void FUN_717b3f34(int *param_1)

{
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_70102298,&LAB_717a2c10);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_701022f0,&LAB_717a2fe0);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_7010233c,&LAB_717a3050);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_7010227c,&LAB_717a30ac);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_701022a0,&LAB_717a62dc);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_701022a4,&LAB_717a9490);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_701022c4,FUN_717a9698);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_70102374,FUN_717a97bc);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_70102274,FUN_717a98e0);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_70102368,&LAB_717a9a6c);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_7010236c,&LAB_717aa07c);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_70102270,&LAB_717aa208);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_70102310,&LAB_717aa314);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_70102284,&LAB_717aa6d4);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_701022e4,&LAB_717aa768);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_70102290,&LAB_717aa7fc);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_70102278,&LAB_717aa978);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_70102280,&LAB_717aabdc);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_7010229c,&LAB_717aaeb8);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_701022e8,&LAB_717aafec);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_701022ec,&LAB_717ab550);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_701022b4,&LAB_717ab640);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_70102370,&LAB_717ab6c4);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_70102328,&LAB_717ab77c);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_7010232c,&LAB_717ab830);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_70102330,&LAB_717ab930);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_70102334,&LAB_717aba24);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_70102288,&LAB_717abb18);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_701022b0,&LAB_717abd08);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_70102384,&LAB_717abdc8);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_701022c0,&LAB_717abfc8);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_701022c8,&LAB_717ac064);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_701022e0,&LAB_717ac0dc);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_7010228c,&LAB_717ac1a8);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_701022f4,&LAB_717ac230);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_701022a8,&LAB_717ac344);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_70102378,&LAB_717ac5e8);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_70102324,&LAB_717ac9d0);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_70102388,&LAB_717aca00);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_70102358,&LAB_717ad104);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_7010235c,&LAB_717ad52c);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_70102360,&LAB_717ad5e4);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_70102364,&LAB_717ad6dc);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_70102300,&LAB_717af034);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_70102304,&LAB_717afdcc);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_7010230c,&LAB_717afc60);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_701022bc,&LAB_717b0a1c);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_70102344,&LAB_717b0c84);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_701022d0,&LAB_717b0d10);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_701022d4,&LAB_717b0e04);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_701022d8,&LAB_717b0f4c);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_701022b8,&LAB_717b10b4);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_70102340,&LAB_717b01b4);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_701022cc,&LAB_717b13fc);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_70102348,&LAB_717b1150);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_7010223c,&LAB_717b1484);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_7010234c,&LAB_717b157c);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_70102350,&LAB_717b18ac);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_70102354,&LAB_717b1964);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_701022dc,&LAB_717b1c64);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_7010226c,&LAB_717ad794);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_701022ac,&LAB_717b2008);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_701022f8,&LAB_717b21a4);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_701022fc,&LAB_717b22f4);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_70102338,&LAB_717b2400);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_70102308,&LAB_717b2508);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_7010231c,FUN_717b2654);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_70102320,&LAB_717b2e04);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_70102234,&LAB_717b2ec4);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_70102238,&LAB_717b32f4);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_70102260,&LAB_717b3324);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_7010225c,&LAB_717b395c);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_70102258,&LAB_717b3a74);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_70102254,&LAB_717b3bc0);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_70102264,&LAB_717b3888);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_70102314,&LAB_717b3cd8);
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_70102318,&LAB_717b3dac);
                    /* WARNING: Could not recover jumptable at 0x717b4914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x98))(param_1,&DAT_70102268,0x717b3ea0);
  return;
}


// =========================================================================
// Function: FUN_717b5cb0
// Entry: 0x717b5cb0 | Size: 100 bytes
// =========================================================================

undefined4 * FUN_717b5cb0(undefined4 *param_1)

{
  undefined1 auStack_1c [4];
  
  FUN_71644d8c();
  *param_1 = &DAT_70b0f378;
  FUN_71644e80(auStack_1c,param_1);
  imp___aeabi_memclr4(param_1 + 3,0x3c04);
  FUN_71644f50(auStack_1c);
  return param_1;
}


// =========================================================================
// Function: FUN_717b60b4
// Entry: 0x717b60b4 | Size: 224 bytes
// =========================================================================

undefined4 FUN_717b60b4(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  
  uVar1 = 0;
  if (param_2 < 0xc01) {
    iVar2 = param_1 + 0xc;
    if ((*(int *)(iVar2 + param_2 * 4) != 0) && (*(int *)(iVar2 + param_2 * 4) != 0)) {
      FUN_71644e80(auStack_24,param_1);
      if (*(int *)(iVar2 + param_2 * 4) != 0) {
        FUN_715eafd4();
        thunk_qNQrlu();
      }
      *(undefined4 *)(iVar2 + param_2 * 4) = 0;
      *(undefined1 *)(param_1 + param_2 + 0x300c) = 0;
      FUN_71644f50(auStack_24);
    }
    uVar1 = thunk_MwhHq(0x3a8);
    FUN_715ea610(uVar1,param_3,param_4);
    FUN_71644e80(auStack_28,param_1);
    *(undefined4 *)(iVar2 + param_2 * 4) = uVar1;
    *(undefined1 *)(param_1 + param_2 + 0x300c) = 1;
    FUN_71644f50();
  }
  return uVar1;
}


// =========================================================================
// Function: FUN_717b63a0
// Entry: 0x717b63a0 | Size: 28 bytes
// =========================================================================

void FUN_717b63a0(int param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  iVar9 = FUN_7163d6b4();
  if (iVar9 == 0) {
    return;
  }
  pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700faeac);
  if (*pcVar10 == '\0') {
    puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fae9c);
    *(undefined1 *)((int)puVar12 + 0x17) = 1;
    uVar6 = DAT_700855a8;
    uVar5 = DAT_700855a4;
    uVar4 = DAT_700855a0;
    uVar3 = DAT_7008559c;
    *puVar12 = DAT_70085598;
    puVar12[1] = uVar3;
    puVar12[2] = uVar4;
    puVar12[3] = uVar5;
    puVar12[4] = uVar6;
    uVar7 = DAT_700855ae;
    *(undefined2 *)(puVar12 + 5) = DAT_700855ac;
    *(undefined1 *)((int)puVar12 + 0x16) = uVar7;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_714d5bdc,puVar12,&DAT_70b0e000);
    puVar13 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700faeac);
    *puVar13 = 1;
  }
  iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fae9c);
  if (*(char *)(iVar9 + 0x17) != '\0') {
    uVar11 = 0;
    uVar16 = 0;
    do {
      iVar14 = (uVar11 & 7) * 8;
      uVar15 = iVar14 - 0x20;
      bVar8 = (byte)(0xb56143eb >> iVar14) | (byte)(0x1f25313b << ((uVar11 & 7) * -8 + 0x20 & 0xff))
      ;
      if (-1 < (int)uVar15) {
        bVar8 = (byte)(0x1f25313b >> (uVar15 & 0xff));
      }
      *(byte *)(iVar9 + uVar11) = *(byte *)(iVar9 + uVar11) ^ bVar8;
      bVar17 = 0xfffffffe < uVar11;
      bVar1 = uVar16 == 0;
      bVar2 = (0x15 < uVar11) <= uVar16;
      uVar11 = uVar11 + 1;
      uVar16 = uVar16 + bVar17;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar9 + 0x17) = 0;
  }
  uVar11 = imp_strlen(iVar9);
  if (0xfffffff7 < uVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_2c);
  }
  if (uVar11 < 0xb) {
    uVar16 = (uint)&uStack_2c | 1;
    uStack_2c = CONCAT31(uStack_2c._1_3_,(char)(uVar11 << 1));
    if (uVar11 == 0) goto LAB_717b64d0;
  }
  else {
    uVar16 = thunk_MwhHq((uVar11 | 7) + 1);
    uStack_2c = (uVar11 | 7) + 2;
    uStack_28 = uVar11;
    uStack_24 = uVar16;
  }
  imp___aeabi_memmove(uVar16,iVar9,uVar11);
LAB_717b64d0:
  *(undefined1 *)(uVar16 + uVar11) = 0;
  iVar9 = FUN_717c5e7c(&uStack_2c);
  if ((uStack_2c & 1) != 0) {
    thunk_qNQrlu(uStack_24);
  }
  if (iVar9 == 0) {
    iVar9 = 0;
    do {
      if (*(char *)((param_1 + 0x300c) - iVar9) != '\0') {
        thunk_FUN_715eb08c(*(undefined4 *)(param_1 + 0x300c + iVar9 * -4 + -0x3000));
      }
      iVar9 = iVar9 + -1;
    } while (iVar9 != -0xc00);
    iVar9 = *(int *)(param_1 + 0x3c0c);
    if (iVar9 != 0) {
      uVar11 = FUN_71886108();
      if (iVar9 + 0x1eU < uVar11) {
        *(int *)(param_1 + 0x3c0c) = 0;
      }
      return;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_717b6aa0
// Entry: 0x717b6aa0 | Size: 40 bytes
// =========================================================================

void FUN_717b6aa0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((*(char *)((param_1 + 0x300c) - iVar1) != '\0') &&
       (*(int *)(param_1 + 0x300c + iVar1 * -4 + -0x3000) != 0)) {
      FUN_715ebd6c();
    }
    iVar1 = iVar1 + -1;
  } while (iVar1 != -0xc00);
  return;
}


// =========================================================================
// Function: FUN_717b6b3c
// Entry: 0x717b6b3c | Size: 32 bytes
// =========================================================================

void FUN_717b6b3c(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int unaff_r6;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar2 = FUN_7163d6b4();
  if ((iVar2 != 0) && (DAT_711a3b94 == 0)) {
    iVar2 = *(int *)(*(int *)(DAT_711f6d58 + 0xac) + 0x1f6c);
    if (iVar2 != 0) {
      unaff_r6 = *(int *)(iVar2 + 0x130);
    }
    if ((iVar2 != 0 && unaff_r6 != 0) && (iVar2 = thunk_FUN_715609f0(unaff_r6), iVar2 != 0)) {
      if (*(char *)(param_2 + 0x101a) != '\0') {
        iVar2 = FUN_7151dc0c();
        if (iVar2 == 0) {
          return;
        }
        uVar6 = param_3[2];
        uVar10 = FUN_71ba1638(param_3[1]);
        uVar11 = FUN_71ba1638(uVar6);
        uVar8 = *(undefined4 *)(iVar2 + 0x10);
        uVar6 = *(undefined4 *)(iVar2 + 0x14);
        uVar12 = FUN_71ba1638(*(undefined4 *)(iVar2 + 0xc));
        uVar13 = FUN_71ba1638(uVar8);
        uVar14 = FUN_71ba1638(uVar6);
        uVar15 = FUN_71ba1638(*param_3);
        uVar6 = (undefined4)((ulonglong)uVar15 >> 0x20);
        iVar2 = FUN_715d33c8(&DAT_700855b0,uVar6,(int)uVar15,uVar6,uVar10,uVar11,uVar12,uVar13,
                             uVar14,1,0,0,0,0);
        if ((iVar2 == 0) && (*(char *)(param_2 + 0x101a) != '\0')) {
          return;
        }
      }
      uVar6 = FUN_71561790(unaff_r6,*param_3,param_3[1],param_3[2]);
      iVar2 = FUN_71ba2d30(uVar6,*(undefined4 *)(param_2 + 0x1012));
      if ((iVar2 != 0) ||
         (*(char *)(*(int *)(*(int *)(DAT_711f6d58 + 0xac) + 0x1f6c) + 0x11c) != '\0')) {
        FUN_7136cdfc(&uStack_30);
        uStack_40 = *param_3;
        uStack_3c = param_3[1];
        uStack_38 = param_3[2];
        uStack_28 = 0;
        uStack_2c = 0;
        uStack_30 = 0;
        FUN_7135950c(&uStack_40,&uStack_30,0,0,0,0);
        iVar2 = FUN_71ba2d10(uStack_28,0x3f800000);
        if (iVar2 == 0) {
          puVar7 = (undefined4 *)(param_2 + 0x102b);
          uVar5 = *puVar7;
          iVar2 = FUN_71ba2d10(uVar5,0);
          uVar8 = uStack_2c;
          uVar6 = uStack_30;
          if (iVar2 != 0) {
            iVar9 = param_2 + 0x802;
            iVar2 = param_2 + 0x801;
            do {
              if (*(char *)(iVar9 + -1) == '\n') {
                FUN_718cc4ac(&uStack_40,iVar2,iVar9 + -2,0,0xbf800000);
                uVar1 = uStack_40;
                uVar5 = *puVar7;
                iVar3 = FUN_71ba2d70(uStack_40,uVar5);
                iVar2 = iVar9;
                if (iVar3 != 0) {
                  *puVar7 = uVar1;
                  uVar5 = uVar1;
                }
              }
              else if (*(char *)(iVar9 + -1) == '\0') goto code_r0x717b6e28;
              iVar9 = iVar9 + 1;
            } while( true );
          }
          goto LAB_717b6e64;
        }
      }
    }
  }
  return;
code_r0x717b6e28:
  iVar2 = FUN_71ba2d10(uVar5,0);
  if (iVar2 != 0) {
    FUN_718cc4ac(&uStack_40,param_2 + 0x801,0,0,0xbf800000);
    *puVar7 = uStack_40;
  }
LAB_717b6e64:
  uVar4 = *(uint *)(param_2 + 0x1002);
  FUN_717b763c(&uStack_50,
               uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
               uVar4 >> 0x18);
  FUN_71884a34(uVar6,uVar8,uStack_50,uStack_4c,uStack_48,uStack_44,param_2,param_2 + 0x801,
               *(char *)(param_2 + 0x1002) == -1);
  return;
}


// =========================================================================
// Function: FUN_717b71a0
// Entry: 0x717b71a0 | Size: 16 bytes
// =========================================================================

void FUN_717b71a0(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_r5;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (param_2 == 0) {
    return;
  }
  FUN_7136cdfc(&uStack_30);
  uStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  iVar2 = 0;
  if (DAT_711f6d58 != 0) {
    iVar2 = *(int *)(DAT_711f6d58 + 0xac);
  }
  if (((DAT_711f6d58 != 0 && iVar2 != 0) &&
      (uVar1 = *(ushort *)(param_2 + 0x101b), uVar1 >> 2 < 0xfb)) &&
     (*(char *)(iVar2 + (uint)uVar1 + 0x3eec) != '\0')) {
    iVar2 = *(int *)(iVar2 + (uint)uVar1 * 4 + 0x1f8c);
    if (iVar2 != 0) {
      unaff_r5 = *(int *)(iVar2 + 0x10);
    }
    if ((iVar2 != 0 && unaff_r5 != 0) && (iVar2 = thunk_FUN_715609f0(unaff_r5), iVar2 != 0)) {
      puVar5 = (undefined4 *)((uint)&uStack_30 | 4);
      FUN_7136cdfc(&uStack_40);
      FUN_715c8990(unaff_r5,5,&uStack_40);
      uStack_2c = uStack_3c;
      uStack_28 = uStack_38;
      uVar4 = *(undefined4 *)(param_2 + 0x101f);
      uVar6 = *(undefined4 *)(param_2 + 0x1027);
      uVar3 = FUN_71ba0b38(*(undefined4 *)(param_2 + 0x1023),*puVar5);
      *puVar5 = uVar3;
      uVar3 = FUN_71ba0b38(uVar6,puVar5[1]);
      puVar5[1] = uVar3;
      uStack_30 = FUN_71ba0b38(uVar4,uStack_40);
      FUN_717b6b3c(uStack_30,param_2,&uStack_30);
    }
  }
  return;
}


// =========================================================================
// Function: FUN_717b73f8
// Entry: 0x717b73f8 | Size: 16 bytes
// =========================================================================

void FUN_717b73f8(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int unaff_r5;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined1 auStack_70 [48];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (param_2 == 0) {
    return;
  }
  FUN_7136cdfc(&uStack_30);
  uStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  iVar1 = 0;
  if (DAT_711f6d58 != 0) {
    iVar1 = *(int *)(DAT_711f6d58 + 4);
  }
  if ((DAT_711f6d58 != 0 && iVar1 != 0) &&
     (uVar3 = (uint)*(ushort *)(param_2 + 0x101d), uVar3 < 0x7d1)) {
    bVar7 = *(char *)(iVar1 + uVar3 + 0x3e88) != '\0';
    if (bVar7) {
      unaff_r5 = *(int *)(iVar1 + uVar3 * 4);
    }
    if ((bVar7 && unaff_r5 != 0) && (iVar1 = thunk_FUN_715609f0(unaff_r5), iVar1 != 0)) {
      puVar5 = (undefined4 *)((uint)&uStack_30 | 4);
      imp___aeabi_memclr8(auStack_70,0x40);
      thunk_FUN_715600f0(unaff_r5,auStack_70);
      uStack_2c = uStack_3c;
      uStack_28 = uStack_38;
      uVar4 = *(undefined4 *)(param_2 + 0x101f);
      uVar6 = *(undefined4 *)(param_2 + 0x1027);
      uVar2 = FUN_71ba0b38(*(undefined4 *)(param_2 + 0x1023),*puVar5);
      *puVar5 = uVar2;
      uVar2 = FUN_71ba0b38(uVar6,puVar5[1]);
      puVar5[1] = uVar2;
      uStack_30 = FUN_71ba0b38(uVar4,uStack_40);
      FUN_717b6b3c(uStack_30,param_2,&uStack_30);
    }
  }
  return;
}


// =========================================================================
// Function: FUN_717b763c
// Entry: 0x717b763c | Size: 112 bytes
// =========================================================================

undefined4 * FUN_717b763c(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_71ba1e0c(param_2 >> 0x18);
  uVar1 = FUN_71ba21e8(uVar1,0x3b808081);
  param_1[3] = uVar1;
  uVar1 = FUN_71ba1e0c((param_2 & 0xffffff) >> 0x10);
  uVar1 = FUN_71ba21e8(uVar1,0x3b808081);
  param_1[2] = uVar1;
  uVar1 = FUN_71ba1e0c((param_2 & 0xffff) >> 8);
  uVar1 = FUN_71ba21e8(uVar1,0x3b808081);
  param_1[1] = uVar1;
  uVar1 = FUN_71ba1e0c(param_2 & 0xff);
  uVar1 = FUN_71ba21e8(uVar1,0x3b808081);
  *param_1 = uVar1;
  return param_1;
}


// =========================================================================
// Function: FUN_717b77a4
// Entry: 0x717b77a4 | Size: 24 bytes
// =========================================================================

undefined4 FUN_717b77a4(undefined4 param_1)

{
  imp___aeabi_memclr4(param_1,0x280a);
  return param_1;
}


// =========================================================================
// Function: FUN_717b780c
// Entry: 0x717b780c | Size: 48 bytes
// =========================================================================

int FUN_717b780c(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = 0;
  do {
    bVar3 = *(int *)(param_1 + iVar2 * -4) != 0;
    cVar1 = '\0';
    if (bVar3) {
      cVar1 = *(char *)((param_1 + 0x2008) - iVar2);
    }
    if (bVar3 && cVar1 != '\0') {
      *(undefined1 *)((param_1 + 0x2008) - iVar2) = 0;
      **(undefined1 **)(param_1 + iVar2 * -4) = 0;
      if (*(int *)(param_1 + iVar2 * -4) != 0) {
        thunk_qNQrlu();
      }
      *(undefined4 *)(param_1 + iVar2 * -4) = 0;
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != -0x802);
  return param_1;
}


// =========================================================================
// Function: FUN_717b78c8
// Entry: 0x717b78c8 | Size: 368 bytes
// =========================================================================

void FUN_717b78c8(int param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined1 param_9,
                 uint param_10,uint param_11)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  bool bVar4;
  
  if (param_2 < 0x802) {
    if (*(int *)(param_1 + param_2 * 4) != 0) {
      thunk_qNQrlu();
      *(undefined4 *)(param_1 + param_2 * 4) = 0;
      *(undefined1 *)(param_1 + param_2 + 0x2008) = 0;
    }
    iVar1 = thunk_MwhHq(0x102f);
    FUN_7136cdfc((undefined4 *)(iVar1 + 0x1006));
    FUN_7136cdfc();
    if (param_3 != 0) {
      FUN_718842a8(iVar1,param_3,0);
      iVar3 = iVar1 + 0x801;
      FUN_718842a8(iVar3,param_3,0);
      FUN_7188461c(iVar1,0x801);
      FUN_7188461c(iVar3,0x801);
      FUN_7188514c(iVar3);
    }
    *(short *)(iVar1 + 0x101d) = (short)param_11;
    *(undefined4 *)(iVar1 + 0x102b) = 0xbf800000;
    *(short *)(iVar1 + 0x101b) = (short)param_10;
    bVar4 = (undefined4 *)(param_11 & param_10) != (undefined4 *)&DAT_0000ffff;
    puVar2 = (undefined4 *)(param_11 & param_10);
    if (bVar4) {
      puVar2 = (undefined4 *)(iVar1 + 0x101f);
    }
    *(undefined1 *)(iVar1 + 0x101a) = param_9;
    if (bVar4) {
      *puVar2 = param_5;
    }
    *(undefined4 *)(iVar1 + 0x1006) = param_5;
    *(undefined4 *)(iVar1 + 0x1012) = param_8;
    *(int *)(param_1 + param_2 * 4) = iVar1;
    *(undefined4 *)(iVar1 + 0x1002) = param_4;
    *(undefined4 *)(iVar1 + 0x100e) = param_7;
    *(undefined4 *)(iVar1 + 0x100a) = param_6;
    if (bVar4) {
      *(undefined4 *)(iVar1 + 0x1027) = param_7;
      *(undefined4 *)(iVar1 + 0x1023) = param_6;
    }
    *(undefined1 *)(param_1 + param_2 + 0x2008) = 1;
  }
  return;
}


// =========================================================================
// Function: FUN_717b7bf0
// Entry: 0x717b7bf0 | Size: 36 bytes
// =========================================================================

void FUN_717b7bf0(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  bool bVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar6 = -0x802;
  piVar5 = param_1;
  do {
    iVar4 = *piVar5;
    if (iVar4 != 0) {
      bVar7 = *(char *)((int)param_1 + iVar6 + 0x280a) != '\0';
      iVar3 = 0;
      if (bVar7) {
        iVar3 = *(int *)(DAT_711f6d58 + 0xac);
      }
      if (bVar7 && iVar3 != 0) {
        uVar1 = *(ushort *)(iVar4 + 0x101b);
        if (uVar1 == 0xffff) {
          if (*(short *)(iVar4 + 0x101d) == -1) {
            if (DAT_700faebe != '\0') {
              FUN_7136cdfc(&uStack_30);
              uStack_30 = *(undefined4 *)(iVar4 + 0x1006);
              uStack_2c = *(undefined4 *)(iVar4 + 0x100a);
              uStack_28 = *(undefined4 *)(iVar4 + 0x100e);
              FUN_717b6b3c(uStack_28,iVar4,&uStack_30);
            }
          }
          else if (DAT_700faebd != '\0') {
            FUN_717b73f8();
          }
        }
        else {
          uVar2 = *(ushort *)(iVar3 + 0x1f68);
          bVar7 = uVar1 != uVar2;
          if (bVar7) {
            uVar2 = (ushort)DAT_700faebc;
          }
          if (bVar7 && uVar2 != 0) {
            FUN_717b71a0();
          }
        }
      }
    }
    piVar5 = piVar5 + 1;
    bVar7 = iVar6 != -1;
    iVar6 = iVar6 + 1;
  } while (bVar7);
  return;
}


// =========================================================================
// Function: FUN_717b7e30
// Entry: 0x717b7e30 | Size: 16 bytes
// =========================================================================

void FUN_717b7e30(undefined1 param_1)

{
  DAT_700faebc = param_1;
  return;
}


// =========================================================================
// Function: FUN_717b7e78
// Entry: 0x717b7e78 | Size: 16 bytes
// =========================================================================

void FUN_717b7e78(undefined1 param_1)

{
  DAT_700faebd = param_1;
  return;
}


// =========================================================================
// Function: FUN_717b7ec0
// Entry: 0x717b7ec0 | Size: 16 bytes
// =========================================================================

void FUN_717b7ec0(undefined1 param_1)

{
  DAT_700faebe = param_1;
  return;
}


// =========================================================================
// Function: FUN_717b7f08
// Entry: 0x717b7f08 | Size: 128 bytes
// =========================================================================

int FUN_717b7f08(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 0x753f;
  iVar4 = 0x55fb;
  iVar5 = 0x1f44;
  iVar2 = 0x9483;
  iVar3 = 0x3e88;
  iVar6 = 0;
  do {
    *(undefined1 *)(param_1 + iVar3) = 0;
    *(undefined4 *)(param_1 - iVar6) = 0;
    *(undefined4 *)(param_1 + iVar2) = 0;
    *(undefined4 *)(param_1 + iVar5) = 0;
    uVar1 = FUN_71886108();
    *(undefined4 *)(param_1 + iVar4) = uVar1;
    iVar3 = iVar3 + 1;
    *(undefined4 *)(param_1 + iVar7) = 0;
    iVar6 = iVar6 + -4;
    iVar2 = iVar2 + 4;
    iVar5 = iVar5 + 4;
    iVar4 = iVar4 + 4;
    iVar7 = iVar7 + 4;
  } while (iVar6 != -0x1f44);
  return param_1;
}


// =========================================================================
// Function: FUN_717b7fbc
// Entry: 0x717b7fbc | Size: 140 bytes
// =========================================================================

int FUN_717b7fbc(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar2 = 0x3e88;
  iVar3 = 0;
  do {
    bVar4 = *(char *)(param_1 + iVar2) != '\0';
    iVar1 = 0;
    if (bVar4) {
      iVar1 = *(int *)(param_1 + iVar3);
    }
    if (bVar4 && iVar1 != 0) {
      *(undefined1 *)(param_1 + iVar2) = 0;
      if (*(int **)(param_1 + iVar3) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + iVar3) + 4))();
      }
      *(undefined4 *)(param_1 + 0x1f44 + iVar3) = 0;
      *(undefined4 *)(param_1 + iVar3) = 0;
      *(undefined4 *)(param_1 + 0x753f + iVar3) = 0;
    }
    iVar3 = iVar3 + 4;
    iVar2 = iVar2 + 1;
  } while (iVar3 != 0x1f44);
  return param_1;
}


// =========================================================================
// Function: FUN_717b8100
// Entry: 0x717b8100 | Size: 1116 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_717b8100(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  uint uStack_174;
  undefined1 auStack_169 [3];
  undefined1 *puStack_166;
  undefined4 uStack_157;
  undefined1 uStack_142;
  undefined1 uStack_141;
  undefined4 uStack_40;
  char cStack_3c;
  int iStack_30;
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  iVar3 = FUN_71886108();
  uVar7 = 0;
  uStack_174 = 0;
  do {
    bVar9 = *(char *)(param_1 + 0x3e88 + uVar7) != '\0';
    cVar1 = '\0';
    if (bVar9) {
      cVar1 = *(char *)(param_1 + 0x4659 + uVar7);
    }
    if (bVar9 && cVar1 != '\0') {
      iVar8 = *(int *)(param_1 + uVar7 * 4);
      uVar4 = thunk_FUN_715f68dc(iVar8);
      iVar5 = FUN_71ba2cf0(uVar4,0);
      uVar2 = (undefined1)(uVar7 >> 8);
      if (iVar5 == 0) {
        iVar5 = thunk_FUN_715f4594(iVar8);
        if ((iVar5 != 5) && (1000 < (uint)(iVar3 - *(int *)(param_1 + 0x753f + uVar7 * 4)))) {
          uVar4 = FUN_715613f8(iVar8);
          iVar5 = FUN_71ba2d10(uVar4,0x43480000);
          if (iVar5 != 0) {
            *(int *)(param_1 + 0x753f + uVar7 * 4) = iVar3;
            iVar5 = thunk_FUN_715f6b34(iVar8);
            if (iVar5 != 0) {
              if (uVar7 == *(ushort *)(*(int *)(DAT_711f6d58[0x2b] + 0x1f6c) + 0x128)) {
                iStack_30 = 0x800;
                cStack_3c = '\x01';
                uStack_40 = 0;
                uStack_157 = 0x10;
                puStack_166 = &uStack_142;
                uStack_142 = (char)uVar7;
                uStack_141 = uVar2;
                (**(code **)(*(int *)*DAT_711f6d58 + 0xec))
                          ((int *)*DAT_711f6d58,&DAT_70102230,auStack_169,1,10,0,0,0xffffffff,0xffff
                           ,0xffff,0);
                *(undefined2 *)(*(int *)(DAT_711f6d58[0x2b] + 0x1f6c) + 0x128) = 0xffff;
                if ((cStack_3c != '\0') && (0x800 < iStack_30)) {
                  imp_free(puStack_166);
                }
              }
              goto LAB_717b81a4;
            }
          }
        }
        uVar6 = thunk_FUN_715f6ab4(iVar8);
        FUN_715f6908(iVar8,uVar6 ^ 1);
        if (((uStack_174 < 3) &&
            (iVar5 = FUN_71886108(), 100 < (uint)(iVar5 - *(int *)(param_1 + 0x55fb + uVar7 * 4))))
           && (iVar5 = FUN_7175f1b8(*(undefined4 *)(DAT_711f6d58[0x2b] + 0x1f6c),uVar7 & 0xffff,
                                    iVar8), iVar5 != 0)) {
          uVar4 = FUN_71886108();
          *(undefined4 *)(param_1 + 0x55fb + uVar7 * 4) = uVar4;
          uStack_174 = uStack_174 + 1;
        }
        cVar1 = *(char *)((int)DAT_711f6d58 + 0x349);
        iVar5 = FUN_71602eec(iVar8);
        if (cVar1 == '\0') {
          if (iVar5 == -1) {
            uVar6 = FUN_71602de4(iVar8);
            goto LAB_717b84a4;
          }
          iVar5 = FUN_71602eec();
          if (iVar5 != -1) {
            iVar5 = FUN_71602eec(iVar8);
            if (iVar5 == 0) {
              FUN_71602e5c(iVar8,0);
            }
            iVar5 = FUN_71602eec(iVar8);
            uVar6 = 1;
            if (iVar5 == 1) goto LAB_717b84a4;
          }
        }
        else {
          uVar6 = (uint)(iVar5 == 1);
LAB_717b84a4:
          FUN_71602e5c(iVar8,uVar6);
        }
        iVar5 = FUN_71603148(iVar8);
        FUN_71603088(iVar8,iVar5 == 1);
        if (*(int *)(iVar8 + 0xc) != *(int *)(param_1 + 0x1f44 + uVar7 * 4)) {
          *(int *)(param_1 + 0x1f44 + uVar7 * 4) = *(int *)(iVar8 + 0xc);
        }
        FUN_715f6bbc(iVar8);
      }
      else if (uVar7 == *(ushort *)(*(int *)(DAT_711f6d58[0x2b] + 0x1f6c) + 0x128)) {
        iStack_30 = 0x800;
        cStack_3c = '\x01';
        uStack_40 = 0;
        uStack_157 = 0x10;
        puStack_166 = &uStack_142;
        uStack_142 = (char)uVar7;
        uStack_141 = uVar2;
        (**(code **)(*(int *)*DAT_711f6d58 + 0xec))
                  ((int *)*DAT_711f6d58,&DAT_70102230,auStack_169,1,10,0,0,0xffffffff,0xffff,0xffff,
                   0);
        *(undefined2 *)(*(int *)(DAT_711f6d58[0x2b] + 0x1f6c) + 0x128) = 0xffff;
        if ((cStack_3c != '\0') && (0x800 < iStack_30)) {
          imp_free(puStack_166);
        }
      }
    }
LAB_717b81a4:
    uVar7 = uVar7 + 1;
    if (uVar7 == 0x7d1) {
      if (_ext___stack_chk_guard == iStack_2c) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      imp___stack_chk_fail();
    }
  } while( true );
}


// =========================================================================
// Function: FUN_717b8920
// Entry: 0x717b8920 | Size: 392 bytes
// =========================================================================

void FUN_717b8920(int *param_1)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  bool bVar10;
  
  pbVar1 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700faec0);
  iVar9 = 0x7d1;
  piVar2 = param_1 + 0xfa2;
  do {
    piVar8 = (int *)((int)piVar2 + 1);
    bVar10 = (char)*piVar2 != '\0';
    if (bVar10) {
      piVar2 = (int *)(uint)*(byte *)((int)piVar2 + 0x7d1);
    }
    if (bVar10 && piVar2 != (int *)0x0) {
      iVar7 = *param_1;
      iVar3 = FUN_71350794(*(undefined4 *)(iVar7 + 0xc));
      if (iVar3 != 0) {
        FUN_716096e8(iVar7);
        FUN_7160bd1c(iVar7);
        FUN_71603b00(iVar7);
        FUN_7160380c(iVar7);
        iVar3 = FUN_715f8740(iVar7);
        if (iVar3 == 0x1cf) {
          if (*(int *)(iVar7 + 0x760) == 0) {
            pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700faed0);
            if (*pcVar4 == '\0') {
              puVar5 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700faec0);
              *puVar5 = 0xeacdfe4d;
              *(undefined2 *)(puVar5 + 1) = 0x1bb;
              thunk_GFDIUClbc_QcPNgD_wH(&LAB_717bcbb8,puVar5,&DAT_70b0e000);
              puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700faed0);
              *puVar6 = 1;
            }
            if (pbVar1[5] != 0) {
              pbVar1[5] = 0;
              *pbVar1 = *pbVar1 ^ 0x2b;
              pbVar1[1] = pbVar1[1] ^ 0x97;
              pbVar1[2] = pbVar1[2] ^ 0xbf;
              pbVar1[3] = pbVar1[3] ^ 0x8f;
              pbVar1[4] = pbVar1[4] ^ 0xbb;
            }
            FUN_7160e8b0(iVar7,pbVar1);
          }
          else {
LAB_717b8964:
            FUN_715f534c(iVar7);
          }
        }
        else if (*(int *)(iVar7 + 0x760) != 0) goto LAB_717b8964;
      }
    }
    iVar9 = iVar9 + -1;
    param_1 = param_1 + 1;
    piVar2 = piVar8;
    if (iVar9 == 0) {
      return;
    }
  } while( true );
}


// =========================================================================
// Function: FUN_717b8ccc
// Entry: 0x717b8ccc | Size: 760 bytes
// =========================================================================

undefined4 FUN_717b8ccc(int param_1,ushort *param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined1 *puVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  bool bVar16;
  
  uVar13 = (uint)*param_2;
  if (((uVar13 < 0x7d1) && (*(int *)(param_1 + uVar13 * 4) != 0)) &&
     (*(char *)(param_1 + 0x3e88 + uVar13) != '\0')) {
    *(undefined1 *)(param_1 + 0x3e88 + uVar13) = 0;
    piVar4 = *(int **)(param_1 + uVar13 * 4);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    puVar5 = (undefined4 *)(param_1 + uVar13 * 4);
    *puVar5 = 0;
    puVar5[0x7d1] = 0;
    *(undefined4 *)((int)puVar5 + 0x753f) = 0;
  }
  iVar6 = FUN_715ec200(*(undefined4 *)(param_2 + 1));
  if (iVar6 == 0) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700faef0);
    if (*pcVar8 == '\0') {
      puVar5 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700faee0);
      *(undefined1 *)((int)puVar5 + 0x22) = 1;
      uVar3 = DAT_700855d4;
      uVar7 = DAT_700855d0;
      uVar14 = DAT_700855cc;
      *puVar5 = DAT_700855c8;
      puVar5[1] = uVar14;
      puVar5[2] = uVar7;
      puVar5[3] = uVar3;
      uVar3 = DAT_700855e4;
      uVar7 = DAT_700855e0;
      uVar14 = DAT_700855dc;
      puVar5[4] = DAT_700855d8;
      puVar5[5] = uVar14;
      puVar5[6] = uVar7;
      puVar5[7] = uVar3;
      *(undefined2 *)(puVar5 + 8) = DAT_700855e8;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_717bcbe0,puVar5,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700faef0);
      *puVar9 = 1;
    }
    iVar6 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700faee0);
    if (*(char *)(iVar6 + 0x22) != '\0') {
      uVar13 = 0;
      uVar15 = 0;
      do {
        iVar11 = (uVar13 & 7) * 8;
        uVar12 = iVar11 - 0x20;
        bVar10 = (byte)(0x1777103 >> iVar11) |
                 (byte)(0x36d5f59 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar12) {
          bVar10 = (byte)(0x36d5f59 >> (uVar12 & 0xff));
        }
        *(byte *)(iVar6 + uVar13) = *(byte *)(iVar6 + uVar13) ^ bVar10;
        bVar16 = 0xfffffffe < uVar13;
        bVar1 = uVar15 == 0;
        bVar2 = (0x20 < uVar13) <= uVar15;
        uVar13 = uVar13 + 1;
        uVar15 = uVar15 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar6 + 0x22) = 0;
    }
    FUN_716486e8(iVar6,*(undefined4 *)(param_2 + 1));
    uVar14 = 0;
  }
  else {
    uVar7 = FUN_71886108();
    uVar14 = 0;
    *(undefined4 *)(param_1 + (uint)*param_2 * 4 + 0x55fb) = uVar7;
    *(undefined4 *)(param_1 + (uint)*param_2 * 4 + 0x753f) = 0;
    uVar7 = FUN_71561ea4(DAT_711a3938,*param_2,*(undefined4 *)(param_2 + 1),
                         *(undefined4 *)(param_2 + 3),*(undefined4 *)(param_2 + 5),
                         *(undefined4 *)(param_2 + 7),*(undefined4 *)(param_2 + 9),
                         *(char *)((int)param_2 + 0x27) != '\0');
    *(undefined4 *)(param_1 + (uint)*param_2 * 4) = uVar7;
    iVar6 = *(int *)(param_1 + (uint)*param_2 * 4);
    if (iVar6 != 0) {
      FUN_715f6508(iVar6,(char)param_2[0xb],*(undefined1 *)((int)param_2 + 0x17));
      thunk_FUN_715f68a0(*(undefined4 *)(param_1 + (uint)*param_2 * 4),
                         *(undefined4 *)(param_2 + 0xc));
      piVar4 = (int *)(param_1 + (uint)*param_2 * 4);
      piVar4[0x7d1] = *(int *)(*piVar4 + 0xc);
      *(undefined1 *)(param_1 + 0x3e88 + (uint)*param_2) = 1;
      if (((char)param_2[0xe] != '\0') && (*(char *)(param_1 + 0x3e88 + (uint)*param_2) != '\0')) {
        FUN_715f5e68(*(undefined4 *)(param_1 + (uint)*param_2 * 4));
      }
      if ((char)param_2[0x13] != '\0') {
        FUN_71602c00(*(undefined4 *)(param_1 + (uint)*param_2 * 4));
      }
      iVar6 = *(int *)((int)param_2 + 0x1d);
      if ((*(int *)((int)param_2 + 0x21) != 0 || iVar6 != 0) ||
         (iVar6 = 0, *(char *)((int)param_2 + 0x25) != '\0')) {
        FUN_716026f4(*(undefined4 *)(param_1 + (uint)*param_2 * 4),*(int *)((int)param_2 + 0x21),
                     iVar6,*(undefined1 *)((int)param_2 + 0x25));
      }
      uVar14 = 1;
      *(undefined1 *)(param_1 + (uint)*param_2 + 0x4659) = 1;
      *(undefined1 *)(param_1 + (uint)*param_2 + 0x4e2a) = 0;
    }
  }
  return uVar14;
}


// =========================================================================
// Function: FUN_717b92b8
// Entry: 0x717b92b8 | Size: 32 bytes
// =========================================================================

undefined2 FUN_717b92b8(undefined4 param_1,int param_2)

{
  undefined2 uVar1;
  
  uVar1 = 0xffff;
  if (param_2 == 0) {
    return 0xffff;
  }
  if ((*(byte *)(param_2 + 0x3a) & 7) == 2) {
    uVar1 = *(undefined2 *)(param_2 + 0x24);
  }
  return uVar1;
}


// =========================================================================
// Function: FUN_717b92f0
// Entry: 0x717b92f0 | Size: 16 bytes
// =========================================================================

void FUN_717b92f0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + param_2 * 4 + 0x1f44);
  if (iVar1 == 0) {
    return;
  }
  FUN_7135203c(iVar1);
  return;
}


// =========================================================================
// Function: FUN_717b9354
// Entry: 0x717b9354 | Size: 144 bytes
// =========================================================================

uint FUN_717b9354(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  
  pcVar6 = (char *)(param_1 + 0x3e88);
  uVar5 = 0x461c4000;
  uVar8 = 0xffff;
  uVar4 = 0;
  do {
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    if (cVar1 != '\0') {
      pcVar6 = (char *)(uint)(byte)pcVar6[0x7d1];
    }
    if (cVar1 != '\0' && pcVar6 != (char *)0x0) {
      uVar2 = FUN_715613f8(*(undefined4 *)(param_1 + uVar4 * 4));
      iVar3 = FUN_71ba2d10(uVar2,uVar5);
      if (iVar3 != 0) {
        uVar5 = uVar2;
        uVar8 = uVar4;
      }
    }
    uVar4 = uVar4 + 1;
    pcVar6 = pcVar7;
  } while (uVar4 != 0x7d1);
  return uVar8 & 0xffff;
}


// =========================================================================
// Function: FUN_717b943c
// Entry: 0x717b943c | Size: 24 bytes
// =========================================================================

int FUN_717b943c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while ((iVar1 = *(int *)(param_1 + 0x9487 + iVar2 * -4), iVar1 == 0 ||
         (*(int *)(iVar1 + 4) != param_2))) {
    iVar2 = iVar2 + -1;
    if (iVar2 == -2000) {
      return 0;
    }
  }
  return iVar1;
}


// =========================================================================
// Function: FUN_717b94a8
// Entry: 0x717b94a8 | Size: 28 bytes
// =========================================================================

int FUN_717b94a8(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  bool bVar17;
  undefined4 uStack_104;
  undefined1 auStack_100 [72];
  undefined1 auStack_b8 [72];
  undefined1 auStack_70 [48];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  DataMemoryBarrier(0xb);
  if (((DAT_71201660 & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_71201660), iVar4 != 0)) {
    pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700faf10);
    if (*pcVar7 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700faf00);
      *(undefined2 *)(puVar8 + 3) = 0x1ef;
      *puVar8 = 0x9d499831;
      puVar8[1] = 0xdff61d8a;
      puVar8[2] = 0x8a4a9a26;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_717bcc30,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700faf10);
      *puVar9 = 1;
    }
    DAT_71201640 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700faf00);
    if (DAT_71201640[0xd] != 0) {
      *DAT_71201640 = *DAT_71201640 ^ 0x53;
      DAT_71201640[1] = DAT_71201640[1] ^ 0xf7;
      DAT_71201640[2] = DAT_71201640[2] ^ 0x27;
      DAT_71201640[3] = DAT_71201640[3] ^ 0xf3;
      DAT_71201640[0xd] = 0;
      DAT_71201640[4] = DAT_71201640[4] ^ 0xef;
      DAT_71201640[5] = DAT_71201640[5] ^ 0x69;
      DAT_71201640[6] = DAT_71201640[6] ^ 0xa9;
      DAT_71201640[7] = DAT_71201640[7] ^ 0xbb;
      DAT_71201640[8] = DAT_71201640[8] ^ 0x53;
      DAT_71201640[9] = DAT_71201640[9] ^ 0xf7;
      DAT_71201640[10] = DAT_71201640[10] ^ 0x27;
      DAT_71201640[0xb] = DAT_71201640[0xb] ^ 0xf3;
      DAT_71201640[0xc] = DAT_71201640[0xc] ^ 0xef;
    }
    pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700faf30);
    if (*pcVar7 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700faf20);
      *puVar8 = 0x935e3e69;
      puVar8[1] = 0x94c8c3b4;
      *(undefined1 *)((int)puVar8 + 0xb) = 1;
      *(undefined4 *)((int)puVar8 + 7) = 0x31286694;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_717bcc60,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700faf30);
      *puVar9 = 1;
    }
    DAT_71201644 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700faf20);
    if (DAT_71201644[0xb] != 0) {
      *DAT_71201644 = *DAT_71201644 ^ 0xb;
      DAT_71201644[1] = DAT_71201644[1] ^ 0x51;
      DAT_71201644[2] = DAT_71201644[2] ^ 0x31;
      DAT_71201644[3] = DAT_71201644[3] ^ 0xe7;
      DAT_71201644[0xb] = 0;
      DAT_71201644[4] = DAT_71201644[4] ^ 0xeb;
      DAT_71201644[5] = DAT_71201644[5] ^ 0xa7;
      DAT_71201644[6] = DAT_71201644[6] ^ 0xbd;
      DAT_71201644[7] = DAT_71201644[7] ^ 0xf9;
      DAT_71201644[8] = DAT_71201644[8] ^ 0xb;
      DAT_71201644[9] = DAT_71201644[9] ^ 0x51;
      DAT_71201644[10] = DAT_71201644[10] ^ 0x31;
    }
    pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700faf50);
    if (*pcVar7 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700faf40);
      *puVar8 = 0x77f8e2db;
      puVar8[1] = 0x94c34d56;
      puVar8[2] = 0x68faf8db;
      *(undefined1 *)((int)puVar8 + 0xe) = 1;
      *(undefined2 *)(puVar8 + 3) = 0x2170;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_717bcc8c,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700faf50);
      *puVar9 = 1;
    }
    DAT_71201648 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700faf40);
    if (DAT_71201648[0xe] != 0) {
      *DAT_71201648 = *DAT_71201648 ^ 0xbf;
      DAT_71201648[1] = DAT_71201648[1] ^ 0x8d;
      DAT_71201648[2] = DAT_71201648[2] ^ 0x97;
      DAT_71201648[3] = DAT_71201648[3] ^ 5;
      DAT_71201648[0xe] = 0;
      DAT_71201648[4] = DAT_71201648[4] ^ 9;
      DAT_71201648[5] = DAT_71201648[5] ^ 0x21;
      DAT_71201648[6] = DAT_71201648[6] ^ 0xa5;
      DAT_71201648[7] = DAT_71201648[7] ^ 0xcb;
      DAT_71201648[8] = DAT_71201648[8] ^ 0xbf;
      DAT_71201648[9] = DAT_71201648[9] ^ 0x8d;
      DAT_71201648[10] = DAT_71201648[10] ^ 0x97;
      DAT_71201648[0xb] = DAT_71201648[0xb] ^ 5;
      DAT_71201648[0xc] = DAT_71201648[0xc] ^ 9;
      DAT_71201648[0xd] = DAT_71201648[0xd] ^ 0x21;
    }
    pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700faf70);
    if (*pcVar7 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700faf60);
      *puVar8 = 0xd7045267;
      puVar8[1] = 0x8e13190;
      puVar8[2] = 0xc8064867;
      *(undefined1 *)((int)puVar8 + 0xe) = 1;
      *(undefined2 *)(puVar8 + 3) = 0x5db6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_717bccbc,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700faf70);
      *puVar9 = 1;
    }
    DAT_7120164c = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700faf60);
    if (DAT_7120164c[0xe] != 0) {
      *DAT_7120164c = *DAT_7120164c ^ 3;
      DAT_7120164c[1] = DAT_7120164c[1] ^ 0x3d;
      DAT_7120164c[2] = DAT_7120164c[2] ^ 0x6b;
      DAT_7120164c[3] = DAT_7120164c[3] ^ 0xa5;
      DAT_7120164c[0xe] = 0;
      DAT_7120164c[4] = DAT_7120164c[4] ^ 0xcf;
      DAT_7120164c[5] = DAT_7120164c[5] ^ 0x5d;
      DAT_7120164c[6] = DAT_7120164c[6] ^ 0x93;
      DAT_7120164c[7] = DAT_7120164c[7] ^ 0x57;
      DAT_7120164c[8] = DAT_7120164c[8] ^ 3;
      DAT_7120164c[9] = DAT_7120164c[9] ^ 0x3d;
      DAT_7120164c[10] = DAT_7120164c[10] ^ 0x6b;
      DAT_7120164c[0xb] = DAT_7120164c[0xb] ^ 0xa5;
      DAT_7120164c[0xc] = DAT_7120164c[0xc] ^ 0xcf;
      DAT_7120164c[0xd] = DAT_7120164c[0xd] ^ 0x5d;
    }
    pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700faf90);
    if (*pcVar7 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700faf80);
      *puVar8 = 0x3e8c6bb;
      puVar8[1] = 0x5eedc950;
      puVar8[2] = 0x1ceadcbb;
      *(undefined1 *)((int)puVar8 + 0xe) = 1;
      *(undefined2 *)(puVar8 + 3) = 0xbb76;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_717bccec,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700faf90);
      *puVar9 = 1;
    }
    DAT_71201650 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700faf80);
    if (DAT_71201650[0xe] != 0) {
      *DAT_71201650 = *DAT_71201650 ^ 0xdf;
      DAT_71201650[1] = DAT_71201650[1] ^ 0xa9;
      DAT_71201650[2] = DAT_71201650[2] ^ 0x87;
      DAT_71201650[3] = DAT_71201650[3] ^ 0x71;
      DAT_71201650[0xe] = 0;
      DAT_71201650[4] = DAT_71201650[4] ^ 0xf;
      DAT_71201650[5] = DAT_71201650[5] ^ 0xbb;
      DAT_71201650[6] = DAT_71201650[6] ^ 0x8b;
      DAT_71201650[7] = DAT_71201650[7] ^ 1;
      DAT_71201650[8] = DAT_71201650[8] ^ 0xdf;
      DAT_71201650[9] = DAT_71201650[9] ^ 0xa9;
      DAT_71201650[10] = DAT_71201650[10] ^ 0x87;
      DAT_71201650[0xb] = DAT_71201650[0xb] ^ 0x71;
      DAT_71201650[0xc] = DAT_71201650[0xc] ^ 0xf;
      DAT_71201650[0xd] = DAT_71201650[0xd] ^ 0xbb;
    }
    pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fafb0);
    if (*pcVar7 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fafa0);
      *puVar8 = 0x89444697;
      puVar8[1] = 0xfe6131ae;
      puVar8[2] = 0x96465c97;
      *(undefined1 *)((int)puVar8 + 0xe) = 1;
      *(undefined2 *)(puVar8 + 3) = 0x4388;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_717bcd1c,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fafb0);
      *puVar9 = 1;
    }
    DAT_71201654 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fafa0);
    if (DAT_71201654[0xe] != 0) {
      *DAT_71201654 = *DAT_71201654 ^ 0xf3;
      DAT_71201654[1] = DAT_71201654[1] ^ 0x29;
      DAT_71201654[2] = DAT_71201654[2] ^ 0x2b;
      DAT_71201654[3] = DAT_71201654[3] ^ 0xfb;
      DAT_71201654[0xe] = 0;
      DAT_71201654[4] = DAT_71201654[4] ^ 0xf1;
      DAT_71201654[5] = DAT_71201654[5] ^ 0x43;
      DAT_71201654[6] = DAT_71201654[6] ^ 0x13;
      DAT_71201654[7] = DAT_71201654[7] ^ 0xa1;
      DAT_71201654[8] = DAT_71201654[8] ^ 0xf3;
      DAT_71201654[9] = DAT_71201654[9] ^ 0x29;
      DAT_71201654[10] = DAT_71201654[10] ^ 0x2b;
      DAT_71201654[0xb] = DAT_71201654[0xb] ^ 0xfb;
      DAT_71201654[0xc] = DAT_71201654[0xc] ^ 0xf1;
      DAT_71201654[0xd] = DAT_71201654[0xd] ^ 0x43;
    }
    pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fafd0);
    if (*pcVar7 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fafc0);
      *(undefined1 *)((int)puVar8 + 0x11) = 1;
      uVar3 = DAT_700855fc;
      uVar2 = DAT_700855f8;
      uVar6 = DAT_700855f4;
      *puVar8 = DAT_700855f0;
      puVar8[1] = uVar6;
      puVar8[2] = uVar2;
      puVar8[3] = uVar3;
      *(undefined1 *)(puVar8 + 4) = DAT_70085600;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_717bcd4c,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fafd0);
      *puVar9 = 1;
    }
    DAT_71201658 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fafc0);
    if (*(char *)(DAT_71201658 + 0x11) != '\0') {
      uVar13 = 0;
      uVar15 = 0;
      do {
        iVar4 = (uVar13 & 7) * 8;
        uVar12 = iVar4 - 0x20;
        bVar10 = (byte)(0xe73125d9 >> iVar4) |
                 (byte)(0x4529a72f << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar12) {
          bVar10 = (byte)(0x4529a72f >> (uVar12 & 0xff));
        }
        *(byte *)(DAT_71201658 + uVar13) = *(byte *)(DAT_71201658 + uVar13) ^ bVar10;
        bVar17 = 0xfffffffe < uVar13;
        bVar16 = uVar15 == 0;
        bVar1 = (0xf < uVar13) <= uVar15;
        uVar13 = uVar13 + 1;
        uVar15 = uVar15 + bVar17;
      } while (bVar16 && bVar1);
      *(undefined1 *)(DAT_71201658 + 0x11) = 0;
    }
    pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700faff0);
    if (*pcVar7 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fafe0);
      *puVar8 = 0x6d90ee0a;
      puVar8[1] = 0xbf743c53;
      puVar8[2] = 0x6c81ea07;
      *(undefined1 *)((int)puVar8 + 0xf) = 1;
      *(undefined4 *)((int)puVar8 + 0xb) = 0x1d11486c;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_717bcd80,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700faff0);
      *puVar9 = 1;
    }
    DAT_7120165c = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fafe0);
    if (DAT_7120165c[0xf] != 0) {
      *DAT_7120165c = *DAT_7120165c ^ 0x73;
      DAT_7120165c[1] = DAT_7120165c[1] ^ 0x8f;
      DAT_7120165c[2] = DAT_7120165c[2] ^ 0xf3;
      DAT_7120165c[3] = DAT_7120165c[3] ^ 5;
      DAT_7120165c[0xf] = 0;
      DAT_7120165c[4] = DAT_7120165c[4] ^ 0x27;
      DAT_7120165c[5] = DAT_7120165c[5] ^ 99;
      DAT_7120165c[6] = DAT_7120165c[6] ^ 0x1d;
      DAT_7120165c[7] = DAT_7120165c[7] ^ 0xd1;
      DAT_7120165c[8] = DAT_7120165c[8] ^ 0x73;
      DAT_7120165c[9] = DAT_7120165c[9] ^ 0x8f;
      DAT_7120165c[10] = DAT_7120165c[10] ^ 0xf3;
      DAT_7120165c[0xb] = DAT_7120165c[0xb] ^ 5;
      DAT_7120165c[0xc] = DAT_7120165c[0xc] ^ 0x27;
      DAT_7120165c[0xd] = DAT_7120165c[0xd] ^ 99;
      DAT_7120165c[0xe] = DAT_7120165c[0xe] ^ 0x1d;
    }
    thunk_SixizuLbAnqfgRApsCY(&DAT_71201660);
  }
  uVar13 = 0xff;
  uVar15 = 0xffff;
  iVar4 = *(int *)(DAT_711f6d58 + 0xac);
  iVar11 = *(int *)(iVar4 + 0x1f6c);
  if (iVar11 != 0) {
    iVar4 = *(int *)(iVar11 + 0x130);
  }
  if (iVar11 != 0 && iVar4 != 0) {
    uVar12 = 0;
    uStack_104 = 0x461c4000;
    do {
      if ((*(char *)(param_1 + 0x3e88 + uVar12) != '\0') &&
         (*(char *)(param_1 + 0x4659 + uVar12) != '\0')) {
        iVar5 = *(int *)(param_1 + uVar12 * 4);
        iVar4 = *(int *)(iVar5 + 0xc);
        bVar16 = *(int *)(iVar4 + 0x14) != 0;
        if (bVar16) {
          iVar4 = *(int *)(iVar4 + 0x18);
        }
        if (bVar16 && iVar4 != 0) {
          uVar6 = FUN_715613f8(iVar5);
          iVar4 = FUN_71ba2d10(uVar6,uStack_104);
          if (iVar4 != 0) {
            uVar13 = 0xffffffff;
            uVar15 = uVar12;
            uStack_104 = uVar6;
          }
          uVar14 = 0;
          do {
            iVar4 = FUN_713fd1dc(*(undefined4 *)(*(int *)(iVar5 + 0xc) + 0x18),
                                 (&DAT_71201640)[uVar14]);
            if (iVar4 != 0) {
              FUN_7134258c(auStack_70,iVar4 + 0x10);
              iVar4 = *(int *)(iVar4 + 4);
              while (iVar4 != 0) {
                FUN_7133f914(auStack_b8,iVar4 + 0x10,0);
                FUN_71342a3c(auStack_100,auStack_b8,auStack_70);
                imp___aeabi_memcpy8(auStack_70,auStack_100,0x48);
                FUN_7133fdcc(auStack_100);
                iVar4 = *(int *)(iVar4 + 4);
                FUN_7133fdcc(auStack_b8);
              }
              uVar6 = FUN_71561790(*(undefined4 *)(iVar11 + 0x130),uStack_40,uStack_3c,uStack_38);
              FUN_7133fdcc(auStack_70);
              iVar4 = FUN_71ba2d10(uVar6,uStack_104);
              if (iVar4 != 0) {
                uVar13 = uVar14;
                uVar15 = uVar12;
                uStack_104 = uVar6;
              }
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 != 8);
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != 0x7d1);
    iVar4 = FUN_71ba2d50(uStack_104,0x40800000);
    if (iVar4 != 0) {
      uVar13 = 0xff;
      uVar15 = 0xffff;
    }
  }
  return (uVar15 & 0xffff) + (uVar13 & 0xff) * 0x10000;
}


// =========================================================================
// Function: knTpkDamBqSOibwEBzmErxlDhbK
// Entry: 0x717baec4 | Size: 168 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void knTpkDamBqSOibwEBzmErxlDhbK(undefined4 param_1)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puStack_30;
  undefined4 uStack_2c;
  int *piStack_20;
  int iStack_14;
  
  piStack_20 = (int *)&puStack_30;
  ppuVar1 = &puStack_30;
  iStack_14 = _ext___stack_chk_guard;
  puStack_30 = &DAT_70b0f38c;
  uStack_2c = param_1;
  FUN_717ccb10(DAT_712017fc,&puStack_30);
  if ((undefined **)piStack_20 == &puStack_30) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = 0x14;
    ppuVar1 = (undefined **)piStack_20;
    if (piStack_20 == (int *)0x0) goto LAB_717baf48;
  }
  (**(code **)((int)*ppuVar1 + iVar2))();
LAB_717baf48:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: bLZdxhJfYUQiCylkasxeD
// Entry: 0x717bb03c | Size: 168 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bLZdxhJfYUQiCylkasxeD(undefined4 param_1)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puStack_30;
  undefined4 uStack_2c;
  int *piStack_20;
  int iStack_14;
  
  piStack_20 = (int *)&puStack_30;
  ppuVar1 = &puStack_30;
  iStack_14 = _ext___stack_chk_guard;
  puStack_30 = &DAT_70b0f3b0;
  uStack_2c = param_1;
  FUN_717ccb10(DAT_712017fc,&puStack_30);
  if ((undefined **)piStack_20 == &puStack_30) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = 0x14;
    ppuVar1 = (undefined **)piStack_20;
    if (piStack_20 == (int *)0x0) goto LAB_717bb0c0;
  }
  (**(code **)((int)*ppuVar1 + iVar2))();
LAB_717bb0c0:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: kwHIhwDTmpQTukGoDgzdZz
// Entry: 0x717bb1b4 | Size: 168 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void kwHIhwDTmpQTukGoDgzdZz(undefined4 param_1,undefined4 param_2)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int *piStack_20;
  int iStack_14;
  
  piStack_20 = (int *)&puStack_30;
  ppuVar1 = &puStack_30;
  iStack_14 = _ext___stack_chk_guard;
  puStack_30 = &DAT_70b0f3d4;
  uStack_2c = param_1;
  uStack_28 = param_2;
  FUN_717ccb10(DAT_712017fc,&puStack_30);
  if ((undefined **)piStack_20 == &puStack_30) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = 0x14;
    ppuVar1 = (undefined **)piStack_20;
    if (piStack_20 == (int *)0x0) goto LAB_717bb238;
  }
  (**(code **)((int)*ppuVar1 + iVar2))();
LAB_717bb238:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: Mmavt_KquSlLowMzcrlIjoRFyIi
// Entry: 0x717bb32c | Size: 168 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Mmavt_KquSlLowMzcrlIjoRFyIi(undefined4 param_1)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puStack_30;
  undefined4 uStack_2c;
  int *piStack_20;
  int iStack_14;
  
  piStack_20 = (int *)&puStack_30;
  ppuVar1 = &puStack_30;
  iStack_14 = _ext___stack_chk_guard;
  puStack_30 = &DAT_70b0f3f8;
  uStack_2c = param_1;
  FUN_717ccb10(DAT_712017fc,&puStack_30);
  if ((undefined **)piStack_20 == &puStack_30) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = 0x14;
    ppuVar1 = (undefined **)piStack_20;
    if (piStack_20 == (int *)0x0) goto LAB_717bb3b0;
  }
  (**(code **)((int)*ppuVar1 + iVar2))();
LAB_717bb3b0:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: DQhBWHmdGZpdd_HUEyeZLvosMO
// Entry: 0x717bb4a4 | Size: 168 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void DQhBWHmdGZpdd_HUEyeZLvosMO(undefined4 param_1)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puStack_30;
  undefined4 uStack_2c;
  int *piStack_20;
  int iStack_14;
  
  piStack_20 = (int *)&puStack_30;
  ppuVar1 = &puStack_30;
  iStack_14 = _ext___stack_chk_guard;
  puStack_30 = &DAT_70b0f41c;
  uStack_2c = param_1;
  FUN_717ccb10(DAT_712017fc,&puStack_30);
  if ((undefined **)piStack_20 == &puStack_30) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = 0x14;
    ppuVar1 = (undefined **)piStack_20;
    if (piStack_20 == (int *)0x0) goto LAB_717bb528;
  }
  (**(code **)((int)*ppuVar1 + iVar2))();
LAB_717bb528:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: YjnIPzIUP_YWstJXFmPqmujbOAVbmnLU
// Entry: 0x717bb61c | Size: 168 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void YjnIPzIUP_YWstJXFmPqmujbOAVbmnLU(undefined4 param_1)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puStack_30;
  undefined4 uStack_2c;
  int *piStack_20;
  int iStack_14;
  
  piStack_20 = (int *)&puStack_30;
  ppuVar1 = &puStack_30;
  iStack_14 = _ext___stack_chk_guard;
  puStack_30 = &DAT_70b0f440;
  uStack_2c = param_1;
  FUN_717ccb10(DAT_712017fc,&puStack_30);
  if ((undefined **)piStack_20 == &puStack_30) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = 0x14;
    ppuVar1 = (undefined **)piStack_20;
    if (piStack_20 == (int *)0x0) goto LAB_717bb6a0;
  }
  (**(code **)((int)*ppuVar1 + iVar2))();
LAB_717bb6a0:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: TUEhNjulGhQRFNXFDpCArYwafHBTjVI
// Entry: 0x717bb794 | Size: 168 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TUEhNjulGhQRFNXFDpCArYwafHBTjVI(undefined4 param_1,undefined4 param_2)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int *piStack_20;
  int iStack_14;
  
  piStack_20 = (int *)&puStack_30;
  ppuVar1 = &puStack_30;
  iStack_14 = _ext___stack_chk_guard;
  puStack_30 = &DAT_70b0f464;
  uStack_2c = param_1;
  uStack_28 = param_2;
  FUN_717ccb10(DAT_712017fc,&puStack_30);
  if ((undefined **)piStack_20 == &puStack_30) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = 0x14;
    ppuVar1 = (undefined **)piStack_20;
    if (piStack_20 == (int *)0x0) goto LAB_717bb818;
  }
  (**(code **)((int)*ppuVar1 + iVar2))();
LAB_717bb818:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: DUkmocHQCthGSYjJqKPDPVtkROzN
// Entry: 0x717bb90c | Size: 168 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void DUkmocHQCthGSYjJqKPDPVtkROzN(undefined4 param_1,undefined4 param_2)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int *piStack_20;
  int iStack_14;
  
  piStack_20 = (int *)&puStack_30;
  ppuVar1 = &puStack_30;
  iStack_14 = _ext___stack_chk_guard;
  puStack_30 = &DAT_70b0f488;
  uStack_2c = param_1;
  uStack_28 = param_2;
  FUN_717ccb10(DAT_712017fc,&puStack_30);
  if ((undefined **)piStack_20 == &puStack_30) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = 0x14;
    ppuVar1 = (undefined **)piStack_20;
    if (piStack_20 == (int *)0x0) goto LAB_717bb990;
  }
  (**(code **)((int)*ppuVar1 + iVar2))();
LAB_717bb990:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: xNvtOqv_blJ_AmKYoIekuHtVSyz
// Entry: 0x717bba84 | Size: 168 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void xNvtOqv_blJ_AmKYoIekuHtVSyz(undefined4 param_1,undefined4 param_2)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int *piStack_20;
  int iStack_14;
  
  piStack_20 = (int *)&puStack_30;
  ppuVar1 = &puStack_30;
  iStack_14 = _ext___stack_chk_guard;
  puStack_30 = &DAT_70b0f4ac;
  uStack_2c = param_1;
  uStack_28 = param_2;
  FUN_717ccb10(DAT_712017fc,&puStack_30);
  if ((undefined **)piStack_20 == &puStack_30) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = 0x14;
    ppuVar1 = (undefined **)piStack_20;
    if (piStack_20 == (int *)0x0) goto LAB_717bbb08;
  }
  (**(code **)((int)*ppuVar1 + iVar2))();
LAB_717bbb08:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: onbRhQAcnuBsHgNKpMVrmzFcdZdNMF
// Entry: 0x717bbbfc | Size: 164 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void onbRhQAcnuBsHgNKpMVrmzFcdZdNMF(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int *piStack_20;
  int iStack_14;
  
  piStack_20 = (int *)&puStack_30;
  ppuVar1 = &puStack_30;
  iStack_14 = _ext___stack_chk_guard;
  puStack_30 = &DAT_70b0f4d0;
  uStack_2c = param_1;
  uStack_28 = param_2;
  uStack_24 = param_3;
  FUN_717ccb10(DAT_712017fc,&puStack_30);
  if ((undefined **)piStack_20 == &puStack_30) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = 0x14;
    ppuVar1 = (undefined **)piStack_20;
    if (piStack_20 == (int *)0x0) goto LAB_717bbc7c;
  }
  (**(code **)((int)*ppuVar1 + iVar2))();
LAB_717bbc7c:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: YiZlzhLMB_tTjVCdYoniCD
// Entry: 0x717bbd70 | Size: 608 bytes
// =========================================================================

void YiZlzhLMB_tTjVCdYoniCD
               (undefined1 param_1,undefined4 param_2,int param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
               int param_13,int param_14)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *unaff_r5;
  int iVar7;
  int unaff_r8;
  int *piVar8;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_70ffc954);
  if (DAT_711f6d58 != 0) {
    unaff_r5 = &DAT_711a3938;
    unaff_r8 = DAT_711a3938;
  }
  if (DAT_711f6d58 != 0 && unaff_r8 != 0) {
    piVar8 = (int *)(unaff_r8 + 0x1389c);
    iVar7 = *piVar8;
    if (iVar7 == 0) {
      iVar7 = FUN_713c301c(0);
      if (iVar7 == 0) {
        iVar7 = *piVar8;
        if (iVar7 == 0) goto LAB_717bbdb8;
      }
      else {
        iVar7 = thunk_MwhHq(0x3a0);
        iVar1 = FUN_715ba834();
        *piVar8 = iVar1;
      }
    }
    piVar8 = (int *)(*unaff_r5 + 0x1389c);
    iVar1 = *piVar8;
    if (iVar1 == 0) {
      iVar1 = FUN_713c301c(0);
      if (iVar1 == 0) {
        iVar1 = *piVar8;
      }
      else {
        thunk_MwhHq(0x3a0);
        iVar1 = FUN_715ba834();
        *piVar8 = iVar1;
      }
    }
    iVar1 = thunk_FUN_715c3f6c(iVar1);
    if (iVar1 == 0) {
      piVar8 = (int *)(*unaff_r5 + 0x1389c);
      iVar1 = *piVar8;
      if (iVar1 == 0) {
        iVar1 = FUN_713c301c(0);
        if (iVar1 == 0) {
          iVar1 = *piVar8;
        }
        else {
          thunk_MwhHq(0x3a0);
          iVar1 = FUN_715ba834();
          *piVar8 = iVar1;
        }
      }
      iVar1 = thunk_FUN_715bf66c(iVar1);
      if (iVar1 != 0) {
        iVar1 = *(int *)(DAT_711f6d58 + 4);
        iVar7 = thunk_FUN_715c4004(iVar7);
        if ((((iVar7 != 0) && ((*(byte *)(iVar7 + 0x3a) & 7) == 2)) &&
            (uVar2 = (uint)*(ushort *)(iVar7 + 0x24), uVar2 < 0x7d1)) &&
           (*(char *)(iVar1 + uVar2 + 0x3e88) != '\0')) {
          iVar7 = *(int *)(iVar1 + uVar2 * 4);
          if (iVar7 != 0) {
            uVar2 = DAT_712017fc;
          }
          if (iVar7 != 0 && uVar2 != 0) {
            uVar3 = FUN_71ba242c(param_5,param_6);
            uVar4 = FUN_71ba242c(param_7,param_8);
            uVar5 = FUN_71ba242c(param_11,param_12);
            uVar6 = FUN_71ba242c(param_9,param_10);
            uStack_2c = uVar3;
            uStack_28 = uVar4;
            if (param_3 == 0) {
              FUN_7160eab4(iVar7,param_1,param_2,&uStack_2c,uVar5,uVar6,param_13 != 0,param_14 != 0)
              ;
            }
            else {
              FUN_7160ee64(iVar7,param_1,param_2,&uStack_2c,uVar5,uVar6,param_13 != 0,param_14 != 0)
              ;
            }
          }
        }
      }
    }
  }
LAB_717bbdb8:
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_70ffc954);
  return;
}


// =========================================================================
// Function: cOLgIbZ_cJCPFxQplfRYidM
// Entry: 0x717bc2b8 | Size: 264 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cOLgIbZ_cJCPFxQplfRYidM
               (int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
               int param_8,int param_9,int param_10,int param_11,int param_12)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int aiStack_40 [4];
  int *piStack_30;
  int iStack_24;
  
  uVar1 = DAT_712017fc;
  piVar2 = aiStack_40;
  iStack_24 = _ext___stack_chk_guard;
  piStack_30 = (int *)thunk_MwhHq(0x38);
  piStack_30[0xc] = param_11;
  piStack_30[0xb] = param_10;
  piStack_30[10] = param_9;
  piStack_30[9] = param_8;
  piStack_30[8] = param_7;
  piStack_30[7] = param_6;
  piStack_30[6] = param_5;
  piStack_30[5] = param_4;
  piStack_30[0xd] = param_12;
  piStack_30[2] = param_1;
  piStack_30[3] = param_2;
  piStack_30[4] = param_3;
  *piStack_30 = (int)&DAT_70b0f4f4;
  FUN_717ccb10(uVar1,aiStack_40);
  if (piStack_30 == aiStack_40) {
    iVar3 = 0x10;
  }
  else {
    iVar3 = 0x14;
    piVar2 = piStack_30;
    if (piStack_30 == (int *)0x0) goto LAB_717bc39c;
  }
  (**(code **)(*piVar2 + iVar3))();
LAB_717bc39c:
  if (_ext___stack_chk_guard == iStack_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: fhIFlzzaeFAnoVPCuwdTplifYg
// Entry: 0x717bc4ac | Size: 424 bytes
// =========================================================================

void fhIFlzzaeFAnoVPCuwdTplifYg(undefined1 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *unaff_r4;
  int iVar4;
  int unaff_r7;
  int *piVar5;
  
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_70ffc954);
  if (DAT_711f6d58 != 0) {
    unaff_r4 = &DAT_711a3938;
    unaff_r7 = DAT_711a3938;
  }
  if (DAT_711f6d58 != 0 && unaff_r7 != 0) {
    piVar5 = (int *)(unaff_r7 + 0x1389c);
    iVar4 = *piVar5;
    if (iVar4 == 0) {
      iVar4 = FUN_713c301c(0);
      if (iVar4 == 0) {
        iVar4 = *piVar5;
        if (iVar4 == 0) goto LAB_717bc4f0;
      }
      else {
        iVar4 = thunk_MwhHq(0x3a0);
        iVar1 = FUN_715ba834();
        *piVar5 = iVar1;
      }
    }
    piVar5 = (int *)(*unaff_r4 + 0x1389c);
    iVar1 = *piVar5;
    if (iVar1 == 0) {
      iVar1 = FUN_713c301c(0);
      if (iVar1 == 0) {
        iVar1 = *piVar5;
      }
      else {
        thunk_MwhHq(0x3a0);
        iVar1 = FUN_715ba834();
        *piVar5 = iVar1;
      }
    }
    iVar1 = thunk_FUN_715c3f6c(iVar1);
    if (iVar1 == 0) {
      piVar5 = (int *)(*unaff_r4 + 0x1389c);
      iVar1 = *piVar5;
      if (iVar1 == 0) {
        iVar1 = FUN_713c301c(0);
        if (iVar1 == 0) {
          iVar1 = *piVar5;
        }
        else {
          thunk_MwhHq(0x3a0);
          iVar1 = FUN_715ba834();
          *piVar5 = iVar1;
        }
      }
      iVar1 = thunk_FUN_715bf66c(iVar1);
      if (iVar1 != 0) {
        iVar1 = *(int *)(DAT_711f6d58 + 4);
        iVar4 = thunk_FUN_715c4004(iVar4);
        if ((((iVar4 != 0) && ((*(byte *)(iVar4 + 0x3a) & 7) == 2)) &&
            (uVar2 = (uint)*(ushort *)(iVar4 + 0x24), uVar2 < 0x7d1)) &&
           (uVar3 = (uint)*(byte *)(iVar1 + uVar2 + 0x3e88), uVar3 != 0)) {
          iVar4 = *(int *)(iVar1 + uVar2 * 4);
          if (iVar4 != 0) {
            uVar3 = DAT_712017fc;
          }
          if (iVar4 != 0 && uVar3 != 0) {
            if (param_2 == 0) {
              FUN_715f5ac0(iVar4,param_1);
            }
            else {
              FUN_715f5b20();
            }
          }
        }
      }
    }
  }
LAB_717bc4f0:
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_70ffc954);
  return;
}


// =========================================================================
// Function: ccrMeUExySRmcjGGIqACFLS
// Entry: 0x717bc8cc | Size: 168 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ccrMeUExySRmcjGGIqACFLS(undefined4 param_1)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puStack_30;
  undefined4 uStack_2c;
  int *piStack_20;
  int iStack_14;
  
  piStack_20 = (int *)&puStack_30;
  ppuVar1 = &puStack_30;
  iStack_14 = _ext___stack_chk_guard;
  puStack_30 = &DAT_70b0f518;
  uStack_2c = param_1;
  FUN_717ccb10(DAT_712017fc,&puStack_30);
  if ((undefined **)piStack_20 == &puStack_30) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = 0x14;
    ppuVar1 = (undefined **)piStack_20;
    if (piStack_20 == (int *)0x0) goto LAB_717bc950;
  }
  (**(code **)((int)*ppuVar1 + iVar2))();
LAB_717bc950:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: GnIIdvpwyMvzkssuzIhBKyswHx
// Entry: 0x717bca44 | Size: 164 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GnIIdvpwyMvzkssuzIhBKyswHx(undefined4 param_1,undefined4 param_2)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puStack_30;
  undefined4 uStack_2c;
  int *piStack_20;
  int iStack_14;
  
  piStack_20 = (int *)&puStack_30;
  ppuVar1 = &puStack_30;
  iStack_14 = _ext___stack_chk_guard;
  puStack_30 = &DAT_70b0f53c;
  uStack_2c = param_2;
  FUN_717ccb10(DAT_712017fc,&puStack_30);
  if ((undefined **)piStack_20 == &puStack_30) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = 0x14;
    ppuVar1 = (undefined **)piStack_20;
    if (piStack_20 == (int *)0x0) goto LAB_717bcac4;
  }
  (**(code **)((int)*ppuVar1 + iVar2))();
LAB_717bcac4:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_717bcebc
// Entry: 0x717bcebc | Size: 4 bytes
// =========================================================================

void FUN_717bcebc(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x717bced8 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_717bd388
// Entry: 0x717bd388 | Size: 4 bytes
// =========================================================================

void FUN_717bd388(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x717bd3a4 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_717bd540
// Entry: 0x717bd540 | Size: 4 bytes
// =========================================================================

void FUN_717bd540(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x717bd55c | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_717bda3c
// Entry: 0x717bda3c | Size: 4 bytes
// =========================================================================

void FUN_717bda3c(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x717bda58 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_717bdf28
// Entry: 0x717bdf28 | Size: 4 bytes
// =========================================================================

void FUN_717bdf28(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x717bdf44 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_717be40c
// Entry: 0x717be40c | Size: 4 bytes
// =========================================================================

void FUN_717be40c(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x717be428 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_717be960
// Entry: 0x717be960 | Size: 4 bytes
// =========================================================================

void FUN_717be960(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x717be97c | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_717bee24
// Entry: 0x717bee24 | Size: 4 bytes
// =========================================================================

void FUN_717bee24(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x717bee40 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_717bf31c
// Entry: 0x717bf31c | Size: 4 bytes
// =========================================================================

void FUN_717bf31c(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x717bf338 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_717bf848
// Entry: 0x717bf848 | Size: 4 bytes
// =========================================================================

void FUN_717bf848(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x717bf864 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x717bfdb8 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_717c0314
// Entry: 0x717c0314 | Size: 4 bytes
// =========================================================================

void FUN_717c0314(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x717c0330 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_717c04b8
// Entry: 0x717c04b8 | Size: 4 bytes
// =========================================================================

void FUN_717c04b8(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x717c04d4 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: LCXtLvjYTVa_ZxzNvNAKSMTf
// Entry: 0x717c08d8 | Size: 364 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void LCXtLvjYTVa_ZxzNvNAKSMTf(int param_1)

{
  undefined **ppuVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uStack_34;
  undefined *apuStack_30 [4];
  undefined **ppuStack_20;
  int iStack_14;
  
  iStack_14 = _ext___stack_chk_guard;
  DataMemoryBarrier(0xb);
  DAT_71201664 = (undefined1)param_1;
  DataMemoryBarrier(0xb);
  if (param_1 != 0) {
    uStack_34 = 0xff;
    uVar2 = imp_gettid();
    imp_syscall(0xf1,uVar2,4,&uStack_34);
    FUN_717ef3ac();
    ppuVar1 = apuStack_30;
    apuStack_30[0] = &DAT_70b0f560;
    ppuStack_20 = ppuVar1;
    FUN_717ccb10(DAT_712017fc,ppuVar1);
    if (ppuStack_20 == ppuVar1) {
      iVar3 = 0x10;
    }
    else {
      iVar3 = 0x14;
      ppuVar1 = ppuStack_20;
      if (ppuStack_20 == (undefined **)0x0) goto LAB_717c0994;
    }
    (**(code **)(*ppuVar1 + iVar3))();
  }
LAB_717c0994:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: zvUgXrSTvHCYtUESjFdrEUAwChfu
// Entry: 0x717c0afc | Size: 396 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void zvUgXrSTvHCYtUESjFdrEUAwChfu(void)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *apuStack_30 [4];
  int *piStack_20;
  int iStack_14;
  
  piStack_20 = (int *)apuStack_30;
  ppuVar1 = apuStack_30;
  DAT_71201674 = 0xcc034;
  DAT_71201678 = 0xd05eb;
  DAT_71201668 = 10;
  DAT_7120166c = 10;
  DAT_71201694 = 0x19;
  DAT_71201670 = 0;
  DAT_7120167c = 4;
  DAT_71201680 = 0;
  DAT_71201684 = 0;
  DAT_71201754 = 0x145;
  DAT_7120174c = 400;
  DAT_71201688 = 0;
  DAT_7120168c = 0;
  DAT_71201690 = 0;
  DAT_71201758 = 0x145;
  DAT_71201750 = 400;
  DAT_71201744 = 0;
  iStack_14 = _ext___stack_chk_guard;
  DAT_71201760 = 1;
  DAT_7120175c = 1;
  DAT_71201748 = 0;
  apuStack_30[0] = &DAT_70b0f584;
  FUN_717ccb10(DAT_712017fc,apuStack_30);
  if ((undefined **)piStack_20 == apuStack_30) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = 0x14;
    ppuVar1 = (undefined **)piStack_20;
    if (piStack_20 == (int *)0x0) goto LAB_717c0bfc;
  }
  (**(code **)((int)*ppuVar1 + iVar2))();
LAB_717c0bfc:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: SAmk_ZGlqxyoqYzcvEkkHIXver
// Entry: 0x717c0d10 | Size: 324 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SAmk_ZGlqxyoqYzcvEkkHIXver(void)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *apuStack_30 [4];
  int *piStack_20;
  int iStack_14;
  
  piStack_20 = (int *)apuStack_30;
  ppuVar1 = apuStack_30;
  DAT_71201718 = 1;
  DAT_71201700 = 1;
  DAT_712016e0 = 0;
  DAT_712016e4 = 1;
  DAT_712016e8 = 1;
  DAT_712016ec = 1;
  DAT_71201698 = 0;
  DAT_7120169c = 0;
  DAT_712016a0 = 1;
  DAT_712016a4 = 0;
  DAT_712016a8 = 0;
  iStack_14 = _ext___stack_chk_guard;
  apuStack_30[0] = &DAT_70b0f5a8;
  FUN_717ccb10(DAT_712017fc,apuStack_30);
  if ((undefined **)piStack_20 == apuStack_30) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = 0x14;
    ppuVar1 = (undefined **)piStack_20;
    if (piStack_20 == (int *)0x0) goto LAB_717c0dc8;
  }
  (**(code **)((int)*ppuVar1 + iVar2))();
LAB_717c0dc8:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: KULlGcYAJsekkRvxIWtfEXCvJDL
// Entry: 0x717c0edc | Size: 392 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void KULlGcYAJsekkRvxIWtfEXCvJDL(void)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *apuStack_30 [4];
  int *piStack_20;
  int iStack_14;
  
  piStack_20 = (int *)apuStack_30;
  ppuVar1 = apuStack_30;
  iVar2 = 0x14;
  DAT_712016ac = 0x41;
  DAT_712016b4 = 100;
  DAT_712016b8 = 4;
  DAT_712016bc = 1;
  DAT_7120171c = 100;
  DAT_7120170c = 100;
  DAT_71201710 = 100;
  DAT_71201704 = 100;
  DAT_71201738 = 0x14;
  DAT_712016b0 = 0x32;
  DAT_712016c0 = 1;
  DAT_712016c4 = 1;
  DAT_71201740 = 1;
  DAT_7120173c = 0x1e;
  DAT_71201714 = 0x2d;
  DAT_712016f4 = 1;
  DAT_712016f8 = 1;
  DAT_712016fc = 0;
  DAT_712016cc = 0;
  iStack_14 = _ext___stack_chk_guard;
  DAT_71201734 = 0;
  DAT_7120172c = 0x32;
  DAT_71201730 = 0;
  DAT_71201728 = 0;
  apuStack_30[0] = &DAT_70b0f5cc;
  FUN_717ccb10(DAT_712017fc,apuStack_30);
  if ((undefined **)piStack_20 == apuStack_30) {
    iVar2 = 0x10;
  }
  else {
    ppuVar1 = (undefined **)piStack_20;
    if (piStack_20 == (int *)0x0) goto LAB_717c0fd8;
  }
  (**(code **)((int)*ppuVar1 + iVar2))();
LAB_717c0fd8:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: QMYhSKkMXhz_mcKwoTJibZzwo
// Entry: 0x717c10ec | Size: 312 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void QMYhSKkMXhz_mcKwoTJibZzwo(void)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *apuStack_30 [4];
  int *piStack_20;
  int iStack_14;
  
  piStack_20 = (int *)apuStack_30;
  ppuVar1 = apuStack_30;
  DAT_712016dc = 0x1e;
  DAT_712016f0 = 100;
  DAT_71201708 = 100;
  DAT_712016d0 = 0x41;
  DAT_712016d4 = 1;
  DAT_712016d8 = 100;
  iStack_14 = _ext___stack_chk_guard;
  apuStack_30[0] = &DAT_70b0f5f0;
  FUN_717ccb10(DAT_712017fc,apuStack_30);
  if ((undefined **)piStack_20 == apuStack_30) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = 0x14;
    ppuVar1 = (undefined **)piStack_20;
    if (piStack_20 == (int *)0x0) goto LAB_717c1198;
  }
  (**(code **)((int)*ppuVar1 + iVar2))();
LAB_717c1198:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: zGuZMeJNvPQjdtXENhrGK
// Entry: 0x717c12ac | Size: 340 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void zGuZMeJNvPQjdtXENhrGK(int param_1,undefined4 param_2)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *apuStack_38 [4];
  int *piStack_28;
  int iStack_1c;
  
  ppuVar1 = apuStack_38;
  iStack_1c = _ext___stack_chk_guard;
  if (param_1 < 0x3f) {
    cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
    QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
    (&DAT_71201668)[param_1] = param_2;
    apuStack_38[0] = &DAT_70b0f614;
    piStack_28 = (int *)apuStack_38;
    FUN_717ccb10(DAT_712017fc,apuStack_38);
    if ((undefined **)piStack_28 == apuStack_38) {
      iVar2 = 0x10;
    }
    else {
      iVar2 = 0x14;
      ppuVar1 = (undefined **)piStack_28;
      if (piStack_28 == (int *)0x0) goto LAB_717c135c;
    }
    (**(code **)((int)*ppuVar1 + iVar2))();
  }
LAB_717c135c:
  if (_ext___stack_chk_guard == iStack_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: PIZIctfL_SafRNYIcmIUpm
// Entry: 0x717c14a8 | Size: 340 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PIZIctfL_SafRNYIcmIUpm(int param_1,undefined4 param_2)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *apuStack_38 [4];
  int *piStack_28;
  int iStack_1c;
  
  ppuVar1 = apuStack_38;
  iStack_1c = _ext___stack_chk_guard;
  if (param_1 < 0x3f) {
    cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
    QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
    (&DAT_71201668)[param_1] = param_2;
    apuStack_38[0] = &DAT_70b0f638;
    piStack_28 = (int *)apuStack_38;
    FUN_717ccb10(DAT_712017fc,apuStack_38);
    if ((undefined **)piStack_28 == apuStack_38) {
      iVar2 = 0x10;
    }
    else {
      iVar2 = 0x14;
      ppuVar1 = (undefined **)piStack_28;
      if (piStack_28 == (int *)0x0) goto LAB_717c1558;
    }
    (**(code **)((int)*ppuVar1 + iVar2))();
  }
LAB_717c1558:
  if (_ext___stack_chk_guard == iStack_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: syaVFGbIvZpSUpeBaTtembSRflH
// Entry: 0x717c16a4 | Size: 304 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void syaVFGbIvZpSUpeBaTtembSRflH(uint param_1)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *apuStack_30 [4];
  int *piStack_20;
  int iStack_14;
  
  ppuVar1 = apuStack_30;
  iStack_14 = _ext___stack_chk_guard;
  DataMemoryBarrier(0xb);
  if ((DAT_71201790 & 1) != param_1) {
    DataMemoryBarrier(0xb);
    DAT_71201790 = (byte)param_1;
    DataMemoryBarrier(0xb);
    apuStack_30[0] = &DAT_70b0f65c;
    piStack_20 = (int *)apuStack_30;
    FUN_717ccb10(DAT_712017fc,apuStack_30);
    if ((undefined **)piStack_20 == apuStack_30) {
      iVar2 = 0x10;
    }
    else {
      iVar2 = 0x14;
      ppuVar1 = (undefined **)piStack_20;
      if (piStack_20 == (int *)0x0) goto LAB_717c1748;
    }
    (**(code **)((int)*ppuVar1 + iVar2))();
  }
LAB_717c1748:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: taJGSrmrhWCBqnabjbASEscLhu
// Entry: 0x717c185c | Size: 384 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void taJGSrmrhWCBqnabjbASEscLhu(uint param_1)

{
  int iVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  undefined *apuStack_30 [4];
  int *piStack_20;
  int iStack_14;
  
  ppuVar2 = apuStack_30;
  iStack_14 = _ext___stack_chk_guard;
  param_1 = param_1 & ~((int)param_1 >> 0x1f);
  iVar1 = 100 - param_1;
  if (100 < param_1) {
    iVar1 = 0;
  }
  uVar3 = FUN_71ba1b94(iVar1);
  DAT_700fb000 = FUN_71ba13e0(uVar3,0x42c80000);
  DataMemoryBarrier(0xb);
  DataMemoryBarrier(0xb);
  DataMemoryBarrier(0xb);
  if ((DAT_71201790 & 1) != 0) {
    apuStack_30[0] = &DAT_70b0f680;
    piStack_20 = (int *)apuStack_30;
    FUN_717ccb10(DAT_712017fc,apuStack_30);
    if ((undefined **)piStack_20 == apuStack_30) {
      iVar1 = 0x10;
    }
    else {
      iVar1 = 0x14;
      ppuVar2 = (undefined **)piStack_20;
      if (piStack_20 == (int *)0x0) goto LAB_717c1928;
    }
    (**(code **)((int)*ppuVar2 + iVar1))();
  }
LAB_717c1928:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: HvOUvRQJkdAbWeTzqipVtzIQIQHEAexOX
// Entry: 0x717c1a94 | Size: 304 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void HvOUvRQJkdAbWeTzqipVtzIQIQHEAexOX(uint param_1)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *apuStack_30 [4];
  int *piStack_20;
  int iStack_14;
  
  ppuVar1 = apuStack_30;
  iStack_14 = _ext___stack_chk_guard;
  DataMemoryBarrier(0xb);
  if ((DAT_71201791 & 1) != param_1) {
    DataMemoryBarrier(0xb);
    DAT_71201791 = (byte)param_1;
    DataMemoryBarrier(0xb);
    apuStack_30[0] = &DAT_70b0f6a4;
    piStack_20 = (int *)apuStack_30;
    FUN_717ccb10(DAT_712017fc,apuStack_30);
    if ((undefined **)piStack_20 == apuStack_30) {
      iVar2 = 0x10;
    }
    else {
      iVar2 = 0x14;
      ppuVar1 = (undefined **)piStack_20;
      if (piStack_20 == (int *)0x0) goto LAB_717c1b38;
    }
    (**(code **)((int)*ppuVar1 + iVar2))();
  }
LAB_717c1b38:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: DyyCqIwLEqEvhntkvaUYszj_Z_B
// Entry: 0x717c1c4c | Size: 384 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void DyyCqIwLEqEvhntkvaUYszj_Z_B(uint param_1)

{
  int iVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  undefined *apuStack_30 [4];
  int *piStack_20;
  int iStack_14;
  
  ppuVar2 = apuStack_30;
  iStack_14 = _ext___stack_chk_guard;
  param_1 = param_1 & ~((int)param_1 >> 0x1f);
  iVar1 = 100 - param_1;
  if (100 < param_1) {
    iVar1 = 0;
  }
  uVar3 = FUN_71ba1b94(iVar1);
  DAT_700fb004 = FUN_71ba13e0(uVar3,0x42c80000);
  DataMemoryBarrier(0xb);
  DataMemoryBarrier(0xb);
  DataMemoryBarrier(0xb);
  if ((DAT_71201791 & 1) != 0) {
    apuStack_30[0] = &DAT_70b0f6c8;
    piStack_20 = (int *)apuStack_30;
    FUN_717ccb10(DAT_712017fc,apuStack_30);
    if ((undefined **)piStack_20 == apuStack_30) {
      iVar1 = 0x10;
    }
    else {
      iVar1 = 0x14;
      ppuVar2 = (undefined **)piStack_20;
      if (piStack_20 == (int *)0x0) goto LAB_717c1d18;
    }
    (**(code **)((int)*ppuVar2 + iVar1))();
  }
LAB_717c1d18:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: aUpmeYOzUrbOgKKXJkdyM
// Entry: 0x717c1e84 | Size: 104 bytes
// =========================================================================

undefined4 aUpmeYOzUrbOgKKXJkdyM(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 < 0x3f) {
    cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
    QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
    uVar1 = (&DAT_71201668)[param_1];
  }
  return uVar1;
}


// =========================================================================
// Function: EXNcaskiFgdsZNyCSDZZQb
// Entry: 0x717c1f34 | Size: 112 bytes
// =========================================================================

undefined4 EXNcaskiFgdsZNyCSDZZQb(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 < 0x3f) {
    cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
    QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
    uVar1 = 0;
    if ((&DAT_71201668)[param_1] != 0) {
      uVar1 = 1;
    }
  }
  return uVar1;
}


// =========================================================================
// Function: LBJPpBPvNDBhSmNMFEPaEoufjoSX
// Entry: 0x717c1fec | Size: 192 bytes
// =========================================================================

undefined4 LBJPpBPvNDBhSmNMFEPaEoufjoSX(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  
  iVar1 = DAT_71201808;
  piVar2 = (int *)FUN_717d1dc8();
  if (piVar2 != (int *)0x0) {
    bVar5 = *(int *)(iVar1 + 0x18) != 0;
    iVar4 = 0;
    if (bVar5) {
      iVar4 = *(int *)(iVar1 + 4);
    }
    if (bVar5 && iVar4 != 0) {
      iVar4 = (**(code **)(*piVar2 + 0x390))(piVar2);
      if (iVar4 == 0) {
        uVar3 = FUN_717dade0(piVar2,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 0x18));
        iVar1 = (**(code **)(*piVar2 + 0x390))(piVar2);
        if (iVar1 == 0) {
          return uVar3;
        }
      }
      (**(code **)(*piVar2 + 0x44))(piVar2);
      return 0x3c;
    }
  }
  return 0x3c;
}


// =========================================================================
// Function: thunk_FUN_714c9824
// Entry: 0x717c2008 | Size: 4 bytes
// =========================================================================

undefined4 thunk_FUN_714c9824(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  
  iVar1 = DAT_71201808;
  piVar2 = (int *)FUN_717d1dc8();
  if (piVar2 != (int *)0x0) {
    bVar5 = *(int *)(iVar1 + 0x18) != 0;
    iVar4 = 0;
    if (bVar5) {
      iVar4 = *(int *)(iVar1 + 4);
    }
    if (bVar5 && iVar4 != 0) {
      iVar4 = (**(code **)(*piVar2 + 0x390))(piVar2);
      if (iVar4 == 0) {
        uVar3 = FUN_717dade0(piVar2,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 0x18));
        iVar1 = (**(code **)(*piVar2 + 0x390))(piVar2);
        if (iVar1 == 0) {
          return uVar3;
        }
      }
      (**(code **)(*piVar2 + 0x44))(piVar2);
      return 0x3c;
    }
  }
  return 0x3c;
}


// =========================================================================
// Function: FUN_717c2074
// Entry: 0x717c2074 | Size: 316 bytes
// =========================================================================

int FUN_717c2074(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = DAT_700fb004;
  iVar3 = *(int *)(param_1 + param_2 * 4 + 4);
  DataMemoryBarrier(0xb);
  uVar4 = 0x3f800000;
  if ((DAT_71201790 & 1) != 0) {
    DataMemoryBarrier(0xb);
    uVar4 = DAT_700fb000;
  }
  DataMemoryBarrier(0xb);
  if ((DAT_71201791 & 1) != 0) {
    iVar1 = FUN_71ba2d70(uVar4,DAT_700fb004);
    DataMemoryBarrier(0xb);
    if (iVar1 != 0) {
      uVar4 = uVar2;
    }
  }
  iVar1 = FUN_71ba2d50(uVar4,0x3f800000);
  if (iVar1 == 0) {
    uVar2 = FUN_71ba1b94(iVar3);
    FUN_71ba21e8(uVar4,uVar2);
    iVar1 = imp_lroundf();
    if (iVar1 < 0x10) {
      iVar1 = 0xf;
    }
    if (iVar3 <= iVar1) {
      iVar1 = iVar3;
    }
    return iVar1;
  }
  return iVar3;
}


// =========================================================================
// Function: FUN_717c2258
// Entry: 0x717c2258 | Size: 3628 bytes
// =========================================================================

void FUN_717c2258(byte *param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  bool bVar12;
  
  DataMemoryBarrier(0xb);
  if (((DAT_71201784 & 1) == 0) && (iVar9 = cuKsjVZRyspaVsDnqLy(&DAT_71201784), iVar9 != 0)) {
    DAT_71201768 = *(undefined4 *)(DAT_70b46c28 + 0x30);
    DAT_7120176c = *(undefined4 *)(DAT_70b46c28 + 0x6c);
    DAT_71201770 = *(undefined4 *)(DAT_70b46c28 + 0xa8);
    DAT_71201774 = *(undefined4 *)(DAT_70b46c28 + 0xe4);
    DAT_71201778 = *(undefined4 *)(DAT_70b46c28 + 0x120);
    DAT_7120177c = *(undefined4 *)(DAT_70b46c28 + 0x15c);
    DAT_71201780 = *(undefined4 *)(DAT_70b46c28 + 0x198);
    SixizuLbAnqfgRApsCY(&DAT_71201784);
  }
  DataMemoryBarrier(0xb);
  if (((DAT_7120178c & 1) == 0) && (iVar9 = cuKsjVZRyspaVsDnqLy(&DAT_7120178c), iVar9 != 0)) {
    DAT_71201788 = *DAT_70b46c2c;
    SixizuLbAnqfgRApsCY(&DAT_7120178c);
  }
  iVar9 = DAT_70c38f30;
  *(undefined4 *)(DAT_70c38f30 + 200) = 1;
  param_1[0xa8] = 100;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 100;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  DataMemoryBarrier(0xb);
  if ((*param_1 & 1) == 0) {
    return;
  }
  uVar2 = FUN_71ba1e0c(*(undefined4 *)(param_1 + 0xd8));
  uVar2 = FUN_71ba13e0(uVar2,0x42c80000);
  iVar6 = 20000;
  puVar7 = (undefined4 *)(DAT_711a3938 + 0x10);
  piVar10 = DAT_70c39074;
  do {
    iVar11 = *piVar10;
    if ((iVar11 != 0) && ((*(byte *)(iVar11 + 0x29) & 0x78) == 8)) {
      uVar8 = *puVar7;
      iVar3 = FUN_71ba2cf0(uVar8,0);
      if (iVar3 != 0) {
        uVar8 = *(undefined4 *)(iVar11 + 0x30);
        iVar3 = FUN_71ba2d30(uVar8,0x3dcccccd);
        if (iVar3 != 0) goto LAB_717c232c;
        *puVar7 = uVar8;
      }
      uVar8 = FUN_71ba21e8(uVar2,uVar8);
      *(undefined4 *)(iVar11 + 0x30) = uVar8;
    }
LAB_717c232c:
    piVar10 = piVar10 + 1;
    iVar6 = iVar6 + -1;
    puVar7 = puVar7 + 1;
    if (iVar6 == 0) {
      cfqspBX_JrdDvACwYrAyrngjQ();
      uVar2 = FUN_71ba21e8(DAT_71201788,0x41200000);
      uVar2 = FUN_71ba13e0(uVar2,0x42c80000);
      uVar8 = FUN_71ba1b94(*(undefined4 *)(param_1 + 4));
      uVar2 = FUN_71ba21e8(uVar2,uVar8);
      *DAT_70b46c2c = uVar2;
      uVar2 = FUN_71ba21e8(DAT_71201768,0x41200000);
      uVar2 = FUN_71ba13e0(uVar2,0x42c80000);
      uVar8 = FUN_71ba1b94(*(undefined4 *)(param_1 + 4));
      uVar2 = FUN_71ba21e8(uVar2,uVar8);
      iVar6 = DAT_70b46c28;
      *(undefined4 *)(DAT_70b46c28 + 0x30) = uVar2;
      uVar2 = FUN_71ba21e8(DAT_7120176c,0x41200000);
      uVar2 = FUN_71ba13e0(uVar2,0x42c80000);
      uVar8 = FUN_71ba1b94(*(undefined4 *)(param_1 + 4));
      uVar2 = FUN_71ba21e8(uVar2,uVar8);
      *(undefined4 *)(iVar6 + 0x6c) = uVar2;
      uVar2 = FUN_71ba21e8(DAT_71201770,0x41200000);
      uVar2 = FUN_71ba13e0(uVar2,0x42c80000);
      uVar8 = FUN_71ba1b94(*(undefined4 *)(param_1 + 4));
      uVar2 = FUN_71ba21e8(uVar2,uVar8);
      *(undefined4 *)(iVar6 + 0xa8) = uVar2;
      uVar2 = FUN_71ba21e8(DAT_71201774,0x41200000);
      uVar2 = FUN_71ba13e0(uVar2,0x42c80000);
      uVar8 = FUN_71ba1b94(*(undefined4 *)(param_1 + 4));
      uVar2 = FUN_71ba21e8(uVar2,uVar8);
      *(undefined4 *)(iVar6 + 0xe4) = uVar2;
      uVar2 = FUN_71ba21e8(DAT_71201778,0x41200000);
      uVar2 = FUN_71ba13e0(uVar2,0x42c80000);
      uVar8 = FUN_71ba1b94(*(undefined4 *)(param_1 + 4));
      uVar2 = FUN_71ba21e8(uVar2,uVar8);
      *(undefined4 *)(iVar6 + 0x120) = uVar2;
      uVar2 = FUN_71ba21e8(DAT_7120177c,0x41200000);
      uVar2 = FUN_71ba13e0(uVar2,0x42c80000);
      uVar8 = FUN_71ba1b94(*(undefined4 *)(param_1 + 4));
      uVar2 = FUN_71ba21e8(uVar2,uVar8);
      *(undefined4 *)(iVar6 + 0x15c) = uVar2;
      uVar2 = FUN_71ba21e8(DAT_71201780,0x41200000);
      uVar2 = FUN_71ba13e0(uVar2,0x42c80000);
      uVar8 = FUN_71ba1b94(*(undefined4 *)(param_1 + 4));
      uVar2 = FUN_71ba21e8(uVar2,uVar8);
      *(undefined4 *)(iVar6 + 0x198) = uVar2;
      if (*(int *)(iVar9 + 0x128) != *(int *)(param_1 + 0x1c)) {
        *(int *)(iVar9 + 0x128) = *(int *)(param_1 + 0x1c);
        FUN_713f36e8();
      }
      uVar1 = 0;
      if (*(uint *)(param_1 + 0x54) < 5) {
        uVar1 = (&DAT_70085602)[*(uint *)(param_1 + 0x54)];
      }
      FUN_714b0290(uVar1);
      FUN_71658660(*(int *)(param_1 + 0x80) != 0);
      FUN_717b7e30(*(int *)(param_1 + 0x80) != 0);
      FUN_717b7e78(*(int *)(param_1 + 0x84) != 0);
      FUN_717b7ec0(*(int *)(param_1 + 0x88) != 0);
      *(undefined4 *)(iVar9 + 0x68) = *(undefined4 *)(param_1 + 0x20);
      uVar2 = DAT_700fb004;
      iVar6 = *(int *)(param_1 + 0x6c);
      DataMemoryBarrier(0xb);
      uVar8 = 0x3f800000;
      if ((DAT_71201790 & 1) != 0) {
        DataMemoryBarrier(0xb);
        uVar8 = DAT_700fb000;
      }
      DataMemoryBarrier(0xb);
      if ((DAT_71201791 & 1) != 0) {
        iVar11 = FUN_71ba2d70(uVar8,DAT_700fb004);
        DataMemoryBarrier(0xb);
        if (iVar11 != 0) {
          uVar8 = uVar2;
        }
      }
      iVar3 = FUN_71ba2d50(uVar8,0x3f800000);
      iVar11 = iVar6;
      if (iVar3 == 0) {
        uVar2 = FUN_71ba1b94(iVar6);
        FUN_71ba21e8(uVar8,uVar2);
        iVar11 = imp_lroundf();
        if (iVar11 < 0x10) {
          iVar11 = 0xf;
        }
        if (iVar6 <= iVar11) {
          iVar11 = iVar6;
        }
      }
      *(int *)(iVar9 + 0x168) = iVar11;
      uVar2 = DAT_700fb004;
      piVar10 = *(int **)(param_1 + 0x6c);
      DataMemoryBarrier(0xb);
      uVar8 = 0x3f800000;
      if ((DAT_71201790 & 1) != 0) {
        DataMemoryBarrier(0xb);
        uVar8 = DAT_700fb000;
      }
      DataMemoryBarrier(0xb);
      if ((DAT_71201791 & 1) != 0) {
        iVar6 = FUN_71ba2d70(uVar8,DAT_700fb004);
        DataMemoryBarrier(0xb);
        if (iVar6 != 0) {
          uVar8 = uVar2;
        }
      }
      iVar6 = FUN_71ba2d50(uVar8,0x3f800000);
      piVar4 = piVar10;
      if (iVar6 == 0) {
        uVar2 = FUN_71ba1b94(piVar10);
        FUN_71ba21e8(uVar8,uVar2);
        piVar4 = (int *)imp_lroundf();
        if ((int)piVar4 < 0x10) {
          piVar4 = (int *)&DAT_0000000f;
        }
        if ((int)piVar10 <= (int)piVar4) {
          piVar4 = piVar10;
        }
      }
      *(int **)(iVar9 + 0x188) = piVar4;
      *(undefined4 *)(iVar9 + 0x1a8) = 0;
      FUN_713f1c1c();
      *(undefined4 *)(iVar9 + 0x1e8) = *(undefined4 *)(param_1 + 0x24);
      *(undefined4 *)(iVar9 + 0x148) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(iVar9 + 0x248) = *(undefined4 *)(param_1 + 0x2c);
      uVar2 = FUN_71ba1b94(*(undefined4 *)(param_1 + 0x30));
      uVar2 = FUN_71ba21e8(uVar2,0x3e800000);
      FUN_71ba0b38(uVar2,0x41a00000);
      uVar2 = FUN_71ba17bc();
      *(undefined4 *)(iVar9 + 0x2e8) = uVar2;
      *(undefined4 *)(iVar9 + 0x28) = *(undefined4 *)(param_1 + 0x48);
      *(undefined4 *)(iVar9 + 0x208) = *(undefined4 *)(param_1 + 200);
      *(undefined4 *)(iVar9 + 0x48) = *(undefined4 *)(param_1 + 0xd4);
      iVar6 = *(int *)(param_1 + 0x58);
      if (iVar6 < 3) {
        iVar6 = iVar6 + 1;
      }
      *(int *)(iVar9 + 8) = iVar6;
      *(undefined4 *)(iVar9 + 0xe8) = *(undefined4 *)(param_1 + 0x5c);
      *(undefined4 *)(iVar9 + 0xa8) = *(undefined4 *)(param_1 + 0x60);
      iVar6 = FUN_714c9824();
      if (*(int *)(param_1 + 0xb0) < iVar6) {
        iVar6 = *(int *)(param_1 + 0xb0);
      }
      FUN_7156a20c(iVar6);
      if (*(int *)(param_1 + 0xa0) < 0x3c) {
        param_1[0xa0] = 100;
        param_1[0xa1] = 0;
        param_1[0xa2] = 0;
        param_1[0xa3] = 0;
      }
      DAT_700c807c = FUN_71ba1b94();
      if (DAT_711f6d58 != 0) {
        piVar10 = *(int **)(DAT_711f6d58 + 4);
      }
      if (DAT_711f6d58 != 0 && piVar10 != (int *)0x0) {
        iVar6 = -0x7d1;
        piVar4 = piVar10;
        do {
          uVar2 = DAT_700fb004;
          bVar12 = *(char *)((int)piVar10 + iVar6 + 0x4659) != '\0';
          if (bVar12) {
            iVar9 = *piVar4;
          }
          if (bVar12 && iVar9 != 0) {
            iVar11 = *(int *)(param_1 + 0x8c);
            DataMemoryBarrier(0xb);
            uVar8 = 0x3f800000;
            if ((DAT_71201790 & 1) != 0) {
              DataMemoryBarrier(0xb);
              uVar8 = DAT_700fb000;
            }
            DataMemoryBarrier(0xb);
            if ((DAT_71201791 & 1) != 0) {
              iVar3 = FUN_71ba2d70(uVar8,DAT_700fb004);
              if (iVar3 != 0) {
                uVar8 = uVar2;
              }
              DataMemoryBarrier(0xb);
            }
            iVar5 = FUN_71ba2d50(uVar8,0x3f800000);
            iVar3 = iVar11;
            if (iVar5 == 0) {
              uVar2 = FUN_71ba1b94(iVar11);
              FUN_71ba21e8(uVar8,uVar2);
              iVar3 = imp_lroundf();
              if (iVar3 < 0x10) {
                iVar3 = 0xf;
              }
              if (iVar11 <= iVar3) {
                iVar3 = iVar11;
              }
            }
            uVar2 = FUN_71ba1b94(iVar3);
            uVar2 = FUN_71ba13e0(uVar2,0x42c80000);
            FUN_715f5da8(iVar9,uVar2);
          }
          piVar4 = piVar4 + 1;
          bVar12 = iVar6 != -1;
          iVar6 = iVar6 + 1;
        } while (bVar12);
      }
      thunk_QgduklVhdVlmSiqzGQeutncbrNj(param_1 + 0x100);
      return;
    }
  } while( true );
}


// =========================================================================
// Function: FUN_717c38b8
// Entry: 0x717c38b8 | Size: 4 bytes
// =========================================================================

void FUN_717c38b8(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x717c38d4 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x717c38f0 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_717c3a68
// Entry: 0x717c3a68 | Size: 4 bytes
// =========================================================================

void FUN_717c3a68(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x717c3a84 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x717c3aa0 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_717c3c18
// Entry: 0x717c3c18 | Size: 4 bytes
// =========================================================================

void FUN_717c3c18(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x717c3c34 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x717c3c50 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_717c3dc8
// Entry: 0x717c3dc8 | Size: 4 bytes
// =========================================================================

void FUN_717c3dc8(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x717c3de4 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x717c3e00 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_717c3f78
// Entry: 0x717c3f78 | Size: 4 bytes
// =========================================================================

void FUN_717c3f78(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x717c3f94 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x717c3fb0 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_717c4128
// Entry: 0x717c4128 | Size: 4 bytes
// =========================================================================

void FUN_717c4128(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x717c4144 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x717c4160 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_717c42d8
// Entry: 0x717c42d8 | Size: 4 bytes
// =========================================================================

void FUN_717c42d8(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x717c42f4 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x717c4310 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_717c4488
// Entry: 0x717c4488 | Size: 4 bytes
// =========================================================================

void FUN_717c4488(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x717c44a4 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x717c44c0 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_717c4638
// Entry: 0x717c4638 | Size: 4 bytes
// =========================================================================

void FUN_717c4638(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x717c4654 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x717c4670 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_717c47e8
// Entry: 0x717c47e8 | Size: 4 bytes
// =========================================================================

void FUN_717c47e8(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x717c4804 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x717c4820 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_717c4998
// Entry: 0x717c4998 | Size: 4 bytes
// =========================================================================

void FUN_717c4998(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x717c49b4 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


