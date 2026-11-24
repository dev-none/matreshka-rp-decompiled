// Function: mz_zip_reader_locate_file
// Entry: 0010ccd4

void mz_zip_reader_locate_file(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 local_2c;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  iVar2 = mz_zip_reader_locate_file_v2();
  if (iVar2 == 0) {
    local_2c = 0xffffffff;
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_2c);
}


