// Function: FUN_001e69e8
// Entry: 001e69e8

void FUN_001e69e8(int *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  size_t sVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  int unaff_w24;
  ulong local_80;
  long local_78;
  int local_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_6c = 0;
  local_80 = 0;
  local_78 = 0;
  FUN_001e54fc();
  lVar1 = 0x25e60e8a57340c35;
  if (*param_1 != 0) {
    lVar1 = 0x57f8c36627f7246e;
  }
  lVar3 = 0x1c201a6f44d38273;
LAB_001e6b20:
  do {
    while( true ) {
      while( true ) {
        while (lVar9 = lVar3, lVar3 = lVar9, 0x1c201a6f44d38272 < lVar9) {
          if (lVar9 < 0x4517d092a6c8637b) {
            if (lVar9 < 0x30873d520a61889c) {
              lVar3 = lVar1;
              if (((lVar9 != 0x1c201a6f44d38273) &&
                  (lVar3 = -0x608b613e0d15eb95, lVar9 != 0x2585bc4e4d7c8853)) &&
                 (lVar3 = lVar9, lVar9 == 0x25e60e8a57340c35)) {
                lVar3 = 0x5a82b43288d2c981;
              }
            }
            else if (lVar9 < 0x42f0c6f150e99035) {
              lVar3 = -0x608b613e0d15eb95;
              if ((lVar9 != 0x30873d520a61889c) && (lVar3 = lVar9, lVar9 == 0x41be9e0e5eb1efe4)) {
                lVar3 = 0x135ff1730db8c077;
                if (unaff_w24 != 0x1b93ad61) {
                  lVar3 = 0x6853f5fa40398e94;
                }
              }
            }
            else {
              lVar3 = -0x608b613e0d15eb95;
              if ((lVar9 != 0x42f0c6f150e99035) && (lVar3 = lVar9, lVar9 == 0x43f7eb53c5724ce0)) {
                lVar3 = -0x2e2c7788f6896294;
                if (unaff_w24 != -0xfac9740) {
                  lVar3 = 0x5e990c37db09f86a;
                }
              }
            }
          }
          else if (lVar9 < 0x5a82b43288d2c981) {
            if (lVar9 < 0x53bf3b45f912026b) {
              lVar3 = -0x608b613e0d15eb95;
              if ((lVar9 != 0x4517d092a6c8637b) && (lVar3 = lVar9, lVar9 == 0x469bef0d6588cd58)) {
                FUN_001e29ec(param_1,param_2 + 3,(int)local_78 + -4,*param_2);
                lVar3 = -0x725e511a790cf4ac;
              }
            }
            else if (lVar9 == 0x53bf3b45f912026b) {
              *param_1 = 7;
              lVar3 = -0x608b613e0d15eb95;
            }
            else if (lVar9 == 0x57f8c36627f7246e) {
              lVar3 = -0x608b613e0d15eb95;
            }
          }
          else if (lVar9 < 0x6853f5fa40398e94) {
            if (lVar9 == 0x5a82b43288d2c981) {
              sVar6 = fread(&local_78,8,1,(FILE *)*param_2);
              lVar3 = -0x434983ca2ec7188a;
              if (sVar6 != 0) {
                lVar3 = 0x1029ba407f8d7b2d;
              }
            }
            else if (lVar9 == 0x5e990c37db09f86a) {
              lVar3 = -0x66cd56510b566201;
            }
          }
          else {
            lVar3 = -0x66cd56510b566201;
            if ((lVar9 != 0x6853f5fa40398e94) && (lVar3 = lVar9, lVar9 == 0x754d2b88abe28d02)) {
              lVar3 = 0x41be9e0e5eb1efe4;
              if (0x71098719 < unaff_w24) {
                lVar3 = 0x6df6ddc7d68c40;
              }
            }
          }
        }
        if (-0x3f06feab6e15bed6 < lVar9) break;
        if (lVar9 < -0x4f3380086e2b70c2) {
          if (lVar9 < -0x66cd56510b566201) {
            if (lVar9 == -0x725e511a790cf4ac) {
              lVar3 = -0xfd56005cdcebed6;
              if (*param_1 != 0) {
                lVar3 = 0x2585bc4e4d7c8853;
              }
            }
            else if (lVar9 == -0x6e211a48bc109fd4) {
              lVar3 = -0x66cd56510b566201;
            }
          }
          else if (lVar9 == -0x66cd56510b566201) {
            uVar5 = FUN_001dc56c(param_1,*param_2,&local_80);
            lVar3 = -0x4f3380086e2b70c2;
            if ((uVar5 & 1) == 0) {
              lVar3 = 0x42f0c6f150e99035;
            }
          }
          else if (lVar9 == -0x608b613e0d15eb95) {
            if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
            return;
          }
        }
        else if (lVar9 < -0x41fbd41c01740ac7) {
          if (lVar9 == -0x4f3380086e2b70c2) {
            lVar3 = -0x1a2c17747d4c9d16;
            if ((ulong)(param_2[2] + param_2[1]) <= local_80) {
              lVar3 = 0x30873d520a61889c;
            }
          }
          else if (lVar9 == -0x434983ca2ec7188a) {
            lVar3 = -0x608b613e0d15eb95;
          }
        }
        else {
          lVar3 = -0x725e511a790cf4ac;
          if ((lVar9 != -0x41fbd41c01740ac7) && (lVar3 = lVar9, lVar9 == -0x415d5952821d8fc8)) {
            lVar3 = -0x3f06feab6e15bed5;
            unaff_w24 = local_6c;
          }
        }
      }
      if (lVar9 < -0xfd56005cdcebed6) break;
      if (lVar9 < 0x1029ba407f8d7b2d) {
        lVar3 = 0x5a82b43288d2c981;
        if ((lVar9 != -0xfd56005cdcebed6) && (lVar3 = lVar9, lVar9 == 0x6df6ddc7d68c40)) {
          lVar3 = 0x469bef0d6588cd58;
          if (unaff_w24 != 0x7109871a) {
            lVar3 = -0x6e211a48bc109fd4;
          }
        }
      }
      else if (lVar9 == 0x1029ba407f8d7b2d) {
        sVar6 = fread(&local_6c,4,1,(FILE *)*param_2);
        lVar3 = 0x4517d092a6c8637b;
        if (sVar6 != 0) {
          lVar3 = -0x415d5952821d8fc8;
        }
      }
      else if (lVar9 == 0x135ff1730db8c077) {
        uVar8 = *param_2;
        puVar7 = param_2 + 7;
LAB_001e7238:
        FUN_001e485c(param_1,puVar7,(int)local_78 + -4,uVar8);
        lVar3 = -0x725e511a790cf4ac;
      }
    }
    if (lVar9 != -0x3f06feab6e15bed5) {
      if (lVar9 == -0x2e2c7788f6896294) {
        uVar8 = *param_2;
        puVar7 = param_2 + 5;
        goto LAB_001e7238;
      }
      if (lVar9 == -0x1a2c17747d4c9d16) {
        iVar4 = fseek((FILE *)*param_2,local_78 + -4,1);
        lVar3 = -0x41fbd41c01740ac7;
        if (iVar4 != 0) {
          lVar3 = 0x53bf3b45f912026b;
        }
      }
      goto LAB_001e6b20;
    }
    lVar3 = 0x43f7eb53c5724ce0;
    if (0x1b93ad60 < unaff_w24) {
      lVar3 = 0x754d2b88abe28d02;
    }
  } while( true );
}


