// Function: FUN_0017f5d8
// Entry: 0017f5d8

void FUN_0017f5d8(int *param_1,long *param_2,long param_3,long param_4,long *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long unaff_x25;
  long unaff_x26;
  long local_88;
  int local_74;
  long local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  lVar1 = 0x7336973cdaaf889c;
  if (param_4 == 0 || param_3 == 0) {
    lVar1 = 0x75afae35e50551bb;
  }
  local_68 = *(long *)(lVar3 + 0x28);
  local_70 = 0;
  lVar2 = 0x5c87e8b96f80e72c;
LAB_0017f6e8:
  do {
    while (lVar5 = lVar2, lVar2 = lVar5, lVar5 < 0x25a64ab4f89f351) {
      if (lVar5 < -0x37774a5df332da79) {
        if (lVar5 < -0x6ffba4ccf180f2e1) {
          if (lVar5 == -0x797b7088605798ef) {
            iVar4 = (**(code **)(*param_2 + 0x540))(param_2,unaff_x26);
            local_88 = (long)iVar4;
            lVar5 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar2 = 0x1e1c071917ee7251;
            if (lVar5 != 0) {
              lVar2 = 0x6c0dbc83d3224fd;
            }
          }
          else if (lVar5 == -0x75ed7015708de6dc) {
            (**(code **)(*param_2 + 0x80))(param_2);
            (**(code **)(*param_2 + 0x88))(param_2);
            lVar2 = -0x1fe594c7c278784d;
          }
          else if (lVar5 == -0x73754fd3b4c26234) {
            lVar2 = -0x10c9dd7dfeabe1b8;
          }
        }
        else if (lVar5 < -0x614655a1d570e426) {
          lVar2 = 0x25a64ab4f89f351;
          if ((lVar5 != -0x6ffba4ccf180f2e1) && (lVar2 = lVar5, lVar5 == -0x699b7cf5200f0e0e)) {
            lVar2 = -0x1fe594c7c278784d;
          }
        }
        else if (lVar5 == -0x614655a1d570e426) {
          *param_5 = 0;
          lVar2 = 0x4d406a04b2de80d;
        }
        else if (lVar5 == -0x55b6f79aa20dba4f) {
          *param_1 = local_74;
          lVar2 = 0x25a64ab4f89f351;
        }
      }
      else if (lVar5 < -0x189a0c230eaed2a4) {
        if (lVar5 < -0x2890247c152d85f7) {
          lVar2 = -0xf025d3b46a4312a;
          if ((lVar5 != -0x37774a5df332da79) && (lVar2 = lVar5, lVar5 == -0x2d94c73eb71837d0)) {
            local_74 = 3;
LAB_0017fcb4:
            lVar2 = -0x55b6f79aa20dba4f;
          }
        }
        else {
          lVar2 = 0x25a64ab4f89f351;
          if ((lVar5 != -0x2890247c152d85f7) && (lVar2 = lVar5, lVar5 == -0x1fe594c7c278784d)) {
            *param_1 = 0x19;
            lVar2 = 0x25a64ab4f89f351;
          }
        }
      }
      else if (lVar5 < -0x10c9dd7dfeabe1b8) {
        if (lVar5 == -0x189a0c230eaed2a4) {
          lVar2 = -0x699b7cf5200f0e0e;
          if (unaff_x25 != 0) {
            lVar2 = 0x6e96ab8c81a9bdc8;
          }
        }
        else if (lVar5 == -0x153cd4fdcb6c18cb) {
          lVar2 = -0x614655a1d570e426;
        }
      }
      else if (lVar5 == -0x10c9dd7dfeabe1b8) {
        (**(code **)(*param_2 + 0x550))(param_2,unaff_x26,unaff_x25);
        lVar2 = 0x25a64ab4f89f351;
      }
      else if (lVar5 == -0xf025d3b46a4312a) {
        lVar2 = 0xd227db97fc85be8;
        if (*param_1 != 0) {
          lVar2 = -0x153cd4fdcb6c18cb;
        }
      }
    }
    if (lVar5 < 0x51c606c605303a18) {
      if (lVar5 < 0x1e1c071917ee7251) {
        if (lVar5 < 0x6c0dbc83d3224fd) {
          if (lVar5 == 0x25a64ab4f89f351) {
            lVar2 = 0x54ff0c5712ed721c;
            if (unaff_x26 == 0 || param_2 == (long *)0x0) {
              lVar2 = -0x37774a5df332da79;
            }
          }
          else if (lVar5 == 0x4d406a04b2de80d) {
            if (*(long *)(lVar3 + 0x28) == local_68) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
        }
        else {
          if (lVar5 == 0x6c0dbc83d3224fd) {
            (**(code **)(*param_2 + 0x80))(param_2);
            (**(code **)(*param_2 + 0x88))(param_2);
            local_74 = 0x19;
            goto LAB_0017fcb4;
          }
          if (lVar5 == 0xd227db97fc85be8) {
            lVar2 = 0x4d406a04b2de80d;
          }
        }
      }
      else if (lVar5 < 0x40dd7fec79694d26) {
        if (lVar5 == 0x1e1c071917ee7251) {
          lVar2 = 0x4db0aca37b53bdde;
          if (*param_1 != 0) {
            lVar2 = 0x308031a84d5c725c;
          }
        }
        else if (lVar5 == 0x308031a84d5c725c) {
          lVar2 = 0x25a64ab4f89f351;
        }
      }
      else if (lVar5 == 0x40dd7fec79694d26) {
        lVar2 = -0x2d94c73eb71837d0;
        if (unaff_x26 != 0) {
          lVar2 = -0x797b7088605798ef;
        }
      }
      else if (lVar5 == 0x4db0aca37b53bdde) {
        unaff_x25 = (**(code **)(*param_2 + 0x548))(param_2,unaff_x26,0);
        lVar5 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar2 = -0x189a0c230eaed2a4;
        if (lVar5 != 0) {
          lVar2 = -0x75ed7015708de6dc;
        }
      }
      goto LAB_0017f6e8;
    }
    if (lVar5 < 0x6bbe5bac4bf26169) {
      if (lVar5 == 0x51c606c605303a18) {
        *param_1 = 2;
        lVar2 = -0x10c9dd7dfeabe1b8;
      }
      else if (lVar5 == 0x54ff0c5712ed721c) {
        (**(code **)(*param_2 + 0xb8))(param_2,unaff_x26);
        lVar2 = -0xf025d3b46a4312a;
      }
      else if (lVar5 == 0x5c87e8b96f80e72c) {
        lVar2 = lVar1;
      }
    }
    else if (lVar5 < 0x7336973cdaaf889c) {
      if (lVar5 == 0x6bbe5bac4bf26169) {
        lVar5 = FUN_001cdd28(unaff_x25,local_88);
        lVar2 = 0x51c606c605303a18;
        if (lVar5 != 0) {
          lVar2 = -0x73754fd3b4c26234;
        }
        *param_5 = lVar5;
      }
      else if (lVar5 == 0x6e96ab8c81a9bdc8) {
        lVar2 = 0x6bbe5bac4bf26169;
        if (*param_1 != 0) {
          lVar2 = -0x6ffba4ccf180f2e1;
        }
      }
    }
    else if (lVar5 == 0x7336973cdaaf889c) {
      FUN_0017e824(param_1,param_2,param_3,param_4,&local_70);
      lVar2 = 0x40dd7fec79694d26;
      unaff_x26 = local_70;
      if (*param_1 != 0) {
        lVar2 = -0x2890247c152d85f7;
      }
    }
    else if (lVar5 == 0x75afae35e50551bb) {
      *param_1 = 3;
      lVar2 = -0x614655a1d570e426;
    }
  } while( true );
}


