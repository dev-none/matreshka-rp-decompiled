// Function: FUN_001dab0c
// Entry: 001dab0c

void FUN_001dab0c(ulong *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulong *puVar5;
  ssize_t sVar6;
  undefined1 *puVar7;
  uint unaff_w22;
  timeval local_88;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  puVar1 = &DAT_6b9fb694821e6034;
  if (param_1 != (ulong *)0x0) {
    puVar1 = (undefined1 *)0x12b21488b9618371;
  }
  puVar5 = param_1;
  puVar3 = (undefined1 *)0x3f365012db6b56c1;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (puVar7 = puVar3, puVar3 = puVar7, 0x3a4ee4b4cd18044 < (long)puVar7) {
            if ((long)puVar7 < 0x3f365012db6b56c1) {
              if (puVar7 == (undefined1 *)0x3a4ee4b4cd18045) {
                puVar5 = (ulong *)FUN_001ebe70(0,1,&DAT_001f8324);
                puVar3 = (undefined1 *)0x4c1b9edb721e7222;
                if ((int)puVar5 != 0) {
                  puVar3 = (undefined1 *)0xcb528befcd0fb52f;
                }
              }
              else {
                puVar3 = (undefined1 *)0x3a4ee4b4cd18045;
                if ((puVar7 != (undefined1 *)0x12b21488b9618371) &&
                   (puVar3 = puVar7, puVar7 == (undefined1 *)0x2467c250713f82d4)) {
                  puVar3 = (undefined1 *)0xf8b8c954db367ca1;
                }
              }
            }
            else if ((long)puVar7 < 0x5e1b922e6e5165fd) {
              puVar3 = puVar1;
              if ((puVar7 != (undefined1 *)0x3f365012db6b56c1) &&
                 (puVar3 = puVar7, puVar7 == (undefined1 *)0x4c1b9edb721e7222)) {
                puVar3 = &DAT_2b590051c346d3e;
                if (DAT_001f8324._1_1_ == '\0') {
                  puVar3 = (undefined1 *)0x5e1b922e6e5165fd;
                }
              }
            }
            else if (puVar7 == (undefined1 *)0x5e1b922e6e5165fd) {
              DAT_001f7a00 = DAT_001f7a00 ^ 0x6d;
              DAT_001f7a01 = DAT_001f7a01 ^ 0x6d;
              DAT_001f7a02 = DAT_001f7a02 ^ 0x6d;
              DAT_001f7a03 = DAT_001f7a03 ^ 0x6d;
              DAT_001f7a04 = DAT_001f7a04 ^ 0x6d;
              DAT_001f79f8 = DAT_001f79f8 ^ 0x6d6d6d6d6d6d6d6d;
              DAT_001f8324._0_2_ = CONCAT11(1,(undefined1)DAT_001f8324);
              puVar3 = (undefined1 *)0xde0600f0ca761eb9;
            }
            else if (puVar7 == &DAT_6b9fb694821e6034) {
              puVar3 = (undefined1 *)0xd937f9741a083d9f;
            }
          }
          if ((long)puVar7 < -0x1ea92f4b59985472) break;
          if ((long)puVar7 < -0x74736ab24c9835f) {
            puVar3 = (undefined1 *)0xf8b8c954db367ca1;
            if ((puVar7 != (undefined1 *)0xe156d0b4a667ab8e) &&
               (puVar3 = puVar7, puVar7 == (undefined1 *)0xe5248230beacb780)) {
              puVar3 = (undefined1 *)0xd937f9741a083d9f;
            }
          }
          else if (puVar7 == (undefined1 *)0xf8b8c954db367ca1) {
            gettimeofday(&local_88,(__timezone_ptr_t)0x0);
            uVar4 = getpid();
            puVar5 = (ulong *)(ulong)uVar4;
            *param_1 = (ulong)((uint)local_88.tv_sec ^ uVar4 << 0x10 ^ (uint)local_88.tv_usec);
            puVar3 = (undefined1 *)0xd937f9741a083d9f;
          }
          else if (puVar7 == &DAT_2b590051c346d3e) {
            puVar3 = (undefined1 *)0xde0600f0ca761eb9;
          }
        }
        if (-0x26c8068be5f7c262 < (long)puVar7) break;
        if (puVar7 == (undefined1 *)0xa0d7c67c60e7a82e) {
          sVar6 = read(unaff_w22,param_1,8);
          uVar4 = close(unaff_w22);
          puVar5 = (ulong *)(ulong)uVar4;
          puVar3 = (undefined1 *)0xe5248230beacb780;
          if (sVar6 != 8) {
            puVar3 = (undefined1 *)0x2467c250713f82d4;
          }
        }
        else if (puVar7 == (undefined1 *)0xcb528befcd0fb52f) {
          puVar3 = (undefined1 *)0x3a4ee4b4cd18045;
        }
      }
      if (puVar7 != (undefined1 *)0xde0600f0ca761eb9) break;
      DAT_001f8324 = 0;
      *param_1 = 0;
      unaff_w22 = open((char *)&DAT_001f79f8,0x80000,0);
      puVar5 = (ulong *)(ulong)unaff_w22;
      puVar3 = (undefined1 *)0xa0d7c67c60e7a82e;
      if ((int)unaff_w22 < 0) {
        puVar3 = (undefined1 *)0xe156d0b4a667ab8e;
      }
    }
  } while (puVar7 != (undefined1 *)0xd937f9741a083d9f);
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar5);
  }
  return;
}


