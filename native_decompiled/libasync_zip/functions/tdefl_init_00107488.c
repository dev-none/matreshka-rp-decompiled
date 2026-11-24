// Function: tdefl_init
// Entry: 00107488

undefined8 tdefl_init(undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  *(uint *)(param_1 + 2) = param_4;
  *(uint *)((long)param_1 + 0x14) = ((param_4 & 0xfff) * 0x5556 + 0xaaac >> 0x10) + 1;
  *(uint *)(param_1 + 3) = ((param_4 >> 2 & 0x3ff) * 0x5556 + 0xaaac >> 0x10) + 1;
  *(uint *)((long)param_1 + 0x1c) = param_4 >> 0xe & 1;
  if ((param_4 >> 0xf & 1) == 0) {
    memset((void *)((long)param_1 + 0x292aa),0,0x10000);
  }
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 10) = 8;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined1 *)((long)param_1 + 0x92aa) = 0;
  param_1[6] = (long)param_1 + 0x92ab;
  param_1[7] = (undefined1 *)((long)param_1 + 0x92aa);
  param_1[0xe] = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[8] = (long)param_1 + 0x392aa;
  param_1[9] = (long)param_1 + 0x392aa;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 4) = 1;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = 0;
  if ((param_4 >> 0xf & 1) == 0) {
    memset(param_1 + 0x19,0,0x8101);
  }
  memset((void *)((long)param_1 + 0x81ca),0,0x240);
  *(undefined8 *)((long)param_1 + 0x8412) = 0;
  *(undefined8 *)((long)param_1 + 0x840a) = 0;
  *(undefined8 *)((long)param_1 + 0x8422) = 0;
  *(undefined8 *)((long)param_1 + 0x841a) = 0;
  *(undefined8 *)((long)param_1 + 0x8432) = 0;
  *(undefined8 *)((long)param_1 + 0x842a) = 0;
  *(undefined8 *)((long)param_1 + 0x8442) = 0;
  *(undefined8 *)((long)param_1 + 0x843a) = 0;
  return 0;
}


