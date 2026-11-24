// Function: zip_entry_fwrite
// Entry: 00114680

void zip_entry_fwrite(long param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  FILE *__stream;
  size_t sVar6;
  undefined4 uVar7;
  stat local_20c0 [57];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (param_1 == 0) {
    uVar7 = 0xffffffff;
  }
  else {
    memset(local_20c0[0].__unused + 2,0,0x2000);
    local_20c0[0].st_ino = 0;
    local_20c0[0].st_dev = 0;
    local_20c0[0].st_mode = 0;
    local_20c0[0].st_uid = 0;
    local_20c0[0].st_nlink = 0;
    local_20c0[0].st_rdev = 0;
    local_20c0[0].st_gid = 0;
    local_20c0[0].__pad0 = 0;
    local_20c0[0].st_blksize = 0;
    local_20c0[0].st_size = 0;
    local_20c0[0].st_atim.tv_sec = 0;
    local_20c0[0].st_blocks = 0;
    local_20c0[0].st_mtim.tv_sec = 0;
    local_20c0[0].st_atim.tv_nsec = 0;
    local_20c0[0].st_ctim.tv_sec = 0;
    local_20c0[0].st_mtim.tv_nsec = 0;
    local_20c0[0].__unused[0] = 0;
    local_20c0[0].st_ctim.tv_nsec = 0;
    iVar5 = stat(param_2,local_20c0);
    if (iVar5 == 0) {
      uVar1 = (uint)local_20c0[0].st_nlink & 0xf000;
      uVar2 = (uint)local_20c0[0].st_nlink;
      if (uVar1 != 0x4000) {
        uVar2 = (uint)local_20c0[0].st_nlink & 0xfff;
      }
      uVar3 = uVar2 | 0xffff8000;
      if (uVar1 != 0x8000) {
        uVar3 = uVar2;
      }
      uVar2 = uVar3 | 0xffffa000;
      if (uVar1 != 0xa000) {
        uVar2 = uVar3;
      }
      uVar3 = uVar2 | 0x6000;
      if (uVar1 != 0x6000) {
        uVar3 = uVar2;
      }
      uVar2 = uVar3 | 0x2000;
      if (uVar1 != 0x2000) {
        uVar2 = uVar3;
      }
      uVar3 = uVar2 | 0x1000;
      if (uVar1 != 0x1000) {
        uVar3 = uVar2;
      }
      uVar2 = uVar3 | 0xc000;
      if (uVar1 != 0xc000) {
        uVar2 = uVar3;
      }
      *(__time_t *)(param_1 + 0x4e070) = local_20c0[0].st_mtim.tv_sec;
      uVar3 = ((uint)local_20c0[0].st_nlink >> 7 & 1 | uVar2 << 0x10) ^ 1;
      uVar2 = uVar3 | 0x10;
      if (uVar1 != 0x4000) {
        uVar2 = uVar3;
      }
      *(uint *)(param_1 + 0x4e068) = uVar2;
      __stream = fopen(param_2,"rb");
      if (__stream == (FILE *)0x0) {
        uVar7 = 0xfffffff0;
      }
      else {
        do {
          sVar6 = fread(local_20c0[0].__unused + 2,1,0x2000,__stream);
          if (sVar6 == 0) {
            uVar7 = 0;
            goto LAB_001147d4;
          }
          iVar5 = zip_entry_write(param_1,local_20c0[0].__unused + 2,sVar6);
        } while (-1 < iVar5);
        uVar7 = 0xfffffff8;
LAB_001147d4:
        fclose(__stream);
      }
    }
    else {
      uVar7 = 0xfffffffd;
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}


