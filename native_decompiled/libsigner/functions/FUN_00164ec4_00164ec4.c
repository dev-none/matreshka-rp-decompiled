// Function: FUN_00164ec4
// Entry: 00164ec4

uint FUN_00164ec4(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong unaff_x23;
  ulong uVar7;
  uint unaff_w24;
  long unaff_x25;
  long *unaff_x27;
  ulong unaff_x28;
  ulong local_b8;
  long local_b0;
  ulong local_a8;
  ulong local_a0;
  long local_98;
  long local_90;
  long local_88;
  ulong local_80;
  ulong local_78;
  long local_70;
  long local_68;
  
  uVar1 = 0x79864b111a5435b8;
  if ((param_3 == 0 || param_2 == 0) || param_1 == 0) {
    uVar1 = 0xb55de9e95c18f92f;
  }
  uVar3 = uVar1;
  uVar2 = 0x206f464748dca0ab;
LAB_0016505c:
  do {
    uVar6 = uVar2;
    uVar5 = uVar3;
    uVar2 = uVar6;
    uVar3 = uVar5;
    if ((long)uVar6 < 0x17eb4157793a5f48) {
      if ((long)uVar6 < -0x267313cf1bca7284) {
        if ((long)uVar6 < -0x76b3718b05ed3070) {
          if (uVar6 == 0x827010e92a9be70f) {
            uVar5 = local_80;
            uVar7 = 0;
            goto LAB_00165538;
          }
          if (uVar6 != 0x884ff3c33439cbe5) goto LAB_0016505c;
        }
        else {
          if (uVar6 == 0x894c8e74fa12cf90) {
            local_98 = local_70 + 1;
            uVar2 = 0x71c9a92d56adeb5e;
            if (local_98 != param_3) {
              uVar2 = 0x67842843c11547fb;
            }
            goto LAB_0016505c;
          }
          if (uVar6 == 0xa2334eebc7100590) {
            unaff_x27 = (long *)(param_1 + unaff_x23 * 0x10 + 0x70);
            local_88 = *unaff_x27;
            uVar2 = 0x38e9429814b4562c;
            unaff_x28 = local_78;
            local_a8 = unaff_x23;
            if (local_88 != 0) {
              uVar2 = 0x62c11c4de3a38bad;
            }
            goto LAB_0016505c;
          }
          if (uVar6 != 0xb55de9e95c18f92f) goto LAB_0016505c;
        }
      }
      else {
        if ((long)uVar6 < -0xdc5394a62077b9b) {
          if (uVar6 == 0xd98cec30e4358d7c) {
            local_a0 = local_a8 + 1;
            uVar2 = 0x7befb177b102ee8f;
            local_b8 = uVar5;
            if (uVar5 <= local_a0) {
              uVar2 = 0x884ff3c33439cbe5;
            }
          }
          else if (uVar6 == 0xe040d3ff9e231e88) {
            uVar2 = 0xf080cdfe5886fce1;
            if (unaff_x25 != 0) {
              uVar2 = 0x525326b4712fd47e;
            }
            local_70 = local_68;
            local_b0 = unaff_x25;
          }
          else if (uVar6 == 0xf080cdfe5886fce1) {
            uVar2 = 0x894c8e74fa12cf90;
          }
          goto LAB_0016505c;
        }
        if (uVar6 == 0xf23ac6b59df88465) {
          iVar4 = FUN_001ca28c(local_b0,local_90);
          uVar2 = 0x548afa8be9960c8f;
          if (iVar4 != 0) {
            uVar2 = 0xf2e7aa41f7149d6d;
          }
          goto LAB_0016505c;
        }
        uVar2 = 0x894c8e74fa12cf90;
        if ((uVar6 == 0xf2e7aa41f7149d6d) || (uVar2 = uVar6, uVar6 != 0xf745e8bb6748010b))
        goto LAB_0016505c;
      }
      unaff_w24 = 0;
LAB_001652a8:
      uVar3 = uVar5;
      uVar2 = 0x17eb4157793a5f48;
      goto LAB_0016505c;
    }
    if (0x62c11c4de3a38bac < (long)uVar6) {
      if (0x71c9a92d56adeb5d < (long)uVar6) {
        if (uVar6 == 0x71c9a92d56adeb5e) {
          uVar3 = *(ulong *)(param_1 + 0x870);
          uVar2 = 0xd98cec30e4358d7c;
        }
        else if (uVar6 == 0x79864b111a5435b8) {
          local_80 = *(ulong *)(param_1 + 0x870);
          uVar2 = 0xf745e8bb6748010b;
          if (local_80 != 0) {
            uVar2 = 0x827010e92a9be70f;
          }
        }
        else {
          uVar5 = local_b8;
          uVar7 = local_a0;
          if (uVar6 == 0x7befb177b102ee8f) {
LAB_00165538:
            uVar2 = 0xa2334eebc7100590;
            unaff_x23 = uVar7;
            local_78 = uVar5;
          }
        }
        goto LAB_0016505c;
      }
      if (uVar6 == 0x62c11c4de3a38bad) {
        local_68 = 0;
        unaff_x25 = local_88;
      }
      else {
        if (uVar6 != 0x67842843c11547fb) goto LAB_0016505c;
        local_68 = local_98;
        unaff_x25 = *unaff_x27;
      }
      uVar2 = 0xe040d3ff9e231e88;
      goto LAB_0016505c;
    }
    if ((long)uVar6 < 0x38e9429814b4562c) {
      uVar2 = 0x894c8e74fa12cf90;
      if (((uVar6 != 0x1ffa04c68cf75376) && (uVar2 = uVar1, uVar6 != 0x206f464748dca0ab)) &&
         (uVar2 = uVar6, uVar6 == 0x17eb4157793a5f48)) {
        return unaff_w24 & 1;
      }
    }
    else {
      uVar3 = unaff_x28;
      uVar2 = 0xd98cec30e4358d7c;
      if (uVar6 != 0x38e9429814b4562c) {
        if (uVar6 == 0x525326b4712fd47e) {
          local_90 = *(long *)(param_2 + local_70 * 8);
          uVar3 = uVar5;
          uVar2 = 0x1ffa04c68cf75376;
          if (local_90 != 0) {
            uVar2 = 0xf23ac6b59df88465;
          }
        }
        else {
          uVar3 = uVar5;
          uVar2 = uVar6;
          if (uVar6 == 0x548afa8be9960c8f) {
            unaff_w24 = 1;
            goto LAB_001652a8;
          }
        }
      }
    }
  } while( true );
}


