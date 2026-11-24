// Function: FUN_001e5318
// Entry: 001e5318

void FUN_001e5318(long *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  FILE *local_88;
  
  puVar1 = (undefined1 *)0x2467c250713f82d4;
  if (param_1 != (long *)0x0) {
    puVar1 = (undefined1 *)0xe5248230beacb780;
  }
  puVar2 = (undefined1 *)0xa0d7c67c60e7a82e;
  do {
    while( true ) {
      while( true ) {
        while (puVar3 = puVar2, puVar2 = puVar3, (long)puVar3 < -0x74736ab24c9835f) {
          puVar2 = puVar1;
          if (puVar3 != (undefined1 *)0xa0d7c67c60e7a82e) {
            if (puVar3 == (undefined1 *)0xd937f9741a083d9f) {
              fclose(local_88);
              *param_1 = 0;
              puVar2 = (undefined1 *)0x4c1b9edb721e7222;
            }
            else {
              puVar2 = puVar3;
              if ((puVar3 == (undefined1 *)0xe5248230beacb780) &&
                 (local_88 = (FILE *)*param_1, puVar2 = (undefined1 *)0xf8b8c954db367ca1,
                 local_88 != (FILE *)0x0)) {
                puVar2 = (undefined1 *)0xd937f9741a083d9f;
              }
            }
          }
        }
        if ((long)puVar3 < 0x2467c250713f82d4) break;
        if (puVar3 == (undefined1 *)0x4c1b9edb721e7222) {
          thunk_FUN_001e2250(param_1 + 3);
          thunk_FUN_001e4550(param_1 + 5);
          thunk_FUN_001e4550(param_1 + 7);
          free(param_1);
          puVar2 = &DAT_2b590051c346d3e;
        }
        else if (puVar3 == (undefined1 *)0x2467c250713f82d4) {
          puVar2 = &DAT_2b590051c346d3e;
        }
      }
      if (puVar3 != (undefined1 *)0xf8b8c954db367ca1) break;
      puVar2 = (undefined1 *)0x4c1b9edb721e7222;
    }
  } while (puVar3 != &DAT_2b590051c346d3e);
  return;
}


