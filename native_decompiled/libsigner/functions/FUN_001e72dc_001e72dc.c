// Function: FUN_001e72dc
// Entry: 001e72dc

uint FUN_001e72dc(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined1 *unaff_x22;
  undefined1 *unaff_x23;
  undefined8 *unaff_x27;
  long unaff_x28;
  long local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  long lStack_a0;
  undefined1 *local_98;
  long local_90;
  long local_88;
  undefined1 *local_80;
  uint local_74;
  ulong local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  puVar8 = *(undefined8 **)PTR_PTR_001f1028;
  puVar1 = (undefined1 *)0x7772f905052e4c0f;
  if (puVar8 != (undefined8 *)0x0) {
    puVar1 = (undefined1 *)0xae2d64bf93f1b31a;
  }
  puVar3 = (undefined1 *)0xae2d64bf93f1b31a;
  puVar4 = (undefined1 *)0x21d53de2b345f472;
LAB_001e75a0:
  while( true ) {
    puVar9 = puVar4;
    puVar7 = puVar3;
    lVar5 = param_1;
    param_1 = lVar5;
    puVar3 = puVar7;
    puVar4 = puVar9;
    if ((long)puVar9 < 0x3a4ee4b4cd18045) break;
    if ((long)puVar9 < 0x3f365012db6b56c1) {
      if ((long)puVar9 < 0x21d53de2b345f472) {
        puVar4 = (undefined1 *)0xe156d0b4a667ab8e;
        if (((puVar9 != (undefined1 *)0x3a4ee4b4cd18045) &&
            (puVar4 = puVar9, puVar9 == (undefined1 *)0x12b21488b9618371)) &&
           (puVar4 = (undefined1 *)0xcb528befcd0fb52f, unaff_x22 = puVar7, local_b8 = lVar5,
           local_80 <= puVar7)) {
          puVar4 = (undefined1 *)0x3a4ee4b4cd18045;
        }
      }
      else {
        puVar4 = puVar1;
        if ((puVar9 != (undefined1 *)0x21d53de2b345f472) &&
           (puVar4 = puVar9, puVar9 == (undefined1 *)0x2467c250713f82d4)) {
          puVar4 = (undefined1 *)0xe5248230beacb780;
        }
      }
    }
    else if ((long)puVar9 < 0x6b9fb694821e6034) {
      puVar4 = (undefined1 *)0xe5248230beacb780;
      if (((puVar9 != (undefined1 *)0x3f365012db6b56c1) &&
          (puVar4 = (undefined1 *)0xe156d0b4a667ab8e, puVar9 != (undefined1 *)0x5e1b922e6e5165fd))
         && (puVar4 = puVar9, puVar9 == (undefined1 *)0x4c1b9edb721e7222)) {
        if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return local_74 & 1;
      }
    }
    else if (puVar9 == &DAT_6b9fb694821e6034) {
      local_80 = *(undefined1 **)(PTR_PTR_001f1030 + local_90 * 8);
      param_1 = 0;
      puVar3 = local_98;
      puVar4 = (undefined1 *)0x12b21488b9618371;
    }
    else if (puVar9 == (undefined1 *)0x7772f905052e4c0f) goto LAB_001e783c;
  }
  if ((long)puVar9 < -0x23922d8f9e1450cc) {
    if ((long)puVar9 < -0x34ad741032f04ad1) {
      param_1 = unaff_x28;
      puVar3 = unaff_x23;
      puVar4 = (undefined1 *)0x12b21488b9618371;
      if ((puVar9 != (undefined1 *)0xa0d7c67c60e7a82e) &&
         (param_1 = lVar5, puVar3 = puVar7, puVar4 = puVar9,
         puVar9 == (undefined1 *)0xae2d64bf93f1b31a)) {
        local_88 = 0;
        puVar4 = (undefined1 *)0xdc6dd27061ebaf34;
        unaff_x27 = puVar8;
      }
      goto LAB_001e75a0;
    }
    if (puVar9 == (undefined1 *)0xcb528befcd0fb52f) {
      uVar6 = (long)local_80 - (long)unaff_x22;
      local_70 = 0;
      if (7 < uVar6) {
        uVar6 = 8;
      }
      __memcpy_chk(&local_70,unaff_x22,uVar6,8);
      puVar4 = (undefined1 *)0xde0600f0ca761eb9;
      if ((local_70 & 0xfffffc1fff000000) != 0xd61f000058000000) {
        puVar4 = (undefined1 *)0x5e1b922e6e5165fd;
      }
      goto LAB_001e75a0;
    }
    if (puVar9 != (undefined1 *)0xd937f9741a083d9f) goto LAB_001e75a0;
LAB_001e783c:
    local_74 = 0;
  }
  else {
    if (-0x1ea92f4b59985473 < (long)puVar9) {
      if (puVar9 == (undefined1 *)0xe156d0b4a667ab8e) {
        unaff_x28 = local_b8 + 1;
        unaff_x23 = (undefined1 *)local_b0[unaff_x28];
        puVar4 = (undefined1 *)0x2467c250713f82d4;
        if (unaff_x23 != (undefined1 *)0x0) {
          puVar4 = (undefined1 *)0xa0d7c67c60e7a82e;
        }
      }
      else if (puVar9 == (undefined1 *)0xe5248230beacb780) {
        lStack_a0 = local_90 + 1;
        local_a8 = (undefined8 *)(&PTR_PTR_001f74a8)[lStack_a0];
        puVar4 = (undefined1 *)0xd937f9741a083d9f;
        if (local_a8 != (undefined8 *)0x0) {
          puVar4 = (undefined1 *)0xf8b8c954db367ca1;
        }
      }
      else if (puVar9 == (undefined1 *)0xf8b8c954db367ca1) {
        local_88 = lStack_a0;
        puVar4 = (undefined1 *)0xdc6dd27061ebaf34;
        unaff_x27 = local_a8;
      }
      goto LAB_001e75a0;
    }
    if (puVar9 == (undefined1 *)0xdc6dd27061ebaf34) {
      local_98 = (undefined1 *)*unaff_x27;
      local_90 = local_88;
      puVar4 = (undefined1 *)0x3f365012db6b56c1;
      local_b0 = unaff_x27;
      if (local_98 != (undefined1 *)0x0) {
        puVar4 = &DAT_6b9fb694821e6034;
      }
      goto LAB_001e75a0;
    }
    if (puVar9 != (undefined1 *)0xde0600f0ca761eb9) goto LAB_001e75a0;
    local_74 = 1;
  }
  puVar4 = (undefined1 *)0x4c1b9edb721e7222;
  goto LAB_001e75a0;
}


