package ru.ok.tracer.base.inject;

import androidx.exifinterface.media.ExifInterface;
import javax.inject.Provider;
import kotlin.Metadata;

/* JADX INFO: compiled from: ProviderUtils.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\u001a\u001f\u0010\u0000\u001a\b\u0012\u0004\u0012\u0002H\u00020\u0001\"\u0004\b\u0000\u0010\u00022\u0006\u0010\u0003\u001a\u0002H\u0002¢\u0006\u0002\u0010\u0004¨\u0006\u0005"}, d2 = {"providerOf", "Ljavax/inject/Provider;", ExifInterface.GPS_DIRECTION_TRUE, "value", "(Ljava/lang/Object;)Ljavax/inject/Provider;", "tracer-base_release"}, k = 2, mv = {1, 7, 1}, xi = 48)
public final class ProviderUtils {
    public static final <T> Provider<T> providerOf(T t) {
        return new SimpleProvider(t);
    }
}
