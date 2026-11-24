// Function: FUN_001de0e8
// Entry: 001de0e8

void FUN_001de0e8(long *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *unaff_x20;
  void *unaff_x22;
  void *unaff_x26;
  void *pvVar6;
  
  pvVar6 = (void *)*param_1;
  pvVar1 = (void *)0xe8c9031141328d08;
  if (pvVar6 != (void *)0x0) {
    pvVar1 = (void *)0x4d702a7aef09f0b4;
  }
  pvVar3 = pvVar1;
  pvVar2 = (void *)0x6ea6282306ea075c;
  do {
    while( true ) {
      while( true ) {
        while (pvVar5 = pvVar2, pvVar4 = pvVar3, pvVar3 = pvVar4, 0x4517d092a6c8637a < (long)pvVar5)
        {
          if ((long)pvVar5 < 0x57f8c36627f7246e) {
            pvVar3 = unaff_x22;
            pvVar2 = (void *)0x5375277af4011243;
            if (((pvVar5 != (void *)0x4517d092a6c8637b) &&
                (pvVar3 = pvVar6, pvVar5 != (void *)0x4d702a7aef09f0b4)) &&
               (pvVar3 = pvVar4, pvVar2 = pvVar5, pvVar5 == (void *)0x5375277af4011243)) {
              pvVar2 = (void *)0x57f8c36627f7246e;
              if (*(long *)((long)pvVar4 + 0x10) != 0) {
                pvVar2 = (void *)0x1c201a6f44d38273;
              }
              *param_1 = *(long *)((long)pvVar4 + 0x10);
              unaff_x26 = pvVar4;
            }
          }
          else if (pvVar5 == (void *)0x57f8c36627f7246e) {
            param_1[1] = (long)param_1;
            pvVar2 = (void *)0x25e60e8a57340c35;
          }
          else {
            pvVar2 = (void *)0x1029ba407f8d7b2d;
            if ((pvVar5 != (void *)0x5a82b43288d2c981) &&
               (pvVar2 = pvVar5, pvVar5 == (void *)0x6ea6282306ea075c)) {
              pvVar2 = pvVar1;
            }
          }
        }
        if ((long)pvVar5 < 0x1029ba407f8d7b2d) break;
        if (pvVar5 == (void *)0x1029ba407f8d7b2d) {
          free(unaff_x26);
          unaff_x22 = (void *)*param_1;
          pvVar2 = (void *)0xbea2a6ad7de27038;
          if (unaff_x22 != (void *)0x0) {
            pvVar2 = (void *)0x4517d092a6c8637b;
          }
        }
        else {
          pvVar2 = (void *)0x25e60e8a57340c35;
          if ((pvVar5 != (void *)0x1c201a6f44d38273) &&
             (pvVar2 = pvVar5, pvVar5 == (void *)0x25e60e8a57340c35)) {
            unaff_x20 = *(void **)((long)unaff_x26 + 8);
            pvVar2 = (void *)0x5a82b43288d2c981;
            if (unaff_x20 != (void *)0x0) {
              pvVar2 = (void *)0xbcb67c35d138e776;
            }
          }
        }
      }
      if (-0x3f06feab6e15bed6 < (long)pvVar5) break;
      if (pvVar5 == (void *)0xbcb67c35d138e776) {
        free(unaff_x20);
        pvVar2 = (void *)0x1029ba407f8d7b2d;
      }
      else {
        pvVar2 = pvVar5;
        if (pvVar5 == (void *)0xbea2a6ad7de27038) {
          pvVar2 = (void *)0xc0f9015491ea412b;
        }
      }
    }
    pvVar2 = (void *)0xc0f9015491ea412b;
  } while ((pvVar5 == (void *)0xe8c9031141328d08) ||
          (pvVar2 = pvVar5, pvVar5 != (void *)0xc0f9015491ea412b));
  *param_1 = 0;
  param_1[1] = (long)param_1;
  return;
}


