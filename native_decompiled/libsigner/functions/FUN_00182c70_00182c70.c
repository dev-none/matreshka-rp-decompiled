// Function: FUN_00182c70
// Entry: 00182c70

void FUN_00182c70(int *param_1,long *param_2,long param_3,long param_4,undefined4 *param_5)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  code *pcVar6;
  long unaff_x26;
  int local_74;
  long local_70;
  int local_68;
  int local_64;
  
  lVar1 = -0x4efd1bc8b3cab51f;
  if (param_4 == 0 || param_3 == 0) {
    lVar1 = 0x6ff0814f0db3ac04;
  }
  lVar2 = 0xbb23d42f2b70f6a;
LAB_00182d6c:
  do {
    while (lVar5 = lVar2, lVar2 = lVar5, lVar5 < -0x19fc77a5464f7f00) {
      if (lVar5 < -0x3a18ee8c9b3d9096) {
        if (lVar5 < -0x4efd1bc8b3cab51f) {
          if (lVar5 == -0x668d7611a8685093) {
            uVar4 = (**(code **)(*param_2 + 800))(param_2,param_3,local_70);
            pcVar6 = *(code **)(*param_2 + 0x78);
            *param_5 = uVar4;
            lVar5 = (*pcVar6)(param_2);
            lVar2 = 0x723dfb521e35a0e8;
            if (lVar5 != 0) {
              lVar2 = -0x31a65a29a4cbdbfb;
            }
          }
          else if (lVar5 == -0x61598850d2d2f54e) {
            *param_1 = local_74;
            lVar2 = -0x3d32bf008a82604e;
          }
          else if (lVar5 == -0x601467b068deaba0) {
            DAT_001f8160 = 0;
            local_70 = (**(code **)(*param_2 + 0x2f0))(param_2,unaff_x26,param_4,&DAT_001f6de4);
            lVar5 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar2 = -0x2b2aaddffdcac878;
            if (lVar5 != 0) {
              lVar2 = 0x60218f8fe41f7e92;
            }
          }
        }
        else if (lVar5 < -0x40b869db8bb20935) {
          if (lVar5 == -0x4efd1bc8b3cab51f) {
            unaff_x26 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
            lVar5 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar2 = -0x40b869db8bb20935;
            if (lVar5 != 0) {
              lVar2 = -0x19fc77a5464f7f00;
            }
          }
          else if (lVar5 == -0x412f55677b80201e) {
            lVar2 = -0x294b5273d4cfbb3d;
          }
        }
        else if (lVar5 == -0x40b869db8bb20935) {
          lVar2 = -0x27f63f2c03d31a03;
          if (unaff_x26 != 0) {
            lVar2 = -0x214627368545e80c;
          }
        }
        else if (lVar5 == -0x3d32bf008a82604e) {
          (**(code **)(*param_2 + 0xb8))(param_2,unaff_x26);
          lVar2 = -0x13fb156fb077d17e;
          if (*param_1 != 0) {
            lVar2 = -0x412f55677b80201e;
          }
        }
      }
      else if (lVar5 < -0x2b2aaddffdcac878) {
        if (lVar5 == -0x3a18ee8c9b3d9096) {
          DAT_001f6de4 = DAT_001f6de4 ^ 0xc3;
          DAT_001f6de5 = DAT_001f6de5 ^ 0xc3;
          DAT_001f8160._0_2_ = CONCAT11(1,(undefined1)DAT_001f8160);
          lVar2 = -0x601467b068deaba0;
        }
        else if (lVar5 == -0x38643b6059b8c8ec) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          local_74 = local_68;
LAB_00182d58:
          lVar2 = -0x61598850d2d2f54e;
        }
        else if (lVar5 == -0x31a65a29a4cbdbfb) {
          local_68 = 0x19;
LAB_001832b8:
          lVar2 = -0x38643b6059b8c8ec;
        }
      }
      else if (lVar5 < -0x27f63f2c03d31a03) {
        if (lVar5 == -0x2b2aaddffdcac878) {
          lVar2 = 0x7dce7c99e75688c5;
          if (local_70 != 0) {
            lVar2 = -0x668d7611a8685093;
          }
        }
        else if (lVar5 == -0x294b5273d4cfbb3d) {
          *param_5 = 0;
          lVar2 = 0x4ecca567e4c598eb;
        }
      }
      else if (lVar5 == -0x27f63f2c03d31a03) {
        local_64 = 0xf;
LAB_001834f8:
        lVar2 = -0xc49682dbcc1da35;
      }
      else if (lVar5 == -0x214627368545e80c) {
        lVar2 = -0x28f9ae82c648e7a;
      }
    }
    if (0x4ecca567e4c598ea < lVar5) {
      if (lVar5 < 0x707e89b527e5d751) {
        if (lVar5 < 0x65b7513e3e2fbf54) {
          if (lVar5 == 0x60218f8fe41f7e92) {
            local_68 = 0xf;
            goto LAB_001832b8;
          }
          if (lVar5 == 0x4ecca567e4c598eb) {
            return;
          }
        }
        else {
          lVar2 = -0x601467b068deaba0;
          if ((lVar5 != 0x65b7513e3e2fbf54) && (lVar2 = lVar5, lVar5 == 0x6ff0814f0db3ac04)) {
            local_64 = 3;
            goto LAB_001834f8;
          }
        }
      }
      else if (lVar5 < 0x7dce7c99e75688c5) {
        lVar2 = -0x294b5273d4cfbb3d;
        if ((lVar5 != 0x707e89b527e5d751) && (lVar2 = lVar5, lVar5 == 0x723dfb521e35a0e8)) {
          lVar2 = -0x3d32bf008a82604e;
        }
      }
      else {
        if (lVar5 == 0x7dce7c99e75688c5) {
          local_74 = 0xf;
          goto LAB_00182d58;
        }
        if (lVar5 == 0x7e8e2248e2b9f133) {
          lVar2 = -0x3d32bf008a82604e;
        }
      }
      goto LAB_00182d6c;
    }
    if (lVar5 < -0x28f9ae82c648e7a) {
      if (lVar5 == -0x19fc77a5464f7f00) {
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        lVar2 = 0x707e89b527e5d751;
        if (unaff_x26 != 0) {
          lVar2 = 0x7e8e2248e2b9f133;
        }
        *param_1 = 0xf;
      }
      else {
        lVar2 = 0x4ecca567e4c598eb;
        if ((lVar5 != -0x13fb156fb077d17e) && (lVar2 = lVar5, lVar5 == -0xc49682dbcc1da35)) {
          *param_1 = local_64;
          lVar2 = -0x294b5273d4cfbb3d;
        }
      }
    }
    else if (lVar5 < 0xbb23d42f2b70f6a) {
      if (lVar5 == -0x28f9ae82c648e7a) {
        iVar3 = FUN_001ebe70(0,1,&DAT_001f8160);
        lVar2 = 0x2294ac517b40c708;
        if (iVar3 != 0) {
          lVar2 = 0xabb4b3e17c66517;
        }
      }
      else if (lVar5 == 0xabb4b3e17c66517) {
        lVar2 = -0x28f9ae82c648e7a;
      }
    }
    else {
      lVar2 = lVar1;
      if ((lVar5 != 0xbb23d42f2b70f6a) && (lVar2 = lVar5, lVar5 == 0x2294ac517b40c708)) {
        lVar2 = 0x65b7513e3e2fbf54;
        if (DAT_001f8160._1_1_ == '\0') {
          lVar2 = -0x3a18ee8c9b3d9096;
        }
      }
    }
  } while( true );
}


