// Function: FUN_0011f954
// Entry: 0011f954

void FUN_0011f954(long param_1,long param_2,short *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long extraout_x11;
  long *plVar13;
  long unaff_x22;
  long *unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  long *local_8a0;
  long *local_898;
  long *local_890;
  long *local_880;
  undefined1 auStack_874 [2052];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  memset(auStack_874,0,0x801);
  plVar1 = (long *)0x5f51f1df2f1cc4a;
  if (param_2 != 0) {
    plVar1 = (long *)0xd20ed9930b805ca7;
  }
  plVar3 = plVar1;
  plVar4 = (long *)0x5f51f1df2f1cc4a;
  lVar5 = extraout_x11;
  plVar11 = (long *)0x4b1d06d662edcd58;
LAB_0011fa5c:
  do {
    while (plVar13 = plVar11, lVar8 = lVar5, plVar10 = plVar4, plVar12 = plVar3, plVar11 = plVar13,
          plVar3 = plVar12, plVar4 = plVar10, lVar5 = lVar8, (long)plVar13 < -0x14f8c4e896943237) {
      if ((long)plVar13 < -0x5c439fadf417bc8a) {
        if ((long)plVar13 < -0x6e38b33ba26cc7c4) {
          if (plVar13 == (long *)0x8e1f88497f8e98a1) {
            plVar11 = (long *)0xa2edc9f0f967eed5;
            if (*local_8a0 != 0) {
              plVar11 = (long *)0x2266c651dfbde0dc;
            }
            local_880 = local_890;
          }
          else if (plVar13 == (long *)0x9074b6ca19dae9b1) {
            plVar11 = (long *)0x4d42b27b99b1208;
          }
        }
        else {
          plVar11 = (long *)0xa27c62af2d6dcaf6;
          if (plVar13 != (long *)0x91c74cc45d93383c) {
            if (plVar13 == (long *)0xa27c62af2d6dcaf6) {
              local_890 = (long *)((long)local_880 + 1);
LAB_0011ff08:
              lVar5 = lVar8;
              plVar11 = (long *)0x8e1f88497f8e98a1;
            }
            else {
              plVar11 = plVar13;
              if (plVar13 == (long *)0xa2edc9f0f967eed5) {
                local_898 = (long *)0x0;
                plVar6 = local_898;
LAB_0011fd00:
                local_898 = plVar6;
                plVar3 = plVar12;
                plVar4 = plVar10;
                plVar11 = (long *)0xbc0fbbd041b9bba8;
              }
            }
          }
        }
      }
      else if ((long)plVar13 < -0x35d290dd8499c396) {
        if (plVar13 == (long *)0xa3bc60520be84376) {
          uVar9 = FUN_0019e8c4(*(undefined8 *)(param_1 + lVar8 * 0xa8),0x801,auStack_874);
          plVar11 = (long *)0x37ed31f08f53f1f4;
          unaff_x22 = lVar8;
          if ((uVar9 & 1) == 0) {
            plVar11 = (long *)0xca2d6f227b663c6a;
          }
        }
        else if (plVar13 == (long *)0xbc0fbbd041b9bba8) {
          plVar11 = (long *)0x5a3aced94a588832;
          if (local_898 <= local_880) {
            plVar11 = (long *)0x3cfbe864c3a77289;
          }
        }
        else if (plVar13 == (long *)0xc4aa98abb898077d) {
          unaff_x25 = unaff_x22 + 1;
          bVar7 = unaff_x25 == param_2;
          plVar11 = (long *)0x9074b6ca19dae9b1;
          plVar12 = (long *)0x1a25b2068074ba47;
LAB_00120070:
          if (!bVar7) {
            plVar11 = plVar12;
          }
        }
      }
      else {
        plVar11 = (long *)0xc4aa98abb898077d;
        if (plVar13 != (long *)0xca2d6f227b663c6a) {
          if (plVar13 == (long *)0xd20ed9930b805ca7) {
            lVar5 = 0;
            plVar11 = (long *)0xa3bc60520be84376;
          }
          else {
            plVar11 = plVar13;
            if (plVar13 == (long *)0xd5229cc773e73019) {
              unaff_x24 = plVar12 + 1;
              unaff_x26 = (long *)((long)plVar10 + 1);
              plVar11 = (long *)0x7dfcf83e979bea6c;
              if (*unaff_x24 != 0) {
                plVar11 = (long *)0x686aafe978de1dba;
              }
            }
          }
        }
      }
    }
    if ((long)plVar13 < 0x3cfbe864c3a77289) {
      if ((long)plVar13 < 0x1a25b2068074ba47) {
        if (plVar13 == (long *)0xeb073b17696bcdc9) {
          *param_3 = *param_3 + 1;
          plVar11 = (long *)0xa27c62af2d6dcaf6;
        }
        else {
          plVar11 = (long *)0x4d42b27b99b1208;
          if ((plVar13 != (long *)0x5f51f1df2f1cc4a) &&
             (plVar11 = plVar13, plVar13 == (long *)0x4d42b27b99b1208)) {
            if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
            return;
          }
        }
      }
      else {
        lVar5 = unaff_x25;
        plVar11 = (long *)0xa3bc60520be84376;
        if (plVar13 != (long *)0x1a25b2068074ba47) {
          if (plVar13 == (long *)0x2266c651dfbde0dc) {
            plVar3 = local_8a0;
            plVar4 = (long *)0x0;
            lVar5 = lVar8;
            plVar11 = (long *)0xd5229cc773e73019;
          }
          else {
            lVar5 = lVar8;
            plVar11 = plVar13;
            if (plVar13 == (long *)0x37ed31f08f53f1f4) {
              local_890 = (long *)0x0;
              local_8a0 = (long *)(param_1 + unaff_x22 * 0xa8 + 8);
              goto LAB_0011ff08;
            }
          }
        }
      }
      goto LAB_0011fa5c;
    }
    if ((long)plVar13 < 0x5a3aced94a588832) {
      if (plVar13 == (long *)0x3cfbe864c3a77289) {
        FUN_001cc250(auStack_874,0,0x801);
        plVar11 = (long *)0xc4aa98abb898077d;
      }
      else if (plVar13 == (long *)0x4b1d06d662edcd58) {
        plVar11 = plVar1;
      }
    }
    else {
      if (plVar13 == (long *)0x5a3aced94a588832) {
        lVar8 = FUN_001cac50(auStack_874,
                             *(undefined8 *)(param_1 + unaff_x22 * 0xa8 + (long)local_880 * 8 + 8));
        bVar7 = lVar8 == 0;
        plVar11 = (long *)0x91c74cc45d93383c;
        plVar12 = (long *)0xeb073b17696bcdc9;
        goto LAB_00120070;
      }
      plVar3 = unaff_x24;
      plVar4 = unaff_x26;
      plVar11 = (long *)0xd5229cc773e73019;
      if ((plVar13 != (long *)0x686aafe978de1dba) &&
         (plVar3 = plVar12, plVar4 = plVar10, plVar11 = plVar13, plVar6 = unaff_x26,
         plVar13 == (long *)0x7dfcf83e979bea6c)) goto LAB_0011fd00;
    }
  } while( true );
}


