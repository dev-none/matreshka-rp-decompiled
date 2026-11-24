// Function: FUN_00169198
// Entry: 00169198

void FUN_00169198(long *param_1,undefined8 param_2,long param_3)

{
  int *piVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  long *unaff_x24;
  int *unaff_x25;
  undefined8 uVar9;
  long *unaff_x28;
  long lVar10;
  undefined1 auStack_140 [8];
  long local_138;
  undefined8 local_130;
  int local_128;
  int local_124;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  int *local_d0;
  int local_c4;
  long *local_c0;
  long *local_b8;
  long *local_b0;
  int local_a4;
  void *local_a0;
  void *local_98;
  long *local_90;
  long *local_88;
  long local_80;
  
  local_e8 = param_3;
  local_138 = tpidr_el0;
  local_130 = param_2;
  local_80 = *(long *)(local_138 + 0x28);
  puVar3 = (undefined8 *)auStack_140;
  lVar10 = -0x1c301ed0b7e3df83;
LAB_0016927c:
  do {
    while (lVar8 = lVar10, plVar2 = local_90, iVar4 = local_c4, piVar1 = local_d0, lVar7 = local_e8,
          lVar10 = lVar8, lVar8 < -0x8f33cbef8bfb8a8) {
      if (lVar8 < -0x4b01238e4c7e016a) {
        if (lVar8 < -0x620dba95cabd5d6a) {
          if (lVar8 < -0x6a7bfdc3bcf3418e) {
            if (lVar8 == -0x79f13c7d08690129) {
              FUN_0016c4cc(unaff_x25,param_1,*unaff_x28,local_b8,local_d8);
              lVar10 = -0x13f52255dcc6ec01;
              if (*unaff_x25 != 0) {
                lVar10 = -0x6a64012acd13bc23;
              }
            }
            else {
              lVar10 = 0x78d5b97d08778a1b;
              if ((lVar8 != -0x771e40895f9ebb56) && (lVar10 = lVar8, lVar8 == -0x76a325c0a9a69288))
              {
                local_c4 = local_124;
                lVar10 = -0x575ae9387db63f3d;
              }
            }
          }
          else if (lVar8 < -0x683561997bed5c74) {
            lVar10 = 0x39774f1a0df6c2eb;
            if ((lVar8 != -0x6a7bfdc3bcf3418e) && (lVar10 = lVar8, lVar8 == -0x6a64012acd13bc23)) {
              lVar10 = -0x2c7989526e96278c;
            }
          }
          else if (lVar8 == -0x683561997bed5c74) {
            uVar9 = *local_e0;
            lVar10 = *local_c0;
            pvVar6 = (void *)FUN_001cdd28(*local_b8,*local_d8);
            local_a0 = (void *)FUN_001cdd28(lVar10,uVar9);
            local_98 = pvVar6;
            lVar10 = 0x4ad3811b1f41c64a;
            if (local_a0 == (void *)0x0 || pvVar6 == (void *)0x0) {
              lVar10 = 0x7d125d4f7f6ee364;
            }
          }
          else if (lVar8 == -0x638021a54521ca21) {
            *unaff_x28 = 0;
            local_120 = *plVar2;
            lVar10 = 0x797a8bccf51e016a;
            if (*plVar2 == 0 || param_1 == (long *)0x0) {
              lVar10 = 0x759117af84d0f5df;
            }
          }
        }
        else if (lVar8 < -0x52726a1e7f94e236) {
          lVar10 = -0x2c7989526e96278c;
          if (((lVar8 != -0x620dba95cabd5d6a) &&
              (lVar10 = 0x3e8004b87250e1d, lVar8 != -0x605a13ef42509bd9)) &&
             (lVar10 = lVar8, lVar8 == -0x575ae9387db63f3d)) {
            FUN_0017a064(unaff_x25,param_1,*local_88,local_c4,unaff_x24);
            local_128 = iVar4;
            lVar10 = 0x782e30fc7ff61efa;
            if (*unaff_x25 != 0) {
              lVar10 = -0x149ba391ae65228d;
            }
          }
        }
        else if (lVar8 < -0x4f718f91222f51d9) {
          lVar10 = -0x8f33cbef8bfb8a8;
          if ((lVar8 != -0x52726a1e7f94e236) && (lVar10 = lVar8, lVar8 == -0x4f91b13f74c385d2)) {
            lVar10 = -0x2c7989526e96278c;
          }
        }
        else if (lVar8 == -0x4f718f91222f51d9) {
          *unaff_x25 = 0x21;
          lVar10 = -0x2c7989526e96278c;
        }
        else if (lVar8 == -0x4bbb44ced458beb2) {
          lVar10 = -0x6a7bfdc3bcf3418e;
          if (DAT_001f7fa4._1_1_ == '\0') {
            lVar10 = 0x65d35e4038166d7c;
          }
        }
      }
      else if (lVar8 < -0x2a6b46f075bc871a) {
        if (lVar8 < -0x30908b6b44c47cd9) {
          if (lVar8 == -0x4b01238e4c7e016a) {
            FUN_0016e030(param_1,*local_90,local_f8);
            lVar10 = -0x34b601080ccf2e82;
          }
          else if (lVar8 == -0x41c0092938ad4993) {
            (**(code **)(*param_1 + 0xb8))(param_1,local_110);
            lVar10 = 0x447430711ca119e0;
          }
          else if (lVar8 == -0x34b601080ccf2e82) {
            local_100 = *local_b0;
            lVar10 = 0x3339e650b686b1f0;
            if (*local_b0 == 0 || param_1 == (long *)0x0) {
              lVar10 = 0x29ec0b0c7e4980c3;
            }
          }
        }
        else if (lVar8 < -0x2c7989526e96278c) {
          if (lVar8 == -0x30908b6b44c47cd9) {
LAB_00169c38:
            local_a4 = 2;
LAB_0016a07c:
            lVar10 = 0x4cc28a888edec7aa;
          }
          else if (lVar8 == -0x300001a4d8e38296) {
            (**(code **)(*param_1 + 0xb8))(param_1,local_118);
            lVar10 = -0x638021a54521ca21;
          }
        }
        else if (lVar8 == -0x2c7989526e96278c) {
          local_f0 = *local_b8;
          lVar10 = 0x685a56bb13a0b0b5;
          if (*local_b8 != 0) {
            lVar10 = -0x27c20f74adbdb190;
          }
        }
        else if (lVar8 == -0x2ae9bc3bbb50edb0) {
          (**(code **)(*param_1 + 0xb8))(param_1,local_108);
          lVar10 = 0x3e8004b87250e1d;
        }
      }
      else if (lVar8 < -0x1c301ed0b7e3df83) {
        if (lVar8 < -0x2080008250b543ef) {
          if (lVar8 == -0x2a6b46f075bc871a) {
            lVar10 = 0x163c88ee54d2cd3;
            if (*(ulong *)(local_e8 + 0x870) < 0x7f) {
              lVar10 = -0x683561997bed5c74;
            }
          }
          else if (lVar8 == -0x27c20f74adbdb190) {
            FUN_0016e030(param_1,*unaff_x28,local_f0);
            lVar10 = -0xb479b1ead3d9637;
          }
        }
        else if (lVar8 == -0x2080008250b543ef) {
          local_108 = *local_88;
          lVar10 = -0x2ae9bc3bbb50edb0;
          if (*local_88 == 0 || param_1 == (long *)0x0) {
            lVar10 = -0x605a13ef42509bd9;
          }
          *local_b0 = 0;
        }
        else if (lVar8 == -0x1e73f1b8113cabb5) {
          lVar10 = -0x2c7989526e96278c;
        }
      }
      else if (lVar8 < -0x13f52255dcc6ec01) {
        lVar10 = 0x78d5b97d08778a1b;
        if ((lVar8 != -0x1c301ed0b7e3df83) && (lVar10 = lVar8, lVar8 == -0x149ba391ae65228d)) {
          lVar10 = -0x2c7989526e96278c;
        }
      }
      else if (lVar8 == -0x13f52255dcc6ec01) {
        FUN_0018d800(unaff_x25,param_1,*unaff_x24,local_90);
        lVar10 = 0x87188704f9fb8b2;
        if (*unaff_x25 != 0) {
          lVar10 = -0x4f91b13f74c385d2;
        }
      }
      else if (lVar8 == -0xb479b1ead3d9637) {
        local_f8 = *local_c0;
        lVar10 = 0xffb1d6f96e92e3e;
        if (*local_c0 != 0) {
          lVar10 = -0x4b01238e4c7e016a;
        }
      }
    }
    if (lVar8 < 0x4c2712f1576399b2) {
      if (lVar8 < 0x29ec0b0c7e4980c3) {
        if (lVar8 < 0x3e8004b87250e1d) {
          if (lVar8 == -0x8f33cbef8bfb8a8) {
            lVar10 = -0x30908b6b44c47cd9;
            if (local_a0 != (void *)0x0) {
              lVar10 = 0x361d709b06c6ee54;
            }
          }
          else {
            if (lVar8 == 0x163c88ee54d2cd3) {
              local_a4 = 0x23;
              goto LAB_0016a07c;
            }
            if (lVar8 == 0x229db0596474d65) {
              lVar10 = -0x2c7989526e96278c;
            }
          }
        }
        else if (lVar8 < 0x87188704f9fb8b2) {
          if (lVar8 == 0x3e8004b87250e1d) {
            local_110 = *unaff_x24;
            lVar10 = -0x41c0092938ad4993;
            if (*unaff_x24 == 0 || param_1 == (long *)0x0) {
              lVar10 = 0x6e5619c6470091d4;
            }
            *local_88 = 0;
          }
          else if (lVar8 == 0x5a28d4973a45fec) {
            FUN_00179568(unaff_x25,param_1,*local_88,local_d0);
            lVar10 = 0x2fa0dddf8e143fbb;
            if (*piVar1 < 1 || *unaff_x25 != 0) {
              lVar10 = 0x79518e4aba73d281;
            }
          }
        }
        else if (lVar8 == 0x87188704f9fb8b2) {
          FUN_0016c4cc(unaff_x25,param_1,*local_90,local_c0,local_e0);
          lVar10 = -0x2a6b46f075bc871a;
          if (*unaff_x25 != 0) {
            lVar10 = -0x1e73f1b8113cabb5;
          }
        }
        else if (lVar8 == 0xffb1d6f96e92e3e) {
          lVar10 = -0x34b601080ccf2e82;
        }
      }
      else if (lVar8 < 0x39774f1a0df6c2eb) {
        if (lVar8 < 0x3339e650b686b1f0) {
          lVar10 = -0x2080008250b543ef;
          if ((lVar8 != 0x29ec0b0c7e4980c3) && (lVar10 = lVar8, lVar8 == 0x2fa0dddf8e143fbb)) {
            local_c4 = 0;
            lVar10 = -0x575ae9387db63f3d;
          }
        }
        else if (lVar8 == 0x3339e650b686b1f0) {
          (**(code **)(*param_1 + 0xb8))(param_1,local_100);
          lVar10 = -0x2080008250b543ef;
        }
        else if (lVar8 == 0x361d709b06c6ee54) {
          free(local_a0);
          goto LAB_00169c38;
        }
      }
      else if (lVar8 < 0x447430711ca119e0) {
        if (lVar8 == 0x39774f1a0df6c2eb) {
          unaff_x25 = (int *)(puVar3 + -2);
          DAT_001f7fa4 = 0;
          local_b0 = puVar3 + -4;
          local_88 = puVar3 + -6;
          local_d0 = (int *)(puVar3 + -8);
          unaff_x24 = puVar3 + -10;
          unaff_x28 = puVar3 + -0xc;
          local_90 = puVar3 + -0xe;
          local_b8 = puVar3 + -0x10;
          local_d8 = puVar3 + -0x12;
          local_c0 = puVar3 + -0x14;
          puVar5 = puVar3 + -0x16;
          *(undefined4 *)(puVar3 + -2) = 0;
          puVar3[-4] = 0;
          puVar3[-6] = 0;
          *(undefined4 *)(puVar3 + -8) = 0;
          puVar3[-10] = 0;
          puVar3[-0xc] = 0;
          puVar3[-0xe] = 0;
          puVar3[-0x10] = 0;
          puVar3[-0x12] = 0;
          puVar3[-0x14] = 0;
          puVar3[-0x16] = 0;
          local_e0 = puVar5;
          FUN_001863c8(unaff_x25,param_1,local_130,&DAT_001f6908);
          piVar1 = (int *)(puVar3 + -2);
          puVar3 = puVar5;
          lVar10 = 0x66144e407f405f41;
          if (*piVar1 != 0) {
            lVar10 = -0x4f718f91222f51d9;
          }
        }
        else if (lVar8 == 0x3cbf3a4ca3d92045) {
          if (*(long *)(local_138 + 0x28) == local_80) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(*unaff_x25);
        }
      }
      else if (lVar8 == 0x447430711ca119e0) {
        lVar7 = *unaff_x28;
        *unaff_x24 = 0;
        local_118 = lVar7;
        lVar10 = -0x300001a4d8e38296;
        if (lVar7 == 0 || param_1 == (long *)0x0) {
          lVar10 = 0x51a6f96fbff7f944;
        }
      }
      else if (lVar8 == 0x4ad3811b1f41c64a) {
        *unaff_x25 = 0;
        iVar4 = *local_d0;
        lVar8 = lVar7 + *(long *)(lVar7 + 0x870) * 0x10;
        local_124 = local_128 + 1;
        *(long *)(lVar7 + 0x870) = *(long *)(lVar7 + 0x870) + 1;
        *(void **)(lVar8 + 0x70) = local_98;
        lVar10 = -0x76a325c0a9a69288;
        if (iVar4 <= local_128 + 1) {
          lVar10 = -0x620dba95cabd5d6a;
        }
        *(void **)(lVar8 + 0x78) = local_a0;
      }
      goto LAB_0016927c;
    }
    if (lVar8 < 0x6e5619c6470091d4) {
      if (lVar8 < 0x65d35e4038166d7c) {
        if (lVar8 == 0x4c2712f1576399b2) {
          free(local_98);
          lVar10 = -0x8f33cbef8bfb8a8;
        }
        else if (lVar8 == 0x4cc28a888edec7aa) {
          *unaff_x25 = local_a4;
          lVar10 = -0x2c7989526e96278c;
        }
        else if (lVar8 == 0x51a6f96fbff7f944) {
          lVar10 = -0x638021a54521ca21;
        }
      }
      else if (lVar8 < 0x685a56bb13a0b0b5) {
        if (lVar8 == 0x65d35e4038166d7c) {
          DAT_001f6910 = DAT_001f6910 ^ 0xae;
          DAT_001f6911 = DAT_001f6911 ^ 0xae;
          DAT_001f6912 = DAT_001f6912 ^ 0xae;
          DAT_001f6914 = DAT_001f6914 ^ 0xae;
          DAT_001f6915 = DAT_001f6915 ^ 0xae;
          DAT_001f6913 = DAT_001f6913 ^ 0xae;
          DAT_001f6916 = DAT_001f6916 ^ 0xae;
          DAT_001f6908 = DAT_001f6908 ^ 0xaeaeaeaeaeaeaeae;
          DAT_001f7fa4._0_2_ = CONCAT11(1,(undefined1)DAT_001f7fa4);
          lVar10 = 0x39774f1a0df6c2eb;
        }
        else if (lVar8 == 0x66144e407f405f41) {
          FUN_0018e378(unaff_x25,param_1,*local_b0,0xffffffff,local_88);
          lVar10 = 0x5a28d4973a45fec;
          if (*unaff_x25 != 0) {
            lVar10 = 0x229db0596474d65;
          }
        }
      }
      else {
        lVar10 = -0xb479b1ead3d9637;
        if ((lVar8 != 0x685a56bb13a0b0b5) && (lVar10 = lVar8, lVar8 == 0x6e451b91b8c3f770)) {
          lVar10 = -0x2c7989526e96278c;
        }
      }
    }
    else if (lVar8 < 0x78d5b97d08778a1b) {
      lVar10 = 0x447430711ca119e0;
      if (((lVar8 != 0x6e5619c6470091d4) &&
          (lVar10 = 0x3cbf3a4ca3d92045, lVar8 != 0x759117af84d0f5df)) &&
         (lVar10 = lVar8, lVar8 == 0x782e30fc7ff61efa)) {
        FUN_0018ccb0(unaff_x25,param_1,*unaff_x24,unaff_x28);
        lVar10 = -0x79f13c7d08690129;
        if (*unaff_x25 != 0) {
          lVar10 = 0x6e451b91b8c3f770;
        }
      }
    }
    else if (lVar8 < 0x797a8bccf51e016a) {
      if (lVar8 == 0x78d5b97d08778a1b) {
        iVar4 = FUN_001ebe70(0,1,&DAT_001f7fa4);
        lVar10 = -0x4bbb44ced458beb2;
        if (iVar4 != 0) {
          lVar10 = -0x771e40895f9ebb56;
        }
      }
      else if (lVar8 == 0x79518e4aba73d281) {
        lVar10 = -0x2c7989526e96278c;
      }
    }
    else if (lVar8 == 0x797a8bccf51e016a) {
      (**(code **)(*param_1 + 0xb8))(param_1,local_120);
      lVar10 = 0x3cbf3a4ca3d92045;
    }
    else if (lVar8 == 0x7d125d4f7f6ee364) {
      lVar10 = -0x52726a1e7f94e236;
      if (local_98 != (void *)0x0) {
        lVar10 = 0x4c2712f1576399b2;
      }
    }
  } while( true );
}


