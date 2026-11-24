package com.vk.id.internal.util;

import androidx.exifinterface.media.ExifInterface;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KProperty;

/* JADX INFO: compiled from: ThreadLocalDelegate.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0002\b`\u0018\u0000*\u0004\b\u0000\u0010\u00012\u00020\u0002J\r\u0010\u0003\u001a\u00028\u0000H&¢\u0006\u0002\u0010\u0004J$\u0010\u0005\u001a\u00028\u00002\b\u0010\u0006\u001a\u0004\u0018\u00010\u00022\n\u0010\u0007\u001a\u0006\u0012\u0002\b\u00030\bH\u0096\u0002¢\u0006\u0002\u0010\t¨\u0006\n"}, d2 = {"Lcom/vk/id/internal/util/ThreadLocalDelegate;", ExifInterface.GPS_DIRECTION_TRUE, "", "get", "()Ljava/lang/Object;", "getValue", "any", "property", "Lkotlin/reflect/KProperty;", "(Ljava/lang/Object;Lkotlin/reflect/KProperty;)Ljava/lang/Object;", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public interface ThreadLocalDelegate<T> {
    T get();

    T getValue(Object any, KProperty<?> property);

    /* JADX INFO: compiled from: ThreadLocalDelegate.kt */
    @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
    public static final class DefaultImpls {
        public static <T> T getValue(ThreadLocalDelegate<T> threadLocalDelegate, Object obj, KProperty<?> property) {
            Intrinsics.checkNotNullParameter(property, "property");
            return threadLocalDelegate.get();
        }
    }
}
