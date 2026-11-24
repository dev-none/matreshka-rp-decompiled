// Function: FUN_00115e38
// Entry: 00115e38

void FUN_00115e38(long param_1,undefined8 param_2)

{
  char *pcVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  short *psVar5;
  undefined1 *puVar6;
  byte bVar7;
  byte bVar8;
  short sVar9;
  long lVar10;
  ushort uVar11;
  byte *pbVar12;
  bool bVar13;
  undefined1 uVar14;
  ulong uVar15;
  char cVar16;
  char cVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  uint uVar21;
  int iVar22;
  long lVar23;
  ulong uVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  byte *pbVar28;
  byte *pbVar29;
  undefined4 local_2f0;
  undefined4 local_2ec;
  int iStack_2e8;
  int local_2e4;
  int iStack_2e0;
  int local_2dc;
  int iStack_2d8;
  int local_2d4;
  int iStack_2d0;
  int local_2cc;
  int iStack_2c8;
  int local_2c4;
  int iStack_2c0;
  int local_2bc;
  int iStack_2b8;
  int local_2b4;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 local_130;
  long local_70;
  
  lVar10 = tpidr_el0;
  pbVar29 = (byte *)(param_1 + 0x92aa);
  psVar4 = (short *)(param_1 + 0x864a);
  local_70 = *(long *)(lVar10 + 0x28);
  if ((int)param_2 == 0) {
    *(undefined2 *)(param_1 + 0x83ca) = 1;
    FUN_00116eec(param_1,param_2,0x120,0xf,0);
    FUN_00116eec(param_1,1,0x20,0xf,0);
    if (*(char *)(param_1 + 0x9067) == '\0') {
      if (*(char *)(param_1 + 0x9066) == '\0') {
        if (*(char *)(param_1 + 0x9065) == '\0') {
          if (*(char *)(param_1 + 0x9064) == '\0') {
            if (*(char *)(param_1 + 0x9063) == '\0') {
              if (*(char *)(param_1 + 0x9062) == '\0') {
                if (*(char *)(param_1 + 0x9061) == '\0') {
                  if (*(char *)(param_1 + 0x9060) == '\0') {
                    if (*(char *)(param_1 + 0x905f) == '\0') {
                      if (*(char *)(param_1 + 0x905e) == '\0') {
                        if (*(char *)(param_1 + 0x905d) == '\0') {
                          if (*(char *)(param_1 + 0x905c) == '\0') {
                            if (*(char *)(param_1 + 0x905b) == '\0') {
                              if (*(char *)(param_1 + 0x905a) == '\0') {
                                if (*(char *)(param_1 + 0x9059) == '\0') {
                                  if (*(char *)(param_1 + 0x9058) == '\0') {
                                    if (*(char *)(param_1 + 0x9057) == '\0') {
                                      if (*(char *)(param_1 + 0x9056) == '\0') {
                                        if (*(char *)(param_1 + 0x9055) == '\0') {
                                          if (*(char *)(param_1 + 0x9054) == '\0') {
                                            if (*(char *)(param_1 + 0x9053) == '\0') {
                                              if (*(char *)(param_1 + 0x9052) == '\0') {
                                                if (*(char *)(param_1 + 0x9051) == '\0') {
                                                  if (*(char *)(param_1 + 0x9050) == '\0') {
                                                    if (*(char *)(param_1 + 0x904f) == '\0') {
                                                      if (*(char *)(param_1 + 0x904e) == '\0') {
                                                        if (*(char *)(param_1 + 0x904d) == '\0') {
                                                          if (*(char *)(param_1 + 0x904c) == '\0') {
                                                            uVar21 = 0x101;
                                                            if (*(char *)(param_1 + 0x904b) != '\0')
                                                            {
                                                              uVar21 = 0x102;
                                                            }
                                                          }
                                                          else {
                                                            uVar21 = 0x103;
                                                          }
                                                        }
                                                        else {
                                                          uVar21 = 0x104;
                                                        }
                                                      }
                                                      else {
                                                        uVar21 = 0x105;
                                                      }
                                                    }
                                                    else {
                                                      uVar21 = 0x106;
                                                    }
                                                  }
                                                  else {
                                                    uVar21 = 0x107;
                                                  }
                                                }
                                                else {
                                                  uVar21 = 0x108;
                                                }
                                              }
                                              else {
                                                uVar21 = 0x109;
                                              }
                                            }
                                            else {
                                              uVar21 = 0x10a;
                                            }
                                          }
                                          else {
                                            uVar21 = 0x10b;
                                          }
                                        }
                                        else {
                                          uVar21 = 0x10c;
                                        }
                                      }
                                      else {
                                        uVar21 = 0x10d;
                                      }
                                    }
                                    else {
                                      uVar21 = 0x10e;
                                    }
                                  }
                                  else {
                                    uVar21 = 0x10f;
                                  }
                                }
                                else {
                                  uVar21 = 0x110;
                                }
                              }
                              else {
                                uVar21 = 0x111;
                              }
                            }
                            else {
                              uVar21 = 0x112;
                            }
                          }
                          else {
                            uVar21 = 0x113;
                          }
                        }
                        else {
                          uVar21 = 0x114;
                        }
                      }
                      else {
                        uVar21 = 0x115;
                      }
                    }
                    else {
                      uVar21 = 0x116;
                    }
                  }
                  else {
                    uVar21 = 0x117;
                  }
                }
                else {
                  uVar21 = 0x118;
                }
              }
              else {
                uVar21 = 0x119;
              }
            }
            else {
              uVar21 = 0x11a;
            }
          }
          else {
            uVar21 = 0x11b;
          }
        }
        else {
          uVar21 = 0x11c;
        }
      }
      else {
        uVar21 = 0x11d;
      }
    }
    else {
      uVar21 = 0x11e;
    }
    lVar20 = 0;
    iVar22 = 0x1f;
    do {
      if (lVar20 + 0x1eU < 2) {
        iVar22 = 1;
        break;
      }
      pcVar1 = (char *)(param_1 + 36999 + lVar20);
      iVar22 = iVar22 + -1;
      lVar20 = lVar20 + -1;
    } while (*pcVar1 == '\0');
    __memcpy_chk(&local_1b0,param_1 + 0x8f4a,(ulong)uVar21,0x140);
    memcpy((void *)((long)&local_1b0 + (ulong)uVar21),(void *)(param_1 + 0x906a),(long)iVar22);
    uVar15 = (ulong)(iVar22 + uVar21);
    *(undefined8 *)(param_1 + 0x8652) = 0;
    psVar4[0] = 0;
    psVar4[1] = 0;
    psVar4[2] = 0;
    psVar4[3] = 0;
    *(undefined8 *)(param_1 + 0x8662) = 0;
    *(undefined8 *)(param_1 + 0x865a) = 0;
    *(undefined8 *)(param_1 + 0x8668) = 0;
    if (iVar22 + uVar21 == 0) {
      uVar25 = 0;
    }
    else {
      uVar18 = 0;
      uVar19 = 0;
      uVar26 = 0;
      psVar2 = (short *)(param_1 + 0x866e);
      psVar3 = (short *)(param_1 + 0x866c);
      uVar27 = 0xff;
      pbVar28 = (byte *)&local_1b0;
      do {
        cVar17 = (char)uVar27;
        bVar8 = *pbVar28;
        uVar24 = (ulong)bVar8;
        if (uVar24 == 0) {
          if (uVar26 == 0) {
LAB_001165d4:
            uVar27 = (ulong)uVar18;
          }
          else {
            if (2 < uVar26) {
              sVar9 = *(short *)(param_1 + 0x866a);
              uVar27 = (ulong)(uVar18 + 1);
              *(undefined1 *)((long)&local_2f0 + (ulong)uVar18) = 0x10;
              *(short *)(param_1 + 0x866a) = sVar9 + 1;
              cVar17 = (char)uVar26 + -3;
LAB_001165cc:
              uVar18 = uVar18 + 2;
              *(char *)((long)&local_2f0 + uVar27) = cVar17;
              goto LAB_001165d4;
            }
            lVar20 = param_1 + uVar27 * 2;
            *(char *)((long)&local_2f0 + (ulong)uVar18) = cVar17;
            *(short *)(lVar20 + 0x864a) = *(short *)(lVar20 + 0x864a) + (short)uVar26;
            uVar27 = (ulong)(uVar18 + 1);
            if (uVar26 != 1) goto LAB_001165cc;
          }
          uVar19 = uVar19 + 1;
          uVar18 = (uint)uVar27;
          if (uVar19 == 0x8a) {
            sVar9 = *psVar2;
            uVar26 = 0;
            uVar19 = 0;
            *(undefined1 *)((long)&local_2f0 + uVar27) = 0x12;
            *(undefined1 *)((long)&local_2f0 + (ulong)(uVar18 + 1)) = 0x7f;
            *psVar2 = sVar9 + 1;
            uVar18 = uVar18 + 2;
          }
          else {
            uVar26 = 0;
          }
        }
        else {
          uVar25 = uVar18;
          if (uVar19 != 0) {
            if (uVar19 < 3) {
              sVar9 = *psVar4;
              *(undefined1 *)((long)&local_2f0 + (ulong)uVar18) = 0;
              *psVar4 = sVar9 + (short)uVar19;
              uVar25 = uVar18 + 1;
              if (uVar19 != 1) {
                *(undefined1 *)((long)&local_2f0 + (ulong)(uVar18 + 1)) = 0;
                uVar25 = uVar18 + 2;
              }
            }
            else {
              bVar13 = 10 < uVar19;
              psVar5 = psVar3;
              if (bVar13) {
                psVar5 = psVar2;
              }
              uVar14 = 0x11;
              if (bVar13) {
                uVar14 = 0x12;
              }
              *(undefined1 *)((long)&local_2f0 + (ulong)uVar18) = uVar14;
              sVar9 = *psVar5;
              cVar16 = -3;
              if (bVar13) {
                cVar16 = -0xb;
              }
              *(char *)((long)&local_2f0 + (ulong)(uVar18 + 1)) = cVar16 + (char)uVar19;
              *psVar5 = sVar9 + 1;
              uVar25 = uVar18 + 2;
            }
          }
          uVar18 = uVar25;
          if ((uint)bVar8 == (uint)uVar27) {
            uVar26 = uVar26 + 1;
            if (uVar26 == 6) {
              sVar9 = *(short *)(param_1 + 0x866a);
              uVar26 = 0;
              uVar19 = 0;
              *(undefined1 *)((long)&local_2f0 + (ulong)uVar18) = 0x10;
              uVar25 = uVar18 + 1;
              uVar18 = uVar18 + 2;
              *(undefined1 *)((long)&local_2f0 + (ulong)uVar25) = 3;
              *(short *)(param_1 + 0x866a) = sVar9 + 1;
            }
            else {
              uVar19 = 0;
            }
          }
          else {
            uVar25 = uVar18;
            if (uVar26 != 0) {
              if (uVar26 < 3) {
                lVar20 = param_1 + uVar27 * 2;
                *(char *)((long)&local_2f0 + (ulong)uVar18) = cVar17;
                uVar25 = uVar18 + 1;
                *(short *)(lVar20 + 0x864a) = *(short *)(lVar20 + 0x864a) + (short)uVar26;
                if (uVar26 == 1) goto LAB_00116698;
              }
              else {
                sVar9 = *(short *)(param_1 + 0x866a);
                cVar17 = (char)uVar26 + -3;
                *(undefined1 *)((long)&local_2f0 + (ulong)uVar18) = 0x10;
                *(short *)(param_1 + 0x866a) = sVar9 + 1;
              }
              uVar25 = uVar18 + 2;
              *(char *)((long)&local_2f0 + (ulong)(uVar18 + 1)) = cVar17;
            }
LAB_00116698:
            lVar20 = param_1 + uVar24 * 2;
            uVar26 = 0;
            uVar19 = 0;
            *(byte *)((long)&local_2f0 + (ulong)uVar25) = bVar8;
            *(short *)(lVar20 + 0x864a) = *(short *)(lVar20 + 0x864a) + 1;
            uVar18 = uVar25 + 1;
          }
        }
        uVar15 = uVar15 - 1;
        uVar27 = uVar24;
        pbVar28 = pbVar28 + 1;
      } while (uVar15 != 0);
      if (uVar26 == 0) {
        uVar25 = uVar18;
        if (uVar19 != 0) {
          if (uVar19 < 3) {
            *psVar4 = *psVar4 + (short)uVar19;
            *(undefined1 *)((long)&local_2f0 + (ulong)uVar18) = 0;
            uVar25 = uVar18 + 1;
            if (uVar19 != 1) {
              *(undefined1 *)((long)&local_2f0 + (ulong)(uVar18 + 1)) = 0;
              uVar25 = uVar18 + 2;
            }
          }
          else {
            if (uVar19 < 0xb) {
              sVar9 = *psVar3;
              *(undefined1 *)((long)&local_2f0 + (ulong)uVar18) = 0x11;
              *psVar3 = sVar9 + 1;
              cVar17 = (char)uVar19 + -3;
            }
            else {
              sVar9 = *psVar2;
              *(undefined1 *)((long)&local_2f0 + (ulong)uVar18) = 0x12;
              *psVar2 = sVar9 + 1;
              cVar17 = (char)uVar19 + -0xb;
            }
            *(char *)((long)&local_2f0 + (ulong)(uVar18 + 1)) = cVar17;
            uVar25 = uVar18 + 2;
          }
        }
      }
      else if (uVar26 < 3) {
        lVar20 = param_1 + uVar24 * 2;
        *(byte *)((long)&local_2f0 + (ulong)uVar18) = bVar8;
        *(short *)(lVar20 + 0x864a) = *(short *)(lVar20 + 0x864a) + (short)uVar26;
        uVar25 = uVar18 + 1;
        if (uVar26 != 1) {
          *(byte *)((long)&local_2f0 + (ulong)(uVar18 + 1)) = bVar8;
          uVar25 = uVar18 + 2;
        }
      }
      else {
        sVar9 = *(short *)(param_1 + 0x866a);
        *(undefined1 *)((long)&local_2f0 + (ulong)uVar18) = 0x10;
        *(short *)(param_1 + 0x866a) = sVar9 + 1;
        *(char *)((long)&local_2f0 + (ulong)(uVar18 + 1)) = (char)uVar26 + -3;
        uVar25 = uVar18 + 2;
      }
    }
    FUN_00116eec(param_1,2,0x13,7,0);
    uVar26 = *(uint *)(param_1 + 0x5c) + 2;
    uVar19 = *(uint *)(param_1 + 0x60) | 2 << (ulong)(*(uint *)(param_1 + 0x5c) & 0x1f);
    *(uint *)(param_1 + 0x5c) = uVar26;
    *(uint *)(param_1 + 0x60) = uVar19;
    while (7 < uVar26) {
      puVar6 = *(undefined1 **)(param_1 + 0x40);
      if (puVar6 < *(undefined1 **)(param_1 + 0x48)) {
        *(undefined1 **)(param_1 + 0x40) = puVar6 + 1;
        *puVar6 = (char)uVar19;
        uVar26 = *(uint *)(param_1 + 0x5c);
        uVar19 = *(uint *)(param_1 + 0x60);
      }
      uVar19 = uVar19 >> 8;
      uVar26 = uVar26 - 8;
      *(uint *)(param_1 + 0x5c) = uVar26;
      *(uint *)(param_1 + 0x60) = uVar19;
    }
    uVar18 = uVar26 + 5;
    uVar19 = uVar21 - 0x101 << (ulong)(uVar26 & 0x1f) | uVar19;
    *(uint *)(param_1 + 0x5c) = uVar18;
    *(uint *)(param_1 + 0x60) = uVar19;
    if (2 < uVar26) {
      do {
        puVar6 = *(undefined1 **)(param_1 + 0x40);
        if (puVar6 < *(undefined1 **)(param_1 + 0x48)) {
          *(undefined1 **)(param_1 + 0x40) = puVar6 + 1;
          *puVar6 = (char)uVar19;
          uVar18 = *(uint *)(param_1 + 0x5c);
          uVar19 = *(uint *)(param_1 + 0x60);
        }
        uVar19 = uVar19 >> 8;
        uVar18 = uVar18 - 8;
        *(uint *)(param_1 + 0x5c) = uVar18;
        *(uint *)(param_1 + 0x60) = uVar19;
      } while (7 < uVar18);
    }
    uVar21 = uVar18 + 5;
    uVar19 = iVar22 + -1 << (ulong)(uVar18 & 0x1f) | uVar19;
    *(uint *)(param_1 + 0x5c) = uVar21;
    *(uint *)(param_1 + 0x60) = uVar19;
    if (2 < uVar18) {
      do {
        puVar6 = *(undefined1 **)(param_1 + 0x40);
        if (puVar6 < *(undefined1 **)(param_1 + 0x48)) {
          *(undefined1 **)(param_1 + 0x40) = puVar6 + 1;
          *puVar6 = (char)uVar19;
          uVar21 = *(uint *)(param_1 + 0x5c);
          uVar19 = *(uint *)(param_1 + 0x60);
        }
        uVar19 = uVar19 >> 8;
        uVar21 = uVar21 - 8;
        *(uint *)(param_1 + 0x5c) = uVar21;
        *(uint *)(param_1 + 0x60) = uVar19;
      } while (7 < uVar21);
    }
    if (*(char *)(param_1 + 0x9199) == '\0') {
      if (*(char *)(param_1 + 0x918b) == '\0') {
        if (*(char *)(param_1 + 0x9198) == '\0') {
          if (*(char *)(param_1 + 0x918c) == '\0') {
            if (*(char *)(param_1 + 0x9197) == '\0') {
              if (*(char *)(param_1 + 0x918d) == '\0') {
                if (*(char *)(param_1 + 0x9196) == '\0') {
                  if (*(char *)(param_1 + 0x918e) == '\0') {
                    if (*(char *)(param_1 + 0x9195) == '\0') {
                      if (*(char *)(param_1 + 0x918f) == '\0') {
                        if (*(char *)(param_1 + 0x9194) == '\0') {
                          if (*(char *)(param_1 + 0x9190) == '\0') {
                            if (*(char *)(param_1 + 0x9193) == '\0') {
                              if (*(char *)(param_1 + 0x9191) == '\0') {
                                if (*(char *)(param_1 + 0x9192) == '\0') {
                                  if (*(char *)(param_1 + 0x918a) == '\0') {
                                    if (*(char *)(param_1 + 0x919c) == '\0') {
                                      if (*(char *)(param_1 + 0x919b) == '\0') {
                                        iVar22 = -(uint)(*(char *)(param_1 + 0x919a) == '\0');
                                      }
                                      else {
                                        iVar22 = 1;
                                      }
                                    }
                                    else {
                                      iVar22 = 2;
                                    }
                                  }
                                  else {
                                    iVar22 = 3;
                                  }
                                }
                                else {
                                  iVar22 = 4;
                                }
                              }
                              else {
                                iVar22 = 5;
                              }
                            }
                            else {
                              iVar22 = 6;
                            }
                          }
                          else {
                            iVar22 = 7;
                          }
                        }
                        else {
                          iVar22 = 8;
                        }
                      }
                      else {
                        iVar22 = 9;
                      }
                    }
                    else {
                      iVar22 = 10;
                    }
                  }
                  else {
                    iVar22 = 0xb;
                  }
                }
                else {
                  iVar22 = 0xc;
                }
              }
              else {
                iVar22 = 0xd;
              }
            }
            else {
              iVar22 = 0xe;
            }
          }
          else {
            iVar22 = 0xf;
          }
        }
        else {
          iVar22 = 0x10;
        }
      }
      else {
        iVar22 = 0x11;
      }
    }
    else {
      iVar22 = 0x12;
    }
    if (iVar22 < 4) {
      iVar22 = 3;
    }
    uVar19 = iVar22 + -3 << (ulong)(uVar21 & 0x1f) | uVar19;
    uVar26 = uVar21 + 4;
    *(uint *)(param_1 + 0x5c) = uVar26;
    *(uint *)(param_1 + 0x60) = uVar19;
    if (3 < uVar21) {
      do {
        puVar6 = *(undefined1 **)(param_1 + 0x40);
        if (puVar6 < *(undefined1 **)(param_1 + 0x48)) {
          *(undefined1 **)(param_1 + 0x40) = puVar6 + 1;
          *puVar6 = (char)uVar19;
          uVar26 = *(uint *)(param_1 + 0x5c);
          uVar19 = *(uint *)(param_1 + 0x60);
        }
        uVar19 = uVar19 >> 8;
        uVar26 = uVar26 - 8;
        *(uint *)(param_1 + 0x5c) = uVar26;
        *(uint *)(param_1 + 0x60) = uVar19;
      } while (7 < uVar26);
    }
    uVar15 = 0;
    do {
      bVar13 = 4 < uVar26;
      uVar21 = uVar26 & 0x1f;
      uVar26 = uVar26 + 3;
      uVar19 = (uint)*(byte *)(param_1 + (ulong)(byte)(&DAT_00104358)[uVar15] + 0x918a) <<
               (ulong)uVar21 | uVar19;
      *(uint *)(param_1 + 0x5c) = uVar26;
      *(uint *)(param_1 + 0x60) = uVar19;
      if (bVar13) {
        do {
          puVar6 = *(undefined1 **)(param_1 + 0x40);
          if (puVar6 < *(undefined1 **)(param_1 + 0x48)) {
            *(undefined1 **)(param_1 + 0x40) = puVar6 + 1;
            *puVar6 = (char)uVar19;
            uVar26 = *(uint *)(param_1 + 0x5c);
            uVar19 = *(uint *)(param_1 + 0x60);
          }
          uVar19 = uVar19 >> 8;
          uVar26 = uVar26 - 8;
          *(uint *)(param_1 + 0x5c) = uVar26;
          *(uint *)(param_1 + 0x60) = uVar19;
        } while (7 < uVar26);
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != iVar22 + 1);
    if (uVar25 != 0) {
      uVar21 = 0;
      do {
        bVar8 = *(byte *)((long)&local_2f0 + (ulong)uVar21);
        uVar18 = uVar26 & 0x1f;
        uVar26 = uVar26 + *(byte *)(param_1 + (ulong)bVar8 + 0x918a);
        uVar19 = (uint)*(ushort *)(param_1 + (ulong)bVar8 * 2 + 0x8d0a) << (ulong)uVar18 | uVar19;
        *(uint *)(param_1 + 0x5c) = uVar26;
        *(uint *)(param_1 + 0x60) = uVar19;
        while (7 < uVar26) {
          puVar6 = *(undefined1 **)(param_1 + 0x40);
          if (puVar6 < *(undefined1 **)(param_1 + 0x48)) {
            *(undefined1 **)(param_1 + 0x40) = puVar6 + 1;
            *puVar6 = (char)uVar19;
            uVar26 = *(uint *)(param_1 + 0x5c);
            uVar19 = *(uint *)(param_1 + 0x60);
          }
          uVar19 = uVar19 >> 8;
          uVar26 = uVar26 - 8;
          *(uint *)(param_1 + 0x5c) = uVar26;
          *(uint *)(param_1 + 0x60) = uVar19;
        }
        uVar18 = uVar21 + 1;
        if (0xf < bVar8) {
          uVar18 = uVar26 & 0x1f;
          uVar26 = uVar26 + (byte)(&DAT_00103979)[bVar8 - 0x10];
          uVar19 = (uint)*(byte *)((long)&local_2f0 + (ulong)uVar21 + 1) << (ulong)uVar18 | uVar19;
          *(uint *)(param_1 + 0x5c) = uVar26;
          *(uint *)(param_1 + 0x60) = uVar19;
          while (uVar18 = uVar21 + 2, 7 < uVar26) {
            puVar6 = *(undefined1 **)(param_1 + 0x40);
            if (puVar6 < *(undefined1 **)(param_1 + 0x48)) {
              *(undefined1 **)(param_1 + 0x40) = puVar6 + 1;
              *puVar6 = (char)uVar19;
              uVar26 = *(uint *)(param_1 + 0x5c);
              uVar19 = *(uint *)(param_1 + 0x60);
            }
            uVar19 = uVar19 >> 8;
            uVar26 = uVar26 - 8;
            *(uint *)(param_1 + 0x5c) = uVar26;
            *(uint *)(param_1 + 0x60) = uVar19;
          }
        }
        uVar21 = uVar18;
      } while (uVar21 < uVar25);
    }
  }
  else {
    lVar20 = 0;
    local_130 = 0;
    *(undefined8 *)(param_1 + 0x8f62) = 0x808080808080808;
    *(undefined8 *)(param_1 + 0x8f5a) = 0x808080808080808;
    *(undefined8 *)(param_1 + 0x8f72) = 0x808080808080808;
    *(undefined8 *)(param_1 + 0x8f6a) = 0x808080808080808;
    *(undefined8 *)(param_1 + 0x8f82) = 0x808080808080808;
    *(undefined8 *)(param_1 + 0x8f7a) = 0x808080808080808;
    *(undefined8 *)(param_1 + 0x8f92) = 0x808080808080808;
    *(undefined8 *)(param_1 + 0x8f8a) = 0x808080808080808;
    *(undefined8 *)(param_1 + 0x8fa2) = 0x808080808080808;
    *(undefined8 *)(param_1 + 0x8f9a) = 0x808080808080808;
    *(undefined8 *)(param_1 + 0x8fb2) = 0x808080808080808;
    *(undefined8 *)(param_1 + 0x8faa) = 0x808080808080808;
    *(undefined8 *)(param_1 + 0x8fc2) = 0x808080808080808;
    *(undefined8 *)(param_1 + 0x8fba) = 0x808080808080808;
    *(undefined8 *)(param_1 + 0x8fd2) = 0x808080808080808;
    *(undefined8 *)(param_1 + 0x8fca) = 0x808080808080808;
    *(undefined8 *)(param_1 + 0x8f52) = 0x808080808080808;
    *(undefined8 *)(param_1 + 0x8f4a) = 0x808080808080808;
    *(undefined8 *)(param_1 + 0x8fe2) = 0x909090909090909;
    *(undefined8 *)(param_1 + 0x8fda) = 0x909090909090909;
    *(undefined8 *)(param_1 + 0x8ff2) = 0x909090909090909;
    *(undefined8 *)(param_1 + 0x8fea) = 0x909090909090909;
    *(undefined8 *)(param_1 + 0x9002) = 0x909090909090909;
    *(undefined8 *)(param_1 + 0x8ffa) = 0x909090909090909;
    *(undefined8 *)(param_1 + 0x9012) = 0x909090909090909;
    *(undefined8 *)(param_1 + 0x900a) = 0x909090909090909;
    *(undefined8 *)(param_1 + 0x9022) = 0x909090909090909;
    *(undefined8 *)(param_1 + 0x901a) = 0x909090909090909;
    *(undefined8 *)(param_1 + 0x9032) = 0x909090909090909;
    *(undefined8 *)(param_1 + 0x902a) = 0x909090909090909;
    *(undefined8 *)(param_1 + 0x9042) = 0x909090909090909;
    *(undefined8 *)(param_1 + 0x903a) = 0x909090909090909;
    *(undefined8 *)(param_1 + 0x9072) = 0x505050505050505;
    *(undefined8 *)(param_1 + 0x906a) = 0x505050505050505;
    *(undefined8 *)(param_1 + 0x9082) = 0x505050505050505;
    *(undefined8 *)(param_1 + 0x907a) = 0x505050505050505;
    *(undefined8 *)(param_1 + 0x904a) = 0x707070707070707;
    *(undefined8 *)(param_1 + 0x9052) = 0x707070707070707;
    *(undefined8 *)(param_1 + 0x905a) = 0x707070707070707;
    *(undefined8 *)(param_1 + 0x9062) = 0x808080808080808;
    uStack_1a8 = 0;
    local_1b0 = 0;
    local_198 = 0;
    local_1a0 = 0;
    uStack_188 = 0;
    local_190 = 0;
    local_178 = 0;
    local_180 = 0;
    uStack_168 = 0;
    local_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    local_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    do {
      pbVar28 = (byte *)(param_1 + 0x8f4a + lVar20);
      lVar20 = lVar20 + 1;
      lVar23 = (ulong)*pbVar28 * 4;
      *(int *)((long)&local_1b0 + lVar23) = *(int *)((long)&local_1b0 + lVar23) + 1;
    } while (lVar20 != 0x120);
    lVar20 = 0;
    local_2ec = 0;
    iStack_2e8 = local_1b0._4_4_ * 2;
    local_2e4 = ((int)uStack_1a8 + local_1b0._4_4_ * 2) * 2;
    iStack_2e0 = (uStack_1a8._4_4_ + local_2e4) * 2;
    local_2dc = ((int)local_1a0 + iStack_2e0) * 2;
    iStack_2d8 = (local_1a0._4_4_ + local_2dc) * 2;
    local_2d4 = ((int)local_198 + iStack_2d8) * 2;
    iStack_2d0 = (local_198._4_4_ + local_2d4) * 2;
    local_2cc = ((int)local_190 + iStack_2d0) * 2;
    iStack_2c8 = (local_190._4_4_ + local_2cc) * 2;
    local_2c4 = ((int)uStack_188 + iStack_2c8) * 2;
    iStack_2c0 = (uStack_188._4_4_ + local_2c4) * 2;
    local_2bc = ((int)local_180 + iStack_2c0) * 2;
    iStack_2b8 = (local_180._4_4_ + local_2bc) * 2;
    local_2b4 = ((int)local_178 + iStack_2b8) * 2;
    do {
      bVar8 = *(byte *)(param_1 + lVar20 + 0x8f4a);
      if (bVar8 != 0) {
        uVar25 = 0;
        uVar21 = bVar8 + 1;
        uVar26 = (&local_2f0)[bVar8];
        (&local_2f0)[bVar8] = uVar26 + 1;
        do {
          uVar21 = uVar21 - 1;
          uVar25 = uVar26 & 1 | uVar25 << 1;
          uVar26 = uVar26 >> 1;
        } while (1 < uVar21);
        *(short *)(param_1 + lVar20 * 2 + 0x888a) = (short)uVar25;
      }
      lVar20 = lVar20 + 1;
    } while (lVar20 != 0x120);
    lVar20 = 0;
    local_130 = 0;
    uStack_1a8 = 0;
    local_1b0 = 0;
    local_198 = 0;
    local_1a0 = 0;
    uStack_188 = 0;
    local_190 = 0;
    local_178 = 0;
    local_180 = 0;
    uStack_168 = 0;
    local_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    local_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    do {
      pbVar28 = (byte *)(param_1 + 0x906a + lVar20);
      lVar20 = lVar20 + 1;
      lVar23 = (ulong)*pbVar28 * 4;
      *(int *)((long)&local_1b0 + lVar23) = *(int *)((long)&local_1b0 + lVar23) + 1;
    } while (lVar20 != 0x20);
    lVar20 = 0;
    local_2ec = 0;
    iStack_2e8 = local_1b0._4_4_ * 2;
    local_2e4 = ((int)uStack_1a8 + local_1b0._4_4_ * 2) * 2;
    iStack_2e0 = (uStack_1a8._4_4_ + local_2e4) * 2;
    local_2dc = ((int)local_1a0 + iStack_2e0) * 2;
    iStack_2d8 = (local_1a0._4_4_ + local_2dc) * 2;
    local_2d4 = ((int)local_198 + iStack_2d8) * 2;
    iStack_2d0 = (local_198._4_4_ + local_2d4) * 2;
    local_2cc = ((int)local_190 + iStack_2d0) * 2;
    iStack_2c8 = (local_190._4_4_ + local_2cc) * 2;
    local_2c4 = ((int)uStack_188 + iStack_2c8) * 2;
    iStack_2c0 = (uStack_188._4_4_ + local_2c4) * 2;
    local_2bc = ((int)local_180 + iStack_2c0) * 2;
    iStack_2b8 = (local_180._4_4_ + local_2bc) * 2;
    local_2b4 = ((int)local_178 + iStack_2b8) * 2;
    do {
      bVar8 = *(byte *)(param_1 + lVar20 + 0x906a);
      if (bVar8 != 0) {
        uVar25 = 0;
        uVar21 = bVar8 + 1;
        uVar26 = (&local_2f0)[bVar8];
        (&local_2f0)[bVar8] = uVar26 + 1;
        do {
          uVar21 = uVar21 - 1;
          uVar25 = uVar26 & 1 | uVar25 << 1;
          uVar26 = uVar26 >> 1;
        } while (1 < uVar21);
        *(short *)(param_1 + lVar20 * 2 + 0x8aca) = (short)uVar25;
      }
      lVar20 = lVar20 + 1;
    } while (lVar20 != 0x20);
    uVar26 = *(uint *)(param_1 + 0x5c) + 2;
    uVar19 = *(uint *)(param_1 + 0x60) | 1 << (ulong)(*(uint *)(param_1 + 0x5c) & 0x1f);
    *(uint *)(param_1 + 0x5c) = uVar26;
    *(uint *)(param_1 + 0x60) = uVar19;
    while (7 < uVar26) {
      puVar6 = *(undefined1 **)(param_1 + 0x40);
      if (puVar6 < *(undefined1 **)(param_1 + 0x48)) {
        *(undefined1 **)(param_1 + 0x40) = puVar6 + 1;
        *puVar6 = (char)uVar19;
        uVar26 = *(uint *)(param_1 + 0x5c);
        uVar19 = *(uint *)(param_1 + 0x60);
      }
      uVar19 = uVar19 >> 8;
      uVar26 = uVar26 - 8;
      *(uint *)(param_1 + 0x5c) = uVar26;
      *(uint *)(param_1 + 0x60) = uVar19;
    }
  }
  if (pbVar29 < *(byte **)(param_1 + 0x30)) {
    uVar15 = 1;
    do {
      pbVar28 = pbVar29;
      if ((int)uVar15 == 1) {
        pbVar28 = pbVar29 + 1;
        uVar15 = (ulong)(*pbVar29 | 0x100);
      }
      if ((uVar15 & 1) == 0) {
        pbVar29 = pbVar28 + 1;
        uVar21 = uVar26 & 0x1f;
        uVar26 = uVar26 + *(byte *)(param_1 + 0x8f4a + (ulong)*pbVar28);
        uVar19 = uVar19 | (uint)*(ushort *)(param_1 + 0x888a + (ulong)*pbVar28 * 2) << (ulong)uVar21
        ;
        *(uint *)(param_1 + 0x5c) = uVar26;
        *(uint *)(param_1 + 0x60) = uVar19;
        while (7 < uVar26) {
          puVar6 = *(undefined1 **)(param_1 + 0x40);
          if (puVar6 < *(undefined1 **)(param_1 + 0x48)) {
            *(undefined1 **)(param_1 + 0x40) = puVar6 + 1;
            *puVar6 = (char)uVar19;
            uVar26 = *(uint *)(param_1 + 0x5c);
            uVar19 = *(uint *)(param_1 + 0x60);
          }
          uVar19 = uVar19 >> 8;
          uVar26 = uVar26 - 8;
          *(uint *)(param_1 + 0x5c) = uVar26;
          *(uint *)(param_1 + 0x60) = uVar19;
        }
      }
      else {
        bVar8 = *pbVar28;
        uVar21 = uVar26 + *(byte *)(param_1 + 0x8f4a +
                                   (ulong)*(ushort *)(&DAT_00104158 + (ulong)bVar8 * 2));
        uVar19 = uVar19 | (uint)*(ushort *)
                                 (param_1 + 0x888a +
                                 (ulong)*(ushort *)(&DAT_00104158 + (ulong)bVar8 * 2) * 2) <<
                          (ulong)(uVar26 & 0x1f);
        bVar7 = pbVar28[2];
        uVar11 = *(ushort *)(pbVar28 + 1);
        *(uint *)(param_1 + 0x5c) = uVar21;
        *(uint *)(param_1 + 0x60) = uVar19;
        while (7 < uVar21) {
          puVar6 = *(undefined1 **)(param_1 + 0x40);
          if (puVar6 < *(undefined1 **)(param_1 + 0x48)) {
            *(undefined1 **)(param_1 + 0x40) = puVar6 + 1;
            *puVar6 = (char)uVar19;
            uVar21 = *(uint *)(param_1 + 0x5c);
            uVar19 = *(uint *)(param_1 + 0x60);
          }
          uVar19 = uVar19 >> 8;
          uVar21 = uVar21 - 8;
          *(uint *)(param_1 + 0x5c) = uVar21;
          *(uint *)(param_1 + 0x60) = uVar19;
        }
        uVar25 = uVar21 + (byte)(&DAT_001043b0)[bVar8];
        uVar19 = (*(uint *)(&DAT_0010436c + (ulong)(byte)(&DAT_001043b0)[bVar8] * 4) & (uint)bVar8)
                 << (ulong)(uVar21 & 0x1f) | uVar19;
        *(uint *)(param_1 + 0x5c) = uVar25;
        *(uint *)(param_1 + 0x60) = uVar19;
        while (7 < uVar25) {
          puVar6 = *(undefined1 **)(param_1 + 0x40);
          if (puVar6 < *(undefined1 **)(param_1 + 0x48)) {
            *(undefined1 **)(param_1 + 0x40) = puVar6 + 1;
            *puVar6 = (char)uVar19;
            uVar25 = *(uint *)(param_1 + 0x5c);
            uVar19 = *(uint *)(param_1 + 0x60);
          }
          uVar19 = uVar19 >> 8;
          uVar25 = uVar25 - 8;
          *(uint *)(param_1 + 0x5c) = uVar25;
          *(uint *)(param_1 + 0x60) = uVar19;
        }
        pbVar29 = &DAT_001044b0 + uVar11;
        pbVar12 = &DAT_00103ed8 + uVar11;
        if (0x1ff < uVar11) {
          pbVar29 = &DAT_001046b0 + bVar7;
          pbVar12 = &DAT_001040d8 + bVar7;
        }
        uVar21 = uVar25 + *(byte *)(param_1 + (ulong)*pbVar12 + 0x906a);
        bVar8 = *pbVar29;
        uVar19 = (uint)*(ushort *)(param_1 + (ulong)*pbVar12 * 2 + 0x8aca) << (ulong)(uVar25 & 0x1f)
                 | uVar19;
        *(uint *)(param_1 + 0x5c) = uVar21;
        *(uint *)(param_1 + 0x60) = uVar19;
        while (7 < uVar21) {
          puVar6 = *(undefined1 **)(param_1 + 0x40);
          if (puVar6 < *(undefined1 **)(param_1 + 0x48)) {
            *(undefined1 **)(param_1 + 0x40) = puVar6 + 1;
            *puVar6 = (char)uVar19;
            uVar21 = *(uint *)(param_1 + 0x5c);
            uVar19 = *(uint *)(param_1 + 0x60);
          }
          uVar19 = uVar19 >> 8;
          uVar21 = uVar21 - 8;
          *(uint *)(param_1 + 0x5c) = uVar21;
          *(uint *)(param_1 + 0x60) = uVar19;
        }
        pbVar29 = pbVar28 + 3;
        uVar26 = uVar21 + bVar8;
        uVar19 = (*(uint *)(&DAT_0010436c + (ulong)bVar8 * 4) & (uint)uVar11) <<
                 (ulong)(uVar21 & 0x1f) | uVar19;
        *(uint *)(param_1 + 0x5c) = uVar26;
        *(uint *)(param_1 + 0x60) = uVar19;
        while (7 < uVar26) {
          puVar6 = *(undefined1 **)(param_1 + 0x40);
          if (puVar6 < *(undefined1 **)(param_1 + 0x48)) {
            *(undefined1 **)(param_1 + 0x40) = puVar6 + 1;
            *puVar6 = (char)uVar19;
            uVar26 = *(uint *)(param_1 + 0x5c);
            uVar19 = *(uint *)(param_1 + 0x60);
          }
          uVar19 = uVar19 >> 8;
          uVar26 = uVar26 - 8;
          *(uint *)(param_1 + 0x5c) = uVar26;
          *(uint *)(param_1 + 0x60) = uVar19;
        }
      }
      uVar15 = uVar15 >> 1;
    } while (pbVar29 < *(byte **)(param_1 + 0x30));
  }
  uVar21 = uVar26 + *(byte *)(param_1 + 0x904a);
  uVar19 = (uint)*(ushort *)(param_1 + 0x8a8a) << (ulong)(uVar26 & 0x1f) | uVar19;
  *(uint *)(param_1 + 0x5c) = uVar21;
  *(uint *)(param_1 + 0x60) = uVar19;
  while (7 < uVar21) {
    puVar6 = *(undefined1 **)(param_1 + 0x40);
    if (puVar6 < *(undefined1 **)(param_1 + 0x48)) {
      *(undefined1 **)(param_1 + 0x40) = puVar6 + 1;
      *puVar6 = (char)uVar19;
      uVar21 = *(uint *)(param_1 + 0x5c);
      uVar19 = *(uint *)(param_1 + 0x60);
    }
    uVar19 = uVar19 >> 8;
    uVar21 = uVar21 - 8;
    *(uint *)(param_1 + 0x5c) = uVar21;
    *(uint *)(param_1 + 0x60) = uVar19;
  }
  if (*(long *)(lVar10 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(ulong *)(param_1 + 0x40) < *(ulong *)(param_1 + 0x48));
}


