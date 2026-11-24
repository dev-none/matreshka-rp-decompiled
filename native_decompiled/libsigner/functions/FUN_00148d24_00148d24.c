// Function: FUN_00148d24
// Entry: 00148d24

void FUN_00148d24(long param_1,float *param_2,ulong *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x26;
  float fVar5;
  long local_88;
  long local_80;
  
  lVar1 = 0x3bd87df4a7d98b1a;
  if (param_3 == (ulong *)0x0 || param_1 == 0) {
    lVar1 = 0x5a7038b17f827b63;
  }
  lVar4 = -0x6fc9a32e2ddc38f5;
LAB_00148e88:
  do {
    while (lVar3 = lVar4, lVar4 = lVar3, 0x27a0bd2acfa770f6 < lVar3) {
      if (lVar3 < 0x5322482727433fd8) {
        if (lVar3 < 0x3b79e38b7570cd4d) {
          if (lVar3 < 0x28375825e7f88427) {
            lVar4 = -0x13d3f17da1da9aeb;
            if ((lVar3 != 0x27a0bd2acfa770f7) && (lVar4 = lVar3, lVar3 == 0x27b2736658d1b07a)) {
              lVar4 = 0x79dac607102b1ee1;
            }
          }
          else if (lVar3 == 0x28375825e7f88427) {
            lVar4 = -0x3f8fc2d321753db7;
            if (DAT_001f806a == '\0') {
              lVar4 = 0xd3d903fc63d22e2;
            }
          }
          else if (lVar3 == 0x32afcd5dd70dbc79) {
            DAT_001f7eb0 = 0;
            iVar2 = FUN_001ca28c(unaff_x26,&DAT_001f6478);
            lVar4 = 0x24764e9eef6ba0e6;
            if (iVar2 != 0) {
              lVar4 = 0x53aa85f26528c34a;
            }
          }
        }
        else if (lVar3 < 0x4ba5c2207b5f7271) {
          if (lVar3 == 0x3b79e38b7570cd4d) {
            lVar4 = -0x13d3f17da1da9aeb;
LAB_00148e78:
            DAT_001f647d = DAT_001f647d ^ 0x1f;
            DAT_001f647c = DAT_001f647c ^ 0x1f;
            DAT_001f647b = DAT_001f647b ^ 0x1f;
            DAT_001f647a = DAT_001f647a ^ 0x1f;
            DAT_001f6479 = DAT_001f6479 ^ 0x1f;
            DAT_001f6478 = DAT_001f6478 ^ 0x1f;
            DAT_001f647e = DAT_001f647e ^ 0x1f;
            DAT_001f806a = '\x01';
          }
          else if (lVar3 == 0x3bd87df4a7d98b1a) {
            local_80 = *(long *)(param_1 + 8);
            lVar4 = 0x7540863cdb93c084;
            if (local_80 != 0) {
              lVar4 = 0x27b2736658d1b07a;
            }
          }
        }
        else {
          lVar4 = 0x73501052812bd5dc;
          if (lVar3 != 0x4ba5c2207b5f7271) {
            if (lVar3 == 0x4eaa24646ecf2a97) {
              unaff_x26 = *(long *)(param_1 + 0x18);
              lVar4 = -0x4e8a24245efcdfc9;
              if (unaff_x26 != 0) {
                lVar4 = 0x5ee76b0ea5b62add;
              }
            }
            else {
              lVar4 = lVar3;
              if (lVar3 == 0x4f4865b8f07dabd7) {
                lVar4 = -0x6755ef159b3099de;
                if (DAT_001f806a == '\0') {
                  lVar4 = -0x40a14ef30cf62292;
                }
              }
            }
          }
        }
      }
      else if (lVar3 < 0x617674ba2325e188) {
        if (lVar3 < 0x5a7038b17f827b63) {
          lVar4 = 0x617674ba2325e188;
          if ((lVar3 != 0x5322482727433fd8) && (lVar4 = lVar3, lVar3 == 0x53aa85f26528c34a)) {
            lVar4 = -0xd8d1b6af7d6547;
          }
        }
        else {
          lVar4 = -0xd8d1b6af7d6547;
          if ((lVar3 != 0x5a7038b17f827b63) && (lVar4 = lVar3, lVar3 == 0x5ee76b0ea5b62add)) {
            lVar4 = -0x309c55bd80c35cf;
          }
        }
      }
      else if (lVar3 < 0x73501052812bd5dc) {
        if (lVar3 == 0x617674ba2325e188) {
          fVar5 = *param_2;
          *param_3 = *param_3 | 0x1000000;
          *param_2 = fVar5 + (1.0 - fVar5);
          lVar4 = -0xd8d1b6af7d6547;
        }
        else if (lVar3 == 0x69ebd5bb99b9777d) {
          DAT_001f7eb0 = 0;
          iVar2 = FUN_001ca28c(local_88,&DAT_001f6478);
          lVar4 = 0x5322482727433fd8;
          if (iVar2 != 0) {
            lVar4 = -0x1f9d2937c65951ea;
          }
        }
      }
      else if (lVar3 == 0x73501052812bd5dc) {
        iVar2 = FUN_001ebe70(0,1,&DAT_001f7eb0);
        lVar4 = 0x28375825e7f88427;
        if (iVar2 != 0) {
          lVar4 = -0x297aa2f04ab1a42c;
        }
      }
      else {
        lVar4 = -0x1eab910e901b5b36;
        if ((lVar3 != 0x7540863cdb93c084) && (lVar4 = lVar3, lVar3 == 0x79dac607102b1ee1)) {
          iVar2 = FUN_001ebe70(0,1,&DAT_001f7eb0);
          lVar4 = -0x39b9fd63147bee9a;
          if (iVar2 != 0) {
            lVar4 = -0x4ad4b0ab435bcac3;
          }
        }
      }
    }
    if (-0x1f9d2937c65951eb < lVar3) {
      if (lVar3 < -0x137d28a7f589972c) {
        if (lVar3 < -0x1d3bce0218eec9bf) {
          lVar4 = 0x4eaa24646ecf2a97;
          if ((lVar3 != -0x1f9d2937c65951ea) && (lVar4 = lVar3, lVar3 == -0x1eab910e901b5b36)) {
            local_88 = *(long *)(param_1 + 0x20);
            lVar4 = -0x137d28a7f589972c;
            if (local_88 != 0) {
              lVar4 = 0x4ba5c2207b5f7271;
            }
          }
        }
        else {
          lVar4 = 0x617674ba2325e188;
          if (((lVar3 != -0x1d3bce0218eec9bf) &&
              (lVar4 = -0x1eab910e901b5b36, lVar3 != -0x1b2342ba15a14d9a)) &&
             (lVar4 = lVar3, lVar3 == -0x13d3f17da1da9aeb)) {
            DAT_001f7eb0 = 0;
            iVar2 = FUN_001ca28c(local_80,&DAT_001f6478);
            lVar4 = -0x1d3bce0218eec9bf;
            if (iVar2 != 0) {
              lVar4 = -0x1b2342ba15a14d9a;
            }
          }
        }
      }
      else if (lVar3 < -0xd8d1b6af7d6547) {
        lVar4 = 0x4eaa24646ecf2a97;
        if ((lVar3 != -0x137d28a7f589972c) && (lVar4 = lVar3, lVar3 == -0x309c55bd80c35cf)) {
          iVar2 = FUN_001ebe70(0,1,&DAT_001f7eb0);
          lVar4 = 0x4f4865b8f07dabd7;
          if (iVar2 != 0) {
            lVar4 = -0x49c0cfd5c300061c;
          }
        }
      }
      else {
        if (lVar3 == 0xd3d903fc63d22e2) {
          lVar4 = 0x69ebd5bb99b9777d;
          goto LAB_00148e78;
        }
        lVar4 = 0x617674ba2325e188;
        if ((lVar3 != 0x24764e9eef6ba0e6) && (lVar4 = lVar3, lVar3 == -0xd8d1b6af7d6547)) {
          return;
        }
      }
      goto LAB_00148e88;
    }
    if (lVar3 < -0x49c0cfd5c300061c) {
      if (lVar3 < -0x4e8a24245efcdfc9) {
        lVar4 = lVar1;
        if ((lVar3 != -0x6fc9a32e2ddc38f5) && (lVar4 = lVar3, lVar3 == -0x6755ef159b3099de)) {
          lVar4 = 0x32afcd5dd70dbc79;
        }
      }
      else {
        lVar4 = -0xd8d1b6af7d6547;
        if ((lVar3 != -0x4e8a24245efcdfc9) && (lVar4 = lVar3, lVar3 == -0x4ad4b0ab435bcac3)) {
          lVar4 = 0x79dac607102b1ee1;
        }
      }
    }
    else if (lVar3 < -0x3f8fc2d321753db7) {
      lVar4 = -0x309c55bd80c35cf;
      if ((lVar3 != -0x49c0cfd5c300061c) && (lVar4 = lVar3, lVar3 == -0x40a14ef30cf62292)) {
        lVar4 = 0x32afcd5dd70dbc79;
        goto LAB_00148e78;
      }
    }
    else {
      lVar4 = 0x69ebd5bb99b9777d;
      if (lVar3 != -0x3f8fc2d321753db7) {
        if (lVar3 == -0x39b9fd63147bee9a) {
          lVar4 = 0x27a0bd2acfa770f7;
          if (DAT_001f806a == '\0') {
            lVar4 = 0x3b79e38b7570cd4d;
          }
        }
        else {
          lVar4 = lVar3;
          if (lVar3 == -0x297aa2f04ab1a42c) {
            lVar4 = 0x73501052812bd5dc;
          }
        }
      }
    }
  } while( true );
}


