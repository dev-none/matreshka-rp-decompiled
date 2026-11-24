// Function: opendir
// Entry: 001ec5a0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
  DIR *pDVar1;
  
  pDVar1 = (DIR *)(*(code *)PTR_opendir_001f1108)();
  return pDVar1;
}


