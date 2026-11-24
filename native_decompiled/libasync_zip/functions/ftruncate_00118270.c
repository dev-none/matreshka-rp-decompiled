// Function: ftruncate
// Entry: 00118270

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ftruncate(int __fd,__off_t __length)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ftruncate_0011c898)(__fd);
  return iVar1;
}


