package io.appmetrica.analytics.impl;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.i3, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public class C2187i3 implements InterfaceC2212j3 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final int f6123a;

    public C2187i3(int i) {
        this.f6123a = i;
    }

    public static InterfaceC2212j3 a(InterfaceC2212j3... interfaceC2212j3Arr) {
        return new C2187i3(b(interfaceC2212j3Arr));
    }

    public static int b(InterfaceC2212j3... interfaceC2212j3Arr) {
        int bytesTruncated = 0;
        for (InterfaceC2212j3 interfaceC2212j3 : interfaceC2212j3Arr) {
            if (interfaceC2212j3 != null) {
                bytesTruncated = interfaceC2212j3.getBytesTruncated() + bytesTruncated;
            }
        }
        return bytesTruncated;
    }

    @Override // io.appmetrica.analytics.impl.InterfaceC2212j3
    public final int getBytesTruncated() {
        return this.f6123a;
    }

    public String toString() {
        return "BytesTruncatedInfo{bytesTruncated=" + this.f6123a + '}';
    }
}
