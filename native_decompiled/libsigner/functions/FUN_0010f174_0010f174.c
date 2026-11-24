// Function: FUN_0010f174
// Entry: 0010f174

uint FUN_0010f174(double param_1,long *param_2,int *param_3,double *param_4,undefined8 param_5,
                 undefined8 param_6)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  double extraout_d0_02;
  double extraout_d0_03;
  double unaff_d8;
  double unaff_d9;
  uint local_14c;
  long local_130;
  long local_128;
  void *local_120;
  long local_118;
  long local_110;
  long local_108;
  void *local_100;
  uint local_ec;
  long local_e8;
  long local_e0;
  void *local_d8;
  void *local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  
  lVar2 = tpidr_el0;
  local_80 = *(long *)(lVar2 + 0x28);
  lVar1 = 0x60097c96feb43b65;
  if (*(char *)(param_4 + 1) != '\0') {
    lVar1 = -0x46b00f8f251fe968;
  }
  local_c0 = 0;
  local_b8 = 0;
  local_d0 = (void *)0x0;
  local_c8 = 0;
  local_d8 = (void *)0x0;
  local_e8 = 0;
  local_e0 = 0;
  lVar7 = 0x68aa96a99807d6a9;
LAB_0010f2dc:
  do {
    lVar6 = lVar7;
    lVar7 = lVar6;
    if (-0x28634e0beea7ace < lVar6) {
      if (lVar6 < 0x5a10b84f0fc76c75) {
        if (0x1f03c9be91893b23 < lVar6) {
          if (lVar6 < 0x385d80545f3737e5) {
            lVar7 = -0x2385ce133751e9ac;
            if (((lVar6 != 0x1f03c9be91893b24) &&
                (lVar7 = 0x178e5d451f8af4fe, lVar6 != 0x2ab93652bc5e6aed)) &&
               (lVar7 = lVar6, lVar6 == 0x2ac20a3475ce5e93)) {
              lVar7 = 0x5a173ff8b4bb5be2;
              if (*(char *)(param_4 + 1) != '\0') {
                lVar7 = 0x5a6e055eb95c23c2;
              }
            }
          }
          else if (lVar6 == 0x385d80545f3737e5) {
            param_1 = (double)FUN_00174864(param_3,param_2,local_130,&local_e8);
            local_128 = local_e8;
            lVar7 = 0x67d7fb9a0fcfedef;
            if (local_e8 != 0) {
              lVar7 = 0x785a883b00ef416d;
            }
          }
          else if (lVar6 == 0x41e46d9f17477c95) {
            *param_4 = unaff_d8;
            lVar7 = -0x659626d38519acc0;
          }
          else if (lVar6 == 0x49bfb75441afda81) {
            local_100 = local_d8;
            lVar7 = 0x74dfbd50c1679086;
            if (local_d8 != (void *)0x0) {
              lVar7 = -0x566f96a9b368e0d8;
            }
          }
          goto LAB_0010f2dc;
        }
        if (lVar6 < 0x99a64c8bb0943be) {
          lVar7 = -0x68fcbb577ac8ebb5;
          if ((lVar6 == -0x28634e0beea7acd) || (lVar7 = lVar6, lVar6 != -0x1787ea94ea6448e))
          goto LAB_0010f2dc;
        }
        else if (lVar6 != 0x99a64c8bb0943be) {
          if (lVar6 == 0x178e5d451f8af4fe) {
            param_1 = (double)FUN_001e9264(param_4 + 4,7);
            local_ec = 1;
            param_4[0x47] = (double)((ulong)param_4[0x47] | 1);
            lVar7 = -0x28a2c7a0eb30305f;
          }
          else if (lVar6 == 0x1ca1c4df0658c90c) {
            lVar7 = 0x178e5d451f8af4fe;
          }
          goto LAB_0010f2dc;
        }
      }
      else {
        if (lVar6 < 0x67d7fb9a0fcfedef) {
          if (lVar6 < 0x5a6e055eb95c23c2) {
            if (lVar6 == 0x5a10b84f0fc76c75) {
              free(local_120);
              local_d0 = (void *)0x0;
              lVar7 = 0x49bfb75441afda81;
              param_1 = extraout_d0_03;
            }
            else if (lVar6 == 0x5a173ff8b4bb5be2) {
              local_a0 = 0;
              local_98 = 0;
              FUN_001d8570(0,&local_a0);
              unaff_d9 = (double)local_98 / 1000000.0 + (double)local_a0 * 1000.0;
              param_1 = unaff_d9 - *param_4;
              lVar7 = -0x31fdcae306c274f0;
              if (param_1 <= 15000.0) {
                lVar7 = -0x72681e1acd6b059c;
              }
            }
          }
          else {
            lVar7 = -0x30bb96c187aba16a;
            if (((lVar6 != 0x5a6e055eb95c23c2) &&
                (lVar7 = 0x41e46d9f17477c95, lVar6 != 0x5dcf9f1451efb870)) &&
               (lVar7 = lVar6, lVar6 == 0x60097c96feb43b65)) {
              local_b0 = 0;
              local_a8 = 0;
              FUN_001d8570(0,&local_b0);
              unaff_d8 = (double)local_a8 / 1000000.0 + (double)local_b0 * 1000.0;
              param_1 = unaff_d8 - *param_4;
              lVar7 = -0x3904f4d3e6e92c9d;
              if (param_1 <= 15000.0) {
                lVar7 = 0x5dcf9f1451efb870;
              }
            }
          }
          goto LAB_0010f2dc;
        }
        if (0x6f6126ed95917c7a < lVar6) {
          if (lVar6 == 0x6f6126ed95917c7b) {
            *param_4 = unaff_d9;
            lVar7 = -0x30bb96c187aba16a;
          }
          else {
            lVar7 = -0x37390d343568a937;
            if ((lVar6 != 0x74dfbd50c1679086) && (lVar7 = lVar6, lVar6 == 0x785a883b00ef416d)) {
              uVar4 = FUN_00198b64(param_2,param_3,local_128,local_b8,&local_d8,&local_c8);
              lVar7 = 0x2ac20a3475ce5e93;
              param_1 = extraout_d0;
              if ((uVar4 & 1) == 0) {
                lVar7 = -0x1787ea94ea6448e;
              }
            }
          }
          goto LAB_0010f2dc;
        }
        if (lVar6 != 0x67d7fb9a0fcfedef) {
          lVar7 = lVar1;
          if ((lVar6 != 0x68aa96a99807d6a9) && (lVar7 = lVar6, lVar6 == 0x6a637c125f65a76b)) {
            param_1 = (double)(**(code **)(*param_2 + 0xb8))(param_2,local_108);
            lVar7 = -0x68fcbb577ac8ebb5;
          }
          goto LAB_0010f2dc;
        }
      }
LAB_0010f2c8:
      local_ec = 0;
      lVar7 = -0x28a2c7a0eb30305f;
      goto LAB_0010f2dc;
    }
    if (-0x3904f4d3e6e92c9e < lVar6) {
      if (-0x2385ce133751e9ad < lVar6) {
        if (lVar6 < -0x1450d9bc1b0ae4d5) {
          if (lVar6 == -0x2385ce133751e9ac) {
            local_118 = local_b8;
            local_e0 = 0;
            lVar7 = -0x53fcb8527fc1857c;
            if (local_b8 == 0 || param_2 == (long *)0x0) {
              lVar7 = -0x5573f3ffc6d4ae34;
            }
          }
          else if (lVar6 == -0x1f8eee9a244ffc80) {
            param_1 = (double)(**(code **)(*param_2 + 0xb8))(param_2,local_110);
            lVar7 = -0x2385ce133751e9ac;
          }
          else if (lVar6 == -0x1d79d347f33a6cf9) {
            local_ec = 1;
            lVar7 = -0x28a2c7a0eb30305f;
          }
        }
        else {
          if (lVar6 == -0x1450d9bc1b0ae4d5) goto LAB_0010f2c8;
          if (lVar6 == -0x12fc1cb5b49c762d) {
            lVar7 = -0x5a8169c1901d1267;
            if (local_c8 != local_c0) {
              lVar7 = 0x2ab93652bc5e6aed;
            }
          }
          else if (lVar6 == -0x2c21dff77979008) {
            lVar7 = 0x49bfb75441afda81;
          }
        }
        goto LAB_0010f2dc;
      }
      if (lVar6 < -0x31fdcae306c274f0) {
        if (lVar6 != -0x3904f4d3e6e92c9d) {
          if (lVar6 == -0x37390d343568a937) {
            local_108 = local_e8;
            lVar7 = 0x6a637c125f65a76b;
            if (local_e8 == 0 || param_2 == (long *)0x0) {
              lVar7 = -0x28634e0beea7acd;
            }
          }
          goto LAB_0010f2dc;
        }
        lVar7 = 0x41e46d9f17477c95;
      }
      else {
        if (lVar6 != -0x31fdcae306c274f0) {
          if (lVar6 == -0x30bb96c187aba16a) {
            param_1 = (double)FUN_0016dae0(param_3,param_2,param_6,&local_d0,&local_c0);
            lVar7 = -0x12fc1cb5b49c762d;
            if (*param_3 != 0) {
              lVar7 = -0x1450d9bc1b0ae4d5;
            }
          }
          else if (lVar6 == -0x28a2c7a0eb30305f) {
            local_120 = local_d0;
            lVar7 = -0x2c21dff77979008;
            if (local_d0 != (void *)0x0) {
              lVar7 = 0x5a10b84f0fc76c75;
            }
            local_14c = local_ec;
            param_4[0x47] = (double)((ulong)param_4[0x47] | 0x80);
          }
          goto LAB_0010f2dc;
        }
        lVar7 = 0x6f6126ed95917c7b;
      }
      *(undefined1 *)(param_4 + 1) = 1;
      goto LAB_0010f2dc;
    }
    if (lVar6 < -0x5a8169c1901d1267) {
      if (lVar6 < -0x68fcbb577ac8ebb5) {
        if (lVar6 == -0x74fc9d6cdb93ed18) goto LAB_0010f2c8;
        if (lVar6 == -0x72681e1acd6b059c) {
          lVar7 = 0x6f6126ed95917c7b;
        }
      }
      else if (lVar6 == -0x68fcbb577ac8ebb5) {
        local_110 = local_e0;
        local_e8 = 0;
        lVar7 = -0x1f8eee9a244ffc80;
        if (local_e0 == 0 || param_2 == (long *)0x0) {
          lVar7 = 0x1f03c9be91893b24;
        }
      }
      else if (lVar6 == -0x659626d38519acc0) {
        uVar4 = FUN_001970ec(param_2,param_3,param_4,param_5,&local_b8);
        lVar7 = -0x617ea1f144a91e55;
        param_1 = extraout_d0_02;
        if ((uVar4 & 1) == 0) {
          lVar7 = 0x99a64c8bb0943be;
        }
      }
      else if (lVar6 == -0x617ea1f144a91e55) {
        param_1 = (double)FUN_00173d0c(param_3,param_2,param_4[2],&local_e0);
        local_130 = local_e0;
        lVar7 = -0x74fc9d6cdb93ed18;
        if (local_e0 != 0) {
          lVar7 = 0x385d80545f3737e5;
        }
      }
    }
    else if (lVar6 < -0x53fcb8527fc1857c) {
      if (lVar6 == -0x5a8169c1901d1267) {
        lVar7 = -0x15c48858a06ca71d;
        if (*(char *)(param_4 + 1) != '\0') {
          lVar7 = 0x4e77b14c69e4757b;
        }
        lVar6 = -0x57c5a7acde5d998b;
        do {
          while( true ) {
            while( true ) {
              while (lVar5 = lVar6, lVar6 = lVar5, lVar5 < 0x3dd1541672e77739) {
                lVar6 = lVar7;
                if (lVar5 != -0x57c5a7acde5d998b) {
                  if (lVar5 == -0x15c48858a06ca71d) {
                    local_90 = 0;
                    local_88 = 0;
                    FUN_001d8570(0,&local_90);
                    param_1 = (double)local_88 / 1000000.0 + (double)local_90 * 1000.0;
                    lVar6 = 0x3dd1541672e77739;
                    if (param_1 - *param_4 <= 15000.0) {
                      lVar6 = 0x548f69369cb47b0a;
                    }
                  }
                  else {
                    lVar6 = lVar5;
                    if (lVar5 == 0x25c1d80b3c53cec7) {
                      *param_4 = param_1;
                      lVar6 = 0x7096451cc89b6285;
                    }
                  }
                }
              }
              if (0x548f69369cb47b09 < lVar5) break;
              if (lVar5 == 0x3dd1541672e77739) {
                *(undefined1 *)(param_4 + 1) = 1;
                lVar6 = 0x25c1d80b3c53cec7;
              }
              else if (lVar5 == 0x4e77b14c69e4757b) {
                lVar6 = 0x7096451cc89b6285;
              }
            }
            if (lVar5 != 0x548f69369cb47b0a) break;
            lVar6 = 0x25c1d80b3c53cec7;
          }
        } while (lVar5 != 0x7096451cc89b6285);
        iVar3 = FUN_001cbfb0(local_d0,local_d8,local_c8);
        lVar7 = -0x1d79d347f33a6cf9;
        param_1 = extraout_d0_01;
        if (iVar3 != 0) {
          lVar7 = 0x1ca1c4df0658c90c;
        }
      }
      else if (lVar6 == -0x566f96a9b368e0d8) {
        free(local_100);
        local_d8 = (void *)0x0;
        lVar7 = -0x37390d343568a937;
        param_1 = extraout_d0_00;
      }
      else if (lVar6 == -0x5573f3ffc6d4ae34) {
        lVar7 = -0x417a36f1b91e6651;
      }
    }
    else if (lVar6 == -0x53fcb8527fc1857c) {
      param_1 = (double)(**(code **)(*param_2 + 0xb8))(param_2,local_118);
      lVar7 = -0x417a36f1b91e6651;
    }
    else {
      lVar7 = -0x659626d38519acc0;
      if ((lVar6 != -0x46b00f8f251fe968) && (lVar7 = lVar6, lVar6 == -0x417a36f1b91e6651)) {
        if (*(long *)(lVar2 + 0x28) == local_80) {
          return local_14c & 1;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
  } while( true );
}


