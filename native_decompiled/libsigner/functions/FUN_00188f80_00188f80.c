// Function: FUN_00188f80
// Entry: 00188f80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00188f80(int *param_1,long *param_2,long param_3,long *param_4)

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
  
  lVar1 = -0x419126fbcf2090e2;
  if (param_3 != 0) {
    lVar1 = 0x6abc83f807efebd;
  }
  lVar3 = -0x47b0b42862fee19d;
LAB_00189084:
  do {
    while (lVar4 = lVar3, lVar3 = lVar4, 0x1344596fecf0335 < lVar4) {
      if (lVar4 < 0x3164f9624f7824d7) {
        if (lVar4 < 0x6abc83f807efebd) {
          if (lVar4 < 0x69475fd32d031d5) {
            if (lVar4 == 0x1344596fecf0336) {
              lVar3 = (**(code **)(*param_2 + 0x2f8))(param_2,param_3,local_90);
              *param_4 = lVar3;
              lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
              lVar3 = -0x1bdc25ef9c7cbda;
              if (lVar4 != 0) {
                lVar3 = 0x272544b03fc708e4;
              }
            }
            else if (lVar4 == 0x43b83a9137b33df) {
              lVar3 = 0x6cfc35c78295a89e;
            }
          }
          else if (lVar4 == 0x69475fd32d031d5) {
            DAT_001f8198 = 0;
            local_90 = (**(code **)(*param_2 + 0x2f0))
                                 (param_2,unaff_x27,&DAT_001f6fc0,&DAT_001f6fd0);
            lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar3 = 0x4c583e2b9ba40e91;
            if (lVar4 != 0) {
              lVar3 = 0x3164f9624f7824d7;
            }
          }
          else if (lVar4 == 0x6a3a563bf3201bc) {
            lVar3 = 0x69475fd32d031d5;
          }
        }
        else if (lVar4 < 0x223d1b2af64d6b9f) {
          if (lVar4 == 0x6abc83f807efebd) {
            unaff_x27 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
            lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar3 = -0x27023d3a9192d90b;
            if (lVar4 != 0) {
              lVar3 = 0x223d1b2af64d6b9f;
            }
          }
          else if (lVar4 == 0xc5cd70925d74929) {
            lVar3 = -0x2f40a512e25b77d4;
            if (DAT_001f8250 == '\0') {
              lVar3 = -0x3b87f6aa1e98f8cc;
            }
          }
        }
        else if (lVar4 == 0x223d1b2af64d6b9f) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          lVar3 = 0x45f7684369d259fd;
          if (unaff_x27 != 0) {
            lVar3 = 0x5b2629519b7e66bb;
          }
          *param_1 = 0xf;
        }
        else if (lVar4 == 0x23018c7f3f32c45f) {
          iVar2 = FUN_001ebe70(0,1,&DAT_001f819c);
          lVar3 = 0xc5cd70925d74929;
          if (iVar2 != 0) {
            lVar3 = -0x6d1c4a7b1961d304;
          }
        }
        else if (lVar4 == 0x272544b03fc708e4) {
          local_88 = 0x19;
LAB_001898ec:
          lVar3 = -0x50b5bb5cfbea03d6;
        }
      }
      else if (lVar4 < 0x4db40229990e17fe) {
        if (lVar4 < 0x45f7684369d259fd) {
          if (lVar4 == 0x3164f9624f7824d7) {
            local_88 = 0xf;
            goto LAB_001898ec;
          }
          if (lVar4 == 0x44a17cbead6b8735) {
            local_74 = 0x19;
            goto LAB_00189070;
          }
        }
        else {
          lVar3 = -0x42d184690a7d5691;
          if (((lVar4 != 0x45f7684369d259fd) &&
              (lVar3 = 0x23018c7f3f32c45f, lVar4 != 0x49d416b134c5accd)) &&
             (lVar3 = lVar4, lVar4 == 0x4c583e2b9ba40e91)) {
            lVar3 = -0x4b497bc5b82f2e23;
            if (local_90 != 0) {
              lVar3 = 0x1344596fecf0336;
            }
          }
        }
      }
      else if (lVar4 < 0x5b2629519b7e66bb) {
        if (lVar4 == 0x4db40229990e17fe) {
          lVar3 = 0x6a3a563bf3201bc;
          if (DAT_001f824f == '\0') {
            lVar3 = -0x53a219d0b69b84ad;
          }
        }
        else if (lVar4 == 0x59e640eb81291e02) {
          *param_1 = local_84;
          lVar3 = -0x42d184690a7d5691;
        }
      }
      else {
        lVar3 = -0x62655da688e7878b;
        if (lVar4 != 0x5b2629519b7e66bb) {
          if (lVar4 == 0x5e57d884f88ef1eb) {
            local_84 = 0xf;
            goto LAB_00189464;
          }
          lVar3 = lVar4;
          if (lVar4 == 0x6cfc35c78295a89e) {
            return;
          }
        }
      }
    }
    if (lVar4 < -0x42d184690a7d5691) {
      if (lVar4 < -0x53a219d0b69b84ad) {
        if (lVar4 < -0x6d1c4a7b1961d304) {
          lVar3 = -0x38aa444e15dd852d;
          if ((lVar4 != -0x6f0fa01ac886a64d) && (lVar3 = lVar4, lVar4 == -0x6e4b906ff3c463cc)) {
            lVar3 = -0x42d184690a7d5691;
          }
        }
        else {
          lVar3 = 0x23018c7f3f32c45f;
          if ((lVar4 != -0x6d1c4a7b1961d304) && (lVar3 = lVar4, lVar4 == -0x62655da688e7878b)) {
            (**(code **)(*param_2 + 0xb8))(param_2,unaff_x27);
            lVar3 = 0x43b83a9137b33df;
            if (*param_1 != 0) {
              lVar3 = -0x6e4b906ff3c463cc;
            }
          }
        }
        goto LAB_00189084;
      }
      if (lVar4 < -0x50b5bb5cfbea03d6) {
        if (lVar4 == -0x53a219d0b69b84ad) {
          DAT_001f6fc8 = DAT_001f6fc8 ^ 0xe6;
          DAT_001f6fca = DAT_001f6fca ^ 0xe6;
          DAT_001f6fc9 = DAT_001f6fc9 ^ 0xe6;
          DAT_001f6fc0 = DAT_001f6fc0 ^ 0xe6e6e6e6e6e6e6e6;
          DAT_001f824f = '\x01';
          lVar3 = 0x69475fd32d031d5;
        }
        else if (lVar4 == -0x50c1b3781d1af979) {
          lVar3 = -0x62655da688e7878b;
        }
        goto LAB_00189084;
      }
      if (lVar4 == -0x50b5bb5cfbea03d6) {
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        local_74 = local_88;
      }
      else {
        if (lVar4 != -0x4b497bc5b82f2e23) {
          if (lVar4 == -0x47b0b42862fee19d) {
            lVar3 = lVar1;
          }
          goto LAB_00189084;
        }
        local_74 = 0xf;
      }
LAB_00189070:
      lVar3 = -0x2bf48a8fbb2a9b68;
      goto LAB_00189084;
    }
    if (lVar4 < -0x2f40a512e25b77d4) {
      if (lVar4 < -0x3b87f6aa1e98f8cc) {
        if (lVar4 == -0x42d184690a7d5691) {
          *param_4 = 0;
          lVar3 = 0x6cfc35c78295a89e;
        }
        else if (lVar4 == -0x419126fbcf2090e2) {
          local_84 = 3;
LAB_00189464:
          lVar3 = 0x59e640eb81291e02;
        }
      }
      else if (lVar4 == -0x3b87f6aa1e98f8cc) {
        _DAT_001f6fd0 = _DAT_001f6fd0 ^ 0x7e7e7e7e7e7e7e7e;
        uRam00000000001f6fd8 = uRam00000000001f6fd8 ^ 0x7e7e7e7e7e7e7e7e;
        _DAT_001f6fe0 = _DAT_001f6fe0 ^ 0x7e7e7e7e7e7e7e7e;
        uRam00000000001f6fe8 = uRam00000000001f6fe8 ^ 0x7e7e7e7e7e7e7e7e;
        DAT_001f8250 = '\x01';
        lVar3 = -0x2a8badcde497f002;
      }
      else if (lVar4 == -0x38aa444e15dd852d) {
        iVar2 = FUN_001ebe70(0,1,&DAT_001f8198);
        lVar3 = 0x4db40229990e17fe;
        if (iVar2 != 0) {
          lVar3 = -0x6f0fa01ac886a64d;
        }
      }
    }
    else if (lVar4 < -0x2a8badcde497f002) {
      lVar3 = -0x2a8badcde497f002;
      if ((lVar4 != -0x2f40a512e25b77d4) && (lVar3 = lVar4, lVar4 == -0x2bf48a8fbb2a9b68)) {
        *param_1 = local_74;
        lVar3 = -0x62655da688e7878b;
      }
    }
    else if (lVar4 == -0x2a8badcde497f002) {
      DAT_001f819c = 0;
      lVar3 = -0x38aa444e15dd852d;
    }
    else if (lVar4 == -0x27023d3a9192d90b) {
      lVar3 = 0x5e57d884f88ef1eb;
      if (unaff_x27 != 0) {
        lVar3 = 0x49d416b134c5accd;
      }
    }
    else if (lVar4 == -0x1bdc25ef9c7cbda) {
      lVar3 = 0x44a17cbead6b8735;
      if (*param_4 != 0) {
        lVar3 = -0x50c1b3781d1af979;
      }
    }
  } while( true );
}


