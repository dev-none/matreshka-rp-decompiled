// Function: FUN_00118064
// Entry: 00118064

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00118064(long param_1)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *unaff_x25;
  undefined4 local_a0 [4];
  undefined1 auStack_90 [8];
  long local_88;
  ulong local_80;
  long local_78;
  
  local_88 = tpidr_el0;
  local_78 = *(long *)(local_88 + 0x28);
  lVar1 = param_1 + 0x20;
  puVar3 = (undefined4 *)auStack_90;
  lVar2 = 0x41b289a2dff1803f;
LAB_00118154:
  do {
    while (lVar6 = lVar2, lVar2 = lVar6, lVar6 < 0x2a48f668877cdd32) {
      if (lVar6 < -0x3211a5a2bdd4e786) {
        if (lVar6 < -0x3aaab867c5c68649) {
          lVar2 = 0x2f2e384764a31bcb;
          if (lVar6 != -0x6c22d72709c1d475) {
            if (lVar6 == -0x4da74647737c4dfb) {
              *unaff_x25 = 0;
              uVar5 = FUN_001e796c(unaff_x25);
              lVar2 = -0x3668951722a1537d;
              if ((uVar5 & 1) == 0) {
                lVar2 = -0x2d8c3ee201ca9c56;
              }
            }
            else {
              lVar2 = lVar6;
              if (lVar6 == -0x424953ef3462bbe8) {
                local_80 = *(ulong *)(param_1 + 0x238);
LAB_001186fc:
                lVar2 = 0x3a9c231f2d8a4e3c;
              }
            }
          }
        }
        else if (lVar6 < -0x3668951722a1537d) {
          lVar2 = 0x2295d16d4cebc552;
          if ((lVar6 != -0x3aaab867c5c68649) && (lVar2 = lVar6, lVar6 == -0x369b3f75eecf530c)) {
            _DAT_001f5430 = _DAT_001f5430 ^ 0x9494949494949494;
            uRam00000000001f5438 = uRam00000000001f5438 ^ 0x9494949494949494;
            DAT_001f7bbe = '\x01';
            lVar2 = 0x59d216b5400806b3;
          }
        }
        else if (lVar6 == -0x3668951722a1537d) {
          FUN_001e9264(lVar1,0x2d);
          *(ulong *)(param_1 + 0x238) = *(ulong *)(param_1 + 0x238) | 1;
          lVar2 = -0x360c0f1539ebc480;
        }
        else if (lVar6 == -0x360c0f1539ebc480) {
          *unaff_x25 = 0;
          uVar5 = FUN_001e8090(unaff_x25);
          lVar2 = 0x36f58c134bb4da90;
          if ((uVar5 & 1) == 0) {
            lVar2 = -0x424953ef3462bbe8;
          }
        }
      }
      else if (lVar6 < -0x1486d5613cf26c5a) {
        if (lVar6 == -0x3211a5a2bdd4e786) {
          FUN_001e9264(lVar1,0x25);
          *(ulong *)(param_1 + 0x238) = *(ulong *)(param_1 + 0x238) | 1;
          lVar2 = -0x4da74647737c4dfb;
        }
        else {
          lVar2 = -0x360c0f1539ebc480;
          if ((lVar6 != -0x2d8c3ee201ca9c56) && (lVar2 = lVar6, lVar6 == -0x2a23b7cdbb09e17d)) {
            FUN_001e9264(lVar1,0x23);
            *(ulong *)(param_1 + 0x238) = *(ulong *)(param_1 + 0x238) | 1;
            lVar2 = 0x2295d16d4cebc552;
          }
        }
      }
      else if (lVar6 < 0xafa449b1d8fc46d) {
        if (lVar6 == -0x1486d5613cf26c5a) {
          DAT_001f5448 = DAT_001f5448 ^ 0x6e;
          DAT_001f5449 = DAT_001f5449 ^ 0x6e;
          DAT_001f544a = DAT_001f544a ^ 0x6e;
          DAT_001f544b = DAT_001f544b ^ 0x6e;
          DAT_001f544c = DAT_001f544c ^ 0x6e;
          DAT_001f544d = DAT_001f544d ^ 0x6e;
          DAT_001f5440 = DAT_001f5440 ^ 0x6e6e6e6e6e6e6e6e;
          DAT_001f7bbf = '\x01';
          lVar2 = 0x6db8b65106c88b15;
        }
        else if (lVar6 == -0xc99df4c3f8a6996) {
          FUN_001e9264(lVar1,0x22);
          *(ulong *)(param_1 + 0x238) = *(ulong *)(param_1 + 0x238) | 1;
          lVar2 = 0x76d1d42eecd0e862;
        }
      }
      else if (lVar6 == 0xafa449b1d8fc46d) {
        lVar2 = 0x6958e2c49555046a;
        if (DAT_001f7bbe == '\0') {
          lVar2 = -0x369b3f75eecf530c;
        }
      }
      else if (lVar6 == 0x2295d16d4cebc552) {
        *unaff_x25 = 0;
        uVar5 = FUN_001e72dc();
        lVar2 = -0x3211a5a2bdd4e786;
        if ((uVar5 & 1) == 0) {
          lVar2 = 0x2a48f668877cdd32;
        }
      }
    }
    if (lVar6 < 0x51fadc63073821de) {
      if (lVar6 < 0x36f58c134bb4da90) {
        lVar2 = -0x4da74647737c4dfb;
        if (((lVar6 != 0x2a48f668877cdd32) &&
            (lVar2 = 0x76d1d42eecd0e862, lVar6 != 0x2ec51580788120a1)) &&
           (lVar2 = lVar6, lVar6 == 0x2f2e384764a31bcb)) {
          iVar4 = FUN_001ebe70(0,1,&DAT_001f7b98);
          lVar2 = 0xafa449b1d8fc46d;
          if (iVar4 != 0) {
            lVar2 = -0x6c22d72709c1d475;
          }
        }
      }
      else if (lVar6 < 0x41b289a2dff1803f) {
        if (lVar6 == 0x36f58c134bb4da90) {
          FUN_001e9264(lVar1,0x2e);
          local_80 = *(ulong *)(param_1 + 0x238) | 1;
          goto LAB_001186fc;
        }
        if (lVar6 == 0x3a9c231f2d8a4e3c) {
          *(ulong *)(param_1 + 0x238) = local_80 | 0x603c00000000;
          if (*(long *)(local_88 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
      }
      else {
        lVar2 = 0x2f2e384764a31bcb;
        if ((lVar6 != 0x41b289a2dff1803f) && (lVar2 = lVar6, lVar6 == 0x4cf3a029a1fce053)) {
          lVar2 = 0x6db8b65106c88b15;
        }
      }
      goto LAB_00118154;
    }
    if (lVar6 < 0x6958e2c49555046a) {
      if (lVar6 == 0x51fadc63073821de) {
        iVar4 = FUN_001ebe70(0,1,&DAT_001f7b9c);
        lVar2 = 0x7619f2f58e1fa273;
        if (iVar4 != 0) {
          lVar2 = 0x601969adc88064ff;
        }
      }
      else if (lVar6 == 0x59d216b5400806b3) {
        DAT_001f7b98 = 0;
        unaff_x25 = puVar3 + -4;
        puVar3[-4] = 0;
        uVar5 = FUN_0019f270(unaff_x25,&DAT_001f5430);
        puVar3 = unaff_x25;
        lVar2 = -0xc99df4c3f8a6996;
        if ((uVar5 & 1) == 0) {
          lVar2 = 0x2ec51580788120a1;
        }
      }
      else if (lVar6 == 0x601969adc88064ff) {
        lVar2 = 0x51fadc63073821de;
      }
    }
    else if (lVar6 < 0x7619f2f58e1fa273) {
      lVar2 = 0x59d216b5400806b3;
      if ((lVar6 != 0x6958e2c49555046a) && (lVar2 = lVar6, lVar6 == 0x6db8b65106c88b15)) {
        DAT_001f7b9c = 0;
        *unaff_x25 = 0;
        uVar5 = FUN_0019fa18(unaff_x25,&DAT_001f5440);
        lVar2 = -0x2a23b7cdbb09e17d;
        if ((uVar5 & 1) == 0) {
          lVar2 = -0x3aaab867c5c68649;
        }
      }
    }
    else if (lVar6 == 0x7619f2f58e1fa273) {
      lVar2 = 0x4cf3a029a1fce053;
      if (DAT_001f7bbf == '\0') {
        lVar2 = -0x1486d5613cf26c5a;
      }
    }
    else if (lVar6 == 0x76d1d42eecd0e862) {
      lVar2 = 0x51fadc63073821de;
    }
  } while( true );
}


