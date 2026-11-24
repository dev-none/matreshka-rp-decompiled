// Function: FUN_001e1540
// Entry: 001e1540

void FUN_001e1540(undefined4 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  void *__ptr;
  
  __ptr = *(void **)(param_1 + 2);
  lVar1 = -0x72dc51d93acf526c;
  if (__ptr != (void *)0x0) {
    lVar1 = 0x69a0f5aaf35dfa04;
  }
  lVar2 = -0x4885a353a244721e;
  do {
    while( true ) {
      while (lVar3 = lVar2, -0x4885a353a244721f < lVar3) {
        lVar2 = lVar1;
        if ((lVar3 != -0x4885a353a244721e) && (lVar2 = lVar3, lVar3 == 0x69a0f5aaf35dfa04)) {
          free(__ptr);
          *(undefined8 *)(param_1 + 2) = 0;
          lVar2 = -0x5d8c044866d3296a;
        }
      }
      if (lVar3 != -0x72dc51d93acf526c) break;
      lVar2 = -0x5d8c044866d3296a;
    }
    lVar2 = lVar3;
  } while (lVar3 != -0x5d8c044866d3296a);
  *param_1 = 0;
  return;
}


