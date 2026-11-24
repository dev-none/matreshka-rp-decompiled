// Function: FUN_001dd808
// Entry: 001dd808

void FUN_001dd808(int *param_1,long *param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  bool bVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x19;
  long *plVar12;
  ulong uVar13;
  undefined4 *unaff_x24;
  size_t local_a8;
  int local_9c;
  void *local_98;
  undefined4 *local_90;
  size_t local_88;
  int local_70;
  uint local_6c;
  long *local_68;
  
  local_88 = 0;
  lVar3 = tpidr_el0;
  local_68 = *(long **)(lVar3 + 0x28);
  uVar2 = 0x3303345eb4f85978;
  if (param_3 != 0) {
    uVar2 = 0xf9b878d6ad273076;
  }
  local_6c = 0;
  plVar4 = param_2;
  plVar5 = local_68;
  uVar7 = uVar2;
  uVar11 = 0x9ea3237b2a99da04;
LAB_001dd8ec:
  while( true ) {
    uVar10 = uVar11;
    plVar9 = plVar5;
    plVar8 = plVar4;
    plVar12 = (long *)((ulong)plVar8 & 0xffffffff);
    uVar13 = uVar7 & 0xffffffff;
    uVar11 = uVar10;
    plVar4 = plVar12;
    plVar5 = plVar9;
    if (0x494913e247ec80f < (long)uVar10) break;
    if ((long)uVar10 < -0x37bcec43bd9d08fe) {
      if ((long)uVar10 < -0x5ab7f064f0b58e71) {
        if (uVar10 == 0x80946337e81a76ad) {
          local_70 = 1;
LAB_001de08c:
          uVar7 = uVar13;
          uVar11 = 0xe3a89f94bb3e7e7e;
        }
        else if (uVar10 == 0x93f8f1d59ed66f09) {
          plVar5 = (long *)param_2[1];
          uVar7 = uVar13;
          uVar11 = 0x494913e247ec810;
        }
        else {
          uVar7 = uVar13;
          if (uVar10 == 0x9ea3237b2a99da04) {
            uVar11 = uVar2;
          }
        }
      }
      else if ((long)uVar10 < -0x3a9a787bdaa35b1e) {
        uVar7 = unaff_x19 & 0xffffffff;
        uVar11 = 0x859356aa69720d1;
        if ((uVar10 != 0xa6bc7238d5ae4537) &&
           (uVar7 = uVar13, uVar11 = uVar10, uVar10 == 0xa5480f9b0f4a718f)) {
          if (*(long **)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
      }
      else {
        if (uVar10 == 0xc5658784255ca4e2) {
          local_70 = 8;
          goto LAB_001de08c;
        }
        uVar7 = uVar13;
        if (uVar10 == 0xc82fc556374cfb04) goto LAB_001ddc28;
      }
    }
    else if ((long)uVar10 < -0xb6b4c3bb4fa6b5c) {
      uVar7 = uVar13;
      uVar11 = 0xa5480f9b0f4a718f;
      if (uVar10 != 0xc84313bc4262f702) {
        if (uVar10 == 0xdad5fc5726557d2b) {
          FUN_001dc360(param_1,local_98,local_a8,1,param_4);
          bVar6 = *param_1 == 0;
          uVar10 = 0xc84313bc4262f702;
          uVar11 = 0xf494b3c44b0594a4;
          goto LAB_001ddff0;
        }
        uVar11 = uVar10;
        if (uVar10 == 0xe3a89f94bb3e7e7e) {
          *param_1 = local_70;
          uVar11 = 0xa5480f9b0f4a718f;
        }
      }
    }
    else if (uVar10 == 0xf494b3c44b0594a4) {
      uVar1 = local_9c + local_6c + 4;
      unaff_x19 = (ulong)uVar1;
      uVar7 = uVar13;
      uVar11 = 0x3359a89ff97157ac;
      if (param_3 <= uVar1) {
        uVar11 = 0xa6bc7238d5ae4537;
      }
    }
    else if (uVar10 == 0xf9b878d6ad273076) {
      plVar4 = (long *)0x0;
      uVar7 = uVar13;
      uVar11 = 0x102f8ffd02923754;
    }
    else {
      uVar7 = uVar13;
      if (uVar10 == 0xfa5a19834426ec82) {
LAB_001ddc28:
        uVar7 = uVar13;
        uVar11 = 0xa5480f9b0f4a718f;
      }
    }
  }
  if ((long)uVar10 < 0x3359a89ff97157ac) {
    if (0x1666a35a3e139984 < (long)uVar10) {
      plVar5 = param_2;
      uVar7 = uVar13;
      uVar11 = 0x494913e247ec810;
      if (((uVar10 != 0x1666a35a3e139985) &&
          (plVar5 = plVar9, uVar11 = 0x7c9736501c5f4f0a, uVar10 != 0x297717612b720ee8)) &&
         (uVar11 = uVar10, uVar10 == 0x3303345eb4f85978)) {
        uVar7 = 0;
        uVar11 = 0x859356aa69720d1;
      }
      goto LAB_001dd8ec;
    }
    if (uVar10 == 0x494913e247ec810) {
      *plVar9 = (long)unaff_x24;
      param_2[1] = (long)local_90;
      uVar10 = 0x38b550c75dcbd861;
      uVar11 = 0x482e5862fb274eec;
      bVar6 = *param_1 == 0;
    }
    else {
      if (uVar10 != 0x859356aa69720d1) {
        uVar7 = uVar13;
        if (uVar10 == 0x102f8ffd02923754) {
          uVar7 = FUN_001dc360(param_1,&local_6c,4,1,param_4);
          uVar11 = 0x65f514c9e7f64775;
          if ((uVar7 & 1) == 0) {
            uVar11 = 0xfa5a19834426ec82;
          }
          local_9c = (int)plVar8;
          plVar4 = (long *)((ulong)plVar8 & 0xffffffff);
          uVar7 = uVar13;
        }
        goto LAB_001dd8ec;
      }
      bVar6 = (uint)uVar7 == param_3;
      uVar10 = 0xc5658784255ca4e2;
      uVar11 = 0xc82fc556374cfb04;
    }
  }
  else {
    if ((long)uVar10 < 0x482e5862fb274eec) {
      plVar4 = (long *)(unaff_x19 & 0xffffffff);
      uVar7 = uVar13;
      uVar11 = 0x102f8ffd02923754;
      if (((uVar10 != 0x3359a89ff97157ac) &&
          (plVar4 = plVar12, uVar11 = 0xa5480f9b0f4a718f, uVar10 != 0x38b550c75dcbd861)) &&
         (uVar11 = uVar10, uVar10 == 0x45f288ff0a7ea1de)) {
        *param_1 = 1;
        uVar11 = 0x7c9736501c5f4f0a;
      }
      goto LAB_001dd8ec;
    }
    if (uVar10 == 0x482e5862fb274eec) {
      local_a8 = local_88;
      *unaff_x24 = (int)local_88;
      local_98 = calloc(1,local_88);
      uVar11 = 0x80946337e81a76ad;
      if (local_98 != (void *)0x0) {
        uVar11 = 0xdad5fc5726557d2b;
      }
      *(void **)(unaff_x24 + 2) = local_98;
      uVar7 = uVar13;
      goto LAB_001dd8ec;
    }
    if (uVar10 == 0x65f514c9e7f64775) {
      local_88 = (size_t)local_6c;
      unaff_x24 = calloc(1,0x18);
      uVar7 = uVar13;
      uVar11 = 0x45f288ff0a7ea1de;
      if (unaff_x24 != (undefined4 *)0x0) {
        uVar11 = 0x297717612b720ee8;
      }
      goto LAB_001dd8ec;
    }
    uVar7 = uVar13;
    if (uVar10 != 0x7c9736501c5f4f0a) goto LAB_001dd8ec;
    local_90 = unaff_x24 + 4;
    bVar6 = *param_2 == 0;
    uVar10 = 0x93f8f1d59ed66f09;
    uVar11 = 0x1666a35a3e139985;
  }
LAB_001ddff0:
  uVar7 = uVar13;
  if (!bVar6) {
    uVar11 = uVar10;
  }
  goto LAB_001dd8ec;
}


