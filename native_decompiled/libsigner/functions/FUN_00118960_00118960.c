// Function: FUN_00118960
// Entry: 00118960

void FUN_00118960(long param_1)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong unaff_x28;
  undefined4 local_6c;
  long local_68;
  
  puVar2 = PTR_PTR_001f1020;
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_6c = 0;
  uVar4 = 0x253cafb9335e0ab4;
  while( true ) {
    while (uVar4 < 0x4eae6d069c9a9c03) {
      if (uVar4 == 0x8b23ccad9df9f6a) {
        unaff_x28 = *(ulong *)(param_1 + 0x238);
        uVar4 = 0x4eae6d069c9a9c03;
      }
      else if ((uVar4 == 0x253cafb9335e0ab4) &&
              (uVar3 = FUN_001a3318(&local_6c,puVar2), uVar4 = 0x6dfb47bbe4cae7b2, (uVar3 & 1) == 0)
              ) {
        uVar4 = 0x8b23ccad9df9f6a;
      }
    }
    if (uVar4 == 0x4eae6d069c9a9c03) break;
    if (uVar4 == 0x6dfb47bbe4cae7b2) {
      FUN_001e9264(param_1 + 0x20,0x2f);
      unaff_x28 = *(ulong *)(param_1 + 0x238) | 1;
      uVar4 = 0x4eae6d069c9a9c03;
    }
  }
  *(ulong *)(param_1 + 0x238) = unaff_x28 | 0x800000000000;
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


