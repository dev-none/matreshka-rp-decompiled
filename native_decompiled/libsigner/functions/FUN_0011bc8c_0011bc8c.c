// Function: FUN_0011bc8c
// Entry: 0011bc8c

void FUN_0011bc8c(int *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  int iVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long local_e0;
  void *local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  int local_9c;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  undefined1 local_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_6c = 0;
  local_80 = 0;
  local_78 = 0;
  local_90 = 0;
  local_88 = 0;
  local_98 = 0;
  local_9c = 0;
  FUN_0011b300();
  puVar1 = (undefined1 *)0xea3b77a75f9358e3;
  if (*param_1 != 0) {
    puVar1 = (undefined1 *)0x4e77b14c69e4757b;
  }
  puVar3 = (undefined1 *)0xa83a585321a26675;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while (puVar6 = puVar3, puVar3 = puVar6, (long)puVar6 < 0x208137b40ff0c41) {
              if ((long)puVar6 < -0x3cff958be57398fb) {
                if ((long)puVar6 < -0x643e8920c056acf6) {
                  if ((long)puVar6 < -0x6b53575728baf5fd) {
                    if (puVar6 == (undefined1 *)0x831cb924ebee1b4d) {
                      (**(code **)(*param_2 + 0xb8))(param_2,local_c8);
                      puVar3 = (undefined1 *)0x4bb9872e6d9c6197;
                    }
                    else if (puVar6 == (undefined1 *)0x942e39241fb935bf) {
                      DAT_001f54c4 = DAT_001f54c4 ^ 0xfe;
                      DAT_001f54c5 = DAT_001f54c5 ^ 0xfe;
                      DAT_001f54c6 = DAT_001f54c6 ^ 0xfe;
                      DAT_001f54c7 = DAT_001f54c7 ^ 0xfe;
                      DAT_001f54c8 = DAT_001f54c8 ^ 0xfe;
                      DAT_001f7bdc._0_2_ = CONCAT11(1,(undefined1)DAT_001f7bdc);
                      puVar3 = (undefined1 *)0x61af358a616341e0;
                    }
                  }
                  else if (puVar6 == (undefined1 *)0x94aca8a8d7450a03) {
                    FUN_00181980(param_1,param_2,local_88,0,&local_90);
                    puVar3 = (undefined1 *)0x340d68985851f29b;
                    if (*param_1 != 0) {
                      puVar3 = (undefined1 *)0x208137b40ff0c41;
                    }
                  }
                  else if (puVar6 == (undefined1 *)0x97aca40091e55a5d) {
                    (**(code **)(*param_2 + 0xb8))(param_2,local_d0);
                    puVar3 = (undefined1 *)0x533e47b8d921314f;
                  }
                  else if (puVar6 == (undefined1 *)0x989a55cad3ac342c) {
                    puVar3 = (undefined1 *)0x533e47b8d921314f;
                  }
                }
                else if ((long)puVar6 < -0x57c5a7acde5d998b) {
                  if (puVar6 == (undefined1 *)0x9bc176df3fa9530a) {
                    local_c8 = local_90;
                    local_80 = 0;
                    puVar3 = (undefined1 *)0x831cb924ebee1b4d;
                    if (local_90 == 0 || param_2 == (long *)0x0) {
                      puVar3 = (undefined1 *)0xb5fbb0e4bad21fbd;
                    }
                  }
                  else if (puVar6 == (undefined1 *)0xa36514a46af964cb) {
                    local_b0 = local_98;
                    puVar3 = (undefined1 *)0x161e1b3a107f5a8;
                    if (local_98 != 0) {
                      puVar3 = (undefined1 *)0x73e1698da6d390e9;
                    }
                  }
                }
                else {
                  puVar3 = puVar1;
                  if (((puVar6 != (undefined1 *)0xa83a585321a26675) &&
                      (puVar3 = (undefined1 *)0xa36514a46af964cb,
                      puVar6 != (undefined1 *)0xb3f06b1c1ddaa8f5)) &&
                     (puVar3 = puVar6, puVar6 == (undefined1 *)0xb5fbb0e4bad21fbd)) {
                    puVar3 = (undefined1 *)0x4bb9872e6d9c6197;
                  }
                }
              }
              else if ((long)puVar6 < -0x12c3a303aebdf85b) {
                if ((long)puVar6 < -0x17b186783e63ae61) {
                  puVar3 = (undefined1 *)0x1005bd1355363683;
                  if ((puVar6 != (undefined1 *)0xc3006a741a8c6705) &&
                     (puVar3 = puVar6, puVar6 == (undefined1 *)0xd4083e08b1bd44a0)) {
                    FUN_001d8750(local_98,0x14,local_d8);
                    *param_5 = local_d8;
                    *param_6 = 0x28;
                    puVar3 = (undefined1 *)0xa36514a46af964cb;
                  }
                }
                else {
                  puVar3 = (undefined1 *)0xed3c5cfc514207a5;
                  if (puVar6 != (undefined1 *)0xe84e7987c19c519f) {
                    if (puVar6 == (undefined1 *)0xea3b77a75f9358e3) {
                      local_e0 = (**(code **)(*param_2 + 0x568))(param_2,local_78,0);
                      uVar5 = FUN_0016c3a0(param_2);
                      puVar3 = (undefined1 *)0x548f69369cb47b0a;
                      if ((uVar5 & 1) == 0 && local_e0 != 0) {
                        puVar3 = (undefined1 *)0x3dd1541672e77739;
                      }
                    }
                    else {
                      puVar3 = puVar6;
                      if (puVar6 == (undefined1 *)0xec245256c91fe167) {
                        puVar3 = (undefined1 *)0x6107ce89302545b1;
                        if (DAT_001f7bdc._1_1_ == '\0') {
                          puVar3 = (undefined1 *)0x942e39241fb935bf;
                        }
                      }
                    }
                  }
                }
              }
              else if ((long)puVar6 < -0x7d67305aaf633e7) {
                if (puVar6 == (undefined1 *)0xed3c5cfc514207a5) {
                  iVar4 = FUN_001ebe70(0,1,&DAT_001f7bdc);
                  puVar3 = (undefined1 *)0xec245256c91fe167;
                  if (iVar4 != 0) {
                    puVar3 = (undefined1 *)0xe84e7987c19c519f;
                  }
                }
                else if (puVar6 == (undefined1 *)0xf5ef27adba029b96) {
                  *param_1 = 2;
                  puVar3 = (undefined1 *)0xa36514a46af964cb;
                }
              }
              else if (puVar6 == (undefined1 *)0xf8298cfa5509cc19) {
                (**(code **)(*param_2 + 0xb8))(param_2,local_b8);
                puVar3 = (undefined1 *)0x1005bd1355363683;
              }
              else {
                puVar3 = (undefined1 *)0x9bc176df3fa9530a;
                if ((puVar6 != (undefined1 *)0xfa82974fa315c9d9) &&
                   (puVar3 = puVar6, puVar6 == (undefined1 *)0x161e1b3a107f5a8)) {
                  puVar3 = (undefined1 *)0xf1fa5ec267545b4;
                }
              }
            }
            if (0x4bb9872e6d9c6196 < (long)puVar6) break;
            if ((long)puVar6 < 0x25c1d80b3c53cec7) {
              if ((long)puVar6 < 0xf1fa5ec267545b4) {
                puVar3 = (undefined1 *)0xa36514a46af964cb;
                if ((puVar6 != (undefined1 *)0x208137b40ff0c41) &&
                   (puVar3 = puVar6, puVar6 == &DAT_b2d4ce65352e561)) {
                  (**(code **)(*param_2 + 0xb8))(param_2,local_c0);
                  puVar3 = (undefined1 *)0x9bc176df3fa9530a;
                }
              }
              else if (puVar6 == (undefined1 *)0xf1fa5ec267545b4) {
                local_b8 = local_88;
                puVar3 = (undefined1 *)0xf8298cfa5509cc19;
                if (local_88 == 0 || param_2 == (long *)0x0) {
                  puVar3 = (undefined1 *)0xc3006a741a8c6705;
                }
              }
              else if (puVar6 == (undefined1 *)0x1005bd1355363683) {
                local_c0 = local_80;
                local_88 = 0;
                puVar3 = &DAT_b2d4ce65352e561;
                if (local_80 == 0 || param_2 == (long *)0x0) {
                  puVar3 = (undefined1 *)0xfa82974fa315c9d9;
                }
              }
              else if (puVar6 == (undefined1 *)0x1073084a84eac6b1) {
                puVar3 = (undefined1 *)0xa36514a46af964cb;
              }
            }
            else if ((long)puVar6 < 0x340d68985851f29b) {
              puVar3 = (undefined1 *)0xa36514a46af964cb;
              if ((puVar6 != (undefined1 *)0x25c1d80b3c53cec7) &&
                 (puVar3 = puVar6, puVar6 == (undefined1 *)0x299108bddc6a14bb)) {
                FUN_00180f4c(param_1,param_2,local_88,local_80);
                puVar3 = (undefined1 *)0x94aca8a8d7450a03;
                if (*param_1 != 0) {
                  puVar3 = (undefined1 *)0xb3f06b1c1ddaa8f5;
                }
              }
            }
            else if (puVar6 == (undefined1 *)0x340d68985851f29b) {
              FUN_0016e150(param_1,param_2,local_90,&local_98,&local_9c);
              puVar3 = (undefined1 *)0x37405310caf8563f;
              if (*param_1 != 0) {
                puVar3 = (undefined1 *)0x1073084a84eac6b1;
              }
            }
            else if (puVar6 == (undefined1 *)0x37405310caf8563f) {
              puVar3 = (undefined1 *)0x78cedefaf48b4478;
              if (local_9c != 0x14) {
                puVar3 = (undefined1 *)0x6c05af2b61ea5a32;
              }
            }
            else if (puVar6 == (undefined1 *)0x3dd1541672e77739) {
              FUN_00190174(param_1,param_2,local_e0,&local_80);
              puVar3 = (undefined1 *)0x7096451cc89b6285;
              if (*param_1 != 0) {
                puVar3 = (undefined1 *)0x25c1d80b3c53cec7;
              }
            }
          }
          if ((long)puVar6 < 0x6c05af2b61ea5a32) break;
          if ((long)puVar6 < 0x73e1698da6d390e9) {
            if (puVar6 == (undefined1 *)0x6c05af2b61ea5a32) {
              *param_1 = 0x11;
              puVar3 = (undefined1 *)0xa36514a46af964cb;
            }
            else if (puVar6 == (undefined1 *)0x7096451cc89b6285) {
              puVar3 = (undefined1 *)0xed3c5cfc514207a5;
            }
          }
          else if (puVar6 == (undefined1 *)0x73e1698da6d390e9) {
            FUN_0016ec38(param_2,local_90,local_b0);
            puVar3 = (undefined1 *)0xf1fa5ec267545b4;
          }
          else {
            puVar3 = (undefined1 *)0xa36514a46af964cb;
            if ((puVar6 != (undefined1 *)0x76a7314c63096d5f) &&
               (puVar3 = puVar6, puVar6 == (undefined1 *)0x78cedefaf48b4478)) {
              local_d8 = calloc(0x29,1);
              puVar3 = (undefined1 *)0xf5ef27adba029b96;
              if (local_d8 != (void *)0x0) {
                puVar3 = (undefined1 *)0xd4083e08b1bd44a0;
              }
            }
          }
        }
        if ((long)puVar6 < 0x548f69369cb47b0a) break;
        if (puVar6 == (undefined1 *)0x548f69369cb47b0a) {
          *param_1 = 0x19;
          puVar3 = (undefined1 *)0xa36514a46af964cb;
        }
        else {
          puVar3 = (undefined1 *)0x61af358a616341e0;
          if ((puVar6 != (undefined1 *)0x6107ce89302545b1) &&
             (puVar3 = puVar6, puVar6 == (undefined1 *)0x61af358a616341e0)) {
            DAT_001f7bdc = 0;
            FUN_0017ff18(param_1,param_2,&DAT_001f54c4,&local_88);
            puVar3 = (undefined1 *)0x299108bddc6a14bb;
            if (*param_1 != 0) {
              puVar3 = (undefined1 *)0x76a7314c63096d5f;
            }
          }
        }
      }
      if (puVar6 != (undefined1 *)0x4bb9872e6d9c6197) break;
      local_d0 = local_78;
      local_90 = 0;
      puVar3 = (undefined1 *)0x97aca40091e55a5d;
      if (local_78 == 0 || param_2 == (long *)0x0) {
        puVar3 = (undefined1 *)0x989a55cad3ac342c;
      }
    }
    puVar3 = (undefined1 *)0xa36514a46af964cb;
  } while ((puVar6 == (undefined1 *)0x4e77b14c69e4757b) ||
          (puVar3 = puVar6, puVar6 != (undefined1 *)0x533e47b8d921314f));
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


