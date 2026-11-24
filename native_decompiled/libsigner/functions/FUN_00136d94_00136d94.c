// Function: FUN_00136d94
// Entry: 00136d94

bool FUN_00136d94(undefined4 *param_1,long param_2,size_t param_3,undefined8 *param_4,long *param_5,
                 undefined8 *param_6)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *extraout_x11;
  undefined8 *extraout_x12;
  undefined8 *puVar11;
  undefined8 *extraout_x14;
  undefined8 *puVar12;
  size_t sVar13;
  size_t unaff_x20;
  size_t sVar14;
  size_t unaff_x22;
  size_t unaff_x23;
  
  puVar7 = param_4;
  pvVar6 = calloc(param_3,8);
  lVar1 = 0xc4df6634f2d3a60;
  if (param_3 != 0) {
    lVar1 = 0x7c447757119e16fb;
  }
  lVar2 = -0x2967e804cc53e7d0;
  if (pvVar6 == (void *)0x0) {
    lVar2 = 0x5c1860de60b3ffcf;
  }
  lVar10 = 0x5617c25d11de1e41;
  puVar3 = extraout_x11;
  puVar4 = extraout_x12;
  puVar12 = extraout_x14;
  sVar13 = param_3;
LAB_00136f38:
  while (puVar11 = puVar4, puVar8 = puVar3, lVar9 = lVar10, lVar10 = lVar9, puVar3 = puVar8,
        puVar4 = puVar11, lVar9 < 0x23018c7f3f32c45f) {
    if (lVar9 < -0x2967e804cc53e7d0) {
      lVar10 = 0x5e57d884f88ef1eb;
      if (lVar9 < -0x47b0b42862fee19d) {
        puVar3 = puVar12;
        if (lVar9 != -0x6ccead6fd5ab6ab6) {
          if (lVar9 == -0x578c07d54e4b8925) {
            *param_4 = pvVar6;
            *param_5 = (long)puVar11;
            lVar10 = -0x6d1c4a7b1961d304;
            puVar3 = puVar8;
          }
          else {
            lVar10 = lVar9;
            puVar3 = puVar8;
            if (lVar9 == -0x6d1c4a7b1961d304) {
              return pvVar6 != (void *)0x0;
            }
          }
        }
      }
      else {
        puVar3 = puVar12;
        if ((lVar9 != -0x47b0b42862fee19d) &&
           (lVar10 = lVar9, puVar3 = puVar8, lVar9 == -0x419126fbcf2090e2)) {
          bVar5 = *(long *)(sVar13 + 0x28) == 10;
          lVar10 = -0x27023d3a9192d90b;
          lVar9 = 0x6abc83f807efebd;
LAB_001372d0:
          puVar3 = puVar8;
          if (!bVar5) {
            lVar10 = lVar9;
          }
        }
      }
    }
    else if (lVar9 < 0x4b7e07f23cad2a3) {
      lVar10 = lVar1;
      if ((lVar9 != -0x2967e804cc53e7d0) && (lVar10 = lVar9, lVar9 == -0x27023d3a9192d90b)) {
        *(size_t *)((long)pvVar6 + (long)puVar12 * 8) = sVar13;
        lVar10 = 0x5e57d884f88ef1eb;
        puVar3 = (undefined8 *)((long)puVar12 + 1);
      }
    }
    else {
      lVar10 = 0x5e57d884f88ef1eb;
      puVar3 = puVar12;
      if (((lVar9 != 0x4b7e07f23cad2a3) && (lVar9 != 0x6abc83f807efebd)) &&
         (lVar10 = lVar9, puVar3 = puVar8, lVar9 == 0xc4df6634f2d3a60)) {
        lVar10 = -0x578c07d54e4b8925;
        puVar4 = (undefined8 *)0x0;
      }
    }
  }
  if (lVar9 < 0x5617c25d11de1e41) {
    if (lVar9 < 0x3e45784a0df6e8ce) {
      lVar10 = -0x578c07d54e4b8925;
      puVar4 = puVar7;
      if (((lVar9 != 0x23018c7f3f32c45f) &&
          (lVar10 = lVar9, puVar4 = puVar11, lVar9 == 0x2960f807ee05b349)) &&
         (sVar13 = *(size_t *)(param_2 + unaff_x20 * 8), lVar10 = 0x7bd8b327f44a7e6d,
         puVar12 = param_6, unaff_x23 = unaff_x20, *(long *)(sVar13 + 8) != 0)) {
        lVar10 = 0x4b7e07f23cad2a3;
      }
      goto LAB_00136f38;
    }
    if (lVar9 == 0x3e45784a0df6e8ce) {
      bVar5 = *(long *)(sVar13 + 0x20) == 0;
      lVar10 = -0x419126fbcf2090e2;
      lVar9 = -0x47b0b42862fee19d;
      goto LAB_001372d0;
    }
    puVar8 = puVar7;
    sVar14 = unaff_x22;
    if (lVar9 != 0x49d416b134c5accd) goto LAB_00136f38;
  }
  else {
    if (lVar9 < 0x5e57d884f88ef1eb) {
      lVar10 = lVar2;
      if ((lVar9 != 0x5617c25d11de1e41) && (lVar10 = lVar9, lVar9 == 0x5c1860de60b3ffcf)) {
        *param_1 = 2;
        lVar10 = -0x6d1c4a7b1961d304;
      }
      goto LAB_00136f38;
    }
    if (lVar9 == 0x5e57d884f88ef1eb) {
      unaff_x22 = unaff_x23 + 1;
      puVar7 = puVar8;
      lVar10 = 0x23018c7f3f32c45f;
      if (unaff_x22 != param_3) {
        lVar10 = 0x49d416b134c5accd;
      }
      goto LAB_00136f38;
    }
    if (lVar9 == 0x7bd8b327f44a7e6d) {
      lVar10 = 0x3e45784a0df6e8ce;
      if (*(long *)(sVar13 + 0x18) != 0) {
        lVar10 = -0x6ccead6fd5ab6ab6;
      }
      goto LAB_00136f38;
    }
    if (lVar9 != 0x7c447757119e16fb) goto LAB_00136f38;
    puVar8 = (undefined8 *)0x0;
    sVar14 = 0;
  }
  param_6 = puVar8;
  lVar10 = 0x2960f807ee05b349;
  unaff_x20 = sVar14;
  goto LAB_00136f38;
}


