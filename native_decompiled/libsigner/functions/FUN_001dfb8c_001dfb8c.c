// Function: FUN_001dfb8c
// Entry: 001dfb8c

void FUN_001dfb8c(long *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  long *plVar5;
  long *plVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  void *pvVar10;
  void *pvVar11;
  void *pvVar12;
  void *local_c8;
  void *local_c0;
  void *local_b8;
  void *local_b0;
  void *local_a8;
  void *local_a0;
  void *local_98;
  void *local_90;
  void *local_88;
  void *local_80;
  void *local_78;
  
  plVar5 = param_1 + 4;
  pvVar8 = (void *)*plVar5;
  plVar6 = param_1 + 2;
  pvVar1 = (void *)0x68ebe042d21d5359;
  if (pvVar8 != (void *)0x0) {
    pvVar1 = (void *)0xa71aa0a447dfb2c1;
  }
  pvVar2 = pvVar1;
  pvVar3 = pvVar8;
  pvVar4 = (void *)0xa71aa0a447dfb2c1;
  pvVar9 = (void *)0xc28fcaf27d252fb1;
LAB_001dfca4:
  do {
    while (pvVar12 = pvVar9, pvVar10 = pvVar4, pvVar11 = pvVar3, pvVar7 = pvVar2, pvVar9 = pvVar12,
          pvVar2 = pvVar7, pvVar3 = pvVar11, pvVar4 = pvVar10, (long)pvVar12 < 0x99a64c8bb0943be) {
      if ((long)pvVar12 < -0x3904f4d3e6e92c9d) {
        if ((long)pvVar12 < -0x5a8169c1901d1267) {
          if ((long)pvVar12 < -0x659626d38519acc0) {
            if (pvVar12 == (void *)0x8b036293246c12e8) {
              pvVar9 = (void *)0x67d7fb9a0fcfedef;
              if (*(long *)((long)pvVar11 + 0x10) != 0) {
                pvVar9 = (void *)0x385d80545f3737e5;
              }
              *plVar6 = *(long *)((long)pvVar11 + 0x10);
              local_90 = pvVar11;
            }
            else if (pvVar12 == (void *)0x8d97e1e53294fa64) {
              pvVar9 = (void *)0xce02351cf93d8b10;
            }
          }
          else if (pvVar12 == (void *)0x9a69d92c7ae65340) {
            local_b8 = (void *)param_1[2];
            pvVar9 = (void *)0x99a64c8bb0943be;
            if (local_b8 != (void *)0x0) {
              pvVar9 = (void *)0x9e815e0ebb56e1ab;
            }
            param_1[4] = 0;
LAB_001e0780:
            param_1[5] = (long)plVar5;
          }
          else if (pvVar12 == (void *)0x9e815e0ebb56e1ab) {
            pvVar3 = local_b8;
            pvVar9 = (void *)0x8b036293246c12e8;
          }
        }
        else if ((long)pvVar12 < -0x556fb0b8c357cda3) {
          if (pvVar12 == (void *)0xa57e963e6fe2ed99) {
            local_c0 = *(void **)((long)local_98 + 8);
            pvVar9 = (void *)0x1ca1c4df0658c90c;
            if (local_c0 != (void *)0x0) {
              pvVar9 = (void *)0xe2862cb80cc59307;
            }
          }
          else if (pvVar12 == (void *)0xa71aa0a447dfb2c1) {
            pvVar4 = pvVar8;
            pvVar9 = (void *)0xaa904f473ca8325d;
          }
        }
        else if (pvVar12 == (void *)0xaa904f473ca8325d) {
          pvVar9 = (void *)0x6eeab4686c73ddec;
          if (*(long *)((long)pvVar10 + 0x10) != 0) {
            pvVar9 = (void *)0x2da499b57eb5c12d;
          }
          *plVar5 = *(long *)((long)pvVar10 + 0x10);
          local_88 = pvVar10;
        }
        else {
          pvVar9 = (void *)0x5dcf9f1451efb870;
          if ((pvVar12 != (void *)0xb94ff070dae01698) &&
             (pvVar9 = pvVar12, pvVar12 == (void *)0xc28fcaf27d252fb1)) {
            pvVar9 = pvVar1;
          }
        }
      }
      else if ((long)pvVar12 < -0x1d79d347f33a6cf9) {
        if ((long)pvVar12 < -0x30bb96c187aba16a) {
          pvVar4 = local_78;
          pvVar9 = (void *)0xaa904f473ca8325d;
          if ((pvVar12 != (void *)0xc6fb0b2c1916d363) &&
             (pvVar4 = pvVar10, pvVar9 = pvVar12, pvVar12 == (void *)0xce02351cf93d8b10)) {
            local_80 = (void *)*param_1;
            pvVar9 = (void *)0x6f6126ed95917c7b;
            if (local_80 != (void *)0x0) {
              pvVar9 = (void *)0xcf44693e78545e96;
            }
            param_1[2] = 0;
LAB_001e0548:
            param_1[3] = (long)plVar6;
            pvVar4 = pvVar10;
          }
        }
        else {
          pvVar2 = local_80;
          pvVar9 = (void *)0xebaf2643e4f51b2b;
          if ((pvVar12 != (void *)0xcf44693e78545e96) &&
             (pvVar2 = pvVar7, pvVar9 = pvVar12, pvVar12 == (void *)0xd75d385f14cfcfa1)) {
            pvVar2 = local_c8;
            pvVar9 = (void *)0xebaf2643e4f51b2b;
          }
        }
      }
      else if ((long)pvVar12 < -0x12fc1cb5b49c762d) {
        if (pvVar12 == (void *)0xe2862cb80cc59307) {
          free(local_c0);
          pvVar9 = (void *)0x178e5d451f8af4fe;
        }
        else if (pvVar12 == (void *)0xebaf2643e4f51b2b) {
          pvVar9 = (void *)0x2ab93652bc5e6aed;
          if (*(long *)((long)pvVar7 + 0x10) != 0) {
            pvVar9 = (void *)0xed03e34a4b6389d3;
          }
          *param_1 = *(long *)((long)pvVar7 + 0x10);
          local_98 = pvVar7;
        }
      }
      else {
        pvVar9 = (void *)0xa57e963e6fe2ed99;
        if (((pvVar12 != (void *)0xed03e34a4b6389d3) &&
            (pvVar9 = (void *)0x5a10b84f0fc76c75, pvVar12 != (void *)0xfd3de20088686ff8)) &&
           (pvVar9 = pvVar12, pvVar12 == (void *)0xfe878156b159bb72)) {
LAB_001dff98:
          pvVar9 = (void *)0x5a6e055eb95c23c2;
        }
      }
    }
    if (0x5a6e055eb95c23c1 < (long)pvVar12) {
      if ((long)pvVar12 < 0x68aa96a99807d6a9) {
        if (0x60097c96feb43b64 < (long)pvVar12) {
          if (pvVar12 == (void *)0x60097c96feb43b65) {
            free(local_a8);
            pvVar9 = (void *)0x5dcf9f1451efb870;
          }
          else if (pvVar12 == (void *)0x67d7fb9a0fcfedef) {
            pvVar9 = (void *)0x785a883b00ef416d;
            goto LAB_001e0548;
          }
          goto LAB_001dfca4;
        }
        if (pvVar12 != (void *)0x5a6e055eb95c23c2) {
          if (pvVar12 == (void *)0x5dcf9f1451efb870) {
            free(local_88);
            local_78 = (void *)*plVar5;
            pvVar9 = (void *)0x41e46d9f17477c95;
            if (local_78 != (void *)0x0) {
              pvVar9 = (void *)0xc6fb0b2c1916d363;
            }
          }
          goto LAB_001dfca4;
        }
        free(local_90);
        pvVar7 = (void *)*plVar6;
        pvVar9 = (void *)0x8d97e1e53294fa64;
        pvVar11 = (void *)0x5a173ff8b4bb5be2;
        local_a0 = pvVar7;
      }
      else if ((long)pvVar12 < 0x6eeab4686c73ddec) {
        if (pvVar12 != (void *)0x68aa96a99807d6a9) {
          if (pvVar12 == (void *)0x68ebe042d21d5359) {
            pvVar9 = (void *)0x9a69d92c7ae65340;
          }
          goto LAB_001dfca4;
        }
        pvVar7 = *(void **)((long)local_88 + 8);
        pvVar9 = (void *)0xb94ff070dae01698;
        pvVar11 = (void *)0x60097c96feb43b65;
        local_a8 = pvVar7;
      }
      else {
        if (pvVar12 == (void *)0x6eeab4686c73ddec) {
          pvVar9 = (void *)0x68aa96a99807d6a9;
          goto LAB_001e0780;
        }
        pvVar9 = (void *)0x5a10b84f0fc76c75;
        if ((pvVar12 == (void *)0x6f6126ed95917c7b) ||
           (pvVar9 = pvVar12, pvVar12 != (void *)0x785a883b00ef416d)) goto LAB_001dfca4;
        pvVar7 = *(void **)((long)local_90 + 8);
        pvVar9 = (void *)0xfe878156b159bb72;
        pvVar11 = (void *)0x2ac20a3475ce5e93;
        local_b0 = pvVar7;
      }
      if (pvVar7 != (void *)0x0) {
        pvVar9 = pvVar11;
      }
      goto LAB_001dfca4;
    }
    if ((long)pvVar12 < 0x2da499b57eb5c12d) {
      if ((long)pvVar12 < 0x1ca1c4df0658c90c) {
        pvVar9 = (void *)0xce02351cf93d8b10;
        if ((pvVar12 != (void *)0x99a64c8bb0943be) &&
           (pvVar9 = pvVar12, pvVar12 == (void *)0x178e5d451f8af4fe)) {
          free(local_98);
          local_c8 = (void *)*param_1;
          pvVar9 = (void *)0xfd3de20088686ff8;
          if (local_c8 != (void *)0x0) {
            pvVar9 = (void *)0xd75d385f14cfcfa1;
          }
        }
      }
      else {
        pvVar9 = (void *)0x178e5d451f8af4fe;
        if (pvVar12 != (void *)0x1ca1c4df0658c90c) {
          if (pvVar12 == (void *)0x2ab93652bc5e6aed) {
            param_1[1] = (long)param_1;
            pvVar9 = (void *)0xa57e963e6fe2ed99;
          }
          else {
            pvVar9 = pvVar12;
            if (pvVar12 == (void *)0x2ac20a3475ce5e93) {
              free(local_b0);
              goto LAB_001dff98;
            }
          }
        }
      }
    }
    else if ((long)pvVar12 < 0x41e46d9f17477c95) {
      pvVar9 = (void *)0x68aa96a99807d6a9;
      if ((pvVar12 != (void *)0x2da499b57eb5c12d) &&
         (pvVar9 = pvVar12, pvVar12 == (void *)0x385d80545f3737e5)) {
        pvVar9 = (void *)0x785a883b00ef416d;
      }
    }
    else {
      pvVar9 = (void *)0x9a69d92c7ae65340;
      if (((pvVar12 != (void *)0x41e46d9f17477c95) &&
          (pvVar3 = local_a0, pvVar9 = (void *)0x8b036293246c12e8,
          pvVar12 != (void *)0x5a173ff8b4bb5be2)) &&
         (pvVar3 = pvVar11, pvVar9 = pvVar12, pvVar12 == (void *)0x5a10b84f0fc76c75)) {
        *param_1 = 0;
        param_1[1] = (long)param_1;
        return;
      }
    }
  } while( true );
}


