package com.vk.id.internal.util;

import com.google.common.base.Ascii;
import java.nio.charset.Charset;
import java.security.MessageDigest;
import kotlin.Metadata;
import kotlin.jvm.JvmStatic;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.PropertyReference1Impl;
import kotlin.jvm.internal.Reflection;
import kotlin.reflect.KProperty;

/* JADX INFO: compiled from: MD5.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u00000\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0019\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u0012\n\u0000\bÁ\u0002\u0018\u00002\u00020\u0001B\t\b\u0003¢\u0006\u0004\b\u0002\u0010\u0003J\u0010\u0010\r\u001a\u00020\u000e2\u0006\u0010\u000f\u001a\u00020\u000eH\u0007J\u0010\u0010\u0004\u001a\u00020\u00102\u0006\u0010\u0011\u001a\u00020\u0012H\u0003R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u001f\u0010\u0006\u001a\u00060\u0007j\u0002`\b8BX\u0082\u0084\u0002¢\u0006\f\n\u0004\b\u000b\u0010\f\u001a\u0004\b\t\u0010\n¨\u0006\u0013"}, d2 = {"Lcom/vk/id/internal/util/MD5;", "", "<init>", "()V", "hex", "", "tmpBuilder", "Ljava/lang/StringBuilder;", "Lkotlin/text/StringBuilder;", "getTmpBuilder", "()Ljava/lang/StringBuilder;", "tmpBuilder$delegate", "Lcom/vk/id/internal/util/ThreadLocalDelegate;", "convert", "", "h", "", "b", "", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class MD5 {
    static final /* synthetic */ KProperty<Object>[] $$delegatedProperties = {Reflection.property1(new PropertyReference1Impl(MD5.class, "tmpBuilder", "getTmpBuilder()Ljava/lang/StringBuilder;", 0))};
    public static final MD5 INSTANCE = new MD5();
    private static final char[] hex = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};

    /* JADX INFO: renamed from: tmpBuilder$delegate, reason: from kotlin metadata */
    private static final ThreadLocalDelegate tmpBuilder = ThreadLocalDelegateKt.threadLocal(new Function0() { // from class: com.vk.id.internal.util.MD5$$ExternalSyntheticLambda0
        @Override // kotlin.jvm.functions.Function0
        public final Object invoke() {
            return MD5.tmpBuilder_delegate$lambda$0();
        }
    });
    public static final int $stable = 8;

    private MD5() {
    }

    private final StringBuilder getTmpBuilder() {
        return (StringBuilder) tmpBuilder.getValue(this, $$delegatedProperties[0]);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final StringBuilder tmpBuilder_delegate$lambda$0() {
        return new StringBuilder();
    }

    @JvmStatic
    public static final String convert(String h) {
        Intrinsics.checkNotNullParameter(h, "h");
        try {
            MessageDigest messageDigest = MessageDigest.getInstance("MD5");
            Charset charsetForName = Charset.forName("UTF-8");
            Intrinsics.checkNotNullExpressionValue(charsetForName, "forName(...)");
            byte[] bytes = h.getBytes(charsetForName);
            Intrinsics.checkNotNullExpressionValue(bytes, "getBytes(...)");
            byte[] bArrDigest = messageDigest.digest(bytes);
            MD5 md5 = INSTANCE;
            md5.getTmpBuilder().setLength(0);
            Intrinsics.checkNotNull(bArrDigest);
            hex(bArrDigest);
            String string = md5.getTmpBuilder().toString();
            Intrinsics.checkNotNullExpressionValue(string, "toString(...)");
            return string;
        } catch (Exception unused) {
            return "";
        }
    }

    @JvmStatic
    private static final void hex(byte[] b) {
        for (byte b2 : b) {
            MD5 md5 = INSTANCE;
            StringBuilder tmpBuilder2 = md5.getTmpBuilder();
            char[] cArr = hex;
            tmpBuilder2.append(cArr[(b2 & 240) >> 4]);
            md5.getTmpBuilder().append(cArr[b2 & Ascii.SI]);
        }
    }
}
