package com.my.target;

import android.util.Base64;
import android.util.Base64OutputStream;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.nio.charset.StandardCharsets;
import java.security.MessageDigest;
import java.util.Locale;
import java.util.Map;
import java.util.zip.DeflaterOutputStream;

/* JADX INFO: loaded from: classes6.dex */
public abstract class y1 {
    public static String a(String str) {
        try {
            return new String(Base64.decode(str, 0));
        } catch (Throwable unused) {
            return null;
        }
    }

    public static String b(Map map) throws IOException {
        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
        try {
            DeflaterOutputStream deflaterOutputStream = new DeflaterOutputStream(new Base64OutputStream(byteArrayOutputStream, 2));
            try {
                boolean z = true;
                for (Map.Entry entry : map.entrySet()) {
                    String str = (String) entry.getValue();
                    if (str != null) {
                        String str2 = (String) entry.getKey();
                        String strB = lb.b(str);
                        if (z) {
                            z = false;
                        } else {
                            deflaterOutputStream.write(38);
                        }
                        deflaterOutputStream.write(str2.getBytes());
                        deflaterOutputStream.write(61);
                        deflaterOutputStream.write(strB.getBytes());
                    }
                }
                deflaterOutputStream.close();
                String string = byteArrayOutputStream.toString();
                deflaterOutputStream.close();
                byteArrayOutputStream.close();
                return string;
            } catch (Throwable th) {
                try {
                    deflaterOutputStream.close();
                } catch (Throwable th2) {
                    th.addSuppressed(th2);
                }
                throw th;
            }
        } catch (Throwable th3) {
            try {
                byteArrayOutputStream.close();
            } catch (Throwable th4) {
                th3.addSuppressed(th4);
            }
            throw th3;
        }
    }

    public static String c(String str) {
        try {
            MessageDigest messageDigest = MessageDigest.getInstance("md5");
            messageDigest.update(str.getBytes(StandardCharsets.UTF_8));
            byte[] bArrDigest = messageDigest.digest();
            StringBuilder sb = new StringBuilder();
            for (byte b : bArrDigest) {
                sb.append(String.format("%02X", Byte.valueOf(b)));
            }
            return sb.toString().toLowerCase(Locale.ROOT);
        } catch (Throwable unused) {
            return null;
        }
    }

    public static String a(Map map) {
        try {
            return b(map);
        } catch (Throwable unused) {
            return "";
        }
    }

    public static String a(Map map, o oVar) {
        try {
            return b(map);
        } catch (Throwable th) {
            oVar.c(0, 1001, "exception: " + eb.b(th));
            return "";
        }
    }

    public static String b(String str) {
        try {
            ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
            try {
                DeflaterOutputStream deflaterOutputStream = new DeflaterOutputStream(new Base64OutputStream(byteArrayOutputStream, 2));
                try {
                    deflaterOutputStream.write(str.getBytes());
                    deflaterOutputStream.close();
                    String string = byteArrayOutputStream.toString();
                    deflaterOutputStream.close();
                    byteArrayOutputStream.close();
                    return string;
                } catch (Throwable th) {
                    try {
                        deflaterOutputStream.close();
                    } catch (Throwable th2) {
                        th.addSuppressed(th2);
                    }
                    throw th;
                }
            } catch (Throwable th3) {
                try {
                    byteArrayOutputStream.close();
                } catch (Throwable th4) {
                    th3.addSuppressed(th4);
                }
                throw th3;
            }
        } catch (Throwable th5) {
            gb.a("EncryptionUtils: Cannot obtain bidder token - " + th5.getMessage());
            return "";
        }
    }
}
