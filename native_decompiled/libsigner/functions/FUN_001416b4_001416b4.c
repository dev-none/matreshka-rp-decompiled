// Function: FUN_001416b4
// Entry: 001416b4

void FUN_001416b4(long param_1,float *param_2,ulong *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x24;
  int unaff_w25;
  float fVar5;
  
  lVar1 = 0x53ad69879913a7a6;
  if (param_1 != 0) {
    lVar1 = -0xffc3b35787e27a3;
  }
  lVar3 = 0x2926bc7d6aba0697;
LAB_001417b0:
  do {
    while( true ) {
      while (lVar4 = lVar3, lVar3 = lVar4, lVar4 < -0x481b0cc4e6e4617) {
        if (lVar4 < -0x250121cd3ef6875a) {
          if (lVar4 < -0x37c70b404c5d0c8c) {
            if (lVar4 == -0x6b4b505070bf48e0) {
              iVar2 = FUN_001ebe70(0,1,&DAT_001f7c9c);
              lVar3 = 0x7bebf822e0fb480a;
              if (iVar2 != 0) {
                lVar3 = -0x561fe9193792aded;
              }
            }
            else if (lVar4 == -0x561fe9193792aded) {
              lVar3 = -0x6b4b505070bf48e0;
            }
          }
          else if (lVar4 == -0x37c70b404c5d0c8c) {
            DAT_001f7c9c = 0;
            iVar2 = FUN_001ca1a8(unaff_x24);
            unaff_w25 = FUN_001ca1a8(&DAT_001f5918);
            lVar3 = 0x710acc9fe209d2ec;
            if (unaff_w25 <= iVar2) {
              lVar3 = 0x385fd830ca3a01df;
            }
          }
          else if (lVar4 == -0x37a13f717cc050a8) {
            iVar2 = FUN_001ebe70(0,1,&DAT_001f7c9c);
            lVar3 = -0x2805554c9c5bf9e0;
            if (iVar2 != 0) {
              lVar3 = 0x319f548f5baf7ca1;
            }
          }
          else if (lVar4 == -0x2805554c9c5bf9e0) {
            lVar3 = 0x531148fad19d21a6;
            if (DAT_001f7fe5 == '\0') {
              lVar3 = 0x2e34c998e8575e1;
            }
          }
        }
        else if (lVar4 < -0xffc3b35787e27a3) {
          lVar3 = -0x481b0cc4e6e4617;
          if (((lVar4 != -0x250121cd3ef6875a) &&
              (lVar3 = -0xf3469fc76bd0395, lVar4 != -0x1739851c2d563111)) &&
             (lVar3 = lVar4, lVar4 == -0x15d0825e0fa092c9)) {
            fVar5 = *param_2;
            *param_3 = *param_3 | 0x800;
            *param_2 = fVar5 + (1.0 - fVar5) * 0.3;
            lVar3 = -0xf3469fc76bd0395;
          }
        }
        else if (lVar4 == -0xffc3b35787e27a3) {
          unaff_x24 = *(long *)(param_1 + 0x30);
          lVar3 = 0x7dc7e8c205614577;
          if (unaff_x24 == 0 || param_3 == (ulong *)0x0) {
            lVar3 = -0x1739851c2d563111;
          }
        }
        else {
          lVar3 = -0xf3469fc76bd0395;
          if ((lVar4 != -0x82b2863b2e80c81) && (lVar3 = lVar4, lVar4 == -0xf3469fc76bd0395)) {
            return;
          }
        }
      }
      if (lVar4 < 0x531148fad19d21a6) break;
      if (lVar4 < 0x7517d6c03709e395) {
        lVar3 = -0x37c70b404c5d0c8c;
        if (((lVar4 != 0x531148fad19d21a6) &&
            (lVar3 = -0xf3469fc76bd0395, lVar4 != 0x53ad69879913a7a6)) &&
           (lVar3 = lVar4, lVar4 == 0x710acc9fe209d2ec)) {
          lVar3 = -0xf3469fc76bd0395;
        }
      }
      else if (lVar4 == 0x7517d6c03709e395) {
        lVar3 = -0x481b0cc4e6e4617;
LAB_0014179c:
        DAT_001f5918 = DAT_001f5918 ^ 0x1818181818181818;
        DAT_001f7fe5 = '\x01';
      }
      else if (lVar4 == 0x7bebf822e0fb480a) {
        lVar3 = -0x250121cd3ef6875a;
        if (DAT_001f7fe5 == '\0') {
          lVar3 = 0x7517d6c03709e395;
        }
      }
      else if (lVar4 == 0x7dc7e8c205614577) {
        lVar3 = -0x37a13f717cc050a8;
      }
    }
    if (0x2926bc7d6aba0696 < lVar4) {
      lVar3 = lVar1;
      if (((lVar4 != 0x2926bc7d6aba0697) &&
          (lVar3 = -0x37a13f717cc050a8, lVar4 != 0x319f548f5baf7ca1)) &&
         (lVar3 = lVar4, lVar4 == 0x385fd830ca3a01df)) {
        lVar3 = -0x6b4b505070bf48e0;
      }
      goto LAB_001417b0;
    }
    if (lVar4 == -0x481b0cc4e6e4617) {
      DAT_001f7c9c = 0;
      iVar2 = FUN_001cb8f0(unaff_x24,&DAT_001f5918,(long)unaff_w25);
      lVar3 = -0x15d0825e0fa092c9;
      if (iVar2 != 0) {
        lVar3 = -0x82b2863b2e80c81;
      }
    }
    else if (lVar4 == 0x2e34c998e8575e1) {
      lVar3 = -0x37c70b404c5d0c8c;
      goto LAB_0014179c;
    }
  } while( true );
}


