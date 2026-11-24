// =========================================================================
// Function: imp_eglGetProcAddress
// Entry: 0x71e03790 | Size: 1 bytes
// =========================================================================

void imp_eglGetProcAddress(void)

{
  return;
}


// =========================================================================
// Function: imp_alBufferData
// Entry: 0x71e037a0 | Size: 1 bytes
// =========================================================================

void imp_alBufferData(void)

{
  return;
}


// =========================================================================
// Function: imp_alDeleteBuffers
// Entry: 0x71e037b0 | Size: 1 bytes
// =========================================================================

void imp_alDeleteBuffers(void)

{
  return;
}


// =========================================================================
// Function: imp_alDeleteSources
// Entry: 0x71e037c0 | Size: 1 bytes
// =========================================================================

void imp_alDeleteSources(void)

{
  return;
}


// =========================================================================
// Function: imp_alGenBuffers
// Entry: 0x71e037d0 | Size: 1 bytes
// =========================================================================

void imp_alGenBuffers(void)

{
  return;
}


// =========================================================================
// Function: imp_alGetSourcei
// Entry: 0x71e037e0 | Size: 1 bytes
// =========================================================================

void imp_alGetSourcei(void)

{
  return;
}


// =========================================================================
// Function: imp_alSourcePlay
// Entry: 0x71e037f0 | Size: 1 bytes
// =========================================================================

void imp_alSourcePlay(void)

{
  return;
}


// =========================================================================
// Function: imp_alSourceQueueBuffers
// Entry: 0x71e03800 | Size: 1 bytes
// =========================================================================

void imp_alSourceQueueBuffers(void)

{
  return;
}


// =========================================================================
// Function: imp_alSourceStop
// Entry: 0x71e03810 | Size: 1 bytes
// =========================================================================

void imp_alSourceStop(void)

{
  return;
}


// =========================================================================
// Function: imp_alSourceUnqueueBuffers
// Entry: 0x71e03820 | Size: 1 bytes
// =========================================================================

void imp_alSourceUnqueueBuffers(void)

{
  return;
}


// =========================================================================
// Function: imp_alSourcef
// Entry: 0x71e03830 | Size: 1 bytes
// =========================================================================

void imp_alSourcef(void)

{
  return;
}


// =========================================================================
// Function: imp_alSourcei
// Entry: 0x71e03840 | Size: 1 bytes
// =========================================================================

void imp_alSourcei(void)

{
  return;
}


// =========================================================================
// Function: imp_alGenSources
// Entry: 0x71e03850 | Size: 1 bytes
// =========================================================================

void imp_alGenSources(void)

{
  return;
}


// =========================================================================
// Function: imp_expf
// Entry: 0x71e03860 | Size: 1 bytes
// =========================================================================

void imp_expf(void)

{
  return;
}


// =========================================================================
// Function: imp_isnanf
// Entry: 0x71e03870 | Size: 1 bytes
// =========================================================================

void imp_isnanf(void)

{
  return;
}


// =========================================================================
// Function: imp___strcat_chk
// Entry: 0x71e03880 | Size: 1 bytes
// =========================================================================

void imp___strcat_chk(void)

{
  return;
}


// =========================================================================
// Function: thunk_RRPALJeaSXMvjIoKM
// Entry: 0x71e03890 | Size: 1 bytes
// =========================================================================

void thunk_RRPALJeaSXMvjIoKM(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  
  iVar3 = FUN_714c9a38();
  if (iVar3 <= param_2) {
    return;
  }
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_711f414c);
  iVar3 = DAT_711f4128;
  if (DAT_711f412c < DAT_711f4130) {
    DAT_711f412c[1] = param_2;
    DAT_711f412c[2] = param_3;
    puVar6 = DAT_711f412c + 4;
    *DAT_711f412c = param_1;
    DAT_711f412c[3] = param_4;
  }
  else {
    iVar5 = (int)DAT_711f412c - DAT_711f4128;
    iVar1 = iVar5 >> 4;
    uVar7 = iVar1 + 1;
    if (0xfffffff < uVar7) {
      FUN_716e65c8(&DAT_711f4128);
LAB_716e47ac:
                    /* WARNING: Subroutine does not return */
      FUN_712f6cf0();
    }
    uVar2 = (int)DAT_711f4130 - DAT_711f4128 >> 3;
    if (uVar7 < uVar2) {
      uVar7 = uVar2;
    }
    if (0x7fffffef < (uint)((int)DAT_711f4130 - DAT_711f4128)) {
      uVar7 = 0xfffffff;
    }
    if (uVar7 == 0) {
      iVar4 = 0;
    }
    else {
      if (0xfffffff < uVar7) goto LAB_716e47ac;
      iVar4 = thunk_MwhHq(uVar7 << 4);
    }
    puVar6 = (undefined4 *)(iVar4 + iVar1 * 0x10);
    *puVar6 = param_1;
    puVar6[1] = param_2;
    puVar6[2] = param_3;
    puVar6[3] = param_4;
    imp___aeabi_memcpy4(iVar4,iVar3,iVar5);
    puVar6 = puVar6 + 4;
    DAT_711f4130 = (undefined4 *)(iVar4 + uVar7 * 0x10);
    DAT_711f4128 = iVar4;
    if (iVar3 != 0) {
      DAT_711f412c = puVar6;
      thunk_qNQrlu(iVar3);
    }
  }
  DAT_711f412c = puVar6;
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_711f414c);
  return;
}


// =========================================================================
// Function: imp_nextafterf
// Entry: 0x71e038a0 | Size: 1 bytes
// =========================================================================

void imp_nextafterf(void)

{
  return;
}


// =========================================================================
// Function: imp__exit
// Entry: 0x71e038b0 | Size: 1 bytes
// =========================================================================

void imp__exit(void)

{
  return;
}


// =========================================================================
// Function: imp___strncat_chk
// Entry: 0x71e038c0 | Size: 1 bytes
// =========================================================================

void imp___strncat_chk(void)

{
  return;
}


// =========================================================================
// Function: imp___aeabi_memmove8
// Entry: 0x71e038d0 | Size: 1 bytes
// =========================================================================

void imp___aeabi_memmove8(void)

{
  return;
}


// =========================================================================
// Function: imp_AAssetManager_open
// Entry: 0x71e038e0 | Size: 1 bytes
// =========================================================================

void imp_AAssetManager_open(void)

{
  return;
}


// =========================================================================
// Function: imp_AAsset_close
// Entry: 0x71e038f0 | Size: 1 bytes
// =========================================================================

void imp_AAsset_close(void)

{
  return;
}


// =========================================================================
// Function: imp_AAsset_read
// Entry: 0x71e03900 | Size: 1 bytes
// =========================================================================

void imp_AAsset_read(void)

{
  return;
}


// =========================================================================
// Function: imp_AAsset_getLength
// Entry: 0x71e03910 | Size: 1 bytes
// =========================================================================

void imp_AAsset_getLength(void)

{
  return;
}


// =========================================================================
// Function: imp_AAsset_getRemainingLength
// Entry: 0x71e03920 | Size: 1 bytes
// =========================================================================

void imp_AAsset_getRemainingLength(void)

{
  return;
}


// =========================================================================
// Function: imp_AAsset_seek
// Entry: 0x71e03930 | Size: 1 bytes
// =========================================================================

void imp_AAsset_seek(void)

{
  return;
}


// =========================================================================
// Function: imp_AAssetManager_fromJava
// Entry: 0x71e03940 | Size: 1 bytes
// =========================================================================

void imp_AAssetManager_fromJava(void)

{
  return;
}


// =========================================================================
// Function: thunk_JDA_q_kxIVFAPbJRwhXxzyrzgAbxmkfLYbaWoCEnQDfPuKCVDAPozK
// Entry: 0x71e03950 | Size: 1 bytes
// =========================================================================

void thunk_JDA_q_kxIVFAPbJRwhXxzyrzgAbxmkfLYbaWoCEnQDfPuKCVDAPozK(void)

{
  JDA_q_kxIVFAPbJRwhXxzyrzgAbxmkfLYbaWoCEnQDfPuKCVDAPozK();
  return;
}


// =========================================================================
// Function: thunk_kQYqFxAwolEAJmJHuBnNLeFGVBJlINyxDZLgdjRUzMEZAzoSTEgsEiEDNcqptjEx_kzJstpEIQEl
// Entry: 0x71e03960 | Size: 1 bytes
// =========================================================================

void thunk_kQYqFxAwolEAJmJHuBnNLeFGVBJlINyxDZLgdjRUzMEZAzoSTEgsEiEDNcqptjEx_kzJstpEIQEl(void)

{
  kQYqFxAwolEAJmJHuBnNLeFGVBJlINyxDZLgdjRUzMEZAzoSTEgsEiEDNcqptjEx_kzJstpEIQEl();
  return;
}


// =========================================================================
// Function: imp_strsignal
// Entry: 0x71e03970 | Size: 1 bytes
// =========================================================================

void imp_strsignal(void)

{
  return;
}


// =========================================================================
// Function: imp_sigaction
// Entry: 0x71e03980 | Size: 1 bytes
// =========================================================================

void imp_sigaction(void)

{
  return;
}


// =========================================================================
// Function: thunk_geqEBrgwllyJBVjWmsFzTozYYZFJQrNSIhIxjEWbbdhLOEScNfLTUJ
// Entry: 0x71e03990 | Size: 1 bytes
// =========================================================================

void thunk_geqEBrgwllyJBVjWmsFzTozYYZFJQrNSIhIxjEWbbdhLOEScNfLTUJ(void)

{
  geqEBrgwllyJBVjWmsFzTozYYZFJQrNSIhIxjEWbbdhLOEScNfLTUJ();
  return;
}


// =========================================================================
// Function: imp_sigemptyset
// Entry: 0x71e039a0 | Size: 1 bytes
// =========================================================================

void imp_sigemptyset(void)

{
  return;
}


// =========================================================================
// Function: thunk_hNNuIKbSIfMIcLLugm_WGLsY_kgMHJsFRTrO
// Entry: 0x71e039b0 | Size: 1 bytes
// =========================================================================

void thunk_hNNuIKbSIfMIcLLugm_WGLsY_kgMHJsFRTrO(void)

{
  hNNuIKbSIfMIcLLugm_WGLsY_kgMHJsFRTrO();
  return;
}


// =========================================================================
// Function: thunk_oZakKGqmETUHXnsYJRInxtnJQqaVfpWbtodHMx
// Entry: 0x71e039c0 | Size: 1 bytes
// =========================================================================

void thunk_oZakKGqmETUHXnsYJRInxtnJQqaVfpWbtodHMx(void)

{
  oZakKGqmETUHXnsYJRInxtnJQqaVfpWbtodHMx();
  return;
}


// =========================================================================
// Function: imp_sched_yield
// Entry: 0x71e039d0 | Size: 1 bytes
// =========================================================================

void imp_sched_yield(void)

{
  return;
}


// =========================================================================
// Function: thunk_azjfLPxMogyHkNbyxUJJRuQTBnWZPlhMPCJBlycIPmSzBbRwbMKGmt
// Entry: 0x71e039e0 | Size: 1 bytes
// =========================================================================

void thunk_azjfLPxMogyHkNbyxUJJRuQTBnWZPlhMPCJBlycIPmSzBbRwbMKGmt(void)

{
  azjfLPxMogyHkNbyxUJJRuQTBnWZPlhMPCJBlycIPmSzBbRwbMKGmt();
  return;
}


// =========================================================================
// Function: thunk_RwqzrmzAkMQghYbV_YuXdEAmptcLevTkifczlTccrBfEOfiWtukCLMVhVNtO
// Entry: 0x71e039f0 | Size: 1 bytes
// =========================================================================

void thunk_RwqzrmzAkMQghYbV_YuXdEAmptcLevTkifczlTccrBfEOfiWtukCLMVhVNtO(void)

{
  RwqzrmzAkMQghYbV_YuXdEAmptcLevTkifczlTccrBfEOfiWtukCLMVhVNtO();
  return;
}


// =========================================================================
// Function: thunk_DvnMjaDGTcuvqchgjJALXSMKDBO_jbDCiHzGydVYfqyJrJhrRVmzJXcuMaOjRD_PVGaWanMNsHEyURaZngvJVGSPwIqcNa_LwXQqR
// Entry: 0x71e03a00 | Size: 1 bytes
// =========================================================================

void thunk_DvnMjaDGTcuvqchgjJALXSMKDBO_jbDCiHzGydVYfqyJrJhrRVmzJXcuMaOjRD_PVGaWanMNsHEyURaZngvJVGSPwIqcNa_LwXQqR
               (void)

{
  DvnMjaDGTcuvqchgjJALXSMKDBO_jbDCiHzGydVYfqyJrJhrRVmzJXcuMaOjRD_PVGaWanMNsHEyURaZngvJVGSPwIqcNa_LwXQqR
            ();
  return;
}


// =========================================================================
// Function: thunk_PvgkqSpamLbZrSkGHVYUggfDztprmEjdiqirRAVMMhqnPUmvlqjutKEzVJqDRVoS
// Entry: 0x71e03a10 | Size: 1 bytes
// =========================================================================

void thunk_PvgkqSpamLbZrSkGHVYUggfDztprmEjdiqirRAVMMhqnPUmvlqjutKEzVJqDRVoS(void)

{
  PvgkqSpamLbZrSkGHVYUggfDztprmEjdiqirRAVMMhqnPUmvlqjutKEzVJqDRVoS();
  return;
}


// =========================================================================
// Function: thunk_IwJFjSZTTKIzSUeBzSWvOofbERBfzNDjjyZpVsRdZ_uQhTxSEIuAGaOTkXzDt
// Entry: 0x71e03a20 | Size: 1 bytes
// =========================================================================

void thunk_IwJFjSZTTKIzSUeBzSWvOofbERBfzNDjjyZpVsRdZ_uQhTxSEIuAGaOTkXzDt(void)

{
  IwJFjSZTTKIzSUeBzSWvOofbERBfzNDjjyZpVsRdZ_uQhTxSEIuAGaOTkXzDt();
  return;
}


// =========================================================================
// Function: thunk_SyrgGOqkHOjKZxTwhjDUTaNGMiWvTWsQLTIHjeQJWv_nmnoWZsAIZwpjTXGqV
// Entry: 0x71e03a30 | Size: 1 bytes
// =========================================================================

void thunk_SyrgGOqkHOjKZxTwhjDUTaNGMiWvTWsQLTIHjeQJWv_nmnoWZsAIZwpjTXGqV(void)

{
  SyrgGOqkHOjKZxTwhjDUTaNGMiWvTWsQLTIHjeQJWv_nmnoWZsAIZwpjTXGqV();
  return;
}


// =========================================================================
// Function: thunk_oqNOvOAfqShVXSMjjGG_NGlzgujEYwsztyucVgcRkJvxnPuZnMqlLMf_DF
// Entry: 0x71e03a40 | Size: 1 bytes
// =========================================================================

void thunk_oqNOvOAfqShVXSMjjGG_NGlzgujEYwsztyucVgcRkJvxnPuZnMqlLMf_DF(void)

{
  oqNOvOAfqShVXSMjjGG_NGlzgujEYwsztyucVgcRkJvxnPuZnMqlLMf_DF();
  return;
}


// =========================================================================
// Function: thunk_wxuswyFjhpJiKeiAszVAwjXUfMjeQrLSXBycuYWdZhMLBBnQZzGWA_
// Entry: 0x71e03a50 | Size: 1 bytes
// =========================================================================

void thunk_wxuswyFjhpJiKeiAszVAwjXUfMjeQrLSXBycuYWdZhMLBBnQZzGWA_(void)

{
  wxuswyFjhpJiKeiAszVAwjXUfMjeQrLSXBycuYWdZhMLBBnQZzGWA_();
  return;
}


// =========================================================================
// Function: thunk_JJRaJAVqXjXXFJCnfaqgOAFBIBNGhsrbVgKGcfdLdtYkUBLEodGbFu
// Entry: 0x71e03a60 | Size: 1 bytes
// =========================================================================

void thunk_JJRaJAVqXjXXFJCnfaqgOAFBIBNGhsrbVgKGcfdLdtYkUBLEodGbFu(void)

{
  JJRaJAVqXjXXFJCnfaqgOAFBIBNGhsrbVgKGcfdLdtYkUBLEodGbFu();
  return;
}


// =========================================================================
// Function: imp_curl_easy_init
// Entry: 0x71e03a70 | Size: 1 bytes
// =========================================================================

void imp_curl_easy_init(void)

{
  return;
}


// =========================================================================
// Function: imp_curl_easy_setopt
// Entry: 0x71e03a80 | Size: 1 bytes
// =========================================================================

void imp_curl_easy_setopt(void)

{
  return;
}


// =========================================================================
// Function: imp_curl_slist_append
// Entry: 0x71e03a90 | Size: 1 bytes
// =========================================================================

void imp_curl_slist_append(void)

{
  return;
}


// =========================================================================
// Function: imp_curl_easy_perform
// Entry: 0x71e03aa0 | Size: 1 bytes
// =========================================================================

void imp_curl_easy_perform(void)

{
  return;
}


// =========================================================================
// Function: imp_curl_slist_free_all
// Entry: 0x71e03ab0 | Size: 1 bytes
// =========================================================================

void imp_curl_slist_free_all(void)

{
  return;
}


// =========================================================================
// Function: imp_curl_easy_cleanup
// Entry: 0x71e03ac0 | Size: 1 bytes
// =========================================================================

void imp_curl_easy_cleanup(void)

{
  return;
}


// =========================================================================
// Function: imp_atoll
// Entry: 0x71e03ad0 | Size: 1 bytes
// =========================================================================

void imp_atoll(void)

{
  return;
}


// =========================================================================
// Function: thunk_wbASMAxZzWjKdanmdVIXrT_SOMBkfHvErxLcEKmOHqCzeXaUpTEEXsnTpC
// Entry: 0x71e03ae0 | Size: 1 bytes
// =========================================================================

void thunk_wbASMAxZzWjKdanmdVIXrT_SOMBkfHvErxLcEKmOHqCzeXaUpTEEXsnTpC(void)

{
  wbASMAxZzWjKdanmdVIXrT_SOMBkfHvErxLcEKmOHqCzeXaUpTEEXsnTpC();
  return;
}


// =========================================================================
// Function: thunk_NSvtcoRaEJbwwqcTwihB_gGUKPDWhmLINE_PEvgc
// Entry: 0x71e03af0 | Size: 1 bytes
// =========================================================================

void thunk_NSvtcoRaEJbwwqcTwihB_gGUKPDWhmLINE_PEvgc(void)

{
  NSvtcoRaEJbwwqcTwihB_gGUKPDWhmLINE_PEvgc();
  return;
}


// =========================================================================
// Function: thunk_rMLVpBatktRctmEtzNK
// Entry: 0x71e03b00 | Size: 1 bytes
// =========================================================================

void thunk_rMLVpBatktRctmEtzNK(void)

{
  rMLVpBatktRctmEtzNK();
  return;
}


// =========================================================================
// Function: thunk_GTbmKLSjfAswPVvRgUvuoFLYJzPyFyyqm
// Entry: 0x71e03b10 | Size: 1 bytes
// =========================================================================

void thunk_GTbmKLSjfAswPVvRgUvuoFLYJzPyFyyqm(void)

{
  GTbmKLSjfAswPVvRgUvuoFLYJzPyFyyqm();
  return;
}


// =========================================================================
// Function: imp_avformat_alloc_context
// Entry: 0x71e03b20 | Size: 1 bytes
// =========================================================================

void imp_avformat_alloc_context(void)

{
  return;
}


// =========================================================================
// Function: imp_avformat_open_input
// Entry: 0x71e03b30 | Size: 1 bytes
// =========================================================================

void imp_avformat_open_input(void)

{
  return;
}


// =========================================================================
// Function: imp_avcodec_find_decoder
// Entry: 0x71e03b40 | Size: 1 bytes
// =========================================================================

void imp_avcodec_find_decoder(void)

{
  return;
}


// =========================================================================
// Function: imp_avcodec_alloc_context3
// Entry: 0x71e03b50 | Size: 1 bytes
// =========================================================================

void imp_avcodec_alloc_context3(void)

{
  return;
}


// =========================================================================
// Function: imp_avcodec_parameters_to_context
// Entry: 0x71e03b60 | Size: 1 bytes
// =========================================================================

void imp_avcodec_parameters_to_context(void)

{
  return;
}


// =========================================================================
// Function: imp_avcodec_open2
// Entry: 0x71e03b70 | Size: 1 bytes
// =========================================================================

void imp_avcodec_open2(void)

{
  return;
}


// =========================================================================
// Function: imp_av_frame_alloc
// Entry: 0x71e03b80 | Size: 1 bytes
// =========================================================================

void imp_av_frame_alloc(void)

{
  return;
}


// =========================================================================
// Function: imp_av_packet_alloc
// Entry: 0x71e03b90 | Size: 1 bytes
// =========================================================================

void imp_av_packet_alloc(void)

{
  return;
}


// =========================================================================
// Function: imp_avcodec_flush_buffers
// Entry: 0x71e03ba0 | Size: 1 bytes
// =========================================================================

void imp_avcodec_flush_buffers(void)

{
  return;
}


// =========================================================================
// Function: imp_avcodec_free_context
// Entry: 0x71e03bb0 | Size: 1 bytes
// =========================================================================

void imp_avcodec_free_context(void)

{
  return;
}


// =========================================================================
// Function: imp_avformat_close_input
// Entry: 0x71e03bc0 | Size: 1 bytes
// =========================================================================

void imp_avformat_close_input(void)

{
  return;
}


// =========================================================================
// Function: imp_av_frame_free
// Entry: 0x71e03bd0 | Size: 1 bytes
// =========================================================================

void imp_av_frame_free(void)

{
  return;
}


// =========================================================================
// Function: imp_av_packet_free
// Entry: 0x71e03be0 | Size: 1 bytes
// =========================================================================

void imp_av_packet_free(void)

{
  return;
}


// =========================================================================
// Function: imp_av_seek_frame
// Entry: 0x71e03bf0 | Size: 1 bytes
// =========================================================================

void imp_av_seek_frame(void)

{
  return;
}


// =========================================================================
// Function: imp_swr_alloc_set_opts2
// Entry: 0x71e03c00 | Size: 1 bytes
// =========================================================================

void imp_swr_alloc_set_opts2(void)

{
  return;
}


// =========================================================================
// Function: imp_swr_init
// Entry: 0x71e03c10 | Size: 1 bytes
// =========================================================================

void imp_swr_init(void)

{
  return;
}


// =========================================================================
// Function: imp_swr_free
// Entry: 0x71e03c20 | Size: 1 bytes
// =========================================================================

void imp_swr_free(void)

{
  return;
}


// =========================================================================
// Function: imp_alSourceRewind
// Entry: 0x71e03c30 | Size: 1 bytes
// =========================================================================

void imp_alSourceRewind(void)

{
  return;
}


// =========================================================================
// Function: imp_alSourcefv
// Entry: 0x71e03c40 | Size: 1 bytes
// =========================================================================

void imp_alSourcefv(void)

{
  return;
}


// =========================================================================
// Function: imp_av_packet_unref
// Entry: 0x71e03c50 | Size: 1 bytes
// =========================================================================

void imp_av_packet_unref(void)

{
  return;
}


// =========================================================================
// Function: imp_av_read_frame
// Entry: 0x71e03c60 | Size: 1 bytes
// =========================================================================

void imp_av_read_frame(void)

{
  return;
}


// =========================================================================
// Function: imp_avcodec_send_packet
// Entry: 0x71e03c70 | Size: 1 bytes
// =========================================================================

void imp_avcodec_send_packet(void)

{
  return;
}


// =========================================================================
// Function: imp_avcodec_receive_frame
// Entry: 0x71e03c80 | Size: 1 bytes
// =========================================================================

void imp_avcodec_receive_frame(void)

{
  return;
}


// =========================================================================
// Function: imp_swr_convert
// Entry: 0x71e03c90 | Size: 1 bytes
// =========================================================================

void imp_swr_convert(void)

{
  return;
}


// =========================================================================
// Function: imp_av_samples_get_buffer_size
// Entry: 0x71e03ca0 | Size: 1 bytes
// =========================================================================

void imp_av_samples_get_buffer_size(void)

{
  return;
}


// =========================================================================
// Function: imp_sws_freeContext
// Entry: 0x71e03cb0 | Size: 1 bytes
// =========================================================================

void imp_sws_freeContext(void)

{
  return;
}


// =========================================================================
// Function: imp_sws_getContext
// Entry: 0x71e03cc0 | Size: 1 bytes
// =========================================================================

void imp_sws_getContext(void)

{
  return;
}


// =========================================================================
// Function: imp_sws_scale
// Entry: 0x71e03cd0 | Size: 1 bytes
// =========================================================================

void imp_sws_scale(void)

{
  return;
}


// =========================================================================
// Function: imp_socket
// Entry: 0x71e03ce0 | Size: 1 bytes
// =========================================================================

void imp_socket(void)

{
  return;
}


// =========================================================================
// Function: imp_setsockopt
// Entry: 0x71e03cf0 | Size: 1 bytes
// =========================================================================

void imp_setsockopt(void)

{
  return;
}


// =========================================================================
// Function: imp_inet_addr
// Entry: 0x71e03d00 | Size: 1 bytes
// =========================================================================

void imp_inet_addr(void)

{
  return;
}


// =========================================================================
// Function: imp_sendto
// Entry: 0x71e03d10 | Size: 1 bytes
// =========================================================================

void imp_sendto(void)

{
  return;
}


// =========================================================================
// Function: imp_recvfrom
// Entry: 0x71e03d20 | Size: 1 bytes
// =========================================================================

void imp_recvfrom(void)

{
  return;
}


// =========================================================================
// Function: imp___system_property_get
// Entry: 0x71e03d30 | Size: 1 bytes
// =========================================================================

void imp___system_property_get(void)

{
  return;
}


// =========================================================================
// Function: imp_access
// Entry: 0x71e03d40 | Size: 1 bytes
// =========================================================================

void imp_access(void)

{
  return;
}


// =========================================================================
// Function: imp_open
// Entry: 0x71e03d50 | Size: 1 bytes
// =========================================================================

void imp_open(void)

{
  return;
}


// =========================================================================
// Function: imp___system_property_foreach
// Entry: 0x71e03d60 | Size: 1 bytes
// =========================================================================

void imp___system_property_foreach(void)

{
  return;
}


// =========================================================================
// Function: imp_getpid
// Entry: 0x71e03d70 | Size: 1 bytes
// =========================================================================

void imp_getpid(void)

{
  return;
}


// =========================================================================
// Function: imp_fgets
// Entry: 0x71e03d80 | Size: 1 bytes
// =========================================================================

void imp_fgets(void)

{
  return;
}


// =========================================================================
// Function: imp___system_property_read_callback
// Entry: 0x71e03d90 | Size: 1 bytes
// =========================================================================

void imp___system_property_read_callback(void)

{
  return;
}


// =========================================================================
// Function: imp_inet_ntoa
// Entry: 0x71e03da0 | Size: 1 bytes
// =========================================================================

void imp_inet_ntoa(void)

{
  return;
}


// =========================================================================
// Function: imp_pthread_attr_setdetachstate
// Entry: 0x71e03db0 | Size: 1 bytes
// =========================================================================

void imp_pthread_attr_setdetachstate(void)

{
  return;
}


// =========================================================================
// Function: imp_fcntl
// Entry: 0x71e03dc0 | Size: 1 bytes
// =========================================================================

void imp_fcntl(void)

{
  return;
}


// =========================================================================
// Function: imp_bind
// Entry: 0x71e03dd0 | Size: 1 bytes
// =========================================================================

void imp_bind(void)

{
  return;
}


// =========================================================================
// Function: imp_gethostbyname
// Entry: 0x71e03de0 | Size: 1 bytes
// =========================================================================

void imp_gethostbyname(void)

{
  return;
}


// =========================================================================
// Function: imp___sendto_chk
// Entry: 0x71e03df0 | Size: 1 bytes
// =========================================================================

void imp___sendto_chk(void)

{
  return;
}


// =========================================================================
// Function: imp_gethostname
// Entry: 0x71e03e00 | Size: 1 bytes
// =========================================================================

void imp_gethostname(void)

{
  return;
}


// =========================================================================
// Function: imp_getsockname
// Entry: 0x71e03e10 | Size: 1 bytes
// =========================================================================

void imp_getsockname(void)

{
  return;
}


// =========================================================================
// Function: imp_fflush
// Entry: 0x71e03e20 | Size: 1 bytes
// =========================================================================

void imp_fflush(void)

{
  return;
}


// =========================================================================
// Function: imp_FT_New_Memory_Face
// Entry: 0x71e03e30 | Size: 1 bytes
// =========================================================================

void imp_FT_New_Memory_Face(void)

{
  return;
}


// =========================================================================
// Function: imp_FT_Select_Charmap
// Entry: 0x71e03e40 | Size: 1 bytes
// =========================================================================

void imp_FT_Select_Charmap(void)

{
  return;
}


// =========================================================================
// Function: imp_FT_Request_Size
// Entry: 0x71e03e50 | Size: 1 bytes
// =========================================================================

void imp_FT_Request_Size(void)

{
  return;
}


// =========================================================================
// Function: imp_FT_Get_Char_Index
// Entry: 0x71e03e60 | Size: 1 bytes
// =========================================================================

void imp_FT_Get_Char_Index(void)

{
  return;
}


// =========================================================================
// Function: imp_FT_Load_Glyph
// Entry: 0x71e03e70 | Size: 1 bytes
// =========================================================================

void imp_FT_Load_Glyph(void)

{
  return;
}


// =========================================================================
// Function: imp_FT_GlyphSlot_Embolden
// Entry: 0x71e03e80 | Size: 1 bytes
// =========================================================================

void imp_FT_GlyphSlot_Embolden(void)

{
  return;
}


// =========================================================================
// Function: imp_FT_GlyphSlot_Oblique
// Entry: 0x71e03e90 | Size: 1 bytes
// =========================================================================

void imp_FT_GlyphSlot_Oblique(void)

{
  return;
}


// =========================================================================
// Function: imp_FT_Render_Glyph
// Entry: 0x71e03ea0 | Size: 1 bytes
// =========================================================================

void imp_FT_Render_Glyph(void)

{
  return;
}


// =========================================================================
// Function: imp_FT_Done_Face
// Entry: 0x71e03eb0 | Size: 1 bytes
// =========================================================================

void imp_FT_Done_Face(void)

{
  return;
}


// =========================================================================
// Function: imp_FT_New_Library
// Entry: 0x71e03ec0 | Size: 1 bytes
// =========================================================================

void imp_FT_New_Library(void)

{
  return;
}


// =========================================================================
// Function: imp_FT_Add_Default_Modules
// Entry: 0x71e03ed0 | Size: 1 bytes
// =========================================================================

void imp_FT_Add_Default_Modules(void)

{
  return;
}


// =========================================================================
// Function: imp_FT_Done_Library
// Entry: 0x71e03ee0 | Size: 1 bytes
// =========================================================================

void imp_FT_Done_Library(void)

{
  return;
}


// =========================================================================
// Function: imp_fgetc
// Entry: 0x71e03ef0 | Size: 1 bytes
// =========================================================================

void imp_fgetc(void)

{
  return;
}


// =========================================================================
// Function: imp_ungetc
// Entry: 0x71e03f00 | Size: 1 bytes
// =========================================================================

void imp_ungetc(void)

{
  return;
}


// =========================================================================
// Function: imp_fdopendir
// Entry: 0x71e03f10 | Size: 1 bytes
// =========================================================================

void imp_fdopendir(void)

{
  return;
}


// =========================================================================
// Function: thunk_RonwHAMfFkfHePDZsQbfotdXpZPBAQoByTKOHanuViHMotzDKNwxXwCpAKVkGpBVVUJqMnXd_RukzmaqRIk
// Entry: 0x71e03f20 | Size: 1 bytes
// =========================================================================

void thunk_RonwHAMfFkfHePDZsQbfotdXpZPBAQoByTKOHanuViHMotzDKNwxXwCpAKVkGpBVVUJqMnXd_RukzmaqRIk(void)

{
  RonwHAMfFkfHePDZsQbfotdXpZPBAQoByTKOHanuViHMotzDKNwxXwCpAKVkGpBVVUJqMnXd_RukzmaqRIk();
  return;
}


// =========================================================================
// Function: imp_sleep
// Entry: 0x71e03f30 | Size: 1 bytes
// =========================================================================

void imp_sleep(void)

{
  return;
}


// =========================================================================
// Function: imp_random
// Entry: 0x71e03f40 | Size: 1 bytes
// =========================================================================

void imp_random(void)

{
  return;
}


// =========================================================================
// Function: imp_mktime
// Entry: 0x71e03f50 | Size: 1 bytes
// =========================================================================

void imp_mktime(void)

{
  return;
}


// =========================================================================
// Function: imp_localtime
// Entry: 0x71e03f60 | Size: 1 bytes
// =========================================================================

void imp_localtime(void)

{
  return;
}


// =========================================================================
// Function: imp_printf
// Entry: 0x71e03f70 | Size: 1 bytes
// =========================================================================

void imp_printf(void)

{
  return;
}


// =========================================================================
// Function: imp_fileno
// Entry: 0x71e03f80 | Size: 1 bytes
// =========================================================================

void imp_fileno(void)

{
  return;
}


// =========================================================================
// Function: imp_ftruncate
// Entry: 0x71e03f90 | Size: 1 bytes
// =========================================================================

void imp_ftruncate(void)

{
  return;
}


// =========================================================================
// Function: thunk_LsnTkDchAn_z
// Entry: 0x71e03fa0 | Size: 1 bytes
// =========================================================================

bool thunk_LsnTkDchAn_z(uint param_1)

{
  return 0xffffff88 < param_1;
}


// =========================================================================
// Function: thunk_SfQHmAdePbttjvBOY
// Entry: 0x71e03fb0 | Size: 1 bytes
// =========================================================================

int thunk_SfQHmAdePbttjvBOY(uint param_1)

{
  int iVar1;
  
  iVar1 = -param_1;
  if (param_1 < 0xffffff89) {
    iVar1 = 0;
  }
  return iVar1;
}


// =========================================================================
// Function: thunk_ifwmCLdhzynZJVMmwhJIk
// Entry: 0x71e03fc0 | Size: 1 bytes
// =========================================================================

void thunk_ifwmCLdhzynZJVMmwhJIk(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (499 < param_2) {
    switch(param_2) {
    case 0x3e9:
      param_1[2] = 3;
      return;
    case 0x3ea:
    case 0x3f2:
    case 0x3f3:
    case 0x3f5:
    case 0x3f8:
      goto switchD_7196d4a8_caseD_a0;
    case 0x3eb:
      uVar1 = 0x20000;
      uVar2 = 0x40;
      break;
    case 0x3ec:
      param_1[2] = 0x7fffffff;
      return;
    case 0x3f7:
      uVar1 = 0x20000;
      uVar2 = 0x400;
      break;
    default:
      if (param_2 != 500) goto switchD_7196d4a8_caseD_6c;
    case 1000:
    case 0x3ed:
    case 0x3ee:
    case 0x3ef:
    case 0x3f0:
    case 0x3f1:
    case 0x3f4:
    case 0x3f6:
switchD_7196d4a8_caseD_c8:
      param_1[2] = 1;
      return;
    }
    goto LAB_7196d774;
  }
  switch(param_2) {
  case 100:
    uVar1 = 0x16;
    uVar2 = 0xfffe0000;
    break;
  case 0x65:
    uVar1 = 0x1e;
    uVar2 = 10;
    break;
  case 0x66:
  case 0xa1:
    uVar1 = 0x1e;
    goto LAB_7196d730;
  case 0x67:
    uVar1 = 0x1d;
LAB_7196d730:
    uVar2 = 6;
    break;
  case 0x68:
    uVar1 = 0x1d;
    goto LAB_7196d758;
  case 0x69:
    uVar1 = 7;
    uVar2 = 3;
    break;
  case 0x6a:
    param_1[2] = 0x20000;
    return;
  case 0x6b:
    uVar1 = 9;
    goto LAB_7196d758;
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
  case 0x80:
  case 0x81:
  case 0x82:
  case 0x83:
  case 0x84:
  case 0x85:
  case 0x86:
  case 0x87:
  case 0x88:
  case 0x89:
  case 0x8a:
  case 0x8b:
  case 0x8c:
  case 0x8d:
  case 0x8e:
  case 0x8f:
  case 0x90:
  case 0x91:
  case 0x92:
  case 0x93:
  case 0x94:
  case 0x95:
  case 0x96:
  case 0x97:
  case 0x98:
  case 0x99:
  case 0x9a:
  case 0x9b:
  case 0x9c:
  case 0x9d:
  case 0x9e:
  case 0x9f:
  case 0xa5:
  case 0xa6:
  case 0xa7:
  case 0xa8:
  case 0xa9:
  case 0xaa:
  case 0xab:
  case 0xac:
  case 0xad:
  case 0xae:
  case 0xaf:
  case 0xb0:
  case 0xb1:
  case 0xb2:
  case 0xb3:
  case 0xb4:
  case 0xb5:
  case 0xb6:
  case 0xb7:
  case 0xb8:
  case 0xb9:
  case 0xba:
  case 0xbb:
  case 0xbc:
  case 0xbd:
  case 0xbe:
  case 0xbf:
  case 0xc0:
  case 0xc1:
  case 0xc2:
  case 0xc3:
  case 0xc4:
  case 0xc5:
  case 0xc6:
  case 199:
    goto switchD_7196d4a8_caseD_6c;
  case 0xa0:
switchD_7196d4a8_caseD_a0:
    param_1[2] = 2;
    return;
  case 0xa2:
    uVar1 = 0x1000;
    uVar2 = 4;
    break;
  case 0xa3:
    uVar1 = 8;
LAB_7196d758:
    uVar2 = 1;
    break;
  case 0xa4:
    param_1[2] = 0x18;
    return;
  case 200:
  case 0xc9:
  case 0xca:
    goto switchD_7196d4a8_caseD_c8;
  default:
    if (param_2 - 400U < 3) {
      return;
    }
    if (param_2 == 10) goto switchD_7196d4a8_caseD_c8;
    goto switchD_7196d4a8_caseD_6c;
  }
LAB_7196d774:
  param_1[1] = uVar2;
  param_1[2] = uVar1;
  return;
switchD_7196d4a8_caseD_6c:
  *param_1 = 0xffffffd8;
  return;
}


// =========================================================================
// Function: thunk_LQQwQjWexoHWReNZPbLNOOqZrDEQ
// Entry: 0x71e03fd0 | Size: 1 bytes
// =========================================================================

uint thunk_LQQwQjWexoHWReNZPbLNOOqZrDEQ(uint *param_1,uint *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_3;
  if ((int)param_2 < 0x192) {
    if ((int)param_2 < 400) {
      switch(param_2) {
      case (uint *)0x64:
        if ((int)param_3 < -0x20000) {
          uVar2 = 0xfffe0000;
        }
        else {
          uVar2 = 0x16;
          if (((int)param_3 < 0x17) && (uVar2 = param_3, param_3 == 0)) {
            uVar2 = 3;
          }
        }
        param_1[0xb] = uVar2;
        return uVar2 & ~((int)uVar2 >> 0x1f);
      case (uint *)0x65:
        if ((param_3 != 0) && (iVar1 = FUN_7196e17c(0x65,param_3), iVar1 == 0)) {
          return 0xffffffd6;
        }
        param_1[1] = param_3;
        return param_3;
      case (uint *)0x66:
        if ((param_3 != 0) && (iVar1 = FUN_7196e17c(0x66,param_3), iVar1 == 0)) {
          return 0xffffffd6;
        }
        param_1[3] = param_3;
        return param_3;
      case (uint *)0x67:
        if ((param_3 != 0) && (iVar1 = FUN_7196e17c(0x67,param_3), iVar1 == 0)) {
          return 0xffffffd6;
        }
        param_1[2] = param_3;
        return param_3;
      case (uint *)0x68:
        if ((param_3 != 0) && (iVar1 = FUN_7196e17c(0x68,param_3), iVar1 == 0)) {
          return 0xffffffd6;
        }
        param_1[4] = param_3;
        return param_3;
      case (uint *)0x69:
        if ((param_3 != 0) && (iVar1 = FUN_7196e17c(0x69,param_3), iVar1 == 0)) {
          return 0xffffffd6;
        }
        param_1[5] = param_3;
        return param_3;
      case (uint *)0x6a:
        if (0x20000 < param_3) {
          return 0xffffffd6;
        }
        param_1[6] = param_3;
        return param_3;
      case (uint *)0x6b:
        if ((param_3 != 0) && (iVar1 = FUN_7196e17c(0x6b,param_3), iVar1 == 0)) {
          return 0xffffffd6;
        }
        param_1[7] = param_3;
        return param_3;
      case (uint *)0x6c:
      case (uint *)0x6d:
      case (uint *)0x6e:
      case (uint *)0x6f:
      case (uint *)0x70:
      case (uint *)0x71:
      case (uint *)0x72:
      case (uint *)0x73:
      case (uint *)0x74:
      case (uint *)0x75:
      case (uint *)0x76:
      case (uint *)0x77:
      case (uint *)0x78:
      case (uint *)0x79:
      case (uint *)0x7a:
      case (uint *)0x7b:
      case (uint *)0x7c:
      case (uint *)0x7d:
      case (uint *)0x7e:
      case (uint *)0x7f:
      case (uint *)0x80:
      case (uint *)0x81:
      case (uint *)0x82:
      case (uint *)0x83:
      case (uint *)0x84:
      case (uint *)0x85:
      case (uint *)0x86:
      case (uint *)0x87:
      case (uint *)0x88:
      case (uint *)0x89:
      case (uint *)0x8a:
      case (uint *)0x8b:
      case (uint *)0x8c:
      case (uint *)0x8d:
      case (uint *)0x8e:
      case (uint *)0x8f:
      case (uint *)0x90:
      case (uint *)0x91:
      case (uint *)0x92:
      case (uint *)0x93:
      case (uint *)0x94:
      case (uint *)0x95:
      case (uint *)0x96:
      case (uint *)0x97:
      case (uint *)0x98:
      case (uint *)0x99:
      case (uint *)0x9a:
      case (uint *)0x9b:
      case (uint *)0x9c:
      case (uint *)0x9d:
      case (uint *)0x9e:
      case (uint *)0x9f:
      case (uint *)0xa5:
      case (uint *)0xa6:
      case (uint *)0xa7:
      case (uint *)0xa8:
      case (uint *)0xa9:
      case (uint *)0xaa:
      case (uint *)0xab:
      case (uint *)0xac:
      case (uint *)0xad:
      case (uint *)0xae:
      case (uint *)0xaf:
      case (uint *)0xb0:
      case (uint *)0xb1:
      case (uint *)0xb2:
      case (uint *)0xb3:
      case (uint *)0xb4:
      case (uint *)0xb5:
      case (uint *)0xb6:
      case (uint *)0xb7:
      case (uint *)0xb8:
      case (uint *)0xb9:
      case (uint *)0xba:
      case (uint *)0xbb:
      case (uint *)0xbc:
      case (uint *)0xbd:
      case (uint *)0xbe:
      case (uint *)0xbf:
      case (uint *)0xc0:
      case (uint *)0xc1:
      case (uint *)0xc2:
      case (uint *)0xc3:
      case (uint *)0xc4:
      case (uint *)0xc5:
      case (uint *)0xc6:
      case (uint *)0xc7:
        return 0xffffffd8;
      case (uint *)0xa0:
        if (2 < param_3) {
          return 0xffffffd6;
        }
        param_1[0x15] = param_3;
        return param_3;
      case (uint *)0xa1:
        if ((param_3 != 0) && (iVar1 = FUN_7196e17c(0xa1,param_3), iVar1 == 0)) {
          return 0xffffffd6;
        }
        param_1[0x16] = param_3;
        return param_3;
      case (uint *)0xa2:
        if ((param_3 != 0) && (iVar1 = FUN_7196e17c(0xa2,param_3), iVar1 == 0)) {
          return 0xffffffd6;
        }
        param_1[0x18] = param_3;
        return param_3;
      case (uint *)0xa3:
        if ((param_3 != 0) && (iVar1 = FUN_7196e17c(0xa3,param_3), iVar1 == 0)) {
          return 0xffffffd6;
        }
        param_1[0x17] = param_3;
        return param_3;
      case (uint *)0xa4:
        if ((param_3 != 0) && (iVar1 = FUN_7196e17c(0xa4,param_3), iVar1 == 0)) {
          return 0xffffffd6;
        }
        param_1[0x19] = param_3;
        return param_3;
      case (uint *)0xc8:
        param_1[8] = (uint)(param_3 != 0);
        return (uint)(param_3 != 0);
      case (uint *)0xc9:
        param_1[9] = (uint)(param_3 != 0);
        return (uint)(param_3 != 0);
      case (uint *)0xca:
        param_1[10] = (uint)(param_3 == 0);
        return (uint)(param_3 != 0);
      }
      if (param_2 != (uint *)0xa) {
        return 0xffffffd8;
      }
      if (1 < param_3) {
        return 0xffffffd6;
      }
      *param_1 = param_3;
      return param_3;
    }
    if (param_2 != (uint *)0x190) {
      param_1 = (uint *)0x191;
    }
    if (param_2 != (uint *)0x190 && param_2 != param_1) {
      return 0xffffffd8;
    }
LAB_7196db64:
    if (param_3 != 0) {
      uVar2 = 0xffffffd8;
    }
  }
  else {
    switch(param_2) {
    case (uint *)0x3e8:
      if (param_3 != 0) {
        param_3 = 1;
      }
      param_1[0xc] = param_3;
      uVar2 = param_3;
      break;
    case (uint *)0x3e9:
      uVar2 = 0xffffffd6;
      if (param_3 < 4) {
        param_1[0xf] = param_3;
        uVar2 = param_3;
      }
      break;
    case (uint *)0x3ea:
      uVar2 = 0xffffffd6;
      if (param_3 < 3) {
        param_1[0x10] = param_3;
        uVar2 = param_3;
      }
      break;
    case (uint *)0x3eb:
      if ((param_3 != 0) && (iVar1 = FUN_7196e17c(0x3eb,param_3), iVar1 == 0)) {
        return 0xffffffd6;
      }
      param_1[0xd] = param_3;
      break;
    case (uint *)0x3ec:
      if ((param_3 != 0) && (iVar1 = FUN_7196e17c(0x3ec,param_3), iVar1 == 0)) {
        return 0xffffffd6;
      }
      param_1[0xe] = param_3;
      break;
    case (uint *)0x3ed:
      if (param_3 != 0) {
        param_3 = 1;
      }
      param_1[0x1b] = param_3;
      uVar2 = param_3;
      break;
    case (uint *)0x3ee:
      uVar2 = 0xffffffd6;
      if (param_3 < 2) {
        param_1[0x1c] = param_3;
        uVar2 = param_3;
      }
      break;
    case (uint *)0x3ef:
      uVar2 = 0xffffffd6;
      if (param_3 < 2) {
        param_1[0x1d] = param_3;
        uVar2 = param_3;
      }
      break;
    case (uint *)0x3f0:
      uVar2 = 0xffffffd6;
      if (param_3 < 2) {
        param_1[0x1e] = param_3;
        uVar2 = param_3;
      }
      break;
    case (uint *)0x3f1:
      uVar2 = 0xffffffd6;
      if (param_3 < 2) {
        param_1[0x1f] = param_3;
        uVar2 = param_3;
      }
      break;
    case (uint *)0x3f2:
      uVar2 = 0xffffffd6;
      if (param_3 < 3) {
        param_1[0x20] = param_3;
        uVar2 = param_3;
      }
      break;
    case (uint *)0x3f3:
      uVar2 = 0xffffffd6;
      if (param_3 < 3) {
        param_1[0x21] = param_3;
        uVar2 = param_3;
      }
      break;
    case (uint *)0x3f4:
      uVar2 = 0xffffffd6;
      if (param_3 < 2) {
        param_1[0x22] = param_3;
        uVar2 = param_3;
      }
      break;
    case (uint *)0x3f5:
      uVar2 = 0xffffffd6;
      if (param_3 < 3) {
        param_1[0x26] = param_3;
        uVar2 = param_3;
      }
      break;
    case (uint *)0x3f6:
      uVar2 = 0xffffffd6;
      if (param_3 < 2) {
        param_1[0x27] = param_3;
        uVar2 = param_3;
      }
      break;
    case (uint *)0x3f7:
      if ((param_3 != 0) && (iVar1 = FUN_7196e17c(0x3f7,param_3), iVar1 == 0)) {
        return 0xffffffd6;
      }
      param_1[0x29] = param_3;
      break;
    case (uint *)0x3f8:
      uVar2 = 0xffffffd6;
      if (param_3 < 3) {
        param_1[0x2a] = param_3;
        uVar2 = param_3;
      }
      break;
    default:
      if ((param_2 != (uint *)0x192) && (param_2 != (uint *)0x1f4)) {
        return 0xffffffd8;
      }
      goto LAB_7196db64;
    }
  }
  return uVar2;
}


// =========================================================================
// Function: thunk_DtrvryxofmPXMXzqxIvPUvZHcr_O
// Entry: 0x71e03fe0 | Size: 1 bytes
// =========================================================================

undefined4 thunk_DtrvryxofmPXMXzqxIvPUvZHcr_O(uint *param_1,int param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffd8;
  if (param_2 < 1000) {
    switch(param_2) {
    case 100:
      uVar1 = param_1[0xb];
      break;
    case 0x65:
      uVar1 = param_1[1];
      break;
    case 0x66:
      uVar1 = param_1[3];
      break;
    case 0x67:
      uVar1 = param_1[2];
      break;
    case 0x68:
      uVar1 = param_1[4];
      break;
    case 0x69:
      uVar1 = param_1[5];
      break;
    case 0x6a:
      uVar1 = param_1[6];
      break;
    case 0x6b:
      uVar1 = param_1[7];
      break;
    case 0x6c:
    case 0x6d:
    case 0x6e:
    case 0x6f:
    case 0x70:
    case 0x71:
    case 0x72:
    case 0x73:
    case 0x74:
    case 0x75:
    case 0x76:
    case 0x77:
    case 0x78:
    case 0x79:
    case 0x7a:
    case 0x7b:
    case 0x7c:
    case 0x7d:
    case 0x7e:
    case 0x7f:
    case 0x80:
    case 0x81:
    case 0x82:
    case 0x83:
    case 0x84:
    case 0x85:
    case 0x86:
    case 0x87:
    case 0x88:
    case 0x89:
    case 0x8a:
    case 0x8b:
    case 0x8c:
    case 0x8d:
    case 0x8e:
    case 0x8f:
    case 0x90:
    case 0x91:
    case 0x92:
    case 0x93:
    case 0x94:
    case 0x95:
    case 0x96:
    case 0x97:
    case 0x98:
    case 0x99:
    case 0x9a:
    case 0x9b:
    case 0x9c:
    case 0x9d:
    case 0x9e:
    case 0x9f:
    case 0xa5:
    case 0xa6:
    case 0xa7:
    case 0xa8:
    case 0xa9:
    case 0xaa:
    case 0xab:
    case 0xac:
    case 0xad:
    case 0xae:
    case 0xaf:
    case 0xb0:
    case 0xb1:
    case 0xb2:
    case 0xb3:
    case 0xb4:
    case 0xb5:
    case 0xb6:
    case 0xb7:
    case 0xb8:
    case 0xb9:
    case 0xba:
    case 0xbb:
    case 0xbc:
    case 0xbd:
    case 0xbe:
    case 0xbf:
    case 0xc0:
    case 0xc1:
    case 0xc2:
    case 0xc3:
    case 0xc4:
    case 0xc5:
    case 0xc6:
    case 199:
      goto switchD_7196e268_caseD_6c;
    case 0xa0:
      uVar1 = param_1[0x15];
      break;
    case 0xa1:
      uVar1 = param_1[0x16];
      break;
    case 0xa2:
      uVar1 = param_1[0x18];
      break;
    case 0xa3:
      uVar1 = param_1[0x17];
      break;
    case 0xa4:
      uVar1 = param_1[0x19];
      break;
    case 200:
      uVar1 = param_1[8];
      break;
    case 0xc9:
      uVar1 = param_1[9];
      break;
    case 0xca:
      uVar1 = (uint)(param_1[10] == 0);
      break;
    default:
      if (param_2 == 10) {
        uVar1 = *param_1;
      }
      else {
        if (param_2 != 400) {
          return 0xffffffd8;
        }
        uVar1 = param_1[0x11];
      }
    }
  }
  else {
    switch(param_2) {
    case 1000:
      uVar1 = param_1[0xc];
      break;
    case 0x3e9:
      uVar1 = param_1[0xf];
      break;
    case 0x3ea:
      uVar1 = param_1[0x10];
      break;
    case 0x3eb:
      uVar1 = param_1[0xd];
      break;
    case 0x3ec:
      uVar1 = param_1[0xe];
      break;
    case 0x3ed:
      uVar1 = param_1[0x1b];
      break;
    case 0x3ee:
      uVar1 = param_1[0x1c];
      break;
    case 0x3ef:
      uVar1 = param_1[0x1d];
      break;
    case 0x3f0:
      uVar1 = param_1[0x1e];
      break;
    case 0x3f1:
      uVar1 = param_1[0x1f];
      break;
    case 0x3f2:
      uVar1 = param_1[0x20];
      break;
    case 0x3f3:
      uVar1 = param_1[0x21];
      break;
    case 0x3f4:
      uVar1 = param_1[0x22];
      break;
    case 0x3f5:
      uVar1 = param_1[0x26];
      break;
    case 0x3f6:
      uVar1 = param_1[0x27];
      break;
    case 0x3f7:
      uVar1 = param_1[0x29];
      break;
    case 0x3f8:
      uVar1 = param_1[0x2a];
      break;
    default:
      goto switchD_7196e268_caseD_6c;
    }
  }
  uVar2 = 0;
  *param_3 = uVar1;
switchD_7196e268_caseD_6c:
  return uVar2;
}


// =========================================================================
// Function: thunk_ttWgHnhKhscnplMfy_fZ
// Entry: 0x71e03ff0 | Size: 1 bytes
// =========================================================================

uint thunk_ttWgHnhKhscnplMfy_fZ
               (int param_1,uint param_2,uint param_3,int param_4,int param_5,int param_6,
               uint param_7,int param_8)

{
  int iVar1;
  
  if (param_2 - 0x1f < 0xffffffeb) {
    return 0xffffffd6;
  }
  if (param_3 - 0x1e < 0xffffffe8) {
    return 0xffffffd6;
  }
  if (param_4 - 0x1fU < 0xffffffe7) {
    return 0xffffffd6;
  }
  if (param_5 - 0x1eU < 0xffffffe3) {
    return 0xffffffd6;
  }
  if (param_6 - 8U < 0xfffffffb) {
    return 0xffffffd6;
  }
  if (0x20000 < param_7) {
    return 0xffffffd6;
  }
  if (param_8 - 10U < 0xfffffff7) {
    return 0xffffffd6;
  }
  if (*(int *)(param_1 + 0x964) != 0) {
    return 0xffffffc4;
  }
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  else {
    iVar1 = FUN_7196e17c(0x65);
    if (iVar1 == 0) {
      return 0xffffffd6;
    }
    *(uint *)(param_1 + 0x10) = param_2;
    if (0xffffff88 < param_2) {
      return param_2;
    }
  }
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  else {
    iVar1 = FUN_7196e17c(0x67,param_3);
    if (iVar1 == 0) {
      return 0xffffffd6;
    }
    *(uint *)(param_1 + 0x14) = param_3;
    if (0xffffff88 < param_3) {
      return param_3;
    }
  }
  iVar1 = FUN_7196e17c(0x66,param_4);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x18) = param_4;
    iVar1 = FUN_7196e17c(0x68,param_5);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x1c) = param_5;
      iVar1 = FUN_7196e17c(0x69,param_6);
      if (iVar1 != 0) {
        *(int *)(param_1 + 0x20) = param_6;
        *(uint *)(param_1 + 0x24) = param_7;
        iVar1 = FUN_7196e17c(0x6b,param_8);
        if (iVar1 != 0) {
          *(int *)(param_1 + 0x28) = param_8;
          return 0;
        }
        return 0xffffffd6;
      }
    }
  }
  return 0xffffffd6;
}


// =========================================================================
// Function: thunk_pmyuwIkRhOReHmEwSkRwofwbqZNlpdZAxG
// Entry: 0x71e04000 | Size: 1 bytes
// =========================================================================

uint thunk_pmyuwIkRhOReHmEwSkRwofwbqZNlpdZAxG
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,int param_7)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_f0 [68];
  int iStack_ac;
  undefined1 auStack_9c [48];
  int iStack_6c;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint auStack_44 [6];
  int iStack_2c;
  
  FUN_7196fe94(auStack_f0,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  if (0xfffffffc < param_7 - 6U) {
    iStack_6c = 2;
    FUN_7196f54c(auStack_44,auStack_f0,0xffffffff,0xffffffff,0,0);
    if (iStack_ac < 1) {
      uVar2 = FUN_7196f918(auStack_44,auStack_9c,1,2,0,0,0xffffffff,0xffffffff,uStack_50,uStack_4c);
      iStack_6c = 1;
      FUN_7196f54c(auStack_44,auStack_f0,0xffffffff,0xffffffff,0,0);
      uVar1 = 0xffffffff;
      if (iStack_ac < 1) {
        uVar1 = FUN_7196f918(auStack_44,auStack_9c,1,1,0,0,0xffffffff,0xffffffff,uStack_50,uStack_4c
                            );
      }
    }
    else {
      iStack_6c = 1;
      FUN_7196f54c(auStack_44,auStack_f0,0xffffffff,0xffffffff,0,0);
      uVar2 = 0xffffffff;
      uVar1 = 0xffffffff;
    }
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    return uVar1;
  }
  FUN_7196f54c(auStack_44,auStack_f0,0xffffffff,0xffffffff,0,0);
  if (((iStack_6c == 0) && (iStack_6c = 2, 0xfffffffc < iStack_2c - 6U)) && (0x11 < auStack_44[0]))
  {
    iStack_6c = 1;
  }
  if (0 < iStack_ac) {
    return 0xffffffff;
  }
  uVar1 = FUN_7196f918(auStack_44,auStack_9c,1,iStack_6c,0,0,0xffffffff,0xffffffff,uStack_50,
                       uStack_4c);
  return uVar1;
}


// =========================================================================
// Function: thunk_eCulnXEKrOvLYyCpNNixVmUXMzl_z_ZRpAgMQyTy
// Entry: 0x71e04010 | Size: 1 bytes
// =========================================================================

undefined4 thunk_eCulnXEKrOvLYyCpNNixVmUXMzl_z_ZRpAgMQyTy(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint auStack_3c [7];
  
  if (0 < *(int *)(param_1 + 0x44)) {
    return 0xffffffff;
  }
  iVar6 = 0;
  FUN_7196f54c(auStack_3c,param_1,0xffffffff,0xffffffff,0,0);
  uVar1 = *(uint *)(param_1 + 0xa4);
  iVar3 = 0;
  uVar4 = uVar1;
  if (uVar1 == 0) {
    uVar4 = 0x20000;
  }
  if ((uint)(1 << (auStack_3c[0] & 0xff)) <= uVar4) {
    uVar4 = 1 << (auStack_3c[0] & 0xff);
  }
  if (*(int *)(param_1 + 0x70) == 0) {
    iVar3 = uVar4 + (1 << (auStack_3c[0] & 0xff));
  }
  if (*(int *)(param_1 + 0x74) == 0) {
    iVar5 = uVar4 + (uVar4 >> 8);
    if (uVar4 < 0x20000) {
      iVar5 = iVar5 + (0x20000 - uVar4 >> 0xb);
    }
    iVar6 = iVar5 + 1;
    if (iVar5 == 0) {
      iVar6 = -0x47;
    }
  }
  iVar5 = *(int *)(param_1 + 0x84);
  if (((iVar5 == 0) && (iVar5 = 2, 0xfffffffc < *(int *)(param_1 + 0x1c) - 6U)) &&
     (0x11 < *(uint *)(param_1 + 4))) {
    iVar5 = 1;
  }
  uVar2 = FUN_7196f918(auStack_3c,param_1 + 0x54,1,iVar5,iVar3,iVar6,0xffffffff,0xffffffff,
                       *(undefined4 *)(param_1 + 0xa0),uVar1);
  return uVar2;
}


// =========================================================================
// Function: thunk_QyHAFAKwfGXdthRVoXFL
// Entry: 0x71e04020 | Size: 1 bytes
// =========================================================================

uint thunk_QyHAFAKwfGXdthRVoXFL(uint param_1,int *param_2,uint *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  int iStack_28;
  
  if ((uint)param_2[1] < (uint)param_2[2]) {
    return 0xffffffba;
  }
  uVar2 = param_3[1];
  uVar6 = param_3[2];
  if (uVar2 < uVar6) {
    return 0xffffffb8;
  }
  if (2 < param_4) {
    return 0xffffffd6;
  }
  if (*(int *)(param_1 + 0x964) == 0) {
    uVar4 = *(int *)(param_1 + 0x978) + (uVar2 - uVar6);
    if ((param_4 == 0) && (*(int *)(param_1 + 0x7c) == 1 && uVar4 >> 0x11 == 0)) {
      if (*(int *)(param_1 + 0x978) != 0) {
        uVar4 = *(uint *)(param_1 + 0x96c);
        bVar11 = *param_3 != uVar4;
        if (!bVar11) {
          uVar4 = *(uint *)(param_1 + 0x970);
        }
        if (bVar11 || uVar6 != uVar4) {
          return 0xffffffce;
        }
      }
      param_3[2] = uVar2;
      *(uint *)(param_1 + 0x974) = uVar2;
      uVar4 = *param_3;
      *(uint *)(param_1 + 0x970) = param_3[1];
      *(uint *)(param_1 + 0x96c) = uVar4;
      *(uint *)(param_1 + 0x978) = *(int *)(param_1 + 0x978) + (uVar2 - uVar6);
      if (*(int *)(param_1 + 0xc) != 0) {
        return 2;
      }
      return 6;
    }
    uVar2 = FUN_7197701c(param_1,param_4,uVar4);
    if (0xffffff88 < uVar2) {
      return uVar2;
    }
    iVar5 = *(int *)(param_1 + 0x128);
    uVar2 = param_1;
    if (iVar5 == 1) {
      uVar6 = param_3[1];
      uVar2 = param_3[2];
      *(uint *)(param_1 + 0x96c) = *param_3;
      *(uint *)(param_1 + 0x970) = uVar6;
      *(uint *)(param_1 + 0x974) = uVar2;
    }
    if (*(int *)(param_1 + 300) == 1) {
      uVar2 = param_2[1];
      *(uint *)(param_1 + 0x97c) = uVar2 - param_2[2];
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0x128);
  }
  if (iVar5 == 1) {
    if (*(uint *)(param_1 + 0x96c) != *param_3) {
      return 0xffffffce;
    }
    uVar2 = *(uint *)(param_1 + 0x974);
    if (uVar2 != param_3[2]) {
      return 0xffffffce;
    }
  }
  if ((*(int *)(param_1 + 300) == 1) &&
     (uVar2 = param_2[1] - param_2[2], *(uint *)(param_1 + 0x97c) != uVar2)) {
    return 0xffffffce;
  }
  uVar4 = *param_3;
  uVar6 = 0;
  uVar9 = 0;
  iStack_28 = 0;
  if (uVar4 != 0) {
    uVar2 = param_3[1];
    uVar6 = param_3[2];
  }
  uVar10 = 0;
  iVar8 = *param_2;
  if (uVar4 != 0) {
    uVar10 = uVar4 + uVar6;
    uVar9 = uVar4 + uVar2;
  }
  if (iVar8 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = iVar8 + param_2[2];
    iStack_28 = iVar8 + param_2[1];
  }
  if (iVar5 == 1) {
    param_3[2] = param_3[2] - *(int *)(param_1 + 0x978);
    iVar5 = *(int *)(param_1 + 0x978);
    *(undefined4 *)(param_1 + 0x978) = 0;
    uVar10 = uVar10 - iVar5;
  }
LAB_71976978:
  do {
    iVar5 = *(int *)(param_1 + 0x964);
    do {
      if (iVar5 == 0) {
        return 0xffffffc2;
      }
      if (iVar5 == 1) {
        uVar2 = uVar9;
        if (param_4 == 2) {
          uVar6 = uVar9 - uVar10;
          if (uVar6 < 0xff00ff00) {
            uVar3 = uVar6 + (uVar6 >> 8);
            if (uVar6 < 0x20000) {
              uVar3 = uVar3 + (0x20000 - uVar6 >> 0xb);
            }
            if (uVar3 == 0) {
              uVar3 = 0xffffffb8;
            }
          }
          else {
            uVar3 = 0xffffffb8;
          }
          if (((uVar3 <= (uint)(iStack_28 - iVar7)) || (*(int *)(param_1 + 300) == 1)) &&
             (*(int *)(param_1 + 0x94c) == 0)) {
            uVar6 = FUN_71973454(param_1,iVar7,iStack_28 - iVar7,uVar10,uVar6);
            if (0xffffff88 < uVar6) {
              return uVar6;
            }
            iVar7 = iVar7 + uVar6;
            *(undefined4 *)(param_1 + 0x964) = 0;
            *(undefined4 *)(param_1 + 0x248) = 0;
            *(undefined4 *)(param_1 + 0x24c) = 0;
            *(undefined4 *)(param_1 + 0x968) = 1;
            goto LAB_71976e2c;
          }
        }
        if (*(int *)(param_1 + 0x128) == 0) {
          iVar5 = *(int *)(param_1 + 0x94c);
          uVar2 = *(int *)(param_1 + 0x950) - iVar5;
          uVar6 = uVar9 - uVar10;
          if (uVar2 < uVar9 - uVar10) {
            uVar6 = uVar2;
          }
          if (uVar6 != 0) {
            imp___aeabi_memcpy(*(int *)(param_1 + 0x940) + iVar5,uVar10,uVar6);
            iVar5 = *(int *)(param_1 + 0x94c);
          }
          uVar3 = iVar5 + uVar6;
          uVar2 = uVar10;
          if (uVar10 != 0) {
            uVar2 = uVar10 + uVar6;
          }
          *(uint *)(param_1 + 0x94c) = uVar3;
          if (param_4 == 1) {
            if (uVar3 == *(uint *)(param_1 + 0x948)) goto LAB_71976e2c;
          }
          else if ((param_4 == 0) && (uVar3 < *(uint *)(param_1 + 0x950))) goto LAB_71976e2c;
LAB_71976b00:
          uVar6 = iStack_28 - iVar7;
          uVar10 = uVar2;
          if (*(int *)(param_1 + 0x128) != 0) goto LAB_71976b14;
          bVar11 = true;
          uVar2 = *(int *)(param_1 + 0x94c) - *(int *)(param_1 + 0x948);
        }
        else {
          if (param_4 == 1) {
            if (uVar10 == uVar9) goto LAB_71976e2c;
          }
          else if (param_4 == 0) {
            uVar2 = uVar10;
            if (*(uint *)(param_1 + 0x244) <= uVar9 - uVar10) goto LAB_71976b00;
            *(uint *)(param_1 + 0x978) = uVar9 - uVar10;
            uVar2 = uVar9;
            goto LAB_71976e2c;
          }
          uVar6 = iStack_28 - iVar7;
LAB_71976b14:
          bVar11 = false;
          uVar2 = *(uint *)(param_1 + 0x244);
          if (uVar9 - uVar10 < *(uint *)(param_1 + 0x244)) {
            uVar2 = uVar9 - uVar10;
          }
        }
        if (uVar2 < 0xff00ff00) {
          uVar3 = uVar2 + (uVar2 >> 8);
          if (uVar2 < 0x20000) {
            uVar3 = uVar3 + (0x20000 - uVar2 >> 0xb);
          }
          if (uVar3 == 0) {
            uVar3 = 0xffffffb8;
          }
        }
        else {
          uVar3 = 0xffffffb8;
        }
        iVar5 = iVar7;
        if ((uVar6 < uVar3) && (*(int *)(param_1 + 300) != 1)) {
          iVar5 = *(int *)(param_1 + 0x954);
          uVar6 = *(uint *)(param_1 + 0x958);
        }
        if (bVar11) {
          iVar1 = *(int *)(param_1 + 0x940) + *(int *)(param_1 + 0x948);
          if ((param_4 ^ 2) == 0 && (uVar10 ^ uVar9) == 0) {
            uVar6 = FUN_71973454(param_1,iVar5,uVar6,iVar1,uVar2);
          }
          else {
            uVar6 = FUN_719713e4(param_1,iVar5,uVar6,iVar1,uVar2,1,0);
          }
          if (0xffffff88 < uVar6) {
            return uVar6;
          }
          iVar1 = *(int *)(param_1 + 0x94c);
          uVar3 = (uint)((param_4 ^ 2) == 0 && (uVar10 ^ uVar9) == 0);
          uVar2 = *(int *)(param_1 + 0x244) + iVar1;
          *(uint *)(param_1 + 0x968) = uVar3;
          *(uint *)(param_1 + 0x950) = uVar2;
          if (*(uint *)(param_1 + 0x944) < uVar2) {
            iVar1 = 0;
            *(int *)(param_1 + 0x950) = *(int *)(param_1 + 0x244);
            *(undefined4 *)(param_1 + 0x94c) = 0;
          }
          *(int *)(param_1 + 0x948) = iVar1;
        }
        else {
          uVar3 = uVar10 + uVar2 ^ uVar9;
          if ((param_4 ^ 2) == 0 && uVar3 == 0) {
            uVar6 = FUN_71973454(param_1,iVar5,uVar6,uVar10,uVar2);
          }
          else {
            uVar6 = FUN_719713e4(param_1,iVar5,uVar6,uVar10,uVar2,1,0);
          }
          if (0xffffff88 < uVar6) {
            return uVar6;
          }
          uVar3 = (uint)((param_4 ^ 2) == 0 && uVar3 == 0);
          if (uVar10 != 0) {
            uVar10 = uVar10 + uVar2;
          }
          *(uint *)(param_1 + 0x968) = uVar3;
        }
        if (iVar5 == iVar7) {
          iVar7 = iVar7 + uVar6;
          if (uVar3 == 0) goto LAB_71976978;
          goto LAB_71976dac;
        }
        iVar5 = 0;
        *(uint *)(param_1 + 0x95c) = uVar6;
        *(undefined4 *)(param_1 + 0x960) = 0;
        *(undefined4 *)(param_1 + 0x964) = 2;
        uVar2 = uVar10;
        goto LAB_71976cf8;
      }
    } while (iVar5 != 2);
    uVar6 = *(uint *)(param_1 + 0x95c);
    iVar5 = *(int *)(param_1 + 0x960);
    uVar2 = uVar10;
LAB_71976cf8:
    uVar6 = uVar6 - iVar5;
    uVar3 = iStack_28 - iVar7;
    uVar10 = uVar6;
    if (uVar3 < uVar6) {
      uVar10 = uVar3;
    }
    if (uVar10 != 0) {
      imp___aeabi_memcpy(iVar7,*(int *)(param_1 + 0x954) + iVar5,uVar10);
      iVar5 = *(int *)(param_1 + 0x960);
    }
    iVar7 = iVar7 + uVar10;
    *(uint *)(param_1 + 0x960) = iVar5 + uVar10;
    if (uVar3 < uVar6) goto LAB_71976e2c;
    *(undefined4 *)(param_1 + 0x95c) = 0;
    *(undefined4 *)(param_1 + 0x960) = 0;
    uVar10 = uVar2;
    if (*(int *)(param_1 + 0x968) != 0) {
LAB_71976dac:
      *(undefined4 *)(param_1 + 0x964) = 0;
      *(undefined4 *)(param_1 + 0x248) = 0;
      *(undefined4 *)(param_1 + 0x24c) = 0;
      uVar2 = uVar10;
LAB_71976e2c:
      param_3[2] = uVar2 - uVar4;
      param_2[2] = iVar7 - iVar8;
      if (*(int *)(param_1 + 0x968) == 0) {
        if (*(int *)(param_1 + 0x128) == 1) {
          uVar2 = *(int *)(param_1 + 0x244) - *(int *)(param_1 + 0x978);
        }
        else {
          uVar2 = *(int *)(param_1 + 0x950) - *(int *)(param_1 + 0x94c);
          if (uVar2 == 0) {
            uVar2 = *(uint *)(param_1 + 0x244);
          }
        }
        if (0xffffff88 < uVar2) {
          return uVar2;
        }
      }
      if (*(int *)(param_1 + 0x128) == 1) {
        uVar6 = param_3[1];
        uVar2 = param_3[2];
        *(uint *)(param_1 + 0x96c) = *param_3;
        *(uint *)(param_1 + 0x970) = uVar6;
        *(uint *)(param_1 + 0x974) = uVar2;
      }
      if (*(int *)(param_1 + 300) == 1) {
        *(int *)(param_1 + 0x97c) = param_2[1] - param_2[2];
      }
      return *(int *)(param_1 + 0x95c) - *(int *)(param_1 + 0x960);
    }
    *(undefined4 *)(param_1 + 0x964) = 1;
  } while( true );
}


// =========================================================================
// Function: thunk_JPysUMBUZrdDoEsNCYQCfKO
// Entry: 0x71e04030 | Size: 1 bytes
// =========================================================================

void thunk_JPysUMBUZrdDoEsNCYQCfKO
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined1 *param_5,int param_6,undefined1 *param_7,uint param_8)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  
  puVar1 = (undefined1 *)0x0;
  if (param_6 != 0) {
    puVar1 = param_7;
  }
  puVar4 = puVar1 + (int)param_5;
  uVar5 = (uint)CARRY4((uint)puVar1,(uint)param_5);
  uVar7 = (ushort)(uVar5 == 0 && ((undefined1 *)0x20000 < puVar4) <= uVar5);
  if (uVar5 == 0 && ((undefined1 *)0x40000 < puVar4) <= uVar5) {
    uVar7 = uVar7 + 1;
  }
  if (uVar5 == 0 && ((undefined1 *)0x4000 < puVar4) <= uVar5) {
    uVar7 = uVar7 + 1;
  }
  uVar8 = param_8;
  if (0x15 < param_8) {
    uVar8 = 0x16;
  }
  if ((int)param_8 < 0) {
    uVar8 = 0;
  }
  if (param_8 == 0) {
    uVar8 = 3;
  }
  puVar14 = &DAT_7008c15c + (short)uVar7 * 0xa1 + uVar8 * 7;
  uVar15 = *puVar14;
  uVar12 = puVar14[4];
  uVar9 = puVar14[3];
  uVar16 = puVar14[1];
  uVar8 = puVar14[5];
  uVar17 = puVar14[6];
  uVar13 = 0xfffe0000;
  if (0xfffe0000 < param_8) {
    uVar13 = param_8;
  }
  if ((int)param_8 < 0) {
    uVar8 = -uVar13;
  }
  uVar13 = uVar15;
  if ((param_5 < &DAT_20000001) && (puVar1 < &DAT_20000001)) {
    uVar13 = 0x20 - LZCOUNT(puVar1 + (int)param_5 + -1);
    if (puVar1 + (int)param_5 < (undefined1 *)0x40) {
      uVar13 = 6;
    }
    if (uVar15 < uVar13) {
      uVar13 = uVar15;
    }
  }
  uVar15 = uVar13;
  if (puVar1 != (undefined1 *)0x0) {
    uVar10 = uVar13 - 0x20;
    uVar2 = 1 >> (0x20 - uVar13 & 0xff);
    if (-1 < (int)uVar10) {
      uVar2 = 1 << (uVar10 & 0xff);
    }
    puVar11 = (undefined1 *)(1 << (uVar13 & 0xff));
    if (-1 < (int)uVar10) {
      puVar11 = (undefined1 *)0x0;
    }
    if ((uVar2 <= uVar5 && (uint)(puVar4 <= puVar11) <= uVar2 - uVar5) &&
       (uVar15 = 0x1e,
       -(uVar2 + CARRY4((uint)puVar11,(uint)puVar1)) <
       (uint)(puVar11 + (int)puVar1 < (undefined1 *)0x40000000))) {
      uVar15 = 0x20 - LZCOUNT(puVar11 + (int)puVar1 + -1);
    }
  }
  uVar2 = uVar15 + 1;
  uVar10 = uVar15;
  uVar5 = uVar16;
  if (5 < uVar17) {
    uVar5 = uVar16 - 1;
    uVar10 = uVar2;
  }
  if (uVar5 <= uVar15) {
    uVar10 = uVar16;
  }
  if (puVar14[2] < uVar2) {
    uVar2 = puVar14[2];
  }
  uVar5 = uVar2;
  if (0xfffffffc < uVar17 - 6) {
    uVar15 = uVar9;
    if (5 < uVar9) {
      uVar15 = 6;
    }
    if (uVar15 < 5) {
      uVar15 = 4;
    }
    uVar5 = uVar15 | 0x18;
    if (uVar2 < (uVar15 | 0x18)) {
      uVar5 = uVar2;
    }
  }
  imp___aeabi_memclr4(param_1 + 0x164,0xa4);
  if (param_8 == 0) {
    param_8 = 3;
  }
  uVar15 = uVar13;
  if (uVar13 < 0xb) {
    uVar15 = 10;
  }
  *(uint *)(param_1 + 0x168) = uVar15;
  *(uint *)(param_1 + 0x16c) = uVar10;
  *(uint *)(param_1 + 0x170) = uVar5;
  *(uint *)(param_1 + 0x178) = uVar12;
  *(uint *)(param_1 + 0x17c) = uVar8;
  *(undefined4 *)(param_1 + 0x184) = 1;
  uVar3 = 2;
  *(uint *)(param_1 + 400) = param_8;
  *(uint *)(param_1 + 0x174) = uVar9;
  *(uint *)(param_1 + 0x180) = uVar17;
  if (uVar17 - 6 < 0xfffffffd) {
    *(undefined4 *)(param_1 + 0x1e8) = 2;
    if (uVar17 < 7) {
      *(undefined4 *)(param_1 + 0x1e4) = 2;
    }
    else {
      uVar6 = 2;
      if (0x10 < uVar13) {
        uVar6 = 1;
      }
      if (0x1a < uVar13) {
        uVar3 = 1;
      }
      *(undefined4 *)(param_1 + 0x1e4) = uVar6;
    }
  }
  else {
    uVar6 = 2;
    if (0x11 < uVar13) {
      uVar6 = 1;
    }
    *(undefined4 *)(param_1 + 0x1e4) = 2;
    *(undefined4 *)(param_1 + 0x1e8) = uVar6;
  }
  *(undefined4 *)(param_1 + 0x1b8) = uVar3;
  uVar3 = 1;
  if ((int)param_8 < 10) {
    uVar3 = 2;
  }
  *(undefined4 *)(param_1 + 0x208) = 0x20000;
  *(undefined4 *)(param_1 + 0x20c) = uVar3;
  FUN_71973858(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_1 + 0x164);
  return;
}


// =========================================================================
// Function: thunk_JAhbD_EMqHNpPhSAAjYHgKzK_Q
// Entry: 0x71e04040 | Size: 1 bytes
// =========================================================================

uint thunk_JAhbD_EMqHNpPhSAAjYHgKzK_Q
               (undefined4 param_1,uint param_2,int param_3,uint param_4,undefined4 param_5,
               code *param_6,int param_7,undefined4 param_8)

{
  uint uVar1;
  ushort uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  code *pcVar14;
  uint uVar15;
  int iVar16;
  undefined4 uVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  uint auStack_1c0 [44];
  uint uStack_110;
  uint uStack_10c;
  undefined4 *puStack_108;
  uint uStack_104;
  undefined4 uStack_100;
  uint uStack_fc;
  int iStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint auStack_d8 [4];
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_ac;
  int iStack_6c;
  int iStack_54;
  
  puVar5 = auStack_1c0;
  puVar13 = auStack_1c0;
  imp___aeabi_memcpy4(auStack_d8,param_5,0xac);
  iVar11 = iStack_6c;
  if ((param_6 == (code *)0x0) != (param_7 == 0)) {
    return 0;
  }
  uStack_104 = param_4;
  uStack_100 = param_1;
  uStack_fc = param_2;
  iStack_f8 = param_3;
  if (iStack_6c == 0) {
    auStack_1c0[1] = 2;
    auStack_1c0[0] = param_2;
    FUN_7196f54c(&uStack_f4,auStack_d8,0xffffffff,0xffffffff);
    uVar6 = uStack_f4;
    uVar15 = uStack_ec;
    uVar8 = uStack_e4;
    uVar7 = uStack_f0;
    uVar10 = uStack_e8;
    uVar18 = uStack_e0;
    uVar19 = uStack_dc;
  }
  else {
    puStack_108 = (undefined4 *)iStack_6c;
    uVar2 = (ushort)(param_2 < 0x20001);
    if (param_2 < 0x40001) {
      uVar2 = uVar2 + 1;
    }
    if (param_2 < 0x4001) {
      uVar2 = uVar2 + 1;
    }
    uVar6 = uStack_ac;
    if (0x15 < uStack_ac) {
      uVar6 = 0x16;
    }
    if ((int)uStack_ac < 0) {
      uVar6 = 0;
    }
    if (uStack_ac == 0) {
      uVar6 = 3;
    }
    uVar15 = 0xfffe0000;
    if (0xfffe0000 < uStack_ac) {
      uVar15 = uStack_ac;
    }
    puVar3 = &DAT_7008c15c + (short)uVar2 * 0xa1 + uVar6 * 7;
    uVar8 = *puVar3;
    uVar10 = puVar3[3];
    uStack_110 = puVar3[5];
    uVar19 = puVar3[6];
    if ((int)uStack_ac < 0) {
      uStack_110 = -uVar15;
    }
    uStack_10c = puVar3[4];
    uVar15 = puVar3[1];
    if (param_2 < 0x20000001) {
      uVar6 = 0x20 - LZCOUNT(param_2 - 1);
      if (param_2 < 0x40) {
        uVar6 = 6;
      }
      if (uVar8 < uVar6) {
        uVar6 = uVar8;
      }
      uVar8 = uVar6;
      if (param_2 != 0) goto LAB_719745d8;
    }
    else {
LAB_719745d8:
      uVar7 = 1 << (uVar8 & 0xff);
      uVar18 = 1 >> (0x20 - uVar8 & 0xff);
      if (-1 < (int)(uVar8 - 0x20)) {
        uVar7 = 0;
        uVar18 = 1 << (uVar8 - 0x20 & 0xff);
      }
      uVar6 = uVar8;
      if ((uVar18 == 0 && (param_2 <= uVar7) <= uVar18) &&
         (uVar8 = 0x1e, -(uVar18 + CARRY4(uVar7,param_2)) < (uint)(uVar7 + param_2 < 0x40000000))) {
        uVar8 = 0x20 - LZCOUNT((uVar7 + param_2) - 1);
      }
    }
    uVar18 = uVar8 + 1;
    uVar4 = uVar8;
    uVar7 = uVar15;
    if (5 < uVar19) {
      uVar7 = uVar15 - 1;
      uVar4 = uVar18;
    }
    uVar1 = uVar19 - 3;
    if (uVar7 <= uVar8) {
      uVar4 = uVar15;
    }
    if (puVar3[2] < uVar18) {
      uVar18 = puVar3[2];
    }
    uVar8 = 0x18;
    if (uVar18 < 0x18) {
      uVar8 = uVar18;
    }
    if (uVar1 < 0xfffffffe) {
      uVar8 = uVar18;
    }
    uVar15 = uVar8;
    if (0xfffffffc < uVar19 - 6) {
      uVar7 = uVar10;
      if (5 < uVar10) {
        uVar7 = 6;
      }
      if (uVar7 < 5) {
        uVar7 = 4;
      }
      uVar15 = uVar7 | 0x18;
      if (uVar8 < (uVar7 | 0x18)) {
        uVar15 = uVar8;
      }
    }
    if (uVar1 < 3) {
      uVar15 = uVar15 + 2;
    }
    if (auStack_d8[3] != 0) {
      uVar15 = auStack_d8[3];
    }
    if (uStack_bc != 0) {
      uVar19 = uStack_bc;
    }
    uVar18 = uStack_110;
    if (uStack_c0 != 0) {
      uVar18 = uStack_c0;
    }
    uVar8 = uStack_10c;
    if (uStack_c4 != 0) {
      uVar8 = uStack_c4;
    }
    if (uStack_c8 != 0) {
      uVar10 = uStack_c8;
    }
    if (uVar6 < 0xb) {
      uVar6 = 10;
    }
    if (auStack_d8[1] != 0) {
      uVar6 = auStack_d8[1];
    }
    uVar7 = 0x18;
    if (uVar4 < 0x18) {
      uVar7 = uVar4;
    }
    if (uVar1 < 0xfffffffe) {
      uVar7 = uVar4;
    }
    if (auStack_d8[2] != 0) {
      uVar7 = auStack_d8[2];
    }
  }
  uVar4 = uVar19 - 6;
  bVar20 = uVar4 == 0xfffffffd;
  if (0xfffffffc < uVar4) {
    bVar20 = uVar15 == uVar7;
  }
  if (((0xfffffffc >= uVar4 || uVar15 < uVar7) || bVar20) || (0x18 < uVar7)) {
    auStack_1c0[1] = 2;
    iVar11 = 0;
    iStack_6c = 0;
    auStack_1c0[0] = param_2;
    FUN_7196f54c(&uStack_f4,auStack_d8,0xffffffff,0xffffffff);
    uVar6 = uStack_f4;
    uVar15 = uStack_ec;
    uVar8 = uStack_e4;
    uVar7 = uStack_f0;
    uVar10 = uStack_e8;
    uVar18 = uStack_e0;
    uVar19 = uStack_dc;
  }
  iVar16 = iStack_54;
  if (((iStack_54 == 0) && (iVar16 = 2, 0xfffffffc < uVar19 - 6)) && (0x11 < uVar6)) {
    iVar16 = 1;
  }
  if ((iVar11 != 0) || ((iVar11 = 0x80, uVar19 != 1 && ((iVar16 != 1 || (2 < uVar19 - 3)))))) {
    iVar11 = (4 << (uVar7 & 0xff)) + 0x80;
  }
  iVar12 = (param_2 + 3 & 0xfffffffc) + 0x3530;
  if (param_3 == 1) {
    iVar12 = 0x3530;
  }
  iVar12 = iVar12 + (4 << (uVar15 & 0xff));
  iVar9 = iVar12;
  if (0xfffffffc < uVar19 - 6) {
    iVar9 = iVar12 + ((1 << (uVar15 & 0xff)) + 0x3fU & 0xffffffc0);
  }
  if (iVar16 != 1) {
    iVar9 = iVar12;
  }
  iVar9 = iVar9 + iVar11;
  auStack_d8[1] = uVar6;
  auStack_d8[2] = uVar7;
  auStack_d8[3] = uVar15;
  uStack_c8 = uVar10;
  uStack_c4 = uVar8;
  uStack_c0 = uVar18;
  uStack_bc = uVar19;
  iStack_54 = iVar16;
  if (param_6 == (code *)0x0) {
    uVar6 = imp_malloc(iVar9);
  }
  else {
    uVar6 = (*param_6)(param_8,iVar9);
  }
  iVar11 = iStack_f8;
  if (uVar6 == 0) {
    auStack_1c0[0] = uStack_104;
    iVar11 = 0xac;
    puVar5 = auStack_d8;
    do {
      puVar13 = puVar13 + 1;
      iVar11 = iVar11 + -4;
      *puVar13 = *puVar5;
      puVar5 = puVar5 + 1;
    } while (iVar11 != 0);
    FUN_71974bc4(0,uStack_100,uStack_fc,iStack_f8);
    return 0;
  }
  puStack_108 = (undefined4 *)(uVar6 + 0x1318);
  uVar15 = uVar6;
  if (iVar9 < 0x1330) {
    uVar15 = 0;
  }
  *(code **)(uVar15 + 0x1314) = param_6;
  *(undefined4 *)(uVar15 + 0x38) = 0;
  *(undefined4 *)(uVar15 + 0x34) = 0;
  *(undefined4 *)(uVar15 + 0x30) = 0;
  *(bool *)(uVar15 + 0x2c) = iVar9 < 0x1330;
  uVar8 = uVar6;
  if (0x132f < iVar9) {
    uVar8 = uVar6 + 0x1330;
  }
  *(uint *)(uVar15 + 0x20) = uVar8;
  *(uint *)(uVar15 + 0x1c) = uVar8;
  *(uint *)(uVar15 + 0x18) = uVar8;
  *(uint *)(uVar15 + 0x14) = uVar6 + iVar9;
  uVar8 = uVar6 + iVar9 & 0xffffffc0;
  *(uint *)(uVar15 + 0x28) = uVar8;
  *(uint *)(uVar15 + 0x10) = uVar6;
  *(int *)(uVar15 + 0x1318) = param_7;
  *(undefined4 *)(uVar15 + 0x1324) = 0;
  *(uint *)(uVar15 + 0x24) = uVar8;
  *(int *)(uVar15 + 0x1328) = iVar16;
  *(undefined4 *)(uVar15 + 0x131c) = param_8;
  auStack_1c0[0] = uStack_104;
  iVar16 = 0xac;
  puVar13 = auStack_d8;
  do {
    puVar5 = puVar5 + 1;
    iVar16 = iVar16 + -4;
    *puVar5 = *puVar13;
    puVar13 = puVar13 + 1;
  } while (iVar16 != 0);
  uVar15 = FUN_71974bc4(uVar6,uStack_100,uStack_fc,iVar11);
  if (uVar15 < 0xffffff89) {
    return uVar6;
  }
  bVar20 = true;
  uVar15 = *(uint *)(uVar6 + 0x10);
  if ((uVar15 <= uVar6) && (bVar20 = false, *(uint *)(uVar6 + 0x14) <= uVar6)) {
    bVar20 = true;
  }
  pcVar14 = (code *)*puStack_108;
  uVar17 = puStack_108[1];
  imp___aeabi_memclr4((uint *)(uVar6 + 0x10),0x2c);
  if (uVar15 != 0) {
    if (pcVar14 == (code *)0x0) {
      imp_free(uVar15);
      if (!bVar20) {
        return 0;
      }
      goto LAB_71974a7c;
    }
    (*pcVar14)(uVar17,uVar15);
  }
  if (!bVar20) {
    return 0;
  }
  if (pcVar14 != (code *)0x0) {
    (*pcVar14)(uVar17,uVar6);
    return 0;
  }
LAB_71974a7c:
  imp_free(uVar6);
  return 0;
}


// =========================================================================
// Function: thunk_QvlFbwUnOdWzGhE
// Entry: 0x71e04050 | Size: 1 bytes
// =========================================================================

void thunk_QvlFbwUnOdWzGhE(uint *param_1,uint param_2,undefined1 *param_3,uint param_4,uint param_5)

{
  ushort uVar1;
  uint *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  if (param_3 == (undefined1 *)0x0 && param_4 == 0) {
    param_4 = 0xffffffff;
    param_3 = (undefined1 *)0xffffffff;
  }
  uVar13 = (uint)param_3 ^ 0xffffffff;
  uVar14 = param_4 ^ 0xffffffff;
  if ((param_5 != 0) ||
     (uVar6 = 0xffffffff, puVar4 = (undefined1 *)0xffffffff, uVar13 != 0 || uVar14 != 0)) {
    puVar11 = param_3 + param_5;
    uVar5 = param_4 + CARRY4((uint)param_3,param_5);
    uVar6 = uVar5 + ((undefined1 *)0xfffffe0b < puVar11);
    puVar4 = puVar11 + 500;
    if (param_5 == 0 || (uVar13 != 0 || uVar14 != 0)) {
      uVar6 = uVar5;
      puVar4 = puVar11;
    }
  }
  uVar1 = (ushort)(uVar6 == 0 && ((undefined1 *)0x20000 < puVar4) <= uVar6);
  if (uVar6 == 0 && ((undefined1 *)0x40000 < puVar4) <= uVar6) {
    uVar1 = uVar1 + 1;
  }
  if (uVar6 == 0 && ((undefined1 *)0x4000 < puVar4) <= uVar6) {
    uVar1 = uVar1 + 1;
  }
  uVar6 = param_2;
  if (0x15 < param_2) {
    uVar6 = 0x16;
  }
  if ((int)param_2 < 0) {
    uVar6 = 0;
  }
  if (param_2 == 0) {
    uVar6 = 3;
  }
  puVar2 = &DAT_7008c15c + (short)uVar1 * 0xa1 + uVar6 * 7;
  uVar9 = *puVar2;
  uVar5 = puVar2[1];
  uVar10 = puVar2[2];
  uVar6 = puVar2[5];
  uVar12 = puVar2[6];
  uVar7 = puVar2[3];
  uVar8 = puVar2[4];
  if ((param_5 < 0x20000001) && (-param_4 < (uint)(param_3 < &DAT_20000001))) {
    uVar13 = 0x20 - LZCOUNT(param_3 + param_5 + -1);
    if (param_3 + param_5 < (undefined1 *)0x40) {
      uVar13 = 6;
    }
    if (uVar13 <= uVar9) {
      uVar9 = uVar13;
    }
  }
  else if (uVar13 == 0 && uVar14 == 0) goto LAB_71978c4c;
  uVar13 = uVar9;
  if (param_5 != 0) {
    uVar3 = uVar9 - 0x20;
    uVar14 = 1 >> (0x20 - uVar9 & 0xff);
    if (-1 < (int)uVar3) {
      uVar14 = 1 << (uVar3 & 0xff);
    }
    puVar4 = (undefined1 *)(1 << (uVar9 & 0xff));
    if (-1 < (int)uVar3) {
      puVar4 = (undefined1 *)0x0;
    }
    param_4 = param_4 + CARRY4((uint)param_3,param_5);
    if ((uVar14 <= param_4 && (uint)(param_3 + param_5 <= puVar4) <= uVar14 - param_4) &&
       (uVar13 = 0x1e,
       -(uVar14 + CARRY4((uint)puVar4,param_5)) <
       (uint)(puVar4 + param_5 < (undefined1 *)0x40000000))) {
      uVar13 = 0x20 - LZCOUNT(puVar4 + param_5 + -1);
    }
  }
  uVar3 = uVar13 + 1;
  uVar14 = uVar5;
  if (5 < uVar12) {
    uVar14 = uVar5 - 1;
  }
  if (uVar3 <= uVar10) {
    uVar10 = uVar3;
  }
  if ((uVar13 < uVar14) && (uVar5 = uVar13, 5 < uVar12)) {
    uVar5 = uVar3;
  }
LAB_71978c4c:
  uVar13 = uVar10;
  if (0xfffffffc < uVar12 - 6) {
    uVar14 = uVar7;
    if (5 < uVar7) {
      uVar14 = 6;
    }
    if (uVar14 < 5) {
      uVar14 = 4;
    }
    uVar13 = uVar14 | 0x18;
    if (uVar10 < (uVar14 | 0x18)) {
      uVar13 = uVar10;
    }
  }
  if (uVar9 < 0xb) {
    uVar9 = 10;
  }
  *param_1 = uVar9;
  uVar14 = 0xfffe0000;
  if (0xfffe0000 < param_2) {
    uVar14 = param_2;
  }
  if ((int)param_2 < 0) {
    uVar6 = -uVar14;
  }
  param_1[1] = uVar5;
  param_1[2] = uVar13;
  param_1[3] = uVar7;
  param_1[4] = uVar8;
  param_1[5] = uVar6;
  param_1[6] = uVar12;
  return;
}


// =========================================================================
// Function: thunk_QiNLYgHlfAinnnRAjGfwSOOtg
// Entry: 0x71e04060 | Size: 1 bytes
// =========================================================================

int * thunk_QiNLYgHlfAinnnRAjGfwSOOtg
                (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                code *param_5,int param_6,int param_7)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  
  if ((param_5 == (code *)0x0) != (param_6 == 0)) {
    return (int *)0x0;
  }
  if (param_5 == (code *)0x0) {
    piVar1 = (int *)imp_malloc(0x6abc);
  }
  else {
    piVar1 = (int *)(*param_5)(param_7,0x6abc);
  }
  if (piVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  piVar1[0x1aad] = param_6;
  piVar1[0x1aae] = param_7;
  piVar1[0x1aac] = (int)param_5;
  uVar2 = FUN_719e64a0(piVar1,param_1,param_2,param_3,param_4);
  if (uVar2 < 0xffffff89) {
    return piVar1;
  }
  pcVar3 = (code *)piVar1[0x1aad];
  iVar4 = piVar1[0x1aae];
  if (*piVar1 == 0) {
    if (pcVar3 == (code *)0x0) goto LAB_719e6404;
  }
  else {
    if (pcVar3 == (code *)0x0) {
      imp_free(*piVar1);
LAB_719e6404:
      imp_free(piVar1);
      return (int *)0x0;
    }
    (*pcVar3)(iVar4);
  }
  (*pcVar3)(iVar4,piVar1);
  return (int *)0x0;
}


// =========================================================================
// Function: thunk_mpOsAuPTCkfXUz
// Entry: 0x71e04070 | Size: 1 bytes
// =========================================================================

undefined4 thunk_mpOsAuPTCkfXUz(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  pcVar1 = (code *)param_1[0x1aad];
  iVar2 = param_1[0x1aae];
  if (*param_1 == 0) {
    if (pcVar1 != (code *)0x0) goto LAB_719e668c;
  }
  else {
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(iVar2);
LAB_719e668c:
      (*pcVar1)(iVar2,param_1);
      return 0;
    }
    imp_free(*param_1);
  }
  imp_free(param_1);
  return 0;
}


// =========================================================================
// Function: thunk_HAXgEjUFtaVqUCgLc
// Entry: 0x71e04080 | Size: 1 bytes
// =========================================================================

int thunk_HAXgEjUFtaVqUCgLc(int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    if (*param_1 == 0) {
      iVar1 = 0x6abc;
    }
    else {
      iVar1 = param_1[2] + 0x6abc;
    }
    return iVar1;
  }
  return 0;
}


// =========================================================================
// Function: thunk_zLrieaXFsLuFSkKtwNXnEDiw
// Entry: 0x71e04090 | Size: 1 bytes
// =========================================================================

undefined4 thunk_zLrieaXFsLuFSkKtwNXnEDiw(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x6aa8);
  }
  return uVar1;
}


// =========================================================================
// Function: thunk_fowZbaAaCrIHM
// Entry: 0x71e040a0 | Size: 1 bytes
// =========================================================================

undefined4 thunk_fowZbaAaCrIHM(int param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x7590) != 0) {
    return 0xffffffc0;
  }
  pcVar2 = *(code **)(param_1 + 0x7580);
  uVar3 = *(undefined4 *)(param_1 + 0x7584);
  thunk_mpOsAuPTCkfXUz(*(undefined4 *)(param_1 + 0x7594));
  *(undefined4 *)(param_1 + 0x75a4) = 0;
  *(undefined4 *)(param_1 + 0x7594) = 0;
  *(undefined4 *)(param_1 + 0x7598) = 0;
  if (*(int *)(param_1 + 0x75b8) != 0) {
    if (pcVar2 == (code *)0x0) {
      imp_free(*(int *)(param_1 + 0x75b8));
    }
    else {
      (*pcVar2)(uVar3);
    }
  }
  *(undefined4 *)(param_1 + 0x75b8) = 0;
  piVar1 = *(int **)(param_1 + 0x75a8);
  if (piVar1 == (int *)0x0) goto LAB_719e70d8;
  if (*piVar1 == 0) {
    if (pcVar2 != (code *)0x0) goto LAB_719e70b0;
LAB_719e70c8:
    imp_free(piVar1);
  }
  else {
    if (pcVar2 == (code *)0x0) {
      imp_free(*piVar1);
      goto LAB_719e70c8;
    }
    (*pcVar2)(uVar3);
LAB_719e70b0:
    (*pcVar2)(uVar3,piVar1);
  }
  *(undefined4 *)(param_1 + 0x75a8) = 0;
LAB_719e70d8:
  if (pcVar2 == (code *)0x0) {
    imp_free(param_1);
    return 0;
  }
  (*pcVar2)(uVar3,param_1);
  return 0;
}


// =========================================================================
// Function: thunk_iORHUobxeUIiFYwJEwlWbjG_JkTc
// Entry: 0x71e040b0 | Size: 1 bytes
// =========================================================================

uint thunk_iORHUobxeUIiFYwJEwlWbjG_JkTc(uint *param_1,uint *param_2,uint param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uStack_24;
  
  uVar10 = 1;
  if (param_4 == 0) {
    uVar10 = 5;
  }
  if ((param_2 != (uint *)0x0) || (uVar7 = 0xffffffff, param_3 == 0)) {
    if (param_3 < uVar10) {
      uVar7 = uVar10;
      if ((param_3 != 0) && (param_4 != 1)) {
        uStack_24 = 0xfd2fb528;
        imp___aeabi_memcpy(&uStack_24);
        if (uStack_24 != 0xfd2fb528) {
          uStack_24 = 0x184d2a50;
          imp___aeabi_memcpy(&uStack_24,param_2,param_3);
          if (uStack_24 >> 4 != 0x184d2a5) {
            uVar7 = 0xfffffff6;
          }
        }
      }
    }
    else {
      imp___aeabi_memclr8(param_1,0x30);
      if ((param_4 == 1) || (*param_2 == 0xfd2fb528)) {
        pbVar8 = (byte *)((int)param_2 + uVar10);
        uVar7 = (uint)pbVar8[-1];
        uVar7 = *(int *)(&DAT_70086e38 + (uVar7 & 3) * 4) + uVar10 +
                *(int *)(&DAT_70086dd8 + (uint)(pbVar8[-1] >> 6) * 4) + ((uVar7 & 0x20) >> 5 ^ 1) +
                ((uint)(uVar7 < 0x40) & (uVar7 & 0x20) >> 5);
        if (uVar7 <= param_3) {
          param_1[6] = uVar7;
          bVar1 = pbVar8[-1];
          uVar7 = 0xfffffff2;
          if ((bVar1 & 8) == 0) {
            uVar7 = 0;
            if ((bVar1 & 0x20) == 0) {
              bVar2 = *pbVar8;
              if (0xa7 < bVar2) {
                return 0xfffffff0;
              }
              uVar4 = (bVar2 >> 3) - 0x16;
              uVar12 = 1 >> (0x16 - (bVar2 >> 3) & 0xff);
              uVar10 = uVar10 + 1;
              if (-1 < (int)uVar4) {
                uVar12 = 1 << (uVar4 & 0xff);
              }
              uVar9 = bVar2 & 7;
              uVar5 = 1 << (bVar2 >> 3) + 10;
              if (-1 < (int)uVar4) {
                uVar5 = 0;
              }
              lVar3 = (ulonglong)uVar9 * (ulonglong)(uVar5 >> 3 | uVar12 << 0x1d);
              uVar11 = (uint)lVar3;
              uVar4 = uVar11 + uVar5;
              uVar12 = (uVar12 >> 3) * uVar9 + (int)((ulonglong)lVar3 >> 0x20) + uVar12 +
                       (uint)CARRY4(uVar11,uVar5);
            }
            else {
              uVar4 = 0;
              uVar12 = 0;
            }
            uVar5 = bVar1 & 3;
            bVar2 = bVar1 >> 6;
            if (uVar5 == 3) {
              uVar7 = *(uint *)((int)param_2 + uVar10);
              uVar10 = uVar10 + 4;
            }
            else if (uVar5 == 2) {
              puVar6 = (ushort *)((int)param_2 + uVar10);
              uVar10 = uVar10 + 2;
              uVar7 = (uint)*puVar6;
            }
            else if (uVar5 == 1) {
              uVar7 = (uint)*(byte *)((int)param_2 + uVar10);
              uVar10 = uVar10 + 1;
            }
            if (bVar2 == 1) {
              uVar9 = 0;
              uVar5 = *(ushort *)((int)param_2 + uVar10) + 0x100;
            }
            else if (bVar2 == 2) {
              uVar5 = *(uint *)((int)param_2 + uVar10);
              uVar9 = 0;
            }
            else if (bVar2 == 3) {
              uVar5 = *(uint *)((int)param_2 + uVar10);
              uVar9 = ((uint *)((int)param_2 + uVar10))[1];
            }
            else {
              uVar5 = 0xffffffff;
              uVar9 = 0xffffffff;
              if ((bVar1 & 0x20) != 0) {
                uVar5 = (uint)*(byte *)((int)param_2 + uVar10);
                uVar9 = 0;
              }
            }
            if ((bVar1 & 0x20) != 0) {
              uVar4 = uVar5;
              uVar12 = uVar9;
            }
            uVar10 = 0x20000;
            if (uVar4 < 0x20000) {
              uVar10 = uVar4;
            }
            if (uVar12 != 0) {
              uVar10 = 0x20000;
            }
            param_1[7] = uVar7;
            param_1[8] = (bVar1 & 7) >> 2;
            *param_1 = uVar5;
            param_1[1] = uVar9;
            param_1[2] = uVar4;
            param_1[3] = uVar12;
            param_1[4] = uVar10;
            param_1[5] = 0;
            uVar7 = 0;
          }
        }
      }
      else {
        uVar7 = 0xfffffff6;
        if ((*param_2 >> 4 == 0x184d2a5) && (uVar7 = 8, 7 < param_3)) {
          *param_1 = param_2[1];
          param_1[1] = 0;
          param_1[5] = 1;
          uVar7 = 0;
        }
      }
    }
  }
  return uVar7;
}


// =========================================================================
// Function: thunk_WxORCdnHXhUNmauorT_abwE
// Entry: 0x71e040c0 | Size: 1 bytes
// =========================================================================

uint thunk_WxORCdnHXhUNmauorT_abwE(int param_1,int param_2,uint param_3,uint *param_4,uint param_5)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  
  if (*(int *)(param_1 + 0x7504) - 3U < 2) {
    uVar5 = *(uint *)(param_1 + 0x74bc);
    if (*(int *)(param_1 + 0x7500) == 0) {
      if (param_5 <= uVar5) {
        uVar5 = param_5;
      }
      if (uVar5 < 2) {
        uVar5 = 1;
      }
    }
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x74bc);
  }
  if (uVar5 != param_5) {
    return 0xffffffb8;
  }
  FUN_719f363c(param_1);
  uVar5 = *(uint *)(param_1 + 0x74f0);
  *(uint *)(param_1 + 0x74f0) = uVar5 + param_5;
  *(uint *)(param_1 + 0x74f4) = *(int *)(param_1 + 0x74f4) + (uint)CARRY4(uVar5,param_5);
  switch(*(undefined4 *)(param_1 + 0x7504)) {
  case 0:
    uVar5 = 1;
    if ((*(int *)(param_1 + 0x756c) != 0) || (uVar5 = 5, *param_4 >> 4 != 0x184d2a5)) {
      if (param_5 < uVar5) {
        *(undefined4 *)(param_1 + 0x7568) = 0xffffffb8;
        return 0xffffffb8;
      }
      bVar1 = *(byte *)((int)param_4 + (uVar5 - 1));
      uVar4 = (uint)bVar1;
      uVar5 = *(int *)(&DAT_70086e38 + (uVar4 & 3) * 4) + uVar5 +
              *(int *)(&DAT_70086dd8 + (uint)(bVar1 >> 6) * 4) + ((uVar4 & 0x20) >> 5 ^ 1) +
              ((uint)(uVar4 < 0x40) & (uVar4 & 0x20) >> 5);
      *(uint *)(param_1 + 0x7568) = uVar5;
      if (0xffffff88 < uVar5) {
        return uVar5;
      }
      imp___aeabi_memcpy(param_1 + 0x17620,param_4,param_5);
      *(undefined4 *)(param_1 + 0x7504) = 1;
      *(uint *)(param_1 + 0x74bc) = uVar5 - param_5;
      return 0;
    }
    imp___aeabi_memcpy(param_1 + 0x17620,param_4,param_5);
    *(undefined4 *)(param_1 + 0x7504) = 6;
    iVar2 = 8 - param_5;
    break;
  case 1:
    imp___aeabi_memcpy(param_1 + 0x17620 + (*(int *)(param_1 + 0x7568) - param_5),param_4,param_5);
    uVar5 = FUN_719e93fc(param_1,param_1 + 0x17620,*(undefined4 *)(param_1 + 0x7568));
    if (0xffffff88 < uVar5) {
      return uVar5;
    }
    *(undefined4 *)(param_1 + 0x7504) = 2;
    iVar2 = 3;
    break;
  case 2:
    uVar5 = FUN_719ec2c8(param_4,3,&uStack_2c);
    if (0xffffff88 < uVar5) {
      return uVar5;
    }
    if (uVar5 <= *(uint *)(param_1 + 0x74d0)) {
      *(uint *)(param_1 + 0x74bc) = uVar5;
      *(undefined4 *)(param_1 + 0x7500) = uStack_2c;
      *(undefined4 *)(param_1 + 0x758c) = uStack_24;
      if (uVar5 == 0) {
        if (iStack_28 == 0) {
          *(undefined4 *)(param_1 + 0x74bc) = 3;
          uVar3 = 2;
        }
        else if (*(int *)(param_1 + 0x74e0) == 0) {
          uVar3 = 0;
          *(undefined4 *)(param_1 + 0x74bc) = 0;
        }
        else {
          *(undefined4 *)(param_1 + 0x74bc) = 4;
          uVar3 = 5;
        }
      }
      else {
        uVar3 = 4;
        if (iStack_28 == 0) {
          uVar3 = 3;
        }
      }
      *(undefined4 *)(param_1 + 0x7504) = uVar3;
      return 0;
    }
    return 0xffffffec;
  case 3:
  case 4:
    iVar2 = *(int *)(param_1 + 0x7500);
    if (iVar2 == 0) {
      if (param_3 < param_5) {
        return 0xffffffba;
      }
      if (param_2 == 0) {
        if (param_5 != 0) {
          return 0xffffffb6;
        }
      }
      else {
        imp___aeabi_memmove(param_2,param_4,param_5);
        if (0xffffff88 < param_5) {
          return param_5;
        }
      }
      iVar2 = *(int *)(param_1 + 0x74bc) - param_5;
      *(int *)(param_1 + 0x74bc) = iVar2;
    }
    else {
      if (iVar2 == 1) {
        uVar5 = *(uint *)(param_1 + 0x758c);
        param_5 = 0xffffffba;
        if (uVar5 <= param_3) {
          param_5 = uVar5;
          if (param_2 == 0) {
            if (uVar5 != 0) {
              param_5 = 0xffffffb6;
            }
          }
          else {
            imp___aeabi_memset(param_2,uVar5,(char)*param_4);
          }
        }
      }
      else {
        if (iVar2 != 2) {
          return 0xffffffec;
        }
        param_5 = FUN_719ed2e8(param_1,param_2,param_3,param_4,param_5,1,1);
      }
      iVar2 = 0;
      *(undefined4 *)(param_1 + 0x74bc) = 0;
      if (0xffffff88 < param_5) {
        return param_5;
      }
    }
    if (*(uint *)(param_1 + 0x74d0) < param_5) {
      return 0xffffffec;
    }
    puVar6 = (uint *)(param_1 + 0x74f8);
    uVar5 = *puVar6;
    *puVar6 = uVar5 + param_5;
    *(uint *)(param_1 + 0x74fc) = *(int *)(param_1 + 0x74fc) + (uint)CARRY4(uVar5,param_5);
    if (*(int *)(param_1 + 0x7574) != 0) {
      FUN_719684b8(param_1 + 0x7510,param_2,param_5);
      iVar2 = *(int *)(param_1 + 0x74bc);
    }
    *(uint *)(param_1 + 0x74ac) = param_2 + param_5;
    if (iVar2 == 0) {
      if (*(int *)(param_1 + 0x7504) == 4) {
        if (((*(uint *)(param_1 + 0x74c0) & *(uint *)(param_1 + 0x74c4)) != 0xffffffff) &&
           (*puVar6 != *(uint *)(param_1 + 0x74c0) ||
            *(uint *)(param_1 + 0x74fc) != *(uint *)(param_1 + 0x74c4))) {
          return 0xffffffec;
        }
        if (*(int *)(param_1 + 0x74e0) == 0) {
          uVar3 = 0;
          *(undefined4 *)(param_1 + 0x7504) = 0;
        }
        else {
          *(undefined4 *)(param_1 + 0x7504) = 5;
          uVar3 = 4;
        }
        *(undefined4 *)(param_1 + 0x74bc) = uVar3;
      }
      else {
        *(undefined4 *)(param_1 + 0x74bc) = 3;
        *(undefined4 *)(param_1 + 0x7504) = 2;
      }
    }
    return param_5;
  case 5:
    if ((*(int *)(param_1 + 0x7574) != 0) &&
       (uVar5 = FUN_719689dc(param_1 + 0x7510), *param_4 != uVar5)) {
      return 0xffffffea;
    }
  case 7:
    *(undefined4 *)(param_1 + 0x7504) = 0;
    *(undefined4 *)(param_1 + 0x74bc) = 0;
    return 0;
  case 6:
    imp___aeabi_memcpy((param_1 - param_5) + 0x17628,param_4,param_5);
    *(undefined4 *)(param_1 + 0x7504) = 7;
    iVar2 = *(int *)(param_1 + 0x17624);
    break;
  default:
    return 0xffffffff;
  }
  *(int *)(param_1 + 0x74bc) = iVar2;
  return 0;
}


// =========================================================================
// Function: thunk___dKVBUCgltEWoflCu
// Entry: 0x71e040d0 | Size: 1 bytes
// =========================================================================

undefined4 thunk___dKVBUCgltEWoflCu(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uVar9;
  uint uVar10;
  code *pcVar11;
  uint uVar12;
  int iStack_2c;
  int iStack_28;
  
  if (*(int *)(param_1 + 0x75b4) != 0) {
    return 0xffffffc4;
  }
  thunk_mpOsAuPTCkfXUz(*(undefined4 *)(param_1 + 0x7594));
  *(undefined4 *)(param_1 + 0x75a4) = 0;
  *(undefined4 *)(param_1 + 0x7594) = 0;
  *(undefined4 *)(param_1 + 0x7598) = 0;
  if (param_2 == 0) {
    return 0;
  }
  *(int *)(param_1 + 0x7598) = param_2;
  *(undefined4 *)(param_1 + 0x75a4) = 0xffffffff;
  if (*(int *)(param_1 + 0x75ac) != 1) {
    return 0;
  }
  piVar8 = *(int **)(param_1 + 0x75a8);
  if (piVar8 == (int *)0x0) {
    pcVar5 = *(code **)(param_1 + 0x757c);
    uVar9 = *(undefined4 *)(param_1 + 0x7584);
    if (pcVar5 == (code *)0x0) {
      pcVar5 = *(code **)(param_1 + 0x7580);
      piVar8 = (int *)imp_malloc(0xc);
      if (piVar8 == (int *)0x0) {
LAB_719eac00:
        *(undefined4 *)(param_1 + 0x75a8) = 0;
        return 0xffffffc0;
      }
      iVar1 = imp_calloc(1,0x100);
      *piVar8 = iVar1;
      if (iVar1 == 0) {
        if (pcVar5 == (code *)0x0) {
          imp_free(piVar8);
        }
        else {
          (*pcVar5)(uVar9,piVar8);
        }
        goto LAB_719eac00;
      }
    }
    else {
      piVar8 = (int *)(*pcVar5)(uVar9,0xc);
      if (piVar8 == (int *)0x0) goto LAB_719eac00;
      iVar1 = (*pcVar5)(uVar9,0x100);
      imp___aeabi_memclr(iVar1,0x100);
      *piVar8 = iVar1;
    }
    piVar8[1] = 0x40;
    piVar8[2] = 0;
    *(int **)(param_1 + 0x75a8) = piVar8;
  }
  uVar6 = piVar8[1];
  if (uVar6 <= (uint)(piVar8[2] * 4)) {
    pcVar5 = *(code **)(param_1 + 0x757c);
    pcVar11 = *(code **)(param_1 + 0x7580);
    iVar1 = uVar6 << 3;
    uVar9 = *(undefined4 *)(param_1 + 0x7584);
    if (pcVar5 == (code *)0x0) {
      iVar2 = imp_calloc(1,iVar1);
      uVar7 = uVar6;
    }
    else {
      iVar2 = (*pcVar5)(uVar9,iVar1);
      imp___aeabi_memclr(iVar2,iVar1);
      uVar7 = piVar8[1];
    }
    if (iVar2 == 0) {
      return 0xffffffc0;
    }
    iVar1 = *piVar8;
    uVar12 = 0;
    piVar8[1] = uVar6 << 1;
    piVar8[2] = 0;
    *piVar8 = iVar2;
    if (uVar7 != 0) {
      do {
        iVar2 = *(int *)(iVar1 + uVar12 * 4);
        if (iVar2 != 0) {
          iVar3 = thunk_zLrieaXFsLuFSkKtwNXnEDiw(iVar2);
          iStack_2c = iVar3;
          uVar6 = FUN_71967848(&iStack_2c,4,0,0);
          if (piVar8[2] == piVar8[1]) {
            return 0xffffffff;
          }
          uVar10 = piVar8[1] - 1;
          for (uVar6 = uVar10 & uVar6; *(int *)(*piVar8 + uVar6 * 4) != 0;
              uVar6 = (uVar6 & uVar10) + 1) {
            iVar4 = thunk_zLrieaXFsLuFSkKtwNXnEDiw();
            if (iVar4 == iVar3) {
              *(int *)(*piVar8 + uVar6 * 4) = iVar2;
              goto LAB_719eab28;
            }
          }
          *(int *)(*piVar8 + uVar6 * 4) = iVar2;
          piVar8[2] = piVar8[2] + 1;
        }
LAB_719eab28:
        uVar12 = uVar12 + 1;
      } while (uVar12 != uVar7);
    }
    if (iVar1 != 0) {
      if (pcVar11 == (code *)0x0) {
        imp_free(iVar1);
      }
      else {
        (*pcVar11)(uVar9,iVar1);
      }
    }
  }
  iVar1 = thunk_zLrieaXFsLuFSkKtwNXnEDiw(param_2);
  iStack_28 = iVar1;
  uVar6 = FUN_71967848(&iStack_28,4,0,0);
  if (piVar8[2] == piVar8[1]) {
    return 0xffffffff;
  }
  uVar7 = piVar8[1] - 1;
  uVar6 = uVar7 & uVar6;
  while( true ) {
    if (*(int *)(*piVar8 + uVar6 * 4) == 0) {
      *(int *)(*piVar8 + uVar6 * 4) = param_2;
      piVar8[2] = piVar8[2] + 1;
      return 0;
    }
    iVar2 = thunk_zLrieaXFsLuFSkKtwNXnEDiw();
    if (iVar2 == iVar1) break;
    uVar6 = (uVar6 & uVar7) + 1;
  }
  *(int *)(*piVar8 + uVar6 * 4) = param_2;
  return 0;
}


// =========================================================================
// Function: thunk_pLdJRSRuEsGbMScWdwgEO
// Entry: 0x71e040e0 | Size: 1 bytes
// =========================================================================

uint thunk_pLdJRSRuEsGbMScWdwgEO(int *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int *piVar24;
  bool bVar25;
  undefined8 uVar26;
  int iStack_50;
  int iStack_38;
  uint uStack_34;
  
  uVar22 = param_3[2];
  uVar12 = param_3[1];
  if (uVar12 < uVar22) {
    return 0xffffffb8;
  }
  uVar13 = param_2[1];
  uVar1 = param_2[2];
  if (uVar13 < uVar1) {
    return 0xffffffba;
  }
  iVar14 = *param_2;
  piVar2 = param_1 + 0x1d7a;
  if ((param_1[0x1d79] == 1) && (param_1[0x1d6d] != 0)) {
    if (*piVar2 != iVar14) {
      return 0xffffff98;
    }
    uVar18 = param_1[0x1d7c];
    bVar25 = uVar18 != uVar1;
    uVar23 = uVar1;
    if (!bVar25) {
      uVar18 = param_1[0x1d7b];
      uVar23 = uVar13;
    }
    if (bVar25 || uVar18 != uVar23) {
      return 0xffffff98;
    }
  }
  puVar3 = (uint *)(param_1 + 0x5d88);
  iVar4 = iVar14 + uVar13;
  iVar15 = *param_3 + uVar22;
  iVar20 = *param_3 + uVar12;
  puVar5 = (uint *)(param_1 + 0x1d30);
  piVar6 = param_1 + 0x1d74;
  iVar19 = iVar14 + uVar1;
  iStack_50 = iVar15;
  while( true ) {
    while( true ) {
      while (param_1[0x1d6d] == 4) {
        uVar21 = iVar4 - iVar19;
        iVar7 = param_1[0x1d74];
        uVar18 = param_1[0x1d75] - iVar7;
        uVar23 = uVar18;
        if (uVar21 < uVar18) {
          uVar23 = uVar21;
        }
        if (uVar23 != 0) {
          imp___aeabi_memcpy(iVar19,param_1[0x1d72] + iVar7,uVar23);
          iVar7 = param_1[0x1d74];
        }
        if (iVar19 != 0) {
          iVar19 = iVar19 + uVar23;
        }
        *piVar6 = iVar7 + uVar23;
        iVar9 = iStack_50;
        if (uVar21 < uVar18) goto LAB_719ebdf8;
        param_1[0x1d6d] = 2;
        if (((uint)(*puVar5 <= (uint)param_1[0x1d73]) <= (uint)-param_1[0x1d31]) &&
           ((uint)param_1[0x1d73] < param_1[0x1d34] + iVar7 + uVar23)) {
          param_1[0x1d74] = 0;
          param_1[0x1d75] = 0;
        }
      }
      switch(param_1[0x1d6d]) {
      case 0:
        param_1[0x1d6d] = 1;
        iVar7 = 0;
        param_1[0x1d70] = 0;
        *piVar6 = 0;
        param_1[0x1d75] = 0;
        param_1[0x1d76] = 0;
        param_1[0x1d77] = 0;
        iVar9 = param_2[1];
        iVar17 = param_2[2];
        *piVar2 = *param_2;
        param_1[0x1d7b] = iVar9;
        param_1[0x1d7c] = iVar17;
        break;
      case 1:
        iVar7 = param_1[0x1d76];
        break;
      case 2:
        goto switchD_719eb560_caseD_2;
      case 3:
        uVar23 = param_1[0x1d2f];
        iVar7 = param_1[0x1d41];
        goto LAB_719ebb1c;
      default:
        return 0xffffffff;
      }
      uVar23 = thunk_iORHUobxeUIiFYwJEwlWbjG_JkTc(puVar5,puVar3,iVar7,param_1[0x1d5b]);
      iVar7 = param_1[0x1d6b];
      if (iVar7 != 0) {
        piVar24 = (int *)param_1[0x1d6a];
        if (piVar24 != (int *)0x0) {
          iVar7 = param_1[0x1d66];
        }
        if (piVar24 != (int *)0x0 && iVar7 != 0) {
          iVar9 = param_1[0x1d37];
          iStack_38 = iVar9;
          uVar18 = FUN_71967848(&iStack_38,4,0,0);
          iVar7 = piVar24[1];
          uVar18 = iVar7 - 1U & uVar18;
          do {
            uVar21 = uVar18;
            uVar26 = thunk_zLrieaXFsLuFSkKtwNXnEDiw(*(undefined4 *)(*piVar24 + uVar21 * 4));
            uVar18 = (uint)((ulonglong)uVar26 >> 0x20);
            iVar17 = (int)uVar26;
            if (iVar17 != iVar9) {
              uVar18 = (uVar21 & iVar7 - 1U) + 1;
            }
          } while (iVar17 != iVar9 && iVar17 != 0);
          iVar7 = *(int *)(*piVar24 + uVar21 * 4);
          if (iVar7 != 0) {
            thunk_mpOsAuPTCkfXUz(param_1[0x1d65]);
            param_1[0x1d69] = -1;
            param_1[0x1d65] = 0;
            param_1[0x1d66] = iVar7;
            param_1[0x1d67] = param_1[0x1d37];
          }
        }
      }
      if (0xffffff88 < uVar23) {
        return uVar23;
      }
      if (uVar23 == 0) break;
      uVar18 = iVar20 - iStack_50;
      iVar7 = param_1[0x1d76];
      uVar21 = uVar23 - iVar7;
      if (uVar18 < uVar21) {
        if (iVar20 != iStack_50) {
          imp___aeabi_memcpy((int)puVar3 + iVar7,iStack_50,uVar18);
          param_1[0x1d76] = param_1[0x1d76] + uVar18;
        }
        param_3[2] = param_3[1];
        uVar12 = thunk_iORHUobxeUIiFYwJEwlWbjG_JkTc(puVar5,puVar3,param_1[0x1d76],param_1[0x1d5b]);
        if (0xffffff88 < uVar12) {
          return uVar12;
        }
        uVar12 = 2;
        if (param_1[0x1d5b] == 0) {
          uVar12 = 6;
        }
        if (uVar12 <= uVar23) {
          uVar12 = uVar23;
        }
        return (uVar12 - param_1[0x1d76]) + 3;
      }
      imp___aeabi_memcpy((int)puVar3 + iVar7,iStack_50,uVar21);
      iStack_50 = iStack_50 + uVar21;
      param_1[0x1d76] = uVar23;
    }
    uVar23 = *puVar5 & param_1[0x1d31];
    bVar25 = uVar23 != 0xffffffff;
    if (bVar25) {
      uVar23 = param_1[0x1d35];
    }
    if (((bVar25 && uVar23 != 1) &&
        ((uint)-param_1[0x1d31] < (uint)(*puVar5 <= (uint)(iVar4 - iVar19)))) &&
       (FUN_719e7af4(&iStack_38,iVar15,iVar20 - iVar15), uStack_34 <= (uint)(iVar20 - iVar15)))
    break;
    if ((param_1[0x1d79] == 1) && (param_1[0x1d35] != 1)) {
      if ((*puVar5 != 0xffffffff || param_1[0x1d31] != -1) &&
         ((uint)(*puVar5 <= (uint)(iVar4 - iVar19)) <= (uint)-param_1[0x1d31])) {
        return 0xffffffba;
      }
    }
    if (param_1[0x1d69] == -1) {
LAB_719eb6d8:
      iVar7 = param_1[0x1d66];
      if (iVar7 == 0) {
        iVar7 = 0;
        bVar25 = true;
      }
      else {
        iVar9 = FUN_719e620c(iVar7);
        iVar17 = FUN_719e622c(iVar7);
        param_1[0x1d68] = (uint)(param_1[0x1d2e] != iVar9 + iVar17);
        bVar25 = false;
      }
    }
    else {
      if (param_1[0x1d69] == 1) {
        param_1[0x1d69] = 0;
        goto LAB_719eb6d8;
      }
      thunk_mpOsAuPTCkfXUz(param_1[0x1d65]);
      iVar7 = 0;
      bVar25 = true;
      param_1[0x1d69] = 0;
      param_1[0x1d65] = 0;
      param_1[0x1d66] = 0;
    }
    param_1[0x1d67] = 0;
    param_1[0x1d2b] = 0;
    param_1[0x1d2c] = 0;
    param_1[0x1d2d] = 0;
    param_1[0x1d2e] = 0;
    param_1[0x1d41] = 0;
    param_1[0x1d42] = 0;
    param_1[0x1d3c] = 0;
    param_1[0x1d3d] = 0;
    param_1[0x1d3e] = 0;
    param_1[0x1d3f] = 0;
    param_1[0x1d43] = 0;
    param_1[0xa0a] = 0xc00000c;
    param_1[0x1d40] = 3;
    param_1[0x1a0b] = 1;
    param_1[0x1a0c] = 4;
    param_1[0x1a0d] = 8;
    iVar9 = 1;
    if (param_1[0x1d5b] == 0) {
      iVar9 = 5;
    }
    param_1[0x1d2f] = iVar9;
    *param_1 = (int)(param_1 + 4);
    param_1[1] = (int)(param_1 + 0x608);
    param_1[2] = (int)(param_1 + 0x406);
    param_1[3] = (int)(param_1 + 0xa0a);
    if (!bVar25) {
      FUN_719e624c(param_1,iVar7);
    }
    if (*puVar3 >> 4 == 0x184d2a5) {
      iVar7 = param_1[0x5d89];
      iVar9 = 7;
    }
    else {
      uVar23 = FUN_719e93fc(param_1,puVar3,param_1[0x1d76]);
      if (0xffffff88 < uVar23) {
        return uVar23;
      }
      iVar9 = 2;
      iVar7 = 3;
    }
    param_1[0x1d41] = iVar9;
    param_1[0x1d2f] = iVar7;
    uVar18 = param_1[0x1d32];
    iVar7 = param_1[0x1d33];
    uVar23 = 0x400;
    if (0x400 < uVar18) {
      uVar23 = uVar18;
    }
    if (iVar7 == 0) {
      uVar18 = uVar23;
    }
    param_1[0x1d32] = uVar18;
    if ((uint)(uVar18 <= (uint)param_1[0x1d71]) <= (uint)-iVar7) {
      return 0xfffffff0;
    }
    uVar21 = param_1[0x1d34];
    uVar23 = 0;
    if (uVar21 < 5) {
      uVar21 = 4;
    }
    uVar8 = 0;
    if (param_1[0x1d79] == 0) {
      uVar23 = 0x20000;
      if (uVar18 < 0x20000) {
        uVar23 = uVar18;
      }
      if (iVar7 != 0) {
        uVar23 = 0x20000;
      }
      uVar16 = uVar18 + uVar23 + 0x20040;
      uVar11 = iVar7 + (uint)CARRY4(uVar18,uVar23) + (uint)(0xfffdffbf < uVar18 + uVar23);
      uVar18 = param_1[0x1d31];
      uVar23 = *puVar5;
      if (uVar11 <= uVar18 && (uint)(*puVar5 <= uVar16) <= uVar11 - uVar18) {
        uVar23 = uVar16;
        uVar18 = uVar11;
      }
      if (uVar18 != 0) {
        uVar23 = 0xfffffff0;
      }
    }
    uVar18 = uVar23 + uVar21;
    if (uVar18 * 3 <= (uint)(param_1[0x1d73] + param_1[0x1d6f])) {
      uVar8 = param_1[0x5d8d] + 1;
    }
    param_1[0x5d8d] = uVar8;
    if (((uint)param_1[0x1d6f] < uVar21 || (uint)param_1[0x1d73] < uVar23) || (0x7f < uVar8)) {
      if (param_1[0x1d64] == 0) {
        if (param_1[0x1d6e] != 0) {
          if ((code *)param_1[0x1d60] == (code *)0x0) {
            imp_free(param_1[0x1d6e]);
          }
          else {
            (*(code *)param_1[0x1d60])(param_1[0x1d61]);
          }
        }
        param_1[0x1d73] = 0;
        param_1[0x1d6f] = 0;
        if ((code *)param_1[0x1d5f] == (code *)0x0) {
          iVar7 = imp_malloc(uVar18);
        }
        else {
          iVar7 = (*(code *)param_1[0x1d5f])(param_1[0x1d61],uVar18);
        }
        param_1[0x1d6e] = iVar7;
        if (iVar7 == 0) {
          return 0xffffffc0;
        }
      }
      else {
        if (param_1[0x1d64] - 0x17638U < uVar18) {
          return 0xffffffc0;
        }
        iVar7 = param_1[0x1d6e];
      }
      param_1[0x1d6f] = uVar21;
      param_1[0x1d72] = iVar7 + uVar21;
      param_1[0x1d73] = uVar23;
    }
    param_1[0x1d6d] = 2;
switchD_719eb560_caseD_2:
    iVar7 = param_1[0x1d41];
    uVar18 = iVar20 - iStack_50;
    if (iVar7 - 3U < 2) {
      uVar23 = param_1[0x1d2f];
      uVar21 = uVar23;
      if (param_1[0x1d40] != 0) goto LAB_719ebaf0;
      uVar21 = uVar18;
      if (uVar23 < uVar18) {
        uVar21 = uVar23;
      }
      if (uVar21 < 2) {
        uVar21 = 1;
      }
    }
    else {
      uVar21 = param_1[0x1d2f];
LAB_719ebaf0:
      uVar23 = uVar21;
      if (uVar21 == 0) goto LAB_719ebd54;
    }
    if (uVar18 < uVar21) {
      iVar9 = iVar20;
      if (iStack_50 == iVar20) goto LAB_719ebdf8;
      param_1[0x1d6d] = 3;
LAB_719ebb1c:
      iVar9 = param_1[0x1d70];
      uVar18 = uVar23 - iVar9;
      if (iVar7 == 7) {
        uVar21 = iVar20 - iStack_50;
        if (uVar18 < (uint)(iVar20 - iStack_50)) {
          uVar21 = uVar18;
        }
        if (uVar21 == 0) goto LAB_719ebbf0;
LAB_719ebb90:
        iStack_50 = iStack_50 + uVar21;
        param_1[0x1d70] = iVar9 + uVar21;
        iVar9 = iStack_50;
        if (uVar21 < uVar18) goto LAB_719ebdf8;
      }
      else {
        if ((uint)(param_1[0x1d6f] - iVar9) < uVar18) {
          return 0xffffffec;
        }
        uVar21 = iVar20 - iStack_50;
        if (uVar18 < (uint)(iVar20 - iStack_50)) {
          uVar21 = uVar18;
        }
        if (uVar21 != 0) {
          imp___aeabi_memcpy(param_1[0x1d6e] + iVar9,iStack_50,uVar21);
          iVar9 = param_1[0x1d70];
          goto LAB_719ebb90;
        }
LAB_719ebbf0:
        iVar9 = iStack_50;
        if (uVar18 != 0) goto LAB_719ebdf8;
      }
      iVar7 = param_1[0x1d41];
      param_1[0x1d70] = 0;
      if (param_1[0x1d79] == 0) {
        if (iVar7 == 7) {
          iVar17 = 0;
          iVar9 = *piVar6;
        }
        else {
          iVar9 = param_1[0x1d74];
          iVar17 = param_1[0x1d73] - iVar9;
        }
        uVar23 = thunk_WxORCdnHXhUNmauorT_abwE
                           (param_1,param_1[0x1d72] + iVar9,iVar17,param_1[0x1d6e],uVar23);
        if (0xffffff88 < uVar23) {
          return uVar23;
        }
        if (uVar23 == 0 && iVar7 != 7) goto LAB_719ebc40;
        param_1[0x1d75] = param_1[0x1d74] + uVar23;
        iVar7 = 4;
      }
      else {
        iVar9 = 0;
        if (iVar7 != 7) {
          iVar9 = iVar4 - iVar19;
        }
        uVar23 = thunk_WxORCdnHXhUNmauorT_abwE(param_1,iVar19,iVar9,param_1[0x1d6e],uVar23);
        if (0xffffff88 < uVar23) {
          return uVar23;
        }
        iVar19 = iVar19 + uVar23;
LAB_719ebc40:
        iVar7 = 2;
      }
      param_1[0x1d6d] = iVar7;
    }
    else {
      if (param_1[0x1d79] == 0) {
        if (iVar7 == 7) {
          iVar17 = 0;
          iVar9 = *piVar6;
        }
        else {
          iVar9 = param_1[0x1d74];
          iVar17 = param_1[0x1d73] - iVar9;
        }
        uVar23 = thunk_WxORCdnHXhUNmauorT_abwE
                           (param_1,param_1[0x1d72] + iVar9,iVar17,iStack_50,uVar21);
        if (0xffffff88 < uVar23) {
          return uVar23;
        }
        if (uVar23 == 0 && iVar7 != 7) goto LAB_719ebbe8;
        param_1[0x1d75] = param_1[0x1d74] + uVar23;
        iVar7 = 4;
      }
      else {
        iVar9 = 0;
        if (iVar7 != 7) {
          iVar9 = iVar4 - iVar19;
        }
        uVar23 = thunk_WxORCdnHXhUNmauorT_abwE(param_1,iVar19,iVar9,iStack_50,uVar21);
        if (0xffffff88 < uVar23) {
          return uVar23;
        }
        iVar19 = iVar19 + uVar23;
LAB_719ebbe8:
        iVar7 = 2;
      }
      param_1[0x1d6d] = iVar7;
      iStack_50 = iStack_50 + uVar21;
    }
  }
  uVar10 = FUN_719e8aa0(param_1);
  uVar23 = FUN_719e7f98(param_1,iVar19,iVar4 - iVar19,iVar15,uStack_34,0,0,uVar10);
  if (0xffffff88 < uVar23) {
    return uVar23;
  }
  if (iVar19 != 0) {
    iVar19 = iVar19 + uVar23;
  }
  param_1[0x1d2f] = 0;
  iStack_50 = iVar15 + uStack_34;
LAB_719ebd54:
  param_1[0x1d6d] = 0;
  iVar9 = iStack_50;
LAB_719ebdf8:
  iStack_50 = iVar9;
  param_3[2] = iStack_50 - *param_3;
  iVar4 = param_2[1];
  iVar20 = iVar19 - *param_2;
  param_2[2] = iVar20;
  *piVar2 = *param_2;
  param_1[0x1d7b] = iVar4;
  param_1[0x1d7c] = iVar20;
  iVar4 = iVar15;
  if (iStack_50 == iVar15) {
    iVar4 = iVar14 + uVar1;
  }
  if (iStack_50 == iVar15 && iVar19 == iVar4) {
    iVar14 = param_1[0x1d78];
    param_1[0x1d78] = iVar14 + 1;
    if (0xe < iVar14) {
      if (uVar1 == uVar13) {
        return 0xffffffb0;
      }
      if (uVar22 == uVar12) {
        return 0xffffffae;
      }
    }
  }
  else {
    param_1[0x1d78] = 0;
  }
  if (param_1[0x1d2f] != 0) {
    uVar12 = param_1[0x1d2f] - param_1[0x1d70];
    if (param_1[0x1d41] == 3) {
      uVar12 = uVar12 + 3;
    }
    return uVar12;
  }
  if (param_1[0x1d75] == param_1[0x1d74]) {
    uVar12 = 0;
    if (param_1[0x1d77] != 0) {
      if ((uint)param_3[2] < (uint)param_3[1]) {
        param_3[2] = param_3[2] + 1;
        return 0;
      }
      param_1[0x1d6d] = 2;
      return 1;
    }
  }
  else {
    uVar12 = 1;
    if (param_1[0x1d77] == 0) {
      param_3[2] = param_3[2] + -1;
      param_1[0x1d77] = 1;
      return 1;
    }
  }
  return uVar12;
}


// =========================================================================
// Function: thunk_DVOAgYELBkvBicWiQ
// Entry: 0x71e040f0 | Size: 1 bytes
// =========================================================================

void thunk_DVOAgYELBkvBicWiQ(void)

{
  DVOAgYELBkvBicWiQ();
  return;
}


// =========================================================================
// Function: thunk_gU_okWobkqLbcDT_kstxqtkDnnAFed
// Entry: 0x71e04100 | Size: 1 bytes
// =========================================================================

void thunk_gU_okWobkqLbcDT_kstxqtkDnnAFed(void)

{
  gU_okWobkqLbcDT_kstxqtkDnnAFed();
  return;
}


// =========================================================================
// Function: thunk_RzoWWsPhVnWTBZpsdAweiFrKvSDOSEbfl
// Entry: 0x71e04110 | Size: 1 bytes
// =========================================================================

void thunk_RzoWWsPhVnWTBZpsdAweiFrKvSDOSEbfl(void)

{
  RzoWWsPhVnWTBZpsdAweiFrKvSDOSEbfl();
  return;
}


// =========================================================================
// Function: thunk_YNSJEWxgPSgxlVnvKsrqXvo
// Entry: 0x71e04120 | Size: 1 bytes
// =========================================================================

void thunk_YNSJEWxgPSgxlVnvKsrqXvo(void)

{
  YNSJEWxgPSgxlVnvKsrqXvo();
  return;
}


// =========================================================================
// Function: thunk_Z_UxBhPMHtGmRxXnzkt
// Entry: 0x71e04130 | Size: 1 bytes
// =========================================================================

void thunk_Z_UxBhPMHtGmRxXnzkt(void)

{
  Z_UxBhPMHtGmRxXnzkt();
  return;
}


// =========================================================================
// Function: thunk_JPHg_riwdVorxwMyNhKBwBlYodr
// Entry: 0x71e04140 | Size: 1 bytes
// =========================================================================

void thunk_JPHg_riwdVorxwMyNhKBwBlYodr(void)

{
  JPHg_riwdVorxwMyNhKBwBlYodr();
  return;
}


// =========================================================================
// Function: thunk_QiSdtppFLLGQjJRvJPiv
// Entry: 0x71e04150 | Size: 1 bytes
// =========================================================================

void thunk_QiSdtppFLLGQjJRvJPiv(void)

{
  QiSdtppFLLGQjJRvJPiv();
  return;
}


// =========================================================================
// Function: thunk_MWwXENACOfDcfSeoFUpRyEenNQYDbsilaFx_k
// Entry: 0x71e04160 | Size: 1 bytes
// =========================================================================

void thunk_MWwXENACOfDcfSeoFUpRyEenNQYDbsilaFx_k(void)

{
  MWwXENACOfDcfSeoFUpRyEenNQYDbsilaFx_k();
  return;
}


// =========================================================================
// Function: thunk_AxNBeAoEyZJlYPuSDDlezjmHtGLEcZCxjjxuquZpCsw
// Entry: 0x71e04170 | Size: 1 bytes
// =========================================================================

void thunk_AxNBeAoEyZJlYPuSDDlezjmHtGLEcZCxjjxuquZpCsw(void)

{
  AxNBeAoEyZJlYPuSDDlezjmHtGLEcZCxjjxuquZpCsw();
  return;
}


// =========================================================================
// Function: thunk_YkvRczFYEfiMy_LwDSjkTcnymzYqVN
// Entry: 0x71e04180 | Size: 1 bytes
// =========================================================================

void thunk_YkvRczFYEfiMy_LwDSjkTcnymzYqVN(void)

{
  YkvRczFYEfiMy_LwDSjkTcnymzYqVN();
  return;
}


// =========================================================================
// Function: thunk_mLxyKQYauGNciBADnTJirshJMM_wYBPVwEMgxbprPIMr
// Entry: 0x71e04190 | Size: 1 bytes
// =========================================================================

void thunk_mLxyKQYauGNciBADnTJirshJMM_wYBPVwEMgxbprPIMr(void)

{
  mLxyKQYauGNciBADnTJirshJMM_wYBPVwEMgxbprPIMr();
  return;
}


// =========================================================================
// Function: thunk_NAUpeWJSovvMoxKm_
// Entry: 0x71e041a0 | Size: 1 bytes
// =========================================================================

void thunk_NAUpeWJSovvMoxKm_(void)

{
  NAUpeWJSovvMoxKm_();
  return;
}


// =========================================================================
// Function: thunk_sgNdFRQraCODaHcGaQsQbGmJVEWhxwQQerZy
// Entry: 0x71e041b0 | Size: 1 bytes
// =========================================================================

void thunk_sgNdFRQraCODaHcGaQsQbGmJVEWhxwQQerZy(void)

{
  sgNdFRQraCODaHcGaQsQbGmJVEWhxwQQerZy();
  return;
}


// =========================================================================
// Function: imp_log10
// Entry: 0x71e041c0 | Size: 1 bytes
// =========================================================================

void imp_log10(void)

{
  return;
}


// =========================================================================
// Function: thunk_HwKVSqItZbTblNfsqwJDtrVwkTRzVhwllsieOpYMilrpQTz
// Entry: 0x71e041d0 | Size: 1 bytes
// =========================================================================

void thunk_HwKVSqItZbTblNfsqwJDtrVwkTRzVhwllsieOpYMilrpQTz(void)

{
  HwKVSqItZbTblNfsqwJDtrVwkTRzVhwllsieOpYMilrpQTz();
  return;
}


// =========================================================================
// Function: thunk_CsELvjMARnKqnPUOBWOQNlrutoQhdhLFdhSmGVXRpTutt_sIXoMpmYIkERzmFjwtkhGfPakLX_AvcpqmQooYorQHgEWmlabcxbaIkYQYyVEXVpwkyLZqd_tBELOkq_BRbwWtfFzTIPbjG_vfvaEeHzNOLqGTfaWZGQNRvXHWjRNgRTRekGEbjFewjSkBFgC_TyGdUlIJCTWSThlLlJheLOBRRuwr_YFjFqkjrMuBQnsvbLoVzmlwklbJKRtgViWLueJQl_qCjSbEYwYw_eWPeWwgKvDqvBEZhA_buqFcYEgzUTsSHuapLzTCwMiWptVAts_wMBHwtsopiHPcXquAiYqvvIcMYLNFklynHvQxcFRHzszIofjfnph
// Entry: 0x71e041e0 | Size: 1 bytes
// =========================================================================

void thunk_CsELvjMARnKqnPUOBWOQNlrutoQhdhLFdhSmGVXRpTutt_sIXoMpmYIkERzmFjwtkhGfPakLX_AvcpqmQooYorQHgEWmlabcxbaIkYQYyVEXVpwkyLZqd_tBELOkq_BRbwWtfFzTIPbjG_vfvaEeHzNOLqGTfaWZGQNRvXHWjRNgRTRekGEbjFewjSkBFgC_TyGdUlIJCTWSThlLlJheLOBRRuwr_YFjFqkjrMuBQnsvbLoVzmlwklbJKRtgViWLueJQl_qCjSbEYwYw_eWPeWwgKvDqvBEZhA_buqFcYEgzUTsSHuapLzTCwMiWptVAts_wMBHwtsopiHPcXquAiYqvvIcMYLNFklynHvQxcFRHzszIofjfnph
               (void)

{
  CsELvjMARnKqnPUOBWOQNlrutoQhdhLFdhSmGVXRpTutt_sIXoMpmYIkERzmFjwtkhGfPakLX_AvcpqmQooYorQHgEWmlabcxbaIkYQYyVEXVpwkyLZqd_tBELOkq_BRbwWtfFzTIPbjG_vfvaEeHzNOLqGTfaWZGQNRvXHWjRNgRTRekGEbjFewjSkBFgC_TyGdUlIJCTWSThlLlJheLOBRRuwr_YFjFqkjrMuBQnsvbLoVzmlwklbJKRtgViWLueJQl_qCjSbEYwYw_eWPeWwgKvDqvBEZhA_buqFcYEgzUTsSHuapLzTCwMiWptVAts_wMBHwtsopiHPcXquAiYqvvIcMYLNFklynHvQxcFRHzszIofjfnph
            ();
  return;
}


// =========================================================================
// Function: thunk_ANxsBIktOrTHxxuRME_pXEVrvCgRunie
// Entry: 0x71e041f0 | Size: 1 bytes
// =========================================================================

void thunk_ANxsBIktOrTHxxuRME_pXEVrvCgRunie(void)

{
  ANxsBIktOrTHxxuRME_pXEVrvCgRunie();
  return;
}


// =========================================================================
// Function: thunk_vECatuWQidrmiAbkVpDIOgxksHFDVPc
// Entry: 0x71e04200 | Size: 1 bytes
// =========================================================================

void thunk_vECatuWQidrmiAbkVpDIOgxksHFDVPc(void)

{
  vECatuWQidrmiAbkVpDIOgxksHFDVPc();
  return;
}


// =========================================================================
// Function: thunk_DKEOSoclWolrzhrCseSmYmCavlWNLUBxaurUdYTPGUkzSVIwDpbugqZAjEZexnBcuVgKPrrs_XescCGAzKXLBYNZUnUhjbHJKCURZoSKPhfgWBvDMZSMBdXjikJXSITLJdSRHHWSeDxmqPLdcUFZLzEVqLJxsIllaDOXavCwkEEEgJQLSIhUjTkOfpshGDNtglrqDSAbjNL_CpQQTSwNkbhIAfHJtjAXFzfXCaIfufyr_lzkpE
// Entry: 0x71e04210 | Size: 1 bytes
// =========================================================================

void thunk_DKEOSoclWolrzhrCseSmYmCavlWNLUBxaurUdYTPGUkzSVIwDpbugqZAjEZexnBcuVgKPrrs_XescCGAzKXLBYNZUnUhjbHJKCURZoSKPhfgWBvDMZSMBdXjikJXSITLJdSRHHWSeDxmqPLdcUFZLzEVqLJxsIllaDOXavCwkEEEgJQLSIhUjTkOfpshGDNtglrqDSAbjNL_CpQQTSwNkbhIAfHJtjAXFzfXCaIfufyr_lzkpE
               (void)

{
  DKEOSoclWolrzhrCseSmYmCavlWNLUBxaurUdYTPGUkzSVIwDpbugqZAjEZexnBcuVgKPrrs_XescCGAzKXLBYNZUnUhjbHJKCURZoSKPhfgWBvDMZSMBdXjikJXSITLJdSRHHWSeDxmqPLdcUFZLzEVqLJxsIllaDOXavCwkEEEgJQLSIhUjTkOfpshGDNtglrqDSAbjNL_CpQQTSwNkbhIAfHJtjAXFzfXCaIfufyr_lzkpE
            ();
  return;
}


// =========================================================================
// Function: thunk_pDWhtTFWkrsDWWcvdvvDDnzqJFLqh
// Entry: 0x71e04220 | Size: 1 bytes
// =========================================================================

void thunk_pDWhtTFWkrsDWWcvdvvDDnzqJFLqh(void)

{
  pDWhtTFWkrsDWWcvdvvDDnzqJFLqh();
  return;
}


// =========================================================================
// Function: thunk_BZjgrVvObRBgjvwYYgXNVMcSKjhJ_VYPddeQpwIFzzsbk
// Entry: 0x71e04230 | Size: 1 bytes
// =========================================================================

void thunk_BZjgrVvObRBgjvwYYgXNVMcSKjhJ_VYPddeQpwIFzzsbk(void)

{
  BZjgrVvObRBgjvwYYgXNVMcSKjhJ_VYPddeQpwIFzzsbk();
  return;
}


// =========================================================================
// Function: thunk_YmCKmBfiKjQCOzMuQuRf
// Entry: 0x71e04240 | Size: 1 bytes
// =========================================================================

void thunk_YmCKmBfiKjQCOzMuQuRf(void)

{
  YmCKmBfiKjQCOzMuQuRf();
  return;
}


// =========================================================================
// Function: thunk_cNjFLqNaVssJfdZDUkpzBWcZSi_EiJLaBFNuDyNwbqqNMJZlhzwukKcpeUFNMhFOxcmYGcCXhfR
// Entry: 0x71e04250 | Size: 1 bytes
// =========================================================================

void thunk_cNjFLqNaVssJfdZDUkpzBWcZSi_EiJLaBFNuDyNwbqqNMJZlhzwukKcpeUFNMhFOxcmYGcCXhfR(void)

{
  cNjFLqNaVssJfdZDUkpzBWcZSi_EiJLaBFNuDyNwbqqNMJZlhzwukKcpeUFNMhFOxcmYGcCXhfR();
  return;
}


// =========================================================================
// Function: thunk_BVhTzRASKpKFaddKkIBkrJzirDVELvsRGIHSrzEVyxasVRiDbEYzTjA_nWOgPKOFkMfyxkFwZPglFVKJQcYCNDFQFmWfRpEOkTqIExkMzwwGzBrki
// Entry: 0x71e04260 | Size: 1 bytes
// =========================================================================

void thunk_BVhTzRASKpKFaddKkIBkrJzirDVELvsRGIHSrzEVyxasVRiDbEYzTjA_nWOgPKOFkMfyxkFwZPglFVKJQcYCNDFQFmWfRpEOkTqIExkMzwwGzBrki
               (void)

{
  BVhTzRASKpKFaddKkIBkrJzirDVELvsRGIHSrzEVyxasVRiDbEYzTjA_nWOgPKOFkMfyxkFwZPglFVKJQcYCNDFQFmWfRpEOkTqIExkMzwwGzBrki
            ();
  return;
}


// =========================================================================
// Function: thunk_BxqbdDnsSxEpjXXFlhYVLyacwVLgrMwvLQYJWqmpJRQjZgOkiovi
// Entry: 0x71e04270 | Size: 1 bytes
// =========================================================================

void thunk_BxqbdDnsSxEpjXXFlhYVLyacwVLgrMwvLQYJWqmpJRQjZgOkiovi(void)

{
  BxqbdDnsSxEpjXXFlhYVLyacwVLgrMwvLQYJWqmpJRQjZgOkiovi();
  return;
}


// =========================================================================
// Function: thunk_oatQKqcSjdtEKERdnnFXPgy_ZyvuIzAFIGjB_y
// Entry: 0x71e04280 | Size: 1 bytes
// =========================================================================

void thunk_oatQKqcSjdtEKERdnnFXPgy_ZyvuIzAFIGjB_y(void)

{
  oatQKqcSjdtEKERdnnFXPgy_ZyvuIzAFIGjB_y();
  return;
}


// =========================================================================
// Function: thunk_cqRozOlUtcCeYXW_IyKnLvgbMRNzuOoJADLTa
// Entry: 0x71e04290 | Size: 1 bytes
// =========================================================================

void thunk_cqRozOlUtcCeYXW_IyKnLvgbMRNzuOoJADLTa(void)

{
  cqRozOlUtcCeYXW_IyKnLvgbMRNzuOoJADLTa();
  return;
}


// =========================================================================
// Function: thunk_ASqPmjWWuQNeUASRjGCwnkqJO
// Entry: 0x71e042a0 | Size: 1 bytes
// =========================================================================

void thunk_ASqPmjWWuQNeUASRjGCwnkqJO(void)

{
  ASqPmjWWuQNeUASRjGCwnkqJO();
  return;
}


// =========================================================================
// Function: thunk_NaIqoNRtCAGEePRSTuryLtMqrlCwbWPXktTTJmgatKa_p
// Entry: 0x71e042b0 | Size: 1 bytes
// =========================================================================

void thunk_NaIqoNRtCAGEePRSTuryLtMqrlCwbWPXktTTJmgatKa_p(void)

{
  NaIqoNRtCAGEePRSTuryLtMqrlCwbWPXktTTJmgatKa_p();
  return;
}


// =========================================================================
// Function: thunk_FoOydpyumkRonuJBUbSmHdbNQTDlJbrHnyqclkVSY
// Entry: 0x71e042c0 | Size: 1 bytes
// =========================================================================

void thunk_FoOydpyumkRonuJBUbSmHdbNQTDlJbrHnyqclkVSY(void)

{
  FoOydpyumkRonuJBUbSmHdbNQTDlJbrHnyqclkVSY();
  return;
}


// =========================================================================
// Function: thunk_RmMQbSHbkKQMPMrbHOYEzCfgwoKBDDSTaySvlLWZzlLjXnOyjMinTeHJEZApFkeIlHTdeZUheNesdnFmNmGnEpnZDzkwMpCf
// Entry: 0x71e042d0 | Size: 1 bytes
// =========================================================================

void thunk_RmMQbSHbkKQMPMrbHOYEzCfgwoKBDDSTaySvlLWZzlLjXnOyjMinTeHJEZApFkeIlHTdeZUheNesdnFmNmGnEpnZDzkwMpCf
               (void)

{
  (*(code *)(undefined *)0x719fd8ed)();
  return;
}


// =========================================================================
// Function: thunk_reoTToJBKyoJJeEsDxUKIAqqzzK
// Entry: 0x71e042e0 | Size: 1 bytes
// =========================================================================

void thunk_reoTToJBKyoJJeEsDxUKIAqqzzK(void)

{
  reoTToJBKyoJJeEsDxUKIAqqzzK();
  return;
}


// =========================================================================
// Function: thunk_XEdyDTUgKJAxUtDaHcHgOljGi
// Entry: 0x71e042f0 | Size: 1 bytes
// =========================================================================

void thunk_XEdyDTUgKJAxUtDaHcHgOljGi(void)

{
  XEdyDTUgKJAxUtDaHcHgOljGi();
  return;
}


// =========================================================================
// Function: thunk_wD_iIfpJrATzIqwtiLeyFPx_zxxHoTOJemlmUXOALLXLvHo
// Entry: 0x71e04300 | Size: 1 bytes
// =========================================================================

void thunk_wD_iIfpJrATzIqwtiLeyFPx_zxxHoTOJemlmUXOALLXLvHo(void)

{
  wD_iIfpJrATzIqwtiLeyFPx_zxxHoTOJemlmUXOALLXLvHo();
  return;
}


// =========================================================================
// Function: thunk_gSAzs_aQwkpQClFIvmOeundBzqlWqPBTWAvbDZrBRkpZrdvIJvaFafEAzOTqJ_d_diWyaZtNHwju_WuvXjidwtUtUOrvcYjpEDtJbfTUTdpaMxrsImcanKYLHnXgRVwCDa_gAxXlvZUtemUTgqxvDXqtR
// Entry: 0x71e04310 | Size: 1 bytes
// =========================================================================

void thunk_gSAzs_aQwkpQClFIvmOeundBzqlWqPBTWAvbDZrBRkpZrdvIJvaFafEAzOTqJ_d_diWyaZtNHwju_WuvXjidwtUtUOrvcYjpEDtJbfTUTdpaMxrsImcanKYLHnXgRVwCDa_gAxXlvZUtemUTgqxvDXqtR
               (void)

{
  gSAzs_aQwkpQClFIvmOeundBzqlWqPBTWAvbDZrBRkpZrdvIJvaFafEAzOTqJ_d_diWyaZtNHwju_WuvXjidwtUtUOrvcYjpEDtJbfTUTdpaMxrsImcanKYLHnXgRVwCDa_gAxXlvZUtemUTgqxvDXqtR
            ();
  return;
}


// =========================================================================
// Function: thunk_eeWqNjKk_edspeKyhBHFFIKTmlfspJedrqrAexttkJXNUZyD
// Entry: 0x71e04320 | Size: 1 bytes
// =========================================================================

void thunk_eeWqNjKk_edspeKyhBHFFIKTmlfspJedrqrAexttkJXNUZyD(void)

{
  eeWqNjKk_edspeKyhBHFFIKTmlfspJedrqrAexttkJXNUZyD();
  return;
}


// =========================================================================
// Function: thunk_M_yTNhCqFFbumYLFAiCnREzq
// Entry: 0x71e04330 | Size: 1 bytes
// =========================================================================

void thunk_M_yTNhCqFFbumYLFAiCnREzq(void)

{
  M_yTNhCqFFbumYLFAiCnREzq();
  return;
}


// =========================================================================
// Function: thunk_eLYPBHXbPSP
// Entry: 0x71e04340 | Size: 1 bytes
// =========================================================================

void thunk_eLYPBHXbPSP(void)

{
  eLYPBHXbPSP();
  return;
}


// =========================================================================
// Function: thunk_vOWzyoSimCuwyLKtizrz
// Entry: 0x71e04350 | Size: 1 bytes
// =========================================================================

void thunk_vOWzyoSimCuwyLKtizrz(void)

{
  vOWzyoSimCuwyLKtizrz();
  return;
}


// =========================================================================
// Function: thunk_yWQCKHflWNVsbmkMVfBMdga
// Entry: 0x71e04360 | Size: 1 bytes
// =========================================================================

void thunk_yWQCKHflWNVsbmkMVfBMdga(void)

{
  yWQCKHflWNVsbmkMVfBMdga();
  return;
}


// =========================================================================
// Function: thunk_WfkZEeuHdKMsbupmZh_AdtqB
// Entry: 0x71e04370 | Size: 1 bytes
// =========================================================================

void thunk_WfkZEeuHdKMsbupmZh_AdtqB(void)

{
  WfkZEeuHdKMsbupmZh_AdtqB();
  return;
}


// =========================================================================
// Function: thunk_BoWIKxcsOSESRsHPVpgJIigJvHjNbWO
// Entry: 0x71e04380 | Size: 1 bytes
// =========================================================================

void thunk_BoWIKxcsOSESRsHPVpgJIigJvHjNbWO(void)

{
  BoWIKxcsOSESRsHPVpgJIigJvHjNbWO();
  return;
}


// =========================================================================
// Function: thunk_CnY_uZeaDyxdbKuhNYOsuNTHkGOv_Ep
// Entry: 0x71e04390 | Size: 1 bytes
// =========================================================================

void thunk_CnY_uZeaDyxdbKuhNYOsuNTHkGOv_Ep(void)

{
  CnY_uZeaDyxdbKuhNYOsuNTHkGOv_Ep();
  return;
}


// =========================================================================
// Function: thunk_hXGndMPoTPedqAeOKjpCkxmiAiTVmPOqOkhKzDobWWjPPposYTvVymjepvgBFAjdvRREszmABDDuSIiejSwWtMTsAYWWUIUxuSAEBwJOwKhyLkJOFAnGug_MpalGZyFBFflfHBpmsxoReBMyYfaFJEOhEdFzpulWuPgsAyNPIEzRLuIvpdJgtwqysnpqdIXMaYiLBYQYscnUsFAegcXww
// Entry: 0x71e043a0 | Size: 1 bytes
// =========================================================================

void thunk_hXGndMPoTPedqAeOKjpCkxmiAiTVmPOqOkhKzDobWWjPPposYTvVymjepvgBFAjdvRREszmABDDuSIiejSwWtMTsAYWWUIUxuSAEBwJOwKhyLkJOFAnGug_MpalGZyFBFflfHBpmsxoReBMyYfaFJEOhEdFzpulWuPgsAyNPIEzRLuIvpdJgtwqysnpqdIXMaYiLBYQYscnUsFAegcXww
               (void)

{
  hXGndMPoTPedqAeOKjpCkxmiAiTVmPOqOkhKzDobWWjPPposYTvVymjepvgBFAjdvRREszmABDDuSIiejSwWtMTsAYWWUIUxuSAEBwJOwKhyLkJOFAnGug_MpalGZyFBFflfHBpmsxoReBMyYfaFJEOhEdFzpulWuPgsAyNPIEzRLuIvpdJgtwqysnpqdIXMaYiLBYQYscnUsFAegcXww
            ();
  return;
}


// =========================================================================
// Function: thunk_ogSVr_bYgRlpW
// Entry: 0x71e043b0 | Size: 1 bytes
// =========================================================================

void thunk_ogSVr_bYgRlpW(void)

{
  ogSVr_bYgRlpW();
  return;
}


// =========================================================================
// Function: thunk_xigQKDQNDmalTOa
// Entry: 0x71e043c0 | Size: 1 bytes
// =========================================================================

void thunk_xigQKDQNDmalTOa(void)

{
  xigQKDQNDmalTOa();
  return;
}


// =========================================================================
// Function: imp_rnnoise_get_frame_size
// Entry: 0x71e043d0 | Size: 1 bytes
// =========================================================================

void imp_rnnoise_get_frame_size(void)

{
  return;
}


// =========================================================================
// Function: imp_rnnoise_create
// Entry: 0x71e043e0 | Size: 1 bytes
// =========================================================================

void imp_rnnoise_create(void)

{
  return;
}


// =========================================================================
// Function: imp_rnnoise_destroy
// Entry: 0x71e043f0 | Size: 1 bytes
// =========================================================================

void imp_rnnoise_destroy(void)

{
  return;
}


// =========================================================================
// Function: imp_rnnoise_process_frame
// Entry: 0x71e04400 | Size: 1 bytes
// =========================================================================

void imp_rnnoise_process_frame(void)

{
  return;
}


// =========================================================================
// Function: thunk_qAhWzUBHPqTnUVJztaRKWzKsvyHWCgTpoLVomwuKOUODSbQRndFWUUqrSaYRJBAKUFaKslkXWSUWOyu
// Entry: 0x71e04410 | Size: 1 bytes
// =========================================================================

void thunk_qAhWzUBHPqTnUVJztaRKWzKsvyHWCgTpoLVomwuKOUODSbQRndFWUUqrSaYRJBAKUFaKslkXWSUWOyu(void)

{
  qAhWzUBHPqTnUVJztaRKWzKsvyHWCgTpoLVomwuKOUODSbQRndFWUUqrSaYRJBAKUFaKslkXWSUWOyu();
  return;
}


// =========================================================================
// Function: thunk_fZVIogSIzDYEWTVXoOHMDKoDaANeCexOcuBExdubEAIKAoSlDsnZzsDdyEIrRXruKpQIQAeEFIBKWkZpfieDB
// Entry: 0x71e04420 | Size: 1 bytes
// =========================================================================

void thunk_fZVIogSIzDYEWTVXoOHMDKoDaANeCexOcuBExdubEAIKAoSlDsnZzsDdyEIrRXruKpQIQAeEFIBKWkZpfieDB
               (void)

{
  fZVIogSIzDYEWTVXoOHMDKoDaANeCexOcuBExdubEAIKAoSlDsnZzsDdyEIrRXruKpQIQAeEFIBKWkZpfieDB();
  return;
}


// =========================================================================
// Function: thunk_HOiXtOwYIpiiJbTEputKBWeQBxMMFYTjaWBAmpUCDVWcWX
// Entry: 0x71e04430 | Size: 1 bytes
// =========================================================================

void thunk_HOiXtOwYIpiiJbTEputKBWeQBxMMFYTjaWBAmpUCDVWcWX(void)

{
  HOiXtOwYIpiiJbTEputKBWeQBxMMFYTjaWBAmpUCDVWcWX();
  return;
}


// =========================================================================
// Function: thunk_wUIJdSfMZAYTAeYdtQJxmqjHamSeylamPr
// Entry: 0x71e04440 | Size: 1 bytes
// =========================================================================

void thunk_wUIJdSfMZAYTAeYdtQJxmqjHamSeylamPr(void)

{
  wUIJdSfMZAYTAeYdtQJxmqjHamSeylamPr();
  return;
}


// =========================================================================
// Function: thunk_DHAxyyAvwAPvDqwqB_hlocVFAQDGGLXHqHxmfPHG
// Entry: 0x71e04450 | Size: 1 bytes
// =========================================================================

void thunk_DHAxyyAvwAPvDqwqB_hlocVFAQDGGLXHqHxmfPHG(void)

{
  DHAxyyAvwAPvDqwqB_hlocVFAQDGGLXHqHxmfPHG();
  return;
}


// =========================================================================
// Function: thunk_gTgTYtYKC_PsuGWKxPcolAxGKsXxRLfNmTJZYkm
// Entry: 0x71e04460 | Size: 1 bytes
// =========================================================================

void thunk_gTgTYtYKC_PsuGWKxPcolAxGKsXxRLfNmTJZYkm(void)

{
  gTgTYtYKC_PsuGWKxPcolAxGKsXxRLfNmTJZYkm();
  return;
}


// =========================================================================
// Function: thunk_VzLCktuHVYUkPhKjvUpVwqUUDEEItmLrrxiLpIlPHdfTFHKWVgDWUDpllCqajhm_apawOkFboMQCzajYFgysjnTILmhppIDPGtcYSJbFJrxMDDhJTvT
// Entry: 0x71e04470 | Size: 1 bytes
// =========================================================================

void thunk_VzLCktuHVYUkPhKjvUpVwqUUDEEItmLrrxiLpIlPHdfTFHKWVgDWUDpllCqajhm_apawOkFboMQCzajYFgysjnTILmhppIDPGtcYSJbFJrxMDDhJTvT
               (void)

{
  VzLCktuHVYUkPhKjvUpVwqUUDEEItmLrrxiLpIlPHdfTFHKWVgDWUDpllCqajhm_apawOkFboMQCzajYFgysjnTILmhppIDPGtcYSJbFJrxMDDhJTvT
            ();
  return;
}


// =========================================================================
// Function: thunk_TXxetvJDXystgBvBfNzth_fcCtwhoPSObtjoLmOppUk_AGR_RTjxXG__mVJEbaflpxoqBynpRYAGWWJsP
// Entry: 0x71e04480 | Size: 1 bytes
// =========================================================================

void thunk_TXxetvJDXystgBvBfNzth_fcCtwhoPSObtjoLmOppUk_AGR_RTjxXG__mVJEbaflpxoqBynpRYAGWWJsP(void)

{
  TXxetvJDXystgBvBfNzth_fcCtwhoPSObtjoLmOppUk_AGR_RTjxXG__mVJEbaflpxoqBynpRYAGWWJsP();
  return;
}


// =========================================================================
// Function: thunk_xztmx_HcjzpmnmVhnXd_UJIpgSsJBvtGmRrXnLa_VymLYioXFctXXEQhcfAzJCbqxvLeoiJUQIEDmWEzWzhqhNdESHvrsxPgvhOhKEHJULnXHNgJZxNwsdGGjpNfTydABVdXnnTYq_ufsjZmDFaOzBagxFLVDELAmi_hcZVveRNy
// Entry: 0x71e04490 | Size: 1 bytes
// =========================================================================

void thunk_xztmx_HcjzpmnmVhnXd_UJIpgSsJBvtGmRrXnLa_VymLYioXFctXXEQhcfAzJCbqxvLeoiJUQIEDmWEzWzhqhNdESHvrsxPgvhOhKEHJULnXHNgJZxNwsdGGjpNfTydABVdXnnTYq_ufsjZmDFaOzBagxFLVDELAmi_hcZVveRNy
               (void)

{
  xztmx_HcjzpmnmVhnXd_UJIpgSsJBvtGmRrXnLa_VymLYioXFctXXEQhcfAzJCbqxvLeoiJUQIEDmWEzWzhqhNdESHvrsxPgvhOhKEHJULnXHNgJZxNwsdGGjpNfTydABVdXnnTYq_ufsjZmDFaOzBagxFLVDELAmi_hcZVveRNy
            ();
  return;
}


// =========================================================================
// Function: thunk_EdJoLbAOFpP_jZqXtTVkd_Hcjep
// Entry: 0x71e044a0 | Size: 1 bytes
// =========================================================================

void thunk_EdJoLbAOFpP_jZqXtTVkd_Hcjep(void)

{
  EdJoLbAOFpP_jZqXtTVkd_Hcjep();
  return;
}


// =========================================================================
// Function: thunk_GPLWPbpXfrElSCndxxtiPZiChGeWNcwPuuLIWiHiZGPDp
// Entry: 0x71e044b0 | Size: 1 bytes
// =========================================================================

void thunk_GPLWPbpXfrElSCndxxtiPZiChGeWNcwPuuLIWiHiZGPDp(void)

{
  GPLWPbpXfrElSCndxxtiPZiChGeWNcwPuuLIWiHiZGPDp();
  return;
}


// =========================================================================
// Function: thunk_JCimGkwQJRZN_NiLZRgiLgVvDNE
// Entry: 0x71e044c0 | Size: 1 bytes
// =========================================================================

void thunk_JCimGkwQJRZN_NiLZRgiLgVvDNE(void)

{
  JCimGkwQJRZN_NiLZRgiLgVvDNE();
  return;
}


// =========================================================================
// Function: thunk_lqBUPQVCdhrWjMemcYUEcstMwvfyhr_FI_MrLob_YG_Fgfoqc_JsMBYUcvMYnevFairuqUQmWCCvOoyUvibnAsoszqBkVdsFFaUwDLQY_LTwzbbuhvjBcKTlhbmSIpHroqMUixMWFxwHOlsuiccbtVeGArQUrNregBHvLENCVnhkEwfxIHYbV_BgZocHlWlxUqhQonYGJaWHBYwfdumxTnyIFWnTkgfhwehHCXpAlpEzcqB
// Entry: 0x71e044d0 | Size: 1 bytes
// =========================================================================

void thunk_lqBUPQVCdhrWjMemcYUEcstMwvfyhr_FI_MrLob_YG_Fgfoqc_JsMBYUcvMYnevFairuqUQmWCCvOoyUvibnAsoszqBkVdsFFaUwDLQY_LTwzbbuhvjBcKTlhbmSIpHroqMUixMWFxwHOlsuiccbtVeGArQUrNregBHvLENCVnhkEwfxIHYbV_BgZocHlWlxUqhQonYGJaWHBYwfdumxTnyIFWnTkgfhwehHCXpAlpEzcqB
               (void)

{
  lqBUPQVCdhrWjMemcYUEcstMwvfyhr_FI_MrLob_YG_Fgfoqc_JsMBYUcvMYnevFairuqUQmWCCvOoyUvibnAsoszqBkVdsFFaUwDLQY_LTwzbbuhvjBcKTlhbmSIpHroqMUixMWFxwHOlsuiccbtVeGArQUrNregBHvLENCVnhkEwfxIHYbV_BgZocHlWlxUqhQonYGJaWHBYwfdumxTnyIFWnTkgfhwehHCXpAlpEzcqB
            ();
  return;
}


// =========================================================================
// Function: thunk_NgrLCATbCzII_pMIjpuqvHKTsjtYRqFXSwIiS
// Entry: 0x71e044e0 | Size: 1 bytes
// =========================================================================

void thunk_NgrLCATbCzII_pMIjpuqvHKTsjtYRqFXSwIiS(void)

{
  NgrLCATbCzII_pMIjpuqvHKTsjtYRqFXSwIiS();
  return;
}


// =========================================================================
// Function: thunk_Q_HBWni_CZnahHnLuQDIMlX
// Entry: 0x71e044f0 | Size: 1 bytes
// =========================================================================

void thunk_Q_HBWni_CZnahHnLuQDIMlX(void)

{
  Q_HBWni_CZnahHnLuQDIMlX();
  return;
}


// =========================================================================
// Function: thunk_EclsAWVpNCSFCBAFdMytCwelt
// Entry: 0x71e04500 | Size: 1 bytes
// =========================================================================

void thunk_EclsAWVpNCSFCBAFdMytCwelt(void)

{
  EclsAWVpNCSFCBAFdMytCwelt();
  return;
}


// =========================================================================
// Function: thunk_kNriATwefwYrRbeikbaEu_Xvo
// Entry: 0x71e04510 | Size: 1 bytes
// =========================================================================

void thunk_kNriATwefwYrRbeikbaEu_Xvo(void)

{
  kNriATwefwYrRbeikbaEu_Xvo();
  return;
}


// =========================================================================
// Function: thunk_AtTJQeptwSfpawAlVWPCesKOif_OdXEXgNVdPnNVeVP
// Entry: 0x71e04520 | Size: 1 bytes
// =========================================================================

void thunk_AtTJQeptwSfpawAlVWPCesKOif_OdXEXgNVdPnNVeVP(void)

{
  AtTJQeptwSfpawAlVWPCesKOif_OdXEXgNVdPnNVeVP();
  return;
}


// =========================================================================
// Function: thunk_Vpn_OQoLfBUl_WHooVAsGedcWruVWqyLFZVnQr
// Entry: 0x71e04530 | Size: 1 bytes
// =========================================================================

void thunk_Vpn_OQoLfBUl_WHooVAsGedcWruVWqyLFZVnQr(undefined4 *param_1)

{
  *(undefined1 *)(param_1 + 0x23) = 1;
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined1 *)(param_1 + 0x15) = 1;
  *(undefined1 *)(param_1 + 0x14) = 1;
  param_1[0xd] = 1;
  param_1[0x22] = 0x40400000;
  param_1[9] = 0xff;
  *(undefined2 *)(param_1 + 0xb) = 0x100;
  param_1[10] = 0x100;
  param_1[0x19] = 0xf;
  param_1[6] = 0x3f800000;
  param_1[7] = 0x3f800000;
  param_1[4] = 0x3f800000;
  param_1[0x1a] = 0x3dcccccd;
  param_1[0x16] = 0;
  param_1[0x17] = 0x46;
  *param_1 = 48000;
  param_1[0x1b] = 300;
  param_1[0x11] = 0;
  param_1[0x12] = 3;
  param_1[0x13] = 9;
  *(undefined8 *)(param_1 + 0x26) = 0x4248000040a00000;
  *(undefined8 *)(param_1 + 0x28) = 0x40c0000041700000;
  param_1[0x2a] = 0xc2480000;
  *(undefined8 *)(param_1 + 0x1d) = 0x500000000;
  *(undefined8 *)(param_1 + 0x1f) = 0x500000005;
  param_1[0x21] = 0xbf800000;
  param_1[0x2b] = 0;
  param_1[0x2c] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[0x2d] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[0x2e] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined2 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  return;
}


// =========================================================================
// Function: thunk_JCZTLlXCozZWQtbSnYVeDLDWjVtVMOAPgIJEmhDX_ur
// Entry: 0x71e04540 | Size: 1 bytes
// =========================================================================

void thunk_JCZTLlXCozZWQtbSnYVeDLDWjVtVMOAPgIJEmhDX_ur(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_MwhHq(0x438);
  thunk_aJQIYbiOJTqzxEnhCgBqBHqYTNPLtYWZaPphZLOmbiAGOmiFNLkgYubUVUvQKqbOWJwRPWxJVmRpZIVvQVMyBkRRBecbupwwe_WUefupOfEzaimJRDoRMDdEmvIctCJysnxhZEvqQoEjjRDHZuX_TauXvKLGScZlHRGKCQgMxeQAivAkvZTB_XOklrxpPviWtnkEsnONJoRCWXMZIYHtoyZtWEGYyNvMZgTNaagLcGZQFRVbbIpCwzqtzRDPJVioHgYqnUjDrxKGXMXZolAds_yxzgzZttIhdnMUsvezMCaSkw
            (puVar1,param_2,param_2 + 0xb4,param_2 + 0xb8,param_2 + 0xb0,param_2 + 0xbc,
             param_2 + 0xc0);
  (**(code **)*puVar1)(puVar1);
  *param_1 = puVar1;
  return;
}


// =========================================================================
// Function: thunk_oGEDqQkRmYHrSUPHbhfVMqbpVGYguYmkXLolMM
// Entry: 0x71e04550 | Size: 1 bytes
// =========================================================================

int thunk_oGEDqQkRmYHrSUPHbhfVMqbpVGYguYmkXLolMM(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))();
  }
  if (*(int **)(param_1 + 0xbc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xbc) + 4))();
  }
  piVar1 = *(int **)(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x14))();
  }
  piVar1 = *(int **)(param_1 + 0xb4);
  *(undefined4 *)(param_1 + 0xb4) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x14))();
  }
  piVar1 = *(int **)(param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  return param_1;
}


// =========================================================================
// Function: thunk__IS_JLOreDevNGOCuyINiYpgOYZqExS_coUs
// Entry: 0x71e04560 | Size: 1 bytes
// =========================================================================

void thunk__IS_JLOreDevNGOCuyINiYpgOYZqExS_coUs(void)

{
  return;
}


// =========================================================================
// Function: thunk_jGrqWPLsMdAMCvfGuiqLzVbzzpnEJfTKMM
// Entry: 0x71e04570 | Size: 1 bytes
// =========================================================================

void thunk_jGrqWPLsMdAMCvfGuiqLzVbzzpnEJfTKMM(void)

{
  jGrqWPLsMdAMCvfGuiqLzVbzzpnEJfTKMM();
  return;
}


// =========================================================================
// Function: thunk_CbRCPlMgEQlfaBnBGuqcRlZlzP
// Entry: 0x71e04580 | Size: 1 bytes
// =========================================================================

void thunk_CbRCPlMgEQlfaBnBGuqcRlZlzP(void)

{
  CbRCPlMgEQlfaBnBGuqcRlZlzP();
  return;
}


// =========================================================================
// Function: thunk_VbRiuVwHWQk_oGrSwnBDyQbrlWNAxTsUod
// Entry: 0x71e04590 | Size: 1 bytes
// =========================================================================

void thunk_VbRiuVwHWQk_oGrSwnBDyQbrlWNAxTsUod(void)

{
  VbRiuVwHWQk_oGrSwnBDyQbrlWNAxTsUod();
  return;
}


// =========================================================================
// Function: thunk_ibODFPFQWANzCYMNbEBPWuwYZpMbVTEJUSZobCBCEfAZMkexnVnyvYEDsbvTnHvoWktPHfxUtiGECJJUYcBCxWDUJY_xxAxZiStcBzqvjpEkUmrtQZdWEFjJMiZjzRmGwduybgJNoRIgzZoBnauVpKSUYXLSaDmhVYJgfLBqIDOtQKGDWUbcZfgvmOaBOlryfAiiEtwEFEEKEWtpbMkOKCr_uqaXUUPg_CdIeCBKwiOzhUMxciqBmjKclXRnalidCKYvahEe_eGjuWuLxxHNiAIMhZoTkVGjSRbanJSkPwXIFBdAQcWoRjaCwCxeaYfNediApFoFpLVQtoMkIHzEZNFjcOGyBZdZYFoJZcbOYo
// Entry: 0x71e045a0 | Size: 1 bytes
// =========================================================================

void thunk_ibODFPFQWANzCYMNbEBPWuwYZpMbVTEJUSZobCBCEfAZMkexnVnyvYEDsbvTnHvoWktPHfxUtiGECJJUYcBCxWDUJY_xxAxZiStcBzqvjpEkUmrtQZdWEFjJMiZjzRmGwduybgJNoRIgzZoBnauVpKSUYXLSaDmhVYJgfLBqIDOtQKGDWUbcZfgvmOaBOlryfAiiEtwEFEEKEWtpbMkOKCr_uqaXUUPg_CdIeCBKwiOzhUMxciqBmjKclXRnalidCKYvahEe_eGjuWuLxxHNiAIMhZoTkVGjSRbanJSkPwXIFBdAQcWoRjaCwCxeaYfNediApFoFpLVQtoMkIHzEZNFjcOGyBZdZYFoJZcbOYo
               (void)

{
  ibODFPFQWANzCYMNbEBPWuwYZpMbVTEJUSZobCBCEfAZMkexnVnyvYEDsbvTnHvoWktPHfxUtiGECJJUYcBCxWDUJY_xxAxZiStcBzqvjpEkUmrtQZdWEFjJMiZjzRmGwduybgJNoRIgzZoBnauVpKSUYXLSaDmhVYJgfLBqIDOtQKGDWUbcZfgvmOaBOlryfAiiEtwEFEEKEWtpbMkOKCr_uqaXUUPg_CdIeCBKwiOzhUMxciqBmjKclXRnalidCKYvahEe_eGjuWuLxxHNiAIMhZoTkVGjSRbanJSkPwXIFBdAQcWoRjaCwCxeaYfNediApFoFpLVQtoMkIHzEZNFjcOGyBZdZYFoJZcbOYo
            ();
  return;
}


// =========================================================================
// Function: thunk_EWJLCADIyuHnpDoOXmwKQbQiBjVcUVTHKhoUTvBuylSnpfvSkiRwDakYmnfVmOdlqnkHhM_WaHFeKwWGHJcxY
// Entry: 0x71e045b0 | Size: 1 bytes
// =========================================================================

void thunk_EWJLCADIyuHnpDoOXmwKQbQiBjVcUVTHKhoUTvBuylSnpfvSkiRwDakYmnfVmOdlqnkHhM_WaHFeKwWGHJcxY
               (void)

{
  EWJLCADIyuHnpDoOXmwKQbQiBjVcUVTHKhoUTvBuylSnpfvSkiRwDakYmnfVmOdlqnkHhM_WaHFeKwWGHJcxY();
  return;
}


// =========================================================================
// Function: thunk__SOxyWpctDWOkKCXVjkCmlmawbiYYzaXEEkGJPZjBytslsTOVtfqUrbZ_HGZApUjjbIRVZxOiYBcRIS_klMkUiVnpPnRJoVqyPHTrfIlSGWPSGpRnMGHjdZpgWcbuAXKAgyEvBvmveGRLbNketjvkgoxgcTAbprHivzPlgGKBEToChLgysLOgKrnaSCIkzinEjGgiAlIwUtrPSWDYvneelJI_wpMsVQnPklTZ
// Entry: 0x71e045c0 | Size: 1 bytes
// =========================================================================

void thunk__SOxyWpctDWOkKCXVjkCmlmawbiYYzaXEEkGJPZjBytslsTOVtfqUrbZ_HGZApUjjbIRVZxOiYBcRIS_klMkUiVnpPnRJoVqyPHTrfIlSGWPSGpRnMGHjdZpgWcbuAXKAgyEvBvmveGRLbNketjvkgoxgcTAbprHivzPlgGKBEToChLgysLOgKrnaSCIkzinEjGgiAlIwUtrPSWDYvneelJI_wpMsVQnPklTZ
               (void)

{
  _SOxyWpctDWOkKCXVjkCmlmawbiYYzaXEEkGJPZjBytslsTOVtfqUrbZ_HGZApUjjbIRVZxOiYBcRIS_klMkUiVnpPnRJoVqyPHTrfIlSGWPSGpRnMGHjdZpgWcbuAXKAgyEvBvmveGRLbNketjvkgoxgcTAbprHivzPlgGKBEToChLgysLOgKrnaSCIkzinEjGgiAlIwUtrPSWDYvneelJI_wpMsVQnPklTZ
            ();
  return;
}


// =========================================================================
// Function: thunk_tCjoIZREVn_DRfdiDhzswtqUmlVPEt_JyeBWdsUGuCvggmWYGkjNmFnlcjkpYxqgWgKf
// Entry: 0x71e045d0 | Size: 1 bytes
// =========================================================================

void thunk_tCjoIZREVn_DRfdiDhzswtqUmlVPEt_JyeBWdsUGuCvggmWYGkjNmFnlcjkpYxqgWgKf(void)

{
  tCjoIZREVn_DRfdiDhzswtqUmlVPEt_JyeBWdsUGuCvggmWYGkjNmFnlcjkpYxqgWgKf();
  return;
}


// =========================================================================
// Function: thunk_LxAyRwsIlcAmyRwIQnIldrrwJTcphodDcZlZIDCHKZXhR_KiPoNafyEhDWFXEDzbkKNaUvlvEZaWiZwBgETOlGaFBhYYbrUxGlUxgsNRtTPUgimCOkYcTscNFCcLqTXNeztgRAIJRepPCeamjjheoyDaHeOuqwaRnYOWnQFsNexFRVuBYDwQKOCQEMpAoJMVQceSoubWeAkKSqdmeUYsgIyxENxSSmnxoO
// Entry: 0x71e045e0 | Size: 1 bytes
// =========================================================================

void thunk_LxAyRwsIlcAmyRwIQnIldrrwJTcphodDcZlZIDCHKZXhR_KiPoNafyEhDWFXEDzbkKNaUvlvEZaWiZwBgETOlGaFBhYYbrUxGlUxgsNRtTPUgimCOkYcTscNFCcLqTXNeztgRAIJRepPCeamjjheoyDaHeOuqwaRnYOWnQFsNexFRVuBYDwQKOCQEMpAoJMVQceSoubWeAkKSqdmeUYsgIyxENxSSmnxoO
               (void)

{
  LxAyRwsIlcAmyRwIQnIldrrwJTcphodDcZlZIDCHKZXhR_KiPoNafyEhDWFXEDzbkKNaUvlvEZaWiZwBgETOlGaFBhYYbrUxGlUxgsNRtTPUgimCOkYcTscNFCcLqTXNeztgRAIJRepPCeamjjheoyDaHeOuqwaRnYOWnQFsNexFRVuBYDwQKOCQEMpAoJMVQceSoubWeAkKSqdmeUYsgIyxENxSSmnxoO
            ();
  return;
}


// =========================================================================
// Function: thunk_OLeIqMKxfmIisdRDmoTHAXOpDTAH
// Entry: 0x71e045f0 | Size: 1 bytes
// =========================================================================

void thunk_OLeIqMKxfmIisdRDmoTHAXOpDTAH(void)

{
  OLeIqMKxfmIisdRDmoTHAXOpDTAH();
  return;
}


// =========================================================================
// Function: thunk_vat_qkRlZilLhnXGrRBmJyj
// Entry: 0x71e04600 | Size: 1 bytes
// =========================================================================

void thunk_vat_qkRlZilLhnXGrRBmJyj(void)

{
  vat_qkRlZilLhnXGrRBmJyj();
  return;
}


// =========================================================================
// Function: thunk_HGbevJQsUahvWVFugWDmVYpyQhJsUiltHDXOXzDWZSZ
// Entry: 0x71e04610 | Size: 1 bytes
// =========================================================================

void thunk_HGbevJQsUahvWVFugWDmVYpyQhJsUiltHDXOXzDWZSZ(void)

{
  HGbevJQsUahvWVFugWDmVYpyQhJsUiltHDXOXzDWZSZ();
  return;
}


// =========================================================================
// Function: imp_opus_encoder_create
// Entry: 0x71e04620 | Size: 1 bytes
// =========================================================================

void imp_opus_encoder_create(void)

{
  return;
}


// =========================================================================
// Function: imp_opus_encoder_ctl
// Entry: 0x71e04630 | Size: 1 bytes
// =========================================================================

void imp_opus_encoder_ctl(void)

{
  return;
}


// =========================================================================
// Function: imp_opus_decoder_create
// Entry: 0x71e04640 | Size: 1 bytes
// =========================================================================

void imp_opus_decoder_create(void)

{
  return;
}


// =========================================================================
// Function: imp_opus_encoder_destroy
// Entry: 0x71e04650 | Size: 1 bytes
// =========================================================================

void imp_opus_encoder_destroy(void)

{
  return;
}


// =========================================================================
// Function: imp_opus_decoder_destroy
// Entry: 0x71e04660 | Size: 1 bytes
// =========================================================================

void imp_opus_decoder_destroy(void)

{
  return;
}


// =========================================================================
// Function: imp_opus_encode
// Entry: 0x71e04670 | Size: 1 bytes
// =========================================================================

void imp_opus_encode(void)

{
  return;
}


// =========================================================================
// Function: thunk_vJqZYUFupBK_PmuxHKrJXsnPNQdTaEpwQL
// Entry: 0x71e04680 | Size: 1 bytes
// =========================================================================

void thunk_vJqZYUFupBK_PmuxHKrJXsnPNQdTaEpwQL(void)

{
  vJqZYUFupBK_PmuxHKrJXsnPNQdTaEpwQL();
  return;
}


// =========================================================================
// Function: imp_opus_decode
// Entry: 0x71e04690 | Size: 1 bytes
// =========================================================================

void imp_opus_decode(void)

{
  return;
}


// =========================================================================
// Function: thunk_onESePNMwzPdhndSanUUKwKfvGERQGKuO
// Entry: 0x71e046a0 | Size: 1 bytes
// =========================================================================

void thunk_onESePNMwzPdhndSanUUKwKfvGERQGKuO(void)

{
  onESePNMwzPdhndSanUUKwKfvGERQGKuO();
  return;
}


// =========================================================================
// Function: thunk_dk_frUhS_KeAeWhjkFZsXtPflVW
// Entry: 0x71e046b0 | Size: 1 bytes
// =========================================================================

void thunk_dk_frUhS_KeAeWhjkFZsXtPflVW(void)

{
  dk_frUhS_KeAeWhjkFZsXtPflVW();
  return;
}


// =========================================================================
// Function: thunk_rBPFJGUWjXdI_tkHQbol_BQDtuOGLETvlACyWwb
// Entry: 0x71e046c0 | Size: 1 bytes
// =========================================================================

void thunk_rBPFJGUWjXdI_tkHQbol_BQDtuOGLETvlACyWwb(void)

{
  rBPFJGUWjXdI_tkHQbol_BQDtuOGLETvlACyWwb();
  return;
}


// =========================================================================
// Function: thunk_LStkHDFPeluMkKFmKFOpelVoXigpzwkr
// Entry: 0x71e046d0 | Size: 1 bytes
// =========================================================================

void thunk_LStkHDFPeluMkKFmKFOpelVoXigpzwkr(void)

{
  LStkHDFPeluMkKFmKFOpelVoXigpzwkr();
  return;
}


// =========================================================================
// Function: thunk_WppMzXkrx_QqgLuMxehnIbHHol
// Entry: 0x71e046e0 | Size: 1 bytes
// =========================================================================

void thunk_WppMzXkrx_QqgLuMxehnIbHHol(void)

{
  WppMzXkrx_QqgLuMxehnIbHHol();
  return;
}


// =========================================================================
// Function: thunk_LWMvWqudSbq_gzxEHLLxAWyKlzxNfaVqFuKseNZEIgxphJu
// Entry: 0x71e046f0 | Size: 1 bytes
// =========================================================================

void thunk_LWMvWqudSbq_gzxEHLLxAWyKlzxNfaVqFuKseNZEIgxphJu(void)

{
  LWMvWqudSbq_gzxEHLLxAWyKlzxNfaVqFuKseNZEIgxphJu();
  return;
}


// =========================================================================
// Function: thunk_EprRLaJWExHMirt_JMOvHpgYBaBCGxBWgk_nGhsMsLVhnzfOrkSndTXQyDlPNVpKrfPthEFpnMJCLWC_enqYLasMqXCUyrNOnJUrEOZeYBaMWzKJhDbFDgJX_houwnNzzZvXsDUYyRjQJlGhdTIsniJLhDQfCPUQkwPPIRybZydXFaTpBKUKLrgzbWtswCrCtUXgLdUxCimj_VLQqgtuMtgXloRhUGYrckdTqWYLOkgVO_kZPlPXMgwaMuYeLPMajXYESPFxiDCaaVp_YRRTzNEVpWqwwvOEKKnFhYelvpxcvrYnzwukTEBvatsYYktYXtCenDVPXFPSjGOdgNWpJeaC
// Entry: 0x71e04700 | Size: 1 bytes
// =========================================================================

void thunk_EprRLaJWExHMirt_JMOvHpgYBaBCGxBWgk_nGhsMsLVhnzfOrkSndTXQyDlPNVpKrfPthEFpnMJCLWC_enqYLasMqXCUyrNOnJUrEOZeYBaMWzKJhDbFDgJX_houwnNzzZvXsDUYyRjQJlGhdTIsniJLhDQfCPUQkwPPIRybZydXFaTpBKUKLrgzbWtswCrCtUXgLdUxCimj_VLQqgtuMtgXloRhUGYrckdTqWYLOkgVO_kZPlPXMgwaMuYeLPMajXYESPFxiDCaaVp_YRRTzNEVpWqwwvOEKKnFhYelvpxcvrYnzwukTEBvatsYYktYXtCenDVPXFPSjGOdgNWpJeaC
               (void)

{
  EprRLaJWExHMirt_JMOvHpgYBaBCGxBWgk_nGhsMsLVhnzfOrkSndTXQyDlPNVpKrfPthEFpnMJCLWC_enqYLasMqXCUyrNOnJUrEOZeYBaMWzKJhDbFDgJX_houwnNzzZvXsDUYyRjQJlGhdTIsniJLhDQfCPUQkwPPIRybZydXFaTpBKUKLrgzbWtswCrCtUXgLdUxCimj_VLQqgtuMtgXloRhUGYrckdTqWYLOkgVO_kZPlPXMgwaMuYeLPMajXYESPFxiDCaaVp_YRRTzNEVpWqwwvOEKKnFhYelvpxcvrYnzwukTEBvatsYYktYXtCenDVPXFPSjGOdgNWpJeaC
            ();
  return;
}


// =========================================================================
// Function: thunk_smSWRzQwmUdKdvwTKCxueV_QEl
// Entry: 0x71e04710 | Size: 1 bytes
// =========================================================================

void thunk_smSWRzQwmUdKdvwTKCxueV_QEl(void)

{
  smSWRzQwmUdKdvwTKCxueV_QEl();
  return;
}


// =========================================================================
// Function: thunk_FyNcichpYQxPotAqYYQdWlGGjlWdKRgErMlvcgOcfuwSHaMgXAACiKyUkjdSrHEzEZY_PydE_GBKvIXYAgZyaC_kRdXwioaHiIItYpUqPEPpBqDSxapJrFanphvx_peXoHFMWtPiRjLMPPTMZLnykWmv_RgUiEUbBmksVSvOrzsetdDhVBntHPVCmyxwwMpq_VSubEFNgwylHqcB
// Entry: 0x71e04720 | Size: 1 bytes
// =========================================================================

void thunk_FyNcichpYQxPotAqYYQdWlGGjlWdKRgErMlvcgOcfuwSHaMgXAACiKyUkjdSrHEzEZY_PydE_GBKvIXYAgZyaC_kRdXwioaHiIItYpUqPEPpBqDSxapJrFanphvx_peXoHFMWtPiRjLMPPTMZLnykWmv_RgUiEUbBmksVSvOrzsetdDhVBntHPVCmyxwwMpq_VSubEFNgwylHqcB
               (void)

{
  FyNcichpYQxPotAqYYQdWlGGjlWdKRgErMlvcgOcfuwSHaMgXAACiKyUkjdSrHEzEZY_PydE_GBKvIXYAgZyaC_kRdXwioaHiIItYpUqPEPpBqDSxapJrFanphvx_peXoHFMWtPiRjLMPPTMZLnykWmv_RgUiEUbBmksVSvOrzsetdDhVBntHPVCmyxwwMpq_VSubEFNgwylHqcB
            ();
  return;
}


