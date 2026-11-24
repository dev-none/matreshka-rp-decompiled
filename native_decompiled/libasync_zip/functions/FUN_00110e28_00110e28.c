// Function: FUN_00110e28
// Entry: 00110e28

void FUN_00110e28(undefined8 *param_1,undefined4 param_2,undefined4 param_3,ulong param_4,
                 ulong param_5,undefined4 param_6,uint param_7,undefined4 param_8,undefined2 param_9
                 ,undefined2 param_10)

{
  undefined8 uVar1;
  undefined1 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = DAT_00103490;
  uVar2 = 0;
  if ((param_7 & 0xffff) != 0) {
    uVar2 = 0x14;
  }
  param_1[2] = 0;
  *(undefined1 *)((long)param_1 + 4) = uVar2;
  *(char *)((long)param_1 + 10) = (char)param_9;
  *(char *)((long)param_1 + 7) = (char)((uint)param_8 >> 8);
  *(char *)((long)param_1 + 0xc) = (char)param_10;
  *(char *)((long)param_1 + 9) = (char)(param_7 >> 8);
  *(undefined8 *)((long)param_1 + 0x16) = 0;
  *(char *)((long)param_1 + 0xb) = (char)((ushort)param_9 >> 8);
  *(char *)(param_1 + 2) = (char)((uint)param_6 >> 0x10);
  *(char *)((long)param_1 + 0xd) = (char)((ushort)param_10 >> 8);
  if (0xfffffffe < param_5) {
    param_5 = 0xffffffff;
  }
  *(char *)((long)param_1 + 0x12) = (char)param_5;
  *(char *)((long)param_1 + 0xf) = (char)((uint)param_6 >> 8);
  *(int *)param_1 = (int)uVar1;
  *(char *)((long)param_1 + 0x11) = (char)((uint)param_6 >> 0x18);
  *(undefined1 *)((long)param_1 + 5) = 0;
  *(char *)((long)param_1 + 0x13) = (char)(param_5 >> 8);
  if (0xfffffffe < param_4) {
    param_4 = 0xffffffff;
  }
  *(char *)((long)param_1 + 6) = (char)param_8;
  *(char *)((long)param_1 + 0x15) = (char)(param_5 >> 0x18);
  *(char *)(param_1 + 1) = (char)param_7;
  *(char *)((long)param_1 + 0x17) = (char)(param_4 >> 8);
  *(char *)((long)param_1 + 0xe) = (char)param_6;
  *(char *)((long)param_1 + 0x19) = (char)(param_4 >> 0x18);
  *(char *)((long)param_1 + 0x14) = (char)(param_5 >> 0x10);
  *(char *)((long)param_1 + 0x1b) = (char)((uint)param_2 >> 8);
  *(char *)((long)param_1 + 0x16) = (char)param_4;
  *(char *)(param_1 + 3) = (char)(param_4 >> 0x10);
  *(char *)((long)param_1 + 0x1a) = (char)param_2;
  *(char *)((long)param_1 + 0x1c) = (char)param_3;
  *(char *)((long)param_1 + 0x1d) = (char)((uint)param_3 >> 8);
  return;
}


