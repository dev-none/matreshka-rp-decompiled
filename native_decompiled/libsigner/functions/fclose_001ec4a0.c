// Function: fclose
// Entry: 001ec4a0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_001f1088)((int)__stream);
  return iVar1;
}


