// Function: FUN_0016a548
// Entry: 0016a548

void FUN_0016a548(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long *unaff_x22;
  long *unaff_x25;
  long *unaff_x28;
  undefined1 auStack_d0 [8];
  long local_c8;
  long local_c0;
  long local_b8;
  undefined8 local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long *local_90;
  long local_88;
  
  local_b0 = param_2;
  local_c8 = tpidr_el0;
  local_88 = *(long *)(local_c8 + 0x28);
  local_c0 = param_3 + 0x60;
  local_b8 = param_3 + 100;
  plVar3 = (long *)auStack_d0;
  lVar2 = -0x1410927b6c165af6;
LAB_0016a61c:
  do {
    while (lVar5 = lVar2, plVar1 = local_90, lVar2 = lVar5, 0xd4f37feab051768 < lVar5) {
      if (lVar5 < 0x561bbb5631dafc6b) {
        if (lVar5 < 0x266612a3e7e37635) {
          if (lVar5 < 0x133ea96a92efa1e3) {
            if (lVar5 == 0xd4f37feab051769) {
              (**(code **)(*param_1 + 0xb8))(param_1,local_98);
              lVar2 = 0x148c6f3dda576742;
            }
            else if (lVar5 == 0x118b3ba751e6c820) {
              lVar2 = -0x7e784311fa039f85;
              if (DAT_001f80a6 == '\0') {
                lVar2 = -0x240f0f60b8eb0ad4;
              }
            }
          }
          else if (lVar5 == 0x133ea96a92efa1e3) {
LAB_0016a604:
            *(int *)unaff_x22 = 0x1a;
            lVar2 = 0x7b38f3bbbeb9eb3c;
          }
          else if (lVar5 == 0x148c6f3dda576742) {
            lVar5 = *unaff_x28;
            *unaff_x25 = 0;
            local_a0 = lVar5;
            lVar2 = 0x5fcc3dcdd31ebeb0;
            if (lVar5 == 0 || param_1 == (long *)0x0) {
              lVar2 = -0x54b052eaff311497;
            }
          }
          else if (lVar5 == 0x24c9f05f846a8e83) {
            lVar2 = -0xd632bf5ab4fd09d;
          }
        }
        else if (lVar5 < 0x41f38a53065e101e) {
          lVar2 = 0x7b38f3bbbeb9eb3c;
          if ((lVar5 != 0x266612a3e7e37635) && (lVar2 = lVar5, lVar5 == 0x2d3682d1ab9b85b1)) {
            DAT_001f6920 = DAT_001f6920 ^ 0x2f;
            DAT_001f6921 = DAT_001f6921 ^ 0x2f;
            DAT_001f6922 = DAT_001f6922 ^ 0x2f;
            DAT_001f6924 = DAT_001f6924 ^ 0x2f;
            DAT_001f6925 = DAT_001f6925 ^ 0x2f;
            DAT_001f6923 = DAT_001f6923 ^ 0x2f;
            DAT_001f6926 = DAT_001f6926 ^ 0x2f;
            DAT_001f6918 = DAT_001f6918 ^ 0x2f2f2f2f2f2f2f2f;
            DAT_001f80a4 = '\x01';
            lVar2 = -0x191c8e0917599521;
          }
        }
        else if (lVar5 == 0x41f38a53065e101e) {
          FUN_00187708(unaff_x22,param_1,*local_90,*unaff_x28);
          lVar2 = -0x1d11c07c48bed92f;
          if ((int)*unaff_x22 != 0) {
            lVar2 = -0x4c3920cfedfee540;
          }
        }
        else {
          lVar2 = -0x3ae31ba6f8f08724;
          if ((lVar5 != 0x4f3469900a053243) && (lVar2 = lVar5, lVar5 == 0x55e2f28042b12565)) {
            (**(code **)(*param_1 + 0xb8))(param_1,local_a8);
            lVar2 = -0x15b3ed23b1938b45;
          }
        }
      }
      else if (lVar5 < 0x6c48b7aba9631696) {
        if (lVar5 < 0x633892a6e191854a) {
          lVar2 = -0x3ae31ba6f8f08724;
          if ((lVar5 != 0x561bbb5631dafc6b) && (lVar2 = lVar5, lVar5 == 0x5fcc3dcdd31ebeb0)) {
            (**(code **)(*param_1 + 0xb8))(param_1,local_a0);
            lVar2 = 0x7601b81936e2c063;
          }
        }
        else {
          lVar2 = -0x15b3ed23b1938b45;
          if (lVar5 != 0x633892a6e191854a) {
            if (lVar5 == 0x6733f5af3179c42a) {
              DAT_001f7fac = 0;
              FUN_00182c70(unaff_x22,param_1,*unaff_x28,&DAT_001f6928,local_c0);
              lVar2 = 0x561bbb5631dafc6b;
              if ((int)*unaff_x22 != 0) {
                lVar2 = 0x133ea96a92efa1e3;
              }
            }
            else {
              lVar2 = lVar5;
              if (lVar5 == 0x676ea4345eca87c3) {
                lVar2 = 0x7b38f3bbbeb9eb3c;
              }
            }
          }
        }
      }
      else if (lVar5 < 0x7601b81936e2c063) {
        if (lVar5 == 0x6c48b7aba9631696) {
          iVar4 = FUN_001ebe70(0,1,&DAT_001f7fac);
          lVar2 = -0x528c509bcd5c6111;
          if (iVar4 != 0) {
            lVar2 = -0x5818a92586901e89;
          }
        }
        else if (lVar5 == 0x6f2cf733e0033958) {
          DAT_001f7fb0 = 0;
          FUN_00182c70(unaff_x22,param_1,*unaff_x28,&DAT_001f6938,local_b8);
          lVar2 = -0x2c1b590fa84e0f1c;
          if ((int)*unaff_x22 != 0) {
            lVar2 = -0x5cfafd9c520dd3bc;
          }
        }
      }
      else if (lVar5 == 0x7601b81936e2c063) {
        *unaff_x28 = 0;
        local_a8 = *plVar1;
        lVar2 = 0x55e2f28042b12565;
        if (*plVar1 == 0 || param_1 == (long *)0x0) {
          lVar2 = 0x633892a6e191854a;
        }
      }
      else if (lVar5 == 0x7b38f3bbbeb9eb3c) {
        local_98 = *unaff_x25;
        lVar2 = 0xd4f37feab051769;
        if (*unaff_x25 == 0 || param_1 == (long *)0x0) {
          lVar2 = 0x569780c7c2306b3;
        }
      }
      else if (lVar5 == 0x7caa1dac7815647a) {
        FUN_00192ed8(unaff_x22,param_1,*unaff_x25,local_90);
        lVar2 = -0x53e3f9883f546d5e;
        if ((int)*unaff_x22 != 0) {
          lVar2 = 0x676ea4345eca87c3;
        }
      }
    }
    if (-0x3ae31ba6f8f08725 < lVar5) {
      if (lVar5 < -0x15b3ed23b1938b45) {
        if (lVar5 < -0x240f0f60b8eb0ad4) {
          if (lVar5 == -0x3ae31ba6f8f08724) {
            iVar4 = FUN_001ebe70(0,1,&DAT_001f7fb0);
            lVar2 = 0x118b3ba751e6c820;
            if (iVar4 != 0) {
              lVar2 = 0x4f3469900a053243;
            }
          }
          else if (lVar5 == -0x2c1b590fa84e0f1c) {
            lVar2 = 0x7b38f3bbbeb9eb3c;
          }
        }
        else if (lVar5 == -0x240f0f60b8eb0ad4) {
          DAT_001f6940 = DAT_001f6940 ^ 0xd1;
          DAT_001f6941 = DAT_001f6941 ^ 0xd1;
          DAT_001f6942 = DAT_001f6942 ^ 0xd1;
          DAT_001f6943 = DAT_001f6943 ^ 0xd1;
          DAT_001f6944 = DAT_001f6944 ^ 0xd1;
          DAT_001f6938 = DAT_001f6938 ^ 0xd1d1d1d1d1d1d1d1;
          DAT_001f80a6 = '\x01';
          lVar2 = 0x6f2cf733e0033958;
        }
        else {
          lVar2 = 0x6c48b7aba9631696;
          if ((lVar5 != -0x1d11c07c48bed92f) && (lVar2 = lVar5, lVar5 == -0x191c8e0917599521)) {
            unaff_x22 = plVar3 + -2;
            DAT_001f7fa8 = 0;
            unaff_x25 = plVar3 + -4;
            unaff_x28 = plVar3 + -6;
            plVar6 = plVar3 + -8;
            *(undefined4 *)(plVar3 + -2) = 0;
            plVar3[-4] = 0;
            plVar3[-6] = 0;
            plVar3[-8] = 0;
            local_90 = plVar6;
            FUN_001863c8(unaff_x22,param_1,local_b0,&DAT_001f6918,unaff_x25);
            plVar1 = plVar3 + -2;
            plVar3 = plVar6;
            lVar2 = 0x7caa1dac7815647a;
            if ((int)*plVar1 != 0) {
              lVar2 = -0x55050e564f6414dc;
            }
          }
        }
      }
      else if (lVar5 < 0x569780c7c2306b3) {
        lVar2 = -0xd632bf5ab4fd09d;
        if (lVar5 != -0x1410927b6c165af6) {
          if (lVar5 == -0xd632bf5ab4fd09d) {
            iVar4 = FUN_001ebe70(0,1,&DAT_001f7fa8);
            lVar2 = -0x40ff7db2c0502265;
            if (iVar4 != 0) {
              lVar2 = 0x24c9f05f846a8e83;
            }
          }
          else {
            lVar2 = lVar5;
            if (lVar5 == -0x15b3ed23b1938b45) {
              if (*(long *)(local_c8 + 0x28) == local_88) {
                return;
              }
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail((int)*unaff_x22);
            }
          }
        }
      }
      else {
        lVar2 = 0x148c6f3dda576742;
        if (((lVar5 != 0x569780c7c2306b3) &&
            (lVar2 = 0x6733f5af3179c42a, lVar5 != 0x5ae8866d4cef2f3)) &&
           (lVar2 = lVar5, lVar5 == 0x897af68e505092c)) {
          DAT_001f6930 = DAT_001f6930 ^ 0x6b;
          DAT_001f6931 = DAT_001f6931 ^ 0x6b;
          DAT_001f6932 = DAT_001f6932 ^ 0x6b;
          DAT_001f6933 = DAT_001f6933 ^ 0x6b;
          DAT_001f6928 = DAT_001f6928 ^ 0x6b6b6b6b6b6b6b6b;
          DAT_001f80a5 = '\x01';
          lVar2 = 0x6733f5af3179c42a;
        }
      }
      goto LAB_0016a61c;
    }
    if (lVar5 < -0x53e3f9883f546d5e) {
      if (lVar5 < -0x5818a92586901e89) {
        lVar2 = 0x6f2cf733e0033958;
        if ((lVar5 != -0x7e784311fa039f85) && (lVar2 = lVar5, lVar5 == -0x5cfafd9c520dd3bc))
        goto LAB_0016a604;
      }
      else {
        lVar2 = 0x6c48b7aba9631696;
        if (lVar5 != -0x5818a92586901e89) {
          if (lVar5 == -0x55050e564f6414dc) {
            *(int *)unaff_x22 = 0x22;
            lVar2 = 0x7b38f3bbbeb9eb3c;
          }
          else {
            lVar2 = lVar5;
            if (lVar5 == -0x54b052eaff311497) {
              lVar2 = 0x7601b81936e2c063;
            }
          }
        }
      }
    }
    else if (lVar5 < -0x4c3920cfedfee540) {
      if (lVar5 == -0x53e3f9883f546d5e) {
        FUN_001882e0(unaff_x22,param_1,unaff_x28);
        lVar2 = 0x41f38a53065e101e;
        if ((int)*unaff_x22 != 0) {
          lVar2 = 0x266612a3e7e37635;
        }
      }
      else if (lVar5 == -0x528c509bcd5c6111) {
        lVar2 = 0x5ae8866d4cef2f3;
        if (DAT_001f80a5 == '\0') {
          lVar2 = 0x897af68e505092c;
        }
      }
    }
    else {
      lVar2 = 0x7b38f3bbbeb9eb3c;
      if (((lVar5 != -0x4c3920cfedfee540) &&
          (lVar2 = -0x191c8e0917599521, lVar5 != -0x47356b82543a63e6)) &&
         (lVar2 = lVar5, lVar5 == -0x40ff7db2c0502265)) {
        lVar2 = -0x47356b82543a63e6;
        if (DAT_001f80a4 == '\0') {
          lVar2 = 0x2d3682d1ab9b85b1;
        }
      }
    }
  } while( true );
}


