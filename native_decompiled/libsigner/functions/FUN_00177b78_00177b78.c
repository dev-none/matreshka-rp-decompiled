// Function: FUN_00177b78
// Entry: 00177b78

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00177b78(int *param_1,long *param_2,long param_3,long param_4,undefined8 param_5,
                 long *param_6)

{
  long lVar1;
  char cVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x21;
  long local_c0;
  long local_b0;
  int local_a4;
  long local_98;
  int local_8c;
  int local_7c;
  long local_78;
  long local_68;
  
  lVar1 = -0x4487e9dd3adc7795;
  if (param_4 == 0 || param_3 == 0) {
    lVar1 = -0x6931a3aecfefaf3c;
  }
  lVar3 = lVar1;
  lVar7 = 0x14688872aa34a00;
LAB_00177c8c:
  while (lVar8 = lVar7, lVar6 = lVar3, lVar7 = lVar8, lVar3 = lVar6, lVar8 < 0xa72ea1f1b160578) {
    if (lVar8 < -0x3995bf9d870715ef) {
      if (lVar8 < -0x566ec0a6d37f4cf9) {
        if (lVar8 < -0x7d392d50e0dcff23) {
          lVar7 = -0x2bc6ce70b48fb865;
          if ((lVar8 != -0x7ee7d73fd1da5d08) && (lVar7 = lVar8, lVar8 == -0x7d5c903b2535086b)) {
            *param_1 = local_7c;
            lVar3 = local_78;
            lVar7 = 0x5c5e67d6533a27e5;
          }
        }
        else {
          if (lVar8 == -0x7d392d50e0dcff23) {
            local_7c = 0x1f;
            local_78 = unaff_x21;
            goto LAB_00178858;
          }
          if (lVar8 == -0x6931a3aecfefaf3c) {
            local_a4 = 3;
            goto LAB_00178820;
          }
          if (lVar8 == -0x60101e7559962c23) {
            (**(code **)(*param_2 + 0x80))(param_2);
            (**(code **)(*param_2 + 0x88))(param_2);
            lVar7 = -0x486dbd8dbdc08dce;
            if (local_68 != 0) {
              lVar7 = 0x5fe1018dfd190df7;
            }
            *param_1 = 0xf;
          }
        }
      }
      else if (lVar8 < -0x486dbd8dbdc08dce) {
        if (lVar8 == -0x566ec0a6d37f4cf9) {
          iVar5 = FUN_001ebe70(0,1,&DAT_001f8114);
          lVar7 = -0x438def986340b862;
          if (iVar5 != 0) {
            lVar7 = 0x7517470ae32ec028;
          }
        }
        else {
          if (lVar8 == -0x51a1419a43c0ac2d) {
            bVar4 = local_b0 == 0;
            lVar7 = 0x3edcd0f4d3cd0b9e;
            lVar6 = -0x38aead291a04781f;
            goto LAB_00177c84;
          }
          if (lVar8 == -0x536752e094130b43) {
            return;
          }
        }
      }
      else {
        lVar7 = -0x2bc6ce70b48fb865;
        if (lVar8 != -0x486dbd8dbdc08dce) {
          if (lVar8 == -0x4487e9dd3adc7795) {
            local_68 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
            lVar6 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar7 = 0x76dcb423b8c0f722;
            if (lVar6 != 0) {
              lVar7 = -0x60101e7559962c23;
            }
          }
          else {
            lVar7 = lVar8;
            if (lVar8 == -0x438def986340b862) {
              lVar7 = -0x1c148f8be5148cf1;
              lVar6 = 0x45143644ab8d4ffc;
              cVar2 = DAT_001f8230;
              goto LAB_00178774;
            }
          }
        }
      }
    }
    else if (lVar8 < -0x1c148f8be5148cf1) {
      if (lVar8 < -0x30a8264e0c5c9f7e) {
        if (lVar8 == -0x3995bf9d870715ef) {
          local_98 = 0;
          local_8c = 0xf;
          lVar7 = 0xa72ea1f1b160578;
        }
        else if (lVar8 == -0x38aead291a04781f) {
          unaff_x21 = (**(code **)(*param_2 + 0x538))(param_2,param_4);
          lVar6 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar7 = 0x5850dc65c14c69f0;
          if (lVar6 != 0) {
            lVar7 = 0x26ccb637987e1fef;
          }
        }
      }
      else if (lVar8 == -0x30a8264e0c5c9f7e) {
        lVar7 = 0x6577e5f70193d2a2;
        lVar6 = 0x523a3ead97e04bcf;
        cVar2 = DAT_001f8231;
LAB_00178774:
        if (cVar2 == '\0') {
          lVar7 = lVar6;
        }
      }
      else if (lVar8 == -0x2cf3229c7a17df7a) {
        lVar7 = (**(code **)(*param_2 + 0x110))(param_2,param_3,local_b0,unaff_x21,param_5);
        *param_6 = lVar7;
        lVar6 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar7 = 0x17bec7a35daac0cd;
        if (lVar6 != 0) {
          lVar7 = 0x1d59549402704151;
        }
      }
      else if (lVar8 == -0x2bc6ce70b48fb865) {
        *param_6 = 0;
        lVar7 = -0x536752e094130b43;
      }
    }
    else if (lVar8 < -0x9f55d28793dfb10) {
      lVar7 = 0x17ee608215c1bfe1;
      if (lVar8 != -0x1c148f8be5148cf1) {
        if (lVar8 == -0x195ed6262fcbb0c1) {
          *param_1 = local_a4;
          lVar7 = -0x2bc6ce70b48fb865;
        }
        else {
          lVar7 = lVar8;
          if (lVar8 == -0x1393bed737849874) {
            iVar5 = FUN_001ebe70(0,1,&DAT_001f8118);
            lVar7 = -0x30a8264e0c5c9f7e;
            if (iVar5 != 0) {
              lVar7 = 0x5364818510256f6d;
            }
          }
        }
      }
    }
    else if (lVar8 == -0x9f55d28793dfb10) {
      local_7c = 0x10;
      local_78 = unaff_x21;
LAB_00178858:
      lVar3 = lVar6;
      lVar7 = -0x7d5c903b2535086b;
    }
    else if (lVar8 == -0x6c9d8d14783d0fc) {
      lVar7 = 0x2ad02d786e3545b7;
      bVar4 = *param_1 == 0;
      lVar6 = -0x7ee7d73fd1da5d08;
LAB_00177c84:
      if (!bVar4) {
        lVar7 = lVar6;
      }
    }
    else if (lVar8 == 0x14688872aa34a00) {
      lVar7 = lVar1;
    }
  }
  if (lVar8 < 0x4eff2a66ce3dd1ce) {
    if (lVar8 < 0x26cb1dd256007b54) {
      if (lVar8 < 0x17bec7a35daac0cd) {
        if (lVar8 == 0xa72ea1f1b160578) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          local_78 = local_98;
          local_7c = local_8c;
          lVar7 = -0x7d5c903b2535086b;
        }
        else if (lVar8 == 0xd85baf9371e4ea2) {
          lVar7 = -0x1393bed737849874;
        }
        goto LAB_00177c8c;
      }
      if (lVar8 == 0x17bec7a35daac0cd) {
        lVar8 = 0x2e4416946e4eba83;
        lVar7 = -0x9f55d28793dfb10;
        lVar6 = *param_6;
        goto LAB_00178808;
      }
      if (lVar8 == 0x17ee608215c1bfe1) {
        DAT_001f8114 = 0;
        local_b0 = (**(code **)(*param_2 + 0x108))(param_2,local_68,&DAT_001f6c20,&DAT_001f6c30);
        lVar6 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar7 = -0x51a1419a43c0ac2d;
        if (lVar6 != 0) {
          lVar7 = -0x3995bf9d870715ef;
        }
        goto LAB_00177c8c;
      }
      if (lVar8 != 0x1d59549402704151) goto LAB_00177c8c;
      local_8c = 0x10;
    }
    else {
      if (0x2e4416946e4eba82 < lVar8) {
        lVar3 = unaff_x21;
        lVar7 = 0x5c5e67d6533a27e5;
        if (lVar8 != 0x2e4416946e4eba83) {
          if (lVar8 == 0x3edcd0f4d3cd0b9e) {
            local_78 = 0;
            local_7c = 0xf;
            goto LAB_00178858;
          }
          lVar3 = lVar6;
          lVar7 = lVar8;
          if (lVar8 == 0x45143644ab8d4ffc) {
            DAT_001f6c21 = DAT_001f6c21 ^ 0xb3;
            DAT_001f6c20 = DAT_001f6c20 ^ 0xb3;
            DAT_001f6c22 = DAT_001f6c22 ^ 0xb3;
            DAT_001f6c23 = DAT_001f6c23 ^ 0xb3;
            DAT_001f6c24 = DAT_001f6c24 ^ 0xb3;
            DAT_001f6c26 = DAT_001f6c26 ^ 0xb3;
            DAT_001f6c25 = DAT_001f6c25 ^ 0xb3;
            DAT_001f8230 = '\x01';
            lVar7 = 0x17ee608215c1bfe1;
          }
        }
        goto LAB_00177c8c;
      }
      if (lVar8 == 0x26cb1dd256007b54) {
        local_a4 = 0xf;
LAB_00178820:
        lVar7 = -0x195ed6262fcbb0c1;
        goto LAB_00177c8c;
      }
      if (lVar8 != 0x26ccb637987e1fef) {
        if (lVar8 == 0x2ad02d786e3545b7) {
          lVar7 = -0x536752e094130b43;
        }
        goto LAB_00177c8c;
      }
      local_8c = 0x1f;
    }
    lVar7 = 0xa72ea1f1b160578;
    local_98 = unaff_x21;
    goto LAB_00177c8c;
  }
  if (lVar8 < 0x5fe1018dfd190df7) {
    if (lVar8 < 0x5364818510256f6d) {
      if (lVar8 == 0x4eff2a66ce3dd1ce) {
        DAT_001f8118 = 0;
        lVar7 = -0x566ec0a6d37f4cf9;
      }
      else if (lVar8 == 0x523a3ead97e04bcf) {
        _DAT_001f6c30 = _DAT_001f6c30 ^ 0x7373737373737373;
        uRam00000000001f6c38 = uRam00000000001f6c38 ^ 0x7373737373737373;
        _DAT_001f6c40 = _DAT_001f6c40 ^ 0x7373737373737373;
        uRam00000000001f6c48 = uRam00000000001f6c48 ^ 0x7373737373737373;
        DAT_001f6c59 = DAT_001f6c59 ^ 0x73;
        DAT_001f6c58 = DAT_001f6c58 ^ 0x73;
        DAT_001f6c50 = DAT_001f6c50 ^ 0x7373737373737373;
        DAT_001f8231 = '\x01';
        lVar7 = 0x4eff2a66ce3dd1ce;
      }
    }
    else {
      lVar7 = -0x1393bed737849874;
      if (lVar8 != 0x5364818510256f6d) {
        if (lVar8 == 0x5850dc65c14c69f0) {
          lVar7 = -0x7d392d50e0dcff23;
          lVar8 = -0x2cf3229c7a17df7a;
          lVar6 = unaff_x21;
LAB_00178808:
          if (lVar6 != 0) {
            lVar7 = lVar8;
          }
        }
        else {
          lVar7 = lVar8;
          if (lVar8 == 0x5c5e67d6533a27e5) {
            (**(code **)(*param_2 + 0xb8))(param_2,local_68);
            lVar7 = 0x6a24dff73a624149;
            local_c0 = lVar6;
            if (lVar6 != 0) {
              lVar7 = 0x72c279b2e408a6a6;
            }
          }
        }
      }
    }
    goto LAB_00177c8c;
  }
  if (lVar8 < 0x72c279b2e408a6a6) {
    if (lVar8 == 0x5fe1018dfd190df7) {
      lVar3 = 0;
      lVar7 = 0x5c5e67d6533a27e5;
      goto LAB_00177c8c;
    }
    lVar7 = 0x4eff2a66ce3dd1ce;
    if ((lVar8 == 0x6577e5f70193d2a2) || (lVar7 = lVar8, lVar8 != 0x6a24dff73a624149))
    goto LAB_00177c8c;
  }
  else {
    if (lVar8 != 0x72c279b2e408a6a6) {
      lVar7 = -0x566ec0a6d37f4cf9;
      if ((lVar8 != 0x7517470ae32ec028) && (lVar7 = lVar8, lVar8 == 0x76dcb423b8c0f722)) {
        bVar4 = local_68 == 0;
        lVar7 = 0x26cb1dd256007b54;
        lVar6 = 0xd85baf9371e4ea2;
        goto LAB_00177c84;
      }
      goto LAB_00177c8c;
    }
    (**(code **)(*param_2 + 0xb8))(param_2,local_c0);
  }
  lVar7 = -0x6c9d8d14783d0fc;
  goto LAB_00177c8c;
}


