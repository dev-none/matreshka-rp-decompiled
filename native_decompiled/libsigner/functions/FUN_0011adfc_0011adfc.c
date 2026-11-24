// Function: FUN_0011adfc
// Entry: 0011adfc

void FUN_0011adfc(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *unaff_x20;
  undefined8 *unaff_x24;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  
  puVar1 = (undefined8 *)0x5a82b43288d2c981;
  if (param_1 != (long *)0x0) {
    puVar1 = (undefined8 *)0xbcb67c35d138e776;
  }
  puVar2 = puVar1;
  puVar5 = (undefined8 *)0x25e60e8a57340c35;
LAB_0011af18:
  do {
    while (puVar3 = puVar5, puVar4 = puVar2, puVar5 = puVar3, puVar2 = puVar4,
          0x41be9e0e5eb1efe3 < (long)puVar3) {
      if ((long)puVar3 < 0x5a82b43288d2c981) {
        if ((long)puVar3 < 0x4517d092a6c8637b) {
          if (puVar3 == (undefined8 *)0x41be9e0e5eb1efe4) {
            free(unaff_x20);
            puVar5 = (undefined8 *)0x6853f5fa40398e94;
          }
          else if (puVar3 == (undefined8 *)0x43f7eb53c5724ce0) {
            puVar2 = unaff_x27;
            puVar5 = (undefined8 *)0xbea2a6ad7de27038;
          }
        }
        else {
          puVar2 = unaff_x28;
          puVar5 = (undefined8 *)0xbea2a6ad7de27038;
          if ((puVar3 != (undefined8 *)0x4517d092a6c8637b) &&
             (puVar2 = puVar4, puVar5 = puVar3, puVar3 == (undefined8 *)0x469bef0d6588cd58)) {
            *param_1 = 0;
            param_1[1] = (long)param_1;
            puVar5 = (undefined8 *)0xd1d3887709769d6c;
          }
        }
      }
      else if ((long)puVar3 < 0x6853f5fa40398e94) {
        puVar5 = (undefined8 *)0xd1d3887709769d6c;
        if ((puVar3 != (undefined8 *)0x5a82b43288d2c981) &&
           (puVar5 = puVar3, puVar3 == (undefined8 *)0x5e990c37db09f86a)) {
          puVar5 = (undefined8 *)0x469bef0d6588cd58;
        }
      }
      else if (puVar3 == (undefined8 *)0x6853f5fa40398e94) {
        free(unaff_x24);
        unaff_x27 = (undefined8 *)*param_1;
        puVar3 = (undefined8 *)0x43f7eb53c5724ce0;
        puVar5 = (undefined8 *)0x5e990c37db09f86a;
        puVar4 = unaff_x27;
LAB_0011af10:
        if (puVar4 != (undefined8 *)0x0) {
          puVar5 = puVar3;
        }
      }
      else if (puVar3 == (undefined8 *)0x754d2b88abe28d02) {
        param_1[1] = (long)param_1;
        puVar5 = (undefined8 *)0x6df6ddc7d68c40;
      }
    }
    if (-0x2e2c7788f6896295 < (long)puVar3) {
      if ((long)puVar3 < 0x1029ba407f8d7b2d) {
        if (puVar3 == (undefined8 *)0x6df6ddc7d68c40) {
          unaff_x20 = (void *)*unaff_x24;
          puVar5 = (undefined8 *)0x91dee5b743ef602c;
          if (unaff_x20 != (void *)0x0) {
            puVar5 = (undefined8 *)0x41be9e0e5eb1efe4;
          }
        }
        else if (puVar3 == (undefined8 *)0xd1d3887709769d6c) {
          return;
        }
      }
      else {
        puVar5 = (undefined8 *)0x469bef0d6588cd58;
        if ((puVar3 != (undefined8 *)0x1029ba407f8d7b2d) &&
           (puVar5 = puVar3, puVar3 == (undefined8 *)0x25e60e8a57340c35)) {
          puVar5 = puVar1;
        }
      }
      goto LAB_0011af18;
    }
    if ((long)puVar3 < -0x415d5952821d8fc8) {
      puVar5 = (undefined8 *)0x6853f5fa40398e94;
      if ((puVar3 != (undefined8 *)0x91dee5b743ef602c) &&
         (puVar5 = puVar3, puVar3 == (undefined8 *)0xbcb67c35d138e776)) {
        unaff_x28 = (undefined8 *)*param_1;
        puVar3 = (undefined8 *)0x4517d092a6c8637b;
        puVar5 = (undefined8 *)0x1029ba407f8d7b2d;
        puVar4 = unaff_x28;
        goto LAB_0011af10;
      }
    }
    else if (puVar3 == (undefined8 *)0xbea2a6ad7de27038) {
      puVar5 = (undefined8 *)0x754d2b88abe28d02;
      if (puVar4[1] != 0) {
        puVar5 = (undefined8 *)0xc0f9015491ea412b;
      }
      *param_1 = puVar4[1];
      unaff_x24 = puVar4;
    }
    else if (puVar3 == (undefined8 *)0xc0f9015491ea412b) {
      puVar5 = (undefined8 *)0x6df6ddc7d68c40;
    }
  } while( true );
}


