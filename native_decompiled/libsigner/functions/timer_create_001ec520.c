// Function: timer_create
// Entry: 001ec520

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int timer_create(clockid_t __clock_id,sigevent *__evp,timer_t *__timerid)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_timer_create_001f10c8)(__clock_id);
  return iVar1;
}


