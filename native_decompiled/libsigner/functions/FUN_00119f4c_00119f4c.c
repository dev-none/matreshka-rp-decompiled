// Function: FUN_00119f4c
// Entry: 00119f4c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00119f4c(FILE *param_1,undefined8 param_2,long *param_3)

{
  undefined1 *puVar1;
  long *plVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  FILE *unaff_x22;
  char *unaff_x23;
  long local_b0;
  undefined8 local_a8;
  FILE *local_a0;
  char **local_98;
  long *local_90;
  FILE *local_88;
  char *local_80;
  long local_78;
  
  plVar2 = &local_b0;
  local_b0 = tpidr_el0;
  local_78 = *(long *)(local_b0 + 0x28);
  puVar1 = (undefined1 *)0x7f24efb1c885eb9b;
  local_a8 = param_2;
  local_a0 = param_1;
  local_90 = param_3;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while (puVar6 = puVar1, puVar1 = puVar6, 0x129b99854ca09617 < (long)puVar6) {
                if ((long)puVar6 < 0x482e5862fb274eec) {
                  if ((long)puVar6 < 0x3303345eb4f85978) {
                    if ((long)puVar6 < 0x28a29c505fd0878c) {
                      if (puVar6 == (undefined1 *)0x129b99854ca09618) {
                        DAT_001f7bd4 = 0;
                        uVar3 = sscanf(local_80,&DAT_001f54a0,unaff_x23);
                        param_1 = (FILE *)(ulong)uVar3;
                        puVar1 = (undefined1 *)0x3303345eb4f85978;
                        if (uVar3 != 1) {
                          puVar1 = (undefined1 *)0x9ea3237b2a99da04;
                        }
                      }
                      else if (puVar6 == (undefined1 *)0x1666a35a3e139985) {
                        param_1 = calloc(1,0x10);
                        puVar1 = (undefined1 *)0x93f8f1d59ed66f09;
                        unaff_x22 = param_1;
                        if (param_1 != (FILE *)0x0) {
                          puVar1 = (undefined1 *)0x494913e247ec810;
                        }
                      }
                      else if (puVar6 == (undefined1 *)0x1c201a6f44d38273) {
                        puVar1 = (undefined1 *)0x57f8c36627f7246e;
                        if (DAT_001f7fb5 == '\0') {
                          puVar1 = (undefined1 *)0x297717612b720ee8;
                        }
                      }
                    }
                    else if (puVar6 == (undefined1 *)0x28a29c505fd0878c) {
                      DAT_001f5490 = DAT_001f5490 ^ 0x38;
                      DAT_001f5491 = DAT_001f5491 ^ 0x38;
                      DAT_001f7fb0._3_1_ = '\x01';
                      puVar1 = (undefined1 *)0xbac85a422f6dcf28;
                    }
                    else if (puVar6 == (undefined1 *)0x297717612b720ee8) {
                      DAT_001f54c0 = DAT_001f54c0 ^ 8;
                      DAT_001f54c1 = DAT_001f54c1 ^ 8;
                      DAT_001f54c2 = DAT_001f54c2 ^ 8;
                      DAT_001f54c3 = DAT_001f54c3 ^ 8;
                      DAT_001f7fb5 = '\x01';
                      puVar1 = (undefined1 *)0x45f288ff0a7ea1de;
                    }
                    else if (puVar6 == (undefined1 *)0x2e7820ff94f2299e) {
                      puVar1 = (undefined1 *)0x8238ab8752830617;
                    }
                  }
                  else if ((long)puVar6 < 0x36fa2d308e82c2f8) {
                    if (puVar6 == (undefined1 *)0x3303345eb4f85978) {
                      param_1 = (FILE *)FUN_001d4f30(unaff_x23,local_a8);
                      puVar1 = (undefined1 *)0xf9b878d6ad273076;
                      if (param_1 != (FILE *)0x0) {
                        puVar1 = (undefined1 *)0x102f8ffd02923754;
                      }
                    }
                    else {
                      puVar1 = (undefined1 *)0x859356aa69720d1;
                      if ((puVar6 != (undefined1 *)0x3359a89ff97157ac) &&
                         (puVar1 = puVar6, puVar6 == (undefined1 *)0x33970f856d03deee)) {
                        param_1 = (FILE *)FUN_001ebe70(0,1,&DAT_001f7bd0);
                        puVar1 = (undefined1 *)0x6ea6282306ea075c;
                        if ((int)param_1 != 0) {
                          puVar1 = &DAT_965cf93a9dddb88a;
                        }
                      }
                    }
                  }
                  else if (puVar6 == (undefined1 *)0x36fa2d308e82c2f8) {
                    DAT_001f54b8 = DAT_001f54b8 ^ 0x3f;
                    DAT_001f54b9 = DAT_001f54b9 ^ 0x3f;
                    DAT_001f54ba = DAT_001f54ba ^ 0x3f;
                    DAT_001f54bb = DAT_001f54bb ^ 0x3f;
                    DAT_001f54bc = DAT_001f54bc ^ 0x3f;
                    DAT_001f54bd = DAT_001f54bd ^ 0x3f;
                    DAT_001f54be = DAT_001f54be ^ 0x3f;
                    _DAT_001f54a0 = _DAT_001f54a0 ^ 0x3f3f3f3f3f3f3f3f;
                    uRam00000000001f54a8 = uRam00000000001f54a8 ^ 0x3f3f3f3f3f3f3f3f;
                    DAT_001f54b0 = DAT_001f54b0 ^ 0x3f3f3f3f3f3f3f3f;
                    DAT_001f7fb4 = '\x01';
                    puVar1 = (undefined1 *)0x129b99854ca09618;
                  }
                  else if (puVar6 == (undefined1 *)0x38b550c75dcbd861) {
                    *local_90 = (long)unaff_x22;
                    local_90[1] = (long)local_98;
                    puVar1 = (undefined1 *)0x80946337e81a76ad;
                  }
                  else if (puVar6 == (undefined1 *)0x45f288ff0a7ea1de) {
                    DAT_001f7bd8 = 0;
                    FUN_001c9028(unaff_x23);
                    uVar4 = FUN_0019eb5c();
                    param_1 = (FILE *)FUN_001ca28c(uVar4,&DAT_001f54c0);
                    puVar1 = (undefined1 *)0x1666a35a3e139985;
                    if ((int)param_1 != 0) {
                      puVar1 = (undefined1 *)0x7c9736501c5f4f0a;
                    }
                  }
                }
                else if ((long)puVar6 < 0x57f8c36627f7246e) {
                  if ((long)puVar6 < 0x5427e3fe8053026a) {
                    if (puVar6 == (undefined1 *)0x482e5862fb274eec) {
                      *(FILE **)local_90[1] = unaff_x22;
                      local_90[1] = (long)local_98;
                      puVar1 = (undefined1 *)0x80946337e81a76ad;
                    }
                    else if (puVar6 == (undefined1 *)0x4d702a7aef09f0b4) {
                      puVar1 = (undefined1 *)0x5375277af4011243;
                      if (DAT_001f7fb4 == '\0') {
                        puVar1 = (undefined1 *)0x36fa2d308e82c2f8;
                      }
                    }
                    else if (puVar6 == (undefined1 *)0x5375277af4011243) {
                      puVar1 = (undefined1 *)0x129b99854ca09618;
                    }
                  }
                  else {
                    puVar1 = (undefined1 *)0xd7a28745f3a8fb05;
                    if (puVar6 != (undefined1 *)0x5427e3fe8053026a) {
                      if (puVar6 == (undefined1 *)0x55488ab70f6983fa) {
                        DAT_001f7bc8 = 0;
                        local_80 = (char *)((long)plVar2 + -0x1080);
                        plVar2 = (long *)((long)plVar2 + -0x2100);
                        param_1 = fopen(&DAT_001f5480,(char *)&DAT_001f5490);
                        puVar1 = (undefined1 *)0xba6e2acce79821e0;
                        unaff_x23 = (char *)plVar2;
                        local_88 = param_1;
                        if (param_1 != (FILE *)0x0) {
                          puVar1 = (undefined1 *)0x5701972a5c88a65c;
                        }
                      }
                      else {
                        puVar1 = puVar6;
                        if (puVar6 == (undefined1 *)0x5701972a5c88a65c) {
                          param_1 = (FILE *)fgets(local_80,0x1080,local_88);
                          puVar1 = (undefined1 *)0x7e7f415062326f70;
                          if (param_1 != (FILE *)0x0) {
                            puVar1 = (undefined1 *)0x2e7820ff94f2299e;
                          }
                        }
                      }
                    }
                  }
                }
                else if ((long)puVar6 < 0x7c9736501c5f4f0a) {
                  puVar1 = (undefined1 *)0x45f288ff0a7ea1de;
                  if (((puVar6 != (undefined1 *)0x57f8c36627f7246e) &&
                      (puVar1 = (undefined1 *)0xfa5a19834426ec82,
                      puVar6 != (undefined1 *)0x65f514c9e7f64775)) &&
                     (puVar1 = puVar6, puVar6 == (undefined1 *)0x6ea6282306ea075c)) {
                    puVar1 = (undefined1 *)0xe8c9031141328d08;
                    if (DAT_001f7fb0._3_1_ == '\0') {
                      puVar1 = (undefined1 *)0x28a29c505fd0878c;
                    }
                  }
                }
                else {
                  puVar1 = (undefined1 *)0xc84313bc4262f702;
                  if (((puVar6 != (undefined1 *)0x7c9736501c5f4f0a) &&
                      (puVar1 = (undefined1 *)0xc5658784255ca4e2,
                      puVar6 != (undefined1 *)0x7e7f415062326f70)) &&
                     (puVar1 = puVar6, puVar6 == (undefined1 *)0x7f24efb1c885eb9b)) {
                    puVar1 = (undefined1 *)0x33970f856d03deee;
                  }
                }
              }
              if (-0x37d03aa9c8b304fd < (long)puVar6) break;
              if ((long)puVar6 < -0x5ab7f064f0b58e71) {
                if ((long)puVar6 < -0x6c070e2a612990f7) {
                  if (puVar6 == (undefined1 *)0x80946337e81a76ad) {
                    param_1 = (FILE *)strdup(unaff_x23);
                    *(FILE **)unaff_x22 = param_1;
                    puVar1 = (undefined1 *)0x3359a89ff97157ac;
                    if (param_1 != (FILE *)0x0) {
                      puVar1 = (undefined1 *)0xdad5fc5726557d2b;
                    }
                  }
                  else {
                    puVar1 = (undefined1 *)0xdaabd6243423b9d5;
                    if ((puVar6 != (undefined1 *)0x8238ab8752830617) &&
                       (puVar1 = puVar6, puVar6 == (undefined1 *)0x8497e9c855873224)) {
                      _DAT_001f5480 = _DAT_001f5480 ^ 0xf1f1f1f1f1f1f1f1;
                      uRam00000000001f5488 = uRam00000000001f5488 ^ 0xf1f1f1f1f1f1f1f1;
                      DAT_001f7fb0._1_1_ = '\x01';
                      puVar1 = (undefined1 *)0x55488ab70f6983fa;
                    }
                  }
                }
                else {
                  puVar1 = (undefined1 *)0x859356aa69720d1;
                  if (((puVar6 != (undefined1 *)0x93f8f1d59ed66f09) &&
                      (puVar1 = (undefined1 *)0x33970f856d03deee, puVar6 != &DAT_965cf93a9dddb88a))
                     && (puVar1 = puVar6, puVar6 == (undefined1 *)0x9ea3237b2a99da04)) {
                    puVar1 = (undefined1 *)0xc84313bc4262f702;
                  }
                }
              }
              else if ((long)puVar6 < -0x4591d5331867de20) {
                puVar1 = (undefined1 *)0x55488ab70f6983fa;
                if (((puVar6 != (undefined1 *)0xa5480f9b0f4a718f) &&
                    (puVar1 = (undefined1 *)0xc5658784255ca4e2,
                    puVar6 != (undefined1 *)0xa6bc7238d5ae4537)) &&
                   (puVar1 = puVar6, puVar6 == (undefined1 *)0xaa9d77ce64023005)) {
                  puVar1 = (undefined1 *)0xdaabd6243423b9d5;
                }
              }
              else if (puVar6 == (undefined1 *)0xba6e2acce79821e0) {
                local_a0->_flags = 8;
                puVar1 = (undefined1 *)0xc82fc556374cfb04;
              }
              else if (puVar6 == (undefined1 *)0xbac85a422f6dcf28) {
                DAT_001f7bd0 = 0;
                puVar1 = (undefined1 *)0xd7a28745f3a8fb05;
              }
              else if (puVar6 == (undefined1 *)0xc5658784255ca4e2) {
                uVar3 = fclose(local_88);
                param_1 = (FILE *)(ulong)uVar3;
                puVar1 = (undefined1 *)0xc82fc556374cfb04;
              }
            }
            if ((long)puVar6 < -0xb6b4c3bb4fa6b5c) break;
            if ((long)puVar6 < 0x494913e247ec810) {
              puVar1 = (undefined1 *)0x8238ab8752830617;
              if (((puVar6 != (undefined1 *)0xf494b3c44b0594a4) &&
                  (puVar1 = (undefined1 *)0xc84313bc4262f702,
                  puVar6 != (undefined1 *)0xf9b878d6ad273076)) &&
                 (puVar1 = puVar6, puVar6 == (undefined1 *)0xfa5a19834426ec82)) {
                param_1 = (FILE *)FUN_001ebe70(0,1,&DAT_001f7bd8);
                puVar1 = (undefined1 *)0x1c201a6f44d38273;
                if ((int)param_1 != 0) {
                  puVar1 = (undefined1 *)0x65f514c9e7f64775;
                }
              }
            }
            else if (puVar6 == (undefined1 *)0x494913e247ec810) {
              lVar5 = *local_90;
              local_98 = &unaff_x22->_IO_read_ptr;
              *local_98 = (char *)0x0;
              puVar1 = (undefined1 *)0x38b550c75dcbd861;
              if (lVar5 != 0) {
                puVar1 = (undefined1 *)0x482e5862fb274eec;
              }
            }
            else if (puVar6 == (undefined1 *)0x859356aa69720d1) {
              local_a0->_flags = 2;
              puVar1 = (undefined1 *)0xc5658784255ca4e2;
            }
            else if (puVar6 == (undefined1 *)0x102f8ffd02923754) {
              puVar1 = (undefined1 *)0xfa5a19834426ec82;
            }
          }
          if ((long)puVar6 < -0x252a03a8d9aa82d5) break;
          puVar1 = (undefined1 *)0xc84313bc4262f702;
          if (puVar6 != (undefined1 *)0xdad5fc5726557d2b) {
            if (puVar6 == (undefined1 *)0xe3a89f94bb3e7e7e) {
              puVar1 = (undefined1 *)0xa5480f9b0f4a718f;
              if (DAT_001f7fb0._1_1_ == '\0') {
                puVar1 = (undefined1 *)0x8497e9c855873224;
              }
            }
            else {
              puVar1 = puVar6;
              if (puVar6 == (undefined1 *)0xe8c9031141328d08) {
                puVar1 = (undefined1 *)0xbac85a422f6dcf28;
              }
            }
          }
        }
        if ((long)puVar6 < -0x285d78ba0c5704fb) break;
        if (puVar6 == (undefined1 *)0xd7a28745f3a8fb05) {
          param_1 = (FILE *)FUN_001ebe70(0,1,&DAT_001f7bc8);
          puVar1 = (undefined1 *)0xe3a89f94bb3e7e7e;
          if ((int)param_1 != 0) {
            puVar1 = (undefined1 *)0x5427e3fe8053026a;
          }
        }
        else if (puVar6 == (undefined1 *)0xdaabd6243423b9d5) {
          param_1 = (FILE *)FUN_001ebe70(0,1,&DAT_001f7bd4);
          puVar1 = (undefined1 *)0x4d702a7aef09f0b4;
          if ((int)param_1 != 0) {
            puVar1 = (undefined1 *)0xaa9d77ce64023005;
          }
        }
      }
      if (puVar6 != (undefined1 *)0xc84313bc4262f702) break;
      param_1 = (FILE *)fgets(local_80,0x1080,local_88);
      puVar1 = (undefined1 *)0xa6bc7238d5ae4537;
      if (param_1 != (FILE *)0x0) {
        puVar1 = (undefined1 *)0xf494b3c44b0594a4;
      }
    }
  } while (puVar6 != (undefined1 *)0xc82fc556374cfb04);
  if (*(long *)(local_b0 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


