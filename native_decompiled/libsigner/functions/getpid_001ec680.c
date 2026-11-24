// Function: getpid
// Entry: 001ec680

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_getpid_001f1178)();
  return _Var1;
}


