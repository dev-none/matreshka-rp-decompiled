// Function: FUN_001e164c
// Entry: 001e164c

void FUN_001e164c(int *param_1,long *param_2,uint param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  long *local_90;
  int local_84;
  int local_78;
  uint local_74;
  undefined8 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_70 = 0;
  local_74 = 0;
  pvVar4 = calloc(1,0x58);
  lVar1 = 0x21c0e93cbb360418;
  if (pvVar4 != (void *)0x0) {
    lVar1 = 0x4f500b65a831bee4;
  }
  lVar2 = -0x6682bb77af072f;
LAB_001e17bc:
  while (lVar8 = lVar2, lVar2 = lVar8, lVar8 < -0x6682bb77af072f) {
    if (lVar8 < -0x3e969bf8a8812bd2) {
      if (lVar8 < -0x6011e7f0cf0ddd5b) {
        if (lVar8 == -0x71e077b68071675f) goto LAB_001e1da4;
        if (lVar8 == -0x701a5b76114d9682) {
          *local_90 = (long)pvVar4;
          param_2[1] = (long)pvVar4 + 0x50;
          lVar2 = -0x74ad9eccc25f9b2;
          if (*param_1 != 0) {
            lVar2 = 0x4d6b64e504d8a921;
          }
        }
        else if (lVar8 == -0x606551946c712a28) {
          lVar2 = -0x2add63388c18cfe7;
        }
      }
      else if (lVar8 < -0x5c439fadf417bc8a) {
        if (lVar8 == -0x6011e7f0cf0ddd5b) {
          local_84 = local_70._4_4_;
          uVar6 = FUN_001dc360(param_1,&local_70,4,1,param_4);
          lVar2 = 0x3c4c2a160e51da04;
          if ((uVar6 & 1) == 0) {
            lVar2 = 0x7775b513a86ca16b;
          }
        }
        else if (lVar8 == -0x5d12360f0698112b) {
          *param_1 = local_78;
          lVar2 = -0x2add63388c18cfe7;
        }
      }
      else if (lVar8 == -0x5c439fadf417bc8a) {
        *(uint *)((long)pvVar4 + 0x40) = local_a4;
        pvVar5 = calloc(1,(ulong)local_a4);
        *(void **)((long)pvVar4 + 0x48) = pvVar5;
        lVar8 = 0x127ab137eea64fe;
        lVar2 = -0x2542d43fb85d23b1;
        if (pvVar5 != (void *)0x0) {
          lVar2 = -0x7bcdbae8aaceaa68;
        }
        do {
          while (lVar7 = lVar8, lVar7 < 0x127ab137eea64fe) {
            if (lVar7 == -0x7bcdbae8aaceaa68) {
              FUN_001dc360(param_1,pvVar5,(ulong)local_a4,1,param_4);
              lVar8 = 0x2789dc481b795cf1;
            }
            else {
              lVar8 = lVar7;
              if (lVar7 == -0x2542d43fb85d23b1) {
                *param_1 = 1;
                lVar8 = 0x2789dc481b795cf1;
              }
            }
          }
          lVar8 = lVar2;
        } while ((lVar7 == 0x127ab137eea64fe) || (lVar8 = lVar7, lVar7 != 0x2789dc481b795cf1));
        lVar2 = 0x37ed31f08f53f1f4;
        if (*param_1 != 0) {
          lVar2 = -0x35d290dd8499c396;
        }
      }
      else if (lVar8 == -0x3f0d06e83f19f84b) {
        local_90 = (long *)param_2[1];
        lVar2 = -0x701a5b76114d9682;
      }
    }
    else if (lVar8 < -0x2add63388c18cfe7) {
      if (lVar8 < -0x35d290dd8499c396) {
        lVar2 = -0x2add63388c18cfe7;
        if ((lVar8 != -0x3e969bf8a8812bd2) && (lVar2 = lVar8, lVar8 == -0x3668b0ce8670e810)) {
          local_94 = local_70._4_4_;
          lVar2 = -0x2ab83678e90cfc72;
          if (local_70._4_4_ + 4U <= param_3) {
            lVar2 = 0x703781d332885ee0;
          }
        }
      }
      else {
        lVar2 = -0x2add63388c18cfe7;
        if ((lVar8 != -0x35d290dd8499c396) && (lVar2 = lVar8, lVar8 == -0x2df1266cf47fa359)) {
          lVar2 = -0x2add63388c18cfe7;
        }
      }
    }
    else if (lVar8 < -0x74ad9eccc25f9b2) {
      if (lVar8 == -0x2ab83678e90cfc72) goto LAB_001e1da4;
      if (lVar8 == -0x2add63388c18cfe7) {
        if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
    else if (lVar8 == -0x74ad9eccc25f9b2) {
      uVar6 = FUN_001dc360(param_1,(long)&local_70 + 4,4,1,param_4);
      lVar2 = -0x3668b0ce8670e810;
      if ((uVar6 & 1) == 0) {
        lVar2 = -0x3e969bf8a8812bd2;
      }
    }
    else if (lVar8 == -0x5a65df57888327c) {
      FUN_001df6b8(param_1,(long)pvVar4 + 0x30,local_98,param_4);
      lVar2 = 0x4b1d06d662edcd58;
      if (*param_1 != 0) {
        lVar2 = -0x606551946c712a28;
      }
    }
  }
  if (lVar8 < 0x4b1d06d662edcd58) {
    if (lVar8 < 0x21c0e93cbb360418) {
      lVar2 = lVar1;
      if (lVar8 != -0x6682bb77af072f) {
        if (lVar8 == 0x4d42b27b99b1208) goto LAB_001e1da4;
        lVar2 = lVar8;
        if (lVar8 == 0x5f51f1df2f1cc4a) {
          local_a4 = local_74;
          local_a0 = local_84 + local_9c + 0xc;
          lVar2 = 0x4d42b27b99b1208;
          if (local_74 + local_a0 <= param_3) {
            lVar2 = -0x5c439fadf417bc8a;
          }
        }
      }
      goto LAB_001e17bc;
    }
    if (0x37ed31f08f53f1f3 < lVar8) {
      if (lVar8 == 0x37ed31f08f53f1f4) {
        lVar2 = 0x2266c651dfbde0dc;
        if (local_74 + local_a0 != param_3) {
          lVar2 = -0x71e077b68071675f;
        }
      }
      else if (lVar8 == 0x3c4c2a160e51da04) {
        local_98 = (int)local_70;
        lVar2 = 0x63358bc6c5c6d7dc;
        if (local_84 + (int)local_70 + 8U <= param_3) {
          lVar2 = -0x5a65df57888327c;
        }
      }
      goto LAB_001e17bc;
    }
    if (lVar8 != 0x21c0e93cbb360418) {
      if (lVar8 == 0x2266c651dfbde0dc) {
        lVar2 = -0x2add63388c18cfe7;
      }
      goto LAB_001e17bc;
    }
    local_78 = 1;
  }
  else {
    if (lVar8 < 0x4f500b65a831bee4) {
      if (lVar8 < 0x4d6b64e504d8a921) {
        if (lVar8 == 0x4b1d06d662edcd58) {
          local_9c = (int)local_70;
          uVar6 = FUN_001dc360(param_1,&local_74,4,1,param_4);
          lVar2 = 0x5f51f1df2f1cc4a;
          if ((uVar6 & 1) == 0) {
            lVar2 = -0x2df1266cf47fa359;
          }
        }
        else if (lVar8 == 0x4bbb86392a586d99) {
          lVar2 = -0x701a5b76114d9682;
          local_90 = param_2;
        }
      }
      else {
        lVar2 = -0x2add63388c18cfe7;
        if ((lVar8 != 0x4d6b64e504d8a921) && (lVar2 = lVar8, lVar8 == 0x4ee403bc90248aea)) {
          lVar2 = -0x2add63388c18cfe7;
        }
      }
      goto LAB_001e17bc;
    }
    if (0x703781d332885edf < lVar8) {
      if (lVar8 == 0x703781d332885ee0) {
        FUN_001e07d8(param_1,pvVar4,local_94,param_4);
        lVar2 = -0x6011e7f0cf0ddd5b;
        if (*param_1 != 0) {
          lVar2 = 0x4ee403bc90248aea;
        }
      }
      else if (lVar8 == 0x7775b513a86ca16b) {
        lVar2 = -0x2add63388c18cfe7;
      }
      goto LAB_001e17bc;
    }
    if (lVar8 == 0x4f500b65a831bee4) {
      lVar8 = *param_2;
      *(void **)((long)pvVar4 + 8) = pvVar4;
      *(long *)((long)pvVar4 + 0x38) = (long)pvVar4 + 0x30;
      *(long *)((long)pvVar4 + 0x18) = (long)pvVar4 + 0x10;
      lVar2 = 0x4bbb86392a586d99;
      if (lVar8 != 0) {
        lVar2 = -0x3f0d06e83f19f84b;
      }
      *(long *)((long)pvVar4 + 0x28) = (long)pvVar4 + 0x20;
      goto LAB_001e17bc;
    }
    if (lVar8 != 0x63358bc6c5c6d7dc) goto LAB_001e17bc;
LAB_001e1da4:
    local_78 = 8;
  }
  lVar2 = -0x5d12360f0698112b;
  goto LAB_001e17bc;
}


