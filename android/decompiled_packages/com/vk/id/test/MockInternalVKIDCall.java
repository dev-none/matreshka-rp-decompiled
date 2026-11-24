package com.vk.id.test;

import androidx.exifinterface.media.ExifInterface;
import com.tekartik.sqflite.Constant;
import com.vk.id.network.InternalVKIDCall;
import kotlin.Metadata;
import kotlin.Result;
import kotlin.coroutines.Continuation;

/* JADX INFO: compiled from: MockInternalVKIDCall.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0002\b\u0001\u0018\u0000*\u0006\b\u0000\u0010\u0001 \u00012\b\u0012\u0004\u0012\u0002H\u00010\u0002B\u0015\u0012\f\u0010\u0003\u001a\b\u0012\u0004\u0012\u00028\u00000\u0004¢\u0006\u0004\b\u0005\u0010\u0006J\u0016\u0010\b\u001a\b\u0012\u0004\u0012\u00028\u00000\u0004H\u0097@¢\u0006\u0004\b\t\u0010\nJ\b\u0010\u000b\u001a\u00020\fH\u0016J\b\u0010\r\u001a\u00020\u000eH\u0016J\b\u0010\u000f\u001a\u00020\u000eH\u0016R\u0016\u0010\u0003\u001a\b\u0012\u0004\u0012\u00028\u00000\u0004X\u0082\u0004¢\u0006\u0004\n\u0002\u0010\u0007¨\u0006\u0010"}, d2 = {"Lcom/vk/id/test/MockInternalVKIDCall;", ExifInterface.GPS_DIRECTION_TRUE, "Lcom/vk/id/network/InternalVKIDCall;", "result", "Lkotlin/Result;", "<init>", "(Ljava/lang/Object;)V", "Ljava/lang/Object;", Constant.METHOD_EXECUTE, "execute-IoAF18A", "(Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "cancel", "", "isCanceled", "", "isExecuted", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class MockInternalVKIDCall<T> implements InternalVKIDCall<T> {
    public static final int $stable = 8;
    private final Object result;

    @Override // com.vk.id.network.InternalVKIDCall
    public void cancel() {
    }

    @Override // com.vk.id.network.InternalVKIDCall
    public boolean isCanceled() {
        return false;
    }

    @Override // com.vk.id.network.InternalVKIDCall
    public boolean isExecuted() {
        return true;
    }

    public MockInternalVKIDCall(Object obj) {
        this.result = obj;
    }

    @Override // com.vk.id.network.InternalVKIDCall
    /* JADX INFO: renamed from: execute-IoAF18A */
    public Object mo9311executeIoAF18A(Continuation<? super Result<? extends T>> continuation) {
        return this.result;
    }
}
