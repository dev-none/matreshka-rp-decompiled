package com.vk.id.internal.util;

import androidx.exifinterface.media.ExifInterface;
import kotlin.Metadata;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KProperty;

/* JADX INFO: compiled from: ThreadLocalDelegate.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u001c\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0001\u0018\u0000*\u0004\b\u0000\u0010\u00012\b\u0012\u0004\u0012\u0002H\u00010\u0002B\u0015\u0012\f\u0010\u0003\u001a\b\u0012\u0004\u0012\u00028\u00000\u0004¢\u0006\u0004\b\u0005\u0010\u0006J\r\u0010\u000b\u001a\u00028\u0000H\u0016¢\u0006\u0002\u0010\fR\u0017\u0010\u0003\u001a\b\u0012\u0004\u0012\u00028\u00000\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0007\u0010\bR\u0014\u0010\t\u001a\b\u0012\u0004\u0012\u00028\u00000\nX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\r"}, d2 = {"Lcom/vk/id/internal/util/ThreadLocalDelegateImpl;", ExifInterface.GPS_DIRECTION_TRUE, "Lcom/vk/id/internal/util/ThreadLocalDelegate;", "factory", "Lkotlin/Function0;", "<init>", "(Lkotlin/jvm/functions/Function0;)V", "getFactory", "()Lkotlin/jvm/functions/Function0;", "value", "Ljava/lang/ThreadLocal;", "get", "()Ljava/lang/Object;", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class ThreadLocalDelegateImpl<T> implements ThreadLocalDelegate<T> {
    public static final int $stable = 8;
    private final Function0<T> factory;
    private final ThreadLocal<T> value;

    /* JADX WARN: Multi-variable type inference failed */
    public ThreadLocalDelegateImpl(Function0<? extends T> factory) {
        Intrinsics.checkNotNullParameter(factory, "factory");
        this.factory = factory;
        this.value = new ThreadLocal<T>(this) { // from class: com.vk.id.internal.util.ThreadLocalDelegateImpl$value$1
            final /* synthetic */ ThreadLocalDelegateImpl<T> this$0;

            {
                this.this$0 = this;
            }

            @Override // java.lang.ThreadLocal
            protected T initialValue() {
                return this.this$0.getFactory().invoke();
            }
        };
    }

    public final Function0<T> getFactory() {
        return this.factory;
    }

    @Override // com.vk.id.internal.util.ThreadLocalDelegate
    public T getValue(Object obj, KProperty<?> kProperty) {
        return (T) ThreadLocalDelegate.DefaultImpls.getValue(this, obj, kProperty);
    }

    @Override // com.vk.id.internal.util.ThreadLocalDelegate
    public T get() {
        T t = this.value.get();
        Intrinsics.checkNotNull(t);
        return t;
    }
}
