// Function: open
// Entry: 001ec660

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open_001f1168)((int)__file,__oflag);
  return iVar1;
}


