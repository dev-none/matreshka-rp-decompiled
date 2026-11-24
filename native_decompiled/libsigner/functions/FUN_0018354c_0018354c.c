// Function: FUN_0018354c
// Entry: 0018354c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0018354c(int *param_1,long *param_2,long param_3,long param_4,long *param_5)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x26;
  int unaff_w27;
  long local_78;
  int local_70;
  int local_6c;
  
  lVar1 = 0x32b6fa07c543c53c;
  if (param_4 == 0 || param_3 == 0) {
    lVar1 = 0x6409481cadda70be;
  }
  lVar4 = -0x15b23d0d429e116e;
LAB_00183630:
  while (lVar3 = lVar4, lVar4 = lVar3, -0x15b23d0d429e116f < lVar3) {
    if (lVar3 < 0x344dbb071c010da4) {
      if (lVar3 < 0xc8d2128a81421fb) {
        if (lVar3 < -0xae8d87163aadfa1) {
          lVar4 = lVar1;
          if ((lVar3 != -0x15b23d0d429e116e) && (lVar4 = lVar3, lVar3 == -0x158af2398cfb2578)) {
            lVar4 = 0x295cf24fe6c32bc6;
          }
        }
        else {
          lVar4 = 0x6a4c7bf92e9336a3;
          if ((lVar3 != -0xae8d87163aadfa1) && (lVar4 = lVar3, lVar3 == -0x459ab2c7388863d)) {
            (**(code **)(*param_2 + 0xb8))(param_2,unaff_x26);
            lVar4 = -0x158af2398cfb2578;
            if (*param_1 != 0) {
              lVar4 = -0x1bb829ac419744e7;
            }
          }
        }
      }
      else if (lVar3 < 0x2e3e491c46302e12) {
        lVar4 = 0x387c48a6ffe8e774;
        if ((lVar3 != 0xc8d2128a81421fb) && (lVar4 = lVar3, lVar3 == 0x295cf24fe6c32bc6)) {
          return;
        }
      }
      else if (lVar3 == 0x2e3e491c46302e12) {
        DAT_001f8164 = 0;
        local_78 = (**(code **)(*param_2 + 0x2f0))(param_2,unaff_x26,param_4,&DAT_001f6df0);
        lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar4 = 0x363a7854704800c6;
        if (lVar3 != 0) {
          lVar4 = -0x31147ccb426dba04;
        }
      }
      else if (lVar3 == 0x32b6fa07c543c53c) {
        unaff_x26 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
        lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar4 = 0x616fe4c86213f2d0;
        if (lVar3 != 0) {
          lVar4 = -0x3acc70e790b849cd;
        }
      }
    }
    else if (lVar3 < 0x616fe4c86213f2d0) {
      if (lVar3 < 0x381e2f4dfef2f3eb) {
        if (lVar3 == 0x344dbb071c010da4) {
          unaff_w27 = 0x19;
          lVar4 = -0x6d89a53b865c11f1;
        }
        else if (lVar3 == 0x363a7854704800c6) {
          lVar4 = -0x31ecdc88f69b4cc1;
          if (local_78 != 0) {
            lVar4 = -0x32b0e1144b3d9989;
          }
        }
      }
      else if (lVar3 == 0x381e2f4dfef2f3eb) {
        *param_1 = local_6c;
        lVar4 = 0x6a4c7bf92e9336a3;
      }
      else if (lVar3 == 0x387c48a6ffe8e774) {
        iVar2 = FUN_001ebe70(0,1,&DAT_001f8164);
        lVar4 = -0x727baeca76d16d09;
        if (iVar2 != 0) {
          lVar4 = 0xc8d2128a81421fb;
        }
      }
    }
    else if (lVar3 < 0x6a4c7bf92e9336a3) {
      if (lVar3 == 0x616fe4c86213f2d0) {
        lVar4 = -0x64700d677f116b33;
        if (unaff_x26 != 0) {
          lVar4 = 0x7fff1245e69d4291;
        }
      }
      else if (lVar3 == 0x6409481cadda70be) {
        local_6c = 3;
LAB_001838b0:
        lVar4 = 0x381e2f4dfef2f3eb;
      }
    }
    else if (lVar3 == 0x6a4c7bf92e9336a3) {
      *param_5 = 0;
      lVar4 = 0x295cf24fe6c32bc6;
    }
    else if (lVar3 == 0x7fff1245e69d4291) {
      lVar4 = 0x387c48a6ffe8e774;
    }
  }
  if (lVar3 < -0x3c29b4cda3f4f087) {
    if (lVar3 < -0x6d89a53b865c11f1) {
      lVar4 = -0x459ab2c7388863d;
      if (((lVar3 != -0x76b79d9a6e3900ae) &&
          (lVar4 = 0x2e3e491c46302e12, lVar3 != -0x7644e00d9b7b2e3f)) &&
         (lVar4 = lVar3, lVar3 == -0x727baeca76d16d09)) {
        lVar4 = -0x7644e00d9b7b2e3f;
        if (DAT_001f8242 == '\0') {
          lVar4 = -0x556c719891ad53ac;
        }
      }
      goto LAB_00183630;
    }
    if (lVar3 < -0x5d98338aebcde939) {
      if (lVar3 == -0x6d89a53b865c11f1) {
        *param_1 = unaff_w27;
        lVar4 = -0x459ab2c7388863d;
      }
      else if (lVar3 == -0x64700d677f116b33) {
        local_6c = 0xf;
        goto LAB_001838b0;
      }
      goto LAB_00183630;
    }
    if (lVar3 != -0x5d98338aebcde939) {
      if (lVar3 == -0x556c719891ad53ac) {
        DAT_001f6e00 = DAT_001f6e00 ^ 0xca;
        DAT_001f6e02 = DAT_001f6e02 ^ 0xca;
        DAT_001f6e01 = DAT_001f6e01 ^ 0xca;
        _DAT_001f6df0 = _DAT_001f6df0 ^ 0xcacacacacacacaca;
        uRam00000000001f6df8 = uRam00000000001f6df8 ^ 0xcacacacacacacaca;
        DAT_001f8242 = '\x01';
        lVar4 = 0x2e3e491c46302e12;
      }
      goto LAB_00183630;
    }
    local_70 = 0x19;
  }
  else {
    if (lVar3 < -0x31af169695b1e755) {
      if (lVar3 < -0x32b0e1144b3d9989) {
        if (lVar3 == -0x3c29b4cda3f4f087) {
          lVar4 = 0x344dbb071c010da4;
          if (*param_5 != 0) {
            lVar4 = -0x76b79d9a6e3900ae;
          }
        }
        else if (lVar3 == -0x3acc70e790b849cd) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          lVar4 = -0xae8d87163aadfa1;
          if (unaff_x26 != 0) {
            lVar4 = -0x24fbf41f4741d8b2;
          }
          *param_1 = 0xf;
        }
      }
      else if (lVar3 == -0x32b0e1144b3d9989) {
        lVar4 = (**(code **)(*param_2 + 0x2f8))(param_2,param_3,local_78);
        *param_5 = lVar4;
        lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar4 = -0x3c29b4cda3f4f087;
        if (lVar3 != 0) {
          lVar4 = -0x5d98338aebcde939;
        }
      }
      else if (lVar3 == -0x31ecdc88f69b4cc1) {
        unaff_w27 = 0xf;
        lVar4 = -0x6d89a53b865c11f1;
      }
      goto LAB_00183630;
    }
    if (-0x24fbf41f4741d8b3 < lVar3) {
      lVar4 = -0x459ab2c7388863d;
      if ((lVar3 != -0x24fbf41f4741d8b2) && (lVar4 = lVar3, lVar3 == -0x1bb829ac419744e7)) {
        lVar4 = 0x6a4c7bf92e9336a3;
      }
      goto LAB_00183630;
    }
    if (lVar3 == -0x31af169695b1e755) {
      (**(code **)(*param_2 + 0x80))(param_2);
      (**(code **)(*param_2 + 0x88))(param_2);
      lVar4 = -0x6d89a53b865c11f1;
      unaff_w27 = local_70;
      goto LAB_00183630;
    }
    if (lVar3 != -0x31147ccb426dba04) goto LAB_00183630;
    local_70 = 0xf;
  }
  lVar4 = -0x31af169695b1e755;
  goto LAB_00183630;
}


