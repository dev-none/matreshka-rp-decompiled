// Function: FUN_001eb25c
// Entry: 001eb25c

void FUN_001eb25c(undefined4 *param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined4 *unaff_x28;
  undefined4 local_74;
  
  iVar2 = *param_2;
  lVar1 = -0x1795c34d98dcd73d;
  if (iVar2 != 0) {
    lVar1 = -0x7d297ff0c8057c85;
  }
  puVar3 = param_1;
  lVar4 = 0x5e9249b5376f08fa;
  do {
    while( true ) {
      while( true ) {
        while (0x55d58c2b8d472654 < lVar4) {
          if (lVar4 == 0x55d58c2b8d472655) {
            *param_1 = 2;
            lVar4 = 0x2ac799c399899ac3;
          }
          else if (lVar4 == 0x57dab7dd661b1869) {
            *(undefined4 **)(puVar3 + 2) = unaff_x28;
            *(undefined4 **)(param_2 + 2) = puVar3;
            *puVar3 = local_74;
            *param_2 = iVar2 + 1;
            lVar4 = 0x2ac799c399899ac3;
          }
          else if (lVar4 == 0x5e9249b5376f08fa) {
            lVar4 = lVar1;
          }
        }
        if (lVar4 != -0x7d297ff0c8057c85) break;
        unaff_x28 = *(undefined4 **)(param_2 + 2);
        local_74 = *unaff_x28;
        puVar3 = calloc(1,0x10);
        lVar4 = 0x55d58c2b8d472655;
        if (puVar3 != (undefined4 *)0x0) {
          lVar4 = 0x57dab7dd661b1869;
        }
      }
      if (lVar4 != -0x1795c34d98dcd73d) break;
      *param_1 = 4;
      lVar4 = 0x2ac799c399899ac3;
    }
  } while (lVar4 != 0x2ac799c399899ac3);
  return;
}


