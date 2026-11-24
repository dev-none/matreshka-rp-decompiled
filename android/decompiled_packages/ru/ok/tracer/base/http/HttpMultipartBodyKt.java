package ru.ok.tracer.base.http;

import androidx.media3.extractor.ts.PsExtractor;
import java.io.IOException;
import java.io.OutputStream;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.Charsets;
import kotlin.text.Typography;
import org.apache.commons.io.IOUtils;

/* JADX INFO: compiled from: HttpMultipartBody.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000.\n\u0000\n\u0002\u0010\u0012\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\u001a\u0018\u0010\b\u001a\u00020\t*\u00060\nj\u0002`\u000b2\u0006\u0010\f\u001a\u00020\u0005H\u0002\u001a\u0014\u0010\r\u001a\u00020\t*\u00020\u000e2\u0006\u0010\u000f\u001a\u00020\u0005H\u0002\"\u000e\u0010\u0000\u001a\u00020\u0001X\u0082\u0004¢\u0006\u0002\n\u0000\"\u000e\u0010\u0002\u001a\u00020\u0001X\u0082\u0004¢\u0006\u0002\n\u0000\"\u0018\u0010\u0003\u001a\u00020\u0004*\u00020\u00058BX\u0082\u0004¢\u0006\u0006\u001a\u0004\b\u0006\u0010\u0007¨\u0006\u0010"}, d2 = {"CRLF", "", "DASHDASH", "utf8Length", "", "", "getUtf8Length", "(Ljava/lang/String;)I", "appendQuoted", "", "Ljava/lang/StringBuilder;", "Lkotlin/text/StringBuilder;", "str", "writeUtf8", "Ljava/io/OutputStream;", "string", "tracer-base_release"}, k = 2, mv = {1, 7, 1}, xi = 48)
public final class HttpMultipartBodyKt {
    private static final byte[] CRLF;
    private static final byte[] DASHDASH;

    static {
        byte[] bytes = "\r\n".getBytes(Charsets.UTF_8);
        Intrinsics.checkNotNullExpressionValue(bytes, "this as java.lang.String).getBytes(charset)");
        CRLF = bytes;
        byte[] bytes2 = "--".getBytes(Charsets.UTF_8);
        Intrinsics.checkNotNullExpressionValue(bytes2, "this as java.lang.String).getBytes(charset)");
        DASHDASH = bytes2;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void appendQuoted(StringBuilder sb, String str) {
        sb.append(Typography.quote);
        String str2 = str;
        for (int i = 0; i < str2.length(); i++) {
            char cCharAt = str2.charAt(i);
            if (cCharAt == '\"' || cCharAt == '\\' || cCharAt == '\r') {
                for (int i2 = 0; i2 < str2.length(); i2++) {
                    char cCharAt2 = str2.charAt(i2);
                    if (cCharAt2 == '\"' || cCharAt2 == '\\' || cCharAt2 == '\r') {
                        sb.append(IOUtils.DIR_SEPARATOR_WINDOWS);
                    }
                    sb.append(cCharAt2);
                }
                sb.append(Typography.quote);
            }
        }
        sb.append(str);
        sb.append(Typography.quote);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void writeUtf8(OutputStream outputStream, String str) throws IOException {
        int length = str.length();
        for (int i = 0; i < length; i++) {
            char cCharAt = str.charAt(i);
            if (cCharAt <= 127) {
                outputStream.write(cCharAt);
            } else if (cCharAt <= 2047) {
                outputStream.write((cCharAt >> 6) | PsExtractor.AUDIO_STREAM);
                outputStream.write((cCharAt & '?') | 128);
            } else {
                outputStream.write((cCharAt >> '\f') | 224);
                outputStream.write(((cCharAt >> 6) & 63) | 128);
                outputStream.write((cCharAt & '?') | 128);
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final int getUtf8Length(String str) {
        String str2 = str;
        int i = 0;
        for (int i2 = 0; i2 < str2.length(); i2++) {
            char cCharAt = str2.charAt(i2);
            i += cCharAt <= 127 ? 1 : cCharAt <= 2047 ? 2 : 3;
        }
        return i;
    }
}
