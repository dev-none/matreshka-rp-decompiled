// Function: FUN_0019c6c0
// Entry: 0019c6c0

uint FUN_0019c6c0(char *param_1,char *param_2,char *param_3)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  int iVar6;
  char *pcVar7;
  ulong uVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  long lVar12;
  long lVar13;
  char *unaff_x27;
  char *local_4c8;
  undefined8 *puStack_4c0;
  long local_4b8;
  void *local_4b0;
  char *local_4a8;
  uint local_49c;
  FILE *local_490;
  uint local_484;
  char *local_480;
  long local_478;
  char acStack_470 [1024];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  lVar1 = 0x55488ab70f6983fa;
  if (param_3 != (char *)0x0) {
    lVar1 = 0x5701972a5c88a65c;
  }
  pcVar9 = param_1;
  pcVar3 = param_2;
  pcVar4 = param_3;
  lVar13 = -0x7b681637aa78cddc;
LAB_0019c7d8:
  lVar12 = lVar13;
  pcVar10 = pcVar4;
  pcVar11 = pcVar3;
  pcVar7 = pcVar9;
  lVar13 = lVar12;
  pcVar9 = pcVar7;
  pcVar3 = pcVar11;
  pcVar4 = pcVar10;
  if (lVar12 < 0x129b99854ca09618) {
    if (-0x37d03aa9c8b304fd < lVar12) {
      if (lVar12 < -0xb6b4c3bb4fa6b5c) {
        if (lVar12 < -0x255429dbcbdc462b) {
          lVar13 = -0x1c57606b44c18182;
          if (((lVar12 != -0x37d03aa9c8b304fc) && (lVar12 != -0x37bcec43bd9d08fe)) &&
             (lVar13 = lVar12, lVar12 == -0x2e2c7788f6896294)) {
            lVar13 = -0x252a03a8d9aa82d5;
          }
          goto LAB_0019c7d8;
        }
        if (-0x1c57606b44c18183 < lVar12) {
          if (lVar12 == -0x1c57606b44c18182) {
            pcVar10 = fgets(acStack_470,0x400,local_490);
            bVar5 = pcVar10 == (char *)0x0;
            lVar12 = -0x5ab7f064f0b58e71;
            lVar13 = 0x6ea6282306ea075c;
            goto LAB_0019c7cc;
          }
          if (lVar12 == -0x1736fceebecd72f8) {
            local_478 = 0;
            uVar8 = FUN_0019b060(param_1,acStack_470,&local_478);
            lVar13 = 0x5375277af4011243;
            if ((uVar8 & 1) == 0) {
              lVar13 = 0x4d702a7aef09f0b4;
            }
          }
          goto LAB_0019c7d8;
        }
        if (lVar12 != -0x255429dbcbdc462b) {
          if (lVar12 == -0x252a03a8d9aa82d5) {
            DAT_001f82a0 = 0;
            iVar6 = FUN_001cb714(acStack_470,&DAT_001f73dc);
            lVar13 = -0x37bcec43bd9d08fe;
            if (iVar6 != 0) {
              lVar13 = -0xb6b4c3bb4fa6b5c;
            }
          }
          goto LAB_0019c7d8;
        }
        local_49c = 1;
      }
      else {
        if (0x494913e247ec80f < lVar12) {
          if (lVar12 < 0x1029ba407f8d7b2d) {
            lVar13 = 0x38b550c75dcbd861;
            if ((lVar12 != 0x494913e247ec810) && (lVar13 = lVar12, lVar12 == 0x859356aa69720d1)) {
              DAT_001f73e0 = DAT_001f73e0 ^ 0xb7;
              DAT_001f73e2 = DAT_001f73e2 ^ 0xb7;
              DAT_001f73e1 = DAT_001f73e1 ^ 0xb7;
              DAT_001f82aa = '\x01';
              lVar13 = -0x3a9a787bdaa35b1e;
            }
          }
          else {
            pcVar4 = local_480;
            lVar13 = -0x647872952d8cf8a;
            if ((lVar12 != 0x1029ba407f8d7b2d) &&
               (pcVar4 = pcVar10, lVar13 = lVar12, lVar12 == 0x102f8ffd02923754)) {
              lVar12 = FUN_001ca1a8(acStack_470);
              lVar13 = -0x5a5e67cbbd9137e;
              if (lVar12 != 0) {
                lVar13 = 0x65f514c9e7f64775;
              }
            }
          }
          goto LAB_0019c7d8;
        }
        if (lVar12 < -0x5a5e67cbbd9137e) {
          lVar13 = -0x59438dc72a51bac9;
          if ((lVar12 != -0xb6b4c3bb4fa6b5c) && (lVar13 = lVar12, lVar12 == -0x647872952d8cf8a)) {
LAB_0019d448:
            lVar13 = 0x102f8ffd02923754;
            unaff_x27 = pcVar10;
          }
          goto LAB_0019c7d8;
        }
        lVar13 = -0x1c57606b44c18182;
        if ((lVar12 == -0x5a5e67cbbd9137e) || (lVar13 = lVar12, lVar12 != 0x6df6ddc7d68c40))
        goto LAB_0019c7d8;
        fclose(local_490);
        local_49c = local_484;
      }
      lVar13 = -0x6e211a48bc109fd4;
      goto LAB_0019c7d8;
    }
    if (lVar12 < -0x59438dc72a51bac9) {
      if (lVar12 < -0x6c070e2a612990f7) {
        if (lVar12 < -0x7b681637aa78cddc) {
          if (lVar12 == -0x7f6b9cc817e58953) {
            DAT_001f73dc = DAT_001f73dc ^ 0x71;
            DAT_001f73dd = DAT_001f73dd ^ 0x71;
            DAT_001f82a9 = '\x01';
            lVar13 = -0x252a03a8d9aa82d5;
          }
          else if (lVar12 == -0x7dc75478ad7cf9e9) {
            DAT_001f8298 = 0;
            local_490 = fopen(param_3,(char *)&DAT_001f73d4);
            bVar5 = local_490 == (FILE *)0x0;
            lVar12 = -0x556288319bfdcffb;
            lVar13 = -0x255429dbcbdc462b;
            goto LAB_0019c7cc;
          }
        }
        else {
          lVar13 = lVar1;
          if ((lVar12 != -0x7b681637aa78cddc) && (lVar13 = lVar12, lVar12 == -0x6e211a48bc109fd4)) {
            if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
            return local_49c & 1;
          }
        }
      }
      else if (lVar12 < -0x615cdc84d56625fc) {
        lVar13 = -0x1c57606b44c18182;
        if ((lVar12 != -0x6c070e2a612990f7) && (lVar13 = lVar12, lVar12 == -0x66cd56510b566201)) {
          lVar13 = -0x3a9a787bdaa35b1e;
        }
      }
      else if (lVar12 == -0x615cdc84d56625fc) {
        pcVar4 = (char *)0x0;
        lVar13 = -0x647872952d8cf8a;
      }
      else {
        pcVar10 = unaff_x27;
        if (lVar12 == -0x5ab7f064f0b58e71) goto LAB_0019d448;
      }
      goto LAB_0019c7d8;
    }
    if (-0x434983ca2ec7188b < lVar12) {
      if (lVar12 < -0x3f06feab6e15bed5) {
        if (lVar12 == -0x434983ca2ec7188a) {
          pcVar10 = fgets(acStack_470,0x400,local_490);
          lVar13 = 0x4517d092a6c8637b;
          local_480 = pcVar11;
          if (pcVar10 != (char *)0x0) {
            lVar13 = 0x1029ba407f8d7b2d;
          }
        }
        else if (lVar12 == -0x415d5952821d8fc8) {
          puStack_4c0 = calloc(1,0x10);
          lVar13 = -0x3f06feab6e15bed5;
          local_4c8 = pcVar7;
          if (puStack_4c0 != (undefined8 *)0x0) {
            lVar13 = 0x754d2b88abe28d02;
          }
        }
      }
      else {
        if (lVar12 == -0x3f06feab6e15bed5) goto LAB_0019d7e4;
        if (lVar12 == -0x3a9a787bdaa35b1e) {
          DAT_001f82a4 = 0;
          iVar6 = FUN_001cb714(acStack_470,&DAT_001f73e0);
          bVar5 = iVar6 == 0;
          lVar12 = -0x1736fceebecd72f8;
          lVar13 = -0x37d03aa9c8b304fc;
          goto LAB_0019c7cc;
        }
      }
      goto LAB_0019c7d8;
    }
    if (lVar12 == -0x59438dc72a51bac9) {
      iVar6 = FUN_001ebe70(0,1,&DAT_001f82a4);
      bVar5 = iVar6 == 0;
      lVar12 = 0x3359a89ff97157ac;
      lVar13 = 0x135ff1730db8c077;
    }
    else {
      if (lVar12 != -0x556288319bfdcffb) {
        if (lVar12 == -0x4591d5331867de20) {
          DAT_001f73d4 = DAT_001f73d4 ^ 0xb9;
          DAT_001f73d5 = DAT_001f73d5 ^ 0xb9;
          DAT_001f82a4 = CONCAT13(1,(undefined3)DAT_001f82a4);
          lVar13 = -0x7dc75478ad7cf9e9;
        }
        goto LAB_0019c7d8;
      }
      local_4b0 = calloc(0x400,8);
      bVar5 = local_4b0 == (void *)0x0;
      lVar12 = 0x129b99854ca09618;
      lVar13 = 0x36fa2d308e82c2f8;
    }
  }
  else if (lVar12 < 0x469bef0d6588cd58) {
    if (lVar12 < 0x3303345eb4f85978) {
      if (lVar12 < 0x1c201a6f44d38273) {
        if (lVar12 != 0x129b99854ca09618) {
          if (lVar12 == 0x135ff1730db8c077) {
            lVar13 = -0x66cd56510b566201;
            if (DAT_001f82aa == '\0') {
              lVar13 = 0x859356aa69720d1;
            }
          }
          else if (lVar12 == 0x1666a35a3e139985) {
            DAT_001f829c = 0;
            iVar6 = FUN_001cb714(acStack_470,&DAT_001f73d8);
            lVar13 = -0x6c070e2a612990f7;
            if (iVar6 != 0) {
              lVar13 = 0x494913e247ec810;
            }
          }
          goto LAB_0019c7d8;
        }
        memset(acStack_470,0,0x400);
        fgets(acStack_470,0x400,local_490);
        pcVar10 = fgets(acStack_470,0x400,local_490);
        bVar5 = pcVar10 == (char *)0x0;
        lVar12 = -0x615cdc84d56625fc;
        lVar13 = 0x3303345eb4f85978;
      }
      else {
        if (lVar12 < 0x297717612b720ee8) {
          pcVar3 = unaff_x27;
          lVar13 = -0x434983ca2ec7188a;
          if ((lVar12 != 0x1c201a6f44d38273) &&
             (pcVar3 = pcVar11, lVar13 = lVar12, lVar12 == 0x25e60e8a57340c35)) {
            pcVar3 = local_4a8;
            lVar13 = -0x434983ca2ec7188a;
          }
          goto LAB_0019c7d8;
        }
        if (lVar12 != 0x297717612b720ee8) {
          if (lVar12 == 0x2e7820ff94f2299e) {
            lVar13 = 0x7e7f415062326f70;
          }
          goto LAB_0019c7d8;
        }
        iVar6 = FUN_001ebe70(0,1,&DAT_001f829c);
        bVar5 = iVar6 == 0;
        lVar12 = 0x45f288ff0a7ea1de;
        lVar13 = 0x43f7eb53c5724ce0;
      }
    }
    else {
      if (0x41be9e0e5eb1efe3 < lVar12) {
        if (lVar12 < 0x4517d092a6c8637b) {
          if (lVar12 == 0x41be9e0e5eb1efe4) {
            lVar13 = 0x6853f5fa40398e94;
            if (DAT_001f82a4._3_1_ == '\0') {
              lVar13 = -0x4591d5331867de20;
            }
          }
          else if (lVar12 == 0x43f7eb53c5724ce0) {
            lVar13 = 0x5e990c37db09f86a;
            if (DAT_001f82a8 == '\0') {
              lVar13 = 0x7c9736501c5f4f0a;
            }
          }
        }
        else {
          pcVar9 = local_480;
          lVar13 = -0x415d5952821d8fc8;
          if ((lVar12 != 0x4517d092a6c8637b) &&
             (pcVar9 = pcVar7, lVar13 = lVar12, lVar12 == 0x45f288ff0a7ea1de)) {
            lVar13 = 0x297717612b720ee8;
          }
        }
        goto LAB_0019c7d8;
      }
      if (lVar12 < 0x36fa2d308e82c2f8) {
        if (lVar12 == 0x3303345eb4f85978) {
          pcVar9 = (char *)0x0;
          goto LAB_0019d9cc;
        }
        if (lVar12 == 0x3359a89ff97157ac) {
          lVar13 = -0x59438dc72a51bac9;
        }
        goto LAB_0019c7d8;
      }
      if (lVar12 == 0x36fa2d308e82c2f8) {
LAB_0019d7e4:
        local_484 = 0;
        param_1[0] = '\x02';
        param_1[1] = '\0';
        param_1[2] = '\0';
        param_1[3] = '\0';
        lVar13 = 0x6df6ddc7d68c40;
        goto LAB_0019c7d8;
      }
      if (lVar12 != 0x38b550c75dcbd861) goto LAB_0019c7d8;
      iVar6 = FUN_001ebe70(0,1,&DAT_001f82a0);
      bVar5 = iVar6 == 0;
      lVar12 = 0x482e5862fb274eec;
      lVar13 = 0x469bef0d6588cd58;
    }
  }
  else {
    if (lVar12 < 0x5a82b43288d2c981) {
      if (lVar12 < 0x5375277af4011243) {
        if (lVar12 == 0x469bef0d6588cd58) {
          lVar13 = -0x2e2c7788f6896294;
          if (DAT_001f82a9 == '\0') {
            lVar13 = -0x7f6b9cc817e58953;
          }
        }
        else {
          lVar13 = 0x38b550c75dcbd861;
          if ((lVar12 != 0x482e5862fb274eec) && (lVar13 = lVar12, lVar12 == 0x4d702a7aef09f0b4)) {
            local_484 = 0;
            lVar13 = 0x6df6ddc7d68c40;
          }
        }
      }
      else if (lVar12 < 0x5701972a5c88a65c) {
        if (lVar12 == 0x5375277af4011243) {
          local_4b8 = local_478;
          lVar13 = 0x1c201a6f44d38273;
          if (local_478 != 0) {
            lVar13 = 0x57f8c36627f7246e;
          }
        }
        else if (lVar12 == 0x55488ab70f6983fa) {
          local_49c = 0;
          param_1[0] = '\x03';
          param_1[1] = '\0';
          param_1[2] = '\0';
          param_1[3] = '\0';
          lVar13 = -0x6e211a48bc109fd4;
        }
      }
      else {
        lVar13 = 0x7e7f415062326f70;
        if ((lVar12 != 0x5701972a5c88a65c) && (lVar13 = lVar12, lVar12 == 0x57f8c36627f7246e)) {
          local_4a8 = unaff_x27 + 1;
          lVar13 = 0x5a82b43288d2c981;
          if (local_4a8 < (char *)0x400) {
            lVar13 = 0x25e60e8a57340c35;
          }
          *(long *)((long)local_4b0 + (long)unaff_x27 * 8) = local_4b8;
        }
      }
      goto LAB_0019c7d8;
    }
    if (lVar12 < 0x6ea6282306ea075c) {
      if (lVar12 < 0x65f514c9e7f64775) {
        pcVar9 = local_4a8;
        if (lVar12 == 0x5a82b43288d2c981) {
LAB_0019d9cc:
          lVar13 = -0x415d5952821d8fc8;
        }
        else {
          pcVar9 = pcVar7;
          if (lVar12 == 0x5e990c37db09f86a) {
            lVar13 = 0x1666a35a3e139985;
          }
        }
      }
      else {
        lVar13 = 0x297717612b720ee8;
        if ((lVar12 != 0x65f514c9e7f64775) && (lVar13 = lVar12, lVar12 == 0x6853f5fa40398e94)) {
          lVar13 = -0x7dc75478ad7cf9e9;
        }
      }
      goto LAB_0019c7d8;
    }
    if (lVar12 < 0x7c9736501c5f4f0a) {
      pcVar9 = unaff_x27;
      lVar13 = -0x415d5952821d8fc8;
      if ((lVar12 != 0x6ea6282306ea075c) &&
         (pcVar9 = pcVar7, lVar13 = lVar12, lVar12 == 0x754d2b88abe28d02)) {
        local_484 = 1;
        *puStack_4c0 = local_4c8;
        puStack_4c0[1] = local_4b0;
        *(undefined8 **)param_2 = puStack_4c0;
        lVar13 = 0x6df6ddc7d68c40;
      }
      goto LAB_0019c7d8;
    }
    if (lVar12 == 0x7c9736501c5f4f0a) {
      DAT_001f73d8 = DAT_001f73d8 ^ 9;
      DAT_001f73d9 = DAT_001f73d9 ^ 9;
      DAT_001f82a8 = '\x01';
      lVar13 = 0x1666a35a3e139985;
      goto LAB_0019c7d8;
    }
    if (lVar12 != 0x7e7f415062326f70) goto LAB_0019c7d8;
    iVar6 = FUN_001ebe70(0,1,&DAT_001f8298);
    lVar12 = 0x2e7820ff94f2299e;
    lVar13 = 0x41be9e0e5eb1efe4;
    bVar5 = iVar6 == 0;
  }
LAB_0019c7cc:
  if (!bVar5) {
    lVar13 = lVar12;
  }
  goto LAB_0019c7d8;
}


