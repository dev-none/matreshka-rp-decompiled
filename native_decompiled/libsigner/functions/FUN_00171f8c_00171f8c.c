// Function: FUN_00171f8c
// Entry: 00171f8c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00171f8c(undefined4 *param_1,long *param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  byte unaff_w23;
  long unaff_x27;
  long unaff_x28;
  long local_e0;
  long local_d8;
  long *local_c8;
  undefined4 local_bc;
  long *local_b8;
  long local_b0;
  long *local_a8;
  undefined4 local_9c;
  long local_88;
  undefined4 local_7c;
  long local_78;
  long *local_68;
  
  lVar1 = 0x546c08c1c9184140;
  if ((param_5 == 0 || param_4 == 0) || param_3 == 0) {
    lVar1 = -0x4c3a057137698eec;
  }
  plVar2 = param_2;
  lVar3 = lVar1;
  lVar8 = -0x72a9745fe2555ebf;
LAB_001720ac:
  lVar9 = lVar8;
  lVar6 = lVar3;
  plVar7 = plVar2;
  plVar2 = plVar7;
  lVar3 = lVar6;
  lVar8 = lVar9;
  if (lVar9 < -0x74ad9eccc25f9b2) {
    if (-0x3e969bf8a8812bd3 < lVar9) {
      if (-0x35d290dd8499c397 < lVar9) {
        if (lVar9 < -0x25a0476d34e215bf) {
          if (lVar9 < -0x2ce3df39da091baa) {
            if (lVar9 == -0x2df1266cf47fa359) {
              (**(code **)(*param_2 + 0xb8))(param_2,local_c8);
              goto LAB_00172ac4;
            }
            if (lVar9 == -0x35d290dd8499c396) {
              return;
            }
          }
          else if (lVar9 == -0x2ce3df39da091baa) {
            _DAT_001f6a60 = _DAT_001f6a60 ^ 0x2727272727272727;
            uRam00000000001f6a68 = uRam00000000001f6a68 ^ 0x2727272727272727;
            _DAT_001f6a70 = _DAT_001f6a70 ^ 0x2727272727272727;
            uRam00000000001f6a78 = uRam00000000001f6a78 ^ 0x2727272727272727;
            DAT_001f6a98 = DAT_001f6a98 ^ 0x27;
            _DAT_001f6a80 = _DAT_001f6a80 ^ 0x2727272727272727;
            uRam00000000001f6a88 = uRam00000000001f6a88 ^ 0x2727272727272727;
            DAT_001f6a90 = DAT_001f6a90 ^ 0x2727272727272727;
            DAT_001f8223 = '\x01';
            lVar8 = -0x657e74937f704c35;
          }
          else if (lVar9 == -0x2ab83678e90cfc72) {
            (**(code **)(*param_2 + 0x80))(param_2);
            (**(code **)(*param_2 + 0x88))(param_2);
            lVar8 = 0x4ee403bc90248aea;
            if (local_78 != 0) {
              lVar8 = 0x703781d332885ee0;
            }
            goto LAB_00172268;
          }
        }
        else {
          if (lVar9 == -0x25a0476d34e215bf) {
            iVar5 = FUN_001ebe70(0,1,&DAT_001f80dc);
            bVar4 = iVar5 == 0;
            lVar6 = 0x2bc79dc78ee7d0df;
            lVar8 = 0x37ed31f08f53f1f4;
            goto LAB_001720a4;
          }
          if (lVar9 == -0x20b96616990d67ca) {
            DAT_001f80dc = 0;
            local_b0 = (**(code **)(*param_2 + 0x108))
                                 (param_2,unaff_x28,&DAT_001f6a50,&DAT_001f6a60);
            lVar6 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar8 = -0x42159edb89e79eef;
            lVar9 = -0xdc935a0c3d14c0e;
            goto LAB_00172e44;
          }
          if (lVar9 == -0xdc935a0c3d14c0e) {
            lVar8 = -0x3e969bf8a8812bd2;
          }
        }
        goto LAB_001720ac;
      }
      if (lVar9 < -0x3b4e5c5b96f23ccd) {
        if (lVar9 != -0x3e969bf8a8812bd2) {
          if (lVar9 == -0x3ce000c32d0f74af) {
            lVar6 = 0x5149580c815b7f68;
            lVar8 = -0x3984f96330587eaa;
            bVar4 = unaff_x28 == 0;
            goto LAB_00172f94;
          }
          if (lVar9 == -0x3ba6db68718858f1) {
            lVar8 = 0x13b7e9add3e50794;
          }
          goto LAB_001720ac;
        }
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
      }
      else {
        if (lVar9 == -0x3b4e5c5b96f23ccd) {
          bVar4 = local_78 == 0;
          lVar8 = -0x6682bb77af072f;
          lVar6 = 0x21c0e93cbb360418;
          goto LAB_00172f94;
        }
        if (lVar9 != -0x3984f96330587eaa) {
          if (lVar9 == -0x3668b0ce8670e810) {
            *param_1 = local_7c;
            lVar8 = 0x5f51f1df2f1cc4a;
            unaff_x27 = local_88;
            unaff_w23 = param_2 != (long *)0x0;
          }
          goto LAB_001720ac;
        }
      }
LAB_00172c48:
      local_7c = 0xf;
      lVar8 = -0x3668b0ce8670e810;
      local_88 = unaff_x28;
      goto LAB_001720ac;
    }
    if (-0x6011e7f0cf0ddd5c < lVar9) {
      if (lVar9 < -0x4c3a057137698eec) {
        if (lVar9 == -0x6011e7f0cf0ddd5b) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          local_a8 = local_b8;
          local_bc = local_9c;
          lVar8 = 0x7775b513a86ca16b;
        }
        else {
          lVar8 = -0x657e74937f704c35;
          if ((lVar9 != -0x5d12360f0698112b) && (lVar8 = lVar9, lVar9 == -0x5c439fadf417bc8a)) {
            (**(code **)(*param_2 + 0xb8))(param_2,local_d8);
            lVar8 = -0x35d290dd8499c396;
          }
        }
      }
      else if (lVar9 == -0x4c3a057137698eec) {
        local_88 = 0;
        local_7c = 3;
        lVar8 = -0x3668b0ce8670e810;
      }
      else if (lVar9 == -0x42159edb89e79eef) {
        bVar4 = local_b0 == 0;
        lVar8 = 0x1d086c93a465a0c3;
        lVar6 = -0x71e7d89c0a506517;
LAB_00172f94:
        if (!bVar4) {
          lVar8 = lVar6;
        }
      }
      else if (lVar9 == -0x3f0d06e83f19f84b) {
        local_a8 = (long *)0x0;
        local_bc = 0x1f;
        lVar8 = 0x7775b513a86ca16b;
      }
      goto LAB_001720ac;
    }
    if (lVar9 < -0x701a5b76114d9682) {
      lVar8 = lVar1;
      if (lVar9 != -0x72a9745fe2555ebf) {
        if (lVar9 == -0x71e7d89c0a506517) {
          local_78 = (**(code **)(*param_2 + 0x538))(param_2,param_4);
          lVar8 = (**(code **)(*param_2 + 0x78))(param_2);
          bVar4 = lVar8 == 0;
          lVar6 = -0x2ab83678e90cfc72;
          lVar8 = -0x3b4e5c5b96f23ccd;
          goto LAB_001720a4;
        }
        lVar8 = lVar9;
        if (lVar9 == -0x71e077b68071675f) {
          lVar8 = -0x20b96616990d67ca;
        }
      }
      goto LAB_001720ac;
    }
    if (lVar9 != -0x701a5b76114d9682) {
      if (lVar9 == -0x657e74937f704c35) {
        DAT_001f80e0 = 0;
        lVar8 = -0x25a0476d34e215bf;
      }
      else if (lVar9 == -0x606551946c712a28) {
        bVar4 = local_c8 == (long *)0x0;
        lVar8 = 0x4b1d06d662edcd58;
        lVar6 = -0x2df1266cf47fa359;
        goto LAB_00172f94;
      }
      goto LAB_001720ac;
    }
    local_68 = (long *)(**(code **)(*param_2 + 0x110))(param_2,param_3,local_b0,local_78,unaff_x19);
    lVar8 = (**(code **)(*param_2 + 0x78))(param_2);
    bVar4 = lVar8 == 0;
    lVar6 = 0x4d6b64e504d8a921;
    lVar8 = -0x74ad9eccc25f9b2;
  }
  else {
    if (0x3c4c2a160e51da03 < lVar9) {
      if (0x5149580c815b7f67 < lVar9) {
        if (lVar9 < 0x656397b75fcf08e8) {
          lVar8 = 0x13b7e9add3e50794;
          if (lVar9 != 0x5149580c815b7f68) {
            if (lVar9 == 0x546c08c1c9184140) {
              unaff_x28 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
              lVar6 = (**(code **)(*param_2 + 0x78))(param_2);
              lVar8 = -0x3ce000c32d0f74af;
              lVar9 = 0x656397b75fcf08e8;
LAB_00172e44:
              if (lVar6 != 0) {
                lVar8 = lVar9;
              }
            }
            else {
              lVar8 = lVar9;
              if (lVar9 == 0x63358bc6c5c6d7dc) {
LAB_00172b68:
                plVar2 = plVar7;
                lVar3 = lVar6;
                lVar8 = -0x606551946c712a28;
              }
            }
          }
        }
        else {
          lVar8 = -0x3e969bf8a8812bd2;
          if (lVar9 != 0x656397b75fcf08e8) {
            if (lVar9 == 0x703781d332885ee0) {
              plVar2 = (long *)0x0;
              lVar3 = 0;
              lVar8 = 0x3c4c2a160e51da04;
            }
            else {
              lVar8 = lVar9;
              if (lVar9 == 0x7775b513a86ca16b) {
                *param_1 = local_bc;
                plVar2 = local_a8;
                lVar3 = unaff_x19;
                lVar8 = 0x3c4c2a160e51da04;
              }
            }
          }
        }
        goto LAB_001720ac;
      }
      if (lVar9 < 0x4d6b64e504d8a921) {
        if (lVar9 == 0x3c4c2a160e51da04) {
          (**(code **)(*param_2 + 0xb8))(param_2,local_78);
          lVar8 = 0x63358bc6c5c6d7dc;
          local_e0 = lVar6;
          local_c8 = plVar7;
          if (lVar6 != 0) {
            lVar8 = -0x5a65df57888327c;
          }
          goto LAB_001720ac;
        }
        if (lVar9 != 0x4b1d06d662edcd58) {
          if (lVar9 == 0x4bbb86392a586d99) {
            bVar4 = unaff_x19 == 0;
            lVar6 = -0x701a5b76114d9682;
            lVar8 = -0x3f0d06e83f19f84b;
            goto LAB_00172f94;
          }
          goto LAB_001720ac;
        }
      }
      else {
        if (lVar9 == 0x4d6b64e504d8a921) {
          local_b8 = local_68;
          local_9c = 0x19;
          lVar8 = -0x6011e7f0cf0ddd5b;
          goto LAB_001720ac;
        }
        if (lVar9 != 0x4ee403bc90248aea) {
          if (lVar9 == 0x4f500b65a831bee4) {
            local_b8 = (long *)0x0;
            local_9c = 0x1f;
            lVar8 = -0x6011e7f0cf0ddd5b;
          }
          goto LAB_001720ac;
        }
      }
LAB_00172ac4:
      lVar8 = 0x5f51f1df2f1cc4a;
      unaff_x27 = unaff_x28;
      unaff_w23 = 1;
      goto LAB_001720ac;
    }
    if (lVar9 < 0x1d086c93a465a0c3) {
      if (lVar9 < 0x4d42b27b99b1208) {
        plVar2 = local_68;
        lVar3 = unaff_x19;
        lVar8 = 0x3c4c2a160e51da04;
        if (lVar9 != -0x74ad9eccc25f9b2) {
          if (lVar9 == -0x5a65df57888327c) {
            (**(code **)(*param_2 + 0xb8))(param_2,local_e0);
            goto LAB_00172b68;
          }
          plVar2 = plVar7;
          lVar3 = lVar6;
          lVar8 = lVar9;
          if (lVar9 == -0x6682bb77af072f) {
            unaff_w23 = 1;
            lVar8 = 0x5f51f1df2f1cc4a;
            unaff_x27 = unaff_x28;
LAB_00172268:
            *param_1 = 0x1f;
            plVar2 = plVar7;
            lVar3 = lVar6;
          }
        }
        goto LAB_001720ac;
      }
      lVar8 = -0x35d290dd8499c396;
      if (lVar9 == 0x4d42b27b99b1208) goto LAB_001720ac;
      if (lVar9 == 0x5f51f1df2f1cc4a) {
        lVar8 = -0x5c439fadf417bc8a;
        local_d8 = unaff_x27;
        if ((unaff_w23 & unaff_x27 != 0) == 0) {
          lVar8 = 0x4d42b27b99b1208;
        }
        goto LAB_001720ac;
      }
      lVar8 = lVar9;
      if (lVar9 != 0x13b7e9add3e50794) goto LAB_001720ac;
      iVar5 = FUN_001ebe70(0,1,&DAT_001f80e0);
      lVar6 = -0x3ba6db68718858f1;
      lVar8 = 0x2266c651dfbde0dc;
      bVar4 = iVar5 == 0;
    }
    else {
      if (0x2266c651dfbde0db < lVar9) {
        if (lVar9 == 0x2266c651dfbde0dc) {
          lVar8 = -0x5d12360f0698112b;
          if (DAT_001f8223 == '\0') {
            lVar8 = -0x2ce3df39da091baa;
          }
        }
        else {
          lVar8 = -0x25a0476d34e215bf;
          if ((lVar9 != 0x2bc79dc78ee7d0df) && (lVar8 = lVar9, lVar9 == 0x37ed31f08f53f1f4)) {
            lVar8 = -0x71e077b68071675f;
            if (DAT_001f8222 == '\0') {
              lVar8 = 0x1e314b5c71a8bd6f;
            }
          }
        }
        goto LAB_001720ac;
      }
      if (lVar9 == 0x1d086c93a465a0c3) goto LAB_00172c48;
      if (lVar9 == 0x1e314b5c71a8bd6f) {
        DAT_001f6a51 = DAT_001f6a51 ^ 0xe1;
        DAT_001f6a52 = DAT_001f6a52 ^ 0xe1;
        DAT_001f6a53 = DAT_001f6a53 ^ 0xe1;
        DAT_001f6a50 = DAT_001f6a50 ^ 0xe1;
        DAT_001f8222 = '\x01';
        lVar8 = -0x20b96616990d67ca;
        goto LAB_001720ac;
      }
      if (lVar9 != 0x21c0e93cbb360418) goto LAB_001720ac;
      unaff_x19 = (**(code **)(*param_2 + 0x538))(param_2,param_5);
      lVar8 = (**(code **)(*param_2 + 0x78))(param_2);
      bVar4 = lVar8 == 0;
      lVar6 = 0x4f500b65a831bee4;
      lVar8 = 0x4bbb86392a586d99;
    }
  }
LAB_001720a4:
  if (!bVar4) {
    lVar8 = lVar6;
  }
  goto LAB_001720ac;
}


