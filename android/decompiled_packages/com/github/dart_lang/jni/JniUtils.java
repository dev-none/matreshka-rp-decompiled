package com.github.dart_lang.jni;

/* JADX INFO: loaded from: classes4.dex */
public class JniUtils {
    public static native Object fromReferenceAddress(long j);

    static {
        System.loadLibrary("dartjni");
    }
}
