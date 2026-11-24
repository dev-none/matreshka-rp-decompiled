// Function: write
// Entry: 001ec730

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_write_001f11d0)(__fd);
  return sVar1;
}


