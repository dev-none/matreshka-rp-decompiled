// Function: recvfrom
// Entry: 001ec720

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recvfrom(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t *__addr_len)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_recvfrom_001f11c8)(__fd,__buf,__n,__flags);
  return sVar1;
}


