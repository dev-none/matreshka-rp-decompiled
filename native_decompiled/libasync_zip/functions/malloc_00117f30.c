// Function: malloc
// Entry: 00117f30

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0011c6f8)();
  return pvVar1;
}


