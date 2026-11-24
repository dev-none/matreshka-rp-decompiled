// Function: FUN_001939c0
// Entry: 001939c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001939c0(int *param_1,long *param_2,long *param_3,ulong param_4,ulong *param_5)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
  code *pcVar6;
  long *plVar7;
  long lVar8;
  int unaff_w19;
  ulong uVar9;
  ulong *puVar10;
  long lVar11;
  undefined1 auStack_160 [8];
  long local_158;
  int local_14c;
  long local_148;
  long local_140;
  ulong local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  ulong local_108;
  ulong local_100;
  long local_f8;
  long local_f0;
  int local_e4;
  long local_e0;
  long local_d8;
  long *local_d0;
  long local_c8;
  long *local_c0;
  ulong local_b8;
  long local_b0;
  long *local_a8;
  long local_a0;
  
  local_158 = tpidr_el0;
  local_a0 = *(long *)(local_158 + 0x28);
  plVar1 = (long *)auStack_160;
  lVar8 = -0xea3555a59fe689f;
LAB_00193a9c:
  while (lVar11 = lVar8, lVar8 = lVar11, -0x3448182348e0dea < lVar11) {
    if (lVar11 < 0x367ea0d191a71458) {
      if (lVar11 < 0x1d66999ccc31720b) {
        if (lVar11 < 0xc3f0d09041ee720) {
          if (lVar11 < 0x5f569dd5f8ef240) {
            if (lVar11 < 0x2248800aa15c58d) {
              if (lVar11 == -0x3448182348e0de9) {
                DAT_001f8204 = 0;
                local_120 = (**(code **)(*param_2 + 0x108))
                                      (param_2,local_d8,&DAT_001f72d8,&DAT_001f72f0);
                lVar11 = (**(code **)(*param_2 + 0x78))(param_2);
                lVar8 = 0x30b6ffeb1f7de2be;
                if (lVar11 != 0) {
                  lVar8 = -0x1491c28fe48b5faf;
                }
              }
              else if (lVar11 == 0x4e2c56407f01c0) {
                (**(code **)(*param_2 + 0xb8))(param_2,local_b0);
                lVar8 = 0x6082e2b698bb9e4a;
              }
            }
            else if (lVar11 == 0x2248800aa15c58d) {
              local_f8 = (**(code **)(*param_2 + 0x110))(param_2,local_c8,local_130);
              lVar11 = (**(code **)(*param_2 + 0x78))(param_2);
              lVar8 = -0x77c0f4c72076ee35;
              if (lVar11 != 0) {
                lVar8 = -0x6f64e1e824f5cb28;
              }
            }
            else if (lVar11 == 0x4d8f3309053af86) {
              lVar8 = -0x65c383b29e65dfd2;
            }
          }
          else if (lVar11 < 0x6efdba2c15ba8a5) {
            if (lVar11 == 0x5f569dd5f8ef240) {
              DAT_001f72a0 = DAT_001f72a0 ^ 0x77;
              _DAT_001f7290 = _DAT_001f7290 ^ 0x7777777777777777;
              uRam00000000001f7298 = uRam00000000001f7298 ^ 0x7777777777777777;
              DAT_001f8267 = '\x01';
              lVar8 = -0x7d9b031790264d61;
            }
            else if (lVar11 == 0x6390917f9c923b3) {
              lVar8 = 0x68ff0fd6bb3919e5;
            }
          }
          else if (lVar11 == 0x6efdba2c15ba8a5) {
            lVar8 = 0x7ce07e3f2acdef4f;
            if (DAT_001f826e == '\0') {
              lVar8 = 0x59c9b0fde2e94768;
            }
          }
          else if (lVar11 == 0x9e53e215557ed93) {
            FUN_0016c4cc(param_1,param_2,local_f0,local_d0,local_c0);
            lVar8 = -0x74d18029a4b9a0ad;
            if (*param_1 != 0) {
              lVar8 = 0x2d0a5ac386207734;
            }
          }
          else if (lVar11 == 0xad4d14a2bba003f) {
            lVar8 = -0x5ff78f973fb738c5;
          }
        }
        else if (lVar11 < 0x1412ad32ae78aae6) {
          if (lVar11 < 0xd733c845fa90ab7) {
            if (lVar11 == 0xc3f0d09041ee720) {
              FUN_00196c4c(*param_3,param_4);
              *param_3 = 0;
              *param_5 = 0;
              lVar8 = 0x4e2c56407f01c0;
            }
            else if (lVar11 == 0xca71950b682486e) {
              iVar2 = FUN_001ebe70(0,1,&DAT_001f8214);
              lVar8 = 0x6efdba2c15ba8a5;
              if (iVar2 != 0) {
                lVar8 = -0x267c75a1d46a8919;
              }
            }
          }
          else {
            lVar8 = -0x3448182348e0de9;
            if ((lVar11 != 0xd733c845fa90ab7) && (lVar8 = lVar11, lVar11 == 0x10f5c3e2cef22e85)) {
              DAT_001f8210 = 0;
              lVar8 = -0x4815f0e4a02893d;
            }
          }
        }
        else if (lVar11 < 0x163d088f2837102d) {
          lVar8 = -0x56b05f2105c98fc3;
          if ((lVar11 != 0x1412ad32ae78aae6) && (lVar8 = lVar11, lVar11 == 0x157108880f3cc1b9)) {
            DAT_001f8200 = 0;
            lVar8 = -0x5ff78f973fb738c5;
          }
        }
        else if (lVar11 == 0x163d088f2837102d) {
          local_e4 = 2;
LAB_00196ba8:
          lVar8 = -0x50dcb0548b26774d;
        }
        else {
          lVar8 = -0x13d8972158d9b887;
          if ((lVar11 != 0x16fc5be24deff522) && (lVar8 = lVar11, lVar11 == 0x17c7d567405ec6d1)) {
            iVar2 = FUN_001ebe70(0,1,&DAT_001f8200);
            lVar8 = -0x7e137b1feee46c58;
            if (iVar2 != 0) {
              lVar8 = 0x7d57d64e73acdeb0;
            }
          }
        }
      }
      else if (lVar11 < 0x2d0a5ac386207734) {
        if (lVar11 < 0x230cc90ca931ce04) {
          if (lVar11 < 0x1fdca52d412c42cf) {
            if (lVar11 == 0x1d66999ccc31720b) {
              *param_1 = unaff_w19;
              lVar8 = -0x13d8972158d9b887;
            }
            else if (lVar11 == 0x1f7e20725935bff5) {
              lVar8 = 0x5ba01274f8656e32;
            }
          }
          else if (lVar11 == 0x1fdca52d412c42cf) {
            local_100 = 0;
            lVar8 = -0x1adfd399554e478e;
          }
          else if (lVar11 == 0x20d55cbda8b1e3e7) {
            lVar8 = -0x6e751b498964140f;
          }
        }
        else if (lVar11 < 0x263d05a8e90c93f8) {
          if (lVar11 == 0x230cc90ca931ce04) {
            DAT_001f72e0 = DAT_001f72e0 ^ 0x3e;
            DAT_001f72e1 = DAT_001f72e1 ^ 0x3e;
            DAT_001f72e2 = DAT_001f72e2 ^ 0x3e;
            DAT_001f72e3 = DAT_001f72e3 ^ 0x3e;
            DAT_001f72e4 = DAT_001f72e4 ^ 0x3e;
            DAT_001f72e5 = DAT_001f72e5 ^ 0x3e;
            DAT_001f72d8 = DAT_001f72d8 ^ 0x3e3e3e3e3e3e3e3e;
            DAT_001f826a = '\x01';
            lVar8 = -0x3448182348e0de9;
          }
          else if (lVar11 == 0x2619c6b86841f990) {
            lVar8 = 0x4e2c56407f01c0;
          }
        }
        else if (lVar11 == 0x263d05a8e90c93f8) {
LAB_001952d0:
          *param_1 = 0xf;
          lVar8 = 0x6082e2b698bb9e4a;
        }
        else {
          lVar8 = 0x157108880f3cc1b9;
          if ((lVar11 != 0x29e528dbb12b6ac4) && (lVar8 = lVar11, lVar11 == 0x2a8e72f35a700b30)) {
            local_b0 = (**(code **)(*param_2 + 0x110))(param_2,local_110,local_120);
            lVar11 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar8 = -0x4bdf7c53367c2249;
            if (lVar11 != 0) {
              lVar8 = -0x6fada702603cf97;
            }
          }
        }
      }
      else if (lVar11 < 0x31213f8be2a56456) {
        if (lVar11 < 0x2f26c3f86877d95a) {
          lVar8 = -0x13d8972158d9b887;
          if ((lVar11 != 0x2d0a5ac386207734) && (lVar8 = lVar11, lVar11 == 0x2e0b86a91cc0c88c)) {
            lVar8 = -0x33c2f842e28a53bb;
          }
        }
        else if (lVar11 == 0x2f26c3f86877d95a) {
          lVar8 = 0x62620d3786aa222e;
          if (DAT_001f826b == '\0') {
            lVar8 = 0x3194c9d6a5b42a7f;
          }
        }
        else if (lVar11 == 0x302780ab45be1988) {
          DAT_001f7338 = DAT_001f7338 ^ 100;
          DAT_001f7339 = DAT_001f7339 ^ 100;
          DAT_001f733a = DAT_001f733a ^ 100;
          DAT_001f733b = DAT_001f733b ^ 100;
          _DAT_001f7320 = _DAT_001f7320 ^ 0x6464646464646464;
          uRam00000000001f7328 = uRam00000000001f7328 ^ 0x6464646464646464;
          DAT_001f7330 = DAT_001f7330 ^ 0x6464646464646464;
          DAT_001f826c = '\x01';
          lVar8 = 0x72c405e877f1d660;
        }
        else if (lVar11 == 0x30b6ffeb1f7de2be) {
          lVar8 = 0x5209e75905233068;
          if (local_120 != 0) {
            lVar8 = 0x1f7e20725935bff5;
          }
        }
      }
      else if (lVar11 < 0x321bfb25307c6f66) {
        lVar8 = -0x4815f0e4a02893d;
        if ((lVar11 != 0x31213f8be2a56456) && (lVar8 = lVar11, lVar11 == 0x3194c9d6a5b42a7f)) {
          _DAT_001f72f0 = _DAT_001f72f0 ^ 0xe6e6e6e6e6e6e6e6;
          uRam00000000001f72f8 = uRam00000000001f72f8 ^ 0xe6e6e6e6e6e6e6e6;
          _DAT_001f7300 = _DAT_001f7300 ^ 0xe6e6e6e6e6e6e6e6;
          uRam00000000001f7308 = uRam00000000001f7308 ^ 0xe6e6e6e6e6e6e6e6;
          DAT_001f7310 = DAT_001f7310 ^ 0xe6;
          DAT_001f826b = '\x01';
          lVar8 = 0x52b5b394768cf6b8;
        }
      }
      else if (lVar11 == 0x321bfb25307c6f66) {
        lVar8 = -0x554cd7a486d9240d;
        if (DAT_001f826c == '\0') {
          lVar8 = 0x302780ab45be1988;
        }
      }
      else if (lVar11 == 0x3301ae291e823c4c) {
        FUN_0016c4cc(param_1,param_2,local_f8,local_d0,local_c0);
        lVar8 = 0x4e2e21b6866e51a2;
        if (*param_1 != 0) {
          lVar8 = 0x7ae660029e6c9397;
        }
      }
      else if (lVar11 == 0x3400db1c91d5beb6) {
        lVar8 = 0x756b7cd2976b8e7e;
LAB_00195fc8:
        DAT_001f6b04 = DAT_001f6b04 ^ 0x60;
        DAT_001f6b03 = DAT_001f6b03 ^ 0x60;
        DAT_001f6b02 = DAT_001f6b02 ^ 0x60;
        DAT_001f6b01 = DAT_001f6b01 ^ 0x60;
        DAT_001f6b00 = DAT_001f6b00 ^ 0x60;
        uRam00000000001f6af8 = uRam00000000001f6af8 ^ 0x6060606060606060;
        _DAT_001f6af0 = _DAT_001f6af0 ^ 0x6060606060606060;
        DAT_001f8227 = '\x01';
      }
    }
    else if (lVar11 < 0x6082e2b698bb9e4a) {
      if (lVar11 < 0x51c90e3b88e85464) {
        if (lVar11 < 0x40dd1bfa62eb3e2b) {
          if (lVar11 < 0x3792b710f803a173) {
            if (lVar11 == 0x367ea0d191a71458) {
              lVar8 = 0x3792b710f803a173;
              if (local_128 != 0) {
                lVar8 = 0x36e9940f0373a6b4;
              }
            }
            else if (lVar11 == 0x36e9940f0373a6b4) {
              lVar8 = 0xca71950b682486e;
            }
          }
          else {
            lVar8 = -0x7201aa7d14c12231;
            if ((lVar11 != 0x3792b710f803a173) && (lVar8 = lVar11, lVar11 == 0x3f0b5e4b49b6b79a)) {
              DAT_001f72d0 = DAT_001f72d0 ^ 0xb6;
              DAT_001f72d1 = DAT_001f72d1 ^ 0xb6;
              DAT_001f72d2 = DAT_001f72d2 ^ 0xb6;
              DAT_001f72d3 = DAT_001f72d3 ^ 0xb6;
              DAT_001f72d4 = DAT_001f72d4 ^ 0xb6;
              _DAT_001f72c0 = _DAT_001f72c0 ^ 0xb6b6b6b6b6b6b6b6;
              uRam00000000001f72c8 = uRam00000000001f72c8 ^ 0xb6b6b6b6b6b6b6b6;
              DAT_001f8269 = '\x01';
              lVar8 = 0x157108880f3cc1b9;
            }
          }
        }
        else if (lVar11 < 0x4e2e21b6866e51a2) {
          if (lVar11 == 0x40dd1bfa62eb3e2b) {
            lVar8 = -0x5578dbf8ae514b79;
            if (local_118 != 0) {
              lVar8 = -0x79fb63b0f2030fe4;
            }
          }
          else if (lVar11 == 0x4b800d170c782a2a) {
            (**(code **)(*param_2 + 0x80))(param_2);
            (**(code **)(*param_2 + 0x88))(param_2);
            lVar8 = -0x4369a8320632256e;
          }
        }
        else if (lVar11 == 0x4e2e21b6866e51a2) {
          lVar11 = *local_d0;
          uVar4 = FUN_001cdd28(lVar11,*local_c0);
          lVar8 = -0x6c6dbeb93743dcca;
          if (lVar11 != 0) {
            lVar8 = -0x27dd2c2d26e6a605;
          }
          *(undefined8 *)(*param_3 + local_b8 * 0x10 + 8) = uVar4;
          local_148 = lVar11;
        }
        else if (lVar11 == 0x4ede5b0d3e555c15) {
          lVar8 = -0x497e9593c5d05a0a;
          if (*(long *)(*param_3 + local_b8 * 0x10) != 0) {
            lVar8 = 0x2248800aa15c58d;
          }
        }
        else if (lVar11 == 0x50656b66cc70efec) {
          DAT_001f7348 = DAT_001f7348 ^ 0xa8;
          DAT_001f7349 = DAT_001f7349 ^ 0xa8;
          DAT_001f734a = DAT_001f734a ^ 0xa8;
          DAT_001f734b = DAT_001f734b ^ 0xa8;
          DAT_001f734c = DAT_001f734c ^ 0xa8;
          DAT_001f7340 = DAT_001f7340 ^ 0xa8a8a8a8a8a8a8a8;
          DAT_001f826d = '\x01';
          lVar8 = 0x10f5c3e2cef22e85;
        }
      }
      else if (lVar11 < 0x58b07680deeab5dc) {
        if (lVar11 < 0x52b5b394768cf6b8) {
          if (lVar11 == 0x51c90e3b88e85464) {
            iVar2 = FUN_001ebe70(0,1,&DAT_001f8210);
            lVar8 = 0x6ecee49992675507;
            if (iVar2 != 0) {
              lVar8 = 0x58181d57ded539c1;
            }
          }
          else if (lVar11 == 0x5209e75905233068) {
            lVar8 = -0x1c33bf5f05a736e5;
          }
        }
        else if (lVar11 == 0x52b5b394768cf6b8) {
          DAT_001f8208 = 0;
          lVar8 = -0x71e95c0560b85005;
        }
        else if (lVar11 == 0x58181d57ded539c1) {
          lVar8 = 0x51c90e3b88e85464;
        }
      }
      else if (lVar11 < 0x5ba01274f8656e32) {
        if (lVar11 == 0x58b07680deeab5dc) {
          lVar8 = 0x20d55cbda8b1e3e7;
          if (DAT_001f8227 == '\0') {
            lVar8 = 0x6c4d0155a023c025;
          }
        }
        else if (lVar11 == 0x59c9b0fde2e94768) {
          DAT_001f7358 = DAT_001f7358 ^ 0x9e;
          DAT_001f7359 = DAT_001f7359 ^ 0x9e;
          DAT_001f735a = DAT_001f735a ^ 0x9e;
          DAT_001f735b = DAT_001f735b ^ 0x9e;
          DAT_001f735c = DAT_001f735c ^ 0x9e;
          DAT_001f735d = DAT_001f735d ^ 0x9e;
          DAT_001f7350 = DAT_001f7350 ^ 0x9e9e9e9e9e9e9e9e;
          DAT_001f826e = '\x01';
          lVar8 = -0x2a1b184005d29f43;
        }
      }
      else if (lVar11 == 0x5ba01274f8656e32) {
        iVar2 = FUN_001ebe70(0,1,&DAT_001f820c);
        lVar8 = 0x321bfb25307c6f66;
        if (iVar2 != 0) {
          lVar8 = -0x1de273a047141bef;
        }
      }
      else if (lVar11 == 0x5ead6f5cd6738af4) {
        lVar8 = -0x758a3f7e9fac7785;
        if (local_130 != 0) {
          lVar8 = 0x2a8e72f35a700b30;
        }
      }
      else if (lVar11 == 0x5fffe4c298273a74) {
        local_138 = local_b8 + 1;
        lVar8 = -0x7917498936e1ab81;
        if (local_108 <= local_138 || param_4 <= local_138) {
          lVar8 = -0x21733ed2dbd95ef2;
        }
      }
    }
    else if (lVar11 < 0x6c4d0155a023c025) {
      if (lVar11 < 0x68ff0fd6bb3919e5) {
        if (lVar11 < 0x65dc473106aadb38) {
          lVar8 = -0x480d1a762b3e46d2;
          if (((lVar11 != 0x6183174d9506259f) &&
              (lVar8 = 0x52b5b394768cf6b8, lVar11 != 0x62620d3786aa222e)) &&
             (lVar8 = lVar11, lVar11 == 0x6082e2b698bb9e4a)) {
            if (*(long *)(local_158 + 0x28) == local_a0) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
        }
        else if (lVar11 == 0x65dc473106aadb38) {
          pvVar5 = calloc(param_4,0x10);
          *param_3 = (long)pvVar5;
          lVar8 = 0x163d088f2837102d;
          if (pvVar5 != (void *)0x0) {
            lVar8 = -0x37dca46e88cf0ffb;
          }
        }
        else if (lVar11 == 0x670e18f9cac8b6e0) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          lVar8 = 0x6a9de0b76ced8ded;
        }
      }
      else if (lVar11 < 0x69b6a593c541c374) {
        if (lVar11 == 0x68ff0fd6bb3919e5) {
          iVar2 = FUN_001ebe70(0,1,&DAT_001f81f8);
          lVar8 = -0x3c815efb2e582375;
          if (iVar2 != 0) {
            lVar8 = 0x6390917f9c923b3;
          }
        }
        else if (lVar11 == 0x6967ee3cc75da8a1) {
          lVar8 = 0x10f5c3e2cef22e85;
        }
      }
      else {
        lVar8 = 0xc3f0d09041ee720;
        if (lVar11 != 0x69b6a593c541c374) {
          if (lVar11 == 0x6a1cfa41c598fe35) {
            (**(code **)(*param_2 + 0x80))(param_2);
            (**(code **)(*param_2 + 0x88))(param_2);
            lVar8 = -0x7201aa7d14c12231;
          }
          else {
            lVar8 = lVar11;
            if (lVar11 == 0x6a9de0b76ced8ded) goto LAB_001952d0;
          }
        }
      }
    }
    else if (lVar11 < 0x72c405e877f1d660) {
      if (lVar11 < 0x6ecee49992675507) {
        if (lVar11 == 0x6c4d0155a023c025) {
          lVar8 = -0x6e751b498964140f;
          goto LAB_00195fc8;
        }
        if (lVar11 == 0x6d35650e90de312c) {
          lVar8 = -0x59868b7258ce204a;
        }
      }
      else if (lVar11 == 0x6ecee49992675507) {
        lVar8 = 0x6967ee3cc75da8a1;
        if (DAT_001f826d == '\0') {
          lVar8 = 0x50656b66cc70efec;
        }
      }
      else if (lVar11 == 0x704a4acf5514d398) {
        lVar8 = 0x17c7d567405ec6d1;
      }
    }
    else if (lVar11 < 0x7ae660029e6c9397) {
      if (lVar11 == 0x72c405e877f1d660) {
        DAT_001f820c = 0;
        local_e0 = (**(code **)(*param_2 + 0x30))(param_2,&DAT_001f7320);
        lVar11 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar8 = -0x45a7ff4b0096df58;
        if (lVar11 != 0) {
          lVar8 = -0x73dd6e634546ed11;
        }
      }
      else if (lVar11 == 0x756b7cd2976b8e7e) {
        DAT_001f80f0 = 0;
        local_130 = (**(code **)(*param_2 + 0x108))(param_2,local_e0,&DAT_001f7350,&DAT_001f6af0);
        lVar11 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar8 = 0x5ead6f5cd6738af4;
        if (lVar11 != 0) {
          lVar8 = 0x4b800d170c782a2a;
        }
      }
    }
    else {
      lVar8 = -0x13d8972158d9b887;
      if (((lVar11 != 0x7ae660029e6c9397) &&
          (lVar8 = -0x2a1b184005d29f43, lVar11 != 0x7ce07e3f2acdef4f)) &&
         (lVar8 = lVar11, lVar11 == 0x7d57d64e73acdeb0)) {
        lVar8 = 0x17c7d567405ec6d1;
      }
    }
  }
  if (lVar11 < -0x4a96ed076363e109) {
    if (lVar11 < -0x6b37dc58a784e390) {
      if (lVar11 < -0x73dd6e634546ed11) {
        if (lVar11 < -0x77c0f4c72076ee35) {
          if (lVar11 < -0x79fb63b0f2030fe4) {
            if (lVar11 == -0x7e137b1feee46c58) {
              lVar8 = 0x29e528dbb12b6ac4;
              if (DAT_001f8269 == '\0') {
                lVar8 = 0x3f0b5e4b49b6b79a;
              }
            }
            else if (lVar11 == -0x7d9b031790264d61) {
              DAT_001f81f8 = 0;
              local_a8 = plVar1 + -2;
              local_c0 = plVar1 + -4;
              plVar7 = plVar1 + -6;
              lVar8 = *param_2;
              *(undefined4 *)(plVar1 + -2) = 0;
              plVar1[-4] = 0;
              pcVar6 = *(code **)(lVar8 + 0x30);
              plVar1[-6] = 0;
              local_d0 = plVar7;
              local_d8 = (*pcVar6)(param_2,&DAT_001f7290);
              lVar11 = (**(code **)(*param_2 + 0x78))(param_2);
              plVar1 = plVar7;
              lVar8 = -0x11764ec3d64a3531;
              if (lVar11 != 0) {
                lVar8 = -0x65d16099ccfdf92c;
              }
            }
          }
          else if (lVar11 == -0x79fb63b0f2030fe4) {
            local_110 = (**(code **)(*param_2 + 0x390))(param_2,local_d8,local_118);
            lVar11 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar8 = -0x4a96ed076363e109;
            if (lVar11 != 0) {
              lVar8 = -0x5d368f525ce71010;
            }
          }
          else if (lVar11 == -0x7917498936e1ab81) {
            local_100 = local_138;
            lVar8 = -0x1adfd399554e478e;
          }
        }
        else if (lVar11 < -0x758a3f7e9fac7785) {
          if (lVar11 == -0x77c0f4c72076ee35) {
            lVar8 = -0x222ca5ab18afe7c5;
            if (local_f8 != 0) {
              lVar8 = 0x3301ae291e823c4c;
            }
          }
          else if (lVar11 == -0x77b81d6822d7b839) {
            lVar8 = 0xd733c845fa90ab7;
            if (DAT_001f826a == '\0') {
              lVar8 = 0x230cc90ca931ce04;
            }
          }
        }
        else {
          lVar8 = -0x4369a8320632256e;
          if (lVar11 != -0x758a3f7e9fac7785) {
            if (lVar11 == -0x75712f58b5383691) {
              DAT_001f72b0 = DAT_001f72b0 ^ 0x8a;
              DAT_001f72b1 = DAT_001f72b1 ^ 0x8a;
              DAT_001f72b2 = DAT_001f72b2 ^ 0x8a;
              DAT_001f72b3 = DAT_001f72b3 ^ 0x8a;
              DAT_001f72b4 = DAT_001f72b4 ^ 0x8a;
              DAT_001f72b5 = DAT_001f72b5 ^ 0x8a;
              DAT_001f72a8 = DAT_001f72a8 ^ 0x8a8a8a8a8a8a8a8a;
              DAT_001f8268 = '\x01';
              lVar8 = -0x72eb2fa77ebade84;
            }
            else {
              lVar8 = lVar11;
              if (lVar11 == -0x74d18029a4b9a0ad) {
                lVar11 = *local_d0;
                uVar4 = FUN_001cdd28(lVar11,*local_c0);
                lVar8 = -0x63b0b08eeea9929c;
                if (lVar11 != 0) {
                  lVar8 = -0x6f3305638d11e142;
                }
                *(undefined8 *)(*param_3 + local_b8 * 0x10) = uVar4;
                local_140 = lVar11;
              }
            }
          }
        }
        goto LAB_00193a9c;
      }
      if (-0x7189f766738d079d < lVar11) {
        if (lVar11 < -0x6f3305638d11e142) {
          lVar8 = 0xc3f0d09041ee720;
          if ((lVar11 != -0x7189f766738d079c) && (lVar8 = lVar11, lVar11 == -0x6f64e1e824f5cb28)) {
            lVar8 = -0x56b05f2105c98fc3;
          }
        }
        else if (lVar11 == -0x6f3305638d11e142) {
          (**(code **)(*param_2 + 0x550))(param_2,local_f0,local_140);
          lVar8 = 0x4ede5b0d3e555c15;
        }
        else if (lVar11 == -0x6e751b498964140f) {
          DAT_001f80f0 = 0;
          local_128 = (**(code **)(*param_2 + 0x108))(param_2,local_e0,&DAT_001f7340,&DAT_001f6af0);
          lVar11 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar8 = 0x367ea0d191a71458;
          if (lVar11 != 0) {
            lVar8 = 0x6a1cfa41c598fe35;
          }
        }
        else if (lVar11 == -0x6c6dbeb93743dcca) {
          lVar8 = -0x8e8c1fb4ce0a4b3;
        }
        goto LAB_00193a9c;
      }
      if (lVar11 < -0x7201aa7d14c12231) {
        if (lVar11 == -0x73dd6e634546ed11) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          lVar8 = -0x59868b7258ce204a;
        }
        else if (lVar11 == -0x72eb2fa77ebade84) {
          DAT_001f81fc = 0;
          local_118 = (**(code **)(*param_2 + 0x388))(param_2,local_d8,&DAT_001f72a8,&DAT_001f72c0);
          lVar11 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar8 = 0x40dd1bfa62eb3e2b;
          if (lVar11 != 0) {
            lVar8 = 0x670e18f9cac8b6e0;
          }
        }
        goto LAB_00193a9c;
      }
      if (lVar11 != -0x7201aa7d14c12231) {
        if (lVar11 == -0x71e95c0560b85005) {
          iVar2 = FUN_001ebe70(0,1,&DAT_001f8204);
          lVar8 = -0x77b81d6822d7b839;
          if (iVar2 != 0) {
            lVar8 = -0x35e5471e2a5336d3;
          }
        }
        goto LAB_00193a9c;
      }
    }
    else {
      if (lVar11 < -0x5b9cbb503f2fa995) {
        if (lVar11 < -0x63b0b08eeea9929c) {
          if (lVar11 < -0x65d16099ccfdf92c) {
            if (lVar11 == -0x6b37dc58a784e390) {
              iVar2 = FUN_001ebe70(0,1,&DAT_001f80f0);
              lVar8 = -0x2156aa5d5c255ed1;
              if (iVar2 != 0) {
                lVar8 = -0x5d7f967e89340a6f;
              }
            }
            else if (lVar11 == -0x67d9eb40edc0ea11) {
              lVar8 = 0xc3f0d09041ee720;
            }
          }
          else if (lVar11 == -0x65d16099ccfdf92c) {
            (**(code **)(*param_2 + 0x80))(param_2);
            (**(code **)(*param_2 + 0x88))(param_2);
            lVar8 = 0x263d05a8e90c93f8;
          }
          else if (lVar11 == -0x65c383b29e65dfd2) {
            uVar9 = local_108;
            if (param_4 <= local_108) {
              uVar9 = param_4;
            }
            *param_5 = uVar9;
            lVar8 = 0x2619c6b86841f990;
            if (*param_1 != 0) {
              lVar8 = -0x7189f766738d079c;
            }
          }
        }
        else if (lVar11 < -0x5ff78f973fb738c5) {
          lVar8 = 0x4ede5b0d3e555c15;
          if ((lVar11 != -0x63b0b08eeea9929c) && (lVar8 = lVar11, lVar11 == -0x618c192142c67c65)) {
LAB_00195de4:
            unaff_w19 = 2;
            lVar8 = 0x1d66999ccc31720b;
          }
        }
        else if (lVar11 == -0x5ff78f973fb738c5) {
          iVar2 = FUN_001ebe70(0,1,&DAT_001f81fc);
          lVar8 = -0x3daedfd1c1060a9b;
          if (iVar2 != 0) {
            lVar8 = 0xad4d14a2bba003f;
          }
        }
        else {
          lVar8 = -0x6b37dc58a784e390;
          if ((lVar11 != -0x5d7f967e89340a6f) && (lVar8 = lVar11, lVar11 == -0x5d368f525ce71010)) {
            (**(code **)(*param_2 + 0x80))(param_2);
            (**(code **)(*param_2 + 0x88))(param_2);
            lVar8 = -0x480d1a762b3e46d2;
          }
        }
        goto LAB_00193a9c;
      }
      if (-0x5578dbf8ae514b7a < lVar11) {
        if (lVar11 < -0x5210e31b8275f5db) {
          lVar8 = 0x6a9de0b76ced8ded;
          if ((lVar11 != -0x5578dbf8ae514b79) && (lVar8 = lVar11, lVar11 == -0x554cd7a486d9240d)) {
            lVar8 = 0x72c405e877f1d660;
          }
        }
        else {
          lVar8 = 0x756b7cd2976b8e7e;
          if (lVar11 != -0x5210e31b8275f5db) {
            if (lVar11 == -0x50dcb0548b26774d) {
              *param_1 = local_e4;
              lVar8 = 0xc3f0d09041ee720;
            }
            else {
              lVar8 = lVar11;
              if (lVar11 == -0x4bdf7c53367c2249) {
                lVar8 = -0x5583eb7bb5d3c877;
                if (local_b0 != 0) {
                  lVar8 = -0xf3fe83873dece1e;
                }
              }
            }
          }
        }
        goto LAB_00193a9c;
      }
      if (-0x5758c00b5d81fbc8 < lVar11) {
        lVar8 = -0x33c2f842e28a53bb;
        if (lVar11 != -0x5758c00b5d81fbc7) {
          if (lVar11 == -0x56b05f2105c98fc3) {
            (**(code **)(*param_2 + 0x80))(param_2);
            (**(code **)(*param_2 + 0x88))(param_2);
            goto LAB_00193a88;
          }
          lVar8 = lVar11;
          if (lVar11 == -0x5583eb7bb5d3c877) {
            lVar8 = -0x2de6e126df0c3a56;
          }
        }
        goto LAB_00193a9c;
      }
      if (lVar11 == -0x5b9cbb503f2fa995) {
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        goto LAB_00196458;
      }
      if (lVar11 != -0x59868b7258ce204a) goto LAB_00193a9c;
    }
LAB_00195a7c:
    *param_1 = 0xf;
    lVar8 = 0x6082e2b698bb9e4a;
    goto LAB_00193a9c;
  }
  if (lVar11 < -0x25acbb34c84b93c0) {
    if (lVar11 < -0x35e5471e2a5336d3) {
      if (lVar11 < -0x4369a8320632256e) {
        if (lVar11 < -0x480d1a762b3e46d2) {
          if (lVar11 == -0x4a96ed076363e109) {
            lVar8 = 0x6183174d9506259f;
            if (local_110 != 0) {
              lVar8 = 0x2e0b86a91cc0c88c;
            }
          }
          else if (lVar11 == -0x497e9593c5d05a0a) goto LAB_00195de4;
        }
        else if (lVar11 == -0x480d1a762b3e46d2) {
          *param_1 = 0x19;
          lVar8 = 0x6082e2b698bb9e4a;
        }
        else if (lVar11 == -0x45a7ff4b0096df58) {
          lVar8 = 0x6d35650e90de312c;
          if (local_e0 != 0) {
            lVar8 = -0x38b884dc10206507;
          }
        }
      }
      else if (lVar11 < -0x3c815efb2e582375) {
        if (lVar11 == -0x4369a8320632256e) goto LAB_00195a7c;
        if (lVar11 == -0x3daedfd1c1060a9b) {
          lVar8 = -0x230ec4cb2a4b5866;
          if (DAT_001f8268 == '\0') {
            lVar8 = -0x75712f58b5383691;
          }
        }
      }
      else if (lVar11 == -0x3c815efb2e582375) {
        lVar8 = -0x215c3aac01c0504e;
        if (DAT_001f8267 == '\0') {
          lVar8 = 0x5f569dd5f8ef240;
        }
      }
      else {
        lVar8 = 0x51c90e3b88e85464;
        if ((lVar11 != -0x38b884dc10206507) && (lVar8 = lVar11, lVar11 == -0x37dca46e88cf0ffb)) {
          local_108 = (ulong)(int)*local_a8;
          lVar8 = 0x1fdca52d412c42cf;
          if (local_108 == 0 || param_4 == 0) {
            lVar8 = 0x4d8f3309053af86;
          }
        }
      }
      goto LAB_00193a9c;
    }
    if (-0x2a1b184005d29f44 < lVar11) {
      if (lVar11 < -0x27dd2c2d26e6a605) {
        if (lVar11 == -0x2a1b184005d29f43) {
          DAT_001f8214 = 0;
          lVar8 = -0x6b37dc58a784e390;
        }
        else if (lVar11 == -0x2994ab7e43a03344) {
          lVar8 = -0xb9081d616f044d0;
          if (local_c8 != 0) {
            lVar8 = -0x25acbb34c84b93c0;
          }
        }
      }
      else if (lVar11 == -0x27dd2c2d26e6a605) {
        (**(code **)(*param_2 + 0x550))(param_2,local_f8,local_148);
        lVar8 = -0x8e8c1fb4ce0a4b3;
      }
      else {
        lVar8 = 0x263d05a8e90c93f8;
        if ((lVar11 != -0x27700da5e1d00e04) && (lVar8 = lVar11, lVar11 == -0x267c75a1d46a8919)) {
          lVar8 = 0xca71950b682486e;
        }
      }
      goto LAB_00193a9c;
    }
    if (lVar11 < -0x339b3e4e114790e5) {
      lVar8 = -0x71e95c0560b85005;
      if ((lVar11 != -0x35e5471e2a5336d3) && (lVar8 = lVar11, lVar11 == -0x33c2f842e28a53bb)) {
        iVar2 = FUN_001ebe70(0,1,&DAT_001f8208);
        lVar8 = 0x2f26c3f86877d95a;
        if (iVar2 != 0) {
          lVar8 = -0x5758c00b5d81fbc7;
        }
      }
      goto LAB_00193a9c;
    }
    if (lVar11 != -0x339b3e4e114790e5) {
      if (lVar11 == -0x2de6e126df0c3a56) {
        *param_1 = 0x19;
        lVar8 = 0x6082e2b698bb9e4a;
      }
      goto LAB_00193a9c;
    }
  }
  else {
    if (-0x17177dbf65bd4f40 < lVar11) {
      if (lVar11 < -0xea3555a59fe689f) {
        if (lVar11 < -0x13d8972158d9b887) {
          if (lVar11 == -0x17177dbf65bd4f3f) {
            lVar8 = -0x339b3e4e114790e5;
            if (local_f0 != 0) {
              lVar8 = 0x9e53e215557ed93;
            }
          }
          else if (lVar11 == -0x1491c28fe48b5faf) {
            (**(code **)(*param_2 + 0x80))(param_2);
            (**(code **)(*param_2 + 0x88))(param_2);
            lVar8 = -0x1c33bf5f05a736e5;
          }
        }
        else if (lVar11 == -0x13d8972158d9b887) {
          (**(code **)(*param_2 + 0xb8))(param_2,local_c8);
          lVar8 = 0x5fffe4c298273a74;
          if (*param_1 != 0) {
            lVar8 = -0x67d9eb40edc0ea11;
          }
        }
        else if (lVar11 == -0x11764ec3d64a3531) {
          lVar8 = -0x27700da5e1d00e04;
          if (local_d8 != 0) {
            lVar8 = 0x704a4acf5514d398;
          }
        }
        else if (lVar11 == -0xf3fe83873dece1e) {
          lVar8 = -0x33b6ee172f5f7c77;
          if (local_b0 != 0) {
            lVar8 = -0x3ed04c030289d596;
          }
          lVar11 = 0x43d4efcefc88fa10;
          puVar10 = param_5;
          local_14c = unaff_w19;
          do {
            while( true ) {
              while( true ) {
                while( true ) {
                  while (lVar3 = lVar11, lVar11 = lVar3, -0xab4161c6ac76aca < lVar3) {
                    if (lVar3 < 0x4bfd6150022cba99) {
                      if (lVar3 == -0xab4161c6ac76ac9) {
                        lVar11 = 0x76eec756bc9b1bd1;
                        if (*param_1 != 0) {
                          lVar11 = 0x6de583d82abca3c2;
                        }
                      }
                      else if (lVar3 == 0x43d4efcefc88fa10) {
                        lVar11 = lVar8;
                      }
                    }
                    else if (lVar3 == 0x4bfd6150022cba99) {
                      *(int *)local_a8 = 0;
                      lVar11 = -0x45bc5d4f2a354f46;
                    }
                    else {
                      lVar11 = 0x4bfd6150022cba99;
                      if ((lVar3 != 0x6de583d82abca3c2) &&
                         (lVar11 = lVar3, lVar3 == 0x76eec756bc9b1bd1)) {
                        lVar11 = -0x45bc5d4f2a354f46;
                      }
                    }
                  }
                  if (lVar3 < -0x33b6ee172f5f7c77) break;
                  if (lVar3 == -0x33b6ee172f5f7c77) {
                    puVar10 = (ulong *)0x3;
                    lVar11 = -0x63d6c57ea08e5e11;
                  }
                  else if (lVar3 == -0x11cdc96087771421) {
                    (**(code **)(*param_2 + 0x80))(param_2);
                    (**(code **)(*param_2 + 0x88))(param_2);
                    puVar10 = (ulong *)0x19;
                    lVar11 = -0x63d6c57ea08e5e11;
                  }
                }
                if (lVar3 != -0x63d6c57ea08e5e11) break;
                *param_1 = (int)puVar10;
                lVar11 = 0x4bfd6150022cba99;
              }
              if (lVar3 != -0x3ed04c030289d596) break;
              iVar2 = (**(code **)(*param_2 + 0x558))(param_2,local_b0);
              pcVar6 = *(code **)(*param_2 + 0x78);
              *(int *)local_a8 = iVar2;
              lVar3 = (*pcVar6)(param_2);
              lVar11 = -0xab4161c6ac76ac9;
              if (lVar3 != 0) {
                lVar11 = -0x11cdc96087771421;
              }
            }
          } while (lVar3 != -0x45bc5d4f2a354f46);
          lVar8 = 0x65dc473106aadb38;
          unaff_w19 = local_14c;
          if (*param_1 != 0) {
            lVar8 = 0x69b6a593c541c374;
          }
        }
      }
      else if (lVar11 < -0x8e8c1fb4ce0a4b3) {
        lVar8 = 0x68ff0fd6bb3919e5;
        if ((lVar11 != -0xea3555a59fe689f) && (lVar8 = lVar11, lVar11 == -0xb9081d616f044d0)) {
LAB_00196458:
          local_e4 = 0x19;
          goto LAB_00196ba8;
        }
      }
      else if (lVar11 == -0x8e8c1fb4ce0a4b3) {
        lVar8 = -0x618c192142c67c65;
        if (*(long *)(*param_3 + local_b8 * 0x10 + 8) != 0) {
          lVar8 = 0x16fc5be24deff522;
        }
      }
      else if (lVar11 == -0x6fada702603cf97) {
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        lVar8 = -0x2de6e126df0c3a56;
      }
      else if (lVar11 == -0x4815f0e4a02893d) {
        iVar2 = FUN_001ebe70(0,1,&DAT_001f80f0);
        lVar8 = 0x58b07680deeab5dc;
        if (iVar2 != 0) {
          lVar8 = 0x31213f8be2a56456;
        }
      }
      goto LAB_00193a9c;
    }
    if (-0x215c3aac01c0504f < lVar11) {
      if (lVar11 < -0x1de273a047141bef) {
        lVar8 = -0x7d9b031790264d61;
        if ((lVar11 != -0x215c3aac01c0504e) && (lVar8 = lVar11, lVar11 == -0x2156aa5d5c255ed1)) {
          lVar8 = -0x5210e31b8275f5db;
          if (DAT_001f8227 == '\0') {
            lVar8 = 0x3400db1c91d5beb6;
          }
        }
      }
      else {
        lVar8 = 0x5ba01274f8656e32;
        if (lVar11 != -0x1de273a047141bef) {
          if (lVar11 == -0x1c33bf5f05a736e5) goto LAB_001952d0;
          lVar8 = lVar11;
          if (lVar11 == -0x1adfd399554e478e) {
            uVar9 = local_100;
            local_c8 = (**(code **)(*param_2 + 0x568))(param_2,local_b0,local_100 & 0xffffffff);
            lVar11 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar8 = -0x2994ab7e43a03344;
            local_b8 = uVar9;
            if (lVar11 != 0) {
              lVar8 = -0x5b9cbb503f2fa995;
            }
          }
        }
      }
      goto LAB_00193a9c;
    }
    if (lVar11 < -0x222ca5ab18afe7c5) {
      if (lVar11 == -0x25acbb34c84b93c0) {
        local_f0 = (**(code **)(*param_2 + 0x110))(param_2,local_c8,local_128);
        lVar11 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar8 = -0x17177dbf65bd4f3f;
        if (lVar11 != 0) {
          lVar8 = 0x1412ad32ae78aae6;
        }
      }
      else if (lVar11 == -0x230ec4cb2a4b5866) {
        lVar8 = -0x72eb2fa77ebade84;
      }
      goto LAB_00193a9c;
    }
    if (lVar11 != -0x222ca5ab18afe7c5) {
      if (lVar11 == -0x21733ed2dbd95ef2) {
        lVar8 = -0x65c383b29e65dfd2;
      }
      goto LAB_00193a9c;
    }
  }
LAB_00193a88:
  unaff_w19 = 0x19;
  lVar8 = 0x1d66999ccc31720b;
  goto LAB_00193a9c;
}


