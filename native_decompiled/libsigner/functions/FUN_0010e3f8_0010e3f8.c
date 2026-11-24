// Function: FUN_0010e3f8
// Entry: 0010e3f8

uint FUN_0010e3f8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  int iVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined1 auStack_f8 [124];
  undefined1 auStack_7c [20];
  ulong local_68;
  
  lVar2 = tpidr_el0;
  uVar5 = *(ulong *)(lVar2 + 0x28);
  puVar7 = (undefined4 *)*param_2;
  puVar1 = &DAT_b2d4ce65352e561;
  if (puVar7 != (undefined4 *)0x0) {
    puVar1 = (undefined1 *)0x9bc176df3fa9530a;
  }
  puVar3 = (undefined1 *)0xfa82974fa315c9d9;
  local_68 = uVar5;
  do {
    while( true ) {
      while (puVar6 = puVar3, -0x57d68b05cea3628 < (long)puVar6) {
        puVar3 = puVar1;
        if ((puVar6 != (undefined1 *)0xfa82974fa315c9d9) &&
           (puVar3 = puVar6, puVar6 == &DAT_b2d4ce65352e561)) {
          uVar5 = 0;
          puVar3 = (undefined1 *)0xb5fbb0e4bad21fbd;
        }
      }
      if (puVar6 != (undefined1 *)0x9bc176df3fa9530a) break;
      FUN_001cc250(auStack_f8,0,0x78);
      FUN_001dbbb8(auStack_f8);
      FUN_001dbbe4(auStack_f8,*(undefined8 *)(puVar7 + 2),*puVar7);
      FUN_001dbf80(auStack_f8,auStack_7c);
      iVar4 = FUN_001cbfb0(param_1,auStack_7c,0x14);
      uVar5 = (ulong)(iVar4 == 0);
      puVar3 = (undefined1 *)0xb5fbb0e4bad21fbd;
    }
    puVar3 = puVar6;
  } while (puVar6 != (undefined1 *)0xb5fbb0e4bad21fbd);
  if (*(ulong *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (uint)uVar5 & 1;
}


