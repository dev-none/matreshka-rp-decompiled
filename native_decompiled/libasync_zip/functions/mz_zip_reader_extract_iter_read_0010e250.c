// Function: mz_zip_reader_extract_iter_read
// Entry: 0010e250

size_t mz_zip_reader_extract_iter_read(long *param_1,byte *param_2,ulong param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong uVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  size_t sVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  code *pcVar12;
  ulong __n;
  ulong local_78;
  long local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar9 = *param_1, lVar9 == 0)) {
    __n = 0;
    goto LAB_0010e4b4;
  }
  __n = 0;
  if ((param_2 == (byte *)0x0) || (*(long *)(lVar9 + 0x68) == 0)) goto LAB_0010e4b4;
  if (((*(byte *)((long)param_1 + 9) >> 2 & 1) == 0) && (*(short *)((long)param_1 + 0x5e) != 0)) {
    uVar10 = param_1[0x96];
    __n = 0;
    do {
      lVar9 = param_1[0x95];
      local_78 = 0x8000 - (param_1[7] & 0x7fffU);
      pbVar2 = (byte *)(lVar9 + (param_1[7] & 0x7fffU));
      if (uVar10 == 0) {
        lVar6 = param_1[5];
        if (lVar6 == 0) {
          lVar6 = *param_1;
          uVar10 = param_1[6];
          if (*(long *)(*(long *)(lVar6 + 0x68) + 0x80) != 0) {
            lVar6 = 0;
            goto LAB_0010e360;
          }
          pcVar12 = *(code **)(lVar6 + 0x48);
          uVar7 = *(undefined8 *)(lVar6 + 0x60);
          uVar3 = param_1[3];
          if (uVar10 <= (ulong)param_1[3]) {
            uVar3 = uVar10;
          }
          param_1[5] = uVar3;
          lVar6 = (*pcVar12)(uVar7,param_1[8],param_1[0x94]);
          if (lVar6 == param_1[5]) {
            lVar9 = param_1[0x95];
            param_1[4] = 0;
            uVar10 = param_1[6] - lVar6;
            param_1[8] = param_1[8] + lVar6;
            param_1[6] = uVar10;
            goto LAB_0010e360;
          }
          lVar9 = *param_1;
          if (lVar9 != 0) {
            uVar5 = 0x14;
            goto LAB_0010e65c;
          }
          goto LAB_0010e660;
        }
        uVar10 = param_1[6];
LAB_0010e360:
        local_70 = lVar6;
        uVar5 = tinfl_decompress(param_1 + 0x97,param_1[0x94] + param_1[4],&local_70,lVar9,pbVar2,
                                 &local_78,(ulong)(uVar10 != 0) << 1);
        *(undefined4 *)((long)param_1 + 0xc) = uVar5;
        param_1[4] = param_1[4] + local_70;
        param_1[5] = param_1[5] - local_70;
        param_1[0x96] = local_78;
        uVar10 = local_78;
        if (local_78 != 0) goto LAB_0010e3b4;
      }
      else {
LAB_0010e3b4:
        sVar8 = param_3 - __n;
        if (uVar10 <= param_3 - __n) {
          sVar8 = uVar10;
        }
        memcpy(param_2 + __n,pbVar2,sVar8);
        uVar11 = ~*(uint *)(param_1 + 2);
        for (uVar10 = sVar8; 3 < uVar10; uVar10 = uVar10 - 4) {
          uVar11 = *(uint *)(&DAT_00103514 + ((ulong)(*pbVar2 ^ uVar11) & 0xff) * 4) ^ uVar11 >> 8;
          uVar11 = *(uint *)(&DAT_00103514 + ((ulong)(pbVar2[1] ^ uVar11) & 0xff) * 4) ^ uVar11 >> 8
          ;
          uVar11 = *(uint *)(&DAT_00103514 + ((ulong)(pbVar2[2] ^ uVar11) & 0xff) * 4) ^ uVar11 >> 8
          ;
          pbVar1 = pbVar2 + 3;
          pbVar2 = pbVar2 + 4;
          uVar11 = *(uint *)(&DAT_00103514 + ((ulong)(*pbVar1 ^ uVar11) & 0xff) * 4) ^ uVar11 >> 8;
        }
        for (; uVar10 != 0; uVar10 = uVar10 - 1) {
          uVar11 = *(uint *)(&DAT_00103514 + ((ulong)(*pbVar2 ^ uVar11) & 0xff) * 4) ^ uVar11 >> 8;
          pbVar2 = pbVar2 + 1;
        }
        lVar9 = param_1[7];
        *(uint *)(param_1 + 2) = ~uVar11;
        uVar10 = param_1[0x96] - sVar8;
        param_1[0x96] = uVar10;
        param_1[7] = lVar9 + sVar8;
        if ((ulong)param_1[0xf] < lVar9 + sVar8) {
          lVar9 = *param_1;
          if (lVar9 != 0) {
            uVar5 = 0xb;
LAB_0010e65c:
            *(undefined4 *)(lVar9 + 0x1c) = uVar5;
          }
LAB_0010e660:
          *(undefined4 *)((long)param_1 + 0xc) = 0xffffffff;
          goto LAB_0010e4b4;
        }
        __n = sVar8 + __n;
      }
      if ((param_3 <= __n) || (1 < *(int *)((long)param_1 + 0xc) - 1U)) goto LAB_0010e4b4;
    } while( true );
  }
  __n = param_1[6];
  if (param_3 <= (ulong)param_1[6]) {
    __n = param_3;
  }
  if (*(long *)(*(long *)(lVar9 + 0x68) + 0x80) == 0) {
    sVar8 = (**(code **)(lVar9 + 0x48))(*(undefined8 *)(lVar9 + 0x60),param_1[8],param_2,__n);
    if (sVar8 == __n) goto LAB_0010e53c;
    if (*param_1 != 0) {
      *(undefined4 *)(*param_1 + 0x1c) = 0x14;
    }
    __n = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0xffffffff;
    if ((*(byte *)((long)param_1 + 9) >> 2 & 1) == 0) {
      uVar11 = ~*(uint *)(param_1 + 2);
      goto LAB_0010e628;
    }
  }
  else {
    memcpy(param_2,(void *)param_1[0x94],__n);
    param_1[0x94] = param_1[0x94] + __n;
LAB_0010e53c:
    if ((*(byte *)((long)param_1 + 9) >> 2 & 1) == 0) {
      uVar11 = ~*(uint *)(param_1 + 2);
      for (uVar10 = __n; 3 < uVar10; uVar10 = uVar10 - 4) {
        uVar11 = *(uint *)(&DAT_00103514 + ((ulong)(*param_2 ^ uVar11) & 0xff) * 4) ^ uVar11 >> 8;
        uVar11 = *(uint *)(&DAT_00103514 + ((ulong)(param_2[1] ^ uVar11) & 0xff) * 4) ^ uVar11 >> 8;
        uVar11 = *(uint *)(&DAT_00103514 + ((ulong)(param_2[2] ^ uVar11) & 0xff) * 4) ^ uVar11 >> 8;
        pbVar2 = param_2 + 3;
        param_2 = param_2 + 4;
        uVar11 = *(uint *)(&DAT_00103514 + ((ulong)(*pbVar2 ^ uVar11) & 0xff) * 4) ^ uVar11 >> 8;
      }
      for (; uVar10 != 0; uVar10 = uVar10 - 1) {
        uVar11 = *(uint *)(&DAT_00103514 + ((ulong)(*param_2 ^ uVar11) & 0xff) * 4) ^ uVar11 >> 8;
        param_2 = param_2 + 1;
      }
LAB_0010e628:
      *(uint *)(param_1 + 2) = ~uVar11;
    }
  }
  param_1[6] = param_1[6] - __n;
  param_1[8] = param_1[8] + __n;
  param_1[7] = param_1[7] + __n;
LAB_0010e4b4:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return __n;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


