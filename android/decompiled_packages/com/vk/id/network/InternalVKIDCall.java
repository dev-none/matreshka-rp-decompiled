package com.vk.id.network;

import androidx.exifinterface.media.ExifInterface;
import com.tekartik.sqflite.Constant;
import com.vk.id.common.InternalVKIDApi;
import kotlin.Metadata;
import kotlin.Result;
import kotlin.coroutines.Continuation;

/* JADX INFO: compiled from: InternalVKIDCall.kt */
/* JADX INFO: loaded from: classes6.dex */
@InternalVKIDApi
@Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0002\bg\u0018\u0000*\u0006\b\u0000\u0010\u0001 \u00012\u00020\u0002J\u0016\u0010\u0003\u001a\b\u0012\u0004\u0012\u00028\u00000\u0004H§@¢\u0006\u0004\b\u0005\u0010\u0006J\b\u0010\u0007\u001a\u00020\bH'J\b\u0010\t\u001a\u00020\nH&J\b\u0010\u000b\u001a\u00020\nH&¨\u0006\f"}, d2 = {"Lcom/vk/id/network/InternalVKIDCall;", ExifInterface.GPS_DIRECTION_TRUE, "", Constant.METHOD_EXECUTE, "Lkotlin/Result;", "execute-IoAF18A", "(Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "cancel", "", "isCanceled", "", "isExecuted", "network_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public interface InternalVKIDCall<T> {
    @InternalVKIDApi
    void cancel();

    @InternalVKIDApi
    /* JADX INFO: renamed from: execute-IoAF18A, reason: not valid java name */
    Object mo9311executeIoAF18A(Continuation<? super Result<? extends T>> continuation);

    boolean isCanceled();

    boolean isExecuted();
}
