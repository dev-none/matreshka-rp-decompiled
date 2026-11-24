package com.ironsource.adqualitysdk.sdk.i;

import android.content.Context;
import android.os.SystemClock;
import android.text.TextUtils;
import com.google.firebase.perf.network.FirebasePerfUrlConnection;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.io.BufferedReader;
import java.io.ByteArrayOutputStream;
import java.io.Closeable;
import java.io.DataOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.UnsupportedEncodingException;
import java.net.HttpURLConnection;
import java.net.MalformedURLException;
import java.net.ProtocolException;
import java.net.URL;
import java.net.URLConnection;
import java.util.Iterator;
import java.util.Map;
import java.util.UUID;
import java.util.zip.GZIPOutputStream;
import javax.crypto.Mac;
import javax.crypto.spec.SecretKeySpec;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ῐ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public abstract class AbstractC0911 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static final String f3230 = StringFog.decrypt("+m9v44PALjs=\n", "tAobtvepQkg=\n");

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public static C0686 m8778(String str) {
        try {
            HttpURLConnection httpURLConnection = (HttpURLConnection) ((URLConnection) FirebasePerfUrlConnection.instrument(new URL(str).openConnection()));
            httpURLConnection.setRequestMethod(StringFog.decrypt("nCQW\n", "22FCvoJzslc=\n"));
            String str2 = AbstractC0202.f862;
            long jElapsedRealtime = SystemClock.elapsedRealtime();
            String strM8781 = m8781(httpURLConnection, (String) null);
            int responseCode = httpURLConnection.getResponseCode();
            String responseMessage = httpURLConnection.getResponseMessage();
            if (responseCode >= 400) {
                httpURLConnection.disconnect();
            }
            return new C0686(strM8781, responseCode, responseMessage, SystemClock.elapsedRealtime() - jElapsedRealtime);
        } catch (Throwable th) {
            String str3 = f3230;
            AbstractC0323.m8479(str3, str3, StringFog.decrypt("aAsXzrpZdMNDHQzPr1lgw1lZF8S5DGLVWUNF\n", "LXlloch5B6Y=\n") + th.getLocalizedMessage(), th, null, false);
            return null;
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static String m8781(HttpURLConnection httpURLConnection, String str) {
        InputStream inputStream;
        BufferedReader bufferedReader;
        String string = null;
        if (str != null) {
            C1787y c1787y = C0657.f2283.f2286;
            if (c1787y == null) {
                AbstractC0323.m8472(f3230, StringFog.decrypt("mRR/tvcFLDOpdU6JthAiKKA0WYuyXWMirTtViKNGJySvJ0KXo0YxJL8lVImkA2MnoycblbIXNiS/\nIXKD6g==\n", "zFU759dmQ0E=\n") + str);
                return null;
            }
            try {
                if (httpURLConnection.getResponseCode() == 200) {
                    String strM8782 = m8782(httpURLConnection, str, c1787y);
                    if (strM8782 != null) {
                        return strM8782;
                    }
                    AbstractC0323.m8472(f3230, StringFog.decrypt("Azzj10azNIAmEsn1A+E1ljUP3vYSqD6ddhvG7wqkNch2D8L1Fq4/gDNdxekCuHGaJV3J8wqtcdsl\nCdXjB6xxkjoPwucCuHGQORPU8wukNdo=\n", "Vn2nhmbBUfM=\n"));
                    return null;
                }
            } catch (IOException e) {
                String str2 = f3230;
                AbstractC0323.m8473(str2, str2, StringFog.decrypt("3HOigxmDJ+Oudb6XE8037ut1utMQjD3q63L90wOePejpNqGfF4Q6pvxzsJdMzQ==\n", "jhbR83btVIY=\n") + e.getMessage(), false);
            }
        }
        try {
            inputStream = httpURLConnection.getInputStream();
            try {
                bufferedReader = new BufferedReader(new InputStreamReader(inputStream));
                try {
                    StringBuffer stringBuffer = new StringBuffer();
                    while (true) {
                        String line = bufferedReader.readLine();
                        if (line == null) {
                            break;
                        }
                        if (stringBuffer.length() > 0) {
                            stringBuffer.append('\r');
                        }
                        stringBuffer.append(line);
                    }
                    string = stringBuffer.toString();
                    m8785(inputStream);
                    m8785(bufferedReader);
                } catch (Throwable th) {
                    th = th;
                    Throwable th2 = th;
                    try {
                        String str3 = f3230;
                        AbstractC0323.m8479(str3, str3, StringFog.decrypt("ZX/2oD0MnydUee2hKAyKJ1N966E8SQ==\n", "IA2Ez08s+EI=\n"), th2, null, false);
                    } finally {
                        m8785(inputStream);
                        m8785(bufferedReader);
                    }
                }
            } catch (Throwable th3) {
                th = th3;
                bufferedReader = null;
                Throwable th4 = th;
                String str4 = f3230;
                AbstractC0323.m8479(str4, str4, StringFog.decrypt("ZX/2oD0MnydUee2hKAyKJ1N966E8SQ==\n", "IA2Ez08s+EI=\n"), th4, null, false);
                return string;
            }
        } catch (Throwable th5) {
            th = th5;
            inputStream = null;
        }
        return string;
    }

    /* JADX WARN: Code duplicated, block: B:31:0x006c  */
    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static C1126 m8780(HttpURLConnection httpURLConnection, JSONObject jSONObject, String str, C1745d0 c1745d0, Context context) throws UnsupportedEncodingException {
        String str2;
        String str3;
        C1787y c1787y;
        if (c1745d0 != null && context != null) {
            if (!TextUtils.isEmpty(c1745d0.f367)) {
                str2 = c1745d0.f367;
            } else {
                str2 = c1745d0.f366;
            }
            if (str2 != null && !str2.trim().isEmpty()) {
                if (str == null || str.isEmpty()) {
                    str3 = null;
                } else {
                    try {
                        String path = new URL(str).getPath();
                        if (path == null || path.isEmpty()) {
                            str3 = null;
                        } else {
                            String strReplaceFirst = path.replaceFirst(StringFog.decrypt("bX0=\n", "M1KKdNVJ0l8=\n"), "");
                            int iLastIndexOf = strReplaceFirst.lastIndexOf(47);
                            if (iLastIndexOf >= 0) {
                                strReplaceFirst = strReplaceFirst.substring(iLastIndexOf + 1);
                            }
                            if (strReplaceFirst.isEmpty()) {
                                str3 = null;
                            } else {
                                str3 = strReplaceFirst;
                            }
                        }
                    } catch (MalformedURLException unused) {
                    }
                }
                if (str3 == null || (c1787y = C0657.f2283.f2286) == null) {
                    return null;
                }
                String string = UUID.randomUUID().toString();
                byte[] bytes = m8783(jSONObject).getBytes(StringFog.decrypt("A1woaHQ=\n", "VghuRUzE0Es=\n"));
                C0547 c0547 = c1787y.f573;
                C1119 c1119 = c1787y.f577;
                c1119.getClass();
                try {
                    byte[] bArrM8738 = c1119.f3959.m8738();
                    C0245 c0245M8793 = c1119.f3960.m8793();
                    byte[] bArr = new byte[12];
                    c1119.f3960.f3238.nextBytes(bArr);
                    long jCurrentTimeMillis = System.currentTimeMillis();
                    byte[] bArrM8456 = AbstractC0253.m8456(bytes);
                    byte[] bArrM8794 = c1119.f3960.m8794(c0245M8793.f934, bArrM8738);
                    byte[] bArr2 = C0913.f3232;
                    byte[] bArr3 = new byte[bArr2.length + 3];
                    System.arraycopy(bArr2, 0, bArr3, 0, bArr2.length);
                    bArr3[bArr2.length] = (byte) 0;
                    bArr3[bArr2.length + 1] = (byte) 1;
                    bArr3[bArr2.length + 2] = (byte) 2;
                    byte[] bArrM8795 = c1119.f3960.m8795(bArrM8794, bArr, bArr3);
                    byte[] bArrM8891 = c1119.m8891(str3, string, jCurrentTimeMillis, c0547);
                    byte[] bArrM8890 = C1119.m8890(jCurrentTimeMillis, bArr, c0245M8793.f933, bArrM8891, c1119.f3960.m8792(bArrM8795, bArr, bArrM8456, bArrM8891).f953);
                    c1787y.f580.getClass();
                    C1009 c1009 = new C1009(string, bArrM8794, System.currentTimeMillis());
                    C0540 c0540 = c1787y.f576;
                    c0540.getClass();
                    long jCurrentTimeMillis2 = System.currentTimeMillis();
                    Iterator it = c0540.f1965.entrySet().iterator();
                    while (it.hasNext()) {
                        if (jCurrentTimeMillis2 - ((C1009) ((Map.Entry) it.next()).getValue()).f3647 > c0540.f1966) {
                            it.remove();
                        }
                    }
                    c0540.f1965.put(c1009.f3649, c1009);
                    httpURLConnection.setRequestProperty(StringFog.decrypt("svfjXEC5NRyl4f1N\n", "8ZiNKCXXQTE=\n"), StringFog.decrypt("pgLmL2DwkX+uHfhsZvCEbrNf5Td79pFm\n", "x3KWQwmT8As=\n"));
                    httpURLConnection.setRequestProperty(StringFog.decrypt("cuotqkTT\n", "M4lOzzSnync=\n"), StringFog.decrypt("r+zkjon0nCKn8/rNj/SJM7qx55aS8pw7\n", "zpyU4uCX/VY=\n"));
                    httpURLConnection.setRequestProperty(StringFog.decrypt("+btm1A==\n", "gZYJp9mMsmY=\n"), StringFog.decrypt("Cg==\n", "az4NV/K2SgE=\n"));
                    httpURLConnection.setDoOutput(true);
                    return new C1126(bArrM8890, string);
                } catch (Exception e) {
                    throw new RuntimeException(StringFog.decrypt("n872XPCN12S2j/1F/IWTMLzB6VX5hod1\n", "2a+fMJXp9xA=\n"), e);
                }
            }
            String strDecrypt = StringFog.decrypt("D88lP/7fWWgYgGosrshzYATpYQ==\n", "YaAFXo6vEg0=\n");
            String str4 = f3230;
            AbstractC0323.m8479(str4, str4, AbstractC0343.m8497("KJHLn0wf6DAFk9eIUx/oJw6B0JRQH+R1BZ/R0VAOpjECnsLRSh/ydQ==\n", "a/Cl8SNryFU=\n", new StringBuilder(), strDecrypt), null, null, true);
            return null;
        }
        String strDecrypt2 = StringFog.decrypt("ShQA7kJ5vTZLFUbyVjygBwQYT/VFebcB\n", "JHsgmzEcz3U=\n");
        String str5 = f3230;
        AbstractC0323.m8479(str5, str5, AbstractC0343.m8497("KJHLn0wf6DAFk9eIUx/oJw6B0JRQH+R1BZ/R0VAOpjECnsLRSh/ydQ==\n", "a/Cl8SNryFU=\n", new StringBuilder(), strDecrypt2), null, null, true);
        return null;
    }

    /* JADX WARN: Code duplicated, block: B:12:0x0035  */
    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static C0686 m8779(JSONObject jSONObject, String str, C1745d0 c1745d0, Context context, boolean z) {
        byte[] bArrM8786;
        String str2;
        try {
            HttpURLConnection httpURLConnectionM8784 = m8784(str);
            if (z) {
                try {
                    C1126 c1126M8780 = m8780(httpURLConnectionM8784, jSONObject, str, c1745d0, context);
                    if (c1126M8780 != null) {
                        bArrM8786 = c1126M8780.f3968;
                        str2 = c1126M8780.f3967;
                    } else {
                        str2 = null;
                        bArrM8786 = null;
                    }
                } catch (Exception e) {
                    String str3 = f3230;
                    AbstractC0323.m8473(str3, str3, StringFog.decrypt("dQxZwFTaqsZfDBrBRsOu31UGGt1firjOWQ5f1gGKq9xZDF2SXca/xl5YGg==\n", "MGI6si2q3q8=\n") + e.getMessage(), false);
                }
            } else {
                str2 = null;
                bArrM8786 = null;
            }
            if (bArrM8786 == null) {
                bArrM8786 = m8786(httpURLConnectionM8784, jSONObject);
            }
            String str4 = AbstractC0202.f862;
            long jElapsedRealtime = SystemClock.elapsedRealtime();
            httpURLConnectionM8784.connect();
            DataOutputStream dataOutputStream = new DataOutputStream(httpURLConnectionM8784.getOutputStream());
            try {
                dataOutputStream.write(bArrM8786);
                dataOutputStream.flush();
                dataOutputStream.close();
                String strM8781 = m8781(httpURLConnectionM8784, str2);
                int responseCode = httpURLConnectionM8784.getResponseCode();
                String responseMessage = httpURLConnectionM8784.getResponseMessage();
                if (responseCode >= 400) {
                    httpURLConnectionM8784.disconnect();
                }
                return new C0686(strM8781, responseCode, responseMessage, SystemClock.elapsedRealtime() - jElapsedRealtime);
            } catch (Throwable th) {
                try {
                    dataOutputStream.close();
                    throw th;
                } catch (Throwable th2) {
                    th.addSuppressed(th2);
                    throw th;
                }
            }
        } catch (Throwable th3) {
            String str5 = f3230;
            AbstractC0323.m8479(str5, str5, StringFog.decrypt("Jk5Zgdqk/OYNWEKAz6T/7BBIC5zN9frmEEgRzg==\n", "Yzwr7qiEj4M=\n") + th3.getLocalizedMessage(), th3, null, false);
            return null;
        }
    }

    /* JADX WARN: Code duplicated, block: B:27:0x005a A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static byte[] m8786(HttpURLConnection httpURLConnection, JSONObject jSONObject) throws Throwable {
        GZIPOutputStream gZIPOutputStream;
        Exception e;
        Throwable th;
        String strM8783 = m8783(jSONObject);
        byte[] bytes = strM8783.getBytes(StringFog.decrypt("8pePPnw=\n", "p8PJE0T12eE=\n"));
        if (strM8783.length() <= 256) {
            return bytes;
        }
        httpURLConnection.setRequestProperty(StringFog.decrypt("VHnJSxV32c1SeMRQFHDDhw==\n", "FxanP3AZreA=\n"), StringFog.decrypt("jnt1gw==\n", "6QEc8z8Vmd0=\n"));
        GZIPOutputStream gZIPOutputStream2 = null;
        try {
            ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
            gZIPOutputStream = new GZIPOutputStream(byteArrayOutputStream);
            try {
                gZIPOutputStream.write(bytes);
                gZIPOutputStream.flush();
                gZIPOutputStream.close();
                return byteArrayOutputStream.toByteArray();
            } catch (Exception e2) {
                e = e2;
                try {
                    throw new RuntimeException(e);
                } catch (Throwable th2) {
                    th = th2;
                    gZIPOutputStream2 = gZIPOutputStream;
                    gZIPOutputStream = gZIPOutputStream2;
                    th = th;
                    if (gZIPOutputStream != null) {
                        try {
                            gZIPOutputStream.close();
                        } catch (Exception unused) {
                        }
                    }
                    throw th;
                }
            } catch (Throwable th3) {
                th = th3;
                if (gZIPOutputStream != null) {
                    gZIPOutputStream.close();
                }
                throw th;
            }
        } catch (Exception e3) {
            gZIPOutputStream = null;
            e = e3;
        } catch (Throwable th4) {
            th = th4;
            gZIPOutputStream = gZIPOutputStream2;
            th = th;
            if (gZIPOutputStream != null) {
                gZIPOutputStream.close();
            }
            throw th;
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static HttpURLConnection m8784(String str) throws ProtocolException {
        HttpURLConnection httpURLConnection = (HttpURLConnection) ((URLConnection) FirebasePerfUrlConnection.instrument(new URL(str).openConnection()));
        httpURLConnection.setRequestMethod(StringFog.decrypt("tKrJOQ==\n", "5OWabW6YIl0=\n"));
        httpURLConnection.setRequestProperty(StringFog.decrypt("l/VoUKUUQoWA43ZB\n", "1JoGJMB6Nqg=\n"), StringFog.decrypt("uKwwyWcOdtOwsy6KZB54yeL8I81vH2TCreE10WhALw==\n", "2dxApQ5tF6c=\n"));
        httpURLConnection.setUseCaches(false);
        httpURLConnection.setDoInput(true);
        httpURLConnection.setDoOutput(true);
        httpURLConnection.setConnectTimeout(60000);
        httpURLConnection.setReadTimeout(60000);
        return httpURLConnection;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static String m8782(HttpURLConnection httpURLConnection, String str, C1787y c1787y) {
        Throwable th;
        InputStream inputStream;
        Throwable th2;
        ByteArrayOutputStream byteArrayOutputStream;
        try {
            inputStream = httpURLConnection.getInputStream();
            try {
                int contentLength = httpURLConnection.getContentLength();
                if (contentLength <= 0) {
                    contentLength = 65536;
                }
                ByteArrayOutputStream byteArrayOutputStream2 = new ByteArrayOutputStream(contentLength);
                try {
                    byte[] bArr = new byte[65536];
                    while (true) {
                        int i = inputStream.read(bArr);
                        if (i == -1) {
                            break;
                        }
                        byteArrayOutputStream2.write(bArr, 0, i);
                    }
                    byte[] bArrM8433 = c1787y.m8433(byteArrayOutputStream2.toByteArray(), str);
                    if (bArrM8433 == null) {
                        AbstractC0323.m8472(f3230, StringFog.decrypt("6dKvnGz38MrO6pu5Hvbm2dP9mKhs4fDdyeGFqCiz+9zQ/w==\n", "vJPrzUyTlak=\n"));
                        m8785(inputStream);
                        m8785(byteArrayOutputStream2);
                        return null;
                    }
                    String str2 = new String(bArrM8433, StringFog.decrypt("RGnDfDg=\n", "ET2FUQAg18k=\n"));
                    m8785(inputStream);
                    m8785(byteArrayOutputStream2);
                    return str2;
                } catch (Throwable th3) {
                    th2 = th3;
                    byteArrayOutputStream = byteArrayOutputStream2;
                    try {
                        String str3 = f3230;
                        AbstractC0323.m8472(str3, StringFog.decrypt("U6ACALO7bLl2jigi9ultr2WTPyHnoGakJocnOP+sbfAm\n", "BuFGUZPJCco=\n") + th2.getMessage());
                        AbstractC0323.m8479(str3, str3, StringFog.decrypt("JLIWJtQz1YgVtA0nwTzWiAKyHTnSetyKQbIBOtZ83J4E\n", "YcBkSaYTsu0=\n"), th2, null, false);
                        return null;
                    } finally {
                        m8785(inputStream);
                        m8785(byteArrayOutputStream);
                    }
                }
            } catch (Throwable th4) {
                th = th4;
                th2 = th;
                byteArrayOutputStream = null;
                String str4 = f3230;
                AbstractC0323.m8472(str4, StringFog.decrypt("U6ACALO7bLl2jigi9ultr2WTPyHnoGakJocnOP+sbfAm\n", "BuFGUZPJCco=\n") + th2.getMessage());
                AbstractC0323.m8479(str4, str4, StringFog.decrypt("JLIWJtQz1YgVtA0nwTzWiAKyHTnSetyKQbIBOtZ83J4E\n", "YcBkSaYTsu0=\n"), th2, null, false);
                return null;
            }
        } catch (Throwable th5) {
            th = th5;
            inputStream = null;
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static void m8785(Closeable closeable) {
        if (closeable != null) {
            try {
                closeable.close();
            } catch (Throwable unused) {
            }
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static String m8783(JSONObject jSONObject) {
        String strM8504;
        String string = jSONObject.toString();
        String str = AbstractC0524.f1837;
        try {
            Mac mac = Mac.getInstance("HmacSHA1");
            mac.init(new SecretKeySpec(AbstractC0524.f1836.getBytes(StringFog.decrypt("x23sYZU=\n", "kjmqTK02IOI=\n")), mac.getAlgorithm()));
            strM8504 = AbstractC0389.m8504(mac.doFinal(string.replaceAll(" ", "").replaceAll("\n", "").getBytes(StringFog.decrypt("pqc0Jxg=\n", "8/NyCiA6x6M=\n"))));
        } catch (Exception e) {
            AbstractC0323.m8470(AbstractC0524.f1837, StringFog.decrypt("XWMP2hpI7Q==\n", "GBF9tWhyzZY=\n") + e.getLocalizedMessage());
            strM8504 = null;
        }
        String strSubstring = string.substring(0, string.lastIndexOf(125));
        StringBuilder sb = new StringBuilder();
        sb.append(strSubstring);
        return AbstractC0970.m8850("4QI=\n", "w3/9btv9AtE=\n", AbstractC0502.m8559("/wwl61JzXA==\n", "0y5NmHBJfmQ=\n", sb, strM8504));
    }
}
