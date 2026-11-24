// Function: stat
// Entry: 001ec5e0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat(char *__file,stat *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_stat_001f1128)((int)__file);
  return iVar1;
}


