// Function: FUN_001498a0
// Entry: 001498a0

void FUN_001498a0(long param_1,float *param_2,ulong *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  long local_88;
  long local_80;
  
  lVar1 = -0x14ffebcae0064351;
  if (param_3 == (ulong *)0x0 || param_1 == 0) {
    lVar1 = -0xab6646d66d12af;
  }
  lVar4 = 0x28b31968dd960617;
LAB_001499c8:
  while( true ) {
    while (lVar3 = lVar4, lVar4 = lVar3, lVar3 < 0x71368d1ea9f21e) {
      if (lVar3 < -0x1d12150fc8992d8e) {
        if (lVar3 < -0x4a5bdde3ec6108b5) {
          if (lVar3 < -0x672d06b8072036b6) {
            lVar4 = -0x1d12150fc8992d8e;
            if (((lVar3 != -0x7eded6036d1e67d7) &&
                (lVar4 = -0x672d06b8072036b6, lVar3 != -0x6a1331161b818e7f)) &&
               (lVar4 = lVar3, lVar3 == -0x7a46860cba668a08)) {
              return;
            }
          }
          else if (lVar3 == -0x672d06b8072036b6) {
            iVar2 = FUN_001ebe70(0,1,&DAT_001f7eb8);
            lVar4 = 0x9c9793f10a52b65;
            if (iVar2 != 0) {
              lVar4 = 0x1d200a1de16379ab;
            }
          }
          else {
            lVar4 = -0x7a46860cba668a08;
            if ((lVar3 != -0x621e5b9fe2428b18) && (lVar4 = lVar3, lVar3 == -0x568f13f587c6eda0)) {
              lVar4 = -0x7b0c84f52805bc;
              goto LAB_0014a0d4;
            }
          }
        }
        else if (lVar3 < -0x3dd49bfb72f923e7) {
          if (lVar3 == -0x4a5bdde3ec6108b5) {
            lVar4 = -0x16dd06fc46dc4075;
            if (DAT_001f806b == '\0') {
              lVar4 = 0x27c5c56d487a9d89;
            }
          }
          else if (lVar3 == -0x478d68d694c879ee) {
            lVar4 = -0x1ab9231d2ec4bdd2;
          }
        }
        else if (lVar3 == -0x3dd49bfb72f923e7) {
          lVar4 = 0x51831dad6441665;
          if (DAT_001f806b == '\0') {
            lVar4 = 0x37c642ae6bfaf19d;
          }
        }
        else if (lVar3 == -0x3c6c8559fed8f4f0) {
          local_88 = *(long *)(param_1 + 0x20);
          lVar4 = 0x5d9e5e1ad05658b1;
          if (local_88 != 0) {
            lVar4 = 0x944d9a6f8824e30;
          }
        }
        else if (lVar3 == -0x3b0c6a9944e6b600) {
          lVar4 = 0x68ad1ecaa82d6034;
        }
      }
      else if (lVar3 < -0x13289706576c820c) {
        if (lVar3 < -0x1ab9231d2ec4bdd2) {
          if (lVar3 == -0x1d12150fc8992d8e) {
            DAT_001f7eb8 = 0;
            lVar3 = FUN_001cac50(*(undefined8 *)(param_1 + 0x20),&DAT_001f6488);
            lVar4 = -0x621e5b9fe2428b18;
            if (lVar3 != 0) {
              lVar4 = 0x7a603c1423e2a5f;
            }
          }
          else if (lVar3 == -0x1c26499847e464ba) {
            iVar2 = FUN_001ebe70(0,1,&DAT_001f7eb8);
            lVar4 = 0x210d2e2f89465e1f;
            if (iVar2 != 0) {
              lVar4 = 0x40d18cc35addb927;
            }
          }
        }
        else if (lVar3 == -0x1ab9231d2ec4bdd2) {
          fVar5 = *param_2;
          *param_3 = *param_3 | 0x10000000;
          *param_2 = fVar5 + (1.0 - fVar5);
          lVar4 = -0x7a46860cba668a08;
        }
        else {
          lVar4 = 0x73d1151badc2af63;
          if ((lVar3 != -0x16dd06fc46dc4075) && (lVar4 = lVar3, lVar3 == -0x14ffebcae0064351)) {
            local_80 = *(long *)(param_1 + 0x10);
            lVar4 = 0x2732b7b54817755f;
            if (local_80 != 0) {
              lVar4 = -0x3b0c6a9944e6b600;
            }
          }
        }
      }
      else if (lVar3 < -0x83da66c1590aeec) {
        lVar4 = -0x3c6c8559fed8f4f0;
        if ((lVar3 != -0x13289706576c820c) && (lVar4 = lVar3, lVar3 == -0x92ffda65a52be61)) {
          lVar4 = 0x68ad1ecaa82d6034;
        }
      }
      else {
        lVar4 = -0x1ab9231d2ec4bdd2;
        if (((lVar3 != -0x83da66c1590aeec) &&
            (lVar4 = -0x7a46860cba668a08, lVar3 != -0xab6646d66d12af)) &&
           (lVar4 = lVar3, lVar3 == -0x7b0c84f52805bc)) {
          DAT_001f7eb8 = 0;
          lVar3 = FUN_001cac50(*(undefined8 *)(param_1 + 0x10),&DAT_001f6488);
          lVar4 = -0x13289706576c820c;
          if (lVar3 != 0) {
            lVar4 = 0x5d77aca6fe22faff;
          }
        }
      }
    }
    if (0x2732b7b54817755e < lVar3) break;
    if (lVar3 < 0x9c9793f10a52b65) {
      if (lVar3 < 0x51831dad6441665) {
        lVar4 = -0x1c26499847e464ba;
        if ((lVar3 != 0x71368d1ea9f21e) && (lVar4 = lVar3, lVar3 == 0x3dec984fe357d19)) {
          lVar4 = -0x1d12150fc8992d8e;
LAB_0014a0d4:
          DAT_001f648d = DAT_001f648d ^ 0xc;
          DAT_001f648c = DAT_001f648c ^ 0xc;
          DAT_001f648b = DAT_001f648b ^ 0xc;
          DAT_001f648a = DAT_001f648a ^ 0xc;
          DAT_001f6489 = DAT_001f6489 ^ 0xc;
          DAT_001f6488 = DAT_001f6488 ^ 0xc;
          DAT_001f648e = DAT_001f648e ^ 0xc;
          DAT_001f806c = '\x01';
        }
      }
      else {
        lVar4 = 0x183d1e1dd89a5236;
        if (((lVar3 != 0x51831dad6441665) &&
            (lVar4 = -0x1ab9231d2ec4bdd2, lVar3 != 0x7a603c1423e2a5f)) &&
           (lVar4 = lVar3, lVar3 == 0x944d9a6f8824e30)) {
          lVar4 = 0x203108859b63177e;
        }
      }
    }
    else if (lVar3 < 0x1d200a1de16379ab) {
      if (lVar3 == 0x9c9793f10a52b65) {
        lVar4 = 0x3f6995f1672eff93;
        if (DAT_001f806c == '\0') {
          lVar4 = -0x568f13f587c6eda0;
        }
      }
      else if (lVar3 == 0x183d1e1dd89a5236) {
        DAT_001f7eb4 = 0;
        lVar3 = FUN_001cac50(local_80,&DAT_001f6480);
        lVar4 = -0x6a1331161b818e7f;
        if (lVar3 != 0) {
          lVar4 = -0x83da66c1590aeec;
        }
      }
    }
    else {
      lVar4 = -0x672d06b8072036b6;
      if (lVar3 != 0x1d200a1de16379ab) {
        if (lVar3 == 0x203108859b63177e) {
          iVar2 = FUN_001ebe70(0,1,&DAT_001f7eb4);
          lVar4 = -0x4a5bdde3ec6108b5;
          if (iVar2 != 0) {
            lVar4 = 0x65cc3c7d0931a41c;
          }
        }
        else {
          lVar4 = lVar3;
          if (lVar3 == 0x210d2e2f89465e1f) {
            lVar4 = -0x7eded6036d1e67d7;
            if (DAT_001f806c == '\0') {
              lVar4 = 0x3dec984fe357d19;
            }
          }
        }
      }
    }
  }
  if (0x40d18cc35addb926 < lVar3) {
    if (lVar3 < 0x65cc3c7d0931a41c) {
      lVar4 = -0x1c26499847e464ba;
      if (((lVar3 != 0x40d18cc35addb927) &&
          (lVar4 = -0x1ab9231d2ec4bdd2, lVar3 != 0x5d77aca6fe22faff)) &&
         (lVar4 = lVar3, lVar3 == 0x5d9e5e1ad05658b1)) {
        lVar4 = -0x7a46860cba668a08;
      }
    }
    else {
      lVar4 = 0x203108859b63177e;
      if (lVar3 != 0x65cc3c7d0931a41c) {
        if (lVar3 == 0x68ad1ecaa82d6034) {
          iVar2 = FUN_001ebe70(0,1,&DAT_001f7eb4);
          lVar4 = -0x3dd49bfb72f923e7;
          if (iVar2 != 0) {
            lVar4 = -0x92ffda65a52be61;
          }
        }
        else {
          lVar4 = lVar3;
          if (lVar3 == 0x73d1151badc2af63) {
            DAT_001f7eb4 = 0;
            lVar3 = FUN_001cac50(local_88,&DAT_001f6480);
            lVar4 = 0x71368d1ea9f21e;
            if (lVar3 != 0) {
              lVar4 = -0x478d68d694c879ee;
            }
          }
        }
      }
    }
    goto LAB_001499c8;
  }
  if (lVar3 < 0x28b31968dd960617) {
    lVar4 = -0x3c6c8559fed8f4f0;
    if ((lVar3 == 0x2732b7b54817755f) || (lVar4 = lVar3, lVar3 != 0x27c5c56d487a9d89))
    goto LAB_001499c8;
    lVar4 = 0x73d1151badc2af63;
  }
  else {
    lVar4 = lVar1;
    if (lVar3 == 0x28b31968dd960617) goto LAB_001499c8;
    if (lVar3 != 0x37c642ae6bfaf19d) {
      lVar4 = lVar3;
      if (lVar3 == 0x3f6995f1672eff93) {
        lVar4 = -0x7b0c84f52805bc;
      }
      goto LAB_001499c8;
    }
    lVar4 = 0x183d1e1dd89a5236;
  }
  DAT_001f6484 = DAT_001f6484 ^ 0x1a;
  DAT_001f6483 = DAT_001f6483 ^ 0x1a;
  DAT_001f6482 = DAT_001f6482 ^ 0x1a;
  DAT_001f6481 = DAT_001f6481 ^ 0x1a;
  DAT_001f6480 = DAT_001f6480 ^ 0x1a;
  DAT_001f6485 = DAT_001f6485 ^ 0x1a;
  DAT_001f806b = '\x01';
  goto LAB_001499c8;
}


