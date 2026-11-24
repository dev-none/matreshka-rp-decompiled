// Function: FUN_001cbfb0
// Entry: 001cbfb0

ulong FUN_001cbfb0(byte *param_1,byte *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint in_w7;
  ulong uVar3;
  byte *in_x12;
  ulong uVar4;
  long unaff_x19;
  uint unaff_w20;
  byte *unaff_x21;
  byte *unaff_x22;
  byte *unaff_x24;
  long unaff_x25;
  byte *unaff_x26;
  byte *pbVar5;
  byte *unaff_x27;
  byte *pbVar6;
  long unaff_x28;
  long lVar7;
  
  uVar3 = 0xc84313bc4262f702;
  uVar1 = uVar3;
  if (param_3 != 0) {
    uVar1 = 0xdad5fc5726557d2b;
  }
  uVar2 = 0x80946337e81a76ad;
LAB_001cc0b4:
  do {
    while (lVar7 = unaff_x28, pbVar6 = unaff_x27, pbVar5 = unaff_x26, uVar4 = uVar2, uVar2 = uVar4,
          unaff_x26 = pbVar5, unaff_x27 = pbVar6, unaff_x28 = lVar7,
          -0x252a03a8d9aa82d6 < (long)uVar4) {
      if ((long)uVar4 < 0x859356aa69720d1) {
        uVar2 = 0xf494b3c44b0594a4;
        unaff_x26 = param_2;
        unaff_x27 = param_1;
        unaff_x28 = param_3;
        if ((uVar4 != 0xdad5fc5726557d2b) &&
           (uVar2 = uVar4, unaff_x26 = pbVar5, unaff_x27 = pbVar6, unaff_x28 = lVar7,
           uVar4 == 0xf494b3c44b0594a4)) {
          in_w7 = (uint)*pbVar6;
          unaff_w20 = (uint)*pbVar5;
          in_x12 = pbVar5;
          uVar2 = 0xa6bc7238d5ae4537;
          unaff_x24 = pbVar6;
          unaff_x25 = lVar7;
          if (*pbVar6 != *pbVar5) {
            uVar2 = 0xc5658784255ca4e2;
          }
        }
      }
      else if (uVar4 == 0x859356aa69720d1) {
LAB_001cc094:
        uVar3 = 0;
LAB_001cc0a0:
        uVar2 = 0xc82fc556374cfb04;
      }
      else if (uVar4 == 0x3359a89ff97157ac) {
        uVar2 = 0xf494b3c44b0594a4;
        unaff_x26 = unaff_x22;
        unaff_x27 = unaff_x21;
        unaff_x28 = unaff_x19;
      }
    }
    if ((long)uVar4 < -0x3a9a787bdaa35b1e) {
      uVar2 = uVar1;
      if ((uVar4 != 0x80946337e81a76ad) && (uVar2 = uVar4, uVar4 == 0xa6bc7238d5ae4537)) {
        unaff_x19 = unaff_x25 + -1;
        unaff_x21 = unaff_x24 + 1;
        unaff_x22 = in_x12 + 1;
        uVar2 = 0x859356aa69720d1;
        if (unaff_x19 != 0) {
          uVar2 = 0x3359a89ff97157ac;
        }
      }
      goto LAB_001cc0b4;
    }
    if (uVar4 == 0xc5658784255ca4e2) {
      uVar3 = (ulong)((in_w7 & 0xff) - (unaff_w20 & 0xff));
      goto LAB_001cc0a0;
    }
    if (uVar4 == 0xc84313bc4262f702) goto LAB_001cc094;
    if (uVar4 == 0xc82fc556374cfb04) {
      return uVar3 & 0xffffffff;
    }
  } while( true );
}


