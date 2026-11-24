// =========================================================================
// Function: MwhHq
// Entry: 0x10aa9dc0 | Size: 68 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MwhHq(uint param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int extraout_r3;
  
  if (param_1 < 2) {
    param_1 = 1;
  }
  while( true ) {
    iVar1 = FUN_10aa9f40(param_1);
    if (iVar1 != 0) {
      return;
    }
    pcVar2 = (code *)FUN_10aacdf0();
    if (pcVar2 == (code *)0x0) break;
    (*pcVar2)();
  }
  FUN_10aac1d0(4);
  uVar3 = FUN_10aace30();
  uVar3 = FUN_10aac1e0(uVar3,_DAT_11441b70,_DAT_11441b68);
  FUN_10aa9f90(uVar3,extraout_r3 << 2);
  return;
}


// =========================================================================
// Function: _IBDl
// Entry: 0x10aa9e04 | Size: 4 bytes
// =========================================================================

void _IBDl(void)

{
  FUN_10aa9f90();
  return;
}


// =========================================================================
// Function: PwfcKDoUS_LJxpFOzYHp
// Entry: 0x10aa9e08 | Size: 120 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PwfcKDoUS_LJxpFOzYHp(uint param_1,uint param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_r3;
  int iStack_1c;
  
  iStack_1c = 0;
  if (param_2 < 5) {
    param_2 = 4;
  }
  if (param_1 < 2) {
    param_1 = 1;
  }
  FUN_10aacc60(&iStack_1c,param_2,param_1);
  if (iStack_1c == 0) {
    do {
      pcVar1 = (code *)FUN_10aacdf0();
      if (pcVar1 == (code *)0x0) {
        FUN_10aac1d0(4);
        uVar2 = FUN_10aace30();
        iVar3 = FUN_10aac1e0(uVar2,_DAT_11441b70,_DAT_11441b68);
        FUN_10aacf30(*(undefined1 *)(iVar3 + 0x14),extraout_r3 << 2);
        return;
      }
      (*pcVar1)();
      iStack_1c = 0;
      FUN_10aacc60(&iStack_1c,param_2,param_1);
    } while (iStack_1c == 0);
  }
  return;
}


// =========================================================================
// Function: vplZlxryyKE_VTBqtNdX
// Entry: 0x10aa9e80 | Size: 4 bytes
// =========================================================================

void vplZlxryyKE_VTBqtNdX(void)

{
  FUN_10aacf30();
  return;
}


// =========================================================================
// Function: thunk_FUN_10aa9f90
// Entry: 0x10aa9e84 | Size: 12 bytes
// =========================================================================

void thunk_FUN_10aa9f90(void)

{
  FUN_10aa9f90();
  return;
}


// =========================================================================
// Function: thunk_FUN_10aacf30
// Entry: 0x10aa9e90 | Size: 12 bytes
// =========================================================================

void thunk_FUN_10aacf30(void)

{
  FUN_10aacf30();
  return;
}


// =========================================================================
// Function: FUN_10aa9ef0
// Entry: 0x10aa9ef0 | Size: 4 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void FUN_10aa9ef0(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 unaff_r6;
  int unaff_lr;
  bool in_ZR;
  bool in_CY;
  
  if (in_CY && !in_ZR) {
    *(undefined4 *)(unaff_lr + (param_3 >> 0x11)) = unaff_r6;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: FUN_10aa9f40
// Entry: 0x10aa9f40 | Size: 4 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void FUN_10aa9f40(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 unaff_r6;
  int unaff_lr;
  bool in_ZR;
  bool in_CY;
  
  if (in_CY && !in_ZR) {
    *(undefined4 *)(unaff_lr + (param_3 >> 0x11)) = unaff_r6;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: FUN_10aa9f90
// Entry: 0x10aa9f90 | Size: 4 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void FUN_10aa9f90(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 unaff_r6;
  int unaff_lr;
  bool in_ZR;
  bool in_CY;
  
  if (in_CY && !in_ZR) {
    *(undefined4 *)(unaff_lr + (param_3 >> 0x11)) = unaff_r6;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: FUN_10aac1d0
// Entry: 0x10aac1d0 | Size: 16 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void FUN_10aac1d0(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 unaff_r6;
  undefined4 *unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  param_3 = param_3 >> 0x11;
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15ef36);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15ef96);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15ef76);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15efdb);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15efbb);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15ef1c);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15effc);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15ef5c);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15ef39);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15ef99);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15ef79);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15efda);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15efba);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15e717);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15e7f7);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15e757);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15e738);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15e798);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15e778);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15e7d5);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15e7b5);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15e716);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15e7f6);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15e756);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15e73b);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15e79b);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15e77b);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15e7dc);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15e7bc);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15e719);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15e7f9);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15e759);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15e73a);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15e79a);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15e77a);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15dfd7);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15dfb7);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15df18);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15dff8);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15df58);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15df35);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15df95);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15df75);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15dfd6);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15dfb6);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15df1b);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15dffb);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15df5b);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15df3c);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15df9c);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15df7c);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15dfd9);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15dfb9);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15df1a);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15dffa);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15df5a);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15d737);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15d797);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15d777);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15d7d8);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15d7b8);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15d715);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15d7f5);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15d755);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15d736);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15d796);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15d776);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15d7db);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15d7bb);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15d71c);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15d7fc);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15d75c);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15d739);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15d799);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15d779);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15d7da);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15d7ba);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x150f17);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x150ff7);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x150f57);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x150f38);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x150f98);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x150f78);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x150fd5);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x150fb5);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x150f16);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x150ff6);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x150f56);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x150f3b);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x150f9b);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x150f7b);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x150fdc);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x150fbc);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x150f19);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x150ff9);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x150f59);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x150f3a);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x150f9a);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x150f7a);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x1507d7);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x1507b7);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x150718);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x1507f8);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x150758);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x150735);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x150795);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x150775);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x1507d6);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x1507b6);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15071b);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x1507fb);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15075b);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15073c);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15079c);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15077c);
  }
  if (!in_ZR && in_NG == (bool)in_OV) {
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x1507d9);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x1507b9);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15071a);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x1507fa);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15075a);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15ff37);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15ff97);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15ff77);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15ffd8);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15ffb8);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15ff15);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15fff5);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15ff55);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15ff36);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15ff96);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15ff76);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15ffdb);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15ffbb);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15ff1c);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15fffc);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15ff5c);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15ff39);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15ff99);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15ff79);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15ffda);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15ffba);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15f717);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15f7f7);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15f757);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15f738);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15f798);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15f778);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15f7d5);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15f7b5);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15f716);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15f7f6);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15f756);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15f73b);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15f79b);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15f77b);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15f7dc);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15f7bc);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15f719);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15f7f9);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15f759);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15f73a);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15f79a);
    }
    if (!in_ZR && in_NG == (bool)in_OV) {
      if (in_CY && !in_ZR) {
        unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
        *unaff_lr = unaff_r6;
      }
      if (!in_NG) {
        software_interrupt(0x15f77a);
      }
      if (!in_ZR && in_NG == (bool)in_OV) {
        if (in_CY && !in_ZR) {
          *(undefined4 *)((int)unaff_lr + param_3) = unaff_r6;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return;
    }
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_10aac1e0
// Entry: 0x10aac1e0 | Size: 2596 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void FUN_10aac1e0(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 unaff_r6;
  undefined4 *unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  param_3 = param_3 >> 0x11;
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15ef96);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15ef76);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15efdb);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15efbb);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15ef1c);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15effc);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15ef5c);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15ef39);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15ef99);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15ef79);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15efda);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15efba);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15e717);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15e7f7);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15e757);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15e738);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15e798);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15e778);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15e7d5);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15e7b5);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15e716);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15e7f6);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15e756);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15e73b);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15e79b);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15e77b);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15e7dc);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15e7bc);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15e719);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15e7f9);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15e759);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15e73a);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15e79a);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15e77a);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15dfd7);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15dfb7);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15df18);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15dff8);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15df58);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15df35);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15df95);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15df75);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15dfd6);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15dfb6);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15df1b);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
    *unaff_lr = unaff_r6;
  }
  if (!in_NG) {
    software_interrupt(0x15dffb);
  }
  if (!in_ZR && in_NG == (bool)in_OV) {
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15df5b);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15df3c);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15df9c);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15df7c);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15dfd9);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15dfb9);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15df1a);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15dffa);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15df5a);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15d737);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15d797);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15d777);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15d7d8);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15d7b8);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15d715);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15d7f5);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15d755);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15d736);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15d796);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15d776);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15d7db);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15d7bb);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15d71c);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15d7fc);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15d75c);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15d739);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15d799);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15d779);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15d7da);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x15d7ba);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x150f17);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x150ff7);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x150f57);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x150f38);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x150f98);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x150f78);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x150fd5);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x150fb5);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x150f16);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x150ff6);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x150f56);
    }
    if (in_ZR || in_NG != (bool)in_OV) {
      return;
    }
    if (in_CY && !in_ZR) {
      unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
      *unaff_lr = unaff_r6;
    }
    if (!in_NG) {
      software_interrupt(0x150f3b);
    }
    if (!in_ZR && in_NG == (bool)in_OV) {
      if (in_CY && !in_ZR) {
        unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
        *unaff_lr = unaff_r6;
      }
      if (!in_NG) {
        software_interrupt(0x150f9b);
      }
      if (in_ZR || in_NG != (bool)in_OV) {
        return;
      }
      if (in_CY && !in_ZR) {
        unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
        *unaff_lr = unaff_r6;
      }
      if (!in_NG) {
        software_interrupt(0x150f7b);
      }
      if (in_ZR || in_NG != (bool)in_OV) {
        return;
      }
      if (in_CY && !in_ZR) {
        unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
        *unaff_lr = unaff_r6;
      }
      if (!in_NG) {
        software_interrupt(0x150fdc);
      }
      if (in_ZR || in_NG != (bool)in_OV) {
        return;
      }
      if (in_CY && !in_ZR) {
        unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
        *unaff_lr = unaff_r6;
      }
      if (!in_NG) {
        software_interrupt(0x150fbc);
      }
      if (in_ZR || in_NG != (bool)in_OV) {
        return;
      }
      if (in_CY && !in_ZR) {
        unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
        *unaff_lr = unaff_r6;
      }
      if (!in_NG) {
        software_interrupt(0x150f19);
      }
      if (in_ZR || in_NG != (bool)in_OV) {
        return;
      }
      if (in_CY && !in_ZR) {
        unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
        *unaff_lr = unaff_r6;
      }
      if (!in_NG) {
        software_interrupt(0x150ff9);
      }
      if (in_ZR || in_NG != (bool)in_OV) {
        return;
      }
      if (in_CY && !in_ZR) {
        unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
        *unaff_lr = unaff_r6;
      }
      if (!in_NG) {
        software_interrupt(0x150f59);
      }
      if (in_ZR || in_NG != (bool)in_OV) {
        return;
      }
      if (in_CY && !in_ZR) {
        unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
        *unaff_lr = unaff_r6;
      }
      if (!in_NG) {
        software_interrupt(0x150f3a);
      }
      if (in_ZR || in_NG != (bool)in_OV) {
        return;
      }
      if (in_CY && !in_ZR) {
        unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
        *unaff_lr = unaff_r6;
      }
      if (!in_NG) {
        software_interrupt(0x150f9a);
      }
      if (in_ZR || in_NG != (bool)in_OV) {
        return;
      }
      if (in_CY && !in_ZR) {
        unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
        *unaff_lr = unaff_r6;
      }
      if (!in_NG) {
        software_interrupt(0x150f7a);
      }
      if (in_ZR || in_NG != (bool)in_OV) {
        return;
      }
      if (in_CY && !in_ZR) {
        unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
        *unaff_lr = unaff_r6;
      }
      if (!in_NG) {
        software_interrupt(0x1507d7);
      }
      if (in_ZR || in_NG != (bool)in_OV) {
        return;
      }
      if (in_CY && !in_ZR) {
        unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
        *unaff_lr = unaff_r6;
      }
      if (!in_NG) {
        software_interrupt(0x1507b7);
      }
      if (in_ZR || in_NG != (bool)in_OV) {
        return;
      }
      if (in_CY && !in_ZR) {
        unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
        *unaff_lr = unaff_r6;
      }
      if (!in_NG) {
        software_interrupt(0x150718);
      }
      if (in_ZR || in_NG != (bool)in_OV) {
        return;
      }
      if (in_CY && !in_ZR) {
        unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
        *unaff_lr = unaff_r6;
      }
      if (!in_NG) {
        software_interrupt(0x1507f8);
      }
      if (in_ZR || in_NG != (bool)in_OV) {
        return;
      }
      if (in_CY && !in_ZR) {
        unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
        *unaff_lr = unaff_r6;
      }
      if (!in_NG) {
        software_interrupt(0x150758);
      }
      if (in_ZR || in_NG != (bool)in_OV) {
        return;
      }
      if (in_CY && !in_ZR) {
        unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
        *unaff_lr = unaff_r6;
      }
      if (!in_NG) {
        software_interrupt(0x150735);
      }
      if (in_ZR || in_NG != (bool)in_OV) {
        return;
      }
      if (in_CY && !in_ZR) {
        unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
        *unaff_lr = unaff_r6;
      }
      if (!in_NG) {
        software_interrupt(0x150795);
      }
      if (in_ZR || in_NG != (bool)in_OV) {
        return;
      }
      if (in_CY && !in_ZR) {
        unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
        *unaff_lr = unaff_r6;
      }
      if (!in_NG) {
        software_interrupt(0x150775);
      }
      if (in_ZR || in_NG != (bool)in_OV) {
        return;
      }
      if (in_CY && !in_ZR) {
        unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
        *unaff_lr = unaff_r6;
      }
      if (!in_NG) {
        software_interrupt(0x1507d6);
      }
      if (in_ZR || in_NG != (bool)in_OV) {
        return;
      }
      if (in_CY && !in_ZR) {
        unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
        *unaff_lr = unaff_r6;
      }
      if (!in_NG) {
        software_interrupt(0x1507b6);
      }
      if (in_ZR || in_NG != (bool)in_OV) {
        return;
      }
      if (in_CY && !in_ZR) {
        unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
        *unaff_lr = unaff_r6;
      }
      if (!in_NG) {
        software_interrupt(0x15071b);
      }
      if (in_ZR || in_NG != (bool)in_OV) {
        return;
      }
      if (in_CY && !in_ZR) {
        unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
        *unaff_lr = unaff_r6;
      }
      if (!in_NG) {
        software_interrupt(0x1507fb);
      }
      if (in_ZR || in_NG != (bool)in_OV) {
        return;
      }
      if (in_CY && !in_ZR) {
        unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
        *unaff_lr = unaff_r6;
      }
      if (!in_NG) {
        software_interrupt(0x15075b);
      }
      if (in_ZR || in_NG != (bool)in_OV) {
        return;
      }
      if (in_CY && !in_ZR) {
        unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
        *unaff_lr = unaff_r6;
      }
      if (!in_NG) {
        software_interrupt(0x15073c);
      }
      if (in_ZR || in_NG != (bool)in_OV) {
        return;
      }
      if (in_CY && !in_ZR) {
        unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
        *unaff_lr = unaff_r6;
      }
      if (!in_NG) {
        software_interrupt(0x15079c);
      }
      if (in_ZR || in_NG != (bool)in_OV) {
        return;
      }
      if (in_CY && !in_ZR) {
        unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
        *unaff_lr = unaff_r6;
      }
      if (!in_NG) {
        software_interrupt(0x15077c);
      }
      if (in_ZR || in_NG != (bool)in_OV) {
        return;
      }
      if (in_CY && !in_ZR) {
        unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
        *unaff_lr = unaff_r6;
      }
      if (!in_NG) {
        software_interrupt(0x1507d9);
      }
      if (in_ZR || in_NG != (bool)in_OV) {
        return;
      }
      if (in_CY && !in_ZR) {
        unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
        *unaff_lr = unaff_r6;
      }
      if (!in_NG) {
        software_interrupt(0x1507b9);
      }
      if (in_ZR || in_NG != (bool)in_OV) {
        return;
      }
      if (in_CY && !in_ZR) {
        unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
        *unaff_lr = unaff_r6;
      }
      if (!in_NG) {
        software_interrupt(0x15071a);
      }
      if (in_ZR || in_NG != (bool)in_OV) {
        return;
      }
      if (in_CY && !in_ZR) {
        unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
        *unaff_lr = unaff_r6;
      }
      if (!in_NG) {
        software_interrupt(0x1507fa);
      }
      if (in_ZR || in_NG != (bool)in_OV) {
        return;
      }
      if (in_CY && !in_ZR) {
        unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
        *unaff_lr = unaff_r6;
      }
      if (!in_NG) {
        software_interrupt(0x15075a);
      }
      if (in_ZR || in_NG != (bool)in_OV) {
        return;
      }
      if (in_CY && !in_ZR) {
        unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
        *unaff_lr = unaff_r6;
      }
      if (!in_NG) {
        software_interrupt(0x15ff37);
      }
      if (in_ZR || in_NG != (bool)in_OV) {
        return;
      }
      if (in_CY && !in_ZR) {
        unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
        *unaff_lr = unaff_r6;
      }
      if (!in_NG) {
        software_interrupt(0x15ff97);
      }
      if (in_ZR || in_NG != (bool)in_OV) {
        return;
      }
      if (in_CY && !in_ZR) {
        unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
        *unaff_lr = unaff_r6;
      }
      if (!in_NG) {
        software_interrupt(0x15ff77);
      }
      if (!in_ZR && in_NG == (bool)in_OV) {
        if (in_CY && !in_ZR) {
          unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
          *unaff_lr = unaff_r6;
        }
        if (!in_NG) {
          software_interrupt(0x15ffd8);
        }
        if (in_ZR || in_NG != (bool)in_OV) {
          return;
        }
        if (in_CY && !in_ZR) {
          unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
          *unaff_lr = unaff_r6;
        }
        if (!in_NG) {
          software_interrupt(0x15ffb8);
        }
        if (in_ZR || in_NG != (bool)in_OV) {
          return;
        }
        if (in_CY && !in_ZR) {
          unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
          *unaff_lr = unaff_r6;
        }
        if (!in_NG) {
          software_interrupt(0x15ff15);
        }
        if (in_ZR || in_NG != (bool)in_OV) {
          return;
        }
        if (in_CY && !in_ZR) {
          unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
          *unaff_lr = unaff_r6;
        }
        if (!in_NG) {
          software_interrupt(0x15fff5);
        }
        if (in_ZR || in_NG != (bool)in_OV) {
          return;
        }
        if (in_CY && !in_ZR) {
          unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
          *unaff_lr = unaff_r6;
        }
        if (!in_NG) {
          software_interrupt(0x15ff55);
        }
        if (in_ZR || in_NG != (bool)in_OV) {
          return;
        }
        if (in_CY && !in_ZR) {
          unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
          *unaff_lr = unaff_r6;
        }
        if (!in_NG) {
          software_interrupt(0x15ff36);
        }
        if (in_ZR || in_NG != (bool)in_OV) {
          return;
        }
        if (in_CY && !in_ZR) {
          unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
          *unaff_lr = unaff_r6;
        }
        if (!in_NG) {
          software_interrupt(0x15ff96);
        }
        if (in_ZR || in_NG != (bool)in_OV) {
          return;
        }
        if (in_CY && !in_ZR) {
          unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
          *unaff_lr = unaff_r6;
        }
        if (!in_NG) {
          software_interrupt(0x15ff76);
        }
        if (in_ZR || in_NG != (bool)in_OV) {
          return;
        }
        if (in_CY && !in_ZR) {
          unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
          *unaff_lr = unaff_r6;
        }
        if (!in_NG) {
          software_interrupt(0x15ffdb);
        }
        if (in_ZR || in_NG != (bool)in_OV) {
          return;
        }
        if (in_CY && !in_ZR) {
          unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
          *unaff_lr = unaff_r6;
        }
        if (!in_NG) {
          software_interrupt(0x15ffbb);
        }
        if (in_ZR || in_NG != (bool)in_OV) {
          return;
        }
        if (in_CY && !in_ZR) {
          unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
          *unaff_lr = unaff_r6;
        }
        if (!in_NG) {
          software_interrupt(0x15ff1c);
        }
        if (in_ZR || in_NG != (bool)in_OV) {
          return;
        }
        if (in_CY && !in_ZR) {
          unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
          *unaff_lr = unaff_r6;
        }
        if (!in_NG) {
          software_interrupt(0x15fffc);
        }
        if (in_ZR || in_NG != (bool)in_OV) {
          return;
        }
        if (in_CY && !in_ZR) {
          unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
          *unaff_lr = unaff_r6;
        }
        if (!in_NG) {
          software_interrupt(0x15ff5c);
        }
        if (in_ZR || in_NG != (bool)in_OV) {
          return;
        }
        if (in_CY && !in_ZR) {
          unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
          *unaff_lr = unaff_r6;
        }
        if (!in_NG) {
          software_interrupt(0x15ff39);
        }
        if (in_ZR || in_NG != (bool)in_OV) {
          return;
        }
        if (in_CY && !in_ZR) {
          unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
          *unaff_lr = unaff_r6;
        }
        if (!in_NG) {
          software_interrupt(0x15ff99);
        }
        if (in_ZR || in_NG != (bool)in_OV) {
          return;
        }
        if (in_CY && !in_ZR) {
          unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
          *unaff_lr = unaff_r6;
        }
        if (!in_NG) {
          software_interrupt(0x15ff79);
        }
        if (!in_ZR && in_NG == (bool)in_OV) {
          if (in_CY && !in_ZR) {
            unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
            *unaff_lr = unaff_r6;
          }
          if (!in_NG) {
            software_interrupt(0x15ffda);
          }
          if (in_ZR || in_NG != (bool)in_OV) {
            return;
          }
          if (in_CY && !in_ZR) {
            unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
            *unaff_lr = unaff_r6;
          }
          if (!in_NG) {
            software_interrupt(0x15ffba);
          }
          if (in_ZR || in_NG != (bool)in_OV) {
            return;
          }
          if (in_CY && !in_ZR) {
            unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
            *unaff_lr = unaff_r6;
          }
          if (!in_NG) {
            software_interrupt(0x15f717);
          }
          if (in_ZR || in_NG != (bool)in_OV) {
            return;
          }
          if (in_CY && !in_ZR) {
            unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
            *unaff_lr = unaff_r6;
          }
          if (!in_NG) {
            software_interrupt(0x15f7f7);
          }
          if (in_ZR || in_NG != (bool)in_OV) {
            return;
          }
          if (in_CY && !in_ZR) {
            unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
            *unaff_lr = unaff_r6;
          }
          if (!in_NG) {
            software_interrupt(0x15f757);
          }
          if (in_ZR || in_NG != (bool)in_OV) {
            return;
          }
          if (in_CY && !in_ZR) {
            unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
            *unaff_lr = unaff_r6;
          }
          if (!in_NG) {
            software_interrupt(0x15f738);
          }
          if (in_ZR || in_NG != (bool)in_OV) {
            return;
          }
          if (in_CY && !in_ZR) {
            unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
            *unaff_lr = unaff_r6;
          }
          if (!in_NG) {
            software_interrupt(0x15f798);
          }
          if (in_ZR || in_NG != (bool)in_OV) {
            return;
          }
          if (in_CY && !in_ZR) {
            unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
            *unaff_lr = unaff_r6;
          }
          if (!in_NG) {
            software_interrupt(0x15f778);
          }
          if (in_ZR || in_NG != (bool)in_OV) {
            return;
          }
          if (in_CY && !in_ZR) {
            unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
            *unaff_lr = unaff_r6;
          }
          if (!in_NG) {
            software_interrupt(0x15f7d5);
          }
          if (in_ZR || in_NG != (bool)in_OV) {
            return;
          }
          if (in_CY && !in_ZR) {
            unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
            *unaff_lr = unaff_r6;
          }
          if (!in_NG) {
            software_interrupt(0x15f7b5);
          }
          if (in_ZR || in_NG != (bool)in_OV) {
            return;
          }
          if (in_CY && !in_ZR) {
            unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
            *unaff_lr = unaff_r6;
          }
          if (!in_NG) {
            software_interrupt(0x15f716);
          }
          if (in_ZR || in_NG != (bool)in_OV) {
            return;
          }
          if (in_CY && !in_ZR) {
            unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
            *unaff_lr = unaff_r6;
          }
          if (!in_NG) {
            software_interrupt(0x15f7f6);
          }
          if (in_ZR || in_NG != (bool)in_OV) {
            return;
          }
          if (in_CY && !in_ZR) {
            unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
            *unaff_lr = unaff_r6;
          }
          if (!in_NG) {
            software_interrupt(0x15f756);
          }
          if (in_ZR || in_NG != (bool)in_OV) {
            return;
          }
          if (in_CY && !in_ZR) {
            unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
            *unaff_lr = unaff_r6;
          }
          if (!in_NG) {
            software_interrupt(0x15f73b);
          }
          if (!in_ZR && in_NG == (bool)in_OV) {
            if (in_CY && !in_ZR) {
              unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
              *unaff_lr = unaff_r6;
            }
            if (!in_NG) {
              software_interrupt(0x15f79b);
            }
            if (in_ZR || in_NG != (bool)in_OV) {
              return;
            }
            if (in_CY && !in_ZR) {
              unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
              *unaff_lr = unaff_r6;
            }
            if (!in_NG) {
              software_interrupt(0x15f77b);
            }
            if (in_ZR || in_NG != (bool)in_OV) {
              return;
            }
            if (in_CY && !in_ZR) {
              unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
              *unaff_lr = unaff_r6;
            }
            if (!in_NG) {
              software_interrupt(0x15f7dc);
            }
            if (in_ZR || in_NG != (bool)in_OV) {
              return;
            }
            if (in_CY && !in_ZR) {
              unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
              *unaff_lr = unaff_r6;
            }
            if (!in_NG) {
              software_interrupt(0x15f7bc);
            }
            if (in_ZR || in_NG != (bool)in_OV) {
              return;
            }
            if (in_CY && !in_ZR) {
              unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
              *unaff_lr = unaff_r6;
            }
            if (!in_NG) {
              software_interrupt(0x15f719);
            }
            if (in_ZR || in_NG != (bool)in_OV) {
              return;
            }
            if (in_CY && !in_ZR) {
              unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
              *unaff_lr = unaff_r6;
            }
            if (!in_NG) {
              software_interrupt(0x15f7f9);
            }
            if (in_ZR || in_NG != (bool)in_OV) {
              return;
            }
            if (in_CY && !in_ZR) {
              unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
              *unaff_lr = unaff_r6;
            }
            if (!in_NG) {
              software_interrupt(0x15f759);
            }
            if (in_ZR || in_NG != (bool)in_OV) {
              return;
            }
            if (in_CY && !in_ZR) {
              unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
              *unaff_lr = unaff_r6;
            }
            if (!in_NG) {
              software_interrupt(0x15f73a);
            }
            if (!in_ZR && in_NG == (bool)in_OV) {
              if (in_CY && !in_ZR) {
                unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
                *unaff_lr = unaff_r6;
              }
              if (!in_NG) {
                software_interrupt(0x15f79a);
              }
              if (in_ZR || in_NG != (bool)in_OV) {
                return;
              }
              if (in_CY && !in_ZR) {
                unaff_lr = (undefined4 *)((int)unaff_lr + param_3);
                *unaff_lr = unaff_r6;
              }
              if (!in_NG) {
                software_interrupt(0x15f77a);
              }
              if (!in_ZR && in_NG == (bool)in_OV) {
                if (in_CY && !in_ZR) {
                  *(undefined4 *)((int)unaff_lr + param_3) = unaff_r6;
                }
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              return;
            }
            return;
          }
          return;
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_10aacc60
// Entry: 0x10aacc60 | Size: 4 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void FUN_10aacc60(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 unaff_r6;
  int unaff_lr;
  bool in_ZR;
  bool in_CY;
  
  if (in_CY && !in_ZR) {
    *(undefined4 *)(unaff_lr + (param_3 >> 0x11)) = unaff_r6;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: FUN_10aacdf0
// Entry: 0x10aacdf0 | Size: 4 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void FUN_10aacdf0(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 unaff_r6;
  int unaff_lr;
  bool in_ZR;
  bool in_CY;
  
  if (in_CY && !in_ZR) {
    *(undefined4 *)(unaff_lr + (param_3 >> 0x11)) = unaff_r6;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: FUN_10aace30
// Entry: 0x10aace30 | Size: 4 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void FUN_10aace30(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 unaff_r6;
  int unaff_lr;
  bool in_ZR;
  bool in_CY;
  
  if (in_CY && !in_ZR) {
    *(undefined4 *)(unaff_lr + (param_3 >> 0x11)) = unaff_r6;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: FUN_10aacf30
// Entry: 0x10aacf30 | Size: 4 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void FUN_10aacf30(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 unaff_r6;
  int unaff_lr;
  bool in_ZR;
  bool in_CY;
  
  if (in_CY && !in_ZR) {
    *(undefined4 *)(unaff_lr + (param_3 >> 0x11)) = unaff_r6;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: FUN_10ab3090
// Entry: 0x10ab3090 | Size: 96 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10ab3090(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*_DAT_10b553ec)(param_1,param_2,*param_3);
  return uVar1;
}


// =========================================================================
// Function: FUN_10ab30f8
// Entry: 0x10ab30f8 | Size: 96 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10ab30f8(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*_DAT_10b553f0)(param_1,param_2,*param_3);
  return uVar1;
}


// =========================================================================
// Function: FUN_10ab3160
// Entry: 0x10ab3160 | Size: 3696 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x10ab3c40) */
/* WARNING: Removing unreachable block (ram,0x10ab3568) */
/* WARNING: Removing unreachable block (ram,0x10ab34e8) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffd2cc : 0x10ab3b74 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_10ab3160(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint extraout_r2;
  int extraout_r3;
  bool bVar4;
  undefined8 uVar5;
  uint *puStack_304c;
  uint *puStack_3040;
  uint uStack_2d64;
  uint uStack_2d34;
  int iStack_2d30;
  undefined4 uStack_2d28;
  uint uStack_2d24;
  undefined4 uStack_2d20;
  undefined4 uStack_1ef4;
  undefined4 uStack_1ef0;
  undefined4 uStack_1eec;
  undefined4 uStack_1ee8;
  undefined4 uStack_1ee4;
  undefined4 uStack_1ee0;
  undefined4 uStack_1edc;
  undefined4 uStack_1d34;
  undefined4 uStack_1d30;
  undefined4 uStack_1d2c;
  undefined4 uStack_1d28;
  uint uStack_1d24;
  undefined4 uStack_1d20;
  undefined4 uStack_1d1c;
  uint uStack_1d18;
  undefined4 uStack_1b34;
  undefined4 uStack_1b30;
  undefined4 uStack_1b2c;
  uint uStack_1a70;
  uint uStack_1a6c;
  int iStack_1a68;
  undefined4 uStack_1a64;
  int iStack_1a60;
  undefined4 uStack_1a5c;
  uint uStack_1a58;
  uint uStack_1a54;
  uint uStack_1a50;
  uint uStack_1a4c;
  uint *puStack_1a44;
  
  puStack_3040 = (uint *)0x10ab3274;
  while( true ) {
    bVar4 = true;
    if ((((char)*puStack_3040 == -1) && (bVar4 = true, *(char *)((int)puStack_3040 + 1) == -1)) &&
       (bVar4 = true, *(char *)((int)puStack_3040 + 2) == -0x42)) {
      bVar4 = *(char *)((int)puStack_3040 + 3) != -0x27;
    }
    if (!bVar4) break;
    puStack_3040 = (uint *)((int)puStack_3040 + 1);
  }
  puStack_304c = puStack_3040;
  while( true ) {
    bVar4 = true;
    if ((((char)*puStack_304c == -0x40) &&
        (bVar4 = true, *(char *)((int)puStack_304c + 1) == '\x03')) &&
       (bVar4 = true, *(char *)((int)puStack_304c + 2) == '_')) {
      bVar4 = *(char *)((int)puStack_304c + 3) != -0x2a;
    }
    if (!bVar4) break;
    puStack_304c = (uint *)((int)puStack_304c + 1);
  }
  uStack_1edc = 0;
  uStack_1ee0 = 0x8000;
  uStack_1ee4 = 1;
  uStack_1ee8 = 0x22;
  uStack_1eec = 0xffffffff;
  uStack_1ef0 = 0;
  software_interrupt(0);
  uStack_1ef4 = 0;
  uStack_1d34 = 0x1000;
  uStack_1d2c = 0x1000;
  uStack_1d30 = 3;
  software_interrupt(0);
  uStack_1b30 = 0x8000;
  uStack_1b2c = 0;
  software_interrupt(0);
  uStack_1b34 = 0;
  uStack_2d64 = (uint)puStack_3040 & 0xffffc000;
  while (uStack_2d64 < ((uint)((int)puStack_304c + 0x4003) & 0xffffc000)) {
    uStack_1d18 = uStack_2d64;
    uStack_1d20 = 7;
    uStack_1d24 = uStack_2d64;
    software_interrupt(0);
    uStack_1d1c = 0x4000;
    if (uStack_2d64 != 0) break;
    uStack_2d64 = 0x4000;
  }
                    /* WARNING (jumptable): Read-only address (ram,0x10ab3274) is written */
  *(undefined2 *)puStack_3040 = 0xf000;
                    /* WARNING (jumptable): Read-only address (ram,0x10ab3276) is written */
  ((char *)((int)puStack_3040 + 2))[0] = ' ';
  ((char *)((int)puStack_3040 + 2))[1] = -0x1d;
                    /* WARNING (jumptable): Read-only address (ram,0x10ab3278) is written */
  *(undefined2 *)(puStack_3040 + 1) = 0xf000;
                    /* WARNING (jumptable): Read-only address (ram,0x10ab327a) is written */
  ((char *)((int)puStack_3040 + 6))[0] = ' ';
  ((char *)((int)puStack_3040 + 6))[1] = -0x1d;
  if (puStack_304c <= puStack_3040 + 2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = puStack_3040[2];
  uStack_2d28 = 0x10ab39a0;
  uStack_2d24 = (uVar1 >> 1) << 0x1f | (uVar1 & 1) << 0x1e | (uVar1 >> 2 & 1) << 0x1d |
                (uVar1 >> 3 & 1) << 0x1c | (uVar1 >> 0x1b & 1) << 0x1b | (uVar1 >> 5 & 1) << 0x1a |
                (uVar1 >> 6 & 1) << 0x19 | (uVar1 >> 7 & 1) << 0x18 | (uVar1 >> 8 & 1) << 0x17 |
                (uVar1 >> 0x16 & 1) << 0x16 | (uVar1 >> 10 & 1) << 0x15 | (uVar1 >> 0xb & 1) << 0x14
                | (uVar1 >> 0xc & 1) << 0x13 | (uVar1 >> 0xd & 1) << 0x12 |
                (uVar1 >> 0xe & 1) << 0x11 | (uVar1 >> 0xf & 1) << 0x10 | (uVar1 >> 0x10 & 1) << 0xf
                | (uVar1 >> 0x11 & 1) << 0xe | (uVar1 >> 0x12 & 1) << 0xd |
                (uVar1 >> 0x13 & 1) << 0xc | (uVar1 >> 0x14 & 1) << 0xb | (uVar1 >> 0x15 & 1) << 10
                | (uVar1 >> 9 & 1) << 9 | (uVar1 >> 0x17 & 1) << 8 | (uVar1 >> 0x18 & 1) << 7 |
                (uVar1 >> 0x19 & 1) << 6 | (uVar1 >> 0x1a & 1) << 5 | (uVar1 >> 4 & 1) << 4 |
                (uVar1 >> 0x1c & 1) << 3 | (uVar1 >> 0x1d & 1) << 2 | (uVar1 >> 0x1f) << 1 |
                uVar1 >> 0x1e & 1;
  if (uVar1 == 0) {
    puStack_1a44 = &uStack_2d34;
    uVar2 = (uStack_2d34 ^ 0xdeadbeef) + 0xbadcafe;
    uVar1 = iStack_2d30 + (uint)(0xf4523501 < (uStack_2d34 ^ 0xdeadbeef));
    uVar3 = uVar1 * 0x20 | uVar2 >> 0x1b | uVar1 >> 3;
    uVar1 = (uVar2 >> 3 | uVar1 * 0x20000000 | uVar2 * 0x20) ^ uVar2 & 0x55555555;
    uStack_1a5c = 0x10ab3bfc;
    uVar2 = uVar1 << 4 ^ 0xabcdef;
    uStack_1a50 = ~uVar1 + uVar2;
    uStack_1a4c = ~uVar3 + (uVar3 << 4 | uVar1 >> 0x1c) + (uint)CARRY4(~uVar1,uVar2);
    for (iStack_1a60 = 0; iStack_1a60 < 10; iStack_1a60 = iStack_1a60 + 1) {
      uStack_1a64 = 0x10ab3c98;
      for (iStack_1a68 = 0; iStack_1a68 < 5; iStack_1a68 = iStack_1a68 + 1) {
      }
    }
    uStack_1a58 = uStack_1a50;
    uStack_1a54 = uStack_1a4c;
    for (uStack_1a6c = 0; (int)uStack_1a6c < 0x40; uStack_1a6c = uStack_1a6c + 1) {
      uVar1 = uStack_1a58 >> (uStack_1a6c & 0xff) | uStack_1a54 << (0x20 - uStack_1a6c & 0xff);
      if (-1 < (int)(uStack_1a6c - 0x20)) {
        uVar1 = uStack_1a54 >> (uStack_1a6c - 0x20 & 0xff);
      }
      if ((uVar1 & 1) == 0) {
        uVar1 = 1 << (uStack_1a6c & 0xff);
        uVar2 = uStack_1a6c - 0x20;
        if (-1 < (int)uVar2) {
          uVar1 = 0;
        }
        uVar3 = 1 >> (0x20 - uStack_1a6c & 0xff);
        if (-1 < (int)uVar2) {
          uVar3 = 1 << (uVar2 & 0xff);
        }
        uStack_1a54 = uStack_1a54 | uVar3;
        uStack_1a58 = uStack_1a58 | uVar1;
      }
      else {
        uVar1 = 1 << (uStack_1a6c & 0xff);
        uVar2 = uStack_1a6c - 0x20;
        if (-1 < (int)uVar2) {
          uVar1 = 0;
        }
        uVar3 = 1 >> (0x20 - uStack_1a6c & 0xff);
        if (-1 < (int)uVar2) {
          uVar3 = 1 << (uVar2 & 0xff);
        }
        uStack_1a54 = uStack_1a54 & ~uVar3;
        uStack_1a58 = uStack_1a58 & ~uVar1;
      }
    }
    uStack_2d20 = 0;
    uStack_2d34 = uStack_2d24;
    uStack_1d28 = uStack_1d34;
    for (uStack_1a70 = 0; uVar1 = uStack_1a70, func_0x11435430(uStack_1a50,uStack_1a4c,100,0),
        uVar3 = uStack_1a54, uVar2 = uStack_1a58, (uint)(extraout_r2 <= uVar1) <= (uint)-extraout_r3
        ; uStack_1a70 = uStack_1a70 + 1) {
      uVar5 = func_0x11435430((int)((ulonglong)uStack_1a70 * (ulonglong)uStack_1a58),
                              uStack_1a54 * uStack_1a70 +
                              (int)((ulonglong)uStack_1a70 * (ulonglong)uStack_1a58 >> 0x20),
                              uStack_1a50 | 1,uStack_1a4c);
      uStack_1a58 = uVar2 ^ (uint)uVar5;
      uStack_1a54 = uVar3 ^ (uint)((ulonglong)uVar5 >> 0x20);
      uStack_1a4c = uStack_1a4c ^ uStack_1a4c + CARRY4(uStack_1a50,uStack_1a70) ^ uStack_1a54;
      uStack_1a50 = uStack_1a50 ^ uStack_1a50 + uStack_1a70 ^ uStack_1a58;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: FUN_700e4c48
// Entry: 0x700e4c48 | Size: 34 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void FUN_700e4c48(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: FUN_700e6b80
// Entry: 0x700e6b80 | Size: 34 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void FUN_700e6b80(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: FUN_70aa119c
// Entry: 0x70aa119c | Size: 68 bytes
// =========================================================================
// Decompile failed: Exception while decompiling 70aa119c: process: timeout


// =========================================================================
// Function: FUN_70af73dc
// Entry: 0x70af73dc | Size: 68 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void FUN_70af73dc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: FUN_70be08d4
// Entry: 0x70be08d4 | Size: 68 bytes
// =========================================================================
// Decompile failed: 
Low-level Error: Flow exceeded maximum allowable instructions

// =========================================================================
// Function: FUN_70fff220
// Entry: 0x70fff220 | Size: 68 bytes
// =========================================================================
// Decompile failed: 
Low-level Error: Flow exceeded maximum allowable instructions

// =========================================================================
// Function: FUN_71121a9c
// Entry: 0x71121a9c | Size: 68 bytes
// =========================================================================
// Decompile failed: 
Low-level Error: Flow exceeded maximum allowable instructions

// =========================================================================
// Function: FUN_711239d4
// Entry: 0x711239d4 | Size: 68 bytes
// =========================================================================
// Decompile failed: 
Low-level Error: Flow exceeded maximum allowable instructions

// =========================================================================
// Function: FUN_7121ff50
// Entry: 0x7121ff50 | Size: 68 bytes
// =========================================================================

void FUN_7121ff50(void)

{
  imp___cxa_finalize(&DAT_70b0e000);
  return;
}


// =========================================================================
// Function: FUN_712210f8
// Entry: 0x712210f8 | Size: 96 bytes
// =========================================================================

undefined4 FUN_712210f8(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = ext___cxa_thread_atexit_impl(param_1,param_2,*param_3);
  return uVar1;
}


// =========================================================================
// Function: FUN_71221160
// Entry: 0x71221160 | Size: 328 bytes
// =========================================================================
// Decompile failed: Exception while decompiling 71221160: process: timeout


// =========================================================================
// Function: FUN_712416b8
// Entry: 0x712416b8 | Size: 1520 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x71241bcc) */
/* WARNING: Removing unreachable block (ram,0x71241950) */
/* WARNING: Removing unreachable block (ram,0x71241964) */
/* WARNING: Removing unreachable block (ram,0x71241a74) */
/* WARNING: Removing unreachable block (ram,0x71241a88) */
/* WARNING: Removing unreachable block (ram,0x71241834) */
/* WARNING: Removing unreachable block (ram,0x712417a4) */
/* WARNING: Removing unreachable block (ram,0x71241bd8) */
/* WARNING: Removing unreachable block (ram,0x712417b8) */
/* WARNING: Removing unreachable block (ram,0x71241848) */

undefined8
FUN_712416b8(uint param_1,uint param_2,uint *param_3,undefined4 param_4,uint param_5,uint param_6)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  if (param_6 == 0 && (7 < param_5) <= param_6) {
    if (param_6 == 0 && (3 < param_5) <= param_6) {
      if (param_5 == 0 && param_6 == 0) {
        param_1 = param_1 ^ param_2 >> 1;
        lVar1 = (ulonglong)param_1 * 0x27d4eb4f;
        uVar3 = (uint)lVar1;
        uVar2 = param_2 * 0x27d4eb4f + param_1 * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20);
        uVar3 = uVar3 ^ (uVar3 >> 0x1d | uVar2 * 8);
        lVar1 = (ulonglong)uVar3 * 0x9e3779f9;
        uVar2 = (uVar2 ^ uVar2 >> 0x1d) * -0x61c88607 +
                uVar3 * 0x165667b1 + (int)((ulonglong)lVar1 >> 0x20);
        uVar5 = CONCAT44(uVar2,(uint)lVar1 ^ uVar2);
      }
      else {
        lVar1 = (ulonglong)(uint)(byte)*param_3 * 0x165667c5;
        param_2 = param_2 ^ (uint)(byte)*param_3 * 0x27d4eb2f + (int)((ulonglong)lVar1 >> 0x20);
        param_1 = param_1 ^ (uint)lVar1;
        uVar2 = param_1 << 0xb | param_2 >> 0x15;
        lVar1 = (ulonglong)uVar2 * 0x85ebca87;
        uVar5 = FUN_712416b8((int)lVar1,
                             (param_1 >> 0x15 | param_2 << 0xb) * -0x7a143579 +
                             uVar2 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20),
                             (byte *)((int)param_3 + 1),param_5 - 1,param_5 - 1,
                             param_6 - (param_5 == 0));
      }
    }
    else {
      lVar1 = (ulonglong)*param_3 * 0x85ebca87;
      param_2 = param_2 ^ *param_3 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20);
      param_1 = param_1 ^ (uint)lVar1;
      uVar3 = param_1 << 0x17 | param_2 >> 9;
      lVar1 = (ulonglong)uVar3 * 0x27d4eb4f;
      uVar2 = (uint)lVar1;
      uVar5 = FUN_712416b8(uVar2 + 0x9e3779f9,
                           (param_1 >> 9 | param_2 << 0x17) * 0x27d4eb4f +
                           uVar3 * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20) + 0x165667b1 +
                           (uint)(0x61c88606 < uVar2),param_3 + 1,param_5 - 4,param_5 - 4,
                           param_6 - (param_5 < 4));
    }
  }
  else {
    lVar1 = (ulonglong)*param_3 * 0x27d4eb4f;
    uVar4 = (uint)lVar1;
    uVar3 = param_3[1] * 0x27d4eb4f + *param_3 * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20);
    uVar2 = uVar4 << 0x1f | uVar3 >> 1;
    lVar1 = (ulonglong)uVar2 * 0x85ebca87;
    param_2 = param_2 ^ (uVar4 >> 1 | uVar3 * -0x80000000) * -0x7a143579 +
                        uVar2 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20);
    param_1 = param_1 ^ (uint)lVar1;
    uVar3 = param_1 << 0x1b | param_2 >> 5;
    lVar1 = (ulonglong)uVar3 * 0x85ebca87;
    uVar2 = (uint)lVar1;
    uVar5 = FUN_712416b8(uVar2 + 0xc2b2ae63,
                         (param_1 >> 5 | param_2 << 0x1b) * -0x7a143579 +
                         uVar3 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20) + -0x7a143589 +
                         (uint)(0x3d4d519c < uVar2),param_3 + 2,param_5 - 8,param_5 - 8,
                         param_6 - (param_5 < 8));
  }
  return uVar5;
}


// =========================================================================
// Function: FUN_71241ca8
// Entry: 0x71241ca8 | Size: 2852 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x71242744) */
/* WARNING: Removing unreachable block (ram,0x71242640) */
/* WARNING: Removing unreachable block (ram,0x71242544) */
/* WARNING: Removing unreachable block (ram,0x71242430) */
/* WARNING: Removing unreachable block (ram,0x71242344) */
/* WARNING: Removing unreachable block (ram,0x712422c8) */
/* WARNING: Removing unreachable block (ram,0x7124224c) */
/* WARNING: Removing unreachable block (ram,0x712421d8) */
/* WARNING: Removing unreachable block (ram,0x712420e0) */
/* WARNING: Removing unreachable block (ram,0x71241fd0) */
/* WARNING: Removing unreachable block (ram,0x71241ee4) */
/* WARNING: Removing unreachable block (ram,0x71241dec) */
/* WARNING: Removing unreachable block (ram,0x71241e00) */
/* WARNING: Removing unreachable block (ram,0x71241ef8) */
/* WARNING: Removing unreachable block (ram,0x71241fe4) */
/* WARNING: Removing unreachable block (ram,0x71242100) */
/* WARNING: Removing unreachable block (ram,0x712421ec) */
/* WARNING: Removing unreachable block (ram,0x71242260) */
/* WARNING: Removing unreachable block (ram,0x712422dc) */
/* WARNING: Removing unreachable block (ram,0x71242358) */
/* WARNING: Removing unreachable block (ram,0x71242444) */
/* WARNING: Removing unreachable block (ram,0x71242558) */
/* WARNING: Removing unreachable block (ram,0x71242654) */
/* WARNING: Removing unreachable block (ram,0x71242758) */

undefined8
FUN_71241ca8(uint *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,uint param_6,
            uint param_7,uint param_8,uint param_9,uint param_10,uint param_11,uint param_12)

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
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  undefined8 uVar35;
  undefined4 uStack_298;
  int iStack_294;
  undefined4 uStack_290;
  int iStack_28c;
  undefined4 uStack_288;
  int iStack_284;
  undefined4 uStack_280;
  int iStack_27c;
  undefined4 uStack_268;
  uint uStack_264;
  undefined4 uStack_260;
  uint uStack_25c;
  undefined4 uStack_258;
  int iStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  uint uStack_248;
  undefined4 uStack_244;
  uint uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  uint *puStack_234;
  undefined4 uStack_230;
  undefined1 *puStack_22c;
  uint uStack_220;
  uint uStack_21c;
  uint uStack_218;
  uint uStack_214;
  uint uStack_210;
  uint uStack_20c;
  uint uStack_208;
  uint uStack_204;
  uint uStack_200;
  uint uStack_1fc;
  uint *puStack_1f8;
  uint uStack_1b8;
  uint uStack_1b4;
  uint *puStack_1ac;
  uint uStack_1a8;
  uint uStack_1a4;
  uint *puStack_19c;
  uint uStack_198;
  uint uStack_194;
  uint *puStack_18c;
  uint uStack_188;
  uint uStack_184;
  uint *puStack_17c;
  uint uStack_178;
  uint uStack_174;
  uint uStack_170;
  uint uStack_16c;
  undefined4 uStack_164;
  uint uStack_160;
  uint uStack_15c;
  uint uStack_158;
  uint uStack_154;
  uint uStack_150;
  uint uStack_14c;
  undefined4 uStack_144;
  uint uStack_140;
  uint uStack_13c;
  uint uStack_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  undefined4 uStack_124;
  uint uStack_120;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  undefined4 uStack_104;
  uint uStack_100;
  uint uStack_fc;
  uint *puStack_f8;
  uint *puStack_f4;
  uint *puStack_f0;
  uint *puStack_ec;
  
  puStack_22c = (undefined1 *)&uStack_298;
  uStack_204 = param_6;
  uStack_208 = param_5;
  uStack_20c = param_8;
  uStack_210 = param_7;
  uStack_214 = param_10;
  uStack_218 = param_9;
  uStack_21c = param_12;
  uStack_220 = param_11;
  if (param_4 == 0 && (0x1f < param_3) <= param_4) {
    uVar12 = param_5 << 1 | param_6 >> 0x1f;
    uVar15 = param_7 << 7 | param_8 >> 0x19;
    uVar13 = uVar12 + uVar15;
    uVar16 = param_9 << 0xc | param_10 >> 0x14;
    uVar14 = uVar13 + uVar16;
    uVar17 = param_11 << 0x12 | param_12 >> 0xe;
    uVar19 = (uint)((ulonglong)param_5 * 0x27d4eb4f);
    uVar33 = param_6 * 0x27d4eb4f +
             param_5 * -0x3d4d51c3 + (int)((ulonglong)param_5 * 0x27d4eb4f >> 0x20);
    uVar25 = uVar19 << 0x1f | uVar33 >> 1;
    lVar1 = (ulonglong)uVar25 * 0x85ebca87;
    uVar18 = uVar14 + uVar17 ^ (uint)lVar1;
    lVar2 = (ulonglong)uVar18 * 0x85ebca87;
    uVar32 = (uint)lVar2;
    uVar26 = (uint)((ulonglong)param_7 * 0x27d4eb4f);
    uVar20 = param_8 * 0x27d4eb4f +
             param_7 * -0x3d4d51c3 + (int)((ulonglong)param_7 * 0x27d4eb4f >> 0x20);
    uVar30 = uVar26 << 0x1f | uVar20 >> 1;
    lVar3 = (ulonglong)uVar30 * 0x85ebca87;
    uVar21 = uVar32 + 0xc2b2ae63 ^ (uint)lVar3;
    lVar4 = (ulonglong)uVar21 * 0x85ebca87;
    uVar9 = (uint)lVar4;
    uVar27 = (uint)((ulonglong)param_9 * 0x27d4eb4f);
    uVar22 = param_10 * 0x27d4eb4f +
             param_9 * -0x3d4d51c3 + (int)((ulonglong)param_9 * 0x27d4eb4f >> 0x20);
    uVar31 = uVar27 << 0x1f | uVar22 >> 1;
    lVar5 = (ulonglong)uVar31 * 0x85ebca87;
    uVar23 = uVar9 + 0xc2b2ae63 ^ (uint)lVar5;
    lVar6 = (ulonglong)uVar23 * 0x85ebca87;
    uVar10 = (uint)lVar6;
    uVar29 = (uint)((ulonglong)param_11 * 0x27d4eb4f);
    uVar28 = param_12 * 0x27d4eb4f +
             param_11 * -0x3d4d51c3 + (int)((ulonglong)param_11 * 0x27d4eb4f >> 0x20);
    uVar24 = uVar29 << 0x1f | uVar28 >> 1;
    lVar7 = (ulonglong)uVar24 * 0x85ebca87;
    uVar34 = uVar10 + 0xc2b2ae63 ^ (uint)lVar7;
    lVar8 = (ulonglong)uVar34 * 0x85ebca87;
    uVar11 = (uint)lVar8;
    uVar35 = CONCAT44((((((param_5 >> 0x1f | param_6 << 1) + (param_7 >> 0x19 | param_8 << 7) +
                          (uint)CARRY4(uVar12,uVar15) + (param_9 >> 0x14 | param_10 << 0xc) +
                          (uint)CARRY4(uVar13,uVar16) + (param_11 >> 0xe | param_12 << 0x12) +
                          (uint)CARRY4(uVar14,uVar17) ^
                         (uVar19 >> 1 | uVar33 * -0x80000000) * -0x7a143579 +
                         uVar25 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20)) * -0x7a143579 +
                         uVar18 * -0x61c8864f + (int)((ulonglong)lVar2 >> 0x20) + -0x7a143589 +
                         (uint)(0x3d4d519c < uVar32) ^
                        (uVar26 >> 1 | uVar20 * -0x80000000) * -0x7a143579 +
                        uVar30 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20)) * -0x7a143579 +
                        uVar21 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) + -0x7a143589 +
                        (uint)(0x3d4d519c < uVar9) ^
                       (uVar27 >> 1 | uVar22 * -0x80000000) * -0x7a143579 +
                       uVar31 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20)) * -0x7a143579 +
                       uVar23 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20) + -0x7a143589 +
                       (uint)(0x3d4d519c < uVar10) ^
                      (uVar29 >> 1 | uVar28 * -0x80000000) * -0x7a143579 +
                      uVar24 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20)) * -0x7a143579 +
                      uVar34 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20) + -0x7a143589 +
                      (uint)(0x3d4d519c < uVar11),uVar11 + 0xc2b2ae63);
  }
  else {
    puStack_234 = param_1 + 8;
    iStack_254 = param_3 - 0x20;
    uStack_184 = param_6;
    uStack_188 = param_5;
    uStack_170 = *param_1;
    uStack_16c = param_1[1];
    uStack_174 = param_6;
    uStack_178 = param_5;
    uStack_260 = 0x27d4eb4f;
    uVar32 = (uint)((ulonglong)uStack_170 * 0x27d4eb4f);
    uStack_268 = 0xc2b2ae3d;
    uStack_160 = param_5 + uVar32;
    uStack_15c = param_6 + uStack_16c * 0x27d4eb4f +
                           uStack_170 * -0x3d4d51c3 +
                           (int)((ulonglong)uStack_170 * 0x27d4eb4f >> 0x20) +
                 (uint)CARRY4(param_5,uVar32);
    uStack_258 = 0x1f;
    uStack_164 = 0x1f;
    uVar32 = uStack_160 * -0x80000000 | uStack_15c >> 1;
    uStack_230 = 0x85ebca87;
    lVar1 = (ulonglong)uVar32 * 0x85ebca87;
    uStack_298 = (undefined4)lVar1;
    iStack_294 = (uStack_160 >> 1 | uStack_15c * -0x80000000) * -0x7a143579 +
                 uVar32 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20);
    puStack_18c = param_1 + 2;
    uStack_194 = param_8;
    uStack_198 = param_7;
    uStack_150 = *puStack_18c;
    uStack_14c = param_1[3];
    uStack_154 = param_8;
    uStack_158 = param_7;
    uVar32 = (uint)((ulonglong)uStack_150 * 0x27d4eb4f);
    uStack_140 = param_7 + uVar32;
    uStack_13c = param_8 + uStack_14c * 0x27d4eb4f +
                           uStack_150 * -0x3d4d51c3 +
                           (int)((ulonglong)uStack_150 * 0x27d4eb4f >> 0x20) +
                 (uint)CARRY4(param_7,uVar32);
    uStack_144 = 0x1f;
    uVar32 = uStack_140 * -0x80000000 | uStack_13c >> 1;
    lVar1 = (ulonglong)uVar32 * 0x85ebca87;
    uStack_290 = (undefined4)lVar1;
    iStack_28c = (uStack_140 >> 1 | uStack_13c * -0x80000000) * -0x7a143579 +
                 uVar32 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20);
    puStack_19c = param_1 + 4;
    uStack_1a4 = param_10;
    uStack_1a8 = param_9;
    uStack_130 = *puStack_19c;
    uStack_12c = param_1[5];
    uStack_134 = param_10;
    uStack_138 = param_9;
    uVar32 = (uint)((ulonglong)uStack_130 * 0x27d4eb4f);
    uStack_120 = param_9 + uVar32;
    uStack_11c = param_10 +
                 uStack_12c * 0x27d4eb4f +
                 uStack_130 * -0x3d4d51c3 + (int)((ulonglong)uStack_130 * 0x27d4eb4f >> 0x20) +
                 (uint)CARRY4(param_9,uVar32);
    uStack_124 = 0x1f;
    uVar32 = uStack_120 * -0x80000000 | uStack_11c >> 1;
    lVar1 = (ulonglong)uVar32 * 0x85ebca87;
    uStack_288 = (undefined4)lVar1;
    iStack_284 = (uStack_120 >> 1 | uStack_11c * -0x80000000) * -0x7a143579 +
                 uVar32 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20);
    puStack_1ac = param_1 + 6;
    uStack_1b4 = param_12;
    uStack_1b8 = param_11;
    uStack_110 = *puStack_1ac;
    uStack_10c = param_1[7];
    uStack_114 = param_12;
    uStack_118 = param_11;
    uStack_264 = param_11;
    uStack_25c = param_12;
    uVar32 = (uint)((ulonglong)uStack_110 * 0x27d4eb4f);
    uStack_100 = param_11 + uVar32;
    uStack_248 = param_12 +
                 uStack_10c * 0x27d4eb4f +
                 uStack_110 * -0x3d4d51c3 + (int)((ulonglong)uStack_110 * 0x27d4eb4f >> 0x20) +
                 (uint)CARRY4(param_11,uVar32);
    uStack_104 = 0x1f;
    uStack_24c = 0x1f;
    uStack_250 = 0xffffffff;
    uStack_23c = 1;
    uStack_240 = uStack_100 >> 1 | uStack_248 * -0x80000000;
    uStack_244 = 0x21;
    uStack_238 = 0;
    uVar32 = uStack_100 * -0x80000000 | uStack_248 >> 1;
    lVar1 = (ulonglong)uVar32 * 0x85ebca87;
    uStack_280 = (undefined4)lVar1;
    iStack_27c = uStack_240 * -0x7a143579 + uVar32 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20);
    uStack_200 = param_3;
    uStack_1fc = param_4;
    puStack_1f8 = param_1;
    puStack_17c = param_1;
    uStack_fc = uStack_248;
    puStack_f8 = param_1;
    puStack_f4 = puStack_18c;
    puStack_f0 = puStack_19c;
    puStack_ec = puStack_1ac;
    uVar35 = FUN_71241ca8(puStack_234,iStack_27c,iStack_254,param_4 - (param_3 < 0x20));
  }
  return uVar35;
}


// =========================================================================
// Function: FUN_712c3a80
// Entry: 0x712c3a80 | Size: 32 bytes
// =========================================================================

undefined4 * FUN_712c3a80(void)

{
  return &DAT_7014c000;
}


// =========================================================================
// Function: FUN_712c3ac4
// Entry: 0x712c3ac4 | Size: 32 bytes
// =========================================================================

undefined * FUN_712c3ac4(void)

{
  return &DAT_706bb4a0;
}


// =========================================================================
// Function: FUN_712c3b08
// Entry: 0x712c3b08 | Size: 32 bytes
// =========================================================================

undefined * FUN_712c3b08(void)

{
  return &DAT_7070ddc0;
}


// =========================================================================
// Function: FUN_712c4254
// Entry: 0x712c4254 | Size: 104 bytes
// =========================================================================

bool FUN_712c4254(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_71ba2c1c(param_1,param_2 & 0x7fffffff,0,0x7ff00000);
  iVar2 = FUN_71ba0f44(param_1,param_2 & 0x7fffffff,0,0x7ff00000);
  return iVar2 == 0 && iVar1 == 0;
}


// =========================================================================
// Function: FUN_712ece00
// Entry: 0x712ece00 | Size: 148 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_712ece00(void)

{
  DAT_70b2e800 = _ext_stdout;
  FUN_712f1a88(&DAT_70b2e804,&DAT_70b2e004,0x7f0);
  return 0;
}


// =========================================================================
// Function: Java_com_native_libLoader_base
// Entry: 0x712f0a60 | Size: 36 bytes
// =========================================================================

undefined4 Java_com_native_libLoader_base(void)

{
  return DAT_70b2e804;
}


// =========================================================================
// Function: Java_com_native_libLoader_execEnd
// Entry: 0x712f0aa8 | Size: 36 bytes
// =========================================================================

undefined4 Java_com_native_libLoader_execEnd(void)

{
  return DAT_70b2e808;
}


// =========================================================================
// Function: Java_com_native_libLoader_getSym
// Entry: 0x712f0af4 | Size: 140 bytes
// =========================================================================

void Java_com_native_libLoader_getSym(int *param_1)

{
  uint uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  FUN_712f0bc8(&uStack_20);
  if ((DAT_70b2e840 & 1) != 0) {
    qNQrlu(DAT_70b2e848);
  }
  DAT_70b2e848 = uStack_18;
  if ((uStack_20 & 1) == 0) {
    uStack_18 = 0x70b2e841;
  }
  DAT_70b2e840 = uStack_20;
  DAT_70b2e844 = uStack_1c;
  (**(code **)(*param_1 + 0x29c))(param_1,uStack_18);
  return;
}


// =========================================================================
// Function: FUN_712f0bc8
// Entry: 0x712f0bc8 | Size: 784 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_712f0bc8(byte *param_1,undefined4 param_2,uint param_3)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  byte *pbVar7;
  undefined8 uVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 auStack_38 [20];
  int iStack_24;
  
  iStack_24 = _ext___stack_chk_guard;
  pcVar1 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700b8994);
  if (*pcVar1 == '\0') {
    puVar2 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700b8984);
    *puVar2 = 0x73ff7eee;
    *(undefined1 *)(puVar2 + 1) = 1;
    GFDIUClbc_QcPNgD_wH(&LAB_712f70fc,puVar2,&DAT_70b0e000);
    puVar3 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700b8994);
    *puVar3 = 1;
  }
  uVar8 = XcxSszXLPjQrEGhecEv_(&DAT_700b8984);
  uVar4 = (uint)((ulonglong)uVar8 >> 0x20);
  pbVar7 = (byte *)uVar8;
  if (pbVar7[4] != 0) {
    uVar4 = (uint)pbVar7[1];
    pbVar7[4] = 0;
    *pbVar7 = *pbVar7 ^ 0xb1;
    pbVar7[1] = pbVar7[1] ^ 0x5b;
    pbVar7[2] = pbVar7[2] ^ 0xa7;
    pbVar7[3] = pbVar7[3] ^ 0x73;
  }
  FUN_712f4a98(auStack_38,uVar4,pbVar7,param_3);
  uVar4 = imp_strlen(auStack_38);
  if (0xfffffff7 < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(param_1);
  }
  if (uVar4 < 0xb) {
    pbVar7 = param_1 + 1;
    *param_1 = (byte)(uVar4 << 1);
    if (uVar4 == 0) goto LAB_712f0cc8;
  }
  else {
    pbVar7 = (byte *)thunk_MwhHq((uVar4 | 7) + 1);
    *(uint *)param_1 = (uVar4 | 7) + 2;
    *(uint *)(param_1 + 4) = uVar4;
    *(byte **)(param_1 + 8) = pbVar7;
  }
  imp___aeabi_memcpy(pbVar7,auStack_38,uVar4);
LAB_712f0cc8:
  pbVar7[uVar4] = 0;
  piVar6 = DAT_70b2e81c;
  do {
    if (piVar6 == DAT_70b2e820) {
LAB_712f0d3c:
      if (_ext___stack_chk_guard == iStack_24) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      imp___stack_chk_fail();
    }
    iVar5 = *piVar6;
    if ((*(uint *)(iVar5 + 8) <= param_3) &&
       (param_3 < *(int *)(iVar5 + 0xc) + *(uint *)(iVar5 + 8))) {
      if (1 < *(byte *)(iVar5 + 0x10)) {
        FUN_712f4b10(&uStack_48);
        if ((*param_1 & 1) != 0) {
          qNQrlu(*(undefined4 *)(param_1 + 8));
        }
        *(undefined4 *)param_1 = uStack_48;
        *(undefined4 *)(param_1 + 4) = uStack_44;
        *(undefined4 *)(param_1 + 8) = uStack_40;
      }
      goto LAB_712f0d3c;
    }
    piVar6 = piVar6 + 1;
  } while( true );
}


// =========================================================================
// Function: FUN_712f1058
// Entry: 0x712f1058 | Size: 1948 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

int * FUN_712f1058(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  undefined4 *puVar10;
  int *piVar11;
  int *piVar12;
  uint uVar13;
  uint *puVar14;
  int *piVar15;
  code *pcVar16;
  uint uVar17;
  undefined4 *puVar18;
  int *piVar19;
  int *piVar20;
  int *piVar21;
  
  piVar12 = param_1 + 6;
  *piVar12 = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  piVar15 = param_1 + 9;
  *piVar15 = 0;
  iVar4 = FUN_712c3a80();
  iVar5 = FUN_712c3ac4();
  iVar6 = FUN_712c3b08();
  if (iVar5 + iVar4 + iVar6 != 0) {
    uVar7 = FUN_712c3ac4();
    iVar4 = FUN_712c3a80();
    iVar4 = *(int *)(iVar4 + 4);
    uVar8 = imp_sysconf(0x28);
    uVar2 = -uVar8;
    uVar13 = (uVar7 + iVar4 + uVar8) - 1;
    uVar17 = uVar13;
    uVar3 = uVar7 & uVar2;
    uVar7 = uVar2;
    do {
      uVar1 = uVar3;
      if ((uVar13 & uVar2) <= uVar1) break;
      software_interrupt(0);
      uVar7 = uVar1;
      uVar17 = uVar8;
      uVar3 = uVar8;
    } while (uVar1 == 0);
    iVar4 = FUN_712c3a80(uVar7,uVar17);
    piVar9 = (int *)FUN_712c3a80();
    iVar6 = *piVar9;
    iVar5 = FUN_712c3a80();
    piVar9 = (int *)(iVar6 + iVar4);
    *param_1 = iVar5 + *piVar9;
    iVar4 = FUN_712c3ac4();
    param_1[1] = iVar4;
    piVar20 = piVar9 + 9;
    param_1[2] = piVar9[2] + *param_1;
    param_1[3] = piVar9[3] + *param_1;
    if (piVar9[4] != 0) {
      uVar2 = 0;
      do {
        uVar2 = uVar2 + 1;
        iVar4 = *piVar20;
        piVar21 = piVar20 + 1;
        piVar20 = piVar20 + 2;
        *(int *)(iVar4 + *param_1) = *piVar21 + *param_1;
      } while (uVar2 < (uint)piVar9[4]);
    }
    if (piVar9[5] == 0) {
      uVar2 = 0;
    }
    else {
      uVar17 = 0;
      puVar10 = (undefined4 *)param_1[7];
      do {
        if (puVar10 < (undefined4 *)param_1[8]) {
          puVar18 = puVar10 + 1;
          *puVar10 = piVar20;
        }
        else {
          iVar5 = *piVar12;
          iVar4 = (int)puVar10 - iVar5 >> 2;
          uVar2 = iVar4 + 1;
          if (0x3fffffff < uVar2) goto LAB_71bc92c0;
          uVar3 = param_1[8] - iVar5;
          uVar7 = (int)uVar3 >> 1;
          if (uVar2 < uVar7) {
            uVar2 = uVar7;
          }
          if (0x7ffffffb < uVar3) {
            uVar2 = 0x3fffffff;
          }
          if (uVar2 == 0) {
            iVar6 = 0;
          }
          else {
            if (0x3fffffff < uVar2) goto LAB_71bc92a0;
            iVar6 = thunk_MwhHq(uVar2 << 2);
          }
          puVar18 = (undefined4 *)(iVar6 + iVar4 * 4);
          *puVar18 = piVar20;
          imp___aeabi_memcpy4(iVar6,iVar5,(int)puVar10 - iVar5);
          puVar18 = puVar18 + 1;
          param_1[6] = iVar6;
          param_1[7] = (int)puVar18;
          param_1[8] = iVar6 + uVar2 * 4;
          if (iVar5 != 0) {
            qNQrlu(iVar5);
          }
        }
        param_1[7] = (int)puVar18;
        uVar17 = uVar17 + 1;
        piVar20 = (int *)((int)piVar20 + *(byte *)(piVar20 + 4) + 0x11);
        uVar2 = piVar9[5];
        puVar10 = puVar18;
      } while (uVar17 < uVar2);
    }
    if (piVar9[6] != 0) {
      uVar2 = 0;
      puVar10 = (undefined4 *)param_1[10];
      do {
        if (puVar10 < (undefined4 *)param_1[0xb]) {
          puVar18 = puVar10 + 1;
          *puVar10 = piVar20;
        }
        else {
          iVar5 = *piVar15;
          iVar4 = (int)puVar10 - iVar5 >> 2;
          uVar17 = iVar4 + 1;
          if (0x3fffffff < uVar17) {
            FUN_712f7120(piVar15);
LAB_71bc92c0:
            FUN_712f7120(piVar12);
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          uVar3 = param_1[0xb] - iVar5;
          uVar7 = (int)uVar3 >> 1;
          if (uVar17 < uVar7) {
            uVar17 = uVar7;
          }
          if (0x7ffffffb < uVar3) {
            uVar17 = 0x3fffffff;
          }
          if (uVar17 == 0) {
            iVar6 = 0;
          }
          else {
            if (0x3fffffff < uVar17) {
LAB_71bc92a0:
                    /* WARNING: Subroutine does not return */
              FUN_712f6cf0();
            }
            iVar6 = thunk_MwhHq(uVar17 << 2);
          }
          puVar18 = (undefined4 *)(iVar6 + iVar4 * 4);
          *puVar18 = piVar20;
          imp___aeabi_memcpy4(iVar6,iVar5,(int)puVar10 - iVar5);
          puVar18 = puVar18 + 1;
          param_1[9] = iVar6;
          param_1[10] = (int)puVar18;
          param_1[0xb] = iVar6 + uVar17 * 4;
          if (iVar5 != 0) {
            qNQrlu(iVar5);
          }
        }
        param_1[10] = (int)puVar18;
        uVar2 = uVar2 + 1;
        piVar20 = (int *)((int)piVar20 + *(byte *)(piVar20 + 4) + 0x11);
        puVar10 = puVar18;
      } while (uVar2 < (uint)piVar9[6]);
      uVar2 = piVar9[5];
    }
    param_1[4] = uVar2;
    iVar5 = piVar9[6];
    param_1[5] = iVar5;
    iVar4 = thunk__IBDl(iVar5);
    param_1[0xe] = iVar4;
    imp___aeabi_memclr(iVar4,iVar5);
    iVar5 = param_1[6];
    iVar6 = param_1[7];
    iVar4 = 0;
    if (iVar6 != iVar5) {
      iVar4 = LZCOUNT(iVar6 - iVar5 >> 2) * -2 + 0x3e;
    }
    FUN_712f7188(iVar5,iVar6,iVar4,1);
    puVar10 = (undefined4 *)thunk_MwhHq(0xc);
    puVar10[1] = 0;
    puVar10[2] = 0;
    param_1[0xc] = (int)puVar10;
    *puVar10 = puVar10 + 1;
    puVar10 = (undefined4 *)thunk_MwhHq(0xc);
    puVar10[2] = 0;
    puVar10[1] = 0;
    param_1[0xd] = (int)puVar10;
    *puVar10 = puVar10 + 1;
    if (param_1[4] != 0) {
      uVar2 = 0;
      do {
        puVar14 = *(uint **)(*piVar12 + uVar2 * 4);
        uVar17 = *puVar14;
        uVar7 = puVar14[1];
        if (uVar7 != uVar17) {
          piVar21 = (int *)param_1[0xc];
          piVar15 = piVar21 + 1;
          piVar20 = (int *)*piVar15;
          while (piVar19 = piVar15, piVar20 != (int *)0x0) {
            while (piVar15 = piVar20, (uint)piVar15[4] <= uVar7) {
              if (uVar7 <= (uint)piVar15[4]) goto LAB_712f1550;
              piVar20 = (int *)piVar15[1];
              if ((int *)piVar15[1] == (int *)0x0) {
                piVar19 = piVar15 + 1;
                goto LAB_712f14f0;
              }
            }
            piVar20 = (int *)*piVar15;
          }
LAB_712f14f0:
          piVar20 = (int *)thunk_MwhHq(0x18);
          piVar20[4] = uVar7;
          piVar20[5] = 0;
          *piVar20 = 0;
          piVar20[1] = 0;
          piVar20[2] = (int)piVar15;
          *piVar19 = (int)piVar20;
          piVar15 = piVar20;
          if (*(int *)*piVar21 != 0) {
            *piVar21 = *(int *)*piVar21;
            piVar15 = (int *)*piVar19;
          }
          FUN_712f807c(piVar21[1],piVar15);
          piVar21[2] = piVar21[2] + 1;
          piVar15 = piVar20;
LAB_712f1550:
          piVar15[5] = (int)puVar14;
          puVar14 = *(uint **)(*piVar12 + uVar2 * 4);
        }
        piVar21 = (int *)param_1[0xd];
        piVar20 = (int *)piVar21[1];
        piVar15 = piVar21 + 1;
        while (piVar19 = piVar15, piVar20 != (int *)0x0) {
          while (piVar11 = piVar20, (uint)piVar11[4] <= uVar17) {
            if (uVar17 <= (uint)piVar11[4]) goto LAB_712f146c;
            piVar20 = (int *)piVar11[1];
            if ((int *)piVar11[1] == (int *)0x0) {
              piVar15 = piVar11 + 1;
              piVar19 = piVar11;
              goto LAB_712f1414;
            }
          }
          piVar15 = piVar11;
          piVar20 = (int *)*piVar11;
        }
LAB_712f1414:
        piVar11 = (int *)thunk_MwhHq(0x18);
        piVar11[4] = uVar17;
        piVar11[5] = 0;
        *piVar11 = 0;
        piVar11[1] = 0;
        piVar11[2] = (int)piVar19;
        *piVar15 = (int)piVar11;
        piVar20 = piVar11;
        if (*(int *)*piVar21 != 0) {
          *piVar21 = *(int *)*piVar21;
          piVar20 = (int *)*piVar15;
        }
        FUN_712f807c(piVar21[1],piVar20);
        piVar21[2] = piVar21[2] + 1;
LAB_712f146c:
        piVar11[5] = (int)puVar14;
        uVar2 = uVar2 + 1;
      } while (uVar2 < (uint)param_1[4]);
    }
    FUN_717dd084(*param_1,param_1[2],param_1[3]);
    FUN_712ece00();
    uVar2 = param_1[5];
    if (uVar2 != 0) {
      uVar17 = 0;
      do {
        if (*(char *)(param_1[0xe] + uVar17) == '\0') {
          *(undefined4 *)(*(int *)(*(int *)(param_1[9] + uVar17 * 4) + 8) + *param_1) = 0;
          uVar2 = param_1[5];
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 < uVar2);
    }
    uVar2 = piVar9[8];
    if (3 < uVar2) {
      iVar4 = *param_1;
      uVar17 = 0;
      iVar5 = piVar9[7];
      do {
        pcVar16 = *(code **)(iVar5 + iVar4 + uVar17 * 4);
        if (pcVar16 != (code *)0x0) {
          (*pcVar16)();
          uVar2 = piVar9[8];
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 < uVar2 >> 2);
    }
  }
  return param_1;
}


// =========================================================================
// Function: FUN_712f19f0
// Entry: 0x712f19f0 | Size: 96 bytes
// =========================================================================

int FUN_712f19f0(int param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x24);
    qNQrlu();
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x18);
    qNQrlu();
  }
  return param_1;
}


// =========================================================================
// Function: FUN_712f1a88
// Entry: 0x712f1a88 | Size: 172 bytes
// =========================================================================

void FUN_712f1a88(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  if (param_3 >> 3 != 0) {
    uVar6 = 0;
    do {
      puVar5 = (undefined4 *)(param_2 + uVar6 * 8);
      iVar1 = FUN_71885ba4(*puVar5,0);
      uVar3 = param_1[5];
      if (uVar3 != 0) {
        uVar2 = 0;
        do {
          piVar4 = *(int **)(param_1[9] + uVar2 * 4);
          if (*piVar4 == iVar1) {
            *(undefined4 *)(piVar4[2] + *param_1) = puVar5[1];
            *(undefined1 *)(param_1[0xe] + uVar2) = 1;
            uVar3 = param_1[5];
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < uVar3);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != param_3 >> 3);
  }
  return;
}


// =========================================================================
// Function: FUN_712f1b5c
// Entry: 0x712f1b5c | Size: 180 bytes
// =========================================================================

void FUN_712f1b5c(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  uVar2 = FUN_712c3a80();
  iVar3 = FUN_712c3ac4();
  uVar4 = FUN_712c3a80();
  uVar5 = imp_sysconf(0x28);
  uVar1 = uVar2 & -uVar5;
  do {
    if ((~uVar4 + uVar2 + iVar3 + uVar5 & -uVar5) <= uVar1) {
      return;
    }
    software_interrupt(0);
    bVar6 = uVar1 == 0;
    uVar1 = uVar5;
  } while (bVar6);
  return;
}


// =========================================================================
// Function: FUN_712f1c68
// Entry: 0x712f1c68 | Size: 348 bytes
// =========================================================================

int * FUN_712f1c68(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  
  uVar3 = *param_2;
  uVar1 = imp_strlen(uVar3);
  if (0xfffffff7 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(param_1);
  }
  if (uVar1 < 0xb) {
    puVar2 = (undefined1 *)((int)param_1 + 1);
    *(char *)param_1 = (char)(uVar1 << 1);
    if (uVar1 != 0) goto LAB_712f1ccc;
  }
  else {
    puVar2 = (undefined1 *)thunk_MwhHq((uVar1 | 7) + 1);
    *param_1 = (uVar1 | 7) + 2;
    param_1[1] = uVar1;
    param_1[2] = (int)puVar2;
LAB_712f1ccc:
    imp___aeabi_memmove(puVar2,uVar3,uVar1);
  }
  puVar2[uVar1] = 0;
  uVar3 = *param_3;
  uVar1 = imp_strlen(uVar3);
  if (0xfffffff7 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(param_1 + 3);
  }
  if (uVar1 < 0xb) {
    puVar2 = (undefined1 *)((int)param_1 + 0xd);
    *(char *)(param_1 + 3) = (char)(uVar1 << 1);
    if (uVar1 == 0) goto LAB_712f1d4c;
  }
  else {
    puVar2 = (undefined1 *)thunk_MwhHq((uVar1 | 7) + 1);
    param_1[3] = (uVar1 | 7) + 2;
    param_1[4] = uVar1;
    param_1[5] = (int)puVar2;
  }
  imp___aeabi_memmove(puVar2,uVar3,uVar1);
LAB_712f1d4c:
  puVar2[uVar1] = 0;
  return param_1;
}


// =========================================================================
// Function: FUN_712f1e64
// Entry: 0x712f1e64 | Size: 160 bytes
// =========================================================================

undefined4 * FUN_712f1e64(undefined4 *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar1 = (byte *)*param_1;
  if (pbVar1 != (byte *)0x0) {
    pbVar3 = pbVar1;
    pbVar2 = (byte *)param_1[1];
    if ((byte *)param_1[1] != pbVar1) {
      do {
        if ((pbVar2[-0xc] & 1) != 0) {
          qNQrlu(*(undefined4 *)(pbVar2 + -4));
        }
        pbVar3 = pbVar2 + -0x18;
        if ((*pbVar3 & 1) != 0) {
          qNQrlu(*(undefined4 *)(pbVar2 + -0x10));
        }
        pbVar2 = pbVar3;
      } while (pbVar3 != pbVar1);
      pbVar3 = (byte *)*param_1;
    }
    param_1[1] = pbVar1;
    qNQrlu(pbVar3);
  }
  return param_1;
}


// =========================================================================
// Function: FUN_712f1f4c
// Entry: 0x712f1f4c | Size: 660 bytes
// =========================================================================

int FUN_712f1f4c(int *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  if (param_3 == 0) {
    uVar1 = imp_strlen(param_2);
    if (0xfffffff7 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_712f6c1c(&uStack_2c);
    }
    if (uVar1 < 0xb) {
      uStack_2c = CONCAT31(uStack_2c._1_3_,(char)(uVar1 << 1));
      uVar7 = (uint)&uStack_2c | 1;
      if (uVar1 != 0) goto LAB_712f1fd4;
    }
    else {
      uVar7 = thunk_MwhHq((uVar1 | 7) + 1);
      uStack_2c = (uVar1 | 7) + 2;
      uStack_28 = uVar1;
      uStack_24 = uVar7;
LAB_712f1fd4:
      imp___aeabi_memcpy(uVar7,param_2,uVar1);
    }
    *(undefined1 *)(uVar7 + uVar1) = 0;
  }
  else {
    FUN_712f228c(&uStack_2c,param_1,param_2);
  }
  uVar1 = uStack_24;
  if ((uStack_2c & 1) == 0) {
    uVar1 = (uint)&uStack_2c | 1;
  }
  uVar1 = FUN_71885ba4(uVar1,0);
  piVar6 = (int *)param_1[0xd];
  for (piVar3 = (int *)piVar6[1]; piVar3 != (int *)0x0; piVar3 = (int *)*piVar3) {
    if ((uint)piVar3[4] <= uVar1) {
      if (uVar1 <= (uint)piVar3[4]) {
        iVar9 = *param_1;
        piVar3 = (int *)piVar6[1];
        goto LAB_712f20b8;
      }
      piVar3 = piVar3 + 1;
    }
  }
  piVar6 = (int *)param_1[0xc];
  iVar9 = *param_1;
  piVar5 = piVar6 + 1;
  piVar3 = (int *)*piVar5;
  piVar8 = piVar5;
  if ((int *)*piVar5 != (int *)0x0) {
    do {
      while (piVar2 = piVar3, uVar1 < (uint)piVar2[4]) {
        piVar3 = (int *)*piVar2;
        piVar5 = piVar2;
        piVar8 = piVar2;
        if ((int *)*piVar2 == (int *)0x0) goto LAB_712f20f0;
      }
      if (uVar1 <= (uint)piVar2[4]) goto LAB_712f2148;
      piVar3 = (int *)piVar2[1];
    } while ((int *)piVar2[1] != (int *)0x0);
LAB_712f20dc:
    piVar5 = piVar2 + 1;
    piVar8 = piVar2;
  }
LAB_712f20f0:
  piVar2 = (int *)thunk_MwhHq(0x18);
  piVar2[4] = uVar1;
  piVar2[5] = 0;
  *piVar2 = 0;
  piVar2[1] = 0;
  piVar2[2] = (int)piVar8;
  *piVar5 = (int)piVar2;
  piVar3 = piVar2;
  if (*(int *)*piVar6 != 0) {
    *piVar6 = *(int *)*piVar6;
    piVar3 = (int *)*piVar5;
  }
  FUN_712f807c(piVar6[1],piVar3);
  piVar6[2] = piVar6[2] + 1;
LAB_712f2148:
  iVar4 = *(int *)(piVar2[5] + 8);
  if ((uStack_2c & 1) != 0) {
    qNQrlu(uStack_24);
  }
  return iVar4 + iVar9;
  while (piVar3 = (int *)*piVar2, piVar5 = piVar2, piVar8 = piVar2, (int *)*piVar2 != (int *)0x0) {
LAB_712f20b8:
    piVar2 = piVar3;
    if ((uint)piVar2[4] <= uVar1) {
      if (uVar1 <= (uint)piVar2[4]) goto LAB_712f2148;
      piVar3 = (int *)piVar2[1];
      if ((int *)piVar2[1] == (int *)0x0) goto LAB_712f20dc;
      goto LAB_712f20b8;
    }
  }
  goto LAB_712f20f0;
}


// =========================================================================
// Function: FUN_712f228c
// Entry: 0x712f228c | Size: 7100 bytes
// =========================================================================

/* WARNING: Type propagation algorithm not settling */

void FUN_712f228c(uint *param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  undefined4 uVar12;
  byte *pbVar13;
  uint *puVar14;
  int iVar15;
  undefined4 *puVar16;
  undefined2 *puVar17;
  uint *puVar18;
  uint uVar19;
  byte *pbVar20;
  uint uVar21;
  byte *pbVar22;
  uint uVar23;
  uint *puVar24;
  byte *pbVar25;
  undefined1 *puVar26;
  uint uVar27;
  byte *pbVar28;
  byte abStack_a8 [4];
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  byte *pbStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  byte abStack_84 [4];
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint *puStack_58;
  uint *puStack_54;
  uint *puStack_50;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint *puStack_30;
  uint *puStack_2c;
  uint *puStack_28;
  
  puVar7 = (uint *)imp_strlen(param_3);
  if ((uint *)0xfffffff7 < puVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&puStack_30);
  }
  if (puVar7 < (uint *)0xb) {
    pbVar25 = (byte *)((uint)&puStack_30 | 1);
    puStack_30 = (uint *)CONCAT31(puStack_30._1_3_,(char)((int)puVar7 << 1));
    if (puVar7 != (uint *)0x0) goto LAB_712f22f8;
  }
  else {
    pbVar25 = (byte *)thunk_MwhHq(((uint)puVar7 | 7) + 1);
    puStack_30 = (uint *)(((uint)puVar7 | 7) + 2);
    puStack_2c = puVar7;
    puStack_28 = (uint *)pbVar25;
LAB_712f22f8:
    imp___aeabi_memcpy(pbVar25,param_3,puVar7);
  }
  pbVar25[(int)puVar7] = 0;
  iVar8 = jqZqCEXeMbwWkPQPsWPXtLIXsrprfLcULRyTsuHQaLjzixodrunQzQjJ_zMKoMhElbhaqoVSUZW
                    (&puStack_30,0x28,0);
  puVar7 = puStack_30;
  if (iVar8 == -1) {
    puStack_30 = (uint *)0x0;
    *param_1 = (uint)puVar7;
    param_1[1] = (uint)puStack_2c;
    param_1[2] = (uint)puStack_28;
    puStack_2c = (uint *)0x0;
    puStack_28 = (uint *)0x0;
    goto LAB_712f33ec;
  }
  pbVar25 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700b8894);
  if ((*pbVar25 & 1) == 0) {
    puVar16 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700b8884);
    *puVar16 = 0x149689e;
    GFDIUClbc_QcPNgD_wH(&LAB_712f6ab0,puVar16,&DAT_70b0e000);
    puVar26 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700b8894);
    *puVar26 = 1;
  }
  pbVar25 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700b8884);
  puVar7 = puStack_30;
  if (pbVar25[3] != 0) {
    pbVar25[3] = 0;
    *pbVar25 = *pbVar25 ^ 0xa5;
    pbVar25[1] = pbVar25[1] ^ 0x49;
    pbVar25[2] = pbVar25[2] ^ 0x49;
  }
  bVar2 = (byte)puStack_30;
  pbVar4 = (byte *)((uint)&puStack_30 | 1);
  puVar14 = puStack_28;
  if (((uint)puStack_30 & 1) == 0) {
    puVar14 = (uint *)pbVar4;
  }
  iVar8 = imp_strlen(pbVar25);
  if (iVar8 == 0) {
LAB_712f2504:
    puVar14 = puStack_2c;
    if (((uint)puVar7 & 1) == 0) {
      puVar14 = (uint *)(uint)(bVar2 >> 1);
    }
    if (puVar14 != (uint *)0x0) {
      do {
        puVar18 = puStack_28;
        if (((uint)puVar7 & 1) != 1) {
          puVar18 = (uint *)pbVar4;
        }
        puVar7 = (uint *)0x0;
        while (((*(byte *)((int)puVar18 + (int)puVar7) != 0x20 ||
                (uVar9 = *(byte *)((int)puVar7 + (int)((int)puVar18 + 1)) - 0x20, 0x1a < uVar9)) ||
               ((1 << (uVar9 & 0xff) & 0x4001301U) == 0))) {
          puVar7 = (uint *)((int)puVar7 + 1);
          if (puVar14 == puVar7) goto LAB_712f25b4;
        }
        uVar12 = YNczSMHgYOdkxFzjwgKTXIYRUUpvMkDDRVSlSNiMseRMlCGBQDpczigERmNVdkeFrwxqEEKdkkc
                           (&puStack_30,puVar7,1);
        lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi
                  (&puStack_30,uVar12);
        puVar14 = puStack_2c;
        if (((uint)puStack_30 & 1) == 0) {
          puVar14 = (uint *)((uint)puStack_30 >> 1 & 0x7f);
        }
        puVar7 = puStack_30;
      } while (puVar14 != (uint *)0x0);
    }
LAB_712f25b4:
    iVar8 = jqZqCEXeMbwWkPQPsWPXtLIXsrprfLcULRyTsuHQaLjzixodrunQzQjJ_zMKoMhElbhaqoVSUZW
                      (&puStack_30,0x28,0);
    pbVar25 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700b88d4);
    if ((*pbVar25 & 1) == 0) {
      puVar16 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700b88c4);
      *puVar16 = 0x1579a64;
      GFDIUClbc_QcPNgD_wH(&LAB_712f6afc,puVar16,&DAT_70b0e000);
      puVar26 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700b88d4);
      *puVar26 = 1;
    }
    pbVar25 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700b88c4);
    puVar7 = puStack_30;
    if (pbVar25[3] != 0) {
      pbVar25[3] = 0;
      *pbVar25 = *pbVar25 ^ 0x5f;
      pbVar25[1] = pbVar25[1] ^ 0xbb;
      pbVar25[2] = pbVar25[2] ^ 0x57;
    }
    puVar14 = puStack_28;
    if (((uint)puStack_30 & 1) == 0) {
      puVar14 = (uint *)pbVar4;
    }
    iVar11 = imp_strlen(pbVar25);
    if (iVar11 == 0) {
      iVar11 = 0;
    }
    else {
      puVar18 = puStack_2c;
      if (((uint)puVar7 & 1) == 0) {
        puVar18 = (uint *)((uint)puVar7 >> 1 & 0x7f);
      }
      pbVar28 = (byte *)((int)puVar14 + (int)puVar18);
      pbVar10 = pbVar28;
      if (iVar11 <= (int)puVar18) {
        bVar2 = *pbVar25;
        pbVar13 = (byte *)puVar14;
        do {
          pbVar10 = pbVar28;
          if (((0xfffffffe < (uint)((int)puVar18 - iVar11)) ||
              (pbVar13 = (byte *)imp_memchr(pbVar13,bVar2,((int)puVar18 - iVar11) + 1),
              pbVar13 == (byte *)0x0)) ||
             (iVar15 = imp_memcmp(pbVar13,pbVar25,iVar11), pbVar10 = pbVar13, iVar15 == 0)) break;
          pbVar13 = pbVar13 + 1;
          puVar18 = (uint *)(pbVar28 + -(int)pbVar13);
          pbVar10 = pbVar28;
        } while (iVar11 <= (int)puVar18);
      }
      iVar11 = (int)pbVar10 - (int)puVar14;
      if (pbVar10 == pbVar28) {
        iVar11 = -1;
      }
    }
    puVar7 = (uint *)pqWMLpYQkevHwapJIPZboPsMrUGTuQHnfTsZrDxRScZyrsqnKLxWnFifGOliKNuSwJU_pwdbnMLX
                               (&puStack_30,0x29,0xffffffff);
    if (puVar7 == (uint *)0xffffffff) {
      pbVar25 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700b88f4);
      if ((*pbVar25 & 1) == 0) {
        puVar17 = (undefined2 *)XcxSszXLPjQrEGhecEv_(&DAT_700b88e4);
        *puVar17 = 0x1bb;
        GFDIUClbc_QcPNgD_wH(&LAB_712f6b24,puVar17,&DAT_70b0e000);
        puVar26 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700b88f4);
        *puVar26 = 1;
      }
      pbVar25 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700b88e4);
      if (pbVar25[1] != 0) {
        pbVar25[1] = 0;
        *pbVar25 = *pbVar25 ^ 0xbb;
      }
      uVar9 = imp_strlen(pbVar25);
      if (0xfffffff7 < uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_712f6c1c(param_1);
      }
      if (uVar9 < 0xb) {
        puVar26 = (undefined1 *)((int)param_1 + 1);
        *(char *)param_1 = (char)(uVar9 << 1);
        if (uVar9 != 0) goto LAB_712f2d0c;
      }
      else {
        puVar26 = (undefined1 *)thunk_MwhHq((uVar9 | 7) + 1);
        param_1[2] = (uint)puVar26;
        *param_1 = (uVar9 | 7) + 2;
        param_1[1] = uVar9;
LAB_712f2d0c:
        imp___aeabi_memmove(puVar26,pbVar25,uVar9);
      }
      puVar26[uVar9] = 0;
      goto LAB_712f33ec;
    }
    puVar14 = puStack_2c;
    if (((uint)puStack_30 & 1) == 0) {
      puVar14 = (uint *)((uint)puStack_30 >> 1 & 0x7f);
    }
    if (puVar14 <= puVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_712f6b48(&uStack_3c);
    }
    puVar18 = puStack_28;
    if (((uint)puStack_30 & 1) == 0) {
      puVar18 = (uint *)pbVar4;
    }
    uVar5 = (int)puVar14 - ((int)puVar7 + 1);
    uVar9 = iVar11 + ~(uint)puVar7;
    if (uVar5 < iVar11 + ~(uint)puVar7) {
      uVar9 = uVar5;
    }
    if (0xfffffff7 < uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_712f6c1c(&uStack_3c);
    }
    if (uVar9 < 0xb) {
      uStack_3c = CONCAT31(uStack_3c._1_3_,(char)(uVar9 << 1));
      uVar5 = (uint)&uStack_3c | 1;
      if (uVar9 != 0) goto LAB_712f27f0;
    }
    else {
      uVar5 = thunk_MwhHq((uVar9 | 7) + 1);
      uStack_3c = (uVar9 | 7) + 2;
      uStack_38 = uVar9;
      uStack_34 = uVar5;
LAB_712f27f0:
      imp___aeabi_memmove(uVar5,(byte *)((int)puVar18 + (int)((int)puVar7 + 1)),uVar9);
    }
    *(undefined1 *)(uVar5 + uVar9) = 0;
    puVar18 = (uint *)(iVar8 + 1);
    puVar14 = puStack_2c;
    if (((uint)puStack_30 & 1) == 0) {
      puVar14 = (uint *)((uint)puStack_30 >> 1 & 0x7f);
    }
    if (puVar14 < puVar18) {
                    /* WARNING: Subroutine does not return */
      FUN_712f6b48(&uStack_48);
    }
    uVar9 = (int)puVar7 - iVar8;
    if ((uint)((int)puVar14 - (int)puVar18) < (uint)((int)puVar7 - iVar8)) {
      uVar9 = (int)puVar14 - (int)puVar18;
    }
    puVar7 = puStack_28;
    if (((uint)puStack_30 & 1) == 0) {
      puVar7 = (uint *)pbVar4;
    }
    if (0xfffffff7 < uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_712f6c1c(&uStack_48);
    }
    if (uVar9 < 0xb) {
      uVar5 = (uint)&uStack_48 | 1;
      uStack_48 = CONCAT31(uStack_48._1_3_,(char)(uVar9 << 1));
      if (uVar9 != 0) goto LAB_712f2894;
    }
    else {
      uVar5 = thunk_MwhHq((uVar9 | 7) + 1);
      uStack_48 = (uVar9 | 7) + 2;
      uStack_44 = uVar9;
      uStack_40 = uVar5;
LAB_712f2894:
      imp___aeabi_memmove(uVar5,(byte *)((int)puVar7 + (int)puVar18),uVar9);
    }
    *(undefined1 *)(uVar5 + uVar9) = 0;
    puVar7 = puStack_2c;
    puVar14 = puStack_28;
    if (((uint)puStack_30 & 1) == 0) {
      puVar7 = (uint *)((uint)puStack_30 >> 1 & 0x7f);
      puVar14 = (uint *)pbVar4;
    }
    if (puVar18 <= puVar7) {
      puVar7 = puVar18;
    }
    if ((uint *)0xfffffff7 < puVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_712f6c1c(&puStack_58);
    }
    if (puVar7 < (uint *)0xb) {
      puVar18 = (uint *)((uint)&puStack_58 | 1);
      puStack_58 = (uint *)CONCAT31(puStack_58._1_3_,(char)((int)puVar7 << 1));
      if (puVar7 == (uint *)0x0) goto LAB_712f2928;
    }
    else {
      puVar18 = (uint *)thunk_MwhHq(((uint)puVar7 | 7) + 1);
      puStack_58 = (uint *)(((uint)puVar7 | 7) + 2);
      puStack_54 = puVar7;
      puStack_50 = puVar18;
    }
    imp___aeabi_memmove(puVar18,puVar14,puVar7);
LAB_712f2928:
    *(byte *)((int)puVar18 + (int)puVar7) = 0;
    if (((uint)puStack_30 & 1) != 0) {
      qNQrlu(puStack_28);
    }
    puStack_28 = puStack_50;
    uVar9 = (uint)&uStack_48 | 1;
    puStack_50 = (uint *)0x0;
    puStack_30 = puStack_58;
    puStack_2c = puStack_54;
    puStack_54 = (uint *)0x0;
    puStack_58 = (uint *)0x0;
    do {
      uVar5 = uStack_44;
      if ((uStack_48 & 1) == 0) {
        uVar5 = uStack_48 >> 1 & 0x7f;
      }
      uVar21 = uVar5;
      if (uVar5 != 0) {
        uVar19 = uStack_40;
        if ((uStack_48 & 1) == 0) {
          uVar19 = uVar9;
        }
        uVar23 = 0;
        do {
          if (*(char *)(uVar19 + uVar23) != ' ') {
            uVar21 = uVar23;
            if (uVar5 < uVar23) {
                    /* WARNING: Subroutine does not return */
              FUN_712f6b48(&uStack_68);
            }
            break;
          }
          uVar23 = uVar23 + 1;
        } while (uVar5 != uVar23);
      }
      uVar23 = uVar5 - uVar21;
      uVar19 = uStack_40;
      if ((uStack_48 & 1) == 0) {
        uVar19 = uVar9;
      }
      if (0xfffffff7 < uVar23) {
                    /* WARNING: Subroutine does not return */
        FUN_712f6c1c(&uStack_68);
      }
      if (uVar23 < 0xb) {
        uStack_68 = CONCAT31(uStack_68._1_3_,(char)uVar23 * '\x02');
        uVar27 = (uint)&uStack_68 | 1;
        if (uVar5 != uVar21) goto LAB_712f2a24;
      }
      else {
        uVar27 = thunk_MwhHq((uVar23 | 7) + 1);
        uStack_68 = (uVar23 | 7) + 2;
        uStack_64 = uVar23;
        uStack_60 = uVar27;
LAB_712f2a24:
        imp___aeabi_memmove(uVar27,uVar19 + uVar21,uVar23);
      }
      *(undefined1 *)(uVar27 + uVar23) = 0;
      if ((uStack_48 & 1) != 0) {
        qNQrlu(uStack_40);
      }
      uStack_48 = uStack_68;
      uStack_44 = uStack_64;
      uStack_40 = uStack_60;
      uVar5 = jqZqCEXeMbwWkPQPsWPXtLIXsrprfLcULRyTsuHQaLjzixodrunQzQjJ_zMKoMhElbhaqoVSUZW
                        (&uStack_48,0x2c,0);
      if (uVar5 == 0xffffffff) {
        uVar12 = pqWMLpYQkevHwapJIPZboPsMrUGTuQHnfTsZrDxRScZyrsqnKLxWnFifGOliKNuSwJU_pwdbnMLX
                           (&uStack_48,0x29,0xffffffff);
        puVar7 = (uint *)YNczSMHgYOdkxFzjwgKTXIYRUUpvMkDDRVSlSNiMseRMlCGBQDpczigERmNVdkeFrwxqEEKdkkc
                                   (&uStack_48,uVar12,0xffffffff);
        if ((*puVar7 & 1) == 0) {
          uStack_68 = *puVar7;
          uStack_64 = puVar7[1];
          uStack_60 = puVar7[2];
        }
        else {
          FUN_712f6d58(&uStack_68,puVar7[2],puVar7[1]);
        }
        puVar14 = puStack_54;
        puVar7 = puStack_58;
        uVar21 = uStack_64;
        uVar5 = uStack_68 & 1;
        uVar9 = uStack_64;
        if ((uStack_68 & 1) == 0) {
          uVar9 = (uint)((byte)uStack_68 >> 1);
        }
        if (uVar9 != 0) {
          if (puStack_54 < puStack_50) {
            if ((uStack_68 & 1) == 0) {
              puVar14 = puStack_54 + 3;
              *puStack_54 = uStack_68;
              puStack_54[1] = uStack_64;
              puStack_54[2] = uStack_60;
            }
            else {
              FUN_712f6d58(puStack_54,uStack_60,uStack_64);
              puVar14 = puVar14 + 3;
            }
          }
          else {
            iVar8 = (int)puStack_54 - (int)puStack_58;
            uVar9 = (iVar8 >> 2) * -0x55555555 + 1;
            if (0x15555555 < uVar9) {
                    /* WARNING: Subroutine does not return */
              FUN_712f6ffc(&puStack_58);
            }
            iVar11 = (int)puStack_50 - (int)puStack_58 >> 2;
            if (uVar9 < (uint)(iVar11 * 0x55555556)) {
              uVar9 = iVar11 * 0x55555556;
            }
            if (0xaaaaaa9 < (uint)(iVar11 * -0x55555555)) {
              uVar9 = 0x15555555;
            }
            if (uVar9 == 0) {
              iVar11 = 0;
            }
            else {
              if (0x15555555 < uVar9) {
                    /* WARNING: Subroutine does not return */
                FUN_712f6cf0();
              }
              iVar11 = thunk_MwhHq(uVar9 * 0xc);
            }
            puVar18 = (uint *)(iVar11 + uVar9 * 0xc);
            puVar14 = (uint *)(iVar11 + (iVar8 >> 2) * 4);
            if (uVar5 == 0) {
              *puVar14 = uStack_68;
              puVar14[1] = uStack_64;
              puVar14[2] = uStack_60;
            }
            else {
              FUN_712f6d58(puVar14,uStack_60,uVar21);
              iVar8 = (int)puStack_54 - (int)puStack_58;
              puVar7 = puStack_58;
            }
            puVar24 = (uint *)((int)puVar14 - iVar8);
            imp___aeabi_memcpy4(puVar24,puVar7,iVar8);
            puVar14 = puVar14 + 3;
            puStack_58 = puVar24;
            puStack_50 = puVar18;
            if (puVar7 != (uint *)0x0) {
              puStack_54 = puVar14;
              qNQrlu(puVar7);
            }
          }
          puStack_54 = puVar14;
        }
        if (((byte)uStack_68 & 1) != 0) {
          qNQrlu(uStack_60);
        }
        puVar14 = puStack_54;
        puVar7 = puStack_58;
        if (puStack_58 == puStack_54) goto LAB_712f32c4;
        pbVar25 = (byte *)((uint)&uStack_9c | 1);
        pbVar4 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700b8924);
        pbVar10 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700b8944);
        goto LAB_712f2e40;
      }
      if ((uStack_48 & 1) == 0) {
        uStack_68 = uStack_48;
        uStack_64 = uStack_44;
        uStack_60 = uStack_40;
        uVar21 = 0;
      }
      else {
        FUN_712f6d58(&uStack_68,uStack_40,uStack_44);
        uVar21 = uStack_48 & 1;
      }
      uVar19 = uStack_44;
      if (uVar21 == 0) {
        uVar19 = (uStack_48 & 0xff) >> 1;
      }
      if (uVar19 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_712f6b48(&uStack_78);
      }
      uVar5 = uVar5 + 1;
      uVar27 = uVar19 - uVar5;
      uVar23 = uStack_40;
      if (uVar21 == 0) {
        uVar23 = uVar9;
      }
      if (0xfffffff7 < uVar27) {
                    /* WARNING: Subroutine does not return */
        FUN_712f6c1c(&uStack_78);
      }
      if (uVar27 < 0xb) {
        uStack_78 = CONCAT31(uStack_78._1_3_,(char)uVar27 * '\x02');
        uVar21 = (uint)&uStack_78 | 1;
        if (uVar19 != uVar5) goto LAB_712f2b24;
      }
      else {
        uVar21 = thunk_MwhHq((uVar27 | 7) + 1);
        uStack_78 = (uVar27 | 7) + 2;
        uStack_74 = uVar27;
        uStack_70 = uVar21;
LAB_712f2b24:
        imp___aeabi_memmove(uVar21,uVar23 + uVar5,uVar27);
      }
      *(undefined1 *)(uVar21 + uVar27) = 0;
      if ((uStack_48 & 1) != 0) {
        qNQrlu(uStack_40);
      }
      uStack_48 = uStack_78;
      uStack_44 = uStack_74;
      uStack_40 = uStack_70;
      puVar14 = (uint *)YNczSMHgYOdkxFzjwgKTXIYRUUpvMkDDRVSlSNiMseRMlCGBQDpczigERmNVdkeFrwxqEEKdkkc
                                  (&uStack_68,uVar5,0xffffffff);
      puVar7 = puStack_54;
      if (puStack_54 < puStack_50) {
        if ((*puVar14 & 1) == 0) {
          uVar21 = puVar14[1];
          uVar5 = puVar14[2];
          *puStack_54 = *puVar14;
          puStack_54[1] = uVar21;
          puVar7 = puStack_54 + 3;
          puStack_54[2] = uVar5;
        }
        else {
          FUN_712f6d58(puStack_54,puVar14[2],puVar14[1]);
          puVar7 = puVar7 + 3;
        }
      }
      else {
        puVar7 = (uint *)FUN_712f6e24(&puStack_58);
      }
      puStack_54 = puVar7;
      if ((uStack_68 & 1) != 0) {
        qNQrlu(uStack_60);
      }
    } while( true );
  }
  puVar18 = puStack_2c;
  if (((uint)puVar7 & 1) == 0) {
    puVar18 = (uint *)(uint)(bVar2 >> 1);
  }
  if (iVar8 <= (int)puVar18) {
    bVar1 = *pbVar25;
    pbVar28 = (byte *)((int)puVar14 + (int)puVar18);
    pbVar10 = (byte *)puVar14;
    do {
      if ((0xfffffffe < (uint)((int)puVar18 - iVar8)) ||
         (pbVar10 = (byte *)imp_memchr(pbVar10,bVar1,((int)puVar18 - iVar8) + 1),
         pbVar10 == (byte *)0x0)) break;
      iVar11 = imp_memcmp(pbVar10,pbVar25,iVar8);
      if (iVar11 == 0) {
        iVar8 = 0;
        if (pbVar10 != pbVar28) {
          iVar8 = (int)pbVar10 - (int)puVar14;
        }
        if (pbVar10 != pbVar28 && iVar8 != -1) goto LAB_712f2504;
        break;
      }
      pbVar10 = pbVar10 + 1;
      puVar18 = (uint *)(pbVar28 + -(int)pbVar10);
    } while (iVar8 <= (int)puVar18);
  }
  pbVar25 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700b88b4);
  if ((*pbVar25 & 1) == 0) {
    puVar17 = (undefined2 *)XcxSszXLPjQrEGhecEv_(&DAT_700b88a4);
    *puVar17 = 0x1d3;
    GFDIUClbc_QcPNgD_wH(&LAB_712f6ad8,puVar17,&DAT_70b0e000);
    puVar26 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700b88b4);
    *puVar26 = 1;
  }
  pbVar25 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700b88a4);
  if (pbVar25[1] != 0) {
    pbVar25[1] = 0;
    *pbVar25 = *pbVar25 ^ 0xd3;
  }
  uVar9 = imp_strlen(pbVar25);
  if (0xfffffff7 < uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(param_1);
  }
  if (uVar9 < 0xb) {
    puVar26 = (undefined1 *)((int)param_1 + 1);
    *(char *)param_1 = (char)(uVar9 << 1);
    if (uVar9 != 0) goto LAB_712f24d8;
  }
  else {
    puVar26 = (undefined1 *)thunk_MwhHq((uVar9 | 7) + 1);
    param_1[2] = (uint)puVar26;
    *param_1 = (uVar9 | 7) + 2;
    param_1[1] = uVar9;
LAB_712f24d8:
    imp___aeabi_memmove(puVar26,pbVar25,uVar9);
  }
  puVar26[uVar9] = 0;
LAB_712f33ec:
  if (((uint)puStack_30 & 1) != 0) {
    qNQrlu(puStack_28);
  }
  return;
LAB_712f2e40:
  do {
    if ((*puVar7 & 1) == 0) {
      uStack_68 = *puVar7;
      uStack_64 = puVar7[1];
      uStack_60 = puVar7[2];
    }
    else {
      FUN_712f6d58(&uStack_68,puVar7[2],puVar7[1]);
    }
    FUN_712f5a24(&uStack_78,puVar7);
    if ((uStack_78 & 1) == 0) {
      uStack_90 = uStack_78;
      uStack_8c = uStack_74;
      uStack_88 = uStack_70;
    }
    else {
      FUN_712f6d58(&uStack_90,uStack_70,uStack_74);
    }
    FUN_712f5e90(abStack_84,&uStack_90);
    if ((uStack_90 & 1) != 0) {
      qNQrlu(uStack_88);
    }
    uVar5 = pqWMLpYQkevHwapJIPZboPsMrUGTuQHnfTsZrDxRScZyrsqnKLxWnFifGOliKNuSwJU_pwdbnMLX
                      (abStack_84,0x20,0xffffffff);
    uVar9 = uStack_80;
    if ((abStack_84[0] & 1) == 0) {
      uVar9 = (uint)(abStack_84[0] >> 1);
    }
    if (uVar5 <= uVar9) {
      uVar9 = uVar5;
    }
    uVar5 = uStack_7c;
    if ((abStack_84[0] & 1) == 0) {
      uVar5 = (uint)abStack_84 | 1;
    }
    if (0xfffffff7 < uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_712f6c1c(&uStack_9c);
    }
    if (uVar9 < 0xb) {
      uStack_9c = CONCAT31(uStack_9c._1_3_,(char)(uVar9 << 1));
      pbVar28 = pbVar25;
      if (uVar9 != 0) goto LAB_712f2f44;
    }
    else {
      pbVar28 = (byte *)thunk_MwhHq((uVar9 | 7) + 1);
      uStack_9c = (uVar9 | 7) + 2;
      uStack_98 = uVar9;
      pbStack_94 = pbVar28;
LAB_712f2f44:
      imp___aeabi_memmove(pbVar28,uVar5,uVar9);
    }
    pbVar28[uVar9] = 0;
    FUN_712f6610(abStack_a8,puVar7);
    uVar5 = uStack_a0;
    uVar9 = uStack_a4;
    if ((abStack_a8[0] & 1) == 0) {
      uVar9 = (uint)(abStack_a8[0] >> 1);
      uVar5 = (uint)abStack_a8 | 1;
    }
    fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
              (abStack_84,uVar5,uVar9);
    if ((abStack_a8[0] & 1) != 0) {
      qNQrlu(uStack_a0);
    }
    pbVar13 = pbStack_94;
    uVar5 = uStack_98;
    uVar9 = uStack_9c;
    pbVar28 = DAT_70b2e850;
    if (DAT_70b2e84c != DAT_70b2e850) {
      bVar1 = (byte)uStack_9c;
      bVar2 = (byte)uStack_9c >> 1;
      pbVar22 = DAT_70b2e84c;
      uVar21 = uStack_98;
      if ((uStack_9c & 1) == 0) {
        uVar21 = (uint)((byte)uStack_9c >> 1);
      }
      do {
        bVar3 = *pbVar22;
        uVar19 = *(uint *)(pbVar22 + 4);
        if ((bVar3 & 1) == 0) {
          uVar19 = (uint)(bVar3 >> 1);
        }
        if (uVar21 == uVar19) {
          pbVar20 = *(byte **)(pbVar22 + 8);
          if ((bVar3 & 1) == 0) {
            pbVar20 = pbVar22 + 1;
          }
          if ((uVar9 & 1) == 0) {
            pbVar6 = pbVar25;
            uVar19 = (uint)bVar2;
            if (bVar1 < 2) {
LAB_712f3060:
              YNczSMHgYOdkxFzjwgKTXIYRUUpvMkDDRVSlSNiMseRMlCGBQDpczigERmNVdkeFrwxqEEKdkkc
                        (abStack_84,0,uVar21);
              pbVar28 = *(byte **)(pbVar22 + 0x14);
              uVar9 = *(uint *)(pbVar22 + 0x10);
              if ((pbVar22[0xc] & 1) == 0) {
                pbVar28 = pbVar22 + 0xd;
                uVar9 = (uint)(pbVar22[0xc] >> 1);
              }
              CYbDsHrJTXyBGDHcNLCvw_YyxhkAXeCeDFXVLOflOXCzbDvBTzUoqvshzV_THRUARbywmOgTcPiyWHK
                        (abStack_84,0,pbVar28,uVar9);
              break;
            }
            while (*pbVar6 == *pbVar20) {
              pbVar20 = pbVar20 + 1;
              uVar19 = uVar19 - 1;
              pbVar6 = pbVar6 + 1;
              if (uVar19 == 0) goto LAB_712f3060;
            }
          }
          else {
            iVar8 = imp_memcmp(pbVar13,pbVar20,uVar5);
            if (iVar8 == 0) goto LAB_712f3060;
          }
        }
        pbVar22 = pbVar22 + 0x18;
      } while (pbVar22 != pbVar28);
    }
    uVar5 = uStack_7c;
    uVar9 = uStack_80;
    if ((abStack_84[0] & 1) == 0) {
      uVar9 = (uint)(abStack_84[0] >> 1);
      uVar5 = (uint)abStack_84 | 1;
    }
    fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
              (&puStack_30,uVar5,uVar9);
    pbVar28 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700b8934);
    if ((*pbVar28 & 1) == 0) {
      puVar17 = (undefined2 *)XcxSszXLPjQrEGhecEv_(&DAT_700b8924);
      *puVar17 = 0xb569;
      *(undefined1 *)(puVar17 + 1) = 1;
      GFDIUClbc_QcPNgD_wH(&LAB_712f708c,puVar17,&DAT_70b0e000);
      puVar26 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700b8934);
      *puVar26 = 1;
    }
    uVar9 = uStack_68;
    if (pbVar4[2] != 0) {
      pbVar4[2] = 0;
      *pbVar4 = *pbVar4 ^ 0x45;
      pbVar4[1] = pbVar4[1] ^ 0xb5;
    }
    uVar5 = uStack_60;
    if ((uStack_68 & 1) == 0) {
      uVar5 = (uint)&uStack_68 | 1;
    }
    iVar8 = imp_strlen(pbVar4);
    if (iVar8 != 0) {
      uVar21 = uStack_64;
      if ((uVar9 & 1) == 0) {
        uVar21 = uVar9 >> 1 & 0x7f;
      }
      iVar11 = -uVar21;
      do {
        if (iVar11 == 0) goto LAB_712f31d4;
        iVar15 = imp_memchr(pbVar4,*(undefined1 *)((uVar5 - 1) - iVar11),iVar8);
        iVar11 = iVar11 + 1;
      } while (iVar15 == 0);
      if (iVar11 != 1) {
        pbVar28 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700b8954);
        if ((*pbVar28 & 1) == 0) {
          puVar16 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700b8944);
          *puVar16 = 0x1ab3563;
          GFDIUClbc_QcPNgD_wH(&LAB_712f70b0,puVar16,&DAT_70b0e000);
          puVar26 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700b8954);
          *puVar26 = 1;
        }
        if (pbVar10[3] != 0) {
          pbVar10[3] = 0;
          *pbVar10 = *pbVar10 ^ 0x4f;
          pbVar10[1] = pbVar10[1] ^ 0x15;
          pbVar10[2] = pbVar10[2] ^ 0xab;
        }
        PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb(&puStack_30);
      }
    }
LAB_712f31d4:
    if ((uStack_9c & 1) != 0) {
      qNQrlu(pbStack_94);
    }
    if ((abStack_84[0] & 1) != 0) {
      qNQrlu(uStack_7c);
    }
    if ((uStack_78 & 1) != 0) {
      qNQrlu(uStack_70);
    }
    if ((uStack_68 & 1) != 0) {
      qNQrlu(uStack_60);
    }
    puVar7 = puVar7 + 3;
  } while (puVar7 != puVar14);
LAB_712f32c4:
  pbVar25 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700b8974);
  if ((*pbVar25 & 1) == 0) {
    puVar17 = (undefined2 *)XcxSszXLPjQrEGhecEv_(&DAT_700b8964);
    *puVar17 = 0xf1b2;
    *(undefined1 *)(puVar17 + 1) = 1;
    GFDIUClbc_QcPNgD_wH(&LAB_712f70d8,puVar17,&DAT_70b0e000);
    puVar26 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700b8974);
    *puVar26 = 1;
  }
  pbVar25 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700b8964);
  if (pbVar25[2] != 0) {
    pbVar25[2] = 0;
    *pbVar25 = *pbVar25 ^ 0x9b;
    pbVar25[1] = pbVar25[1] ^ 0xf1;
  }
  PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb(&puStack_30);
  uVar5 = uStack_34;
  uVar9 = uStack_38;
  if ((uStack_3c & 1) == 0) {
    uVar9 = uStack_3c >> 1 & 0x7f;
    uVar5 = (uint)&uStack_3c | 1;
  }
  fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
            (&puStack_30,uVar5,uVar9);
  puVar7 = puStack_58;
  *param_1 = (uint)puStack_30;
  param_1[1] = (uint)puStack_2c;
  param_1[2] = (uint)puStack_28;
  puStack_30 = (uint *)0x0;
  puStack_2c = (uint *)0x0;
  puStack_28 = (uint *)0x0;
  puVar14 = puStack_54;
  if (puStack_58 != (uint *)0x0) {
    while (puVar18 = puVar14, puVar18 != puVar7) {
      puVar14 = puVar18 + -3;
      if ((*puVar14 & 1) != 0) {
        qNQrlu(puVar18[-1]);
      }
    }
    puStack_54 = puVar7;
    qNQrlu(puStack_58);
  }
  if ((uStack_48 & 1) != 0) {
    qNQrlu(uStack_40);
  }
  if ((uStack_3c & 1) != 0) {
    qNQrlu(uStack_34);
  }
  goto LAB_712f33ec;
}


// =========================================================================
// Function: FUN_712f4948
// Entry: 0x712f4948 | Size: 264 bytes
// =========================================================================

int FUN_712f4948(int *param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  iVar6 = *param_1;
  piVar5 = (int *)param_1[0xd];
  uVar2 = FUN_71885ba4(param_2,0);
  piVar3 = piVar5 + 1;
  piVar1 = (int *)*piVar3;
  do {
    piVar4 = piVar3;
    if (piVar1 == (int *)0x0) {
LAB_712f49c0:
      piVar1 = (int *)thunk_MwhHq(0x18);
      *piVar1 = 0;
      piVar1[4] = uVar2;
      piVar1[5] = 0;
      piVar1[1] = 0;
      piVar1[2] = (int)piVar3;
      *piVar4 = (int)piVar1;
      piVar3 = piVar1;
      if (*(int *)*piVar5 != 0) {
        *piVar5 = *(int *)*piVar5;
        piVar3 = (int *)*piVar4;
      }
      FUN_712f807c(piVar5[1],piVar3);
      piVar5[2] = piVar5[2] + 1;
      piVar3 = piVar1;
LAB_712f4a18:
      return *(int *)(piVar3[5] + 8) + iVar6;
    }
    while (piVar3 = piVar1, (uint)piVar3[4] <= uVar2) {
      if (uVar2 <= (uint)piVar3[4]) goto LAB_712f4a18;
      piVar1 = (int *)piVar3[1];
      if ((int *)piVar3[1] == (int *)0x0) {
        piVar4 = piVar3 + 1;
        goto LAB_712f49c0;
      }
    }
    piVar1 = (int *)*piVar3;
  } while( true );
}


// =========================================================================
// Function: FUN_712f4a98
// Entry: 0x712f4a98 | Size: 80 bytes
// =========================================================================

void FUN_712f4a98(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_4;
  
  uStack_4 = param_4;
  imp___vsprintf_chk(param_1,0,0x14,param_3,&uStack_4);
  return;
}


// =========================================================================
// Function: FUN_712f4b10
// Entry: 0x712f4b10 | Size: 324 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_712f4b10(int *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  byte abStack_28 [4];
  int iStack_24;
  
  iStack_24 = _ext___stack_chk_guard;
  bVar1 = *(byte *)(param_2 + 0x10);
  uVar2 = (uint)bVar1;
  pbVar6 = abStack_28 + -(uVar2 + 7 & 0xfffffff8);
  if (uVar2 != 0) {
    pbVar3 = (byte *)(param_2 + 0x11);
    pbVar4 = pbVar6;
    do {
      uVar2 = uVar2 - 1;
      *pbVar4 = *pbVar3 ^ bVar1;
      pbVar3 = pbVar3 + 1;
      pbVar4 = pbVar4 + 1;
    } while (uVar2 != 0);
  }
  uVar2 = imp_strlen(pbVar6);
  if (0xfffffff7 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(param_1);
  }
  if (uVar2 < 0xb) {
    puVar5 = (undefined1 *)((int)param_1 + 1);
    *(char *)param_1 = (char)(uVar2 << 1);
    if (uVar2 == 0) goto LAB_712f4bcc;
  }
  else {
    puVar5 = (undefined1 *)thunk_MwhHq((uVar2 | 7) + 1);
    param_1[2] = (int)puVar5;
    *param_1 = (uVar2 | 7) + 2;
    param_1[1] = uVar2;
  }
  imp___aeabi_memcpy(puVar5,pbVar6,uVar2);
LAB_712f4bcc:
  puVar5[uVar2] = 0;
  if (_ext___stack_chk_guard == iStack_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_712f5a24
// Entry: 0x712f5a24 | Size: 844 bytes
// =========================================================================

void FUN_712f5a24(byte *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  int iStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  uVar2 = pqWMLpYQkevHwapJIPZboPsMrUGTuQHnfTsZrDxRScZyrsqnKLxWnFifGOliKNuSwJU_pwdbnMLX
                    (param_2,0x20,0xffffffff);
  bVar1 = *param_2;
  uVar8 = *(uint *)(param_2 + 4);
  pbVar9 = *(byte **)(param_2 + 8);
  if ((bVar1 & 1) == 0) {
    uVar8 = (uint)(bVar1 >> 1);
  }
  if (uVar2 <= uVar8) {
    uVar8 = uVar2;
  }
  if ((bVar1 & 1) == 0) {
    pbVar9 = param_2 + 1;
  }
  if (0xfffffff7 < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(param_1);
  }
  if (uVar8 < 0xb) {
    pbVar7 = param_1 + 1;
    *param_1 = (byte)(uVar8 << 1);
    if (uVar8 == 0) goto LAB_712f5abc;
  }
  else {
    pbVar7 = (byte *)thunk_MwhHq((uVar8 | 7) + 1);
    *(uint *)param_1 = (uVar8 | 7) + 2;
    *(uint *)(param_1 + 4) = uVar8;
    *(byte **)(param_1 + 8) = pbVar7;
  }
  imp___aeabi_memmove(pbVar7,pbVar9,uVar8);
LAB_712f5abc:
  pbVar7[uVar8] = 0;
  uVar2 = (uint)&iStack_30 | 1;
  uVar8 = (uint)&iStack_30 | 1;
  do {
    while (uVar3 = jqZqCEXeMbwWkPQPsWPXtLIXsrprfLcULRyTsuHQaLjzixodrunQzQjJ_zMKoMhElbhaqoVSUZW
                             (param_1,0x2a,0), uVar3 != 0xffffffff) {
      uVar6 = *(uint *)(param_1 + 4);
      pbVar9 = *(byte **)(param_1 + 8);
      if ((*param_1 & 1) == 0) {
        uVar6 = (uint)(*param_1 >> 1);
        pbVar9 = param_1 + 1;
      }
      if (uVar3 <= uVar6) {
        uVar6 = uVar3;
      }
      if (0xfffffff7 < uVar6) {
LAB_712f5ca8:
                    /* WARNING: Subroutine does not return */
        FUN_712f6c1c(&iStack_30);
      }
      if (uVar6 < 0xb) {
        iStack_30 = CONCAT31(iStack_30._1_3_,(char)(uVar6 << 1));
        uVar3 = uVar8;
        if (uVar6 != 0) goto LAB_712f5bc8;
      }
      else {
        uVar3 = thunk_MwhHq((uVar6 | 7) + 1);
        iStack_30 = (uVar6 | 7) + 2;
        uStack_2c = uVar6;
        uStack_28 = uVar3;
LAB_712f5bc8:
        imp___aeabi_memmove(uVar3,pbVar9,uVar6);
      }
      *(undefined1 *)(uVar3 + uVar6) = 0;
LAB_712f5c68:
      if ((*param_1 & 1) != 0) {
        qNQrlu(*(undefined4 *)(param_1 + 8));
      }
      *(int *)param_1 = iStack_30;
      *(uint *)(param_1 + 4) = uStack_2c;
      *(uint *)(param_1 + 8) = uStack_28;
    }
    uVar3 = jqZqCEXeMbwWkPQPsWPXtLIXsrprfLcULRyTsuHQaLjzixodrunQzQjJ_zMKoMhElbhaqoVSUZW
                      (param_1,0x26,0);
    if (uVar3 != 0xffffffff) {
      uVar6 = *(uint *)(param_1 + 4);
      pbVar9 = *(byte **)(param_1 + 8);
      if ((*param_1 & 1) == 0) {
        uVar6 = (uint)(*param_1 >> 1);
        pbVar9 = param_1 + 1;
      }
      if (uVar3 <= uVar6) {
        uVar6 = uVar3;
      }
      if (0xfffffff7 < uVar6) goto LAB_712f5ca8;
      if (uVar6 < 0xb) {
        iStack_30 = CONCAT31(iStack_30._1_3_,(char)(uVar6 << 1));
        uVar3 = uVar2;
        if (uVar6 != 0) goto LAB_712f5c54;
      }
      else {
        uVar3 = thunk_MwhHq((uVar6 | 7) + 1);
        iStack_30 = (uVar6 | 7) + 2;
        uStack_2c = uVar6;
        uStack_28 = uVar3;
LAB_712f5c54:
        imp___aeabi_memmove(uVar3,pbVar9,uVar6);
      }
      *(undefined1 *)(uVar3 + uVar6) = 0;
      goto LAB_712f5c68;
    }
    iVar4 = jqZqCEXeMbwWkPQPsWPXtLIXsrprfLcULRyTsuHQaLjzixodrunQzQjJ_zMKoMhElbhaqoVSUZW
                      (param_1,0x20,0);
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = pqWMLpYQkevHwapJIPZboPsMrUGTuQHnfTsZrDxRScZyrsqnKLxWnFifGOliKNuSwJU_pwdbnMLX
                        (param_1,0x20,0xffffffff);
      uVar3 = *(uint *)(param_1 + 4);
      if ((*param_1 & 1) == 0) {
        uVar3 = (uint)(*param_1 >> 1);
      }
      if (iVar4 != uVar3 - 1) {
        return;
      }
    }
    uVar5 = YNczSMHgYOdkxFzjwgKTXIYRUUpvMkDDRVSlSNiMseRMlCGBQDpczigERmNVdkeFrwxqEEKdkkc
                      (param_1,iVar4,1);
    lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi(param_1,uVar5);
  } while( true );
}


// =========================================================================
// Function: FUN_712f5e90
// Entry: 0x712f5e90 | Size: 1416 bytes
// =========================================================================

void FUN_712f5e90(undefined4 *param_1,byte *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 *puVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  bool bVar17;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  undefined1 *puStack_28;
  
  pbVar3 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700b8914);
  if ((*pbVar3 & 1) == 0) {
    puVar7 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700b8904);
    *puVar7 = 0xf2eb5288;
    *(undefined1 *)((int)puVar7 + 6) = 1;
    *(undefined2 *)(puVar7 + 1) = 0xbbc9;
    GFDIUClbc_QcPNgD_wH(&LAB_712f7064,puVar7,&DAT_70b0e000);
    puVar13 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700b8914);
    *puVar13 = 1;
  }
  pbVar3 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700b8904);
  if (pbVar3[6] != 0) {
    pbVar3[6] = 0;
    *pbVar3 = *pbVar3 ^ 0xeb;
    pbVar3[1] = pbVar3[1] ^ 0x3d;
    pbVar3[2] = pbVar3[2] ^ 0x85;
    pbVar3[3] = pbVar3[3] ^ 0x81;
    pbVar3[4] = pbVar3[4] ^ 0xbd;
    pbVar3[5] = pbVar3[5] ^ 0xbb;
  }
  uVar4 = imp_strlen(pbVar3);
  if (0xfffffff7 < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_30);
  }
  if (uVar4 < 0xb) {
    puVar13 = (undefined1 *)((uint)&uStack_30 | 1);
    uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar4 << 1));
    if (uVar4 != 0) goto LAB_712f5f84;
  }
  else {
    puVar13 = (undefined1 *)thunk_MwhHq((uVar4 | 7) + 1);
    uStack_30 = (uVar4 | 7) + 2;
    uStack_2c = uVar4;
    puStack_28 = puVar13;
LAB_712f5f84:
    imp___aeabi_memmove(puVar13,pbVar3,uVar4);
  }
  uVar15 = uStack_30;
  puVar13[uVar4] = 0;
  bVar1 = *param_2;
  pbVar3 = *(byte **)(param_2 + 8);
  if ((bVar1 & 1) == 0) {
    pbVar3 = param_2 + 1;
  }
  bVar17 = (uStack_30 & 1) == 0;
  uVar4 = uStack_2c;
  if (bVar17) {
    uVar4 = uStack_30 >> 1 & 0x7f;
  }
  puVar8 = (undefined1 *)((uint)&uStack_30 | 1);
  puVar13 = puStack_28;
  if (bVar17) {
    puVar13 = puVar8;
  }
  if (uVar4 != 0) {
    uVar9 = *(uint *)(param_2 + 4);
    if ((bVar1 & 1) == 0) {
      uVar9 = (uint)(bVar1 >> 1);
    }
    if ((int)uVar4 <= (int)uVar9) {
      uVar2 = *puVar13;
      pbVar16 = pbVar3 + uVar9;
      pbVar5 = pbVar3;
      do {
        if ((0xfffffffe < uVar9 - uVar4) ||
           (pbVar5 = (byte *)imp_memchr(pbVar5,uVar2,(uVar9 - uVar4) + 1), pbVar5 == (byte *)0x0))
        break;
        iVar6 = imp_memcmp(pbVar5,puVar13,uVar4);
        if (iVar6 == 0) {
          if ((pbVar5 != pbVar16) && (pbVar5 == pbVar3)) goto LAB_712f6090;
          break;
        }
        pbVar5 = pbVar5 + 1;
        uVar9 = (int)pbVar16 - (int)pbVar5;
      } while ((int)uVar4 <= (int)uVar9);
    }
    uVar10 = *(undefined4 *)(param_2 + 4);
    uVar11 = *(undefined4 *)(param_2 + 8);
    *param_1 = *(undefined4 *)param_2;
    param_1[1] = uVar10;
    param_1[2] = uVar11;
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    goto joined_r0x712f6238;
  }
LAB_712f6090:
  iVar6 = pqWMLpYQkevHwapJIPZboPsMrUGTuQHnfTsZrDxRScZyrsqnKLxWnFifGOliKNuSwJU_pwdbnMLX
                    (param_2,0x20,0xffffffff);
  bVar1 = *param_2;
  uVar15 = iVar6 + 1;
  uVar4 = *(uint *)(param_2 + 4);
  if ((bVar1 & 1) == 0) {
    uVar4 = (uint)(bVar1 >> 1);
  }
  if (uVar4 < uVar15) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6b48(&uStack_3c);
  }
  uVar9 = uVar4 - uVar15;
  pbVar3 = *(byte **)(param_2 + 8);
  if ((bVar1 & 1) == 0) {
    pbVar3 = param_2 + 1;
  }
  if (0xfffffff7 < uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_3c);
  }
  if (uVar9 < 0xb) {
    uVar14 = (uint)&uStack_3c | 1;
    uStack_3c = CONCAT31(uStack_3c._1_3_,(char)uVar9 * '\x02');
    if (uVar4 != uVar15) goto LAB_712f611c;
  }
  else {
    uVar14 = thunk_MwhHq((uVar9 | 7) + 1);
    uStack_3c = (uVar9 | 7) + 2;
    uStack_38 = uVar9;
    uStack_34 = uVar14;
LAB_712f611c:
    imp___aeabi_memmove(uVar14,pbVar3 + uVar15,uVar9);
  }
  uVar15 = uStack_3c;
  *(undefined1 *)(uVar14 + uVar9) = 0;
  uVar4 = uStack_38;
  if ((uStack_3c & 1) == 0) {
    uVar4 = uStack_3c >> 1 & 0x7f;
  }
  uVar9 = uVar4 + 1;
  if (0xfffffff7 < uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_48);
  }
  if (uVar9 < 0xb) {
    uStack_40 = 0;
    uStack_44 = 0;
    uStack_48 = (uint)(byte)((char)uVar9 * '\x02');
    uVar14 = (uint)&uStack_48 | 1;
    if (uVar4 != 0) goto LAB_712f61a0;
  }
  else {
    uVar14 = thunk_MwhHq((uVar9 | 7) + 1);
    uStack_48 = (uVar9 | 7) + 2;
    uStack_44 = uVar9;
    uStack_40 = uVar14;
LAB_712f61a0:
    uVar9 = uStack_34;
    if ((uVar15 & 1) == 0) {
      uVar9 = (uint)&uStack_3c | 1;
    }
    imp___aeabi_memmove(uVar14,uVar9,uVar4);
  }
  *(undefined2 *)(uVar14 + uVar4) = 0x20;
  uVar4 = uStack_2c;
  puVar13 = puStack_28;
  if ((uStack_30 & 1) == 0) {
    uVar4 = uStack_30 >> 1 & 0x7f;
    puVar13 = puVar8;
  }
  puVar7 = (undefined4 *)
           fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
                     (&uStack_48,puVar13,uVar4);
  uVar10 = *puVar7;
  uVar11 = puVar7[1];
  uVar12 = puVar7[2];
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7[2] = 0;
  *param_1 = uVar10;
  param_1[1] = uVar11;
  param_1[2] = uVar12;
  if ((uStack_48 & 1) != 0) {
    qNQrlu(uStack_40);
  }
  uVar15 = uStack_30;
  if ((uStack_3c & 1) != 0) {
    qNQrlu(uStack_34);
    uVar15 = uStack_30;
  }
joined_r0x712f6238:
  if ((uVar15 & 1) != 0) {
    qNQrlu(puStack_28);
  }
  return;
}


// =========================================================================
// Function: FUN_712f6610
// Entry: 0x712f6610 | Size: 880 bytes
// =========================================================================

void FUN_712f6610(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((*param_2 & 1) == 0) {
    uStack_30 = *param_2;
    uStack_2c = param_2[1];
    uStack_28 = param_2[2];
  }
  else {
    FUN_712f6d58(&uStack_30,param_2[2],param_2[1]);
  }
  uVar2 = jqZqCEXeMbwWkPQPsWPXtLIXsrprfLcULRyTsuHQaLjzixodrunQzQjJ_zMKoMhElbhaqoVSUZW
                    (&uStack_30,0x2a,0);
  if (uVar2 != 0xffffffff) {
    do {
      tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU(param_1,0x2a);
      uVar1 = uStack_2c;
      if ((uStack_30 & 1) == 0) {
        uVar1 = uStack_30 >> 1 & 0x7f;
      }
      if (uVar1 <= uVar2) goto LAB_712f68b4;
      uVar2 = uVar2 + 1;
      uVar4 = uVar1 - uVar2;
      uVar5 = uStack_28;
      if ((uStack_30 & 1) == 0) {
        uVar5 = (uint)&uStack_30 | 1;
      }
      if (0xfffffff7 < uVar4) goto LAB_712f68ac;
      if (uVar4 < 0xb) {
        uStack_40 = CONCAT31(uStack_40._1_3_,(char)uVar4 * '\x02');
        uVar3 = (uint)&uStack_40 | 1;
        if (uVar1 != uVar2) goto LAB_712f674c;
      }
      else {
        uVar3 = thunk_MwhHq((uVar4 | 7) + 1);
        uStack_40 = (uVar4 | 7) + 2;
        uStack_3c = uVar4;
        uStack_38 = uVar3;
LAB_712f674c:
        imp___aeabi_memmove(uVar3,uVar5 + uVar2,uVar4);
      }
      *(undefined1 *)(uVar3 + uVar4) = 0;
      if ((uStack_30 & 1) != 0) {
        qNQrlu(uStack_28);
      }
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      uStack_28 = uStack_38;
      uVar2 = jqZqCEXeMbwWkPQPsWPXtLIXsrprfLcULRyTsuHQaLjzixodrunQzQjJ_zMKoMhElbhaqoVSUZW
                        (&uStack_30,0x2a,0);
    } while (uVar2 != 0xffffffff);
  }
  lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi(&uStack_30,param_2);
  uVar2 = jqZqCEXeMbwWkPQPsWPXtLIXsrprfLcULRyTsuHQaLjzixodrunQzQjJ_zMKoMhElbhaqoVSUZW
                    (&uStack_30,0x26,0);
  if (uVar2 != 0xffffffff) {
    do {
      tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU(param_1,0x26);
      uVar1 = uStack_2c;
      if ((uStack_30 & 1) == 0) {
        uVar1 = uStack_30 >> 1 & 0x7f;
      }
      if (uVar1 <= uVar2) {
LAB_712f68b4:
                    /* WARNING: Subroutine does not return */
        FUN_712f6b48(&uStack_40);
      }
      uVar2 = uVar2 + 1;
      uVar4 = uVar1 - uVar2;
      uVar5 = uStack_28;
      if ((uStack_30 & 1) == 0) {
        uVar5 = (uint)&uStack_30 | 1;
      }
      if (0xfffffff7 < uVar4) {
LAB_712f68ac:
                    /* WARNING: Subroutine does not return */
        FUN_712f6c1c(&uStack_40);
      }
      if (uVar4 < 0xb) {
        uStack_40 = CONCAT31(uStack_40._1_3_,(char)uVar4 * '\x02');
        uVar3 = (uint)&uStack_40 | 1;
        if (uVar1 != uVar2) goto LAB_712f6864;
      }
      else {
        uVar3 = thunk_MwhHq((uVar4 | 7) + 1);
        uStack_40 = (uVar4 | 7) + 2;
        uStack_3c = uVar4;
        uStack_38 = uVar3;
LAB_712f6864:
        imp___aeabi_memmove(uVar3,uVar5 + uVar2,uVar4);
      }
      *(undefined1 *)(uVar3 + uVar4) = 0;
      if ((uStack_30 & 1) != 0) {
        qNQrlu(uStack_28);
      }
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      uStack_28 = uStack_38;
      uVar2 = jqZqCEXeMbwWkPQPsWPXtLIXsrprfLcULRyTsuHQaLjzixodrunQzQjJ_zMKoMhElbhaqoVSUZW
                        (&uStack_30,0x26,0);
    } while (uVar2 != 0xffffffff);
  }
  if ((uStack_30 & 1) != 0) {
    qNQrlu(uStack_28);
  }
  return;
}


// =========================================================================
// Function: FUN_712f6b48
// Entry: 0x712f6b48 | Size: 48 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void FUN_712f6b48(void)

{
  FUN_712f6bb0(s_basic_string_7006ebe5);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: FUN_712f6bb0
// Entry: 0x712f6bb0 | Size: 52 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void FUN_712f6bb0(undefined4 param_1)

{
  qxUwTPHcvDlxy_nSlUZCGSLpSNjobTKAKBULIxBiM(s_out_of_range_was_thrown_in__fno__7006b672,param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: FUN_712f6c1c
// Entry: 0x712f6c1c | Size: 44 bytes
// =========================================================================

void FUN_712f6c1c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_basic_string_7006ebe5);
}


// =========================================================================
// Function: FUN_712f6c84
// Entry: 0x712f6c84 | Size: 52 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void FUN_712f6c84(undefined4 param_1)

{
  qxUwTPHcvDlxy_nSlUZCGSLpSNjobTKAKBULIxBiM(s_length_error_was_thrown_in__fno__700658be,param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: FUN_712f6cf0
// Entry: 0x712f6cf0 | Size: 48 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void FUN_712f6cf0(void)

{
  qxUwTPHcvDlxy_nSlUZCGSLpSNjobTKAKBULIxBiM(s_bad_array_new_length_was_thrown_i_70071f27);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: FUN_712f6d58
// Entry: 0x712f6d58 | Size: 128 bytes
// =========================================================================

void FUN_712f6d58(int *param_1,undefined4 param_2,uint param_3)

{
  undefined1 *puVar1;
  
  if (param_3 < 0xb) {
    puVar1 = (undefined1 *)((int)param_1 + 1);
    *(char *)param_1 = (char)(param_3 << 1);
  }
  else {
    if (0xfffffff7 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_712f6c1c(param_1);
    }
    puVar1 = (undefined1 *)thunk_MwhHq((param_3 | 7) + 1);
    param_1[2] = (int)puVar1;
    *param_1 = (param_3 | 7) + 2;
    param_1[1] = param_3;
  }
  imp___aeabi_memmove(puVar1,param_2,param_3 + 1);
  return;
}


// =========================================================================
// Function: FUN_712f6e24
// Entry: 0x712f6e24 | Size: 344 bytes
// =========================================================================

undefined4 * FUN_712f6e24(int *param_1,byte *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  
  iVar7 = *param_1;
  iVar4 = param_1[1] - iVar7;
  uVar5 = (iVar4 >> 2) * -0x55555555 + 1;
  if (0x15555555 < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6ffc(param_1);
  }
  iVar1 = param_1[2] - iVar7 >> 2;
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
  puVar6 = (undefined4 *)(iVar1 + (iVar4 >> 2) * 4);
  if ((*param_2 & 1) == 0) {
    uVar2 = *(undefined4 *)(param_2 + 4);
    uVar3 = *(undefined4 *)(param_2 + 8);
    *puVar6 = *(undefined4 *)param_2;
    puVar6[1] = uVar2;
    puVar6[2] = uVar3;
  }
  else {
    FUN_712f6d58(puVar6,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 4));
    iVar7 = *param_1;
    iVar4 = param_1[1] - iVar7;
  }
  imp___aeabi_memcpy4((int)puVar6 - iVar4,iVar7,iVar4);
  *param_1 = (int)puVar6 - iVar4;
  param_1[1] = (int)(puVar6 + 3);
  param_1[2] = iVar1 + uVar5 * 0xc;
  if (iVar7 != 0) {
    qNQrlu(iVar7);
  }
  return puVar6 + 3;
}


// =========================================================================
// Function: FUN_712f6ffc
// Entry: 0x712f6ffc | Size: 44 bytes
// =========================================================================

void FUN_712f6ffc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_712f7120
// Entry: 0x712f7120 | Size: 44 bytes
// =========================================================================

void FUN_712f7120(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_712f7188
// Entry: 0x712f7188 | Size: 2616 bytes
// =========================================================================

void FUN_712f7188(int *param_1,int *param_2,int param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uStack_28;
  
  uStack_28 = param_4;
LAB_712f71a4:
  piVar10 = param_1;
  uVar12 = (int)param_2 - (int)piVar10 >> 2;
  switch(uVar12) {
  case 0:
  case 1:
    goto switchD_712f76b4_caseD_0;
  case 2:
    iVar8 = *piVar10;
    if (*(uint *)(iVar8 + 8) <= *(uint *)(param_2[-1] + 8)) {
      return;
    }
    *piVar10 = param_2[-1];
    param_2[-1] = iVar8;
    return;
  case 3:
    iVar3 = *piVar10;
    iVar15 = piVar10[1];
    iVar8 = param_2[-1];
    uVar12 = *(uint *)(iVar15 + 8);
    if (uVar12 < *(uint *)(iVar3 + 8)) {
      if (*(uint *)(iVar8 + 8) < uVar12) {
        *piVar10 = iVar8;
      }
      else {
        *piVar10 = iVar15;
        piVar10[1] = iVar3;
        if (*(uint *)(iVar3 + 8) <= *(uint *)(param_2[-1] + 8)) {
          return;
        }
        piVar10[1] = param_2[-1];
      }
      param_2[-1] = iVar3;
      return;
    }
    if (uVar12 <= *(uint *)(iVar8 + 8)) {
      return;
    }
    piVar10[1] = iVar8;
    param_2[-1] = iVar15;
    iVar3 = *piVar10;
    iVar8 = piVar10[1];
    break;
  case 4:
    FUN_712f7f6c(piVar10,piVar10 + 1,piVar10 + 2,param_2 + -1);
    return;
  case 5:
    piVar7 = piVar10 + 2;
    piVar5 = piVar10 + 3;
    FUN_712f7f6c(piVar10,piVar10 + 1,piVar7,piVar5);
    iVar8 = piVar10[3];
    if (*(uint *)(iVar8 + 8) <= *(uint *)(param_2[-1] + 8)) {
      return;
    }
    *piVar5 = param_2[-1];
    param_2[-1] = iVar8;
    iVar8 = *piVar5;
    if (*(uint *)(*piVar7 + 8) <= *(uint *)(iVar8 + 8)) {
      return;
    }
    *piVar5 = *piVar7;
    iVar3 = piVar10[1];
    *piVar7 = iVar8;
    if (*(uint *)(iVar3 + 8) <= *(uint *)(iVar8 + 8)) {
      return;
    }
    piVar10[1] = iVar8;
    piVar10[2] = iVar3;
    iVar3 = *piVar10;
    break;
  default:
    if ((int)uVar12 < 0x18) {
      piVar5 = piVar10 + 1;
      if ((uStack_28 & 1) == 0) {
        if (piVar10 == param_2 || piVar5 == param_2) {
          return;
        }
        do {
          piVar7 = piVar5;
          iVar3 = *piVar10;
          iVar8 = *piVar7;
          piVar10 = piVar7;
          if (*(uint *)(iVar8 + 8) < *(uint *)(iVar3 + 8)) {
            do {
              *piVar10 = iVar3;
              piVar5 = piVar10 + -1;
              iVar3 = piVar10[-2];
              piVar10 = piVar5;
            } while (*(uint *)(iVar8 + 8) < *(uint *)(iVar3 + 8));
            *piVar5 = iVar8;
          }
          piVar5 = piVar7 + 1;
          piVar10 = piVar7;
        } while (piVar7 + 1 != param_2);
        return;
      }
      if (piVar10 == param_2 || piVar5 == param_2) {
        return;
      }
      iVar8 = 0;
      piVar7 = piVar5;
      piVar6 = piVar10;
      do {
        piVar4 = piVar7;
        iVar14 = *piVar6;
        iVar15 = *piVar4;
        iVar3 = iVar8;
        if (*(uint *)(iVar15 + 8) < *(uint *)(iVar14 + 8)) {
          do {
            *(int *)((int)piVar5 + iVar3) = iVar14;
            piVar7 = piVar10;
            if (iVar3 == 0) goto LAB_712f7810;
            iVar9 = iVar3 + -4;
            iVar14 = *(int *)((int)piVar5 + iVar3 + -8);
            iVar3 = iVar9;
          } while (*(uint *)(iVar15 + 8) < *(uint *)(iVar14 + 8));
          piVar7 = (int *)((int)piVar5 + iVar9);
LAB_712f7810:
          *piVar7 = iVar15;
        }
        iVar8 = iVar8 + 4;
        piVar7 = piVar4 + 1;
        piVar6 = piVar4;
        if (piVar4 + 1 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (piVar10 == param_2) {
        return;
      }
      uVar16 = uVar12 - 2 >> 1;
      uVar13 = uVar16;
      do {
        if ((int)uVar13 <= (int)uVar16) {
          uVar2 = (uVar13 & 0x3fffffff) * 2;
          uVar11 = uVar2 | 1;
          uVar2 = uVar2 + 2;
          piVar5 = piVar10 + uVar11;
          if ((int)uVar2 < (int)uVar12) {
            iVar3 = piVar5[1];
            iVar8 = *piVar5;
            if (*(uint *)(*piVar5 + 8) < *(uint *)(iVar3 + 8)) {
              iVar8 = iVar3;
              uVar11 = uVar2;
              piVar5 = piVar5 + 1;
            }
          }
          else {
            iVar8 = *piVar5;
          }
          iVar3 = piVar10[uVar13];
          piVar7 = piVar10 + uVar13;
          if (*(uint *)(iVar3 + 8) <= *(uint *)(iVar8 + 8)) {
            do {
              piVar6 = piVar5;
              *piVar7 = iVar8;
              if ((int)uVar16 < (int)uVar11) break;
              uVar2 = uVar11 * 2 + 2;
              uVar11 = uVar11 << 1 | 1;
              piVar5 = piVar10 + uVar11;
              if ((int)uVar2 < (int)uVar12) {
                iVar15 = piVar5[1];
                iVar8 = *piVar5;
                if (*(uint *)(*piVar5 + 8) < *(uint *)(iVar15 + 8)) {
                  iVar8 = iVar15;
                  uVar11 = uVar2;
                  piVar5 = piVar5 + 1;
                }
              }
              else {
                iVar8 = *piVar5;
              }
              piVar7 = piVar6;
            } while (*(uint *)(iVar3 + 8) <= *(uint *)(iVar8 + 8));
            *piVar6 = iVar3;
          }
        }
        bVar1 = 0 < (int)uVar13;
        uVar13 = uVar13 - 1;
      } while (bVar1);
      do {
        iVar8 = *piVar10;
        uVar16 = 0;
        piVar5 = piVar10;
        do {
          uVar11 = uVar16 * 2 + 2;
          uVar13 = uVar16 << 1 | 1;
          piVar7 = piVar5 + uVar16 + 1;
          if ((int)uVar11 < (int)uVar12) {
            iVar3 = uVar16 + 2;
            iVar9 = piVar5[iVar3];
            iVar15 = uVar16 + 1;
            uVar16 = uVar13;
            iVar14 = piVar5[iVar15];
            if (*(uint *)(piVar5[iVar15] + 8) < *(uint *)(iVar9 + 8)) {
              uVar16 = uVar11;
              piVar7 = piVar5 + iVar3;
              iVar14 = iVar9;
            }
          }
          else {
            uVar16 = uVar13;
            iVar14 = *piVar7;
          }
          *piVar5 = iVar14;
          piVar5 = piVar7;
        } while ((int)uVar16 <= (int)(uVar12 - 2 >> 1));
        param_2 = param_2 + -1;
        if (piVar7 == param_2) {
          *piVar7 = iVar8;
        }
        else {
          *piVar7 = *param_2;
          *param_2 = iVar8;
          iVar8 = (int)piVar7 + (4 - (int)piVar10) >> 2;
          if (1 < iVar8) {
            iVar3 = *piVar7;
            uVar16 = iVar8 - 2U >> 1;
            iVar8 = piVar10[uVar16];
            piVar5 = piVar10 + uVar16;
            if (*(uint *)(iVar8 + 8) < *(uint *)(iVar3 + 8)) {
              do {
                piVar6 = piVar5;
                *piVar7 = iVar8;
                if (uVar16 == 0) break;
                uVar16 = uVar16 - 1 >> 1;
                iVar8 = piVar10[uVar16];
                piVar7 = piVar6;
                piVar5 = piVar10 + uVar16;
              } while (*(uint *)(iVar8 + 8) < *(uint *)(iVar3 + 8));
              *piVar6 = iVar3;
            }
          }
        }
        bVar1 = (int)uVar12 < 3;
        uVar12 = uVar12 - 1;
        if (bVar1) {
          return;
        }
      } while( true );
    }
    iVar8 = param_2[-1];
    uVar16 = uVar12 >> 1;
    piVar5 = piVar10 + uVar16;
    uVar13 = *(uint *)(iVar8 + 8);
    if (uVar12 < 0x81) {
      iVar15 = *piVar10;
      iVar3 = *piVar5;
      uVar12 = *(uint *)(iVar15 + 8);
      if (uVar12 < *(uint *)(iVar3 + 8)) {
        if (uVar13 < uVar12) {
          *piVar5 = iVar8;
        }
        else {
          *piVar5 = iVar15;
          *piVar10 = iVar3;
          if (*(uint *)(iVar3 + 8) <= *(uint *)(param_2[-1] + 8)) goto LAB_712f7478;
          *piVar10 = param_2[-1];
        }
        param_2[-1] = iVar3;
      }
      else if (uVar13 < uVar12) {
        *piVar10 = iVar8;
        param_2[-1] = iVar15;
        iVar8 = *piVar5;
        if (*(uint *)(*piVar10 + 8) < *(uint *)(iVar8 + 8)) {
          *piVar5 = *piVar10;
          *piVar10 = iVar8;
        }
      }
    }
    else {
      iVar15 = *piVar5;
      iVar3 = *piVar10;
      uVar12 = *(uint *)(iVar15 + 8);
      if (uVar12 < *(uint *)(iVar3 + 8)) {
        if (uVar13 < uVar12) {
          *piVar10 = iVar8;
        }
        else {
          *piVar10 = iVar15;
          *piVar5 = iVar3;
          if (*(uint *)(iVar3 + 8) <= *(uint *)(param_2[-1] + 8)) goto LAB_712f72b4;
          *piVar5 = param_2[-1];
        }
        param_2[-1] = iVar3;
      }
      else if (uVar13 < uVar12) {
        *piVar5 = iVar8;
        param_2[-1] = iVar15;
        iVar8 = *piVar10;
        if (*(uint *)(*piVar5 + 8) < *(uint *)(iVar8 + 8)) {
          *piVar10 = *piVar5;
          *piVar5 = iVar8;
        }
      }
LAB_712f72b4:
      iVar3 = param_2[-2];
      iVar8 = piVar10[1];
      piVar7 = piVar10 + (uVar16 - 1);
      iVar15 = *piVar7;
      uVar12 = *(uint *)(iVar15 + 8);
      if (uVar12 < *(uint *)(iVar8 + 8)) {
        if (*(uint *)(iVar3 + 8) < uVar12) {
          piVar10[1] = iVar3;
        }
        else {
          piVar10[1] = iVar15;
          *piVar7 = iVar8;
          if (*(uint *)(iVar8 + 8) <= *(uint *)(param_2[-2] + 8)) goto LAB_712f7368;
          *piVar7 = param_2[-2];
        }
        param_2[-2] = iVar8;
      }
      else if (*(uint *)(iVar3 + 8) < uVar12) {
        *piVar7 = iVar3;
        param_2[-2] = iVar15;
        iVar8 = piVar10[1];
        if (*(uint *)(*piVar7 + 8) < *(uint *)(iVar8 + 8)) {
          piVar10[1] = *piVar7;
          *piVar7 = iVar8;
        }
      }
LAB_712f7368:
      piVar6 = piVar10 + uVar16 + 1;
      iVar15 = *piVar6;
      iVar3 = param_2[-3];
      iVar8 = piVar10[2];
      uVar12 = *(uint *)(iVar15 + 8);
      if (uVar12 < *(uint *)(iVar8 + 8)) {
        if (*(uint *)(iVar3 + 8) < uVar12) {
          piVar10[2] = iVar3;
        }
        else {
          piVar10[2] = iVar15;
          *piVar6 = iVar8;
          if (*(uint *)(iVar8 + 8) <= *(uint *)(param_2[-3] + 8)) goto LAB_712f73ec;
          *piVar6 = param_2[-3];
        }
        param_2[-3] = iVar8;
      }
      else if (*(uint *)(iVar3 + 8) < uVar12) {
        *piVar6 = iVar3;
        param_2[-3] = iVar15;
        iVar8 = piVar10[2];
        if (*(uint *)(*piVar6 + 8) < *(uint *)(iVar8 + 8)) {
          piVar10[2] = *piVar6;
          *piVar6 = iVar8;
        }
      }
LAB_712f73ec:
      iVar15 = *piVar6;
      iVar8 = *piVar5;
      iVar3 = *piVar7;
      uVar12 = *(uint *)(iVar8 + 8);
      if (uVar12 < *(uint *)(iVar3 + 8)) {
        iVar14 = iVar8;
        if (uVar12 <= *(uint *)(iVar15 + 8)) {
          *piVar7 = iVar8;
          *piVar5 = iVar3;
          piVar7 = piVar5;
          iVar8 = iVar3;
          iVar14 = iVar15;
          if (*(uint *)(iVar3 + 8) <= *(uint *)(iVar15 + 8)) goto LAB_712f746c;
        }
LAB_712f7464:
        *piVar6 = iVar3;
        *piVar7 = iVar15;
        iVar8 = iVar14;
      }
      else if (*(uint *)(iVar15 + 8) < uVar12) {
        *piVar6 = iVar8;
        *piVar5 = iVar15;
        piVar6 = piVar5;
        iVar8 = iVar15;
        iVar14 = iVar3;
        if (*(uint *)(iVar15 + 8) < *(uint *)(iVar3 + 8)) goto LAB_712f7464;
      }
LAB_712f746c:
      iVar3 = *piVar10;
      *piVar10 = iVar8;
      *piVar5 = iVar3;
    }
LAB_712f7478:
    param_3 = param_3 + -1;
    iVar8 = *piVar10;
    param_1 = piVar10;
    if ((uStack_28 & 1) == 0) {
      uVar12 = *(uint *)(iVar8 + 8);
      if (*(uint *)(piVar10[-1] + 8) < uVar12) goto LAB_712f74a8;
      if (uVar12 < *(uint *)(param_2[-1] + 8)) {
        do {
          param_1 = param_1 + 1;
        } while (*(uint *)(*param_1 + 8) <= uVar12);
      }
      else {
        do {
          param_1 = param_1 + 1;
          if (param_2 <= param_1) break;
        } while (*(uint *)(*param_1 + 8) <= uVar12);
      }
      piVar5 = param_2;
      if (param_1 < param_2) {
        do {
          piVar5 = piVar5 + -1;
        } while (uVar12 < *(uint *)(*piVar5 + 8));
      }
      if (param_1 < piVar5) {
        iVar15 = *piVar5;
        iVar3 = *param_1;
        do {
          *param_1 = iVar15;
          *piVar5 = iVar3;
          do {
            param_1 = param_1 + 1;
            iVar3 = *param_1;
          } while (*(uint *)(iVar3 + 8) <= *(uint *)(iVar8 + 8));
          do {
            piVar5 = piVar5 + -1;
            iVar15 = *piVar5;
          } while (*(uint *)(iVar8 + 8) < *(uint *)(iVar15 + 8));
        } while (param_1 < piVar5);
      }
      piVar5 = param_1 + -1;
      if (piVar5 != piVar10) {
        *piVar10 = *piVar5;
      }
      *piVar5 = iVar8;
LAB_712f76a0:
      uStack_28 = 0;
    }
    else {
      uVar12 = *(uint *)(iVar8 + 8);
LAB_712f74a8:
      iVar3 = 0;
      do {
        iVar15 = iVar3 + -4;
        iVar14 = *(int *)((int)piVar10 + (4 - iVar3));
        iVar3 = iVar15;
      } while (*(uint *)(iVar14 + 8) < uVar12);
      piVar7 = (int *)((int)piVar10 - iVar15);
      piVar5 = param_2;
      if (iVar15 == -4) {
        do {
          if (piVar5 <= piVar7) break;
          piVar5 = piVar5 + -1;
        } while (uVar12 <= *(uint *)(*piVar5 + 8));
      }
      else {
        do {
          piVar5 = piVar5 + -1;
        } while (uVar12 <= *(uint *)(*piVar5 + 8));
      }
      param_1 = piVar7;
      if (piVar7 < piVar5) {
        iVar3 = *piVar5;
        piVar6 = piVar5;
        do {
          *param_1 = iVar3;
          *piVar6 = iVar14;
          do {
            param_1 = param_1 + 1;
            iVar14 = *param_1;
          } while (*(uint *)(iVar14 + 8) < *(uint *)(iVar8 + 8));
          do {
            piVar6 = piVar6 + -1;
            iVar3 = *piVar6;
          } while (*(uint *)(iVar8 + 8) <= *(uint *)(iVar3 + 8));
        } while (param_1 < piVar6);
      }
      piVar6 = param_1 + -1;
      if (piVar6 != piVar10) {
        *piVar10 = *piVar6;
      }
      *piVar6 = iVar8;
      if (piVar7 < piVar5) {
LAB_712f75a0:
        FUN_712f7188(piVar10,piVar6,param_3,uStack_28 & 1);
        goto LAB_712f76a0;
      }
      iVar8 = FUN_712f7c44(piVar10,piVar6);
      iVar3 = FUN_712f7c44(param_1,param_2);
      if (iVar3 != 0) goto LAB_712f75c8;
      if (iVar8 == 0) goto LAB_712f75a0;
    }
    goto LAB_712f71a4;
  }
  if (*(uint *)(iVar8 + 8) < *(uint *)(iVar3 + 8)) {
    *piVar10 = iVar8;
    piVar10[1] = iVar3;
  }
  return;
LAB_712f75c8:
  param_1 = piVar10;
  param_2 = piVar6;
  if (iVar8 != 0) {
switchD_712f76b4_caseD_0:
    return;
  }
  goto LAB_712f71a4;
}


// =========================================================================
// Function: FUN_712f7c44
// Entry: 0x712f7c44 | Size: 728 bytes
// =========================================================================

bool FUN_712f7c44(int *param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  
  switch((int)param_2 - (int)param_1 >> 2) {
  case 0:
  case 1:
    break;
  case 2:
    iVar5 = *param_1;
    if (*(uint *)(param_2[-1] + 8) < *(uint *)(iVar5 + 8)) {
      *param_1 = param_2[-1];
      param_2[-1] = iVar5;
      return true;
    }
    break;
  case 3:
    iVar7 = *param_1;
    iVar8 = param_1[1];
    iVar5 = param_2[-1];
    uVar1 = *(uint *)(iVar8 + 8);
    if (uVar1 < *(uint *)(iVar7 + 8)) {
      if (*(uint *)(iVar5 + 8) < uVar1) {
        *param_1 = iVar5;
      }
      else {
        *param_1 = iVar8;
        param_1[1] = iVar7;
        if (*(uint *)(iVar7 + 8) <= *(uint *)(param_2[-1] + 8)) {
          return true;
        }
        param_1[1] = param_2[-1];
      }
      param_2[-1] = iVar7;
      return true;
    }
    if (uVar1 <= *(uint *)(iVar5 + 8)) {
      return true;
    }
    param_1[1] = iVar5;
    param_2[-1] = iVar8;
    iVar7 = *param_1;
    iVar5 = param_1[1];
    goto LAB_712f7df8;
  case 4:
    FUN_712f7f6c(param_1,param_1 + 1,param_1 + 2,param_2 + -1);
    return true;
  case 5:
    piVar2 = param_1 + 2;
    piVar9 = param_1 + 3;
    FUN_712f7f6c(param_1,param_1 + 1,piVar2,piVar9);
    iVar5 = param_1[3];
    if (*(uint *)(iVar5 + 8) <= *(uint *)(param_2[-1] + 8)) {
      return true;
    }
    *piVar9 = param_2[-1];
    param_2[-1] = iVar5;
    iVar5 = *piVar9;
    if (*(uint *)(*piVar2 + 8) <= *(uint *)(iVar5 + 8)) {
      return true;
    }
    iVar7 = param_1[1];
    *piVar9 = *piVar2;
    *piVar2 = iVar5;
    if (*(uint *)(iVar7 + 8) <= *(uint *)(iVar5 + 8)) {
      return true;
    }
    param_1[1] = iVar5;
    param_1[2] = iVar7;
    iVar7 = *param_1;
LAB_712f7df8:
    if (*(uint *)(iVar5 + 8) < *(uint *)(iVar7 + 8)) {
      *param_1 = iVar5;
      param_1[1] = iVar7;
      return true;
    }
    break;
  default:
    piVar2 = param_1 + 2;
    iVar7 = *piVar2;
    piVar10 = param_1 + 1;
    iVar5 = *piVar10;
    iVar8 = *param_1;
    uVar1 = *(uint *)(iVar5 + 8);
    piVar9 = param_1;
    if (uVar1 < *(uint *)(iVar8 + 8)) {
      piVar11 = piVar2;
      if (uVar1 <= *(uint *)(iVar7 + 8)) {
        *param_1 = iVar5;
        param_1[1] = iVar8;
        piVar9 = piVar10;
        piVar10 = piVar2;
LAB_712f7e2c:
        piVar11 = piVar10;
        if (*(uint *)(iVar8 + 8) <= *(uint *)(iVar7 + 8)) goto LAB_712f7e44;
      }
      *piVar11 = iVar8;
      *piVar9 = iVar7;
    }
    else if (*(uint *)(iVar7 + 8) < uVar1) {
      *piVar2 = iVar5;
      *piVar10 = iVar7;
      goto LAB_712f7e2c;
    }
LAB_712f7e44:
    if (param_1 + 3 != param_2) {
      iVar5 = 0;
      iVar7 = 0;
      piVar9 = param_1 + 3;
      do {
        iVar4 = *piVar2;
        iVar6 = *piVar9;
        iVar8 = iVar5;
        if (*(uint *)(iVar6 + 8) < *(uint *)(iVar4 + 8)) {
          do {
            iVar3 = iVar8;
            *(int *)((int)param_1 + iVar3 + 0xc) = iVar4;
            piVar2 = param_1;
            if (iVar3 == -8) goto LAB_712f7e60;
            iVar4 = *(int *)((int)param_1 + iVar3 + 4);
            iVar8 = iVar3 + -4;
          } while (*(uint *)(iVar6 + 8) < *(uint *)(iVar4 + 8));
          piVar2 = (int *)((int)param_1 + iVar3 + 8);
LAB_712f7e60:
          iVar7 = iVar7 + 1;
          *piVar2 = iVar6;
          if (iVar7 == 8) {
            return (int)piVar9 - (int)param_2 == -4;
          }
        }
        piVar10 = piVar9 + 1;
        iVar5 = iVar5 + 4;
        piVar2 = piVar9;
        piVar9 = piVar10;
      } while (piVar10 != param_2);
    }
  }
  return true;
}


// =========================================================================
// Function: FUN_712f7f6c
// Entry: 0x712f7f6c | Size: 248 bytes
// =========================================================================

void FUN_712f7f6c(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *param_3;
  iVar3 = *param_2;
  iVar4 = *param_1;
  uVar2 = *(uint *)(iVar3 + 8);
  if (uVar2 < *(uint *)(iVar4 + 8)) {
    if (*(uint *)(iVar1 + 8) < uVar2) {
      *param_1 = iVar1;
    }
    else {
      *param_1 = iVar3;
      *param_2 = iVar4;
      iVar1 = *param_3;
      if (*(uint *)(iVar4 + 8) <= *(uint *)(iVar1 + 8)) goto LAB_712f8008;
      *param_2 = iVar1;
    }
    *param_3 = iVar4;
    iVar1 = iVar4;
  }
  else if (*(uint *)(iVar1 + 8) < uVar2) {
    *param_2 = iVar1;
    *param_3 = iVar3;
    iVar4 = *param_1;
    iVar1 = iVar3;
    if (*(uint *)(*param_2 + 8) < *(uint *)(iVar4 + 8)) {
      *param_1 = *param_2;
      *param_2 = iVar4;
      iVar1 = *param_3;
    }
  }
LAB_712f8008:
  if (*(uint *)(*param_4 + 8) < *(uint *)(iVar1 + 8)) {
    *param_3 = *param_4;
    *param_4 = iVar1;
    iVar1 = *param_2;
    if (*(uint *)(*param_3 + 8) < *(uint *)(iVar1 + 8)) {
      *param_2 = *param_3;
      *param_3 = iVar1;
      iVar1 = *param_1;
      if (*(uint *)(*param_2 + 8) < *(uint *)(iVar1 + 8)) {
        *param_1 = *param_2;
        *param_2 = iVar1;
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_712f807c
// Entry: 0x712f807c | Size: 464 bytes
// =========================================================================

void FUN_712f807c(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  
  *(bool *)(param_2 + 3) = param_2 == param_1;
  if (param_2 == param_1) {
    return;
  }
  do {
    piVar7 = (int *)param_2[2];
    if ((char)piVar7[3] != '\0') {
      return;
    }
    piVar8 = (int *)piVar7[2];
    piVar5 = (int *)*piVar8;
    if (piVar5 == piVar7) {
      if ((piVar8[1] == 0) || (piVar5 = (int *)(piVar8[1] + 0xc), *(char *)piVar5 != '\0')) {
        if ((int *)*piVar7 != param_2) {
          piVar5 = (int *)piVar7[1];
          iVar2 = *piVar5;
          piVar7[1] = iVar2;
          if (iVar2 != 0) {
            *(int **)(iVar2 + 8) = piVar7;
            piVar8 = (int *)piVar7[2];
          }
          piVar5[2] = (int)piVar8;
          piVar1 = piVar8 + 1;
          if ((int *)*piVar8 == piVar7) {
            piVar1 = piVar8;
          }
          *piVar1 = (int)piVar5;
          *piVar5 = (int)piVar7;
          piVar7[2] = (int)piVar5;
          piVar8 = (int *)piVar5[2];
          piVar7 = piVar5;
        }
        *(undefined1 *)(piVar7 + 3) = 1;
        *(undefined1 *)(piVar8 + 3) = 0;
        iVar2 = *piVar8;
        iVar4 = *(int *)(iVar2 + 4);
        *piVar8 = iVar4;
        if (iVar4 != 0) {
          *(int **)(iVar4 + 8) = piVar8;
        }
        piVar5 = (int *)piVar8[2];
        *(int **)(iVar2 + 8) = piVar5;
        piVar7 = piVar5 + 1;
        if ((int *)*piVar5 == piVar8) {
          piVar7 = piVar5;
        }
        *piVar7 = iVar2;
        *(int **)(iVar2 + 4) = piVar8;
        piVar8[2] = iVar2;
        return;
      }
    }
    else if ((piVar5 == (int *)0x0) || (piVar5 = piVar5 + 3, (char)*piVar5 != '\0')) {
      if ((int *)*piVar7 == param_2) {
        iVar2 = param_2[1];
        *piVar7 = iVar2;
        if (iVar2 != 0) {
          *(int **)(iVar2 + 8) = piVar7;
          piVar8 = (int *)piVar7[2];
        }
        param_2[2] = (int)piVar8;
        piVar5 = piVar8 + 1;
        if ((int *)*piVar8 == piVar7) {
          piVar5 = piVar8;
        }
        *piVar5 = (int)param_2;
        param_2[1] = (int)piVar7;
        piVar7[2] = (int)param_2;
        piVar8 = (int *)param_2[2];
        piVar7 = param_2;
      }
      *(undefined1 *)(piVar7 + 3) = 1;
      *(undefined1 *)(piVar8 + 3) = 0;
      piVar7 = (int *)piVar8[1];
      iVar2 = *piVar7;
      piVar8[1] = iVar2;
      if (iVar2 != 0) {
        *(int **)(iVar2 + 8) = piVar8;
      }
      puVar3 = (undefined4 *)piVar8[2];
      piVar7[2] = (int)puVar3;
      puVar6 = puVar3 + 1;
      if ((int *)*puVar3 == piVar8) {
        puVar6 = puVar3;
      }
      *puVar6 = piVar7;
      *piVar7 = (int)piVar8;
      piVar8[2] = (int)piVar7;
      return;
    }
    *(undefined1 *)(piVar7 + 3) = 1;
    *(bool *)(piVar8 + 3) = piVar8 == param_1;
    *(char *)piVar5 = '\x01';
    param_2 = piVar8;
    if (piVar8 == param_1) {
      return;
    }
  } while( true );
}


// =========================================================================
// Function: FUN_71302730
// Entry: 0x71302730 | Size: 400 bytes
// =========================================================================

void FUN_71302730(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b2e860 & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2e860), iVar4 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b89b4,param_2,param_3);
    if (*pcVar5 == '\0') {
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b89a4);
      *(undefined1 *)(iVar4 + 0x59) = 1;
      imp___aeabi_memcpy8(iVar4,&DAT_70072708,0x59);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71302fa4,iVar4,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b89b4);
      *puVar6 = 1;
    }
    iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b89a4);
    if (*(char *)(iVar4 + 0x59) != '\0') {
      uVar7 = 0;
      uVar8 = 0;
      do {
        iVar9 = (uVar7 & 7) * 8;
        bVar3 = (byte)(0xc77d4573 >> iVar9) |
                (byte)(-0x164a4c4f << ((uVar7 & 7) * -8 + 0x20 & 0xff));
        uVar10 = iVar9 - 0x20;
        if (-1 < (int)uVar10) {
          bVar3 = (byte)(0xe9b5b3b1 >> (uVar10 & 0xff));
        }
        *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
        bVar11 = 0xfffffffe < uVar7;
        bVar1 = uVar8 == 0;
        bVar2 = (0x57 < uVar7) <= uVar8;
        uVar7 = uVar7 + 1;
        uVar8 = uVar8 + bVar11;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar4 + 0x59) = 0;
    }
    DAT_70b2e85c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b2e860);
  }
                    /* WARNING: Could not recover jumptable at 0x71302764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b2e85c)(param_1,param_2,param_3);
  return;
}


// =========================================================================
// Function: FUN_71302b74
// Entry: 0x71302b74 | Size: 408 bytes
// =========================================================================

void FUN_71302b74(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b2e868 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2e868), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b89d4,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b89c4);
      *(undefined1 *)(puVar10 + 0xd) = 1;
      uVar5 = DAT_70072774;
      uVar4 = DAT_70072770;
      uVar3 = DAT_7007276c;
      *puVar10 = DAT_70072768;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar5 = DAT_70072784;
      uVar4 = DAT_70072780;
      uVar3 = DAT_7007277c;
      puVar10[4] = DAT_70072778;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      uVar6 = DAT_70072798;
      uVar5 = DAT_70072794;
      uVar4 = DAT_70072790;
      uVar3 = DAT_7007278c;
      puVar10[8] = DAT_70072788;
      puVar10[9] = uVar3;
      puVar10[10] = uVar4;
      puVar10[0xb] = uVar5;
      puVar10[0xc] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71302ff4,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b89d4);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b89c4);
    if (*(char *)(iVar8 + 0x34) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xe569d1dd >> iVar14) |
                (byte)(0x750729cb << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x750729cb >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x32 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x34) = 0;
    }
    DAT_70b2e864 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b2e868);
  }
                    /* WARNING: Could not recover jumptable at 0x71302ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b2e864)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_71303044
// Entry: 0x71303044 | Size: 388 bytes
// =========================================================================

void FUN_71303044(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b2e890 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2e890), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8c94);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8c84);
      *(undefined1 *)(puVar10 + 0xd) = 1;
      uVar5 = DAT_700728a4;
      uVar4 = DAT_700728a0;
      uVar3 = DAT_7007289c;
      *puVar10 = DAT_70072898;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar5 = DAT_700728b4;
      uVar4 = DAT_700728b0;
      uVar3 = DAT_700728ac;
      puVar10[4] = DAT_700728a8;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      uVar6 = DAT_700728c8;
      uVar5 = DAT_700728c4;
      uVar4 = DAT_700728c0;
      uVar3 = DAT_700728bc;
      puVar10[8] = DAT_700728b8;
      puVar10[9] = uVar3;
      puVar10[10] = uVar4;
      puVar10[0xb] = uVar5;
      puVar10[0xc] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713093c8,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8c94);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8c84);
    if (*(char *)(iVar8 + 0x34) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xb2f6bcb >> iVar14) |
                (byte)(-0x4ed658b1 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xb129a74f >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x32 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x34) = 0;
    }
    DAT_70b2e88c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b2e890);
  }
                    /* WARNING: Could not recover jumptable at 0x71303070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b2e88c)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71303460
// Entry: 0x71303460 | Size: 380 bytes
// =========================================================================

void FUN_71303460(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b2e898 & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2e898), iVar4 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8cb4,param_2);
    if (*pcVar5 == '\0') {
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8ca4);
      *(undefined1 *)(iVar4 + 0x4d) = 1;
      imp___aeabi_memcpy8(iVar4,&DAT_700728d0,0x4d);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71309418,iVar4,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8cb4);
      *puVar6 = 1;
    }
    iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8ca4);
    if (*(char *)(iVar4 + 0x4d) != '\0') {
      uVar7 = 0;
      uVar8 = 0;
      do {
        iVar9 = (uVar7 & 7) * 8;
        uVar10 = iVar9 - 0x20;
        bVar3 = (byte)(0x1b253f8d >> iVar9) | (byte)(0xf53e9eb << ((uVar7 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar10) {
          bVar3 = (byte)(0xf53e9eb >> (uVar10 & 0xff));
        }
        *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
        bVar11 = 0xfffffffe < uVar7;
        bVar1 = uVar8 == 0;
        bVar2 = (0x4b < uVar7) <= uVar8;
        uVar7 = uVar7 + 1;
        uVar8 = uVar8 + bVar11;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar4 + 0x4d) = 0;
    }
    DAT_70b2e894 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b2e898);
  }
                    /* WARNING: Could not recover jumptable at 0x7130348c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b2e894)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_71303890
// Entry: 0x71303890 | Size: 404 bytes
// =========================================================================

void FUN_71303890(undefined4 param_1)

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
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b2e8a0 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2e8a0), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8cd4);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8cc4);
      *(undefined1 *)((int)puVar11 + 0x3f) = 1;
      uVar6 = DAT_70072930;
      uVar5 = DAT_7007292c;
      uVar4 = DAT_70072928;
      uVar3 = DAT_70072924;
      *puVar11 = DAT_70072920;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      uVar6 = DAT_70072944;
      uVar5 = DAT_70072940;
      uVar4 = DAT_7007293c;
      uVar3 = DAT_70072938;
      puVar11[5] = DAT_70072934;
      puVar11[6] = uVar3;
      puVar11[7] = uVar4;
      puVar11[8] = uVar5;
      puVar11[9] = uVar6;
      uVar6 = DAT_70072958;
      uVar5 = DAT_70072954;
      uVar4 = DAT_70072950;
      uVar3 = DAT_7007294c;
      puVar11[10] = DAT_70072948;
      puVar11[0xb] = uVar3;
      puVar11[0xc] = uVar4;
      puVar11[0xd] = uVar5;
      puVar11[0xe] = uVar6;
      uVar7 = DAT_7007295e;
      *(undefined2 *)(puVar11 + 0xf) = DAT_7007295c;
      *(undefined1 *)((int)puVar11 + 0x3e) = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71309468,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8cd4);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8cc4);
    if (*(char *)(iVar9 + 0x3f) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x1f8d9361 >> iVar15) |
                (byte)(0xf6b2b97 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0xf6b2b97 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x3d < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x3f) = 0;
    }
    DAT_70b2e89c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b2e8a0);
  }
                    /* WARNING: Could not recover jumptable at 0x713038bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b2e89c)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71303cbc
// Entry: 0x71303cbc | Size: 396 bytes
// =========================================================================

void FUN_71303cbc(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b2e8a8 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2e8a8), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8cf4);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8ce4);
      *(undefined1 *)((int)puVar10 + 0x3a) = 1;
      uVar5 = DAT_7007296c;
      uVar4 = DAT_70072968;
      uVar3 = DAT_70072964;
      *puVar10 = DAT_70072960;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_70072980;
      uVar5 = DAT_7007297c;
      uVar4 = DAT_70072978;
      uVar3 = DAT_70072974;
      puVar10[4] = DAT_70072970;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      uVar6 = DAT_70072994;
      uVar5 = DAT_70072990;
      uVar4 = DAT_7007298c;
      uVar3 = DAT_70072988;
      puVar10[9] = DAT_70072984;
      puVar10[10] = uVar3;
      puVar10[0xb] = uVar4;
      puVar10[0xc] = uVar5;
      puVar10[0xd] = uVar6;
      *(undefined2 *)(puVar10 + 0xe) = DAT_70072998;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713094b8,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8cf4);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8ce4);
    if (*(char *)(iVar8 + 0x3a) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x8feb1737 >> iVar14) |
                (byte)(0x4dc13fb3 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x4dc13fb3 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x38 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x3a) = 0;
    }
    DAT_70b2e8a4 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b2e8a8);
  }
                    /* WARNING: Could not recover jumptable at 0x71303ce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b2e8a4)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713040e0
// Entry: 0x713040e0 | Size: 396 bytes
// =========================================================================

void FUN_713040e0(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b2e8b0 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2e8b0), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8d14);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8d04);
      *(undefined1 *)((int)puVar10 + 0x35) = 1;
      uVar5 = DAT_700729ac;
      uVar4 = DAT_700729a8;
      uVar3 = DAT_700729a4;
      *puVar10 = DAT_700729a0;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar5 = DAT_700729bc;
      uVar4 = DAT_700729b8;
      uVar3 = DAT_700729b4;
      puVar10[4] = DAT_700729b0;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      uVar6 = DAT_700729d0;
      uVar5 = DAT_700729cc;
      uVar4 = DAT_700729c8;
      uVar3 = DAT_700729c4;
      puVar10[8] = DAT_700729c0;
      puVar10[9] = uVar3;
      puVar10[10] = uVar4;
      puVar10[0xb] = uVar5;
      puVar10[0xc] = uVar6;
      *(undefined1 *)(puVar10 + 0xd) = DAT_700729d4;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71309508,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8d14);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8d04);
    if (*(char *)(iVar8 + 0x35) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x85ef9dbf >> iVar14) |
                (byte)(-0x656b801 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xf9a947ff >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x33 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x35) = 0;
    }
    DAT_70b2e8ac = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b2e8b0);
  }
                    /* WARNING: Could not recover jumptable at 0x7130410c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b2e8ac)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71304504
// Entry: 0x71304504 | Size: 380 bytes
// =========================================================================

void FUN_71304504(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b2e8b8 & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2e8b8), iVar4 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8d34,param_2);
    if (*pcVar5 == '\0') {
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8d24);
      *(undefined1 *)(iVar4 + 0x49) = 1;
      imp___aeabi_memcpy8(iVar4,&DAT_700729d8,0x49);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71309558,iVar4,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8d34);
      *puVar6 = 1;
    }
    iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8d24);
    if (*(char *)(iVar4 + 0x49) != '\0') {
      uVar7 = 0;
      uVar8 = 0;
      do {
        iVar9 = (uVar7 & 7) * 8;
        uVar10 = iVar9 - 0x20;
        bVar3 = (byte)(0xd9dfef83 >> iVar9) |
                (byte)(-0x7ad21a23 << ((uVar7 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar10) {
          bVar3 = (byte)(0x852de5dd >> (uVar10 & 0xff));
        }
        *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
        bVar11 = 0xfffffffe < uVar7;
        bVar1 = uVar8 == 0;
        bVar2 = (0x47 < uVar7) <= uVar8;
        uVar7 = uVar7 + 1;
        uVar8 = uVar8 + bVar11;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar4 + 0x49) = 0;
    }
    DAT_70b2e8b4 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b2e8b8);
  }
                    /* WARNING: Could not recover jumptable at 0x71304530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b2e8b4)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_71304934
// Entry: 0x71304934 | Size: 420 bytes
// =========================================================================

void FUN_71304934(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  
  DataMemoryBarrier(0xb);
  if ((DAT_70b2e8c0 & 1) == 0) {
    iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2e8c0);
    if (iVar4 != 0) {
      pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8d54,param_2,param_3,param_4);
      if (*pcVar5 == '\0') {
        iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8d44);
        *(undefined1 *)(iVar4 + 0x9f) = 1;
        imp___aeabi_memcpy8(iVar4,&DAT_70072a28,0x9f);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_713095a8,iVar4,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8d54);
        *puVar6 = 1;
      }
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8d44);
      if (*(char *)(iVar4 + 0x9f) != '\0') {
        uVar7 = 0;
        uVar9 = 0;
        do {
          iVar10 = (uVar7 & 7) * 8;
          bVar3 = (byte)(0x1fa53b3f >> iVar10) |
                  (byte)(-0x64881059 << ((uVar7 & 7) * -8 + 0x20 & 0xff));
          uVar8 = iVar10 - 0x20;
          if (-1 < (int)uVar8) {
            bVar3 = (byte)(0x9b77efa7 >> (uVar8 & 0xff));
          }
          *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
          bVar11 = 0xfffffffe < uVar7;
          bVar1 = uVar9 == 0;
          bVar2 = (0x9d < uVar7) <= uVar9;
          uVar7 = uVar7 + 1;
          uVar9 = uVar9 + bVar11;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar4 + 0x9f) = 0;
      }
      DAT_70b2e8bc = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70b2e8c0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x71304970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b2e8bc)(param_1,param_2,param_3,param_4);
  return;
}


// =========================================================================
// Function: FUN_71304d8c
// Entry: 0x71304d8c | Size: 2580 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71304d8c(void)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  byte bVar5;
  char *pcVar6;
  int iVar7;
  byte *pbVar8;
  undefined4 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  char *pcVar16;
  undefined *puVar17;
  undefined2 *puVar18;
  undefined4 *puVar19;
  undefined1 *puVar20;
  uint uVar21;
  uint extraout_r2;
  uint uVar22;
  uint extraout_r2_00;
  bool bVar23;
  int iVar24;
  uint uVar25;
  undefined4 uVar26;
  bool bVar27;
  int iStack_a0;
  uint uStack_94;
  uint uStack_8c;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [32];
  int aiStack_48 [8];
  int iStack_28;
  
  iStack_28 = _ext___stack_chk_guard;
  FUN_7133a5b8(&DAT_70064a63);
  pcVar6 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8d74);
  if (*pcVar6 == '\0') {
    puVar19 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8d64);
    *(undefined1 *)((int)puVar19 + 0x11) = 1;
    uVar2 = DAT_70072ad4;
    uVar26 = DAT_70072ad0;
    uVar9 = DAT_70072acc;
    *puVar19 = DAT_70072ac8;
    puVar19[1] = uVar9;
    puVar19[2] = uVar26;
    puVar19[3] = uVar2;
    *(undefined1 *)(puVar19 + 4) = DAT_70072ad8;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_713095f8,puVar19,&DAT_70b0e000);
    puVar20 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8d74);
    *puVar20 = 1;
  }
  iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8d64);
  if (*(char *)(iVar7 + 0x11) != '\0') {
    uVar22 = 0;
    uVar21 = 0;
    do {
      iVar24 = (uVar22 & 7) * 8;
      uVar25 = iVar24 - 0x20;
      bVar5 = (byte)(0x4167492b >> iVar24) | (byte)(0x5d5373a5 << ((uVar22 & 7) * -8 + 0x20 & 0xff))
      ;
      if (-1 < (int)uVar25) {
        bVar5 = (byte)(0x5d5373a5 >> (uVar25 & 0xff));
      }
      *(byte *)(iVar7 + uVar22) = *(byte *)(iVar7 + uVar22) ^ bVar5;
      bVar27 = 0xfffffffe < uVar22;
      bVar23 = uVar21 == 0;
      bVar1 = (0xf < uVar22) <= uVar21;
      uVar22 = uVar22 + 1;
      uVar21 = uVar21 + bVar27;
    } while (bVar23 && bVar1);
    *(undefined1 *)(iVar7 + 0x11) = 0;
  }
  pcVar6 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8d94);
  if (*pcVar6 == '\0') {
    puVar19 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8d84);
    *puVar19 = 0x1672b59;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_7130962c,puVar19,&DAT_70b0e000);
    puVar20 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8d94);
    *puVar20 = 1;
  }
  pbVar8 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8d84);
  if (pbVar8[3] != 0) {
    pbVar8[3] = 0;
    *pbVar8 = *pbVar8 ^ 0x2b;
    pbVar8[1] = pbVar8[1] ^ 0x49;
    pbVar8[2] = pbVar8[2] ^ 0x67;
  }
  uVar9 = FUN_71339d5c(iVar7);
  pcVar6 = (char *)FUN_7132d218();
  if (pcVar6 != (char *)0x0) {
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8e24);
    pbVar8 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8e44);
    pbVar10 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8e64);
    pbVar11 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8e84);
    pbVar12 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8da4);
    pbVar13 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8dc4);
    pbVar14 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8de4);
    pbVar15 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8e04);
    bVar23 = false;
    uStack_94 = 0;
    do {
      if (*pcVar6 != '\0' && *pcVar6 != '#') {
        if (bVar23) {
          pcVar16 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8db4);
          if (*pcVar16 == '\0') {
            puVar19 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8da4);
            *puVar19 = 0x1c78cece;
            *(undefined2 *)(puVar19 + 1) = 0x1cf;
            thunk_GFDIUClbc_QcPNgD_wH(&LAB_71309654,puVar19,&DAT_70b0e000);
            puVar20 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8db4);
            *puVar20 = 1;
          }
          if (pbVar12[5] != 0) {
            pbVar12[5] = 0;
            *pbVar12 = *pbVar12 ^ 0xeb;
            pbVar12[1] = pbVar12[1] ^ 0xfd;
            pbVar12[2] = pbVar12[2] ^ 0x49;
            pbVar12[3] = pbVar12[3] ^ 0x6f;
            pbVar12[4] = pbVar12[4] ^ 0xcf;
          }
          iVar24 = imp_sscanf(pcVar6,pbVar12,aiStack_48);
          bVar23 = true;
          if (iVar24 == 1) {
            pcVar6 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8dd4);
            if (*pcVar6 == '\0') {
              puVar19 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8dc4);
              *puVar19 = 0xc5af0d50;
              *(undefined1 *)(puVar19 + 1) = 1;
              thunk_GFDIUClbc_QcPNgD_wH(&LAB_7130967c,puVar19,&DAT_70b0e000);
              puVar20 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8dd4);
              *puVar20 = 1;
            }
            if (pbVar13[4] != 0) {
              pbVar13[4] = 0;
              *pbVar13 = *pbVar13 ^ 0x35;
              pbVar13[1] = pbVar13[1] ^ 99;
              pbVar13[2] = pbVar13[2] ^ 0xcb;
              pbVar13[3] = pbVar13[3] ^ 0xc5;
            }
            if (aiStack_48[0] == *(int *)pbVar13) {
              bVar23 = false;
            }
            else if (uStack_94 < uStack_8c) {
              pcVar6 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8df4);
              if (*pcVar6 == '\0') {
                puVar18 = (undefined2 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8de4);
                *puVar18 = 0x8792;
                *(undefined1 *)(puVar18 + 1) = 1;
                thunk_GFDIUClbc_QcPNgD_wH(&LAB_713096a0,puVar18,&DAT_70b0e000);
                puVar20 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8df4);
                *puVar20 = 1;
              }
              if (pbVar14[2] != 0) {
                pbVar14[2] = 0;
                *pbVar14 = *pbVar14 ^ 0xbf;
                pbVar14[1] = pbVar14[1] ^ 0x87;
              }
              iVar24 = imp_strcmp(aiStack_48);
              if (iVar24 != 0) {
                uVar26 = *(undefined4 *)(*(int *)(iStack_a0 + 0x28) + uStack_94 * 4);
                pcVar6 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8e14);
                uVar22 = extraout_r2;
                if (*pcVar6 == '\0') {
                  puVar19 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8e04);
                  *puVar19 = 0x1bfe40e;
                  thunk_GFDIUClbc_QcPNgD_wH(&LAB_713096c4,puVar19,&DAT_70b0e000);
                  puVar20 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8e14);
                  *puVar20 = 1;
                  uVar22 = extraout_r2_00;
                }
                if (pbVar15[3] != 0) {
                  pbVar15[3] = 0;
                  uVar22 = (uint)pbVar15[2];
                  *pbVar15 = *pbVar15 ^ 0x2b;
                  pbVar15[1] = pbVar15[1] ^ 0x97;
                  pbVar15[2] = pbVar15[2] ^ 0xbf;
                }
                FUN_71306738(uVar26,0xffffffff,uVar22,pbVar15,aiStack_48);
              }
              uStack_94 = uStack_94 + 1;
              goto LAB_71305438;
            }
          }
        }
        else {
          pcVar16 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8e34);
          if (*pcVar16 == '\0') {
            puVar19 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8e24);
            *(undefined1 *)((int)puVar19 + 0x12) = 1;
            uVar3 = DAT_70072aec;
            uVar2 = DAT_70072ae8;
            uVar26 = DAT_70072ae4;
            *puVar19 = DAT_70072ae0;
            puVar19[1] = uVar26;
            puVar19[2] = uVar2;
            puVar19[3] = uVar3;
            *(undefined2 *)(puVar19 + 4) = DAT_70072af0;
            thunk_GFDIUClbc_QcPNgD_wH(&LAB_713096ec,puVar19,&DAT_70b0e000);
            puVar20 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8e34);
            *puVar20 = 1;
          }
          if (*(char *)(iVar7 + 0x12) != '\0') {
            uVar22 = 0;
            uVar21 = 0;
            do {
              iVar24 = (uVar22 & 7) * 8;
              uVar25 = iVar24 - 0x20;
              bVar5 = (byte)(0x71ffd95b >> iVar24) |
                      (byte)(0x1ff1a10b << ((uVar22 & 7) * -8 + 0x20 & 0xff));
              if (-1 < (int)uVar25) {
                bVar5 = (byte)(0x1ff1a10b >> (uVar25 & 0xff));
              }
              *(byte *)(iVar7 + uVar22) = *(byte *)(iVar7 + uVar22) ^ bVar5;
              bVar27 = 0xfffffffe < uVar22;
              bVar23 = uVar21 == 0;
              bVar1 = (0x10 < uVar22) <= uVar21;
              uVar22 = uVar22 + 1;
              uVar21 = uVar21 + bVar27;
            } while (bVar23 && bVar1);
            *(undefined1 *)(iVar7 + 0x12) = 0;
          }
          iVar24 = imp_sscanf(pcVar6,iVar7,aiStack_48,auStack_68,auStack_88,&uStack_8c);
          bVar23 = false;
          if (iVar24 == 4) {
            pcVar6 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8e54);
            puVar4 = DAT_70b2e86c;
            if (*pcVar6 == '\0') {
              puVar19 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8e44);
              *puVar19 = 0x212cf620;
              *(undefined2 *)(puVar19 + 1) = 0x129;
              thunk_GFDIUClbc_QcPNgD_wH(&LAB_71309720,puVar19,&DAT_70b0e000);
              puVar20 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8e54);
              *puVar20 = 1;
            }
            if (pbVar8[5] != 0) {
              pbVar8[5] = 0;
              *pbVar8 = *pbVar8 ^ 0x51;
              pbVar8[1] = pbVar8[1] ^ 0x83;
              pbVar8[2] = pbVar8[2] ^ 0x4d;
              pbVar8[3] = pbVar8[3] ^ 0x45;
              pbVar8[4] = pbVar8[4] ^ 0x29;
            }
            iVar24 = imp_strcmp(auStack_88);
            puVar17 = &DAT_700b89e4;
            if (iVar24 != 0) {
              pcVar6 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8e74);
              if (*pcVar6 == '\0') {
                puVar19 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8e64);
                *puVar19 = 0x25503bdb;
                puVar19[1] = 0x11be65a6;
                *(undefined1 *)(puVar19 + 2) = 1;
                thunk_GFDIUClbc_QcPNgD_wH(&LAB_71309748,puVar19,&DAT_70b0e000);
                puVar20 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8e74);
                *puVar20 = 1;
              }
              if (pbVar10[8] != 0) {
                pbVar10[8] = 0;
                *pbVar10 = *pbVar10 ^ 0xbf;
                pbVar10[1] = pbVar10[1] ^ 0x49;
                pbVar10[2] = pbVar10[2] ^ 0x39;
                pbVar10[3] = pbVar10[3] ^ 0x53;
                pbVar10[4] = pbVar10[4] ^ 0xc3;
                pbVar10[5] = pbVar10[5] ^ 7;
                pbVar10[6] = pbVar10[6] ^ 199;
                pbVar10[7] = pbVar10[7] ^ 0x11;
              }
              iVar24 = imp_strcmp(auStack_88);
              puVar17 = puVar4;
              if (iVar24 != 0) {
                pcVar6 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8e94);
                if (*pcVar6 == '\0') {
                  puVar19 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8e84);
                  *(undefined2 *)(puVar19 + 2) = 0x135;
                  *puVar19 = 0x8b8c5444;
                  puVar19[1] = 0x10fa30fb;
                  thunk_GFDIUClbc_QcPNgD_wH(&LAB_71309770,puVar19,&DAT_70b0e000);
                  puVar20 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8e94);
                  *puVar20 = 1;
                }
                if (pbVar11[9] != 0) {
                  pbVar11[9] = 0;
                  *pbVar11 = *pbVar11 ^ 0x35;
                  pbVar11[1] = pbVar11[1] ^ 0x21;
                  pbVar11[2] = pbVar11[2] ^ 0xed;
                  pbVar11[3] = pbVar11[3] ^ 0xef;
                  pbVar11[4] = pbVar11[4] ^ 0x99;
                  pbVar11[5] = pbVar11[5] ^ 0x59;
                  pbVar11[6] = pbVar11[6] ^ 0x91;
                  pbVar11[7] = pbVar11[7] ^ 0x75;
                  pbVar11[8] = pbVar11[8] ^ 0x35;
                }
                iVar24 = imp_strcmp(auStack_88);
                if (iVar24 == 0) {
                  puVar17 = &DAT_700b8a44;
                }
              }
            }
            iStack_a0 = FUN_71304934(aiStack_48,auStack_68,7,uStack_8c,puVar17);
            uStack_94 = 0;
LAB_71305438:
            bVar23 = true;
          }
        }
      }
      pcVar6 = (char *)FUN_7132d218(uVar9);
    } while (pcVar6 != (char *)0x0);
  }
  FUN_7133a194(uVar9);
  if (_ext___stack_chk_guard != iStack_28) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail();
  }
  return;
}


// =========================================================================
// Function: FUN_71306738
// Entry: 0x71306738 | Size: 56 bytes
// =========================================================================

void FUN_71306738(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  imp___vsnprintf_chk(param_1,0x18,0,param_2,param_4,&stack0x00000000);
  return;
}


// =========================================================================
// Function: FUN_713067a4
// Entry: 0x713067a4 | Size: 400 bytes
// =========================================================================

void FUN_713067a4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b2e8c8 & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2e8c8), iVar4 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8eb4,param_2,param_3);
    if (*pcVar5 == '\0') {
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8ea4);
      *(undefined1 *)(iVar4 + 0x57) = 1;
      imp___aeabi_memcpy8(iVar4,&DAT_70072af8,0x57);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7130979c,iVar4,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8eb4);
      *puVar6 = 1;
    }
    iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8ea4);
    if (*(char *)(iVar4 + 0x57) != '\0') {
      uVar7 = 0;
      uVar8 = 0;
      do {
        iVar9 = (uVar7 & 7) * 8;
        bVar3 = (byte)(0xd3739db3 >> iVar9) | (byte)(0x3fa781a3 << ((uVar7 & 7) * -8 + 0x20 & 0xff))
        ;
        uVar10 = iVar9 - 0x20;
        if (-1 < (int)uVar10) {
          bVar3 = (byte)(0x3fa781a3 >> (uVar10 & 0xff));
        }
        *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
        bVar11 = 0xfffffffe < uVar7;
        bVar1 = uVar8 == 0;
        bVar2 = (0x55 < uVar7) <= uVar8;
        uVar7 = uVar7 + 1;
        uVar8 = uVar8 + bVar11;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar4 + 0x57) = 0;
    }
    DAT_70b2e8c4 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b2e8c8);
  }
                    /* WARNING: Could not recover jumptable at 0x713067d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b2e8c4)(param_1,param_2,param_3);
  return;
}


// =========================================================================
// Function: FUN_71306be8
// Entry: 0x71306be8 | Size: 400 bytes
// =========================================================================

void FUN_71306be8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b2e8d0 & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2e8d0), iVar4 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8ed4,param_2,param_3);
    if (*pcVar5 == '\0') {
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8ec4);
      *(undefined1 *)(iVar4 + 0x58) = 1;
      imp___aeabi_memcpy8(iVar4,&DAT_70072b50,0x58);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713097ec,iVar4,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8ed4);
      *puVar6 = 1;
    }
    iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8ec4);
    if (*(char *)(iVar4 + 0x58) != '\0') {
      uVar7 = 0;
      uVar8 = 0;
      do {
        iVar9 = (uVar7 & 7) * 8;
        bVar3 = (byte)(0xadc343bd >> iVar9) | (byte)(-0xe467e03 << ((uVar7 & 7) * -8 + 0x20 & 0xff))
        ;
        uVar10 = iVar9 - 0x20;
        if (-1 < (int)uVar10) {
          bVar3 = (byte)(0xf1b981fd >> (uVar10 & 0xff));
        }
        *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
        bVar11 = 0xfffffffe < uVar7;
        bVar1 = uVar8 == 0;
        bVar2 = (0x56 < uVar7) <= uVar8;
        uVar7 = uVar7 + 1;
        uVar8 = uVar8 + bVar11;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar4 + 0x58) = 0;
    }
    DAT_70b2e8cc = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b2e8d0);
  }
                    /* WARNING: Could not recover jumptable at 0x71306c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b2e8cc)(param_1,param_2,param_3);
  return;
}


// =========================================================================
// Function: FUN_7130702c
// Entry: 0x7130702c | Size: 412 bytes
// =========================================================================

void FUN_7130702c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  
  DataMemoryBarrier(0xb);
  if ((DAT_70b2e8d8 & 1) == 0) {
    iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2e8d8);
    if (iVar4 != 0) {
      pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8ef4,param_2,param_3,param_4);
      if (*pcVar5 == '\0') {
        iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8ee4);
        *(undefined1 *)(iVar4 + 0x67) = 1;
        imp___aeabi_memcpy8(iVar4,&DAT_70072ba8,0x67);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_7130983c,iVar4,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8ef4);
        *puVar6 = 1;
      }
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8ee4);
      if (*(char *)(iVar4 + 0x67) != '\0') {
        uVar7 = 0;
        uVar8 = 0;
        do {
          iVar9 = (uVar7 & 7) * 8;
          bVar3 = (byte)(0x51cb8319 >> iVar9) |
                  (byte)(0x235f5753 << ((uVar7 & 7) * -8 + 0x20 & 0xff));
          uVar10 = iVar9 - 0x20;
          if (-1 < (int)uVar10) {
            bVar3 = (byte)(0x235f5753 >> (uVar10 & 0xff));
          }
          *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
          bVar11 = 0xfffffffe < uVar7;
          bVar1 = uVar8 == 0;
          bVar2 = (0x65 < uVar7) <= uVar8;
          uVar7 = uVar7 + 1;
          uVar8 = uVar8 + bVar11;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar4 + 0x67) = 0;
      }
      DAT_70b2e8d4 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70b2e8d8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x71307060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b2e8d4)(param_1,param_2,param_3,param_4);
  return;
}


// =========================================================================
// Function: FUN_7130747c
// Entry: 0x7130747c | Size: 412 bytes
// =========================================================================

void FUN_7130747c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  
  DataMemoryBarrier(0xb);
  if ((DAT_70b2e8e0 & 1) == 0) {
    iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2e8e0);
    if (iVar4 != 0) {
      pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8f14,param_2,param_3,param_4);
      if (*pcVar5 == '\0') {
        iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8f04);
        *(undefined1 *)(iVar4 + 0x68) = 1;
        imp___aeabi_memcpy8(iVar4,&DAT_70072c10,0x68);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_7130988c,iVar4,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8f14);
        *puVar6 = 1;
      }
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8f04);
      if (*(char *)(iVar4 + 0x68) != '\0') {
        uVar7 = 0;
        uVar8 = 0;
        do {
          iVar9 = (uVar7 & 7) * 8;
          bVar3 = (byte)(0xb583fb01 >> iVar9) |
                  (byte)(-0xe16f8ad << ((uVar7 & 7) * -8 + 0x20 & 0xff));
          uVar10 = iVar9 - 0x20;
          if (-1 < (int)uVar10) {
            bVar3 = (byte)(0xf1e90753 >> (uVar10 & 0xff));
          }
          *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
          bVar11 = 0xfffffffe < uVar7;
          bVar1 = uVar8 == 0;
          bVar2 = (0x66 < uVar7) <= uVar8;
          uVar7 = uVar7 + 1;
          uVar8 = uVar8 + bVar11;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar4 + 0x68) = 0;
      }
      DAT_70b2e8dc = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70b2e8e0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x713074b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b2e8dc)(param_1,param_2,param_3,param_4);
  return;
}


// =========================================================================
// Function: FUN_713078cc
// Entry: 0x713078cc | Size: 396 bytes
// =========================================================================

void FUN_713078cc(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b2e8e8 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2e8e8), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8f34);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8f24);
      *(undefined1 *)((int)puVar10 + 0x36) = 1;
      uVar5 = DAT_70072c84;
      uVar4 = DAT_70072c80;
      uVar3 = DAT_70072c7c;
      *puVar10 = DAT_70072c78;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar5 = DAT_70072c94;
      uVar4 = DAT_70072c90;
      uVar3 = DAT_70072c8c;
      puVar10[4] = DAT_70072c88;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      uVar6 = DAT_70072ca8;
      uVar5 = DAT_70072ca4;
      uVar4 = DAT_70072ca0;
      uVar3 = DAT_70072c9c;
      puVar10[8] = DAT_70072c98;
      puVar10[9] = uVar3;
      puVar10[10] = uVar4;
      puVar10[0xb] = uVar5;
      puVar10[0xc] = uVar6;
      *(undefined2 *)(puVar10 + 0xd) = DAT_70072cac;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713098dc,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8f34);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8f24);
    if (*(char *)(iVar8 + 0x36) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xc51ddfb3 >> iVar14) |
                (byte)(0x530d433b << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x530d433b >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x34 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x36) = 0;
    }
    DAT_70b2e8e4 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b2e8e8);
  }
                    /* WARNING: Could not recover jumptable at 0x713078f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b2e8e4)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71307cf0
// Entry: 0x71307cf0 | Size: 368 bytes
// =========================================================================

void FUN_71307cf0(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b2e8f0 & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2e8f0), iVar4 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8f54);
    if (*pcVar5 == '\0') {
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8f44);
      *(undefined1 *)(iVar4 + 0x44) = 1;
      imp___aeabi_memcpy8(iVar4,&DAT_70072cb0,0x44);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7130992c,iVar4,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8f54);
      *puVar6 = 1;
    }
    iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8f44);
    if (*(char *)(iVar4 + 0x44) != '\0') {
      uVar7 = 0;
      uVar8 = 0;
      do {
        iVar9 = (uVar7 & 7) * 8;
        bVar3 = (byte)(0x23e9f97b >> iVar9) | (byte)(0x4971799d << ((uVar7 & 7) * -8 + 0x20 & 0xff))
        ;
        uVar10 = iVar9 - 0x20;
        if (-1 < (int)uVar10) {
          bVar3 = (byte)(0x4971799d >> (uVar10 & 0xff));
        }
        *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
        bVar11 = 0xfffffffe < uVar7;
        bVar1 = uVar8 == 0;
        bVar2 = (0x42 < uVar7) <= uVar8;
        uVar7 = uVar7 + 1;
        uVar8 = uVar8 + bVar11;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar4 + 0x44) = 0;
    }
    DAT_70b2e8ec = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b2e8f0);
  }
                    /* WARNING: Could not recover jumptable at 0x71307d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b2e8ec)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71308114
// Entry: 0x71308114 | Size: 416 bytes
// =========================================================================

void FUN_71308114(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b2e8f8 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2e8f8), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8f74,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8f64);
      *(undefined1 *)((int)puVar10 + 0x3e) = 1;
      uVar6 = DAT_70072d08;
      uVar5 = DAT_70072d04;
      uVar4 = DAT_70072d00;
      uVar3 = DAT_70072cfc;
      *puVar10 = DAT_70072cf8;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_70072d1c;
      uVar5 = DAT_70072d18;
      uVar4 = DAT_70072d14;
      uVar3 = DAT_70072d10;
      puVar10[5] = DAT_70072d0c;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      uVar6 = DAT_70072d30;
      uVar5 = DAT_70072d2c;
      uVar4 = DAT_70072d28;
      uVar3 = DAT_70072d24;
      puVar10[10] = DAT_70072d20;
      puVar10[0xb] = uVar3;
      puVar10[0xc] = uVar4;
      puVar10[0xd] = uVar5;
      puVar10[0xe] = uVar6;
      *(undefined2 *)(puVar10 + 0xf) = DAT_70072d34;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7130997c,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8f74);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8f64);
    if (*(char *)(iVar8 + 0x3e) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xdf95413f >> iVar14) |
                (byte)(-0x5422ac2b << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xabdd53d5 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x3c < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x3e) = 0;
    }
    DAT_70b2e8f4 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b2e8f8);
  }
                    /* WARNING: Could not recover jumptable at 0x71308148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b2e8f4)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_7130854c
// Entry: 0x7130854c | Size: 380 bytes
// =========================================================================

void FUN_7130854c(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b2e900 & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2e900), iVar4 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8f94,param_2);
    if (*pcVar5 == '\0') {
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8f84);
      *(undefined1 *)(iVar4 + 0x43) = 1;
      imp___aeabi_memcpy8(iVar4,&DAT_70072d38,0x43);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713099cc,iVar4,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8f94);
      *puVar6 = 1;
    }
    iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8f84);
    if (*(char *)(iVar4 + 0x43) != '\0') {
      uVar7 = 0;
      uVar8 = 0;
      do {
        iVar9 = (uVar7 & 7) * 8;
        uVar10 = iVar9 - 0x20;
        bVar3 = (byte)(0x65cda327 >> iVar9) | (byte)(0x2b6d3519 << ((uVar7 & 7) * -8 + 0x20 & 0xff))
        ;
        if (-1 < (int)uVar10) {
          bVar3 = (byte)(0x2b6d3519 >> (uVar10 & 0xff));
        }
        *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
        bVar11 = 0xfffffffe < uVar7;
        bVar1 = uVar8 == 0;
        bVar2 = (0x41 < uVar7) <= uVar8;
        uVar7 = uVar7 + 1;
        uVar8 = uVar8 + bVar11;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar4 + 0x43) = 0;
    }
    DAT_70b2e8fc = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b2e900);
  }
                    /* WARNING: Could not recover jumptable at 0x71308578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b2e8fc)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_7130897c
// Entry: 0x7130897c | Size: 388 bytes
// =========================================================================

void FUN_7130897c(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b2e908 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2e908), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8fb4);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8fa4);
      *(undefined1 *)(puVar10 + 0xe) = 1;
      uVar5 = DAT_70072d8c;
      uVar4 = DAT_70072d88;
      uVar3 = DAT_70072d84;
      *puVar10 = DAT_70072d80;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_70072da0;
      uVar5 = DAT_70072d9c;
      uVar4 = DAT_70072d98;
      uVar3 = DAT_70072d94;
      puVar10[4] = DAT_70072d90;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      uVar6 = DAT_70072db4;
      uVar5 = DAT_70072db0;
      uVar4 = DAT_70072dac;
      uVar3 = DAT_70072da8;
      puVar10[9] = DAT_70072da4;
      puVar10[10] = uVar3;
      puVar10[0xb] = uVar4;
      puVar10[0xc] = uVar5;
      puVar10[0xd] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71309a1c,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8fb4);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8fa4);
    if (*(char *)(iVar8 + 0x38) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x8debe1ed >> iVar14) |
                (byte)(-0x40187071 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xbfe78f8f >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x36 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x38) = 0;
    }
    DAT_70b2e904 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b2e908);
  }
                    /* WARNING: Could not recover jumptable at 0x713089a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b2e904)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71308d98
// Entry: 0x71308d98 | Size: 396 bytes
// =========================================================================

void FUN_71308d98(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b2e910 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2e910), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8fd4);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8fc4);
      *(undefined1 *)((int)puVar10 + 0x35) = 1;
      uVar5 = DAT_70072dc4;
      uVar4 = DAT_70072dc0;
      uVar3 = DAT_70072dbc;
      *puVar10 = DAT_70072db8;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar5 = DAT_70072dd4;
      uVar4 = DAT_70072dd0;
      uVar3 = DAT_70072dcc;
      puVar10[4] = DAT_70072dc8;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      uVar6 = DAT_70072de8;
      uVar5 = DAT_70072de4;
      uVar4 = DAT_70072de0;
      uVar3 = DAT_70072ddc;
      puVar10[8] = DAT_70072dd8;
      puVar10[9] = uVar3;
      puVar10[10] = uVar4;
      puVar10[0xb] = uVar5;
      puVar10[0xc] = uVar6;
      *(undefined1 *)(puVar10 + 0xd) = DAT_70072dec;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71309a6c,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8fd4);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8fc4);
    if (*(char *)(iVar8 + 0x35) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x1bd16de9 >> iVar14) |
                (byte)(-0x46c0d2bf << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xb93f2d41 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x33 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x35) = 0;
    }
    DAT_70b2e90c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b2e910);
  }
                    /* WARNING: Could not recover jumptable at 0x71308dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b2e90c)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7130bb60
// Entry: 0x7130bb60 | Size: 272 bytes
// =========================================================================

void FUN_7130bb60(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  
  iVar7 = param_2 + param_3 * 0xc;
  puVar8 = (undefined4 *)(iVar7 + 0x40);
  uVar5 = *puVar8;
  uVar6 = *(undefined4 *)(iVar7 + 0x48);
  uVar2 = FUN_71ba21e8(*(undefined4 *)(iVar7 + 0x44),*(undefined4 *)(iVar7 + 0x44));
  uVar5 = FUN_71ba21e8(uVar5,uVar5);
  uVar2 = FUN_71ba0b38(uVar5,uVar2);
  uVar5 = FUN_71ba21e8(uVar6,uVar6);
  uVar2 = FUN_71ba0b38(uVar5,uVar2);
  iVar3 = FUN_71ba2cf0(uVar2,0);
  if (iVar3 != 0) {
    uVar2 = 0x167;
    if (param_3 - 1U < 6) {
      uVar2 = *(undefined4 *)(&DAT_70072e20 + (param_3 - 1U) * 4);
    }
    uVar5 = FUN_7130bddc(param_2,uVar2);
    iVar3 = FUN_71303460(uVar5,uVar2);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar3 == 0) {
      iVar3 = FUN_71303460(0x58,uVar2);
      iVar3 = *(int *)(iVar3 + 0x10);
      if (iVar3 == 0) goto LAB_7130bc60;
    }
    iVar3 = *(int *)(iVar3 + 4);
    FUN_71303890();
    if (0 < *(short *)(iVar3 + 6)) {
      iVar4 = *(short *)(iVar3 + 6) + -1;
      iVar1 = iVar4 * 0x20;
      if ((*(byte *)(iVar3 + 4) & 2) == 0) {
        iVar1 = iVar4 * 0x14;
      }
      FUN_7136d040(puVar8,*(int *)(iVar3 + 8) + iVar1 + 0x14);
    }
  }
LAB_7130bc60:
  uVar2 = *(undefined4 *)(iVar7 + 0x44);
  uVar5 = *(undefined4 *)(iVar7 + 0x48);
  *param_1 = *puVar8;
  param_1[1] = uVar2;
  param_1[2] = uVar5;
  return;
}


// =========================================================================
// Function: FUN_7130bddc
// Entry: 0x7130bddc | Size: 408 bytes
// =========================================================================

void FUN_7130bddc(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b2fb48 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2fb48), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8ff4,param_2);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8fe4);
      *(undefined1 *)((int)puVar11 + 0x2d) = 1;
      uVar6 = DAT_70072e00;
      uVar5 = DAT_70072dfc;
      uVar4 = DAT_70072df8;
      uVar3 = DAT_70072df4;
      *puVar11 = DAT_70072df0;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      uVar7 = DAT_70072e18;
      uVar6 = DAT_70072e14;
      uVar5 = DAT_70072e10;
      uVar4 = DAT_70072e0c;
      uVar3 = DAT_70072e08;
      puVar11[5] = DAT_70072e04;
      puVar11[6] = uVar3;
      puVar11[7] = uVar4;
      puVar11[8] = uVar5;
      puVar11[9] = uVar6;
      puVar11[10] = uVar7;
      *(undefined1 *)(puVar11 + 0xb) = DAT_70072e1c;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7130c20c,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8ff4);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b8fe4);
    if (*(char *)(iVar9 + 0x2d) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x9d7d13e5 >> iVar15) |
                (byte)(-0x2ae85489 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0xd517ab77 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x2b < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x2d) = 0;
    }
    DAT_70b2fb44 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b2fb48);
  }
                    /* WARNING: Could not recover jumptable at 0x7130be10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b2fb44)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_7130c3e4
// Entry: 0x7130c3e4 | Size: 364 bytes
// =========================================================================

void FUN_7130c3e4(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  byte bVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b2fb50 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2fb50), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9014);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9004);
      *(undefined1 *)((int)puVar9 + 0x29) = 1;
      uVar6 = DAT_70072e48;
      uVar5 = DAT_70072e44;
      uVar4 = DAT_70072e40;
      uVar3 = DAT_70072e3c;
      *puVar9 = DAT_70072e38;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      puVar9[4] = uVar6;
      uVar6 = DAT_70072e5c;
      uVar5 = DAT_70072e58;
      uVar4 = DAT_70072e54;
      uVar3 = DAT_70072e50;
      puVar9[5] = DAT_70072e4c;
      puVar9[6] = uVar3;
      puVar9[7] = uVar4;
      puVar9[8] = uVar5;
      puVar9[9] = uVar6;
      *(undefined1 *)(puVar9 + 10) = DAT_70072e60;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7130c7e8,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9014);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9004);
    if (*(char *)(iVar7 + 0x29) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar15 = (byte)(0xa9f11975 >> iVar13) |
                 (byte)(0x47910569 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar15 = (byte)(0x47910569 >> (uVar14 & 0xff));
        }
        *(byte *)(iVar7 + uVar11) = *(byte *)(iVar7 + uVar11) ^ bVar15;
        bVar16 = 0xfffffffe < uVar11;
        bVar1 = uVar12 == 0;
        bVar2 = (0x27 < uVar11) <= uVar12;
        uVar11 = uVar11 + 1;
        uVar12 = uVar12 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar7 + 0x29) = 0;
    }
    DAT_70b2fb4c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b2fb50);
  }
                    /* WARNING: Could not recover jumptable at 0x7130c410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b2fb4c)();
  return;
}


// =========================================================================
// Function: FUN_7130c838
// Entry: 0x7130c838 | Size: 380 bytes
// =========================================================================

void FUN_7130c838(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b2fb5c & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2fb5c), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9054);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9044);
      *(undefined1 *)((int)puVar11 + 0x1a) = 1;
      uVar7 = DAT_70072e7c;
      uVar6 = DAT_70072e78;
      uVar5 = DAT_70072e74;
      uVar4 = DAT_70072e70;
      uVar3 = DAT_70072e6c;
      *puVar11 = DAT_70072e68;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      puVar11[5] = uVar7;
      *(undefined2 *)(puVar11 + 6) = DAT_70072e80;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7130ccb8,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9054);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9044);
    if (*(char *)(iVar9 + 0x1a) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x2549d30d >> iVar15) |
                (byte)(0x65617345 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0x65617345 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x18 < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x1a) = 0;
    }
    DAT_70b2fb58 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b2fb5c);
  }
                    /* WARNING: Could not recover jumptable at 0x7130c864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b2fb58)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7130d61c
// Entry: 0x7130d61c | Size: 396 bytes
// =========================================================================

void FUN_7130d61c(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b2fb78 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2fb78), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b90b4);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b90a4);
      *(undefined1 *)((int)puVar10 + 0x3d) = 1;
      uVar6 = DAT_70072ef8;
      uVar5 = DAT_70072ef4;
      uVar4 = DAT_70072ef0;
      uVar3 = DAT_70072eec;
      *puVar10 = DAT_70072ee8;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_70072f0c;
      uVar5 = DAT_70072f08;
      uVar4 = DAT_70072f04;
      uVar3 = DAT_70072f00;
      puVar10[5] = DAT_70072efc;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      uVar6 = DAT_70072f20;
      uVar5 = DAT_70072f1c;
      uVar4 = DAT_70072f18;
      uVar3 = DAT_70072f14;
      puVar10[10] = DAT_70072f10;
      puVar10[0xb] = uVar3;
      puVar10[0xc] = uVar4;
      puVar10[0xd] = uVar5;
      puVar10[0xe] = uVar6;
      *(undefined1 *)(puVar10 + 0xf) = DAT_70072f24;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7130dac8,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b90b4);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b90a4);
    if (*(char *)(iVar8 + 0x3d) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xf7f5f1d5 >> iVar14) |
                (byte)(-0x6ede64e1 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x91219b1f >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x3b < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x3d) = 0;
    }
    DAT_70b2fb74 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b2fb78);
  }
                    /* WARNING: Could not recover jumptable at 0x7130d648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b2fb74)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7130df44
// Entry: 0x7130df44 | Size: 400 bytes
// =========================================================================

void FUN_7130df44(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b2fb88 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2fb88), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b90d4,param_2);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b90c4);
      *(undefined1 *)(puVar11 + 0xb) = 1;
      uVar6 = DAT_70072f38;
      uVar5 = DAT_70072f34;
      uVar4 = DAT_70072f30;
      uVar3 = DAT_70072f2c;
      *puVar11 = DAT_70072f28;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      uVar7 = DAT_70072f50;
      uVar6 = DAT_70072f4c;
      uVar5 = DAT_70072f48;
      uVar4 = DAT_70072f44;
      uVar3 = DAT_70072f40;
      puVar11[5] = DAT_70072f3c;
      puVar11[6] = uVar3;
      puVar11[7] = uVar4;
      puVar11[8] = uVar5;
      puVar11[9] = uVar6;
      puVar11[10] = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7130e36c,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b90d4);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b90c4);
    if (*(char *)(iVar9 + 0x2c) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x9f9d9cf >> iVar15) | (byte)(0xb5181c5 << ((uVar13 & 7) * -8 + 0x20 & 0xff))
        ;
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0xb5181c5 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x2a < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x2c) = 0;
    }
    DAT_70b2fb84 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b2fb88);
  }
                    /* WARNING: Could not recover jumptable at 0x7130df78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b2fb84)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_7130e838
// Entry: 0x7130e838 | Size: 400 bytes
// =========================================================================

void FUN_7130e838(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b2fbb8 & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2fbb8), iVar4 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9194,param_2,param_3);
    if (*pcVar5 == '\0') {
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9184);
      *(undefined1 *)(iVar4 + 0x4b) = 1;
      imp___aeabi_memcpy8(iVar4,&DAT_70073020,0x4b);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7130f93c,iVar4,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9194);
      *puVar6 = 1;
    }
    iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9184);
    if (*(char *)(iVar4 + 0x4b) != '\0') {
      uVar7 = 0;
      uVar8 = 0;
      do {
        iVar9 = (uVar7 & 7) * 8;
        bVar3 = (byte)(0x1b4949a3 >> iVar9) |
                (byte)(-0x74424c51 << ((uVar7 & 7) * -8 + 0x20 & 0xff));
        uVar10 = iVar9 - 0x20;
        if (-1 < (int)uVar10) {
          bVar3 = (byte)(0x8bbdb3af >> (uVar10 & 0xff));
        }
        *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
        bVar11 = 0xfffffffe < uVar7;
        bVar1 = uVar8 == 0;
        bVar2 = (0x49 < uVar7) <= uVar8;
        uVar7 = uVar7 + 1;
        uVar8 = uVar8 + bVar11;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar4 + 0x4b) = 0;
    }
    DAT_70b2fbb4 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b2fbb8);
  }
                    /* WARNING: Could not recover jumptable at 0x7130e86c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b2fbb4)(param_1,param_2,param_3);
  return;
}


// =========================================================================
// Function: FUN_7130ec7c
// Entry: 0x7130ec7c | Size: 228 bytes
// =========================================================================

void FUN_7130ec7c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  uStack_24 = 48000;
  uStack_28 = 0x1007;
  uStack_20 = 0;
  iVar1 = imp_alcOpenDevice();
  *(int *)(param_1 + 0xb80) = iVar1;
  if (DAT_711f6bfc == 0) {
    DAT_711f6bfc = iVar1;
  }
  iVar1 = imp_alcCreateContext(iVar1,&uStack_28);
  *(int *)(param_1 + 0xb84) = iVar1;
  if (DAT_711f6c00 == 0) {
    DAT_711f6c00 = iVar1;
  }
  imp_alcMakeContextCurrent();
  imp_alListenerf(0x100a,0x3f000000);
  imp_alListener3f(0x1004,0,0,0);
  imp_alListener3f(0x1006,0,0,0);
  imp_alListenerfv(0x100f);
  imp_alDistanceModel(0);
  uVar2 = FUN_714b9668(s_OALTrash_700625e7);
  *DAT_70b2fb98 = uVar2;
  return;
}


// =========================================================================
// Function: FUN_7130f06c
// Entry: 0x7130f06c | Size: 324 bytes
// =========================================================================

undefined4 FUN_7130f06c(undefined1 *param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  
  thunk_MwhHq(0x34);
  uVar2 = FUN_71312d50();
  *(undefined4 *)(param_1 + 0xb78) = uVar2;
  thunk_MwhHq(0x24);
  uVar2 = FUN_71317fac();
  *(undefined4 *)(param_1 + 0xb7c) = uVar2;
  iVar3 = FUN_71313194(*(undefined4 *)(param_1 + 0xb78));
  uVar2 = 0;
  if ((iVar3 != 0) && (iVar3 = FUN_713193f0(*(undefined4 *)(param_1 + 0xb7c)), iVar3 != 0)) {
    FUN_7130ec7c(param_1);
    uVar2 = thunk_MwhHq(0x24078);
    uVar6 = 0;
    uVar2 = FUN_7131dbe0(uVar2,0);
    *(undefined4 *)(param_1 + 0xb88) = uVar2;
    FUN_7131e024();
    uVar2 = 1;
    *(undefined2 *)(param_1 + 0x4a) = 0x19;
    param_1[4] = 1;
    *DAT_70b2fba8 = 7;
    uVar4 = *(undefined4 *)(param_1 + 0xb88);
    *(undefined4 *)(param_1 + 0xbcc) = uVar4;
    if (1 < *(ushort *)(param_1 + 0x4a)) {
      do {
        uVar4 = thunk_MwhHq(0x5c);
        uVar4 = FUN_7130f404(uVar4,uVar6 + 1 & 0xffff,param_1[4],0x10);
        uVar1 = *(ushort *)(param_1 + 0x4a);
        *(undefined4 *)(param_1 + uVar6 * 4 + 0xbd0) = uVar4;
        uVar5 = uVar6 + 2;
        uVar6 = uVar6 + 1;
      } while (uVar5 < uVar1);
      uVar4 = *(undefined4 *)(param_1 + 0xb88);
    }
    FUN_7130df44(uVar4,0xc2c80000);
    *(undefined2 *)(param_1 + 6) = 0x37;
    FUN_7131b7f4(DAT_70b2fba0);
    FUN_7131bc08(DAT_70b2fba0);
    FUN_7131d308(param_1 + 0xb8c,*(undefined4 *)(param_1 + 0xb88));
    FUN_7131d738(param_1 + 0xb8c);
    *param_1 = 1;
    *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(param_1 + 0x4a);
  }
  return uVar2;
}


// =========================================================================
// Function: FUN_7130f404
// Entry: 0x7130f404 | Size: 420 bytes
// =========================================================================

undefined4 FUN_7130f404(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  DataMemoryBarrier(0xb);
  if ((DAT_70b2fbb0 & 1) == 0) {
    iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2fbb0);
    if (iVar4 != 0) {
      pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9174,param_2,param_3,param_4);
      if (*pcVar5 == '\0') {
        iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9164);
        *(undefined1 *)(iVar4 + 0x6b) = 1;
        imp___aeabi_memcpy8(iVar4,&DAT_70072fb0,0x6b);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_7130f8ec,iVar4,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9174);
        *puVar6 = 1;
      }
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9164);
      if (*(char *)(iVar4 + 0x6b) != '\0') {
        uVar7 = 0;
        uVar9 = 0;
        do {
          iVar8 = (uVar7 & 7) * 8;
          bVar3 = (byte)(0xdff74797 >> iVar8) |
                  (byte)(-0x1e28406d << ((uVar7 & 7) * -8 + 0x20 & 0xff));
          uVar10 = iVar8 - 0x20;
          if (-1 < (int)uVar10) {
            bVar3 = (byte)(0xe1d7bf93 >> (uVar10 & 0xff));
          }
          *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
          bVar11 = 0xfffffffe < uVar7;
          bVar1 = uVar9 == 0;
          bVar2 = (0x69 < uVar7) <= uVar9;
          uVar7 = uVar7 + 1;
          uVar9 = uVar9 + bVar11;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar4 + 0x6b) = 0;
      }
      DAT_70b2fbac = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70b2fbb0);
    }
  }
  (*DAT_70b2fbac)(param_1,param_2,param_3,param_4);
  return param_1;
}


// =========================================================================
// Function: FUN_71310674
// Entry: 0x71310674 | Size: 380 bytes
// =========================================================================

void FUN_71310674(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b2fbd8 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2fbd8), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b91b4);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b91a4);
      *(undefined1 *)(puVar10 + 9) = 1;
      uVar5 = DAT_7007307c;
      uVar4 = DAT_70073078;
      uVar3 = DAT_70073074;
      *puVar10 = DAT_70073070;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_70073090;
      uVar5 = DAT_7007308c;
      uVar4 = DAT_70073088;
      uVar3 = DAT_70073084;
      puVar10[4] = DAT_70073080;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71311bac,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b91b4);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b91a4);
    if (*(char *)(iVar8 + 0x24) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xa9f11975 >> iVar14) |
                (byte)(0x47910569 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x47910569 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x22 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x24) = 0;
    }
    DAT_70b2fbd4 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b2fbd8);
  }
                    /* WARNING: Could not recover jumptable at 0x713106a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b2fbd4)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71310a88
// Entry: 0x71310a88 | Size: 388 bytes
// =========================================================================

void FUN_71310a88(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b2fbe0 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2fbe0), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b91d4);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b91c4);
      *(undefined1 *)((int)puVar10 + 0x26) = 1;
      uVar5 = DAT_700730a4;
      uVar4 = DAT_700730a0;
      uVar3 = DAT_7007309c;
      *puVar10 = DAT_70073098;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_700730b8;
      uVar5 = DAT_700730b4;
      uVar4 = DAT_700730b0;
      uVar3 = DAT_700730ac;
      puVar10[4] = DAT_700730a8;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      *(undefined2 *)(puVar10 + 9) = DAT_700730bc;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71311bfc,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b91d4);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b91c4);
    if (*(char *)(iVar8 + 0x26) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xd54d5575 >> iVar14) |
                (byte)(-0x289428c9 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xd76bd737 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x24 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x26) = 0;
    }
    DAT_70b2fbdc = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b2fbe0);
  }
                    /* WARNING: Could not recover jumptable at 0x71310ab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b2fbdc)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71310ea4
// Entry: 0x71310ea4 | Size: 380 bytes
// =========================================================================

void FUN_71310ea4(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b2fbe8 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2fbe8), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b91f4);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b91e4);
      *(undefined1 *)(puVar10 + 10) = 1;
      uVar6 = DAT_700730d0;
      uVar5 = DAT_700730cc;
      uVar4 = DAT_700730c8;
      uVar3 = DAT_700730c4;
      *puVar10 = DAT_700730c0;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_700730e4;
      uVar5 = DAT_700730e0;
      uVar4 = DAT_700730dc;
      uVar3 = DAT_700730d8;
      puVar10[5] = DAT_700730d4;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71311c4c,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b91f4);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b91e4);
    if (*(char *)(iVar8 + 0x28) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xc77d4573 >> iVar14) |
                (byte)(-0x164a4c4f << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xe9b5b3b1 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x26 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x28) = 0;
    }
    DAT_70b2fbe4 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b2fbe8);
  }
                    /* WARNING: Could not recover jumptable at 0x71310ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b2fbe4)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713112b8
// Entry: 0x713112b8 | Size: 384 bytes
// =========================================================================

void FUN_713112b8(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b2fbf0 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2fbf0), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9214);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9204);
      *(undefined1 *)((int)puVar9 + 0x1e) = 1;
      uVar4 = DAT_700730f0;
      uVar3 = DAT_700730ec;
      *puVar9 = DAT_700730e8;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      uVar5 = DAT_70073100;
      uVar4 = DAT_700730fc;
      uVar3 = DAT_700730f8;
      puVar9[3] = DAT_700730f4;
      puVar9[4] = uVar3;
      puVar9[5] = uVar4;
      puVar9[6] = uVar5;
      *(undefined2 *)(puVar9 + 7) = DAT_70073104;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71311c9c,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9214);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9204);
    if (*(char *)(iVar7 + 0x1e) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar6 = (byte)(0xe569d1dd >> iVar13) |
                (byte)(0x750729cb << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar6 = (byte)(0x750729cb >> (uVar14 & 0xff));
        }
        *(byte *)(iVar7 + uVar11) = *(byte *)(iVar7 + uVar11) ^ bVar6;
        bVar15 = 0xfffffffe < uVar11;
        bVar1 = uVar12 == 0;
        bVar2 = (0x1c < uVar11) <= uVar12;
        uVar11 = uVar11 + 1;
        uVar12 = uVar12 + bVar15;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar7 + 0x1e) = 0;
    }
    DAT_70b2fbec = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b2fbf0);
  }
                    /* WARNING: Could not recover jumptable at 0x713112e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b2fbec)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713116d0
// Entry: 0x713116d0 | Size: 400 bytes
// =========================================================================

void FUN_713116d0(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b2fbf8 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2fbf8), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9234,param_2);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9224);
      *(undefined1 *)(puVar11 + 0xc) = 1;
      uVar7 = DAT_7007311c;
      uVar6 = DAT_70073118;
      uVar5 = DAT_70073114;
      uVar4 = DAT_70073110;
      uVar3 = DAT_7007310c;
      *puVar11 = DAT_70073108;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      puVar11[5] = uVar7;
      uVar7 = DAT_70073134;
      uVar6 = DAT_70073130;
      uVar5 = DAT_7007312c;
      uVar4 = DAT_70073128;
      uVar3 = DAT_70073124;
      puVar11[6] = DAT_70073120;
      puVar11[7] = uVar3;
      puVar11[8] = uVar4;
      puVar11[9] = uVar5;
      puVar11[10] = uVar6;
      puVar11[0xb] = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71311cdc,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9234);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9224);
    if (*(char *)(iVar9 + 0x30) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x93a3c787 >> iVar15) |
                (byte)(0x47abcda5 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0x47abcda5 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x2e < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x30) = 0;
    }
    DAT_70b2fbf4 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b2fbf8);
  }
                    /* WARNING: Could not recover jumptable at 0x71311704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b2fbf4)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_71311af8
// Entry: 0x71311af8 | Size: 72 bytes
// =========================================================================

bool FUN_71311af8(int param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_71310674();
  bVar2 = false;
  if ((iVar1 != 0) && (iVar1 = FUN_71310a88(param_1), iVar1 != 0)) {
    iVar1 = FUN_71310ea4(param_1);
    bVar2 = iVar1 != 0;
    if (bVar2) {
      *(undefined1 *)(param_1 + 0x14) = 1;
    }
  }
  return bVar2;
}


// =========================================================================
// Function: FUN_71311d2c
// Entry: 0x71311d2c | Size: 384 bytes
// =========================================================================

void FUN_71311d2c(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b2fc00 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2fc00), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9254);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9244);
      *(undefined1 *)((int)puVar9 + 0x1e) = 1;
      uVar4 = DAT_70073140;
      uVar3 = DAT_7007313c;
      *puVar9 = DAT_70073138;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      uVar5 = DAT_70073150;
      uVar4 = DAT_7007314c;
      uVar3 = DAT_70073148;
      puVar9[3] = DAT_70073144;
      puVar9[4] = uVar3;
      puVar9[5] = uVar4;
      puVar9[6] = uVar5;
      *(undefined2 *)(puVar9 + 7) = DAT_70073154;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713127cc,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9254);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9244);
    if (*(char *)(iVar7 + 0x1e) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar6 = (byte)(0xc77d4573 >> iVar13) |
                (byte)(-0x164a4c4f << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar6 = (byte)(0xe9b5b3b1 >> (uVar14 & 0xff));
        }
        *(byte *)(iVar7 + uVar11) = *(byte *)(iVar7 + uVar11) ^ bVar6;
        bVar15 = 0xfffffffe < uVar11;
        bVar1 = uVar12 == 0;
        bVar2 = (0x1c < uVar11) <= uVar12;
        uVar11 = uVar11 + 1;
        uVar12 = uVar12 + bVar15;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar7 + 0x1e) = 0;
    }
    DAT_70b2fbfc = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b2fc00);
  }
                    /* WARNING: Could not recover jumptable at 0x71311d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b2fbfc)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71312144
// Entry: 0x71312144 | Size: 380 bytes
// =========================================================================

void FUN_71312144(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b2fc08 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2fc08), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9274);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9264);
      *(undefined1 *)((int)puVar11 + 0x19) = 1;
      uVar7 = DAT_7007316c;
      uVar6 = DAT_70073168;
      uVar5 = DAT_70073164;
      uVar4 = DAT_70073160;
      uVar3 = DAT_7007315c;
      *puVar11 = DAT_70073158;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      puVar11[5] = uVar7;
      *(undefined1 *)(puVar11 + 6) = DAT_70073170;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7131280c,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9274);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9264);
    if (*(char *)(iVar9 + 0x19) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x2549d30d >> iVar15) |
                (byte)(0x65617345 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0x65617345 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x17 < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x19) = 0;
    }
    DAT_70b2fc04 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b2fc08);
  }
                    /* WARNING: Could not recover jumptable at 0x71312170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b2fc04)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71312558
// Entry: 0x71312558 | Size: 64 bytes
// =========================================================================

void FUN_71312558(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = 0;
  param_1[5] = *(undefined4 *)(param_4 + 0x2d);
  uVar1 = *(undefined4 *)(param_4 + 0x19);
  param_1[10] = 1;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[7] = param_2;
  param_1[6] = uVar1;
  return;
}


// =========================================================================
// Function: FUN_713125b0
// Entry: 0x713125b0 | Size: 40 bytes
// =========================================================================

int FUN_713125b0(int param_1)

{
  if (*(char *)(param_1 + 0xc) == '\0') {
    return param_1;
  }
  FUN_71312144();
  return param_1;
}


// =========================================================================
// Function: FUN_71312678
// Entry: 0x71312678 | Size: 80 bytes
// =========================================================================

uint FUN_71312678(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x10);
  if (param_3 <= uVar1) {
    uVar1 = param_3;
  }
  FUN_719f7bbc(*(undefined4 *)(param_1 + 4),param_2,uVar1,*(undefined4 *)(param_1 + 0x14),
               *(int *)(param_1 + 0x10));
  *(uint *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + uVar1;
  return uVar1;
}


// =========================================================================
// Function: FUN_71312c98
// Entry: 0x71312c98 | Size: 104 bytes
// =========================================================================

undefined4 * FUN_71312c98(undefined4 *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = (byte *)*param_1;
  if (pbVar2 != (byte *)0x0) {
    pbVar1 = (byte *)param_1[1];
    pbVar3 = pbVar2;
    if (pbVar1 != pbVar2) {
      do {
        pbVar3 = pbVar1 + -0xc;
        if ((*pbVar3 & 1) != 0) {
          thunk_qNQrlu(*(undefined4 *)(pbVar1 + -4));
        }
        pbVar1 = pbVar3;
      } while (pbVar3 != pbVar2);
      pbVar3 = (byte *)*param_1;
    }
    param_1[1] = pbVar2;
    thunk_qNQrlu(pbVar3);
  }
  return param_1;
}


// =========================================================================
// Function: FUN_71312d50
// Entry: 0x71312d50 | Size: 428 bytes
// =========================================================================

int FUN_71312d50(int param_1)

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
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  DataMemoryBarrier(0xb);
  if (((DAT_70b2fc30 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2fc30), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b92f4,iVar9);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b92e4);
      *(undefined1 *)((int)puVar11 + 0x27) = 1;
      uVar5 = DAT_7007319c;
      uVar4 = DAT_70073198;
      uVar3 = DAT_70073194;
      *puVar11 = DAT_70073190;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      uVar6 = DAT_700731b0;
      uVar5 = DAT_700731ac;
      uVar4 = DAT_700731a8;
      uVar3 = DAT_700731a4;
      puVar11[4] = DAT_700731a0;
      puVar11[5] = uVar3;
      puVar11[6] = uVar4;
      puVar11[7] = uVar5;
      puVar11[8] = uVar6;
      uVar7 = DAT_700731b6;
      *(undefined2 *)(puVar11 + 9) = DAT_700731b4;
      *(undefined1 *)((int)puVar11 + 0x26) = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7131679c,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b92f4);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b92e4);
    if (*(char *)(iVar9 + 0x27) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0xbb935373 >> iVar15) |
                (byte)(0x39e3c19b << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0x39e3c19b >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x25 < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x27) = 0;
    }
    DAT_70b2fc2c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b2fc30);
  }
  (*DAT_70b2fc2c)(param_1);
  return param_1;
}


// =========================================================================
// Function: FUN_71313194
// Entry: 0x71313194 | Size: 384 bytes
// =========================================================================

void FUN_71313194(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b2fc38 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2fc38), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9314);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9304);
      *(undefined1 *)((int)puVar9 + 0x21) = 1;
      uVar5 = DAT_700731c4;
      uVar4 = DAT_700731c0;
      uVar3 = DAT_700731bc;
      *puVar9 = DAT_700731b8;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      uVar5 = DAT_700731d4;
      uVar4 = DAT_700731d0;
      uVar3 = DAT_700731cc;
      puVar9[4] = DAT_700731c8;
      puVar9[5] = uVar3;
      puVar9[6] = uVar4;
      puVar9[7] = uVar5;
      *(undefined1 *)(puVar9 + 8) = DAT_700731d8;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713167ec,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9314);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9304);
    if (*(char *)(iVar7 + 0x21) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar6 = (byte)(0xd7fe737 >> iVar13) |
                (byte)(-0x68e6be27 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar6 = (byte)(0x971941d9 >> (uVar14 & 0xff));
        }
        *(byte *)(iVar7 + uVar11) = *(byte *)(iVar7 + uVar11) ^ bVar6;
        bVar15 = 0xfffffffe < uVar11;
        bVar1 = uVar12 == 0;
        bVar2 = (0x1f < uVar11) <= uVar12;
        uVar11 = uVar11 + 1;
        uVar12 = uVar12 + bVar15;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar7 + 0x21) = 0;
    }
    DAT_70b2fc34 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b2fc38);
  }
                    /* WARNING: Could not recover jumptable at 0x713131c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b2fc34)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713139c4
// Entry: 0x713139c4 | Size: 428 bytes
// =========================================================================

undefined4
FUN_713139c4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  
  DataMemoryBarrier(0xb);
  if ((DAT_70b2fc50 & 1) == 0) {
    iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2fc50);
    if (iVar4 != 0) {
      pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9394,param_2,param_3,param_4);
      if (*pcVar5 == '\0') {
        iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9384);
        *(undefined1 *)(iVar4 + 0x67) = 1;
        imp___aeabi_memcpy8(iVar4,&DAT_70073208,0x67);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_713168e4,iVar4,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9394);
        *puVar6 = 1;
      }
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9384);
      if (*(char *)(iVar4 + 0x67) != '\0') {
        uVar7 = 0;
        uVar9 = 0;
        do {
          iVar10 = (uVar7 & 7) * 8;
          bVar3 = (byte)(0xcb0b3da5 >> iVar10) |
                  (byte)(0x5ad23c3 << ((uVar7 & 7) * -8 + 0x20 & 0xff));
          uVar8 = iVar10 - 0x20;
          if (-1 < (int)uVar8) {
            bVar3 = (byte)(0x5ad23c3 >> (uVar8 & 0xff));
          }
          *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
          bVar11 = 0xfffffffe < uVar7;
          bVar1 = uVar9 == 0;
          bVar2 = (0x65 < uVar7) <= uVar9;
          uVar7 = uVar7 + 1;
          uVar9 = uVar9 + bVar11;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar4 + 0x67) = 0;
      }
      DAT_70b2fc4c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70b2fc50);
    }
  }
  (*DAT_70b2fc4c)(param_1,param_2,param_3,param_4,param_5);
  return param_1;
}


// =========================================================================
// Function: FUN_71313e24
// Entry: 0x71313e24 | Size: 440 bytes
// =========================================================================

undefined4
FUN_71313e24(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  byte bVar10;
  
  DataMemoryBarrier(0xb);
  if ((DAT_70b2fc58 & 1) == 0) {
    iVar3 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2fc58);
    if (iVar3 != 0) {
      pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b93b4,param_2,param_3,param_4);
      if (*pcVar4 == '\0') {
        iVar3 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b93a4);
        *(undefined1 *)(iVar3 + 0x93) = 1;
        imp___aeabi_memcpy8(iVar3,&DAT_70073270,0x93);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71316934,iVar3,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b93b4);
        *puVar6 = 1;
      }
      iVar3 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b93a4);
      if (*(char *)(iVar3 + 0x93) != '\0') {
        uVar5 = 0;
        uVar7 = 0;
        do {
          iVar8 = (uVar7 & 7) * 8;
          uVar9 = iVar8 - 0x20;
          bVar10 = (byte)(0x7799233f >> iVar8) |
                   (byte)(-0x5420245b << ((uVar7 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar9) {
            bVar10 = (byte)(0xabdfdba5 >> (uVar9 & 0xff));
          }
          *(byte *)(iVar3 + uVar7) = *(byte *)(iVar3 + uVar7) ^ bVar10;
          bVar1 = uVar5 == 0;
          bVar2 = (0x91 < uVar7) <= uVar5;
          uVar5 = uVar5 + (0xfffffffe < uVar7);
          uVar7 = uVar7 + 1;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar3 + 0x93) = 0;
      }
      DAT_70b2fc54 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar3,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70b2fc58);
    }
  }
  (*DAT_70b2fc54)(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return param_1;
}


// =========================================================================
// Function: FUN_71314290
// Entry: 0x71314290 | Size: 1772 bytes
// =========================================================================

int FUN_71314290(int param_1)

{
  uint *puVar1;
  bool bVar2;
  bool bVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  int iVar13;
  char *pcVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined4 *puVar17;
  undefined1 *puVar18;
  byte bVar19;
  undefined2 *puVar20;
  uint *puVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  short sVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  bool bVar29;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_30;
  uint uStack_2c;
  byte *pbStack_28;
  
  iVar9 = FUN_713112b8(param_1 + 4);
  if (iVar9 != 0) {
    DAT_70b2fc5c = param_1;
    *(undefined1 *)(param_1 + 0x18) = 1;
    puVar21 = DAT_70b2fc20;
    puVar10 = DAT_70b2fc24;
    puVar1 = DAT_70b2fc24;
    while (puVar4 = puVar10, puVar4 != puVar21) {
      puVar10 = puVar4 + -3;
      puVar1 = DAT_70b2fc20;
      if ((*puVar10 & 1) != 0) {
        thunk_qNQrlu(puVar4[-1]);
        puVar1 = DAT_70b2fc20;
      }
    }
    sVar25 = *(short *)(param_1 + 0x14);
    uVar26 = (uint)sVar25;
    DAT_70b2fc24 = puVar21;
    if ((uint)(((int)DAT_70b2fc28 - (int)puVar1 >> 2) * -0x55555555) < uVar26) {
      if ((int)uVar26 < 0) {
LAB_7131496c:
                    /* WARNING: Subroutine does not return */
        FUN_712f6ffc(&DAT_70b2fc20);
      }
      puVar10 = (uint *)thunk_MwhHq(uVar26 * 0xc);
      imp___aeabi_memcpy4(puVar10,puVar1,(int)puVar21 - (int)puVar1);
      DAT_70b2fc24 = (uint *)((int)puVar10 + ((int)puVar21 - (int)puVar1));
      DAT_70b2fc28 = puVar10 + uVar26 * 3;
      DAT_70b2fc20 = puVar10;
      if (puVar1 != (uint *)0x0) {
        thunk_qNQrlu(puVar1);
        sVar25 = *(short *)(param_1 + 0x14);
      }
    }
    if (0 < sVar25) {
      iVar28 = 0;
      pbVar11 = (byte *)((uint)&uStack_30 | 1);
      do {
        iVar23 = iVar28 * 0x34 + *(int *)(param_1 + 0xc);
        uVar26 = imp_strlen(iVar23);
        if (0xfffffff7 < uVar26) {
                    /* WARNING: Subroutine does not return */
          FUN_712f6c1c(&uStack_30);
        }
        if (uVar26 < 0xb) {
          uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar26 << 1));
          pbVar12 = pbVar11;
          if (uVar26 != 0) goto LAB_7131443c;
        }
        else {
          pbVar12 = (byte *)thunk_MwhHq((uVar26 | 7) + 1);
          uStack_30 = (uVar26 | 7) + 2;
          uStack_2c = uVar26;
          pbStack_28 = pbVar12;
LAB_7131443c:
          imp___aeabi_memmove(pbVar12,iVar23,uVar26);
        }
        pbVar12[uVar26] = 0;
        uVar26 = uStack_2c;
        pbVar12 = pbStack_28;
        if ((uStack_30 & 1) == 0) {
          uVar26 = uStack_30 >> 1 & 0x7f;
          pbVar12 = pbVar11;
        }
        for (; uVar26 != 0; uVar26 = uVar26 - 1) {
          bVar19 = *pbVar12;
          if (0xffffffe5 < bVar19 - 0x5b) {
            bVar19 = bVar19 | 0x20;
          }
          *pbVar12 = bVar19;
          pbVar12 = pbVar12 + 1;
        }
        thunk_ACPvXABgTDKppmRiQuPVXmvfB_HeOltD_lCwyaDGJj_TyPZR_zqPlpiRxgxdAFbXtfGHEsKfuSmuyghkCdavNUVKpNwbn
                  (&uStack_40,&DAT_70065900,&uStack_30);
        puVar1 = DAT_70b2fc20;
        if (DAT_70b2fc24 < DAT_70b2fc28) {
          *DAT_70b2fc24 = uStack_40;
          DAT_70b2fc24[1] = uStack_3c;
          DAT_70b2fc24[2] = uStack_38;
          DAT_70b2fc24 = DAT_70b2fc24 + 3;
        }
        else {
          iVar23 = (int)DAT_70b2fc24 - (int)DAT_70b2fc20;
          uVar26 = (iVar23 >> 2) * -0x55555555 + 1;
          if (0x15555555 < uVar26) goto LAB_7131496c;
          iVar27 = (int)DAT_70b2fc28 - (int)DAT_70b2fc20 >> 2;
          if (uVar26 < (uint)(iVar27 * 0x55555556)) {
            uVar26 = iVar27 * 0x55555556;
          }
          if (0xaaaaaa9 < (uint)(iVar27 * -0x55555555)) {
            uVar26 = 0x15555555;
          }
          if (uVar26 == 0) {
            iVar27 = 0;
          }
          else {
            if (0x15555555 < uVar26) {
                    /* WARNING: Subroutine does not return */
              FUN_712f6cf0();
            }
            iVar27 = thunk_MwhHq(uVar26 * 0xc);
          }
          puVar21 = (uint *)(iVar27 + (iVar23 >> 2) * 4);
          *puVar21 = uStack_40;
          puVar10 = (uint *)((int)puVar21 - iVar23);
          uStack_40 = 0;
          puVar21[1] = uStack_3c;
          puVar21[2] = uStack_38;
          uStack_3c = 0;
          uStack_38 = 0;
          imp___aeabi_memcpy4(puVar10,puVar1,iVar23);
          puVar21 = puVar21 + 3;
          DAT_70b2fc28 = (uint *)(iVar27 + uVar26 * 0xc);
          DAT_70b2fc20 = puVar10;
          DAT_70b2fc24 = puVar21;
          if ((puVar1 != (uint *)0x0) &&
             (thunk_qNQrlu(puVar1), DAT_70b2fc24 = puVar21, (uStack_40 & 1) != 0)) {
            thunk_qNQrlu(uStack_38);
          }
        }
        if ((uStack_30 & 1) != 0) {
          thunk_qNQrlu(pbStack_28);
        }
        iVar28 = iVar28 + 1;
      } while (iVar28 < *(short *)(param_1 + 0x14));
    }
    FUN_714c2520();
    if (*(int *)(param_1 + 0xc) != 0) {
      thunk_dGrRHE();
    }
    iVar28 = (int)*(short *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0xc) = 0;
    iVar27 = *(int *)(param_1 + 0x2c);
    iVar23 = iVar27 + iVar28;
    *(int *)(param_1 + 0x28) = iVar23;
    if (*(int *)(param_1 + 0x30) == 0) {
      iVar13 = imp_malloc(iVar23 * 0x14);
    }
    else {
      iVar13 = imp_realloc(*(int *)(param_1 + 0x30));
      iVar27 = *(int *)(param_1 + 0x2c);
      iVar23 = iVar27 + iVar28;
    }
    *(int *)(param_1 + 0x30) = iVar13;
    imp___aeabi_memclr(iVar13 + iVar27 * 0x14,iVar28 * 0x14);
    *(int *)(param_1 + 0x2c) = iVar23;
    if (0 < *(short *)(param_1 + 0x10)) {
      iVar28 = 0;
      iVar23 = 0;
      do {
        iVar23 = iVar23 + 1;
        puVar20 = (undefined2 *)(*(int *)(param_1 + 0x30) + iVar28);
        iVar28 = iVar28 + 0x14;
        *puVar20 = 0xffff;
      } while (iVar23 < *(short *)(param_1 + 0x10));
    }
    uStack_40 = 0;
    pcVar14 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b93d4);
    if (*pcVar14 == '\0') {
      puVar17 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b93c4);
      *(undefined1 *)((int)puVar17 + 0x1a) = 1;
      uVar8 = DAT_7007331c;
      uVar7 = DAT_70073318;
      uVar6 = DAT_70073314;
      uVar5 = DAT_70073310;
      uVar15 = DAT_7007330c;
      *puVar17 = DAT_70073308;
      puVar17[1] = uVar15;
      puVar17[2] = uVar5;
      puVar17[3] = uVar6;
      puVar17[4] = uVar7;
      puVar17[5] = uVar8;
      *(undefined2 *)(puVar17 + 6) = DAT_70073320;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71316984,puVar17,&DAT_70b0e000);
      puVar18 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b93d4);
      *puVar18 = 1;
    }
    iVar28 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b93c4);
    if (*(char *)(iVar28 + 0x1a) != '\0') {
      uVar26 = 0;
      uVar24 = 0;
      do {
        iVar23 = (uVar26 & 7) * 8;
        uVar22 = iVar23 - 0x20;
        bVar19 = (byte)(0x89812fa5 >> iVar23) |
                 (byte)(0x49edfd3f << ((uVar26 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar22) {
          bVar19 = (byte)(0x49edfd3f >> (uVar22 & 0xff));
        }
        *(byte *)(iVar28 + uVar26) = *(byte *)(iVar28 + uVar26) ^ bVar19;
        bVar29 = 0xfffffffe < uVar26;
        bVar2 = uVar24 == 0;
        bVar3 = (0x18 < uVar26) <= uVar24;
        uVar26 = uVar26 + 1;
        uVar24 = uVar24 + bVar29;
      } while (bVar2 && bVar3);
      *(undefined1 *)(iVar28 + 0x1a) = 0;
    }
    pcVar14 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b93f4);
    if (*pcVar14 == '\0') {
      puVar17 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b93e4);
      *puVar17 = 0x1814dd7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713169c0,puVar17,&DAT_70b0e000);
      puVar18 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b93f4);
      *puVar18 = 1;
    }
    pbVar11 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b93e4);
    if (pbVar11[3] != 0) {
      pbVar11[3] = 0;
      *pbVar11 = *pbVar11 ^ 0xa5;
      pbVar11[1] = pbVar11[1] ^ 0x2f;
      pbVar11[2] = pbVar11[2] ^ 0x81;
    }
    uVar15 = FUN_71339d5c(iVar28);
    *DAT_70b2fc18 = uVar15;
    FUN_714c5410(*DAT_70b2fc18,&uStack_40,4);
    if (uStack_40 != 0) {
      iVar28 = uStack_40 * 4 + 4;
      uVar26 = 0;
      do {
        uStack_2c = 0;
        uStack_30 = 0;
        FUN_714c5410(*DAT_70b2fc18,&uStack_30,4);
        uVar24 = uStack_30;
        puVar1 = DAT_70b2fc1c;
        uVar22 = DAT_70b2fc1c[1] + 1;
        if (*DAT_70b2fc1c < uVar22) {
          uVar16 = (uVar22 * 3 >> 1) + 3;
          *DAT_70b2fc1c = uVar16;
          uStack_2c = iVar28;
          if (puVar1[2] == 0) {
            uVar16 = imp_malloc(uVar16 * 8);
          }
          else {
            uVar16 = imp_realloc();
            uVar22 = puVar1[1] + 1;
          }
          iVar23 = uVar16 + uVar22 * 8;
          puVar1[1] = uVar22;
          puVar1[2] = uVar16;
        }
        else {
          puVar1 = DAT_70b2fc1c + 2;
          DAT_70b2fc1c[1] = uVar22;
          iVar23 = *puVar1 + uVar22 * 8;
        }
        *(uint *)(iVar23 + -8) = uVar24;
        uVar26 = uVar26 + 1;
        *(int *)(iVar23 + -4) = iVar28;
        iVar28 = iVar28 + uStack_30 * 0xc;
      } while (uVar26 < uStack_40);
    }
  }
  return iVar9;
}


// =========================================================================
// Function: FUN_71315100
// Entry: 0x71315100 | Size: 132 bytes
// =========================================================================

int * FUN_71315100(int *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  
  uVar1 = imp_strlen(param_2);
  if (0xfffffff7 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(param_1);
  }
  if (uVar1 < 0xb) {
    puVar2 = (undefined1 *)((int)param_1 + 1);
    *(char *)param_1 = (char)(uVar1 << 1);
    if (uVar1 == 0) goto LAB_7131516c;
  }
  else {
    puVar2 = (undefined1 *)thunk_MwhHq((uVar1 | 7) + 1);
    *param_1 = (uVar1 | 7) + 2;
    param_1[1] = uVar1;
    param_1[2] = (int)puVar2;
  }
  imp___aeabi_memmove(puVar2,param_2,uVar1);
LAB_7131516c:
  puVar2[uVar1] = 0;
  return param_1;
}


// =========================================================================
// Function: FUN_7131520c
// Entry: 0x7131520c | Size: 812 bytes
// =========================================================================

void FUN_7131520c(int param_1,uint param_2,uint param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  int *piVar13;
  uint uVar14;
  undefined4 unaff_r4;
  ushort *puVar15;
  uint uVar16;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  int iVar17;
  int iVar18;
  uint uVar19;
  undefined4 unaff_r7;
  bool bVar20;
  
  if (0x18 < param_3 >> 4) {
    return;
  }
  if (*(char *)(param_1 + 0x18) == '\0') {
    return;
  }
  if ((int)*(short *)(param_1 + 0x12) < (int)param_2) {
    return;
  }
  if (-1 < param_4) {
    if (*(short *)(param_1 + 0x10) < param_4) {
      return;
    }
    puVar15 = (ushort *)(*(int *)(param_1 + 0x30) + param_4 * 0x14);
    if (*puVar15 == param_2) {
      if (puVar15[8] == 0xffff) {
        if (param_3 < *(uint *)(puVar15 + 4)) {
          return;
        }
      }
      else if (puVar15[8] == param_3) {
        return;
      }
    }
    pbVar10 = (byte *)FUN_713116d0(param_1 + 4);
    iVar17 = (DAT_70b2fc24 - DAT_70b2fc20 >> 2) * -0x55555555;
    if (iVar17 - (uint)*pbVar10 == 0 || iVar17 < (int)(uint)*pbVar10) {
      return;
    }
    imp_pthread_mutex_lock(*DAT_70b2fc3c);
    iVar17 = *(int *)(DAT_70b2fc40 + 4);
    if (iVar17 != 0) {
      piVar13 = *(int **)(DAT_70b2fc40 + 8);
      do {
        if ((*(uint *)(*piVar13 + 0x10) == param_2) &&
           (uVar14 = *(uint *)(*piVar13 + 0x14), uVar14 == 0xffffffff || uVar14 == param_3)) {
          imp_pthread_mutex_unlock(*DAT_70b2fc3c);
          return;
        }
        iVar17 = iVar17 + -1;
        piVar13 = piVar13 + 1;
      } while (iVar17 != 0);
    }
    imp_pthread_mutex_unlock(*DAT_70b2fc3c);
    puVar11 = (undefined4 *)thunk_MwhHq(0x1c);
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11[2] = 0;
    uVar12 = FUN_714c2520();
    puVar11[3] = uVar12;
    puVar11[4] = param_2;
    puVar11[5] = param_3;
    puVar11[6] = param_4;
    DataMemoryBarrier(0xb);
    if (((DAT_70b2fc48 & 1) == 0) &&
       (iVar17 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2fc48), iVar17 != 0)) {
      pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9374);
      if (*pcVar7 == '\0') {
        puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9364);
        *(undefined1 *)((int)puVar8 + 0x21) = 1;
        uVar4 = DAT_700731ec;
        uVar3 = DAT_700731e8;
        uVar12 = DAT_700731e4;
        *puVar8 = DAT_700731e0;
        puVar8[1] = uVar12;
        puVar8[2] = uVar3;
        puVar8[3] = uVar4;
        uVar5 = DAT_700731fc;
        uVar4 = DAT_700731f8;
        uVar3 = DAT_700731f4;
        uVar12 = DAT_700731f0;
        puVar8[4] = DAT_700731f0;
        puVar8[5] = uVar3;
        puVar8[6] = uVar4;
        puVar8[7] = uVar5;
        *(undefined1 *)(puVar8 + 8) = DAT_70073200;
        thunk_GFDIUClbc_QcPNgD_wH
                  (&LAB_71316894,puVar8,&DAT_70b0e000,uVar12,unaff_r4,unaff_r5,unaff_r6,unaff_r7);
        puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9374);
        *puVar9 = 1;
      }
      iVar17 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9364);
      if (*(char *)(iVar17 + 0x21) != '\0') {
        uVar14 = 0;
        uVar16 = 0;
        do {
          iVar18 = (uVar14 & 7) * 8;
          uVar19 = iVar18 - 0x20;
          bVar6 = (byte)(0x4bd1a9a9 >> iVar18) |
                  (byte)(0x6f2bc975 << ((uVar14 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar19) {
            bVar6 = (byte)(0x6f2bc975 >> (uVar19 & 0xff));
          }
          *(byte *)(iVar17 + uVar14) = *(byte *)(iVar17 + uVar14) ^ bVar6;
          bVar20 = 0xfffffffe < uVar14;
          bVar1 = uVar16 == 0;
          bVar2 = (0x1f < uVar14) <= uVar16;
          uVar14 = uVar14 + 1;
          uVar16 = uVar16 + bVar20;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar17 + 0x21) = 0;
      }
      DAT_70b2fc44 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar17,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70b2fc48);
    }
                    /* WARNING: Could not recover jumptable at 0x713135d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_70b2fc44)(puVar11);
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_71315588
// Entry: 0x71315588 | Size: 144 bytes
// =========================================================================

void FUN_71315588(int param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  byte *pbVar12;
  int *piVar13;
  uint uVar14;
  int iVar15;
  undefined4 unaff_r4;
  uint uVar16;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  int iVar17;
  uint uVar18;
  undefined4 unaff_r7;
  bool bVar19;
  
  if (((*(char *)(param_1 + 0x18) != '\0') && (param_2 <= *(short *)(param_1 + 0x12))) &&
     (-1 < param_3)) {
    if (*(short *)(param_1 + 0x10) < param_3) {
      return;
    }
    pbVar12 = (byte *)FUN_713116d0(param_1 + 4);
    iVar15 = (DAT_70b2fc24 - DAT_70b2fc20 >> 2) * -0x55555555;
    if (iVar15 - (uint)*pbVar12 != 0 && (int)(uint)*pbVar12 <= iVar15) {
      imp_pthread_mutex_lock(*DAT_70b2fc3c);
      iVar15 = *(int *)(DAT_70b2fc40 + 4);
      if (iVar15 != 0) {
        piVar13 = *(int **)(DAT_70b2fc40 + 8);
        do {
          if ((*(int *)(*piVar13 + 0x10) == param_2) && (*(int *)(*piVar13 + 0x14) == -1)) {
            imp_pthread_mutex_unlock(*DAT_70b2fc3c);
            return;
          }
          iVar15 = iVar15 + -1;
          piVar13 = piVar13 + 1;
        } while (iVar15 != 0);
      }
      imp_pthread_mutex_unlock(*DAT_70b2fc3c);
      puVar10 = (undefined4 *)thunk_MwhHq(0x1c);
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      uVar11 = FUN_714c2520();
      puVar10[3] = uVar11;
      puVar10[4] = param_2;
      puVar10[5] = 0xffffffff;
      puVar10[6] = param_3;
      DataMemoryBarrier(0xb);
      if (((DAT_70b2fc48 & 1) == 0) &&
         (iVar15 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2fc48), iVar15 != 0)) {
        pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9374);
        if (*pcVar7 == '\0') {
          puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9364);
          *(undefined1 *)((int)puVar8 + 0x21) = 1;
          uVar4 = DAT_700731ec;
          uVar3 = DAT_700731e8;
          uVar11 = DAT_700731e4;
          *puVar8 = DAT_700731e0;
          puVar8[1] = uVar11;
          puVar8[2] = uVar3;
          puVar8[3] = uVar4;
          uVar5 = DAT_700731fc;
          uVar4 = DAT_700731f8;
          uVar3 = DAT_700731f4;
          uVar11 = DAT_700731f0;
          puVar8[4] = DAT_700731f0;
          puVar8[5] = uVar3;
          puVar8[6] = uVar4;
          puVar8[7] = uVar5;
          *(undefined1 *)(puVar8 + 8) = DAT_70073200;
          thunk_GFDIUClbc_QcPNgD_wH
                    (&LAB_71316894,puVar8,&DAT_70b0e000,uVar11,unaff_r4,unaff_r5,unaff_r6,unaff_r7);
          puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9374);
          *puVar9 = 1;
        }
        iVar15 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9364);
        if (*(char *)(iVar15 + 0x21) != '\0') {
          uVar14 = 0;
          uVar16 = 0;
          do {
            iVar17 = (uVar14 & 7) * 8;
            uVar18 = iVar17 - 0x20;
            bVar6 = (byte)(0x4bd1a9a9 >> iVar17) |
                    (byte)(0x6f2bc975 << ((uVar14 & 7) * -8 + 0x20 & 0xff));
            if (-1 < (int)uVar18) {
              bVar6 = (byte)(0x6f2bc975 >> (uVar18 & 0xff));
            }
            *(byte *)(iVar15 + uVar14) = *(byte *)(iVar15 + uVar14) ^ bVar6;
            bVar19 = 0xfffffffe < uVar14;
            bVar1 = uVar16 == 0;
            bVar2 = (0x1f < uVar14) <= uVar16;
            uVar14 = uVar14 + 1;
            uVar16 = uVar16 + bVar19;
          } while (bVar1 && bVar2);
          *(undefined1 *)(iVar15 + 0x21) = 0;
        }
        DAT_70b2fc44 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar15,1);
        thunk_SixizuLbAnqfgRApsCY(&DAT_70b2fc48);
      }
                    /* WARNING: Could not recover jumptable at 0x713135d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_70b2fc44)(puVar10);
      return;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_713156a8
// Entry: 0x713156a8 | Size: 112 bytes
// =========================================================================

undefined4 FUN_713156a8(int param_1,uint param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  bVar4 = *(char *)(param_1 + 0x18) != '\0';
  if (bVar4) {
    param_4 = *(uint *)(param_1 + 0x2c);
  }
  if (!bVar4 || param_4 <= param_3) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 0x30) + param_3 * 0x14;
  uVar3 = 0;
  if (*(ushort *)(iVar2 + 0x10) != param_2) {
    uVar3 = param_2;
  }
  if (uVar3 < *(uint *)(iVar2 + 8)) {
    uVar1 = FUN_71ba1b94((int)*(short *)(*(int *)(iVar2 + 0xc) + uVar3 * 0x1c + 0x1a));
    uVar1 = FUN_71ba13e0(uVar1,0x42c80000);
    return uVar1;
  }
  return 0;
}


// =========================================================================
// Function: FUN_713157c0
// Entry: 0x713157c0 | Size: 1504 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_713157c0(int param_1,int param_2,undefined4 *param_3)

{
  longlong lVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int extraout_r1;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  byte *pbVar13;
  uint uVar14;
  short sVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  int iStack_144;
  uint uStack_140;
  uint uStack_13c;
  uint uStack_138;
  uint auStack_134 [2];
  undefined1 auStack_12c [256];
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 1;
  param_3[3] = 0;
  uVar12 = *(uint *)(param_1 + 0x10);
  if ((((((int)uVar12 < 0) || (*(uint *)(DAT_70b2fc1c + 4) <= uVar12)) || (param_2 < 0)) ||
      ((*(int *)(DAT_70b2fc1c + 8) == 0 ||
       (*(int *)(*(int *)(DAT_70b2fc1c + 8) + uVar12 * 8) <= param_2)))) ||
     (*(int *)(param_1 + 0xc) == 0)) goto LAB_71315d78;
  iVar10 = 0x2b2;
  if ((uVar12 < 0x2b2) && (iVar10 = 0x27e, uVar12 < 0x27e)) {
    if (uVar12 < 0x1ad) {
      iVar10 = 0x19b;
      if (0x19a < uVar12) goto LAB_71315858;
      if (uVar12 < 0x16d) {
        if (uVar12 < 0x93) {
          if (uVar12 < 0x90) {
            uVar7 = uVar12;
            if (6 < uVar12) {
              uVar7 = uVar12 - 7;
            }
          }
          else {
            uVar7 = uVar12 - 0x90;
          }
        }
        else {
          uVar7 = uVar12 - 0x93;
        }
      }
      else {
        uVar7 = uVar12 - 0x16d;
      }
    }
    else {
      uVar7 = uVar12 - 0x1ad;
    }
  }
  else {
LAB_71315858:
    uVar7 = uVar12 - iVar10;
  }
  if (((DAT_70b2fc5c == 0) ||
      (pbVar3 = (byte *)FUN_713116d0(DAT_70b2fc5c + 4,uVar12 & 0xffff), pbVar3 == (byte *)0x0)) ||
     (uVar12 = (uint)*pbVar3, iVar10 = (DAT_70b2fc24 - DAT_70b2fc20 >> 2) * -0x55555555,
     iVar10 - uVar12 == 0 || iVar10 < (int)uVar12)) goto LAB_71315d78;
  pbVar3 = (byte *)(DAT_70b2fc20 + uVar12 * 0xc);
  pbVar13 = *(byte **)(pbVar3 + 8);
  if ((*pbVar3 & 1) == 0) {
    pbVar13 = pbVar3 + 1;
  }
  FUN_71316228(auStack_12c,pbVar3,*pbVar3,s__s_Bank__03d_sound__03d_mp3_700662b5,pbVar13,uVar7 + 1,
               param_2 + 1);
  uVar11 = *(undefined4 *)(param_1 + 0xc);
  FUN_71315100(&uStack_140,auStack_12c);
  iVar10 = FUN_719f84c8(uVar11,&uStack_140);
  if ((uStack_140 & 1) != 0) {
    thunk_qNQrlu(uStack_138);
  }
  iVar4 = iVar10;
  if (iVar10 == 0) {
    FUN_71316228(auStack_12c);
    uVar11 = *(undefined4 *)(param_1 + 0xc);
    FUN_71315100(&uStack_140,auStack_12c);
    iVar4 = FUN_719f84c8(uVar11,&uStack_140);
    if ((uStack_140 & 1) != 0) {
      thunk_qNQrlu(uStack_138);
    }
    if (iVar4 == 0) goto LAB_71315d78;
  }
  if (*(int *)(iVar4 + 0x19) == 0) goto LAB_71315d78;
  uVar11 = thunk__IBDl();
  uVar12 = 0;
  FUN_719f7bbc(*(undefined4 *)(param_1 + 0xc),uVar11,*(undefined4 *)(iVar4 + 0x19),
               *(undefined4 *)(iVar4 + 0x2d),0);
  auStack_134[0] = 0;
  uStack_138 = 0;
  uStack_13c = 0;
  uStack_140 = 0;
  if (iVar10 == 0) {
    iVar4 = FUN_71316324(uVar11,*(undefined4 *)(iVar4 + 0x19),&uStack_140);
    if (iVar4 != 0) {
LAB_71315ab0:
      param_3[4] = 0;
      param_3[5] = 0;
      param_3[6] = 0;
      if (((*DAT_70b2fc18 == 0) ||
          (iVar4 = FUN_714c5bec(*DAT_70b2fc18,
                                *(int *)(*(int *)(DAT_70b2fc1c + 8) + *(int *)(param_1 + 0x10) * 8 +
                                        4) + param_2 * 0xc), iVar4 != 0)) ||
         (iVar4 = FUN_714c5410(*DAT_70b2fc18,param_3 + 4,0xc), uVar2 = uStack_13c,
         uVar7 = uStack_140, iVar4 != 0)) goto LAB_71315d5c;
      uVar14 = param_3[5];
      if (iVar10 == 0) {
LAB_71315b8c:
        uVar5 = auStack_134[0];
        sVar15 = *(short *)(param_3 + 6);
        if (0 < (int)uVar14) {
          if (sVar15 == 0) {
            sVar15 = 0;
          }
          else {
            uVar17 = FUN_71ba3430((int)((ulonglong)uVar14 * (ulonglong)uStack_138),
                                  (int)((ulonglong)uVar14 * (ulonglong)uStack_138 >> 0x20),sVar15,0)
            ;
            lVar1 = (ulonglong)uVar5 * (uVar17 & 0xffffffff);
            uVar9 = (uint)lVar1;
            uVar5 = ((int)(uVar17 >> 0x20) * uVar5 + (int)((ulonglong)lVar1 >> 0x20)) * 2 |
                    uVar9 >> 0x1f;
            if (uVar5 == 0 && (uVar2 <= uVar9 << 1) <= uVar5) {
              uVar8 = uStack_140 - uVar7;
              if (uVar5 == 0 && (uVar8 <= uVar9 * 2) <= uVar5) {
                uStack_140 = uVar7 + uVar9 * 2;
                uStack_13c = uVar8 + uVar9 * -2 + uStack_13c;
              }
              else if (CARRY4(uStack_13c,uVar8) < uVar5 ||
                       uVar5 - CARRY4(uStack_13c,uVar8) < (uint)(uStack_13c + uVar8 <= uVar9 * 2)) {
                uStack_13c = uVar2 - uVar8;
              }
            }
          }
        }
      }
      else {
        if (uVar14 < 0x80000000) {
LAB_71315b80:
          FUN_713164bc(&uStack_140);
          goto LAB_71315b8c;
        }
        lVar1 = (ulonglong)uStack_138 * (ulonglong)auStack_134[0] * 2;
        uVar16 = FUN_71ba3430((int)((ulonglong)uStack_13c * 1000),
                              (int)((ulonglong)uStack_13c * 1000 >> 0x20),(int)lVar1,
                              (int)((ulonglong)lVar1 >> 0x20));
        uVar5 = (uint)uVar16;
        if ((int)((ulonglong)uVar16 >> 0x20) != 0) {
          uVar5 = 0xffffffff;
        }
        if (uVar5 < 1000) goto LAB_71315b80;
        sVar15 = *(short *)(param_3 + 6);
      }
      uVar2 = uStack_140;
      param_3[1] = uStack_138;
      param_3[2] = auStack_134[0];
      lVar1 = (ulonglong)auStack_134[0] * (ulonglong)uStack_138 * 2;
      uVar16 = FUN_71ba3430((int)((ulonglong)uStack_13c * 1000),
                            (int)((ulonglong)uStack_13c * 1000 >> 0x20),(int)lVar1,
                            (int)((ulonglong)lVar1 >> 0x20));
      uVar6 = (undefined4)uVar16;
      if ((int)((ulonglong)uVar16 >> 0x20) != 0) {
        uVar6 = 0xffffffff;
      }
      param_3[3] = uVar6;
      iStack_144 = 0;
      uVar7 = FUN_71316618(&uStack_140,uVar14,sVar15,uVar2 - uVar7,&iStack_144);
      iVar10 = iStack_144;
      if ((uVar7 == 0) || (iStack_144 != 0)) {
        if ((uVar7 & iStack_144 != 0) != 1) goto LAB_71315d3c;
        uVar6 = thunk_MwhHq(0x14);
        uVar6 = FUN_71313e24(uVar6,uStack_140,iVar10,uStack_140 + iVar10,uStack_13c - iVar10,
                             uStack_138,auStack_134[0]);
      }
      else {
        param_3[5] = 0;
LAB_71315d3c:
        uVar6 = thunk_MwhHq(0x14);
        uVar6 = FUN_713139c4(uVar6,uStack_140,uStack_13c,uStack_138,auStack_134[0]);
      }
      *param_3 = uVar6;
      goto LAB_71315d5c;
    }
  }
  else {
    iStack_144 = 0;
    uVar12 = FUN_71317afc(uVar11,*(undefined4 *)(iVar4 + 0x19),(uint)&uStack_140 | 4,auStack_134,
                          &uStack_138,&iStack_144);
    uStack_140 = uVar12;
    if (((uVar12 == 0) || ((int)uStack_138 < 1)) ||
       ((1 < auStack_134[0] - 1 || ((int)uStack_13c < 1)))) {
LAB_71315d5c:
      if (uVar12 == 0) goto LAB_71315d6c;
    }
    else {
      FUN_71ba33fc(uStack_13c,auStack_134[0] << 1);
      if (extraout_r1 == 0) goto LAB_71315ab0;
    }
    imp_free(uVar12);
  }
LAB_71315d6c:
  thunk_dGrRHE(uVar11);
LAB_71315d78:
  if (_ext___stack_chk_guard != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail(iStack_2c);
  }
  return;
}


// =========================================================================
// Function: FUN_71316228
// Entry: 0x71316228 | Size: 52 bytes
// =========================================================================

void FUN_71316228(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  imp___vsnprintf_chk(param_1,0x100,0,0x100,param_4,&stack0x00000000);
  return;
}


// =========================================================================
// Function: FUN_71316324
// Entry: 0x71316324 | Size: 452 bytes
// =========================================================================

longlong FUN_71316324(int *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int *extraout_r1;
  int *piVar2;
  ushort *puVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  bool bVar9;
  
  if ((((param_1 != (int *)0x0) && (&DAT_0000000b < param_2)) && (*param_1 == 0x46464952)) &&
     (param_1[2] == 0x45564157)) {
    uVar4 = param_1[1];
    piVar8 = (int *)(uVar4 + 8);
    uVar1 = (uint)(0xfffffff7 < uVar4);
    if ((3 < uVar4) &&
       (bVar9 = piVar8 <= param_2, param_2 = (int *)-(uVar1 + !bVar9), -uVar1 < (uint)bVar9)) {
      piVar5 = (int *)0xc;
      uVar7 = 0;
      uVar4 = 0;
      do {
        piVar2 = piVar5 + 2;
        param_2 = (int *)(uVar1 - (piVar2 > piVar8));
        if (uVar1 == 0 && (piVar2 <= piVar8) <= uVar1) {
          if ((uVar7 & uVar4) != 0) {
            uVar1 = 0;
            if (((*param_3 != 0) && (0 < param_3[2])) && (param_3[3] - 1U < 2)) {
              if (param_3[1] < 1) {
                return ZEXT48(param_3) << 0x20;
              }
              FUN_71ba33fc(param_3[1],param_3[3] << 1);
              uVar1 = (uint)(extraout_r1 == (int *)0x0);
              param_3 = extraout_r1;
            }
            return CONCAT44(param_3,uVar1);
          }
          break;
        }
        param_2 = (int *)((int)param_1 + (int)piVar5);
        uVar6 = param_2[1];
        if (uVar1 == piVar8 < piVar2 &&
            (uint)(uVar6 <= (uint)((int)piVar8 - (int)piVar2)) <= uVar1 - (piVar8 < piVar2)) break;
        if (*param_2 == 0x61746164) {
          param_2 = (int *)0x61746164;
          if (uVar4 != 0) break;
          uVar4 = 1;
          *param_3 = (int)((int)param_1 + (int)piVar2);
          param_3[1] = uVar6;
        }
        else if (*param_2 == 0x20746d66) {
          param_2 = (int *)(uVar7 | uVar6 < 0x10);
          if (param_2 != (int *)0x0) break;
          puVar3 = (ushort *)((int)param_1 + (int)piVar2);
          param_2 = (int *)(uint)*puVar3;
          bVar9 = param_2 != (int *)0x1;
          if (!bVar9) {
            param_2 = (int *)(uint)puVar3[7];
          }
          if (bVar9 || param_2 != (int *)&DAT_00000010) break;
          param_2 = (int *)(uint)puVar3[1];
          uVar7 = 1;
          param_3[3] = (int)param_2;
          param_3[2] = *(int *)(puVar3 + 2);
          if ((uint)puVar3[6] != (int)param_2 * 2) break;
        }
        piVar5 = (int *)((int)piVar2 + (uVar6 & 1) + uVar6);
        param_2 = (int *)(uVar1 - (piVar5 > piVar8));
      } while (uVar1 != 0 || uVar1 < (piVar5 <= piVar8));
    }
  }
  return ZEXT48(param_2) << 0x20;
}


// =========================================================================
// Function: FUN_713164bc
// Entry: 0x713164bc | Size: 296 bytes
// =========================================================================

void FUN_713164bc(undefined4 *param_1)

{
  short *psVar1;
  short sVar2;
  int extraout_r1;
  uint uVar3;
  short *psVar4;
  uint uVar5;
  int iVar6;
  short *psVar7;
  bool bVar8;
  bool bVar9;
  
  psVar4 = (short *)*param_1;
  if ((((psVar4 != (short *)0x0) && (0 < (int)param_1[2])) && (iVar6 = param_1[3], iVar6 - 1U < 2))
     && ((uVar5 = param_1[1], 0 < (int)uVar5 &&
         (FUN_71ba33fc(uVar5,iVar6 << 1), psVar1 = psVar4, extraout_r1 == 0 && iVar6 == 1)))) {
    while (0x400 < uVar5) {
      sVar2 = *psVar1;
      if (0xffe < (ushort)(sVar2 + 0x7ffU)) goto LAB_7131656c;
      uVar5 = uVar5 - 2;
      *param_1 = psVar1 + 1;
      param_1[1] = uVar5;
      psVar1 = psVar1 + 1;
    }
    if (3 < uVar5) {
      sVar2 = *psVar1;
LAB_7131656c:
      iVar6 = (int)psVar1[1] * (int)sVar2;
      while ((0 < iVar6 && (psVar7 = psVar1 + -1, psVar4 < psVar1))) {
        uVar5 = uVar5 + 2;
        *param_1 = psVar7;
        param_1[1] = uVar5;
        iVar6 = (int)*psVar7 * (int)sVar2;
        psVar1 = psVar7;
        sVar2 = *psVar7;
      }
      if (0x400 < uVar5) {
        do {
          uVar3 = *(ushort *)((int)psVar1 + ((uVar5 & 0xfffffffe) - 2)) - 0x800;
          bVar9 = 0xefff < uVar3;
          bVar8 = uVar3 == 0xf000;
          if (0xf000 < uVar3) {
            uVar5 = uVar5 - 2;
            param_1[1] = uVar5;
            bVar9 = 0x3ff < uVar5;
            bVar8 = uVar5 == 0x400;
          }
        } while (bVar9 && !bVar8);
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71316618
// Entry: 0x71316618 | Size: 216 bytes
// =========================================================================

undefined4 FUN_71316618(int *param_1,uint param_2,int param_3,uint param_4,uint *param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  int extraout_r1;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar2 = 0;
  if ((((*param_1 != 0) && (uVar6 = param_1[2], 0 < (int)uVar6)) &&
      (uVar5 = param_1[3], uVar5 - 1 < 2)) && (uVar4 = param_1[1], 0 < (int)uVar4)) {
    FUN_71ba33fc(uVar4,uVar5 << 1);
    if (param_3 == 0) {
      return 0;
    }
    uVar2 = 0;
    if ((0 < (int)param_2) && (extraout_r1 == 0)) {
      lVar1 = (ulonglong)param_2 * (ulonglong)uVar6;
      uVar7 = FUN_71ba3430((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),param_3,0);
      lVar1 = (ulonglong)uVar5 * (uVar7 & 0xffffffff);
      uVar6 = (uint)lVar1;
      uVar5 = ((int)(uVar7 >> 0x20) * uVar5 + (int)((ulonglong)lVar1 >> 0x20)) * 2 | uVar6 >> 0x1f;
      if (uVar5 == 0 && (param_4 <= uVar6 << 1) <= uVar5) {
        return 0;
      }
      uVar3 = uVar6 * 2 - param_4;
      uVar6 = (uint)(uVar6 * 2 < param_4);
      uVar2 = 0;
      if (uVar5 == uVar6 && (uint)(uVar4 <= uVar3) <= uVar5 - uVar6) {
        *param_5 = uVar3;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}


// =========================================================================
// Function: FUN_71317afc
// Entry: 0x71317afc | Size: 428 bytes
// =========================================================================

void FUN_71317afc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  bool bVar11;
  
  DataMemoryBarrier(0xb);
  if ((DAT_70b2fc84 & 1) == 0) {
    iVar3 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2fc84);
    if (iVar3 != 0) {
      pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9414,param_2,param_3,param_4);
      if (*pcVar4 == '\0') {
        iVar3 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9404);
        *(undefined1 *)(iVar3 + 0xa3) = 1;
        imp___aeabi_memcpy8(iVar3,&DAT_70073328,0xa3);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71317f5c,iVar3,&DAT_70b0e000);
        puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9414);
        *puVar7 = 1;
      }
      iVar3 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9404);
      if (*(char *)(iVar3 + 0xa3) != '\0') {
        uVar8 = 0;
        uVar10 = 0;
        do {
          iVar5 = (uVar8 & 7) * 8;
          uVar6 = iVar5 - 0x20;
          bVar9 = (byte)(0x2549d30d >> iVar5) |
                  (byte)(0x65617345 << ((uVar8 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar6) {
            bVar9 = (byte)(0x65617345 >> (uVar6 & 0xff));
          }
          *(byte *)(iVar3 + uVar8) = *(byte *)(iVar3 + uVar8) ^ bVar9;
          bVar11 = 0xfffffffe < uVar8;
          bVar1 = uVar10 == 0;
          bVar2 = (0xa1 < uVar8) <= uVar10;
          uVar8 = uVar8 + 1;
          uVar10 = uVar10 + bVar11;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar3 + 0xa3) = 0;
      }
      DAT_70b2fc80 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar3,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70b2fc84);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x71317b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b2fc80)(param_1,param_2,param_3,param_4);
  return;
}


// =========================================================================
// Function: FUN_71317fac
// Entry: 0x71317fac | Size: 408 bytes
// =========================================================================

int FUN_71317fac(int param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  DataMemoryBarrier(0xb);
  if (((DAT_70b2fc98 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2fc98), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9434,iVar8);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9424);
      *(undefined1 *)((int)puVar10 + 0x29) = 1;
      uVar6 = DAT_700733e0;
      uVar5 = DAT_700733dc;
      uVar4 = DAT_700733d8;
      uVar3 = DAT_700733d4;
      *puVar10 = DAT_700733d0;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_700733f4;
      uVar5 = DAT_700733f0;
      uVar4 = DAT_700733ec;
      uVar3 = DAT_700733e8;
      puVar10[5] = DAT_700733e4;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      *(undefined1 *)(puVar10 + 10) = DAT_700733f8;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7131a7e0,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9434);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9424);
    if (*(char *)(iVar8 + 0x29) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xd93d3145 >> iVar14) |
                (byte)(-0x1840f2d9 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xe7bf0d27 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x27 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x29) = 0;
    }
    DAT_70b2fc94 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b2fc98);
  }
  (*DAT_70b2fc94)(param_1);
  return param_1;
}


// =========================================================================
// Function: FUN_713183dc
// Entry: 0x713183dc | Size: 396 bytes
// =========================================================================

void FUN_713183dc(undefined4 param_1)

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
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b2fca0 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2fca0), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9454);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9444);
      *(undefined1 *)((int)puVar11 + 0x2b) = 1;
      uVar6 = DAT_70073410;
      uVar5 = DAT_7007340c;
      uVar4 = DAT_70073408;
      uVar3 = DAT_70073404;
      *puVar11 = DAT_70073400;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      uVar6 = DAT_70073424;
      uVar5 = DAT_70073420;
      uVar4 = DAT_7007341c;
      uVar3 = DAT_70073418;
      puVar11[5] = DAT_70073414;
      puVar11[6] = uVar3;
      puVar11[7] = uVar4;
      puVar11[8] = uVar5;
      puVar11[9] = uVar6;
      uVar7 = DAT_7007342a;
      *(undefined2 *)(puVar11 + 10) = DAT_70073428;
      *(undefined1 *)((int)puVar11 + 0x2a) = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7131a830,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9454);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9444);
    if (*(char *)(iVar9 + 0x2b) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0xb4d771d >> iVar15) |
                (byte)(-0x44defc41 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0xbb2103bf >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x29 < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x2b) = 0;
    }
    DAT_70b2fc9c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b2fca0);
  }
                    /* WARNING: Could not recover jumptable at 0x71318408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b2fc9c)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713190bc
// Entry: 0x713190bc | Size: 572 bytes
// =========================================================================

void FUN_713190bc(int *param_1,uint param_2,byte *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  undefined4 *puVar11;
  
  pbVar9 = (byte *)*param_1;
  iVar1 = param_1[2];
  if (param_2 <= (uint)((iVar1 - (int)pbVar9 >> 2) * -0x55555555)) {
    iVar1 = param_1[1] - (int)pbVar9 >> 2;
    uVar8 = iVar1 * -0x55555555;
    uVar2 = param_2;
    if (uVar8 < param_2) {
      uVar2 = uVar8;
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      thunk_lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi
                (pbVar9,param_3);
      pbVar9 = pbVar9 + 0xc;
    }
    if (param_2 <= uVar8) {
      pbVar7 = (byte *)(*param_1 + param_2 * 0xc);
      pbVar9 = (byte *)param_1[1];
      while (pbVar4 = pbVar9, pbVar4 != pbVar7) {
        pbVar9 = pbVar4 + -0xc;
        if ((*pbVar9 & 1) != 0) {
          thunk_qNQrlu(*(undefined4 *)(pbVar4 + -4));
        }
      }
      param_1[1] = (int)pbVar7;
      return;
    }
    puVar3 = (undefined4 *)param_1[1];
    iVar10 = param_2 * 0xc + iVar1 * -4;
    puVar11 = puVar3 + (param_2 + iVar1 * 0x55555555) * 3;
    do {
      if ((*param_3 & 1) == 0) {
        uVar5 = *(undefined4 *)(param_3 + 4);
        uVar6 = *(undefined4 *)(param_3 + 8);
        *puVar3 = *(undefined4 *)param_3;
        puVar3[1] = uVar5;
        puVar3[2] = uVar6;
      }
      else {
        FUN_712f6d58(puVar3,*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 4));
      }
      iVar10 = iVar10 + -0xc;
      puVar3 = puVar3 + 3;
    } while (iVar10 != 0);
LAB_713192e4:
    param_1[1] = (int)puVar11;
    return;
  }
  if (pbVar9 != (byte *)0x0) {
    pbVar4 = (byte *)param_1[1];
    pbVar7 = pbVar9;
    if (pbVar4 != pbVar9) {
      do {
        pbVar7 = pbVar4 + -0xc;
        if ((*pbVar7 & 1) != 0) {
          thunk_qNQrlu(*(undefined4 *)(pbVar4 + -4));
        }
        pbVar4 = pbVar7;
      } while (pbVar7 != pbVar9);
      pbVar7 = (byte *)*param_1;
    }
    param_1[1] = (int)pbVar9;
    thunk_qNQrlu(pbVar7);
    iVar1 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (param_2 < 0x15555556) {
    iVar1 = iVar1 >> 2;
    uVar2 = param_2;
    if (param_2 < (uint)(iVar1 * 0x55555556)) {
      uVar2 = iVar1 * 0x55555556;
    }
    if (0xaaaaaa9 < (uint)(iVar1 * -0x55555555)) {
      uVar2 = 0x15555555;
    }
    if (uVar2 < 0x15555556) {
      puVar3 = (undefined4 *)thunk_MwhHq(uVar2 * 0xc);
      param_1[2] = (int)(puVar3 + uVar2 * 3);
      *param_1 = (int)puVar3;
      puVar11 = puVar3 + param_2 * 3;
      iVar1 = param_2 * 0xc;
      param_1[1] = (int)puVar3;
      do {
        if ((*param_3 & 1) == 0) {
          uVar5 = *(undefined4 *)(param_3 + 4);
          uVar6 = *(undefined4 *)(param_3 + 8);
          *puVar3 = *(undefined4 *)param_3;
          puVar3[1] = uVar5;
          puVar3[2] = uVar6;
        }
        else {
          FUN_712f6d58(puVar3,*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 4));
        }
        iVar1 = iVar1 + -0xc;
        puVar3 = puVar3 + 3;
      } while (iVar1 != 0);
      goto LAB_713192e4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_712f6ffc(param_1);
}


// =========================================================================
// Function: FUN_713193f0
// Entry: 0x713193f0 | Size: 412 bytes
// =========================================================================

undefined4 FUN_713193f0(undefined1 *param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  undefined4 uStack_24;
  
  iVar8 = FUN_713183dc();
  uVar14 = 0;
  if (iVar8 != 0) {
    uStack_24 = 0;
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b94b4);
    if (*pcVar9 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b94a4);
      *(undefined1 *)((int)puVar11 + 0x1a) = 1;
      uVar6 = DAT_70073464;
      uVar5 = DAT_70073460;
      uVar4 = DAT_7007345c;
      uVar3 = DAT_70073458;
      uVar14 = DAT_70073454;
      *puVar11 = DAT_70073450;
      puVar11[1] = uVar14;
      puVar11[2] = uVar3;
      puVar11[3] = uVar4;
      puVar11[4] = uVar5;
      puVar11[5] = uVar6;
      *(undefined2 *)(puVar11 + 6) = DAT_70073468;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7131a8e8,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b94b4);
      *puVar12 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b94a4);
    if (*(char *)(iVar8 + 0x1a) != '\0') {
      uVar10 = 0;
      uVar13 = 0;
      do {
        iVar15 = (uVar10 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar7 = (byte)(0x874b0533 >> iVar15) |
                (byte)(0x31070921 << ((uVar10 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar7 = (byte)(0x31070921 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar8 + uVar10) = *(byte *)(iVar8 + uVar10) ^ bVar7;
        bVar17 = 0xfffffffe < uVar10;
        bVar1 = uVar13 == 0;
        bVar2 = (0x18 < uVar10) <= uVar13;
        uVar10 = uVar10 + 1;
        uVar13 = uVar13 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x1a) = 0;
    }
    uVar14 = 0;
    iVar8 = FUN_714c5f6c(0,&uStack_24,iVar8,0);
    if (iVar8 == 0) {
      uVar10 = FUN_714c8774(uStack_24);
      *(uint *)(param_1 + 4) = uVar10 / 0xc;
      uVar14 = imp_malloc(uVar10);
      *(undefined4 *)(param_1 + 0xc) = uVar14;
      FUN_714c5410(uStack_24,uVar14,uVar10);
      FUN_714c82ec(uStack_24);
      uVar14 = 1;
      *(undefined4 *)(param_1 + 0x14) = 0;
      *param_1 = 1;
    }
  }
  return uVar14;
}


// =========================================================================
// Function: FUN_7131a778
// Entry: 0x7131a778 | Size: 52 bytes
// =========================================================================

void FUN_7131a778(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  imp___vsnprintf_chk(param_1,0x40,0,0x40,param_4,&stack0x00000000);
  return;
}


// =========================================================================
// Function: FUN_7131aa6c
// Entry: 0x7131aa6c | Size: 388 bytes
// =========================================================================

void FUN_7131aa6c(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b2fca8 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2fca8), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9534);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9524);
      *(undefined1 *)((int)puVar10 + 0x25) = 1;
      uVar5 = DAT_7007347c;
      uVar4 = DAT_70073478;
      uVar3 = DAT_70073474;
      *puVar10 = DAT_70073470;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_70073490;
      uVar5 = DAT_7007348c;
      uVar4 = DAT_70073488;
      uVar3 = DAT_70073484;
      puVar10[4] = DAT_70073480;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      *(undefined1 *)(puVar10 + 9) = DAT_70073494;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7131b2cc,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9534);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9524);
    if (*(char *)(iVar8 + 0x25) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xe569d1dd >> iVar14) |
                (byte)(0x750729cb << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x750729cb >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x23 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x25) = 0;
    }
    DAT_70b2fca4 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b2fca8);
  }
                    /* WARNING: Could not recover jumptable at 0x7131aa98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b2fca4)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7131ae88
// Entry: 0x7131ae88 | Size: 400 bytes
// =========================================================================

void FUN_7131ae88(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b2fcb0 & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2fcb0), iVar4 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9554,param_2,param_3);
    if (*pcVar5 == '\0') {
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9544);
      *(undefined1 *)(iVar4 + 0x47) = 1;
      imp___aeabi_memcpy8(iVar4,&DAT_70073498,0x47);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7131b31c,iVar4,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9554);
      *puVar6 = 1;
    }
    iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9544);
    if (*(char *)(iVar4 + 0x47) != '\0') {
      uVar7 = 0;
      uVar8 = 0;
      do {
        iVar9 = (uVar7 & 7) * 8;
        bVar3 = (byte)(0x2549d30d >> iVar9) | (byte)(0x65617345 << ((uVar7 & 7) * -8 + 0x20 & 0xff))
        ;
        uVar10 = iVar9 - 0x20;
        if (-1 < (int)uVar10) {
          bVar3 = (byte)(0x65617345 >> (uVar10 & 0xff));
        }
        *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
        bVar11 = 0xfffffffe < uVar7;
        bVar1 = uVar8 == 0;
        bVar2 = (0x45 < uVar7) <= uVar8;
        uVar7 = uVar7 + 1;
        uVar8 = uVar8 + bVar11;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar4 + 0x47) = 0;
    }
    DAT_70b2fcac = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b2fcb0);
  }
                    /* WARNING: Could not recover jumptable at 0x7131aebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b2fcac)(param_1,param_2,param_3);
  return;
}


// =========================================================================
// Function: FUN_7131b36c
// Entry: 0x7131b36c | Size: 416 bytes
// =========================================================================

void FUN_7131b36c(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b2fcb8 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2fcb8), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9574,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9564);
      *(undefined1 *)((int)puVar10 + 0x35) = 1;
      uVar5 = DAT_700734ec;
      uVar4 = DAT_700734e8;
      uVar3 = DAT_700734e4;
      *puVar10 = DAT_700734e0;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar5 = DAT_700734fc;
      uVar4 = DAT_700734f8;
      uVar3 = DAT_700734f4;
      puVar10[4] = DAT_700734f0;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      uVar6 = DAT_70073510;
      uVar5 = DAT_7007350c;
      uVar4 = DAT_70073508;
      uVar3 = DAT_70073504;
      puVar10[8] = DAT_70073500;
      puVar10[9] = uVar3;
      puVar10[10] = uVar4;
      puVar10[0xb] = uVar5;
      puVar10[0xc] = uVar6;
      *(undefined1 *)(puVar10 + 0xd) = DAT_70073514;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7131b7a4,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9574);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9564);
    if (*(char *)(iVar8 + 0x35) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x2549d30d >> iVar14) |
                (byte)(0x65617345 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x65617345 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x33 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x35) = 0;
    }
    DAT_70b2fcb4 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b2fcb8);
  }
                    /* WARNING: Could not recover jumptable at 0x7131b3a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b2fcb4)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_7131b7f4
// Entry: 0x7131b7f4 | Size: 380 bytes
// =========================================================================

void FUN_7131b7f4(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b2fcc0 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2fcc0), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9594);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9584);
      *(undefined1 *)(puVar10 + 9) = 1;
      uVar5 = DAT_70073524;
      uVar4 = DAT_70073520;
      uVar3 = DAT_7007351c;
      *puVar10 = DAT_70073518;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_70073538;
      uVar5 = DAT_70073534;
      uVar4 = DAT_70073530;
      uVar3 = DAT_7007352c;
      puVar10[4] = DAT_70073528;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71311bac,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9594);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9584);
    if (*(char *)(iVar8 + 0x24) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xa9f11975 >> iVar14) |
                (byte)(0x47910569 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x47910569 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x22 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x24) = 0;
    }
    DAT_70b2fcbc = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b2fcc0);
  }
                    /* WARNING: Could not recover jumptable at 0x7131b820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b2fcbc)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7131bc08
// Entry: 0x7131bc08 | Size: 392 bytes
// =========================================================================

void FUN_7131bc08(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b2fcc8 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2fcc8), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b95b4);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b95a4);
      *(undefined1 *)((int)puVar10 + 0x1f) = 1;
      uVar4 = DAT_70073548;
      uVar3 = DAT_70073544;
      *puVar10 = DAT_70073540;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      uVar5 = DAT_70073558;
      uVar4 = DAT_70073554;
      uVar3 = DAT_70073550;
      puVar10[3] = DAT_7007354c;
      puVar10[4] = uVar3;
      puVar10[5] = uVar4;
      puVar10[6] = uVar5;
      uVar6 = DAT_7007355e;
      *(undefined2 *)(puVar10 + 7) = DAT_7007355c;
      *(undefined1 *)((int)puVar10 + 0x1e) = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7131c028,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b95b4);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b95a4);
    if (*(char *)(iVar8 + 0x1f) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xd54d5575 >> iVar14) |
                (byte)(-0x289428c9 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xd76bd737 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x1d < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x1f) = 0;
    }
    DAT_70b2fcc4 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b2fcc8);
  }
                    /* WARNING: Could not recover jumptable at 0x7131bc34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b2fcc4)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7131c068
// Entry: 0x7131c068 | Size: 384 bytes
// =========================================================================

void FUN_7131c068(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b2fcd0 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2fcd0), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b95d4);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b95c4);
      *(undefined1 *)((int)puVar9 + 0x21) = 1;
      uVar5 = DAT_7007356c;
      uVar4 = DAT_70073568;
      uVar3 = DAT_70073564;
      *puVar9 = DAT_70073560;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      uVar5 = DAT_7007357c;
      uVar4 = DAT_70073578;
      uVar3 = DAT_70073574;
      puVar9[4] = DAT_70073570;
      puVar9[5] = uVar3;
      puVar9[6] = uVar4;
      puVar9[7] = uVar5;
      *(undefined1 *)(puVar9 + 8) = DAT_70073580;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7131c948,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b95d4);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b95c4);
    if (*(char *)(iVar7 + 0x21) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar6 = (byte)(0xc77d4573 >> iVar13) |
                (byte)(-0x164a4c4f << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar6 = (byte)(0xe9b5b3b1 >> (uVar14 & 0xff));
        }
        *(byte *)(iVar7 + uVar11) = *(byte *)(iVar7 + uVar11) ^ bVar6;
        bVar15 = 0xfffffffe < uVar11;
        bVar1 = uVar12 == 0;
        bVar2 = (0x1f < uVar11) <= uVar12;
        uVar11 = uVar11 + 1;
        uVar12 = uVar12 + bVar15;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar7 + 0x21) = 0;
    }
    DAT_70b2fccc = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b2fcd0);
  }
                    /* WARNING: Could not recover jumptable at 0x7131c094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b2fccc)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7131c480
// Entry: 0x7131c480 | Size: 532 bytes
// =========================================================================

void FUN_7131c480(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  undefined1 *puVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  DataMemoryBarrier(0xb);
  if ((DAT_70b2fcd8 & 1) == 0) {
    iVar3 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2fcd8);
    if (iVar3 != 0) {
      pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b95f4,param_2,param_3);
      if (*pcVar4 == '\0') {
        iVar3 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b95e4);
        *(undefined1 *)(iVar3 + 0x10c) = 1;
        imp___aeabi_memcpy8(iVar3,&DAT_70073588,0x10c);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_7131c998,iVar3,&DAT_70b0e000);
        puVar5 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b95f4);
        *puVar5 = 1;
      }
      iVar3 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b95e4);
      if (*(char *)(iVar3 + 0x10c) != '\0') {
        uVar6 = 0;
        uVar10 = 0;
        do {
          iVar8 = (uVar6 & 7) * 8;
          uVar9 = iVar8 - 0x20;
          bVar7 = (byte)(0xe569d1dd >> iVar8) |
                  (byte)(0x750729cb << ((uVar6 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar9) {
            bVar7 = (byte)(0x750729cb >> (uVar9 & 0xff));
          }
          *(byte *)(iVar3 + uVar6) = *(byte *)(iVar3 + uVar6) ^ bVar7;
          bVar11 = 0xfffffffe < uVar6;
          bVar1 = uVar10 == 0;
          bVar2 = (0x10a < uVar6) <= uVar10;
          uVar6 = uVar6 + 1;
          uVar10 = uVar10 + bVar11;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar3 + 0x10c) = 0;
      }
      DAT_70b2fcd4 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar3,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70b2fcd8);
    }
  }
  (*DAT_70b2fcd4)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                  param_11,param_12,param_13,param_14,param_15);
  return;
}


// =========================================================================
// Function: FUN_7131c9e8
// Entry: 0x7131c9e8 | Size: 416 bytes
// =========================================================================

void FUN_7131c9e8(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b2fce0 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2fce0), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9614,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9604);
      *(undefined1 *)((int)puVar10 + 0x3e) = 1;
      uVar6 = DAT_700736a8;
      uVar5 = DAT_700736a4;
      uVar4 = DAT_700736a0;
      uVar3 = DAT_7007369c;
      *puVar10 = DAT_70073698;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_700736bc;
      uVar5 = DAT_700736b8;
      uVar4 = DAT_700736b4;
      uVar3 = DAT_700736b0;
      puVar10[5] = DAT_700736ac;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      uVar6 = DAT_700736d0;
      uVar5 = DAT_700736cc;
      uVar4 = DAT_700736c8;
      uVar3 = DAT_700736c4;
      puVar10[10] = DAT_700736c0;
      puVar10[0xb] = uVar3;
      puVar10[0xc] = uVar4;
      puVar10[0xd] = uVar5;
      puVar10[0xe] = uVar6;
      *(undefined2 *)(puVar10 + 0xf) = DAT_700736d4;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7131ce20,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9614);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9604);
    if (*(char *)(iVar8 + 0x3e) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xe569d1dd >> iVar14) |
                (byte)(0x750729cb << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x750729cb >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x3c < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x3e) = 0;
    }
    DAT_70b2fcdc = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b2fce0);
  }
                    /* WARNING: Could not recover jumptable at 0x7131ca1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b2fcdc)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_7131d308
// Entry: 0x7131d308 | Size: 380 bytes
// =========================================================================

void FUN_7131d308(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b2fcf4 & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2fcf4), iVar4 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9654,param_2);
    if (*pcVar5 == '\0') {
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9644);
      *(undefined1 *)(iVar4 + 0x46) = 1;
      imp___aeabi_memcpy8(iVar4,&DAT_700736d8,0x46);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7131db54,iVar4,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9654);
      *puVar6 = 1;
    }
    iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9644);
    if (*(char *)(iVar4 + 0x46) != '\0') {
      uVar7 = 0;
      uVar8 = 0;
      do {
        iVar9 = (uVar7 & 7) * 8;
        uVar10 = iVar9 - 0x20;
        bVar3 = (byte)(0xa9f11975 >> iVar9) | (byte)(0x47910569 << ((uVar7 & 7) * -8 + 0x20 & 0xff))
        ;
        if (-1 < (int)uVar10) {
          bVar3 = (byte)(0x47910569 >> (uVar10 & 0xff));
        }
        *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
        bVar11 = 0xfffffffe < uVar7;
        bVar1 = uVar8 == 0;
        bVar2 = (0x44 < uVar7) <= uVar8;
        uVar7 = uVar7 + 1;
        uVar8 = uVar8 + bVar11;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar4 + 0x46) = 0;
    }
    DAT_70b2fcf0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b2fcf4);
  }
                    /* WARNING: Could not recover jumptable at 0x7131d334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b2fcf0)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_7131d738
// Entry: 0x7131d738 | Size: 388 bytes
// =========================================================================

void FUN_7131d738(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b2fcfc & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2fcfc), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9674);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9664);
      *(undefined1 *)((int)puVar11 + 0x1b) = 1;
      uVar7 = DAT_70073734;
      uVar6 = DAT_70073730;
      uVar5 = DAT_7007372c;
      uVar4 = DAT_70073728;
      uVar3 = DAT_70073724;
      *puVar11 = DAT_70073720;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      puVar11[5] = uVar7;
      *(undefined2 *)(puVar11 + 6) = DAT_70073738;
      *(undefined1 *)((int)puVar11 + 0x1a) = DAT_7007373a;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7131dba4,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9674);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9664);
    if (*(char *)(iVar9 + 0x1b) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0xd54d5575 >> iVar15) |
                (byte)(-0x289428c9 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0xd76bd737 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x19 < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x1b) = 0;
    }
    DAT_70b2fcf8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b2fcfc);
  }
                    /* WARNING: Could not recover jumptable at 0x7131d764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b2fcf8)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7131dbe0
// Entry: 0x7131dbe0 | Size: 428 bytes
// =========================================================================

undefined4 FUN_7131dbe0(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b2fd04 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2fd04), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9694,param_2,iVar8);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9684);
      *(undefined1 *)((int)puVar10 + 0x3f) = 1;
      uVar6 = DAT_70073750;
      uVar5 = DAT_7007374c;
      uVar4 = DAT_70073748;
      uVar3 = DAT_70073744;
      *puVar10 = DAT_70073740;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_70073764;
      uVar5 = DAT_70073760;
      uVar4 = DAT_7007375c;
      uVar3 = DAT_70073758;
      puVar10[5] = DAT_70073754;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      uVar6 = DAT_70073778;
      uVar5 = DAT_70073774;
      uVar4 = DAT_70073770;
      uVar3 = DAT_7007376c;
      puVar10[10] = DAT_70073768;
      puVar10[0xb] = uVar3;
      puVar10[0xc] = uVar4;
      puVar10[0xd] = uVar5;
      puVar10[0xe] = uVar6;
      *(undefined2 *)(puVar10 + 0xf) = DAT_7007377c;
      *(undefined1 *)((int)puVar10 + 0x3e) = DAT_7007377e;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7131e438,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9694);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9684);
    if (*(char *)(iVar8 + 0x3f) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xa9f11975 >> iVar14) |
                (byte)(0x47910569 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x47910569 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x3d < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x3f) = 0;
    }
    DAT_70b2fd00 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b2fd04);
  }
  (*DAT_70b2fd00)(param_1,param_2);
  return param_1;
}


// =========================================================================
// Function: FUN_7131e024
// Entry: 0x7131e024 | Size: 380 bytes
// =========================================================================

void FUN_7131e024(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b2fd0c & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2fd0c), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b96b4);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b96a4);
      *(undefined1 *)(puVar10 + 9) = 1;
      uVar5 = DAT_7007378c;
      uVar4 = DAT_70073788;
      uVar3 = DAT_70073784;
      *puVar10 = DAT_70073780;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_700737a0;
      uVar5 = DAT_7007379c;
      uVar4 = DAT_70073798;
      uVar3 = DAT_70073794;
      puVar10[4] = DAT_70073790;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7131e488,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b96b4);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b96a4);
    if (*(char *)(iVar8 + 0x24) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xd54d5575 >> iVar14) |
                (byte)(-0x289428c9 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xd76bd737 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x22 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x24) = 0;
    }
    DAT_70b2fd08 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b2fd0c);
  }
                    /* WARNING: Could not recover jumptable at 0x7131e050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b2fd08)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7131e4d8
// Entry: 0x7131e4d8 | Size: 392 bytes
// =========================================================================

void FUN_7131e4d8(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b2fd14 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2fd14), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b96d4);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b96c4);
      *(undefined1 *)((int)puVar10 + 0x23) = 1;
      uVar5 = DAT_700737b4;
      uVar4 = DAT_700737b0;
      uVar3 = DAT_700737ac;
      *puVar10 = DAT_700737a8;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar5 = DAT_700737c4;
      uVar4 = DAT_700737c0;
      uVar3 = DAT_700737bc;
      puVar10[4] = DAT_700737b8;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      uVar6 = DAT_700737ca;
      *(undefined2 *)(puVar10 + 8) = DAT_700737c8;
      *(undefined1 *)((int)puVar10 + 0x22) = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7131f434,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b96d4);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b96c4);
    if (*(char *)(iVar8 + 0x23) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xb4d771d >> iVar14) |
                (byte)(-0x44defc41 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xbb2103bf >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x21 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x23) = 0;
    }
    DAT_70b2fd10 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b2fd14);
  }
                    /* WARNING: Could not recover jumptable at 0x7131e504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b2fd10)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7131e8f8
// Entry: 0x7131e8f8 | Size: 40 bytes
// =========================================================================

void FUN_7131e8f8(int param_1)

{
  if (*(int *)(param_1 + 0x17c) != 0) {
    FUN_7131c068();
    *(undefined4 *)(param_1 + 0x17c) = 0;
  }
  return;
}


// =========================================================================
// Function: FUN_7131ebec
// Entry: 0x7131ebec | Size: 388 bytes
// =========================================================================

void FUN_7131ebec(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b2fd1c & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2fd1c), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b96f4);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b96e4);
      *(undefined1 *)(puVar10 + 0xd) = 1;
      uVar5 = DAT_700737dc;
      uVar4 = DAT_700737d8;
      uVar3 = DAT_700737d4;
      *puVar10 = DAT_700737d0;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar5 = DAT_700737ec;
      uVar4 = DAT_700737e8;
      uVar3 = DAT_700737e4;
      puVar10[4] = DAT_700737e0;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      uVar6 = DAT_70073800;
      uVar5 = DAT_700737fc;
      uVar4 = DAT_700737f8;
      uVar3 = DAT_700737f4;
      puVar10[8] = DAT_700737f0;
      puVar10[9] = uVar3;
      puVar10[10] = uVar4;
      puVar10[0xb] = uVar5;
      puVar10[0xc] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7131f484,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b96f4);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b96e4);
    if (*(char *)(iVar8 + 0x34) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x297d914f >> iVar14) |
                (byte)(-0x2ea4e4e9 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xd15b1b17 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x32 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x34) = 0;
    }
    DAT_70b2fd18 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b2fd1c);
  }
                    /* WARNING: Could not recover jumptable at 0x7131ec18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b2fd18)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7131f008
// Entry: 0x7131f008 | Size: 404 bytes
// =========================================================================

void FUN_7131f008(undefined4 param_1)

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
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b2fd24 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2fd24), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9714);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9704);
      *(undefined1 *)((int)puVar11 + 0x37) = 1;
      uVar5 = DAT_70073814;
      uVar4 = DAT_70073810;
      uVar3 = DAT_7007380c;
      *puVar11 = DAT_70073808;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      uVar5 = DAT_70073824;
      uVar4 = DAT_70073820;
      uVar3 = DAT_7007381c;
      puVar11[4] = DAT_70073818;
      puVar11[5] = uVar3;
      puVar11[6] = uVar4;
      puVar11[7] = uVar5;
      uVar6 = DAT_70073838;
      uVar5 = DAT_70073834;
      uVar4 = DAT_70073830;
      uVar3 = DAT_7007382c;
      puVar11[8] = DAT_70073828;
      puVar11[9] = uVar3;
      puVar11[10] = uVar4;
      puVar11[0xb] = uVar5;
      puVar11[0xc] = uVar6;
      uVar7 = DAT_7007383e;
      *(undefined2 *)(puVar11 + 0xd) = DAT_7007383c;
      *(undefined1 *)((int)puVar11 + 0x36) = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7131f4d4,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9714);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9704);
    if (*(char *)(iVar9 + 0x37) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0xcb0b3da5 >> iVar15) |
                (byte)(0x5ad23c3 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0x5ad23c3 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x35 < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x37) = 0;
    }
    DAT_70b2fd20 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b2fd24);
  }
                    /* WARNING: Could not recover jumptable at 0x7131f034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b2fd20)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7131f9a8
// Entry: 0x7131f9a8 | Size: 480 bytes
// =========================================================================

void FUN_7131f9a8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  char *pcVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  
  DataMemoryBarrier(0xb);
  if ((DAT_70b2fd38 & 1) == 0) {
    iVar5 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2fd38);
    if (iVar5 != 0) {
      pcVar6 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9754,param_2,param_3,param_4);
      if (*pcVar6 == '\0') {
        iVar5 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9744);
        *(undefined1 *)(iVar5 + 0x103) = 1;
        imp___aeabi_memcpy8(iVar5,&DAT_70073868,0x103);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_7131fe3c,iVar5,&DAT_70b0e000);
        puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9754);
        *puVar7 = 1;
      }
      iVar5 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9744);
      if (*(char *)(iVar5 + 0x103) != '\0') {
        uVar8 = 0;
        uVar9 = 0;
        bVar3 = 0;
        do {
          iVar10 = (uVar9 & 7) * 8;
          uVar11 = iVar10 - 0x20;
          bVar4 = (byte)(0x9f9d9cf >> iVar10) |
                  (byte)(0xb5181c5 << ((uVar9 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar11) {
            bVar4 = (byte)(0xb5181c5 >> (uVar11 & 0xff));
          }
          *(byte *)(iVar5 + uVar9) = *(byte *)(iVar5 + uVar9) ^ bVar4;
          bVar12 = 0xfffffffe < uVar9;
          uVar11 = uVar8 >> 1;
          uVar1 = (uint)bVar3;
          uVar2 = uVar9 >> 1;
          uVar8 = uVar8 + bVar12;
          uVar9 = uVar9 + 1;
          bVar3 = bVar3 ^ bVar12;
        } while (uVar11 == 0 && (0x80 < (uVar1 << 0x1f | uVar2)) <= uVar11);
        *(undefined1 *)(iVar5 + 0x103) = 0;
      }
      DAT_70b2fd34 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar5,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70b2fd38);
    }
  }
  (*DAT_70b2fd34)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                  param_11);
  return;
}


// =========================================================================
// Function: FUN_7131fe8c
// Entry: 0x7131fe8c | Size: 392 bytes
// =========================================================================

int FUN_7131fe8c(int param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  byte bVar16;
  bool bVar17;
  
  iVar8 = FUN_7136cdfc();
  FUN_7136cdfc(iVar8 + 0xc);
  FUN_7136cdfc(param_1 + 0x18);
  DataMemoryBarrier(0xb);
  if (((DAT_70b2fd40 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2fd40), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9774);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9764);
      *(undefined1 *)((int)puVar10 + 0x19) = 1;
      uVar7 = DAT_70073984;
      uVar6 = DAT_70073980;
      uVar5 = DAT_7007397c;
      uVar4 = DAT_70073978;
      uVar3 = DAT_70073974;
      *puVar10 = DAT_70073970;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      puVar10[5] = uVar7;
      *(undefined1 *)(puVar10 + 6) = DAT_70073988;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71320874,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9774);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9764);
    if (*(char *)(iVar8 + 0x19) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar16 = (byte)(0xa9f11975 >> iVar14) |
                 (byte)(0x47910569 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar16 = (byte)(0x47910569 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar16;
        bVar17 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x17 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x19) = 0;
    }
    DAT_70b2fd3c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b2fd40);
  }
  (*DAT_70b2fd3c)(param_1);
  return param_1;
}


// =========================================================================
// Function: FUN_71320300
// Entry: 0x71320300 | Size: 436 bytes
// =========================================================================

void FUN_71320300(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  byte bVar10;
  
  DataMemoryBarrier(0xb);
  if ((DAT_70b2fd48 & 1) == 0) {
    iVar3 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2fd48);
    if (iVar3 != 0) {
      pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9794,param_2,param_3,param_4);
      if (*pcVar4 == '\0') {
        iVar3 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9784);
        *(undefined1 *)(iVar3 + 0x81) = 1;
        imp___aeabi_memcpy8(iVar3,&DAT_70073990,0x81);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_713208b0,iVar3,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9794);
        *puVar6 = 1;
      }
      iVar3 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9784);
      if (*(char *)(iVar3 + 0x81) != '\0') {
        uVar5 = 0;
        uVar7 = 0;
        do {
          iVar8 = (uVar7 & 7) * 8;
          uVar9 = iVar8 - 0x20;
          bVar10 = (byte)(0xe569d1dd >> iVar8) |
                   (byte)(0x750729cb << ((uVar7 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar9) {
            bVar10 = (byte)(0x750729cb >> (uVar9 & 0xff));
          }
          *(byte *)(iVar3 + uVar7) = *(byte *)(iVar3 + uVar7) ^ bVar10;
          bVar1 = uVar5 == 0;
          bVar2 = (0x7f < uVar7) <= uVar5;
          uVar5 = uVar5 + (0xfffffffe < uVar7);
          uVar7 = uVar7 + 1;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar3 + 0x81) = 0;
      }
      DAT_70b2fd44 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar3,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70b2fd48);
    }
  }
  (*DAT_70b2fd44)(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}


// =========================================================================
// Function: FUN_71320768
// Entry: 0x71320768 | Size: 184 bytes
// =========================================================================

int FUN_71320768(void)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  
  bVar3 = false;
  piVar4 = (int *)*DAT_70b3ede4;
  iVar2 = piVar4[3];
  do {
    iVar2 = iVar2 + 1;
    piVar4[3] = iVar2;
    if (piVar4[2] <= iVar2) {
      if (bVar3) {
        imp_raise(5);
        piVar4[3] = -1;
        return 0;
      }
      iVar2 = 0;
      bVar3 = true;
      piVar4[3] = 0;
    }
    bVar1 = *(byte *)(piVar4[1] + iVar2);
  } while (-1 < (char)bVar1);
  *(byte *)(piVar4[1] + iVar2) = bVar1 & 0x7f;
  bVar1 = *(byte *)(piVar4[1] + piVar4[3]);
  *(byte *)(piVar4[1] + piVar4[3]) = bVar1 + 1 & 0x7f | bVar1 & 0x80;
  return *piVar4 + piVar4[3] * 0x30;
}


// =========================================================================
// Function: FUN_71320d00
// Entry: 0x71320d00 | Size: 356 bytes
// =========================================================================

void FUN_71320d00(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  byte bVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b2fd60 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2fd60), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9814);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9804);
      *(undefined1 *)(puVar9 + 9) = 1;
      uVar5 = DAT_70073a74;
      uVar4 = DAT_70073a70;
      uVar3 = DAT_70073a6c;
      *puVar9 = DAT_70073a68;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      uVar6 = DAT_70073a88;
      uVar5 = DAT_70073a84;
      uVar4 = DAT_70073a80;
      uVar3 = DAT_70073a7c;
      puVar9[4] = DAT_70073a78;
      puVar9[5] = uVar3;
      puVar9[6] = uVar4;
      puVar9[7] = uVar5;
      puVar9[8] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713222f0,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9814);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9804);
    if (*(char *)(iVar7 + 0x24) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar15 = (byte)(0x2549d30d >> iVar13) |
                 (byte)(0x65617345 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar15 = (byte)(0x65617345 >> (uVar14 & 0xff));
        }
        *(byte *)(iVar7 + uVar11) = *(byte *)(iVar7 + uVar11) ^ bVar15;
        bVar16 = 0xfffffffe < uVar11;
        bVar1 = uVar12 == 0;
        bVar2 = (0x22 < uVar11) <= uVar12;
        uVar11 = uVar11 + 1;
        uVar12 = uVar12 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar7 + 0x24) = 0;
    }
    DAT_70b2fd5c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b2fd60);
  }
                    /* WARNING: Could not recover jumptable at 0x71320d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b2fd5c)();
  return;
}


// =========================================================================
// Function: FUN_713210fc
// Entry: 0x713210fc | Size: 356 bytes
// =========================================================================

void FUN_713210fc(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  byte bVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b2fd68 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2fd68), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9834);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9824);
      *(undefined1 *)(puVar9 + 10) = 1;
      uVar6 = DAT_70073aa0;
      uVar5 = DAT_70073a9c;
      uVar4 = DAT_70073a98;
      uVar3 = DAT_70073a94;
      *puVar9 = DAT_70073a90;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      puVar9[4] = uVar6;
      uVar6 = DAT_70073ab4;
      uVar5 = DAT_70073ab0;
      uVar4 = DAT_70073aac;
      uVar3 = DAT_70073aa8;
      puVar9[5] = DAT_70073aa4;
      puVar9[6] = uVar3;
      puVar9[7] = uVar4;
      puVar9[8] = uVar5;
      puVar9[9] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71322340,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9834);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9824);
    if (*(char *)(iVar7 + 0x28) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar15 = (byte)(0xa1d573c5 >> iVar13) |
                 (byte)(-0x1038407f << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar15 = (byte)(0xefc7bf81 >> (uVar14 & 0xff));
        }
        *(byte *)(iVar7 + uVar11) = *(byte *)(iVar7 + uVar11) ^ bVar15;
        bVar16 = 0xfffffffe < uVar11;
        bVar1 = uVar12 == 0;
        bVar2 = (0x26 < uVar11) <= uVar12;
        uVar11 = uVar11 + 1;
        uVar12 = uVar12 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar7 + 0x28) = 0;
    }
    DAT_70b2fd64 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b2fd68);
  }
                    /* WARNING: Could not recover jumptable at 0x71321128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b2fd64)();
  return;
}


// =========================================================================
// Function: FUN_713214f8
// Entry: 0x713214f8 | Size: 364 bytes
// =========================================================================

void FUN_713214f8(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  byte bVar14;
  bool bVar15;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b2fd70 & 1) == 0) && (iVar6 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2fd70), iVar6 != 0)) {
    pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9854);
    if (*pcVar7 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9844);
      *(undefined1 *)((int)puVar8 + 0x22) = 1;
      uVar5 = DAT_70073ac4;
      uVar4 = DAT_70073ac0;
      uVar3 = DAT_70073abc;
      *puVar8 = DAT_70073ab8;
      puVar8[1] = uVar3;
      puVar8[2] = uVar4;
      puVar8[3] = uVar5;
      uVar5 = DAT_70073ad4;
      uVar4 = DAT_70073ad0;
      uVar3 = DAT_70073acc;
      puVar8[4] = DAT_70073ac8;
      puVar8[5] = uVar3;
      puVar8[6] = uVar4;
      puVar8[7] = uVar5;
      *(undefined2 *)(puVar8 + 8) = DAT_70073ad8;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71322390,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9854);
      *puVar9 = 1;
    }
    iVar6 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9844);
    if (*(char *)(iVar6 + 0x22) != '\0') {
      uVar10 = 0;
      uVar11 = 0;
      do {
        iVar12 = (uVar10 & 7) * 8;
        uVar13 = iVar12 - 0x20;
        bVar14 = (byte)(0x45a9b135 >> iVar12) |
                 (byte)(-0x760ad4c7 << ((uVar10 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar13) {
          bVar14 = (byte)(0x89f52b39 >> (uVar13 & 0xff));
        }
        *(byte *)(iVar6 + uVar10) = *(byte *)(iVar6 + uVar10) ^ bVar14;
        bVar15 = 0xfffffffe < uVar10;
        bVar1 = uVar11 == 0;
        bVar2 = (0x20 < uVar10) <= uVar11;
        uVar10 = uVar10 + 1;
        uVar11 = uVar11 + bVar15;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar6 + 0x22) = 0;
    }
    DAT_70b2fd6c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar6,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b2fd70);
  }
                    /* WARNING: Could not recover jumptable at 0x71321524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b2fd6c)();
  return;
}


// =========================================================================
// Function: FUN_713218fc
// Entry: 0x713218fc | Size: 8 bytes
// =========================================================================

undefined4 FUN_713218fc(void)

{
  return 0xffffffff;
}


// =========================================================================
// Function: FUN_7132191c
// Entry: 0x7132191c | Size: 852 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7132191c(undefined4 param_1)

{
  byte bVar1;
  int extraout_r1;
  int iVar2;
  uint uVar3;
  uint extraout_r2;
  bool bVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined1 uVar7;
  undefined4 in_cr0;
  undefined4 in_cr13;
  undefined1 auStack_41c [1024];
  int iStack_1c;
  
  bVar4 = false;
  iStack_1c = _ext___stack_chk_guard;
  piVar5 = (int *)*DAT_70b2fd4c;
  iVar2 = piVar5[3];
  do {
    iVar2 = iVar2 + 1;
    piVar5[3] = iVar2;
    if (piVar5[2] <= iVar2) {
      uVar7 = !bVar4;
      if (!(bool)uVar7) {
        imp_raise(5);
        piVar5[3] = -1;
        iVar2 = extraout_r1;
        uVar3 = extraout_r2;
        goto LAB_71321c54;
      }
      iVar2 = 0;
      bVar4 = true;
      piVar5[3] = 0;
    }
    bVar1 = *(byte *)(piVar5[1] + iVar2);
  } while (-1 < (char)bVar1);
  *(byte *)(piVar5[1] + iVar2) = bVar1 & 0x7f;
  iVar2 = piVar5[3];
  uVar3 = (uint)*(byte *)(piVar5[1] + iVar2);
  uVar3 = uVar3 + 1 & 0x7f | uVar3 & 0x80;
  *(char *)(piVar5[1] + iVar2) = (char)uVar3;
  uVar7 = *piVar5 == 0;
  if (!(bool)uVar7) {
    puVar6 = (undefined4 *)(piVar5[3] * 0x2c + *piVar5);
    *(undefined4 *)((int)puVar6 + 0x22) = 0x80007fff;
    puVar6[10] = 0;
    *(undefined2 *)((int)puVar6 + 0x26) = 0;
    puVar6[2] = 0xc9742400;
    *puVar6 = 0x49742400;
    puVar6[1] = 0xc9742400;
    puVar6[3] = 0x49742400;
    iVar2 = imp_strcasecmp(param_1,s_procobj_70065925);
    if (((iVar2 == 0) || (iVar2 = imp_strcasecmp(param_1,s_proc_int_70060fcb), iVar2 == 0)) ||
       (iVar2 = imp_strcasecmp(param_1,s_proc_int2_7006bd66), iVar2 == 0)) {
      *(undefined1 *)((int)puVar6 + 0x2a) = 1;
    }
    iVar2 = imp_strncasecmp(param_1,s_int_la_700625f0,6);
    if ((((iVar2 == 0) || (iVar2 = imp_strncasecmp(param_1,s_int_sf_7006b6b4,6), iVar2 == 0)) ||
        ((iVar2 = imp_strncasecmp(param_1,s_int_veg_7006bd70,7), iVar2 == 0 ||
         ((iVar2 = imp_strncasecmp(param_1,s_int_cont_700716fc,8), iVar2 == 0 ||
          (iVar2 = imp_strncasecmp(param_1,s_gen_int1_7006cd59,8), iVar2 == 0)))))) ||
       ((iVar2 = imp_strncasecmp(param_1,s_gen_int2_70070f57,8), iVar2 == 0 ||
        ((((((iVar2 = imp_strncasecmp(param_1,s_gen_int3_7006a1b1,8), iVar2 == 0 ||
             (iVar2 = imp_strncasecmp(param_1,s_gen_int4_70066ab7,8), iVar2 == 0)) ||
            (iVar2 = imp_strncasecmp(param_1,s_gen_int5_7006592d,8), iVar2 == 0)) ||
           ((iVar2 = imp_strncasecmp(param_1,s_gen_intb_7006518c,8), iVar2 == 0 ||
            (iVar2 = imp_strncasecmp(param_1,s_savehous_700662d1,8), iVar2 == 0)))) ||
          ((iVar2 = imp_strcasecmp(param_1,s_props_7006d51f), iVar2 == 0 ||
           ((iVar2 = imp_strcasecmp(param_1,s_props2_70063b7e), iVar2 == 0 ||
            (iVar2 = imp_strncasecmp(param_1,s_levelmap_700625f7,8), iVar2 == 0)))))) ||
         (iVar2 = imp_strncasecmp(param_1,s_stadint_7006d525,7), iVar2 == 0)))))) {
      *(undefined1 *)((int)puVar6 + 0x2b) = 1;
    }
    if (_ext___stack_chk_guard != iStack_1c) {
                    /* WARNING: Subroutine does not return */
      imp___stack_chk_fail(*(undefined4 *)*DAT_70b2fd4c);
    }
    return;
  }
LAB_71321c54:
  FUN_713221ac(auStack_41c,iVar2,uVar3,param_1);
  FUN_7151c9e4(auStack_41c);
  if ((bool)uVar7) {
    coprocessor_moveto(9,6,5,0x71321c6c,in_cr13,in_cr0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: FUN_713221ac
// Entry: 0x713221ac | Size: 68 bytes
// =========================================================================

void FUN_713221ac(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_4;
  
  uStack_4 = param_4;
  imp___vsprintf_chk(param_1,0,0x400,&DAT_70065905,&uStack_4);
  return;
}


// =========================================================================
// Function: FUN_71322c04
// Entry: 0x71322c04 | Size: 520 bytes
// =========================================================================

void FUN_71322c04(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  undefined4 unaff_r4;
  byte bVar18;
  undefined4 unaff_r5;
  int *piVar19;
  undefined4 unaff_r6;
  int iVar20;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  bool bVar21;
  
  iVar7 = DAT_70b2fd88;
  if (*(int *)(DAT_70b2fd88 + 0x30) != 0) {
    thunk_qNQrlu();
  }
  *(int *)(iVar7 + 8) = iVar7 + 0xc;
  *(int *)(iVar7 + 0x28) = iVar7 + 0x18;
  *(int *)(iVar7 + 0x10) = iVar7;
  uVar11 = thunk__IBDl(0x1068);
  iVar16 = iVar7 + 0x24;
  *(undefined4 *)(iVar7 + 0x30) = uVar11;
  iVar12 = 0x15e;
  uVar13 = 0x15f;
  iVar14 = 0x1064;
  do {
    iVar20 = *(int *)(iVar7 + 0x30);
    iVar12 = iVar12 + -1;
    uVar13 = uVar13 - 1;
    piVar19 = (int *)(iVar20 + iVar14);
    *piVar19 = iVar16;
    iVar14 = iVar14 + -0xc;
    *(int **)(iVar16 + 4) = piVar19 + -2;
    piVar19[-1] = iVar7 + 0x18;
    *(int **)(iVar7 + 0x20) = piVar19 + -2;
    iVar16 = iVar20 + iVar12 * 0xc;
  } while (1 < uVar13);
  *DAT_70b2fd84 = 0;
  DataMemoryBarrier(0xb);
  if (((DAT_70b2fd58 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b2fd58), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b97f4);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b97e4);
      *(undefined1 *)((int)puVar9 + 0x1a) = 1;
      uVar6 = DAT_70073a5c;
      uVar5 = DAT_70073a58;
      uVar4 = DAT_70073a54;
      uVar3 = DAT_70073a50;
      uVar11 = DAT_70073a4c;
      *puVar9 = DAT_70073a48;
      puVar9[1] = uVar11;
      puVar9[2] = uVar3;
      puVar9[3] = uVar4;
      puVar9[4] = uVar5;
      puVar9[5] = uVar6;
      *(undefined2 *)(puVar9 + 6) = DAT_70073a60;
      thunk_GFDIUClbc_QcPNgD_wH
                (&LAB_713222b4,puVar9,&DAT_70b0e000,uVar11,unaff_r4,unaff_r5,unaff_r6,unaff_r7,
                 unaff_r8,unaff_r10,unaff_r11,unaff_lr);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b97f4);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b97e4);
    if (*(char *)(iVar7 + 0x1a) != '\0') {
      uVar13 = 0;
      uVar15 = 0;
      do {
        iVar12 = (uVar13 & 7) * 8;
        uVar17 = iVar12 - 0x20;
        bVar18 = (byte)(0xf7f5f1d5 >> iVar12) |
                 (byte)(-0x6ede64e1 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar17) {
          bVar18 = (byte)(0x91219b1f >> (uVar17 & 0xff));
        }
        *(byte *)(iVar7 + uVar13) = *(byte *)(iVar7 + uVar13) ^ bVar18;
        bVar21 = 0xfffffffe < uVar13;
        bVar1 = uVar15 == 0;
        bVar2 = (0x18 < uVar13) <= uVar15;
        uVar13 = uVar13 + 1;
        uVar15 = uVar15 + bVar21;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar7 + 0x1a) = 0;
    }
    DAT_70b2fd54 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b2fd58);
  }
                    /* WARNING: Could not recover jumptable at 0x7132092c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b2fd54)();
  return;
}


// =========================================================================
// Function: FUN_71323d40
// Entry: 0x71323d40 | Size: 3168 bytes
// =========================================================================

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_71323d40(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  short *psVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined1 auStack_b8 [12];
  undefined1 auStack_ac [12];
  undefined1 auStack_a0 [12];
  undefined1 auStack_94 [12];
  undefined1 auStack_88 [12];
  undefined1 auStack_7c [12];
  undefined1 auStack_70 [12];
  undefined1 auStack_64 [12];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  FUN_71413b60(8,1);
  FUN_71413b60(0xc,1);
  FUN_71413b60(10,5);
  FUN_71413b60(0xb,6);
  FUN_71413b60(1,0);
  uStack_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_48 = param_2[3];
  uStack_44 = param_2[4];
  uStack_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_40 = param_2[5];
  FUN_71340b14(auStack_64,param_1,&uStack_58);
  uVar2 = uStack_40;
  uStack_50 = uStack_40;
  FUN_71340b14(auStack_70,param_1,&uStack_58);
  FUN_7136d040(&uStack_58,&uStack_38);
  uVar8 = uStack_48;
  uStack_58 = uStack_48;
  FUN_71340b14(auStack_7c,param_1,&uStack_58);
  FUN_7136d040(&uStack_58,&uStack_38);
  uVar1 = uStack_44;
  uStack_54 = uStack_44;
  FUN_71340b14(auStack_88,param_1,&uStack_58);
  FUN_7136d040(&uStack_58,&uStack_38);
  uStack_50 = uVar2;
  uStack_54 = uVar1;
  FUN_71340b14(auStack_94,param_1,&uStack_58);
  FUN_7136d040(&uStack_58,&uStack_38);
  uStack_50 = uVar2;
  uStack_58 = uVar8;
  FUN_71340b14(auStack_a0,param_1,&uStack_58);
  FUN_7136d040(&uStack_58,&uStack_38);
  uStack_54 = uVar1;
  uStack_58 = uVar8;
  FUN_71340b14(auStack_ac,param_1,&uStack_58);
  FUN_7136d040(&uStack_58,&uStack_48);
  FUN_71340b14(auStack_b8,param_1,&uStack_58);
  psVar3 = (short *)param_2[0xb];
  if (psVar3 != (short *)0x0) {
    if (0 < *psVar3) {
      iVar12 = 0;
      iVar13 = 0;
      do {
        FUN_71340b14(&uStack_c8,param_1,*(int *)(psVar3 + 4) + iVar12);
        uVar2 = uStack_c0;
        uVar14 = *(undefined4 *)(*(int *)(param_2[0xb] + 8) + iVar12 + 0xc);
        uVar4 = FUN_71ba0b38(uStack_c0,uVar14);
        uVar8 = uStack_c8;
        uVar5 = FUN_71ba0b38(uStack_c8,uVar14);
        uVar1 = uStack_c4;
        FUN_7143ff40(uVar8,uStack_c4,uVar4,uVar5,uStack_c4,uVar2,param_4,param_4);
        uVar6 = FUN_71ba240c(uVar8,uVar14);
        FUN_7143ff40(uVar8,uVar1,uVar4,uVar6,uVar1,uVar2,param_4,param_4);
        uVar7 = FUN_71ba240c(uVar2,uVar14);
        FUN_7143ff40(uVar8,uVar1,uVar7,uVar5,uVar1,uVar2,param_4,param_4);
        FUN_7143ff40(uVar8,uVar1,uVar7,uVar6,uVar1,uVar2,param_4,param_4);
        uVar5 = FUN_71ba0b38(uVar1,uVar14);
        FUN_7143ff40(uVar8,uVar1,uVar4,uVar8,uVar5,uVar2,param_4,param_4);
        uVar6 = FUN_71ba240c(uVar1,uVar14);
        FUN_7143ff40(uVar8,uVar1,uVar4,uVar8,uVar6,uVar2,param_4,param_4);
        FUN_7143ff40(uVar8,uVar1,uVar7,uVar8,uVar5,uVar2,param_4,param_4);
        FUN_7143ff40(uVar8,uVar1,uVar7,uVar8,uVar6,uVar2,param_4,param_4);
        psVar3 = (short *)param_2[0xb];
        iVar13 = iVar13 + 1;
        iVar12 = iVar12 + 0x14;
      } while (iVar13 < *psVar3);
    }
    if ('\0' < (char)psVar3[3]) {
      iVar12 = 0;
      iVar13 = 0;
      do {
        FUN_71340b14(&uStack_c8,param_1,*(int *)(psVar3 + 8) + iVar12);
        FUN_71340b14(&uStack_d8,param_1,*(int *)(param_2[0xb] + 0x10) + iVar12 + 0x10);
        FUN_7143ff40(uStack_c8,uStack_c4,uStack_c0,uStack_d8,uStack_d4,uStack_d0,param_4,param_4);
        psVar3 = (short *)param_2[0xb];
        iVar12 = iVar12 + 0x20;
        iVar13 = iVar13 + 1;
      } while (iVar13 < (char)psVar3[3]);
    }
    if (0 < psVar3[1]) {
      puVar15 = (undefined4 *)((uint)&uStack_d8 | 4);
      puVar16 = (undefined4 *)((uint)&uStack_e8 | 4);
      iVar13 = 0;
      iVar12 = 0;
      puVar9 = puVar16 + 1;
      puVar10 = puVar15 + 1;
      do {
        if (*(int *)(psVar3 + 6) != 0) {
          puVar11 = (undefined4 *)(*(int *)(psVar3 + 6) + iVar12);
          uStack_e8 = *puVar11;
          uStack_e4 = puVar11[1];
          uStack_e0 = puVar11[2];
          uStack_d8 = puVar11[3];
          uStack_d4 = puVar11[4];
          uStack_d0 = puVar11[5];
          uStack_c8 = uStack_e8;
          uStack_c4 = uStack_e4;
          uStack_c0 = uStack_e0;
          FUN_71340b14(&uStack_f4,param_1,&uStack_e8);
          *puVar9 = *puVar10;
          FUN_71340b14(&uStack_100,param_1,&uStack_e8);
          FUN_7136d040(&uStack_e8,&uStack_c8);
          uStack_e8 = uStack_d8;
          FUN_71340b14(&uStack_10c,param_1,&uStack_e8);
          FUN_7136d040(&uStack_e8,&uStack_c8);
          *puVar16 = *puVar15;
          FUN_71340b14(&uStack_118,param_1,&uStack_e8);
          FUN_7136d040(&uStack_e8,&uStack_c8);
          *puVar16 = *puVar15;
          *puVar9 = *puVar10;
          FUN_71340b14(&uStack_124,param_1,&uStack_e8);
          FUN_7136d040(&uStack_e8,&uStack_c8);
          *puVar9 = *puVar10;
          uStack_e8 = uStack_d8;
          FUN_71340b14(&uStack_130,param_1,&uStack_e8);
          FUN_7136d040(&uStack_e8,&uStack_c8);
          *puVar16 = *puVar15;
          uStack_e8 = uStack_d8;
          FUN_71340b14(&uStack_13c,param_1,&uStack_e8);
          FUN_7136d040(&uStack_e8,&uStack_d8);
          FUN_71340b14(&uStack_148,param_1,&uStack_e8);
          FUN_7143ff40(uStack_f4,uStack_f0,uStack_ec,uStack_100,uStack_fc,uStack_f8,param_4,param_4)
          ;
          FUN_7143ff40(uStack_f4,uStack_f0,uStack_ec,uStack_10c,uStack_108,uStack_104,param_4,
                       param_4);
          FUN_7143ff40(uStack_f4,uStack_f0,uStack_ec,uStack_118,uStack_114,uStack_110,param_4,
                       param_4);
          FUN_7143ff40(uStack_124,uStack_120,uStack_11c,uStack_100,uStack_fc,uStack_f8,param_4,
                       param_4);
          FUN_7143ff40(uStack_124,uStack_120,uStack_11c,uStack_148,uStack_144,uStack_140,param_4,
                       param_4);
          FUN_7143ff40(uStack_124,uStack_120,uStack_11c,uStack_118,uStack_114,uStack_110,param_4,
                       param_4);
          FUN_7143ff40(uStack_130,uStack_12c,uStack_128,uStack_100,uStack_fc,uStack_f8,param_4,
                       param_4);
          FUN_7143ff40(uStack_130,uStack_12c,uStack_128,uStack_148,uStack_144,uStack_140,param_4,
                       param_4);
          FUN_7143ff40(uStack_130,uStack_12c,uStack_128,uStack_10c,uStack_108,uStack_104,param_4,
                       param_4);
          FUN_7143ff40(uStack_13c,uStack_138,uStack_134,uStack_148,uStack_144,uStack_140,param_4,
                       param_4);
          FUN_7143ff40(uStack_13c,uStack_138,uStack_134,uStack_10c,uStack_108,uStack_104,param_4,
                       param_4);
          FUN_7143ff40(uStack_13c,uStack_138,uStack_134,uStack_118,uStack_114,uStack_110,param_4,
                       param_4);
          psVar3 = (short *)param_2[0xb];
        }
        iVar13 = iVar13 + 1;
        iVar12 = iVar12 + 0x1c;
      } while (iVar13 < psVar3[1]);
    }
    if (0 < psVar3[2]) {
      iVar12 = 0;
      do {
        FUN_7136cdfc(&uStack_c8);
        FUN_7136cdfc(&uStack_d8);
        FUN_7136cdfc(&uStack_e8);
        FUN_7136d040(&uStack_c8,
                     *(int *)(param_2[0xb] + 0x14) +
                     *(int *)(*(int *)(param_2[0xb] + 0x18) + iVar12 * 0x10) * 0xc);
        FUN_7136d040(&uStack_d8,
                     *(int *)(param_2[0xb] + 0x14) +
                     *(int *)(*(int *)(param_2[0xb] + 0x18) + iVar12 * 0x10 + 4) * 0xc);
        FUN_7136d040(&uStack_e8,
                     *(int *)(param_2[0xb] + 0x14) +
                     *(int *)(*(int *)(param_2[0xb] + 0x18) + iVar12 * 0x10 + 8) * 0xc);
        FUN_71340b14(&uStack_f4,param_1,&uStack_c8);
        FUN_7136d040(&uStack_c8,&uStack_f4);
        FUN_71340b14(&uStack_f4,param_1,&uStack_d8);
        FUN_7136d040(&uStack_d8,&uStack_f4);
        FUN_71340b14(&uStack_f4,param_1,&uStack_e8);
        FUN_7136d040(&uStack_e8,&uStack_f4);
        uVar8 = FUN_71561790(param_3,uStack_c8,uStack_c4,uStack_c0);
        iVar13 = FUN_71ba2d10(uVar8,0x42480000);
        if (iVar13 != 0) {
          FUN_7143ff40(uStack_c8,uStack_c4,uStack_c0,uStack_d8,uStack_d4,uStack_d0,param_4,param_4);
        }
        uVar8 = FUN_71561790(param_3,uStack_d8,uStack_d4,uStack_d0);
        iVar13 = FUN_71ba2d10(uVar8,0x42480000);
        if (iVar13 != 0) {
          FUN_7143ff40(uStack_c8,uStack_c4,uStack_c0,uStack_e8,uStack_e4,uStack_e0,param_4,param_4);
        }
        uVar8 = FUN_71561790(param_3,uStack_e8,uStack_e4,uStack_e0);
        iVar13 = FUN_71ba2d10(uVar8,0x42480000);
        if (iVar13 != 0) {
          FUN_7143ff40(uStack_d8,uStack_d4,uStack_d0,uStack_e8,uStack_e4,uStack_e0,param_4,param_4);
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < *(short *)(param_2[0xb] + 4));
    }
  }
  FUN_71413b60(10,5);
  FUN_71413b60(0xb,6);
  FUN_71413b60(0xc,0);
  FUN_71413b60(8,1);
  FUN_71413b60(6,1);
  return;
}


// =========================================================================
// Function: FUN_713255b4
// Entry: 0x713255b4 | Size: 320 bytes
// =========================================================================

void FUN_713255b4(uint param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar5 = 0;
  do {
    (&DAT_70b2fdc0)[iVar5 * 0x40] = 0;
    iVar5 = iVar5 + 1;
  } while (iVar5 != 0x100);
  uVar2 = (uint)((ulonglong)param_1 * 0x60) | 8;
  if ((int)((ulonglong)param_1 * 0x60 >> 0x20) != 0) {
    uVar2 = 0xffffffff;
  }
  DAT_70b35dc4 = param_1;
  puVar3 = (undefined4 *)thunk__IBDl(uVar2);
  *puVar3 = 0x60;
  puVar3[1] = param_1;
  if (param_1 != 0) {
    iVar5 = param_1 * 0x60;
    puVar1 = puVar3;
    do {
      puVar6 = puVar1 + 0x18;
      *(undefined4 *)((int)puVar1 + 0x53) = 0;
      puVar1[0x12] = 0;
      puVar1[0x13] = 0;
      puVar1[0x14] = 0;
      puVar1[0x16] = 0;
      puVar1[0x17] = 0;
      *puVar6 = 0;
      puVar1[0x19] = 0;
      uVar4 = FUN_714b97d4();
      puVar1[0x17] = uVar4;
      uVar4 = FUN_714b9668(0);
      *puVar6 = uVar4;
      iVar5 = iVar5 + -0x60;
      puVar1 = puVar6;
    } while (iVar5 != 0);
  }
  iVar5 = (param_1 + 1) * 4;
  DAT_70b35dc8 = puVar3 + 2;
  DAT_70b35dcc = imp_malloc(iVar5);
  imp___aeabi_memclr(DAT_70b35dcc,iVar5);
  DAT_70b35dd0 = 0;
  DAT_70b35dd4 = 0;
  DAT_70b35dd8 = param_1 + 1;
  DAT_70b35ddc = FUN_714b97d4();
  DAT_70b35de0 = FUN_714b9e98(FUN_713258d0,0,3,s_CdStream_70060fd4,0,3);
  return;
}


// =========================================================================
// Function: FUN_713258d0
// Entry: 0x713258d0 | Size: 1140 bytes
// =========================================================================

undefined4 FUN_713258d0(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  int *piVar12;
  char *pcVar13;
  undefined1 *puVar14;
  int extraout_r1;
  int *piVar15;
  int iVar16;
  uint uVar17;
  byte bVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  undefined4 *puVar22;
  int *piVar23;
  int *piVar24;
  
  if (DAT_70b35de8 == '\0') {
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9908);
    pbVar10 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9928);
    do {
      imp_sem_wait(DAT_70b35ddc);
      if (DAT_70b35de8 != '\0') {
        return 0;
      }
      iVar11 = -1;
      if (DAT_70b35dd0 != DAT_70b35dd4) {
        iVar11 = *(int *)(DAT_70b35dcc + DAT_70b35dd0 * 4);
      }
      iVar11 = DAT_70b35dc8 + iVar11 * 0x60;
      *(undefined1 *)(iVar11 + 0x4e) = 1;
      if (*(int *)(iVar11 + 0x50) == 0) {
        piVar12 = (int *)(*(int *)(iVar11 + 0x5c) + 0x18);
        piVar15 = (int *)*piVar12;
        piVar24 = piVar12;
        if (piVar15 == (int *)0x0) {
LAB_713259f8:
          pcVar13 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9918);
          if (*pcVar13 == '\0') {
            puVar22 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9908);
            *(undefined1 *)(puVar22 + 0xb) = 1;
            uVar6 = DAT_70073bb0;
            uVar5 = DAT_70073bac;
            uVar4 = DAT_70073ba8;
            uVar3 = DAT_70073ba4;
            *puVar22 = DAT_70073ba0;
            puVar22[1] = uVar3;
            puVar22[2] = uVar4;
            puVar22[3] = uVar5;
            puVar22[4] = uVar6;
            uVar7 = DAT_70073bc8;
            uVar6 = DAT_70073bc4;
            uVar5 = DAT_70073bc0;
            uVar4 = DAT_70073bbc;
            uVar3 = DAT_70073bb8;
            puVar22[5] = DAT_70073bb4;
            puVar22[6] = uVar3;
            puVar22[7] = uVar4;
            puVar22[8] = uVar5;
            puVar22[9] = uVar6;
            puVar22[10] = uVar7;
            thunk_GFDIUClbc_QcPNgD_wH(&LAB_71327bc8,puVar22,&DAT_70b0e000);
            puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9918);
            *puVar14 = 1;
          }
          if (*(char *)(iVar9 + 0x2c) != '\0') {
            uVar21 = 0;
            uVar19 = 0;
            do {
              iVar16 = (uVar19 & 7) * 8;
              uVar17 = iVar16 - 0x20;
              bVar18 = (byte)(0x1ddcb53 >> iVar16) |
                       (byte)(0x1b4bd31f << ((uVar19 & 7) * -8 + 0x20 & 0xff));
              if (-1 < (int)uVar17) {
                bVar18 = (byte)(0x1b4bd31f >> (uVar17 & 0xff));
              }
              *(byte *)(iVar9 + uVar19) = *(byte *)(iVar9 + uVar19) ^ bVar18;
              bVar1 = uVar21 == 0;
              bVar2 = (0x2a < uVar19) <= uVar21;
              uVar21 = uVar21 + (0xfffffffe < uVar19);
              uVar19 = uVar19 + 1;
            } while (bVar1 && bVar2);
            *(undefined1 *)(iVar9 + 0x2c) = 0;
          }
          iVar20 = *(int *)(iVar11 + 0x5c);
          iVar16 = *(int *)(iVar20 + 0xc);
          if ((*(byte *)(iVar20 + 4) & 1) == 0) {
            iVar16 = iVar20 + 5;
          }
          FUN_7188543c(iVar9,iVar16,*(undefined4 *)(iVar11 + 0x40),*(undefined4 *)(iVar11 + 0x44));
          iVar16 = 0;
          do {
            if (*(int *)(iVar11 + iVar16 * 4) != -1) {
              pcVar13 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9938);
              if (*pcVar13 == '\0') {
                puVar22 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9928);
                *puVar22 = 0x72f35594;
                puVar22[1] = 0x1b71c6df;
                *(undefined1 *)(puVar22 + 2) = 1;
                thunk_GFDIUClbc_QcPNgD_wH(&LAB_71327c18,puVar22,&DAT_70b0e000);
                puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9938);
                *puVar14 = 1;
              }
              if (pbVar10[8] != 0) {
                pbVar10[8] = 0;
                *pbVar10 = *pbVar10 ^ 0xb1;
                pbVar10[1] = pbVar10[1] ^ 0x31;
                pbVar10[2] = pbVar10[2] ^ 0xd3;
                pbVar10[3] = pbVar10[3] ^ 0x5f;
                pbVar10[4] = ~pbVar10[4];
                pbVar10[5] = pbVar10[5] ^ 0xe3;
                pbVar10[6] = pbVar10[6] ^ 0x15;
                pbVar10[7] = pbVar10[7] ^ 0x1b;
              }
              FUN_7188543c(pbVar10,iVar16,*(undefined4 *)(iVar11 + iVar16 * 4));
            }
            iVar16 = iVar16 + 1;
          } while (iVar16 != 0x10);
          imp_raise(5);
        }
        else {
          piVar23 = piVar12;
          do {
            piVar8 = piVar15;
            if ((uint)piVar15[4] < *(uint *)(iVar11 + 0x40)) {
              piVar15 = piVar15 + 1;
              piVar8 = piVar23;
            }
            piVar23 = piVar8;
            piVar15 = (int *)*piVar15;
          } while (piVar15 != (int *)0x0);
          if (piVar23 == piVar12) goto LAB_713259f8;
          piVar24 = piVar23;
          if (*(uint *)(iVar11 + 0x40) < (uint)piVar23[4]) {
            piVar24 = piVar12;
          }
          if (piVar12 == piVar24) goto LAB_713259f8;
        }
        uVar21 = 0;
        puVar22 = (undefined4 *)(piVar24[5] + 8);
        do {
          if (*(char *)(puVar22 + 2) == '\0') {
            FUN_719f7bbc(**(undefined4 **)(iVar11 + 0x5c),*(int *)(iVar11 + 0x48) + uVar21 * 0x800,
                         puVar22[-1],puVar22[-2],0);
          }
          else {
            FUN_719f7bbc(**(undefined4 **)(iVar11 + 0x5c),DAT_70b35dc0,*puVar22,puVar22[-2],0);
            thunk_qq_DXQfD_mTyeCa
                      (*(int *)(iVar11 + 0x48) + uVar21 * 0x800,puVar22[1] << 0xb,DAT_70b35dc0,
                       *puVar22);
          }
          imp___aeabi_memclr(uVar21 * 0x800 + *(int *)(iVar11 + 0x48) + puVar22[-1],
                             puVar22[1] * 0x800 - puVar22[-1]);
          piVar24 = puVar22 + 1;
          puVar22 = puVar22 + 5;
          uVar21 = *piVar24 + uVar21;
        } while (uVar21 < *(uint *)(iVar11 + 0x44));
        *(undefined4 *)(iVar11 + 0x50) = 0;
        if (DAT_70b35dd0 != DAT_70b35dd4) {
          FUN_71ba2da8(DAT_70b35dd0 + 1,DAT_70b35dd8);
          DAT_70b35dd0 = extraout_r1;
        }
        imp_pthread_mutex_lock(*(undefined4 *)(iVar11 + 0x58));
        *(undefined4 *)(iVar11 + 0x44) = 0;
        if (*(char *)(iVar11 + 0x4d) != '\0') {
          imp_sem_post(*(undefined4 *)(iVar11 + 0x54));
        }
        *(undefined1 *)(iVar11 + 0x4e) = 0;
        imp_pthread_mutex_unlock(*(undefined4 *)(iVar11 + 0x58));
      }
    } while (DAT_70b35de8 == '\0');
  }
  return 0;
}


// =========================================================================
// Function: FUN_71326264
// Entry: 0x71326264 | Size: 56 bytes
// =========================================================================

void FUN_71326264(void)

{
  if (DAT_70b35dc0 != 0) {
    imp_free();
  }
  DAT_70b35dc0 = imp_malloc(DAT_700b98c4);
  return;
}


// =========================================================================
// Function: FUN_7132634c
// Entry: 0x7132634c | Size: 176 bytes
// =========================================================================

void FUN_7132634c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  DAT_70b35de8 = 1;
  imp_sem_post(DAT_70b35ddc);
  FUN_714ba270(DAT_70b35de0);
  FUN_714ba19c(DAT_70b35de0);
  imp_sem_destroy(DAT_70b35ddc);
  imp_free(DAT_70b35dcc);
  iVar1 = DAT_70b35dc8;
  if (DAT_70b35dc8 != 0) {
    iVar2 = DAT_70b35dc8 + -8;
    if (*(int *)(DAT_70b35dc8 + -4) != 0) {
      iVar3 = *(int *)(DAT_70b35dc8 + -4) * 0x60;
      do {
        imp_sem_destroy(*(undefined4 *)(iVar1 + iVar3 + -0xc));
        FUN_714b973c(*(undefined4 *)(iVar1 + iVar3 + -8));
        iVar3 = iVar3 + -0x60;
      } while (iVar3 != 0);
    }
    thunk_dGrRHE(iVar2);
  }
  imp_free(DAT_70b35dc0);
  return;
}


// =========================================================================
// Function: FUN_71326610
// Entry: 0x71326610 | Size: 76 bytes
// =========================================================================

int FUN_71326610(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  do {
    if ((&DAT_70b33dc0)[iVar1 * 8] == 0) {
      FUN_713266b0(iVar1,param_1);
      return iVar2;
    }
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 0x1000000;
  } while (iVar1 != 0x100);
  return 0;
}


// =========================================================================
// Function: FUN_713266b0
// Entry: 0x713266b0 | Size: 1140 bytes
// =========================================================================

void FUN_713266b0(int param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  char *pcVar13;
  undefined4 uVar14;
  int *piVar15;
  undefined4 *puVar16;
  undefined1 *puVar17;
  undefined4 *puVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  uint uVar26;
  uint uVar27;
  bool bVar28;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  iVar1 = param_1 * 0x20;
  thunk_TLUeCDiekSSzXIoKMrpDGxbhUhOecwKWVtKHyZVlDPMMdVvsalzdkegtCtYHBtVMbgUoWiuRKGDAl
            (iVar1 + 0x70b33dc4);
  iVar9 = thunk_MwhHq(0x98);
  imp___aeabi_memclr8(iVar9,0x68);
  *(int *)(iVar9 + 0x58) = iVar9 + 0x5c;
  imp___aeabi_memclr4(iVar9 + 100,0x34);
  iVar10 = (&DAT_70b33dc0)[param_1 * 8];
  (&DAT_70b33dc0)[param_1 * 8] = iVar9;
  if (iVar10 != 0) {
    FUN_719f4a70();
    thunk_qNQrlu();
    iVar9 = (&DAT_70b33dc0)[param_1 * 8];
  }
  uVar11 = imp_strlen(param_2);
  if (0xfffffff7 < uVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_30);
  }
  if (uVar11 < 0xb) {
    uVar22 = (uint)&uStack_30 | 1;
    uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar11 << 1));
    if (uVar11 == 0) goto LAB_71326788;
  }
  else {
    uVar22 = thunk_MwhHq((uVar11 | 7) + 1);
    uStack_30 = (uVar11 | 7) + 2;
    uStack_2c = uVar11;
    uStack_28 = uVar22;
  }
  imp___aeabi_memcpy(uVar22,param_2,uVar11);
LAB_71326788:
  *(undefined1 *)(uVar22 + uVar11) = 0;
  FUN_719f5944(iVar9,&uStack_30,2,1,0);
  if ((uStack_30 & 1) != 0) {
    thunk_qNQrlu(uStack_28);
  }
  imp_strcpy(&DAT_70b2fdc0 + param_1 * 0x40,param_2);
  piVar12 = (int *)FUN_719f7b9c((&DAT_70b33dc0)[param_1 * 8]);
  iVar19 = *piVar12;
  iVar10 = piVar12[1];
  uVar11 = (iVar10 - iVar19) * -0x73ecade3;
  iVar9 = FUN_719f8780((&DAT_70b33dc0)[param_1 * 8]);
  if (iVar10 == iVar19 || iVar9 == 0) {
    pcVar13 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b98d8);
    if (*pcVar13 == '\0') {
      puVar24 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b98c8);
      *(undefined1 *)((int)puVar24 + 0x26) = 1;
      uVar6 = DAT_70073b64;
      uVar5 = DAT_70073b60;
      uVar14 = DAT_70073b5c;
      *puVar24 = DAT_70073b58;
      puVar24[1] = uVar14;
      puVar24[2] = uVar5;
      puVar24[3] = uVar6;
      uVar7 = DAT_70073b78;
      uVar6 = DAT_70073b74;
      uVar5 = DAT_70073b70;
      uVar14 = DAT_70073b6c;
      puVar24[4] = DAT_70073b68;
      puVar24[5] = uVar14;
      puVar24[6] = uVar5;
      puVar24[7] = uVar6;
      puVar24[8] = uVar7;
      *(undefined2 *)(puVar24 + 9) = DAT_70073b7c;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71327b3c,puVar24,&DAT_70b0e000);
      puVar17 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b98d8);
      *puVar17 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b98c8);
    if (*(char *)(iVar9 + 0x26) != '\0') {
      uVar22 = 0;
      uVar27 = 0;
      do {
        iVar20 = (uVar22 & 7) * 8;
        uVar21 = iVar20 - 0x20;
        bVar8 = (byte)(0x893bd55d >> iVar20) |
                (byte)(0x7638735 << ((uVar22 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar21) {
          bVar8 = (byte)(0x7638735 >> (uVar21 & 0xff));
        }
        *(byte *)(iVar9 + uVar22) = *(byte *)(iVar9 + uVar22) ^ bVar8;
        bVar28 = 0xfffffffe < uVar22;
        bVar2 = uVar27 == 0;
        bVar3 = (0x24 < uVar22) <= uVar27;
        uVar22 = uVar22 + 1;
        uVar27 = uVar27 + bVar28;
      } while (bVar2 && bVar3);
      *(undefined1 *)(iVar9 + 0x26) = 0;
    }
    uVar14 = FUN_719f8780((&DAT_70b33dc0)[param_1 * 8]);
    FUN_7188543c(iVar9,param_2,uVar14,uVar11);
  }
  if (*(int *)(&DAT_70b33dd0 + iVar1) != 0) {
    thunk_dGrRHE();
  }
  puVar24 = (undefined4 *)(&DAT_70b33dd8 + iVar1);
  piVar15 = (int *)(&DAT_70b33dd4 + iVar1);
  FUN_71327a94(piVar15,*puVar24);
  *(undefined4 **)(&DAT_70b33dd4 + iVar1) = puVar24;
  *puVar24 = 0;
  *(undefined4 *)(&DAT_70b33ddc + iVar1) = 0;
  uVar14 = (undefined4)((ulonglong)uVar11 * 0x14);
  if ((int)((ulonglong)uVar11 * 0x14 >> 0x20) != 0) {
    uVar14 = 0xffffffff;
  }
  uVar14 = thunk__IBDl(uVar14);
  *(undefined4 *)(&DAT_70b33dd0 + iVar1) = uVar14;
  if (iVar10 != iVar19) {
    if (uVar11 < 2) {
      uVar11 = 1;
    }
    uVar22 = 0;
    uVar27 = 0;
    do {
      iVar9 = uVar27 * 0x35 + *piVar12;
      cVar4 = *(char *)(iVar9 + 8);
      uVar26 = *(uint *)(iVar9 + 0x19);
      uVar21 = *(uint *)(iVar9 + 0x1d);
      puVar18 = (undefined4 *)(*(int *)(&DAT_70b33dd0 + iVar1) + uVar27 * 0x14);
      *puVar18 = *(undefined4 *)(iVar9 + 0x2d);
      puVar18[1] = uVar21;
      puVar18[2] = uVar26;
      *(bool *)(puVar18 + 4) = cVar4 != '\0';
      iVar10 = (uVar21 >> 0xb) + 1;
      puVar18[3] = iVar10;
      iVar9 = *(int *)(&DAT_70b33dd0 + iVar1);
      puVar18 = *(undefined4 **)(&DAT_70b33dd8 + iVar1);
      puVar23 = puVar24;
      while (puVar25 = puVar23, puVar18 != (undefined4 *)0x0) {
        while (puVar25 = puVar18, (uint)puVar25[4] <= uVar22) {
          if (uVar22 <= (uint)puVar25[4]) goto LAB_713269c4;
          puVar18 = (undefined4 *)puVar25[1];
          if ((undefined4 *)puVar25[1] == (undefined4 *)0x0) {
            puVar23 = puVar25 + 1;
            goto LAB_71326954;
          }
        }
        puVar23 = puVar25;
        puVar18 = (undefined4 *)*puVar25;
      }
LAB_71326954:
      puVar16 = (undefined4 *)thunk_MwhHq(0x18);
      puVar16[4] = uVar22;
      puVar16[5] = 0;
      *puVar16 = 0;
      puVar16[1] = 0;
      puVar16[2] = puVar25;
      *puVar23 = puVar16;
      puVar18 = puVar16;
      if (*(int *)*piVar15 != 0) {
        *piVar15 = *(int *)*piVar15;
        puVar18 = (undefined4 *)*puVar23;
      }
      FUN_712f807c(*(undefined4 *)(&DAT_70b33dd8 + iVar1),puVar18);
      *(int *)(&DAT_70b33ddc + iVar1) = *(int *)(&DAT_70b33ddc + iVar1) + 1;
      puVar25 = puVar16;
LAB_713269c4:
      puVar25[5] = iVar9 + uVar27 * 0x14;
      uVar22 = iVar10 + uVar22;
      uVar27 = uVar27 + 1;
      if (DAT_700b98c4 < uVar26) {
        DAT_700b98c4 = uVar26;
      }
    } while (uVar27 != uVar11);
  }
  return;
}


// =========================================================================
// Function: FUN_71326f90
// Entry: 0x71326f90 | Size: 404 bytes
// =========================================================================

bool FUN_71326f90(uint param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  bool bVar18;
  
  param_1 = param_1 >> 0x18;
  iVar17 = (&DAT_70b33dc0)[param_1 * 8];
  if (iVar17 == 0) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b98f8);
    if (*pcVar8 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b98e8);
      *(undefined1 *)((int)puVar10 + 0x1b) = 1;
      uVar7 = DAT_70073b94;
      uVar6 = DAT_70073b90;
      uVar5 = DAT_70073b8c;
      uVar4 = DAT_70073b88;
      uVar3 = DAT_70073b84;
      *puVar10 = DAT_70073b80;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      puVar10[5] = uVar7;
      *(undefined2 *)(puVar10 + 6) = DAT_70073b98;
      *(undefined1 *)((int)puVar10 + 0x1a) = DAT_70073b9a;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71327b8c,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b98f8);
      *puVar11 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b98e8);
    if (*(char *)(iVar9 + 0x1b) != '\0') {
      uVar13 = 0;
      uVar16 = 0;
      do {
        iVar14 = (uVar13 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar12 = (byte)(0x2557e107 >> iVar14) |
                 (byte)(0x13bfd92d << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar12 = (byte)(0x13bfd92d >> (uVar15 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar12;
        bVar18 = 0xfffffffe < uVar13;
        bVar1 = uVar16 == 0;
        bVar2 = (0x19 < uVar13) <= uVar16;
        uVar13 = uVar13 + 1;
        uVar16 = uVar16 + bVar18;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x1b) = 0;
    }
    FUN_7188543c(iVar9,param_2,param_1);
    uVar13 = DAT_700b98c4;
    FUN_713266b0(param_1,param_2);
    if (uVar13 < DAT_700b98c4) {
      if (DAT_70b35dc0 != 0) {
        imp_free(DAT_70b35dc0);
      }
      DAT_70b35dc0 = imp_malloc(DAT_700b98c4);
    }
  }
  return iVar17 == 0;
}


// =========================================================================
// Function: FUN_713273d8
// Entry: 0x713273d8 | Size: 80 bytes
// =========================================================================

bool FUN_713273d8(int param_1)

{
  int iVar1;
  
  param_1 = param_1 >> 0x18;
  iVar1 = (&DAT_70b33dc0)[param_1 * 8];
  if (iVar1 != 0) {
    (&DAT_70b33dc0)[param_1 * 8] = 0;
    FUN_719f4a70(iVar1);
    thunk_qNQrlu();
    (&DAT_70b2fdc0)[param_1 * 0x40] = 0;
  }
  return iVar1 != 0;
}


// =========================================================================
// Function: FUN_713274b8
// Entry: 0x713274b8 | Size: 336 bytes
// =========================================================================

undefined4 FUN_713274b8(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 extraout_r1;
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  DAT_70b35de4 = param_4 + param_3;
  puVar4 = (undefined4 *)(DAT_70b35dc8 + param_1 * 0x60);
  puVar4[0x17] = (int)&DAT_70b33dc0 + (param_3 >> 0x13 & 0xffffffe0);
  uVar3 = puVar4[0x11];
  bVar5 = uVar3 == 0;
  if (bVar5) {
    uVar3 = (uint)*(byte *)((int)puVar4 + 0x4e);
  }
  if (bVar5 && uVar3 == 0) {
    puVar1 = (undefined4 *)(DAT_70b41f54 + param_1 * 0x98);
    *puVar4 = *puVar1;
    puVar4[1] = puVar1[1];
    puVar4[2] = puVar1[2];
    puVar4[3] = puVar1[3];
    puVar4[4] = puVar1[4];
    puVar4[5] = puVar1[5];
    puVar4[6] = puVar1[6];
    puVar4[7] = puVar1[7];
    puVar4[8] = puVar1[8];
    puVar4[9] = puVar1[9];
    puVar4[10] = puVar1[10];
    puVar4[0xb] = puVar1[0xb];
    puVar4[0xc] = puVar1[0xc];
    puVar4[0xd] = puVar1[0xd];
    puVar4[0xe] = puVar1[0xe];
    uVar2 = puVar1[0xf];
    puVar4[0x14] = 0;
    puVar4[0xf] = uVar2;
    *(undefined1 *)((int)puVar4 + 0x4d) = 0;
    puVar4[0x10] = param_3 & 0xffffff;
    puVar4[0x11] = param_4;
    puVar4[0x12] = param_2;
    *(int *)(DAT_70b35dcc + DAT_70b35dd4 * 4) = param_1;
    FUN_71ba2da8(DAT_70b35dd4 + 1,DAT_70b35dd8);
    DAT_70b35dd4 = extraout_r1;
    imp_sem_post(DAT_70b35ddc);
    return 1;
  }
  return 0;
}


// =========================================================================
// Function: FUN_71327804
// Entry: 0x71327804 | Size: 108 bytes
// =========================================================================

undefined4 FUN_71327804(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_70b35dc8 + param_1 * 0x60;
  imp_pthread_mutex_lock(*(undefined4 *)(iVar1 + 0x58));
  if (*(int *)(iVar1 + 0x44) != 0) {
    *(undefined1 *)(iVar1 + 0x4d) = 1;
    imp_pthread_mutex_unlock(*(undefined4 *)(iVar1 + 0x58));
    imp_sem_wait(*(undefined4 *)(iVar1 + 0x54));
    *(undefined1 *)(iVar1 + 0x4e) = 0;
    return *(undefined4 *)(iVar1 + 0x50);
  }
  *(undefined1 *)(iVar1 + 0x4e) = 0;
  imp_pthread_mutex_unlock(*(undefined4 *)(iVar1 + 0x58));
  return *(undefined4 *)(iVar1 + 0x50);
}


// =========================================================================
// Function: FUN_71327a94
// Entry: 0x71327a94 | Size: 60 bytes
// =========================================================================

void FUN_71327a94(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  FUN_71327a94(param_1,*param_2);
  FUN_71327a94(param_1,param_2[1]);
  thunk_qNQrlu(param_2);
  return;
}


// =========================================================================
// Function: FUN_71327cdc
// Entry: 0x71327cdc | Size: 360 bytes
// =========================================================================

void FUN_71327cdc(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  byte bVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b35e08 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b35e08), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9958);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9948);
      *(undefined1 *)((int)puVar10 + 0x19) = 1;
      uVar7 = DAT_70073be4;
      uVar6 = DAT_70073be0;
      uVar5 = DAT_70073bdc;
      uVar4 = DAT_70073bd8;
      uVar3 = DAT_70073bd4;
      *puVar10 = DAT_70073bd0;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      puVar10[5] = uVar7;
      *(undefined1 *)(puVar10 + 6) = DAT_70073be8;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713383fc,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9958);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9948);
    if (*(char *)(iVar8 + 0x19) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar16 = (byte)(0x798dc5a3 >> iVar14) |
                 (byte)(-0x6acaa203 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar16 = (byte)(0x95355dfd >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar16;
        bVar17 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x17 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x19) = 0;
    }
    DAT_70b35e04 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b35e08);
  }
                    /* WARNING: Could not recover jumptable at 0x71327d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b35e04)();
  return;
}


// =========================================================================
// Function: FUN_713280dc
// Entry: 0x713280dc | Size: 380 bytes
// =========================================================================

void FUN_713280dc(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b35e10 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b35e10), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9978);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9968);
      *(undefined1 *)(puVar11 + 0xb) = 1;
      uVar6 = DAT_70073c00;
      uVar5 = DAT_70073bfc;
      uVar4 = DAT_70073bf8;
      uVar3 = DAT_70073bf4;
      *puVar11 = DAT_70073bf0;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      uVar7 = DAT_70073c18;
      uVar6 = DAT_70073c14;
      uVar5 = DAT_70073c10;
      uVar4 = DAT_70073c0c;
      uVar3 = DAT_70073c08;
      puVar11[5] = DAT_70073c04;
      puVar11[6] = uVar3;
      puVar11[7] = uVar4;
      puVar11[8] = uVar5;
      puVar11[9] = uVar6;
      puVar11[10] = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71338438,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9978);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9968);
    if (*(char *)(iVar9 + 0x2c) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x73fb0941 >> iVar15) |
                (byte)(0x297b45a7 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0x297b45a7 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x2a < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x2c) = 0;
    }
    DAT_70b35e0c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b35e10);
  }
                    /* WARNING: Could not recover jumptable at 0x71328108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b35e0c)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713284f0
// Entry: 0x713284f0 | Size: 8632 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_713284f0(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  char *pcVar15;
  byte *pbVar16;
  char *pcVar17;
  char *pcVar18;
  byte *pbVar19;
  char *pcVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  byte *pbVar25;
  byte *pbVar26;
  byte *pbVar27;
  byte *pbVar28;
  byte *pbVar29;
  byte *pbVar30;
  byte *pbVar31;
  char *pcVar32;
  int iVar33;
  uint uVar34;
  uint uVar35;
  undefined2 *puVar36;
  undefined4 *puVar37;
  undefined1 *puVar38;
  char *pcVar39;
  char *pcVar40;
  byte bVar41;
  undefined4 uVar42;
  int *piVar43;
  undefined4 uVar44;
  uint uVar45;
  undefined4 *puVar46;
  byte bVar47;
  int iVar48;
  int iVar49;
  uint *puVar50;
  uint uStack_190;
  uint uStack_18c;
  char *pcStack_188;
  undefined *puStack_184;
  undefined4 uStack_180;
  uint uStack_17c;
  char *pcStack_178;
  undefined1 *puStack_174;
  undefined4 uStack_170;
  uint uStack_16c;
  char *pcStack_168;
  code *pcStack_164;
  undefined4 uStack_160;
  uint uStack_15c;
  char *pcStack_158;
  code *pcStack_154;
  undefined4 uStack_150;
  uint uStack_14c;
  char *pcStack_148;
  code *pcStack_144;
  uint uStack_140;
  uint uStack_13c;
  undefined4 uStack_138;
  undefined1 auStack_130 [260];
  int iStack_2c;
  
  puVar37 = DAT_70b2fd50;
  piVar43 = DAT_70b2fd4c;
  iStack_2c = _ext___stack_chk_guard;
  if ((DAT_70b35de9 != '\0') && (piVar6 = (int *)*DAT_70b2fd4c, 1 < piVar6[2])) {
    iVar48 = 1;
    iVar49 = 0x2c;
    do {
      if (-1 < *(char *)(piVar6[1] + iVar48)) {
        puVar46 = (undefined4 *)(*piVar6 + iVar49);
        uVar7 = FUN_71ba0b38(*puVar46,0x42f00000);
        *puVar46 = uVar7;
        uVar42 = puVar46[1];
        uVar44 = puVar46[3];
        uVar7 = FUN_71ba0b38(puVar46[2],0xc2f00000);
        puVar46[2] = uVar7;
        uVar7 = FUN_71ba0b38(uVar44,0x42f00000);
        puVar46[3] = uVar7;
        uVar7 = FUN_71ba0b38(uVar42,0xc2f00000);
        puVar46[1] = uVar7;
        FUN_7132d120(*puVar37,puVar46);
        piVar6 = (int *)*piVar43;
      }
      iVar48 = iVar48 + 1;
      iVar49 = iVar49 + 0x2c;
    } while (iVar48 < piVar6[2]);
  }
  uStack_138 = 0;
  uStack_13c = 0;
  uStack_140 = 0;
  pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9998);
  if (*pcVar8 == '\0') {
    puVar37 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9988);
    *puVar37 = 0xd0afbe71;
    *(undefined1 *)((int)puVar37 + 6) = 1;
    *(undefined2 *)(puVar37 + 1) = 0xaba5;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71338488,puVar37,&DAT_70b0e000);
    puVar38 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9998);
    *puVar38 = 1;
  }
  pbVar9 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9988);
  if (pbVar9[6] != 0) {
    pbVar9[6] = 0;
    *pbVar9 = *pbVar9 ^ 0x1d;
    pbVar9[1] = pbVar9[1] ^ 0xdb;
    pbVar9[2] = pbVar9[2] ^ 0xd9;
    pbVar9[3] = pbVar9[3] ^ 0xb5;
    pbVar9[4] = pbVar9[4] ^ 0xc9;
    pbVar9[5] = pbVar9[5] ^ 0xab;
  }
  FUN_717316bc(pbVar9,0);
  pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b99b8);
  if (*pcVar8 == '\0') {
    puVar36 = (undefined2 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b99a8);
    *puVar36 = 0xa905;
    *(undefined1 *)(puVar36 + 1) = 1;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_713384b0,puVar36,&DAT_70b0e000);
    puVar38 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b99b8);
    *puVar38 = 1;
  }
  pbVar9 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b99a8);
  if (pbVar9[2] != 0) {
    pbVar9[2] = 0;
    *pbVar9 = *pbVar9 ^ 0x77;
    pbVar9[1] = pbVar9[1] ^ 0xa9;
  }
  uVar7 = FUN_71339d5c(param_1);
  iVar48 = FUN_7132d218();
  if (iVar48 == 0) {
    FUN_7133a194(uVar7);
  }
  else {
    pbVar9 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b99c8);
    pbVar10 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b99e8);
    pbVar11 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9a08);
    pbVar12 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9a28);
    pbVar13 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9ba8);
    pcVar8 = (char *)((uint)&uStack_190 | 1);
    pbVar14 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9bc8);
    pcVar15 = (char *)((int)&uStack_150 + 1);
    pbVar16 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9be8);
    pcVar17 = (char *)((int)&uStack_160 + 1);
    pcVar18 = (char *)((int)&uStack_170 + 1);
    pbVar19 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9c08);
    pcVar20 = (char *)((int)&uStack_180 + 1);
    pbVar21 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9c28);
    pbVar22 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9a48);
    pbVar23 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9b68);
    pbVar24 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9a68);
    pbVar25 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9a88);
    pbVar26 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9aa8);
    iVar49 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9ac8);
    pbVar27 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9ae8);
    pbVar28 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9b08);
    pbVar29 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9b28);
    pbVar30 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9b48);
    puVar37 = DAT_70c39074;
    pbVar31 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9b88);
    bVar1 = false;
    do {
      imp___aeabi_memclr8(auStack_130,0x104);
      pcVar32 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b99d8);
      if (*pcVar32 == '\0') {
        puVar36 = (undefined2 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b99c8);
        *puVar36 = 0x4908;
        *(undefined1 *)(puVar36 + 1) = 1;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_713384d4,puVar36,&DAT_70b0e000);
        puVar38 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b99d8);
        *puVar38 = 1;
      }
      if (pbVar9[2] != 0) {
        *pbVar9 = *pbVar9 ^ 0x2b;
        pbVar9[2] = 0;
        pbVar9[1] = pbVar9[1] ^ 0x49;
      }
      uVar42 = imp_strlen(pbVar9);
      iVar33 = imp_strncmp(pbVar9,iVar48,uVar42);
      if (iVar33 != 0) {
        pcVar32 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b99f8);
        if (*pcVar32 == '\0') {
          puVar46 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b99e8);
          *puVar46 = 0x9d28afec;
          *(undefined2 *)(puVar46 + 1) = 0x191;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_713384f8,puVar46,&DAT_70b0e000);
          puVar38 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b99f8);
          *puVar38 = 1;
        }
        if (pbVar10[5] != 0) {
          *pbVar10 = *pbVar10 ^ 0xa9;
          pbVar10[1] = pbVar10[1] ^ 0xf7;
          pbVar10[2] = pbVar10[2] ^ 0x61;
          pbVar10[3] = pbVar10[3] ^ 0xc9;
          pbVar10[5] = 0;
          pbVar10[4] = pbVar10[4] ^ 0x91;
        }
        uVar42 = imp_strlen(pbVar10);
        iVar33 = imp_strncmp(pbVar10,iVar48,uVar42);
        if (iVar33 == 0) break;
        pcVar32 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9a18);
        if (*pcVar32 == '\0') {
          puVar46 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9a08);
          *(undefined1 *)((int)puVar46 + 0xb) = 1;
          *puVar46 = 0x9baf02c3;
          puVar46[1] = 0xa883fcda;
          *(undefined4 *)((int)puVar46 + 7) = 0xf709d8a8;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_71338520,puVar46,&DAT_70b0e000);
          puVar38 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9a18);
          *puVar38 = 1;
        }
        if (pbVar11[0xb] != 0) {
          *pbVar11 = *pbVar11 ^ 0x97;
          pbVar11[1] = pbVar11[1] ^ 0x47;
          pbVar11[2] = pbVar11[2] ^ 0xf7;
          pbVar11[3] = pbVar11[3] ^ 0xdf;
          pbVar11[0xb] = 0;
          pbVar11[4] = pbVar11[4] ^ 0x93;
          pbVar11[5] = pbVar11[5] ^ 0xbf;
          pbVar11[6] = pbVar11[6] ^ 0xd7;
          pbVar11[7] = pbVar11[7] ^ 0xe1;
          pbVar11[8] = pbVar11[8] ^ 0x97;
          pbVar11[9] = pbVar11[9] ^ 0x47;
          pbVar11[10] = pbVar11[10] ^ 0xf7;
        }
        uVar42 = imp_strlen(pbVar11);
        iVar33 = imp_strncmp(pbVar11,iVar48,uVar42);
        if (iVar33 != 0) {
          pcVar32 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9a38);
          if (*pcVar32 == '\0') {
            puVar46 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9a28);
            *puVar46 = 0x8ff3c762;
            *(undefined1 *)(puVar46 + 1) = 1;
            thunk_GFDIUClbc_QcPNgD_wH(&LAB_7133854c,puVar46,&DAT_70b0e000);
            puVar38 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9a38);
            *puVar38 = 1;
          }
          if (pbVar12[4] != 0) {
            *pbVar12 = *pbVar12 ^ 0x2b;
            pbVar12[1] = pbVar12[1] ^ 0x97;
            pbVar12[2] = pbVar12[2] ^ 0xbf;
            pbVar12[4] = 0;
            pbVar12[3] = pbVar12[3] ^ 0x8f;
          }
          uVar42 = imp_strlen(pbVar12);
          iVar33 = imp_strncmp(pbVar12,iVar48,uVar42);
          if (iVar33 == 0) {
            pcVar32 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9a58);
            if (*pcVar32 == '\0') {
              puVar46 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9a48);
              *puVar46 = 0x75bf41a4;
              *(undefined1 *)(puVar46 + 1) = 1;
              thunk_GFDIUClbc_QcPNgD_wH(&LAB_71338570,puVar46,&DAT_70b0e000);
              puVar38 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9a58);
              *puVar38 = 1;
            }
            if (pbVar22[4] != 0) {
              pbVar22[4] = 0;
              pbVar22[1] = pbVar22[1] ^ 0x11;
              pbVar22[2] = pbVar22[2] ^ 0xf3;
              *pbVar22 = *pbVar22 ^ 0xed;
              pbVar22[3] = pbVar22[3] ^ 0x75;
            }
            iVar33 = imp_strlen();
            imp___strcpy_chk(auStack_130,iVar48 + iVar33 + 1,0x104);
            if (!bVar1) {
              if (DAT_70b35de9 == '\0') {
                pcVar32 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9a78);
                if (*pcVar32 == '\0') {
                  puVar46 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9a68);
                  *(undefined1 *)(puVar46 + 3) = 1;
                  *puVar46 = 0xee2b8bfc;
                  puVar46[1] = 0x2378bd10;
                  puVar46[2] = 0x8b209df2;
                  thunk_GFDIUClbc_QcPNgD_wH(&LAB_71338594,puVar46,&DAT_70b0e000);
                  puVar38 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9a78);
                  *puVar38 = 1;
                }
                if (pbVar24[0xc] != 0) {
                  *pbVar24 = *pbVar24 ^ 0x93;
                  pbVar24[1] = pbVar24[1] ^ 0xe9;
                  pbVar24[2] = pbVar24[2] ^ 0x41;
                  pbVar24[3] = pbVar24[3] ^ 0x8b;
                  pbVar24[0xc] = 0;
                  pbVar24[4] = pbVar24[4] ^ 0x73;
                  pbVar24[5] = pbVar24[5] ^ 0xc9;
                  pbVar24[6] = pbVar24[6] ^ 0x27;
                  pbVar24[7] = pbVar24[7] ^ 0x47;
                  pbVar24[8] = pbVar24[8] ^ 0x93;
                  pbVar24[9] = pbVar24[9] ^ 0xe9;
                  pbVar24[10] = pbVar24[10] ^ 0x41;
                  pbVar24[0xb] = pbVar24[0xb] ^ 0x8b;
                }
                FUN_717316bc(pbVar24,0);
                FUN_71327cdc();
                pcVar32 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9a98);
                if (*pcVar32 == '\0') {
                  puVar46 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9a88);
                  *(undefined1 *)(puVar46 + 3) = 1;
                  *puVar46 = 0x2027e11e;
                  puVar46[1] = 0x1bcbf54a;
                  puVar46[2] = 0x452cf730;
                  thunk_GFDIUClbc_QcPNgD_wH(&LAB_713385c0,puVar46,&DAT_70b0e000);
                  puVar38 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9a98);
                  *puVar38 = 1;
                }
                if (pbVar25[0xc] != 0) {
                  *pbVar25 = *pbVar25 ^ 0x51;
                  pbVar25[1] = pbVar25[1] ^ 0x83;
                  pbVar25[2] = pbVar25[2] ^ 0x4d;
                  pbVar25[3] = pbVar25[3] ^ 0x45;
                  pbVar25[0xc] = 0;
                  pbVar25[4] = pbVar25[4] ^ 0x29;
                  pbVar25[5] = pbVar25[5] ^ 0x81;
                  pbVar25[6] = pbVar25[6] ^ 0xeb;
                  pbVar25[7] = pbVar25[7] ^ 0x5f;
                  pbVar25[8] = pbVar25[8] ^ 0x51;
                  pbVar25[9] = pbVar25[9] ^ 0x83;
                  pbVar25[10] = pbVar25[10] ^ 0x4d;
                  pbVar25[0xb] = pbVar25[0xb] ^ 0x45;
                }
                FUN_713280dc(pbVar25);
                pcVar32 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9ab8);
                if (*pcVar32 == '\0') {
                  puVar46 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9aa8);
                  *(undefined1 *)(puVar46 + 4) = 1;
                  *puVar46 = 0x9ca1aa57;
                  puVar46[1] = 0xcd93e8d1;
                  puVar46[2] = 0xf3a1a856;
                  puVar46[3] = 0x8785e6c9;
                  thunk_GFDIUClbc_QcPNgD_wH(&LAB_713385ec,puVar46,&DAT_70b0e000);
                  puVar38 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9ab8);
                  *puVar38 = 1;
                }
                if (pbVar26[0x10] != 0) {
                  *pbVar26 = *pbVar26 ^ 0x13;
                  pbVar26[1] = pbVar26[1] ^ 0xeb;
                  pbVar26[2] = pbVar26[2] ^ 0xf5;
                  pbVar26[3] = pbVar26[3] ^ 0xdd;
                  pbVar26[0x10] = 0;
                  pbVar26[4] = pbVar26[4] ^ 0x8d;
                  pbVar26[5] = pbVar26[5] ^ 0xa7;
                  pbVar26[6] = pbVar26[6] ^ 0xd1;
                  pbVar26[7] = pbVar26[7] ^ 0x87;
                  pbVar26[8] = pbVar26[8] ^ 0x13;
                  pbVar26[9] = pbVar26[9] ^ 0xeb;
                  pbVar26[10] = pbVar26[10] ^ 0xf5;
                  pbVar26[0xb] = pbVar26[0xb] ^ 0xdd;
                  pbVar26[0xc] = pbVar26[0xc] ^ 0x8d;
                  pbVar26[0xd] = pbVar26[0xd] ^ 0xa7;
                  pbVar26[0xe] = pbVar26[0xe] ^ 0xd1;
                  pbVar26[0xf] = pbVar26[0xf] ^ 0x87;
                }
                FUN_713d48b0(pbVar26,0);
                pcVar32 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9ad8);
                if (*pcVar32 == '\0') {
                  puVar46 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9ac8);
                  *(undefined1 *)(puVar46 + 6) = 1;
                  uVar5 = DAT_70073c34;
                  uVar4 = DAT_70073c30;
                  uVar3 = DAT_70073c2c;
                  uVar44 = DAT_70073c28;
                  uVar42 = DAT_70073c24;
                  *puVar46 = DAT_70073c20;
                  puVar46[1] = uVar42;
                  puVar46[2] = uVar44;
                  puVar46[3] = uVar3;
                  puVar46[4] = uVar4;
                  puVar46[5] = uVar5;
                  thunk_GFDIUClbc_QcPNgD_wH(&LAB_7133861c,puVar46,&DAT_70b0e000);
                  puVar38 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9ad8);
                  *puVar38 = 1;
                }
                if (*(char *)(iVar49 + 0x18) != '\0') {
                  uVar34 = 0;
                  uVar45 = 0;
                  do {
                    iVar48 = (uVar45 & 7) * 8;
                    uVar35 = iVar48 - 0x20;
                    bVar41 = (byte)(0x533949bf >> iVar48) |
                             (byte)(0x11c707c3 << ((uVar45 & 7) * -8 + 0x20 & 0xff));
                    if (-1 < (int)uVar35) {
                      bVar41 = (byte)(0x11c707c3 >> (uVar35 & 0xff));
                    }
                    *(byte *)(iVar49 + uVar45) = *(byte *)(iVar49 + uVar45) ^ bVar41;
                    bVar1 = uVar34 == 0;
                    bVar2 = (0x16 < uVar45) <= uVar34;
                    uVar34 = uVar34 + (0xfffffffe < uVar45);
                    uVar45 = uVar45 + 1;
                  } while (bVar1 && bVar2);
                  *(undefined1 *)(iVar49 + 0x18) = 0;
                }
                FUN_713280dc();
                FUN_714087bc();
                pcVar32 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9af8);
                if (*pcVar32 == '\0') {
                  puVar46 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9ae8);
                  *(undefined1 *)((int)puVar46 + 0xf) = 1;
                  *puVar46 = 0x8a9f5566;
                  puVar46[1] = 0x1bf834f8;
                  puVar46[2] = 0x81a40152;
                  *(undefined4 *)((int)puVar46 + 0xb) = 0x912df081;
                  thunk_GFDIUClbc_QcPNgD_wH(&LAB_71338654,puVar46,&DAT_70b0e000);
                  puVar38 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9af8);
                  *puVar38 = 1;
                }
                if (pbVar27[0xf] != 0) {
                  *pbVar27 = *pbVar27 ^ 0x35;
                  pbVar27[1] = pbVar27[1] ^ 0x21;
                  pbVar27[2] = pbVar27[2] ^ 0xed;
                  pbVar27[3] = pbVar27[3] ^ 0xef;
                  pbVar27[0xf] = 0;
                  pbVar27[4] = pbVar27[4] ^ 0x99;
                  pbVar27[5] = pbVar27[5] ^ 0x59;
                  pbVar27[6] = pbVar27[6] ^ 0x91;
                  pbVar27[7] = pbVar27[7] ^ 0x75;
                  pbVar27[8] = pbVar27[8] ^ 0x35;
                  pbVar27[9] = pbVar27[9] ^ 0x21;
                  pbVar27[10] = pbVar27[10] ^ 0xed;
                  pbVar27[0xb] = pbVar27[0xb] ^ 0xef;
                  pbVar27[0xc] = pbVar27[0xc] ^ 0x99;
                  pbVar27[0xd] = pbVar27[0xd] ^ 0x59;
                  pbVar27[0xe] = pbVar27[0xe] ^ 0x91;
                }
                FUN_713280dc(pbVar27);
                pcVar32 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9b18);
                if (*pcVar32 == '\0') {
                  puVar46 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9b08);
                  *(undefined1 *)((int)puVar46 + 0xf) = 1;
                  *puVar46 = 0xe2533968;
                  puVar46[1] = 0xfceb094;
                  puVar46[2] = 0xe948127c;
                  *(undefined4 *)((int)puVar46 + 0xb) = 0xa7a99ce9;
                  thunk_GFDIUClbc_QcPNgD_wH(&LAB_71338684,puVar46,&DAT_70b0e000);
                  puVar38 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9b18);
                  *puVar38 = 1;
                }
                if (pbVar28[0xf] != 0) {
                  *pbVar28 = *pbVar28 ^ 0x1b;
                  pbVar28[1] = pbVar28[1] ^ 0x4d;
                  pbVar28[2] = pbVar28[2] ^ 0x21;
                  pbVar28[3] = pbVar28[3] ^ 0x87;
                  pbVar28[0xf] = 0;
                  pbVar28[4] = pbVar28[4] ^ 0xf5;
                  pbVar28[5] = pbVar28[5] ^ 0xdd;
                  pbVar28[6] = pbVar28[6] ^ 0xa7;
                  pbVar28[7] = pbVar28[7] ^ 0x61;
                  pbVar28[8] = pbVar28[8] ^ 0x1b;
                  pbVar28[9] = pbVar28[9] ^ 0x4d;
                  pbVar28[10] = pbVar28[10] ^ 0x21;
                  pbVar28[0xb] = pbVar28[0xb] ^ 0x87;
                  pbVar28[0xc] = pbVar28[0xc] ^ 0xf5;
                  pbVar28[0xd] = pbVar28[0xd] ^ 0xdd;
                  pbVar28[0xe] = pbVar28[0xe] ^ 0xa7;
                }
                FUN_717316bc(pbVar28,0);
                FUN_71361c28();
                FUN_713d3bb4();
                pcVar32 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9b38);
                if (*pcVar32 == '\0') {
                  puVar46 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9b28);
                  *(undefined1 *)((int)puVar46 + 10) = 1;
                  *puVar46 = 0xe9f56412;
                  puVar46[1] = 0x849c7870;
                  *(undefined2 *)(puVar46 + 2) = 0xb3f;
                  thunk_GFDIUClbc_QcPNgD_wH(&LAB_713386b4,puVar46,&DAT_70b0e000);
                  puVar38 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9b38);
                  *puVar38 = 1;
                }
                if (pbVar29[10] != 0) {
                  *pbVar29 = *pbVar29 ^ 0x51;
                  pbVar29[1] = pbVar29[1] ^ 0xb;
                  pbVar29[2] = pbVar29[2] ^ 0x99;
                  pbVar29[3] = pbVar29[3] ^ 0x85;
                  pbVar29[10] = 0;
                  pbVar29[4] = pbVar29[4] ^ 0x19;
                  pbVar29[5] = pbVar29[5] ^ 0xb;
                  pbVar29[6] = pbVar29[6] ^ 0xf5;
                  pbVar29[7] = pbVar29[7] ^ 0xeb;
                  pbVar29[8] = pbVar29[8] ^ 0x51;
                  pbVar29[9] = pbVar29[9] ^ 0xb;
                }
                FUN_713280dc(pbVar29);
                pcVar32 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9b58);
                if (*pcVar32 == '\0') {
                  puVar46 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9b48);
                  *(undefined1 *)((int)puVar46 + 0xf) = 1;
                  *puVar46 = 0x6b46e4f7;
                  puVar46[1] = 0x9ecb0a17;
                  puVar46[2] = 0x7d5ce9ca;
                  *(undefined4 *)((int)puVar46 + 0xb) = 0xa510167d;
                  thunk_GFDIUClbc_QcPNgD_wH(&LAB_713386e0,puVar46,&DAT_70b0e000);
                  puVar38 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9b58);
                  *puVar38 = 1;
                }
                if (pbVar30[0xf] != 0) {
                  *pbVar30 = *pbVar30 ^ 0x95;
                  pbVar30[1] = pbVar30[1] ^ 0x8b;
                  pbVar30[2] = pbVar30[2] ^ 0x33;
                  pbVar30[3] = pbVar30[3] ^ 5;
                  pbVar30[0xf] = 0;
                  pbVar30[4] = pbVar30[4] ^ 0x73;
                  pbVar30[5] = pbVar30[5] ^ 99;
                  pbVar30[6] = pbVar30[6] ^ 0xa5;
                  pbVar30[7] = pbVar30[7] ^ 0xf9;
                  pbVar30[8] = pbVar30[8] ^ 0x95;
                  pbVar30[9] = pbVar30[9] ^ 0x8b;
                  pbVar30[10] = pbVar30[10] ^ 0x33;
                  pbVar30[0xb] = pbVar30[0xb] ^ 5;
                  pbVar30[0xc] = pbVar30[0xc] ^ 0x73;
                  pbVar30[0xd] = pbVar30[0xd] ^ 99;
                  pbVar30[0xe] = pbVar30[0xe] ^ 0xa5;
                }
                FUN_717316bc(pbVar30,0);
              }
              else {
                pcVar32 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9b78);
                if (*pcVar32 == '\0') {
                  puVar46 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9b68);
                  *(undefined1 *)(puVar46 + 4) = 1;
                  *puVar46 = 0x8479dcb9;
                  puVar46[1] = 0xb90bda85;
                  puVar46[2] = 0xeb79deb8;
                  puVar46[3] = 0xf31dd49d;
                  thunk_GFDIUClbc_QcPNgD_wH(&LAB_71338710,puVar46,&DAT_70b0e000);
                  puVar38 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9b78);
                  *puVar38 = 1;
                }
                if (pbVar23[0x10] != 0) {
                  *pbVar23 = *pbVar23 ^ 0xfd;
                  pbVar23[1] = pbVar23[1] ^ 0x9d;
                  pbVar23[2] = pbVar23[2] ^ 0x2d;
                  pbVar23[3] = pbVar23[3] ^ 0xc5;
                  pbVar23[0x10] = 0;
                  pbVar23[4] = pbVar23[4] ^ 0xd9;
                  pbVar23[5] = pbVar23[5] ^ 0x95;
                  pbVar23[6] = pbVar23[6] ^ 0x49;
                  pbVar23[7] = pbVar23[7] ^ 0xf3;
                  pbVar23[8] = pbVar23[8] ^ 0xfd;
                  pbVar23[9] = pbVar23[9] ^ 0x9d;
                  pbVar23[10] = pbVar23[10] ^ 0x2d;
                  pbVar23[0xb] = pbVar23[0xb] ^ 0xc5;
                  pbVar23[0xc] = pbVar23[0xc] ^ 0xd9;
                  pbVar23[0xd] = pbVar23[0xd] ^ 0x95;
                  pbVar23[0xe] = pbVar23[0xe] ^ 0x49;
                  pbVar23[0xf] = pbVar23[0xf] ^ 0xf3;
                }
                FUN_713d48b0(pbVar23,0);
                FUN_7135ec88();
                FUN_71407b78();
              }
              FUN_71320d00();
              iVar48 = 80000;
              puVar46 = puVar37;
              do {
                piVar43 = (int *)*puVar46;
                if (((piVar43 != (int *)0x0) &&
                    (uVar34 = (**(code **)(*piVar43 + 0x14))(piVar43), (uVar34 & 0xfffffffc) == 4))
                   && (0xb4 < (uint)piVar43[0xe])) {
                  (**(code **)(*piVar43 + 0x38))(piVar43);
                }
                puVar46 = puVar46 + 1;
                iVar48 = iVar48 + -4;
              } while (iVar48 != 0);
              pcVar32 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9b98);
              if (*pcVar32 == '\0') {
                puVar46 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9b88);
                *puVar46 = 0x27a57d6e;
                *(undefined1 *)(puVar46 + 1) = 1;
                thunk_GFDIUClbc_QcPNgD_wH(&LAB_71338740,puVar46,&DAT_70b0e000);
                puVar38 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9b98);
                *puVar38 = 1;
              }
              if (pbVar31[4] != 0) {
                pbVar31[4] = 0;
                pbVar31[1] = pbVar31[1] ^ 0xd;
                pbVar31[2] = pbVar31[2] ^ 0xc9;
                *pbVar31 = *pbVar31 ^ 7;
                pbVar31[3] = pbVar31[3] ^ 0x27;
              }
              FUN_717316bc(pbVar31,0);
            }
            FUN_713280dc(auStack_130);
            FUN_7132d634(auStack_130);
            bVar1 = true;
          }
          else {
            pcVar32 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9bb8);
            if (*pcVar32 == '\0') {
              puVar46 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9ba8);
              *puVar46 = 0x6f321098;
              *(undefined1 *)(puVar46 + 1) = 1;
              thunk_GFDIUClbc_QcPNgD_wH(&LAB_71338764,puVar46,&DAT_70b0e000);
              puVar38 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9bb8);
              *puVar38 = 1;
            }
            if (pbVar13[4] != 0) {
              *pbVar13 = *pbVar13 ^ 0xd1;
              pbVar13[1] = pbVar13[1] ^ 0x5d;
              pbVar13[2] = pbVar13[2] ^ 0x75;
              pbVar13[4] = 0;
              pbVar13[3] = pbVar13[3] ^ 0x6f;
            }
            uVar34 = imp_strlen(pbVar13);
            if (0xfffffff7 < uVar34) {
                    /* WARNING: Subroutine does not return */
              FUN_712f6c1c(&uStack_190);
            }
            if (uVar34 < 0xb) {
              uStack_190 = CONCAT31(uStack_190._1_3_,(char)(uVar34 << 1));
              pcVar32 = pcVar8;
              if (uVar34 != 0) goto LAB_71328dac;
            }
            else {
              pcVar32 = (char *)thunk_MwhHq((uVar34 | 7) + 1);
              uStack_190 = (uVar34 | 7) + 2;
              uStack_18c = uVar34;
              pcStack_188 = pcVar32;
LAB_71328dac:
              imp___aeabi_memmove(pcVar32,pbVar13,uVar34);
            }
            pcVar32[uVar34] = '\0';
            puStack_184 = &DAT_71338788;
            pcVar32 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9bd8);
            if (*pcVar32 == '\0') {
              puVar46 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9bc8);
              *puVar46 = 0x1973c84;
              puVar46[1] = 0x43127196;
              *(undefined1 *)(puVar46 + 2) = 1;
              thunk_GFDIUClbc_QcPNgD_wH(&LAB_713387a4,puVar46,&DAT_70b0e000);
              puVar38 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9bd8);
              *puVar38 = 1;
            }
            if (pbVar14[8] != 0) {
              *pbVar14 = *pbVar14 ^ 199;
              pbVar14[1] = pbVar14[1] ^ 0x73;
              pbVar14[2] = pbVar14[2] ^ 0xdb;
              pbVar14[3] = pbVar14[3] ^ 0x47;
              pbVar14[8] = 0;
              pbVar14[4] = pbVar14[4] ^ 0xdf;
              pbVar14[5] = pbVar14[5] ^ 0x3d;
              pbVar14[6] = pbVar14[6] ^ 0x57;
              pbVar14[7] = pbVar14[7] ^ 0x43;
            }
            uVar34 = imp_strlen(pbVar14);
            if (0xfffffff7 < uVar34) {
                    /* WARNING: Subroutine does not return */
              FUN_712f6c1c(&uStack_180);
            }
            if (uVar34 < 0xb) {
              uStack_180 = CONCAT31(uStack_180._1_3_,(char)(uVar34 << 1));
              pcVar32 = pcVar20;
              if (uVar34 != 0) goto LAB_71328eac;
            }
            else {
              pcVar32 = (char *)thunk_MwhHq((uVar34 | 7) + 1);
              uStack_180 = (uVar34 | 7) + 2;
              uStack_17c = uVar34;
              pcStack_178 = pcVar32;
LAB_71328eac:
              imp___aeabi_memmove(pcVar32,pbVar14,uVar34);
            }
            pcVar32[uVar34] = '\0';
            puStack_174 = &LAB_713387cc;
            pcVar32 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9bf8);
            if (*pcVar32 == '\0') {
              puVar46 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9be8);
              *(undefined1 *)((int)puVar46 + 10) = 1;
              *puVar46 = 0x5c9ba86c;
              puVar46[1] = 0x37b44375;
              *(undefined2 *)(puVar46 + 2) = 0xe764;
              thunk_GFDIUClbc_QcPNgD_wH(&LAB_7133880c,puVar46,&DAT_70b0e000);
              puVar38 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9bf8);
              *puVar38 = 1;
            }
            if (pbVar16[10] != 0) {
              *pbVar16 = *pbVar16 ^ 0x21;
              pbVar16[1] = pbVar16[1] ^ 0xe7;
              pbVar16[2] = pbVar16[2] ^ 0xdf;
              pbVar16[3] = pbVar16[3] ^ 0x19;
              pbVar16[10] = 0;
              pbVar16[4] = pbVar16[4] ^ 0x39;
              pbVar16[5] = pbVar16[5] ^ 5;
              pbVar16[6] = pbVar16[6] ^ 0xfd;
              pbVar16[7] = pbVar16[7] ^ 0x7b;
              pbVar16[8] = pbVar16[8] ^ 0x21;
              pbVar16[9] = pbVar16[9] ^ 0xe7;
            }
            uVar34 = imp_strlen(pbVar16);
            if (0xfffffff7 < uVar34) {
                    /* WARNING: Subroutine does not return */
              FUN_712f6c1c(&uStack_170);
            }
            if (uVar34 < 0xb) {
              uStack_170 = CONCAT31(uStack_170._1_3_,(char)(uVar34 << 1));
              pcVar32 = pcVar18;
              if (uVar34 != 0) goto LAB_71328fc4;
            }
            else {
              pcVar32 = (char *)thunk_MwhHq((uVar34 | 7) + 1);
              uStack_170 = (uVar34 | 7) + 2;
              uStack_16c = uVar34;
              pcStack_168 = pcVar32;
LAB_71328fc4:
              imp___aeabi_memmove(pcVar32,pbVar16,uVar34);
            }
            pcVar32[uVar34] = '\0';
            pcStack_164 = FUN_7132da48;
            pcVar32 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9c18);
            if (*pcVar32 == '\0') {
              puVar46 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9c08);
              *(undefined2 *)(puVar46 + 2) = 0x113;
              *puVar46 = 0x519ee05b;
              puVar46[1] = 0x3063482f;
              thunk_GFDIUClbc_QcPNgD_wH(&LAB_71338838,puVar46,&DAT_70b0e000);
              puVar38 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9c18);
              *puVar38 = 1;
            }
            if (pbVar19[9] != 0) {
              *pbVar19 = *pbVar19 ^ 0x13;
              pbVar19[1] = pbVar19[1] ^ 0xa9;
              pbVar19[2] = pbVar19[2] ^ 0xdb;
              pbVar19[3] = pbVar19[3] ^ 3;
              pbVar19[9] = 0;
              pbVar19[4] = pbVar19[4] ^ 0x69;
              pbVar19[5] = pbVar19[5] ^ 1;
              pbVar19[6] = pbVar19[6] ^ 0x2f;
              pbVar19[7] = pbVar19[7] ^ 0x75;
              pbVar19[8] = pbVar19[8] ^ 0x13;
            }
            uVar34 = imp_strlen(pbVar19);
            if (0xfffffff7 < uVar34) {
                    /* WARNING: Subroutine does not return */
              FUN_712f6c1c(&uStack_160);
            }
            if (uVar34 < 0xb) {
              uStack_160 = CONCAT31(uStack_160._1_3_,(char)(uVar34 << 1));
              pcVar32 = pcVar17;
              if (uVar34 != 0) goto LAB_713290d0;
            }
            else {
              pcVar32 = (char *)thunk_MwhHq((uVar34 | 7) + 1);
              uStack_160 = (uVar34 | 7) + 2;
              uStack_15c = uVar34;
              pcStack_158 = pcVar32;
LAB_713290d0:
              imp___aeabi_memmove(pcVar32,pbVar19,uVar34);
            }
            pcVar32[uVar34] = '\0';
            pcStack_154 = FUN_7132de6c;
            pcVar32 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9c38);
            if (*pcVar32 == '\0') {
              puVar46 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9c28);
              *puVar46 = 0xc1360f2a;
              *(undefined1 *)(puVar46 + 1) = 1;
              thunk_GFDIUClbc_QcPNgD_wH(&LAB_71338864,puVar46,&DAT_70b0e000);
              puVar38 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9c38);
              *puVar38 = 1;
            }
            if (pbVar21[4] != 0) {
              *pbVar21 = *pbVar21 ^ 99;
              pbVar21[1] = pbVar21[1] ^ 0x4b;
              pbVar21[2] = pbVar21[2] ^ 0x73;
              pbVar21[4] = 0;
              pbVar21[3] = pbVar21[3] ^ 0xc1;
            }
            uVar34 = imp_strlen(pbVar21);
            if (0xfffffff7 < uVar34) {
                    /* WARNING: Subroutine does not return */
              FUN_712f6c1c(&uStack_150);
            }
            if (uVar34 < 0xb) {
              uStack_150 = CONCAT31(uStack_150._1_3_,(char)(uVar34 << 1));
              pcVar32 = pcVar15;
              if (uVar34 != 0) goto LAB_713291a8;
            }
            else {
              pcVar32 = (char *)thunk_MwhHq((uVar34 | 7) + 1);
              uStack_150 = (uVar34 | 7) + 2;
              uStack_14c = uVar34;
              pcStack_148 = pcVar32;
LAB_713291a8:
              imp___aeabi_memmove(pcVar32,pbVar21,uVar34);
            }
            pcVar32[uVar34] = '\0';
            pcStack_144 = FUN_7132e288;
            pcVar32 = pcStack_188;
            if ((uStack_190 & 1) == 0) {
              pcVar32 = pcVar8;
            }
            uVar42 = imp_strlen(pcVar32);
            iVar33 = imp_strncmp(pcVar32,iVar48,uVar42);
            pcVar32 = pcVar8;
            puVar50 = &uStack_190;
            if (iVar33 == 0) {
LAB_713292f4:
              uVar45 = puVar50[1];
              bVar41 = (byte)*puVar50;
              bVar47 = bVar41 & 1;
              uVar34 = uVar45;
              if ((bVar41 & 1) == 0) {
                uVar34 = (uint)(bVar41 >> 1);
              }
              uVar35 = uStack_13c;
              if ((uStack_140 & 1) == 0) {
                uVar35 = (uint)((byte)uStack_140 >> 1);
              }
              if (uVar35 == uVar34) {
                uVar34 = (uint)(bVar41 >> 1);
                pcVar39 = (char *)puVar50[2];
                if ((bVar41 & 1) == 0) {
                  pcVar39 = pcVar32;
                }
                if ((uStack_140 & 1) == 0) {
                  if (1 < (byte)uStack_140) {
                    uVar35 = (uint)((byte)uStack_140 >> 1);
                    pcVar40 = (char *)((uint)&uStack_140 | 1);
                    do {
                      if (*pcVar40 != *pcVar39) goto LAB_7132937c;
                      pcVar39 = pcVar39 + 1;
                      uVar35 = uVar35 - 1;
                      pcVar40 = pcVar40 + 1;
                    } while (uVar35 != 0);
                  }
                }
                else {
                  iVar33 = imp_memcmp(uStack_138);
                  if (iVar33 != 0) goto LAB_7132937c;
                }
              }
              else {
LAB_7132937c:
                thunk_lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi
                          (&uStack_140,puVar50);
                pcVar39 = (char *)puVar50[2];
                if ((*puVar50 & 1) == 0) {
                  pcVar39 = pcVar32;
                }
                FUN_717316bc(pcVar39,0);
                uVar45 = puVar50[1];
                bVar47 = (byte)*puVar50 & 1;
                uVar34 = (uint)(byte)((byte)*puVar50 >> 1);
              }
              if (bVar47 != 0) {
                uVar34 = uVar45;
              }
              imp___strcpy_chk(auStack_130,iVar48 + uVar34 + 1,0x104);
              FUN_713280dc(auStack_130);
              (*(code *)puVar50[3])(auStack_130);
            }
            else {
              pcVar32 = pcStack_178;
              if ((uStack_180 & 1) == 0) {
                pcVar32 = pcVar20;
              }
              uVar42 = imp_strlen(pcVar32);
              iVar33 = imp_strncmp(pcVar32,iVar48,uVar42);
              pcVar32 = pcVar20;
              puVar50 = &uStack_180;
              if (iVar33 == 0) goto LAB_713292f4;
              pcVar32 = pcStack_168;
              if ((uStack_170 & 1) == 0) {
                pcVar32 = pcVar18;
              }
              uVar42 = imp_strlen(pcVar32);
              iVar33 = imp_strncmp(pcVar32,iVar48,uVar42);
              pcVar32 = pcVar18;
              puVar50 = &uStack_170;
              if (iVar33 == 0) goto LAB_713292f4;
              pcVar32 = pcStack_158;
              if ((uStack_160 & 1) == 0) {
                pcVar32 = pcVar17;
              }
              uVar42 = imp_strlen(pcVar32);
              iVar33 = imp_strncmp(pcVar32,iVar48,uVar42);
              pcVar32 = pcVar17;
              puVar50 = &uStack_160;
              if (iVar33 == 0) goto LAB_713292f4;
              pcVar32 = pcStack_148;
              if ((uStack_150 & 1) == 0) {
                pcVar32 = pcVar15;
              }
              uVar42 = imp_strlen(pcVar32);
              iVar33 = imp_strncmp(pcVar32,iVar48,uVar42);
              pcVar32 = pcVar15;
              puVar50 = &uStack_150;
              if (iVar33 == 0) goto LAB_713292f4;
            }
            if ((uStack_150 & 1) != 0) {
              thunk_qNQrlu(pcStack_148);
            }
            if ((uStack_160 & 1) != 0) {
              thunk_qNQrlu(pcStack_158);
            }
            if ((uStack_170 & 1) != 0) {
              thunk_qNQrlu(pcStack_168);
            }
            if ((uStack_180 & 1) != 0) {
              thunk_qNQrlu(pcStack_178);
            }
            if ((uStack_190 & 1) != 0) {
              thunk_qNQrlu(pcStack_188);
            }
          }
        }
      }
      iVar48 = FUN_7132d218(uVar7);
    } while (iVar48 != 0);
    FUN_7133a194(uVar7);
    if (bVar1) {
      pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9c58);
      if (*pcVar8 == '\0') {
        puVar37 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9c48);
        *puVar37 = 0x38a6de19;
        puVar37[1] = 0xa3202904;
        puVar37[2] = 0x29a2e40c;
        *(undefined1 *)((int)puVar37 + 0xf) = 1;
        *(undefined4 *)((int)puVar37 + 0xb) = 0x49340129;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71338888,puVar37,&DAT_70b0e000);
        puVar38 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9c58);
        *puVar38 = 1;
      }
      pbVar9 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9c48);
      if (pbVar9[0xf] != 0) {
        *pbVar9 = *pbVar9 ^ 0x6b;
        pbVar9[1] = pbVar9[1] ^ 0xbb;
        pbVar9[2] = pbVar9[2] ^ 0xcb;
        pbVar9[3] = pbVar9[3] ^ 0x59;
        pbVar9[0xf] = 0;
        pbVar9[4] = pbVar9[4] ^ 0x6d;
        pbVar9[5] = pbVar9[5] ^ 0x47;
        pbVar9[6] = pbVar9[6] ^ 0x49;
        pbVar9[7] = pbVar9[7] ^ 0xcd;
        pbVar9[8] = pbVar9[8] ^ 0x6b;
        pbVar9[9] = pbVar9[9] ^ 0xbb;
        pbVar9[10] = pbVar9[10] ^ 0xcb;
        pbVar9[0xb] = pbVar9[0xb] ^ 0x59;
        pbVar9[0xc] = pbVar9[0xc] ^ 0x6d;
        pbVar9[0xd] = pbVar9[0xd] ^ 0x47;
        pbVar9[0xe] = pbVar9[0xe] ^ 0x49;
      }
      FUN_717316bc(pbVar9,0);
      FUN_7133e704();
      FUN_713210fc();
      FUN_713214f8();
    }
  }
  pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9c78);
  if (*pcVar8 == '\0') {
    puVar37 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9c68);
    *puVar37 = 0x9a1526f9;
    puVar37[1] = 0x4e5394f9;
    *(undefined1 *)((int)puVar37 + 0xb) = 1;
    *(undefined4 *)((int)puVar37 + 7) = 0x6326fb4e;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_713388b8,puVar37,&DAT_70b0e000);
    puVar38 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9c78);
    *puVar38 = 1;
  }
  pbVar9 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9c68);
  if (pbVar9[0xb] != 0) {
    *pbVar9 = *pbVar9 ^ 0x95;
    pbVar9[1] = pbVar9[1] ^ 0x43;
    pbVar9[2] = pbVar9[2] ^ 99;
    pbVar9[3] = ~pbVar9[3];
    pbVar9[0xb] = 0;
    pbVar9[4] = pbVar9[4] ^ 0x95;
    pbVar9[5] = pbVar9[5] ^ 0xcb;
    pbVar9[6] = pbVar9[6] ^ 0x37;
    pbVar9[7] = pbVar9[7] ^ 0x21;
    pbVar9[8] = pbVar9[8] ^ 0x95;
    pbVar9[9] = pbVar9[9] ^ 0x43;
    pbVar9[10] = pbVar9[10] ^ 99;
  }
  FUN_717316bc(pbVar9,0);
  if ((uStack_140 & 1) != 0) {
    thunk_qNQrlu(uStack_138);
  }
  if (_ext___stack_chk_guard == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_7132d120
// Entry: 0x7132d120 | Size: 112 bytes
// =========================================================================

void FUN_7132d120(int param_1,undefined4 param_2)

{
  do {
    FUN_713570b0(param_1 + 0x10,param_2);
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_7132d120(*(int *)(param_1 + 0x14),param_2);
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_7132d120(*(int *)(param_1 + 0x18),param_2);
    }
    if (*(int *)(param_1 + 0x1c) != 0) {
      FUN_7132d120(*(int *)(param_1 + 0x1c),param_2);
    }
    param_1 = *(int *)(param_1 + 0x20);
  } while (param_1 != 0);
  return;
}


// =========================================================================
// Function: FUN_7132d218
// Entry: 0x7132d218 | Size: 388 bytes
// =========================================================================

void FUN_7132d218(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b35e18 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b35e18), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9c98);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9c88);
      *(undefined1 *)((int)puVar10 + 0x29) = 1;
      uVar6 = DAT_70073c48;
      uVar5 = DAT_70073c44;
      uVar4 = DAT_70073c40;
      uVar3 = DAT_70073c3c;
      *puVar10 = DAT_70073c38;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_70073c5c;
      uVar5 = DAT_70073c58;
      uVar4 = DAT_70073c54;
      uVar3 = DAT_70073c50;
      puVar10[5] = DAT_70073c4c;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      *(undefined1 *)(puVar10 + 10) = DAT_70073c60;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713388e4,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9c98);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9c88);
    if (*(char *)(iVar8 + 0x29) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xb3472d09 >> iVar14) |
                (byte)(0x37e3419f << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x37e3419f >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x27 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x29) = 0;
    }
    DAT_70b35e14 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b35e18);
  }
                    /* WARNING: Could not recover jumptable at 0x7132d244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b35e14)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7132d634
// Entry: 0x7132d634 | Size: 380 bytes
// =========================================================================

void FUN_7132d634(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b35e20 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b35e20), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9cb8);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9ca8);
      *(undefined1 *)(puVar11 + 0xc) = 1;
      uVar7 = DAT_70073c7c;
      uVar6 = DAT_70073c78;
      uVar5 = DAT_70073c74;
      uVar4 = DAT_70073c70;
      uVar3 = DAT_70073c6c;
      *puVar11 = DAT_70073c68;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      puVar11[5] = uVar7;
      uVar7 = DAT_70073c94;
      uVar6 = DAT_70073c90;
      uVar5 = DAT_70073c8c;
      uVar4 = DAT_70073c88;
      uVar3 = DAT_70073c84;
      puVar11[6] = DAT_70073c80;
      puVar11[7] = uVar3;
      puVar11[8] = uVar4;
      puVar11[9] = uVar5;
      puVar11[10] = uVar6;
      puVar11[0xb] = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71338934,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9cb8);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9ca8);
    if (*(char *)(iVar9 + 0x30) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0xdd1fbb69 >> iVar15) |
                (byte)(-0x48dca809 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0xb72357f7 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x2e < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x30) = 0;
    }
    DAT_70b35e1c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b35e20);
  }
                    /* WARNING: Could not recover jumptable at 0x7132d660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b35e1c)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7132da48
// Entry: 0x7132da48 | Size: 396 bytes
// =========================================================================

void FUN_7132da48(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b35e30 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b35e30), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9cf8);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9ce8);
      *(undefined1 *)((int)puVar10 + 0x35) = 1;
      uVar5 = DAT_70073cec;
      uVar4 = DAT_70073ce8;
      uVar3 = DAT_70073ce4;
      *puVar10 = DAT_70073ce0;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar5 = DAT_70073cfc;
      uVar4 = DAT_70073cf8;
      uVar3 = DAT_70073cf4;
      puVar10[4] = DAT_70073cf0;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      uVar6 = DAT_70073d10;
      uVar5 = DAT_70073d0c;
      uVar4 = DAT_70073d08;
      uVar3 = DAT_70073d04;
      puVar10[8] = DAT_70073d00;
      puVar10[9] = uVar3;
      puVar10[10] = uVar4;
      puVar10[0xb] = uVar5;
      puVar10[0xc] = uVar6;
      *(undefined1 *)(puVar10 + 0xd) = DAT_70073d14;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713389d4,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9cf8);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9ce8);
    if (*(char *)(iVar8 + 0x35) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xd3d333d >> iVar14) | (byte)(0x1f3b16f << ((uVar12 & 7) * -8 + 0x20 & 0xff))
        ;
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x1f3b16f >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x33 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x35) = 0;
    }
    DAT_70b35e2c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b35e30);
  }
                    /* WARNING: Could not recover jumptable at 0x7132da74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b35e2c)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7132de6c
// Entry: 0x7132de6c | Size: 388 bytes
// =========================================================================

void FUN_7132de6c(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b35e38 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b35e38), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9d18);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9d08);
      *(undefined1 *)(puVar10 + 0xd) = 1;
      uVar5 = DAT_70073d24;
      uVar4 = DAT_70073d20;
      uVar3 = DAT_70073d1c;
      *puVar10 = DAT_70073d18;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar5 = DAT_70073d34;
      uVar4 = DAT_70073d30;
      uVar3 = DAT_70073d2c;
      puVar10[4] = DAT_70073d28;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      uVar6 = DAT_70073d48;
      uVar5 = DAT_70073d44;
      uVar4 = DAT_70073d40;
      uVar3 = DAT_70073d3c;
      puVar10[8] = DAT_70073d38;
      puVar10[9] = uVar3;
      puVar10[10] = uVar4;
      puVar10[0xb] = uVar5;
      puVar10[0xc] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71338a24,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9d18);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9d08);
    if (*(char *)(iVar8 + 0x34) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xedf3c931 >> iVar14) |
                (byte)(0x579735ab << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x579735ab >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x32 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x34) = 0;
    }
    DAT_70b35e34 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b35e38);
  }
                    /* WARNING: Could not recover jumptable at 0x7132de98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b35e34)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7132e288
// Entry: 0x7132e288 | Size: 704 bytes
// =========================================================================

void FUN_7132e288(undefined4 param_1)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  bool bVar8;
  
  pcVar2 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba2f8);
  if (*pcVar2 == '\0') {
    puVar5 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba2e8);
    *puVar5 = 0x1d5c7ef;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71339390,puVar5,&DAT_70b0e000);
    puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba2f8);
    *puVar6 = 1;
  }
  pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba2e8);
  if (pbVar3[3] != 0) {
    pbVar3[3] = 0;
    *pbVar3 = *pbVar3 ^ 0x9d;
    pbVar3[1] = pbVar3[1] ^ 0xa5;
    pbVar3[2] = pbVar3[2] ^ 0xd5;
  }
  uVar4 = FUN_71339d5c(param_1);
  pcVar2 = (char *)FUN_7132d218();
  if (pcVar2 != (char *)0x0) {
    iVar7 = 0;
    do {
      cVar1 = *pcVar2;
      if (cVar1 != '#' && cVar1 != '\0') {
        if (iVar7 == 0) {
          switch(cVar1) {
          case '2':
            cVar1 = pcVar2[1];
            bVar8 = cVar1 != 'd';
            if (!bVar8) {
              cVar1 = pcVar2[2];
            }
            if (bVar8 || cVar1 != 'f') goto switchD_7132e3f4_caseD_33;
            iVar7 = 10;
            if (pcVar2[3] != 'x') {
              iVar7 = 0;
            }
            break;
          case 'a':
            cVar1 = pcVar2[1];
            bVar8 = cVar1 == 'n';
            if (bVar8) {
              cVar1 = pcVar2[2];
            }
            if ((!bVar8 || cVar1 != 'i') || (iVar7 = 6, pcVar2[3] != 'm'))
            goto switchD_7132e3f4_caseD_33;
            break;
          case 'c':
            cVar1 = pcVar2[1];
            bVar8 = cVar1 != 'a';
            if (!bVar8) {
              cVar1 = pcVar2[2];
            }
            if (bVar8 || cVar1 != 'r') goto switchD_7132e3f4_caseD_33;
            cVar1 = pcVar2[3];
            iVar7 = 7;
LAB_7132e5fc:
            if (cVar1 != 's') {
              iVar7 = 0;
            }
            break;
          case 'h':
            cVar1 = pcVar2[1];
            bVar8 = cVar1 == 'i';
            if (bVar8) {
              cVar1 = pcVar2[2];
            }
            if ((!bVar8 || cVar1 != 'e') || (iVar7 = 5, pcVar2[3] != 'r'))
            goto switchD_7132e3f4_caseD_33;
            break;
          case 'o':
            cVar1 = pcVar2[1];
            bVar8 = cVar1 == 'b';
            if (bVar8) {
              cVar1 = pcVar2[2];
            }
            if ((!bVar8 || cVar1 != 'j') || (iVar7 = 1, pcVar2[3] != 's'))
            goto switchD_7132e3f4_caseD_33;
            break;
          case 'p':
            cVar1 = pcVar2[1];
            bVar8 = cVar1 == 'e';
            if (bVar8) {
              cVar1 = pcVar2[2];
            }
            if (bVar8 && cVar1 == 'd') {
              cVar1 = pcVar2[3];
              iVar7 = 8;
              goto LAB_7132e5fc;
            }
          default:
switchD_7132e3f4_caseD_33:
            iVar7 = 0;
            break;
          case 't':
            iVar7 = 0;
            if (pcVar2[1] == 'x') {
              if ((pcVar2[2] == 'd') && (pcVar2[3] == 'p')) {
                iVar7 = 0xb;
              }
            }
            else if (pcVar2[1] == 'o') {
              if (pcVar2[2] != 'b') goto switchD_7132e3f4_caseD_33;
              iVar7 = 3;
              if (pcVar2[3] != 'j') {
                iVar7 = 0;
              }
            }
            break;
          case 'w':
            cVar1 = pcVar2[1];
            bVar8 = cVar1 == 'e';
            if (bVar8) {
              cVar1 = pcVar2[2];
            }
            if ((!bVar8 || cVar1 != 'a') || (iVar7 = 4, pcVar2[3] != 'p'))
            goto switchD_7132e3f4_caseD_33;
          }
        }
        else {
          if (cVar1 == 'e') {
            cVar1 = pcVar2[1];
            bVar8 = cVar1 == 'n';
            if (bVar8) {
              cVar1 = pcVar2[2];
            }
            if (bVar8 && cVar1 == 'd') goto switchD_7132e3f4_caseD_33;
          }
          if (iVar7 - 1U < 0xb) {
            (*(code *)(&DAT_7132e374 + *(int *)(&DAT_7132e374 + (iVar7 - 1U) * 4)))();
            return;
          }
        }
      }
      pcVar2 = (char *)FUN_7132d218(uVar4);
    } while (pcVar2 != (char *)0x0);
  }
  FUN_7133a194(uVar4);
  return;
}


// =========================================================================
// Function: FUN_7132edd0
// Entry: 0x7132edd0 | Size: 380 bytes
// =========================================================================

void FUN_7132edd0(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b35e40 & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b35e40), iVar4 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9d38,param_2);
    if (*pcVar5 == '\0') {
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9d28);
      *(undefined1 *)(iVar4 + 0x53) = 1;
      imp___aeabi_memcpy8(iVar4,&DAT_70073d50,0x53);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71338a74,iVar4,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9d38);
      *puVar6 = 1;
    }
    iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9d28);
    if (*(char *)(iVar4 + 0x53) != '\0') {
      uVar7 = 0;
      uVar8 = 0;
      do {
        iVar9 = (uVar7 & 7) * 8;
        uVar10 = iVar9 - 0x20;
        bVar3 = (byte)(0x19a31f5d >> iVar9) | (byte)(0x1b75bd11 << ((uVar7 & 7) * -8 + 0x20 & 0xff))
        ;
        if (-1 < (int)uVar10) {
          bVar3 = (byte)(0x1b75bd11 >> (uVar10 & 0xff));
        }
        *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
        bVar11 = 0xfffffffe < uVar7;
        bVar1 = uVar8 == 0;
        bVar2 = (0x51 < uVar7) <= uVar8;
        uVar7 = uVar7 + 1;
        uVar8 = uVar8 + bVar11;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar4 + 0x53) = 0;
    }
    DAT_70b35e3c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b35e40);
  }
                    /* WARNING: Could not recover jumptable at 0x7132edfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b35e3c)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_7132f200
// Entry: 0x7132f200 | Size: 944 bytes
// =========================================================================

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7132f200(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  char *pcVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  undefined8 uVar18;
  undefined1 auStack_4c4 [4];
  undefined1 auStack_4c0 [4];
  undefined1 auStack_4bc [4];
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  int aiStack_4a8 [3];
  undefined1 auStack_49c [4];
  undefined1 auStack_498 [4];
  undefined1 auStack_494 [4];
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined4 uStack_488;
  undefined1 auStack_90 [100];
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  FUN_7136cdfc(auStack_4c4);
  aiStack_4a8[2] = 0;
  aiStack_4a8[1] = 0;
  aiStack_4a8[0] = 0;
  uStack_4ac = 0;
  uStack_4b0 = 0;
  uStack_4b4 = 0;
  uStack_4b8 = 0;
  FUN_7136cdfc(auStack_49c);
  pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9d58);
  if (*pcVar9 == '\0') {
    puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9d48);
    *(undefined1 *)((int)puVar11 + 0x2a) = 1;
    uVar6 = DAT_70073db8;
    uVar5 = DAT_70073db4;
    uVar4 = DAT_70073db0;
    uVar3 = DAT_70073dac;
    *puVar11 = DAT_70073da8;
    puVar11[1] = uVar3;
    puVar11[2] = uVar4;
    puVar11[3] = uVar5;
    puVar11[4] = uVar6;
    uVar6 = DAT_70073dcc;
    uVar5 = DAT_70073dc8;
    uVar4 = DAT_70073dc4;
    uVar3 = DAT_70073dc0;
    puVar11[5] = DAT_70073dbc;
    puVar11[6] = uVar3;
    puVar11[7] = uVar4;
    puVar11[8] = uVar5;
    puVar11[9] = uVar6;
    *(undefined2 *)(puVar11 + 10) = DAT_70073dd0;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71338ac4,puVar11,&DAT_70b0e000);
    puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9d58);
    *puVar12 = 1;
  }
  iVar10 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9d48);
  if (*(char *)(iVar10 + 0x2a) != '\0') {
    uVar16 = 0;
    uVar13 = 0;
    do {
      iVar14 = (uVar16 & 7) * 8;
      bVar8 = (byte)(0x5dd951e3 >> iVar14) | (byte)(0x7765a789 << ((uVar16 & 7) * -8 + 0x20 & 0xff))
      ;
      uVar15 = iVar14 - 0x20;
      if (-1 < (int)uVar15) {
        bVar8 = (byte)(0x7765a789 >> (uVar15 & 0xff));
      }
      *(byte *)(iVar10 + uVar16) = *(byte *)(iVar10 + uVar16) ^ bVar8;
      bVar17 = 0xfffffffe < uVar16;
      bVar1 = uVar13 == 0;
      bVar2 = (0x28 < uVar16) <= uVar13;
      uVar16 = uVar16 + 1;
      uVar13 = uVar13 + bVar17;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar10 + 0x2a) = 0;
  }
  iVar10 = imp_sscanf(param_1,iVar10,aiStack_4a8,auStack_90,aiStack_4a8 + 1,auStack_4c4,auStack_4c0,
                      auStack_4bc,&uStack_4b8,&uStack_4b4,&uStack_4b0,&uStack_4ac,aiStack_4a8 + 2,
                      auStack_49c,auStack_498,auStack_494);
  if (iVar10 != 0xe) {
    uStack_490 = 0x3f800000;
    uStack_48c = 0x3f800000;
    uStack_488 = 0x3f800000;
    FUN_7136d040(auStack_49c,&uStack_490);
  }
  if (*(int *)(DAT_70b41f74 + aiStack_4a8[0] * 0x14 + 0xc) == 0) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9d78);
    if (*pcVar9 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9d68);
      *(undefined1 *)((int)puVar11 + 0x2d) = 1;
      uVar6 = DAT_70073de8;
      uVar5 = DAT_70073de4;
      uVar4 = DAT_70073de0;
      uVar3 = DAT_70073ddc;
      *puVar11 = DAT_70073dd8;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      uVar7 = DAT_70073e00;
      uVar6 = DAT_70073dfc;
      uVar5 = DAT_70073df8;
      uVar4 = DAT_70073df4;
      uVar3 = DAT_70073df0;
      puVar11[5] = DAT_70073dec;
      puVar11[6] = uVar3;
      puVar11[7] = uVar4;
      puVar11[8] = uVar5;
      puVar11[9] = uVar6;
      puVar11[10] = uVar7;
      *(undefined1 *)(puVar11 + 0xb) = DAT_70073e04;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71338b14,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9d78);
      *puVar12 = 1;
    }
    uVar18 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9d68);
    uVar16 = (uint)((ulonglong)uVar18 >> 0x20);
    iVar10 = (int)uVar18;
    if (*(char *)(iVar10 + 0x2d) != '\0') {
      uVar13 = 0;
      uVar15 = 0;
      do {
        iVar14 = (uVar13 & 7) * 8;
        bVar8 = (byte)(0xed61eb31 >> iVar14) |
                (byte)(-0x7a500ef9 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        uVar16 = iVar14 - 0x20;
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0x85aff107 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar10 + uVar13) = *(byte *)(iVar10 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        uVar16 = uVar13 + 1;
        bVar1 = uVar15 == 0;
        bVar2 = (0x2b < uVar13) <= uVar15;
        uVar13 = uVar16;
        uVar15 = uVar15 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar10 + 0x2d) = 0;
    }
    FUN_7132f9e0(&uStack_490,uVar16,iVar10,aiStack_4a8[0],auStack_90);
    FUN_7151c9e4(&uStack_490);
  }
  FUN_7132edd0(auStack_4c4,auStack_90);
  if (_ext___stack_chk_guard != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail();
  }
  return;
}


// =========================================================================
// Function: FUN_7132f9e0
// Entry: 0x7132f9e0 | Size: 68 bytes
// =========================================================================

void FUN_7132f9e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_4;
  
  uStack_4 = param_4;
  imp___vsprintf_chk(param_1,0,0x400,param_3,&uStack_4);
  return;
}


// =========================================================================
// Function: FUN_7132fa58
// Entry: 0x7132fa58 | Size: 8400 bytes
// =========================================================================

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7132fa58(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  undefined2 uVar9;
  char *pcVar10;
  int iVar11;
  int *piVar12;
  undefined4 uVar13;
  byte *pbVar14;
  byte *pbVar15;
  uint uVar16;
  int iVar17;
  undefined4 *puVar18;
  undefined1 *puVar19;
  undefined2 *puVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  undefined4 *puVar24;
  int *piVar25;
  bool bVar26;
  undefined4 uStack_198;
  int iStack_194;
  int iStack_190;
  undefined4 uStack_18c;
  int aiStack_188 [12];
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined1 auStack_138 [56];
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 auStack_f8 [104];
  undefined1 auStack_90 [20];
  undefined1 uStack_7c;
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  aiStack_188[3] = 0xffffffff;
  imp___aeabi_memclr8(auStack_90,100);
  imp___aeabi_memclr8(auStack_f8,100);
  uStack_fc = 0;
  uStack_100 = 0;
  imp___aeabi_memclr8(auStack_138,0x32);
  uStack_13c = 0;
  uStack_140 = 0;
  uStack_144 = 0;
  uStack_148 = 0;
  uStack_14c = 0;
  uStack_150 = 0;
  uStack_154 = 0;
  uStack_158 = 0;
  aiStack_188[0xb] = 0;
  aiStack_188[10] = 0;
  aiStack_188[9] = 0;
  aiStack_188[8] = 0;
  aiStack_188[7] = 0;
  aiStack_188[6] = 0;
  aiStack_188[5] = 0;
  aiStack_188[4] = 0;
  aiStack_188[2] = 0;
  aiStack_188[1] = 0;
  aiStack_188[0] = 0;
  uStack_18c = 0;
  iStack_190 = 0;
  iStack_194 = 0;
  uStack_198 = 0xffffffff;
  pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9d98);
  if (*pcVar10 == '\0') {
    puVar24 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9d88);
    *(undefined1 *)((int)puVar24 + 0x2d) = 1;
    uVar6 = DAT_70073e18;
    uVar5 = DAT_70073e14;
    uVar4 = DAT_70073e10;
    uVar13 = DAT_70073e0c;
    *puVar24 = DAT_70073e08;
    puVar24[1] = uVar13;
    puVar24[2] = uVar4;
    puVar24[3] = uVar5;
    puVar24[4] = uVar6;
    uVar7 = DAT_70073e30;
    uVar6 = DAT_70073e2c;
    uVar5 = DAT_70073e28;
    uVar4 = DAT_70073e24;
    uVar13 = DAT_70073e20;
    puVar24[5] = DAT_70073e1c;
    puVar24[6] = uVar13;
    puVar24[7] = uVar4;
    puVar24[8] = uVar5;
    puVar24[9] = uVar6;
    puVar24[10] = uVar7;
    *(undefined1 *)(puVar24 + 0xb) = DAT_70073e34;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71338b64,puVar24,&DAT_70b0e000);
    puVar19 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9d98);
    *puVar19 = 1;
  }
  iVar11 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9d88);
  if (*(char *)(iVar11 + 0x2d) != '\0') {
    uVar16 = 0;
    uVar21 = 0;
    do {
      iVar22 = (uVar16 & 7) * 8;
      uVar23 = iVar22 - 0x20;
      bVar8 = (byte)(0x251b4bd3 >> iVar22) | (byte)(0x375be3f5 << ((uVar16 & 7) * -8 + 0x20 & 0xff))
      ;
      if (-1 < (int)uVar23) {
        bVar8 = (byte)(0x375be3f5 >> (uVar23 & 0xff));
      }
      *(byte *)(iVar11 + uVar16) = *(byte *)(iVar11 + uVar16) ^ bVar8;
      bVar26 = 0xfffffffe < uVar16;
      bVar1 = uVar21 == 0;
      bVar2 = (0x2b < uVar16) <= uVar21;
      uVar16 = uVar16 + 1;
      uVar21 = uVar21 + bVar26;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar11 + 0x2d) = 0;
  }
  imp_sscanf(param_1,iVar11,aiStack_188 + 3,auStack_90,auStack_f8,&uStack_100,auStack_138,
             &uStack_158,aiStack_188 + 8,aiStack_188 + 4,aiStack_188 + 2,aiStack_188 + 1,aiStack_188
             ,&uStack_18c,&iStack_190,&iStack_194,&uStack_198);
  piVar12 = (int *)FUN_713fe120(aiStack_188[3]);
  uStack_7c = 0;
  imp___strncpy_chk2(piVar12 + 2,auStack_90,0x14,0x15,100);
  iVar11 = FUN_7133efa0(auStack_90);
  piVar12[1] = iVar11;
  uVar13 = FUN_71361410(aiStack_188[3]);
  FUN_713f9924(piVar12,auStack_f8,uVar13);
  pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9db8);
  if (*pcVar10 == '\0') {
    puVar24 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9da8);
    *puVar24 = 0x625b14a1;
    puVar24[1] = 0xcf4689d6;
    *(undefined1 *)(puVar24 + 2) = 1;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71338bb4,puVar24,&DAT_70b0e000);
    puVar19 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9db8);
    *puVar19 = 1;
  }
  pbVar14 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9da8);
  if (pbVar14[8] != 0) {
    pbVar14[8] = 0;
    *pbVar14 = *pbVar14 ^ 0xd7;
    pbVar14[1] = pbVar14[1] ^ 0x71;
    pbVar14[2] = pbVar14[2] ^ 0x33;
    pbVar14[3] = pbVar14[3] ^ 0xb;
    pbVar14[4] = pbVar14[4] ^ 0xb5;
    pbVar14[5] = pbVar14[5] ^ 0xe5;
    pbVar14[6] = pbVar14[6] ^ 0x23;
    pbVar14[7] = pbVar14[7] ^ 0xcf;
  }
  pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9dd8);
  if (*pcVar10 == '\0') {
    puVar24 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9dc8);
    *puVar24 = 0xb5709a3;
    *(undefined1 *)(puVar24 + 1) = 1;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71338bdc,puVar24,&DAT_70b0e000);
    puVar19 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9dd8);
    *puVar19 = 1;
  }
  pbVar15 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9dc8);
  if (pbVar15[4] != 0) {
    pbVar15[4] = 0;
    *pbVar15 = *pbVar15 ^ 0xd7;
    pbVar15[1] = pbVar15[1] ^ 0x71;
    pbVar15[2] = pbVar15[2] ^ 0x33;
    pbVar15[3] = pbVar15[3] ^ 0xb;
  }
  uVar9 = FUN_7136c754(pbVar14);
  puVar20 = (undefined2 *)(*(int *)*DAT_70b420bc + (short)piVar12[8] * 0x38 + 6);
  if (*(char *)(((int *)*DAT_70b420bc)[1] + (int)(short)piVar12[8]) < '\0') {
    puVar20 = (undefined2 *)&DAT_00000006;
  }
  *puVar20 = uVar9;
  (**(code **)(*piVar12 + 0x34))(piVar12,aiStack_188 + 8);
  pcVar10 = (char *)&uStack_158;
  for (iVar11 = imp___strlen_chk(pcVar10,0x20); iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*pcVar10 == '_') {
      *pcVar10 = ' ';
    }
    pcVar10 = pcVar10 + 1;
  }
  imp___strncpy_chk2((int)piVar12 + 0x4a,&uStack_158,8,8,0x20);
  *(char *)((int)piVar12 + 0x66) = (char)aiStack_188[1];
  piVar12[0x1b] = aiStack_188[0];
  DataMemoryBarrier(0xb);
  puVar24 = &DAT_70b35e74;
  if (((DAT_70b35f04 & 1) == 0) && (iVar11 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b35f04), iVar11 != 0))
  {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9df8);
    if (*pcVar10 == '\0') {
      puVar18 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9de8);
      *puVar18 = 0xeb5164f4;
      *(undefined1 *)(puVar18 + 1) = 1;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71338c00,puVar18,&DAT_70b0e000);
      puVar19 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9df8);
      *puVar19 = 1;
    }
    DAT_70b35e74 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9de8);
    if (DAT_70b35e74[4] != 0) {
      DAT_70b35e74[4] = 0;
      *DAT_70b35e74 = *DAT_70b35e74 ^ 0x97;
      DAT_70b35e74[1] = DAT_70b35e74[1] ^ 5;
      DAT_70b35e74[2] = DAT_70b35e74[2] ^ 0x23;
      DAT_70b35e74[3] = DAT_70b35e74[3] ^ 0xeb;
    }
    DAT_70b35e78 = imp_strlen();
    DAT_70b35e7c = 0;
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9e18);
    if (*pcVar10 == '\0') {
      puVar18 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9e08);
      *puVar18 = 0x5a9b8946;
      *(undefined1 *)((int)puVar18 + 7) = 1;
      *(undefined4 *)((int)puVar18 + 3) = 0x852a805a;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71338c24,puVar18,&DAT_70b0e000);
      puVar19 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9e18);
      *puVar19 = 1;
    }
    DAT_70b35e80 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9e08);
    if (DAT_70b35e80[7] != 0) {
      DAT_70b35e80[7] = 0;
      *DAT_70b35e80 = *DAT_70b35e80 ^ 0x2b;
      DAT_70b35e80[1] = DAT_70b35e80[1] ^ 0xfd;
      DAT_70b35e80[2] = DAT_70b35e80[2] ^ 0xe9;
      DAT_70b35e80[3] = DAT_70b35e80[3] ^ 0x2f;
      DAT_70b35e80[4] = DAT_70b35e80[4] ^ 0xe3;
      DAT_70b35e80[5] = DAT_70b35e80[5] ^ 0x41;
      DAT_70b35e80[6] = DAT_70b35e80[6] ^ 0x85;
    }
    DAT_70b35e84 = imp_strlen();
    DAT_70b35e88 = 1;
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9e38);
    if (*pcVar10 == '\0') {
      puVar18 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9e28);
      *puVar18 = 0x8578b62a;
      *(undefined2 *)(puVar18 + 1) = 0x141;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71338c4c,puVar18,&DAT_70b0e000);
      puVar19 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9e38);
      *puVar19 = 1;
    }
    DAT_70b35e8c = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9e28);
    if (DAT_70b35e8c[5] != 0) {
      DAT_70b35e8c[5] = 0;
      *DAT_70b35e8c = *DAT_70b35e8c ^ 0x5b;
      DAT_70b35e8c[1] = DAT_70b35e8c[1] ^ 0xc3;
      DAT_70b35e8c[2] = DAT_70b35e8c[2] ^ 0x19;
      DAT_70b35e8c[3] = DAT_70b35e8c[3] ^ 0xe1;
      DAT_70b35e8c[4] = DAT_70b35e8c[4] ^ 0x41;
    }
    DAT_70b35e90 = imp_strlen();
    DAT_70b35e94 = 2;
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9e58);
    if (*pcVar10 == '\0') {
      puVar18 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9e48);
      *puVar18 = 0xceb186cb;
      *(undefined2 *)(puVar18 + 1) = 0x175;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71338c74,puVar18,&DAT_70b0e000);
      puVar19 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9e58);
      *puVar19 = 1;
    }
    DAT_70b35e98 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9e48);
    if (DAT_70b35e98[5] != 0) {
      DAT_70b35e98[5] = 0;
      *DAT_70b35e98 = *DAT_70b35e98 ^ 0xa3;
      DAT_70b35e98[1] = DAT_70b35e98[1] ^ 0xe3;
      DAT_70b35e98[2] = DAT_70b35e98[2] ^ 0xdd;
      DAT_70b35e98[3] = DAT_70b35e98[3] ^ 0xa7;
      DAT_70b35e98[4] = DAT_70b35e98[4] ^ 0x75;
    }
    DAT_70b35e9c = imp_strlen();
    DAT_70b35ea0 = 3;
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9e78);
    if (*pcVar10 == '\0') {
      puVar18 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9e68);
      *puVar18 = 0x25986517;
      *(undefined1 *)((int)puVar18 + 6) = 1;
      *(undefined2 *)(puVar18 + 1) = 0x5348;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71338c9c,puVar18,&DAT_70b0e000);
      puVar19 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9e78);
      *puVar19 = 1;
    }
    DAT_70b35ea4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9e68);
    if (DAT_70b35ea4[6] != 0) {
      DAT_70b35ea4[6] = 0;
      *DAT_70b35ea4 = *DAT_70b35ea4 ^ 0x67;
      DAT_70b35ea4[1] = DAT_70b35ea4[1] ^ 9;
      DAT_70b35ea4[2] = DAT_70b35ea4[2] ^ 0xf9;
      DAT_70b35ea4[3] = DAT_70b35ea4[3] ^ 0x4b;
      DAT_70b35ea4[4] = DAT_70b35ea4[4] ^ 0x2d;
      DAT_70b35ea4[5] = DAT_70b35ea4[5] ^ 0x53;
    }
    DAT_70b35ea8 = imp_strlen();
    DAT_70b35eac = 4;
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9e98);
    if (*pcVar10 == '\0') {
      puVar18 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9e88);
      *puVar18 = 0x45487e49;
      *(undefined2 *)(puVar18 + 1) = 0x10b;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71338cc4,puVar18,&DAT_70b0e000);
      puVar19 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9e98);
      *puVar19 = 1;
    }
    DAT_70b35eb0 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9e88);
    if (DAT_70b35eb0[5] != 0) {
      DAT_70b35eb0[5] = 0;
      *DAT_70b35eb0 = *DAT_70b35eb0 ^ 0x2b;
      DAT_70b35eb0[1] = DAT_70b35eb0[1] ^ 0x11;
      DAT_70b35eb0[2] = DAT_70b35eb0[2] ^ 0x29;
      DAT_70b35eb0[3] = DAT_70b35eb0[3] ^ 0x31;
      DAT_70b35eb0[4] = DAT_70b35eb0[4] ^ 0xb;
    }
    DAT_70b35eb4 = imp_strlen();
    DAT_70b35eb8 = 5;
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9eb8);
    if (*pcVar10 == '\0') {
      puVar18 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9ea8);
      *puVar18 = 0x74a839a1;
      *(undefined1 *)((int)puVar18 + 6) = 1;
      *(undefined2 *)(puVar18 + 1) = 0x4709;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71338cec,puVar18,&DAT_70b0e000);
      puVar19 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9eb8);
      *puVar19 = 1;
    }
    DAT_70b35ebc = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9ea8);
    if (DAT_70b35ebc[6] != 0) {
      DAT_70b35ebc[6] = 0;
      *DAT_70b35ebc = *DAT_70b35ebc ^ 0xd5;
      DAT_70b35ebc[1] = DAT_70b35ebc[1] ^ 0x4b;
      DAT_70b35ebc[2] = DAT_70b35ebc[2] ^ 0xc9;
      DAT_70b35ebc[3] = DAT_70b35ebc[3] ^ 0x1d;
      DAT_70b35ebc[4] = DAT_70b35ebc[4] ^ 0x67;
      DAT_70b35ebc[5] = DAT_70b35ebc[5] ^ 0x47;
    }
    DAT_70b35ec0 = imp_strlen();
    DAT_70b35ec4 = 6;
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9ed8);
    if (*pcVar10 == '\0') {
      puVar18 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9ec8);
      *puVar18 = 0x74c50ef5;
      *(undefined1 *)((int)puVar18 + 7) = 1;
      *(undefined4 *)((int)puVar18 + 3) = 0x33c0d174;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71338d14,puVar18,&DAT_70b0e000);
      puVar19 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9ed8);
      *puVar19 = 1;
    }
    DAT_70b35ec8 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9ec8);
    if (DAT_70b35ec8[7] != 0) {
      DAT_70b35ec8[7] = 0;
      *DAT_70b35ec8 = *DAT_70b35ec8 ^ 0x93;
      DAT_70b35ec8[1] = DAT_70b35ec8[1] ^ 0x51;
      DAT_70b35ec8[2] = DAT_70b35ec8[2] ^ 0xad;
      DAT_70b35ec8[3] = DAT_70b35ec8[3] ^ 0x11;
      DAT_70b35ec8[4] = DAT_70b35ec8[4] ^ 0xbd;
      DAT_70b35ec8[5] = DAT_70b35ec8[5] ^ 0xa9;
      DAT_70b35ec8[6] = DAT_70b35ec8[6] ^ 0x33;
    }
    DAT_70b35ecc = imp_strlen();
    DAT_70b35ed0 = 7;
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9ef8);
    if (*pcVar10 == '\0') {
      puVar18 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9ee8);
      *puVar18 = 0x63593c0f;
      puVar18[1] = 0x7b72194a;
      *(undefined1 *)(puVar18 + 2) = 1;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71338d3c,puVar18,&DAT_70b0e000);
      puVar19 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9ef8);
      *puVar19 = 1;
    }
    DAT_70b35ed4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9ee8);
    if (DAT_70b35ed4[8] != 0) {
      DAT_70b35ed4[8] = 0;
      *DAT_70b35ed4 = *DAT_70b35ed4 ^ 0x69;
      DAT_70b35ed4[1] = DAT_70b35ed4[1] ^ 99;
      DAT_70b35ed4[2] = DAT_70b35ed4[2] ^ 0x29;
      DAT_70b35ed4[3] = DAT_70b35ed4[3] ^ 0xf;
      DAT_70b35ed4[4] = DAT_70b35ed4[4] ^ 0x2b;
      DAT_70b35ed4[5] = DAT_70b35ed4[5] ^ 0x77;
      DAT_70b35ed4[6] = DAT_70b35ed4[6] ^ 0x17;
      DAT_70b35ed4[7] = DAT_70b35ed4[7] ^ 0x7b;
    }
    DAT_70b35ed8 = imp_strlen();
    DAT_70b35edc = 8;
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9f18);
    if (*pcVar10 == '\0') {
      puVar18 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9f08);
      *puVar18 = 0x944432d9;
      *(undefined2 *)(puVar18 + 1) = 0x113;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71338d64,puVar18,&DAT_70b0e000);
      puVar19 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9f18);
      *puVar19 = 1;
    }
    DAT_70b35ee0 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9f08);
    if (DAT_70b35ee0[5] != 0) {
      DAT_70b35ee0[5] = 0;
      *DAT_70b35ee0 = *DAT_70b35ee0 ^ 0xbb;
      DAT_70b35ee0[1] = DAT_70b35ee0[1] ^ 0x5b;
      DAT_70b35ee0[2] = DAT_70b35ee0[2] ^ 0x2f;
      DAT_70b35ee0[3] = DAT_70b35ee0[3] ^ 0xf1;
      DAT_70b35ee0[4] = DAT_70b35ee0[4] ^ 0x13;
    }
    DAT_70b35ee4 = imp_strlen();
    DAT_70b35ee8 = 9;
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9f38);
    if (*pcVar10 == '\0') {
      puVar18 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9f28);
      *puVar18 = 0x5103066f;
      *(undefined1 *)(puVar18 + 1) = 1;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71338d8c,puVar18,&DAT_70b0e000);
      puVar19 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9f38);
      *puVar19 = 1;
    }
    DAT_70b35eec = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9f28);
    if (DAT_70b35eec[4] != 0) {
      DAT_70b35eec[4] = 0;
      *DAT_70b35eec = *DAT_70b35eec ^ 0xd;
      DAT_70b35eec[1] = DAT_70b35eec[1] ^ 0x6b;
      DAT_70b35eec[2] = DAT_70b35eec[2] ^ 0x7b;
      DAT_70b35eec[3] = DAT_70b35eec[3] ^ 0x51;
    }
    DAT_70b35ef0 = imp_strlen();
    DAT_70b35ef4 = 10;
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9f58);
    if (*pcVar10 == '\0') {
      puVar18 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9f48);
      *puVar18 = 0xa222f5fb;
      puVar18[1] = 0x212dda73;
      *(undefined1 *)(puVar18 + 2) = 1;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71338db0,puVar18,&DAT_70b0e000);
      puVar19 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9f58);
      *puVar19 = 1;
    }
    DAT_70b35ef8 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9f48);
    if (DAT_70b35ef8[8] != 0) {
      DAT_70b35ef8[8] = 0;
      *DAT_70b35ef8 = *DAT_70b35ef8 ^ 0x8f;
      DAT_70b35ef8[1] = DAT_70b35ef8[1] ^ 0x87;
      DAT_70b35ef8[2] = DAT_70b35ef8[2] ^ 0x43;
      DAT_70b35ef8[3] = DAT_70b35ef8[3] ^ 0xcb;
      DAT_70b35ef8[4] = DAT_70b35ef8[4] ^ 0x1f;
      DAT_70b35ef8[5] = DAT_70b35ef8[5] ^ 0xbf;
      DAT_70b35ef8[6] = DAT_70b35ef8[6] ^ 0x5f;
      DAT_70b35ef8[7] = DAT_70b35ef8[7] ^ 0x21;
    }
    DAT_70b35efc = imp_strlen();
    DAT_70b35f00 = 0xb;
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b35f04);
  }
  iVar11 = imp_strlen(&uStack_100);
  if ((DAT_70b35e78 == iVar11) &&
     (iVar22 = imp_memcmp(DAT_70b35e74,&uStack_100,iVar11), iVar22 == 0)) {
LAB_71330050:
    uVar16 = puVar24[2];
    piVar12[0x15] = uVar16;
    if (uVar16 < 0xc) {
      piVar25 = piVar12 + 0x16;
      if ((1 << (uVar16 & 0xff) & 0x81fU) == 0) {
        if ((1 << (uVar16 & 0xff) & 0x600U) != 0) {
          *piVar25 = iStack_190;
          piVar12[0x17] = iStack_194;
          iVar11 = FUN_71ba1e0c(uStack_18c);
          piVar12[0x1c] = iVar11;
          goto LAB_713300b0;
        }
        if (uVar16 != 8) goto LAB_713300b0;
        *piVar25 = 0x3f800000;
        piVar12[0x17] = 0x3f800000;
      }
      else {
        *piVar25 = iStack_190;
        piVar12[0x17] = iStack_194;
      }
      *(short *)(piVar12 + 0x18) = (short)uStack_18c;
    }
  }
  else {
    if (DAT_70b35e84 == iVar11) {
      puVar24 = &DAT_70b35e80;
      iVar22 = imp_memcmp(DAT_70b35e80,&uStack_100,iVar11);
      if (iVar22 == 0) goto LAB_71330050;
    }
    if (DAT_70b35e90 == iVar11) {
      puVar24 = &DAT_70b35e8c;
      iVar22 = imp_memcmp(DAT_70b35e8c,&uStack_100,iVar11);
      if (iVar22 == 0) goto LAB_71330050;
    }
    if (DAT_70b35e9c == iVar11) {
      puVar24 = &DAT_70b35e98;
      iVar22 = imp_memcmp(DAT_70b35e98,&uStack_100,iVar11);
      if (iVar22 == 0) goto LAB_71330050;
    }
    if (DAT_70b35ea8 == iVar11) {
      puVar24 = &DAT_70b35ea4;
      iVar22 = imp_memcmp(DAT_70b35ea4,&uStack_100,iVar11);
      if (iVar22 == 0) goto LAB_71330050;
    }
    if (DAT_70b35eb4 == iVar11) {
      puVar24 = &DAT_70b35eb0;
      iVar22 = imp_memcmp(DAT_70b35eb0,&uStack_100,iVar11);
      if (iVar22 == 0) goto LAB_71330050;
    }
    if (DAT_70b35ec0 == iVar11) {
      puVar24 = &DAT_70b35ebc;
      iVar22 = imp_memcmp(DAT_70b35ebc,&uStack_100,iVar11);
      if (iVar22 == 0) goto LAB_71330050;
    }
    if (DAT_70b35ecc == iVar11) {
      puVar24 = &DAT_70b35ec8;
      iVar22 = imp_memcmp(DAT_70b35ec8,&uStack_100,iVar11);
      if (iVar22 == 0) goto LAB_71330050;
    }
    if (DAT_70b35ed8 == iVar11) {
      puVar24 = &DAT_70b35ed4;
      iVar22 = imp_memcmp(DAT_70b35ed4,&uStack_100,iVar11);
      if (iVar22 == 0) goto LAB_71330050;
    }
    if (DAT_70b35ee4 == iVar11) {
      puVar24 = &DAT_70b35ee0;
      iVar22 = imp_memcmp(DAT_70b35ee0,&uStack_100,iVar11);
      if (iVar22 == 0) goto LAB_71330050;
    }
    if (DAT_70b35ef0 == iVar11) {
      puVar24 = &DAT_70b35eec;
      iVar22 = imp_memcmp(DAT_70b35eec,&uStack_100,iVar11);
      if (iVar22 == 0) goto LAB_71330050;
    }
    if (DAT_70b35efc == iVar11) {
      puVar24 = &DAT_70b35ef8;
      iVar11 = imp_memcmp(DAT_70b35ef8,&uStack_100,iVar11);
      if (iVar11 == 0) goto LAB_71330050;
    }
    imp_raise(5);
    piVar12[0x15] = -1;
  }
LAB_713300b0:
  iVar11 = 0;
  piVar25 = &DAT_70b86d3c;
  do {
    iVar22 = *piVar25;
    if ((*(byte *)(piVar25 + -2) & 1) == 0) {
      iVar22 = (int)piVar25 + -7;
    }
    iVar22 = imp_strcmp(iVar22,auStack_138);
    if (iVar22 == 0) goto LAB_713300fc;
    iVar11 = iVar11 + 1;
    piVar25 = piVar25 + 3;
  } while (iVar11 != 600);
  iVar11 = -1;
LAB_713300fc:
  *(short *)((int)piVar12 + 0x62) = (short)iVar11;
  *(char *)((int)piVar12 + 0x67) = (char)uStack_198;
  DataMemoryBarrier(0xb);
  if (((DAT_70b35fa4 & 1) == 0) && (iVar11 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b35fa4), iVar11 != 0))
  {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9f78);
    if (*pcVar10 == '\0') {
      puVar24 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9f68);
      *puVar24 = 0x329ff885;
      *(undefined1 *)((int)puVar24 + 7) = 1;
      *(undefined4 *)((int)puVar24 + 3) = 0x9553a432;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71338dd8,puVar24,&DAT_70b0e000);
      puVar19 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9f78);
      *puVar19 = 1;
    }
    DAT_70b35f08 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9f68);
    if (DAT_70b35f08[7] != 0) {
      DAT_70b35f08[7] = 0;
      *DAT_70b35f08 = *DAT_70b35f08 ^ 0xeb;
      DAT_70b35f08[1] = DAT_70b35f08[1] ^ 0x97;
      DAT_70b35f08[2] = DAT_70b35f08[2] ^ 0xed;
      DAT_70b35f08[3] = DAT_70b35f08[3] ^ 0x5f;
      DAT_70b35f08[4] = DAT_70b35f08[4] ^ 0xc5;
      DAT_70b35f08[5] = DAT_70b35f08[5] ^ 0x3f;
      DAT_70b35f08[6] = DAT_70b35f08[6] ^ 0x95;
    }
    DAT_70b35f0c = imp_strlen();
    DAT_70b35f10 = 0;
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9f98);
    if (*pcVar10 == '\0') {
      puVar24 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9f88);
      *puVar24 = 0x796894e9;
      puVar24[1] = 0x8a3a80b9;
      *(undefined1 *)((int)puVar24 + 0xb) = 1;
      *(undefined4 *)((int)puVar24 + 7) = 0x782f58a;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71338e00,puVar24,&DAT_70b0e000);
      puVar19 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9f98);
      *puVar19 = 1;
    }
    DAT_70b35f14 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9f88);
    if (DAT_70b35f14[0xb] != 0) {
      *DAT_70b35f14 = *DAT_70b35f14 ^ 0x99;
      DAT_70b35f14[1] = DAT_70b35f14[1] ^ 0xfb;
      DAT_70b35f14[2] = DAT_70b35f14[2] ^ 7;
      DAT_70b35f14[3] = DAT_70b35f14[3] ^ 0xb;
      DAT_70b35f14[0xb] = 0;
      DAT_70b35f14[4] = DAT_70b35f14[4] ^ 0xdf;
      DAT_70b35f14[5] = DAT_70b35f14[5] ^ 0xe1;
      DAT_70b35f14[6] = DAT_70b35f14[6] ^ 0x57;
      DAT_70b35f14[7] = DAT_70b35f14[7] ^ 0xe3;
      DAT_70b35f14[8] = DAT_70b35f14[8] ^ 0x99;
      DAT_70b35f14[9] = DAT_70b35f14[9] ^ 0xfb;
      DAT_70b35f14[10] = DAT_70b35f14[10] ^ 7;
    }
    DAT_70b35f18 = imp_strlen();
    DAT_70b35f1c = 1;
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9fb8);
    if (*pcVar10 == '\0') {
      puVar24 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9fa8);
      *puVar24 = 0xf1a83045;
      puVar24[1] = 0xd0ce64cd;
      *(undefined1 *)((int)puVar24 + 0xb) = 1;
      *(undefined4 *)((int)puVar24 + 7) = 0xcb205bd0;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71338e2c,puVar24,&DAT_70b0e000);
      puVar19 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9fb8);
      *puVar19 = 1;
    }
    DAT_70b35f20 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9fa8);
    if (DAT_70b35f20[0xb] != 0) {
      *DAT_70b35f20 = *DAT_70b35f20 ^ 0x37;
      DAT_70b35f20[1] = DAT_70b35f20[1] ^ 0x59;
      DAT_70b35f20[2] = DAT_70b35f20[2] ^ 0xcb;
      DAT_70b35f20[3] = DAT_70b35f20[3] ^ 0x99;
      DAT_70b35f20[0xb] = 0;
      DAT_70b35f20[4] = DAT_70b35f20[4] ^ 0xab;
      DAT_70b35f20[5] = DAT_70b35f20[5] ^ 5;
      DAT_70b35f20[6] = DAT_70b35f20[6] ^ 0xa3;
      DAT_70b35f20[7] = DAT_70b35f20[7] ^ 0xb9;
      DAT_70b35f20[8] = DAT_70b35f20[8] ^ 0x37;
      DAT_70b35f20[9] = DAT_70b35f20[9] ^ 0x59;
      DAT_70b35f20[10] = DAT_70b35f20[10] ^ 0xcb;
    }
    DAT_70b35f24 = imp_strlen();
    DAT_70b35f28 = 2;
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9fd8);
    if (*pcVar10 == '\0') {
      puVar24 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9fc8);
      *puVar24 = 0x764449e8;
      puVar24[1] = 0x3324d5ce;
      *(undefined1 *)((int)puVar24 + 10) = 1;
      *(undefined2 *)(puVar24 + 2) = 0x31e8;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71338e58,puVar24,&DAT_70b0e000);
      puVar19 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9fd8);
      *puVar19 = 1;
    }
    DAT_70b35f2c = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9fc8);
    if (DAT_70b35f2c[10] != 0) {
      *DAT_70b35f2c = *DAT_70b35f2c ^ 0x8d;
      DAT_70b35f2c[1] = DAT_70b35f2c[1] ^ 0x31;
      DAT_70b35f2c[2] = DAT_70b35f2c[2] ^ 0x21;
      DAT_70b35f2c[3] = DAT_70b35f2c[3] ^ 0x15;
      DAT_70b35f2c[10] = 0;
      DAT_70b35f2c[4] = DAT_70b35f2c[4] ^ 0xbb;
      DAT_70b35f2c[5] = DAT_70b35f2c[5] ^ 0xa1;
      DAT_70b35f2c[6] = DAT_70b35f2c[6] ^ 0x4d;
      DAT_70b35f2c[7] = DAT_70b35f2c[7] ^ 0x45;
      DAT_70b35f2c[8] = DAT_70b35f2c[8] ^ 0x8d;
      DAT_70b35f2c[9] = DAT_70b35f2c[9] ^ 0x31;
    }
    DAT_70b35f30 = imp_strlen();
    DAT_70b35f34 = 3;
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9ff8);
    if (*pcVar10 == '\0') {
      puVar24 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9fe8);
      *puVar24 = 0x3eefc41e;
      *(undefined1 *)((int)puVar24 + 7) = 1;
      *(undefined4 *)((int)puVar24 + 3) = 0xf745ce3e;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71338e84,puVar24,&DAT_70b0e000);
      puVar19 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9ff8);
      *puVar19 = 1;
    }
    DAT_70b35f38 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700b9fe8);
    if (DAT_70b35f38[7] != 0) {
      DAT_70b35f38[7] = 0;
      *DAT_70b35f38 = *DAT_70b35f38 ^ 0x69;
      DAT_70b35f38[1] = DAT_70b35f38[1] ^ 0xab;
      DAT_70b35f38[2] = DAT_70b35f38[2] ^ 0x9d;
      DAT_70b35f38[3] = DAT_70b35f38[3] ^ 0x55;
      DAT_70b35f38[4] = DAT_70b35f38[4] ^ 0xab;
      DAT_70b35f38[5] = DAT_70b35f38[5] ^ 0x37;
      DAT_70b35f38[6] = DAT_70b35f38[6] ^ 0xf7;
    }
    DAT_70b35f3c = imp_strlen();
    DAT_70b35f40 = 4;
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba018);
    if (*pcVar10 == '\0') {
      puVar24 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba008);
      *puVar24 = 0xbf8a005d;
      *(undefined1 *)(puVar24 + 1) = 1;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71338eac,puVar24,&DAT_70b0e000);
      puVar19 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba018);
      *puVar19 = 1;
    }
    DAT_70b35f44 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba008);
    if (DAT_70b35f44[4] != 0) {
      DAT_70b35f44[4] = 0;
      *DAT_70b35f44 = *DAT_70b35f44 ^ 0x3f;
      DAT_70b35f44[1] = DAT_70b35f44[1] ^ 0x69;
      DAT_70b35f44[2] = DAT_70b35f44[2] ^ 0xed;
      DAT_70b35f44[3] = DAT_70b35f44[3] ^ 0xbf;
    }
    DAT_70b35f48 = imp_strlen();
    DAT_70b35f4c = 5;
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba038);
    if (*pcVar10 == '\0') {
      puVar24 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba028);
      *puVar24 = 0x34d5ea71;
      *(undefined2 *)(puVar24 + 1) = 0x1c5;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71338ed0,puVar24,&DAT_70b0e000);
      puVar19 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba038);
      *puVar19 = 1;
    }
    DAT_70b35f50 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba028);
    if (DAT_70b35f50[5] != 0) {
      DAT_70b35f50[5] = 0;
      *DAT_70b35f50 = *DAT_70b35f50 ^ 5;
      DAT_70b35f50[1] = DAT_70b35f50[1] ^ 0x8b;
      DAT_70b35f50[2] = DAT_70b35f50[2] ^ 0xad;
      DAT_70b35f50[3] = DAT_70b35f50[3] ^ 0x5d;
      DAT_70b35f50[4] = DAT_70b35f50[4] ^ 0xc5;
    }
    DAT_70b35f54 = imp_strlen();
    DAT_70b35f58 = 6;
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba058);
    if (*pcVar10 == '\0') {
      puVar24 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba048);
      *puVar24 = 0x788382ce;
      *(undefined1 *)((int)puVar24 + 6) = 1;
      *(undefined2 *)(puVar24 + 1) = 0x8dd9;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71338ef8,puVar24,&DAT_70b0e000);
      puVar19 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba058);
      *puVar19 = 1;
    }
    DAT_70b35f5c = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba048);
    if (DAT_70b35f5c[6] != 0) {
      DAT_70b35f5c[6] = 0;
      *DAT_70b35f5c = *DAT_70b35f5c ^ 0xa3;
      DAT_70b35f5c[1] = DAT_70b35f5c[1] ^ 0xed;
      DAT_70b35f5c[2] = DAT_70b35f5c[2] ^ 0xf3;
      DAT_70b35f5c[3] = DAT_70b35f5c[3] ^ 0x1d;
      DAT_70b35f5c[4] = DAT_70b35f5c[4] ^ 0xbd;
      DAT_70b35f5c[5] = DAT_70b35f5c[5] ^ 0x8d;
    }
    DAT_70b35f60 = imp_strlen();
    DAT_70b35f64 = 7;
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba078);
    if (*pcVar10 == '\0') {
      puVar24 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba068);
      *puVar24 = 0x464ff2c2;
      puVar24[1] = 0xe680d34d;
      *(undefined1 *)((int)puVar24 + 10) = 1;
      *(undefined2 *)(puVar24 + 2) = 0x9dca;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71338f20,puVar24,&DAT_70b0e000);
      puVar19 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba078);
      *puVar19 = 1;
    }
    DAT_70b35f68 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba068);
    if (DAT_70b35f68[10] != 0) {
      *DAT_70b35f68 = *DAT_70b35f68 ^ 0xaf;
      DAT_70b35f68[1] = DAT_70b35f68[1] ^ 0x9d;
      DAT_70b35f68[2] = DAT_70b35f68[2] ^ 0x3b;
      DAT_70b35f68[3] = DAT_70b35f68[3] ^ 0x29;
      DAT_70b35f68[10] = 0;
      DAT_70b35f68[4] = DAT_70b35f68[4] ^ 0x3f;
      DAT_70b35f68[5] = DAT_70b35f68[5] ^ 0xb1;
      DAT_70b35f68[6] = DAT_70b35f68[6] ^ 0xe9;
      DAT_70b35f68[7] = DAT_70b35f68[7] ^ 0x8d;
      DAT_70b35f68[8] = DAT_70b35f68[8] ^ 0xaf;
      DAT_70b35f68[9] = DAT_70b35f68[9] ^ 0x9d;
    }
    DAT_70b35f6c = imp_strlen();
    DAT_70b35f70 = 8;
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba098);
    if (*pcVar10 == '\0') {
      puVar24 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba088);
      *(undefined1 *)(puVar24 + 3) = 1;
      *puVar24 = 0x6892eead;
      puVar24[1] = 0x6b866d0a;
      puVar24[2] = 0x1b8feaae;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71338f4c,puVar24,&DAT_70b0e000);
      puVar19 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba098);
      *puVar19 = 1;
    }
    DAT_70b35f74 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba088);
    if (DAT_70b35f74[0xc] != 0) {
      *DAT_70b35f74 = *DAT_70b35f74 ^ 0xc1;
      DAT_70b35f74[1] = DAT_70b35f74[1] ^ 0x8b;
      DAT_70b35f74[2] = DAT_70b35f74[2] ^ 0xfb;
      DAT_70b35f74[3] = DAT_70b35f74[3] ^ 0x1b;
      DAT_70b35f74[0xc] = 0;
      DAT_70b35f74[4] = DAT_70b35f74[4] ^ 0x7f;
      DAT_70b35f74[5] = DAT_70b35f74[5] ^ 0x1f;
      DAT_70b35f74[6] = DAT_70b35f74[6] ^ 0xe3;
      DAT_70b35f74[7] = DAT_70b35f74[7] ^ 9;
      DAT_70b35f74[8] = DAT_70b35f74[8] ^ 0xc1;
      DAT_70b35f74[9] = DAT_70b35f74[9] ^ 0x8b;
      DAT_70b35f74[10] = DAT_70b35f74[10] ^ 0xfb;
      DAT_70b35f74[0xb] = DAT_70b35f74[0xb] ^ 0x1b;
    }
    DAT_70b35f78 = imp_strlen();
    DAT_70b35f7c = 9;
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba0b8);
    if (*pcVar10 == '\0') {
      puVar24 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba0a8);
      *puVar24 = 0x3a85f6a0;
      puVar24[1] = 0x6c2d11bc;
      *(undefined1 *)((int)puVar24 + 0xb) = 1;
      *(undefined4 *)((int)puVar24 + 7) = 0xf7edb66c;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71338f78,puVar24,&DAT_70b0e000);
      puVar19 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba0b8);
      *puVar19 = 1;
    }
    DAT_70b35f80 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba0a8);
    if (DAT_70b35f80[0xb] != 0) {
      *DAT_70b35f80 = *DAT_70b35f80 ^ 0xd7;
      DAT_70b35f80[1] = DAT_70b35f80[1] ^ 0x99;
      DAT_70b35f80[2] = DAT_70b35f80[2] ^ 0xf7;
      DAT_70b35f80[3] = DAT_70b35f80[3] ^ 0x51;
      DAT_70b35f80[0xb] = 0;
      DAT_70b35f80[4] = DAT_70b35f80[4] ^ 0xd9;
      DAT_70b35f80[5] = DAT_70b35f80[5] ^ 99;
      DAT_70b35f80[6] = DAT_70b35f80[6] ^ 0x4f;
      DAT_70b35f80[7] = DAT_70b35f80[7] ^ 3;
      DAT_70b35f80[8] = DAT_70b35f80[8] ^ 0xd7;
      DAT_70b35f80[9] = DAT_70b35f80[9] ^ 0x99;
      DAT_70b35f80[10] = DAT_70b35f80[10] ^ 0xf7;
    }
    DAT_70b35f84 = imp_strlen();
    DAT_70b35f88 = 10;
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba0d8);
    if (*pcVar10 == '\0') {
      puVar24 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba0c8);
      *puVar24 = 0xf8e4a8c3;
      puVar24[1] = 0xbb421172;
      *(undefined1 *)(puVar24 + 2) = 1;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71338fa4,puVar24,&DAT_70b0e000);
      puVar19 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba0d8);
      *puVar19 = 1;
    }
    DAT_70b35f8c = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba0c8);
    if (DAT_70b35f8c[8] != 0) {
      DAT_70b35f8c[8] = 0;
      *DAT_70b35f8c = *DAT_70b35f8c ^ 0xa1;
      DAT_70b35f8c[1] = DAT_70b35f8c[1] ^ 0xc1;
      DAT_70b35f8c[2] = DAT_70b35f8c[2] ^ 0x87;
      DAT_70b35f8c[3] = DAT_70b35f8c[3] ^ 0x81;
      DAT_70b35f8c[4] = DAT_70b35f8c[4] ^ 0x11;
      DAT_70b35f8c[5] = DAT_70b35f8c[5] ^ 0x7d;
      DAT_70b35f8c[6] = DAT_70b35f8c[6] ^ 0x27;
      DAT_70b35f8c[7] = DAT_70b35f8c[7] ^ 0xbb;
    }
    DAT_70b35f90 = imp_strlen();
    DAT_70b35f94 = 0xb;
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba0f8);
    if (*pcVar10 == '\0') {
      puVar24 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba0e8);
      *puVar24 = 0xd43fd672;
      *(undefined1 *)((int)puVar24 + 7) = 1;
      *(undefined4 *)((int)puVar24 + 3) = 0xfdb68dd4;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71338fcc,puVar24,&DAT_70b0e000);
      puVar19 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba0f8);
      *puVar19 = 1;
    }
    DAT_70b35f98 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba0e8);
    if (DAT_70b35f98[7] != 0) {
      DAT_70b35f98[7] = 0;
      *DAT_70b35f98 = *DAT_70b35f98 ^ 0x1b;
      DAT_70b35f98[1] = DAT_70b35f98[1] ^ 0xb1;
      DAT_70b35f98[2] = DAT_70b35f98[2] ^ 0x51;
      DAT_70b35f98[3] = DAT_70b35f98[3] ^ 0xbb;
      DAT_70b35f98[4] = ~DAT_70b35f98[4];
      DAT_70b35f98[5] = DAT_70b35f98[5] ^ 0xd3;
      DAT_70b35f98[6] = DAT_70b35f98[6] ^ 0xfd;
    }
    DAT_70b35f9c = imp_strlen();
    DAT_70b35fa0 = 0xff;
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b35fa4);
  }
  iVar11 = imp_strlen(aiStack_188 + 4);
  iVar22 = 0;
  while ((*(int *)((int)&DAT_70b35f0c + -iVar22) != iVar11 ||
         (iVar17 = imp_memcmp(*(undefined4 *)((int)&DAT_70b35f08 - iVar22),aiStack_188 + 4,iVar11),
         iVar17 != 0))) {
    iVar22 = iVar22 + -0xc;
    if (iVar22 == -0x9c) {
      imp_raise(5);
      *(undefined1 *)((int)piVar12 + 0x65) = 0xff;
LAB_7133019c:
      if (_ext___stack_chk_guard != iStack_2c) {
                    /* WARNING: Subroutine does not return */
        imp___stack_chk_fail(aiStack_188[3]);
      }
      return;
    }
  }
  cVar3 = (&DAT_70b35f10)[-iVar22];
  *(char *)((int)piVar12 + 0x65) = cVar3;
  if (cVar3 != -1) {
    *(short *)((int)piVar12 + 0x6a) = (short)aiStack_188[2];
  }
  goto LAB_7133019c;
}


// =========================================================================
// Function: FUN_7133481c
// Entry: 0x7133481c | Size: 392 bytes
// =========================================================================

undefined4 FUN_7133481c(undefined4 param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  iVar3 = FUN_7132d218();
  if (iVar3 == 0) {
    return 0;
  }
  uVar4 = imp_strlen();
  if (0xfffffff7 < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_40);
  }
  if (uVar4 < 0xb) {
    uStack_40 = CONCAT31(uStack_40._1_3_,(char)(uVar4 << 1));
    uVar6 = (uint)&uStack_40 | 1;
    if (uVar4 == 0) goto LAB_713348b4;
  }
  else {
    uVar6 = thunk_MwhHq((uVar4 | 7) + 1);
    uStack_40 = (uVar4 | 7) + 2;
    uStack_3c = uVar4;
    uStack_38 = uVar6;
  }
  imp___aeabi_memmove(uVar6,iVar3,uVar4);
LAB_713348b4:
  uVar1 = uStack_40;
  *(undefined1 *)(uVar6 + uVar4) = 0;
  uVar4 = uStack_40;
  uVar6 = uStack_3c;
  uVar2 = uStack_38;
  if ((uStack_40 & 1) != 0) {
    FUN_712f6d58(&uStack_30,uStack_38,uStack_3c);
    uVar4 = uStack_30;
    uVar6 = uStack_2c;
    uVar2 = uStack_28;
  }
  uStack_28 = uVar2;
  uStack_2c = uVar6;
  uStack_30 = uVar4;
  if ((param_3 != 0) &&
     (iVar3 = thunk_jqZqCEXeMbwWkPQPsWPXtLIXsrprfLcULRyTsuHQaLjzixodrunQzQjJ_zMKoMhElbhaqoVSUZW
                        (&uStack_30,0x23,0), iVar3 != -1)) {
    thunk_YNczSMHgYOdkxFzjwgKTXIYRUUpvMkDDRVSlSNiMseRMlCGBQDpczigERmNVdkeFrwxqEEKdkkc
              (&uStack_30,iVar3,0xffffffff);
  }
  FUN_7188617c(&uStack_30);
  if ((*param_2 & 1) != 0) {
    thunk_qNQrlu(param_2[2]);
  }
  *param_2 = uStack_30;
  param_2[1] = uStack_2c;
  param_2[2] = uStack_28;
  uStack_30 = uStack_30 & 0xffff0000;
  if ((uVar1 & 1) != 0) {
    thunk_qNQrlu(uStack_38);
  }
  uVar4 = param_2[1];
  if (((byte)*param_2 & 1) == 0) {
    uVar4 = (uint)(byte)((byte)*param_2 >> 1);
  }
  if (uVar4 == 0) {
    uVar5 = FUN_7133481c(param_1,param_2,param_3);
    return uVar5;
  }
  return 1;
}


// =========================================================================
// Function: FUN_71334b0c
// Entry: 0x71334b0c | Size: 252 bytes
// =========================================================================

void FUN_71334b0c(int param_1,uint param_2)

{
  byte bVar1;
  
  *(byte *)(param_1 + 0x28) =
       ((byte)(param_2 >> 1) & 4 | ((param_2 & 0xc) != 0) << 1 | (byte)(param_2 >> 3) & 0x18 |
        (byte)(param_2 >> 0xf) & 0x40 | *(byte *)(param_1 + 0x28) & 0xa1) ^ 0x40;
  if ((param_2 & 0x200) != 0) {
    *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) & 0x87 | 0x20;
  }
  if ((param_2 & 0x400) != 0) {
    *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) & 0x87 | 0x28;
  }
  if ((param_2 & 0x800) != 0) {
    *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) & 0x87 | 0x38;
  }
  if ((param_2 & 0x2000) != 0) {
    *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) & 0x87 | 8;
  }
  if ((param_2 & 0x4000) != 0) {
    *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) & 0x87 | 0x10;
  }
  if ((param_2 & 0x80000) != 0) {
    *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) & 0x87 | 0x50;
  }
  if ((param_2 & 0x100000) != 0) {
    *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) & 0x87 | 0x30;
  }
  bVar1 = *(byte *)(param_1 + 0x29);
  if ((param_2 & 0x400000) != 0) {
    bVar1 = bVar1 & 0x82 | 0x58;
  }
  *(byte *)(param_1 + 0x29) = (byte)(param_2 >> 0xd) & 4 | (byte)param_2 & 1 | bVar1 & 0xfa;
  return;
}


// =========================================================================
// Function: FUN_71334c20
// Entry: 0x71334c20 | Size: 1900 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71334c20(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  char *pcVar8;
  byte *pbVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  uint *puVar19;
  uint uStack_108;
  int iStack_104;
  uint uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined1 auStack_f4 [100];
  undefined1 auStack_90 [100];
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  uStack_f8 = 0xffffffff;
  pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba118);
  if (*pcVar8 == '\0') {
    puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba108);
    *puVar12 = 0x2491ff9e;
    puVar12[1] = 0x8814addc;
    puVar12[2] = 0x21d7be9b;
    *(undefined1 *)((int)puVar12 + 0xf) = 1;
    *(undefined4 *)((int)puVar12 + 0xb) = 0x31e98a21;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71338ff4,puVar12,&DAT_70b0e000);
    puVar13 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba118);
    *puVar13 = 1;
  }
  pbVar9 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba108);
  if (pbVar9[0xf] != 0) {
    *pbVar9 = *pbVar9 ^ 0xbb;
    pbVar9[1] = pbVar9[1] ^ 0x9b;
    pbVar9[2] = pbVar9[2] ^ 0xb1;
    pbVar9[3] = pbVar9[3] ^ 1;
    pbVar9[0xf] = 0;
    pbVar9[4] = pbVar9[4] ^ 0xaf;
    pbVar9[5] = pbVar9[5] ^ 0x8d;
    pbVar9[6] = pbVar9[6] ^ 0x31;
    pbVar9[7] = pbVar9[7] ^ 0xfb;
    pbVar9[8] = pbVar9[8] ^ 0xbb;
    pbVar9[9] = pbVar9[9] ^ 0x9b;
    pbVar9[10] = pbVar9[10] ^ 0xb1;
    pbVar9[0xb] = pbVar9[0xb] ^ 1;
    pbVar9[0xc] = pbVar9[0xc] ^ 0xaf;
    pbVar9[0xd] = pbVar9[0xd] ^ 0x8d;
    pbVar9[0xe] = pbVar9[0xe] ^ 0x31;
  }
  puVar19 = &uStack_100;
  iVar10 = imp_sscanf(param_1,pbVar9,&uStack_f8,auStack_90,auStack_f4,&uStack_fc,puVar19);
  if ((iVar10 != 5) || (iVar10 = FUN_71ba2d10(uStack_fc,0x40800000), iVar10 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba138);
    if (*pcVar8 == '\0') {
      puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba128);
      *(undefined1 *)(puVar12 + 3) = 1;
      *puVar12 = 0x9e23b964;
      puVar12[1] = 0x6cdc95fa;
      puVar12[2] = 0xbb67f861;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71339024,puVar12,&DAT_70b0e000);
      puVar13 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba138);
      *puVar13 = 1;
    }
    pbVar9 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba128);
    if (pbVar9[0xc] != 0) {
      *pbVar9 = *pbVar9 ^ 0x41;
      pbVar9[1] = pbVar9[1] ^ 0xdd;
      pbVar9[2] = pbVar9[2] ^ 3;
      pbVar9[3] = pbVar9[3] ^ 0xbb;
      pbVar9[0xc] = 0;
      pbVar9[4] = pbVar9[4] ^ 0x89;
      pbVar9[5] = pbVar9[5] ^ 0xb5;
      pbVar9[6] = pbVar9[6] ^ 0xf9;
      pbVar9[7] = pbVar9[7] ^ 0x1f;
      pbVar9[8] = pbVar9[8] ^ 0x41;
      pbVar9[9] = pbVar9[9] ^ 0xdd;
      pbVar9[10] = pbVar9[10] ^ 3;
      pbVar9[0xb] = pbVar9[0xb] ^ 0xbb;
    }
    iVar10 = imp_sscanf(param_1,pbVar9,&uStack_f8,auStack_90,auStack_f4,&iStack_104);
    if (iVar10 != 4) {
      uVar11 = 0xffffffff;
      goto LAB_71335164;
    }
    if (iStack_104 == 3) {
LAB_71335010:
      pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba198);
      if (*pcVar8 == '\0') {
        puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba188);
        *(undefined1 *)(puVar12 + 6) = 1;
        uVar6 = DAT_70073e7c;
        uVar5 = DAT_70073e78;
        uVar4 = DAT_70073e74;
        uVar3 = DAT_70073e70;
        uVar11 = DAT_70073e6c;
        *puVar12 = DAT_70073e68;
        puVar12[1] = uVar11;
        puVar12[2] = uVar3;
        puVar12[3] = uVar4;
        puVar12[4] = uVar5;
        puVar12[5] = uVar6;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_713390bc,puVar12,&DAT_70b0e000);
        puVar13 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba198);
        *puVar13 = 1;
      }
      iVar10 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba188);
      if (*(char *)(iVar10 + 0x18) != '\0') {
        uVar14 = 0;
        uVar17 = 0;
        do {
          iVar15 = (uVar14 & 7) * 8;
          uVar16 = iVar15 - 0x20;
          bVar7 = (byte)(0x37ed657d >> iVar15) |
                  (byte)(0x734b83d7 << ((uVar14 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar16) {
            bVar7 = (byte)(0x734b83d7 >> (uVar16 & 0xff));
          }
          *(byte *)(iVar10 + uVar14) = *(byte *)(iVar10 + uVar14) ^ bVar7;
          bVar18 = 0xfffffffe < uVar14;
          bVar1 = uVar17 == 0;
          bVar2 = (0x16 < uVar14) <= uVar17;
          uVar14 = uVar14 + 1;
          uVar17 = uVar17 + bVar18;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar10 + 0x18) = 0;
      }
      puVar19 = &uStack_108;
    }
    else {
      if (iStack_104 == 2) {
        pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba178);
        if (*pcVar8 == '\0') {
          puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba168);
          *(undefined1 *)((int)puVar12 + 0x15) = 1;
          uVar5 = DAT_70073e60;
          uVar4 = DAT_70073e5c;
          uVar3 = DAT_70073e58;
          uVar11 = DAT_70073e54;
          *puVar12 = DAT_70073e50;
          puVar12[1] = uVar11;
          puVar12[2] = uVar3;
          puVar12[3] = uVar4;
          puVar12[4] = uVar5;
          *(undefined1 *)(puVar12 + 5) = DAT_70073e64;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_71339084,puVar12,&DAT_70b0e000);
          puVar13 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba178);
          *puVar13 = 1;
        }
        iVar10 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba168);
        if (*(char *)(iVar10 + 0x15) != '\0') {
          uVar14 = 0;
          uVar17 = 0;
          do {
            iVar15 = (uVar14 & 7) * 8;
            uVar16 = iVar15 - 0x20;
            bVar7 = (byte)(0x11e55db1 >> iVar15) |
                    (byte)(-0x2ed062f3 << ((uVar14 & 7) * -8 + 0x20 & 0xff));
            if (-1 < (int)uVar16) {
              bVar7 = (byte)(0xd12f9d0d >> (uVar16 & 0xff));
            }
            *(byte *)(iVar10 + uVar14) = *(byte *)(iVar10 + uVar14) ^ bVar7;
            bVar18 = 0xfffffffe < uVar14;
            bVar1 = uVar17 == 0;
            bVar2 = (0x13 < uVar14) <= uVar17;
            uVar14 = uVar14 + 1;
            uVar17 = uVar17 + bVar18;
          } while (bVar1 && bVar2);
          *(undefined1 *)(iVar10 + 0x15) = 0;
        }
        imp_sscanf(param_1,iVar10,&uStack_f8,auStack_90,auStack_f4,&iStack_104,&uStack_fc,
                   &uStack_108,puVar19);
        goto LAB_71335010;
      }
      if (iStack_104 != 1) goto LAB_713350e8;
      pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba158);
      if (*pcVar8 == '\0') {
        puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba148);
        *(undefined1 *)((int)puVar12 + 0x12) = 1;
        uVar4 = DAT_70073e44;
        uVar3 = DAT_70073e40;
        uVar11 = DAT_70073e3c;
        *puVar12 = DAT_70073e38;
        puVar12[1] = uVar11;
        puVar12[2] = uVar3;
        puVar12[3] = uVar4;
        *(undefined2 *)(puVar12 + 4) = DAT_70073e48;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71339050,puVar12,&DAT_70b0e000);
        puVar13 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba158);
        *puVar13 = 1;
      }
      iVar10 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba148);
      if (*(char *)(iVar10 + 0x12) != '\0') {
        uVar14 = 0;
        uVar17 = 0;
        do {
          iVar15 = (uVar14 & 7) * 8;
          uVar16 = iVar15 - 0x20;
          bVar7 = (byte)(0x51514b97 >> iVar15) |
                  (byte)(-0xcb81a83 << ((uVar14 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar16) {
            bVar7 = (byte)(0xf347e57d >> (uVar16 & 0xff));
          }
          *(byte *)(iVar10 + uVar14) = *(byte *)(iVar10 + uVar14) ^ bVar7;
          bVar18 = 0xfffffffe < uVar14;
          bVar1 = uVar17 == 0;
          bVar2 = (0x10 < uVar14) <= uVar17;
          uVar14 = uVar14 + 1;
          uVar17 = uVar17 + bVar18;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar10 + 0x12) = 0;
      }
    }
    imp_sscanf(param_1,iVar10,&uStack_f8,auStack_90,auStack_f4,&iStack_104,&uStack_fc,puVar19);
  }
LAB_713350e8:
  if ((uStack_100 & 0x1000) == 0) {
    iVar10 = FUN_713fe2b0();
  }
  else {
    iVar10 = FUN_713fe938(uStack_f8);
  }
  *(undefined4 *)(iVar10 + 0x30) = uStack_fc;
  imp___strncpy_chk2(iVar10 + 8,auStack_90,0x14,0x15,100);
  uVar11 = FUN_7133efa0(auStack_90);
  *(undefined4 *)(iVar10 + 4) = uVar11;
  uVar11 = FUN_71361410(uStack_f8);
  FUN_713f9924(iVar10,auStack_f4,uVar11);
  FUN_71334b0c(iVar10,uStack_100);
  uVar11 = uStack_f8;
LAB_71335164:
  if (_ext___stack_chk_guard == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail(uVar11);
}


// =========================================================================
// Function: FUN_71335c2c
// Entry: 0x71335c2c | Size: 296 bytes
// =========================================================================

int FUN_71335c2c(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint extraout_r1;
  uint extraout_r1_00;
  int *unaff_r4;
  uint uVar5;
  
  uVar1 = DAT_70b35df4;
  if (DAT_70b35df4 != 0) {
    uVar2 = DAT_70b35df4 - (DAT_70b35df4 >> 1 & 0x55555555);
    uVar2 = (uVar2 & 0x33333333) + (uVar2 >> 2 & 0x33333333);
    uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
    if (uVar2 < 2) {
      uVar5 = DAT_70b35df4 - 1 & param_1;
    }
    else {
      uVar5 = param_1;
      if (DAT_70b35df4 <= param_1) {
        FUN_71ba33fc(param_1,DAT_70b35df4);
        uVar5 = extraout_r1;
      }
    }
    piVar3 = *(int **)(DAT_70b35df0 + uVar5 * 4);
    if (piVar3 != (int *)0x0) {
      unaff_r4 = (int *)*piVar3;
    }
    if (piVar3 != (int *)0x0 && unaff_r4 != (int *)0x0) {
      do {
        uVar4 = unaff_r4[1];
        if (uVar4 == param_1) {
          if (unaff_r4[2] == param_1) {
            return unaff_r4[3];
          }
        }
        else {
          if (uVar2 < 2) {
            uVar4 = uVar4 & uVar1 - 1;
          }
          else if (uVar1 <= uVar4) {
            FUN_71ba33fc(uVar4,uVar1);
            uVar4 = extraout_r1_00;
          }
          if (uVar4 != uVar5) {
            return 0;
          }
        }
        unaff_r4 = (int *)*unaff_r4;
      } while (unaff_r4 != (int *)0x0);
    }
  }
  return 0;
}


// =========================================================================
// Function: FUN_713393b8
// Entry: 0x713393b8 | Size: 696 bytes
// =========================================================================

void FUN_713393b8(int *param_1,int *param_2,uint *param_3,undefined4 param_4,undefined4 *param_5)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint extraout_r1;
  int *piVar7;
  int iVar8;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  uint unaff_r10;
  
  uVar11 = param_2[1];
  uVar9 = *param_3;
  if (uVar11 != 0) {
    uVar2 = uVar11 - (uVar11 >> 1 & 0x55555555);
    uVar2 = (uVar2 & 0x33333333) + (uVar2 >> 2 & 0x33333333);
    uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
    if (uVar2 < 2) {
      unaff_r10 = uVar11 - 1 & uVar9;
    }
    else {
      unaff_r10 = uVar9;
      if (uVar11 <= uVar9) {
        FUN_71ba33fc(uVar9,uVar11);
        unaff_r10 = extraout_r1;
      }
    }
    puVar3 = *(undefined4 **)(*param_2 + unaff_r10 * 4);
    piVar10 = param_1;
    if (puVar3 != (undefined4 *)0x0) {
      piVar10 = (int *)*puVar3;
    }
    if (puVar3 != (undefined4 *)0x0 && piVar10 != (int *)0x0) {
      do {
        uVar6 = piVar10[1];
        if (uVar6 == uVar9) {
          if (piVar10[2] == uVar9) {
            uVar1 = 0;
            goto LAB_71339654;
          }
        }
        else {
          if (uVar2 < 2) {
            uVar6 = uVar6 & uVar11 - 1;
          }
          else if (uVar11 <= uVar6) {
            FUN_71ba33fc(uVar6,uVar11);
            uVar6 = extraout_r1_00;
          }
          if (uVar6 != unaff_r10) break;
        }
        piVar10 = (int *)*piVar10;
      } while (piVar10 != (int *)0x0);
    }
  }
  piVar10 = (int *)thunk_MwhHq(0x10);
  piVar7 = (int *)*param_5;
  piVar10[1] = uVar9;
  *piVar10 = 0;
  iVar8 = *piVar7;
  piVar10[3] = 0;
  piVar10[2] = iVar8;
  uVar4 = FUN_71ba1e0c(uVar11);
  iVar8 = param_2[3];
  iVar12 = param_2[4];
  uVar4 = FUN_71ba21e8(iVar12,uVar4);
  uVar5 = FUN_71ba1e0c(iVar8 + 1);
  if ((uVar11 == 0) || (iVar8 = FUN_71ba2d10(uVar4,uVar5), iVar8 != 0)) {
    uVar2 = 1;
    if ((2 < uVar11) && (uVar2 = 0, (uVar11 & uVar11 - 1) != 0)) {
      uVar2 = 1;
    }
    uVar2 = uVar2 | uVar11 << 1;
    FUN_71ba13e0(uVar5,iVar12);
    imp_ceilf();
    uVar11 = FUN_71ba1910();
    if (uVar2 <= uVar11) {
      uVar2 = uVar11;
    }
    FUN_713397f4(param_2,uVar2);
    uVar11 = param_2[1];
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_r10 = uVar11 - 1 & uVar9;
    }
    else {
      unaff_r10 = uVar9;
      if (uVar11 <= uVar9) {
        FUN_71ba33fc(uVar9,uVar11);
        unaff_r10 = extraout_r1_01;
      }
    }
  }
  iVar8 = *param_2;
  piVar7 = *(int **)(iVar8 + unaff_r10 * 4);
  if (piVar7 == (int *)0x0) {
    piVar7 = param_2 + 2;
    *piVar10 = *piVar7;
    *piVar7 = (int)piVar10;
    *(int **)(iVar8 + unaff_r10 * 4) = piVar7;
    if (*piVar10 == 0) goto LAB_71339644;
    uVar9 = *(uint *)(*piVar10 + 4);
    if ((uVar11 & uVar11 - 1) == 0) {
      uVar9 = uVar9 & uVar11 - 1;
    }
    else if (uVar11 <= uVar9) {
      FUN_71ba33fc(uVar9,uVar11);
      uVar9 = extraout_r1_02;
    }
    piVar7 = (int *)(*param_2 + uVar9 * 4);
  }
  else {
    *piVar10 = *piVar7;
  }
  *piVar7 = (int)piVar10;
LAB_71339644:
  param_2[3] = param_2[3] + 1;
  uVar1 = 1;
LAB_71339654:
  *(undefined1 *)(param_1 + 1) = uVar1;
  *param_1 = (int)piVar10;
  return;
}


// =========================================================================
// Function: FUN_713397f4
// Entry: 0x713397f4 | Size: 692 bytes
// =========================================================================

void FUN_713397f4(int *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  
  uVar1 = 2;
  if ((param_2 != 1) && (uVar1 = param_2, (param_2 & param_2 - 1) != 0)) {
    uVar1 = thunk_SI_jHZGHEkRozkgfjpWJMmUiRrdj(param_2);
  }
  uVar6 = param_1[1];
  if (uVar1 <= uVar6) {
    if (uVar1 < uVar6) {
      iVar3 = param_1[4];
      uVar2 = FUN_71ba1e0c(param_1[3]);
      FUN_71ba13e0(uVar2,iVar3);
      imp_ceilf();
      uVar9 = FUN_71ba1910();
      if ((uVar6 < 3) ||
         (uVar5 = uVar6 - (uVar6 >> 1 & 0x55555555),
         uVar5 = (uVar5 & 0x33333333) + (uVar5 >> 2 & 0x33333333),
         1 < (uVar5 + (uVar5 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18)) {
        uVar9 = thunk_SI_jHZGHEkRozkgfjpWJMmUiRrdj(uVar9);
      }
      else if (1 < uVar9) {
        uVar9 = 1 << (0x20U - LZCOUNT(uVar9 - 1) & 0xff);
      }
      if (uVar9 < uVar1) {
        uVar9 = uVar1;
      }
      uVar1 = uVar9;
      if (uVar9 < uVar6) goto LAB_71339840;
    }
    return;
  }
LAB_71339840:
  if (uVar1 == 0) {
    iVar3 = *param_1;
    *param_1 = 0;
    if (iVar3 != 0) {
      thunk_qNQrlu();
    }
    param_1[1] = 0;
  }
  else {
    if (0x3fffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_712f6cf0();
    }
    iVar3 = thunk_MwhHq(uVar1 << 2);
    iVar4 = *param_1;
    *param_1 = iVar3;
    if (iVar4 != 0) {
      thunk_qNQrlu();
    }
    uVar6 = 0;
    param_1[1] = uVar1;
    do {
      *(undefined4 *)(*param_1 + uVar6 * 4) = 0;
      uVar6 = uVar6 + 1;
    } while (uVar1 != uVar6);
    puVar7 = (undefined4 *)param_1[2];
    if (puVar7 != (undefined4 *)0x0) {
      uVar9 = puVar7[1];
      uVar6 = uVar1 - (uVar1 >> 1 & 0x55555555);
      uVar6 = (uVar6 & 0x33333333) + (uVar6 >> 2 & 0x33333333);
      uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
      if (uVar6 < 2) {
        uVar9 = uVar9 & uVar1 - 1;
      }
      else if (uVar1 <= uVar9) {
        FUN_71ba33fc(uVar9,uVar1);
        uVar9 = extraout_r1;
      }
      *(int **)(*param_1 + uVar9 * 4) = param_1 + 2;
      while (puVar8 = puVar7, puVar7 = (undefined4 *)*puVar8, puVar7 != (undefined4 *)0x0) {
        uVar5 = puVar7[1];
        if (uVar6 < 2) {
          uVar5 = uVar5 & uVar1 - 1;
        }
        else if (uVar1 <= uVar5) {
          FUN_71ba33fc(uVar5,uVar1);
          uVar5 = extraout_r1_00;
        }
        if (uVar5 != uVar9) {
          if (*(int *)(*param_1 + uVar5 * 4) == 0) {
            *(undefined4 **)(*param_1 + uVar5 * 4) = puVar8;
            uVar9 = uVar5;
          }
          else {
            *puVar8 = *puVar7;
            *puVar7 = **(undefined4 **)(*param_1 + uVar5 * 4);
            **(undefined4 **)(*param_1 + uVar5 * 4) = puVar7;
            puVar7 = puVar8;
          }
        }
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71339d10
// Entry: 0x71339d10 | Size: 20 bytes
// =========================================================================

void FUN_71339d10(void)

{
  *DAT_70b35fa8 = 0;
  return;
}


// =========================================================================
// Function: FUN_71339d5c
// Entry: 0x71339d5c | Size: 416 bytes
// =========================================================================

void FUN_71339d5c(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b35fb4 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b35fb4), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba358,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba348);
      *(undefined1 *)((int)puVar10 + 0x3e) = 1;
      uVar6 = DAT_70074020;
      uVar5 = DAT_7007401c;
      uVar4 = DAT_70074018;
      uVar3 = DAT_70074014;
      *puVar10 = DAT_70074010;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_70074034;
      uVar5 = DAT_70074030;
      uVar4 = DAT_7007402c;
      uVar3 = DAT_70074028;
      puVar10[5] = DAT_70074024;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      uVar6 = DAT_70074048;
      uVar5 = DAT_70074044;
      uVar4 = DAT_70074040;
      uVar3 = DAT_7007403c;
      puVar10[10] = DAT_70074038;
      puVar10[0xb] = uVar3;
      puVar10[0xc] = uVar4;
      puVar10[0xd] = uVar5;
      puVar10[0xe] = uVar6;
      *(undefined2 *)(puVar10 + 0xf) = DAT_7007404c;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7133aa44,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba358);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba348);
    if (*(char *)(iVar8 + 0x3e) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xc98f5399 >> iVar14) |
                (byte)(-0x3c6875 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xffc3978b >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x3c < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x3e) = 0;
    }
    DAT_70b35fb0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b35fb4);
  }
                    /* WARNING: Could not recover jumptable at 0x71339d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b35fb0)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_7133a194
// Entry: 0x7133a194 | Size: 396 bytes
// =========================================================================

void FUN_7133a194(undefined4 param_1)

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
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b35fbc & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b35fbc), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba378);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba368);
      *(undefined1 *)((int)puVar11 + 0x27) = 1;
      uVar5 = DAT_7007405c;
      uVar4 = DAT_70074058;
      uVar3 = DAT_70074054;
      *puVar11 = DAT_70074050;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      uVar6 = DAT_70074070;
      uVar5 = DAT_7007406c;
      uVar4 = DAT_70074068;
      uVar3 = DAT_70074064;
      puVar11[4] = DAT_70074060;
      puVar11[5] = uVar3;
      puVar11[6] = uVar4;
      puVar11[7] = uVar5;
      puVar11[8] = uVar6;
      uVar7 = DAT_70074076;
      *(undefined2 *)(puVar11 + 9) = DAT_70074074;
      *(undefined1 *)((int)puVar11 + 0x26) = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7133aa94,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba378);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba368);
    if (*(char *)(iVar9 + 0x27) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x851d8be7 >> iVar15) |
                (byte)(-0x642a6a51 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0x9bd595af >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x25 < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x27) = 0;
    }
    DAT_70b35fb8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b35fbc);
  }
                    /* WARNING: Could not recover jumptable at 0x7133a1c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b35fb8)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7133a5b8
// Entry: 0x7133a5b8 | Size: 388 bytes
// =========================================================================

void FUN_7133a5b8(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b35fc4 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b35fc4), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba398);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba388);
      *(undefined1 *)((int)puVar10 + 0x25) = 1;
      uVar5 = DAT_70074084;
      uVar4 = DAT_70074080;
      uVar3 = DAT_7007407c;
      *puVar10 = DAT_70074078;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_70074098;
      uVar5 = DAT_70074094;
      uVar4 = DAT_70074090;
      uVar3 = DAT_7007408c;
      puVar10[4] = DAT_70074088;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      *(undefined1 *)(puVar10 + 9) = DAT_7007409c;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7133aae4,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba398);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba388);
    if (*(char *)(iVar8 + 0x25) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xbb935373 >> iVar14) |
                (byte)(0x39e3c19b << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x39e3c19b >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x23 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x25) = 0;
    }
    DAT_70b35fc0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b35fc4);
  }
                    /* WARNING: Could not recover jumptable at 0x7133a5e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b35fc0)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7133b360
// Entry: 0x7133b360 | Size: 388 bytes
// =========================================================================

void FUN_7133b360(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b35fdc & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b35fdc), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba3b8);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba3a8);
      *(undefined1 *)((int)puVar10 + 0x2a) = 1;
      uVar6 = DAT_700740b0;
      uVar5 = DAT_700740ac;
      uVar4 = DAT_700740a8;
      uVar3 = DAT_700740a4;
      *puVar10 = DAT_700740a0;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_700740c4;
      uVar5 = DAT_700740c0;
      uVar4 = DAT_700740bc;
      uVar3 = DAT_700740b8;
      puVar10[5] = DAT_700740b4;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      *(undefined2 *)(puVar10 + 10) = DAT_700740c8;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7133bfc0,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba3b8);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba3a8);
    if (*(char *)(iVar8 + 0x2a) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x93a3c787 >> iVar14) |
                (byte)(0x47abcda5 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x47abcda5 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x28 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x2a) = 0;
    }
    DAT_70b35fd8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b35fdc);
  }
                    /* WARNING: Could not recover jumptable at 0x7133b38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b35fd8)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7133b77c
// Entry: 0x7133b77c | Size: 380 bytes
// =========================================================================

void FUN_7133b77c(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b35fe4 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b35fe4), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba3d8);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba3c8);
      *(undefined1 *)(puVar10 + 9) = 1;
      uVar5 = DAT_700740dc;
      uVar4 = DAT_700740d8;
      uVar3 = DAT_700740d4;
      *puVar10 = DAT_700740d0;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_700740f0;
      uVar5 = DAT_700740ec;
      uVar4 = DAT_700740e8;
      uVar3 = DAT_700740e4;
      puVar10[4] = DAT_700740e0;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7133c010,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba3d8);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba3c8);
    if (*(char *)(iVar8 + 0x24) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xf7f5f1d5 >> iVar14) |
                (byte)(-0x6ede64e1 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x91219b1f >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x22 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x24) = 0;
    }
    DAT_70b35fe0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b35fe4);
  }
                    /* WARNING: Could not recover jumptable at 0x7133b7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b35fe0)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7133bb90
// Entry: 0x7133bb90 | Size: 408 bytes
// =========================================================================

void FUN_7133bb90(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b35fec & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b35fec), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba3f8,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba3e8);
      *(undefined1 *)((int)puVar10 + 0x2a) = 1;
      uVar6 = DAT_70074108;
      uVar5 = DAT_70074104;
      uVar4 = DAT_70074100;
      uVar3 = DAT_700740fc;
      *puVar10 = DAT_700740f8;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_7007411c;
      uVar5 = DAT_70074118;
      uVar4 = DAT_70074114;
      uVar3 = DAT_70074110;
      puVar10[5] = DAT_7007410c;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      *(undefined2 *)(puVar10 + 10) = DAT_70074120;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7133c060,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba3f8);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba3e8);
    if (*(char *)(iVar8 + 0x2a) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x2549d30d >> iVar14) |
                (byte)(0x65617345 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x65617345 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x28 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x2a) = 0;
    }
    DAT_70b35fe8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b35fec);
  }
                    /* WARNING: Could not recover jumptable at 0x7133bbc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b35fe8)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_7133c0b0
// Entry: 0x7133c0b0 | Size: 396 bytes
// =========================================================================

void FUN_7133c0b0(undefined4 param_1)

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
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b36000 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b36000), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba478);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba468);
      *(undefined1 *)((int)puVar11 + 0x27) = 1;
      uVar5 = DAT_7007418c;
      uVar4 = DAT_70074188;
      uVar3 = DAT_70074184;
      *puVar11 = DAT_70074180;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      uVar6 = DAT_700741a0;
      uVar5 = DAT_7007419c;
      uVar4 = DAT_70074198;
      uVar3 = DAT_70074194;
      puVar11[4] = DAT_70074190;
      puVar11[5] = uVar3;
      puVar11[6] = uVar4;
      puVar11[7] = uVar5;
      puVar11[8] = uVar6;
      uVar7 = DAT_700741a6;
      *(undefined2 *)(puVar11 + 9) = DAT_700741a4;
      *(undefined1 *)((int)puVar11 + 0x26) = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7133d1c0,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba478);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba468);
    if (*(char *)(iVar9 + 0x27) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x45a9b135 >> iVar15) |
                (byte)(-0x760ad4c7 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0x89f52b39 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x25 < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x27) = 0;
    }
    DAT_70b35ffc = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b36000);
  }
                    /* WARNING: Could not recover jumptable at 0x7133c0dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b35ffc)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7133c4d4
// Entry: 0x7133c4d4 | Size: 364 bytes
// =========================================================================

void FUN_7133c4d4(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  byte bVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b36008 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b36008), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba498);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba488);
      *(undefined1 *)((int)puVar10 + 0x17) = 1;
      uVar6 = DAT_700741b8;
      uVar5 = DAT_700741b4;
      uVar4 = DAT_700741b0;
      uVar3 = DAT_700741ac;
      *puVar10 = DAT_700741a8;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar7 = DAT_700741be;
      *(undefined2 *)(puVar10 + 5) = DAT_700741bc;
      *(undefined1 *)((int)puVar10 + 0x16) = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7130cd7c,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba498);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba488);
    if (*(char *)(iVar8 + 0x17) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar16 = (byte)(0xd93d3145 >> iVar14) |
                 (byte)(-0x1840f2d9 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar16 = (byte)(0xe7bf0d27 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar16;
        bVar17 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x15 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x17) = 0;
    }
    DAT_70b36004 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b36008);
  }
                    /* WARNING: Could not recover jumptable at 0x7133c500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b36004)();
  return;
}


// =========================================================================
// Function: FUN_7133c8d8
// Entry: 0x7133c8d8 | Size: 364 bytes
// =========================================================================

void FUN_7133c8d8(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  byte bVar14;
  bool bVar15;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b36010 & 1) == 0) && (iVar6 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b36010), iVar6 != 0)) {
    pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba4b8);
    if (*pcVar7 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba4a8);
      *(undefined1 *)((int)puVar8 + 0x1e) = 1;
      uVar4 = DAT_700741c8;
      uVar3 = DAT_700741c4;
      *puVar8 = DAT_700741c0;
      puVar8[1] = uVar3;
      puVar8[2] = uVar4;
      uVar5 = DAT_700741d8;
      uVar4 = DAT_700741d4;
      uVar3 = DAT_700741d0;
      puVar8[3] = DAT_700741cc;
      puVar8[4] = uVar3;
      puVar8[5] = uVar4;
      puVar8[6] = uVar5;
      *(undefined2 *)(puVar8 + 7) = DAT_700741dc;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7133d210,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba4b8);
      *puVar9 = 1;
    }
    iVar6 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba4a8);
    if (*(char *)(iVar6 + 0x1e) != '\0') {
      uVar10 = 0;
      uVar11 = 0;
      do {
        iVar12 = (uVar10 & 7) * 8;
        uVar13 = iVar12 - 0x20;
        bVar14 = (byte)(0xb4d771d >> iVar12) |
                 (byte)(-0x44defc41 << ((uVar10 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar13) {
          bVar14 = (byte)(0xbb2103bf >> (uVar13 & 0xff));
        }
        *(byte *)(iVar6 + uVar10) = *(byte *)(iVar6 + uVar10) ^ bVar14;
        bVar15 = 0xfffffffe < uVar10;
        bVar1 = uVar11 == 0;
        bVar2 = (0x1c < uVar10) <= uVar11;
        uVar10 = uVar10 + 1;
        uVar11 = uVar11 + bVar15;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar6 + 0x1e) = 0;
    }
    DAT_70b3600c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar6,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b36010);
  }
                    /* WARNING: Could not recover jumptable at 0x7133c904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b3600c)();
  return;
}


// =========================================================================
// Function: FUN_7133dec4
// Entry: 0x7133dec4 | Size: 396 bytes
// =========================================================================

void FUN_7133dec4(undefined4 param_1)

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
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b36038 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b36038), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba4f8);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba4e8);
      *(undefined1 *)((int)puVar11 + 0x2b) = 1;
      uVar6 = DAT_70074210;
      uVar5 = DAT_7007420c;
      uVar4 = DAT_70074208;
      uVar3 = DAT_70074204;
      *puVar11 = DAT_70074200;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      uVar6 = DAT_70074224;
      uVar5 = DAT_70074220;
      uVar4 = DAT_7007421c;
      uVar3 = DAT_70074218;
      puVar11[5] = DAT_70074214;
      puVar11[6] = uVar3;
      puVar11[7] = uVar4;
      puVar11[8] = uVar5;
      puVar11[9] = uVar6;
      uVar7 = DAT_7007422a;
      *(undefined2 *)(puVar11 + 10) = DAT_70074228;
      *(undefined1 *)((int)puVar11 + 0x2a) = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7133eb00,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba4f8);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba4e8);
    if (*(char *)(iVar9 + 0x2b) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0xe569d1dd >> iVar15) |
                (byte)(0x750729cb << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0x750729cb >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x29 < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x2b) = 0;
    }
    DAT_70b36034 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b36038);
  }
                    /* WARNING: Could not recover jumptable at 0x7133def0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b36034)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7133e2e8
// Entry: 0x7133e2e8 | Size: 388 bytes
// =========================================================================

void FUN_7133e2e8(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b36040 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b36040), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba518);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba508);
      *(undefined1 *)((int)puVar10 + 0x2a) = 1;
      uVar6 = DAT_70074240;
      uVar5 = DAT_7007423c;
      uVar4 = DAT_70074238;
      uVar3 = DAT_70074234;
      *puVar10 = DAT_70074230;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_70074254;
      uVar5 = DAT_70074250;
      uVar4 = DAT_7007424c;
      uVar3 = DAT_70074248;
      puVar10[5] = DAT_70074244;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      *(undefined2 *)(puVar10 + 10) = DAT_70074258;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7133bfc0,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba518);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba508);
    if (*(char *)(iVar8 + 0x2a) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x93a3c787 >> iVar14) |
                (byte)(0x47abcda5 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x47abcda5 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x28 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x2a) = 0;
    }
    DAT_70b3603c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b36040);
  }
                    /* WARNING: Could not recover jumptable at 0x7133e314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b3603c)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7133e704
// Entry: 0x7133e704 | Size: 356 bytes
// =========================================================================

void FUN_7133e704(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  byte bVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b36048 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b36048), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba538);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba528);
      *(undefined1 *)(puVar9 + 9) = 1;
      uVar5 = DAT_7007426c;
      uVar4 = DAT_70074268;
      uVar3 = DAT_70074264;
      *puVar9 = DAT_70074260;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      uVar6 = DAT_70074280;
      uVar5 = DAT_7007427c;
      uVar4 = DAT_70074278;
      uVar3 = DAT_70074274;
      puVar9[4] = DAT_70074270;
      puVar9[5] = uVar3;
      puVar9[6] = uVar4;
      puVar9[7] = uVar5;
      puVar9[8] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7133c010,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba538);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba528);
    if (*(char *)(iVar7 + 0x24) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar15 = (byte)(0xf7f5f1d5 >> iVar13) |
                 (byte)(-0x6ede64e1 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar15 = (byte)(0x91219b1f >> (uVar14 & 0xff));
        }
        *(byte *)(iVar7 + uVar11) = *(byte *)(iVar7 + uVar11) ^ bVar15;
        bVar16 = 0xfffffffe < uVar11;
        bVar1 = uVar12 == 0;
        bVar2 = (0x22 < uVar11) <= uVar12;
        uVar11 = uVar11 + 1;
        uVar12 = uVar12 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar7 + 0x24) = 0;
    }
    DAT_70b36044 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b36048);
  }
                    /* WARNING: Could not recover jumptable at 0x7133e730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b36044)();
  return;
}


// =========================================================================
// Function: FUN_7133efa0
// Entry: 0x7133efa0 | Size: 380 bytes
// =========================================================================

void FUN_7133efa0(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b3605c & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b3605c), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba578);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba568);
      *(undefined1 *)(puVar11 + 0xb) = 1;
      uVar6 = DAT_700742b0;
      uVar5 = DAT_700742ac;
      uVar4 = DAT_700742a8;
      uVar3 = DAT_700742a4;
      *puVar11 = DAT_700742a0;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      uVar7 = DAT_700742c8;
      uVar6 = DAT_700742c4;
      uVar5 = DAT_700742c0;
      uVar4 = DAT_700742bc;
      uVar3 = DAT_700742b8;
      puVar11[5] = DAT_700742b4;
      puVar11[6] = uVar3;
      puVar11[7] = uVar4;
      puVar11[8] = uVar5;
      puVar11[9] = uVar6;
      puVar11[10] = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7133f3b4,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba578);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba568);
    if (*(char *)(iVar9 + 0x2c) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0xc77d4573 >> iVar15) |
                (byte)(-0x164a4c4f << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0xe9b5b3b1 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x2a < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x2c) = 0;
    }
    DAT_70b36058 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b3605c);
  }
                    /* WARNING: Could not recover jumptable at 0x7133efcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b36058)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7133f834
// Entry: 0x7133f834 | Size: 60 bytes
// =========================================================================

int FUN_7133f834(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_7136cdfc();
  FUN_7136cdfc(iVar1 + 0x10);
  FUN_7136cdfc(param_1 + 0x20);
  FUN_7136cdfc(param_1 + 0x30);
  imp___aeabi_memclr4(param_1,0x48);
  return param_1;
}


// =========================================================================
// Function: FUN_7133f914
// Entry: 0x7133f914 | Size: 432 bytes
// =========================================================================

int FUN_7133f914(int param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  iVar9 = FUN_7136cdfc();
  FUN_7136cdfc(iVar9 + 0x10);
  FUN_7136cdfc(param_1 + 0x20);
  FUN_7136cdfc(param_1 + 0x30);
  DataMemoryBarrier(0xb);
  if (((DAT_70b3606c & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b3606c), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba5b8);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba5a8);
      *(undefined1 *)((int)puVar11 + 0x2e) = 1;
      uVar6 = DAT_70074310;
      uVar5 = DAT_7007430c;
      uVar4 = DAT_70074308;
      uVar3 = DAT_70074304;
      *puVar11 = DAT_70074300;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      uVar7 = DAT_70074328;
      uVar6 = DAT_70074324;
      uVar5 = DAT_70074320;
      uVar4 = DAT_7007431c;
      uVar3 = DAT_70074318;
      puVar11[5] = DAT_70074314;
      puVar11[6] = uVar3;
      puVar11[7] = uVar4;
      puVar11[8] = uVar5;
      puVar11[9] = uVar6;
      puVar11[10] = uVar7;
      *(undefined2 *)(puVar11 + 0xb) = DAT_7007432c;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71342e70,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba5b8);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba5a8);
    if (*(char *)(iVar9 + 0x2e) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x19cfe32d >> iVar15) |
                (byte)(-0x266c1045 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0xd993efbb >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x2c < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x2e) = 0;
    }
    DAT_70b36068 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b3606c);
  }
  (*DAT_70b36068)(param_1,param_2,param_3);
  return param_1;
}


// =========================================================================
// Function: FUN_7133fdcc
// Entry: 0x7133fdcc | Size: 384 bytes
// =========================================================================

undefined4 FUN_7133fdcc(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b36074 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b36074), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba5d8,iVar8);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba5c8);
      *(undefined1 *)((int)puVar10 + 0x16) = 1;
      uVar6 = DAT_70074340;
      uVar5 = DAT_7007433c;
      uVar4 = DAT_70074338;
      uVar3 = DAT_70074334;
      *puVar10 = DAT_70074330;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      *(undefined2 *)(puVar10 + 5) = DAT_70074344;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71342ec0,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba5d8);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba5c8);
    if (*(char *)(iVar8 + 0x16) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xd3c78945 >> iVar14) |
                (byte)(0x5f694973 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x5f694973 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x14 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x16) = 0;
    }
    DAT_70b36070 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b36074);
  }
  (*DAT_70b36070)(param_1);
  return param_1;
}


// =========================================================================
// Function: FUN_713401e4
// Entry: 0x713401e4 | Size: 436 bytes
// =========================================================================

void FUN_713401e4(int param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  DataMemoryBarrier(0xb);
  if (((DAT_70b36064 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b36064), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba598,param_1);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba588);
      *(undefined1 *)((int)puVar10 + 0x2a) = 1;
      uVar6 = DAT_700742e0;
      uVar5 = DAT_700742dc;
      uVar4 = DAT_700742d8;
      uVar3 = DAT_700742d4;
      *puVar10 = DAT_700742d0;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_700742f4;
      uVar5 = DAT_700742f0;
      uVar4 = DAT_700742ec;
      uVar3 = DAT_700742e8;
      puVar10[5] = DAT_700742e4;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      *(undefined2 *)(puVar10 + 10) = DAT_700742f8;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7133bfc0,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba598);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba588);
    if (*(char *)(iVar8 + 0x2a) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x93a3c787 >> iVar14) |
                (byte)(0x47abcda5 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x47abcda5 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x28 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x2a) = 0;
    }
    DAT_70b36060 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b36064);
  }
                    /* WARNING: Could not recover jumptable at 0x7133f438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b36060)(param_2,param_1);
  return;
}


// =========================================================================
// Function: FUN_71340234
// Entry: 0x71340234 | Size: 184 bytes
// =========================================================================

void FUN_71340234(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uStack_28 = *(undefined4 *)(param_1 + 0x38);
  uStack_2c = *(undefined4 *)(param_1 + 0x34);
  uStack_30 = *(undefined4 *)(param_1 + 0x30);
  uVar4 = FUN_71ba1638(param_2);
  FUN_71ba1ea0((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0xde4c51,0x3f91df33);
  uVar1 = FUN_71ba242c();
  uVar4 = FUN_71ba1638(param_3);
  FUN_71ba1ea0((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0xde4c51,0x3f91df33);
  uVar2 = FUN_71ba242c();
  uVar4 = FUN_71ba1638(param_4);
  FUN_71ba1ea0((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0xde4c51,0x3f91df33);
  uVar3 = FUN_71ba242c();
  FUN_71340438(param_1,uVar1,uVar2,uVar3);
  FUN_7136d040((undefined4 *)(param_1 + 0x30),&uStack_30);
  return;
}


// =========================================================================
// Function: FUN_71340438
// Entry: 0x71340438 | Size: 424 bytes
// =========================================================================

void FUN_71340438(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if ((DAT_70b3607c & 1) == 0) {
    iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b3607c);
    if (iVar9 != 0) {
      pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba5f8,param_2,param_3,param_4);
      if (*pcVar10 == '\0') {
        puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba5e8);
        *(undefined1 *)(puVar11 + 0xc) = 1;
        uVar7 = DAT_7007435c;
        uVar6 = DAT_70074358;
        uVar5 = DAT_70074354;
        uVar4 = DAT_70074350;
        uVar3 = DAT_7007434c;
        *puVar11 = DAT_70074348;
        puVar11[1] = uVar3;
        puVar11[2] = uVar4;
        puVar11[3] = uVar5;
        puVar11[4] = uVar6;
        puVar11[5] = uVar7;
        uVar7 = DAT_70074374;
        uVar6 = DAT_70074370;
        uVar5 = DAT_7007436c;
        uVar4 = DAT_70074368;
        uVar3 = DAT_70074364;
        puVar11[6] = DAT_70074360;
        puVar11[7] = uVar3;
        puVar11[8] = uVar4;
        puVar11[9] = uVar5;
        puVar11[10] = uVar6;
        puVar11[0xb] = uVar7;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71342ef8,puVar11,&DAT_70b0e000);
        puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba5f8);
        *puVar12 = 1;
      }
      iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba5e8);
      if (*(char *)(iVar9 + 0x30) != '\0') {
        uVar13 = 0;
        uVar14 = 0;
        do {
          iVar15 = (uVar13 & 7) * 8;
          bVar8 = (byte)(0x7b375791 >> iVar15) |
                  (byte)(-0x1a8040e1 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
          uVar16 = iVar15 - 0x20;
          if (-1 < (int)uVar16) {
            bVar8 = (byte)(0xe57fbf1f >> (uVar16 & 0xff));
          }
          *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
          bVar17 = 0xfffffffe < uVar13;
          bVar1 = uVar14 == 0;
          bVar2 = (0x2e < uVar13) <= uVar14;
          uVar13 = uVar13 + 1;
          uVar14 = uVar14 + bVar17;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar9 + 0x30) = 0;
      }
      DAT_70b36078 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70b3607c);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x7134046c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b36078)(param_1,param_2,param_3,param_4);
  return;
}


// =========================================================================
// Function: FUN_71340920
// Entry: 0x71340920 | Size: 140 bytes
// =========================================================================

void FUN_71340920(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  imp_asinf(*(uint *)(param_1 + 0x18) ^ 0x80000000);
  uVar2 = FUN_71ba1638();
  FUN_71ba1ea0((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0x4676dd,0xc04ca5dc);
  uVar1 = FUN_71ba242c();
  *param_2 = uVar1;
  imp_atan2f(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x28));
  uVar2 = FUN_71ba1638();
  FUN_71ba1ea0((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0x4676dd,0xc04ca5dc);
  uVar1 = FUN_71ba242c();
  param_2[1] = uVar1;
  imp_atan2f(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  uVar2 = FUN_71ba1638();
  FUN_71ba1ea0((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0x4676dd,0xc04ca5dc);
  uVar1 = FUN_71ba242c();
  param_2[2] = uVar1;
  return;
}


// =========================================================================
// Function: FUN_71340b14
// Entry: 0x71340b14 | Size: 272 bytes
// =========================================================================

void FUN_71340b14(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  FUN_7136cdfc();
  uVar4 = *param_3;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar7 = param_2[4];
  uVar1 = FUN_71ba21e8(*param_2,uVar4);
  uVar1 = FUN_71ba0b38(uVar1,param_2[0xc]);
  uVar7 = FUN_71ba21e8(uVar7,uVar5);
  uVar1 = FUN_71ba0b38(uVar7,uVar1);
  uVar7 = FUN_71ba21e8(param_2[8],uVar6);
  uVar1 = FUN_71ba0b38(uVar7,uVar1);
  *param_1 = uVar1;
  uVar1 = FUN_71ba21e8(uVar2,uVar4);
  uVar1 = FUN_71ba0b38(uVar1,param_2[0xd]);
  uVar7 = FUN_71ba21e8(param_2[5],uVar5);
  uVar1 = FUN_71ba0b38(uVar7,uVar1);
  uVar7 = FUN_71ba21e8(param_2[9],uVar6);
  uVar1 = FUN_71ba0b38(uVar7,uVar1);
  param_1[1] = uVar1;
  uVar1 = FUN_71ba21e8(uVar3,uVar4);
  uVar1 = FUN_71ba0b38(uVar1,param_2[0xe]);
  uVar7 = FUN_71ba21e8(param_2[6],uVar5);
  uVar1 = FUN_71ba0b38(uVar7,uVar1);
  uVar7 = FUN_71ba21e8(param_2[10],uVar6);
  uVar1 = FUN_71ba0b38(uVar7,uVar1);
  param_1[2] = uVar1;
  return;
}


// =========================================================================
// Function: FUN_71340e50
// Entry: 0x71340e50 | Size: 80 bytes
// =========================================================================

void FUN_71340e50(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  param_2[6] = param_1[6];
  param_2[4] = uVar1;
  param_2[5] = uVar2;
  uVar1 = param_1[9];
  uVar2 = param_1[10];
  param_2[8] = param_1[8];
  param_2[9] = uVar1;
  param_2[10] = uVar2;
  uVar1 = param_1[0xc];
  uVar2 = param_1[0xd];
  param_2[0xe] = param_1[0xe];
  param_2[0xc] = uVar1;
  param_2[0xd] = uVar2;
  FUN_7141bbe4(param_2);
  return;
}


// =========================================================================
// Function: FUN_71340ed4
// Entry: 0x71340ed4 | Size: 244 bytes
// =========================================================================

void FUN_71340ed4(undefined4 *param_1)

{
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
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
  undefined4 uStack_24;
  
  uStack_54 = 0;
  uStack_44 = 0;
  uStack_34 = 0;
  uStack_60 = *param_1;
  uStack_5c = param_1[1];
  uStack_58 = param_1[2];
  uStack_4c = param_1[5];
  uStack_48 = param_1[6];
  uStack_50 = param_1[4];
  uStack_40 = param_1[8];
  uStack_3c = param_1[9];
  uStack_38 = param_1[10];
  uStack_24 = 0x3f800000;
  uStack_2c = param_1[0xd];
  uStack_28 = param_1[0xe];
  uStack_30 = param_1[0xc];
  FUN_713430ec(&uStack_a0,&uStack_60);
  uStack_ac = uStack_a0;
  uStack_a8 = uStack_9c;
  uStack_a4 = uStack_98;
  FUN_7136d040(param_1,&uStack_ac);
  uStack_ac = uStack_90;
  uStack_a8 = uStack_8c;
  uStack_a4 = uStack_88;
  FUN_7136d040(param_1 + 4,&uStack_ac);
  uStack_ac = uStack_80;
  uStack_a8 = uStack_7c;
  uStack_a4 = uStack_78;
  FUN_7136d040(param_1 + 8,&uStack_ac);
  uStack_ac = uStack_70;
  uStack_a8 = uStack_6c;
  uStack_a4 = uStack_68;
  FUN_7136d040(param_1 + 0xc,&uStack_ac);
  return;
}


// =========================================================================
// Function: FUN_7134106c
// Entry: 0x7134106c | Size: 440 bytes
// =========================================================================

void FUN_7134106c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  uVar1 = param_2[1];
  uVar11 = *param_2;
  uVar12 = param_2[2];
  uVar10 = param_2[3];
  uVar2 = FUN_71ba0b38(uVar1,uVar1);
  uVar3 = FUN_71ba0b38(uVar10,uVar10);
  uVar4 = FUN_71ba21e8(uVar12,uVar3);
  uVar5 = FUN_71ba21e8(uVar2,uVar11);
  uVar6 = FUN_71ba240c(uVar4,uVar5);
  param_1[9] = uVar6;
  uVar6 = FUN_71ba0b38(uVar12,uVar12);
  uVar7 = FUN_71ba21e8(uVar1,uVar3);
  uVar8 = FUN_71ba21e8(uVar6,uVar11);
  uVar9 = FUN_71ba0b38(uVar8,uVar7);
  param_1[8] = uVar9;
  uVar4 = FUN_71ba0b38(uVar5,uVar4);
  param_1[6] = uVar4;
  uVar4 = FUN_71ba21e8(uVar1,uVar6);
  uVar5 = FUN_71ba21e8(uVar3,uVar11);
  uVar9 = FUN_71ba240c(uVar4,uVar5);
  param_1[4] = uVar9;
  uVar7 = FUN_71ba240c(uVar7,uVar8);
  param_1[2] = uVar7;
  uVar4 = FUN_71ba0b38(uVar4,uVar5);
  param_1[1] = uVar4;
  uVar1 = FUN_71ba21e8(uVar1,uVar2);
  uVar2 = FUN_71ba21e8(uVar12,uVar6);
  uVar4 = FUN_71ba0b38(uVar1,uVar2);
  uVar4 = FUN_71ba240c(0x3f800000,uVar4);
  param_1[10] = uVar4;
  uVar3 = FUN_71ba21e8(uVar10,uVar3);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  uVar1 = FUN_71ba240c(0x3f800000,uVar1);
  param_1[5] = uVar1;
  uVar1 = FUN_71ba0b38(uVar2,uVar3);
  uVar1 = FUN_71ba240c(0x3f800000,uVar1);
  *param_1 = uVar1;
  return;
}


// =========================================================================
// Function: FUN_713414dc
// Entry: 0x713414dc | Size: 440 bytes
// =========================================================================

void FUN_713414dc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if ((DAT_70b36084 & 1) == 0) {
    iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b36084);
    if (iVar9 != 0) {
      pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba618,param_2,param_3,param_4);
      if (*pcVar10 == '\0') {
        puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba608);
        *(undefined1 *)((int)puVar11 + 0x33) = 1;
        uVar7 = DAT_7007438c;
        uVar6 = DAT_70074388;
        uVar5 = DAT_70074384;
        uVar4 = DAT_70074380;
        uVar3 = DAT_7007437c;
        *puVar11 = DAT_70074378;
        puVar11[1] = uVar3;
        puVar11[2] = uVar4;
        puVar11[3] = uVar5;
        puVar11[4] = uVar6;
        puVar11[5] = uVar7;
        uVar7 = DAT_700743a4;
        uVar6 = DAT_700743a0;
        uVar5 = DAT_7007439c;
        uVar4 = DAT_70074398;
        uVar3 = DAT_70074394;
        puVar11[6] = DAT_70074390;
        puVar11[7] = uVar3;
        puVar11[8] = uVar4;
        puVar11[9] = uVar5;
        puVar11[10] = uVar6;
        puVar11[0xb] = uVar7;
        *(undefined2 *)(puVar11 + 0xc) = DAT_700743a8;
        *(undefined1 *)((int)puVar11 + 0x32) = DAT_700743aa;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71342f48,puVar11,&DAT_70b0e000);
        puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba618);
        *puVar12 = 1;
      }
      iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba608);
      if (*(char *)(iVar9 + 0x33) != '\0') {
        uVar13 = 0;
        uVar14 = 0;
        do {
          iVar15 = (uVar13 & 7) * 8;
          bVar8 = (byte)(0xddf5eb13 >> iVar15) |
                  (byte)(-0x782e5873 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
          uVar16 = iVar15 - 0x20;
          if (-1 < (int)uVar16) {
            bVar8 = (byte)(0x87d1a78d >> (uVar16 & 0xff));
          }
          *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
          bVar17 = 0xfffffffe < uVar13;
          bVar1 = uVar14 == 0;
          bVar2 = (0x31 < uVar13) <= uVar14;
          uVar13 = uVar13 + 1;
          uVar14 = uVar14 + bVar17;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar9 + 0x33) = 0;
      }
      DAT_70b36080 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70b36084);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x71341510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b36080)(param_1,param_2,param_3,param_4);
  return;
}


// =========================================================================
// Function: FUN_7134192c
// Entry: 0x7134192c | Size: 400 bytes
// =========================================================================

void FUN_7134192c(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b3608c & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b3608c), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba638,param_2);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba628);
      *(undefined1 *)(puVar9 + 7) = 1;
      uVar4 = DAT_700743b8;
      uVar3 = DAT_700743b4;
      *puVar9 = DAT_700743b0;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      uVar5 = DAT_700743c8;
      uVar4 = DAT_700743c4;
      uVar3 = DAT_700743c0;
      puVar9[3] = DAT_700743bc;
      puVar9[4] = uVar3;
      puVar9[5] = uVar4;
      puVar9[6] = uVar5;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71342f98,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba638);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba628);
    if (*(char *)(iVar7 + 0x1c) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar6 = (byte)(0x533949bf >> iVar13) |
                (byte)(0x11c707c3 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar6 = (byte)(0x11c707c3 >> (uVar14 & 0xff));
        }
        *(byte *)(iVar7 + uVar11) = *(byte *)(iVar7 + uVar11) ^ bVar6;
        bVar15 = 0xfffffffe < uVar11;
        bVar1 = uVar12 == 0;
        bVar2 = (0x1a < uVar11) <= uVar12;
        uVar11 = uVar11 + 1;
        uVar12 = uVar12 + bVar15;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar7 + 0x1c) = 0;
    }
    DAT_70b36088 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b3608c);
  }
                    /* WARNING: Could not recover jumptable at 0x71341960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b36088)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_71341d54
// Entry: 0x71341d54 | Size: 400 bytes
// =========================================================================

void FUN_71341d54(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b36094 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b36094), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba658,param_2);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba648);
      *(undefined1 *)(puVar9 + 7) = 1;
      uVar4 = DAT_700743d8;
      uVar3 = DAT_700743d4;
      *puVar9 = DAT_700743d0;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      uVar5 = DAT_700743e8;
      uVar4 = DAT_700743e4;
      uVar3 = DAT_700743e0;
      puVar9[3] = DAT_700743dc;
      puVar9[4] = uVar3;
      puVar9[5] = uVar4;
      puVar9[6] = uVar5;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71342fd4,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba658);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba648);
    if (*(char *)(iVar7 + 0x1c) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar6 = (byte)(0x73351343 >> iVar13) |
                (byte)(0x3d63618b << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar6 = (byte)(0x3d63618b >> (uVar14 & 0xff));
        }
        *(byte *)(iVar7 + uVar11) = *(byte *)(iVar7 + uVar11) ^ bVar6;
        bVar15 = 0xfffffffe < uVar11;
        bVar1 = uVar12 == 0;
        bVar2 = (0x1a < uVar11) <= uVar12;
        uVar11 = uVar11 + 1;
        uVar12 = uVar12 + bVar15;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar7 + 0x1c) = 0;
    }
    DAT_70b36090 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b36094);
  }
                    /* WARNING: Could not recover jumptable at 0x71341d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b36090)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_7134217c
// Entry: 0x7134217c | Size: 376 bytes
// =========================================================================

void FUN_7134217c(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b3609c & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b3609c), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba678);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba668);
      *(undefined1 *)(puVar9 + 7) = 1;
      uVar4 = DAT_700743f8;
      uVar3 = DAT_700743f4;
      *puVar9 = DAT_700743f0;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      uVar5 = DAT_70074408;
      uVar4 = DAT_70074404;
      uVar3 = DAT_70074400;
      puVar9[3] = DAT_700743fc;
      puVar9[4] = uVar3;
      puVar9[5] = uVar4;
      puVar9[6] = uVar5;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71343010,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba678);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba668);
    if (*(char *)(iVar7 + 0x1c) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar6 = (byte)(0xefed2135 >> iVar13) |
                (byte)(0x75915999 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar6 = (byte)(0x75915999 >> (uVar14 & 0xff));
        }
        *(byte *)(iVar7 + uVar11) = *(byte *)(iVar7 + uVar11) ^ bVar6;
        bVar15 = 0xfffffffe < uVar11;
        bVar1 = uVar12 == 0;
        bVar2 = (0x1a < uVar11) <= uVar12;
        uVar11 = uVar11 + 1;
        uVar12 = uVar12 + bVar15;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar7 + 0x1c) = 0;
    }
    DAT_70b36098 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b3609c);
  }
                    /* WARNING: Could not recover jumptable at 0x713421a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b36098)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7134258c
// Entry: 0x7134258c | Size: 424 bytes
// =========================================================================

int FUN_7134258c(int param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  byte bVar13;
  uint uVar14;
  int iVar15;
  
  iVar7 = FUN_7136cdfc();
  FUN_7136cdfc(iVar7 + 0x10);
  FUN_7136cdfc(param_1 + 0x20);
  FUN_7136cdfc(param_1 + 0x30);
  DataMemoryBarrier(0xb);
  if (((DAT_70b360a4 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b360a4), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba698);
    if (*pcVar8 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba688);
      *(undefined1 *)((int)puVar10 + 0x27) = 1;
      uVar5 = DAT_7007441c;
      uVar4 = DAT_70074418;
      uVar3 = DAT_70074414;
      *puVar10 = DAT_70074410;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_70074430;
      uVar5 = DAT_7007442c;
      uVar4 = DAT_70074428;
      uVar3 = DAT_70074424;
      puVar10[4] = DAT_70074420;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      *(undefined2 *)(puVar10 + 9) = DAT_70074434;
      *(undefined1 *)((int)puVar10 + 0x26) = DAT_70074436;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7134304c,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba698);
      *puVar11 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba688);
    if (*(char *)(iVar7 + 0x27) != '\0') {
      uVar9 = 0;
      uVar12 = 0;
      do {
        iVar15 = (uVar12 & 7) * 8;
        bVar13 = (byte)(0x87214d1b >> iVar15) |
                 (byte)(0x61a7ddf5 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        uVar14 = iVar15 - 0x20;
        if (-1 < (int)uVar14) {
          bVar13 = (byte)(0x61a7ddf5 >> (uVar14 & 0xff));
        }
        *(byte *)(iVar7 + uVar12) = *(byte *)(iVar7 + uVar12) ^ bVar13;
        bVar1 = uVar9 == 0;
        bVar2 = (0x25 < uVar12) <= uVar9;
        uVar9 = uVar9 + (0xfffffffe < uVar12);
        uVar12 = uVar12 + 1;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar7 + 0x27) = 0;
    }
    DAT_70b360a0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b360a4);
  }
  (*DAT_70b360a0)(param_1,param_2);
  return param_1;
}


// =========================================================================
// Function: FUN_71342a3c
// Entry: 0x71342a3c | Size: 412 bytes
// =========================================================================

void FUN_71342a3c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b360ac & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b360ac), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba6b8,param_2,param_3);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba6a8);
      *(undefined1 *)(puVar11 + 0xc) = 1;
      uVar7 = DAT_7007444c;
      uVar6 = DAT_70074448;
      uVar5 = DAT_70074444;
      uVar4 = DAT_70074440;
      uVar3 = DAT_7007443c;
      *puVar11 = DAT_70074438;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      puVar11[5] = uVar7;
      uVar7 = DAT_70074464;
      uVar6 = DAT_70074460;
      uVar5 = DAT_7007445c;
      uVar4 = DAT_70074458;
      uVar3 = DAT_70074454;
      puVar11[6] = DAT_70074450;
      puVar11[7] = uVar3;
      puVar11[8] = uVar4;
      puVar11[9] = uVar5;
      puVar11[10] = uVar6;
      puVar11[0xb] = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7134309c,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba6b8);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba6a8);
    if (*(char *)(iVar9 + 0x30) != '\0') {
      uVar13 = 0;
      uVar16 = 0;
      do {
        iVar14 = (uVar13 & 7) * 8;
        bVar8 = (byte)(0x3369637b >> iVar14) |
                (byte)(0x696dc51b << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        uVar15 = iVar14 - 0x20;
        if (-1 < (int)uVar15) {
          bVar8 = (byte)(0x696dc51b >> (uVar15 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar16 == 0;
        bVar2 = (0x2e < uVar13) <= uVar16;
        uVar13 = uVar13 + 1;
        uVar16 = uVar16 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x30) = 0;
    }
    DAT_70b360a8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b360ac);
  }
  (*DAT_70b360a8)(param_1,param_2,param_3);
  return;
}


// =========================================================================
// Function: FUN_713430ec
// Entry: 0x713430ec | Size: 2348 bytes
// =========================================================================

void FUN_713430ec(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  uint uStack_58;
  uint uStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  uint uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  
  uVar25 = param_2[6];
  uVar16 = param_2[9];
  uVar1 = FUN_71ba21e8(uVar25);
  uVar26 = param_2[10];
  uVar28 = param_2[5];
  uVar2 = FUN_71ba21e8(uVar28,uVar26);
  uVar1 = FUN_71ba240c(uVar2,uVar1);
  uVar29 = param_2[8];
  uVar2 = FUN_71ba21e8(uVar25,uVar29);
  uVar31 = param_2[4];
  uVar3 = FUN_71ba21e8(uVar31,uVar26);
  uVar2 = FUN_71ba240c(uVar3,uVar2);
  uVar17 = *param_2;
  uVar3 = FUN_71ba21e8(uVar1);
  uVar18 = param_2[1];
  uVar4 = FUN_71ba21e8(uVar2);
  uVar3 = FUN_71ba240c(uVar3,uVar4);
  uVar4 = FUN_71ba21e8(uVar28,uVar29);
  uVar5 = FUN_71ba21e8(uVar31,uVar16);
  uVar4 = FUN_71ba240c(uVar5,uVar4);
  uVar19 = param_2[2];
  uVar5 = FUN_71ba21e8();
  uStack_28 = FUN_71ba0b38(uVar3,uVar5);
  uVar20 = param_2[0xb];
  uVar21 = param_2[0xd];
  uVar22 = param_2[0xf];
  uVar23 = param_2[3];
  uVar24 = param_2[7];
  uVar30 = param_2[0xc];
  uVar27 = param_2[0xe];
  uVar3 = FUN_71ba21e8(uVar26);
  uVar5 = FUN_71ba21e8(uVar16,uVar27);
  uVar3 = FUN_71ba240c(uVar5,uVar3);
  uVar5 = FUN_71ba21e8(uVar26,uVar30);
  uVar6 = FUN_71ba21e8(uVar29,uVar27);
  uVar5 = FUN_71ba240c(uVar6,uVar5);
  uVar6 = FUN_71ba21e8(uVar3,uVar17);
  uVar7 = FUN_71ba21e8(uVar5,uVar18);
  uVar6 = FUN_71ba240c(uVar6,uVar7);
  uVar7 = FUN_71ba21e8(uVar16,uVar30);
  uVar8 = FUN_71ba21e8(uVar29,uVar21);
  uVar7 = FUN_71ba240c(uVar8,uVar7);
  uVar8 = FUN_71ba21e8(uVar7,uVar19);
  uStack_30 = FUN_71ba0b38(uVar6,uVar8);
  uVar6 = FUN_71ba21e8(uVar24,uVar21);
  uVar8 = FUN_71ba21e8(uVar28,uVar22);
  uVar6 = FUN_71ba240c(uVar8,uVar6);
  uVar8 = FUN_71ba21e8(uVar24,uVar30);
  uVar9 = FUN_71ba21e8(uVar31,uVar22);
  uVar8 = FUN_71ba240c(uVar9,uVar8);
  uVar9 = FUN_71ba21e8(uVar6,uVar17);
  uVar10 = FUN_71ba21e8(uVar8,uVar18);
  uVar9 = FUN_71ba240c(uVar9,uVar10);
  uVar10 = FUN_71ba21e8(uVar28,uVar30);
  uVar11 = FUN_71ba21e8(uVar31,uVar21);
  uVar10 = FUN_71ba240c(uVar11,uVar10);
  uVar11 = FUN_71ba21e8(uVar10,uVar23);
  uStack_3c = FUN_71ba0b38(uVar9,uVar11);
  uVar9 = FUN_71ba21e8(uVar24,uVar26);
  uVar11 = FUN_71ba21e8(uVar25,uVar20);
  uVar9 = FUN_71ba240c(uVar11,uVar9);
  uVar11 = FUN_71ba21e8(uVar24,uVar29);
  uVar12 = FUN_71ba21e8(uVar31,uVar20);
  uVar11 = FUN_71ba240c(uVar12,uVar11);
  uVar12 = FUN_71ba21e8(uVar9,uVar17);
  uVar13 = FUN_71ba21e8(uVar11,uVar19);
  uVar12 = FUN_71ba240c(uVar12,uVar13);
  uVar2 = FUN_71ba21e8(uVar2,uVar23);
  uStack_48 = FUN_71ba0b38(uVar12,uVar2);
  uVar2 = FUN_71ba21e8(uVar20,uVar27);
  uVar12 = FUN_71ba21e8(uVar26,uVar22);
  uVar2 = FUN_71ba240c(uVar12,uVar2);
  uVar12 = FUN_71ba21e8(uVar20,uVar30);
  uVar13 = FUN_71ba21e8(uVar29,uVar22);
  uVar12 = FUN_71ba240c(uVar13,uVar12);
  uVar13 = FUN_71ba21e8(uVar2,uVar17);
  uVar26 = FUN_71ba21e8(uVar12,uVar19);
  uVar13 = FUN_71ba240c(uVar13,uVar26);
  uVar26 = FUN_71ba21e8(uVar5,uVar23);
  uStack_50 = FUN_71ba0b38(uVar13,uVar26);
  uVar13 = FUN_71ba21e8(uVar24,uVar27);
  uVar26 = FUN_71ba21e8(uVar25,uVar22);
  uVar13 = FUN_71ba240c(uVar26,uVar13);
  uVar26 = FUN_71ba21e8(uVar13,uVar18);
  uVar6 = FUN_71ba21e8(uVar6,uVar19);
  uVar6 = FUN_71ba240c(uVar26,uVar6);
  uVar26 = FUN_71ba21e8(uVar25,uVar21);
  uVar29 = FUN_71ba21e8(uVar28,uVar27);
  uVar26 = FUN_71ba240c(uVar29,uVar26);
  uVar29 = FUN_71ba21e8(uVar26,uVar23);
  uStack_5c = FUN_71ba0b38(uVar6,uVar29);
  uVar6 = FUN_71ba21e8(uVar25,uVar30);
  uVar29 = FUN_71ba21e8(uVar31,uVar27);
  uVar6 = FUN_71ba240c(uVar29,uVar6);
  uVar26 = FUN_71ba21e8(uVar26,uVar17);
  uVar29 = FUN_71ba21e8(uVar6,uVar18);
  uVar26 = FUN_71ba240c(uVar26,uVar29);
  uVar10 = FUN_71ba21e8(uVar10,uVar19);
  uStack_2c = FUN_71ba0b38(uVar26,uVar10);
  uStack_2c = uStack_2c ^ 0x80000000;
  uVar10 = FUN_71ba21e8(uVar3,uVar31);
  uVar26 = FUN_71ba21e8(uVar28,uVar5);
  uVar10 = FUN_71ba240c(uVar10,uVar26);
  uVar26 = FUN_71ba21e8(uVar25,uVar7);
  uVar14 = FUN_71ba0b38(uVar26,uVar10);
  uStack_34 = uVar14 ^ 0x80000000;
  uVar10 = FUN_71ba21e8(uVar24,uVar16);
  uVar26 = FUN_71ba21e8(uVar28,uVar20);
  uVar10 = FUN_71ba240c(uVar26,uVar10);
  uVar26 = FUN_71ba21e8(uVar10,uVar17);
  uVar11 = FUN_71ba21e8(uVar11,uVar18);
  uVar11 = FUN_71ba240c(uVar26,uVar11);
  uVar4 = FUN_71ba21e8(uVar4,uVar23);
  uStack_38 = FUN_71ba0b38(uVar11,uVar4);
  uStack_38 = uStack_38 ^ 0x80000000;
  uVar4 = FUN_71ba21e8(uVar20,uVar21);
  uVar11 = FUN_71ba21e8(uVar16,uVar22);
  uVar4 = FUN_71ba240c(uVar11,uVar4);
  uVar11 = FUN_71ba21e8(uVar4,uVar17);
  uVar26 = FUN_71ba21e8(uVar12,uVar18);
  uVar11 = FUN_71ba240c(uVar11,uVar26);
  uVar26 = FUN_71ba21e8(uVar7,uVar23);
  uStack_40 = FUN_71ba0b38(uVar11,uVar26);
  uStack_40 = uStack_40 ^ 0x80000000;
  uVar11 = FUN_71ba21e8(uVar13,uVar17);
  uVar8 = FUN_71ba21e8(uVar8,uVar19);
  uVar8 = FUN_71ba240c(uVar11,uVar8);
  uVar6 = FUN_71ba21e8(uVar6,uVar23);
  uStack_4c = FUN_71ba0b38(uVar8,uVar6);
  uStack_4c = uStack_4c ^ 0x80000000;
  uVar6 = FUN_71ba21e8(uVar2,uVar31);
  uVar8 = FUN_71ba21e8(uVar25,uVar12);
  uVar6 = FUN_71ba240c(uVar6,uVar8);
  uVar5 = FUN_71ba21e8(uVar24,uVar5);
  uVar15 = FUN_71ba0b38(uVar5,uVar6);
  uStack_54 = uVar15 ^ 0x80000000;
  uVar5 = FUN_71ba21e8(uVar9,uVar18);
  uVar6 = FUN_71ba21e8(uVar10,uVar19);
  uVar5 = FUN_71ba240c(uVar5,uVar6);
  uVar1 = FUN_71ba21e8(uVar1,uVar23);
  uStack_58 = FUN_71ba0b38(uVar5,uVar1);
  uStack_58 = uStack_58 ^ 0x80000000;
  uVar1 = FUN_71ba21e8(uVar2,uVar18);
  uVar5 = FUN_71ba21e8(uVar4,uVar19);
  uVar1 = FUN_71ba240c(uVar1,uVar5);
  uVar5 = FUN_71ba21e8(uVar3,uVar23);
  uStack_60 = FUN_71ba0b38(uVar1,uVar5);
  uStack_60 = uStack_60 ^ 0x80000000;
  uVar1 = FUN_71ba21e8(uVar2,uVar28);
  uVar2 = FUN_71ba21e8(uVar25,uVar4);
  uVar1 = FUN_71ba240c(uVar1,uVar2);
  uVar2 = FUN_71ba21e8(uVar24,uVar3);
  uStack_64 = FUN_71ba0b38(uVar2,uVar1);
  uVar1 = FUN_71ba21e8(uVar17,uStack_64);
  uVar2 = FUN_71ba21e8(uVar18,uVar15);
  uVar1 = FUN_71ba240c(uVar1,uVar2);
  uVar2 = FUN_71ba21e8(uVar4,uVar31);
  uVar3 = FUN_71ba21e8(uVar28,uVar12);
  uVar2 = FUN_71ba240c(uVar2,uVar3);
  uVar3 = FUN_71ba21e8(uVar24,uVar7);
  uStack_44 = FUN_71ba0b38(uVar3,uVar2);
  uVar2 = FUN_71ba21e8(uVar19,uStack_44);
  uVar3 = FUN_71ba21e8(uVar14,uVar23);
  uVar2 = FUN_71ba240c(uVar2,uVar3);
  uVar1 = FUN_71ba0b38(uVar1,uVar2);
  uStack_68 = FUN_71ba13e0(0x3f800000,uVar1);
  FUN_713449d4(param_1,&uStack_64,&uStack_68);
  return;
}


// =========================================================================
// Function: FUN_713449d4
// Entry: 0x713449d4 | Size: 384 bytes
// =========================================================================

void FUN_713449d4(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  uVar13 = *param_3;
  uVar1 = FUN_71ba21e8(uVar13,param_2[0xf]);
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar6 = param_2[4];
  uVar7 = param_2[5];
  uVar8 = param_2[6];
  uVar9 = param_2[7];
  uVar10 = param_2[8];
  uVar11 = param_2[9];
  uVar12 = param_2[0xe];
  param_1[0xf] = uVar1;
  uVar16 = param_2[10];
  uVar17 = param_2[0xb];
  uVar15 = param_2[0xc];
  uVar14 = param_2[0xd];
  uVar1 = FUN_71ba21e8(uVar13,uVar12);
  param_1[0xe] = uVar1;
  uVar1 = FUN_71ba21e8(uVar13,uVar14);
  param_1[0xd] = uVar1;
  uVar1 = FUN_71ba21e8(uVar13,uVar15);
  param_1[0xc] = uVar1;
  uVar1 = FUN_71ba21e8(uVar13,uVar17);
  param_1[0xb] = uVar1;
  uVar1 = FUN_71ba21e8(uVar13,uVar16);
  param_1[10] = uVar1;
  uVar1 = FUN_71ba21e8(uVar13,uVar11);
  param_1[9] = uVar1;
  uVar1 = FUN_71ba21e8(uVar13,uVar10);
  param_1[8] = uVar1;
  uVar1 = FUN_71ba21e8(uVar13,uVar9);
  param_1[7] = uVar1;
  uVar1 = FUN_71ba21e8(uVar13,uVar8);
  param_1[6] = uVar1;
  uVar1 = FUN_71ba21e8(uVar13,uVar7);
  param_1[5] = uVar1;
  uVar1 = FUN_71ba21e8(uVar13,uVar6);
  param_1[4] = uVar1;
  uVar1 = FUN_71ba21e8(uVar13,uVar5);
  param_1[3] = uVar1;
  uVar1 = FUN_71ba21e8(uVar13,uVar4);
  param_1[2] = uVar1;
  uVar1 = FUN_71ba21e8(uVar13,uVar3);
  param_1[1] = uVar1;
  uVar1 = FUN_71ba21e8(uVar13,uVar2);
  *param_1 = uVar1;
  return;
}


// =========================================================================
// Function: FUN_71344d2c
// Entry: 0x71344d2c | Size: 548 bytes
// =========================================================================

void FUN_71344d2c(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint param_5
                 ,uint param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,int param_10
                 ,int param_11)

{
  int *piVar1;
  ushort *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  byte bVar6;
  undefined4 *puStack_70;
  undefined4 *puStack_6c;
  undefined4 *puStack_68;
  int *piStack_64;
  int *piStack_60;
  int *piStack_5c;
  undefined4 *puStack_58;
  undefined4 *puStack_54;
  undefined4 *puStack_50;
  undefined4 *puStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (*DAT_70b360bc < 0x7d1) {
    uStack_2c = param_3;
    uStack_28 = param_2;
    uStack_24 = param_1;
    iVar3 = FUN_71ba17bc(param_4 & 0x7fffffff);
    iStack_30 = iVar3;
    iStack_34 = FUN_71ba17bc(param_5 & 0x7fffffff);
    bVar6 = 1;
    if (iStack_34 == 0) {
      bVar6 = 2;
    }
    if (iVar3 != 0) {
      bVar6 = iStack_34 == 0;
    }
    iStack_38 = FUN_71ba17bc(param_6 & 0x7fffffff);
    if (iStack_38 == 0) {
      bVar6 = bVar6 + 1;
    }
    if (bVar6 < 2) {
      uVar4 = FUN_7133b77c(param_7);
      uVar4 = FUN_71ba0b38(uVar4,0x43340000);
      uVar4 = FUN_71ba21e8(uVar4,0x40490fd0);
      uStack_3c = FUN_71ba13e0(uVar4,0x43340000);
      uVar4 = FUN_7133b77c(param_8);
      uVar4 = FUN_71ba0b38(uVar4,0x43340000);
      uVar4 = FUN_71ba21e8(uVar4,0x40490fd0);
      uStack_40 = FUN_71ba13e0(uVar4,0x43340000);
      uVar4 = FUN_7133b77c(param_9);
      uVar4 = FUN_71ba0b38(uVar4,0x43340000);
      uVar4 = FUN_71ba21e8(uVar4,0x40490fd0);
      uStack_44 = FUN_71ba13e0(uVar4,0x43340000);
      piVar1 = DAT_70b360bc;
      uStack_48 = 0x4222f98c;
      puStack_4c = &uStack_3c;
      puStack_50 = &uStack_40;
      puStack_54 = &uStack_48;
      puStack_58 = &uStack_44;
      piStack_5c = &iStack_38;
      piStack_60 = &iStack_34;
      piStack_64 = &iStack_30;
      puStack_68 = &uStack_2c;
      puStack_6c = &uStack_28;
      puStack_70 = &uStack_24;
      if (param_11 == 0) {
        iVar3 = *DAT_70b360bc * 0x12;
        FUN_71345244(&puStack_70,&DAT_70b360c8 + iVar3);
        *(ushort *)(&DAT_70b360d8 + iVar3) =
             *(ushort *)(&DAT_70b360d8 + iVar3) & 0x7fff | (ushort)(param_10 != 0) << 0xf;
        puVar2 = DAT_70b360c4;
        *(ushort *)(&DAT_70b360d8 + iVar3) = *DAT_70b360c4 & 0x7fff | (ushort)(param_10 != 0) << 0xf
        ;
        *puVar2 = (ushort)*piVar1;
        puVar5 = &DAT_70b360bc;
      }
      else {
        FUN_71345244(&puStack_70,DAT_70b360b0 + *DAT_70b360b8 * 0x12);
        puVar5 = &DAT_70b360b8;
      }
      *(int *)*puVar5 = *(int *)*puVar5 + 1;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71345244
// Entry: 0x71345244 | Size: 264 bytes
// =========================================================================

void FUN_71345244(undefined4 *param_1,undefined2 *param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  FUN_71ba21e8(*(undefined4 *)*param_1,0x40800000);
  uVar2 = FUN_71ba17bc();
  *param_2 = uVar2;
  FUN_71ba21e8(*(undefined4 *)param_1[1],0x40800000);
  uVar2 = FUN_71ba17bc();
  param_2[1] = uVar2;
  FUN_71ba21e8(*(undefined4 *)param_1[2],0x40800000);
  uVar2 = FUN_71ba17bc();
  param_2[2] = uVar2;
  uVar3 = FUN_71ba1b94(*(undefined4 *)param_1[3]);
  FUN_71ba21e8(uVar3,0x40800000);
  uVar2 = FUN_71ba17bc();
  param_2[4] = uVar2;
  uVar3 = FUN_71ba1b94(*(undefined4 *)param_1[4]);
  FUN_71ba21e8(uVar3,0x40800000);
  uVar2 = FUN_71ba17bc();
  param_2[3] = uVar2;
  uVar3 = FUN_71ba1b94(*(undefined4 *)param_1[5]);
  FUN_71ba21e8(uVar3,0x40800000);
  uVar2 = FUN_71ba17bc();
  param_2[5] = uVar2;
  FUN_71ba21e8(*(undefined4 *)param_1[6],0x4222f98c);
  uVar1 = FUN_71ba17bc();
  *(undefined1 *)(param_2 + 7) = uVar1;
  FUN_71ba21e8(*(undefined4 *)param_1[8],0x4222f98c);
  uVar1 = FUN_71ba17bc();
  *(undefined1 *)((int)param_2 + 0xd) = uVar1;
  FUN_71ba21e8(*(undefined4 *)param_1[9],0x4222f98c);
  uVar1 = FUN_71ba17bc();
  *(undefined1 *)(param_2 + 6) = uVar1;
  return;
}


// =========================================================================
// Function: FUN_713455b0
// Entry: 0x713455b0 | Size: 536 bytes
// =========================================================================

void FUN_713455b0(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  if (DAT_70b3ed68 == '\0') {
    return;
  }
  FUN_71413b60(8,1);
  iStack_60 = 0;
  FUN_71413b60(6,0);
  FUN_71413b60(0xc,1);
  FUN_71413b60(10,2);
  FUN_71413b60(0xb,2);
  FUN_71413b60(1,0);
  uVar1 = FUN_71ba13e0(0x3f800000,*(undefined4 *)(*(int *)(DAT_70ffc978 + 4) + 0x80));
  iVar2 = *DAT_70b360c0;
  if (0 < iVar2) {
    iVar5 = 0;
    iVar8 = DAT_70b360b4;
    do {
      iVar4 = iVar5 * 0xac + iVar8;
      if ('\0' < *(char *)(iVar4 + 0x7a)) {
        iVar2 = 0;
        iVar8 = 0;
        do {
          uStack_5c = *(undefined4 *)(iVar4 + iVar2);
          uStack_58 = ((undefined4 *)(iVar4 + iVar2))[1];
          uStack_54 = FUN_7141ab6c();
          puVar7 = (undefined4 *)(DAT_70b360b4 + iStack_60 + iVar2);
          uVar6 = *puVar7;
          uStack_50 = uVar1;
          uVar3 = FUN_71ba21e8(puVar7[2],puVar7[4]);
          uStack_40 = FUN_71ba0b38(uVar3,uVar6);
          uVar6 = puVar7[1];
          uVar3 = FUN_71ba21e8(puVar7[3],puVar7[4]);
          uStack_3c = FUN_71ba0b38(uVar3,uVar6);
          uStack_38 = FUN_7141ab6c();
          uStack_30 = 0xff0000ff;
          uStack_4c = 0xff0000ff;
          uStack_34 = uVar1;
          FUN_7141af6c(&uStack_5c,2,0,1);
          iVar2 = iVar2 + 0x14;
          iVar8 = iVar8 + 1;
          iVar4 = iVar5 * 0xac + DAT_70b360b4;
        } while (iVar8 < *(char *)(iVar4 + 0x7a));
        iVar2 = *DAT_70b360c0;
        iVar8 = DAT_70b360b4;
      }
      iVar5 = iVar5 + 1;
      iStack_60 = iStack_60 + 0xac;
    } while (iVar5 < iVar2);
  }
  FUN_7140e03c();
  return;
}


// =========================================================================
// Function: FUN_71345a64
// Entry: 0x71345a64 | Size: 372 bytes
// =========================================================================

void FUN_71345a64(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  byte bVar14;
  int iVar15;
  uint uVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b3ed70 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b3ed70), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba798);
    if (*pcVar9 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba788);
      *(undefined1 *)((int)puVar11 + 0x27) = 1;
      uVar5 = DAT_70074534;
      uVar4 = DAT_70074530;
      uVar3 = DAT_7007452c;
      *puVar11 = DAT_70074528;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      uVar6 = DAT_70074548;
      uVar5 = DAT_70074544;
      uVar4 = DAT_70074540;
      uVar3 = DAT_7007453c;
      puVar11[4] = DAT_70074538;
      puVar11[5] = uVar3;
      puVar11[6] = uVar4;
      puVar11[7] = uVar5;
      puVar11[8] = uVar6;
      uVar7 = DAT_7007454e;
      *(undefined2 *)(puVar11 + 9) = DAT_7007454c;
      *(undefined1 *)((int)puVar11 + 0x26) = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71345fb8,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba798);
      *puVar12 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba788);
    if (*(char *)(iVar8 + 0x27) != '\0') {
      uVar10 = 0;
      uVar13 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar14 = (byte)(0xbb4fdb95 >> iVar15) |
                 (byte)(-0x626a25d << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar14 = (byte)(0xf9d95da3 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar8 + uVar13) = *(byte *)(iVar8 + uVar13) ^ bVar14;
        bVar1 = uVar10 == 0;
        bVar2 = (0x25 < uVar13) <= uVar10;
        uVar10 = uVar10 + (0xfffffffe < uVar13);
        uVar13 = uVar13 + 1;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x27) = 0;
    }
    DAT_70b3ed6c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b3ed70);
  }
                    /* WARNING: Could not recover jumptable at 0x71345a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b3ed6c)();
  return;
}


// =========================================================================
// Function: FUN_7134785c
// Entry: 0x7134785c | Size: 60 bytes
// =========================================================================

void FUN_7134785c(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *(undefined1 *)(DAT_70b3eda8 + iVar1) = 1;
    FUN_7135d734(iVar1 + 0x63a7,0);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x40);
  return;
}


// =========================================================================
// Function: FUN_713478ec
// Entry: 0x713478ec | Size: 588 bytes
// =========================================================================

void FUN_713478ec(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                 undefined4 param_17,undefined4 param_18,undefined4 param_19,undefined4 param_20)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  undefined1 *puVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  DataMemoryBarrier(0xb);
  if ((DAT_70b3edb4 & 1) == 0) {
    iVar3 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b3edb4);
    if (iVar3 != 0) {
      pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba818,param_2);
      if (*pcVar4 == '\0') {
        iVar3 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba808);
        *(undefined1 *)(iVar3 + 0x182) = 1;
        imp___aeabi_memcpy8(iVar3,&DAT_70074568,0x182);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71347ed0,iVar3,&DAT_70b0e000);
        puVar5 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba818);
        *puVar5 = 1;
      }
      iVar3 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba808);
      if (*(char *)(iVar3 + 0x182) != '\0') {
        uVar6 = 0;
        uVar10 = 0;
        do {
          iVar8 = (uVar6 & 7) * 8;
          uVar9 = iVar8 - 0x20;
          bVar7 = (byte)(0x6bad4799 >> iVar8) |
                  (byte)(-0x388088dd << ((uVar6 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar9) {
            bVar7 = (byte)(0xc77f7723 >> (uVar9 & 0xff));
          }
          *(byte *)(iVar3 + uVar6) = *(byte *)(iVar3 + uVar6) ^ bVar7;
          bVar11 = 0xfffffffe < uVar6;
          bVar1 = uVar10 == 0;
          bVar2 = (0x180 < uVar6) <= uVar10;
          uVar6 = uVar6 + 1;
          uVar10 = uVar10 + bVar11;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar3 + 0x182) = 0;
      }
      DAT_70b3edb0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar3,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70b3edb4);
    }
  }
  (*DAT_70b3edb0)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                  param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19,
                  param_20);
  return;
}


// =========================================================================
// Function: FUN_71348b54
// Entry: 0x71348b54 | Size: 1788 bytes
// =========================================================================

void FUN_71348b54(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  puVar1 = (undefined4 *)FUN_71349b78(0x14);
  uVar2 = thunk__IBDl(3200000);
  *puVar1 = uVar2;
  uVar2 = thunk__IBDl(400000);
  puVar1[1] = uVar2;
  puVar1[2] = 400000;
  iVar3 = 0;
  *(undefined1 *)(puVar1 + 4) = 1;
  puVar1[3] = 0xffffffff;
  do {
    *(byte *)(puVar1[1] - iVar3) = *(byte *)(puVar1[1] - iVar3) | 0x80;
    *(byte *)(puVar1[1] - iVar3) = *(byte *)(puVar1[1] - iVar3) & 0x80;
    iVar3 = iVar3 + -1;
  } while (iVar3 != -400000);
  *DAT_70b3edf0 = (int)puVar1;
  if (*DAT_70b3edf0 != 0) {
    puVar1 = (undefined4 *)FUN_7134a174(0x14);
    uVar2 = thunk__IBDl(2400000);
    *puVar1 = uVar2;
    uVar2 = thunk__IBDl(200000);
    puVar1[1] = uVar2;
    puVar1[2] = 200000;
    iVar3 = 0;
    *(undefined1 *)(puVar1 + 4) = 1;
    puVar1[3] = 0xffffffff;
    do {
      *(byte *)(puVar1[1] - iVar3) = *(byte *)(puVar1[1] - iVar3) | 0x80;
      *(byte *)(puVar1[1] - iVar3) = *(byte *)(puVar1[1] - iVar3) & 0x80;
      iVar3 = iVar3 + -1;
    } while (iVar3 != -200000);
    *DAT_70b3edf4 = (int)puVar1;
    if (*DAT_70b3edf4 != 0) {
      puVar1 = (undefined4 *)FUN_7134a770(0x14);
      uVar2 = thunk__IBDl(0x92b80);
      *puVar1 = uVar2;
      uVar2 = thunk__IBDl(0xf0);
      puVar1[1] = uVar2;
      puVar1[2] = 0xf0;
      iVar3 = 0;
      *(undefined1 *)(puVar1 + 4) = 1;
      puVar1[3] = 0xffffffff;
      do {
        *(byte *)(puVar1[1] - iVar3) = *(byte *)(puVar1[1] - iVar3) | 0x80;
        *(byte *)(puVar1[1] - iVar3) = *(byte *)(puVar1[1] - iVar3) & 0x80;
        iVar3 = iVar3 + -1;
      } while (iVar3 != -0xf0);
      *DAT_70b3edd0 = (int)puVar1;
      if (*DAT_70b3edd0 != 0) {
        puVar1 = (undefined4 *)FUN_7134ad6c(0x14);
        uVar2 = thunk__IBDl(0x9b140);
        *puVar1 = uVar2;
        uVar2 = thunk__IBDl(200);
        puVar1[1] = uVar2;
        puVar1[2] = 200;
        iVar3 = 0;
        *(undefined1 *)(puVar1 + 4) = 1;
        puVar1[3] = 0xffffffff;
        do {
          *(byte *)(puVar1[1] - iVar3) = *(byte *)(puVar1[1] - iVar3) | 0x80;
          *(byte *)(puVar1[1] - iVar3) = *(byte *)(puVar1[1] - iVar3) & 0x80;
          iVar3 = iVar3 + -1;
        } while (iVar3 != -200);
        *DAT_70b3edd4 = (int)puVar1;
        if (*DAT_70b3edd4 != 0) {
          puVar1 = (undefined4 *)FUN_7134b368(0x14);
          uVar2 = thunk__IBDl(9000000);
          *puVar1 = uVar2;
          uVar2 = thunk__IBDl(150000);
          puVar1[1] = uVar2;
          puVar1[2] = 150000;
          iVar3 = 0;
          *(undefined1 *)(puVar1 + 4) = 1;
          puVar1[3] = 0xffffffff;
          do {
            *(byte *)(puVar1[1] - iVar3) = *(byte *)(puVar1[1] - iVar3) | 0x80;
            *(byte *)(puVar1[1] - iVar3) = *(byte *)(puVar1[1] - iVar3) & 0x80;
            iVar3 = iVar3 + -1;
          } while (iVar3 != -150000);
          *DAT_70b3edd8 = (int)puVar1;
          if (*DAT_70b3edd8 != 0) {
            puVar1 = (undefined4 *)FUN_7134b964(0x14);
            uVar2 = thunk__IBDl(0x1d4c00);
            *puVar1 = uVar2;
            uVar2 = thunk__IBDl(20000);
            *(undefined1 *)(puVar1 + 4) = 1;
            puVar1[1] = uVar2;
            puVar1[2] = 20000;
            iVar3 = 0;
            puVar1[3] = 0xffffffff;
            do {
              *(byte *)(puVar1[1] - iVar3) = *(byte *)(puVar1[1] - iVar3) | 0x80;
              *(byte *)(puVar1[1] - iVar3) = *(byte *)(puVar1[1] - iVar3) & 0x80;
              iVar3 = iVar3 + -1;
            } while (iVar3 != -20000);
            *DAT_70b3eddc = (int)puVar1;
            if (*DAT_70b3eddc != 0) {
              puVar1 = (undefined4 *)FUN_7134bf60(0x14);
              uVar2 = thunk__IBDl(0x18e700);
              *puVar1 = uVar2;
              uVar2 = thunk__IBDl(3000);
              puVar1[1] = uVar2;
              puVar1[2] = 3000;
              iVar3 = -3000;
              *(undefined1 *)(puVar1 + 4) = 1;
              puVar1[3] = 0xffffffff;
              do {
                *(byte *)(puVar1[1] + iVar3 + 3000) = *(byte *)(puVar1[1] + iVar3 + 3000) | 0x80;
                iVar4 = puVar1[1] + iVar3;
                bVar5 = iVar3 != -1;
                iVar3 = iVar3 + 1;
                *(byte *)(iVar4 + 3000) = *(byte *)(iVar4 + 3000) & 0x80;
              } while (bVar5);
              *DAT_70b3ede0 = (int)puVar1;
              if (*DAT_70b3ede0 != 0) {
                puVar1 = (undefined4 *)FUN_7134c55c(0x14);
                uVar2 = thunk__IBDl(0x111700);
                *puVar1 = uVar2;
                uVar2 = thunk__IBDl(20000);
                puVar1[1] = uVar2;
                puVar1[2] = 20000;
                iVar3 = 0;
                *(undefined1 *)(puVar1 + 4) = 1;
                puVar1[3] = 0xffffffff;
                do {
                  *(byte *)(puVar1[1] - iVar3) = *(byte *)(puVar1[1] - iVar3) | 0x80;
                  *(byte *)(puVar1[1] - iVar3) = *(byte *)(puVar1[1] - iVar3) & 0x80;
                  iVar3 = iVar3 + -1;
                } while (iVar3 != -20000);
                *DAT_70b3ede4 = (int)puVar1;
                if (*DAT_70b3ede4 != 0) {
                  puVar1 = (undefined4 *)FUN_7134cb58(0x14);
                  uVar2 = thunk__IBDl(840000);
                  *puVar1 = uVar2;
                  uVar2 = thunk__IBDl(5000);
                  puVar1[1] = uVar2;
                  puVar1[2] = 5000;
                  iVar3 = 0;
                  *(undefined1 *)(puVar1 + 4) = 1;
                  puVar1[3] = 0xffffffff;
                  do {
                    *(byte *)(puVar1[1] - iVar3) = *(byte *)(puVar1[1] - iVar3) | 0x80;
                    *(byte *)(puVar1[1] - iVar3) = *(byte *)(puVar1[1] - iVar3) & 0x80;
                    iVar3 = iVar3 + -1;
                  } while (iVar3 != -5000);
                  *DAT_70b3ede8 = (int)puVar1;
                  if (*DAT_70b3ede8 != 0) {
                    uVar2 = FUN_7134d154(0x14);
                    iVar3 = FUN_7134d750(uVar2,0xf0,0x440,0);
                    *DAT_70b3edec = iVar3;
                    if (*DAT_70b3edec != 0) {
                      uVar2 = FUN_7134d81c(0x14);
                      iVar3 = FUN_7134de18(uVar2,20000,0x28,0);
                      *DAT_70b3edf8 = iVar3;
                      if (*DAT_70b3edf8 != 0) {
                        uVar2 = FUN_7134dee4(0x14);
                        iVar3 = FUN_7134e4e0(uVar2,200,100,0);
                        *DAT_70b3edfc = iVar3;
                        if (*DAT_70b3edfc != 0) {
                          uVar2 = FUN_7134e5ac(0x14);
                          iVar3 = FUN_7134eba8(uVar2,200,0x1a4,0);
                          *DAT_70b3ee00 = iVar3;
                          if (*DAT_70b3ee00 != 0) {
                            uVar2 = FUN_7134ec74(0x14);
                            iVar3 = FUN_7134f270(uVar2,1000,0x58,0);
                            *DAT_70b3ee04 = iVar3;
                            if (*DAT_70b3ee04 != 0) {
                              uVar2 = FUN_7134f33c(0x14);
                              iVar3 = FUN_7134f938(uVar2,200,0x24,0);
                              *DAT_70b3ee08 = iVar3;
                              if (*DAT_70b3ee08 != 0) {
                                uVar2 = FUN_7134fa04(0x14);
                                iVar3 = FUN_71350000(uVar2,3000,0x20,0);
                                *DAT_70b3ee0c = iVar3;
                                if (*DAT_70b3ee0c != 0) {
                                  uVar2 = FUN_713500cc(0x14);
                                  iVar3 = FUN_713506c8(uVar2,200,0xec,0);
                                  *DAT_70b3ee10 = iVar3;
                                  if (*DAT_70b3ee10 != 0) {
                                    return;
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
          }
        }
      }
    }
  }
  imp_raise(5);
  return;
}


// =========================================================================
// Function: FUN_71349b78
// Entry: 0x71349b78 | Size: 892 bytes
// =========================================================================

int FUN_71349b78(int param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int extraout_r1;
  uint uVar8;
  uint uVar9;
  int extraout_r2;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  int aiStack_38 [5];
  
  iVar2 = imp_sysconf(0x28);
  iVar3 = imp_sysconf(0x28);
  uVar11 = (param_1 + iVar2) - 1U & -iVar3;
  iVar2 = imp_sysconf(0x28);
  aiStack_38[4] = uVar11 + iVar2 * 2;
  uVar13 = 0x71349bcc;
  aiStack_38[3] = uVar11;
  do {
    iVar2 = imp_sysconf(0x28);
    iVar3 = imp_sysconf(0x28);
    iVar4 = imp_sysconf(0x28);
    uVar14 = iVar3 - 1U & -iVar4;
    iVar3 = imp_sysconf(0x28);
    uVar11 = iVar2 * 3 & -iVar3;
    if (uVar11 < uVar14) {
      uVar14 = (0x80b583ea < uVar13) + 0x9e3779b9;
      uVar11 = (uVar13 + 0x7f4a7c15 >> 0x1e | uVar14 * 4) ^ uVar13 + 0x7f4a7c15;
      lVar1 = (ulonglong)uVar11 * 0x1ce4e5b9;
      uVar8 = (uint)lVar1;
      uVar11 = (uVar14 ^ uVar14 >> 0x1e) * 0x1ce4e5b9 +
               uVar11 * -0x40a7b893 + (int)((ulonglong)lVar1 >> 0x20);
      uVar8 = (uVar8 >> 0x1b | uVar11 * 0x20) ^ uVar8;
      lVar1 = (ulonglong)uVar8 * 0x133111eb;
      uVar9 = (uint)lVar1;
      uVar9 = (uVar9 >> 0x1f |
              ((uVar11 ^ uVar11 >> 0x1b) * 0x133111eb +
              uVar8 * -0x6b2fb645 + (int)((ulonglong)lVar1 >> 0x20)) * 2) ^ uVar9;
      iVar2 = 0;
    }
    else {
      uVar9 = (0x80b583ea < uVar13) + 0x9e3779b9;
      uVar8 = (uVar13 + 0x7f4a7c15 >> 0x1e | uVar9 * 4) ^ uVar13 + 0x7f4a7c15;
      lVar1 = (ulonglong)uVar8 * 0x1ce4e5b9;
      uVar10 = (uint)lVar1;
      uVar8 = (uVar9 ^ uVar9 >> 0x1e) * 0x1ce4e5b9 +
              uVar8 * -0x40a7b893 + (int)((ulonglong)lVar1 >> 0x20);
      uVar10 = (uVar10 >> 0x1b | uVar8 * 0x20) ^ uVar10;
      lVar1 = (ulonglong)uVar10 * 0x133111eb;
      uVar9 = (uint)lVar1;
      uVar8 = (uVar8 ^ uVar8 >> 0x1b) * 0x133111eb +
              uVar10 * -0x6b2fb645 + (int)((ulonglong)lVar1 >> 0x20);
      uVar9 = (uVar9 >> 0x1f | uVar8 * 2) ^ uVar9;
      uVar5 = imp_sysconf(0x28);
      iVar2 = FUN_71ba0484(uVar11 - uVar14,uVar5);
      FUN_71ba3430(uVar9,uVar8 ^ uVar8 >> 0x1f,iVar2 + 1,0);
      iVar2 = imp_sysconf(0x28);
      iVar2 = iVar2 * extraout_r2 + uVar14;
    }
    iVar2 = iVar2 + aiStack_38[4];
    iVar3 = imp_sysconf(0x28);
    FUN_71ba33fc(uVar9,-0xecb62b8 - (iVar2 + 0x71349d48 + iVar3));
    iVar3 = imp_sysconf(0x28);
    iVar4 = imp_sysconf(0x28);
    aiStack_38[0] = -1;
    aiStack_38[1] = 0;
    iVar2 = imp_mmap(extraout_r1 + iVar3 + 0x31349d48U & -iVar4,iVar2,3,&DAT_00100022);
    piVar6 = aiStack_38;
    if (iVar2 != -1) goto LAB_71349e30;
    uVar13 = uVar13 + 1;
    piVar6 = (int *)imp___errno();
  } while (*piVar6 == 0x11);
  aiStack_38[0] = -1;
  aiStack_38[1] = 0;
  iVar2 = imp_mmap(0,aiStack_38[4],3,0x22);
  piVar6 = aiStack_38;
LAB_71349e30:
  for (; ((*piVar6 != 0x6a4dab1f || piVar6[1] != 0x679b29b ||
          (piVar6[2] != 0x6efdd0cf || piVar6[3] != -0x33ed938)) ||
         (piVar6[4] != -0x4103aa2a || piVar6[5] != 0x370f3a77)); piVar6 = piVar6 + 1) {
  }
  piVar12 = piVar6 + 0xc024;
  piVar6[*piVar12 + 0xc025] = iVar2;
  *piVar12 = *piVar12 + 1;
  iVar3 = imp_sysconf(0x28);
  iVar4 = imp_sysconf(0x28);
  iVar4 = aiStack_38[3] + iVar4;
  iVar7 = imp_sysconf(0x28);
  piVar6[*piVar12 + 0xc025] = iVar3 + iVar2 + (iVar4 - 1U & -iVar7);
  *piVar12 = *piVar12 + 1;
  iVar3 = imp_sysconf(0x28);
  return iVar3 + iVar2;
}


// =========================================================================
// Function: FUN_7134a174
// Entry: 0x7134a174 | Size: 892 bytes
// =========================================================================

int FUN_7134a174(int param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int extraout_r1;
  uint uVar8;
  uint uVar9;
  int extraout_r2;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  int aiStack_38 [5];
  
  iVar2 = imp_sysconf(0x28);
  iVar3 = imp_sysconf(0x28);
  uVar11 = (param_1 + iVar2) - 1U & -iVar3;
  iVar2 = imp_sysconf(0x28);
  aiStack_38[4] = uVar11 + iVar2 * 2;
  uVar13 = 0x7134a1c8;
  aiStack_38[3] = uVar11;
  do {
    iVar2 = imp_sysconf(0x28);
    iVar3 = imp_sysconf(0x28);
    iVar4 = imp_sysconf(0x28);
    uVar14 = iVar3 - 1U & -iVar4;
    iVar3 = imp_sysconf(0x28);
    uVar11 = iVar2 * 3 & -iVar3;
    if (uVar11 < uVar14) {
      uVar14 = (0x80b583ea < uVar13) + 0x9e3779b9;
      uVar11 = (uVar13 + 0x7f4a7c15 >> 0x1e | uVar14 * 4) ^ uVar13 + 0x7f4a7c15;
      lVar1 = (ulonglong)uVar11 * 0x1ce4e5b9;
      uVar8 = (uint)lVar1;
      uVar11 = (uVar14 ^ uVar14 >> 0x1e) * 0x1ce4e5b9 +
               uVar11 * -0x40a7b893 + (int)((ulonglong)lVar1 >> 0x20);
      uVar8 = (uVar8 >> 0x1b | uVar11 * 0x20) ^ uVar8;
      lVar1 = (ulonglong)uVar8 * 0x133111eb;
      uVar9 = (uint)lVar1;
      uVar9 = (uVar9 >> 0x1f |
              ((uVar11 ^ uVar11 >> 0x1b) * 0x133111eb +
              uVar8 * -0x6b2fb645 + (int)((ulonglong)lVar1 >> 0x20)) * 2) ^ uVar9;
      iVar2 = 0;
    }
    else {
      uVar9 = (0x80b583ea < uVar13) + 0x9e3779b9;
      uVar8 = (uVar13 + 0x7f4a7c15 >> 0x1e | uVar9 * 4) ^ uVar13 + 0x7f4a7c15;
      lVar1 = (ulonglong)uVar8 * 0x1ce4e5b9;
      uVar10 = (uint)lVar1;
      uVar8 = (uVar9 ^ uVar9 >> 0x1e) * 0x1ce4e5b9 +
              uVar8 * -0x40a7b893 + (int)((ulonglong)lVar1 >> 0x20);
      uVar10 = (uVar10 >> 0x1b | uVar8 * 0x20) ^ uVar10;
      lVar1 = (ulonglong)uVar10 * 0x133111eb;
      uVar9 = (uint)lVar1;
      uVar8 = (uVar8 ^ uVar8 >> 0x1b) * 0x133111eb +
              uVar10 * -0x6b2fb645 + (int)((ulonglong)lVar1 >> 0x20);
      uVar9 = (uVar9 >> 0x1f | uVar8 * 2) ^ uVar9;
      uVar5 = imp_sysconf(0x28);
      iVar2 = FUN_71ba0484(uVar11 - uVar14,uVar5);
      FUN_71ba3430(uVar9,uVar8 ^ uVar8 >> 0x1f,iVar2 + 1,0);
      iVar2 = imp_sysconf(0x28);
      iVar2 = iVar2 * extraout_r2 + uVar14;
    }
    iVar2 = iVar2 + aiStack_38[4];
    iVar3 = imp_sysconf(0x28);
    FUN_71ba33fc(uVar9,-0xecb5cbc - (iVar2 + 0x7134a344 + iVar3));
    iVar3 = imp_sysconf(0x28);
    iVar4 = imp_sysconf(0x28);
    aiStack_38[0] = -1;
    aiStack_38[1] = 0;
    iVar2 = imp_mmap(extraout_r1 + iVar3 + 0x3134a344U & -iVar4,iVar2,3,&DAT_00100022);
    piVar6 = aiStack_38;
    if (iVar2 != -1) goto LAB_7134a42c;
    uVar13 = uVar13 + 1;
    piVar6 = (int *)imp___errno();
  } while (*piVar6 == 0x11);
  aiStack_38[0] = -1;
  aiStack_38[1] = 0;
  iVar2 = imp_mmap(0,aiStack_38[4],3,0x22);
  piVar6 = aiStack_38;
LAB_7134a42c:
  for (; ((*piVar6 != 0x6a4dab1f || piVar6[1] != 0x679b29b ||
          (piVar6[2] != 0x6efdd0cf || piVar6[3] != -0x33ed938)) ||
         (piVar6[4] != -0x4103aa2a || piVar6[5] != 0x370f3a77)); piVar6 = piVar6 + 1) {
  }
  piVar12 = piVar6 + 0xc024;
  piVar6[*piVar12 + 0xc025] = iVar2;
  *piVar12 = *piVar12 + 1;
  iVar3 = imp_sysconf(0x28);
  iVar4 = imp_sysconf(0x28);
  iVar4 = aiStack_38[3] + iVar4;
  iVar7 = imp_sysconf(0x28);
  piVar6[*piVar12 + 0xc025] = iVar3 + iVar2 + (iVar4 - 1U & -iVar7);
  *piVar12 = *piVar12 + 1;
  iVar3 = imp_sysconf(0x28);
  return iVar3 + iVar2;
}


// =========================================================================
// Function: FUN_7134a770
// Entry: 0x7134a770 | Size: 892 bytes
// =========================================================================

int FUN_7134a770(int param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int extraout_r1;
  uint uVar8;
  uint uVar9;
  int extraout_r2;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  int aiStack_38 [5];
  
  iVar2 = imp_sysconf(0x28);
  iVar3 = imp_sysconf(0x28);
  uVar11 = (param_1 + iVar2) - 1U & -iVar3;
  iVar2 = imp_sysconf(0x28);
  aiStack_38[4] = uVar11 + iVar2 * 2;
  uVar13 = 0x7134a7c4;
  aiStack_38[3] = uVar11;
  do {
    iVar2 = imp_sysconf(0x28);
    iVar3 = imp_sysconf(0x28);
    iVar4 = imp_sysconf(0x28);
    uVar14 = iVar3 - 1U & -iVar4;
    iVar3 = imp_sysconf(0x28);
    uVar11 = iVar2 * 3 & -iVar3;
    if (uVar11 < uVar14) {
      uVar14 = (0x80b583ea < uVar13) + 0x9e3779b9;
      uVar11 = (uVar13 + 0x7f4a7c15 >> 0x1e | uVar14 * 4) ^ uVar13 + 0x7f4a7c15;
      lVar1 = (ulonglong)uVar11 * 0x1ce4e5b9;
      uVar8 = (uint)lVar1;
      uVar11 = (uVar14 ^ uVar14 >> 0x1e) * 0x1ce4e5b9 +
               uVar11 * -0x40a7b893 + (int)((ulonglong)lVar1 >> 0x20);
      uVar8 = (uVar8 >> 0x1b | uVar11 * 0x20) ^ uVar8;
      lVar1 = (ulonglong)uVar8 * 0x133111eb;
      uVar9 = (uint)lVar1;
      uVar9 = (uVar9 >> 0x1f |
              ((uVar11 ^ uVar11 >> 0x1b) * 0x133111eb +
              uVar8 * -0x6b2fb645 + (int)((ulonglong)lVar1 >> 0x20)) * 2) ^ uVar9;
      iVar2 = 0;
    }
    else {
      uVar9 = (0x80b583ea < uVar13) + 0x9e3779b9;
      uVar8 = (uVar13 + 0x7f4a7c15 >> 0x1e | uVar9 * 4) ^ uVar13 + 0x7f4a7c15;
      lVar1 = (ulonglong)uVar8 * 0x1ce4e5b9;
      uVar10 = (uint)lVar1;
      uVar8 = (uVar9 ^ uVar9 >> 0x1e) * 0x1ce4e5b9 +
              uVar8 * -0x40a7b893 + (int)((ulonglong)lVar1 >> 0x20);
      uVar10 = (uVar10 >> 0x1b | uVar8 * 0x20) ^ uVar10;
      lVar1 = (ulonglong)uVar10 * 0x133111eb;
      uVar9 = (uint)lVar1;
      uVar8 = (uVar8 ^ uVar8 >> 0x1b) * 0x133111eb +
              uVar10 * -0x6b2fb645 + (int)((ulonglong)lVar1 >> 0x20);
      uVar9 = (uVar9 >> 0x1f | uVar8 * 2) ^ uVar9;
      uVar5 = imp_sysconf(0x28);
      iVar2 = FUN_71ba0484(uVar11 - uVar14,uVar5);
      FUN_71ba3430(uVar9,uVar8 ^ uVar8 >> 0x1f,iVar2 + 1,0);
      iVar2 = imp_sysconf(0x28);
      iVar2 = iVar2 * extraout_r2 + uVar14;
    }
    iVar2 = iVar2 + aiStack_38[4];
    iVar3 = imp_sysconf(0x28);
    FUN_71ba33fc(uVar9,-0xecb56c0 - (iVar2 + 0x7134a940 + iVar3));
    iVar3 = imp_sysconf(0x28);
    iVar4 = imp_sysconf(0x28);
    aiStack_38[0] = -1;
    aiStack_38[1] = 0;
    iVar2 = imp_mmap(extraout_r1 + iVar3 + 0x3134a940U & -iVar4,iVar2,3,&DAT_00100022);
    piVar6 = aiStack_38;
    if (iVar2 != -1) goto LAB_7134aa28;
    uVar13 = uVar13 + 1;
    piVar6 = (int *)imp___errno();
  } while (*piVar6 == 0x11);
  aiStack_38[0] = -1;
  aiStack_38[1] = 0;
  iVar2 = imp_mmap(0,aiStack_38[4],3,0x22);
  piVar6 = aiStack_38;
LAB_7134aa28:
  for (; ((*piVar6 != 0x6a4dab1f || piVar6[1] != 0x679b29b ||
          (piVar6[2] != 0x6efdd0cf || piVar6[3] != -0x33ed938)) ||
         (piVar6[4] != -0x4103aa2a || piVar6[5] != 0x370f3a77)); piVar6 = piVar6 + 1) {
  }
  piVar12 = piVar6 + 0xc024;
  piVar6[*piVar12 + 0xc025] = iVar2;
  *piVar12 = *piVar12 + 1;
  iVar3 = imp_sysconf(0x28);
  iVar4 = imp_sysconf(0x28);
  iVar4 = aiStack_38[3] + iVar4;
  iVar7 = imp_sysconf(0x28);
  piVar6[*piVar12 + 0xc025] = iVar3 + iVar2 + (iVar4 - 1U & -iVar7);
  *piVar12 = *piVar12 + 1;
  iVar3 = imp_sysconf(0x28);
  return iVar3 + iVar2;
}


// =========================================================================
// Function: FUN_7134ad6c
// Entry: 0x7134ad6c | Size: 892 bytes
// =========================================================================

int FUN_7134ad6c(int param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int extraout_r1;
  uint uVar8;
  uint uVar9;
  int extraout_r2;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  int aiStack_38 [5];
  
  iVar2 = imp_sysconf(0x28);
  iVar3 = imp_sysconf(0x28);
  uVar11 = (param_1 + iVar2) - 1U & -iVar3;
  iVar2 = imp_sysconf(0x28);
  aiStack_38[4] = uVar11 + iVar2 * 2;
  uVar13 = 0x7134adc0;
  aiStack_38[3] = uVar11;
  do {
    iVar2 = imp_sysconf(0x28);
    iVar3 = imp_sysconf(0x28);
    iVar4 = imp_sysconf(0x28);
    uVar14 = iVar3 - 1U & -iVar4;
    iVar3 = imp_sysconf(0x28);
    uVar11 = iVar2 * 3 & -iVar3;
    if (uVar11 < uVar14) {
      uVar14 = (0x80b583ea < uVar13) + 0x9e3779b9;
      uVar11 = (uVar13 + 0x7f4a7c15 >> 0x1e | uVar14 * 4) ^ uVar13 + 0x7f4a7c15;
      lVar1 = (ulonglong)uVar11 * 0x1ce4e5b9;
      uVar8 = (uint)lVar1;
      uVar11 = (uVar14 ^ uVar14 >> 0x1e) * 0x1ce4e5b9 +
               uVar11 * -0x40a7b893 + (int)((ulonglong)lVar1 >> 0x20);
      uVar8 = (uVar8 >> 0x1b | uVar11 * 0x20) ^ uVar8;
      lVar1 = (ulonglong)uVar8 * 0x133111eb;
      uVar9 = (uint)lVar1;
      uVar9 = (uVar9 >> 0x1f |
              ((uVar11 ^ uVar11 >> 0x1b) * 0x133111eb +
              uVar8 * -0x6b2fb645 + (int)((ulonglong)lVar1 >> 0x20)) * 2) ^ uVar9;
      iVar2 = 0;
    }
    else {
      uVar9 = (0x80b583ea < uVar13) + 0x9e3779b9;
      uVar8 = (uVar13 + 0x7f4a7c15 >> 0x1e | uVar9 * 4) ^ uVar13 + 0x7f4a7c15;
      lVar1 = (ulonglong)uVar8 * 0x1ce4e5b9;
      uVar10 = (uint)lVar1;
      uVar8 = (uVar9 ^ uVar9 >> 0x1e) * 0x1ce4e5b9 +
              uVar8 * -0x40a7b893 + (int)((ulonglong)lVar1 >> 0x20);
      uVar10 = (uVar10 >> 0x1b | uVar8 * 0x20) ^ uVar10;
      lVar1 = (ulonglong)uVar10 * 0x133111eb;
      uVar9 = (uint)lVar1;
      uVar8 = (uVar8 ^ uVar8 >> 0x1b) * 0x133111eb +
              uVar10 * -0x6b2fb645 + (int)((ulonglong)lVar1 >> 0x20);
      uVar9 = (uVar9 >> 0x1f | uVar8 * 2) ^ uVar9;
      uVar5 = imp_sysconf(0x28);
      iVar2 = FUN_71ba0484(uVar11 - uVar14,uVar5);
      FUN_71ba3430(uVar9,uVar8 ^ uVar8 >> 0x1f,iVar2 + 1,0);
      iVar2 = imp_sysconf(0x28);
      iVar2 = iVar2 * extraout_r2 + uVar14;
    }
    iVar2 = iVar2 + aiStack_38[4];
    iVar3 = imp_sysconf(0x28);
    FUN_71ba33fc(uVar9,-0xecb50c4 - (iVar2 + 0x7134af3c + iVar3));
    iVar3 = imp_sysconf(0x28);
    iVar4 = imp_sysconf(0x28);
    aiStack_38[0] = -1;
    aiStack_38[1] = 0;
    iVar2 = imp_mmap(extraout_r1 + iVar3 + 0x3134af3cU & -iVar4,iVar2,3,&DAT_00100022);
    piVar6 = aiStack_38;
    if (iVar2 != -1) goto LAB_7134b024;
    uVar13 = uVar13 + 1;
    piVar6 = (int *)imp___errno();
  } while (*piVar6 == 0x11);
  aiStack_38[0] = -1;
  aiStack_38[1] = 0;
  iVar2 = imp_mmap(0,aiStack_38[4],3,0x22);
  piVar6 = aiStack_38;
LAB_7134b024:
  for (; ((*piVar6 != 0x6a4dab1f || piVar6[1] != 0x679b29b ||
          (piVar6[2] != 0x6efdd0cf || piVar6[3] != -0x33ed938)) ||
         (piVar6[4] != -0x4103aa2a || piVar6[5] != 0x370f3a77)); piVar6 = piVar6 + 1) {
  }
  piVar12 = piVar6 + 0xc024;
  piVar6[*piVar12 + 0xc025] = iVar2;
  *piVar12 = *piVar12 + 1;
  iVar3 = imp_sysconf(0x28);
  iVar4 = imp_sysconf(0x28);
  iVar4 = aiStack_38[3] + iVar4;
  iVar7 = imp_sysconf(0x28);
  piVar6[*piVar12 + 0xc025] = iVar3 + iVar2 + (iVar4 - 1U & -iVar7);
  *piVar12 = *piVar12 + 1;
  iVar3 = imp_sysconf(0x28);
  return iVar3 + iVar2;
}


// =========================================================================
// Function: FUN_7134b368
// Entry: 0x7134b368 | Size: 892 bytes
// =========================================================================

int FUN_7134b368(int param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int extraout_r1;
  uint uVar8;
  uint uVar9;
  int extraout_r2;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  int aiStack_38 [5];
  
  iVar2 = imp_sysconf(0x28);
  iVar3 = imp_sysconf(0x28);
  uVar11 = (param_1 + iVar2) - 1U & -iVar3;
  iVar2 = imp_sysconf(0x28);
  aiStack_38[4] = uVar11 + iVar2 * 2;
  uVar13 = 0x7134b3bc;
  aiStack_38[3] = uVar11;
  do {
    iVar2 = imp_sysconf(0x28);
    iVar3 = imp_sysconf(0x28);
    iVar4 = imp_sysconf(0x28);
    uVar14 = iVar3 - 1U & -iVar4;
    iVar3 = imp_sysconf(0x28);
    uVar11 = iVar2 * 3 & -iVar3;
    if (uVar11 < uVar14) {
      uVar14 = (0x80b583ea < uVar13) + 0x9e3779b9;
      uVar11 = (uVar13 + 0x7f4a7c15 >> 0x1e | uVar14 * 4) ^ uVar13 + 0x7f4a7c15;
      lVar1 = (ulonglong)uVar11 * 0x1ce4e5b9;
      uVar8 = (uint)lVar1;
      uVar11 = (uVar14 ^ uVar14 >> 0x1e) * 0x1ce4e5b9 +
               uVar11 * -0x40a7b893 + (int)((ulonglong)lVar1 >> 0x20);
      uVar8 = (uVar8 >> 0x1b | uVar11 * 0x20) ^ uVar8;
      lVar1 = (ulonglong)uVar8 * 0x133111eb;
      uVar9 = (uint)lVar1;
      uVar9 = (uVar9 >> 0x1f |
              ((uVar11 ^ uVar11 >> 0x1b) * 0x133111eb +
              uVar8 * -0x6b2fb645 + (int)((ulonglong)lVar1 >> 0x20)) * 2) ^ uVar9;
      iVar2 = 0;
    }
    else {
      uVar9 = (0x80b583ea < uVar13) + 0x9e3779b9;
      uVar8 = (uVar13 + 0x7f4a7c15 >> 0x1e | uVar9 * 4) ^ uVar13 + 0x7f4a7c15;
      lVar1 = (ulonglong)uVar8 * 0x1ce4e5b9;
      uVar10 = (uint)lVar1;
      uVar8 = (uVar9 ^ uVar9 >> 0x1e) * 0x1ce4e5b9 +
              uVar8 * -0x40a7b893 + (int)((ulonglong)lVar1 >> 0x20);
      uVar10 = (uVar10 >> 0x1b | uVar8 * 0x20) ^ uVar10;
      lVar1 = (ulonglong)uVar10 * 0x133111eb;
      uVar9 = (uint)lVar1;
      uVar8 = (uVar8 ^ uVar8 >> 0x1b) * 0x133111eb +
              uVar10 * -0x6b2fb645 + (int)((ulonglong)lVar1 >> 0x20);
      uVar9 = (uVar9 >> 0x1f | uVar8 * 2) ^ uVar9;
      uVar5 = imp_sysconf(0x28);
      iVar2 = FUN_71ba0484(uVar11 - uVar14,uVar5);
      FUN_71ba3430(uVar9,uVar8 ^ uVar8 >> 0x1f,iVar2 + 1,0);
      iVar2 = imp_sysconf(0x28);
      iVar2 = iVar2 * extraout_r2 + uVar14;
    }
    iVar2 = iVar2 + aiStack_38[4];
    iVar3 = imp_sysconf(0x28);
    FUN_71ba33fc(uVar9,-0xecb4ac8 - (iVar2 + 0x7134b538 + iVar3));
    iVar3 = imp_sysconf(0x28);
    iVar4 = imp_sysconf(0x28);
    aiStack_38[0] = -1;
    aiStack_38[1] = 0;
    iVar2 = imp_mmap(extraout_r1 + iVar3 + 0x3134b538U & -iVar4,iVar2,3,&DAT_00100022);
    piVar6 = aiStack_38;
    if (iVar2 != -1) goto LAB_7134b620;
    uVar13 = uVar13 + 1;
    piVar6 = (int *)imp___errno();
  } while (*piVar6 == 0x11);
  aiStack_38[0] = -1;
  aiStack_38[1] = 0;
  iVar2 = imp_mmap(0,aiStack_38[4],3,0x22);
  piVar6 = aiStack_38;
LAB_7134b620:
  for (; ((*piVar6 != 0x6a4dab1f || piVar6[1] != 0x679b29b ||
          (piVar6[2] != 0x6efdd0cf || piVar6[3] != -0x33ed938)) ||
         (piVar6[4] != -0x4103aa2a || piVar6[5] != 0x370f3a77)); piVar6 = piVar6 + 1) {
  }
  piVar12 = piVar6 + 0xc024;
  piVar6[*piVar12 + 0xc025] = iVar2;
  *piVar12 = *piVar12 + 1;
  iVar3 = imp_sysconf(0x28);
  iVar4 = imp_sysconf(0x28);
  iVar4 = aiStack_38[3] + iVar4;
  iVar7 = imp_sysconf(0x28);
  piVar6[*piVar12 + 0xc025] = iVar3 + iVar2 + (iVar4 - 1U & -iVar7);
  *piVar12 = *piVar12 + 1;
  iVar3 = imp_sysconf(0x28);
  return iVar3 + iVar2;
}


// =========================================================================
// Function: FUN_7134b964
// Entry: 0x7134b964 | Size: 892 bytes
// =========================================================================

int FUN_7134b964(int param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int extraout_r1;
  uint uVar8;
  uint uVar9;
  int extraout_r2;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  int aiStack_38 [5];
  
  iVar2 = imp_sysconf(0x28);
  iVar3 = imp_sysconf(0x28);
  uVar11 = (param_1 + iVar2) - 1U & -iVar3;
  iVar2 = imp_sysconf(0x28);
  aiStack_38[4] = uVar11 + iVar2 * 2;
  uVar13 = 0x7134b9b8;
  aiStack_38[3] = uVar11;
  do {
    iVar2 = imp_sysconf(0x28);
    iVar3 = imp_sysconf(0x28);
    iVar4 = imp_sysconf(0x28);
    uVar14 = iVar3 - 1U & -iVar4;
    iVar3 = imp_sysconf(0x28);
    uVar11 = iVar2 * 3 & -iVar3;
    if (uVar11 < uVar14) {
      uVar14 = (0x80b583ea < uVar13) + 0x9e3779b9;
      uVar11 = (uVar13 + 0x7f4a7c15 >> 0x1e | uVar14 * 4) ^ uVar13 + 0x7f4a7c15;
      lVar1 = (ulonglong)uVar11 * 0x1ce4e5b9;
      uVar8 = (uint)lVar1;
      uVar11 = (uVar14 ^ uVar14 >> 0x1e) * 0x1ce4e5b9 +
               uVar11 * -0x40a7b893 + (int)((ulonglong)lVar1 >> 0x20);
      uVar8 = (uVar8 >> 0x1b | uVar11 * 0x20) ^ uVar8;
      lVar1 = (ulonglong)uVar8 * 0x133111eb;
      uVar9 = (uint)lVar1;
      uVar9 = (uVar9 >> 0x1f |
              ((uVar11 ^ uVar11 >> 0x1b) * 0x133111eb +
              uVar8 * -0x6b2fb645 + (int)((ulonglong)lVar1 >> 0x20)) * 2) ^ uVar9;
      iVar2 = 0;
    }
    else {
      uVar9 = (0x80b583ea < uVar13) + 0x9e3779b9;
      uVar8 = (uVar13 + 0x7f4a7c15 >> 0x1e | uVar9 * 4) ^ uVar13 + 0x7f4a7c15;
      lVar1 = (ulonglong)uVar8 * 0x1ce4e5b9;
      uVar10 = (uint)lVar1;
      uVar8 = (uVar9 ^ uVar9 >> 0x1e) * 0x1ce4e5b9 +
              uVar8 * -0x40a7b893 + (int)((ulonglong)lVar1 >> 0x20);
      uVar10 = (uVar10 >> 0x1b | uVar8 * 0x20) ^ uVar10;
      lVar1 = (ulonglong)uVar10 * 0x133111eb;
      uVar9 = (uint)lVar1;
      uVar8 = (uVar8 ^ uVar8 >> 0x1b) * 0x133111eb +
              uVar10 * -0x6b2fb645 + (int)((ulonglong)lVar1 >> 0x20);
      uVar9 = (uVar9 >> 0x1f | uVar8 * 2) ^ uVar9;
      uVar5 = imp_sysconf(0x28);
      iVar2 = FUN_71ba0484(uVar11 - uVar14,uVar5);
      FUN_71ba3430(uVar9,uVar8 ^ uVar8 >> 0x1f,iVar2 + 1,0);
      iVar2 = imp_sysconf(0x28);
      iVar2 = iVar2 * extraout_r2 + uVar14;
    }
    iVar2 = iVar2 + aiStack_38[4];
    iVar3 = imp_sysconf(0x28);
    FUN_71ba33fc(uVar9,-0xecb44cc - (iVar2 + 0x7134bb34 + iVar3));
    iVar3 = imp_sysconf(0x28);
    iVar4 = imp_sysconf(0x28);
    aiStack_38[0] = -1;
    aiStack_38[1] = 0;
    iVar2 = imp_mmap(extraout_r1 + iVar3 + 0x3134bb34U & -iVar4,iVar2,3,&DAT_00100022);
    piVar6 = aiStack_38;
    if (iVar2 != -1) goto LAB_7134bc1c;
    uVar13 = uVar13 + 1;
    piVar6 = (int *)imp___errno();
  } while (*piVar6 == 0x11);
  aiStack_38[0] = -1;
  aiStack_38[1] = 0;
  iVar2 = imp_mmap(0,aiStack_38[4],3,0x22);
  piVar6 = aiStack_38;
LAB_7134bc1c:
  for (; ((*piVar6 != 0x6a4dab1f || piVar6[1] != 0x679b29b ||
          (piVar6[2] != 0x6efdd0cf || piVar6[3] != -0x33ed938)) ||
         (piVar6[4] != -0x4103aa2a || piVar6[5] != 0x370f3a77)); piVar6 = piVar6 + 1) {
  }
  piVar12 = piVar6 + 0xc024;
  piVar6[*piVar12 + 0xc025] = iVar2;
  *piVar12 = *piVar12 + 1;
  iVar3 = imp_sysconf(0x28);
  iVar4 = imp_sysconf(0x28);
  iVar4 = aiStack_38[3] + iVar4;
  iVar7 = imp_sysconf(0x28);
  piVar6[*piVar12 + 0xc025] = iVar3 + iVar2 + (iVar4 - 1U & -iVar7);
  *piVar12 = *piVar12 + 1;
  iVar3 = imp_sysconf(0x28);
  return iVar3 + iVar2;
}


// =========================================================================
// Function: FUN_7134bf60
// Entry: 0x7134bf60 | Size: 892 bytes
// =========================================================================

int FUN_7134bf60(int param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int extraout_r1;
  uint uVar8;
  uint uVar9;
  int extraout_r2;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  int aiStack_38 [5];
  
  iVar2 = imp_sysconf(0x28);
  iVar3 = imp_sysconf(0x28);
  uVar11 = (param_1 + iVar2) - 1U & -iVar3;
  iVar2 = imp_sysconf(0x28);
  aiStack_38[4] = uVar11 + iVar2 * 2;
  uVar13 = 0x7134bfb4;
  aiStack_38[3] = uVar11;
  do {
    iVar2 = imp_sysconf(0x28);
    iVar3 = imp_sysconf(0x28);
    iVar4 = imp_sysconf(0x28);
    uVar14 = iVar3 - 1U & -iVar4;
    iVar3 = imp_sysconf(0x28);
    uVar11 = iVar2 * 3 & -iVar3;
    if (uVar11 < uVar14) {
      uVar14 = (0x80b583ea < uVar13) + 0x9e3779b9;
      uVar11 = (uVar13 + 0x7f4a7c15 >> 0x1e | uVar14 * 4) ^ uVar13 + 0x7f4a7c15;
      lVar1 = (ulonglong)uVar11 * 0x1ce4e5b9;
      uVar8 = (uint)lVar1;
      uVar11 = (uVar14 ^ uVar14 >> 0x1e) * 0x1ce4e5b9 +
               uVar11 * -0x40a7b893 + (int)((ulonglong)lVar1 >> 0x20);
      uVar8 = (uVar8 >> 0x1b | uVar11 * 0x20) ^ uVar8;
      lVar1 = (ulonglong)uVar8 * 0x133111eb;
      uVar9 = (uint)lVar1;
      uVar9 = (uVar9 >> 0x1f |
              ((uVar11 ^ uVar11 >> 0x1b) * 0x133111eb +
              uVar8 * -0x6b2fb645 + (int)((ulonglong)lVar1 >> 0x20)) * 2) ^ uVar9;
      iVar2 = 0;
    }
    else {
      uVar9 = (0x80b583ea < uVar13) + 0x9e3779b9;
      uVar8 = (uVar13 + 0x7f4a7c15 >> 0x1e | uVar9 * 4) ^ uVar13 + 0x7f4a7c15;
      lVar1 = (ulonglong)uVar8 * 0x1ce4e5b9;
      uVar10 = (uint)lVar1;
      uVar8 = (uVar9 ^ uVar9 >> 0x1e) * 0x1ce4e5b9 +
              uVar8 * -0x40a7b893 + (int)((ulonglong)lVar1 >> 0x20);
      uVar10 = (uVar10 >> 0x1b | uVar8 * 0x20) ^ uVar10;
      lVar1 = (ulonglong)uVar10 * 0x133111eb;
      uVar9 = (uint)lVar1;
      uVar8 = (uVar8 ^ uVar8 >> 0x1b) * 0x133111eb +
              uVar10 * -0x6b2fb645 + (int)((ulonglong)lVar1 >> 0x20);
      uVar9 = (uVar9 >> 0x1f | uVar8 * 2) ^ uVar9;
      uVar5 = imp_sysconf(0x28);
      iVar2 = FUN_71ba0484(uVar11 - uVar14,uVar5);
      FUN_71ba3430(uVar9,uVar8 ^ uVar8 >> 0x1f,iVar2 + 1,0);
      iVar2 = imp_sysconf(0x28);
      iVar2 = iVar2 * extraout_r2 + uVar14;
    }
    iVar2 = iVar2 + aiStack_38[4];
    iVar3 = imp_sysconf(0x28);
    FUN_71ba33fc(uVar9,-0xecb3ed0 - (iVar2 + 0x7134c130 + iVar3));
    iVar3 = imp_sysconf(0x28);
    iVar4 = imp_sysconf(0x28);
    aiStack_38[0] = -1;
    aiStack_38[1] = 0;
    iVar2 = imp_mmap(extraout_r1 + iVar3 + 0x3134c130U & -iVar4,iVar2,3,&DAT_00100022);
    piVar6 = aiStack_38;
    if (iVar2 != -1) goto LAB_7134c218;
    uVar13 = uVar13 + 1;
    piVar6 = (int *)imp___errno();
  } while (*piVar6 == 0x11);
  aiStack_38[0] = -1;
  aiStack_38[1] = 0;
  iVar2 = imp_mmap(0,aiStack_38[4],3,0x22);
  piVar6 = aiStack_38;
LAB_7134c218:
  for (; ((*piVar6 != 0x6a4dab1f || piVar6[1] != 0x679b29b ||
          (piVar6[2] != 0x6efdd0cf || piVar6[3] != -0x33ed938)) ||
         (piVar6[4] != -0x4103aa2a || piVar6[5] != 0x370f3a77)); piVar6 = piVar6 + 1) {
  }
  piVar12 = piVar6 + 0xc024;
  piVar6[*piVar12 + 0xc025] = iVar2;
  *piVar12 = *piVar12 + 1;
  iVar3 = imp_sysconf(0x28);
  iVar4 = imp_sysconf(0x28);
  iVar4 = aiStack_38[3] + iVar4;
  iVar7 = imp_sysconf(0x28);
  piVar6[*piVar12 + 0xc025] = iVar3 + iVar2 + (iVar4 - 1U & -iVar7);
  *piVar12 = *piVar12 + 1;
  iVar3 = imp_sysconf(0x28);
  return iVar3 + iVar2;
}


// =========================================================================
// Function: FUN_7134c55c
// Entry: 0x7134c55c | Size: 892 bytes
// =========================================================================

int FUN_7134c55c(int param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int extraout_r1;
  uint uVar8;
  uint uVar9;
  int extraout_r2;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  int aiStack_38 [5];
  
  iVar2 = imp_sysconf(0x28);
  iVar3 = imp_sysconf(0x28);
  uVar11 = (param_1 + iVar2) - 1U & -iVar3;
  iVar2 = imp_sysconf(0x28);
  aiStack_38[4] = uVar11 + iVar2 * 2;
  uVar13 = 0x7134c5b0;
  aiStack_38[3] = uVar11;
  do {
    iVar2 = imp_sysconf(0x28);
    iVar3 = imp_sysconf(0x28);
    iVar4 = imp_sysconf(0x28);
    uVar14 = iVar3 - 1U & -iVar4;
    iVar3 = imp_sysconf(0x28);
    uVar11 = iVar2 * 3 & -iVar3;
    if (uVar11 < uVar14) {
      uVar14 = (0x80b583ea < uVar13) + 0x9e3779b9;
      uVar11 = (uVar13 + 0x7f4a7c15 >> 0x1e | uVar14 * 4) ^ uVar13 + 0x7f4a7c15;
      lVar1 = (ulonglong)uVar11 * 0x1ce4e5b9;
      uVar8 = (uint)lVar1;
      uVar11 = (uVar14 ^ uVar14 >> 0x1e) * 0x1ce4e5b9 +
               uVar11 * -0x40a7b893 + (int)((ulonglong)lVar1 >> 0x20);
      uVar8 = (uVar8 >> 0x1b | uVar11 * 0x20) ^ uVar8;
      lVar1 = (ulonglong)uVar8 * 0x133111eb;
      uVar9 = (uint)lVar1;
      uVar9 = (uVar9 >> 0x1f |
              ((uVar11 ^ uVar11 >> 0x1b) * 0x133111eb +
              uVar8 * -0x6b2fb645 + (int)((ulonglong)lVar1 >> 0x20)) * 2) ^ uVar9;
      iVar2 = 0;
    }
    else {
      uVar9 = (0x80b583ea < uVar13) + 0x9e3779b9;
      uVar8 = (uVar13 + 0x7f4a7c15 >> 0x1e | uVar9 * 4) ^ uVar13 + 0x7f4a7c15;
      lVar1 = (ulonglong)uVar8 * 0x1ce4e5b9;
      uVar10 = (uint)lVar1;
      uVar8 = (uVar9 ^ uVar9 >> 0x1e) * 0x1ce4e5b9 +
              uVar8 * -0x40a7b893 + (int)((ulonglong)lVar1 >> 0x20);
      uVar10 = (uVar10 >> 0x1b | uVar8 * 0x20) ^ uVar10;
      lVar1 = (ulonglong)uVar10 * 0x133111eb;
      uVar9 = (uint)lVar1;
      uVar8 = (uVar8 ^ uVar8 >> 0x1b) * 0x133111eb +
              uVar10 * -0x6b2fb645 + (int)((ulonglong)lVar1 >> 0x20);
      uVar9 = (uVar9 >> 0x1f | uVar8 * 2) ^ uVar9;
      uVar5 = imp_sysconf(0x28);
      iVar2 = FUN_71ba0484(uVar11 - uVar14,uVar5);
      FUN_71ba3430(uVar9,uVar8 ^ uVar8 >> 0x1f,iVar2 + 1,0);
      iVar2 = imp_sysconf(0x28);
      iVar2 = iVar2 * extraout_r2 + uVar14;
    }
    iVar2 = iVar2 + aiStack_38[4];
    iVar3 = imp_sysconf(0x28);
    FUN_71ba33fc(uVar9,-0xecb38d4 - (iVar2 + 0x7134c72c + iVar3));
    iVar3 = imp_sysconf(0x28);
    iVar4 = imp_sysconf(0x28);
    aiStack_38[0] = -1;
    aiStack_38[1] = 0;
    iVar2 = imp_mmap(extraout_r1 + iVar3 + 0x3134c72cU & -iVar4,iVar2,3,&DAT_00100022);
    piVar6 = aiStack_38;
    if (iVar2 != -1) goto LAB_7134c814;
    uVar13 = uVar13 + 1;
    piVar6 = (int *)imp___errno();
  } while (*piVar6 == 0x11);
  aiStack_38[0] = -1;
  aiStack_38[1] = 0;
  iVar2 = imp_mmap(0,aiStack_38[4],3,0x22);
  piVar6 = aiStack_38;
LAB_7134c814:
  for (; ((*piVar6 != 0x6a4dab1f || piVar6[1] != 0x679b29b ||
          (piVar6[2] != 0x6efdd0cf || piVar6[3] != -0x33ed938)) ||
         (piVar6[4] != -0x4103aa2a || piVar6[5] != 0x370f3a77)); piVar6 = piVar6 + 1) {
  }
  piVar12 = piVar6 + 0xc024;
  piVar6[*piVar12 + 0xc025] = iVar2;
  *piVar12 = *piVar12 + 1;
  iVar3 = imp_sysconf(0x28);
  iVar4 = imp_sysconf(0x28);
  iVar4 = aiStack_38[3] + iVar4;
  iVar7 = imp_sysconf(0x28);
  piVar6[*piVar12 + 0xc025] = iVar3 + iVar2 + (iVar4 - 1U & -iVar7);
  *piVar12 = *piVar12 + 1;
  iVar3 = imp_sysconf(0x28);
  return iVar3 + iVar2;
}


// =========================================================================
// Function: FUN_7134cb58
// Entry: 0x7134cb58 | Size: 892 bytes
// =========================================================================

int FUN_7134cb58(int param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int extraout_r1;
  uint uVar8;
  uint uVar9;
  int extraout_r2;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  int aiStack_38 [5];
  
  iVar2 = imp_sysconf(0x28);
  iVar3 = imp_sysconf(0x28);
  uVar11 = (param_1 + iVar2) - 1U & -iVar3;
  iVar2 = imp_sysconf(0x28);
  aiStack_38[4] = uVar11 + iVar2 * 2;
  uVar13 = 0x7134cbac;
  aiStack_38[3] = uVar11;
  do {
    iVar2 = imp_sysconf(0x28);
    iVar3 = imp_sysconf(0x28);
    iVar4 = imp_sysconf(0x28);
    uVar14 = iVar3 - 1U & -iVar4;
    iVar3 = imp_sysconf(0x28);
    uVar11 = iVar2 * 3 & -iVar3;
    if (uVar11 < uVar14) {
      uVar14 = (0x80b583ea < uVar13) + 0x9e3779b9;
      uVar11 = (uVar13 + 0x7f4a7c15 >> 0x1e | uVar14 * 4) ^ uVar13 + 0x7f4a7c15;
      lVar1 = (ulonglong)uVar11 * 0x1ce4e5b9;
      uVar8 = (uint)lVar1;
      uVar11 = (uVar14 ^ uVar14 >> 0x1e) * 0x1ce4e5b9 +
               uVar11 * -0x40a7b893 + (int)((ulonglong)lVar1 >> 0x20);
      uVar8 = (uVar8 >> 0x1b | uVar11 * 0x20) ^ uVar8;
      lVar1 = (ulonglong)uVar8 * 0x133111eb;
      uVar9 = (uint)lVar1;
      uVar9 = (uVar9 >> 0x1f |
              ((uVar11 ^ uVar11 >> 0x1b) * 0x133111eb +
              uVar8 * -0x6b2fb645 + (int)((ulonglong)lVar1 >> 0x20)) * 2) ^ uVar9;
      iVar2 = 0;
    }
    else {
      uVar9 = (0x80b583ea < uVar13) + 0x9e3779b9;
      uVar8 = (uVar13 + 0x7f4a7c15 >> 0x1e | uVar9 * 4) ^ uVar13 + 0x7f4a7c15;
      lVar1 = (ulonglong)uVar8 * 0x1ce4e5b9;
      uVar10 = (uint)lVar1;
      uVar8 = (uVar9 ^ uVar9 >> 0x1e) * 0x1ce4e5b9 +
              uVar8 * -0x40a7b893 + (int)((ulonglong)lVar1 >> 0x20);
      uVar10 = (uVar10 >> 0x1b | uVar8 * 0x20) ^ uVar10;
      lVar1 = (ulonglong)uVar10 * 0x133111eb;
      uVar9 = (uint)lVar1;
      uVar8 = (uVar8 ^ uVar8 >> 0x1b) * 0x133111eb +
              uVar10 * -0x6b2fb645 + (int)((ulonglong)lVar1 >> 0x20);
      uVar9 = (uVar9 >> 0x1f | uVar8 * 2) ^ uVar9;
      uVar5 = imp_sysconf(0x28);
      iVar2 = FUN_71ba0484(uVar11 - uVar14,uVar5);
      FUN_71ba3430(uVar9,uVar8 ^ uVar8 >> 0x1f,iVar2 + 1,0);
      iVar2 = imp_sysconf(0x28);
      iVar2 = iVar2 * extraout_r2 + uVar14;
    }
    iVar2 = iVar2 + aiStack_38[4];
    iVar3 = imp_sysconf(0x28);
    FUN_71ba33fc(uVar9,-0xecb32d8 - (iVar2 + 0x7134cd28 + iVar3));
    iVar3 = imp_sysconf(0x28);
    iVar4 = imp_sysconf(0x28);
    aiStack_38[0] = -1;
    aiStack_38[1] = 0;
    iVar2 = imp_mmap(extraout_r1 + iVar3 + 0x3134cd28U & -iVar4,iVar2,3,&DAT_00100022);
    piVar6 = aiStack_38;
    if (iVar2 != -1) goto LAB_7134ce10;
    uVar13 = uVar13 + 1;
    piVar6 = (int *)imp___errno();
  } while (*piVar6 == 0x11);
  aiStack_38[0] = -1;
  aiStack_38[1] = 0;
  iVar2 = imp_mmap(0,aiStack_38[4],3,0x22);
  piVar6 = aiStack_38;
LAB_7134ce10:
  for (; ((*piVar6 != 0x6a4dab1f || piVar6[1] != 0x679b29b ||
          (piVar6[2] != 0x6efdd0cf || piVar6[3] != -0x33ed938)) ||
         (piVar6[4] != -0x4103aa2a || piVar6[5] != 0x370f3a77)); piVar6 = piVar6 + 1) {
  }
  piVar12 = piVar6 + 0xc024;
  piVar6[*piVar12 + 0xc025] = iVar2;
  *piVar12 = *piVar12 + 1;
  iVar3 = imp_sysconf(0x28);
  iVar4 = imp_sysconf(0x28);
  iVar4 = aiStack_38[3] + iVar4;
  iVar7 = imp_sysconf(0x28);
  piVar6[*piVar12 + 0xc025] = iVar3 + iVar2 + (iVar4 - 1U & -iVar7);
  *piVar12 = *piVar12 + 1;
  iVar3 = imp_sysconf(0x28);
  return iVar3 + iVar2;
}


// =========================================================================
// Function: FUN_7134d154
// Entry: 0x7134d154 | Size: 892 bytes
// =========================================================================

int FUN_7134d154(int param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int extraout_r1;
  uint uVar8;
  uint uVar9;
  int extraout_r2;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  int aiStack_38 [5];
  
  iVar2 = imp_sysconf(0x28);
  iVar3 = imp_sysconf(0x28);
  uVar11 = (param_1 + iVar2) - 1U & -iVar3;
  iVar2 = imp_sysconf(0x28);
  aiStack_38[4] = uVar11 + iVar2 * 2;
  uVar13 = 0x7134d1a8;
  aiStack_38[3] = uVar11;
  do {
    iVar2 = imp_sysconf(0x28);
    iVar3 = imp_sysconf(0x28);
    iVar4 = imp_sysconf(0x28);
    uVar14 = iVar3 - 1U & -iVar4;
    iVar3 = imp_sysconf(0x28);
    uVar11 = iVar2 * 3 & -iVar3;
    if (uVar11 < uVar14) {
      uVar14 = (0x80b583ea < uVar13) + 0x9e3779b9;
      uVar11 = (uVar13 + 0x7f4a7c15 >> 0x1e | uVar14 * 4) ^ uVar13 + 0x7f4a7c15;
      lVar1 = (ulonglong)uVar11 * 0x1ce4e5b9;
      uVar8 = (uint)lVar1;
      uVar11 = (uVar14 ^ uVar14 >> 0x1e) * 0x1ce4e5b9 +
               uVar11 * -0x40a7b893 + (int)((ulonglong)lVar1 >> 0x20);
      uVar8 = (uVar8 >> 0x1b | uVar11 * 0x20) ^ uVar8;
      lVar1 = (ulonglong)uVar8 * 0x133111eb;
      uVar9 = (uint)lVar1;
      uVar9 = (uVar9 >> 0x1f |
              ((uVar11 ^ uVar11 >> 0x1b) * 0x133111eb +
              uVar8 * -0x6b2fb645 + (int)((ulonglong)lVar1 >> 0x20)) * 2) ^ uVar9;
      iVar2 = 0;
    }
    else {
      uVar9 = (0x80b583ea < uVar13) + 0x9e3779b9;
      uVar8 = (uVar13 + 0x7f4a7c15 >> 0x1e | uVar9 * 4) ^ uVar13 + 0x7f4a7c15;
      lVar1 = (ulonglong)uVar8 * 0x1ce4e5b9;
      uVar10 = (uint)lVar1;
      uVar8 = (uVar9 ^ uVar9 >> 0x1e) * 0x1ce4e5b9 +
              uVar8 * -0x40a7b893 + (int)((ulonglong)lVar1 >> 0x20);
      uVar10 = (uVar10 >> 0x1b | uVar8 * 0x20) ^ uVar10;
      lVar1 = (ulonglong)uVar10 * 0x133111eb;
      uVar9 = (uint)lVar1;
      uVar8 = (uVar8 ^ uVar8 >> 0x1b) * 0x133111eb +
              uVar10 * -0x6b2fb645 + (int)((ulonglong)lVar1 >> 0x20);
      uVar9 = (uVar9 >> 0x1f | uVar8 * 2) ^ uVar9;
      uVar5 = imp_sysconf(0x28);
      iVar2 = FUN_71ba0484(uVar11 - uVar14,uVar5);
      FUN_71ba3430(uVar9,uVar8 ^ uVar8 >> 0x1f,iVar2 + 1,0);
      iVar2 = imp_sysconf(0x28);
      iVar2 = iVar2 * extraout_r2 + uVar14;
    }
    iVar2 = iVar2 + aiStack_38[4];
    iVar3 = imp_sysconf(0x28);
    FUN_71ba33fc(uVar9,-0xecb2cdc - (iVar2 + 0x7134d324 + iVar3));
    iVar3 = imp_sysconf(0x28);
    iVar4 = imp_sysconf(0x28);
    aiStack_38[0] = -1;
    aiStack_38[1] = 0;
    iVar2 = imp_mmap(extraout_r1 + iVar3 + 0x3134d324U & -iVar4,iVar2,3,&DAT_00100022);
    piVar6 = aiStack_38;
    if (iVar2 != -1) goto LAB_7134d40c;
    uVar13 = uVar13 + 1;
    piVar6 = (int *)imp___errno();
  } while (*piVar6 == 0x11);
  aiStack_38[0] = -1;
  aiStack_38[1] = 0;
  iVar2 = imp_mmap(0,aiStack_38[4],3,0x22);
  piVar6 = aiStack_38;
LAB_7134d40c:
  for (; ((*piVar6 != 0x6a4dab1f || piVar6[1] != 0x679b29b ||
          (piVar6[2] != 0x6efdd0cf || piVar6[3] != -0x33ed938)) ||
         (piVar6[4] != -0x4103aa2a || piVar6[5] != 0x370f3a77)); piVar6 = piVar6 + 1) {
  }
  piVar12 = piVar6 + 0xc024;
  piVar6[*piVar12 + 0xc025] = iVar2;
  *piVar12 = *piVar12 + 1;
  iVar3 = imp_sysconf(0x28);
  iVar4 = imp_sysconf(0x28);
  iVar4 = aiStack_38[3] + iVar4;
  iVar7 = imp_sysconf(0x28);
  piVar6[*piVar12 + 0xc025] = iVar3 + iVar2 + (iVar4 - 1U & -iVar7);
  *piVar12 = *piVar12 + 1;
  iVar3 = imp_sysconf(0x28);
  return iVar3 + iVar2;
}


// =========================================================================
// Function: FUN_7134d750
// Entry: 0x7134d750 | Size: 124 bytes
// =========================================================================

undefined8 FUN_7134d750(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = thunk__IBDl(param_3 * param_2);
  *param_1 = uVar1;
  iVar2 = thunk__IBDl(param_2);
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[1] = iVar2;
  param_1[2] = param_2;
  param_1[3] = 0xffffffff;
  if (0 < param_2) {
    iVar2 = 0;
    do {
      *(byte *)(param_1[1] + iVar2) = *(byte *)(param_1[1] + iVar2) | 0x80;
      *(byte *)(param_1[1] + iVar2) = *(byte *)(param_1[1] + iVar2) & 0x80;
      iVar2 = iVar2 + 1;
    } while (param_2 != iVar2);
  }
  return CONCAT44(iVar2,param_1);
}


// =========================================================================
// Function: FUN_7134d81c
// Entry: 0x7134d81c | Size: 892 bytes
// =========================================================================

int FUN_7134d81c(int param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int extraout_r1;
  uint uVar8;
  uint uVar9;
  int extraout_r2;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  int aiStack_38 [5];
  
  iVar2 = imp_sysconf(0x28);
  iVar3 = imp_sysconf(0x28);
  uVar11 = (param_1 + iVar2) - 1U & -iVar3;
  iVar2 = imp_sysconf(0x28);
  aiStack_38[4] = uVar11 + iVar2 * 2;
  uVar13 = 0x7134d870;
  aiStack_38[3] = uVar11;
  do {
    iVar2 = imp_sysconf(0x28);
    iVar3 = imp_sysconf(0x28);
    iVar4 = imp_sysconf(0x28);
    uVar14 = iVar3 - 1U & -iVar4;
    iVar3 = imp_sysconf(0x28);
    uVar11 = iVar2 * 3 & -iVar3;
    if (uVar11 < uVar14) {
      uVar14 = (0x80b583ea < uVar13) + 0x9e3779b9;
      uVar11 = (uVar13 + 0x7f4a7c15 >> 0x1e | uVar14 * 4) ^ uVar13 + 0x7f4a7c15;
      lVar1 = (ulonglong)uVar11 * 0x1ce4e5b9;
      uVar8 = (uint)lVar1;
      uVar11 = (uVar14 ^ uVar14 >> 0x1e) * 0x1ce4e5b9 +
               uVar11 * -0x40a7b893 + (int)((ulonglong)lVar1 >> 0x20);
      uVar8 = (uVar8 >> 0x1b | uVar11 * 0x20) ^ uVar8;
      lVar1 = (ulonglong)uVar8 * 0x133111eb;
      uVar9 = (uint)lVar1;
      uVar9 = (uVar9 >> 0x1f |
              ((uVar11 ^ uVar11 >> 0x1b) * 0x133111eb +
              uVar8 * -0x6b2fb645 + (int)((ulonglong)lVar1 >> 0x20)) * 2) ^ uVar9;
      iVar2 = 0;
    }
    else {
      uVar9 = (0x80b583ea < uVar13) + 0x9e3779b9;
      uVar8 = (uVar13 + 0x7f4a7c15 >> 0x1e | uVar9 * 4) ^ uVar13 + 0x7f4a7c15;
      lVar1 = (ulonglong)uVar8 * 0x1ce4e5b9;
      uVar10 = (uint)lVar1;
      uVar8 = (uVar9 ^ uVar9 >> 0x1e) * 0x1ce4e5b9 +
              uVar8 * -0x40a7b893 + (int)((ulonglong)lVar1 >> 0x20);
      uVar10 = (uVar10 >> 0x1b | uVar8 * 0x20) ^ uVar10;
      lVar1 = (ulonglong)uVar10 * 0x133111eb;
      uVar9 = (uint)lVar1;
      uVar8 = (uVar8 ^ uVar8 >> 0x1b) * 0x133111eb +
              uVar10 * -0x6b2fb645 + (int)((ulonglong)lVar1 >> 0x20);
      uVar9 = (uVar9 >> 0x1f | uVar8 * 2) ^ uVar9;
      uVar5 = imp_sysconf(0x28);
      iVar2 = FUN_71ba0484(uVar11 - uVar14,uVar5);
      FUN_71ba3430(uVar9,uVar8 ^ uVar8 >> 0x1f,iVar2 + 1,0);
      iVar2 = imp_sysconf(0x28);
      iVar2 = iVar2 * extraout_r2 + uVar14;
    }
    iVar2 = iVar2 + aiStack_38[4];
    iVar3 = imp_sysconf(0x28);
    FUN_71ba33fc(uVar9,-0xecb2614 - (iVar2 + 0x7134d9ec + iVar3));
    iVar3 = imp_sysconf(0x28);
    iVar4 = imp_sysconf(0x28);
    aiStack_38[0] = -1;
    aiStack_38[1] = 0;
    iVar2 = imp_mmap(extraout_r1 + iVar3 + 0x3134d9ecU & -iVar4,iVar2,3,&DAT_00100022);
    piVar6 = aiStack_38;
    if (iVar2 != -1) goto LAB_7134dad4;
    uVar13 = uVar13 + 1;
    piVar6 = (int *)imp___errno();
  } while (*piVar6 == 0x11);
  aiStack_38[0] = -1;
  aiStack_38[1] = 0;
  iVar2 = imp_mmap(0,aiStack_38[4],3,0x22);
  piVar6 = aiStack_38;
LAB_7134dad4:
  for (; ((*piVar6 != 0x6a4dab1f || piVar6[1] != 0x679b29b ||
          (piVar6[2] != 0x6efdd0cf || piVar6[3] != -0x33ed938)) ||
         (piVar6[4] != -0x4103aa2a || piVar6[5] != 0x370f3a77)); piVar6 = piVar6 + 1) {
  }
  piVar12 = piVar6 + 0xc024;
  piVar6[*piVar12 + 0xc025] = iVar2;
  *piVar12 = *piVar12 + 1;
  iVar3 = imp_sysconf(0x28);
  iVar4 = imp_sysconf(0x28);
  iVar4 = aiStack_38[3] + iVar4;
  iVar7 = imp_sysconf(0x28);
  piVar6[*piVar12 + 0xc025] = iVar3 + iVar2 + (iVar4 - 1U & -iVar7);
  *piVar12 = *piVar12 + 1;
  iVar3 = imp_sysconf(0x28);
  return iVar3 + iVar2;
}


// =========================================================================
// Function: FUN_7134de18
// Entry: 0x7134de18 | Size: 124 bytes
// =========================================================================

undefined8 FUN_7134de18(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = thunk__IBDl(param_3 * param_2);
  *param_1 = uVar1;
  iVar2 = thunk__IBDl(param_2);
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[1] = iVar2;
  param_1[2] = param_2;
  param_1[3] = 0xffffffff;
  if (0 < param_2) {
    iVar2 = 0;
    do {
      *(byte *)(param_1[1] + iVar2) = *(byte *)(param_1[1] + iVar2) | 0x80;
      *(byte *)(param_1[1] + iVar2) = *(byte *)(param_1[1] + iVar2) & 0x80;
      iVar2 = iVar2 + 1;
    } while (param_2 != iVar2);
  }
  return CONCAT44(iVar2,param_1);
}


// =========================================================================
// Function: FUN_7134dee4
// Entry: 0x7134dee4 | Size: 892 bytes
// =========================================================================

int FUN_7134dee4(int param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int extraout_r1;
  uint uVar8;
  uint uVar9;
  int extraout_r2;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  int aiStack_38 [5];
  
  iVar2 = imp_sysconf(0x28);
  iVar3 = imp_sysconf(0x28);
  uVar11 = (param_1 + iVar2) - 1U & -iVar3;
  iVar2 = imp_sysconf(0x28);
  aiStack_38[4] = uVar11 + iVar2 * 2;
  uVar13 = 0x7134df38;
  aiStack_38[3] = uVar11;
  do {
    iVar2 = imp_sysconf(0x28);
    iVar3 = imp_sysconf(0x28);
    iVar4 = imp_sysconf(0x28);
    uVar14 = iVar3 - 1U & -iVar4;
    iVar3 = imp_sysconf(0x28);
    uVar11 = iVar2 * 3 & -iVar3;
    if (uVar11 < uVar14) {
      uVar14 = (0x80b583ea < uVar13) + 0x9e3779b9;
      uVar11 = (uVar13 + 0x7f4a7c15 >> 0x1e | uVar14 * 4) ^ uVar13 + 0x7f4a7c15;
      lVar1 = (ulonglong)uVar11 * 0x1ce4e5b9;
      uVar8 = (uint)lVar1;
      uVar11 = (uVar14 ^ uVar14 >> 0x1e) * 0x1ce4e5b9 +
               uVar11 * -0x40a7b893 + (int)((ulonglong)lVar1 >> 0x20);
      uVar8 = (uVar8 >> 0x1b | uVar11 * 0x20) ^ uVar8;
      lVar1 = (ulonglong)uVar8 * 0x133111eb;
      uVar9 = (uint)lVar1;
      uVar9 = (uVar9 >> 0x1f |
              ((uVar11 ^ uVar11 >> 0x1b) * 0x133111eb +
              uVar8 * -0x6b2fb645 + (int)((ulonglong)lVar1 >> 0x20)) * 2) ^ uVar9;
      iVar2 = 0;
    }
    else {
      uVar9 = (0x80b583ea < uVar13) + 0x9e3779b9;
      uVar8 = (uVar13 + 0x7f4a7c15 >> 0x1e | uVar9 * 4) ^ uVar13 + 0x7f4a7c15;
      lVar1 = (ulonglong)uVar8 * 0x1ce4e5b9;
      uVar10 = (uint)lVar1;
      uVar8 = (uVar9 ^ uVar9 >> 0x1e) * 0x1ce4e5b9 +
              uVar8 * -0x40a7b893 + (int)((ulonglong)lVar1 >> 0x20);
      uVar10 = (uVar10 >> 0x1b | uVar8 * 0x20) ^ uVar10;
      lVar1 = (ulonglong)uVar10 * 0x133111eb;
      uVar9 = (uint)lVar1;
      uVar8 = (uVar8 ^ uVar8 >> 0x1b) * 0x133111eb +
              uVar10 * -0x6b2fb645 + (int)((ulonglong)lVar1 >> 0x20);
      uVar9 = (uVar9 >> 0x1f | uVar8 * 2) ^ uVar9;
      uVar5 = imp_sysconf(0x28);
      iVar2 = FUN_71ba0484(uVar11 - uVar14,uVar5);
      FUN_71ba3430(uVar9,uVar8 ^ uVar8 >> 0x1f,iVar2 + 1,0);
      iVar2 = imp_sysconf(0x28);
      iVar2 = iVar2 * extraout_r2 + uVar14;
    }
    iVar2 = iVar2 + aiStack_38[4];
    iVar3 = imp_sysconf(0x28);
    FUN_71ba33fc(uVar9,-0xecb1f4c - (iVar2 + 0x7134e0b4 + iVar3));
    iVar3 = imp_sysconf(0x28);
    iVar4 = imp_sysconf(0x28);
    aiStack_38[0] = -1;
    aiStack_38[1] = 0;
    iVar2 = imp_mmap(extraout_r1 + iVar3 + 0x3134e0b4U & -iVar4,iVar2,3,&DAT_00100022);
    piVar6 = aiStack_38;
    if (iVar2 != -1) goto LAB_7134e19c;
    uVar13 = uVar13 + 1;
    piVar6 = (int *)imp___errno();
  } while (*piVar6 == 0x11);
  aiStack_38[0] = -1;
  aiStack_38[1] = 0;
  iVar2 = imp_mmap(0,aiStack_38[4],3,0x22);
  piVar6 = aiStack_38;
LAB_7134e19c:
  for (; ((*piVar6 != 0x6a4dab1f || piVar6[1] != 0x679b29b ||
          (piVar6[2] != 0x6efdd0cf || piVar6[3] != -0x33ed938)) ||
         (piVar6[4] != -0x4103aa2a || piVar6[5] != 0x370f3a77)); piVar6 = piVar6 + 1) {
  }
  piVar12 = piVar6 + 0xc024;
  piVar6[*piVar12 + 0xc025] = iVar2;
  *piVar12 = *piVar12 + 1;
  iVar3 = imp_sysconf(0x28);
  iVar4 = imp_sysconf(0x28);
  iVar4 = aiStack_38[3] + iVar4;
  iVar7 = imp_sysconf(0x28);
  piVar6[*piVar12 + 0xc025] = iVar3 + iVar2 + (iVar4 - 1U & -iVar7);
  *piVar12 = *piVar12 + 1;
  iVar3 = imp_sysconf(0x28);
  return iVar3 + iVar2;
}


// =========================================================================
// Function: FUN_7134e4e0
// Entry: 0x7134e4e0 | Size: 124 bytes
// =========================================================================

undefined8 FUN_7134e4e0(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = thunk__IBDl(param_3 * param_2);
  *param_1 = uVar1;
  iVar2 = thunk__IBDl(param_2);
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[1] = iVar2;
  param_1[2] = param_2;
  param_1[3] = 0xffffffff;
  if (0 < param_2) {
    iVar2 = 0;
    do {
      *(byte *)(param_1[1] + iVar2) = *(byte *)(param_1[1] + iVar2) | 0x80;
      *(byte *)(param_1[1] + iVar2) = *(byte *)(param_1[1] + iVar2) & 0x80;
      iVar2 = iVar2 + 1;
    } while (param_2 != iVar2);
  }
  return CONCAT44(iVar2,param_1);
}


// =========================================================================
// Function: FUN_7134e5ac
// Entry: 0x7134e5ac | Size: 892 bytes
// =========================================================================

int FUN_7134e5ac(int param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int extraout_r1;
  uint uVar8;
  uint uVar9;
  int extraout_r2;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  int aiStack_38 [5];
  
  iVar2 = imp_sysconf(0x28);
  iVar3 = imp_sysconf(0x28);
  uVar11 = (param_1 + iVar2) - 1U & -iVar3;
  iVar2 = imp_sysconf(0x28);
  aiStack_38[4] = uVar11 + iVar2 * 2;
  uVar13 = 0x7134e600;
  aiStack_38[3] = uVar11;
  do {
    iVar2 = imp_sysconf(0x28);
    iVar3 = imp_sysconf(0x28);
    iVar4 = imp_sysconf(0x28);
    uVar14 = iVar3 - 1U & -iVar4;
    iVar3 = imp_sysconf(0x28);
    uVar11 = iVar2 * 3 & -iVar3;
    if (uVar11 < uVar14) {
      uVar14 = (0x80b583ea < uVar13) + 0x9e3779b9;
      uVar11 = (uVar13 + 0x7f4a7c15 >> 0x1e | uVar14 * 4) ^ uVar13 + 0x7f4a7c15;
      lVar1 = (ulonglong)uVar11 * 0x1ce4e5b9;
      uVar8 = (uint)lVar1;
      uVar11 = (uVar14 ^ uVar14 >> 0x1e) * 0x1ce4e5b9 +
               uVar11 * -0x40a7b893 + (int)((ulonglong)lVar1 >> 0x20);
      uVar8 = (uVar8 >> 0x1b | uVar11 * 0x20) ^ uVar8;
      lVar1 = (ulonglong)uVar8 * 0x133111eb;
      uVar9 = (uint)lVar1;
      uVar9 = (uVar9 >> 0x1f |
              ((uVar11 ^ uVar11 >> 0x1b) * 0x133111eb +
              uVar8 * -0x6b2fb645 + (int)((ulonglong)lVar1 >> 0x20)) * 2) ^ uVar9;
      iVar2 = 0;
    }
    else {
      uVar9 = (0x80b583ea < uVar13) + 0x9e3779b9;
      uVar8 = (uVar13 + 0x7f4a7c15 >> 0x1e | uVar9 * 4) ^ uVar13 + 0x7f4a7c15;
      lVar1 = (ulonglong)uVar8 * 0x1ce4e5b9;
      uVar10 = (uint)lVar1;
      uVar8 = (uVar9 ^ uVar9 >> 0x1e) * 0x1ce4e5b9 +
              uVar8 * -0x40a7b893 + (int)((ulonglong)lVar1 >> 0x20);
      uVar10 = (uVar10 >> 0x1b | uVar8 * 0x20) ^ uVar10;
      lVar1 = (ulonglong)uVar10 * 0x133111eb;
      uVar9 = (uint)lVar1;
      uVar8 = (uVar8 ^ uVar8 >> 0x1b) * 0x133111eb +
              uVar10 * -0x6b2fb645 + (int)((ulonglong)lVar1 >> 0x20);
      uVar9 = (uVar9 >> 0x1f | uVar8 * 2) ^ uVar9;
      uVar5 = imp_sysconf(0x28);
      iVar2 = FUN_71ba0484(uVar11 - uVar14,uVar5);
      FUN_71ba3430(uVar9,uVar8 ^ uVar8 >> 0x1f,iVar2 + 1,0);
      iVar2 = imp_sysconf(0x28);
      iVar2 = iVar2 * extraout_r2 + uVar14;
    }
    iVar2 = iVar2 + aiStack_38[4];
    iVar3 = imp_sysconf(0x28);
    FUN_71ba33fc(uVar9,-0xecb1884 - (iVar2 + 0x7134e77c + iVar3));
    iVar3 = imp_sysconf(0x28);
    iVar4 = imp_sysconf(0x28);
    aiStack_38[0] = -1;
    aiStack_38[1] = 0;
    iVar2 = imp_mmap(extraout_r1 + iVar3 + 0x3134e77cU & -iVar4,iVar2,3,&DAT_00100022);
    piVar6 = aiStack_38;
    if (iVar2 != -1) goto LAB_7134e864;
    uVar13 = uVar13 + 1;
    piVar6 = (int *)imp___errno();
  } while (*piVar6 == 0x11);
  aiStack_38[0] = -1;
  aiStack_38[1] = 0;
  iVar2 = imp_mmap(0,aiStack_38[4],3,0x22);
  piVar6 = aiStack_38;
LAB_7134e864:
  for (; ((*piVar6 != 0x6a4dab1f || piVar6[1] != 0x679b29b ||
          (piVar6[2] != 0x6efdd0cf || piVar6[3] != -0x33ed938)) ||
         (piVar6[4] != -0x4103aa2a || piVar6[5] != 0x370f3a77)); piVar6 = piVar6 + 1) {
  }
  piVar12 = piVar6 + 0xc024;
  piVar6[*piVar12 + 0xc025] = iVar2;
  *piVar12 = *piVar12 + 1;
  iVar3 = imp_sysconf(0x28);
  iVar4 = imp_sysconf(0x28);
  iVar4 = aiStack_38[3] + iVar4;
  iVar7 = imp_sysconf(0x28);
  piVar6[*piVar12 + 0xc025] = iVar3 + iVar2 + (iVar4 - 1U & -iVar7);
  *piVar12 = *piVar12 + 1;
  iVar3 = imp_sysconf(0x28);
  return iVar3 + iVar2;
}


// =========================================================================
// Function: FUN_7134eba8
// Entry: 0x7134eba8 | Size: 124 bytes
// =========================================================================

undefined8 FUN_7134eba8(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = thunk__IBDl(param_3 * param_2);
  *param_1 = uVar1;
  iVar2 = thunk__IBDl(param_2);
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[1] = iVar2;
  param_1[2] = param_2;
  param_1[3] = 0xffffffff;
  if (0 < param_2) {
    iVar2 = 0;
    do {
      *(byte *)(param_1[1] + iVar2) = *(byte *)(param_1[1] + iVar2) | 0x80;
      *(byte *)(param_1[1] + iVar2) = *(byte *)(param_1[1] + iVar2) & 0x80;
      iVar2 = iVar2 + 1;
    } while (param_2 != iVar2);
  }
  return CONCAT44(iVar2,param_1);
}


// =========================================================================
// Function: FUN_7134ec74
// Entry: 0x7134ec74 | Size: 892 bytes
// =========================================================================

int FUN_7134ec74(int param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int extraout_r1;
  uint uVar8;
  uint uVar9;
  int extraout_r2;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  int aiStack_38 [5];
  
  iVar2 = imp_sysconf(0x28);
  iVar3 = imp_sysconf(0x28);
  uVar11 = (param_1 + iVar2) - 1U & -iVar3;
  iVar2 = imp_sysconf(0x28);
  aiStack_38[4] = uVar11 + iVar2 * 2;
  uVar13 = 0x7134ecc8;
  aiStack_38[3] = uVar11;
  do {
    iVar2 = imp_sysconf(0x28);
    iVar3 = imp_sysconf(0x28);
    iVar4 = imp_sysconf(0x28);
    uVar14 = iVar3 - 1U & -iVar4;
    iVar3 = imp_sysconf(0x28);
    uVar11 = iVar2 * 3 & -iVar3;
    if (uVar11 < uVar14) {
      uVar14 = (0x80b583ea < uVar13) + 0x9e3779b9;
      uVar11 = (uVar13 + 0x7f4a7c15 >> 0x1e | uVar14 * 4) ^ uVar13 + 0x7f4a7c15;
      lVar1 = (ulonglong)uVar11 * 0x1ce4e5b9;
      uVar8 = (uint)lVar1;
      uVar11 = (uVar14 ^ uVar14 >> 0x1e) * 0x1ce4e5b9 +
               uVar11 * -0x40a7b893 + (int)((ulonglong)lVar1 >> 0x20);
      uVar8 = (uVar8 >> 0x1b | uVar11 * 0x20) ^ uVar8;
      lVar1 = (ulonglong)uVar8 * 0x133111eb;
      uVar9 = (uint)lVar1;
      uVar9 = (uVar9 >> 0x1f |
              ((uVar11 ^ uVar11 >> 0x1b) * 0x133111eb +
              uVar8 * -0x6b2fb645 + (int)((ulonglong)lVar1 >> 0x20)) * 2) ^ uVar9;
      iVar2 = 0;
    }
    else {
      uVar9 = (0x80b583ea < uVar13) + 0x9e3779b9;
      uVar8 = (uVar13 + 0x7f4a7c15 >> 0x1e | uVar9 * 4) ^ uVar13 + 0x7f4a7c15;
      lVar1 = (ulonglong)uVar8 * 0x1ce4e5b9;
      uVar10 = (uint)lVar1;
      uVar8 = (uVar9 ^ uVar9 >> 0x1e) * 0x1ce4e5b9 +
              uVar8 * -0x40a7b893 + (int)((ulonglong)lVar1 >> 0x20);
      uVar10 = (uVar10 >> 0x1b | uVar8 * 0x20) ^ uVar10;
      lVar1 = (ulonglong)uVar10 * 0x133111eb;
      uVar9 = (uint)lVar1;
      uVar8 = (uVar8 ^ uVar8 >> 0x1b) * 0x133111eb +
              uVar10 * -0x6b2fb645 + (int)((ulonglong)lVar1 >> 0x20);
      uVar9 = (uVar9 >> 0x1f | uVar8 * 2) ^ uVar9;
      uVar5 = imp_sysconf(0x28);
      iVar2 = FUN_71ba0484(uVar11 - uVar14,uVar5);
      FUN_71ba3430(uVar9,uVar8 ^ uVar8 >> 0x1f,iVar2 + 1,0);
      iVar2 = imp_sysconf(0x28);
      iVar2 = iVar2 * extraout_r2 + uVar14;
    }
    iVar2 = iVar2 + aiStack_38[4];
    iVar3 = imp_sysconf(0x28);
    FUN_71ba33fc(uVar9,-0xecb11bc - (iVar2 + 0x7134ee44 + iVar3));
    iVar3 = imp_sysconf(0x28);
    iVar4 = imp_sysconf(0x28);
    aiStack_38[0] = -1;
    aiStack_38[1] = 0;
    iVar2 = imp_mmap(extraout_r1 + iVar3 + 0x3134ee44U & -iVar4,iVar2,3,&DAT_00100022);
    piVar6 = aiStack_38;
    if (iVar2 != -1) goto LAB_7134ef2c;
    uVar13 = uVar13 + 1;
    piVar6 = (int *)imp___errno();
  } while (*piVar6 == 0x11);
  aiStack_38[0] = -1;
  aiStack_38[1] = 0;
  iVar2 = imp_mmap(0,aiStack_38[4],3,0x22);
  piVar6 = aiStack_38;
LAB_7134ef2c:
  for (; ((*piVar6 != 0x6a4dab1f || piVar6[1] != 0x679b29b ||
          (piVar6[2] != 0x6efdd0cf || piVar6[3] != -0x33ed938)) ||
         (piVar6[4] != -0x4103aa2a || piVar6[5] != 0x370f3a77)); piVar6 = piVar6 + 1) {
  }
  piVar12 = piVar6 + 0xc024;
  piVar6[*piVar12 + 0xc025] = iVar2;
  *piVar12 = *piVar12 + 1;
  iVar3 = imp_sysconf(0x28);
  iVar4 = imp_sysconf(0x28);
  iVar4 = aiStack_38[3] + iVar4;
  iVar7 = imp_sysconf(0x28);
  piVar6[*piVar12 + 0xc025] = iVar3 + iVar2 + (iVar4 - 1U & -iVar7);
  *piVar12 = *piVar12 + 1;
  iVar3 = imp_sysconf(0x28);
  return iVar3 + iVar2;
}


// =========================================================================
// Function: FUN_7134f270
// Entry: 0x7134f270 | Size: 124 bytes
// =========================================================================

undefined8 FUN_7134f270(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = thunk__IBDl(param_3 * param_2);
  *param_1 = uVar1;
  iVar2 = thunk__IBDl(param_2);
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[1] = iVar2;
  param_1[2] = param_2;
  param_1[3] = 0xffffffff;
  if (0 < param_2) {
    iVar2 = 0;
    do {
      *(byte *)(param_1[1] + iVar2) = *(byte *)(param_1[1] + iVar2) | 0x80;
      *(byte *)(param_1[1] + iVar2) = *(byte *)(param_1[1] + iVar2) & 0x80;
      iVar2 = iVar2 + 1;
    } while (param_2 != iVar2);
  }
  return CONCAT44(iVar2,param_1);
}


// =========================================================================
// Function: FUN_7134f33c
// Entry: 0x7134f33c | Size: 892 bytes
// =========================================================================

int FUN_7134f33c(int param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int extraout_r1;
  uint uVar8;
  uint uVar9;
  int extraout_r2;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  int aiStack_38 [5];
  
  iVar2 = imp_sysconf(0x28);
  iVar3 = imp_sysconf(0x28);
  uVar11 = (param_1 + iVar2) - 1U & -iVar3;
  iVar2 = imp_sysconf(0x28);
  aiStack_38[4] = uVar11 + iVar2 * 2;
  uVar13 = 0x7134f390;
  aiStack_38[3] = uVar11;
  do {
    iVar2 = imp_sysconf(0x28);
    iVar3 = imp_sysconf(0x28);
    iVar4 = imp_sysconf(0x28);
    uVar14 = iVar3 - 1U & -iVar4;
    iVar3 = imp_sysconf(0x28);
    uVar11 = iVar2 * 3 & -iVar3;
    if (uVar11 < uVar14) {
      uVar14 = (0x80b583ea < uVar13) + 0x9e3779b9;
      uVar11 = (uVar13 + 0x7f4a7c15 >> 0x1e | uVar14 * 4) ^ uVar13 + 0x7f4a7c15;
      lVar1 = (ulonglong)uVar11 * 0x1ce4e5b9;
      uVar8 = (uint)lVar1;
      uVar11 = (uVar14 ^ uVar14 >> 0x1e) * 0x1ce4e5b9 +
               uVar11 * -0x40a7b893 + (int)((ulonglong)lVar1 >> 0x20);
      uVar8 = (uVar8 >> 0x1b | uVar11 * 0x20) ^ uVar8;
      lVar1 = (ulonglong)uVar8 * 0x133111eb;
      uVar9 = (uint)lVar1;
      uVar9 = (uVar9 >> 0x1f |
              ((uVar11 ^ uVar11 >> 0x1b) * 0x133111eb +
              uVar8 * -0x6b2fb645 + (int)((ulonglong)lVar1 >> 0x20)) * 2) ^ uVar9;
      iVar2 = 0;
    }
    else {
      uVar9 = (0x80b583ea < uVar13) + 0x9e3779b9;
      uVar8 = (uVar13 + 0x7f4a7c15 >> 0x1e | uVar9 * 4) ^ uVar13 + 0x7f4a7c15;
      lVar1 = (ulonglong)uVar8 * 0x1ce4e5b9;
      uVar10 = (uint)lVar1;
      uVar8 = (uVar9 ^ uVar9 >> 0x1e) * 0x1ce4e5b9 +
              uVar8 * -0x40a7b893 + (int)((ulonglong)lVar1 >> 0x20);
      uVar10 = (uVar10 >> 0x1b | uVar8 * 0x20) ^ uVar10;
      lVar1 = (ulonglong)uVar10 * 0x133111eb;
      uVar9 = (uint)lVar1;
      uVar8 = (uVar8 ^ uVar8 >> 0x1b) * 0x133111eb +
              uVar10 * -0x6b2fb645 + (int)((ulonglong)lVar1 >> 0x20);
      uVar9 = (uVar9 >> 0x1f | uVar8 * 2) ^ uVar9;
      uVar5 = imp_sysconf(0x28);
      iVar2 = FUN_71ba0484(uVar11 - uVar14,uVar5);
      FUN_71ba3430(uVar9,uVar8 ^ uVar8 >> 0x1f,iVar2 + 1,0);
      iVar2 = imp_sysconf(0x28);
      iVar2 = iVar2 * extraout_r2 + uVar14;
    }
    iVar2 = iVar2 + aiStack_38[4];
    iVar3 = imp_sysconf(0x28);
    FUN_71ba33fc(uVar9,-0xecb0af4 - (iVar2 + 0x7134f50c + iVar3));
    iVar3 = imp_sysconf(0x28);
    iVar4 = imp_sysconf(0x28);
    aiStack_38[0] = -1;
    aiStack_38[1] = 0;
    iVar2 = imp_mmap(extraout_r1 + iVar3 + 0x3134f50cU & -iVar4,iVar2,3,&DAT_00100022);
    piVar6 = aiStack_38;
    if (iVar2 != -1) goto LAB_7134f5f4;
    uVar13 = uVar13 + 1;
    piVar6 = (int *)imp___errno();
  } while (*piVar6 == 0x11);
  aiStack_38[0] = -1;
  aiStack_38[1] = 0;
  iVar2 = imp_mmap(0,aiStack_38[4],3,0x22);
  piVar6 = aiStack_38;
LAB_7134f5f4:
  for (; ((*piVar6 != 0x6a4dab1f || piVar6[1] != 0x679b29b ||
          (piVar6[2] != 0x6efdd0cf || piVar6[3] != -0x33ed938)) ||
         (piVar6[4] != -0x4103aa2a || piVar6[5] != 0x370f3a77)); piVar6 = piVar6 + 1) {
  }
  piVar12 = piVar6 + 0xc024;
  piVar6[*piVar12 + 0xc025] = iVar2;
  *piVar12 = *piVar12 + 1;
  iVar3 = imp_sysconf(0x28);
  iVar4 = imp_sysconf(0x28);
  iVar4 = aiStack_38[3] + iVar4;
  iVar7 = imp_sysconf(0x28);
  piVar6[*piVar12 + 0xc025] = iVar3 + iVar2 + (iVar4 - 1U & -iVar7);
  *piVar12 = *piVar12 + 1;
  iVar3 = imp_sysconf(0x28);
  return iVar3 + iVar2;
}


// =========================================================================
// Function: FUN_7134f938
// Entry: 0x7134f938 | Size: 124 bytes
// =========================================================================

undefined8 FUN_7134f938(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = thunk__IBDl(param_3 * param_2);
  *param_1 = uVar1;
  iVar2 = thunk__IBDl(param_2);
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[1] = iVar2;
  param_1[2] = param_2;
  param_1[3] = 0xffffffff;
  if (0 < param_2) {
    iVar2 = 0;
    do {
      *(byte *)(param_1[1] + iVar2) = *(byte *)(param_1[1] + iVar2) | 0x80;
      *(byte *)(param_1[1] + iVar2) = *(byte *)(param_1[1] + iVar2) & 0x80;
      iVar2 = iVar2 + 1;
    } while (param_2 != iVar2);
  }
  return CONCAT44(iVar2,param_1);
}


// =========================================================================
// Function: FUN_7134fa04
// Entry: 0x7134fa04 | Size: 892 bytes
// =========================================================================

int FUN_7134fa04(int param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int extraout_r1;
  uint uVar8;
  uint uVar9;
  int extraout_r2;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  int aiStack_38 [5];
  
  iVar2 = imp_sysconf(0x28);
  iVar3 = imp_sysconf(0x28);
  uVar11 = (param_1 + iVar2) - 1U & -iVar3;
  iVar2 = imp_sysconf(0x28);
  aiStack_38[4] = uVar11 + iVar2 * 2;
  uVar13 = 0x7134fa58;
  aiStack_38[3] = uVar11;
  do {
    iVar2 = imp_sysconf(0x28);
    iVar3 = imp_sysconf(0x28);
    iVar4 = imp_sysconf(0x28);
    uVar14 = iVar3 - 1U & -iVar4;
    iVar3 = imp_sysconf(0x28);
    uVar11 = iVar2 * 3 & -iVar3;
    if (uVar11 < uVar14) {
      uVar14 = (0x80b583ea < uVar13) + 0x9e3779b9;
      uVar11 = (uVar13 + 0x7f4a7c15 >> 0x1e | uVar14 * 4) ^ uVar13 + 0x7f4a7c15;
      lVar1 = (ulonglong)uVar11 * 0x1ce4e5b9;
      uVar8 = (uint)lVar1;
      uVar11 = (uVar14 ^ uVar14 >> 0x1e) * 0x1ce4e5b9 +
               uVar11 * -0x40a7b893 + (int)((ulonglong)lVar1 >> 0x20);
      uVar8 = (uVar8 >> 0x1b | uVar11 * 0x20) ^ uVar8;
      lVar1 = (ulonglong)uVar8 * 0x133111eb;
      uVar9 = (uint)lVar1;
      uVar9 = (uVar9 >> 0x1f |
              ((uVar11 ^ uVar11 >> 0x1b) * 0x133111eb +
              uVar8 * -0x6b2fb645 + (int)((ulonglong)lVar1 >> 0x20)) * 2) ^ uVar9;
      iVar2 = 0;
    }
    else {
      uVar9 = (0x80b583ea < uVar13) + 0x9e3779b9;
      uVar8 = (uVar13 + 0x7f4a7c15 >> 0x1e | uVar9 * 4) ^ uVar13 + 0x7f4a7c15;
      lVar1 = (ulonglong)uVar8 * 0x1ce4e5b9;
      uVar10 = (uint)lVar1;
      uVar8 = (uVar9 ^ uVar9 >> 0x1e) * 0x1ce4e5b9 +
              uVar8 * -0x40a7b893 + (int)((ulonglong)lVar1 >> 0x20);
      uVar10 = (uVar10 >> 0x1b | uVar8 * 0x20) ^ uVar10;
      lVar1 = (ulonglong)uVar10 * 0x133111eb;
      uVar9 = (uint)lVar1;
      uVar8 = (uVar8 ^ uVar8 >> 0x1b) * 0x133111eb +
              uVar10 * -0x6b2fb645 + (int)((ulonglong)lVar1 >> 0x20);
      uVar9 = (uVar9 >> 0x1f | uVar8 * 2) ^ uVar9;
      uVar5 = imp_sysconf(0x28);
      iVar2 = FUN_71ba0484(uVar11 - uVar14,uVar5);
      FUN_71ba3430(uVar9,uVar8 ^ uVar8 >> 0x1f,iVar2 + 1,0);
      iVar2 = imp_sysconf(0x28);
      iVar2 = iVar2 * extraout_r2 + uVar14;
    }
    iVar2 = iVar2 + aiStack_38[4];
    iVar3 = imp_sysconf(0x28);
    FUN_71ba33fc(uVar9,-0xecb042c - (iVar2 + 0x7134fbd4 + iVar3));
    iVar3 = imp_sysconf(0x28);
    iVar4 = imp_sysconf(0x28);
    aiStack_38[0] = -1;
    aiStack_38[1] = 0;
    iVar2 = imp_mmap(extraout_r1 + iVar3 + 0x3134fbd4U & -iVar4,iVar2,3,&DAT_00100022);
    piVar6 = aiStack_38;
    if (iVar2 != -1) goto LAB_7134fcbc;
    uVar13 = uVar13 + 1;
    piVar6 = (int *)imp___errno();
  } while (*piVar6 == 0x11);
  aiStack_38[0] = -1;
  aiStack_38[1] = 0;
  iVar2 = imp_mmap(0,aiStack_38[4],3,0x22);
  piVar6 = aiStack_38;
LAB_7134fcbc:
  for (; ((*piVar6 != 0x6a4dab1f || piVar6[1] != 0x679b29b ||
          (piVar6[2] != 0x6efdd0cf || piVar6[3] != -0x33ed938)) ||
         (piVar6[4] != -0x4103aa2a || piVar6[5] != 0x370f3a77)); piVar6 = piVar6 + 1) {
  }
  piVar12 = piVar6 + 0xc024;
  piVar6[*piVar12 + 0xc025] = iVar2;
  *piVar12 = *piVar12 + 1;
  iVar3 = imp_sysconf(0x28);
  iVar4 = imp_sysconf(0x28);
  iVar4 = aiStack_38[3] + iVar4;
  iVar7 = imp_sysconf(0x28);
  piVar6[*piVar12 + 0xc025] = iVar3 + iVar2 + (iVar4 - 1U & -iVar7);
  *piVar12 = *piVar12 + 1;
  iVar3 = imp_sysconf(0x28);
  return iVar3 + iVar2;
}


