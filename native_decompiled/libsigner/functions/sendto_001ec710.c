// Function: sendto
// Entry: 001ec710

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t sendto(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t __addr_len)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_sendto_001f11c0)(__fd,__buf,__n,__flags,__addr,__addr_len);
  return sVar1;
}


