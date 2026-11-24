// Function: mz_crc32
// Entry: 001070dc

uint mz_crc32(uint param_1,byte *param_2,ulong param_3)

{
  byte *pbVar1;
  uint uVar2;
  
  param_1 = ~param_1;
  for (; 3 < param_3; param_3 = param_3 - 4) {
    uVar2 = *(uint *)(&DAT_00103514 + ((ulong)(*param_2 ^ param_1) & 0xff) * 4) ^ param_1 >> 8;
    uVar2 = *(uint *)(&DAT_00103514 + ((ulong)(param_2[1] ^ uVar2) & 0xff) * 4) ^ uVar2 >> 8;
    uVar2 = *(uint *)(&DAT_00103514 + ((ulong)(param_2[2] ^ uVar2) & 0xff) * 4) ^ uVar2 >> 8;
    pbVar1 = param_2 + 3;
    param_2 = param_2 + 4;
    param_1 = *(uint *)(&DAT_00103514 + ((ulong)(*pbVar1 ^ uVar2) & 0xff) * 4) ^ uVar2 >> 8;
  }
  for (; param_3 != 0; param_3 = param_3 - 1) {
    param_1 = *(uint *)(&DAT_00103514 + ((ulong)(*param_2 ^ param_1) & 0xff) * 4) ^ param_1 >> 8;
    param_2 = param_2 + 1;
  }
  return ~param_1;
}


