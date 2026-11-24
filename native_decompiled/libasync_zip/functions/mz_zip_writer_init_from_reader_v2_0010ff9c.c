// Function: mz_zip_writer_init_from_reader_v2
// Entry: 0010ff9c

undefined4 mz_zip_writer_init_from_reader_v2(long *param_1,char *param_2,uint param_3)

{
  FILE *pFVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  long lVar5;
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  lVar5 = param_1[0xd];
  if ((lVar5 != 0) && (*(int *)((long)param_1 + 0x14) == 1)) {
    if ((param_3 >> 0xe & 1) == 0) {
      if (*(int *)(lVar5 + 100) == 0) {
        if ((int)param_1[2] == 0xffff) {
LAB_00110070:
          uVar4 = 2;
          goto LAB_00110098;
        }
        if (*param_1 - 0xffffffb4U < 0xffffffff00000000) {
          uVar4 = 3;
          goto LAB_00110098;
        }
      }
      else {
LAB_0011000c:
        if ((int)param_1[2] == -1) goto LAB_00110070;
      }
      if (*(FILE **)(lVar5 + 0x70) == (FILE *)0x0) {
        if (*(long *)(lVar5 + 0x80) == 0) {
          if (param_1[10] != 0) goto LAB_001100cc;
        }
        else if ((long *)param_1[0xc] == param_1) {
          *(undefined8 *)(lVar5 + 0x90) = *(undefined8 *)(lVar5 + 0x88);
          pcVar3 = FUN_0010fa48;
          goto LAB_001100c8;
        }
      }
      else if ((long *)param_1[0xc] == param_1) {
        if ((int)param_1[3] == 4) {
          if (param_2 == (char *)0x0) goto LAB_00110094;
          pFVar1 = freopen(param_2,"r+b",*(FILE **)(lVar5 + 0x70));
          *(FILE **)(lVar5 + 0x70) = pFVar1;
          if (pFVar1 == (FILE *)0x0) {
            FUN_0010babc(param_1,0);
            *(undefined4 *)((long)param_1 + 0x1c) = 0x11;
            return 0;
          }
          lVar5 = param_1[0xd];
        }
        pcVar3 = FUN_0010fe8c;
LAB_001100c8:
        param_1[10] = (long)pcVar3;
        param_1[0xb] = 0;
LAB_001100cc:
        uVar2 = *(undefined8 *)(lVar5 + 0x40);
        *param_1 = param_1[1];
        param_1[1] = 0;
        (*(code *)param_1[6])(param_1[8],uVar2);
        *(undefined8 *)(lVar5 + 0x48) = 0;
        *(undefined8 *)(lVar5 + 0x40) = 0;
        *(undefined8 *)(lVar5 + 0x58) = 0;
        *(undefined8 *)(lVar5 + 0x50) = 0;
        *(undefined4 *)((long)param_1 + 0x14) = 2;
        return 1;
      }
    }
    else if (*(int *)(lVar5 + 100) != 0) goto LAB_0011000c;
  }
LAB_00110094:
  uVar4 = 0x18;
LAB_00110098:
  *(undefined4 *)((long)param_1 + 0x1c) = uVar4;
  return 0;
}


