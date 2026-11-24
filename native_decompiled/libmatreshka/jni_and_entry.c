// Function: Java_com_native_libLoader_base @ 0x712f0a60 (size=36)

undefined4 Java_com_native_libLoader_base(void)

{
  return DAT_70b2e804;
}


// Function: Java_com_native_libLoader_execEnd @ 0x712f0aa8 (size=36)

undefined4 Java_com_native_libLoader_execEnd(void)

{
  return DAT_70b2e808;
}


// Function: Java_com_native_libLoader_getSym @ 0x712f0af4 (size=140)

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


// Function: FUN_712f0bc8 @ 0x712f0bc8 (size=784)

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


// Function: FUN_712f1b5c @ 0x712f1b5c (size=180)

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


// Function: FUN_712f4a98 @ 0x712f4a98 (size=80)

void FUN_712f4a98(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_4;
  
  uStack_4 = param_4;
  imp___vsprintf_chk(param_1,0,0x14,param_3,&uStack_4);
  return;
}


// Function: FUN_712f4b10 @ 0x712f4b10 (size=324)

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


// Function: FUN_712f6c1c @ 0x712f6c1c (size=44)

void FUN_712f6c1c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_basic_string_7006ebe5);
}


// Function: FUN_712f6c84 @ 0x712f6c84 (size=52)

/* WARNING: Control flow encountered bad instruction data */

void FUN_712f6c84(undefined4 param_1)

{
  qxUwTPHcvDlxy_nSlUZCGSLpSNjobTKAKBULIxBiM(s_length_error_was_thrown_in__fno__700658be,param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// Function: FUN_712f6cf0 @ 0x712f6cf0 (size=48)

/* WARNING: Control flow encountered bad instruction data */

void FUN_712f6cf0(void)

{
  qxUwTPHcvDlxy_nSlUZCGSLpSNjobTKAKBULIxBiM(s_bad_array_new_length_was_thrown_i_70071f27);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// Function: FUN_712f807c @ 0x712f807c (size=464)

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


// Function: FUN_71368054 @ 0x71368054 (size=1080)

void FUN_71368054(int *param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  
  piVar9 = (int *)*param_2;
  piVar2 = param_2;
  if (piVar9 == (int *)0x0) {
LAB_7136808c:
    piVar9 = (int *)piVar2[1];
    if (piVar9 != (int *)0x0) goto LAB_71368098;
    puVar3 = (undefined4 *)piVar2[2];
    piVar9 = (int *)0x0;
    bVar1 = true;
  }
  else {
    piVar4 = (int *)param_2[1];
    if ((int *)param_2[1] != (int *)0x0) {
      do {
        piVar2 = piVar4;
        piVar4 = (int *)*piVar2;
      } while ((int *)*piVar2 != (int *)0x0);
      goto LAB_7136808c;
    }
LAB_71368098:
    puVar3 = (undefined4 *)piVar2[2];
    bVar1 = false;
    piVar9[2] = (int)puVar3;
  }
  if ((int *)*puVar3 == piVar2) {
    *puVar3 = piVar9;
    if (piVar2 == param_1) {
      piVar4 = (int *)0x0;
      param_1 = piVar9;
      goto LAB_713680e4;
    }
    puVar3 = (undefined4 *)(piVar2[2] + 4);
  }
  else {
    puVar3[1] = piVar9;
    puVar3 = (undefined4 *)piVar2[2];
  }
  piVar4 = (int *)*puVar3;
LAB_713680e4:
  iVar5 = piVar2[3];
  if (piVar2 != param_2) {
    puVar6 = (undefined4 *)param_2[2];
    piVar2[2] = (int)puVar6;
    puVar3 = puVar6 + 1;
    if ((int *)*puVar6 == param_2) {
      puVar3 = puVar6;
    }
    *puVar3 = piVar2;
    iVar7 = *param_2;
    *piVar2 = iVar7;
    *(int **)(iVar7 + 8) = piVar2;
    iVar7 = param_2[1];
    piVar2[1] = iVar7;
    if (iVar7 != 0) {
      *(int **)(iVar7 + 8) = piVar2;
    }
    if (param_1 == param_2) {
      param_1 = piVar2;
    }
    *(char *)(piVar2 + 3) = (char)param_2[3];
  }
  if ((char)iVar5 == '\0' || param_1 == (int *)0x0) {
    return;
  }
  if (!bVar1) {
    *(undefined1 *)(piVar9 + 3) = 1;
    return;
  }
  do {
    puVar3 = (undefined4 *)piVar4[2];
    if ((int *)*puVar3 == piVar4) {
      if ((char)piVar4[3] == '\0') {
        *(undefined1 *)(piVar4 + 3) = 1;
        *(undefined1 *)(puVar3 + 3) = 0;
        piVar2 = (int *)piVar4[2];
        iVar5 = *piVar2;
        iVar7 = *(int *)(iVar5 + 4);
        *piVar2 = iVar7;
        if (iVar7 != 0) {
          *(int **)(iVar7 + 8) = piVar2;
        }
        piVar8 = (int *)piVar2[2];
        *(int **)(iVar5 + 8) = piVar8;
        piVar9 = piVar8 + 1;
        if ((int *)*piVar8 == piVar2) {
          piVar9 = piVar8;
        }
        *piVar9 = iVar5;
        *(int **)(iVar5 + 4) = piVar2;
        piVar2[2] = iVar5;
        if (param_1 == (int *)piVar4[1]) {
          param_1 = piVar4;
        }
        piVar4 = *(int **)piVar4[1];
      }
      iVar5 = *piVar4;
      if ((iVar5 != 0) && (*(char *)(iVar5 + 0xc) == '\0')) {
LAB_71368430:
        *(undefined1 *)(piVar4 + 3) = *(undefined1 *)(piVar4[2] + 0xc);
        *(undefined1 *)(piVar4[2] + 0xc) = 1;
        *(undefined1 *)(*piVar4 + 0xc) = 1;
        piVar2 = (int *)piVar4[2];
        iVar5 = *piVar2;
        iVar7 = *(int *)(iVar5 + 4);
        *piVar2 = iVar7;
        if (iVar7 != 0) {
          *(int **)(iVar7 + 8) = piVar2;
        }
        piVar4 = (int *)piVar2[2];
        *(int **)(iVar5 + 8) = piVar4;
        piVar9 = piVar4 + 1;
        if ((int *)*piVar4 == piVar2) {
          piVar9 = piVar4;
        }
        *piVar9 = iVar5;
        *(int **)(iVar5 + 4) = piVar2;
        piVar2[2] = iVar5;
        return;
      }
      iVar7 = piVar4[1];
      if ((iVar7 != 0) && (*(char *)(iVar7 + 0xc) == '\0')) {
        if (iVar5 != 0) {
          if (*(char *)(iVar5 + 0xc) == '\0') goto LAB_71368430;
          iVar7 = piVar4[1];
        }
        *(undefined1 *)(iVar7 + 0xc) = 1;
        *(undefined1 *)(piVar4 + 3) = 0;
        piVar2 = (int *)piVar4[1];
        iVar5 = *piVar2;
        piVar4[1] = iVar5;
        if (iVar5 != 0) {
          *(int **)(iVar5 + 8) = piVar4;
        }
        puVar6 = (undefined4 *)piVar4[2];
        piVar2[2] = (int)puVar6;
        puVar3 = puVar6 + 1;
        if ((int *)*puVar6 == piVar4) {
          puVar3 = puVar6;
        }
        *puVar3 = piVar2;
        *piVar2 = (int)piVar4;
        piVar4[2] = (int)piVar2;
        piVar4 = piVar2;
        goto LAB_71368430;
      }
      *(undefined1 *)(piVar4 + 3) = 0;
      piVar9 = (int *)piVar4[2];
      piVar2 = piVar9;
      if ((char)piVar9[3] == '\0' || piVar9 == param_1) {
LAB_713682d8:
        *(undefined1 *)(piVar2 + 3) = 1;
        return;
      }
    }
    else {
      if ((char)piVar4[3] == '\0') {
        *(undefined1 *)(piVar4 + 3) = 1;
        *(undefined1 *)(puVar3 + 3) = 0;
        iVar5 = piVar4[2];
        piVar2 = *(int **)(iVar5 + 4);
        iVar7 = *piVar2;
        *(int *)(iVar5 + 4) = iVar7;
        if (iVar7 != 0) {
          *(int *)(iVar7 + 8) = iVar5;
        }
        piVar8 = *(int **)(iVar5 + 8);
        piVar2[2] = (int)piVar8;
        piVar9 = piVar8 + 1;
        if (*piVar8 == iVar5) {
          piVar9 = piVar8;
        }
        *piVar9 = (int)piVar2;
        *piVar2 = iVar5;
        *(int **)(iVar5 + 8) = piVar2;
        if (param_1 == (int *)*piVar4) {
          param_1 = piVar4;
        }
        piVar4 = (int *)((int *)*piVar4)[1];
      }
      iVar5 = *piVar4;
      if ((iVar5 != 0) && (*(char *)(iVar5 + 0xc) == '\0')) {
        iVar7 = piVar4[1];
        if (iVar7 != 0) {
LAB_71368310:
          if (*(char *)(iVar7 + 0xc) == '\0') goto LAB_7136836c;
        }
        *(undefined1 *)(iVar5 + 0xc) = 1;
        *(undefined1 *)(piVar4 + 3) = 0;
        piVar2 = (int *)*piVar4;
        iVar5 = piVar2[1];
        *piVar4 = iVar5;
        if (iVar5 != 0) {
          *(int **)(iVar5 + 8) = piVar4;
        }
        piVar8 = (int *)piVar4[2];
        piVar2[2] = (int)piVar8;
        piVar9 = piVar8 + 1;
        if ((int *)*piVar8 == piVar4) {
          piVar9 = piVar8;
        }
        *piVar9 = (int)piVar2;
        piVar2[1] = (int)piVar4;
        piVar4[2] = (int)piVar2;
        piVar4 = piVar2;
LAB_7136836c:
        *(undefined1 *)(piVar4 + 3) = *(undefined1 *)(piVar4[2] + 0xc);
        *(undefined1 *)(piVar4[2] + 0xc) = 1;
        *(undefined1 *)(piVar4[1] + 0xc) = 1;
        iVar5 = piVar4[2];
        piVar2 = *(int **)(iVar5 + 4);
        iVar7 = *piVar2;
        *(int *)(iVar5 + 4) = iVar7;
        if (iVar7 != 0) {
          *(int *)(iVar7 + 8) = iVar5;
        }
        piVar4 = *(int **)(iVar5 + 8);
        piVar2[2] = (int)piVar4;
        piVar9 = piVar4 + 1;
        if (*piVar4 == iVar5) {
          piVar9 = piVar4;
        }
        *piVar9 = (int)piVar2;
        *piVar2 = iVar5;
        *(int **)(iVar5 + 8) = piVar2;
        return;
      }
      iVar7 = piVar4[1];
      if ((iVar7 != 0) && (*(char *)(iVar7 + 0xc) == '\0')) goto LAB_71368310;
      *(undefined1 *)(piVar4 + 3) = 0;
      piVar9 = (int *)piVar4[2];
      piVar2 = param_1;
      if ((piVar9 == param_1) || (piVar2 = piVar9, (char)piVar9[3] == '\0')) goto LAB_713682d8;
    }
    puVar6 = (undefined4 *)piVar9[2];
    puVar3 = puVar6 + 1;
    if ((int *)*puVar6 != piVar9) {
      puVar3 = puVar6;
    }
    piVar4 = (int *)*puVar3;
  } while( true );
}


// Function: Java_com_native_RenderQueue_Lock @ 0x7139d798 (size=20)

void Java_com_native_RenderQueue_Lock(void)

{
  if (DAT_70b46664 == 0) {
    return;
  }
  imp_pthread_mutex_lock();
  return;
}


// Function: Java_com_native_RenderQueue_Unlock @ 0x7139d800 (size=20)

void Java_com_native_RenderQueue_Unlock(void)

{
  if (DAT_70b46664 == 0) {
    return;
  }
  imp_pthread_mutex_unlock();
  return;
}


// Function: imp_pthread_mutex_lock @ 0x714b95f8 (size=4)

void imp_pthread_mutex_lock(void)

{
  return;
}


// Function: imp_pthread_mutex_unlock @ 0x714b9630 (size=4)

void imp_pthread_mutex_unlock(void)

{
  return;
}


// Function: FUN_714f2b1c @ 0x714f2b1c (size=20)

void FUN_714f2b1c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// Function: Java_com_native_Main_livePreviewSurface @ 0x715ab9d8 (size=748)

void Java_com_native_Main_livePreviewSurface
               (undefined4 param_1,undefined4 param_2,uint param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  if (param_5 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = imp_ANativeWindow_fromSurface();
  }
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_711a3ae0);
  puVar7 = &DAT_711a3ae8;
  puVar5 = DAT_711a3ae8;
  do {
    puVar6 = puVar7;
    if (puVar5 == (undefined4 *)0x0) {
LAB_715aba74:
      puVar3 = (undefined4 *)thunk_MwhHq(0x20);
      puVar3[4] = param_3;
      puVar3[5] = param_4;
      puVar3[6] = 0;
      puVar3[7] = 0;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = puVar6;
      *puVar7 = puVar3;
      puVar5 = puVar3;
      if ((undefined4 *)*DAT_711a3ae4 != (undefined4 *)0x0) {
        puVar5 = (undefined4 *)*puVar7;
        DAT_711a3ae4 = (undefined4 *)*DAT_711a3ae4;
      }
      FUN_712f807c(DAT_711a3ae8,puVar5);
      DAT_711a3aec = DAT_711a3aec + 1;
LAB_715abad8:
      if (puVar3[6] != 0) {
        imp_ANativeWindow_release();
      }
      DAT_711a3b78 = DAT_711a3b78 + 1;
      puVar3[6] = iVar1;
      puVar3[7] = DAT_711a3b78;
      if (iVar1 == 0) {
        if (DAT_711a3ae8 != (undefined4 *)0x0) {
          puVar7 = &DAT_711a3ae8;
          puVar5 = DAT_711a3ae8;
          do {
            iVar1 = puVar5[5];
            puVar6 = puVar5;
            if ((int)(iVar1 - (param_4 + (uint)((uint)puVar5[4] < param_3))) < 0 !=
                (SBORROW4(iVar1,param_4) !=
                SBORROW4(iVar1 - param_4,(uint)((uint)puVar5[4] < param_3)))) {
              puVar5 = puVar5 + 1;
              puVar6 = puVar7;
            }
            puVar7 = puVar6;
            puVar5 = (undefined4 *)*puVar5;
          } while (puVar5 != (undefined4 *)0x0);
          if (((undefined4 **)puVar7 != &DAT_711a3ae8) &&
             (iVar1 = puVar7[5],
             (int)(param_4 - (iVar1 + (uint)(param_3 < (uint)puVar7[4]))) < 0 ==
             (SBORROW4(param_4,iVar1) != SBORROW4(param_4 - iVar1,(uint)(param_3 < (uint)puVar7[4]))
             ))) {
            puVar5 = puVar7;
            puVar6 = (undefined4 *)puVar7[1];
            if ((undefined4 *)puVar7[1] == (undefined4 *)0x0) {
              do {
                puVar3 = (undefined4 *)puVar5[2];
                bVar8 = (undefined4 *)*puVar3 != puVar5;
                puVar5 = puVar3;
              } while (bVar8);
            }
            else {
              do {
                puVar3 = puVar6;
                puVar6 = (undefined4 *)*puVar3;
              } while ((undefined4 *)*puVar3 != (undefined4 *)0x0);
            }
            if (DAT_711a3ae4 == puVar7) {
              DAT_711a3ae4 = puVar3;
            }
            DAT_711a3aec = DAT_711a3aec + -1;
            FUN_71368054(DAT_711a3ae8,puVar7);
            thunk_qNQrlu(puVar7);
          }
        }
        if (DAT_711a3b6c != (undefined4 *)0x0) {
          puVar7 = &DAT_711a3b6c;
          puVar5 = DAT_711a3b6c;
          do {
            iVar1 = puVar5[5];
            puVar6 = puVar5;
            if ((int)(iVar1 - (param_4 + (uint)((uint)puVar5[4] < param_3))) < 0 !=
                (SBORROW4(iVar1,param_4) !=
                SBORROW4(iVar1 - param_4,(uint)((uint)puVar5[4] < param_3)))) {
              puVar5 = puVar5 + 1;
              puVar6 = puVar7;
            }
            puVar7 = puVar6;
            puVar5 = (undefined4 *)*puVar5;
          } while (puVar5 != (undefined4 *)0x0);
          if (((undefined4 **)puVar7 != &DAT_711a3b6c) &&
             (iVar1 = puVar7[5],
             (int)(param_4 - (iVar1 + (uint)(param_3 < (uint)puVar7[4]))) < 0 ==
             (SBORROW4(param_4,iVar1) != SBORROW4(param_4 - iVar1,(uint)(param_3 < (uint)puVar7[4]))
             ))) {
            puVar5 = puVar7;
            puVar6 = (undefined4 *)puVar7[1];
            if ((undefined4 *)puVar7[1] == (undefined4 *)0x0) {
              do {
                puVar3 = (undefined4 *)puVar5[2];
                bVar8 = (undefined4 *)*puVar3 != puVar5;
                puVar5 = puVar3;
              } while (bVar8);
            }
            else {
              do {
                puVar3 = puVar6;
                puVar6 = (undefined4 *)*puVar3;
              } while ((undefined4 *)*puVar3 != (undefined4 *)0x0);
            }
            if (DAT_711a3b68 == puVar7) {
              DAT_711a3b68 = puVar3;
            }
            DAT_711a3b70 = DAT_711a3b70 + -1;
            FUN_71368054(DAT_711a3b6c,puVar7);
            thunk_qNQrlu(puVar7);
          }
        }
      }
      thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_711a3ae0);
      return;
    }
    while( true ) {
      puVar3 = puVar5;
      uVar2 = puVar3[4];
      iVar4 = puVar3[5];
      if ((int)(param_4 - (iVar4 + (uint)(param_3 < uVar2))) < 0 !=
          (SBORROW4(param_4,iVar4) != SBORROW4(param_4 - iVar4,(uint)(param_3 < uVar2)))) break;
      if ((int)(iVar4 - (param_4 + (uint)(uVar2 < param_3))) < 0 ==
          (SBORROW4(iVar4,param_4) != SBORROW4(iVar4 - param_4,(uint)(uVar2 < param_3))))
      goto LAB_715abad8;
      puVar5 = (undefined4 *)puVar3[1];
      if ((undefined4 *)puVar3[1] == (undefined4 *)0x0) {
        puVar7 = puVar3 + 1;
        puVar6 = puVar3;
        goto LAB_715aba74;
      }
    }
    puVar5 = (undefined4 *)*puVar3;
    puVar7 = puVar3;
  } while( true );
}


// Function: FUN_7165b750 @ 0x7165b750 (size=1412)

/* WARNING: Removing unreachable block (ram,0x7165b860) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7165b750(void)

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
  uStack_40 = 0x30;
  uStack_48 = 0xd5;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xabd52f >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x46;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xabd52f;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccabfa) >> 2 ^ 0xacad81;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x46;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(code **)((auStack_50[0] ^ 0xccfff7) + DAT_7120187c) = FUN_7165b148;
  *DAT_7120188c = ext_alBufferData;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = ext_alDeleteBuffers;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = ext_alDeleteSources;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = ext_alDistanceModel;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = ext_alGenBuffers;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = ext_alGetSourcei;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = ext_alListener3f;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = ext_alListenerf;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = ext_alListenerfv;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = ext_alSource3f;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = ext_alSourcePause;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = ext_alSourcePlay;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = ext_alSourceQueueBuffers;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = ext_alSourceStop;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = ext_alSourceUnqueueBuffers;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = ext_alSourcef;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = ext_alSourcei;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = ext_alcCloseDevice;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = ext_alcCreateContext;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = ext_alcDestroyContext;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = ext_alcMakeContextCurrent;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = ext_alcOpenDevice;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = ext_alGenSources;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  if (_ext___stack_chk_guard == iVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// Function: FUN_7165c8dc @ 0x7165c8dc (size=876)

void FUN_7165c8dc(void)

{
  undefined4 *puVar1;
  
  *DAT_7120188c = FUN_7165c104;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8000 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7165c5dc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7165cfc0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &DAT_7165cff8;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &DAT_7165d030;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7165c6e0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7131260c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_71312774;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7131271c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71312678;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_713126fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_71312650;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71311af8;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7130f06c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71314290;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7131520c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71315588;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_713156a8;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_71315768;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_713157c0;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8004 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7165c738;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// Function: FUN_7165f958 @ 0x7165f958 (size=372)

void FUN_7165f958(void)

{
  undefined4 *puVar1;
  
  DAT_700c8008 = *DAT_71201884 + DAT_71201880 | 1;
  DAT_71201884 = DAT_71201884 + 1;
  *DAT_7120188c = FUN_7165d068;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7165d684;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c800c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7165d748;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7165f198;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7165f060;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7165efe8;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7165f11c;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// Function: FUN_71662840 @ 0x71662840 (size=1796)

/* WARNING: Removing unreachable block (ram,0x71662d10) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71662840(void)

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
  *DAT_7120188c = FUN_716627fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716627fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716627fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716627fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716627fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716627fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716627fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716627fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716627fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716627fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716627fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716627fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716627fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716627fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716627fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716627fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716627fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716627fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716627fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716627fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716627fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716627fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716627fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716627fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716627fc;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8070 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71661f40;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7165fcec;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71660580;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71660e14;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716616a8;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  uStack_3c = 0;
  uStack_44 = 0;
  uStack_34 = 0x26d5d038;
  puStack_38 = &LAB_49abac16;
  uStack_40 = 0x18a;
  uStack_48 = 0x1bb;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xab9605 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0xa0;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xab9605;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccad32) >> 2 ^ 0xacae67;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0xa0;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  uVar3 = 0x18a;
  do {
    iVar4 = (int)(char)bStack_51;
    bStack_51 = bStack_51 + 1;
    uVar3 = uVar3 ^ (iVar4 + 0xccaaff) - uVar3 ^ 0x1bb;
  } while (bStack_51 < 8);
  *(undefined4 **)((auStack_50[0] ^ 0xccfe99) + DAT_7120187c) = &DAT_70b42064;
  if (_ext___stack_chk_guard == iVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail(iVar2,_ext___stack_chk_guard,uVar3,0);
}


// Function: FUN_71663220 @ 0x71663220 (size=272964)
// Decompile failed: Exception while decompiling 71663220: process: timeout


// Function: FUN_716ab29c @ 0x716ab29c (size=576)

void FUN_716ab29c(void)

{
  undefined4 *puVar1;
  
  *DAT_7120188c = &LAB_716aa01c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716aa088;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716a9fac;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8074 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &DAT_716aa0f4;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_711f29bc = *(undefined4 *)(DAT_7120187c + 0x66d6a4);
  *(undefined4 *)(DAT_7120187c + 0x66d6a4) = FUN_716aa63c;
  DAT_711f29c0 = *(undefined4 *)(DAT_7120187c + 0x66da4c);
  *(code **)(DAT_7120187c + 0x66da4c) = FUN_716aa63c;
  DAT_711f29c4 = *(undefined4 *)(DAT_7120187c + 0x66d81c);
  *(code **)(DAT_7120187c + 0x66d81c) = FUN_716aa63c;
  DAT_711f29c8 = *(undefined4 *)(DAT_7120187c + 0x66ddb0);
  *(code **)(DAT_7120187c + 0x66ddb0) = FUN_716aa63c;
  DAT_711f29cc = *(undefined4 *)(DAT_7120187c + 0x66db60);
  *(undefined4 *)(DAT_7120187c + 0x66db60) = FUN_716aa63c;
  DAT_711f29d0 = *(undefined4 *)(DAT_7120187c + 0x66d934);
  *(code **)(DAT_7120187c + 0x66d934) = FUN_716aa63c;
  DAT_711f29d4 = *(undefined4 *)(DAT_7120187c + 0x66dc88);
  *(code **)(DAT_7120187c + 0x66dc88) = FUN_716aa63c;
  DAT_711f29d8 = *(undefined4 *)(DAT_7120187c + 0x66ded8);
  *(code **)(DAT_7120187c + 0x66ded8) = FUN_716aa63c;
  DAT_711f29dc = *(undefined4 *)(DAT_7120187c + 0x66e128);
  *(undefined4 *)(DAT_7120187c + 0x66e128) = FUN_716aa63c;
  DAT_711f29e0 = *(undefined4 *)(DAT_7120187c + 0x66e000);
  *(code **)(DAT_7120187c + 0x66e000) = FUN_716aa63c;
  *DAT_7120188c = FUN_716ab224;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// Function: FUN_716ab9c8 @ 0x716ab9c8 (size=112)

void FUN_716ab9c8(void)

{
  DAT_700c8078 = *DAT_71201884 + DAT_71201880 | 1;
  DAT_71201884 = DAT_71201884 + 1;
  *DAT_7120188c = FUN_716ab818;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// Function: FUN_716b9124 @ 0x716b9124 (size=764)

void FUN_716b9124(void)

{
  undefined4 *puVar1;
  
  DAT_700c8084 = *DAT_71201884 + DAT_71201880 | 1;
  DAT_71201884 = DAT_71201884 + 1;
  *DAT_7120188c = FUN_716b73b4;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716b7df0;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8088 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716b7f18;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c808c = *DAT_71201884 + DAT_71201880;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &DAT_716b81b8;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8090 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716b8228;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8094 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716b8828;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716b9738;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716b9850;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716b99d0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716b9aa8;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8098 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716b8c58;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716b9b7c;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c809c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716b8d08;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// Function: FUN_716bda84 @ 0x716bda84 (size=1336)

void FUN_716bda84(void)

{
  undefined4 *puVar1;
  
  *DAT_7120188c = FUN_716bd9f4;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8110 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ba6ec;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8114 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716ba784;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716ba88c;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8118 = *DAT_71201884 + DAT_71201880;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716baa1c;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c811c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716baba0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716bac10;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8120 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716bacfc;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8124 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716bafc4;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716bb7d4;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716bba50;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8128 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716bb238;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c812c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716bcd24;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716bcca0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716bbc34;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716bbbec;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716bcec8;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8108 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ba374;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c810c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ba530;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8100 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ba090;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8104 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ba170;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8130 = *DAT_71201884 + DAT_71201880;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &DAT_716bd930;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_713d4414;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// Function: FUN_716cbfd0 @ 0x716cbfd0 (size=62972)

/* WARNING: Removing unreachable block (ram,0x716da990) */
/* WARNING: Removing unreachable block (ram,0x716d8378) */
/* WARNING: Removing unreachable block (ram,0x716d7800) */
/* WARNING: Removing unreachable block (ram,0x716d6c8c) */
/* WARNING: Removing unreachable block (ram,0x716d6118) */
/* WARNING: Removing unreachable block (ram,0x716d55a4) */
/* WARNING: Removing unreachable block (ram,0x716d4a30) */
/* WARNING: Removing unreachable block (ram,0x716d3ebc) */
/* WARNING: Removing unreachable block (ram,0x716d3348) */
/* WARNING: Removing unreachable block (ram,0x716d27d4) */
/* WARNING: Removing unreachable block (ram,0x716d1c60) */
/* WARNING: Removing unreachable block (ram,0x716d10ec) */
/* WARNING: Removing unreachable block (ram,0x716cfc14) */
/* WARNING: Removing unreachable block (ram,0x716cf6ac) */
/* WARNING: Removing unreachable block (ram,0x716cf0b4) */
/* WARNING: Removing unreachable block (ram,0x716ceb30) */
/* WARNING: Removing unreachable block (ram,0x716ce50c) */
/* WARNING: Removing unreachable block (ram,0x716cdd60) */
/* WARNING: Removing unreachable block (ram,0x716ccfc8) */
/* WARNING: Removing unreachable block (ram,0x716cc53c) */
/* WARNING: Removing unreachable block (ram,0x716dac1c) */
/* WARNING: Removing unreachable block (ram,0x716dab80) */
/* WARNING: Removing unreachable block (ram,0x716da770) */
/* WARNING: Removing unreachable block (ram,0x716da3c0) */
/* WARNING: Removing unreachable block (ram,0x716d9078) */
/* WARNING: Removing unreachable block (ram,0x716d8c7c) */
/* WARNING: Removing unreachable block (ram,0x716d88ec) */
/* WARNING: Removing unreachable block (ram,0x716d8520) */
/* WARNING: Removing unreachable block (ram,0x716d8104) */
/* WARNING: Removing unreachable block (ram,0x716d7d74) */
/* WARNING: Removing unreachable block (ram,0x716d79a8) */
/* WARNING: Removing unreachable block (ram,0x716d7590) */
/* WARNING: Removing unreachable block (ram,0x716d7200) */
/* WARNING: Removing unreachable block (ram,0x716d6e34) */
/* WARNING: Removing unreachable block (ram,0x716d6a1c) */
/* WARNING: Removing unreachable block (ram,0x716d668c) */
/* WARNING: Removing unreachable block (ram,0x716d62c0) */
/* WARNING: Removing unreachable block (ram,0x716d5ea8) */
/* WARNING: Removing unreachable block (ram,0x716d5b18) */
/* WARNING: Removing unreachable block (ram,0x716d574c) */
/* WARNING: Removing unreachable block (ram,0x716d5334) */
/* WARNING: Removing unreachable block (ram,0x716d4fa4) */
/* WARNING: Removing unreachable block (ram,0x716d4bd8) */
/* WARNING: Removing unreachable block (ram,0x716d47c0) */
/* WARNING: Removing unreachable block (ram,0x716d4430) */
/* WARNING: Removing unreachable block (ram,0x716d4064) */
/* WARNING: Removing unreachable block (ram,0x716d3c4c) */
/* WARNING: Removing unreachable block (ram,0x716d38bc) */
/* WARNING: Removing unreachable block (ram,0x716d34f0) */
/* WARNING: Removing unreachable block (ram,0x716d30d8) */
/* WARNING: Removing unreachable block (ram,0x716d2d48) */
/* WARNING: Removing unreachable block (ram,0x716d297c) */
/* WARNING: Removing unreachable block (ram,0x716d2564) */
/* WARNING: Removing unreachable block (ram,0x716d21d4) */
/* WARNING: Removing unreachable block (ram,0x716d1e08) */
/* WARNING: Removing unreachable block (ram,0x716d19f0) */
/* WARNING: Removing unreachable block (ram,0x716d1660) */
/* WARNING: Removing unreachable block (ram,0x716d1294) */
/* WARNING: Removing unreachable block (ram,0x716d0e80) */
/* WARNING: Removing unreachable block (ram,0x716d0af0) */
/* WARNING: Removing unreachable block (ram,0x716cffec) */
/* WARNING: Removing unreachable block (ram,0x716cfbd8) */
/* WARNING: Removing unreachable block (ram,0x716cf854) */
/* WARNING: Removing unreachable block (ram,0x716cf480) */
/* WARNING: Removing unreachable block (ram,0x716cf070) */
/* WARNING: Removing unreachable block (ram,0x716cecdc) */
/* WARNING: Removing unreachable block (ram,0x716ce8f8) */
/* WARNING: Removing unreachable block (ram,0x716ce4c0) */
/* WARNING: Removing unreachable block (ram,0x716ce118) */
/* WARNING: Removing unreachable block (ram,0x716cdd1c) */
/* WARNING: Removing unreachable block (ram,0x716cd924) */
/* WARNING: Removing unreachable block (ram,0x716cd57c) */
/* WARNING: Removing unreachable block (ram,0x716cd100) */
/* WARNING: Removing unreachable block (ram,0x716ccba4) */
/* WARNING: Removing unreachable block (ram,0x716cc76c) */
/* WARNING: Removing unreachable block (ram,0x716cc99c) */
/* WARNING: Removing unreachable block (ram,0x716cce18) */
/* WARNING: Removing unreachable block (ram,0x716cd344) */
/* WARNING: Removing unreachable block (ram,0x716cd754) */
/* WARNING: Removing unreachable block (ram,0x716cdb28) */
/* WARNING: Removing unreachable block (ram,0x716cdf2c) */
/* WARNING: Removing unreachable block (ram,0x716ce2f8) */
/* WARNING: Removing unreachable block (ram,0x716ce704) */
/* WARNING: Removing unreachable block (ram,0x716ceaec) */
/* WARNING: Removing unreachable block (ram,0x716ceeb0) */
/* WARNING: Removing unreachable block (ram,0x716cf2a0) */
/* WARNING: Removing unreachable block (ram,0x716cf670) */
/* WARNING: Removing unreachable block (ram,0x716cfa28) */
/* WARNING: Removing unreachable block (ram,0x716cfe04) */
/* WARNING: Removing unreachable block (ram,0x716d0924) */
/* WARNING: Removing unreachable block (ram,0x716d0cc8) */
/* WARNING: Removing unreachable block (ram,0x716d10a0) */
/* WARNING: Removing unreachable block (ram,0x716d1484) */
/* WARNING: Removing unreachable block (ram,0x716d1838) */
/* WARNING: Removing unreachable block (ram,0x716d1c10) */
/* WARNING: Removing unreachable block (ram,0x716d1ff8) */
/* WARNING: Removing unreachable block (ram,0x716d23ac) */
/* WARNING: Removing unreachable block (ram,0x716d2784) */
/* WARNING: Removing unreachable block (ram,0x716d2b6c) */
/* WARNING: Removing unreachable block (ram,0x716d2f20) */
/* WARNING: Removing unreachable block (ram,0x716d32f8) */
/* WARNING: Removing unreachable block (ram,0x716d36e0) */
/* WARNING: Removing unreachable block (ram,0x716d3a94) */
/* WARNING: Removing unreachable block (ram,0x716d3e6c) */
/* WARNING: Removing unreachable block (ram,0x716d4254) */
/* WARNING: Removing unreachable block (ram,0x716d4608) */
/* WARNING: Removing unreachable block (ram,0x716d49e0) */
/* WARNING: Removing unreachable block (ram,0x716d4dc8) */
/* WARNING: Removing unreachable block (ram,0x716d517c) */
/* WARNING: Removing unreachable block (ram,0x716d5554) */
/* WARNING: Removing unreachable block (ram,0x716d593c) */
/* WARNING: Removing unreachable block (ram,0x716d5cf0) */
/* WARNING: Removing unreachable block (ram,0x716d60c8) */
/* WARNING: Removing unreachable block (ram,0x716d64b0) */
/* WARNING: Removing unreachable block (ram,0x716d6864) */
/* WARNING: Removing unreachable block (ram,0x716d6c3c) */
/* WARNING: Removing unreachable block (ram,0x716d7024) */
/* WARNING: Removing unreachable block (ram,0x716d73d8) */
/* WARNING: Removing unreachable block (ram,0x716d77b0) */
/* WARNING: Removing unreachable block (ram,0x716d7b98) */
/* WARNING: Removing unreachable block (ram,0x716d7f4c) */
/* WARNING: Removing unreachable block (ram,0x716d8324) */
/* WARNING: Removing unreachable block (ram,0x716d8710) */
/* WARNING: Removing unreachable block (ram,0x716d8ac4) */
/* WARNING: Removing unreachable block (ram,0x716d8e98) */
/* WARNING: Removing unreachable block (ram,0x716da0bc) */
/* WARNING: Removing unreachable block (ram,0x716da594) */
/* WARNING: Removing unreachable block (ram,0x716da928) */
/* WARNING: Removing unreachable block (ram,0x716dadcc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_716cbfd0(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
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
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint *puVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  bool bVar53;
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
  
  iStack_28 = _ext___stack_chk_guard;
  DAT_700c8184 = *DAT_71201884 + DAT_71201880 | 1;
  DAT_71201884 = DAT_71201884 + 1;
  *DAT_7120188c = FUN_716cb208;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8168 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716bea04;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c816c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &DAT_716bfbf0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716be50c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716be50c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716be50c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716be548;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8154 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716be660;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8158 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716be6c0;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c815c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716be808;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8160 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716be8e0;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8164 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716be9ac;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_714b8818;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716be7b4;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_711f3000 = *DAT_71201884 + DAT_71201880;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &DAT_716dd25c;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_711f3004 = *DAT_71201884 + DAT_71201880;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &DAT_716dd278;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_711f3008 = *DAT_71201884 + DAT_71201880;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &DAT_716dd294;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  imp___aeabi_memset(DAT_70b88a54,100,1);
  *DAT_70b88a58 = 100;
  DAT_70135cd4 = (uint *)0x0;
  DAT_70135cd0 = (uint *)0xffffffff;
  uStack_3c = 0;
  uStack_44 = 0;
  uStack_34 = 0x26d5d038;
  puStack_38 = &LAB_49abac16;
  uStack_40 = 0x418;
  uStack_48 = 0x374;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xe4dcaa >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x2e;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xe4dcaa;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac63) >> 2 ^ 0xacb020;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x2e;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  uStack_40 = 0x496562e8;
  uStack_3c = 0x26d5d038;
  if ((auStack_50[0] ^ 0xccfc56) + DAT_7120187c != -1) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0xe4dcaa >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x2f;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0xe4dcaa;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac6c) >> 2 ^ 0xacb020;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x2f;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd0 = (uint *)((auStack_50[0] ^ 0xccfc56) + DAT_7120187c);
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xe4dcaa >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x30;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xe4dcaa;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac6d) >> 2 ^ 0xacb020;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x30;
    uVar35 = auStack_50[0];
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xe4dcbc >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x2d;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xe4dcbc;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac62) >> 2 ^ 0xacb020;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x2d;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(uint *)((uVar35 ^ 0xccfc56) + DAT_7120187c) =
       ((auStack_50[0] ^ 0xff3303a9) - DAT_7120187c) + 0x711f2e59;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xe4dcaa >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x31;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xe4dcaa;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac6e) >> 2 ^ 0xacb020;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x31;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if (DAT_70135cd4 < (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc56))) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0xe4dcaa >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x32;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0xe4dcaa;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac6f) >> 2 ^ 0xacb020;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x32;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd4 = (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc56));
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xe4ed6f >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x35;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xe4ed6f;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac6b) >> 2 ^ 0xacb021;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x35;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if ((uint *)((auStack_50[0] ^ 0xccfc57) + DAT_7120187c) < DAT_70135cd0) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0xe4ed6f >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x36;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0xe4ed6f;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac6a) >> 2 ^ 0xacb021;
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
    DAT_70135cd0 = (uint *)((auStack_50[0] ^ 0xccfc57) + DAT_7120187c);
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xe4ed6f >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x37;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xe4ed6f;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac55) >> 2 ^ 0xacb021;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x37;
    uVar35 = auStack_50[0];
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xe4ed65 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x34;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xe4ed65;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac68) >> 2 ^ 0xacb021;
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
  *(uint *)((uVar35 ^ 0xccfc57) + DAT_7120187c) =
       ((auStack_50[0] ^ 0xff3303a8) - DAT_7120187c) + 0x711f2e59;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xe4ed6f >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x38;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xe4ed6f;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac54) >> 2 ^ 0xacb021;
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
  if (DAT_70135cd4 < (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc57))) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0xe4ed6f >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x39;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0xe4ed6f;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac57) >> 2 ^ 0xacb021;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x39;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd4 = (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc57));
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xe4eca0 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x3c;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xe4eca0;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac57) >> 2 ^ 0xacb01e;
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
  if ((uint *)((auStack_50[0] ^ 0xccfc50) + DAT_7120187c) < DAT_70135cd0) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0xe4eca0 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x3d;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0xe4eca0;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac54) >> 2 ^ 0xacb01e;
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
    DAT_70135cd0 = (uint *)((auStack_50[0] ^ 0xccfc50) + DAT_7120187c);
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xe4eca0 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x3e;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xe4eca0;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac55) >> 2 ^ 0xacb01e;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x3e;
    uVar35 = auStack_50[0];
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xe4f10a >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x3b;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xe4f10a;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac56) >> 2 ^ 0xacb01e;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x3b;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(uint *)((uVar35 ^ 0xccfc50) + DAT_7120187c) =
       ((auStack_50[0] ^ 0xff3303af) - DAT_7120187c) + 0x711f2e59;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xe4eca0 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x3f;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xe4eca0;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac5a) >> 2 ^ 0xacb01e;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x3f;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if (DAT_70135cd4 < (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc50))) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0xe4eca0 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x40;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0xe4eca0;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac5b) >> 2 ^ 0xacb01e;
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
    DAT_70135cd4 = (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc50));
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xe4f0b9 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x43;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xe4f0b9;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac5f) >> 2 ^ 0xacb01f;
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
  if ((uint *)((auStack_50[0] ^ 0xccfc51) + DAT_7120187c) < DAT_70135cd0) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0xe4f0b9 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x44;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0xe4f0b9;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac5e) >> 2 ^ 0xacb01f;
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
    DAT_70135cd0 = (uint *)((auStack_50[0] ^ 0xccfc51) + DAT_7120187c);
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xe4f0b9 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x45;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xe4f0b9;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac5d) >> 2 ^ 0xacb01f;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x45;
    uVar35 = auStack_50[0];
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xe4f631 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x42;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xe4f631;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac58) >> 2 ^ 0xacb01f;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x42;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(uint *)((uVar35 ^ 0xccfc51) + DAT_7120187c) =
       ((auStack_50[0] ^ 0xff3303ae) - DAT_7120187c) + 0x711f2e59;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xe4f0b9 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x46;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xe4f0b9;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac5c) >> 2 ^ 0xacb01f;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x46;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if (DAT_70135cd4 < (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc51))) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0xe4f0b9 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x47;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0xe4f0b9;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac43) >> 2 ^ 0xacb01f;
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
    DAT_70135cd4 = (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc51));
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xe4fa02 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x4a;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xe4fa02;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac43) >> 2 ^ 0xacb01c;
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
  if ((uint *)((auStack_50[0] ^ 0xccfc52) + DAT_7120187c) < DAT_70135cd0) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0xe4fa02 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x4b;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0xe4fa02;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac44) >> 2 ^ 0xacb01c;
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
    DAT_70135cd0 = (uint *)((auStack_50[0] ^ 0xccfc52) + DAT_7120187c);
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xe4fa02 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x4c;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xe4fa02;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac45) >> 2 ^ 0xacb01c;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x4c;
    uVar35 = auStack_50[0];
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xe4f9ba >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x49;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xe4f9ba;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac42) >> 2 ^ 0xacb01c;
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
  *(uint *)((uVar35 ^ 0xccfc52) + DAT_7120187c) =
       ((auStack_50[0] ^ 0xff3303ad) - DAT_7120187c) + 0x711f2e59;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xe4fa02 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x4d;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xe4fa02;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac46) >> 2 ^ 0xacb01c;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x4d;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if (DAT_70135cd4 < (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc52))) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0xe4fa02 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x4e;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0xe4fa02;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac47) >> 2 ^ 0xacb01c;
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
    DAT_70135cd4 = (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc52));
  }
  if ((DAT_70135cd0 != (uint *)0xffffffff) && (DAT_70135cd0 < DAT_70135cd4)) {
    iVar19 = 0;
    puVar13 = DAT_70135cd4;
LAB_716d01cc:
    puVar44 = (uint *)(&DAT_70125c7c)[iVar19 * 4];
    uVar35 = (&DAT_70125c80)[iVar19 * 4];
    if ((DAT_70135cd0 <= (uint *)(uVar35 + (int)puVar44)) && (puVar44 <= puVar13)) {
      uVar14 = 0x56d677d6;
      iVar20 = 0x27d4eb7f;
      if (0x1f < uVar35) {
        uStack_58 = 0x61c8869e;
        uStack_5c = 0x40801011;
        uStack_60 = 0x50;
        iVar20 = 0;
        uStack_64 = 0x6854fb60;
        uVar52 = 0xba94458a;
        uVar48 = 0xee40c5e7;
        uVar51 = 0x60ea283e;
        uStack_68 = 0xc2b2ae8d;
        uVar14 = uVar35;
        puVar13 = puVar44;
        do {
          lVar5 = (ulonglong)puVar13[6] * 0x27d4eb4f;
          uVar40 = (uint)lVar5;
          uVar41 = uVar40 + uVar52;
          uVar52 = puVar13[7] * 0x27d4eb4f +
                   puVar13[6] * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) + uStack_58 +
                   (uint)CARRY4(uVar40,uVar52);
          uVar40 = uVar52 >> 1;
          uVar21 = uVar41 * -0x80000000 | uVar40;
          uVar41 = uVar41 >> 1;
          uVar15 = uVar52 * -0x80000000 | uVar41;
          uVar52 = (uint)((ulonglong)uVar21 * 0x85ebca87);
          uStack_58 = uVar15 * -0x7a143579 +
                      uVar21 * -0x61c8864f + (int)((ulonglong)uVar21 * 0x85ebca87 >> 0x20);
          lVar5 = (ulonglong)puVar13[4] * 0x27d4eb4f;
          uVar42 = (uint)lVar5;
          uVar39 = uVar42 + uStack_5c;
          uVar16 = puVar13[5] * 0x27d4eb4f +
                   puVar13[4] * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) + uStack_60 +
                   (uint)CARRY4(uVar42,uStack_5c);
          uVar42 = uVar16 >> 1;
          uVar22 = uVar39 * -0x80000000 | uVar42;
          uVar39 = uVar39 >> 1;
          uVar17 = uVar16 * -0x80000000 | uVar39;
          puVar2 = puVar13 + 2;
          uStack_5c = (uint)((ulonglong)uVar22 * 0x85ebca87);
          lVar5 = (ulonglong)*puVar2 * 0x27d4eb4f;
          uVar16 = (uint)lVar5;
          puVar3 = puVar13 + 3;
          uStack_60 = uVar17 * -0x7a143579 +
                      uVar22 * -0x61c8864f + (int)((ulonglong)uVar22 * 0x85ebca87 >> 0x20);
          puVar4 = puVar13 + 1;
          uVar23 = uVar16 + uStack_64;
          uVar18 = *puVar13;
          puVar13 = puVar13 + 8;
          uVar36 = *puVar3 * 0x27d4eb4f + *puVar2 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) +
                   uStack_68 + (uint)CARRY4(uVar16,uStack_64);
          uVar16 = uVar36 >> 1;
          uVar49 = uVar23 * -0x80000000 | uVar16;
          uStack_64 = (uint)((ulonglong)uVar49 * 0x85ebca87);
          uVar23 = uVar23 >> 1;
          uVar50 = uVar36 * -0x80000000 | uVar23;
          uStack_68 = uVar50 * -0x7a143579 +
                      uVar49 * -0x61c8864f + (int)((ulonglong)uVar49 * 0x85ebca87 >> 0x20);
          lVar5 = (ulonglong)uVar18 * 0x27d4eb4f;
          uVar24 = (uint)lVar5;
          uVar36 = uVar24 + uVar48;
          uVar51 = *puVar4 * 0x27d4eb4f + uVar18 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) +
                   uVar51 + (uint)CARRY4(uVar24,uVar48);
          bVar53 = uVar14 < 0x20;
          uVar14 = uVar14 - 0x20;
          uVar18 = uVar51 >> 1;
          uVar24 = uVar36 * -0x80000000 | uVar18;
          iVar20 = iVar20 - (uint)bVar53;
          uVar48 = (uint)((ulonglong)uVar24 * 0x85ebca87);
          uVar36 = uVar36 >> 1;
          uVar43 = uVar51 * -0x80000000 | uVar36;
          uVar51 = uVar43 * -0x7a143579 +
                   uVar24 * -0x61c8864f + (int)((ulonglong)uVar24 * 0x85ebca87 >> 0x20);
        } while ((uint)(uVar14 < 0x20) <= (uint)-iVar20);
        uVar31 = uVar48 << 1 | uVar51 >> 0x1f;
        uVar45 = uStack_64 << 7 | uStack_68 >> 0x19;
        uVar32 = uVar45 + uVar31;
        uVar46 = uStack_5c << 0xc | uStack_60 >> 0x14;
        uVar33 = uVar32 + uVar46;
        uVar37 = uVar52 << 0x12 | uStack_58 >> 0xe;
        uVar25 = (uint)((ulonglong)uVar24 * 0x80000000) |
                 uVar43 * 0xf796ca9 +
                 uVar24 * -0x210ca4ff + (int)((ulonglong)uVar24 * 0xf796ca9 >> 0x20) >> 1;
        lVar5 = (ulonglong)uVar25 * 0x85ebca87;
        uVar34 = uVar33 + uVar37 ^ (uint)lVar5;
        lVar6 = (ulonglong)uVar34 * 0x85ebca87;
        uVar38 = (uint)lVar6;
        uVar50 = (uint)((ulonglong)uVar49 * 0x80000000) |
                 uVar50 * 0xf796ca9 +
                 uVar49 * -0x210ca4ff + (int)((ulonglong)uVar49 * 0xf796ca9 >> 0x20) >> 1;
        lVar7 = (ulonglong)uVar50 * 0x85ebca87;
        uVar43 = uVar38 + 0xc2b2ae63 ^ (uint)lVar7;
        lVar8 = (ulonglong)uVar43 * 0x85ebca87;
        uVar26 = (uint)lVar8;
        uVar27 = (uint)((ulonglong)uVar22 * 0x80000000) |
                 uVar17 * 0xf796ca9 +
                 uVar22 * -0x210ca4ff + (int)((ulonglong)uVar22 * 0xf796ca9 >> 0x20) >> 1;
        lVar9 = (ulonglong)uVar27 * 0x85ebca87;
        uVar17 = uVar26 + 0xc2b2ae63 ^ (uint)lVar9;
        lVar10 = (ulonglong)uVar17 * 0x85ebca87;
        uVar28 = (uint)lVar10;
        uVar29 = (uint)((ulonglong)uVar21 * 0x80000000) |
                 uVar15 * 0xf796ca9 +
                 uVar21 * -0x210ca4ff + (int)((ulonglong)uVar21 * 0xf796ca9 >> 0x20) >> 1;
        lVar11 = (ulonglong)uVar29 * 0x85ebca87;
        uVar15 = uVar28 + 0xc2b2ae63 ^ (uint)lVar11;
        lVar12 = (ulonglong)uVar15 * 0x85ebca87;
        uVar30 = (uint)lVar12;
        uVar14 = uVar30 + 0xc2b2ae63;
        iVar20 = (((((uStack_68 * 0x80 | uStack_64 >> 0x19) + (uVar51 * 2 | uVar48 >> 0x1f) +
                     (uint)CARRY4(uVar45,uVar31) + (uStack_60 * 0x1000 | uStack_5c >> 0x14) +
                     (uint)CARRY4(uVar32,uVar46) + (uStack_58 * 0x40000 | uVar52 >> 0xe) +
                     (uint)CARRY4(uVar33,uVar37) ^
                    (uVar36 * -0x80000000 +
                    uVar18 * -0x784349ac + (int)((ulonglong)uVar24 * 0x80000000 >> 0x20)) *
                    -0x7a143579 + uVar25 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20)) *
                    -0x7a143579 + uVar34 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20) +
                    -0x7a143589 + (uint)(0x3d4d519c < uVar38) ^
                   (uVar23 * -0x80000000 +
                   uVar16 * -0x784349ac + (int)((ulonglong)uVar49 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar50 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20)) *
                   -0x7a143579 + uVar43 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20) +
                   -0x7a143589 + (uint)(0x3d4d519c < uVar26) ^
                  (uVar39 * -0x80000000 +
                  uVar42 * -0x784349ac + (int)((ulonglong)uVar22 * 0x80000000 >> 0x20)) *
                  -0x7a143579 + uVar27 * -0x61c8864f + (int)((ulonglong)lVar9 >> 0x20)) *
                  -0x7a143579 + uVar17 * -0x61c8864f + (int)((ulonglong)lVar10 >> 0x20) +
                  -0x7a143589 + (uint)(0x3d4d519c < uVar28) ^
                 (uVar41 * -0x80000000 +
                 uVar40 * -0x784349ac + (int)((ulonglong)uVar21 * 0x80000000 >> 0x20)) * -0x7a143579
                 + uVar29 * -0x61c8864f + (int)((ulonglong)lVar11 >> 0x20)) * -0x7a143579 +
                 uVar15 * -0x61c8864f + (int)((ulonglong)lVar12 >> 0x20) + -0x7a143589 +
                 (uint)(0x3d4d519c < uVar30);
      }
      uVar52 = uVar14 + uVar35;
      uVar14 = iVar20 + (uint)CARRY4(uVar14,uVar35);
      puVar44 = (uint *)((int)puVar44 + (uVar35 & 0xffffffe0));
      uVar35 = uVar35 & 0x1f;
      uVar48 = 0;
      do {
        if (uVar48 == 0 && (7 < uVar35) <= uVar48) {
          if (uVar48 == 0 && (3 < uVar35) <= uVar48) {
            if (uVar35 == 0 && uVar48 == 0) goto LAB_716d014c;
            lVar5 = (ulonglong)(uint)(byte)*puVar44 * 0x165667c5;
            uVar51 = (uint)lVar5 ^ uVar52;
            uVar14 = (uint)(byte)*puVar44 * 0x27d4eb2f + (int)((ulonglong)lVar5 >> 0x20) ^ uVar14;
            uVar40 = uVar51 << 0xb | uVar14 >> 0x15;
            iVar20 = 1;
            lVar5 = (ulonglong)uVar40 * 0x85ebca87;
            uVar52 = (uint)lVar5;
            uVar14 = (uVar14 << 0xb | uVar51 >> 0x15) * -0x7a143579 +
                     uVar40 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20);
            uVar42 = 0xffffffff;
          }
          else {
            lVar5 = (ulonglong)*puVar44 * 0x85ebca87;
            uVar51 = (uint)lVar5 ^ uVar52;
            uVar14 = *puVar44 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) ^ uVar14;
            uVar41 = uVar51 << 0x17 | uVar14 >> 9;
            lVar5 = (ulonglong)uVar41 * 0x27d4eb4f;
            uVar40 = (uint)lVar5;
            uVar52 = uVar40 + 0x9e3779f9;
            uVar14 = (uVar14 << 0x17 | uVar51 >> 9) * 0x27d4eb4f +
                     uVar41 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) + 0x165667b1 +
                     (uint)(0x61c88606 < uVar40);
            uVar42 = 0xfffffffc;
            iVar20 = 4;
          }
        }
        else {
          uVar51 = *puVar44;
          uVar41 = (uint)((ulonglong)uVar51 * 0x80000000) |
                   puVar44[1] * 0x27d4eb4f +
                   uVar51 * -0x3d4d51c3 + (int)((ulonglong)uVar51 * 0x27d4eb4f >> 0x20) >> 1;
          lVar5 = (ulonglong)uVar41 * 0x85ebca87;
          uVar40 = (uint)lVar5 ^ uVar52;
          uVar14 = (puVar44[1] * -0x80000000 +
                   uVar51 * -0x6c158a59 + (int)((ulonglong)uVar51 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar41 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) ^ uVar14;
          uVar41 = uVar40 << 0x1b | uVar14 >> 5;
          lVar5 = (ulonglong)uVar41 * 0x85ebca87;
          uVar51 = (uint)lVar5;
          uVar52 = uVar51 + 0xc2b2ae63;
          uVar42 = 0xfffffff8;
          uVar14 = (uVar14 << 0x1b | uVar40 >> 5) * -0x7a143579 +
                   uVar41 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) + -0x7a143589 +
                   (uint)(0x3d4d519c < uVar51);
          iVar20 = 8;
        }
        bVar53 = CARRY4(uVar42,uVar35);
        uVar35 = uVar42 + uVar35;
        puVar44 = (uint *)((int)puVar44 + iVar20);
        uVar48 = (uVar48 - 1) + (uint)bVar53;
      } while( true );
    }
    goto LAB_716d01bc;
  }
LAB_716d0828:
  DAT_70135cd4 = (uint *)0x0;
  DAT_70135cd0 = (uint *)0xffffffff;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f6a >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x58;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f6a;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac49) >> 2 ^ 0xacafb4;
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
  if ((auStack_50[0] ^ 0xccfc2a) + DAT_7120187c != -1) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0x8a6f6a >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x59;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x8a6f6a;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac4a) >> 2 ^ 0xacafb4;
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
    DAT_70135cd0 = (uint *)((auStack_50[0] ^ 0xccfc2a) + DAT_7120187c);
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f6a >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x5a;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f6a;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac4b) >> 2 ^ 0xacafb4;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x5a;
    uVar35 = auStack_50[0];
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6d6a >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x57;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6d6a;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac48) >> 2 ^ 0xacafb4;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x57;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(uint *)((uVar35 ^ 0xccfc2a) + DAT_7120187c) =
       (auStack_50[0] ^ 0xff3303d5) + (DAT_711f2fe8 - DAT_7120187c) + 1;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f6a >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x5b;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f6a;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac4c) >> 2 ^ 0xacafb4;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x5b;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if (DAT_70135cd4 < (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc2a))) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0x8a6f6a >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x5c;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x8a6f6a;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac4d) >> 2 ^ 0xacafb4;
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
    DAT_70135cd4 = (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc2a));
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f6f >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x5f;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f6f;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac41) >> 2 ^ 0xacafb5;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x5f;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if ((uint *)((auStack_50[0] ^ 0xccfc2b) + DAT_7120187c) < DAT_70135cd0) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0x8a6f6f >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x60;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x8a6f6f;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac40) >> 2 ^ 0xacafb5;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x60;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd0 = (uint *)((auStack_50[0] ^ 0xccfc2b) + DAT_7120187c);
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f6f >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x61;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f6f;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac43) >> 2 ^ 0xacafb5;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x61;
    uVar35 = auStack_50[0];
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6d79 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x5e;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6d79;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac4e) >> 2 ^ 0xacafb5;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x5e;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(uint *)((uVar35 ^ 0xccfc2b) + DAT_7120187c) =
       (auStack_50[0] ^ 0xff3303d4) + (DAT_711f2fe8 - DAT_7120187c) + 1;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f6f >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x62;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f6f;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac42) >> 2 ^ 0xacafb5;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x62;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if (DAT_70135cd4 < (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc2b))) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0x8a6f6f >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 99;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x8a6f6f;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac45) >> 2 ^ 0xacafb5;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 99;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd4 = (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc2b));
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f6c >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x66;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f6c;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac49) >> 2 ^ 0xacafb2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x66;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if ((uint *)((auStack_50[0] ^ 0xccfc24) + DAT_7120187c) < DAT_70135cd0) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0x8a6f6c >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x67;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x8a6f6c;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac56) >> 2 ^ 0xacafb2;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x67;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd0 = (uint *)((auStack_50[0] ^ 0xccfc24) + DAT_7120187c);
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f6c >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x68;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f6c;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac57) >> 2 ^ 0xacafb2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x68;
    uVar35 = auStack_50[0];
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f3c >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x65;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f3c;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac48) >> 2 ^ 0xacafb2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x65;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(uint *)((uVar35 ^ 0xccfc24) + DAT_7120187c) =
       (auStack_50[0] ^ 0xff3303db) + (DAT_711f2fe8 - DAT_7120187c) + 1;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f6c >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x69;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f6c;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac54) >> 2 ^ 0xacafb2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x69;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if (DAT_70135cd4 < (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc24))) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0x8a6f6c >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x6a;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x8a6f6c;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac55) >> 2 ^ 0xacafb2;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x6a;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd4 = (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc24));
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f69 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x6d;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f69;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac51) >> 2 ^ 0xacafb3;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x6d;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if ((uint *)((auStack_50[0] ^ 0xccfc25) + DAT_7120187c) < DAT_70135cd0) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0x8a6f69 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x6e;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x8a6f69;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac50) >> 2 ^ 0xacafb3;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x6e;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd0 = (uint *)((auStack_50[0] ^ 0xccfc25) + DAT_7120187c);
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f69 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x6f;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f69;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac5f) >> 2 ^ 0xacafb3;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x6f;
    uVar35 = auStack_50[0];
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6d7b >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x6c;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6d7b;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac52) >> 2 ^ 0xacafb3;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x6c;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(uint *)((uVar35 ^ 0xccfc25) + DAT_7120187c) =
       (auStack_50[0] ^ 0xff3303da) + (DAT_711f2fe8 - DAT_7120187c) + 1;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f69 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x70;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f69;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac5e) >> 2 ^ 0xacafb3;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x70;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if (DAT_70135cd4 < (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc25))) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0x8a6f69 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x71;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x8a6f69;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac5d) >> 2 ^ 0xacafb3;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x71;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd4 = (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc25));
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f76 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x74;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f76;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac59) >> 2 ^ 0xacafb0;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x74;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if ((uint *)((auStack_50[0] ^ 0xccfc26) + DAT_7120187c) < DAT_70135cd0) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0x8a6f76 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x75;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x8a6f76;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac5a) >> 2 ^ 0xacafb0;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x75;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd0 = (uint *)((auStack_50[0] ^ 0xccfc26) + DAT_7120187c);
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f76 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x76;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f76;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac5b) >> 2 ^ 0xacafb0;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x76;
    uVar35 = auStack_50[0];
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6d50 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x73;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6d50;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac58) >> 2 ^ 0xacafb0;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x73;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(uint *)((uVar35 ^ 0xccfc26) + DAT_7120187c) =
       (auStack_50[0] ^ 0xff3303d9) + (DAT_711f2fe8 - DAT_7120187c) + 1;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f76 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x77;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f76;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac64) >> 2 ^ 0xacafb0;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x77;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if (DAT_70135cd4 < (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc26))) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0x8a6f76 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x78;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x8a6f76;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac65) >> 2 ^ 0xacafb0;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x78;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd4 = (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc26));
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f7f >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x7b;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f7f;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac61) >> 2 ^ 0xacafb1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x7b;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if ((uint *)((auStack_50[0] ^ 0xccfc27) + DAT_7120187c) < DAT_70135cd0) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0x8a6f7f >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x7c;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x8a6f7f;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac60) >> 2 ^ 0xacafb1;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x7c;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd0 = (uint *)((auStack_50[0] ^ 0xccfc27) + DAT_7120187c);
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f7f >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x7d;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f7f;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac63) >> 2 ^ 0xacafb1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x7d;
    uVar35 = auStack_50[0];
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6dbd >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x7a;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6dbd;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac66) >> 2 ^ 0xacafb1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x7a;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(uint *)((uVar35 ^ 0xccfc27) + DAT_7120187c) =
       (auStack_50[0] ^ 0xff3303d8) + (DAT_711f2fe8 - DAT_7120187c) + 1;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f7f >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x7e;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f7f;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac62) >> 2 ^ 0xacafb1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x7e;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if (DAT_70135cd4 < (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc27))) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0x8a6f7f >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x7f;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x8a6f7f;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac6d) >> 2 ^ 0xacafb1;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x7f;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd4 = (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc27));
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f7c >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x82;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f7c;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac69) >> 2 ^ 0xacafae;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x82;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if ((uint *)((auStack_50[0] ^ 0xccfc20) + DAT_7120187c) < DAT_70135cd0) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0x8a6f7c >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x83;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x8a6f7c;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac6e) >> 2 ^ 0xacafae;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x83;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd0 = (uint *)((auStack_50[0] ^ 0xccfc20) + DAT_7120187c);
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f7c >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x84;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f7c;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac6f) >> 2 ^ 0xacafae;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x84;
    uVar35 = auStack_50[0];
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6dbc >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x81;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6dbc;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac68) >> 2 ^ 0xacafae;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x81;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(uint *)((uVar35 ^ 0xccfc20) + DAT_7120187c) =
       (auStack_50[0] ^ 0xff3303df) + (DAT_711f2fe8 - DAT_7120187c) + 1;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f7c >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x85;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f7c;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac6c) >> 2 ^ 0xacafae;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x85;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if (DAT_70135cd4 < (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc20))) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0x8a6f7c >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x86;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x8a6f7c;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac6d) >> 2 ^ 0xacafae;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x86;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd4 = (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc20));
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f55 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x89;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f55;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac71) >> 2 ^ 0xacafaf;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x89;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if ((uint *)((auStack_50[0] ^ 0xccfc21) + DAT_7120187c) < DAT_70135cd0) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0x8a6f55 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x8a;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x8a6f55;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac70) >> 2 ^ 0xacafaf;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x8a;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd0 = (uint *)((auStack_50[0] ^ 0xccfc21) + DAT_7120187c);
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f55 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x8b;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f55;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac77) >> 2 ^ 0xacafaf;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x8b;
    uVar35 = auStack_50[0];
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6ee1 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x88;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6ee1;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac72) >> 2 ^ 0xacafaf;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x88;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(uint *)((uVar35 ^ 0xccfc21) + DAT_7120187c) =
       (auStack_50[0] ^ 0xff3303de) + (DAT_711f2fe8 - DAT_7120187c) + 1;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f55 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x8c;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f55;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac76) >> 2 ^ 0xacafaf;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x8c;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if (DAT_70135cd4 < (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc21))) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0x8a6f55 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x8d;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x8a6f55;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac75) >> 2 ^ 0xacafaf;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x8d;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd4 = (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc21));
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f5e >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x90;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f5e;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac79) >> 2 ^ 0xacafac;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x90;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if ((uint *)((auStack_50[0] ^ 0xccfc22) + DAT_7120187c) < DAT_70135cd0) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0x8a6f5e >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x91;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x8a6f5e;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac7a) >> 2 ^ 0xacafac;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x91;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd0 = (uint *)((auStack_50[0] ^ 0xccfc22) + DAT_7120187c);
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f5e >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x92;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f5e;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac7b) >> 2 ^ 0xacafac;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x92;
    uVar35 = auStack_50[0];
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6ef4 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x8f;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6ef4;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac78) >> 2 ^ 0xacafac;
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
  *(uint *)((uVar35 ^ 0xccfc22) + DAT_7120187c) =
       (auStack_50[0] ^ 0xff3303dd) + (DAT_711f2fe8 - DAT_7120187c) + 1;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f5e >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x93;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f5e;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac7c) >> 2 ^ 0xacafac;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x93;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if (DAT_70135cd4 < (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc22))) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0x8a6f5e >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x94;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x8a6f5e;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac7d) >> 2 ^ 0xacafac;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x94;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd4 = (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc22));
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6faf >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x97;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6faf;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac81) >> 2 ^ 0xacafad;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x97;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if ((uint *)((auStack_50[0] ^ 0xccfc23) + DAT_7120187c) < DAT_70135cd0) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0x8a6faf >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x98;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x8a6faf;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac80) >> 2 ^ 0xacafad;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x98;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd0 = (uint *)((auStack_50[0] ^ 0xccfc23) + DAT_7120187c);
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6faf >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x99;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6faf;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac83) >> 2 ^ 0xacafad;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x99;
    uVar35 = auStack_50[0];
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a71f9 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x96;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a71f9;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac7e) >> 2 ^ 0xacafad;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x96;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(uint *)((uVar35 ^ 0xccfc23) + DAT_7120187c) =
       (auStack_50[0] ^ 0xff3303dc) + (DAT_711f2fe8 - DAT_7120187c) + 1;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6faf >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x9a;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6faf;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac82) >> 2 ^ 0xacafad;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x9a;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if (DAT_70135cd4 < (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc23))) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0x8a6faf >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x9b;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x8a6faf;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac85) >> 2 ^ 0xacafad;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x9b;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd4 = (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc23));
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f9c >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x9e;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f9c;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac99) >> 2 ^ 0xacafca;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x9e;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if ((uint *)((auStack_50[0] ^ 0xccfc3c) + DAT_7120187c) < DAT_70135cd0) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0x8a6f9c >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x9f;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x8a6f9c;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac96) >> 2 ^ 0xacafca;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x9f;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd0 = (uint *)((auStack_50[0] ^ 0xccfc3c) + DAT_7120187c);
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f9c >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0xa0;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f9c;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac97) >> 2 ^ 0xacafca;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0xa0;
    uVar35 = auStack_50[0];
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6e2e >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x9d;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6e2e;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac98) >> 2 ^ 0xacafca;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x9d;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(uint *)((uVar35 ^ 0xccfc3c) + DAT_7120187c) =
       (auStack_50[0] ^ 0xff3303c3) + (DAT_711f2fe8 - DAT_7120187c) + 1;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f9c >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0xa1;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f9c;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac94) >> 2 ^ 0xacafca;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0xa1;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if (DAT_70135cd4 < (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc3c))) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0x8a6f9c >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0xa2;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x8a6f9c;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac95) >> 2 ^ 0xacafca;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0xa2;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd4 = (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc3c));
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f99 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0xa5;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f99;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac91) >> 2 ^ 0xacafcb;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0xa5;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if ((uint *)((auStack_50[0] ^ 0xccfc3d) + DAT_7120187c) < DAT_70135cd0) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0x8a6f99 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0xa6;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x8a6f99;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac90) >> 2 ^ 0xacafcb;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0xa6;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd0 = (uint *)((auStack_50[0] ^ 0xccfc3d) + DAT_7120187c);
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f99 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0xa7;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f99;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac8f) >> 2 ^ 0xacafcb;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0xa7;
    uVar35 = auStack_50[0];
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6e37 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0xa4;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6e37;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac92) >> 2 ^ 0xacafcb;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0xa4;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(uint *)((uVar35 ^ 0xccfc3d) + DAT_7120187c) =
       (auStack_50[0] ^ 0xff3303c2) + (DAT_711f2fe8 - DAT_7120187c) + 1;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f99 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0xa8;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f99;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac8e) >> 2 ^ 0xacafcb;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0xa8;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if (DAT_70135cd4 < (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc3d))) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0x8a6f99 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0xa9;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x8a6f99;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac8d) >> 2 ^ 0xacafcb;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0xa9;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd4 = (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc3d));
  }
  if ((DAT_70135cd0 != (uint *)0xffffffff) && (DAT_70135cd0 < DAT_70135cd4)) {
    iVar19 = 0;
    puVar13 = DAT_70135cd4;
LAB_716d924c:
    puVar44 = (uint *)(&DAT_70125c7c)[iVar19 * 4];
    uVar35 = (&DAT_70125c80)[iVar19 * 4];
    if ((DAT_70135cd0 <= (uint *)(uVar35 + (int)puVar44)) && (puVar44 <= puVar13)) {
      uVar14 = 0x56d677d6;
      iVar20 = 0x27d4eb7f;
      if (0x1f < uVar35) {
        uStack_58 = 0xba94458a;
        uStack_5c = 0x61c8869e;
        uStack_60 = 0x50;
        iVar20 = 0;
        uVar48 = 0x40801011;
        uVar52 = 0xc2b2ae8d;
        uVar51 = 0xee40c5e7;
        uVar40 = 0x60ea283e;
        uStack_64 = 0x6854fb60;
        puVar13 = puVar44;
        uVar14 = uVar35;
        do {
          lVar5 = (ulonglong)puVar13[6] * 0x27d4eb4f;
          uVar41 = (uint)lVar5;
          uVar42 = uVar41 + uStack_58;
          uVar39 = puVar13[7] * 0x27d4eb4f +
                   puVar13[6] * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) + uStack_5c +
                   (uint)CARRY4(uVar41,uStack_58);
          uVar41 = uVar39 >> 1;
          uVar43 = uVar42 * -0x80000000 | uVar41;
          uVar42 = uVar42 >> 1;
          uVar17 = uVar39 * -0x80000000 | uVar42;
          uStack_58 = (uint)((ulonglong)uVar43 * 0x85ebca87);
          uStack_5c = uVar17 * -0x7a143579 +
                      uVar43 * -0x61c8864f + (int)((ulonglong)uVar43 * 0x85ebca87 >> 0x20);
          lVar5 = (ulonglong)puVar13[4] * 0x27d4eb4f;
          uVar39 = (uint)lVar5;
          uVar16 = uVar39 + uVar48;
          puVar2 = puVar13 + 3;
          uVar23 = puVar13[5] * 0x27d4eb4f +
                   puVar13[4] * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) + uStack_60 +
                   (uint)CARRY4(uVar39,uVar48);
          uVar39 = uVar23 >> 1;
          uVar24 = uVar16 * -0x80000000 | uVar39;
          uVar48 = (uint)((ulonglong)uVar24 * 0x85ebca87);
          uVar16 = uVar16 >> 1;
          uVar21 = uVar23 * -0x80000000 | uVar16;
          puVar3 = puVar13 + 2;
          uStack_60 = uVar21 * -0x7a143579 +
                      uVar24 * -0x61c8864f + (int)((ulonglong)uVar24 * 0x85ebca87 >> 0x20);
          uVar49 = *puVar13;
          puVar4 = puVar13 + 1;
          puVar13 = puVar13 + 8;
          lVar5 = (ulonglong)*puVar3 * 0x27d4eb4f;
          uVar23 = (uint)lVar5;
          uVar18 = uVar23 + uStack_64;
          uVar52 = *puVar2 * 0x27d4eb4f + *puVar3 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) +
                   uVar52 + (uint)CARRY4(uVar23,uStack_64);
          uVar23 = uVar52 >> 1;
          uVar50 = uVar18 * -0x80000000 | uVar23;
          uVar18 = uVar18 >> 1;
          uVar22 = uVar52 * -0x80000000 | uVar18;
          uStack_64 = (uint)((ulonglong)uVar50 * 0x85ebca87);
          uVar52 = uVar22 * -0x7a143579 +
                   uVar50 * -0x61c8864f + (int)((ulonglong)uVar50 * 0x85ebca87 >> 0x20);
          lVar5 = (ulonglong)uVar49 * 0x27d4eb4f;
          uVar36 = (uint)lVar5;
          uVar15 = uVar36 + uVar51;
          uVar51 = *puVar4 * 0x27d4eb4f + uVar49 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) +
                   uVar40 + (uint)CARRY4(uVar36,uVar51);
          bVar53 = uVar14 < 0x20;
          uVar14 = uVar14 - 0x20;
          iVar20 = iVar20 - (uint)bVar53;
          uVar36 = uVar51 >> 1;
          uVar49 = uVar15 * -0x80000000 | uVar36;
          uVar15 = uVar15 >> 1;
          uVar25 = uVar51 * -0x80000000 | uVar15;
          uVar51 = (uint)((ulonglong)uVar49 * 0x85ebca87);
          uVar40 = uVar25 * -0x7a143579 +
                   uVar49 * -0x61c8864f + (int)((ulonglong)uVar49 * 0x85ebca87 >> 0x20);
        } while ((uint)(uVar14 < 0x20) <= (uint)-iVar20);
        uVar33 = uVar51 << 1 | uVar40 >> 0x1f;
        uVar46 = uStack_64 << 7 | uVar52 >> 0x19;
        uVar34 = uVar46 + uVar33;
        uVar47 = uVar48 << 0xc | uStack_60 >> 0x14;
        uVar45 = uVar34 + uVar47;
        uVar37 = (uint)((ulonglong)uVar49 * 0x80000000) |
                 uVar25 * 0xf796ca9 +
                 uVar49 * -0x210ca4ff + (int)((ulonglong)uVar49 * 0xf796ca9 >> 0x20) >> 1;
        lVar5 = (ulonglong)uVar37 * 0x85ebca87;
        uVar25 = uStack_58 << 0x12 | uStack_5c >> 0xe;
        uVar26 = uVar45 + uVar25 ^ (uint)lVar5;
        lVar6 = (ulonglong)uVar26 * 0x85ebca87;
        uVar27 = (uint)lVar6;
        uVar38 = (uint)((ulonglong)uVar50 * 0x80000000) |
                 uVar22 * 0xf796ca9 +
                 uVar50 * -0x210ca4ff + (int)((ulonglong)uVar50 * 0xf796ca9 >> 0x20) >> 1;
        lVar7 = (ulonglong)uVar38 * 0x85ebca87;
        uVar22 = uVar27 + 0xc2b2ae63 ^ (uint)lVar7;
        lVar8 = (ulonglong)uVar22 * 0x85ebca87;
        uVar28 = (uint)lVar8;
        uVar29 = (uint)((ulonglong)uVar24 * 0x80000000) |
                 uVar21 * 0xf796ca9 +
                 uVar24 * -0x210ca4ff + (int)((ulonglong)uVar24 * 0xf796ca9 >> 0x20) >> 1;
        lVar9 = (ulonglong)uVar29 * 0x85ebca87;
        uVar21 = uVar28 + 0xc2b2ae63 ^ (uint)lVar9;
        lVar10 = (ulonglong)uVar21 * 0x85ebca87;
        uVar30 = (uint)lVar10;
        uVar31 = (uint)((ulonglong)uVar43 * 0x80000000) |
                 uVar17 * 0xf796ca9 +
                 uVar43 * -0x210ca4ff + (int)((ulonglong)uVar43 * 0xf796ca9 >> 0x20) >> 1;
        lVar11 = (ulonglong)uVar31 * 0x85ebca87;
        uVar17 = uVar30 + 0xc2b2ae63 ^ (uint)lVar11;
        lVar12 = (ulonglong)uVar17 * 0x85ebca87;
        uVar32 = (uint)lVar12;
        uVar14 = uVar32 + 0xc2b2ae63;
        iVar20 = (((((uVar52 * 0x80 | uStack_64 >> 0x19) + (uVar40 * 2 | uVar51 >> 0x1f) +
                     (uint)CARRY4(uVar46,uVar33) + (uStack_60 * 0x1000 | uVar48 >> 0x14) +
                     (uint)CARRY4(uVar34,uVar47) + (uStack_5c * 0x40000 | uStack_58 >> 0xe) +
                     (uint)CARRY4(uVar45,uVar25) ^
                    (uVar15 * -0x80000000 +
                    uVar36 * -0x784349ac + (int)((ulonglong)uVar49 * 0x80000000 >> 0x20)) *
                    -0x7a143579 + uVar37 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20)) *
                    -0x7a143579 + uVar26 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20) +
                    -0x7a143589 + (uint)(0x3d4d519c < uVar27) ^
                   (uVar18 * -0x80000000 +
                   uVar23 * -0x784349ac + (int)((ulonglong)uVar50 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar38 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20)) *
                   -0x7a143579 + uVar22 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20) +
                   -0x7a143589 + (uint)(0x3d4d519c < uVar28) ^
                  (uVar16 * -0x80000000 +
                  uVar39 * -0x784349ac + (int)((ulonglong)uVar24 * 0x80000000 >> 0x20)) *
                  -0x7a143579 + uVar29 * -0x61c8864f + (int)((ulonglong)lVar9 >> 0x20)) *
                  -0x7a143579 + uVar21 * -0x61c8864f + (int)((ulonglong)lVar10 >> 0x20) +
                  -0x7a143589 + (uint)(0x3d4d519c < uVar30) ^
                 (uVar42 * -0x80000000 +
                 uVar41 * -0x784349ac + (int)((ulonglong)uVar43 * 0x80000000 >> 0x20)) * -0x7a143579
                 + uVar31 * -0x61c8864f + (int)((ulonglong)lVar11 >> 0x20)) * -0x7a143579 +
                 uVar17 * -0x61c8864f + (int)((ulonglong)lVar12 >> 0x20) + -0x7a143589 +
                 (uint)(0x3d4d519c < uVar32);
      }
      uVar52 = uVar14 + uVar35;
      uVar14 = iVar20 + (uint)CARRY4(uVar14,uVar35);
      puVar44 = (uint *)((int)puVar44 + (uVar35 & 0xffffffe0));
      uVar35 = uVar35 & 0x1f;
      uVar48 = 0;
      do {
        if (uVar48 == 0 && (7 < uVar35) <= uVar48) {
          if (uVar48 == 0 && (3 < uVar35) <= uVar48) {
            if (uVar35 == 0 && uVar48 == 0) goto LAB_716d91b8;
            lVar5 = (ulonglong)(uint)(byte)*puVar44 * 0x165667c5;
            uVar51 = (uint)lVar5 ^ uVar52;
            uVar14 = (uint)(byte)*puVar44 * 0x27d4eb2f + (int)((ulonglong)lVar5 >> 0x20) ^ uVar14;
            uVar40 = uVar51 << 0xb | uVar14 >> 0x15;
            iVar20 = 1;
            lVar5 = (ulonglong)uVar40 * 0x85ebca87;
            uVar52 = (uint)lVar5;
            uVar14 = (uVar14 << 0xb | uVar51 >> 0x15) * -0x7a143579 +
                     uVar40 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20);
            uVar41 = 0xffffffff;
          }
          else {
            lVar5 = (ulonglong)*puVar44 * 0x85ebca87;
            uVar51 = (uint)lVar5 ^ uVar52;
            uVar14 = *puVar44 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) ^ uVar14;
            uVar41 = uVar51 << 0x17 | uVar14 >> 9;
            lVar5 = (ulonglong)uVar41 * 0x27d4eb4f;
            uVar40 = (uint)lVar5;
            uVar52 = uVar40 + 0x9e3779f9;
            uVar14 = (uVar14 << 0x17 | uVar51 >> 9) * 0x27d4eb4f +
                     uVar41 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) + 0x165667b1 +
                     (uint)(0x61c88606 < uVar40);
            uVar41 = 0xfffffffc;
            iVar20 = 4;
          }
        }
        else {
          uVar51 = *puVar44;
          uVar41 = (uint)((ulonglong)uVar51 * 0x80000000) |
                   puVar44[1] * 0x27d4eb4f +
                   uVar51 * -0x3d4d51c3 + (int)((ulonglong)uVar51 * 0x27d4eb4f >> 0x20) >> 1;
          lVar5 = (ulonglong)uVar41 * 0x85ebca87;
          uVar40 = (uint)lVar5 ^ uVar52;
          uVar14 = (puVar44[1] * -0x80000000 +
                   uVar51 * -0x6c158a59 + (int)((ulonglong)uVar51 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar41 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) ^ uVar14;
          uVar42 = uVar40 << 0x1b | uVar14 >> 5;
          lVar5 = (ulonglong)uVar42 * 0x85ebca87;
          uVar51 = (uint)lVar5;
          uVar52 = uVar51 + 0xc2b2ae63;
          uVar41 = 0xfffffff8;
          uVar14 = (uVar14 << 0x1b | uVar40 >> 5) * -0x7a143579 +
                   uVar42 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) + -0x7a143589 +
                   (uint)(0x3d4d519c < uVar51);
          iVar20 = 8;
        }
        bVar53 = CARRY4(uVar41,uVar35);
        uVar35 = uVar41 + uVar35;
        puVar44 = (uint *)((int)puVar44 + iVar20);
        uVar48 = (uVar48 - 1) + (uint)bVar53;
      } while( true );
    }
    goto LAB_716d9240;
  }
LAB_716d98dc:
  DAT_700c8170 = *DAT_71201884 + DAT_71201880 | 1;
  DAT_71201884 = DAT_71201884 + 1;
  *DAT_7120188c = FUN_716bff0c;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8174 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716c983c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7132f200;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7132191c;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_71201884 = DAT_71201884 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716ca0b8;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_71201884 = DAT_71201884 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716ca0b8;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_71201884 = DAT_71201884 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716ca0b8;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_71201884 = DAT_71201884 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716ca0b8;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8178 = *DAT_71201884 + DAT_71201880;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716ca0b8;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca1f8;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca228;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca258;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca288;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca2b8;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca2e8;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca318;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca348;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca37c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca3ac;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca3dc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca40c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca43c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca46c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca49c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca4cc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca4fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca52c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca55c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca58c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca5bc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca5ec;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca61c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca64c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca67c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca6ac;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca6dc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca70c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca73c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca76c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca79c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca7cc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca7fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca82c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca85c;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xa487dd >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x26;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xa487dd;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccb48c) >> 2 ^ 0xacb12f;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x26;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(undefined **)((auStack_50[0] ^ 0xccfba1) + DAT_7120187c) = &DAT_700c81a4;
  *DAT_7120188c = &LAB_716ca9c0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca9e8;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8180 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716caa18;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c817c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716ca88c;
  DAT_70135cd4 = (uint *)0x0;
  DAT_70135cd0 = (uint *)0xffffffff;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x9c57ff >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x36;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x9c57ff;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccb48a) >> 2 ^ 0xacb141;
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
  if ((auStack_50[0] ^ 0xccfbb7) + DAT_7120187c != -1) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0x9c57ff >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x37;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x9c57ff;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccb4b5) >> 2 ^ 0xacb141;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x37;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd0 = (uint *)((auStack_50[0] ^ 0xccfbb7) + DAT_7120187c);
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x9c57ff >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x38;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x9c57ff;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccb4b4) >> 2 ^ 0xacb141;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x38;
    uVar35 = auStack_50[0];
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x9c50e5 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x35;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x9c50e5;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccb48b) >> 2 ^ 0xacb141;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x35;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(uint *)((uVar35 ^ 0xccfbb7) + DAT_7120187c) =
       ((auStack_50[0] ^ 0xff330448) - DAT_7120187c) + 0x70084869;
  uStack_40 = 0x523;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x9c57ff >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x39;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x9c57ff;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccb4b7) >> 2 ^ 0xacb141;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x39;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if (DAT_70135cd4 < (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfbb7))) {
    uStack_40 = 0x524;
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0x9c57ff >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x3a;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x9c57ff;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccb4b6) >> 2 ^ 0xacb141;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x3a;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd4 = (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfbb7));
  }
  uStack_34 = 0x26d5d038;
  puStack_38 = &LAB_49abac16;
  uStack_3c = 0;
  uStack_44 = 0;
  uStack_48 = 0x495;
  if ((DAT_70135cd0 != (uint *)0xffffffff) && (DAT_70135cd0 < DAT_70135cd4)) {
    iVar19 = 0;
    puVar13 = DAT_70135cd4;
LAB_716dafe8:
    puVar44 = (uint *)(&DAT_70125c7c)[iVar19 * 4];
    uVar35 = (&DAT_70125c80)[iVar19 * 4];
    if ((DAT_70135cd0 <= (uint *)(uVar35 + (int)puVar44)) && (puVar44 <= puVar13)) {
      uVar14 = 0x56d677d6;
      iVar20 = 0x27d4eb7f;
      if (0x1f < uVar35) {
        uStack_58 = 0x61c8869e;
        uStack_5c = 0x40801011;
        uStack_60 = 0x50;
        iVar20 = 0;
        uStack_64 = 0x6854fb60;
        uVar51 = 0xba94458a;
        uVar52 = 0xee40c5e7;
        uVar48 = 0x60ea283e;
        uStack_68 = 0xc2b2ae8d;
        puVar13 = puVar44;
        uVar14 = uVar35;
        do {
          lVar5 = (ulonglong)puVar13[6] * 0x27d4eb4f;
          uVar40 = (uint)lVar5;
          uVar41 = uVar40 + uVar51;
          uVar51 = puVar13[7] * 0x27d4eb4f +
                   puVar13[6] * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) + uStack_58 +
                   (uint)CARRY4(uVar40,uVar51);
          uVar40 = uVar51 >> 1;
          uVar49 = uVar41 * -0x80000000 | uVar40;
          uVar41 = uVar41 >> 1;
          uVar15 = uVar51 * -0x80000000 | uVar41;
          uVar51 = (uint)((ulonglong)uVar49 * 0x85ebca87);
          uStack_58 = uVar15 * -0x7a143579 +
                      uVar49 * -0x61c8864f + (int)((ulonglong)uVar49 * 0x85ebca87 >> 0x20);
          lVar5 = (ulonglong)puVar13[4] * 0x27d4eb4f;
          uVar42 = (uint)lVar5;
          uVar39 = uVar42 + uStack_5c;
          uVar16 = puVar13[5] * 0x27d4eb4f +
                   puVar13[4] * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) + uStack_60 +
                   (uint)CARRY4(uVar42,uStack_5c);
          uVar42 = uVar16 >> 1;
          uVar17 = uVar39 * -0x80000000 | uVar42;
          uStack_5c = (uint)((ulonglong)uVar17 * 0x85ebca87);
          uVar39 = uVar39 >> 1;
          uVar24 = uVar16 * -0x80000000 | uVar39;
          uStack_60 = uVar24 * -0x7a143579 +
                      uVar17 * -0x61c8864f + (int)((ulonglong)uVar17 * 0x85ebca87 >> 0x20);
          puVar2 = puVar13 + 2;
          puVar3 = puVar13 + 3;
          uVar22 = *puVar13;
          lVar5 = (ulonglong)*puVar2 * 0x27d4eb4f;
          uVar16 = (uint)lVar5;
          puVar4 = puVar13 + 1;
          puVar13 = puVar13 + 8;
          uVar23 = uVar16 + uStack_64;
          uVar18 = *puVar3 * 0x27d4eb4f + *puVar2 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) +
                   uStack_68 + (uint)CARRY4(uVar16,uStack_64);
          uVar16 = uVar18 >> 1;
          uVar43 = uVar23 * -0x80000000 | uVar16;
          uVar23 = uVar23 >> 1;
          uVar21 = uVar18 * -0x80000000 | uVar23;
          uStack_64 = (uint)((ulonglong)uVar43 * 0x85ebca87);
          uStack_68 = uVar21 * -0x7a143579 +
                      uVar43 * -0x61c8864f + (int)((ulonglong)uVar43 * 0x85ebca87 >> 0x20);
          lVar5 = (ulonglong)uVar22 * 0x27d4eb4f;
          uVar18 = (uint)lVar5;
          uVar36 = uVar18 + uVar52;
          uVar52 = *puVar4 * 0x27d4eb4f + uVar22 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) +
                   uVar48 + (uint)CARRY4(uVar18,uVar52);
          bVar53 = uVar14 < 0x20;
          uVar14 = uVar14 - 0x20;
          uVar18 = uVar52 >> 1;
          uVar22 = uVar36 * -0x80000000 | uVar18;
          uVar36 = uVar36 >> 1;
          uVar50 = uVar52 * -0x80000000 | uVar36;
          iVar20 = iVar20 - (uint)bVar53;
          uVar52 = (uint)((ulonglong)uVar22 * 0x85ebca87);
          uVar48 = uVar50 * -0x7a143579 +
                   uVar22 * -0x61c8864f + (int)((ulonglong)uVar22 * 0x85ebca87 >> 0x20);
        } while ((uint)(uVar14 < 0x20) <= (uint)-iVar20);
        uVar31 = uVar52 << 1 | uVar48 >> 0x1f;
        uVar38 = uStack_64 << 7 | uStack_68 >> 0x19;
        uVar32 = uVar38 + uVar31;
        uVar45 = uStack_5c << 0xc | uStack_60 >> 0x14;
        uVar33 = uVar32 + uVar45;
        uVar37 = uVar51 << 0x12 | uStack_58 >> 0xe;
        uVar50 = (uint)((ulonglong)uVar22 * 0x80000000) |
                 uVar50 * 0xf796ca9 +
                 uVar22 * -0x210ca4ff + (int)((ulonglong)uVar22 * 0xf796ca9 >> 0x20) >> 1;
        lVar5 = (ulonglong)uVar50 * 0x85ebca87;
        uVar34 = uVar33 + uVar37 ^ (uint)lVar5;
        lVar6 = (ulonglong)uVar34 * 0x85ebca87;
        uVar46 = (uint)lVar6;
        uVar25 = (uint)((ulonglong)uVar43 * 0x80000000) |
                 uVar21 * 0xf796ca9 +
                 uVar43 * -0x210ca4ff + (int)((ulonglong)uVar43 * 0xf796ca9 >> 0x20) >> 1;
        lVar7 = (ulonglong)uVar25 * 0x85ebca87;
        uVar21 = uVar46 + 0xc2b2ae63 ^ (uint)lVar7;
        lVar8 = (ulonglong)uVar21 * 0x85ebca87;
        uVar26 = (uint)lVar8;
        uVar27 = (uint)((ulonglong)uVar17 * 0x80000000) |
                 uVar24 * 0xf796ca9 +
                 uVar17 * -0x210ca4ff + (int)((ulonglong)uVar17 * 0xf796ca9 >> 0x20) >> 1;
        lVar9 = (ulonglong)uVar27 * 0x85ebca87;
        uVar24 = uVar26 + 0xc2b2ae63 ^ (uint)lVar9;
        lVar10 = (ulonglong)uVar24 * 0x85ebca87;
        uVar28 = (uint)lVar10;
        uVar29 = (uint)((ulonglong)uVar49 * 0x80000000) |
                 uVar15 * 0xf796ca9 +
                 uVar49 * -0x210ca4ff + (int)((ulonglong)uVar49 * 0xf796ca9 >> 0x20) >> 1;
        lVar11 = (ulonglong)uVar29 * 0x85ebca87;
        uVar15 = uVar28 + 0xc2b2ae63 ^ (uint)lVar11;
        lVar12 = (ulonglong)uVar15 * 0x85ebca87;
        uVar30 = (uint)lVar12;
        uVar14 = uVar30 + 0xc2b2ae63;
        iVar20 = (((((uStack_68 * 0x80 | uStack_64 >> 0x19) + (uVar48 * 2 | uVar52 >> 0x1f) +
                     (uint)CARRY4(uVar38,uVar31) + (uStack_60 * 0x1000 | uStack_5c >> 0x14) +
                     (uint)CARRY4(uVar32,uVar45) + (uStack_58 * 0x40000 | uVar51 >> 0xe) +
                     (uint)CARRY4(uVar33,uVar37) ^
                    (uVar36 * -0x80000000 +
                    uVar18 * -0x784349ac + (int)((ulonglong)uVar22 * 0x80000000 >> 0x20)) *
                    -0x7a143579 + uVar50 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20)) *
                    -0x7a143579 + uVar34 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20) +
                    -0x7a143589 + (uint)(0x3d4d519c < uVar46) ^
                   (uVar23 * -0x80000000 +
                   uVar16 * -0x784349ac + (int)((ulonglong)uVar43 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar25 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20)) *
                   -0x7a143579 + uVar21 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20) +
                   -0x7a143589 + (uint)(0x3d4d519c < uVar26) ^
                  (uVar39 * -0x80000000 +
                  uVar42 * -0x784349ac + (int)((ulonglong)uVar17 * 0x80000000 >> 0x20)) *
                  -0x7a143579 + uVar27 * -0x61c8864f + (int)((ulonglong)lVar9 >> 0x20)) *
                  -0x7a143579 + uVar24 * -0x61c8864f + (int)((ulonglong)lVar10 >> 0x20) +
                  -0x7a143589 + (uint)(0x3d4d519c < uVar28) ^
                 (uVar41 * -0x80000000 +
                 uVar40 * -0x784349ac + (int)((ulonglong)uVar49 * 0x80000000 >> 0x20)) * -0x7a143579
                 + uVar29 * -0x61c8864f + (int)((ulonglong)lVar11 >> 0x20)) * -0x7a143579 +
                 uVar15 * -0x61c8864f + (int)((ulonglong)lVar12 >> 0x20) + -0x7a143589 +
                 (uint)(0x3d4d519c < uVar30);
      }
      uVar52 = uVar14 + uVar35;
      uVar14 = iVar20 + (uint)CARRY4(uVar14,uVar35);
      puVar44 = (uint *)((int)puVar44 + (uVar35 & 0xffffffe0));
      uVar35 = uVar35 & 0x1f;
      uVar48 = 0;
      do {
        if (uVar48 == 0 && (7 < uVar35) <= uVar48) {
          if (uVar48 == 0 && (3 < uVar35) <= uVar48) {
            if (uVar35 == 0 && uVar48 == 0) goto LAB_716daf64;
            lVar5 = (ulonglong)(uint)(byte)*puVar44 * 0x165667c5;
            uVar51 = (uint)lVar5 ^ uVar52;
            uVar14 = (uint)(byte)*puVar44 * 0x27d4eb2f + (int)((ulonglong)lVar5 >> 0x20) ^ uVar14;
            uVar40 = uVar51 << 0xb | uVar14 >> 0x15;
            iVar20 = 1;
            lVar5 = (ulonglong)uVar40 * 0x85ebca87;
            uVar52 = (uint)lVar5;
            uVar14 = (uVar14 << 0xb | uVar51 >> 0x15) * -0x7a143579 +
                     uVar40 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20);
            uVar42 = 0xffffffff;
          }
          else {
            lVar5 = (ulonglong)*puVar44 * 0x85ebca87;
            uVar51 = (uint)lVar5 ^ uVar52;
            uVar14 = *puVar44 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) ^ uVar14;
            uVar41 = uVar51 << 0x17 | uVar14 >> 9;
            lVar5 = (ulonglong)uVar41 * 0x27d4eb4f;
            uVar40 = (uint)lVar5;
            uVar52 = uVar40 + 0x9e3779f9;
            uVar14 = (uVar14 << 0x17 | uVar51 >> 9) * 0x27d4eb4f +
                     uVar41 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) + 0x165667b1 +
                     (uint)(0x61c88606 < uVar40);
            uVar42 = 0xfffffffc;
            iVar20 = 4;
          }
        }
        else {
          uVar51 = *puVar44;
          uVar41 = (uint)((ulonglong)uVar51 * 0x80000000) |
                   puVar44[1] * 0x27d4eb4f +
                   uVar51 * -0x3d4d51c3 + (int)((ulonglong)uVar51 * 0x27d4eb4f >> 0x20) >> 1;
          lVar5 = (ulonglong)uVar41 * 0x85ebca87;
          uVar40 = (uint)lVar5 ^ uVar52;
          uVar14 = (puVar44[1] * -0x80000000 +
                   uVar51 * -0x6c158a59 + (int)((ulonglong)uVar51 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar41 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) ^ uVar14;
          uVar41 = uVar40 << 0x1b | uVar14 >> 5;
          lVar5 = (ulonglong)uVar41 * 0x85ebca87;
          uVar51 = (uint)lVar5;
          uVar52 = uVar51 + 0xc2b2ae63;
          uVar42 = 0xfffffff8;
          uVar14 = (uVar14 << 0x1b | uVar40 >> 5) * -0x7a143579 +
                   uVar41 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) + -0x7a143589 +
                   (uint)(0x3d4d519c < uVar51);
          iVar20 = 8;
        }
        bVar53 = CARRY4(uVar42,uVar35);
        uVar35 = uVar42 + uVar35;
        puVar44 = (uint *)((int)puVar44 + iVar20);
        uVar48 = (uVar48 - 1) + (uint)bVar53;
      } while( true );
    }
    goto LAB_716dafdc;
  }
LAB_716db638:
  DAT_700c8188 = *DAT_71201884 + DAT_71201880 | 1;
  DAT_71201884 = DAT_71201884 + 1;
  *DAT_7120188c = &DAT_716cb648;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c818c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &DAT_716cb6b8;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8190 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716cb728;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8194 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716cb998;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8198 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716cbb04;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c819c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716cbbc4;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c81a0 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716cbca0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716cbd3c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716cbc78;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716cbf54;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  if (_ext___stack_chk_guard == iStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
LAB_716d014c:
  uVar52 = uVar52 ^ uVar14 >> 1;
  lVar5 = (ulonglong)uVar52 * 0x27d4eb4f;
  uVar48 = (uint)lVar5;
  uVar35 = uVar14 * 0x27d4eb4f + uVar52 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20);
  uVar48 = (uVar48 >> 0x1d | uVar35 * 8) ^ uVar48;
  lVar5 = (ulonglong)uVar48 * 0x9e3779f9;
  uVar35 = (uVar35 ^ uVar35 >> 0x1d) * -0x61c88607 +
           uVar48 * 0x165667b1 + (int)((ulonglong)lVar5 >> 0x20);
  (&DAT_70125c88)[iVar19 * 4] = uVar35;
  (&DAT_70125c84)[iVar19 * 4] = uVar35 ^ (uint)lVar5;
  puVar13 = DAT_70135cd4;
LAB_716d01bc:
  iVar19 = iVar19 + 1;
  if (iVar19 == 0x1000) goto LAB_716d0828;
  goto LAB_716d01cc;
LAB_716d91b8:
  uVar52 = uVar52 ^ uVar14 >> 1;
  lVar5 = (ulonglong)uVar52 * 0x27d4eb4f;
  uVar48 = (uint)lVar5;
  uVar35 = uVar14 * 0x27d4eb4f + uVar52 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20);
  uVar48 = (uVar48 >> 0x1d | uVar35 * 8) ^ uVar48;
  lVar5 = (ulonglong)uVar48 * 0x9e3779f9;
  uVar35 = (uVar35 ^ uVar35 >> 0x1d) * -0x61c88607 +
           uVar48 * 0x165667b1 + (int)((ulonglong)lVar5 >> 0x20);
  (&DAT_70125c88)[iVar19 * 4] = uVar35;
  (&DAT_70125c84)[iVar19 * 4] = uVar35 ^ (uint)lVar5;
  puVar13 = DAT_70135cd4;
LAB_716d9240:
  iVar19 = iVar19 + 1;
  if (iVar19 == 0x1000) goto LAB_716d98dc;
  goto LAB_716d924c;
LAB_716daf64:
  uVar52 = uVar52 ^ uVar14 >> 1;
  lVar5 = (ulonglong)uVar52 * 0x27d4eb4f;
  uVar48 = (uint)lVar5;
  uVar35 = uVar14 * 0x27d4eb4f + uVar52 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20);
  uVar48 = (uVar48 >> 0x1d | uVar35 * 8) ^ uVar48;
  lVar5 = (ulonglong)uVar48 * 0x9e3779f9;
  uVar35 = (uVar35 ^ uVar35 >> 0x1d) * -0x61c88607 +
           uVar48 * 0x165667b1 + (int)((ulonglong)lVar5 >> 0x20);
  (&DAT_70125c88)[iVar19 * 4] = uVar35;
  (&DAT_70125c84)[iVar19 * 4] = uVar35 ^ (uint)lVar5;
  puVar13 = DAT_70135cd4;
LAB_716dafdc:
  iVar19 = iVar19 + 1;
  if (iVar19 == 0x1000) goto LAB_716db618;
  goto LAB_716dafe8;
LAB_716db618:
  DAT_70135cd4 = (uint *)0x0;
  DAT_70135cd0 = (uint *)0xffffffff;
  goto LAB_716db638;
}


// Function: FUN_716de23c @ 0x716de23c (size=372)

void FUN_716de23c(void)

{
  undefined4 *puVar1;
  
  FUN_71370744();
  DAT_700c861c = *DAT_71201884 + DAT_71201880 | 1;
  DAT_71201884 = DAT_71201884 + 1;
  *DAT_7120188c = FUN_716dd640;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8620 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &DAT_716dd6d4;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8624 = *DAT_71201884 + DAT_71201880;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716dd7a0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716dd834;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716ddbb4;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716dddb8;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// Function: FUN_716deec8 @ 0x716deec8 (size=1136)

/* WARNING: Removing unreachable block (ram,0x716defd8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_716deec8(void)

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
  uStack_40 = 0xa6;
  uStack_48 = 0x5f;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xab88bd >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0xbc;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xab88bd;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccabfa) >> 2 ^ 0xacad0b;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0xbc;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(undefined **)((auStack_50[0] ^ 0xccff7d) + DAT_7120187c) = &DAT_70b46f40;
  DAT_700c862c = *DAT_71201884 + DAT_71201880 | 1;
  DAT_71201884 = DAT_71201884 + 1;
  *DAT_7120188c = FUN_716de714;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8628 = *DAT_71201884 + DAT_71201880;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716de584;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716de924;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716de9d4;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716deadc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716dea28;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716dea80;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8630 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716deb34;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8634 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716dec10;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8638 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716ded00;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  if (_ext___stack_chk_guard == iVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// Function: FUN_716df70c @ 0x716df70c (size=284)

void FUN_716df70c(void)

{
  FUN_712f1b5c(&DAT_70b2e804,0);
  FUN_7165b750();
  FUN_716e5f64();
  FUN_716cbfd0();
  FUN_716ab9c8();
  FUN_71716be8();
  FUN_716deec8();
  FUN_716fe884();
  FUN_716de23c();
  FUN_716e82f0();
  FUN_716f84a0();
  FUN_716edd38();
  FUN_716fa1f4();
  FUN_716ab29c();
  FUN_71728b80();
  FUN_7171e630();
  FUN_717165a0();
  FUN_71719d08();
  FUN_716fb7f4();
  FUN_716bda84();
  FUN_71663220();
  FUN_7165c8dc();
  FUN_7165f958();
  FUN_716b9124();
  FUN_71662840();
  FUN_7172c914();
  FUN_71700300();
  FUN_71700580();
  FUN_71700b1c();
  FUN_71701034();
  FUN_7170147c();
  FUN_717015fc();
  FUN_71702014();
  FUN_7170241c();
  FUN_717024d0();
  FUN_7170390c();
  FUN_71704fcc();
  FUN_717010e8();
  FUN_717089fc();
  FUN_71708ed8();
  FUN_7170c1d4();
  FUN_7170c98c();
  FUN_71708cf4();
  FUN_7170ca40();
  FUN_7170cb7c();
  FUN_7170d4dc();
  FUN_7170da8c();
  FUN_7170f3b4();
  FUN_7170fb90();
  FUN_71710a24();
  FUN_71711a2c();
  FUN_71712d80();
  FUN_7171320c();
  FUN_717007c4();
  FUN_71713674();
  FUN_7171376c();
  FUN_717154c8();
  FUN_71715694();
  FUN_717158ec();
  FUN_716ff644();
  FUN_71701f60();
  FUN_712f1b5c(&DAT_70b2e804,1);
  return;
}


// Function: Java_com_native_Main_touchEvent @ 0x716e4968 (size=16)

void Java_com_native_Main_touchEvent
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  thunk_RRPALJeaSXMvjIoKM(param_3,param_4,param_5,param_6);
  return;
}


// Function: Java_com_native_Main_appEvent @ 0x716e4d6c (size=276)

void Java_com_native_Main_appEvent(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  bool bVar8;
  
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_711f414c);
  iVar3 = DAT_711f4140;
  if (DAT_711f4144 < DAT_711f4148) {
    puVar6 = DAT_711f4144 + 1;
    *DAT_711f4144 = param_3;
  }
  else {
    iVar7 = (int)DAT_711f4144 - DAT_711f4140;
    iVar1 = iVar7 >> 2;
    uVar5 = iVar1 + 1;
    if (0x3fffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_714f2b1c(&DAT_711f4140);
    }
    uVar2 = (int)DAT_711f4148 - DAT_711f4140 >> 1;
    if (uVar5 < uVar2) {
      uVar5 = uVar2;
    }
    if (0x7ffffffb < (uint)((int)DAT_711f4148 - DAT_711f4140)) {
      uVar5 = 0x3fffffff;
    }
    if (uVar5 == 0) {
      iVar4 = 0;
    }
    else {
      if (0x3fffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_712f6cf0();
      }
      iVar4 = thunk_MwhHq(uVar5 << 2);
    }
    puVar6 = (uint *)(iVar4 + iVar1 * 4);
    *puVar6 = param_3;
    imp___aeabi_memcpy4(iVar4,iVar3,iVar7);
    DAT_711f4148 = (uint *)(iVar4 + uVar5 * 4);
    puVar6 = puVar6 + 1;
    DAT_711f4140 = iVar4;
    if (iVar3 != 0) {
      DAT_711f4144 = puVar6;
      thunk_qNQrlu(iVar3);
    }
  }
  DAT_711f4144 = puVar6;
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_711f414c);
  if ((param_3 < 10) && ((1 << (param_3 & 0xff) & 0x301U) != 0)) {
    thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_710eb1c0);
    bVar8 = 0xfffffffe < DAT_710eb1c8;
    DAT_710eb1c8 = DAT_710eb1c8 + 1;
    DAT_710eb1cc = DAT_710eb1cc + (uint)bVar8;
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_710eb1c0);
    thunk_KmAAJrQeDYcikipjnSTRnrUxnxfqYglsjaMkPyhpSaUedr(&DAT_710eb1c4);
    return;
  }
  return;
}


// Function: Java_com_native_Main_windowSize @ 0x716e5018 (size=24)

void Java_com_native_Main_windowSize
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  DAT_711f6bec = param_3;
  DAT_711f6bf0 = param_4;
  return;
}


// Function: FUN_716e5f64 @ 0x716e5f64 (size=272)

void FUN_716e5f64(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_70ffc9a4;
  *DAT_70ffc9a4 = DAT_711f6bec;
  puVar1[1] = DAT_711f6bf0;
  *DAT_710eb1b4 = 0;
  imp___aeabi_memset(&DAT_711f4169,0xffc,0x5a);
  DAT_711f4165 = &DAT_711f4165;
  DAT_711f417d = FUN_716e3f8c;
  *DAT_7120188c = &DAT_716e57ac;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716e4234;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716e5460;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716e4278;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// Function: FUN_716e82f0 @ 0x716e82f0 (size=72)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_716e82f0(void)

{
  DAT_711f5194 = 0;
  _DAT_711f5178 = 0;
  _DAT_711f517c = 0;
  DAT_711f5180 = 0;
  DAT_711f5184 = 0;
  DAT_711f5188 = 0;
  DAT_711f518c = 0;
  DAT_711f5190 = 0;
  DAT_711f6981 = 0;
  DAT_711f6980 = 0;
  return;
}


// Function: FUN_716edd38 @ 0x716edd38 (size=1992)

void FUN_716edd38(void)

{
  undefined4 *puVar1;
  
  DAT_700c88ec = *DAT_71201884 + DAT_71201880 | 1;
  DAT_71201884 = DAT_71201884 + 1;
  *DAT_7120188c = &LAB_716e8f5c;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c88f0 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716e8ff0;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c88f4 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716e9164;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c88f8 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716e92d8;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c88fc = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716e94b4;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8900 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716e94e8;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8904 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716e9650;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8908 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716e97b8;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c890c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ea058;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8910 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ea50c;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8914 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ea860;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8918 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716eb1a0;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c891c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716ebb88;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8920 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716ebc00;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8924 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ebe04;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8928 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ebf7c;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c892c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ec0fc;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8930 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ec27c;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8934 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716ec3e0;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8938 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716ec54c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716ecf80;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c893c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716ed430;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ed90c;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8940 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ed964;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8944 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716edae4;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8948 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716edc38;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c894c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716edc58;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8950 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716edc78;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// Function: FUN_716f84a0 @ 0x716f84a0 (size=1952)

void FUN_716f84a0(void)

{
  undefined4 *puVar1;
  
  DAT_711f6998 = *DAT_71201884 + DAT_71201880 | 1;
  DAT_71201884 = DAT_71201884 + 1;
  *DAT_7120188c = &LAB_716eede4;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_711f699c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716efb48;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8a74 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716f08a8;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8a78 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716f0e2c;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8a7c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716f13dc;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8a80 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716f229c;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8a84 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716f2f9c;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8a88 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716f3c94;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8a8c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716f41ec;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8a90 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716f44bc;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8a94 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716f45f4;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8a98 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716f4b20;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8a9c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716f504c;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8aa0 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716f56bc;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8aa4 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716f5948;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8aa8 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716f6198;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8aac = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716f68d4;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8ab0 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716f7178;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8ab4 = *DAT_71201884 + DAT_71201880;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716f78dc;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8ab8 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716f79d0;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8abc = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716f7bd8;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8ac0 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716f7cf4;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716f7d3c;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8ac4 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716f7dc0;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8ac8 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716f7df4;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8acc = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716f814c;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8ad0 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716f8418;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// Function: FUN_716fa1f4 @ 0x716fa1f4 (size=724)

void FUN_716fa1f4(void)

{
  undefined4 *puVar1;
  
  *DAT_7120188c = FUN_716f9a98;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8df4 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716f9878;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8df8 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716f9988;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8e00 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716f9c08;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8e10 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716fa130;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8dfc = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716f9b74;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8e04 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716f9c6c;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8e08 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716f9ce4;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8e0c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716f9eec;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716f9f84;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716f9f84;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// Function: FUN_716fb7f4 @ 0x716fb7f4 (size=500)

void FUN_716fb7f4(void)

{
  undefined4 *puVar1;
  
  *DAT_7120188c = FUN_716fac60;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &DAT_716fabf0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716fac28;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716fb1e8;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x457a0000;
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
  *puVar1 = 0xc57a0000;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8e18 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &DAT_716fb1ac;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8e14 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716fae2c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716fb220;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// Function: FUN_716fe884 @ 0x716fe884 (size=1832)

void FUN_716fe884(void)

{
  undefined4 *puVar1;
  
  DAT_700c8e70 = *DAT_71201884 + DAT_71201880 | 1;
  DAT_71201884 = DAT_71201884 + 1;
  *DAT_7120188c = FUN_716fd170;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716fc0c8;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8e60 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716fc83c;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8e5c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716fc7f8;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8e68 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716fca0c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716fca7c;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8e64 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716fc964;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  *DAT_70ffc984 = 1;
  *DAT_7120188c = FUN_716fcf14;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716fd0d8;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8e74 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716fd690;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716fd704;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716fd704;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716fd704;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716fd704;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716fd704;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716fd704;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716fd704;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716fd704;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ff5a4;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ff5a4;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8e78 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716fd75c;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8e7c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716fd80c;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8e80 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716fd8bc;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8e84 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716fd980;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8e6c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716fd100;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8e88 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716fda38;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8e94 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716fe258;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716fe754;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8e98 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716fe380;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716fe504;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716fe504;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716fe638;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8e8c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716fe088;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8e90 = *DAT_71201884 + DAT_71201880;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716fe1c4;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71454734;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// Function: FUN_716ff644 @ 0x716ff644 (size=2440)

/* WARNING: Removing unreachable block (ram,0x716ffcec) */
/* WARNING: Removing unreachable block (ram,0x716ff92c) */
/* WARNING: Removing unreachable block (ram,0x716ffb20) */
/* WARNING: Removing unreachable block (ram,0x716ffebc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_716ff644(void)

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
  *DAT_7120188c = FUN_71467a0c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7146aaf0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7146b664;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &DAT_71468cb4;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_714689dc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_71464c60;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7146cd3c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7146d5b8;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7146a7e0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7146a720;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71467e50;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_714650b4;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xab9b8b >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x3e;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
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
  *(undefined4 **)((auStack_50[0] ^ 0xccffff) + DAT_7120187c) = &DAT_7100e1cc;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xab8714 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x40;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
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
  *(undefined4 **)((auStack_50[0] ^ 0xccfff8) + DAT_7120187c) = &DAT_7100d22c;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xab747d >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x42;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x42;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(undefined4 **)((auStack_50[0] ^ 0xccfff9) + DAT_7120187c) = &DAT_7100cf0c;
  uStack_48 = 0xd8;
  uStack_44 = 0;
  uStack_3c = 0;
  uStack_34 = 0x26d5d038;
  puStack_38 = &LAB_49abac16;
  uStack_40 = 0x2e;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xab94da >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x44;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xab94da;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccabf5) >> 2 ^ 0xacad84;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x44;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  uVar3 = 0x2e;
  do {
    iVar4 = (int)(char)bStack_51;
    bStack_51 = bStack_51 + 1;
    uVar3 = uVar3 ^ (iVar4 + 0xccaaff) - uVar3 ^ 0xd8;
  } while (bStack_51 < 8);
  *(undefined4 **)((auStack_50[0] ^ 0xccfffa) + DAT_7120187c) = &DAT_7100d164;
  if (_ext___stack_chk_guard == iVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail(iVar2,_ext___stack_chk_guard,uVar3,0);
}


// Function: FUN_71700300 @ 0x71700300 (size=296)

void FUN_71700300(void)

{
  undefined4 *puVar1;
  
  *DAT_710eb188 = 0;
  *DAT_7120188c = FUN_714b5e7c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_714b5f6c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_714b603c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_714b6104;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_714b7808;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_714b61d8;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_714b73b8;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// Function: FUN_71700580 @ 0x71700580 (size=60)

void FUN_71700580(void)

{
  *DAT_7120188c = &DAT_71700634;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// Function: FUN_717007c4 @ 0x717007c4 (size=336)

void FUN_717007c4(void)

{
  undefined4 *puVar1;
  
  *DAT_7120188c = &DAT_71700aac;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_71700ae4;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8ec0 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_717006c8;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8ec4 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71700748;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8ebc = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7170066c;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// Function: FUN_71700b1c @ 0x71700b1c (size=836)

/* WARNING: Removing unreachable block (ram,0x71700c2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71700b1c(void)

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
  uStack_40 = 0x1e;
  uStack_48 = 199;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xab66dd >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x34;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xab66dd;
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
  *(undefined1 **)((auStack_50[0] ^ 0xccffe5) + DAT_7120187c) = &DAT_70b2fdc0;
  *DAT_7120188c = FUN_7132634c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_713273d8;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_713274b8;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_71327738;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_713277c0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71327804;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_71327918;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  if (_ext___stack_chk_guard == iVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// Function: FUN_71701034 @ 0x71701034 (size=60)

void FUN_71701034(void)

{
  *DAT_7120188c = FUN_71322c04;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// Function: FUN_717010e8 @ 0x717010e8 (size=240)

void FUN_717010e8(void)

{
  undefined4 *puVar1;
  
  *DAT_7120188c = &LAB_717012f0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_71701328;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_71701374;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_717013c0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &DAT_7170140c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &DAT_71701444;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// Function: FUN_7170147c @ 0x7170147c (size=168)

void FUN_7170147c(void)

{
  undefined4 *puVar1;
  
  *DAT_7120188c = FUN_71339d10;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_713284f0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7132fa58;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71334c20;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// Function: FUN_717015fc @ 0x717015fc (size=96)

void FUN_717015fc(void)

{
  undefined4 *puVar1;
  
  *DAT_7120188c = FUN_713cf2a4;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_713ce7dc;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// Function: FUN_71701f60 @ 0x71701f60 (size=60)

void FUN_71701f60(void)

{
  *DAT_7120188c = FUN_71701a54;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// Function: FUN_71702014 @ 0x71702014 (size=692)

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


// Function: FUN_7170241c @ 0x7170241c (size=60)

void FUN_7170241c(void)

{
  *DAT_7120188c = FUN_713d48b0;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// Function: FUN_717024d0 @ 0x717024d0 (size=620)

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


// Function: FUN_7170390c @ 0x7170390c (size=1732)

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


// Function: FUN_71704fcc @ 0x71704fcc (size=13788)

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


// Function: FUN_717089fc @ 0x717089fc (size=204)

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


// Function: FUN_71708cf4 @ 0x71708cf4 (size=132)

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


// Function: FUN_71708ed8 @ 0x71708ed8 (size=60)

void FUN_71708ed8(void)

{
  *DAT_7120188c = &LAB_713c3a6c;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// Function: FUN_7170c1d4 @ 0x7170c1d4 (size=348)

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


// Function: FUN_7170c98c @ 0x7170c98c (size=60)

void FUN_7170c98c(void)

{
  *DAT_7120188c = &DAT_713c4f30;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// Function: FUN_7170ca40 @ 0x7170ca40 (size=60)

void FUN_7170ca40(void)

{
  *DAT_7120188c = FUN_71348b54;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// Function: FUN_7170cb7c @ 0x7170cb7c (size=1580)

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


// Function: FUN_7170d4dc @ 0x7170d4dc (size=924)

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


// Function: FUN_7170da8c @ 0x7170da8c (size=1952)

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


// Function: FUN_7170f3b4 @ 0x7170f3b4 (size=1240)

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


// Function: FUN_7170fb90 @ 0x7170fb90 (size=964)

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


// Function: FUN_71710a24 @ 0x71710a24 (size=1236)

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


// Function: FUN_71711a2c @ 0x71711a2c (size=824)

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


// Function: FUN_71712d80 @ 0x71712d80 (size=760)

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


// Function: FUN_7171320c @ 0x7171320c (size=384)

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


// Function: FUN_71713674 @ 0x71713674 (size=60)

void FUN_71713674(void)

{
  *DAT_7120188c = &LAB_71713728;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// Function: FUN_7171376c @ 0x7171376c (size=6564)

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


// Function: FUN_717154c8 @ 0x717154c8 (size=96)

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


// Function: FUN_71715694 @ 0x71715694 (size=148)

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


// Function: FUN_717158ec @ 0x717158ec (size=2260)

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


// Function: FUN_717165a0 @ 0x717165a0 (size=764)

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


// Function: FUN_71716be8 @ 0x71716be8 (size=96)

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


// Function: FUN_71719d08 @ 0x71719d08 (size=552)

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


// Function: FUN_7171e630 @ 0x7171e630 (size=2108)

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


// Function: FUN_71728b80 @ 0x71728b80 (size=1512)

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


// Function: FUN_7172c914 @ 0x7172c914 (size=7800)

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


// Function: Java_com_native_Main_setSinglePlayer @ 0x71732220 (size=36)

void Java_com_native_Main_setSinglePlayer(void)

{
  DAT_711f6bf8 = 1;
  return;
}


// Function: Java_com_native_Main_load @ 0x71739bbc (size=740)

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


// Function: Java_com_native_Main_preInit @ 0x7173a170 (size=128)

void Java_com_native_Main_preInit(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  DAT_711f6c2e = 0;
  uVar1 = thunk_MwhHq(0x84);
  DAT_71201808 = FUN_717d6cf0(uVar1,param_1,param_3);
  return;
}


// Function: Java_com_native_Main_activityDestroyed @ 0x7173a244 (size=144)

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


// Function: JNI_OnLoad @ 0x7173a2f8 (size=84)

undefined4 JNI_OnLoad(undefined4 param_1)

{
  DAT_71201870 = param_1;
  FUN_717ef11c();
  FUN_716df70c();
  return 0x10004;
}


// Function: Java_com_native_Main_hasFlutter @ 0x717d1f84 (size=40)

void Java_com_native_Main_hasFlutter(undefined4 param_1,undefined4 param_2,int param_3)

{
  DAT_7120186c = param_3 != 0;
  return;
}


// Function: FUN_717d6920 @ 0x717d6920 (size=56)

void FUN_717d6920(int *param_1)

{
  (**(code **)(*param_1 + 0x8c))();
  return;
}


// Function: FUN_717d6cf0 @ 0x717d6cf0 (size=11624)

undefined4 * FUN_717d6cf0(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char *pcVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 *puVar16;
  undefined1 *puVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  bool bVar23;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  param_1[0xf] = 0xffffffff;
  *param_1 = param_2;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[1] = 0;
  param_1[0xc] = param_1 + 0xd;
  uVar7 = (**(code **)(*param_2 + 0x54))(param_2,param_3);
  param_1[1] = uVar7;
  pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb3b8);
  if (*pcVar10 == '\0') {
    puVar16 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb3a8);
    *(undefined1 *)((int)puVar16 + 0x22) = 1;
    uVar14 = DAT_70085804;
    uVar8 = DAT_70085800;
    uVar7 = DAT_700857fc;
    *puVar16 = DAT_700857f8;
    puVar16[1] = uVar7;
    puVar16[2] = uVar8;
    puVar16[3] = uVar14;
    uVar14 = DAT_70085814;
    uVar8 = DAT_70085810;
    uVar7 = DAT_7008580c;
    puVar16[4] = DAT_70085808;
    puVar16[5] = uVar7;
    puVar16[6] = uVar8;
    puVar16[7] = uVar14;
    *(undefined2 *)(puVar16 + 8) = DAT_70085818;
    GFDIUClbc_QcPNgD_wH(&LAB_717dba68,puVar16,&DAT_70b0e000);
    puVar17 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb3b8);
    *puVar17 = 1;
  }
  iVar11 = XcxSszXLPjQrEGhecEv_(&DAT_700fb3a8);
  if (*(char *)(iVar11 + 0x22) != '\0') {
    uVar15 = 0;
    uVar18 = 0;
    do {
      iVar20 = (uVar15 & 7) * 8;
      uVar21 = iVar20 - 0x20;
      bVar6 = (byte)(0x13cb311b >> iVar20) | (byte)(0x77d119b1 << ((uVar15 & 7) * -8 + 0x20 & 0xff))
      ;
      if (-1 < (int)uVar21) {
        bVar6 = (byte)(0x77d119b1 >> (uVar21 & 0xff));
      }
      *(byte *)(iVar11 + uVar15) = *(byte *)(iVar11 + uVar15) ^ bVar6;
      bVar23 = 0xfffffffe < uVar15;
      bVar1 = uVar18 == 0;
      bVar2 = (0x20 < uVar15) <= uVar18;
      uVar15 = uVar15 + 1;
      uVar18 = uVar18 + bVar23;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar11 + 0x22) = 0;
  }
  uVar7 = (**(code **)(*param_2 + 0x18))(param_2);
  pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb3d8);
  if (*pcVar10 == '\0') {
    puVar16 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb3c8);
    *(undefined1 *)(puVar16 + 3) = 1;
    *puVar16 = 0x74aa541e;
    puVar16[1] = 0x61cbbe9c;
    puVar16[2] = 0x11b55b16;
    GFDIUClbc_QcPNgD_wH(&LAB_717dbab8,puVar16,&DAT_70b0e000);
    puVar17 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb3d8);
    *puVar17 = 1;
  }
  pbVar12 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fb3c8);
  if (pbVar12[0xc] != 0) {
    *pbVar12 = *pbVar12 ^ 0x73;
    pbVar12[1] = pbVar12[1] ^ 0x35;
    pbVar12[2] = pbVar12[2] ^ 0xc1;
    pbVar12[3] = pbVar12[3] ^ 0x11;
    pbVar12[0xc] = 0;
    pbVar12[4] = pbVar12[4] ^ 0xdf;
    pbVar12[5] = pbVar12[5] ^ 0xcb;
    pbVar12[6] = pbVar12[6] ^ 0xb9;
    pbVar12[7] = pbVar12[7] ^ 0x13;
    pbVar12[8] = pbVar12[8] ^ 0x73;
    pbVar12[9] = pbVar12[9] ^ 0x35;
    pbVar12[10] = pbVar12[10] ^ 0xc1;
    pbVar12[0xb] = pbVar12[0xb] ^ 0x11;
  }
  pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb3f8);
  if (*pcVar10 == '\0') {
    puVar16 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb3e8);
    *puVar16 = 0x119b1c5b;
    *(undefined1 *)(puVar16 + 1) = 1;
    GFDIUClbc_QcPNgD_wH(&LAB_717dbae4,puVar16,&DAT_70b0e000);
    puVar17 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb3f8);
    *puVar17 = 1;
  }
  pbVar13 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fb3e8);
  if (pbVar13[4] != 0) {
    pbVar13[4] = 0;
    *pbVar13 = *pbVar13 ^ 0x73;
    pbVar13[1] = pbVar13[1] ^ 0x35;
    pbVar13[2] = pbVar13[2] ^ 0xc1;
    pbVar13[3] = pbVar13[3] ^ 0x11;
  }
  uVar8 = (**(code **)(*param_2 + 0x84))(param_2,uVar7,pbVar12);
  param_1[3] = uVar8;
  pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb418);
  if (*pcVar10 == '\0') {
    puVar16 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb408);
    *puVar16 = 0x7c8627e6;
    puVar16[1] = 0x52d42a22;
    puVar16[2] = 0x73ae3be1;
    *(undefined1 *)((int)puVar16 + 0xe) = 1;
    *(undefined2 *)(puVar16 + 3) = 0x4f3d;
    GFDIUClbc_QcPNgD_wH(&LAB_717dbb08,puVar16,&DAT_70b0e000);
    puVar17 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb418);
    *puVar17 = 1;
  }
  pbVar12 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fb408);
  if (pbVar12[0xe] != 0) {
    *pbVar12 = *pbVar12 ^ 0x93;
    pbVar12[1] = pbVar12[1] ^ 0x49;
    pbVar12[2] = pbVar12[2] ^ 0xcb;
    pbVar12[3] = pbVar12[3] ^ 0x1d;
    pbVar12[0xe] = 0;
    pbVar12[4] = pbVar12[4] ^ 0x49;
    pbVar12[5] = pbVar12[5] ^ 0x4f;
    pbVar12[6] = pbVar12[6] ^ 0x97;
    pbVar12[7] = pbVar12[7] ^ 0x27;
    pbVar12[8] = pbVar12[8] ^ 0x93;
    pbVar12[9] = pbVar12[9] ^ 0x49;
    pbVar12[10] = pbVar12[10] ^ 0xcb;
    pbVar12[0xb] = pbVar12[0xb] ^ 0x1d;
    pbVar12[0xc] = pbVar12[0xc] ^ 0x49;
    pbVar12[0xd] = pbVar12[0xd] ^ 0x4f;
  }
  pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb438);
  if (*pcVar10 == '\0') {
    puVar16 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb428);
    *puVar16 = 0x1d9160bb;
    *(undefined1 *)(puVar16 + 1) = 1;
    GFDIUClbc_QcPNgD_wH(&LAB_717dbb38,puVar16,&DAT_70b0e000);
    puVar17 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb438);
    *puVar17 = 1;
  }
  pbVar13 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fb428);
  if (pbVar13[4] != 0) {
    pbVar13[4] = 0;
    *pbVar13 = *pbVar13 ^ 0x93;
    pbVar13[1] = pbVar13[1] ^ 0x49;
    pbVar13[2] = pbVar13[2] ^ 0xcb;
    pbVar13[3] = pbVar13[3] ^ 0x1d;
  }
  uVar8 = (**(code **)(*param_2 + 0x84))(param_2,uVar7,pbVar12);
  param_1[4] = uVar8;
  pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb458);
  if (*pcVar10 == '\0') {
    puVar16 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb448);
    *(undefined1 *)(puVar16 + 3) = 1;
    *puVar16 = 0xcbb6ca56;
    puVar16[1] = 0x9d2936a7;
    puVar16[2] = 0xbba4cf40;
    GFDIUClbc_QcPNgD_wH(&LAB_717dbb5c,puVar16,&DAT_70b0e000);
    puVar17 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb458);
    *puVar17 = 1;
  }
  pbVar12 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fb448);
  if (pbVar12[0xc] != 0) {
    *pbVar12 = *pbVar12 ^ 0x25;
    pbVar12[1] = pbVar12[1] ^ 0xbd;
    pbVar12[2] = pbVar12[2] ^ 0xd7;
    pbVar12[3] = pbVar12[3] ^ 0xbb;
    pbVar12[0xc] = 0;
    pbVar12[4] = pbVar12[4] ^ 0xe5;
    pbVar12[5] = pbVar12[5] ^ 0x43;
    pbVar12[6] = pbVar12[6] ^ 0x4f;
    pbVar12[7] = pbVar12[7] ^ 0xfb;
    pbVar12[8] = pbVar12[8] ^ 0x25;
    pbVar12[9] = pbVar12[9] ^ 0xbd;
    pbVar12[10] = pbVar12[10] ^ 0xd7;
    pbVar12[0xb] = pbVar12[0xb] ^ 0xbb;
  }
  pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb478);
  if (*pcVar10 == '\0') {
    puVar16 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb468);
    *puVar16 = 0xbb8d940d;
    *(undefined1 *)(puVar16 + 1) = 1;
    GFDIUClbc_QcPNgD_wH(&LAB_717dbb88,puVar16,&DAT_70b0e000);
    puVar17 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb478);
    *puVar17 = 1;
  }
  pbVar13 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fb468);
  if (pbVar13[4] != 0) {
    pbVar13[4] = 0;
    *pbVar13 = *pbVar13 ^ 0x25;
    pbVar13[1] = pbVar13[1] ^ 0xbd;
    pbVar13[2] = pbVar13[2] ^ 0xd7;
    pbVar13[3] = pbVar13[3] ^ 0xbb;
  }
  uVar8 = (**(code **)(*param_2 + 0x84))(param_2,uVar7,pbVar12);
  param_1[5] = uVar8;
  pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb498);
  if (*pcVar10 == '\0') {
    puVar16 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb488);
    *puVar16 = 0xa14f5658;
    puVar16[1] = 0xe62c5adf;
    puVar16[2] = 0x8e565a73;
    *(undefined1 *)((int)puVar16 + 0xe) = 1;
    *(undefined2 *)(puVar16 + 3) = 0x3bd9;
    GFDIUClbc_QcPNgD_wH(&LAB_717dbbac,puVar16,&DAT_70b0e000);
    puVar17 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb498);
    *puVar17 = 1;
  }
  pbVar12 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fb488);
  if (pbVar12[0xe] != 0) {
    *pbVar12 = *pbVar12 ^ 0x3f;
    pbVar12[1] = pbVar12[1] ^ 0x33;
    pbVar12[2] = pbVar12[2] ^ 0x3b;
    pbVar12[3] = pbVar12[3] ^ 0xe7;
    pbVar12[0xe] = 0;
    pbVar12[4] = pbVar12[4] ^ 0xad;
    pbVar12[5] = pbVar12[5] ^ 0x3b;
    pbVar12[6] = pbVar12[6] ^ 0x41;
    pbVar12[7] = pbVar12[7] ^ 0x83;
    pbVar12[8] = pbVar12[8] ^ 0x3f;
    pbVar12[9] = pbVar12[9] ^ 0x33;
    pbVar12[10] = pbVar12[10] ^ 0x3b;
    pbVar12[0xb] = pbVar12[0xb] ^ 0xe7;
    pbVar12[0xc] = pbVar12[0xc] ^ 0xad;
    pbVar12[0xd] = pbVar12[0xd] ^ 0x3b;
  }
  pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb4b8);
  if (*pcVar10 == '\0') {
    puVar16 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb4a8);
    *puVar16 = 0xe7721a17;
    *(undefined1 *)(puVar16 + 1) = 1;
    GFDIUClbc_QcPNgD_wH(&LAB_717dbbdc,puVar16,&DAT_70b0e000);
    puVar17 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb4b8);
    *puVar17 = 1;
  }
  pbVar13 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fb4a8);
  if (pbVar13[4] != 0) {
    pbVar13[4] = 0;
    *pbVar13 = *pbVar13 ^ 0x3f;
    pbVar13[1] = pbVar13[1] ^ 0x33;
    pbVar13[2] = pbVar13[2] ^ 0x3b;
    pbVar13[3] = pbVar13[3] ^ 0xe7;
  }
  uVar8 = (**(code **)(*param_2 + 0x84))(param_2,uVar7,pbVar12);
  param_1[6] = uVar8;
  pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb4d8);
  if (*pcVar10 == '\0') {
    puVar16 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb4c8);
    *puVar16 = 0x7b516c84;
    puVar16[1] = 0xda9c903d;
    puVar16[2] = 0x7b474ca3;
    *(undefined1 *)((int)puVar16 + 0xf) = 1;
    *(undefined4 *)((int)puVar16 + 0xb) = 0xcf883d7b;
    GFDIUClbc_QcPNgD_wH(&LAB_717dbc00,puVar16,&DAT_70b0e000);
    puVar17 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb4d8);
    *puVar17 = 1;
  }
  pbVar12 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fb4c8);
  if (pbVar12[0xf] != 0) {
    *pbVar12 = *pbVar12 ^ 0xd7;
    pbVar12[1] = pbVar12[1] ^ 9;
    pbVar12[2] = pbVar12[2] ^ 0x3f;
    pbVar12[3] = pbVar12[3] ^ 0xf;
    pbVar12[0xf] = 0;
    pbVar12[4] = pbVar12[4] ^ 0x4f;
    pbVar12[5] = pbVar12[5] ^ 0xe9;
    pbVar12[6] = pbVar12[6] ^ 0xcf;
    pbVar12[7] = pbVar12[7] ^ 0xbf;
    pbVar12[8] = pbVar12[8] ^ 0xd7;
    pbVar12[9] = pbVar12[9] ^ 9;
    pbVar12[10] = pbVar12[10] ^ 0x3f;
    pbVar12[0xb] = pbVar12[0xb] ^ 0xf;
    pbVar12[0xc] = pbVar12[0xc] ^ 0x4f;
    pbVar12[0xd] = pbVar12[0xd] ^ 0xe9;
    pbVar12[0xe] = pbVar12[0xe] ^ 0xcf;
  }
  pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb4f8);
  if (*pcVar10 == '\0') {
    puVar16 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb4e8);
    *(undefined1 *)(puVar16 + 10) = 1;
    uVar3 = DAT_70085830;
    uVar9 = DAT_7008582c;
    uVar14 = DAT_70085828;
    uVar8 = DAT_70085824;
    *puVar16 = DAT_70085820;
    puVar16[1] = uVar8;
    puVar16[2] = uVar14;
    puVar16[3] = uVar9;
    puVar16[4] = uVar3;
    uVar3 = DAT_70085844;
    uVar9 = DAT_70085840;
    uVar14 = DAT_7008583c;
    uVar8 = DAT_70085838;
    puVar16[5] = DAT_70085834;
    puVar16[6] = uVar8;
    puVar16[7] = uVar14;
    puVar16[8] = uVar9;
    puVar16[9] = uVar3;
    GFDIUClbc_QcPNgD_wH(&LAB_717dbc30,puVar16,&DAT_70b0e000);
    puVar17 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb4f8);
    *puVar17 = 1;
  }
  iVar11 = XcxSszXLPjQrEGhecEv_(&DAT_700fb4e8);
  if (*(char *)(iVar11 + 0x28) != '\0') {
    uVar15 = 0;
    uVar18 = 0;
    do {
      iVar20 = (uVar15 & 7) * 8;
      bVar6 = (byte)(0xf3f09d7 >> iVar20) | (byte)(-0x403016b1 << ((uVar15 & 7) * -8 + 0x20 & 0xff))
      ;
      uVar21 = iVar20 - 0x20;
      if (-1 < (int)uVar21) {
        bVar6 = (byte)(0xbfcfe94f >> (uVar21 & 0xff));
      }
      *(byte *)(iVar11 + uVar15) = *(byte *)(iVar11 + uVar15) ^ bVar6;
      bVar23 = 0xfffffffe < uVar15;
      bVar1 = uVar18 == 0;
      bVar2 = (0x26 < uVar15) <= uVar18;
      uVar15 = uVar15 + 1;
      uVar18 = uVar18 + bVar23;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar11 + 0x28) = 0;
  }
  uVar8 = (**(code **)(*param_2 + 0x84))(param_2,uVar7,pbVar12);
  param_1[7] = uVar8;
  pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb518);
  if (*pcVar10 == '\0') {
    puVar16 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb508);
    *(undefined1 *)((int)puVar16 + 0x12) = 1;
    uVar9 = DAT_70085854;
    uVar14 = DAT_70085850;
    uVar8 = DAT_7008584c;
    *puVar16 = DAT_70085848;
    puVar16[1] = uVar8;
    puVar16[2] = uVar14;
    puVar16[3] = uVar9;
    *(undefined2 *)(puVar16 + 4) = DAT_70085858;
    GFDIUClbc_QcPNgD_wH(&LAB_717dbc80,puVar16,&DAT_70b0e000);
    puVar17 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb518);
    *puVar17 = 1;
  }
  iVar11 = XcxSszXLPjQrEGhecEv_(&DAT_700fb508);
  if (*(char *)(iVar11 + 0x12) != '\0') {
    uVar15 = 0;
    uVar18 = 0;
    do {
      iVar20 = (uVar15 & 7) * 8;
      uVar21 = iVar20 - 0x20;
      bVar6 = (byte)(0x933d6703 >> iVar20) |
              (byte)(-0x369a9aff << ((uVar15 & 7) * -8 + 0x20 & 0xff));
      if (-1 < (int)uVar21) {
        bVar6 = (byte)(0xc9656501 >> (uVar21 & 0xff));
      }
      *(byte *)(iVar11 + uVar15) = *(byte *)(iVar11 + uVar15) ^ bVar6;
      bVar23 = 0xfffffffe < uVar15;
      bVar1 = uVar18 == 0;
      bVar2 = (0x10 < uVar15) <= uVar18;
      uVar15 = uVar15 + 1;
      uVar18 = uVar18 + bVar23;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar11 + 0x12) = 0;
  }
  pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb538);
  if (*pcVar10 == '\0') {
    puVar16 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb528);
    *(undefined1 *)((int)puVar16 + 0x16) = 1;
    uVar3 = DAT_70085870;
    uVar9 = DAT_7008586c;
    uVar14 = DAT_70085868;
    uVar8 = DAT_70085864;
    *puVar16 = DAT_70085860;
    puVar16[1] = uVar8;
    puVar16[2] = uVar14;
    puVar16[3] = uVar9;
    puVar16[4] = uVar3;
    *(undefined2 *)(puVar16 + 5) = DAT_70085874;
    GFDIUClbc_QcPNgD_wH(&LAB_717dbcb4,puVar16,&DAT_70b0e000);
    puVar17 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb538);
    *puVar17 = 1;
  }
  iVar20 = XcxSszXLPjQrEGhecEv_(&DAT_700fb528);
  if (*(char *)(iVar20 + 0x16) != '\0') {
    uVar15 = 0;
    uVar18 = 0;
    do {
      iVar22 = (uVar15 & 7) * 8;
      uVar21 = iVar22 - 0x20;
      bVar6 = (byte)(0x933d6703 >> iVar22) |
              (byte)(-0x369a9aff << ((uVar15 & 7) * -8 + 0x20 & 0xff));
      if (-1 < (int)uVar21) {
        bVar6 = (byte)(0xc9656501 >> (uVar21 & 0xff));
      }
      *(byte *)(iVar20 + uVar15) = *(byte *)(iVar20 + uVar15) ^ bVar6;
      bVar23 = 0xfffffffe < uVar15;
      bVar1 = uVar18 == 0;
      bVar2 = (0x14 < uVar15) <= uVar18;
      uVar15 = uVar15 + 1;
      uVar18 = uVar18 + bVar23;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar20 + 0x16) = 0;
  }
  uVar8 = (**(code **)(*param_2 + 0x84))(param_2,uVar7,iVar11);
  param_1[8] = uVar8;
  pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb558);
  if (*pcVar10 == '\0') {
    puVar16 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb548);
    *(undefined1 *)((int)puVar16 + 0x1a) = 1;
    uVar4 = DAT_7008588c;
    uVar3 = DAT_70085888;
    uVar9 = DAT_70085884;
    uVar14 = DAT_70085880;
    uVar8 = DAT_7008587c;
    *puVar16 = DAT_70085878;
    puVar16[1] = uVar8;
    puVar16[2] = uVar14;
    puVar16[3] = uVar9;
    puVar16[4] = uVar3;
    puVar16[5] = uVar4;
    *(undefined2 *)(puVar16 + 6) = DAT_70085890;
    GFDIUClbc_QcPNgD_wH(&LAB_717dbcec,puVar16,&DAT_70b0e000);
    puVar17 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb558);
    *puVar17 = 1;
  }
  iVar11 = XcxSszXLPjQrEGhecEv_(&DAT_700fb548);
  if (*(char *)(iVar11 + 0x1a) != '\0') {
    uVar15 = 0;
    uVar18 = 0;
    do {
      iVar20 = (uVar15 & 7) * 8;
      uVar21 = iVar20 - 0x20;
      bVar6 = (byte)(0xf9f30ff9 >> iVar20) | (byte)(0x196d2be5 << ((uVar15 & 7) * -8 + 0x20 & 0xff))
      ;
      if (-1 < (int)uVar21) {
        bVar6 = (byte)(0x196d2be5 >> (uVar21 & 0xff));
      }
      *(byte *)(iVar11 + uVar15) = *(byte *)(iVar11 + uVar15) ^ bVar6;
      bVar23 = 0xfffffffe < uVar15;
      bVar1 = uVar18 == 0;
      bVar2 = (0x18 < uVar15) <= uVar18;
      uVar15 = uVar15 + 1;
      uVar18 = uVar18 + bVar23;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar11 + 0x1a) = 0;
  }
  pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb578);
  if (*pcVar10 == '\0') {
    puVar16 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb568);
    *(undefined1 *)(puVar16 + 10) = 1;
    uVar3 = DAT_700858a8;
    uVar9 = DAT_700858a4;
    uVar14 = DAT_700858a0;
    uVar8 = DAT_7008589c;
    *puVar16 = DAT_70085898;
    puVar16[1] = uVar8;
    puVar16[2] = uVar14;
    puVar16[3] = uVar9;
    puVar16[4] = uVar3;
    uVar3 = DAT_700858bc;
    uVar9 = DAT_700858b8;
    uVar14 = DAT_700858b4;
    uVar8 = DAT_700858b0;
    puVar16[5] = DAT_700858ac;
    puVar16[6] = uVar8;
    puVar16[7] = uVar14;
    puVar16[8] = uVar9;
    puVar16[9] = uVar3;
    GFDIUClbc_QcPNgD_wH(&LAB_717dbd28,puVar16,&DAT_70b0e000);
    puVar17 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb578);
    *puVar17 = 1;
  }
  iVar20 = XcxSszXLPjQrEGhecEv_(&DAT_700fb568);
  if (*(char *)(iVar20 + 0x28) != '\0') {
    uVar15 = 0;
    uVar18 = 0;
    do {
      iVar22 = (uVar15 & 7) * 8;
      uVar21 = iVar22 - 0x20;
      bVar6 = (byte)(0xf9f30ff9 >> iVar22) | (byte)(0x196d2be5 << ((uVar15 & 7) * -8 + 0x20 & 0xff))
      ;
      if (-1 < (int)uVar21) {
        bVar6 = (byte)(0x196d2be5 >> (uVar21 & 0xff));
      }
      *(byte *)(iVar20 + uVar15) = *(byte *)(iVar20 + uVar15) ^ bVar6;
      bVar23 = 0xfffffffe < uVar15;
      bVar1 = uVar18 == 0;
      bVar2 = (0x26 < uVar15) <= uVar18;
      uVar15 = uVar15 + 1;
      uVar18 = uVar18 + bVar23;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar20 + 0x28) = 0;
  }
  uVar8 = (**(code **)(*param_2 + 0x84))(param_2,uVar7,iVar11);
  param_1[9] = uVar8;
  pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb598);
  if (*pcVar10 == '\0') {
    puVar16 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb588);
    *(undefined1 *)((int)puVar16 + 0x19) = 1;
    uVar4 = DAT_700858d4;
    uVar3 = DAT_700858d0;
    uVar9 = DAT_700858cc;
    uVar14 = DAT_700858c8;
    uVar8 = DAT_700858c4;
    *puVar16 = DAT_700858c0;
    puVar16[1] = uVar8;
    puVar16[2] = uVar14;
    puVar16[3] = uVar9;
    puVar16[4] = uVar3;
    puVar16[5] = uVar4;
    *(undefined1 *)(puVar16 + 6) = DAT_700858d8;
    GFDIUClbc_QcPNgD_wH(&LAB_717dbd78,puVar16,&DAT_70b0e000);
    puVar17 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb598);
    *puVar17 = 1;
  }
  iVar11 = XcxSszXLPjQrEGhecEv_(&DAT_700fb588);
  if (*(char *)(iVar11 + 0x19) != '\0') {
    uVar15 = 0;
    uVar18 = 0;
    do {
      iVar20 = (uVar15 & 7) * 8;
      uVar21 = iVar20 - 0x20;
      bVar6 = (byte)(0xcf27f13b >> iVar20) | (byte)(0x359d6f5d << ((uVar15 & 7) * -8 + 0x20 & 0xff))
      ;
      if (-1 < (int)uVar21) {
        bVar6 = (byte)(0x359d6f5d >> (uVar21 & 0xff));
      }
      *(byte *)(iVar11 + uVar15) = *(byte *)(iVar11 + uVar15) ^ bVar6;
      bVar23 = 0xfffffffe < uVar15;
      bVar1 = uVar18 == 0;
      bVar2 = (0x17 < uVar15) <= uVar18;
      uVar15 = uVar15 + 1;
      uVar18 = uVar18 + bVar23;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar11 + 0x19) = 0;
  }
  pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb5b8);
  if (*pcVar10 == '\0') {
    puVar16 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb5a8);
    *(undefined1 *)(puVar16 + 10) = 1;
    uVar3 = DAT_700858f0;
    uVar9 = DAT_700858ec;
    uVar14 = DAT_700858e8;
    uVar8 = DAT_700858e4;
    *puVar16 = DAT_700858e0;
    puVar16[1] = uVar8;
    puVar16[2] = uVar14;
    puVar16[3] = uVar9;
    puVar16[4] = uVar3;
    uVar3 = DAT_70085904;
    uVar9 = DAT_70085900;
    uVar14 = DAT_700858fc;
    uVar8 = DAT_700858f8;
    puVar16[5] = DAT_700858f4;
    puVar16[6] = uVar8;
    puVar16[7] = uVar14;
    puVar16[8] = uVar9;
    puVar16[9] = uVar3;
    GFDIUClbc_QcPNgD_wH(&LAB_717dbdb4,puVar16,&DAT_70b0e000);
    puVar17 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb5b8);
    *puVar17 = 1;
  }
  iVar20 = XcxSszXLPjQrEGhecEv_(&DAT_700fb5a8);
  if (*(char *)(iVar20 + 0x28) != '\0') {
    uVar15 = 0;
    uVar18 = 0;
    do {
      iVar22 = (uVar15 & 7) * 8;
      uVar21 = iVar22 - 0x20;
      bVar6 = (byte)(0xcf27f13b >> iVar22) | (byte)(0x359d6f5d << ((uVar15 & 7) * -8 + 0x20 & 0xff))
      ;
      if (-1 < (int)uVar21) {
        bVar6 = (byte)(0x359d6f5d >> (uVar21 & 0xff));
      }
      *(byte *)(iVar20 + uVar15) = *(byte *)(iVar20 + uVar15) ^ bVar6;
      bVar23 = 0xfffffffe < uVar15;
      bVar1 = uVar18 == 0;
      bVar2 = (0x26 < uVar15) <= uVar18;
      uVar15 = uVar15 + 1;
      uVar18 = uVar18 + bVar23;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar20 + 0x28) = 0;
  }
  uVar8 = (**(code **)(*param_2 + 0x84))(param_2,uVar7,iVar11);
  param_1[10] = uVar8;
  pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb5d8);
  if (*pcVar10 == '\0') {
    puVar16 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb5c8);
    *(undefined1 *)((int)puVar16 + 0x19) = 1;
    uVar4 = DAT_7008591c;
    uVar3 = DAT_70085918;
    uVar9 = DAT_70085914;
    uVar14 = DAT_70085910;
    uVar8 = DAT_7008590c;
    *puVar16 = DAT_70085908;
    puVar16[1] = uVar8;
    puVar16[2] = uVar14;
    puVar16[3] = uVar9;
    puVar16[4] = uVar3;
    puVar16[5] = uVar4;
    *(undefined1 *)(puVar16 + 6) = DAT_70085920;
    GFDIUClbc_QcPNgD_wH(&LAB_717dbe04,puVar16,&DAT_70b0e000);
    puVar17 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb5d8);
    *puVar17 = 1;
  }
  iVar11 = XcxSszXLPjQrEGhecEv_(&DAT_700fb5c8);
  if (*(char *)(iVar11 + 0x19) != '\0') {
    uVar15 = 0;
    uVar18 = 0;
    do {
      iVar20 = (uVar15 & 7) * 8;
      uVar21 = iVar20 - 0x20;
      bVar6 = (byte)(0x67e17d33 >> iVar20) |
              (byte)(-0x2ac46e71 << ((uVar15 & 7) * -8 + 0x20 & 0xff));
      if (-1 < (int)uVar21) {
        bVar6 = (byte)(0xd53b918f >> (uVar21 & 0xff));
      }
      *(byte *)(iVar11 + uVar15) = *(byte *)(iVar11 + uVar15) ^ bVar6;
      bVar23 = 0xfffffffe < uVar15;
      bVar1 = uVar18 == 0;
      bVar2 = (0x17 < uVar15) <= uVar18;
      uVar15 = uVar15 + 1;
      uVar18 = uVar18 + bVar23;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar11 + 0x19) = 0;
  }
  pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb5f8);
  if (*pcVar10 == '\0') {
    puVar16 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb5e8);
    *(undefined1 *)(puVar16 + 10) = 1;
    uVar3 = DAT_70085938;
    uVar9 = DAT_70085934;
    uVar14 = DAT_70085930;
    uVar8 = DAT_7008592c;
    *puVar16 = DAT_70085928;
    puVar16[1] = uVar8;
    puVar16[2] = uVar14;
    puVar16[3] = uVar9;
    puVar16[4] = uVar3;
    uVar3 = DAT_7008594c;
    uVar9 = DAT_70085948;
    uVar14 = DAT_70085944;
    uVar8 = DAT_70085940;
    puVar16[5] = DAT_7008593c;
    puVar16[6] = uVar8;
    puVar16[7] = uVar14;
    puVar16[8] = uVar9;
    puVar16[9] = uVar3;
    GFDIUClbc_QcPNgD_wH(&LAB_717dbe40,puVar16,&DAT_70b0e000);
    puVar17 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb5f8);
    *puVar17 = 1;
  }
  iVar20 = XcxSszXLPjQrEGhecEv_(&DAT_700fb5e8);
  if (*(char *)(iVar20 + 0x28) != '\0') {
    uVar15 = 0;
    uVar18 = 0;
    do {
      iVar22 = (uVar15 & 7) * 8;
      uVar21 = iVar22 - 0x20;
      bVar6 = (byte)(0x67e17d33 >> iVar22) |
              (byte)(-0x2ac46e71 << ((uVar15 & 7) * -8 + 0x20 & 0xff));
      if (-1 < (int)uVar21) {
        bVar6 = (byte)(0xd53b918f >> (uVar21 & 0xff));
      }
      *(byte *)(iVar20 + uVar15) = *(byte *)(iVar20 + uVar15) ^ bVar6;
      bVar23 = 0xfffffffe < uVar15;
      bVar1 = uVar18 == 0;
      bVar2 = (0x26 < uVar15) <= uVar18;
      uVar15 = uVar15 + 1;
      uVar18 = uVar18 + bVar23;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar20 + 0x28) = 0;
  }
  uVar7 = (**(code **)(*param_2 + 0x84))(param_2,uVar7,iVar11);
  param_1[0xb] = uVar7;
  uVar7 = (**(code **)(*param_2 + 0x7c))(param_2,param_3);
  pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb618);
  if (*pcVar10 == '\0') {
    puVar16 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb608);
    *(undefined2 *)(puVar16 + 3) = 0x1e9;
    *puVar16 = 0x7f776aa2;
    puVar16[1] = 0xafcd48c;
    puVar16[2] = 0x5e666cb7;
    GFDIUClbc_QcPNgD_wH(&LAB_717dbe90,puVar16,&DAT_70b0e000);
    puVar17 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb618);
    *puVar17 = 1;
  }
  pbVar12 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fb608);
  if (pbVar12[0xd] != 0) {
    *pbVar12 = *pbVar12 ^ 0xc5;
    pbVar12[1] = pbVar12[1] ^ 0xf;
    pbVar12[2] = pbVar12[2] ^ 3;
    pbVar12[3] = pbVar12[3] ^ 0x2d;
    pbVar12[0xd] = 0;
    pbVar12[4] = pbVar12[4] ^ 0xe9;
    pbVar12[5] = pbVar12[5] ^ 0xa7;
    pbVar12[6] = pbVar12[6] ^ 0x93;
    pbVar12[7] = pbVar12[7] ^ 0x7f;
    pbVar12[8] = pbVar12[8] ^ 0xc5;
    pbVar12[9] = pbVar12[9] ^ 0xf;
    pbVar12[10] = pbVar12[10] ^ 3;
    pbVar12[0xb] = pbVar12[0xb] ^ 0x2d;
    pbVar12[0xc] = pbVar12[0xc] ^ 0xe9;
  }
  pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb638);
  if (*pcVar10 == '\0') {
    puVar16 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb628);
    *(undefined1 *)((int)puVar16 + 0x22) = 1;
    uVar9 = DAT_7008595c;
    uVar14 = DAT_70085958;
    uVar8 = DAT_70085954;
    *puVar16 = DAT_70085950;
    puVar16[1] = uVar8;
    puVar16[2] = uVar14;
    puVar16[3] = uVar9;
    uVar9 = DAT_7008596c;
    uVar14 = DAT_70085968;
    uVar8 = DAT_70085964;
    puVar16[4] = DAT_70085960;
    puVar16[5] = uVar8;
    puVar16[6] = uVar14;
    puVar16[7] = uVar9;
    *(undefined2 *)(puVar16 + 8) = DAT_70085970;
    GFDIUClbc_QcPNgD_wH(&LAB_717dbec0,puVar16,&DAT_70b0e000);
    puVar17 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb638);
    *puVar17 = 1;
  }
  iVar11 = XcxSszXLPjQrEGhecEv_(&DAT_700fb628);
  if (*(char *)(iVar11 + 0x22) != '\0') {
    uVar15 = 0;
    uVar18 = 0;
    do {
      iVar20 = (uVar15 & 7) * 8;
      bVar6 = (byte)(0x2d030fc5 >> iVar20) | (byte)(0x7f93a7e9 << ((uVar15 & 7) * -8 + 0x20 & 0xff))
      ;
      uVar21 = iVar20 - 0x20;
      if (-1 < (int)uVar21) {
        bVar6 = (byte)(0x7f93a7e9 >> (uVar21 & 0xff));
      }
      *(byte *)(iVar11 + uVar15) = *(byte *)(iVar11 + uVar15) ^ bVar6;
      bVar23 = 0xfffffffe < uVar15;
      bVar1 = uVar18 == 0;
      bVar2 = (0x20 < uVar15) <= uVar18;
      uVar15 = uVar15 + 1;
      uVar18 = uVar18 + bVar23;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar11 + 0x22) = 0;
  }
  uVar8 = (**(code **)(*param_2 + 0x84))(param_2,uVar7,pbVar12);
  uVar14 = FUN_717d6920(param_2,param_3,uVar8);
  uVar8 = (**(code **)(*param_2 + 0x7c))(param_2,uVar14);
  pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb658);
  if (*pcVar10 == '\0') {
    puVar16 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb648);
    *puVar16 = 0x3c319ca6;
    puVar16[1] = 0x29a2ec14;
    *(undefined1 *)((int)puVar16 + 10) = 1;
    *(undefined2 *)(puVar16 + 2) = 0xf9b2;
    GFDIUClbc_QcPNgD_wH(&LAB_717dbf10,puVar16,&DAT_70b0e000);
    puVar17 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb658);
    *puVar17 = 1;
  }
  pbVar12 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fb648);
  if (pbVar12[10] != 0) {
    *pbVar12 = *pbVar12 ^ 0xc1;
    pbVar12[1] = pbVar12[1] ^ 0xf9;
    pbVar12[2] = pbVar12[2] ^ 0x45;
    pbVar12[3] = pbVar12[3] ^ 0x7d;
    pbVar12[10] = 0;
    pbVar12[4] = pbVar12[4] ^ 0x67;
    pbVar12[5] = pbVar12[5] ^ 0x9f;
    pbVar12[6] = pbVar12[6] ^ 199;
    pbVar12[7] = pbVar12[7] ^ 0x5d;
    pbVar12[8] = pbVar12[8] ^ 0xc1;
    pbVar12[9] = pbVar12[9] ^ 0xf9;
  }
  pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb678);
  if (*pcVar10 == '\0') {
    puVar16 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb668);
    *(undefined1 *)((int)puVar16 + 0x25) = 1;
    uVar4 = DAT_70085984;
    uVar3 = DAT_70085980;
    uVar9 = DAT_7008597c;
    *puVar16 = DAT_70085978;
    puVar16[1] = uVar9;
    puVar16[2] = uVar3;
    puVar16[3] = uVar4;
    uVar5 = DAT_70085998;
    uVar4 = DAT_70085994;
    uVar3 = DAT_70085990;
    uVar9 = DAT_7008598c;
    puVar16[4] = DAT_70085988;
    puVar16[5] = uVar9;
    puVar16[6] = uVar3;
    puVar16[7] = uVar4;
    puVar16[8] = uVar5;
    *(undefined1 *)(puVar16 + 9) = DAT_7008599c;
    GFDIUClbc_QcPNgD_wH(&LAB_717dbf3c,puVar16,&DAT_70b0e000);
    puVar17 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb678);
    *puVar17 = 1;
  }
  iVar11 = XcxSszXLPjQrEGhecEv_(&DAT_700fb668);
  if (*(char *)(iVar11 + 0x25) != '\0') {
    uVar15 = 0;
    uVar18 = 0;
    do {
      iVar20 = (uVar15 & 7) * 8;
      bVar6 = (byte)(0x7d45f9c1 >> iVar20) | (byte)(0x5dc79f67 << ((uVar15 & 7) * -8 + 0x20 & 0xff))
      ;
      uVar21 = iVar20 - 0x20;
      if (-1 < (int)uVar21) {
        bVar6 = (byte)(0x5dc79f67 >> (uVar21 & 0xff));
      }
      *(byte *)(iVar11 + uVar15) = *(byte *)(iVar11 + uVar15) ^ bVar6;
      bVar23 = 0xfffffffe < uVar15;
      bVar1 = uVar18 == 0;
      bVar2 = (0x23 < uVar15) <= uVar18;
      uVar15 = uVar15 + 1;
      uVar18 = uVar18 + bVar23;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar11 + 0x25) = 0;
  }
  uVar9 = (**(code **)(*param_2 + 0x84))(param_2,uVar8,pbVar12);
  uVar9 = FUN_717d6920(param_2,uVar14,uVar9);
  uVar9 = (**(code **)(*param_2 + 0x54))(param_2,uVar9);
  uVar9 = imp_AAssetManager_fromJava(param_2,uVar9);
  param_1[2] = uVar9;
  (**(code **)(*param_2 + 0x5c))(param_2,uVar14);
  (**(code **)(*param_2 + 0x5c))(param_2,uVar7);
  (**(code **)(*param_2 + 0x5c))(param_2,uVar8);
  pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb698);
  if (*pcVar10 == '\0') {
    puVar16 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb688);
    *puVar16 = 0x1cf8d64;
    GFDIUClbc_QcPNgD_wH(&LAB_717dbf8c,puVar16,&DAT_70b0e000);
    puVar17 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb698);
    *puVar17 = 1;
  }
  pbVar12 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fb688);
  if (pbVar12[3] != 0) {
    pbVar12[3] = 0;
    *pbVar12 = *pbVar12 ^ 9;
    pbVar12[1] = pbVar12[1] ^ 0xf9;
    pbVar12[2] = pbVar12[2] ^ 0xcf;
  }
  uVar15 = imp_strlen(pbVar12);
  if (0xfffffff7 < uVar15) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_30);
  }
  if (uVar15 < 0xb) {
    uVar18 = (uint)&uStack_30 | 1;
    uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar15 << 1));
    if (uVar15 == 0) goto LAB_717d7f00;
  }
  else {
    uVar18 = thunk_MwhHq((uVar15 | 7) + 1);
    uStack_30 = (uVar15 | 7) + 2;
    uStack_2c = uVar15;
    uStack_28 = uVar18;
  }
  imp___aeabi_memmove(uVar18,pbVar12,uVar15);
LAB_717d7f00:
  *(undefined1 *)(uVar18 + uVar15) = 0;
  pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb6b8);
  if (*pcVar10 == '\0') {
    puVar16 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb6a8);
    *puVar16 = 0xc4634870;
    *(undefined2 *)(puVar16 + 1) = 0x16d;
    GFDIUClbc_QcPNgD_wH(&LAB_717dbfb4,puVar16,&DAT_70b0e000);
    puVar17 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb6b8);
    *puVar17 = 1;
  }
  pbVar12 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fb6a8);
  uVar15 = uStack_30;
  if (pbVar12[5] != 0) {
    pbVar12[5] = 0;
    *pbVar12 = *pbVar12 ^ 0x5d;
    pbVar12[1] = pbVar12[1] ^ 0x3d;
    pbVar12[2] = pbVar12[2] ^ 0xd;
    pbVar12[3] = pbVar12[3] ^ 0xaf;
    pbVar12[4] = pbVar12[4] ^ 0x6d;
  }
  uVar18 = uStack_2c;
  if ((uStack_30 & 1) == 0) {
    uVar18 = uStack_30 >> 1 & 0x7f;
  }
  iVar11 = imp_strlen(pbVar12);
  uStack_3c = uVar18 + iVar11;
  if (0xfffffff7 < uStack_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_40);
  }
  if (uStack_3c < 0xb) {
    uStack_40 = (uint)(byte)((char)uStack_3c * '\x02');
    uStack_38 = 0;
    uVar21 = 0;
    uStack_3c = 0;
  }
  else {
    uStack_38 = thunk_MwhHq((uStack_3c | 7) + 1);
    uStack_40 = (uStack_3c | 7) + 2;
    uVar21 = uStack_40 & 0xff;
  }
  uVar19 = uStack_38;
  if ((uVar21 & 1) == 0) {
    uVar19 = (uint)&uStack_40 | 1;
  }
  if (uVar18 != 0) {
    uVar21 = uStack_28;
    if ((uVar15 & 1) == 0) {
      uVar21 = (uint)&uStack_30 | 1;
    }
    imp___aeabi_memmove(uVar19,uVar21,uVar18);
  }
  if (iVar11 != 0) {
    imp___aeabi_memmove(uVar19 + uVar18,pbVar12,iVar11);
  }
  *(undefined1 *)(uVar19 + uVar18 + iVar11) = 0;
  if ((DAT_71201860 & 1) != 0) {
    qNQrlu(DAT_71201868);
  }
  DAT_71201860 = uStack_40;
  DAT_71201864 = uStack_3c;
  DAT_71201868 = uStack_38;
  if ((uVar15 & 1) != 0) {
    qNQrlu(uStack_28);
  }
  return param_1;
}


// Function: FUN_717ef11c @ 0x717ef11c (size=412)

void FUN_717ef11c(void)

{
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FUN_717ef3ac();
  uStack_1c = 0;
  uStack_20 = 0;
  uStack_24 = 0;
  puStack_28 = (undefined1 *)0x0;
  imp_sigemptyset((uint)&puStack_28 | 4);
  uStack_20 = 4;
  puStack_28 = &LAB_717e91a0;
  imp_sigaction(DAT_700fb6c8,&puStack_28,&DAT_71201894);
  imp_sigaction(DAT_700fb6cc,&puStack_28,&DAT_712018a4);
  imp_sigaction(DAT_700fb6d0,&puStack_28,&DAT_712018b4);
  imp_sigaction(DAT_700fb6d4,&puStack_28,&DAT_712018c4);
  imp_sigaction(DAT_700fb6d8,&puStack_28,&DAT_712018d4);
  imp_sigaction(DAT_700fb6dc,&puStack_28,&DAT_712018e4);
  imp_sigaction(DAT_700fb6e0,&puStack_28,&DAT_712018f4);
  imp_sigaction(DAT_700fb6e4,&puStack_28,&DAT_71201904);
  return;
}


// Function: FUN_717ef3ac @ 0x717ef3ac (size=440)

void FUN_717ef3ac(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_30 [24];
  
  if (DAT_71201914 == 0) {
    DAT_71201914 = FUN_714b9668(&DAT_70064a63);
  }
  imp_pthread_mutex_lock();
  iVar3 = 0;
  iVar1 = imp_gettid();
  do {
    if (*(int *)((int)&DAT_71201918 - iVar3) == iVar1) {
      imp_pthread_mutex_unlock(DAT_71201914);
      return;
    }
    iVar3 = iVar3 + -0xc;
  } while (iVar3 != -0x4b0);
  iVar3 = 0;
  do {
    if (*(int *)((int)&DAT_71201918 - iVar3) == 0) {
      uVar2 = imp_pthread_self();
      imp_pthread_getattr_np(uVar2,auStack_30);
      imp_pthread_attr_getstack(auStack_30,-iVar3 + 0x7120191c,-iVar3 + 0x71201920);
      imp_pthread_attr_destroy(auStack_30);
      *(int *)((int)&DAT_71201918 - iVar3) = iVar1;
      break;
    }
    iVar3 = iVar3 + -0xc;
  } while (iVar3 != -0x4b0);
  imp_pthread_mutex_unlock(DAT_71201914);
  return;
}


// Function: qNQrlu @ 0x71a34fec (size=4)

void qNQrlu(void)

{
  imp_free();
  return;
}


// Function: GFDIUClbc_QcPNgD_wH @ 0x71a37b7c (size=46)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x71a37b9e) */
/* WARNING: Removing unreachable block (ram,0x71a37bac) */
/* WARNING: Removing unreachable block (ram,0x71a37bfc) */

void GFDIUClbc_QcPNgD_wH(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// Function: qxUwTPHcvDlxy_nSlUZCGSLpSNjobTKAKBULIxBiM @ 0x71b44a80 (size=36)

/* WARNING: Control flow encountered bad instruction data */

void qxUwTPHcvDlxy_nSlUZCGSLpSNjobTKAKBULIxBiM(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// Function: XcxSszXLPjQrEGhecEv_ @ 0x71ba25d0 (size=680)

uint XcxSszXLPjQrEGhecEv_(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = param_1[2];
  DataMemoryBarrier(0xb);
  if (uVar4 == 0) {
    imp_pthread_once(&DAT_71205114,&LAB_71ba2a50);
    imp_pthread_mutex_lock(&DAT_71205118);
    uVar4 = param_1[2];
    if (uVar4 == 0) {
      uVar4 = DAT_71205110 + 1;
      DataMemoryBarrier(0xb);
      DAT_71205110 = uVar4;
      param_1[2] = uVar4;
    }
    imp_pthread_mutex_unlock(&DAT_71205118);
    puVar1 = (undefined4 *)imp_pthread_getspecific(DAT_7120510c);
    if (puVar1 == (undefined4 *)0x0) goto LAB_71ba26a8;
LAB_71ba2600:
    uVar2 = puVar1[1];
    if (uVar4 <= uVar2) goto LAB_71ba26f4;
    iVar3 = (uVar4 + 0x11 & 0xfffffff0) - 2;
    puVar1 = (undefined4 *)imp_realloc(puVar1,iVar3 * 4 + 8);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      imp_abort();
    }
    imp_memset(puVar1 + uVar2 + 2,0,(iVar3 - uVar2) * 4);
  }
  else {
    puVar1 = (undefined4 *)imp_pthread_getspecific(DAT_7120510c);
    if (puVar1 != (undefined4 *)0x0) goto LAB_71ba2600;
LAB_71ba26a8:
    iVar3 = (uVar4 + 0x11 & 0xfffffff0) - 2;
    puVar1 = (undefined4 *)imp_malloc(iVar3 * 4 + 8);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      imp_abort();
    }
    imp_memset(puVar1 + 2,0,iVar3 * 4);
    *puVar1 = 1;
  }
  puVar1[1] = iVar3;
  imp_pthread_setspecific(DAT_7120510c,puVar1);
LAB_71ba26f4:
  if (puVar1[uVar4 + 1] != 0) {
    return puVar1[uVar4 + 1];
  }
  uVar2 = param_1[1];
  if (uVar2 < 5) {
    uVar2 = 4;
  }
  if ((uVar2 & uVar2 - 1) != 0) {
                    /* WARNING: Subroutine does not return */
    imp_abort();
  }
  iVar5 = *param_1;
  iVar3 = imp_malloc(uVar2 + 3 + iVar5);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    imp_abort();
  }
  uVar2 = iVar3 + uVar2 + 3 & -uVar2;
  *(int *)(uVar2 - 4) = iVar3;
  if (param_1[3] != 0) {
    imp_memcpy(uVar2,param_1[3],iVar5);
    puVar1[uVar4 + 1] = uVar2;
    return uVar2;
  }
  imp_memset(uVar2,0,iVar5);
  puVar1[uVar4 + 1] = uVar2;
  return uVar2;
}


// Function: imp___aeabi_memcpy @ 0x71e020c0 (size=1)

void imp___aeabi_memcpy(void)

{
  return;
}


// Function: thunk_qNQrlu @ 0x71e020e0 (size=1)

void thunk_qNQrlu(void)

{
  qNQrlu();
  return;
}


// Function: thunk_MwhHq @ 0x71e020f0 (size=1)

void thunk_MwhHq(void)

{
  MwhHq();
  return;
}


// Function: imp_strlen @ 0x71e02270 (size=1)

void imp_strlen(void)

{
  return;
}


// Function: imp___stack_chk_fail @ 0x71e02ba0 (size=1)

void imp___stack_chk_fail(void)

{
  return;
}


// Function: imp___aeabi_memcpy4 @ 0x71e02bb0 (size=1)

void imp___aeabi_memcpy4(void)

{
  return;
}


// Function: imp___aeabi_memmove @ 0x71e02bd0 (size=1)

void imp___aeabi_memmove(void)

{
  return;
}


// Function: thunk_cfqspBX_JrdDvACwYrAyrngjQ @ 0x71e02c80 (size=1)

void thunk_cfqspBX_JrdDvACwYrAyrngjQ(void)

{
  cfqspBX_JrdDvACwYrAyrngjQ();
  return;
}


// Function: thunk_QgduklVhdVlmSiqzGQeutncbrNj @ 0x71e02cb0 (size=1)

void thunk_QgduklVhdVlmSiqzGQeutncbrNj(void)

{
  QgduklVhdVlmSiqzGQeutncbrNj();
  return;
}


// Function: imp_ANativeWindow_fromSurface @ 0x71e03640 (size=1)

void imp_ANativeWindow_fromSurface(void)

{
  return;
}


// Function: imp_ANativeWindow_release @ 0x71e03650 (size=1)

void imp_ANativeWindow_release(void)

{
  return;
}


// Function: thunk_RRPALJeaSXMvjIoKM @ 0x71e03890 (size=1)

void thunk_RRPALJeaSXMvjIoKM(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  
  iVar3 = FUN_714c9a38();
  if (iVar3 <= param_2) {
    return;
  }
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_711f414c);
  iVar3 = DAT_711f4128;
  if (DAT_711f412c < DAT_711f4130) {
    DAT_711f412c[1] = param_2;
    DAT_711f412c[2] = param_3;
    puVar6 = DAT_711f412c + 4;
    *DAT_711f412c = param_1;
    DAT_711f412c[3] = param_4;
  }
  else {
    iVar5 = (int)DAT_711f412c - DAT_711f4128;
    iVar1 = iVar5 >> 4;
    uVar7 = iVar1 + 1;
    if (0xfffffff < uVar7) {
      FUN_716e65c8(&DAT_711f4128);
LAB_716e47ac:
                    /* WARNING: Subroutine does not return */
      FUN_712f6cf0();
    }
    uVar2 = (int)DAT_711f4130 - DAT_711f4128 >> 3;
    if (uVar7 < uVar2) {
      uVar7 = uVar2;
    }
    if (0x7fffffef < (uint)((int)DAT_711f4130 - DAT_711f4128)) {
      uVar7 = 0xfffffff;
    }
    if (uVar7 == 0) {
      iVar4 = 0;
    }
    else {
      if (0xfffffff < uVar7) goto LAB_716e47ac;
      iVar4 = thunk_MwhHq(uVar7 << 4);
    }
    puVar6 = (undefined4 *)(iVar4 + iVar1 * 0x10);
    *puVar6 = param_1;
    puVar6[1] = param_2;
    puVar6[2] = param_3;
    puVar6[3] = param_4;
    imp___aeabi_memcpy4(iVar4,iVar3,iVar5);
    puVar6 = puVar6 + 4;
    DAT_711f4130 = (undefined4 *)(iVar4 + uVar7 * 0x10);
    DAT_711f4128 = iVar4;
    if (iVar3 != 0) {
      DAT_711f412c = puVar6;
      thunk_qNQrlu(iVar3);
    }
  }
  DAT_711f412c = puVar6;
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_711f414c);
  return;
}


// Function: imp__exit @ 0x71e038b0 (size=1)

void imp__exit(void)

{
  return;
}


// Function: imp_AAssetManager_fromJava @ 0x71e03940 (size=1)

void imp_AAssetManager_fromJava(void)

{
  return;
}


// Function: imp_sigaction @ 0x71e03980 (size=1)

void imp_sigaction(void)

{
  return;
}


// Function: imp_sigemptyset @ 0x71e039a0 (size=1)

void imp_sigemptyset(void)

{
  return;
}


