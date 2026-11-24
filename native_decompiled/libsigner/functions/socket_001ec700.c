// Function: socket
// Entry: 001ec700

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_socket_001f11b8)(__domain,__type,__protocol);
  return iVar1;
}


