package io.flutter.embedding.engine.image;

import android.graphics.Bitmap;
import java.nio.ByteBuffer;

/* JADX INFO: compiled from: FlutterImageDecoder.java */
/* JADX INFO: loaded from: classes7.dex */
interface ImageDecoder {
    Bitmap decodeImage(ByteBuffer byteBuffer, Metadata metadata);
}
