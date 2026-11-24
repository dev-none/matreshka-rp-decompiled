// Function: FUN_0018ef18
// Entry: 0018ef18

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0018ef18(long *param_1,long *param_2,long param_3,long param_4,long param_5,
                 undefined8 *param_6)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long unaff_x20;
  long *unaff_x21;
  long local_100;
  long *local_d8;
  long local_d0;
  int local_c4;
  long local_b8;
  long *local_b0;
  int local_a4;
  long local_a0;
  long *local_98;
  int local_8c;
  long local_88;
  long *local_80;
  
  lVar1 = 0x541736948aabbf04;
  if (param_5 != 0) {
    lVar1 = 0x3ab0fbbe79665e7d;
  }
  lVar2 = -0x20d7e8e77eea53fe;
  if (param_4 == 0 || param_3 == 0) {
    lVar2 = 0x60d9d10a48d6ffd9;
  }
  plVar3 = param_1;
  plVar4 = param_2;
  lVar5 = lVar2;
  lVar11 = 0x6a80d59fcaea4fd2;
LAB_0018f05c:
  lVar12 = lVar11;
  lVar9 = lVar5;
  plVar10 = plVar4;
  plVar7 = plVar3;
  lVar11 = lVar12;
  plVar3 = plVar7;
  plVar4 = plVar10;
  lVar5 = lVar9;
  if (lVar12 < 0xc1770c2cd176e95) {
    if (lVar12 < -0x3175a4f062bab50e) {
      if (lVar12 < -0x5aeb4632175e581f) {
        if (lVar12 < -0x7161864d7d7475aa) {
          if (lVar12 == -0x7d1c700778ed2e61) {
            iVar6 = FUN_001ebe70(0,1,&DAT_001f81d4);
            lVar11 = 0x39bb1d207299a16;
            if (iVar6 != 0) {
              lVar11 = 0x7524a4ac0938fd60;
            }
          }
          else if (lVar12 == -0x783a4323c071db9a) {
            *param_6 = 0;
            lVar11 = 0x70b1685f1924833e;
          }
          else if (lVar12 == -0x7220e006e1be5cad) {
            lVar11 = -0x783a4323c071db9a;
          }
        }
        else if (lVar12 == -0x7161864d7d7475aa) {
          *(int *)param_1 = local_a4;
          plVar4 = local_98;
          lVar5 = local_a0;
          lVar11 = 0x7abef142b11a1022;
        }
        else {
          lVar11 = 0xab9c0354f59e669;
          if ((lVar12 != -0x678923017053fd55) && (lVar11 = lVar12, lVar12 == -0x6731642549bbacca)) {
            DAT_001f7160 = DAT_001f7160 ^ 0xb9;
            DAT_001f7161 = DAT_001f7161 ^ 0xb9;
            DAT_001f7158 = DAT_001f7158 ^ 0xb9b9b9b9b9b9b9b9;
            DAT_001f825d = '\x01';
            lVar11 = 0xab9c0354f59e669;
          }
        }
        goto LAB_0018f05c;
      }
      if (lVar12 < -0x4f5b494f381e232b) {
        lVar11 = -0x783a4323c071db9a;
        if (lVar12 != -0x5aeb4632175e581f) {
          if (lVar12 == -0x5acf0d87e1e4a0e8) {
            (**(code **)(*param_2 + 0x80))(param_2);
            (**(code **)(*param_2 + 0x88))(param_2);
            local_98 = local_b0;
            local_a4 = local_8c;
            local_a0 = local_b8;
          }
          else {
            lVar11 = lVar12;
            if (lVar12 != -0x5617ace117a73ec7) goto LAB_0018f05c;
            local_98 = (long *)0x0;
            plVar7 = local_98;
LAB_0018f6a8:
            local_98 = plVar7;
            local_a4 = 0x1f;
            local_a0 = unaff_x20;
          }
LAB_0018fe70:
          lVar11 = -0x7161864d7d7475aa;
        }
      }
      else if (lVar12 < -0x42a1c6840c821e12) {
        if (lVar12 == -0x4f5b494f381e232b) {
          lVar11 = 0x76e340f9a92e5f53;
          if (unaff_x21 != (long *)0x0) {
            lVar11 = -0x23e987f223d5b1d2;
          }
        }
        else if (lVar12 == -0x4bbccc9e20962dce) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          lVar11 = -0x7220e006e1be5cad;
          if (local_88 != 0) {
            lVar11 = 0x7068db4d092ddf09;
          }
          *(int *)param_1 = 0xf;
        }
      }
      else if (lVar12 == -0x42a1c6840c821e12) {
        lVar11 = 0x22ceb6c725af2399;
        if (local_d8 != (long *)0x0) {
          lVar11 = 0x5b891d812dcdcf0e;
        }
      }
      else if (lVar12 == -0x3d439d2a1b9dffea) {
        DAT_001f81d4 = 0;
        lVar11 = 0x3126bd202e5944e6;
      }
      goto LAB_0018f05c;
    }
    if (-0x17abd251ad2a78be < lVar12) {
      if (lVar12 < 0x39bb1d207299a16) {
        if (lVar12 == -0x17abd251ad2a78bd) {
          local_c4 = 0xf;
LAB_0018ffe8:
          lVar11 = 0x2aa8bf9ca4614287;
        }
        else {
          lVar11 = -0x42a1c6840c821e12;
          if ((lVar12 != -0x15227eaf0780c3b1) && (lVar11 = lVar12, lVar12 == -0x1f4831e5eb8bbc7)) {
            _DAT_001f7170 = _DAT_001f7170 ^ 0x4444444444444444;
            uRam00000000001f7178 = uRam00000000001f7178 ^ 0x4444444444444444;
            _DAT_001f7180 = _DAT_001f7180 ^ 0x4444444444444444;
            uRam00000000001f7188 = uRam00000000001f7188 ^ 0x4444444444444444;
            DAT_001f71a8 = DAT_001f71a8 ^ 0x44;
            _DAT_001f7190 = _DAT_001f7190 ^ 0x4444444444444444;
            uRam00000000001f7198 = uRam00000000001f7198 ^ 0x4444444444444444;
            DAT_001f71a0 = DAT_001f71a0 ^ 0x4444444444444444;
            DAT_001f825e = '\x01';
            lVar11 = -0x3d439d2a1b9dffea;
          }
        }
      }
      else if (lVar12 < 0xab9c0354f59e669) {
        if (lVar12 == 0x39bb1d207299a16) {
          lVar11 = 0x2f0e7cb0ce79bca9;
          if (DAT_001f825e == '\0') {
            lVar11 = -0x1f4831e5eb8bbc7;
          }
        }
        else if (lVar12 == 0x58ff9aa56bd1aff) {
          lVar11 = -0x17abd251ad2a78bd;
          if (local_88 != 0) {
            lVar11 = -0x28b4d7c35bd6e862;
          }
        }
      }
      else if (lVar12 == 0xab9c0354f59e669) {
        DAT_001f81d0 = 0;
        local_d0 = (**(code **)(*param_2 + 0x108))(param_2,local_88,&DAT_001f7158,&DAT_001f7170);
        lVar9 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar11 = 0x7af9873411cdfa5f;
        if (lVar9 != 0) {
          lVar11 = -0x18b5d8ca0a99850b;
        }
      }
      else if (lVar12 == 0xae8d951d960eb30) {
        lVar11 = 0x70b1685f1924833e;
      }
      goto LAB_0018f05c;
    }
    if (lVar12 < -0x23e987f223d5b1d2) {
      if (lVar12 != -0x3175a4f062bab50e) {
        lVar11 = lVar1;
        if ((lVar12 != -0x29607eba2de92626) && (lVar11 = lVar12, lVar12 == -0x28b4d7c35bd6e862)) {
          lVar11 = -0x7d1c700778ed2e61;
        }
        goto LAB_0018f05c;
      }
      local_8c = 0x1f;
      local_b8 = unaff_x20;
      local_b0 = unaff_x21;
    }
    else {
      plVar3 = unaff_x21;
      lVar11 = 0x4b0abc46c39304b5;
      if (lVar12 == -0x23e987f223d5b1d2) goto LAB_0018f05c;
      if (lVar12 == -0x20d7e8e77eea53fe) {
        local_88 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
        lVar9 = (**(code **)(*param_2 + 0x78))(param_2);
        plVar3 = plVar7;
        lVar11 = 0x58ff9aa56bd1aff;
        if (lVar9 != 0) {
          lVar11 = -0x4bbccc9e20962dce;
        }
        goto LAB_0018f05c;
      }
      plVar3 = plVar7;
      lVar11 = lVar12;
      if (lVar12 != -0x18b5d8ca0a99850b) goto LAB_0018f05c;
      local_b8 = 0;
      local_b0 = (long *)0x0;
      local_8c = 0xf;
    }
  }
  else {
    if (0x509b7efb97caf579 < lVar12) {
      if (lVar12 < 0x70b1685f1924833e) {
        if (lVar12 < 0x60d9d10a48d6ffd9) {
          if (lVar12 == 0x509b7efb97caf57a) {
            (**(code **)(*param_2 + 0xb8))(param_2,local_100);
            lVar11 = -0x42a1c6840c821e12;
          }
          else if (lVar12 == 0x541736948aabbf04) {
            plVar3 = (long *)0x0;
            lVar11 = 0x4b0abc46c39304b5;
          }
          else if (lVar12 == 0x5b891d812dcdcf0e) {
            (**(code **)(*param_2 + 0xb8))(param_2,local_d8);
LAB_0018fa1c:
            lVar11 = 0x11b162dd38da3e83;
          }
        }
        else {
          if (lVar12 == 0x60d9d10a48d6ffd9) {
            local_c4 = 3;
            goto LAB_0018ffe8;
          }
          lVar11 = lVar2;
          if ((lVar12 != 0x6a80d59fcaea4fd2) && (lVar11 = lVar12, lVar12 == 0x7068db4d092ddf09)) {
            plVar4 = (long *)0x0;
            lVar5 = 0;
            lVar11 = 0x7abef142b11a1022;
          }
        }
      }
      else if (lVar12 < 0x771bd97950a08bc5) {
        if (lVar12 < 0x7524a4ac0938fd60) {
          if (lVar12 == 0x736b90de01aa161d) {
            lVar11 = -0x5617ace117a73ec7;
            lVar12 = -0x29607eba2de92626;
            lVar9 = unaff_x20;
            goto LAB_0018f050;
          }
          if (lVar12 == 0x70b1685f1924833e) {
            return;
          }
        }
        else {
          lVar11 = -0x7d1c700778ed2e61;
          if ((lVar12 != 0x7524a4ac0938fd60) &&
             (lVar11 = lVar12, plVar7 = unaff_x21, lVar12 == 0x76e340f9a92e5f53)) goto LAB_0018f6a8;
        }
      }
      else {
        plVar4 = local_80;
        lVar5 = unaff_x20;
        lVar11 = 0x7abef142b11a1022;
        if (lVar12 != 0x771bd97950a08bc5) {
          if (lVar12 == 0x7abef142b11a1022) {
            (**(code **)(*param_2 + 0xb8))(param_2,local_88);
            plVar4 = plVar10;
            lVar5 = lVar9;
            lVar11 = -0x15227eaf0780c3b1;
            local_100 = lVar9;
            local_d8 = plVar10;
            if (lVar9 != 0) {
              lVar11 = 0x509b7efb97caf57a;
            }
          }
          else {
            plVar4 = plVar10;
            lVar5 = lVar9;
            lVar11 = lVar12;
            if (lVar12 == 0x7af9873411cdfa5f) {
              lVar11 = 0x4f812db96a77e55e;
              if (local_d0 != 0) {
                lVar11 = 0x3d1620b8194e4a8e;
              }
            }
          }
        }
      }
      goto LAB_0018f05c;
    }
    if (0x2aa8bf9ca4614286 < lVar12) {
      if (lVar12 < 0x3ab0fbbe79665e7d) {
        if (lVar12 == 0x2aa8bf9ca4614287) {
          *(int *)param_1 = local_c4;
          lVar11 = -0x783a4323c071db9a;
        }
        else {
          lVar11 = -0x3d439d2a1b9dffea;
          if ((lVar12 != 0x2f0e7cb0ce79bca9) && (lVar11 = lVar12, lVar12 == 0x3126bd202e5944e6)) {
            iVar6 = FUN_001ebe70(0,1,&DAT_001f81d0);
            lVar11 = 0x14b2aa5f36a9de34;
            if (iVar6 != 0) {
              lVar11 = 0xc1770c2cd176e95;
            }
          }
        }
      }
      else if (lVar12 < 0x4b0abc46c39304b5) {
        if (lVar12 == 0x3ab0fbbe79665e7d) {
          unaff_x21 = (long *)(**(code **)(*param_2 + 0x538))(param_2,param_5);
          lVar9 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar11 = -0x4f5b494f381e232b;
          lVar12 = -0x3175a4f062bab50e;
LAB_0018f050:
          if (lVar9 != 0) {
            lVar11 = lVar12;
          }
        }
        else if (lVar12 == 0x3d1620b8194e4a8e) {
          unaff_x20 = (**(code **)(*param_2 + 0x538))(param_2,param_4);
          lVar9 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar11 = 0x736b90de01aa161d;
          if (lVar9 != 0) {
            lVar11 = 0x16bf8033e3bda4f8;
          }
        }
      }
      else if (lVar12 == 0x4b0abc46c39304b5) {
        uVar8 = (**(code **)(*param_2 + 0x110))(param_2,param_3,local_d0,unaff_x20,plVar7);
        *param_6 = uVar8;
        lVar9 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar11 = 0x771bd97950a08bc5;
        local_80 = plVar7;
        if (lVar9 != 0) {
          lVar11 = 0x212c34155c1a7d31;
        }
      }
      else if (lVar12 == 0x4f812db96a77e55e) {
        local_a0 = 0;
        local_98 = (long *)0x0;
        local_a4 = 0xf;
        goto LAB_0018fe70;
      }
      goto LAB_0018f05c;
    }
    if (lVar12 < 0x16bf8033e3bda4f8) {
      lVar11 = 0x3126bd202e5944e6;
      if (lVar12 != 0xc1770c2cd176e95) {
        if (lVar12 == 0x11b162dd38da3e83) {
          lVar11 = 0xae8d951d960eb30;
          if ((int)*param_1 != 0) {
            lVar11 = -0x5aeb4632175e581f;
          }
        }
        else {
          lVar11 = lVar12;
          if (lVar12 == 0x14b2aa5f36a9de34) {
            lVar11 = -0x678923017053fd55;
            if (DAT_001f825d == '\0') {
              lVar11 = -0x6731642549bbacca;
            }
          }
        }
      }
      goto LAB_0018f05c;
    }
    if (lVar12 != 0x16bf8033e3bda4f8) {
      if (lVar12 == 0x212c34155c1a7d31) {
        local_8c = 0x19;
        local_b0 = local_80;
        local_b8 = unaff_x20;
        goto LAB_0018ff74;
      }
      if (lVar12 == 0x22ceb6c725af2399) goto LAB_0018fa1c;
      goto LAB_0018f05c;
    }
    local_b0 = (long *)0x0;
    local_8c = 0x1f;
    local_b8 = unaff_x20;
  }
LAB_0018ff74:
  plVar3 = plVar7;
  lVar11 = -0x5acf0d87e1e4a0e8;
  goto LAB_0018f05c;
}


