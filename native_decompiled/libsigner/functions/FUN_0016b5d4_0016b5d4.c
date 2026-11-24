// Function: FUN_0016b5d4
// Entry: 0016b5d4

void FUN_0016b5d4(long *param_1)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  long *__ptr;
  long lVar4;
  long lVar5;
  long unaff_x28;
  void *local_c8;
  long *local_c0;
  long *local_b8;
  void *local_b0;
  void *local_a8;
  void *local_a0;
  void *local_98;
  void *local_90;
  void *local_88;
  void *local_80;
  void *local_78;
  long local_70;
  long *local_68;
  
  lVar1 = -0x6f34bf4e1d5e4855;
  if (param_1 != (long *)0x0) {
    lVar1 = 0xc7ece61dd6dccdb;
  }
  plVar2 = param_1;
  lVar4 = 0x78da00c1073672f8;
LAB_0016b6dc:
  lVar5 = lVar4;
  __ptr = plVar2;
  lVar4 = lVar5;
  plVar2 = __ptr;
  if (lVar5 < -0x131bff79b35c29dd) {
    if (lVar5 < -0x4aefad759856e609) {
      if (lVar5 < -0x5d5069200ce4da5d) {
        if (lVar5 < -0x6f34bf4e1d5e4855) {
          if (lVar5 == -0x7b39a5108254700d) {
            free(local_90);
            *param_1 = 0;
            lVar4 = -0xe7349ac2f124197;
          }
          else if (lVar5 == -0x777cc98cc1a3ebb1) {
            lVar4 = 0x607486c38191eb60;
          }
        }
        else {
          lVar4 = -0x131bff79b35c29dd;
          if ((lVar5 != -0x6f34bf4e1d5e4855) && (lVar4 = lVar5, lVar5 == -0x619244e8ec2e9da7)) {
            lVar4 = -0x50bf1cad8a1a8d16;
          }
        }
        goto LAB_0016b6dc;
      }
      if (lVar5 < -0x50fcc5342e0763b4) {
        if (lVar5 != -0x5d5069200ce4da5d) {
          if (lVar5 == -0x53728b1d363582bc) {
            lVar4 = 0x54b81b2f299a01af;
          }
          goto LAB_0016b6dc;
        }
        local_b8 = param_1 + local_70 * 2 + 0xe;
        local_c8 = (void *)*local_b8;
        bVar3 = local_c8 == (void *)0x0;
        lVar5 = 0x7d1df4375e687419;
        lVar4 = -0x4204899a0680794d;
        unaff_x28 = local_70;
      }
      else {
        if (lVar5 != -0x50fcc5342e0763b4) {
          if (lVar5 == -0x50bf1cad8a1a8d16) {
            local_70 = 0;
            goto LAB_0016bea8;
          }
          if (lVar5 == -0x4c32f7797dcf29d7) {
            free(local_a8);
            param_1[2] = 0;
            lVar4 = -0x3815217b2e4d6c01;
          }
          goto LAB_0016b6dc;
        }
        local_90 = (void *)*param_1;
        bVar3 = local_90 == (void *)0x0;
        lVar4 = 0x4ab165e7b3e59a47;
        lVar5 = -0x7b39a5108254700d;
      }
    }
    else {
      if (lVar5 < -0x36136d0588c18bf9) {
        if (-0x410fd2b5bb50c76d < lVar5) {
          if (lVar5 == -0x410fd2b5bb50c76c) {
            free(local_a0);
            param_1[7] = 0;
            lVar4 = 0x54b81b2f299a01af;
          }
          else if (lVar5 == -0x3815217b2e4d6c01) {
            local_b0 = (void *)param_1[10];
            bVar3 = local_b0 == (void *)0x0;
            lVar5 = 0x4fc0cedab952b46d;
            lVar4 = -0x619244e8ec2e9da7;
            goto LAB_0016b6d4;
          }
          goto LAB_0016b6dc;
        }
        lVar4 = -0x131bff79b35c29dd;
        if ((lVar5 == -0x4aefad759856e609) || (lVar4 = lVar5, lVar5 != -0x4204899a0680794d))
        goto LAB_0016b6dc;
        local_c0 = (long *)param_1[unaff_x28 * 2 + 0xf];
        lVar5 = -0x2e54a17f6e244a3a;
        bVar3 = local_c0 == (long *)0x0;
        lVar4 = -0x4aefad759856e609;
        goto LAB_0016b6d4;
      }
      if (lVar5 < -0x19e518f3fb10ffed) {
        plVar2 = local_68;
        lVar4 = 0x21f392027b00fafd;
        if ((lVar5 != -0x36136d0588c18bf9) &&
           (plVar2 = __ptr, lVar4 = lVar5, lVar5 == -0x2e54a17f6e244a3a)) {
          plVar2 = local_c0;
          lVar4 = 0x21f392027b00fafd;
        }
        goto LAB_0016b6dc;
      }
      if (lVar5 != -0x19e518f3fb10ffed) {
        lVar4 = 0x1cea61259e2aa832;
        if ((lVar5 != -0x190d231d7c27f62d) && (lVar4 = lVar5, lVar5 == -0x1842b0e70a05602c)) {
          lVar4 = -0x19e518f3fb10ffed;
        }
        goto LAB_0016b6dc;
      }
      local_88 = (void *)param_1[4];
      bVar3 = local_88 == (void *)0x0;
      lVar4 = 0x46a40848aac4929c;
      lVar5 = 0x7e0a1c1f05dd7393;
    }
LAB_0016c01c:
    if (!bVar3) {
      lVar4 = lVar5;
    }
    goto LAB_0016b6dc;
  }
  if (0x46a40848aac4929b < lVar5) {
    if (lVar5 < 0x58c74a4071bffa81) {
      if (lVar5 < 0x4fc0cedab952b46d) {
        lVar4 = -0x50fcc5342e0763b4;
        if ((lVar5 != 0x46a40848aac4929c) && (lVar4 = lVar5, lVar5 == 0x4ab165e7b3e59a47)) {
          lVar4 = -0xe7349ac2f124197;
        }
      }
      else if (lVar5 == 0x4fc0cedab952b46d) {
        free(local_b0);
        param_1[10] = 0;
        lVar4 = -0x50bf1cad8a1a8d16;
      }
      else if (lVar5 == 0x54b81b2f299a01af) {
        local_a8 = (void *)param_1[2];
        bVar3 = local_a8 == (void *)0x0;
        lVar4 = -0x1f62a1496b0c1d7;
        lVar5 = -0x4c32f7797dcf29d7;
        goto LAB_0016c01c;
      }
    }
    else if (lVar5 < 0x78da00c1073672f8) {
      if (lVar5 == 0x58c74a4071bffa81) {
        free(local_78);
        param_1[1] = 0;
        lVar4 = 0x607486c38191eb60;
      }
      else if (lVar5 == 0x607486c38191eb60) {
        local_80 = (void *)param_1[3];
        bVar3 = local_80 == (void *)0x0;
        lVar5 = 0x15ddefd6f6a53f37;
        lVar4 = -0x1842b0e70a05602c;
        goto LAB_0016b6d4;
      }
    }
    else if (lVar5 == 0x7e0a1c1f05dd7393) {
      free(local_88);
      param_1[4] = 0;
      lVar4 = -0x50fcc5342e0763b4;
    }
    else if (lVar5 == 0x7d1df4375e687419) {
      free(local_c8);
      local_68 = (long *)param_1[unaff_x28 * 2 + 0xf];
      lVar4 = 0x3c6ca067b5b3b820;
      if (local_68 != (long *)0x0) {
        lVar4 = -0x36136d0588c18bf9;
      }
      *local_b8 = 0;
    }
    else if (lVar5 == 0x78da00c1073672f8) {
      lVar4 = lVar1;
    }
    goto LAB_0016b6dc;
  }
  if (lVar5 < 0x1cea61259e2aa832) {
    if (lVar5 < 0xc7ece61dd6dccdb) {
      if (lVar5 == -0xe7349ac2f124197) {
        local_98 = (void *)param_1[6];
        bVar3 = local_98 == (void *)0x0;
        lVar5 = 0x365e0ae3f362e472;
        lVar4 = -0x190d231d7c27f62d;
        goto LAB_0016b6d4;
      }
      lVar4 = -0x3815217b2e4d6c01;
      if ((lVar5 != -0x1f62a1496b0c1d7) && (lVar4 = lVar5, lVar5 == -0x131bff79b35c29dd)) {
        return;
      }
    }
    else {
      if (lVar5 == 0xc7ece61dd6dccdb) {
        local_78 = (void *)param_1[1];
        bVar3 = local_78 == (void *)0x0;
        lVar5 = 0x58c74a4071bffa81;
        lVar4 = -0x777cc98cc1a3ebb1;
        goto LAB_0016b6d4;
      }
      if (lVar5 == 0x15ddefd6f6a53f37) {
        free(local_80);
        param_1[3] = 0;
        lVar4 = -0x19e518f3fb10ffed;
      }
    }
    goto LAB_0016b6dc;
  }
  if (0x365e0ae3f362e471 < lVar5) {
    if (lVar5 == 0x365e0ae3f362e472) {
      free(local_98);
      param_1[6] = 0;
      lVar4 = 0x1cea61259e2aa832;
    }
    else {
      lVar4 = 0x405e4950e7a95a57;
      if ((lVar5 != 0x3c6ca067b5b3b820) && (lVar4 = lVar5, lVar5 == 0x405e4950e7a95a57)) {
        local_70 = unaff_x28 + 1;
LAB_0016bea8:
        lVar4 = -0x5d5069200ce4da5d;
      }
    }
    goto LAB_0016b6dc;
  }
  if (lVar5 != 0x1cea61259e2aa832) {
    if (lVar5 == 0x21f392027b00fafd) {
      free(__ptr);
      param_1[unaff_x28 * 2 + 0xf] = 0;
      lVar4 = 0x405e4950e7a95a57;
    }
    goto LAB_0016b6dc;
  }
  local_a0 = (void *)param_1[7];
  bVar3 = local_a0 == (void *)0x0;
  lVar5 = -0x410fd2b5bb50c76c;
  lVar4 = -0x53728b1d363582bc;
LAB_0016b6d4:
  if (!bVar3) {
    lVar4 = lVar5;
  }
  goto LAB_0016b6dc;
}


