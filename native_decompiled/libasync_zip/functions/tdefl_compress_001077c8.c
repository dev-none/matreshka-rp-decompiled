// Function: tdefl_compress
// Entry: 001077c8

ulong tdefl_compress(long *param_1,long param_2,long *param_3,long param_4,long *param_5,int param_6
                    )

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  size_t __n;
  
  if (param_1 == (long *)0x0) {
    if (param_3 != (long *)0x0) {
      *param_3 = 0;
    }
    if (param_5 != (long *)0x0) {
      *param_5 = 0;
    }
    return 0xfffffffe;
  }
  param_1[0x11] = param_2;
  param_1[0x12] = param_4;
  param_1[0x13] = (long)param_3;
  param_1[0x14] = (long)param_5;
  param_1[0x16] = param_2;
  if (param_3 == (long *)0x0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *param_3;
  }
  param_1[0x17] = lVar5;
  param_1[0x18] = 0;
  *(int *)(param_1 + 0x15) = param_6;
  if ((((param_4 != 0 || param_5 != (long *)0x0) == (*param_1 == 0)) &&
      (*(int *)((long)param_1 + 0x84) == 0)) && ((param_6 == 4 || (*(uint *)(param_1 + 0x10) == 0)))
     ) {
    if (((param_3 == (long *)0x0) || (param_2 != 0)) || (*param_3 == 0)) {
      if (((param_5 == (long *)0x0) || (param_4 != 0)) || (*param_5 == 0)) {
        uVar4 = *(uint *)((long)param_1 + 0x74);
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | (uint)(param_6 == 4);
        if ((uVar4 != 0) || ((int)param_1[0xf] != 0)) {
          if (param_3 != (long *)0x0) {
            *param_3 = 0;
          }
          if (param_5 != (long *)0x0) {
            __n = *param_5 - param_1[0x18];
            if (uVar4 <= __n) {
              __n = (ulong)uVar4;
            }
            memcpy((void *)(param_4 + param_1[0x18]),
                   (void *)((long)param_1 + (ulong)*(uint *)(param_1 + 0xe) + 0x392aa),__n);
            lVar5 = param_1[0x18];
            uVar4 = *(int *)((long)param_1 + 0x74) - (int)__n;
            *(int *)(param_1 + 0xe) = (int)param_1[0xe] + (int)__n;
            *(uint *)((long)param_1 + 0x74) = uVar4;
            param_1[0x18] = lVar5 + __n;
            *(size_t *)param_1[0x14] = lVar5 + __n;
          }
          uVar4 = (uint)((int)param_1[0xf] != 0 && uVar4 == 0);
          *(uint *)((long)param_1 + 0x84) = uVar4;
          return (ulong)uVar4;
        }
        iVar1 = FUN_00109d98();
        if (iVar1 == 0) {
LAB_00107a08:
          uVar3 = (ulong)*(uint *)((long)param_1 + 0x84);
        }
        else {
          if ((param_2 != 0) && ((*(uint *)(param_1 + 2) & 0x3000) != 0)) {
            uVar2 = mz_adler32((int)param_1[4],param_2,param_1[0x16] - param_2);
            *(undefined4 *)(param_1 + 4) = uVar2;
          }
          if ((((param_6 != 0) && ((int)param_1[5] == 0)) && (param_1[0x17] == 0)) &&
             (*(int *)((long)param_1 + 0x74) == 0)) {
            iVar1 = FUN_0010a68c(param_1,param_6);
            if (iVar1 < 0) goto LAB_00107a08;
            *(uint *)(param_1 + 0xf) = (uint)(param_6 == 4);
            if (param_6 == 3) {
              memset((void *)((long)param_1 + 0x292aa),0,0x10000);
              memset((void *)((long)param_1 + 0x192aa),0,0x10000);
              *(undefined4 *)((long)param_1 + 0x2c) = 0;
            }
          }
          uVar3 = FUN_00109ce8(param_1);
          *(int *)((long)param_1 + 0x84) = (int)uVar3;
        }
        return uVar3;
      }
      goto LAB_00107840;
    }
  }
  else {
LAB_00107840:
    if (param_3 == (long *)0x0) goto LAB_00107848;
  }
  *param_3 = 0;
LAB_00107848:
  if (param_5 != (long *)0x0) {
    *param_5 = 0;
  }
  *(undefined4 *)((long)param_1 + 0x84) = 0xfffffffe;
  return 0xfffffffe;
}


