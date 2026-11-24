// Function: FUN_001e2250
// Entry: 001e2250

void FUN_001e2250(long *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  bool bVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  void *unaff_x20;
  void *unaff_x21;
  long *unaff_x22;
  void *unaff_x28;
  void *local_98;
  void *local_90;
  void *local_88;
  undefined8 *local_80;
  void *local_78;
  
  pvVar5 = (void *)*param_1;
  pvVar1 = (void *)0x7dfcf83e979bea6c;
  if (pvVar5 != (void *)0x0) {
    pvVar1 = (void *)0xbc0fbbd041b9bba8;
  }
  pvVar2 = pvVar1;
  pvVar3 = (void *)0xbc0fbbd041b9bba8;
  pvVar8 = (void *)0x686aafe978de1dba;
LAB_001e2318:
  while (pvVar9 = pvVar8, pvVar7 = pvVar3, pvVar6 = pvVar2, pvVar2 = pvVar6, pvVar3 = pvVar7,
        -0x14f8c4e896943238 < (long)pvVar9) {
    if ((long)pvVar9 < 0x3db6504342eeb5c6) {
      if ((long)pvVar9 < 0xcb1f7856ef3e66a) {
        if (pvVar9 == (void *)0xeb073b17696bcdc9) {
          FUN_001dfb8c(unaff_x28);
          unaff_x22 = (long *)((long)unaff_x28 + 0x30);
          local_90 = (void *)*unaff_x22;
          pvVar8 = (void *)0xa27c62af2d6dcaf6;
          if (local_90 != (void *)0x0) {
            pvVar8 = (void *)0xc4aa98abb898077d;
          }
        }
        else if (pvVar9 == (void *)0xf7083e4f8e47ca01) {
          free(local_98);
LAB_001e2300:
          pvVar8 = (void *)0xc71b089b254c91b3;
        }
        else {
          pvVar8 = pvVar9;
          if (pvVar9 == (void *)0xfd02fc71a4ea4436) {
            *local_80 = unaff_x22;
            pvVar8 = (void *)0x3db6504342eeb5c6;
          }
        }
      }
      else {
        pvVar8 = (void *)0x5b07d13b9a2c4c47;
        if (pvVar9 != (void *)0xcb1f7856ef3e66a) {
          if (pvVar9 == (void *)0x1a25b2068074ba47) {
            pvVar8 = (void *)0xfd02fc71a4ea4436;
            if (*(long *)((long)pvVar6 + 0x10) != 0) {
              pvVar8 = (void *)0x9074b6ca19dae9b1;
            }
            *unaff_x22 = *(long *)((long)pvVar6 + 0x10);
            local_78 = pvVar6;
          }
          else {
            pvVar8 = pvVar9;
            if (pvVar9 == (void *)0x3cfbe864c3a77289) {
              pvVar8 = (void *)0x91c74cc45d93383c;
              if (*(long *)((long)pvVar7 + 0x50) != 0) {
                pvVar8 = (void *)0x5a3aced94a588832;
              }
              *param_1 = *(long *)((long)pvVar7 + 0x50);
              unaff_x28 = pvVar7;
            }
          }
        }
      }
    }
    else if ((long)pvVar9 < 0x5b07d13b9a2c4c47) {
      if (pvVar9 == (void *)0x3db6504342eeb5c6) {
        local_88 = *(void **)((long)local_78 + 8);
        pvVar8 = (void *)0xcb37af3a57b0e717;
        bVar4 = local_88 == (void *)0x0;
        pvVar6 = (void *)0xad146a83ab6517cf;
        goto LAB_001e2968;
      }
      pvVar8 = (void *)0xea4c9f5ab4b68916;
      if ((pvVar9 != (void *)0x50fa2b6150a290e8) &&
         (pvVar8 = pvVar9, pvVar9 == (void *)0x5a3aced94a588832)) {
        pvVar8 = (void *)0xeb073b17696bcdc9;
      }
    }
    else if ((long)pvVar9 < 0x69e4dec6b0ebb25c) {
      pvVar8 = pvVar1;
      if ((pvVar9 != (void *)0x686aafe978de1dba) &&
         (pvVar8 = pvVar9, pvVar9 == (void *)0x5b07d13b9a2c4c47)) {
        *param_1 = 0;
        param_1[1] = (long)param_1;
        return;
      }
    }
    else {
      pvVar3 = unaff_x21;
      pvVar8 = (void *)0x3cfbe864c3a77289;
      if ((pvVar9 != (void *)0x69e4dec6b0ebb25c) &&
         (pvVar3 = pvVar7, pvVar8 = pvVar9, pvVar9 == (void *)0x7dfcf83e979bea6c)) {
        pvVar8 = (void *)0x5b07d13b9a2c4c47;
      }
    }
  }
  if ((long)pvVar9 < -0x43f0442fbe464458) {
    if ((long)pvVar9 < -0x5d839d50d292350a) {
      pvVar8 = (void *)0x3db6504342eeb5c6;
      if (pvVar9 != (void *)0x9074b6ca19dae9b1) {
        if (pvVar9 == (void *)0x91c74cc45d93383c) {
          param_1[1] = (long)param_1;
          pvVar8 = (void *)0xeb073b17696bcdc9;
        }
        else {
          pvVar8 = pvVar9;
          if (pvVar9 == (void *)0xa21d60436e67a3fc) goto LAB_001e2300;
        }
      }
      goto LAB_001e2318;
    }
    pvVar8 = (void *)0xea4c9f5ab4b68916;
    if (pvVar9 == (void *)0xa27c62af2d6dcaf6) goto LAB_001e2318;
    if (pvVar9 != (void *)0xa561ac3701a758d5) {
      pvVar8 = pvVar9;
      if (pvVar9 == (void *)0xad146a83ab6517cf) {
        free(local_88);
        pvVar8 = (void *)0xa561ac3701a758d5;
      }
      goto LAB_001e2318;
    }
    free(local_78);
    unaff_x20 = (void *)*unaff_x22;
    bVar4 = unaff_x20 == (void *)0x0;
    pvVar6 = (void *)0xe8069c47a9e5c97b;
    pvVar8 = (void *)0x50fa2b6150a290e8;
  }
  else {
    if (-0x34c850c5a84f18ea < (long)pvVar9) {
      pvVar8 = (void *)0xa561ac3701a758d5;
      if (((pvVar9 != (void *)0xcb37af3a57b0e717) &&
          (pvVar2 = unaff_x20, pvVar8 = (void *)0x1a25b2068074ba47,
          pvVar9 != (void *)0xe8069c47a9e5c97b)) &&
         (pvVar2 = pvVar6, pvVar8 = pvVar9, pvVar9 == (void *)0xea4c9f5ab4b68916)) {
        local_98 = *(void **)((long)unaff_x28 + 0x48);
        *unaff_x22 = 0;
        *(long **)((long)unaff_x28 + 0x38) = unaff_x22;
        pvVar8 = (void *)0xa21d60436e67a3fc;
        if (local_98 != (void *)0x0) {
          pvVar8 = (void *)0xf7083e4f8e47ca01;
        }
      }
      goto LAB_001e2318;
    }
    pvVar3 = pvVar5;
    pvVar8 = (void *)0x3cfbe864c3a77289;
    if (pvVar9 == (void *)0xbc0fbbd041b9bba8) goto LAB_001e2318;
    if (pvVar9 == (void *)0xc4aa98abb898077d) {
      local_80 = (undefined8 *)((long)unaff_x28 + 0x38);
      pvVar2 = local_90;
      pvVar3 = pvVar7;
      pvVar8 = (void *)0x1a25b2068074ba47;
      goto LAB_001e2318;
    }
    pvVar3 = pvVar7;
    pvVar8 = pvVar9;
    if (pvVar9 != (void *)0xc71b089b254c91b3) goto LAB_001e2318;
    free(unaff_x28);
    unaff_x21 = (void *)*param_1;
    pvVar8 = (void *)0xcb1f7856ef3e66a;
    bVar4 = unaff_x21 == (void *)0x0;
    pvVar6 = (void *)0x69e4dec6b0ebb25c;
  }
LAB_001e2968:
  pvVar3 = pvVar7;
  if (!bVar4) {
    pvVar8 = pvVar6;
  }
  goto LAB_001e2318;
}


