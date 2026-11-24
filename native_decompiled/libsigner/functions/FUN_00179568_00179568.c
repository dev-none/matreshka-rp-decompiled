// Function: FUN_00179568
// Entry: 00179568

void FUN_00179568(int *param_1,long *param_2,long param_3,undefined4 *param_4)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  code *pcVar6;
  long unaff_x27;
  int local_7c;
  long local_78;
  int local_70;
  int local_6c;
  
  lVar1 = 0x6dfb47bbe4cae7b2;
  if (param_3 != 0) {
    lVar1 = 0x4eae6d069c9a9c03;
  }
  lVar2 = 0x8b23ccad9df9f6a;
LAB_00179674:
  do {
    while (lVar5 = lVar2, lVar2 = lVar5, -0x294f5c512a42e23 < lVar5) {
      if (lVar5 < 0x2fb5f295e3e11a53) {
        if (lVar5 < 0x95b8ed90ca308ac) {
          if (lVar5 < 0x8b23ccad9df9f6a) {
            if (lVar5 == -0x294f5c512a42e22) {
              *param_4 = 0;
              lVar2 = 0x1c3131676cf5ffec;
            }
            else if (lVar5 == 0xb126800d1c5694) {
              uVar3 = (**(code **)(*param_2 + 0x188))(param_2,param_3,local_78);
              pcVar6 = *(code **)(*param_2 + 0x78);
              *param_4 = uVar3;
              lVar5 = (*pcVar6)(param_2);
              lVar2 = 0x2472ec82293b7a31;
              if (lVar5 != 0) {
                lVar2 = -0x6d6780009009c87a;
              }
            }
          }
          else {
            lVar2 = lVar1;
            if ((lVar5 != 0x8b23ccad9df9f6a) && (lVar2 = lVar5, lVar5 == 0x9273386eef61b94)) {
              lVar2 = -0x7cddf19ee6e0eff;
            }
          }
        }
        else if (lVar5 < 0x1c3131676cf5ffec) {
          if (lVar5 == 0x95b8ed90ca308ac) {
            lVar2 = -0x2fe9c398c61bdd79;
            if (unaff_x27 != 0) {
              lVar2 = 0x9273386eef61b94;
            }
          }
          else if (lVar5 == 0x132f6886704c8342) {
            lVar2 = 0x36c79fbd8d54bf37;
            if (local_78 != 0) {
              lVar2 = 0xb126800d1c5694;
            }
          }
        }
        else {
          lVar2 = 0x2fb5f295e3e11a53;
          if (lVar5 != 0x2472ec82293b7a31) {
            if (lVar5 == 0x24b2c3a0d015b5cb) {
              DAT_001f8124 = 0;
              local_78 = (**(code **)(*param_2 + 0x108))
                                   (param_2,unaff_x27,&DAT_001f6c90,&DAT_001f6c98);
              lVar5 = (**(code **)(*param_2 + 0x78))(param_2);
              lVar2 = 0x132f6886704c8342;
              if (lVar5 != 0) {
                lVar2 = -0x6cac6654ad144e56;
              }
            }
            else {
              lVar2 = lVar5;
              if (lVar5 == 0x1c3131676cf5ffec) {
                return;
              }
            }
          }
        }
      }
      else if (lVar5 < 0x50496e25204bd298) {
        if (lVar5 < 0x388d57bd47f4c7aa) {
          if (lVar5 == 0x2fb5f295e3e11a53) {
            (**(code **)(*param_2 + 0xb8))(param_2,unaff_x27);
            lVar2 = -0x7da83e451115a169;
            if (*param_1 != 0) {
              lVar2 = 0x533a54cc7310f9c6;
            }
          }
          else if (lVar5 == 0x36c79fbd8d54bf37) {
            local_7c = 0xf;
            goto LAB_00179e54;
          }
        }
        else if (lVar5 == 0x388d57bd47f4c7aa) {
          iVar4 = FUN_001ebe70(0,1,&DAT_001f8124);
          lVar2 = -0x250db17d6d6ac30a;
          if (iVar4 != 0) {
            lVar2 = -0x3a333274be6808e0;
          }
        }
        else if (lVar5 == 0x4eae6d069c9a9c03) {
          unaff_x27 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
          lVar5 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar2 = 0x95b8ed90ca308ac;
          if (lVar5 != 0) {
            lVar2 = 0x6813bddde00d9c43;
          }
        }
      }
      else if (lVar5 < 0x6813bddde00d9c43) {
        lVar2 = 0x2fb5f295e3e11a53;
        if ((lVar5 != 0x50496e25204bd298) && (lVar2 = lVar5, lVar5 == 0x533a54cc7310f9c6)) {
          lVar2 = -0x294f5c512a42e22;
        }
      }
      else if (lVar5 == 0x6813bddde00d9c43) {
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        lVar2 = -0x7df392126e2ea86c;
        if (unaff_x27 != 0) {
          lVar2 = 0x50496e25204bd298;
        }
        *param_1 = 0xf;
      }
      else if (lVar5 == 0x6dfb47bbe4cae7b2) {
        local_6c = 3;
LAB_00179f50:
        lVar2 = 0x78e95bff9fc409a9;
      }
      else if (lVar5 == 0x78e95bff9fc409a9) {
        *param_1 = local_6c;
        lVar2 = -0x294f5c512a42e22;
      }
    }
    if (lVar5 < -0x468f366b0538d359) {
      if (lVar5 < -0x6cac6654ad144e56) {
        if (lVar5 < -0x7d3a8c0d69ff55c1) {
          lVar2 = -0x294f5c512a42e22;
          if ((lVar5 != -0x7df392126e2ea86c) && (lVar2 = lVar5, lVar5 == -0x7da83e451115a169)) {
            lVar2 = 0x1c3131676cf5ffec;
          }
          goto LAB_00179674;
        }
        lVar2 = -0x7cddf19ee6e0eff;
        if ((lVar5 == -0x7d3a8c0d69ff55c1) || (lVar2 = lVar5, lVar5 != -0x6d6780009009c87a))
        goto LAB_00179674;
        local_70 = 0x19;
      }
      else {
        if (-0x542fc18e7f704a7b < lVar5) {
          if (lVar5 == -0x542fc18e7f704a7a) {
            DAT_001f6c98 = DAT_001f6c98 ^ 0x43;
            DAT_001f6c99 = DAT_001f6c99 ^ 0x43;
            DAT_001f6c9a = DAT_001f6c9a ^ 0x43;
            DAT_001f6c9b = DAT_001f6c9b ^ 0x43;
            DAT_001f8235 = '\x01';
            lVar2 = -0x4656e5d1a3ea3b58;
          }
          else if (lVar5 == -0x4d48ccc572916e2f) {
            lVar2 = 0x24b2c3a0d015b5cb;
          }
          goto LAB_00179674;
        }
        if (lVar5 != -0x6cac6654ad144e56) {
          if (lVar5 == -0x589e0d53482aa1b6) {
            *param_1 = local_7c;
            lVar2 = 0x2fb5f295e3e11a53;
          }
          goto LAB_00179674;
        }
        local_70 = 0xf;
      }
      lVar2 = -0xa584757e3deb7ff;
      goto LAB_00179674;
    }
    if (lVar5 < -0x2fe9c398c61bdd79) {
      if (lVar5 < -0x3a333274be6808e0) {
        if (lVar5 == -0x468f366b0538d359) {
          DAT_001f6c90 = DAT_001f6c90 ^ 0xa0;
          DAT_001f6c91 = DAT_001f6c91 ^ 0xa0;
          DAT_001f6c92 = DAT_001f6c92 ^ 0xa0;
          DAT_001f6c93 = DAT_001f6c93 ^ 0xa0;
          DAT_001f6c94 = DAT_001f6c94 ^ 0xa0;
          DAT_001f8234 = '\x01';
          lVar2 = 0x24b2c3a0d015b5cb;
        }
        else if (lVar5 == -0x4656e5d1a3ea3b58) {
          DAT_001f8128 = 0;
          lVar2 = 0x388d57bd47f4c7aa;
        }
      }
      else {
        lVar2 = 0x388d57bd47f4c7aa;
        if ((lVar5 != -0x3a333274be6808e0) && (lVar2 = lVar5, lVar5 == -0x34fbd0fa105dfa21)) {
          lVar2 = -0x4656e5d1a3ea3b58;
        }
      }
    }
    else if (lVar5 < -0x16e9e93f91be12f5) {
      if (lVar5 == -0x2fe9c398c61bdd79) {
        local_6c = 0xf;
        goto LAB_00179f50;
      }
      if (lVar5 == -0x250db17d6d6ac30a) {
        lVar2 = -0x4d48ccc572916e2f;
        if (DAT_001f8234 == '\0') {
          lVar2 = -0x468f366b0538d359;
        }
      }
    }
    else if (lVar5 == -0x16e9e93f91be12f5) {
      lVar2 = -0x34fbd0fa105dfa21;
      if (DAT_001f8235 == '\0') {
        lVar2 = -0x542fc18e7f704a7a;
      }
    }
    else if (lVar5 == -0xa584757e3deb7ff) {
      (**(code **)(*param_2 + 0x80))(param_2);
      (**(code **)(*param_2 + 0x88))(param_2);
      local_7c = local_70;
LAB_00179e54:
      lVar2 = -0x589e0d53482aa1b6;
    }
    else if (lVar5 == -0x7cddf19ee6e0eff) {
      iVar4 = FUN_001ebe70(0,1,&DAT_001f8128);
      lVar2 = -0x16e9e93f91be12f5;
      if (iVar4 != 0) {
        lVar2 = -0x7d3a8c0d69ff55c1;
      }
    }
  } while( true );
}


