// Function: FUN_001e485c
// Entry: 001e485c

void FUN_001e485c(int *param_1,ulong param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong unaff_x19;
  ulong unaff_x23;
  ulong uVar9;
  uint unaff_w26;
  int local_80;
  uint local_70;
  int local_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_70 = 0;
  uVar3 = param_2;
  lVar8 = 0x494913e247ec810;
LAB_001e4948:
  while (lVar7 = lVar8, uVar6 = uVar3, uVar9 = uVar6 & 0xffffffff, lVar8 = lVar7, uVar3 = uVar9,
        0x859356aa69720d0 < lVar7) {
    if (lVar7 < 0x482e5862fb274eec) {
      if (lVar7 < 0x25e60e8a57340c35) {
        if (lVar7 == 0x859356aa69720d1) {
          FUN_001e39bc(param_1,param_2,local_6c,param_4);
          bVar4 = *param_1 == 0;
          lVar7 = -0x3a9a787bdaa35b1e;
          lVar8 = -0x37d03aa9c8b304fc;
          goto LAB_001e4940;
        }
        if (lVar7 == 0x1c201a6f44d38273) {
          bVar4 = *param_1 == 0;
          lVar8 = 0x25e60e8a57340c35;
          lVar7 = 0x57f8c36627f7246e;
          goto LAB_001e4940;
        }
        uVar3 = uVar6 & 0xffffffff;
        if (lVar7 == 0x1029ba407f8d7b2d) {
          if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
      }
      else if (lVar7 == 0x25e60e8a57340c35) {
        bVar4 = local_70 + 4 == param_3;
        lVar7 = -0x434983ca2ec7188a;
        lVar8 = 0x5a82b43288d2c981;
LAB_001e4940:
        if (!bVar4) {
          lVar8 = lVar7;
        }
      }
      else {
        uVar3 = uVar6 & 0xffffffff;
        lVar8 = 0x1c201a6f44d38273;
        if ((lVar7 != 0x3359a89ff97157ac) &&
           (uVar3 = uVar6 & 0xffffffff, lVar8 = lVar7, lVar7 == 0x38b550c75dcbd861)) {
LAB_001e4b7c:
          uVar3 = uVar9;
          lVar8 = 0x1029ba407f8d7b2d;
        }
      }
    }
    else if (lVar7 < 0x57f8c36627f7246e) {
      if (lVar7 == 0x482e5862fb274eec) {
        uVar3 = uVar6 & 0xffffffff;
        lVar8 = -0x7f6b9cc817e58953;
        unaff_w26 = local_70;
        if (local_70 + 4 <= param_3) {
          lVar8 = -0x252a03a8d9aa82d5;
        }
      }
      else {
        if (lVar7 == 0x4d702a7aef09f0b4) {
          lVar8 = 0x5375277af4011243;
          goto LAB_001e4f08;
        }
        if (lVar7 == 0x5375277af4011243) goto LAB_001e4b7c;
      }
    }
    else {
      uVar3 = uVar6 & 0xffffffff;
      lVar8 = 0x1029ba407f8d7b2d;
      if (((lVar7 != 0x57f8c36627f7246e) && (uVar3 = uVar9, lVar7 != 0x5a82b43288d2c981)) &&
         (lVar8 = lVar7, lVar7 == 0x6ea6282306ea075c)) {
        uVar3 = uVar6 & 0xffffffff;
        lVar8 = -0x1736fceebecd72f8;
        if ((uint)unaff_x19 != unaff_w26) {
          lVar8 = 0x4d702a7aef09f0b4;
        }
      }
    }
  }
  if (-0x37bcec43bd9d08ff < lVar7) {
    if (lVar7 < -0x1736fceebecd72f8) {
      if (lVar7 == -0x37bcec43bd9d08fe) {
        uVar3 = 0;
        lVar8 = -0x59438dc72a51bac9;
      }
      else if (lVar7 == -0x252a03a8d9aa82d5) {
        lVar8 = -0xb6b4c3bb4fa6b5c;
        if (unaff_w26 != 0) {
          lVar8 = -0x37bcec43bd9d08fe;
        }
        local_6c = 0;
      }
      else if (lVar7 == -0x1c57606b44c18182) {
        unaff_x19 = unaff_x23 & 0xffffffff;
        lVar8 = 0x6ea6282306ea075c;
      }
    }
    else {
      lVar8 = 0x1c201a6f44d38273;
      if (lVar7 != -0x1736fceebecd72f8) {
        if (lVar7 == -0xb6b4c3bb4fa6b5c) {
          unaff_x19 = 0;
          lVar8 = 0x6ea6282306ea075c;
        }
        else {
          lVar8 = lVar7;
          if (lVar7 == 0x494913e247ec810) {
            uVar6 = FUN_001dc360(param_1,&local_70,4,1,param_4);
            lVar8 = 0x482e5862fb274eec;
            if ((uVar6 & 1) == 0) {
              lVar8 = 0x38b550c75dcbd861;
            }
          }
        }
      }
    }
    goto LAB_001e4948;
  }
  if (lVar7 < -0x434983ca2ec7188a) {
    if (lVar7 != -0x7f6b9cc817e58953) {
      uVar3 = unaff_x23 & 0xffffffff;
      lVar8 = -0x59438dc72a51bac9;
      if ((lVar7 != -0x5ab7f064f0b58e71) &&
         (uVar3 = uVar9, lVar8 = lVar7, lVar7 == -0x59438dc72a51bac9)) {
        uVar5 = FUN_001dc360(param_1,&local_6c,4,1,param_4);
        lVar8 = 0x859356aa69720d1;
        local_80 = (int)uVar6;
        if ((uVar5 & 1) == 0) {
          lVar8 = 0x3359a89ff97157ac;
        }
      }
      goto LAB_001e4948;
    }
  }
  else if (lVar7 != -0x434983ca2ec7188a) {
    lVar8 = 0x5375277af4011243;
    if ((lVar7 != -0x3a9a787bdaa35b1e) && (lVar8 = lVar7, lVar7 == -0x37d03aa9c8b304fc)) {
      uVar1 = local_80 + local_6c + 4;
      unaff_x23 = (ulong)uVar1;
      lVar8 = -0x5ab7f064f0b58e71;
      if (unaff_w26 <= uVar1) {
        lVar8 = -0x1c57606b44c18182;
      }
    }
    goto LAB_001e4948;
  }
  lVar8 = 0x1029ba407f8d7b2d;
LAB_001e4f08:
  *param_1 = 8;
  goto LAB_001e4948;
}


