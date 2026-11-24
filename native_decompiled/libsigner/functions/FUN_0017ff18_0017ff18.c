// Function: FUN_0017ff18
// Entry: 0017ff18

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0017ff18(int *param_1,long *param_2,long param_3,long *param_4)

{
  long lVar1;
  char cVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  long unaff_x23;
  long local_b8;
  long local_b0;
  int local_a4;
  long local_98;
  int local_8c;
  int local_7c;
  long local_78;
  
  lVar1 = 0x673bf75c957c3a4f;
  if (param_3 != 0) {
    lVar1 = -0x2965e4611165ec40;
  }
  lVar3 = lVar1;
  lVar7 = -0x1e25784c061c4c95;
LAB_00180018:
  while (lVar6 = lVar7, lVar8 = lVar3, lVar7 = lVar6, lVar3 = lVar8, lVar6 < 0x262989f9bde18b2) {
    if (lVar6 < -0x265cfa44709f0ca6) {
      if (lVar6 < -0x44e619c54a21b6b5) {
        if (lVar6 < -0x61908c9e1618b983) {
          if (lVar6 == -0x7dee32679f1b82ee) {
            lVar7 = -0x271224d0bc777002;
            bVar4 = *param_1 == 0;
            lVar8 = -0x1a0afbec7b3a36fa;
            goto LAB_00180c20;
          }
          if (lVar6 == -0x7b55ac0115aa299f) {
            lVar7 = (**(code **)(*param_2 + 0x390))(param_2,unaff_x23,local_b0,unaff_x20);
            *param_4 = lVar7;
            lVar8 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar7 = 0x7f4b473c523cbc3d;
            if (lVar8 != 0) {
              lVar7 = 0x262989f9bde18b2;
            }
          }
          else if (lVar6 == -0x656abd87d23fb6da) {
            local_78 = 0;
            local_7c = 0xf;
            goto LAB_00180df0;
          }
        }
        else if (lVar6 == -0x61908c9e1618b983) {
          lVar7 = -0x4a8a8b6ce473b436;
          lVar8 = 0x3a5e8a300fd87ded;
          cVar2 = DAT_001f821a;
LAB_00180e34:
          if (cVar2 == '\0') {
            lVar7 = lVar8;
          }
        }
        else if (lVar6 == -0x5e5e98c66d3ccf79) {
          iVar5 = FUN_001ebe70(0,1,&DAT_001f8154);
          lVar7 = -0x15f6488eaa87bce0;
          if (iVar5 != 0) {
            lVar7 = -0x44e619c54a21b6b5;
          }
        }
        else if (lVar6 == -0x4a8a8b6ce473b436) {
          lVar7 = 0x2477721dbb45688c;
        }
      }
      else if (lVar6 < -0x2cf12cce0f3551bd) {
        if (lVar6 < -0x3d11bec1bec6f255) {
          lVar7 = -0x5e5e98c66d3ccf79;
          if ((lVar6 != -0x44e619c54a21b6b5) && (lVar7 = lVar6, lVar6 == -0x3f0e812459e23bd0)) {
            return;
          }
        }
        else {
          if (lVar6 == -0x3d11bec1bec6f255) {
            lVar7 = -0x163133586c04186b;
            lVar8 = 0x62ab4986c3e9d15f;
            cVar2 = DAT_001f823f;
            goto LAB_00180e34;
          }
          if (lVar6 == -0x2e12d3841248e769) goto LAB_001801b8;
        }
      }
      else if (lVar6 == -0x2cf12cce0f3551bd) {
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        lVar7 = -0x15b6cc3d1ab0711;
        if (unaff_x23 != 0) {
          lVar7 = 0x24783f5e22834bbb;
        }
        *param_1 = 0xf;
      }
      else {
        lVar7 = 0x7cb9e2989f9ef471;
        if ((lVar6 != -0x2965e4611165ec40) && (lVar7 = lVar6, lVar6 == -0x271224d0bc777002)) {
          lVar7 = -0x3f0e812459e23bd0;
        }
      }
    }
    else if (lVar6 < -0x163133586c04186b) {
      if (lVar6 < -0x1a0ff3bc09fc26d1) {
        if (lVar6 == -0x265cfa44709f0ca6) {
          (**(code **)(*param_2 + 0xb8))(param_2,unaff_x23);
          lVar7 = -0x2e12d3841248e769;
          local_b8 = lVar8;
          if (lVar8 != 0) {
            lVar7 = 0x10556409e0c24a93;
          }
        }
        else if (lVar6 == -0x1f080a88a97d07d6) {
          DAT_001f8150 = 0;
          unaff_x23 = (**(code **)(*param_2 + 0x30))(param_2,&DAT_001f6d70);
          lVar8 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar7 = 0x5f7e55bd705a90f4;
          if (lVar8 != 0) {
            lVar7 = -0x2cf12cce0f3551bd;
          }
        }
        else if (lVar6 == -0x1e25784c061c4c95) {
          lVar7 = lVar1;
        }
      }
      else {
        lVar7 = -0x60e44515d24539b;
        if (((lVar6 != -0x1a0ff3bc09fc26d1) &&
            (lVar7 = 0x1f7dd634651c2031, lVar6 != -0x1a0afbec7b3a36fa)) &&
           (lVar7 = lVar6, lVar6 == -0x17702e7811bfa432)) {
          local_98 = 0;
          local_8c = 0xf;
          lVar7 = 0x4064923f9825f271;
        }
      }
    }
    else if (lVar6 < -0xa53525c3123f42d) {
      lVar7 = -0x1f080a88a97d07d6;
      if (lVar6 != -0x163133586c04186b) {
        if (lVar6 == -0x15f6488eaa87bce0) {
          lVar7 = -0x1a0ff3bc09fc26d1;
          if (DAT_001f8240 == '\0') {
            lVar7 = 0x7d9addea31af4d3f;
          }
        }
        else {
          lVar7 = lVar6;
          if (lVar6 == -0xdfc3290a51072a2) {
            lVar8 = -0x7b55ac0115aa299f;
            lVar7 = 0x460d027bcc0ea9de;
            bVar4 = unaff_x20 == 0;
LAB_00180c20:
            if (!bVar4) {
              lVar7 = lVar8;
            }
          }
        }
      }
    }
    else {
      lVar7 = 0x7cb9e2989f9ef471;
      if (lVar6 != -0xa53525c3123f42d) {
        if (lVar6 == -0x60e44515d24539b) {
          DAT_001f8154 = 0;
          lVar7 = 0x3113bb7deab0323c;
        }
        else {
          lVar7 = lVar6;
          if (lVar6 == -0x15b6cc3d1ab0711) {
            lVar7 = 0x1f7dd634651c2031;
          }
        }
      }
    }
  }
  if (lVar6 < 0x3113bb7deab0323c) {
    if (lVar6 < 0x234496d8741732ea) {
      if (lVar6 < 0x10e926828b5f96de) {
        if (lVar6 == 0x262989f9bde18b2) {
          local_8c = 0x18;
LAB_00180a54:
          lVar7 = 0x4064923f9825f271;
          local_98 = unaff_x20;
        }
        else if (lVar6 == 0x316c1b9dad9b641) {
          *param_1 = local_7c;
          lVar3 = local_78;
          lVar7 = -0x265cfa44709f0ca6;
        }
        else if (lVar6 == 0x10556409e0c24a93) {
          (**(code **)(*param_2 + 0xb8))(param_2,local_b8);
LAB_001801b8:
          lVar7 = -0x7dee32679f1b82ee;
        }
      }
      else if (lVar6 == 0x10e926828b5f96de) {
        local_7c = 0x18;
        local_78 = unaff_x20;
LAB_00180df0:
        lVar7 = 0x316c1b9dad9b641;
      }
      else if (lVar6 == 0x1f7dd634651c2031) {
        *param_4 = 0;
        lVar7 = -0x3f0e812459e23bd0;
      }
      else if (lVar6 == 0x219ee169bb3b08ee) {
        *param_1 = local_a4;
        lVar7 = 0x1f7dd634651c2031;
      }
      goto LAB_00180018;
    }
    if (lVar6 < 0x24783f5e22834bbb) {
      if (lVar6 == 0x234496d8741732ea) {
        local_a4 = 0xf;
        goto LAB_00180d44;
      }
      lVar3 = unaff_x20;
      lVar7 = -0x265cfa44709f0ca6;
      if ((lVar6 != 0x24738033286104b6) &&
         (lVar3 = lVar8, lVar7 = lVar6, lVar6 == 0x2477721dbb45688c)) {
        DAT_001f80bc = 0;
        local_b0 = (**(code **)(*param_2 + 0x388))(param_2,unaff_x23,&DAT_001f69a8,&DAT_001f6d90);
        lVar6 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar7 = 0x2b4896bef8ace678;
        if (lVar6 != 0) {
          lVar7 = -0x17702e7811bfa432;
        }
      }
      goto LAB_00180018;
    }
    if (lVar6 == 0x24783f5e22834bbb) {
      lVar3 = 0;
      lVar7 = -0x265cfa44709f0ca6;
      goto LAB_00180018;
    }
    if (lVar6 != 0x2b4896bef8ace678) {
      if (lVar6 == 0x2c220b5efe34438b) {
        unaff_x20 = (**(code **)(*param_2 + 0x538))(param_2,param_3);
        lVar8 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar7 = -0xdfc3290a51072a2;
        if (lVar8 != 0) {
          lVar7 = 0x7d8ca5334125df7a;
        }
      }
      goto LAB_00180018;
    }
    bVar4 = local_b0 == 0;
    lVar8 = 0x2c220b5efe34438b;
    lVar7 = -0x656abd87d23fb6da;
  }
  else if (lVar6 < 0x62ab4986c3e9d15f) {
    if (lVar6 < 0x460d027bcc0ea9de) {
      if (lVar6 == 0x3113bb7deab0323c) {
        iVar5 = FUN_001ebe70(0,1,&DAT_001f80bc);
        lVar7 = -0x61908c9e1618b983;
        if (iVar5 != 0) {
          lVar7 = 0x6ac3badb417725d6;
        }
      }
      else if (lVar6 == 0x3a5e8a300fd87ded) {
        DAT_001f69b0 = DAT_001f69b0 ^ 0xda;
        DAT_001f69b1 = DAT_001f69b1 ^ 0xda;
        DAT_001f69b2 = DAT_001f69b2 ^ 0xda;
        DAT_001f69b3 = DAT_001f69b3 ^ 0xda;
        DAT_001f69a8 = DAT_001f69a8 ^ 0xdadadadadadadada;
        DAT_001f821a = '\x01';
        lVar7 = 0x2477721dbb45688c;
      }
      else if (lVar6 == 0x4064923f9825f271) {
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        local_78 = local_98;
        local_7c = local_8c;
        lVar7 = 0x316c1b9dad9b641;
      }
      goto LAB_00180018;
    }
    if (lVar6 == 0x460d027bcc0ea9de) {
      local_7c = 0x19;
      local_78 = unaff_x20;
      goto LAB_00180df0;
    }
    lVar7 = -0x5e5e98c66d3ccf79;
    if ((lVar6 == 0x53b2a28a36d20d81) || (lVar7 = lVar6, lVar6 != 0x5f7e55bd705a90f4))
    goto LAB_00180018;
    lVar7 = 0x234496d8741732ea;
    lVar8 = 0x53b2a28a36d20d81;
    bVar4 = unaff_x23 == 0;
  }
  else {
    if (lVar6 < 0x7cb9e2989f9ef471) {
      if (lVar6 == 0x62ab4986c3e9d15f) {
        DAT_001f6d88 = DAT_001f6d88 ^ 0x7c;
        DAT_001f6d89 = DAT_001f6d89 ^ 0x7c;
        DAT_001f6d8a = DAT_001f6d8a ^ 0x7c;
        _DAT_001f6d70 = _DAT_001f6d70 ^ 0x7c7c7c7c7c7c7c7c;
        uRam00000000001f6d78 = uRam00000000001f6d78 ^ 0x7c7c7c7c7c7c7c7c;
        DAT_001f6d8b = DAT_001f6d8b ^ 0x7c;
        DAT_001f823f = '\x01';
        DAT_001f6d80 = DAT_001f6d80 ^ 0x7c7c7c7c7c7c7c7c;
        lVar7 = -0x1f080a88a97d07d6;
      }
      else if (lVar6 == 0x673bf75c957c3a4f) {
        local_a4 = 3;
LAB_00180d44:
        lVar7 = 0x219ee169bb3b08ee;
      }
      else if (lVar6 == 0x6ac3badb417725d6) {
        lVar7 = 0x3113bb7deab0323c;
      }
      goto LAB_00180018;
    }
    if (lVar6 < 0x7d9addea31af4d3f) {
      if (lVar6 == 0x7cb9e2989f9ef471) {
        iVar5 = FUN_001ebe70(0,1,&DAT_001f8150);
        lVar7 = -0x3d11bec1bec6f255;
        if (iVar5 != 0) {
          lVar7 = -0xa53525c3123f42d;
        }
      }
      else if (lVar6 == 0x7d8ca5334125df7a) {
        local_8c = 0x19;
        goto LAB_00180a54;
      }
      goto LAB_00180018;
    }
    if (lVar6 == 0x7d9addea31af4d3f) {
      _DAT_001f6d90 = _DAT_001f6d90 ^ 0x6969696969696969;
      uRam00000000001f6d98 = uRam00000000001f6d98 ^ 0x6969696969696969;
      DAT_001f6dc0 = DAT_001f6dc0 ^ 0x69;
      DAT_001f6dc1 = DAT_001f6dc1 ^ 0x69;
      _DAT_001f6da0 = _DAT_001f6da0 ^ 0x6969696969696969;
      uRam00000000001f6da8 = uRam00000000001f6da8 ^ 0x6969696969696969;
      _DAT_001f6db0 = _DAT_001f6db0 ^ 0x6969696969696969;
      uRam00000000001f6db8 = uRam00000000001f6db8 ^ 0x6969696969696969;
      DAT_001f8240 = '\x01';
      lVar7 = -0x60e44515d24539b;
      goto LAB_00180018;
    }
    if (lVar6 != 0x7f4b473c523cbc3d) goto LAB_00180018;
    lVar8 = 0x24738033286104b6;
    bVar4 = *param_4 == 0;
    lVar7 = 0x10e926828b5f96de;
  }
  if (!bVar4) {
    lVar7 = lVar8;
  }
  goto LAB_00180018;
}


