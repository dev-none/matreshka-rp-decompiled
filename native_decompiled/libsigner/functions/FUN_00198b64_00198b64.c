// Function: FUN_00198b64
// Entry: 00198b64

uint FUN_00198b64(long *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long *unaff_x19;
  long *unaff_x20;
  uint unaff_w28;
  long local_e0 [4];
  undefined1 auStack_c0 [8];
  long local_b8;
  uint local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  long local_80;
  long local_78;
  
  local_98 = param_5;
  uStack_90 = param_6;
  local_a8 = param_3;
  local_a0 = param_4;
  local_b8 = tpidr_el0;
  local_78 = *(long *)(local_b8 + 0x28);
  plVar2 = (long *)auStack_c0;
  lVar1 = -0x255429dbcbdc462b;
LAB_00198c24:
  while( true ) {
    while (lVar4 = lVar1, lVar1 = lVar4, lVar4 < 0x102f8ffd02923754) {
      if (lVar4 < -0x255429dbcbdc462b) {
        if (lVar4 < -0x615cdc84d56625fc) {
          if (lVar4 == -0x7f6b9cc817e58953) {
            (**(code **)(*param_1 + 0xb8))(param_1,local_88);
            lVar1 = -0x252a03a8d9aa82d5;
          }
          else if (lVar4 == -0x6c070e2a612990f7) {
            lVar1 = 0x38b550c75dcbd861;
          }
        }
        else if (lVar4 == -0x615cdc84d56625fc) {
          DAT_001f8270 = 0;
          unaff_x19 = plVar2 + -2;
          unaff_x20 = plVar2 + -4;
          plVar2[-2] = 0;
          plVar2[-4] = 0;
          FUN_0017abec(param_2,param_1,&DAT_001f7360,unaff_x19);
          plVar2 = unaff_x20;
          lVar1 = -0x647872952d8cf8a;
          if (*param_2 != 0) {
            lVar1 = 0x3303345eb4f85978;
          }
        }
        else if (lVar4 == -0x556288319bfdcffb) {
          iVar3 = FUN_001ebe70(0,1,&DAT_001f8270);
          lVar1 = -0x37bcec43bd9d08fe;
          if (iVar3 != 0) {
            lVar1 = 0x36fa2d308e82c2f8;
          }
        }
        else if (lVar4 == -0x37bcec43bd9d08fe) {
          lVar1 = -0xb6b4c3bb4fa6b5c;
          if (DAT_001f8270._1_1_ == '\0') {
            lVar1 = 0x129b99854ca09618;
          }
        }
      }
      else if (lVar4 < -0x647872952d8cf8a) {
        lVar1 = -0x556288319bfdcffb;
        if (((lVar4 != -0x255429dbcbdc462b) &&
            (lVar1 = -0x615cdc84d56625fc, lVar4 != -0xb6b4c3bb4fa6b5c)) &&
           (lVar1 = lVar4, lVar4 == -0x252a03a8d9aa82d5)) {
          if (*(long *)(local_b8 + 0x28) == local_78) {
            return local_ac & 1;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
      }
      else if (lVar4 == -0x647872952d8cf8a) {
        FUN_0017bb60(param_2,param_1,*unaff_x19,local_a0);
        lVar1 = -0x5a5e67cbbd9137e;
        if (*param_2 != 0) {
          lVar1 = 0x102f8ffd02923754;
        }
      }
      else if (lVar4 == -0x5a5e67cbbd9137e) {
        FUN_0017c5a0(param_2,param_1,*unaff_x19,local_a8);
        lVar1 = 0x297717612b720ee8;
        if (*param_2 != 0) {
          lVar1 = 0x65f514c9e7f64775;
        }
      }
      else if (lVar4 == 0x494913e247ec810) {
        (**(code **)(*param_1 + 0xb8))(param_1,local_80);
        lVar1 = 0x38b550c75dcbd861;
      }
    }
    if (0x36fa2d308e82c2f7 < lVar4) break;
    if (lVar4 < 0x1666a35a3e139985) {
      if (lVar4 == 0x102f8ffd02923754) goto LAB_00198fe0;
      if (lVar4 == 0x129b99854ca09618) {
        DAT_001f7368 = DAT_001f7368 ^ 0xc4;
        DAT_001f736a = DAT_001f736a ^ 0xc4;
        DAT_001f7369 = DAT_001f7369 ^ 0xc4;
        DAT_001f7360 = DAT_001f7360 ^ 0xc4c4c4c4c4c4c4c4;
        DAT_001f8270._0_2_ = CONCAT11(1,(undefined1)DAT_001f8270);
        lVar1 = -0x615cdc84d56625fc;
      }
    }
    else if (lVar4 == 0x1666a35a3e139985) {
      local_ac = unaff_w28;
      local_80 = *unaff_x20;
      lVar1 = 0x494913e247ec810;
      if (*unaff_x20 == 0 || param_1 == (long *)0x0) {
        lVar1 = -0x6c070e2a612990f7;
      }
    }
    else if (lVar4 == 0x297717612b720ee8) {
      FUN_0017cfd0(param_2,param_1,*unaff_x19,unaff_x20);
      lVar1 = 0x7c9736501c5f4f0a;
      if (*param_2 != 0) {
        lVar1 = 0x45f288ff0a7ea1de;
      }
    }
    else if (lVar4 == 0x3303345eb4f85978) goto LAB_00198fe0;
  }
  if (lVar4 < 0x482e5862fb274eec) {
    lVar1 = -0x556288319bfdcffb;
    if (lVar4 == 0x36fa2d308e82c2f8) goto LAB_00198c24;
    if (lVar4 == 0x38b550c75dcbd861) {
      lVar4 = *unaff_x19;
      *unaff_x20 = 0;
      local_88 = lVar4;
      lVar1 = -0x7f6b9cc817e58953;
      if (lVar4 == 0 || param_1 == (long *)0x0) {
        lVar1 = 0x482e5862fb274eec;
      }
      goto LAB_00198c24;
    }
    lVar1 = lVar4;
    if (lVar4 != 0x45f288ff0a7ea1de) goto LAB_00198c24;
  }
  else {
    lVar1 = -0x252a03a8d9aa82d5;
    if (lVar4 == 0x482e5862fb274eec) goto LAB_00198c24;
    if (lVar4 != 0x65f514c9e7f64775) {
      lVar1 = lVar4;
      if (lVar4 == 0x7c9736501c5f4f0a) {
        FUN_0016dae0(param_2,param_1,*unaff_x20,local_98,uStack_90);
        unaff_w28 = (uint)(*param_2 == 0);
        lVar1 = 0x1666a35a3e139985;
      }
      goto LAB_00198c24;
    }
  }
LAB_00198fe0:
  unaff_w28 = 0;
  lVar1 = 0x1666a35a3e139985;
  goto LAB_00198c24;
}


