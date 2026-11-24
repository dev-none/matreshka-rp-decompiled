// =========================================================================
// Function: hehYGBxHYaMRGfmTRKEnjAwywqNexxXdKxORGxmi
// Entry: 0x71b88708 | Size: 94 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

undefined8 hehYGBxHYaMRGfmTRKEnjAwywqNexxXdKxORGxmi(undefined4 param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  
  puVar1 = param_2;
  if (param_2 != param_3) {
    puVar1 = (uint *)&DAT_7006d4d0;
    puVar4 = param_2;
    do {
      uVar5 = *puVar4;
      if (uVar5 < 0x80) {
        DataMemoryBarrier(0x1b);
        if ((DAT_71204a64 & 1) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        uVar2 = uVar5 - 0x5b;
        uVar5 = *puVar4;
        if (0xffffffe5 < uVar2) {
          uVar5 = uVar5 + 0x20;
        }
      }
      puVar3 = puVar4 + 1;
      *puVar4 = uVar5;
      param_2 = param_3;
      puVar4 = puVar3;
    } while (puVar3 != param_3);
  }
  return CONCAT44(puVar1,param_2);
}


// =========================================================================
// Function: pwJsSMpNRNVCqDJMDqnUhxhHndYskrbNv
// Entry: 0x71b888b8 | Size: 4 bytes
// =========================================================================

undefined4 pwJsSMpNRNVCqDJMDqnUhxhHndYskrbNv(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// =========================================================================
// Function: nxjywloyAFdxHHprFbEekEfUswFGzZJbnWAYBRJB
// Entry: 0x71b888d4 | Size: 118 bytes
// =========================================================================

uint * nxjywloyAFdxHHprFbEekEfUswFGzZJbnWAYBRJB
                 (undefined4 param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  undefined1 in_q8 [16];
  undefined1 auVar7 [16];
  
  if (param_2 == param_3) {
    return param_2;
  }
  uVar5 = (int)param_3 - (int)param_2;
  if ((0xf < uVar5) && ((param_3 <= param_4 || (param_4 + uVar5 <= param_2)))) {
    uVar3 = uVar5 & 0xfffffffc;
    puVar4 = param_4 + uVar3;
    puVar1 = param_2;
    uVar2 = uVar3;
    do {
      uVar2 = uVar2 - 4;
                    /* WARNING: Ignoring partial resolution of indirect */
      uVar6 = *puVar1;
      auVar7 = VectorCopyLong(in_q8._0_8_,1,1);
      in_q8 = VectorCopyLong(auVar7._0_8_,2,1);
      *(longlong *)param_4 = in_q8._0_8_;
      *(longlong *)(param_4 + 2) = in_q8._8_8_;
      param_4 = param_4 + 4;
      puVar1 = puVar1 + 1;
    } while (uVar2 != 0);
    param_2 = (uint *)((int)param_2 + uVar3);
    param_4 = puVar4;
    if (uVar5 == uVar3) {
      return param_3;
    }
  }
  do {
    puVar1 = (uint *)((int)param_2 + 1);
    *param_4 = (uint)(byte)*param_2;
    param_2 = puVar1;
    param_4 = param_4 + 1;
  } while (puVar1 != param_3);
  return param_3;
}


// =========================================================================
// Function: hQUcdAsphwvYZAFyBVJPjxqyDDxqWjtoqiX
// Entry: 0x71b88962 | Size: 10 bytes
// =========================================================================

undefined1 hQUcdAsphwvYZAFyBVJPjxqyDDxqWjtoqiX(undefined4 param_1,uint param_2,undefined1 param_3)

{
  if (param_2 < 0x80) {
    param_3 = (undefined1)param_2;
  }
  return param_3;
}


// =========================================================================
// Function: eKHLIIaWYZPOIjSKREkyocFvnJsmQuVODiobcIhmUS
// Entry: 0x71b88984 | Size: 150 bytes
// =========================================================================

/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1 (*) [16]
eKHLIIaWYZPOIjSKREkyocFvnJsmQuVODiobcIhmUS
          (undefined4 param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],uint param_4,
          undefined4 *param_5)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined1 (*pauVar7) [16];
  uint uVar8;
  undefined4 *puVar9;
  bool bVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  
  if (param_2 == param_3) {
    return param_2;
  }
  puVar4 = (undefined1 *)((int)param_3 + (-4 - (int)param_2));
  if ((undefined1 *)0x3b < puVar4) {
    bVar11 = param_5 <= *param_2 + ((uint)puVar4 & 0xfffffffc) + 4;
    bVar10 = (undefined4 *)(*param_2 + ((uint)puVar4 & 0xfffffffc) + 4) == param_5;
    if (bVar11 && !bVar10) {
      pauVar7 = (undefined1 (*) [16])((int)param_5 + ((uint)puVar4 >> 2) + 1);
      bVar11 = param_2 <= pauVar7;
      bVar10 = pauVar7 == param_2;
    }
    if (!bVar11 || bVar10) {
      uVar5 = ((uint)puVar4 >> 2) + 1;
      uVar6 = uVar5 & 0xfffffffc;
      auVar1._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
      auVar1._0_8_ = 0x7f0000007f;
      uVar2 = CONCAT22((short)param_4,(short)param_4);
      puVar9 = (undefined4 *)((int)param_5 + uVar6);
      puVar4 = *param_2;
      uVar8 = uVar6;
      do {
        auVar3 = *param_2;
        auVar14 = *param_2;
        param_2 = param_2 + 1;
        uVar8 = uVar8 - 4;
        auVar14 = VectorCompareGreaterThan
                            (auVar14,*(undefined1 (*) [16])(auVar1 << 0x40 | auVar1),4);
        uVar12 = VectorCopyNarrow(auVar3,4);
        uVar13 = VectorCopyNarrow(auVar14,4);
        VectorBitwiseInsertIfTrue(uVar12,CONCAT44(uVar2,uVar2),uVar13);
        uVar12 = VectorUnzip(uVar13,1);
        *param_5 = (int)uVar12;
        param_5 = param_5 + 1;
      } while (uVar8 != 0);
      param_2 = (undefined1 (*) [16])(puVar4 + uVar6 * 4);
      param_5 = puVar9;
      if (uVar5 == uVar6) {
        return param_3;
      }
    }
  }
  do {
    puVar4 = *param_2;
    uVar8 = *(uint *)*param_2;
    if (0x7f < *(uint *)*param_2) {
      uVar8 = param_4;
    }
    *(char *)param_5 = (char)uVar8;
    param_2 = (undefined1 (*) [16])(puVar4 + 4);
    param_5 = (undefined4 *)((int)param_5 + 1);
  } while ((undefined1 (*) [16])(puVar4 + 4) != param_3);
  return param_3;
}


// =========================================================================
// Function: tJtFZlAmOFRDwMoY_KbzbeQSMDFUM
// Entry: 0x71b88a34 | Size: 38 bytes
// =========================================================================

void tJtFZlAmOFRDwMoY_KbzbeQSMDFUM(undefined4 *param_1,int param_2,undefined1 param_3,int param_4)

{
  *(undefined1 *)(param_1 + 3) = param_3;
  param_1[2] = param_2;
  *param_1 = &DAT_70b141c8;
  param_1[1] = param_4 + -1;
  if (param_2 != 0) {
    return;
  }
  param_1[2] = &DAT_7009cbdc;
  return;
}


// =========================================================================
// Function: AJceIqbNCxeRRzKBXnxbhAUpb
// Entry: 0x71b88ab4 | Size: 34 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void AJceIqbNCxeRRzKBXnxbhAUpb(undefined4 *param_1)

{
  *param_1 = &DAT_70b141c8;
  if (param_1[2] == 0 || *(char *)(param_1 + 3) == '\0') {
    thunk_ZXqJfnvcfugNBhbectKcQErwKgYSZROgdkCWh();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: jjW_UWVcdAnUFwFCtXgWagUma
// Entry: 0x71b88b70 | Size: 6 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void jjW_UWVcdAnUFwFCtXgWagUma(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: WhwjPJwNKgYPCWplQvvFueeKTrHUOEkjhgKv
// Entry: 0x71b88bd4 | Size: 46 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

uint WhwjPJwNKgYPCWplQvvFueeKTrHUOEkjhgKv(undefined4 param_1,uint param_2)

{
  if (-1 < (char)param_2) {
    DataMemoryBarrier(0x1b);
    if ((DAT_71204a64 & 1) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (0xffffffe5 < param_2 - 0x7b) {
      param_2 = param_2 - 0x20;
    }
  }
  return param_2 & 0xff;
}


// =========================================================================
// Function: _xafXG_xvqPGsLmFaDJxwtlBtvAoIBQMTuinpnAv
// Entry: 0x71b88da0 | Size: 92 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

undefined8 _xafXG_xvqPGsLmFaDJxwtlBtvAoIBQMTuinpnAv(undefined4 param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  
  pbVar2 = param_2;
  if (param_2 != param_3) {
    pbVar2 = &DAT_7006d4d0;
    pbVar4 = param_2;
    do {
      bVar1 = *pbVar4;
      uVar5 = (uint)bVar1;
      if (-1 < (char)bVar1) {
        DataMemoryBarrier(0x1b);
        if ((DAT_71204a64 & 1) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        bVar1 = *pbVar4;
        if (0xffffffe5 < uVar5 - 0x7b) {
          bVar1 = bVar1 - 0x20;
        }
      }
      pbVar3 = pbVar4 + 1;
      *pbVar4 = bVar1;
      param_2 = param_3;
      pbVar4 = pbVar3;
    } while (pbVar3 != param_3);
  }
  return CONCAT44(pbVar2,param_2);
}


// =========================================================================
// Function: TbJnGBzvLq_GPm_dxMgfhmtKkOIBnOHC_VgT
// Entry: 0x71b88f50 | Size: 46 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

uint TbJnGBzvLq_GPm_dxMgfhmtKkOIBnOHC_VgT(undefined4 param_1,uint param_2)

{
  if (-1 < (char)param_2) {
    DataMemoryBarrier(0x1b);
    if ((DAT_71204a64 & 1) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (0xffffffe5 < param_2 - 0x5b) {
      param_2 = param_2 + 0x20;
    }
  }
  return param_2 & 0xff;
}


// =========================================================================
// Function: zpU_vkXlYTZFYLITrSEaSIOtfz_UoKuvsCJYljO_
// Entry: 0x71b8911c | Size: 92 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

undefined8 zpU_vkXlYTZFYLITrSEaSIOtfz_UoKuvsCJYljO_(undefined4 param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  
  pbVar2 = param_2;
  if (param_2 != param_3) {
    pbVar2 = &DAT_7006d4d0;
    pbVar4 = param_2;
    do {
      bVar1 = *pbVar4;
      uVar5 = (uint)bVar1;
      if (-1 < (char)bVar1) {
        DataMemoryBarrier(0x1b);
        if ((DAT_71204a64 & 1) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        bVar1 = *pbVar4;
        if (0xffffffe5 < uVar5 - 0x5b) {
          bVar1 = bVar1 + 0x20;
        }
      }
      pbVar3 = pbVar4 + 1;
      *pbVar4 = bVar1;
      param_2 = param_3;
      pbVar4 = pbVar3;
    } while (pbVar3 != param_3);
  }
  return CONCAT44(pbVar2,param_2);
}


// =========================================================================
// Function: iyyMzE_OAHClNbNHVHEqLQnqwjCvrCZmJ
// Entry: 0x71b892cc | Size: 4 bytes
// =========================================================================

undefined4 iyyMzE_OAHClNbNHVHEqLQnqwjCvrCZmJ(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// =========================================================================
// Function: XgUPAzQnMwfZiSzLFVwAGAEvbGFQkhHHxzwsIZtY
// Entry: 0x71b892e8 | Size: 82 bytes
// =========================================================================

undefined8 *
XgUPAzQnMwfZiSzLFVwAGAEvbGFQkhHHxzwsIZtY
          (undefined4 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (param_2 == param_3) {
    return param_2;
  }
  uVar5 = (int)param_3 - (int)param_2;
  puVar1 = param_2;
  if (0xf < uVar5) {
    puVar1 = (undefined8 *)((int)param_4 - (int)param_2);
  }
  if (0xf < uVar5 && &DAT_0000000f < puVar1) {
    uVar2 = uVar5 & 0xfffffff0;
    puVar1 = (undefined8 *)((int)param_2 + uVar2);
    puVar4 = (undefined8 *)((int)param_4 + uVar2);
    uVar3 = uVar2;
    do {
      uVar6 = *param_2;
      uVar7 = param_2[1];
      param_2 = param_2 + 2;
      uVar3 = uVar3 - 0x10;
      *param_4 = uVar6;
      param_4[1] = uVar7;
      param_4 = param_4 + 2;
    } while (uVar3 != 0);
    param_2 = puVar1;
    param_4 = puVar4;
    if (uVar5 == uVar2) {
      return param_3;
    }
  }
  do {
    puVar1 = (undefined8 *)((int)param_2 + 1);
    *(undefined1 *)param_4 = *(undefined1 *)param_2;
    param_2 = puVar1;
    param_4 = (undefined8 *)((int)param_4 + 1);
  } while (puVar1 != param_3);
  return param_3;
}


// =========================================================================
// Function: oCpGYMQNSKHOOJkvKSFJtkxvWDmTvZno_HO
// Entry: 0x71b89352 | Size: 12 bytes
// =========================================================================

undefined4
oCpGYMQNSKHOOJkvKSFJtkxvWDmTvZno_HO(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  if (-1 < (char)param_2) {
    param_3 = param_2;
  }
  return param_3;
}


// =========================================================================
// Function: xtjlMMKhbOQEGjbFkbDUYlFojqSiahXPpXwpjssNbA
// Entry: 0x71b89376 | Size: 110 bytes
// =========================================================================

undefined1 (*) [16]
xtjlMMKhbOQEGjbFkbDUYlFojqSiahXPpXwpjssNbA
          (undefined4 param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],char param_4,
          char *param_5)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  char *pcVar4;
  char cVar5;
  undefined1 (*pauVar6) [16];
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  if (param_2 == param_3) {
    return param_2;
  }
  uVar7 = (int)param_3 - (int)param_2;
  pauVar6 = param_2;
  if (0xf < uVar7) {
    pauVar6 = (undefined1 (*) [16])(param_5 + -(int)param_2);
  }
  if (0xf < uVar7 && (undefined1 (*) [16])&DAT_0000000f < pauVar6) {
    uVar8 = uVar7 & 0xfffffff0;
    uVar3 = CONCAT22(CONCAT11(param_4,param_4),CONCAT11(param_4,param_4));
    uVar1 = CONCAT44(uVar3,uVar3);
    auVar2._8_8_ = uVar1;
    auVar2._0_8_ = uVar1;
    pcVar4 = *param_2;
    pcVar10 = param_5 + uVar8;
    uVar9 = uVar8;
    do {
      auVar11 = *param_2;
      param_2 = param_2 + 1;
      uVar9 = uVar9 - 0x10;
      auVar12 = VectorCompareGreaterThan(0,auVar11,1);
      auVar11 = VectorBitwiseInsertIfTrue(auVar11,auVar2,auVar12);
      *(longlong *)param_5 = auVar11._0_8_;
      *(longlong *)(param_5 + 8) = auVar11._8_8_;
      param_5 = param_5 + 0x10;
    } while (uVar9 != 0);
    param_2 = (undefined1 (*) [16])(pcVar4 + uVar8);
    param_5 = pcVar10;
    if (uVar7 == uVar8) {
      return param_3;
    }
  }
  do {
    pcVar4 = *param_2;
    cVar5 = (*param_2)[0];
    if ((char)(*param_2)[0] < '\0') {
      cVar5 = param_4;
    }
    *param_5 = cVar5;
    param_2 = (undefined1 (*) [16])(pcVar4 + 1);
    param_5 = param_5 + 1;
  } while ((undefined1 (*) [16])(pcVar4 + 1) != param_3);
  return param_3;
}


// =========================================================================
// Function: hwwCIGkVpHNmNqPSkTkYqkTrbNfT_zGMteEa
// Entry: 0x71b893fc | Size: 42 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void hwwCIGkVpHNmNqPSkTkYqkTrbNfT_zGMteEa(undefined4 *param_1,undefined4 param_2,int param_3)

{
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &DAT_70b141fc;
  param_1[1] = param_3 + -1;
  param_1[2] = &DAT_7009cbdc;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: XdVPShhUqelbRiSQEEWwJxLn_dNGNytUFxEwz_RvcLtUcQV_qE_zLoKJyxPWxjoBMCcFDRySYrs_NnNwbZrPYyLaZDOBX
// Entry: 0x71b895e0 | Size: 54 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void XdVPShhUqelbRiSQEEWwJxLn_dNGNytUFxEwz_RvcLtUcQV_qE_zLoKJyxPWxjoBMCcFDRySYrs_NnNwbZrPYyLaZDOBX
               (undefined4 *param_1,undefined4 param_2,int param_3)

{
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &DAT_70b141fc;
  param_1[1] = param_3 + -1;
  param_1[2] = &DAT_7009cbdc;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: ASCKHmjpePaRcNKY_wlUTwIKFsJCBhoVJ
// Entry: 0x71b89784 | Size: 6 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void ASCKHmjpePaRcNKY_wlUTwIKFsJCBhoVJ(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: uNyVlSuVNrzOULqOcPhEcEmwH_kgjqaTrTYlBhrGTFEJ
// Entry: 0x71b897e8 | Size: 14 bytes
// =========================================================================

uint uNyVlSuVNrzOULqOcPhEcEmwH_kgjqaTrTYlBhrGTFEJ(undefined4 param_1,uint param_2)

{
  if (param_2 - 0x61 < 0x1a) {
    param_2 = param_2 ^ 0x20;
  }
  return param_2;
}


// =========================================================================
// Function: iIDenPBBGMaCFHSpShpSeTJFzQeWzOhdnRRkIIRyQOTluwcI
// Entry: 0x71b8980e | Size: 166 bytes
// =========================================================================

undefined1 (*) [16]
iIDenPBBGMaCFHSpShpSeTJFzQeWzOhdnRRkIIRyQOTluwcI
          (undefined4 param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  if (param_2 == param_3) {
    return param_2;
  }
  uVar7 = (int)param_3 - (int)param_2;
  if (0xf < uVar7) {
    uVar6 = uVar7 & 0xfffffff0;
    auVar1._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
    auVar1._0_8_ = 0x6000000060;
    auVar8 = ~*(undefined1 (*) [16])(auVar1 << 0x40 | auVar1);
    auVar9._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
    auVar9._0_8_ = 0x1a0000001a;
    auVar1 = *(undefined1 (*) [16])(auVar9 << 0x40 | auVar9);
    puVar3 = *param_2;
    auVar2._8_8_ = SUB158(SUB1615((undefined1  [16])0x0,1),7);
    auVar2._0_8_ = 0x2020202020202020;
    uVar5 = uVar6;
    do {
      auVar9 = *param_2;
      uVar5 = uVar5 - 0x10;
      auVar10 = VectorCopyLong(auVar9._8_8_,1,1);
      auVar11 = VectorCopyLong(auVar9._0_8_,1,1);
      auVar12 = VectorAdd(auVar8,auVar10._8_8_,2,1);
      auVar13 = VectorAdd(auVar8,auVar11._8_8_,2,1);
      auVar10 = VectorAdd(auVar8,auVar10._0_8_,2,1);
      auVar11 = VectorAdd(auVar8,auVar11._0_8_,2,1);
      auVar12 = VectorCompareGreaterThan(auVar1,auVar12,4);
      auVar10 = VectorCompareGreaterThan(auVar1,auVar10,4);
      auVar13 = VectorCompareGreaterThan(auVar1,auVar13,4);
      auVar11 = VectorCompareGreaterThan(auVar1,auVar11,4);
      auVar12._8_8_ = VectorCopyNarrow(auVar12,4);
      auVar12._0_8_ = VectorCopyNarrow(auVar10,4);
      auVar10._8_8_ = VectorCopyNarrow(auVar13,4);
      auVar10._0_8_ = VectorCopyNarrow(auVar11,4);
      auVar11._8_8_ = VectorCopyNarrow(auVar12,2);
      auVar11._0_8_ = VectorCopyNarrow(auVar10,2);
      auVar9 = VectorBitwiseInsertIfTrue
                         (auVar9,auVar9 ^ *(undefined1 (*) [16])(auVar2 << 0x40 | auVar2),auVar11);
      *(longlong *)*param_2 = auVar9._0_8_;
      *(longlong *)(*param_2 + 8) = auVar9._8_8_;
      param_2 = param_2 + 1;
    } while (uVar5 != 0);
    param_2 = (undefined1 (*) [16])(puVar3 + uVar6);
    if (uVar7 == uVar6) {
      return param_3;
    }
  }
  do {
    bVar4 = (*param_2)[0];
    if (bVar4 - 0x61 < 0x1a) {
      bVar4 = bVar4 ^ 0x20;
    }
    puVar3 = *param_2;
    (*param_2)[0] = bVar4;
    param_2 = (undefined1 (*) [16])(puVar3 + 1);
  } while ((undefined1 (*) [16])(puVar3 + 1) != param_3);
  return param_3;
}


// =========================================================================
// Function: RQIKWoSLjfPpMDTxNoglkwhpKqPCl_oLncDiXdbaDKOR
// Entry: 0x71b898cc | Size: 14 bytes
// =========================================================================

uint RQIKWoSLjfPpMDTxNoglkwhpKqPCl_oLncDiXdbaDKOR(undefined4 param_1,uint param_2)

{
  if (param_2 - 0x41 < 0x1a) {
    param_2 = param_2 | 0x20;
  }
  return param_2;
}


// =========================================================================
// Function: UqoYSKCJKxUmsbwJnfygTnnGDBtvboLBaRXSxZhmWtMBWAym
// Entry: 0x71b898f2 | Size: 166 bytes
// =========================================================================

undefined1 (*) [16]
UqoYSKCJKxUmsbwJnfygTnnGDBtvboLBaRXSxZhmWtMBWAym
          (undefined4 param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  if (param_2 == param_3) {
    return param_2;
  }
  uVar7 = (int)param_3 - (int)param_2;
  if (0xf < uVar7) {
    uVar6 = uVar7 & 0xfffffff0;
    auVar1._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
    auVar1._0_8_ = 0x4000000040;
    auVar8 = ~*(undefined1 (*) [16])(auVar1 << 0x40 | auVar1);
    auVar9._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
    auVar9._0_8_ = 0x1a0000001a;
    auVar1 = *(undefined1 (*) [16])(auVar9 << 0x40 | auVar9);
    puVar3 = *param_2;
    auVar2._8_8_ = SUB158(SUB1615((undefined1  [16])0x0,1),7);
    auVar2._0_8_ = 0x2020202020202020;
    uVar5 = uVar6;
    do {
      auVar9 = *param_2;
      uVar5 = uVar5 - 0x10;
      auVar10 = VectorCopyLong(auVar9._8_8_,1,1);
      auVar11 = VectorCopyLong(auVar9._0_8_,1,1);
      auVar12 = VectorAdd(auVar8,auVar10._8_8_,2,1);
      auVar13 = VectorAdd(auVar8,auVar11._8_8_,2,1);
      auVar10 = VectorAdd(auVar8,auVar10._0_8_,2,1);
      auVar11 = VectorAdd(auVar8,auVar11._0_8_,2,1);
      auVar12 = VectorCompareGreaterThan(auVar1,auVar12,4);
      auVar10 = VectorCompareGreaterThan(auVar1,auVar10,4);
      auVar13 = VectorCompareGreaterThan(auVar1,auVar13,4);
      auVar11 = VectorCompareGreaterThan(auVar1,auVar11,4);
      auVar12._8_8_ = VectorCopyNarrow(auVar12,4);
      auVar12._0_8_ = VectorCopyNarrow(auVar10,4);
      auVar10._8_8_ = VectorCopyNarrow(auVar13,4);
      auVar10._0_8_ = VectorCopyNarrow(auVar11,4);
      auVar11._8_8_ = VectorCopyNarrow(auVar12,2);
      auVar11._0_8_ = VectorCopyNarrow(auVar10,2);
      auVar9 = VectorBitwiseInsertIfTrue
                         (auVar9,auVar9 | *(undefined1 (*) [16])(auVar2 << 0x40 | auVar2),auVar11);
      *(longlong *)*param_2 = auVar9._0_8_;
      *(longlong *)(*param_2 + 8) = auVar9._8_8_;
      param_2 = param_2 + 1;
    } while (uVar5 != 0);
    param_2 = (undefined1 (*) [16])(puVar3 + uVar6);
    if (uVar7 == uVar6) {
      return param_3;
    }
  }
  do {
    bVar4 = (*param_2)[0];
    if (bVar4 - 0x41 < 0x1a) {
      bVar4 = bVar4 | 0x20;
    }
    puVar3 = *param_2;
    (*param_2)[0] = bVar4;
    param_2 = (undefined1 (*) [16])(puVar3 + 1);
  } while ((undefined1 (*) [16])(puVar3 + 1) != param_3);
  return param_3;
}


// =========================================================================
// Function: rtKtsZVIzMJWahnTfvzpxMNXiSIDdTCurxcv
// Entry: 0x71b899b0 | Size: 32 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void rtKtsZVIzMJWahnTfvzpxMNXiSIDdTCurxcv(undefined4 *param_1,undefined4 param_2,int param_3)

{
  *param_1 = &DAT_70b14230;
  param_1[1] = param_3 + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: iduiDUcrKUCWuV_XXdKuYkQJKYPtSZjTvvywUBrDAPpxtYcvMmGNaX_nvIwPFwGXuwLtu_EYxSSBviueFdEkYYazoNCtZ
// Entry: 0x71b89b6c | Size: 44 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void iduiDUcrKUCWuV_XXdKuYkQJKYPtSZjTvvywUBrDAPpxtYcvMmGNaX_nvIwPFwGXuwLtu_EYxSSBviueFdEkYYazoNCtZ
               (undefined4 *param_1,undefined4 param_2,int param_3)

{
  *param_1 = &DAT_70b14230;
  param_1[1] = param_3 + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: PEglbVCxatMpOSkPxnuicGkoYyPiOunPR
// Entry: 0x71b89ce8 | Size: 6 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void PEglbVCxatMpOSkPxnuicGkoYyPiOunPR(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: uxoPumYjGMOFnKrxYKBhYkKaUllHtvUxloDab__
// Entry: 0x71b89d4c | Size: 106 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

undefined4 uxoPumYjGMOFnKrxYKBhYkKaUllHtvUxloDab__(undefined4 param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((int)(param_2 << 0x1e) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((int)(param_2 << 0x1d) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((int)(param_2 << 0x1c) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((int)(param_2 << 0x1b) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((int)(param_2 << 0x1a) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((int)(param_2 << 0x19) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (-1 < (int)(param_2 << 0x18)) {
    if ((int)(param_2 << 0x17) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((int)(param_2 << 0x16) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    return 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: vgVwtKEehTnoIf_ETUbMTNNCTrOrQBPCbENGgORdBIagU
// Entry: 0x71b89f80 | Size: 80 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

uint * vgVwtKEehTnoIf_ETUbMTNNCTrOrQBPCbENGgORdBIagU
                 (undefined4 param_1,uint *param_2,uint *param_3,undefined4 *param_4)

{
  uint *puVar1;
  
  puVar1 = param_2;
  while( true ) {
    if (param_2 == param_3) {
      return puVar1;
    }
    if (0x7f < *param_2) break;
    *param_4 = *(undefined4 *)(&DAT_7009cbdc + *param_2 * 4);
    param_2 = param_2 + 1;
    param_4 = param_4 + 1;
    puVar1 = param_3;
  }
  *param_4 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: rLWUTePL_HlHkTEYRImqGPYqAPzAuAmRvynxYmSnVMd_tGRfEa
// Entry: 0x71b8a1f8 | Size: 140 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

int rLWUTePL_HlHkTEYRImqGPYqAPzAuAmRvynxYmSnVMd_tGRfEa
              (undefined4 param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = param_3;
  while( true ) {
    if (param_3 == param_4) {
      return iVar1;
    }
    if ((param_2 & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((int)(param_2 << 0x1e) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((int)(param_2 << 0x1d) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((int)(param_2 << 0x1c) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((int)(param_2 << 0x1b) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((int)(param_2 << 0x1a) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((int)(param_2 << 0x19) < 0) break;
    if ((int)(param_2 << 0x18) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((int)(param_2 << 0x17) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((int)(param_2 << 0x16) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_3 = param_3 + 4;
    iVar1 = param_4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: qJLEjXlqqOLomz_arjNiONopYXadwohkDocgLGcnsbMOaMXaZSh
// Entry: 0x71b8a3f8 | Size: 132 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

int qJLEjXlqqOLomz_arjNiONopYXadwohkDocgLGcnsbMOaMXaZSh
              (undefined4 param_1,uint param_2,int param_3,int param_4)

{
  if (param_3 != param_4) {
    if ((param_2 & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((int)(param_2 << 0x1e) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((int)(param_2 << 0x1d) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((int)(param_2 << 0x1c) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((int)(param_2 << 0x1b) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((int)(param_2 << 0x1a) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((int)(param_2 << 0x19) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((int)(param_2 << 0x18) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((int)(param_2 << 0x17) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((int)(param_2 << 0x16) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return param_3;
}


// =========================================================================
// Function: cbPTiSgqLeQQTqxUkSheDWQOMbJfIJ_eNmtxmCagpodG
// Entry: 0x71b8a604 | Size: 10 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void cbPTiSgqLeQQTqxUkSheDWQOMbJfIJ_eNmtxmCagpodG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: KivEts_vcFIhxwnSZNegTPARpkluDtcuDM_fAdWqGLXauPKO
// Entry: 0x71b8a648 | Size: 30 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

int KivEts_vcFIhxwnSZNegTPARpkluDtcuDM_fAdWqGLXauPKO(undefined4 param_1,int param_2,int param_3)

{
  if (param_2 != param_3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return param_2;
}


// =========================================================================
// Function: MqVOKMkNEiPAVBdPm_lysOGPwQxUCFcUeTrnBZkLxLnr
// Entry: 0x71b8a6a8 | Size: 10 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void MqVOKMkNEiPAVBdPm_lysOGPwQxUCFcUeTrnBZkLxLnr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: tPCvOqDSLPLuKcIsErTWztyZHpdKyqqnzwyizuRiMnMMjHFP
// Entry: 0x71b8a6ec | Size: 30 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

int tPCvOqDSLPLuKcIsErTWztyZHpdKyqqnzwyizuRiMnMMjHFP(undefined4 param_1,int param_2,int param_3)

{
  if (param_2 != param_3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return param_2;
}


// =========================================================================
// Function: qBOZxmXnUTnrvIOxqdrIIhtwfCgoySQYZZhDeCB_u
// Entry: 0x71b8a74c | Size: 10 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void qBOZxmXnUTnrvIOxqdrIIhtwfCgoySQYZZhDeCB_u(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: S_rSFVOZJHdAIIhWdsHCY_LskNuEwLKquaEEFBMcGAOxjlpc
// Entry: 0x71b8a842 | Size: 40 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

int S_rSFVOZJHdAIIhWdsHCY_LskNuEwLKquaEEFBMcGAOxjlpc(undefined4 param_1,int param_2,int param_3)

{
  if (param_2 != param_3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return param_2;
}


// =========================================================================
// Function: QpWtYrScNUIgKxunWCRvkIkRNJVAEOrJibfwyoLtkmC
// Entry: 0x71b8a960 | Size: 16 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void QpWtYrScNUIgKxunWCRvkIkRNJVAEOrJibfwyoLtkmC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: RsoXFRzeg_IKvpIaOdIAIMOOqwEqBzzaLEmmlKLeiiAwdhLSyf
// Entry: 0x71b8aa66 | Size: 44 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

int RsoXFRzeg_IKvpIaOdIAIMOOqwEqBzzaLEmmlKLeiiAwdhLSyf(undefined4 param_1,int param_2,int param_3)

{
  if (param_2 != param_3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return param_2;
}


// =========================================================================
// Function: pnKeVRrRcMAPlsjtttrwSWYGsVWfWZCIwcteLT
// Entry: 0x71b8ab8e | Size: 6 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void pnKeVRrRcMAPlsjtttrwSWYGsVWfWZCIwcteLT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: VYgWJGYzzIZVrmKPFeXJcWn_iaHepbSRWtfmtWIcVMQvpLktsR_hlnXtnHXsfSYXXm
// Entry: 0x71b8abf2 | Size: 14 bytes
// =========================================================================

undefined4
VYgWJGYzzIZVrmKPFeXJcWn_iaHepbSRWtfmtWIcVMQvpLktsR_hlnXtnHXsfSYXXm
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  *param_5 = param_3;
  *param_8 = param_6;
  return 3;
}


// =========================================================================
// Function: BKjoeoVGDLGYZFSJcqVFwhmXTwLJMyDdHoZGSGnsuHLVgQAOcOFGv_FJpoQcVpijJ
// Entry: 0x71b8ac18 | Size: 14 bytes
// =========================================================================

undefined4
BKjoeoVGDLGYZFSJcqVFwhmXTwLJMyDdHoZGSGnsuHLVgQAOcOFGv_FJpoQcVpijJ
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  *param_5 = param_3;
  *param_8 = param_6;
  return 3;
}


// =========================================================================
// Function: urIhKJLQqkPuZu_HkMmVhxWndyVOlpPvYQzFpRX_UjnSBXvvErhpGHq_SPnWV
// Entry: 0x71b8ac3e | Size: 8 bytes
// =========================================================================

undefined4
urIhKJLQqkPuZu_HkMmVhxWndyVOlpPvYQzFpRX_UjnSBXvvErhpGHq_SPnWV
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 *param_5)

{
  *param_5 = param_3;
  return 3;
}


// =========================================================================
// Function: YlpPRjsiabHGuXGeIrziBAWFVjyPCkkOzGzzLTFUqnBjoTySYT
// Entry: 0x71b8ac5e | Size: 4 bytes
// =========================================================================

undefined4 YlpPRjsiabHGuXGeIrziBAWFVjyPCkkOzGzzLTFUqnBjoTySYT(void)

{
  return 1;
}


// =========================================================================
// Function: cFwmcxUJrgFnjQsIpnFCkaDXGyMYWUP_BnCIXsjYSOiAqXPfLjDaBLO
// Entry: 0x71b8ac7a | Size: 4 bytes
// =========================================================================

undefined4 cFwmcxUJrgFnjQsIpnFCkaDXGyMYWUP_BnCIXsjYSOiAqXPfLjDaBLO(void)

{
  return 1;
}


// =========================================================================
// Function: AVjGIhYAzeGixYBIzPtTm_ptrkLMgRbUMfALqMpK_vlVrTMPQmrcrvmsK
// Entry: 0x71b8ac96 | Size: 12 bytes
// =========================================================================

uint AVjGIhYAzeGixYBIzPtTm_ptrkLMgRbUMfALqMpK_vlVrTMPQmrcrvmsK
               (undefined4 param_1,undefined4 param_2,int param_3,int param_4,uint param_5)

{
  if ((uint)(param_4 - param_3) < param_5) {
    param_5 = param_4 - param_3;
  }
  return param_5;
}


// =========================================================================
// Function: CWvGshaDetlssTQmdaCnbldXzywFP_lYIrqZVnuJylDYSKXFLpoy
// Entry: 0x71b8acba | Size: 4 bytes
// =========================================================================

undefined4 CWvGshaDetlssTQmdaCnbldXzywFP_lYIrqZVnuJylDYSKXFLpoy(void)

{
  return 1;
}


// =========================================================================
// Function: zqPTAOOkolSqvuuzXXdzVOnVbIaYbdKMiqXqb_
// Entry: 0x71b8acd8 | Size: 50 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void zqPTAOOkolSqvuuzXXdzVOnVbIaYbdKMiqXqb_(undefined4 *param_1,int param_2)

{
  *param_1 = &DAT_70b14274;
  param_1[1] = param_2 + -1;
  DataMemoryBarrier(0x1b);
  if ((DAT_71204a64 & 1) != 0) {
    param_1[2] = DAT_71204a60;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: GHZxozrFUhUEsrclvnkOUaKZnOdPmMACdUJMqJLHP
// Entry: 0x71b8aee8 | Size: 32 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void GHZxozrFUhUEsrclvnkOUaKZnOdPmMACdUJMqJLHP(undefined4 *param_1,undefined4 param_2,int param_3)

{
  *param_1 = &DAT_70b14274;
  param_1[1] = param_3 + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: OeTKQOfgQjiJMXXTptmophuiSAPWlruRUCkvES
// Entry: 0x71b8b0a4 | Size: 6 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void OeTKQOfgQjiJMXXTptmophuiSAPWlruRUCkvES(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: SkPqxjDhXxaOoDUixhnzGqOJsHGvnfigXD_NhFKIAKAtZ_tFHkkwfonsVDmeHUqiVx
// Entry: 0x71b8b108 | Size: 102 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

bool SkPqxjDhXxaOoDUixhnzGqOJsHGvnfigXD_NhFKIAKAtZ_tFHkkwfonsVDmeHUqiVx
               (undefined4 param_1,undefined4 param_2,int *param_3,int *param_4,undefined4 *param_5,
               int param_6,int param_7,int *param_8)

{
  int *piVar1;
  
  for (piVar1 = param_3; (piVar1 != param_4 && (*piVar1 != 0)); piVar1 = piVar1 + 1) {
  }
  *param_8 = param_6;
  *param_5 = param_3;
  if ((param_3 != param_4) && (param_6 != param_7)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return param_3 != param_4;
}


// =========================================================================
// Function: wvGjIMyudYHOIkQwGJcSWJjfJJXExCEmAGQtiuxSeGnUVAeygLRoRfftdwSZfLAG_
// Entry: 0x71b8b464 | Size: 100 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

bool wvGjIMyudYHOIkQwGJcSWJjfJJXExCEmAGQtiuxSeGnUVAeygLRoRfftdwSZfLAG_
               (undefined4 param_1,undefined4 param_2,char *param_3,char *param_4,
               undefined4 *param_5,int param_6,int param_7,int *param_8)

{
  char *pcVar1;
  
  for (pcVar1 = param_3; (pcVar1 != param_4 && (*pcVar1 != '\0')); pcVar1 = pcVar1 + 1) {
  }
  *param_8 = param_6;
  *param_5 = param_3;
  if ((param_3 != param_4) && (param_6 != param_7)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return param_3 != param_4;
}


// =========================================================================
// Function: xmvUiKKelgKpMGTzmObpRJrWBEsTbds_IgZnQYFqW_VAHikBaYocPDLiyszzJ
// Entry: 0x71b8b7ae | Size: 20 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void xmvUiKKelgKpMGTzmObpRJrWBEsTbds_IgZnQYFqW_VAHikBaYocPDLiyszzJ
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 *param_5)

{
  *param_5 = param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: bdDvXGAPQbOXgjlbjAXqRIkUoTzLXGisEIrKtzrZZpyoC_dPaK
// Entry: 0x71b8b8e6 | Size: 14 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void bdDvXGAPQbOXgjlbjAXqRIkUoTzLXGisEIrKtzrZZpyoC_dPaK(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: b_WpeAGWuxWowdoqXYCnNQ_yHfMSACwemvAOYjLXVKTXzcjQlf_aIih
// Entry: 0x71b8bab2 | Size: 4 bytes
// =========================================================================

undefined4 b_WpeAGWuxWowdoqXYCnNQ_yHfMSACwemvAOYjLXVKTXzcjQlf_aIih(void)

{
  return 0;
}


// =========================================================================
// Function: XPj_pIQKkAUULpTKXtcEle_hqPgpCIgAyAjfjzpWNNZqWpIdXWZhzgjSH
// Entry: 0x71b8bace | Size: 50 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

undefined4
XPj_pIQKkAUULpTKXtcEle_hqPgpCIgAyAjfjzpWNNZqWpIdXWZhzgjSH
          (undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  if (param_5 != 0 && param_3 != param_4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}


// =========================================================================
// Function: cQXPumDRlllTtzWJaGgsKDXQkVy_hQmbemi_RiuodmjJSXcWLfvc
// Entry: 0x71b8bc0c | Size: 18 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

undefined4 cQXPumDRlllTtzWJaGgsKDXQkVy_hQmbemi_RiuodmjJSXcWLfvc(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 1;
}


// =========================================================================
// Function: JNbZIAAxfCrDOAbMVUlNmUOFMlJTiGyeqvWBkAJ
// Entry: 0x71b8bd28 | Size: 6 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void JNbZIAAxfCrDOAbMVUlNmUOFMlJTiGyeqvWBkAJ(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: _IEFSz_dTjmGDUKklCifLuybLWMvtsZvFyjykOaySpFpQqoyWqXdAdsGUzcSkQsrRkbl
// Entry: 0x71b8bd8c | Size: 62 bytes
// =========================================================================

void _IEFSz_dTjmGDUKklCifLuybLWMvtsZvFyjykOaySpFpQqoyWqXdAdsGUzcSkQsrRkbl
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = param_6;
  uStack_14 = param_3;
  FUN_71b8bdfe(param_3,param_4,&uStack_14,param_6,param_7,&uStack_18,0x10ffff,0);
  *param_5 = uStack_14;
  *param_8 = uStack_18;
  return;
}


// =========================================================================
// Function: FUN_71b8bdfe
// Entry: 0x71b8bdfe | Size: 492 bytes
// =========================================================================

undefined4
FUN_71b8bdfe(int param_1,ushort *param_2,int *param_3,undefined1 *param_4,int param_5,int *param_6,
            uint param_7,byte param_8)

{
  ushort uVar1;
  undefined1 *puVar2;
  ushort *puVar3;
  byte *pbVar4;
  char *pcVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  
  *param_3 = param_1;
  *param_6 = (int)param_4;
  if ((int)((uint)param_8 << 0x1e) < 0) {
    if (param_5 - (int)param_4 < 3) {
      return 1;
    }
    *param_6 = (int)(param_4 + 1);
    *param_4 = 0xef;
    puVar2 = (undefined1 *)*param_6;
    *param_6 = (int)(puVar2 + 1);
    *puVar2 = 0xbb;
    puVar2 = (undefined1 *)*param_6;
    *param_6 = (int)(puVar2 + 1);
    *puVar2 = 0xbf;
  }
  puVar3 = (ushort *)*param_3;
  do {
    if (param_2 <= puVar3) {
      return 0;
    }
    uVar1 = *puVar3;
    uVar8 = (uint)uVar1;
    if (param_7 < uVar8) {
      return 2;
    }
    if (uVar8 < 0x80) {
      puVar2 = (undefined1 *)*param_6;
      if (param_5 - (int)puVar2 < 1) {
        return 1;
      }
LAB_71b8beda:
      *param_6 = (int)(puVar2 + 1);
      *puVar2 = (char)uVar8;
    }
    else {
      if (uVar1 >> 0xb == 0) {
        pbVar4 = (byte *)*param_6;
        if (param_5 - (int)pbVar4 < 2) {
          return 1;
        }
        *param_6 = (int)(pbVar4 + 1);
        bVar7 = (byte)(uVar1 >> 6) | 0xc0;
LAB_71b8bed0:
        *pbVar4 = bVar7;
        uVar8 = uVar8 & 0x3f | 0x80;
        puVar2 = (undefined1 *)*param_6;
        goto LAB_71b8beda;
      }
      bVar7 = (byte)(uVar1 >> 8);
      if (uVar1 >> 0xb < 0x1b) {
        pcVar5 = (char *)*param_6;
        if (param_5 - (int)pcVar5 < 3) {
          return 1;
        }
        *param_6 = (int)(pcVar5 + 1);
        *pcVar5 = (bVar7 >> 4) - 0x20;
        pbVar4 = (byte *)*param_6;
        *param_6 = (int)(pbVar4 + 1);
        bVar7 = (byte)(uVar1 >> 6) & 0x3f | 0x80;
        goto LAB_71b8bed0;
      }
      if (uVar1 >> 10 < 0x37) {
        if ((int)param_2 - (int)puVar3 < 4) {
          return 1;
        }
        uVar1 = puVar3[1];
        uVar9 = (uint)uVar1;
        if ((uVar9 & 0xfc00) != 0xdc00) {
          return 2;
        }
        if (param_5 - *param_6 < 4) {
          return 1;
        }
        if (param_7 < (uVar8 & 0x3ff) * 0x400 + (uVar9 & 0x3ff) + 0x10000) {
          return 2;
        }
        *param_3 = (int)(puVar3 + 1);
        pcVar5 = (char *)*param_6;
        *param_6 = (int)(pcVar5 + 1);
        uVar6 = ((uVar8 & 0x3c0) >> 6) + 1;
        *pcVar5 = (char)(uVar6 >> 2) + -0x10;
        pcVar5 = (char *)*param_6;
        *param_6 = (int)(pcVar5 + 1);
        *pcVar5 = ((byte)((uVar8 << 0x1a) >> 0x1c) | (byte)((uVar6 & 3) << 4)) + 0x80;
        pcVar5 = (char *)*param_6;
        *param_6 = (int)(pcVar5 + 1);
        *pcVar5 = ((byte)((uVar9 << 0x16) >> 0x1c) | (byte)((uVar8 & 3) << 4)) + 0x80;
        pbVar4 = (byte *)*param_6;
        *param_6 = (int)(pbVar4 + 1);
        *pbVar4 = (byte)uVar1 & 0x3f | 0x80;
      }
      else {
        if (uVar8 < 0xe000) {
          return 2;
        }
        pcVar5 = (char *)*param_6;
        if (param_5 - (int)pcVar5 < 3) {
          return 1;
        }
        *param_6 = (int)(pcVar5 + 1);
        *pcVar5 = (bVar7 >> 4) - 0x20;
        pbVar4 = (byte *)*param_6;
        *param_6 = (int)(pbVar4 + 1);
        *pbVar4 = (byte)(uVar1 >> 6) & 0xbf;
        pbVar4 = (byte *)*param_6;
        *param_6 = (int)(pbVar4 + 1);
        *pbVar4 = (byte)uVar1 & 0x3f | 0x80;
      }
    }
    puVar3 = (ushort *)(*param_3 + 2);
    *param_3 = (int)puVar3;
  } while( true );
}


// =========================================================================
// Function: fsLzCdEvazTbQQXKpvNWPiMsIEvLJHVQXrdhDOBPsJiBFuGodgWGyudi_UXUUTkjpfq
// Entry: 0x71b8c002 | Size: 62 bytes
// =========================================================================

void fsLzCdEvazTbQQXKpvNWPiMsIEvLJHVQXrdhDOBPsJiBFuGodgWGyudi_UXUUTkjpfq
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = param_6;
  uStack_14 = param_3;
  FUN_71b8c074(param_3,param_4,&uStack_14,param_6,param_7,&uStack_18,0x10ffff,0);
  *param_5 = uStack_14;
  *param_8 = uStack_18;
  return;
}


// =========================================================================
// Function: FUN_71b8c074
// Entry: 0x71b8c074 | Size: 486 bytes
// =========================================================================

bool FUN_71b8c074(int param_1,byte *param_2,int *param_3,int param_4,ushort *param_5,int *param_6,
                 uint param_7,byte param_8)

{
  byte bVar1;
  ushort *puVar2;
  ushort uVar3;
  int iVar4;
  ushort *puVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  
  *param_3 = param_1;
  *param_6 = param_4;
  pbVar6 = (byte *)*param_3;
  if (((int)((uint)param_8 << 0x1d) < 0) && (2 < (int)param_2 - (int)pbVar6)) {
    bVar1 = *pbVar6;
    bVar12 = bVar1 == 0xef;
    if (bVar12) {
      bVar1 = pbVar6[1];
    }
    if ((bVar12 && bVar1 == 0xbb) && (pbVar6[2] == 0xbf)) {
      pbVar6 = pbVar6 + 3;
      *param_3 = (int)pbVar6;
    }
  }
  if (param_2 <= pbVar6) {
    return false;
  }
  puVar2 = (ushort *)*param_6;
  do {
    puVar5 = puVar2;
    if (param_5 <= puVar5) break;
    bVar1 = *pbVar6;
    uVar8 = (uint)bVar1;
    if (param_7 < uVar8) {
      return (bool)2;
    }
    if ((char)bVar1 < '\0') {
      if (uVar8 < 0xc2) {
        return (bool)2;
      }
      if (uVar8 < 0xe0) {
        if ((int)param_2 - (int)pbVar6 < 2) {
          return true;
        }
        if ((pbVar6[1] & 0xc0) != 0x80) {
          return (bool)2;
        }
        uVar8 = pbVar6[1] & 0x3f | (uVar8 & 0x1f) << 6;
        if (param_7 < uVar8) {
          return (bool)2;
        }
        *puVar5 = (ushort)uVar8;
        pbVar6 = pbVar6 + 2;
      }
      else if (uVar8 < 0xf0) {
        if ((int)param_2 - (int)pbVar6 < 2) {
          return true;
        }
        uVar9 = (ushort)pbVar6[1];
        if (uVar8 == 0xed) {
          uVar3 = uVar9 & 0xe0;
LAB_71b8c16c:
          if (uVar3 != 0x80) {
            return (bool)2;
          }
        }
        else {
          if (uVar8 != 0xe0) {
            uVar3 = uVar9 & 0xc0;
            goto LAB_71b8c16c;
          }
          if ((uVar9 & 0xe0) != 0xa0) {
            return (bool)2;
          }
        }
        if ((int)param_2 - (int)pbVar6 == 2) {
          return true;
        }
        if (((pbVar6[2] & 0xc0) != 0x80) ||
           (uVar9 = ((uVar9 & 0x3f) << 6 | (ushort)bVar1 << 0xc) + (pbVar6[2] & 0x3f),
           param_7 < uVar9)) {
          return (bool)2;
        }
        *puVar5 = uVar9;
        pbVar6 = pbVar6 + 3;
      }
      else {
        if (0xf4 < uVar8) {
          return (bool)2;
        }
        iVar4 = (int)param_2 - (int)pbVar6;
        if (iVar4 < 2) {
          return true;
        }
        bVar1 = pbVar6[1];
        uVar10 = (uint)bVar1;
        if (uVar8 == 0xf4) {
          uVar11 = uVar10 & 0xf0;
LAB_71b8c1a4:
          if (uVar11 != 0x80) {
            return (bool)2;
          }
        }
        else {
          if (uVar8 != 0xf0) {
            uVar11 = uVar10 & 0xc0;
            goto LAB_71b8c1a4;
          }
          if (0x2f < uVar10 - 0x90) {
            return (bool)2;
          }
        }
        if (iVar4 == 2) {
          return true;
        }
        uVar11 = (uint)pbVar6[2];
        if ((uVar11 & 0xc0) != 0x80) {
          return (bool)2;
        }
        if (iVar4 == 3) {
          return true;
        }
        if ((pbVar6[3] & 0xc0) != 0x80) {
          return (bool)2;
        }
        if ((int)param_5 - (int)puVar5 < 4) {
          return true;
        }
        uVar7 = pbVar6[3] & 0x3f;
        if (param_7 < ((uVar8 & 7) << 0x12 | (uVar11 & 0x3f) << 6 | (uVar10 & 0x3f) << 0xc) + uVar7)
        {
          return (bool)2;
        }
        puVar5[1] = (pbVar6[2] & 0xf) * 0x40 + (short)uVar7 + 0xdc00;
        *param_6 = (int)(puVar5 + 1);
        iVar4 = *param_3;
        *puVar5 = ((bVar1 & 0x30) << 2 | (ushort)((uVar8 & 7) << 8) | (ushort)((uVar10 & 0xf) << 2))
                  + (ushort)((uVar11 << 0x1a) >> 0x1e) + 0x3fc0 | 0xd800;
        pbVar6 = (byte *)(iVar4 + 4);
      }
    }
    else {
      *puVar5 = (ushort)bVar1;
      pbVar6 = pbVar6 + 1;
    }
    *param_3 = (int)pbVar6;
    iVar4 = *param_6;
    *param_6 = iVar4 + 2;
    pbVar6 = (byte *)*param_3;
    puVar2 = (ushort *)(iVar4 + 2);
  } while (pbVar6 < param_2);
  return param_5 <= puVar5;
}


// =========================================================================
// Function: PFzYvldWQmvpdRFyEg_BluHwiGXnWBwNunopKXPfttYJuIjakiCqJijqiifHiX
// Entry: 0x71b8c272 | Size: 8 bytes
// =========================================================================

undefined4
PFzYvldWQmvpdRFyEg_BluHwiGXnWBwNunopKXPfttYJuIjakiCqJijqiifHiX
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 *param_5)

{
  *param_5 = param_3;
  return 3;
}


// =========================================================================
// Function: X_DGwLfRawYiYCiHLkKTjnCdRWSr_uhNscbVxjMbsguEQReXgDn
// Entry: 0x71b8c292 | Size: 4 bytes
// =========================================================================

undefined4 X_DGwLfRawYiYCiHLkKTjnCdRWSr_uhNscbVxjMbsguEQReXgDn(void)

{
  return 0;
}


// =========================================================================
// Function: yJNpLceXoHJPPMtlLmYCIAXGOsCqwbKGHBhLrtmQRliqoibhqeEqRfYR
// Entry: 0x71b8c2ae | Size: 4 bytes
// =========================================================================

undefined4 yJNpLceXoHJPPMtlLmYCIAXGOsCqwbKGHBhLrtmQRliqoibhqeEqRfYR(void)

{
  return 0;
}


// =========================================================================
// Function: pLeSuOpIzOCOZtfzQLTRPcDoRdPVFZMObUpxDgVAISsfRnQzEZoMvzVOLc
// Entry: 0x71b8c2ca | Size: 36 bytes
// =========================================================================

void pLeSuOpIzOCOZtfzQLTRPcDoRdPVFZMObUpxDgVAISsfRnQzEZoMvzVOLc
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  FUN_71b8c322(param_3,param_4,param_5,0x10ffff,0);
  return;
}


// =========================================================================
// Function: FUN_71b8c322
// Entry: 0x71b8c322 | Size: 378 bytes
// =========================================================================

int FUN_71b8c322(byte *param_1,byte *param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  bool bVar6;
  
  pbVar4 = param_1;
  if ((((2 < (int)param_2 - (int)param_1) && ((param_5 & 4) != 0)) && (*param_1 == 0xef)) &&
     ((param_1[1] == 0xbb && (param_1[2] == 0xbf)))) {
    pbVar4 = param_1 + 3;
  }
  if ((pbVar4 < param_2) && (param_3 != 0)) {
    uVar5 = 0;
    while( true ) {
      uVar2 = (uint)*pbVar4;
      if (param_4 < uVar2) break;
      if ((char)*pbVar4 < '\0') {
        if (uVar2 < 0xc2) break;
        if (uVar2 < 0xe0) {
          if ((((int)param_2 - (int)pbVar4 < 2) || ((pbVar4[1] & 0xc0) != 0x80)) ||
             (param_4 < (pbVar4[1] & 0x3f | (uVar2 & 0x1f) << 6))) break;
          pbVar4 = pbVar4 + 2;
        }
        else if (uVar2 < 0xf0) {
          if ((int)param_2 - (int)pbVar4 < 3) break;
          uVar3 = (uint)pbVar4[1];
          if (uVar2 == 0xed) {
            uVar1 = uVar3 & 0xe0;
LAB_71b8c424:
            if (uVar1 != 0x80) break;
          }
          else {
            if (uVar2 != 0xe0) {
              uVar1 = uVar3 & 0xc0;
              goto LAB_71b8c424;
            }
            if ((uVar3 & 0xe0) != 0xa0) break;
          }
          if (((pbVar4[2] & 0xc0) != 0x80) ||
             (param_4 < ((uVar2 & 0xf) << 0xc | (uVar3 & 0x3f) << 6) + (pbVar4[2] & 0x3f))) break;
          pbVar4 = pbVar4 + 3;
        }
        else {
          if (((0xf4 < uVar2) || ((int)param_2 - (int)pbVar4 < 4)) || (param_3 - uVar5 < 2)) break;
          uVar3 = (uint)pbVar4[1];
          if (uVar2 == 0xf4) {
            uVar1 = uVar3 & 0xf0;
LAB_71b8c456:
            if (uVar1 != 0x80) break;
          }
          else {
            if (uVar2 != 0xf0) {
              uVar1 = uVar3 & 0xc0;
              goto LAB_71b8c456;
            }
            if (0x2f < uVar3 - 0x90) break;
          }
          uVar1 = pbVar4[2] & 0xc0;
          bVar6 = uVar1 != 0x80;
          if (!bVar6) {
            uVar1 = pbVar4[3] & 0xc0;
          }
          if ((bVar6 || uVar1 != 0x80) ||
             (param_4 < ((uVar2 & 7) << 0x12 | (uVar3 & 0x3f) << 0xc | (pbVar4[2] & 0x3f) << 6) +
                        (pbVar4[3] & 0x3f))) break;
          pbVar4 = pbVar4 + 4;
          uVar5 = uVar5 + 1;
        }
      }
      else {
        pbVar4 = pbVar4 + 1;
      }
      if (pbVar4 < param_2) {
        uVar5 = uVar5 + 1;
      }
      if (pbVar4 >= param_2 || param_3 <= uVar5) break;
    }
  }
  return (int)pbVar4 - (int)param_1;
}


// =========================================================================
// Function: zhuASZpoHlWKGyEixcvNoPRZibWEZlYDjex_O_rGnoXMxkIUeGogi
// Entry: 0x71b8c4b4 | Size: 4 bytes
// =========================================================================

undefined4 zhuASZpoHlWKGyEixcvNoPRZibWEZlYDjex_O_rGnoXMxkIUeGogi(void)

{
  return 4;
}


// =========================================================================
// Function: rMZPktPckbsRyDlDjEg_zklscyQVAFdMJoJnaAUH
// Entry: 0x71b8c4d0 | Size: 6 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void rMZPktPckbsRyDlDjEg_zklscyQVAFdMJoJnaAUH(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: hfvSthGycnCNPSg_ApZTUvxpbbxdarBhzvopeWKLvmDGzXYZjuNhkTijxlRMDofEzklWHx
// Entry: 0x71b8c534 | Size: 62 bytes
// =========================================================================

void hfvSthGycnCNPSg_ApZTUvxpbbxdarBhzvopeWKLvmDGzXYZjuNhkTijxlRMDofEzklWHx
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = param_6;
  uStack_14 = param_3;
  FUN_71b8bdfe(param_3,param_4,&uStack_14,param_6,param_7,&uStack_18,0x10ffff,0);
  *param_5 = uStack_14;
  *param_8 = uStack_18;
  return;
}


// =========================================================================
// Function: iYnXlczgbvdQdDJixjZdX_mGXHkwLW_agJhwbdE_lTEixkWVMIBUgcXCAJXqkXwWrmBuF
// Entry: 0x71b8c5a6 | Size: 62 bytes
// =========================================================================

void iYnXlczgbvdQdDJixjZdX_mGXHkwLW_agJhwbdE_lTEixkWVMIBUgcXCAJXqkXwWrmBuF
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = param_6;
  uStack_14 = param_3;
  FUN_71b8c074(param_3,param_4,&uStack_14,param_6,param_7,&uStack_18,0x10ffff,0);
  *param_5 = uStack_14;
  *param_8 = uStack_18;
  return;
}


// =========================================================================
// Function: _oVslj_xpgqbKmdcNrE_bzbqDYuzMoIQcrYjskMFZWPLiZgxarMXEHfTRdwyxd_N
// Entry: 0x71b8c618 | Size: 8 bytes
// =========================================================================

undefined4
_oVslj_xpgqbKmdcNrE_bzbqDYuzMoIQcrYjskMFZWPLiZgxarMXEHfTRdwyxd_N
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 *param_5)

{
  *param_5 = param_3;
  return 3;
}


// =========================================================================
// Function: EKGDxVtSWyHIKUGIhLuHtqlkkSIlczUJaOcSPotWcHqpnJmiieND
// Entry: 0x71b8c638 | Size: 4 bytes
// =========================================================================

undefined4 EKGDxVtSWyHIKUGIhLuHtqlkkSIlczUJaOcSPotWcHqpnJmiieND(void)

{
  return 0;
}


// =========================================================================
// Function: vMuuwrqyMib_vkaclmXDnxYEwvqPdsBDKTJZVChIvRgelKTxOuoxkYKWI
// Entry: 0x71b8c654 | Size: 4 bytes
// =========================================================================

undefined4 vMuuwrqyMib_vkaclmXDnxYEwvqPdsBDKTJZVChIvRgelKTxOuoxkYKWI(void)

{
  return 0;
}


// =========================================================================
// Function: bJzXiFxpDjJkOjLEQTCCKUGDCijzkRazBqDBMDKqVHEIHFunwBWaTSVaOevI
// Entry: 0x71b8c670 | Size: 36 bytes
// =========================================================================

void bJzXiFxpDjJkOjLEQTCCKUGDCijzkRazBqDBMDKqVHEIHFunwBWaTSVaOevI
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  FUN_71b8c322(param_3,param_4,param_5,0x10ffff,0);
  return;
}


// =========================================================================
// Function: FfZowJEWbIWsoTYbfEdoohDLCsUKmtSq_EBVZpUNQMoQSohFYCvXpT
// Entry: 0x71b8c6c8 | Size: 4 bytes
// =========================================================================

undefined4 FfZowJEWbIWsoTYbfEdoohDLCsUKmtSq_EBVZpUNQMoQSohFYCvXpT(void)

{
  return 4;
}


// =========================================================================
// Function: ZTfNYhIcMZBljqSxXsTjhUx_lQfeRrZPdRcAocY
// Entry: 0x71b8c6e4 | Size: 6 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void ZTfNYhIcMZBljqSxXsTjhUx_lQfeRrZPdRcAocY(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: fcFgxDVDMSazlIUOxgeWwUwQzHXmUvK_uEhogxfHkUsPZFoEYlqBtEikqoINrjQVCQSW
// Entry: 0x71b8c748 | Size: 218 bytes
// =========================================================================

undefined4
fcFgxDVDMSazlIUOxgeWwUwQzHXmUvK_uEhogxfHkUsPZFoEYlqBtEikqoINrjQVCQSW
          (undefined4 param_1,undefined4 param_2,uint *param_3,uint *param_4,uint *param_5,
          byte *param_6,int param_7,undefined4 *param_8)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = 0;
  if (param_3 < param_4) {
    do {
      uVar4 = *param_3;
      if ((0x10 < uVar4 >> 0x10) || ((uVar4 & 0xfffff800) == 0xd800)) {
        uVar2 = 2;
        goto LAB_71b8c814;
      }
      iVar5 = param_7 - (int)param_6;
      bVar1 = (byte)uVar4;
      if (uVar4 < 0x80) {
        if (iVar5 < 1) goto LAB_71b8c80e;
        pbVar3 = param_6 + 1;
        *param_6 = bVar1;
      }
      else if (uVar4 >> 0xb == 0) {
        if (iVar5 < 2) goto LAB_71b8c80e;
        param_6[1] = bVar1 & 0x3f | 0x80;
        *param_6 = (byte)(uVar4 >> 6) | 0xc0;
        pbVar3 = param_6 + 2;
      }
      else if (uVar4 >> 0x10 == 0) {
        if (iVar5 < 3) {
LAB_71b8c80e:
          uVar2 = 1;
          goto LAB_71b8c814;
        }
        param_6[2] = bVar1 & 0x3f | 0x80;
        param_6[1] = (byte)(uVar4 >> 6) & 0x3f | 0x80;
        *param_6 = (byte)(uVar4 >> 0xc) | 0xe0;
        pbVar3 = param_6 + 3;
      }
      else {
        if (iVar5 < 4) goto LAB_71b8c80e;
        param_6[3] = bVar1 & 0x3f | 0x80;
        param_6[2] = (byte)(uVar4 >> 6) & 0x3f | 0x80;
        param_6[1] = (byte)(uVar4 >> 0xc) & 0x3f | 0x80;
        *param_6 = (byte)(uVar4 >> 0x12) | 0xf0;
        pbVar3 = param_6 + 4;
      }
      param_3 = param_3 + 1;
      param_6 = pbVar3;
    } while (param_3 < param_4);
    uVar2 = 0;
  }
LAB_71b8c814:
  *param_5 = (uint)param_3;
  *param_8 = param_6;
  return uVar2;
}


// =========================================================================
// Function: FUN_71b8c83a
// Entry: 0x71b8c83a | Size: 300 bytes
// =========================================================================

undefined4
FUN_71b8c83a(uint param_1,uint *param_2,uint *param_3,undefined1 *param_4,int param_5,int *param_6,
            uint param_7,byte param_8)

{
  undefined1 *puVar1;
  byte *pbVar2;
  uint *puVar3;
  uint uVar4;
  byte bVar5;
  
  *param_3 = param_1;
  *param_6 = (int)param_4;
  if ((int)((uint)param_8 << 0x1e) < 0) {
    if (param_5 - (int)param_4 < 3) {
      return 1;
    }
    *param_6 = (int)(param_4 + 1);
    *param_4 = 0xef;
    puVar1 = (undefined1 *)*param_6;
    *param_6 = (int)(puVar1 + 1);
    *puVar1 = 0xbb;
    puVar1 = (undefined1 *)*param_6;
    *param_6 = (int)(puVar1 + 1);
    *puVar1 = 0xbf;
  }
  puVar3 = (uint *)*param_3;
  while( true ) {
    if (param_2 <= puVar3) {
      return 0;
    }
    uVar4 = *puVar3;
    if (param_7 < uVar4) break;
    if ((uVar4 & 0xfffff800) == 0xd800) {
      return 2;
    }
    if (uVar4 < 0x80) {
      puVar1 = (undefined1 *)*param_6;
      if (param_5 - (int)puVar1 < 1) {
        return 1;
      }
    }
    else {
      if (uVar4 >> 0xb == 0) {
        pbVar2 = (byte *)*param_6;
        if (param_5 - (int)pbVar2 < 2) {
          return 1;
        }
        *param_6 = (int)(pbVar2 + 1);
        bVar5 = (byte)(uVar4 >> 6) | 0xc0;
      }
      else {
        pbVar2 = (byte *)*param_6;
        if (uVar4 >> 0x10 == 0) {
          if (param_5 - (int)pbVar2 < 3) {
            return 1;
          }
          *param_6 = (int)(pbVar2 + 1);
          bVar5 = (byte)(uVar4 >> 0xc) | 0xe0;
        }
        else {
          if (param_5 - (int)pbVar2 < 4) {
            return 1;
          }
          *param_6 = (int)(pbVar2 + 1);
          *pbVar2 = (byte)(uVar4 >> 0x12) | 0xf0;
          pbVar2 = (byte *)*param_6;
          *param_6 = (int)(pbVar2 + 1);
          bVar5 = (byte)(uVar4 >> 0xc) & 0x3f | 0x80;
        }
        *pbVar2 = bVar5;
        pbVar2 = (byte *)*param_6;
        *param_6 = (int)(pbVar2 + 1);
        bVar5 = (byte)(uVar4 >> 6) & 0x3f | 0x80;
      }
      *pbVar2 = bVar5;
      uVar4 = uVar4 & 0x3f | 0x80;
      puVar1 = (undefined1 *)*param_6;
    }
    *param_6 = (int)(puVar1 + 1);
    *puVar1 = (char)uVar4;
    puVar3 = (uint *)(*param_3 + 4);
    *param_3 = (uint)puVar3;
  }
  return 2;
}


// =========================================================================
// Function: BMpnBCAEjNyrHdkeHNlQaGXZFqciSarutpTmoMKpAhPinfNVqbEUjuAHo_YveeMxUFK
// Entry: 0x71b8c97e | Size: 62 bytes
// =========================================================================

void BMpnBCAEjNyrHdkeHNlQaGXZFqciSarutpTmoMKpAhPinfNVqbEUjuAHo_YveeMxUFK
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = param_6;
  uStack_14 = param_3;
  FUN_71b8c9f0(param_3,param_4,&uStack_14,param_6,param_7,&uStack_18,0x10ffff,0);
  *param_5 = uStack_14;
  *param_8 = uStack_18;
  return;
}


// =========================================================================
// Function: FUN_71b8c9f0
// Entry: 0x71b8c9f0 | Size: 426 bytes
// =========================================================================

bool FUN_71b8c9f0(undefined4 param_1,byte *param_2,undefined4 *param_3,uint param_4,uint *param_5,
                 uint *param_6,uint param_7,byte param_8)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  bool bVar9;
  
  *param_3 = param_1;
  *param_6 = param_4;
  pbVar7 = (byte *)*param_3;
  if (((int)((uint)param_8 << 0x1d) < 0) && (2 < (int)param_2 - (int)pbVar7)) {
    bVar1 = *pbVar7;
    bVar9 = bVar1 == 0xef;
    if (bVar9) {
      bVar1 = pbVar7[1];
    }
    if ((bVar9 && bVar1 == 0xbb) && (pbVar7[2] == 0xbf)) {
      pbVar7 = pbVar7 + 3;
      *param_3 = pbVar7;
    }
  }
  if (param_2 <= pbVar7) {
    return false;
  }
  puVar2 = (uint *)*param_6;
  do {
    puVar4 = puVar2;
    if (param_5 <= puVar4) break;
    uVar8 = (uint)*pbVar7;
    if ((char)*pbVar7 < '\0') {
      if (uVar8 < 0xc2) {
        return (bool)2;
      }
      if (uVar8 < 0xe0) {
        if ((int)param_2 - (int)pbVar7 < 2) {
          return true;
        }
        if ((pbVar7[1] & 0xc0) != 0x80) {
          return (bool)2;
        }
        uVar8 = pbVar7[1] & 0x3f | (uVar8 & 0x1f) << 6;
        iVar5 = 2;
        if (param_7 < uVar8) {
          return (bool)2;
        }
      }
      else if (uVar8 < 0xf0) {
        if ((int)param_2 - (int)pbVar7 < 2) {
          return true;
        }
        uVar3 = (uint)pbVar7[1];
        if (uVar8 == 0xed) {
          uVar6 = uVar3 & 0xe0;
LAB_71b8cae6:
          if (uVar6 != 0x80) {
            return (bool)2;
          }
        }
        else {
          if (uVar8 != 0xe0) {
            uVar6 = uVar3 & 0xc0;
            goto LAB_71b8cae6;
          }
          if ((uVar3 & 0xe0) != 0xa0) {
            return (bool)2;
          }
        }
        if ((int)param_2 - (int)pbVar7 == 2) {
          return true;
        }
        if (((pbVar7[2] & 0xc0) != 0x80) ||
           (uVar8 = (pbVar7[2] & 0x3f) + ((uVar8 & 0xf) << 0xc | (uVar3 & 0x3f) << 6),
           param_7 < uVar8)) {
          return (bool)2;
        }
        iVar5 = 3;
      }
      else {
        if (0xf4 < uVar8) {
          return (bool)2;
        }
        iVar5 = (int)param_2 - (int)pbVar7;
        if (iVar5 < 2) {
          return true;
        }
        uVar3 = (uint)pbVar7[1];
        if (uVar8 == 0xf4) {
          uVar6 = uVar3 & 0xf0;
LAB_71b8cb1c:
          if (uVar6 != 0x80) {
            return (bool)2;
          }
        }
        else {
          if (uVar8 != 0xf0) {
            uVar6 = uVar3 & 0xc0;
            goto LAB_71b8cb1c;
          }
          if (0x2f < uVar3 - 0x90) {
            return (bool)2;
          }
        }
        if (iVar5 == 2) {
          return true;
        }
        if ((pbVar7[2] & 0xc0) != 0x80) {
          return (bool)2;
        }
        if (iVar5 == 3) {
          return true;
        }
        if ((pbVar7[3] & 0xc0) != 0x80) {
          return (bool)2;
        }
        uVar8 = (pbVar7[3] & 0x3f) +
                ((uVar8 & 7) << 0x12 | (uVar3 & 0x3f) << 0xc | (pbVar7[2] & 0x3f) << 6);
        if (param_7 < uVar8) {
          return (bool)2;
        }
        iVar5 = 4;
      }
    }
    else {
      if (param_7 < uVar8) {
        return (bool)2;
      }
      iVar5 = 1;
    }
    *param_3 = pbVar7 + iVar5;
    uVar3 = *param_6;
    *puVar4 = uVar8;
    *param_6 = uVar3 + 4;
    pbVar7 = (byte *)*param_3;
    puVar2 = (uint *)(uVar3 + 4);
  } while (pbVar7 < param_2);
  return param_5 <= puVar4;
}


// =========================================================================
// Function: HNFwjxpzOSveaBPllVLPfYEkojQjTRGOkRrHhvNHDaDdXzhoEVTnIpGiXxgDkR
// Entry: 0x71b8cbb2 | Size: 8 bytes
// =========================================================================

undefined4
HNFwjxpzOSveaBPllVLPfYEkojQjTRGOkRrHhvNHDaDdXzhoEVTnIpGiXxgDkR
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 *param_5)

{
  *param_5 = param_3;
  return 3;
}


// =========================================================================
// Function: KkRObLqbzDrELrGkLzFMjEfsFKrXZfAD_b_daEMqMofSxDMlCxt
// Entry: 0x71b8cbd2 | Size: 4 bytes
// =========================================================================

undefined4 KkRObLqbzDrELrGkLzFMjEfsFKrXZfAD_b_daEMqMofSxDMlCxt(void)

{
  return 0;
}


// =========================================================================
// Function: QudhiuXjDRdboVWfdSgOCBmEBQZqkwRubpXvxzzsJmMlMrWcygYUqdGq
// Entry: 0x71b8cbee | Size: 4 bytes
// =========================================================================

undefined4 QudhiuXjDRdboVWfdSgOCBmEBQZqkwRubpXvxzzsJmMlMrWcygYUqdGq(void)

{
  return 0;
}


// =========================================================================
// Function: vzyYkLahLOXw_gXdiFMqdQWHoQZOGeWrHZAoHjXtsLgfPXXGyKZJEZmbDl
// Entry: 0x71b8cc0a | Size: 36 bytes
// =========================================================================

void vzyYkLahLOXw_gXdiFMqdQWHoQZOGeWrHZAoHjXtsLgfPXXGyKZJEZmbDl
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  FUN_71b8cc62(param_3,param_4,param_5,0x10ffff,0);
  return;
}


// =========================================================================
// Function: FUN_71b8cc62
// Entry: 0x71b8cc62 | Size: 360 bytes
// =========================================================================

int FUN_71b8cc62(byte *param_1,byte *param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  bool bVar7;
  
  pbVar5 = param_1;
  if ((((2 < (int)param_2 - (int)param_1) && ((param_5 & 4) != 0)) && (*param_1 == 0xef)) &&
     ((param_1[1] == 0xbb && (param_1[2] == 0xbf)))) {
    pbVar5 = param_1 + 3;
  }
  if ((pbVar5 < param_2) && (param_3 != 0)) {
    uVar6 = 1;
    do {
      uVar3 = (uint)*pbVar5;
      if ((char)*pbVar5 < '\0') {
        if (uVar3 < 0xc2) break;
        if (uVar3 < 0xe0) {
          if ((((int)param_2 - (int)pbVar5 < 2) || ((pbVar5[1] & 0xc0) != 0x80)) ||
             (param_4 < (pbVar5[1] & 0x3f | (uVar3 & 0x1f) << 6))) break;
          iVar1 = 2;
        }
        else if (uVar3 < 0xf0) {
          if ((int)param_2 - (int)pbVar5 < 3) break;
          uVar4 = (uint)pbVar5[1];
          if (uVar3 == 0xed) {
            uVar2 = uVar4 & 0xe0;
LAB_71b8cd4a:
            if (uVar2 != 0x80) break;
          }
          else {
            if (uVar3 != 0xe0) {
              uVar2 = uVar4 & 0xc0;
              goto LAB_71b8cd4a;
            }
            if ((uVar4 & 0xe0) != 0xa0) break;
          }
          if (((pbVar5[2] & 0xc0) != 0x80) ||
             (param_4 < ((uVar3 & 0xf) << 0xc | (uVar4 & 0x3f) << 6) + (pbVar5[2] & 0x3f))) break;
          iVar1 = 3;
        }
        else {
          if ((0xf4 < uVar3) || ((int)param_2 - (int)pbVar5 < 4)) break;
          uVar4 = (uint)pbVar5[1];
          if (uVar3 == 0xf4) {
            uVar2 = uVar4 & 0xf0;
LAB_71b8cd7a:
            if (uVar2 != 0x80) break;
          }
          else {
            if (uVar3 != 0xf0) {
              uVar2 = uVar4 & 0xc0;
              goto LAB_71b8cd7a;
            }
            if (0x2f < uVar4 - 0x90) break;
          }
          uVar2 = pbVar5[2] & 0xc0;
          bVar7 = uVar2 != 0x80;
          if (!bVar7) {
            uVar2 = pbVar5[3] & 0xc0;
          }
          if ((bVar7 || uVar2 != 0x80) ||
             (param_4 < ((uVar3 & 7) << 0x12 | (uVar4 & 0x3f) << 0xc | (pbVar5[2] & 0x3f) << 6) +
                        (pbVar5[3] & 0x3f))) break;
          iVar1 = 4;
        }
      }
      else {
        if (param_4 < uVar3) break;
        iVar1 = 1;
      }
      pbVar5 = pbVar5 + iVar1;
      if ((param_2 <= pbVar5) || (bVar7 = param_3 <= uVar6, uVar6 = uVar6 + 1, bVar7)) break;
    } while( true );
  }
  return (int)pbVar5 - (int)param_1;
}


// =========================================================================
// Function: MxiHzTpFnkPqYvTvQKPtWnqNQgSTFSkHagIHSjCJvxuvlXYyBgotD
// Entry: 0x71b8cde2 | Size: 4 bytes
// =========================================================================

undefined4 MxiHzTpFnkPqYvTvQKPtWnqNQgSTFSkHagIHSjCJvxuvlXYyBgotD(void)

{
  return 4;
}


// =========================================================================
// Function: hFFyprEolVGfMqDmCiQIQWBxkNOePrOnUzrwDUaF
// Entry: 0x71b8cdfe | Size: 6 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void hFFyprEolVGfMqDmCiQIQWBxkNOePrOnUzrwDUaF(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: LeOhQGnGUaICvXhSTYCcfjEmF_oyroavIqGGzysmqBuQAEaKbzWlXISLyLSRAPgSxUPZTm
// Entry: 0x71b8ce62 | Size: 218 bytes
// =========================================================================

undefined4
LeOhQGnGUaICvXhSTYCcfjEmF_oyroavIqGGzysmqBuQAEaKbzWlXISLyLSRAPgSxUPZTm
          (undefined4 param_1,undefined4 param_2,uint *param_3,uint *param_4,uint *param_5,
          byte *param_6,int param_7,undefined4 *param_8)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = 0;
  if (param_3 < param_4) {
    do {
      uVar4 = *param_3;
      if ((0x10 < uVar4 >> 0x10) || ((uVar4 & 0xfffff800) == 0xd800)) {
        uVar2 = 2;
        goto LAB_71b8cf2e;
      }
      iVar5 = param_7 - (int)param_6;
      bVar1 = (byte)uVar4;
      if (uVar4 < 0x80) {
        if (iVar5 < 1) goto LAB_71b8cf28;
        pbVar3 = param_6 + 1;
        *param_6 = bVar1;
      }
      else if (uVar4 >> 0xb == 0) {
        if (iVar5 < 2) goto LAB_71b8cf28;
        param_6[1] = bVar1 & 0x3f | 0x80;
        *param_6 = (byte)(uVar4 >> 6) | 0xc0;
        pbVar3 = param_6 + 2;
      }
      else if (uVar4 >> 0x10 == 0) {
        if (iVar5 < 3) {
LAB_71b8cf28:
          uVar2 = 1;
          goto LAB_71b8cf2e;
        }
        param_6[2] = bVar1 & 0x3f | 0x80;
        param_6[1] = (byte)(uVar4 >> 6) & 0x3f | 0x80;
        *param_6 = (byte)(uVar4 >> 0xc) | 0xe0;
        pbVar3 = param_6 + 3;
      }
      else {
        if (iVar5 < 4) goto LAB_71b8cf28;
        param_6[3] = bVar1 & 0x3f | 0x80;
        param_6[2] = (byte)(uVar4 >> 6) & 0x3f | 0x80;
        param_6[1] = (byte)(uVar4 >> 0xc) & 0x3f | 0x80;
        *param_6 = (byte)(uVar4 >> 0x12) | 0xf0;
        pbVar3 = param_6 + 4;
      }
      param_3 = param_3 + 1;
      param_6 = pbVar3;
    } while (param_3 < param_4);
    uVar2 = 0;
  }
LAB_71b8cf2e:
  *param_5 = (uint)param_3;
  *param_8 = param_6;
  return uVar2;
}


// =========================================================================
// Function: ENsOuOm_UJxUvPUNJGtvbHtjsHvLHhjzDXdviwiJS_gxMIDscgxinVbfqINntkxsZKWzX
// Entry: 0x71b8cf54 | Size: 62 bytes
// =========================================================================

void ENsOuOm_UJxUvPUNJGtvbHtjsHvLHhjzDXdviwiJS_gxMIDscgxinVbfqINntkxsZKWzX
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = param_6;
  uStack_14 = param_3;
  FUN_71b8c9f0(param_3,param_4,&uStack_14,param_6,param_7,&uStack_18,0x10ffff,0);
  *param_5 = uStack_14;
  *param_8 = uStack_18;
  return;
}


// =========================================================================
// Function: SYNwgKZZ_jWuxeqyEMLCCPggSzUzxxtqbhJETUwLNiXjoBstmzlRDHLrZLTooSlw
// Entry: 0x71b8cfc6 | Size: 8 bytes
// =========================================================================

undefined4
SYNwgKZZ_jWuxeqyEMLCCPggSzUzxxtqbhJETUwLNiXjoBstmzlRDHLrZLTooSlw
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 *param_5)

{
  *param_5 = param_3;
  return 3;
}


// =========================================================================
// Function: hFJORTQgHuVTMkObejzNWCEnJjlqEJwZTbjOCDjoPZSeVrCByoiz
// Entry: 0x71b8cfe6 | Size: 4 bytes
// =========================================================================

undefined4 hFJORTQgHuVTMkObejzNWCEnJjlqEJwZTbjOCDjoPZSeVrCByoiz(void)

{
  return 0;
}


// =========================================================================
// Function: WdHNnFOoAnzOvambFrwYafVXIbAPCqPPvmnFffiUArZYkgYvQ_oWOAKhn
// Entry: 0x71b8d002 | Size: 4 bytes
// =========================================================================

undefined4 WdHNnFOoAnzOvambFrwYafVXIbAPCqPPvmnFffiUArZYkgYvQ_oWOAKhn(void)

{
  return 0;
}


// =========================================================================
// Function: lTAl_kCMqbpzSAvvKlRFRGDycbsVSndiNgIdBGHoBmFFdZWgbXIcRdRhCSFr
// Entry: 0x71b8d01e | Size: 36 bytes
// =========================================================================

void lTAl_kCMqbpzSAvvKlRFRGDycbsVSndiNgIdBGHoBmFFdZWgbXIcRdRhCSFr
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  FUN_71b8cc62(param_3,param_4,param_5,0x10ffff,0);
  return;
}


// =========================================================================
// Function: rf_CkkYEwOkEYjuQcdwIrluodxvdkxZGoYdpghzolJVoAqnifgIkZv
// Entry: 0x71b8d076 | Size: 4 bytes
// =========================================================================

undefined4 rf_CkkYEwOkEYjuQcdwIrluodxvdkxZGoYdpghzolJVoAqnifgIkZv(void)

{
  return 4;
}


// =========================================================================
// Function: EoNyFdknPVAByOtDJcKxZUsFVJqRfpKnpvziyDeViYvMEfcwdKaXYHXoUdtAYXpPMLrkJZ
// Entry: 0x71b8d092 | Size: 58 bytes
// =========================================================================

void EoNyFdknPVAByOtDJcKxZUsFVJqRfpKnpvziyDeViYvMEfcwdKaXYHXoUdtAYXpPMLrkJZ
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = param_6;
  uStack_14 = param_3;
  FUN_71b8c83a(param_3,param_4,&uStack_14,param_6,param_7,&uStack_18,*(undefined4 *)(param_1 + 0xc),
               *(undefined4 *)(param_1 + 0x10));
  *param_5 = uStack_14;
  *param_8 = uStack_18;
  return;
}


// =========================================================================
// Function: mYIKyhUTHnOhejEuPFnuRWmhPSUGNfzmjEvjRWFFhGfoRTUnXucOZmiSDmHiiYBHAoBTR
// Entry: 0x71b8d100 | Size: 58 bytes
// =========================================================================

void mYIKyhUTHnOhejEuPFnuRWmhPSUGNfzmjEvjRWFFhGfoRTUnXucOZmiSDmHiiYBHAoBTR
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = param_6;
  uStack_14 = param_3;
  FUN_71b8c9f0(param_3,param_4,&uStack_14,param_6,param_7,&uStack_18,*(undefined4 *)(param_1 + 0xc),
               *(undefined4 *)(param_1 + 0x10));
  *param_5 = uStack_14;
  *param_8 = uStack_18;
  return;
}


// =========================================================================
// Function: VcfZRiYIiFOrsHhOceJuiTiyaBIvWSMqeQFYwZIfqlhpteDmBbEPiNORReZuSNyBw
// Entry: 0x71b8d16e | Size: 8 bytes
// =========================================================================

undefined4
VcfZRiYIiFOrsHhOceJuiTiyaBIvWSMqeQFYwZIfqlhpteDmBbEPiNORReZuSNyBw
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 *param_5)

{
  *param_5 = param_3;
  return 3;
}


// =========================================================================
// Function: xayMLvNDjoljo_SXzcIPrnnSXyDTVyouHCwCjnUbWNfaWek
// Entry: 0x71b8d18e | Size: 4 bytes
// =========================================================================

undefined4 xayMLvNDjoljo_SXzcIPrnnSXyDTVyouHCwCjnUbWNfaWek(void)

{
  return 0;
}


// =========================================================================
// Function: YAKRJvuWFduapcGnPVdNAFGOG_ToUaswiOaXFWBIBfIaOjBbkWqA
// Entry: 0x71b8d1aa | Size: 4 bytes
// =========================================================================

undefined4 YAKRJvuWFduapcGnPVdNAFGOG_ToUaswiOaXFWBIBfIaOjBbkWqA(void)

{
  return 0;
}


// =========================================================================
// Function: HiKEoHpsLinrqewOF_lVObarphXYPSPABqmGAweVKoXexwDheTEEDnDVhWmeK
// Entry: 0x71b8d1c6 | Size: 28 bytes
// =========================================================================

void HiKEoHpsLinrqewOF_lVObarphXYPSPABqmGAweVKoXexwDheTEEDnDVhWmeK
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  FUN_71b8cc62(param_3,param_4,param_5,*(undefined4 *)(param_1 + 0xc),
               *(undefined4 *)(param_1 + 0x10));
  return;
}


// =========================================================================
// Function: qdRQj_sxWSSPXybllJHHmgNzTHoqKVDBnrJyTOXXiFNIarfMr
// Entry: 0x71b8d216 | Size: 14 bytes
// =========================================================================

undefined4 qdRQj_sxWSSPXybllJHHmgNzTHoqKVDBnrJyTOXXiFNIarfMr(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 7;
  if (-1 < (int)((uint)*(byte *)(param_1 + 0x10) << 0x1d)) {
    uVar1 = 4;
  }
  return uVar1;
}


// =========================================================================
// Function: VsMbYKZtRttpvBICBidKcEBaQdRniKfVDWnAWAoSZkSTvgNeaKrATsXtXJbqqbptJBowlWVv
// Entry: 0x71b8d23c | Size: 180 bytes
// =========================================================================

undefined4
VsMbYKZtRttpvBICBidKcEBaQdRniKfVDWnAWAoSZkSTvgNeaKrATsXtXJbqqbptJBowlWVv
          (int param_1,undefined4 param_2,ushort *param_3,ushort *param_4,undefined4 *param_5,
          byte *param_6,int param_7,undefined4 *param_8)

{
  ushort uVar1;
  byte bVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = *(uint *)(param_1 + 8);
  if ((int)((uint)*(byte *)(param_1 + 0xc) << 0x1e) < 0) {
    if (param_7 - (int)param_6 < 3) {
LAB_71b8d25c:
      uVar3 = 1;
      goto LAB_71b8d2e2;
    }
    param_6[2] = 0xbf;
    param_6[0] = 0xef;
    param_6[1] = 0xbb;
    param_6 = param_6 + 3;
  }
  uVar3 = 0;
  if (param_3 < param_4) {
    do {
      uVar1 = *param_3;
      uVar7 = (uint)uVar1;
      if ((uVar6 < uVar7) || ((uVar7 & 0xf800) == 0xd800)) {
        uVar3 = 2;
        goto LAB_71b8d2e2;
      }
      iVar5 = param_7 - (int)param_6;
      bVar2 = (byte)uVar1;
      if (uVar7 < 0x80) {
        if (iVar5 < 1) goto LAB_71b8d25c;
        pbVar4 = param_6 + 1;
        *param_6 = bVar2;
      }
      else if (uVar1 >> 0xb == 0) {
        if (iVar5 < 2) goto LAB_71b8d25c;
        param_6[1] = bVar2 & 0x3f | 0x80;
        *param_6 = (byte)(uVar1 >> 6) | 0xc0;
        pbVar4 = param_6 + 2;
      }
      else {
        if (iVar5 < 3) goto LAB_71b8d25c;
        param_6[2] = bVar2 & 0x3f | 0x80;
        param_6[1] = (byte)(uVar1 >> 6) & 0x3f | 0x80;
        *param_6 = (byte)(uVar1 >> 0xc) - 0x20;
        pbVar4 = param_6 + 3;
      }
      param_3 = param_3 + 1;
      param_6 = pbVar4;
    } while (param_3 < param_4);
    uVar3 = 0;
  }
LAB_71b8d2e2:
  *param_5 = param_3;
  *param_8 = param_6;
  return uVar3;
}


// =========================================================================
// Function: ryCzytnbUvGBfXRpIaZrpfqAWmfDrJAg_zogaIQgFQvkWcXkKGHJkiADcPOLkijMj_AWOvx
// Entry: 0x71b8d308 | Size: 266 bytes
// =========================================================================

undefined1
ryCzytnbUvGBfXRpIaZrpfqAWmfDrJAg_zogaIQgFQvkWcXkKGHJkiADcPOLkijMj_AWOvx
          (int param_1,undefined4 param_2,byte *param_3,byte *param_4,undefined4 *param_5,
          undefined2 *param_6,undefined2 *param_7,undefined4 *param_8)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined2 *puVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined1 uVar9;
  
  uVar7 = *(uint *)(param_1 + 8);
  if ((2 < (int)param_4 - (int)param_3) && ((*(uint *)(param_1 + 0xc) & 4) != 0)) {
    bVar1 = *param_3;
    bVar8 = bVar1 == 0xef;
    if (bVar8) {
      bVar1 = param_3[1];
    }
    if ((bVar8 && bVar1 == 0xbb) && (param_3[2] == 0xbf)) {
      param_3 = param_3 + 3;
    }
  }
  if (param_3 < param_4) {
    do {
      puVar5 = param_6;
      param_6 = puVar5;
      if (param_7 <= puVar5) break;
      uVar2 = (uint)*param_3;
      if ((char)*param_3 < '\0') {
        if (uVar2 < 0xc2) goto LAB_71b8d3e2;
        if (uVar2 < 0xe0) {
          if (1 < (int)param_4 - (int)param_3) {
            if (((param_3[1] & 0xc0) == 0x80) &&
               (uVar2 = param_3[1] & 0x3f | (uVar2 & 0x1f) << 6, uVar2 <= uVar7)) {
              iVar4 = 2;
              goto LAB_71b8d342;
            }
            goto LAB_71b8d3e2;
          }
        }
        else {
          if (0xef < uVar2) goto LAB_71b8d3e2;
          if ((int)param_4 - (int)param_3 < 2) goto LAB_71b8d400;
          uVar6 = (uint)param_3[1];
          if (uVar2 == 0xed) {
            uVar3 = uVar6 & 0xe0;
LAB_71b8d3ba:
            if (uVar3 != 0x80) goto LAB_71b8d3e2;
          }
          else {
            if (uVar2 != 0xe0) {
              uVar3 = uVar6 & 0xc0;
              goto LAB_71b8d3ba;
            }
            if ((uVar6 & 0xe0) != 0xa0) goto LAB_71b8d3e2;
          }
          if ((int)param_4 - (int)param_3 != 2) {
            if (((param_3[2] & 0xc0) != 0x80) ||
               (uVar2 = ((uVar6 & 0x3f) << 6 | uVar2 << 0xc) + (param_3[2] & 0x3f),
               uVar7 < (uVar2 & 0xffff))) goto LAB_71b8d3e2;
            iVar4 = 3;
            goto LAB_71b8d342;
          }
        }
LAB_71b8d400:
        uVar9 = 1;
        goto LAB_71b8d404;
      }
      if (uVar7 < uVar2) {
LAB_71b8d3e2:
        uVar9 = 2;
        goto LAB_71b8d404;
      }
      iVar4 = 1;
LAB_71b8d342:
      param_3 = param_3 + iVar4;
      *puVar5 = (short)uVar2;
      param_6 = puVar5 + 1;
    } while (param_3 < param_4);
    uVar9 = param_7 <= puVar5;
  }
  else {
    uVar9 = 0;
  }
LAB_71b8d404:
  *param_5 = param_3;
  *param_8 = param_6;
  return uVar9;
}


// =========================================================================
// Function: lkvIwvyARddpDyRvmPVOcCwkbYmAVpUrFEnncVDcbdL_eRETeGSTwYFNMpYTyXpRMl
// Entry: 0x71b8d42a | Size: 8 bytes
// =========================================================================

undefined4
lkvIwvyARddpDyRvmPVOcCwkbYmAVpUrFEnncVDcbdL_eRETeGSTwYFNMpYTyXpRMl
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 *param_5)

{
  *param_5 = param_3;
  return 3;
}


// =========================================================================
// Function: QGGqIheLyosURdOtLOesnXa_En_bhHIrWxTECoJqfbIPACGV
// Entry: 0x71b8d44a | Size: 4 bytes
// =========================================================================

undefined4 QGGqIheLyosURdOtLOesnXa_En_bhHIrWxTECoJqfbIPACGV(void)

{
  return 0;
}


// =========================================================================
// Function: q_rmaeePwXDvGt_ghCrKmjRYKLgGJqbTfRHDIydczESUQMtQapjfl
// Entry: 0x71b8d466 | Size: 4 bytes
// =========================================================================

undefined4 q_rmaeePwXDvGt_ghCrKmjRYKLgGJqbTfRHDIydczESUQMtQapjfl(void)

{
  return 0;
}


// =========================================================================
// Function: cOmpPnLTqQkNAramaLqHJwsvNtGEsgauKOXiFXRnTbrBpmWxGbYkvpVckqks_C
// Entry: 0x71b8d482 | Size: 242 bytes
// =========================================================================

int cOmpPnLTqQkNAramaLqHJwsvNtGEsgauKOXiFXRnTbrBpmWxGbYkvpVckqks_C
              (int param_1,undefined4 param_2,byte *param_3,byte *param_4,uint param_5)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar6 = *(uint *)(param_1 + 8);
  pbVar2 = param_3;
  if ((((2 < (int)param_4 - (int)param_3) && ((*(uint *)(param_1 + 0xc) & 4) != 0)) &&
      (*param_3 == 0xef)) && ((param_3[1] == 0xbb && (param_3[2] == 0xbf)))) {
    pbVar2 = param_3 + 3;
  }
  if ((param_5 != 0) && (pbVar2 < param_4)) {
    uVar1 = 1;
    do {
      uVar3 = (uint)*pbVar2;
      if ((char)*pbVar2 < '\0') {
        if (uVar3 < 0xc2) break;
        if (uVar3 < 0xe0) {
          if ((((int)param_4 - (int)pbVar2 < 2) || ((pbVar2[1] & 0xc0) != 0x80)) ||
             (uVar6 < (pbVar2[1] & 0x3f | (uVar3 & 0x1f) << 6))) break;
          pbVar2 = pbVar2 + 2;
        }
        else {
          if ((0xef < uVar3) || ((int)param_4 - (int)pbVar2 < 3)) break;
          uVar5 = (uint)pbVar2[1];
          if (uVar3 == 0xed) {
            uVar4 = uVar5 & 0xe0;
LAB_71b8d53c:
            if (uVar4 != 0x80) break;
          }
          else {
            if (uVar3 != 0xe0) {
              uVar4 = uVar5 & 0xc0;
              goto LAB_71b8d53c;
            }
            if ((uVar5 & 0xe0) != 0xa0) break;
          }
          if (((pbVar2[2] & 0xc0) != 0x80) ||
             (uVar6 < ((uVar3 & 0xf) << 0xc | (uVar5 & 0x3f) << 6) + (pbVar2[2] & 0x3f))) break;
          pbVar2 = pbVar2 + 3;
        }
      }
      else {
        if (uVar6 < uVar3) break;
        pbVar2 = pbVar2 + 1;
      }
      if ((param_4 <= pbVar2) || (bVar7 = param_5 <= uVar1, uVar1 = uVar1 + 1, bVar7)) break;
    } while( true );
  }
  return (int)pbVar2 - (int)param_3;
}


// =========================================================================
// Function: WDUCMdUyKLQAUXqbiWiwsAS_tcRcZgpphjVjXUfj_RZnEEPWrB
// Entry: 0x71b8d58c | Size: 14 bytes
// =========================================================================

undefined4 WDUCMdUyKLQAUXqbiWiwsAS_tcRcZgpphjVjXUfj_RZnEEPWrB(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 6;
  if (-1 < (int)((uint)*(byte *)(param_1 + 0xc) << 0x1d)) {
    uVar1 = 3;
  }
  return uVar1;
}


// =========================================================================
// Function: XMemAbpYxlbsguMRBTYoZibSnGkHRljGvRNcLRGIgwzTwsYSrtYKeCwMZEuVvSYFqPGyPyxk
// Entry: 0x71b8d5b2 | Size: 58 bytes
// =========================================================================

void XMemAbpYxlbsguMRBTYoZibSnGkHRljGvRNcLRGIgwzTwsYSrtYKeCwMZEuVvSYFqPGyPyxk
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = param_6;
  uStack_14 = param_3;
  FUN_71b8c83a(param_3,param_4,&uStack_14,param_6,param_7,&uStack_18,*(undefined4 *)(param_1 + 8),
               *(undefined4 *)(param_1 + 0xc));
  *param_5 = uStack_14;
  *param_8 = uStack_18;
  return;
}


// =========================================================================
// Function: ljUDSKhqbUTMRNoTWLerwAdCgnYDRAGkepyBzblfLrmvuZmKIeXacryZMZiMbyTjHsuLokY
// Entry: 0x71b8d620 | Size: 58 bytes
// =========================================================================

void ljUDSKhqbUTMRNoTWLerwAdCgnYDRAGkepyBzblfLrmvuZmKIeXacryZMZiMbyTjHsuLokY
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = param_6;
  uStack_14 = param_3;
  FUN_71b8c9f0(param_3,param_4,&uStack_14,param_6,param_7,&uStack_18,*(undefined4 *)(param_1 + 8),
               *(undefined4 *)(param_1 + 0xc));
  *param_5 = uStack_14;
  *param_8 = uStack_18;
  return;
}


// =========================================================================
// Function: AtFFHTOZMpENRCUoJvsZaaBfxqlGUacXEnYixHOsUdRbIfIaGTaONKNKcNXSBVVf_c
// Entry: 0x71b8d68e | Size: 8 bytes
// =========================================================================

undefined4
AtFFHTOZMpENRCUoJvsZaaBfxqlGUacXEnYixHOsUdRbIfIaGTaONKNKcNXSBVVf_c
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 *param_5)

{
  *param_5 = param_3;
  return 3;
}


// =========================================================================
// Function: Zc_AdDMDLnUlnLzbLjgTulBxKdJAEpSxowjZKKpzYDWpEbVh
// Entry: 0x71b8d6ae | Size: 4 bytes
// =========================================================================

undefined4 Zc_AdDMDLnUlnLzbLjgTulBxKdJAEpSxowjZKKpzYDWpEbVh(void)

{
  return 0;
}


// =========================================================================
// Function: nOpGuVMvcxAogzhhzKcqESTIAgOFJrfVzmcgsi__lznaiuqdVKXMH
// Entry: 0x71b8d6ca | Size: 4 bytes
// =========================================================================

undefined4 nOpGuVMvcxAogzhhzKcqESTIAgOFJrfVzmcgsi__lznaiuqdVKXMH(void)

{
  return 0;
}


// =========================================================================
// Function: BWehZdNMBfwwtTs_BqafYbiKNuMryhLyvpOdaQtAyBONgQchgeRydoxmcyZbOl
// Entry: 0x71b8d6e6 | Size: 28 bytes
// =========================================================================

void BWehZdNMBfwwtTs_BqafYbiKNuMryhLyvpOdaQtAyBONgQchgeRydoxmcyZbOl
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  FUN_71b8cc62(param_3,param_4,param_5,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  return;
}


// =========================================================================
// Function: kZPmfzxjNtCciwggkByPkHLioSfMHeBsxRKXyilWSfjzPJaKGB
// Entry: 0x71b8d736 | Size: 14 bytes
// =========================================================================

undefined4 kZPmfzxjNtCciwggkByPkHLioSfMHeBsxRKXyilWSfjzPJaKGB(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 7;
  if (-1 < (int)((uint)*(byte *)(param_1 + 0xc) << 0x1d)) {
    uVar1 = 4;
  }
  return uVar1;
}


// =========================================================================
// Function: jpxIlmnzPEdMOSUxrHZNgPAqHIyGmhMdGLQICmrTWPIDFJvjINNpkdAIebWVXEVKiEmOOvtoUUF
// Entry: 0x71b8d75c | Size: 196 bytes
// =========================================================================

undefined4
jpxIlmnzPEdMOSUxrHZNgPAqHIyGmhMdGLQICmrTWPIDFJvjINNpkdAIebWVXEVKiEmOOvtoUUF
          (int param_1,undefined4 param_2,uint *param_3,uint *param_4,uint *param_5,byte *param_6,
          int param_7,undefined4 *param_8)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = *(uint *)(param_1 + 0xc);
  if ((int)((uint)*(byte *)(param_1 + 0x10) << 0x1e) < 0) {
    if (param_7 - (int)param_6 < 2) {
      uVar2 = 1;
      goto LAB_71b8d814;
    }
    param_6[0] = 0xfe;
    param_6[1] = 0xff;
    param_6 = param_6 + 2;
  }
  uVar2 = 0;
  if (param_3 < param_4) {
    do {
      uVar5 = *param_3;
      if ((uVar6 < uVar5) || ((uVar5 & 0xfffff800) == 0xd800)) {
        uVar2 = 2;
        goto LAB_71b8d814;
      }
      bVar1 = (byte)(uVar5 >> 8);
      if (uVar5 >> 0x10 == 0) {
        if (param_7 - (int)param_6 < 2) {
LAB_71b8d80a:
          uVar2 = 1;
          goto LAB_71b8d814;
        }
        pbVar3 = param_6 + 1;
        *param_6 = bVar1;
        iVar7 = 2;
      }
      else {
        if (param_7 - (int)param_6 < 4) goto LAB_71b8d80a;
        param_6[2] = bVar1 & 3 | 0xdc;
        iVar4 = (uVar5 >> 10 & 0x7c0) + 0x3fc0;
        iVar7 = 4;
        param_6[1] = (bVar1 >> 2) + (char)iVar4;
        *param_6 = (byte)((uint)iVar4 >> 8) | 0xd8;
        pbVar3 = param_6 + 3;
      }
      param_3 = param_3 + 1;
      param_6 = param_6 + iVar7;
      *pbVar3 = (byte)uVar5;
    } while (param_3 < param_4);
    uVar2 = 0;
  }
LAB_71b8d814:
  *param_5 = (uint)param_3;
  *param_8 = param_6;
  return uVar2;
}


// =========================================================================
// Function: GveMINhVmXVmiBnlPTdoBtdvxvZEGuAQTnMtxLSSRyOjh_NypnQJutwstYwqtrwMaWobwCckKh
// Entry: 0x71b8d838 | Size: 190 bytes
// =========================================================================

int GveMINhVmXVmiBnlPTdoBtdvxvZEGuAQTnMtxLSSRyOjh_NypnQJutwstYwqtrwMaWobwCckKh
              (int param_1,undefined4 param_2,byte *param_3,byte *param_4,undefined4 *param_5,
              uint *param_6,uint *param_7,uint *param_8)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0xc);
  if ((((1 < (int)param_4 - (int)param_3) && ((*(uint *)(param_1 + 0x10) & 4) != 0)) &&
      (*param_3 == 0xfe)) && (param_3[1] == 0xff)) {
    param_3 = param_3 + 2;
  }
  for (; (param_3 < param_4 + -1 && (param_6 < param_7)); param_6 = param_6 + 1) {
    bVar1 = *param_3 & 0xfc;
    uVar3 = (uint)CONCAT11(*param_3,param_3[1]);
    if (bVar1 == 0xd8) {
      if ((int)param_4 - (int)param_3 < 4) {
        iVar2 = 1;
        goto LAB_71b8d8e0;
      }
      if (((param_3[2] & 0xfc) != 0xdc) ||
         (uVar3 = (param_3[1] & 0x3f | uVar3 & 0x3c0) * 0x400 +
                  ((uint)param_3[3] | (param_3[2] & 3) << 8) + 0x10000, uVar4 < uVar3)) {
        iVar2 = 2;
        goto LAB_71b8d8e0;
      }
      iVar2 = 4;
    }
    else {
      iVar2 = 2;
      if ((bVar1 == 0xdc) || (uVar4 < uVar3)) goto LAB_71b8d8e0;
    }
    param_3 = param_3 + iVar2;
    *param_6 = uVar3;
  }
  iVar2 = 0;
  if (param_3 < param_4) {
    iVar2 = 1;
  }
LAB_71b8d8e0:
  *param_5 = param_3;
  *param_8 = (uint)param_6;
  return iVar2;
}


// =========================================================================
// Function: oR_juSSriHi_MxHM_RfFbde_KuZxzREpXhzNUxpcieANDRiOHBEUvBWLYMSmWFUazE_UCj
// Entry: 0x71b8d90e | Size: 8 bytes
// =========================================================================

undefined4
oR_juSSriHi_MxHM_RfFbde_KuZxzREpXhzNUxpcieANDRiOHBEUvBWLYMSmWFUazE_UCj
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 *param_5)

{
  *param_5 = param_3;
  return 3;
}


// =========================================================================
// Function: DJqhlXDoRDTjKOScOvraGZgqHSRFCPwRcWfVzseKzwAhBSBILJmN
// Entry: 0x71b8d92e | Size: 4 bytes
// =========================================================================

undefined4 DJqhlXDoRDTjKOScOvraGZgqHSRFCPwRcWfVzseKzwAhBSBILJmN(void)

{
  return 0;
}


// =========================================================================
// Function: wztLaMRTeFyEfXtuDMq_WiIKgQJvf_XjozpHorV__JodsCuEbQVVzlEMC
// Entry: 0x71b8d94a | Size: 4 bytes
// =========================================================================

undefined4 wztLaMRTeFyEfXtuDMq_WiIKgQJvf_XjozpHorV__JodsCuEbQVVzlEMC(void)

{
  return 0;
}


// =========================================================================
// Function: cCdrEygHgCwNuLaSQQnelkWemqnMfwfViJHBJdoKcaxdcVqNNToqqdLegoWlIlrOfP
// Entry: 0x71b8d966 | Size: 28 bytes
// =========================================================================

void cCdrEygHgCwNuLaSQQnelkWemqnMfwfViJHBJdoKcaxdcVqNNToqqdLegoWlIlrOfP
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  FUN_71b8d9b6(param_3,param_4,param_5,*(undefined4 *)(param_1 + 0xc),
               *(undefined4 *)(param_1 + 0x10));
  return;
}


// =========================================================================
// Function: FUN_71b8d9b6
// Entry: 0x71b8d9b6 | Size: 186 bytes
// =========================================================================

int FUN_71b8d9b6(byte *param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  bool bVar5;
  
  pbVar4 = param_1;
  if ((((1 < param_2 - (int)param_1) && ((param_5 & 4) != 0)) && (*param_1 == 0xfe)) &&
     (param_1[1] == 0xff)) {
    pbVar4 = param_1 + 2;
  }
  if ((pbVar4 < (byte *)(param_2 + -1)) && (param_3 != 0)) {
    uVar3 = 1;
    do {
      bVar1 = *pbVar4 & 0xfc;
      uVar2 = (uint)CONCAT11(*pbVar4,pbVar4[1]);
      if (bVar1 == 0xd8) {
        if (((param_2 - (int)pbVar4 < 4) || ((pbVar4[2] & 0xfc) != 0xdc)) ||
           (param_4 < ((uint)pbVar4[3] | (pbVar4[2] & 3) << 8) +
                      (pbVar4[1] & 0x3f | uVar2 & 0x3c0) * 0x400 + 0x10000)) break;
        pbVar4 = pbVar4 + 4;
      }
      else {
        if ((bVar1 == 0xdc) || (param_4 < uVar2)) break;
        pbVar4 = pbVar4 + 2;
      }
      if (((byte *)(param_2 + -1) <= pbVar4) || (bVar5 = param_3 <= uVar3, uVar3 = uVar3 + 1, bVar5)
         ) break;
    } while( true );
  }
  return (int)pbVar4 - (int)param_1;
}


// =========================================================================
// Function: wmPCTkcMvzFOuWgJhEKAOGeMklaTxHDbkgKNgoAKQn_LdRPbazzqIs
// Entry: 0x71b8da88 | Size: 14 bytes
// =========================================================================

undefined4 wmPCTkcMvzFOuWgJhEKAOGeMklaTxHDbkgKNgoAKQn_LdRPbazzqIs(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 6;
  if (-1 < (int)((uint)*(byte *)(param_1 + 0x10) << 0x1d)) {
    uVar1 = 4;
  }
  return uVar1;
}


// =========================================================================
// Function: JZjHRK_qqMhAKdNYUVKBfSWJKRXgelvmVOy_aaHQiXnZpyqWaMCCRJVParFKEuyGIytdjwvxgrO
// Entry: 0x71b8daae | Size: 182 bytes
// =========================================================================

undefined4
JZjHRK_qqMhAKdNYUVKBfSWJKRXgelvmVOy_aaHQiXnZpyqWaMCCRJVParFKEuyGIytdjwvxgrO
          (int param_1,undefined4 param_2,uint *param_3,uint *param_4,uint *param_5,char *param_6,
          int param_7,undefined4 *param_8)

{
  byte bVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = *(uint *)(param_1 + 0xc);
  pcVar3 = param_6;
  if ((int)((uint)*(byte *)(param_1 + 0x10) << 0x1e) < 0) {
    if (param_7 - (int)param_6 < 2) {
      uVar2 = 1;
      goto LAB_71b8db58;
    }
    pcVar3 = param_6 + 2;
    param_6[0] = -1;
    param_6[1] = -2;
  }
  uVar2 = 0;
  if (param_3 < param_4) {
    do {
      uVar5 = *param_3;
      if ((uVar6 < uVar5) || ((uVar5 & 0xfffff800) == 0xd800)) {
        uVar2 = 2;
        goto LAB_71b8db58;
      }
      if (uVar5 >> 0x10 == 0) {
        if (param_7 - (int)pcVar3 < 2) {
LAB_71b8db4c:
          uVar2 = 1;
          goto LAB_71b8db58;
        }
        pcVar4 = pcVar3 + 2;
        *(short *)pcVar3 = (short)uVar5;
      }
      else {
        if (param_7 - (int)pcVar3 < 4) goto LAB_71b8db4c;
        pcVar3[2] = (char)uVar5;
        bVar1 = (byte)(uVar5 >> 8);
        pcVar3[3] = bVar1 & 3 | 0xdc;
        iVar7 = (uVar5 >> 10 & 0x7c0) + 0x3fc0;
        *pcVar3 = (bVar1 >> 2) + (char)iVar7;
        pcVar3[1] = (byte)((uint)iVar7 >> 8) | 0xd8;
        pcVar4 = pcVar3 + 4;
      }
      param_3 = param_3 + 1;
      pcVar3 = pcVar4;
    } while (param_3 < param_4);
    uVar2 = 0;
  }
LAB_71b8db58:
  *param_5 = (uint)param_3;
  *param_8 = pcVar3;
  return uVar2;
}


// =========================================================================
// Function: vFbwuTALjUFHaPAVLuhNKWRtzhFAyTUyiYWdKhKGmJcrbqIDPqMIjtrAEUvLTVHUVFPKOSZMyh
// Entry: 0x71b8db7c | Size: 190 bytes
// =========================================================================

int vFbwuTALjUFHaPAVLuhNKWRtzhFAyTUyiYWdKhKGmJcrbqIDPqMIjtrAEUvLTVHUVFPKOSZMyh
              (int param_1,undefined4 param_2,ushort *param_3,ushort *param_4,undefined4 *param_5,
              uint *param_6,uint *param_7,uint *param_8)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0xc);
  if ((((1 < (int)param_4 - (int)param_3) && ((*(uint *)(param_1 + 0x10) & 4) != 0)) &&
      ((byte)*param_3 == 0xff)) && (*(byte *)((int)param_3 + 1) == 0xfe)) {
    param_3 = param_3 + 1;
  }
  for (; (param_3 < (ushort *)((int)param_4 + -1) && (param_6 < param_7)); param_6 = param_6 + 1) {
    bVar1 = *(byte *)((int)param_3 + 1) & 0xfc;
    uVar3 = (uint)*param_3;
    if (bVar1 == 0xd8) {
      if ((int)param_4 - (int)param_3 < 4) {
        iVar2 = 1;
        goto LAB_71b8dc24;
      }
      if (((*(byte *)((int)param_3 + 3) & 0xfc) != 0xdc) ||
         (uVar3 = ((byte)*param_3 & 0x3f | uVar3 & 0x3c0) * 0x400 +
                  ((uint)(byte)param_3[1] | (*(byte *)((int)param_3 + 3) & 3) << 8) + 0x10000,
         uVar4 < uVar3)) {
        iVar2 = 2;
        goto LAB_71b8dc24;
      }
      iVar2 = 4;
    }
    else {
      iVar2 = 2;
      if ((bVar1 == 0xdc) || (uVar4 < uVar3)) goto LAB_71b8dc24;
    }
    param_3 = (ushort *)((int)param_3 + iVar2);
    *param_6 = uVar3;
  }
  iVar2 = 0;
  if (param_3 < param_4) {
    iVar2 = 1;
  }
LAB_71b8dc24:
  *param_5 = param_3;
  *param_8 = (uint)param_6;
  return iVar2;
}


// =========================================================================
// Function: uVASlpUrPMeUludGGJRV_CGJGulSfN_nPWpJukdiQWVcOGItfmHkMFrjRZCpQsUoPwLQOc
// Entry: 0x71b8dc52 | Size: 8 bytes
// =========================================================================

undefined4
uVASlpUrPMeUludGGJRV_CGJGulSfN_nPWpJukdiQWVcOGItfmHkMFrjRZCpQsUoPwLQOc
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 *param_5)

{
  *param_5 = param_3;
  return 3;
}


// =========================================================================
// Function: iAIBoFggleJzYGjaXOB_rmdEhYWNs_hGslvjMRbOuarPepJXrphG
// Entry: 0x71b8dc72 | Size: 4 bytes
// =========================================================================

undefined4 iAIBoFggleJzYGjaXOB_rmdEhYWNs_hGslvjMRbOuarPepJXrphG(void)

{
  return 0;
}


// =========================================================================
// Function: IodrgKSfjhVWzzDlFQjawDfELIXycdBAInKcbJhGaIgEeTvSJtGAjOCC_
// Entry: 0x71b8dc8e | Size: 4 bytes
// =========================================================================

undefined4 IodrgKSfjhVWzzDlFQjawDfELIXycdBAInKcbJhGaIgEeTvSJtGAjOCC_(void)

{
  return 0;
}


// =========================================================================
// Function: VToAysNhFnURMUhbmUJECbEgJpSZZbZxBvvsLEUMZahj_ksomWnOgD_JuKftsraqKe
// Entry: 0x71b8dcaa | Size: 28 bytes
// =========================================================================

void VToAysNhFnURMUhbmUJECbEgJpSZZbZxBvvsLEUMZahj_ksomWnOgD_JuKftsraqKe
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  FUN_71b8dcfa(param_3,param_4,param_5,*(undefined4 *)(param_1 + 0xc),
               *(undefined4 *)(param_1 + 0x10));
  return;
}


// =========================================================================
// Function: FUN_71b8dcfa
// Entry: 0x71b8dcfa | Size: 186 bytes
// =========================================================================

int FUN_71b8dcfa(ushort *param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  byte bVar1;
  uint uVar2;
  ushort *puVar3;
  bool bVar4;
  
  puVar3 = param_1;
  if ((((1 < param_2 - (int)param_1) && ((param_5 & 4) != 0)) && ((byte)*param_1 == 0xff)) &&
     (*(byte *)((int)param_1 + 1) == 0xfe)) {
    puVar3 = param_1 + 1;
  }
  if ((puVar3 < (ushort *)(param_2 + -1)) && (param_3 != 0)) {
    uVar2 = 1;
    do {
      bVar1 = *(byte *)((int)puVar3 + 1) & 0xfc;
      if (bVar1 == 0xd8) {
        if (((param_2 - (int)puVar3 < 4) || ((*(byte *)((int)puVar3 + 3) & 0xfc) != 0xdc)) ||
           (param_4 < ((uint)(byte)puVar3[1] | (*(byte *)((int)puVar3 + 3) & 3) << 8) +
                      ((byte)*puVar3 & 0x3f | *puVar3 & 0x3c0) * 0x400 + 0x10000)) break;
        puVar3 = puVar3 + 2;
      }
      else {
        if ((bVar1 == 0xdc) || (param_4 < *puVar3)) break;
        puVar3 = puVar3 + 1;
      }
      if (((ushort *)(param_2 + -1) <= puVar3) ||
         (bVar4 = param_3 <= uVar2, uVar2 = uVar2 + 1, bVar4)) break;
    } while( true );
  }
  return (int)puVar3 - (int)param_1;
}


// =========================================================================
// Function: PtNaKbEeQELNguqfYftgCssviPtKgyQoEuyWDOBzbYduQdRzJWj_X_
// Entry: 0x71b8ddcc | Size: 14 bytes
// =========================================================================

undefined4 PtNaKbEeQELNguqfYftgCssviPtKgyQoEuyWDOBzbYduQdRzJWj_X_(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 6;
  if (-1 < (int)((uint)*(byte *)(param_1 + 0x10) << 0x1d)) {
    uVar1 = 4;
  }
  return uVar1;
}


// =========================================================================
// Function: tURzrUDhzbhxnqlvMOd_YlIGgzTMJOBJgNx_w_sgli_HDACL_wpSAYcfayhmpCncvCKUnFSFfWfkp
// Entry: 0x71b8ddf2 | Size: 102 bytes
// =========================================================================

undefined4
tURzrUDhzbhxnqlvMOd_YlIGgzTMJOBJgNx_w_sgli_HDACL_wpSAYcfayhmpCncvCKUnFSFfWfkp
          (int param_1,undefined4 param_2,ushort *param_3,ushort *param_4,undefined4 *param_5,
          ushort *param_6,int param_7,undefined4 *param_8)

{
  ushort uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_1 + 8);
  puVar3 = param_6;
  if ((int)((uint)*(byte *)(param_1 + 0xc) << 0x1e) < 0) {
    if (param_7 - (int)param_6 < 2) {
LAB_71b8de12:
      uVar2 = 1;
      puVar3 = param_6;
      goto LAB_71b8de4a;
    }
    puVar3 = param_6 + 1;
    *param_6 = 0xfffe;
  }
  if (param_3 < param_4) {
    param_7 = param_7 - (int)puVar3;
    param_6 = puVar3;
    do {
      uVar1 = *param_3;
      uVar4 = (uint)uVar1;
      uVar2 = 2;
      puVar3 = param_6;
      if ((uVar5 < uVar4) || ((uVar4 & 0xf800) == 0xd800)) goto LAB_71b8de4a;
      if (param_7 < 2) goto LAB_71b8de12;
      param_3 = param_3 + 1;
      puVar3 = param_6 + 1;
      *param_6 = (ushort)((uVar4 & 0xff) << 8) | uVar1 >> 8;
      param_7 = param_7 + -2;
      param_6 = puVar3;
    } while (param_3 < param_4);
  }
  uVar2 = 0;
LAB_71b8de4a:
  *param_5 = param_3;
  *param_8 = puVar3;
  return uVar2;
}


// =========================================================================
// Function: RTIhuPkMViyOXaVcSozjLRZLkfDDwZrQzGhGlxGlMzKAqeRHiBIfygD_TtGlrNOQCwnyiKsPeRBI
// Entry: 0x71b8de70 | Size: 122 bytes
// =========================================================================

undefined4
RTIhuPkMViyOXaVcSozjLRZLkfDDwZrQzGhGlxGlMzKAqeRHiBIfygD_TtGlrNOQCwnyiKsPeRBI
          (int param_1,undefined4 param_2,ushort *param_3,ushort *param_4,undefined4 *param_5,
          undefined2 *param_6,undefined2 *param_7,undefined4 *param_8)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_1 + 8);
  if ((((1 < (int)param_4 - (int)param_3) && ((*(uint *)(param_1 + 0xc) & 4) != 0)) &&
      ((char)*param_3 == -2)) && (*(char *)((int)param_3 + 1) == -1)) {
    param_3 = param_3 + 1;
  }
  puVar4 = param_6;
  if (param_3 < (ushort *)((int)param_4 + -1)) {
    while (puVar4 = param_6, param_6 < param_7) {
      uVar1 = (uint)*param_3 << 0x18;
      uVar2 = uVar1 | (uint)(*param_3 >> 8) << 0x10;
      uVar3 = 2;
      if ((uVar5 < uVar2 >> 0x10) || ((uVar1 & 0xf8000000) == 0xd8000000)) goto LAB_71b8dedc;
      param_3 = param_3 + 1;
      puVar4 = param_6 + 1;
      *param_6 = (short)(uVar2 >> 0x10);
      param_6 = puVar4;
      if ((ushort *)((int)param_4 + -1) <= param_3) break;
    }
  }
  uVar3 = 0;
  if (param_3 < param_4) {
    uVar3 = 1;
  }
LAB_71b8dedc:
  *param_5 = param_3;
  *param_8 = puVar4;
  return uVar3;
}


// =========================================================================
// Function: PcEiwrJCjNKSXAzecUxnySFYUWWuzQyr_rSEhZhmPGdiEfrgzfOTIgQG_RJJpwJgnVmsSbF
// Entry: 0x71b8df02 | Size: 8 bytes
// =========================================================================

undefined4
PcEiwrJCjNKSXAzecUxnySFYUWWuzQyr_rSEhZhmPGdiEfrgzfOTIgQG_RJJpwJgnVmsSbF
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 *param_5)

{
  *param_5 = param_3;
  return 3;
}


// =========================================================================
// Function: PSuhxPdEUnaTVjXSEXS_X_TvKopFgKrEtFXPHMkwIxZcWlREjHraN
// Entry: 0x71b8df22 | Size: 4 bytes
// =========================================================================

undefined4 PSuhxPdEUnaTVjXSEXS_X_TvKopFgKrEtFXPHMkwIxZcWlREjHraN(void)

{
  return 0;
}


// =========================================================================
// Function: XJWCbQEDxrRTquQBiAZMUbLfJhMFxaqiinHfBZUaeduAQebsQNzdwKxZSn
// Entry: 0x71b8df3e | Size: 4 bytes
// =========================================================================

undefined4 XJWCbQEDxrRTquQBiAZMUbLfJhMFxaqiinHfBZUaeduAQebsQNzdwKxZSn(void)

{
  return 0;
}


// =========================================================================
// Function: ahFWnFrGzjJtMMTEjZMWYgxnpQkesbuRBxVGmaeDHjcOoTPOvFgfpKjHDNJlsDDhNFj
// Entry: 0x71b8df5a | Size: 102 bytes
// =========================================================================

int ahFWnFrGzjJtMMTEjZMWYgxnpQkesbuRBxVGmaeDHjcOoTPOvFgfpKjHDNJlsDDhNFj
              (int param_1,undefined4 param_2,byte *param_3,int param_4,uint param_5)

{
  byte *pbVar1;
  uint uVar2;
  bool bVar3;
  
  pbVar1 = param_3;
  if ((((1 < param_4 - (int)param_3) && ((*(uint *)(param_1 + 0xc) & 4) != 0)) && (*param_3 == 0xfe)
      ) && (param_3[1] == 0xff)) {
    pbVar1 = param_3 + 2;
  }
  if ((param_5 != 0) && (pbVar1 < (byte *)(param_4 + -1))) {
    uVar2 = 1;
    while (((*pbVar1 & 0xf8) != 0xd8 &&
           ((uint)CONCAT11(*pbVar1,pbVar1[1]) <= *(uint *)(param_1 + 8)))) {
      pbVar1 = pbVar1 + 2;
      if (((byte *)(param_4 + -1) <= pbVar1) || (bVar3 = param_5 <= uVar2, uVar2 = uVar2 + 1, bVar3)
         ) break;
    }
  }
  return (int)pbVar1 - (int)param_3;
}


// =========================================================================
// Function: DEpfCBE_rWEGisToOMGlhXQIYgsyTYonnCIzwlcOyvFSUGNxJuInAlj
// Entry: 0x71b8dfd8 | Size: 14 bytes
// =========================================================================

undefined4 DEpfCBE_rWEGisToOMGlhXQIYgsyTYonnCIzwlcOyvFSUGNxJuInAlj(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 4;
  if (-1 < (int)((uint)*(byte *)(param_1 + 0xc) << 0x1d)) {
    uVar1 = 2;
  }
  return uVar1;
}


// =========================================================================
// Function: RYfTvRMBnmOpHycxwyqVTNWUWKIkMTn_ijmdTPvrQvZTXmziqRFvbpEiiZbeTKYpjzbzIFCxfmaio
// Entry: 0x71b8dffe | Size: 100 bytes
// =========================================================================

undefined4
RYfTvRMBnmOpHycxwyqVTNWUWKIkMTn_ijmdTPvrQvZTXmziqRFvbpEiiZbeTKYpjzbzIFCxfmaio
          (int param_1,undefined4 param_2,ushort *param_3,ushort *param_4,undefined4 *param_5,
          ushort *param_6,int param_7,undefined4 *param_8)

{
  ushort uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 8);
  puVar3 = param_6;
  if ((int)((uint)*(byte *)(param_1 + 0xc) << 0x1e) < 0) {
    if (param_7 - (int)param_6 < 2) {
LAB_71b8e01e:
      uVar2 = 1;
      puVar3 = param_6;
      goto LAB_71b8e054;
    }
    puVar3 = param_6 + 1;
    *param_6 = 0xfeff;
  }
  if (param_3 < param_4) {
    param_7 = param_7 - (int)puVar3;
    uVar2 = 2;
    param_6 = puVar3;
    do {
      uVar1 = *param_3;
      puVar3 = param_6;
      if ((uVar4 < uVar1) || ((uVar1 & 0xf800) == 0xd800)) goto LAB_71b8e054;
      if (param_7 < 2) goto LAB_71b8e01e;
      param_3 = param_3 + 1;
      puVar3 = param_6 + 1;
      *param_6 = uVar1;
      param_7 = param_7 + -2;
      param_6 = puVar3;
    } while (param_3 < param_4);
  }
  uVar2 = 0;
LAB_71b8e054:
  *param_5 = param_3;
  *param_8 = puVar3;
  return uVar2;
}


// =========================================================================
// Function: uBqCbsPuge_QgRyEsPmIcdkQdZRUkIugLivmLgP_ajRBHcWYZtHbreuSMjtRoHSZaEMWNBTuKClG
// Entry: 0x71b8e07a | Size: 112 bytes
// =========================================================================

undefined4
uBqCbsPuge_QgRyEsPmIcdkQdZRUkIugLivmLgP_ajRBHcWYZtHbreuSMjtRoHSZaEMWNBTuKClG
          (int param_1,undefined4 param_2,ushort *param_3,ushort *param_4,undefined4 *param_5,
          ushort *param_6,ushort *param_7,undefined4 *param_8)

{
  ushort uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 8);
  if ((((1 < (int)param_4 - (int)param_3) && ((*(uint *)(param_1 + 0xc) & 4) != 0)) &&
      ((char)*param_3 == -1)) && (*(char *)((int)param_3 + 1) == -2)) {
    param_3 = param_3 + 1;
  }
  if (param_3 < (ushort *)((int)param_4 + -1)) {
    uVar2 = 2;
    puVar3 = param_6;
    while (param_6 = puVar3, puVar3 < param_7) {
      uVar1 = *param_3;
      if ((uVar4 < uVar1) || ((uVar1 & 0xf800) == 0xd800)) goto LAB_71b8e0dc;
      param_3 = param_3 + 1;
      param_6 = puVar3 + 1;
      *puVar3 = uVar1;
      puVar3 = param_6;
      if ((ushort *)((int)param_4 + -1) <= param_3) break;
    }
  }
  uVar2 = 0;
  if (param_3 < param_4) {
    uVar2 = 1;
  }
LAB_71b8e0dc:
  *param_5 = param_3;
  *param_8 = param_6;
  return uVar2;
}


// =========================================================================
// Function: iPbrVrm_JDvTsYkVMqQBDWy_QXOmwkuSZKOqmCCjaGmzhgmqqClWzGzp_hziIQmZeNocdIk
// Entry: 0x71b8e102 | Size: 8 bytes
// =========================================================================

undefined4
iPbrVrm_JDvTsYkVMqQBDWy_QXOmwkuSZKOqmCCjaGmzhgmqqClWzGzp_hziIQmZeNocdIk
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 *param_5)

{
  *param_5 = param_3;
  return 3;
}


// =========================================================================
// Function: hIvpyoyUOobikMvRHDDvxHdpTepadZkHczkGzZWYvrfOljwOWuFMh
// Entry: 0x71b8e122 | Size: 4 bytes
// =========================================================================

undefined4 hIvpyoyUOobikMvRHDDvxHdpTepadZkHczkGzZWYvrfOljwOWuFMh(void)

{
  return 0;
}


// =========================================================================
// Function: tyByibybRCVfqdV_XHohkDfCngYWpfEjUykCHgOrKypovvREglsdqUbJRl
// Entry: 0x71b8e13e | Size: 4 bytes
// =========================================================================

undefined4 tyByibybRCVfqdV_XHohkDfCngYWpfEjUykCHgOrKypovvREglsdqUbJRl(void)

{
  return 0;
}


// =========================================================================
// Function: IewIJDOoHAhjnuIvuBUABlDPQXlSCPAZSTzQpy_CFnlSZPyw_ViAFoDPQdDRWLvCgko
// Entry: 0x71b8e15a | Size: 114 bytes
// =========================================================================

int IewIJDOoHAhjnuIvuBUABlDPQXlSCPAZSTzQpy_CFnlSZPyw_ViAFoDPQdDRWLvCgko
              (int param_1,undefined4 param_2,char *param_3,int param_4,uint param_5)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  bool bVar4;
  
  pcVar1 = param_3;
  if ((((1 < param_4 - (int)param_3) && ((*(uint *)(param_1 + 0xc) & 4) != 0)) && (*param_3 == -1))
     && (param_3[1] == -2)) {
    pcVar1 = param_3 + 2;
  }
  if ((param_5 != 0) && (pcVar1 < (char *)(param_4 + -1))) {
    uVar2 = 1;
    while (((pcVar1[1] & 0xf8U) != 0xd8 &&
           (pcVar3 = pcVar1 + 2, (uint)CONCAT11(pcVar1[1],*pcVar1) <= *(uint *)(param_1 + 8)))) {
      pcVar1 = pcVar3;
      if (((char *)(param_4 + -1) <= pcVar3) || (bVar4 = param_5 <= uVar2, uVar2 = uVar2 + 1, bVar4)
         ) break;
    }
  }
  return (int)pcVar1 - (int)param_3;
}


// =========================================================================
// Function: IA_LlKcKttDENujDpKpwQuRwAIsDqoRdpsMAqRpyaSRyPDzkixTWuIj
// Entry: 0x71b8e1e4 | Size: 14 bytes
// =========================================================================

undefined4 IA_LlKcKttDENujDpKpwQuRwAIsDqoRdpsMAqRpyaSRyPDzkixTWuIj(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 4;
  if (-1 < (int)((uint)*(byte *)(param_1 + 0xc) << 0x1d)) {
    uVar1 = 2;
  }
  return uVar1;
}


// =========================================================================
// Function: _kIFHLWBUvoouBnoQRjNeMDQFSFKBSzG_HSzeOevmpzkNqgkYusRMzCbyRhylWIGldVzH_tNdAHNX
// Entry: 0x71b8e20a | Size: 196 bytes
// =========================================================================

undefined4
_kIFHLWBUvoouBnoQRjNeMDQFSFKBSzG_HSzeOevmpzkNqgkYusRMzCbyRhylWIGldVzH_tNdAHNX
          (int param_1,undefined4 param_2,uint *param_3,uint *param_4,uint *param_5,byte *param_6,
          int param_7,undefined4 *param_8)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = *(uint *)(param_1 + 8);
  if ((int)((uint)*(byte *)(param_1 + 0xc) << 0x1e) < 0) {
    if (param_7 - (int)param_6 < 2) {
      uVar2 = 1;
      goto LAB_71b8e2c2;
    }
    param_6[0] = 0xfe;
    param_6[1] = 0xff;
    param_6 = param_6 + 2;
  }
  uVar2 = 0;
  if (param_3 < param_4) {
    do {
      uVar5 = *param_3;
      if ((uVar6 < uVar5) || ((uVar5 & 0xfffff800) == 0xd800)) {
        uVar2 = 2;
        goto LAB_71b8e2c2;
      }
      bVar1 = (byte)(uVar5 >> 8);
      if (uVar5 >> 0x10 == 0) {
        if (param_7 - (int)param_6 < 2) {
LAB_71b8e2b8:
          uVar2 = 1;
          goto LAB_71b8e2c2;
        }
        pbVar3 = param_6 + 1;
        *param_6 = bVar1;
        iVar7 = 2;
      }
      else {
        if (param_7 - (int)param_6 < 4) goto LAB_71b8e2b8;
        param_6[2] = bVar1 & 3 | 0xdc;
        iVar4 = (uVar5 >> 10 & 0x7c0) + 0x3fc0;
        iVar7 = 4;
        param_6[1] = (bVar1 >> 2) + (char)iVar4;
        *param_6 = (byte)((uint)iVar4 >> 8) | 0xd8;
        pbVar3 = param_6 + 3;
      }
      param_3 = param_3 + 1;
      param_6 = param_6 + iVar7;
      *pbVar3 = (byte)uVar5;
    } while (param_3 < param_4);
    uVar2 = 0;
  }
LAB_71b8e2c2:
  *param_5 = (uint)param_3;
  *param_8 = param_6;
  return uVar2;
}


// =========================================================================
// Function: WWUuSpDmubbKluulP_XQDdLFmGyqmZbcwZaxmyF_apemotDeAxmtZGEyiBLycJnMVIEpShbyQKEv
// Entry: 0x71b8e2e6 | Size: 190 bytes
// =========================================================================

int WWUuSpDmubbKluulP_XQDdLFmGyqmZbcwZaxmyF_apemotDeAxmtZGEyiBLycJnMVIEpShbyQKEv
              (int param_1,undefined4 param_2,byte *param_3,byte *param_4,undefined4 *param_5,
              uint *param_6,uint *param_7,uint *param_8)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 8);
  if ((((1 < (int)param_4 - (int)param_3) && ((*(uint *)(param_1 + 0xc) & 4) != 0)) &&
      (*param_3 == 0xfe)) && (param_3[1] == 0xff)) {
    param_3 = param_3 + 2;
  }
  for (; (param_3 < param_4 + -1 && (param_6 < param_7)); param_6 = param_6 + 1) {
    bVar1 = *param_3 & 0xfc;
    uVar3 = (uint)CONCAT11(*param_3,param_3[1]);
    if (bVar1 == 0xd8) {
      if ((int)param_4 - (int)param_3 < 4) {
        iVar2 = 1;
        goto LAB_71b8e38e;
      }
      if (((param_3[2] & 0xfc) != 0xdc) ||
         (uVar3 = (param_3[1] & 0x3f | uVar3 & 0x3c0) * 0x400 +
                  ((uint)param_3[3] | (param_3[2] & 3) << 8) + 0x10000, uVar4 < uVar3)) {
        iVar2 = 2;
        goto LAB_71b8e38e;
      }
      iVar2 = 4;
    }
    else {
      iVar2 = 2;
      if ((bVar1 == 0xdc) || (uVar4 < uVar3)) goto LAB_71b8e38e;
    }
    param_3 = param_3 + iVar2;
    *param_6 = uVar3;
  }
  iVar2 = 0;
  if (param_3 < param_4) {
    iVar2 = 1;
  }
LAB_71b8e38e:
  *param_5 = param_3;
  *param_8 = (uint)param_6;
  return iVar2;
}


// =========================================================================
// Function: _YrenGquHZQLxMbtTHjatmoXLbJMvoUzXElGwjoYUIxHirYlYbTRyahjCbWGUoCplefpKzy
// Entry: 0x71b8e3bc | Size: 8 bytes
// =========================================================================

undefined4
_YrenGquHZQLxMbtTHjatmoXLbJMvoUzXElGwjoYUIxHirYlYbTRyahjCbWGUoCplefpKzy
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 *param_5)

{
  *param_5 = param_3;
  return 3;
}


// =========================================================================
// Function: a_oUGdxGwKCrzHdnLDSNPCcvnRAxfhOghwFifbbgmTJBwglYTsUTl
// Entry: 0x71b8e3dc | Size: 4 bytes
// =========================================================================

undefined4 a_oUGdxGwKCrzHdnLDSNPCcvnRAxfhOghwFifbbgmTJBwglYTsUTl(void)

{
  return 0;
}


// =========================================================================
// Function: ZyoJZh_xGyWQkgaPWgMbkUUHIhKQQxGGHuuXQvLhnxRpwyQgXDHjHe_GFA
// Entry: 0x71b8e3f8 | Size: 4 bytes
// =========================================================================

undefined4 ZyoJZh_xGyWQkgaPWgMbkUUHIhKQQxGGHuuXQvLhnxRpwyQgXDHjHe_GFA(void)

{
  return 0;
}


// =========================================================================
// Function: vVMUzQZFeXlxZQiwOuhVlXplLaQBJePUxHviIhoWdsSgbmwIdxxcYwLSvXrlSNzWwAR
// Entry: 0x71b8e414 | Size: 28 bytes
// =========================================================================

void vVMUzQZFeXlxZQiwOuhVlXplLaQBJePUxHviIhoWdsSgbmwIdxxcYwLSvXrlSNzWwAR
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  FUN_71b8d9b6(param_3,param_4,param_5,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  return;
}


// =========================================================================
// Function: pTtmZPrOVBijGC_VHWeNCYEwiIevFKlvWddgPweAfLwutWDPpPhHpoG
// Entry: 0x71b8e464 | Size: 14 bytes
// =========================================================================

undefined4 pTtmZPrOVBijGC_VHWeNCYEwiIevFKlvWddgPweAfLwutWDPpPhHpoG(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 6;
  if (-1 < (int)((uint)*(byte *)(param_1 + 0xc) << 0x1d)) {
    uVar1 = 4;
  }
  return uVar1;
}


// =========================================================================
// Function: GfwwuZrOYFUIwnLZyVWnNRcFENyGRbvbCMkEgcVLxjCeOqgueSPgWaROKnkdnmGQilFZhGyVfMuJS
// Entry: 0x71b8e48a | Size: 182 bytes
// =========================================================================

undefined4
GfwwuZrOYFUIwnLZyVWnNRcFENyGRbvbCMkEgcVLxjCeOqgueSPgWaROKnkdnmGQilFZhGyVfMuJS
          (int param_1,undefined4 param_2,uint *param_3,uint *param_4,uint *param_5,char *param_6,
          int param_7,undefined4 *param_8)

{
  byte bVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = *(uint *)(param_1 + 8);
  pcVar3 = param_6;
  if ((int)((uint)*(byte *)(param_1 + 0xc) << 0x1e) < 0) {
    if (param_7 - (int)param_6 < 2) {
      uVar2 = 1;
      goto LAB_71b8e534;
    }
    pcVar3 = param_6 + 2;
    param_6[0] = -1;
    param_6[1] = -2;
  }
  uVar2 = 0;
  if (param_3 < param_4) {
    do {
      uVar5 = *param_3;
      if ((uVar6 < uVar5) || ((uVar5 & 0xfffff800) == 0xd800)) {
        uVar2 = 2;
        goto LAB_71b8e534;
      }
      if (uVar5 >> 0x10 == 0) {
        if (param_7 - (int)pcVar3 < 2) {
LAB_71b8e528:
          uVar2 = 1;
          goto LAB_71b8e534;
        }
        pcVar4 = pcVar3 + 2;
        *(short *)pcVar3 = (short)uVar5;
      }
      else {
        if (param_7 - (int)pcVar3 < 4) goto LAB_71b8e528;
        pcVar3[2] = (char)uVar5;
        bVar1 = (byte)(uVar5 >> 8);
        pcVar3[3] = bVar1 & 3 | 0xdc;
        iVar7 = (uVar5 >> 10 & 0x7c0) + 0x3fc0;
        *pcVar3 = (bVar1 >> 2) + (char)iVar7;
        pcVar3[1] = (byte)((uint)iVar7 >> 8) | 0xd8;
        pcVar4 = pcVar3 + 4;
      }
      param_3 = param_3 + 1;
      pcVar3 = pcVar4;
    } while (param_3 < param_4);
    uVar2 = 0;
  }
LAB_71b8e534:
  *param_5 = (uint)param_3;
  *param_8 = pcVar3;
  return uVar2;
}


// =========================================================================
// Function: zywjdmKWLgQIFLKsgDM_zoDxSG_IxZCibefqozaxZJyhGSDIYTqKmmvEyVOGYpHCOzZADfbqTJeG
// Entry: 0x71b8e558 | Size: 190 bytes
// =========================================================================

int zywjdmKWLgQIFLKsgDM_zoDxSG_IxZCibefqozaxZJyhGSDIYTqKmmvEyVOGYpHCOzZADfbqTJeG
              (int param_1,undefined4 param_2,ushort *param_3,ushort *param_4,undefined4 *param_5,
              uint *param_6,uint *param_7,uint *param_8)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 8);
  if ((((1 < (int)param_4 - (int)param_3) && ((*(uint *)(param_1 + 0xc) & 4) != 0)) &&
      ((byte)*param_3 == 0xff)) && (*(byte *)((int)param_3 + 1) == 0xfe)) {
    param_3 = param_3 + 1;
  }
  for (; (param_3 < (ushort *)((int)param_4 + -1) && (param_6 < param_7)); param_6 = param_6 + 1) {
    bVar1 = *(byte *)((int)param_3 + 1) & 0xfc;
    uVar3 = (uint)*param_3;
    if (bVar1 == 0xd8) {
      if ((int)param_4 - (int)param_3 < 4) {
        iVar2 = 1;
        goto LAB_71b8e600;
      }
      if (((*(byte *)((int)param_3 + 3) & 0xfc) != 0xdc) ||
         (uVar3 = ((byte)*param_3 & 0x3f | uVar3 & 0x3c0) * 0x400 +
                  ((uint)(byte)param_3[1] | (*(byte *)((int)param_3 + 3) & 3) << 8) + 0x10000,
         uVar4 < uVar3)) {
        iVar2 = 2;
        goto LAB_71b8e600;
      }
      iVar2 = 4;
    }
    else {
      iVar2 = 2;
      if ((bVar1 == 0xdc) || (uVar4 < uVar3)) goto LAB_71b8e600;
    }
    param_3 = (ushort *)((int)param_3 + iVar2);
    *param_6 = uVar3;
  }
  iVar2 = 0;
  if (param_3 < param_4) {
    iVar2 = 1;
  }
LAB_71b8e600:
  *param_5 = param_3;
  *param_8 = (uint)param_6;
  return iVar2;
}


// =========================================================================
// Function: VQtcmkzgyNwFURHEKFdEcyvuzmDfVaxxwYaGgRDh_unGybsRwuhjtHDvtZUiYTLuCVOObML
// Entry: 0x71b8e62e | Size: 8 bytes
// =========================================================================

undefined4
VQtcmkzgyNwFURHEKFdEcyvuzmDfVaxxwYaGgRDh_unGybsRwuhjtHDvtZUiYTLuCVOObML
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 *param_5)

{
  *param_5 = param_3;
  return 3;
}


// =========================================================================
// Function: jfHyd_iSrTeyBRfZQzZCkgXTMVLRjuokgpxVpYysryeRQjxsYXhGD
// Entry: 0x71b8e64e | Size: 4 bytes
// =========================================================================

undefined4 jfHyd_iSrTeyBRfZQzZCkgXTMVLRjuokgpxVpYysryeRQjxsYXhGD(void)

{
  return 0;
}


// =========================================================================
// Function: VBMXhZbiagXurNWUlsojsTOehcZewXAUwTaVuVbpKpJJkXlymtHJuKeqXF
// Entry: 0x71b8e66a | Size: 4 bytes
// =========================================================================

undefined4 VBMXhZbiagXurNWUlsojsTOehcZewXAUwTaVuVbpKpJJkXlymtHJuKeqXF(void)

{
  return 0;
}


// =========================================================================
// Function: JXfgMmALTvQRNuseTmNESaIAatlOwtZMLhmCZWmFTzBjXjyJIPdscIvCbrRzdhPgCbM
// Entry: 0x71b8e686 | Size: 28 bytes
// =========================================================================

void JXfgMmALTvQRNuseTmNESaIAatlOwtZMLhmCZWmFTzBjXjyJIPdscIvCbrRzdhPgCbM
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  FUN_71b8dcfa(param_3,param_4,param_5,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  return;
}


// =========================================================================
// Function: vryksVrIMuCzZwUAibVzOu_KGXliNczktARuAynudPohFmEfop_Nfrk
// Entry: 0x71b8e6d6 | Size: 14 bytes
// =========================================================================

undefined4 vryksVrIMuCzZwUAibVzOu_KGXliNczktARuAynudPohFmEfop_Nfrk(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 6;
  if (-1 < (int)((uint)*(byte *)(param_1 + 0xc) << 0x1d)) {
    uVar1 = 4;
  }
  return uVar1;
}


// =========================================================================
// Function: CDnJUCFTbhkMBGbJvVkPmDXiBVtsllrvlBYjQfnT_pMRjtt_ecFyHaaOPKvJFMbmBlkflBPoPlIp
// Entry: 0x71b8e6fc | Size: 58 bytes
// =========================================================================

void CDnJUCFTbhkMBGbJvVkPmDXiBVtsllrvlBYjQfnT_pMRjtt_ecFyHaaOPKvJFMbmBlkflBPoPlIp
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = param_6;
  uStack_14 = param_3;
  FUN_71b8e76a(param_3,param_4,&uStack_14,param_6,param_7,&uStack_18,*(undefined4 *)(param_1 + 0xc),
               *(undefined4 *)(param_1 + 0x10));
  *param_5 = uStack_14;
  *param_8 = uStack_18;
  return;
}


// =========================================================================
// Function: FUN_71b8e76a
// Entry: 0x71b8e76a | Size: 432 bytes
// =========================================================================

undefined4
FUN_71b8e76a(uint param_1,uint *param_2,uint *param_3,undefined1 *param_4,int param_5,int *param_6,
            uint param_7,byte param_8)

{
  undefined1 *puVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;
  uint *puVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  
  *param_3 = param_1;
  *param_6 = (int)param_4;
  if ((int)((uint)param_8 << 0x1e) < 0) {
    if (param_5 - (int)param_4 < 3) {
      return 1;
    }
    *param_6 = (int)(param_4 + 1);
    *param_4 = 0xef;
    puVar1 = (undefined1 *)*param_6;
    *param_6 = (int)(puVar1 + 1);
    *puVar1 = 0xbb;
    puVar1 = (undefined1 *)*param_6;
    *param_6 = (int)(puVar1 + 1);
    *puVar1 = 0xbf;
  }
  puVar5 = (uint *)*param_3;
  do {
    if (param_2 <= puVar5) {
      return 0;
    }
    uVar8 = *puVar5;
    uVar7 = uVar8 & 0xffff;
    if (param_7 < uVar7) {
      return 2;
    }
    if (uVar7 < 0x80) {
      puVar1 = (undefined1 *)*param_6;
      if (param_5 - (int)puVar1 < 1) {
        return 1;
      }
LAB_71b8e8f6:
      *param_6 = (int)(puVar1 + 1);
      *puVar1 = (char)uVar8;
    }
    else {
      if (uVar7 >> 0xb == 0) {
        pbVar2 = (byte *)*param_6;
        if (param_5 - (int)pbVar2 < 2) {
          return 1;
        }
        *param_6 = (int)(pbVar2 + 1);
        bVar4 = (byte)(uVar8 >> 6) | 0xc0;
LAB_71b8e8ec:
        *pbVar2 = bVar4;
        uVar8 = uVar8 & 0x3f | 0x80;
        puVar1 = (undefined1 *)*param_6;
        goto LAB_71b8e8f6;
      }
      if (uVar7 >> 0xb < 0x1b) {
LAB_71b8e8c2:
        pcVar6 = (char *)*param_6;
        if (param_5 - (int)pcVar6 < 3) {
          return 1;
        }
        *param_6 = (int)(pcVar6 + 1);
        *pcVar6 = (char)(uVar7 >> 0xc) + -0x20;
        pbVar2 = (byte *)*param_6;
        *param_6 = (int)(pbVar2 + 1);
        bVar4 = (byte)(uVar8 >> 6) & 0x3f | 0x80;
        goto LAB_71b8e8ec;
      }
      if (0x36 < uVar7 >> 10) {
        if (uVar7 < 0xe000) {
          return 2;
        }
        goto LAB_71b8e8c2;
      }
      if ((int)param_2 - (int)puVar5 < 8) {
        return 1;
      }
      uVar7 = puVar5[1];
      if ((uVar7 & 0xfc00) != 0xdc00) {
        return 2;
      }
      if (param_5 - *param_6 < 4) {
        return 1;
      }
      if (param_7 < (uVar7 & 0x3ff) + (uVar8 & 0x3ff) * 0x400 + 0x10000) {
        return 2;
      }
      *param_3 = (uint)(puVar5 + 1);
      pcVar6 = (char *)*param_6;
      *param_6 = (int)(pcVar6 + 1);
      uVar3 = ((uVar8 & 0x3c0) >> 6) + 1;
      *pcVar6 = (char)(uVar3 >> 2) + -0x10;
      pcVar6 = (char *)*param_6;
      *param_6 = (int)(pcVar6 + 1);
      *pcVar6 = ((byte)((uVar8 << 0x1a) >> 0x1c) | (byte)((uVar3 & 3) << 4)) + 0x80;
      pcVar6 = (char *)*param_6;
      *param_6 = (int)(pcVar6 + 1);
      *pcVar6 = ((byte)((uVar7 << 0x16) >> 0x1c) | (byte)((uVar8 & 3) << 4)) + 0x80;
      pbVar2 = (byte *)*param_6;
      *param_6 = (int)(pbVar2 + 1);
      *pbVar2 = (byte)uVar7 & 0x3f | 0x80;
    }
    puVar5 = (uint *)(*param_3 + 4);
    *param_3 = (uint)puVar5;
  } while( true );
}


// =========================================================================
// Function: duIiGcfEcOqwppYKRdzuagVXNghciAgxVyZslhPNQAtbBQjObLWsaCTYmMxuMpwXdToxAZtvKMr
// Entry: 0x71b8e932 | Size: 58 bytes
// =========================================================================

void duIiGcfEcOqwppYKRdzuagVXNghciAgxVyZslhPNQAtbBQjObLWsaCTYmMxuMpwXdToxAZtvKMr
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = param_6;
  uStack_14 = param_3;
  FUN_71b8e9a0(param_3,param_4,&uStack_14,param_6,param_7,&uStack_18,*(undefined4 *)(param_1 + 0xc),
               *(undefined4 *)(param_1 + 0x10));
  *param_5 = uStack_14;
  *param_8 = uStack_18;
  return;
}


// =========================================================================
// Function: FUN_71b8e9a0
// Entry: 0x71b8e9a0 | Size: 484 bytes
// =========================================================================

bool FUN_71b8e9a0(int param_1,byte *param_2,int *param_3,uint param_4,uint *param_5,uint *param_6,
                 uint param_7,byte param_8)

{
  byte bVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  *param_3 = param_1;
  *param_6 = param_4;
  pbVar6 = (byte *)*param_3;
  if (((int)((uint)param_8 << 0x1d) < 0) && (2 < (int)param_2 - (int)pbVar6)) {
    bVar1 = *pbVar6;
    bVar10 = bVar1 == 0xef;
    if (bVar10) {
      bVar1 = pbVar6[1];
    }
    if ((bVar10 && bVar1 == 0xbb) && (pbVar6[2] == 0xbf)) {
      pbVar6 = pbVar6 + 3;
      *param_3 = (int)pbVar6;
    }
  }
  if (param_2 <= pbVar6) {
    return false;
  }
  puVar2 = (uint *)*param_6;
  do {
    puVar3 = puVar2;
    if (param_5 <= puVar3) break;
    uVar8 = (uint)*pbVar6;
    if (param_7 < uVar8) {
      return (bool)2;
    }
    if ((char)*pbVar6 < '\0') {
      if (uVar8 < 0xc2) {
        return (bool)2;
      }
      if (uVar8 < 0xe0) {
        if ((int)param_2 - (int)pbVar6 < 2) {
          return true;
        }
        if ((pbVar6[1] & 0xc0) != 0x80) {
          return (bool)2;
        }
        uVar8 = pbVar6[1] & 0x3f | (uVar8 & 0x1f) << 6;
        if (param_7 < uVar8) {
          return (bool)2;
        }
        *puVar3 = uVar8;
        pbVar6 = pbVar6 + 2;
      }
      else if (uVar8 < 0xf0) {
        if ((int)param_2 - (int)pbVar6 < 2) {
          return true;
        }
        uVar9 = (uint)pbVar6[1];
        if (uVar8 == 0xed) {
          uVar4 = uVar9 & 0xe0;
LAB_71b8ea98:
          if (uVar4 != 0x80) {
            return (bool)2;
          }
        }
        else {
          if (uVar8 != 0xe0) {
            uVar4 = uVar9 & 0xc0;
            goto LAB_71b8ea98;
          }
          if ((uVar9 & 0xe0) != 0xa0) {
            return (bool)2;
          }
        }
        if ((int)param_2 - (int)pbVar6 == 2) {
          return true;
        }
        if (((pbVar6[2] & 0xc0) != 0x80) ||
           (uVar8 = ((uVar8 & 0xf) << 0xc | (uVar9 & 0x3f) << 6) + (pbVar6[2] & 0x3f),
           param_7 < uVar8)) {
          return (bool)2;
        }
        *puVar3 = uVar8;
        pbVar6 = pbVar6 + 3;
      }
      else {
        if (0xf4 < uVar8) {
          return (bool)2;
        }
        iVar5 = (int)param_2 - (int)pbVar6;
        if (iVar5 < 2) {
          return true;
        }
        uVar9 = (uint)pbVar6[1];
        if (uVar8 == 0xf4) {
          uVar4 = uVar9 & 0xf0;
LAB_71b8ead0:
          if (uVar4 != 0x80) {
            return (bool)2;
          }
        }
        else {
          if (uVar8 != 0xf0) {
            uVar4 = uVar9 & 0xc0;
            goto LAB_71b8ead0;
          }
          if (0x2f < uVar9 - 0x90) {
            return (bool)2;
          }
        }
        if (iVar5 == 2) {
          return true;
        }
        uVar4 = (uint)pbVar6[2];
        if ((uVar4 & 0xc0) != 0x80) {
          return (bool)2;
        }
        if (iVar5 == 3) {
          return true;
        }
        if ((pbVar6[3] & 0xc0) != 0x80) {
          return (bool)2;
        }
        if ((int)param_5 - (int)puVar3 < 8) {
          return true;
        }
        uVar7 = pbVar6[3] & 0x3f;
        if (param_7 < ((uVar8 & 7) << 0x12 | (uVar4 & 0x3f) << 6 | (uVar9 & 0x3f) << 0xc) + uVar7) {
          return (bool)2;
        }
        puVar3[1] = (uVar4 & 0xf) * 0x40 + uVar7 + 0xdc00;
        *param_6 = (uint)(puVar3 + 1);
        iVar5 = *param_3;
        *puVar3 = (((uVar9 & 0x30) << 2 | (uVar8 & 7) << 8 | (uVar9 & 0xf) << 2) +
                  ((uVar4 & 0x3f) >> 4)) - 0x40 | 0xd800;
        pbVar6 = (byte *)(iVar5 + 4);
      }
    }
    else {
      *puVar3 = uVar8;
      pbVar6 = pbVar6 + 1;
    }
    *param_3 = (int)pbVar6;
    uVar8 = *param_6;
    *param_6 = uVar8 + 4;
    pbVar6 = (byte *)*param_3;
    puVar2 = (uint *)(uVar8 + 4);
  } while (pbVar6 < param_2);
  return param_5 <= puVar3;
}


// =========================================================================
// Function: KTleVVKdsSthWFvSCCblCZlpEiV_fxzMcrZK_kdwWvntSLkMaNuHAtnZffMAeqoymnIJdod
// Entry: 0x71b8eb9c | Size: 8 bytes
// =========================================================================

undefined4
KTleVVKdsSthWFvSCCblCZlpEiV_fxzMcrZK_kdwWvntSLkMaNuHAtnZffMAeqoymnIJdod
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 *param_5)

{
  *param_5 = param_3;
  return 3;
}


// =========================================================================
// Function: XkgOJUYBXjLCJzTcbmoldlfFJsR_NBCXGZszDsqJQlbCrVgidjFYm
// Entry: 0x71b8ebbc | Size: 4 bytes
// =========================================================================

undefined4 XkgOJUYBXjLCJzTcbmoldlfFJsR_NBCXGZszDsqJQlbCrVgidjFYm(void)

{
  return 0;
}


// =========================================================================
// Function: qBRzrCzAknwabDikRhpLcxjBmOgSNMmQOWzqsemsHOgjEucdYQmMILpEoh
// Entry: 0x71b8ebd8 | Size: 4 bytes
// =========================================================================

undefined4 qBRzrCzAknwabDikRhpLcxjBmOgSNMmQOWzqsemsHOgjEucdYQmMILpEoh(void)

{
  return 0;
}


// =========================================================================
// Function: NTubwWhPgqurnEcoujKOtZmfQhHcLzAnRIhomhTzwDQISyJpGofEngBgjAsHHETwTQD
// Entry: 0x71b8ebf4 | Size: 28 bytes
// =========================================================================

void NTubwWhPgqurnEcoujKOtZmfQhHcLzAnRIhomhTzwDQISyJpGofEngBgjAsHHETwTQD
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  FUN_71b8c322(param_3,param_4,param_5,*(undefined4 *)(param_1 + 0xc),
               *(undefined4 *)(param_1 + 0x10));
  return;
}


// =========================================================================
// Function: zkEgMnkjbkxjYuWzEfpCOszwxePyhyYutmKmuq_YGAnSQcjrkmIepGp
// Entry: 0x71b8ec44 | Size: 14 bytes
// =========================================================================

undefined4 zkEgMnkjbkxjYuWzEfpCOszwxePyhyYutmKmuq_YGAnSQcjrkmIepGp(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 7;
  if (-1 < (int)((uint)*(byte *)(param_1 + 0x10) << 0x1d)) {
    uVar1 = 4;
  }
  return uVar1;
}


// =========================================================================
// Function: RywdneXqsQaCueA_axxgYZYqFLkujEdGSPbWXhWZakxJtYJbLDidEqCwvr_nkrPa_kELBdrLTXKCoB
// Entry: 0x71b8ec6a | Size: 58 bytes
// =========================================================================

void RywdneXqsQaCueA_axxgYZYqFLkujEdGSPbWXhWZakxJtYJbLDidEqCwvr_nkrPa_kELBdrLTXKCoB
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = param_6;
  uStack_14 = param_3;
  FUN_71b8bdfe(param_3,param_4,&uStack_14,param_6,param_7,&uStack_18,*(undefined4 *)(param_1 + 8),
               *(undefined4 *)(param_1 + 0xc));
  *param_5 = uStack_14;
  *param_8 = uStack_18;
  return;
}


// =========================================================================
// Function: tpCQ_MBRqDDTsGpdrKrZwWuBdzproNxh_qRzxUWkjiQlQeXyYTpwbKamileDbNLvUziLwWTrlxGea
// Entry: 0x71b8ecd8 | Size: 58 bytes
// =========================================================================

void tpCQ_MBRqDDTsGpdrKrZwWuBdzproNxh_qRzxUWkjiQlQeXyYTpwbKamileDbNLvUziLwWTrlxGea
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = param_6;
  uStack_14 = param_3;
  FUN_71b8c074(param_3,param_4,&uStack_14,param_6,param_7,&uStack_18,*(undefined4 *)(param_1 + 8),
               *(undefined4 *)(param_1 + 0xc));
  *param_5 = uStack_14;
  *param_8 = uStack_18;
  return;
}


// =========================================================================
// Function: QDglvi_FpCXmTHEDfScpFDMwHeQsUOxxJoZdjQKsYxaW_tUnoDQfo_zAACWJKcOyGmotwsaH
// Entry: 0x71b8ed46 | Size: 8 bytes
// =========================================================================

undefined4
QDglvi_FpCXmTHEDfScpFDMwHeQsUOxxJoZdjQKsYxaW_tUnoDQfo_zAACWJKcOyGmotwsaH
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 *param_5)

{
  *param_5 = param_3;
  return 3;
}


// =========================================================================
// Function: byoqe_fLADzmQNiqmysMjPmDkLdxuyyDhIvFeehnmYGacSdJpVOcwN
// Entry: 0x71b8ed66 | Size: 4 bytes
// =========================================================================

undefined4 byoqe_fLADzmQNiqmysMjPmDkLdxuyyDhIvFeehnmYGacSdJpVOcwN(void)

{
  return 0;
}


// =========================================================================
// Function: ZmfGfdm_wOxfNslNfHUKzDxwyz_rUojtSfstNDYltXCiMLTFfEzHDRAnAcr
// Entry: 0x71b8ed82 | Size: 4 bytes
// =========================================================================

undefined4 ZmfGfdm_wOxfNslNfHUKzDxwyz_rUojtSfstNDYltXCiMLTFfEzHDRAnAcr(void)

{
  return 0;
}


// =========================================================================
// Function: NWijnQtgHUBXHFaoonDWGSiWvOBHAuOU_bbKCBtIkBCdGejGcanPFKoEvDwtjVxrUVcG
// Entry: 0x71b8ed9e | Size: 28 bytes
// =========================================================================

void NWijnQtgHUBXHFaoonDWGSiWvOBHAuOU_bbKCBtIkBCdGejGcanPFKoEvDwtjVxrUVcG
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  FUN_71b8c322(param_3,param_4,param_5,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  return;
}


// =========================================================================
// Function: wwkunOvgeRXRDSZIzCzlXsYzZMlwtZXKOTsRjhYWdLkcMTNVIJXbqxVW
// Entry: 0x71b8edee | Size: 14 bytes
// =========================================================================

undefined4 wwkunOvgeRXRDSZIzCzlXsYzZMlwtZXKOTsRjhYWdLkcMTNVIJXbqxVW(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 7;
  if (-1 < (int)((uint)*(byte *)(param_1 + 0xc) << 0x1d)) {
    uVar1 = 4;
  }
  return uVar1;
}


// =========================================================================
// Function: jrQ_ficxpJhsSCKSCUlinn_BKEOrNLgUnjYskpwsfuU_TLdceHdGCnnebnTrFAkYci_CcwTqItbJZR
// Entry: 0x71b8ee14 | Size: 58 bytes
// =========================================================================

void jrQ_ficxpJhsSCKSCUlinn_BKEOrNLgUnjYskpwsfuU_TLdceHdGCnnebnTrFAkYci_CcwTqItbJZR
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = param_6;
  uStack_14 = param_3;
  FUN_71b8e76a(param_3,param_4,&uStack_14,param_6,param_7,&uStack_18,*(undefined4 *)(param_1 + 8),
               *(undefined4 *)(param_1 + 0xc));
  *param_5 = uStack_14;
  *param_8 = uStack_18;
  return;
}


// =========================================================================
// Function: OFfJmkDSOdxBhNOpAEgwFCTgXZ_VeOVprkQetgVlBOOrlGeBeMYmwtiKew_yZBLXfAmCTXFmgqTPE
// Entry: 0x71b8ee82 | Size: 58 bytes
// =========================================================================

void OFfJmkDSOdxBhNOpAEgwFCTgXZ_VeOVprkQetgVlBOOrlGeBeMYmwtiKew_yZBLXfAmCTXFmgqTPE
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = param_6;
  uStack_14 = param_3;
  FUN_71b8e9a0(param_3,param_4,&uStack_14,param_6,param_7,&uStack_18,*(undefined4 *)(param_1 + 8),
               *(undefined4 *)(param_1 + 0xc));
  *param_5 = uStack_14;
  *param_8 = uStack_18;
  return;
}


// =========================================================================
// Function: dGj_IvtxhPtEeimKZY_uZMQIhfckrSlRQDLlvomDmBUHyNiybcmxbZbiXXPsCvyPQKKLGVWC
// Entry: 0x71b8eef0 | Size: 8 bytes
// =========================================================================

undefined4
dGj_IvtxhPtEeimKZY_uZMQIhfckrSlRQDLlvomDmBUHyNiybcmxbZbiXXPsCvyPQKKLGVWC
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 *param_5)

{
  *param_5 = param_3;
  return 3;
}


// =========================================================================
// Function: dSptNDnQcTnpS_yBDiyNebFKSbKUDgQylEzPXpcDkOsHPmkRENRHuh
// Entry: 0x71b8ef10 | Size: 4 bytes
// =========================================================================

undefined4 dSptNDnQcTnpS_yBDiyNebFKSbKUDgQylEzPXpcDkOsHPmkRENRHuh(void)

{
  return 0;
}


// =========================================================================
// Function: BgHkwVbrAzhhinxvmQgeBHordsnHdIpKytrSmevgzGDrTbGInnCZalZvSnE
// Entry: 0x71b8ef2c | Size: 4 bytes
// =========================================================================

undefined4 BgHkwVbrAzhhinxvmQgeBHordsnHdIpKytrSmevgzGDrTbGInnCZalZvSnE(void)

{
  return 0;
}


// =========================================================================
// Function: RBqBLzluUvqbgjiwARvoEFdymjsTlbVOcRfvKbBiRernHAyVQFLiOJRAvfHEkjEARk_X
// Entry: 0x71b8ef48 | Size: 28 bytes
// =========================================================================

void RBqBLzluUvqbgjiwARvoEFdymjsTlbVOcRfvKbBiRernHAyVQFLiOJRAvfHEkjEARk_X
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  FUN_71b8c322(param_3,param_4,param_5,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  return;
}


// =========================================================================
// Function: MxlpFOqxrgnGaDPNJjuDgGRzeeqwYmjK_JvLXwdtlGYECwtffiVZJrUX
// Entry: 0x71b8ef98 | Size: 14 bytes
// =========================================================================

undefined4 MxlpFOqxrgnGaDPNJjuDgGRzeeqwYmjK_JvLXwdtlGYECwtffiVZJrUX(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 7;
  if (-1 < (int)((uint)*(byte *)(param_1 + 0xc) << 0x1d)) {
    uVar1 = 4;
  }
  return uVar1;
}


// =========================================================================
// Function: QBJWkkkaTR_JHRasPBNdGCimRSGpfhorlrAtIrYwR
// Entry: 0x71b8efbe | Size: 6 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void QBJWkkkaTR_JHRasPBNdGCimRSGpfhorlrAtIrYwR(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: ecQroAQiNgjqcaWJffkQYIZTjhcSXqfJXSiIejTRt
// Entry: 0x71b8f022 | Size: 6 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void ecQroAQiNgjqcaWJffkQYIZTjhcSXqfJXSiIejTRt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: GoXuHGbjwzzIcYNQXDXMkoWkSnQ_MJ_yCzFGZGNtwG
// Entry: 0x71b8f086 | Size: 6 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void GoXuHGbjwzzIcYNQXDXMkoWkSnQ_MJ_yCzFGZGNtwG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: xyReJOZiYDaMdtMSRSmRETzaZKmENIimNKseGpgHuE
// Entry: 0x71b8f0ea | Size: 6 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void xyReJOZiYDaMdtMSRSmRETzaZKmENIimNKseGpgHuE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: TrdGfipMhQCKvH_uxYaMpHXusEDk
// Entry: 0x71b8f150 | Size: 34 bytes
// =========================================================================

void TrdGfipMhQCKvH_uxYaMpHXusEDk(undefined4 *param_1,int param_2)

{
  *(undefined2 *)(param_1 + 2) = 0x2c2e;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &DAT_70b142a4;
  param_1[1] = param_2 + -1;
  return;
}


// =========================================================================
// Function: dVwnUKsrToNAKKrV_eUUyGynFjcR
// Entry: 0x71b8f1ac | Size: 40 bytes
// =========================================================================

void dVwnUKsrToNAKKrV_eUUyGynFjcR(undefined4 *param_1,int param_2)

{
  param_1[2] = 0x2e;
  param_1[3] = 0x2c;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &DAT_70b142cc;
  param_1[1] = param_2 + -1;
  param_1[6] = 0;
  return;
}


// =========================================================================
// Function: ZJzSRNufHupE_AJiGhoYq_jxNdP_uTuKgpmY
// Entry: 0x71b8f20c | Size: 30 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void ZJzSRNufHupE_AJiGhoYq_jxNdP_uTuKgpmY(undefined4 *param_1)

{
  *param_1 = &DAT_70b142a4;
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
    thunk_ZXqJfnvcfugNBhbectKcQErwKgYSZROgdkCWh();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: T_vAiurHfUJMjiGkjxOxBKwmNyco
// Entry: 0x71b8f2c4 | Size: 6 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void T_vAiurHfUJMjiGkjxOxBKwmNyco(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: mFYfXeCFEZThvMZla_GGQXvdpLkTBXSUstEi
// Entry: 0x71b8f328 | Size: 30 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void mFYfXeCFEZThvMZla_GGQXvdpLkTBXSUstEi(undefined4 *param_1)

{
  *param_1 = &DAT_70b142cc;
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    thunk_ZXqJfnvcfugNBhbectKcQErwKgYSZROgdkCWh();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: LSvVJDWGuxfxECOuNCASuamaCVsr
// Entry: 0x71b8f3e0 | Size: 6 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void LSvVJDWGuxfxECOuNCASuamaCVsr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: WFuzFMNU_UIkNFGyJdMPxWxqGamB_pyU_TbWQXyjhhYMY
// Entry: 0x71b8f444 | Size: 4 bytes
// =========================================================================

undefined1 WFuzFMNU_UIkNFGyJdMPxWxqGamB_pyU_TbWQXyjhhYMY(int param_1)

{
  return *(undefined1 *)(param_1 + 8);
}


// =========================================================================
// Function: ZUPrHEDyosmpRVMGTVLGoIJGvvbNRWsqkRsGAWjtzWBWZ
// Entry: 0x71b8f460 | Size: 4 bytes
// =========================================================================

undefined4 ZUPrHEDyosmpRVMGTVLGoIJGvvbNRWsqkRsGAWjtzWBWZ(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


// =========================================================================
// Function: IemXvxdGyMTrzykPsGcuujFBeasiIRguWIiIbOtVbuDoA
// Entry: 0x71b8f47c | Size: 4 bytes
// =========================================================================

undefined1 IemXvxdGyMTrzykPsGcuujFBeasiIRguWIiIbOtVbuDoA(int param_1)

{
  return *(undefined1 *)(param_1 + 9);
}


// =========================================================================
// Function: kqkFiXSgZzuhUNrFLgmIRBQPNEFwzNCCkYGLCe_kqAQZe
// Entry: 0x71b8f498 | Size: 4 bytes
// =========================================================================

undefined4 kqkFiXSgZzuhUNrFLgmIRBQPNEFwzNCCkYGLCe_kqAQZe(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


// =========================================================================
// Function: RCtquWfkPMHLONMDXG_AhbeWOkbuwenAcDs_Hl_V
// Entry: 0x71b8f4b4 | Size: 38 bytes
// =========================================================================

void RCtquWfkPMHLONMDXG_AhbeWOkbuwenAcDs_Hl_V(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_2 + 0xc) & 1) == 0) {
    uVar1 = *(undefined8 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x14);
    *param_1 = uVar1;
    return;
  }
  FUN_712f6d58(param_1,*(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x10));
  return;
}


// =========================================================================
// Function: LyivIdoSQCMGDfu_nrkAAFQECwRdrkjJYoHHlt_t
// Entry: 0x71b8f50e | Size: 38 bytes
// =========================================================================

void LyivIdoSQCMGDfu_nrkAAFQECwRdrkjJYoHHlt_t(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x18);
    *param_1 = uVar1;
    return;
  }
  FUN_712f6d58(param_1,*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x14));
  return;
}


// =========================================================================
// Function: WukcbHrGOpxypihYYveHTuoQIFMrrAHwkyAgEqjQ
// Entry: 0x71b8f568 | Size: 22 bytes
// =========================================================================

void WukcbHrGOpxypihYYveHTuoQIFMrrAHwkyAgEqjQ(undefined1 *param_1)

{
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 1) = 0x65757274;
  *param_1 = 8;
  return;
}


// =========================================================================
// Function: voA_mojXAkyPienCOmcVvfrxtaAPMTotHpiSg_GM
// Entry: 0x71b8f598 | Size: 8 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void voA_mojXAkyPienCOmcVvfrxtaAPMTotHpiSg_GM(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: XSVCAvLGqlgIyzjdMcviRydywSyTAVQuHnkZGdBzU
// Entry: 0x71b8f72a | Size: 24 bytes
// =========================================================================

void XSVCAvLGqlgIyzjdMcviRydywSyTAVQuHnkZGdBzU(undefined1 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0x736c6166;
  *param_1 = 10;
  *(undefined2 *)(param_1 + 5) = 0x65;
  return;
}


// =========================================================================
// Function: cfugLwHFLvjdPAzddeCPUnGRsJRbYRktrmySbWEsJ
// Entry: 0x71b8f75c | Size: 8 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void cfugLwHFLvjdPAzddeCPUnGRsJRbYRktrmySbWEsJ(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: tFwmdqRPvJaGMZtlowGgPrUvWaJulngMoowPzde
// Entry: 0x71b8f7dc | Size: 40 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void tFwmdqRPvJaGMZtlowGgPrUvWaJulngMoowPzde(undefined4 *param_1,undefined4 param_2,int param_3)

{
  *(undefined2 *)(param_1 + 2) = 0x2c2e;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &DAT_70b142f4;
  param_1[1] = param_3 + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: sVRoLOfbkflyWcCCxnHklCiPlMlKZYM_NzbW_MPtxij
// Entry: 0x71b8f8a4 | Size: 20 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void sVRoLOfbkflyWcCCxnHklCiPlMlKZYM_NzbW_MPtxij(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: XMePlSJVeXfOVVIBntyayJRsQYJJQlcnBGtLzIReMlZCuhT_oehhdFrwrlkFGcKybWGmxSjOtsWsVvTOvvoLHzWZTEupHepY
// Entry: 0x71b8feb4 | Size: 52 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void XMePlSJVeXfOVVIBntyayJRsQYJJQlcnBGtLzIReMlZCuhT_oehhdFrwrlkFGcKybWGmxSjOtsWsVvTOvvoLHzWZTEupHepY
               (undefined4 *param_1,undefined4 param_2,int param_3)

{
  *(undefined2 *)(param_1 + 2) = 0x2c2e;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &DAT_70b142f4;
  param_1[1] = param_3 + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: VTZyPBikuMLuOrOccDXDwrfqhfUlApURTsyv
// Entry: 0x71b8ff88 | Size: 6 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void VTZyPBikuMLuOrOccDXDwrfqhfUlApURTsyv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: UDQUwCocInCvH_ciiOKZdnVGOYmsSdVRjb_fwtE
// Entry: 0x71b90054 | Size: 40 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void UDQUwCocInCvH_ciiOKZdnVGOYmsSdVRjb_fwtE(undefined4 *param_1,undefined4 param_2,int param_3)

{
  param_1[3] = 0x2c;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &DAT_70b1431c;
  param_1[1] = param_3 + -1;
  param_1[2] = 0x2e;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: OYGydpcRsfpgCMNzQJSLIKnHqMxSdAsZoOfFvWuBoxb
// Entry: 0x71b9011c | Size: 20 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void OYGydpcRsfpgCMNzQJSLIKnHqMxSdAsZoOfFvWuBoxb(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: KxXtVYClLgEyyeDMXOQONnYTtPLCTaSILJHbMqZolwiLmhGdBzSWxeBUEDEesVSPmyICYAoQmEMXqyDUyHnjyjZRHQvhwUYD
// Entry: 0x71b905b8 | Size: 52 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void KxXtVYClLgEyyeDMXOQONnYTtPLCTaSILJHbMqZolwiLmhGdBzSWxeBUEDEesVSPmyICYAoQmEMXqyDUyHnjyjZRHQvhwUYD
               (undefined4 *param_1,undefined4 param_2,int param_3)

{
  param_1[3] = 0x2c;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &DAT_70b1431c;
  param_1[1] = param_3 + -1;
  param_1[2] = 0x2e;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: pAdstG_kXSlFbXsCHKYBHhEfiMNplMmgBPDI
// Entry: 0x71b9068c | Size: 6 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void pAdstG_kXSlFbXsCHKYBHhEfiMNplMmgBPDI(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: uyxYFAPDtTagLLlNpPuSEoVbagzF_LRVfWNNkmribtfwMqMPEOCDLs_
// Entry: 0x71b906f0 | Size: 30 bytes
// =========================================================================

undefined4 uyxYFAPDtTagLLlNpPuSEoVbagzF_LRVfWNNkmribtfwMqMPEOCDLs_(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = *(uint *)(param_1 + 4) & 0x4a;
  if (uVar1 == 0) {
    return 0;
  }
  if (uVar1 != 0x40) {
    if (uVar1 == 8) {
      uVar2 = 0x10;
    }
    else {
      uVar2 = 10;
    }
    return uVar2;
  }
  return 8;
}


// =========================================================================
// Function: fZffbwoPRsJhpVWZghvfruLdStlt_xncbpkLhK_kxLbhIZAVKa
// Entry: 0x71b90726 | Size: 120 bytes
// =========================================================================

void fZffbwoPRsJhpVWZghvfruLdStlt_xncbpkLhK_kxLbhIZAVKa
               (char *param_1,char *param_2,int param_3,uint param_4)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  
  pcVar2 = param_1;
  if ((((int)(param_4 << 0x14) < 0) && ((param_4 & 0x4a) != 8 && (param_4 & 0x4a) != 0x40)) &&
     (param_3 != 0)) {
    pcVar2 = param_1 + 1;
    *param_1 = '+';
  }
  pcVar1 = pcVar2;
  if ((int)(param_4 << 0x16) < 0) {
    pcVar1 = pcVar2 + 1;
    *pcVar2 = '#';
  }
  cVar3 = *param_2;
  while (cVar3 != '\0') {
    param_2 = param_2 + 1;
    *pcVar1 = cVar3;
    pcVar1 = pcVar1 + 1;
    cVar3 = *param_2;
  }
  if ((param_4 & 0x4a) != 0x40) {
    if ((param_4 & 0x4a) != 8) {
      cVar3 = 'u';
      if (param_3 != 0) {
        cVar3 = 'd';
      }
      *pcVar1 = cVar3;
      return;
    }
    cVar3 = 'X';
    if (-1 < (int)(param_4 << 0x11)) {
      cVar3 = 'x';
    }
    *pcVar1 = cVar3;
    return;
  }
  *pcVar1 = 'o';
  return;
}


// =========================================================================
// Function: yojIMXR_IHpexn_zbonjmCDWWruewJTnk_RWLZXoYcIQglkXQaM
// Entry: 0x71b907b6 | Size: 132 bytes
// =========================================================================

bool yojIMXR_IHpexn_zbonjmCDWWruewJTnk_RWLZXoYcIQglkXQaM(char *param_1,char *param_2,uint param_3)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  
  pcVar1 = param_1;
  if ((int)(param_3 << 0x14) < 0) {
    pcVar1 = param_1 + 1;
    *param_1 = '+';
  }
  pcVar2 = pcVar1;
  if ((int)(param_3 << 0x15) < 0) {
    pcVar2 = pcVar1 + 1;
    *pcVar1 = '#';
  }
  uVar4 = param_3 & 0x104;
  pcVar1 = pcVar2;
  if (uVar4 != 0x104) {
    pcVar1 = pcVar2 + 2;
    pcVar2[0] = '.';
    pcVar2[1] = '*';
  }
  cVar3 = *param_2;
  while (cVar3 != '\0') {
    param_2 = param_2 + 1;
    *pcVar1 = cVar3;
    pcVar1 = pcVar1 + 1;
    cVar3 = *param_2;
  }
  if (uVar4 == 0x100) {
    cVar3 = 'E';
    if (-1 < (int)(param_3 << 0x11)) {
      cVar3 = 'e';
    }
  }
  else if (uVar4 == 4) {
    cVar3 = 'F';
    if (-1 < (int)(param_3 << 0x11)) {
      cVar3 = 'f';
    }
  }
  else if (uVar4 == 0x104) {
    cVar3 = 'A';
    if (-1 < (int)(param_3 << 0x11)) {
      cVar3 = 'a';
    }
  }
  else {
    cVar3 = 'G';
    if (-1 < (int)(param_3 << 0x11)) {
      cVar3 = 'g';
    }
  }
  *pcVar1 = cVar3;
  return uVar4 != 0x104;
}


// =========================================================================
// Function: tUNOYDVyqgHobESncXVAeiEtQEYXAZMLpzn_SQgmjqbHkbMJ
// Entry: 0x71b90854 | Size: 30 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

undefined4 tUNOYDVyqgHobESncXVAeiEtQEYXAZMLpzn_SQgmjqbHkbMJ(void)

{
  DataMemoryBarrier(0x1b);
  if ((DAT_71204b6c & 1) != 0) {
    return DAT_71204b68;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: lbamqFqe_rwSCJhAfWioZctjPJARHsrBQvhZaIQvPVrSiyli
// Entry: 0x71b90d6c | Size: 30 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

undefined4 lbamqFqe_rwSCJhAfWioZctjPJARHsrBQvhZaIQvPVrSiyli(void)

{
  DataMemoryBarrier(0x1b);
  if ((DAT_71204b74 & 1) != 0) {
    return DAT_71204b70;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: yHUhcdhFDdxsarNuDbwPdZOQDeGlnBZOnDhHQQVdUjfNWMigz
// Entry: 0x71b9148c | Size: 30 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

undefined4 yHUhcdhFDdxsarNuDbwPdZOQDeGlnBZOnDhHQQVdUjfNWMigz(void)

{
  DataMemoryBarrier(0x1b);
  if ((DAT_71204b7c & 1) != 0) {
    return DAT_71204b78;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: INLEEuGMZGTWDUdq_ziecVxEXMMsijxuefaTpzyBoHLbXT_SQ
// Entry: 0x71b91b40 | Size: 30 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

undefined4 INLEEuGMZGTWDUdq_ziecVxEXMMsijxuefaTpzyBoHLbXT_SQ(void)

{
  DataMemoryBarrier(0x1b);
  if ((DAT_71204b84 & 1) != 0) {
    return DAT_71204b80;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: ziKtwziwmTxCstvREiLHojdWudnnqHJxDFUIMlNQQZZkpIMR
// Entry: 0x71b92528 | Size: 30 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

undefined4 ziKtwziwmTxCstvREiLHojdWudnnqHJxDFUIMlNQQZZkpIMR(void)

{
  DataMemoryBarrier(0x1b);
  if ((DAT_71204b8c & 1) != 0) {
    return DAT_71204b88;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: TGZyXtOfbxeLHBNfkXFfusinHZOeYgpicMTJfNhGyFevuQok
// Entry: 0x71b92818 | Size: 30 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

undefined4 TGZyXtOfbxeLHBNfkXFfusinHZOeYgpicMTJfNhGyFevuQok(void)

{
  DataMemoryBarrier(0x1b);
  if ((DAT_71204b94 & 1) != 0) {
    return DAT_71204b90;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: NSpcJhHFBxTtviyasw_RaFuinTxCXDshtAbIAjSRCRQw
// Entry: 0x71b92bc0 | Size: 28 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

undefined * NSpcJhHFBxTtviyasw_RaFuinTxCXDshtAbIAjSRCRQw(void)

{
  DataMemoryBarrier(0x1b);
  if ((DAT_71204b98 & 1) != 0) {
    return &DAT_70136644;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: qeZfSsqRYgazFayJwiWRBYj_hCnpWYMpbYFAzshiuLAG
// Entry: 0x71b92d4c | Size: 28 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

undefined * qeZfSsqRYgazFayJwiWRBYj_hCnpWYMpbYFAzshiuLAG(void)

{
  DataMemoryBarrier(0x1b);
  if ((DAT_71204ba8 & 1) != 0) {
    return &DAT_71204b9c;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: FcfqAfXWEGLcMcryYfxyUGKzoMKpodEynSkCHAENcUsj
// Entry: 0x71b92fa4 | Size: 28 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

undefined * FcfqAfXWEGLcMcryYfxyUGKzoMKpodEynSkCHAENcUsj(void)

{
  DataMemoryBarrier(0x1b);
  if ((DAT_71204bac & 1) != 0) {
    return &DAT_70136650;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: lYjckWfnEqTgsCtlhlbyRnBeo__CBHj_NtdUEPRxLcWo
// Entry: 0x71b93130 | Size: 28 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

undefined * lYjckWfnEqTgsCtlhlbyRnBeo__CBHj_NtdUEPRxLcWo(void)

{
  DataMemoryBarrier(0x1b);
  if ((DAT_71204bbc & 1) != 0) {
    return &DAT_71204bb0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: stTWvCbIOTgyyzVacjlADxDUrOvQC_rbqtzQYqVWOZBC
// Entry: 0x71b93388 | Size: 28 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

undefined * stTWvCbIOTgyyzVacjlADxDUrOvQC_rbqtzQYqVWOZBC(void)

{
  DataMemoryBarrier(0x1b);
  if ((DAT_71204bcc & 1) != 0) {
    return &DAT_71204bc0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: vfWFphjmeoBJfRvwxrsPOziMClPkL_NZcQk_OVrSBBgD
// Entry: 0x71b935e0 | Size: 28 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

undefined * vfWFphjmeoBJfRvwxrsPOziMClPkL_NZcQk_OVrSBBgD(void)

{
  DataMemoryBarrier(0x1b);
  if ((DAT_71204bdc & 1) != 0) {
    return &DAT_71204bd0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: _dGeNMrzDdZdKxRWNPYlqlmxBzlnpdCawxSxJkTvPcdX
// Entry: 0x71b93838 | Size: 28 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

undefined * _dGeNMrzDdZdKxRWNPYlqlmxBzlnpdCawxSxJkTvPcdX(void)

{
  DataMemoryBarrier(0x1b);
  if ((DAT_71204bec & 1) != 0) {
    return &DAT_71204be0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: g_yvNUBaCniNoShdNkqlyfzTVysoGSbx_aoGtKPtONzT
// Entry: 0x71b93a90 | Size: 28 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

undefined * g_yvNUBaCniNoShdNkqlyfzTVysoGSbx_aoGtKPtONzT(void)

{
  DataMemoryBarrier(0x1b);
  if ((DAT_71204bfc & 1) != 0) {
    return &DAT_71204bf0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: IsDfDeYddbHqRmmBtEbYPqtSLjizZn
// Entry: 0x71b93ce8 | Size: 16 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void IsDfDeYddbHqRmmBtEbYPqtSLjizZn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: ZZRsJcUeHnhWyzfOHVIzGrTIRtYxSqtnKTyUWNjkadQfGSgKLqnPLag_JXWisK_RCHFkJIiXiFQEa_tVSwvyrgw
// Entry: 0x71b93e50 | Size: 26 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void ZZRsJcUeHnhWyzfOHVIzGrTIRtYxSqtnKTyUWNjkadQfGSgKLqnPLag_JXWisK_RCHFkJIiXiFQEa_tVSwvyrgw(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: IDapbTAAapsJtBiQFQsmxyJHrreb
// Entry: 0x71b93f70 | Size: 8 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void IDapbTAAapsJtBiQFQsmxyJHrreb(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: NYQSXFBJaBbrHjwUWLbHgHvc_CXaB_UODQfMPVWGntBFXeAklXcwlPpNaqUxce
// Entry: 0x71b93fe0 | Size: 86 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void NYQSXFBJaBbrHjwUWLbHgHvc_CXaB_UODQfMPVWGntBFXeAklXcwlPpNaqUxce(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: GFXDqGEWoBBJgynBxbiUnqxzIaqNhUfWKcLYwuUDZjZZDnmYaAPqizuukmlwJP
// Entry: 0x71b949e0 | Size: 88 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void GFXDqGEWoBBJgynBxbiUnqxzIaqNhUfWKcLYwuUDZjZZDnmYaAPqizuukmlwJP(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: zaiQMCGpcZprstgjwoTBJAVouBmdc_HqzictOdKNbTfXymSLgEbvxHEw
// Entry: 0x71b96220 | Size: 74 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void zaiQMCGpcZprstgjwoTBJAVouBmdc_HqzictOdKNbTfXymSLgEbvxHEw(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: mHePlcGlfMsar_IQchCPdSXYVBNzRDufHXtuUJtxDTDXGVYtbUfiicZm
// Entry: 0x71b966e0 | Size: 88 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void mHePlcGlfMsar_IQchCPdSXYVBNzRDufHXtuUJtxDTDXGVYtbUfiicZm(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: yjAVnwnhMSapfYUhNjAkVHcFUZTcdztmciDyUvGyE
// Entry: 0x71b9706c | Size: 14 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void yjAVnwnhMSapfYUhNjAkVHcFUZTcdztmciDyUvGyE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: yhFjbjPaNFilwefTzdRxolciFqtKnPeXg
// Entry: 0x71b9762c | Size: 18 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void yhFjbjPaNFilwefTzdRxolciFqtKnPeXg(undefined4 *param_1)

{
  *param_1 = &DAT_70b141fc;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: TWImHDNiXDARGDjpsWXUmfPqflqtndwQacXoSNWxCFkZJhUhgNiEALZTdBPyiOjakbbzHhAbmIkNijykNahGWNbeVaDDFNsYDn
// Entry: 0x71b97730 | Size: 14 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void TWImHDNiXDARGDjpsWXUmfPqflqtndwQacXoSNWxCFkZJhUhgNiEALZTdBPyiOjakbbzHhAbmIkNijykNahGWNbeVaDDFNsYDn
               (void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: SNNTrVPpjLwBPfej_kOjEfYunBBStdXliLptgsLOP
// Entry: 0x71b97cf0 | Size: 14 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void SNNTrVPpjLwBPfej_kOjEfYunBBStdXliLptgsLOP(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: qNbwAHVjVEPydDnPhObRLnzWTbzdIwGtg
// Entry: 0x71b9825c | Size: 18 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void qNbwAHVjVEPydDnPhObRLnzWTbzdIwGtg(undefined4 *param_1)

{
  *param_1 = &DAT_70b14230;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: KEyL_VjXRWsoJZShbVhWzyTJrroIpcGNvsmeAdBtHFBqTRdMkMthwgLdbbNJqJrbRvEAwASnppsBsRoTDNeYQZjlMGxjqChNks
// Entry: 0x71b9830c | Size: 14 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void KEyL_VjXRWsoJZShbVhWzyTJrroIpcGNvsmeAdBtHFBqTRdMkMthwgLdbbNJqJrbRvEAwASnppsBsRoTDNeYQZjlMGxjqChNks
               (void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: FKqEaSZsLOqXzaHBxvwjJUxNrLusKwIvjWsKDPbGSdNoCnzZNWgdbVN
// Entry: 0x71b98878 | Size: 374 bytes
// =========================================================================

undefined4 FKqEaSZsLOqXzaHBxvwjJUxNrLusKwIvjWsKDPbGSdNoCnzZNWgdbVN(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar4 = *(uint *)(param_1 + 0x200);
  iVar6 = *(int *)(param_1 + 0x204);
  cVar1 = *(byte *)(param_1 + 0x1fc) * -0x80;
  if (cVar1 == '\0') {
    uVar4 = (uint)(*(byte *)(param_1 + 0x1fc) >> 1);
  }
  if (uVar4 == 0) {
    uVar2 = 0;
  }
  else {
    uVar5 = 0;
    iVar3 = iVar6;
    if (cVar1 == '\0') {
      iVar3 = param_1 + 0x1fd;
    }
    do {
      uVar2 = uVar5;
      if (*(char *)(iVar3 + uVar5) == '%') break;
      uVar5 = uVar5 + 1;
      uVar2 = uVar4;
    } while (uVar4 != uVar5);
  }
  if (cVar1 == '\0') {
    iVar6 = param_1 + 0x1fd;
  }
  switch(*(undefined1 *)(iVar6 + uVar2 + 1)) {
  case 0x59:
  case 0x79:
    uVar2 = uVar2 + 2;
    if (uVar2 < uVar4) {
      do {
        if (*(char *)(iVar6 + uVar2) == '%') goto LAB_71b98902;
        uVar2 = uVar2 + 1;
      } while (uVar4 != uVar2);
    }
    else {
LAB_71b98902:
      if (uVar2 != uVar4) {
        cVar1 = *(char *)(iVar6 + uVar2 + 1);
        if (cVar1 == 'd') {
          uVar2 = uVar2 + 2;
          if (uVar2 < uVar4) {
            do {
              if (*(char *)(iVar6 + uVar2) == '%') goto LAB_71b989c4;
              uVar2 = uVar2 + 1;
            } while (uVar4 != uVar2);
          }
          else {
LAB_71b989c4:
            if ((uVar2 != uVar4) && (*(char *)(uVar2 + iVar6 + 1) == 'm')) {
              return 4;
            }
          }
        }
        else if (cVar1 == 'm') {
          uVar2 = uVar2 + 2;
          if (uVar2 < uVar4) {
            do {
              if (*(char *)(iVar6 + uVar2) == '%') goto LAB_71b989b4;
              uVar2 = uVar2 + 1;
            } while (uVar4 != uVar2);
          }
          else {
LAB_71b989b4:
            if ((uVar2 != uVar4) && (*(char *)(uVar2 + iVar6 + 1) == 'd')) {
              return 3;
            }
          }
        }
      }
    }
    break;
  case 100:
    uVar2 = uVar2 + 2;
    if (uVar2 < uVar4) {
      do {
        if (*(char *)(iVar6 + uVar2) == '%') goto LAB_71b9897a;
        uVar2 = uVar2 + 1;
      } while (uVar4 != uVar2);
    }
    else {
LAB_71b9897a:
      if ((uVar2 != uVar4) && (*(char *)(iVar6 + uVar2 + 1) == 'm')) {
        uVar2 = uVar2 + 2;
        if (uVar2 < uVar4) {
          do {
            if (*(char *)(iVar6 + uVar2) == '%') goto LAB_71b989e6;
            uVar2 = uVar2 + 1;
          } while (uVar4 != uVar2);
        }
        else {
LAB_71b989e6:
          if ((uVar2 != uVar4) &&
             ((*(char *)(iVar6 + uVar2 + 1) == 'y' || (*(char *)(iVar6 + uVar2 + 1) == 'Y')))) {
            return 1;
          }
        }
      }
    }
    break;
  case 0x6d:
    uVar2 = uVar2 + 2;
    if (uVar2 < uVar4) {
      do {
        if (*(char *)(iVar6 + uVar2) == '%') goto LAB_71b98956;
        uVar2 = uVar2 + 1;
      } while (uVar4 != uVar2);
    }
    else {
LAB_71b98956:
      if ((uVar2 != uVar4) && (*(char *)(iVar6 + uVar2 + 1) == 'd')) {
        uVar2 = uVar2 + 2;
        if (uVar2 < uVar4) {
          do {
            if (*(char *)(iVar6 + uVar2) == '%') goto LAB_71b989d4;
            uVar2 = uVar2 + 1;
          } while (uVar4 != uVar2);
        }
        else {
LAB_71b989d4:
          if (uVar2 != uVar4) {
            if (*(char *)(iVar6 + uVar2 + 1) == 'y') {
              return 2;
            }
            if (*(char *)(iVar6 + uVar2 + 1) == 'Y') {
              return 2;
            }
          }
        }
      }
    }
  }
  return 0;
}


// =========================================================================
// Function: vQYkioBeZqJIlFgUvMZJIkwZYAikztCAIbFHAELeinKQ_oFUnZgSmrM
// Entry: 0x71b98a28 | Size: 404 bytes
// =========================================================================

undefined4 vQYkioBeZqJIlFgUvMZJIkwZYAikztCAIbFHAELeinKQ_oFUnZgSmrM(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  
  uVar3 = *(uint *)(param_1 + 0x200);
  piVar4 = *(int **)(param_1 + 0x204);
  if ((*(byte *)(param_1 + 0x1fc) & 1) == 0) {
    piVar4 = (int *)(param_1 + 0x200);
    uVar3 = (uint)(*(byte *)(param_1 + 0x1fc) >> 1);
  }
  if ((uVar3 == 0) || (*piVar4 == 0x25)) {
    uVar1 = 0;
  }
  else if ((uVar3 == 1) || (piVar4[1] == 0x25)) {
    uVar1 = 1;
  }
  else {
    uVar2 = 2;
    uVar1 = uVar2;
    if (uVar3 != 2) {
      do {
        uVar1 = uVar2;
        if (piVar4[uVar2] == 0x25) break;
        uVar2 = uVar2 + 1;
        uVar1 = uVar3;
      } while (uVar3 != uVar2);
    }
  }
  switch(piVar4[uVar1 + 1]) {
  case 0x59:
  case 0x79:
    uVar1 = uVar1 + 2;
    if (uVar1 < uVar3) {
      do {
        if (piVar4[uVar1] == 0x25) goto LAB_71b98aa6;
        uVar1 = uVar1 + 1;
      } while (uVar3 != uVar1);
    }
    else {
LAB_71b98aa6:
      if (uVar1 != uVar3) {
        if (piVar4[uVar1 + 1] == 100) {
          uVar1 = uVar1 + 2;
          if (uVar1 < uVar3) {
            do {
              if (piVar4[uVar1] == 0x25) goto LAB_71b98b8c;
              uVar1 = uVar1 + 1;
            } while (uVar3 != uVar1);
          }
          else {
LAB_71b98b8c:
            if ((uVar1 != uVar3) && (piVar4[uVar1 + 1] == 0x6d)) {
              return 4;
            }
          }
        }
        else if (piVar4[uVar1 + 1] == 0x6d) {
          uVar1 = uVar1 + 2;
          if (uVar1 < uVar3) {
            do {
              if (piVar4[uVar1] == 0x25) goto LAB_71b98b78;
              uVar1 = uVar1 + 1;
            } while (uVar3 != uVar1);
          }
          else {
LAB_71b98b78:
            if ((uVar1 != uVar3) && (piVar4[uVar1 + 1] == 100)) {
              return 3;
            }
          }
        }
      }
    }
    break;
  case 100:
    uVar1 = uVar1 + 2;
    if (uVar1 < uVar3) {
      do {
        if (piVar4[uVar1] == 0x25) goto LAB_71b98b22;
        uVar1 = uVar1 + 1;
      } while (uVar3 != uVar1);
    }
    else {
LAB_71b98b22:
      if ((uVar1 != uVar3) && (piVar4[uVar1 + 1] == 0x6d)) {
        uVar1 = uVar1 + 2;
        if (uVar1 < uVar3) {
          do {
            if (piVar4[uVar1] == 0x25) goto LAB_71b98bc0;
            uVar1 = uVar1 + 1;
          } while (uVar3 != uVar1);
        }
        else {
LAB_71b98bc0:
          if ((uVar1 != uVar3) && ((piVar4[uVar1 + 1] == 0x79 || (piVar4[uVar1 + 1] == 0x59)))) {
            return 1;
          }
        }
      }
    }
    break;
  case 0x6d:
    uVar1 = uVar1 + 2;
    if (uVar1 < uVar3) {
      do {
        if (piVar4[uVar1] == 0x25) goto LAB_71b98afe;
        uVar1 = uVar1 + 1;
      } while (uVar3 != uVar1);
    }
    else {
LAB_71b98afe:
      if ((uVar1 != uVar3) && (piVar4[uVar1 + 1] == 100)) {
        uVar1 = uVar1 + 2;
        if (uVar1 < uVar3) {
          do {
            if (piVar4[uVar1] == 0x25) goto LAB_71b98ba0;
            uVar1 = uVar1 + 1;
          } while (uVar3 != uVar1);
        }
        else {
LAB_71b98ba0:
          if (uVar1 != uVar3) {
            if (piVar4[uVar1 + 1] == 0x79) {
              return 2;
            }
            if (piVar4[uVar1 + 1] == 0x59) {
              return 2;
            }
          }
        }
      }
    }
  }
  return 0;
}


// =========================================================================
// Function: YzZZXISVpiOTmHpJtkTDHWTYCEAArx
// Entry: 0x71b98bf8 | Size: 16 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void YzZZXISVpiOTmHpJtkTDHWTYCEAArx(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: ryaQlCDgAtLeBvivoIsABbYbdKBqsXIsrWr_ZzNFmSGURMjxiHdzfOXnqueFTKAulQUA_uyVDGuXfKiD_krU_Rb
// Entry: 0x71b98d60 | Size: 26 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void ryaQlCDgAtLeBvivoIsABbYbdKBqsXIsrWr_ZzNFmSGURMjxiHdzfOXnqueFTKAulQUA_uyVDGuXfKiD_krU_Rb(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: gUfcfgOQIMIoQIFVGymugCevRMyO
// Entry: 0x71b98e80 | Size: 54 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void gUfcfgOQIMIoQIFVGymugCevRMyO(int *param_1)

{
  DataMemoryBarrier(0x1b);
  if ((DAT_71204a64 & 1) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*param_1 != DAT_71204a60) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}


// =========================================================================
// Function: ptZjuFZPpaXdvvyjDoCkl_kGfEGDNOUcyaZsuoNoxCDtRrE
// Entry: 0x71b99098 | Size: 20 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void ptZjuFZPpaXdvvyjDoCkl_kGfEGDNOUcyaZsuoNoxCDtRrE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: APrUtusANhzSWBOrYUBFEjnPIkDBgcLYTdOheZkvogacGkr
// Entry: 0x71b99c10 | Size: 20 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void APrUtusANhzSWBOrYUBFEjnPIkDBgcLYTdOheZkvogacGkr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: uwvmVsOJnkXBSNBuffojjmypFJXKDfiSUuLwKkvLIrHDiFr
// Entry: 0x71b9a384 | Size: 20 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void uwvmVsOJnkXBSNBuffojjmypFJXKDfiSUuLwKkvLIrHDiFr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: NJLAVgOwBbmOezDtYri_szkPPxNpmLpguBOOyXYHSAvfNcr
// Entry: 0x71b9b080 | Size: 20 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void NJLAVgOwBbmOezDtYri_szkPPxNpmLpguBOOyXYHSAvfNcr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: jgSgccKkUfnxtlHenoXAigwPdtyteRaAHbWHtX
// Entry: 0x71b9bd08 | Size: 70 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void jgSgccKkUfnxtlHenoXAigwPdtyteRaAHbWHtX(undefined4 *param_1)

{
  *param_1 = &DAT_70b14274;
  DataMemoryBarrier(0x1b);
  if ((DAT_71204a64 & 1) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1[2] != DAT_71204a60) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  thunk_ZXqJfnvcfugNBhbectKcQErwKgYSZROgdkCWh();
  return;
}


