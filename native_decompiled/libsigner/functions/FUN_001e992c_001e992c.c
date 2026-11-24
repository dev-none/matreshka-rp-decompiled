// Function: FUN_001e992c
// Entry: 001e992c

void FUN_001e992c(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = (undefined1 *)0x4c1b9edb721e7222;
  if (param_1 != (undefined8 *)0x0) {
    puVar1 = &DAT_2b590051c346d3e;
  }
  puVar2 = (undefined1 *)0xd937f9741a083d9f;
  while( true ) {
    while (0x2b590051c346d3d < (long)puVar2) {
      if (puVar2 == &DAT_2b590051c346d3e) {
        FUN_001e9824(*param_1);
        free(param_1);
        puVar2 = (undefined1 *)0xc0eb019135e10a40;
      }
      else if (puVar2 == (undefined1 *)0x4c1b9edb721e7222) {
        puVar2 = (undefined1 *)0xc0eb019135e10a40;
      }
    }
    if (puVar2 == (undefined1 *)0xc0eb019135e10a40) break;
    if (puVar2 == (undefined1 *)0xd937f9741a083d9f) {
      puVar2 = puVar1;
    }
  }
  return;
}


