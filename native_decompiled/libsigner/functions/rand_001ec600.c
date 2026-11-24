// Function: rand
// Entry: 001ec600

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rand(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rand_001f1138)();
  return iVar1;
}


