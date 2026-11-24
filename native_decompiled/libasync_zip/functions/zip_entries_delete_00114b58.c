// Function: zip_entries_delete
// Entry: 00114b58

void zip_entries_delete(long *param_1,long param_2,long param_3)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined1 (*pauVar5) [16];
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  long *__ptr;
  char *pcVar13;
  char *__s2;
  void *pvVar14;
  long *plVar15;
  void *__ptr_00;
  long *plVar16;
  ulong uVar17;
  char cVar18;
  long *plVar19;
  undefined1 (*pauVar20) [16];
  ulong uVar21;
  undefined4 *puVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  size_t __nmemb;
  FILE *__stream;
  long lVar29;
  char *__s1;
  long lVar30;
  char *__s;
  ulong __nmemb_00;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  ulong local_4f8;
  undefined1 auStack_4c8 [64];
  ulong local_488;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  if ((param_1 == (long *)0x0) || ((param_2 == 0 && (param_3 != 0)))) {
    uVar12 = 0xffffffffffffffff;
    goto LAB_00114ba0;
  }
  if ((param_2 == 0) && (param_3 == 0)) {
    uVar12 = 0;
    goto LAB_00114ba0;
  }
  uVar3 = *(uint *)(param_1 + 2);
  __nmemb_00 = (ulong)uVar3;
  __ptr = calloc(__nmemb_00,0x20);
  if (__ptr == (long *)0x0) {
    uVar12 = 0xffffffffffffffeb;
    goto LAB_00114ba0;
  }
  *(undefined4 *)((long)param_1 + 0x14) = 1;
  if (param_2 == 0) {
    uVar12 = 0xffffffffffffffff;
  }
  else {
    if (uVar3 == 0) {
      plVar15 = calloc(0,8);
      if (plVar15 != (long *)0x0) goto LAB_00114db8;
    }
    else {
      uVar12 = 0;
      uVar17 = 0xffffffffffffffff;
      do {
        iVar10 = zip_entry_openbyindex(param_1,uVar12);
        if (iVar10 != 0) {
          uVar12 = (ulong)iVar10;
          goto LAB_00115080;
        }
        if (param_3 == 0) {
          iVar10 = 0;
        }
        else {
          __s1 = (char *)param_1[0x10];
          lVar29 = 0;
          do {
            __s = *(char **)(param_2 + lVar29 * 8);
            pcVar13 = (char *)strlen(__s);
            __s2 = calloc((size_t)(pcVar13 + 1),1);
            pcVar6 = __s2;
            pcVar7 = __s2;
            if (pcVar13 != (char *)0x0) {
              while (pcVar7 != (char *)0x0) {
                cVar18 = *__s;
                if (cVar18 == '\\') {
                  cVar18 = '/';
                }
                else if (cVar18 == '\0') break;
                *pcVar6 = cVar18;
                pcVar13 = pcVar13 + -1;
                __s = __s + 1;
                pcVar6 = pcVar6 + 1;
                pcVar7 = pcVar13;
              }
            }
            if (__s2 != (char *)0x0) {
              iVar10 = strcmp(__s1,__s2);
              free(__s2);
              if (iVar10 == 0) {
                iVar10 = 1;
                goto LAB_00114cd4;
              }
            }
            lVar29 = lVar29 + 1;
          } while (lVar29 != param_3);
          iVar10 = 0;
        }
LAB_00114cd4:
        plVar15 = __ptr + uVar12 * 4;
        plVar16 = (long *)param_1[0xd];
        *(int *)(plVar15 + 1) = iVar10;
        if ((plVar16 == (long *)0x0) || (*(uint *)(param_1 + 2) <= (uint)uVar12)) {
          lVar29 = 0;
        }
        else {
          lVar29 = *plVar16 + (ulong)*(uint *)(plVar16[4] + uVar12 * 4);
        }
        iVar11 = FUN_0010f008(param_1,uVar12 & 0xffffffff,lVar29,auStack_4c8,0);
        if (iVar11 == 0) {
          uVar12 = 0xfffffffffffffffd;
          goto LAB_00115080;
        }
        zip_entry_close(param_1);
        uVar12 = uVar12 + 1;
        *plVar15 = -1;
        plVar15[2] = local_488;
        plVar15[3] = 0;
        uVar23 = uVar17;
        if (local_488 <= uVar17) {
          uVar23 = local_488;
        }
        if (iVar10 == 0) {
          uVar23 = uVar17;
        }
        uVar17 = uVar23;
      } while (uVar12 != __nmemb_00);
      plVar15 = __ptr + 1;
      uVar12 = __nmemb_00;
      do {
        if ((uVar23 < (ulong)plVar15[1]) && ((int)*plVar15 != 1)) {
          *(undefined4 *)plVar15 = 2;
        }
        uVar12 = uVar12 - 1;
        plVar15 = plVar15 + 4;
      } while (uVar12 != 0);
      plVar15 = calloc(__nmemb_00,8);
      if (plVar15 != (long *)0x0) {
        uVar12 = 0;
        plVar16 = plVar15 + -2;
        do {
          lVar29 = uVar12 * 4;
          uVar23 = (__ptr + lVar29)[2];
          plVar15[uVar12] = uVar23;
          uVar17 = uVar12;
          do {
            uVar28 = uVar17;
            if ((long)uVar28 < 1) {
              uVar21 = 0;
              bVar8 = true;
              bVar9 = false;
              uVar17 = uVar12;
              if (uVar12 == 0) goto LAB_00114e24;
              goto LAB_00114e80;
            }
            uVar17 = uVar28 - 1;
          } while (uVar23 <= (ulong)plVar15[uVar28 - 1]);
          bVar8 = uVar28 <= uVar12;
          uVar17 = uVar12 - uVar28;
          bVar9 = uVar17 == 0;
          uVar21 = uVar28;
          if (!bVar9) {
LAB_00114e80:
            if (bVar8 && !bVar9) {
              uVar26 = uVar12;
              if (3 < uVar17) {
                uVar26 = uVar12 - (uVar17 & 0xfffffffffffffffc);
                uVar28 = uVar12 - (uVar28 & ((long)uVar28 >> 0x3f ^ 0xffffffffffffffffU)) &
                         0xfffffffffffffffc;
                plVar19 = plVar16;
                do {
                  uVar28 = uVar28 - 4;
                  plVar19[2] = plVar19[1];
                  plVar19[1] = *plVar19;
                  *plVar19 = plVar19[-1];
                  plVar19[-1] = plVar19[-2];
                  plVar19 = plVar19 + -4;
                } while (uVar28 != 0);
                if (uVar17 == (uVar17 & 0xfffffffffffffffc)) goto LAB_00114ee0;
              }
              do {
                plVar19 = plVar15 + uVar26;
                uVar26 = uVar26 - 1;
                *plVar19 = plVar19[-1];
              } while ((long)uVar21 < (long)uVar26);
            }
LAB_00114ee0:
            plVar15[uVar21] = uVar23;
            plVar19 = __ptr;
            for (uVar17 = uVar12; uVar17 != 0; uVar17 = uVar17 - 1) {
              if ((long)uVar21 <= *plVar19) {
                *plVar19 = *plVar19 + 1;
              }
              plVar19 = plVar19 + 4;
            }
            __ptr[uVar21 * 4] = uVar12;
          }
LAB_00114e24:
          uVar12 = uVar12 + 1;
          plVar16 = plVar16 + 1;
          __ptr[lVar29] = uVar21;
        } while (uVar12 != __nmemb_00);
LAB_00114db8:
        pvVar14 = calloc(__nmemb_00,8);
        if (pvVar14 == (void *)0x0) {
          free(plVar15);
        }
        else {
          __nmemb = (size_t)(int)uVar3;
          uVar12 = __nmemb_00 - 1;
          if (1 < uVar3) {
            lVar29 = *plVar15;
            if (uVar3 < 5) {
              uVar23 = 0;
            }
            else {
              uVar23 = uVar12 & 0xfffffffffffffffc;
              pauVar20 = (undefined1 (*) [16])(plVar15 + 3);
              plVar16 = (long *)((long)pvVar14 + 0x10);
              uVar17 = uVar23;
              lVar30 = lVar29;
              do {
                auVar31._8_8_ = lVar29;
                auVar31._0_8_ = lVar30;
                pauVar1 = pauVar20 + -1;
                pauVar5 = pauVar20 + -1;
                lVar27 = *(long *)*pauVar1;
                lVar29 = *(long *)(*pauVar20 + 8);
                lVar30 = *(long *)*pauVar20;
                auVar32 = *pauVar20;
                uVar17 = uVar17 - 4;
                pauVar20 = pauVar20 + 2;
                auVar31 = NEON_ext(auVar31,*pauVar1,8,1);
                auVar32 = NEON_ext(*pauVar1,auVar32,8,1);
                plVar16[-1] = *(long *)(*pauVar5 + 8) - auVar31._8_8_;
                plVar16[-2] = lVar27 - auVar31._0_8_;
                plVar16[1] = lVar29 - auVar32._8_8_;
                *plVar16 = lVar30 - auVar32._0_8_;
                plVar16 = plVar16 + 4;
              } while (uVar17 != 0);
              if (uVar12 == uVar23) goto LAB_00114fa0;
            }
            plVar16 = plVar15 + uVar23;
            lVar30 = ~uVar23 + __nmemb_00;
            plVar19 = (long *)((long)pvVar14 + uVar23 * 8);
            do {
              plVar16 = plVar16 + 1;
              lVar27 = *plVar16;
              lVar30 = lVar30 + -1;
              *plVar19 = lVar27 - lVar29;
              plVar19 = plVar19 + 1;
              lVar29 = lVar27;
            } while (lVar30 != 0);
          }
LAB_00114fa0:
          *(long *)((long)pvVar14 + uVar12 * 8) = *param_1 - plVar15[uVar12];
          if (uVar3 != 0) {
            if (uVar3 == 1) {
              uVar17 = 0;
            }
            else {
              uVar17 = __nmemb_00 & 0xfffffffe;
              plVar16 = __ptr + 4;
              uVar12 = uVar17;
              do {
                uVar12 = uVar12 - 2;
                lVar29 = *(long *)((long)pvVar14 + *plVar16 * 8);
                plVar16[-1] = *(long *)((long)pvVar14 + plVar16[-4] * 8);
                plVar16[3] = lVar29;
                plVar16 = plVar16 + 8;
              } while (uVar12 != 0);
              if (uVar17 == __nmemb_00) goto LAB_00115020;
            }
            plVar16 = __ptr + uVar17 * 4;
            lVar29 = __nmemb_00 - uVar17;
            do {
              lVar29 = lVar29 + -1;
              plVar16[3] = *(long *)((long)pvVar14 + *plVar16 * 8);
              plVar16 = plVar16 + 4;
            } while (lVar29 != 0);
          }
LAB_00115020:
          free(pvVar14);
          free(plVar15);
          pvVar14 = calloc(__nmemb,4);
          if (pvVar14 != (void *)0x0) {
            plVar15 = (long *)param_1[0xd];
            *(undefined4 *)((long)param_1 + 0x14) = 2;
            if (((FILE *)plVar15[0xe] == (FILE *)0x0) ||
               (iVar10 = fseeko((FILE *)plVar15[0xe],0,0), iVar10 != 0)) {
LAB_00115068:
              uVar12 = 0xfffffffffffffffd;
            }
            else {
              if ((int)uVar3 < 1) {
                lVar29 = 0;
                uVar12 = 0;
              }
              else {
                lVar27 = 0;
                lVar30 = 0;
                local_4f8 = 0;
                uVar17 = 0;
                lVar29 = 0;
                uVar12 = 0;
                do {
                  iVar10 = (int)local_4f8;
                  uVar23 = (ulong)iVar10;
                  uVar2 = uVar3;
                  if ((int)uVar3 <= iVar10 + 1) {
                    uVar2 = iVar10 + 1;
                  }
                  if ((int)__ptr[uVar23 * 4 + 1] == 0) {
                    plVar16 = __ptr + uVar23 * 4 + 5;
                    lVar30 = lVar27;
                    do {
                      uVar23 = uVar23 + 1;
                      lVar30 = plVar16[-2] + lVar30;
                      uVar28 = uVar12;
                      lVar27 = lVar30;
                      local_4f8 = (ulong)uVar2;
                      if ((long)__nmemb <= (long)uVar23) goto LAB_001151d8;
                      lVar25 = *plVar16;
                      plVar16 = plVar16 + 4;
                    } while ((int)lVar25 == 0);
                  }
                  iVar10 = (int)uVar23;
                  if (iVar10 < (int)uVar3) {
                    lVar24 = (long)iVar10;
                    uVar28 = (uVar12 + __nmemb) - lVar24;
                    lVar25 = __nmemb - lVar24;
                    plVar16 = __ptr + lVar24 * 4 + 3;
                    puVar22 = (undefined4 *)((long)pvVar14 + (long)iVar10 * 4);
                    do {
                      if ((int)plVar16[-2] != 1) goto LAB_0011516c;
                      lVar25 = lVar25 + -1;
                      uVar12 = uVar12 + 1;
                      uVar23 = (ulong)((int)uVar23 + 1);
                      lVar30 = *plVar16 + lVar30;
                      lVar29 = *plVar16 + lVar29;
                      *puVar22 = 1;
                      plVar16 = plVar16 + 4;
                      puVar22 = puVar22 + 1;
                      local_4f8 = __nmemb_00;
                    } while (lVar25 != 0);
                  }
                  else {
LAB_0011516c:
                    uVar28 = uVar12;
                    local_4f8 = uVar23;
                    if ((int)uVar23 < (int)uVar3) {
                      uVar12 = (ulong)(int)uVar23;
                      plVar16 = __ptr + uVar12 * 4 + 3;
                      do {
                        local_4f8 = uVar12;
                        if ((int)plVar16[-2] != 2) break;
                        if (*plVar15 == 0) goto LAB_00115068;
                        lVar25 = uVar12 * 4;
                        uVar12 = uVar12 + 1;
                        uVar17 = *plVar16 + uVar17;
                        lVar25 = *plVar15 + (ulong)*(uint *)(plVar15[4] + lVar25);
                        *(int *)(lVar25 + 0x2a) = *(int *)(lVar25 + 0x2a) - (int)lVar29;
                        plVar16 = plVar16 + 4;
                        local_4f8 = __nmemb_00;
                      } while (__nmemb != uVar12);
                    }
                  }
LAB_001151d8:
                  __stream = (FILE *)plVar15[0xe];
                  __ptr_00 = calloc(1,0x1000);
                  if (__ptr_00 == (void *)0x0) {
                    uVar12 = 0xffffffffffffffeb;
                  }
                  else {
                    if ((long)uVar17 < 1) {
                      uVar12 = 0;
                    }
                    else {
                      uVar12 = 0;
                      uVar23 = uVar17;
                      lVar24 = lVar30;
                      lVar25 = lVar27;
                      do {
                        uVar21 = uVar23;
                        if (0xfff < uVar23) {
                          uVar21 = 0x1000;
                        }
                        iVar10 = fseeko(__stream,lVar24,0);
                        if (iVar10 != 0) {
LAB_001152b0:
                          uVar12 = 0xffffffffffffffe5;
                          break;
                        }
                        uVar26 = __fread_chk(__ptr_00,1,uVar21,__stream,0x1000);
                        if (uVar26 != uVar21) {
                          uVar12 = 0xffffffffffffffe4;
                          break;
                        }
                        iVar10 = fseeko(__stream,lVar25,0);
                        if (iVar10 != 0) goto LAB_001152b0;
                        uVar26 = __fwrite_chk(__ptr_00,1,uVar21,__stream,0x1000);
                        if (uVar26 != uVar21) {
                          uVar12 = 0xffffffffffffffe3;
                          break;
                        }
                        uVar26 = uVar23 - uVar21;
                        lVar25 = lVar25 + uVar21;
                        lVar24 = uVar21 + lVar24;
                        uVar12 = uVar21 + uVar12;
                        bVar9 = (long)uVar21 <= (long)uVar23;
                        uVar23 = uVar26;
                      } while (uVar26 != 0 && bVar9);
                    }
                    free(__ptr_00);
                  }
                  if (uVar12 != uVar17) goto LAB_0011506c;
                  lVar27 = uVar17 + lVar27;
                  lVar30 = uVar17 + lVar30;
                  uVar12 = uVar28;
                } while ((int)local_4f8 < (int)uVar3);
              }
              *(uint *)(param_1 + 2) = uVar3 - (int)uVar12;
              *param_1 = *param_1 - lVar29;
              FUN_00117ab0(plVar15,pvVar14,__nmemb_00);
            }
LAB_0011506c:
            free(pvVar14);
            goto LAB_00115080;
          }
        }
      }
    }
    uVar12 = 0xffffffffffffffeb;
  }
LAB_00115080:
  free(__ptr);
LAB_00114ba0:
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar12);
  }
  return;
}


