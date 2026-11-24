// Function: connect
// Entry: 001ec6e0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int connect(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_connect_001f11a8)(__fd,__addr,__len);
  return iVar1;
}


