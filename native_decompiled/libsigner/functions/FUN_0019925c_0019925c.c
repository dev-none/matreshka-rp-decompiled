// Function: FUN_0019925c
// Entry: 0019925c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0019925c(long *param_1,int *param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x25;
  uint unaff_w28;
  undefined1 auStack_c0 [8];
  long local_b8;
  uint local_ac;
  undefined8 local_a8;
  undefined8 *local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined8 *local_78;
  long *local_70;
  long local_68;
  
  local_a8 = param_3;
  local_a0 = param_4;
  local_b8 = tpidr_el0;
  local_68 = *(long *)(local_b8 + 0x28);
  puVar3 = (undefined8 *)auStack_c0;
  lVar1 = -0x59438dc72a51bac9;
LAB_00199300:
  while (lVar5 = lVar1, plVar2 = local_70, lVar1 = lVar5, lVar5 < 0x1c201a6f44d38273) {
    if (lVar5 < -0x3c84e412275c5f52) {
      if (lVar5 < -0x59438dc72a51bac9) {
        if (lVar5 < -0x66cd56510b566201) {
          lVar1 = -0xfd56005cdcebed6;
          if ((lVar5 != -0x725e511a790cf4ac) && (lVar1 = lVar5, lVar5 == -0x6e211a48bc109fd4)) {
            FUN_0016fd74(param_2,param_1,*unaff_x20,2,*unaff_x25);
            lVar1 = 0x6853f5fa40398e94;
            if (*param_2 != 0) {
              lVar1 = 0x41be9e0e5eb1efe4;
            }
          }
        }
        else if (lVar5 == -0x66cd56510b566201) {
          *unaff_x19 = 0;
          local_88 = *plVar2;
          lVar1 = -0x4f3380086e2b70c2;
          if (*plVar2 == 0 || param_1 == (long *)0x0) {
            lVar1 = 0x42f0c6f150e99035;
          }
        }
        else if (lVar5 == -0x608b613e0d15eb95) {
          lVar1 = 0x56c7de269b39cb28;
          if (DAT_001f8288._1_1_ == '\0') {
            lVar1 = -0x3a9a787bdaa35b1e;
          }
        }
        else if (lVar5 == -0x5ab7f064f0b58e71) {
          FUN_0017636c(param_2,param_1,*unaff_x19,0);
          lVar1 = -0x1736fceebecd72f8;
          if (*param_2 != 0) {
            lVar1 = 0x6ea6282306ea075c;
          }
        }
      }
      else if (lVar5 < -0x41fbd41c01740ac7) {
        lVar1 = 0x3359a89ff97157ac;
        if (lVar5 != -0x59438dc72a51bac9) {
          if (lVar5 == -0x4f3380086e2b70c2) {
            (**(code **)(*param_1 + 0xb8))(param_1,local_88);
            lVar1 = 0x30873d520a61889c;
          }
          else {
            lVar1 = lVar5;
            if (lVar5 == -0x434983ca2ec7188a) goto LAB_00199bac;
          }
        }
      }
      else if (lVar5 == -0x41fbd41c01740ac7) {
        (**(code **)(*param_1 + 0xb8))(param_1,local_90);
        lVar1 = 0x53bf3b45f912026b;
      }
      else {
        lVar1 = 0x4517d092a6c8637b;
        if ((lVar5 != -0x415d5952821d8fc8) && (lVar1 = lVar5, lVar5 == -0x3f06feab6e15bed5)) {
          DAT_001f73a0 = DAT_001f73a0 ^ 0xf7;
          DAT_001f73a1 = DAT_001f73a1 ^ 0xf7;
          DAT_001f73a2 = DAT_001f73a2 ^ 0xf7;
          DAT_001f73a3 = DAT_001f73a3 ^ 0xf7;
          DAT_001f73a4 = DAT_001f73a4 ^ 0xf7;
          _DAT_001f7390 = _DAT_001f7390 ^ 0xf7f7f7f7f7f7f7f7;
          uRam00000000001f7398 = uRam00000000001f7398 ^ 0xf7f7f7f7f7f7f7f7;
          DAT_001f8288._3_1_ = '\x01';
          lVar1 = 0x754d2b88abe28d02;
        }
      }
    }
    else if (lVar5 < -0x1736fceebecd72f8) {
      if (lVar5 < -0x2e2c7788f6896294) {
        if (lVar5 == -0x3c84e412275c5f52) {
          lVar1 = 0x3582441379697640;
          if (DAT_001f8288._3_1_ == '\0') {
            lVar1 = -0x3f06feab6e15bed5;
          }
        }
        else if (lVar5 == -0x3a9a787bdaa35b1e) {
          _DAT_001f7370 = _DAT_001f7370 ^ 0x9d9d9d9d9d9d9d9d;
          uRam00000000001f7378 = uRam00000000001f7378 ^ 0x9d9d9d9d9d9d9d9d;
          DAT_001f8288._1_1_ = '\x01';
          lVar1 = -0x37d03aa9c8b304fc;
        }
        else if (lVar5 == -0x37d03aa9c8b304fc) {
          DAT_001f8274 = 0;
          unaff_x19 = puVar3 + -2;
          local_70 = puVar3 + -4;
          unaff_x25 = puVar3 + -6;
          unaff_x20 = puVar3 + -8;
          puVar6 = puVar3 + -10;
          puVar3[-2] = 0;
          puVar3[-4] = 0;
          puVar3[-6] = 0;
          puVar3[-8] = 0;
          puVar3[-10] = 0;
          local_78 = puVar6;
          FUN_001753c4(param_2,param_1,&DAT_001f7370,unaff_x19);
          puVar3 = puVar6;
          lVar1 = -0x5ab7f064f0b58e71;
          if (*param_2 != 0) {
            lVar1 = -0x1c57606b44c18182;
          }
        }
      }
      else {
        lVar1 = -0x66cd56510b566201;
        if (lVar5 != -0x2e2c7788f6896294) {
          if (lVar5 == -0x1c57606b44c18182) goto LAB_00199bac;
          lVar1 = lVar5;
          if (lVar5 == -0x1a2c17747d4c9d16) {
            lVar1 = 0x53bf3b45f912026b;
          }
        }
      }
    }
    else if (lVar5 < 0x859356aa69720d1) {
      lVar1 = 0x4d702a7aef09f0b4;
      if (lVar5 != -0x1736fceebecd72f8) {
        if (lVar5 == 0x6df6ddc7d68c40) goto LAB_00199bac;
        lVar1 = lVar5;
        if (lVar5 == -0xfd56005cdcebed6) {
          if (*(long *)(local_b8 + 0x28) == local_68) {
            return local_ac & 1;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
      }
    }
    else {
      lVar1 = 0x3359a89ff97157ac;
      if (((lVar5 != 0x859356aa69720d1) && (lVar1 = 0x4517d092a6c8637b, lVar5 != 0x1029ba407f8d7b2d)
          ) && (lVar1 = lVar5, lVar5 == 0x135ff1730db8c077)) {
        (**(code **)(*param_1 + 0xb8))(param_1,local_80);
        lVar1 = -0x66cd56510b566201;
      }
    }
  }
  if (lVar5 < 0x4517d092a6c8637b) {
    if (lVar5 < 0x3582441379697640) {
      if (lVar5 < 0x25e60e8a57340c35) {
        if (lVar5 == 0x1c201a6f44d38273) {
          DAT_001f7380 = DAT_001f7380 ^ 0xe2;
          DAT_001f7381 = DAT_001f7381 ^ 0xe2;
          DAT_001f7382 = DAT_001f7382 ^ 0xe2;
          DAT_001f7383 = DAT_001f7383 ^ 0xe2;
          DAT_001f7384 = DAT_001f7384 ^ 0xe2;
          DAT_001f8288._2_1_ = '\x01';
          lVar1 = 0x57f8c36627f7246e;
        }
        else if (lVar5 == 0x2585bc4e4d7c8853) {
          (**(code **)(*param_1 + 0xb8))(param_1,local_98);
          lVar1 = -0xfd56005cdcebed6;
        }
        goto LAB_00199300;
      }
      if (lVar5 != 0x25e60e8a57340c35) {
        if (lVar5 == 0x30873d520a61889c) {
          local_90 = *unaff_x25;
          lVar1 = -0x41fbd41c01740ac7;
          if (*unaff_x25 == 0 || param_1 == (long *)0x0) {
            lVar1 = -0x1a2c17747d4c9d16;
          }
          *local_70 = 0;
        }
        else if (lVar5 == 0x3359a89ff97157ac) {
          iVar4 = FUN_001ebe70(0,1,&DAT_001f8274);
          lVar1 = -0x608b613e0d15eb95;
          if (iVar4 != 0) {
            lVar1 = 0x859356aa69720d1;
          }
        }
        goto LAB_00199300;
      }
    }
    else {
      if (lVar5 < 0x41be9e0e5eb1efe4) {
        lVar1 = 0x754d2b88abe28d02;
        if (((lVar5 != 0x3582441379697640) &&
            (lVar1 = 0x57f8c36627f7246e, lVar5 != 0x3cf1d9509481ae04)) &&
           (lVar1 = lVar5, lVar5 == 0x4119c2fb696ac2cc)) {
          lVar1 = 0x3cf1d9509481ae04;
          if (DAT_001f8288._2_1_ == '\0') {
            lVar1 = 0x1c201a6f44d38273;
          }
        }
        goto LAB_00199300;
      }
      if ((lVar5 != 0x41be9e0e5eb1efe4) &&
         ((lVar1 = 0x30873d520a61889c, lVar5 == 0x42f0c6f150e99035 ||
          (lVar1 = lVar5, lVar5 != 0x43f7eb53c5724ce0)))) goto LAB_00199300;
    }
  }
  else {
    if (lVar5 < 0x57f8c36627f7246e) {
      if (lVar5 < 0x5375277af4011243) {
        if (lVar5 == 0x4517d092a6c8637b) {
          iVar4 = FUN_001ebe70(0,1,&DAT_001f827c);
          lVar1 = -0x3c84e412275c5f52;
          if (iVar4 != 0) {
            lVar1 = -0x415d5952821d8fc8;
          }
        }
        else if (lVar5 == 0x469bef0d6588cd58) {
          local_ac = unaff_w28;
          local_80 = *unaff_x19;
          lVar1 = 0x135ff1730db8c077;
          if (*unaff_x19 == 0 || param_1 == (long *)0x0) {
            lVar1 = -0x2e2c7788f6896294;
          }
        }
        else if (lVar5 == 0x4d702a7aef09f0b4) {
          iVar4 = FUN_001ebe70(0,1,&DAT_001f8278);
          lVar1 = 0x4119c2fb696ac2cc;
          if (iVar4 != 0) {
            lVar1 = 0x5375277af4011243;
          }
        }
      }
      else {
        lVar1 = 0x4d702a7aef09f0b4;
        if (lVar5 != 0x5375277af4011243) {
          if (lVar5 == 0x53bf3b45f912026b) {
            lVar5 = *unaff_x20;
            *unaff_x25 = 0;
            local_98 = lVar5;
            lVar1 = 0x2585bc4e4d7c8853;
            if (lVar5 == 0 || param_1 == (long *)0x0) {
              lVar1 = -0x725e511a790cf4ac;
            }
          }
          else {
            lVar1 = lVar5;
            if (lVar5 == 0x56c7de269b39cb28) {
              lVar1 = -0x37d03aa9c8b304fc;
            }
          }
        }
      }
      goto LAB_00199300;
    }
    if (lVar5 < 0x6853f5fa40398e94) {
      if (lVar5 == 0x57f8c36627f7246e) {
        DAT_001f8278 = 0;
        FUN_00176dac(param_2,param_1,*unaff_x19,&DAT_001f7380,0,local_70);
        lVar1 = 0x5a82b43288d2c981;
        if (*param_2 != 0) {
          lVar1 = 0x25e60e8a57340c35;
        }
      }
      else if (lVar5 == 0x5a82b43288d2c981) {
        FUN_001789b4(param_2,param_1,*local_70,unaff_x25);
        lVar1 = 0x1029ba407f8d7b2d;
        if (*param_2 != 0) {
          lVar1 = -0x434983ca2ec7188a;
        }
      }
      else if (lVar5 == 0x5e990c37db09f86a) {
        unaff_w28 = 1;
        *local_a0 = *local_78;
        lVar1 = 0x469bef0d6588cd58;
      }
      goto LAB_00199300;
    }
    if (lVar5 == 0x6853f5fa40398e94) {
      FUN_0017077c(param_2,param_1,*unaff_x20,local_a8,local_78);
      lVar1 = 0x5e990c37db09f86a;
      if (*param_2 != 0) {
        lVar1 = 0x43f7eb53c5724ce0;
      }
      goto LAB_00199300;
    }
    if (lVar5 != 0x6ea6282306ea075c) {
      if (lVar5 == 0x754d2b88abe28d02) {
        DAT_001f827c = 0;
        FUN_0016ed5c(param_2,param_1,&DAT_001f7390,unaff_x20);
        lVar1 = -0x6e211a48bc109fd4;
        if (*param_2 != 0) {
          lVar1 = 0x6df6ddc7d68c40;
        }
      }
      goto LAB_00199300;
    }
  }
LAB_00199bac:
  unaff_w28 = 0;
  lVar1 = 0x469bef0d6588cd58;
  goto LAB_00199300;
}


