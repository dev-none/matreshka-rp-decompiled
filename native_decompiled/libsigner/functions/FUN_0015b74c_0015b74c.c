// Function: FUN_0015b74c
// Entry: 0015b74c

uint FUN_0015b74c(ulong param_1,ulong param_2)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong unaff_x22;
  uint unaff_w26;
  ulong local_98;
  ulong local_90;
  long local_88;
  ulong local_80;
  ulong local_78;
  ulong local_68;
  
  uVar1 = param_2;
  lVar5 = -0xc746d985dce9c40;
LAB_0015b7f0:
  lVar7 = lVar5;
  uVar6 = param_1;
  uVar4 = uVar1;
  uVar1 = uVar4;
  param_1 = uVar6;
  lVar5 = lVar7;
  if (0x154650fd4544bd74 < lVar7) {
    if (lVar7 < 0x4e46fb929baf629c) {
      if (lVar7 < 0x35620a09b87dc6c4) {
        if (lVar7 < 0x214636979237a7ec) {
          if (lVar7 == 0x154650fd4544bd75) {
            local_88 = *(long *)(param_2 + uVar6 * 0x10 + 0x70);
            lVar5 = -0x1d5b202cc3edc74c;
            local_98 = uVar6;
            local_90 = uVar4;
            if (local_88 != 0) {
              lVar5 = 0x4e46fb929baf629c;
            }
          }
          else if (lVar7 == 0x1e0ae3fd39b26b16) {
            lVar5 = 0x11f1a9a2519e49be;
LAB_0015c208:
            DAT_001f67c0 = DAT_001f67c0 ^ 0x2c2c2c2c2c2c2c2c;
            DAT_001f67c9 = DAT_001f67c9 ^ 0x2c;
            DAT_001f67c8 = DAT_001f67c8 ^ 0x2c;
            DAT_001f7f60._0_2_ = CONCAT11(1,(undefined1)DAT_001f7f60);
          }
        }
        else {
          if (lVar7 == 0x214636979237a7ec) goto LAB_0015b7d4;
          if (lVar7 == 0x3285ebfe6dcd0721) {
LAB_0015beb0:
            lVar5 = 0x5c347a493247fe67;
          }
        }
      }
      else if (lVar7 < 0x43fe3fcad6e762e9) {
        if (lVar7 == 0x35620a09b87dc6c4) {
          lVar5 = -0x27b50afd735e28d7;
          goto LAB_0015c208;
        }
        if (lVar7 == 0x3693349b41fbc472) goto LAB_0015bd24;
      }
      else if (lVar7 == 0x43fe3fcad6e762e9) {
        uVar1 = local_80;
        param_1 = 0;
        lVar5 = 0x154650fd4544bd75;
      }
      else {
        lVar5 = -0x27b50afd735e28d7;
        if ((lVar7 != 0x4be0fad09ade4bd0) && (lVar5 = lVar7, lVar7 == 0x49c0ad7d8c9a3c78)) {
          return unaff_w26 & 1;
        }
      }
      goto LAB_0015b7f0;
    }
    if (lVar7 < 0x7822d911e8d785c8) {
      if (lVar7 < 0x5c347a493247fe67) {
        lVar5 = -0x7a63fc8fb42377aa;
        if ((lVar7 != 0x4e46fb929baf629c) && (lVar5 = lVar7, lVar7 == 0x5048455afaa777ed)) {
          local_68 = local_78;
          unaff_x22 = local_98 + 1;
          lVar5 = -0x43453eb994266bf0;
          if (local_78 <= unaff_x22) {
            lVar5 = -0x6948c4890f6782c7;
          }
        }
        goto LAB_0015b7f0;
      }
      if (lVar7 != 0x5c347a493247fe67) {
        if (lVar7 == 0x73732b6ab0d968ca) goto LAB_0015beb0;
        goto LAB_0015b7f0;
      }
      iVar3 = FUN_001ebe70(0,1,&DAT_001f7f60);
      bVar2 = iVar3 == 0;
      lVar5 = -0x42fca1c38f4881e6;
      lVar7 = 0x3285ebfe6dcd0721;
    }
    else {
      if (0x7bd4d2feb0db7b50 < lVar7) {
        if (lVar7 == 0x7bd4d2feb0db7b51) {
          lVar5 = 0x7822d911e8d785c8;
          goto LAB_0015c208;
        }
        if (lVar7 == 0x7e9c474b89b06743) {
          local_78 = *(ulong *)(param_2 + 0x870);
LAB_0015bf98:
          lVar5 = 0x5048455afaa777ed;
        }
        goto LAB_0015b7f0;
      }
      if (lVar7 != 0x7822d911e8d785c8) {
        if (lVar7 == 0x78978ba7ebe4c4ef) {
LAB_0015bd24:
          unaff_w26 = 1;
          goto LAB_0015b7d8;
        }
        goto LAB_0015b7f0;
      }
      DAT_001f7f60 = 0;
      lVar5 = FUN_001cac50(*(undefined8 *)(param_2 + 0x28),&DAT_001f67c0);
      bVar2 = lVar5 == 0;
      lVar5 = -0x64424af5e764e8f5;
      lVar7 = 0x78978ba7ebe4c4ef;
    }
LAB_0015c1c4:
    if (!bVar2) {
      lVar5 = lVar7;
    }
    goto LAB_0015b7f0;
  }
  if (lVar7 < -0x3bd84167743cb0c8) {
    if (-0x543bc96cd2624b82 < lVar7) {
      if (lVar7 < -0x43453eb994266bf0) {
        lVar5 = -0x7a63fc8fb42377aa;
        if ((lVar7 != -0x543bc96cd2624b81) && (lVar5 = lVar7, lVar7 == -0x506c43e776e43a9c)) {
          lVar5 = 0x7822d911e8d785c8;
        }
      }
      else {
        uVar1 = local_68;
        param_1 = unaff_x22;
        lVar5 = 0x154650fd4544bd75;
        if ((lVar7 != -0x43453eb994266bf0) &&
           (uVar1 = uVar4, param_1 = uVar6, lVar5 = lVar7, lVar7 == -0x42fca1c38f4881e6)) {
          lVar7 = 0x7bd4d2feb0db7b51;
          lVar5 = -0x506c43e776e43a9c;
LAB_0015c074:
          uVar1 = uVar4;
          param_1 = uVar6;
          if (DAT_001f7f60._1_1_ == '\0') {
            lVar5 = lVar7;
          }
        }
      }
      goto LAB_0015b7f0;
    }
    if (-0x6948c4890f6782c8 < lVar7) {
      if (lVar7 == -0x6948c4890f6782c7) {
LAB_0015b7d4:
        unaff_w26 = 0;
LAB_0015b7d8:
        lVar5 = 0x49c0ad7d8c9a3c78;
      }
      else if (lVar7 == -0x64424af5e764e8f5) {
        local_80 = *(ulong *)(param_2 + 0x870);
        lVar5 = 0x214636979237a7ec;
        if (local_80 != 0) {
          lVar5 = 0x43fe3fcad6e762e9;
        }
      }
      goto LAB_0015b7f0;
    }
    if (lVar7 != -0x7a63fc8fb42377aa) {
      if (lVar7 == -0x700c6d1fbc902ef5) {
        lVar5 = 0x11f1a9a2519e49be;
      }
      goto LAB_0015b7f0;
    }
    iVar3 = FUN_001ebe70(0,1,&DAT_001f7f60);
    lVar7 = -0x543bc96cd2624b81;
    lVar5 = -0x8afefc343bf3be6;
    bVar2 = iVar3 == 0;
  }
  else if (lVar7 < -0x259341d76a77bd64) {
    if (lVar7 < -0x29137c2e1c6adaa6) {
      if (lVar7 == -0x3bd84167743cb0c8) {
        lVar7 = 0x1e0ae3fd39b26b16;
        lVar5 = -0x700c6d1fbc902ef5;
        goto LAB_0015c074;
      }
      if (lVar7 == -0x2e8c0337db69d05e) goto LAB_0015bd24;
      goto LAB_0015b7f0;
    }
    lVar5 = -0x259341d76a77bd64;
    if ((lVar7 == -0x29137c2e1c6adaa6) || (lVar5 = lVar7, lVar7 != -0x27b50afd735e28d7))
    goto LAB_0015b7f0;
    DAT_001f7f60 = 0;
    lVar5 = FUN_001cac50(local_88,&DAT_001f67c0);
    bVar2 = lVar5 == 0;
    lVar7 = -0x2e8c0337db69d05e;
    lVar5 = 0x7e9c474b89b06743;
  }
  else {
    if (lVar7 < -0xc746d985dce9c40) {
      if (lVar7 == -0x259341d76a77bd64) {
        iVar3 = FUN_001ebe70(0,1,&DAT_001f7f60);
        lVar5 = -0x3bd84167743cb0c8;
        lVar7 = -0x29137c2e1c6adaa6;
        bVar2 = iVar3 == 0;
        goto LAB_0015c1c4;
      }
      if (lVar7 == -0x1d5b202cc3edc74c) {
        local_78 = local_90;
        goto LAB_0015bf98;
      }
      goto LAB_0015b7f0;
    }
    lVar5 = -0x259341d76a77bd64;
    if (lVar7 == -0xc746d985dce9c40) goto LAB_0015b7f0;
    if (lVar7 == -0x8afefc343bf3be6) {
      lVar5 = 0x4be0fad09ade4bd0;
      if (DAT_001f7f60._1_1_ == '\0') {
        lVar5 = 0x35620a09b87dc6c4;
      }
      goto LAB_0015b7f0;
    }
    lVar5 = lVar7;
    if (lVar7 != 0x11f1a9a2519e49be) goto LAB_0015b7f0;
    DAT_001f7f60 = 0;
    lVar5 = FUN_001cac50(*(undefined8 *)(param_2 + 0x58),&DAT_001f67c0);
    bVar2 = lVar5 == 0;
    lVar7 = 0x3693349b41fbc472;
    lVar5 = 0x73732b6ab0d968ca;
  }
  if (!bVar2) {
    lVar5 = lVar7;
  }
  goto LAB_0015b7f0;
}


