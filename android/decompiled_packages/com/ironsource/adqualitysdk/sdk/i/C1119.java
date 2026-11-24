package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import java.io.ByteArrayOutputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.nio.charset.Charset;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ｉ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1119 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final C0698 f3958;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final C0862 f3959;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final C0913 f3960;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public static final Charset f3957 = Charset.forName(StringFog.decrypt("UlwaB8Q=\n", "BwhcKvyQzGs=\n"));

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public static final Charset f3956 = Charset.forName(StringFog.decrypt("jsReiegSMUY=\n", "25dzyLtReA8=\n"));

    public C1119(C0913 c0913, C0862 c0862, C0698 c0698) {
        this.f3960 = c0913;
        this.f3959 = c0862;
        this.f3958 = c0698;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final byte[] m8891(String str, String str2, long j, C0547 c0547) {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put(StringFog.decrypt("6pfJAKUjAuTbmMo=\n", "j/mtcMpKbJA=\n"), str);
            jSONObject.put(StringFog.decrypt("Npqsm7E0LvQqkA==\n", "Rf7HzdRGXZ0=\n"), this.f3958.f2421);
            jSONObject.put(StringFog.decrypt("dAGbMEs+UtJ9\n", "FXHreS92M6E=\n"), this.f3958.f2420);
            jSONObject.put(StringFog.decrypt("pBcuS4JATy+y\n", "1nJfPuczO2Y=\n"), str2);
            jSONObject.put(StringFog.decrypt("8EGRkbYNMHH0\n", "hCj89MV5URw=\n"), j);
            jSONObject.put(StringFog.decrypt("NCCFytEBqJckCJ3O0QA=\n", "XU7xr7ZzweM=\n"), c0547.m8574());
            return jSONObject.toString().getBytes(f3957);
        } catch (Exception e) {
            throw new RuntimeException(StringFog.decrypt("MjUORps1+9QbdAVflz2/gDUVIwq0ApTu\n", "dFRnKv5R26A=\n"), e);
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static byte[] m8890(long j, byte[] bArr, byte[] bArr2, byte[] bArr3, byte[] bArr4) {
        try {
            ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream(bArr.length + 20 + bArr2.length + 2 + bArr3.length + 4 + bArr4.length);
            DataOutputStream dataOutputStream = new DataOutputStream(byteArrayOutputStream);
            dataOutputStream.write(StringFog.decrypt("NlxANA==\n", "Yx0EZfUO2Mo=\n").getBytes(f3956));
            dataOutputStream.writeByte(1);
            dataOutputStream.writeShort(1);
            dataOutputStream.writeLong(j);
            dataOutputStream.writeByte(2);
            dataOutputStream.writeByte(2);
            dataOutputStream.writeByte(1);
            dataOutputStream.writeByte(bArr.length);
            dataOutputStream.write(bArr);
            dataOutputStream.writeByte(bArr2.length);
            dataOutputStream.write(bArr2);
            dataOutputStream.writeShort(bArr3.length);
            dataOutputStream.write(bArr3);
            dataOutputStream.writeInt(bArr4.length);
            dataOutputStream.write(bArr4);
            dataOutputStream.flush();
            return byteArrayOutputStream.toByteArray();
        } catch (IOException e) {
            throw new RuntimeException(StringFog.decrypt("JSpM/89JL2gMa1b22ERucAoxQLPPQ3l5DyRV9g==\n", "Y0slk6otDxw=\n"), e);
        }
    }
}
