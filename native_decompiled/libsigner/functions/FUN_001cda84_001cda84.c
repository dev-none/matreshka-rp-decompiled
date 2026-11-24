// Function: FUN_001cda84
// Entry: 001cda84

void * FUN_001cda84(char *param_1,void *param_2)

{
  long lVar1;
  size_t sVar2;
  char *pcVar3;
  char *unaff_x22;
  void *local_80;
  size_t sStack_78;
  char *local_70;
  
  lVar1 = -0x13dbada936e01e99;
  pcVar3 = param_1;
LAB_001cdb4c:
LAB_001cdb54:
  do {
    sVar2 = (long)unaff_x22 - (long)param_1;
    do {
      while( true ) {
        while (lVar1 < -0x13dbada936e01e99) {
          if (lVar1 == -0x7c5cc15037ed23ed) {
            return param_2;
          }
          if (lVar1 == -0x68a8af9eb3eb862b) {
            local_80 = malloc(sVar2 + 1);
            lVar1 = -0xe69a20ca30d454f;
            sStack_78 = sVar2;
            if (local_80 != (void *)0x0) {
              lVar1 = 0x20d92a490db73055;
            }
          }
          else if (lVar1 == -0x53ca464092a249ac) {
            lVar1 = 0x6107ce89302545b1;
            pcVar3 = local_70;
            goto LAB_001cdb4c;
          }
        }
        if (0x20d92a490db73054 < lVar1) break;
        if (lVar1 == -0x13dbada936e01e99) {
          lVar1 = 0x6107ce89302545b1;
        }
        else if (lVar1 == -0xe69a20ca30d454f) {
          param_2 = (void *)0x0;
          lVar1 = -0x7c5cc15037ed23ed;
          goto LAB_001cdb54;
        }
      }
      if (lVar1 == 0x20d92a490db73055) {
        *(undefined1 *)((long)local_80 + sStack_78) = 0;
        memcpy(local_80,param_1,sStack_78);
        param_2 = local_80;
        lVar1 = -0x7c5cc15037ed23ed;
        goto LAB_001cdb54;
      }
    } while (lVar1 != 0x6107ce89302545b1);
    lVar1 = -0x68a8af9eb3eb862b;
    unaff_x22 = pcVar3;
    local_70 = pcVar3 + 1;
    if (*pcVar3 != '\0') {
      lVar1 = -0x53ca464092a249ac;
    }
  } while( true );
}


