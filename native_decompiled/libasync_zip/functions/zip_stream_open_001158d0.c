// Function: zip_stream_open
// Entry: 001158d0

void * zip_stream_open(long param_1,long param_2,uint param_3,char param_4)

{
  uint uVar1;
  int iVar2;
  void *__ptr;
  long lVar3;
  long lVar4;
  
  __ptr = calloc(1,0x4e078);
  if (__ptr != (void *)0x0) {
    uVar1 = 6;
    if (-1 < (int)param_3) {
      uVar1 = param_3;
    }
    if ((uVar1 & 0xf) < 0xb) {
      *(uint *)((long)__ptr + 0x70) = uVar1;
      if (((param_1 == 0) || (param_2 == 0)) || (param_4 != 'r')) {
        if (((param_1 == 0) && (param_2 == 0)) && (param_4 == 'w')) {
          *(code **)((long)__ptr + 0x50) = FUN_0010fa48;
          *(void **)((long)__ptr + 0x60) = __ptr;
          iVar2 = mz_zip_writer_init_v2(__ptr,0,0);
          if (iVar2 != 0) {
            *(undefined4 *)((long)__ptr + 0x18) = 3;
            lVar3 = (**(code **)((long)__ptr + 0x28))(*(undefined8 *)((long)__ptr + 0x40),1,0x400);
            lVar4 = *(long *)((long)__ptr + 0x68);
            *(long *)(lVar4 + 0x80) = lVar3;
            if (lVar3 != 0) {
              *(undefined8 *)(lVar4 + 0x90) = 0x400;
              return __ptr;
            }
            FUN_0010fb20(__ptr,0);
          }
        }
      }
      else {
        iVar2 = mz_zip_reader_init_mem(__ptr,param_1,param_2,0);
        if (iVar2 != 0) {
          return __ptr;
        }
      }
    }
    free(__ptr);
  }
  return (void *)0x0;
}


