package com.pushwoosh.e0;

import java.io.ByteArrayInputStream;
import java.io.IOException;

/* JADX INFO: loaded from: classes6.dex */
public abstract class j {
    public static Object a(String str, Class... clsArr) throws IOException {
        if (str.length() == 0) {
            return null;
        }
        try {
            byte[] bArr = new byte[str.length() / 2];
            for (int i = 0; i < str.length(); i += 2) {
                int i2 = i / 2;
                bArr[i2] = (byte) ((str.charAt(i) - 'a') << 4);
                bArr[i2] = (byte) ((str.charAt(i + 1) - 'a') + bArr[i2]);
            }
            com.pushwoosh.f0.b bVar = new com.pushwoosh.f0.b(new ByteArrayInputStream(bArr));
            for (Class cls : clsArr) {
                bVar.f5074a.add(new com.pushwoosh.f0.a(cls.getName()));
            }
            return bVar.readObject();
        } catch (Exception e) {
            throw new IOException("Deserialization error: " + e.getMessage(), e);
        }
    }
}
