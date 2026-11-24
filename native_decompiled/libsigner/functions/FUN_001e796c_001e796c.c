// Function: FUN_001e796c
// Entry: 001e796c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_001e796c(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  ssize_t sVar5;
  undefined1 *puVar6;
  sockaddr *unaff_x24;
  undefined8 *unaff_x25;
  int unaff_w26;
  uint unaff_w27;
  undefined2 local_c0 [8];
  undefined1 auStack_b0 [8];
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 *local_88;
  uint local_7c;
  long local_78;
  
  local_a8 = tpidr_el0;
  local_78 = *(long *)(local_a8 + 0x28);
  uStack_98 = _UNK_00102828;
  local_a0 = _DAT_00102820;
  puVar3 = (undefined8 *)auStack_b0;
  puVar2 = (undefined1 *)0x21d53de2b345f472;
  local_88 = param_1;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (puVar6 = puVar2, uVar1 = local_a0, puVar2 = puVar6,
                0x3a4ee4b4cd18044 < (long)puVar6) {
            if ((long)puVar6 < 0x3f365012db6b56c1) {
              if ((long)puVar6 < 0x21d53de2b345f472) {
                if (puVar6 == (undefined1 *)0x3a4ee4b4cd18045) {
                  unaff_w27 = 0;
                  puVar2 = (undefined1 *)0x2467c250713f82d4;
                }
                else if (puVar6 == (undefined1 *)0x12b21488b9618371) {
                  unaff_x25[1] = uStack_98;
                  *unaff_x25 = uVar1;
                  setsockopt(unaff_w26,1,0x14,unaff_x25,0x10);
                  iVar4 = connect(unaff_w26,unaff_x24,0x10);
                  puVar2 = (undefined1 *)0x3a4ee4b4cd18045;
                  if (iVar4 != -1) {
                    puVar2 = (undefined1 *)0xcb528befcd0fb52f;
                  }
                }
              }
              else {
                puVar2 = (undefined1 *)0xae2d64bf93f1b31a;
                if ((puVar6 != (undefined1 *)0x21d53de2b345f472) &&
                   (puVar2 = puVar6, puVar6 == (undefined1 *)0x2467c250713f82d4)) {
                  FUN_001d8554(unaff_w26);
                  puVar2 = (undefined1 *)0xe5248230beacb780;
                  local_7c = unaff_w27;
                }
              }
            }
            else if ((long)puVar6 < 0x5e1b922e6e5165fd) {
              if (puVar6 == (undefined1 *)0x3f365012db6b56c1) {
                unaff_x24 = (sockaddr *)(puVar3 + -2);
                DAT_001f8338 = 0;
                unaff_x25 = puVar3 + -4;
                FUN_001cc250(unaff_x24,0,0x10);
                *(undefined2 *)(puVar3 + -2) = 2;
                inet_aton((char *)&DAT_001f7a30,(in_addr *)((long)puVar3 + -0xc));
                *(undefined2 *)((long)puVar3 + -0xe) = 0xa269;
                unaff_w26 = socket(2,1,0);
                puVar3 = unaff_x25;
                puVar2 = &DAT_6b9fb694821e6034;
                if (-1 < unaff_w26) {
                  puVar2 = (undefined1 *)0x12b21488b9618371;
                }
              }
              else if (puVar6 == (undefined1 *)0x4c1b9edb721e7222) {
                puVar2 = &DAT_2b590051c346d3e;
                if (DAT_001f8344._2_1_ == '\0') {
                  puVar2 = (undefined1 *)0xe156d0b4a667ab8e;
                }
              }
            }
            else if (puVar6 == (undefined1 *)0x5e1b922e6e5165fd) {
              iVar4 = FUN_001ebe70(0,1,&DAT_001f833c);
              puVar2 = (undefined1 *)0x4c1b9edb721e7222;
              if (iVar4 != 0) {
                puVar2 = (undefined1 *)0xde0600f0ca761eb9;
              }
            }
            else if (puVar6 == &DAT_6b9fb694821e6034) {
              local_7c = 0;
              *local_88 = 6;
              puVar2 = (undefined1 *)0xe5248230beacb780;
            }
            else if (puVar6 == (undefined1 *)0x7772f905052e4c0f) {
              puVar2 = (undefined1 *)0xae2d64bf93f1b31a;
            }
          }
          if (-0x21f9ff0f3589e148 < (long)puVar6) break;
          if ((long)puVar6 < -0x34ad741032f04ad1) {
            if (puVar6 == (undefined1 *)0xa0d7c67c60e7a82e) {
              DAT_001f833c = 0;
              sendto(unaff_w26,&DAT_001f7a3c,6,0,(sockaddr *)0x0,0);
              FUN_001cc250(puVar3 + -0x20,0,0x100);
              sVar5 = recvfrom(unaff_w26,puVar3 + -0x20,0x100,0,(sockaddr *)0x0,(socklen_t *)0x0);
              unaff_w27 = (uint)(sVar5 == 0);
              puVar2 = (undefined1 *)0x2467c250713f82d4;
            }
            else if (puVar6 == (undefined1 *)0xae2d64bf93f1b31a) {
              iVar4 = FUN_001ebe70(0,1,&DAT_001f8338);
              puVar2 = (undefined1 *)0xf8b8c954db367ca1;
              if (iVar4 != 0) {
                puVar2 = (undefined1 *)0x7772f905052e4c0f;
              }
            }
          }
          else {
            puVar2 = (undefined1 *)0x5e1b922e6e5165fd;
            if (((puVar6 != (undefined1 *)0xcb528befcd0fb52f) &&
                (puVar2 = (undefined1 *)0x3f365012db6b56c1,
                puVar6 != (undefined1 *)0xd937f9741a083d9f)) &&
               (puVar2 = puVar6, puVar6 == (undefined1 *)0xdc6dd27061ebaf34)) {
              DAT_001f7a38 = DAT_001f7a38 ^ 0x7b;
              DAT_001f7a39 = DAT_001f7a39 ^ 0x7b;
              DAT_001f7a30 = DAT_001f7a30 ^ 0x7b7b7b7b7b7b7b7b;
              DAT_001f8344._1_1_ = '\x01';
              puVar2 = (undefined1 *)0x3f365012db6b56c1;
            }
          }
        }
        if (-0x1adb7dcf41534881 < (long)puVar6) break;
        puVar2 = (undefined1 *)0x5e1b922e6e5165fd;
        if ((puVar6 != (undefined1 *)0xde0600f0ca761eb9) &&
           (puVar2 = puVar6, puVar6 == (undefined1 *)0xe156d0b4a667ab8e)) {
          DAT_001f7a3c = DAT_001f7a3c ^ 0x8e;
          DAT_001f7a3d = DAT_001f7a3d ^ 0x8e;
          DAT_001f7a3e = DAT_001f7a3e ^ 0x8e;
          DAT_001f7a40 = DAT_001f7a40 ^ 0x8e;
          DAT_001f7a41 = DAT_001f7a41 ^ 0x8e;
          DAT_001f7a42 = DAT_001f7a42 ^ 0x8e;
          DAT_001f7a3f = DAT_001f7a3f ^ 0x8e;
          DAT_001f8344._2_1_ = '\x01';
          puVar2 = (undefined1 *)0xa0d7c67c60e7a82e;
        }
      }
      if (puVar6 != (undefined1 *)0xf8b8c954db367ca1) break;
      puVar2 = (undefined1 *)0xd937f9741a083d9f;
      if (DAT_001f8344._1_1_ == '\0') {
        puVar2 = (undefined1 *)0xdc6dd27061ebaf34;
      }
    }
    puVar2 = (undefined1 *)0xa0d7c67c60e7a82e;
  } while ((puVar6 == &DAT_2b590051c346d3e) ||
          (puVar2 = puVar6, puVar6 != (undefined1 *)0xe5248230beacb780));
  if (*(long *)(local_a8 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_7c & 1;
}


