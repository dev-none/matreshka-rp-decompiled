package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.backport.Function;
import io.appmetrica.analytics.coreutils.internal.io.Base64Utils;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import java.io.Closeable;
import java.io.File;
import java.io.FileInputStream;
import kotlin.io.ByteStreamsKt;

/* JADX INFO: loaded from: classes7.dex */
public final class Md implements Function {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Od f5791a;
    public final Ld b;

    public Md(Od od, Ld ld) {
        this.f5791a = od;
        this.b = ld;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.backport.Function
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final String apply(File file) {
        byte[] bytes;
        FileInputStream fileInputStream;
        try {
            String absolutePath = file.getAbsolutePath();
            if (absolutePath != null) {
                try {
                    fileInputStream = new FileInputStream(new File(absolutePath));
                    try {
                        bytes = ByteStreamsKt.readBytes(fileInputStream);
                        no.a((Closeable) fileInputStream);
                    } catch (Throwable unused) {
                        no.a((Closeable) fileInputStream);
                        bytes = null;
                    }
                } catch (Throwable unused2) {
                    fileInputStream = null;
                }
            } else {
                bytes = null;
            }
            if (bytes == null) {
                return null;
            }
            if (bytes.length == 0) {
                bytes = null;
            }
            if (bytes != null) {
                return Base64Utils.compressBase64(MessageNano.toByteArray(this.b.fromModel(new Rd(bytes, this.f5791a))));
            }
            return null;
        } catch (Throwable unused3) {
            return null;
        }
    }
}
