// Function: FUN_0018b1b4
// Entry: 0018b1b4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0018b1b4(int *param_1,long *param_2,long param_3,long param_4,undefined4 param_5,
                 long *param_6)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long local_90;
  int local_88;
  int local_84;
  int local_74;
  
  lVar1 = 0x21d462f26bd0f156;
  if (param_4 == 0 || param_3 == 0) {
    lVar1 = -0xf2373b3b9e8a619;
  }
  lVar4 = -0x6684dba6c60e593d;
LAB_0018b2bc:
  lVar3 = lVar4;
  lVar4 = lVar3;
  if (lVar3 < 0x21d462f26bd0f156) {
    if (lVar3 < -0x24cd5f1f51bbd8eb) {
      if (lVar3 < -0x61fa3703c54c2f14) {
        if (lVar3 < -0x71843480efcdd9ea) {
          lVar4 = -0x77d2819f27c845b1;
          if (lVar3 != -0x7adf0edbe23ee55a) {
            if (lVar3 == -0x77d2819f27c845b1) {
              DAT_001f81b0 = 0;
              local_90 = (**(code **)(*param_2 + 0x108))
                                   (param_2,unaff_x20,&DAT_001f7090,&DAT_001f70a0);
              lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
              lVar4 = -0x1065804e5f17ed3a;
              if (lVar3 != 0) {
                lVar4 = -0x71843480efcdd9ea;
              }
            }
            else {
              lVar4 = lVar3;
              if (lVar3 == -0x78d5962867f6cf9d) {
                return;
              }
            }
          }
        }
        else if (lVar3 == -0x71843480efcdd9ea) {
          local_88 = 0xf;
LAB_0018bcd0:
          lVar4 = 0x4985ab49e65da180;
        }
        else if (lVar3 == -0x6684dba6c60e593d) {
          lVar4 = lVar1;
        }
      }
      else if (lVar3 < -0x560904eef5c12f52) {
        if (lVar3 == -0x61fa3703c54c2f14) {
          (**(code **)(*param_2 + 0xb8))(param_2,unaff_x20);
          lVar4 = 0x43af5c7e057321f5;
          if (*param_1 != 0) {
            lVar4 = -0x55afde547145393;
          }
        }
        else if (lVar3 == -0x5cfef6d9feb676c4) {
          *param_6 = 0;
          lVar4 = -0x78d5962867f6cf9d;
        }
      }
      else if (lVar3 == -0x560904eef5c12f52) {
        lVar4 = 0x58f29afd288e388b;
        if (DAT_001f8256 == '\0') {
          lVar4 = 0x6da868bdae5cc19c;
        }
      }
      else if (lVar3 == -0x46884bace3629fa9) {
        lVar4 = -0x1b4bee9eb9f49ff1;
        if (unaff_x20 != 0) {
          lVar4 = 0x55e71badbddbe87;
        }
      }
      else if (lVar3 == -0x3497cc39f64ba046) {
        DAT_001f7098 = DAT_001f7098 ^ 0x3a;
        DAT_001f7099 = DAT_001f7099 ^ 0x3a;
        DAT_001f709a = DAT_001f709a ^ 0x3a;
        DAT_001f709c = DAT_001f709c ^ 0x3a;
        DAT_001f709d = DAT_001f709d ^ 0x3a;
        DAT_001f709b = DAT_001f709b ^ 0x3a;
        DAT_001f709e = DAT_001f709e ^ 0x3a;
        DAT_001f7090 = DAT_001f7090 ^ 0x3a3a3a3a3a3a3a3a;
        DAT_001f8255 = '\x01';
        lVar4 = -0x77d2819f27c845b1;
      }
      goto LAB_0018b2bc;
    }
    if (-0x55afde547145394 < lVar3) {
      if (lVar3 < 0x55e71badbddbe87) {
        lVar4 = -0x5cfef6d9feb676c4;
        if ((lVar3 != -0x55afde547145393) && (lVar4 = lVar3, lVar3 == -0x52e62da41c1a475)) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          lVar4 = 0x4322306e245e058c;
          if (unaff_x20 != 0) {
            lVar4 = 0x2478bdceed369f14;
          }
          *param_1 = 0xf;
        }
      }
      else {
        lVar4 = 0x76431f4eecfc674b;
        if (lVar3 != 0x55e71badbddbe87) {
          if (lVar3 == 0x13a7e098b8ec2b73) {
            local_74 = 0x20;
            goto LAB_0018b2a8;
          }
          lVar4 = lVar3;
          if (lVar3 == 0x2060eaa298151da6) {
            lVar4 = 0x13a7e098b8ec2b73;
            if (*param_6 != 0) {
              lVar4 = 0x2eb1306d5b5607ae;
            }
          }
        }
      }
      goto LAB_0018b2bc;
    }
    if (lVar3 < -0x1065804e5f17ed3a) {
      if (lVar3 == -0x24cd5f1f51bbd8eb) {
        local_88 = 0x20;
        goto LAB_0018bcd0;
      }
      if (lVar3 != -0x1b4bee9eb9f49ff1) goto LAB_0018b2bc;
      local_84 = 0xf;
    }
    else {
      if (lVar3 == -0x1065804e5f17ed3a) {
        lVar4 = 0x3eadfa9c837ba7d4;
        if (local_90 != 0) {
          lVar4 = 0x3f234727a2c2d5a8;
        }
        goto LAB_0018b2bc;
      }
      if (lVar3 != -0xf2373b3b9e8a619) goto LAB_0018b2bc;
      local_84 = 3;
    }
    lVar4 = 0x41c749b233a265cb;
    goto LAB_0018b2bc;
  }
  if (lVar3 < 0x43af5c7e057321f5) {
    if (lVar3 < 0x3eadfa9c837ba7d4) {
      if (lVar3 < 0x2eb1306d5b5607ae) {
        if (lVar3 == 0x21d462f26bd0f156) {
          unaff_x20 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
          lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar4 = -0x46884bace3629fa9;
          if (lVar3 != 0) {
            lVar4 = -0x52e62da41c1a475;
          }
        }
        else if (lVar3 == 0x2478bdceed369f14) {
          lVar4 = -0x61fa3703c54c2f14;
        }
      }
      else {
        lVar4 = -0x61fa3703c54c2f14;
        if ((lVar3 != 0x2eb1306d5b5607ae) && (lVar4 = lVar3, lVar3 == 0x3a301e0d9c1c6231)) {
          lVar4 = -0x7adf0edbe23ee55a;
          if (DAT_001f8255 == '\0') {
            lVar4 = -0x3497cc39f64ba046;
          }
        }
      }
      goto LAB_0018b2bc;
    }
    if (0x41c749b233a265ca < lVar3) {
      if (lVar3 == 0x41c749b233a265cb) {
        *param_1 = local_84;
        lVar4 = -0x5cfef6d9feb676c4;
      }
      else {
        lVar4 = 0x592de68fdf963515;
        if ((lVar3 != 0x431e29dd9dcd0d96) && (lVar4 = lVar3, lVar3 == 0x4322306e245e058c)) {
          lVar4 = -0x5cfef6d9feb676c4;
        }
      }
      goto LAB_0018b2bc;
    }
    if (lVar3 != 0x3eadfa9c837ba7d4) {
      if (lVar3 == 0x3f234727a2c2d5a8) {
        lVar4 = (**(code **)(*param_2 + 0x110))(param_2,param_3,local_90,param_4,param_5);
        *param_6 = lVar4;
        lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar4 = 0x2060eaa298151da6;
        if (lVar3 != 0) {
          lVar4 = -0x24cd5f1f51bbd8eb;
        }
      }
      goto LAB_0018b2bc;
    }
    local_74 = 0xf;
  }
  else {
    if (0x58f29afd288e388a < lVar3) {
      if (lVar3 < 0x5c9ac508be5ebb77) {
        lVar4 = 0x5c9ac508be5ebb77;
        if ((lVar3 != 0x58f29afd288e388b) && (lVar4 = lVar3, lVar3 == 0x592de68fdf963515)) {
          iVar2 = FUN_001ebe70(0,1,&DAT_001f81b0);
          lVar4 = 0x3a301e0d9c1c6231;
          if (iVar2 != 0) {
            lVar4 = 0x431e29dd9dcd0d96;
          }
        }
      }
      else if (lVar3 == 0x5c9ac508be5ebb77) {
        DAT_001f81b4 = 0;
        lVar4 = 0x592de68fdf963515;
      }
      else if (lVar3 == 0x6da868bdae5cc19c) {
        DAT_001f70d0 = DAT_001f70d0 ^ 0xf6;
        DAT_001f70d1 = DAT_001f70d1 ^ 0xf6;
        DAT_001f70d2 = DAT_001f70d2 ^ 0xf6;
        DAT_001f70d3 = DAT_001f70d3 ^ 0xf6;
        _DAT_001f70a0 = _DAT_001f70a0 ^ 0xf6f6f6f6f6f6f6f6;
        uRam00000000001f70a8 = uRam00000000001f70a8 ^ 0xf6f6f6f6f6f6f6f6;
        DAT_001f70d4 = DAT_001f70d4 ^ 0xf6;
        DAT_001f70d5 = DAT_001f70d5 ^ 0xf6;
        _DAT_001f70b0 = _DAT_001f70b0 ^ 0xf6f6f6f6f6f6f6f6;
        uRam00000000001f70b8 = uRam00000000001f70b8 ^ 0xf6f6f6f6f6f6f6f6;
        _DAT_001f70c0 = _DAT_001f70c0 ^ 0xf6f6f6f6f6f6f6f6;
        uRam00000000001f70c8 = uRam00000000001f70c8 ^ 0xf6f6f6f6f6f6f6f6;
        DAT_001f8256 = '\x01';
        lVar4 = 0x5c9ac508be5ebb77;
      }
      else if (lVar3 == 0x76431f4eecfc674b) {
        iVar2 = FUN_001ebe70(0,1,&DAT_001f81b4);
        lVar4 = -0x560904eef5c12f52;
        if (iVar2 != 0) {
          lVar4 = 0x46227423964b7cb6;
        }
      }
      goto LAB_0018b2bc;
    }
    if (lVar3 < 0x4985ab49e65da180) {
      lVar4 = -0x78d5962867f6cf9d;
      if ((lVar3 != 0x43af5c7e057321f5) && (lVar4 = lVar3, lVar3 == 0x46227423964b7cb6)) {
        lVar4 = 0x76431f4eecfc674b;
      }
      goto LAB_0018b2bc;
    }
    if (lVar3 != 0x4985ab49e65da180) {
      if (lVar3 == 0x55647ab32c75bb51) {
        *param_1 = local_74;
        lVar4 = -0x61fa3703c54c2f14;
      }
      goto LAB_0018b2bc;
    }
    (**(code **)(*param_2 + 0x80))(param_2);
    (**(code **)(*param_2 + 0x88))(param_2);
    local_74 = local_88;
  }
LAB_0018b2a8:
  lVar4 = 0x55647ab32c75bb51;
  goto LAB_0018b2bc;
}


