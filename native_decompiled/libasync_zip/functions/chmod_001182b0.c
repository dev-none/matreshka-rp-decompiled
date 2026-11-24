// Function: chmod
// Entry: 001182b0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int chmod(char *__file,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_chmod_0011c8b8)((int)__file,__mode);
  return iVar1;
}


