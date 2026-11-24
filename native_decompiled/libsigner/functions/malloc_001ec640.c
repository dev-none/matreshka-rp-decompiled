// Function: malloc
// Entry: 001ec640

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_001f1158)();
  return pvVar1;
}


