// Function: FUN_0017cfd0
// Entry: 0017cfd0

void FUN_0017cfd0(int *param_1,long *param_2,long param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x27;
  long local_90;
  int local_88;
  int local_84;
  int local_74;
  
  lVar1 = -0x7c5804652a55298a;
  if (param_3 != 0) {
    lVar1 = -0x435494032ebb793a;
  }
  lVar3 = 0x781eaa4f6f8b9a48;
LAB_0017d0d4:
  while (lVar4 = lVar3, lVar3 = lVar4, lVar4 < -0x694fb817755c9b6) {
    if (lVar4 < -0x435494032ebb793a) {
      if (lVar4 < -0x72931f4161cb92ed) {
        if (lVar4 < -0x7a09ab1f71ccccab) {
          if (lVar4 == -0x7e6ce64c24d6fe43) {
            DAT_001f6b14 = DAT_001f6b14 ^ 0xa7;
            DAT_001f6b15 = DAT_001f6b15 ^ 0xa7;
            DAT_001f6b16 = DAT_001f6b16 ^ 0xa7;
            DAT_001f6b17 = DAT_001f6b17 ^ 0xa7;
            DAT_001f6b18 = DAT_001f6b18 ^ 0xa7;
            DAT_001f8229 = '\x01';
            lVar3 = -0x6ebbe1053f891c44;
          }
          else if (lVar4 == -0x7c5804652a55298a) {
            local_84 = 3;
LAB_0017d980:
            lVar3 = 0x5d97f3f67dc4e0da;
          }
        }
        else if (lVar4 == -0x7a09ab1f71ccccab) {
          local_74 = 0xf;
LAB_0017d0c0:
          lVar3 = -0x72951439c1455c6a;
        }
        else if (lVar4 == -0x72951439c1455c6a) {
          *param_1 = local_74;
          lVar3 = 0x636f3e7df12cb02e;
        }
      }
      else if (lVar4 < -0x6797656be2fd6683) {
        if (lVar4 == -0x72931f4161cb92ed) {
          iVar2 = FUN_001ebe70(0,1,&DAT_001f80f8);
          lVar3 = -0x6797656be2fd6683;
          if (iVar2 != 0) {
            lVar3 = -0x23acc68fe4c32a6c;
          }
        }
        else if (lVar4 == -0x6ebbe1053f891c44) {
          DAT_001f80f8 = 0;
          lVar3 = 0x66aa9efed912dc22;
        }
      }
      else if (lVar4 == -0x6797656be2fd6683) {
        lVar3 = -0x277fbfd3c71ec897;
        if (DAT_001f8229 == '\0') {
          lVar3 = -0x7e6ce64c24d6fe43;
        }
      }
      else if (lVar4 == -0x63164dc14d352aab) {
        lVar3 = 0x7ac89b2b6a299404;
        if (*param_4 != 0) {
          lVar3 = 0x29f216164fbe5951;
        }
      }
      else if (lVar4 == -0x44b2547f2a363afe) {
        lVar3 = 0x66aa9efed912dc22;
      }
    }
    else if (lVar4 < -0x23acc68fe4c32a6c) {
      if (lVar4 < -0x3315826535f4e894) {
        if (lVar4 == -0x435494032ebb793a) {
          unaff_x27 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
          lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar3 = -0x367e00736e098601;
          if (lVar4 != 0) {
            lVar3 = -0x3315826535f4e894;
          }
        }
        else if (lVar4 == -0x367e00736e098601) {
          lVar3 = 0x45606e5a3d5564a2;
          if (unaff_x27 != 0) {
            lVar3 = 0x1aa8edb7037db824;
          }
        }
      }
      else if (lVar4 == -0x3315826535f4e894) {
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        lVar3 = -0x694fb817755c9b6;
        if (unaff_x27 != 0) {
          lVar3 = 0x2b741b35460e36ee;
        }
        *param_1 = 0xf;
      }
      else {
        if (lVar4 == -0x2ca089179830c422) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          local_74 = local_88;
          goto LAB_0017d0c0;
        }
        if (lVar4 == -0x277fbfd3c71ec897) {
          lVar3 = -0x6ebbe1053f891c44;
        }
      }
    }
    else if (lVar4 < -0xd1e0b99bf4ab8b5) {
      lVar3 = -0x72931f4161cb92ed;
      if (((lVar4 != -0x23acc68fe4c32a6c) &&
          (lVar3 = -0xd1e0b99bf4ab8b5, lVar4 != -0x12d01f148471bc44)) &&
         (lVar3 = lVar4, lVar4 == -0x2212cf72d9dfba48)) {
        return;
      }
    }
    else if (lVar4 == -0xd1e0b99bf4ab8b5) {
      DAT_001f80cc = 0;
      local_90 = (**(code **)(*param_2 + 0x108))(param_2,unaff_x27,&DAT_001f6a18,&DAT_001f6b14);
      lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
      lVar3 = -0x317e30e79e8e123;
      if (lVar4 != 0) {
        lVar3 = 0x35bcca7d19211d70;
      }
    }
    else if (lVar4 == -0x882b933a873c2ae) {
      *param_4 = 0;
      lVar3 = -0x2212cf72d9dfba48;
    }
  }
  if (lVar4 < 0x45606e5a3d5564a2) {
    if (lVar4 < 0x29f216164fbe5951) {
      if (lVar4 < 0x1aa8edb7037db824) {
        lVar3 = -0x882b933a873c2ae;
        if ((lVar4 != -0x694fb817755c9b6) && (lVar3 = lVar4, lVar4 == -0x317e30e79e8e123)) {
          lVar3 = -0x7a09ab1f71ccccab;
          if (local_90 != 0) {
            lVar3 = 0x1b161a9136b37842;
          }
        }
      }
      else {
        lVar3 = -0x72931f4161cb92ed;
        if ((lVar4 != 0x1aa8edb7037db824) && (lVar3 = lVar4, lVar4 == 0x1b161a9136b37842)) {
          lVar3 = (**(code **)(*param_2 + 0x110))(param_2,param_3,local_90);
          *param_4 = lVar3;
          lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar3 = -0x63164dc14d352aab;
          if (lVar4 != 0) {
            lVar3 = 0x56f264d917d22aa7;
          }
        }
      }
      goto LAB_0017d0d4;
    }
    if (lVar4 < 0x35bcca7d19211d70) {
      lVar3 = 0x636f3e7df12cb02e;
      if ((lVar4 != 0x29f216164fbe5951) && (lVar3 = lVar4, lVar4 == 0x2b741b35460e36ee)) {
        lVar3 = 0x636f3e7df12cb02e;
      }
      goto LAB_0017d0d4;
    }
    if (lVar4 != 0x35bcca7d19211d70) {
      if (lVar4 == 0x36c591c531ab431b) {
        lVar3 = -0x12d01f148471bc44;
        if (DAT_001f821e == '\0') {
          lVar3 = 0x48c0afe8cfbb0886;
        }
      }
      else if (lVar4 == 0x43fdc6d5f0374a41) {
        lVar3 = -0x2212cf72d9dfba48;
      }
      goto LAB_0017d0d4;
    }
    local_88 = 0xf;
  }
  else {
    if (0x636f3e7df12cb02d < lVar4) {
      if (lVar4 < 0x66aa9efed912dc22) {
        if (lVar4 == 0x636f3e7df12cb02e) {
          (**(code **)(*param_2 + 0xb8))(param_2,unaff_x27);
          lVar3 = 0x43fdc6d5f0374a41;
          if (*param_1 != 0) {
            lVar3 = 0x659798c539cc6d88;
          }
        }
        else if (lVar4 == 0x659798c539cc6d88) {
          lVar3 = -0x882b933a873c2ae;
        }
      }
      else if (lVar4 == 0x66aa9efed912dc22) {
        iVar2 = FUN_001ebe70(0,1,&DAT_001f80cc);
        lVar3 = 0x36c591c531ab431b;
        if (iVar2 != 0) {
          lVar3 = -0x44b2547f2a363afe;
        }
      }
      else {
        if (lVar4 == 0x7ac89b2b6a299404) {
          local_74 = 0x25;
          goto LAB_0017d0c0;
        }
        if (lVar4 == 0x781eaa4f6f8b9a48) {
          lVar3 = lVar1;
        }
      }
      goto LAB_0017d0d4;
    }
    if (lVar4 < 0x56f264d917d22aa7) {
      if (lVar4 == 0x45606e5a3d5564a2) {
        local_84 = 0xf;
        goto LAB_0017d980;
      }
      if (lVar4 == 0x48c0afe8cfbb0886) {
        DAT_001f6a18 = DAT_001f6a18 ^ 0x4b4b4b4b4b4b4b4b;
        DAT_001f821e = '\x01';
        lVar3 = -0xd1e0b99bf4ab8b5;
      }
      goto LAB_0017d0d4;
    }
    if (lVar4 != 0x56f264d917d22aa7) {
      if (lVar4 == 0x5d97f3f67dc4e0da) {
        *param_1 = local_84;
        lVar3 = -0x882b933a873c2ae;
      }
      goto LAB_0017d0d4;
    }
    local_88 = 0x25;
  }
  lVar3 = -0x2ca089179830c422;
  goto LAB_0017d0d4;
}


