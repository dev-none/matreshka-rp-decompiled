// Function: fflush
// Entry: 00118210

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_0011c868)((int)__stream);
  return iVar1;
}


