// Function: FUN_001105f8
// Entry: 001105f8

uint FUN_001105f8(undefined8 param_1,int *param_2,undefined8 param_3,double *param_4)

{
  double *pdVar1;
  double *pdVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  double unaff_d8;
  double unaff_d9;
  double unaff_d10;
  double unaff_d11;
  double unaff_d12;
  double unaff_d13;
  double unaff_d14;
  double unaff_d15;
  double local_a18;
  double local_a10;
  double local_a08;
  uint local_9f4;
  ushort local_9dc [2];
  long local_9d8;
  long local_9d0;
  long local_9c8;
  long local_9c0;
  long local_9b8;
  long local_9b0;
  long local_9a8;
  long local_9a0;
  long local_998;
  long local_990;
  long local_988;
  long local_980;
  long local_978;
  long local_970;
  long local_968;
  long local_960;
  long local_958;
  long local_950;
  long local_948;
  long local_940;
  long local_938;
  long local_930;
  undefined1 auStack_928 [2168];
  long local_b0;
  
  lVar4 = tpidr_el0;
  local_b0 = *(long *)(lVar4 + 0x28);
  local_9dc[0] = 0;
  memset(auStack_928,0,0x878);
  iVar5 = FUN_00166dc8(param_1,param_3,auStack_928);
  lVar3 = -0x1dcfbdf13e510211;
  if (iVar5 != 0) {
    lVar3 = 0x4c807eaf406a59b4;
  }
  pdVar1 = param_4 + 4;
  pdVar2 = param_4 + 1;
  *param_2 = iVar5;
  lVar8 = 0x4b0487fc41a2590e;
LAB_00110748:
  lVar7 = lVar8;
  lVar8 = lVar7;
  if (lVar7 < -0x15b360a54b4976ea) {
    if (-0x43f0442fbe464459 < lVar7) {
      if (lVar7 < -0x3387373d77859511) {
        if (lVar7 < -0x3b5567544767f883) {
          if (lVar7 < -0x3e969bf8a8812bd2) {
            if (lVar7 == -0x43f0442fbe464458) {
              local_968 = 0;
              local_960 = 0;
              FUN_001d8570(0,&local_968);
              unaff_d15 = (double)local_960 / 1000000.0 + (double)local_968 * 1000.0;
              lVar8 = 0x5a3aced94a588832;
              if (unaff_d15 - *param_4 <= 15000.0) {
                lVar8 = 0x3cfbe864c3a77289;
              }
            }
            else if (lVar7 == -0x42159edb89e79eef) {
              local_9a8 = 0;
              local_9a0 = 0;
              FUN_001d8570(0,&local_9a8);
              unaff_d11 = (double)local_9a0 / 1000000.0 + (double)local_9a8 * 1000.0;
              lVar8 = -0x71e7d89c0a506517;
              if (unaff_d11 - *param_4 <= 15000.0) {
                lVar8 = 0x1d086c93a465a0c3;
              }
            }
            else if (lVar7 == -0x3f0d06e83f19f84b) {
              lVar8 = -0x3668b0ce8670e810;
            }
          }
          else if (lVar7 == -0x3e969bf8a8812bd2) {
            *param_4 = unaff_d12;
            lVar8 = -0x3668b0ce8670e810;
          }
          else if (lVar7 == -0x3ce000c32d0f74af) {
            FUN_001e9264(pdVar1,3);
            param_4[0x47] = (double)((ulong)param_4[0x47] | 1);
            lVar8 = -0x3984f96330587eaa;
          }
          else if (lVar7 == -0x3ba6db68718858f1) {
            lVar8 = -0x657e74937f704c35;
          }
        }
        else if (lVar7 < -0x38e4f764dab36e4d) {
          if (lVar7 == -0x3b5567544767f883) {
            FUN_001e9264(pdVar1,0x1e);
            param_4[0x47] = (double)((ulong)param_4[0x47] | 1);
            lVar8 = 0x1a25b2068074ba47;
          }
          else if (lVar7 == -0x3b4e5c5b96f23ccd) {
            *param_4 = unaff_d11;
            lVar8 = -0x6682bb77af072f;
          }
          else if (lVar7 == -0x3984f96330587eaa) {
            lVar8 = 0x13b7e9add3e50794;
            if (*(char *)pdVar2 != '\0') {
              lVar8 = 0x5149580c815b7f68;
            }
          }
        }
        else if (lVar7 < -0x35d290dd8499c396) {
          lVar8 = 0xcb1f7856ef3e66a;
          if ((lVar7 != -0x38e4f764dab36e4d) && (lVar8 = lVar7, lVar7 == -0x3668b0ce8670e810)) {
            uVar6 = FUN_0012bdac(param_1);
            lVar8 = 0x703781d332885ee0;
            if ((uVar6 & 1) == 0) {
              lVar8 = -0x2ab83678e90cfc72;
            }
          }
        }
        else {
          lVar8 = -0x71e077b68071675f;
          if ((lVar7 != -0x35d290dd8499c396) && (lVar8 = lVar7, lVar7 == -0x34c850c5a84f18e9)) {
            lVar8 = -0x52eb957c549ae831;
            goto LAB_00110740;
          }
        }
      }
      else if (lVar7 < -0x25a0476d34e215bf) {
        if (lVar7 < -0x2add63388c18cfe7) {
          if (lVar7 < -0x2df1266cf47fa359) {
            if (lVar7 == -0x3387373d77859511) {
              local_9c8 = 0;
              local_9c0 = 0;
              FUN_001d8570(0,&local_9c8);
              local_a10 = (double)local_9c0 / 1000000.0 + (double)local_9c8 * 1000.0;
              lVar8 = -0x72a9745fe2555ebf;
              if (local_a10 - *param_4 <= 15000.0) {
                lVar8 = 0x5695a1133a1e301f;
              }
            }
            else if (lVar7 == -0x3227edfad4ae9f68) {
              param_4[0x47] = (double)((ulong)param_4[0x47] | 0x1181c000010e);
              FUN_00163084(param_4);
              param_4[0x47] = (double)((ulong)param_4[0x47] | 0x202001000);
              FUN_0016b5d4(auStack_928);
              if (*(long *)(lVar4 + 0x28) == local_b0) {
                return local_9f4 & 1;
              }
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
          }
          else if (lVar7 == -0x2df1266cf47fa359) {
            FUN_001e9264(pdVar1,0x27);
            param_4[0x47] = (double)((ulong)param_4[0x47] | 1);
            lVar8 = 0x5f51f1df2f1cc4a;
          }
          else if (lVar7 == -0x2ce3df39da091baa) {
            lVar8 = -0x657e74937f704c35;
            goto LAB_00110740;
          }
        }
        else if (lVar7 == -0x2add63388c18cfe7) {
          FUN_001e9264(pdVar1,0x20);
          param_4[0x47] = (double)((ulong)param_4[0x47] | 1);
          lVar8 = 0x686aafe978de1dba;
        }
        else {
          lVar8 = 0x4ee403bc90248aea;
          if ((lVar7 != -0x2ab83678e90cfc72) && (lVar8 = lVar7, lVar7 == -0x27e39c9d7fd6ef62)) {
            lVar8 = 0x7f14270c3590edea;
          }
        }
      }
      else if (lVar7 < -0x20b96616990d67ca) {
        if (lVar7 == -0x25a0476d34e215bf) {
          local_9dc[0] = 0;
          FUN_00123e84(param_1,local_9dc);
          lVar8 = 0x1e314b5c71a8bd6f;
          if (local_9dc[0] < 6) {
            lVar8 = 0x2bc79dc78ee7d0df;
          }
        }
        else {
          if (lVar7 == -0x2542d43fb85d23b1) {
            lVar8 = -0x7bcdbae8aaceaa68;
            goto LAB_00110740;
          }
          if (lVar7 == -0x24ee3c5e246ec436) goto LAB_00111b40;
        }
      }
      else if (lVar7 == -0x20b96616990d67ca) {
        lVar8 = -0x42159edb89e79eef;
        if (*(char *)pdVar2 != '\0') {
          lVar8 = -0xdc935a0c3d14c0e;
        }
      }
      else if (lVar7 == -0x1dcfbdf13e510211) {
        FUN_0011c97c(local_9dc);
        lVar8 = -0x60a1584a600614bc;
        if (local_9dc[0] != 0) {
          lVar8 = 0x76d7a27cf05aa1fd;
        }
      }
      else if (lVar7 == -0x17f963b8561a3685) {
        lVar8 = -0x15b360a54b4976ea;
      }
      goto LAB_00110748;
    }
    if (-0x60a1584a600614bd < lVar7) {
      if (lVar7 < -0x5d31cafea13d402f) {
        if (lVar7 < -0x5de29fbc91985c04) {
          lVar8 = -0x79bf7dc00f11b1ef;
          if (lVar7 != -0x60a1584a600614bc) {
            if (lVar7 == -0x606551946c712a28) {
              local_9dc[0] = 0;
              FUN_0012d490(param_1,local_9dc);
              lVar8 = -0x2df1266cf47fa359;
              if (local_9dc[0] < 6) {
                lVar8 = 0x4b1d06d662edcd58;
              }
            }
            else {
              lVar8 = lVar7;
              if (lVar7 == -0x6011e7f0cf0ddd5b) {
                lVar8 = -0x606551946c712a28;
              }
            }
          }
        }
        else {
          lVar8 = 0x5b07d13b9a2c4c47;
          if (((lVar7 != -0x5de29fbc91985c04) &&
              (lVar8 = 0x546c08c1c9184140, lVar7 != -0x5d8c044866d3296a)) &&
             (lVar8 = lVar7, lVar7 == -0x5d839d50d292350a)) {
            lVar8 = 0x1a25b2068074ba47;
          }
        }
      }
      else if (lVar7 < -0x5a9e53c8fe58a72b) {
        lVar8 = -0x6738ab477cd999dd;
        if (((lVar7 != -0x5d31cafea13d402f) &&
            (lVar8 = 0x686aafe978de1dba, lVar7 != -0x5d12360f0698112b)) &&
           (lVar8 = lVar7, lVar7 == -0x5c439fadf417bc8a)) {
          local_978 = 0;
          local_970 = 0;
          FUN_001d8570(0,&local_978);
          unaff_d14 = (double)local_970 / 1000000.0 + (double)local_978 * 1000.0;
          lVar8 = 0x37ed31f08f53f1f4;
          if (unaff_d14 - *param_4 <= 15000.0) {
            lVar8 = -0x35d290dd8499c396;
          }
        }
      }
      else if (lVar7 < -0x4c3a057137698eec) {
        if (lVar7 == -0x5a9e53c8fe58a72b) {
          local_9dc[0] = 0;
          FUN_0011e344(local_9dc);
          lVar8 = -0x17f963b8561a3685;
          if (local_9dc[0] != 0) {
            lVar8 = 0x50fa2b6150a290e8;
          }
        }
        else if (lVar7 == -0x52eb957c549ae831) {
          *param_4 = unaff_d8;
          lVar8 = -0x5a9e53c8fe58a72b;
        }
      }
      else if (lVar7 == -0x4c3a057137698eec) {
        *param_4 = local_a10;
        lVar8 = 0x546c08c1c9184140;
      }
      else if (lVar7 == -0x4885a353a244721e) {
        lVar8 = 0x69a0f5aaf35dfa04;
      }
      goto LAB_00110748;
    }
    if (-0x71e077b680716760 < lVar7) {
      if (lVar7 < -0x6e38b33ba26cc7c4) {
        if (lVar7 == -0x71e077b68071675f) {
          *param_4 = unaff_d14;
          lVar8 = 0x2266c651dfbde0dc;
        }
        else if (lVar7 == -0x701a5b76114d9682) {
          local_998 = 0;
          local_990 = 0;
          FUN_001d8570(0,&local_998);
          unaff_d12 = (double)local_990 / 1000000.0 + (double)local_998 * 1000.0;
          lVar8 = -0x74ad9eccc25f9b2;
          if (unaff_d12 - *param_4 <= 15000.0) {
            lVar8 = 0x4d6b64e504d8a921;
          }
        }
        else if (lVar7 == -0x6f8b4935e625164f) {
          lVar8 = -0x5a9e53c8fe58a72b;
        }
      }
      else if (lVar7 == -0x6e38b33ba26cc7c4) {
        *param_4 = unaff_d15;
        lVar8 = -0x14f8c4e896943237;
      }
      else if (lVar7 == -0x6738ab477cd999dd) {
        *param_4 = unaff_d10;
        lVar8 = 0x7f14270c3590edea;
      }
      else if (lVar7 == -0x657e74937f704c35) {
        *param_4 = local_a18;
        lVar8 = -0x25a0476d34e215bf;
      }
      goto LAB_00110748;
    }
    if (lVar7 < -0x72dc51d93acf526c) {
      if (lVar7 != -0x7c087be1081466e1) {
        if (lVar7 == -0x7bcdbae8aaceaa68) {
          *param_4 = local_a08;
          lVar8 = 0x2789dc481b795cf1;
        }
        else if (lVar7 == -0x79bf7dc00f11b1ef) {
          lVar8 = 0x177785e5fe74d286;
          if (*(char *)pdVar2 != '\0') {
            lVar8 = 0x154f676f4a5ce494;
          }
        }
        goto LAB_00110748;
      }
      lVar8 = -0x6738ab477cd999dd;
    }
    else {
      if (lVar7 == -0x72dc51d93acf526c) {
        FUN_001e9264(pdVar1,2);
        param_4[0x47] = (double)((ulong)param_4[0x47] | 1);
        lVar8 = 0x69a0f5aaf35dfa04;
        goto LAB_00110748;
      }
      if (lVar7 == -0x72a9745fe2555ebf) {
        lVar8 = -0x4c3a057137698eec;
        goto LAB_00110740;
      }
      if (lVar7 != -0x71e7d89c0a506517) goto LAB_00110748;
      lVar8 = -0x3b4e5c5b96f23ccd;
    }
  }
  else if (lVar7 < 0x3db6504342eeb5c6) {
    if (lVar7 < 0x13b7e9add3e50794) {
      if (-0x2fd038e5b15bbcb < lVar7) {
        if (lVar7 < 0x4d42b27b99b1208) {
          if (lVar7 == -0x2fd038e5b15bbca) {
            local_958 = 0;
            local_950 = 0;
            FUN_001d8570(0,&local_958);
            unaff_d8 = (double)local_950 / 1000000.0 + (double)local_958 * 1000.0;
            lVar8 = -0x34c850c5a84f18e9;
            if (unaff_d8 - *param_4 <= 15000.0) {
              lVar8 = 0x3db6504342eeb5c6;
            }
          }
          else if (lVar7 == -0x6682bb77af072f) {
            uVar6 = FUN_0012b44c(param_1);
            lVar8 = 0x4f500b65a831bee4;
            if ((uVar6 & 1) == 0) {
              lVar8 = 0x21c0e93cbb360418;
            }
          }
          else if (lVar7 == 0x127ab137eea64fe) {
            lVar8 = -0x7bcdbae8aaceaa68;
          }
        }
        else {
          lVar8 = 0x2266c651dfbde0dc;
          if (lVar7 != 0x4d42b27b99b1208) {
            if (lVar7 == 0x5f51f1df2f1cc4a) {
              lVar8 = -0x5c439fadf417bc8a;
              if (*(char *)pdVar2 != '\0') {
                lVar8 = 0x4d42b27b99b1208;
              }
            }
            else {
              lVar8 = lVar7;
              if (lVar7 == 0xcb1f7856ef3e66a) {
                *param_4 = unaff_d9;
                lVar8 = 0x5b07d13b9a2c4c47;
              }
            }
          }
        }
        goto LAB_00110748;
      }
      if (lVar7 < -0x8f7c1b071b835ff) {
        if (lVar7 == -0x15b360a54b4976ea) {
          lVar8 = -0x8f7c1b071b835ff;
          if (*(char *)pdVar2 != '\0') {
            lVar8 = -0x5de29fbc91985c04;
          }
        }
        else if (lVar7 == -0x14f8c4e896943237) {
          local_9dc[0] = 0;
          FUN_00120118(local_9dc);
          lVar8 = -0x5d839d50d292350a;
          if (local_9dc[0] != 0) {
            lVar8 = -0x3b5567544767f883;
          }
        }
        else if (lVar7 == -0xdc935a0c3d14c0e) {
          lVar8 = -0x6682bb77af072f;
        }
        goto LAB_00110748;
      }
      if (lVar7 == -0x8f7c1b071b835ff) {
        local_948 = 0;
        local_940 = 0;
        FUN_001d8570(0,&local_948);
        unaff_d9 = (double)local_940 / 1000000.0 + (double)local_948 * 1000.0;
        lVar8 = 0x69e4dec6b0ebb25c;
        if (unaff_d9 - *param_4 <= 15000.0) {
          lVar8 = -0x38e4f764dab36e4d;
        }
        goto LAB_00110748;
      }
      if (lVar7 != -0x74ad9eccc25f9b2) {
        if (lVar7 == -0x5a65df57888327c) {
          *param_4 = unaff_d13;
          lVar8 = -0x606551946c712a28;
        }
        goto LAB_00110748;
      }
      lVar8 = -0x3e969bf8a8812bd2;
    }
    else {
      if (lVar7 < 0x21c0e93cbb360418) {
        if (lVar7 < 0x1a25b2068074ba47) {
          if (lVar7 == 0x13b7e9add3e50794) {
            local_9b8 = 0;
            local_9b0 = 0;
            FUN_001d8570(0,&local_9b8);
            local_a18 = (double)local_9b0 / 1000000.0 + (double)local_9b8 * 1000.0;
            lVar8 = -0x2ce3df39da091baa;
            if (local_a18 - *param_4 <= 15000.0) {
              lVar8 = -0x3ba6db68718858f1;
            }
          }
          else {
            lVar8 = 0x2789dc481b795cf1;
            if ((lVar7 != 0x154f676f4a5ce494) && (lVar8 = lVar7, lVar7 == 0x177785e5fe74d286)) {
              local_9d8 = 0;
              local_9d0 = 0;
              FUN_001d8570(0,&local_9d8);
              local_a08 = (double)local_9d0 / 1000000.0 + (double)local_9d8 * 1000.0;
              lVar8 = -0x2542d43fb85d23b1;
              if (local_a08 - *param_4 <= 15000.0) {
                lVar8 = 0x127ab137eea64fe;
              }
            }
          }
        }
        else if (lVar7 == 0x1a25b2068074ba47) {
          lVar8 = -0x2fd038e5b15bbca;
          if (*(char *)pdVar2 != '\0') {
            lVar8 = -0x6f8b4935e625164f;
          }
        }
        else {
          lVar8 = -0x3b4e5c5b96f23ccd;
          if ((lVar7 != 0x1d086c93a465a0c3) && (lVar8 = lVar7, lVar7 == 0x1e314b5c71a8bd6f)) {
            FUN_001e9264(pdVar1,8);
            param_4[0x47] = (double)((ulong)param_4[0x47] | 1);
            lVar8 = -0x20b96616990d67ca;
          }
        }
        goto LAB_00110748;
      }
      if (lVar7 < 0x2bc79dc78ee7d0df) {
        lVar8 = 0x4bbb86392a586d99;
        if (lVar7 != 0x21c0e93cbb360418) {
          if (lVar7 == 0x2266c651dfbde0dc) {
            uVar6 = FUN_00165574(auStack_928);
            lVar8 = -0x2add63388c18cfe7;
            if ((uVar6 & 1) == 0) {
              lVar8 = -0x5d12360f0698112b;
            }
          }
          else {
            lVar8 = lVar7;
            if (lVar7 == 0x2789dc481b795cf1) {
              local_9dc[0] = 0;
              FUN_0011d7c8(local_9dc);
              lVar8 = -0x72dc51d93acf526c;
              if (local_9dc[0] < 3) {
                lVar8 = -0x4885a353a244721e;
              }
            }
          }
        }
        goto LAB_00110748;
      }
      if (0x3c4c2a160e51da03 < lVar7) {
        lVar8 = -0x5a65df57888327c;
        if ((lVar7 != 0x3c4c2a160e51da04) && (lVar8 = lVar7, lVar7 == 0x3cfbe864c3a77289)) {
          lVar8 = -0x6e38b33ba26cc7c4;
        }
        goto LAB_00110748;
      }
      lVar8 = -0x20b96616990d67ca;
      if ((lVar7 == 0x2bc79dc78ee7d0df) || (lVar8 = lVar7, lVar7 != 0x37ed31f08f53f1f4))
      goto LAB_00110748;
      lVar8 = -0x71e077b68071675f;
    }
  }
  else {
    if (lVar7 < 0x5a3aced94a588832) {
      if (lVar7 < 0x4ee403bc90248aea) {
        if (lVar7 < 0x4bbb86392a586d99) {
          lVar8 = -0x52eb957c549ae831;
          if (((lVar7 != 0x3db6504342eeb5c6) && (lVar8 = lVar3, lVar7 != 0x4b0487fc41a2590e)) &&
             (lVar8 = lVar7, lVar7 == 0x4b1d06d662edcd58)) {
            lVar8 = 0x5f51f1df2f1cc4a;
          }
        }
        else if (lVar7 == 0x4bbb86392a586d99) {
          lVar8 = -0x701a5b76114d9682;
          if (*(char *)pdVar2 != '\0') {
            lVar8 = -0x3f0d06e83f19f84b;
          }
        }
        else if (lVar7 == 0x4c807eaf406a59b4) {
LAB_00111b40:
          local_9f4 = 0;
          lVar8 = -0x3227edfad4ae9f68;
        }
        else if (lVar7 == 0x4d6b64e504d8a921) {
          lVar8 = -0x3e969bf8a8812bd2;
        }
      }
      else if (lVar7 < 0x5149580c815b7f68) {
        if (lVar7 == 0x4ee403bc90248aea) {
          lVar8 = 0x7775b513a86ca16b;
          if (*(char *)pdVar2 != '\0') {
            lVar8 = -0x6011e7f0cf0ddd5b;
          }
        }
        else if (lVar7 == 0x4f500b65a831bee4) {
          FUN_001e9264(pdVar1,0x28);
          param_4[0x47] = (double)((ulong)param_4[0x47] | 1);
          lVar8 = 0x4bbb86392a586d99;
        }
        else if (lVar7 == 0x50fa2b6150a290e8) {
          FUN_001e9264(pdVar1,0x1f);
          param_4[0x47] = (double)((ulong)param_4[0x47] | 1);
          lVar8 = -0x15b360a54b4976ea;
        }
      }
      else if (lVar7 < 0x5695a1133a1e301f) {
        lVar8 = -0x25a0476d34e215bf;
        if ((lVar7 != 0x5149580c815b7f68) && (lVar8 = lVar7, lVar7 == 0x546c08c1c9184140)) {
          local_9dc[0] = 0;
          FUN_00121464(local_9dc);
          lVar8 = 0x656397b75fcf08e8;
          if (local_9dc[0] != 0) {
            lVar8 = -0x3ce000c32d0f74af;
          }
        }
      }
      else {
        lVar8 = -0x4c3a057137698eec;
        if ((lVar7 != 0x5695a1133a1e301f) && (lVar8 = lVar7, lVar7 == 0x5a11fb51b50ab0a1)) {
          local_938 = 0;
          local_930 = 0;
          FUN_001d8570(0,&local_938);
          unaff_d10 = (double)local_930 / 1000000.0 + (double)local_938 * 1000.0;
          lVar8 = -0x7c087be1081466e1;
          if (unaff_d10 - *param_4 <= 15000.0) {
            lVar8 = -0x5d31cafea13d402f;
          }
        }
      }
      goto LAB_00110748;
    }
    if (lVar7 < 0x69e4dec6b0ebb25c) {
      if (0x656397b75fcf08e7 < lVar7) {
        lVar8 = -0x3984f96330587eaa;
        if (lVar7 != 0x656397b75fcf08e8) {
          if (lVar7 == 0x686aafe978de1dba) {
            lVar8 = -0x43f0442fbe464458;
            if (*(char *)pdVar2 != '\0') {
              lVar8 = 0x7dfcf83e979bea6c;
            }
          }
          else {
            lVar8 = lVar7;
            if (lVar7 == 0x69a0f5aaf35dfa04) {
              lVar8 = -0x3387373d77859511;
              if (*(char *)pdVar2 != '\0') {
                lVar8 = -0x5d8c044866d3296a;
              }
            }
          }
        }
        goto LAB_00110748;
      }
      if (lVar7 == 0x5a3aced94a588832) {
        lVar8 = -0x6e38b33ba26cc7c4;
      }
      else {
        if (lVar7 == 0x5b07d13b9a2c4c47) {
          uVar6 = FUN_00112550(param_2,auStack_928);
          lVar8 = 0x6a86f9a27a48a6ad;
          if ((uVar6 & 1) == 0) {
            lVar8 = -0x24ee3c5e246ec436;
          }
          goto LAB_00110748;
        }
        if (lVar7 != 0x63358bc6c5c6d7dc) goto LAB_00110748;
        lVar8 = -0x5a65df57888327c;
      }
    }
    else {
      if (0x76d7a27cf05aa1fc < lVar7) {
        if (lVar7 < 0x7dfcf83e979bea6c) {
          if (lVar7 == 0x76d7a27cf05aa1fd) {
            FUN_001e9264(pdVar1,1);
            param_4[0x47] = (double)((ulong)param_4[0x47] | 1);
            lVar8 = -0x79bf7dc00f11b1ef;
          }
          else if (lVar7 == 0x7775b513a86ca16b) {
            local_988 = 0;
            local_980 = 0;
            FUN_001d8570(0,&local_988);
            unaff_d13 = (double)local_980 / 1000000.0 + (double)local_988 * 1000.0;
            lVar8 = 0x63358bc6c5c6d7dc;
            if (unaff_d13 - *param_4 <= 15000.0) {
              lVar8 = 0x3c4c2a160e51da04;
            }
          }
        }
        else {
          lVar8 = -0x14f8c4e896943237;
          if ((lVar7 != 0x7dfcf83e979bea6c) && (lVar8 = lVar7, lVar7 == 0x7f14270c3590edea)) {
            FUN_00115a40(auStack_928,param_4);
            local_9f4 = 1;
            lVar8 = -0x3227edfad4ae9f68;
          }
        }
        goto LAB_00110748;
      }
      if (lVar7 != 0x69e4dec6b0ebb25c) {
        if (lVar7 == 0x6a86f9a27a48a6ad) {
          lVar8 = 0x5a11fb51b50ab0a1;
          if (*(char *)pdVar2 != '\0') {
            lVar8 = -0x27e39c9d7fd6ef62;
          }
        }
        else if (lVar7 == 0x703781d332885ee0) {
          FUN_001e9264(pdVar1,0x2c);
          param_4[0x47] = (double)((ulong)param_4[0x47] | 1);
          lVar8 = 0x4ee403bc90248aea;
        }
        goto LAB_00110748;
      }
      lVar8 = 0xcb1f7856ef3e66a;
    }
  }
LAB_00110740:
  *(char *)pdVar2 = '\x01';
  goto LAB_00110748;
}


