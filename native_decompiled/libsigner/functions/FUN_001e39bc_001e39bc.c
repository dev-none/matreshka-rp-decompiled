// Function: FUN_001e39bc
// Entry: 001e39bc

void FUN_001e39bc(int *param_1,long *param_2,uint param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined1 *puVar8;
  int unaff_w28;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  long *local_90;
  int local_84;
  int local_74;
  undefined8 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_70 = 0;
  local_74 = 0;
  pvVar4 = calloc(1,0x68);
  puVar1 = (undefined1 *)0x9173a1fc59339595;
  if (pvVar4 != (void *)0x0) {
    puVar1 = (undefined1 *)0x43d4efcefc88fa10;
  }
  puVar2 = (undefined1 *)0x2ac799c399899ac3;
LAB_001e3b5c:
  puVar8 = puVar2;
  puVar2 = puVar8;
  if ((long)puVar8 < -0xab4161c6ac76ac9) {
    if ((long)puVar8 < -0x4537a5bdd09230d8) {
      if ((long)puVar8 < -0x615740d48b1b4bc7) {
        if ((long)puVar8 < -0x69a306c562224776) {
          if (puVar8 == (undefined1 *)0x9141e7ccec342354) {
LAB_001e418c:
            unaff_w28 = 9;
            puVar2 = (undefined1 *)0x28a29c505fd0878c;
          }
          else if (puVar8 == (undefined1 *)0x9173a1fc59339595) {
            unaff_w28 = 1;
            puVar2 = (undefined1 *)0x28a29c505fd0878c;
          }
        }
        else {
          puVar2 = (undefined1 *)0xbac85a422f6dcf28;
          if ((puVar8 != &DAT_965cf93a9dddb88a) &&
             (puVar2 = puVar8, puVar8 == (undefined1 *)0x9c293a815f71a1ef)) {
            local_a4 = local_70._4_4_;
            puVar2 = (undefined1 *)0x4bfd6150022cba99;
            if (local_70._4_4_ + 4U <= param_3) {
              puVar2 = (undefined1 *)0xba43a2b0d5cab0ba;
            }
          }
        }
      }
      else if ((long)puVar8 < -0x58581ec20935847c) {
        if (puVar8 == (undefined1 *)0x9ea8bf2b74e4b439) {
          FUN_001df6b8(param_1,(long)pvVar4 + 0x40,local_a8,param_4);
          puVar2 = (undefined1 *)0xbca196f3040a25ee;
          if (*param_1 != 0) {
            puVar2 = (undefined1 *)0xd0535adc928c1bbf;
          }
        }
        else if (puVar8 == (undefined1 *)0xa6783f0b0f892393) goto LAB_001e4234;
      }
      else if (puVar8 == (undefined1 *)0xa7a7e13df6ca7b84) {
        local_84 = local_70._4_4_;
        uVar5 = FUN_001dc360(param_1,(long)pvVar4 + 0x38,4,1,param_4);
        puVar2 = (undefined1 *)0xbb472acc394b094b;
        if ((uVar5 & 1) == 0) {
          puVar2 = (undefined1 *)0xd4590ec1e57e5179;
        }
      }
      else if (puVar8 == (undefined1 *)0xa852b4a22d98453e) {
        local_b4 = local_74;
        local_b0 = local_84 + local_ac + 0x14;
        puVar2 = (undefined1 *)0xa6783f0b0f892393;
        if ((uint)(local_74 + local_b0) <= param_3) {
          puVar2 = (undefined1 *)0x75ce15e08caa4c6a;
        }
      }
      else if (puVar8 == (undefined1 *)0xba43a2b0d5cab0ba) {
        FUN_001e3148(param_1,pvVar4,local_a4,param_4);
        puVar2 = (undefined1 *)0xa7a7e13df6ca7b84;
        if (*param_1 != 0) {
          puVar2 = (undefined1 *)0x52d98d60f83cf13e;
        }
      }
    }
    else if ((long)puVar8 < -0x2faca5236d73e441) {
      if (-0x3ed04c030289d597 < (long)puVar8) {
        if (puVar8 == (undefined1 *)0xc12fb3fcfd762a6a) {
          plVar6 = (long *)param_2[1];
        }
        else {
          plVar6 = param_2;
          if (puVar8 != (undefined1 *)0xcc4911e8d0a08389) goto LAB_001e3b5c;
        }
        puVar2 = (undefined1 *)0xee32369f7888ebdf;
        local_90 = plVar6;
        goto LAB_001e3b5c;
      }
      if (puVar8 == (undefined1 *)0xbb472acc394b094b) {
        uVar5 = FUN_001dc360(param_1,(long)pvVar4 + 0x3c,4,1,param_4);
        puVar2 = (undefined1 *)0xfb3a65b3fca4c172;
        if ((uVar5 & 1) == 0) {
          puVar2 = (undefined1 *)0xd57ac0afa91feda2;
        }
      }
      else if (puVar8 == (undefined1 *)0xbca196f3040a25ee) {
        local_ac = (int)local_70;
        uVar5 = FUN_001dc360(param_1,&local_74,4,1,param_4);
        puVar2 = (undefined1 *)0xa852b4a22d98453e;
        if ((uVar5 & 1) == 0) {
          puVar2 = (undefined1 *)0xe08d3eae8db4f8d9;
        }
      }
      else if (puVar8 == (undefined1 *)0xbac85a422f6dcf28) {
        if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
    else if ((long)puVar8 < -0x2a853f5056e0125e) {
      puVar2 = (undefined1 *)0xbac85a422f6dcf28;
      if ((puVar8 != (undefined1 *)0xd0535adc928c1bbf) &&
         (puVar2 = puVar8, puVar8 == (undefined1 *)0xd4590ec1e57e5179)) {
        puVar2 = (undefined1 *)0xbac85a422f6dcf28;
      }
    }
    else {
      puVar2 = (undefined1 *)0xbac85a422f6dcf28;
      if (((puVar8 != (undefined1 *)0xd57ac0afa91feda2) &&
          (puVar8 != (undefined1 *)0xe08d3eae8db4f8d9)) &&
         (puVar2 = puVar8, puVar8 == (undefined1 *)0xee32369f7888ebdf)) {
        *local_90 = (long)pvVar4;
        param_2[1] = (long)pvVar4 + 0x60;
        puVar2 = (undefined1 *)0x6de583d82abca3c2;
        if (*param_1 != 0) {
          puVar2 = (undefined1 *)0xf54be9e395389537;
        }
      }
    }
    goto LAB_001e3b5c;
  }
  if ((long)puVar8 < 0x2ac799c399899ac3) {
    if ((long)puVar8 < 0x4357c11efd169a0) {
      if ((long)puVar8 < -0x4c59a4c035b3e8e) {
        puVar2 = (undefined1 *)0xbac85a422f6dcf28;
        if ((puVar8 != (undefined1 *)0xf54be9e395389537) &&
           (puVar2 = puVar8, puVar8 == (undefined1 *)0xf63c965f6afee456)) {
          puVar2 = (undefined1 *)0xbac85a422f6dcf28;
        }
      }
      else if (puVar8 == (undefined1 *)0xfb3a65b3fca4c172) {
        puVar2 = (undefined1 *)0x862419eaecdf1a5;
        if (*(int *)((long)pvVar4 + 0x38) != *(int *)((long)pvVar4 + 0x20)) {
          puVar2 = (undefined1 *)0x9141e7ccec342354;
        }
      }
      else if (puVar8 == (undefined1 *)0x408409b1e5ac055) {
        uVar5 = FUN_001dc360(param_1,&local_70,4,1,param_4);
        puVar2 = (undefined1 *)0x6dbb77d6245fbf6c;
        if ((uVar5 & 1) == 0) {
          puVar2 = (undefined1 *)0x26c60fa523ddda4b;
        }
      }
      goto LAB_001e3b5c;
    }
    if (0x862419eaecdf1a4 < (long)puVar8) {
      if (puVar8 == (undefined1 *)0x862419eaecdf1a5) {
        puVar2 = (undefined1 *)0x408409b1e5ac055;
        if (*(int *)((long)pvVar4 + 0x3c) != *(int *)((long)pvVar4 + 0x24)) {
          puVar2 = (undefined1 *)0x4a5cd72dc1a18f6;
        }
      }
      else {
        puVar2 = (undefined1 *)0xbac85a422f6dcf28;
        if ((puVar8 != (undefined1 *)0x26c60fa523ddda4b) &&
           (puVar2 = puVar8, puVar8 == (undefined1 *)0x28a29c505fd0878c)) {
          *param_1 = unaff_w28;
          puVar2 = (undefined1 *)0xbac85a422f6dcf28;
        }
      }
      goto LAB_001e3b5c;
    }
    if (puVar8 != (undefined1 *)0x4357c11efd169a0) {
      if (puVar8 == (undefined1 *)0x4a5cd72dc1a18f6) goto LAB_001e418c;
      goto LAB_001e3b5c;
    }
  }
  else {
    if (0x6dbb77d6245fbf6b < (long)puVar8) {
      if ((long)puVar8 < 0x75ce15e08caa4c6a) {
        if (puVar8 == (undefined1 *)0x6dbb77d6245fbf6c) {
          local_a8 = (int)local_70;
          puVar2 = (undefined1 *)0x4357c11efd169a0;
          if (local_84 + (int)local_70 + 0x10U <= param_3) {
            puVar2 = (undefined1 *)0x9ea8bf2b74e4b439;
          }
        }
        else if (puVar8 == (undefined1 *)0x6de583d82abca3c2) {
          uVar5 = FUN_001dc360(param_1,(long)&local_70 + 4,4,1,param_4);
          puVar2 = (undefined1 *)0x9c293a815f71a1ef;
          if ((uVar5 & 1) == 0) {
            puVar2 = (undefined1 *)0x76eec756bc9b1bd1;
          }
        }
      }
      else if (puVar8 == (undefined1 *)0x75ce15e08caa4c6a) {
        FUN_001e13f4(param_1,(long)pvVar4 + 0x50,local_b4,param_4);
        puVar2 = (undefined1 *)0x7f24efb1c885eb9b;
        if (*param_1 != 0) {
          puVar2 = (undefined1 *)0xf63c965f6afee456;
        }
      }
      else {
        puVar2 = (undefined1 *)0xbac85a422f6dcf28;
        if ((puVar8 != (undefined1 *)0x76eec756bc9b1bd1) &&
           (puVar2 = puVar8, puVar8 == (undefined1 *)0x7f24efb1c885eb9b)) {
          puVar2 = &DAT_965cf93a9dddb88a;
          if (local_74 + local_b0 != param_3) {
            puVar2 = (undefined1 *)0x33970f856d03deee;
          }
        }
      }
      goto LAB_001e3b5c;
    }
    if ((long)puVar8 < 0x43d4efcefc88fa10) {
      puVar2 = puVar1;
      if ((puVar8 == (undefined1 *)0x2ac799c399899ac3) ||
         (puVar2 = puVar8, puVar8 != (undefined1 *)0x33970f856d03deee)) goto LAB_001e3b5c;
    }
    else {
      if (puVar8 == (undefined1 *)0x43d4efcefc88fa10) {
        *(void **)((long)pvVar4 + 8) = pvVar4;
        lVar7 = *param_2;
        *(long *)((long)pvVar4 + 0x18) = (long)pvVar4 + 0x10;
        puVar2 = (undefined1 *)0xcc4911e8d0a08389;
        if (lVar7 != 0) {
          puVar2 = (undefined1 *)0xc12fb3fcfd762a6a;
        }
        *(long *)((long)pvVar4 + 0x30) = (long)pvVar4 + 0x28;
        *(long *)((long)pvVar4 + 0x48) = (long)pvVar4 + 0x40;
        goto LAB_001e3b5c;
      }
      if (puVar8 != (undefined1 *)0x4bfd6150022cba99) {
        if (puVar8 == (undefined1 *)0x52d98d60f83cf13e) {
          puVar2 = (undefined1 *)0xbac85a422f6dcf28;
        }
        goto LAB_001e3b5c;
      }
    }
  }
LAB_001e4234:
  unaff_w28 = 8;
  puVar2 = (undefined1 *)0x28a29c505fd0878c;
  goto LAB_001e3b5c;
}


