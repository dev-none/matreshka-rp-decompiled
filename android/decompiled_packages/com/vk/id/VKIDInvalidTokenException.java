package com.vk.id;

import io.sentry.protocol.Request;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: VKIDInvalidTokenException.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0000\b\u0001\u0018\u00002\u00060\u0001j\u0002`\u0002B\t\b\u0007¢\u0006\u0004\b\u0003\u0010\u0004J\u0013\u0010\u0005\u001a\u00020\u00062\b\u0010\u0007\u001a\u0004\u0018\u00010\bH\u0096\u0002J\b\u0010\t\u001a\u00020\nH\u0016¨\u0006\u000b"}, d2 = {"Lcom/vk/id/VKIDInvalidTokenException;", "Ljava/lang/Exception;", "Lkotlin/Exception;", "<init>", "()V", "equals", "", Request.JsonKeys.OTHER, "", "hashCode", "", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class VKIDInvalidTokenException extends Exception {
    public static final int $stable = 0;

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        return Intrinsics.areEqual(getClass(), other != null ? other.getClass() : null);
    }

    public int hashCode() {
        return getClass().hashCode();
    }
}
