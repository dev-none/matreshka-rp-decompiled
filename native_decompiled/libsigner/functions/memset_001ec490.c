// Function: memset
// Entry: 001ec490

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_001f1080)(__s,__c);
  return pvVar1;
}


