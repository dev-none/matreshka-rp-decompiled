// Function: FUN_0019f270
// Entry: 0019f270

uint FUN_0019f270(undefined4 *param_1,char *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  undefined1 *puVar5;
  void *unaff_x25;
  undefined8 *unaff_x26;
  undefined1 *unaff_x27;
  FILE *unaff_x28;
  undefined8 local_c0 [4];
  undefined1 auStack_a0 [8];
  long local_98;
  undefined4 *local_90;
  char *local_88;
  uint local_80;
  uint local_7c;
  long local_78;
  
  local_90 = param_1;
  local_88 = param_2;
  local_98 = tpidr_el0;
  local_78 = *(long *)(local_98 + 0x28);
  puVar2 = auStack_a0;
  puVar1 = (undefined1 *)0x21d53de2b345f472;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (puVar5 = puVar1, puVar1 = puVar5, -0x74736ab24c98360 < (long)puVar5) {
            if ((long)puVar5 < 0x2467c250713f82d4) {
              if ((long)puVar5 < 0x12b21488b9618371) {
                puVar1 = (undefined1 *)0xd937f9741a083d9f;
                if (puVar5 != (undefined1 *)0xf8b8c954db367ca1) {
                  if (puVar5 == &DAT_2b590051c346d3e) {
                    free(unaff_x25);
                    *unaff_x26 = 0;
                    puVar1 = (undefined1 *)0xc0eb019135e10a40;
                  }
                  else {
                    puVar1 = puVar5;
                    if (puVar5 == (undefined1 *)0x3a4ee4b4cd18045) {
                      lVar4 = FUN_0019eb94(unaff_x26,unaff_x27,unaff_x28);
                      local_80 = (uint)(lVar4 != -1);
                      puVar1 = (undefined1 *)0x5e1b922e6e5165fd;
                      if (lVar4 == -1) {
                        puVar1 = (undefined1 *)0xcb528befcd0fb52f;
                      }
                    }
                  }
                }
              }
              else if (puVar5 == (undefined1 *)0x12b21488b9618371) {
                local_7c = 0;
                *local_90 = 8;
                puVar1 = (undefined1 *)0x8b1dacf6763fda11;
              }
              else if (puVar5 == &DAT_1b767e91f4196530) {
                puVar1 = (undefined1 *)0x8b5d2aa4730e6d53;
                if (DAT_001f82f8._2_1_ == '\0') {
                  puVar1 = (undefined1 *)0xa0d7c67c60e7a82e;
                }
              }
              else if (puVar5 == (undefined1 *)0x21d53de2b345f472) {
                puVar1 = (undefined1 *)0xae2d64bf93f1b31a;
              }
            }
            else if ((long)puVar5 < 0x5e1b922e6e5165fd) {
              if (puVar5 == (undefined1 *)0x2467c250713f82d4) {
                DAT_001f82cc = 0;
                lVar4 = FUN_001d4f30(*unaff_x26,&DAT_001f7418);
                puVar1 = (undefined1 *)0xe5248230beacb780;
                if (lVar4 != 0) {
                  puVar1 = (undefined1 *)0xf8b8c954db367ca1;
                }
              }
              else if (puVar5 == (undefined1 *)0x3f365012db6b56c1) {
                DAT_001f82c8 = 0;
                unaff_x26 = (undefined8 *)(puVar2 + -0x10);
                unaff_x27 = puVar2 + -0x20;
                *(undefined8 *)(puVar2 + -0x10) = 0;
                *(undefined8 *)(puVar2 + -0x20) = 0;
                unaff_x28 = fopen(local_88,(char *)&DAT_001f7410);
                puVar2 = unaff_x27;
                puVar1 = (undefined1 *)0x12b21488b9618371;
                if (unaff_x28 != (FILE *)0x0) {
                  puVar1 = &DAT_6b9fb694821e6034;
                }
              }
              else if (puVar5 == (undefined1 *)0x4c1b9edb721e7222) {
                puVar1 = (undefined1 *)0xc0eb019135e10a40;
              }
            }
            else {
              puVar1 = (undefined1 *)0xde0600f0ca761eb9;
              if (((puVar5 != (undefined1 *)0x5e1b922e6e5165fd) &&
                  (puVar1 = (undefined1 *)0x3a4ee4b4cd18045, puVar5 != &DAT_6b9fb694821e6034)) &&
                 (puVar1 = puVar5, puVar5 == (undefined1 *)0x7772f905052e4c0f)) {
                puVar1 = (undefined1 *)0xae2d64bf93f1b31a;
              }
            }
          }
          if ((long)puVar5 < -0x26c8068be5f7c261) break;
          if ((long)puVar5 < -0x21f9ff0f3589e147) {
            if (puVar5 == (undefined1 *)0xd937f9741a083d9f) {
              unaff_x25 = (void *)*unaff_x26;
              puVar1 = (undefined1 *)0x4c1b9edb721e7222;
              if (unaff_x25 != (void *)0x0) {
                puVar1 = &DAT_2b590051c346d3e;
              }
            }
            else if (puVar5 == (undefined1 *)0xdbbbecaa54122c5b) {
              puVar1 = (undefined1 *)0x932656effdaaeaa5;
              if (DAT_001f82f8._1_1_ == '\0') {
                puVar1 = (undefined1 *)0xdc6dd27061ebaf34;
              }
            }
            else if (puVar5 == (undefined1 *)0xdc6dd27061ebaf34) {
              DAT_001f7410 = DAT_001f7410 ^ 0x7b;
              DAT_001f7411 = DAT_001f7411 ^ 0x7b;
              DAT_001f82f8._1_1_ = '\x01';
              puVar1 = (undefined1 *)0x3f365012db6b56c1;
            }
          }
          else if (puVar5 == (undefined1 *)0xde0600f0ca761eb9) {
            iVar3 = FUN_001ebe70(0,1,&DAT_001f82cc);
            puVar1 = &DAT_1b767e91f4196530;
            if (iVar3 != 0) {
              puVar1 = (undefined1 *)0xe156d0b4a667ab8e;
            }
          }
          else {
            puVar1 = (undefined1 *)0xde0600f0ca761eb9;
            if ((puVar5 != (undefined1 *)0xe156d0b4a667ab8e) &&
               (puVar1 = puVar5, puVar5 == (undefined1 *)0xe5248230beacb780)) {
              puVar1 = (undefined1 *)0x3a4ee4b4cd18045;
            }
          }
        }
        if ((long)puVar5 < -0x51d29b406c0e4ce6) break;
        if (puVar5 == (undefined1 *)0xae2d64bf93f1b31a) {
          iVar3 = FUN_001ebe70(0,1,&DAT_001f82c8);
          puVar1 = (undefined1 *)0xdbbbecaa54122c5b;
          if (iVar3 != 0) {
            puVar1 = (undefined1 *)0x7772f905052e4c0f;
          }
        }
        else if (puVar5 == (undefined1 *)0xc0eb019135e10a40) {
          fclose(unaff_x28);
          local_7c = local_80;
          puVar1 = (undefined1 *)0x8b1dacf6763fda11;
        }
        else if (puVar5 == (undefined1 *)0xcb528befcd0fb52f) {
          puVar1 = (undefined1 *)0xd937f9741a083d9f;
        }
      }
      if ((long)puVar5 < -0x6cd9a9100255155b) break;
      puVar1 = (undefined1 *)0x3f365012db6b56c1;
      if ((puVar5 != (undefined1 *)0x932656effdaaeaa5) &&
         (puVar1 = puVar5, puVar5 == (undefined1 *)0xa0d7c67c60e7a82e)) {
        DAT_001f7420 = DAT_001f7420 ^ 0x4f;
        DAT_001f7421 = DAT_001f7421 ^ 0x4f;
        DAT_001f7422 = DAT_001f7422 ^ 0x4f;
        DAT_001f7423 = DAT_001f7423 ^ 0x4f;
        DAT_001f7418 = DAT_001f7418 ^ 0x4f4f4f4f4f4f4f4f;
        DAT_001f82f8._2_1_ = '\x01';
        puVar1 = (undefined1 *)0x2467c250713f82d4;
      }
    }
    puVar1 = (undefined1 *)0x2467c250713f82d4;
  } while ((puVar5 == (undefined1 *)0x8b5d2aa4730e6d53) ||
          (puVar1 = puVar5, puVar5 != (undefined1 *)0x8b1dacf6763fda11));
  if (*(long *)(local_98 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_7c & 1;
}


