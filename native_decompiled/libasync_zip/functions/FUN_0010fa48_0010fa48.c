// Function: FUN_0010fa48
// Entry: 0010fa48

size_t FUN_0010fa48(long param_1,long param_2,void *param_3,size_t param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x68);
  uVar1 = param_4 + param_2;
  if (param_4 + param_2 <= *(ulong *)(lVar5 + 0x88)) {
    uVar1 = *(ulong *)(lVar5 + 0x88);
  }
  if (param_4 != 0) {
    uVar3 = *(ulong *)(lVar5 + 0x90);
    if (uVar3 < uVar1) {
      if (uVar3 < 0x41) {
        uVar3 = 0x40;
      }
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 << 1;
      } while (uVar4 < uVar1);
      lVar2 = (**(code **)(param_1 + 0x38))
                        (*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(lVar5 + 0x80),1,uVar4);
      if (lVar2 == 0) {
        *(undefined4 *)(param_1 + 0x1c) = 0x10;
        return 0;
      }
      *(long *)(lVar5 + 0x80) = lVar2;
      *(ulong *)(lVar5 + 0x90) = uVar4;
    }
    else {
      lVar2 = *(long *)(lVar5 + 0x80);
    }
    memcpy((void *)(lVar2 + param_2),param_3,param_4);
    *(ulong *)(lVar5 + 0x88) = uVar1;
  }
  return param_4;
}


