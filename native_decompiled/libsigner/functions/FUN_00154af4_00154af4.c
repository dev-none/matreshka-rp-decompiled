// Function: FUN_00154af4
// Entry: 00154af4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_00154af4(ulong param_1,undefined8 *param_2,byte param_3,uint param_4,byte param_5)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong in_x9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  undefined8 *puVar13;
  ulong local_128;
  long local_120;
  long *local_118;
  long local_110;
  long *local_108;
  ulong local_100;
  ulong local_f8;
  long local_f0;
  long *local_e8;
  ulong local_e0;
  ulong local_d8;
  byte local_d0;
  byte local_cc;
  ulong local_c8;
  byte local_c0;
  byte local_bc;
  ulong local_b8;
  ulong local_b0;
  ulong local_a8;
  uint local_9c;
  byte local_98;
  uint local_94;
  byte local_90;
  byte local_8c;
  
  puVar3 = param_2;
  lVar11 = -0x414ba8664afbee55;
LAB_00154bd0:
  bVar4 = param_3;
  bVar6 = param_5;
  uVar5 = param_4;
  lVar8 = lVar11;
  uVar10 = in_x9;
  uVar7 = param_1;
  puVar13 = (undefined8 *)((ulong)puVar3 & 0xffffffff);
  param_1 = uVar7;
  in_x9 = uVar10;
  lVar11 = lVar8;
  param_4 = uVar5;
  param_5 = bVar6;
  param_3 = bVar4;
  if (lVar8 < -0xa8dded57e50be88) {
    if (lVar8 < -0x45d107063d3232d5) {
      if (lVar8 < -0x5eaa8f99944c17c0) {
        if (lVar8 < -0x6f0c76645bab53fb) {
          if (lVar8 < -0x770c4bb265e99b89) {
            if (lVar8 == -0x7d951fd26da32f69) {
              iVar2 = FUN_001ebe70(0,1,&DAT_001f7f20);
              puVar3 = puVar13;
              lVar11 = -0x58bc8ae378f23847;
              if (iVar2 != 0) {
                lVar11 = -0x68284c31ca08050c;
              }
            }
            else {
              puVar3 = puVar13;
              lVar11 = 0x2f59f0c47706de42;
              if ((lVar8 != -0x7a753a659a6baee7) && (lVar11 = lVar8, lVar8 == -0x772d524b978f8b12))
              {
                local_e0 = local_f8;
                lVar11 = 0x3ffe97cdaf415825;
                local_cc = local_c0;
              }
            }
          }
          else {
            if (lVar8 == -0x770c4bb265e99b89) goto LAB_001561fc;
            puVar3 = puVar13;
            lVar11 = 0x69a80a17df9cdc7d;
            if ((lVar8 != -0x7471bc84e581da44) && (lVar11 = lVar8, lVar8 == -0x73f52144e9d735d1)) {
              return local_8c & 1;
            }
          }
        }
        else if (lVar8 < -0x65d91b41143fd5f1) {
          if (lVar8 == -0x6f0c76645bab53fb) {
            iVar2 = FUN_001ebe70(0,1,&DAT_001f7f24);
            puVar3 = puVar13;
            lVar11 = -0x5ab124ba097c846b;
            if (iVar2 != 0) {
              lVar11 = 0x5c117fe5068e6cb1;
            }
          }
          else if (lVar8 == -0x6a1ecd2fe28cdb03) {
            local_a8 = local_c8 + 1;
            puVar3 = puVar13;
            lVar11 = 0x60cff95b182d42a4;
            local_98 = local_bc;
            if ((ulong)param_2[0x10e] <= local_a8) {
              lVar11 = -0x1d3f7bbcbb41179e;
            }
          }
          else {
            puVar3 = puVar13;
            if (lVar8 == -0x68284c31ca08050c) {
              lVar11 = -0x7d951fd26da32f69;
            }
          }
        }
        else if (lVar8 == -0x65d91b41143fd5f1) {
          DAT_001f7f30 = 0;
          lVar8 = FUN_001cac50(*param_2,&DAT_001f66f0);
          puVar3 = puVar13;
          lVar11 = -0x423edcef48b7f5b2;
          if (lVar8 != 0) {
            lVar11 = 0x142867f1fd561d6d;
          }
        }
        else {
          puVar3 = puVar13;
          lVar11 = 0x114a78ad1f06dd0e;
          if ((lVar8 != -0x617410734b3c3757) && (lVar11 = lVar8, lVar8 == -0x5fbf1749b762efcb)) {
            puVar3 = (undefined8 *)0x0;
            in_x9 = 0;
            lVar11 = -0xa8dded57e50be88;
          }
        }
        goto LAB_00154bd0;
      }
      if (-0x55200cc5dbc5da86 < lVar8) {
        if (lVar8 < -0x496d99dda6bab0b0) {
          if (lVar8 == -0x55200cc5dbc5da85) {
            DAT_001f6688 = DAT_001f6688 ^ 0x6d;
            DAT_001f6689 = DAT_001f6689 ^ 0x6d;
            _DAT_001f6670 = _DAT_001f6670 ^ 0x6d6d6d6d6d6d6d6d;
            uRam00000000001f6678 = uRam00000000001f6678 ^ 0x6d6d6d6d6d6d6d6d;
            DAT_001f668a = DAT_001f668a ^ 0x6d;
            DAT_001f668b = DAT_001f668b ^ 0x6d;
            DAT_001f668c = DAT_001f668c ^ 0x6d;
            DAT_001f668d = DAT_001f668d ^ 0x6d;
            DAT_001f6680 = DAT_001f6680 ^ 0x6d6d6d6d6d6d6d6d;
            DAT_001f8086 = '\x01';
            puVar3 = puVar13;
            lVar11 = -0xc32de7718e69259;
          }
          else if (lVar8 == -0x4df302b6229f3b8b) {
            local_e8 = param_2 + local_b8 * 2 + 0xf;
            puVar3 = puVar13;
            lVar11 = 0x7e6d0755e427d5ed;
            if (*local_e8 != 0) {
              lVar11 = -0x1d4347c2249d3559;
            }
          }
          else {
            puVar3 = puVar13;
            if (lVar8 == -0x49b19c44455e2bfa) {
              lVar11 = 0x17dbc9d378a50754;
              if (DAT_001f7fd7 == '\0') {
                lVar11 = -0x3af504c033c4c169;
              }
            }
          }
        }
        else if (lVar8 == -0x496d99dda6bab0b0) {
          puVar3 = puVar13;
          param_1 = 0;
          lVar11 = 0x5fc0c81403ccbd95;
          param_3 = 0;
        }
        else if (lVar8 == -0x48ce383909702a96) {
          iVar2 = FUN_001ebe70(0,1,&DAT_001f7f2c);
          puVar3 = puVar13;
          lVar11 = 0x2d45248c8fad8839;
          if (iVar2 != 0) {
            lVar11 = -0x3051c9d90cf8183f;
          }
        }
        else {
          puVar3 = puVar13;
          if (lVar8 == -0x47413f509001a57a) {
            iVar2 = FUN_001ebe70(0,1,&DAT_001f7f30);
            lVar11 = 0x7568b07102923802;
            if (iVar2 != 0) {
              lVar11 = 0x233086311e5112dd;
            }
          }
        }
        goto LAB_00154bd0;
      }
      if (lVar8 < -0x5ab124ba097c846b) {
        puVar3 = puVar13;
        lVar11 = 0x63db34b15c0c0e53;
        if ((lVar8 != -0x5eaa8f99944c17c0) && (lVar11 = lVar8, lVar8 == -0x5d49bcc1fdd1b317)) {
          lVar11 = -0xc32de7718e69259;
        }
        goto LAB_00154bd0;
      }
      if (lVar8 == -0x5ab124ba097c846b) {
        puVar3 = puVar13;
        lVar11 = 0x7cdcce343abf7dc0;
        if (DAT_001f8087 == '\0') {
          lVar11 = 0x182600a1575101a4;
        }
        goto LAB_00154bd0;
      }
      if (lVar8 == -0x59adf39ab420a1db) {
        lVar8 = 0x45fb715190e13e0;
        bVar1 = DAT_001f8087 == '\0';
        lVar11 = -0x7a753a659a6baee7;
        goto LAB_00156db0;
      }
      puVar3 = puVar13;
      if (lVar8 != -0x58bc8ae378f23847) goto LAB_00154bd0;
      lVar8 = -0x55200cc5dbc5da85;
      bVar1 = DAT_001f8086 == '\0';
      lVar11 = -0x5d49bcc1fdd1b317;
LAB_00156db0:
      puVar3 = puVar13;
      if (bVar1) {
        lVar11 = lVar8;
      }
      goto LAB_00154bd0;
    }
    if (-0x3699ff6a13792b5f < lVar8) {
      if (lVar8 < -0x1e257ba1ad5e9d18) {
        if (lVar8 < -0x267a9a044f80720c) {
          puVar3 = puVar13;
          lVar11 = 0xa5ca8e8b8f2a6b0;
          param_4 = local_94;
          if (((lVar8 != -0x3699ff6a13792b5e) &&
              (lVar11 = -0x48ce383909702a96, param_4 = uVar5, lVar8 != -0x3051c9d90cf8183f)) &&
             (lVar11 = lVar8, lVar8 == -0x27844ac8db4fafdb)) goto LAB_001561fc;
        }
        else {
          puVar3 = puVar13;
          lVar11 = -0x17d7b11a092c6e92;
          param_5 = local_90;
          if (lVar8 != -0x267a9a044f80720c) {
            if (lVar8 == -0x226ba997cc796c92) {
              local_118 = param_2 + local_d8 * 2 + 0xf;
              lVar8 = *local_118;
              lVar11 = 0x70663d7a410b1f2d;
              lVar9 = -0x3cce2eaf27d1fbcb;
LAB_00156a9c:
              puVar3 = puVar13;
              param_5 = bVar6;
              if (lVar8 != 0) {
                lVar11 = lVar9;
              }
            }
            else {
              lVar11 = lVar8;
              param_5 = bVar6;
              if (lVar8 == -0x1e5b64e582b9c2de) {
                lVar11 = 0xecef961ad3f83d;
              }
            }
          }
        }
        goto LAB_00154bd0;
      }
      if (-0x17d7b11a092c6e93 < lVar8) {
        if (lVar8 == -0x17d7b11a092c6e92) {
          local_100 = param_2[0x10e];
          local_f8 = local_b8 + 1;
          puVar3 = puVar13;
          lVar11 = -0x772d524b978f8b12;
          local_c0 = bVar6;
          if (local_100 <= local_f8) {
            lVar11 = 0x356a605f818da24a;
          }
        }
        else if (lVar8 == -0xc5e29b0d1a58ac8) {
          DAT_001f6700 = DAT_001f6700 ^ 0xe1;
          _DAT_001f66f0 = _DAT_001f66f0 ^ 0xe1e1e1e1e1e1e1e1;
          uRam00000000001f66f8 = uRam00000000001f66f8 ^ 0xe1e1e1e1e1e1e1e1;
          DAT_001f808a = '\x01';
          puVar3 = puVar13;
          lVar11 = -0x65d91b41143fd5f1;
        }
        else {
          puVar3 = puVar13;
          if (lVar8 == -0xc32de7718e69259) {
            DAT_001f7f20 = 0;
            iVar2 = FUN_001ca28c(&DAT_001f6670,local_120);
            lVar11 = 0x547313dca9094579;
            if (iVar2 != 0) {
              lVar11 = -0x3699ff6a13792b5e;
            }
          }
        }
        goto LAB_00154bd0;
      }
      if (lVar8 == -0x1e257ba1ad5e9d18) {
        iVar2 = FUN_001ebe70(0,1,&DAT_001f7f28);
        puVar3 = puVar13;
        lVar11 = 0x52b18d7e22ce3424;
        if (iVar2 != 0) {
          lVar11 = 0x4f35c3a21c7ae3e;
        }
        goto LAB_00154bd0;
      }
      puVar3 = puVar13;
      lVar11 = -0x1e257ba1ad5e9d18;
      if ((lVar8 == -0x1d4347c2249d3559) ||
         (lVar11 = lVar8, bVar4 = local_98, lVar8 != -0x1d3f7bbcbb41179e)) goto LAB_00154bd0;
      goto LAB_00156214;
    }
    if (lVar8 < -0x423edcef48b7f5b2) {
      if (lVar8 < -0x43909ee70e5bba0d) {
        puVar3 = (undefined8 *)(ulong)local_9c;
        in_x9 = local_b0;
        lVar11 = -0xa8dded57e50be88;
        if ((lVar8 != -0x45d107063d3232d5) &&
           (puVar3 = puVar13, in_x9 = uVar10, lVar11 = lVar8, lVar8 == -0x4397f867a1ccdd1a)) {
          lVar11 = -0x40412a22b30463a5;
        }
      }
      else {
        puVar3 = puVar13;
        lVar11 = -0x65d91b41143fd5f1;
        if (lVar8 != -0x43909ee70e5bba0d) {
          if (lVar8 == -0x42d616c83e58c391) {
            lVar11 = 0x364073bcd2ebaed;
            if ((local_9c & local_128 != 0) == 0) {
              lVar11 = -0x770c4bb265e99b89;
            }
          }
          else {
            lVar11 = lVar8;
            if (lVar8 == -0x425425a57f77fc0e) {
              lVar11 = -0x48ce383909702a96;
            }
          }
        }
      }
      goto LAB_00154bd0;
    }
    if (-0x40412a22b30463a6 < lVar8) {
      if (lVar8 == -0x40412a22b30463a5) {
        DAT_001f7f24 = 0;
        iVar2 = FUN_001ca28c(&DAT_001f6690,*local_e8);
        puVar3 = puVar13;
        lVar11 = -0x17d7b11a092c6e92;
        param_5 = iVar2 == 0 | local_90;
      }
      else {
        puVar3 = puVar13;
        lVar11 = -0x7d951fd26da32f69;
        if ((lVar8 != -0x3cce2eaf27d1fbcb) && (lVar11 = lVar8, lVar8 == -0x3af504c033c4c169)) {
          DAT_001f583c = ~DAT_001f583c;
          DAT_001f583e = ~DAT_001f583e;
          DAT_001f583f = ~DAT_001f583f;
          DAT_001f5841 = ~DAT_001f5841;
          DAT_001f583d = ~DAT_001f583d;
          DAT_001f5840 = ~DAT_001f5840;
          DAT_001f5842 = ~DAT_001f5842;
          DAT_001f7fd7 = '\x01';
          lVar11 = 0x2a8b41cb4dc2891;
        }
      }
      goto LAB_00154bd0;
    }
    puVar3 = puVar13;
    lVar11 = 0x114a78ad1f06dd0e;
    if (lVar8 == -0x423edcef48b7f5b2) goto LAB_00154bd0;
    if (lVar8 != -0x4164e5a7a216696c) {
      lVar11 = lVar8;
      if (lVar8 == -0x414ba8664afbee55) {
        lVar11 = 0x64b91f9dd9399ad7;
      }
      goto LAB_00154bd0;
    }
  }
  else if (lVar8 < 0x2d45248c8fad8839) {
    uVar12 = (uint)puVar3;
    if (lVar8 < 0x114a78ad1f06dd0e) {
      if (0x364073bcd2ebaec < lVar8) {
        if (lVar8 < 0x4f35c3a21c7ae3e) {
          if (lVar8 == 0x364073bcd2ebaed) {
            local_cc = 0;
            local_e0 = 0;
            puVar3 = puVar13;
            lVar11 = 0x3ffe97cdaf415825;
            goto LAB_00154bd0;
          }
          puVar3 = puVar13;
          lVar11 = -0x47413f509001a57a;
          if ((lVar8 == 0x370b70285e213e6) || (lVar11 = lVar8, lVar8 != 0x45fb715190e13e0))
          goto LAB_00154bd0;
          lVar11 = 0x2f59f0c47706de42;
        }
        else {
          puVar3 = puVar13;
          lVar11 = -0x1e257ba1ad5e9d18;
          if (lVar8 == 0x4f35c3a21c7ae3e) goto LAB_00154bd0;
          if (lVar8 == 0xa5ca8e8b8f2a6b0) {
            local_128 = param_2[0x10e];
            local_b0 = local_d8 + 1;
            lVar11 = -0x45d107063d3232d5;
            local_9c = uVar5;
            if (local_128 <= local_b0) {
              lVar11 = -0x42d616c83e58c391;
            }
            goto LAB_00154bd0;
          }
          lVar11 = lVar8;
          if (lVar8 != 0x1131c4815844c8fe) goto LAB_00154bd0;
          lVar11 = -0x40412a22b30463a5;
        }
LAB_00154bbc:
        uRam00000000001f6698 = uRam00000000001f6698 ^ 0xe5e5e5e5e5e5e5e5;
        _DAT_001f6690 = _DAT_001f6690 ^ 0xe5e5e5e5e5e5e5e5;
        _DAT_001f66a0 = _DAT_001f66a0 ^ 0xe5e5e5e5e5e5e5e5;
        uRam00000000001f66a8 = uRam00000000001f66a8 ^ 0xe5e5e5e5e5e5e5e5;
        DAT_001f8087 = '\x01';
        puVar3 = puVar13;
        goto LAB_00154bd0;
      }
      if (0x83fde43c5fc6f0 < lVar8) {
        puVar3 = puVar13;
        lVar11 = 0xecef961ad3f83d;
        if (lVar8 != 0x83fde43c5fc6f1) {
          if (lVar8 == 0xecef961ad3f83d) {
            iVar2 = FUN_001ebe70(0,1,&DAT_001f7f24);
            lVar11 = -0x59adf39ab420a1db;
            if (iVar2 != 0) {
              lVar11 = -0x1e5b64e582b9c2de;
            }
          }
          else {
            lVar11 = lVar8;
            if (lVar8 == 0x2a8b41cb4dc2891) {
              DAT_001f7c64 = 0;
              iVar2 = FUN_001ca28c(param_2[8],&DAT_001f583c);
              lVar11 = 0x370b70285e213e6;
              if (iVar2 != 0) {
                lVar11 = -0x617410734b3c3757;
              }
            }
          }
        }
        goto LAB_00154bd0;
      }
      if (lVar8 == -0xa8dded57e50be88) {
        local_120 = param_2[uVar10 * 2 + 0xe];
        puVar3 = puVar13;
        lVar11 = 0x78a5ed56ab43e535;
        local_d8 = uVar10;
        local_94 = uVar12;
        if (local_120 != 0) {
          lVar11 = -0x226ba997cc796c92;
        }
        goto LAB_00154bd0;
      }
      puVar3 = puVar13;
      if (lVar8 != -0x187424d901ef3a) goto LAB_00154bd0;
    }
    else {
      if (0x182600a1575101a3 < lVar8) {
        if (lVar8 < 0x233086311e5112dd) {
          if (lVar8 == 0x182600a1575101a4) {
            lVar11 = 0x3afd773f1cc75eb1;
            goto LAB_00154bbc;
          }
          if (lVar8 == 0x18874bbbb43eb993) {
            DAT_001f66e8 = DAT_001f66e8 ^ 0xa2;
            DAT_001f66ea = DAT_001f66ea ^ 0xa2;
            _DAT_001f66d0 = _DAT_001f66d0 ^ 0xa2a2a2a2a2a2a2a2;
            uRam00000000001f66d8 = uRam00000000001f66d8 ^ 0xa2a2a2a2a2a2a2a2;
            DAT_001f66e9 = DAT_001f66e9 ^ 0xa2;
            DAT_001f66eb = DAT_001f66eb ^ 0xa2;
            DAT_001f66e0 = DAT_001f66e0 ^ 0xa2a2a2a2a2a2a2a2;
            DAT_001f8089 = '\x01';
            puVar3 = puVar13;
            lVar11 = 0x69a80a17df9cdc7d;
          }
          else {
            puVar3 = puVar13;
            if (lVar8 == 0x1a511495c09e2af5) {
              lVar8 = 0x1131c4815844c8fe;
              bVar1 = DAT_001f8087 == '\0';
              lVar11 = -0x4397f867a1ccdd1a;
              goto LAB_00156db0;
            }
          }
        }
        else {
          puVar3 = puVar13;
          lVar11 = -0x47413f509001a57a;
          if (((lVar8 != 0x233086311e5112dd) &&
              (lVar11 = 0x64b91f9dd9399ad7, lVar8 != 0x26ac7b6fcdd2acce)) &&
             (lVar11 = lVar8, lVar8 == 0x2bce9ab9d46341bf)) {
            lVar11 = 0x7f51cb170b8e65b0;
          }
        }
        goto LAB_00154bd0;
      }
      if (lVar8 < 0x13510163a5cdfa80) {
        if (lVar8 == 0x114a78ad1f06dd0e) {
          puVar3 = puVar13;
          lVar11 = -0x5fbf1749b762efcb;
          if (param_2[0x10e] != 3) {
            lVar11 = 0x13510163a5cdfa80;
          }
        }
        else {
          puVar3 = puVar13;
          if (lVar8 == 0x12747ed96bff26ec) {
            lVar11 = 0x63db34b15c0c0e53;
          }
        }
        goto LAB_00154bd0;
      }
      if (lVar8 != 0x13510163a5cdfa80) {
        if (lVar8 == 0x142867f1fd561d6d) {
          bVar4 = 1;
          goto LAB_00156214;
        }
        puVar3 = puVar13;
        if (lVar8 == 0x17dbc9d378a50754) {
          lVar11 = 0x2a8b41cb4dc2891;
        }
        goto LAB_00154bd0;
      }
    }
  }
  else {
    if (lVar8 < 0x5fc0c81403ccbd95) {
      if (lVar8 < 0x3ffe97cdaf415825) {
        if (lVar8 < 0x356a605f818da24a) {
          if (lVar8 != 0x2d45248c8fad8839) {
            puVar3 = puVar13;
            if (lVar8 == 0x2f59f0c47706de42) {
              DAT_001f7f24 = 0;
              iVar2 = FUN_001ca28c(&DAT_001f6690,*local_108);
              bVar4 = iVar2 == 0 | local_d0;
              goto LAB_0015635c;
            }
            goto LAB_00154bd0;
          }
          lVar8 = 0x18874bbbb43eb993;
          bVar1 = DAT_001f8089 == '\0';
          lVar11 = -0x7471bc84e581da44;
        }
        else {
          if (lVar8 != 0x356a605f818da24a) {
            if (lVar8 == 0x3afd773f1cc75eb1) {
              DAT_001f7f24 = 0;
              iVar2 = FUN_001ca28c(&DAT_001f6690,*local_118);
              puVar3 = puVar13;
              lVar11 = 0xa5ca8e8b8f2a6b0;
              param_4 = iVar2 == 0 | local_94;
            }
            else {
              puVar3 = puVar13;
              if (lVar8 == 0x3e44260b43a6f04c) {
                local_108 = param_2 + local_c8 * 2 + 0xf;
                lVar8 = *local_108;
                lVar11 = -0x27844ac8db4fafdb;
                lVar9 = -0x425425a57f77fc0e;
                goto LAB_00156a9c;
              }
            }
            goto LAB_00154bd0;
          }
          bVar1 = (local_c0 & local_100 != 0) == 0;
          lVar11 = -0x496d99dda6bab0b0;
          lVar8 = 0x68e70700a38dd9e4;
        }
      }
      else {
        if (0x547313dca9094578 < lVar8) {
          puVar3 = puVar13;
          lVar11 = -0x6f0c76645bab53fb;
          if (((lVar8 != 0x547313dca9094579) && (lVar8 != 0x5c117fe5068e6cb1)) &&
             (lVar11 = lVar8, bVar4 = local_d0, lVar8 == 0x5c990f66a4ea87ac)) {
LAB_0015635c:
            puVar3 = puVar13;
            lVar11 = -0x6a1ecd2fe28cdb03;
            local_bc = bVar4;
          }
          goto LAB_00154bd0;
        }
        if (lVar8 == 0x3ffe97cdaf415825) {
          local_b8 = local_e0;
          local_f0 = param_2[local_e0 * 2 + 0xe];
          puVar3 = puVar13;
          lVar11 = -0x4164e5a7a216696c;
          local_90 = local_cc;
          if (local_f0 != 0) {
            lVar11 = -0x4df302b6229f3b8b;
          }
          goto LAB_00154bd0;
        }
        if (lVar8 == 0x499c256ddfdcd8de) {
          _DAT_001f66b0 = _DAT_001f66b0 ^ 0x303030303030303;
          uRam00000000001f66b8 = uRam00000000001f66b8 ^ 0x303030303030303;
          DAT_001f66c8 = DAT_001f66c8 ^ 3;
          DAT_001f66c9 = DAT_001f66c9 ^ 3;
          DAT_001f66c0 = DAT_001f66c0 ^ 0x303030303030303;
          DAT_001f8088 = '\x01';
          puVar3 = puVar13;
          lVar11 = 0x7f51cb170b8e65b0;
          goto LAB_00154bd0;
        }
        puVar3 = puVar13;
        if (lVar8 != 0x52b18d7e22ce3424) goto LAB_00154bd0;
        lVar8 = 0x499c256ddfdcd8de;
        bVar1 = DAT_001f8088 == '\0';
        lVar11 = 0x2bce9ab9d46341bf;
      }
      goto LAB_00156db0;
    }
    if (lVar8 < 0x70663d7a410b1f2d) {
      if (lVar8 < 0x64b91f9dd9399ad7) {
        if (lVar8 == 0x5fc0c81403ccbd95) {
          local_110 = param_2[uVar7 * 2 + 0xe];
          puVar3 = puVar13;
          lVar11 = -0x187424d901ef3a;
          local_c8 = uVar7;
          local_d0 = bVar4;
          if (local_110 != 0) {
            lVar11 = 0x3e44260b43a6f04c;
          }
        }
        else {
          puVar3 = puVar13;
          param_1 = local_a8;
          lVar11 = 0x5fc0c81403ccbd95;
          param_3 = local_98;
          if ((lVar8 != 0x60cff95b182d42a4) &&
             (param_1 = uVar7, lVar11 = lVar8, param_3 = bVar4, lVar8 == 0x63db34b15c0c0e53)) {
            iVar2 = FUN_001ebe70(0,1,&DAT_001f7f24);
            lVar11 = 0x1a511495c09e2af5;
            if (iVar2 != 0) {
              lVar11 = -0x5eaa8f99944c17c0;
            }
          }
        }
        goto LAB_00154bd0;
      }
      if (lVar8 == 0x64b91f9dd9399ad7) {
        iVar2 = FUN_001ebe70(0,1,&DAT_001f7c64);
        puVar3 = puVar13;
        lVar11 = -0x49b19c44455e2bfa;
        if (iVar2 != 0) {
          lVar11 = 0x26ac7b6fcdd2acce;
        }
        goto LAB_00154bd0;
      }
      if (lVar8 != 0x68e70700a38dd9e4) {
        puVar3 = puVar13;
        if (lVar8 == 0x69a80a17df9cdc7d) {
          DAT_001f7f2c = 0;
          iVar2 = FUN_001ca28c(&DAT_001f66d0,local_110);
          lVar11 = 0x83fde43c5fc6f1;
          if (iVar2 != 0) {
            lVar11 = 0x5c990f66a4ea87ac;
          }
        }
        goto LAB_00154bd0;
      }
    }
    else if (lVar8 < 0x7cdcce343abf7dc0) {
      if (lVar8 == 0x70663d7a410b1f2d) goto LAB_001561fc;
      if (lVar8 == 0x7568b07102923802) {
        lVar8 = -0xc5e29b0d1a58ac8;
        bVar1 = DAT_001f808a == '\0';
        lVar11 = -0x43909ee70e5bba0d;
        goto LAB_00156db0;
      }
      puVar3 = puVar13;
      if (lVar8 != 0x78a5ed56ab43e535) goto LAB_00154bd0;
    }
    else {
      puVar3 = puVar13;
      lVar11 = 0x3afd773f1cc75eb1;
      if (lVar8 == 0x7cdcce343abf7dc0) goto LAB_00154bd0;
      if (lVar8 != 0x7e6d0755e427d5ed) {
        lVar11 = lVar8;
        if (lVar8 == 0x7f51cb170b8e65b0) {
          DAT_001f7f28 = 0;
          iVar2 = FUN_001ca28c(&DAT_001f66b0,local_f0);
          lVar11 = 0x12747ed96bff26ec;
          if (iVar2 != 0) {
            lVar11 = -0x267a9a044f80720c;
          }
        }
        goto LAB_00154bd0;
      }
    }
  }
LAB_001561fc:
  bVar4 = 0;
LAB_00156214:
  puVar3 = puVar13;
  lVar11 = -0x73f52144e9d735d1;
  param_4 = uVar5;
  local_8c = bVar4;
  goto LAB_00154bd0;
}


