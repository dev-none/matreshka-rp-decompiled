// Function: mz_zip_writer_init_file_v2
// Entry: 0010fd2c

void mz_zip_writer_init_file_v2(long param_1,char *param_2,ulong param_3,uint param_4)

{
  char *__modes;
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  FILE *pFVar4;
  ulong uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined1 auStack_1058 [4096];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  *(code **)(param_1 + 0x50) = FUN_0010fe8c;
  *(undefined8 *)(param_1 + 0x58) = 0;
  if ((param_4 >> 0xf & 1) != 0) {
    *(code **)(param_1 + 0x48) = FUN_0010c754;
  }
  *(long *)(param_1 + 0x60) = param_1;
  uVar3 = mz_zip_writer_init_v2(param_1,param_3,param_4);
  if ((int)uVar3 != 0) {
    __modes = "wb";
    if ((param_4 & 0x8000) != 0) {
      __modes = "w+b";
    }
    pFVar4 = fopen(param_2,__modes);
    if (pFVar4 == (FILE *)0x0) {
      FUN_0010fb20(param_1,1);
      uVar6 = 0x11;
LAB_0010fe54:
      uVar3 = 0;
      *(undefined4 *)(param_1 + 0x1c) = uVar6;
    }
    else {
      *(undefined4 *)(param_1 + 0x18) = 4;
      *(FILE **)(*(long *)(param_1 + 0x68) + 0x70) = pFVar4;
      if (param_3 != 0) {
        memset(auStack_1058,0,0x1000);
        lVar7 = 0;
        do {
          uVar1 = param_3;
          if (0xfff < param_3) {
            uVar1 = 0x1000;
          }
          uVar5 = (**(code **)(param_1 + 0x50))
                            (*(undefined8 *)(param_1 + 0x60),lVar7,auStack_1058,uVar1);
          if (uVar5 != uVar1) {
            FUN_0010fb20(param_1,1);
            uVar6 = 0x13;
            goto LAB_0010fe54;
          }
          param_3 = param_3 - uVar1;
          lVar7 = lVar7 + uVar1;
        } while (param_3 != 0);
      }
      uVar3 = 1;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


