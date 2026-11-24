// Function: _INIT_1
// Entry: 001ec374

void _INIT_1(void)

{
  int iVar1;
  ulong uVar2;
  undefined8 local_88;
  ulong uStack_80;
  undefined8 local_78;
  char acStack_6c [92];
  
  if ((DAT_001f8350 == 0) &&
     ((iVar1 = __system_property_get("ro.arch",acStack_6c), iVar1 < 1 ||
      (iVar1 = strncmp(acStack_6c,"exynos9810",10), iVar1 != 0)))) {
    uVar2 = getauxval(0x10);
    local_78 = getauxval(0x1a);
    local_88 = 0x18;
    uStack_80 = uVar2;
    FUN_001ebf3c(uVar2 | 0x4000000000000000,&local_88);
    return;
  }
  return;
}


