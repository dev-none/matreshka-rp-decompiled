// Function: syscall
// Entry: 001ec650

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long syscall(long __sysno,...)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_syscall_001f1160)();
  return lVar1;
}


