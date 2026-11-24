package com.vk.id.network.http;

import com.vk.id.common.InternalVKIDApi;
import io.sentry.protocol.Request;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: HttpResponse.kt */
/* JADX INFO: loaded from: classes6.dex */
@InternalVKIDApi
@Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\n\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\u0004\b\u0007\u0018\u00002\u00020\u0001B\u0019\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0003¢\u0006\u0004\b\u0005\u0010\u0006J\u0013\u0010\u0011\u001a\u00020\u00122\b\u0010\u0013\u001a\u0004\u0018\u00010\u0001H\u0096\u0002J\b\u0010\u0014\u001a\u00020\u000eH\u0016J\b\u0010\u0015\u001a\u00020\u0003H\u0016R\u001c\u0010\u0002\u001a\u00020\u00038\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b\u0007\u0010\b\u001a\u0004\b\t\u0010\nR\u001e\u0010\u0004\u001a\u0004\u0018\u00010\u00038\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b\u000b\u0010\b\u001a\u0004\b\f\u0010\nR\u0011\u0010\r\u001a\u00020\u000e8F¢\u0006\u0006\u001a\u0004\b\u000f\u0010\u0010¨\u0006\u0016"}, d2 = {"Lcom/vk/id/network/http/ResponseBody;", "", "string", "", "contentType", "<init>", "(Ljava/lang/String;Ljava/lang/String;)V", "getString$annotations", "()V", "getString", "()Ljava/lang/String;", "getContentType$annotations", "getContentType", "length", "", "getLength", "()I", "equals", "", Request.JsonKeys.OTHER, "hashCode", "toString", "network_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class ResponseBody {
    private final String contentType;
    private final String string;

    @InternalVKIDApi
    public static /* synthetic */ void getContentType$annotations() {
    }

    @InternalVKIDApi
    public static /* synthetic */ void getString$annotations() {
    }

    public ResponseBody(String string, String str) {
        Intrinsics.checkNotNullParameter(string, "string");
        this.string = string;
        this.contentType = str;
    }

    public final String getString() {
        return this.string;
    }

    public final String getContentType() {
        return this.contentType;
    }

    public final int getLength() {
        return this.string.length();
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof ResponseBody)) {
            return false;
        }
        ResponseBody responseBody = (ResponseBody) other;
        return Intrinsics.areEqual(this.string, responseBody.string) && Intrinsics.areEqual(this.contentType, responseBody.contentType);
    }

    public int hashCode() {
        int iHashCode = this.string.hashCode() * 31;
        String str = this.contentType;
        return iHashCode + (str != null ? str.hashCode() : 0);
    }

    public String toString() {
        return "ResponseBody(string='" + this.string + "', contentType=" + this.contentType + ")";
    }
}
