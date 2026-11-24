// Function: mz_zip_writer_init_from_reader_v2_noreopen
// Entry: 00110124

undefined4 mz_zip_writer_init_from_reader_v2_noreopen(long *param_1,long param_2,uint param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  long lVar4;
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  lVar4 = param_1[0xd];
  if ((lVar4 != 0) && (*(int *)((long)param_1 + 0x14) == 1)) {
    if ((param_3 >> 0xe & 1) == 0) {
      if (*(int *)(lVar4 + 100) == 0) {
        if ((int)param_1[2] == 0xffff) {
LAB_001101d0:
          uVar3 = 2;
          goto LAB_001101f8;
        }
        if (*param_1 - 0xffffffb4U < 0xffffffff00000000) {
          uVar3 = 3;
          goto LAB_001101f8;
        }
      }
      else {
LAB_00110194:
        if ((int)param_1[2] == -1) goto LAB_001101d0;
      }
      if (*(long *)(lVar4 + 0x70) == 0) {
        if (*(long *)(lVar4 + 0x80) == 0) {
          if (param_1[10] != 0) goto LAB_0011022c;
        }
        else if ((long *)param_1[0xc] == param_1) {
          *(undefined8 *)(lVar4 + 0x90) = *(undefined8 *)(lVar4 + 0x88);
          pcVar2 = FUN_0010fa48;
          goto LAB_00110228;
        }
      }
      else if (((long *)param_1[0xc] == param_1) &&
              ((pcVar2 = FUN_0010fe8c, param_2 != 0 || ((int)param_1[3] != 4)))) {
LAB_00110228:
        param_1[10] = (long)pcVar2;
        param_1[0xb] = 0;
LAB_0011022c:
        uVar1 = *(undefined8 *)(lVar4 + 0x40);
        *param_1 = param_1[1];
        param_1[1] = 0;
        (*(code *)param_1[6])(param_1[8],uVar1);
        *(undefined8 *)(lVar4 + 0x48) = 0;
        *(undefined8 *)(lVar4 + 0x40) = 0;
        *(undefined8 *)(lVar4 + 0x58) = 0;
        *(undefined8 *)(lVar4 + 0x50) = 0;
        *(undefined4 *)((long)param_1 + 0x14) = 2;
        return 1;
      }
    }
    else if (*(int *)(lVar4 + 100) != 0) goto LAB_00110194;
  }
  uVar3 = 0x18;
LAB_001101f8:
  *(undefined4 *)((long)param_1 + 0x1c) = uVar3;
  return 0;
}


