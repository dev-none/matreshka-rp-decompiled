package com.unity3d.coherence;

import android.content.ContentResolver;
import android.content.Context;
import android.content.SharedPreferences;
import androidx.collection.SieveCacheKt;
import com.google.firebase.perf.network.FirebasePerfUrlConnection;
import com.unity3d.ads.core.data.datasource.AndroidDynamicDeviceInfoDataSource;
import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.io.RandomAccessFile;
import java.lang.reflect.Field;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.net.HttpURLConnection;
import java.net.URL;
import java.net.URLConnection;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.StandardCopyOption;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.UUID;
import kotlin.text.Typography;
import org.apache.commons.io.FilenameUtils;
import org.apache.commons.io.IOUtils;

/* JADX INFO: loaded from: classes6.dex */
final class Coherence {
    private static final String BLOB_SUBDIR = "unity_coherence_blobs";
    private static final int BLOB_TIER_CACHE = 0;
    private static final int BLOB_TIER_DURABLE = 1;
    static final int MAX_EXPR_BYTES = 4096;
    static final int MAX_LETS = 16;
    static final int MAX_LISTING_BYTES = 32768;
    static final int MAX_PATH_SEGMENTS = 32;
    private static final Set<String> SETTINGS_GETTERS;
    private static final Set<String> SETTINGS_ROOTS;
    private final Object blobLock = new Object();
    private final Context context;
    private final SharedPreferences prefs;

    Long platformQueryInt(int i) {
        return null;
    }

    String platformQueryString(int i) {
        return null;
    }

    Coherence(Context context, SharedPreferences sharedPreferences) {
        this.context = context;
        this.prefs = sharedPreferences;
    }

    String kvGet(String str) {
        return this.prefs.getString(str, null);
    }

    boolean kvSet(String str, String str2) {
        this.prefs.edit().putString(str, str2).apply();
        return true;
    }

    String generateUuid() {
        return UUID.randomUUID().toString();
    }

    String reflectString(String str) {
        Object objResolvePath = resolvePath(str);
        if (objResolvePath instanceof String) {
            return (String) objResolvePath;
        }
        return null;
    }

    Long reflectInt(String str) {
        Object objResolvePath = resolvePath(str);
        if (objResolvePath instanceof Number) {
            return Long.valueOf(((Number) objResolvePath).longValue());
        }
        return null;
    }

    Boolean reflectBool(String str) {
        Object objResolvePath = resolvePath(str);
        if (objResolvePath instanceof Boolean) {
            return (Boolean) objResolvePath;
        }
        return null;
    }

    Double reflectDouble(String str) {
        Object objResolvePath = resolvePath(str);
        if (objResolvePath instanceof Number) {
            return Double.valueOf(((Number) objResolvePath).doubleValue());
        }
        return null;
    }

    HttpResult httpPost(String str, String str2, byte[] bArr) {
        return httpExecute("POST", str, str2, bArr);
    }

    HttpResult httpGet(String str, String str2) {
        return httpExecute("GET", str, str2, null);
    }

    private HttpResult httpExecute(String str, String str2, String str3, byte[] bArr) throws Throwable {
        HttpURLConnection httpURLConnection;
        HttpURLConnection httpURLConnection2 = null;
        try {
            httpURLConnection = (HttpURLConnection) ((URLConnection) FirebasePerfUrlConnection.instrument(new URL(str2).openConnection()));
            try {
                httpURLConnection.setRequestMethod(str);
                httpURLConnection.setConnectTimeout(30000);
                httpURLConnection.setReadTimeout(30000);
                if (str3 != null) {
                    for (String str4 : str3.split("\r\n")) {
                        int iIndexOf = str4.indexOf(58);
                        if (iIndexOf > 0) {
                            httpURLConnection.setRequestProperty(str4.substring(0, iIndexOf).trim(), str4.substring(iIndexOf + 1).trim());
                        }
                    }
                }
                if (bArr != null && bArr.length > 0) {
                    httpURLConnection.setDoOutput(true);
                    OutputStream outputStream = httpURLConnection.getOutputStream();
                    try {
                        outputStream.write(bArr);
                        if (outputStream != null) {
                            outputStream.close();
                        }
                    } catch (Throwable th) {
                        if (outputStream != null) {
                            try {
                                outputStream.close();
                            } catch (Throwable th2) {
                                th.addSuppressed(th2);
                            }
                        }
                        throw th;
                    }
                }
                HttpResult httpResult = new HttpResult();
                httpResult.status = httpURLConnection.getResponseCode();
                InputStream errorStream = httpResult.status >= 400 ? httpURLConnection.getErrorStream() : httpURLConnection.getInputStream();
                if (errorStream != null) {
                    try {
                        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
                        try {
                            byte[] bArr2 = new byte[4096];
                            while (true) {
                                int i = errorStream.read(bArr2);
                                if (i == -1) {
                                    break;
                                }
                                byteArrayOutputStream.write(bArr2, 0, i);
                                errorStream.close();
                                throw th;
                            }
                            httpResult.body = byteArrayOutputStream.toByteArray();
                            byteArrayOutputStream.close();
                            errorStream.close();
                        } catch (Throwable th3) {
                            try {
                                byteArrayOutputStream.close();
                            } catch (Throwable th4) {
                                th3.addSuppressed(th4);
                            }
                            throw th3;
                        }
                    } catch (Throwable th5) {
                        errorStream.close();
                        throw th5;
                    }
                }
                if (httpURLConnection != null) {
                    httpURLConnection.disconnect();
                }
                return httpResult;
            } catch (IOException unused) {
                if (httpURLConnection != null) {
                    httpURLConnection.disconnect();
                }
                return null;
            } catch (Throwable th6) {
                th = th6;
                httpURLConnection2 = httpURLConnection;
                if (httpURLConnection2 != null) {
                    httpURLConnection2.disconnect();
                }
                throw th;
            }
        } catch (IOException unused2) {
            httpURLConnection = null;
        } catch (Throwable th7) {
            th = th7;
        }
    }

    private File blobBaseDir(int i) {
        File cacheDir;
        if (i == 0) {
            cacheDir = this.context.getCacheDir();
        } else {
            if (i != 1) {
                return null;
            }
            cacheDir = this.context.getFilesDir();
        }
        if (cacheDir == null) {
            return null;
        }
        File file = new File(cacheDir, BLOB_SUBDIR);
        if (file.isDirectory() || file.mkdirs()) {
            return file;
        }
        return null;
    }

    private static String blobFilenameForKey(String str) {
        try {
            byte[] bArrDigest = MessageDigest.getInstance("SHA-256").digest(str.getBytes(StandardCharsets.UTF_8));
            StringBuilder sb = new StringBuilder(bArrDigest.length * 2);
            for (byte b : bArrDigest) {
                sb.append(String.format("%02x", Integer.valueOf(b & 255)));
            }
            return sb.toString();
        } catch (NoSuchAlgorithmException e) {
            throw new RuntimeException("SHA-256 unavailable", e);
        }
    }

    private File blobFile(int i, String str) {
        File fileBlobBaseDir = blobBaseDir(i);
        if (fileBlobBaseDir == null || str == null || str.isEmpty()) {
            return null;
        }
        return new File(fileBlobBaseDir, blobFilenameForKey(str));
    }

    byte[] blobGet(int i, String str) {
        File fileBlobFile = blobFile(i, str);
        if (fileBlobFile != null && fileBlobFile.exists()) {
            try {
                RandomAccessFile randomAccessFile = new RandomAccessFile(fileBlobFile, AndroidDynamicDeviceInfoDataSource.DIRECTORY_MODE_READ);
                try {
                    long length = randomAccessFile.length();
                    if (length <= SieveCacheKt.NodeLinkMask) {
                        byte[] bArr = new byte[(int) length];
                        randomAccessFile.readFully(bArr);
                        randomAccessFile.close();
                        return bArr;
                    }
                    randomAccessFile.close();
                    return null;
                } catch (Throwable th) {
                    try {
                        randomAccessFile.close();
                    } catch (Throwable th2) {
                        th.addSuppressed(th2);
                    }
                    throw th;
                }
            } catch (IOException unused) {
            }
        }
        return null;
    }

    boolean blobSet(int i, String str, byte[] bArr) {
        File fileBlobFile = blobFile(i, str);
        if (fileBlobFile == null) {
            return false;
        }
        if (bArr == null) {
            bArr = new byte[0];
        }
        File file = new File(fileBlobFile.getParentFile(), fileBlobFile.getName() + ".tmp");
        synchronized (this.blobLock) {
            try {
                FileOutputStream fileOutputStream = new FileOutputStream(file);
                try {
                    if (bArr.length > 0) {
                        fileOutputStream.write(bArr);
                    }
                    fileOutputStream.getFD().sync();
                    fileOutputStream.close();
                    if (atomicReplace(file, fileBlobFile)) {
                        return true;
                    }
                    file.delete();
                    return false;
                } catch (Throwable th) {
                    try {
                        fileOutputStream.close();
                    } catch (Throwable th2) {
                        th.addSuppressed(th2);
                    }
                    throw th;
                }
            } catch (IOException unused) {
                file.delete();
                return false;
            }
        }
    }

    private static boolean atomicReplace(File file, File file2) {
        try {
            Files.move(file.toPath(), file2.toPath(), StandardCopyOption.REPLACE_EXISTING, StandardCopyOption.ATOMIC_MOVE);
            return true;
        } catch (IOException | UnsupportedOperationException unused) {
            if (file.renameTo(file2)) {
                return true;
            }
            if (file2.exists() && file2.delete()) {
                return file.renameTo(file2);
            }
            return false;
        }
    }

    boolean blobDelete(int i, String str) {
        File fileBlobFile = blobFile(i, str);
        if (fileBlobFile == null) {
            return false;
        }
        if (fileBlobFile.delete()) {
            return true;
        }
        return !fileBlobFile.exists();
    }

    int httpDownloadToBlob(String str, String str2, int i, String str3) throws Throwable {
        File fileBlobFile = blobFile(i, str3);
        if (fileBlobFile == null) {
            return -1;
        }
        File file = new File(fileBlobFile.getParentFile(), fileBlobFile.getName() + ".tmp");
        HttpURLConnection httpURLConnection = null;
        try {
            try {
                HttpURLConnection httpURLConnection2 = (HttpURLConnection) ((URLConnection) FirebasePerfUrlConnection.instrument(new URL(str).openConnection()));
                try {
                    httpURLConnection2.setRequestMethod("GET");
                    httpURLConnection2.setConnectTimeout(30000);
                    httpURLConnection2.setReadTimeout(30000);
                    if (str2 != null) {
                        for (String str4 : str2.split("\r\n")) {
                            int iIndexOf = str4.indexOf(58);
                            if (iIndexOf > 0) {
                                httpURLConnection2.setRequestProperty(str4.substring(0, iIndexOf).trim(), str4.substring(iIndexOf + 1).trim());
                            }
                        }
                    }
                    int responseCode = httpURLConnection2.getResponseCode();
                    if (responseCode < 200 || responseCode >= 300) {
                        InputStream errorStream = httpURLConnection2.getErrorStream();
                        if (errorStream != null) {
                            try {
                                do {
                                } while (errorStream.read(new byte[4096]) != -1);
                                errorStream.close();
                            } catch (Throwable th) {
                                errorStream.close();
                                throw th;
                            }
                        }
                        if (httpURLConnection2 != null) {
                            httpURLConnection2.disconnect();
                        }
                    } else {
                        InputStream inputStream = httpURLConnection2.getInputStream();
                        if (inputStream == null) {
                            if (httpURLConnection2 != null) {
                                httpURLConnection2.disconnect();
                            }
                            return -1;
                        }
                        synchronized (this.blobLock) {
                            try {
                                FileOutputStream fileOutputStream = new FileOutputStream(file);
                                try {
                                    byte[] bArr = new byte[8192];
                                    while (true) {
                                        int i2 = inputStream.read(bArr);
                                        if (i2 == -1) {
                                            break;
                                        }
                                        fileOutputStream.write(bArr, 0, i2);
                                        inputStream.close();
                                        throw th;
                                    }
                                    fileOutputStream.getFD().sync();
                                    fileOutputStream.close();
                                    inputStream.close();
                                    if (!atomicReplace(file, fileBlobFile)) {
                                        file.delete();
                                        if (httpURLConnection2 != null) {
                                            httpURLConnection2.disconnect();
                                        }
                                        return -1;
                                    }
                                    if (httpURLConnection2 != null) {
                                        httpURLConnection2.disconnect();
                                        return responseCode;
                                    }
                                } catch (Throwable th2) {
                                    try {
                                        fileOutputStream.close();
                                    } catch (Throwable th3) {
                                        th2.addSuppressed(th3);
                                    }
                                    throw th2;
                                }
                            } catch (Throwable th4) {
                                inputStream.close();
                                throw th4;
                            }
                        }
                    }
                    return responseCode;
                } catch (IOException unused) {
                    httpURLConnection = httpURLConnection2;
                    file.delete();
                    if (httpURLConnection != null) {
                        httpURLConnection.disconnect();
                    }
                    return -1;
                } catch (Throwable th5) {
                    th = th5;
                    httpURLConnection = httpURLConnection2;
                    if (httpURLConnection != null) {
                        httpURLConnection.disconnect();
                    }
                    throw th;
                }
            } catch (IOException unused2) {
            }
        } catch (Throwable th6) {
            th = th6;
        }
    }

    String reflectEvalString(String str) {
        Object objEvaluateJvmExpression = evaluateJvmExpression(str);
        if (objEvaluateJvmExpression instanceof String) {
            return (String) objEvaluateJvmExpression;
        }
        return null;
    }

    Long reflectEvalInt(String str) {
        Object objEvaluateJvmExpression = evaluateJvmExpression(str);
        if (objEvaluateJvmExpression instanceof Number) {
            return Long.valueOf(((Number) objEvaluateJvmExpression).longValue());
        }
        return null;
    }

    Boolean reflectEvalBool(String str) {
        Object objEvaluateJvmExpression = evaluateJvmExpression(str);
        if (objEvaluateJvmExpression instanceof Boolean) {
            return (Boolean) objEvaluateJvmExpression;
        }
        return null;
    }

    String reflectListJvm(String str) {
        boolean z;
        boolean z2;
        Object objEvaluateJvmExpression = evaluateJvmExpression(str);
        if (objEvaluateJvmExpression == null) {
            return null;
        }
        Class<?> cls = objEvaluateJvmExpression instanceof Class ? (Class) objEvaluateJvmExpression : objEvaluateJvmExpression.getClass();
        StringBuilder sb = new StringBuilder();
        Field[] fields = cls.getFields();
        int length = fields.length;
        int i = 0;
        int i2 = 0;
        while (true) {
            z = true;
            if (i2 >= length) {
                z2 = false;
                break;
            }
            String str2 = "F\t" + fields[i2].getName() + "\n";
            if (sb.length() + str2.length() > 32768) {
                z2 = true;
                break;
            }
            sb.append(str2);
            i2++;
        }
        if (!z2) {
            Method[] methods = cls.getMethods();
            int length2 = methods.length;
            while (true) {
                if (i >= length2) {
                    z = z2;
                    break;
                }
                String str3 = "M\t" + methodDescriptor(methods[i]) + "\n";
                if (sb.length() + str3.length() > 32768) {
                    break;
                }
                sb.append(str3);
                i++;
            }
        } else {
            z = z2;
            break;
        }
        if (z) {
            sb.append("...\n");
        }
        return sb.toString();
    }

    private static String methodDescriptor(Method method) {
        StringBuilder sb = new StringBuilder();
        sb.append(method.getName());
        sb.append('(');
        Class<?>[] parameterTypes = method.getParameterTypes();
        for (int i = 0; i < parameterTypes.length; i++) {
            if (i > 0) {
                sb.append(',');
            }
            sb.append(parameterTypes[i].getName());
        }
        sb.append("):");
        sb.append(method.getReturnType().getName());
        return sb.toString();
    }

    static {
        HashSet hashSet = new HashSet();
        hashSet.add("android.provider.Settings$Global");
        hashSet.add("android.provider.Settings$Secure");
        hashSet.add("android.provider.Settings$System");
        SETTINGS_ROOTS = Collections.unmodifiableSet(hashSet);
        HashSet hashSet2 = new HashSet();
        hashSet2.addAll(Arrays.asList("getInt", "getString", "getFloat", "getLong"));
        SETTINGS_GETTERS = Collections.unmodifiableSet(hashSet2);
    }

    /* JADX WARN: Code restructure failed: missing block: B:21:0x004d, code lost:
    
        if (r1 == null) goto L22;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    java.lang.Object resolvePath(java.lang.String r8) {
        /*
            r7 = this;
            r0 = 0
            if (r8 == 0) goto L91
            boolean r1 = r8.isEmpty()
            if (r1 == 0) goto Lb
            goto L91
        Lb:
            java.util.List r8 = tokenize(r8)
            boolean r1 = r8.isEmpty()
            if (r1 != 0) goto L91
            int r1 = r8.size()
            r2 = 32
            if (r1 <= r2) goto L1f
            goto L91
        L1f:
            r1 = 0
            java.lang.Object r2 = r8.get(r1)
            java.lang.String r2 = (java.lang.String) r2
            java.lang.String r3 = "context"
            boolean r3 = r3.equals(r2)
            r4 = 1
            if (r3 == 0) goto L32
            android.content.Context r1 = r7.context
            goto L7a
        L32:
            java.lang.String r3 = "stickyIntent("
            boolean r3 = r2.startsWith(r3)
            if (r3 == 0) goto L50
            java.lang.String r1 = extractStringArg(r2)
            if (r1 != 0) goto L42
            return r0
        L42:
            android.content.Context r2 = r7.context     // Catch: java.lang.Throwable -> L4f
            android.content.IntentFilter r3 = new android.content.IntentFilter     // Catch: java.lang.Throwable -> L4f
            r3.<init>(r1)     // Catch: java.lang.Throwable -> L4f
            android.content.Intent r1 = r2.registerReceiver(r0, r3)     // Catch: java.lang.Throwable -> L4f
            if (r1 != 0) goto L7a
        L4f:
            return r0
        L50:
            int r2 = r8.size()
        L54:
            r3 = -1
            if (r2 < r4) goto L75
            int r5 = r2 + (-1)
            java.lang.Object r5 = r8.get(r5)
            java.lang.String r5 = (java.lang.String) r5
            r6 = 40
            int r5 = r5.indexOf(r6)
            if (r5 == r3) goto L68
            goto L72
        L68:
            java.lang.String r3 = join(r8, r1, r2)
            java.lang.Class r1 = java.lang.Class.forName(r3)     // Catch: java.lang.ClassNotFoundException -> L72
            r4 = r2
            goto L77
        L72:
            int r2 = r2 + (-1)
            goto L54
        L75:
            r1 = r0
            r4 = r3
        L77:
            if (r1 != 0) goto L7a
            return r0
        L7a:
            int r2 = r8.size()
            if (r4 >= r2) goto L90
            if (r1 != 0) goto L83
            return r0
        L83:
            java.lang.Object r2 = r8.get(r4)
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Object r1 = r7.dispatchSegment(r1, r2)
            int r4 = r4 + 1
            goto L7a
        L90:
            return r1
        L91:
            return r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.unity3d.coherence.Coherence.resolvePath(java.lang.String):java.lang.Object");
    }

    private Object dispatchSegment(Object obj, String str) {
        int iIndexOf = str.indexOf(40);
        if (iIndexOf == -1) {
            return resolveFieldOrZeroArgMethod(obj, str);
        }
        String strSubstring = str.substring(0, iIndexOf);
        String strExtractStringArg = extractStringArg(str);
        if (strExtractStringArg == null) {
            return null;
        }
        return resolveMethodWithStringArg(obj, strSubstring, strExtractStringArg);
    }

    private static Object resolveFieldOrZeroArgMethod(Object obj, String str) {
        boolean z = obj instanceof Class;
        Class<?> cls = z ? (Class) obj : obj.getClass();
        if (z) {
            obj = null;
        }
        try {
            try {
                return cls.getField(str).get(obj);
            } catch (IllegalAccessException | NoSuchMethodException | InvocationTargetException unused) {
                return null;
            }
        } catch (IllegalAccessException unused2) {
            return null;
        } catch (NoSuchFieldException unused3) {
            return cls.getMethod(str, null).invoke(obj, null);
        }
    }

    private Object resolveMethodWithStringArg(Object obj, String str, String str2) {
        boolean z = obj instanceof Class;
        Class<?> cls = z ? (Class) obj : obj.getClass();
        if (z) {
            obj = null;
        }
        if (obj == null && SETTINGS_ROOTS.contains(cls.getName()) && SETTINGS_GETTERS.contains(str)) {
            try {
                return cls.getMethod(str, ContentResolver.class, String.class).invoke(null, this.context.getContentResolver(), str2);
            } catch (IllegalAccessException | NoSuchMethodException | InvocationTargetException unused) {
                return null;
            }
        }
        try {
            return cls.getMethod(str, String.class).invoke(obj, str2);
        } catch (IllegalAccessException | NoSuchMethodException | InvocationTargetException unused2) {
            return null;
        }
    }

    static List<String> tokenize(String str) {
        return splitOnTopLevel(FilenameUtils.EXTENSION_SEPARATOR, str, false);
    }

    static List<String> splitOnTopLevel(char c, String str, boolean z) {
        ArrayList arrayList = new ArrayList();
        StringBuilder sb = new StringBuilder();
        boolean z2 = false;
        boolean z3 = false;
        int i = 0;
        for (int i2 = 0; i2 < str.length(); i2++) {
            char cCharAt = str.charAt(i2);
            if (z2) {
                sb.append(cCharAt);
                z2 = false;
            } else if (z3) {
                if (cCharAt == '\\') {
                    z2 = true;
                } else if (cCharAt == '\"') {
                    z3 = false;
                }
                sb.append(cCharAt);
            } else if (cCharAt == '\"') {
                sb.append(cCharAt);
                z3 = true;
            } else if (cCharAt == '(') {
                i++;
                sb.append(cCharAt);
            } else if (cCharAt == ')') {
                if (i > 0) {
                    i--;
                }
                sb.append(cCharAt);
            } else if (cCharAt == c && i == 0) {
                if (z || sb.length() > 0) {
                    arrayList.add(sb.toString());
                }
                sb.setLength(0);
            } else {
                sb.append(cCharAt);
            }
        }
        if (!z && sb.length() <= 0) {
            return arrayList;
        }
        arrayList.add(sb.toString());
        return arrayList;
    }

    Object evaluateJvmExpression(String str) {
        if (str == null || str.isEmpty() || str.length() > 4096) {
            return null;
        }
        try {
            List<String> listSplitOnTopLevel = splitOnTopLevel(';', str, true);
            if (!listSplitOnTopLevel.isEmpty() && listSplitOnTopLevel.size() <= 17) {
                HashMap map = new HashMap();
                Iterator<String> it = listSplitOnTopLevel.iterator();
                Object objEvaluateExpr = null;
                while (it.hasNext()) {
                    String strTrim = it.next().trim();
                    if (!strTrim.isEmpty()) {
                        if (strTrim.startsWith("let ") || strTrim.startsWith("let\t")) {
                            int i = topLevelEqualsIdx(strTrim);
                            if (i < 0) {
                                return null;
                            }
                            String strTrim2 = strTrim.substring(3, i).trim();
                            if (!isValidIdent(strTrim2)) {
                                return null;
                            }
                            map.put(strTrim2, evaluateExpr(strTrim.substring(i + 1).trim(), map));
                        } else {
                            objEvaluateExpr = evaluateExpr(strTrim, map);
                        }
                    }
                }
                return objEvaluateExpr;
            }
        } catch (Exception unused) {
        }
        return null;
    }

    /* JADX WARN: Code restructure failed: missing block: B:59:0x00de, code lost:
    
        if (r1 == null) goto L60;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private java.lang.Object evaluateExpr(java.lang.String r8, java.util.Map<java.lang.String, java.lang.Object> r9) throws java.lang.ClassNotFoundException {
        /*
            Method dump skipped, instruction units count: 290
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.unity3d.coherence.Coherence.evaluateExpr(java.lang.String, java.util.Map):java.lang.Object");
    }

    private Object dispatchSegmentV2(Object obj, String str, Map<String, Object> map) {
        List<Object> andEvalArgs;
        int iIndexOf = str.indexOf(40);
        if (iIndexOf == -1) {
            return resolveFieldOrZeroArgMethod(obj, str);
        }
        String strSubstring = str.substring(0, iIndexOf);
        int iLastIndexOf = str.lastIndexOf(41);
        if (iLastIndexOf >= iIndexOf && (andEvalArgs = parseAndEvalArgs(str.substring(iIndexOf + 1, iLastIndexOf), map)) != null) {
            return resolveMethodWithArgs(obj, strSubstring, andEvalArgs);
        }
        return null;
    }

    private Object evalSingleArgInside(String str, Map<String, Object> map) {
        int iIndexOf = str.indexOf(40);
        int iLastIndexOf = str.lastIndexOf(41);
        if (iIndexOf == -1 || iLastIndexOf < iIndexOf) {
            return null;
        }
        return evaluateExpr(str.substring(iIndexOf + 1, iLastIndexOf), map);
    }

    private List<Object> parseAndEvalArgs(String str, Map<String, Object> map) {
        String strTrim = str.trim();
        if (strTrim.isEmpty()) {
            return Collections.EMPTY_LIST;
        }
        List<String> listSplitOnTopLevel = splitOnTopLevel(',', strTrim, false);
        ArrayList arrayList = new ArrayList(listSplitOnTopLevel.size());
        Iterator<String> it = listSplitOnTopLevel.iterator();
        while (it.hasNext()) {
            String strTrim2 = it.next().trim();
            int i = topLevelLabelColonIdx(strTrim2);
            if (i > 0 && isValidIdent(strTrim2.substring(0, i).trim())) {
                strTrim2 = strTrim2.substring(i + 1).trim();
            }
            arrayList.add(evaluateExpr(strTrim2, map));
        }
        return arrayList;
    }

    private Object resolveMethodWithArgs(Object obj, String str, List<Object> list) {
        boolean z = obj instanceof Class;
        Class<?> cls = z ? (Class) obj : obj.getClass();
        if (z) {
            obj = null;
        }
        if (obj == null && SETTINGS_ROOTS.contains(cls.getName()) && SETTINGS_GETTERS.contains(str) && (list.isEmpty() || !(list.get(0) instanceof ContentResolver))) {
            ArrayList arrayList = new ArrayList(list.size() + 1);
            arrayList.add(this.context.getContentResolver());
            arrayList.addAll(list);
            Object objInvokeBestOverload = invokeBestOverload(cls, str, arrayList, null);
            if (objInvokeBestOverload != null) {
                return objInvokeBestOverload;
            }
        }
        return invokeBestOverload(cls, str, list, obj);
    }

    private static Object invokeBestOverload(Class<?> cls, String str, List<Object> list, Object obj) {
        int iMatchSpecificity;
        int i = Integer.MIN_VALUE;
        Method method = null;
        boolean z = false;
        for (Method method2 : cls.getMethods()) {
            if (method2.getName().equals(str)) {
                Class<?>[] parameterTypes = method2.getParameterTypes();
                if (parameterTypes.length == list.size() && (iMatchSpecificity = matchSpecificity(parameterTypes, list)) >= 0) {
                    if (iMatchSpecificity > i) {
                        z = false;
                        method = method2;
                        i = iMatchSpecificity;
                    } else if (iMatchSpecificity == i) {
                        z = true;
                    }
                }
            }
        }
        if (method != null && !z) {
            try {
                Object[] objArrCoerceArgs = coerceArgs(method.getParameterTypes(), list);
                if (objArrCoerceArgs == null) {
                    return null;
                }
                return method.invoke(obj, objArrCoerceArgs);
            } catch (IllegalAccessException | InvocationTargetException unused) {
            }
        }
        return null;
    }

    private static int matchSpecificity(Class<?>[] clsArr, List<Object> list) {
        int i = 0;
        for (int i2 = 0; i2 < clsArr.length; i2++) {
            int iAssignabilityScore = assignabilityScore(clsArr[i2], list.get(i2));
            if (iAssignabilityScore < 0) {
                return -1;
            }
            i += iAssignabilityScore;
        }
        return i;
    }

    private static int assignabilityScore(Class<?> cls, Object obj) {
        if (obj == null) {
            return cls.isPrimitive() ? -1 : 1;
        }
        if (obj instanceof String) {
            if (cls == String.class) {
                return 100;
            }
            if (cls == CharSequence.class) {
                return 60;
            }
            return cls == Object.class ? 40 : -1;
        }
        if (obj instanceof Long) {
            long jLongValue = ((Long) obj).longValue();
            if (cls == Long.TYPE || cls == Long.class) {
                return 100;
            }
            if (cls == Integer.TYPE || cls == Integer.class) {
                return (jLongValue < SieveCacheKt.NodeMetaAndPreviousMask || jLongValue > SieveCacheKt.NodeLinkMask) ? -1 : 90;
            }
            if (cls == Short.TYPE || cls == Short.class) {
                return (jLongValue < -32768 || jLongValue > 32767) ? -1 : 80;
            }
            if (cls == Byte.TYPE || cls == Byte.class) {
                return (jLongValue < -128 || jLongValue > 127) ? -1 : 70;
            }
            if (cls == Double.TYPE || cls == Double.class) {
                return 60;
            }
            if (cls == Float.TYPE || cls == Float.class) {
                return 55;
            }
            if (cls == Number.class) {
                return 50;
            }
            return cls == Object.class ? 40 : -1;
        }
        if (obj instanceof Boolean) {
            if (cls == Boolean.TYPE || cls == Boolean.class) {
                return 100;
            }
            return cls == Object.class ? 40 : -1;
        }
        if (cls.isInstance(obj)) {
            return cls == obj.getClass() ? 100 : 50;
        }
        return -1;
    }

    private static Object[] coerceArgs(Class<?>[] clsArr, List<Object> list) {
        Object[] objArr = new Object[clsArr.length];
        for (int i = 0; i < clsArr.length; i++) {
            Object obj = list.get(i);
            Class<?> cls = clsArr[i];
            if (obj == null) {
                if (cls.isPrimitive()) {
                    return null;
                }
                objArr[i] = null;
            } else if (obj instanceof Long) {
                long jLongValue = ((Long) obj).longValue();
                if (cls == Integer.TYPE || cls == Integer.class) {
                    objArr[i] = Integer.valueOf((int) jLongValue);
                } else if (cls == Short.TYPE || cls == Short.class) {
                    objArr[i] = Short.valueOf((short) jLongValue);
                } else if (cls == Byte.TYPE || cls == Byte.class) {
                    objArr[i] = Byte.valueOf((byte) jLongValue);
                } else if (cls == Float.TYPE || cls == Float.class) {
                    objArr[i] = Float.valueOf(jLongValue);
                } else if (cls == Double.TYPE || cls == Double.class) {
                    objArr[i] = Double.valueOf(jLongValue);
                } else {
                    objArr[i] = obj;
                }
            } else {
                objArr[i] = obj;
            }
        }
        return objArr;
    }

    private static int topLevelEqualsIdx(String str) {
        boolean z = false;
        boolean z2 = false;
        int i = 0;
        for (int i2 = 0; i2 < str.length(); i2++) {
            char cCharAt = str.charAt(i2);
            if (z) {
                z = false;
            } else if (z2) {
                if (cCharAt == '\\') {
                    z = true;
                } else if (cCharAt == '\"') {
                    z2 = false;
                }
            } else if (cCharAt == '\"') {
                z2 = true;
            } else if (cCharAt == '(') {
                i++;
            } else if (cCharAt != ')') {
                if (cCharAt == '=' && i == 0) {
                    return i2;
                }
            } else if (i > 0) {
                i--;
            }
        }
        return -1;
    }

    private static int topLevelLabelColonIdx(String str) {
        boolean z = false;
        boolean z2 = false;
        int i = 0;
        for (int i2 = 0; i2 < str.length(); i2++) {
            char cCharAt = str.charAt(i2);
            if (z) {
                z = false;
            } else if (z2) {
                if (cCharAt == '\\') {
                    z = true;
                } else if (cCharAt == '\"') {
                    z2 = false;
                }
            } else if (cCharAt == '\"') {
                z2 = true;
            } else if (cCharAt == '(') {
                i++;
            } else if (cCharAt == ')') {
                if (i > 0) {
                    i--;
                }
            } else if (i != 0) {
                continue;
            } else {
                if (cCharAt == ':') {
                    return i2;
                }
                if (cCharAt == '.' || cCharAt == ',') {
                    return -1;
                }
            }
        }
        return -1;
    }

    private static boolean isValidIdent(String str) {
        if (str == null || str.isEmpty()) {
            return false;
        }
        char cCharAt = str.charAt(0);
        if (!Character.isLetter(cCharAt) && cCharAt != '_') {
            return false;
        }
        for (int i = 1; i < str.length(); i++) {
            char cCharAt2 = str.charAt(i);
            if (!Character.isLetterOrDigit(cCharAt2) && cCharAt2 != '_' && cCharAt2 != '$') {
                return false;
            }
        }
        return true;
    }

    private static boolean looksLikeInt(String str) {
        if (str == null || str.isEmpty()) {
            return false;
        }
        int i = str.charAt(0) == '-' ? 1 : 0;
        if (i >= str.length()) {
            return false;
        }
        while (i < str.length()) {
            if (!Character.isDigit(str.charAt(i))) {
                return false;
            }
            i++;
        }
        return true;
    }

    /* JADX WARN: Code duplicated, block: B:27:0x005b  */
    static String parseStringLiteral(String str) {
        int i;
        StringBuilder sb = new StringBuilder(str.length() - 2);
        int length = str.length() - 1;
        int i2 = 1;
        while (i2 < length) {
            char cCharAt = str.charAt(i2);
            if (cCharAt == '\\' && (i = i2 + 1) < length) {
                char cCharAt2 = str.charAt(i);
                if (cCharAt2 == '\"') {
                    sb.append(Typography.quote);
                } else if (cCharAt2 == '0') {
                    sb.append((char) 0);
                } else if (cCharAt2 == '\\') {
                    sb.append(IOUtils.DIR_SEPARATOR_WINDOWS);
                } else if (cCharAt2 == 'n') {
                    sb.append('\n');
                } else if (cCharAt2 == 'r') {
                    sb.append('\r');
                } else if (cCharAt2 == 't') {
                    sb.append('\t');
                } else {
                    sb.append(cCharAt);
                }
                i2 = i;
            } else {
                sb.append(cCharAt);
            }
            i2++;
        }
        return sb.toString();
    }

    private static boolean isBalancedOuterParen(String str) {
        if (str.length() < 2) {
            return false;
        }
        int i = 0;
        boolean z = false;
        boolean z2 = false;
        for (int i2 = 0; i2 < str.length(); i2++) {
            char cCharAt = str.charAt(i2);
            if (z) {
                z = false;
            } else if (z2) {
                if (cCharAt == '\\') {
                    z = true;
                } else if (cCharAt == '\"') {
                    z2 = false;
                }
            } else if (cCharAt == '\"') {
                z2 = true;
            } else if (cCharAt == '(') {
                i++;
            } else if (cCharAt == ')' && (i = i - 1) == 0 && i2 < str.length() - 1) {
                return false;
            }
        }
        return i == 0;
    }

    static String extractStringArg(String str) {
        int i;
        char cCharAt;
        int iIndexOf = str.indexOf(40);
        int iLastIndexOf = str.lastIndexOf(41);
        if (iIndexOf != -1 && iLastIndexOf != -1 && iLastIndexOf >= iIndexOf) {
            String strTrim = str.substring(iIndexOf + 1, iLastIndexOf).trim();
            if (strTrim.length() >= 2 && strTrim.startsWith("\"") && strTrim.endsWith("\"")) {
                String strSubstring = strTrim.substring(1, strTrim.length() - 1);
                StringBuilder sb = new StringBuilder(strSubstring.length());
                int i2 = 0;
                while (i2 < strSubstring.length()) {
                    char cCharAt2 = strSubstring.charAt(i2);
                    if (cCharAt2 == '\\' && (i = i2 + 1) < strSubstring.length() && ((cCharAt = strSubstring.charAt(i)) == '\"' || cCharAt == '\\')) {
                        sb.append(cCharAt);
                        i2 = i;
                    } else {
                        sb.append(cCharAt2);
                    }
                    i2++;
                }
                return sb.toString();
            }
        }
        return null;
    }

    private static String join(List<String> list, int i, int i2) {
        StringBuilder sb = new StringBuilder();
        for (int i3 = i; i3 < i2; i3++) {
            if (i3 > i) {
                sb.append(FilenameUtils.EXTENSION_SEPARATOR);
            }
            sb.append(list.get(i3));
        }
        return sb.toString();
    }
}
