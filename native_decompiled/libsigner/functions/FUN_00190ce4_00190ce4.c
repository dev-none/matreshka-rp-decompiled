// Function: FUN_00190ce4
// Entry: 00190ce4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00190ce4(int *param_1,long *param_2,long param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x27;
  long local_88;
  int local_80;
  int local_7c;
  int local_6c;
  
  lVar1 = -0x1660f5d40998cd4a;
  if (param_3 != 0) {
    lVar1 = 0x70f50f64b756660;
  }
  lVar3 = 0x6080eeb76abe1c34;
LAB_00190de0:
  while (lVar4 = lVar3, lVar3 = lVar4, -0x1660f5d40998cd4b < lVar4) {
    if (lVar4 < 0x21fc8222a4a9fee7) {
      if (lVar4 < 0x70f50f64b756660) {
        if (lVar4 < -0x11283d38c6dceb23) {
          if (lVar4 == -0x1660f5d40998cd4a) {
            local_7c = 3;
            goto LAB_00191724;
          }
          if (lVar4 == -0x116981b1a5eaae4b) {
            local_80 = 0x19;
LAB_00191808:
            lVar3 = -0x524dce6b3626403c;
          }
        }
        else {
          lVar3 = 0x409b43ed37a61e65;
          if (((lVar4 != -0x11283d38c6dceb23) &&
              (lVar3 = 0x21fc8222a4a9fee7, lVar4 != -0x6a72816601aa425)) &&
             (lVar3 = lVar4, lVar4 == -0xa04d82d346b0fb)) {
            lVar3 = 0x1149983defbcb1cf;
          }
        }
      }
      else if (lVar4 < 0x1149983defbcb1cf) {
        if (lVar4 == 0x70f50f64b756660) {
          unaff_x27 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
          lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar3 = 0x227035bbb4475001;
          if (lVar4 != 0) {
            lVar3 = -0x2c4ee02f49aee8ae;
          }
        }
        else if (lVar4 == 0xa7caa567403ce6b) {
          lVar3 = 0x3ea6bc7f407459ff;
          if (local_88 != 0) {
            lVar3 = -0x55f50824908500a1;
          }
        }
      }
      else if (lVar4 == 0x171fcb3af0fe9bca) {
        iVar2 = FUN_001ebe70(0,1,&DAT_001f81dc);
        lVar3 = -0x1ba5c01c4c451587;
        if (iVar2 != 0) {
          lVar3 = -0x7d8b225ad09b5644;
        }
      }
      else if (lVar4 == 0x1824a9ac3ac3adff) {
        DAT_001f81e0 = 0;
        lVar3 = 0x171fcb3af0fe9bca;
      }
      else if (lVar4 == 0x1149983defbcb1cf) {
        return;
      }
    }
    else if (lVar4 < 0x3ea6bc7f407459ff) {
      if (lVar4 < 0x232f813a98776032) {
        if (lVar4 == 0x21fc8222a4a9fee7) {
          (**(code **)(*param_2 + 0xb8))(param_2,unaff_x27);
          lVar3 = -0xa04d82d346b0fb;
          if (*param_1 != 0) {
            lVar3 = -0x655d89a04ba6b58c;
          }
        }
        else if (lVar4 == 0x227035bbb4475001) {
          lVar3 = -0x21ec3fba5372fb4f;
          if (unaff_x27 != 0) {
            lVar3 = -0x32a1342b7d79be07;
          }
        }
      }
      else {
        if (lVar4 == 0x232f813a98776032) {
          local_80 = 0xf;
          goto LAB_00191808;
        }
        if (lVar4 == 0x310bf1d78e50d721) {
          lVar3 = -0x5f385dfb20c1251a;
          if (DAT_001f8261 == '\0') {
            lVar3 = -0x69c85c7d1478583f;
          }
        }
      }
    }
    else if (lVar4 < 0x52cfbd47b86b7ae9) {
      if (lVar4 == 0x3ea6bc7f407459ff) {
        local_6c = 0xf;
        goto LAB_00190dcc;
      }
      if (lVar4 == 0x409b43ed37a61e65) {
        iVar2 = FUN_001ebe70(0,1,&DAT_001f81e0);
        lVar3 = 0x310bf1d78e50d721;
        if (iVar2 != 0) {
          lVar3 = -0x11283d38c6dceb23;
        }
      }
    }
    else if (lVar4 == 0x52cfbd47b86b7ae9) {
      *param_1 = local_7c;
      lVar3 = -0x1d8c559e02d202a7;
    }
    else if (lVar4 == 0x7d16a86f0612c07a) {
      DAT_001f81dc = 0;
      local_88 = (**(code **)(*param_2 + 0x108))(param_2,unaff_x27,&DAT_001f71c0,&DAT_001f71e0);
      lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
      lVar3 = 0xa7caa567403ce6b;
      if (lVar4 != 0) {
        lVar3 = 0x232f813a98776032;
      }
    }
    else if (lVar4 == 0x6080eeb76abe1c34) {
      lVar3 = lVar1;
    }
  }
  if (lVar4 < -0x524dce6b3626403c) {
    if (-0x69c85c7d14785840 < lVar4) {
      if (lVar4 < -0x5f385dfb20c1251a) {
        if (lVar4 == -0x69c85c7d1478583f) {
          DAT_001f7200 = DAT_001f7200 ^ 0x55;
          DAT_001f7201 = DAT_001f7201 ^ 0x55;
          _DAT_001f71e0 = _DAT_001f71e0 ^ 0x5555555555555555;
          uRam00000000001f71e8 = uRam00000000001f71e8 ^ 0x5555555555555555;
          _DAT_001f71f0 = _DAT_001f71f0 ^ 0x5555555555555555;
          uRam00000000001f71f8 = uRam00000000001f71f8 ^ 0x5555555555555555;
          DAT_001f8261 = '\x01';
          lVar3 = 0x1824a9ac3ac3adff;
        }
        else if (lVar4 == -0x655d89a04ba6b58c) {
          lVar3 = -0x1d8c559e02d202a7;
        }
      }
      else {
        lVar3 = 0x1824a9ac3ac3adff;
        if (lVar4 != -0x5f385dfb20c1251a) {
          if (lVar4 == -0x5cf78f156676ec2d) {
            DAT_001f71d0 = DAT_001f71d0 ^ 0xe;
            DAT_001f71d1 = DAT_001f71d1 ^ 0xe;
            DAT_001f71d2 = DAT_001f71d2 ^ 0xe;
            DAT_001f71d4 = DAT_001f71d4 ^ 0xe;
            DAT_001f71d3 = DAT_001f71d3 ^ 0xe;
            DAT_001f71d5 = DAT_001f71d5 ^ 0xe;
            _DAT_001f71c0 = _DAT_001f71c0 ^ 0xe0e0e0e0e0e0e0e;
            uRam00000000001f71c8 = uRam00000000001f71c8 ^ 0xe0e0e0e0e0e0e0e;
            DAT_001f8260 = '\x01';
            lVar3 = 0x7d16a86f0612c07a;
          }
          else {
            lVar3 = lVar4;
            if (lVar4 == -0x55f50824908500a1) {
              lVar3 = (**(code **)(*param_2 + 0x110))(param_2,param_3,local_88);
              *param_4 = lVar3;
              lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
              lVar3 = -0x369a743238e14b39;
              if (lVar4 != 0) {
                lVar3 = -0x116981b1a5eaae4b;
              }
            }
          }
        }
      }
      goto LAB_00190de0;
    }
    if (-0x774acd9db3edb858 < lVar4) {
      if (lVar4 == -0x774acd9db3edb857) {
        *param_1 = local_6c;
        lVar3 = 0x21fc8222a4a9fee7;
      }
      else if (lVar4 == -0x6ed27d3dc32e575e) {
        lVar3 = 0x21fc8222a4a9fee7;
      }
      goto LAB_00190de0;
    }
    lVar3 = 0x171fcb3af0fe9bca;
    if ((lVar4 == -0x7d8b225ad09b5644) || (lVar3 = lVar4, lVar4 != -0x775a81ae438b240e))
    goto LAB_00190de0;
    local_6c = 0x19;
  }
  else {
    if (-0x32a1342b7d79be08 < lVar4) {
      if (lVar4 < -0x21ec3fba5372fb4f) {
        lVar3 = 0x409b43ed37a61e65;
        if ((lVar4 != -0x32a1342b7d79be07) && (lVar3 = lVar4, lVar4 == -0x2c4ee02f49aee8ae)) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          lVar3 = -0x4f455f0aa2c4698c;
          if (unaff_x27 != 0) {
            lVar3 = -0x6a72816601aa425;
          }
          *param_1 = 0xf;
        }
      }
      else if (lVar4 == -0x21ec3fba5372fb4f) {
        local_7c = 0xf;
LAB_00191724:
        lVar3 = 0x52cfbd47b86b7ae9;
      }
      else if (lVar4 == -0x1d8c559e02d202a7) {
        *param_4 = 0;
        lVar3 = 0x1149983defbcb1cf;
      }
      else if (lVar4 == -0x1ba5c01c4c451587) {
        lVar3 = -0x3964f43e10ea1171;
        if (DAT_001f8260 == '\0') {
          lVar3 = -0x5cf78f156676ec2d;
        }
      }
      goto LAB_00190de0;
    }
    if (-0x3964f43e10ea1172 < lVar4) {
      lVar3 = 0x7d16a86f0612c07a;
      if ((lVar4 != -0x3964f43e10ea1171) && (lVar3 = lVar4, lVar4 == -0x369a743238e14b39)) {
        lVar3 = -0x775a81ae438b240e;
        if (*param_4 != 0) {
          lVar3 = -0x6ed27d3dc32e575e;
        }
      }
      goto LAB_00190de0;
    }
    if (lVar4 != -0x524dce6b3626403c) {
      if (lVar4 == -0x4f455f0aa2c4698c) {
        lVar3 = -0x1d8c559e02d202a7;
      }
      goto LAB_00190de0;
    }
    (**(code **)(*param_2 + 0x80))(param_2);
    (**(code **)(*param_2 + 0x88))(param_2);
    local_6c = local_80;
  }
LAB_00190dcc:
  lVar3 = -0x774acd9db3edb857;
  goto LAB_00190de0;
}


