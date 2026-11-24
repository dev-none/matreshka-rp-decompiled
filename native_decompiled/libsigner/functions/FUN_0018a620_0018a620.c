// Function: FUN_0018a620
// Entry: 0018a620

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0018a620(int *param_1,long *param_2,long param_3,long param_4,undefined4 param_5,
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
  
  lVar1 = -0xc6ebb7c8c9e64f8;
  if (param_4 == 0 || param_3 == 0) {
    lVar1 = 0x6d2cc1186223d9f5;
  }
  lVar3 = -0x6ae04013d7caa4f4;
LAB_0018a728:
  lVar4 = lVar3;
  lVar3 = lVar4;
  if (0x1bd0881437dc381 < lVar4) {
    if (lVar4 < 0x45031fc2ed36a83a) {
      if (lVar4 < 0x24ab7408b4d5829d) {
        if (lVar4 < 0x91b0403cbedb8f6) {
          if (lVar4 == 0x1bd0881437dc382) {
            *param_1 = local_84;
            lVar3 = 0x94fe777b78f66b3;
          }
          else if (lVar4 == 0x8a225c11689097b) {
            _DAT_001f7050 = _DAT_001f7050 ^ 0x3232323232323232;
            uRam00000000001f7058 = uRam00000000001f7058 ^ 0x3232323232323232;
            _DAT_001f7060 = _DAT_001f7060 ^ 0x3232323232323232;
            uRam00000000001f7068 = uRam00000000001f7068 ^ 0x3232323232323232;
            DAT_001f7088 = DAT_001f7088 ^ 0x32;
            DAT_001f7089 = DAT_001f7089 ^ 0x32;
            DAT_001f7080 = DAT_001f7080 ^ 0x3232323232323232;
            _DAT_001f7070 = _DAT_001f7070 ^ 0x3232323232323232;
            uRam00000000001f7078 = uRam00000000001f7078 ^ 0x3232323232323232;
            DAT_001f8254 = '\x01';
            lVar3 = -0x7d0518a2a49fffb0;
          }
        }
        else if (lVar4 == 0x91b0403cbedb8f6) {
          local_84 = 0xf;
LAB_0018ae8c:
          lVar3 = 0x1bd0881437dc382;
        }
        else if (lVar4 == 0x94fe777b78f66b3) {
          *param_6 = 0;
          lVar3 = 0x24ca1785d4336275;
        }
        else if (lVar4 == 0x13060090a7180991) {
          lVar3 = -0x35a138b7ced28ace;
          if (*param_6 != 0) {
            lVar3 = 0x5ba015e083a662e9;
          }
        }
      }
      else if (lVar4 < 0x2aa6f2b36f474b0b) {
        if (lVar4 == 0x24ab7408b4d5829d) {
          DAT_001f81a8 = 0;
          local_90 = (**(code **)(*param_2 + 0x108))(param_2,unaff_x20,&DAT_001f7030,&DAT_001f7050);
          lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar3 = -0x27ce086cddd4dcca;
          if (lVar4 != 0) {
            lVar3 = 0x7c1d1b8252de2817;
          }
        }
        else {
          lVar3 = 0x94fe777b78f66b3;
          if ((lVar4 != 0x27afc3cf76445427) && (lVar3 = lVar4, lVar4 == 0x24ca1785d4336275)) {
            return;
          }
        }
      }
      else {
        lVar3 = -0x11849c7d03e731e9;
        if ((lVar4 != 0x2aa6f2b36f474b0b) && (lVar3 = lVar4, lVar4 == 0x3c2d4e828f4db4a5)) {
          iVar2 = FUN_001ebe70(0,1,&DAT_001f81a8);
          lVar3 = -0x11931612c3706f97;
          if (iVar2 != 0) {
            lVar3 = 0x45031fc2ed36a83a;
          }
        }
      }
      goto LAB_0018a728;
    }
    if (lVar4 < 0x5ba015e083a662e9) {
      if (lVar4 < 0x4dda1164e6523001) {
        lVar3 = 0x3c2d4e828f4db4a5;
        if ((lVar4 != 0x45031fc2ed36a83a) && (lVar3 = lVar4, lVar4 == 0x4cff104a89c31185)) {
          lVar3 = -0x7d0518a2a49fffb0;
        }
        goto LAB_0018a728;
      }
      if (lVar4 == 0x4dda1164e6523001) {
        lVar3 = 0x91b0403cbedb8f6;
        if (unaff_x20 != 0) {
          lVar3 = 0x2aa6f2b36f474b0b;
        }
        goto LAB_0018a728;
      }
      if (lVar4 != 0x4e64fc605cd17928) goto LAB_0018a728;
      local_88 = 0x20;
    }
    else {
      if (lVar4 < 0x6e737bddaf4db5fc) {
        lVar3 = -0x72e468531d2301cf;
        if ((lVar4 != 0x5ba015e083a662e9) && (lVar3 = lVar4, lVar4 == 0x6d2cc1186223d9f5)) {
          local_84 = 3;
          goto LAB_0018ae8c;
        }
        goto LAB_0018a728;
      }
      if (lVar4 == 0x6e737bddaf4db5fc) {
        *param_1 = local_74;
        lVar3 = -0x72e468531d2301cf;
        goto LAB_0018a728;
      }
      if (lVar4 == 0x6f360c9eb01eebfa) {
        lVar3 = (**(code **)(*param_2 + 0x110))(param_2,param_3,local_90,param_4,param_5);
        *param_6 = lVar3;
        lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar3 = 0x13060090a7180991;
        if (lVar4 != 0) {
          lVar3 = 0x4e64fc605cd17928;
        }
        goto LAB_0018a728;
      }
      if (lVar4 != 0x7c1d1b8252de2817) goto LAB_0018a728;
      local_88 = 0xf;
    }
    lVar3 = -0x5c943fc8f89c43f0;
    goto LAB_0018a728;
  }
  if (lVar4 < -0x35a138b7ced28ace) {
    if (lVar4 < -0x6ae04013d7caa4f4) {
      if (lVar4 < -0x706b69966d39bb34) {
        if (lVar4 == -0x7d0518a2a49fffb0) {
          DAT_001f81ac = 0;
          lVar3 = 0x3c2d4e828f4db4a5;
        }
        else if (lVar4 == -0x72e468531d2301cf) {
          (**(code **)(*param_2 + 0xb8))(param_2,unaff_x20);
          lVar3 = -0x6628f6809a9c4101;
          if (*param_1 != 0) {
            lVar3 = 0x27afc3cf76445427;
          }
        }
      }
      else {
        lVar3 = -0x72e468531d2301cf;
        if ((lVar4 != -0x706b69966d39bb34) && (lVar3 = lVar4, lVar4 == -0x6b1184cccb2824c6)) {
          lVar3 = 0x94fe777b78f66b3;
        }
      }
      goto LAB_0018a728;
    }
    if (lVar4 < -0x6338e9cee74c01c3) {
      lVar3 = lVar1;
      if ((lVar4 != -0x6ae04013d7caa4f4) && (lVar3 = lVar4, lVar4 == -0x6628f6809a9c4101)) {
        lVar3 = 0x24ca1785d4336275;
      }
      goto LAB_0018a728;
    }
    if (lVar4 == -0x6338e9cee74c01c3) {
      lVar3 = 0x4cff104a89c31185;
      if (DAT_001f8254 == '\0') {
        lVar3 = 0x8a225c11689097b;
      }
      goto LAB_0018a728;
    }
    if (lVar4 == -0x62329fbdd387028d) {
      (**(code **)(*param_2 + 0x80))(param_2);
      (**(code **)(*param_2 + 0x88))(param_2);
      lVar3 = -0x6b1184cccb2824c6;
      if (unaff_x20 != 0) {
        lVar3 = -0x706b69966d39bb34;
      }
      *param_1 = 0xf;
      goto LAB_0018a728;
    }
    if (lVar4 != -0x5c943fc8f89c43f0) goto LAB_0018a728;
    (**(code **)(*param_2 + 0x80))(param_2);
    (**(code **)(*param_2 + 0x88))(param_2);
    local_74 = local_88;
  }
  else if (lVar4 < -0x27c247b10658fc6d) {
    if (-0x29a0273f8ced7dab < lVar4) {
      lVar3 = 0x24ab7408b4d5829d;
      if ((lVar4 != -0x29a0273f8ced7daa) && (lVar3 = lVar4, lVar4 == -0x27ce086cddd4dcca)) {
        lVar3 = -0x80fd2dbea8601f7;
        if (local_90 != 0) {
          lVar3 = 0x6f360c9eb01eebfa;
        }
      }
      goto LAB_0018a728;
    }
    if (lVar4 != -0x35a138b7ced28ace) {
      if (lVar4 == -0x358623cddc10d5ae) {
        lVar3 = -0x11849c7d03e731e9;
      }
      goto LAB_0018a728;
    }
    local_74 = 0x20;
  }
  else {
    if (lVar4 < -0x11849c7d03e731e9) {
      if (lVar4 == -0x27c247b10658fc6d) {
        DAT_001f7040 = DAT_001f7040 ^ 0xb3;
        DAT_001f7042 = DAT_001f7042 ^ 0xb3;
        DAT_001f7041 = DAT_001f7041 ^ 0xb3;
        _DAT_001f7030 = _DAT_001f7030 ^ 0xb3b3b3b3b3b3b3b3;
        uRam00000000001f7038 = uRam00000000001f7038 ^ 0xb3b3b3b3b3b3b3b3;
        DAT_001f8253 = '\x01';
        lVar3 = 0x24ab7408b4d5829d;
      }
      else if (lVar4 == -0x11931612c3706f97) {
        lVar3 = -0x29a0273f8ced7daa;
        if (DAT_001f8253 == '\0') {
          lVar3 = -0x27c247b10658fc6d;
        }
      }
      goto LAB_0018a728;
    }
    if (lVar4 == -0x11849c7d03e731e9) {
      iVar2 = FUN_001ebe70(0,1,&DAT_001f81ac);
      lVar3 = -0x6338e9cee74c01c3;
      if (iVar2 != 0) {
        lVar3 = -0x358623cddc10d5ae;
      }
      goto LAB_0018a728;
    }
    if (lVar4 == -0xc6ebb7c8c9e64f8) {
      unaff_x20 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
      lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
      lVar3 = 0x4dda1164e6523001;
      if (lVar4 != 0) {
        lVar3 = -0x62329fbdd387028d;
      }
      goto LAB_0018a728;
    }
    if (lVar4 != -0x80fd2dbea8601f7) goto LAB_0018a728;
    local_74 = 0xf;
  }
  lVar3 = 0x6e737bddaf4db5fc;
  goto LAB_0018a728;
}


