// Function: FUN_0010f3fc
// Entry: 0010f3fc

ulong FUN_0010f3fc(uint *param_1,undefined8 param_2,byte *param_3,ulong param_4)

{
  byte *pbVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = ~*param_1;
  for (uVar3 = param_4; 3 < uVar3; uVar3 = uVar3 - 4) {
    uVar2 = *(uint *)(&DAT_00103514 + ((ulong)(*param_3 ^ uVar2) & 0xff) * 4) ^ uVar2 >> 8;
    uVar2 = *(uint *)(&DAT_00103514 + ((ulong)(param_3[1] ^ uVar2) & 0xff) * 4) ^ uVar2 >> 8;
    uVar2 = *(uint *)(&DAT_00103514 + ((ulong)(param_3[2] ^ uVar2) & 0xff) * 4) ^ uVar2 >> 8;
    pbVar1 = param_3 + 3;
    param_3 = param_3 + 4;
    uVar2 = *(uint *)(&DAT_00103514 + ((ulong)(*pbVar1 ^ uVar2) & 0xff) * 4) ^ uVar2 >> 8;
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    uVar2 = *(uint *)(&DAT_00103514 + ((ulong)(*param_3 ^ uVar2) & 0xff) * 4) ^ uVar2 >> 8;
    param_3 = param_3 + 1;
  }
  *param_1 = ~uVar2;
  return param_4;
}


