// Function: FUN_0012b44c
// Entry: 0012b44c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0012b44c(void)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined1 *unaff_x25;
  undefined1 auStack_a0 [8];
  long local_98;
  uint local_8c;
  long local_88;
  
  local_98 = tpidr_el0;
  local_88 = *(long *)(local_98 + 0x28);
  puVar1 = auStack_a0;
  lVar4 = -0x5b9cc4f99399843b;
LAB_0012b53c:
  do {
    while( true ) {
      while (lVar3 = lVar4, lVar4 = lVar3, lVar3 < 0x511e52f37548d8c) {
        if (lVar3 < -0x3c4948abc2b7c804) {
          if (lVar3 < -0x5b9cc4f99399843b) {
            if (lVar3 == -0x7f6d33b55f391ce0) {
              lVar4 = -0x3ab61a3b5a5df653;
              if (DAT_001f7ff1 == '\0') {
                lVar4 = 0x5baab65aef839a51;
              }
            }
            else if (lVar3 == -0x6b5dda43bb5b01ad) {
              DAT_001f7cc8 = 0;
              __system_property_get(&DAT_001f59d0,unaff_x25);
              lVar4 = FUN_001cac50(unaff_x25,&DAT_001f59c0);
              local_8c = (uint)(lVar4 != 0);
              lVar4 = 0x472dd815bf663ad;
            }
            else if (lVar3 == -0x655eb191e915c507) {
              lVar4 = 0x5a2d156ddbe6a013;
              if (DAT_001f7ff0 == '\0') {
                lVar4 = 0x1d7a8ba98331510d;
              }
            }
          }
          else if (lVar3 < -0x5321587054678f55) {
            lVar4 = -0x578c2f043c0b1eeb;
            if ((lVar3 != -0x5b9cc4f99399843b) && (lVar4 = lVar3, lVar3 == -0x578c2f043c0b1eeb)) {
              iVar2 = FUN_001ebe70(0,1,&DAT_001f7cc8);
              lVar4 = 0x18c6d844e8c5deb1;
              if (iVar2 != 0) {
                lVar4 = 0x97042fccc42e1e6;
              }
            }
          }
          else if (lVar3 == -0x5321587054678f55) {
            _DAT_001f5870 = _DAT_001f5870 ^ 0x2b2b2b2b2b2b2b2b;
            uRam00000000001f5878 = uRam00000000001f5878 ^ 0x2b2b2b2b2b2b2b2b;
            s_JH__YNY__001f5880._0_8_ = s_JH__YNY__001f5880._0_8_ ^ 0x2b2b2b2b2b2b2b2b;
            DAT_001f7fdc = '\x01';
            lVar4 = -0x3fa05c06b3e8d449;
          }
          else if (lVar3 == -0x3fa05c06b3e8d449) {
            DAT_001f7c78 = 0;
            unaff_x25 = puVar1 + -0x60;
            *(undefined8 *)(puVar1 + -0xc) = 0;
            *(undefined8 *)(puVar1 + -0x14) = 0;
            *(undefined8 *)(puVar1 + -0x48) = 0;
            *(undefined8 *)(puVar1 + -0x50) = 0;
            *(undefined8 *)(puVar1 + -0x38) = 0;
            *(undefined8 *)(puVar1 + -0x40) = 0;
            *(undefined8 *)(puVar1 + -0x28) = 0;
            *(undefined8 *)(puVar1 + -0x30) = 0;
            *(undefined8 *)(puVar1 + -0x18) = 0;
            *(undefined8 *)(puVar1 + -0x20) = 0;
            *(undefined8 *)(puVar1 + -0x58) = 0;
            *(undefined8 *)(puVar1 + -0x60) = 0;
            __system_property_get(&DAT_001f5870,unaff_x25);
            lVar3 = FUN_001cac50(unaff_x25,&DAT_001f59c0);
            puVar1 = unaff_x25;
            lVar4 = 0xaba53aa9e14658d;
            if (lVar3 != 0) {
              lVar4 = 0x381cd2c9dfc8aa95;
            }
          }
        }
        else if (lVar3 < -0x2255323ecc8e4ab6) {
          if (lVar3 == -0x3c4948abc2b7c804) {
            DAT_001f7cc8 = 0;
            lVar4 = 0x2c85b040a530b3b5;
          }
          else {
            lVar4 = -0x2255323ecc8e4ab6;
            if ((lVar3 != -0x3ab61a3b5a5df653) && (lVar4 = lVar3, lVar3 == -0x2dfe6c9ec51c6bfa)) {
              lVar4 = 0x2c85b040a530b3b5;
            }
          }
        }
        else if (lVar3 < -0x472a08e3f7a09a2) {
          if (lVar3 == -0x2255323ecc8e4ab6) {
            DAT_001f7ccc = 0;
            lVar4 = 0x72db258d84467769;
          }
          else if (lVar3 == -0xf8b0510004b337c) {
            iVar2 = FUN_001ebe70(0,1,&DAT_001f7ccc);
            lVar4 = -0x7f6d33b55f391ce0;
            if (iVar2 != 0) {
              lVar4 = 0x511e52f37548d8c;
            }
          }
        }
        else if (lVar3 == -0x472a08e3f7a09a2) {
          lVar4 = 0x153730adae4ee512;
          if (DAT_001f7fdc == '\0') {
            lVar4 = -0x5321587054678f55;
          }
        }
        else if (lVar3 == 0x472dd815bf663ad) {
          if (*(long *)(local_98 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return local_8c & 1;
        }
      }
      if (0x2c85b040a530b3b4 < lVar3) break;
      if (lVar3 < 0x153730adae4ee512) {
        lVar4 = -0xf8b0510004b337c;
        if (((lVar3 != 0x511e52f37548d8c) &&
            (lVar4 = -0x578c2f043c0b1eeb, lVar3 != 0x97042fccc42e1e6)) &&
           (lVar4 = lVar3, lVar3 == 0xaba53aa9e14658d)) {
          lVar4 = -0xf8b0510004b337c;
        }
      }
      else if (lVar3 < 0x1b82d9f4e870391e) {
        lVar4 = -0x3fa05c06b3e8d449;
        if ((lVar3 != 0x153730adae4ee512) && (lVar4 = lVar3, lVar3 == 0x18c6d844e8c5deb1)) {
          lVar4 = 0x75ea2fb3e7b1e420;
          if (DAT_001f7ff0 == '\0') {
            lVar4 = 0x411acb716f39f48c;
          }
        }
      }
      else {
        lVar4 = 0x72db258d84467769;
        if ((lVar3 != 0x1b82d9f4e870391e) && (lVar4 = lVar3, lVar3 == 0x1d7a8ba98331510d)) {
          lVar4 = -0x6b5dda43bb5b01ad;
LAB_0012ba78:
          DAT_001f59c0 = DAT_001f59c0 ^ 0x2222222222222222;
          DAT_001f59c8 = DAT_001f59c8 ^ 0x22;
          DAT_001f59c9 = DAT_001f59c9 ^ 0x22;
          DAT_001f7ff0 = '\x01';
        }
      }
    }
    if (lVar3 < 0x5a2d156ddbe6a013) {
      if (lVar3 == 0x2c85b040a530b3b5) {
        iVar2 = FUN_001ebe70(0,1,&DAT_001f7c78);
        lVar4 = -0x472a08e3f7a09a2;
        if (iVar2 != 0) {
          lVar4 = -0x2dfe6c9ec51c6bfa;
        }
      }
      else if (lVar3 == 0x381cd2c9dfc8aa95) {
        local_8c = 1;
        lVar4 = 0x472dd815bf663ad;
      }
      else if (lVar3 == 0x411acb716f39f48c) {
        lVar4 = -0x3c4948abc2b7c804;
        goto LAB_0012ba78;
      }
      goto LAB_0012b53c;
    }
    if (lVar3 < 0x72db258d84467769) {
      lVar4 = -0x6b5dda43bb5b01ad;
      if ((lVar3 != 0x5a2d156ddbe6a013) && (lVar4 = lVar3, lVar3 == 0x5baab65aef839a51)) {
        DAT_001f59e8 = DAT_001f59e8 ^ 0x60;
        DAT_001f59e9 = DAT_001f59e9 ^ 0x60;
        DAT_001f59ea = DAT_001f59ea ^ 0x60;
        DAT_001f59eb = DAT_001f59eb ^ 0x60;
        DAT_001f59ec = DAT_001f59ec ^ 0x60;
        DAT_001f59ed = DAT_001f59ed ^ 0x60;
        DAT_001f59ee = DAT_001f59ee ^ 0x60;
        _DAT_001f59d0 = _DAT_001f59d0 ^ 0x6060606060606060;
        uRam00000000001f59d8 = uRam00000000001f59d8 ^ 0x6060606060606060;
        DAT_001f59e0 = DAT_001f59e0 ^ 0x6060606060606060;
        DAT_001f7ff1 = '\x01';
        lVar4 = -0x2255323ecc8e4ab6;
      }
    }
    else if (lVar3 == 0x72db258d84467769) {
      iVar2 = FUN_001ebe70(0,1,&DAT_001f7cc8);
      lVar4 = -0x655eb191e915c507;
      if (iVar2 != 0) {
        lVar4 = 0x1b82d9f4e870391e;
      }
    }
    else if (lVar3 == 0x75ea2fb3e7b1e420) {
      lVar4 = -0x3c4948abc2b7c804;
    }
  } while( true );
}


