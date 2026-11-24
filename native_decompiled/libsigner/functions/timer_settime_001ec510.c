// Function: timer_settime
// Entry: 001ec510

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int timer_settime(timer_t __timerid,int __flags,itimerspec *__value,itimerspec *__ovalue)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_timer_settime_001f10c0)((int)__timerid,__flags);
  return iVar1;
}


