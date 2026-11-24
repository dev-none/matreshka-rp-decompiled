// Function: zip_entry_openbyindex
// Entry: 00113fb4

void zip_entry_openbyindex(long param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  long *plVar7;
  char *pcVar8;
  char cVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_4a0 [8];
  undefined8 local_498;
  undefined2 local_48a;
  undefined8 local_488;
  undefined4 local_480;
  undefined1 local_478 [16];
  undefined4 local_464;
  undefined8 local_460;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_1 == 0) {
    uVar4 = 0xffffffff;
  }
  else if (*(int *)(param_1 + 0x14) == 1) {
    if (param_2 < *(uint *)(param_1 + 0x10)) {
      lVar5 = **(long **)(param_1 + 0x68);
      if (lVar5 == 0) {
        uVar4 = 0xfffffff5;
      }
      else {
        lVar5 = lVar5 + (ulong)*(uint *)((*(long **)(param_1 + 0x68))[4] + param_2 * 4);
        uVar10 = (ulong)*(ushort *)(lVar5 + 0x1c);
        if (*(void **)(param_1 + 0x80) != (void *)0x0) {
          free(*(void **)(param_1 + 0x80));
          *(undefined8 *)(param_1 + 0x80) = 0;
        }
        pcVar3 = calloc(uVar10 + 1,1);
        if ((uVar10 != 0) && (pcVar3 != (char *)0x0)) {
          pcVar6 = (char *)(lVar5 + 0x2e);
          pcVar8 = pcVar3;
          do {
            cVar9 = *pcVar6;
            if (cVar9 == '\\') {
              cVar9 = '/';
            }
            else if (cVar9 == '\0') break;
            uVar10 = uVar10 - 1;
            *pcVar8 = cVar9;
            pcVar6 = pcVar6 + 1;
            pcVar8 = pcVar8 + 1;
          } while (uVar10 != 0);
        }
        *(char **)(param_1 + 0x80) = pcVar3;
        if (pcVar3 == (char *)0x0) {
          uVar4 = 0xfffffffe;
        }
        else {
          plVar7 = *(long **)(param_1 + 0x68);
          if (plVar7 == (long *)0x0) {
            lVar5 = 0;
          }
          else if ((uint)param_2 < *(uint *)(param_1 + 0x10)) {
            lVar5 = *plVar7 + (ulong)*(uint *)(plVar7[4] + (param_2 & 0xffffffff) * 4);
          }
          else {
            lVar5 = 0;
          }
          iVar2 = FUN_0010f008(param_1,param_2,lVar5,auStack_4a0,0);
          if (iVar2 == 0) {
            uVar4 = 0xfffffffd;
          }
          else {
            uVar4 = 0;
            *(ulong *)(param_1 + 0x78) = param_2;
            *(undefined4 *)(param_1 + 0x98) = local_480;
            *(undefined8 *)(param_1 + 0xa0) = local_498;
            auVar11 = NEON_ext(local_478,local_478,8,1);
            *(undefined8 *)(param_1 + 200) = local_460;
            *(undefined2 *)(param_1 + 0xd0) = local_48a;
            *(undefined4 *)(param_1 + 0x4e068) = local_464;
            *(long *)(param_1 + 0x90) = auVar11._8_8_;
            *(long *)(param_1 + 0x88) = auVar11._0_8_;
            *(undefined8 *)(param_1 + 0x4e070) = local_488;
          }
        }
      }
    }
    else {
      uVar4 = 0xfffffff6;
    }
  }
  else {
    uVar4 = 0xfffffffc;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


