// Function: FUN_0011e344
// Entry: 0011e344

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011e344(short *param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  ulong in_x9;
  long lVar8;
  undefined1 *__s;
  undefined1 auStack_d0 [8];
  long local_c8;
  long *local_c0;
  undefined1 *local_b8;
  ulong local_b0;
  undefined1 *local_a8;
  long *local_a0;
  ulong local_98;
  ulong local_90;
  long *local_88;
  
  puVar2 = auStack_d0;
  local_c8 = tpidr_el0;
  local_88 = *(long **)(local_c8 + 0x28);
  plVar1 = local_88;
  lVar8 = 0x754f3abf4a408c98;
LAB_0011e42c:
  lVar7 = lVar8;
  uVar5 = in_x9;
  plVar6 = plVar1;
  plVar1 = plVar6;
  in_x9 = uVar5;
  lVar8 = lVar7;
  if (lVar7 < -0x74ad9eccc25f9b2) {
    if (lVar7 < -0x3e969bf8a8812bd2) {
      if (lVar7 < -0x60a1584a600614bc) {
        if (lVar7 < -0x72a9745fe2555ebf) {
          if (lVar7 == -0x7bcdbae8aaceaa68) {
            lVar8 = -0x4885a353a244721e;
            if (local_90 <= local_98) {
              lVar8 = 0x2789dc481b795cf1;
            }
          }
          else {
            lVar8 = -0x3387373d77859511;
            if ((lVar7 != -0x79bf7dc00f11b1ef) && (lVar8 = lVar7, lVar7 == -0x72dc51d93acf526c)) {
              lVar8 = -0x5d8c044866d3296a;
            }
          }
        }
        else if (lVar7 < -0x701a5b76114d9682) {
          lVar8 = 0x5695a1133a1e301f;
          if ((lVar7 != -0x72a9745fe2555ebf) && (lVar8 = lVar7, lVar7 == -0x71e7d89c0a506517)) {
            *param_1 = *param_1 + 1;
            lVar8 = -0x3b4e5c5b96f23ccd;
          }
        }
        else if (lVar7 == -0x701a5b76114d9682) {
          *param_1 = *param_1 + 1;
          lVar8 = 0x4d6b64e504d8a921;
        }
        else if (lVar7 == -0x657e74937f704c35) {
          lVar8 = 0x2bc79dc78ee7d0df;
        }
        goto LAB_0011e42c;
      }
      if (-0x4c3a057137698eed < lVar7) {
        if (lVar7 < -0x42159edb89e79eef) {
          if (lVar7 == -0x4c3a057137698eec) {
            DAT_001f5600 = DAT_001f5600 ^ 0xea;
            DAT_001f5601 = DAT_001f5601 ^ 0xea;
            DAT_001f5602 = DAT_001f5602 ^ 0xea;
            DAT_001f5603 = DAT_001f5603 ^ 0xea;
            DAT_001f5604 = DAT_001f5604 ^ 0xea;
            DAT_001f5605 = DAT_001f5605 ^ 0xea;
            DAT_001f5606 = DAT_001f5606 ^ 0xea;
            _DAT_001f55f0 = _DAT_001f55f0 ^ 0xeaeaeaeaeaeaeaea;
            uRam00000000001f55f8 = uRam00000000001f55f8 ^ 0xeaeaeaeaeaeaeaea;
            DAT_001f7fbf = '\x01';
            lVar8 = 0x546c08c1c9184140;
          }
          else if (lVar7 == -0x4885a353a244721e) {
            lVar8 = FUN_001cac50(local_a8,*(undefined8 *)(local_b8 + local_98 * 8 + 8));
            bVar3 = lVar8 == 0;
            lVar8 = -0x72dc51d93acf526c;
            lVar7 = 0x69a0f5aaf35dfa04;
            goto LAB_0011ed18;
          }
        }
        else if (lVar7 == -0x42159edb89e79eef) {
          DAT_001f7c0c = 0;
          uVar5 = FUN_0019f244(&DAT_001f5630);
          bVar3 = (uVar5 & 1) == 0;
          lVar8 = -0x71e7d89c0a506517;
          lVar7 = 0x1d086c93a465a0c3;
LAB_0011f86c:
          if (bVar3) {
            lVar8 = lVar7;
          }
        }
        else if (lVar7 == -0x3f0d06e83f19f84b) {
          lVar8 = 0x4d6b64e504d8a921;
        }
        goto LAB_0011e42c;
      }
      if (lVar7 < -0x6011e7f0cf0ddd5b) {
        if (lVar7 == -0x60a1584a600614bc) {
          DAT_001f7fbd = '\x01';
          DAT_001f55d0 = DAT_001f55d0 ^ 0x7b;
          DAT_001f55d1 = DAT_001f55d1 ^ 0x7b;
          DAT_001f55d2 = DAT_001f55d2 ^ 0x7b;
          _DAT_001f55c0 = _DAT_001f55c0 ^ 0x7b7b7b7b7b7b7b7b;
          uRam00000000001f55c8 = uRam00000000001f55c8 ^ 0x7b7b7b7b7b7b7b7b;
          lVar8 = 0x76d7a27cf05aa1fd;
        }
        else if (lVar7 == -0x606551946c712a28) {
          lVar8 = 0x4bbb86392a586d99;
        }
        goto LAB_0011e42c;
      }
      if (lVar7 != -0x6011e7f0cf0ddd5b) {
        if (lVar7 == -0x5d8c044866d3296a) {
          local_b0 = local_98 + 1;
          goto LAB_0011f430;
        }
        goto LAB_0011e42c;
      }
      lVar8 = 0x7775b513a86ca16b;
      bVar3 = DAT_001f7fc0 == '\0';
      lVar7 = -0x3ba6db68718858f1;
    }
    else {
      if (-0x3387373d77859512 < lVar7) {
        if (lVar7 < -0x2542d43fb85d23b1) {
          if (lVar7 < -0x2ab83678e90cfc72) {
            lVar8 = 0x5695a1133a1e301f;
            if ((lVar7 != -0x3387373d77859511) && (lVar8 = lVar7, lVar7 == -0x2ce3df39da091baa)) {
              DAT_001f7c08 = 0;
              uVar5 = FUN_0019f244(&DAT_001f5610);
              lVar7 = -0x657e74937f704c35;
              lVar8 = -0x25a0476d34e215bf;
LAB_0011f670:
              if ((uVar5 & 1) == 0) {
                lVar8 = lVar7;
              }
            }
          }
          else {
            lVar8 = 0x4b0487fc41a2590e;
            if ((lVar7 != -0x2ab83678e90cfc72) && (lVar8 = lVar7, lVar7 == -0x25a0476d34e215bf)) {
              *param_1 = *param_1 + 1;
              lVar8 = 0x2bc79dc78ee7d0df;
            }
          }
        }
        else if (lVar7 < -0x1dcfbdf13e510211) {
          plVar1 = local_a0;
          in_x9 = local_90;
          lVar8 = 0x127ab137eea64fe;
          if ((lVar7 != -0x2542d43fb85d23b1) &&
             (plVar1 = plVar6, in_x9 = uVar5, lVar8 = lVar7, lVar7 == -0x20b96616990d67ca)) {
            lVar8 = 0x1e314b5c71a8bd6f;
          }
        }
        else {
          lVar8 = 0x4c807eaf406a59b4;
          if ((lVar7 != -0x1dcfbdf13e510211) && (lVar8 = lVar7, lVar7 == -0xdc935a0c3d14c0e)) {
            DAT_001f5641 = DAT_001f5641 ^ 0xf1;
            DAT_001f5640 = DAT_001f5640 ^ 0xf1;
            _DAT_001f5630 = _DAT_001f5630 ^ 0xf1f1f1f1f1f1f1f1;
            uRam00000000001f5638 = uRam00000000001f5638 ^ 0xf1f1f1f1f1f1f1f1;
            DAT_001f7fc1 = '\x01';
            lVar8 = -0x42159edb89e79eef;
          }
        }
        goto LAB_0011e42c;
      }
      if (lVar7 < -0x3ba6db68718858f1) {
        lVar8 = 0x76d7a27cf05aa1fd;
        if (((lVar7 != -0x3e969bf8a8812bd2) &&
            (lVar8 = 0x4d38fa67cd1802ae, lVar7 != -0x3e25d1f1afeb5e6f)) &&
           (lVar8 = lVar7, lVar7 == -0x3ce000c32d0f74af)) {
          *param_1 = *param_1 + 1;
          lVar8 = -0x3984f96330587eaa;
        }
        goto LAB_0011e42c;
      }
      if (lVar7 < -0x3984f96330587eaa) {
        if (lVar7 == -0x3ba6db68718858f1) {
          DAT_001f5628 = DAT_001f5628 ^ 0xf7;
          DAT_001f5629 = DAT_001f5629 ^ 0xf7;
          DAT_001f562a = DAT_001f562a ^ 0xf7;
          DAT_001f562b = DAT_001f562b ^ 0xf7;
          _DAT_001f5610 = _DAT_001f5610 ^ 0xf7f7f7f7f7f7f7f7;
          uRam00000000001f5618 = uRam00000000001f5618 ^ 0xf7f7f7f7f7f7f7f7;
          DAT_001f562c = DAT_001f562c ^ 0xf7;
          DAT_001f562d = DAT_001f562d ^ 0xf7;
          DAT_001f5620 = DAT_001f5620 ^ 0xf7f7f7f7f7f7f7f7;
          DAT_001f7fc0 = '\x01';
          lVar8 = -0x2ce3df39da091baa;
        }
        else if (lVar7 == -0x3b4e5c5b96f23ccd) {
          lVar8 = -0x6682bb77af072f;
        }
        goto LAB_0011e42c;
      }
      lVar8 = 0x5149580c815b7f68;
      if ((lVar7 == -0x3984f96330587eaa) || (lVar8 = lVar7, lVar7 != -0x3668b0ce8670e810))
      goto LAB_0011e42c;
      lVar8 = -0x2ab83678e90cfc72;
      bVar3 = DAT_001f7fbe == '\0';
      lVar7 = 0x68bbcb416a80b2d5;
    }
  }
  else {
    if (0x4c807eaf406a59b3 < lVar7) {
      if (0x63358bc6c5c6d7db < lVar7) {
        if (lVar7 < 0x703781d332885ee0) {
          if (lVar7 < 0x68bbcb416a80b2d5) {
            lVar8 = -0x42159edb89e79eef;
            if ((lVar7 != 0x63358bc6c5c6d7dc) && (lVar8 = lVar7, lVar7 == 0x656397b75fcf08e8)) {
              lVar8 = -0x3984f96330587eaa;
            }
          }
          else if (lVar7 == 0x68bbcb416a80b2d5) {
            DAT_001f55e1 = DAT_001f55e1 ^ 0xca;
            DAT_001f55e0 = DAT_001f55e0 ^ 0xca;
            DAT_001f55d8 = DAT_001f55d8 ^ 0xcacacacacacacaca;
            DAT_001f7fbe = '\x01';
            lVar8 = 0x4b0487fc41a2590e;
          }
          else if (lVar7 == 0x69a0f5aaf35dfa04) {
            *param_1 = *param_1 + 1;
            lVar8 = -0x5d8c044866d3296a;
          }
        }
        else if (lVar7 < 0x76d7a27cf05aa1fd) {
          if (lVar7 == 0x703781d332885ee0) {
            lVar8 = 0x4ee403bc90248aea;
            bVar3 = DAT_001f7fbf == '\0';
            lVar7 = -0x4c3a057137698eec;
            goto LAB_0011f8a0;
          }
          if (lVar7 == 0x754f3abf4a408c98) {
            lVar8 = 0x4d38fa67cd1802ae;
          }
        }
        else {
          if (lVar7 == 0x76d7a27cf05aa1fd) {
            __s = puVar2 + -0x810;
            DAT_001f7bfc = 0;
            *(undefined **)(puVar2 + -0x8c0) = &DAT_001f55c0;
            local_c0 = (long *)(puVar2 + -0x8b8);
            *local_c0 = (long)&DAT_001f55d8;
            *(undefined8 *)(puVar2 + -0x8b0) = 0;
            local_b8 = puVar2 + -0x8c0;
            memset(__s,0,0x801);
            local_a8 = __s;
            uVar5 = FUN_0019e8c4(&DAT_001f55c0,0x801,__s);
            lVar7 = -0x79bf7dc00f11b1ef;
            lVar8 = 0x154f676f4a5ce494;
            puVar2 = puVar2 + -0x8c0;
            goto LAB_0011f670;
          }
          if (lVar7 == 0x7775b513a86ca16b) {
            lVar8 = -0x2ce3df39da091baa;
          }
        }
        goto LAB_0011e42c;
      }
      if (lVar7 < 0x4f500b65a831bee4) {
        if (0x4d6b64e504d8a920 < lVar7) {
          lVar8 = 0x546c08c1c9184140;
          if ((lVar7 != 0x4ee403bc90248aea) && (lVar8 = lVar7, lVar7 == 0x4d6b64e504d8a921)) {
            if (*(long **)(local_c8 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
            return;
          }
          goto LAB_0011e42c;
        }
        if (lVar7 != 0x4c807eaf406a59b4) {
          if (lVar7 == 0x4d38fa67cd1802ae) {
            iVar4 = FUN_001ebe70(0,1,&DAT_001f7c00);
            lVar7 = -0x3e25d1f1afeb5e6f;
            lVar8 = -0x3668b0ce8670e810;
            bVar3 = iVar4 == 0;
            goto LAB_0011e424;
          }
          goto LAB_0011e42c;
        }
        iVar4 = FUN_001ebe70(0,1,&DAT_001f7bfc);
        bVar3 = iVar4 == 0;
        lVar7 = -0x1dcfbdf13e510211;
        lVar8 = -0x74ad9eccc25f9b2;
      }
      else {
        if (lVar7 < 0x546c08c1c9184140) {
          if (lVar7 == 0x4f500b65a831bee4) {
            DAT_001f5668 = DAT_001f5668 ^ 0xbf;
            _DAT_001f5650 = _DAT_001f5650 ^ 0xbfbfbfbfbfbfbfbf;
            uRam00000000001f5658 = uRam00000000001f5658 ^ 0xbfbfbfbfbfbfbfbf;
            DAT_001f5660 = DAT_001f5660 ^ 0xbfbfbfbfbfbfbfbf;
            DAT_001f7fc2 = '\x01';
            lVar8 = 0x4bbb86392a586d99;
          }
          else if (lVar7 == 0x5149580c815b7f68) {
            iVar4 = FUN_001ebe70(0,1,&DAT_001f7c08);
            lVar8 = -0x6011e7f0cf0ddd5b;
            lVar7 = 0x13b7e9add3e50794;
            bVar3 = iVar4 == 0;
LAB_0011ed18:
            if (!bVar3) {
              lVar8 = lVar7;
            }
          }
          goto LAB_0011e42c;
        }
        if (lVar7 == 0x546c08c1c9184140) {
          DAT_001f7c04 = 0;
          uVar5 = FUN_0019f244(&DAT_001f55f0);
          lVar8 = -0x3ce000c32d0f74af;
          lVar7 = 0x656397b75fcf08e8;
          bVar3 = (uVar5 & 1) == 0;
          goto LAB_0011f86c;
        }
        if (lVar7 != 0x5695a1133a1e301f) goto LAB_0011e42c;
        iVar4 = FUN_001ebe70(0,1,&DAT_001f7c04);
        bVar3 = iVar4 == 0;
        lVar7 = -0x72a9745fe2555ebf;
        lVar8 = 0x703781d332885ee0;
      }
LAB_0011e424:
      if (!bVar3) {
        lVar8 = lVar7;
      }
      goto LAB_0011e42c;
    }
    if (lVar7 < 0x1d086c93a465a0c3) {
      if (lVar7 < 0x127ab137eea64fe) {
        if (lVar7 == -0x74ad9eccc25f9b2) {
          bVar3 = DAT_001f7fbd == '\0';
          lVar8 = -0x3e969bf8a8812bd2;
          lVar7 = -0x60a1584a600614bc;
          goto LAB_0011f8a0;
        }
        if (lVar7 == -0x5a65df57888327c) {
          lVar8 = -0x606551946c712a28;
          if (DAT_001f7fc2 == '\0') {
            lVar8 = 0x4f500b65a831bee4;
          }
        }
        else if (lVar7 == -0x6682bb77af072f) {
          iVar4 = FUN_001ebe70(0,1,&DAT_001f7c10);
          bVar3 = iVar4 == 0;
          lVar8 = -0x5a65df57888327c;
          lVar7 = 0x21c0e93cbb360418;
          goto LAB_0011ed18;
        }
      }
      else if (lVar7 < 0x154f676f4a5ce494) {
        if (lVar7 == 0x127ab137eea64fe) {
          local_a0 = plVar6 + 1;
          local_90 = uVar5 + 1;
          lVar8 = -0x7bcdbae8aaceaa68;
          if (*local_a0 != 0) {
            lVar8 = -0x2542d43fb85d23b1;
          }
        }
        else if (lVar7 == 0x13b7e9add3e50794) {
          lVar8 = 0x5149580c815b7f68;
        }
      }
      else if (lVar7 == 0x154f676f4a5ce494) {
        local_b0 = 0;
LAB_0011f430:
        lVar8 = 0x177785e5fe74d286;
      }
      else if (lVar7 == 0x177785e5fe74d286) {
        local_98 = local_b0;
        plVar1 = local_c0;
        in_x9 = 0;
        lVar8 = 0x127ab137eea64fe;
      }
      goto LAB_0011e42c;
    }
    if (lVar7 < 0x2bc79dc78ee7d0df) {
      if (lVar7 < 0x21c0e93cbb360418) {
        lVar8 = -0x3b4e5c5b96f23ccd;
        if ((lVar7 != 0x1d086c93a465a0c3) && (lVar8 = lVar7, lVar7 == 0x1e314b5c71a8bd6f)) {
          iVar4 = FUN_001ebe70(0,1,&DAT_001f7c0c);
          bVar3 = iVar4 == 0;
          lVar7 = -0x20b96616990d67ca;
          lVar8 = 0x3c4c2a160e51da04;
          goto LAB_0011e424;
        }
      }
      else {
        lVar8 = -0x6682bb77af072f;
        if ((lVar7 != 0x21c0e93cbb360418) && (lVar8 = lVar7, lVar7 == 0x2789dc481b795cf1)) {
          FUN_001cc250(local_a8,0,0x801);
          lVar8 = -0x3387373d77859511;
        }
      }
      goto LAB_0011e42c;
    }
    if (0x4b0487fc41a2590d < lVar7) {
      if (lVar7 == 0x4b0487fc41a2590e) {
        DAT_001f7c00 = 0;
        lVar8 = 0x4c807eaf406a59b4;
      }
      else if (lVar7 == 0x4bbb86392a586d99) {
        DAT_001f7c10 = 0;
        uVar5 = FUN_0019f244(&DAT_001f5650);
        bVar3 = (uVar5 & 1) == 0;
        lVar8 = -0x701a5b76114d9682;
        lVar7 = -0x3f0d06e83f19f84b;
        goto LAB_0011f86c;
      }
      goto LAB_0011e42c;
    }
    lVar8 = 0x1e314b5c71a8bd6f;
    if ((lVar7 == 0x2bc79dc78ee7d0df) || (lVar8 = lVar7, lVar7 != 0x3c4c2a160e51da04))
    goto LAB_0011e42c;
    lVar8 = 0x63358bc6c5c6d7dc;
    bVar3 = DAT_001f7fc1 == '\0';
    lVar7 = -0xdc935a0c3d14c0e;
  }
LAB_0011f8a0:
  if (bVar3) {
    lVar8 = lVar7;
  }
  goto LAB_0011e42c;
}


