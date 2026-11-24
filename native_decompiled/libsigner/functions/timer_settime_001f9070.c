// Function: timer_settime
// Entry: 001f9070

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int timer_settime(timer_t __timerid,int __flags,itimerspec *__value,itimerspec *__ovalue)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


