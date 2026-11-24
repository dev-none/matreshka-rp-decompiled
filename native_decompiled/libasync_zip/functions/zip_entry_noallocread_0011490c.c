// Function: zip_entry_noallocread
// Entry: 0011490c

undefined8 zip_entry_noallocread(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    return 0xffffffffffffffff;
  }
  if ((*(int *)(param_1 + 0x14) == 1) && (-1 < *(long *)(param_1 + 0x78))) {
    iVar1 = FUN_0010d0ec(param_1,*(long *)(param_1 + 0x78),param_2,param_3,0,0,0,0);
    if (iVar1 == 0) {
      uVar2 = 0xffffffffffffffee;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x88);
    }
    return uVar2;
  }
  return 0xfffffffffffffffd;
}


