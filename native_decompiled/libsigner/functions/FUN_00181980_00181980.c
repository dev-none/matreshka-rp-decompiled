// Function: FUN_00181980
// Entry: 00181980

void FUN_00181980(int *param_1,long *param_2,long param_3,long param_4,long *param_5)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long local_b0;
  int local_a4;
  code *local_a0;
  int local_94;
  int local_7c;
  long local_78;
  long local_68;
  
  lVar1 = -0x1636814a9e9e18e1;
  if (param_3 != 0) {
    lVar1 = -0x5d5e8b6061032bf2;
  }
  puVar2 = &DAT_001f6b14;
  lVar3 = 0x7f48089de14c5fd;
  if (param_4 != 0) {
    puVar2 = &DAT_001f6a20;
    lVar3 = -0x520a933c64f9a0c0;
  }
  lVar4 = 0x1226d9cd2f299f4;
LAB_00181adc:
  while (lVar6 = lVar4, lVar4 = lVar6, lVar6 < -0x879a33a672502bc) {
    if (lVar6 < -0x310f88999e3812c5) {
      if (lVar6 < -0x563d61f906d58916) {
        if (lVar6 < -0x5ef8537de8ec3e14) {
          if (lVar6 == -0x7a5dc9856e4ff160) {
            lVar4 = 0x7ba2feed74554acb;
            if (local_78 != 0) {
              lVar4 = 0x1c35eedb7ea63794;
            }
          }
          else if (lVar6 == -0x79dcf8d5b3859beb) {
            lVar4 = 0x38b445adeb969c1a;
            if (*param_5 != 0) {
              lVar4 = -0x1e2ea5283e541066;
            }
          }
          else if (lVar6 == -0x6046af8a2068a551) {
            DAT_001f8158 = 0;
            lVar4 = 0x61f970b1a3e7a392;
          }
        }
        else {
          lVar4 = 0x4b1a635200a18dd8;
          if (lVar6 != -0x5ef8537de8ec3e14) {
            if (lVar6 == -0x5d5e8b6061032bf2) {
              local_68 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
              lVar6 = (**(code **)(*param_2 + 0x78))(param_2);
              lVar4 = 0x3c514debf5be9a52;
              if (lVar6 != 0) {
                lVar4 = -0x227ee41c6235eda;
              }
            }
            else {
              lVar4 = lVar6;
              if (lVar6 == -0x5984237dbb740410) {
                lVar4 = -0x3c37d1222788b91a;
              }
            }
          }
        }
      }
      else if (lVar6 < -0x3c37d1222788b91a) {
        if (lVar6 == -0x520a933c64f9a0c0) {
          local_b0 = (*local_a0)(param_2,param_3,local_78,param_4);
          goto LAB_001826a8;
        }
        lVar4 = -0x563d61f906d58916;
        if ((lVar6 != -0x45903dcd5c05b5b8) && (lVar4 = lVar6, lVar6 == -0x563d61f906d58916)) {
          return;
        }
      }
      else if (lVar6 == -0x3c37d1222788b91a) {
        iVar5 = FUN_001ebe70(0,1,&DAT_001f8158);
        lVar4 = 0x2e18666720b90af0;
        if (iVar5 != 0) {
          lVar4 = 0x5d0a38906032ce2b;
        }
      }
      else {
        if (lVar6 == -0x3b8e10f67e19de2a) {
          local_94 = 0xf;
          goto LAB_0018263c;
        }
        if (lVar6 == -0x337fdf29d99059cc) {
          lVar4 = 0x7b31dafa9b6b24f4;
        }
      }
    }
    else if (lVar6 < -0x1e2ea5283e541066) {
      if (lVar6 < -0x2a7d6674e221420a) {
        if (lVar6 == -0x310f88999e3812c5) {
          DAT_001f6a20 = DAT_001f6a20 ^ 0x97;
          DAT_001f6a21 = DAT_001f6a21 ^ 0x97;
          DAT_001f6a22 = DAT_001f6a22 ^ 0x97;
          DAT_001f6a24 = DAT_001f6a24 ^ 0x97;
          DAT_001f6a25 = DAT_001f6a25 ^ 0x97;
          DAT_001f6a26 = DAT_001f6a26 ^ 0x97;
          DAT_001f6a23 = DAT_001f6a23 ^ 0x97;
          DAT_001f8218 = '\x01';
          lVar4 = 0x17e0f0eeb03eca3b;
        }
        else if (lVar6 == -0x2e98ab7bc2d46088) {
          lVar4 = 0x7b31dafa9b6b24f4;
        }
      }
      else if (lVar6 == -0x2a7d6674e221420a) {
        DAT_001f6b14 = DAT_001f6b14 ^ 0xa7;
        DAT_001f6b15 = DAT_001f6b15 ^ 0xa7;
        DAT_001f6b16 = DAT_001f6b16 ^ 0xa7;
        DAT_001f6b17 = DAT_001f6b17 ^ 0xa7;
        DAT_001f6b18 = DAT_001f6b18 ^ 0xa7;
        DAT_001f8229 = '\x01';
        lVar4 = 0x4993594b6bd8e507;
      }
      else {
        lVar4 = -0xfe0137b861ffa8b;
        if ((lVar6 != -0x28611df36cc030c5) && (lVar4 = lVar6, lVar6 == -0x2709165a9dcc99e1)) {
          lVar4 = -0x6046af8a2068a551;
        }
      }
    }
    else if (lVar6 < -0x1636814a9e9e18e1) {
      lVar4 = 0x4b1a635200a18dd8;
      if (lVar6 != -0x1e2ea5283e541066) {
        if (lVar6 == -0x1b97b775ed91fd66) {
          local_a4 = 0xf;
          goto LAB_00182438;
        }
        lVar4 = lVar6;
        if (lVar6 == -0x19280d6ca6b3de1a) {
          lVar4 = 0x4993594b6bd8e507;
        }
      }
    }
    else if (lVar6 == -0x1636814a9e9e18e1) {
      local_94 = 3;
LAB_0018263c:
      lVar4 = 0x7ba120e71b0b18e5;
    }
    else {
      lVar4 = 0x17e0f0eeb03eca3b;
      if ((lVar6 != -0x14ac15ab08af7192) && (lVar4 = lVar6, lVar6 == -0xfe0137b861ffa8b)) {
        iVar5 = FUN_001ebe70(0,1,&DAT_001f80b4);
        lVar4 = 0x6f5b75fd9f27b631;
        if (iVar5 != 0) {
          lVar4 = -0x28611df36cc030c5;
        }
      }
    }
  }
  if (lVar6 < 0x3c514debf5be9a52) {
    if (lVar6 < 0x17e0f0eeb03eca3b) {
      if (lVar6 < -0x227ee41c6235eda) {
        if (lVar6 == -0x879a33a672502bc) {
          *param_5 = local_b0;
          lVar6 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar4 = -0x79dcf8d5b3859beb;
          if (lVar6 != 0) {
            lVar4 = 0x1d63d6cd77445186;
          }
        }
        else if (lVar6 == -0x5b1692d0c0e42a7) {
          DAT_001f6dc4 = DAT_001f6dc4 ^ 0x81;
          DAT_001f6dc5 = DAT_001f6dc5 ^ 0x81;
          DAT_001f6dc6 = DAT_001f6dc6 ^ 0x81;
          DAT_001f6dc8 = DAT_001f6dc8 ^ 0x81;
          DAT_001f6dc9 = DAT_001f6dc9 ^ 0x81;
          DAT_001f6dca = DAT_001f6dca ^ 0x81;
          DAT_001f6dc7 = DAT_001f6dc7 ^ 0x81;
          DAT_001f8241 = '\x01';
          lVar4 = -0x6046af8a2068a551;
        }
      }
      else if (lVar6 == -0x227ee41c6235eda) {
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        lVar4 = -0x2e98ab7bc2d46088;
        if (local_68 != 0) {
          lVar4 = -0x5ef8537de8ec3e14;
        }
        *param_1 = 0xf;
      }
      else {
        lVar4 = lVar1;
        if ((lVar6 != 0x1226d9cd2f299f4) && (lVar4 = lVar6, lVar6 == 0x7f48089de14c5fd)) {
          local_b0 = (*local_a0)(param_2,param_3,local_78);
LAB_001826a8:
          lVar4 = -0x879a33a672502bc;
        }
      }
      goto LAB_00181adc;
    }
    if (lVar6 < 0x2577a3112115c0b2) {
      if (lVar6 == 0x17e0f0eeb03eca3b) {
        DAT_001f80b4 = 0;
        local_78 = (**(code **)(*param_2 + 0x108))(param_2,local_68,&DAT_001f6dc4,puVar2);
        lVar6 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar4 = -0x7a5dc9856e4ff160;
        if (lVar6 != 0) {
          lVar4 = -0x1b97b775ed91fd66;
        }
      }
      else if (lVar6 == 0x1c35eedb7ea63794) {
        local_a0 = *(code **)(*param_2 + 0x110);
        lVar4 = lVar3;
      }
      else if (lVar6 == 0x1d63d6cd77445186) {
        local_a4 = 0x19;
LAB_00182438:
        lVar4 = 0x6a30992925316589;
      }
      goto LAB_00181adc;
    }
    if (lVar6 == 0x2577a3112115c0b2) {
      *param_1 = local_7c;
      lVar4 = 0x4b1a635200a18dd8;
      goto LAB_00181adc;
    }
    if (lVar6 == 0x2e18666720b90af0) {
      lVar4 = -0x2709165a9dcc99e1;
      if (DAT_001f8241 == '\0') {
        lVar4 = -0x5b1692d0c0e42a7;
      }
      goto LAB_00181adc;
    }
    if (lVar6 != 0x38b445adeb969c1a) goto LAB_00181adc;
    local_7c = 0x19;
  }
  else {
    if (lVar6 < 0x65d04c06f89d5c07) {
      if (lVar6 < 0x514a610f3132a6e0) {
        if (lVar6 == 0x3c514debf5be9a52) {
          lVar4 = -0x3b8e10f67e19de2a;
          if (local_68 != 0) {
            lVar4 = -0x5984237dbb740410;
          }
        }
        else if (lVar6 == 0x4993594b6bd8e507) {
          DAT_001f80f8 = 0;
          lVar4 = -0xfe0137b861ffa8b;
        }
        else if (lVar6 == 0x4b1a635200a18dd8) {
          (**(code **)(*param_2 + 0xb8))(param_2,local_68);
          lVar4 = -0x45903dcd5c05b5b8;
          if (*param_1 != 0) {
            lVar4 = -0x337fdf29d99059cc;
          }
        }
      }
      else {
        lVar4 = 0x61f970b1a3e7a392;
        if (((lVar6 != 0x514a610f3132a6e0) &&
            (lVar4 = -0x3c37d1222788b91a, lVar6 != 0x5d0a38906032ce2b)) &&
           (lVar4 = lVar6, lVar6 == 0x61f970b1a3e7a392)) {
          iVar5 = FUN_001ebe70(0,1,&DAT_001f80f8);
          lVar4 = 0x65d04c06f89d5c07;
          if (iVar5 != 0) {
            lVar4 = 0x514a610f3132a6e0;
          }
        }
      }
      goto LAB_00181adc;
    }
    if (lVar6 < 0x7b31dafa9b6b24f4) {
      if (lVar6 == 0x65d04c06f89d5c07) {
        lVar4 = -0x19280d6ca6b3de1a;
        if (DAT_001f8229 == '\0') {
          lVar4 = -0x2a7d6674e221420a;
        }
        goto LAB_00181adc;
      }
      if (lVar6 != 0x6a30992925316589) {
        if (lVar6 == 0x6f5b75fd9f27b631) {
          lVar4 = -0x14ac15ab08af7192;
          if (DAT_001f8218 == '\0') {
            lVar4 = -0x310f88999e3812c5;
          }
        }
        goto LAB_00181adc;
      }
      (**(code **)(*param_2 + 0x80))(param_2);
      (**(code **)(*param_2 + 0x88))(param_2);
      local_7c = local_a4;
    }
    else {
      if (lVar6 == 0x7b31dafa9b6b24f4) {
        *param_5 = 0;
        lVar4 = -0x563d61f906d58916;
        goto LAB_00181adc;
      }
      if (lVar6 == 0x7ba120e71b0b18e5) {
        *param_1 = local_94;
        lVar4 = 0x7b31dafa9b6b24f4;
        goto LAB_00181adc;
      }
      if (lVar6 != 0x7ba2feed74554acb) goto LAB_00181adc;
      local_7c = 0xf;
    }
  }
  lVar4 = 0x2577a3112115c0b2;
  goto LAB_00181adc;
}


