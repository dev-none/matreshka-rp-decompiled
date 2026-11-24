// Function: FUN_0019a8ac
// Entry: 0019a8ac

undefined8 FUN_0019a8ac(long *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  void *unaff_x26;
  void *unaff_x27;
  undefined8 local_318;
  int local_30c;
  timespec local_308;
  undefined4 local_2f4;
  double local_2f0;
  undefined1 uStack_2e8;
  undefined1 local_2e7;
  long local_2e0;
  undefined8 local_2d8;
  undefined1 auStack_2d0 [544];
  undefined1 auStack_b0 [48];
  void *local_80;
  void *local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  lVar9 = *param_1;
  lVar8 = *(long *)param_1[3];
  iVar2 = *(int *)param_1[4];
  lVar10 = *(long *)param_1[1];
  lVar6 = *(long *)param_1[2];
  lVar1 = 0x5e9249b5376f08fa;
  if ((((0 < iVar2 && lVar8 != 0) && lVar6 != 0) && lVar10 != 0) && lVar9 != 0) {
    lVar1 = -0x1795c34d98dcd73d;
  }
  local_30c = 0;
  lVar4 = -0x78021ee995880f92;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while (lVar7 = lVar4, lVar4 = lVar7, -0x11cdc96087771422 < lVar7) {
              if (lVar7 < 0x52d98d60f83cf13e) {
                if (lVar7 < 0x2ac799c399899ac3) {
                  if (lVar7 == -0x11cdc96087771421) {
                    FUN_0019a288(lVar9,lVar10,lVar8,&local_2f0);
                    FUN_00118064(&local_2f0);
                    FUN_0019e794(&local_2f0);
                    FUN_001104dc(&local_2f0);
                    uVar5 = FUN_001c7944(lVar9,&local_30c,&local_2f0);
                    lVar4 = -0xab4161c6ac76ac9;
                    if ((uVar5 & 1) == 0) {
                      lVar4 = 0x6de583d82abca3c2;
                    }
                  }
                  else if (lVar7 == -0xab4161c6ac76ac9) {
                    lVar4 = 0x76eec756bc9b1bd1;
                  }
                }
                else {
                  lVar4 = 0x43d4efcefc88fa10;
                  if (lVar7 != 0x2ac799c399899ac3) {
                    if (lVar7 == 0x43d4efcefc88fa10) {
                      uVar5 = FUN_001105f8(lVar9,&local_2f4,lVar10,&local_2f0);
                      lVar4 = -0x33b6ee172f5f7c77;
                      if ((uVar5 & 1) == 0) {
                        lVar4 = -0x3ed04c030289d596;
                      }
                    }
                    else {
                      lVar4 = lVar7;
                      if (lVar7 == 0x4bfd6150022cba99) {
                        free(unaff_x26);
                        local_80 = (void *)0x0;
                        lVar4 = -0x45bc5d4f2a354f46;
                      }
                    }
                  }
                }
              }
              else if (lVar7 < 0x5e9249b5376f08fa) {
                lVar4 = -0x2ba6f13e1a81ae87;
                if (lVar7 != 0x52d98d60f83cf13e) {
                  if (lVar7 == 0x55d58c2b8d472655) {
                    local_30c = 0;
                    lVar4 = 0x57dab7dd661b1869;
                  }
                  else {
                    lVar4 = lVar7;
                    if (lVar7 == 0x57dab7dd661b1869) {
                      local_2f4 = 0;
                      uVar5 = FUN_0011630c(&local_2f4,&local_2f0);
                      lVar4 = 0x2ac799c399899ac3;
                      if ((uVar5 & 1) == 0) {
                        lVar4 = -0x6e8c5e03a6cc6a6b;
                      }
                    }
                  }
                }
              }
              else if (lVar7 == 0x5e9249b5376f08fa) {
                local_318 = 0;
                lVar4 = -0x44b8d533c6b4f6b5;
              }
              else if (lVar7 == 0x6de583d82abca3c2) {
                local_30c = 0;
                lVar4 = 0x76eec756bc9b1bd1;
              }
              else if (lVar7 == 0x76eec756bc9b1bd1) {
                lVar4 = -0x63d6c57ea08e5e11;
                unaff_x26 = local_80;
                if (local_80 != (void *)0x0) {
                  lVar4 = 0x4bfd6150022cba99;
                }
              }
            }
            if (-0x45bc5d4f2a354f47 < lVar7) break;
            if (lVar7 < -0x6e8c5e03a6cc6a6b) {
              lVar4 = 0x57dab7dd661b1869;
              if ((lVar7 != -0x7d297ff0c8057c85) && (lVar4 = lVar7, lVar7 == -0x78021ee995880f92)) {
                lVar4 = lVar1;
              }
            }
            else if (lVar7 == -0x6e8c5e03a6cc6a6b) {
              FUN_00118030(&local_2f0);
              local_2f4 = 0;
              lVar4 = 0x43d4efcefc88fa10;
            }
            else {
              lVar4 = -0x45bc5d4f2a354f46;
              if ((lVar7 != -0x63d6c57ea08e5e11) && (lVar4 = lVar7, lVar7 == -0x58581ec20935847c)) {
                free(unaff_x27);
                lVar4 = -0x2ba6f13e1a81ae87;
              }
            }
          }
          if (lVar7 < -0x33b6ee172f5f7c77) break;
          lVar4 = -0x11cdc96087771421;
          if (lVar7 != -0x33b6ee172f5f7c77) {
            if (lVar7 == -0x2ba6f13e1a81ae87) {
              local_318 = local_2d8;
              lVar4 = -0x44b8d533c6b4f6b5;
            }
            else {
              lVar4 = lVar7;
              if (lVar7 == -0x1795c34d98dcd73d) {
                memset(&uStack_2e8,0,0x278);
                clock_gettime(0,&local_308);
                local_2e7 = (undefined1)iVar2;
                local_2f0 = (double)local_308.tv_nsec / 1000000.0 +
                            (double)local_308.tv_sec * 1000.0;
                local_2e0 = lVar6;
                FUN_001e8a4c(auStack_2d0);
                FUN_001cc250(auStack_b0,0,0x28);
                FUN_001100b4(&local_30c,lVar9,lVar10,&local_2f0);
                lVar4 = -0x7d297ff0c8057c85;
                if (local_30c != 0) {
                  lVar4 = 0x55d58c2b8d472655;
                }
              }
            }
          }
        }
        if (lVar7 != -0x45bc5d4f2a354f46) break;
        lVar4 = 0x52d98d60f83cf13e;
        unaff_x27 = local_78;
        if (local_78 != (void *)0x0) {
          lVar4 = -0x58581ec20935847c;
        }
      }
      if (lVar7 != -0x3ed04c030289d596) break;
      FUN_00116278(&local_2f0);
      lVar4 = -0x11cdc96087771421;
    }
  } while (lVar7 != -0x44b8d533c6b4f6b5);
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return local_318;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


