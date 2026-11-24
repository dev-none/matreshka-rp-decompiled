// Function: FUN_0016dae0
// Entry: 0016dae0

void FUN_0016dae0(int *param_1,long *param_2,long param_3,undefined8 *param_4,size_t *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  size_t unaff_x24;
  int unaff_w25;
  void *unaff_x26;
  int unaff_w27;
  
  lVar1 = 0x65f514c9e7f64775;
  if (param_3 != 0) {
    lVar1 = 0x297717612b720ee8;
  }
  lVar2 = -0x5a5e67cbbd9137e;
  do {
    while( true ) {
      do {
        while( true ) {
          while( true ) {
            while (lVar3 = lVar2, lVar2 = lVar3, lVar3 < 0x859356aa69720d1) {
              if (lVar3 < -0x252a03a8d9aa82d5) {
                if (lVar3 < -0x59438dc72a51bac9) {
                  if (lVar3 == -0x7f6b9cc817e58953) {
                    *param_5 = unaff_x24;
                    *param_4 = unaff_x26;
                    lVar2 = -0x37bcec43bd9d08fe;
                    if (*param_1 != 0) {
                      lVar2 = -0x252a03a8d9aa82d5;
                    }
                  }
                  else if (lVar3 == -0x6c070e2a612990f7) {
                    unaff_x24 = (size_t)unaff_w25;
                    unaff_x26 = calloc(unaff_x24,1);
                    lVar2 = 0x494913e247ec810;
                    if (unaff_x26 != (void *)0x0) {
                      lVar2 = 0x38b550c75dcbd861;
                    }
                  }
                }
                else if (lVar3 == -0x59438dc72a51bac9) {
                  *param_1 = unaff_w27;
                  lVar2 = 0x3359a89ff97157ac;
                }
                else if (lVar3 == -0x37bcec43bd9d08fe) {
                  lVar2 = 0x859356aa69720d1;
                }
              }
              else if (lVar3 < -0x5a5e67cbbd9137e) {
                lVar2 = 0x3359a89ff97157ac;
                if ((lVar3 != -0x252a03a8d9aa82d5) && (lVar2 = lVar3, lVar3 == -0xb6b4c3bb4fa6b5c))
                {
                  (**(code **)(*param_2 + 0x80))(param_2);
                  (**(code **)(*param_2 + 0x88))(param_2);
                  unaff_w27 = 0x19;
                  lVar2 = -0x59438dc72a51bac9;
                }
              }
              else {
                lVar2 = lVar1;
                if ((lVar3 != -0x5a5e67cbbd9137e) && (lVar2 = lVar3, lVar3 == 0x494913e247ec810)) {
                  unaff_w27 = 2;
                  lVar2 = -0x59438dc72a51bac9;
                }
              }
            }
            if (lVar3 < 0x45f288ff0a7ea1de) break;
            if (lVar3 < 0x65f514c9e7f64775) {
              lVar2 = -0xb6b4c3bb4fa6b5c;
              if ((lVar3 != 0x45f288ff0a7ea1de) && (lVar2 = lVar3, lVar3 == 0x482e5862fb274eec)) {
                lVar2 = -0xb6b4c3bb4fa6b5c;
              }
            }
            else if (lVar3 == 0x65f514c9e7f64775) {
              unaff_w27 = 3;
              lVar2 = -0x59438dc72a51bac9;
            }
            else if (lVar3 == 0x7c9736501c5f4f0a) {
              lVar2 = -0x6c070e2a612990f7;
              if (*param_1 != 0) {
                lVar2 = 0x1666a35a3e139985;
              }
            }
          }
          if (lVar3 < 0x3359a89ff97157ac) break;
          if (lVar3 == 0x3359a89ff97157ac) {
            *param_5 = 0;
            *param_4 = 0;
            lVar2 = 0x859356aa69720d1;
          }
          else if (lVar3 == 0x38b550c75dcbd861) {
            (**(code **)(*param_2 + 0x640))(param_2,param_3,0,unaff_w25,unaff_x26);
            lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar2 = -0x7f6b9cc817e58953;
            if (lVar3 != 0) {
              lVar2 = 0x482e5862fb274eec;
            }
          }
        }
        lVar2 = 0x3359a89ff97157ac;
      } while (lVar3 == 0x1666a35a3e139985);
      if (lVar3 != 0x297717612b720ee8) break;
      unaff_w25 = (**(code **)(*param_2 + 0x558))(param_2,param_3);
      lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
      lVar2 = 0x7c9736501c5f4f0a;
      if (lVar3 != 0) {
        lVar2 = 0x45f288ff0a7ea1de;
      }
    }
    lVar2 = lVar3;
  } while (lVar3 != 0x859356aa69720d1);
  return;
}


