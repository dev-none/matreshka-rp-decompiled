// =========================================================================
// Function: FUN_71702014
// Entry: 0x71702014 | Size: 692 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x717021a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71702014(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte bStack_51;
  uint auStack_50 [2];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  int iStack_28;
  
  iVar2 = _ext___stack_chk_guard;
  iStack_28 = _ext___stack_chk_guard;
  *DAT_7120188c = FUN_713fe120;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_713fe1e8;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_713fe374;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  uStack_3c = 0;
  uStack_44 = 0;
  uStack_34 = 0x26d5d038;
  puStack_38 = &LAB_49abac16;
  uStack_40 = 0x2b;
  uStack_48 = 0xd8;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xab8ef6 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x41;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xab8ef6;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccabf2) >> 2 ^ 0xacad84;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x41;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  uVar3 = 0x2b;
  do {
    iVar4 = (int)(char)bStack_51;
    bStack_51 = bStack_51 + 1;
    uVar3 = uVar3 ^ (iVar4 + 0xccaaff) - uVar3 ^ 0xd8;
  } while (bStack_51 < 8);
  *(undefined4 **)((auStack_50[0] ^ 0xccfffa) + DAT_7120187c) = &DAT_700bddb4;
  if (_ext___stack_chk_guard == iVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail(iVar2,_ext___stack_chk_guard,uVar3,0);
}


// =========================================================================
// Function: FUN_7170241c
// Entry: 0x7170241c | Size: 60 bytes
// =========================================================================

void FUN_7170241c(void)

{
  *DAT_7120188c = FUN_713d48b0;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// =========================================================================
// Function: FUN_717024d0
// Entry: 0x717024d0 | Size: 620 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x717025e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_717024d0(void)

{
  int iVar1;
  byte bStack_51;
  uint auStack_50 [2];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  int iStack_28;
  
  iVar1 = _ext___stack_chk_guard;
  iStack_28 = _ext___stack_chk_guard;
  uStack_3c = 0;
  uStack_44 = 0;
  uStack_34 = 0x26d5d038;
  puStack_38 = &LAB_49abac16;
  uStack_40 = 0x1e;
  uStack_48 = 199;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xab7bd9 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x34;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xab7bd9;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccabda) >> 2 ^ 0xacad73;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x34;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(undefined **)((auStack_50[0] ^ 0xccffe5) + DAT_7120187c) = &DAT_70b360c8;
  *DAT_7120188c = FUN_71344d2c;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  if (_ext___stack_chk_guard == iVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: ADhwPg_iHKAGZxA_SBDcJzC
// Entry: 0x71702850 | Size: 160 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ADhwPg_iHKAGZxA_SBDcJzC(void)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *apuStack_30 [4];
  int *piStack_20;
  int iStack_14;
  
  piStack_20 = (int *)apuStack_30;
  ppuVar1 = apuStack_30;
  iStack_14 = _ext___stack_chk_guard;
  apuStack_30[0] = &DAT_70b0efe8;
  FUN_717ccb10(DAT_712017fc,apuStack_30);
  if ((undefined **)piStack_20 == apuStack_30) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = 0x14;
    ppuVar1 = (undefined **)piStack_20;
    if (piStack_20 == (int *)0x0) goto LAB_717028cc;
  }
  (**(code **)((int)*ppuVar1 + iVar2))();
LAB_717028cc:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: qAPUXJmLhShymbQlgVdjpcA
// Entry: 0x717029c0 | Size: 160 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void qAPUXJmLhShymbQlgVdjpcA(void)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *apuStack_30 [4];
  int *piStack_20;
  int iStack_14;
  
  piStack_20 = (int *)apuStack_30;
  ppuVar1 = apuStack_30;
  iStack_14 = _ext___stack_chk_guard;
  apuStack_30[0] = &DAT_70b0f00c;
  FUN_717ccb10(DAT_712017fc,apuStack_30);
  if ((undefined **)piStack_20 == apuStack_30) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = 0x14;
    ppuVar1 = (undefined **)piStack_20;
    if (piStack_20 == (int *)0x0) goto LAB_71702a3c;
  }
  (**(code **)((int)*ppuVar1 + iVar2))();
LAB_71702a3c:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: sGsyEGrAGPrjeWIqHQntcpRms
// Entry: 0x71702b30 | Size: 160 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sGsyEGrAGPrjeWIqHQntcpRms(void)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *apuStack_30 [4];
  int *piStack_20;
  int iStack_14;
  
  piStack_20 = (int *)apuStack_30;
  ppuVar1 = apuStack_30;
  iStack_14 = _ext___stack_chk_guard;
  apuStack_30[0] = &DAT_70b0f030;
  FUN_717ccb10(DAT_712017fc,apuStack_30);
  if ((undefined **)piStack_20 == apuStack_30) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = 0x14;
    ppuVar1 = (undefined **)piStack_20;
    if (piStack_20 == (int *)0x0) goto LAB_71702bac;
  }
  (**(code **)((int)*ppuVar1 + iVar2))();
LAB_71702bac:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: EvGGLvXkkTwJlEr_ISARQkPbRoMPNdBQnR
// Entry: 0x71702ca0 | Size: 160 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void EvGGLvXkkTwJlEr_ISARQkPbRoMPNdBQnR(void)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *apuStack_30 [4];
  int *piStack_20;
  int iStack_14;
  
  piStack_20 = (int *)apuStack_30;
  ppuVar1 = apuStack_30;
  iStack_14 = _ext___stack_chk_guard;
  apuStack_30[0] = &DAT_70b0f054;
  FUN_717ccb10(DAT_712017fc,apuStack_30);
  if ((undefined **)piStack_20 == apuStack_30) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = 0x14;
    ppuVar1 = (undefined **)piStack_20;
    if (piStack_20 == (int *)0x0) goto LAB_71702d1c;
  }
  (**(code **)((int)*ppuVar1 + iVar2))();
LAB_71702d1c:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: mRkLWcCnLcj_OWNstxZQcxsqi
// Entry: 0x71702e10 | Size: 160 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void mRkLWcCnLcj_OWNstxZQcxsqi(void)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *apuStack_30 [4];
  int *piStack_20;
  int iStack_14;
  
  piStack_20 = (int *)apuStack_30;
  ppuVar1 = apuStack_30;
  iStack_14 = _ext___stack_chk_guard;
  apuStack_30[0] = &DAT_70b0f078;
  FUN_717ccb10(DAT_712017fc,apuStack_30);
  if ((undefined **)piStack_20 == apuStack_30) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = 0x14;
    ppuVar1 = (undefined **)piStack_20;
    if (piStack_20 == (int *)0x0) goto LAB_71702e8c;
  }
  (**(code **)((int)*ppuVar1 + iVar2))();
LAB_71702e8c:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: CTNxHEjwTeZxCjbLBW_WcEVh
// Entry: 0x71702f80 | Size: 160 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CTNxHEjwTeZxCjbLBW_WcEVh(void)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *apuStack_30 [4];
  int *piStack_20;
  int iStack_14;
  
  piStack_20 = (int *)apuStack_30;
  ppuVar1 = apuStack_30;
  iStack_14 = _ext___stack_chk_guard;
  apuStack_30[0] = &DAT_70b0f09c;
  FUN_717ccb10(DAT_712017fc,apuStack_30);
  if ((undefined **)piStack_20 == apuStack_30) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = 0x14;
    ppuVar1 = (undefined **)piStack_20;
    if (piStack_20 == (int *)0x0) goto LAB_71702ffc;
  }
  (**(code **)((int)*ppuVar1 + iVar2))();
LAB_71702ffc:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_717033ac
// Entry: 0x717033ac | Size: 296 bytes
// =========================================================================

void FUN_717033ac(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_20 [4];
  int iStack_1c;
  
  FUN_714cc744();
  uVar1 = FUN_71ba1b94();
  uVar2 = FUN_71ba21e8(uVar1,0x3d800000);
  uVar2 = FUN_71ba21e8(uVar2,0x41100000);
  FUN_714ccb40();
  uVar3 = FUN_71ba1b94();
  iVar4 = FUN_71ba2d10(uVar2,uVar3);
  uVar3 = 0;
  if (iVar4 != 0) {
    FUN_714ccb40();
    uVar3 = FUN_71ba1b94();
    uVar2 = FUN_71ba240c(uVar3,uVar2);
    uVar2 = FUN_71ba21e8(uVar2,0x3f000000);
    uVar3 = FUN_71ba240c(0,uVar2);
    uVar1 = FUN_71ba0b38(uVar2,uVar1);
    FUN_714ccb40();
    uVar2 = FUN_71ba1b94();
  }
  iVar4 = 0x44;
  if (*(int *)*DAT_70c38ea8 == 1) {
    iVar4 = 0x40;
  }
  iStack_1c = *(int *)(DAT_70c38ed8 + iVar4);
  *(int *)(iStack_1c + 0x54) = *(int *)(iStack_1c + 0x54) + 1;
  FUN_71358efc(auStack_20,0xff,0xff,0xff,0xff);
  FUN_7135a238(&iStack_1c,uVar3,0,uVar1,uVar2,auStack_20);
  if (iStack_1c != 0) {
    FUN_7143d364();
  }
  return;
}


// =========================================================================
// Function: FUN_71703804
// Entry: 0x71703804 | Size: 60 bytes
// =========================================================================

undefined4 FUN_71703804(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if (DAT_711f6aa0 == '\x01') {
    *param_2 = 0;
    DAT_711f6aa0 = 0;
    *param_3 = 0;
    return 1;
  }
  uVar1 = FUN_714b5e7c();
  return uVar1;
}


// =========================================================================
// Function: FUN_71703894
// Entry: 0x71703894 | Size: 32 bytes
// =========================================================================

void FUN_71703894(void)

{
  DAT_711f6a9c = 0;
  DAT_70ffcd26 = 0;
  return;
}


// =========================================================================
// Function: FUN_7170390c
// Entry: 0x7170390c | Size: 1732 bytes
// =========================================================================

void FUN_7170390c(void)

{
  undefined4 *puVar1;
  
  *DAT_7120188c = &LAB_714b8c8c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_714c5f6c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_714c82ec;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_714c85ec;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_714c5bec;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_714c52d0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_714c8774;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_714c5410;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_714b97d4;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = imp_sem_destroy;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = imp_sem_post;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = imp_sem_wait;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_714c94dc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_714c9888;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_714c9978;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_714b9e98;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_714ba19c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_714ba244;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_714b8a0c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_714b9668;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_714b973c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = imp_pthread_mutex_lock;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = imp_pthread_mutex_unlock;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_714cc724;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_714b95b8;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_714b95d8;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_714c8c88;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_714c9478;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_714c9a38;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_714c9a58;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_717033ac;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &DAT_71704568;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_717030f0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_717030f0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_71703140;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_71703140;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_71703190;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_71703190;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_717031e0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_717031e0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_717032a0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_717032a0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_71703360;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_71703360;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_71703360;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_71703724;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71703804;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71703894;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_714cbd40;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// =========================================================================
// Function: FUN_7170469c
// Entry: 0x7170469c | Size: 4 bytes
// =========================================================================

void FUN_7170469c(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x717046b8 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_71704884
// Entry: 0x71704884 | Size: 4 bytes
// =========================================================================

void FUN_71704884(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x717048a0 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_71704a3c
// Entry: 0x71704a3c | Size: 4 bytes
// =========================================================================

void FUN_71704a3c(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x71704a58 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_71704bd8
// Entry: 0x71704bd8 | Size: 4 bytes
// =========================================================================

void FUN_71704bd8(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x71704bf4 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_71704d90
// Entry: 0x71704d90 | Size: 4 bytes
// =========================================================================

void FUN_71704d90(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x71704dac | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_71704f2c
// Entry: 0x71704f2c | Size: 4 bytes
// =========================================================================

void FUN_71704f2c(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x71704f48 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_71704fcc
// Entry: 0x71704fcc | Size: 13788 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x717073e4) */
/* WARNING: Removing unreachable block (ram,0x71707014) */
/* WARNING: Removing unreachable block (ram,0x71706888) */
/* WARNING: Removing unreachable block (ram,0x717064b0) */
/* WARNING: Removing unreachable block (ram,0x71706280) */
/* WARNING: Removing unreachable block (ram,0x71705cfc) */
/* WARNING: Removing unreachable block (ram,0x717056e0) */
/* WARNING: Removing unreachable block (ram,0x7170511c) */
/* WARNING: Removing unreachable block (ram,0x71707d5c) */
/* WARNING: Removing unreachable block (ram,0x71707b24) */
/* WARNING: Removing unreachable block (ram,0x71707758) */
/* WARNING: Removing unreachable block (ram,0x717073ac) */
/* WARNING: Removing unreachable block (ram,0x71706fcc) */
/* WARNING: Removing unreachable block (ram,0x71706bfc) */
/* WARNING: Removing unreachable block (ram,0x71706840) */
/* WARNING: Removing unreachable block (ram,0x71706468) */
/* WARNING: Removing unreachable block (ram,0x71706080) */
/* WARNING: Removing unreachable block (ram,0x71705cbc) */
/* WARNING: Removing unreachable block (ram,0x717058d8) */
/* WARNING: Removing unreachable block (ram,0x717054dc) */
/* WARNING: Removing unreachable block (ram,0x717052fc) */
/* WARNING: Removing unreachable block (ram,0x7170569c) */
/* WARNING: Removing unreachable block (ram,0x71705abc) */
/* WARNING: Removing unreachable block (ram,0x71705ea4) */
/* WARNING: Removing unreachable block (ram,0x71706248) */
/* WARNING: Removing unreachable block (ram,0x71706660) */
/* WARNING: Removing unreachable block (ram,0x71706a2c) */
/* WARNING: Removing unreachable block (ram,0x71706db8) */
/* WARNING: Removing unreachable block (ram,0x717071c8) */
/* WARNING: Removing unreachable block (ram,0x71707588) */
/* WARNING: Removing unreachable block (ram,0x71707914) */
/* WARNING: Removing unreachable block (ram,0x71707d20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_71704fcc(void)

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
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  undefined4 *puVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint *puVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint *puVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  bool bVar53;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  byte bStack_51;
  uint auStack_50 [2];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  int iStack_28;
  
  iVar13 = _ext___stack_chk_guard;
  DAT_70135cd4 = (uint *)0x0;
  DAT_70135cd0 = (uint *)0xffffffff;
  iStack_28 = _ext___stack_chk_guard;
  uStack_3c = 0;
  uStack_44 = 0;
  uStack_34 = 0x26d5d038;
  puStack_38 = &LAB_49abac16;
  uStack_40 = 0x2e;
  uStack_48 = 0xd6;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xfda274 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x44;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xfda274;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccabfb) >> 2 ^ 0xacad82;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x44;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if ((auStack_50[0] ^ 0xccfff4) + DAT_7120187c != -1) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0xfda274 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x45;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0xfda274;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccabf8) >> 2 ^ 0xacad82;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x45;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd0 = (uint *)((auStack_50[0] ^ 0xccfff4) + DAT_7120187c);
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xfda274 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x46;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xfda274;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccabf9) >> 2 ^ 0xacad82;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x46;
    uVar17 = auStack_50[0];
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xfda62e >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x43;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xfda62e;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccabfa) >> 2 ^ 0xacad82;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x43;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(uint *)((uVar17 ^ 0xccfff4) + DAT_7120187c) =
       ((auStack_50[0] ^ 0xff33000b) - DAT_7120187c) + 0x700c8ec9;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xfda274 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x47;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xfda274;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccabe6) >> 2 ^ 0xacad82;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x47;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if (DAT_70135cd4 < (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfff4))) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0xfda274 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x48;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0xfda274;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccabe7) >> 2 ^ 0xacad82;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x48;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd4 = (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfff4));
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xfda271 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x4b;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xfda271;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccabe3) >> 2 ^ 0xacad83;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x4b;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if ((uint *)((auStack_50[0] ^ 0xccfff5) + DAT_7120187c) < DAT_70135cd0) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0xfda271 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x4c;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0xfda271;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccabe2) >> 2 ^ 0xacad83;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x4c;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd0 = (uint *)((auStack_50[0] ^ 0xccfff5) + DAT_7120187c);
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xfda271 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x4d;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xfda271;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccabe1) >> 2 ^ 0xacad83;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x4d;
    uVar17 = auStack_50[0];
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xfda3c7 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x4a;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xfda3c7;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccabe4) >> 2 ^ 0xacad83;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x4a;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(uint *)((uVar17 ^ 0xccfff5) + DAT_7120187c) =
       ((auStack_50[0] ^ 0xff33000a) - DAT_7120187c) + 0x700c8ec9;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xfda271 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x4e;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xfda271;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccabe0) >> 2 ^ 0xacad83;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x4e;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if (DAT_70135cd4 < (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfff5))) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0xfda271 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x4f;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0xfda271;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccabef) >> 2 ^ 0xacad83;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x4f;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd4 = (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfff5));
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xfda27e >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x52;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xfda27e;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccabef) >> 2 ^ 0xacad80;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x52;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if ((uint *)((auStack_50[0] ^ 0xccfff6) + DAT_7120187c) < DAT_70135cd0) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0xfda27e >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x53;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0xfda27e;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccabe8) >> 2 ^ 0xacad80;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x53;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd0 = (uint *)((auStack_50[0] ^ 0xccfff6) + DAT_7120187c);
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xfda27e >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x54;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xfda27e;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccabe9) >> 2 ^ 0xacad80;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x54;
    uVar17 = auStack_50[0];
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xfda2ae >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x51;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xfda2ae;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccabee) >> 2 ^ 0xacad80;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x51;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(uint *)((uVar17 ^ 0xccfff6) + DAT_7120187c) =
       ((auStack_50[0] ^ 0xff330009) - DAT_7120187c) + 0x700c8ec9;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xfda27e >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x55;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xfda27e;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccabea) >> 2 ^ 0xacad80;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x55;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if (DAT_70135cd4 < (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfff6))) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0xfda27e >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x56;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0xfda27e;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccabeb) >> 2 ^ 0xacad80;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x56;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd4 = (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfff6));
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xfda27b >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x59;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xfda27b;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccab97) >> 2 ^ 0xacad81;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x59;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if ((uint *)((auStack_50[0] ^ 0xccfff7) + DAT_7120187c) < DAT_70135cd0) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0xfda27b >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x5a;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0xfda27b;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccab96) >> 2 ^ 0xacad81;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x5a;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd0 = (uint *)((auStack_50[0] ^ 0xccfff7) + DAT_7120187c);
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xfda27b >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x5b;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xfda27b;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccab91) >> 2 ^ 0xacad81;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x5b;
    uVar17 = auStack_50[0];
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xfda487 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x58;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xfda487;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccab94) >> 2 ^ 0xacad81;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x58;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(uint *)((uVar17 ^ 0xccfff7) + DAT_7120187c) =
       ((auStack_50[0] ^ 0xff330008) - DAT_7120187c) + 0x700c8ec9;
  uStack_40 = 0x46;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xfda27b >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x5c;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xfda27b;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccab90) >> 2 ^ 0xacad81;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x5c;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if (DAT_70135cd4 < (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfff7))) {
    uStack_40 = 0x47;
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0xfda27b >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x5d;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0xfda27b;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccab93) >> 2 ^ 0xacad81;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x5d;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd4 = (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfff7));
  }
  uStack_34 = 0x26d5d038;
  puStack_38 = &LAB_49abac16;
  uStack_3c = 0;
  uStack_44 = 0;
  uStack_48 = 0xd5;
  if ((DAT_70135cd0 != (uint *)0xffffffff) && (DAT_70135cd0 < DAT_70135cd4)) {
    iVar18 = 0;
    puVar47 = DAT_70135cd4;
LAB_71707f00:
    puVar35 = (uint *)(&DAT_70125c7c)[iVar18 * 4];
    uVar17 = (&DAT_70125c80)[iVar18 * 4];
    if ((DAT_70135cd0 <= (uint *)(uVar17 + (int)puVar35)) && (puVar35 <= puVar47)) {
      if (uVar17 < 0x20) {
        iVar29 = 0x27d4eb7f;
        uVar49 = 0x56d677d6;
      }
      else {
        uStack_68 = 0xee40c5e7;
        uVar19 = 0x60ea283e;
        uStack_6c = 0xc2b2ae8d;
        uVar33 = 0xba94458a;
        uStack_64 = 0x6854fb60;
        uStack_60 = 0x50;
        iVar29 = 0;
        uStack_5c = 0x40801011;
        uStack_58 = 0x61c8869e;
        uVar49 = uVar17;
        puVar47 = puVar35;
        do {
          lVar4 = (ulonglong)puVar47[6] * 0x27d4eb4f;
          uVar37 = (uint)lVar4;
          puVar1 = puVar47 + 1;
          uVar38 = uVar37 + uVar33;
          uVar42 = puVar47[7] * 0x27d4eb4f +
                   puVar47[6] * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + uStack_58 +
                   (uint)CARRY4(uVar37,uVar33);
          uVar37 = uVar42 >> 1;
          uVar14 = uVar38 * -0x80000000 | uVar37;
          uVar33 = (uint)((ulonglong)uVar14 * 0x85ebca87);
          uVar38 = uVar38 >> 1;
          uVar15 = uVar42 * -0x80000000 | uVar38;
          uStack_58 = uVar15 * -0x7a143579 +
                      uVar14 * -0x61c8864f + (int)((ulonglong)uVar14 * 0x85ebca87 >> 0x20);
          lVar4 = (ulonglong)puVar47[4] * 0x27d4eb4f;
          uVar42 = (uint)lVar4;
          uVar39 = uVar42 + uStack_5c;
          uVar36 = puVar47[5] * 0x27d4eb4f +
                   puVar47[4] * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + uStack_60 +
                   (uint)CARRY4(uVar42,uStack_5c);
          uVar42 = uVar36 >> 1;
          uVar43 = uVar39 * -0x80000000 | uVar42;
          uStack_5c = (uint)((ulonglong)uVar43 * 0x85ebca87);
          uVar39 = uVar39 >> 1;
          uVar44 = uVar36 * -0x80000000 | uVar39;
          puVar2 = puVar47 + 2;
          uStack_60 = uVar44 * -0x7a143579 +
                      uVar43 * -0x61c8864f + (int)((ulonglong)uVar43 * 0x85ebca87 >> 0x20);
          puVar3 = puVar47 + 3;
          lVar4 = (ulonglong)*puVar2 * 0x27d4eb4f;
          uVar36 = (uint)lVar4;
          uVar16 = *puVar47;
          uVar45 = uVar36 + uStack_64;
          puVar47 = puVar47 + 8;
          uVar40 = *puVar3 * 0x27d4eb4f + *puVar2 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) +
                   uStack_6c + (uint)CARRY4(uVar36,uStack_64);
          uVar36 = uVar40 >> 1;
          uVar48 = uVar45 * -0x80000000 | uVar36;
          uVar45 = uVar45 >> 1;
          uVar41 = uVar40 * -0x80000000 | uVar45;
          uStack_64 = (uint)((ulonglong)uVar48 * 0x85ebca87);
          uStack_6c = uVar41 * -0x7a143579 +
                      uVar48 * -0x61c8864f + (int)((ulonglong)uVar48 * 0x85ebca87 >> 0x20);
          lVar4 = (ulonglong)uVar16 * 0x27d4eb4f;
          uVar46 = (uint)lVar4;
          uVar40 = uVar46 + uStack_68;
          uVar19 = *puVar1 * 0x27d4eb4f + uVar16 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) +
                   uVar19 + (uint)CARRY4(uVar46,uStack_68);
          bVar53 = uVar49 < 0x20;
          uVar49 = uVar49 - 0x20;
          uVar16 = uVar19 >> 1;
          uVar52 = uVar40 * -0x80000000 | uVar16;
          uVar40 = uVar40 >> 1;
          uVar46 = uVar19 * -0x80000000 | uVar40;
          uStack_68 = (uint)((ulonglong)uVar52 * 0x85ebca87);
          iVar29 = iVar29 - (uint)bVar53;
          uVar19 = uVar46 * -0x7a143579 +
                   uVar52 * -0x61c8864f + (int)((ulonglong)uVar52 * 0x85ebca87 >> 0x20);
        } while ((uint)(uVar49 < 0x20) <= (uint)-iVar29);
        uVar30 = uStack_64 << 7 | uStack_6c >> 0x19;
        uVar20 = uStack_68 << 1 | uVar19 >> 0x1f;
        uVar21 = uVar30 + uVar20;
        uVar31 = uStack_5c << 0xc | uStack_60 >> 0x14;
        uVar50 = uVar21 + uVar31;
        uVar32 = (uint)((ulonglong)uVar52 * 0x80000000) |
                 uVar46 * 0xf796ca9 +
                 uVar52 * -0x210ca4ff + (int)((ulonglong)uVar52 * 0xf796ca9 >> 0x20) >> 1;
        lVar4 = (ulonglong)uVar32 * 0x85ebca87;
        uVar34 = uVar33 << 0x12 | uStack_58 >> 0xe;
        uVar46 = uVar50 + uVar34 ^ (uint)lVar4;
        lVar5 = (ulonglong)uVar46 * 0x85ebca87;
        uVar51 = (uint)lVar5;
        uVar22 = (uint)((ulonglong)uVar48 * 0x80000000) |
                 uVar41 * 0xf796ca9 +
                 uVar48 * -0x210ca4ff + (int)((ulonglong)uVar48 * 0xf796ca9 >> 0x20) >> 1;
        lVar6 = (ulonglong)uVar22 * 0x85ebca87;
        uVar41 = uVar51 + 0xc2b2ae63 ^ (uint)lVar6;
        lVar7 = (ulonglong)uVar41 * 0x85ebca87;
        uVar23 = (uint)lVar7;
        uVar24 = (uint)((ulonglong)uVar43 * 0x80000000) |
                 uVar44 * 0xf796ca9 +
                 uVar43 * -0x210ca4ff + (int)((ulonglong)uVar43 * 0xf796ca9 >> 0x20) >> 1;
        lVar8 = (ulonglong)uVar24 * 0x85ebca87;
        uVar44 = uVar23 + 0xc2b2ae63 ^ (uint)lVar8;
        lVar9 = (ulonglong)uVar44 * 0x85ebca87;
        uVar25 = (uint)lVar9;
        uVar26 = (uint)((ulonglong)uVar14 * 0x80000000) |
                 uVar15 * 0xf796ca9 +
                 uVar14 * -0x210ca4ff + (int)((ulonglong)uVar14 * 0xf796ca9 >> 0x20) >> 1;
        lVar10 = (ulonglong)uVar26 * 0x85ebca87;
        uVar15 = uVar25 + 0xc2b2ae63 ^ (uint)lVar10;
        lVar11 = (ulonglong)uVar15 * 0x85ebca87;
        uVar27 = (uint)lVar11;
        uVar49 = uVar27 + 0xc2b2ae63;
        iVar29 = (((((uStack_6c * 0x80 | uStack_64 >> 0x19) + (uVar19 * 2 | uStack_68 >> 0x1f) +
                     (uint)CARRY4(uVar30,uVar20) + (uStack_60 * 0x1000 | uStack_5c >> 0x14) +
                     (uint)CARRY4(uVar21,uVar31) + (uStack_58 * 0x40000 | uVar33 >> 0xe) +
                     (uint)CARRY4(uVar50,uVar34) ^
                    (uVar40 * -0x80000000 +
                    uVar16 * -0x784349ac + (int)((ulonglong)uVar52 * 0x80000000 >> 0x20)) *
                    -0x7a143579 + uVar32 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20)) *
                    -0x7a143579 + uVar46 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) +
                    -0x7a143589 + (uint)(0x3d4d519c < uVar51) ^
                   (uVar45 * -0x80000000 +
                   uVar36 * -0x784349ac + (int)((ulonglong)uVar48 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar22 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20)) *
                   -0x7a143579 + uVar41 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20) +
                   -0x7a143589 + (uint)(0x3d4d519c < uVar23) ^
                  (uVar39 * -0x80000000 +
                  uVar42 * -0x784349ac + (int)((ulonglong)uVar43 * 0x80000000 >> 0x20)) *
                  -0x7a143579 + uVar24 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20)) *
                  -0x7a143579 + uVar44 * -0x61c8864f + (int)((ulonglong)lVar9 >> 0x20) + -0x7a143589
                  + (uint)(0x3d4d519c < uVar25) ^
                 (uVar38 * -0x80000000 +
                 uVar37 * -0x784349ac + (int)((ulonglong)uVar14 * 0x80000000 >> 0x20)) * -0x7a143579
                 + uVar26 * -0x61c8864f + (int)((ulonglong)lVar10 >> 0x20)) * -0x7a143579 +
                 uVar15 * -0x61c8864f + (int)((ulonglong)lVar11 >> 0x20) + -0x7a143589 +
                 (uint)(0x3d4d519c < uVar27);
      }
      uVar19 = uVar49 + uVar17;
      uVar33 = 0;
      uStack_58 = iVar29 + (uint)CARRY4(uVar49,uVar17);
      puVar35 = (uint *)((int)puVar35 + (uVar17 & 0xffffffe0));
      uVar17 = uVar17 & 0x1f;
      do {
        if (uVar33 == 0 && (7 < uVar17) <= uVar33) {
          if (uVar33 == 0 && (3 < uVar17) <= uVar33) {
            if (uVar17 == 0 && uVar33 == 0) goto LAB_71707e84;
            lVar4 = (ulonglong)(uint)(byte)*puVar35 * 0x165667c5;
            uVar49 = (uint)lVar4 ^ uVar19;
            uStack_58 = (uint)(byte)*puVar35 * 0x27d4eb2f + (int)((ulonglong)lVar4 >> 0x20) ^
                        uStack_58;
            uVar37 = uVar49 << 0xb | uStack_58 >> 0x15;
            lVar4 = (ulonglong)uVar37 * 0x85ebca87;
            uVar19 = (uint)lVar4;
            uStack_58 = (uStack_58 << 0xb | uVar49 >> 0x15) * -0x7a143579 +
                        uVar37 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20);
            iVar29 = 1;
            uVar42 = 0xffffffff;
          }
          else {
            lVar4 = (ulonglong)*puVar35 * 0x85ebca87;
            uVar49 = (uint)lVar4 ^ uVar19;
            uStack_58 = *puVar35 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) ^ uStack_58;
            uVar37 = uVar49 << 0x17 | uStack_58 >> 9;
            lVar4 = (ulonglong)uVar37 * 0x27d4eb4f;
            uVar38 = (uint)lVar4;
            uVar19 = uVar38 + 0x9e3779f9;
            iVar29 = 4;
            uStack_58 = (uStack_58 << 0x17 | uVar49 >> 9) * 0x27d4eb4f +
                        uVar37 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + 0x165667b1 +
                        (uint)(0x61c88606 < uVar38);
            uVar42 = 0xfffffffc;
          }
        }
        else {
          uVar37 = *puVar35;
          uVar49 = (uint)((ulonglong)uVar37 * 0x80000000) |
                   puVar35[1] * 0x27d4eb4f +
                   uVar37 * -0x3d4d51c3 + (int)((ulonglong)uVar37 * 0x27d4eb4f >> 0x20) >> 1;
          lVar4 = (ulonglong)uVar49 * 0x85ebca87;
          uStack_58 = (puVar35[1] * -0x80000000 +
                      uVar37 * -0x6c158a59 + (int)((ulonglong)uVar37 * 0x80000000 >> 0x20)) *
                      -0x7a143579 + uVar49 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) ^
                      uStack_58;
          uVar49 = (uint)lVar4 ^ uVar19;
          uVar37 = uVar49 << 0x1b | uStack_58 >> 5;
          lVar4 = (ulonglong)uVar37 * 0x85ebca87;
          uVar38 = (uint)lVar4;
          uVar19 = uVar38 + 0xc2b2ae63;
          iVar29 = 8;
          uVar42 = 0xfffffff8;
          uStack_58 = (uStack_58 << 0x1b | uVar49 >> 5) * -0x7a143579 +
                      uVar37 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) + -0x7a143589 +
                      (uint)(0x3d4d519c < uVar38);
        }
        bVar53 = CARRY4(uVar42,uVar17);
        uVar17 = uVar42 + uVar17;
        puVar35 = (uint *)((int)puVar35 + iVar29);
        uVar33 = (uVar33 - 1) + (uint)bVar53;
      } while( true );
    }
    goto LAB_71707ef4;
  }
LAB_7170854c:
  *DAT_7120188c = FUN_7134785c;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  iVar18 = 50000;
  puVar28 = &DAT_700c8ec8;
  do {
    *puVar28 = 0xffff;
    iVar12 = DAT_70b3edac;
    iVar29 = DAT_70b3eda8;
    iVar18 = iVar18 + -1;
    puVar28 = puVar28 + 1;
  } while (iVar18 != 0);
  iVar18 = 0;
  do {
    *(undefined1 *)(iVar12 + iVar18) = 1;
    *(undefined1 *)(iVar29 + iVar18) = 1;
    iVar18 = iVar18 + 1;
  } while (iVar18 != 0x40);
  if (_ext___stack_chk_guard == iVar13) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
LAB_71707e84:
  uVar19 = uVar19 ^ uStack_58 >> 1;
  lVar4 = (ulonglong)uVar19 * 0x27d4eb4f;
  uVar49 = (uint)lVar4;
  uVar17 = uStack_58 * 0x27d4eb4f + uVar19 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20);
  uVar49 = (uVar49 >> 0x1d | uVar17 * 8) ^ uVar49;
  lVar4 = (ulonglong)uVar49 * 0x9e3779f9;
  uVar17 = (uVar17 ^ uVar17 >> 0x1d) * -0x61c88607 +
           uVar49 * 0x165667b1 + (int)((ulonglong)lVar4 >> 0x20);
  (&DAT_70125c88)[iVar18 * 4] = uVar17;
  (&DAT_70125c84)[iVar18 * 4] = uVar17 ^ (uint)lVar4;
  puVar47 = DAT_70135cd4;
LAB_71707ef4:
  iVar18 = iVar18 + 1;
  if (iVar18 == 0x1000) goto LAB_7170852c;
  goto LAB_71707f00;
LAB_7170852c:
  DAT_70135cd4 = (uint *)0x0;
  DAT_70135cd0 = (uint *)0xffffffff;
  goto LAB_7170854c;
}


// =========================================================================
// Function: FUN_717089fc
// Entry: 0x717089fc | Size: 204 bytes
// =========================================================================

void FUN_717089fc(void)

{
  undefined4 *puVar1;
  
  *DAT_7120188c = &LAB_71708bc0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &DAT_71708bf8;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_71708c30;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &DAT_71708c84;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_71708cbc;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// =========================================================================
// Function: FUN_71708cf4
// Entry: 0x71708cf4 | Size: 132 bytes
// =========================================================================

void FUN_71708cf4(void)

{
  undefined4 *puVar1;
  
  *DAT_7120188c = &LAB_71708e30;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &DAT_71708e68;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &DAT_71708ea0;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// =========================================================================
// Function: FUN_71708ed8
// Entry: 0x71708ed8 | Size: 60 bytes
// =========================================================================

void FUN_71708ed8(void)

{
  *DAT_7120188c = &LAB_713c3a6c;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// =========================================================================
// Function: FUN_71708fc8
// Entry: 0x71708fc8 | Size: 1352 bytes
// =========================================================================

undefined4 FUN_71708fc8(int param_1,int param_2,undefined4 param_3,int param_4)

{
  char *pcVar1;
  undefined2 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined2 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  int iVar15;
  bool bVar16;
  int iStack_44;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  iVar15 = *(int *)(param_1 + 0x18);
  iVar3 = FUN_7155f284(iVar15);
  uVar9 = *(uint *)(iVar15 + 8);
  if (iVar3 == 0) {
    uVar9 = uVar9 & 0xffffdfff;
  }
  *(uint *)(param_2 + 4) = uVar9;
  if ((*(byte *)(iVar15 + 0xb) & 1) != 0) {
    FUN_717016f4(iVar15);
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(iVar15 + 0x54);
    goto LAB_71709498;
  }
  if ((param_4 != 0) && ((*(ushort *)(iVar15 + 0xc) & 0xfff) == 0)) goto LAB_71709498;
  piVar4 = (int *)FUN_71417f58(iVar15);
  bVar16 = false;
  if ((piVar4 != (int *)0x0) && (*piVar4 <= *DAT_70b46460)) {
    bVar16 = *DAT_711f6aa4 != 0;
  }
  if (param_4 == 0) {
    FUN_713a6980();
    FUN_713a68ec(0,3,0x1406,0,0);
    iVar5 = 0xc;
    *(undefined4 *)(param_2 + 8) = 0xc;
    if ((*(byte *)(iVar15 + 8) & 0x10) != 0) {
      FUN_713a68ec(2,3,0x1406,0,0xc);
      iVar5 = *(int *)(param_2 + 8) + 0xc;
      *(int *)(param_2 + 8) = iVar5;
    }
    if ((uVar9 & 0x2000) != 0) {
      FUN_713a68ec(8,4,0x1401,1,iVar5);
      iVar5 = *(int *)(param_2 + 8) + 4;
      *(int *)(param_2 + 8) = iVar5;
    }
    if ((*(byte *)(iVar15 + 8) & 8) != 0) {
      FUN_713a68ec(3,4,0x1401,1,iVar5);
      iVar5 = *(int *)(param_2 + 8) + 4;
      *(int *)(param_2 + 8) = iVar5;
    }
    pcVar1 = DAT_70ffc9bc;
    uVar7 = 0x1406;
    if (*DAT_70ffc9bc == '\0') {
      uVar7 = 0x1403;
    }
    FUN_713a68ec(1,2,uVar7,0,iVar5);
    iVar5 = 3;
    if (*pcVar1 == '\0') {
      iVar5 = 2;
    }
    iVar5 = *(int *)(param_2 + 8) + (*(int *)(iVar15 + 0x1c) << iVar5);
    *(int *)(param_2 + 8) = iVar5;
    if (bVar16 == false) {
      iStack_44 = 0;
    }
    else {
      FUN_713a68ec(4,4,0x1403,1,iVar5);
      iStack_44 = *(int *)(param_2 + 8);
      *(int *)(param_2 + 8) = iStack_44 + 8;
      FUN_713a68ec(5,4,0x1401,0,iStack_44 + 8);
      iVar5 = *(int *)(param_2 + 8) + 4;
      *(int *)(param_2 + 8) = iVar5;
    }
    *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0xc) * iVar5;
    iVar5 = imp_malloc();
    iStack_28 = iVar5;
    FUN_7143a0b4(param_2,param_1,iVar15,uVar9,*(undefined4 *)(iVar15 + 0x1c),0,iVar5,0,0,0,iVar3);
    if (bVar16 != false) goto LAB_71709304;
    uStack_2c = *(undefined4 *)(param_2 + 0xc);
    uStack_30 = *(undefined4 *)(param_2 + 0x10);
    uStack_34 = *(undefined4 *)(param_2 + 0x2c);
  }
  else {
    iVar5 = FUN_713a6a54(*(undefined4 *)(param_2 + 0x14));
    iStack_28 = iVar5;
    if (bVar16 == false) {
      FUN_7143a0b4(param_2,param_1,iVar15,uVar9,*(undefined4 *)(iVar15 + 0x1c),param_4,iVar5,0,0,0,
                   iVar3);
LAB_7170941c:
      FUN_713a69f0(*(undefined4 *)(param_2 + 0x14));
      goto LAB_71709498;
    }
    iStack_44 = *(int *)(param_2 + 8);
    FUN_7143a0b4(param_2,param_1,iVar15,uVar9,*(undefined4 *)(iVar15 + 0x1c),param_4,iVar5,0,0,0,
                 iVar3);
    iStack_44 = iStack_44 + -0xc;
LAB_71709304:
    iVar13 = *(int *)(param_2 + 0xc);
    iVar3 = FUN_71418368(piVar4);
    iVar11 = *(int *)(param_2 + 0x18);
    iVar6 = FUN_71418780(piVar4);
    if (iVar13 == 0) {
      if (param_4 != 0) goto LAB_7170941c;
      uStack_2c = *(undefined4 *)(param_2 + 0xc);
      uStack_30 = *(undefined4 *)(param_2 + 0x10);
      uStack_34 = *(undefined4 *)(param_2 + 0x2c);
    }
    else {
      puVar14 = (undefined4 *)(iVar3 + iVar11 * 0x10);
      puVar10 = (undefined2 *)(iVar5 + iStack_44);
      puVar12 = (undefined4 *)(iVar6 + *(int *)(param_2 + 0x18) * 4);
      do {
        FUN_71ba21e8(*puVar14,0x477fff00);
        uVar2 = FUN_71ba17bc();
        *puVar10 = uVar2;
        FUN_71ba21e8(puVar14[1],0x477fff00);
        uVar2 = FUN_71ba17bc();
        puVar10[1] = uVar2;
        FUN_71ba21e8(puVar14[2],0x477fff00);
        uVar2 = FUN_71ba17bc();
        puVar10[2] = uVar2;
        FUN_71ba21e8(puVar14[3],0x477fff00);
        uVar2 = FUN_71ba17bc();
        puVar10[3] = uVar2;
        puVar14 = puVar14 + 4;
        iVar13 = iVar13 + -1;
        *(undefined4 *)(puVar10 + 4) = *puVar12;
        puVar10 = (undefined2 *)((int)puVar10 + *(int *)(param_2 + 8));
        puVar12 = puVar12 + 1;
      } while (iVar13 != 0);
      if (param_4 != 0) goto LAB_7170941c;
      uStack_2c = *(undefined4 *)(param_2 + 0xc);
      uStack_30 = *(undefined4 *)(param_2 + 0x10);
      uStack_34 = *(undefined4 *)(param_2 + 0x2c);
      if (bVar16 == false) goto LAB_7170946c;
    }
    FUN_7143abfc(&iStack_28,&uStack_2c,&uStack_30,&uStack_34,uStack_34,
                 *(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 8));
  }
LAB_7170946c:
  FUN_713a6d24(iStack_28,uStack_30,uStack_2c,*(undefined4 *)(param_2 + 8));
  FUN_713a6c0c(uStack_34,0x1403,*(undefined4 *)(param_2 + 0x28));
  uVar7 = FUN_713a6b6c(bVar16 ^ 1,1);
  *(undefined4 *)(param_2 + 0x14) = uVar7;
LAB_71709498:
  piVar4 = (int *)FUN_71417f58(iVar15);
  if (((piVar4 != (int *)0x0) && (*piVar4 <= *DAT_70b46460)) && (*DAT_711f6aa4 != 0)) {
    uVar7 = FUN_71418b98(param_1);
    uVar8 = FUN_71419bf8(param_1,piVar4,uVar7);
    FUN_7141a03c(uVar7,uVar8);
  }
  return 1;
}


// =========================================================================
// Function: FUN_7170a47c
// Entry: 0x7170a47c | Size: 3404 bytes
// =========================================================================

void FUN_7170a47c(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  undefined1 uVar1;
  byte bVar2;
  short sVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  short *psVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  undefined4 uVar12;
  int *piVar13;
  int *piVar14;
  undefined4 *puVar15;
  int iVar16;
  uint uVar17;
  byte *pbVar18;
  byte *pbVar19;
  undefined4 uVar20;
  int iVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  int iVar24;
  uint *puVar25;
  int iVar26;
  int *piVar27;
  char *pcVar28;
  undefined4 *puVar29;
  undefined1 *puVar30;
  undefined1 uVar31;
  int *extraout_r1;
  int *piVar32;
  int *extraout_r1_00;
  int *piVar33;
  int iVar34;
  int iVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  uint uVar38;
  uint uVar39;
  undefined4 uVar40;
  undefined4 *puVar41;
  int iVar42;
  uint uVar43;
  bool bVar44;
  bool bVar45;
  undefined8 uVar46;
  uint uStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_28;
  
  if ((param_1 != 0) && ((*(byte *)(*(int *)(param_2 + 0x18) + 9) & 4) == 0)) {
    uVar17 = FUN_714901f0(param_2);
    iVar16 = DAT_7100037c;
    puVar15 = DAT_70ffcf28;
    piVar14 = DAT_70ffcf24;
    piVar13 = DAT_70ffce1c;
    uVar12 = DAT_70ffc96c;
    piVar11 = DAT_70ffc968;
    piVar10 = DAT_70ffc964;
    iVar9 = DAT_70c38f30;
    psVar8 = DAT_70b88ad8;
    bVar44 = false;
    if ((((uVar17 & 0x6000) == 0) || ((uVar17 & 0x4000) != 0)) &&
       ((0 < *(int *)(DAT_70c38f30 + 0xe8) && (*(char *)(DAT_7100037c + 0xa4) == '\0')))) {
      bVar44 = *DAT_70ffd314 != 3;
    }
    if (*(short *)(param_1 + 0x1a) != 0) {
      uVar43 = ~(uint)*(byte *)(*DAT_70ffc988 + 2) & (uVar17 & 0xffff) >> 0xe & 1;
      pbVar18 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9c28);
      pbVar19 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9c48);
      uVar17 = 0;
      do {
        iVar35 = param_1 + 0x1c + uVar17 * 0x38;
        piVar33 = *(int **)(iVar35 + 0x30);
        piVar27 = piVar33 + 3;
        if (uVar43 == 0) {
          uVar38 = (uint)*(byte *)((int)piVar33 + 7);
        }
        else {
          uStack_54 = piVar33[1];
          iStack_50 = *piVar27;
          iStack_4c = piVar33[5];
          uVar38 = uStack_54 >> 0x18;
          piVar33[5] = 0;
          *piVar27 = 0;
          *(byte *)((int)piVar33 + 6) = (byte)(uStack_54 >> 0x10) >> 3;
          *(byte *)((int)piVar33 + 5) = (byte)(uStack_54 >> 8) >> 3;
          *(char *)(piVar33 + 1) = (char)((uStack_54 & 0xff) >> 3);
        }
        if (uVar38 != 0) {
          bVar4 = uVar38 != 0xff;
          bVar5 = *(int *)(iVar35 + 0x34) != 0;
          bVar45 = bVar4 || bVar5;
          if (bVar45) {
            uVar20 = FUN_71ba1e0c(uVar38);
            FUN_71ba13e0(uVar20,0x437f0000);
            FUN_713a91d4();
          }
          FUN_71423938(0xc,bVar45);
          if (*piVar11 == 0) {
            if (*piVar10 != 0) {
              FUN_713a63b0(0xb57);
              *piVar10 = 0;
            }
            if ((param_4 & 8) == 0) {
              FUN_713a813c(uVar12);
            }
          }
          else {
            FUN_71423d78(piVar33,param_4);
          }
          uVar39 = piVar33[4];
          iVar42 = *(int *)((int)piVar33 + *piVar14);
          if (iVar42 == 0) {
            uVar20 = 0;
          }
          else {
            uVar20 = FUN_71ba1e0c(*(undefined1 *)(iVar42 + 4));
            uVar20 = FUN_71ba21e8(uVar20,0x3b8080c4);
          }
          if (1 < *(int *)(iVar9 + 0xe8)) {
            thunk_FUN_71566860();
          }
          if (DAT_710eaf34 != '\0') {
            *puVar15 = 0x3f666666;
          }
          piVar32 = (int *)(uint)(iVar42 == 0);
          bVar7 = (bool)(bVar44 & (uVar39 & 3) != 0);
          if (bVar7 && piVar32 == (int *)0x0) {
            uVar46 = FUN_71ba2d10(*puVar15,0x3f800000);
            piVar32 = (int *)((ulonglong)uVar46 >> 0x20);
            if ((int)uVar46 != 0) {
              uVar31 = *(undefined1 *)(iVar42 + 2);
              uVar1 = *(undefined1 *)(iVar42 + 3);
              iVar21 = *(int *)(param_2 + 0x3c);
              if (*(int *)(param_2 + 0x3c) == 0) {
                iVar21 = param_2;
              }
              iVar21 = FUN_7141ee6c(*(undefined4 *)(iVar21 + 4));
              uVar22 = FUN_71ba1e0c(uVar31);
              uVar23 = FUN_71ba1e0c(uVar1);
              if (uVar43 == 0) {
                if (uVar39 == 2) {
                  uVar37 = 0x3e000000;
                }
                else {
                  if (bVar45) goto LAB_7170a914;
                  bVar2 = *(byte *)(piVar33 + 1);
                  uVar36 = FUN_71ba1b94((uint)*(byte *)((int)piVar33 + 5) +
                                        (uint)*(byte *)((int)piVar33 + 6) + (uint)bVar2);
                  uVar37 = FUN_71ba240c(0x437f0000);
                  uVar37 = FUN_71ba0b38(uVar37,uVar37);
                  uVar37 = FUN_71ba13e0(uVar37,0x437f0000);
                  uVar37 = imp_fmaxf(uVar37,0x3f800000);
                  if ((bVar2 != 0xff) && (iVar24 = FUN_71ba2cf0(uVar37,0x3f800000), iVar24 != 0)) {
                    uVar36 = FUN_71ba13e0(uVar36,0x44160000);
                    uVar36 = FUN_71ba21e8(uVar36,uVar36);
                    uVar37 = imp_fmaxf(uVar36,0x3f800000);
                  }
                }
                uVar20 = FUN_71ba21e8(uVar20,uVar37);
              }
              else {
                uVar20 = 0x3d4ccccd;
              }
LAB_7170a914:
              uVar36 = *puVar15;
              iVar24 = FUN_71ba2d70(uVar36,0);
              if (iVar24 != 0) {
                uVar36 = FUN_71ba240c(0x3f800000,uVar36);
                uVar36 = imp_fmaxf(uVar36,0);
                uVar20 = FUN_71ba21e8(uVar20,uVar36);
              }
              if (!bVar4 && !bVar5) {
                uVar20 = FUN_71ba21e8(uVar20,0x40400000);
                uVar20 = FUN_71ba21e8(uVar20,0x3ecccccd);
                uVar20 = FUN_71ba0b38(uVar20,0x3dcccccd);
                iVar24 = FUN_71ba2d70(uVar20,0x3ecccccd);
                if (iVar24 != 0) {
                  uVar20 = 0x3ecccccd;
                }
              }
              if ((*(int *)(iVar9 + 0xe8) < 2) || (iVar24 = thunk_FUN_71566860(), iVar24 != 0)) {
                uVar22 = FUN_71ba21e8(uVar22,0x3e000000);
                uVar22 = FUN_71ba21e8(uVar22,0x42480000);
                uVar40 = *(undefined4 *)(iVar21 + 0x30);
                uVar37 = *(undefined4 *)(iVar21 + 0x34);
                FUN_71ba13e0(uVar40,uVar22);
                FUN_71ba17bc();
                uVar36 = FUN_71ba1b94();
                uVar36 = FUN_71ba21e8(uVar22,uVar36);
                uVar39 = FUN_71ba240c(uVar40,uVar36);
                uVar22 = FUN_71ba13e0(uVar39 ^ 0x80000000,uVar22);
                uVar23 = FUN_71ba21e8(uVar23,0x3e000000);
                uVar23 = FUN_71ba21e8(uVar23,0x42480000);
                FUN_71ba13e0(uVar37,uVar23);
                FUN_71ba17bc();
                uVar36 = FUN_71ba1b94();
                uVar36 = FUN_71ba21e8(uVar23,uVar36);
                uVar39 = FUN_71ba240c(uVar37,uVar36);
                uVar23 = FUN_71ba13e0(uVar39 ^ 0x80000000,uVar23);
                uVar31 = *(undefined1 *)(iVar42 + 3);
                uVar36 = FUN_71ba1e0c(*(undefined1 *)(iVar42 + 2));
                uVar36 = FUN_71ba21e8(uVar36,0x3e000000);
                uVar37 = FUN_71ba1e0c(uVar31);
                uVar37 = FUN_71ba21e8(uVar37,0x3e000000);
                FUN_71445874(*(undefined4 *)(iVar42 + 8),uVar20,uVar36,uVar37,uVar22,uVar23);
                piVar32 = extraout_r1;
              }
              else {
                uVar22 = FUN_71ba21e8(uVar20,0x40a00000);
                if (!bVar4 && !bVar5) {
                  uVar22 = uVar20;
                }
                FUN_71445458(uVar22);
                piVar32 = extraout_r1_00;
              }
            }
          }
          if (uVar43 != 0) {
            piVar33[5] = iStack_4c;
            piVar33[1] = uStack_54;
            *piVar27 = iStack_50;
            piVar32 = piVar33;
          }
          if ((param_4 & 0x84) == 0) {
LAB_7170ab14:
            uVar20 = 1;
            uVar31 = 0;
          }
          else {
            puVar25 = (uint *)*piVar33;
            if (puVar25 != (uint *)0x0) {
              piVar32 = (int *)*puVar25;
            }
            if (((puVar25 == (uint *)0x0 || piVar32 == (int *)0x0) ||
                ((*(char *)(iVar16 + 0xa4) != '\0' &&
                 (((piVar32[0xb] == 0 ||
                   (uVar39 = (uint)*(byte *)(piVar32[0xb] + 0xb), 0x14 < uVar39)) ||
                  ((1 << uVar39 & 0x100019U) == 0)))))) || ((*(ushort *)(piVar32 + 0xc) & 1) != 0))
            goto LAB_7170ab14;
            FUN_71423508(1);
            uVar31 = *(undefined1 *)(*piVar33 + 0x50);
            uVar20 = 9;
          }
          FUN_71423938(uVar20,uVar31);
          iVar42 = 0x3f800000;
          iVar21 = 1;
          if (0 < DAT_70ffd19c) {
            puVar41 = &DAT_70ffcf44;
            iVar24 = DAT_70ffd19c;
            do {
              if ((int *)*puVar41 == piVar33) {
                iVar24 = puVar41[1];
                iVar21 = 0;
                if (iVar24 == 0) {
                  iStack_28 = 0;
                }
                else {
                  iStack_28 = 0;
                  do {
                    piVar27 = *(int **)(iVar24 + iVar21);
                    if (piVar27 != (int *)0x0) {
                      iVar42 = *piVar27;
                    }
                    if (piVar27 != (int *)0x0 && iVar42 != 0) {
                      iVar34 = iVar24 + iVar21;
                      uVar20 = *(undefined4 *)(iVar34 + 0x10);
                      iVar26 = FUN_71ba2d70(uVar20,0);
                      if (iVar26 != 0) {
                        uVar23 = *(undefined4 *)(iVar42 + 0x10);
                        uVar22 = FUN_71ba1b94(*(undefined4 *)(iVar42 + 0xc));
                        uVar23 = FUN_71ba1b94(uVar23);
                        FUN_713a5c44(1,iStack_28,iVar34 + 4,*(undefined4 *)(iVar34 + 0xc),uVar20,
                                     uVar22,uVar23,*(undefined1 *)(iVar34 + 0x14),
                                     *(undefined1 *)(iVar34 + 0x15));
                        iVar42 = **(int **)(iVar24 + iVar21);
                        iVar34 = *piVar13;
                        FUN_714a9578(**(undefined4 **)(iVar42 + 0x2c),
                                     *(undefined4 **)(iVar42 + 0x2c),2);
                        FUN_7138c3c4(*(undefined4 *)(iVar42 + iVar34),iStack_28);
                        (**(code **)(**(int **)(iVar42 + iVar34) + 0xc))
                                  (*(int **)(iVar42 + iVar34),1,1);
                        thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
                        thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
                        iVar26 = DAT_71201730 + -1;
                        if (DAT_71201730 == 0) {
                          iVar26 = 0xff;
                        }
                        (**(code **)(**(int **)(iVar42 + iVar34) + 8))
                                  (*(int **)(iVar42 + iVar34),iVar26);
                        iStack_28 = iStack_28 + 1;
                      }
                    }
                    iVar21 = iVar21 + 0x18;
                  } while (iVar21 != 0xf0);
                  if (iStack_28 == 0) {
                    iStack_28 = 0;
                  }
                  else {
                    DAT_70b466fc = DAT_70b466fc | 0x200000;
                  }
                  iVar21 = 0;
                }
                goto LAB_7170ad4c;
              }
              puVar41 = puVar41 + 3;
              iVar24 = iVar24 + -1;
            } while (iVar24 != 0);
          }
          puVar41 = (undefined4 *)0x0;
          iStack_28 = 0;
LAB_7170ad4c:
          DataMemoryBarrier(0xb);
          if (((DAT_711f6aac & 1) == 0) &&
             (iVar42 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711f6aac), iVar42 != 0)) {
            pcVar28 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9c38);
            if (*pcVar28 == '\0') {
              puVar29 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9c28);
              *puVar29 = 0x13a91511;
              *(undefined1 *)(puVar29 + 1) = 1;
              thunk_GFDIUClbc_QcPNgD_wH(&LAB_7170c4d8,puVar29,&DAT_70b0e000);
              puVar30 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9c38);
              *puVar30 = 1;
            }
            if (pbVar18[4] != 0) {
              *pbVar18 = *pbVar18 ^ 0x65;
              pbVar18[1] = pbVar18[1] ^ 0x6d;
              pbVar18[2] = pbVar18[2] ^ 0xcd;
              pbVar18[4] = 0;
              pbVar18[3] = pbVar18[3] ^ 0x13;
            }
            pcVar28 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9c58);
            if (*pcVar28 == '\0') {
              puVar29 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9c48);
              *puVar29 = 0x64a20316;
              *(undefined2 *)(puVar29 + 1) = 0x18b;
              thunk_GFDIUClbc_QcPNgD_wH(&LAB_7170c4fc,puVar29,&DAT_70b0e000);
              puVar30 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9c58);
              *puVar30 = 1;
            }
            if (pbVar19[5] != 0) {
              *pbVar19 = *pbVar19 ^ 0x65;
              pbVar19[1] = pbVar19[1] ^ 0x6d;
              pbVar19[2] = pbVar19[2] ^ 0xcd;
              pbVar19[3] = pbVar19[3] ^ 0x13;
              pbVar19[5] = 0;
              pbVar19[4] = pbVar19[4] ^ 0x8b;
            }
            DAT_711f6aa8 = (int *)FUN_715ec410(pbVar18,pbVar19,1);
            thunk_SixizuLbAnqfgRApsCY(&DAT_711f6aac);
          }
          iVar42 = thunk_FUN_71566860();
          if (iVar42 == 0) {
            uVar39 = 0;
          }
          else {
            uVar39 = FUN_7151c204();
          }
          if (iVar21 == 0) {
            piVar27 = (int *)0x0;
            if (*(char *)(puVar41 + 2) != '\0') {
              piVar27 = DAT_711f6aa8;
            }
            if (*(char *)(puVar41 + 2) != '\0' && piVar27 != (int *)0x0) {
              sVar3 = *psVar8;
              thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
              thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
              if (DAT_712016cc != 0) {
                iVar42 = thunk_FUN_71566860();
                if (iVar42 == 0) {
                  if ((~uVar39 & (uint)(sVar3 != 3)) == 0) goto LAB_7170af94;
                }
                else {
                  iVar42 = FUN_7151c204();
                  if ((iVar42 != 0) && (uVar39 != 0 || sVar3 == 3)) {
LAB_7170af94:
                    DAT_70b466fc = DAT_70b466fc | 0x8000;
                    FUN_713a5848(DAT_70ffd1a0);
                    iVar21 = *piVar13;
                    iVar42 = *DAT_711f6aa8;
                    FUN_714a9578(**(undefined4 **)(iVar42 + 0x2c),*(undefined4 **)(iVar42 + 0x2c),2)
                    ;
                    FUN_7138c3f4(*(undefined4 *)(iVar42 + iVar21),0);
                    piVar27 = *(int **)(iVar42 + iVar21);
                    (**(code **)(*piVar27 + 0xc))(piVar27,1,1);
                  }
                }
              }
            }
          }
          bVar6 = false;
          if ((*(byte *)(iVar16 + 0xa4) <= (!bVar4 && !bVar5)) &&
             (((uVar43 == 0 || (0xc0 < *(byte *)((int)piVar33 + 7))) &&
              (FUN_714313ac(iVar35), uVar38 != 0xff)))) {
            if ((bVar7) && (iVar42 = FUN_71ba2d10(*puVar15,0x3f800000), iVar42 != 0)) {
              FUN_71445010();
              bVar6 = true;
            }
            FUN_71413b60(0x14,3);
            FUN_714313ac(iVar35);
            FUN_71413b60(0x14,2);
          }
          if (0 < iStack_28) {
            iVar35 = 0;
            do {
              FUN_713a5c44(0,iVar35,0,0,0,0x3f800000,0x3f800000,0,0);
              iVar35 = iVar35 + 1;
            } while (iStack_28 != iVar35);
          }
          DAT_70b466fc = DAT_70b466fc & 0xffcf7fff;
          if (bVar45) {
            FUN_713a95f8();
          }
          if ((bVar7) && (iVar35 = FUN_71ba2d10(*puVar15,0x3f800000), !bVar6 && iVar35 != 0)) {
            FUN_71445010();
          }
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 < *(ushort *)(param_1 + 0x1a));
    }
  }
  return;
}


// =========================================================================
// Function: FUN_7170c1d4
// Entry: 0x7170c1d4 | Size: 348 bytes
// =========================================================================

void FUN_7170c1d4(void)

{
  undefined4 *puVar1;
  
  *DAT_7120188c = FUN_714428b4;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &DAT_71445cd4;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &DAT_71708f8c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71708fc8;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71442df4;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7170a47c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71444e14;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71444f10;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &DAT_7170999c;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// =========================================================================
// Function: FUN_7170c98c
// Entry: 0x7170c98c | Size: 60 bytes
// =========================================================================

void FUN_7170c98c(void)

{
  *DAT_7120188c = &DAT_713c4f30;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// =========================================================================
// Function: FUN_7170ca40
// Entry: 0x7170ca40 | Size: 60 bytes
// =========================================================================

void FUN_7170ca40(void)

{
  *DAT_7120188c = FUN_71348b54;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// =========================================================================
// Function: FUN_7170caf4
// Entry: 0x7170caf4 | Size: 48 bytes
// =========================================================================

void FUN_7170caf4(void)

{
  (*DAT_700f9c68)();
  *DAT_710002d0 = 0x457a0000;
  return;
}


// =========================================================================
// Function: FUN_7170cb7c
// Entry: 0x7170cb7c | Size: 1580 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x7170cebc) */
/* WARNING: Removing unreachable block (ram,0x7170d090) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7170cb7c(void)

{
  undefined4 *puVar1;
  int iVar2;
  byte bStack_51;
  uint auStack_50 [2];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  int iStack_28;
  
  iVar2 = _ext___stack_chk_guard;
  iStack_28 = _ext___stack_chk_guard;
  *DAT_7120188c = FUN_7145983c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71458e54;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_71458454;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7145a2f4;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7145a360;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7145a3f4;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7145a61c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7145a7a4;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7145a960;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9c68 = *DAT_71201884 + DAT_71201880;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7170caf4;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7145f44c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7145e0b4;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7145f1e0;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xab8c0b >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x4e;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x4e;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  uStack_34 = 0x26d5d038;
  *(undefined **)((auStack_50[0] ^ 0xccffcf) + DAT_7120187c) = &DAT_70ffd3b8;
  uStack_48 = 0xea;
  uStack_44 = 0;
  puStack_38 = &LAB_49abac16;
  uStack_3c = 0;
  uStack_40 = 0x3a;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xab8938 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x50;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xab8938;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccabd3) >> 2 ^ 0xacad96;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x50;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(undefined **)((auStack_50[0] ^ 0xccffc8) + DAT_7120187c) = &DAT_70fffac8;
  if (_ext___stack_chk_guard == iVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_7170d4dc
// Entry: 0x7170d4dc | Size: 924 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x7170d75c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_7170d4dc(void)

{
  undefined4 *puVar1;
  int iVar2;
  byte bStack_51;
  uint auStack_50 [2];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  int iStack_28;
  
  iVar2 = _ext___stack_chk_guard;
  iStack_28 = _ext___stack_chk_guard;
  *DAT_7120188c = FUN_7148e65c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7148dca4;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7149061c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7148ffc0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7148fe14;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71490770;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7149095c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71490de4;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71491370;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  uStack_3c = 0;
  uStack_44 = 0;
  uStack_34 = 0x26d5d038;
  puStack_38 = &LAB_49abac16;
  uStack_40 = 0x2d;
  uStack_48 = 0xd6;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x64be80 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x43;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x64be80;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccabfa) >> 2 ^ 0xacad82;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x43;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(undefined4 *)((auStack_50[0] ^ 0xccfff4) + DAT_7120187c) = DAT_710eac3c;
  if (_ext___stack_chk_guard == iVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_7170da8c
// Entry: 0x7170da8c | Size: 1952 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x7170db9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7170da8c(void)

{
  undefined4 *puVar1;
  int iVar2;
  byte bStack_51;
  uint auStack_50 [2];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  int iStack_28;
  
  iVar2 = _ext___stack_chk_guard;
  iStack_28 = _ext___stack_chk_guard;
  uStack_3c = 0;
  uStack_44 = 0;
  uStack_34 = 0x26d5d038;
  puStack_38 = &LAB_49abac16;
  uStack_40 = 0x79;
  uStack_48 = 0xaa;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xab89c8 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x8f;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xab89c8;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccabd2) >> 2 ^ 0xacad56;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x8f;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(undefined4 **)((auStack_50[0] ^ 0xccff88) + DAT_7120187c) = &DAT_70b46318;
  *DAT_7120188c = FUN_7139e614;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7170e7e0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7170e884;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7170e8bc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7170e8f4;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7170e92c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7170e970;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7170e9ac;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7138bad8;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7170e9e4;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7170ea1c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7170ea54;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7170ea8c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7170eac4;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7170eafc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7170eb34;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7170eb6c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7170eba4;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_713a67c8;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_713a6840;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7170ec0c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71379828;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_713a68cc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_713a68ec;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_713a6980;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_713a69f0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_713a6a54;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_713a6ad0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_713a6b08;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_713a6b6c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_713a6860;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_713a6c0c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_713a6c8c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_713a6cd8;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_713a6d24;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_713a6dc4;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_713a733c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7138e3a8;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  if (_ext___stack_chk_guard == iVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_7170e7e0
// Entry: 0x7170e7e0 | Size: 84 bytes
// =========================================================================

void FUN_7170e7e0(int param_1)

{
  uint uVar1;
  undefined4 unaff_lr;
  
  **(undefined4 **)(param_1 + 0x274) = unaff_lr;
  uVar1 = *(int *)(param_1 + 0x274) + 0x13U & 0xfffffff0;
  *(uint *)(param_1 + 0x270) = uVar1;
  *(uint *)(param_1 + 0x274) = uVar1;
  FUN_7139bc08(param_1);
  if (*(int *)(param_1 + 0x274) + 0x401U <= *(uint *)(param_1 + 0x264)) {
    return;
  }
  FUN_7139a77c(param_1);
  return;
}


// =========================================================================
// Function: FUN_7170ec74
// Entry: 0x7170ec74 | Size: 168 bytes
// =========================================================================

int FUN_7170ec74(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)(param_2 + 0x1c) = 0;
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 0x28) = 0;
  *(undefined1 *)(param_2 + 0x2c) = 0xff;
  puVar2 = *(undefined4 **)(param_1 + 0x10);
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      return param_1;
    }
    iVar1 = (*(code *)puVar2[8])(param_2,*puVar2,puVar2[1]);
    if (iVar1 == 0) break;
    puVar2 = (undefined4 *)puVar2[0xc];
  }
  puVar2 = (undefined4 *)puVar2[0xd];
  if (puVar2 == (undefined4 *)0x0) {
    return 0;
  }
  do {
    (*(code *)puVar2[9])(param_2,*puVar2,puVar2[1]);
    puVar2 = (undefined4 *)puVar2[0xd];
  } while (puVar2 != (undefined4 *)0x0);
  return 0;
}


// =========================================================================
// Function: FUN_7170ed34
// Entry: 0x7170ed34 | Size: 972 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x7170efbc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7170ed34(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  int iStack_58;
  byte bStack_51;
  uint auStack_50 [2];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  int iStack_28;
  
  iStack_28 = _ext___stack_chk_guard;
  iVar1 = FUN_714275f4(param_1,1,&iStack_58,&iStack_5c);
  puVar5 = (undefined4 *)0x0;
  if ((iVar1 == 0) || (0x2003 < iStack_5c - 0x34000U)) goto LAB_7170f0dc;
  uStack_60 = 0;
  uStack_64 = 0;
  uStack_68 = 0;
  iStack_6c = 0;
  uStack_70 = 0;
  uStack_74 = 0;
  uStack_78 = 0;
  iVar1 = FUN_71426d90(param_1,&uStack_78,iStack_58);
  if (iVar1 == iStack_58) {
    puVar2 = (undefined4 *)FUN_71427a44();
    puVar5 = (undefined4 *)0x0;
    if (puVar2 == (undefined4 *)0x0) goto LAB_7170f0dc;
    if (uStack_78 < 4) {
      *(char *)(puVar2 + 0xb) = (char)uStack_78 + -1;
    }
    puVar2[1] = uStack_74;
    *puVar2 = 0;
    puVar2[3] = uStack_68;
    puVar2[4] = uStack_64;
    puVar2[5] = uStack_60;
    if (iStack_6c == 0) {
LAB_7170eebc:
      puStack_38 = &LAB_49abac16;
      uStack_3c = 0;
      uStack_40 = 0xba;
      uStack_34 = 0x26d5d038;
      uStack_48 = 0x6b;
      uStack_44 = 0;
      bStack_51 = 0;
      do {
        *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
             (byte)(0xa4c48d >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0xd0;
        bStack_51 = bStack_51 + 1;
      } while (bStack_51 < 4);
      uStack_30 = 0xa4c48d;
      bStack_51 = 0;
      do {
        bStack_51 = bStack_51 + 1;
        uStack_30 = (uStack_30 | 0xccabd2) >> 2 ^ 0xacad17;
      } while (bStack_51 < 8);
      bStack_51 = 0;
      do {
        *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
             *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0xd0;
        bStack_51 = bStack_51 + 1;
      } while (bStack_51 < 4);
      bStack_51 = 0;
      uVar6 = 0xba;
      uVar7 = 0;
      do {
        iVar1 = (int)(char)bStack_51;
        bStack_51 = bStack_51 + 1;
        uVar7 = uVar7 ^ -(uVar7 + (iVar1 + 0xccaaffU < uVar6));
        uVar6 = uVar6 ^ (iVar1 + 0xccaaffU) - uVar6 ^ 0x6b;
      } while (bStack_51 < 8);
      iVar1 = FUN_71428670((auStack_50[0] ^ 0xccff49) + DAT_7120187c,param_1,puVar2,uVar7);
      puVar5 = puVar2;
      if (iVar1 != 0) goto LAB_7170f0dc;
    }
    else {
      iVar1 = FUN_714275f4(param_1,6,0,&iStack_5c);
      if ((iVar1 != 0) && (iStack_5c - 0x34000U < 0x2004)) {
        uVar3 = FUN_7142825c(param_1);
        *puVar2 = uVar3;
        if (1 < iStack_6c) {
          iVar1 = 0;
          do {
            iVar4 = FUN_714275f4(param_1,6,0,&iStack_5c);
            if ((iVar4 == 0) || (0x2003 < iStack_5c - 0x34000U)) goto LAB_7170f0d0;
            uVar3 = FUN_7142825c(param_1);
            puVar2[iVar1 + 7] = uVar3;
            iVar1 = iVar1 + 1;
          } while (iVar1 < iStack_6c + -1);
        }
        goto LAB_7170eebc;
      }
    }
LAB_7170f0d0:
    FUN_71427e40(puVar2);
  }
  puVar5 = (undefined4 *)0x0;
LAB_7170f0dc:
  if (_ext___stack_chk_guard != iStack_28) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail(puVar5);
  }
  return;
}


// =========================================================================
// Function: FUN_7170f290
// Entry: 0x7170f290 | Size: 156 bytes
// =========================================================================

int FUN_7170f290(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_2 + 0x1c) != 0) {
    FUN_7143d364();
  }
  *(undefined4 *)(param_2 + 0x1c) = 0;
  if (*(int *)(param_2 + 0x20) != 0) {
    FUN_7143d364();
  }
  *(undefined4 *)(param_2 + 0x20) = 0;
  if (*(int *)(param_2 + 0x24) != 0) {
    FUN_7143d364();
  }
  *(undefined4 *)(param_2 + 0x24) = 0;
  if (*(int *)(param_2 + 0x28) != 0) {
    FUN_7143d364();
  }
  *(undefined4 *)(param_2 + 0x28) = 0;
  for (puVar1 = *(undefined4 **)(param_1 + 0x14); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[0xd]) {
    (*(code *)puVar1[9])(param_2,*puVar1,puVar1[1]);
  }
  return param_1;
}


// =========================================================================
// Function: FUN_7170f3b4
// Entry: 0x7170f3b4 | Size: 1240 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x7170f534) */
/* WARNING: Removing unreachable block (ram,0x7170f700) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_7170f3b4(void)

{
  undefined4 *puVar1;
  int iVar2;
  byte bStack_51;
  uint auStack_50 [2];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  int iStack_28;
  
  iVar2 = _ext___stack_chk_guard;
  iStack_28 = _ext___stack_chk_guard;
  *DAT_7120188c = FUN_7142a440;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_714310d4;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  puStack_38 = &LAB_49abac16;
  uStack_3c = 0;
  uStack_44 = 0;
  uStack_34 = 0x26d5d038;
  uStack_40 = 0xe9;
  uStack_48 = 0x1d;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xa4c4fb >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0xff;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xa4c4fb;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccabf5) >> 2 ^ 0xacacc9;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0xff;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(undefined4 *)((auStack_50[0] ^ 0xccff3f) + DAT_7120187c) = 0x30;
  uStack_48 = 0x1a;
  uStack_44 = 0;
  uStack_3c = 0;
  uStack_34 = 0x26d5d038;
  puStack_38 = &LAB_49abac16;
  uStack_40 = 0xeb;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xa4c4f0 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 1;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xa4c4f0;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccabf0) >> 2 ^ 0xacacc6;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 1;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(undefined4 *)((auStack_50[0] ^ 0xccff38) + DAT_7120187c) = 0x30;
  *DAT_7120188c = FUN_7170ec74;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7170f290;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7170ed34;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  if (_ext___stack_chk_guard != iVar2) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail();
  }
  return;
}


// =========================================================================
// Function: FUN_7170fa60
// Entry: 0x7170fa60 | Size: 160 bytes
// =========================================================================

void FUN_7170fa60(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  (*DAT_700f9c6c)();
  iVar1 = DAT_70b41f60;
  if (*(int *)(DAT_70b41f60 + 0x30) != 0) {
    thunk_qNQrlu();
  }
  *(int *)(iVar1 + 8) = iVar1 + 0xc;
  iVar8 = 0x464fc;
  *(int *)(iVar1 + 0x28) = iVar1 + 0x18;
  *(int *)(iVar1 + 0x10) = iVar1;
  uVar2 = thunk__IBDl(0x46500);
  iVar5 = iVar1 + 0x24;
  *(undefined4 *)(iVar1 + 0x30) = uVar2;
  iVar3 = 24000;
  uVar4 = 0x5dc1;
  do {
    iVar7 = *(int *)(iVar1 + 0x30);
    iVar3 = iVar3 + -1;
    uVar4 = uVar4 - 1;
    piVar6 = (int *)(iVar7 + iVar8);
    *piVar6 = iVar5;
    iVar8 = iVar8 + -0xc;
    *(int **)(iVar5 + 4) = piVar6 + -2;
    piVar6[-1] = iVar1 + 0x18;
    *(int **)(iVar1 + 0x20) = piVar6 + -2;
    iVar5 = iVar7 + iVar3 * 0xc;
  } while (1 < uVar4);
  return;
}


// =========================================================================
// Function: FUN_7170fb90
// Entry: 0x7170fb90 | Size: 964 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x7170fd10) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_7170fb90(void)

{
  undefined4 *puVar1;
  int iVar2;
  byte bStack_51;
  uint auStack_50 [2];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  int iStack_28;
  
  iVar2 = _ext___stack_chk_guard;
  iStack_28 = _ext___stack_chk_guard;
  DAT_700f9c6c = *DAT_71201884 + DAT_71201880 | 1;
  DAT_71201884 = DAT_71201884 + 1;
  *DAT_7120188c = FUN_7170fa60;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  uStack_3c = 0;
  uStack_44 = 0;
  uStack_34 = 0x26d5d038;
  puStack_38 = &LAB_49abac16;
  uStack_40 = 0x2a;
  uStack_48 = 0xdb;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xab9541 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x40;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xab9541;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccabf2) >> 2 ^ 0xacad87;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x40;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(undefined1 **)((auStack_50[0] ^ 0xccfff9) + DAT_7120187c) = &DAT_70b3ef4c;
  *DAT_7120188c = &LAB_7135dc68;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7135d734;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7135fe38;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71360b14;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7135f398;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_71361214;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7135e2e0;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  *DAT_70b41f78 = 0x8000000;
  if (_ext___stack_chk_guard == iVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_717101c8
// Entry: 0x717101c8 | Size: 200 bytes
// =========================================================================

void FUN_717101c8(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  piVar3 = (int *)(DAT_711a3938 + 0x1389c);
  iVar1 = *piVar3;
  if (iVar1 == 0) {
    iVar1 = FUN_713c301c(0);
    if (iVar1 == 0) {
      iVar1 = *piVar3;
    }
    else {
      thunk_MwhHq(0x3a0);
      iVar1 = FUN_715ba834();
      *piVar3 = iVar1;
    }
  }
  if (*(int *)(iVar1 + 0x8c) != param_2) {
    iVar1 = *(int *)(DAT_711f6d58 + 0xac);
    uVar2 = FUN_71796d54(iVar1,param_2);
    if (0x3ec < uVar2) {
      return;
    }
    iVar1 = *(int *)(iVar1 + uVar2 * 4 + 0x1f8c);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = *(int *)(iVar1 + 0x10);
  }
  if (*(char *)(iVar1 + 0x184) == '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x71710288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_700f9c70)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_71710378
// Entry: 0x71710378 | Size: 52 bytes
// =========================================================================

void FUN_71710378(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_3;
  if (param_3 == 0xd) {
    iVar1 = 9;
  }
  if (param_3 == 0xc) {
    iVar1 = 0xb;
  }
                    /* WARNING: Could not recover jumptable at 0x717103a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_700f9c74)(param_1,param_2,iVar1);
  return;
}


// =========================================================================
// Function: FUN_717103e4
// Entry: 0x717103e4 | Size: 52 bytes
// =========================================================================

void FUN_717103e4(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_3;
  if (param_3 == 0xd) {
    iVar1 = 9;
  }
  if (param_3 == 0xc) {
    iVar1 = 0xb;
  }
                    /* WARNING: Could not recover jumptable at 0x71710414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_700f9c78)(param_1,param_2,iVar1);
  return;
}


// =========================================================================
// Function: FUN_71710450
// Entry: 0x71710450 | Size: 52 bytes
// =========================================================================

void FUN_71710450(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_3;
  if (param_3 == 0xd) {
    iVar1 = 9;
  }
  if (param_3 == 0xc) {
    iVar1 = 0xb;
  }
                    /* WARNING: Could not recover jumptable at 0x71710480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_700f9c7c)(param_1,param_2,iVar1);
  return;
}


// =========================================================================
// Function: FUN_717104bc
// Entry: 0x717104bc | Size: 52 bytes
// =========================================================================

void FUN_717104bc(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_3;
  if (param_3 == 0xd) {
    iVar1 = 9;
  }
  if (param_3 == 0xc) {
    iVar1 = 0xb;
  }
                    /* WARNING: Could not recover jumptable at 0x717104ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_700f9c80)(param_1,param_2,iVar1);
  return;
}


// =========================================================================
// Function: FUN_71710528
// Entry: 0x71710528 | Size: 52 bytes
// =========================================================================

void FUN_71710528(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_3;
  if (param_3 == 0xd) {
    iVar1 = 9;
  }
  if (param_3 == 0xc) {
    iVar1 = 0xb;
  }
                    /* WARNING: Could not recover jumptable at 0x71710558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_700f9c84)(param_1,param_2,iVar1);
  return;
}


// =========================================================================
// Function: FUN_71710594
// Entry: 0x71710594 | Size: 64 bytes
// =========================================================================

void FUN_71710594(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = param_3;
  if (param_3 == 0xd) {
    iVar1 = 9;
  }
  if (param_3 == 0xc) {
    iVar1 = 0xb;
  }
  (*DAT_700f9c88)(param_1,param_2,iVar1,param_4,param_5);
  return;
}


// =========================================================================
// Function: FUN_7171060c
// Entry: 0x7171060c | Size: 368 bytes
// =========================================================================

void FUN_7171060c(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    iVar1 = *(int *)(DAT_70c39074 + *(short *)(param_2 + 0x26) * 4);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 0x74);
    }
    if ((iVar1 != 0 && iVar2 != 0) &&
       ((((iVar1 = FUN_71ba2cf0(*(undefined4 *)(iVar2 + 0x3f8),0), iVar1 == 0 ||
          (iVar1 = FUN_71ba2cf0(*(undefined4 *)(iVar2 + 0x3fc),0), iVar1 == 0)) ||
         (iVar1 = FUN_71ba2cf0(*(undefined4 *)(iVar2 + 0x400),0), iVar1 == 0)) ||
        (((iVar1 = FUN_71ba2cf0(*(undefined4 *)(iVar2 + 0x404),0), iVar1 == 0 ||
          (iVar1 = FUN_71ba2cf0(*(undefined4 *)(iVar2 + 0x408),0), iVar1 == 0)) ||
         (iVar2 = FUN_71ba2cf0(*(undefined4 *)(iVar2 + 0x40c),0), iVar2 == 0)))))) {
      if (*(int *)(param_4 + 0x18) == 0xb) {
        uVar3 = 0xc;
      }
      else {
        if (*(int *)(param_4 + 0x18) != 9) goto LAB_71710644;
        uVar3 = 0xd;
      }
      *(undefined4 *)(param_4 + 0x18) = uVar3;
    }
  }
LAB_71710644:
  iVar2 = param_3;
  if (param_3 == 0xd) {
    iVar2 = 9;
  }
  if (param_3 == 0xc) {
    iVar2 = 0xb;
  }
                    /* WARNING: Could not recover jumptable at 0x71710664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_700f9c8c)(param_1,param_2,iVar2);
  return;
}


// =========================================================================
// Function: FUN_7171087c
// Entry: 0x7171087c | Size: 60 bytes
// =========================================================================

void FUN_7171087c(int param_1,int param_2)

{
  (*DAT_700f9c90)();
  if ((param_2 != 0) && (*(short *)(param_2 + 0x26) == 0x7ec)) {
    *(undefined1 *)(param_1 + 8) = 1;
  }
  return;
}


// =========================================================================
// Function: FUN_717108f0
// Entry: 0x717108f0 | Size: 168 bytes
// =========================================================================

undefined4 FUN_717108f0(undefined4 param_1,int param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_24 [12];
  
  iVar1 = (*DAT_700f9c94)();
  uVar2 = 0;
  if (((iVar1 != 0) && (uVar2 = 1, *(short *)(param_2 + 0x26) == 0x7ec)) && (*param_4 != 10)) {
    iVar1 = FUN_7149c3f0(param_2,10,0);
    uVar2 = 0;
    if (iVar1 != 0) {
      *param_4 = 10;
      FUN_7149cf04(auStack_24,param_2,10);
      FUN_7136d040(param_3,auStack_24);
      uVar2 = 1;
    }
  }
  return uVar2;
}


// =========================================================================
// Function: FUN_71710a24
// Entry: 0x71710a24 | Size: 1236 bytes
// =========================================================================

void FUN_71710a24(void)

{
  undefined4 *puVar1;
  
  *DAT_7120188c = &DAT_717113b0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_717113e8;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_71711430;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9c70 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_717101c8;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_71711468;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7149da90;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9c94 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_717108f0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7149cf04;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7149ec18;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7149eb98;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7149eafc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7149c834;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &DAT_717114bc;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9c90 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7171087c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &DAT_714a0e54;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9c74 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71710378;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9c78 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_717103e4;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9c7c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71710450;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9c80 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_717104bc;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9c84 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71710528;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9c88 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71710594;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9c8c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7171060c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_717114f4;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// =========================================================================
// Function: FUN_7171152c
// Entry: 0x7171152c | Size: 260 bytes
// =========================================================================

void FUN_7171152c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_27 [8];
  undefined2 uStack_1f;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar2 == 0) goto LAB_71711614;
  if (DAT_700f9c98 == '\x01') {
    uStack_1f = 0x10;
LAB_717115b0:
    *(undefined1 **)(param_1 + 0x2c) = auStack_27;
    iVar1 = *(int *)(DAT_70c38f30 + 8);
    if (iVar1 == 3) {
      DAT_70b466f8 = 0x3f800000;
    }
    else if (iVar1 == 2) {
      DAT_70b466f8 = 0x3f99999a;
    }
    else if (iVar1 == 1) {
      DAT_70b466f8 = 0x3fc00000;
    }
    else {
      DAT_70b466f8 = 0x3fcccccd;
    }
  }
  else {
    if (DAT_700f9c98 == -1) {
      if ((*(byte *)(iVar2 + 0xb) < 0x15) &&
         (uStack_1f = 0x20, (1 << (uint)*(byte *)(iVar2 + 0xb) & 0x100019U) != 0))
      goto LAB_717115b0;
    }
    else if (DAT_700f9c98 == '\x02') {
      uStack_1f = 0x20;
      goto LAB_717115b0;
    }
    *(undefined1 **)(param_1 + 0x2c) = auStack_27;
    DAT_70b466f8 = 0;
    uStack_1f = 0;
  }
LAB_71711614:
  (*DAT_700f9c9c)(param_1);
  *(int *)(param_1 + 0x2c) = iVar2;
  return;
}


// =========================================================================
// Function: FUN_71711854
// Entry: 0x71711854 | Size: 232 bytes
// =========================================================================

undefined4 FUN_71711854(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  if (param_1 == 1) {
    if ((param_2 != 0) && (DAT_710eaf34 != '\0')) {
      puVar2 = *(undefined4 **)(param_2 + 0x2c);
      if (puVar2 == (undefined4 *)0x0) goto LAB_7171192c;
      piVar3 = (int *)puVar2[0xc];
      FUN_714af334(puVar2);
      FUN_714a9578(*puVar2,puVar2,2);
      param_2 = *piVar3;
    }
    if ((param_2 != 0) && (DAT_710eaf34 == '\0')) {
      (**(code **)(**(int **)(param_2 + *DAT_70ffce1c) + 8))
                (*(int **)(param_2 + *DAT_70ffce1c),DAT_700bbdc0);
    }
  }
  else if (param_1 == 0x1f) {
    DAT_700f9c98 = (char)param_2;
    return 1;
  }
LAB_7171192c:
                    /* WARNING: Could not recover jumptable at 0x71711938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*DAT_700f9ca4)(param_1,param_2);
  return uVar1;
}


// =========================================================================
// Function: FUN_71711a2c
// Entry: 0x71711a2c | Size: 824 bytes
// =========================================================================

void FUN_71711a2c(void)

{
  undefined4 *puVar1;
  
  *DAT_7120188c = FUN_717120bc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71712240;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71712568;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71712648;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &DAT_7171284c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_71712868;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_717128a8;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_717128e0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_71712918;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7171295c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &DAT_717129a0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &DAT_717129bc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_717129d8;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71712a5c;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9c9c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7171152c;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9ca4 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71711854;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9ca0 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_717116c8;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_71712af4;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  *DAT_70ffc9ac = 1;
  return;
}


// =========================================================================
// Function: FUN_717120bc
// Entry: 0x717120bc | Size: 196 bytes
// =========================================================================

undefined4 FUN_717120bc(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  
  if (param_1 < 2) {
    return 0;
  }
  uVar1 = imp_strlen(param_1);
  if (0xfffffff7 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_24);
  }
  if (uVar1 < 0xb) {
    uVar3 = (uint)&uStack_24 | 1;
    uStack_24 = CONCAT31(uStack_24._1_3_,(char)(uVar1 << 1));
    if (uVar1 == 0) goto LAB_71712140;
  }
  else {
    uVar3 = thunk_MwhHq((uVar1 | 7) + 1);
    uStack_24 = (uVar1 | 7) + 2;
    uStack_20 = uVar1;
    uStack_1c = uVar3;
  }
  imp___aeabi_memcpy(uVar3,param_1,uVar1);
LAB_71712140:
  *(undefined1 *)(uVar3 + uVar1) = 0;
  uVar2 = FUN_714b34c8(&uStack_24);
  if ((uStack_24 & 1) != 0) {
    thunk_qNQrlu(uStack_1c);
  }
  return uVar2;
}


// =========================================================================
// Function: FUN_71712240
// Entry: 0x71712240 | Size: 372 bytes
// =========================================================================

void FUN_71712240(int param_1,int param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  puVar4 = (undefined4 *)0x0;
  iVar7 = 0;
  piVar3 = (int *)*DAT_70b420bc;
  if ((piVar3 != (int *)0x0) &&
     (iVar7 = *piVar3 + param_1 * 0x38, *(char *)(piVar3[1] + param_1) < '\0')) {
    iVar7 = 0;
  }
  iVar5 = iVar7;
  if (iVar7 != 0) {
    iVar5 = iVar7 + 0x20;
  }
  if (param_2 != 0) {
    iVar5 = param_2;
  }
  if (param_2 == 0 && iVar7 == 0) goto LAB_71712334;
  uVar1 = imp_strlen(iVar5);
  if (0xfffffff7 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_2c);
  }
  if (uVar1 < 0xb) {
    uVar6 = (uint)&uStack_2c | 1;
    uStack_2c = CONCAT31(uStack_2c._1_3_,(char)(uVar1 << 1));
    if (uVar1 != 0) goto LAB_717122fc;
  }
  else {
    uVar6 = thunk_MwhHq((uVar1 | 7) + 1);
    uStack_2c = (uVar1 | 7) + 2;
    uStack_28 = uVar1;
    uStack_24 = uVar6;
LAB_717122fc:
    imp___aeabi_memmove(uVar6,iVar5,uVar1);
  }
  *(undefined1 *)(uVar6 + uVar1) = 0;
  puVar4 = (undefined4 *)FUN_714b34c8(&uStack_2c);
  if ((uStack_2c & 1) != 0) {
    thunk_qNQrlu(uStack_24);
  }
LAB_71712334:
  if (DAT_711f6ac4 != puVar4) {
    if ((DAT_711f6ac4 != (undefined4 *)0x0) &&
       (((char *)*DAT_711f6ac4 == (char *)0x0 || (*(char *)*DAT_711f6ac4 != 't')))) {
      FUN_714b391c();
    }
    FUN_714b3798(puVar4);
    DAT_711f6ac4 = puVar4;
  }
  puVar2 = &DAT_70064a63;
  if (iVar7 != 0) {
    puVar2 = (undefined1 *)(iVar7 + 0xc);
  }
  iVar7 = imp_strncpy(&DAT_711f6ac8,puVar2,0x3f);
  *(undefined1 *)(iVar7 + 0x3f) = 0;
  return;
}


// =========================================================================
// Function: FUN_71712568
// Entry: 0x71712568 | Size: 72 bytes
// =========================================================================

void FUN_71712568(void)

{
  DAT_711f6b08 = DAT_711f6ac4;
  DAT_711f6b10 = DAT_711f6ac8;
  DAT_711f6b14 = DAT_711f6acc;
  DAT_711f6b18 = DAT_711f6ad0;
  DAT_711f6b1c = DAT_711f6ad4;
  DAT_711f6b20 = DAT_711f6ad8;
  DAT_711f6b24 = DAT_711f6adc;
  DAT_711f6b28 = DAT_711f6ae0;
  DAT_711f6b2c = DAT_711f6ae4;
  DAT_711f6b30 = DAT_711f6ae8;
  DAT_711f6b34 = DAT_711f6aec;
  DAT_711f6b38 = DAT_711f6af0;
  DAT_711f6b3c = DAT_711f6af4;
  DAT_711f6b40 = DAT_711f6af8;
  DAT_711f6b44 = DAT_711f6afc;
  DAT_711f6b48 = DAT_711f6b00;
  DAT_711f6b4c = DAT_711f6b04;
  return;
}


// =========================================================================
// Function: FUN_71712648
// Entry: 0x71712648 | Size: 180 bytes
// =========================================================================

void FUN_71712648(void)

{
  if (DAT_711f6b08 != DAT_711f6ac4) {
    if ((DAT_711f6ac4 != (undefined4 *)0x0) &&
       (((char *)*DAT_711f6ac4 == (char *)0x0 || (*(char *)*DAT_711f6ac4 != 't')))) {
      FUN_714b391c(DAT_711f6ac4);
    }
    if (DAT_711f6b08 == (undefined4 *)0x0) {
      DAT_711f6ac4 = (undefined4 *)0x0;
    }
    else {
      FUN_714b3798();
      DAT_711f6ac4 = DAT_711f6b08;
    }
  }
  DAT_711f6b08 = (undefined4 *)0x0;
  DAT_711f6ac8 = DAT_711f6b10;
  DAT_711f6acc = DAT_711f6b14;
  DAT_711f6ad0 = DAT_711f6b18;
  DAT_711f6ad4 = DAT_711f6b1c;
  DAT_711f6ad8 = DAT_711f6b20;
  DAT_711f6adc = DAT_711f6b24;
  DAT_711f6ae0 = DAT_711f6b28;
  DAT_711f6ae4 = DAT_711f6b2c;
  DAT_711f6ae8 = DAT_711f6b30;
  DAT_711f6aec = DAT_711f6b34;
  DAT_711f6af0 = DAT_711f6b38;
  DAT_711f6af4 = DAT_711f6b3c;
  DAT_711f6af8 = DAT_711f6b40;
  DAT_711f6afc = DAT_711f6b44;
  DAT_711f6b00 = DAT_711f6b48;
  DAT_711f6b04 = DAT_711f6b4c;
  return;
}


// =========================================================================
// Function: FUN_717129d8
// Entry: 0x717129d8 | Size: 80 bytes
// =========================================================================

void FUN_717129d8(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_7138b944(param_1[1],param_1[2],param_1[4]);
  (**(code **)(*param_1 + 0x14))(param_1,0,param_3,uVar1,param_1[1],param_1[2],0);
  return;
}


// =========================================================================
// Function: FUN_71712a5c
// Entry: 0x71712a5c | Size: 100 bytes
// =========================================================================

void FUN_71712a5c(int *param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_7138b944((uint)param_1[1] >> (param_2 & 0xff),(uint)param_1[2] >> (param_2 & 0xff),
                       param_1[4]);
  (**(code **)(*param_1 + 0x14))
            (param_1,param_2,param_3,uVar1,(uint)param_1[1] >> (param_2 & 0xff),
             (uint)param_1[2] >> (param_2 & 0xff),0);
  return;
}


// =========================================================================
// Function: FUN_71712bec
// Entry: 0x71712bec | Size: 136 bytes
// =========================================================================

void FUN_71712bec(void)

{
  undefined8 uVar1;
  
  (*DAT_700f9ca8)();
  if (*DAT_70b42044 != '\0') {
    return;
  }
  if (*DAT_70b42048 != '\0') {
    return;
  }
  FUN_71ba13e0(*DAT_70b42050,0x42480000);
  uVar1 = FUN_71ba1638();
  uVar1 = FUN_71ba0670(DAT_70b42058,DAT_70b4205c,(int)uVar1,(int)((ulonglong)uVar1 >> 0x20));
  DAT_70b42058 = (int)uVar1;
  DAT_70b4205c = (int)((ulonglong)uVar1 >> 0x20);
  return;
}


// =========================================================================
// Function: FUN_71712d80
// Entry: 0x71712d80 | Size: 760 bytes
// =========================================================================

void FUN_71712d80(void)

{
  undefined4 *puVar1;
  
  DAT_71201884 = (int *)((int)DAT_71201884 + 4);
  *DAT_7120188c = FUN_71712bec;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_71201884 = (int *)((int)DAT_71201884 + 4);
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71712bec;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_71201884 = (int *)((int)DAT_71201884 + 4);
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71712bec;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_71201884 = (int *)((int)DAT_71201884 + 4);
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71712bec;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_71201884 = (int *)((int)DAT_71201884 + 4);
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71712bec;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_71201884 = (int *)((int)DAT_71201884 + 4);
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71712bec;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_71201884 = (int *)((int)DAT_71201884 + 4);
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71712bec;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_71201884 = (int *)((int)DAT_71201884 + 4);
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71712bec;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_71201884 = (int *)((int)DAT_71201884 + 4);
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71712bec;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_71201884 = (int *)((int)DAT_71201884 + 4);
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71712bec;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_71201884 = (int *)((int)DAT_71201884 + 4);
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71712bec;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9ca8 = *DAT_71201884 + DAT_71201880;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71712bec;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71367564;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_713679dc;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// =========================================================================
// Function: FUN_71713190
// Entry: 0x71713190 | Size: 68 bytes
// =========================================================================

void FUN_71713190(int param_1)

{
  if (*(short *)(param_1 + 0x26) != 0x7ec) {
    (*DAT_700f9cac)();
  }
  return;
}


// =========================================================================
// Function: FUN_7171320c
// Entry: 0x7171320c | Size: 384 bytes
// =========================================================================

void FUN_7171320c(void)

{
  undefined4 *puVar1;
  
  DAT_71201884 = (int *)((int)DAT_71201884 + 4);
  *DAT_7120188c = FUN_71713190;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9cac = *DAT_71201884 + DAT_71201880;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71713190;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &DAT_71713524;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7171355c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &DAT_71713594;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &DAT_717135cc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &DAT_71713604;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7171363c;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// =========================================================================
// Function: FUN_71713674
// Entry: 0x71713674 | Size: 60 bytes
// =========================================================================

void FUN_71713674(void)

{
  *DAT_7120188c = &LAB_71713728;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// =========================================================================
// Function: FUN_7171376c
// Entry: 0x7171376c | Size: 6564 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x717141cc) */
/* WARNING: Removing unreachable block (ram,0x71713e30) */
/* WARNING: Removing unreachable block (ram,0x71713a5c) */
/* WARNING: Removing unreachable block (ram,0x7171388c) */
/* WARNING: Removing unreachable block (ram,0x71713c2c) */
/* WARNING: Removing unreachable block (ram,0x71714000) */
/* WARNING: Removing unreachable block (ram,0x71714390) */
/* WARNING: Removing unreachable block (ram,0x717145c0) */
/* WARNING: Removing unreachable block (ram,0x717147ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_7171376c(void)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
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
  uint uVar35;
  uint uVar36;
  uint *puVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint *puVar44;
  int iVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  bool bVar51;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  byte bStack_51;
  uint auStack_50 [2];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  int iStack_28;
  
  iVar13 = _ext___stack_chk_guard;
  iStack_28 = _ext___stack_chk_guard;
  uStack_40 = 0x1e;
  uStack_48 = 199;
  uStack_3c = 0;
  uStack_34 = 0x26d5d038;
  uStack_44 = 0;
  puStack_38 = &LAB_49abac16;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xab89a9 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x34;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xab89a9;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccabda) >> 2 ^ 0xacad73;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x34;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(undefined4 **)((auStack_50[0] ^ 0xccffe5) + DAT_7120187c) = &DAT_70f4c428;
  uStack_3c = 0;
  uStack_48 = 0xc4;
  uStack_44 = 0;
  uStack_34 = 0x26d5d038;
  uStack_40 = 0x20;
  puStack_38 = &LAB_49abac16;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xab91da >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x36;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xab91da;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccabdb) >> 2 ^ 0xacad70;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x36;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(undefined **)((auStack_50[0] ^ 0xccffe6) + DAT_7120187c) = &DAT_70f4c828;
  uStack_3c = 0;
  uStack_48 = 0xc5;
  uStack_44 = 0;
  uStack_34 = 0x26d5d038;
  uStack_40 = 0x22;
  puStack_38 = &LAB_49abac16;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xab8b27 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x38;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xab8b27;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccabe4) >> 2 ^ 0xacad71;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x38;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(undefined **)((auStack_50[0] ^ 0xccffe7) + DAT_7120187c) = &DAT_70f4c830;
  DAT_70135cd4 = (uint *)0x0;
  DAT_70135cd0 = (uint *)0xffffffff;
  uStack_48 = 0xc0;
  uStack_44 = 0;
  uStack_3c = 0;
  uStack_34 = 0x26d5d038;
  puStack_38 = &LAB_49abac16;
  uStack_40 = 0x27;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xf63682 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x3d;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xf63682;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccabe6) >> 2 ^ 0xacad6c;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x3d;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if ((auStack_50[0] ^ 0xccffe2) + DAT_7120187c != -1) {
    uStack_34 = 0x26d5d038;
    puStack_38 = &LAB_49abac16;
    uStack_48 = 0xc0;
    uStack_44 = 0;
    uStack_3c = 0;
    uStack_40 = 0x28;
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0xf63682 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x3e;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0xf63682;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccabe7) >> 2 ^ 0xacad6c;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x3e;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd0 = (uint *)((auStack_50[0] ^ 0xccffe2) + DAT_7120187c);
  }
  uStack_34 = 0x26d5d038;
  puStack_38 = &LAB_49abac16;
  uStack_48 = 0xc0;
  uStack_44 = 0;
  uStack_3c = 0;
  uStack_40 = 0x29;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xf63682 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x3f;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xf63682;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccabe8) >> 2 ^ 0xacad6c;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x3f;
    uVar42 = auStack_50[0];
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  uStack_34 = 0x26d5d038;
  uStack_48 = 0xc0;
  uStack_44 = 0;
  puStack_38 = &LAB_49abac16;
  uStack_3c = 0;
  uStack_40 = 0x26;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xf6389e >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x3c;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xf6389e;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccabe5) >> 2 ^ 0xacad6c;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x3c;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(uint *)((uVar42 ^ 0xccffe2) + DAT_7120187c) =
       ((auStack_50[0] ^ 0xff33001d) - DAT_7120187c) + 0x70f4cbf1;
  uStack_40 = 0x2a;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xf63682 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x40;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xf63682;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccabe9) >> 2 ^ 0xacad6c;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x40;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if (DAT_70135cd4 < (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccffe2))) {
    uStack_40 = 0x2b;
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0xf63682 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x41;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0xf63682;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccabea) >> 2 ^ 0xacad6c;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x41;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd4 = (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccffe2));
  }
  uStack_34 = 0x26d5d038;
  puStack_38 = &LAB_49abac16;
  uStack_3c = 0;
  uStack_44 = 0;
  uStack_48 = 0xc0;
  if ((DAT_70135cd0 != (uint *)0xffffffff) && (DAT_70135cd0 < DAT_70135cd4)) {
    iVar23 = 0;
    puVar44 = DAT_70135cd4;
LAB_717149a4:
    puVar37 = (uint *)(&DAT_70125c7c)[iVar23 * 4];
    uVar42 = (&DAT_70125c80)[iVar23 * 4];
    if ((DAT_70135cd0 <= (uint *)(uVar42 + (int)puVar37)) && (puVar37 <= puVar44)) {
      if (uVar42 < 0x20) {
        iVar45 = 0x27d4eb7f;
        uVar49 = 0x56d677d6;
      }
      else {
        uVar21 = 0x60ea283e;
        uStack_6c = 0xee40c5e7;
        iVar45 = 0;
        uStack_70 = 0xc2b2ae8d;
        uStack_68 = 0x6854fb60;
        uStack_64 = 0x50;
        uStack_60 = 0x40801011;
        uStack_5c = 0x61c8869e;
        uStack_58 = 0xba94458a;
        puVar44 = puVar37;
        uVar49 = uVar42;
        do {
          lVar5 = (ulonglong)puVar44[6] * 0x27d4eb4f;
          uVar38 = (uint)lVar5;
          uVar39 = uVar38 + uStack_58;
          uVar43 = puVar44[7] * 0x27d4eb4f +
                   puVar44[6] * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) + uStack_5c +
                   (uint)CARRY4(uVar38,uStack_58);
          uVar38 = uVar43 >> 1;
          uVar14 = uVar39 * -0x80000000 | uVar38;
          uStack_58 = (uint)((ulonglong)uVar14 * 0x85ebca87);
          uVar39 = uVar39 >> 1;
          uVar15 = uVar43 * -0x80000000 | uVar39;
          uStack_5c = uVar15 * -0x7a143579 +
                      uVar14 * -0x61c8864f + (int)((ulonglong)uVar14 * 0x85ebca87 >> 0x20);
          lVar5 = (ulonglong)puVar44[4] * 0x27d4eb4f;
          uVar43 = (uint)lVar5;
          uVar40 = uVar43 + uStack_60;
          uVar35 = puVar44[5] * 0x27d4eb4f +
                   puVar44[4] * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) + uStack_64 +
                   (uint)CARRY4(uVar43,uStack_60);
          uVar43 = uVar35 >> 1;
          uVar16 = uVar40 * -0x80000000 | uVar43;
          uStack_60 = (uint)((ulonglong)uVar16 * 0x85ebca87);
          uVar40 = uVar40 >> 1;
          uVar17 = uVar35 * -0x80000000 | uVar40;
          puVar1 = puVar44 + 2;
          uStack_64 = uVar17 * -0x7a143579 +
                      uVar16 * -0x61c8864f + (int)((ulonglong)uVar16 * 0x85ebca87 >> 0x20);
          puVar2 = puVar44 + 3;
          uVar24 = *puVar44;
          puVar3 = puVar44 + 1;
          puVar44 = puVar44 + 8;
          lVar5 = (ulonglong)*puVar1 * 0x27d4eb4f;
          uVar35 = (uint)lVar5;
          uVar18 = uVar35 + uStack_68;
          uVar22 = *puVar2 * 0x27d4eb4f + *puVar1 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) +
                   uStack_70 + (uint)CARRY4(uVar35,uStack_68);
          uVar35 = uVar22 >> 1;
          uVar36 = uVar18 * -0x80000000 | uVar35;
          uStack_68 = (uint)((ulonglong)uVar36 * 0x85ebca87);
          uVar18 = uVar18 >> 1;
          uVar41 = uVar22 * -0x80000000 | uVar18;
          uStack_70 = uVar41 * -0x7a143579 +
                      uVar36 * -0x61c8864f + (int)((ulonglong)uVar36 * 0x85ebca87 >> 0x20);
          lVar5 = (ulonglong)uVar24 * 0x27d4eb4f;
          uVar22 = (uint)lVar5;
          uVar19 = uVar22 + uStack_6c;
          uVar21 = *puVar3 * 0x27d4eb4f + uVar24 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) +
                   uVar21 + (uint)CARRY4(uVar22,uStack_6c);
          bVar51 = uVar49 < 0x20;
          uVar49 = uVar49 - 0x20;
          uVar22 = uVar21 >> 1;
          uVar48 = uVar19 * -0x80000000 | uVar22;
          iVar45 = iVar45 - (uint)bVar51;
          uStack_6c = (uint)((ulonglong)uVar48 * 0x85ebca87);
          uVar19 = uVar19 >> 1;
          uVar24 = uVar21 * -0x80000000 | uVar19;
          uVar21 = uVar24 * -0x7a143579 +
                   uVar48 * -0x61c8864f + (int)((ulonglong)uVar48 * 0x85ebca87 >> 0x20);
        } while ((uint)(uVar49 < 0x20) <= (uint)-iVar45);
        uVar33 = uStack_68 << 7 | uStack_70 >> 0x19;
        uVar25 = uStack_6c << 1 | uVar21 >> 0x1f;
        uVar26 = uVar33 + uVar25;
        uVar34 = uStack_60 << 0xc | uStack_64 >> 0x14;
        uVar46 = uVar26 + uVar34;
        uVar50 = (uint)((ulonglong)uVar48 * 0x80000000) |
                 uVar24 * 0xf796ca9 +
                 uVar48 * -0x210ca4ff + (int)((ulonglong)uVar48 * 0xf796ca9 >> 0x20) >> 1;
        lVar5 = (ulonglong)uVar50 * 0x85ebca87;
        uVar24 = uStack_58 << 0x12 | uStack_5c >> 0xe;
        uVar20 = uVar46 + uVar24 ^ (uint)lVar5;
        lVar6 = (ulonglong)uVar20 * 0x85ebca87;
        uVar47 = (uint)lVar6;
        uVar27 = (uint)((ulonglong)uVar36 * 0x80000000) |
                 uVar41 * 0xf796ca9 +
                 uVar36 * -0x210ca4ff + (int)((ulonglong)uVar36 * 0xf796ca9 >> 0x20) >> 1;
        lVar7 = (ulonglong)uVar27 * 0x85ebca87;
        uVar41 = uVar47 + 0xc2b2ae63 ^ (uint)lVar7;
        lVar8 = (ulonglong)uVar41 * 0x85ebca87;
        uVar28 = (uint)lVar8;
        uVar29 = (uint)((ulonglong)uVar16 * 0x80000000) |
                 uVar17 * 0xf796ca9 +
                 uVar16 * -0x210ca4ff + (int)((ulonglong)uVar16 * 0xf796ca9 >> 0x20) >> 1;
        lVar9 = (ulonglong)uVar29 * 0x85ebca87;
        uVar17 = uVar28 + 0xc2b2ae63 ^ (uint)lVar9;
        lVar10 = (ulonglong)uVar17 * 0x85ebca87;
        uVar30 = (uint)lVar10;
        uVar31 = (uint)((ulonglong)uVar14 * 0x80000000) |
                 uVar15 * 0xf796ca9 +
                 uVar14 * -0x210ca4ff + (int)((ulonglong)uVar14 * 0xf796ca9 >> 0x20) >> 1;
        lVar11 = (ulonglong)uVar31 * 0x85ebca87;
        uVar15 = uVar30 + 0xc2b2ae63 ^ (uint)lVar11;
        lVar12 = (ulonglong)uVar15 * 0x85ebca87;
        uVar32 = (uint)lVar12;
        uVar49 = uVar32 + 0xc2b2ae63;
        iVar45 = (((((uStack_70 * 0x80 | uStack_68 >> 0x19) + (uVar21 * 2 | uStack_6c >> 0x1f) +
                     (uint)CARRY4(uVar33,uVar25) + (uStack_64 * 0x1000 | uStack_60 >> 0x14) +
                     (uint)CARRY4(uVar26,uVar34) + (uStack_5c * 0x40000 | uStack_58 >> 0xe) +
                     (uint)CARRY4(uVar46,uVar24) ^
                    (uVar19 * -0x80000000 +
                    uVar22 * -0x784349ac + (int)((ulonglong)uVar48 * 0x80000000 >> 0x20)) *
                    -0x7a143579 + uVar50 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20)) *
                    -0x7a143579 + uVar20 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20) +
                    -0x7a143589 + (uint)(0x3d4d519c < uVar47) ^
                   (uVar18 * -0x80000000 +
                   uVar35 * -0x784349ac + (int)((ulonglong)uVar36 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar27 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20)) *
                   -0x7a143579 + uVar41 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20) +
                   -0x7a143589 + (uint)(0x3d4d519c < uVar28) ^
                  (uVar40 * -0x80000000 +
                  uVar43 * -0x784349ac + (int)((ulonglong)uVar16 * 0x80000000 >> 0x20)) *
                  -0x7a143579 + uVar29 * -0x61c8864f + (int)((ulonglong)lVar9 >> 0x20)) *
                  -0x7a143579 + uVar17 * -0x61c8864f + (int)((ulonglong)lVar10 >> 0x20) +
                  -0x7a143589 + (uint)(0x3d4d519c < uVar30) ^
                 (uVar39 * -0x80000000 +
                 uVar38 * -0x784349ac + (int)((ulonglong)uVar14 * 0x80000000 >> 0x20)) * -0x7a143579
                 + uVar31 * -0x61c8864f + (int)((ulonglong)lVar11 >> 0x20)) * -0x7a143579 +
                 uVar15 * -0x61c8864f + (int)((ulonglong)lVar12 >> 0x20) + -0x7a143589 +
                 (uint)(0x3d4d519c < uVar32);
      }
      uStack_58 = uVar49 + uVar42;
      uVar21 = uVar42 & 0x1f;
      uVar49 = iVar45 + (uint)CARRY4(uVar49,uVar42);
      puVar37 = (uint *)((int)puVar37 + (uVar42 & 0xffffffe0));
      uVar42 = 0;
      do {
        if (uVar42 == 0 && (7 < uVar21) <= uVar42) {
          if (uVar42 == 0 && (3 < uVar21) <= uVar42) {
            if (uVar21 == 0 && uVar42 == 0) goto LAB_71714920;
            lVar5 = (ulonglong)(uint)(byte)*puVar37 * 0x165667c5;
            uVar38 = (uint)lVar5 ^ uStack_58;
            uVar49 = (uint)(byte)*puVar37 * 0x27d4eb2f + (int)((ulonglong)lVar5 >> 0x20) ^ uVar49;
            uVar39 = uVar38 << 0xb | uVar49 >> 0x15;
            lVar5 = (ulonglong)uVar39 * 0x85ebca87;
            uStack_58 = (uint)lVar5;
            iVar45 = 1;
            uVar49 = (uVar49 << 0xb | uVar38 >> 0x15) * -0x7a143579 +
                     uVar39 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20);
            uVar40 = 0xffffffff;
          }
          else {
            lVar5 = (ulonglong)*puVar37 * 0x85ebca87;
            uVar38 = (uint)lVar5 ^ uStack_58;
            uVar49 = *puVar37 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) ^ uVar49;
            uVar39 = uVar38 << 0x17 | uVar49 >> 9;
            lVar5 = (ulonglong)uVar39 * 0x27d4eb4f;
            uVar43 = (uint)lVar5;
            uStack_58 = uVar43 + 0x9e3779f9;
            iVar45 = 4;
            uVar49 = (uVar49 << 0x17 | uVar38 >> 9) * 0x27d4eb4f +
                     uVar39 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) + 0x165667b1 +
                     (uint)(0x61c88606 < uVar43);
            uVar40 = 0xfffffffc;
          }
        }
        else {
          uVar39 = *puVar37;
          uVar38 = (uint)((ulonglong)uVar39 * 0x80000000) |
                   puVar37[1] * 0x27d4eb4f +
                   uVar39 * -0x3d4d51c3 + (int)((ulonglong)uVar39 * 0x27d4eb4f >> 0x20) >> 1;
          lVar5 = (ulonglong)uVar38 * 0x85ebca87;
          uVar49 = (puVar37[1] * -0x80000000 +
                   uVar39 * -0x6c158a59 + (int)((ulonglong)uVar39 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar38 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) ^ uVar49;
          uVar38 = (uint)lVar5 ^ uStack_58;
          uVar40 = 0xfffffff8;
          uVar39 = uVar38 << 0x1b | uVar49 >> 5;
          lVar5 = (ulonglong)uVar39 * 0x85ebca87;
          uVar43 = (uint)lVar5;
          uStack_58 = uVar43 + 0xc2b2ae63;
          iVar45 = 8;
          uVar49 = (uVar49 << 0x1b | uVar38 >> 5) * -0x7a143579 +
                   uVar39 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) + -0x7a143589 +
                   (uint)(0x3d4d519c < uVar43);
        }
        bVar51 = CARRY4(uVar40,uVar21);
        uVar21 = uVar40 + uVar21;
        puVar37 = (uint *)((int)puVar37 + iVar45);
        uVar42 = (uVar42 - 1) + (uint)bVar51;
      } while( true );
    }
    goto LAB_71714998;
  }
LAB_71715008:
  *DAT_7120188c = FUN_714087bc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar4 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar4 = &LAB_714085d8;
  DAT_71201890 = DAT_71201890 + 1;
  puVar4 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar4 = &DAT_71408370;
  DAT_71201890 = DAT_71201890 + 1;
  puVar4 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar4 = &LAB_714086e4;
  DAT_71201890 = DAT_71201890 + 1;
  puVar4 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar4 = &LAB_7140876c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar4 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar4 = &LAB_717154a4;
  DAT_71201890 = DAT_71201890 + 1;
  puVar4 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar4 = FUN_71401f14;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  if (_ext___stack_chk_guard == iVar13) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
LAB_71714920:
  uStack_58 = uStack_58 ^ uVar49 >> 1;
  lVar5 = (ulonglong)uStack_58 * 0x27d4eb4f;
  uVar21 = (uint)lVar5;
  uVar42 = uVar49 * 0x27d4eb4f + uStack_58 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20);
  uVar21 = (uVar21 >> 0x1d | uVar42 * 8) ^ uVar21;
  lVar5 = (ulonglong)uVar21 * 0x9e3779f9;
  uVar42 = (uVar42 ^ uVar42 >> 0x1d) * -0x61c88607 +
           uVar21 * 0x165667b1 + (int)((ulonglong)lVar5 >> 0x20);
  (&DAT_70125c88)[iVar23 * 4] = uVar42;
  (&DAT_70125c84)[iVar23 * 4] = uVar42 ^ (uint)lVar5;
  puVar44 = DAT_70135cd4;
LAB_71714998:
  iVar23 = iVar23 + 1;
  if (iVar23 == 0x1000) goto LAB_71714fe8;
  goto LAB_717149a4;
LAB_71714fe8:
  DAT_70135cd4 = (uint *)0x0;
  DAT_70135cd0 = (uint *)0xffffffff;
  goto LAB_71715008;
}


// =========================================================================
// Function: FUN_717154c8
// Entry: 0x717154c8 | Size: 96 bytes
// =========================================================================

void FUN_717154c8(void)

{
  undefined4 *puVar1;
  
  *DAT_7120188c = FUN_713db648;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_713dbaf4;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// =========================================================================
// Function: FUN_717155c0
// Entry: 0x717155c0 | Size: 68 bytes
// =========================================================================

void FUN_717155c0(void)

{
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
  if (DAT_71201740 != 0) {
                    /* WARNING: Could not recover jumptable at 0x717155fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_700f9cb0)();
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_71715694
// Entry: 0x71715694 | Size: 148 bytes
// =========================================================================

void FUN_71715694(void)

{
  undefined4 *puVar1;
  
  DAT_700f9cb0 = *DAT_71201884 + DAT_71201880 | 1;
  DAT_71201884 = DAT_71201884 + 1;
  *DAT_7120188c = FUN_717155c0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_713dc4d0;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// =========================================================================
// Function: FUN_71715820
// Entry: 0x71715820 | Size: 152 bytes
// =========================================================================

void FUN_71715820(void)

{
  FUN_713e834c();
  return;
}


// =========================================================================
// Function: FUN_717158ec
// Entry: 0x717158ec | Size: 2260 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x71715dd0) */
/* WARNING: Removing unreachable block (ram,0x71715a10) */
/* WARNING: Removing unreachable block (ram,0x71715c04) */
/* WARNING: Removing unreachable block (ram,0x71715fa0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_717158ec(void)

{
  undefined4 *puVar1;
  int iVar2;
  byte bStack_51;
  uint auStack_50 [2];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  int iStack_28;
  
  iVar2 = _ext___stack_chk_guard;
  iStack_28 = _ext___stack_chk_guard;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xab7c36 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x45;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x45;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(undefined4 **)((auStack_50[0] ^ 0xccfff6) + DAT_7120187c) = &DAT_70c242a4;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xab98df >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x47;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x47;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(undefined4 **)((auStack_50[0] ^ 0xccfff7) + DAT_7120187c) = &DAT_70b88b90;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xab8c74 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x49;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x49;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(undefined4 **)((auStack_50[0] ^ 0xccfff0) + DAT_7120187c) = &DAT_70c1f790;
  uStack_48 = 0xd3;
  uStack_44 = 0;
  uStack_3c = 0;
  uStack_34 = 0x26d5d038;
  puStack_38 = &LAB_49abac16;
  uStack_40 = 0x35;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xab8e2d >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x4b;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xab8e2d;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccabe7) >> 2 ^ 0xacad7f;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x4b;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(undefined4 **)((auStack_50[0] ^ 0xccfff1) + DAT_7120187c) = &DAT_70c1eb90;
  *DAT_7120188c = &LAB_713eb44c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_713e6190;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71715820;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_713e6630;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_713eada0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_713e64a8;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_713e4ad0;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  if (_ext___stack_chk_guard == iVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_71716500
// Entry: 0x71716500 | Size: 72 bytes
// =========================================================================

void FUN_71716500(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  (*DAT_700f9cb4)();
  iVar2 = 0x1fff;
  puVar1 = &DAT_7101a894;
  do {
    *puVar1 = puVar1 + 5;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 0x1a;
  } while (iVar2 != 0);
  DAT_710ea82c = 0;
  return;
}


// =========================================================================
// Function: FUN_717165a0
// Entry: 0x717165a0 | Size: 764 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x717166f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_717165a0(void)

{
  undefined4 *puVar1;
  int iVar2;
  byte bStack_51;
  uint auStack_50 [2];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  int iStack_28;
  
  iVar2 = _ext___stack_chk_guard;
  iStack_28 = _ext___stack_chk_guard;
  *DAT_7120188c = &LAB_71716454;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  uStack_3c = 0;
  uStack_44 = 0;
  uStack_34 = 0x26d5d038;
  puStack_38 = &LAB_49abac16;
  uStack_40 = 0x4e;
  uStack_48 = 0xf7;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xab705d >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 100;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xab705d;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccabba) >> 2 ^ 0xacada3;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 100;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(undefined **)((auStack_50[0] ^ 0xccffd5) + DAT_7120187c) = &DAT_7101a840;
  DAT_700f9cb4 = *DAT_71201884 + DAT_71201880 | 1;
  DAT_71201884 = DAT_71201884 + 1;
  *DAT_7120188c = FUN_71716500;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71474adc;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  if (_ext___stack_chk_guard == iVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_71716a90
// Entry: 0x71716a90 | Size: 96 bytes
// =========================================================================

int FUN_71716a90(byte *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 != (byte *)0x0) {
    param_3 = (uint)*param_1;
  }
  if (param_1 != (byte *)0x0 && param_3 != 0) {
    bVar2 = param_3 == 0x20;
    if (bVar2) {
      param_3 = (uint)param_1[1];
    }
    if (!bVar2 || param_3 != 0) {
      iVar1 = FUN_714af734(param_1,0,1);
      if (iVar1 == 0) {
        iVar1 = FUN_714af734(param_1,0,0);
        return iVar1;
      }
      return iVar1;
    }
  }
  return 0;
}


// =========================================================================
// Function: FUN_71716b40
// Entry: 0x71716b40 | Size: 88 bytes
// =========================================================================

undefined4 FUN_71716b40(void)

{
  undefined4 uVar1;
  byte abStack_1c [8];
  undefined4 uStack_14;
  
  abStack_1c[1] = 0x72;
  abStack_1c[2] = 0x61;
  abStack_1c[3] = 100;
  abStack_1c[4] = 0x61;
  abStack_1c[0] = 10;
  abStack_1c[5] = 0x72;
  abStack_1c[6] = 0;
  uVar1 = FUN_714b34c8(abStack_1c);
  if ((abStack_1c[0] & 1) != 0) {
    thunk_qNQrlu(uStack_14);
  }
  return uVar1;
}


// =========================================================================
// Function: FUN_71716be8
// Entry: 0x71716be8 | Size: 96 bytes
// =========================================================================

void FUN_71716be8(void)

{
  undefined4 *puVar1;
  
  *DAT_7120188c = FUN_71716a90;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71716b40;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// =========================================================================
// Function: FUN_71716dc8
// Entry: 0x71716dc8 | Size: 24 bytes
// =========================================================================

uint FUN_71716dc8(uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  bool bVar6;
  undefined8 uVar7;
  
  if ((DAT_711a3938 != 0) && (iVar1 = FUN_7156ab28(), iVar1 == 0)) {
    piVar5 = (int *)(DAT_711a3938 + 0x1389c);
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
    iVar1 = thunk_FUN_715c51c4(iVar1);
    if (iVar1 != 0) {
      *(undefined1 *)(DAT_70b889d4 + 0x10c) = 1;
    }
  }
  iVar1 = DAT_70c38f4c;
  uVar7 = FUN_716e69cc();
  uVar4 = (uint)((ulonglong)uVar7 >> 0x20);
  if ((int)uVar7 != 0) {
    uVar4 = *(uint *)(iVar1 + 4);
    bVar6 = uVar4 != param_1;
    if (bVar6) {
      uVar4 = *(uint *)(iVar1 + 0x4c);
    }
    if (!bVar6 || uVar4 == param_1) {
      return 0;
    }
    uVar4 = *(uint *)(iVar1 + 0x50);
    bVar6 = uVar4 == param_1;
    if (!bVar6) {
      uVar4 = *(uint *)(iVar1 + 0x54);
    }
    if (bVar6 || uVar4 == param_1) {
      return 0;
    }
    uVar4 = *(uint *)(iVar1 + 0x58);
    bVar6 = uVar4 == param_1;
    if (!bVar6) {
      uVar4 = *(uint *)(iVar1 + 0x74);
    }
    if (bVar6 || uVar4 == param_1) {
      return 0;
    }
  }
  uVar2 = *(uint *)(iVar1 + 0x68);
  bVar6 = uVar2 != param_1;
  if (bVar6) {
    uVar4 = *(uint *)(iVar1 + 0x6c);
    uVar2 = 1;
  }
  if ((bVar6 && uVar4 != param_1) || (uVar2 = 0, DAT_711f6d58 == 0)) {
    return uVar2;
  }
  iVar3 = *(int *)(*(int *)(DAT_711f6d58 + 0xac) + 0x1f6c);
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + 0x130);
  }
  if ((iVar3 != 0 && iVar1 != 0) && (iVar1 = thunk_FUN_715c4004(), iVar1 != 0)) {
    return (uint)(*(int *)(iVar1 + 0x5a4) == 3);
  }
  return 0;
}


// =========================================================================
// Function: BWvLKusgjaGDQLfdbG_GMrWS
// Entry: 0x71717094 | Size: 52 bytes
// =========================================================================

void BWvLKusgjaGDQLfdbG_GMrWS(int param_1)

{
  if ((param_1 != 0) && (DAT_711f6b52 == '\0')) {
    FUN_71622798();
  }
  DAT_711f6b52 = (char)param_1;
  return;
}


// =========================================================================
// Function: FUN_71719908
// Entry: 0x71719908 | Size: 144 bytes
// =========================================================================

undefined4
FUN_71719908(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  (*DAT_700f9ccc)();
  FUN_714cc744();
  uVar1 = FUN_71ba1b94();
  FUN_714ccb40();
  uVar2 = FUN_71ba1b94();
  uVar1 = FUN_71ba13e0(uVar1,uVar2);
  iVar3 = FUN_71ba2d70(uVar1,0x3fe66666);
  if (iVar3 != 0) {
    uVar1 = FUN_71ba0b38(*param_4,0x40600000);
    *param_4 = uVar1;
    uVar1 = FUN_71ba0b38(*param_5,0x40600000);
    *param_5 = uVar1;
  }
  return param_1;
}


// =========================================================================
// Function: FUN_71719ab0
// Entry: 0x71719ab0 | Size: 128 bytes
// =========================================================================

void FUN_71719ab0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  puVar1 = DAT_70b42050;
  uVar3 = *DAT_70b42050;
  DAT_711f6b70 = uVar3;
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
  uVar3 = FUN_71ba21e8(uVar3,0x41200000);
  uVar3 = FUN_71ba13e0(uVar3,0x42c80000);
  uVar2 = FUN_71ba1b94(DAT_7120166c);
  uVar3 = FUN_71ba21e8(uVar3,uVar2);
  *puVar1 = uVar3;
  FUN_7133c4d4();
  return;
}


// =========================================================================
// Function: FUN_71719c6c
// Entry: 0x71719c6c | Size: 40 bytes
// =========================================================================

void FUN_71719c6c(void)

{
  *DAT_70b42050 = DAT_711f6b70;
  imp_powf();
  return;
}


// =========================================================================
// Function: FUN_71719d08
// Entry: 0x71719d08 | Size: 552 bytes
// =========================================================================

void FUN_71719d08(void)

{
  undefined4 *puVar1;
  
  DAT_700f9cbc = *DAT_71201884 + DAT_71201880 | 1;
  DAT_71201884 = DAT_71201884 + 1;
  *DAT_7120188c = &LAB_7171711c;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9cc0 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_717194e4;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9cb8 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_71716ce0;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9cc4 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_71719590;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9cc8 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_71719630;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9ccc = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71719908;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71719ab0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71719c6c;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// =========================================================================
// Function: FUN_7171a260
// Entry: 0x7171a260 | Size: 1112 bytes
// =========================================================================

undefined4
FUN_7171a260(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            )

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  int iVar8;
  bool bVar9;
  
  if (DAT_711f6d58 == 0) goto LAB_7171a304;
  uVar1 = FUN_717b92b8(*(undefined4 *)(DAT_711f6d58 + 4),param_1);
  if (uVar1 == 0xffff) {
    uVar2 = (*DAT_700f9d90)(param_1,param_2,param_3,param_4,param_5);
    return uVar2;
  }
  if (2000 < uVar1) goto LAB_7171a304;
  iVar8 = *(int *)(DAT_711f6d58 + 4);
  bVar9 = *(char *)(iVar8 + uVar1 + 0x3e88) != '\0';
  if (bVar9) {
    iVar8 = *(int *)(iVar8 + uVar1 * 4);
  }
  if (bVar9 && iVar8 != 0) {
    uVar1 = (uint)*(byte *)(iVar8 + 0x734);
  }
  if ((!bVar9 || iVar8 == 0) || uVar1 == 0) goto LAB_7171a304;
  if (param_4 != 1) {
    if (param_4 != 0) goto LAB_7171a304;
    uVar1 = *(int *)(iVar8 + 0x740) - 3;
    if (uVar1 < 3) {
      return 0;
    }
    iVar3 = FUN_71886108(uVar1,param_2,param_3);
    if (((uint)(iVar3 - *(int *)(iVar8 + 0x738)) >> 4 < 0x19) && (*(int *)(iVar8 + 0x740) == 0)) {
      return 0;
    }
    iVar3 = FUN_71886108();
    if ((400 < (uint)(iVar3 - *(int *)(iVar8 + 0x738))) && (*(int *)(iVar8 + 0x740) == 0)) {
      uVar2 = FUN_71886108();
      uVar5 = 2;
      goto LAB_7171a5c4;
    }
    iVar3 = FUN_71886108();
    if ((0x7c < (uint)(iVar3 - *(int *)(iVar8 + 0x738)) >> 3) || (*(int *)(iVar8 + 0x740) != 2)) {
      iVar3 = FUN_71886108();
      if (((uint)(iVar3 - *(int *)(iVar8 + 0x738)) >> 3 < 0x7d) && (*(int *)(iVar8 + 0x740) == 1)) {
        iVar3 = FUN_71886108();
        if ((uint)(iVar3 - *(int *)(iVar8 + 0x748)) < 0x32) {
          return 0;
        }
        uVar2 = FUN_71886108();
        *(undefined4 *)(iVar8 + 0x748) = uVar2;
        uVar2 = 2;
        goto LAB_7171a53c;
      }
      iVar3 = FUN_71886108();
      if (((uint)(iVar3 - *(int *)(iVar8 + 0x738)) < 0x3e9) ||
         (uVar1 = *(int *)(iVar8 + 0x740) - 1, 1 < uVar1)) goto LAB_7171a304;
      uVar2 = FUN_71886108(uVar1,param_2,param_3,0);
      uVar5 = 3;
      goto LAB_7171a5c4;
    }
    if (*(char *)(iVar8 + 0x735) == '\x01') {
      uVar4 = 0xff;
      uVar6 = 0;
      uVar7 = 0;
LAB_7171a61c:
      FUN_71358f90(&DAT_711f6b74,uVar4,uVar6,uVar7);
    }
    else if (*(char *)(iVar8 + 0x735) == '\0') {
      if (*(char *)(iVar8 + 0x571) == '\0') {
        uVar4 = 0x2d;
        uVar6 = 0x2d;
        uVar7 = 0x2d;
      }
      else {
        uVar4 = *(undefined1 *)(iVar8 + 0x572);
        uVar6 = *(undefined1 *)(iVar8 + 0x573);
        uVar7 = *(undefined1 *)(iVar8 + 0x574);
      }
      goto LAB_7171a61c;
    }
    iVar3 = FUN_71886108();
    if (0x31 < (uint)(iVar3 - *(int *)(iVar8 + 0x748))) {
      uVar2 = FUN_71886108();
      *(undefined4 *)(iVar8 + 0x748) = uVar2;
      *(undefined4 *)(iVar8 + 0x740) = 1;
    }
    param_4 = 0;
    goto LAB_7171a304;
  }
  if (*(uint *)(iVar8 + 0x740) < 3) {
    return 0;
  }
  iVar3 = FUN_71886108(*(uint *)(iVar8 + 0x740),param_2,param_3);
  if (((uint)(iVar3 - *(int *)(iVar8 + 0x738)) >> 4 < 0x19) && (*(int *)(iVar8 + 0x740) == 3)) {
    return 0;
  }
  iVar3 = FUN_71886108();
  if ((400 < (uint)(iVar3 - *(int *)(iVar8 + 0x738))) && (*(int *)(iVar8 + 0x740) == 3)) {
    uVar2 = FUN_71886108();
    uVar5 = 5;
LAB_7171a5c4:
    *(undefined4 *)(iVar8 + 0x740) = uVar5;
    *(undefined4 *)(iVar8 + 0x738) = uVar2;
    return 0;
  }
  iVar3 = FUN_71886108();
  if ((0x7c < (uint)(iVar3 - *(int *)(iVar8 + 0x738)) >> 3) || (*(int *)(iVar8 + 0x740) != 5)) {
    iVar3 = FUN_71886108();
    if (((uint)(iVar3 - *(int *)(iVar8 + 0x738)) >> 3 < 0x7d) && (*(int *)(iVar8 + 0x740) == 4)) {
      iVar3 = FUN_71886108();
      if ((uint)(iVar3 - *(int *)(iVar8 + 0x74c)) < 0x32) {
        return 0;
      }
      uVar2 = FUN_71886108();
      *(undefined4 *)(iVar8 + 0x74c) = uVar2;
      uVar2 = 5;
LAB_7171a53c:
      *(undefined4 *)(iVar8 + 0x740) = uVar2;
      return 0;
    }
    iVar3 = FUN_71886108();
    if (((uint)(iVar3 - *(int *)(iVar8 + 0x738)) < 0x3e9) ||
       ((*(uint *)(iVar8 + 0x740) & 0xfffffffe) != 4)) goto LAB_7171a304;
    uVar2 = FUN_71886108(4,param_2,param_3,1);
    uVar5 = 0;
    goto LAB_7171a5c4;
  }
  if (*(char *)(iVar8 + 0x735) == '\x01') {
    uVar4 = 0;
    uVar6 = 0;
    uVar7 = 0xff;
LAB_7171a670:
    FUN_71358f90(&DAT_711f6b74,uVar4,uVar6,uVar7);
  }
  else if (*(char *)(iVar8 + 0x735) == '\0') {
    if (*(char *)(iVar8 + 0x571) == '\0') {
      uVar4 = 0x2d;
      uVar6 = 0x2d;
      uVar7 = 0x2d;
    }
    else {
      uVar4 = *(undefined1 *)(iVar8 + 0x572);
      uVar6 = *(undefined1 *)(iVar8 + 0x573);
      uVar7 = *(undefined1 *)(iVar8 + 0x574);
    }
    goto LAB_7171a670;
  }
  iVar3 = FUN_71886108();
  if (0x31 < (uint)(iVar3 - *(int *)(iVar8 + 0x74c))) {
    uVar2 = FUN_71886108();
    *(undefined4 *)(iVar8 + 0x74c) = uVar2;
    *(undefined4 *)(iVar8 + 0x740) = 4;
  }
  param_4 = 1;
LAB_7171a304:
  uVar2 = (*DAT_700f9d90)(param_1,param_2,param_3,param_4,param_5);
  return uVar2;
}


// =========================================================================
// Function: FUN_7171aaec
// Entry: 0x7171aaec | Size: 124 bytes
// =========================================================================

void FUN_7171aaec(void)

{
  int iVar1;
  undefined4 uStack_c;
  
  FUN_71358f74(&uStack_c);
  iVar1 = DAT_70ffc9b0;
  uStack_c._3_1_ = (undefined1)((uint)*(undefined4 *)(DAT_70ffc9b0 + 0x18) >> 0x18);
  uStack_c._0_3_ = CONCAT21(DAT_711f6b75,DAT_711f6b74);
  *(undefined4 *)(DAT_70ffc9b0 + 0xa8) = uStack_c;
  *(undefined4 *)(iVar1 + 0x3c) = uStack_c;
  *(undefined4 *)(iVar1 + 0x18) = uStack_c;
  FUN_71414834(3,DAT_70ffc9b4,*DAT_70ffc9b8);
  return;
}


// =========================================================================
// Function: FUN_7171ac38
// Entry: 0x7171ac38 | Size: 276 bytes
// =========================================================================

void FUN_7171ac38(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int unaff_r8;
  bool bVar3;
  undefined1 uStack_27;
  undefined1 uStack_26;
  undefined1 uStack_25;
  
  uStack_25 = 0xff;
  uStack_26 = 0xff;
  uStack_27 = 0xff;
  iVar1 = 0;
  if (DAT_711f6d58 != 0) {
    iVar1 = *(int *)(DAT_711f6d58 + 4);
  }
  if ((DAT_711f6d58 != 0 && iVar1 != 0) && (uVar2 = FUN_717b92b8(iVar1,param_1), uVar2 < 0x7d1)) {
    bVar3 = *(char *)(*(int *)(DAT_711f6d58 + 4) + uVar2 + 0x3e88) != '\0';
    if (bVar3) {
      unaff_r8 = *(int *)(*(int *)(DAT_711f6d58 + 4) + uVar2 * 4);
    }
    if (((bVar3 && unaff_r8 != 0) &&
        (FUN_715fb9d8(unaff_r8,&uStack_25,&uStack_26,&uStack_27),
        *(char *)(unaff_r8 + 0x734) != '\0')) && (*(char *)(unaff_r8 + 0x735) == '\x01')) {
      uStack_25 = DAT_711f6b74;
      uStack_26 = (undefined1)DAT_711f6b75;
      uStack_27 = DAT_711f6b75._1_1_;
    }
  }
  DAT_711f6b74 = uStack_25;
  DAT_711f6b75._0_1_ = uStack_26;
  DAT_711f6b75._1_1_ = uStack_27;
  (*DAT_700f9d94)(param_1,param_2,param_3,param_4);
  return;
}


// =========================================================================
// Function: FUN_7171adfc
// Entry: 0x7171adfc | Size: 340 bytes
// =========================================================================

void FUN_7171adfc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined1 param_9,undefined1 param_10,undefined1 param_11,undefined4 param_12)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined1 uStack_27;
  undefined1 uStack_26;
  undefined1 uStack_25;
  
  uStack_25 = param_9;
  uStack_26 = param_10;
  uStack_27 = param_11;
  iVar1 = 0;
  if (DAT_711f6d58 != 0) {
    iVar1 = *(int *)(DAT_711f6d58 + 4);
  }
  if ((DAT_711f6d58 != 0 && iVar1 != 0) && (uVar2 = FUN_717b92b8(iVar1,param_1), uVar2 < 0x7d1)) {
    iVar1 = *(int *)(DAT_711f6d58 + 4);
    bVar3 = *(char *)(iVar1 + uVar2 + 0x3e88) != '\0';
    if (bVar3) {
      iVar1 = *(int *)(iVar1 + uVar2 * 4);
    }
    if (((bVar3 && iVar1 != 0) &&
        (FUN_715fb9d8(iVar1,&uStack_25,&uStack_26,&uStack_27), *(char *)(iVar1 + 0x734) != '\0')) &&
       (*(char *)(iVar1 + 0x735) == '\x01')) {
      uStack_25 = DAT_711f6b74;
      uStack_26 = (undefined1)DAT_711f6b75;
      uStack_27 = DAT_711f6b75._1_1_;
    }
  }
  (*DAT_700f9d98)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,uStack_25,
                  uStack_26,uStack_27,param_12);
  return;
}


// =========================================================================
// Function: FUN_7171b000
// Entry: 0x7171b000 | Size: 912 bytes
// =========================================================================

void FUN_7171b000(int param_1,int param_2,uint param_3)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  undefined4 *puVar17;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (DAT_711f6d58 == 0) {
    return;
  }
  iVar15 = FUN_717b92b8(*(undefined4 *)(DAT_711f6d58 + 4),param_1);
  if ((iVar15 != 0xffff) &&
     (iVar15 = *(int *)(*(int *)(DAT_711f6d58 + 4) + iVar15 * 4), *(char *)(iVar15 + 0x734) != '\0')
     ) {
    iVar15 = *(int *)(iVar15 + 0x740);
    param_3 = (uint)(iVar15 != 2);
    if (iVar15 != 5 && iVar15 != 2) {
      return;
    }
  }
  iVar15 = *(int *)(*(int *)(DAT_70c39074 + *(short *)(param_1 + 0x26) * 4) + 0x74);
  uVar16 = *(uint *)(iVar15 + 0x32c);
  uVar2 = *(undefined4 *)(iVar15 + 0x330);
  uVar3 = FUN_7136e6f0(&uStack_30,param_2 + 0x10);
  uVar11 = uStack_2c;
  uVar14 = uStack_30;
  FUN_7136e6f0(uVar3,param_2);
  iVar15 = *(int *)(param_1 + 0x5a4);
  puVar17 = (undefined4 *)(*(int *)(param_1 + 0x14) + 0x30);
  if (*(int *)(param_1 + 0x14) == 0) {
    puVar17 = (undefined4 *)(param_1 + 4);
  }
  sVar1 = *(short *)(param_1 + 0x26);
  uVar4 = *puVar17;
  uVar5 = puVar17[1];
  uStack_28 = FUN_71ba0b38(puVar17[2],0x40000000);
  uVar3 = FUN_71ba21e8(uVar11,uVar11);
  uVar6 = FUN_71ba21e8(uVar14,uVar14);
  FUN_71ba0b38(uVar6,uVar3);
  uVar3 = imp_sqrtf();
  iVar7 = FUN_71ba2d70(uVar3,0);
  uVar6 = FUN_71ba13e0(0x3f800000,uVar3);
  uVar3 = FUN_71ba21e8(uVar6,uVar11);
  uVar8 = FUN_71ba21e8(uVar16 & 0x7fffffff,0x40800000);
  if (sVar1 == 0x1d7) {
    uVar8 = 0x3fa00000;
  }
  if (iVar15 == 9) {
    uVar8 = 0x3fa00000;
  }
  uVar9 = FUN_71ba0b38(uVar8,uVar8);
  uVar10 = FUN_71ba0b38(uVar9,0x3f800000);
  uVar2 = FUN_71ba0b38(uVar2,uVar10);
  if (iVar7 == 0) {
    uVar3 = uVar11;
  }
  uVar11 = FUN_71ba21e8(uVar3,uVar2);
  if (param_3 == 0) {
    uVar16 = uVar16 ^ 0x80000000;
  }
  uVar10 = FUN_71ba21e8(uStack_2c,uStack_2c);
  uVar12 = FUN_71ba21e8(uStack_30,uStack_30);
  FUN_71ba0b38(uVar12,uVar10);
  uVar10 = imp_sqrtf();
  iVar15 = FUN_71ba2d70(uVar10,0);
  uVar12 = FUN_71ba13e0(0x3f800000,uVar10);
  uVar10 = FUN_71ba21e8(uVar12,uStack_2c);
  if (iVar15 == 0) {
    uVar10 = uStack_2c;
  }
  uVar10 = FUN_71ba21e8(uVar10,uVar16);
  uVar11 = FUN_71ba0b38(uVar10,uVar11);
  uStack_2c = FUN_71ba0b38(uVar5,uVar11);
  uVar13 = FUN_71ba21e8(uVar6,uVar14);
  if (iVar7 == 0) {
    uVar13 = 0x3f800000;
  }
  uVar14 = FUN_71ba21e8(uVar12,uStack_30);
  uVar11 = FUN_71ba21e8(uVar13,uVar2);
  if (iVar15 == 0) {
    uVar14 = 0x3f800000;
  }
  uVar14 = FUN_71ba21e8(uVar14,uVar16);
  uVar14 = FUN_71ba0b38(uVar14,uVar11);
  uStack_30 = FUN_71ba0b38(uVar4,uVar14);
  uVar14 = FUN_71ba21e8(uVar13,uVar9);
  uVar11 = FUN_71ba21e8(uVar3,uVar9);
  uVar2 = FUN_71ba21e8(uVar3,uVar8);
  uVar3 = FUN_71ba21e8(uVar8,uVar13 ^ 0x80000000);
  FUN_714756c0(param_1,param_1 + 0x16,*DAT_710ea840,&uStack_30,uVar14,uVar11,uVar2,uVar3,0x2d,0x2d,
               0x2d,0x40e00000);
  return;
}


// =========================================================================
// Function: FUN_7171b0f8
// Entry: 0x7171b0f8 | Size: 636 bytes
// =========================================================================

void FUN_7171b0f8(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  undefined4 *puVar17;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (DAT_711f6d58 != 0) {
    iVar15 = FUN_717b92b8(*(undefined4 *)(DAT_711f6d58 + 4),param_1);
    if ((iVar15 == 0xffff) ||
       (iVar15 = *(int *)(*(int *)(DAT_711f6d58 + 4) + iVar15 * 4),
       *(char *)(iVar15 + 0x734) == '\0')) {
      iVar15 = *(int *)(*(int *)(DAT_70c39074 + *(short *)(param_1 + 0x26) * 4) + 0x74);
      uVar11 = *(undefined4 *)(iVar15 + 0x32c);
      uVar14 = *(undefined4 *)(iVar15 + 0x330);
      FUN_7136e6f0(&uStack_30,param_2 + 0x10);
      puVar17 = (undefined4 *)(*(int *)(param_1 + 0x14) + 0x30);
      if (*(int *)(param_1 + 0x14) == 0) {
        puVar17 = (undefined4 *)(param_1 + 4);
      }
      uVar3 = *puVar17;
      uVar4 = puVar17[1];
      uStack_28 = FUN_71ba0b38(puVar17[2],0x40000000);
      uVar2 = FUN_71ba21e8(uStack_2c,uStack_2c);
      uVar5 = FUN_71ba21e8(uStack_30,uStack_30);
      FUN_71ba0b38(uVar5,uVar2);
      uVar2 = imp_sqrtf();
      iVar15 = FUN_71ba2d70(uVar2,0);
      uVar5 = FUN_71ba13e0(0x3f800000,uVar2);
      uVar2 = FUN_71ba21e8(uVar5,uStack_2c);
      uVar11 = FUN_71ba21e8(uVar11,0x40800000);
      uVar6 = FUN_71ba0b38(uVar11,uVar11);
      uVar8 = FUN_71ba0b38(uVar6,0x3f800000);
      uVar14 = FUN_71ba0b38(uVar14,uVar8);
      if (iVar15 == 0) {
        uVar2 = uStack_2c;
      }
      uVar8 = FUN_71ba21e8(uVar14,uVar2);
      uStack_2c = FUN_71ba0b38(uVar4,uVar8);
      uVar16 = FUN_71ba21e8(uVar5,uStack_30);
      if (iVar15 == 0) {
        uVar16 = 0x3f800000;
      }
      uVar14 = FUN_71ba21e8(uVar14,uVar16);
      uStack_30 = FUN_71ba0b38(uVar3,uVar14);
      uVar14 = FUN_71ba21e8(uVar6,uVar16);
      uVar3 = FUN_71ba21e8(uVar6,uVar2);
      uVar2 = FUN_71ba21e8(uVar11,uVar2);
      uVar11 = FUN_71ba21e8(uVar11,uVar16 ^ 0x80000000);
      FUN_714756c0(param_1,param_1 + 0x16,*DAT_710ea844,&uStack_30,uVar14,uVar3,uVar2,uVar11,0x2d,
                   0x2d,0x2d,0x40e00000);
      return;
    }
    iVar15 = *(int *)(iVar15 + 0x740);
    if (iVar15 == 2 || iVar15 == 5) {
      uVar13 = (uint)(iVar15 != 2);
      iVar15 = *(int *)(*(int *)(DAT_70c39074 + *(short *)(param_1 + 0x26) * 4) + 0x74);
      uVar16 = *(uint *)(iVar15 + 0x32c);
      uVar2 = *(undefined4 *)(iVar15 + 0x330);
      uVar3 = FUN_7136e6f0(&uStack_30,param_2 + 0x10);
      uVar11 = uStack_2c;
      uVar14 = uStack_30;
      FUN_7136e6f0(uVar3,param_2);
      iVar15 = *(int *)(param_1 + 0x5a4);
      puVar17 = (undefined4 *)(*(int *)(param_1 + 0x14) + 0x30);
      if (*(int *)(param_1 + 0x14) == 0) {
        puVar17 = (undefined4 *)(param_1 + 4);
      }
      sVar1 = *(short *)(param_1 + 0x26);
      uVar4 = *puVar17;
      uVar5 = puVar17[1];
      uStack_28 = FUN_71ba0b38(puVar17[2],0x40000000);
      uVar3 = FUN_71ba21e8(uVar11,uVar11);
      uVar6 = FUN_71ba21e8(uVar14,uVar14);
      FUN_71ba0b38(uVar6,uVar3);
      uVar3 = imp_sqrtf();
      iVar7 = FUN_71ba2d70(uVar3,0);
      uVar6 = FUN_71ba13e0(0x3f800000,uVar3);
      uVar3 = FUN_71ba21e8(uVar6,uVar11);
      uVar8 = FUN_71ba21e8(uVar16 & 0x7fffffff,0x40800000);
      if (sVar1 == 0x1d7) {
        uVar8 = 0x3fa00000;
      }
      if (iVar15 == 9) {
        uVar8 = 0x3fa00000;
      }
      uVar9 = FUN_71ba0b38(uVar8,uVar8);
      uVar10 = FUN_71ba0b38(uVar9,0x3f800000);
      uVar2 = FUN_71ba0b38(uVar2,uVar10);
      if (iVar7 == 0) {
        uVar3 = uVar11;
      }
      uVar11 = FUN_71ba21e8(uVar3,uVar2);
      if (uVar13 == 0) {
        uVar16 = uVar16 ^ 0x80000000;
      }
      uVar10 = FUN_71ba21e8(uStack_2c,uStack_2c);
      uVar12 = FUN_71ba21e8(uStack_30,uStack_30);
      FUN_71ba0b38(uVar12,uVar10);
      uVar10 = imp_sqrtf();
      iVar15 = FUN_71ba2d70(uVar10,0);
      uVar12 = FUN_71ba13e0(0x3f800000,uVar10);
      uVar10 = FUN_71ba21e8(uVar12,uStack_2c);
      if (iVar15 == 0) {
        uVar10 = uStack_2c;
      }
      uVar10 = FUN_71ba21e8(uVar10,uVar16);
      uVar11 = FUN_71ba0b38(uVar10,uVar11);
      uStack_2c = FUN_71ba0b38(uVar5,uVar11);
      uVar13 = FUN_71ba21e8(uVar6,uVar14);
      if (iVar7 == 0) {
        uVar13 = 0x3f800000;
      }
      uVar14 = FUN_71ba21e8(uVar12,uStack_30);
      uVar11 = FUN_71ba21e8(uVar13,uVar2);
      if (iVar15 == 0) {
        uVar14 = 0x3f800000;
      }
      uVar14 = FUN_71ba21e8(uVar14,uVar16);
      uVar14 = FUN_71ba0b38(uVar14,uVar11);
      uStack_30 = FUN_71ba0b38(uVar4,uVar14);
      uVar14 = FUN_71ba21e8(uVar13,uVar9);
      uVar11 = FUN_71ba21e8(uVar3,uVar9);
      uVar2 = FUN_71ba21e8(uVar3,uVar8);
      uVar3 = FUN_71ba21e8(uVar8,uVar13 ^ 0x80000000);
      FUN_714756c0(param_1,param_1 + 0x16,*DAT_710ea840,&uStack_30,uVar14,uVar11,uVar2,uVar3,0x2d,
                   0x2d,0x2d,0x40e00000);
      return;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_7171b214
// Entry: 0x7171b214 | Size: 196 bytes
// =========================================================================

uint FUN_7171b214(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int unaff_r5;
  bool bVar3;
  
  if (DAT_711f6d58 != 0) {
    bVar3 = *(char *)(DAT_711f6d58 + 0x349) != '\0';
    if (bVar3) {
      unaff_r5 = *(int *)(DAT_711f6d58 + 4);
    }
    if (((bVar3 && unaff_r5 != 0) && (uVar1 = FUN_717b92b8(unaff_r5,param_1), uVar1 != 0xffff)) &&
       (uVar1 < 0x7d1)) {
      bVar3 = *(char *)(unaff_r5 + uVar1 + 0x3e88) != '\0';
      if (bVar3) {
        unaff_r5 = *(int *)(unaff_r5 + uVar1 * 4);
      }
      if ((bVar3 && unaff_r5 != 0) &&
         ((iVar2 = FUN_71603148(unaff_r5), iVar2 == 0 ||
          (iVar2 = FUN_71603148(unaff_r5), iVar2 == 1)))) {
        iVar2 = FUN_71603148(unaff_r5);
        return (uint)(iVar2 != 0);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x7171b250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*DAT_700f9d9c)(param_1);
  return uVar1;
}


// =========================================================================
// Function: FUN_7171b3a0
// Entry: 0x7171b3a0 | Size: 204 bytes
// =========================================================================

uint FUN_7171b3a0(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (DAT_711aceec != '\0') {
    DAT_711aceec = 0;
    return 1;
  }
  uVar1 = (*DAT_700f9da0)();
  if ((uVar1 == 0) && (DAT_711f6d58 != 0)) {
    iVar3 = *(int *)(DAT_711f6d58 + 4);
    uVar1 = 0;
    if (iVar3 != 0) {
      uVar2 = FUN_717b92b8(iVar3,param_1);
      if ((uVar2 == 0xffff) || (2000 < uVar2)) {
        uVar1 = 0;
      }
      else {
        uVar1 = 0;
        if ((*(char *)(iVar3 + uVar2 + 0x3e88) != '\0') &&
           (iVar3 = *(int *)(iVar3 + uVar2 * 4), iVar3 != 0)) {
          return (uint)*(byte *)(iVar3 + 0x570);
        }
      }
    }
  }
  return uVar1;
}


// =========================================================================
// Function: FUN_7171b514
// Entry: 0x7171b514 | Size: 428 bytes
// =========================================================================

void FUN_7171b514(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar5 = *(int *)(param_1 + 0xc);
  uVar6 = *(undefined4 *)(param_2 + 0x10);
  uVar9 = *(undefined4 *)(param_2 + 0x14);
  uVar7 = *(undefined4 *)
           (*(int *)(*(int *)(DAT_70c39074 + *(short *)(iVar5 + 0x26) * 4) + 0x74) + 0x32c);
  FUN_7136cdfc(&uStack_30);
  iVar1 = *(int *)(iVar5 + 0x14);
  uStack_30 = *(undefined4 *)(iVar1 + 0x30);
  uStack_2c = *(undefined4 *)(iVar1 + 0x34);
  uStack_28 = FUN_71ba0b38(*(undefined4 *)(iVar1 + 0x38),0x40000000);
  uVar2 = FUN_71ba21e8(uVar6,uVar6);
  uVar3 = FUN_71ba21e8(uVar9,uVar9);
  uVar2 = FUN_71ba0b38(uVar3,uVar2);
  iVar1 = FUN_71ba2cf0(uVar2,0);
  uVar3 = imp_sqrtf(uVar2);
  uVar3 = FUN_71ba13e0(0x3f800000,uVar3);
  if (iVar1 == 0) {
    uVar2 = uVar3;
  }
  uVar3 = FUN_71ba21e8(uVar6,uVar2);
  uVar4 = FUN_71ba21e8(uVar7,0x40800000);
  uVar6 = FUN_71ba0b38(uVar4,uVar4);
  uVar7 = FUN_71ba21e8(uVar6,uVar3);
  uVar8 = *(undefined4 *)(param_1 + 0x6dc);
  uVar7 = FUN_71ba21e8(uVar7,uVar8);
  uVar2 = FUN_71ba21e8(uVar9,uVar2);
  uVar6 = FUN_71ba21e8(uVar6,uVar2);
  uVar6 = FUN_71ba21e8(uVar6,uVar8);
  uVar2 = FUN_71ba21e8(uVar4,uVar2);
  uVar9 = *(undefined4 *)(param_1 + 0x6e0);
  uVar2 = FUN_71ba21e8(uVar2,uVar9);
  uVar3 = FUN_71ba21e8(uVar3,uVar4 ^ 0x80000000);
  uVar3 = FUN_71ba21e8(uVar3,uVar9);
  (*DAT_700f9d98)(iVar5,iVar5 + 0x18,*(undefined4 *)(param_1 + 0x6d4),&uStack_30,uVar7,uVar6,uVar2,
                  uVar3,*(undefined1 *)(param_1 + 0x6d8),*(undefined1 *)(param_1 + 0x6d9),
                  *(undefined1 *)(param_1 + 0x6da),0x40e00000);
  return;
}


// =========================================================================
// Function: FUN_7171c2f0
// Entry: 0x7171c2f0 | Size: 272 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7171c2f0(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_84 [96];
  int iStack_24;
  
  iStack_24 = _ext___stack_chk_guard;
  iVar2 = FUN_713f9afc(param_1);
  if (((iVar2 == 0) && (iVar2 = FUN_713f9afc(param_1,0), iVar2 == 0)) && (iVar2 = 0, param_1 != 0))
  {
    if (0x3e < param_2) {
      param_2 = 0x3f;
    }
    uVar1 = 1 >> (0x20 - param_2 & 0xff);
    uVar3 = 1 << (param_2 & 0xff);
    if (-1 < (int)(param_2 - 0x20)) {
      uVar1 = 1 << (param_2 - 0x20 & 0xff);
      uVar3 = 0;
    }
    if (DAT_71201808 != 0) {
      if ((DAT_711f6b80 & uVar3) == 0 && (DAT_711f6b84 & uVar1) == 0) {
        DAT_711f6b84 = DAT_711f6b84 | uVar1;
        DAT_711f6b80 = DAT_711f6b80 | uVar3;
        FUN_7171c564(auStack_84);
        FUN_717db3e4(DAT_71201808,s_vehicle_upgrade_70071a34,auStack_84);
      }
    }
    iVar2 = *(int *)(param_1 + 4);
  }
  if (_ext___stack_chk_guard != iStack_24) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail(iVar2);
  }
  return;
}


// =========================================================================
// Function: FUN_7171c564
// Entry: 0x7171c564 | Size: 60 bytes
// =========================================================================

void FUN_7171c564(undefined4 param_1)

{
  imp___vsnprintf_chk(param_1,0x60,0,0x60,s_upgrade_frame_id__d_not_found__f_700619c4,
                      &stack0x00000000);
  return;
}


// =========================================================================
// Function: FUN_7171c5f4
// Entry: 0x7171c5f4 | Size: 152 bytes
// =========================================================================

undefined4 FUN_7171c5f4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (((DAT_711f6d58 != 0) &&
      (uVar2 = FUN_717b92b8(*(undefined4 *)(DAT_711f6d58 + 4),param_1), uVar2 < 0x7d1)) &&
     (*(char *)(*(int *)(DAT_711f6d58 + 4) + uVar2 + 0x3e88) != '\0')) {
    iVar3 = *(int *)(*(int *)(DAT_711f6d58 + 4) + uVar2 * 4);
    cVar1 = '\0';
    if (iVar3 != 0) {
      cVar1 = *(char *)(iVar3 + 0x778);
    }
    if (iVar3 != 0 && cVar1 != '\0') {
      return 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x7171c680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*DAT_700f9dc0)(param_1,param_2,param_3,param_4);
  return uVar4;
}


// =========================================================================
// Function: FUN_7171c700
// Entry: 0x7171c700 | Size: 40 bytes
// =========================================================================

void FUN_7171c700(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_713d66f8(DAT_70b889d4,1);
  *(undefined4 *)(param_1 + 0x524) = uVar1;
  return;
}


// =========================================================================
// Function: FUN_7171c868
// Entry: 0x7171c868 | Size: 408 bytes
// =========================================================================

void FUN_7171c868(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_711f6b8c & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711f6b8c), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9de8,param_2);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9dd8);
      *(undefined1 *)((int)puVar11 + 0x32) = 1;
      uVar7 = DAT_70084d44;
      uVar6 = DAT_70084d40;
      uVar5 = DAT_70084d3c;
      uVar4 = DAT_70084d38;
      uVar3 = DAT_70084d34;
      *puVar11 = DAT_70084d30;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      puVar11[5] = uVar7;
      uVar7 = DAT_70084d5c;
      uVar6 = DAT_70084d58;
      uVar5 = DAT_70084d54;
      uVar4 = DAT_70084d50;
      uVar3 = DAT_70084d4c;
      puVar11[6] = DAT_70084d48;
      puVar11[7] = uVar3;
      puVar11[8] = uVar4;
      puVar11[9] = uVar5;
      puVar11[10] = uVar6;
      puVar11[0xb] = uVar7;
      *(undefined2 *)(puVar11 + 0xc) = DAT_70084d60;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7171f500,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9de8);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9dd8);
    if (*(char *)(iVar9 + 0x32) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0xe9c1134b >> iVar15) |
                (byte)(0x45e79925 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0x45e79925 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x30 < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x32) = 0;
    }
    DAT_711f6b88 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_711f6b8c);
  }
                    /* WARNING: Could not recover jumptable at 0x7171c89c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_711f6b88)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_7171cc98
// Entry: 0x7171cc98 | Size: 408 bytes
// =========================================================================

void FUN_7171cc98(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_711f6b94 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711f6b94), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9e08,param_2);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9df8);
      *(undefined1 *)((int)puVar11 + 0x31) = 1;
      uVar7 = DAT_70084d7c;
      uVar6 = DAT_70084d78;
      uVar5 = DAT_70084d74;
      uVar4 = DAT_70084d70;
      uVar3 = DAT_70084d6c;
      *puVar11 = DAT_70084d68;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      puVar11[5] = uVar7;
      uVar7 = DAT_70084d94;
      uVar6 = DAT_70084d90;
      uVar5 = DAT_70084d8c;
      uVar4 = DAT_70084d88;
      uVar3 = DAT_70084d84;
      puVar11[6] = DAT_70084d80;
      puVar11[7] = uVar3;
      puVar11[8] = uVar4;
      puVar11[9] = uVar5;
      puVar11[10] = uVar6;
      puVar11[0xb] = uVar7;
      *(undefined1 *)(puVar11 + 0xc) = DAT_70084d98;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7171f550,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9e08);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9df8);
    if (*(char *)(iVar9 + 0x31) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x1dbd3165 >> iVar15) |
                (byte)(0x2b13558b << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0x2b13558b >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x2f < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x31) = 0;
    }
    DAT_711f6b90 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_711f6b94);
  }
                    /* WARNING: Could not recover jumptable at 0x7171cccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_711f6b90)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_7171d0c8
// Entry: 0x7171d0c8 | Size: 404 bytes
// =========================================================================

int FUN_7171d0c8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar2 = (*DAT_700f9dc8)();
  iVar1 = DAT_70c39074;
  if (((iVar2 == 0) && (param_1 != 0)) &&
     ((*(ushort *)(*(int *)(DAT_70c39074 + param_2 * 4) + 0x28) & 32000) == 0x900)) {
    bVar6 = *(int *)(param_1 + 0x668) != 0;
    iVar5 = 0;
    if (bVar6) {
      iVar5 = *(int *)(param_1 + 0x674);
    }
    if (bVar6 && iVar5 != 0) {
      uStack_2c = 0;
      uStack_30 = 0;
      uStack_34 = 0;
      uStack_38 = 0;
      uStack_3c = 0;
      uStack_40 = 0;
      uStack_44 = 0;
      uStack_48 = 0;
      uVar3 = FUN_713f9afc(*(undefined4 *)(param_1 + 0x18),3);
      FUN_7141e1ac(uVar3,FUN_7171c868,&uStack_48);
      FUN_7141e5f0(uVar3,FUN_7171cc98,&uStack_48);
      uVar4 = FUN_713f9afc(*(undefined4 *)(*(int *)(iVar1 + *(short *)(param_1 + 0x26) * 4) + 0x34),
                           3);
      DAT_711f6b98 = *(undefined4 *)(param_1 + 0x18);
      FUN_7141e1ac(uVar4,&LAB_7171f5a0,uVar3);
      uStack_2c = 0;
      uStack_30 = 0;
      uStack_34 = 0;
      uStack_38 = 0;
      uStack_3c = 0;
      uStack_40 = 0;
      uStack_44 = 0;
      uStack_48 = 0;
      uVar3 = FUN_713f9afc(*(undefined4 *)(param_1 + 0x18),6);
      FUN_7141e1ac(uVar3,FUN_7171c868,&uStack_48);
      FUN_7141e5f0(uVar3,FUN_7171cc98,&uStack_48);
      uVar4 = FUN_713f9afc(*(undefined4 *)(*(int *)(iVar1 + *(short *)(param_1 + 0x26) * 4) + 0x34),
                           6);
      DAT_711f6b98 = *(undefined4 *)(param_1 + 0x18);
      FUN_7141e1ac(uVar4,&LAB_7171f5a0,uVar3);
      return 0;
    }
  }
  return iVar2;
}


// =========================================================================
// Function: FUN_7171d4ac
// Entry: 0x7171d4ac | Size: 260 bytes
// =========================================================================

void FUN_7171d4ac(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  (*DAT_700f9dcc)();
  if (*(short *)(param_1 + 0x26) == 0x7ec) {
    iVar3 = *(int *)(DAT_70c39074 + 0x1fb0);
    iVar4 = *(int *)(*(int *)(iVar3 + 0x2c) + 0x2c);
    if ((iVar4 != 0) && ('\x03' < *(char *)(iVar4 + 6))) {
      FUN_7136cdfc(&uStack_24);
      FUN_714055ac(iVar3,0,&uStack_24,0);
      puVar1 = *(undefined4 **)(iVar4 + 0x10);
      *puVar1 = uStack_24;
      puVar1[1] = uStack_20;
      puVar1[4] = uStack_24;
      puVar1[5] = uStack_20;
      FUN_7136cdfc(&uStack_24);
      FUN_714055ac(iVar3,1,&uStack_24,0);
      iVar2 = *(int *)(iVar4 + 0x10);
      *(undefined4 *)(iVar2 + 0x20) = uStack_24;
      *(undefined4 *)(iVar2 + 0x24) = uStack_20;
      *(undefined4 *)(iVar2 + 0x30) = uStack_24;
      *(undefined4 *)(iVar2 + 0x34) = uStack_20;
      FUN_7136cdfc(&uStack_24);
      FUN_714055ac(iVar3,3,&uStack_24,0);
      iVar3 = *(int *)(iVar4 + 0x10);
      *(undefined4 *)(iVar3 + 0x60) = uStack_24;
      *(undefined4 *)(iVar3 + 100) = uStack_20;
      *(undefined4 *)(iVar3 + 0x70) = uStack_24;
      *(undefined4 *)(iVar3 + 0x74) = uStack_20;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_7171d71c
// Entry: 0x7171d71c | Size: 1240 bytes
// =========================================================================

void FUN_7171d71c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int unaff_r8;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  (*DAT_700f9dd4)();
  if (*(short *)(param_1 + 0x26) == 0x7ec) {
    iVar5 = *(int *)(param_1 + 0x6a0);
    iVar1 = 0x7ec;
    if (iVar5 != 0) {
      iVar1 = *(int *)(param_1 + 0x670);
    }
    if (iVar5 != 0 && iVar1 != 0) {
      FUN_7133f914(auStack_70,iVar5 + 0x10,0);
      uStack_80 = uStack_40;
      uStack_7c = uStack_3c;
      uStack_78 = uStack_38;
      iVar5 = *(int *)(iVar5 + 4);
      if (iVar5 != 0) {
        unaff_r8 = *(int *)(*(int *)(param_1 + 0x18) + 4);
      }
      if (iVar5 != 0 && iVar5 != unaff_r8) {
        do {
          FUN_7133f914(&uStack_d4,iVar5 + 0x10,0);
          FUN_71340b14(&uStack_8c,&uStack_d4,&uStack_80);
          FUN_7136d040(&uStack_80,&uStack_8c);
          FUN_7133fdcc(&uStack_d4);
          iVar5 = *(int *)(iVar5 + 4);
        } while (iVar5 != 0 && iVar5 != unaff_r8);
      }
      FUN_7136cdfc(&uStack_8c);
      FUN_714055ac(*(undefined4 *)(DAT_70c39074 + *(short *)(param_1 + 0x26) * 4),0,&uStack_8c,0);
      uVar6 = *(undefined4 *)((uint)&uStack_80 | 4);
      uVar2 = FUN_71ba240c(((undefined4 *)((uint)&uStack_80 | 4))[1],uStack_84);
      uStack_d8 = uVar2;
      uVar6 = FUN_71ba240c(uVar6,uStack_88);
      uStack_dc = uVar6;
      uVar3 = FUN_71ba240c(uStack_80,uStack_8c);
      uStack_e0 = uVar3;
      uVar6 = FUN_71ba21e8(uVar6,uVar6);
      uVar3 = FUN_71ba21e8(uVar3,uVar3);
      uVar6 = FUN_71ba0b38(uVar3,uVar6);
      uVar2 = FUN_71ba21e8(uVar2,uVar2);
      uVar2 = FUN_71ba0b38(uVar2,uVar6);
      iVar5 = FUN_71ba2d10(uVar2,0x38d1b717);
      if (iVar5 == 0) {
        FUN_7136ce28(&uStack_e0);
        FUN_7133f914(&uStack_d4,iVar1 + 0x10,0);
        iVar1 = FUN_71ba2d10(uStack_d4,0);
        uVar2 = 0x3f800000;
        if (iVar1 != 0) {
          uVar2 = 0xbf800000;
        }
        uVar6 = FUN_71ba21e8(uStack_d0,uVar2);
        uVar2 = FUN_71ba21e8(uStack_d4,uVar2);
        uVar2 = imp_atan2f(uVar6,uVar2);
        uStack_e4 = uStack_cc;
        uVar6 = imp_cosf(uVar2);
        uVar2 = imp_sinf(uVar2);
        uVar3 = FUN_71ba21e8(uVar2,uStack_d4);
        uVar4 = FUN_71ba21e8(uStack_d0,uVar6);
        uStack_e8 = FUN_71ba240c(uVar4,uVar3);
        uVar3 = FUN_71ba21e8(uVar2,uStack_d0);
        uVar4 = FUN_71ba21e8(uStack_d4,uVar6);
        uStack_ec = FUN_71ba0b38(uVar4,uVar3);
        FUN_7171e2a4(&uStack_f8,&uStack_ec,&uStack_e0,uVar6,uVar2);
        FUN_7136d040(&uStack_d4,&uStack_f8);
        uVar3 = FUN_71ba21e8(uVar2,uStack_c4);
        uVar4 = FUN_71ba21e8(uStack_c0,uVar6);
        uStack_e8 = FUN_71ba240c(uVar4,uVar3);
        uVar3 = FUN_71ba21e8(uVar2,uStack_c0);
        uVar4 = FUN_71ba21e8(uStack_c4,uVar6);
        uStack_ec = FUN_71ba0b38(uVar4,uVar3);
        FUN_7171e2a4(&uStack_f8,&uStack_ec,&uStack_e0,uVar6,uVar2);
        FUN_7136d040(&uStack_c4,&uStack_f8);
        uVar3 = FUN_71ba21e8(uVar2,uStack_b4);
        uVar4 = FUN_71ba21e8(uStack_b0,uVar6);
        uStack_e8 = FUN_71ba240c(uVar4,uVar3);
        uVar3 = FUN_71ba21e8(uVar2,uStack_b0);
        uVar4 = FUN_71ba21e8(uStack_b4,uVar6);
        uStack_ec = FUN_71ba0b38(uVar4,uVar3);
        FUN_7171e2a4(&uStack_f8,&uStack_ec,&uStack_e0,uVar6,uVar2);
        FUN_7136d040(&uStack_b4,&uStack_f8);
        FUN_7134217c(&uStack_d4);
        uStack_f4 = 0;
        uStack_f0 = 0;
        uStack_f8 = 0x3f800000;
        FUN_7171e2a4(&uStack_ec,&uStack_f8,&uStack_e0,uVar6,uVar2);
        FUN_7136d040(auStack_70,&uStack_ec);
        uStack_f4 = 0x3f800000;
        uStack_f0 = 0;
        uStack_f8 = 0;
        FUN_7171e2a4(&uStack_ec,&uStack_f8,&uStack_e0,uVar6,uVar2);
        FUN_7136d040(auStack_60,&uStack_ec);
        uStack_f4 = 0;
        uStack_f0 = 0x3f800000;
        uStack_f8 = 0;
        FUN_7171e2a4(&uStack_ec,&uStack_f8,&uStack_e0,uVar6,uVar2);
        FUN_7136d040(auStack_50,&uStack_ec);
        FUN_7134217c(auStack_70);
        FUN_7133fdcc(&uStack_d4);
      }
      FUN_7133fdcc(auStack_70);
      return;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_7171e2a4
// Entry: 0x7171e2a4 | Size: 352 bytes
// =========================================================================

void FUN_7171e2a4(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar1 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  FUN_7136e43c(&uStack_30,param_3,param_2);
  uVar6 = FUN_71ba21e8(uVar6,param_4);
  uVar2 = FUN_71ba21e8(uStack_28,param_5);
  uVar6 = FUN_71ba0b38(uVar6,uVar2);
  uVar2 = FUN_7136e5f4(param_3,param_2);
  uVar3 = FUN_71ba240c(0x3f800000,param_4);
  uVar2 = FUN_71ba21e8(uVar3,uVar2);
  uVar3 = *param_3;
  uVar7 = param_3[1];
  uVar4 = FUN_71ba21e8(uVar2,param_3[2]);
  uVar6 = FUN_71ba0b38(uVar6,uVar4);
  param_1[2] = uVar6;
  uVar6 = FUN_71ba21e8(uVar5,param_4);
  uVar4 = FUN_71ba21e8(uStack_2c,param_5);
  uVar6 = FUN_71ba0b38(uVar6,uVar4);
  uVar4 = FUN_71ba21e8(uVar2,uVar7);
  uVar6 = FUN_71ba0b38(uVar6,uVar4);
  param_1[1] = uVar6;
  uVar1 = FUN_71ba21e8(uVar1,param_4);
  uVar6 = FUN_71ba21e8(uStack_30,param_5);
  uVar1 = FUN_71ba0b38(uVar1,uVar6);
  uVar6 = FUN_71ba21e8(uVar3,uVar2);
  uVar1 = FUN_71ba0b38(uVar1,uVar6);
  *param_1 = uVar1;
  return;
}


// =========================================================================
// Function: FUN_7171e630
// Entry: 0x7171e630 | Size: 2108 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x7171ec54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_7171e630(void)

{
  undefined4 *puVar1;
  int iVar2;
  byte bStack_51;
  uint auStack_50 [2];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  int iStack_28;
  
  iVar2 = _ext___stack_chk_guard;
  iStack_28 = _ext___stack_chk_guard;
  DAT_700f9dc4 = *DAT_71201884 + DAT_71201880;
  DAT_71201884 = DAT_71201884 + 1;
  *DAT_7120188c = &LAB_7171c77c;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9dc8 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7171d0c8;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9d98 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7171adfc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7171aaec;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9d94 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7171ac38;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7171b000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7171b0f8;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9d90 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7171a260;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9d9c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7171b214;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9da0 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7171b3a0;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9da8 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7171b948;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9dac = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7171bc84;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9db0 = *DAT_71201884 + DAT_71201880;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7171bd54;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9db4 = *DAT_71201884 + DAT_71201880;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7171c038;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9db8 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7171c1f8;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9dbc = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7171c298;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7171c2f0;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9dc0 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7171c5f4;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7171c700;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71304d8c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7171d48c;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  uStack_3c = 0;
  uStack_44 = 0;
  uStack_34 = 0x26d5d038;
  puStack_38 = &LAB_49abac16;
  uStack_40 = 0x3a5;
  uStack_48 = 0x35e;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xab943c >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0xbb;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xab943c;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccadfa) >> 2 ^ 0xacb00a;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0xbb;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(undefined **)((auStack_50[0] ^ 0xccfc7c) + DAT_7120187c) = &DAT_70b2e958;
  DAT_700f9dcc = *DAT_71201884 + DAT_71201880 | 1;
  DAT_71201884 = DAT_71201884 + 1;
  *DAT_7120188c = FUN_7171d4ac;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9dd0 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7171d6b0;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9dd4 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7171d71c;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  if (_ext___stack_chk_guard == iVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_7171f700
// Entry: 0x7171f700 | Size: 668 bytes
// =========================================================================

int FUN_7171f700(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  int iVar13;
  uint uVar14;
  int *piVar15;
  uint uVar16;
  int iVar17;
  bool bVar18;
  uint uStack_30;
  uint uStack_2c;
  int *piStack_28;
  
  if (param_2 != 0x158) {
    return param_2;
  }
  iVar17 = 0x158;
  if (*(int *)(param_1 + *(char *)(param_1 + 0x71c) * 0x1c + 0x5a4) != 0x12) {
    return 0x158;
  }
  pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9e78);
  if (*pcVar8 == '\0') {
    puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9e68);
    *(undefined1 *)((int)puVar11 + 0x16) = 1;
    uVar6 = DAT_70084db0;
    uVar5 = DAT_70084dac;
    uVar4 = DAT_70084da8;
    uVar3 = DAT_70084da4;
    *puVar11 = DAT_70084da0;
    puVar11[1] = uVar3;
    puVar11[2] = uVar4;
    puVar11[3] = uVar5;
    puVar11[4] = uVar6;
    *(undefined2 *)(puVar11 + 5) = DAT_70084db4;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71729720,puVar11,&DAT_70b0e000);
    puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9e78);
    *puVar12 = 1;
  }
  iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9e68);
  if (*(char *)(iVar9 + 0x16) != '\0') {
    uVar10 = 0;
    uVar16 = 0;
    do {
      iVar13 = (uVar10 & 7) * 8;
      uVar14 = iVar13 - 0x20;
      bVar7 = (byte)(0x65cda327 >> iVar13) | (byte)(0x2b6d3519 << ((uVar10 & 7) * -8 + 0x20 & 0xff))
      ;
      if (-1 < (int)uVar14) {
        bVar7 = (byte)(0x2b6d3519 >> (uVar14 & 0xff));
      }
      *(byte *)(iVar9 + uVar10) = *(byte *)(iVar9 + uVar10) ^ bVar7;
      bVar18 = 0xfffffffe < uVar10;
      bVar1 = uVar16 == 0;
      bVar2 = (0x14 < uVar10) <= uVar16;
      uVar10 = uVar10 + 1;
      uVar16 = uVar16 + bVar18;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar9 + 0x16) = 0;
  }
  uVar10 = imp_strlen(iVar9);
  if (0xfffffff7 < uVar10) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_30);
  }
  if (uVar10 < 0xb) {
    piVar15 = (int *)((uint)&uStack_30 | 1);
    uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar10 << 1));
    if (uVar10 == 0) goto LAB_7171f83c;
  }
  else {
    piVar15 = (int *)thunk_MwhHq((uVar10 | 7) + 1);
    uStack_30 = (uVar10 | 7) + 2;
    uStack_2c = uVar10;
    piStack_28 = piVar15;
  }
  imp___aeabi_memmove(piVar15,iVar9,uVar10);
LAB_7171f83c:
  *(undefined1 *)((int)piVar15 + uVar10) = 0;
  iVar9 = FUN_717c5e7c(&uStack_30);
  if ((uStack_30 & 1) != 0) {
    thunk_qNQrlu(piStack_28);
  }
  if (0xfffffffd < iVar9 - 3U) {
    uVar10 = iVar9 - 3U;
    if (param_1 != 0) {
      piVar15 = (int *)&DAT_711f6d58;
      uVar10 = DAT_711f6d58;
    }
    if (param_1 != 0 && uVar10 != 0) {
      iVar13 = FUN_713c301c(0);
      if (iVar13 == param_1) {
        if (iVar9 != 2) {
          return 0x158;
        }
      }
      else {
        if (*(int *)(*piVar15 + 0xac) == 0) {
          return 0x158;
        }
        iVar9 = FUN_71796d54(*(int *)(*piVar15 + 0xac),param_1);
        if (iVar9 == 0xffff) {
          return 0x158;
        }
      }
      if (*(int *)(DAT_70b41f74 + 0x342c) == 1) {
        iVar13 = *(int *)(DAT_70c39074 + 0xa6c);
        iVar9 = 0;
        if (iVar13 != 0) {
          iVar9 = *(int *)(iVar13 + 0x2c);
        }
        if ((iVar13 != 0 && iVar9 != 0) && (iVar17 = 0x29b, *(int *)(iVar9 + 0x2c) == 0)) {
          iVar17 = 0x158;
        }
      }
      else {
        FUN_7135d734(0x29b,4);
      }
    }
  }
  return iVar17;
}


// =========================================================================
// Function: FUN_7171fc7c
// Entry: 0x7171fc7c | Size: 96 bytes
// =========================================================================

uint FUN_7171fc7c(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if ((*(int *)(param_1 + 0x500) == 0) || (*(int *)(param_1 + 0x748) != 0x29b)) {
    if (-1 < (int)param_3) {
      param_2 = param_3;
    }
    return param_2;
  }
  if (param_2 == 0xffffffff) {
    return 0x29b;
  }
  if (param_2 != 0x158 && param_2 != 0x29b) {
    uVar1 = param_2;
    if (param_2 == param_3) {
      uVar1 = 0x29b;
    }
    if (0x7fffffff < param_3) {
      uVar1 = param_2;
    }
    return uVar1;
  }
  return 0x29b;
}


// =========================================================================
// Function: FUN_7171fcf4
// Entry: 0x7171fcf4 | Size: 144 bytes
// =========================================================================

void FUN_7171fcf4(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != 0) {
    param_2 = *(int *)(param_1 + 0x500);
  }
  if ((param_1 != 0 && param_2 != 0) && (*(byte *)(param_1 + 0x71c) < 0xd)) {
    if (*(int *)(param_1 + (uint)*(byte *)(param_1 + 0x71c) * 0x1c + 0x5a4) != 0x12) {
      return;
    }
    uVar1 = FUN_715188d8(param_1,0x12);
    if (((0x7fffffff < uVar1) &&
        (iVar3 = *(int *)(param_1 + 0x748), iVar3 == 0x29b || iVar3 == 0x158)) &&
       (iVar2 = FUN_7171f700(param_1,0x158), iVar2 != iVar3)) {
      FUN_713ba3e0(param_1,0x158);
      return;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_7171fdf0
// Entry: 0x7171fdf0 | Size: 468 bytes
// =========================================================================

void FUN_7171fdf0(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9e98);
  if (*pcVar8 == '\0') {
    puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9e88);
    *(undefined1 *)((int)puVar11 + 0x16) = 1;
    uVar6 = DAT_70084dc8;
    uVar5 = DAT_70084dc4;
    uVar4 = DAT_70084dc0;
    uVar3 = DAT_70084dbc;
    *puVar11 = DAT_70084db8;
    puVar11[1] = uVar3;
    puVar11[2] = uVar4;
    puVar11[3] = uVar5;
    puVar11[4] = uVar6;
    *(undefined2 *)(puVar11 + 5) = DAT_70084dcc;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71729758,puVar11,&DAT_70b0e000);
    puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9e98);
    *puVar12 = 1;
  }
  iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9e88);
  if (*(char *)(iVar9 + 0x16) != '\0') {
    uVar10 = 0;
    uVar13 = 0;
    do {
      iVar14 = (uVar10 & 7) * 8;
      uVar15 = iVar14 - 0x20;
      bVar7 = (byte)(0xf7f7567 >> iVar14) | (byte)(0x1901a1eb << ((uVar10 & 7) * -8 + 0x20 & 0xff));
      if (-1 < (int)uVar15) {
        bVar7 = (byte)(0x1901a1eb >> (uVar15 & 0xff));
      }
      *(byte *)(iVar9 + uVar10) = *(byte *)(iVar9 + uVar10) ^ bVar7;
      bVar16 = 0xfffffffe < uVar10;
      bVar1 = uVar13 == 0;
      bVar2 = (0x14 < uVar10) <= uVar13;
      uVar10 = uVar10 + 1;
      uVar13 = uVar13 + bVar16;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar9 + 0x16) = 0;
  }
  uVar10 = imp_strlen(iVar9);
  if (0xfffffff7 < uVar10) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_2c);
  }
  if (uVar10 < 0xb) {
    uVar13 = (uint)&uStack_2c | 1;
    uStack_2c = CONCAT31(uStack_2c._1_3_,(char)(uVar10 << 1));
    if (uVar10 == 0) goto LAB_7171fefc;
  }
  else {
    uVar13 = thunk_MwhHq((uVar10 | 7) + 1);
    uStack_2c = (uVar10 | 7) + 2;
    uStack_28 = uVar10;
    uStack_24 = uVar13;
  }
  imp___aeabi_memmove(uVar13,iVar9,uVar10);
LAB_7171fefc:
  *(undefined1 *)(uVar13 + uVar10) = 0;
  iVar9 = FUN_717c5e7c(&uStack_2c);
  if ((uStack_2c & 1) != 0) {
    thunk_qNQrlu(uStack_24);
  }
  if ((iVar9 - 1U < 2) && (*(int *)(DAT_70b41f74 + 0x342c) != 1)) {
    FUN_7135d734(0x29b,4);
  }
  return;
}


// =========================================================================
// Function: FUN_7172022c
// Entry: 0x7172022c | Size: 220 bytes
// =========================================================================

undefined8
FUN_7172022c(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 == 0x12) {
    iVar1 = FUN_71720394(param_1,1,0);
    if ((iVar1 != 0) && ((*(byte *)(param_1 + 0x485) & 1) == 0)) {
      iVar1 = FUN_713c301c(0);
      if (iVar1 != param_1) {
        return CONCAT44(iVar1,1);
      }
      uVar2 = FUN_71720864(param_1,param_3,param_4,param_5,param_6,param_7,param_8,0);
      return uVar2;
    }
  }
  uVar2 = (*DAT_700f9e18)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}


// =========================================================================
// Function: FUN_71720394
// Entry: 0x71720394 | Size: 588 bytes
// =========================================================================

bool FUN_71720394(int param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  if (param_1 == 0) {
    return false;
  }
  if (param_2 != 1) {
    return false;
  }
  bVar7 = 1;
  if (param_3 == 0) {
    bVar7 = *(byte *)(param_1 + 0x3a) & 7;
  }
  if (param_3 != 0 || bVar7 != 3) {
    return false;
  }
  if (DAT_711f6d58 == 0) {
    return false;
  }
  pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9eb8);
  if (*pcVar8 == '\0') {
    puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9ea8);
    *(undefined1 *)((int)puVar11 + 0x16) = 1;
    uVar6 = DAT_70084de0;
    uVar5 = DAT_70084ddc;
    uVar4 = DAT_70084dd8;
    uVar3 = DAT_70084dd4;
    *puVar11 = DAT_70084dd0;
    puVar11[1] = uVar3;
    puVar11[2] = uVar4;
    puVar11[3] = uVar5;
    puVar11[4] = uVar6;
    *(undefined2 *)(puVar11 + 5) = DAT_70084de4;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71729790,puVar11,&DAT_70b0e000);
    puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9eb8);
    *puVar12 = 1;
  }
  iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9ea8);
  if (*(char *)(iVar9 + 0x16) != '\0') {
    uVar10 = 0;
    uVar15 = 0;
    do {
      iVar13 = (uVar10 & 7) * 8;
      uVar14 = iVar13 - 0x20;
      bVar7 = (byte)(0xdd55518f >> iVar13) |
              (byte)(-0x124264cb << ((uVar10 & 7) * -8 + 0x20 & 0xff));
      if (-1 < (int)uVar14) {
        bVar7 = (byte)(0xedbd9b35 >> (uVar14 & 0xff));
      }
      *(byte *)(iVar9 + uVar10) = *(byte *)(iVar9 + uVar10) ^ bVar7;
      bVar16 = 0xfffffffe < uVar10;
      bVar1 = uVar15 == 0;
      bVar2 = (0x14 < uVar10) <= uVar15;
      uVar10 = uVar10 + 1;
      uVar15 = uVar15 + bVar16;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar9 + 0x16) = 0;
  }
  uVar10 = imp_strlen(iVar9);
  if (0xfffffff7 < uVar10) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_30);
  }
  if (uVar10 < 0xb) {
    uVar15 = (uint)&uStack_30 | 1;
    uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar10 << 1));
    if (uVar10 == 0) goto LAB_717204e8;
  }
  else {
    uVar15 = thunk_MwhHq((uVar10 | 7) + 1);
    uStack_30 = (uVar10 | 7) + 2;
    uStack_2c = uVar10;
    uStack_28 = uVar15;
  }
  imp___aeabi_memmove(uVar15,iVar9,uVar10);
LAB_717204e8:
  *(undefined1 *)(uVar15 + uVar10) = 0;
  iVar9 = FUN_717c5e7c(&uStack_30);
  if ((uStack_30 & 1) != 0) {
    thunk_qNQrlu(uStack_28);
  }
  if (0xfffffffd < iVar9 - 3U) {
    iVar13 = FUN_713c301c(0);
    if (iVar13 == param_1) {
      return iVar9 == 2;
    }
    if (*(int *)(DAT_711f6d58 + 0xac) != 0) {
      iVar9 = FUN_71796d54(*(int *)(DAT_711f6d58 + 0xac),param_1);
      return iVar9 != 0xffff;
    }
  }
  return false;
}


// =========================================================================
// Function: FUN_71720864
// Entry: 0x71720864 | Size: 1568 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71720864(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  undefined1 *puVar11;
  int iVar12;
  int extraout_r2;
  uint uVar13;
  uint unaff_r4;
  uint uVar14;
  undefined4 *puVar15;
  uint uVar16;
  int *piVar17;
  bool bVar18;
  bool bVar19;
  undefined4 uStack_208;
  undefined1 auStack_204 [12];
  int aiStack_1f8 [32];
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined1 auStack_169 [3];
  undefined4 *puStack_166;
  undefined4 uStack_157;
  undefined4 uStack_142;
  undefined4 uStack_13e;
  undefined4 uStack_13a;
  undefined4 uStack_136;
  undefined4 uStack_132;
  undefined4 uStack_12e;
  undefined4 uStack_40;
  char cStack_3c;
  int iStack_30;
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  DataMemoryBarrier(0xb);
  uStack_178 = param_2;
  uStack_174 = param_3;
  uStack_170 = param_4;
  if (((DAT_711f6bac & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711f6bac), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9ed8);
    if (*pcVar10 == '\0') {
      puVar15 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9ec8);
      unaff_r4 = 1;
      *(undefined1 *)((int)puVar15 + 0x21) = 1;
      uVar4 = DAT_70084df4;
      uVar3 = DAT_70084df0;
      uVar2 = DAT_70084dec;
      *puVar15 = DAT_70084de8;
      puVar15[1] = uVar2;
      puVar15[2] = uVar3;
      puVar15[3] = uVar4;
      uVar4 = DAT_70084e04;
      uVar3 = DAT_70084e00;
      uVar2 = DAT_70084dfc;
      puVar15[4] = DAT_70084df8;
      puVar15[5] = uVar2;
      puVar15[6] = uVar3;
      puVar15[7] = uVar4;
      *(undefined1 *)(puVar15 + 8) = DAT_70084e08;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7172ade0,puVar15,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9ed8);
      *puVar11 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9ec8);
    if (*(char *)(iVar9 + 0x21) != '\0') {
      uVar13 = 0;
      uVar16 = 0;
      do {
        iVar6 = (uVar13 & 7) * 8;
        unaff_r4 = 0x3d7987fd >> iVar6;
        uVar14 = iVar6 - 0x20;
        bVar5 = (byte)unaff_r4 | (byte)(-0x72486a8d << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar5 = (byte)(0x8db79573 >> (uVar14 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar5;
        bVar19 = 0xfffffffe < uVar13;
        bVar18 = uVar16 == 0;
        bVar1 = (0x1f < uVar13) <= uVar16;
        uVar13 = uVar13 + 1;
        uVar16 = uVar16 + bVar19;
      } while (bVar18 && bVar1);
      *(undefined1 *)(iVar9 + 0x21) = 0;
    }
    DAT_711f6ba8 = FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_711f6bac);
  }
  DataMemoryBarrier(0xb);
  if (((DAT_711f6bb4 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711f6bb4), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9ef8);
    if (*pcVar10 == '\0') {
      puVar15 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9ee8);
      unaff_r4 = 1;
      *(undefined1 *)((int)puVar15 + 0x11) = 1;
      uVar4 = DAT_70084e1c;
      uVar3 = DAT_70084e18;
      uVar2 = DAT_70084e14;
      *puVar15 = DAT_70084e10;
      puVar15[1] = uVar2;
      puVar15[2] = uVar3;
      puVar15[3] = uVar4;
      *(undefined1 *)(puVar15 + 4) = DAT_70084e20;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7172ae30,puVar15,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9ef8);
      *puVar11 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9ee8);
    if (*(char *)(iVar9 + 0x11) != '\0') {
      uVar13 = 0;
      uVar16 = 0;
      do {
        iVar6 = (uVar13 & 7) * 8;
        unaff_r4 = 0xb371bf99 >> iVar6;
        uVar14 = iVar6 - 0x20;
        bVar5 = (byte)unaff_r4 | (byte)(0x6b9d49c7 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar5 = (byte)(0x6b9d49c7 >> (uVar14 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar5;
        bVar19 = 0xfffffffe < uVar13;
        bVar18 = uVar16 == 0;
        bVar1 = (0xf < uVar13) <= uVar16;
        uVar13 = uVar13 + 1;
        uVar16 = uVar16 + bVar19;
      } while (bVar18 && bVar1);
      *(undefined1 *)(iVar9 + 0x11) = 0;
    }
    DAT_711f6bb0 = FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_711f6bb4);
  }
  iVar9 = DAT_711f6ba8;
  iVar6 = 0;
  if (DAT_711f6ba8 != 0) {
    unaff_r4 = DAT_711f6bb0;
  }
  if (DAT_711f6ba8 != 0 && unaff_r4 != 0) {
    imp___aeabi_memcpy4(aiStack_1f8,DAT_711f6ba8,0x80);
    iVar7 = FUN_713db648(0x12,1);
    bVar18 = false;
    if (iVar7 == 0) {
      uStack_208 = 0xffffffff;
    }
    else {
      uStack_208 = *(undefined4 *)(iVar7 + 0xc);
      if (*(int *)(DAT_70b41f74 + 0x342c) == 1) {
        iVar8 = *(int *)(DAT_70c39074 + 0xa6c);
        iVar6 = 0;
        if (iVar8 != 0) {
          iVar6 = *(int *)(iVar8 + 0x2c);
        }
        if ((iVar8 != 0 && iVar6 != 0) && (bVar18 = *(int *)(iVar6 + 0x2c) != 0, bVar18)) {
          *(undefined4 *)(iVar7 + 0xc) = 0x29b;
        }
      }
      else {
        FUN_7135d734(0x29b,4);
      }
    }
    iVar6 = (*DAT_700f9e18)(param_1,0x12,uStack_178,uStack_174,uStack_170,param_5,param_6,param_7);
    if (bVar18) {
      *(undefined4 *)(iVar7 + 0xc) = uStack_208;
    }
    if (iVar6 != 0) {
      piVar17 = (int *)(unaff_r4 + 0xc);
      iVar8 = 0;
      iVar7 = extraout_r2;
      do {
        iVar12 = *(int *)(iVar9 + iVar8);
        if (iVar12 != 0) {
          iVar7 = *(int *)((int)aiStack_1f8 + iVar8);
        }
        if ((iVar12 != 0 && iVar12 != iVar7) &&
           (iVar7 = unaff_r4 + iVar8 * 9, *(char *)(iVar7 + 0x10) != '\0')) {
          iVar7 = *(int *)(iVar7 + 4);
          bVar18 = iVar7 == param_1;
          if (bVar18) {
            iVar7 = piVar17[-3];
          }
          if (bVar18 && iVar7 == 0x12) {
            uVar13 = *(uint *)(iVar12 + 0x1c) & 0xffffff7f;
            if (*(short *)(iVar12 + 0x26) == 0x29b) {
              uVar13 = uVar13 | 0x80;
            }
            *(uint *)(iVar12 + 0x1c) = uVar13;
            if (param_8 == 0) {
              FUN_7136cdfc(auStack_204);
              iVar12 = *(int *)(*(int *)(iVar9 + iVar8) + 0x14);
              iVar7 = iVar12 + 0x30;
              if (iVar12 == 0) {
                iVar7 = *(int *)(iVar9 + iVar8) + 4;
              }
              iVar7 = FUN_717297c8(param_1,iVar7,auStack_204);
              if (iVar7 != 0) {
                FUN_7136d040(*(int *)(iVar9 + iVar8) + 0x48,auStack_204);
              }
              iVar9 = *(int *)(iVar9 + iVar8);
              cStack_3c = '\x01';
              puStack_166 = &uStack_142;
              iStack_30 = 0x800;
              puVar15 = (undefined4 *)(*(int *)(iVar9 + 0x14) + 0x30);
              if (*(int *)(iVar9 + 0x14) == 0) {
                puVar15 = (undefined4 *)(iVar9 + 4);
              }
              uStack_40 = 0;
              uStack_142 = *puVar15;
              uStack_13e = puVar15[1];
              uStack_13a = puVar15[2];
              uStack_157 = 0xc0;
              uStack_136 = *(undefined4 *)(iVar9 + 0x48);
              uStack_132 = *(undefined4 *)(iVar9 + 0x4c);
              uStack_12e = *(undefined4 *)(iVar9 + 0x50);
              (**(code **)(*(int *)*DAT_711f6d58 + 0x94))
                        ((int *)*DAT_711f6d58,0x1e,auStack_169,1,9,0,0,0xffffffff,0xffff,0xffff,0,0)
              ;
              if ((cStack_3c != '\0') && (0x800 < iStack_30)) {
                imp_free(puStack_166);
              }
            }
            else {
              iVar12 = *(int *)(*(int *)(iVar9 + iVar8) + 0x14);
              iVar7 = iVar12 + 0x30;
              if (iVar12 == 0) {
                iVar7 = *(int *)(iVar9 + iVar8) + 4;
              }
              FUN_7136d040(iVar7,&uStack_178);
              FUN_7136d040(*(int *)(iVar9 + iVar8) + 0x48,param_8);
              FUN_7136d040(piVar17 + 2,&uStack_178);
            }
            *piVar17 = *DAT_70b4204c + 10000;
            break;
          }
        }
        iVar8 = iVar8 + 4;
        piVar17 = piVar17 + 9;
      } while (iVar8 != 0x80);
    }
  }
  if (_ext___stack_chk_guard != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail(iVar6);
  }
  return;
}


// =========================================================================
// Function: FUN_71721c78
// Entry: 0x71721c78 | Size: 272 bytes
// =========================================================================

int FUN_71721c78(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                undefined4 param_9,int param_10)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar1 = DAT_711f6b9c;
  iVar2 = FUN_71720394(param_2,param_3,param_7);
  DAT_711f6b9c = (char)iVar2;
  if (iVar2 != 0) {
    param_3 = 8;
  }
  iVar2 = (*DAT_700f9e1c)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                          param_10);
  if (((iVar2 != 0) && (param_10 == 0)) && (DAT_711f6b9c != '\0')) {
    uStack_28 = param_6;
    uStack_2c = param_5;
    uStack_30 = param_4;
    iVar3 = FUN_7144d354(DAT_70ffd280,s_explosion_small_70063411,&uStack_30,0,1);
    if (iVar3 != 0) {
      FUN_7144f1b8();
    }
  }
  DAT_711f6b9c = uVar1;
  return iVar2;
}


// =========================================================================
// Function: FUN_71721e74
// Entry: 0x71721e74 | Size: 84 bytes
// =========================================================================

void FUN_71721e74(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  if (DAT_711f6b9c != '\0') {
    param_2 = 0x40a00000;
  }
  (*DAT_700f9e20)(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}


// =========================================================================
// Function: FUN_71721f20
// Entry: 0x71721f20 | Size: 620 bytes
// =========================================================================

void FUN_71721f20(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_r9;
  int unaff_r10;
  undefined4 *puVar6;
  
  iVar1 = FUN_713c301c(0);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x18) == param_1)) {
    uVar2 = FUN_717223c0(iVar1,iVar1 + 0x5a4 + *(char *)(iVar1 + 0x71c) * 0x1c);
    iVar3 = FUN_71ba2d70(uVar2,0x3f800000);
    if (iVar3 != 0) {
      unaff_r10 = *(int *)(iVar1 + 0x440);
    }
    if (iVar3 != 0 && unaff_r10 != 0) {
      iVar4 = FUN_713c067c(unaff_r10);
      iVar3 = 0;
      if (iVar4 != 0) {
        iVar3 = *(int *)(iVar4 + 0x2c);
        unaff_r9 = iVar4;
      }
      if (((((iVar4 != 0 && iVar3 != 0) &&
            (iVar4 = *(int *)(unaff_r9 + 0x30),
            iVar3 = FUN_713dacc4(iVar1 + 0x5a4 + *(char *)(iVar1 + 0x71c) * 0x1c,iVar1),
            iVar4 == iVar3)) &&
           (iVar3 = *(int *)(unaff_r9 + 0x2c), (*(ushort *)(iVar3 + 0x2c) & 0xfffe) == 0xe0)) ||
          ((iVar4 = FUN_713c0a98(unaff_r10), iVar4 != 0 &&
           ((((((iVar3 = FUN_71308114(*(undefined4 *)(iVar1 + 0x18),0xd6), iVar3 != 0 &&
                (*(int *)(iVar3 + 0x38) == iVar4)) ||
               ((iVar3 = FUN_71308114(*(undefined4 *)(iVar1 + 0x18),0xd7), iVar3 != 0 &&
                (*(int *)(iVar3 + 0x38) == iVar4)))) ||
              ((iVar3 = FUN_71308114(*(undefined4 *)(iVar1 + 0x18),0xd8), iVar3 != 0 &&
               (*(int *)(iVar3 + 0x38) == iVar4)))) ||
             ((iVar3 = FUN_71308114(*(undefined4 *)(iVar1 + 0x18),0xd9), iVar3 != 0 &&
              (*(int *)(iVar3 + 0x38) == iVar4)))) ||
            ((iVar3 = FUN_71308114(*(undefined4 *)(iVar1 + 0x18),0xda), iVar3 != 0 &&
             (*(int *)(iVar3 + 0x38) == iVar4)))))))) && ((*(ushort *)(iVar3 + 0x2e) & 1) != 0)) {
        puVar6 = (undefined4 *)(iVar3 + 0x24);
        uVar5 = *puVar6;
        iVar1 = FUN_71ba2d70(uVar5,0);
        if (iVar1 != 0) {
          uVar2 = FUN_71ba21e8(uVar2,uVar5);
          iVar1 = FUN_71ba2cf0(uVar2,0x7f800000);
          iVar4 = FUN_71ba0408(uVar2,0x7f800000);
          if (iVar4 == 0 && iVar1 == 0) {
            *puVar6 = uVar2;
            (*DAT_700f9e24)(param_1,param_2,param_3);
            iVar1 = FUN_713078cc(param_1);
            while( true ) {
              if (iVar1 == 0) {
                return;
              }
              if (iVar1 == iVar3) break;
              iVar1 = FUN_71307cf0();
            }
            *puVar6 = uVar5;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x71721fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_700f9e24)(param_1,param_2,param_3);
  return;
}


// =========================================================================
// Function: FUN_717223c0
// Entry: 0x717223c0 | Size: 1080 bytes
// =========================================================================

undefined4 FUN_717223c0(uint param_1,undefined4 *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  uint *puVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  bool bVar16;
  bool bVar17;
  byte abStack_48 [4];
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  if (param_1 == 0 || param_2 == (undefined4 *)0x0) {
    return 0x3f800000;
  }
  uVar5 = FUN_713c301c(0);
  bVar16 = uVar5 == param_1;
  if (bVar16) {
    uVar5 = (uint)*(byte *)(param_1 + 0x485);
  }
  if (!bVar16 || (uVar5 & 1) != 0) {
    return 0x3f800000;
  }
  pcVar6 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9f18);
  if (*pcVar6 == '\0') {
    puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9f08);
    *(undefined1 *)((int)puVar10 + 0x16) = 1;
    uVar3 = DAT_70084e38;
    uVar2 = DAT_70084e34;
    uVar15 = DAT_70084e30;
    uVar9 = DAT_70084e2c;
    *puVar10 = DAT_70084e28;
    puVar10[1] = uVar9;
    puVar10[2] = uVar15;
    puVar10[3] = uVar2;
    puVar10[4] = uVar3;
    *(undefined2 *)(puVar10 + 5) = DAT_70084e3c;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_7172ae64,puVar10,&DAT_70b0e000);
    puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9f18);
    *puVar11 = 1;
  }
  iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9f08);
  if (*(char *)(iVar7 + 0x16) != '\0') {
    uVar5 = 0;
    uVar14 = 0;
    do {
      iVar12 = (uVar5 & 7) * 8;
      uVar13 = iVar12 - 0x20;
      bVar4 = (byte)(0x251b4bd3 >> iVar12) | (byte)(0x375be3f5 << ((uVar5 & 7) * -8 + 0x20 & 0xff));
      if (-1 < (int)uVar13) {
        bVar4 = (byte)(0x375be3f5 >> (uVar13 & 0xff));
      }
      *(byte *)(iVar7 + uVar5) = *(byte *)(iVar7 + uVar5) ^ bVar4;
      bVar17 = 0xfffffffe < uVar5;
      bVar16 = uVar14 == 0;
      bVar1 = (0x14 < uVar5) <= uVar14;
      uVar5 = uVar5 + 1;
      uVar14 = uVar14 + bVar17;
    } while (bVar16 && bVar1);
    *(undefined1 *)(iVar7 + 0x16) = 0;
  }
  uVar5 = imp_strlen(iVar7);
  if (0xfffffff7 < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_30);
  }
  if (uVar5 < 0xb) {
    uVar14 = (uint)&uStack_30 | 1;
    uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar5 << 1));
    if (uVar5 != 0) goto LAB_717224f8;
  }
  else {
    uVar14 = thunk_MwhHq((uVar5 | 7) + 1);
    uStack_30 = (uVar5 | 7) + 2;
    uStack_2c = uVar5;
    uStack_28 = uVar14;
LAB_717224f8:
    imp___aeabi_memmove(uVar14,iVar7,uVar5);
  }
  *(undefined1 *)(uVar14 + uVar5) = 0;
  iVar7 = FUN_717c5e7c(&uStack_30);
  if ((uStack_30 & 1) != 0) {
    thunk_qNQrlu(uStack_28);
  }
  if (iVar7 != 1) {
    return 0x3f800000;
  }
  pcVar6 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9f38);
  if (*pcVar6 == '\0') {
    puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9f28);
    *(undefined1 *)((int)puVar10 + 0x1d) = 1;
    uVar15 = DAT_70084e48;
    uVar9 = DAT_70084e44;
    *puVar10 = DAT_70084e40;
    puVar10[1] = uVar9;
    puVar10[2] = uVar15;
    uVar2 = DAT_70084e58;
    uVar15 = DAT_70084e54;
    uVar9 = DAT_70084e50;
    puVar10[3] = DAT_70084e4c;
    puVar10[4] = uVar9;
    puVar10[5] = uVar15;
    puVar10[6] = uVar2;
    *(undefined1 *)(puVar10 + 7) = DAT_70084e5c;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_7172ae9c,puVar10,&DAT_70b0e000);
    puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9f38);
    *puVar11 = 1;
  }
  iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9f28);
  if (*(char *)(iVar7 + 0x1d) != '\0') {
    uVar5 = 0;
    uVar14 = 0;
    do {
      iVar12 = (uVar5 & 7) * 8;
      uVar13 = iVar12 - 0x20;
      bVar4 = (byte)(0x79ed6321 >> iVar12) | (byte)(-0x4836681f << ((uVar5 & 7) * -8 + 0x20 & 0xff))
      ;
      if (-1 < (int)uVar13) {
        bVar4 = (byte)(0xb7c997e1 >> (uVar13 & 0xff));
      }
      *(byte *)(iVar7 + uVar5) = *(byte *)(iVar7 + uVar5) ^ bVar4;
      bVar17 = 0xfffffffe < uVar5;
      bVar16 = uVar14 == 0;
      bVar1 = (0x1b < uVar5) <= uVar14;
      uVar5 = uVar5 + 1;
      uVar14 = uVar14 + bVar17;
    } while (bVar16 && bVar1);
    *(undefined1 *)(iVar7 + 0x1d) = 0;
  }
  uVar5 = imp_strlen(iVar7);
  if (0xfffffff7 < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_3c);
  }
  if (uVar5 < 0xb) {
    uVar14 = (uint)&uStack_3c | 1;
    uStack_3c = CONCAT31(uStack_3c._1_3_,(char)(uVar5 << 1));
    if (uVar5 == 0) goto LAB_71722638;
  }
  else {
    uVar14 = thunk_MwhHq((uVar5 | 7) + 1);
    uStack_3c = (uVar5 | 7) + 2;
    uStack_38 = uVar5;
    uStack_34 = uVar14;
  }
  imp___aeabi_memmove(uVar14,iVar7,uVar5);
LAB_71722638:
  *(undefined1 *)(uVar14 + uVar5) = 0;
  thunk_JTLCYfEcbCeQVXSyFtQFASTx(abStack_48,*param_2);
  uVar5 = uStack_40;
  if ((abStack_48[0] & 1) == 0) {
    uStack_44 = (uint)(abStack_48[0] >> 1);
    uVar5 = (uint)abStack_48 | 1;
  }
  puVar8 = (uint *)thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
                             (&uStack_3c,uVar5,uStack_44);
  uStack_30 = *puVar8;
  uStack_2c = puVar8[1];
  uStack_28 = puVar8[2];
  *puVar8 = 0;
  puVar8[1] = 0;
  puVar8[2] = 0;
  uVar9 = FUN_717c5f90(&uStack_30);
  if ((uStack_30 & 1) != 0) {
    thunk_qNQrlu(uStack_28);
  }
  if ((abStack_48[0] & 1) != 0) {
    thunk_qNQrlu(uStack_40);
  }
  if ((uStack_3c & 1) != 0) {
    thunk_qNQrlu(uStack_34);
  }
  iVar7 = FUN_71ba2d70(uVar9,0);
  uVar15 = 0x3f800000;
  if (iVar7 != 0) {
    uVar9 = FUN_71ba0b38(uVar9,0x3f800000);
    iVar7 = FUN_71ba2cf0(uVar9,0x7f800000);
    iVar12 = FUN_71ba0408(uVar9,0x7f800000);
    uVar15 = 0x3f800000;
    if (iVar12 == 0 && iVar7 == 0) {
      uVar15 = uVar9;
    }
  }
  return uVar15;
}


// =========================================================================
// Function: FUN_71722d34
// Entry: 0x71722d34 | Size: 692 bytes
// =========================================================================

void FUN_71722d34(int param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int *unaff_r7;
  undefined4 uVar13;
  undefined4 uVar14;
  bool bVar15;
  undefined8 uVar16;
  
  if (param_2 == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = param_2 + *(char *)(param_2 + 0x71c) * 0x1c + 0x5a4;
  }
  uVar16 = FUN_715b9eec(param_2,iVar10);
  iVar10 = (int)((ulonglong)uVar16 >> 0x20);
  iVar4 = (int)uVar16;
  if (iVar4 != 0) {
    unaff_r7 = *(int **)(param_1 + 0x30);
  }
  if (iVar4 != 0 && unaff_r7 != (int *)0x0) {
    iVar12 = *(int *)(param_1 + 0x2c);
    if (iVar12 != 0) {
      iVar10 = *(int *)(iVar12 + 0x14);
    }
    if ((iVar12 != 0 && iVar10 != 0) && (*unaff_r7 == 1)) {
      bVar1 = *(byte *)((int)unaff_r7 + 0x19);
      bVar15 = (bVar1 & 4) == 0;
      if (bVar15) {
        bVar1 = *(byte *)(param_1 + 8);
      }
      if ((((bVar15 && bVar1 == 0) && (*(char *)(param_1 + 9) != '\0')) &&
          ((*(byte *)(param_1 + 0x10) & 0xfe) == 2)) &&
         (((*(ushort *)(iVar12 + 0x2e) & 1) != 0 &&
          (iVar10 = FUN_71ba2d10(*(undefined4 *)(iVar12 + 0x1c),0), iVar10 == 0)))) {
        iVar10 = 0x50;
        uVar5 = *(uint *)(param_2 + 0x484) & 0x4000000;
        iVar6 = 0x54;
        if (uVar5 == 0) {
          iVar10 = 0x44;
          iVar6 = 0x48;
        }
        uVar7 = FUN_71ba0b38(*(undefined4 *)((int)unaff_r7 + iVar6),0x3c23d70a);
        uVar11 = *(undefined4 *)((int)unaff_r7 + iVar10);
        iVar10 = FUN_71ba2d10();
        iVar6 = 0x4c;
        if (uVar5 == 0) {
          iVar6 = 0x40;
        }
        uVar8 = *(undefined4 *)((int)unaff_r7 + iVar6);
        uVar13 = *(undefined4 *)(iVar12 + 0x24);
        uVar9 = FUN_717223c0(param_2,param_2 + *(char *)(param_2 + 0x71c) * 0x1c + 0x5a4);
        uVar9 = FUN_71ba21e8(uVar13,uVar9);
        uVar14 = *(undefined4 *)(iVar12 + 0x20);
        uVar13 = FUN_71ba240c(uVar14,*(undefined4 *)(iVar12 + 0x28));
        if (((iVar10 != 0) && (iVar10 = FUN_71ba2d70(uVar11,uVar8), iVar10 != 0)) &&
           ((iVar10 = FUN_71ba2d50(uVar7,uVar8), iVar10 != 0 &&
            ((iVar10 = FUN_71ba2d70(uVar14,uVar7), iVar10 != 0 &&
             (uVar16 = FUN_71ba2d30(uVar13,uVar7), uVar3 = DAT_70b4205c, uVar2 = DAT_70b42058,
             (int)uVar16 != 0)))))) {
          uVar14 = FUN_71723238(iVar4,(int)((ulonglong)uVar16 >> 0x20),DAT_70b42058,DAT_70b4205c,
                                uVar7,uVar14,uVar9);
          iVar10 = FUN_71ba2d10(uVar14,*(undefined4 *)(iVar12 + 0x20));
          if (iVar10 != 0) {
            FUN_71302b74(iVar12,uVar14);
            uVar13 = FUN_71ba240c(uVar14,uVar13);
            iVar10 = FUN_71ba2d10(uVar13,0);
            if (iVar10 != 0) {
              uVar13 = 0;
            }
            *(undefined4 *)(iVar12 + 0x28) = uVar13;
          }
          uVar16 = FUN_71ba2d70(uVar14,uVar7);
          if ((int)uVar16 != 0) {
            FUN_717234e8(iVar4,(int)((ulonglong)uVar16 >> 0x20),uVar2,uVar3,uVar8,uVar11,uVar7,
                         uVar14,uVar9);
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x71722db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_700f9e28)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_71723238
// Entry: 0x71723238 | Size: 300 bytes
// =========================================================================

undefined4
FUN_71723238(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  iVar1 = FUN_71ba2d70(param_7,0);
  if (iVar1 != 0) {
    iVar1 = FUN_71ba2cf0(param_7,0x7f800000);
    iVar2 = FUN_71ba0408(param_7,0x7f800000);
    if (iVar2 == 0 && iVar1 == 0) {
      uVar3 = param_1[1];
      uVar4 = *param_1;
      iVar1 = FUN_71ba2c9c(uVar4,uVar3,0,0);
      if (iVar1 != 0) {
        uVar5 = FUN_71ba23ec(param_3,param_4,uVar4,uVar3);
        iVar1 = FUN_71ba2c3c((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0,0);
        if (iVar1 != 0) {
          uVar5 = 0;
        }
        uVar6 = FUN_71ba1638(param_7);
        FUN_71ba1ea0((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(int)uVar6,
                     (int)((ulonglong)uVar6 >> 0x20));
        uVar3 = FUN_71ba242c();
        uVar3 = FUN_71ba0b38(uVar3,param_5);
        iVar1 = FUN_71ba2d70(uVar3,param_5);
        if (iVar1 == 0) {
          uVar3 = imp_nextafterf(param_5,0xff800000);
        }
        iVar1 = FUN_71ba2d10(uVar3,param_6);
        if (iVar1 != 0) {
          param_6 = uVar3;
        }
      }
    }
  }
  return param_6;
}


// =========================================================================
// Function: FUN_717234e8
// Entry: 0x717234e8 | Size: 440 bytes
// =========================================================================

void FUN_717234e8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  *(undefined1 *)(param_1 + 0x20) = 0;
  iVar1 = FUN_71ba2d70(param_9,0);
  if (iVar1 != 0) {
    iVar1 = FUN_71ba2d70(param_6,param_5);
    if (iVar1 != 0) {
      iVar1 = FUN_71ba2cf0(param_9,0x7f800000);
      iVar2 = FUN_71ba0408(param_9,0x7f800000);
      if (iVar2 == 0 && iVar1 == 0) {
        FUN_71ba240c(param_6,param_5);
        uVar7 = FUN_71ba1638();
        uVar8 = FUN_71ba1638(param_9);
        uVar5 = (undefined4)((ulonglong)uVar8 >> 0x20);
        uVar7 = FUN_71ba0f98((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar8,uVar5);
        uVar6 = (uint)((ulonglong)uVar7 >> 0x20) & 0x7fffffff;
        iVar1 = FUN_71ba2c1c((int)uVar7,uVar6,0,0x7ff00000);
        iVar2 = FUN_71ba0f44((int)uVar7,uVar6,0,0x7ff00000);
        uVar3 = FUN_71ba240c(param_8,param_7);
        iVar4 = FUN_71ba2d10(uVar3,0);
        if (iVar4 != 0) {
          uVar3 = 0;
        }
        uVar9 = FUN_71ba1638(uVar3);
        uVar8 = FUN_71ba0f98((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),(int)uVar8,uVar5);
        if (iVar2 == 0 && iVar1 == 0) {
          uVar6 = (uint)((ulonglong)uVar8 >> 0x20) & 0x7fffffff;
          iVar1 = FUN_71ba2c1c((int)uVar8,uVar6,0,0x7ff00000);
          iVar2 = FUN_71ba0f44((int)uVar8,uVar6,0,0x7ff00000);
          if (iVar2 == 0 && iVar1 == 0) {
            *(undefined1 *)(param_1 + 0x20) = 1;
            *(undefined4 *)(param_1 + 8) = param_3;
            *(undefined4 *)(param_1 + 0xc) = param_4;
            *(undefined8 *)(param_1 + 0x10) = uVar7;
            *(undefined8 *)(param_1 + 0x18) = uVar8;
          }
        }
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71723878
// Entry: 0x71723878 | Size: 1124 bytes
// =========================================================================

uint FUN_71723878(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  char *pcVar5;
  undefined4 *puVar6;
  uint *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  bool bVar18;
  bool bVar19;
  undefined8 uVar20;
  undefined1 *puStack_70;
  int *piStack_6c;
  undefined4 *puStack_68;
  int *piStack_64;
  undefined4 *puStack_60;
  undefined4 *puStack_5c;
  undefined1 uStack_41;
  int iStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  if (param_2 == 0) {
    iVar12 = 0;
  }
  else {
    iVar12 = param_2;
    if ((*(byte *)(param_2 + 0x3a) & 7) != 3) {
      iVar12 = 0;
    }
  }
  iStack_38 = iVar12;
  uStack_34 = param_4;
  uStack_30 = param_3;
  iStack_2c = param_2;
  uStack_28 = param_1;
  uStack_3c = FUN_717223c0(iVar12,param_1);
  if (DAT_711a3938 == 0 || iVar12 == 0) {
    uStack_41 = 0;
    iStack_40 = 0;
    goto LAB_71723ab8;
  }
  piVar13 = (int *)(DAT_711a3938 + 0x1389c);
  iStack_40 = *piVar13;
  if (iStack_40 == 0) {
    iVar8 = FUN_713c301c(0);
    if (iVar8 == 0) {
      iStack_40 = *piVar13;
      uStack_41 = 0;
      if (iStack_40 == 0) goto LAB_71723ab8;
    }
    else {
      thunk_MwhHq(0x3a0);
      iStack_40 = FUN_715ba834();
      *piVar13 = iStack_40;
    }
  }
  uStack_41 = 0;
  if (*(int *)(iStack_40 + 0x8c) != iVar12) goto LAB_71723ab8;
  pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9f58);
  if (*pcVar5 == '\0') {
    puVar6 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9f48);
    *(undefined1 *)((int)puVar6 + 0x16) = 1;
    uVar17 = DAT_70084e70;
    uVar16 = DAT_70084e6c;
    uVar3 = DAT_70084e68;
    uVar2 = DAT_70084e64;
    *puVar6 = DAT_70084e60;
    puVar6[1] = uVar2;
    puVar6[2] = uVar3;
    puVar6[3] = uVar16;
    puVar6[4] = uVar17;
    *(undefined2 *)(puVar6 + 5) = DAT_70084e74;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_7172aedc,puVar6,&DAT_70b0e000);
    puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9f58);
    *puVar10 = 1;
  }
  iVar12 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9f48);
  if (*(char *)(iVar12 + 0x16) != '\0') {
    uVar11 = 0;
    uVar15 = 0;
    do {
      iVar8 = (uVar11 & 7) * 8;
      uVar14 = iVar8 - 0x20;
      bVar4 = (byte)(0xcd890b3f >> iVar8) | (byte)(-0x3a5cb2e5 << ((uVar11 & 7) * -8 + 0x20 & 0xff))
      ;
      if (-1 < (int)uVar14) {
        bVar4 = (byte)(0xc5a34d1b >> (uVar14 & 0xff));
      }
      *(byte *)(iVar12 + uVar11) = *(byte *)(iVar12 + uVar11) ^ bVar4;
      bVar19 = 0xfffffffe < uVar11;
      bVar18 = uVar15 == 0;
      bVar1 = (0x14 < uVar11) <= uVar15;
      uVar11 = uVar11 + 1;
      uVar15 = uVar15 + bVar19;
    } while (bVar18 && bVar1);
    *(undefined1 *)(iVar12 + 0x16) = 0;
  }
  uVar11 = imp_strlen(iVar12);
  if (0xfffffff7 < uVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&puStack_70);
  }
  if (uVar11 < 0xb) {
    puStack_70 = (undefined1 *)CONCAT31(puStack_70._1_3_,(char)(uVar11 << 1));
    uVar15 = (uint)&puStack_70 | 1;
    if (uVar11 != 0) goto LAB_71723a38;
  }
  else {
    uVar15 = thunk_MwhHq((uVar11 | 7) + 1);
    puStack_70 = (undefined1 *)((uVar11 | 7) + 2);
    piStack_6c = (int *)uVar11;
    puStack_68 = (undefined4 *)uVar15;
LAB_71723a38:
    imp___aeabi_memmove(uVar15,iVar12,uVar11);
  }
  *(undefined1 *)(uVar15 + uVar11) = 0;
  iVar8 = FUN_717c5e7c(&puStack_70);
  if (((uint)puStack_70 & 1) != 0) {
    thunk_qNQrlu(puStack_68);
  }
  param_1 = uStack_28;
  iVar12 = iStack_38;
  if ((iVar8 == 2) && (piVar13 = (int *)FUN_713dacc4(uStack_28,iStack_38), *piVar13 - 1U < 2)) {
    uStack_41 = 1;
  }
LAB_71723ab8:
  puStack_5c = &uStack_34;
  puStack_60 = &uStack_30;
  piStack_64 = &iStack_2c;
  puStack_68 = &uStack_28;
  piStack_6c = &iStack_40;
  puStack_70 = &uStack_41;
  puVar6 = (undefined4 *)FUN_715b9eec(iVar12,param_1);
  if (puVar6 != (undefined4 *)0x0) {
    puVar7 = (uint *)FUN_713dacc4(uStack_28,iStack_38);
    uVar11 = *puVar7;
    bVar18 = uVar11 == 1;
    if (bVar18) {
      uVar11 = (uint)*(byte *)((int)puVar7 + 0x19);
    }
    if (bVar18 && (uVar11 & 4) == 0) {
      iVar12 = 0;
      if (*(int *)(iStack_38 + 0x440) != 0) {
        iVar12 = FUN_713c067c();
      }
      uVar3 = DAT_70b4205c;
      uVar2 = DAT_70b42058;
      iVar8 = FUN_71ba2c5c(*puVar6,puVar6[1],DAT_70b42058,DAT_70b4205c);
      if (iVar8 == 0) {
        return 0;
      }
      bVar18 = (*(uint *)(iStack_38 + 0x484) & 0x4000000) == 0;
      iVar8 = 0x50;
      if (bVar18) {
        iVar8 = 0x44;
      }
      uVar16 = *(undefined4 *)((int)puVar7 + iVar8);
      iVar8 = 0x4c;
      if (bVar18) {
        iVar8 = 0x40;
      }
      uVar17 = *(undefined4 *)((int)puVar7 + iVar8);
      if (iVar12 != 0) {
        iVar8 = *(int *)(iVar12 + 0x2c);
      }
      uVar9 = uStack_3c;
      if ((iVar12 != 0 && iVar8 != 0) &&
         (uVar11 = *(uint *)(iVar8 + 0x24),
         uVar11 - 1 < 0x7fffff ||
         (uVar11 & 0x7fffffff) - 0x800000 >> 0x18 < 0x7f && -1 < (int)uVar11)) {
        uVar9 = FUN_71ba21e8(uVar11,uStack_3c);
      }
      uVar20 = FUN_717240b4(&puStack_70);
      bVar18 = (int)uVar20 != 0;
      if (bVar18) {
        FUN_717243ac(puVar6,(int)((ulonglong)uVar20 >> 0x20),uVar2,uVar3,uVar17,uVar16,uVar9);
      }
      return (uint)bVar18;
    }
  }
  uVar11 = FUN_717240b4(&puStack_70);
  return uVar11;
}


// =========================================================================
// Function: FUN_717240b4
// Entry: 0x717240b4 | Size: 384 bytes
// =========================================================================

undefined4 FUN_717240b4(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  if ((*(char *)*param_1 != '\0') &&
     (iVar1 = FUN_71ba2c3c(DAT_70b42058,DAT_70b4205c,*(undefined4 *)(*(int *)param_1[1] + 0x398),
                           *(undefined4 *)(*(int *)param_1[1] + 0x39c)), iVar1 != 0)) {
    return 0;
  }
  iVar1 = (*DAT_700f9e2c)(*(undefined4 *)param_1[2],*(undefined4 *)param_1[3],
                          *(undefined4 *)param_1[4],*(undefined4 *)param_1[5],
                          *(undefined4 *)param_1[6],*(undefined4 *)param_1[7],
                          *(undefined4 *)param_1[8]);
  uVar2 = 0;
  if (iVar1 != 0) {
    if (*(char *)*param_1 != '\0') {
      uVar6 = FUN_71ba0670(DAT_70b42058,DAT_70b4205c,0,0x3ff00000);
      *(undefined8 *)(*(int *)param_1[1] + 0x398) = uVar6;
    }
    iVar1 = FUN_71ba2d70(*(undefined4 *)param_1[9],0x3f800000);
    uVar2 = 1;
    if ((iVar1 != 0) && (*(int *)(*(int *)param_1[2] + 4) == 1)) {
      piVar3 = (int *)FUN_713dacc4(*(int *)param_1[2],*(undefined4 *)param_1[10]);
      if (*piVar3 == 1) {
        iVar1 = *DAT_70b4204c;
        iVar5 = *(int *)param_1[2];
        if (0 < *(int *)(iVar5 + 0x10) - iVar1) {
          uVar2 = FUN_71ba1b94();
          FUN_71ba13e0(uVar2,*(undefined4 *)param_1[9]);
          imp_ceilf();
          iVar4 = FUN_71ba1910();
          *(int *)(iVar5 + 0x10) = iVar1 + iVar4;
        }
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}


// =========================================================================
// Function: FUN_717243ac
// Entry: 0x717243ac | Size: 396 bytes
// =========================================================================

void FUN_717243ac(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  iVar1 = FUN_71ba2d70(param_7,0);
  if ((iVar1 != 0) && (iVar1 = FUN_71ba2d70(param_6,param_5), iVar1 != 0)) {
    iVar1 = FUN_71ba2cf0(param_7,0x7f800000);
    iVar2 = FUN_71ba0408(param_7,0x7f800000);
    if (iVar2 == 0 && iVar1 == 0) {
      iVar1 = FUN_71ba2c1c(*(undefined4 *)(param_1 + 1),*(undefined4 *)((int)param_1 + 0xc),param_3,
                           param_4);
      bVar7 = *(byte *)(param_1 + 4) & iVar1 != 0;
      if (bVar7 == 1) {
        uVar10 = param_1[2];
      }
      else {
        FUN_71ba240c(param_6,param_5);
        uVar10 = FUN_71ba1638();
        uVar9 = FUN_71ba1638(param_7);
        uVar10 = FUN_71ba0f98((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
                              (int)((ulonglong)uVar9 >> 0x20));
      }
      uVar8 = (uint)((ulonglong)uVar10 >> 0x20);
      uVar5 = (undefined4)uVar10;
      uVar6 = uVar8 & 0x7fffffff;
      iVar1 = FUN_71ba2c1c(uVar5,uVar6,0,0x7ff00000);
      iVar2 = FUN_71ba0f44(uVar5,uVar6,0,0x7ff00000);
      if (iVar2 == 0 && iVar1 == 0) {
        *(undefined1 *)(param_1 + 4) = 0;
        uVar3 = *(undefined4 *)(param_1 + 3);
        uVar4 = *(undefined4 *)((int)param_1 + 0x1c);
        if (bVar7 == 0) {
          uVar4 = 0;
          uVar3 = 0;
        }
        uVar10 = FUN_71ba23ec(uVar5,uVar8,uVar3,uVar4);
        iVar1 = FUN_71ba2c3c((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0,0);
        if (iVar1 != 0) {
          uVar10 = 0;
        }
        uVar10 = FUN_71ba0670((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),param_3,param_4);
        *param_1 = uVar10;
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_717246d8
// Entry: 0x717246d8 | Size: 140 bytes
// =========================================================================

undefined4
FUN_717246d8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_71ba21e8(param_6,0x42480000);
  uVar2 = FUN_71ba21e8(param_7,0x42480000);
  uVar3 = FUN_71ba21e8(param_8,0x42480000);
  (*DAT_700f9e30)(param_1,param_2,param_3,param_4,param_5,uVar1,uVar2,uVar3);
  FUN_713cc2b0();
  return 1;
}


// =========================================================================
// Function: FUN_71725854
// Entry: 0x71725854 | Size: 716 bytes
// =========================================================================

void FUN_71725854(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (DAT_711a3938 != 0) {
    piVar4 = (int *)(DAT_711a3938 + 0x1389c);
    if (*piVar4 == 0) {
      iVar1 = FUN_713c301c(0);
      if (iVar1 == 0) {
        if (*piVar4 == 0) {
          return;
        }
      }
      else {
        thunk_MwhHq(0x3a0);
        iVar1 = FUN_715ba834();
        *piVar4 = iVar1;
      }
    }
    piVar4 = (int *)(DAT_711a3938 + 0x1389c);
    iVar1 = *piVar4;
    if (iVar1 == 0) {
      iVar1 = FUN_713c301c(0);
      if (iVar1 == 0) {
        iVar1 = *piVar4;
      }
      else {
        thunk_MwhHq(0x3a0);
        iVar1 = FUN_715ba834();
        *piVar4 = iVar1;
      }
    }
    iVar2 = *(int *)(*(int *)(iVar1 + 0x8c) + 0x14);
    puVar3 = (undefined4 *)(iVar2 + 0x30);
    if (iVar2 == 0) {
      puVar3 = (undefined4 *)(*(int *)(iVar1 + 0x8c) + 4);
    }
    uVar5 = param_1[1];
    uVar6 = *puVar3;
    uVar7 = puVar3[1];
    uStack_28 = FUN_71ba240c(puVar3[2],param_1[2]);
    uStack_2c = FUN_71ba240c(uVar7,uVar5);
    uStack_30 = FUN_71ba240c(uVar6,*param_1);
    FUN_7136ce28(&uStack_30);
    uVar5 = FUN_71ba21e8(uStack_30,param_2);
    uVar6 = FUN_71ba21e8(uStack_2c,param_2);
    piVar4 = (int *)(DAT_711a3938 + 0x1389c);
    iVar1 = *piVar4;
    if (iVar1 == 0) {
      iVar1 = FUN_713c301c(0);
      if (iVar1 == 0) {
        iVar1 = *piVar4;
      }
      else {
        thunk_MwhHq(0x3a0);
        iVar1 = FUN_715ba834();
        *piVar4 = iVar1;
      }
    }
    *(undefined4 *)(*(int *)(iVar1 + 0x8c) + 0x48) = uVar5;
    piVar4 = (int *)(DAT_711a3938 + 0x1389c);
    iVar1 = *piVar4;
    if (iVar1 == 0) {
      iVar1 = FUN_713c301c(0);
      if (iVar1 == 0) {
        iVar1 = *piVar4;
      }
      else {
        thunk_MwhHq(0x3a0);
        iVar1 = FUN_715ba834();
        *piVar4 = iVar1;
      }
    }
    *(undefined4 *)(*(int *)(iVar1 + 0x8c) + 0x4c) = uVar6;
    piVar4 = (int *)(DAT_711a3938 + 0x1389c);
    iVar1 = *piVar4;
    if (iVar1 == 0) {
      iVar1 = FUN_713c301c(0);
      if (iVar1 == 0) {
        iVar1 = *piVar4;
      }
      else {
        thunk_MwhHq(0x3a0);
        iVar1 = FUN_715ba834();
        *piVar4 = iVar1;
      }
    }
    iVar2 = DAT_711a3938;
    *(undefined4 *)(*(int *)(iVar1 + 0x8c) + 0x60) = 0;
    piVar4 = (int *)(iVar2 + 0x1389c);
    iVar1 = *piVar4;
    if (iVar1 == 0) {
      iVar1 = FUN_713c301c(0);
      if (iVar1 == 0) {
        iVar1 = *piVar4;
      }
      else {
        thunk_MwhHq(0x3a0);
        iVar1 = FUN_715ba834();
        *piVar4 = iVar1;
      }
    }
    *(undefined4 *)(*(int *)(iVar1 + 0x8c) + 100) = 0;
    piVar4 = (int *)(DAT_711a3938 + 0x1389c);
    iVar1 = *piVar4;
    if (iVar1 == 0) {
      iVar1 = FUN_713c301c(0);
      if (iVar1 == 0) {
        iVar1 = *piVar4;
      }
      else {
        thunk_MwhHq(0x3a0);
        iVar1 = FUN_715ba834();
        *piVar4 = iVar1;
      }
    }
    iVar2 = DAT_711a3938;
    *(undefined4 *)(*(int *)(iVar1 + 0x8c) + 0x68) = 0;
    piVar4 = (int *)(iVar2 + 0x1389c);
    iVar1 = *piVar4;
    if (iVar1 == 0) {
      iVar1 = FUN_713c301c(0);
      if (iVar1 == 0) {
        iVar1 = *piVar4;
      }
      else {
        thunk_MwhHq(0x3a0);
        iVar1 = FUN_715ba834();
        *piVar4 = iVar1;
      }
    }
    (**(code **)(**(int **)(iVar1 + 0x8c) + 0x30))();
  }
  return;
}


// =========================================================================
// Function: FUN_71725ea0
// Entry: 0x71725ea0 | Size: 1040 bytes
// =========================================================================

bool FUN_71725ea0(int *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  bool bVar22;
  bool bVar23;
  undefined8 uVar24;
  byte abStack_30 [8];
  undefined4 uStack_28;
  
  if (DAT_711f6d58 != 0) {
    if (((param_2 != 0) && (iVar15 = *param_1, iVar7 = FUN_713c301c(0), iVar15 != iVar7)) &&
       (2 < (*(byte *)(param_2 + 0x3a) & 7) - 2)) {
      return true;
    }
    iVar7 = FUN_713c301c(0);
    if ((iVar7 != param_2) && (iVar15 = *param_1, iVar7 = FUN_713c301c(0), iVar15 != iVar7)) {
      return false;
    }
    iVar7 = *(int *)(DAT_711f6d58 + 0xac);
    if (iVar7 == 0) {
      return false;
    }
    iVar15 = *(int *)(iVar7 + 0x1f6c);
    if (iVar15 == 0) {
      return false;
    }
    iVar16 = param_1[2];
    iVar21 = param_1[3];
    uVar24 = FUN_71ba1638(param_1[1]);
    FUN_71ba0f98((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),0x83e0f7fa,0x40083e0f);
    uVar8 = FUN_71ba242c();
    iVar9 = FUN_713c301c(0);
    if (iVar9 == param_2) {
      if (iVar21 != 0x36) {
        if ((*(int *)(iVar15 + 0x130) != 0) && (iVar9 = thunk_FUN_715c522c(), iVar9 != 0)) {
          return true;
        }
        if ((((*param_1 == 0) || ((*(byte *)(*param_1 + 0x3a) & 7) != 3)) ||
            (uVar10 = FUN_71796d54(iVar7), 0x3ec < uVar10)) ||
           (iVar7 = *(int *)(iVar7 + uVar10 * 4 + 0x1f8c), iVar7 == 0)) {
          if (iVar21 == 0x33) {
            pcVar11 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9f78);
            if (*pcVar11 == '\0') {
              puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9f68);
              *(undefined1 *)((int)puVar12 + 0x11) = 1;
              uVar4 = DAT_70084e84;
              uVar3 = DAT_70084e80;
              uVar17 = DAT_70084e7c;
              *puVar12 = DAT_70084e78;
              puVar12[1] = uVar17;
              puVar12[2] = uVar3;
              puVar12[3] = uVar4;
              *(undefined1 *)(puVar12 + 4) = DAT_70084e88;
              thunk_GFDIUClbc_QcPNgD_wH(&LAB_7172af14,puVar12,&DAT_70b0e000);
              puVar13 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9f78);
              *puVar13 = 1;
            }
            iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9f68);
            if (*(char *)(iVar7 + 0x11) != '\0') {
              uVar10 = 0;
              uVar20 = 0;
              do {
                iVar9 = (uVar10 & 7) * 8;
                uVar18 = iVar9 - 0x20;
                bVar6 = (byte)(0x2d85d90d >> iVar9) |
                        (byte)(-0x5c0cfa93 << ((uVar10 & 7) * -8 + 0x20 & 0xff));
                if (-1 < (int)uVar18) {
                  bVar6 = (byte)(0xa3f3056d >> (uVar18 & 0xff));
                }
                *(byte *)(iVar7 + uVar10) = *(byte *)(iVar7 + uVar10) ^ bVar6;
                bVar23 = 0xfffffffe < uVar10;
                bVar22 = uVar20 == 0;
                bVar1 = (0xf < uVar10) <= uVar20;
                uVar10 = uVar10 + 1;
                uVar20 = uVar20 + bVar23;
              } while (bVar22 && bVar1);
              *(undefined1 *)(iVar7 + 0x11) = 0;
            }
            FUN_71315100(abStack_30);
            iVar7 = FUN_717c5e7c();
            if ((abStack_30[0] & 1) != 0) {
              thunk_qNQrlu(uStack_28);
            }
            if (iVar7 != 0) {
              return false;
            }
          }
          FUN_7175ecb4(iVar15,1,0xffff,uVar8,iVar21,iVar16);
        }
        else {
          uVar17 = *(undefined4 *)(iVar15 + 300);
          iVar9 = FUN_71ba2cf0(uVar17,0);
          if (iVar9 == 0) {
            iVar9 = *(int *)(*(int *)(iVar7 + 0x10) + 0x8c);
            iVar14 = *(int *)(iVar9 + 0x14);
            iVar19 = iVar14 + 0x30;
            if (iVar14 == 0) {
              iVar19 = iVar9 + 4;
            }
            uVar17 = FUN_71ba21e8(uVar17,*(undefined4 *)(DAT_711f6d58 + iVar21 * 4 + 0x35c));
            FUN_71725854(iVar19,uVar17);
          }
          FUN_7175ecb4(iVar15,1,uVar10,uVar8,iVar21,iVar16);
          cVar5 = *(char *)(iVar15 + 0x137);
          if (cVar5 != -1) {
            cVar2 = *(char *)(iVar7 + 0x1e);
            goto LAB_71725fec;
          }
        }
      }
    }
    else if ((param_2 != 0) && ((*(byte *)(param_2 + 0x3a) & 7) == 3)) {
      uVar10 = FUN_71796d54(iVar7,param_2);
      if ((uVar10 < 0x3ed) && (iVar7 = *(int *)(iVar7 + uVar10 * 4 + 0x1f8c), iVar7 != 0)) {
        FUN_7175ecb4(iVar15,0,uVar10,uVar8,iVar21,iVar16);
        cVar5 = *(char *)(iVar15 + 0x137);
        if (cVar5 != -1) {
          cVar2 = *(char *)(iVar7 + 0x1e);
LAB_71725fec:
          return cVar5 == cVar2;
        }
      }
      else {
        iVar7 = *(int *)(DAT_711f6d58 + 0x20);
        if ((iVar7 != 0) && (uVar10 = FUN_7173c750(iVar7,param_2), uVar10 >> 3 < 0x7d)) {
          bVar22 = *(char *)(iVar7 + uVar10) != '\0';
          iVar9 = 0;
          if (bVar22) {
            iVar9 = *(int *)(iVar7 + uVar10 * 4 + 1000);
          }
          if (bVar22 && iVar9 != 0) {
            if (*(char *)(iVar9 + 0x10) != '\0') {
              return true;
            }
            FUN_7175ef3c(iVar15,uVar10,uVar8,iVar21,iVar16);
          }
        }
      }
    }
  }
  return false;
}


// =========================================================================
// Function: FUN_717266a0
// Entry: 0x717266a0 | Size: 200 bytes
// =========================================================================

int FUN_717266a0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint extraout_r2;
  uint uVar3;
  
  if ((param_1 == (int *)0x0 || param_2 == 0) || (iVar1 = FUN_71725ea0(param_1,param_2), iVar1 == 0)
     ) {
    iVar1 = (*DAT_700f9e40)(param_1,param_2,param_3,param_4);
  }
  iVar2 = FUN_713c301c(0);
  if (DAT_711f6d58 != 0) {
    uVar3 = extraout_r2;
    if (param_2 != 0) {
      uVar3 = (uint)*(byte *)(DAT_711f6d58 + 0x408);
    }
    if ((param_2 != 0 && uVar3 != 0) && (iVar2 == *param_1)) {
      FUN_71796d54(*(undefined4 *)(DAT_711f6d58 + 0xac),param_2);
      *(undefined4 *)(iVar2 + 0x544) = 0x3dcccccd;
      return iVar1;
    }
  }
  return iVar1;
}


// =========================================================================
// Function: FUN_71726814
// Entry: 0x71726814 | Size: 664 bytes
// =========================================================================

void FUN_71726814(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  byte bVar9;
  int iVar10;
  int *piVar11;
  char *pcVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int unaff_r5;
  int *unaff_r8;
  int iVar18;
  bool bVar19;
  byte abStack_30 [8];
  undefined4 uStack_28;
  
  uVar8 = DAT_711f6ba4;
  uVar7 = DAT_711f6ba0;
  iVar18 = 0;
  if (param_2 != 0) {
    if (param_1 != 0) {
      unaff_r8 = &DAT_711f6d58;
      unaff_r5 = DAT_711f6d58;
    }
    if ((((param_1 != 0 && unaff_r5 != 0) && ((*(byte *)(param_2 + 0x3a) & 7) == 3)) &&
        (iVar10 = FUN_713c301c(0), iVar10 == param_1)) &&
       (((*(int *)(*unaff_r8 + 0xac) != 0 &&
         (iVar10 = FUN_71796d54(*(int *)(*unaff_r8 + 0xac),param_2), iVar10 != 0xffff)) &&
        ((piVar11 = (int *)FUN_713db648(param_3,1), piVar11 != (int *)0x0 && (*piVar11 == 0)))))) {
      pcVar12 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9f98,param_2,param_3,param_4);
      if (*pcVar12 == '\0') {
        puVar13 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9f88);
        *(undefined1 *)((int)puVar13 + 0x16) = 1;
        uVar6 = DAT_70084ea0;
        uVar5 = DAT_70084e9c;
        uVar4 = DAT_70084e98;
        uVar3 = DAT_70084e94;
        *puVar13 = DAT_70084e90;
        puVar13[1] = uVar3;
        puVar13[2] = uVar4;
        puVar13[3] = uVar5;
        puVar13[4] = uVar6;
        *(undefined2 *)(puVar13 + 5) = DAT_70084ea4;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_7172af48,puVar13,&DAT_70b0e000);
        puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9f98);
        *puVar14 = 1;
      }
      iVar18 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9f88);
      if (*(char *)(iVar18 + 0x16) != '\0') {
        uVar15 = 0;
        uVar17 = 0;
        do {
          iVar10 = (uVar15 & 7) * 8;
          bVar9 = (byte)(0x2b4f8f9b >> iVar10) |
                  (byte)(0x13dfbbdb << ((uVar15 & 7) * -8 + 0x20 & 0xff));
          uVar16 = iVar10 - 0x20;
          if (-1 < (int)uVar16) {
            bVar9 = (byte)(0x13dfbbdb >> (uVar16 & 0xff));
          }
          *(byte *)(iVar18 + uVar15) = *(byte *)(iVar18 + uVar15) ^ bVar9;
          bVar19 = 0xfffffffe < uVar15;
          bVar1 = uVar17 == 0;
          bVar2 = (0x14 < uVar15) <= uVar17;
          uVar15 = uVar15 + 1;
          uVar17 = uVar17 + bVar19;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar18 + 0x16) = 0;
      }
      FUN_71315100(abStack_30);
      iVar10 = FUN_717c5e7c();
      if ((abStack_30[0] & 1) != 0) {
        thunk_qNQrlu(uStack_28);
      }
      iVar18 = param_1;
      if (iVar10 != 1) {
        iVar18 = 0;
      }
    }
  }
  DAT_711f6ba4 = 0;
  DAT_711f6ba0 = iVar18;
  (*DAT_700f9e44)(param_1,param_2,param_3,param_4,param_5,param_6);
  DAT_711f6ba0 = uVar7;
  DAT_711f6ba4 = uVar8;
  return;
}


// =========================================================================
// Function: FUN_71726ec8
// Entry: 0x71726ec8 | Size: 100 bytes
// =========================================================================

void FUN_71726ec8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_71ba13e0(param_4,0x40a00000);
  (*DAT_700f9e50)(param_1,param_2,param_3,uVar1,param_5,param_6,param_7);
  return;
}


// =========================================================================
// Function: FUN_71726f80
// Entry: 0x71726f80 | Size: 744 bytes
// =========================================================================

undefined4
FUN_71726f80(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
            undefined4 param_13,undefined4 param_14)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint *puStack_30;
  uint *puStack_2c;
  uint *puStack_28;
  
  if (((DAT_711f6d58 == 0) || (*DAT_70c24294 == '\0')) ||
     (iVar11 = *(int *)(DAT_711f6d58 + 8), iVar11 == 0)) {
    uVar4 = (*DAT_700f9e54)();
    return uVar4;
  }
  puVar8 = (uint *)0x0;
  uVar7 = 0;
  puStack_28 = (uint *)0x0;
  puStack_2c = (uint *)0x0;
  puStack_30 = (uint *)0x0;
  uVar5 = param_2;
  do {
    puVar6 = puStack_30;
    if (*(char *)(iVar11 + uVar7) != '\0') {
      iVar9 = iVar11 + uVar7 * 4;
      iVar2 = *(int *)(iVar9 + 1000);
      if (iVar2 != 0) {
        uVar5 = (uint)*(byte *)(iVar2 + 0x27);
      }
      if (iVar2 != 0 && uVar5 != 0) {
        uVar5 = *(uint *)(*(int *)(iVar2 + 4) + 0x1c);
        if (puVar8 < puStack_28) {
          *puVar8 = uVar7;
          puVar8[1] = uVar5;
        }
        else {
          iVar2 = (int)puVar8 - (int)puStack_30 >> 3;
          uVar10 = iVar2 + 1;
          if (0x1fffffff < uVar10) {
            FUN_7172b080(&puStack_30);
LAB_71727264:
                    /* WARNING: Subroutine does not return */
            FUN_712f6cf0();
          }
          uVar1 = (int)puStack_28 - (int)puStack_30 >> 2;
          if (uVar10 < uVar1) {
            uVar10 = uVar1;
          }
          if (0x7ffffff7 < (uint)((int)puStack_28 - (int)puStack_30)) {
            uVar10 = 0x1fffffff;
          }
          if (uVar10 == 0) {
            puVar3 = (uint *)0x0;
          }
          else {
            if (0x1fffffff < uVar10) goto LAB_71727264;
            puVar3 = (uint *)thunk_MwhHq(uVar10 << 3);
          }
          puVar8 = puVar3 + iVar2 * 2;
          *puVar8 = uVar7;
          puVar8[1] = uVar5;
          imp___aeabi_memcpy4(puVar3,puVar6);
          puStack_28 = puVar3 + uVar10 * 2;
          puStack_30 = puVar3;
          if (puVar6 != (uint *)0x0) {
            thunk_qNQrlu(puVar6);
          }
        }
        puVar8 = puVar8 + 2;
        iVar2 = *(int *)(*(int *)(iVar9 + 1000) + 4);
        uVar5 = *(uint *)(iVar2 + 0x1c) & 0xfffffffe;
        *(uint *)(iVar2 + 0x1c) = uVar5;
        puStack_2c = puVar8;
      }
    }
    uVar7 = uVar7 + 1;
    if (uVar7 == 1000) {
      uVar4 = (*DAT_700f9e54)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              param_9,param_10,param_11,param_12,param_13,param_14);
      for (puVar6 = puStack_30; puVar6 != puVar8; puVar6 = puVar6 + 2) {
        *(uint *)(*(int *)(*(int *)(iVar11 + 1000 + (*puVar6 & 0x3ff) * 4) + 4) + 0x1c) = puVar6[1];
      }
      if (puStack_30 != (uint *)0x0) {
        thunk_qNQrlu(puStack_30);
      }
      return uVar4;
    }
  } while( true );
}


// =========================================================================
// Function: FUN_717273c8
// Entry: 0x717273c8 | Size: 700 bytes
// =========================================================================

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_717273c8(int *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (2 < *param_1 - 0x13U) {
                    /* WARNING: Could not recover jumptable at 0x717274b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_700f9e58)(param_1);
    return;
  }
  uVar6 = param_5[1];
  uVar8 = param_5[2];
  uVar10 = *param_5;
  uVar14 = param_4[1];
  uVar12 = param_4[2];
  uVar13 = *param_4;
  if (param_2 != 0) {
    uStack_28 = 0;
    puVar7 = (undefined4 *)((uint)&uStack_30 | 4);
    uStack_2c = 0;
    uStack_30 = 0;
    iVar1 = FUN_713db648(*param_1,1);
    if (iVar1 == 0) {
      FUN_713be0a8(param_2,&uStack_30,0x18,0);
    }
    else {
      uStack_30 = *(undefined4 *)(iVar1 + 0x24);
      *puVar7 = *(undefined4 *)(iVar1 + 0x28);
      puVar7[1] = *(undefined4 *)(iVar1 + 0x2c);
      FUN_713be4f8(param_2,&uStack_30,0x18,0);
    }
    uVar2 = FUN_71ba240c(uStack_30,uVar13);
    uVar9 = puVar7[1];
    uVar3 = FUN_71ba240c(*puVar7,uVar14);
    uVar9 = FUN_71ba240c(uVar9,uVar12);
    uVar4 = FUN_71ba21e8(uVar3,uVar3);
    uVar5 = FUN_71ba21e8(uVar2,uVar2);
    uVar4 = FUN_71ba0b38(uVar5,uVar4);
    uVar5 = FUN_71ba21e8(uVar9,uVar9);
    uVar4 = FUN_71ba0b38(uVar5,uVar4);
    iVar1 = FUN_71ba2d10(uVar4,0x41c80000);
    if (iVar1 != 0) {
      uVar13 = FUN_71ba0b38(uVar13,uVar2);
      uVar14 = FUN_71ba0b38(uVar14,uVar3);
      uVar12 = FUN_71ba0b38(uVar12,uVar9);
      uVar10 = FUN_71ba0b38(uVar10,uVar2);
      uVar6 = FUN_71ba0b38(uVar6,uVar3);
      uVar8 = FUN_71ba0b38(uVar8,uVar9);
    }
  }
  uStack_28 = FUN_71ba240c(uVar8,uVar12);
  uStack_2c = FUN_71ba240c(uVar6,uVar14);
  uStack_30 = FUN_71ba240c(uVar10,uVar13);
  FUN_7136ce28(&uStack_30);
  uVar11 = (uint)((char)*param_1 == '\x13');
  if ((char)*param_1 == '\x15') {
    uVar11 = 2;
  }
  uVar2 = (&DAT_700c692c)[uVar11];
  uVar6 = FUN_71ba21e8(uVar2,uStack_30);
  uVar10 = uStack_28;
  uVar8 = FUN_71ba21e8(uVar2,uStack_2c);
  uVar10 = FUN_71ba21e8(uVar2,uVar10);
  FUN_71614e04(param_1,uVar11,uVar13,uVar14,uVar12,uVar6,uVar8,uVar10);
  return;
}


// =========================================================================
// Function: FUN_717279d8
// Entry: 0x717279d8 | Size: 1240 bytes
// =========================================================================

void FUN_717279d8(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  uint uVar11;
  byte bVar12;
  byte bVar13;
  uint uVar14;
  byte bVar15;
  undefined4 uVar16;
  byte bVar17;
  undefined4 uVar18;
  uint uVar19;
  byte bVar20;
  byte bVar21;
  byte *pbVar22;
  byte bVar23;
  bool bVar24;
  byte bStack_30;
  
  iVar5 = *(int *)(param_2 + 0xc);
  iVar10 = 0x2d71;
  if (iVar5 != 0x2d71) {
    iVar10 = 0x2d83;
  }
  if (iVar5 != 0x2d71 && iVar5 != iVar10) {
    uVar16 = 0;
    uVar18 = 0;
    if (iVar5 != 0x2d84) goto LAB_71727d1c;
    if (param_3 == 0xe1) {
      pcVar6 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9fd8);
      if (*pcVar6 == '\0') {
        puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9fc8);
        *(undefined1 *)((int)puVar8 + 0x15) = 1;
        uVar4 = DAT_70084eb8;
        uVar3 = DAT_70084eb4;
        uVar18 = DAT_70084eb0;
        uVar16 = DAT_70084eac;
        *puVar8 = DAT_70084ea8;
        puVar8[1] = uVar16;
        puVar8[2] = uVar18;
        puVar8[3] = uVar3;
        puVar8[4] = uVar4;
        *(undefined1 *)(puVar8 + 5) = DAT_70084ebc;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_7172afb0,puVar8,&DAT_70b0e000);
        puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9fd8);
        *puVar9 = 1;
      }
      pbVar7 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9fc8);
      pbVar22 = pbVar7 + 0x15;
      if (*pbVar22 == 0) goto LAB_71727d0c;
      uVar14 = 0;
      uVar19 = 0;
      do {
        iVar10 = (uVar14 & 7) * 8;
        bVar12 = (byte)(0x437b19cb >> iVar10) |
                 (byte)(-0x6c062c4b << ((uVar14 & 7) * -8 + 0x20 & 0xff));
        uVar11 = iVar10 - 0x20;
        if (-1 < (int)uVar11) {
          bVar12 = (byte)(0x93f9d3b5 >> (uVar11 & 0xff));
        }
        pbVar7[uVar14] = pbVar7[uVar14] ^ bVar12;
        bVar24 = 0xfffffffe < uVar14;
        bVar1 = uVar19 == 0;
        bVar2 = (0x13 < uVar14) <= uVar19;
        uVar14 = uVar14 + 1;
        uVar19 = uVar19 + bVar24;
      } while (bVar1 && bVar2);
      goto LAB_71727c60;
    }
    if (param_3 != 0xe0) goto LAB_71727d1c;
    pcVar6 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9fb8);
    if (*pcVar6 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9fa8);
      *puVar8 = 0x1adba68c;
      puVar8[1] = 0x85815c2f;
      puVar8[2] = 0x16c9989e;
      *(undefined1 *)((int)puVar8 + 0xf) = 1;
      *(undefined4 *)((int)puVar8 + 0xb) = 0xe7502f16;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7172af80,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9fb8);
      *puVar9 = 1;
    }
    pbVar7 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9fa8);
    pbVar22 = pbVar7 + 0xf;
    if (*pbVar22 == 0) goto LAB_71727c70;
    bVar13 = 0xe7;
    bVar17 = 0x35;
    bVar20 = 0x5d;
    bVar21 = 0x7f;
    bVar15 = 0xaf;
    bVar12 = 199;
    bVar23 = 0xfb;
    bStack_30 = 0xe9;
LAB_71727a7c:
    *pbVar7 = *pbVar7 ^ bVar23;
    pbVar7[1] = pbVar7[1] ^ bVar12;
    pbVar7[2] = pbVar7[2] ^ bVar15;
    pbVar7[3] = pbVar7[3] ^ bVar21;
    pbVar7[4] = pbVar7[4] ^ bVar20;
    pbVar7[5] = pbVar7[5] ^ bVar17;
    pbVar7[6] = pbVar7[6] ^ bVar13;
    pbVar7[7] = pbVar7[7] ^ bStack_30;
    pbVar7[8] = pbVar7[8] ^ bVar23;
    pbVar7[9] = pbVar7[9] ^ bVar12;
    pbVar7[10] = pbVar7[10] ^ bVar15;
    pbVar7[0xb] = pbVar7[0xb] ^ bVar21;
    pbVar7[0xc] = pbVar7[0xc] ^ bVar20;
    pbVar7[0xd] = pbVar7[0xd] ^ bVar17;
    uVar18 = 0x41c;
    pbVar7[0xe] = pbVar7[0xe] ^ bVar13;
LAB_71727c64:
    *pbVar22 = 0;
  }
  else if (param_3 == 0xe1) {
    pcVar6 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fa018);
    if (*pcVar6 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fa008);
      *(undefined1 *)((int)puVar8 + 0x15) = 1;
      uVar4 = DAT_70084ed0;
      uVar3 = DAT_70084ecc;
      uVar18 = DAT_70084ec8;
      uVar16 = DAT_70084ec4;
      *puVar8 = DAT_70084ec0;
      puVar8[1] = uVar16;
      puVar8[2] = uVar18;
      puVar8[3] = uVar3;
      puVar8[4] = uVar4;
      *(undefined1 *)(puVar8 + 5) = DAT_70084ed4;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7172b018,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fa018);
      *puVar9 = 1;
    }
    pbVar7 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fa008);
    pbVar22 = pbVar7 + 0x15;
    if (*pbVar22 != 0) {
      uVar14 = 0;
      uVar19 = 0;
      do {
        iVar10 = (uVar14 & 7) * 8;
        uVar11 = iVar10 - 0x20;
        bVar12 = (byte)(0x15d93b5 >> iVar10) |
                 (byte)(-0x369a40cb << ((uVar14 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar11) {
          bVar12 = (byte)(0xc965bf35 >> (uVar11 & 0xff));
        }
        pbVar7[uVar14] = pbVar7[uVar14] ^ bVar12;
        bVar24 = 0xfffffffe < uVar14;
        bVar1 = uVar19 == 0;
        bVar2 = (0x13 < uVar14) <= uVar19;
        uVar14 = uVar14 + 1;
        uVar19 = uVar19 + bVar24;
      } while (bVar1 && bVar2);
LAB_71727c60:
      uVar18 = 0x1c;
      goto LAB_71727c64;
    }
LAB_71727d0c:
    uVar18 = 0x1c;
  }
  else {
    uVar16 = 0;
    uVar18 = 0;
    if (param_3 != 0xe0) goto LAB_71727d1c;
    pcVar6 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9ff8);
    if (*pcVar6 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9fe8);
      *puVar8 = 0x10b35688;
      puVar8[1] = 0x7748b295;
      puVar8[2] = 0x1ca1688b;
      *(undefined1 *)((int)puVar8 + 0xf) = 1;
      *(undefined4 *)((int)puVar8 + 0xb) = 0x27b4951c;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7172afe8,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9ff8);
      *puVar9 = 1;
    }
    pbVar7 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700f9fe8);
    pbVar22 = pbVar7 + 0xf;
    if (*pbVar22 != 0) {
      bVar13 = 0x27;
      bStack_30 = 0x1b;
      bVar17 = 0xd1;
      bVar20 = 0xe7;
      bVar21 = 0x75;
      bVar15 = 199;
      bVar12 = 0x37;
      bVar23 = 0xff;
      goto LAB_71727a7c;
    }
LAB_71727c70:
    uVar18 = 0x41c;
  }
  uVar16 = FUN_71304504(pbVar7,param_4);
LAB_71727d1c:
  *param_1 = uVar16;
  param_1[1] = uVar18;
  return;
}


// =========================================================================
// Function: FUN_71728454
// Entry: 0x71728454 | Size: 500 bytes
// =========================================================================

void FUN_71728454(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  char *pcVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  int unaff_r4;
  int iVar7;
  int iStack_2c;
  undefined4 uStack_28;
  
  iVar7 = *(int *)(unaff_r4 + 0x30);
  uVar1 = *(int *)(iVar7 + 0xc) - 0x2d71;
  if ((uVar1 < 0x14) && ((1 << (uVar1 & 0xff) & 0xc0001U) != 0)) {
    pcVar2 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fa038);
    if (*pcVar2 == '\0') {
      puVar5 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fa028);
      *puVar5 = 0x508558ab;
      puVar5[1] = 0xc760eace;
      puVar5[2] = 0x5b9647a8;
      *(undefined1 *)((int)puVar5 + 0xe) = 1;
      *(undefined2 *)(puVar5 + 3) = 0xafc3;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7172b050,puVar5,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fa038);
      *puVar6 = 1;
    }
    pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fa028);
    if (pbVar3[0xe] != 0) {
      *pbVar3 = *pbVar3 ^ 0xed;
      pbVar3[1] = pbVar3[1] ^ 0x11;
      pbVar3[2] = pbVar3[2] ^ 0xd3;
      pbVar3[3] = pbVar3[3] ^ 0x15;
      pbVar3[0xe] = 0;
      pbVar3[4] = pbVar3[4] ^ 0x97;
      pbVar3[5] = pbVar3[5] ^ 0xaf;
      pbVar3[6] = pbVar3[6] ^ 0x21;
      pbVar3[7] = pbVar3[7] ^ 0x95;
      pbVar3[8] = pbVar3[8] ^ 0xed;
      pbVar3[9] = pbVar3[9] ^ 0x11;
      pbVar3[10] = pbVar3[10] ^ 0xd3;
      pbVar3[0xb] = pbVar3[0xb] ^ 0x15;
      pbVar3[0xc] = pbVar3[0xc] ^ 0x97;
      pbVar3[0xd] = pbVar3[0xd] ^ 0xaf;
    }
    iVar4 = FUN_713040e0();
    if (iVar4 != 0) {
      FUN_717279d8(&iStack_2c,iVar7,param_3,iVar4);
      if (iStack_2c != 0) {
        FUN_7130747c(param_1,iStack_2c,uStack_28,param_4);
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x717285e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_700f9e5c)(param_1,param_2,param_3,param_4);
  return;
}


// =========================================================================
// Function: FUN_71728820
// Entry: 0x71728820 | Size: 276 bytes
// =========================================================================

undefined4 FUN_71728820(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = param_1 + *(char *)(param_1 + 0x71c) * 0x1c;
  iVar1 = FUN_713dacc4(iVar4 + 0x5a4,param_1);
  if (2 < *(int *)(iVar4 + 0x5a4) - 0x13U) {
                    /* WARNING: Could not recover jumptable at 0x71728900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*DAT_700f9e60)(param_1);
    return uVar5;
  }
  uVar5 = *(undefined4 *)(iVar1 + 0x38);
  uVar2 = FUN_71ba13e0(0x41700000,*(undefined4 *)(iVar1 + 8));
  iVar1 = FUN_71ba2d10(uVar2,0x3f800000);
  uVar3 = FUN_71ba13e0(0x3f000000,uVar5);
  uVar5 = 0x3f800000;
  if (iVar1 != 0) {
    uVar5 = uVar2;
  }
  uVar5 = FUN_71ba21e8(uVar5,0x40200000);
  uVar5 = FUN_71ba21e8(uVar3,uVar5);
  if ((*(byte *)(param_1 + 0x487) & 4) == 0) {
    iVar1 = FUN_71ba2d70(uVar5,0x3e4ccccd);
    if (iVar1 == 0) {
      uVar5 = 0x3e4ccccd;
    }
    return uVar5;
  }
  uVar2 = FUN_71ba21e8(uVar5,0x3f000000);
  iVar1 = FUN_71ba2d70(uVar2,0x3e4ccccd);
  uVar5 = 0x3e4ccccd;
  if (iVar1 != 0) {
    uVar5 = uVar2;
  }
  return uVar5;
}


// =========================================================================
// Function: FUN_71728a68
// Entry: 0x71728a68 | Size: 196 bytes
// =========================================================================

void FUN_71728a68(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_3 == 0) {
    return;
  }
  if (param_2 == 0x13) {
    uVar2 = 0x5d;
    uVar1 = 0x5c;
  }
  else if (param_2 == 0x15) {
    uVar2 = 0x60;
    uVar1 = 0x5f;
  }
  else {
    if (param_2 != 0x14) {
                    /* WARNING: Could not recover jumptable at 0x71728b28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_700f9e64)();
      return;
    }
    uVar1 = 0x59;
    uVar2 = 0x5a;
  }
  FUN_7131f9a8(param_1,param_3,0xffffffff,0xffffffff,uVar1,uVar2,0xffffffff,param_4,0,0x3f800000,
               0x3f800000);
  return;
}


// =========================================================================
// Function: FUN_71728b80
// Entry: 0x71728b80 | Size: 1512 bytes
// =========================================================================

void FUN_71728b80(void)

{
  undefined4 *puVar1;
  
  DAT_700f9e24 = *DAT_71201884 + DAT_71201880 | 1;
  DAT_71201884 = DAT_71201884 + 1;
  *DAT_7120188c = FUN_71721f20;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9e2c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71723878;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9e18 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7172022c;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9e1c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71721c78;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9e20 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71721e74;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9e28 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71722d34;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9e30 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_717246d8;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9e34 = *DAT_71201884 + DAT_71201880;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172480c;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9e38 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_71724b08;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9e3c = *DAT_71201884 + DAT_71201880;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_71724c94;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9e40 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_717266a0;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9e44 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71726814;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9e48 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_71726d98;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9e4c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_71726e44;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9e50 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71726ec8;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9e54 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71726f80;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9e58 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_717273c8;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_717279b4;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9e60 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71728820;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9e5c = *DAT_71201884 + DAT_71201880;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71728454;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700f9e64 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71728a68;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// =========================================================================
// Function: FUN_717297c8
// Entry: 0x717297c8 | Size: 2320 bytes
// =========================================================================

/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool FUN_717297c8(int param_1,undefined4 *param_2,uint *param_3)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
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
  undefined1 auStack_74 [12];
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined2 uStack_60;
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
  undefined4 auStack_2c [2];
  
  FUN_7136cdfc(&uStack_40);
  FUN_7136cdfc(&uStack_4c);
  FUN_7136cdfc(&uStack_58);
  iVar3 = FUN_713c301c();
  if (iVar3 != param_1) {
    return false;
  }
  puVar4 = (undefined4 *)FUN_7151dc0c();
  if (puVar4 == (undefined4 *)0x0) {
    return false;
  }
  puVar16 = &uStack_30;
  uStack_84 = *puVar4;
  uStack_80 = puVar4[1];
  uStack_7c = puVar4[2];
  FUN_7136d040(&uStack_4c,&uStack_84);
  FUN_7136cdfc(&uStack_84);
  FUN_713b14bc(DAT_70b46c18,0x3f800000,*param_2,param_2[1],param_2[2],&uStack_40,&uStack_84);
  uVar5 = uStack_80;
  auStack_2c[0] = FUN_71ba240c(uStack_7c,uStack_38);
  uStack_30 = FUN_71ba240c(uVar5,uStack_3c);
  uStack_34 = FUN_71ba240c(uStack_84,uStack_40);
  FUN_7136d040(&uStack_58,&uStack_34);
  uVar5 = FUN_71ba21e8(uStack_48,uStack_48);
  uVar6 = FUN_71ba21e8(uStack_4c,uStack_4c);
  uVar5 = FUN_71ba0b38(uVar6,uVar5);
  uVar6 = FUN_71ba21e8(uStack_44,uStack_44);
  FUN_71ba0b38(uVar6,uVar5);
  uVar7 = imp_sqrtf();
  iVar3 = FUN_71ba2d10(uVar7,0x3a83126f);
  if (iVar3 != 0) {
    return false;
  }
  iVar3 = FUN_71ba2cf0(uVar7 & 0x7fffffff,0x7f800000);
  iVar8 = FUN_71ba0408(uVar7 & 0x7fffffff,0x7f800000);
  if (iVar8 != 0 || iVar3 != 0) {
    return false;
  }
  FUN_7136d1d4(&uStack_4c,uVar7);
  uVar5 = FUN_71ba21e8(uStack_54,uStack_54);
  uVar6 = FUN_71ba21e8(uStack_58,uStack_58);
  uVar5 = FUN_71ba0b38(uVar6,uVar5);
  uVar6 = FUN_71ba21e8(uStack_50,uStack_50);
  FUN_71ba0b38(uVar6,uVar5);
  uVar7 = imp_sqrtf();
  iVar3 = FUN_71ba2d10(uVar7,0x3a83126f);
  if (iVar3 != 0) {
    return false;
  }
  iVar3 = FUN_71ba2cf0(uVar7 & 0x7fffffff,0x7f800000);
  iVar8 = FUN_71ba0408(uVar7 & 0x7fffffff,0x7f800000);
  if (iVar8 != 0 || iVar3 != 0) {
    return false;
  }
  FUN_7136d1d4(&uStack_58,uVar7);
  uVar5 = FUN_71ba21e8(uStack_44,0x3f4ccccd);
  uVar5 = FUN_71ba0b38(uVar5,0x3ea3d70a);
  uVar5 = FUN_71ba0b38(uVar5,uVar5);
  uVar5 = FUN_71ba13e0(uVar5,0x3c03126f);
  uVar6 = FUN_71ba0b38(uVar5,0xbf800000);
  iVar3 = FUN_71ba2d70(uVar6,0);
  uVar5 = FUN_71ba21e8(uStack_48,uStack_48);
  uVar9 = FUN_71ba21e8(uStack_4c,uStack_4c);
  FUN_71ba0b38(uVar9,uVar5);
  uVar5 = imp_sqrtf();
  uVar9 = FUN_71ba21e8(uVar5,0x3f4ccccd);
  uVar5 = 0;
  if (iVar3 != 0) {
    uVar5 = uVar6;
  }
  uVar5 = FUN_71ba21e8(uVar9,uVar5);
  uVar5 = FUN_71ba21e8(uVar5,0x3f333333);
  iVar3 = FUN_71ba2d70(uVar5,0x40000000);
  if (iVar3 == 0) {
    uVar5 = 0x40000000;
  }
  uVar6 = FUN_71ba240c(*param_2);
  uVar9 = FUN_71ba240c(param_2[1],uStack_3c);
  uVar10 = FUN_71ba240c(param_2[2],uStack_38);
  uVar9 = FUN_71ba21e8(uVar9,uVar9);
  uVar6 = FUN_71ba21e8(uVar6,uVar6);
  uVar6 = FUN_71ba0b38(uVar6,uVar9);
  uVar9 = FUN_71ba21e8(uVar10,uVar10);
  FUN_71ba0b38(uVar9,uVar6);
  uVar6 = imp_sqrtf();
  uVar6 = FUN_71ba0b38(uVar5,uVar6);
  uVar6 = FUN_71ba0b38(uVar6,0x40000000);
  uVar9 = FUN_71ba21e8(uStack_54,uVar6);
  uStack_30 = FUN_71ba0b38(uStack_3c,uVar9);
  uVar9 = FUN_71ba21e8(uStack_58,uVar6);
  uStack_34 = FUN_71ba0b38(uStack_40,uVar9);
  uVar6 = FUN_71ba21e8(uStack_50,uVar6);
  auStack_2c[0] = FUN_71ba0b38(uStack_38,uVar6);
  puVar4 = auStack_2c;
  FUN_7136cdfc(&uStack_84);
  uStack_78 = 0;
  FUN_7136cdfc(auStack_74);
  piVar1 = DAT_70c242a0;
  uStack_5c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  iVar8 = *DAT_70c242a0;
  *DAT_70c242a0 = param_1;
  iVar3 = FUN_713e834c(&uStack_40,&uStack_34,&uStack_84,&uStack_88,1,1,1,1,0,0,0,1);
  *piVar1 = iVar8;
  if (iVar3 != 0) {
    puVar4 = &uStack_7c;
    puVar16 = &uStack_80;
  }
  puVar15 = &uStack_84;
  if (iVar3 == 0) {
    puVar15 = &uStack_34;
  }
  uVar9 = *puVar4;
  uVar6 = *puVar15;
  uVar10 = FUN_71ba240c(*puVar16,param_2[1]);
  uStack_90 = uVar10;
  uVar11 = FUN_71ba240c(uVar6,*param_2);
  uStack_94 = uVar11;
  uVar6 = FUN_71ba240c(uVar9,param_2[2]);
  uStack_a0 = uStack_58;
  uStack_9c = uStack_54;
  uStack_8c = uVar6;
  uVar9 = FUN_71ba21e8(uVar10,uVar10);
  uVar12 = FUN_71ba21e8(uVar11,uVar11);
  FUN_71ba0b38(uVar12,uVar9);
  uVar9 = imp_sqrtf();
  iVar8 = FUN_71ba2d70(uVar9,0x3a83126f);
  iVar13 = FUN_71ba2d70(uVar9,0x3a83126f);
  uStack_98 = 0;
  if (iVar8 == 0) {
    uVar10 = FUN_71ba21e8(uStack_54,uStack_54);
    uVar11 = FUN_71ba21e8(uStack_58,uStack_58);
    FUN_71ba0b38(uVar11,uVar10);
    uVar7 = imp_sqrtf();
    iVar8 = FUN_71ba2d10(uVar7,0x3a83126f);
    if (iVar8 == 0) {
      iVar8 = FUN_71ba2cf0(uVar7 & 0x7fffffff,0x7f800000);
      iVar14 = FUN_71ba0408(uVar7 & 0x7fffffff,0x7f800000);
      if (iVar14 == 0 && iVar8 == 0) {
        FUN_7136d1d4(&uStack_a0,uVar7);
        goto LAB_71729e7c;
      }
    }
    bVar2 = false;
  }
  else {
    uStack_a4 = 0;
    uStack_a8 = FUN_71ba13e0(uVar10,uVar9);
    uStack_ac = FUN_71ba13e0(uVar11,uVar9);
    FUN_7136d040(&uStack_a0,&uStack_ac);
LAB_71729e7c:
    if ((iVar3 == 0) || (iVar3 = FUN_71ba2d70(uVar9,uVar5), iVar3 != 0)) {
      uStack_a4 = FUN_71ba21e8(uVar5,uStack_98);
      uStack_a8 = FUN_71ba21e8(uVar5,uStack_9c);
      uStack_ac = FUN_71ba21e8(uVar5,uStack_a0);
      FUN_7136d040(&uStack_94,&uStack_ac);
      uVar6 = FUN_71ba21e8(uVar5,uVar6);
      uVar6 = FUN_71ba13e0(uVar6,uVar9);
      if (iVar13 == 0) {
        uVar6 = 0;
      }
      iVar3 = FUN_71ba2d10(uVar6,0);
      uVar9 = uVar5;
      uStack_8c = uVar6;
      if (iVar3 == 0) {
        uVar6 = 0;
        uStack_8c = uVar6;
      }
    }
    else {
      iVar3 = FUN_71ba2d10(uVar9,0x40000000);
      if (iVar3 != 0) {
        uStack_a4 = FUN_71ba0b38(uStack_98,uStack_98);
        uStack_a8 = FUN_71ba0b38(uStack_9c,uStack_9c);
        uStack_ac = FUN_71ba0b38(uStack_a0,uStack_a0);
        FUN_7136d040(&uStack_94,&uStack_ac);
        uVar9 = 0x40000000;
        uStack_8c = uVar6;
      }
    }
    bVar2 = false;
    uVar9 = FUN_71ba0b38(uVar9,uVar9);
    iVar3 = FUN_71ba2d70(uVar9,0x41200000);
    uVar5 = 0x41200000;
    if (iVar3 != 0) {
      uVar5 = uVar9;
    }
    uStack_a8 = FUN_71ba13e0(uStack_90,uVar5);
    uVar9 = FUN_71ba21e8(uVar5,0x3c03126f);
    uVar10 = FUN_71ba0b38(uVar5,0x3f800000);
    uVar9 = FUN_71ba21e8(uVar9,uVar10);
    uVar9 = FUN_71ba21e8(uVar9,0x3f000000);
    uVar6 = FUN_71ba0b38(uVar9,uVar6);
    uStack_a4 = FUN_71ba13e0(uVar6,uVar5);
    uStack_ac = FUN_71ba13e0(uStack_94,uVar5);
    FUN_7136d040(param_3,&uStack_ac);
    uVar7 = *param_3;
    iVar3 = FUN_71ba2cf0(uVar7 & 0x7fffffff,0x7f800000);
    iVar8 = FUN_71ba0408(uVar7 & 0x7fffffff,0x7f800000);
    if (iVar8 == 0 && iVar3 == 0) {
      uVar7 = param_3[1];
      iVar3 = FUN_71ba2cf0(uVar7 & 0x7fffffff,0x7f800000);
      iVar8 = FUN_71ba0408(uVar7 & 0x7fffffff,0x7f800000);
      if (iVar8 == 0 && iVar3 == 0) {
        uVar7 = param_3[2];
        iVar3 = FUN_71ba2cf0(uVar7 & 0x7fffffff,0x7f800000);
        iVar8 = FUN_71ba0408(uVar7 & 0x7fffffff,0x7f800000);
        bVar2 = iVar8 == 0 && iVar3 == 0;
      }
    }
  }
  return bVar2;
}


// =========================================================================
// Function: FUN_7172b080
// Entry: 0x7172b080 | Size: 20 bytes
// =========================================================================

void FUN_7172b080(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_7172c914
// Entry: 0x7172c914 | Size: 7800 bytes
// =========================================================================

void FUN_7172c914(void)

{
  undefined4 *puVar1;
  
  *DAT_7120188c = 0x42480000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42a00000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b0e8;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b10c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b13c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b16c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b18c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b1bc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b1e8;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b208;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42480000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42a00000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b234;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b258;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b288;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b2b8;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b2d8;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b308;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b334;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b360;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x41a00000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x43480000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b380;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b3a0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b3d0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b400;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b42c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42480000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42a00000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b44c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b470;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b4a0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b4d0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b4f0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b520;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b54c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b578;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b59c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b5bc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b5ec;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b61c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b648;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42480000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42a00000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b668;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b68c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b6bc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42480000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42a00000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b6ec;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b710;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b740;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42480000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42a00000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b770;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b794;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b7c4;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42a00000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42480000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42a00000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b7f4;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b818;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b848;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42480000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42a00000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b878;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b89c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b8cc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x457a0000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42480000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42a00000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b8fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b930;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b95c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b994;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b9c0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172b9f0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172ba20;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172ba58;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42480000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42a00000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42480000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42a00000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172ba84;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172baa8;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172bad4;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172bb04;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172bb30;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42480000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42a00000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172bb50;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172bb74;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172bba0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172bbd0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172bbfc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42a00000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42480000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42a00000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172bc1c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172bc3c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172bc6c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42480000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42a00000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0xc57a0000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x457a0000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42480000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42a00000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172bc9c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172bccc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172bcec;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172bd1c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172bd48;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42a00000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42480000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42a00000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172bd68;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172bd88;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172bdb4;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172bde4;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172be10;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172be30;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172be5c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172be88;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42480000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42a00000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172beac;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172bed0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172bf00;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172bf2c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172bf50;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x43480000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x41a00000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c8e8;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42480000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42a00000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172bf80;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172bfa4;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172bfd4;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c024;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42480000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42a00000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c050;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c074;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c0a4;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c0d0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c0f4;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42480000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42a00000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c120;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c144;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c174;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c1a0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c1c4;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42480000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42a00000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c1f0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c214;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c240;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c260;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42480000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42a00000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c290;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c2b0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c2e0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c30c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c330;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42480000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42a00000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42480000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42a00000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c35c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c380;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c3b0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42480000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42a00000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c3e0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c404;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c434;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42480000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42a00000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c464;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c488;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c4b4;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c4e0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c500;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42480000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42a00000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c530;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c550;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c580;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42480000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42a00000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c5b0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c5d4;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c604;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42480000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42a00000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c634;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c654;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c684;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c6b4;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c6d4;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c704;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c730;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c75c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71474580;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42480000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x42a00000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c77c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c7a0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c7d0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c800;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c820;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c850;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c87c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c89c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7172c8c8;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0xc57a0000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x457a0000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x457a0000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x447a0000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x457a0000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x447a0000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0xc57a0000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x457a0000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x447a0000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x457a0000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x447a0000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x457a0000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x447a0000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x457a0000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x447a0000;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// =========================================================================
// Function: _fIBtgpxfBxggJbskhIdxeyzFIpq
// Entry: 0x7172fa64 | Size: 916 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _fIBtgpxfBxggJbskhIdxeyzFIpq(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  int aiStack_40 [4];
  int *piStack_30;
  int iStack_28;
  
  iStack_28 = _ext___stack_chk_guard;
  uVar6 = imp_strlen(param_1);
  if (0xfffffff7 < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_50);
  }
  if (uVar6 < 0xb) {
    uStack_50 = CONCAT31(uStack_50._1_3_,(char)(uVar6 << 1));
    uVar8 = (uint)&uStack_50 | 1;
    if (uVar6 != 0) goto LAB_7172fae4;
  }
  else {
    uVar8 = thunk_MwhHq((uVar6 | 7) + 1);
    uStack_50 = (uVar6 | 7) + 2;
    uStack_4c = uVar6;
    uStack_48 = uVar8;
LAB_7172fae4:
    imp___aeabi_memcpy(uVar8,param_1,uVar6);
  }
  *(undefined1 *)(uVar8 + uVar6) = 0;
  uVar6 = imp_strlen(param_2);
  if (0xfffffff7 < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_60);
  }
  if (uVar6 < 0xb) {
    uStack_60 = CONCAT31(uStack_60._1_3_,(char)(uVar6 << 1));
    uVar8 = (uint)&uStack_60 | 1;
    if (uVar6 != 0) goto LAB_7172fb54;
  }
  else {
    uVar8 = thunk_MwhHq((uVar6 | 7) + 1);
    uStack_60 = (uVar6 | 7) + 2;
    uStack_5c = uVar6;
    uStack_58 = uVar8;
LAB_7172fb54:
    imp___aeabi_memcpy(uVar8,param_2,uVar6);
  }
  uVar4 = uStack_50;
  *(undefined1 *)(uVar8 + uVar6) = 0;
  uVar1 = DAT_712017fc;
  if ((uStack_50 & 1) == 0) {
    uStack_78 = uStack_50;
    uStack_74 = uStack_4c;
    uStack_70 = uStack_48;
  }
  else {
    FUN_712f6d58(&uStack_78,uStack_48,uStack_4c);
  }
  uVar6 = uStack_60;
  if ((uStack_60 & 1) == 0) {
    uStack_6c = uStack_60;
    uStack_68 = uStack_5c;
    uStack_64 = uStack_58;
  }
  else {
    FUN_712f6d58(&uStack_6c,uStack_58,uStack_5c);
  }
  piStack_30 = (int *)thunk_MwhHq(0x1c);
  uVar3 = uStack_64;
  uVar2 = uStack_68;
  uVar8 = uStack_6c;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  piVar5 = aiStack_40;
  piStack_30[1] = uStack_78;
  piStack_30[2] = uStack_74;
  piStack_30[3] = uStack_70;
  *piStack_30 = (int)&DAT_70b0f0c0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  piStack_30[4] = uVar8;
  piStack_30[5] = uVar2;
  piStack_30[6] = uVar3;
  FUN_717ccb10(uVar1,piVar5);
  if (piStack_30 == piVar5) {
    iVar7 = 0x10;
  }
  else {
    iVar7 = 0x14;
    piVar5 = piStack_30;
    if (piStack_30 == (int *)0x0) goto LAB_7172fc64;
  }
  (**(code **)(*piVar5 + iVar7))();
LAB_7172fc64:
  if ((uStack_6c & 1) != 0) {
    qNQrlu(uStack_64);
  }
  if ((uStack_78 & 1) != 0) {
    qNQrlu(uStack_70);
  }
  if ((uVar6 & 1) != 0) {
    qNQrlu(uStack_58);
  }
  if ((uVar4 & 1) != 0) {
    qNQrlu(uStack_48);
  }
  if (_ext___stack_chk_guard != iStack_28) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail();
  }
  return;
}


// =========================================================================
// Function: wPtGKbsamJiceMtjNWvQPeWtN
// Entry: 0x7172ff68 | Size: 248 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wPtGKbsamJiceMtjNWvQPeWtN(void)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *apuStack_30 [4];
  int *piStack_20;
  int iStack_14;
  
  piStack_20 = (int *)apuStack_30;
  ppuVar1 = apuStack_30;
  iStack_14 = _ext___stack_chk_guard;
  apuStack_30[0] = &DAT_70b0f0e4;
  FUN_717ccb10(DAT_712017fc,apuStack_30);
  if ((undefined **)piStack_20 == apuStack_30) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = 0x14;
    ppuVar1 = (undefined **)piStack_20;
    if (piStack_20 == (int *)0x0) goto LAB_7172ffe4;
  }
  (**(code **)((int)*ppuVar1 + iVar2))();
LAB_7172ffe4:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_717300d8
// Entry: 0x717300d8 | Size: 560 bytes
// =========================================================================

void FUN_717300d8(int *param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_8 = param_3;
  uStack_4 = param_4;
  iVar1 = FUN_71659d04(&DAT_711f6bb8);
  if (iVar1 == 0) {
    if ((*param_2 & 1) == 0) {
      uStack_38 = *param_2;
      uStack_34 = param_2[1];
      uStack_30 = param_2[2];
      goto LAB_71730168;
    }
    uVar2 = param_2[1];
    uVar4 = param_2[2];
  }
  else {
    if ((*(byte *)(iVar1 + 0x14) & 1) == 0) {
      uStack_38 = *(uint *)(iVar1 + 0x14);
      uStack_34 = *(uint *)(iVar1 + 0x18);
      uStack_30 = *(uint *)(iVar1 + 0x1c);
      goto LAB_71730168;
    }
    uVar2 = *(uint *)(iVar1 + 0x18);
    uVar4 = *(uint *)(iVar1 + 0x1c);
  }
  FUN_712f6d58(&uStack_38,uVar4,uVar2);
LAB_71730168:
  uVar2 = uStack_30;
  if ((uStack_38 & 1) == 0) {
    uVar2 = (uint)&uStack_38 | 1;
  }
  uVar2 = imp___vsnprintf_chk(0,0,0,0xffffffff,uVar2,&uStack_8);
  if (uVar2 - 0xffb < 0xfffff006) {
    *(undefined2 *)param_1 = 0;
  }
  else {
    iVar1 = uVar2 + 1;
    uVar3 = thunk__IBDl(iVar1);
    imp___aeabi_memclr(uVar3,iVar1);
    uVar4 = uStack_30;
    if ((uStack_38 & 1) == 0) {
      uVar4 = (uint)&uStack_38 | 1;
    }
    imp___vsnprintf_chk(uVar3,iVar1,0,0xffffffff,uVar4,&uStack_8);
    if (uVar2 < 0xb) {
      iVar1 = (int)param_1 + 1;
      *(char *)param_1 = (char)(uVar2 << 1);
    }
    else {
      iVar1 = thunk_MwhHq((uVar2 | 7) + 1);
      *param_1 = (uVar2 | 7) + 2;
      param_1[1] = uVar2;
      param_1[2] = iVar1;
    }
    imp___aeabi_memcpy(iVar1,uVar3,uVar2);
    *(undefined1 *)(iVar1 + uVar2) = 0;
    dGrRHE(uVar3);
  }
  if ((uStack_38 & 1) != 0) {
    qNQrlu(uStack_30);
  }
  return;
}


// =========================================================================
// Function: FUN_717303d0
// Entry: 0x717303d0 | Size: 628 bytes
// =========================================================================

void FUN_717303d0(undefined2 *param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  undefined4 *puStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_8 = param_3;
  uStack_4 = param_4;
  iVar1 = FUN_71659d04(&DAT_711f6bb8);
  if (iVar1 == 0) {
    if ((*param_2 & 1) == 0) {
      uStack_38 = *param_2;
      uStack_34 = param_2[1];
      uStack_30 = param_2[2];
      goto LAB_71730460;
    }
    uVar2 = param_2[1];
    uVar4 = param_2[2];
  }
  else {
    if ((*(byte *)(iVar1 + 0x14) & 1) == 0) {
      uStack_38 = *(uint *)(iVar1 + 0x14);
      uStack_34 = *(uint *)(iVar1 + 0x18);
      uStack_30 = *(uint *)(iVar1 + 0x1c);
      goto LAB_71730460;
    }
    uVar2 = *(uint *)(iVar1 + 0x18);
    uVar4 = *(uint *)(iVar1 + 0x1c);
  }
  FUN_712f6d58(&uStack_38,uVar4,uVar2);
LAB_71730460:
  uVar2 = uStack_30;
  if ((uStack_38 & 1) == 0) {
    uVar2 = (uint)&uStack_38 | 1;
  }
  puStack_3c = &uStack_8;
  uVar2 = imp___vsnprintf_chk(0,0,0,0xffffffff,uVar2,&uStack_8);
  if (uVar2 - 0xffb < 0xfffff006) {
    *param_1 = 0;
  }
  else {
    iVar1 = uVar2 + 1;
    uVar3 = thunk__IBDl(iVar1);
    imp___aeabi_memclr(uVar3,iVar1);
    uVar4 = uStack_30;
    if ((uStack_38 & 1) == 0) {
      uVar4 = (uint)&uStack_38 | 1;
    }
    puStack_3c = &uStack_8;
    imp___vsnprintf_chk(uVar3,iVar1,0,0xffffffff,uVar4,&uStack_8);
    if (uVar2 < 0xb) {
      uVar4 = (uint)&uStack_48 | 1;
      uStack_48 = CONCAT31(uStack_48._1_3_,(char)(uVar2 << 1));
    }
    else {
      uVar4 = thunk_MwhHq((uVar2 | 7) + 1);
      uStack_48 = (uVar2 | 7) + 2;
      uStack_44 = uVar2;
      uStack_40 = uVar4;
    }
    imp___aeabi_memcpy(uVar4,uVar3,uVar2);
    *(undefined1 *)(uVar4 + uVar2) = 0;
    FUN_71800d24(param_1,&uStack_48);
    if ((uStack_48 & 1) != 0) {
      qNQrlu(uStack_40);
    }
    dGrRHE(uVar3);
  }
  if ((uStack_38 & 1) != 0) {
    qNQrlu(uStack_30);
  }
  return;
}


// =========================================================================
// Function: FUN_7173072c
// Entry: 0x7173072c | Size: 104 bytes
// =========================================================================

void FUN_7173072c(undefined4 param_1,uint *param_2)

{
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  
  uStack_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_71800cf0(param_1,&uStack_18);
  if ((uStack_18 & 1) != 0) {
    qNQrlu(uStack_10);
  }
  return;
}


// =========================================================================
// Function: FUN_71730c10
// Entry: 0x71730c10 | Size: 96 bytes
// =========================================================================

void FUN_71730c10(int param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    qNQrlu(*(undefined4 *)(param_1 + 0x18));
  }
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    qNQrlu(*(undefined4 *)(param_1 + 0xc));
  }
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: FUN_71730d44
// Entry: 0x71730d44 | Size: 1264 bytes
// =========================================================================

void FUN_71730d44(undefined4 *param_1,int *param_2,byte *param_3,byte *param_4,byte *param_5)

{
  byte bVar1;
  byte *pbVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  int *unaff_r6;
  uint uVar14;
  uint uVar15;
  uint uStack_38;
  
  pbVar13 = *(byte **)(param_3 + 8);
  uVar14 = *(uint *)(param_3 + 4);
  uVar10 = uVar14;
  pbVar2 = pbVar13;
  uVar9 = uVar14;
  if ((*param_3 & 1) == 0) {
    pbVar13 = param_3 + 1;
    uVar14 = (uint)(*param_3 >> 1);
    uVar10 = uVar14;
    pbVar2 = pbVar13;
    uVar9 = uVar14;
  }
  for (; 3 < uVar14; uVar14 = uVar14 - 4) {
    uVar10 = (*(int *)pbVar13 * 0x5bd1e995 ^ (uint)(*(int *)pbVar13 * 0x5bd1e995) >> 0x18) *
             0x5bd1e995 ^ uVar10 * 0x5bd1e995;
    pbVar13 = pbVar13 + 4;
  }
  if (uVar14 == 1) {
LAB_71730de8:
    uVar10 = (uVar10 ^ *pbVar13) * 0x5bd1e995;
  }
  else {
    if (uVar14 == 2) {
LAB_71730de0:
      uVar10 = uVar10 ^ (uint)pbVar13[1] << 8;
      goto LAB_71730de8;
    }
    if (uVar14 == 3) {
      uVar10 = uVar10 ^ (uint)pbVar13[2] << 0x10;
      goto LAB_71730de0;
    }
  }
  uVar15 = param_2[1];
  uVar14 = (uVar10 ^ uVar10 >> 0xd) * 0x5bd1e995;
  uVar14 = uVar14 ^ uVar14 >> 0xf;
  if (uVar15 != 0) {
    uVar10 = uVar15 - (uVar15 >> 1 & 0x55555555);
    uVar10 = (uVar10 & 0x33333333) + (uVar10 >> 2 & 0x33333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
    if (uVar10 < 2) {
      uStack_38 = uVar14 & uVar15 - 1;
    }
    else {
      uStack_38 = uVar14;
      if (uVar15 <= uVar14) {
        FUN_71ba33fc(uVar14,uVar15);
        uStack_38 = extraout_r1;
      }
    }
    puVar4 = *(undefined4 **)(*param_2 + uStack_38 * 4);
    if (puVar4 != (undefined4 *)0x0) {
      unaff_r6 = (int *)*puVar4;
    }
    if (puVar4 != (undefined4 *)0x0 && unaff_r6 != (int *)0x0) {
      do {
        uVar5 = unaff_r6[1];
        if (uVar5 == uVar14) {
          uVar5 = unaff_r6[3];
          bVar1 = *(byte *)(unaff_r6 + 2);
          if ((bVar1 & 1) == 0) {
            uVar5 = (uint)(bVar1 >> 1);
          }
          if (uVar5 == uVar9) {
            if ((bVar1 & 1) == 0) {
              if (bVar1 < 2) {
LAB_717310cc:
                uVar3 = 0;
                goto LAB_71731164;
              }
              uVar5 = 0;
              while (*(byte *)((int)unaff_r6 + uVar5 + 9) == pbVar2[uVar5]) {
                uVar5 = uVar5 + 1;
                if (bVar1 >> 1 == uVar5) goto LAB_717310cc;
              }
            }
            else {
              iVar11 = imp_memcmp(unaff_r6[4],pbVar2);
              if (iVar11 == 0) goto LAB_717310cc;
            }
          }
        }
        else {
          if (uVar10 < 2) {
            uVar5 = uVar5 & uVar15 - 1;
          }
          else if (uVar15 <= uVar5) {
            FUN_71ba33fc(uVar5,uVar15);
            uVar5 = extraout_r1_00;
          }
          if (uVar5 != uStack_38) break;
        }
        unaff_r6 = (int *)*unaff_r6;
      } while (unaff_r6 != (int *)0x0);
    }
  }
  unaff_r6 = (int *)thunk_MwhHq(0x20);
  *unaff_r6 = 0;
  unaff_r6[1] = uVar14;
  if ((*param_4 & 1) == 0) {
    iVar11 = *(int *)(param_4 + 4);
    iVar12 = *(int *)(param_4 + 8);
    unaff_r6[2] = *(int *)param_4;
    unaff_r6[3] = iVar11;
    unaff_r6[4] = iVar12;
  }
  else {
    FUN_712f6d58(unaff_r6 + 2,*(undefined4 *)(param_4 + 8),*(undefined4 *)(param_4 + 4));
  }
  if ((*param_5 & 1) == 0) {
    iVar11 = *(int *)(param_5 + 4);
    iVar12 = *(int *)(param_5 + 8);
    unaff_r6[5] = *(int *)param_5;
    unaff_r6[6] = iVar11;
    unaff_r6[7] = iVar12;
  }
  else {
    FUN_712f6d58(unaff_r6 + 5,*(undefined4 *)(param_5 + 8),*(undefined4 *)(param_5 + 4));
  }
  uVar7 = FUN_71ba1e0c(uVar15);
  iVar11 = param_2[3];
  iVar12 = param_2[4];
  uVar7 = FUN_71ba21e8(iVar12,uVar7);
  uVar8 = FUN_71ba1e0c(iVar11 + 1);
  if ((uVar15 == 0) || (iVar11 = FUN_71ba2d10(uVar7,uVar8), iVar11 != 0)) {
    uVar10 = 1;
    if ((2 < uVar15) && (uVar10 = 0, (uVar15 & uVar15 - 1) != 0)) {
      uVar10 = 1;
    }
    uVar10 = uVar10 | uVar15 << 1;
    FUN_71ba13e0(uVar8,iVar12);
    imp_ceilf();
    uVar9 = FUN_71ba1910();
    if (uVar10 <= uVar9) {
      uVar10 = uVar9;
    }
    FUN_7165a7a8(param_2,uVar10);
    uVar15 = param_2[1];
    if ((uVar15 & uVar15 - 1) == 0) {
      uStack_38 = uVar15 - 1 & uVar14;
    }
    else {
      uStack_38 = uVar14;
      if (uVar15 <= uVar14) {
        FUN_71ba33fc(uVar14,uVar15);
        uStack_38 = extraout_r1_01;
      }
    }
  }
  iVar11 = *param_2;
  piVar6 = *(int **)(iVar11 + uStack_38 * 4);
  if (piVar6 == (int *)0x0) {
    piVar6 = param_2 + 2;
    *unaff_r6 = *piVar6;
    *piVar6 = (int)unaff_r6;
    *(int **)(iVar11 + uStack_38 * 4) = piVar6;
    if (*unaff_r6 == 0) goto LAB_71731154;
    uVar14 = *(uint *)(*unaff_r6 + 4);
    if ((uVar15 & uVar15 - 1) == 0) {
      uVar14 = uVar14 & uVar15 - 1;
    }
    else if (uVar15 <= uVar14) {
      FUN_71ba33fc(uVar14,uVar15);
      uVar14 = extraout_r1_02;
    }
    piVar6 = (int *)(*param_2 + uVar14 * 4);
  }
  else {
    *unaff_r6 = *piVar6;
  }
  *piVar6 = (int)unaff_r6;
LAB_71731154:
  param_2[3] = param_2[3] + 1;
  uVar3 = 1;
LAB_71731164:
  *(undefined1 *)(param_1 + 1) = uVar3;
  *param_1 = unaff_r6;
  return;
}


// =========================================================================
// Function: FUN_71731448
// Entry: 0x71731448 | Size: 4 bytes
// =========================================================================

void FUN_71731448(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x71731464 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x71731480 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_717316bc
// Entry: 0x717316bc | Size: 1756 bytes
// =========================================================================

void FUN_717316bc(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_4c;
  int iStack_48;
  int iStack_40;
  int iStack_3c;
  uint uStack_28;
  int iStack_24;
  
  if ((DAT_711f6c05 != '\0') && (param_2 == 0)) {
    return;
  }
  DataMemoryBarrier(0xb);
  if ((DAT_711f6c0c & 1) == 0) {
    iVar4 = cuKsjVZRyspaVsDnqLy(&DAT_711f6c0c);
    if (iVar4 != 0) {
      thunk_raw_10ab3090(0x71b450e5,&DAT_711f6c08,&DAT_70b0e000);
      SixizuLbAnqfgRApsCY(&DAT_711f6c0c);
    }
  }
  cfqspBX_JrdDvACwYrAyrngjQ(&DAT_711f6c08);
  cAVowcMDgjNlKlwaXlLRnhcfdxnJsEWOPLMGMHS(&uStack_28);
  iVar4 = DAT_712017f8;
  if (DAT_711f6c10 == '\0') {
    DAT_711f6c10 = '\x01';
    DAT_711f6c20 = uStack_28 + 0xc4653600;
    DAT_711f6c18 = uStack_28;
    DAT_711f6c1c = iStack_24;
    DAT_711f6c24 = iStack_24 - (uint)(uStack_28 < 1000000000);
  }
  if ((param_2 != 0) ||
     ((int)(uint)(uStack_28 - DAT_711f6c20 < 1000000000) <=
      (int)(iStack_24 - (DAT_711f6c24 + (uint)(uStack_28 < DAT_711f6c20))))) {
    DAT_711f6c20 = uStack_28;
    DAT_711f6c24 = iStack_24;
    if (DAT_712017f8 != 0) {
      uVar2 = FUN_71ba3034(uStack_28 - DAT_711f6c18,
                           iStack_24 - (DAT_711f6c1c + (uint)(uStack_28 < DAT_711f6c18)),1000000,0);
      DataMemoryBarrier(0xb);
      if ((DAT_711f6c34 & 1) == 0) {
        iVar1 = cuKsjVZRyspaVsDnqLy(&DAT_711f6c34);
        if (iVar1 != 0) {
          pcVar5 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fa058);
          if (*pcVar5 == '\0') {
            puVar7 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa048);
            *puVar7 = 0xba665b04;
            puVar7[1] = 0x178de52f;
            puVar7[2] = 0xbc555404;
            *(undefined1 *)((int)puVar7 + 0xf) = 1;
            *(undefined4 *)((int)puVar7 + 0xb) = 0xe9ee33bc;
            GFDIUClbc_QcPNgD_wH(&LAB_7173a3d8,puVar7,&DAT_70b0e000);
            puVar8 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa058);
            *puVar8 = 1;
          }
          pbVar6 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fa048);
          if (pbVar6[0xf] != 0) {
            *pbVar6 = *pbVar6 ^ 0x6b;
            pbVar6[1] = pbVar6[1] ^ 0x35;
            pbVar6[2] = pbVar6[2] ^ 0x31;
            pbVar6[3] = pbVar6[3] ^ 0xd5;
            pbVar6[0xf] = 0;
            pbVar6[4] = pbVar6[4] ^ 0x5d;
            pbVar6[5] = pbVar6[5] ^ 0x89;
            pbVar6[6] = pbVar6[6] ^ 0xe9;
            pbVar6[7] = pbVar6[7] ^ 0x5b;
            pbVar6[8] = pbVar6[8] ^ 0x6b;
            pbVar6[9] = pbVar6[9] ^ 0x35;
            pbVar6[10] = pbVar6[10] ^ 0x31;
            pbVar6[0xb] = pbVar6[0xb] ^ 0xd5;
            pbVar6[0xc] = pbVar6[0xc] ^ 0x5d;
            pbVar6[0xd] = pbVar6[0xd] ^ 0x89;
            pbVar6[0xe] = pbVar6[0xe] ^ 0xe9;
          }
          DAT_711f6c30 = FUN_71885ba4(pbVar6,0);
          SixizuLbAnqfgRApsCY(&DAT_711f6c34);
        }
      }
      uVar9 = DAT_711f6c30;
      imp___aeabi_memclr4(&iStack_58,0x30);
      uStack_5c = uVar9;
      uVar9 = FUN_71521824(&uStack_5c,param_1);
      uVar2 = FUN_713a0424(uVar9,uVar2);
      cfqspBX_JrdDvACwYrAyrngjQ(iVar4 + 0x34);
      piVar3 = (int *)thunk_MwhHq(0x3c);
      *piVar3 = 0;
      piVar3[1] = 0;
      FUN_713a10f8(piVar3 + 2,uVar2);
      piVar3[1] = iVar4 + 0x38;
      iVar1 = *(int *)(iVar4 + 0x38);
      *piVar3 = iVar1;
      *(int **)(iVar1 + 4) = piVar3;
      *(int **)(iVar4 + 0x38) = piVar3;
      *(int *)(iVar4 + 0x40) = *(int *)(iVar4 + 0x40) + 1;
      QgduklVhdVlmSiqzGQeutncbrNj(iVar4 + 0x34);
      if (iStack_40 != 0) {
        iStack_3c = iStack_40;
        qNQrlu();
      }
      if (iStack_4c != 0) {
        iStack_48 = iStack_4c;
        qNQrlu();
      }
      if (iStack_58 != 0) {
        iStack_54 = iStack_58;
        qNQrlu();
      }
    }
  }
  QgduklVhdVlmSiqzGQeutncbrNj(&DAT_711f6c08);
  return;
}


// =========================================================================
// Function: smDTzZY_msfHAEXAMHuLI
// Entry: 0x717320dc | Size: 4 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void smDTzZY_msfHAEXAMHuLI
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  char *pcVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  byte abStack_1040 [8];
  uint uStack_1038;
  undefined4 *puStack_1034;
  undefined1 auStack_1030 [4096];
  int iStack_30;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iStack_30 = _ext___stack_chk_guard;
  DataMemoryBarrier(0xb);
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  if (((DAT_71202734 & 1) == 0) && (iVar6 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_71202734), iVar6 != 0)) {
    thunk_raw_10ab3090(0x71b450e5,&DAT_71202730,&DAT_70b0e000);
    thunk_SixizuLbAnqfgRApsCY(&DAT_71202734);
  }
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71202730);
  imp___aeabi_memclr8(auStack_1030,0xfff);
  puStack_1034 = &uStack_c;
  imp___vsnprintf_chk(auStack_1030,0xfff,0,0xfff,param_1,puStack_1034);
  uVar1 = imp_strlen(auStack_1030);
  uVar1 = FUN_71886a98(&DAT_712026a8,auStack_1030,uVar1);
  abStack_1040[0] = 10;
  FUN_71886a98(uVar1,abStack_1040,1);
  iVar6 = DAT_71201808;
  if (DAT_71201808 != 0) {
    pcVar2 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_70102094);
    if (*pcVar2 == '\0') {
      puVar4 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_70102084);
      *(undefined2 *)(puVar4 + 2) = 0x1e3;
      *puVar4 = 0x84a44580;
      puVar4[1] = 0xf85a6105;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71886a6c,puVar4,&DAT_70b0e000);
      puVar5 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_70102094);
      *puVar5 = 1;
    }
    pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_70102084);
    if (pbVar3[9] != 0) {
      pbVar3[9] = 0;
      *pbVar3 = *pbVar3 ^ 0xe3;
      pbVar3[1] = pbVar3[1] ^ 0x37;
      pbVar3[2] = pbVar3[2] ^ 0xc5;
      pbVar3[3] = pbVar3[3] ^ 0xf7;
      pbVar3[4] = pbVar3[4] ^ 0x6d;
      pbVar3[5] = pbVar3[5] ^ 0xd;
      pbVar3[6] = pbVar3[6] ^ 0x35;
      pbVar3[7] = pbVar3[7] ^ 0x9f;
      pbVar3[8] = pbVar3[8] ^ 0xe3;
    }
    thunk_kQYqFxAwolEAJmJHuBnNLeFGVBJlINyxDZLgdjRUzMEZAzoSTEgsEiEDNcqptjEx_kzJstpEIQEl
              (abStack_1040,&DAT_712026ac);
    uVar7 = uStack_1038;
    if ((abStack_1040[0] & 1) == 0) {
      uVar7 = (uint)abStack_1040 | 1;
    }
    FUN_717db1ec(iVar6,pbVar3,uVar7);
    if ((abStack_1040[0] & 1) != 0) {
      thunk_qNQrlu(uStack_1038);
    }
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71202730);
  if (_ext___stack_chk_guard != iStack_30) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail();
  }
  return;
}


// =========================================================================
// Function: thunk_FUN_7188543c
// Entry: 0x717320f8 | Size: 4 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_7188543c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  char *pcVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  byte abStack_1040 [8];
  uint uStack_1038;
  undefined4 *puStack_1034;
  undefined1 auStack_1030 [4096];
  int iStack_30;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iStack_30 = _ext___stack_chk_guard;
  DataMemoryBarrier(0xb);
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  if (((DAT_71202734 & 1) == 0) && (iVar6 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_71202734), iVar6 != 0)) {
    thunk_raw_10ab3090(0x71b450e5,&DAT_71202730,&DAT_70b0e000);
    thunk_SixizuLbAnqfgRApsCY(&DAT_71202734);
  }
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71202730);
  imp___aeabi_memclr8(auStack_1030,0xfff);
  puStack_1034 = &uStack_c;
  imp___vsnprintf_chk(auStack_1030,0xfff,0,0xfff,param_1,puStack_1034);
  uVar1 = imp_strlen(auStack_1030);
  uVar1 = FUN_71886a98(&DAT_712026a8,auStack_1030,uVar1);
  abStack_1040[0] = 10;
  FUN_71886a98(uVar1,abStack_1040,1);
  iVar6 = DAT_71201808;
  if (DAT_71201808 != 0) {
    pcVar2 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_70102094);
    if (*pcVar2 == '\0') {
      puVar4 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_70102084);
      *(undefined2 *)(puVar4 + 2) = 0x1e3;
      *puVar4 = 0x84a44580;
      puVar4[1] = 0xf85a6105;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71886a6c,puVar4,&DAT_70b0e000);
      puVar5 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_70102094);
      *puVar5 = 1;
    }
    pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_70102084);
    if (pbVar3[9] != 0) {
      pbVar3[9] = 0;
      *pbVar3 = *pbVar3 ^ 0xe3;
      pbVar3[1] = pbVar3[1] ^ 0x37;
      pbVar3[2] = pbVar3[2] ^ 0xc5;
      pbVar3[3] = pbVar3[3] ^ 0xf7;
      pbVar3[4] = pbVar3[4] ^ 0x6d;
      pbVar3[5] = pbVar3[5] ^ 0xd;
      pbVar3[6] = pbVar3[6] ^ 0x35;
      pbVar3[7] = pbVar3[7] ^ 0x9f;
      pbVar3[8] = pbVar3[8] ^ 0xe3;
    }
    thunk_kQYqFxAwolEAJmJHuBnNLeFGVBJlINyxDZLgdjRUzMEZAzoSTEgsEiEDNcqptjEx_kzJstpEIQEl
              (abStack_1040,&DAT_712026ac);
    uVar7 = uStack_1038;
    if ((abStack_1040[0] & 1) == 0) {
      uVar7 = (uint)abStack_1040 | 1;
    }
    FUN_717db1ec(iVar6,pbVar3,uVar7);
    if ((abStack_1040[0] & 1) != 0) {
      thunk_qNQrlu(uStack_1038);
    }
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71202730);
  if (_ext___stack_chk_guard != iStack_30) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail();
  }
  return;
}


// =========================================================================
// Function: TyWiliOztmPfplQzZ
// Entry: 0x71732114 | Size: 100 bytes
// =========================================================================

void TyWiliOztmPfplQzZ(undefined4 param_1)

{
  TLUeCDiekSSzXIoKMrpDGxbhUhOecwKWVtKHyZVlDPMMdVvsalzdkegtCtYHBtVMbgUoWiuRKGDAl
            (&DAT_711f6bd0,param_1);
  thunk_TLUeCDiekSSzXIoKMrpDGxbhUhOecwKWVtKHyZVlDPMMdVvsalzdkegtCtYHBtVMbgUoWiuRKGDAl
            (&DAT_711f6be0,param_1);
  return;
}


// =========================================================================
// Function: buKUlPrTMQXkaBrn_GPeJk
// Entry: 0x717321d4 | Size: 36 bytes
// =========================================================================

void buKUlPrTMQXkaBrn_GPeJk(void)

{
  DAT_711f6bf8 = 1;
  return;
}


// =========================================================================
// Function: Java_com_native_Main_setSinglePlayer
// Entry: 0x71732220 | Size: 36 bytes
// =========================================================================

void Java_com_native_Main_setSinglePlayer(void)

{
  DAT_711f6bf8 = 1;
  return;
}


// =========================================================================
// Function: wIgKQUCMRMexujTFX
// Entry: 0x7173226c | Size: 96 bytes
// =========================================================================

void wIgKQUCMRMexujTFX(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = DAT_711f6c28;
  iVar2 = imp_strlen(DAT_711f6c28);
  uVar3 = imp_malloc(iVar2 + 1);
  imp_strcpy(uVar3,uVar1);
  return;
}


// =========================================================================
// Function: fgTkId_DDCnKzdTxfwcZstd
// Entry: 0x71732324 | Size: 328 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fgTkId_DDCnKzdTxfwcZstd(void)

{
  char cVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined *apuStack_30 [4];
  int *piStack_20;
  int iStack_14;
  
  ppuVar2 = apuStack_30;
  iStack_14 = _ext___stack_chk_guard;
  if (DAT_712017fc != 0) {
    cVar1 = '\0';
    if (DAT_712017f8 != 0) {
      cVar1 = DAT_711f6c05;
    }
    if (DAT_712017f8 != 0 && cVar1 != '\0') {
      apuStack_30[0] = &DAT_70b0f108;
      piStack_20 = (int *)apuStack_30;
      FUN_717ccb10(DAT_712017fc,apuStack_30);
      if ((undefined **)piStack_20 == apuStack_30) {
        iVar3 = 0x10;
      }
      else {
        iVar3 = 0x14;
        ppuVar2 = (undefined **)piStack_20;
        if (piStack_20 == (int *)0x0) goto LAB_717323cc;
      }
      (**(code **)((int)*ppuVar2 + iVar3))();
    }
  }
LAB_717323cc:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_71732500
// Entry: 0x71732500 | Size: 4092 bytes
// =========================================================================

void FUN_71732500(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  byte bVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  pcVar5 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fa098);
  if (*pcVar5 == '\0') {
    puVar11 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa088);
    *puVar11 = 0x56879c16;
    *(undefined2 *)(puVar11 + 1) = 0x19d;
    GFDIUClbc_QcPNgD_wH(&LAB_7173a458,puVar11,&DAT_70b0e000);
    puVar12 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa098);
    *puVar12 = 1;
  }
  pbVar6 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fa088);
  if (pbVar6[5] != 0) {
    pbVar6[5] = 0;
    *pbVar6 = *pbVar6 ^ 0x7b;
    pbVar6[1] = pbVar6[1] ^ 0xf9;
    pbVar6[2] = pbVar6[2] ^ 0xe9;
    pbVar6[3] = pbVar6[3] ^ 0x23;
    pbVar6[4] = pbVar6[4] ^ 0x9d;
  }
  FUN_717316bc(pbVar6,0);
  FUN_717c2258(&DAT_71201664);
  FUN_7163813c();
  thunk_MwhHq(0x138f0);
  DAT_711a3938 = FUN_71561b30();
  FUN_71562cdc();
  thunk_MwhHq(0xb0);
  DAT_711e9ee4 = FUN_7164d790();
  thunk_MwhHq(0x89cc);
  DAT_711e9f4c = FUN_716532c8();
  thunk_MwhHq(0x24);
  DAT_711acb94 = FUN_715e4118();
  thunk_MwhHq(0x10);
  DAT_711a381c = FUN_71524f8c();
  thunk_MwhHq(8);
  DAT_711a3b8c = FUN_715aed74();
  FUN_714e272c();
  FUN_7162e97c();
  pcVar5 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fa0b8);
  if (*pcVar5 == '\0') {
    puVar11 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa0a8);
    *(undefined1 *)((int)puVar11 + 0x1e) = 1;
    uVar3 = DAT_70084f10;
    uVar9 = DAT_70084f0c;
    *puVar11 = DAT_70084f08;
    puVar11[1] = uVar9;
    puVar11[2] = uVar3;
    uVar4 = DAT_70084f20;
    uVar3 = DAT_70084f1c;
    uVar9 = DAT_70084f18;
    puVar11[3] = DAT_70084f14;
    puVar11[4] = uVar9;
    puVar11[5] = uVar3;
    puVar11[6] = uVar4;
    *(undefined2 *)(puVar11 + 7) = DAT_70084f24;
    GFDIUClbc_QcPNgD_wH(&LAB_7173a480,puVar11,&DAT_70b0e000);
    puVar12 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa0b8);
    *puVar12 = 1;
  }
  iVar7 = XcxSszXLPjQrEGhecEv_(&DAT_700fa0a8);
  if (*(char *)(iVar7 + 0x1e) != '\0') {
    uVar8 = 0;
    uVar14 = 0;
    do {
      iVar15 = (uVar8 & 7) * 8;
      uVar16 = iVar15 - 0x20;
      bVar13 = (byte)(0xc7a9fbe5 >> iVar15) | (byte)(0x61f17745 << ((uVar8 & 7) * -8 + 0x20 & 0xff))
      ;
      if (-1 < (int)uVar16) {
        bVar13 = (byte)(0x61f17745 >> (uVar16 & 0xff));
      }
      *(byte *)(iVar7 + uVar8) = *(byte *)(iVar7 + uVar8) ^ bVar13;
      bVar17 = 0xfffffffe < uVar8;
      bVar1 = uVar14 == 0;
      bVar2 = (0x1c < uVar8) <= uVar14;
      uVar8 = uVar8 + 1;
      uVar14 = uVar14 + bVar17;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar7 + 0x1e) = 0;
  }
  FUN_7151adb8();
  pcVar5 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fa0d8);
  if (*pcVar5 == '\0') {
    puVar11 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa0c8);
    *(undefined1 *)(puVar11 + 7) = 1;
    uVar3 = DAT_70084f30;
    uVar9 = DAT_70084f2c;
    *puVar11 = DAT_70084f28;
    puVar11[1] = uVar9;
    puVar11[2] = uVar3;
    uVar4 = DAT_70084f40;
    uVar3 = DAT_70084f3c;
    uVar9 = DAT_70084f38;
    puVar11[3] = DAT_70084f34;
    puVar11[4] = uVar9;
    puVar11[5] = uVar3;
    puVar11[6] = uVar4;
    GFDIUClbc_QcPNgD_wH(&LAB_7173a4c0,puVar11,&DAT_70b0e000);
    puVar12 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa0d8);
    *puVar12 = 1;
  }
  iVar7 = XcxSszXLPjQrEGhecEv_(&DAT_700fa0c8);
  if (*(char *)(iVar7 + 0x1c) != '\0') {
    uVar8 = 0;
    uVar14 = 0;
    do {
      iVar15 = (uVar8 & 7) * 8;
      uVar16 = iVar15 - 0x20;
      bVar13 = (byte)(0x29270ddd >> iVar15) | (byte)(0x611df905 << ((uVar8 & 7) * -8 + 0x20 & 0xff))
      ;
      if (-1 < (int)uVar16) {
        bVar13 = (byte)(0x611df905 >> (uVar16 & 0xff));
      }
      *(byte *)(iVar7 + uVar8) = *(byte *)(iVar7 + uVar8) ^ bVar13;
      bVar17 = 0xfffffffe < uVar8;
      bVar1 = uVar14 == 0;
      bVar2 = (0x1a < uVar8) <= uVar14;
      uVar8 = uVar8 + 1;
      uVar14 = uVar14 + bVar17;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar7 + 0x1c) = 0;
  }
  uVar8 = imp_strlen(iVar7);
  if (0xfffffff7 < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_2c);
  }
  if (uVar8 < 0xb) {
    uVar14 = (uint)&uStack_2c | 1;
    uStack_2c = CONCAT31(uStack_2c._1_3_,(char)(uVar8 << 1));
    if (uVar8 != 0) goto LAB_717327c0;
  }
  else {
    uVar14 = thunk_MwhHq((uVar8 | 7) + 1);
    uStack_2c = (uVar8 | 7) + 2;
    uStack_28 = uVar8;
    uStack_24 = uVar14;
LAB_717327c0:
    imp___aeabi_memmove(uVar14,iVar7,uVar8);
  }
  *(undefined1 *)(uVar14 + uVar8) = 0;
  FUN_71512e08(&uStack_2c);
  if ((uStack_2c & 1) != 0) {
    qNQrlu(uStack_24);
  }
  pcVar5 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fa0f8);
  if (*pcVar5 == '\0') {
    puVar11 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa0e8);
    *(undefined1 *)((int)puVar11 + 0x21) = 1;
    uVar4 = DAT_70084f54;
    uVar3 = DAT_70084f50;
    uVar9 = DAT_70084f4c;
    *puVar11 = DAT_70084f48;
    puVar11[1] = uVar9;
    puVar11[2] = uVar3;
    puVar11[3] = uVar4;
    uVar4 = DAT_70084f64;
    uVar3 = DAT_70084f60;
    uVar9 = DAT_70084f5c;
    puVar11[4] = DAT_70084f58;
    puVar11[5] = uVar9;
    puVar11[6] = uVar3;
    puVar11[7] = uVar4;
    *(undefined1 *)(puVar11 + 8) = DAT_70084f68;
    GFDIUClbc_QcPNgD_wH(&LAB_7173a4fc,puVar11,&DAT_70b0e000);
    puVar12 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa0f8);
    *puVar12 = 1;
  }
  iVar7 = XcxSszXLPjQrEGhecEv_(&DAT_700fa0e8);
  if (*(char *)(iVar7 + 0x21) != '\0') {
    uVar8 = 0;
    uVar14 = 0;
    do {
      iVar15 = (uVar8 & 7) * 8;
      uVar16 = iVar15 - 0x20;
      bVar13 = (byte)(0x29297fe1 >> iVar15) | (byte)(0x415dbdcb << ((uVar8 & 7) * -8 + 0x20 & 0xff))
      ;
      if (-1 < (int)uVar16) {
        bVar13 = (byte)(0x415dbdcb >> (uVar16 & 0xff));
      }
      *(byte *)(iVar7 + uVar8) = *(byte *)(iVar7 + uVar8) ^ bVar13;
      bVar17 = 0xfffffffe < uVar8;
      bVar1 = uVar14 == 0;
      bVar2 = (0x1f < uVar8) <= uVar14;
      uVar8 = uVar8 + 1;
      uVar14 = uVar14 + bVar17;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar7 + 0x21) = 0;
  }
  uVar8 = imp_strlen(iVar7);
  if (0xfffffff7 < uVar8) goto LAB_71732e10;
  if (uVar8 < 0xb) {
    uVar14 = (uint)&uStack_38 | 1;
    uStack_38 = CONCAT31(uStack_38._1_3_,(char)(uVar8 << 1));
    if (uVar8 != 0) goto LAB_717328e4;
  }
  else {
    uVar14 = thunk_MwhHq((uVar8 | 7) + 1);
    uStack_38 = (uVar8 | 7) + 2;
    uStack_34 = uVar8;
    uStack_30 = uVar14;
LAB_717328e4:
    imp___aeabi_memmove(uVar14,iVar7,uVar8);
  }
  *(undefined1 *)(uVar14 + uVar8) = 0;
  FUN_71513b34(&uStack_38);
  if ((uStack_38 & 1) != 0) {
    qNQrlu(uStack_30);
  }
  pcVar5 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fa118);
  if (*pcVar5 == '\0') {
    puVar11 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa108);
    *(undefined1 *)(puVar11 + 7) = 1;
    uVar3 = DAT_70084f78;
    uVar9 = DAT_70084f74;
    *puVar11 = DAT_70084f70;
    puVar11[1] = uVar9;
    puVar11[2] = uVar3;
    uVar4 = DAT_70084f88;
    uVar3 = DAT_70084f84;
    uVar9 = DAT_70084f80;
    puVar11[3] = DAT_70084f7c;
    puVar11[4] = uVar9;
    puVar11[5] = uVar3;
    puVar11[6] = uVar4;
    GFDIUClbc_QcPNgD_wH(&LAB_7173a54c,puVar11,&DAT_70b0e000);
    puVar12 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa118);
    *puVar12 = 1;
  }
  iVar7 = XcxSszXLPjQrEGhecEv_(&DAT_700fa108);
  if (*(char *)(iVar7 + 0x1c) != '\0') {
    uVar8 = 0;
    uVar14 = 0;
    do {
      iVar15 = (uVar8 & 7) * 8;
      uVar16 = iVar15 - 0x20;
      bVar13 = (byte)(0xfbef85f1 >> iVar15) |
               (byte)(-0x225ce697 << ((uVar8 & 7) * -8 + 0x20 & 0xff));
      if (-1 < (int)uVar16) {
        bVar13 = (byte)(0xdda31969 >> (uVar16 & 0xff));
      }
      *(byte *)(iVar7 + uVar8) = *(byte *)(iVar7 + uVar8) ^ bVar13;
      bVar17 = 0xfffffffe < uVar8;
      bVar1 = uVar14 == 0;
      bVar2 = (0x1a < uVar8) <= uVar14;
      uVar8 = uVar8 + 1;
      uVar14 = uVar14 + bVar17;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar7 + 0x1c) = 0;
  }
  uVar8 = imp_strlen(iVar7);
  if (0xfffffff7 < uVar8) {
LAB_71732e10:
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_38);
  }
  if (uVar8 < 0xb) {
    uVar14 = (uint)&uStack_38 | 1;
    uStack_38 = CONCAT31(uStack_38._1_3_,(char)(uVar8 << 1));
    if (uVar8 == 0) goto LAB_71732a18;
  }
  else {
    uVar14 = thunk_MwhHq((uVar8 | 7) + 1);
    uStack_38 = (uVar8 | 7) + 2;
    uStack_34 = uVar8;
    uStack_30 = uVar14;
  }
  imp___aeabi_memmove(uVar14,iVar7,uVar8);
LAB_71732a18:
  *(undefined1 *)(uVar14 + uVar8) = 0;
  FUN_71613214(&uStack_38);
  if ((uStack_38 & 1) != 0) {
    qNQrlu(uStack_30);
  }
  uVar9 = FUN_7153ffec();
  FUN_71540c24(uVar9,0);
  pcVar5 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fa138);
  if (*pcVar5 == '\0') {
    puVar11 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa128);
    *puVar11 = 0x2455aabc;
    *(undefined1 *)((int)puVar11 + 7) = 1;
    *(undefined4 *)((int)puVar11 + 3) = 0x39066d24;
    GFDIUClbc_QcPNgD_wH(&LAB_7173a588,puVar11,&DAT_70b0e000);
    puVar12 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa138);
    *puVar12 = 1;
  }
  pbVar6 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fa128);
  if (pbVar6[7] != 0) {
    pbVar6[7] = 0;
    *pbVar6 = *pbVar6 ^ 0xd1;
    pbVar6[1] = pbVar6[1] ^ 0xc5;
    pbVar6[2] = pbVar6[2] ^ 0x37;
    pbVar6[3] = pbVar6[3] ^ 0x4d;
    pbVar6[4] = pbVar6[4] ^ 1;
    pbVar6[5] = pbVar6[5] ^ 99;
    pbVar6[6] = pbVar6[6] ^ 0x39;
  }
  pcVar5 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fa158);
  if (*pcVar5 == '\0') {
    puVar11 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa148);
    *puVar11 = 0x1253b0b9;
    puVar11[1] = 0xc14b0262;
    *(undefined1 *)(puVar11 + 2) = 1;
    GFDIUClbc_QcPNgD_wH(&LAB_7173a5b0,puVar11,&DAT_70b0e000);
    puVar12 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa158);
    *puVar12 = 1;
  }
  pbVar10 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fa148);
  if (pbVar10[8] != 0) {
    pbVar10[8] = 0;
    *pbVar10 = *pbVar10 ^ 0xd1;
    pbVar10[1] = pbVar10[1] ^ 0xc5;
    pbVar10[2] = pbVar10[2] ^ 0x37;
    pbVar10[3] = pbVar10[3] ^ 0x4d;
    pbVar10[4] = pbVar10[4] ^ 1;
    pbVar10[5] = pbVar10[5] ^ 99;
    pbVar10[6] = pbVar10[6] ^ 0x39;
    pbVar10[7] = pbVar10[7] ^ 0xc1;
  }
  iVar7 = FUN_714afc58(pbVar6,pbVar10,0);
  *(int *)(iVar7 + 0x54) = *(int *)(iVar7 + 0x54) + 1;
  return;
}


// =========================================================================
// Function: FUN_71733cf0
// Entry: 0x71733cf0 | Size: 3312 bytes
// =========================================================================

void FUN_71733cf0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined1 uStack_86;
  undefined4 uStack_85;
  undefined1 auStack_80 [12];
  undefined4 uStack_74;
  undefined4 uStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_48;
  int iStack_44;
  int iStack_3c;
  int iStack_38;
  
  if (DAT_711f6c2c == '\0') {
    pcVar4 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fa178);
    if (*pcVar4 == '\0') {
      puVar7 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa168);
      *puVar7 = 0xa0240930;
      puVar7[1] = 0x3504d0a6;
      *(undefined1 *)(puVar7 + 2) = 1;
      GFDIUClbc_QcPNgD_wH(&LAB_7173a5d8,puVar7,&DAT_70b0e000);
      puVar8 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa178);
      *puVar8 = 1;
    }
    pbVar5 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fa168);
    if (pbVar5[8] != 0) {
      pbVar5[8] = 0;
      *pbVar5 = *pbVar5 ^ 0x59;
      pbVar5[1] = pbVar5[1] ^ 0x67;
      pbVar5[2] = pbVar5[2] ^ 0x7b;
      pbVar5[3] = pbVar5[3] ^ 199;
      pbVar5[4] = pbVar5[4] ^ 199;
      pbVar5[5] = pbVar5[5] ^ 0xbd;
      pbVar5[6] = pbVar5[6] ^ 0x61;
      pbVar5[7] = pbVar5[7] ^ 0x35;
    }
    FUN_717316bc(pbVar5,0);
    DAT_711f6c05 = 1;
    FUN_71563130(DAT_711a3938);
    FUN_71567070(DAT_711a3938);
    FUN_7153ffec();
    FUN_7154a314();
    if (DAT_711f6d58 == 0) {
      thunk_MwhHq(0x420);
      DAT_711f6d58 = FUN_717612a4();
    }
    thunk_FUN_71524ff4();
    FUN_715264c8(DAT_711a381c);
    FUN_715e9e6c(DAT_711acb94);
    pcVar4 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fa198);
    if (*pcVar4 == '\0') {
      puVar7 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa188);
      *(undefined2 *)(puVar7 + 2) = 0x15f;
      *puVar7 = 0xa2575439;
      puVar7[1] = 0xaff6d724;
      GFDIUClbc_QcPNgD_wH(&LAB_7173a600,puVar7,&DAT_70b0e000);
      puVar8 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa198);
      *puVar8 = 1;
    }
    pbVar5 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fa188);
    if (pbVar5[9] != 0) {
      pbVar5[9] = 0;
      *pbVar5 = *pbVar5 ^ 0x5f;
      pbVar5[1] = pbVar5[1] ^ 0x3d;
      pbVar5[2] = pbVar5[2] ^ 0x39;
      pbVar5[3] = pbVar5[3] ^ 0xcb;
      pbVar5[4] = pbVar5[4] ^ 0x57;
      pbVar5[5] = pbVar5[5] ^ 0xbf;
      pbVar5[6] = pbVar5[6] ^ 0x93;
      pbVar5[7] = pbVar5[7] ^ 0xcb;
      pbVar5[8] = pbVar5[8] ^ 0x5f;
    }
    FUN_717316bc(pbVar5,1);
    iVar1 = DAT_712017f8;
    DataMemoryBarrier(0xb);
    if ((DAT_711f6c3c & 1) == 0) {
      iVar2 = cuKsjVZRyspaVsDnqLy(&DAT_711f6c3c);
      if (iVar2 != 0) {
        pcVar4 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fa1b8);
        if (*pcVar4 == '\0') {
          puVar7 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa1a8);
          *puVar7 = 0xe6a61d4;
          puVar7[1] = 0xf1de9e8e;
          *(undefined1 *)((int)puVar7 + 0xb) = 1;
          *(undefined4 *)((int)puVar7 + 7) = 0x2d7bd2f1;
          GFDIUClbc_QcPNgD_wH(&LAB_7173a62c,puVar7,&DAT_70b0e000);
          puVar8 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa1b8);
          *puVar8 = 1;
        }
        pbVar5 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fa1a8);
        if (pbVar5[0xb] != 0) {
          *pbVar5 = *pbVar5 ^ 0xbb;
          pbVar5[1] = pbVar5[1] ^ 0xf;
          pbVar5[2] = pbVar5[2] ^ 0x2d;
          pbVar5[3] = pbVar5[3] ^ 0x6f;
          pbVar5[0xb] = 0;
          pbVar5[4] = pbVar5[4] ^ 0xe3;
          pbVar5[5] = pbVar5[5] ^ 0xfb;
          pbVar5[6] = pbVar5[6] ^ 0x97;
          pbVar5[7] = pbVar5[7] ^ 0x9f;
          pbVar5[8] = pbVar5[8] ^ 0xbb;
          pbVar5[9] = pbVar5[9] ^ 0xf;
          pbVar5[10] = pbVar5[10] ^ 0x2d;
        }
        DAT_711f6c38 = FUN_71885ba4(pbVar5,0);
        SixizuLbAnqfgRApsCY(&DAT_711f6c3c);
      }
    }
    uVar9 = DAT_711f6c38;
    imp___aeabi_memclr4(&iStack_54,0x30);
    uStack_58 = uVar9;
    cfqspBX_JrdDvACwYrAyrngjQ(iVar1 + 0x34);
    piVar6 = (int *)thunk_MwhHq(0x3c);
    *piVar6 = 0;
    piVar6[1] = 0;
    FUN_713a10f8(piVar6 + 2,&uStack_58);
    piVar6[1] = iVar1 + 0x38;
    iVar2 = *(int *)(iVar1 + 0x38);
    *piVar6 = iVar2;
    *(int **)(iVar2 + 4) = piVar6;
    *(int **)(iVar1 + 0x38) = piVar6;
    *(int *)(iVar1 + 0x40) = *(int *)(iVar1 + 0x40) + 1;
    QgduklVhdVlmSiqzGQeutncbrNj(iVar1 + 0x34);
    if (iStack_3c != 0) {
      iStack_38 = iStack_3c;
      qNQrlu();
    }
    if (iStack_48 != 0) {
      iStack_44 = iStack_48;
      qNQrlu();
    }
    if (iStack_54 != 0) {
      iStack_50 = iStack_54;
      qNQrlu();
    }
    DAT_711f6c2c = '\x01';
    DAT_711ad11c = DAT_711f6bf8 ^ 1;
    if (DAT_711f6bf8 != 0) {
      uVar9 = FUN_7136cdfc(auStack_80);
      uStack_74 = 0;
      uStack_86 = 0;
      uStack_85 = 7;
      iStack_54 = -0x3b04c000;
      iStack_50 = 0x44fab333;
      uStack_58 = 0xc50dc99a;
      FUN_7136d040(uVar9,&uStack_58);
      iVar2 = *(int *)(*(int *)(DAT_711f6d58 + 0xac) + 0x1f6c);
      FUN_7175d7e0(iVar2,&uStack_86);
      FUN_7175be7c(iVar2);
      iVar1 = DAT_712017f8;
      pcVar4 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fa1d8);
      if (*pcVar4 == '\0') {
        puVar7 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa1c8);
        *(undefined1 *)(puVar7 + 3) = 1;
        *puVar7 = 0xb87bd201;
        puVar7[1] = 0xd34238bb;
        puVar7[2] = 0xdd78d500;
        GFDIUClbc_QcPNgD_wH(&LAB_7173a658,puVar7,&DAT_70b0e000);
        puVar8 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa1d8);
        *puVar8 = 1;
      }
      pbVar5 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fa1c8);
      if (pbVar5[0xc] != 0) {
        *pbVar5 = *pbVar5 ^ 0x69;
        pbVar5[1] = pbVar5[1] ^ 0xbb;
        pbVar5[2] = pbVar5[2] ^ 0x1f;
        pbVar5[3] = pbVar5[3] ^ 0xdd;
        pbVar5[0xc] = 0;
        pbVar5[4] = pbVar5[4] ^ 0xf7;
        pbVar5[5] = pbVar5[5] ^ 0x57;
        pbVar5[6] = pbVar5[6] ^ 0x23;
        pbVar5[7] = pbVar5[7] ^ 0xb7;
        pbVar5[8] = pbVar5[8] ^ 0x69;
        pbVar5[9] = pbVar5[9] ^ 0xbb;
        pbVar5[10] = pbVar5[10] ^ 0x1f;
        pbVar5[0xb] = pbVar5[0xb] ^ 0xdd;
      }
      imp___aeabi_memclr4(&iStack_54,0x30);
      uStack_58 = FUN_71885ba4(pbVar5,0);
      cfqspBX_JrdDvACwYrAyrngjQ(iVar1 + 0x34);
      piVar6 = (int *)thunk_MwhHq(0x3c);
      *piVar6 = 0;
      piVar6[1] = 0;
      FUN_713a10f8(piVar6 + 2,&uStack_58);
      piVar6[1] = iVar1 + 0x38;
      iVar3 = *(int *)(iVar1 + 0x38);
      *piVar6 = iVar3;
      *(int **)(iVar3 + 4) = piVar6;
      *(int **)(iVar1 + 0x38) = piVar6;
      *(int *)(iVar1 + 0x40) = *(int *)(iVar1 + 0x40) + 1;
      QgduklVhdVlmSiqzGQeutncbrNj(iVar1 + 0x34);
      if (iStack_3c != 0) {
        iStack_38 = iStack_3c;
        qNQrlu();
      }
      if (iStack_48 != 0) {
        iStack_44 = iStack_48;
        qNQrlu();
      }
      if (iStack_54 != 0) {
        iStack_50 = iStack_54;
        qNQrlu();
      }
      FUN_715c426c(*(undefined4 *)(iVar2 + 0x130),1);
      cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
      QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
      DAT_712016a4 = 1;
    }
    FUN_713eb4b8(1);
  }
  return;
}


// =========================================================================
// Function: FUN_71735004
// Entry: 0x71735004 | Size: 164 bytes
// =========================================================================

void FUN_71735004(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  
  FUN_71733cf0();
  FUN_714f8bcc();
  FUN_7176bffc(DAT_711f6d58);
  iVar1 = DAT_711a381c;
  thunk_FUN_714e0378(*(undefined4 *)(DAT_711a3938 + 0x13898),auStack_50);
  imp_BASS_Set3DPosition(auStack_20,0,auStack_30,auStack_40);
  imp_BASS_Apply3D();
  puVar3 = *(undefined4 **)(iVar1 + 8);
  for (puVar2 = *(undefined4 **)(iVar1 + 4); puVar2 != puVar3; puVar2 = puVar2 + 1) {
    FUN_71522e10(*puVar2);
  }
  return;
}


// =========================================================================
// Function: SoeACsgOPnRgECqJfoE
// Entry: 0x71735100 | Size: 256 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SoeACsgOPnRgECqJfoE(void)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *apuStack_30 [4];
  int *piStack_20;
  int iStack_14;
  
  ppuVar1 = apuStack_30;
  iStack_14 = _ext___stack_chk_guard;
  if (DAT_712017fc != 0) {
    apuStack_30[0] = &DAT_70b0f12c;
    piStack_20 = (int *)apuStack_30;
    FUN_717ccb10(DAT_712017fc,apuStack_30);
    if ((undefined **)piStack_20 == apuStack_30) {
      iVar2 = 0x10;
    }
    else {
      iVar2 = 0x14;
      ppuVar1 = (undefined **)piStack_20;
      if (piStack_20 == (int *)0x0) goto LAB_71735184;
    }
    (**(code **)((int)*ppuVar1 + iVar2))();
  }
LAB_71735184:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: bQcVDUyVcnQjRLhVXyMQkTFJLoF
// Entry: 0x71735278 | Size: 1840 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bQcVDUyVcnQjRLhVXyMQkTFJLoF(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  byte bVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  bool bVar19;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  int iStack_58;
  uint uStack_54;
  uint uStack_50;
  int *piStack_48;
  int *piStack_44;
  int iStack_3c;
  int iStack_38;
  int iStack_24;
  
  iStack_24 = _ext___stack_chk_guard;
  uVar8 = imp_strlen(param_1);
  if (0xfffffff7 < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_68);
  }
  if (uVar8 < 0xb) {
    uStack_68 = CONCAT31(uStack_68._1_3_,(char)(uVar8 << 1));
    uVar18 = (uint)&uStack_68 | 1;
    if (uVar8 != 0) goto LAB_717352f8;
  }
  else {
    uVar18 = thunk_MwhHq((uVar8 | 7) + 1);
    uStack_68 = (uVar8 | 7) + 2;
    uStack_64 = uVar8;
    uStack_60 = uVar18;
LAB_717352f8:
    imp___aeabi_memcpy(uVar18,param_1,uVar8);
  }
  *(undefined1 *)(uVar18 + uVar8) = 0;
  uVar8 = imp_strlen(param_2);
  if (0xfffffff7 < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_78);
  }
  if (uVar8 < 0xb) {
    uStack_78 = CONCAT31(uStack_78._1_3_,(char)(uVar8 << 1));
    uVar18 = (uint)&uStack_78 | 1;
    if (uVar8 != 0) goto LAB_71735368;
  }
  else {
    uVar18 = thunk_MwhHq((uVar8 | 7) + 1);
    uStack_78 = (uVar8 | 7) + 2;
    uStack_74 = uVar8;
    uStack_70 = uVar18;
LAB_71735368:
    imp___aeabi_memcpy(uVar18,param_2,uVar8);
  }
  *(undefined1 *)(uVar18 + uVar8) = 0;
  iVar17 = DAT_712017fc;
  iVar14 = DAT_712017f8;
  if (DAT_712017fc == 0) {
    if (DAT_712017f8 == 0) goto LAB_71735590;
    DataMemoryBarrier(0xb);
    if (((DAT_711f6c44 & 1) == 0) && (iVar17 = cuKsjVZRyspaVsDnqLy(&DAT_711f6c44), iVar17 != 0)) {
      pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fa1f8);
      if (*pcVar10 == '\0') {
        puVar11 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa1e8);
        *(undefined1 *)((int)puVar11 + 0x19) = 1;
        uVar7 = DAT_70084fa4;
        uVar6 = DAT_70084fa0;
        uVar5 = DAT_70084f9c;
        uVar4 = DAT_70084f98;
        uVar3 = DAT_70084f94;
        *puVar11 = DAT_70084f90;
        puVar11[1] = uVar3;
        puVar11[2] = uVar4;
        puVar11[3] = uVar5;
        puVar11[4] = uVar6;
        puVar11[5] = uVar7;
        *(undefined1 *)(puVar11 + 6) = DAT_70084fa8;
        GFDIUClbc_QcPNgD_wH(&LAB_7173a684,puVar11,&DAT_70b0e000);
        puVar12 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa1f8);
        *puVar12 = 1;
      }
      iVar17 = XcxSszXLPjQrEGhecEv_(&DAT_700fa1e8);
      if (*(char *)(iVar17 + 0x19) != '\0') {
        uVar8 = 0;
        uVar18 = 0;
        do {
          iVar16 = (uVar8 & 7) * 8;
          bVar13 = (byte)(0x319b81ab >> iVar16) |
                   (byte)(-0x56bc24f5 << ((uVar8 & 7) * -8 + 0x20 & 0xff));
          uVar15 = iVar16 - 0x20;
          if (-1 < (int)uVar15) {
            bVar13 = (byte)(0xa943db0b >> (uVar15 & 0xff));
          }
          *(byte *)(iVar17 + uVar8) = *(byte *)(iVar17 + uVar8) ^ bVar13;
          bVar19 = 0xfffffffe < uVar8;
          bVar1 = uVar18 == 0;
          bVar2 = (0x17 < uVar8) <= uVar18;
          uVar8 = uVar8 + 1;
          uVar18 = uVar18 + bVar19;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar17 + 0x19) = 0;
      }
      DAT_711f6c40 = FUN_71885ba4(iVar17,0);
      SixizuLbAnqfgRApsCY(&DAT_711f6c44);
    }
    iVar17 = DAT_711f6c40;
    imp___aeabi_memclr4(&uStack_54,0x30);
    iStack_58 = iVar17;
    cfqspBX_JrdDvACwYrAyrngjQ(iVar14 + 0x34);
    piVar9 = (int *)thunk_MwhHq(0x3c);
    *piVar9 = 0;
    piVar9[1] = 0;
    FUN_713a10f8(piVar9 + 2,&iStack_58);
    piVar9[1] = iVar14 + 0x38;
    iVar17 = *(int *)(iVar14 + 0x38);
    *piVar9 = iVar17;
    *(int **)(iVar17 + 4) = piVar9;
    *(int **)(iVar14 + 0x38) = piVar9;
    *(int *)(iVar14 + 0x40) = *(int *)(iVar14 + 0x40) + 1;
    QgduklVhdVlmSiqzGQeutncbrNj(iVar14 + 0x34);
    if (iStack_3c != 0) {
      iStack_38 = iStack_3c;
      qNQrlu();
    }
    if (piStack_48 != (int *)0x0) {
      piStack_44 = piStack_48;
      qNQrlu();
    }
    if (uStack_54 == 0) goto LAB_71735590;
    uStack_50 = uStack_54;
  }
  else {
    if ((uStack_68 & 1) == 0) {
      uStack_90 = uStack_68;
      uStack_8c = uStack_64;
      uStack_88 = uStack_60;
    }
    else {
      FUN_712f6d58(&uStack_90,uStack_60,uStack_64);
    }
    if ((uStack_78 & 1) == 0) {
      uStack_84 = uStack_78;
      uStack_80 = uStack_74;
      uStack_7c = uStack_70;
    }
    else {
      FUN_712f6d58(&uStack_84,uStack_70,uStack_74);
    }
    piStack_48 = (int *)thunk_MwhHq(0x1c);
    uVar15 = uStack_7c;
    uVar18 = uStack_80;
    uVar8 = uStack_84;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    piVar9 = &iStack_58;
    *piStack_48 = (int)&DAT_70b0f150;
    piStack_48[1] = uStack_90;
    piStack_48[2] = uStack_8c;
    piStack_48[3] = uStack_88;
    piStack_48[4] = uVar8;
    piStack_48[5] = uVar18;
    piStack_48[6] = uVar15;
    uStack_90 = 0;
    uStack_8c = 0;
    uStack_88 = 0;
    FUN_717ccb10(iVar17,piVar9);
    if (piStack_48 == piVar9) {
      iVar14 = 0x10;
LAB_7173555c:
      (**(code **)(*piVar9 + iVar14))();
    }
    else {
      iVar14 = 0x14;
      piVar9 = piStack_48;
      if (piStack_48 != (int *)0x0) goto LAB_7173555c;
    }
    if ((uStack_84 & 1) != 0) {
      qNQrlu(uStack_7c);
    }
    uStack_54 = uStack_88;
    if ((uStack_90 & 1) == 0) goto LAB_71735590;
  }
  qNQrlu(uStack_54);
LAB_71735590:
  if ((uStack_78 & 1) != 0) {
    qNQrlu(uStack_70);
  }
  if ((uStack_68 & 1) != 0) {
    qNQrlu(uStack_60);
  }
  if (_ext___stack_chk_guard == iStack_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: Java_com_native_Main_load
// Entry: 0x71739bbc | Size: 740 bytes
// =========================================================================

void Java_com_native_Main_load(void)

{
  char *pcVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  
  FUN_717ef3ac();
  if (DAT_711f6c2d == '\0') {
    DAT_711f6c2d = '\x01';
    pcVar1 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fa258);
    if (*pcVar1 == '\0') {
      puVar3 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa248);
      *(undefined1 *)(puVar3 + 2) = 1;
      *puVar3 = 0xf37e1374;
      puVar3[1] = 0x35d91e01;
      GFDIUClbc_QcPNgD_wH(&LAB_7173a720,puVar3,&DAT_70b0e000);
      puVar4 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa258);
      *puVar4 = 1;
    }
    pbVar2 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fa248);
    if (pbVar2[8] != 0) {
      pbVar2[8] = 0;
      *pbVar2 = *pbVar2 ^ 7;
      pbVar2[1] = pbVar2[1] ^ 0x67;
      pbVar2[2] = pbVar2[2] ^ 0x1f;
      pbVar2[3] = pbVar2[3] ^ 0x81;
      pbVar2[4] = pbVar2[4] ^ 0x75;
      pbVar2[5] = pbVar2[5] ^ 0x7b;
      pbVar2[6] = pbVar2[6] ^ 0xbd;
      pbVar2[7] = pbVar2[7] ^ 0x35;
    }
    FUN_717316bc(pbVar2,1);
  }
  FUN_714ba2b8();
  pcVar1 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fa278);
  if (*pcVar1 == '\0') {
    puVar3 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa268);
    *puVar3 = 0xe622e14f;
    puVar3[1] = 0x1ae53da;
    *(undefined1 *)((int)puVar3 + 10) = 1;
    *(undefined2 *)(puVar3 + 2) = 0x8f51;
    GFDIUClbc_QcPNgD_wH(&LAB_7173a748,puVar3,&DAT_70b0e000);
    puVar4 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa278);
    *puVar4 = 1;
  }
  pbVar2 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fa268);
  if (pbVar2[10] != 0) {
    *pbVar2 = *pbVar2 ^ 0x25;
    pbVar2[1] = pbVar2[1] ^ 0x8f;
    pbVar2[2] = pbVar2[2] ^ 0x4b;
    pbVar2[3] = pbVar2[3] ^ 0xb9;
    pbVar2[10] = 0;
    pbVar2[4] = pbVar2[4] ^ 0xa9;
    pbVar2[5] = pbVar2[5] ^ 0x27;
    pbVar2[6] = pbVar2[6] ^ 0xcf;
    pbVar2[7] = pbVar2[7] ^ 0x73;
    pbVar2[8] = pbVar2[8] ^ 0x25;
    pbVar2[9] = pbVar2[9] ^ 0x8f;
  }
  FUN_717316bc(pbVar2,0);
  FUN_716e5e4c();
  FUN_717ef680();
  return;
}


// =========================================================================
// Function: Java_com_native_Main_preInit
// Entry: 0x7173a170 | Size: 128 bytes
// =========================================================================

void Java_com_native_Main_preInit(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  DAT_711f6c2e = 0;
  uVar1 = thunk_MwhHq(0x84);
  DAT_71201808 = FUN_717d6cf0(uVar1,param_1,param_3);
  return;
}


// =========================================================================
// Function: Java_com_native_Main_activityDestroyed
// Entry: 0x7173a244 | Size: 144 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void Java_com_native_Main_activityDestroyed(void)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint extraout_r3;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r10;
  uint extraout_r12;
  undefined1 uVar4;
  byte bVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  undefined4 in_cr1;
  undefined8 uVar9;
  
  DAT_711f6c2e = 1;
  bVar6 = DAT_711f6d58 == 0;
  bVar5 = true;
  iVar3 = 0;
  if (!bVar6) {
    uVar1 = *(uint *)(DAT_711f6d58 + 0x28);
    bVar5 = 0xd < uVar1;
    iVar3 = uVar1 - 0xe;
    bVar6 = false;
    if (uVar1 == 0xe) {
      return;
    }
  }
  uVar4 = iVar3 < 0;
  puVar2 = (undefined1 *)0x0;
  while( true ) {
    uVar9 = imp__exit(puVar2);
    puVar2 = (undefined1 *)uVar9;
    bVar7 = false;
    bVar8 = bVar5;
    if (bVar6) {
      uVar1 = unaff_r10 << ((uint)((ulonglong)uVar9 >> 0x20) & 0xff);
      bVar8 = CARRY4(extraout_r12,uVar1) || CARRY4(extraout_r12 + uVar1,(uint)bVar5);
      iVar3 = extraout_r12 + uVar1 + (uint)bVar5;
      uVar4 = iVar3 < 0;
      bVar7 = iVar3 == 0;
    }
    if ((bool)uVar4) break;
    if (!(bool)bVar8 || bVar7) {
      unaff_r10 = unaff_r10 + 0xe0;
      coprocessor_loadlong(9,in_cr1,unaff_r10);
      *puVar2 = 0xa4;
      puVar2 = puVar2 + (unaff_r7 >> 0x12);
    }
    bVar6 = bVar7;
    bVar5 = bVar8;
    if (bVar7) {
      puVar2 = (undefined1 *)((uint)puVar2 & unaff_r8 >> 0x20 & extraout_r3);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: JNI_OnLoad
// Entry: 0x7173a2f8 | Size: 84 bytes
// =========================================================================

undefined4 JNI_OnLoad(undefined4 param_1)

{
  DAT_71201870 = param_1;
  FUN_717ef11c();
  FUN_716df70c();
  return 0x10004;
}


// =========================================================================
// Function: nDweJCOSJSEGQzVg
// Entry: 0x7173a390 | Size: 32 bytes
// =========================================================================

void nDweJCOSJSEGQzVg(undefined1 param_1)

{
  DAT_711f6c2f = param_1;
  return;
}


// =========================================================================
// Function: FUN_7173a870
// Entry: 0x7173a870 | Size: 4 bytes
// =========================================================================

void FUN_7173a870(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x7173a88c | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x7173a8a8 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_7173b138
// Entry: 0x7173b138 | Size: 4 bytes
// =========================================================================

void FUN_7173b138(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x7173b154 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x7173b170 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_7173b608
// Entry: 0x7173b608 | Size: 96 bytes
// =========================================================================

void FUN_7173b608(int param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    qNQrlu(*(undefined4 *)(param_1 + 0x18));
  }
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    qNQrlu(*(undefined4 *)(param_1 + 0xc));
  }
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: FUN_7173c46c
// Entry: 0x7173c46c | Size: 24 bytes
// =========================================================================

undefined4 FUN_7173c46c(undefined4 param_1)

{
  imp___aeabi_memclr4(param_1,5000);
  return param_1;
}


// =========================================================================
// Function: FUN_7173c4d4
// Entry: 0x7173c4d4 | Size: 32 bytes
// =========================================================================

int FUN_7173c4d4(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  do {
    iVar3 = param_1 + iVar2 * 4;
    *(undefined1 *)(param_1 + iVar2) = 0;
    piVar1 = *(int **)(iVar3 + 1000);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
      *(undefined4 *)(iVar3 + 1000) = 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 1000);
  return param_1;
}


// =========================================================================
// Function: FUN_7173c5ec
// Entry: 0x7173c5ec | Size: 204 bytes
// =========================================================================

bool FUN_7173c5ec(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 >> 3 < 0x7d) {
    iVar3 = param_1 + 1000;
    if (*(int *)(iVar3 + param_2 * 4) != 0) {
      piVar1 = *(int **)(iVar3 + param_2 * 4);
      *(undefined1 *)(param_1 + param_2) = 0;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
        *(undefined4 *)(iVar3 + param_2 * 4) = 0;
      }
    }
    uVar2 = thunk_MwhHq(0x14);
    uVar2 = FUN_7151ca00(uVar2,param_3,param_4,param_5,param_6,param_7);
    *(undefined4 *)(iVar3 + param_2 * 4) = uVar2;
    FUN_7151d1a0(uVar2,param_8);
    FUN_7151d7b0(*(undefined4 *)(iVar3 + param_2 * 4),param_9);
    *(undefined1 *)(param_1 + param_2) = 1;
  }
  return param_2 < 1000;
}


// =========================================================================
// Function: FUN_7173c750
// Entry: 0x7173c750 | Size: 84 bytes
// =========================================================================

uint FUN_7173c750(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = 0;
  do {
    if (*(char *)(param_1 + uVar1) != '\0') {
      iVar2 = *(int *)(param_1 + uVar1 * 4 + 1000);
      iVar3 = 0;
      if (iVar2 != 0) {
        iVar3 = *(int *)(iVar2 + 0xc);
      }
      if ((iVar2 != 0 && iVar3 != 0) && (iVar3 == param_2)) {
        return uVar1 & 0xffff;
      }
    }
    uVar1 = uVar1 + 1;
    if (uVar1 == 1000) {
      return 0xffff;
    }
  } while( true );
}


// =========================================================================
// Function: FUN_7173c7bc
// Entry: 0x7173c7bc | Size: 24 bytes
// =========================================================================

void FUN_7173c7bc(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_1 + 1;
  return;
}


// =========================================================================
// Function: FUN_7173c7ec
// Entry: 0x7173c7ec | Size: 804 bytes
// =========================================================================

int * FUN_7173c7ec(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  int *piVar9;
  undefined4 uVar10;
  int *piVar11;
  bool bVar12;
  undefined4 uStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_44;
  int iStack_40;
  int iStack_38;
  int iStack_34;
  
  iVar3 = param_1[2];
  iVar1 = DAT_712017f8;
  while (DAT_712017f8 = iVar1, iVar3 != 0) {
    piVar11 = (int *)*param_1;
    if (piVar11[5] != 0) {
      FUN_715d33c8(&DAT_7008503a);
      piVar11 = (int *)*param_1;
    }
    piVar2 = (int *)piVar11[1];
    piVar9 = piVar11;
    if ((int *)piVar11[1] == (int *)0x0) {
      do {
        piVar4 = (int *)piVar9[2];
        bVar12 = (int *)*piVar4 != piVar9;
        piVar9 = piVar4;
      } while (bVar12);
    }
    else {
      do {
        piVar4 = piVar2;
        piVar2 = (int *)*piVar4;
      } while ((int *)*piVar4 != (int *)0x0);
    }
    *param_1 = (int)piVar4;
    param_1[2] = param_1[2] + -1;
    FUN_71368054(param_1[1],piVar11);
    thunk_qNQrlu(piVar11);
    iVar1 = DAT_712017f8;
    iVar3 = param_1[2];
  }
  DataMemoryBarrier(0xb);
  if (((DAT_711f6c74 & 1) == 0) && (iVar3 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711f6c74), iVar3 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fa2f8);
    if (*pcVar5 == '\0') {
      puVar7 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fa2e8);
      *puVar7 = 0x2ab4c5ca;
      puVar7[1] = 0x1f4a8407;
      puVar7[2] = 0x25becae0;
      *(undefined1 *)((int)puVar7 + 0xe) = 1;
      *(undefined2 *)(puVar7 + 3) = 0xc906;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71740424,puVar7,&DAT_70b0e000);
      puVar8 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fa2f8);
      *puVar8 = 1;
    }
    pbVar6 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fa2e8);
    if (pbVar6[0xe] != 0) {
      *pbVar6 = *pbVar6 ^ 0xa9;
      pbVar6[1] = pbVar6[1] ^ 0xa9;
      pbVar6[2] = pbVar6[2] ^ 0xd1;
      pbVar6[3] = pbVar6[3] ^ 0x4b;
      pbVar6[0xe] = 0;
      pbVar6[4] = pbVar6[4] ^ 0x75;
      pbVar6[5] = pbVar6[5] ^ 0xc9;
      pbVar6[6] = pbVar6[6] ^ 0x2b;
      pbVar6[7] = pbVar6[7] ^ 0x6f;
      pbVar6[8] = pbVar6[8] ^ 0xa9;
      pbVar6[9] = pbVar6[9] ^ 0xa9;
      pbVar6[10] = pbVar6[10] ^ 0xd1;
      pbVar6[0xb] = pbVar6[0xb] ^ 0x4b;
      pbVar6[0xc] = pbVar6[0xc] ^ 0x75;
      pbVar6[0xd] = pbVar6[0xd] ^ 0xc9;
    }
    DAT_711f6c70 = FUN_71885ba4(pbVar6,0);
    thunk_SixizuLbAnqfgRApsCY(&DAT_711f6c74);
  }
  uVar10 = DAT_711f6c70;
  imp___aeabi_memclr4(&iStack_50,0x30);
  uStack_54 = uVar10;
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(iVar1 + 0x34);
  piVar11 = (int *)thunk_MwhHq(0x3c);
  *piVar11 = 0;
  piVar11[1] = 0;
  FUN_713a10f8(piVar11 + 2,&uStack_54);
  piVar11[1] = iVar1 + 0x38;
  iVar3 = *(int *)(iVar1 + 0x38);
  *piVar11 = iVar3;
  *(int **)(iVar3 + 4) = piVar11;
  *(int **)(iVar1 + 0x38) = piVar11;
  *(int *)(iVar1 + 0x40) = *(int *)(iVar1 + 0x40) + 1;
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(iVar1 + 0x34);
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
  FUN_71740530(param_1,param_1[1]);
  return param_1;
}


// =========================================================================
// Function: FUN_7173cf00
// Entry: 0x7173cf00 | Size: 1664 bytes
// =========================================================================

void FUN_7173cf00(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined1 param_9,
                 undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
                 undefined1 param_14)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined4 uStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_48;
  int iStack_44;
  int iStack_3c;
  int iStack_38;
  
  piVar12 = param_1 + 1;
  piVar9 = (int *)*piVar12;
  piVar2 = piVar12;
  piVar10 = piVar12;
  if (piVar9 != (int *)0x0) {
    do {
      piVar3 = piVar9;
      if (piVar9[4] < param_2) {
        piVar9 = piVar9 + 1;
        piVar3 = piVar10;
      }
      piVar10 = piVar3;
      piVar9 = (int *)*piVar9;
    } while (piVar9 != (int *)0x0);
    if ((piVar10 != piVar12) && (piVar2 = piVar10, param_2 < piVar10[4])) {
      piVar2 = piVar12;
    }
  }
  if (piVar12 != piVar2) {
    FUN_7173dbb4(param_1,param_2);
  }
  iVar1 = FUN_71563d2c(DAT_711a3938,param_6,param_3,param_4,param_5,param_7,param_8);
  piVar2 = (int *)*piVar12;
  piVar10 = piVar12;
  while (piVar9 = piVar10, piVar2 != (int *)0x0) {
    while (piVar3 = piVar2, piVar10 = piVar3, piVar3[4] <= param_2) {
      if (param_2 <= piVar3[4]) goto LAB_7173d064;
      piVar2 = (int *)piVar3[1];
      if ((int *)piVar3[1] == (int *)0x0) {
        piVar9 = piVar3 + 1;
        goto LAB_7173d000;
      }
    }
    piVar2 = (int *)*piVar3;
  }
LAB_7173d000:
  piVar3 = (int *)thunk_MwhHq(0x24);
  piVar3[4] = param_2;
  piVar3[5] = 0;
  piVar3[6] = 0;
  piVar3[7] = 0;
  piVar3[8] = 0;
  *piVar3 = 0;
  piVar3[1] = 0;
  piVar3[2] = (int)piVar10;
  *piVar9 = (int)piVar3;
  piVar10 = piVar3;
  if (*(int *)*param_1 != 0) {
    *param_1 = *(int *)*param_1;
    piVar10 = (int *)*piVar9;
  }
  FUN_712f807c(param_1[1],piVar10);
  param_1[2] = param_1[2] + 1;
LAB_7173d064:
  piVar3[5] = iVar1;
  piVar2 = (int *)*piVar12;
  piVar10 = piVar12;
  while (piVar9 = piVar10, piVar2 != (int *)0x0) {
    while (piVar3 = piVar2, piVar10 = piVar3, piVar3[4] <= param_2) {
      if (param_2 <= piVar3[4]) goto LAB_7173d11c;
      piVar2 = (int *)piVar3[1];
      if ((int *)piVar3[1] == (int *)0x0) {
        piVar9 = piVar3 + 1;
        goto LAB_7173d0b8;
      }
    }
    piVar2 = (int *)*piVar3;
  }
LAB_7173d0b8:
  piVar3 = (int *)thunk_MwhHq(0x24);
  piVar3[4] = param_2;
  piVar3[5] = 0;
  piVar3[6] = 0;
  piVar3[7] = 0;
  piVar3[8] = 0;
  *piVar3 = 0;
  piVar3[1] = 0;
  piVar3[2] = (int)piVar10;
  *piVar9 = (int)piVar3;
  piVar10 = piVar3;
  if (*(int *)*param_1 != 0) {
    *param_1 = *(int *)*param_1;
    piVar10 = (int *)*piVar9;
  }
  FUN_712f807c(param_1[1],piVar10);
  param_1[2] = param_1[2] + 1;
LAB_7173d11c:
  *(undefined1 *)(piVar3 + 6) = param_9;
  iVar1 = FUN_715f1574(param_10);
  piVar2 = (int *)*piVar12;
  piVar10 = piVar12;
  while (piVar9 = piVar10, piVar2 != (int *)0x0) {
    while (piVar3 = piVar2, piVar3[4] <= param_2) {
      if (param_2 <= piVar3[4]) goto LAB_7173d1e0;
      piVar2 = (int *)piVar3[1];
      if ((int *)piVar3[1] == (int *)0x0) {
        piVar10 = piVar3 + 1;
        piVar9 = piVar3;
        goto LAB_7173d17c;
      }
    }
    piVar10 = piVar3;
    piVar2 = (int *)*piVar3;
  }
LAB_7173d17c:
  piVar3 = (int *)thunk_MwhHq(0x24);
  piVar3[4] = param_2;
  piVar3[5] = 0;
  piVar3[6] = 0;
  piVar3[7] = 0;
  piVar3[8] = 0;
  *piVar3 = 0;
  piVar3[1] = 0;
  piVar3[2] = (int)piVar9;
  *piVar10 = (int)piVar3;
  piVar2 = piVar3;
  if (*(int *)*param_1 != 0) {
    *param_1 = *(int *)*param_1;
    piVar2 = (int *)*piVar10;
  }
  FUN_712f807c(param_1[1],piVar2);
  param_1[2] = param_1[2] + 1;
LAB_7173d1e0:
  piVar3[7] = iVar1;
  piVar10 = (int *)*piVar12;
  do {
    piVar2 = piVar12;
    if (piVar10 == (int *)0x0) {
LAB_7173d22c:
      piVar9 = (int *)thunk_MwhHq(0x24);
      piVar9[4] = param_2;
      piVar9[5] = 0;
      piVar9[6] = 0;
      piVar9[7] = 0;
      piVar9[8] = 0;
      *piVar9 = 0;
      piVar9[1] = 0;
      piVar9[2] = (int)piVar12;
      *piVar2 = (int)piVar9;
      piVar10 = piVar9;
      if (*(int *)*param_1 != 0) {
        *param_1 = *(int *)*param_1;
        piVar10 = (int *)*piVar2;
      }
      FUN_712f807c(param_1[1],piVar10);
      param_1[2] = param_1[2] + 1;
LAB_7173d290:
      *(undefined1 *)(piVar9 + 8) = param_14;
      iVar1 = DAT_712017f8;
      DataMemoryBarrier(0xb);
      if (((DAT_711f6c7c & 1) == 0) &&
         (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711f6c7c), iVar4 != 0)) {
        pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fa318);
        if (*pcVar5 == '\0') {
          puVar7 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fa308);
          *puVar7 = 0x400f4120;
          puVar7[1] = 0xce303170;
          *(undefined1 *)((int)puVar7 + 0xb) = 1;
          *(undefined4 *)((int)puVar7 + 7) = 0x6b4b2ece;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_71740454,puVar7,&DAT_70b0e000);
          puVar8 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fa318);
          *puVar8 = 1;
        }
        pbVar6 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fa308);
        if (pbVar6[0xb] != 0) {
          *pbVar6 = *pbVar6 ^ 0x41;
          pbVar6[1] = pbVar6[1] ^ 0x25;
          pbVar6[2] = pbVar6[2] ^ 0x6b;
          pbVar6[3] = pbVar6[3] ^ 0xd;
          pbVar6[0xb] = 0;
          pbVar6[4] = pbVar6[4] ^ 0x11;
          pbVar6[5] = pbVar6[5] ^ 0x41;
          pbVar6[6] = pbVar6[6] ^ 0x79;
          pbVar6[7] = pbVar6[7] ^ 0xad;
          pbVar6[8] = pbVar6[8] ^ 0x41;
          pbVar6[9] = pbVar6[9] ^ 0x25;
          pbVar6[10] = pbVar6[10] ^ 0x6b;
        }
        DAT_711f6c78 = FUN_71885ba4(pbVar6,0);
        thunk_SixizuLbAnqfgRApsCY(&DAT_711f6c7c);
      }
      uVar13 = DAT_711f6c78;
      imp___aeabi_memclr4(&iStack_54,0x30);
      uStack_58 = uVar13;
      uVar13 = FUN_713a0424(&uStack_58,param_2);
      uVar14 = FUN_71ba1638(param_3);
      uVar11 = (undefined4)((ulonglong)uVar14 >> 0x20);
      uVar13 = FUN_714d597c(uVar13,uVar11,(int)uVar14,uVar11);
      uVar14 = FUN_71ba1638(param_4);
      uVar11 = (undefined4)((ulonglong)uVar14 >> 0x20);
      uVar13 = FUN_714d597c(uVar13,uVar11,(int)uVar14,uVar11);
      uVar14 = FUN_71ba1638(param_5);
      uVar11 = (undefined4)((ulonglong)uVar14 >> 0x20);
      uVar13 = FUN_714d597c(uVar13,uVar11,(int)uVar14,uVar11);
      uVar13 = FUN_713a0424(uVar13,param_6);
      uVar13 = FUN_713a0424(uVar13,param_7);
      uVar13 = FUN_713a0424(uVar13,param_8);
      uVar13 = FUN_713a1f9c(uVar13,param_11);
      uVar13 = FUN_713a0424(uVar13,param_12);
      uVar14 = FUN_71ba1638(param_13);
      uVar11 = (undefined4)((ulonglong)uVar14 >> 0x20);
      uVar13 = FUN_714d597c(uVar13,uVar11,(int)uVar14,uVar11);
      thunk_cfqspBX_JrdDvACwYrAyrngjQ(iVar1 + 0x34);
      piVar10 = (int *)thunk_MwhHq(0x3c);
      *piVar10 = 0;
      piVar10[1] = 0;
      FUN_713a10f8(piVar10 + 2,uVar13);
      piVar10[1] = iVar1 + 0x38;
      iVar4 = *(int *)(iVar1 + 0x38);
      *piVar10 = iVar4;
      *(int **)(iVar4 + 4) = piVar10;
      *(int **)(iVar1 + 0x38) = piVar10;
      *(int *)(iVar1 + 0x40) = *(int *)(iVar1 + 0x40) + 1;
      thunk_QgduklVhdVlmSiqzGQeutncbrNj(iVar1 + 0x34);
      if (iStack_3c != 0) {
        iStack_38 = iStack_3c;
        thunk_qNQrlu();
      }
      if (iStack_48 != 0) {
        iStack_44 = iStack_48;
        thunk_qNQrlu();
      }
      if (iStack_54 != 0) {
        iStack_50 = iStack_54;
        thunk_qNQrlu();
      }
      return;
    }
    while (piVar9 = piVar10, piVar12 = piVar9, piVar9[4] <= param_2) {
      if (param_2 <= piVar9[4]) goto LAB_7173d290;
      piVar10 = (int *)piVar9[1];
      if ((int *)piVar9[1] == (int *)0x0) {
        piVar2 = piVar9 + 1;
        goto LAB_7173d22c;
      }
    }
    piVar10 = (int *)*piVar9;
  } while( true );
}


// =========================================================================
// Function: FUN_7173dbb4
// Entry: 0x7173dbb4 | Size: 1632 bytes
// =========================================================================

void FUN_7173dbb4(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  int *piVar10;
  int *piVar11;
  undefined4 uVar12;
  bool bVar13;
  undefined4 uStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_48;
  int iStack_44;
  int iStack_3c;
  int iStack_38;
  
  piVar11 = param_1 + 1;
  piVar2 = (int *)*piVar11;
  piVar3 = piVar11;
  piVar10 = piVar2;
  if (piVar2 != (int *)0x0) {
    do {
      piVar4 = piVar10;
      if (piVar10[4] < param_2) {
        piVar10 = piVar10 + 1;
        piVar4 = piVar3;
      }
      piVar10 = (int *)*piVar10;
      piVar3 = piVar4;
    } while (piVar10 != (int *)0x0);
    if (piVar4 != piVar11) {
      if (param_2 < piVar4[4]) {
        piVar4 = piVar11;
      }
      piVar3 = piVar2;
      if (piVar11 != piVar4) {
        do {
          while (piVar10 = piVar3, piVar10[4] <= param_2) {
            if (param_2 <= piVar10[4]) goto LAB_7173dccc;
            piVar3 = (int *)piVar10[1];
            if ((int *)piVar10[1] == (int *)0x0) {
              piVar4 = piVar10 + 1;
              goto LAB_7173dc68;
            }
          }
          piVar3 = (int *)*piVar10;
          piVar4 = piVar10;
        } while ((int *)*piVar10 != (int *)0x0);
LAB_7173dc68:
        piVar3 = (int *)thunk_MwhHq(0x24);
        piVar3[4] = param_2;
        piVar3[5] = 0;
        piVar3[6] = 0;
        piVar3[7] = 0;
        piVar3[8] = 0;
        *piVar3 = 0;
        piVar3[1] = 0;
        piVar3[2] = (int)piVar10;
        *piVar4 = (int)piVar3;
        piVar2 = piVar3;
        if (*(int *)*param_1 != 0) {
          *param_1 = *(int *)*param_1;
          piVar2 = (int *)*piVar4;
        }
        FUN_712f807c(param_1[1],piVar2);
        piVar2 = (int *)param_1[1];
        param_1[2] = param_1[2] + 1;
        piVar10 = piVar3;
LAB_7173dccc:
        piVar3 = piVar11;
        if (piVar10[5] != 0) {
          while (piVar10 = piVar3, piVar2 != (int *)0x0) {
            while (piVar3 = piVar2, piVar3[4] <= param_2) {
              if (param_2 <= piVar3[4]) goto LAB_7173dd84;
              piVar2 = (int *)piVar3[1];
              if ((int *)piVar3[1] == (int *)0x0) {
                piVar10 = piVar3 + 1;
                goto LAB_7173dd20;
              }
            }
            piVar2 = (int *)*piVar3;
          }
LAB_7173dd20:
          piVar4 = (int *)thunk_MwhHq(0x24);
          piVar4[4] = param_2;
          piVar4[5] = 0;
          piVar4[6] = 0;
          piVar4[7] = 0;
          piVar4[8] = 0;
          *piVar4 = 0;
          piVar4[1] = 0;
          piVar4[2] = (int)piVar3;
          *piVar10 = (int)piVar4;
          piVar2 = piVar4;
          if (*(int *)*param_1 != 0) {
            *param_1 = *(int *)*param_1;
            piVar2 = (int *)*piVar10;
          }
          FUN_712f807c(param_1[1],piVar2);
          param_1[2] = param_1[2] + 1;
          piVar3 = piVar4;
LAB_7173dd84:
          FUN_715d33c8(&DAT_7008503a,piVar3[5]);
          piVar3 = (int *)*piVar11;
          piVar2 = piVar11;
          while (piVar10 = piVar2, piVar3 != (int *)0x0) {
            while (piVar2 = piVar3, piVar2[4] <= param_2) {
              if (param_2 <= piVar2[4]) goto LAB_7173de44;
              piVar3 = (int *)piVar2[1];
              if ((int *)piVar2[1] == (int *)0x0) {
                piVar10 = piVar2 + 1;
                goto LAB_7173dde0;
              }
            }
            piVar3 = (int *)*piVar2;
          }
LAB_7173dde0:
          piVar3 = (int *)thunk_MwhHq(0x24);
          piVar3[4] = param_2;
          piVar3[5] = 0;
          piVar3[6] = 0;
          piVar3[7] = 0;
          piVar3[8] = 0;
          *piVar3 = 0;
          piVar3[1] = 0;
          piVar3[2] = (int)piVar2;
          *piVar10 = (int)piVar3;
          piVar2 = piVar3;
          if (*(int *)*param_1 != 0) {
            *param_1 = *(int *)*param_1;
            piVar2 = (int *)*piVar10;
          }
          FUN_712f807c(param_1[1],piVar2);
          param_1[2] = param_1[2] + 1;
          piVar2 = piVar3;
LAB_7173de44:
          piVar2[5] = 0;
          piVar3 = (int *)*piVar11;
          piVar2 = piVar11;
          while (piVar10 = piVar2, piVar3 != (int *)0x0) {
            while (piVar2 = piVar3, piVar2[4] <= param_2) {
              if (param_2 <= piVar2[4]) goto LAB_7173defc;
              piVar3 = (int *)piVar2[1];
              if ((int *)piVar2[1] == (int *)0x0) {
                piVar10 = piVar2 + 1;
                goto LAB_7173de98;
              }
            }
            piVar3 = (int *)*piVar2;
          }
LAB_7173de98:
          piVar3 = (int *)thunk_MwhHq(0x24);
          piVar3[4] = param_2;
          piVar3[5] = 0;
          piVar3[6] = 0;
          piVar3[7] = 0;
          piVar3[8] = 0;
          *piVar3 = 0;
          piVar3[1] = 0;
          piVar3[2] = (int)piVar2;
          *piVar10 = (int)piVar3;
          piVar2 = piVar3;
          if (*(int *)*param_1 != 0) {
            *param_1 = *(int *)*param_1;
            piVar2 = (int *)*piVar10;
          }
          FUN_712f807c(param_1[1],piVar2);
          param_1[2] = param_1[2] + 1;
          piVar2 = piVar3;
LAB_7173defc:
          piVar2[7] = 0;
          piVar2 = (int *)*piVar11;
        }
      }
    }
    piVar3 = piVar11;
    piVar10 = piVar2;
    if (piVar2 != (int *)0x0) {
      do {
        piVar4 = piVar10;
        if (piVar10[4] < param_2) {
          piVar10 = piVar10 + 1;
          piVar4 = piVar3;
        }
        piVar10 = (int *)*piVar10;
        piVar3 = piVar4;
      } while (piVar10 != (int *)0x0);
      if ((piVar4 != piVar11) && (piVar4[4] <= param_2)) {
        piVar10 = (int *)piVar4[1];
        if ((int *)piVar4[1] == (int *)0x0) {
          do {
            piVar11 = (int *)piVar3[2];
            bVar13 = (int *)*piVar11 != piVar3;
            piVar3 = piVar11;
          } while (bVar13);
        }
        else {
          do {
            piVar11 = piVar10;
            piVar10 = (int *)*piVar11;
          } while ((int *)*piVar11 != (int *)0x0);
        }
        if ((int *)*param_1 == piVar4) {
          *param_1 = (int)piVar11;
        }
        param_1[2] = param_1[2] + -1;
        FUN_71368054(piVar2,piVar4);
        thunk_qNQrlu(piVar4);
      }
    }
  }
  iVar1 = DAT_712017f8;
  DataMemoryBarrier(0xb);
  if (((DAT_711f6c84 & 1) == 0) && (iVar5 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711f6c84), iVar5 != 0)) {
    pcVar6 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fa338);
    if (*pcVar6 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fa328);
      *puVar8 = 0x1432accf;
      puVar8[1] = 0x1ee078bb;
      puVar8[2] = 0x143c80cd;
      *(undefined1 *)((int)puVar8 + 0xe) = 1;
      *(undefined2 *)(puVar8 + 3) = 0x1da3;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7150cbc0,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fa338);
      *puVar9 = 1;
    }
    pbVar7 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fa328);
    if (pbVar7[0xe] != 0) {
      *pbVar7 = *pbVar7 ^ 0xbd;
      pbVar7[1] = pbVar7[1] ^ 0xc9;
      pbVar7[2] = pbVar7[2] ^ 0x5f;
      pbVar7[3] = pbVar7[3] ^ 0x7b;
      pbVar7[0xe] = 0;
      pbVar7[4] = pbVar7[4] ^ 0xcd;
      pbVar7[5] = pbVar7[5] ^ 0x1d;
      pbVar7[6] = pbVar7[6] ^ 0xad;
      pbVar7[7] = pbVar7[7] ^ 0x7f;
      pbVar7[8] = pbVar7[8] ^ 0xbd;
      pbVar7[9] = pbVar7[9] ^ 0xc9;
      pbVar7[10] = pbVar7[10] ^ 0x5f;
      pbVar7[0xb] = pbVar7[0xb] ^ 0x7b;
      pbVar7[0xc] = pbVar7[0xc] ^ 0xcd;
      pbVar7[0xd] = pbVar7[0xd] ^ 0x1d;
    }
    DAT_711f6c80 = FUN_71885ba4(pbVar7,0);
    thunk_SixizuLbAnqfgRApsCY(&DAT_711f6c84);
  }
  uVar12 = DAT_711f6c80;
  imp___aeabi_memclr4(&iStack_54,0x30);
  uStack_58 = uVar12;
  uVar12 = FUN_713a0424(&uStack_58,param_2);
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(iVar1 + 0x34);
  piVar2 = (int *)thunk_MwhHq(0x3c);
  *piVar2 = 0;
  piVar2[1] = 0;
  FUN_713a10f8(piVar2 + 2,uVar12);
  piVar2[1] = iVar1 + 0x38;
  iVar5 = *(int *)(iVar1 + 0x38);
  *piVar2 = iVar5;
  *(int **)(iVar5 + 4) = piVar2;
  *(int **)(iVar1 + 0x38) = piVar2;
  *(int *)(iVar1 + 0x40) = *(int *)(iVar1 + 0x40) + 1;
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(iVar1 + 0x34);
  if (iStack_3c != 0) {
    iStack_38 = iStack_3c;
    thunk_qNQrlu();
  }
  if (iStack_48 != 0) {
    iStack_44 = iStack_48;
    thunk_qNQrlu();
  }
  if (iStack_54 != 0) {
    iStack_50 = iStack_54;
    thunk_qNQrlu();
  }
  return;
}


// =========================================================================
// Function: FUN_7173e6dc
// Entry: 0x7173e6dc | Size: 2808 bytes
// =========================================================================

void FUN_7173e6dc(uint *param_1)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  uint *puVar11;
  undefined4 *puVar12;
  uint *puVar13;
  uint *puVar14;
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  undefined4 uVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  undefined8 uVar23;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  iVar3 = FUN_7163d6b4();
  if (iVar3 == 0) {
    return;
  }
  iVar3 = thunk_FUN_71566860();
  pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fa358);
  if (*pcVar4 == '\0') {
    puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fa348);
    *(undefined1 *)((int)puVar12 + 0x15) = 1;
    uVar1 = DAT_70085060;
    uVar19 = DAT_7008505c;
    uVar15 = DAT_70085058;
    uVar9 = DAT_70085054;
    *puVar12 = DAT_70085050;
    puVar12[1] = uVar9;
    puVar12[2] = uVar15;
    puVar12[3] = uVar19;
    puVar12[4] = uVar1;
    *(undefined1 *)(puVar12 + 5) = DAT_70085064;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71623fe0,puVar12,&DAT_70b0e000);
    puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fa358);
    *puVar10 = 1;
  }
  iVar5 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fa348);
  if (*(char *)(iVar5 + 0x15) != '\0') {
    uVar6 = 0;
    uVar18 = 0;
    do {
      iVar16 = (uVar6 & 7) * 8;
      uVar17 = iVar16 - 0x20;
      bVar2 = (byte)(0x3b4b4b1b >> iVar16) | (byte)(-0x66eeca4f << ((uVar6 & 7) * -8 + 0x20 & 0xff))
      ;
      if (-1 < (int)uVar17) {
        bVar2 = (byte)(0x991135b1 >> (uVar17 & 0xff));
      }
      *(byte *)(iVar5 + uVar6) = *(byte *)(iVar5 + uVar6) ^ bVar2;
      bVar22 = 0xfffffffe < uVar6;
      bVar21 = uVar18 == 0;
      bVar20 = (0x13 < uVar6) <= uVar18;
      uVar6 = uVar6 + 1;
      uVar18 = uVar18 + bVar22;
    } while (bVar21 && bVar20);
    *(undefined1 *)(iVar5 + 0x15) = 0;
  }
  uVar6 = imp_strlen(iVar5);
  if (0xfffffff7 < uVar6) goto LAB_7173f198;
  if (uVar6 < 0xb) {
    uVar18 = (uint)&uStack_30 | 1;
    uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar6 << 1));
    if (uVar6 != 0) goto LAB_7173e7f0;
  }
  else {
    uVar18 = thunk_MwhHq((uVar6 | 7) + 1);
    uStack_30 = (uVar6 | 7) + 2;
    uStack_2c = uVar6;
    uStack_28 = uVar18;
LAB_7173e7f0:
    imp___aeabi_memmove(uVar18,iVar5,uVar6);
  }
  *(undefined1 *)(uVar18 + uVar6) = 0;
  iVar5 = FUN_717c5e7c(&uStack_30);
  if ((uStack_30 & 1) != 0) {
    thunk_qNQrlu(uStack_28);
  }
  if (iVar3 != iVar5) {
    return;
  }
  DataMemoryBarrier(0xb);
  if (((DAT_711f6c6c & 1) == 0) && (iVar3 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711f6c6c), iVar3 != 0)) {
    DAT_711f6c68 = FUN_71886108();
    thunk_SixizuLbAnqfgRApsCY(&DAT_711f6c6c);
  }
  iVar3 = FUN_71886108();
  uVar6 = iVar3 - DAT_711f6c68;
  if (0x96 < uVar6) {
    DAT_711f6c68 = FUN_71886108();
  }
  puVar13 = (uint *)*param_1;
  if (puVar13 == param_1 + 1) {
LAB_7173eb80:
    pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fa398);
    if (*pcVar4 == '\0') {
      puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fa388);
      *puVar12 = 0xb0585908;
      puVar12[1] = 0x3cb6fd33;
      *(undefined1 *)((int)puVar12 + 0xb) = 1;
      *(undefined4 *)((int)puVar12 + 7) = 0x31461b3c;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_717404ac,puVar12,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fa398);
      *puVar10 = 1;
    }
    pbVar8 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fa388);
    if (pbVar8[0xb] != 0) {
      *pbVar8 = *pbVar8 ^ 0x6b;
      pbVar8[1] = pbVar8[1] ^ 0x35;
      pbVar8[2] = pbVar8[2] ^ 0x31;
      pbVar8[3] = pbVar8[3] ^ 0xd5;
      pbVar8[0xb] = 0;
      pbVar8[4] = pbVar8[4] ^ 0x5d;
      pbVar8[5] = pbVar8[5] ^ 0x89;
      pbVar8[6] = pbVar8[6] ^ 0xe9;
      pbVar8[7] = pbVar8[7] ^ 0x5b;
      pbVar8[8] = pbVar8[8] ^ 0x6b;
      pbVar8[9] = pbVar8[9] ^ 0x35;
      pbVar8[10] = pbVar8[10] ^ 0x31;
    }
    uVar18 = imp_strlen(pbVar8);
    if (0xfffffff7 < uVar18) goto LAB_7173f198;
    if (uVar18 < 0xb) {
      uVar17 = (uint)&uStack_30 | 1;
      uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar18 << 1));
      if (uVar18 != 0) goto LAB_7173ec94;
    }
    else {
      uVar17 = thunk_MwhHq((uVar18 | 7) + 1);
      uStack_30 = (uVar18 | 7) + 2;
      uStack_2c = uVar18;
      uStack_28 = uVar17;
LAB_7173ec94:
      imp___aeabi_memmove(uVar17,pbVar8,uVar18);
    }
    *(undefined1 *)(uVar17 + uVar18) = 0;
    FUN_717c623c(&uStack_30,0xffffffff);
    if ((uStack_30 & 1) != 0) {
      thunk_qNQrlu(uStack_28);
    }
  }
  else {
    uVar23 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fa368);
    puVar11 = (uint *)((ulonglong)uVar23 >> 0x20);
    pbVar8 = (byte *)uVar23;
    bVar21 = false;
    uVar18 = (uint)&uStack_30 | 1;
    do {
      if (puVar13[5] != 0) {
        puVar11 = (uint *)(uint)(byte)puVar13[6];
      }
      if ((puVar13[5] != 0 && puVar11 != (uint *)0x0) && (iVar3 = FUN_7145c7f8(), iVar3 != -1)) {
        FUN_7173ff3c(iVar3,iVar3);
        iVar3 = iVar3 * 0x28;
        if ((&DAT_70ffd3dc)[iVar3] == '\a' && !bVar21) {
          iVar5 = FUN_713c301c(0);
          bVar21 = iVar5 != 0;
          if ((0x96 < uVar6) && (iVar5 != 0)) {
            pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fa378);
            if (*pcVar4 == '\0') {
              puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fa368);
              *(undefined1 *)((int)puVar12 + 0xb) = 1;
              *puVar12 = 0xd4b6a1e4;
              puVar12[1] = 0xa2c0095f;
              *(undefined4 *)((int)puVar12 + 7) = 0xdfbef7a2;
              thunk_GFDIUClbc_QcPNgD_wH(&LAB_71740480,puVar12,&DAT_70b0e000);
              puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fa378);
              *puVar10 = 1;
            }
            if (pbVar8[0xb] != 0) {
              *pbVar8 = *pbVar8 ^ 0x87;
              pbVar8[1] = pbVar8[1] ^ 0xcd;
              pbVar8[2] = pbVar8[2] ^ 0xdf;
              pbVar8[3] = pbVar8[3] ^ 0xb1;
              pbVar8[0xb] = 0;
              pbVar8[4] = pbVar8[4] ^ 0x31;
              pbVar8[5] = pbVar8[5] ^ 0x7d;
              pbVar8[6] = pbVar8[6] ^ 0x9f;
              pbVar8[7] = pbVar8[7] ^ 0xc5;
              pbVar8[8] = pbVar8[8] ^ 0x87;
              pbVar8[9] = pbVar8[9] ^ 0xcd;
              pbVar8[10] = pbVar8[10] ^ 0xdf;
            }
            uVar17 = imp_strlen(pbVar8);
            if (0xfffffff7 < uVar17) goto LAB_7173f198;
            if (uVar17 < 0xb) {
              uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar17 << 1));
              uVar7 = uVar18;
              if (uVar17 != 0) goto LAB_7173ea74;
            }
            else {
              uVar7 = thunk_MwhHq((uVar17 | 7) + 1);
              uStack_30 = (uVar17 | 7) + 2;
              uStack_2c = uVar17;
              uStack_28 = uVar7;
LAB_7173ea74:
              imp___aeabi_memmove(uVar7,pbVar8,uVar17);
            }
            uVar9 = *(undefined4 *)(&DAT_70ffd3c0 + iVar3);
            *(undefined1 *)(uVar7 + uVar17) = 0;
            uVar15 = *(undefined4 *)(&DAT_70ffd3c4 + iVar3);
            puVar12 = (undefined4 *)(*(int *)(iVar5 + 0x14) + 0x30);
            if (*(int *)(iVar5 + 0x14) == 0) {
              puVar12 = (undefined4 *)(iVar5 + 4);
            }
            uVar19 = puVar12[1];
            uVar9 = FUN_71ba240c(*puVar12,uVar9);
            uVar15 = FUN_71ba240c(uVar19,uVar15);
            uVar15 = FUN_71ba21e8(uVar15,uVar15);
            uVar9 = FUN_71ba21e8(uVar9,uVar9);
            FUN_71ba0b38(uVar9,uVar15);
            imp_sqrtf();
            uVar9 = FUN_71ba17bc();
            FUN_717c623c(&uStack_30,uVar9);
            if ((uStack_30 & 1) != 0) {
              thunk_qNQrlu(uStack_28);
            }
            bVar21 = true;
          }
        }
      }
      puVar11 = (uint *)puVar13[1];
      puVar14 = puVar13;
      if ((uint *)puVar13[1] == (uint *)0x0) {
        do {
          puVar13 = (uint *)puVar14[2];
          puVar11 = (uint *)*puVar13;
          bVar20 = puVar11 != puVar14;
          puVar14 = puVar13;
        } while (bVar20);
      }
      else {
        do {
          puVar13 = puVar11;
          puVar11 = (uint *)*puVar13;
        } while ((uint *)*puVar13 != (uint *)0x0);
        puVar11 = (uint *)0x0;
      }
    } while (puVar13 != param_1 + 1);
    if (!bVar21) goto LAB_7173eb80;
  }
  if ((*(int *)(DAT_70c38ed8 + 0x48) != 0) && (iVar3 = FUN_7145c7f8(), iVar3 != -1)) {
    FUN_7173ff3c(iVar3,iVar3);
    iVar5 = FUN_713c301c(0);
    if (iVar5 != 0) {
      if (uVar6 < 0x97) {
        return;
      }
      pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fa3b8);
      if (*pcVar4 == '\0') {
        puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fa3a8);
        *(undefined1 *)(puVar12 + 3) = 1;
        *puVar12 = 0xba9e2bf4;
        puVar12[1] = 0x8388cbfd;
        puVar12[2] = 0xdf872efb;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_717404d8,puVar12,&DAT_70b0e000);
        puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fa3b8);
        *puVar10 = 1;
      }
      pbVar8 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fa3a8);
      if (pbVar8[0xc] != 0) {
        *pbVar8 = *pbVar8 ^ 0x97;
        pbVar8[1] = pbVar8[1] ^ 0x47;
        pbVar8[2] = pbVar8[2] ^ 0xf7;
        pbVar8[3] = pbVar8[3] ^ 0xdf;
        pbVar8[0xc] = 0;
        pbVar8[4] = pbVar8[4] ^ 0x93;
        pbVar8[5] = pbVar8[5] ^ 0xbf;
        pbVar8[6] = pbVar8[6] ^ 0xd7;
        pbVar8[7] = pbVar8[7] ^ 0xe1;
        pbVar8[8] = pbVar8[8] ^ 0x97;
        pbVar8[9] = pbVar8[9] ^ 0x47;
        pbVar8[10] = pbVar8[10] ^ 0xf7;
        pbVar8[0xb] = pbVar8[0xb] ^ 0xdf;
      }
      uVar6 = imp_strlen(pbVar8);
      if (0xfffffff7 < uVar6) goto LAB_7173f198;
      if (uVar6 < 0xb) {
        uVar18 = (uint)&uStack_30 | 1;
        uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar6 << 1));
        if (uVar6 != 0) goto LAB_7173ef98;
      }
      else {
        uVar18 = thunk_MwhHq((uVar6 | 7) + 1);
        uStack_30 = (uVar6 | 7) + 2;
        uStack_2c = uVar6;
        uStack_28 = uVar18;
LAB_7173ef98:
        imp___aeabi_memmove(uVar18,pbVar8,uVar6);
      }
      *(undefined1 *)(uVar18 + uVar6) = 0;
      puVar12 = (undefined4 *)(*(int *)(iVar5 + 0x14) + 0x30);
      if (*(int *)(iVar5 + 0x14) == 0) {
        puVar12 = (undefined4 *)(iVar5 + 4);
      }
      uVar19 = puVar12[1];
      uVar15 = *(undefined4 *)(&DAT_70ffd3c4 + iVar3 * 0x28);
      uVar9 = FUN_71ba240c(*puVar12,*(undefined4 *)(&DAT_70ffd3c0 + iVar3 * 0x28));
      uVar15 = FUN_71ba240c(uVar19,uVar15);
      uVar15 = FUN_71ba21e8(uVar15,uVar15);
      uVar9 = FUN_71ba21e8(uVar9,uVar9);
      FUN_71ba0b38(uVar9,uVar15);
      imp_sqrtf();
      uVar9 = FUN_71ba17bc();
      goto LAB_7173ef54;
    }
  }
  pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fa3d8);
  if (*pcVar4 == '\0') {
    puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fa3c8);
    *(undefined1 *)(puVar12 + 3) = 1;
    *puVar12 = 0xa0a20f56;
    puVar12[1] = 0xf7847141;
    puVar12[2] = 0xc5bb0a59;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71740504,puVar12,&DAT_70b0e000);
    puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fa3d8);
    *puVar10 = 1;
  }
  pbVar8 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fa3c8);
  if (pbVar8[0xc] != 0) {
    *pbVar8 = *pbVar8 ^ 0x35;
    pbVar8[1] = pbVar8[1] ^ 99;
    pbVar8[2] = pbVar8[2] ^ 0xcb;
    pbVar8[3] = pbVar8[3] ^ 0xc5;
    pbVar8[0xc] = 0;
    pbVar8[4] = pbVar8[4] ^ 0x2f;
    pbVar8[5] = pbVar8[5] ^ 5;
    pbVar8[6] = pbVar8[6] ^ 0xdb;
    pbVar8[7] = pbVar8[7] ^ 0x95;
    pbVar8[8] = pbVar8[8] ^ 0x35;
    pbVar8[9] = pbVar8[9] ^ 99;
    pbVar8[10] = pbVar8[10] ^ 0xcb;
    pbVar8[0xb] = pbVar8[0xb] ^ 0xc5;
  }
  uVar6 = imp_strlen(pbVar8);
  if (0xfffffff7 < uVar6) {
LAB_7173f198:
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_30);
  }
  if (uVar6 < 0xb) {
    uVar18 = (uint)&uStack_30 | 1;
    uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar6 << 1));
    if (uVar6 != 0) goto LAB_7173ef38;
  }
  else {
    uVar18 = thunk_MwhHq((uVar6 | 7) + 1);
    uStack_30 = (uVar6 | 7) + 2;
    uStack_2c = uVar6;
    uStack_28 = uVar18;
LAB_7173ef38:
    imp___aeabi_memmove(uVar18,pbVar8,uVar6);
  }
  uVar9 = 0xffffffff;
  *(undefined1 *)(uVar18 + uVar6) = 0;
LAB_7173ef54:
  FUN_717c623c(&uStack_30,uVar9);
  if ((uStack_30 & 1) != 0) {
    thunk_qNQrlu(uStack_28);
  }
  return;
}


// =========================================================================
// Function: FUN_7173ff3c
// Entry: 0x7173ff3c | Size: 280 bytes
// =========================================================================

void FUN_7173ff3c(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_40 [4];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  cVar1 = (&DAT_70ffd3dc)[param_2 * 0x28];
  if (*(int *)(&DAT_70fffac8 + cVar1 * 4) != 0) {
    FUN_7136cdfc(&uStack_2c);
    FUN_7135950c(&DAT_70ffd3c0 + param_2 * 0x28,&uStack_2c,0,0,0,0);
    iVar2 = FUN_71ba2d50(uStack_24,0x3f800000);
    if (iVar2 != 0) {
      uVar3 = FUN_71ba21e8(*(undefined4 *)(DAT_711e9ee4 + 0x30),0x42000000);
      uStack_34 = FUN_71ba0b38(uStack_2c,uVar3);
      uStack_30 = FUN_71ba240c(uStack_28,uVar3);
      uStack_38 = FUN_71ba0b38(uVar3,uStack_28);
      uStack_3c = FUN_71ba240c(uStack_2c,uVar3);
      FUN_71358ecc(auStack_40,0xff,0xff,0xff);
      FUN_7135ab38(&DAT_70fffac8 + cVar1 * 4,&uStack_3c,auStack_40);
    }
  }
  return;
}


// =========================================================================
// Function: FUN_717401e4
// Entry: 0x717401e4 | Size: 292 bytes
// =========================================================================

void FUN_717401e4(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *unaff_r7;
  int *piVar5;
  bool bVar6;
  
  iVar3 = thunk_FUN_71566860();
  if (iVar3 == 0) {
    piVar4 = (int *)(DAT_711a3938 + 0x1389c);
    iVar3 = *piVar4;
    if (iVar3 == 0) {
      iVar3 = FUN_713c301c(0);
      if (iVar3 == 0) {
        iVar3 = *piVar4;
      }
      else {
        thunk_MwhHq(0x3a0);
        iVar3 = FUN_715ba834();
        *piVar4 = iVar3;
      }
    }
    iVar3 = thunk_FUN_715bf66c(iVar3);
    piVar4 = param_1;
    if (iVar3 != 0) {
      piVar4 = param_1 + 1;
      unaff_r7 = (int *)*param_1;
    }
    if (iVar3 != 0 && unaff_r7 != piVar4) {
      do {
        if (unaff_r7[5] != 0) {
          cVar1 = '\0';
          if (unaff_r7[7] != 0) {
            cVar1 = (char)unaff_r7[8];
          }
          if ((unaff_r7[7] != 0 && cVar1 != '\0') && (iVar3 = FUN_7145c7f8(), iVar3 != -1)) {
            iVar3 = iVar3 * 0x28;
            FUN_716382cc(*(undefined4 *)(&DAT_70ffd3c0 + iVar3),
                         *(undefined4 *)(&DAT_70ffd3c4 + iVar3),
                         *(undefined4 *)(&DAT_70ffd3c8 + iVar3),unaff_r7[7],0,0);
          }
        }
        piVar2 = (int *)unaff_r7[1];
        piVar5 = unaff_r7;
        if ((int *)unaff_r7[1] == (int *)0x0) {
          do {
            unaff_r7 = (int *)piVar5[2];
            bVar6 = (int *)*unaff_r7 != piVar5;
            piVar5 = unaff_r7;
          } while (bVar6);
        }
        else {
          do {
            unaff_r7 = piVar2;
            piVar2 = (int *)*unaff_r7;
          } while ((int *)*unaff_r7 != (int *)0x0);
        }
      } while (unaff_r7 != piVar4);
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71740530
// Entry: 0x71740530 | Size: 60 bytes
// =========================================================================

void FUN_71740530(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  FUN_71740530(param_1,*param_2);
  FUN_71740530(param_1,param_2[1]);
  thunk_qNQrlu(param_2);
  return;
}


// =========================================================================
// Function: FUN_717405d8
// Entry: 0x717405d8 | Size: 296 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x717406c8) */
/* WARNING: Removing unreachable block (ram,0x717406bc) */
/* WARNING: Removing unreachable block (ram,0x717406c4) */

void FUN_717405d8(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  bool bVar9;
  
  pbVar7 = (byte *)*param_1;
  uVar8 = param_1[1];
  iVar5 = (uVar8 & 0xfffffff8) + 8;
  uVar1 = 0;
  uVar2 = 0;
  if (0xf < iVar5) {
    uVar2 = (uint)*pbVar7;
  }
  uVar6 = 0;
  if (0xf < iVar5) {
    uVar1 = (uint)pbVar7[1];
    uVar6 = 0x10;
  }
  iVar3 = *(int *)(DAT_711f6d58 + 4);
  if ((iVar3 != 0) && (uVar2 = uVar2 | uVar1 << 8, uVar2 < 0x7d1)) {
    bVar9 = *(char *)(iVar3 + uVar2 + 0x3e88) != '\0';
    if (bVar9) {
      uVar8 = *(uint *)(iVar3 + uVar2 * 4);
    }
    if (bVar9 && uVar8 != 0) {
      FUN_715f45c0(uVar8,0xb,*(undefined2 *)(pbVar7 + (uVar6 >> 3)));
      iVar3 = uVar6 + 0x10;
      uVar1 = 0;
      bVar4 = 0;
      do {
        if (uVar1 != 0xb) {
          if (iVar3 + 8 <= iVar5) {
            bVar4 = pbVar7[iVar3 >> 3];
            iVar3 = iVar3 + 8;
          }
          FUN_715f45c0(uVar8,uVar1 & 0xff,bVar4);
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 != 0x16);
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71740744
// Entry: 0x71740744 | Size: 1588 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x71740ae0) */
/* WARNING: Removing unreachable block (ram,0x71740a64) */
/* WARNING: Removing unreachable block (ram,0x7174099c) */
/* WARNING: Removing unreachable block (ram,0x71740828) */
/* WARNING: Removing unreachable block (ram,0x71740860) */
/* WARNING: Removing unreachable block (ram,0x7174082c) */
/* WARNING: Removing unreachable block (ram,0x71740820) */
/* WARNING: Removing unreachable block (ram,0x71740854) */
/* WARNING: Removing unreachable block (ram,0x71740994) */
/* WARNING: Removing unreachable block (ram,0x717408d8) */
/* WARNING: Removing unreachable block (ram,0x717408e0) */
/* WARNING: Removing unreachable block (ram,0x717408e4) */
/* WARNING: Removing unreachable block (ram,0x71740a74) */
/* WARNING: Removing unreachable block (ram,0x717409a0) */
/* WARNING: Removing unreachable block (ram,0x7174085c) */
/* WARNING: Removing unreachable block (ram,0x71740a7c) */
/* WARNING: Removing unreachable block (ram,0x71740a8c) */
/* WARNING: Removing unreachable block (ram,0x71740a9c) */
/* WARNING: Removing unreachable block (ram,0x71740aa4) */
/* WARNING: Removing unreachable block (ram,0x71740ab4) */
/* WARNING: Removing unreachable block (ram,0x71740ac4) */
/* WARNING: Removing unreachable block (ram,0x71740ac8) */
/* WARNING: Removing unreachable block (ram,0x71740aec) */
/* WARNING: Removing unreachable block (ram,0x71740af0) */

void FUN_71740744(undefined4 *param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  byte unaff_r6;
  byte unaff_r8;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  uint uVar14;
  bool bVar15;
  int iStack_54;
  uint uStack_44;
  undefined2 uStack_37;
  byte bStack_35;
  undefined4 uStack_34;
  int iStack_30;
  byte *pbStack_2c;
  byte *pbStack_28;
  
  uVar8 = 0;
  pbVar13 = (byte *)*param_1;
  uVar6 = 0;
  iVar9 = (param_1[1] & 0xfffffff8) + 8;
  uVar3 = 0;
  if (0xf < iVar9) {
    uVar3 = 0x10;
  }
  uVar11 = uVar3 | 8;
  if (0xf < iVar9) {
    uVar8 = (uint)*pbVar13;
    uVar6 = (uint)pbVar13[1];
  }
  if (iVar9 < (int)uVar11) {
    uVar14 = 0;
    uVar11 = uVar3;
  }
  else {
    uVar14 = (uint)pbVar13[uVar3 >> 3];
    pbStack_28 = (byte *)0x0;
    pbStack_2c = (byte *)0x0;
    iStack_30 = 0;
    if (uVar14 == 0) goto LAB_71740c78;
  }
  pbStack_28 = (byte *)0x0;
  pbStack_2c = (byte *)0x0;
  iStack_30 = 0;
  pbVar10 = (byte *)0x0;
  uVar3 = 0;
  uStack_44 = 0;
  do {
    iVar1 = iStack_30;
    iVar4 = uVar11 + 8;
    if (iVar4 <= iVar9) {
      unaff_r8 = pbVar13[(int)uVar11 >> 3];
      iVar4 = uVar11 + 0x10;
      uVar11 = uVar11 + 8;
    }
    if (iVar4 <= iVar9) {
      unaff_r6 = pbVar13[(int)uVar11 >> 3];
      uVar11 = uVar11 + 8;
    }
    iVar4 = (int)uVar11 >> 3;
    if (unaff_r6 == 2) {
      uVar12 = uVar11;
      if ((int)(uVar11 + 8) <= iVar9) {
        uStack_44 = (uint)pbVar13[iVar4];
        uVar12 = uVar11 + 8;
      }
      if (pbVar10 < pbStack_28) {
        *pbVar10 = unaff_r8;
        pbVar10[4] = 0;
        pbVar10[5] = 0;
        pbVar10[6] = 0;
        pbVar10[7] = 0;
        goto LAB_717409c4;
      }
      iVar4 = (int)pbVar10 - iStack_30;
      uVar11 = (iVar4 >> 2) * -0x55555555 + 1;
      if (0x15555555 < uVar11) goto LAB_71740ce4;
      iVar5 = (int)pbStack_28 - iStack_30 >> 2;
      if (uVar11 < (uint)(iVar5 * 0x55555556)) {
        uVar11 = iVar5 * 0x55555556;
      }
      if (0xaaaaaa9 < (uint)(iVar5 * -0x55555555)) {
        uVar11 = 0x15555555;
      }
      if (uVar11 == 0) {
        iVar5 = 0;
      }
      else {
        if (0x15555555 < uVar11) goto LAB_71740cec;
        iVar5 = thunk_MwhHq(uVar11 * 0xc);
      }
      pbVar10 = (byte *)(iVar5 + (iVar4 >> 2) * 4);
      *pbVar10 = unaff_r8;
      pbVar10[4] = 0;
      pbVar10[5] = 0;
      pbVar10[6] = 0;
      pbVar10[7] = 0;
LAB_71740bec:
      iStack_54 = (int)pbVar10 - iVar4;
      imp___aeabi_memcpy4(iStack_54,iVar1,iVar4);
LAB_71740c50:
      pbVar10 = pbVar10 + 0xc;
      pbStack_28 = (byte *)(iVar5 + uVar11 * 0xc);
      iStack_30 = iStack_54;
      uVar11 = uVar12;
      pbStack_2c = pbVar10;
      if (iVar1 != 0) {
        qNQrlu(iVar1);
        pbStack_2c = pbVar10;
      }
    }
    else {
      if (unaff_r6 == 1) {
        if ((int)(uVar11 + 8) <= iVar9) {
          uStack_44 = (uint)pbVar13[iVar4];
          uVar11 = uVar11 + 8;
        }
        uVar12 = uVar11;
        if (pbStack_28 <= pbVar10) {
          iVar4 = (int)pbVar10 - iStack_30;
          uVar11 = (iVar4 >> 2) * -0x55555555 + 1;
          if (uVar11 < 0x15555556) {
            iVar5 = (int)pbStack_28 - iStack_30 >> 2;
            if (uVar11 < (uint)(iVar5 * 0x55555556)) {
              uVar11 = iVar5 * 0x55555556;
            }
            if (0xaaaaaa9 < (uint)(iVar5 * -0x55555555)) {
              uVar11 = 0x15555555;
            }
            if (uVar11 == 0) {
              iVar5 = 0;
            }
            else {
              if (0x15555555 < uVar11) goto LAB_71740cec;
              iVar5 = thunk_MwhHq(uVar11 * 0xc);
            }
            pbVar10 = (byte *)(iVar5 + (iVar4 >> 2) * 4);
            *pbVar10 = unaff_r8;
            pbVar10[4] = 0;
            pbVar10[5] = 0;
            pbVar10[6] = 0;
            pbVar10[7] = 0;
            *(uint *)(pbVar10 + 8) = uStack_44;
            goto LAB_71740bec;
          }
LAB_71740ce4:
          FUN_71750c0c(&iStack_30);
LAB_71740cec:
                    /* WARNING: Subroutine does not return */
          FUN_712f6cf0();
        }
        *pbVar10 = unaff_r8;
        pbVar10[4] = 0;
        pbVar10[5] = 0;
        pbVar10[6] = 0;
        pbVar10[7] = 0;
        *(uint *)(pbVar10 + 8) = uStack_44;
LAB_717409c4:
        *(undefined2 *)(pbVar10 + 1) = (undefined2)uStack_34;
        bVar2 = uStack_34._2_1_;
      }
      else {
        if (unaff_r6 != 0) goto LAB_717407fc;
        uVar12 = uVar11 + 0x20;
        if (iVar9 < (int)uVar12) {
          uVar7 = 0;
          uVar12 = uVar11;
        }
        else {
          uStack_34 = CONCAT13(pbVar13[(int)(uVar11 + 0x18) >> 3],
                               CONCAT12(pbVar13[(int)(uVar11 + 0x10) >> 3],
                                        CONCAT11(pbVar13[(int)(uVar11 + 8) >> 3],pbVar13[iVar4])));
          uVar7 = uStack_34;
        }
        if (pbStack_28 <= pbVar10) {
          iVar4 = (int)pbVar10 - iStack_30;
          uVar11 = (iVar4 >> 2) * -0x55555555 + 1;
          if (0x15555555 < uVar11) goto LAB_71740ce4;
          iVar5 = (int)pbStack_28 - iStack_30 >> 2;
          if (uVar11 < (uint)(iVar5 * 0x55555556)) {
            uVar11 = iVar5 * 0x55555556;
          }
          if (0xaaaaaa9 < (uint)(iVar5 * -0x55555555)) {
            uVar11 = 0x15555555;
          }
          if (uVar11 == 0) {
            iVar5 = 0;
          }
          else {
            if (0x15555555 < uVar11) goto LAB_71740cec;
            iVar5 = thunk_MwhHq(uVar11 * 0xc);
          }
          pbVar10 = (byte *)(iVar5 + (iVar4 >> 2) * 4);
          *pbVar10 = unaff_r8;
          *(undefined4 *)(pbVar10 + 4) = uVar7;
          pbVar10[8] = 0;
          pbVar10[9] = 0;
          pbVar10[10] = 0;
          pbVar10[0xb] = 0;
          iStack_54 = (int)pbVar10 - iVar4;
          imp___aeabi_memcpy4(iStack_54,iVar1,iVar4);
          goto LAB_71740c50;
        }
        *pbVar10 = unaff_r8;
        *(undefined4 *)(pbVar10 + 4) = uVar7;
        pbVar10[8] = 0;
        pbVar10[9] = 0;
        pbVar10[10] = 0;
        pbVar10[0xb] = 0;
        *(undefined2 *)(pbVar10 + 1) = uStack_37;
        bVar2 = bStack_35;
      }
      pbVar10[3] = bVar2;
      pbVar10 = pbVar10 + 0xc;
      uVar11 = uVar12;
      pbStack_2c = pbVar10;
    }
LAB_717407fc:
    uVar3 = uVar3 + 1;
  } while (uVar3 < uVar14);
LAB_71740c78:
  iVar9 = *(int *)(DAT_711f6d58 + 4);
  if ((iVar9 != 0) && (uVar8 = uVar8 | uVar6 << 8, uVar8 < 0x7d1)) {
    bVar15 = *(char *)(iVar9 + uVar8 + 0x3e88) != '\0';
    if (bVar15) {
      iVar9 = *(int *)(iVar9 + uVar8 * 4);
    }
    if (bVar15 && iVar9 != 0) {
      FUN_715f8764(iVar9,&iStack_30);
    }
  }
  if (iStack_30 != 0) {
    pbStack_2c = (byte *)iStack_30;
    qNQrlu();
  }
  return;
}


// =========================================================================
// Function: FUN_71743578
// Entry: 0x71743578 | Size: 324 bytes
// =========================================================================

void FUN_71743578(void)

{
  if (DAT_71201808 == 0) {
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_717436f0
// Entry: 0x717436f0 | Size: 1628 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x7174381c) */
/* WARNING: Removing unreachable block (ram,0x717437fc) */
/* WARNING: Removing unreachable block (ram,0x717437f0) */
/* WARNING: Removing unreachable block (ram,0x717437d4) */
/* WARNING: Removing unreachable block (ram,0x717437b0) */
/* WARNING: Removing unreachable block (ram,0x717437a0) */
/* WARNING: Removing unreachable block (ram,0x717437ac) */
/* WARNING: Removing unreachable block (ram,0x717437c8) */
/* WARNING: Removing unreachable block (ram,0x717437d8) */
/* WARNING: Removing unreachable block (ram,0x717437f8) */
/* WARNING: Removing unreachable block (ram,0x71743814) */
/* WARNING: Removing unreachable block (ram,0x71743820) */

void FUN_717436f0(undefined4 *param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  byte bVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  byte *pbVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  bool bVar23;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  pbVar18 = (byte *)*param_1;
  iVar17 = (param_1[1] & 0xfffffff8) + 8;
  bVar8 = 0;
  uVar19 = 0;
  uVar20 = 0;
  uVar22 = 0;
  uVar21 = 0;
  uVar16 = 0;
  if (0x1f < iVar17) {
    uVar16 = 0x20;
    uVar21 = (uint)*pbVar18;
    uVar22 = (uint)pbVar18[1] << 8;
    uVar20 = (uint)pbVar18[2] << 0x10;
    uVar19 = (uint)pbVar18[3] << 0x18;
  }
  uVar13 = uVar16 | 8;
  bVar12 = 0;
  if ((int)uVar13 <= iVar17) {
    bVar8 = pbVar18[uVar16 >> 3];
    uVar13 = uVar16 | 0x10;
    uVar16 = uVar16 | 8;
  }
  uVar14 = 0xffffffff;
  if ((int)uVar13 <= iVar17) {
    bVar12 = pbVar18[uVar16 >> 3];
    uVar16 = uVar16 + 8;
  }
  if ((int)(uVar16 + 0x20) <= iVar17) {
    uStack_28 = CONCAT31(uStack_28._1_3_,pbVar18[uVar16 >> 3]);
    uStack_2c = CONCAT22(CONCAT11(pbVar18[uVar16 + 8 >> 3],pbVar18[uVar16 + 0x10 >> 3]),
                         CONCAT11(pbVar18[uVar16 + 0x18 >> 3],(char)uStack_2c));
    uVar14 = (uint)pbVar18[uVar16 + 0x18 >> 3] << 0x18 | (uint)pbVar18[uVar16 + 0x10 >> 3] << 0x10 |
             (uint)pbVar18[uVar16 + 8 >> 3] << 8 | (uint)pbVar18[uVar16 >> 3];
  }
  pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7660,bVar8,bVar12,uVar14);
  if (*pcVar9 == '\0') {
    puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7650);
    *puVar10 = 0xf898fd52;
    puVar10[1] = 0x18e23d27;
    *(undefined1 *)((int)puVar10 + 0xb) = 1;
    *(undefined4 *)((int)puVar10 + 7) = 0xf1e55018;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_7163f228,puVar10,&DAT_70b0e000);
    puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7660);
    *puVar11 = 1;
  }
  pbVar18 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7650);
  if (pbVar18[0xb] != 0) {
    *pbVar18 = *pbVar18 ^ 0x31;
    pbVar18[1] = pbVar18[1] ^ 0x91;
    pbVar18[2] = pbVar18[2] ^ 0xf1;
    pbVar18[3] = pbVar18[3] ^ 0x9d;
    pbVar18[0xb] = 0;
    pbVar18[4] = pbVar18[4] ^ 0x49;
    pbVar18[5] = pbVar18[5] ^ 0x49;
    pbVar18[6] = pbVar18[6] ^ 0xbd;
    pbVar18[7] = pbVar18[7] ^ 0x7d;
    pbVar18[8] = pbVar18[8] ^ 0x31;
    pbVar18[9] = pbVar18[9] ^ 0x91;
    pbVar18[10] = pbVar18[10] ^ 0xf1;
  }
  uVar16 = imp_strlen(pbVar18);
  if (0xfffffff7 < uVar16) goto LAB_7163dfd0;
  if (uVar16 < 0xb) {
    uVar13 = (uint)&uStack_30 | 1;
    uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar16 << 1));
    if (uVar16 != 0) goto LAB_7163dc30;
  }
  else {
    uVar13 = thunk_MwhHq((uVar16 | 7) + 1);
    uStack_30 = (uVar16 | 7) + 2;
    uStack_2c = uVar16;
    uStack_28 = uVar13;
LAB_7163dc30:
    imp___aeabi_memmove(uVar13,pbVar18,uVar16);
  }
  *(undefined1 *)(uVar13 + uVar16) = 0;
  FUN_717c623c(&uStack_30,uVar19 | uVar20 | uVar22 | uVar21);
  if ((uStack_30 & 1) != 0) {
    thunk_qNQrlu(uStack_28);
  }
  pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7680);
  if (*pcVar9 == '\0') {
    puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7670);
    *(undefined1 *)(puVar10 + 5) = 1;
    uVar6 = DAT_700835b0;
    uVar5 = DAT_700835ac;
    uVar4 = DAT_700835a8;
    uVar3 = DAT_700835a4;
    *puVar10 = DAT_700835a0;
    puVar10[1] = uVar3;
    puVar10[2] = uVar4;
    puVar10[3] = uVar5;
    puVar10[4] = uVar6;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_7163f254,puVar10,&DAT_70b0e000);
    puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7680);
    *puVar11 = 1;
  }
  iVar17 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7670);
  if (*(char *)(iVar17 + 0x14) != '\0') {
    uVar22 = 0;
    uVar20 = 0;
    do {
      iVar15 = (uVar22 & 7) * 8;
      bVar7 = (byte)(0x6b4b3b87 >> iVar15) |
              (byte)(-0x34f4b025 << ((uVar22 & 7) * -8 + 0x20 & 0xff));
      uVar19 = iVar15 - 0x20;
      if (-1 < (int)uVar19) {
        bVar7 = (byte)(0xcb0b4fdb >> (uVar19 & 0xff));
      }
      *(byte *)(iVar17 + uVar22) = *(byte *)(iVar17 + uVar22) ^ bVar7;
      bVar23 = 0xfffffffe < uVar22;
      bVar1 = uVar20 == 0;
      bVar2 = (0x12 < uVar22) <= uVar20;
      uVar22 = uVar22 + 1;
      uVar20 = uVar20 + bVar23;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar17 + 0x14) = 0;
  }
  uVar22 = imp_strlen(iVar17);
  if (0xfffffff7 < uVar22) goto LAB_7163dfd0;
  if (uVar22 < 0xb) {
    uVar20 = (uint)&uStack_30 | 1;
    uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar22 << 1));
    if (uVar22 != 0) goto LAB_7163dd58;
  }
  else {
    uVar20 = thunk_MwhHq((uVar22 | 7) + 1);
    uStack_30 = (uVar22 | 7) + 2;
    uStack_2c = uVar22;
    uStack_28 = uVar20;
LAB_7163dd58:
    imp___aeabi_memmove(uVar20,iVar17,uVar22);
  }
  *(undefined1 *)(uVar20 + uVar22) = 0;
  FUN_717c623c(&uStack_30,bVar8);
  if ((uStack_30 & 1) != 0) {
    thunk_qNQrlu(uStack_28);
  }
  pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c76a0);
  if (*pcVar9 == '\0') {
    puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7690);
    *(undefined1 *)((int)puVar10 + 0x12) = 1;
    uVar5 = DAT_700835c4;
    uVar4 = DAT_700835c0;
    uVar3 = DAT_700835bc;
    *puVar10 = DAT_700835b8;
    puVar10[1] = uVar3;
    puVar10[2] = uVar4;
    puVar10[3] = uVar5;
    *(undefined2 *)(puVar10 + 4) = DAT_700835c8;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_7163f288,puVar10,&DAT_70b0e000);
    puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c76a0);
    *puVar11 = 1;
  }
  iVar17 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7690);
  if (*(char *)(iVar17 + 0x12) != '\0') {
    uVar22 = 0;
    uVar20 = 0;
    do {
      iVar15 = (uVar22 & 7) * 8;
      bVar8 = (byte)(0x3b4b4b1b >> iVar15) |
              (byte)(-0x66eeca4f << ((uVar22 & 7) * -8 + 0x20 & 0xff));
      uVar19 = iVar15 - 0x20;
      if (-1 < (int)uVar19) {
        bVar8 = (byte)(0x991135b1 >> (uVar19 & 0xff));
      }
      *(byte *)(iVar17 + uVar22) = *(byte *)(iVar17 + uVar22) ^ bVar8;
      bVar23 = 0xfffffffe < uVar22;
      bVar1 = uVar20 == 0;
      bVar2 = (0x10 < uVar22) <= uVar20;
      uVar22 = uVar22 + 1;
      uVar20 = uVar20 + bVar23;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar17 + 0x12) = 0;
  }
  uVar22 = imp_strlen(iVar17);
  if (0xfffffff7 < uVar22) {
LAB_7163dfd0:
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_30);
  }
  if (uVar22 < 0xb) {
    uVar20 = (uint)&uStack_30 | 1;
    uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar22 << 1));
    if (uVar22 == 0) goto LAB_7163de90;
  }
  else {
    uVar20 = thunk_MwhHq((uVar22 | 7) + 1);
    uStack_30 = (uVar22 | 7) + 2;
    uStack_2c = uVar22;
    uStack_28 = uVar20;
  }
  imp___aeabi_memmove(uVar20,iVar17,uVar22);
LAB_7163de90:
  *(undefined1 *)(uVar20 + uVar22) = 0;
  FUN_717c623c(&uStack_30,bVar12);
  if ((uStack_30 & 1) != 0) {
    thunk_qNQrlu(uStack_28);
  }
  return;
}


// =========================================================================
// Function: FUN_71743890
// Entry: 0x71743890 | Size: 680 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x717439e8) */
/* WARNING: Removing unreachable block (ram,0x717439dc) */
/* WARNING: Removing unreachable block (ram,0x717439bc) */
/* WARNING: Removing unreachable block (ram,0x717439a0) */
/* WARNING: Removing unreachable block (ram,0x71743988) */
/* WARNING: Removing unreachable block (ram,0x71743970) */
/* WARNING: Removing unreachable block (ram,0x71743960) */
/* WARNING: Removing unreachable block (ram,0x71743978) */
/* WARNING: Removing unreachable block (ram,0x71743998) */
/* WARNING: Removing unreachable block (ram,0x717439b0) */
/* WARNING: Removing unreachable block (ram,0x717439c4) */
/* WARNING: Removing unreachable block (ram,0x717439e4) */
/* WARNING: Removing unreachable block (ram,0x71743a28) */
/* WARNING: Removing unreachable block (ram,0x71743a30) */
/* WARNING: Removing unreachable block (ram,0x71743a40) */
/* WARNING: Removing unreachable block (ram,0x71743a54) */
/* WARNING: Removing unreachable block (ram,0x71743a70) */
/* WARNING: Removing unreachable block (ram,0x71743a74) */
/* WARNING: Removing unreachable block (ram,0x71743a78) */
/* WARNING: Removing unreachable block (ram,0x71743a7c) */
/* WARNING: Removing unreachable block (ram,0x71743a88) */

void FUN_71743890(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  uint unaff_r5;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  
  pbVar5 = (byte *)*param_1;
  iVar6 = (param_1[1] & 0xfffffff8) + 8;
  if (iVar6 < 0x20) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x20;
    unaff_r5 = (uint)pbVar5[3] << 0x18 | (uint)pbVar5[2] << 0x10 | (uint)pbVar5[1] << 8 |
               (uint)*pbVar5;
  }
  iVar3 = unaff_r5 + 1;
  uVar4 = uVar2 + unaff_r5 * 8;
  iVar1 = thunk__IBDl(iVar3);
  if ((int)uVar4 <= iVar6) {
    imp___aeabi_memcpy(iVar1,pbVar5 + (uVar2 >> 3),unaff_r5);
    uVar2 = uVar4;
  }
  *(undefined1 *)(iVar1 + unaff_r5) = 0;
  if ((int)(uVar2 + 0x20) <= iVar6) {
    unaff_r5 = (uint)pbVar5[(int)(uVar2 + 0x18) >> 3] << 0x18 |
               (uint)pbVar5[(int)(uVar2 + 0x10) >> 3] << 0x10 |
               (uint)pbVar5[(int)(uVar2 + 8) >> 3] << 8 | (uint)pbVar5[(int)uVar2 >> 3];
    iVar3 = unaff_r5 + 1;
    uVar2 = uVar2 + 0x20;
  }
  iVar3 = thunk__IBDl(iVar3);
  if ((int)(unaff_r5 * 8 + uVar2) <= iVar6) {
    imp___aeabi_memcpy(iVar3,pbVar5 + ((int)uVar2 >> 3),unaff_r5);
  }
  *(undefined1 *)(iVar3 + unaff_r5) = 0;
  FUN_7163e5d4(iVar1,iVar3);
  dGrRHE(iVar1);
  thunk_dGrRHE(iVar3);
  return;
}


// =========================================================================
// Function: FUN_71743bd4
// Entry: 0x71743bd4 | Size: 676 bytes
// =========================================================================

void FUN_71743bd4(undefined4 *param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined1 uVar15;
  bool bVar16;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  uVar15 = 0;
  if ((uint)param_1[1] < 0x7ffffff8) {
    uVar15 = *(undefined1 *)*param_1;
  }
  pcVar7 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fa418);
  if (*pcVar7 == '\0') {
    puVar10 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa408);
    *(undefined1 *)((int)puVar10 + 0x11) = 1;
    uVar5 = DAT_7008508c;
    uVar4 = DAT_70085088;
    uVar3 = DAT_70085084;
    *puVar10 = DAT_70085080;
    puVar10[1] = uVar3;
    puVar10[2] = uVar4;
    puVar10[3] = uVar5;
    *(undefined1 *)(puVar10 + 4) = DAT_70085090;
    GFDIUClbc_QcPNgD_wH(&LAB_71750ba8,puVar10,&DAT_70b0e000);
    puVar11 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa418);
    *puVar11 = 1;
  }
  iVar8 = XcxSszXLPjQrEGhecEv_(&DAT_700fa408);
  if (*(char *)(iVar8 + 0x11) != '\0') {
    uVar9 = 0;
    uVar14 = 0;
    do {
      iVar12 = (uVar9 & 7) * 8;
      uVar13 = iVar12 - 0x20;
      bVar6 = (byte)(0x2fe1d7e9 >> iVar12) | (byte)(-0x6e24ac2d << ((uVar9 & 7) * -8 + 0x20 & 0xff))
      ;
      if (-1 < (int)uVar13) {
        bVar6 = (byte)(0x91db53d3 >> (uVar13 & 0xff));
      }
      *(byte *)(iVar8 + uVar9) = *(byte *)(iVar8 + uVar9) ^ bVar6;
      bVar16 = 0xfffffffe < uVar9;
      bVar1 = uVar14 == 0;
      bVar2 = (0xf < uVar9) <= uVar14;
      uVar9 = uVar9 + 1;
      uVar14 = uVar14 + bVar16;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar8 + 0x11) = 0;
  }
  uVar9 = imp_strlen(iVar8);
  if (0xfffffff7 < uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_2c);
  }
  if (uVar9 < 0xb) {
    uVar14 = (uint)&uStack_2c | 1;
    uStack_2c = CONCAT31(uStack_2c._1_3_,(char)(uVar9 << 1));
    if (uVar9 == 0) goto LAB_71743cf4;
  }
  else {
    uVar14 = thunk_MwhHq((uVar9 | 7) + 1);
    uStack_2c = (uVar9 | 7) + 2;
    uStack_28 = uVar9;
    uStack_24 = uVar14;
  }
  imp___aeabi_memmove(uVar14,iVar8,uVar9);
LAB_71743cf4:
  *(undefined1 *)(uVar14 + uVar9) = 0;
  FUN_717c623c(&uStack_2c,uVar15);
  if ((uStack_2c & 1) != 0) {
    qNQrlu(uStack_24);
  }
  return;
}


// =========================================================================
// Function: FUN_71743fb4
// Entry: 0x71743fb4 | Size: 184 bytes
// =========================================================================

void FUN_71743fb4(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  
  pbVar6 = (byte *)*param_1;
  iVar3 = (param_1[1] & 0xfffffff8) + 8;
  uVar1 = 0;
  uVar2 = 0;
  if (0xf < iVar3) {
    uVar2 = (uint)*pbVar6;
  }
  uVar4 = 0;
  if (0xf < iVar3) {
    uVar1 = (uint)pbVar6[1];
    uVar4 = 0x10;
  }
  if (((int)uVar4 < iVar3) && (iVar3 = 0, (char)pbVar6[uVar4 >> 3] < '\0')) {
    iVar3 = 1;
  }
  iVar5 = *(int *)(DAT_711f6d58 + 0xac);
  if (iVar5 != 0) {
    uVar2 = uVar2 | uVar1 << 8;
    if (0xfa < uVar2 >> 2) {
      return;
    }
    if ((*(char *)(iVar5 + uVar2 + 0x3eec) != '\0') &&
       (iVar5 = *(int *)(iVar5 + uVar2 * 4 + 0x1f8c), iVar5 != 0)) {
      *(byte *)(iVar5 + 0xc) = (byte)iVar3 & 1;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_717440fc
// Entry: 0x717440fc | Size: 932 bytes
// =========================================================================

void FUN_717440fc(undefined4 *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined3 uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  byte unaff_lr;
  bool bVar16;
  byte bStack_38;
  byte bStack_2f;
  byte bStack_2e;
  byte bStack_2d;
  byte bStack_2c;
  undefined4 uStack_28;
  
  uVar12 = 0;
  pbVar11 = (byte *)*param_1;
  uVar15 = 0;
  uStack_28 = 0;
  uVar9 = (param_1[1] & 0xfffffff8) + 8;
  bStack_2c = 0;
  bStack_2d = 0;
  bStack_2e = 0;
  uVar4 = 0;
  bStack_2f = 0;
  if (0xf < (int)uVar9) {
    uVar4 = 0x10;
    uVar15 = (uint)*pbVar11;
    uVar12 = (uint)pbVar11[1];
  }
  if ((int)uVar4 < (int)uVar9) {
    uVar10 = uVar4 >> 3;
    uVar4 = uVar4 | 1;
    bStack_38 = (char)pbVar11[uVar10] < '\0';
  }
  uVar10 = uVar4 + 8;
  if ((int)uVar10 <= (int)uVar9) {
    pbVar6 = pbVar11 + (uVar4 >> 3);
    bVar13 = *pbVar6;
    uVar5 = uVar4 & 7;
    if (uVar5 != 0) {
      pbVar6 = (byte *)(uint)pbVar6[1];
    }
    unaff_lr = bVar13 << uVar5;
    uVar4 = uVar10;
    if (uVar5 != 0) {
      unaff_lr = unaff_lr | (byte)((uint)pbVar6 >> (8 - uVar5 & 0xff));
    }
  }
  uVar10 = 0;
  if ((int)uVar4 < (int)uVar9) {
    uVar10 = uVar4 >> 3;
    uVar5 = uVar4 & 7;
    uVar4 = uVar4 + 1;
    uVar10 = ((uint)pbVar11[uVar10] << uVar5 & 0xff) >> 7;
  }
  uVar5 = uVar4 + 0x20;
  if ((int)uVar5 <= (int)uVar9) {
    uVar8 = uVar4 & 7;
    pbVar6 = pbVar11 + (uVar4 >> 3);
    bVar13 = *pbVar6;
    uVar14 = 8 - uVar8;
    if (uVar8 != 0) {
      pbVar6 = (byte *)(uint)pbVar6[1];
    }
    bVar13 = bVar13 << uVar8;
    if (uVar8 != 0) {
      bVar13 = bVar13 | (byte)((uint)pbVar6 >> (uVar14 & 0xff));
    }
    pbVar6 = pbVar11 + (uVar4 + 8 >> 3);
    bVar1 = *pbVar6;
    if (uVar8 != 0) {
      pbVar6 = (byte *)(uint)pbVar6[1];
    }
    bVar1 = bVar1 << uVar8;
    if (uVar8 != 0) {
      bVar1 = bVar1 | (byte)((uint)pbVar6 >> (uVar14 & 0xff));
    }
    bVar2 = pbVar11[uVar4 + 0x10 >> 3] << uVar8;
    if (uVar8 != 0) {
      bVar2 = bVar2 | (pbVar11 + (uVar4 + 0x10 >> 3))[1] >> (uVar14 & 0xff);
    }
    uVar3 = CONCAT12(bVar2,CONCAT11(bVar1,bVar13));
    bVar13 = pbVar11[uVar4 + 0x18 >> 3];
    bVar1 = bVar13 << uVar8;
    if (uVar8 != 0) {
      bVar13 = (pbVar11 + (uVar4 + 0x18 >> 3))[1];
    }
    uStack_28 = CONCAT13(bVar1,uVar3);
    uVar4 = uVar5;
    if (uVar8 != 0) {
      uStack_28 = CONCAT13(bVar1 | bVar13 >> (uVar14 & 0xff),uVar3);
    }
  }
  iVar7 = uVar4 + 8;
  uVar5 = 0;
  if ((int)uVar9 < iVar7) {
    bVar13 = 0;
  }
  else {
    uVar8 = uVar4 & 7;
    pbVar6 = pbVar11 + (uVar4 >> 3);
    bVar13 = *pbVar6;
    if (uVar8 != 0) {
      pbVar6 = (byte *)(uint)pbVar6[1];
    }
    bVar13 = bVar13 << uVar8;
    if (uVar8 != 0) {
      bVar13 = bVar13 | (byte)((uint)pbVar6 >> (8 - uVar8 & 0xff));
    }
    iVar7 = uVar4 + 0x10;
    uVar4 = uVar4 + 8;
  }
  if (iVar7 <= (int)uVar9) {
    uVar8 = uVar4 & 7;
    pbVar6 = pbVar11 + (uVar4 >> 3);
    bVar1 = *pbVar6;
    uVar4 = uVar4 + 8;
    if (uVar8 != 0) {
      pbVar6 = (byte *)(uint)pbVar6[1];
    }
    uVar5 = (uint)bVar1 << uVar8;
    if (uVar8 != 0) {
      uVar5 = uVar5 | (uint)pbVar6 >> (8 - uVar8 & 0xff);
    }
  }
  if ((int)(uVar4 + 0x20) <= (int)uVar9) {
    uVar8 = uVar4 & 7;
    uVar9 = 8 - uVar8;
    bStack_2c = pbVar11[uVar4 >> 3] << uVar8;
    if (uVar8 != 0) {
      bStack_2c = bStack_2c | (pbVar11 + (uVar4 >> 3))[1] >> (uVar9 & 0xff);
    }
    bStack_2d = pbVar11[uVar4 + 8 >> 3] << uVar8;
    if (uVar8 != 0) {
      bStack_2d = bStack_2d | (pbVar11 + (uVar4 + 8 >> 3))[1] >> (uVar9 & 0xff);
    }
    bStack_2e = pbVar11[uVar4 + 0x10 >> 3] << uVar8;
    if (uVar8 != 0) {
      bStack_2e = bStack_2e | (pbVar11 + (uVar4 + 0x10 >> 3))[1] >> (uVar9 & 0xff);
    }
    bStack_2f = pbVar11[uVar4 + 0x18 >> 3] << uVar8;
    if (uVar8 != 0) {
      bStack_2f = bStack_2f | (pbVar11 + (uVar4 + 0x18 >> 3))[1] >> (uVar9 & 0xff);
    }
  }
  iVar7 = *(int *)(DAT_711f6d58 + 4);
  if ((iVar7 != 0) && (uVar15 = uVar15 | uVar12 << 8, uVar15 < 0x7d1)) {
    bVar16 = *(char *)(iVar7 + uVar15 + 0x3e88) != '\0';
    if (bVar16) {
      uVar9 = *(uint *)(iVar7 + uVar15 * 4);
    }
    if (bVar16 && uVar9 != 0) {
      *(byte *)(uVar9 + 0x758) = unaff_lr;
      *(byte *)(uVar9 + 0x734) = bStack_38 & 1;
      FUN_7160301c(uVar9,uVar10);
      FUN_71602f0c(uVar9,uStack_28);
      *(byte *)(uVar9 + 0x735) = bVar13;
      FUN_7160bc94(uVar9,uVar5 & 0xff);
      FUN_7160bcb4(uVar9,(uint)bStack_2f << 0x18 | (uint)bStack_2e << 0x10 | (uint)bStack_2d << 8 |
                         (uint)bStack_2c);
      return;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71744508
// Entry: 0x71744508 | Size: 696 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x71744648) */
/* WARNING: Removing unreachable block (ram,0x71744624) */
/* WARNING: Removing unreachable block (ram,0x71744614) */
/* WARNING: Removing unreachable block (ram,0x717445fc) */
/* WARNING: Removing unreachable block (ram,0x717445dc) */
/* WARNING: Removing unreachable block (ram,0x717445c4) */
/* WARNING: Removing unreachable block (ram,0x717445ac) */
/* WARNING: Removing unreachable block (ram,0x717445a0) */
/* WARNING: Removing unreachable block (ram,0x717445b4) */
/* WARNING: Removing unreachable block (ram,0x717445d4) */
/* WARNING: Removing unreachable block (ram,0x717445f0) */
/* WARNING: Removing unreachable block (ram,0x71744600) */
/* WARNING: Removing unreachable block (ram,0x71744620) */
/* WARNING: Removing unreachable block (ram,0x71744640) */
/* WARNING: Removing unreachable block (ram,0x7174464c) */

void FUN_71744508(undefined4 *param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  uint in_r12;
  uint unaff_lr;
  byte bStackY_2b;
  byte bStackY_2a;
  byte bStackY_29;
  byte bStackY_28;
  
  pbVar6 = (byte *)*param_1;
  uVar7 = param_1[1];
  iVar1 = (uVar7 & 0xfffffff8) + 8;
  if (iVar1 < 0x10) {
    uVar4 = 0;
  }
  else {
    unaff_lr = (uint)*pbVar6;
    uVar4 = 0x10;
    in_r12 = (uint)pbVar6[1];
  }
  uVar5 = uVar4 | 8;
  if ((int)uVar5 <= iVar1) {
    uVar7 = (uint)pbVar6[uVar4 >> 3];
    uVar5 = uVar4 + 0x10;
    uVar4 = uVar4 | 8;
  }
  bVar2 = 0;
  if ((int)uVar5 <= iVar1) {
    bVar2 = pbVar6[uVar4 >> 3];
    uVar4 = uVar4 + 8;
  }
  if ((int)(uVar4 + 0x20) <= iVar1) {
    bStackY_28 = pbVar6[uVar4 >> 3];
    bStackY_29 = pbVar6[uVar4 + 8 >> 3];
    bStackY_2a = pbVar6[uVar4 + 0x10 >> 3];
    bStackY_2b = pbVar6[uVar4 + 0x18 >> 3];
    uVar4 = uVar4 + 0x20;
  }
  bVar3 = 0;
  if ((int)(uVar4 + 8) <= iVar1) {
    bVar3 = pbVar6[uVar4 >> 3];
  }
  uVar7 = uVar7 & 0xff;
  if (uVar7 == 2) {
    FUN_7150ad68(&DAT_70b0e95c,&DAT_71174ce8,unaff_lr & 0xff | (in_r12 & 0xff) << 8,bVar2,
                 (uint)bStackY_2b << 0x18 | (uint)bStackY_2a << 0x10 | (uint)bStackY_29 << 8 |
                 (uint)bStackY_28,bVar3);
    return;
  }
  if (uVar7 == 1) {
    FUN_7150ad68(&DAT_70b0e938,&DAT_71174cdc,unaff_lr & 0xff | (in_r12 & 0xff) << 8,bVar2,
                 (uint)bStackY_2b << 0x18 | (uint)bStackY_2a << 0x10 | (uint)bStackY_29 << 8 |
                 (uint)bStackY_28,0);
    return;
  }
  if (uVar7 == 0) {
    uVar7 = unaff_lr & 0xff | (in_r12 & 0xff) << 8;
    FUN_7150b31c(uVar7);
    FUN_7150b3a8(&DAT_70b0e95c,&DAT_71174ce8,uVar7);
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_71744794
// Entry: 0x71744794 | Size: 404 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x717448c8) */
/* WARNING: Removing unreachable block (ram,0x717448bc) */
/* WARNING: Removing unreachable block (ram,0x717448c4) */

void FUN_71744794(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int unaff_r4;
  int *unaff_r5;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  
  pbVar5 = (byte *)*param_1;
  iVar6 = (param_1[1] & 0xfffffff8) + 8;
  uVar1 = 0;
  uVar2 = 0;
  if (0xf < iVar6) {
    uVar2 = (uint)*pbVar5;
  }
  iVar4 = 0;
  if (0xf < iVar6) {
    uVar1 = (uint)pbVar5[1];
    iVar4 = 0x10;
  }
  iVar3 = *(int *)(DAT_711f6d58 + 0xac);
  if (iVar3 == 0) {
    return;
  }
  uVar2 = uVar2 | uVar1 << 8;
  if (uVar2 == *(ushort *)(iVar3 + 0x1f68)) {
    unaff_r5 = (int *)(DAT_711a3938 + 0x1389c);
    unaff_r4 = *unaff_r5;
    if (unaff_r4 == 0) {
      iVar3 = FUN_713c301c(0);
      if (iVar3 == 0) {
        unaff_r4 = *unaff_r5;
        if (unaff_r4 == 0) {
          return;
        }
      }
      else {
        unaff_r4 = thunk_MwhHq(0x3a0);
        iVar3 = FUN_715ba834();
        *unaff_r5 = iVar3;
      }
    }
  }
  else {
    if (0x3ec < uVar2) {
      return;
    }
    iVar3 = *(int *)(iVar3 + uVar2 * 4 + 0x1f8c);
    if (iVar3 != 0) {
      unaff_r4 = *(int *)(iVar3 + 0x10);
    }
    if (iVar3 == 0 || unaff_r4 == 0) {
      return;
    }
    if (*(char *)(iVar3 + 0x28) == '\0') {
      return;
    }
  }
  uVar1 = 0;
  do {
    if (iVar4 + 8 <= iVar6) {
      unaff_r5 = (int *)(uint)pbVar5[iVar4 >> 3];
      iVar4 = iVar4 + 8;
    }
    FUN_715cc8c0(unaff_r4,uVar1 & 0xff,(uint)unaff_r5 & 0xff);
    uVar1 = uVar1 + 1;
  } while (uVar1 != 0x2e);
  return;
}


// =========================================================================
// Function: FUN_717449ec
// Entry: 0x717449ec | Size: 1044 bytes
// =========================================================================

void FUN_717449ec(undefined4 param_1,byte *param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined3 uVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  uint unaff_r7;
  uint uVar11;
  uint unaff_r8;
  uint unaff_r9;
  uint unaff_r10;
  uint unaff_lr;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (param_4 < 0x21) {
    uVar7 = 1;
  }
  else {
    unaff_lr = (uint)(param_2[4] >> 7) | (uint)param_2[3] << 1;
    unaff_r7 = (uint)(param_2[3] >> 7);
    unaff_r8 = unaff_r7 | (uint)param_2[2] << 1;
    unaff_r9 = (uint)(param_2[2] >> 7) | (uint)param_2[1] << 1;
    unaff_r10 = (uint)(param_2[1] >> 7) | (uint)*param_2 << 1;
    uVar7 = 0x21;
  }
  uVar10 = uVar7 + 0x20;
  if ((int)uVar10 <= (int)param_4) {
    pbVar6 = param_2 + (uVar7 >> 3);
    unaff_r7 = (uint)pbVar6[3] << 1 | (uint)(pbVar6[4] >> 7);
    uVar10 = uVar7 | 0x40;
    uVar7 = uVar7 + 0x20;
    uStack_28 = CONCAT13((char)unaff_r7,
                         CONCAT12(pbVar6[2] << 1 | pbVar6[3] >> 7,
                                  CONCAT11(pbVar6[1] << 1 | pbVar6[2] >> 7,
                                           *pbVar6 << 1 | pbVar6[1] >> 7)));
  }
  if ((int)uVar10 <= (int)param_4) {
    pbVar6 = param_2 + (uVar7 >> 3);
    bVar9 = *pbVar6;
    uVar10 = uVar7 & 7;
    if (uVar10 != 0) {
      pbVar6 = (byte *)(uint)pbVar6[1];
    }
    uVar8 = 8 - uVar10;
    bVar9 = bVar9 << uVar10;
    if (uVar10 != 0) {
      bVar9 = bVar9 | (byte)((uint)pbVar6 >> (uVar8 & 0xff));
    }
    bVar1 = param_2[uVar7 + 8 >> 3] << uVar10;
    if (uVar10 != 0) {
      bVar1 = bVar1 | (param_2 + (uVar7 + 8 >> 3))[1] >> (uVar8 & 0xff);
    }
    bVar2 = param_2[uVar7 + 0x10 >> 3] << uVar10;
    if (uVar10 != 0) {
      bVar2 = bVar2 | (param_2 + (uVar7 + 0x10 >> 3))[1] >> (uVar8 & 0xff);
    }
    uVar11 = (uint)param_2[uVar7 + 0x18 >> 3] << uVar10;
    uVar4 = (undefined1)uVar11;
    unaff_r7 = 0;
    if (uVar10 != 0) {
      unaff_r7 = uVar11 | (param_2 + (uVar7 + 0x18 >> 3))[1] >> (uVar8 & 0xff);
      uVar4 = (undefined1)unaff_r7;
    }
    uVar10 = uVar7 + 0x40;
    uVar7 = uVar7 + 0x20;
    uStack_2c = CONCAT13(uVar4,CONCAT12(bVar2,CONCAT11(bVar1,bVar9)));
  }
  if ((int)uVar10 <= (int)param_4) {
    pbVar6 = param_2 + (uVar7 >> 3);
    bVar9 = *pbVar6;
    uVar10 = uVar7 & 7;
    if (uVar10 != 0) {
      pbVar6 = (byte *)(uint)pbVar6[1];
    }
    uVar8 = 8 - uVar10;
    bVar9 = bVar9 << uVar10;
    if (uVar10 != 0) {
      bVar9 = bVar9 | (byte)((uint)pbVar6 >> (uVar8 & 0xff));
    }
    bVar1 = param_2[uVar7 + 8 >> 3] << uVar10;
    if (uVar10 != 0) {
      bVar1 = bVar1 | (param_2 + (uVar7 + 8 >> 3))[1] >> (uVar8 & 0xff);
    }
    bVar2 = param_2[uVar7 + 0x10 >> 3] << uVar10;
    if (uVar10 != 0) {
      bVar2 = bVar2 | (param_2 + (uVar7 + 0x10 >> 3))[1] >> (uVar8 & 0xff);
    }
    uVar11 = (uint)param_2[uVar7 + 0x18 >> 3] << uVar10;
    uVar4 = (undefined1)uVar11;
    unaff_r7 = 0;
    if (uVar10 != 0) {
      unaff_r7 = uVar11 | (param_2 + (uVar7 + 0x18 >> 3))[1] >> (uVar8 & 0xff);
      uVar4 = (undefined1)unaff_r7;
    }
    uVar10 = uVar7 + 0x40;
    uVar7 = uVar7 + 0x20;
    uStack_30 = CONCAT13(uVar4,CONCAT12(bVar2,CONCAT11(bVar1,bVar9)));
  }
  if ((int)uVar10 <= (int)param_4) {
    uVar10 = uVar7 & 7;
    if (uVar10 != 0) {
      unaff_r7 = (uint)(param_2 + (uVar7 >> 3))[1];
    }
    bVar9 = param_2[uVar7 >> 3] << uVar10;
    uVar8 = 8 - uVar10;
    if (uVar10 != 0) {
      bVar9 = bVar9 | (byte)(unaff_r7 >> (uVar8 & 0xff));
    }
    bVar1 = param_2[uVar7 + 8 >> 3] << uVar10;
    if (uVar10 != 0) {
      bVar1 = bVar1 | (param_2 + (uVar7 + 8 >> 3))[1] >> (uVar8 & 0xff);
    }
    bVar2 = param_2[uVar7 + 0x10 >> 3] << uVar10;
    if (uVar10 != 0) {
      bVar2 = bVar2 | (param_2 + (uVar7 + 0x10 >> 3))[1] >> (uVar8 & 0xff);
    }
    uVar5 = CONCAT12(bVar2,CONCAT11(bVar1,bVar9));
    uVar11 = uVar7 + 0x18;
    uVar7 = uVar7 + 0x20;
    bVar9 = param_2[uVar11 >> 3];
    bVar1 = bVar9 << uVar10;
    if (uVar10 != 0) {
      bVar9 = (param_2 + (uVar11 >> 3))[1];
    }
    unaff_r7 = (uint)bVar9;
    uStack_34 = CONCAT13(bVar1,uVar5);
    if (uVar10 != 0) {
      uStack_34 = CONCAT13(bVar1 | bVar9 >> (uVar8 & 0xff),uVar5);
    }
  }
  uVar10 = uVar7 & 7;
  if (uVar10 != 0) {
    unaff_r7 = (uint)(param_2 + (uVar7 >> 3))[1];
  }
  bVar9 = param_2[uVar7 >> 3] << uVar10;
  uVar8 = 8 - uVar10;
  if (uVar10 != 0) {
    bVar9 = bVar9 | (byte)(unaff_r7 >> (uVar8 & 0xff));
  }
  bVar1 = param_2[uVar7 + 8 >> 3] << uVar10;
  if (uVar10 != 0) {
    bVar1 = bVar1 | (param_2 + (uVar7 + 8 >> 3))[1] >> (uVar8 & 0xff);
  }
  pbVar6 = param_2 + (uVar7 + 0x18 >> 3);
  bVar2 = *pbVar6;
  bVar3 = param_2[uVar7 + 0x10 >> 3] << uVar10;
  if (uVar10 != 0) {
    bVar3 = bVar3 | (param_2 + (uVar7 + 0x10 >> 3))[1] >> (uVar8 & 0xff);
  }
  if (uVar10 != 0) {
    pbVar6 = (byte *)(uint)pbVar6[1];
  }
  bVar2 = bVar2 << uVar10;
  if (uVar10 != 0) {
    bVar2 = bVar2 | (byte)((uint)pbVar6 >> (uVar8 & 0xff));
  }
  uStack_38 = CONCAT13(bVar2,CONCAT12(bVar3,CONCAT11(bVar1,bVar9)));
  FUN_7175ffd8(param_1,unaff_lr << 0x18 | (unaff_r8 & 0xff) << 0x10 | (unaff_r9 & 0xff) << 8 |
                       unaff_r10 & 0xff,uStack_28,uStack_2c,uStack_30,uStack_34,uStack_38);
  return;
}


// =========================================================================
// Function: FUN_717456e4
// Entry: 0x717456e4 | Size: 4432 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x717459d4) */
/* WARNING: Removing unreachable block (ram,0x717459a4) */
/* WARNING: Removing unreachable block (ram,0x71745990) */
/* WARNING: Removing unreachable block (ram,0x71745974) */
/* WARNING: Removing unreachable block (ram,0x71745950) */
/* WARNING: Removing unreachable block (ram,0x71745938) */
/* WARNING: Removing unreachable block (ram,0x71745914) */
/* WARNING: Removing unreachable block (ram,0x717458f4) */
/* WARNING: Removing unreachable block (ram,0x717458dc) */
/* WARNING: Removing unreachable block (ram,0x717458c4) */
/* WARNING: Removing unreachable block (ram,0x717458a0) */
/* WARNING: Removing unreachable block (ram,0x71745888) */
/* WARNING: Removing unreachable block (ram,0x71745e4c) */
/* WARNING: Removing unreachable block (ram,0x71745e30) */
/* WARNING: Removing unreachable block (ram,0x71745e18) */
/* WARNING: Removing unreachable block (ram,0x71745e00) */
/* WARNING: Removing unreachable block (ram,0x71745ddc) */
/* WARNING: Removing unreachable block (ram,0x71745dc4) */
/* WARNING: Removing unreachable block (ram,0x71745d90) */
/* WARNING: Removing unreachable block (ram,0x71745d74) */
/* WARNING: Removing unreachable block (ram,0x71745d5c) */
/* WARNING: Removing unreachable block (ram,0x71745d44) */
/* WARNING: Removing unreachable block (ram,0x71745d20) */
/* WARNING: Removing unreachable block (ram,0x71745d08) */
/* WARNING: Removing unreachable block (ram,0x71745cdc) */
/* WARNING: Removing unreachable block (ram,0x71745cc0) */
/* WARNING: Removing unreachable block (ram,0x71745ca8) */
/* WARNING: Removing unreachable block (ram,0x71745c90) */
/* WARNING: Removing unreachable block (ram,0x71745c6c) */
/* WARNING: Removing unreachable block (ram,0x71745c54) */
/* WARNING: Removing unreachable block (ram,0x71745c28) */
/* WARNING: Removing unreachable block (ram,0x71745c0c) */
/* WARNING: Removing unreachable block (ram,0x71745bf4) */
/* WARNING: Removing unreachable block (ram,0x71745bdc) */
/* WARNING: Removing unreachable block (ram,0x71745bb8) */
/* WARNING: Removing unreachable block (ram,0x71745ba0) */
/* WARNING: Removing unreachable block (ram,0x71745b74) */
/* WARNING: Removing unreachable block (ram,0x71745b58) */
/* WARNING: Removing unreachable block (ram,0x71745b40) */
/* WARNING: Removing unreachable block (ram,0x71745b28) */
/* WARNING: Removing unreachable block (ram,0x71745b04) */
/* WARNING: Removing unreachable block (ram,0x71745aec) */
/* WARNING: Removing unreachable block (ram,0x7174582c) */
/* WARNING: Removing unreachable block (ram,0x71745810) */
/* WARNING: Removing unreachable block (ram,0x717457f8) */
/* WARNING: Removing unreachable block (ram,0x717457e0) */
/* WARNING: Removing unreachable block (ram,0x717457bc) */
/* WARNING: Removing unreachable block (ram,0x717457a4) */
/* WARNING: Removing unreachable block (ram,0x717457b4) */
/* WARNING: Removing unreachable block (ram,0x717457d0) */
/* WARNING: Removing unreachable block (ram,0x717457e8) */
/* WARNING: Removing unreachable block (ram,0x71745808) */
/* WARNING: Removing unreachable block (ram,0x71745824) */
/* WARNING: Removing unreachable block (ram,0x71745838) */
/* WARNING: Removing unreachable block (ram,0x71745afc) */
/* WARNING: Removing unreachable block (ram,0x71745b18) */
/* WARNING: Removing unreachable block (ram,0x71745b30) */
/* WARNING: Removing unreachable block (ram,0x71745b50) */
/* WARNING: Removing unreachable block (ram,0x71745b6c) */
/* WARNING: Removing unreachable block (ram,0x71745b80) */
/* WARNING: Removing unreachable block (ram,0x71745bb0) */
/* WARNING: Removing unreachable block (ram,0x71745bcc) */
/* WARNING: Removing unreachable block (ram,0x71745be4) */
/* WARNING: Removing unreachable block (ram,0x71745c04) */
/* WARNING: Removing unreachable block (ram,0x71745c20) */
/* WARNING: Removing unreachable block (ram,0x71745c34) */
/* WARNING: Removing unreachable block (ram,0x71745c64) */
/* WARNING: Removing unreachable block (ram,0x71745c80) */
/* WARNING: Removing unreachable block (ram,0x71745c98) */
/* WARNING: Removing unreachable block (ram,0x71745cb8) */
/* WARNING: Removing unreachable block (ram,0x71745cd4) */
/* WARNING: Removing unreachable block (ram,0x71745ce8) */
/* WARNING: Removing unreachable block (ram,0x71745d18) */
/* WARNING: Removing unreachable block (ram,0x71745d34) */
/* WARNING: Removing unreachable block (ram,0x71745d4c) */
/* WARNING: Removing unreachable block (ram,0x71745d6c) */
/* WARNING: Removing unreachable block (ram,0x71745d88) */
/* WARNING: Removing unreachable block (ram,0x71745d9c) */
/* WARNING: Removing unreachable block (ram,0x71745dd4) */
/* WARNING: Removing unreachable block (ram,0x71745df0) */
/* WARNING: Removing unreachable block (ram,0x71745e08) */
/* WARNING: Removing unreachable block (ram,0x71745e28) */
/* WARNING: Removing unreachable block (ram,0x71745e44) */
/* WARNING: Removing unreachable block (ram,0x71745e58) */
/* WARNING: Removing unreachable block (ram,0x71745898) */
/* WARNING: Removing unreachable block (ram,0x717458b4) */
/* WARNING: Removing unreachable block (ram,0x717458cc) */
/* WARNING: Removing unreachable block (ram,0x717458ec) */
/* WARNING: Removing unreachable block (ram,0x7174590c) */
/* WARNING: Removing unreachable block (ram,0x71745918) */
/* WARNING: Removing unreachable block (ram,0x71745948) */
/* WARNING: Removing unreachable block (ram,0x71745964) */
/* WARNING: Removing unreachable block (ram,0x7174597c) */
/* WARNING: Removing unreachable block (ram,0x717459a0) */
/* WARNING: Removing unreachable block (ram,0x717459c8) */
/* WARNING: Removing unreachable block (ram,0x717459d8) */
/* WARNING: Type propagation algorithm not settling */

void FUN_717456e4(undefined4 *param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined4 *puVar5;
  byte bVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  uint uVar13;
  char *pcVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  uint uStack_94;
  uint uStack_90;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  byte bStack_4f;
  byte bStack_4e;
  byte bStack_4d;
  byte bStack_4c;
  byte bStack_4b;
  byte bStack_4a;
  byte bStack_49;
  byte bStack_48;
  byte bStack_47;
  byte bStack_46;
  byte bStack_45;
  byte bStack_44;
  byte bStack_43;
  byte bStack_42;
  byte bStack_41;
  byte bStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  byte bStack_2b;
  byte bStack_2a;
  byte bStack_29;
  byte bStack_28;
  
  puVar5 = DAT_71132df4;
  uVar11 = 0;
  pcVar14 = (char *)*param_1;
  uVar17 = (param_1[1] & 0xfffffff8) + 8;
  if (0x7ffffff7 < (param_1[1] & 0xfffffff8)) {
LAB_7174570c:
    uVar13 = uVar11 | 0x20;
    if ((int)uVar13 <= (int)uVar17) {
      uVar13 = uVar11 | 0x40;
      uStack_70 = (uint)(byte)pcVar14[uVar11 + 0x18 >> 3];
      uStack_74 = (uint)(byte)pcVar14[uVar11 + 8 >> 3];
      uVar16 = uVar11 >> 3;
      uStack_78 = (uint)(byte)pcVar14[uVar16];
      uVar11 = uVar11 | 0x20;
      uStack_7c = (uint)(byte)(pcVar14 + uVar16)[2];
    }
    if ((int)uVar13 <= (int)uVar17) {
      bStack_28 = pcVar14[uVar11 >> 3];
      bStack_29 = pcVar14[uVar11 + 8 >> 3];
      bStack_2a = pcVar14[uVar11 + 0x10 >> 3];
      bStack_2b = pcVar14[uVar11 + 0x18 >> 3];
      uVar13 = uVar11 | 0x40;
      uVar11 = uVar11 + 0x20;
    }
    if ((int)uVar13 <= (int)uVar17) {
      uStack_30 = CONCAT13(pcVar14[uVar11 + 0x18 >> 3],
                           CONCAT12(pcVar14[uVar11 + 0x10 >> 3],
                                    CONCAT11(pcVar14[uVar11 + 8 >> 3],pcVar14[uVar11 >> 3])));
      uVar13 = uVar11 + 0x40;
      uVar11 = uVar11 + 0x20;
    }
    if ((int)uVar13 <= (int)uVar17) {
      uStack_34 = CONCAT13(pcVar14[uVar11 + 0x18 >> 3],
                           CONCAT12(pcVar14[uVar11 + 0x10 >> 3],
                                    CONCAT11(pcVar14[uVar11 + 8 >> 3],pcVar14[uVar11 >> 3])));
      uVar13 = uVar11 + 0x40;
      uVar11 = uVar11 + 0x20;
    }
    if ((int)uVar13 <= (int)uVar17) {
      uStack_38 = CONCAT13(pcVar14[uVar11 + 0x18 >> 3],
                           CONCAT12(pcVar14[uVar11 + 0x10 >> 3],
                                    CONCAT11(pcVar14[uVar11 + 8 >> 3],pcVar14[uVar11 >> 3])));
      uVar13 = uVar11 + 0x40;
      uVar11 = uVar11 + 0x20;
    }
    if ((int)uVar13 <= (int)uVar17) {
      uStack_3c = CONCAT13(pcVar14[uVar11 + 0x18 >> 3],
                           CONCAT12(pcVar14[uVar11 + 0x10 >> 3],
                                    CONCAT11(pcVar14[uVar11 + 8 >> 3],pcVar14[uVar11 >> 3])));
      uVar13 = uVar11 + 0x40;
      uVar11 = uVar11 + 0x20;
    }
    if ((int)uVar13 <= (int)uVar17) {
      bStack_40 = pcVar14[uVar11 >> 3];
      bStack_41 = pcVar14[uVar11 + 8 >> 3];
      bStack_42 = pcVar14[uVar11 + 0x10 >> 3];
      bStack_43 = pcVar14[uVar11 + 0x18 >> 3];
      uVar13 = uVar11 + 0x40;
      uVar11 = uVar11 + 0x20;
    }
    if ((int)uVar13 <= (int)uVar17) {
      bStack_44 = pcVar14[uVar11 >> 3];
      bStack_45 = pcVar14[uVar11 + 8 >> 3];
      bStack_46 = pcVar14[uVar11 + 0x10 >> 3];
      bStack_47 = pcVar14[uVar11 + 0x18 >> 3];
      uVar11 = uVar11 + 0x20;
    }
    FUN_714e7d5c(uStack_70 << 0x18 | (uStack_7c & 0xff) << 0x10 | (uStack_74 & 0xff) << 8 |
                 uStack_78 & 0xff,
                 (uint)bStack_2b << 0x18 | (uint)bStack_2a << 0x10 | (uint)bStack_29 << 8 |
                 (uint)bStack_28,uStack_30,uStack_34,uStack_38,uStack_3c,
                 (uint)bStack_43 << 0x18 | (uint)bStack_42 << 0x10 | (uint)bStack_41 << 8 |
                 (uint)bStack_40,
                 (uint)bStack_47 << 0x18 | (uint)bStack_46 << 0x10 | (uint)bStack_45 << 8 |
                 (uint)bStack_44,
                 (uint)(byte)pcVar14[uVar11 + 0x18 >> 3] << 0x18 |
                 (uint)(byte)pcVar14[uVar11 + 0x10 >> 3] << 0x10 |
                 (uint)(byte)pcVar14[uVar11 + 8 >> 3] << 8 | (uint)(byte)pcVar14[uVar11 >> 3]);
    return;
  }
  cVar1 = *pcVar14;
  if (cVar1 != '\x02') {
    if (cVar1 == '\x01') {
      uVar8 = *(undefined4 *)(pcVar14 + 1);
      if ((DAT_71132df4[0xb] == DAT_71132df8) || (*(char *)(DAT_71132df4[0xb] + 0x28) != '\0')) {
        uVar15 = DAT_71132df4[0xb];
        iVar7 = thunk_MwhHq(0x30);
        *(undefined1 *)(iVar7 + 0x28) = 0;
        puVar5[0xb] = iVar7;
        *(undefined4 *)(puVar5[0xb] + 0x2c) = uVar15;
      }
      DAT_71132df4 = (undefined4 *)puVar5[0xb];
      *puVar5 = 1;
      puVar5[1] = uVar8;
      *(undefined1 *)(DAT_71132dfc + 0x28) = 1;
      DAT_71132e04 = DAT_71132e04 + 1;
      DAT_71132dfc = *(undefined4 *)(DAT_71132dfc + 0x2c);
      return;
    }
    uVar11 = 8;
    if (cVar1 != '\0') {
      return;
    }
    goto LAB_7174570c;
  }
  if (uVar17 < 0x18) {
    uVar11 = 8;
    uStack_90 = 0;
    uStack_94 = 0;
    if (8 < (int)uVar17) {
LAB_71745ebc:
      if ((pcVar14[uVar11 >> 3] & 0x80U) == 0) goto LAB_714e805c;
      uVar11 = uVar11 + 1;
    }
  }
  else {
    uStack_94 = (uint)(byte)pcVar14[1];
    uVar11 = 0x18;
    uStack_90 = (uint)(byte)pcVar14[2] << 8;
    if (0x18 < (int)uVar17) goto LAB_71745ebc;
  }
  uVar13 = 1;
  do {
    while( true ) {
      iVar7 = uVar11 + 0x20;
      uVar16 = uVar11;
      if (iVar7 <= (int)uVar17) {
        uVar16 = uVar11 & 7;
        pcVar12 = pcVar14 + ((int)uVar11 >> 3);
        cVar1 = *pcVar12;
        if (uVar16 != 0) {
          pcVar12 = (char *)(uint)(byte)pcVar12[1];
        }
        bStack_28 = cVar1 << uVar16;
        uVar9 = 8 - uVar16;
        if (uVar16 != 0) {
          bStack_28 = bStack_28 | (byte)((uint)pcVar12 >> (uVar9 & 0xff));
        }
        pcVar12 = pcVar14 + ((int)(uVar11 + 8) >> 3);
        cVar1 = *pcVar12;
        if (uVar16 != 0) {
          pcVar12 = (char *)(uint)(byte)pcVar12[1];
        }
        bStack_29 = cVar1 << uVar16;
        if (uVar16 != 0) {
          bStack_29 = bStack_29 | (byte)((uint)pcVar12 >> (uVar9 & 0xff));
        }
        pcVar12 = pcVar14 + ((int)(uVar11 + 0x10) >> 3);
        cVar1 = *pcVar12;
        if (uVar16 != 0) {
          pcVar12 = (char *)(uint)(byte)pcVar12[1];
        }
        bStack_2a = cVar1 << uVar16;
        if (uVar16 != 0) {
          bStack_2a = bStack_2a | (byte)((uint)pcVar12 >> (uVar9 & 0xff));
        }
        bStack_2b = pcVar14[(int)(uVar11 + 0x18) >> 3] << uVar16;
        if (uVar16 != 0) {
          bStack_2b = bStack_2b | (byte)(pcVar14 + ((int)(uVar11 + 0x18) >> 3))[1] >> (uVar9 & 0xff)
          ;
        }
        iVar7 = uVar11 + 0x40;
        uVar16 = uVar11 + 0x20;
      }
      if (iVar7 <= (int)uVar17) {
        uVar11 = uVar16 & 7;
        pcVar12 = pcVar14 + ((int)uVar16 >> 3);
        cVar1 = *pcVar12;
        if (uVar11 != 0) {
          pcVar12 = (char *)(uint)(byte)pcVar12[1];
        }
        bStack_40 = cVar1 << uVar11;
        uVar9 = 8 - uVar11;
        if (uVar11 != 0) {
          bStack_40 = bStack_40 | (byte)((uint)pcVar12 >> (uVar9 & 0xff));
        }
        pcVar12 = pcVar14 + ((int)(uVar16 + 8) >> 3);
        cVar1 = *pcVar12;
        if (uVar11 != 0) {
          pcVar12 = (char *)(uint)(byte)pcVar12[1];
        }
        bStack_41 = cVar1 << uVar11;
        if (uVar11 != 0) {
          bStack_41 = bStack_41 | (byte)((uint)pcVar12 >> (uVar9 & 0xff));
        }
        pcVar12 = pcVar14 + ((int)(uVar16 + 0x10) >> 3);
        cVar1 = *pcVar12;
        if (uVar11 != 0) {
          pcVar12 = (char *)(uint)(byte)pcVar12[1];
        }
        bStack_42 = cVar1 << uVar11;
        if (uVar11 != 0) {
          bStack_42 = bStack_42 | (byte)((uint)pcVar12 >> (uVar9 & 0xff));
        }
        bStack_43 = pcVar14[(int)(uVar16 + 0x18) >> 3] << uVar11;
        if (uVar11 != 0) {
          bStack_43 = bStack_43 | (byte)(pcVar14 + ((int)(uVar16 + 0x18) >> 3))[1] >> (uVar9 & 0xff)
          ;
        }
        iVar7 = uVar16 + 0x40;
        uVar16 = uVar16 + 0x20;
      }
      if (iVar7 <= (int)uVar17) {
        uVar11 = uVar16 & 7;
        pcVar12 = pcVar14 + ((int)uVar16 >> 3);
        cVar1 = *pcVar12;
        if (uVar11 != 0) {
          pcVar12 = (char *)(uint)(byte)pcVar12[1];
        }
        bVar2 = cVar1 << uVar11;
        uVar9 = 8 - uVar11;
        if (uVar11 != 0) {
          bVar2 = bVar2 | (byte)((uint)pcVar12 >> (uVar9 & 0xff));
        }
        pcVar12 = pcVar14 + ((int)(uVar16 + 8) >> 3);
        cVar1 = *pcVar12;
        if (uVar11 != 0) {
          pcVar12 = (char *)(uint)(byte)pcVar12[1];
        }
        bVar3 = cVar1 << uVar11;
        if (uVar11 != 0) {
          bVar3 = bVar3 | (byte)((uint)pcVar12 >> (uVar9 & 0xff));
        }
        pcVar12 = pcVar14 + ((int)(uVar16 + 0x10) >> 3);
        cVar1 = *pcVar12;
        if (uVar11 != 0) {
          pcVar12 = (char *)(uint)(byte)pcVar12[1];
        }
        bVar4 = cVar1 << uVar11;
        if (uVar11 != 0) {
          bVar4 = bVar4 | (byte)((uint)pcVar12 >> (uVar9 & 0xff));
        }
        bVar6 = pcVar14[(int)(uVar16 + 0x18) >> 3] << uVar11;
        if (uVar11 != 0) {
          bVar6 = bVar6 | (byte)(pcVar14 + ((int)(uVar16 + 0x18) >> 3))[1] >> (uVar9 & 0xff);
        }
        uStack_30 = CONCAT13(bVar6,CONCAT12(bVar4,CONCAT11(bVar3,bVar2)));
        iVar7 = uVar16 + 0x40;
        uVar16 = uVar16 + 0x20;
      }
      if (iVar7 <= (int)uVar17) {
        uVar11 = uVar16 & 7;
        pcVar12 = pcVar14 + ((int)uVar16 >> 3);
        cVar1 = *pcVar12;
        if (uVar11 != 0) {
          pcVar12 = (char *)(uint)(byte)pcVar12[1];
        }
        bVar2 = cVar1 << uVar11;
        uVar9 = 8 - uVar11;
        if (uVar11 != 0) {
          bVar2 = bVar2 | (byte)((uint)pcVar12 >> (uVar9 & 0xff));
        }
        pcVar12 = pcVar14 + ((int)(uVar16 + 8) >> 3);
        cVar1 = *pcVar12;
        if (uVar11 != 0) {
          pcVar12 = (char *)(uint)(byte)pcVar12[1];
        }
        bVar3 = cVar1 << uVar11;
        if (uVar11 != 0) {
          bVar3 = bVar3 | (byte)((uint)pcVar12 >> (uVar9 & 0xff));
        }
        pcVar12 = pcVar14 + ((int)(uVar16 + 0x10) >> 3);
        cVar1 = *pcVar12;
        if (uVar11 != 0) {
          pcVar12 = (char *)(uint)(byte)pcVar12[1];
        }
        bVar4 = cVar1 << uVar11;
        if (uVar11 != 0) {
          bVar4 = bVar4 | (byte)((uint)pcVar12 >> (uVar9 & 0xff));
        }
        bVar6 = pcVar14[(int)(uVar16 + 0x18) >> 3] << uVar11;
        if (uVar11 != 0) {
          bVar6 = bVar6 | (byte)(pcVar14 + ((int)(uVar16 + 0x18) >> 3))[1] >> (uVar9 & 0xff);
        }
        uStack_34 = CONCAT13(bVar6,CONCAT12(bVar4,CONCAT11(bVar3,bVar2)));
        iVar7 = uVar16 + 0x40;
        uVar16 = uVar16 + 0x20;
      }
      if (iVar7 <= (int)uVar17) {
        uVar11 = uVar16 & 7;
        pcVar12 = pcVar14 + ((int)uVar16 >> 3);
        cVar1 = *pcVar12;
        if (uVar11 != 0) {
          pcVar12 = (char *)(uint)(byte)pcVar12[1];
        }
        bVar2 = cVar1 << uVar11;
        uVar9 = 8 - uVar11;
        if (uVar11 != 0) {
          bVar2 = bVar2 | (byte)((uint)pcVar12 >> (uVar9 & 0xff));
        }
        pcVar12 = pcVar14 + ((int)(uVar16 + 8) >> 3);
        cVar1 = *pcVar12;
        if (uVar11 != 0) {
          pcVar12 = (char *)(uint)(byte)pcVar12[1];
        }
        bVar3 = cVar1 << uVar11;
        if (uVar11 != 0) {
          bVar3 = bVar3 | (byte)((uint)pcVar12 >> (uVar9 & 0xff));
        }
        pcVar12 = pcVar14 + ((int)(uVar16 + 0x10) >> 3);
        cVar1 = *pcVar12;
        if (uVar11 != 0) {
          pcVar12 = (char *)(uint)(byte)pcVar12[1];
        }
        bVar4 = cVar1 << uVar11;
        if (uVar11 != 0) {
          bVar4 = bVar4 | (byte)((uint)pcVar12 >> (uVar9 & 0xff));
        }
        bVar6 = pcVar14[(int)(uVar16 + 0x18) >> 3] << uVar11;
        if (uVar11 != 0) {
          bVar6 = bVar6 | (byte)(pcVar14 + ((int)(uVar16 + 0x18) >> 3))[1] >> (uVar9 & 0xff);
        }
        uStack_38 = CONCAT13(bVar6,CONCAT12(bVar4,CONCAT11(bVar3,bVar2)));
        iVar7 = uVar16 + 0x40;
        uVar16 = uVar16 + 0x20;
      }
      if (iVar7 <= (int)uVar17) {
        uVar11 = uVar16 & 7;
        pcVar12 = pcVar14 + ((int)uVar16 >> 3);
        cVar1 = *pcVar12;
        if (uVar11 != 0) {
          pcVar12 = (char *)(uint)(byte)pcVar12[1];
        }
        bVar2 = cVar1 << uVar11;
        uVar9 = 8 - uVar11;
        if (uVar11 != 0) {
          bVar2 = bVar2 | (byte)((uint)pcVar12 >> (uVar9 & 0xff));
        }
        pcVar12 = pcVar14 + ((int)(uVar16 + 8) >> 3);
        cVar1 = *pcVar12;
        if (uVar11 != 0) {
          pcVar12 = (char *)(uint)(byte)pcVar12[1];
        }
        bVar3 = cVar1 << uVar11;
        if (uVar11 != 0) {
          bVar3 = bVar3 | (byte)((uint)pcVar12 >> (uVar9 & 0xff));
        }
        pcVar12 = pcVar14 + ((int)(uVar16 + 0x10) >> 3);
        cVar1 = *pcVar12;
        if (uVar11 != 0) {
          pcVar12 = (char *)(uint)(byte)pcVar12[1];
        }
        bVar4 = cVar1 << uVar11;
        if (uVar11 != 0) {
          bVar4 = bVar4 | (byte)((uint)pcVar12 >> (uVar9 & 0xff));
        }
        bVar6 = pcVar14[(int)(uVar16 + 0x18) >> 3] << uVar11;
        if (uVar11 != 0) {
          bVar6 = bVar6 | (byte)(pcVar14 + ((int)(uVar16 + 0x18) >> 3))[1] >> (uVar9 & 0xff);
        }
        uStack_3c = CONCAT13(bVar6,CONCAT12(bVar4,CONCAT11(bVar3,bVar2)));
        iVar7 = uVar16 + 0x40;
        uVar16 = uVar16 + 0x20;
      }
      if (iVar7 <= (int)uVar17) {
        uVar11 = uVar16 & 7;
        pcVar12 = pcVar14 + ((int)uVar16 >> 3);
        cVar1 = *pcVar12;
        if (uVar11 != 0) {
          pcVar12 = (char *)(uint)(byte)pcVar12[1];
        }
        bStack_44 = cVar1 << uVar11;
        uVar9 = 8 - uVar11;
        if (uVar11 != 0) {
          bStack_44 = bStack_44 | (byte)((uint)pcVar12 >> (uVar9 & 0xff));
        }
        pcVar12 = pcVar14 + ((int)(uVar16 + 8) >> 3);
        cVar1 = *pcVar12;
        if (uVar11 != 0) {
          pcVar12 = (char *)(uint)(byte)pcVar12[1];
        }
        bStack_45 = cVar1 << uVar11;
        if (uVar11 != 0) {
          bStack_45 = bStack_45 | (byte)((uint)pcVar12 >> (uVar9 & 0xff));
        }
        pcVar12 = pcVar14 + ((int)(uVar16 + 0x10) >> 3);
        cVar1 = *pcVar12;
        if (uVar11 != 0) {
          pcVar12 = (char *)(uint)(byte)pcVar12[1];
        }
        bStack_46 = cVar1 << uVar11;
        if (uVar11 != 0) {
          bStack_46 = bStack_46 | (byte)((uint)pcVar12 >> (uVar9 & 0xff));
        }
        bStack_47 = pcVar14[(int)(uVar16 + 0x18) >> 3] << uVar11;
        if (uVar11 != 0) {
          bStack_47 = bStack_47 | (byte)(pcVar14 + ((int)(uVar16 + 0x18) >> 3))[1] >> (uVar9 & 0xff)
          ;
        }
        iVar7 = uVar16 + 0x40;
        uVar16 = uVar16 + 0x20;
      }
      if (iVar7 <= (int)uVar17) {
        uVar11 = uVar16 & 7;
        pcVar12 = pcVar14 + ((int)uVar16 >> 3);
        cVar1 = *pcVar12;
        if (uVar11 != 0) {
          pcVar12 = (char *)(uint)(byte)pcVar12[1];
        }
        bStack_48 = cVar1 << uVar11;
        uVar9 = 8 - uVar11;
        if (uVar11 != 0) {
          bStack_48 = bStack_48 | (byte)((uint)pcVar12 >> (uVar9 & 0xff));
        }
        pcVar12 = pcVar14 + ((int)(uVar16 + 8) >> 3);
        cVar1 = *pcVar12;
        if (uVar11 != 0) {
          pcVar12 = (char *)(uint)(byte)pcVar12[1];
        }
        bStack_49 = cVar1 << uVar11;
        if (uVar11 != 0) {
          bStack_49 = bStack_49 | (byte)((uint)pcVar12 >> (uVar9 & 0xff));
        }
        pcVar12 = pcVar14 + ((int)(uVar16 + 0x10) >> 3);
        cVar1 = *pcVar12;
        if (uVar11 != 0) {
          pcVar12 = (char *)(uint)(byte)pcVar12[1];
        }
        bStack_4a = cVar1 << uVar11;
        if (uVar11 != 0) {
          bStack_4a = bStack_4a | (byte)((uint)pcVar12 >> (uVar9 & 0xff));
        }
        iVar7 = uVar16 + 0x18;
        uVar16 = uVar16 + 0x20;
        bStack_4b = pcVar14[iVar7 >> 3] << uVar11;
        if (uVar11 != 0) {
          bStack_4b = bStack_4b | (byte)(pcVar14 + (iVar7 >> 3))[1] >> (uVar9 & 0xff);
        }
      }
      uVar11 = uVar16 & 7;
      pcVar12 = pcVar14 + ((int)uVar16 >> 3);
      cVar1 = *pcVar12;
      if (uVar11 != 0) {
        pcVar12 = (char *)(uint)(byte)pcVar12[1];
      }
      bStack_4c = cVar1 << uVar11;
      uVar9 = 8 - uVar11;
      if (uVar11 != 0) {
        bStack_4c = bStack_4c | (byte)((uint)pcVar12 >> (uVar9 & 0xff));
      }
      pcVar12 = pcVar14 + ((int)(uVar16 + 8) >> 3);
      cVar1 = *pcVar12;
      if (uVar11 != 0) {
        pcVar12 = (char *)(uint)(byte)pcVar12[1];
      }
      bStack_4d = cVar1 << uVar11;
      if (uVar11 != 0) {
        bStack_4d = bStack_4d | (byte)((uint)pcVar12 >> (uVar9 & 0xff));
      }
      pcVar12 = pcVar14 + ((int)(uVar16 + 0x10) >> 3);
      cVar1 = *pcVar12;
      if (uVar11 != 0) {
        pcVar12 = (char *)(uint)(byte)pcVar12[1];
      }
      bStack_4e = cVar1 << uVar11;
      if (uVar11 != 0) {
        bStack_4e = bStack_4e | (byte)((uint)pcVar12 >> (uVar9 & 0xff));
      }
      bStack_4f = pcVar14[(int)(uVar16 + 0x18) >> 3] << uVar11;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = (uint)(byte)(pcVar14 + ((int)(uVar16 + 0x18) >> 3))[1];
      }
      if (uVar11 != 0) {
        bStack_4f = bStack_4f | (byte)(uVar10 >> (uVar9 & 0xff));
      }
      FUN_714e7d5c((uint)bStack_2b << 0x18 | (uint)bStack_2a << 0x10 | (uint)bStack_29 << 8 |
                   (uint)bStack_28,
                   (uint)bStack_43 << 0x18 | (uint)bStack_42 << 0x10 | (uint)bStack_41 << 8 |
                   (uint)bStack_40,uStack_30,uStack_34,uStack_38,uStack_3c,
                   (uint)bStack_47 << 0x18 | (uint)bStack_46 << 0x10 | (uint)bStack_45 << 8 |
                   (uint)bStack_44,
                   (uint)bStack_4b << 0x18 | (uint)bStack_4a << 0x10 | (uint)bStack_49 << 8 |
                   (uint)bStack_48,
                   (uint)bStack_4f << 0x18 | (uint)bStack_4e << 0x10 | (uint)bStack_4d << 8 |
                   (uint)bStack_4c);
      uVar11 = uVar16 + 0x20;
      if ((int)uVar11 < (int)uVar17) break;
      if (uVar13 == 0) goto LAB_714e805c;
    }
    uVar13 = uVar11 & 7;
    iVar7 = (int)uVar11 >> 3;
    uVar11 = uVar16 + 0x21;
    uVar13 = ((uint)(byte)pcVar14[iVar7] << uVar13 & 0xff) >> 7;
  } while (uVar13 != 0);
LAB_714e805c:
  puVar5 = DAT_71132df4;
  if ((DAT_71132df4[0xb] == DAT_71132df8) || (*(char *)(DAT_71132df4[0xb] + 0x28) != '\0')) {
    uVar8 = DAT_71132df4[0xb];
    iVar7 = thunk_MwhHq(0x30);
    *(undefined1 *)(iVar7 + 0x28) = 0;
    puVar5[0xb] = iVar7;
    *(undefined4 *)(puVar5[0xb] + 0x2c) = uVar8;
  }
  DAT_71132df4 = (undefined4 *)puVar5[0xb];
  *puVar5 = 3;
  puVar5[1] = uStack_90 | uStack_94;
  *(undefined1 *)(DAT_71132dfc + 0x28) = 1;
  DAT_71132e04 = DAT_71132e04 + 1;
  DAT_71132dfc = *(undefined4 *)(DAT_71132dfc + 0x2c);
  return;
}


// =========================================================================
// Function: FUN_71746788
// Entry: 0x71746788 | Size: 152 bytes
// =========================================================================

void FUN_71746788(undefined4 *param_1)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar3 = 0;
  if (0x1f < (int)((param_1[1] & 0xfffffff8) + 8)) {
    pbVar1 = (byte *)*param_1;
    uVar5 = (uint)*pbVar1;
    uVar4 = (uint)pbVar1[1] << 8;
    uVar3 = (uint)pbVar1[2] << 0x10;
    uVar6 = (uint)pbVar1[3] << 0x18;
  }
  if (*(int *)(DAT_711f6d58 + 0xac) != 0) {
    iVar2 = *(int *)(*(int *)(DAT_711f6d58 + 0xac) + 0x1f6c);
    if (iVar2 != 0) {
      *(uint *)(iVar2 + 0x118) = uVar6 | uVar3 | uVar4 | uVar5;
    }
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_71746844
// Entry: 0x71746844 | Size: 1336 bytes
// =========================================================================

void FUN_71746844(undefined4 *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined3 uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  byte *pbVar14;
  uint unaff_r8;
  uint unaff_r9;
  uint unaff_r10;
  undefined8 uVar15;
  uint uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar10 = (param_1[1] & 0xfffffff8) + 8;
  if ((0 < (int)uVar10) && (pbVar14 = (byte *)*param_1, (char)*pbVar14 < '\0')) {
    if (uVar10 < 0x21) {
      uVar9 = 1;
    }
    else {
      uStack_38 = (uint)(pbVar14[4] >> 7) | (uint)pbVar14[3] << 1;
      unaff_r9 = (uint)(pbVar14[3] >> 7) | (uint)pbVar14[2] << 1;
      unaff_r10 = (uint)(pbVar14[2] >> 7) | (uint)pbVar14[1] << 1;
      unaff_r8 = (uint)(pbVar14[1] >> 7) | (uint)*pbVar14 << 1;
      uVar9 = 0x21;
    }
    uVar11 = uVar9 + 0x20;
    if ((int)uVar11 <= (int)uVar10) {
      pbVar8 = pbVar14 + (uVar9 >> 3);
      uVar11 = uVar9 | 0x40;
      uVar9 = uVar9 + 0x20;
      uStack_28 = CONCAT13(pbVar8[3] << 1 | pbVar8[4] >> 7,
                           CONCAT12(pbVar8[2] << 1 | pbVar8[3] >> 7,
                                    CONCAT11(pbVar8[1] << 1 | pbVar8[2] >> 7,
                                             *pbVar8 << 1 | pbVar8[1] >> 7)));
    }
    if ((int)uVar11 <= (int)uVar10) {
      uVar11 = uVar9 & 7;
      pbVar8 = pbVar14 + (uVar9 >> 3);
      bVar1 = *pbVar8;
      if (uVar11 != 0) {
        pbVar8 = (byte *)(uint)pbVar8[1];
      }
      bVar1 = bVar1 << uVar11;
      uVar12 = 8 - uVar11;
      if (uVar11 != 0) {
        bVar1 = bVar1 | (byte)((uint)pbVar8 >> (uVar12 & 0xff));
      }
      pbVar8 = pbVar14 + (uVar9 + 8 >> 3);
      bVar5 = *pbVar8;
      if (uVar11 != 0) {
        pbVar8 = (byte *)(uint)pbVar8[1];
      }
      bVar5 = bVar5 << uVar11;
      if (uVar11 != 0) {
        bVar5 = bVar5 | (byte)((uint)pbVar8 >> (uVar12 & 0xff));
      }
      pbVar8 = pbVar14 + (uVar9 + 0x10 >> 3);
      bVar2 = *pbVar8;
      if (uVar11 != 0) {
        pbVar8 = (byte *)(uint)pbVar8[1];
      }
      bVar2 = bVar2 << uVar11;
      if (uVar11 != 0) {
        bVar2 = bVar2 | (byte)((uint)pbVar8 >> (uVar12 & 0xff));
      }
      pbVar8 = pbVar14 + (uVar9 + 0x18 >> 3);
      bVar3 = *pbVar8;
      if (uVar11 != 0) {
        pbVar8 = (byte *)(uint)pbVar8[1];
      }
      bVar3 = bVar3 << uVar11;
      if (uVar11 != 0) {
        bVar3 = bVar3 | (byte)((uint)pbVar8 >> (uVar12 & 0xff));
      }
      uStack_2c = CONCAT13(bVar3,CONCAT12(bVar2,CONCAT11(bVar5,bVar1)));
      uVar11 = uVar9 + 0x40;
      uVar9 = uVar9 + 0x20;
    }
    if ((int)uVar11 <= (int)uVar10) {
      uVar11 = uVar9 & 7;
      pbVar8 = pbVar14 + (uVar9 >> 3);
      bVar1 = *pbVar8;
      if (uVar11 != 0) {
        pbVar8 = (byte *)(uint)pbVar8[1];
      }
      bVar1 = bVar1 << uVar11;
      uVar12 = 8 - uVar11;
      if (uVar11 != 0) {
        bVar1 = bVar1 | (byte)((uint)pbVar8 >> (uVar12 & 0xff));
      }
      pbVar8 = pbVar14 + (uVar9 + 8 >> 3);
      bVar5 = *pbVar8;
      if (uVar11 != 0) {
        pbVar8 = (byte *)(uint)pbVar8[1];
      }
      bVar5 = bVar5 << uVar11;
      if (uVar11 != 0) {
        bVar5 = bVar5 | (byte)((uint)pbVar8 >> (uVar12 & 0xff));
      }
      pbVar8 = pbVar14 + (uVar9 + 0x10 >> 3);
      bVar2 = *pbVar8;
      if (uVar11 != 0) {
        pbVar8 = (byte *)(uint)pbVar8[1];
      }
      bVar2 = bVar2 << uVar11;
      if (uVar11 != 0) {
        bVar2 = bVar2 | (byte)((uint)pbVar8 >> (uVar12 & 0xff));
      }
      pbVar8 = pbVar14 + (uVar9 + 0x18 >> 3);
      bVar3 = *pbVar8;
      if (uVar11 != 0) {
        pbVar8 = (byte *)(uint)pbVar8[1];
      }
      bVar3 = bVar3 << uVar11;
      if (uVar11 != 0) {
        bVar3 = bVar3 | (byte)((uint)pbVar8 >> (uVar12 & 0xff));
      }
      uStack_30 = CONCAT13(bVar3,CONCAT12(bVar2,CONCAT11(bVar5,bVar1)));
      uVar11 = uVar9 + 0x40;
      uVar9 = uVar9 + 0x20;
    }
    if ((int)uVar11 <= (int)uVar10) {
      uVar10 = uVar9 & 7;
      pbVar8 = pbVar14 + (uVar9 >> 3);
      bVar1 = *pbVar8;
      if (uVar10 != 0) {
        pbVar8 = (byte *)(uint)pbVar8[1];
      }
      bVar1 = bVar1 << uVar10;
      uVar11 = 8 - uVar10;
      if (uVar10 != 0) {
        bVar1 = bVar1 | (byte)((uint)pbVar8 >> (uVar11 & 0xff));
      }
      pbVar8 = pbVar14 + (uVar9 + 8 >> 3);
      bVar5 = *pbVar8;
      if (uVar10 != 0) {
        pbVar8 = (byte *)(uint)pbVar8[1];
      }
      bVar5 = bVar5 << uVar10;
      if (uVar10 != 0) {
        bVar5 = bVar5 | (byte)((uint)pbVar8 >> (uVar11 & 0xff));
      }
      pbVar8 = pbVar14 + (uVar9 + 0x10 >> 3);
      bVar2 = *pbVar8;
      if (uVar10 != 0) {
        pbVar8 = (byte *)(uint)pbVar8[1];
      }
      bVar2 = bVar2 << uVar10;
      uStack_34._3_1_ = 0;
      if (uVar10 != 0) {
        bVar2 = bVar2 | (byte)((uint)pbVar8 >> (uVar11 & 0xff));
      }
      uVar4 = CONCAT12(bVar2,CONCAT11(bVar5,bVar1));
      bVar5 = pbVar14[uVar9 + 0x18 >> 3] << uVar10;
      bVar1 = uStack_34._3_1_;
      if (uVar10 != 0) {
        bVar1 = (pbVar14 + (uVar9 + 0x18 >> 3))[1];
      }
      uStack_34 = CONCAT13(bVar5,uVar4);
      if (uVar10 != 0) {
        uStack_34 = CONCAT13(bVar5 | bVar1 >> (uVar11 & 0xff),uVar4);
      }
    }
    piVar13 = (int *)(DAT_711a3938 + 0x1389c);
    iVar7 = *piVar13;
    if (iVar7 == 0) {
      iVar7 = FUN_713c301c(0);
      if (iVar7 == 0) {
        iVar7 = *piVar13;
        if (iVar7 == 0) {
          return;
        }
      }
      else {
        thunk_MwhHq(0x3a0);
        iVar7 = FUN_715ba834();
        *piVar13 = iVar7;
      }
    }
    FUN_715d00b4(iVar7,uStack_38 << 0x18 | (unaff_r9 & 0xff) << 0x10 | (unaff_r10 & 0xff) << 8 |
                       unaff_r8 & 0xff,uStack_28,uStack_2c,uStack_30,uStack_34);
    return;
  }
  piVar13 = (int *)(DAT_711a3938 + 0x1389c);
  iVar7 = *piVar13;
  if (iVar7 == 0) {
    iVar7 = FUN_713c301c(0);
    if (iVar7 == 0) {
      iVar7 = *piVar13;
      if (iVar7 == 0) {
        return;
      }
    }
    else {
      thunk_MwhHq(0x3a0);
      iVar7 = FUN_715ba834();
      *piVar13 = iVar7;
    }
  }
  iVar6 = FUN_71350bb8(*(undefined4 *)(iVar7 + 0x8c));
  if (iVar6 != 0) {
    uVar15 = FUN_71351810(*(undefined4 *)(iVar7 + 8));
    uVar10 = (uint)((ulonglong)uVar15 >> 0x20);
    if ((int)uVar15 != 0) {
      iVar6 = *(int *)(iVar7 + 0x8c);
      if (iVar6 != 0) {
        uVar10 = (uint)*(byte *)(iVar6 + 0x485);
      }
      if ((iVar6 == 0 || (uVar10 & 1) == 0) &&
         (piVar13 = *(int **)(*(int *)(iVar6 + 0x440) + 0x10), piVar13 != (int *)0x0)) {
        iVar6 = (**(code **)(*piVar13 + 0x14))();
        if (iVar6 != 900) {
          return;
        }
        iVar6 = *(int *)(*(int *)(iVar7 + 0x8c) + 0x440);
        if (*(int **)(iVar6 + 0x10) != (int *)0x0) {
          (**(code **)(**(int **)(iVar6 + 0x10) + 4))();
          iVar6 = *(int *)(*(int *)(iVar7 + 0x8c) + 0x440);
        }
        *(undefined4 *)(iVar6 + 0x10) = 0;
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71746d80
// Entry: 0x71746d80 | Size: 232 bytes
// =========================================================================

void FUN_71746d80(undefined4 *param_1)

{
  int iVar1;
  byte unaff_r4;
  int *piVar2;
  
  if (0 < (int)((param_1[1] & 0xfffffff8) + 8)) {
    unaff_r4 = *(char *)*param_1 < '\0';
  }
  if (DAT_711a3938 == 0) {
    return;
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
  *(byte *)(iVar1 + 0x90) = unaff_r4 & 1;
  return;
}


// =========================================================================
// Function: FUN_71746ebc
// Entry: 0x71746ebc | Size: 200 bytes
// =========================================================================

void FUN_71746ebc(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte unaff_r5;
  
  uVar1 = param_1[1] & 0xfffffff8;
  iVar2 = uVar1 + 8;
  if (0 < iVar2) {
    uVar1 = (uint)((char)*(byte *)*param_1 < '\0');
  }
  uVar3 = (uint)(0 < iVar2);
  if ((int)uVar3 < iVar2) {
    unaff_r5 = (byte)(((uint)*(byte *)*param_1 << uVar3 & 0xff) >> 7);
  }
  iVar2 = 0;
  if (DAT_711f6d58 != 0) {
    iVar2 = *(int *)(DAT_711f6d58 + 0xac);
  }
  if ((DAT_711f6d58 != 0 && iVar2 != 0) && (iVar2 = *(int *)(iVar2 + 0x1f6c), iVar2 != 0)) {
    FUN_717600e4(iVar2,uVar1 & 1);
    *(byte *)(iVar2 + 0x201) = unaff_r5 & 1;
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_717477a8
// Entry: 0x717477a8 | Size: 4312 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x71747ae8) */
/* WARNING: Removing unreachable block (ram,0x71747994) */

void FUN_717477a8(undefined4 *param_1)

{
  uint *puVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  uint uVar12;
  int *piVar13;
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
  int *extraout_r1;
  byte *pbVar24;
  uint *puVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  int *piVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  int *piVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint *puVar47;
  int iVar48;
  uint unaff_r8;
  uint unaff_r9;
  uint uVar49;
  uint unaff_r10;
  uint uVar50;
  int in_r12;
  uint uVar51;
  bool bVar52;
  uint auStack_68 [2];
  int *piStack_60;
  uint auStack_5c [7];
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  puVar25 = auStack_68;
  puVar47 = auStack_68;
  pbVar24 = (byte *)*param_1;
  iVar48 = (param_1[1] & 0xfffffff8) + 8;
  uVar12 = 0;
  uVar21 = 0;
  uVar35 = 0;
  if (0xf < iVar48) {
    uVar21 = (uint)*pbVar24;
    uVar12 = (uint)pbVar24[1];
    uVar35 = 0x10;
  }
  if ((int)(uVar35 | 0x20) <= iVar48) {
    unaff_r9 = (uint)pbVar24[uVar35 + 0x18 >> 3];
    unaff_r8 = (uint)pbVar24[uVar35 + 0x10 >> 3];
    uStack_28 = (uint)pbVar24[uVar35 >> 3];
    unaff_r10 = (uint)(pbVar24 + (uVar35 >> 3))[1];
  }
  uVar21 = uVar21 | uVar12 << 8;
  if (uVar21 == *(ushort *)(*(int *)(DAT_711f6d58 + 0xac) + 0x1f68)) {
    piVar41 = (int *)(DAT_711a3938 + 0x1389c);
    iVar48 = *piVar41;
    if (iVar48 == 0) {
      iVar48 = FUN_713c301c(0);
      if (iVar48 == 0) {
        iVar48 = *piVar41;
      }
      else {
        thunk_MwhHq(0x3a0);
        iVar48 = FUN_715ba834();
        *piVar41 = iVar48;
      }
    }
    piVar41 = (int *)0x6efdd0cf;
    while( true ) {
      uVar21 = puVar47[1] ^ 0x679b29b;
      uVar12 = *puVar47 ^ 0x6a4dab1f | uVar21;
      bVar52 = uVar12 == 0;
      if (bVar52) {
        uVar21 = puVar47[3] ^ 0xfcc126c8;
        uVar12 = puVar47[2] ^ 0x6efdd0cf;
      }
      if ((bVar52 && (uVar12 == 0 && uVar21 == 0)) &&
         (puVar47[4] == 0xbefc55d6 && puVar47[5] == 0x370f3a77)) break;
      puVar47 = puVar47 + 1;
    }
    piVar36 = (int *)puVar47[0xc017];
    bVar52 = piVar36 != (int *)0x0;
    if (bVar52) {
      piVar36 = piVar36 + 1;
      piVar41 = (int *)*piVar36;
    }
    if (bVar52 && piVar41 != (int *)0x0) {
      puVar25 = (uint *)(iVar48 + 0xe4);
      piVar13 = piVar36;
      do {
        piVar11 = piVar41;
        if ((uint *)piVar41[4] < puVar25) {
          piVar41 = piVar41 + 1;
          piVar11 = piVar13;
        }
        piVar13 = piVar11;
        piVar41 = (int *)*piVar41;
      } while (piVar41 != (int *)0x0);
      if ((piVar13 != piVar36) && ((uint *)piVar13[4] <= puVar25)) {
        *puVar25 = unaff_r9 << 0x18 | (unaff_r8 & 0xff) << 0x10 | (unaff_r10 & 0xff) << 8 |
                   uStack_28 & 0xff;
        for (piStack_60 = *(int **)(puVar47[0xc017] + 4); piStack_60 != (int *)0x0;
            piStack_60 = (int *)*piStack_60) {
          while ((uint *)piStack_60[4] <= puVar25) {
            if (puVar25 <= (uint *)piStack_60[4]) goto LAB_71747b34;
            piStack_60 = (int *)piStack_60[1];
            if (piStack_60 == (int *)0x0) goto LAB_71747b28;
          }
        }
LAB_71747b28:
        FUN_712f6bb0(s_map__at__key_not_found_700619a7);
        piStack_60 = extraout_r1;
LAB_71747b34:
        uVar12 = piStack_60[6];
        if (uVar12 < 0x20) {
          iVar48 = 0x27d4eb7f;
          uVar21 = 0x56d677d6;
        }
        else {
          uStack_34 = 0x50;
          uStack_30 = 0x40801011;
          uVar35 = 0x60ea283e;
          uStack_38 = 0xee40c5e7;
          iVar48 = 0;
          uStack_2c = 0x61c8869e;
          uStack_28 = 0xba94458a;
          uStack_40 = 0xc2b2ae8d;
          uStack_3c = 0x6854fb60;
          puVar47 = (uint *)piStack_60[5];
          uVar21 = uVar12;
          do {
            lVar3 = (ulonglong)puVar47[6] * 0x27d4eb4f;
            uVar37 = (uint)lVar3;
            uVar38 = uVar37 + uStack_28;
            uVar22 = puVar47[7] * 0x27d4eb4f +
                     puVar47[6] * -0x3d4d51c3 + (int)((ulonglong)lVar3 >> 0x20) + uStack_2c +
                     (uint)CARRY4(uVar37,uStack_28);
            uVar37 = uVar22 >> 1;
            uVar14 = uVar38 * -0x80000000 | uVar37;
            uStack_28 = (uint)((ulonglong)uVar14 * 0x85ebca87);
            uVar38 = uVar38 >> 1;
            uVar15 = uVar22 * -0x80000000 | uVar38;
            uStack_2c = uVar15 * -0x7a143579 +
                        uVar14 * -0x61c8864f + (int)((ulonglong)uVar14 * 0x85ebca87 >> 0x20);
            puVar25 = puVar47 + 3;
            lVar3 = (ulonglong)puVar47[4] * 0x27d4eb4f;
            uVar22 = (uint)lVar3;
            uVar39 = uVar22 + uStack_30;
            uVar45 = puVar47[5] * 0x27d4eb4f +
                     puVar47[4] * -0x3d4d51c3 + (int)((ulonglong)lVar3 >> 0x20) + uStack_34 +
                     (uint)CARRY4(uVar22,uStack_30);
            uVar22 = uVar45 >> 1;
            uVar16 = uVar39 * -0x80000000 | uVar22;
            uStack_30 = (uint)((ulonglong)uVar16 * 0x85ebca87);
            uVar39 = uVar39 >> 1;
            uVar17 = uVar45 * -0x80000000 | uVar39;
            puVar1 = puVar47 + 2;
            uStack_34 = uVar17 * -0x7a143579 +
                        uVar16 * -0x61c8864f + (int)((ulonglong)uVar16 * 0x85ebca87 >> 0x20);
            uVar40 = *puVar47;
            puVar2 = puVar47 + 1;
            puVar47 = puVar47 + 8;
            lVar3 = (ulonglong)*puVar1 * 0x27d4eb4f;
            uVar45 = (uint)lVar3;
            uVar18 = uVar45 + uStack_3c;
            uVar23 = *puVar25 * 0x27d4eb4f + *puVar1 * -0x3d4d51c3 + (int)((ulonglong)lVar3 >> 0x20)
                     + uStack_40 + (uint)CARRY4(uVar45,uStack_3c);
            uVar45 = uVar23 >> 1;
            uVar49 = uVar18 * -0x80000000 | uVar45;
            uVar18 = uVar18 >> 1;
            uVar19 = uVar23 * -0x80000000 | uVar18;
            uStack_3c = (uint)((ulonglong)uVar49 * 0x85ebca87);
            uStack_40 = uVar19 * -0x7a143579 +
                        uVar49 * -0x61c8864f + (int)((ulonglong)uVar49 * 0x85ebca87 >> 0x20);
            lVar3 = (ulonglong)uVar40 * 0x27d4eb4f;
            uVar23 = (uint)lVar3;
            uVar20 = uVar23 + uStack_38;
            uVar35 = *puVar2 * 0x27d4eb4f + uVar40 * -0x3d4d51c3 + (int)((ulonglong)lVar3 >> 0x20) +
                     uVar35 + (uint)CARRY4(uVar23,uStack_38);
            bVar52 = uVar21 < 0x20;
            uVar21 = uVar21 - 0x20;
            uVar23 = uVar35 >> 1;
            uVar40 = uVar20 * -0x80000000 | uVar23;
            uVar20 = uVar20 >> 1;
            uVar51 = uVar35 * -0x80000000 | uVar20;
            iVar48 = iVar48 - (uint)bVar52;
            uStack_38 = (uint)((ulonglong)uVar40 * 0x85ebca87);
            uVar35 = uVar51 * -0x7a143579 +
                     uVar40 * -0x61c8864f + (int)((ulonglong)uVar40 * 0x85ebca87 >> 0x20);
          } while ((uint)(uVar21 < 0x20) <= (uint)-iVar48);
          uVar26 = uStack_38 << 1 | uVar35 >> 0x1f;
          uVar42 = uStack_3c << 7 | uStack_40 >> 0x19;
          uVar27 = uVar42 + uVar26;
          uVar43 = uStack_30 << 0xc | uStack_34 >> 0x14;
          uVar50 = uVar27 + uVar43;
          uVar44 = (uint)((ulonglong)uVar40 * 0x80000000) |
                   uVar51 * 0xf796ca9 +
                   uVar40 * -0x210ca4ff + (int)((ulonglong)uVar40 * 0xf796ca9 >> 0x20) >> 1;
          lVar3 = (ulonglong)uVar44 * 0x85ebca87;
          uVar51 = uStack_28 << 0x12 | uStack_2c >> 0xe;
          uVar28 = uVar50 + uVar51 ^ (uint)lVar3;
          lVar4 = (ulonglong)uVar28 * 0x85ebca87;
          uVar46 = (uint)lVar4;
          uVar29 = (uint)((ulonglong)uVar49 * 0x80000000) |
                   uVar19 * 0xf796ca9 +
                   uVar49 * -0x210ca4ff + (int)((ulonglong)uVar49 * 0xf796ca9 >> 0x20) >> 1;
          lVar5 = (ulonglong)uVar29 * 0x85ebca87;
          uVar19 = uVar46 + 0xc2b2ae63 ^ (uint)lVar5;
          lVar6 = (ulonglong)uVar19 * 0x85ebca87;
          uVar30 = (uint)lVar6;
          uVar31 = (uint)((ulonglong)uVar16 * 0x80000000) |
                   uVar17 * 0xf796ca9 +
                   uVar16 * -0x210ca4ff + (int)((ulonglong)uVar16 * 0xf796ca9 >> 0x20) >> 1;
          lVar7 = (ulonglong)uVar31 * 0x85ebca87;
          uVar17 = uVar30 + 0xc2b2ae63 ^ (uint)lVar7;
          lVar8 = (ulonglong)uVar17 * 0x85ebca87;
          uVar32 = (uint)lVar8;
          uVar33 = (uint)((ulonglong)uVar14 * 0x80000000) |
                   uVar15 * 0xf796ca9 +
                   uVar14 * -0x210ca4ff + (int)((ulonglong)uVar14 * 0xf796ca9 >> 0x20) >> 1;
          lVar9 = (ulonglong)uVar33 * 0x85ebca87;
          uVar15 = uVar32 + 0xc2b2ae63 ^ (uint)lVar9;
          lVar10 = (ulonglong)uVar15 * 0x85ebca87;
          uVar34 = (uint)lVar10;
          uVar21 = uVar34 + 0xc2b2ae63;
          iVar48 = (((((uStack_40 * 0x80 | uStack_3c >> 0x19) + (uVar35 * 2 | uStack_38 >> 0x1f) +
                       (uint)CARRY4(uVar42,uVar26) + (uStack_34 * 0x1000 | uStack_30 >> 0x14) +
                       (uint)CARRY4(uVar27,uVar43) + (uStack_2c * 0x40000 | uStack_28 >> 0xe) +
                       (uint)CARRY4(uVar50,uVar51) ^
                      (uVar20 * -0x80000000 +
                      uVar23 * -0x784349ac + (int)((ulonglong)uVar40 * 0x80000000 >> 0x20)) *
                      -0x7a143579 + uVar44 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20)) *
                      -0x7a143579 + uVar28 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) +
                      -0x7a143589 + (uint)(0x3d4d519c < uVar46) ^
                     (uVar18 * -0x80000000 +
                     uVar45 * -0x784349ac + (int)((ulonglong)uVar49 * 0x80000000 >> 0x20)) *
                     -0x7a143579 + uVar29 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20)) *
                     -0x7a143579 + uVar19 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20) +
                     -0x7a143589 + (uint)(0x3d4d519c < uVar30) ^
                    (uVar39 * -0x80000000 +
                    uVar22 * -0x784349ac + (int)((ulonglong)uVar16 * 0x80000000 >> 0x20)) *
                    -0x7a143579 + uVar31 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20)) *
                    -0x7a143579 + uVar17 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20) +
                    -0x7a143589 + (uint)(0x3d4d519c < uVar32) ^
                   (uVar38 * -0x80000000 +
                   uVar37 * -0x784349ac + (int)((ulonglong)uVar14 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar33 * -0x61c8864f + (int)((ulonglong)lVar9 >> 0x20)) *
                   -0x7a143579 + uVar15 * -0x61c8864f + (int)((ulonglong)lVar10 >> 0x20) +
                   -0x7a143589 + (uint)(0x3d4d519c < uVar34);
        }
        uStack_28 = uVar21 + uVar12;
        uVar35 = 0;
        uVar21 = iVar48 + (uint)CARRY4(uVar21,uVar12);
        puVar47 = (uint *)(piStack_60[5] + (uVar12 & 0xffffffe0));
        uVar12 = uVar12 & 0x1f;
        do {
          if (uVar35 == 0 && (7 < uVar12) <= uVar35) {
            if (uVar35 == 0 && (3 < uVar12) <= uVar35) {
              if (uVar12 == 0 && uVar35 == 0) {
LAB_717487cc:
                uVar12 = uStack_28 ^ uVar21 >> 1;
                lVar3 = (ulonglong)uVar12 * 0x27d4eb4f;
                uVar35 = (uint)lVar3;
                uVar12 = uVar21 * 0x27d4eb4f +
                         uVar12 * -0x3d4d51c3 + (int)((ulonglong)lVar3 >> 0x20);
                uVar35 = (uVar35 >> 0x1d | uVar12 * 8) ^ uVar35;
                lVar3 = (ulonglong)uVar35 * 0x9e3779f9;
                uVar12 = (uVar12 ^ uVar12 >> 0x1d) * -0x61c88607 +
                         uVar35 * 0x165667b1 + (int)((ulonglong)lVar3 >> 0x20);
                piStack_60[8] = uVar12;
                piStack_60[7] = uVar12 ^ (uint)lVar3;
                return;
              }
              iVar48 = 1;
              lVar3 = (ulonglong)(uint)(byte)*puVar47 * 0x165667c5;
              uVar37 = (uint)lVar3 ^ uStack_28;
              uVar21 = (uint)(byte)*puVar47 * 0x27d4eb2f + (int)((ulonglong)lVar3 >> 0x20) ^ uVar21;
              uVar38 = uVar37 << 0xb | uVar21 >> 0x15;
              lVar3 = (ulonglong)uVar38 * 0x85ebca87;
              uStack_28 = (uint)lVar3;
              uVar21 = (uVar21 << 0xb | uVar37 >> 0x15) * -0x7a143579 +
                       uVar38 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20);
              uVar22 = 0xffffffff;
            }
            else {
              lVar3 = (ulonglong)*puVar47 * 0x85ebca87;
              uVar37 = (uint)lVar3 ^ uStack_28;
              uVar21 = *puVar47 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20) ^ uVar21;
              uVar38 = uVar37 << 0x17 | uVar21 >> 9;
              lVar3 = (ulonglong)uVar38 * 0x27d4eb4f;
              uVar22 = (uint)lVar3;
              iVar48 = 4;
              uStack_28 = uVar22 + 0x9e3779f9;
              uVar21 = (uVar21 << 0x17 | uVar37 >> 9) * 0x27d4eb4f +
                       uVar38 * -0x3d4d51c3 + (int)((ulonglong)lVar3 >> 0x20) + 0x165667b1 +
                       (uint)(0x61c88606 < uVar22);
              uVar22 = 0xfffffffc;
            }
          }
          else {
            uVar37 = *puVar47;
            uVar39 = (uint)((ulonglong)uVar37 * 0x80000000) |
                     puVar47[1] * 0x27d4eb4f +
                     uVar37 * -0x3d4d51c3 + (int)((ulonglong)uVar37 * 0x27d4eb4f >> 0x20) >> 1;
            lVar3 = (ulonglong)uVar39 * 0x85ebca87;
            uVar22 = 0xfffffff8;
            uVar38 = (uint)lVar3 ^ uStack_28;
            uVar21 = (puVar47[1] * -0x80000000 +
                     uVar37 * -0x6c158a59 + (int)((ulonglong)uVar37 * 0x80000000 >> 0x20)) *
                     -0x7a143579 + uVar39 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20) ^ uVar21;
            uVar37 = uVar38 << 0x1b | uVar21 >> 5;
            lVar3 = (ulonglong)uVar37 * 0x85ebca87;
            uVar39 = (uint)lVar3;
            iVar48 = 8;
            uStack_28 = uVar39 + 0xc2b2ae63;
            uVar21 = (uVar21 << 0x1b | uVar38 >> 5) * -0x7a143579 +
                     uVar37 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20) + -0x7a143589 +
                     (uint)(0x3d4d519c < uVar39);
          }
          bVar52 = CARRY4(uVar22,uVar12);
          uVar12 = uVar22 + uVar12;
          puVar47 = (uint *)((int)puVar47 + iVar48);
          uVar35 = (uVar35 - 1) + (uint)bVar52;
        } while( true );
      }
    }
  }
  else if (uVar21 < 0x3ed) {
    iVar48 = *(int *)(*(int *)(DAT_711f6d58 + 0xac) + uVar21 * 4 + 0x1f8c);
    if (iVar48 != 0) {
      in_r12 = *(int *)(iVar48 + 0x10);
    }
    if (iVar48 != 0 && in_r12 != 0) {
      piVar41 = (int *)0x6a4dab1f;
      while( true ) {
        uVar21 = puVar25[1] ^ 0x679b29b;
        uVar12 = *puVar25 ^ 0x6a4dab1f | uVar21;
        bVar52 = uVar12 == 0;
        if (bVar52) {
          uVar21 = puVar25[3] ^ 0xfcc126c8;
          uVar12 = puVar25[2] ^ 0x6efdd0cf;
        }
        if ((bVar52 && (uVar12 == 0 && uVar21 == 0)) &&
           (puVar25[4] == 0xbefc55d6 && puVar25[5] == 0x370f3a77)) break;
        puVar25 = puVar25 + 1;
      }
      piVar36 = (int *)puVar25[0xc017];
      bVar52 = piVar36 != (int *)0x0;
      if (bVar52) {
        piVar36 = piVar36 + 1;
        piVar41 = (int *)*piVar36;
      }
      if (bVar52 && piVar41 != (int *)0x0) {
        puVar47 = (uint *)(in_r12 + 0xe4);
        piVar13 = piVar36;
        do {
          piVar11 = piVar41;
          if ((uint *)piVar41[4] < puVar47) {
            piVar41 = piVar41 + 1;
            piVar11 = piVar13;
          }
          piVar13 = piVar11;
          piVar41 = (int *)*piVar41;
        } while (piVar41 != (int *)0x0);
        if ((piVar13 != piVar36) && ((uint *)piVar13[4] <= puVar47)) {
          *puVar47 = unaff_r9 << 0x18 | (unaff_r8 & 0xff) << 0x10 | (unaff_r10 & 0xff) << 8 |
                     uStack_28 & 0xff;
          for (piStack_60 = *(int **)(puVar25[0xc017] + 4); piStack_60 != (int *)0x0;
              piStack_60 = (int *)piStack_60[1]) {
            while (puVar47 < (uint *)piStack_60[4]) {
              piStack_60 = (int *)*piStack_60;
              if (piStack_60 == (int *)0x0) goto LAB_71747b28;
            }
            if (puVar47 <= (uint *)piStack_60[4]) {
              uVar12 = piStack_60[6];
              if (uVar12 < 0x20) {
                iVar48 = 0x27d4eb7f;
                uVar21 = 0x56d677d6;
              }
              else {
                uStack_34 = 0x50;
                uStack_30 = 0x40801011;
                uStack_38 = 0xee40c5e7;
                uStack_2c = 0x61c8869e;
                uStack_28 = 0xba94458a;
                uVar35 = 0x60ea283e;
                uStack_40 = 0xc2b2ae8d;
                iVar48 = 0;
                uStack_3c = 0x6854fb60;
                puVar47 = (uint *)piStack_60[5];
                uVar21 = uVar12;
                do {
                  lVar3 = (ulonglong)puVar47[6] * 0x27d4eb4f;
                  uVar37 = (uint)lVar3;
                  uVar38 = uVar37 + uStack_28;
                  uVar22 = puVar47[7] * 0x27d4eb4f +
                           puVar47[6] * -0x3d4d51c3 + (int)((ulonglong)lVar3 >> 0x20) + uStack_2c +
                           (uint)CARRY4(uVar37,uStack_28);
                  uVar37 = uVar22 >> 1;
                  uVar14 = uVar38 * -0x80000000 | uVar37;
                  uStack_28 = (uint)((ulonglong)uVar14 * 0x85ebca87);
                  uVar38 = uVar38 >> 1;
                  uVar15 = uVar22 * -0x80000000 | uVar38;
                  uStack_2c = uVar15 * -0x7a143579 +
                              uVar14 * -0x61c8864f + (int)((ulonglong)uVar14 * 0x85ebca87 >> 0x20);
                  puVar25 = puVar47 + 3;
                  lVar3 = (ulonglong)puVar47[4] * 0x27d4eb4f;
                  uVar22 = (uint)lVar3;
                  uVar39 = uVar22 + uStack_30;
                  uVar45 = puVar47[5] * 0x27d4eb4f +
                           puVar47[4] * -0x3d4d51c3 + (int)((ulonglong)lVar3 >> 0x20) + uStack_34 +
                           (uint)CARRY4(uVar22,uStack_30);
                  uVar22 = uVar45 >> 1;
                  uVar16 = uVar39 * -0x80000000 | uVar22;
                  uStack_30 = (uint)((ulonglong)uVar16 * 0x85ebca87);
                  uVar39 = uVar39 >> 1;
                  uVar17 = uVar45 * -0x80000000 | uVar39;
                  puVar1 = puVar47 + 2;
                  uStack_34 = uVar17 * -0x7a143579 +
                              uVar16 * -0x61c8864f + (int)((ulonglong)uVar16 * 0x85ebca87 >> 0x20);
                  uVar19 = *puVar47;
                  puVar2 = puVar47 + 1;
                  puVar47 = puVar47 + 8;
                  lVar3 = (ulonglong)*puVar1 * 0x27d4eb4f;
                  uVar45 = (uint)lVar3;
                  uVar18 = uVar45 + uStack_3c;
                  uVar23 = *puVar25 * 0x27d4eb4f +
                           *puVar1 * -0x3d4d51c3 + (int)((ulonglong)lVar3 >> 0x20) + uStack_40 +
                           (uint)CARRY4(uVar45,uStack_3c);
                  uVar45 = uVar23 >> 1;
                  uVar49 = uVar18 * -0x80000000 | uVar45;
                  uStack_3c = (uint)((ulonglong)uVar49 * 0x85ebca87);
                  uVar18 = uVar18 >> 1;
                  uVar40 = uVar23 * -0x80000000 | uVar18;
                  uStack_40 = uVar40 * -0x7a143579 +
                              uVar49 * -0x61c8864f + (int)((ulonglong)uVar49 * 0x85ebca87 >> 0x20);
                  lVar3 = (ulonglong)uVar19 * 0x27d4eb4f;
                  uVar23 = (uint)lVar3;
                  uVar20 = uVar23 + uStack_38;
                  uVar35 = *puVar2 * 0x27d4eb4f +
                           uVar19 * -0x3d4d51c3 + (int)((ulonglong)lVar3 >> 0x20) + uVar35 +
                           (uint)CARRY4(uVar23,uStack_38);
                  bVar52 = uVar21 < 0x20;
                  uVar21 = uVar21 - 0x20;
                  uVar23 = uVar35 >> 1;
                  uVar19 = uVar20 * -0x80000000 | uVar23;
                  iVar48 = iVar48 - (uint)bVar52;
                  uStack_38 = (uint)((ulonglong)uVar19 * 0x85ebca87);
                  uVar20 = uVar20 >> 1;
                  uVar51 = uVar35 * -0x80000000 | uVar20;
                  uVar35 = uVar51 * -0x7a143579 +
                           uVar19 * -0x61c8864f + (int)((ulonglong)uVar19 * 0x85ebca87 >> 0x20);
                } while ((uint)(uVar21 < 0x20) <= (uint)-iVar48);
                uVar26 = uStack_38 << 1 | uVar35 >> 0x1f;
                uVar43 = uStack_3c << 7 | uStack_40 >> 0x19;
                uVar27 = uVar43 + uVar26;
                uVar44 = uStack_30 << 0xc | uStack_34 >> 0x14;
                uVar50 = uVar27 + uVar44;
                uVar51 = (uint)((ulonglong)uVar19 * 0x80000000) |
                         uVar51 * 0xf796ca9 +
                         uVar19 * -0x210ca4ff + (int)((ulonglong)uVar19 * 0xf796ca9 >> 0x20) >> 1;
                lVar3 = (ulonglong)uVar51 * 0x85ebca87;
                uVar28 = uStack_28 << 0x12 | uStack_2c >> 0xe;
                uVar29 = uVar50 + uVar28 ^ (uint)lVar3;
                lVar4 = (ulonglong)uVar29 * 0x85ebca87;
                uVar46 = (uint)lVar4;
                uVar30 = (uint)((ulonglong)uVar49 * 0x80000000) |
                         uVar40 * 0xf796ca9 +
                         uVar49 * -0x210ca4ff + (int)((ulonglong)uVar49 * 0xf796ca9 >> 0x20) >> 1;
                lVar5 = (ulonglong)uVar30 * 0x85ebca87;
                uVar40 = uVar46 + 0xc2b2ae63 ^ (uint)lVar5;
                lVar6 = (ulonglong)uVar40 * 0x85ebca87;
                uVar31 = (uint)lVar6;
                uVar32 = (uint)((ulonglong)uVar16 * 0x80000000) |
                         uVar17 * 0xf796ca9 +
                         uVar16 * -0x210ca4ff + (int)((ulonglong)uVar16 * 0xf796ca9 >> 0x20) >> 1;
                lVar7 = (ulonglong)uVar32 * 0x85ebca87;
                uVar17 = uVar31 + 0xc2b2ae63 ^ (uint)lVar7;
                lVar8 = (ulonglong)uVar17 * 0x85ebca87;
                uVar33 = (uint)lVar8;
                uVar34 = (uint)((ulonglong)uVar14 * 0x80000000) |
                         uVar15 * 0xf796ca9 +
                         uVar14 * -0x210ca4ff + (int)((ulonglong)uVar14 * 0xf796ca9 >> 0x20) >> 1;
                lVar9 = (ulonglong)uVar34 * 0x85ebca87;
                uVar15 = uVar33 + 0xc2b2ae63 ^ (uint)lVar9;
                lVar10 = (ulonglong)uVar15 * 0x85ebca87;
                uVar42 = (uint)lVar10;
                uVar21 = uVar42 + 0xc2b2ae63;
                iVar48 = (((((uStack_40 * 0x80 | uStack_3c >> 0x19) +
                             (uVar35 * 2 | uStack_38 >> 0x1f) + (uint)CARRY4(uVar43,uVar26) +
                             (uStack_34 * 0x1000 | uStack_30 >> 0x14) + (uint)CARRY4(uVar27,uVar44)
                             + (uStack_2c * 0x40000 | uStack_28 >> 0xe) +
                             (uint)CARRY4(uVar50,uVar28) ^
                            (uVar20 * -0x80000000 +
                            uVar23 * -0x784349ac + (int)((ulonglong)uVar19 * 0x80000000 >> 0x20)) *
                            -0x7a143579 + uVar51 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20)) *
                            -0x7a143579 + uVar29 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) +
                            -0x7a143589 + (uint)(0x3d4d519c < uVar46) ^
                           (uVar18 * -0x80000000 +
                           uVar45 * -0x784349ac + (int)((ulonglong)uVar49 * 0x80000000 >> 0x20)) *
                           -0x7a143579 + uVar30 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20)) *
                           -0x7a143579 + uVar40 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20) +
                           -0x7a143589 + (uint)(0x3d4d519c < uVar31) ^
                          (uVar39 * -0x80000000 +
                          uVar22 * -0x784349ac + (int)((ulonglong)uVar16 * 0x80000000 >> 0x20)) *
                          -0x7a143579 + uVar32 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20)) *
                          -0x7a143579 + uVar17 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20) +
                          -0x7a143589 + (uint)(0x3d4d519c < uVar33) ^
                         (uVar38 * -0x80000000 +
                         uVar37 * -0x784349ac + (int)((ulonglong)uVar14 * 0x80000000 >> 0x20)) *
                         -0x7a143579 + uVar34 * -0x61c8864f + (int)((ulonglong)lVar9 >> 0x20)) *
                         -0x7a143579 + uVar15 * -0x61c8864f + (int)((ulonglong)lVar10 >> 0x20) +
                         -0x7a143589 + (uint)(0x3d4d519c < uVar42);
              }
              uStack_28 = uVar21 + uVar12;
              uVar35 = uVar12 & 0x1f;
              uVar21 = iVar48 + (uint)CARRY4(uVar21,uVar12);
              puVar47 = (uint *)(piStack_60[5] + (uVar12 & 0xffffffe0));
              uVar12 = 0;
              do {
                if (uVar12 == 0 && (7 < uVar35) <= uVar12) {
                  if (uVar12 == 0 && (3 < uVar35) <= uVar12) {
                    if (uVar35 == 0 && uVar12 == 0) goto LAB_717487cc;
                    iVar48 = 1;
                    lVar3 = (ulonglong)(uint)(byte)*puVar47 * 0x165667c5;
                    uVar37 = (uint)lVar3 ^ uStack_28;
                    uVar21 = (uint)(byte)*puVar47 * 0x27d4eb2f + (int)((ulonglong)lVar3 >> 0x20) ^
                             uVar21;
                    uVar38 = uVar37 << 0xb | uVar21 >> 0x15;
                    lVar3 = (ulonglong)uVar38 * 0x85ebca87;
                    uStack_28 = (uint)lVar3;
                    uVar21 = (uVar21 << 0xb | uVar37 >> 0x15) * -0x7a143579 +
                             uVar38 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20);
                    uVar22 = 0xffffffff;
                  }
                  else {
                    lVar3 = (ulonglong)*puVar47 * 0x85ebca87;
                    uVar37 = (uint)lVar3 ^ uStack_28;
                    uVar21 = *puVar47 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20) ^ uVar21;
                    uVar38 = uVar37 << 0x17 | uVar21 >> 9;
                    lVar3 = (ulonglong)uVar38 * 0x27d4eb4f;
                    uVar22 = (uint)lVar3;
                    iVar48 = 4;
                    uStack_28 = uVar22 + 0x9e3779f9;
                    uVar21 = (uVar21 << 0x17 | uVar37 >> 9) * 0x27d4eb4f +
                             uVar38 * -0x3d4d51c3 + (int)((ulonglong)lVar3 >> 0x20) + 0x165667b1 +
                             (uint)(0x61c88606 < uVar22);
                    uVar22 = 0xfffffffc;
                  }
                }
                else {
                  uVar37 = *puVar47;
                  uVar39 = (uint)((ulonglong)uVar37 * 0x80000000) |
                           puVar47[1] * 0x27d4eb4f +
                           uVar37 * -0x3d4d51c3 + (int)((ulonglong)uVar37 * 0x27d4eb4f >> 0x20) >> 1
                  ;
                  lVar3 = (ulonglong)uVar39 * 0x85ebca87;
                  uVar22 = 0xfffffff8;
                  uVar38 = (uint)lVar3 ^ uStack_28;
                  uVar21 = (puVar47[1] * -0x80000000 +
                           uVar37 * -0x6c158a59 + (int)((ulonglong)uVar37 * 0x80000000 >> 0x20)) *
                           -0x7a143579 + uVar39 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20) ^
                           uVar21;
                  uVar37 = uVar38 << 0x1b | uVar21 >> 5;
                  lVar3 = (ulonglong)uVar37 * 0x85ebca87;
                  uVar39 = (uint)lVar3;
                  iVar48 = 8;
                  uStack_28 = uVar39 + 0xc2b2ae63;
                  uVar21 = (uVar21 << 0x1b | uVar38 >> 5) * -0x7a143579 +
                           uVar37 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20) + -0x7a143589 +
                           (uint)(0x3d4d519c < uVar39);
                }
                bVar52 = CARRY4(uVar22,uVar35);
                uVar35 = uVar22 + uVar35;
                puVar47 = (uint *)((int)puVar47 + iVar48);
                uVar12 = (uVar12 - 1) + (uint)bVar52;
              } while( true );
            }
          }
          goto LAB_71747b28;
        }
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71748910
// Entry: 0x71748910 | Size: 4312 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x71748c50) */
/* WARNING: Removing unreachable block (ram,0x71748afc) */

void FUN_71748910(undefined4 *param_1)

{
  uint *puVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  uint uVar12;
  int *piVar13;
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
  int *extraout_r1;
  byte *pbVar24;
  uint *puVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  int *piVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  int *piVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint *puVar47;
  int iVar48;
  uint unaff_r8;
  uint unaff_r9;
  uint uVar49;
  uint unaff_r10;
  uint uVar50;
  int in_r12;
  uint uVar51;
  bool bVar52;
  uint auStack_68 [2];
  int *piStack_60;
  uint auStack_5c [7];
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  puVar25 = auStack_68;
  puVar47 = auStack_68;
  pbVar24 = (byte *)*param_1;
  iVar48 = (param_1[1] & 0xfffffff8) + 8;
  uVar12 = 0;
  uVar21 = 0;
  uVar35 = 0;
  if (0xf < iVar48) {
    uVar21 = (uint)*pbVar24;
    uVar12 = (uint)pbVar24[1];
    uVar35 = 0x10;
  }
  if ((int)(uVar35 | 0x20) <= iVar48) {
    unaff_r9 = (uint)pbVar24[uVar35 + 0x18 >> 3];
    unaff_r8 = (uint)pbVar24[uVar35 + 0x10 >> 3];
    uStack_28 = (uint)pbVar24[uVar35 >> 3];
    unaff_r10 = (uint)(pbVar24 + (uVar35 >> 3))[1];
  }
  uVar21 = uVar21 | uVar12 << 8;
  if (uVar21 == *(ushort *)(*(int *)(DAT_711f6d58 + 0xac) + 0x1f68)) {
    piVar41 = (int *)(DAT_711a3938 + 0x1389c);
    iVar48 = *piVar41;
    if (iVar48 == 0) {
      iVar48 = FUN_713c301c(0);
      if (iVar48 == 0) {
        iVar48 = *piVar41;
      }
      else {
        thunk_MwhHq(0x3a0);
        iVar48 = FUN_715ba834();
        *piVar41 = iVar48;
      }
    }
    piVar41 = (int *)0x6efdd0cf;
    while( true ) {
      uVar21 = puVar47[1] ^ 0x679b29b;
      uVar12 = *puVar47 ^ 0x6a4dab1f | uVar21;
      bVar52 = uVar12 == 0;
      if (bVar52) {
        uVar21 = puVar47[3] ^ 0xfcc126c8;
        uVar12 = puVar47[2] ^ 0x6efdd0cf;
      }
      if ((bVar52 && (uVar12 == 0 && uVar21 == 0)) &&
         (puVar47[4] == 0xbefc55d6 && puVar47[5] == 0x370f3a77)) break;
      puVar47 = puVar47 + 1;
    }
    piVar36 = (int *)puVar47[0xc017];
    bVar52 = piVar36 != (int *)0x0;
    if (bVar52) {
      piVar36 = piVar36 + 1;
      piVar41 = (int *)*piVar36;
    }
    if (bVar52 && piVar41 != (int *)0x0) {
      puVar25 = (uint *)(iVar48 + 0xe8);
      piVar13 = piVar36;
      do {
        piVar11 = piVar41;
        if ((uint *)piVar41[4] < puVar25) {
          piVar41 = piVar41 + 1;
          piVar11 = piVar13;
        }
        piVar13 = piVar11;
        piVar41 = (int *)*piVar41;
      } while (piVar41 != (int *)0x0);
      if ((piVar13 != piVar36) && ((uint *)piVar13[4] <= puVar25)) {
        *puVar25 = unaff_r9 << 0x18 | (unaff_r8 & 0xff) << 0x10 | (unaff_r10 & 0xff) << 8 |
                   uStack_28 & 0xff;
        for (piStack_60 = *(int **)(puVar47[0xc017] + 4); piStack_60 != (int *)0x0;
            piStack_60 = (int *)*piStack_60) {
          while ((uint *)piStack_60[4] <= puVar25) {
            if (puVar25 <= (uint *)piStack_60[4]) goto LAB_71748c9c;
            piStack_60 = (int *)piStack_60[1];
            if (piStack_60 == (int *)0x0) goto LAB_71748c90;
          }
        }
LAB_71748c90:
        FUN_712f6bb0(s_map__at__key_not_found_700619a7);
        piStack_60 = extraout_r1;
LAB_71748c9c:
        uVar12 = piStack_60[6];
        if (uVar12 < 0x20) {
          iVar48 = 0x27d4eb7f;
          uVar21 = 0x56d677d6;
        }
        else {
          uStack_34 = 0x50;
          uStack_30 = 0x40801011;
          uVar35 = 0x60ea283e;
          uStack_38 = 0xee40c5e7;
          iVar48 = 0;
          uStack_2c = 0x61c8869e;
          uStack_28 = 0xba94458a;
          uStack_40 = 0xc2b2ae8d;
          uStack_3c = 0x6854fb60;
          puVar47 = (uint *)piStack_60[5];
          uVar21 = uVar12;
          do {
            lVar3 = (ulonglong)puVar47[6] * 0x27d4eb4f;
            uVar37 = (uint)lVar3;
            uVar38 = uVar37 + uStack_28;
            uVar22 = puVar47[7] * 0x27d4eb4f +
                     puVar47[6] * -0x3d4d51c3 + (int)((ulonglong)lVar3 >> 0x20) + uStack_2c +
                     (uint)CARRY4(uVar37,uStack_28);
            uVar37 = uVar22 >> 1;
            uVar14 = uVar38 * -0x80000000 | uVar37;
            uStack_28 = (uint)((ulonglong)uVar14 * 0x85ebca87);
            uVar38 = uVar38 >> 1;
            uVar15 = uVar22 * -0x80000000 | uVar38;
            uStack_2c = uVar15 * -0x7a143579 +
                        uVar14 * -0x61c8864f + (int)((ulonglong)uVar14 * 0x85ebca87 >> 0x20);
            puVar25 = puVar47 + 3;
            lVar3 = (ulonglong)puVar47[4] * 0x27d4eb4f;
            uVar22 = (uint)lVar3;
            uVar39 = uVar22 + uStack_30;
            uVar45 = puVar47[5] * 0x27d4eb4f +
                     puVar47[4] * -0x3d4d51c3 + (int)((ulonglong)lVar3 >> 0x20) + uStack_34 +
                     (uint)CARRY4(uVar22,uStack_30);
            uVar22 = uVar45 >> 1;
            uVar16 = uVar39 * -0x80000000 | uVar22;
            uStack_30 = (uint)((ulonglong)uVar16 * 0x85ebca87);
            uVar39 = uVar39 >> 1;
            uVar17 = uVar45 * -0x80000000 | uVar39;
            puVar1 = puVar47 + 2;
            uStack_34 = uVar17 * -0x7a143579 +
                        uVar16 * -0x61c8864f + (int)((ulonglong)uVar16 * 0x85ebca87 >> 0x20);
            uVar40 = *puVar47;
            puVar2 = puVar47 + 1;
            puVar47 = puVar47 + 8;
            lVar3 = (ulonglong)*puVar1 * 0x27d4eb4f;
            uVar45 = (uint)lVar3;
            uVar18 = uVar45 + uStack_3c;
            uVar23 = *puVar25 * 0x27d4eb4f + *puVar1 * -0x3d4d51c3 + (int)((ulonglong)lVar3 >> 0x20)
                     + uStack_40 + (uint)CARRY4(uVar45,uStack_3c);
            uVar45 = uVar23 >> 1;
            uVar49 = uVar18 * -0x80000000 | uVar45;
            uVar18 = uVar18 >> 1;
            uVar19 = uVar23 * -0x80000000 | uVar18;
            uStack_3c = (uint)((ulonglong)uVar49 * 0x85ebca87);
            uStack_40 = uVar19 * -0x7a143579 +
                        uVar49 * -0x61c8864f + (int)((ulonglong)uVar49 * 0x85ebca87 >> 0x20);
            lVar3 = (ulonglong)uVar40 * 0x27d4eb4f;
            uVar23 = (uint)lVar3;
            uVar20 = uVar23 + uStack_38;
            uVar35 = *puVar2 * 0x27d4eb4f + uVar40 * -0x3d4d51c3 + (int)((ulonglong)lVar3 >> 0x20) +
                     uVar35 + (uint)CARRY4(uVar23,uStack_38);
            bVar52 = uVar21 < 0x20;
            uVar21 = uVar21 - 0x20;
            uVar23 = uVar35 >> 1;
            uVar40 = uVar20 * -0x80000000 | uVar23;
            uVar20 = uVar20 >> 1;
            uVar51 = uVar35 * -0x80000000 | uVar20;
            iVar48 = iVar48 - (uint)bVar52;
            uStack_38 = (uint)((ulonglong)uVar40 * 0x85ebca87);
            uVar35 = uVar51 * -0x7a143579 +
                     uVar40 * -0x61c8864f + (int)((ulonglong)uVar40 * 0x85ebca87 >> 0x20);
          } while ((uint)(uVar21 < 0x20) <= (uint)-iVar48);
          uVar26 = uStack_38 << 1 | uVar35 >> 0x1f;
          uVar42 = uStack_3c << 7 | uStack_40 >> 0x19;
          uVar27 = uVar42 + uVar26;
          uVar43 = uStack_30 << 0xc | uStack_34 >> 0x14;
          uVar50 = uVar27 + uVar43;
          uVar44 = (uint)((ulonglong)uVar40 * 0x80000000) |
                   uVar51 * 0xf796ca9 +
                   uVar40 * -0x210ca4ff + (int)((ulonglong)uVar40 * 0xf796ca9 >> 0x20) >> 1;
          lVar3 = (ulonglong)uVar44 * 0x85ebca87;
          uVar51 = uStack_28 << 0x12 | uStack_2c >> 0xe;
          uVar28 = uVar50 + uVar51 ^ (uint)lVar3;
          lVar4 = (ulonglong)uVar28 * 0x85ebca87;
          uVar46 = (uint)lVar4;
          uVar29 = (uint)((ulonglong)uVar49 * 0x80000000) |
                   uVar19 * 0xf796ca9 +
                   uVar49 * -0x210ca4ff + (int)((ulonglong)uVar49 * 0xf796ca9 >> 0x20) >> 1;
          lVar5 = (ulonglong)uVar29 * 0x85ebca87;
          uVar19 = uVar46 + 0xc2b2ae63 ^ (uint)lVar5;
          lVar6 = (ulonglong)uVar19 * 0x85ebca87;
          uVar30 = (uint)lVar6;
          uVar31 = (uint)((ulonglong)uVar16 * 0x80000000) |
                   uVar17 * 0xf796ca9 +
                   uVar16 * -0x210ca4ff + (int)((ulonglong)uVar16 * 0xf796ca9 >> 0x20) >> 1;
          lVar7 = (ulonglong)uVar31 * 0x85ebca87;
          uVar17 = uVar30 + 0xc2b2ae63 ^ (uint)lVar7;
          lVar8 = (ulonglong)uVar17 * 0x85ebca87;
          uVar32 = (uint)lVar8;
          uVar33 = (uint)((ulonglong)uVar14 * 0x80000000) |
                   uVar15 * 0xf796ca9 +
                   uVar14 * -0x210ca4ff + (int)((ulonglong)uVar14 * 0xf796ca9 >> 0x20) >> 1;
          lVar9 = (ulonglong)uVar33 * 0x85ebca87;
          uVar15 = uVar32 + 0xc2b2ae63 ^ (uint)lVar9;
          lVar10 = (ulonglong)uVar15 * 0x85ebca87;
          uVar34 = (uint)lVar10;
          uVar21 = uVar34 + 0xc2b2ae63;
          iVar48 = (((((uStack_40 * 0x80 | uStack_3c >> 0x19) + (uVar35 * 2 | uStack_38 >> 0x1f) +
                       (uint)CARRY4(uVar42,uVar26) + (uStack_34 * 0x1000 | uStack_30 >> 0x14) +
                       (uint)CARRY4(uVar27,uVar43) + (uStack_2c * 0x40000 | uStack_28 >> 0xe) +
                       (uint)CARRY4(uVar50,uVar51) ^
                      (uVar20 * -0x80000000 +
                      uVar23 * -0x784349ac + (int)((ulonglong)uVar40 * 0x80000000 >> 0x20)) *
                      -0x7a143579 + uVar44 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20)) *
                      -0x7a143579 + uVar28 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) +
                      -0x7a143589 + (uint)(0x3d4d519c < uVar46) ^
                     (uVar18 * -0x80000000 +
                     uVar45 * -0x784349ac + (int)((ulonglong)uVar49 * 0x80000000 >> 0x20)) *
                     -0x7a143579 + uVar29 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20)) *
                     -0x7a143579 + uVar19 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20) +
                     -0x7a143589 + (uint)(0x3d4d519c < uVar30) ^
                    (uVar39 * -0x80000000 +
                    uVar22 * -0x784349ac + (int)((ulonglong)uVar16 * 0x80000000 >> 0x20)) *
                    -0x7a143579 + uVar31 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20)) *
                    -0x7a143579 + uVar17 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20) +
                    -0x7a143589 + (uint)(0x3d4d519c < uVar32) ^
                   (uVar38 * -0x80000000 +
                   uVar37 * -0x784349ac + (int)((ulonglong)uVar14 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar33 * -0x61c8864f + (int)((ulonglong)lVar9 >> 0x20)) *
                   -0x7a143579 + uVar15 * -0x61c8864f + (int)((ulonglong)lVar10 >> 0x20) +
                   -0x7a143589 + (uint)(0x3d4d519c < uVar34);
        }
        uStack_28 = uVar21 + uVar12;
        uVar35 = 0;
        uVar21 = iVar48 + (uint)CARRY4(uVar21,uVar12);
        puVar47 = (uint *)(piStack_60[5] + (uVar12 & 0xffffffe0));
        uVar12 = uVar12 & 0x1f;
        do {
          if (uVar35 == 0 && (7 < uVar12) <= uVar35) {
            if (uVar35 == 0 && (3 < uVar12) <= uVar35) {
              if (uVar12 == 0 && uVar35 == 0) {
LAB_71749934:
                uVar12 = uStack_28 ^ uVar21 >> 1;
                lVar3 = (ulonglong)uVar12 * 0x27d4eb4f;
                uVar35 = (uint)lVar3;
                uVar12 = uVar21 * 0x27d4eb4f +
                         uVar12 * -0x3d4d51c3 + (int)((ulonglong)lVar3 >> 0x20);
                uVar35 = (uVar35 >> 0x1d | uVar12 * 8) ^ uVar35;
                lVar3 = (ulonglong)uVar35 * 0x9e3779f9;
                uVar12 = (uVar12 ^ uVar12 >> 0x1d) * -0x61c88607 +
                         uVar35 * 0x165667b1 + (int)((ulonglong)lVar3 >> 0x20);
                piStack_60[8] = uVar12;
                piStack_60[7] = uVar12 ^ (uint)lVar3;
                return;
              }
              iVar48 = 1;
              lVar3 = (ulonglong)(uint)(byte)*puVar47 * 0x165667c5;
              uVar37 = (uint)lVar3 ^ uStack_28;
              uVar21 = (uint)(byte)*puVar47 * 0x27d4eb2f + (int)((ulonglong)lVar3 >> 0x20) ^ uVar21;
              uVar38 = uVar37 << 0xb | uVar21 >> 0x15;
              lVar3 = (ulonglong)uVar38 * 0x85ebca87;
              uStack_28 = (uint)lVar3;
              uVar21 = (uVar21 << 0xb | uVar37 >> 0x15) * -0x7a143579 +
                       uVar38 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20);
              uVar22 = 0xffffffff;
            }
            else {
              lVar3 = (ulonglong)*puVar47 * 0x85ebca87;
              uVar37 = (uint)lVar3 ^ uStack_28;
              uVar21 = *puVar47 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20) ^ uVar21;
              uVar38 = uVar37 << 0x17 | uVar21 >> 9;
              lVar3 = (ulonglong)uVar38 * 0x27d4eb4f;
              uVar22 = (uint)lVar3;
              iVar48 = 4;
              uStack_28 = uVar22 + 0x9e3779f9;
              uVar21 = (uVar21 << 0x17 | uVar37 >> 9) * 0x27d4eb4f +
                       uVar38 * -0x3d4d51c3 + (int)((ulonglong)lVar3 >> 0x20) + 0x165667b1 +
                       (uint)(0x61c88606 < uVar22);
              uVar22 = 0xfffffffc;
            }
          }
          else {
            uVar37 = *puVar47;
            uVar39 = (uint)((ulonglong)uVar37 * 0x80000000) |
                     puVar47[1] * 0x27d4eb4f +
                     uVar37 * -0x3d4d51c3 + (int)((ulonglong)uVar37 * 0x27d4eb4f >> 0x20) >> 1;
            lVar3 = (ulonglong)uVar39 * 0x85ebca87;
            uVar22 = 0xfffffff8;
            uVar38 = (uint)lVar3 ^ uStack_28;
            uVar21 = (puVar47[1] * -0x80000000 +
                     uVar37 * -0x6c158a59 + (int)((ulonglong)uVar37 * 0x80000000 >> 0x20)) *
                     -0x7a143579 + uVar39 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20) ^ uVar21;
            uVar37 = uVar38 << 0x1b | uVar21 >> 5;
            lVar3 = (ulonglong)uVar37 * 0x85ebca87;
            uVar39 = (uint)lVar3;
            iVar48 = 8;
            uStack_28 = uVar39 + 0xc2b2ae63;
            uVar21 = (uVar21 << 0x1b | uVar38 >> 5) * -0x7a143579 +
                     uVar37 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20) + -0x7a143589 +
                     (uint)(0x3d4d519c < uVar39);
          }
          bVar52 = CARRY4(uVar22,uVar12);
          uVar12 = uVar22 + uVar12;
          puVar47 = (uint *)((int)puVar47 + iVar48);
          uVar35 = (uVar35 - 1) + (uint)bVar52;
        } while( true );
      }
    }
  }
  else if (uVar21 < 0x3ed) {
    iVar48 = *(int *)(*(int *)(DAT_711f6d58 + 0xac) + uVar21 * 4 + 0x1f8c);
    if (iVar48 != 0) {
      in_r12 = *(int *)(iVar48 + 0x10);
    }
    if (iVar48 != 0 && in_r12 != 0) {
      piVar41 = (int *)0x6a4dab1f;
      while( true ) {
        uVar21 = puVar25[1] ^ 0x679b29b;
        uVar12 = *puVar25 ^ 0x6a4dab1f | uVar21;
        bVar52 = uVar12 == 0;
        if (bVar52) {
          uVar21 = puVar25[3] ^ 0xfcc126c8;
          uVar12 = puVar25[2] ^ 0x6efdd0cf;
        }
        if ((bVar52 && (uVar12 == 0 && uVar21 == 0)) &&
           (puVar25[4] == 0xbefc55d6 && puVar25[5] == 0x370f3a77)) break;
        puVar25 = puVar25 + 1;
      }
      piVar36 = (int *)puVar25[0xc017];
      bVar52 = piVar36 != (int *)0x0;
      if (bVar52) {
        piVar36 = piVar36 + 1;
        piVar41 = (int *)*piVar36;
      }
      if (bVar52 && piVar41 != (int *)0x0) {
        puVar47 = (uint *)(in_r12 + 0xe8);
        piVar13 = piVar36;
        do {
          piVar11 = piVar41;
          if ((uint *)piVar41[4] < puVar47) {
            piVar41 = piVar41 + 1;
            piVar11 = piVar13;
          }
          piVar13 = piVar11;
          piVar41 = (int *)*piVar41;
        } while (piVar41 != (int *)0x0);
        if ((piVar13 != piVar36) && ((uint *)piVar13[4] <= puVar47)) {
          *puVar47 = unaff_r9 << 0x18 | (unaff_r8 & 0xff) << 0x10 | (unaff_r10 & 0xff) << 8 |
                     uStack_28 & 0xff;
          for (piStack_60 = *(int **)(puVar25[0xc017] + 4); piStack_60 != (int *)0x0;
              piStack_60 = (int *)piStack_60[1]) {
            while (puVar47 < (uint *)piStack_60[4]) {
              piStack_60 = (int *)*piStack_60;
              if (piStack_60 == (int *)0x0) goto LAB_71748c90;
            }
            if (puVar47 <= (uint *)piStack_60[4]) {
              uVar12 = piStack_60[6];
              if (uVar12 < 0x20) {
                iVar48 = 0x27d4eb7f;
                uVar21 = 0x56d677d6;
              }
              else {
                uStack_34 = 0x50;
                uStack_30 = 0x40801011;
                uStack_38 = 0xee40c5e7;
                uStack_2c = 0x61c8869e;
                uStack_28 = 0xba94458a;
                uVar35 = 0x60ea283e;
                uStack_40 = 0xc2b2ae8d;
                iVar48 = 0;
                uStack_3c = 0x6854fb60;
                puVar47 = (uint *)piStack_60[5];
                uVar21 = uVar12;
                do {
                  lVar3 = (ulonglong)puVar47[6] * 0x27d4eb4f;
                  uVar37 = (uint)lVar3;
                  uVar38 = uVar37 + uStack_28;
                  uVar22 = puVar47[7] * 0x27d4eb4f +
                           puVar47[6] * -0x3d4d51c3 + (int)((ulonglong)lVar3 >> 0x20) + uStack_2c +
                           (uint)CARRY4(uVar37,uStack_28);
                  uVar37 = uVar22 >> 1;
                  uVar14 = uVar38 * -0x80000000 | uVar37;
                  uStack_28 = (uint)((ulonglong)uVar14 * 0x85ebca87);
                  uVar38 = uVar38 >> 1;
                  uVar15 = uVar22 * -0x80000000 | uVar38;
                  uStack_2c = uVar15 * -0x7a143579 +
                              uVar14 * -0x61c8864f + (int)((ulonglong)uVar14 * 0x85ebca87 >> 0x20);
                  puVar25 = puVar47 + 3;
                  lVar3 = (ulonglong)puVar47[4] * 0x27d4eb4f;
                  uVar22 = (uint)lVar3;
                  uVar39 = uVar22 + uStack_30;
                  uVar45 = puVar47[5] * 0x27d4eb4f +
                           puVar47[4] * -0x3d4d51c3 + (int)((ulonglong)lVar3 >> 0x20) + uStack_34 +
                           (uint)CARRY4(uVar22,uStack_30);
                  uVar22 = uVar45 >> 1;
                  uVar16 = uVar39 * -0x80000000 | uVar22;
                  uStack_30 = (uint)((ulonglong)uVar16 * 0x85ebca87);
                  uVar39 = uVar39 >> 1;
                  uVar17 = uVar45 * -0x80000000 | uVar39;
                  puVar1 = puVar47 + 2;
                  uStack_34 = uVar17 * -0x7a143579 +
                              uVar16 * -0x61c8864f + (int)((ulonglong)uVar16 * 0x85ebca87 >> 0x20);
                  uVar19 = *puVar47;
                  puVar2 = puVar47 + 1;
                  puVar47 = puVar47 + 8;
                  lVar3 = (ulonglong)*puVar1 * 0x27d4eb4f;
                  uVar45 = (uint)lVar3;
                  uVar18 = uVar45 + uStack_3c;
                  uVar23 = *puVar25 * 0x27d4eb4f +
                           *puVar1 * -0x3d4d51c3 + (int)((ulonglong)lVar3 >> 0x20) + uStack_40 +
                           (uint)CARRY4(uVar45,uStack_3c);
                  uVar45 = uVar23 >> 1;
                  uVar49 = uVar18 * -0x80000000 | uVar45;
                  uStack_3c = (uint)((ulonglong)uVar49 * 0x85ebca87);
                  uVar18 = uVar18 >> 1;
                  uVar40 = uVar23 * -0x80000000 | uVar18;
                  uStack_40 = uVar40 * -0x7a143579 +
                              uVar49 * -0x61c8864f + (int)((ulonglong)uVar49 * 0x85ebca87 >> 0x20);
                  lVar3 = (ulonglong)uVar19 * 0x27d4eb4f;
                  uVar23 = (uint)lVar3;
                  uVar20 = uVar23 + uStack_38;
                  uVar35 = *puVar2 * 0x27d4eb4f +
                           uVar19 * -0x3d4d51c3 + (int)((ulonglong)lVar3 >> 0x20) + uVar35 +
                           (uint)CARRY4(uVar23,uStack_38);
                  bVar52 = uVar21 < 0x20;
                  uVar21 = uVar21 - 0x20;
                  uVar23 = uVar35 >> 1;
                  uVar19 = uVar20 * -0x80000000 | uVar23;
                  iVar48 = iVar48 - (uint)bVar52;
                  uStack_38 = (uint)((ulonglong)uVar19 * 0x85ebca87);
                  uVar20 = uVar20 >> 1;
                  uVar51 = uVar35 * -0x80000000 | uVar20;
                  uVar35 = uVar51 * -0x7a143579 +
                           uVar19 * -0x61c8864f + (int)((ulonglong)uVar19 * 0x85ebca87 >> 0x20);
                } while ((uint)(uVar21 < 0x20) <= (uint)-iVar48);
                uVar26 = uStack_38 << 1 | uVar35 >> 0x1f;
                uVar43 = uStack_3c << 7 | uStack_40 >> 0x19;
                uVar27 = uVar43 + uVar26;
                uVar44 = uStack_30 << 0xc | uStack_34 >> 0x14;
                uVar50 = uVar27 + uVar44;
                uVar51 = (uint)((ulonglong)uVar19 * 0x80000000) |
                         uVar51 * 0xf796ca9 +
                         uVar19 * -0x210ca4ff + (int)((ulonglong)uVar19 * 0xf796ca9 >> 0x20) >> 1;
                lVar3 = (ulonglong)uVar51 * 0x85ebca87;
                uVar28 = uStack_28 << 0x12 | uStack_2c >> 0xe;
                uVar29 = uVar50 + uVar28 ^ (uint)lVar3;
                lVar4 = (ulonglong)uVar29 * 0x85ebca87;
                uVar46 = (uint)lVar4;
                uVar30 = (uint)((ulonglong)uVar49 * 0x80000000) |
                         uVar40 * 0xf796ca9 +
                         uVar49 * -0x210ca4ff + (int)((ulonglong)uVar49 * 0xf796ca9 >> 0x20) >> 1;
                lVar5 = (ulonglong)uVar30 * 0x85ebca87;
                uVar40 = uVar46 + 0xc2b2ae63 ^ (uint)lVar5;
                lVar6 = (ulonglong)uVar40 * 0x85ebca87;
                uVar31 = (uint)lVar6;
                uVar32 = (uint)((ulonglong)uVar16 * 0x80000000) |
                         uVar17 * 0xf796ca9 +
                         uVar16 * -0x210ca4ff + (int)((ulonglong)uVar16 * 0xf796ca9 >> 0x20) >> 1;
                lVar7 = (ulonglong)uVar32 * 0x85ebca87;
                uVar17 = uVar31 + 0xc2b2ae63 ^ (uint)lVar7;
                lVar8 = (ulonglong)uVar17 * 0x85ebca87;
                uVar33 = (uint)lVar8;
                uVar34 = (uint)((ulonglong)uVar14 * 0x80000000) |
                         uVar15 * 0xf796ca9 +
                         uVar14 * -0x210ca4ff + (int)((ulonglong)uVar14 * 0xf796ca9 >> 0x20) >> 1;
                lVar9 = (ulonglong)uVar34 * 0x85ebca87;
                uVar15 = uVar33 + 0xc2b2ae63 ^ (uint)lVar9;
                lVar10 = (ulonglong)uVar15 * 0x85ebca87;
                uVar42 = (uint)lVar10;
                uVar21 = uVar42 + 0xc2b2ae63;
                iVar48 = (((((uStack_40 * 0x80 | uStack_3c >> 0x19) +
                             (uVar35 * 2 | uStack_38 >> 0x1f) + (uint)CARRY4(uVar43,uVar26) +
                             (uStack_34 * 0x1000 | uStack_30 >> 0x14) + (uint)CARRY4(uVar27,uVar44)
                             + (uStack_2c * 0x40000 | uStack_28 >> 0xe) +
                             (uint)CARRY4(uVar50,uVar28) ^
                            (uVar20 * -0x80000000 +
                            uVar23 * -0x784349ac + (int)((ulonglong)uVar19 * 0x80000000 >> 0x20)) *
                            -0x7a143579 + uVar51 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20)) *
                            -0x7a143579 + uVar29 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) +
                            -0x7a143589 + (uint)(0x3d4d519c < uVar46) ^
                           (uVar18 * -0x80000000 +
                           uVar45 * -0x784349ac + (int)((ulonglong)uVar49 * 0x80000000 >> 0x20)) *
                           -0x7a143579 + uVar30 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20)) *
                           -0x7a143579 + uVar40 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20) +
                           -0x7a143589 + (uint)(0x3d4d519c < uVar31) ^
                          (uVar39 * -0x80000000 +
                          uVar22 * -0x784349ac + (int)((ulonglong)uVar16 * 0x80000000 >> 0x20)) *
                          -0x7a143579 + uVar32 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20)) *
                          -0x7a143579 + uVar17 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20) +
                          -0x7a143589 + (uint)(0x3d4d519c < uVar33) ^
                         (uVar38 * -0x80000000 +
                         uVar37 * -0x784349ac + (int)((ulonglong)uVar14 * 0x80000000 >> 0x20)) *
                         -0x7a143579 + uVar34 * -0x61c8864f + (int)((ulonglong)lVar9 >> 0x20)) *
                         -0x7a143579 + uVar15 * -0x61c8864f + (int)((ulonglong)lVar10 >> 0x20) +
                         -0x7a143589 + (uint)(0x3d4d519c < uVar42);
              }
              uStack_28 = uVar21 + uVar12;
              uVar35 = uVar12 & 0x1f;
              uVar21 = iVar48 + (uint)CARRY4(uVar21,uVar12);
              puVar47 = (uint *)(piStack_60[5] + (uVar12 & 0xffffffe0));
              uVar12 = 0;
              do {
                if (uVar12 == 0 && (7 < uVar35) <= uVar12) {
                  if (uVar12 == 0 && (3 < uVar35) <= uVar12) {
                    if (uVar35 == 0 && uVar12 == 0) goto LAB_71749934;
                    iVar48 = 1;
                    lVar3 = (ulonglong)(uint)(byte)*puVar47 * 0x165667c5;
                    uVar37 = (uint)lVar3 ^ uStack_28;
                    uVar21 = (uint)(byte)*puVar47 * 0x27d4eb2f + (int)((ulonglong)lVar3 >> 0x20) ^
                             uVar21;
                    uVar38 = uVar37 << 0xb | uVar21 >> 0x15;
                    lVar3 = (ulonglong)uVar38 * 0x85ebca87;
                    uStack_28 = (uint)lVar3;
                    uVar21 = (uVar21 << 0xb | uVar37 >> 0x15) * -0x7a143579 +
                             uVar38 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20);
                    uVar22 = 0xffffffff;
                  }
                  else {
                    lVar3 = (ulonglong)*puVar47 * 0x85ebca87;
                    uVar37 = (uint)lVar3 ^ uStack_28;
                    uVar21 = *puVar47 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20) ^ uVar21;
                    uVar38 = uVar37 << 0x17 | uVar21 >> 9;
                    lVar3 = (ulonglong)uVar38 * 0x27d4eb4f;
                    uVar22 = (uint)lVar3;
                    iVar48 = 4;
                    uStack_28 = uVar22 + 0x9e3779f9;
                    uVar21 = (uVar21 << 0x17 | uVar37 >> 9) * 0x27d4eb4f +
                             uVar38 * -0x3d4d51c3 + (int)((ulonglong)lVar3 >> 0x20) + 0x165667b1 +
                             (uint)(0x61c88606 < uVar22);
                    uVar22 = 0xfffffffc;
                  }
                }
                else {
                  uVar37 = *puVar47;
                  uVar39 = (uint)((ulonglong)uVar37 * 0x80000000) |
                           puVar47[1] * 0x27d4eb4f +
                           uVar37 * -0x3d4d51c3 + (int)((ulonglong)uVar37 * 0x27d4eb4f >> 0x20) >> 1
                  ;
                  lVar3 = (ulonglong)uVar39 * 0x85ebca87;
                  uVar22 = 0xfffffff8;
                  uVar38 = (uint)lVar3 ^ uStack_28;
                  uVar21 = (puVar47[1] * -0x80000000 +
                           uVar37 * -0x6c158a59 + (int)((ulonglong)uVar37 * 0x80000000 >> 0x20)) *
                           -0x7a143579 + uVar39 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20) ^
                           uVar21;
                  uVar37 = uVar38 << 0x1b | uVar21 >> 5;
                  lVar3 = (ulonglong)uVar37 * 0x85ebca87;
                  uVar39 = (uint)lVar3;
                  iVar48 = 8;
                  uStack_28 = uVar39 + 0xc2b2ae63;
                  uVar21 = (uVar21 << 0x1b | uVar38 >> 5) * -0x7a143579 +
                           uVar37 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20) + -0x7a143589 +
                           (uint)(0x3d4d519c < uVar39);
                }
                bVar52 = CARRY4(uVar22,uVar35);
                uVar35 = uVar22 + uVar35;
                puVar47 = (uint *)((int)puVar47 + iVar48);
                uVar12 = (uVar12 - 1) + (uint)bVar52;
              } while( true );
            }
          }
          goto LAB_71748c90;
        }
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71749a78
// Entry: 0x71749a78 | Size: 200 bytes
// =========================================================================

void FUN_71749a78(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  
  pbVar7 = (byte *)*param_1;
  uVar1 = (param_1[1] & 0xfffffff8) + 8;
  uVar4 = 0;
  uVar2 = 0;
  uVar6 = 0;
  if (0xf < (int)uVar1) {
    uVar4 = 0x10;
  }
  if (0xf < (int)uVar1) {
    uVar6 = (uint)*pbVar7;
    uVar2 = (uint)pbVar7[1];
  }
  if ((int)(uVar4 | 8) <= (int)uVar1) {
    uVar1 = (uint)pbVar7[uVar4 >> 3];
  }
  uVar6 = uVar6 | uVar2 << 8;
  iVar5 = *(int *)(DAT_711f6d58 + 0xac);
  if (uVar6 == *(ushort *)(iVar5 + 0x1f68)) {
    piVar3 = (int *)(iVar5 + 0x1f6c);
    iVar5 = 0x130;
  }
  else {
    if (0xfa < uVar6 >> 2) {
      return;
    }
    if (*(char *)(iVar5 + uVar6 + 0x3eec) == '\0') {
      return;
    }
    piVar3 = (int *)(iVar5 + uVar6 * 4 + 0x1f8c);
    iVar5 = 0x10;
  }
  if (*(int *)(*piVar3 + iVar5) != 0) {
    *(char *)(*(int *)(*piVar3 + iVar5) + 0x178) = (char)uVar1;
  }
  return;
}


// =========================================================================
// Function: FUN_71749b64
// Entry: 0x71749b64 | Size: 200 bytes
// =========================================================================

void FUN_71749b64(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  
  pbVar7 = (byte *)*param_1;
  uVar1 = (param_1[1] & 0xfffffff8) + 8;
  uVar4 = 0;
  uVar2 = 0;
  uVar6 = 0;
  if (0xf < (int)uVar1) {
    uVar4 = 0x10;
  }
  if (0xf < (int)uVar1) {
    uVar6 = (uint)*pbVar7;
    uVar2 = (uint)pbVar7[1];
  }
  if ((int)(uVar4 | 8) <= (int)uVar1) {
    uVar1 = (uint)pbVar7[uVar4 >> 3];
  }
  uVar6 = uVar6 | uVar2 << 8;
  iVar5 = *(int *)(DAT_711f6d58 + 0xac);
  if (uVar6 == *(ushort *)(iVar5 + 0x1f68)) {
    piVar3 = (int *)(iVar5 + 0x1f6c);
    iVar5 = 0x130;
  }
  else {
    if (0xfa < uVar6 >> 2) {
      return;
    }
    if (*(char *)(iVar5 + uVar6 + 0x3eec) == '\0') {
      return;
    }
    piVar3 = (int *)(iVar5 + uVar6 * 4 + 0x1f8c);
    iVar5 = 0x10;
  }
  if (*(int *)(*piVar3 + iVar5) != 0) {
    *(char *)(*(int *)(*piVar3 + iVar5) + 0x179) = (char)uVar1;
  }
  return;
}


// =========================================================================
// Function: FUN_7174a790
// Entry: 0x7174a790 | Size: 172 bytes
// =========================================================================

void FUN_7174a790(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  bool bVar7;
  
  pbVar6 = (byte *)*param_1;
  iVar3 = (param_1[1] & 0xfffffff8) + 8;
  uVar1 = 0;
  uVar2 = 0;
  if (0x1f < iVar3) {
    uVar1 = (uint)pbVar6[1];
  }
  uVar4 = 0;
  if (0x1f < iVar3) {
    uVar2 = (uint)*pbVar6;
    uVar4 = 0x20;
    uVar1 = uVar1 << 8;
  }
  if (((int)uVar4 < iVar3) && (iVar3 = 0, (char)pbVar6[uVar4 >> 3] < '\0')) {
    iVar3 = 1;
  }
  iVar5 = *(int *)(DAT_711f6d58 + 4);
  if (iVar5 != 0) {
    uVar1 = uVar1 | uVar2;
    if (2000 < uVar1) {
      return;
    }
    bVar7 = *(char *)(iVar5 + uVar1 + 0x3e88) != '\0';
    if (bVar7) {
      uVar1 = *(uint *)(iVar5 + uVar1 * 4);
    }
    if (bVar7 && uVar1 != 0) {
      *(byte *)(uVar1 + 0x778) = (byte)iVar3 & 1;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_7174a860
// Entry: 0x7174a860 | Size: 212 bytes
// =========================================================================

void FUN_7174a860(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  bool bVar7;
  
  pbVar6 = (byte *)*param_1;
  uVar3 = (param_1[1] & 0xfffffff8) + 8;
  uVar1 = 0;
  uVar2 = 0;
  if (0x1f < (int)uVar3) {
    uVar1 = (uint)pbVar6[1];
  }
  uVar4 = 0;
  if (0x1f < (int)uVar3) {
    uVar2 = (uint)*pbVar6;
    uVar4 = 0x20;
    uVar1 = uVar1 << 8;
  }
  if (((int)uVar4 < (int)uVar3) && (uVar3 = 0, (char)pbVar6[uVar4 >> 3] < '\0')) {
    uVar3 = 1;
  }
  iVar5 = *(int *)(DAT_711f6d58 + 4);
  if (iVar5 != 0) {
    uVar1 = uVar1 | uVar2;
    if (2000 < uVar1) {
      return;
    }
    bVar7 = *(char *)(iVar5 + uVar1 + 0x3e88) != '\0';
    if (bVar7) {
      uVar1 = *(uint *)(iVar5 + uVar1 * 4);
    }
    if (bVar7 && uVar1 != 0) {
      *(uint *)(*(int *)(uVar1 + 0xc) + 0x390) =
           *(uint *)(*(int *)(uVar1 + 0xc) + 0x390) & 0xfffdffff | (uVar3 & 1) << 0x11;
      return;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_7174a954
// Entry: 0x7174a954 | Size: 960 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x7174ab28) */
/* WARNING: Removing unreachable block (ram,0x7174ab0c) */
/* WARNING: Removing unreachable block (ram,0x7174aaf8) */
/* WARNING: Removing unreachable block (ram,0x7174aae4) */
/* WARNING: Removing unreachable block (ram,0x7174aac4) */
/* WARNING: Removing unreachable block (ram,0x7174aaac) */
/* WARNING: Removing unreachable block (ram,0x7174aabc) */
/* WARNING: Removing unreachable block (ram,0x7174aad4) */
/* WARNING: Removing unreachable block (ram,0x7174aae8) */
/* WARNING: Removing unreachable block (ram,0x7174ab08) */
/* WARNING: Removing unreachable block (ram,0x7174ab20) */
/* WARNING: Removing unreachable block (ram,0x7174ab2c) */

void FUN_7174a954(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  byte in_r12;
  int iStack_2c;
  int iStack_28;
  byte bStack_24;
  undefined3 uStack_23;
  
  iVar1 = DAT_70b88a9c;
  pbVar10 = (byte *)*param_1;
  iVar9 = (param_1[1] & 0xfffffff8) + 8;
  uVar2 = 0;
  uVar6 = 0;
  uVar7 = 0;
  if (0xf < iVar9) {
    uVar6 = (uint)*pbVar10;
    uVar2 = (uint)pbVar10[1];
    uVar7 = 0x10;
  }
  if ((int)(uVar7 | 8) <= iVar9) {
    in_r12 = pbVar10[uVar7 >> 3];
    uVar7 = uVar7 | 8;
  }
  iVar8 = *(int *)(DAT_711f6d58 + 0xac);
  if (iVar8 != 0) {
    uVar6 = uVar6 | uVar2 << 8;
    if (uVar6 == *(ushort *)(iVar8 + 0x1f68)) {
      piVar3 = (int *)(*(int *)(iVar8 + 0x1f6c) + 0x130);
    }
    else {
      if (0xfa < uVar6 >> 2) {
        return;
      }
      if (*(char *)(iVar8 + uVar6 + 0x3eec) == '\0') {
        return;
      }
      iVar8 = *(int *)(iVar8 + uVar6 * 4 + 0x1f8c);
      if (iVar8 == 0) {
        return;
      }
      piVar3 = (int *)(iVar8 + 0x10);
    }
    iVar4 = *piVar3;
    iVar8 = 0;
    if (iVar4 != 0) {
      iVar8 = *(int *)(iVar4 + 0x8c);
    }
    if (iVar4 != 0 && iVar8 != 0) {
      if (in_r12 == 1) {
        uVar2 = 0;
        if ((int)(uVar7 + 8) <= iVar9) {
          uVar2 = (uint)pbVar10[uVar7 >> 3];
        }
        if (iVar8 != 0) {
          if (*(uint *)(iVar8 + 0x5a4 + *(char *)(iVar8 + 0x71c) * 0x1c) == uVar2) {
            FUN_713ba5e0(iVar8,*(undefined4 *)(iVar8 + 0x748));
          }
          FUN_71519478(&DAT_71174d28,&stack0xffffffe0);
          if (*(uint *)(iVar8 + 0x5a4 + *(char *)(iVar8 + 0x71c) * 0x1c) == uVar2) {
            FUN_713ba3e0(iVar8,*(undefined4 *)(DAT_70b88a9c + uVar2 * 0x70 + 0xc));
          }
          return;
        }
        return;
      }
      if (in_r12 == 0) {
        uVar2 = uVar7 + 8;
        if (iVar9 < (int)uVar2) {
          bVar5 = 0;
          uVar2 = uVar7;
        }
        else {
          bVar5 = pbVar10[uVar7 >> 3];
        }
        _bStack_24 = CONCAT31(uStack_23,pbVar10[uVar2 >> 3]);
        iStack_28 = CONCAT22(CONCAT11(pbVar10[uVar2 + 8 >> 3],pbVar10[uVar2 + 0x10 >> 3]),
                             CONCAT11(pbVar10[uVar2 + 0x18 >> 3],(char)iStack_28));
        uVar2 = (uint)pbVar10[uVar2 + 0x18 >> 3] << 0x18 | (uint)pbVar10[uVar2 + 0x10 >> 3] << 0x10
                | (uint)pbVar10[uVar2 + 8 >> 3] << 8 | (uint)pbVar10[uVar2 >> 3];
        FUN_715184c4(iVar8,bVar5,uVar2);
        FUN_71518ac4(uVar2);
        return;
      }
      if (iVar8 != 0) {
        if (DAT_71174d30 != (int *)0x0) {
          piVar3 = DAT_71174d30;
          do {
            if (piVar3[2] == iVar8) {
              iVar9 = piVar3[3];
              if (*(int *)(iVar8 + 0x5a4 + *(char *)(iVar8 + 0x71c) * 0x1c) == iVar9) {
                FUN_713ba5e0(iVar8,*(undefined4 *)(iVar8 + 0x748));
              }
              iStack_2c = iVar8;
              iStack_28 = iVar9;
              FUN_71519478(&DAT_71174d28,&iStack_2c);
              if (*(int *)(iVar8 + 0x5a4 + *(char *)(iVar8 + 0x71c) * 0x1c) == iVar9) {
                FUN_713ba3e0(iVar8,*(undefined4 *)(iVar1 + iVar9 * 0x70 + 0xc));
              }
            }
            piVar3 = (int *)*piVar3;
          } while (piVar3 != (int *)0x0);
        }
        return;
      }
      return;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_7174ade4
// Entry: 0x7174ade4 | Size: 356 bytes
// =========================================================================

void FUN_7174ade4(undefined4 *param_1)

{
  int iVar1;
  undefined4 unaff_r4;
  int *piVar2;
  bool bVar3;
  
  if (0x1f < (int)((param_1[1] & 0xfffffff8) + 8)) {
    unaff_r4 = *(undefined4 *)*param_1;
  }
  if (DAT_711a3938 == 0) {
    return;
  }
  piVar2 = (int *)(DAT_711a3938 + 0x1389c);
  if (*piVar2 == 0) {
    iVar1 = FUN_713c301c(0);
    if (iVar1 == 0) {
      if (*piVar2 == 0) {
        return;
      }
    }
    else {
      thunk_MwhHq(0x3a0);
      iVar1 = FUN_715ba834();
      *piVar2 = iVar1;
    }
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
  bVar3 = *(int *)(iVar1 + 0x8c) != 0;
  if (bVar3) {
    iVar1 = *(int *)(iVar1 + 8);
  }
  if (!bVar3 || iVar1 == 0) {
    return;
  }
  iVar1 = FUN_71351810();
  if (iVar1 != 0) {
    *(undefined4 *)(DAT_70b3ef40 + 0x58) = unaff_r4;
  }
  return;
}


// =========================================================================
// Function: FUN_7174bb78
// Entry: 0x7174bb78 | Size: 140 bytes
// =========================================================================

void FUN_7174bb78(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  bool bVar6;
  
  pbVar5 = (byte *)*param_1;
  uVar3 = (param_1[1] & 0xfffffff8) + 8;
  uVar2 = 0;
  uVar4 = 0;
  uVar1 = 0;
  if (0xf < (int)uVar3) {
    uVar2 = (uint)pbVar5[1];
    uVar1 = 0x10;
    uVar4 = (uint)*pbVar5;
  }
  if ((int)(uVar1 | 8) <= (int)uVar3) {
    uVar3 = (uint)pbVar5[uVar1 >> 3];
  }
  uVar4 = uVar4 | uVar2 << 8;
  if (uVar4 >> 3 < 0x7d) {
    bVar6 = *(char *)(*(int *)(DAT_711f6d58 + 8) + uVar4) != '\0';
    if (bVar6) {
      uVar4 = *(uint *)(*(int *)(DAT_711f6d58 + 8) + uVar4 * 4 + 1000);
    }
    if (bVar6 && uVar4 != 0) {
      *(char *)(uVar4 + 0x27) = (char)uVar3;
    }
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_7174d000
// Entry: 0x7174d000 | Size: 164 bytes
// =========================================================================

void FUN_7174d000(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  
  pbVar6 = (byte *)*param_1;
  uVar2 = (param_1[1] & 0xfffffff8) + 8;
  uVar4 = 0;
  uVar1 = 0;
  uVar3 = 0;
  if (0xf < (int)uVar2) {
    uVar4 = 0x10;
  }
  if (0xf < (int)uVar2) {
    uVar3 = (uint)*pbVar6;
    uVar1 = (uint)pbVar6[1];
  }
  if ((int)(uVar4 | 8) <= (int)uVar2) {
    uVar2 = (uint)pbVar6[uVar4 >> 3];
  }
  iVar5 = *(int *)(DAT_711f6d58 + 0xac);
  if (iVar5 != 0) {
    uVar3 = uVar3 | uVar1 << 8;
    if (0xfa < uVar3 >> 2) {
      return;
    }
    if ((*(char *)(iVar5 + uVar3 + 0x3eec) != '\0') &&
       (iVar5 = *(int *)(iVar5 + uVar3 * 4 + 0x1f8c), iVar5 != 0)) {
      *(char *)(iVar5 + 2) = (char)uVar2;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_7174d0c8
// Entry: 0x7174d0c8 | Size: 1400 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x7174d2f8) */
/* WARNING: Removing unreachable block (ram,0x7174d2d0) */
/* WARNING: Removing unreachable block (ram,0x7174d2bc) */
/* WARNING: Removing unreachable block (ram,0x7174d2a0) */
/* WARNING: Removing unreachable block (ram,0x7174d27c) */
/* WARNING: Removing unreachable block (ram,0x7174d264) */
/* WARNING: Removing unreachable block (ram,0x7174d238) */
/* WARNING: Removing unreachable block (ram,0x7174d218) */
/* WARNING: Removing unreachable block (ram,0x7174d200) */
/* WARNING: Removing unreachable block (ram,0x7174d1e8) */
/* WARNING: Removing unreachable block (ram,0x7174d1c8) */
/* WARNING: Removing unreachable block (ram,0x7174d1b4) */
/* WARNING: Removing unreachable block (ram,0x7174d564) */
/* WARNING: Removing unreachable block (ram,0x7174d540) */
/* WARNING: Removing unreachable block (ram,0x7174d528) */
/* WARNING: Removing unreachable block (ram,0x7174d510) */
/* WARNING: Removing unreachable block (ram,0x7174d4f0) */
/* WARNING: Removing unreachable block (ram,0x7174d4dc) */
/* WARNING: Removing unreachable block (ram,0x7174d4b0) */
/* WARNING: Removing unreachable block (ram,0x7174d48c) */
/* WARNING: Removing unreachable block (ram,0x7174d474) */
/* WARNING: Removing unreachable block (ram,0x7174d45c) */
/* WARNING: Removing unreachable block (ram,0x7174d43c) */
/* WARNING: Removing unreachable block (ram,0x7174d428) */
/* WARNING: Removing unreachable block (ram,0x7174d3fc) */
/* WARNING: Removing unreachable block (ram,0x7174d3d8) */
/* WARNING: Removing unreachable block (ram,0x7174d3c0) */
/* WARNING: Removing unreachable block (ram,0x7174d3a8) */
/* WARNING: Removing unreachable block (ram,0x7174d388) */
/* WARNING: Removing unreachable block (ram,0x7174d374) */
/* WARNING: Removing unreachable block (ram,0x7174d380) */
/* WARNING: Removing unreachable block (ram,0x7174d398) */
/* WARNING: Removing unreachable block (ram,0x7174d3b0) */
/* WARNING: Removing unreachable block (ram,0x7174d3d0) */
/* WARNING: Removing unreachable block (ram,0x7174d3e8) */
/* WARNING: Removing unreachable block (ram,0x7174d400) */
/* WARNING: Removing unreachable block (ram,0x7174d434) */
/* WARNING: Removing unreachable block (ram,0x7174d44c) */
/* WARNING: Removing unreachable block (ram,0x7174d464) */
/* WARNING: Removing unreachable block (ram,0x7174d484) */
/* WARNING: Removing unreachable block (ram,0x7174d49c) */
/* WARNING: Removing unreachable block (ram,0x7174d4b4) */
/* WARNING: Removing unreachable block (ram,0x7174d4e8) */
/* WARNING: Removing unreachable block (ram,0x7174d500) */
/* WARNING: Removing unreachable block (ram,0x7174d518) */
/* WARNING: Removing unreachable block (ram,0x7174d538) */
/* WARNING: Removing unreachable block (ram,0x7174d550) */
/* WARNING: Removing unreachable block (ram,0x7174d568) */
/* WARNING: Removing unreachable block (ram,0x7174d1c0) */
/* WARNING: Removing unreachable block (ram,0x7174d1d8) */
/* WARNING: Removing unreachable block (ram,0x7174d1f0) */
/* WARNING: Removing unreachable block (ram,0x7174d210) */
/* WARNING: Removing unreachable block (ram,0x7174d22c) */
/* WARNING: Removing unreachable block (ram,0x7174d23c) */
/* WARNING: Removing unreachable block (ram,0x7174d274) */
/* WARNING: Removing unreachable block (ram,0x7174d290) */
/* WARNING: Removing unreachable block (ram,0x7174d2a8) */
/* WARNING: Removing unreachable block (ram,0x7174d2cc) */
/* WARNING: Removing unreachable block (ram,0x7174d2ec) */
/* WARNING: Removing unreachable block (ram,0x7174d2fc) */

void FUN_7174d0c8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  byte bStack_27;
  byte bStack_26;
  byte bStack_25;
  byte bStack_24;
  
  pcVar8 = (char *)*param_1;
  iVar10 = (param_1[1] & 0xfffffff8) + 8;
  uVar2 = 0;
  uVar1 = 0;
  if ((param_1[1] & 0xfffffff8) < 0x7ffffff8) {
    param_4 = *pcVar8;
    uVar2 = 8;
  }
  uVar9 = uVar2 | 0x10;
  if (iVar10 < (int)uVar9) {
    uVar4 = 0;
    uVar9 = uVar2;
  }
  else {
    uVar4 = (uint)(byte)pcVar8[uVar2 >> 3];
    uVar1 = (uint)(byte)pcVar8[uVar2 + 8 >> 3];
  }
  iVar3 = *(int *)(DAT_711f6d58 + 0x20);
  if ((iVar3 != 0) && (uVar4 = uVar4 | uVar1 << 8, uVar4 >> 3 < 0x7d)) {
    bVar11 = *(char *)(iVar3 + uVar4) != '\0';
    if (bVar11) {
      uVar4 = *(uint *)(iVar3 + uVar4 * 4 + 1000);
    }
    if (bVar11 && uVar4 != 0) {
      if (param_4 == '\x01') {
        iVar10 = FUN_71350bb8(*(undefined4 *)(uVar4 + 0xc));
        if (((iVar10 != 0) && (iVar10 = FUN_71351810(*(undefined4 *)(uVar4 + 8)), iVar10 != 0)) &&
           (iVar10 = *(int *)(*(int *)(DAT_711f6d58 + 0xac) + 0x1f6c), iVar10 != 0)) {
          iVar3 = FUN_71350bb8(*(undefined4 *)(*(int *)(iVar10 + 0x130) + 0x8c));
          if (iVar3 == 0) {
            return;
          }
          iVar3 = FUN_71351810(*(undefined4 *)(*(int *)(iVar10 + 0x130) + 8));
          if (iVar3 != 0) {
            FUN_715d33c8(&DAT_70081eee,*(undefined4 *)(uVar4 + 8),
                         *(undefined4 *)(*(int *)(iVar10 + 0x130) + 8));
            return;
          }
        }
        return;
      }
      if (param_4 == '\0') {
        uVar1 = uVar9 | 0x20;
        if ((int)uVar1 <= iVar10) {
          bStack_24 = pcVar8[uVar9 >> 3];
          bStack_25 = pcVar8[uVar9 + 8 >> 3];
          bStack_26 = pcVar8[uVar9 + 0x10 >> 3];
          bStack_27 = pcVar8[uVar9 + 0x18 >> 3];
          uVar1 = uVar9 | 0x40;
          uVar9 = uVar9 | 0x20;
        }
        if ((int)uVar1 <= iVar10) {
          uVar2 = uVar9 >> 3;
          uVar5 = uVar9 + 8;
          uVar6 = uVar9 + 0x10;
          uVar7 = uVar9 + 0x18;
          uVar1 = uVar9 | 0x40;
          uVar9 = uVar9 + 0x20;
          uStack_30 = CONCAT13(pcVar8[uVar7 >> 3],
                               CONCAT12(pcVar8[uVar6 >> 3],
                                        CONCAT11(pcVar8[uVar5 >> 3],pcVar8[uVar2])));
        }
        if ((int)uVar1 <= iVar10) {
          uVar2 = uVar9 >> 3;
          uVar5 = uVar9 + 8;
          uVar6 = uVar9 + 0x10;
          uVar7 = uVar9 + 0x18;
          uVar1 = uVar9 + 0x40;
          uVar9 = uVar9 + 0x20;
          uStack_34 = CONCAT13(pcVar8[uVar7 >> 3],
                               CONCAT12(pcVar8[uVar6 >> 3],
                                        CONCAT11(pcVar8[uVar5 >> 3],pcVar8[uVar2])));
        }
        if ((int)uVar1 <= iVar10) {
          uVar1 = uVar9 >> 3;
          uVar2 = uVar9 + 8;
          uVar5 = uVar9 + 0x10;
          uVar6 = uVar9 + 0x18;
          uVar9 = uVar9 + 0x20;
          uStack_38 = CONCAT13(pcVar8[uVar6 >> 3],
                               CONCAT12(pcVar8[uVar5 >> 3],
                                        CONCAT11(pcVar8[uVar2 >> 3],pcVar8[uVar1])));
        }
        FUN_7151d8c4(uVar4,(uint)bStack_27 << 0x18 | (uint)bStack_26 << 0x10 | (uint)bStack_25 << 8
                           | (uint)bStack_24,uStack_30,uStack_34,uStack_38,
                     (uint)(byte)pcVar8[uVar9 + 0x18 >> 3] << 0x18 |
                     (uint)(byte)pcVar8[uVar9 + 0x10 >> 3] << 0x10 |
                     (uint)(byte)pcVar8[uVar9 + 8 >> 3] << 8 | (uint)(byte)pcVar8[uVar9 >> 3]);
        return;
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_7174f130
// Entry: 0x7174f130 | Size: 24 bytes
// =========================================================================

void FUN_7174f130(int *param_1)

{
  (**(code **)(*param_1 + 0x7c))(param_1,0xa8,FUN_715552a0);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_7010238c,&DAT_717215b0);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_701020a4,FUN_717405d8);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_701020a8,FUN_71740744);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_701020ac,&LAB_71740e40);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_701020b0,&LAB_717430d0);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_701020b4,&LAB_71743190);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_701020b8,&LAB_7174324c);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_701020bc,FUN_71743578);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_701020c0,FUN_717436f0);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_701020c4,FUN_71743890);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_701020c8,FUN_71743bd4);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_701020cc,FUN_71743fb4);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_701020d0,&LAB_71744090);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_701020d4,FUN_717440fc);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_701020d8,FUN_71744794);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_701020dc,&DAT_71744998);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_701020e0,&LAB_71744e64);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_701020e4,&LAB_71744edc);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_701020e8,FUN_717456e4);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_701021a4,&LAB_71744f44);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_701020ec,FUN_71746788);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_701020f0,FUN_71746844);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_701020f4,FUN_71746d80);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_701020fc,FUN_71746ebc);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_70102100,&LAB_71746fc4);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_70102104,&LAB_71747294);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_70102108,FUN_71749a78);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_7010210c,&LAB_71749c50);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_70102110,&LAB_7174a46c);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_70102114,&LAB_717472d8);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_70102118,&LAB_7174731c);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_7010211c,&DAT_7174778c);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_70102120,FUN_717477a8);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_70102124,FUN_71748910);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_70102128,FUN_7174a860);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_7010212c,&LAB_7174ac10);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_70102130,FUN_7174ade4);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_70102134,FUN_7174bb78);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_70102138,&LAB_7174bc28);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_7010213c,&LAB_7174bcd4);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_70102178,&LAB_7174afa0);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_70102180,&LAB_7174b008);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_7010217c,&LAB_7174baf0);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_701020f8,&LAB_7174bf40);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_70102140,FUN_7174d000);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_70102144,FUN_7174d0c8);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_70102148,&LAB_7174bd50);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_7010214c,FUN_71749b64);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_70102150,&LAB_7174d5e8);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_70102154,&LAB_7174e1fc);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_70102158,FUN_7174a954);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_7010215c,FUN_7174a790);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_70102160,&LAB_7174da70);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_70102164,&LAB_7174a4b4);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_70102168,FUN_71744508);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_7010216c,&LAB_7174d968);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_70102170,&LAB_7174e6dc);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_70102174,&LAB_7174deb8);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_70102184,&LAB_7174dd0c);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_70102188,&LAB_7174b064);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_7010218c,&LAB_7174b19c);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_70102190,&LAB_7174b744);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_70102194,&LAB_7174b818);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_70102198,&LAB_7174b0cc);
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_7010219c,&LAB_7174b53c);
                    /* WARNING: Could not recover jumptable at 0x7174fab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x7c))(param_1,DAT_701021a0,0x7174b2fc);
  return;
}


// =========================================================================
// Function: FUN_71750c0c
// Entry: 0x71750c0c | Size: 44 bytes
// =========================================================================

void FUN_71750c0c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_71750c74
// Entry: 0x71750c74 | Size: 44 bytes
// =========================================================================

void FUN_71750c74(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_71750cdc
// Entry: 0x71750cdc | Size: 24 bytes
// =========================================================================

undefined4 FUN_71750cdc(undefined4 param_1)

{
  imp___aeabi_memclr4(param_1,0x1400);
  return param_1;
}


// =========================================================================
// Function: FUN_71750d44
// Entry: 0x71750d44 | Size: 228 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71750d44(int param_1)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *apuStack_38 [4];
  int *piStack_28;
  int iStack_1c;
  
  ppuVar1 = apuStack_38;
  iVar2 = 0;
  iStack_1c = _ext___stack_chk_guard;
  do {
    if (*(int *)(param_1 + iVar2 * 4) != 0) {
      thunk_qNQrlu();
      *(undefined4 *)(param_1 + iVar2 * 4) = 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x400);
  apuStack_38[0] = &DAT_70b0f174;
  piStack_28 = (int *)apuStack_38;
  FUN_717ccd08(DAT_712017f8,apuStack_38);
  if ((undefined **)piStack_28 == apuStack_38) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = 0x14;
    ppuVar1 = (undefined **)piStack_28;
    if (piStack_28 == (int *)0x0) goto LAB_71750e08;
  }
  (**(code **)((int)*ppuVar1 + iVar2))();
LAB_71750e08:
  if (_ext___stack_chk_guard == iStack_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail(iStack_1c);
}


// =========================================================================
// Function: FUN_71750f1c
// Entry: 0x71750f1c | Size: 64 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71750f1c(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int aiStack_40 [4];
  int *piStack_30;
  int iStack_28;
  
  piVar3 = aiStack_40;
  iStack_28 = _ext___stack_chk_guard;
  if (*(int *)(param_1 + param_2 * 4) != 0) {
    thunk_qNQrlu();
  }
  piVar2 = (int *)thunk_MwhHq(0x18);
  *(int **)(param_1 + param_2 * 4) = piVar2;
  *(undefined1 *)(param_1 + param_2 + 0x1000) = 1;
  *piVar2 = param_3;
  piVar2[1] = param_6;
  piVar2[2] = param_5;
  piVar2[3] = param_4;
  piVar2[4] = param_7;
  piVar2[5] = param_7;
  uVar1 = DAT_712017f8;
  piStack_30 = (int *)thunk_MwhHq(0x24);
  piStack_30[8] = param_7;
  piStack_30[4] = param_4;
  piStack_30[3] = param_3;
  piStack_30[5] = param_5;
  *piStack_30 = (int)&DAT_70b0f198;
  piStack_30[1] = param_2;
  piStack_30[2] = 1;
  piStack_30[6] = param_6;
  piStack_30[7] = param_7;
  FUN_717ccd08(uVar1,aiStack_40);
  if (piStack_30 == aiStack_40) {
    iVar4 = 0x10;
  }
  else {
    iVar4 = 0x14;
    piVar3 = piStack_30;
    if (piStack_30 == (int *)0x0) goto LAB_71751034;
  }
  (**(code **)(*piVar3 + iVar4))();
LAB_71751034:
  if (_ext___stack_chk_guard == iStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_7175134c
// Entry: 0x7175134c | Size: 640 bytes
// =========================================================================

void FUN_7175134c(int param_1)

{
  int iVar1;
  char *pcVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  iVar1 = FUN_71886108();
  if (499 < (uint)(iVar1 - DAT_711f6c8c)) {
    DAT_711f6c90 = ~DAT_711f6c90;
    DAT_711f6c8c = iVar1;
  }
  pcVar2 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fa458);
  if (*pcVar2 == '\0') {
    puVar6 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fa448);
    *(undefined1 *)(puVar6 + 3) = 1;
    *puVar6 = 0x1928de11;
    puVar6[1] = 0xc23c8a52;
    puVar6[2] = 0x7527d205;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71751bc4,puVar6,&DAT_70b0e000);
    puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fa458);
    *puVar7 = 1;
  }
  pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fa448);
  if (pbVar3[0xc] != 0) {
    *pbVar3 = *pbVar3 ^ 0x75;
    pbVar3[1] = pbVar3[1] ^ 0xb7;
    pbVar3[2] = pbVar3[2] ^ 0x49;
    pbVar3[3] = pbVar3[3] ^ 0x75;
    pbVar3[0xc] = 0;
    pbVar3[4] = pbVar3[4] ^ 0x3d;
    pbVar3[5] = pbVar3[5] ^ 0xed;
    pbVar3[6] = pbVar3[6] ^ 99;
    pbVar3[7] = pbVar3[7] ^ 0xad;
    pbVar3[8] = pbVar3[8] ^ 0x75;
    pbVar3[9] = pbVar3[9] ^ 0xb7;
    pbVar3[10] = pbVar3[10] ^ 0x49;
    pbVar3[0xb] = pbVar3[0xb] ^ 0x75;
  }
  uVar4 = imp_strlen(pbVar3);
  if (0xfffffff7 < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_2c);
  }
  if (uVar4 < 0xb) {
    uVar9 = (uint)&uStack_2c | 1;
    uStack_2c = CONCAT31(uStack_2c._1_3_,(char)(uVar4 << 1));
    if (uVar4 == 0) goto LAB_717514dc;
  }
  else {
    uVar9 = thunk_MwhHq((uVar4 | 7) + 1);
    uStack_2c = (uVar4 | 7) + 2;
    uStack_28 = uVar4;
    uStack_24 = uVar9;
  }
  imp___aeabi_memmove(uVar9,pbVar3,uVar4);
LAB_717514dc:
  *(undefined1 *)(uVar9 + uVar4) = 0;
  iVar1 = FUN_717c5e7c(&uStack_2c);
  if ((uStack_2c & 1) != 0) {
    thunk_qNQrlu(uStack_24);
  }
  if (iVar1 == 0) {
    iVar1 = 0;
    do {
      if (*(char *)(param_1 + iVar1 + 0x1000) != '\0') {
        iVar8 = *(int *)(param_1 + iVar1 * 4);
        iVar5 = 0x14;
        if (DAT_711f6c90 == 0) {
          iVar5 = 0x10;
        }
        FUN_7156850c(DAT_711a3938,iVar8,*(undefined4 *)(iVar8 + iVar5));
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0x400);
  }
  return;
}


// =========================================================================
// Function: FUN_71751cec
// Entry: 0x71751cec | Size: 4 bytes
// =========================================================================

void FUN_71751cec(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x71751d08 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  qNQrlu();
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x71751ef0 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_717520a8
// Entry: 0x717520a8 | Size: 4 bytes
// =========================================================================

void FUN_717520a8(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x717520c4 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_71752264
// Entry: 0x71752264 | Size: 4 bytes
// =========================================================================

void FUN_71752264(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x71752280 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_71752420
// Entry: 0x71752420 | Size: 4 bytes
// =========================================================================

void FUN_71752420(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x7175243c | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_717524cc
// Entry: 0x717524cc | Size: 1164 bytes
// =========================================================================

int FUN_717524cc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  FUN_7136cdfc(param_1 + 6);
  iVar4 = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  FUN_7136cdfc(param_1 + 0x48);
  FUN_7136cdfc(param_1 + 0x54);
  FUN_7136cdfc(param_1 + 0x7c);
  FUN_7136cdfc(param_1 + 0x8b);
  FUN_7136cdfc(param_1 + 0x97);
  FUN_7136cdfc(param_1 + 0xa3);
  FUN_7136cdfc(param_1 + 0xaf);
  FUN_7136cdfc(param_1 + 0xbb);
  FUN_7136cdfc(param_1 + 0xd4);
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  FUN_7136cdfc(param_1 + 0xf4);
  FUN_7136cdfc(param_1 + 0x100);
  FUN_7136cdfc(param_1 + 0x1e0);
  FUN_7136cdfc();
  FUN_7136cdfc();
  *(undefined4 *)(param_1 + 0x240) = 0;
  *(undefined4 *)(param_1 + 0x244) = 0;
  piVar3 = (int *)(DAT_711a3938 + 0x1389c);
  iVar1 = *piVar3;
  if (iVar1 == 0) {
    iVar1 = FUN_713c301c(0);
    if (iVar1 == 0) {
      iVar1 = *piVar3;
    }
    else {
      thunk_MwhHq(0x3a0);
      iVar1 = FUN_715ba834();
      *piVar3 = iVar1;
    }
  }
  *(undefined1 *)(param_1 + 0x136) = 0;
  *(int *)(param_1 + 0x130) = iVar1;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x134) = 0;
  *(undefined1 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 0x140) = 0;
  *(undefined1 *)(param_1 + 0x114) = 0;
  imp___aeabi_memclr4(param_1 + 0xcc,0x48);
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x1fc) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  uVar2 = FUN_71886108();
  *(undefined4 *)(param_1 + 0x144) = uVar2;
  uVar2 = FUN_71886108();
  *(undefined4 *)(param_1 + 0x150) = uVar2;
  uVar2 = FUN_71886108();
  *(undefined4 *)(param_1 + 0x148) = uVar2;
  *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_1 + 0x144);
  uVar2 = FUN_71886108();
  *(undefined4 *)(param_1 + 0x158) = uVar2;
  uVar2 = FUN_71886108();
  *(undefined4 *)(param_1 + 0x168) = uVar2;
  uVar2 = FUN_71886108();
  *(undefined4 *)(param_1 + 0x15c) = uVar2;
  uVar2 = FUN_71886108();
  *(undefined4 *)(param_1 + 0x160) = uVar2;
  uVar2 = FUN_71886108();
  *(undefined4 *)(param_1 + 0x164) = uVar2;
  *(undefined4 *)(param_1 + 0x138) = 0xffffffff;
  uVar2 = FUN_71886108();
  *(undefined4 *)(param_1 + 0x1cc) = uVar2;
  *(undefined4 *)(param_1 + 0x126) = 0xffff0000;
  *(undefined2 *)(param_1 + 0x136) = 0xff00;
  *(undefined1 *)(param_1 + 0x1fe) = 0xff;
  *(undefined1 *)(param_1 + 0x135) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x11e) = 0;
  *(undefined1 *)(param_1 + 0x11c) = 0;
  *(undefined2 *)(param_1 + 0x1fc) = 0xffff;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined1 *)(param_1 + 0x178) = 0;
  imp___aeabi_memclr4(param_1 + 0x17c,0x34);
  *(undefined4 *)(param_1 + 0x204) = 0xffff;
  *(undefined2 *)(param_1 + 0x210) = 0;
  *(undefined2 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x214) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1d4) = 0;
  *(undefined2 *)(param_1 + 0x228) = 0xffff;
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  *(undefined4 *)(param_1 + 0x224) = 0;
  uStack_30 = 0;
  FUN_7136d040(param_1 + 0x22c,&uStack_30);
  *(undefined4 *)(param_1 + 0x238) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 500) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  do {
    uVar2 = (&DAT_70b0f220)[-iVar4];
    iVar1 = FUN_71567160(DAT_711a3938,uVar2);
    if (iVar1 == 0) {
      FUN_71568138(DAT_711a3938,uVar2);
    }
    iVar4 = iVar4 + -1;
  } while (iVar4 != -0x29);
  return param_1;
}


// =========================================================================
// Function: FUN_71752b94
// Entry: 0x71752b94 | Size: 36 bytes
// =========================================================================

void FUN_71752b94(int param_1)

{
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  *(undefined2 *)(param_1 + 0x135) = 0;
  *(undefined1 *)(param_1 + 0x137) = 0xff;
  return;
}


// =========================================================================
// Function: FUN_71752bd0
// Entry: 0x71752bd0 | Size: 656 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71752bd0(int param_1,uint param_2)

{
  undefined1 uVar1;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_169 [3];
  undefined1 *puStack_166;
  undefined4 uStack_157;
  undefined1 uStack_142;
  undefined1 uStack_141;
  undefined1 uStack_140;
  undefined1 uStack_13f;
  undefined1 uStack_13e;
  undefined1 uStack_13d;
  undefined1 uStack_13c;
  undefined1 uStack_13b;
  undefined1 uStack_13a;
  undefined1 uStack_139;
  undefined1 uStack_138;
  undefined1 uStack_137;
  undefined4 uStack_40;
  char cStack_3c;
  int iStack_30;
  int iStack_2c;
  undefined1 uVar2;
  
  iStack_2c = _ext___stack_chk_guard;
  if (param_2 < 0x7d1) {
    iVar8 = 0x3e88;
    bVar9 = *(char *)(DAT_711f6d58[1] + param_2 + 0x3e88) != '\0';
    if (bVar9) {
      iVar8 = *(int *)(DAT_711f6d58[1] + param_2 * 4);
    }
    if (bVar9 && iVar8 != 0) {
      iVar3 = FUN_71602a5c(iVar8);
      uVar4 = FUN_71602ae8(iVar8);
      uVar5 = FUN_71602b74(iVar8);
      uVar6 = FUN_71602cfc(iVar8);
      uVar1 = (undefined1)uVar6;
      uVar2 = (undefined1)uVar5;
      if (*(ushort *)(param_1 + 0x1b0) == param_2) {
        if (*(int *)(param_1 + 0x1b4) == iVar3) {
          uVar7 = *(uint *)(param_1 + 0x1b8);
          bVar9 = uVar7 == uVar4;
          if (bVar9) {
            uVar7 = (uint)*(byte *)(param_1 + 0x1bc);
          }
          if ((bVar9 && uVar7 == uVar5) && (*(byte *)(param_1 + 0x1bd) == uVar6)) goto LAB_71752c24;
        }
        *(undefined1 *)(param_1 + 0x1bd) = uVar1;
        uStack_139 = (undefined1)(uVar4 >> 0x18);
        uStack_13a = (undefined1)(uVar4 >> 0x10);
        uStack_13b = (undefined1)(uVar4 >> 8);
        uStack_13d = (undefined1)((uint)iVar3 >> 0x18);
        uStack_13e = (undefined1)((uint)iVar3 >> 0x10);
        *(undefined1 *)(param_1 + 0x1bc) = uVar2;
        *(int *)(param_1 + 0x1b4) = iVar3;
        *(uint *)(param_1 + 0x1b8) = uVar4;
        uStack_157 = 0x60;
        uStack_13f = (undefined1)((uint)iVar3 >> 8);
        cStack_3c = '\x01';
        puStack_166 = &uStack_142;
        iStack_30 = 0x800;
        uStack_141 = (undefined1)(param_2 >> 8);
        uStack_13c = (undefined1)uVar4;
        uStack_140 = (undefined1)iVar3;
        uStack_40 = 0;
        uStack_142 = (undefined1)param_2;
        uStack_138 = uVar2;
        uStack_137 = uVar1;
        (**(code **)(*(int *)*DAT_711f6d58 + 0xec))
                  ((int *)*DAT_711f6d58,&DAT_701021d8,auStack_169,1,9,0,0,0xffffffff,0xffff,0xffff,0
                  );
        if ((cStack_3c != '\0') && (0x800 < iStack_30)) {
          imp_free(puStack_166);
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x1bd) = uVar1;
        *(undefined1 *)(param_1 + 0x1bc) = uVar2;
        *(int *)(param_1 + 0x1b4) = iVar3;
        *(uint *)(param_1 + 0x1b8) = uVar4;
        *(ushort *)(param_1 + 0x1b0) = (ushort)param_2;
      }
    }
  }
LAB_71752c24:
  if (_ext___stack_chk_guard == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_71752f14
// Entry: 0x71752f14 | Size: 464 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71752f14(int param_1,uint param_2)

{
  char cVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  ushort *puVar5;
  bool bVar6;
  undefined1 auStack_151 [3];
  undefined1 *puStack_14e;
  undefined4 uStack_13f;
  undefined1 uStack_12a;
  undefined1 uStack_129;
  byte bStack_128;
  char cStack_127;
  undefined4 uStack_28;
  char cStack_24;
  int iStack_18;
  int iStack_14;
  
  puVar3 = DAT_711f6d58;
  iStack_14 = _ext___stack_chk_guard;
  if (param_2 < 0x7d1) {
    iVar4 = DAT_711f6d58[1];
    bVar6 = *(char *)(iVar4 + param_2 + 0x3e88) != '\0';
    if (bVar6) {
      iVar4 = *(int *)(iVar4 + param_2 * 4);
    }
    if (bVar6 && iVar4 != 0) {
      puVar5 = (ushort *)(param_1 + 0x1c0);
      if (*puVar5 == param_2) {
        if ((*(char *)(param_1 + 0x1c2) != *(char *)(iVar4 + 0x734)) ||
           (*(char *)(param_1 + 0x1c3) != *(char *)(iVar4 + 0x758))) {
          *puVar5 = (ushort)param_2;
          cVar1 = *(char *)(iVar4 + 0x734);
          *(char *)(param_1 + 0x1c2) = cVar1;
          bVar2 = *(byte *)(iVar4 + 0x758);
          *(byte *)(param_1 + 0x1c3) = bVar2;
          uStack_12a = (undefined1)param_2;
          cStack_127 = bVar2 << 7;
          bStack_128 = cVar1 << 7 | bVar2 >> 1;
          uStack_129 = (undefined1)(param_2 >> 8);
          cStack_24 = '\x01';
          puStack_14e = &uStack_12a;
          iStack_18 = 0x800;
          uStack_28 = 0;
          uStack_13f = 0x19;
          (**(code **)(*(int *)*puVar3 + 0x94))
                    ((int *)*puVar3,3,auStack_151,1,8,0,0,0xffffffff,0xffff,0xffff,0,0);
          if ((cStack_24 != '\0') && (0x800 < iStack_18)) {
            imp_free(puStack_14e);
          }
        }
      }
      else {
        *puVar5 = (ushort)param_2;
        *(undefined1 *)(param_1 + 0x1c2) = *(undefined1 *)(iVar4 + 0x734);
        *(undefined1 *)(param_1 + 0x1c3) = *(undefined1 *)(iVar4 + 0x758);
      }
    }
  }
  if (_ext___stack_chk_guard != iStack_14) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail();
  }
  return;
}


// =========================================================================
// Function: FUN_7175314c
// Entry: 0x7175314c | Size: 428 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7175314c(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined1 auStack_159 [3];
  undefined1 *puStack_156;
  undefined4 uStack_147;
  undefined1 uStack_132;
  undefined1 uStack_131;
  undefined1 uStack_130;
  undefined4 uStack_30;
  char cStack_2c;
  int iStack_20;
  int iStack_1c;
  
  iStack_1c = _ext___stack_chk_guard;
  uVar3 = DAT_711f6d58[1];
  iVar1 = thunk_FUN_715bf66c(*(undefined4 *)(param_1 + 0x130));
  if (iVar1 == 0) {
    uVar3 = FUN_717b94a8(uVar3);
    uVar2 = (undefined1)((uint)uVar3 >> 0x10);
  }
  else {
    uVar2 = 0xff;
    uVar3 = 0xffff;
  }
  *(undefined1 *)(param_1 + 0x1fa) = uVar2;
  *(short *)(param_1 + 0x1f8) = (short)uVar3;
  iVar1 = *(int *)(param_1 + 0x1f8);
  if (iVar1 != *(int *)(param_1 + 0x1fc)) {
    uStack_132 = (undefined1)iVar1;
    iStack_20 = 0x800;
    cStack_2c = '\x01';
    uStack_147 = 0x18;
    puStack_156 = &uStack_132;
    uStack_131 = (undefined1)((uint)iVar1 >> 8);
    uStack_30 = 0;
    uStack_130 = (undefined1)((uint)iVar1 >> 0x10);
    (**(code **)(*(int *)*DAT_711f6d58 + 0x94))
              ((int *)*DAT_711f6d58,10,auStack_159,1,8,0,0,0xffffffff,0xffff,0xffff,0,0);
    *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(param_1 + 0x1f8);
    if ((cStack_2c != '\0') && (0x800 < iStack_20)) {
      imp_free(puStack_156);
    }
  }
  if (_ext___stack_chk_guard != iStack_1c) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail();
  }
  return;
}


// =========================================================================
// Function: FUN_71753380
// Entry: 0x71753380 | Size: 1552 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71753380(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_169 [3];
  undefined1 *puStack_166;
  uint uStack_157;
  undefined1 auStack_142 [258];
  undefined4 uStack_40;
  char cStack_3c;
  uint uStack_30;
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  uStack_30 = 0x800;
  uStack_157 = 0;
  uStack_40 = 0;
  cStack_3c = '\x01';
  puStack_166 = auStack_142;
  uVar2 = thunk_FUN_71568340(DAT_711a3938);
  iVar3 = thunk_FUN_715c04ec(*(undefined4 *)(param_1 + 0x130));
  uVar6 = uStack_30;
  uVar8 = *(uint *)(iVar3 + 0xc);
  uVar5 = uStack_157 + 8;
  if ((-8 < (int)uStack_157) && ((int)(uStack_30 - 1) >> 3 < (int)(uStack_157 + 7 >> 3))) {
    uVar4 = uVar5 * 2;
    iVar3 = uVar5 * 2;
    if (puStack_166 == auStack_142) {
      bVar1 = 0x400 < uVar5;
      uVar5 = uVar4;
      if (bVar1) {
        puStack_166 = (undefined1 *)imp_malloc(iVar3 + 7U >> 3);
        imp___aeabi_memcpy(puStack_166,auStack_142,(int)(uVar6 + 7) >> 3);
      }
    }
    else {
      puStack_166 = (undefined1 *)imp_realloc();
      uVar5 = uVar4;
      uVar6 = uStack_30;
    }
  }
  if ((int)uVar6 < (int)uVar5) {
    uStack_30 = uVar5;
  }
  uVar6 = uStack_30;
  uVar5 = uStack_157 & 7;
  iVar3 = (int)uStack_157 >> 3;
  if (uVar5 == 0) {
    puStack_166[iVar3] = 0xcd;
  }
  else {
    puStack_166[iVar3] = puStack_166[iVar3] | (byte)(0xcd >> uVar5);
    puStack_166[iVar3 + 1] = (char)(0xcd << (8 - uVar5 & 0xff));
  }
  uVar5 = uStack_157 + 0x28;
  uVar4 = uStack_157 + 8;
  if ((-0x28 < (int)uStack_157) && ((int)(uStack_30 - 1) >> 3 < (int)(uStack_157 + 0x27 >> 3))) {
    uVar7 = uVar5 * 2;
    iVar3 = uVar5 * 2;
    uStack_157 = uVar4;
    if (puStack_166 == auStack_142) {
      bVar1 = 0x400 < uVar5;
      uVar5 = uVar7;
      if (bVar1) {
        puStack_166 = (undefined1 *)imp_malloc(iVar3 + 7U >> 3);
        imp___aeabi_memcpy(puStack_166,auStack_142,(int)(uVar6 + 7) >> 3);
        uVar4 = uStack_157;
      }
    }
    else {
      puStack_166 = (undefined1 *)imp_realloc();
      uVar5 = uVar7;
      uVar6 = uStack_30;
      uVar4 = uStack_157;
    }
  }
  uStack_157 = uVar4;
  uVar4 = uStack_157;
  if ((int)uVar6 < (int)uVar5) {
    uStack_30 = uVar5;
  }
  uVar6 = uStack_30;
  uVar5 = uStack_157 & 7;
  iVar3 = (int)uStack_157 >> 3;
  if (uVar5 == 0) {
    puStack_166[iVar3] = (char)uVar2;
    puStack_166[(int)(uStack_157 + 8) >> 3] = (char)(uVar2 >> 8);
    puStack_166[(int)(uStack_157 + 0x10) >> 3] = (char)(uVar2 >> 0x10);
    puStack_166[(int)(uStack_157 + 0x18) >> 3] = (char)(uVar2 >> 0x18);
  }
  else {
    puStack_166[iVar3] = puStack_166[iVar3] | (byte)((uVar2 & 0xff) >> uVar5);
    uVar7 = 8 - uVar5;
    puStack_166[iVar3 + 1] = (char)(uVar2 << (uVar7 & 0xff));
    iVar3 = (int)(uStack_157 + 8) >> 3;
    puStack_166[iVar3] = puStack_166[iVar3] | (byte)((uVar2 >> 8 & 0xff) >> uVar5);
    puStack_166[iVar3 + 1] = (char)((uVar2 >> 8) << (uVar7 & 0xff));
    iVar3 = (int)(uStack_157 + 0x10) >> 3;
    puStack_166[iVar3] = puStack_166[iVar3] | (byte)((uVar2 >> 0x10 & 0xff) >> uVar5);
    puStack_166[iVar3 + 1] = (char)((uVar2 >> 0x10) << (uVar7 & 0xff));
    iVar3 = (int)(uStack_157 + 0x18) >> 3;
    puStack_166[iVar3] = puStack_166[iVar3] | (byte)((uVar2 >> 0x18) >> uVar5);
    puStack_166[iVar3 + 1] = (char)((uVar2 >> 0x18) << (uVar7 & 0xff));
  }
  uStack_157 = uStack_157 + 0x18;
  uVar5 = uVar4 + 0x40;
  uVar2 = uVar4 + 0x20;
  bVar1 = -0x28 < (int)uStack_157;
  uStack_157 = uVar2;
  if ((bVar1) && ((int)(uStack_30 - 1) >> 3 < (int)(uVar4 + 0x3f >> 3))) {
    uVar2 = uVar5 * 2;
    iVar3 = uVar5 * 2;
    if (puStack_166 == auStack_142) {
      bVar1 = 0x400 < uVar5;
      uVar5 = uVar2;
      if (bVar1) {
        puStack_166 = (undefined1 *)imp_malloc(iVar3 + 7U >> 3);
        imp___aeabi_memcpy(puStack_166,auStack_142,(int)(uVar6 + 7) >> 3);
      }
    }
    else {
      puStack_166 = (undefined1 *)imp_realloc();
      uVar5 = uVar2;
      uVar6 = uStack_30;
    }
  }
  if ((int)uVar6 < (int)uVar5) {
    uStack_30 = uVar5;
  }
  uVar6 = uStack_157 & 7;
  iVar3 = (int)uStack_157 >> 3;
  if (uVar6 == 0) {
    puStack_166[iVar3] = (char)uVar8;
    puStack_166[(int)(uStack_157 + 8) >> 3] = (char)(uVar8 >> 8);
    puStack_166[(int)(uStack_157 + 0x10) >> 3] = (char)(uVar8 >> 0x10);
    puStack_166[(int)(uStack_157 + 0x18) >> 3] = (char)(uVar8 >> 0x18);
  }
  else {
    puStack_166[iVar3] = puStack_166[iVar3] | (byte)((uVar8 & 0xff) >> uVar6);
    uVar5 = 8 - uVar6;
    puStack_166[iVar3 + 1] = (char)(uVar8 << (uVar5 & 0xff));
    iVar3 = (int)(uStack_157 + 8) >> 3;
    puStack_166[iVar3] = puStack_166[iVar3] | (byte)((uVar8 >> 8 & 0xff) >> uVar6);
    puStack_166[iVar3 + 1] = (char)((uVar8 >> 8) << (uVar5 & 0xff));
    iVar3 = (int)(uStack_157 + 0x10) >> 3;
    puStack_166[iVar3] = puStack_166[iVar3] | (byte)((uVar8 >> 0x10 & 0xff) >> uVar6);
    puStack_166[iVar3 + 1] = (char)((uVar8 >> 0x10) << (uVar5 & 0xff));
    iVar3 = (int)(uStack_157 + 0x18) >> 3;
    puStack_166[iVar3] = puStack_166[iVar3] | (byte)((uVar8 >> 0x18) >> uVar6);
    puStack_166[iVar3 + 1] = (char)((uVar8 >> 0x18) << (uVar5 & 0xff));
  }
  uStack_157 = uStack_157 + 0x20;
  (**(code **)(*(int *)*DAT_711f6d58 + 0x3c))((int *)*DAT_711f6d58,auStack_169,1,6,0);
  if ((cStack_3c != '\0') && (0x800 < (int)uStack_30)) {
    imp_free(puStack_166);
  }
  if (_ext___stack_chk_guard == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_71753abc
// Entry: 0x71753abc | Size: 1240 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71753abc(int param_1)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined1 auStack_169 [3];
  undefined1 *puStack_166;
  uint uStack_157;
  undefined1 auStack_142 [258];
  undefined4 uStack_40;
  char cStack_3c;
  uint uStack_30;
  int iStack_2c;
  
  iVar13 = param_1 + 0x16c;
  bVar1 = false;
  iStack_2c = _ext___stack_chk_guard;
  iVar4 = *(int *)(param_1 + 0x130);
  iVar7 = 0;
  do {
    while( true ) {
      iVar11 = *(int *)(iVar4 + 0x8c);
      uVar9 = *(uint *)(iVar11 + iVar7 * 0x1c + 0x5a4);
      if (uVar9 != *(byte *)(iVar13 + iVar7)) {
        *(char *)(iVar13 + iVar7) = (char)uVar9;
        bVar1 = true;
        iVar11 = *(int *)(iVar4 + 0x8c);
      }
      iVar11 = *(int *)(iVar11 + iVar7 * 0x1c + 0x5b0);
      if (*(int *)(param_1 + 0x17c + iVar7 * 4) == iVar11) break;
      iVar10 = iVar7 + 1;
      *(int *)(param_1 + 0x17c + iVar7 * 4) = iVar11;
      bVar1 = true;
      iVar7 = iVar10;
      if (iVar10 == 0xd) goto LAB_71753b6c;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 != 0xd);
  if (bVar1) {
LAB_71753b6c:
    uStack_30 = 0x800;
    cStack_3c = '\x01';
    uVar9 = 0;
    auStack_142[0] = 0xcc;
    uStack_40 = 0;
    uStack_157 = 8;
    puStack_166 = auStack_142;
    do {
      uVar6 = uStack_30;
      uVar8 = uStack_157 + 8;
      if ((-8 < (int)uStack_157) && ((int)(uStack_30 - 1) >> 3 < (int)(uStack_157 + 7 >> 3))) {
        iVar7 = uVar8 * 2;
        uVar5 = uVar8 * 2;
        if (puStack_166 == auStack_142) {
          bVar1 = 0x400 < uVar8;
          uVar8 = uVar5;
          if (bVar1) {
            puStack_166 = (undefined1 *)imp_malloc(iVar7 + 7U >> 3);
            imp___aeabi_memcpy(puStack_166,auStack_142,(int)(uVar6 + 7) >> 3);
          }
        }
        else {
          puStack_166 = (undefined1 *)imp_realloc();
          uVar6 = uStack_30;
          uVar8 = uVar5;
        }
      }
      if ((int)uVar6 < (int)uVar8) {
        uStack_30 = uVar8;
      }
      uVar6 = uStack_30;
      uVar8 = uStack_157 & 7;
      iVar7 = (int)uStack_157 >> 3;
      if (uVar8 == 0) {
        puStack_166[iVar7] = (char)uVar9;
      }
      else {
        puStack_166[iVar7] = puStack_166[iVar7] | (byte)(uVar9 >> uVar8);
        puStack_166[iVar7 + 1] = (char)(uVar9 << (8 - uVar8 & 0xff));
      }
      bVar3 = *(byte *)(iVar13 + uVar9);
      uVar8 = uStack_157 + 0x10;
      uVar5 = uStack_157 + 8;
      if ((-0x10 < (int)uStack_157) && ((int)(uStack_30 - 1) >> 3 < (int)(uStack_157 + 0xf >> 3))) {
        iVar7 = uVar8 * 2;
        uVar12 = uVar8 * 2;
        uStack_157 = uVar5;
        if (puStack_166 == auStack_142) {
          bVar1 = 0x400 < uVar8;
          uVar8 = uVar12;
          if (bVar1) {
            puStack_166 = (undefined1 *)imp_malloc(iVar7 + 7U >> 3);
            imp___aeabi_memcpy(puStack_166,auStack_142,(int)(uVar6 + 7) >> 3);
            uVar5 = uStack_157;
          }
        }
        else {
          puStack_166 = (undefined1 *)imp_realloc();
          uVar6 = uStack_30;
          uVar8 = uVar12;
          uVar5 = uStack_157;
        }
      }
      uStack_157 = uVar5;
      if ((int)uVar6 < (int)uVar8) {
        uStack_30 = uVar8;
      }
      uVar6 = uStack_30;
      uVar8 = uStack_157 & 7;
      iVar7 = (int)uStack_157 >> 3;
      if (uVar8 == 0) {
        puStack_166[iVar7] = bVar3;
      }
      else {
        puStack_166[iVar7] = puStack_166[iVar7] | bVar3 >> uVar8;
        puStack_166[iVar7 + 1] = bVar3 << (8 - uVar8 & 0xff);
      }
      uVar5 = uStack_157 + 8;
      uVar8 = uStack_157 + 0x18;
      uVar12 = *(uint *)(iVar13 + uVar9 * 4 + 0x10);
      if ((-0x18 < (int)uStack_157) && ((int)(uStack_30 - 1) >> 3 < (int)(uStack_157 + 0x17 >> 3)))
      {
        iVar7 = uVar8 * 2;
        uVar2 = uVar8 * 2;
        uStack_157 = uVar5;
        if (puStack_166 == auStack_142) {
          bVar1 = 0x400 < uVar8;
          uVar8 = uVar2;
          if (bVar1) {
            puStack_166 = (undefined1 *)imp_malloc(iVar7 + 7U >> 3);
            imp___aeabi_memcpy(puStack_166,auStack_142,(int)(uVar6 + 7) >> 3);
            uVar5 = uStack_157;
          }
        }
        else {
          puStack_166 = (undefined1 *)imp_realloc();
          uVar6 = uStack_30;
          uVar8 = uVar2;
          uVar5 = uStack_157;
        }
      }
      uStack_157 = uVar5;
      if ((int)uVar6 < (int)uVar8) {
        uStack_30 = uVar8;
      }
      uVar6 = uStack_157 & 7;
      iVar7 = (int)uStack_157 >> 3;
      if (uVar6 == 0) {
        puStack_166[iVar7] = (char)uVar12;
        puStack_166[(int)(uStack_157 + 8) >> 3] = (char)(uVar12 >> 8);
      }
      else {
        puStack_166[iVar7] = puStack_166[iVar7] | (byte)((uVar12 & 0xff) >> uVar6);
        puStack_166[iVar7 + 1] = (char)(uVar12 << (8 - uVar6 & 0xff));
        iVar7 = (int)(uStack_157 + 8) >> 3;
        puStack_166[iVar7] = puStack_166[iVar7] | (byte)((uVar12 >> 8 & 0xff) >> uVar6);
        puStack_166[iVar7 + 1] = (char)((uVar12 >> 8) << (8 - uVar6 & 0xff));
      }
      uVar9 = uVar9 + 1;
      uStack_157 = uStack_157 + 0x10;
    } while (uVar9 != 0xd);
    (**(code **)(*(int *)*DAT_711f6d58 + 0x3c))((int *)*DAT_711f6d58,auStack_169,1,6,0);
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
// Function: FUN_71754094
// Entry: 0x71754094 | Size: 24 bytes
// =========================================================================

void FUN_71754094(int param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  iVar1 = FUN_715c6fb8(*(undefined4 *)(param_1 + 0x130));
  if (iVar1 == 0) {
    FUN_7151fd48(DAT_711a380c,DAT_711a3810);
    uVar2 = FUN_7151f998();
    iVar1 = FUN_71ba17bc(DAT_700c36bc);
    uVar2 = uVar2 | iVar1 << 0x10 | 0x80000000;
  }
  else {
    uVar2 = FUN_7151fa44();
    if (uVar2 == 0) {
      bVar3 = *(int *)(param_1 + 0x1d0) != 0;
      iVar1 = 0;
      if (bVar3) {
        iVar1 = *(int *)(param_1 + 0x1d4);
      }
      if (bVar3 && iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x1d0) = 0;
      }
      return;
    }
  }
  *(uint *)(param_1 + 0x1d0) = uVar2;
  *(undefined4 *)(param_1 + 0x1d4) = 0;
  return;
}


// =========================================================================
// Function: FUN_71754250
// Entry: 0x71754250 | Size: 24 bytes
// =========================================================================

void FUN_71754250(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_71886108();
  iVar4 = thunk_FUN_715ccc94(*(undefined4 *)(param_1 + 0x130));
  if ((iVar4 != 0) &&
     ((FUN_715ccf08(*(undefined4 *)(param_1 + 0x130)), (char)DAT_711f5180 != '\0' ||
      (iVar4 = thunk_FUN_715bf66c(*(undefined4 *)(param_1 + 0x130)), iVar4 != 0)))) {
    FUN_715cce10(*(undefined4 *)(param_1 + 0x130));
  }
  iVar4 = FUN_715d07a0(*(undefined4 *)(param_1 + 0x130));
  if (iVar4 != 0) {
    FUN_715d07f8(*(undefined4 *)(param_1 + 0x130));
  }
  iVar4 = FUN_715d0c0c(*(undefined4 *)(param_1 + 0x130));
  if (iVar4 != 0) {
    FUN_715d0c64(*(undefined4 *)(param_1 + 0x130));
  }
  iVar4 = FUN_715ccacc(*(undefined4 *)(param_1 + 0x130));
  cVar1 = '\0';
  if (iVar4 != 0) {
    cVar1 = (char)DAT_711f5180;
  }
  if (iVar4 != 0 && cVar1 != '\0') {
    FUN_715c4e30(*(undefined4 *)(param_1 + 0x130),1);
  }
  iVar4 = FUN_715cd984(*(undefined4 *)(param_1 + 0x130));
  if ((iVar4 != 0) &&
     (((char)DAT_711f5180 != '\0' ||
      (iVar4 = thunk_FUN_715bf66c(*(undefined4 *)(param_1 + 0x130)), iVar4 != 0)))) {
    FUN_715ce310(*(undefined4 *)(param_1 + 0x130));
  }
  iVar4 = FUN_715ce49c(*(undefined4 *)(param_1 + 0x130));
  if (iVar4 != 0) {
    if (((char)DAT_711f5180 == '\0') &&
       (iVar4 = thunk_FUN_715bf66c(*(undefined4 *)(param_1 + 0x130)), iVar4 == 0)) {
      FUN_715ce508(*(undefined4 *)(param_1 + 0x130));
    }
    else {
      FUN_715cfddc(*(undefined4 *)(param_1 + 0x130));
    }
  }
  iVar3 = *(int *)(param_1 + 0x130);
  iVar2 = FUN_71350bb8(*(undefined4 *)(iVar3 + 0x8c));
  iVar4 = 0;
  if (iVar2 != 0) {
    iVar4 = *(int *)(iVar3 + 0x100);
  }
  if (iVar2 == 0 || iVar4 == 0) {
    return;
  }
  iVar4 = FUN_71886108();
  if ((uint)(iVar4 - DAT_711a3d74) < 0x1f) {
    return;
  }
  DAT_711a3d74 = FUN_71886108();
  *(int *)(iVar3 + 0x100) = *(int *)(iVar3 + 0x100) + -1;
  return;
}


// =========================================================================
// Function: FUN_71754600
// Entry: 0x71754600 | Size: 7136 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71754600(undefined2 *param_1)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  undefined2 uVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  undefined4 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  short *psVar15;
  uint extraout_r1;
  uint extraout_r2;
  int iVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int *piVar19;
  uint uVar20;
  undefined4 uVar21;
  uint uVar22;
  undefined1 uVar23;
  bool bVar24;
  undefined1 auStack_16e [2];
  byte bStack_16c;
  undefined2 uStack_16b;
  byte *pbStack_169;
  undefined1 uStack_165;
  uint uStack_164;
  undefined4 uStack_15a;
  byte abStack_145 [258];
  undefined4 uStack_43;
  char cStack_3f;
  int iStack_33;
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  FUN_716e71a0();
  pbVar12 = &bStack_16c;
  FUN_7171fdf0();
  if (*(int *)(param_1 + 0x98) == 0) goto LAB_717547c4;
  FUN_7171fcf4(*(undefined4 *)(*(int *)(param_1 + 0x98) + 0x8c));
  iVar16 = *(int *)(param_1 + 0x98);
  if (iVar16 == 0) goto LAB_717547c4;
  iVar7 = FUN_71ba2c9c(*(undefined4 *)(iVar16 + 0x398),*(undefined4 *)(iVar16 + 0x39c),0,0);
  if (iVar7 == 0) goto LAB_717547c4;
  if (*(char *)(param_1 + 0x95) == '\0') goto LAB_717547b8;
  pcVar8 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fa47c);
  if (*pcVar8 == '\0') goto LAB_71755634;
  do {
    iVar16 = XcxSszXLPjQrEGhecEv_(&DAT_700fa46c);
    if (*(char *)(iVar16 + 0x16) != '\0') {
      uVar9 = 0;
      uVar22 = 0;
      do {
        iVar7 = (uVar9 & 7) * 8;
        uVar20 = iVar7 - 0x20;
        bVar3 = (byte)(0xbb51b11b >> iVar7) | (byte)(-0x22c01 << ((uVar9 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar20) {
          bVar3 = (byte)(0xfffdd3ff >> (uVar20 & 0xff));
        }
        *(byte *)(iVar16 + uVar9) = *(byte *)(iVar16 + uVar9) ^ bVar3;
        bVar24 = 0xfffffffe < uVar9;
        bVar1 = uVar22 == 0;
        bVar2 = (0x14 < uVar9) <= uVar22;
        uVar9 = uVar9 + 1;
        uVar22 = uVar22 + bVar24;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar16 + 0x16) = 0;
    }
    uVar9 = imp_strlen(iVar16);
    if (0xfffffff7 < uVar9) goto LAB_71755750;
    if (uVar9 < 0xb) {
      uVar22 = (uint)pbVar12 | 1;
      bStack_16c = (byte)(uVar9 << 1);
      if (uVar9 != 0) goto LAB_71754774;
    }
    else {
      uVar22 = thunk_MwhHq((uVar9 | 7) + 1);
      iVar7 = (uVar9 | 7) + 2;
      uStack_165 = (undefined1)(uVar9 >> 0x18);
      bStack_16c = (byte)iVar7;
      uStack_16b = (undefined2)((uint)iVar7 >> 8);
      pbStack_169._0_1_ = (undefined1)((uint)iVar7 >> 0x18);
      pbStack_169 = (byte *)CONCAT31((int3)uVar9,pbStack_169._0_1_);
      uStack_164 = uVar22;
LAB_71754774:
      imp___aeabi_memmove(uVar22,iVar16,uVar9);
    }
    *(undefined1 *)(uVar22 + uVar9) = 0;
    iVar16 = FUN_717c5e7c(&bStack_16c);
    if ((bStack_16c & 1) != 0) {
      qNQrlu(uStack_164);
    }
    if (iVar16 != 2) {
      iVar16 = *(int *)(param_1 + 0x98);
LAB_717547b8:
      *(undefined4 *)(iVar16 + 0x398) = 0;
      *(undefined4 *)(iVar16 + 0x39c) = 0;
    }
LAB_717547c4:
    iVar7 = FUN_71886108();
    iVar16 = 0;
    if (*(char *)(param_1 + 0x95) != '\0') {
      iVar16 = *(int *)(param_1 + 0x98);
    }
    if (*(char *)(param_1 + 0x95) == '\0' || iVar16 == 0) {
      uVar17 = *(undefined4 *)(param_1 + 0x8c);
      uVar10 = thunk_FUN_71566860();
      FUN_714e7bb0(0x469c4000,0x469c4000,0x469c4000,uVar17,uVar10,
                   *(undefined2 *)(DAT_711f6d58[0x2b] + 0x1f68));
      goto LAB_7175481c;
    }
    psVar15 = param_1 + 0x93;
    if ((*(char *)(param_1 + 0x9a) == '\0') &&
       ((iVar16 = thunk_FUN_715c4e0c(), iVar16 == 0x36 ||
        (iVar16 = thunk_FUN_715c8334(*(undefined4 *)(param_1 + 0x98)), iVar16 != 0)))) {
      if (DAT_711f29fc != '\0') {
        FUN_716abc60(0);
      }
      if (*(char *)(param_1 + 0x8e) != '\0') {
        FUN_7175be7c(param_1);
      }
      *(undefined1 *)(param_1 + 0x92) = 0;
      *(undefined1 *)(param_1 + 0x8f) = 0;
      *(undefined1 *)(param_1 + 0x8e) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
      FUN_715bf554(*(undefined4 *)(param_1 + 0x98));
      iVar16 = thunk_FUN_715ccc94(*(undefined4 *)(param_1 + 0x98));
      if (iVar16 != 0) {
        FUN_715cce10(*(undefined4 *)(param_1 + 0x98));
      }
      iVar16 = FUN_715d04ac(*(undefined4 *)(param_1 + 0x98));
      if (iVar16 != 0) {
        FUN_715d03bc(*(undefined4 *)(param_1 + 0x98),0);
      }
      iVar16 = FUN_715cd984(*(undefined4 *)(param_1 + 0x98));
      if (iVar16 != 0) {
        FUN_715ce310(*(undefined4 *)(param_1 + 0x98));
      }
      iVar16 = FUN_715ce49c(*(undefined4 *)(param_1 + 0x98));
      if (iVar16 != 0) {
        FUN_715cfddc(*(undefined4 *)(param_1 + 0x98));
      }
      FUN_715c4e30(*(undefined4 *)(param_1 + 0x98),1);
      iVar16 = thunk_FUN_715bf66c(*(undefined4 *)(param_1 + 0x98));
      if ((iVar16 != 0) &&
         (iVar16 = thunk_FUN_715c3f6c(*(undefined4 *)(param_1 + 0x98)), iVar16 == 0)) {
        FUN_71756dac(param_1);
        uVar17 = DAT_711f6d58[1];
        uVar10 = thunk_FUN_715c4004(*(undefined4 *)(param_1 + 0x98));
        uVar4 = FUN_717b92b8(uVar17,uVar10);
        param_1[0x94] = uVar4;
      }
      thunk_FUN_715c4104(*(undefined4 *)(param_1 + 0x98),0);
      FUN_715c1538(*(undefined4 *)(param_1 + 0x98));
      FUN_717584f8(param_1);
      *(undefined1 *)(param_1 + 0x9a) = 1;
      *(undefined1 *)(param_1 + 0x95) = 0;
      uVar17 = *(undefined4 *)(param_1 + 0x8c);
      uVar10 = thunk_FUN_71566860();
      FUN_714e7bb0(0x469c4000,0x469c4000,0x469c4000,uVar17,uVar10,
                   *(undefined2 *)(DAT_711f6d58[0x2b] + 0x1f68));
      goto LAB_71754eb4;
    }
    FUN_71754250(param_1);
    FUN_71754094(param_1);
    FUN_717589a4(param_1);
    thunk_FUN_715600f0(*(undefined4 *)(param_1 + 0x98),&bStack_16c);
    uVar21 = *(undefined4 *)(pbVar12 + 0x30);
    iVar16 = *(int *)(pbVar12 + 0x34);
    uVar18 = *(undefined4 *)(param_1 + 0x8c);
    uVar17 = *(undefined4 *)(pbVar12 + 0x38);
    uVar10 = thunk_FUN_71566860();
    FUN_714e7bb0(uVar21,iVar16,uVar17,uVar18,uVar10,*(undefined2 *)(DAT_711f6d58[0x2b] + 0x1f68));
    if (DAT_711f6c91 != '\0') {
      iVar6 = *(int *)(param_1 + 0x98);
      uVar9 = extraout_r1;
      if (iVar6 != 0) {
        uVar9 = (uint)*(byte *)(param_1 + 0x95);
      }
      if (iVar6 != 0 && uVar9 != 0) {
        thunk_FUN_715c4240(iVar6,0x3f800000);
      }
    }
    if (*(char *)(param_1 + 0x95) == '\0') goto LAB_717549cc;
    iVar6 = *(int *)(param_1 + 0x98);
    if (iVar6 != 0) {
      iVar16 = *(int *)(iVar6 + 0x8c);
    }
    if (iVar6 == 0 || iVar16 == 0) goto LAB_717549cc;
    uVar10 = *(undefined4 *)(iVar16 + 0x564);
    iVar6 = FUN_71ba2d70(uVar10,0x40f00000);
    if (iVar6 != 0) {
      uVar10 = 0x40f00000;
    }
    *(undefined4 *)(iVar16 + 0x564) = uVar10;
    iVar6 = *(int *)(DAT_70ffc974 + 0xc);
    if (0x77 < iVar6) {
      iVar6 = 0x78;
    }
    *(int *)(DAT_70ffc974 + 0xc) = iVar6;
    uVar10 = DAT_700c807c;
    iVar6 = FUN_71ba2d10(DAT_700c807c,0x42700000);
    if (iVar6 != 0) {
      uVar10 = 0x42700000;
    }
    iVar6 = FUN_71ba2d70(uVar10,0x42f00000);
    if (iVar6 != 0) {
      uVar10 = 0x42f00000;
    }
    uVar17 = *(undefined4 *)(iVar16 + 0x90);
    DAT_700c807c = uVar10;
    iVar6 = FUN_71ba2d10(uVar17,0x428b0000);
    if (((iVar6 != 0) || (iVar6 = FUN_71ba2d70(uVar17,0x428d0000), iVar6 != 0)) &&
       (*(undefined4 *)(iVar16 + 0x90) = 0x428c0000, *(char *)(DAT_711a3938 + 0xe) != '\0')) {
      pbVar12 = (byte *)0x0;
      software_interrupt(0);
      imp___aeabi_memcpy(0,&DAT_700850e0,0x3c,0x22);
      do {
        *pbVar12 = *pbVar12 ^ 0x50;
        pbVar12 = pbVar12 + 1;
      } while (pbVar12 != (byte *)0x3c);
      uRam00000000 = 0xe3b00020;
      _LAB_00000004 = 0xe3b01000;
      FUN_719344e4(0,0x3c,0);
      (*(code *)0x0)();
LAB_717557f8:
      pbVar12 = (byte *)0x0;
      software_interrupt(0);
      imp___aeabi_memcpy(0,&DAT_700850e0,0x3c,0x22);
      do {
        *pbVar12 = *pbVar12 ^ 0x50;
        pbVar12 = pbVar12 + 1;
      } while (pbVar12 != (byte *)0x3c);
      uRam00000000 = 0xe3b00020;
      _LAB_00000004 = 0xe3b01000;
      FUN_719344e4(0,0x3c,0);
      (*(code *)0x0)();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar10 = *(undefined4 *)(iVar16 + 0x94);
    iVar6 = FUN_71ba2d10(uVar10,0x42c70000);
    if (((iVar6 != 0) || (iVar6 = FUN_71ba2d70(uVar10,0x42d30000), iVar6 != 0)) &&
       (*(undefined4 *)(iVar16 + 0x94) = 0x42c80000, *(char *)(DAT_711a3938 + 0xe) != '\0'))
    goto LAB_717557f8;
    uVar22 = FUN_71886108();
    uVar20 = *(uint *)(param_1 + 0x120);
    uVar9 = -(*(int *)(param_1 + 0x122) + (uint)(uVar22 < uVar20));
    if (uVar9 == 0 && (500 < uVar22 - uVar20) <= uVar9) goto LAB_717549cc;
    pbVar11 = (byte *)(iVar16 + *(char *)(iVar16 + 0x71c) * 0x1c + 0x5a4);
    piVar19 = (int *)FUN_713dacc4(pbVar11,iVar16);
    if ((((*piVar19 != 1) ||
         ((uVar9 = *pbVar11 - 0x13, uVar9 < 0x14 && ((1 << (uVar9 & 0xff) & 0x8c047U) != 0)))) ||
        ((piVar19[6] & 0x1000U) != 0)) ||
       (piVar19[6] = piVar19[6] | 0x1000, *(char *)(DAT_711a3938 + 0xf) == '\0')) break;
    pbVar11 = (byte *)0x0;
    software_interrupt(0);
    pbVar12 = (byte *)0x0;
    imp___aeabi_memcpy(0,&DAT_700850e0,0x3c,0x22);
    do {
      *pbVar11 = *pbVar11 ^ 0x50;
      pbVar11 = pbVar11 + 1;
      uVar23 = pbVar11 == (byte *)0x3c;
    } while (!(bool)uVar23);
    uRam00000000 = 0xe3b00030;
    _LAB_00000004 = 0xe3b01000;
    FUN_719344e4(0,0x3c,0);
    (*(code *)0x0)();
    if ((bool)uVar23) {
      *param_1 = (short)extraout_r2;
      param_1 = (undefined2 *)
                ((ulonglong)extraout_r2 + 0x7175562b8e8aa9d4 + ZEXT48(param_1 + -0x76) >> 0x20);
    }
LAB_71755634:
    puVar13 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa46c);
    *(undefined1 *)((int)puVar13 + 0x16) = 1;
    uVar21 = DAT_700850d8;
    uVar18 = DAT_700850d4;
    uVar17 = DAT_700850d0;
    uVar10 = DAT_700850cc;
    *puVar13 = DAT_700850c8;
    puVar13[1] = uVar10;
    puVar13[2] = uVar17;
    puVar13[3] = uVar18;
    puVar13[4] = uVar21;
    *(undefined2 *)(puVar13 + 5) = DAT_700850dc;
    GFDIUClbc_QcPNgD_wH(&LAB_717605c0,puVar13,&DAT_70b0e000);
    puVar14 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa47c);
    *puVar14 = 1;
  } while( true );
  uVar9 = FUN_71886108();
  *(uint *)(param_1 + 0x120) = uVar9;
  *(undefined4 *)(param_1 + 0x122) = 0;
LAB_717549cc:
  if (1000 < (uint)(iVar7 - *(int *)(param_1 + 0xb4))) {
    FUN_71753380(param_1);
    *(int *)(param_1 + 0xb4) = iVar7;
  }
  if (DAT_711f6d58 != (undefined4 *)0x0) {
    FUN_7177ffec();
  }
  FUN_71753abc(param_1);
  bVar3 = thunk_FUN_71566860();
  if (*(byte *)((int)param_1 + 0x135) != bVar3) {
    iStack_33 = 0x800;
    cStack_3f = '\x01';
    *(byte *)((int)param_1 + 0x135) = bVar3;
    pbStack_169 = abStack_145;
    uStack_43 = 0;
    uStack_15a = 8;
    abStack_145[0] = bVar3;
    (**(code **)(*(int *)*DAT_711f6d58 + 0xec))
              ((int *)*DAT_711f6d58,&DAT_701021c4,&bStack_16c,1,8,0,0,0xffffffff,0xffff,0xffff,0);
    if ((cStack_3f != '\0') && (0x800 < iStack_33)) {
      imp_free(pbStack_169);
    }
  }
  uVar9 = 0;
  iVar16 = -2;
  do {
    iVar6 = -iVar16;
    iVar16 = iVar16 + -1;
    uVar9 = uVar9 + (byte)(&DAT_711a3940)[iVar6];
  } while (iVar16 != -0xd2);
  uVar9 = uVar9 & 0xff;
  if (uVar9 == 0) {
    uVar9 = 10;
  }
  if (*(char *)(param_1 + 0x8e) != '\0') {
    FUN_71758ba4(param_1);
    goto LAB_7175481c;
  }
  iVar16 = thunk_FUN_715bf66c(*(undefined4 *)(param_1 + 0x98));
  if ((iVar16 == 0) || (iVar16 = thunk_FUN_715c3f6c(*(undefined4 *)(param_1 + 0x98)), iVar16 != 0))
  {
    iVar16 = thunk_FUN_715c4e0c(*(undefined4 *)(param_1 + 0x98));
    if ((iVar16 != 1) &&
       (iVar16 = thunk_FUN_715c4e0c(*(undefined4 *)(param_1 + 0x98)), iVar16 != 0xc)) {
      iVar16 = thunk_FUN_715bf66c(*(undefined4 *)(param_1 + 0x98));
      if ((iVar16 != 0) &&
         (iVar16 = thunk_FUN_715c3f6c(*(undefined4 *)(param_1 + 0x98)), iVar16 != 0)) {
        if (*(int *)(param_1 + 0x98) == 0) {
          uVar9 = 1000;
        }
        else {
          uVar9 = 0;
          iVar16 = -2;
          do {
            iVar6 = -iVar16;
            iVar16 = iVar16 + -1;
            uVar9 = uVar9 + (byte)(&DAT_711a3940)[iVar6];
          } while (iVar16 != -0xd2);
          uVar9 = DAT_700faaf0 + (uVar9 & 0xff);
        }
        if (uVar9 < (uint)(iVar7 - *(int *)(param_1 + 0xa2))) {
          uVar10 = FUN_71886108();
          *(undefined4 *)(param_1 + 0xa2) = uVar10;
          FUN_7175b678(param_1);
          FUN_717597e4(param_1);
          FUN_7175314c(param_1);
        }
      }
      goto LAB_7175481c;
    }
    if (DAT_711f5180._1_1_ == '\0') {
      FUN_7175a01c(param_1);
    }
    FUN_7175a3d4(param_1);
    if ((1000 < (uint)(iVar7 - *(int *)(param_1 + 0xaa))) && (DAT_711e9ac8 != 0)) {
      pcVar8 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fa49c);
      if (*pcVar8 == '\0') {
        puVar13 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa48c);
        *(undefined1 *)(puVar13 + 4) = 1;
        *puVar13 = 0x9ad2a83b;
        puVar13[1] = 0x6d2ecb65;
        puVar13[2] = 0xb6c5a01a;
        puVar13[3] = 0x252ed168;
        GFDIUClbc_QcPNgD_wH(&LAB_717605f8,puVar13,&DAT_70b0e000);
        puVar14 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa49c);
        *puVar14 = 1;
      }
      pbVar11 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fa48c);
      if (pbVar11[0x10] != 0) {
        *pbVar11 = *pbVar11 ^ 0x7f;
        pbVar11[1] = pbVar11[1] ^ 0xc1;
        pbVar11[2] = pbVar11[2] ^ 0xa1;
        pbVar11[3] = pbVar11[3] ^ 0xfb;
        pbVar11[0x10] = 0;
        pbVar11[4] = pbVar11[4] ^ 7;
        pbVar11[5] = pbVar11[5] ^ 0xa7;
        pbVar11[6] = pbVar11[6] ^ 0x4b;
        pbVar11[7] = pbVar11[7] ^ 0x25;
        pbVar11[8] = pbVar11[8] ^ 0x7f;
        pbVar11[9] = pbVar11[9] ^ 0xc1;
        pbVar11[10] = pbVar11[10] ^ 0xa1;
        pbVar11[0xb] = pbVar11[0xb] ^ 0xfb;
        pbVar11[0xc] = pbVar11[0xc] ^ 7;
        pbVar11[0xd] = pbVar11[0xd] ^ 0xa7;
        pbVar11[0xe] = pbVar11[0xe] ^ 0x4b;
        pbVar11[0xf] = pbVar11[0xf] ^ 0x25;
      }
      uVar22 = imp_strlen(pbVar11);
      if (0xfffffff7 < uVar22) {
LAB_71755750:
                    /* WARNING: Subroutine does not return */
        FUN_712f6c1c(&bStack_16c);
      }
      if (uVar22 < 0xb) {
        bStack_16c = (byte)(uVar22 << 1);
        uVar20 = (uint)&bStack_16c | 1;
        if (uVar22 != 0) goto LAB_717551a8;
      }
      else {
        uVar20 = thunk_MwhHq((uVar22 | 7) + 1);
        uStack_165 = (undefined1)(uVar22 >> 0x18);
        iVar16 = (uVar22 | 7) + 2;
        bStack_16c = (byte)iVar16;
        uStack_16b = (undefined2)((uint)iVar16 >> 8);
        pbStack_169._0_1_ = (undefined1)((uint)iVar16 >> 0x18);
        pbStack_169 = (byte *)CONCAT31((int3)uVar22,pbStack_169._0_1_);
        uStack_164 = uVar20;
LAB_717551a8:
        imp___aeabi_memmove(uVar20,pbVar11,uVar22);
      }
      *(undefined1 *)(uVar20 + uVar22) = 0;
      iVar16 = FUN_717c5e7c(&bStack_16c);
      if ((bStack_16c & 1) != 0) {
        qNQrlu(uStack_164);
      }
      if (iVar16 == 0) {
        FUN_7136cdfc(&bStack_16c);
        puVar13 = (undefined4 *)FUN_7151dc0c();
        uVar17 = puVar13[3];
        uVar10 = FUN_71ba21e8(*puVar13,0x41a00000);
        uVar10 = FUN_71ba0b38(uVar10,uVar17);
        bStack_16c = (byte)uVar10;
        uStack_16b = (undefined2)((uint)uVar10 >> 8);
        pbStack_169._0_1_ = (undefined1)((uint)uVar10 >> 0x18);
        uVar17 = puVar13[4];
        uVar10 = FUN_71ba21e8(puVar13[1],0x41a00000);
        uVar10 = FUN_71ba0b38(uVar10,uVar17);
        *(undefined4 *)(pbVar12 + 4) = uVar10;
        uVar17 = puVar13[5];
        uVar10 = FUN_71ba21e8(puVar13[2],0x41a00000);
        uVar10 = FUN_71ba0b38(uVar10,uVar17);
        *(undefined4 *)(pbVar12 + 8) = uVar10;
        piVar19 = (int *)(DAT_711a3938 + 0x1389c);
        iVar16 = *piVar19;
        if (iVar16 == 0) {
          iVar16 = FUN_713c301c(0);
          if (iVar16 == 0) {
            iVar16 = *piVar19;
          }
          else {
            iVar16 = thunk_MwhHq(0x3a0);
            iVar6 = FUN_715ba834();
            *piVar19 = iVar6;
          }
        }
        pcVar8 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fa4bc);
        if (*pcVar8 == '\0') {
          puVar13 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa4ac);
          *(undefined1 *)(puVar13 + 3) = 1;
          *puVar13 = 0x4db9b2ad;
          puVar13[1] = 0x28136c0c;
          puVar13[2] = 0x21948e8f;
          GFDIUClbc_QcPNgD_wH(&LAB_71760628,puVar13,&DAT_70b0e000);
          puVar14 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fa4bc);
          *puVar14 = 1;
        }
        pbVar12 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fa4ac);
        if (pbVar12[0xc] != 0) {
          *pbVar12 = *pbVar12 ^ 0xeb;
          pbVar12[1] = pbVar12[1] ^ 0xdd;
          pbVar12[2] = pbVar12[2] ^ 0xd5;
          pbVar12[3] = pbVar12[3] ^ 0x21;
          pbVar12[0xc] = 0;
          pbVar12[4] = pbVar12[4] ^ 99;
          pbVar12[5] = pbVar12[5] ^ 0x1b;
          pbVar12[6] = pbVar12[6] ^ 0x43;
          pbVar12[7] = pbVar12[7] ^ 0x4d;
          pbVar12[8] = pbVar12[8] ^ 0xeb;
          pbVar12[9] = pbVar12[9] ^ 0xdd;
          pbVar12[10] = pbVar12[10] ^ 0xd5;
          pbVar12[0xb] = pbVar12[0xb] ^ 0x21;
        }
        FUN_715c3e88(iVar16,pbVar12,0,2000,0xffffffff,&bStack_16c,0,0x3dcccccd,500,3,0);
        *(int *)(param_1 + 0xaa) = iVar7;
      }
    }
    sVar5 = *psVar15;
    if (sVar5 != -1) {
      param_1[0x94] = sVar5;
    }
    if (sVar5 != -1) {
      *psVar15 = -1;
    }
    if (*(int *)(param_1 + 0x98) == 0) {
      uVar22 = 1000;
    }
    else {
      uVar22 = 0;
      iVar16 = -2;
      do {
        iVar6 = -iVar16;
        iVar16 = iVar16 + -1;
        uVar22 = uVar22 + (byte)(&DAT_711a3940)[iVar6];
      } while (iVar16 != -0xd2);
      uVar22 = DAT_700faaec + (uVar22 & 0xff);
    }
    if ((uVar22 < (uint)(iVar7 - *(int *)(param_1 + 0xa2))) &&
       (iVar16 = FUN_714f658c(), iVar16 == 0)) {
      uVar10 = FUN_71886108();
      *(undefined4 *)(param_1 + 0xa2) = uVar10;
      FUN_7175a604(param_1);
      FUN_7175314c(param_1);
    }
    uVar22 = FUN_715cc5c8(*(undefined4 *)(param_1 + 0x98),&bStack_16c,auStack_16e,0);
    uVar22 = uVar22 & 0x84;
    if (uVar22 < 0x80) {
      if (uVar22 != 0) {
        if (*(int *)(param_1 + 0x98) == 0) {
          uVar9 = 1000;
        }
        else {
          bVar3 = 0;
          iVar16 = -2;
          do {
            iVar6 = -iVar16;
            iVar16 = iVar16 + -1;
            bVar3 = bVar3 + (&DAT_711a3940)[iVar6];
          } while (iVar16 != -0xd2);
          uVar9 = DAT_700faaec + (uint)bVar3;
        }
        goto LAB_7175554c;
      }
      if ((uint)(iVar7 - *(int *)(param_1 + 0xa6)) < 0x3e9) goto LAB_7175481c;
    }
    else {
      if (uVar22 == 0x80) {
        uVar9 = uVar9 + 100;
      }
      else {
        uVar9 = uVar9 + 0x1e;
      }
LAB_7175554c:
      if ((uint)(iVar7 - *(int *)(param_1 + 0xa6)) <= uVar9) goto LAB_7175481c;
    }
    *(int *)(param_1 + 0xa6) = iVar7;
  }
  else {
    iVar16 = DAT_711f6d58[1];
    if (iVar16 != 0) {
      uVar10 = thunk_FUN_715c4004(*(undefined4 *)(param_1 + 0x98));
      sVar5 = FUN_717b92b8(iVar16,uVar10);
      *psVar15 = sVar5;
    }
    if (*(int *)(param_1 + 0x98) == 0) {
      uVar9 = 1000;
    }
    else {
      uVar9 = 0;
      iVar16 = -2;
      do {
        iVar6 = -iVar16;
        iVar16 = iVar16 + -1;
        uVar9 = uVar9 + (byte)(&DAT_711a3940)[iVar6];
      } while (iVar16 != -0xd2);
      uVar9 = DAT_700faaf0 + (uVar9 & 0xff);
    }
    if ((uint)(iVar7 - *(int *)(param_1 + 0xa2)) <= uVar9) goto LAB_7175481c;
    uVar10 = FUN_71886108();
    *(undefined4 *)(param_1 + 0xa2) = uVar10;
    FUN_71756dac(param_1);
    FUN_71752bd0(param_1,*psVar15);
    FUN_71752f14(param_1,*psVar15);
    FUN_7175314c(param_1);
  }
  FUN_717597e4(param_1);
LAB_7175481c:
  if ((*(char *)(param_1 + 0x8e) == '\0') || (*(char *)(param_1 + 0x95) != '\0')) {
    if ((*(char *)(param_1 + 0x9a) != '\0') &&
       ((iVar16 = thunk_FUN_715c4e0c(*(undefined4 *)(param_1 + 0x98)), iVar16 != 0x37 &&
        (iVar16 = thunk_FUN_715c4e0c(*(undefined4 *)(param_1 + 0x98)), iVar16 != 0x36)))) {
      if ((*(char *)(param_1 + 0xa1) == '\0') ||
         ((*(char *)((int)param_1 + 0x141) != '\0' || (DAT_711f6d58[10] != 0xe)))) {
        iVar16 = FUN_715d07a0(*(undefined4 *)(param_1 + 0x98));
        if (iVar16 != 0) {
          FUN_715d07c8(*(undefined4 *)(param_1 + 0x98),0);
        }
        *(undefined1 *)(param_1 + 0x9a) = 0;
        FUN_7175c99c(param_1);
        *(undefined1 *)((int)param_1 + 0x141) = 0;
      }
      else {
        uVar10 = thunk_FUN_715c4140(*(undefined4 *)(param_1 + 0x98));
        iVar16 = FUN_71ba2d70(uVar10,0);
        if (iVar16 != 0) {
          FUN_7175be7c(param_1);
        }
      }
    }
  }
  else {
    FUN_71758ba4(param_1);
  }
LAB_71754eb4:
  if (_ext___stack_chk_guard == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail(iStack_2c);
}


// =========================================================================
// Function: FUN_71756d20
// Entry: 0x71756d20 | Size: 24 bytes
// =========================================================================

void FUN_71756d20(int param_1,int param_2)

{
  if ((*(char *)(param_1 + 0x11c) != '\0') && (param_2 == 0)) {
    FUN_7175be7c(param_1);
  }
  *(undefined1 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x11e) = 0;
  *(char *)(param_1 + 0x11c) = (char)param_2;
  return;
}


// =========================================================================
// Function: FUN_71756dac
// Entry: 0x71756dac | Size: 4520 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_71756dac(int param_1)

{
  uint uVar1;
  byte bVar2;
  undefined1 uVar3;
  char cVar4;
  byte bVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  byte *pbVar17;
  ushort *puVar18;
  int iVar19;
  undefined4 *puVar20;
  bool bVar21;
  undefined8 uVar22;
  ushort uStack_3f8;
  undefined4 uStack_3f6;
  undefined4 uStack_3f2;
  undefined4 uStack_3ee;
  undefined4 uStack_3ea;
  undefined4 uStack_3e6;
  undefined4 uStack_3e2;
  undefined4 uStack_3de;
  undefined4 uStack_3da;
  undefined4 uStack_3d6;
  undefined4 uStack_3d2;
  undefined4 uStack_3ce;
  undefined4 uStack_3ca;
  undefined4 uStack_3c6;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  ushort auStack_3b0 [8];
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined1 uStack_300;
  ushort uStack_2ff;
  undefined1 uStack_2fd;
  undefined2 uStack_2fc;
  undefined1 uStack_2fa;
  undefined2 uStack_2f8;
  undefined2 uStack_2f6;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined1 auStack_2a6 [3];
  undefined1 *puStack_2a3;
  uint uStack_294;
  undefined1 auStack_27f [258];
  undefined4 uStack_17d;
  char cStack_179;
  uint uStack_16d;
  undefined1 auStack_169 [3];
  undefined1 *puStack_166;
  uint uStack_157;
  undefined1 auStack_142 [258];
  undefined4 uStack_40;
  char cStack_3c;
  uint uStack_30;
  int iStack_2c;
  
  iVar14 = 0;
  iStack_2c = _ext___stack_chk_guard;
  uStack_157 = 0;
  uStack_30 = 0x800;
  cStack_3c = '\x01';
  uStack_40 = 0;
  iVar19 = DAT_711f6d58[1];
  puStack_166 = auStack_142;
  if (iVar19 == 0) goto LAB_71756f18;
  FUN_7136cdfc(&uStack_2f4);
  uVar6 = FUN_715cc5c8(*(undefined4 *)(param_1 + 0x130),&uStack_2f6,&uStack_2f8,1);
  uStack_330 = 0;
  uStack_32c = 0;
  uStack_328 = 0;
  uStack_324 = 0;
  FUN_7136cdfc();
  FUN_7136cdfc(&uStack_314);
  imp___aeabi_memclr8(&uStack_338,0x3f);
  if (*(int *)(param_1 + 0x130) != 0) {
    uVar7 = thunk_FUN_715c4004();
    uVar8 = FUN_717b92b8(iVar19,uVar7);
    uStack_338 = CONCAT22(uStack_338._2_2_,(short)uVar8);
    if (uVar8 != 0xffff) {
      uStack_338 = CONCAT22(uStack_2f6,(short)uVar8);
      uStack_334 = CONCAT22(uVar6,uStack_2f8);
      if (uVar8 < 0x7d1) {
        bVar21 = *(char *)(iVar19 + 0x3e88 + uVar8) != '\0';
        if (bVar21) {
          iVar14 = *(int *)(iVar19 + uVar8 * 4);
        }
        if (bVar21 && iVar14 != 0) {
          thunk_FUN_715600f0(iVar14,&uStack_2e8);
          thunk_FUN_715608f0(iVar14,&uStack_2f4);
          FUN_71357554(&uStack_330,uStack_2e8,uStack_2e4,uStack_2e0,uStack_2dc,uStack_2d8,uStack_2d4
                       ,uStack_2d0,uStack_2cc,uStack_2c8,uStack_2c4,uStack_2c0,uStack_2bc,uStack_2b8
                       ,uStack_2b4,uStack_2b0,uStack_2ac);
          FUN_71358370(&uStack_330);
          uVar7 = uStack_330;
          uVar15 = *(undefined4 *)(param_1 + 0x38);
          iVar9 = FUN_71ba2d50(uStack_330,uVar15);
          uVar10 = FUN_71ba240c(uVar7,uVar15);
          uVar7 = FUN_71ba240c(uVar15,uVar7);
          if (iVar9 != 0) {
            uVar7 = uVar10;
          }
          uVar22 = FUN_71ba1638(uVar7);
          iVar9 = FUN_71ba2c3c((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),0x88e368f1,0x3ee4f8b5);
          uVar7 = uStack_32c;
          if (iVar9 != 0) {
            uVar15 = *(undefined4 *)(param_1 + 0x3c);
            iVar9 = FUN_71ba2d50(uStack_32c,uVar15);
            uVar10 = FUN_71ba240c(uVar7,uVar15);
            uVar7 = FUN_71ba240c(uVar15,uVar7);
            if (iVar9 != 0) {
              uVar7 = uVar10;
            }
            uVar22 = FUN_71ba1638(uVar7);
            iVar9 = FUN_71ba2c3c((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),0x88e368f1,0x3ee4f8b5)
            ;
            uVar7 = uStack_328;
            if (iVar9 != 0) {
              uVar15 = *(undefined4 *)(param_1 + 0x40);
              iVar9 = FUN_71ba2d50(uStack_328,uVar15);
              uVar10 = FUN_71ba240c(uVar7,uVar15);
              uVar7 = FUN_71ba240c(uVar15,uVar7);
              if (iVar9 != 0) {
                uVar7 = uVar10;
              }
              uVar22 = FUN_71ba1638(uVar7);
              iVar9 = FUN_71ba2c3c((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),0x88e368f1,
                                   0x3ee4f8b5);
              uVar7 = uStack_324;
              if (iVar9 != 0) {
                uVar15 = *(undefined4 *)(param_1 + 0x44);
                iVar9 = FUN_71ba2d50(uStack_324,uVar15);
                uVar10 = FUN_71ba240c(uVar7,uVar15);
                uVar7 = FUN_71ba240c(uVar15,uVar7);
                if (iVar9 != 0) {
                  uVar7 = uVar10;
                }
                uVar22 = FUN_71ba1638(uVar7);
                iVar9 = FUN_71ba2c3c((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),0x88e368f1,
                                     0x3ee4f8b5);
                if (iVar9 != 0) {
                  uStack_330 = *(undefined4 *)(param_1 + 0x38);
                  uStack_32c = *(undefined4 *)(param_1 + 0x3c);
                  uStack_328 = *(undefined4 *)(param_1 + 0x40);
                  uStack_324 = *(undefined4 *)(param_1 + 0x44);
                }
              }
            }
          }
          uStack_314 = uStack_2f4;
          uStack_320 = uStack_2b8;
          uStack_31c = uStack_2b4;
          uStack_318 = uStack_2b0;
          uStack_310 = uStack_2f0;
          uStack_30c = uStack_2ec;
          uVar7 = thunk_FUN_715f68dc(iVar14);
          iVar9 = FUN_71ba2d10(uVar7,0x43960000);
          if (iVar9 != 0) {
            thunk_FUN_715f68a0(iVar14,0x43960000);
          }
          uStack_308 = thunk_FUN_715f68dc(iVar14);
          thunk_FUN_715c4140(*(undefined4 *)(param_1 + 0x130));
          uVar3 = FUN_71ba17bc();
          uStack_304 = CONCAT31(uStack_304._1_3_,uVar3);
          thunk_FUN_715c41bc(*(undefined4 *)(param_1 + 0x130));
          uVar3 = FUN_71ba17bc();
          uStack_304._0_2_ = CONCAT11(uVar3,(undefined1)uStack_304);
          cVar4 = FUN_715bc440(*(undefined4 *)(param_1 + 0x130));
          bVar2 = uStack_304._2_1_;
          uStack_304._0_3_ = CONCAT12(uStack_304._2_1_ & 0x3f | cVar4 << 6,(undefined2)uStack_304);
          bVar5 = FUN_715c0530(*(undefined4 *)(param_1 + 0x130));
          uStack_304._0_3_ =
               CONCAT12((bVar2 ^ bVar5) & 0x3f ^ uStack_304._2_1_,(undefined2)uStack_304);
          uStack_304 = CONCAT13(*(undefined1 *)(iVar14 + 0x969),(undefined3)uStack_304);
          iVar9 = thunk_FUN_715f4594(iVar14);
          if ((iVar9 == 9) || (iVar9 = thunk_FUN_715f4594(iVar14), iVar9 == 10)) {
            uVar7 = FUN_71603168(iVar14);
            uStack_2fd = (undefined1)uVar7;
            uStack_2fc = (undefined2)((uint)uVar7 >> 8);
            uStack_2fa = (undefined1)((uint)uVar7 >> 0x18);
          }
          uStack_2ff = 0;
          iVar9 = *(int *)(*(int *)(iVar14 + 0xc) + 0x4d4);
          if (iVar9 != 0) {
            iVar11 = FUN_717b92b8(DAT_711f6d58[1],iVar9);
            if (iVar11 == 0xffff) goto LAB_71756ef8;
            iVar14 = FUN_715d33c8(&DAT_70085092,iVar11,*(undefined4 *)(iVar14 + 8));
            if (iVar14 == 0) {
              uStack_2ff = 0;
            }
            else {
              iVar14 = FUN_717b92b8(DAT_711f6d58[1],iVar9);
              puVar16 = &uStack_338;
              uStack_2ff = (ushort)iVar14;
              if (iVar14 - 1U >> 4 < 0x7d) {
                puVar20 = (undefined4 *)((uint)auStack_3b0 | 4);
                FUN_7136cdfc(puVar20);
                uStack_394 = 0;
                uStack_398 = 0;
                uStack_39c = 0;
                uStack_3a0 = 0;
                FUN_7136cdfc(&uStack_390);
                FUN_7136cdfc(&uStack_384);
                uVar8 = (uint)uStack_2ff;
                if (uVar8 < 0x7d1) {
                  bVar21 = *(char *)(iVar19 + 0x3e88 + uVar8) != '\0';
                  if (bVar21) {
                    puVar16 = *(undefined4 **)(iVar19 + uVar8 * 4);
                  }
                  if (bVar21 && puVar16 != (undefined4 *)0x0) {
                    thunk_FUN_715600f0(puVar16,&uStack_378);
                    uStack_3b4 = 0;
                    uStack_3b8 = 0;
                    uStack_3bc = 0;
                    uStack_3c0 = 0;
                    auStack_3b0[0] = uStack_2ff;
                    *puVar20 = uStack_348;
                    puVar20[1] = uStack_344;
                    puVar20[2] = uStack_340;
                    FUN_71357554(&uStack_3c0,uStack_378,uStack_374,uStack_370,uStack_36c,uStack_368,
                                 uStack_364,uStack_360,uStack_35c,uStack_358,uStack_354,uStack_350,
                                 uStack_34c,uStack_348,uStack_344,uStack_340,uStack_33c);
                    uStack_3a0 = uStack_3c0;
                    uStack_39c = uStack_3bc;
                    uStack_398 = uStack_3b8;
                    uStack_394 = uStack_3b4;
                    thunk_FUN_715608f0(puVar16,&uStack_390);
                    thunk_FUN_71560950(puVar16,&uStack_384);
                    uStack_17d = 0;
                    uStack_16d = 0x800;
                    cStack_179 = '\x01';
                    auStack_27f[0] = 0xd2;
                    uStack_294 = 8;
                    puStack_2a3 = auStack_27f;
                    FUN_7136cdfc((uint)&uStack_3f8 | 2);
                    FUN_7136cdfc(&uStack_3da);
                    FUN_7136cdfc(&uStack_3ce);
                    uVar8 = uStack_16d;
                    uStack_3f8 = auStack_3b0[0];
                    uStack_3f6 = *puVar20;
                    uStack_3ea = uStack_3a0;
                    uStack_3f2 = puVar20[1];
                    uStack_3da = uStack_390;
                    uStack_3e6 = uStack_39c;
                    uStack_3ce = uStack_384;
                    uStack_3ee = puVar20[2];
                    uStack_3d6 = uStack_38c;
                    uStack_3e2 = uStack_398;
                    uStack_3ca = uStack_380;
                    uStack_3d2 = uStack_388;
                    uStack_3c6 = uStack_37c;
                    uVar12 = uStack_294 + 0x1b0;
                    uStack_3de = uStack_394;
                    if ((uStack_294 & 7) == 0) {
                      if ((-0x1b0 < (int)uStack_294) &&
                         ((int)(uStack_16d - 1) >> 3 < (int)(uStack_294 + 0x1af >> 3))) {
                        uVar1 = uVar12 >> 2;
                        uVar13 = uVar12 * 2;
                        if (puStack_2a3 == auStack_27f) {
                          bVar21 = 0x400 < uVar12;
                          uVar12 = uVar13;
                          if (bVar21) {
                            puStack_2a3 = (undefined1 *)imp_malloc(uVar1);
                            imp___aeabi_memcpy(puStack_2a3,auStack_27f,(int)(uVar8 + 7) >> 3);
                          }
                        }
                        else {
                          puStack_2a3 = (undefined1 *)imp_realloc();
                          uVar8 = uStack_16d;
                          uVar12 = uVar13;
                        }
                      }
                      if ((int)uVar8 < (int)uVar12) {
                        uStack_16d = uVar12;
                      }
                      imp___aeabi_memcpy(puStack_2a3 + ((int)(uStack_294 + 7) >> 3),&uStack_3f8,0x36
                                        );
                      uStack_294 = uStack_294 + 0x1b0;
                    }
                    else {
                      if ((-0x1b0 < (int)uStack_294) &&
                         ((int)(uStack_16d - 1) >> 3 < (int)(uStack_294 + 0x1af >> 3))) {
                        uVar13 = uVar12 * 2;
                        iVar14 = uVar12 * 2;
                        if (puStack_2a3 == auStack_27f) {
                          bVar21 = 0x400 < uVar12;
                          uVar12 = uVar13;
                          if (bVar21) {
                            puStack_2a3 = (undefined1 *)imp_malloc(iVar14 + 7U >> 3);
                            imp___aeabi_memcpy(puStack_2a3,auStack_27f,(int)(uVar8 + 7) >> 3);
                          }
                        }
                        else {
                          puStack_2a3 = (undefined1 *)imp_realloc();
                          uVar8 = uStack_16d;
                          uVar12 = uVar13;
                        }
                      }
                      uVar13 = 0x1b0;
                      if ((int)uVar8 < (int)uVar12) {
                        uStack_16d = uVar12;
                      }
                      uVar8 = uStack_294 & 7;
                      puVar18 = &uStack_3f8;
                      do {
                        bVar2 = (byte)*puVar18;
                        iVar14 = (int)uStack_294 >> 3;
                        if (uVar8 == 0) {
                          puStack_2a3[iVar14] = bVar2;
                        }
                        else {
                          puStack_2a3[iVar14] = puStack_2a3[iVar14] | bVar2 >> uVar8;
                          if (8 - uVar8 < uVar13) {
                            puStack_2a3[iVar14 + 1] = bVar2 << (8 - uVar8 & 0xff);
                          }
                        }
                        uVar13 = uVar13 - 8;
                        uStack_294 = uStack_294 + 8;
                        puVar18 = (ushort *)((int)puVar18 + 1);
                      } while (uVar13 != 0);
                    }
                    (**(code **)(*(int *)*DAT_711f6d58 + 0x3c))
                              ((int *)*DAT_711f6d58,auStack_2a6,1,7,0);
                    if ((cStack_179 != '\0') && (0x800 < (int)uStack_16d)) {
                      imp_free(puStack_2a3);
                    }
                  }
                }
              }
            }
          }
          iVar14 = FUN_71886108();
          if ((500 < (uint)(iVar14 - *(int *)(param_1 + 0x15c))) ||
             (iVar14 = imp_memcmp((undefined4 *)(param_1 + 0x30),&uStack_338,0x3f), iVar14 != 0)) {
            uVar7 = FUN_71886108();
            uVar8 = uStack_30;
            *(undefined4 *)(param_1 + 0x15c) = uVar7;
            uVar12 = uStack_157 + 8;
            if ((-8 < (int)uStack_157) && ((int)(uStack_30 - 1) >> 3 < (int)(uStack_157 + 7 >> 3)))
            {
              uVar13 = uVar12 * 2;
              iVar14 = uVar12 * 2;
              if (puStack_166 == auStack_142) {
                bVar21 = 0x400 < uVar12;
                uVar12 = uVar13;
                if (bVar21) {
                  puStack_166 = (undefined1 *)imp_malloc(iVar14 + 7U >> 3);
                  imp___aeabi_memcpy(puStack_166,auStack_142,(int)(uVar8 + 7) >> 3);
                }
              }
              else {
                puStack_166 = (undefined1 *)imp_realloc();
                uVar8 = uStack_30;
                uVar12 = uVar13;
              }
            }
            uVar13 = uStack_157;
            if ((int)uVar8 < (int)uVar12) {
              uStack_30 = uVar12;
            }
            uVar8 = uStack_30;
            uVar12 = uStack_157 & 7;
            iVar14 = (int)uStack_157 >> 3;
            if (uVar12 == 0) {
              puStack_166[iVar14] = 200;
            }
            else {
              puStack_166[iVar14] = puStack_166[iVar14] | (byte)(200 >> uVar12);
              puStack_166[iVar14 + 1] = (char)(200 << (8 - uVar12 & 0xff));
            }
            uStack_157 = uStack_157 + 8;
            uVar12 = uVar13 + 0x200;
            if ((uVar13 & 7) == 0) {
              if ((-0x200 < (int)uVar13) && ((int)(uStack_30 - 1) >> 3 < (int)(uVar13 + 0x1ff >> 3))
                 ) {
                uVar1 = uVar12 >> 2;
                uVar13 = uVar12 * 2;
                if (puStack_166 == auStack_142) {
                  bVar21 = 0x400 < uVar12;
                  uVar12 = uVar13;
                  if (bVar21) {
                    puStack_166 = (undefined1 *)imp_malloc(uVar1);
                    imp___aeabi_memcpy(puStack_166,auStack_142,(int)(uVar8 + 7) >> 3);
                  }
                }
                else {
                  puStack_166 = (undefined1 *)imp_realloc();
                  uVar8 = uStack_30;
                  uVar12 = uVar13;
                }
              }
              if ((int)uVar8 < (int)uVar12) {
                uStack_30 = uVar12;
              }
              imp___aeabi_memcpy(puStack_166 + ((int)(uStack_157 + 7) >> 3),&uStack_338,0x3f);
              uStack_157 = uStack_157 + 0x1f8;
            }
            else {
              if ((-0x200 < (int)uVar13) && ((int)(uStack_30 - 1) >> 3 < (int)(uVar13 + 0x1ff >> 3))
                 ) {
                uVar13 = uVar12 * 2;
                iVar14 = uVar12 * 2;
                if (puStack_166 == auStack_142) {
                  bVar21 = 0x400 < uVar12;
                  uVar12 = uVar13;
                  if (bVar21) {
                    puStack_166 = (undefined1 *)imp_malloc(iVar14 + 7U >> 3);
                    imp___aeabi_memcpy(puStack_166,auStack_142,(int)(uVar8 + 7) >> 3);
                  }
                }
                else {
                  puStack_166 = (undefined1 *)imp_realloc();
                  uVar8 = uStack_30;
                  uVar12 = uVar13;
                }
              }
              uVar13 = 0x1f8;
              if ((int)uVar8 < (int)uVar12) {
                uStack_30 = uVar12;
              }
              uVar8 = uStack_157 & 7;
              pbVar17 = (byte *)&uStack_338;
              do {
                bVar2 = *pbVar17;
                iVar14 = (int)uStack_157 >> 3;
                if (uVar8 == 0) {
                  puStack_166[iVar14] = bVar2;
                }
                else {
                  puStack_166[iVar14] = puStack_166[iVar14] | bVar2 >> uVar8;
                  if (8 - uVar8 < uVar13) {
                    puStack_166[iVar14 + 1] = bVar2 << (8 - uVar8 & 0xff);
                  }
                }
                uVar13 = uVar13 - 8;
                uStack_157 = uStack_157 + 8;
                pbVar17 = pbVar17 + 1;
              } while (uVar13 != 0);
            }
            (**(code **)(*(int *)*DAT_711f6d58 + 0x3c))((int *)*DAT_711f6d58,auStack_169,1,7,0);
            *(undefined4 *)(param_1 + 0x30) = uStack_338;
            *(undefined4 *)(param_1 + 0x34) = uStack_334;
            *(undefined4 *)(param_1 + 0x38) = uStack_330;
            *(undefined4 *)(param_1 + 0x3c) = uStack_32c;
            *(undefined4 *)(param_1 + 0x40) = uStack_328;
            *(undefined4 *)(param_1 + 0x44) = uStack_324;
            *(undefined4 *)(param_1 + 0x48) = uStack_320;
            *(undefined4 *)(param_1 + 0x4c) = uStack_31c;
            *(undefined4 *)(param_1 + 0x50) = uStack_318;
            *(undefined4 *)(param_1 + 0x54) = uStack_314;
            *(undefined4 *)(param_1 + 0x58) = uStack_310;
            *(undefined4 *)(param_1 + 0x5c) = uStack_30c;
            *(undefined4 *)(param_1 + 0x60) = uStack_308;
            *(undefined4 *)(param_1 + 100) = uStack_304;
            *(uint *)(param_1 + 0x68) = CONCAT13(uStack_2fd,CONCAT21(uStack_2ff,uStack_300));
            *(undefined2 *)(param_1 + 0x6c) = uStack_2fc;
            *(undefined1 *)(param_1 + 0x6e) = uStack_2fa;
          }
        }
      }
    }
  }
LAB_71756ef8:
  if ((cStack_3c != '\0') && (0x800 < (int)uStack_30)) {
    imp_free(puStack_166);
  }
LAB_71756f18:
  if (_ext___stack_chk_guard == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_717584f8
// Entry: 0x717584f8 | Size: 960 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_717584f8(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ushort uStack_164;
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
  uStack_164 = 0xffff;
  puStack_15e = auStack_13a;
  uVar6 = FUN_715c86f0(*(undefined4 *)(param_1 + 0x130),&uStack_164);
  uVar7 = uStack_28;
  uVar8 = uStack_14f + 8;
  if ((-8 < (int)uStack_14f) && ((int)(uStack_28 - 1) >> 3 < (int)(uStack_14f + 7 >> 3))) {
    iVar2 = uVar8 * 2;
    uVar9 = uVar8 * 2;
    if (puStack_15e == auStack_13a) {
      bVar1 = 0x400 < uVar8;
      uVar8 = uVar9;
      if (bVar1) {
        puStack_15e = (undefined1 *)imp_malloc(iVar2 + 7U >> 3);
        imp___aeabi_memcpy(puStack_15e,auStack_13a,(int)(uVar7 + 7) >> 3);
      }
    }
    else {
      puStack_15e = (undefined1 *)imp_realloc(puStack_15e);
      uVar7 = uStack_28;
      uVar8 = uVar9;
    }
  }
  uVar5 = uStack_164;
  if ((int)uVar7 < (int)uVar8) {
    uStack_28 = uVar8;
  }
  uVar7 = uStack_28;
  uVar8 = uStack_14f & 7;
  iVar2 = (int)uStack_14f >> 3;
  if (uVar8 == 0) {
    puStack_15e[iVar2] = (char)uVar6;
  }
  else {
    puStack_15e[iVar2] = puStack_15e[iVar2] | (byte)(uVar6 >> uVar8);
    puStack_15e[iVar2 + 1] = (char)(uVar6 << (8 - uVar8 & 0xff));
  }
  uVar9 = (uint)uStack_164;
  uVar8 = uStack_14f + 0x18;
  uVar6 = uStack_14f + 8;
  if ((-0x18 < (int)uStack_14f) && ((int)(uStack_28 - 1) >> 3 < (int)(uStack_14f + 0x17 >> 3))) {
    uVar3 = uVar8 * 2;
    iVar2 = uVar8 * 2;
    uStack_14f = uVar6;
    if (puStack_15e == auStack_13a) {
      bVar1 = 0x400 < uVar8;
      uVar8 = uVar3;
      if (bVar1) {
        puStack_15e = (undefined1 *)imp_malloc(iVar2 + 7U >> 3);
        imp___aeabi_memcpy(puStack_15e,auStack_13a,(int)(uVar7 + 7) >> 3);
        uVar6 = uStack_14f;
      }
    }
    else {
      puStack_15e = (undefined1 *)imp_realloc();
      uVar7 = uStack_28;
      uVar8 = uVar3;
      uVar6 = uStack_14f;
    }
  }
  uStack_14f = uVar6;
  if ((int)uVar7 < (int)uVar8) {
    uStack_28 = uVar8;
  }
  uVar7 = uStack_14f & 7;
  iVar2 = (int)uStack_14f >> 3;
  cVar4 = (char)(uVar5 >> 8);
  if (uVar7 == 0) {
    puStack_15e[iVar2] = (char)uVar5;
    puStack_15e[(int)(uStack_14f + 8) >> 3] = cVar4;
  }
  else {
    puStack_15e[iVar2] = puStack_15e[iVar2] | (byte)((uVar9 & 0xff) >> uVar7);
    puStack_15e[iVar2 + 1] = (char)((uVar9 & 0xff) << (8 - uVar7 & 0xff));
    iVar2 = (int)(uStack_14f + 8) >> 3;
    puStack_15e[iVar2] = puStack_15e[iVar2] | (byte)((uVar5 >> 8) >> uVar7);
    puStack_15e[iVar2 + 1] = cVar4 << (8 - uVar7 & 0xff);
  }
  uStack_14f = uStack_14f + 0x10;
  (**(code **)(*(int *)*DAT_711f6d58 + 0xec))
            ((int *)*DAT_711f6d58,&DAT_701021b8,auStack_161,1,9,0,0,0xffffffff,0xffff,0xffff,0);
  if ((cStack_34 != '\0') && (0x800 < (int)uStack_28)) {
    imp_free(puStack_15e);
  }
  if (_ext___stack_chk_guard == iStack_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_717589a4
// Entry: 0x717589a4 | Size: 324 bytes
// =========================================================================

void FUN_717589a4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if (*(char *)(param_1 + 0x1d8) != '\0') {
    uVar1 = FUN_71561790(*(undefined4 *)(param_1 + 0x130),*(undefined4 *)(param_1 + 0x1e0),
                         *(undefined4 *)(param_1 + 0x1e4),*(undefined4 *)(param_1 + 0x1e8));
    uVar4 = *(undefined4 *)(param_1 + 0x1ec);
    iVar2 = FUN_71ba2d70(uVar1,uVar4);
    if (iVar2 == 0) {
      uVar1 = FUN_71ba13e0(uVar1,uVar4);
      uVar1 = FUN_71ba13e0(uVar1,*(undefined4 *)(param_1 + 0x1f0));
      FUN_71ba21e8(uVar1,0x447a0000);
      uVar3 = FUN_71ba1910();
      if (uVar3 < 0x33) {
        uVar3 = 0x32;
      }
      iVar2 = FUN_71886108();
      if (uVar3 <= (uint)(iVar2 - *(int *)(param_1 + 500))) {
        FUN_71566ac8(DAT_711a3938,*(undefined4 *)(param_1 + 0x1dc),0,0,0);
        uVar1 = FUN_71886108();
        *(undefined4 *)(param_1 + 500) = uVar1;
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71758ba4
// Entry: 0x71758ba4 | Size: 2444 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71758ba4(int param_1)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  char cVar6;
  undefined2 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined *puVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined4 *puVar16;
  byte *pbVar17;
  bool bVar18;
  undefined4 *puStack_1d4;
  undefined2 uStack_1c4;
  undefined2 uStack_1c2;
  undefined1 auStack_1c0 [48];
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined2 uStack_180;
  undefined2 uStack_17e;
  undefined2 uStack_17c;
  undefined1 auStack_169 [3];
  undefined1 *puStack_166;
  uint uStack_157;
  undefined1 auStack_142 [258];
  undefined4 uStack_40;
  char cStack_3c;
  uint uStack_30;
  int iStack_2c;
  
  puVar16 = (undefined4 *)((uint)&uStack_180 | 6);
  iStack_2c = _ext___stack_chk_guard;
  uStack_30 = 0x800;
  uStack_157 = 0;
  uStack_40 = 0;
  cStack_3c = '\x01';
  puStack_166 = auStack_142;
  FUN_7136cdfc(puVar16);
  uVar7 = FUN_715cc5c8(*(undefined4 *)(param_1 + 0x130),&uStack_1c2,&uStack_1c4,1);
  thunk_FUN_714e0378(*(undefined4 *)(DAT_711a3938 + 0x13898),auStack_1c0);
  iVar13 = DAT_711f6d58[0x2b];
  puVar8 = DAT_711f6d58;
  if (iVar13 != 0) {
    puVar8 = (undefined4 *)DAT_711f6d58[1];
    puStack_1d4 = puVar8;
  }
  if (iVar13 == 0 || puVar8 == (undefined4 *)0x0) goto LAB_71758c74;
  *puVar16 = uStack_190;
  uStack_180 = uStack_1c2;
  uStack_17e = uStack_1c4;
  puVar16[1] = uStack_18c;
  puVar16[2] = uStack_188;
  uStack_17c = uVar7;
  iVar10 = FUN_71886108();
  uVar9 = iVar10 - *(int *)(param_1 + 0x148);
  if (*(int *)(param_1 + 0x130) == 0) {
    if (1000 < uVar9) goto LAB_71bd6610;
  }
  else {
    uVar14 = 0;
    iVar10 = -2;
    do {
      iVar5 = -iVar10;
      iVar10 = iVar10 + -1;
      uVar14 = uVar14 + (byte)(&DAT_711a3940)[iVar5];
    } while (iVar10 != -0xd2);
    if (DAT_700faaec + (uVar14 & 0xff) < uVar9) {
LAB_71bd6610:
      uVar11 = FUN_71886108();
      uVar9 = uStack_30;
      *(undefined4 *)(param_1 + 0x148) = uVar11;
      uVar14 = uStack_157 + 8;
      if ((-8 < (int)uStack_157) && ((int)(uStack_30 - 1) >> 3 < (int)(uStack_157 + 7 >> 3))) {
        uVar1 = uVar14 * 2;
        iVar10 = uVar14 * 2;
        if (puStack_166 == auStack_142) {
          bVar18 = 0x400 < uVar14;
          uVar14 = uVar1;
          if (bVar18) {
            puStack_166 = (undefined1 *)imp_malloc(iVar10 + 7U >> 3);
            imp___aeabi_memcpy(puStack_166,auStack_142,(int)(uVar9 + 7) >> 3);
          }
        }
        else {
          puStack_166 = (undefined1 *)imp_realloc();
          uVar9 = uStack_30;
          uVar14 = uVar1;
        }
      }
      uVar1 = uStack_157;
      if ((int)uVar9 < (int)uVar14) {
        uStack_30 = uVar14;
      }
      uVar9 = uStack_30;
      uVar14 = uStack_157 & 7;
      iVar10 = (int)uStack_157 >> 3;
      if (uVar14 == 0) {
        puStack_166[iVar10] = 0xd4;
      }
      else {
        puStack_166[iVar10] = puStack_166[iVar10] | (byte)(0xd4 >> uVar14);
        puStack_166[iVar10 + 1] = (char)(0xd4 << (8 - uVar14 & 0xff));
      }
      uVar15 = uStack_157 + 0x98;
      uVar14 = uStack_157 & 7;
      uStack_157 = uStack_157 + 8;
      if (uVar14 == 0) {
        if ((-0x98 < (int)uVar1) && ((int)(uStack_30 - 1) >> 3 < (int)(uVar1 + 0x97 >> 3))) {
          uVar1 = uVar15 >> 2;
          uVar14 = uVar15 * 2;
          if (puStack_166 == auStack_142) {
            bVar18 = 0x400 < uVar15;
            uVar15 = uVar14;
            if (bVar18) {
              puStack_166 = (undefined1 *)imp_malloc(uVar1);
              imp___aeabi_memcpy(puStack_166,auStack_142,(int)(uVar9 + 7) >> 3);
            }
          }
          else {
            puStack_166 = (undefined1 *)imp_realloc();
            uVar9 = uStack_30;
            uVar15 = uVar14;
          }
        }
        if ((int)uVar9 < (int)uVar15) {
          uStack_30 = uVar15;
        }
        imp___aeabi_memcpy(puStack_166 + ((int)(uStack_157 + 7) >> 3),&uStack_180,0x12);
        uStack_157 = uStack_157 + 0x90;
      }
      else {
        if ((-0x98 < (int)uVar1) && ((int)(uStack_30 - 1) >> 3 < (int)(uVar1 + 0x97 >> 3))) {
          uVar14 = uVar15 * 2;
          iVar10 = uVar15 * 2;
          if (puStack_166 == auStack_142) {
            bVar18 = 0x400 < uVar15;
            uVar15 = uVar14;
            if (bVar18) {
              puStack_166 = (undefined1 *)imp_malloc(iVar10 + 7U >> 3);
              imp___aeabi_memcpy(puStack_166,auStack_142,(int)(uVar9 + 7) >> 3);
            }
          }
          else {
            puStack_166 = (undefined1 *)imp_realloc();
            uVar9 = uStack_30;
            uVar15 = uVar14;
          }
        }
        uVar14 = 0x90;
        if ((int)uVar9 < (int)uVar15) {
          uStack_30 = uVar15;
        }
        uVar9 = uStack_157 & 7;
        pbVar17 = (byte *)&uStack_180;
        do {
          bVar2 = *pbVar17;
          iVar10 = (int)uStack_157 >> 3;
          if (uVar9 == 0) {
            puStack_166[iVar10] = bVar2;
          }
          else {
            puStack_166[iVar10] = puStack_166[iVar10] | bVar2 >> uVar9;
            if (8 - uVar9 < uVar14) {
              puStack_166[iVar10 + 1] = bVar2 << (8 - uVar9 & 0xff);
            }
          }
          uVar14 = uVar14 - 8;
          uStack_157 = uStack_157 + 8;
          pbVar17 = pbVar17 + 1;
        } while (uVar14 != 0);
      }
      uVar14 = 0;
      (**(code **)(*(int *)*DAT_711f6d58 + 0x3c))((int *)*DAT_711f6d58,auStack_169,1,6,0);
      FUN_717597e4(param_1);
      iVar10 = FUN_71886108();
      uVar9 = iVar10 - *(int *)(param_1 + 0x150);
      if (*(int *)(param_1 + 0x130) == 0) {
        if (2000 < uVar9) goto LAB_71bd6680;
      }
      else {
        iVar10 = -2;
        do {
          iVar5 = -iVar10;
          iVar10 = iVar10 + -1;
          uVar14 = uVar14 + (byte)(&DAT_711a3940)[iVar5];
        } while (iVar10 != -0xd2);
        if ((DAT_700faaec + (uVar14 & 0xff)) * 2 < uVar9) {
LAB_71bd6680:
          uVar11 = FUN_71886108();
          *(undefined4 *)(param_1 + 0x150) = uVar11;
        }
      }
    }
  }
  thunk_FUN_7156ad48(0,4);
  thunk_FUN_7156ab84(0,4);
  thunk_FUN_715c4104(*(undefined4 *)(param_1 + 0x130),0x42c80000);
  uVar11 = FUN_71ba0b38(puVar16[2],0x41a00000);
  FUN_715601e8(*(undefined4 *)(param_1 + 0x130),*puVar16,puVar16[1],uVar11);
  cVar6 = *(char *)(param_1 + 0x11e);
  if (cVar6 == '\x01') {
    if (((*(uint *)(param_1 + 0x120) & 0xffff) >> 2 < 0xfb) &&
       (uVar9 = *(uint *)(param_1 + 0x120) & 0x3ff, *(char *)(iVar13 + uVar9 + 0x3eec) != '\0')) {
      iVar10 = *(int *)(iVar13 + uVar9 * 4 + 0x1f8c);
      bVar18 = *(int *)(iVar10 + 0x10) != 0;
      cVar3 = '\0';
      if (bVar18) {
        cVar3 = *(char *)(iVar10 + 0x28);
      }
      if ((bVar18 && cVar3 != '\0') && (cVar6 = '\x01', cVar3 != ' ')) goto LAB_717590ac;
    }
    cVar6 = '\0';
    *(undefined1 *)(param_1 + 0x124) = 0;
    *(undefined1 *)(param_1 + 0x11e) = 0;
  }
LAB_717590ac:
  if (*(char *)(param_1 + 0x124) != '\0') goto LAB_71758c74;
  if (cVar6 == '\x02') {
    if (((2000 < (*(uint *)(param_1 + 0x120) & 0xffff)) ||
        (uVar9 = *(uint *)(param_1 + 0x120) & 0x7ff,
        *(char *)((int)puStack_1d4 + uVar9 + 0x3e88) == '\0')) || (puStack_1d4[uVar9] == 0))
    goto LAB_71758c74;
    uVar4 = *(undefined1 *)(param_1 + 0x11d);
    uVar11 = *(undefined4 *)(puStack_1d4[uVar9] + 8);
    puVar12 = (undefined *)0x700850b6;
LAB_717591bc:
    FUN_715d33c8(puVar12,uVar11,uVar4,2);
  }
  else {
    if (cVar6 == '\x01') {
      if (((0xfa < (*(uint *)(param_1 + 0x120) & 0xffff) >> 2) ||
          (uVar9 = *(uint *)(param_1 + 0x120) & 0x3ff, *(char *)(iVar13 + uVar9 + 0x3eec) == '\0'))
         || (iVar13 = *(int *)(*(int *)(iVar13 + uVar9 * 4 + 0x1f8c) + 0x10), iVar13 == 0))
      goto LAB_71758c74;
      uVar4 = *(undefined1 *)(param_1 + 0x11d);
      uVar11 = *(undefined4 *)(iVar13 + 8);
      puVar12 = &DAT_700850a4;
      goto LAB_717591bc;
    }
    if (cVar6 != '\0') goto LAB_71758c74;
    iVar13 = thunk_FUN_715bf66c(*(undefined4 *)(param_1 + 0x130));
    if (iVar13 == 0) {
      FUN_715601e8(*(undefined4 *)(param_1 + 0x130),0xc2d9bff3,0x43a4baa6,0x414309d5);
    }
    else {
      FUN_715bf69c(*(undefined4 *)(param_1 + 0x130),0xc2d9bff3,0x43a4baa6,0x414309d5);
    }
    FUN_714dd7fc(*(undefined4 *)(DAT_711a3938 + 0x13898),0x437de553,0x4491035d,0x418947ad,0,0,0);
    FUN_714dda40(*(undefined4 *)(DAT_711a3938 + 0x13898),0x437caf68,0x44906971,0x41843b22,2);
  }
  *(undefined1 *)(param_1 + 0x124) = 1;
LAB_71758c74:
  if ((cStack_3c != '\0') && (0x800 < (int)uStack_30)) {
    imp_free(puStack_166);
  }
  if (_ext___stack_chk_guard == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_717597e4
// Entry: 0x717597e4 | Size: 1720 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x717599cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_717597e4(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  byte bStack_1b8;
  undefined4 uStack_1b7;
  undefined4 uStack_1b3;
  undefined4 uStack_1af;
  undefined4 uStack_1ab;
  undefined4 uStack_1a7;
  undefined4 uStack_1a3;
  undefined4 uStack_19f;
  byte bStack_19b;
  undefined1 uStack_19a;
  byte bStack_199;
  uint auStack_198 [2];
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined1 *puStack_180;
  undefined4 uStack_17c;
  uint uStack_178;
  undefined1 auStack_169 [3];
  undefined1 *puStack_166;
  uint uStack_157;
  undefined1 auStack_142 [258];
  undefined4 uStack_40;
  char cStack_3c;
  uint uStack_30;
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  uStack_157 = 0;
  uStack_30 = 0x800;
  cStack_3c = '\x01';
  uStack_40 = 0;
  puStack_166 = auStack_142;
  puVar3 = (undefined4 *)thunk_FUN_7151dc0c(*(undefined4 *)(param_1 + 0x130));
  bStack_1b8 = thunk_FUN_7151dfd0(*(undefined4 *)(param_1 + 0x130));
  uStack_1b7 = *puVar3;
  uStack_1b3 = puVar3[1];
  uStack_1af = puVar3[2];
  uStack_1ab = puVar3[3];
  uStack_1a7 = puVar3[4];
  uStack_1a3 = puVar3[5];
  uStack_19f = thunk_FUN_715cca9c(*(undefined4 *)(param_1 + 0x130));
  uStack_19a = 0;
  uVar4 = thunk_FUN_7151dd90(*(undefined4 *)(param_1 + 0x130));
  FUN_71ba21e8(uVar4,0x427c0000);
  bVar2 = FUN_71ba17bc();
  iVar5 = thunk_FUN_715c04ec(*(undefined4 *)(param_1 + 0x130));
  uVar10 = uStack_30;
  if (*(int *)(iVar5 + 4) == 2) {
    bStack_19b = bVar2 | 0xc0;
  }
  else {
    bStack_19b = (byte)(*(int *)(iVar5 + 8) << 6);
    if (1 < *(int *)(iVar5 + 8)) {
      bStack_19b = 0x80;
    }
    bStack_19b = bStack_19b | bVar2 & 0x3f;
  }
  uStack_17c = 0x26d5d038;
  uStack_190 = 0x510;
  uStack_18c = 0;
  puStack_180 = &LAB_49abac16;
  uStack_184 = 0;
  uStack_188 = 0x5f3;
  bStack_199 = 0;
  do {
    *(byte *)((int)auStack_198 + (int)(char)bStack_199) =
         (byte)(0xccfaf9 >> (((int)(char)bStack_199 & 0x1fU) << 3)) ^ 9;
    bStack_199 = bStack_199 + 1;
  } while (bStack_199 < 4);
  uStack_178 = 0xccfaf9;
  bStack_199 = 0;
  do {
    bStack_199 = bStack_199 + 1;
    uStack_178 = (uStack_178 | 0xccb5e2) >> 2 ^ 0xacb1bc;
  } while (bStack_199 < 8);
  bStack_199 = 0;
  do {
    *(byte *)((int)auStack_198 + (int)(char)bStack_199) =
         *(byte *)((int)auStack_198 + (int)(char)bStack_199) ^ 9;
    bStack_199 = bStack_199 + 1;
  } while (bStack_199 < 4);
  bStack_199 = 0;
  do {
    bStack_199 = bStack_199 + 1;
  } while (bStack_199 < 8);
  uVar7 = uStack_157 + 8;
  if ((-8 < (int)uStack_157) && ((int)(uStack_30 - 1) >> 3 < (int)(uStack_157 + 7 >> 3))) {
    uVar8 = uVar7 * 2;
    iVar5 = uVar7 * 2;
    if (puStack_166 == auStack_142) {
      bVar1 = 0x400 < uVar7;
      uVar7 = uVar8;
      if (bVar1) {
        puStack_166 = (undefined1 *)imp_malloc(iVar5 + 7U >> 3);
        imp___aeabi_memcpy(puStack_166,auStack_142,(int)(uVar10 + 7) >> 3);
      }
    }
    else {
      puStack_166 = (undefined1 *)imp_realloc();
      uVar7 = uVar8;
      uVar10 = uStack_30;
    }
  }
  uVar8 = uStack_157;
  if ((int)uVar10 < (int)uVar7) {
    uStack_30 = uVar7;
  }
  uVar10 = uStack_30;
  uVar7 = uStack_157 & 7;
  iVar5 = (int)uStack_157 >> 3;
  if (uVar7 == 0) {
    puStack_166[iVar5] = (char)(auStack_198[0] ^ 0x532);
  }
  else {
    uVar6 = (auStack_198[0] ^ 0x532) & 0xff;
    puStack_166[iVar5] = puStack_166[iVar5] | (byte)(uVar6 >> uVar7);
    puStack_166[iVar5 + 1] = (char)(uVar6 << (8 - uVar7 & 0xff));
  }
  uVar6 = uStack_157 + 0x100;
  uVar7 = uStack_157 & 7;
  uStack_157 = uStack_157 + 8;
  if (uVar7 == 0) {
    if ((-0x100 < (int)uVar8) && ((int)(uStack_30 - 1) >> 3 < (int)(uVar8 + 0xff >> 3))) {
      uVar8 = uVar6 >> 2;
      uVar7 = uVar6 * 2;
      if (puStack_166 == auStack_142) {
        bVar1 = 0x400 < uVar6;
        uVar6 = uVar7;
        if (bVar1) {
          puStack_166 = (undefined1 *)imp_malloc(uVar8);
          imp___aeabi_memcpy(puStack_166,auStack_142,(int)(uVar10 + 7) >> 3);
        }
      }
      else {
        puStack_166 = (undefined1 *)imp_realloc();
        uVar6 = uVar7;
        uVar10 = uStack_30;
      }
    }
    if ((int)uVar10 < (int)uVar6) {
      uStack_30 = uVar6;
    }
    imp___aeabi_memcpy(puStack_166 + ((int)(uStack_157 + 7) >> 3),&bStack_1b8,0x1f);
    uStack_157 = uStack_157 + 0xf8;
  }
  else {
    if ((-0x100 < (int)uVar8) && ((int)(uStack_30 - 1) >> 3 < (int)(uVar8 + 0xff >> 3))) {
      uVar7 = uVar6 * 2;
      iVar5 = uVar6 * 2;
      if (puStack_166 == auStack_142) {
        bVar1 = 0x400 < uVar6;
        uVar6 = uVar7;
        if (bVar1) {
          puStack_166 = (undefined1 *)imp_malloc(iVar5 + 7U >> 3);
          imp___aeabi_memcpy(puStack_166,auStack_142,(int)(uVar10 + 7) >> 3);
        }
      }
      else {
        puStack_166 = (undefined1 *)imp_realloc();
        uVar6 = uVar7;
        uVar10 = uStack_30;
      }
    }
    uVar8 = 0xf8;
    uVar7 = uStack_157 & 7;
    if ((int)uVar10 < (int)uVar6) {
      uStack_30 = uVar6;
    }
    pbVar9 = &bStack_1b8;
    do {
      bVar2 = *pbVar9;
      iVar5 = (int)uStack_157 >> 3;
      if (uVar7 == 0) {
        puStack_166[iVar5] = bVar2;
      }
      else {
        puStack_166[iVar5] = puStack_166[iVar5] | bVar2 >> uVar7;
        if (8 - uVar7 < uVar8) {
          puStack_166[iVar5 + 1] = bVar2 << (8 - uVar7 & 0xff);
        }
      }
      uVar8 = uVar8 - 8;
      uStack_157 = uStack_157 + 8;
      pbVar9 = pbVar9 + 1;
    } while (uVar8 != 0);
  }
  (**(code **)(*(int *)*DAT_711f6d58 + 0x3c))((int *)*DAT_711f6d58,auStack_169,1,7,0);
  if ((cStack_3c != '\0') && (0x800 < (int)uStack_30)) {
    imp_free(puStack_166);
  }
  if (_ext___stack_chk_guard != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail();
  }
  return;
}


// =========================================================================
// Function: FUN_7175a01c
// Entry: 0x7175a01c | Size: 676 bytes
// =========================================================================

void FUN_7175a01c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_128 [64];
  short asStack_e8 [34];
  short asStack_a4 [24];
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [68];
  
  if (*(int *)(param_1 + 0x130) == 0) goto LAB_7175a188;
  iVar3 = FUN_715c9e1c();
  if (iVar3 == 0x2c0) {
    return;
  }
  iVar3 = FUN_715c9f60(*(undefined4 *)(param_1 + 0x130));
  if (iVar3 == 0x32e) {
    return;
  }
  iVar3 = FUN_715cc3a8(*(undefined4 *)(param_1 + 0x130));
  if (iVar3 == 0) goto LAB_7175a188;
  uVar4 = FUN_717b92b8(*(undefined4 *)(DAT_711f6d58 + 4),iVar3);
  iVar1 = DAT_711f6d58;
  if (uVar4 == 0xffff) {
    uVar4 = thunk_FUN_71793f90(*(undefined4 *)(DAT_711f6d58 + 8),iVar3);
    if (uVar4 >> 3 < 0x7d) {
      *(uint *)(param_1 + 0x204) = uVar4 + 2000 & 0xffff;
      if (*(char *)(*(int *)(DAT_711f6d58 + 8) + uVar4) == '\0') {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(*(int *)(DAT_711f6d58 + 8) + uVar4 * 4 + 1000);
      }
      goto LAB_7175a110;
    }
  }
  else if (uVar4 < 0x7d1) {
    *(uint *)(param_1 + 0x204) = uVar4;
    if (*(char *)(*(int *)(iVar1 + 4) + uVar4 + 0x3e88) == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(*(int *)(iVar1 + 4) + uVar4 * 4);
    }
LAB_7175a110:
    *(undefined4 *)(param_1 + 0x20c) = uVar2;
    thunk_FUN_715600f0(uVar2,auStack_64);
    thunk_FUN_715600f0(*(undefined4 *)(param_1 + 0x130),asStack_a4);
    imp___aeabi_memclr8(asStack_e8,0x40);
    imp___aeabi_memclr8(auStack_128,0x40);
    FUN_7141c894(auStack_128,auStack_64);
    FUN_7141cccc(asStack_e8,auStack_128);
    FUN_715eea98((undefined4 *)(param_1 + 0x214),asStack_e8,auStack_74);
  }
  if (*(int *)(param_1 + 0x204) != 0xffff) {
    FUN_715cc5c8(*(undefined4 *)(param_1 + 0x130),asStack_a4,asStack_e8,0);
    FUN_7136cdfc(auStack_64);
    uVar2 = 2;
    if (asStack_a4[0] != 0 || asStack_e8[0] != 0) {
      uVar2 = 1;
    }
    *(undefined4 *)(param_1 + 0x224) = uVar2;
    FUN_71760164(param_1);
    return;
  }
LAB_7175a188:
  *(undefined2 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x204) = 0xffff;
  *(undefined4 *)(param_1 + 0x214) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  *(undefined4 *)(param_1 + 0x224) = 0;
  return;
}


// =========================================================================
// Function: FUN_7175a3d4
// Entry: 0x7175a3d4 | Size: 444 bytes
// =========================================================================

void FUN_7175a3d4(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int unaff_r5;
  ushort *puVar4;
  bool bVar5;
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
  
  puVar4 = (ushort *)(param_1 + 0x228);
  if (*puVar4 != 0xffff) {
    iVar2 = FUN_71886108();
    if (2999 < (uint)(iVar2 - *(int *)(param_1 + 0x238))) {
LAB_7175a534:
      *puVar4 = 0xffff;
      return;
    }
    iVar2 = *(int *)(DAT_711f6d58 + 4);
    if ((iVar2 != 0) && (uVar3 = (uint)*puVar4, uVar3 < 0x7d1)) {
      bVar5 = *(char *)(iVar2 + uVar3 + 0x3e88) != '\0';
      if (bVar5) {
        unaff_r5 = *(int *)(iVar2 + uVar3 * 4);
      }
      if (bVar5 && unaff_r5 != 0) {
        iVar1 = *(int *)(unaff_r5 + 0xc);
        iVar2 = 0;
        if (iVar1 != 0) {
          iVar2 = *(int *)(iVar1 + 0x14);
        }
        if (iVar1 != 0 && iVar2 != 0) {
          thunk_FUN_715600f0(*(undefined4 *)(param_1 + 0x130),&uStack_a8);
          thunk_FUN_715600f0(unaff_r5,auStack_68);
          FUN_715eea98(&uStack_38,auStack_68,param_1 + 0x22c);
          uStack_78 = uStack_38;
          uStack_74 = uStack_34;
          uStack_70 = uStack_30;
          FUN_7156063c(*(undefined4 *)(param_1 + 0x130),uStack_a8,uStack_a4,uStack_a0,uStack_9c,
                       uStack_98,uStack_94,uStack_90,uStack_8c,uStack_88,uStack_84,uStack_80,
                       uStack_7c,uStack_38,uStack_34,uStack_30,uStack_6c);
          goto LAB_7175a534;
        }
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_7175a604
// Entry: 0x7175a604 | Size: 3008 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_7175a604(int param_1)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  undefined1 uVar4;
  char cVar5;
  byte bVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  byte *pbVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined2 uStack_250;
  undefined2 uStack_24e;
  undefined2 uStack_24c;
  undefined2 uStack_24a;
  undefined4 uStack_248;
  undefined4 uStack_23e;
  undefined4 uStack_23a;
  undefined4 uStack_236;
  undefined4 uStack_232;
  undefined4 uStack_22e;
  undefined1 auStack_22a [12];
  undefined1 auStack_21e [12];
  undefined2 uStack_212;
  undefined4 uStack_210;
  undefined2 uStack_208;
  undefined2 uStack_206;
  undefined2 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 auStack_1e0 [3];
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined2 uStack_1c8;
  undefined4 uStack_1c4;
  undefined2 uStack_1bc;
  undefined2 uStack_1ba;
  undefined4 auStack_1b8 [3];
  undefined1 auStack_1ac [48];
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined1 auStack_169 [3];
  undefined1 *puStack_166;
  uint uStack_157;
  undefined1 auStack_142 [258];
  undefined4 uStack_40;
  char cStack_3c;
  uint uStack_30;
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  DataMemoryBarrier(0xb);
  if (((DAT_711f6c94 & 1) == 0) && (iVar10 = cuKsjVZRyspaVsDnqLy(&DAT_711f6c94), iVar10 != 0)) {
    FUN_71886108();
    SixizuLbAnqfgRApsCY(&DAT_711f6c94);
  }
  uStack_157 = 0;
  uStack_30 = 0x800;
  cStack_3c = '\x01';
  uStack_40 = 0;
  puStack_166 = auStack_142;
  FUN_7136cdfc(auStack_1b8);
  uVar7 = FUN_715cc5c8(*(undefined4 *)(param_1 + 0x130),&uStack_1ba,&uStack_1bc,1);
  FUN_7136cdfc(&uStack_200);
  uStack_1f0 = 0;
  uStack_1ec = 0;
  uStack_1e8 = 0;
  uStack_1f4 = 0;
  FUN_7136cdfc();
  FUN_7136cdfc();
  thunk_FUN_715600f0(*(undefined4 *)(param_1 + 0x130),auStack_1ac);
  thunk_FUN_715608f0(*(undefined4 *)(param_1 + 0x130),auStack_1b8);
  uStack_200 = uStack_17c;
  uStack_1fc = uStack_178;
  uStack_1f8 = uStack_174;
  uStack_208 = uStack_1ba;
  _uStack_206 = CONCAT22(uVar7,uStack_1bc);
  FUN_71357990(&uStack_1f4,auStack_1ac);
  FUN_71358370(&uStack_1f4);
  uVar9 = uStack_1f4;
  uVar15 = *(undefined4 *)(param_1 + 0xe0);
  iVar10 = FUN_71ba2d50(uStack_1f4,uVar15);
  uVar8 = FUN_71ba240c(uVar9,uVar15);
  uVar9 = FUN_71ba240c(uVar15,uVar9);
  if (iVar10 != 0) {
    uVar9 = uVar8;
  }
  uVar16 = FUN_71ba1638(uVar9);
  iVar10 = FUN_71ba2c3c((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),0x88e368f1,0x3ee4f8b5);
  uVar9 = uStack_1f0;
  if (iVar10 != 0) {
    uVar15 = *(undefined4 *)(param_1 + 0xe4);
    iVar10 = FUN_71ba2d50(uStack_1f0,uVar15);
    uVar8 = FUN_71ba240c(uVar9,uVar15);
    uVar9 = FUN_71ba240c(uVar15,uVar9);
    if (iVar10 != 0) {
      uVar9 = uVar8;
    }
    uVar16 = FUN_71ba1638(uVar9);
    iVar10 = FUN_71ba2c3c((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),0x88e368f1,0x3ee4f8b5);
    uVar9 = uStack_1ec;
    if (iVar10 != 0) {
      uVar15 = *(undefined4 *)(param_1 + 0xe8);
      iVar10 = FUN_71ba2d50(uStack_1ec,uVar15);
      uVar8 = FUN_71ba240c(uVar9,uVar15);
      uVar9 = FUN_71ba240c(uVar15,uVar9);
      if (iVar10 != 0) {
        uVar9 = uVar8;
      }
      uVar16 = FUN_71ba1638(uVar9);
      iVar10 = FUN_71ba2c3c((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),0x88e368f1,0x3ee4f8b5);
      uVar9 = uStack_1e8;
      if (iVar10 != 0) {
        uVar15 = *(undefined4 *)(param_1 + 0xec);
        iVar10 = FUN_71ba2d50(uStack_1e8,uVar15);
        uVar8 = FUN_71ba240c(uVar9,uVar15);
        uVar9 = FUN_71ba240c(uVar15,uVar9);
        if (iVar10 != 0) {
          uVar9 = uVar8;
        }
        uVar16 = FUN_71ba1638(uVar9);
        iVar10 = FUN_71ba2c3c((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),0x88e368f1,0x3ee4f8b5);
        if (iVar10 != 0) {
          uStack_1f4 = *(undefined4 *)(param_1 + 0xe0);
          uStack_1f0 = *(undefined4 *)(param_1 + 0xe4);
          uStack_1ec = *(undefined4 *)(param_1 + 0xe8);
          uStack_1e8 = *(undefined4 *)(param_1 + 0xec);
        }
      }
    }
  }
  thunk_FUN_715c4140(*(undefined4 *)(param_1 + 0x130));
  uVar4 = FUN_71ba17bc();
  uStack_1e4 = CONCAT31(uStack_1e4._1_3_,uVar4);
  thunk_FUN_715c41bc(*(undefined4 *)(param_1 + 0x130));
  uVar4 = FUN_71ba17bc();
  uStack_1e4._0_2_ = CONCAT11(uVar4,(undefined1)uStack_1e4);
  cVar5 = FUN_715bc440(*(undefined4 *)(param_1 + 0x130));
  bVar3 = uStack_1e4._2_1_;
  uStack_1e4._0_3_ = CONCAT12(uStack_1e4._2_1_ & 0x3f | cVar5 << 6,(undefined2)uStack_1e4);
  bVar6 = FUN_715c0530(*(undefined4 *)(param_1 + 0x130));
  uStack_1e4._0_3_ = CONCAT12((bVar3 ^ bVar6) & 0x3f ^ uStack_1e4._2_1_,(undefined2)uStack_1e4);
  uVar4 = FUN_7175d0f0(param_1);
  uStack_1e4 = CONCAT13(uVar4,(undefined3)uStack_1e4);
  auStack_1e0[0] = auStack_1b8[0];
  if (*(int *)(param_1 + 0x224) == 0) {
    uStack_250 = 0;
    uStack_24e = 0;
    uStack_24c = 0;
    uStack_24a = 0;
    uStack_248 = 0;
    FUN_7136d040(&uStack_1d4,&uStack_250);
    uStack_1c8 = 0;
  }
  else {
    uStack_1d4 = *(undefined4 *)(param_1 + 0x214);
    uStack_1d0 = *(undefined4 *)(param_1 + 0x218);
    uStack_1cc = *(undefined4 *)(param_1 + 0x21c);
    uStack_1c8 = (short)*(undefined4 *)(param_1 + 0x204);
  }
  *(undefined4 *)(param_1 + 0x1d4) = 1;
  uStack_1c4 = *(undefined4 *)(param_1 + 0x1d0);
  iVar10 = FUN_716ac9ac();
  cVar5 = '\0';
  if (iVar10 != 0) {
    cVar5 = DAT_711f2a90;
  }
  if (iVar10 != 0 && cVar5 != '\0') {
    uStack_208 = DAT_711f2a92;
    _uStack_206 = CONCAT22(uStack_204,DAT_711f2a94);
  }
  iVar10 = FUN_71886108();
  if ((500 < (uint)(iVar10 - *(int *)(param_1 + 0x158))) ||
     (iVar10 = imp_memcmp(param_1 + 0xcc,&uStack_208,0x48), iVar10 != 0)) {
    uVar9 = FUN_71886108();
    uVar11 = uStack_30;
    *(undefined4 *)(param_1 + 0x158) = uVar9;
    uVar12 = uStack_157 + 8;
    if ((-8 < (int)uStack_157) && ((int)(uStack_30 - 1) >> 3 < (int)(uStack_157 + 7 >> 3))) {
      uVar13 = uVar12 * 2;
      iVar10 = uVar12 * 2;
      if (puStack_166 == auStack_142) {
        bVar1 = 0x400 < uVar12;
        uVar12 = uVar13;
        if (bVar1) {
          puStack_166 = (undefined1 *)imp_malloc(iVar10 + 7U >> 3);
          imp___aeabi_memcpy(puStack_166,auStack_142,(int)(uVar11 + 7) >> 3);
        }
      }
      else {
        puStack_166 = (undefined1 *)imp_realloc();
        uVar11 = uStack_30;
        uVar12 = uVar13;
      }
    }
    if ((int)uVar11 < (int)uVar12) {
      uStack_30 = uVar12;
    }
    uVar11 = uStack_157 & 7;
    iVar10 = (int)uStack_157 >> 3;
    if (uVar11 == 0) {
      puStack_166[iVar10] = 0xcf;
    }
    else {
      puStack_166[iVar10] = puStack_166[iVar10] | (byte)(0xcf >> uVar11);
      puStack_166[iVar10 + 1] = (char)(0xcf << (8 - uVar11 & 0xff));
    }
    uVar11 = (uint)&uStack_250 | 6;
    uStack_157 = uStack_157 + 8;
    FUN_7136cdfc(uVar11);
    uStack_232 = 0;
    uStack_236 = 0;
    uStack_23a = 0;
    uStack_23e = 0;
    FUN_7136cdfc(auStack_22a);
    FUN_7136cdfc(auStack_21e);
    uStack_250 = uStack_208;
    uStack_24e = (undefined2)_uStack_206;
    uStack_24c = (undefined2)((uint)_uStack_206 >> 0x10);
    FUN_7136d040(uVar11,&uStack_200);
    uStack_23a = uStack_1f0;
    uStack_23e = uStack_1f4;
    uStack_236 = uStack_1ec;
    uStack_232 = uStack_1e8;
    uStack_22e = uStack_1e4;
    FUN_7136d040(auStack_22a,auStack_1e0);
    FUN_7136d040(auStack_21e,&uStack_1d4);
    uVar11 = uStack_30;
    uStack_212 = uStack_1c8;
    uStack_210 = uStack_1c4;
    uVar12 = uStack_157 + 0x220;
    if ((uStack_157 & 7) == 0) {
      if ((-0x220 < (int)uStack_157) && ((int)(uStack_30 - 1) >> 3 < (int)(uStack_157 + 0x21f >> 3))
         ) {
        uVar2 = uVar12 >> 2;
        uVar13 = uVar12 * 2;
        if (puStack_166 == auStack_142) {
          bVar1 = 0x400 < uVar12;
          uVar12 = uVar13;
          if (bVar1) {
            puStack_166 = (undefined1 *)imp_malloc(uVar2);
            imp___aeabi_memcpy(puStack_166,auStack_142,(int)(uVar11 + 7) >> 3);
          }
        }
        else {
          puStack_166 = (undefined1 *)imp_realloc();
          uVar12 = uVar13;
          uVar11 = uStack_30;
        }
      }
      if ((int)uVar11 < (int)uVar12) {
        uStack_30 = uVar12;
      }
      imp___aeabi_memcpy(puStack_166 + ((int)(uStack_157 + 7) >> 3),&uStack_250,0x44);
      uStack_157 = uStack_157 + 0x220;
    }
    else {
      if ((-0x220 < (int)uStack_157) && ((int)(uStack_30 - 1) >> 3 < (int)(uStack_157 + 0x21f >> 3))
         ) {
        uVar13 = uVar12 * 2;
        iVar10 = uVar12 * 2;
        if (puStack_166 == auStack_142) {
          bVar1 = 0x400 < uVar12;
          uVar12 = uVar13;
          if (bVar1) {
            puStack_166 = (undefined1 *)imp_malloc(iVar10 + 7U >> 3);
            imp___aeabi_memcpy(puStack_166,auStack_142,(int)(uVar11 + 7) >> 3);
          }
        }
        else {
          puStack_166 = (undefined1 *)imp_realloc();
          uVar11 = uStack_30;
          uVar12 = uVar13;
        }
      }
      uVar13 = 0x220;
      if ((int)uVar11 < (int)uVar12) {
        uStack_30 = uVar12;
      }
      uVar11 = uStack_157 & 7;
      pbVar14 = (byte *)&uStack_250;
      do {
        bVar3 = *pbVar14;
        iVar10 = (int)uStack_157 >> 3;
        if (uVar11 == 0) {
          puStack_166[iVar10] = bVar3;
        }
        else {
          puStack_166[iVar10] = puStack_166[iVar10] | bVar3 >> uVar11;
          if (8 - uVar11 < uVar13) {
            puStack_166[iVar10 + 1] = bVar3 << (8 - uVar11 & 0xff);
          }
        }
        uVar13 = uVar13 - 8;
        uStack_157 = uStack_157 + 8;
        pbVar14 = pbVar14 + 1;
      } while (uVar13 != 0);
    }
    (**(code **)(*(int *)*DAT_711f6d58 + 0x3c))((int *)*DAT_711f6d58,auStack_169,1,7,0);
    imp___aeabi_memcpy4(param_1 + 0xcc,&uStack_208,0x48);
  }
  if ((cStack_3c != '\0') && (0x800 < (int)uStack_30)) {
    imp_free(puStack_166);
  }
  if (_ext___stack_chk_guard == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_7175b678
// Entry: 0x7175b678 | Size: 1528 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7175b678(int param_1)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  undefined1 uVar4;
  char cVar5;
  undefined2 uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  undefined4 uVar14;
  undefined1 auStack_1c8 [48];
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined2 uStack_16e;
  undefined2 uStack_16c;
  undefined1 auStack_169 [3];
  undefined1 *puStack_166;
  uint uStack_157;
  undefined1 auStack_142 [258];
  undefined4 uStack_40;
  char cStack_3c;
  uint uStack_30;
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  uStack_30 = 0x800;
  uStack_157 = 0;
  uStack_40 = 0;
  cStack_3c = '\x01';
  uVar14 = DAT_711f6d58[1];
  puStack_166 = auStack_142;
  uVar6 = FUN_715cc5c8(*(undefined4 *)(param_1 + 0x130),&uStack_16c,&uStack_16e,1);
  FUN_7136cdfc(&uStack_17c);
  uVar8 = thunk_FUN_715c4004(*(undefined4 *)(param_1 + 0x130));
  iVar9 = FUN_717b92b8(uVar14,uVar8);
  uStack_188 = CONCAT22(uStack_188._2_2_,(short)iVar9);
  if ((iVar9 != 0xffff) &&
     (iVar9 = thunk_FUN_715c4d3c(*(undefined4 *)(param_1 + 0x130)), iVar9 != -1)) {
    uStack_184 = CONCAT22(uStack_16c,(undefined2)uStack_184);
    uStack_180 = CONCAT22(uVar6,uStack_16e);
    thunk_FUN_715c4140(*(undefined4 *)(param_1 + 0x130));
    uVar4 = FUN_71ba17bc();
    uStack_184 = CONCAT31(uStack_184._1_3_,uVar4);
    thunk_FUN_715c41bc(*(undefined4 *)(param_1 + 0x130));
    uVar4 = FUN_71ba17bc();
    uStack_184._0_2_ = CONCAT11(uVar4,(undefined1)uStack_184);
    uVar10 = thunk_FUN_715c4d3c(*(undefined4 *)(param_1 + 0x130));
    uStack_188 = CONCAT13(uStack_188._3_1_,CONCAT12((char)uVar10,(undefined2)uStack_188)) &
                 0xff7fffff;
    cVar5 = FUN_715bc440(*(undefined4 *)(param_1 + 0x130));
    uStack_188 = CONCAT13(cVar5 << 6,(undefined3)uStack_188);
    thunk_FUN_715600f0(*(undefined4 *)(param_1 + 0x130),auStack_1c8);
    uStack_17c = uStack_198;
    uStack_178 = uStack_194;
    uStack_174 = uStack_190;
    iVar9 = FUN_71886108();
    if ((500 < (uint)(iVar9 - *(int *)(param_1 + 0x160))) ||
       (iVar9 = imp_memcmp(param_1 + 0x70,&uStack_188,0x18), iVar9 != 0)) {
      uVar8 = FUN_71886108();
      uVar7 = uStack_30;
      *(undefined4 *)(param_1 + 0x160) = uVar8;
      uVar11 = uStack_157 + 8;
      if ((-8 < (int)uStack_157) && ((int)(uStack_30 - 1) >> 3 < (int)(uStack_157 + 7 >> 3))) {
        uVar2 = uVar11 * 2;
        iVar9 = uVar11 * 2;
        if (puStack_166 == auStack_142) {
          bVar1 = 0x400 < uVar11;
          uVar11 = uVar2;
          if (bVar1) {
            puStack_166 = (undefined1 *)imp_malloc(iVar9 + 7U >> 3);
            imp___aeabi_memcpy(puStack_166,auStack_142,(int)(uVar7 + 7) >> 3);
          }
        }
        else {
          puStack_166 = (undefined1 *)imp_realloc();
          uVar7 = uStack_30;
          uVar11 = uVar2;
        }
      }
      uVar2 = uStack_157;
      if ((int)uVar7 < (int)uVar11) {
        uStack_30 = uVar11;
      }
      uVar7 = uStack_30;
      uVar11 = uStack_157 & 7;
      iVar9 = (int)uStack_157 >> 3;
      if (uVar11 == 0) {
        puStack_166[iVar9] = 0xd3;
      }
      else {
        puStack_166[iVar9] = puStack_166[iVar9] | (byte)(0xd3 >> uVar11);
        puStack_166[iVar9 + 1] = (char)(0xd3 << (8 - uVar11 & 0xff));
      }
      uVar12 = uStack_157 + 200;
      uVar11 = uStack_157 & 7;
      uStack_157 = uStack_157 + 8;
      if (uVar11 == 0) {
        if ((-200 < (int)uVar2) && ((int)(uStack_30 - 1) >> 3 < (int)(uVar2 + 199 >> 3))) {
          uVar2 = uVar12 >> 2;
          uVar11 = uVar12 * 2;
          if (puStack_166 == auStack_142) {
            bVar1 = 0x400 < uVar12;
            uVar12 = uVar11;
            if (bVar1) {
              puStack_166 = (undefined1 *)imp_malloc(uVar2);
              imp___aeabi_memcpy(puStack_166,auStack_142,(int)(uVar7 + 7) >> 3);
            }
          }
          else {
            puStack_166 = (undefined1 *)imp_realloc();
            uVar12 = uVar11;
            uVar7 = uStack_30;
          }
        }
        if ((int)uVar7 < (int)uVar12) {
          uStack_30 = uVar12;
        }
        imp___aeabi_memcpy(puStack_166 + ((int)(uStack_157 + 7) >> 3),&uStack_188,0x18);
        uStack_157 = uStack_157 + 0xc0;
      }
      else {
        if ((-200 < (int)uVar2) && ((int)(uStack_30 - 1) >> 3 < (int)(uVar2 + 199 >> 3))) {
          uVar11 = uVar12 * 2;
          iVar9 = uVar12 * 2;
          if (puStack_166 == auStack_142) {
            bVar1 = 0x400 < uVar12;
            uVar12 = uVar11;
            if (bVar1) {
              puStack_166 = (undefined1 *)imp_malloc(iVar9 + 7U >> 3);
              imp___aeabi_memcpy(puStack_166,auStack_142,(int)(uVar7 + 7) >> 3);
            }
          }
          else {
            puStack_166 = (undefined1 *)imp_realloc();
            uVar7 = uStack_30;
            uVar12 = uVar11;
          }
        }
        uVar11 = 0xc0;
        if ((int)uVar7 < (int)uVar12) {
          uStack_30 = uVar12;
        }
        uVar7 = uStack_157 & 7;
        pbVar13 = (byte *)&uStack_188;
        do {
          bVar3 = *pbVar13;
          iVar9 = (int)uStack_157 >> 3;
          if (uVar7 == 0) {
            puStack_166[iVar9] = bVar3;
          }
          else {
            puStack_166[iVar9] = puStack_166[iVar9] | bVar3 >> uVar7;
            if (8 - uVar7 < uVar11) {
              puStack_166[iVar9 + 1] = bVar3 << (8 - uVar7 & 0xff);
            }
          }
          uVar11 = uVar11 - 8;
          uStack_157 = uStack_157 + 8;
          pbVar13 = pbVar13 + 1;
        } while (uVar11 != 0);
      }
      if (uVar10 < 0xb) {
        (**(code **)(*(int *)*DAT_711f6d58 + 0x3c))((int *)*DAT_711f6d58,auStack_169,1,7,0);
      }
      *(uint *)(param_1 + 0x70) = uStack_188;
      *(undefined4 *)(param_1 + 0x74) = uStack_184;
      *(undefined4 *)(param_1 + 0x78) = uStack_180;
      *(undefined4 *)(param_1 + 0x7c) = uStack_17c;
      *(undefined4 *)(param_1 + 0x80) = uStack_178;
      *(undefined4 *)(param_1 + 0x84) = uStack_174;
    }
  }
  if ((cStack_3c != '\0') && (0x800 < (int)uStack_30)) {
    imp_free(puStack_166);
  }
  if (_ext___stack_chk_guard == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


