// Function: FUN_001df0f4
// Entry: 001df0f4

void FUN_001df0f4(int *param_1,long *param_2,uint param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  void *pvVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong unaff_x24;
  void *unaff_x25;
  
  pvVar4 = calloc(1,0x18);
  plVar1 = (long *)0x9bc176df3fa9530a;
  if (pvVar4 != (void *)0x0) {
    plVar1 = (long *)&DAT_b2d4ce65352e561;
  }
  plVar2 = plVar1;
  plVar8 = (long *)0xfa82974fa315c9d9;
LAB_001df22c:
  while (plVar7 = plVar8, plVar6 = plVar2, plVar8 = plVar7, plVar2 = plVar6,
        -0xe69a20ca30d4550 < (long)plVar7) {
    if ((long)plVar7 < 0x19d992f260813f38) {
      if ((long)plVar7 < 0xb2d4ce65352e561) {
        if (plVar7 == (long *)0xf1965df35cf2bab1) {
          *param_1 = 8;
          plVar8 = (long *)0x19d992f260813f38;
        }
        else if (plVar7 == (long *)0xfa82974fa315c9d9) {
          plVar8 = plVar1;
        }
      }
      else {
        plVar8 = (long *)0xb5fbb0e4bad21fbd;
        if ((plVar7 != (long *)&DAT_b2d4ce65352e561) &&
           (plVar8 = plVar7, plVar7 == (long *)0xd24d68cec5d5988)) {
          FUN_001dc360(param_1,unaff_x25,unaff_x24,1,param_4);
          goto LAB_001df540;
        }
      }
    }
    else if ((long)plVar7 < 0x533e47b8d921314f) {
      if (plVar7 == (long *)0x20d92a490db73055) {
        unaff_x25 = calloc(1,unaff_x24);
        plVar8 = (long *)0x83a33eafc812dc13;
        if (unaff_x25 != (void *)0x0) {
          plVar8 = (long *)0xd24d68cec5d5988;
        }
        *(void **)((long)pvVar4 + 8) = unaff_x25;
      }
      else if (plVar7 == (long *)0x4bb9872e6d9c6197) {
        plVar2 = (long *)param_2[1];
        plVar8 = (long *)0x989a55cad3ac342c;
      }
      else if (plVar7 == (long *)0x19d992f260813f38) {
        return;
      }
    }
    else if (plVar7 == (long *)0x533e47b8d921314f) {
      uVar5 = FUN_001dc360(param_1,pvVar4,4,1,param_4);
      plVar8 = (long *)0x6107ce89302545b1;
      if ((uVar5 & 1) == 0) {
        plVar8 = (long *)0xec245256c91fe167;
      }
    }
    else if (plVar7 == (long *)0x6107ce89302545b1) {
      uVar5 = FUN_001dc360(param_1,(uint *)((long)pvVar4 + 4),4,1,param_4);
      plVar8 = (long *)0x975750614c1479d5;
      if ((uVar5 & 1) == 0) {
        plVar8 = (long *)0xac35b9bf6d5db654;
      }
    }
  }
  if ((long)plVar7 < -0x6765aa352c53cbd4) {
    if ((long)plVar7 < -0x68a8af9eb3eb862b) {
      plVar2 = param_2;
      plVar8 = (long *)0x989a55cad3ac342c;
      if ((plVar7 != (long *)0x831cb924ebee1b4d) &&
         (plVar2 = plVar6, plVar8 = plVar7, plVar7 == (long *)0x83a33eafc812dc13)) {
        plVar8 = (long *)0x19d992f260813f38;
        goto LAB_001df450;
      }
      goto LAB_001df22c;
    }
    if (plVar7 == (long *)0x975750614c1479d5) {
      unaff_x24 = (ulong)*(uint *)((long)pvVar4 + 4);
      bVar3 = unaff_x24 + 8 == (ulong)param_3;
      plVar6 = (long *)0xf1965df35cf2bab1;
      plVar8 = (long *)0x20d92a490db73055;
      goto LAB_001df624;
    }
    if (plVar7 != (long *)0x97aca40091e55a5d) goto LAB_001df22c;
  }
  else {
    if ((long)plVar7 < -0x53ca464092a249ac) {
      if (plVar7 == (long *)0x989a55cad3ac342c) {
        *plVar6 = (long)pvVar4;
        param_2[1] = (long)pvVar4 + 0x10;
        plVar8 = (long *)0x533e47b8d921314f;
        bVar3 = *param_1 == 0;
        plVar6 = (long *)0x97aca40091e55a5d;
LAB_001df624:
        if (!bVar3) {
          plVar8 = plVar6;
        }
      }
      else if (plVar7 == (long *)0x9bc176df3fa9530a) {
        plVar8 = (long *)0xb5fbb0e4bad21fbd;
LAB_001df450:
        *param_1 = 1;
        plVar2 = plVar6;
      }
      goto LAB_001df22c;
    }
    plVar8 = (long *)0x19d992f260813f38;
    if (plVar7 == (long *)0xac35b9bf6d5db654) goto LAB_001df22c;
    if (plVar7 == (long *)0xb5fbb0e4bad21fbd) {
      plVar8 = (long *)0x831cb924ebee1b4d;
      if (*param_2 != 0) {
        plVar8 = (long *)0x4bb9872e6d9c6197;
      }
      goto LAB_001df22c;
    }
    plVar8 = plVar7;
    if (plVar7 != (long *)0xec245256c91fe167) goto LAB_001df22c;
  }
LAB_001df540:
  plVar8 = (long *)0x19d992f260813f38;
  goto LAB_001df22c;
}


