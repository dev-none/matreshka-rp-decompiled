// Function: FUN_001dca14
// Entry: 001dca14

void FUN_001dca14(int *param_1,long *param_2,uint param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  void *pvVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long *unaff_x19;
  size_t unaff_x24;
  void *unaff_x25;
  
  pvVar2 = calloc(1,0x18);
  puVar1 = (undefined1 *)0x932656effdaaeaa5;
  if (pvVar2 != (void *)0x0) {
    puVar1 = (undefined1 *)0xdbbbecaa54122c5b;
  }
  puVar5 = (undefined1 *)0x8b1dacf6763fda11;
LAB_001dcb10:
  do {
    while (puVar4 = puVar5, puVar5 = puVar4, -0x24441355abedd3a6 < (long)puVar4) {
      if ((long)puVar4 < 0x2ac799c399899ac3) {
        if ((long)puVar4 < 0x1b767e91f4196530) {
          puVar5 = &DAT_1b767e91f4196530;
          if ((puVar4 != (undefined1 *)0xdbbbecaa54122c5b) &&
             (puVar5 = puVar4, puVar4 == (undefined1 *)0xe86a3cb2672328c3)) {
            puVar5 = (undefined1 *)0xc12fb3fcfd762a6a;
          }
        }
        else if (puVar4 == &DAT_1b767e91f4196530) {
          puVar5 = (undefined1 *)0x8b5d2aa4730e6d53;
          if (*param_2 != 0) {
            puVar5 = (undefined1 *)0xd136b47bc732bd2b;
          }
        }
        else if (puVar4 == (undefined1 *)0x1db1d1f44155ec69) {
          *unaff_x19 = (long)pvVar2;
          param_2[1] = (long)pvVar2 + 0x10;
          puVar5 = (undefined1 *)0x5e9249b5376f08fa;
          if (*param_1 != 0) {
            puVar5 = (undefined1 *)0x87fde1166a77f06e;
          }
        }
      }
      else if ((long)puVar4 < 0x55d58c2b8d472655) {
        if (puVar4 == (undefined1 *)0x2ac799c399899ac3) {
          *param_1 = 8;
          puVar5 = (undefined1 *)0xc12fb3fcfd762a6a;
        }
        else if (puVar4 == (undefined1 *)0x43d4efcefc88fa10) {
          puVar5 = (undefined1 *)0xc12fb3fcfd762a6a;
LAB_001dcd90:
          *param_1 = 1;
        }
      }
      else {
        puVar5 = (undefined1 *)0xc12fb3fcfd762a6a;
        if (puVar4 != (undefined1 *)0x55d58c2b8d472655) {
          if (puVar4 == (undefined1 *)0x57dab7dd661b1869) {
            unaff_x24 = (size_t)*(uint *)((long)pvVar2 + 4);
            puVar5 = (undefined1 *)0x9173a1fc59339595;
            if (unaff_x24 + 8 != (ulong)param_3) {
              puVar5 = (undefined1 *)0x2ac799c399899ac3;
            }
          }
          else {
            puVar5 = puVar4;
            if (puVar4 == (undefined1 *)0x5e9249b5376f08fa) {
              uVar3 = FUN_001dc360(param_1,pvVar2,4,1,param_4);
              puVar5 = (undefined1 *)0x82d6800f37fa837b;
              if ((uVar3 & 1) == 0) {
                puVar5 = (undefined1 *)0xe86a3cb2672328c3;
              }
            }
          }
        }
      }
    }
    if ((long)puVar4 < -0x6e8c5e03a6cc6a6b) {
      if ((long)puVar4 < -0x74e2530989c025ef) {
        if (puVar4 == (undefined1 *)0x82d6800f37fa837b) {
          uVar3 = FUN_001dc360(param_1,(uint *)((long)pvVar2 + 4),4,1,param_4);
          puVar5 = (undefined1 *)0x57dab7dd661b1869;
          if ((uVar3 & 1) == 0) {
            puVar5 = (undefined1 *)0x55d58c2b8d472655;
          }
        }
        else if (puVar4 == (undefined1 *)0x87fde1166a77f06e) {
          puVar5 = (undefined1 *)0xc12fb3fcfd762a6a;
        }
      }
      else {
        puVar5 = puVar1;
        if ((puVar4 != (undefined1 *)0x8b1dacf6763fda11) &&
           (puVar5 = puVar4, puVar4 == (undefined1 *)0x8b5d2aa4730e6d53)) {
          puVar5 = (undefined1 *)0x1db1d1f44155ec69;
          unaff_x19 = param_2;
        }
      }
      goto LAB_001dcb10;
    }
    if ((long)puVar4 < -0x3ed04c030289d596) {
      if (puVar4 == (undefined1 *)0x9173a1fc59339595) {
        unaff_x25 = calloc(1,unaff_x24);
        puVar5 = (undefined1 *)0x43d4efcefc88fa10;
        if (unaff_x25 != (void *)0x0) {
          puVar5 = (undefined1 *)0xcc4911e8d0a08389;
        }
        *(void **)((long)pvVar2 + 8) = unaff_x25;
      }
      else if (puVar4 == (undefined1 *)0x932656effdaaeaa5) {
        puVar5 = &DAT_1b767e91f4196530;
        goto LAB_001dcd90;
      }
    }
    else if (puVar4 == (undefined1 *)0xcc4911e8d0a08389) {
      FUN_001dc360(param_1,unaff_x25,unaff_x24,1,param_4);
      puVar5 = (undefined1 *)0xc12fb3fcfd762a6a;
    }
    else if (puVar4 == (undefined1 *)0xd136b47bc732bd2b) {
      puVar5 = (undefined1 *)0x1db1d1f44155ec69;
      unaff_x19 = (long *)param_2[1];
    }
    else if (puVar4 == (undefined1 *)0xc12fb3fcfd762a6a) {
      return;
    }
  } while( true );
}


