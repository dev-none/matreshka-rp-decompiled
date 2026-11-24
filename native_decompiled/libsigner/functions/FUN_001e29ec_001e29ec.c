// Function: FUN_001e29ec
// Entry: 001e29ec

void FUN_001e29ec(int *param_1,ulong param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  uint unaff_w20;
  ulong unaff_x24;
  int iVar10;
  ulong uVar11;
  int local_80;
  uint local_70;
  int local_6c;
  ulong local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(ulong *)(lVar2 + 0x28);
  local_70 = 0;
  uVar5 = param_2;
  uVar6 = local_68;
  lVar7 = 0x234631381c95917;
LAB_001e2adc:
  do {
    while( true ) {
      lVar8 = lVar7;
      uVar9 = uVar6 & 0xffffffff;
      uVar11 = uVar5 & 0xffffffff;
      iVar10 = (int)uVar5;
      lVar7 = lVar8;
      uVar5 = uVar11;
      if (lVar8 < 0x2583f3295d26c72) break;
      if (lVar8 < 0x5847f4142010501f) {
        if (lVar8 < 0x1f1b1150db66d00d) {
          uVar6 = uVar9;
          lVar7 = -0x4e944ab97fb0767a;
          if (lVar8 != 0x2583f3295d26c72) {
            uVar6 = unaff_x24 & 0xffffffff;
            lVar7 = -0x2b4bbd77afad9498;
            if ((lVar8 != 0x6ee5bc0885d24dc) &&
               (uVar6 = uVar9, lVar7 = lVar8, lVar8 == 0x1022c6f24a7f67ef)) {
              lVar7 = -0x4e944ab97fb0767a;
            }
          }
        }
        else {
          uVar5 = unaff_x24 & 0xffffffff;
          uVar6 = uVar9;
          lVar7 = 0x47e69b36ea2f4aee;
          if (lVar8 != 0x1f1b1150db66d00d) {
            if (lVar8 == 0x22b999fe7ba950f8) {
              uVar5 = uVar11;
              lVar7 = 0x79cef8aa849ce9df;
              unaff_w20 = local_70;
              if (local_70 + 4 <= param_3) {
                lVar7 = 0x5b1704f1c1f5e001;
              }
            }
            else {
              uVar5 = uVar11;
              lVar7 = lVar8;
              if (lVar8 == 0x47e69b36ea2f4aee) {
                uVar4 = FUN_001dc360(param_1,&local_6c,4,1,param_4);
                lVar7 = 0x5847f4142010501f;
                local_80 = iVar10;
                if ((uVar4 & 1) == 0) {
                  lVar7 = -0x7ae785cbc6a1d824;
                }
              }
            }
          }
        }
      }
      else if (lVar8 < 0x68e9eef73caee0ca) {
        if (lVar8 == 0x5847f4142010501f) {
          FUN_001e164c(param_1,param_2,local_6c,param_4);
          bVar3 = *param_1 == 0;
          lVar7 = -0x6aa7492f140c06ee;
          lVar8 = -0x79fed34670c0dc34;
LAB_001e2ad0:
          uVar6 = uVar9;
          if (!bVar3) {
            lVar7 = lVar8;
          }
        }
        else if (lVar8 == 0x5b1704f1c1f5e001) {
          lVar7 = -0x25f88141516142db;
          if (unaff_w20 != 0) {
            lVar7 = -0x2896e27364a1da3f;
          }
          local_6c = 0;
          uVar6 = uVar9;
        }
        else {
          uVar6 = uVar9;
          if (lVar8 == 0x619c4635ae2a2aef) {
            bVar3 = *param_1 == 0;
            lVar8 = 0x68e9eef73caee0ca;
            lVar7 = -0x5f4ad0a0148f22e;
LAB_001e3050:
            uVar6 = uVar9;
            if (!bVar3) {
              lVar7 = lVar8;
            }
          }
        }
      }
      else {
        uVar6 = uVar9;
        lVar7 = -0x4e944ab97fb0767a;
        if (((lVar8 != 0x68e9eef73caee0ca) && (lVar8 != 0x6ea5f6ad327d8cfb)) &&
           (lVar7 = lVar8, lVar8 == 0x79cef8aa849ce9df)) {
LAB_001e2f58:
          lVar7 = -0x4e944ab97fb0767a;
LAB_001e30e0:
          *param_1 = 8;
          uVar6 = uVar9;
        }
      }
    }
    if (lVar8 < -0x4e944ab97fb0767a) {
      lVar7 = 0x619c4635ae2a2aef;
      if (lVar8 < -0x680189225e7a2da1) {
        uVar6 = uVar9;
        if (((lVar8 != -0x7ae785cbc6a1d824) &&
            (lVar7 = 0x1022c6f24a7f67ef, lVar8 != -0x79fed34670c0dc34)) &&
           (lVar7 = lVar8, lVar8 == -0x6aa7492f140c06ee)) {
          uVar1 = local_80 + local_6c + 4;
          unaff_x24 = (ulong)uVar1;
          lVar7 = 0x1f1b1150db66d00d;
          if (unaff_w20 <= uVar1) {
            lVar7 = 0x6ee5bc0885d24dc;
          }
        }
      }
      else {
        uVar6 = uVar9;
        if (lVar8 != -0x680189225e7a2da1) {
          if (lVar8 == -0x57072be448d4c849) {
            lVar7 = 0x1022c6f24a7f67ef;
            goto LAB_001e30e0;
          }
          lVar7 = lVar8;
          if (lVar8 == -0x53ae62bfdb3205cc) goto LAB_001e2f58;
        }
      }
      goto LAB_001e2adc;
    }
    if (lVar8 < -0x25f88141516142db) {
      if (lVar8 == -0x2b4bbd77afad9498) {
        lVar7 = -0x680189225e7a2da1;
        lVar8 = -0x57072be448d4c849;
        bVar3 = (uint)uVar6 == unaff_w20;
        goto LAB_001e3050;
      }
      if (lVar8 == -0x2896e27364a1da3f) {
        uVar5 = 0;
        uVar6 = uVar9;
        lVar7 = 0x47e69b36ea2f4aee;
      }
      else {
        uVar6 = uVar9;
        if (lVar8 == -0x4e944ab97fb0767a) {
          if (*(ulong *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
      }
    }
    else if (lVar8 == -0x25f88141516142db) {
      uVar6 = 0;
      lVar7 = -0x2b4bbd77afad9498;
    }
    else {
      if (lVar8 == -0x5f4ad0a0148f22e) {
        bVar3 = local_70 + 4 == param_3;
        lVar8 = -0x53ae62bfdb3205cc;
        lVar7 = 0x6ea5f6ad327d8cfb;
        goto LAB_001e2ad0;
      }
      uVar6 = uVar9;
      if (lVar8 == 0x234631381c95917) {
        uVar11 = FUN_001dc360(param_1,&local_70,4,1,param_4);
        lVar7 = 0x22b999fe7ba950f8;
        if ((uVar11 & 1) == 0) {
          lVar7 = 0x2583f3295d26c72;
        }
      }
    }
  } while( true );
}


