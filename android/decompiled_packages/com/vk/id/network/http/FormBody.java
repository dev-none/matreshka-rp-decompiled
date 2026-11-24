package com.vk.id.network.http;

import com.vk.id.common.InternalVKIDApi;
import io.sentry.protocol.OperatingSystem;
import java.io.UnsupportedEncodingException;
import java.net.URLEncoder;
import java.nio.charset.StandardCharsets;
import java.util.ArrayList;
import java.util.List;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.Typography;

/* JADX INFO: compiled from: FormBody.kt */
/* JADX INFO: loaded from: classes6.dex */
@InternalVKIDApi
@Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0006\b\u0007\u0018\u0000 \u00072\u00020\u0001:\u0002\u0007\bB\u0011\b\u0002\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\r\u0010\u0002\u001a\u00020\u0003H\u0000¢\u0006\u0002\b\u0006R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\t"}, d2 = {"Lcom/vk/id/network/http/FormBody;", "", "content", "", "<init>", "(Ljava/lang/String;)V", "content$network_release", "Companion", "Builder", "network_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class FormBody {

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    private final String content;

    public /* synthetic */ FormBody(String str, DefaultConstructorMarker defaultConstructorMarker) {
        this(str);
    }

    private FormBody(String str) {
        this.content = str;
    }

    /* JADX INFO: compiled from: FormBody.kt */
    @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\b\u0080\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007¨\u0006\b"}, d2 = {"Lcom/vk/id/network/http/FormBody$Companion;", "", "<init>", "()V", "fromEncodedContent", "Lcom/vk/id/network/http/FormBody;", "encodedContent", "", "network_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public final FormBody fromEncodedContent(String encodedContent) {
            Intrinsics.checkNotNullParameter(encodedContent, "encodedContent");
            return new FormBody(encodedContent, null);
        }
    }

    /* JADX INFO: renamed from: content$network_release, reason: from getter */
    public final String getContent() {
        return this.content;
    }

    /* JADX INFO: compiled from: FormBody.kt */
    @InternalVKIDApi
    @Metadata(d1 = {"\u0000.\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010!\n\u0002\u0010\u000e\n\u0002\b\u0004\n\u0002\u0010\b\n\u0002\u0010\t\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0007\u0018\u00002\u00020\u0001B\u0007¢\u0006\u0004\b\u0002\u0010\u0003J\u0018\u0010\b\u001a\u00020\u00002\u0006\u0010\t\u001a\u00020\u00062\u0006\u0010\n\u001a\u00020\u0006H\u0007J\u0018\u0010\b\u001a\u00020\u00002\u0006\u0010\t\u001a\u00020\u00062\u0006\u0010\n\u001a\u00020\u000bH\u0007J\u0018\u0010\b\u001a\u00020\u00002\u0006\u0010\t\u001a\u00020\u00062\u0006\u0010\n\u001a\u00020\fH\u0007J\u0018\u0010\b\u001a\u00020\u00002\u0006\u0010\t\u001a\u00020\u00062\u0006\u0010\n\u001a\u00020\rH\u0007J\b\u0010\u000e\u001a\u00020\u000fH\u0007J\u0010\u0010\u0010\u001a\u00020\u00062\u0006\u0010\n\u001a\u00020\u0006H\u0002R\u0014\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\u0007\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0011"}, d2 = {"Lcom/vk/id/network/http/FormBody$Builder;", "", "<init>", "()V", "encodedNames", "", "", "encodedValues", "add", "name", "value", "", "", "", OperatingSystem.JsonKeys.BUILD, "Lcom/vk/id/network/http/FormBody;", "urlEncode", "network_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Builder {
        private final List<String> encodedNames = new ArrayList();
        private final List<String> encodedValues = new ArrayList();

        @InternalVKIDApi
        public final Builder add(String name, String value) {
            Intrinsics.checkNotNullParameter(name, "name");
            Intrinsics.checkNotNullParameter(value, "value");
            this.encodedNames.add(name);
            this.encodedValues.add(value);
            return this;
        }

        @InternalVKIDApi
        public final Builder add(String name, int value) {
            Intrinsics.checkNotNullParameter(name, "name");
            this.encodedNames.add(name);
            this.encodedValues.add(String.valueOf(value));
            return this;
        }

        @InternalVKIDApi
        public final Builder add(String name, long value) {
            Intrinsics.checkNotNullParameter(name, "name");
            this.encodedNames.add(name);
            this.encodedValues.add(String.valueOf(value));
            return this;
        }

        @InternalVKIDApi
        public final Builder add(String name, boolean value) {
            Intrinsics.checkNotNullParameter(name, "name");
            this.encodedNames.add(name);
            this.encodedValues.add(String.valueOf(value));
            return this;
        }

        @InternalVKIDApi
        public final FormBody build() {
            StringBuilder sb = new StringBuilder();
            int size = this.encodedNames.size();
            for (int i = 0; i < size; i++) {
                if (i > 0) {
                    sb.append(Typography.amp);
                }
                sb.append(urlEncode(this.encodedNames.get(i)));
                sb.append('=');
                sb.append(urlEncode(this.encodedValues.get(i)));
            }
            String string = sb.toString();
            Intrinsics.checkNotNullExpressionValue(string, "toString(...)");
            return new FormBody(string, null);
        }

        private final String urlEncode(String value) throws UnsupportedEncodingException {
            String strEncode = URLEncoder.encode(value, StandardCharsets.UTF_8.toString());
            Intrinsics.checkNotNullExpressionValue(strEncode, "encode(...)");
            return strEncode;
        }
    }
}
