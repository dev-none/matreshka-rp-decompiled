// Function: mz_zip_reader_extract_iter_free
// Entry: 0010e680

bool mz_zip_reader_extract_iter_free(long *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  
  if (param_1 == (long *)0x0) {
    return false;
  }
  lVar2 = *param_1;
  if ((lVar2 == 0) || (lVar3 = *(long *)(lVar2 + 0x68), lVar3 == 0)) {
    return false;
  }
  if ((*(int *)((long)param_1 + 0xc) == 0) && ((*(byte *)((long)param_1 + 9) >> 2 & 1) == 0)) {
    if (param_1[7] == param_1[0xf]) {
      if ((int)param_1[2] == (int)param_1[0xd]) goto LAB_0010e6e4;
      uVar4 = 0xb;
    }
    else {
      uVar4 = 0xd;
    }
    *(undefined4 *)(lVar2 + 0x1c) = uVar4;
    *(undefined4 *)((long)param_1 + 0xc) = 0xffffffff;
  }
LAB_0010e6e4:
  if (*(long *)(lVar3 + 0x80) == 0) {
    (**(code **)(lVar2 + 0x30))(*(undefined8 *)(lVar2 + 0x40),param_1[0x94]);
    lVar2 = *param_1;
  }
  if (param_1[0x95] != 0) {
    (**(code **)(lVar2 + 0x30))(*(undefined8 *)(lVar2 + 0x40));
    lVar2 = *param_1;
  }
  iVar1 = *(int *)((long)param_1 + 0xc);
  (**(code **)(lVar2 + 0x30))(*(undefined8 *)(lVar2 + 0x40),param_1);
  return iVar1 == 0;
}


