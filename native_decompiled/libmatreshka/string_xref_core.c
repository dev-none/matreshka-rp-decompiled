// Function: FUN_7137e7fc @ 0x7137e7fc (size=8468)

/* WARNING: Type propagation algorithm not settling */

void FUN_7137e7fc(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                       s__version_300_es_7006bd81);
  uVar2 = DAT_70b462f8;
  if (0 < iVar1) {
    uVar2 = DAT_70b462f8 + iVar1;
  }
  if (0 < iVar1) {
    DAT_70b462f8 = uVar2;
  }
  iVar1 = FUN_71384558(uVar2,0xffffffff,(int)&DAT_70b442f8 - uVar2,
                       s_precision_mediump_float__7006d540);
  if (0 < iVar1) {
    DAT_70b462f8 = DAT_70b462f8 + iVar1;
  }
  iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                       s_precision_lowp_sampler2D__7006308b);
  if (0 < iVar1) {
    DAT_70b462f8 = DAT_70b462f8 + iVar1;
  }
  iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                       s_out_mediump_vec4_FragColor__7006e395);
  if (0 < iVar1) {
    DAT_70b462f8 = DAT_70b462f8 + iVar1;
  }
  iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                       s_uniform_lowp_float_Bias__700662ed);
  if (0 < iVar1) {
    DAT_70b462f8 = DAT_70b462f8 + iVar1;
  }
  uVar2 = param_2 & 0x8000;
  if (uVar2 != 0) {
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_in_vec3_vWorldPosition__7006ec0a);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_in_mediump_float_vSnowMult__700630a5);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
  }
  uVar7 = param_1 & 0x20;
  if (uVar7 != 0) {
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_uniform_sampler2D_Diffuse__70061f81);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_in_mediump_vec2_Out_Tex0__70070f70);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    if (((param_2 & 0x800) != 0) &&
       (iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                             s_uniform_sampler2D_DiffuseBlend1__700630c1), 0 < iVar1)) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    if (((param_2 & 0x1000) != 0) &&
       (iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                             s_uniform_sampler2D_DiffuseBlend2__7006cd65), 0 < iVar1)) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    if (((param_2 & 0x2000) != 0) &&
       (iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                             s_uniform_sampler2D_DiffuseBlend3__7006db25), 0 < iVar1)) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    if (((param_2 & 0x4000) != 0) &&
       (iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                             s_uniform_sampler2D_DiffuseBlend4__70068407), 0 < iVar1)) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
  }
  if ((param_2 & 0x7800) != 0) {
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_in_lowp_vec4_Out_TexBlend__7006ec22);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s__define_BLEND_MIP_BIAS_0_65_7006ec3d);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
  }
  if (((param_2 & 0x60000) != 0) &&
     (iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_uniform_lowp_vec4_TintColor0__70068428), 0 < iVar1)) {
    DAT_70b462f8 = DAT_70b462f8 + iVar1;
  }
  if ((param_2 & 0x20000) != 0) {
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_uniform_sampler2D_TintMask__700630e2);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_uniform_lowp_vec4_TintColor1__70061020);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_uniform_lowp_vec4_TintColor2__700630fe);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
  }
  if (((param_2 & 0x80000) != 0) &&
     (iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_uniform_sampler2D_TexLayer__70066ac8), 0 < iVar1)) {
    DAT_70b462f8 = DAT_70b462f8 + iVar1;
  }
  if (uVar2 != 0) {
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_uniform_sampler2D_Diffuse11__70068d27);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_in_mediump_vec2_Out_Tex12__7006db46);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
  }
  uVar3 = 1;
  do {
    uVar8 = uVar3 + 1;
    if ((param_2 >> (uVar3 & 0xff) & 1) != 0) {
      iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_uniform_sampler2D_Diffuse_d__70066ae4,uVar3);
      if (0 < iVar1) {
        DAT_70b462f8 = DAT_70b462f8 + iVar1;
      }
      iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_in_mediump_vec2_Out_Tex_d__70066306,uVar8);
      if (0 < iVar1) {
        DAT_70b462f8 = DAT_70b462f8 + iVar1;
      }
    }
    uVar3 = uVar8;
  } while (uVar8 != 0xb);
  uVar3 = 0xb;
  if ((param_2 & 0x100000) != 0) {
    uVar10 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                          s_in_lowp_vec3_Out_DecalLight__7006fcdc);
    uVar3 = (uint)((ulonglong)uVar10 >> 0x20);
    if (0 < (int)uVar10) {
      uVar3 = DAT_70b462f8;
      DAT_70b462f8 = DAT_70b462f8 + (int)uVar10;
    }
  }
  if ((param_1 & 0x1000040) == 0) {
    if ((param_1 & 0x10000) != 0) {
      iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_uniform_sampler2D_EnvMap__7006ec5b);
      if (0 < iVar1) {
        DAT_70b462f8 = DAT_70b462f8 + iVar1;
      }
      pcVar5 = s_uniform_float_DetailTiling__70066b01;
      goto LAB_7137ee04;
    }
  }
  else {
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_uniform_sampler2D_EnvMap__7006ec5b);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    uVar3 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_uniform_lowp_float_EnvMapCoeffic_7006f3c3);
    if (0 < (int)uVar3) {
      DAT_70b462f8 = DAT_70b462f8 + uVar3;
    }
    if ((param_1 & 0x40) != 0) {
      pcVar5 = s_in_mediump_vec2_Out_Tex1__7006311c;
LAB_7137ee04:
      uVar3 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,pcVar5);
      if (0 < (int)uVar3) {
        DAT_70b462f8 = DAT_70b462f8 + uVar3;
      }
    }
  }
  if ((param_1 & 0x400) != 0) {
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_in_lowp_vec3_Out_HazeColor__70068446);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_in_mediump_vec3_Out_HazeCamVec__70070f8a);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_uniform_mediump_vec4_HazeParams__70068d44);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    uVar3 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_uniform_lowp_float_HazeDisabled__7006a8ad);
    if (0 < (int)uVar3) {
      DAT_70b462f8 = DAT_70b462f8 + uVar3;
    }
  }
  if (((param_1 & 0x12) != 0) &&
     (uVar3 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_in_lowp_vec4_Out_Color__7006a1e1), 0 < (int)uVar3)) {
    DAT_70b462f8 = DAT_70b462f8 + uVar3;
  }
  bVar9 = (param_1 & 0x2000) != 0;
  if (bVar9) {
    uVar3 = 0x10001c0;
  }
  if ((bVar9 && (param_1 & uVar3) != 0) &&
     (iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_in_lowp_vec3_Out_Spec__70071f88), 0 < iVar1)) {
    DAT_70b462f8 = DAT_70b462f8 + iVar1;
  }
  if ((param_1 & 0x1000000) != 0) {
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_uniform_highp_vec3_CameraPositio_7006cd86);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_in_highp_vec3_v_reflectPos__70062617);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_in_mediump_vec3_v_reflectNormal__7006b6e8);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_uniform_mediump_vec3_vFresnelPar_70066b1d);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_in_mediump_vec3_Out_Refl__7006f3e9);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_uniform_lowp_float_RenderSnapsho_7006593f);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    if ((param_1 & 0x2000) != 0) {
      iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_uniform_highp_vec3_DirLightDirec_7006db61);
      if (0 < iVar1) {
        DAT_70b462f8 = DAT_70b462f8 + iVar1;
      }
      iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_in_mediump_float_v_diffuse__70062633);
      if (0 < iVar1) {
        DAT_70b462f8 = DAT_70b462f8 + iVar1;
      }
    }
  }
  if (((param_1 & 4) != 0) &&
     (iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_uniform_lowp_float_AlphaModulate_7006cda9), 0 < iVar1)) {
    DAT_70b462f8 = DAT_70b462f8 + iVar1;
  }
  if (((param_1 & 0x80000) != 0) &&
     (iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_in_mediump_float_Out_WaterAlphaB_700643ef), 0 < iVar1)) {
    DAT_70b462f8 = DAT_70b462f8 + iVar1;
  }
  iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                       s_void_main___7006db87);
  if (0 < iVar1) {
    DAT_70b462f8 = DAT_70b462f8 + iVar1;
  }
  iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,&DAT_70071705);
  if (0 < iVar1) {
    DAT_70b462f8 = DAT_70b462f8 + iVar1;
  }
  iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                       s_lowp_vec4_fcolor__7006ec75);
  if (0 < iVar1) {
    DAT_70b462f8 = DAT_70b462f8 + iVar1;
  }
  uVar3 = param_2 & 0x7fe;
  if ((uVar3 == 0 && uVar7 == 0) && uVar2 == 0) {
LAB_7137f24c:
    if ((param_1 & 0x12) == 0) {
      pcVar5 = s_fcolor___0_0__700651d6;
    }
    else {
      pcVar5 = s_fcolor___Out_Color__7006c533;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,pcVar5);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
LAB_7137f398:
    if ((param_2 & 0x40000) != 0) {
      iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_fcolor_rgb____TintColor0_rgb__7006a8ce);
      goto joined_r0x7137f3c4;
    }
  }
  else {
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_lowp_vec4_diffuseColor__7006ec87);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    if (uVar7 == 0) goto LAB_7137f24c;
    pcVar5 = s_BLEND_MIP_BIAS_700673d4;
    if ((param_2 & 0x7800) == 0) {
      pcVar5 = &DAT_70068d07;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_diffuseColor___texture_Diffuse__O_7006103e,pcVar5);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    if ((param_2 & 0x7800) == 0) {
      pcVar5 = s_diffuseColor_70066b42;
    }
    else {
      if (((param_2 & 0x800) != 0) &&
         (iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                               s_lowp_vec4_blendTex1___texture_Di_7006fcf9,pcVar5), 0 < iVar1)) {
        DAT_70b462f8 = DAT_70b462f8 + iVar1;
      }
      if (((param_2 & 0x1000) != 0) &&
         (iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                               s_lowp_vec4_blendTex2___texture_Di_70061f9c,pcVar5), 0 < iVar1)) {
        DAT_70b462f8 = DAT_70b462f8 + iVar1;
      }
      if (((param_2 & 0x2000) != 0) &&
         (iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                               s_lowp_vec4_blendTex3___texture_Di_7006c4b7,pcVar5), 0 < iVar1)) {
        DAT_70b462f8 = DAT_70b462f8 + iVar1;
      }
      if (((param_2 & 0x4000) != 0) &&
         (iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                               s_lowp_vec4_blendTex4___texture_Di_70064aa6,pcVar5), 0 < iVar1)) {
        DAT_70b462f8 = DAT_70b462f8 + iVar1;
      }
      iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_lowp_vec4_TexBlendColor__70064415,pcVar5);
      if (0 < iVar1) {
        DAT_70b462f8 = DAT_70b462f8 + iVar1;
      }
      if ((param_2 & 0x800) == 0) {
        pcVar5 = s_diffuseColor_70066b42;
      }
      else {
        pcVar5 = s_TexBlendColor_70071f9f;
        iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                             s_TexBlendColor___mix__s__blendTex_70063b94,s_diffuseColor_70066b42);
        if (0 < iVar1) {
          DAT_70b462f8 = DAT_70b462f8 + iVar1;
        }
      }
      if ((param_2 & 0x1000) != 0) {
        iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                             s_TexBlendColor___mix__s__blendTex_7006c4ff,pcVar5);
        pcVar5 = s_TexBlendColor_70071f9f;
        if (0 < iVar1) {
          DAT_70b462f8 = DAT_70b462f8 + iVar1;
        }
      }
      if ((param_2 & 0x2000) != 0) {
        iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                             s_TexBlendColor___mix__s__blendTex_700651a2,pcVar5);
        pcVar5 = s_TexBlendColor_70071f9f;
        if (0 < iVar1) {
          DAT_70b462f8 = DAT_70b462f8 + iVar1;
        }
      }
      if ((param_2 & 0x4000) != 0) {
        iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                             s_TexBlendColor___mix__s__blendTex_70071fad,pcVar5);
        pcVar5 = s_TexBlendColor_70071f9f;
        if (0 < iVar1) {
          DAT_70b462f8 = DAT_70b462f8 + iVar1;
        }
      }
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_fcolor____s__7006cdcb,pcVar5);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    if ((param_2 & 0x20000) == 0) goto LAB_7137f398;
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_lowp_vec4_tintMask___texture_Tin_7006442e,pcVar5);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_fcolor_rgb___mix_fcolor_rgb__fco_70066b4f,pcVar5);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_fcolor_rgb___mix_fcolor_rgb__fco_7006a1f9,pcVar5);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_fcolor_rgb___mix_fcolor_rgb__fco_7006187d,pcVar5);
joined_r0x7137f3c4:
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
  }
  if ((param_2 & 0x100000) == 0) {
    if ((uVar3 != 0) && ((param_2 & 0x200000) == 0)) {
      FUN_713845c0(param_2);
    }
  }
  else {
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_lowp_vec4_decalOver___vec4_0_0___70065af2);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    uVar10 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                          s_lowp_vec4_decalSample__7006a2f1);
    iVar4 = (int)((ulonglong)uVar10 >> 0x20);
    iVar1 = (int)uVar10;
    if (0 < iVar1) {
      iVar4 = -0x83915c;
    }
    uVar8 = 1;
    if (0 < iVar1) {
      DAT_70b462f8 = *(int *)(iVar4 + 0x7137f454) + iVar1;
    }
    do {
      uVar6 = uVar8 + 1;
      if ((param_2 >> (uVar8 & 0xff) & 1) != 0) {
        iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                             s_decalSample___texture_Diffuse_d__700685b4,uVar8,uVar6);
        if (0 < iVar1) {
          DAT_70b462f8 = DAT_70b462f8 + iVar1;
        }
        uVar8 = uVar6;
        uVar11 = uVar6;
        uVar12 = uVar6;
        uVar13 = uVar6;
        iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                             s_decalSample_a____step_0_0__Out_T_7006c72c,uVar6,uVar6,uVar6,uVar6);
        if (0 < iVar1) {
          DAT_70b462f8 = DAT_70b462f8 + iVar1;
        }
        iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                             s_decalSample_rgb____decalSample_a_7006ed8c,uVar8,uVar11,uVar12,uVar13)
        ;
        if (0 < iVar1) {
          DAT_70b462f8 = DAT_70b462f8 + iVar1;
        }
        iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                             s_decalOver_rgb___decalSample_rgb___7007213d,uVar8,uVar11,uVar12,uVar13
                            );
        if (0 < iVar1) {
          DAT_70b462f8 = DAT_70b462f8 + iVar1;
        }
        iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                             s_decalOver_a___decalSample_a____d_7006be86,uVar8,uVar11,uVar12,uVar13)
        ;
        if (0 < iVar1) {
          DAT_70b462f8 = DAT_70b462f8 + iVar1;
        }
      }
      uVar8 = uVar6;
    } while (uVar6 != 0xb);
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_decalOver_rgb____Out_DecalLight__700652b3);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
  }
  if (uVar7 == 0 || (param_2 & 0x80000) == 0) {
    if (uVar7 != 0) {
      if ((param_1 & 0x12) != 0) goto LAB_7137f680;
      goto joined_r0x7137f6c0;
    }
  }
  else {
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_lowp_vec4_texLayer___texture_Tex_7006c547);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_fcolor_rgb___mix_fcolor_rgb__tex_7006a8ec);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    if ((param_1 & 0x12) == 0) {
joined_r0x7137f6c0:
      if ((param_1 & 0x80000) != 0) {
LAB_7137f800:
        iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                             s_fcolor_a____Out_WaterAlphaBlend__70071707);
        if (0 < iVar1) goto LAB_7137f820;
      }
    }
    else {
LAB_7137f680:
      iVar1 = (int)&DAT_70b442f8 - DAT_70b462f8;
      if ((param_1 & 0x10000) == 0) {
        iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,iVar1,s_fcolor____Out_Color__70067cad);
        if (0 < iVar1) {
          DAT_70b462f8 = DAT_70b462f8 + iVar1;
        }
        goto joined_r0x7137f6c0;
      }
      if ((param_1 & 0x80000) != 0) {
        iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,iVar1,s_fcolor____Out_Color__70067cad);
        if (0 < iVar1) {
          DAT_70b462f8 = DAT_70b462f8 + iVar1;
        }
        goto LAB_7137f800;
      }
      iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,iVar1,s_fcolor____vec4_Out_Color_xyz___t_70066b96
                          );
      if (iVar1 < 1) goto LAB_7137f830;
LAB_7137f820:
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
  }
LAB_7137f830:
  if (((param_1 & 0x40) != 0) &&
     (iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_fcolor_xyz___mix_fcolor_xyz__tex_7006a924), 0 < iVar1)) {
    DAT_70b462f8 = DAT_70b462f8 + iVar1;
  }
  if ((param_1 & 0x1000000) != 0) {
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_if__RenderSnapshotRefl_>_0_5____70070753);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_vec2_ReflPos___normalize_Out_Ref_70068d65);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_ReflPos____ReflPos___vec2_0_5__0_7006c57f);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_lowp_vec4_ReflTexture___texture__70071fe1);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_fcolor_xyz___mix_fcolor_xyz__Ref_7006cdd8);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_fcolor_w____ReflTexture_b___0_12_7006c5b6);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s___else___7006ce1a);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_mediump_vec3_viewVec___normalize_7006c5d9);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_mediump_vec3_nrm___normalize_v_r_7006ce23);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_mediump_float_tangA___1_0___max__7006ce52);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_mediump_vec3_T___vec3_1_0___nrm__7006f403);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_mediump_vec3_Out_ReflPBR___refle_70067cc2);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_mediump_float_reflT___dot_Out_Re_7006f457);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_mediump_vec3_stretchedRefl___nor_70067cf4);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_vec2_ReflPos___normalize_stretch_70064aee);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_ReflPos___ReflPos___0_5___0_5__7006a974);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_vec3_envmap___texture_EnvMap__Re_7006fd41);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_mediump_vec3_viewDir____viewVec__7006264f);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_mediump_float_cosTheta___max_dot_7006ce88);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_mediump_float_fresnelFactor___vF_70072013);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_fresnelFactor___min_fresnelFacto_7006106d);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    if ((param_1 & 0x2000) == 0) {
      iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_vec3_specular___vec3_0_0___7006db93);
      if (0 < iVar1) {
        DAT_70b462f8 = DAT_70b462f8 + iVar1;
      }
      pcVar5 = s_vec3_diffuseVec___vec3_0_0___7006a9fd;
    }
    else {
      iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_mediump_vec3_B___cross_nrm__T___7006a240);
      if (0 < iVar1) {
        DAT_70b462f8 = DAT_70b462f8 + iVar1;
      }
      iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_mediump_vec3_halfwayDir___normal_700618c4);
      if (0 < iVar1) {
        DAT_70b462f8 = DAT_70b462f8 + iVar1;
      }
      iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_mediump_float_TdotH___dot_T__hal_700610a3);
      if (0 < iVar1) {
        DAT_70b462f8 = DAT_70b462f8 + iVar1;
      }
      iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_mediump_float_BdotH___dot_B__hal_70063136);
      if (0 < iVar1) {
        DAT_70b462f8 = DAT_70b462f8 + iVar1;
      }
      iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_mediump_float_NdotH___max_dot_nr_7006d559);
      if (0 < iVar1) {
        DAT_70b462f8 = DAT_70b462f8 + iVar1;
      }
      iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_mediump_float_exponent_____TdotH_7006a993);
      if (0 < iVar1) {
        DAT_70b462f8 = DAT_70b462f8 + iVar1;
      }
      iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_float_spec___exp2_exponent___1_4_700651e4);
      if (0 < iVar1) {
        DAT_70b462f8 = DAT_70b462f8 + iVar1;
      }
      iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_vec3_specular___vec3_spec___70061906);
      if (0 < iVar1) {
        DAT_70b462f8 = DAT_70b462f8 + iVar1;
      }
      pcVar5 = s_vec3_diffuseVec___vec3_max_dot_n_70066321;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,pcVar5);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_envmap____sqrt_fresnelFactor___700673e3);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_fcolor_xyz____diffuseVec___specu_70068da7);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_fcolor_w____fresnelFactor___0_15_700610cd);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,&DAT_70061922);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
  }
  if (((param_1 & 0x2000) != 0) && (*(char *)(DAT_70b4645c + 8) == '\0')) {
    if ((param_1 & 0x1000000) == 0) {
      if ((param_1 & 0x40) == 0) goto LAB_713804b8;
      iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_fcolor_xyz____Out_Spec__70065966);
    }
    else {
      iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_if__RenderSnapshotRefl_>_0_5__fc_70068462);
    }
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
  }
LAB_713804b8:
  if (((param_1 & 0x400) != 0) && (*(char *)(DAT_70b4645c + 8) == '\0')) {
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_if__HazeDisabled_<_0_5)___700610ef);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_mediump_vec3_HazeAbsVec___abs_Ou_7006597e);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_mediump_float_HazeScale___max_ma_70065212);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_mediump_float_HazeDist___HazeSca_70068dd5);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_mediump_float_HazeAmt___clamp__H_7006d58f);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_HazeAmt___1_0____1_0___HazeAmt____7006f482);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_fcolor_xyz___mix_fcolor_xyz__Out_70068498);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    if (((param_2 & 0x100000) != 0) &&
       (iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                             s_decalOver_rgb___mix_decalOver_rg_70067d3c), 0 < iVar1)) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,&DAT_70061922);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
  }
  if ((param_1 & 0x4000000) != 0) {
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_fcolor_xyz____fcolor_xyz___0_5__7006fd6d);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    if ((param_2 & 0x100000) != 0) {
      iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_decalOver_rgb____decalOver_rgb___70065260);
      if (0 < iVar1) {
        DAT_70b462f8 = DAT_70b462f8 + iVar1;
      }
      goto LAB_713807a4;
    }
  }
  if (((param_2 & 0x300000) == 0x200000) && (uVar3 != 0)) {
    FUN_713845c0(param_2);
  }
LAB_713807a4:
  if (uVar2 != 0) {
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_float_snowFactor___smoothstep_0__700684ce);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_lowp_vec4_snowTexture___texture__70072086);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_vec3_baseSnowColor___snowTexture_70061109);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_vec3_snowEffect___mix_fcolor_xyz_70066372);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_fcolor___vec4_snowEffect__fcolor_700720c3);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
  }
  iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                       s_FragColor___fcolor__70068e36);
  if (0 < iVar1) {
    DAT_70b462f8 = DAT_70b462f8 + iVar1;
  }
  if ((param_2 & 0x100000) != 0) {
    if (((param_1 & 4) != 0) &&
       (iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                             s_FragColor_a____AlphaModulate__70068509), 0 < iVar1)) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_lowp_float_decalOutA___decalOver_70067402);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_FragColor_rgb____decalOver_rgb___7006e3b1);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_FragColor_a___decalOutA__700659ad);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
  }
  if ((param_1 & 1) != 0) {
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s___ATBEGIN___70062670);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    if (uVar7 == 0) {
      if ((param_1 & 0x800) == 0) {
        iVar1 = (int)&DAT_70b442f8 - DAT_70b462f8;
        if ((param_1 & 0x200) == 0) {
          pcVar5 = s_if__FragColor_a_<_0_2)___discard_70070faa;
        }
        else {
          iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,iVar1,
                               s_if__FragColor_a_<_0_5)___discard_700663e0);
          if (0 < iVar1) {
            DAT_70b462f8 = DAT_70b462f8 + iVar1;
          }
          iVar1 = (int)&DAT_70b442f8 - DAT_70b462f8;
          pcVar5 = s_FragColor_a___Out_Color_a__7006aa1a;
        }
      }
      else {
        iVar1 = (int)&DAT_70b442f8 - DAT_70b462f8;
        pcVar5 = s_if__FragColor_a_<_0_8)___discard_700663bc;
      }
    }
    else if ((param_1 & 0x800) == 0) {
      iVar1 = (int)&DAT_70b442f8 - DAT_70b462f8;
      if ((param_1 & 0x200) == 0) {
        pcVar5 = s_if__diffuseColor_a_<_0_2)___disc_7006e41e;
      }
      else {
        iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,iVar1,s_FragColor_a___Out_Color_a__7006aa1a);
        if (0 < iVar1) {
          DAT_70b462f8 = DAT_70b462f8 + iVar1;
        }
        iVar1 = (int)&DAT_70b442f8 - DAT_70b462f8;
        pcVar5 = s_if__diffuseColor_a_<_0_5)___disc_7006fd8d;
      }
    }
    else {
      iVar1 = (int)&DAT_70b442f8 - DAT_70b462f8;
      pcVar5 = s_if__diffuseColor_a_<_0_8)___disc_7006112f;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,iVar1,pcVar5);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s___ATEND___7006ec9f);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
  }
  if ((((param_1 & 4) != 0) && ((param_2 & 0x100000) == 0)) &&
     (iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_FragColor_a____AlphaModulate__70068509), 0 < iVar1)) {
    DAT_70b462f8 = DAT_70b462f8 + iVar1;
  }
  iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,&DAT_70061922);
  if (0 < iVar1) {
    DAT_70b462f8 = DAT_70b462f8 + iVar1;
  }
  return;
}


// Function: FUN_713849f0 @ 0x713849f0 (size=8764)

void FUN_713849f0(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  
  iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                       s__version_300_es_7006bd81);
  iVar2 = DAT_70b462fc;
  if (0 < iVar1) {
    iVar2 = DAT_70b462fc + iVar1;
  }
  if (0 < iVar1) {
    DAT_70b462fc = iVar2;
  }
  iVar2 = FUN_71384558(iVar2,0xffffffff,(int)&DAT_70b462f8 - iVar2,s_precision_highp_float__7006dbae
                      );
  if (0 < iVar2) {
    DAT_70b462fc = DAT_70b462fc + iVar2;
  }
  iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                       s_uniform_mat4_ProjMatrix__70061924);
  if (0 < iVar2) {
    DAT_70b462fc = DAT_70b462fc + iVar2;
  }
  iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                       s_uniform_mat4_ViewMatrix__7006d5e2);
  if (0 < iVar2) {
    DAT_70b462fc = DAT_70b462fc + iVar2;
  }
  iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                       s_uniform_mat4_ObjMatrix__7006f4b5);
  if (0 < iVar2) {
    DAT_70b462fc = DAT_70b462fc + iVar2;
  }
  uVar9 = param_2 & 0x8000;
  if (uVar9 != 0) {
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_out_vec3_vWorldPosition__7006e446);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_out_mediump_float_vSnowMult__7006cebe);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
  }
  if ((param_1 & 2) != 0) {
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_uniform_lowp_vec3_AmbientLightCo_70063bc8);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_uniform_lowp_vec4_MaterialEmissi_7006b709);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_uniform_lowp_vec4_MaterialDiffus_7006744a);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_uniform_lowp_vec4_MaterialAmbien_7006bd92);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    if ((param_1 & 0x2000) != 0) {
      iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_uniform_lowp_vec3_DirLightDiffus_7006aa35);
      if (0 < iVar2) {
        DAT_70b462fc = DAT_70b462fc + iVar2;
      }
      iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_uniform_vec3_DirLightDirection__70064460);
      if (0 < iVar2) {
        DAT_70b462fc = DAT_70b462fc + iVar2;
      }
    }
    if ((param_1 & 0x4000) != 0) {
      iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_uniform_lowp_vec3_DirLight2Diffu_700720e8);
      if (0 < iVar2) {
        DAT_70b462fc = DAT_70b462fc + iVar2;
      }
      iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_uniform_vec3_DirLight2Direction__70061156);
      if (0 < iVar2) {
        DAT_70b462fc = DAT_70b462fc + iVar2;
      }
    }
    if ((param_1 & 0x8000) != 0) {
      iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_uniform_lowp_vec3_DirLight3Diffu_7006aa5d);
      if (0 < iVar2) {
        DAT_70b462fc = DAT_70b462fc + iVar2;
      }
      iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_uniform_vec3_DirLight3Direction__700659c6);
      if (0 < iVar2) {
        DAT_70b462fc = DAT_70b462fc + iVar2;
      }
    }
  }
  iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                       s_in_vec3_Position__70061fe4);
  if (0 < iVar2) {
    DAT_70b462fc = DAT_70b462fc + iVar2;
  }
  iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                       s_in_vec3_Normal__70067d86);
  if (0 < iVar2) {
    DAT_70b462fc = DAT_70b462fc + iVar2;
  }
  uVar8 = param_2 & 0x7fe;
  uVar3 = param_1 & 0x20;
  if ((uVar8 != 0 || uVar3 != 0) || uVar9 != 0) {
    if ((param_1 & 0x40000) == 0) {
      pcVar6 = s_in_vec2_TexCoord0__7006267c;
    }
    else {
      pcVar6 = s_in_vec4_TexCoord0__700659e7;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,pcVar6);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
  }
  iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                       s_in_vec4_GlobalColor__70066c00);
  if (0 < iVar2) {
    DAT_70b462fc = DAT_70b462fc + iVar2;
  }
  if ((param_1 & 0x180) != 0) {
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_in_vec4_BoneWeight__7006746d);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_in_vec4_BoneIndices__70068e4a);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = *DAT_70b46460 * 3;
    if (*DAT_70b46460 == 0) {
      iVar2 = 0x180;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_uniform_highp_vec4_Bones__d___70067481,iVar2);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
  }
  if ((uVar3 != 0) &&
     (iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_out_mediump_vec2_Out_Tex0__7006268f), 0 < iVar2)) {
    DAT_70b462fc = DAT_70b462fc + iVar2;
  }
  if (uVar9 != 0) {
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_out_mediump_vec2_Out_Tex12__70063160);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_uniform_mediump_float_SnowMult__7006d5fb);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
  }
  if (uVar8 != 0) {
    uVar10 = 1;
    do {
      uVar11 = uVar10 + 1;
      if ((param_2 >> (uVar10 & 0xff) & 1) != 0) {
        iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                             s_out_mediump_vec2_Out_Tex_d__7006d61b,uVar11);
        if (0 < iVar2) {
          DAT_70b462fc = DAT_70b462fc + iVar2;
        }
        iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                             s_uniform_mediump_mat3_Decal_dMatr_70068e5f,uVar10);
        if (0 < iVar2) {
          DAT_70b462fc = DAT_70b462fc + iVar2;
        }
      }
      uVar10 = uVar11;
    } while (uVar11 != 0xb);
  }
  if (((param_2 & 0x100000) != 0) &&
     (iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_out_lowp_vec3_Out_DecalLight__70071728), 0 < iVar2)) {
    DAT_70b462fc = DAT_70b462fc + iVar2;
  }
  if (((param_1 & 0x2000000) != 0) &&
     (iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_uniform_mat3_NormalMatrix__7006cedb), 0 < iVar2)) {
    DAT_70b462fc = DAT_70b462fc + iVar2;
  }
  if ((param_1 & 0x1000040) != 0) {
    if (((param_1 & 0x40) != 0) &&
       (iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                             s_out_mediump_vec2_Out_Tex1__70065286), 0 < iVar2)) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_uniform_lowp_float_EnvMapCoeffic_7006f3c3);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
  }
  if ((param_1 & 0x1000000) != 0) {
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_out_highp_vec3_v_reflectPos__7006dbc5);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_out_mediump_vec3_v_reflectNormal_70061177);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_out_mediump_vec3_Out_Refl__70061ff6);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    if (((param_1 & 0x2000) != 0) &&
       (iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                             s_out_mediump_float_v_diffuse__7006b72d), 0 < iVar2)) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
  }
  if (((param_1 & 0x18807c0) != 0) &&
     (iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_uniform_vec3_CameraPosition__7006e45f), 0 < iVar2)) {
    DAT_70b462fc = DAT_70b462fc + iVar2;
  }
  if ((param_1 & 0x400) != 0) {
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_out_lowp_vec3_Out_HazeColor__70071746);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_out_mediump_vec3_Out_HazeCamVec__7006cef6);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_uniform_mediump_vec4_HazeParams__70068d44);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_uniform_vec4_HazeColorHorizon__70068527);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_uniform_vec4_HazeColorMid__70070773);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_uniform_vec4_HazeColorZenith__7006193d);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_uniform_lowp_float_HazeDisabled__7006a8ad);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
  }
  if ((param_1 & 0x80000) != 0) {
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_uniform_vec3_WaterSpecs__7006cf17);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_out_mediump_float_Out_WaterAlpha_7006fdb4);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
  }
  if ((param_2 & 0x7800) != 0) {
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_in_vec4_TexBlend__700652a1);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_out_lowp_vec4_Out_TexBlend__7006317c);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
  }
  if ((param_2 & 0x10000) != 0) {
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_in_vec4_PedData__7006195b);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_uniform_highp_vec2_BodyRegions__7006eca9);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
  }
  if ((param_1 & 0x100000) != 0) {
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_in_vec4_Color2__70063198);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_uniform_lowp_float_ColorInterp__70068e83);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
  }
  if (((param_1 & 0x12) != 0) &&
     (iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_out_lowp_vec4_Out_Color__70067d96), 0 < iVar2)) {
    DAT_70b462fc = DAT_70b462fc + iVar2;
  }
  if ((((param_1 & 0x2000) != 0) && ((param_1 & 0x10001c0) != 0)) &&
     (iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_out_lowp_vec3_Out_Spec__700631a8), 0 < iVar2)) {
    DAT_70b462fc = DAT_70b462fc + iVar2;
  }
  iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                       s_void_main_____700626aa);
  if (0 < iVar2) {
    DAT_70b462fc = DAT_70b462fc + iVar2;
  }
  if (uVar9 != 0) {
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_vWorldPosition___Normal_xyz__70066404);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_vSnowMult___SnowMult__7006e47c);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
  }
  if ((param_1 & 0x180) == 0) {
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_vec4_WorldPos___ObjMatrix___vec4_700631c0);
  }
  else {
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_ivec4_BlendIndexArray___ivec4_Bo_7006dbe2);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_mat4_BoneToLocal__7006bdb5);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_BoneToLocal_0____Bones_BlendInde_7007078e);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_BoneToLocal_1____Bones_BlendInde_700626b8);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_BoneToLocal_2____Bones_BlendInde_700626f7);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_BoneToLocal_3____vec4_0_0_0_0_0__7006aa86);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_BoneToLocal_0_____Bones_BlendInd_7006bdc8);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_BoneToLocal_1_____Bones_BlendInd_70067daf);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_BoneToLocal_2_____Bones_BlendInd_70068546);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_BoneToLocal_0_____Bones_BlendInd_7006fddb);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_BoneToLocal_1_____Bones_BlendInd_7006a260);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_BoneToLocal_2_____Bones_BlendInd_70061199);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    if ((param_1 & 0x100) != 0) {
      iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_BoneToLocal_0_____Bones_BlendInd_7006ecc9);
      if (0 < iVar2) {
        DAT_70b462fc = DAT_70b462fc + iVar2;
      }
      iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_BoneToLocal_1_____Bones_BlendInd_700659fa);
      if (0 < iVar2) {
        DAT_70b462fc = DAT_70b462fc + iVar2;
      }
      iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_BoneToLocal_2_____Bones_BlendInd_70062736);
      if (0 < iVar2) {
        DAT_70b462fc = DAT_70b462fc + iVar2;
      }
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_vec4_WorldPos___ObjMatrix____vec_7006f4cd);
  }
  if (0 < iVar2) {
    DAT_70b462fc = DAT_70b462fc + iVar2;
  }
  if ((param_1 & 0x800000) == 0) {
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_vec4_ViewPos___ViewMatrix___Worl_70064b3a);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_gl_Position___ProjMatrix___ViewP_7006aaf1);
  }
  else {
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_vec3_ReflVector___WorldPos_xyz___70067def);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_vec3_ReflPos___normalize_ReflVec_7006fe19);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_ReflPos_xy___normalize_ReflPos_x_7006aaaf);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_gl_Position___vec4_ReflPos_xy__l_700707cb);
  }
  if (0 < iVar2) {
    DAT_70b462fc = DAT_70b462fc + iVar2;
  }
  if ((param_2 & 0x10000) != 0) {
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_int_bodyRegion___int_PedData_x___70070fce);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_int_bodyBits___bodyRegion_<_16___70064b61);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_int_bodyShift___bodyRegion_<_16___7006a2a0);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_if_bodyRegion_<_32_&&_((bodyBits_7006cf30);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_gl_Position___vec4_2_0__2_0__2_0_7006b74a);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
  }
  if ((param_1 & 2) == 0) {
    if ((param_1 & 0x1000040) != 0) {
      iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_vec3_WorldNormal___vec3_0_0__0_0_700644c3);
      goto joined_r0x71385e64;
    }
  }
  else {
    if (((param_1 & 0x201) == 0x201) && ((param_1 & 0xe000) != 0)) {
      pcVar6 = s_vec3_WorldNormal___normalize_vec_70063bed;
    }
    else if ((param_1 & 0x180) == 0) {
      pcVar6 = s_vec3_WorldNormal____ObjMatrix___v_700631f1;
    }
    else {
      pcVar6 = s_vec3_WorldNormal___mat3_ObjMatri_70064480;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,pcVar6);
joined_r0x71385e64:
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
  }
  iVar2 = DAT_70b4645c;
  if (((param_1 & 0x400) != 0) && (*(char *)(DAT_70b4645c + 8) == '\0')) {
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_if__HazeDisabled_<_0_5)___700610ef);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_vec3_CamVec___WorldPos_xyz___Cam_7006b774);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_float_HazeBw___clamp__CamVec_z___70067e28);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_vec3_HazeCol__70062011);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_if__HazeBw_>__HazeParams_w____7006f50e);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_HazeCol___HazeColorZenith_xyz__7006e492);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,&DAT_70061922);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_else_if__HazeBw_>_HazeParams_z____70063c41);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_HazeCol___mix_HazeColorMid_xyz__H_7006f52c);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_pow_clamp__HazeBw___HazeParams_z_7006f565);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,&DAT_70061922);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,s_else___7006fe40
                        );
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_HazeCol___mix_HazeColorHorizon_x_7006fe47);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_pow_clamp_HazeBw___HazeParams_z__7006f5d3);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,&DAT_70061922);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_HazeCol___clamp__7006f61c);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_HazeCol___HazeColorHorizon_xyz___70066421);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_0_0__1_0___7006d637);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_Out_HazeColor___HazeCol__7006749f);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_Out_HazeCamVec___CamVec__7006dc0f);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s___else___7006ce1a);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_Out_HazeColor___vec3_0_0___70063228);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_Out_HazeCamVec___vec3_0_0___7006e4b5);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,&DAT_70061922);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
  }
  pcVar6 = s_TexCoord0___512_0_7006be06;
  if ((param_1 & 0x20000) == 0) {
    pcVar6 = s_TexCoord0_70067c80;
  }
  pcVar7 = s_TexCoord0_xy___TexCoord0_w_7006cf6b;
  if ((param_1 & 0x40000) == 0) {
    pcVar7 = pcVar6;
  }
  if (uVar3 != 0) {
    if ((param_1 & 0x2000000) == 0) {
      iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_Out_Tex0____s__7006ab16,pcVar7);
    }
    else {
      iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_Out_Tex0____NormalMatrix___vec3__70068586,pcVar7);
    }
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
  }
  if ((param_2 & 0x87fe) != 0) {
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_mediump_vec2_Out_TexTemp__7006d646);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    if (uVar3 == 0) {
      if ((param_1 & 0x2000000) != 0) {
        pcVar6 = s_Out_TexTemp____NormalMatrix___ve_7006d660;
        goto LAB_71386490;
      }
      iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_Out_TexTemp____s__7007080d,pcVar7);
    }
    else {
      pcVar6 = s_Out_TexTemp___Out_Tex0__70064bac;
LAB_71386490:
      iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,pcVar6);
    }
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    if ((uVar9 != 0) &&
       (iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                             s_Out_Tex12____Out_TexTemp___vec2__70072111), 0 < iVar1)) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    if (uVar8 != 0) {
      uVar9 = 1;
      do {
        uVar3 = uVar9 + 1;
        if (((param_2 >> (uVar9 & 0xff) & 1) != 0) &&
           (iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                                 s_Out_Tex_d____Decal_dMatrix___vec_7006d691,uVar3,uVar9), 0 < iVar1
           )) {
          DAT_70b462fc = DAT_70b462fc + iVar1;
        }
        uVar9 = uVar3;
      } while (uVar3 != 0xb);
    }
  }
  if ((param_1 & 0x40) != 0) {
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_vec3_reflVector___normalize_Worl_7006647e);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_reflVector___reflVector___2_0___d_700644eb);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_Out_Tex1___vec2_length_reflVecto_70066c15);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
  }
  if ((param_1 & 0x1000000) != 0) {
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_v_reflectPos___WorldPos_xyz__70062776);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_v_reflectNormal___WorldNormal__70067e78);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_vec3_snapshotRefl___normalize_Wo_7006fe81);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_snapshotRefl___snapshotRefl___2__7006be18);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_Out_Refl___snapshotRefl__7006d6ca);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    if (((param_1 & 0x2000) == 0) || (*(char *)(iVar2 + 8) != '\0')) {
      if ((param_1 & 0x2000) == 0) goto LAB_713868a0;
    }
    else {
      uVar5 = 0x40220000;
      if (*(char *)(iVar2 + 0xd) == '\0') {
        uVar5 = 0x40240000;
      }
      uVar12 = 0;
      iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_float_snapshotSpecAmt___max_pow__7006c61a,0,uVar5);
      if (0 < iVar1) {
        DAT_70b462fc = DAT_70b462fc + iVar1;
      }
      iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_Out_Spec___snapshotSpecAmt___Dir_70064bc4,uVar12,uVar5);
      if (0 < iVar1) {
        DAT_70b462fc = DAT_70b462fc + iVar1;
      }
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_v_diffuse___max_dot_normalize_Wo_7006dc28);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
  }
LAB_713868a0:
  if (((param_2 & 0x7800) != 0) &&
     (iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_Out_TexBlend___TexBlend__70063247), 0 < iVar1)) {
    DAT_70b462fc = DAT_70b462fc + iVar1;
  }
  if ((param_1 & 0x100000) == 0) {
    pcVar6 = s_GlobalColor_70067c8a;
    if ((param_1 & 2) != 0) goto LAB_713868f8;
LAB_71386a5c:
    if (((param_1 & 0x12) != 0) &&
       (iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                             s_Out_Color____s__7006a2e1,pcVar6), 0 < iVar1)) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    if ((param_2 & 0x100000) != 0) {
      iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_Out_DecalLight___vec3_1_0___7006be6a);
      goto joined_r0x71386acc;
    }
  }
  else {
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_lowp_vec4_InterpColor___mix_Glob_7006b7a5);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    pcVar6 = s_InterpColor_70071763;
    if ((param_1 & 2) == 0) goto LAB_71386a5c;
LAB_713868f8:
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_vec3_Out_LightingColor__700674b8);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    if ((param_1 & 8) == 0) {
      iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_Out_LightingColor___AmbientLight_7006c687);
    }
    else {
      if ((param_1 & 0x200) == 0) {
        pcVar7 = s_Out_LightingColor___AmbientLight_70068ea3;
      }
      else {
        pcVar7 = s_Out_LightingColor___AmbientLight_7006cf86;
      }
      iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,pcVar7);
    }
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    if ((param_1 & 0xe000) != 0) {
      if (((param_1 & 0x2000) != 0) &&
         (iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                               s_Out_LightingColor____max_dot_Dir_700674d0), 0 < iVar1)) {
        DAT_70b462fc = DAT_70b462fc + iVar1;
      }
      if (((param_1 & 0x4000) != 0) &&
         (iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                               s_Out_LightingColor____max_dot_Dir_70062793), 0 < iVar1)) {
        DAT_70b462fc = DAT_70b462fc + iVar1;
      }
      if (((param_1 & 0x8000) != 0) &&
         (iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                               s_Out_LightingColor____max_dot_Dir_7006ed07), 0 < iVar1)) {
        DAT_70b462fc = DAT_70b462fc + iVar1;
      }
    }
    if ((param_1 & 0x12) != 0) {
      if ((param_1 & 0x10) == 0) {
        pcVar7 = s_Out_Color___vec4_Out_LightingCol_70065a3a;
      }
      else {
        pcVar7 = s_Out_Color___vec4__Out_LightingCo_7007176f;
      }
      iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,pcVar7,pcVar6);
      if (0 < iVar1) {
        DAT_70b462fc = DAT_70b462fc + iVar1;
      }
      iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_Out_Color___clamp_Out_Color__0_0_7006ed64,pcVar6);
      if (0 < iVar1) {
        DAT_70b462fc = DAT_70b462fc + iVar1;
      }
    }
    if ((param_2 & 0x100000) != 0) {
      iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_vec3_decalLight___AmbientLightCo_7006b7e4);
      if (0 < iVar1) {
        DAT_70b462fc = DAT_70b462fc + iVar1;
      }
      if (((param_1 & 0x2000) != 0) &&
         (iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                               s_decalLight____max_dot_DirLightDi_70068ee9), 0 < iVar1)) {
        DAT_70b462fc = DAT_70b462fc + iVar1;
      }
      if (((param_1 & 0x4000) != 0) &&
         (iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                               s_decalLight____max_dot_DirLight2D_7006b809), 0 < iVar1)) {
        DAT_70b462fc = DAT_70b462fc + iVar1;
      }
      if (((param_1 & 0x8000) != 0) &&
         (iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                               s_decalLight____max_dot_DirLight3D_70063260), 0 < iVar1)) {
        DAT_70b462fc = DAT_70b462fc + iVar1;
      }
      iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_Out_DecalLight___clamp_decalLigh_7007081f);
joined_r0x71386acc:
      if (0 < iVar1) {
        DAT_70b462fc = DAT_70b462fc + iVar1;
      }
    }
  }
  if (((param_1 & 0x2000) != 0) && (*(char *)(iVar2 + 8) == '\0')) {
    if ((param_1 & 0x40) == 0) {
      if ((param_1 & 0x180) == 0) goto LAB_71386e40;
      iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_vec3_reflVector___normalize_Worl_7006647e);
      if (0 < iVar1) {
        DAT_70b462fc = DAT_70b462fc + iVar1;
      }
      iVar4 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_reflVector___reflVector___2_0___d_700644eb);
      uVar5 = 0x40140000;
      iVar1 = DAT_70b462fc;
      if (0 < iVar4) {
        iVar1 = DAT_70b462fc + iVar4;
      }
      if (0 < iVar4) {
        DAT_70b462fc = iVar1;
      }
      if (*(char *)(iVar2 + 0xd) == '\0') {
        uVar5 = 0x40100000;
      }
      pcVar6 = s_float_specAmt___max_pow_dot_refl_7006c6db;
    }
    else {
      uVar5 = 0x40220000;
      if (*(char *)(iVar2 + 0xd) == '\0') {
        uVar5 = 0x40240000;
      }
      pcVar6 = s_float_specAmt___max_pow_dot_refl_70065a8f;
      iVar1 = DAT_70b462fc;
    }
    uVar12 = 0;
    iVar2 = FUN_71384558(iVar1,0xffffffff,(int)&DAT_70b462f8 - iVar1,pcVar6,0,uVar5);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_Out_Spec___specAmt___DirLightDif_700632b6,uVar12,uVar5);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
  }
LAB_71386e40:
  if (((param_1 & 0x80000) != 0) &&
     (iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_Out_WaterAlphaBlend___distance_W_70066c5a), 0 < iVar2)) {
    DAT_70b462fc = DAT_70b462fc + iVar2;
  }
  iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,&DAT_70061922);
  if (0 < iVar2) {
    DAT_70b462fc = DAT_70b462fc + iVar2;
  }
  return;
}


// Function: FUN_713a7794 @ 0x713a7794 (size=708)

void FUN_713a7794(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar1 = DAT_700bbdc8;
  uVar4 = DAT_700bbdc4;
  if ((*DAT_70b466c8 == param_1) && (*DAT_70b466cc == param_2)) {
    return;
  }
  iVar2 = *DAT_70b46b44;
  if (iVar2 == 0) {
    if (*DAT_70b46700 == 0) {
      uVar3 = thunk_MwhHq(0x1c);
      iVar2 = FUN_71378b20(uVar3,uVar1,uVar4);
      *DAT_70b46700 = iVar2;
      uVar1 = DAT_700bbdcc;
      uVar4 = DAT_700bbdc4;
      uVar3 = thunk_MwhHq(0x1c);
      uVar4 = FUN_71378b20(uVar3,uVar1,uVar4);
      *DAT_70b46704 = uVar4;
      uVar1 = DAT_700bbdd0;
      uVar4 = DAT_700bbdc4;
      uVar3 = thunk_MwhHq(0x1c);
      uVar4 = FUN_71378b20(uVar3,uVar1,uVar4);
      *DAT_70b46708 = uVar4;
      uVar1 = DAT_700bbdd4;
      uVar4 = DAT_700bbdc4;
      uVar3 = thunk_MwhHq(0x1c);
      uVar4 = FUN_71378b20(uVar3,uVar1,uVar4);
      *DAT_70b4670c = uVar4;
    }
    if ((*(char *)(DAT_70b4645c + 0xc) == '\0') || (*DAT_70b46b50 != 0)) goto LAB_713a79c0;
    iVar2 = FUN_7137db74(0x20,0x20,1,0);
    piVar5 = DAT_70b46b50;
  }
  else {
    if (iVar2 == *DAT_70b46b48) {
      *DAT_70b46b48 = 0;
      iVar2 = *DAT_70b46b44;
    }
    FUN_7137d4f4(iVar2);
    *DAT_70b46b44 = 0;
    if (param_1 == 0 || param_2 == 0) {
      if (*DAT_70b46b4c != 0) {
        FUN_7137d4f4();
        *DAT_70b46b4c = 0;
      }
      *DAT_70b46b44 = 0;
      *DAT_70b466c8 = 0;
      *DAT_70b466cc = 0;
      return;
    }
    if (*DAT_70b46b4c == 0) goto LAB_713a79c0;
    FUN_7137d4f4();
    iVar2 = 0;
    piVar5 = DAT_70b46b4c;
  }
  *piVar5 = iVar2;
LAB_713a79c0:
  if (*DAT_70b46b54 != '\0') {
    return;
  }
  *DAT_70b466c8 = param_1;
  *DAT_70b466cc = param_2;
  iVar2 = FUN_7137db74(param_1,param_2,0,2);
  *DAT_70b46b44 = iVar2;
  FUN_7137d0bc(*DAT_70b46b44,1);
  uStack_1c = 0;
  uStack_20 = 0;
  uStack_24 = 0;
  uStack_28 = 0;
  FUN_7137dd7c(1,&uStack_28,0,0);
  return;
}


// Function: FUN_71540c24 @ 0x71540c24 (size=17144)
// Decompile failed: Exception while decompiling 71540c24: process: timeout


// Function: FUN_715a6090 @ 0x715a6090 (size=2464)

uint FUN_715a6090(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  bool bVar13;
  undefined8 uVar14;
  int iStack_78;
  int iStack_74;
  undefined4 *puStack_68;
  int *piStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 uStack_3c;
  undefined1 uStack_3b;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  char cStack_38;
  char cStack_37;
  char cStack_36;
  char cStack_35;
  char cStack_34;
  char cStack_33;
  int aiStack_30 [3];
  
  FUN_715a76e0();
  FUN_71593218(&puStack_68,param_1);
  puVar12 = puStack_68;
  iVar6 = -1;
  iVar7 = -1;
  if (puStack_68 != (undefined4 *)0x0) {
    thunk_cfqspBX_JrdDvACwYrAyrngjQ(puStack_68);
    iVar6 = puStack_68[0xe];
    iVar7 = puStack_68[0xf];
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(puVar12);
  }
  piVar11 = piStack_64;
  if (piStack_64 != (int *)0x0) {
    piVar5 = piStack_64 + 1;
    DataMemoryBarrier(0xb);
    do {
      iVar1 = *piVar5;
      bVar13 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar13);
    *piVar5 = iVar1 + -1;
    DataMemoryBarrier(0xb);
    if (iVar1 == 0) {
      (**(code **)(*piStack_64 + 8))(piStack_64);
      thunk_xwzSFoU_qvDa_PehyVStzHlBOSkJhkBLR_tNCbTfLzAoZMkmnRt(piVar11);
    }
  }
  piVar11 = (int *)0x0;
  if (iVar7 < 0) goto LAB_715a6158;
  iVar2 = imp_eglGetCurrentDisplay();
  uVar14 = imp_eglGetCurrentContext();
  iVar1 = (int)((ulonglong)uVar14 >> 0x20);
  if (iVar2 != 0) {
    iVar1 = (int)uVar14;
  }
  if (((iVar2 == 0 || (int)uVar14 == 0) || (iVar1 = FUN_715a7df4(iVar2,iVar1), iVar1 == 0)) ||
     (iVar1 = FUN_715a84b0(&DAT_700c3fc4,s_precision_mediump_float__uniform_700628a9,0xbf800000),
     iVar1 == 0)) goto LAB_715a6158;
  aiStack_30[2] = 0;
  imp_glGetIntegerv(0x8ca6,aiStack_30 + 2);
  puStack_68 = (undefined4 *)0x0;
  aiStack_30[0] = 0;
  imp_glGetFramebufferAttachmentParameteriv(0x8d40,0x8ce0,0x8cd0,&puStack_68);
  if ((puStack_68 != (undefined4 *)0x1702) ||
     (imp_glGetFramebufferAttachmentParameteriv(0x8d40,0x8ce0,0x8cd1,aiStack_30),
     iVar1 = aiStack_30[0], aiStack_30[0] == 0)) goto LAB_715a6158;
  piStack_64 = (int *)CONCAT31(piStack_64._1_3_,1);
  puStack_68 = &DAT_711a3af0;
  thunk_cfqspBX_JrdDvACwYrAyrngjQ();
  puVar8 = &DAT_711a3afc;
  puVar12 = DAT_711a3afc;
  puVar10 = puVar8;
  if (DAT_711a3afc != (undefined4 *)0x0) {
    do {
      while (puVar3 = puVar12, puVar10 = puVar3, param_1 < (int)puVar3[4]) {
        puVar12 = (undefined4 *)*puVar3;
        puVar8 = puVar3;
        if ((undefined4 *)*puVar3 == (undefined4 *)0x0) goto LAB_715a6264;
      }
      if (param_1 <= (int)puVar3[4]) goto LAB_715a62dc;
      puVar12 = (undefined4 *)puVar3[1];
    } while ((undefined4 *)puVar3[1] != (undefined4 *)0x0);
    puVar8 = puVar3 + 1;
  }
LAB_715a6264:
  puVar3 = (undefined4 *)thunk_MwhHq(0x78);
  puVar3[4] = param_1;
  imp___aeabi_memclr8(puVar3 + 6,0x58);
  puVar3[0x1c] = 0xffffffff;
  puVar3[0x1d] = 0xffffffff;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = puVar10;
  *puVar8 = puVar3;
  puVar12 = puVar3;
  if ((int *)*DAT_711a3af8 != (int *)0x0) {
    puVar12 = (undefined4 *)*puVar8;
    DAT_711a3af8 = (int *)*DAT_711a3af8;
  }
  FUN_712f807c(DAT_711a3afc,puVar12);
  DAT_711a3b00 = DAT_711a3b00 + 1;
LAB_715a62dc:
  if (puVar3[0x1c] == iVar6 && puVar3[0x1d] == iVar7) {
LAB_715a6300:
    iStack_74 = 0;
    iVar9 = 0;
    iVar2 = 0;
    bVar13 = false;
    piVar11 = (int *)0x0;
  }
  else {
    iVar2 = puVar3[0x18];
    piVar5 = puVar3 + 6;
    bVar13 = iVar2 == param_2;
    if (bVar13) {
      iVar2 = puVar3[0x19];
    }
    if (bVar13 && iVar2 == param_3) {
LAB_715a6534:
      puVar3[0x1a] = iVar6;
      puVar3[0x1b] = iVar7;
      iStack_78 = FUN_715a985c(piVar5);
      if (-1 < iStack_78) {
        bVar13 = true;
        iVar9 = piVar5[iStack_78 * 6 + 3];
        iVar2 = piVar5[iStack_78 * 6 + 4];
        iStack_74 = piVar5[iStack_78 * 6 + 1];
        piVar5[iStack_78 * 6 + 2] = 1;
        piVar5[iStack_78 * 6 + 4] = 0;
        piVar5[iStack_78 * 6 + 3] = 0;
        piVar11 = piVar5;
        goto LAB_715a65b8;
      }
    }
    else {
      aiStack_30[1] = 0;
      aiStack_30[0] = 100;
      FUN_715a8dd4(&puStack_68,aiStack_30,piVar5);
      if ((puVar3[8] != 3) && (iStack_74 = 0, puVar3[0xe] != 3)) {
        iVar9 = 0;
        iVar2 = 0;
        bVar13 = false;
        piVar11 = (int *)0x1;
        if (puVar3[0x14] == 3) goto LAB_715a65b8;
        if (puVar3[7] != 0) {
          imp_glDeleteFramebuffers(1);
        }
        if (*piVar5 != 0) {
          imp_glDeleteTextures(1,piVar5);
        }
        if (puVar3[9] != 0) {
          imp_glDeleteSync();
        }
        if (puVar3[10] != 0) {
          imp_glDeleteSync();
        }
        *piVar5 = 0;
        puVar3[7] = 0;
        puVar3[8] = 0;
        puVar3[9] = 0;
        puVar3[10] = 0;
        puVar3[0xb] = 0;
        piVar11 = puVar3 + 0xc;
        if (puVar3[0xd] != 0) {
          imp_glDeleteFramebuffers(1);
        }
        if (*piVar11 != 0) {
          imp_glDeleteTextures(1,piVar11);
        }
        if (puVar3[0xf] != 0) {
          imp_glDeleteSync();
        }
        if (puVar3[0x10] != 0) {
          imp_glDeleteSync();
        }
        *piVar11 = 0;
        puVar3[0xd] = 0;
        puVar3[0xe] = 0;
        puVar3[0xf] = 0;
        puVar3[0x10] = 0;
        puVar3[0x11] = 0;
        piVar11 = puVar3 + 0x12;
        if (puVar3[0x13] != 0) {
          imp_glDeleteFramebuffers(1);
        }
        if (*piVar11 != 0) {
          imp_glDeleteTextures(1,piVar11);
        }
        if (puVar3[0x15] != 0) {
          imp_glDeleteSync();
        }
        if (puVar3[0x16] != 0) {
          imp_glDeleteSync();
        }
        *piVar11 = 0;
        puVar3[0x13] = 0;
        puVar3[0x14] = 0;
        puVar3[0x15] = 0;
        puVar3[0x16] = 0;
        puVar3[0x17] = 0;
        iVar2 = FUN_715a8ee0(piVar5,param_2,param_3);
        if (iVar2 == 0) {
          puVar3[0x1c] = iVar6;
          puVar3[0x1d] = iVar7;
          goto LAB_715a6300;
        }
        goto LAB_715a6534;
      }
    }
    iStack_74 = 0;
    piVar11 = (int *)0x1;
    iVar9 = 0;
    iVar2 = 0;
    bVar13 = false;
  }
LAB_715a65b8:
  if ((char)piStack_64 != '\0') {
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(puStack_68);
  }
  if (bVar13) {
    if (iVar2 != 0) {
      imp_glWaitSync(iVar2,0,0xffffffff,0xffffffff);
      imp_glDeleteSync(iVar2);
    }
    if (iVar9 != 0) {
      imp_glDeleteSync(iVar9);
    }
    imp___aeabi_memclr8(&puStack_68,0x38);
    imp_glGetIntegerv(0x8b8d,&puStack_68);
    imp_glGetIntegerv(0x84e0,(uint)&puStack_68 | 4);
    imp_glActiveTexture(0x84c0);
    imp_glGetIntegerv(0x8069,&uStack_60);
    imp_glGetIntegerv(0x85b5,&uStack_5c);
    imp_glGetIntegerv(0x8894,&uStack_58);
    imp_glGetIntegerv(0xba2,&uStack_4c);
    imp_glGetBooleanv(0xc23,&uStack_3c);
    cStack_38 = imp_glIsEnabled(0xc11);
    cStack_37 = imp_glIsEnabled(0xb71);
    cStack_36 = imp_glIsEnabled(0xbe2);
    cStack_35 = imp_glIsEnabled(0xb44);
    cStack_34 = imp_glIsEnabled(0xb90);
    cStack_33 = imp_glIsEnabled(0xbd0);
    imp_glBindFramebuffer(0x8d40,iStack_74);
    imp_glViewport(0,0,param_2,param_3);
    imp_glColorMask(1,1,1,1);
    imp_glDisable(0xc11);
    imp_glDisable(0xb71);
    imp_glDisable(0xbe2);
    imp_glDisable(0xb44);
    imp_glDisable(0xb90);
    imp_glDisable(0xbd0);
    imp_glUseProgram(DAT_700c3fc4);
    imp_glBindTexture(0xde1,iVar1);
    imp_glGetTexParameteriv(0xde1,0x2801,&uStack_54);
    imp_glGetTexParameteriv(0xde1,0x2800,&uStack_50);
    imp_glTexParameteri(0xde1,0x2801,0x2601);
    imp_glTexParameteri(0xde1,0x2800,0x2601);
    imp_glBindVertexArray(DAT_700c3fc8);
    imp_glDrawArrays(5,0,4);
    uVar4 = imp_glFenceSync(0x9117,0);
    imp_glFlush();
    imp_glBindTexture(0xde1,iVar1);
    imp_glTexParameteri(0xde1,0x2801,uStack_54);
    imp_glTexParameteri(0xde1,0x2800,uStack_50);
    imp_glBindTexture(0xde1,uStack_60);
    imp_glActiveTexture(piStack_64);
    imp_glUseProgram(puStack_68);
    imp_glBindVertexArray(uStack_5c);
    imp_glBindBuffer(0x8892,uStack_58);
    imp_glViewport(uStack_4c,uStack_48,uStack_44,uStack_40);
    imp_glColorMask(uStack_3c,uStack_3b,uStack_3a,uStack_39);
    if (cStack_38 == '\0') {
      imp_glDisable(0xc11);
    }
    else {
      imp_glEnable(0xc11);
    }
    if (cStack_37 == '\0') {
      imp_glDisable(0xb71);
    }
    else {
      imp_glEnable(0xb71);
    }
    if (cStack_36 == '\0') {
      imp_glDisable(0xbe2);
    }
    else {
      imp_glEnable(0xbe2);
    }
    if (cStack_35 == '\0') {
      imp_glDisable(0xb44);
    }
    else {
      imp_glEnable(0xb44);
    }
    if (cStack_34 == '\0') {
      imp_glDisable(0xb90);
    }
    else {
      imp_glEnable(0xb90);
    }
    if (cStack_33 == '\0') {
      imp_glDisable(0xbd0);
    }
    else {
      imp_glEnable(0xbd0);
    }
    imp_glBindFramebuffer(0x8d40,aiStack_30[2]);
    thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_711a3af0);
    puVar8 = &DAT_711a3afc;
    puVar12 = DAT_711a3afc;
    puVar10 = puVar8;
    if (DAT_711a3afc != (undefined4 *)0x0) {
      do {
        while (puVar8 = puVar12, param_1 < (int)puVar8[4]) {
          puVar12 = (undefined4 *)*puVar8;
          puVar10 = puVar8;
          if ((undefined4 *)*puVar8 == (undefined4 *)0x0) goto LAB_715a696c;
        }
        if (param_1 <= (int)puVar8[4]) goto LAB_715a69dc;
        puVar12 = (undefined4 *)puVar8[1];
      } while ((undefined4 *)puVar8[1] != (undefined4 *)0x0);
      puVar10 = puVar8 + 1;
    }
LAB_715a696c:
    puVar3 = (undefined4 *)thunk_MwhHq(0x78);
    puVar3[4] = param_1;
    imp___aeabi_memclr8(puVar3 + 6,0x58);
    puVar3[0x1c] = 0xffffffff;
    puVar3[0x1d] = 0xffffffff;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = puVar8;
    *puVar10 = puVar3;
    puVar12 = puVar3;
    if ((int *)*DAT_711a3af8 != (int *)0x0) {
      puVar12 = (undefined4 *)*puVar10;
      DAT_711a3af8 = (int *)*DAT_711a3af8;
    }
    FUN_712f807c(DAT_711a3afc,puVar12);
    DAT_711a3b00 = DAT_711a3b00 + 1;
    puVar8 = puVar3;
LAB_715a69dc:
    puVar8[iStack_78 * 6 + 9] = uVar4;
    iVar6 = DAT_711a3b74 + 1;
    DAT_711a3b74 = iVar6;
    puVar8[iStack_78 * 6 + 8] = 2;
    puVar8[iStack_78 * 6 + 0xb] = iVar6;
    thunk_KmAAJrQeDYcikipjnSTRnrUxnxfqYglsjaMkPyhpSaUedr(&DAT_711a3af4);
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_711a3af0);
    piVar11 = (int *)0x1;
  }
LAB_715a6158:
  return (uint)piVar11 & 1;
}


// Function: FUN_715abf7c @ 0x715abf7c (size=3736)

/* WARNING: Type propagation algorithm not settling */

void FUN_715abf7c(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *******pppppppuVar3;
  undefined4 ******ppppppuVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *******pppppppuVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int *piVar15;
  undefined4 *******pppppppuVar16;
  undefined4 ******ppppppuVar17;
  undefined4 *******pppppppuVar18;
  uint uVar19;
  int iVar20;
  undefined4 ******extraout_r1;
  undefined4 *puVar21;
  int *piVar22;
  undefined4 ******ppppppuVar23;
  uint uVar24;
  undefined4 ******ppppppuVar25;
  undefined4 *******pppppppuVar26;
  int iVar27;
  int *piVar28;
  int *piVar29;
  bool bVar30;
  bool bVar31;
  undefined4 uStack_c8;
  uint uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  int *piStack_b4;
  int iStack_b0;
  int *piStack_94;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 *******pppppppuStack_5c;
  undefined4 *******pppppppuStack_58;
  int iStack_54;
  undefined4 *puStack_50;
  int iStack_4c;
  undefined4 *puStack_48;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  undefined4 *puStack_30;
  int iStack_2c;
  
  iStack_54 = 0;
  pppppppuStack_58 = (undefined4 *******)0x0;
  uStack_60 = 0xffffffff;
  uStack_64 = 0xffffffff;
  uStack_68 = 0;
  uStack_6c = 0;
  uStack_70 = 0;
  uStack_74 = 0xffffffff;
  uStack_78 = 0xffffffff;
  uStack_7c = 0;
  uStack_80 = 0;
  uStack_84 = 0;
  pppppppuStack_5c = &pppppppuStack_58;
  imp_eglMakeCurrent(DAT_711a3b84,0,0,DAT_711a3b7c);
  piVar15 = (int *)0x0;
  uVar13 = 0;
  do {
    iStack_44 = CONCAT31(iStack_44._1_3_,1);
    puStack_48 = &DAT_711a3af0;
    thunk_cfqspBX_JrdDvACwYrAyrngjQ();
    piStack_94 = DAT_711a3b04;
    if (DAT_711a3b04 == DAT_711a3b08) {
      ppppppuVar23 = (undefined4 ******)0x0;
      piVar29 = DAT_711a3b04;
      if (DAT_711a3b5c == DAT_711a3b60) {
LAB_715ac2ec:
        if ((undefined4 **)DAT_711a3af8 == &DAT_711a3afc) break;
        uVar24 = 0;
        uStack_c4 = 0xffffffff;
        puVar21 = DAT_711a3af8;
        do {
          if ((puVar21[8] == 2) && ((uVar6 = puVar21[0xb], (int)uStack_c4 < 0 || (uVar6 < uVar24))))
          {
            uStack_c4 = 0;
            ppppppuVar23 = (undefined4 ******)puVar21[4];
            uVar24 = uVar6;
            if (puVar21[0xe] == 2) {
LAB_715ac374:
              uVar19 = puVar21[0x11];
              uVar24 = uVar6;
              if (uVar19 < uVar6) goto LAB_715ac380;
            }
          }
          else if (puVar21[0xe] == 2) {
            uVar6 = uVar24;
            if (uStack_c4 < 0x80000000) goto LAB_715ac374;
            uVar19 = puVar21[0x11];
LAB_715ac380:
            ppppppuVar23 = (undefined4 ******)puVar21[4];
            uStack_c4 = 1;
            uVar24 = uVar19;
          }
          if ((puVar21[0x14] == 2) && (((int)uStack_c4 < 0 || ((uint)puVar21[0x17] < uVar24)))) {
            ppppppuVar23 = (undefined4 ******)puVar21[4];
            uStack_c4 = 2;
            uVar24 = puVar21[0x17];
          }
          puVar10 = puVar21;
          puVar5 = (undefined4 *)puVar21[1];
          if ((undefined4 *)puVar21[1] == (undefined4 *)0x0) {
            do {
              puVar21 = (undefined4 *)puVar10[2];
              bVar31 = (undefined4 *)*puVar21 != puVar10;
              puVar10 = puVar21;
            } while (bVar31);
          }
          else {
            do {
              puVar21 = puVar5;
              puVar5 = (undefined4 *)*puVar21;
            } while ((undefined4 *)*puVar21 != (undefined4 *)0x0);
          }
        } while ((undefined4 **)puVar21 != &DAT_711a3afc);
        if (0x7fffffff < uStack_c4) break;
        puVar21 = &DAT_711a3afc;
        puVar10 = DAT_711a3afc;
        while (puVar5 = puVar21, puVar10 != (undefined4 *)0x0) {
          while (puVar12 = puVar10, (int)puVar12[4] <= (int)ppppppuVar23) {
            if ((int)ppppppuVar23 <= (int)puVar12[4]) goto LAB_715acdac;
            puVar10 = (undefined4 *)puVar12[1];
            if ((undefined4 *)puVar12[1] == (undefined4 *)0x0) {
              puVar21 = puVar12 + 1;
              puVar5 = puVar12;
              goto LAB_715acbd0;
            }
          }
          puVar21 = puVar12;
          puVar10 = (undefined4 *)*puVar12;
        }
LAB_715acbd0:
        puVar12 = (undefined4 *)thunk_MwhHq(0x78);
        puVar12[4] = ppppppuVar23;
        imp___aeabi_memclr8(puVar12 + 6,0x58);
        *puVar12 = 0;
        puVar12[0x1c] = 0xffffffff;
        puVar12[0x1d] = 0xffffffff;
        puVar12[1] = 0;
        puVar12[2] = puVar5;
        *puVar21 = puVar12;
        puVar10 = puVar12;
        if ((undefined4 *)*DAT_711a3af8 != (undefined4 *)0x0) {
          puVar10 = (undefined4 *)*puVar21;
          DAT_711a3af8 = (undefined4 *)*DAT_711a3af8;
        }
        FUN_712f807c(DAT_711a3afc,puVar10);
        DAT_711a3b00 = DAT_711a3b00 + 1;
LAB_715acdac:
        puVar12[uStack_c4 * 6 + 8] = 3;
        uStack_c8 = puVar12[uStack_c4 * 6 + 6];
        iStack_b8 = puVar12[uStack_c4 * 6 + 9];
        puVar12[uStack_c4 * 6 + 9] = 0;
        uStack_bc = puVar12[0x18];
        uStack_c0 = puVar12[0x19];
        iStack_b0 = puVar12[0x1a];
        piStack_b4 = (int *)puVar12[0x1b];
        bVar31 = false;
        piStack_94 = DAT_711a3b04;
        piVar29 = DAT_711a3b08;
        goto LAB_715ac09c;
      }
    }
    else {
      ppppppuVar23 = (undefined4 ******)0x0;
      piVar29 = DAT_711a3b08;
    }
LAB_715ac078:
    uStack_c4 = 0;
    uStack_c8 = 0;
    iStack_b8 = 0;
    iStack_b0 = 0;
    piStack_b4 = (int *)0x0;
    uStack_bc = 0;
    uStack_c0 = 0;
    bVar31 = true;
LAB_715ac09c:
    uVar2 = DAT_711a3b64;
    piVar22 = DAT_711a3b60;
    piVar1 = DAT_711a3b5c;
    DAT_711a3b04 = (int *)0x0;
    DAT_711a3b08 = (int *)0x0;
    DAT_711a3b0c = 0;
    piVar28 = piStack_94;
    DAT_711a3b5c = piVar15;
    DAT_711a3b60 = piVar15;
    DAT_711a3b64 = uVar13;
    if ((char)iStack_44 != '\0') {
      thunk_QgduklVhdVlmSiqzGQeutncbrNj(puStack_48);
    }
    for (; piVar15 = piVar1, piVar28 != piVar29; piVar28 = piVar28 + 1) {
      ppppppuVar25 = (undefined4 ******)*piVar28;
      pppppppuVar16 = pppppppuStack_58;
      pppppppuVar8 = &pppppppuStack_58;
      while (pppppppuVar26 = pppppppuVar8, pppppppuVar16 != (undefined4 *******)0x0) {
        while (pppppppuVar8 = pppppppuVar16, (int)pppppppuVar8[4] <= (int)ppppppuVar25) {
          if ((int)ppppppuVar25 <= (int)pppppppuVar8[4]) goto LAB_715ac1ec;
          pppppppuVar16 = (undefined4 *******)pppppppuVar8[1];
          if ((undefined4 *******)pppppppuVar8[1] == (undefined4 *******)0x0) {
            pppppppuVar26 = pppppppuVar8 + 1;
            goto LAB_715ac180;
          }
        }
        pppppppuVar16 = (undefined4 *******)*pppppppuVar8;
      }
LAB_715ac180:
      pppppppuVar3 = (undefined4 *******)thunk_MwhHq(0x30);
      pppppppuVar3[4] = ppppppuVar25;
      pppppppuVar3[6] = (undefined4 ******)0x0;
      pppppppuVar3[7] = (undefined4 ******)0x0;
      pppppppuVar3[8] = (undefined4 ******)0x0;
      pppppppuVar3[9] = (undefined4 ******)0x0;
      pppppppuVar3[10] = (undefined4 ******)0x0;
      pppppppuVar3[0xb] = (undefined4 ******)0x0;
      *pppppppuVar3 = (undefined4 ******)0x0;
      pppppppuVar3[1] = (undefined4 ******)0x0;
      pppppppuVar3[2] = pppppppuVar8;
      *pppppppuVar26 = pppppppuVar3;
      pppppppuVar16 = pppppppuVar3;
      if ((undefined4 *******)*pppppppuStack_5c != (undefined4 *******)0x0) {
        pppppppuVar16 = (undefined4 *******)*pppppppuVar26;
        pppppppuStack_5c = (undefined4 *******)*pppppppuStack_5c;
      }
      FUN_712f807c(pppppppuStack_58,pppppppuVar16);
      iStack_54 = iStack_54 + 1;
      pppppppuVar8 = pppppppuVar3;
LAB_715ac1ec:
      if (pppppppuVar8[6] != (undefined4 ******)0x0) {
        ppppppuVar4 = (undefined4 ******)imp_eglGetCurrentSurface(0x3059);
        ppppppuVar17 = pppppppuVar8[6];
        if (ppppppuVar4 == ppppppuVar17) {
          imp_eglMakeCurrent(DAT_711a3b84,0,0,DAT_711a3b7c);
          ppppppuVar17 = pppppppuVar8[6];
        }
        imp_eglDestroySurface(DAT_711a3b84,ppppppuVar17);
        *(undefined1 *)(pppppppuVar8 + 0xb) = 0;
        pppppppuVar8[6] = (undefined4 ******)0x0;
      }
      pppppppuVar16 = &pppppppuStack_58;
      pppppppuVar8 = pppppppuStack_58;
      if (pppppppuStack_58 != (undefined4 *******)0x0) {
        do {
          pppppppuVar3 = pppppppuVar8;
          pppppppuVar18 = pppppppuVar16;
          ppppppuVar4 = pppppppuVar3[4];
          pppppppuVar16 = pppppppuVar3;
          pppppppuVar26 = pppppppuVar3;
          if ((int)ppppppuVar4 < (int)ppppppuVar25) {
            pppppppuVar26 = pppppppuVar3 + 1;
            pppppppuVar16 = pppppppuVar18;
          }
          pppppppuVar8 = (undefined4 *******)*pppppppuVar26;
        } while ((undefined4 *******)*pppppppuVar26 != (undefined4 *******)0x0);
        if ((undefined4 ********)pppppppuVar16 != &pppppppuStack_58) {
          pppppppuVar8 = pppppppuVar3;
          if ((int)ppppppuVar4 < (int)ppppppuVar25) {
            pppppppuVar8 = pppppppuVar18;
          }
          if ((int)pppppppuVar8[4] <= (int)ppppppuVar25) {
            if ((int)ppppppuVar4 < (int)ppppppuVar25) {
              pppppppuVar3 = pppppppuVar18;
            }
            pppppppuVar8 = pppppppuVar16;
            pppppppuVar26 = (undefined4 *******)pppppppuVar3[1];
            if ((undefined4 *******)pppppppuVar3[1] == (undefined4 *******)0x0) {
              do {
                pppppppuVar3 = (undefined4 *******)pppppppuVar8[2];
                bVar30 = (undefined4 *******)*pppppppuVar3 != pppppppuVar8;
                pppppppuVar8 = pppppppuVar3;
              } while (bVar30);
            }
            else {
              do {
                pppppppuVar3 = pppppppuVar26;
                pppppppuVar26 = (undefined4 *******)*pppppppuVar3;
              } while ((undefined4 *******)*pppppppuVar3 != (undefined4 *******)0x0);
            }
            if (pppppppuStack_5c == pppppppuVar16) {
              pppppppuStack_5c = pppppppuVar3;
            }
            iStack_54 = iStack_54 + -1;
            FUN_71368054(pppppppuStack_58,pppppppuVar16);
            thunk_qNQrlu(pppppppuVar16);
          }
        }
      }
    }
    for (; piVar15 != piVar22; piVar15 = piVar15 + 0xc) {
      if ((char)piVar15[10] == '\0') {
        puStack_48 = (undefined4 *)0x0;
        uStack_34 = uStack_34 & 0xffffff00;
        uStack_38 = 0;
        iVar9 = FUN_715addc4(&puStack_48,piVar15[9],piVar15[2],piVar15[3],piVar15[8],piVar15[9]);
        puVar21 = puStack_48;
        if ((iVar9 == 0) &&
           (iVar9 = imp_eglMakeCurrent(DAT_711a3b84,puStack_48,puStack_48,DAT_711a3b7c), iVar9 != 0)
           ) {
          imp_eglSwapInterval(DAT_711a3b84,0);
          iVar9 = FUN_715a84b0(&uStack_84,s_precision_mediump_float__uniform_700628a9,0xbf800000);
          if (iVar9 != 0) {
            imp_glWaitSync(piVar15[1],0,0xffffffff,0xffffffff);
            imp_glViewport(0,0,piVar15[8],piVar15[9]);
            imp_glUseProgram(uStack_84);
            imp_glUniform2f(uStack_78,piVar15[4],piVar15[5]);
            iVar9 = piVar15[5];
            iVar27 = piVar15[7];
            uVar13 = FUN_71ba240c(piVar15[6],piVar15[4]);
            uVar14 = FUN_71ba240c(iVar27,iVar9);
            imp_glUniform2f(uStack_74,uVar13,uVar14);
            imp_glActiveTexture(0x84c0);
            imp_glBindTexture(0xde1,*piVar15);
            imp_glBindVertexArray(uStack_80);
            imp_glDrawArrays(5,0,4);
            iVar9 = imp_eglSwapBuffers(DAT_711a3b84,puVar21);
            if (iVar9 == 1) {
              thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_711a3ae0);
              uVar24 = piVar15[2];
              iVar27 = piVar15[3];
              iVar11 = piVar15[8];
              iVar9 = piVar15[9];
              puVar10 = &DAT_711a3b6c;
              puVar5 = DAT_711a3b6c;
              while (puVar12 = puVar10, puVar5 != (undefined4 *)0x0) {
                while( true ) {
                  puVar7 = puVar5;
                  uVar6 = puVar7[4];
                  iVar20 = puVar7[5];
                  puVar10 = puVar7;
                  if ((int)(iVar27 - (iVar20 + (uint)(uVar24 < uVar6))) < 0 !=
                      (SBORROW4(iVar27,iVar20) != SBORROW4(iVar27 - iVar20,(uint)(uVar24 < uVar6))))
                  break;
                  if ((int)(iVar20 - (iVar27 + (uint)(uVar6 < uVar24))) < 0 ==
                      (SBORROW4(iVar20,iVar27) != SBORROW4(iVar20 - iVar27,(uint)(uVar6 < uVar24))))
                  goto LAB_715ac778;
                  puVar5 = (undefined4 *)puVar7[1];
                  if ((undefined4 *)puVar7[1] == (undefined4 *)0x0) {
                    puVar12 = puVar7 + 1;
                    goto LAB_715ac6f0;
                  }
                }
                puVar5 = (undefined4 *)*puVar7;
              }
LAB_715ac6f0:
              puVar7 = (undefined4 *)thunk_MwhHq(0x20);
              puVar7[2] = puVar10;
              puVar7[4] = uVar24;
              puVar7[5] = iVar27;
              puVar7[6] = 0;
              puVar7[7] = 0;
              *puVar7 = 0;
              puVar7[1] = 0;
              *puVar12 = puVar7;
              puVar21 = puVar7;
              if ((int *)*DAT_711a3b68 != (int *)0x0) {
                puVar21 = (undefined4 *)*puVar12;
                DAT_711a3b68 = (int *)*DAT_711a3b68;
              }
              FUN_712f807c(DAT_711a3b6c,puVar21);
              DAT_711a3b70 = DAT_711a3b70 + 1;
              puVar21 = puStack_48;
LAB_715ac778:
              puVar7[6] = iVar11;
              puVar7[7] = iVar9;
              thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_711a3ae0);
            }
          }
        }
        if (puVar21 != (undefined4 *)0x0) {
          puVar10 = (undefined4 *)imp_eglGetCurrentSurface(0x3059);
          if (puVar10 == puVar21) {
            imp_eglMakeCurrent(DAT_711a3b84,0,0,DAT_711a3b7c);
          }
          imp_eglDestroySurface(DAT_711a3b84,puVar21);
        }
      }
      if (piVar15[1] != 0) {
        imp_glDeleteSync();
      }
      if (*piVar15 != 0) {
        imp_glDeleteTextures(1,piVar15);
      }
    }
    pppppppuVar16 = &pppppppuStack_58;
    pppppppuVar8 = pppppppuStack_58;
    if (!bVar31) {
      while (pppppppuVar26 = pppppppuVar16, pppppppuVar8 != (undefined4 *******)0x0) {
        while (pppppppuVar16 = pppppppuVar8, (int)pppppppuVar16[4] <= (int)ppppppuVar23) {
          ppppppuVar25 = ppppppuVar23;
          if ((int)ppppppuVar23 <= (int)pppppppuVar16[4]) goto LAB_715ac840;
          pppppppuVar8 = (undefined4 *******)pppppppuVar16[1];
          if ((undefined4 *******)pppppppuVar16[1] == (undefined4 *******)0x0) {
            pppppppuVar26 = pppppppuVar16 + 1;
            goto LAB_715ac7d0;
          }
        }
        pppppppuVar8 = (undefined4 *******)*pppppppuVar16;
      }
LAB_715ac7d0:
      pppppppuVar8 = (undefined4 *******)thunk_MwhHq(0x30);
      pppppppuVar8[4] = ppppppuVar23;
      pppppppuVar8[6] = (undefined4 ******)0x0;
      pppppppuVar8[7] = (undefined4 ******)0x0;
      pppppppuVar8[8] = (undefined4 ******)0x0;
      pppppppuVar8[9] = (undefined4 ******)0x0;
      pppppppuVar8[10] = (undefined4 ******)0x0;
      pppppppuVar8[0xb] = (undefined4 ******)0x0;
      *pppppppuVar8 = (undefined4 ******)0x0;
      pppppppuVar8[1] = (undefined4 ******)0x0;
      pppppppuVar8[2] = pppppppuVar16;
      *pppppppuVar26 = pppppppuVar8;
      pppppppuVar16 = pppppppuVar8;
      if ((undefined4 *******)*pppppppuStack_5c != (undefined4 *******)0x0) {
        pppppppuVar16 = (undefined4 *******)*pppppppuVar26;
        pppppppuStack_5c = (undefined4 *******)*pppppppuStack_5c;
      }
      FUN_712f807c(pppppppuStack_58,pppppppuVar16);
      iStack_54 = iStack_54 + 1;
      ppppppuVar25 = extraout_r1;
      pppppppuVar16 = pppppppuVar8;
LAB_715ac840:
      pppppppuVar8 = pppppppuVar16 + 6;
      iVar9 = FUN_715addc4(pppppppuVar8,ppppppuVar25,iStack_b0,piStack_b4,uStack_bc,uStack_c0);
      if (iVar9 == 0) {
        iVar9 = imp_eglMakeCurrent(DAT_711a3b84,*pppppppuVar8,*pppppppuVar8,DAT_711a3b7c);
        if (iVar9 == 0) {
          bVar31 = true;
          if (*pppppppuVar8 == (undefined4 ******)0x0) {
            iVar27 = 0;
          }
          else {
            ppppppuVar25 = (undefined4 ******)imp_eglGetCurrentSurface(0x3059);
            ppppppuVar4 = *pppppppuVar8;
            if (ppppppuVar25 == ppppppuVar4) {
              imp_eglMakeCurrent(DAT_711a3b84,0,0,DAT_711a3b7c);
              ppppppuVar4 = *pppppppuVar8;
            }
            imp_eglDestroySurface(DAT_711a3b84,ppppppuVar4);
            iVar27 = 0;
            *(undefined1 *)(pppppppuVar16 + 0xb) = 0;
            pppppppuVar16[6] = (undefined4 ******)0x0;
          }
        }
        else {
          if (*(char *)(pppppppuVar16 + 0xb) == '\0') {
            iVar9 = imp_eglSwapInterval(DAT_711a3b84,0);
            *(bool *)(pppppppuVar16 + 0xb) = iVar9 == 1;
          }
          iVar9 = FUN_715a84b0(&uStack_70,s_precision_mediump_float__uniform_7006ee11,0x3f800000);
          bVar31 = false;
          iVar27 = 0;
          if (iVar9 != 0) {
            if (iStack_b8 != 0) {
              iVar11 = imp_glClientWaitSync(iStack_b8,1,100000000,0);
              iVar9 = 0x911d;
              if (iVar11 != 0x911d) {
                iVar9 = 0x911b;
              }
              if (iVar11 == 0x911d || iVar11 == iVar9) {
                DAT_711a3b24 = DAT_711a3b24 + 1;
                goto LAB_715ac87c;
              }
            }
            thunk_cAVowcMDgjNlKlwaXlLRnhcfdxnJsEWOPLMGMHS(&puStack_48);
            imp_glViewport(0,0,uStack_bc,uStack_c0);
            imp_glUseProgram(uStack_70);
            imp_glActiveTexture(0x84c0);
            imp_glBindTexture(0xde1,uStack_c8);
            imp_glBindVertexArray(uStack_6c);
            imp_glDrawArrays(5,0,4);
            iVar27 = imp_glFenceSync(0x9117,0);
            imp_glFinish();
            iVar9 = imp_eglSwapBuffers(DAT_711a3b84,*pppppppuVar8);
            if (iVar9 == 1) {
              DAT_711a3b20 = (undefined4 *)((int)DAT_711a3b20 + 1);
            }
            else {
              DAT_711a3b28 = DAT_711a3b28 + 1;
              if (*pppppppuVar8 != (undefined4 ******)0x0) {
                ppppppuVar25 = (undefined4 ******)imp_eglGetCurrentSurface(0x3059);
                ppppppuVar4 = *pppppppuVar8;
                if (ppppppuVar25 == ppppppuVar4) {
                  imp_eglMakeCurrent(DAT_711a3b84,0,0,DAT_711a3b7c);
                  ppppppuVar4 = *pppppppuVar8;
                }
                imp_eglDestroySurface(DAT_711a3b84,ppppppuVar4);
                *(undefined1 *)(pppppppuVar16 + 0xb) = 0;
                pppppppuVar16[6] = (undefined4 ******)0x0;
              }
            }
            thunk_cAVowcMDgjNlKlwaXlLRnhcfdxnJsEWOPLMGMHS(&puStack_50);
            uVar13 = FUN_71ba19d8((int)puStack_50 - (int)puStack_48,
                                  iStack_4c - (iStack_44 + (uint)(puStack_50 < puStack_48)));
            uVar14 = FUN_71ba13e0(uVar13,0x49742400);
            uVar13 = DAT_711a3b30;
            iVar9 = FUN_71ba2d10(DAT_711a3b30,uVar14);
            DAT_711a3b30 = uVar13;
            if (iVar9 != 0) {
              DAT_711a3b30 = uVar14;
            }
            bVar31 = false;
          }
        }
      }
      else {
        iVar27 = 0;
        bVar31 = iVar9 == 2;
      }
LAB_715ac87c:
      thunk_cAVowcMDgjNlKlwaXlLRnhcfdxnJsEWOPLMGMHS(&puStack_48);
      if ((int)(uint)((uint)((int)puStack_48 - (int)DAT_711a3b38) < 1000000000) <=
          (int)(iStack_44 - (DAT_711a3b3c + (uint)(puStack_48 < DAT_711a3b38)))) {
        uStack_38 = 0;
        uStack_3c = 0;
        iStack_40 = 0;
        iStack_44 = 0;
        puStack_48 = (undefined4 *)0x0;
        thunk_cAVowcMDgjNlKlwaXlLRnhcfdxnJsEWOPLMGMHS(&puStack_30);
        DAT_711a3b20 = puStack_48;
        DAT_711a3b24 = iStack_44;
        DAT_711a3b28 = iStack_40;
        DAT_711a3b2c = uStack_3c;
        DAT_711a3b30 = uStack_38;
        DAT_711a3b34 = uStack_34;
        DAT_711a3b38 = puStack_30;
        DAT_711a3b3c = iStack_2c;
      }
      if (iStack_b8 != 0) {
        imp_glDeleteSync();
      }
      thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_711a3af0);
      if (DAT_711a3afc == (undefined4 *)0x0) {
LAB_715ac96c:
        puVar21 = &DAT_711a3afc;
      }
      else {
        puVar21 = &DAT_711a3afc;
        puVar10 = DAT_711a3afc;
        do {
          puVar5 = puVar10;
          if ((int)puVar10[4] < (int)ppppppuVar23) {
            puVar10 = puVar10 + 1;
            puVar5 = puVar21;
          }
          puVar21 = puVar5;
          puVar10 = (undefined4 *)*puVar10;
        } while (puVar10 != (undefined4 *)0x0);
        if ((undefined4 **)puVar21 == &DAT_711a3afc) goto LAB_715ac96c;
        if ((int)ppppppuVar23 < (int)puVar21[4]) {
          puVar21 = &DAT_711a3afc;
        }
      }
      piVar15 = DAT_711a3b10;
      piVar29 = (int *)0x0;
      if ((undefined4 **)puVar21 != &DAT_711a3afc) {
        piVar29 = puVar21 + 6;
      }
      while (piVar15 != DAT_711a3b14) {
        piVar22 = piVar15 + 0x1a;
        piVar28 = (int *)0x0;
        if ((undefined4 ******)*piVar15 == ppppppuVar23) {
          piVar28 = piVar15 + 2;
        }
        piVar15 = piVar22;
        if (piVar29 == (int *)0x0) {
          piVar29 = piVar28;
        }
      }
      if (piVar29 == (int *)0x0) {
        if (iVar27 != 0) {
          imp_glDeleteSync(iVar27);
        }
      }
      else {
        if (bVar31) {
          piVar15 = piStack_b4;
        }
        piVar29[uStack_c4 * 6 + 2] = 0;
        piVar29[uStack_c4 * 6 + 4] = iVar27;
        if (bVar31) {
          piVar29[0x16] = iStack_b0;
          piVar29[0x17] = (int)piVar15;
        }
      }
      thunk_KmAAJrQeDYcikipjnSTRnrUxnxfqYglsjaMkPyhpSaUedr(&DAT_711a3af4);
      thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_711a3af0);
    }
    piVar15 = piVar1;
    uVar13 = uVar2;
    if (piStack_94 != (int *)0x0) {
      thunk_qNQrlu();
    }
  } while( true );
  thunk_STeqdXQsnAyiTBJTFCuiFKcPKNhdgVCrrMQVYFZSLEEADdhRfhXIrTCuEWwQWomPgRHz
            (&DAT_711a3af4,&puStack_48);
  piStack_94 = DAT_711a3b04;
  piVar29 = DAT_711a3b08;
  if ((DAT_711a3b04 != DAT_711a3b08) || (piVar29 = DAT_711a3b04, DAT_711a3b5c != DAT_711a3b60))
  goto LAB_715ac078;
  goto LAB_715ac2ec;
}


// Function: FUN_717f42bc @ 0x717f42bc (size=1780)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_717f42bc(int param_1)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  char *pcVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uStack_fc;
  uint auStack_f8 [2];
  undefined4 *puStack_f0;
  uint uStack_ec;
  undefined4 auStack_e4 [2];
  undefined *puStack_dc;
  undefined *puStack_d8;
  int iStack_d4;
  uint auStack_cc [13];
  int iStack_98;
  undefined *apuStack_7c [7];
  undefined4 uStack_60;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  DataMemoryBarrier(0xb);
  *(undefined1 *)(param_1 + 0x131) = 1;
  DataMemoryBarrier(0xb);
  DataMemoryBarrier(0xb);
  if ((*(byte *)(param_1 + 0x130) & 1) == 0) {
    FUN_717f500c(param_1);
    DataMemoryBarrier(0xb);
    if ((*(byte *)(param_1 + 0x130) & 1) == 0) {
      if (*(int **)(param_1 + 0x88) == (int *)0x0) goto LAB_717f49a4;
      (**(code **)(**(int **)(param_1 + 0x88) + 0x18))();
      if (*(int *)(param_1 + 100) < 1) {
        iVar17 = thunk_MwhHq(0x18);
        puStack_d8 = (undefined *)0x14;
        puStack_dc = (undefined *)0x19;
        iStack_d4 = iVar17;
        imp___aeabi_memcpy(iVar17,s_connectionCount_<__0_70075c90,0x14);
        *(undefined1 *)(iVar17 + 0x14) = 0;
        piVar10 = *(int **)(param_1 + 0xd0);
        if (piVar10 == (int *)0x0) goto LAB_717f49a4;
        (**(code **)(*piVar10 + 0x18))(piVar10,&puStack_dc);
        if (((uint)puStack_dc & 1) != 0) {
          thunk_qNQrlu(iStack_d4);
        }
        goto LAB_717f4454;
      }
      uVar4 = FUN_717f5e04();
      uVar13 = *(uint *)(param_1 + 0x50);
      if ((uVar13 == 0) || (uVar18 = *(uint *)(param_1 + 0xe4), uVar18 <= uVar13)) {
LAB_717f44c8:
        iVar17 = *(int *)(param_1 + 0x120);
        if ((*(byte *)(param_1 + 0x118) & 1) == 0) {
          iVar17 = param_1 + 0x119;
        }
        imp_remove(iVar17);
      }
      else {
        uVar11 = *(uint *)(param_1 + 0x30);
        bVar1 = *(byte *)(param_1 + 0x2c);
        if ((bVar1 & 1) == 0) {
          uVar11 = (uint)(bVar1 >> 1);
        }
        if (uVar11 == 0) goto LAB_717f44c8;
        bVar2 = *(byte *)(param_1 + 0x124);
        uVar15 = *(uint *)(param_1 + 0x128);
        if ((bVar2 & 1) == 0) {
          uVar15 = (uint)(bVar2 >> 1);
        }
        if (uVar11 != uVar15) goto LAB_717f44c8;
        pcVar8 = *(char **)(param_1 + 300);
        if ((bVar2 & 1) == 0) {
          pcVar8 = (char *)(param_1 + 0x125);
        }
        if ((bVar1 & 1) == 0) {
          bVar3 = true;
          if (1 < bVar1) {
            uVar11 = (uint)(bVar1 >> 1);
            pcVar12 = (char *)(param_1 + 0x2d);
            do {
              if (*pcVar12 != *pcVar8) goto LAB_717f44c8;
              pcVar8 = pcVar8 + 1;
              uVar11 = uVar11 - 1;
              pcVar12 = pcVar12 + 1;
            } while (uVar11 != 0);
          }
        }
        else {
          iVar17 = imp_memcmp(*(undefined4 *)(param_1 + 0x34));
          bVar3 = iVar17 == 0;
        }
        if ((uVar4 != uVar18) || (!bVar3)) goto LAB_717f44c8;
        *(uint *)(param_1 + 0xe8) = uVar13;
        *(uint *)(param_1 + 0xec) = uVar13;
        *(uint *)(param_1 + 0xf0) = uVar13;
      }
      iVar17 = 0;
      uStack_60 = 0;
      puStack_dc = &DAT_70b13e64;
      apuStack_7c[0] = &DAT_70b13e78;
      thunk_cIfwOMOttIIbqLlFTq_mxihGfZvtx(apuStack_7c,&puStack_d8);
      puStack_dc = &DAT_70b13e2c;
      uStack_34 = 0;
      uStack_30 = 0xffffffff;
      apuStack_7c[0] = &DAT_70b13e40;
      thunk_azjfLPxMogyHkNbyxUJJRuQTBnWZPlhMPCJBlycIPmSzBbRwbMKGmt(&puStack_d8);
      iVar9 = *(int *)(param_1 + 0x120);
      if ((*(byte *)(param_1 + 0x118) & 1) == 0) {
        iVar9 = param_1 + 0x119;
      }
      iVar9 = thunk_RwqzrmzAkMQghYbV_YuXdEAmptcLevTkifczlTccrBfEOfiWtukCLMVhVNtO
                        (&puStack_d8,iVar9,0x1c);
      if (iVar9 == 0) {
        thunk_q_WxSZVUhHEiViGbhoJlFEVyRXpUd
                  ((int)&puStack_dc + *(int *)(puStack_dc + -0xc),
                   *(uint *)((int)auStack_cc + *(int *)(puStack_dc + -0xc)) | 4);
      }
      if ((iStack_98 == 0) &&
         (thunk_DvnMjaDGTcuvqchgjJALXSMKDBO_jbDCiHzGydVYfqyJrJhrRVmzJXcuMaOjRD_PVGaWanMNsHEyURaZngvJVGSPwIqcNa_LwXQqR
                    (&puStack_dc,param_1 + 0x118,0x14), iStack_98 == 0)) {
        puStack_f0 = (undefined4 *)thunk_MwhHq(0x18);
        *puStack_f0 = 0x6e65704f;
        puStack_f0[1] = 0x6c696620;
        puStack_f0[2] = 0x61662065;
        puStack_f0[3] = 0x64656c69;
        *(undefined1 *)(puStack_f0 + 4) = 0;
        auStack_f8[1] = 0x10;
        auStack_f8[0] = 0x19;
        piVar10 = *(int **)(param_1 + 0xd0);
        if (piVar10 == (int *)0x0) {
LAB_717f49a4:
                    /* WARNING: Subroutine does not return */
          FUN_71539164();
        }
        (**(code **)(*piVar10 + 0x18))(piVar10,auStack_f8);
        if ((auStack_f8[0] & 1) != 0) {
          thunk_qNQrlu(puStack_f0);
        }
LAB_717f494c:
        DataMemoryBarrier(0xb);
        *(undefined1 *)(param_1 + 0x132) = 1;
        DataMemoryBarrier(0xb);
      }
      else {
        iVar9 = *(int *)(param_1 + 0xe4);
        if (iVar9 != 0) {
          thunk_PvgkqSpamLbZrSkGHVYUggfDztprmEjdiqirRAVMMhqnPUmvlqjutKEzVJqDRVoS
                    (auStack_e4,&puStack_dc);
          if (((*(byte *)((int)auStack_cc + *(int *)(puStack_dc + -0xc)) & 5) == 0) &&
             (piVar10 = *(int **)((int)auStack_cc + *(int *)(puStack_dc + -0xc) + 8),
             (**(code **)(*piVar10 + 0x14))(auStack_f8,piVar10,0,0,iVar9 + -1,0,0x10),
             ((uint)puStack_f0 & uStack_ec) == 0xffffffff)) {
            thunk_q_WxSZVUhHEiViGbhoJlFEVyRXpUd
                      ((int)&puStack_dc + *(int *)(puStack_dc + -0xc),
                       *(uint *)((int)auStack_cc + *(int *)(puStack_dc + -0xc)) | 4);
          }
          thunk_IwJFjSZTTKIzSUeBzSWvOofbERBfzNDjjyZpVsRdZ_uQhTxSEIuAGaOTkXzDt(auStack_e4);
          thunk_SyrgGOqkHOjKZxTwhjDUTaNGMiWvTWsQLTIHjeQJWv_nmnoWZsAIZwpjTXGqV
                    (&puStack_dc,&DAT_7008621a,1);
        }
        iVar9 = param_1 + 0x138;
        thunk_cfqspBX_JrdDvACwYrAyrngjQ(iVar9);
        DataMemoryBarrier(0xb);
        if ((*(byte *)(param_1 + 0x130) & 1) == 0) {
          iVar14 = *(int *)(param_1 + 100);
          iVar16 = 0;
          puStack_f0 = (undefined4 *)0x0;
          auStack_f8[1] = 0;
          auStack_f8[0] = 0;
          if (iVar14 != 0) {
            if (iVar14 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_717ffa6c(auStack_f8);
            }
            iVar17 = thunk_MwhHq(iVar14);
            imp___aeabi_memclr(iVar17,iVar14);
            iVar16 = iVar17 + iVar14;
          }
          iVar5 = *(int *)(param_1 + 0x13c);
          if (iVar5 != 0) {
            *(int *)(param_1 + 0x140) = iVar5;
            thunk_qNQrlu();
            iVar14 = *(int *)(param_1 + 100);
          }
          *(int *)(param_1 + 0x13c) = iVar17;
          *(int *)(param_1 + 0x140) = iVar16;
          *(int *)(param_1 + 0x144) = iVar16;
          if (0 < iVar14) {
            iVar17 = 0;
            do {
              DataMemoryBarrier(0xb);
              *(undefined1 *)(*(int *)(param_1 + 0x13c) + iVar17) = 0;
              DataMemoryBarrier(0xb);
              iVar14 = *(int *)(param_1 + 0x13c);
              uVar6 = thunk_MwhHq(4);
              thunk_IqYTnHtEYRLvLLTOJMZHzxakOfRAHvNTt();
              puVar7 = (undefined4 *)thunk_MwhHq(0x10);
              *puVar7 = uVar6;
              puVar7[1] = param_1;
              puVar7[2] = iVar17;
              puVar7[3] = iVar14 + iVar17;
              iVar14 = imp_pthread_create(auStack_f8,0,FUN_717ffad4,puVar7);
              if (iVar14 != 0) {
                    /* WARNING: Subroutine does not return */
                thunk_BryazjfoMPqEkZEtKkG_KttlecoGMjr_tAmWbCi
                          (iVar14,s_thread_constructor_failed_70063c8c);
              }
              thunk_dtOmRBwkVHnGtYLYirTdLYLImchz(auStack_f8);
              thunk_uQwrLJbzyUVbHmvQcVNflhV(auStack_f8);
              iVar17 = iVar17 + 1;
            } while (iVar17 < *(int *)(param_1 + 100));
          }
          thunk_QgduklVhdVlmSiqzGQeutncbrNj(iVar9);
          DataMemoryBarrier(0xb);
          if ((*(byte *)(param_1 + 0x130) & 1) == 0) {
            do {
              thunk_cfqspBX_JrdDvACwYrAyrngjQ(param_1 + 0xf8);
              uVar4 = *(uint *)(param_1 + 0xe8);
              thunk_QgduklVhdVlmSiqzGQeutncbrNj(param_1 + 0xf8);
              uStack_fc = uVar4;
              iVar17 = FUN_71886108();
              if (*(uint *)(param_1 + 0x54) < (uint)(iVar17 - *(int *)(param_1 + 0x148))) {
                auStack_e4[0] = *(undefined4 *)(param_1 + 0xe4);
                piVar10 = *(int **)(param_1 + 0xa0);
                auStack_f8[0] = uVar4;
                if (piVar10 == (int *)0x0) goto LAB_717f49a4;
                (**(code **)(*piVar10 + 0x18))(piVar10,auStack_f8,auStack_e4);
                uVar6 = FUN_71886108();
                *(undefined4 *)(param_1 + 0x148) = uVar6;
              }
              FUN_717f6170(param_1,&puStack_dc);
              FUN_717f6550(param_1);
              FUN_717f6f84(param_1,(int *)(param_1 + 0x13c),&uStack_fc,&puStack_dc);
              auStack_f8[0] = 10000000;
              auStack_f8[1] = 0;
              thunk_PZTXYifKVWeMAfhDWPQpfincoMtPAUNNFwTuvXgQaliszcdJKGQksZEhvbzxsZzLzTDnkdfypPojrqTmhvvq_duQDZ
                        (auStack_f8);
              DataMemoryBarrier(0xb);
            } while ((*(byte *)(param_1 + 0x130) & 1) == 0);
          }
          iVar17 = thunk_oqNOvOAfqShVXSMjjGG_NGlzgujEYwsztyucVgcRkJvxnPuZnMqlLMf_DF(&puStack_d8);
          if (iVar17 == 0) {
            thunk_q_WxSZVUhHEiViGbhoJlFEVyRXpUd
                      ((int)&puStack_dc + *(int *)(puStack_dc + -0xc),
                       *(uint *)((int)auStack_cc + *(int *)(puStack_dc + -0xc)) | 4);
          }
          goto LAB_717f494c;
        }
        DataMemoryBarrier(0xb);
        *(undefined1 *)(param_1 + 0x132) = 1;
        DataMemoryBarrier(0xb);
        thunk_QgduklVhdVlmSiqzGQeutncbrNj(iVar9);
      }
      puStack_dc = &DAT_70b13e2c;
      apuStack_7c[0] = &DAT_70b13e40;
      thunk_wxuswyFjhpJiKeiAszVAwjXUfMjeQrLSXBycuYWdZhMLBBnQZzGWA_(&puStack_d8);
      thunk_JJRaJAVqXjXXFJCnfaqgOAFBIBNGhsrbVgKGcfdLdtYkUBLEodGbFu(&puStack_dc,&DAT_70b13e4c);
      thunk_iwGczBGixmUaMAnyYEhJVTzrugfM_AWdBlbjbrNnWwIoyZpDB(apuStack_7c);
      goto LAB_717f4464;
    }
LAB_717f4454:
    DataMemoryBarrier(0xb);
  }
  else {
    DataMemoryBarrier(0xb);
  }
  *(undefined1 *)(param_1 + 0x132) = 1;
  DataMemoryBarrier(0xb);
LAB_717f4464:
  if (_ext___stack_chk_guard == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// Function: FUN_717f729c @ 0x717f729c (size=1924)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_717f729c(int param_1,undefined4 param_2,undefined1 *param_3)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  int *piVar14;
  int *piVar15;
  bool bVar16;
  undefined4 uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  int iStack_e0;
  uint auStack_d8 [4];
  uint uStack_c8;
  undefined4 *puStack_c4;
  byte *pbStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  DataMemoryBarrier(0xb);
  if ((*(byte *)(param_1 + 0x130) & 1) == 0) {
    iVar3 = imp_curl_easy_init();
    if (iVar3 != 0) {
      iVar9 = *(int *)(param_1 + 0x10);
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        iVar9 = param_1 + 9;
      }
      imp_curl_easy_setopt(iVar3,0x2712,iVar9);
      imp_curl_easy_setopt(iVar3,0x40,1);
      imp_curl_easy_setopt(iVar3,0x51,2);
      iVar9 = *(int *)(param_1 + 0x40);
      if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
        iVar9 = param_1 + 0x39;
      }
      imp_curl_easy_setopt(iVar3,0x2751,iVar9);
      imp_curl_easy_setopt(iVar3,0x4e,0xf);
      imp_curl_easy_setopt(iVar3,0x54,3);
      imp_curl_easy_setopt(iVar3,0x2776,&DAT_70064a63);
      imp_curl_easy_setopt(iVar3,0x62,*(undefined4 *)(param_1 + 0x5c));
      piVar14 = *(int **)(param_1 + 0x68);
      if (piVar14 == (int *)(param_1 + 0x6c)) {
        uStack_ec = 0;
      }
      else {
        uStack_ec = 0;
        do {
          bVar1 = *(byte *)(piVar14 + 4);
          uVar10 = piVar14[5];
          if ((bVar1 & 1) == 0) {
            uVar10 = (uint)(bVar1 >> 1);
          }
          puVar13 = (undefined4 *)(uVar10 + 2);
          if ((undefined4 *)0xfffffff7 < puVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_712f6c1c(&uStack_c8);
          }
          if (puVar13 < (undefined4 *)0xb) {
            pbStack_c0 = (byte *)0x0;
            puStack_c4 = (undefined4 *)0x0;
            uStack_c8 = (uint)(byte)((char)puVar13 * '\x02');
            pbVar11 = (byte *)((uint)&uStack_c8 | 1);
            if (uVar10 != 0) goto LAB_717f743c;
          }
          else {
            pbVar11 = (byte *)thunk_MwhHq(((uint)puVar13 | 7) + 1);
            uStack_c8 = ((uint)puVar13 | 7) + 2;
            puStack_c4 = puVar13;
            pbStack_c0 = pbVar11;
LAB_717f743c:
            iVar9 = piVar14[6];
            if ((bVar1 & 1) == 0) {
              iVar9 = (int)piVar14 + 0x11;
            }
            imp___aeabi_memmove(pbVar11,iVar9,uVar10);
          }
          pbVar11 = pbVar11 + uVar10;
          pbVar11[0] = 0x3a;
          pbVar11[1] = 0x20;
          pbVar11[2] = 0;
          uVar10 = piVar14[8];
          iVar9 = piVar14[9];
          if ((*(byte *)(piVar14 + 7) & 1) == 0) {
            uVar10 = (uint)(*(byte *)(piVar14 + 7) >> 1);
            iVar9 = (int)piVar14 + 0x1d;
          }
          puVar4 = (uint *)thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
                                     (&uStack_c8,iVar9,uVar10);
          uStack_b0 = *puVar4;
          uStack_ac = puVar4[1];
          uStack_a8 = puVar4[2];
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4[2] = 0;
          uVar10 = uStack_a8;
          if ((uStack_b0 & 1) == 0) {
            uVar10 = (uint)&uStack_b0 | 1;
          }
          uStack_ec = imp_curl_slist_append(uStack_ec,uVar10);
          if ((uStack_b0 & 1) != 0) {
            thunk_qNQrlu(uStack_a8);
          }
          if ((uStack_c8 & 1) != 0) {
            thunk_qNQrlu(pbStack_c0);
          }
          piVar2 = (int *)piVar14[1];
          piVar15 = piVar14;
          if ((int *)piVar14[1] == (int *)0x0) {
            do {
              piVar14 = (int *)piVar15[2];
              bVar16 = (int *)*piVar14 != piVar15;
              piVar15 = piVar14;
            } while (bVar16);
          }
          else {
            do {
              piVar14 = piVar2;
              piVar2 = (int *)*piVar14;
            } while ((int *)*piVar14 != (int *)0x0);
          }
        } while (piVar14 != (int *)(param_1 + 0x6c));
      }
      imp_curl_easy_setopt(iVar3,0x2727,uStack_ec);
      iVar9 = *(int *)(param_1 + 0x4c);
      if ((*(byte *)(param_1 + 0x44) & 1) == 0) {
        iVar9 = param_1 + 0x45;
      }
      uVar5 = imp_curl_slist_append(0,iVar9);
      imp_curl_easy_setopt(iVar3,0x27db);
      DataMemoryBarrier(0xb);
      if ((*(byte *)(param_1 + 0x130) & 1) == 0) {
        pbVar11 = (byte *)(param_1 + 0x130);
        iVar9 = param_1 + 0xf4;
        piVar14 = (int *)(param_1 + 0x134);
        do {
          thunk_cfqspBX_JrdDvACwYrAyrngjQ(iVar9);
          uVar10 = *(uint *)(param_1 + 0xec);
          if (*(uint *)(param_1 + 0xe4) <= uVar10) {
            thunk_QgduklVhdVlmSiqzGQeutncbrNj(iVar9);
            break;
          }
          *(uint *)(param_1 + 0xec) = *(int *)(param_1 + 0x5c) + uVar10;
          thunk_QgduklVhdVlmSiqzGQeutncbrNj(iVar9);
          do {
            uVar6 = *(int *)(param_1 + 0x5c) + uVar10;
            uVar8 = *(uint *)(param_1 + 0xe4);
            if (uVar6 < *(uint *)(param_1 + 0xe4)) {
              uVar8 = uVar6;
            }
            FUN_717f8274(&uStack_b0);
            uVar12 = *(undefined4 *)(param_1 + 0x5c);
            uVar6 = thunk_rMLVpBatktRctmEtzNK(uVar12,&DAT_7009c3d9);
            if (uVar6 == 0) {
              pbVar11 = (byte *)thunk_MwhHq(0x18);
              puStack_c4 = (undefined4 *)0x14;
              uStack_c8 = 0x19;
              pbStack_c0 = pbVar11;
              imp___aeabi_memcpy(pbVar11,s_Buffer_not_allocated_70075c38,0x14);
              pbVar11[0x14] = 0;
              piVar14 = *(int **)(param_1 + 0xd0);
              if (piVar14 == (int *)0x0) goto LAB_717f7a1c;
              (**(code **)(*piVar14 + 0x18))(piVar14,&uStack_c8);
              if ((uStack_c8 & 1) != 0) {
                thunk_qNQrlu(pbStack_c0);
              }
              imp_curl_slist_free_all(uStack_ec);
              imp_curl_slist_free_all(uVar5);
              imp_curl_easy_cleanup(iVar3);
              DataMemoryBarrier(0xb);
              *param_3 = 1;
              goto LAB_717f7590;
            }
            puStack_c4 = &uStack_b4;
            uStack_b4 = 0;
            auStack_d8[2] = 0;
            auStack_d8[1] = 0;
            auStack_d8[0] = 0;
            uStack_c8 = uVar6;
            pbStack_c0 = pbVar11;
            uStack_bc = uVar12;
            imp_curl_easy_setopt(iVar3,0x4e2b,FUN_717f8304);
            imp_curl_easy_setopt(iVar3,0x2711,&uStack_c8);
            imp_curl_easy_setopt(iVar3,0x2717,&uStack_b0);
            imp_curl_easy_setopt(iVar3,0x4e6f,FUN_717f83a8);
            imp_curl_easy_setopt(iVar3,0x272d,auStack_d8);
            imp_curl_easy_setopt(iVar3,0x4e58,&LAB_717f8738);
            imp_curl_easy_setopt(iVar3,0x2749,pbVar11);
            imp_curl_easy_setopt(iVar3,0x2b,0);
            iVar7 = imp_curl_easy_perform(iVar3);
            DataMemoryBarrier(0xb);
            if ((*pbVar11 & 1) == 0) {
              if (iVar7 == 0) {
                iVar7 = FUN_717f8760(param_1,auStack_d8);
                if (iVar7 == 0) {
                  thunk_dGrRHE(uVar6);
                  imp_curl_slist_free_all(uStack_ec);
                  imp_curl_slist_free_all(uVar5);
                  imp_curl_easy_cleanup(iVar3);
                  DataMemoryBarrier(0xb);
                  iVar7 = 1;
                  *param_3 = 1;
                  DataMemoryBarrier(0xb);
                }
                else {
                  uStack_e8 = uVar6;
                  uStack_e4 = uVar10;
                  iStack_e0 = uVar8 - uVar10;
                  FUN_717f8b24(param_1,&uStack_e8);
                  thunk_cfqspBX_JrdDvACwYrAyrngjQ(param_1 + 0xf8);
                  *(uint *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + (uVar8 - uVar10);
                  thunk_QgduklVhdVlmSiqzGQeutncbrNj(param_1 + 0xf8);
                  iVar7 = 0;
                }
              }
              else {
                thunk_dGrRHE(uVar6);
                DataMemoryBarrier(0xb);
                do {
                  bVar16 = (bool)hasExclusiveAccess(piVar14);
                } while (!bVar16);
                *piVar14 = *piVar14 + 1;
                DataMemoryBarrier(0xb);
                DataMemoryBarrier(0xb);
                if ((*pbVar11 & 1) == 0) {
                  uStack_e4 = 0;
                  uStack_e8 = 200000000;
                  thunk_PZTXYifKVWeMAfhDWPQpfincoMtPAUNNFwTuvXgQaliszcdJKGQksZEhvbzxsZzLzTDnkdfypPojrqTmhvvq_duQDZ
                            (&uStack_e8);
                  iVar7 = 6;
                }
                else {
                  imp_curl_slist_free_all(uStack_ec);
                  imp_curl_slist_free_all(uVar5);
                  imp_curl_easy_cleanup(iVar3);
                  DataMemoryBarrier(0xb);
                  iVar7 = 1;
                  *param_3 = 1;
                  DataMemoryBarrier(0xb);
                }
              }
            }
            else {
              thunk_dGrRHE(uVar6);
              imp_curl_slist_free_all(uStack_ec);
              imp_curl_slist_free_all(uVar5);
              imp_curl_easy_cleanup(iVar3);
              DataMemoryBarrier(0xb);
              iVar7 = 1;
              *param_3 = 1;
              DataMemoryBarrier(0xb);
            }
            if ((auStack_d8[0] & 1) != 0) {
              thunk_qNQrlu(auStack_d8[2]);
            }
          } while (iVar7 == 6);
          if (iVar7 != 0) goto LAB_717f7594;
          DataMemoryBarrier(0xb);
        } while ((*pbVar11 & 1) == 0);
      }
      imp_curl_slist_free_all(uStack_ec);
      imp_curl_slist_free_all(uVar5);
      imp_curl_easy_cleanup(iVar3);
      DataMemoryBarrier(0xb);
      *param_3 = 1;
      goto LAB_717f7590;
    }
    uVar10 = thunk_MwhHq(0x20);
    uStack_ac = 0x19;
    uStack_b0 = 0x21;
    uStack_a8 = uVar10;
    imp___aeabi_memcpy(uVar10,s_CURL_init_error_in_thread_700759e0,0x19);
    *(undefined1 *)(uVar10 + 0x19) = 0;
    piVar14 = *(int **)(param_1 + 0xd0);
    if (piVar14 == (int *)0x0) {
LAB_717f7a1c:
                    /* WARNING: Subroutine does not return */
      FUN_71539164();
    }
    (**(code **)(*piVar14 + 0x18))(piVar14,&uStack_b0);
    if ((uStack_b0 & 1) != 0) {
      thunk_qNQrlu(uStack_a8);
    }
  }
  DataMemoryBarrier(0xb);
  *param_3 = 1;
LAB_717f7590:
  DataMemoryBarrier(0xb);
LAB_717f7594:
  if (_ext___stack_chk_guard != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail();
  }
  return;
}


// Function: FUN_71966010 @ 0x71966010 (size=440)

char * FUN_71966010(undefined4 param_1)

{
  char *pcVar1;
  
  pcVar1 = s_No_error_detected_70062261;
  switch(param_1) {
  case 0:
    goto switchD_7196602c_caseD_0;
  case 1:
    return s_Error__generic__7006af2c;
  default:
    pcVar1 = s_Unspecified_error_code_700646fa;
switchD_7196602c_caseD_0:
    return pcVar1;
  case 10:
    return s_Unknown_frame_descriptor_7006d070;
  case 0xc:
    return s_Version_not_supported_7006f754;
  case 0xe:
    return s_Unsupported_frame_parameter_700701bb;
  case 0x10:
    return s_Frame_requires_too_much_memory_f_7006f76a;
  case 0x14:
    return s_Data_corruption_detected_7006d7a9;
  case 0x16:
    return s_Restored_data_doesn_t_match_chec_70061a4e;
  case 0x18:
    return s_Header_of_Literals__block_doesn__70065db0;
  case 0x1e:
    return s_Dictionary_is_corrupted_700654a5;
  case 0x20:
    return s_Dictionary_mismatch_70071a7b;
  case 0x22:
    return s_Cannot_create_Dictionary_from_pr_70063eec;
  case 0x28:
    return s_Unsupported_parameter_700701d7;
  case 0x29:
    return s_Unsupported_combination_of_param_70065def;
  case 0x2a:
    return s_Parameter_is_out_of_bound_70069c52;
  case 0x2c:
    return s_tableLog_requires_too_much_memor_700722db;
  case 0x2e:
    return s_Unsupported_max_Symbol_Value___t_700711dc;
  case 0x30:
    return s_Specified_maxSymbolValue_is_too_s_700629c5;
  case 0x32:
    return s_pledged_buffer_stability_conditi_70065e15;
  case 0x3c:
    return s_Operation_not_authorized_at_curr_70063eb7;
  case 0x3e:
    return s_Context_should_be_init_first_70061a73;
  case 0x40:
    return s_Allocation_error___not_enough_me_700665da;
  case 0x42:
    return s_workSpace_buffer_is_not_large_en_7006f796;
  case 0x46:
    return s_Destination_buffer_is_too_small_70070a70;
  case 0x48:
    return s_Src_size_is_incorrect_70066dea;
  case 0x4a:
    return s_Operation_on_NULL_destination_bu_7006ef29;
  case 0x50:
    return s_Operation_made_no_progress_over_m_70063499;
  case 0x52:
    return s_Operation_made_no_progress_over_m_7006e628;
  case 100:
    return s_Frame_index_is_too_large_700665ff;
  case 0x66:
    return s_An_I_O_error_occurred_when_readi_70065e49;
  case 0x68:
    return s_Destination_buffer_is_wrong_7006d089;
  case 0x69:
    return s_Source_buffer_is_wrong_7006f7bb;
  case 0x6a:
    return s_Block_level_external_sequence_pr_70061a90;
  case 0x6b:
    return s_External_sequences_are_not_valid_7006d0a5;
  }
}


// Function: bZBcFiHvaJmXENpjJuSFSAXPx_kNjqm_PUFfxIDEax @ 0x71a4fd00 (size=132)

char * bZBcFiHvaJmXENpjJuSFSAXPx_kNjqm_PUFfxIDEax(int param_1)

{
  switch(param_1) {
  case -899:
    return s_ErrorDisconnected_700680df;
  case -0x382:
    return s_ErrorIllegalArgument_70065f8d;
  case -0x381:
  case -0x37e:
  case -0x37d:
  case -0x37b:
  case -0x36f:
  case -0x36e:
  case -0x36d:
  case -0x36c:
  case -0x36b:
  case -0x36a:
  case -0x369:
  case -0x368:
  case -0x367:
  case -0x366:
    goto switchD_71a4fd0c_caseD_fffffc7f;
  case -0x380:
    return s_ErrorInternal_7006f8b9;
  case -0x37f:
    return s_ErrorInvalidState_7006b9d1;
  case -0x37c:
    return s_ErrorInvalidHandle_70064e47;
  case -0x37a:
    return s_ErrorUnimplemented_70071276;
  case -0x379:
    return s_ErrorUnavailable_7006d29c;
  case -0x378:
    return s_ErrorNoFreeHandles_70069e03;
  case -0x377:
    return s_ErrorNoMemory_7006a519;
  case -0x376:
    return s_ErrorNull_70066f2b;
  case -0x375:
    return s_ErrorTimeout_700702a3;
  case -0x374:
    return s_ErrorWouldBlock_700635b7;
  case -0x373:
    return s_ErrorInvalidFormat_7006dee2;
  case -0x372:
    return s_ErrorOutOfRange_7006c13f;
  case -0x371:
    return s_ErrorNoService_700647f0;
  case -0x370:
    return s_ErrorInvalidRate_70067857;
  case -0x365:
    return s_ErrorClosed_70070c7f;
  default:
    if (param_1 == 0) {
      return &DAT_70065f8a;
    }
switchD_71a4fd0c_caseD_fffffc7f:
    return s_Unrecognized_result_7006150e;
  }
}


// Function: ImwUixcgtYyBAPH_pGvimAdBCVSNWwDqAYepmwjSTBBCDwjvSfJyzPblgHHSuzrj @ 0x71a5241c (size=20)

char * ImwUixcgtYyBAPH_pGvimAdBCVSNWwDqAYepmwjSTBBCDwjvSfJyzPblgHHSuzrj(uint param_1)

{
  if (param_1 < 6) {
    return *(char **)(&DAT_70b12350 + param_1 * 4);
  }
  return s_Unrecognized_sample_rate_convers_7006d2f6;
}


// Function: RARgcRQhyAgTJvkioUkExkvwdfLDZckzcXgARtIqJnOOzyjxP @ 0x71a647e0 (size=6)

char * RARgcRQhyAgTJvkioUkExkvwdfLDZckzcXgARtIqJnOOzyjxP(void)

{
  return s_SampleRateConverter_70069ed4;
}


// Function: gJliSjNJCqyoHVbopwNuQyswewfUrHpmfzFnDTmsCBjuHf @ 0x71a9fae8 (size=216)

undefined4
gJliSjNJCqyoHVbopwNuQyswewfUrHpmfzFnDTmsCBjuHf
          (int param_1,undefined4 param_2,int param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(iVar1 + 0x20) != param_3) {
                    /* WARNING: Subroutine does not return */
    thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
              (s_____webrtc_apm_src_webrtc_common_70070614,0x34,
               s_source_length____resampler__>req_70067b43,&DAT_70095f5e,param_3,
               *(int *)(iVar1 + 0x20));
  }
  uVar3 = *(uint *)(param_1 + 0x14);
  if (uVar3 <= param_5) {
    *(int *)(param_1 + 0x1c) = param_3;
    *(undefined4 *)(param_1 + 0xc) = param_2;
    if (*(char *)(param_1 + 0x18) != '\0') {
      uVar2 = thunk_HTFydJHjHyDvHycBJlOoyuMHFr_OIAyGEK_lch();
      thunk_bczJTiwxYyWBoMBboyhCyiitmSvPJqWEHfKkGx(iVar1,uVar2,param_4);
      iVar1 = *(int *)(param_1 + 4);
      uVar3 = *(uint *)(param_1 + 0x14);
    }
    thunk_bczJTiwxYyWBoMBboyhCyiitmSvPJqWEHfKkGx(iVar1,uVar3,param_4);
    *(undefined4 *)(param_1 + 0xc) = 0;
    return *(undefined4 *)(param_1 + 0x14);
  }
                    /* WARNING: Subroutine does not return */
  thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
            (s_____webrtc_apm_src_webrtc_common_70070614,0x35,
             s_destination_capacity_>__destinat_7006387c,&DAT_70095f5e,param_5,uVar3);
}


// Function: ZjTmaqTgCbFVkevrpvHRqVYpuUGplBXnaJvCp @ 0x71a9fbd8 (size=308)

void ZjTmaqTgCbFVkevrpvHRqVYpuUGplBXnaJvCp(int param_1,uint param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  short *psVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint in_fpscr;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  
  if (*(uint *)(param_1 + 0x1c) != param_2) {
                    /* WARNING: Subroutine does not return */
    thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
              (s_____webrtc_apm_src_webrtc_common_70070614,0x53,
               s_source_available_____frames_70066841,&DAT_70095f5e,*(uint *)(param_1 + 0x1c),
               param_2);
  }
  if (*(char *)(param_1 + 0x18) != '\0') {
    imp___aeabi_memclr4(param_3,param_2 << 2);
    *(undefined1 *)(param_1 + 0x18) = 0;
    return;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    imp___aeabi_memcpy4(param_3,*(int *)(param_1 + 0xc),param_2 << 2);
    uVar5 = *(uint *)(param_1 + 0x1c);
LAB_71a9fc40:
    *(uint *)(param_1 + 0x1c) = uVar5 - param_2;
    return;
  }
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return;
  }
  puVar7 = *(undefined8 **)(param_1 + 0x10);
  uVar1 = 0;
  if (3 < param_2) {
    uVar1 = param_2 & 0xfffffffc;
    puVar2 = param_3;
    uVar5 = uVar1;
    puVar6 = puVar7;
    do {
      uVar9 = *puVar6;
      puVar6 = puVar6 + 1;
      uVar5 = uVar5 - 4;
      auVar10 = VectorCopyLong(uVar9,2,0);
      auVar10 = FixedToFP(auVar10,0,0,0,0x20);
      *puVar2 = auVar10._0_8_;
      puVar2[1] = auVar10._8_8_;
      puVar2 = puVar2 + 2;
    } while (uVar5 != 0);
    uVar5 = param_2;
    if (uVar1 == param_2) goto LAB_71a9fc40;
  }
  puVar4 = (undefined4 *)((int)param_3 + uVar1 * 4);
  psVar3 = (short *)((int)puVar7 + uVar1 * 2);
  do {
    uVar1 = uVar1 + 1;
    uVar8 = VectorSignedToFloat((int)*psVar3,(byte)(in_fpscr >> 0x16) & 3);
    *puVar4 = uVar8;
    puVar4 = puVar4 + 1;
    psVar3 = psVar3 + 1;
  } while (param_2 != uVar1);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


// Function: GuPmsdxezbEkgrrQMfkBYdGXlVYXuBm_ITpnEuGlbQBIxZQhzaRchtjwRqxUsROoJUWpNue_TsHdxsgTlRaQDaJ @ 0x71aa9060 (size=2356)

undefined4 *
GuPmsdxezbEkgrrQMfkBYdGXlVYXuBm_ITpnEuGlbQBIxZQhzaRchtjwRqxUsROoJUWpNue_TsHdxsgTlRaQDaJ
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
          undefined4 param_6)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  undefined4 uVar13;
  int *piVar14;
  int iVar15;
  uint uVar16;
  undefined4 uStack_260;
  undefined4 *puStack_25c;
  int *piStack_258;
  int *piStack_234;
  undefined4 *puStack_22c;
  int iStack_224;
  int iStack_220;
  int iStack_21c;
  int *piStack_218;
  int *piStack_214;
  int *piStack_210;
  int *piStack_20c;
  int *piStack_208;
  int *piStack_204;
  
  *param_1 = &DAT_70b13364;
  thunk_HzYtWQbJePtdpWJoIHHpOUf_(param_1 + 1);
  thunk_HzYtWQbJePtdpWJoIHHpOUf_(param_1 + 3);
  param_1[5] = 0;
  uVar2 = thunk_MwhHq(1);
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(&DAT_7120486c);
  } while (!bVar1);
  DataMemoryBarrier(0xb);
  DAT_7120486c = DAT_7120486c + 1;
  thunk_dweKWzJgHffIolIwVpNgT_OQMpPie(uVar2);
  param_1[6] = uVar2;
  thunk_TXWDPeGRgRHQNAwpnMKehohlaD_CnrYaoplqIuZWZIXZpflnPathE(param_1 + 7,param_2);
  param_1[0x84] = param_6;
  param_1[0x80] = param_4;
  param_1[0x82] = param_5;
  param_1[0x81] = param_4 / 16000;
  thunk_TXWDPeGRgRHQNAwpnMKehohlaD_CnrYaoplqIuZWZIXZpflnPathE(&piStack_20c,param_2);
  thunk_NhMImtdmoAvkhOhqUKLqRUPqTBryoGKzBaKmUthrGKTzIUoxWUpEpNRwQfYmpfgewpXONIRLxObVxAJcAVGvW
            (param_1 + 0x85,&piStack_20c,param_3,param_1[0x82]);
  iVar3 = param_1[0x178];
  thunk_MKXVTPIjygcugHbgsBvpcjsEYzZuFITtiKkBeOqEwjWydfU
            (param_1 + 0x17a,*(undefined1 *)(iVar3 + 0x1d4),param_1[0x82],
             *(undefined4 *)(iVar3 + 0x1d8),*(undefined4 *)(iVar3 + 0x1dc),
             *(undefined4 *)(iVar3 + 0x1e0));
  piVar7 = param_1 + 0x186;
  *piVar7 = 0;
  thunk_lGluONEecqgKhtEOWAxbXbQQXMSl(param_1 + 0x187,param_1[0x81],param_1[0x84]);
  thunk_FAiqRpguD_WjGYHrbVnYvSyydwowk(param_1 + 0x18c,param_1[0x81],param_1[0x84]);
  param_1[0x191] = 0;
  uVar13 = param_1[0x81];
  uVar2 = param_1[0x82];
  iStack_224 = thunk_MwhHq(0x280);
  iVar3 = iStack_224 + 0x280;
  iStack_21c = iVar3;
  imp___aeabi_memclr4(iStack_224,0x280);
  iStack_220 = iVar3;
  FUN_71a7706c(&piStack_218,uVar2,&iStack_224);
  FUN_71aaef7c(&piStack_20c,uVar13,&piStack_218);
  param_1[0x192] = param_1[0x81];
  *(undefined8 *)(param_1 + 0x194) = 0xa0;
  *(undefined8 *)(param_1 + 0x196) = 0;
  param_1[0x193] = param_1[0x82];
  FUN_71aafe18(param_1 + 0x198,100,&piStack_20c);
  piVar12 = piStack_20c;
  if (piStack_20c != (int *)0x0) {
    while (piVar9 = piStack_208, piVar9 != piVar12) {
      piVar14 = piVar9 + -3;
      piVar10 = (int *)*piVar14;
      piStack_208 = piVar14;
      if (piVar10 != (int *)0x0) {
        piVar8 = (int *)piVar9[-2];
        piVar4 = piVar10;
        if (piVar8 != piVar10) {
          do {
            piVar4 = piVar8 + -3;
            if (*piVar4 != 0) {
              piVar8[-2] = *piVar4;
              thunk_qNQrlu();
            }
            piVar8 = piVar4;
          } while (piVar4 != piVar10);
          piVar4 = (int *)*piVar14;
        }
        piVar9[-2] = (int)piVar10;
        thunk_qNQrlu(piVar4);
      }
    }
    piStack_208 = piVar12;
    thunk_qNQrlu(piStack_20c);
  }
  piVar12 = piStack_218;
  if (piStack_218 != (int *)0x0) {
    while (piVar9 = piStack_214, piVar9 != piVar12) {
      piStack_214 = piVar9 + -3;
      if (*piStack_214 != 0) {
        piVar9[-2] = *piStack_214;
        thunk_qNQrlu();
      }
    }
    piStack_214 = piVar12;
    thunk_qNQrlu(piStack_218);
  }
  if (iStack_224 != 0) {
    iStack_220 = iStack_224;
    thunk_qNQrlu();
  }
  uVar2 = param_1[0x81];
  piVar12 = (int *)param_1[0x82];
  param_1[0x19b] = 0;
  piStack_218 = (int *)thunk_MwhHq(0x280);
  piVar9 = piStack_218 + 0xa0;
  piStack_210 = piVar9;
  imp___aeabi_memclr4(piStack_218,0x280);
  piStack_214 = piVar9;
  FUN_71a7706c(&piStack_20c,piVar12,&piStack_218);
  FUN_71aaef7c(param_1 + 0x19c,uVar2,&piStack_20c);
  piVar9 = piStack_20c;
  piVar10 = piStack_208;
  if (piStack_20c != (int *)0x0) {
    while (piVar14 = piVar10, piVar14 != piVar9) {
      piVar12 = piVar14 + -3;
      piVar10 = piVar12;
      if (*piVar12 != 0) {
        piVar14[-2] = *piVar12;
        thunk_qNQrlu();
      }
    }
    piStack_208 = piVar9;
    thunk_qNQrlu(piStack_20c);
  }
  if (piStack_218 != (int *)0x0) {
    piStack_214 = piStack_218;
    thunk_qNQrlu();
  }
  piVar9 = param_1 + 0x1a2;
  *piVar9 = 0;
  iVar15 = param_1[0x81];
  *(undefined1 *)(param_1 + 0x19f) = 0;
  param_1[0x1a3] = 0;
  iVar3 = param_1[0x82] * iVar15;
  param_1[0x1a4] = 0;
  param_1[0x1a0] = iVar15;
  param_1[0x1a1] = param_1[0x82];
  uVar11 = iVar3 * 0x40;
  if (uVar11 != 0) {
    if (uVar11 < 0x40000000) {
      piVar12 = (int *)(iVar3 * 0x100);
      iVar5 = thunk_MwhHq(piVar12);
      iVar3 = iVar5 + iVar3 * 0x100;
      param_1[0x1a4] = iVar3;
      param_1[0x1a2] = iVar5;
      imp___aeabi_memclr4(iVar5,piVar12);
      param_1[0x1a3] = iVar3;
      goto LAB_71aa9464;
    }
    FUN_71a0103c(piVar9);
LAB_71aa989c:
    FUN_71a0103c(piStack_258);
LAB_71aa98a4:
    FUN_71a9f56c(&piStack_20c);
LAB_71aa98ac:
    FUN_71a0103c(piVar12);
LAB_71aa98b4:
    FUN_71a9f56c(&piStack_218);
    FUN_71aaf54c(uVar11);
    FUN_71a9f4b4(uStack_260);
    FUN_71a9f4b4(puStack_22c);
    FUN_71a9f4b4(puStack_25c);
    if (*piStack_258 != 0) {
      param_1[0x1a9] = *piStack_258;
      thunk_qNQrlu();
    }
    FUN_71aaf4b8(piStack_234);
    if (*piVar9 != 0) {
      param_1[0x1a3] = *piVar9;
      thunk_qNQrlu();
    }
    FUN_71aaf3a8(param_1 + 0x19c);
    piVar12 = (int *)param_1[0x19b];
    param_1[0x19b] = 0;
    if (piVar12 != (int *)0x0) {
      (**(code **)(*piVar12 + 4))();
    }
    piStack_20c = param_1 + 0x198;
    FUN_71aaf874(&piStack_20c);
    FUN_71aaf5d8(param_1 + 0x191);
    thunk_BqRzmalcICGrikdbwOgPVRKmkouJ(param_1 + 0x18c);
    thunk_pIfiSaBV_mNZoZDNOdRGRymboDI(param_1 + 0x187);
    FUN_71aaf664(piVar7);
    thunk_PaZuWhVugKbNGmPVRoCB_YLgydZarEqyfELcXgTJqrv(param_1 + 0x17a);
    FUN_71a76530(param_1 + 6);
    iVar3 = param_1[5];
    param_1[5] = 0;
    if (iVar3 != 0) {
      thunk_QIWkYKuVQSW_mofJjEZPNNlieopawfStNFvrHiLWcoGW(iVar3);
      thunk_qNQrlu(iVar3);
    }
                    /* WARNING: Subroutine does not return */
    thunk_NAUpeWJSovvMoxKm_();
  }
LAB_71aa9464:
  piStack_234 = param_1 + 0x1a5;
  *piStack_234 = 0;
  uVar16 = param_1[0x84];
  param_1[0x1a9] = 0;
  param_1[0x1aa] = 0;
  iVar3 = uVar16 * iVar15;
  param_1[0x1a6] = iVar15;
  param_1[0x1a7] = uVar16;
  piStack_258 = param_1 + 0x1a8;
  *piStack_258 = 0;
  uVar11 = iVar3 * 0x40;
  if (uVar11 != 0) {
    if (0x3fffffff < uVar11) goto LAB_71aa989c;
    piVar12 = (int *)(iVar3 * 0x100);
    iVar5 = thunk_MwhHq(piVar12);
    uVar11 = iVar5 + iVar3 * 0x100;
    param_1[0x1aa] = uVar11;
    param_1[0x1a8] = iVar5;
    imp___aeabi_memclr4(iVar5,piVar12);
    param_1[0x1a9] = uVar11;
  }
  puStack_25c = param_1 + 0x1ab;
  *puStack_25c = 0;
  param_1[0x1ac] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[0x1ad] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[0x1ae] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  param_1[0x1b0] = 0;
  param_1[0x1af] = 0;
  piStack_204 = (int *)0x0;
  piStack_208 = (int *)0x0;
  piStack_20c = (int *)0x0;
  puStack_22c = param_1 + 0x1ae;
  if (uVar16 != 0) {
    if (0x1fffffff < uVar16) goto LAB_71aa98a4;
    piVar12 = (int *)thunk_MwhHq(uVar16 * 8);
    piStack_204 = piVar12 + uVar16 * 2;
    piStack_20c = piVar12;
    imp___aeabi_memclr4(piVar12,uVar16 * 8);
    piStack_208 = piVar12 + uVar16 * 2;
  }
  uStack_260 = FUN_71a9f1cc(param_1 + 0x1b1,iVar15,&piStack_20c);
  if (piStack_20c != (int *)0x0) {
    piStack_208 = piStack_20c;
    thunk_qNQrlu();
  }
  piVar12 = param_1 + 0x1b4;
  *piVar12 = 0;
  thunk_VUmjwrPsUILWbdSLiVFUMCaCxfidTGBfZpgWaTQZrZW(param_1 + 0x1b5);
  thunk_VUmjwrPsUILWbdSLiVFUMCaCxfidTGBfZpgWaTQZrZW(param_1 + 0x1b7);
  param_1[0x1b9] = 0;
  param_1[0x1ba] = 0;
  *(undefined2 *)(param_1 + 0x1bb) = 0;
  thunk_KRMIYixtikqFOG_PaiqhBvhaWSUiTCGVEjbyHucr(param_1 + 0x1b5);
  if (*(int *)(param_1[0x178] + 0x1c) != 0) {
    iVar3 = thunk_MwhHq(0x18);
    thunk_OiEPXjYdhoZEYR_HkOfDQmmpBoYWAVxihRt(iVar3,param_1[0x84],param_1[0x81],0xa0,param_1[0xe]);
    iVar15 = *piVar12;
    *piVar12 = iVar3;
    if (iVar15 != 0) {
      thunk_dexshRSROpBPVAL_JkdEFYpKHeaTfWqG();
      thunk_qNQrlu();
    }
  }
  uVar2 = thunk_MwhHq(0x20);
  thunk_IaZMqHf_gaItQunDKEesEVddVwwtCFcRRdEpgvRxwYcnxPiknLvAWibKnpFmXYnOWJqEcngnKFfLwaAERNZbINIYwuMmVapSjCiCpHGyazMAehcTloUnW_huNmgzqKJNnFJbPiikVuUCvxSuynyARJexHUhJuWvo_sGlKQoeuqqWsYMeukKfqehTagoa_pbSWsQqWHIPnlVGfPZGGeO_UeOv
            (uVar2,param_1[6],param_1[0x178],param_1 + 0x192,param_1[0x81],param_1[0x82]);
  iVar3 = param_1[5];
  param_1[5] = uVar2;
  if (iVar3 != 0) {
    thunk_QIWkYKuVQSW_mofJjEZPNNlieopawfStNFvrHiLWcoGW(iVar3);
    thunk_qNQrlu(iVar3);
  }
  if (*(char *)(param_1[0x178] + 0xac) == '\0') goto LAB_71aa982c;
  iVar3 = thunk_MwhHq(0x14);
  thunk_lGluONEecqgKhtEOWAxbXbQQXMSl(iVar3,1,param_1[0x84]);
  iVar15 = *piVar7;
  *piVar7 = iVar3;
  if (iVar15 != 0) {
    thunk_pIfiSaBV_mNZoZDNOdRGRymboDI();
    thunk_qNQrlu();
  }
  puVar6 = (undefined4 *)thunk_MwhHq(0x14);
  uVar16 = param_1[0x84];
  uVar11 = 0;
  piVar12 = puVar6 + 2;
  *piVar12 = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  *puVar6 = 1;
  puVar6[1] = uVar16;
  if (uVar16 * 0x40 != 0) {
    if (0x3fffffff < uVar16 * 0x40) goto LAB_71aa98ac;
    iVar3 = thunk_MwhHq(uVar16 << 8);
    iVar15 = iVar3 + uVar16 * 0x100;
    puVar6[4] = iVar15;
    puVar6[2] = iVar3;
    imp___aeabi_memclr4(iVar3,uVar16 << 8);
    puVar6[3] = iVar15;
  }
  iStack_224 = 0;
  iVar3 = *piStack_234;
  *piStack_234 = (int)puVar6;
  if (iVar3 != 0) {
    if (*(int *)(iVar3 + 8) != 0) {
      *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 8);
      thunk_qNQrlu();
    }
    thunk_qNQrlu(iVar3);
    uVar16 = param_1[0x84];
  }
  piStack_210 = (int *)0x0;
  piStack_214 = (int *)0x0;
  piStack_218 = (int *)0x0;
  if (uVar16 != 0) {
    if (0x1fffffff < uVar16) goto LAB_71aa98b4;
    piVar12 = (int *)thunk_MwhHq(uVar16 * 8);
    piStack_210 = piVar12 + uVar16 * 2;
    piStack_218 = piVar12;
    imp___aeabi_memclr4(piVar12,uVar16 * 8);
    piStack_214 = piVar12 + uVar16 * 2;
  }
  FUN_71a9f1cc(&piStack_20c,1,&piStack_218);
  piVar12 = (int *)*puStack_22c;
  if (piVar12 != (int *)0x0) {
    piVar9 = (int *)param_1[0x1af];
    piVar7 = piVar12;
    if (piVar9 != piVar12) {
      do {
        piVar7 = piVar9 + -3;
        if (*piVar7 != 0) {
          piVar9[-2] = *piVar7;
          thunk_qNQrlu();
        }
        piVar9 = piVar7;
      } while (piVar7 != piVar12);
      piVar7 = (int *)*puStack_22c;
    }
    param_1[0x1af] = piVar12;
    thunk_qNQrlu(piVar7);
    param_1[0x1ae] = 0;
    param_1[0x1af] = 0;
    param_1[0x1b0] = 0;
  }
  param_1[0x1ae] = piStack_20c;
  param_1[0x1af] = piStack_208;
  param_1[0x1b0] = piStack_204;
  piStack_208 = (int *)0x0;
  piStack_204 = (int *)0x0;
  piStack_20c = (int *)0x0;
  if (piStack_218 != (int *)0x0) {
    piStack_214 = piStack_218;
    thunk_qNQrlu();
  }
LAB_71aa982c:
  thunk_mWpzsketRyytqCnUgulPomJccjVtHuiIkxmhWnQI(param_1);
  iVar3 = thunk_GlaqsotmQIxdnufiJlivXIB_zbaynnonqiWUtNDfNyHbTlqdYqiedKD();
  if (iVar3 == 0) {
    thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
              (&DAT_7009606f,s_____webrtc_apm_src_webrtc_module_70070e66,0x18c1,
               s_AEC3_created_with_sample_rate__700672dc,param_1[0x80],
               s_Hz__num_render_channels__7006685d,param_1[0x82],s___num_capture_channels__70070eb1,
               param_1[0x84]);
  }
  return param_1;
}


// Function: s_fzsUWJPuaXczdBUWBhObasxJRBdRxVKeUmXQBDtjcwiVBGsr_pi @ 0x71b192b0 (size=904)

void s_fzsUWJPuaXczdBUWBhObasxJRBdRxVKeUmXQBDtjcwiVBGsr_pi
               (int *param_1,int *param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  int *piVar12;
  undefined4 uStack_24;
  
  uStack_24 = param_3;
  if (param_4 != 16000) {
    piVar6 = param_1 + 7;
    iVar2 = thunk_RVAuHnEAYoTAssxkuGmZqe_TCWqRWPMaiilryNy(piVar6,param_4,16000,1);
    if (iVar2 != 0) {
      uVar4 = thunk_RVAuHnEAYoTAssxkuGmZqe_TCWqRWPMaiilryNy(piVar6,param_4,16000,1);
                    /* WARNING: Subroutine does not return */
      thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
                (s_____webrtc_apm_src_webrtc_module_7006eb86,0x2f,
                 s_resampler__ResetIfNeeded_sample__70063a71,&DAT_70095ef5,uVar4,0);
    }
    thunk_KJpivuy_EdbXuTWrMGsedSRfYULmerpYemN
              (piVar6,param_2,param_3,param_1 + 0x460,0xa0,&uStack_24);
    param_2 = param_1 + 0x460;
  }
  piVar6 = param_1 + 0x450;
  iVar2 = thunk_YTGkYGnIsjHfXqnTJhxKVDXpQFwpeZZzXUbVeVy(*piVar6,param_2,uStack_24);
  if (iVar2 != 0) {
    uVar4 = thunk_YTGkYGnIsjHfXqnTJhxKVDXpQFwpeZZzXUbVeVy(*piVar6,param_2,uStack_24);
                    /* WARNING: Subroutine does not return */
    thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
              (s_____webrtc_apm_src_webrtc_module_7006eb86,0x38,
               s_standalone_vad__>AddAudio_resamp_7006d475,&DAT_70095ef5,uVar4,0);
  }
  piVar12 = param_1 + 0x4b0;
  thunk_Jsfi_tFCLaVUpGedxGXnHBIQQ_mFjFpbQipvdfCWyuoUgGiBcylvWklFbpEIsY
            (param_1 + 0x16,param_2,uStack_24,piVar12);
  uVar5 = param_1[0x4d0];
  uVar1 = param_1[1] - *param_1 >> 3;
  if (uVar1 < uVar5) {
    FUN_71b19c58(param_1,uVar5 - uVar1);
    uVar5 = param_1[0x4d0];
  }
  else if (uVar5 < uVar1) {
    param_1[1] = *param_1 + uVar5 * 8;
  }
  iVar8 = param_1[3];
  iVar2 = param_1[4];
  uVar1 = iVar2 - iVar8 >> 3;
  if (uVar1 < uVar5) {
    FUN_71b19c58(param_1 + 3,uVar5 - uVar1);
    iVar8 = param_1[3];
    iVar2 = param_1[4];
    if (iVar2 != iVar8) {
LAB_71b193dc:
      imp___aeabi_memmove8(iVar8,param_1 + 0x4c8,iVar2 - iVar8);
    }
  }
  else {
    if (uVar5 < uVar1) {
      iVar2 = iVar8 + uVar5 * 8;
      param_1[4] = iVar2;
    }
    if (iVar2 != iVar8) goto LAB_71b193dc;
  }
  if (param_1[0x4d0] == 0) {
    return;
  }
  puVar11 = (undefined8 *)*param_1;
  iVar8 = param_1[1];
  iVar2 = iVar8 - (int)puVar11;
  uVar1 = iVar2 >> 3;
  if ((char)param_1[0x4d1] != '\0') {
    if (0 < (int)uVar1) {
      if (iVar2 == 8) {
        uVar5 = 1;
        puVar3 = puVar11;
      }
      else {
        uVar7 = uVar1 & 0x7ffffffe;
        uVar5 = uVar1 & 1;
        puVar3 = puVar11 + uVar7;
        uVar10 = uVar7;
        do {
          uVar10 = uVar10 - 2;
          *puVar11 = 0x3f847ae147ae147b;
          puVar11[1] = 0x3f847ae147ae147b;
          puVar11 = puVar11 + 2;
        } while (uVar10 != 0);
        if (uVar1 == uVar7) goto LAB_71b19528;
      }
      uVar5 = uVar5 + 1;
      do {
        *(undefined4 *)puVar3 = 0x47ae147b;
        uVar5 = uVar5 - 1;
        *(undefined4 *)((int)puVar3 + 4) = 0x3f847ae1;
        puVar3 = puVar3 + 1;
      } while (1 < uVar5);
    }
    goto LAB_71b19528;
  }
  if (0 < (int)uVar1) {
    puVar3 = puVar11;
    uVar5 = uVar1;
    if (iVar2 != 8) {
      uVar7 = uVar1 & 0x7ffffffe;
      uVar5 = uVar1 & 1;
      puVar3 = puVar11 + uVar7;
      uVar10 = uVar7;
      puVar9 = puVar11;
      do {
        uVar10 = uVar10 - 2;
        *puVar9 = 0x3fe0000000000000;
        puVar9[1] = 0x3fe0000000000000;
        puVar9 = puVar9 + 2;
      } while (uVar10 != 0);
      if (uVar1 == uVar7) goto LAB_71b19494;
    }
    uVar5 = uVar5 + 1;
    do {
      uVar5 = uVar5 - 1;
      *puVar3 = 0x3fe0000000000000;
      puVar3 = puVar3 + 1;
    } while (1 < uVar5);
  }
LAB_71b19494:
  iVar2 = thunk_TccfyTtrffvazwVwGtqEayN_woXkw_TXgJpev_NyTy(*piVar6,puVar11);
  if (iVar2 < 0) {
    uVar4 = thunk_TccfyTtrffvazwVwGtqEayN_woXkw_TXgJpev_NyTy
                      (*piVar6,*param_1,param_1[1] - *param_1 >> 3);
                    /* WARNING: Subroutine does not return */
    thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
              (s_____webrtc_apm_src_webrtc_module_7006eb86,0x4c,
               s_standalone_vad__>GetActivity__ch_70071e64,&DAT_70095ef5,uVar4,0);
  }
  iVar2 = thunk_IKSUJOPFVXrbWxLe_GVANujLjfLWLmIgvPOSuTdFuvploYHXMlgQlkcZEFAGJnmJb
                    (param_1 + 0x452,piVar12);
  if (iVar2 < 0) {
    uVar4 = thunk_IKSUJOPFVXrbWxLe_GVANujLjfLWLmIgvPOSuTdFuvploYHXMlgQlkcZEFAGJnmJb
                      (param_1 + 0x452,piVar12,*param_1);
                    /* WARNING: Subroutine does not return */
    thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
              (s_____webrtc_apm_src_webrtc_module_7006eb86,0x4f,
               s_pitch_based_vad__VoicingProbabil_7006a7a4,&DAT_70095ef5,uVar4,0);
  }
  iVar8 = param_1[1];
LAB_71b19528:
  param_1[6] = (int)(float)*(double *)(iVar8 + -8);
  return;
}


// Function: xfUGTnpZLSJrUjzbOLaQ_JRY_VQKCP @ 0x71b19ef4 (size=1184)

undefined4 xfUGTnpZLSJrUjzbOLaQ_JRY_VQKCP(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iStack_24;
  
  if (param_4 - 3U < 0xfffffffe) {
    iVar1 = thunk_SJCbFLPwsPOxVEwphuNvyMuRSRkYnVHVavoQuLDHUWgATwcdhchtudQ();
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    uVar3 = 0x2ba;
    pcVar4 = s_Reset___called_with_unsupported_c_7006f34f;
    puVar2 = &DAT_70096367;
    param_2 = param_4;
LAB_71b19fa4:
    uVar5 = 0xffffffff;
    thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
              (puVar2,s_____webrtc_apm_src_webrtc_common_70064a02,uVar3,pcVar4,param_2);
switchD_71b1a118_default:
    return uVar5;
  }
  iVar1 = thunk_muSBEa_LSVBkglofvDVWmBwhovYwCzcFQAlkiwwwpKIQLlDd_YKbtJkyblhyudSGjS
                    (param_2,param_3,&iStack_24);
  if (iVar1 != 0) {
    iVar1 = thunk_SJCbFLPwsPOxVEwphuNvyMuRSRkYnVHVavoQuLDHUWgATwcdhchtudQ();
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    uVar3 = 0x2f2;
    pcVar4 = s_Reset___called_with_unsupported_s_70063abc;
    puVar2 = &DAT_7009a85c;
    goto LAB_71b19fa4;
  }
  param_1[0xb] = iStack_24;
  param_1[0xc] = param_4;
  if (*param_1 != 0) {
    imp_free();
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    imp_free();
    param_1[1] = 0;
  }
  if (param_1[2] != 0) {
    imp_free();
    param_1[2] = 0;
  }
  if (param_1[3] != 0) {
    imp_free();
    param_1[3] = 0;
  }
  if (param_1[4] != 0) {
    imp_free();
    param_1[4] = 0;
  }
  iVar1 = param_1[0xd];
  if (iVar1 != 0) {
    thunk_YDGrLkQxfwBAvhRAZxfXBzxB(iVar1);
    thunk_qNQrlu(iVar1);
    param_1[0xd] = 0;
  }
  iVar1 = param_1[0xe];
  if (iVar1 != 0) {
    thunk_YDGrLkQxfwBAvhRAZxfXBzxB(iVar1);
    thunk_qNQrlu(iVar1);
    param_1[0xe] = 0;
  }
  param_1[10] = param_3 / 1000;
  param_1[5] = 0;
  param_1[6] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[7] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[8] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  param_1[9] = param_2 / 1000;
  if (param_1[0xc] == 2) {
    iVar1 = thunk_MwhHq(0x3c);
    thunk_eYwmkhpoNIVmJHiHaVZijDEOCq(iVar1,param_2,param_3,1);
    param_1[0xd] = iVar1;
    iVar1 = thunk_MwhHq(0x3c);
    thunk_eYwmkhpoNIVmJHiHaVZijDEOCq(iVar1,param_2,param_3,1);
    param_1[0xe] = iVar1;
  }
  uVar5 = 0;
  switch(param_1[0xb]) {
  case 1:
  case 0xc:
    iVar1 = imp_calloc(1,0x20);
    *param_1 = iVar1;
    return 0;
  case 2:
    iVar1 = imp_malloc(0x60);
    *param_1 = iVar1;
    thunk_twdSDcHElFyGbReLOCjwKTtqksHyZwPYvyc();
    return 0;
  case 3:
  case 0xe:
    iVar1 = imp_calloc(1,0x20);
    *param_1 = iVar1;
    break;
  case 4:
    iVar1 = imp_calloc(1,0x20);
    *param_1 = iVar1;
    iVar1 = imp_malloc(0x60);
    param_1[1] = iVar1;
    thunk_twdSDcHElFyGbReLOCjwKTtqksHyZwPYvyc();
    return 0;
  case 5:
    iVar1 = imp_calloc(1,0x20);
    *param_1 = iVar1;
    iVar1 = imp_calloc(1,0x20);
    param_1[1] = iVar1;
    iVar1 = imp_malloc(0x60);
    param_1[2] = iVar1;
    thunk_twdSDcHElFyGbReLOCjwKTtqksHyZwPYvyc();
    return 0;
  case 6:
    iVar1 = imp_malloc(0x60);
    *param_1 = iVar1;
    thunk_twdSDcHElFyGbReLOCjwKTtqksHyZwPYvyc();
    break;
  case 7:
    iVar1 = imp_calloc(1,0x20);
    *param_1 = iVar1;
    iVar1 = imp_malloc(0x60);
    param_1[1] = iVar1;
    thunk_vFVujsoBEXAlKIPUVXHJSBGVEsnHIXlGbu();
    return 0;
  case 8:
    iVar1 = imp_malloc(0x60);
    *param_1 = iVar1;
    thunk_vFVujsoBEXAlKIPUVXHJSBGVEsnHIXlGbu();
    return 0;
  case 9:
    iVar1 = imp_malloc(0x40);
    *param_1 = iVar1;
    thunk_NruLUzwMJdqbgNpyHvKSwzEstJwFReQpUQZ();
    return 0;
  case 10:
    iVar1 = imp_calloc(1,0x20);
    *param_1 = iVar1;
    iVar1 = imp_malloc(0x60);
    param_1[1] = iVar1;
    thunk_nQVrapGtMQKQyGIgfGpkYZkeFQIJIHeYdmJ();
    return 0;
  case 0xb:
    iVar1 = imp_calloc(1,0x20);
    *param_1 = iVar1;
    iVar1 = imp_malloc(0x60);
    param_1[1] = iVar1;
    thunk_nQVrapGtMQKQyGIgfGpkYZkeFQIJIHeYdmJ();
    goto LAB_71b1a284;
  case 0xd:
    iVar1 = imp_malloc(0x80);
    *param_1 = iVar1;
    thunk__z_liPzexvVp_PmwOijcLxzMxlaYlqTGSaS();
    return 0;
  case 0xf:
    iVar1 = imp_malloc(0x80);
    *param_1 = iVar1;
    thunk__z_liPzexvVp_PmwOijcLxzMxlaYlqTGSaS();
    break;
  case 0x10:
    iVar1 = imp_malloc(0x80);
    *param_1 = iVar1;
    thunk__z_liPzexvVp_PmwOijcLxzMxlaYlqTGSaS();
    iVar1 = imp_calloc(1,0x20);
    param_1[1] = iVar1;
LAB_71b1a284:
    iVar1 = imp_calloc(1,0x20);
    param_1[2] = iVar1;
    return 0;
  case 0x11:
    iVar1 = imp_calloc(1,0x20);
    *param_1 = iVar1;
    iVar1 = imp_malloc(0x80);
    param_1[1] = iVar1;
    thunk__z_liPzexvVp_PmwOijcLxzMxlaYlqTGSaS();
    return 0;
  case 0x12:
    iVar1 = imp_malloc(0x80);
    *param_1 = iVar1;
    thunk_Nk_syunPjhbI_pfWesuygcfoDTWhPeDZKa();
    break;
  case 0x13:
    iVar1 = imp_malloc(0x80);
    *param_1 = iVar1;
    thunk_Nk_syunPjhbI_pfWesuygcfoDTWhPeDZKa();
    return 0;
  case 0x14:
    iVar1 = imp_malloc(0x60);
    *param_1 = iVar1;
    thunk_nQVrapGtMQKQyGIgfGpkYZkeFQIJIHeYdmJ();
    return 0;
  default:
    goto switchD_71b1a118_default;
  }
  iVar1 = imp_calloc(1,0x20);
  param_1[1] = iVar1;
  return 0;
}


