package com.vk.id.network;

import androidx.exifinterface.media.ExifInterface;
import com.vk.id.common.InternalVKIDApi;
import com.vk.id.network.http.HttpResponse;
import kotlin.Metadata;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: InternalVKIDCall.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u0018\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\u001a7\u0010\u0000\u001a\b\u0012\u0004\u0012\u0002H\u00020\u0001\"\u0004\b\u0000\u0010\u0002*\b\u0012\u0004\u0012\u00020\u00030\u00012\u0017\u0010\u0004\u001a\u0013\u0012\u0004\u0012\u00020\u0003\u0012\u0004\u0012\u0002H\u00020\u0005¢\u0006\u0002\b\u0006H\u0007¨\u0006\u0007"}, d2 = {"internalVKIDWrapToVKIDCall", "Lcom/vk/id/network/InternalVKIDCall;", ExifInterface.GPS_DIRECTION_TRUE, "Lcom/vk/id/network/http/HttpResponse;", "responseMapping", "Lkotlin/Function1;", "Lkotlin/ExtensionFunctionType;", "network_release"}, k = 2, mv = {2, 0, 0}, xi = 48)
public final class InternalVKIDCallKt {
    @InternalVKIDApi
    public static final <T> InternalVKIDCall<T> internalVKIDWrapToVKIDCall(InternalVKIDCall<HttpResponse> internalVKIDCall, Function1<? super HttpResponse, ? extends T> responseMapping) {
        Intrinsics.checkNotNullParameter(internalVKIDCall, "<this>");
        Intrinsics.checkNotNullParameter(responseMapping, "responseMapping");
        return new VKIDCallWrapper(internalVKIDCall, responseMapping);
    }
}
