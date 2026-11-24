// Function: zip_open
// Entry: 00113988

void * zip_open(char *param_1,uint param_2,byte param_3)

{
  uint uVar1;
  int iVar2;
  void *__ptr;
  FILE *pFVar3;
  
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    return (void *)0x0;
  }
  uVar1 = 6;
  if (-1 < (int)param_2) {
    uVar1 = param_2;
  }
  if ((uVar1 & 0xf) < 0xb) {
    __ptr = calloc(1,0x4e078);
    if (__ptr == (void *)0x0) {
      return (void *)0x0;
    }
    *(uint *)((long)__ptr + 0x70) = uVar1;
    if (param_3 < 0x72) {
      if (((param_3 == 0x61) || (param_3 == 100)) &&
         (iVar2 = mz_zip_reader_init_file_v2_rpb(__ptr,param_1,uVar1 | 0x800,0,0), iVar2 != 0)) {
        if ((param_3 != 100) && (param_3 != 0x61)) {
          return __ptr;
        }
        iVar2 = mz_zip_writer_init_from_reader_v2_noreopen(__ptr,param_1,0);
        if (iVar2 != 0) {
          return __ptr;
        }
        FUN_0010babc(__ptr,1);
      }
    }
    else if (param_3 == 0x72) {
      iVar2 = mz_zip_reader_init_file_v2(__ptr,param_1,uVar1 | 0x800,0,0);
      if (iVar2 != 0) {
        return __ptr;
      }
    }
    else if (param_3 == 0x77) {
      *(code **)((long)__ptr + 0x50) = FUN_0010fe8c;
      *(void **)((long)__ptr + 0x60) = __ptr;
      iVar2 = mz_zip_writer_init_v2(__ptr,0,0x4000);
      if (iVar2 != 0) {
        pFVar3 = fopen(param_1,"wb");
        if (pFVar3 != (FILE *)0x0) {
          *(FILE **)(*(long *)((long)__ptr + 0x68) + 0x70) = pFVar3;
          *(undefined4 *)((long)__ptr + 0x18) = 4;
          return __ptr;
        }
        FUN_0010fb20(__ptr,1);
      }
    }
    free(__ptr);
  }
  return (void *)0x0;
}


