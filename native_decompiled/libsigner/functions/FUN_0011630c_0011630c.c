// Function: FUN_0011630c
// Entry: 0011630c

uint FUN_0011630c(undefined8 param_1,double *param_2)

{
  double *pdVar1;
  long lVar2;
  uint unaff_1000006d;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  double *pdVar9;
  double *pdVar10;
  double *in_x10;
  double *pdVar11;
  double *in_x11;
  double *pdVar12;
  uint uVar13;
  double *in_x12;
  double *pdVar14;
  double *pdVar15;
  double *in_x14;
  double *pdVar16;
  double *pdVar17;
  uint in_w15;
  uint uVar18;
  double *pdVar19;
  double unaff_d9;
  double *local_140;
  uint local_134;
  void *local_130;
  void *local_128;
  double *local_120;
  double local_118;
  double *local_110;
  double *local_108;
  uint local_fc;
  double *local_f0;
  double *pdStack_e8;
  double *local_e0;
  uint local_cc;
  double *local_c8;
  double *local_c0;
  double *pdStack_b8;
  double *local_b0;
  uint local_a4;
  double *local_a0;
  double *local_98;
  long local_90;
  long local_88;
  long local_80;
  
  lVar2 = tpidr_el0;
  local_80 = *(long *)(lVar2 + 0x28);
  pdVar1 = (double *)0x4667faa97e61e16b;
  if (*(char *)(param_2 + 1) != '\0') {
    pdVar1 = (double *)0x5c64deb325ebe6e3;
  }
  local_98 = (double *)0x0;
  pdVar3 = param_2;
  pdVar4 = pdVar1;
  pdVar5 = (double *)0x4667faa97e61e16b;
  pdVar15 = (double *)0x504de0ab0143a400;
LAB_00116414:
  uVar18 = unaff_1000006d;
  uVar13 = in_w15;
  pdVar19 = pdVar15;
  pdVar16 = in_x14;
  pdVar14 = in_x12;
  pdVar12 = in_x11;
  pdVar11 = in_x10;
  pdVar10 = pdVar5;
  pdVar9 = pdVar4;
  pdVar17 = pdVar3;
  pdVar15 = pdVar19;
  pdVar3 = pdVar17;
  pdVar4 = pdVar9;
  pdVar5 = pdVar10;
  in_x10 = pdVar11;
  in_x11 = pdVar12;
  in_x12 = pdVar14;
  in_x14 = pdVar16;
  in_w15 = uVar13;
  unaff_1000006d = uVar18;
  if (0xc0a5e0db799510d < (long)pdVar19) {
    if ((long)pdVar19 < 0x504de0ab0143a400) {
      if ((long)pdVar19 < 0x3edcd0f4d3cd0b9e) {
        if ((long)pdVar19 < 0x17ee608215c1bfe1) {
          if (pdVar19 == (double *)0xc0a5e0db799510e) {
            uVar8 = FUN_0011768c(param_1,local_c8[1],local_118,param_2);
            pdVar15 = (double *)0x942281a3a3df6a94;
            if ((uVar8 & 1) == 0) {
              pdVar15 = (double *)0xc095ebef8aa86c4a;
            }
            goto LAB_00116414;
          }
          in_w15 = uVar18;
          uVar13 = local_a4;
          if (pdVar19 != (double *)0xd85baf9371e4ea2) goto LAB_00116414;
        }
        else {
          if (pdVar19 == (double *)0x17ee608215c1bfe1) {
            free(local_130);
            *(undefined8 *)((long)local_98[1] + (long)local_110 * 8) = 0;
            in_x10 = (double *)*local_98;
            in_x11 = local_98;
            pdVar15 = (double *)0xc66a406278f8ea11;
            in_w15 = uVar18;
            goto LAB_00116414;
          }
          in_x14 = local_e0;
          pdVar15 = (double *)0xec6c4128c87b678c;
          in_w15 = local_a4;
          unaff_1000006d = local_a4;
          if ((pdVar19 == (double *)0x26cb1dd256007b54) ||
             (in_x14 = pdVar16, pdVar15 = pdVar19, in_w15 = uVar18, unaff_1000006d = uVar18,
             pdVar19 != (double *)0x26ccb637987e1fef)) goto LAB_00116414;
          free(local_108);
          uVar13 = local_134;
        }
        in_x14 = pdVar16;
        pdVar15 = (double *)0x5850dc65c14c69f0;
        in_w15 = uVar18;
        local_fc = uVar13;
        unaff_1000006d = uVar18;
        goto LAB_00116414;
      }
      if ((long)pdVar19 < 0x45143644ab8d4ffc) {
        pdVar3 = local_f0;
        pdVar4 = local_a0;
        pdVar5 = pdStack_e8;
        pdVar15 = (double *)0x7517470ae32ec028;
        in_w15 = uVar18;
        if ((pdVar19 != (double *)0x3edcd0f4d3cd0b9e) &&
           (pdVar3 = pdVar17, pdVar4 = pdVar9, pdVar5 = pdVar10, pdVar15 = pdVar19,
           pdVar19 == (double *)0x411e591c36e9b8cd)) {
          iVar7 = FUN_001ebe70(0,1,&DAT_001f7b1c);
          pdVar15 = (double *)0x82c6d2af1f2300dd;
          in_w15 = uVar13;
          if (iVar7 != 0) {
            pdVar15 = (double *)0x527091732fc9a702;
          }
        }
        goto LAB_00116414;
      }
      in_x10 = pdStack_b8;
      in_x11 = local_c0;
      pdVar15 = (double *)0xc66a406278f8ea11;
      in_w15 = uVar18;
      if (pdVar19 == (double *)0x45143644ab8d4ffc) goto LAB_00116414;
      if (pdVar19 == (double *)0x4667faa97e61e16b) {
        local_90 = 0;
        local_88 = 0;
        FUN_001d8570(0,&local_90);
        unaff_d9 = (double)local_88 / 1000000.0 + (double)local_90 * 1000.0;
        in_x10 = pdVar11;
        in_x11 = pdVar12;
        pdVar15 = (double *)0x905f08e42bf54d4c;
        in_w15 = uVar13;
        if (unaff_d9 - *param_2 <= 15000.0) {
          pdVar15 = (double *)0xc612834a9cb540a8;
        }
        goto LAB_00116414;
      }
      in_x10 = pdVar11;
      in_x11 = pdVar12;
      pdVar15 = pdVar19;
      if (pdVar19 != (double *)0x4eff2a66ce3dd1ce) goto LAB_00116414;
      local_128 = (void *)pdVar14[1];
      bVar6 = local_128 == (void *)0x0;
      pdVar15 = (double *)0xa9913f592c80b307;
      pdVar17 = (double *)0xc75152d6e5fb87e1;
      local_140 = pdVar14;
    }
    else {
      unaff_1000006d = uVar13;
      if ((long)pdVar19 < 0x5f9336fe671b051e) {
        if ((long)pdVar19 < 0x5364818510256f6d) {
          pdVar15 = pdVar1;
          if (((pdVar19 != (double *)0x504de0ab0143a400) &&
              (in_x12 = local_b0, pdVar15 = (double *)0x4eff2a66ce3dd1ce,
              pdVar19 != (double *)0x523a3ead97e04bcf)) &&
             (in_x12 = pdVar14, pdVar15 = pdVar19, pdVar19 == (double *)0x527091732fc9a702))
          goto LAB_00116a6c;
        }
        else if (pdVar19 == (double *)0x5364818510256f6d) {
          pdVar3 = local_120;
          pdVar4 = local_b0;
          pdVar5 = (double *)0x0;
          pdVar15 = (double *)0x7517470ae32ec028;
        }
        else {
          pdVar15 = (double *)0x79d29bb95f689596;
          if ((pdVar19 != (double *)0x5c64deb325ebe6e3) &&
             (pdVar15 = pdVar19, pdVar19 == (double *)0x5850dc65c14c69f0)) {
            if (*(long *)(lVar2 + 0x28) == local_80) {
              return local_fc & 1;
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
        }
        goto LAB_00116414;
      }
      if (0x7517470ae32ec027 < (long)pdVar19) {
        if (pdVar19 == (double *)0x7517470ae32ec028) {
          local_130 = *(void **)((long)pdVar9[1] + (long)pdVar10 * 8);
          pdVar15 = (double *)0x45143644ab8d4ffc;
          local_110 = pdVar10;
          local_c0 = pdVar9;
          pdStack_b8 = pdVar17;
          unaff_1000006d = uVar18;
          if (local_130 != (void *)0x0) {
            pdVar15 = (double *)0x17ee608215c1bfe1;
          }
        }
        else if (pdVar19 == (double *)0x76dcb423b8c0f722) {
          local_e0 = local_98;
          pdVar15 = (double *)0xd85baf9371e4ea2;
          if (local_98 != (double *)0x0) {
            pdVar15 = (double *)0x26cb1dd256007b54;
          }
          local_a4 = local_cc;
          param_2[0x47] = (double)((ulong)param_2[0x47] | 0x410);
        }
        else if (pdVar19 == (double *)0x79d29bb95f689596) {
LAB_00116a6c:
          in_x12 = pdVar14;
          pdVar15 = (double *)0x411e591c36e9b8cd;
        }
        goto LAB_00116414;
      }
      if (pdVar19 == (double *)0x5f9336fe671b051e) {
        local_c8 = local_98;
        bVar6 = local_98 == (double *)0x0;
        pdVar15 = (double *)0xbeb3759e64790afe;
        pdVar17 = (double *)0x6bd14365fd3bb3f7;
        goto LAB_00116408;
      }
      in_w15 = uVar18;
      unaff_1000006d = uVar18;
      if (pdVar19 != (double *)0x6bd14365fd3bb3f7) goto LAB_00116414;
      local_118 = *local_c8;
      bVar6 = local_118 == 0.0;
      pdVar15 = (double *)0xc6075b07ac7a7108;
      pdVar17 = (double *)0xc0a5e0db799510e;
    }
LAB_00116408:
    in_x10 = pdVar11;
    in_x11 = pdVar12;
    in_w15 = uVar13;
    unaff_1000006d = uVar18;
    if (!bVar6) {
      pdVar15 = pdVar17;
    }
    goto LAB_00116414;
  }
  if (-0x3f6a1410755793b7 < (long)pdVar19) {
    if ((long)pdVar19 < -0x33ffbc19ff382ba3) {
      if ((long)pdVar19 < -0x39ed7cb5634abf58) {
        pdVar15 = (double *)0xbb781622c523886b;
        in_w15 = uVar18;
        if ((pdVar19 != (double *)0xc095ebef8aa86c4a) &&
           (pdVar15 = pdVar19, pdVar19 == (double *)0xc6075b07ac7a7108)) {
          param_2[0x47] = (double)((ulong)param_2[0x47] | 0x410);
          in_x14 = local_c8;
          pdVar15 = (double *)0xec6c4128c87b678c;
          in_w15 = 1;
          unaff_1000006d = 1;
        }
      }
      else {
        pdVar15 = (double *)0xcc0043e600c7d45d;
        in_w15 = uVar18;
        if (pdVar19 != (double *)0xc612834a9cb540a8) {
          if (pdVar19 == (double *)0xc66a406278f8ea11) {
            pdStack_e8 = (double *)((long)local_110 + 1);
            pdVar15 = (double *)0x3edcd0f4d3cd0b9e;
            local_f0 = pdVar11;
            local_a0 = pdVar12;
            if (pdVar11 <= pdStack_e8) {
              pdVar15 = (double *)0xae5ebe65bc3f53d3;
            }
          }
          else {
            pdVar15 = pdVar19;
            if (pdVar19 == (double *)0xc75152d6e5fb87e1) {
              free(local_128);
              local_108 = local_98;
              local_98[1] = 0.0;
              pdVar15 = (double *)0x26ccb637987e1fef;
            }
          }
        }
      }
    }
    else if ((long)pdVar19 < -0x1393bed737849874) {
      if (pdVar19 == (double *)0xcc0043e600c7d45d) {
        *param_2 = unaff_d9;
        pdVar15 = (double *)0x79d29bb95f689596;
        in_w15 = uVar18;
      }
      else {
        in_w15 = uVar18;
        if (pdVar19 == (double *)0xd30cdd6385e82086) {
          pdVar15 = (double *)0xa51eee6073170d7b;
        }
      }
    }
    else if (pdVar19 == (double *)0xec6c4128c87b678c) {
      local_120 = (double *)*pdVar16;
      pdVar15 = (double *)0x523a3ead97e04bcf;
      local_134 = uVar13;
      local_b0 = pdVar16;
      if (local_120 != (double *)0x0) {
        pdVar15 = (double *)0x5364818510256f6d;
      }
    }
    else if (pdVar19 == (double *)0xfc3dbbf3dd231dc2) {
      DAT_001f52e0 = DAT_001f52e0 ^ 0x85;
      DAT_001f52e1 = DAT_001f52e1 ^ 0x85;
      DAT_001f52e2 = DAT_001f52e2 ^ 0x85;
      DAT_001f52e3 = DAT_001f52e3 ^ 0x85;
      DAT_001f52e4 = DAT_001f52e4 ^ 0x85;
      DAT_001f52d8 = DAT_001f52d8 ^ 0x8585858585858585;
      DAT_001f52e5 = DAT_001f52e5 ^ 0x85;
      DAT_001f7b1c._0_2_ = CONCAT11(1,(undefined1)DAT_001f7b1c);
      pdVar15 = (double *)0xa51eee6073170d7b;
      in_w15 = uVar18;
    }
    else {
      in_w15 = uVar18;
      if (pdVar19 == (double *)0x14688872aa34a00) {
        pdVar15 = (double *)0xbb781622c523886b;
      }
    }
    goto LAB_00116414;
  }
  if ((long)pdVar19 < -0x5ae1119f8ce8f285) {
    if ((long)pdVar19 < -0x6fa0f71bd40ab2b4) {
      if (pdVar19 == (double *)0x82c6d2af1f2300dd) {
        pdVar15 = (double *)0xd30cdd6385e82086;
        if (DAT_001f7b1c._1_1_ == '\0') {
          pdVar15 = (double *)0xfc3dbbf3dd231dc2;
        }
      }
      else {
        in_w15 = uVar18;
        if (pdVar19 == (double *)0x880c1057f3805e81) goto LAB_00116c90;
      }
      goto LAB_00116414;
    }
    if (pdVar19 == (double *)0x905f08e42bf54d4c) {
      *(undefined1 *)(param_2 + 1) = 1;
      pdVar15 = (double *)0xcc0043e600c7d45d;
      in_w15 = uVar18;
      goto LAB_00116414;
    }
    if (pdVar19 == (double *)0x942281a3a3df6a94) {
      uVar8 = FUN_00117b5c(param_1,local_98[1],*local_98,param_2);
      pdVar17 = (double *)0x14688872aa34a00;
      pdVar15 = (double *)0x96ce5c51301050c4;
      goto LAB_00117434;
    }
    in_w15 = uVar18;
    if (pdVar19 != (double *)0x96ce5c51301050c4) goto LAB_00116414;
    local_cc = 1;
  }
  else {
    if ((long)pdVar19 < -0x51a1419a43c0ac2d) {
      if (pdVar19 == (double *)0xa51eee6073170d7b) {
        DAT_001f7b1c = 0;
        uVar8 = FUN_0019c6c0(param_1,&local_98,&DAT_001f52d8);
        pdVar17 = (double *)0x880c1057f3805e81;
        pdVar15 = (double *)0x5f9336fe671b051e;
LAB_00117434:
        if ((uVar8 & 1) == 0) {
          pdVar15 = pdVar17;
        }
      }
      else {
        in_w15 = uVar18;
        if (pdVar19 == (double *)0xa9913f592c80b307) {
          local_108 = local_140;
          pdVar15 = (double *)0x26ccb637987e1fef;
        }
      }
      goto LAB_00116414;
    }
    in_x12 = local_a0;
    pdVar15 = (double *)0x4eff2a66ce3dd1ce;
    in_w15 = uVar18;
    if (pdVar19 == (double *)0xae5ebe65bc3f53d3) goto LAB_00116414;
    if (pdVar19 != (double *)0xbb781622c523886b) {
      in_x12 = pdVar14;
      pdVar15 = pdVar19;
      if (pdVar19 == (double *)0xbeb3759e64790afe) {
        local_fc = 1;
        param_2[0x47] = (double)((ulong)param_2[0x47] | 0x410);
        pdVar15 = (double *)0x5850dc65c14c69f0;
      }
      goto LAB_00116414;
    }
LAB_00116c90:
    local_cc = 0;
  }
  in_x12 = pdVar14;
  pdVar15 = (double *)0x76dcb423b8c0f722;
  in_w15 = uVar18;
  goto LAB_00116414;
}


