package io.flutter.plugin.common;

import java.nio.ByteBuffer;

/* JADX INFO: loaded from: classes7.dex */
public interface MessageCodec<T> {
    T decodeMessage(ByteBuffer byteBuffer);

    ByteBuffer encodeMessage(T t);
}
