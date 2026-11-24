// Function: FUN_0016b2c4
// Entry: 0016b2c4

undefined4
FUN_0016b2c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  void *unaff_x24;
  undefined4 unaff_w25;
  void *unaff_x26;
  
  lVar2 = -0x266bd374b6c46bdb;
  if (*(ulong *)(param_1 + 0x870) < 0x7f) {
    lVar2 = 0x7437dd4f68f60165;
  }
  lVar1 = -0x6de2f4389e4d5ea9;
LAB_0016b3a0:
  do {
    while (lVar3 = lVar1, lVar1 = lVar3, lVar3 < -0x2344562b74588963) {
      if (lVar3 < -0x432357afa089dadd) {
        lVar1 = lVar2;
        if ((lVar3 != -0x6de2f4389e4d5ea9) && (lVar1 = lVar3, lVar3 == -0x4a55a1d801a90da6)) {
          free(unaff_x24);
          lVar1 = 0x723a74d15c7f4420;
        }
      }
      else if (lVar3 == -0x432357afa089dadd) {
LAB_0016b38c:
        unaff_w25 = 2;
        lVar1 = 0x49892410111165c1;
      }
      else if (lVar3 == -0x4035e24130f78e38) {
        lVar1 = 0x4cc25ef3780c6c38;
        if (unaff_x24 != (void *)0x0) {
          lVar1 = -0x4a55a1d801a90da6;
        }
      }
      else if (lVar3 == -0x266bd374b6c46bdb) {
        unaff_w25 = 0x23;
        lVar1 = 0x49892410111165c1;
      }
    }
    if (0x5a1258ee2de7ce99 < lVar3) {
      if (lVar3 == 0x5a1258ee2de7ce9a) {
        lVar3 = *(long *)(param_1 + 0x870);
        unaff_w25 = 0;
        lVar1 = param_1 + lVar3 * 0x10;
        *(void **)(lVar1 + 0x70) = unaff_x24;
        *(void **)(lVar1 + 0x78) = unaff_x26;
        *(long *)(param_1 + 0x870) = lVar3 + 1;
        lVar1 = 0x49892410111165c1;
      }
      else if (lVar3 == 0x723a74d15c7f4420) {
        lVar1 = -0x432357afa089dadd;
        if (unaff_x26 != (void *)0x0) {
          lVar1 = -0x2344562b74588963;
        }
      }
      else if (lVar3 == 0x7437dd4f68f60165) {
        unaff_x24 = (void *)FUN_001cdd28(param_2,param_3);
        unaff_x26 = (void *)FUN_001cdd28(param_4,param_5);
        lVar1 = 0x5a1258ee2de7ce9a;
        if (unaff_x26 == (void *)0x0 || unaff_x24 == (void *)0x0) {
          lVar1 = -0x4035e24130f78e38;
        }
      }
      goto LAB_0016b3a0;
    }
    if (lVar3 == -0x2344562b74588963) {
      free(unaff_x26);
      goto LAB_0016b38c;
    }
    lVar1 = 0x723a74d15c7f4420;
    if ((lVar3 != 0x4cc25ef3780c6c38) && (lVar1 = lVar3, lVar3 == 0x49892410111165c1)) {
      return unaff_w25;
    }
  } while( true );
}


