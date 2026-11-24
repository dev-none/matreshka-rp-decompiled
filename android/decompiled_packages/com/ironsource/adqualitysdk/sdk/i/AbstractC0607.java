package com.ironsource.adqualitysdk.sdk.i;

import android.os.Handler;
import android.os.Looper;
import android.text.TextUtils;
import android.util.Base64;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.UnsupportedEncodingException;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.util.ArrayList;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import java.util.zip.GZIPInputStream;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᐨ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public abstract class AbstractC0607 {
    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public static String m8588(String str) {
        if (str == null) {
            return null;
        }
        try {
            byte[] bArrDigest = MessageDigest.getInstance(StringFog.decrypt("k6owpiQOBg==\n", "wOJxixY7MAQ=\n")).digest(str.getBytes(StringFog.decrypt("iU6uYWA=\n", "3BroTFjnoEA=\n")));
            StringBuilder sb = new StringBuilder(bArrDigest.length * 2);
            for (byte b : bArrDigest) {
                sb.append(String.format(StringFog.decrypt("XMN4XA==\n", "efNKJGXqkPU=\n"), Integer.valueOf(b & 255)));
            }
            return sb.toString();
        } catch (UnsupportedEncodingException e) {
            throw new RuntimeException(e);
        } catch (NoSuchAlgorithmException e2) {
            throw new RuntimeException(StringFog.decrypt("e9QDb+vhHqtG8zZiuKJJ4kT9IC68\n", "KJxCQtnUKIs=\n"), e2);
        }
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public static ArrayList m8589(String str, String str2, boolean z) {
        ArrayList arrayList = new ArrayList();
        Matcher matcher = Pattern.compile(str2).matcher(str);
        loop0: while (matcher.find()) {
            if (matcher.groupCount() == 0) {
                arrayList.add(matcher.group());
                if (z) {
                    break;
                }
            } else {
                for (int i = 1; i <= matcher.groupCount(); i++) {
                    arrayList.add(matcher.group(i));
                    if (z) {
                        break loop0;
                    }
                }
            }
        }
        return arrayList;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static int m8591(String str, String str2) {
        String[] strArrSplit = str.replaceAll(StringFog.decrypt("uGUxGlydKw==\n", "4zsBN2WzdkA=\n"), "").split(StringFog.decrypt("rDI=\n", "8Bx9x0OEMl8=\n"));
        String[] strArrSplit2 = str2.replaceAll(StringFog.decrypt("CI41OCPSoQ==\n", "U9AFFRr8/GU=\n"), "").split(StringFog.decrypt("D6M=\n", "U43poz2HVQU=\n"));
        int i = 0;
        while (i < strArrSplit.length && i < strArrSplit2.length && strArrSplit[i].equals(strArrSplit2[i])) {
            i++;
        }
        return (i >= strArrSplit.length || i >= strArrSplit2.length) ? Integer.signum(strArrSplit.length - strArrSplit2.length) : Integer.signum(Integer.valueOf(strArrSplit[i]).compareTo(Integer.valueOf(strArrSplit2[i])));
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public static boolean m8590(String str) {
        Handler handler = AbstractC1766n.f458;
        if (Looper.myLooper() == Looper.getMainLooper()) {
            return false;
        }
        try {
            new GZIPInputStream(new ByteArrayInputStream(Base64.decode(str, 0))).close();
            return true;
        } catch (Throwable unused) {
            return false;
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static boolean m8594(String str, int i) {
        return !TextUtils.isEmpty(str) && str.length() >= 1 && str.length() <= i;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static String m8593(String str, String str2, boolean z) {
        if (z && !TextUtils.isEmpty(str2)) {
            if (!str2.startsWith(StringFog.decrypt("fA==\n", "IuJPAkAudro=\n"))) {
                str2 = AbstractC0343.m8497("mcSqhaFRqpc=\n", "x5/29v0C970=\n", new StringBuilder(), str2);
            }
            if (!str2.endsWith(StringFog.decrypt("vQ==\n", "mc0R8LyQWc8=\n"))) {
                StringBuilder sb = new StringBuilder();
                sb.append(str2);
                str2 = AbstractC0970.m8850("meETtgGRLw==\n", "wr1g6lLMBXI=\n", sb);
            }
        }
        ArrayList arrayListM8589 = m8589(str, str2, true);
        if (arrayListM8589.size() > 0) {
            return (String) arrayListM8589.get(0);
        }
        return null;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static String m8592(String str) {
        if (str != null) {
            Handler handler = AbstractC1766n.f458;
            if (Looper.myLooper() != Looper.getMainLooper() && m8590(str)) {
                int i = 0;
                try {
                    ByteArrayInputStream byteArrayInputStream = new ByteArrayInputStream(Base64.decode(str, 0));
                    GZIPInputStream gZIPInputStream = new GZIPInputStream(byteArrayInputStream);
                    new ByteArrayOutputStream();
                    byte[] bArr = new byte[8192];
                    while (true) {
                        int i2 = gZIPInputStream.read(bArr, i, 8192 - i);
                        if (i2 == -1) {
                            gZIPInputStream.close();
                            byteArrayInputStream.close();
                            return new String(bArr, StringFog.decrypt("A20N+JI=\n", "VjlL1aoVEB4=\n"));
                        }
                        i += i2;
                    }
                } catch (Throwable unused) {
                }
            }
        }
        return null;
    }
}
