package com.pushwoosh.k;

import android.content.Context;
import androidx.core.util.Pair;
import com.google.firebase.perf.network.FirebasePerfUrlConnection;
import com.pushwoosh.e0.e;
import com.pushwoosh.inapp.network.model.Resource;
import com.pushwoosh.internal.event.EventBus;
import com.pushwoosh.internal.utils.PWLog;
import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.net.HttpURLConnection;
import java.net.MalformedURLException;
import java.net.URL;
import java.net.URLConnection;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.zip.ZipEntry;
import java.util.zip.ZipFile;
import java.util.zip.ZipInputStream;

/* JADX INFO: loaded from: classes6.dex */
public final class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Object f5234a = new Object();
    public final com.pushwoosh.m.a b;

    public c(com.pushwoosh.m.a aVar) {
        this.b = aVar;
    }

    public final a a(List list) {
        a aVar;
        if (list == null || list.isEmpty()) {
            return new a();
        }
        synchronized (this.f5234a) {
            ArrayList arrayList = new ArrayList(list.size());
            ArrayList arrayList2 = new ArrayList();
            Iterator it = list.iterator();
            while (it.hasNext()) {
                Resource resource = (Resource) it.next();
                if (a(resource)) {
                    arrayList.add(resource);
                    EventBus.sendEvent(new com.pushwoosh.f.b());
                } else {
                    arrayList2.add(resource);
                    EventBus.sendEvent(new com.pushwoosh.f.b());
                }
            }
            aVar = new a(arrayList);
        }
        return aVar;
    }

    /* JADX WARN: Code duplicated, block: B:101:0x01f6  */
    /* JADX WARN: Code duplicated, block: B:108:0x022d  */
    /* JADX WARN: Code duplicated, block: B:115:0x0252 A[Catch: all -> 0x02be, IOException -> 0x02c0, FileNotFoundException -> 0x02c2, TryCatch #13 {all -> 0x02be, blocks: (B:112:0x0246, B:113:0x024c, B:115:0x0252, B:117:0x0265, B:119:0x026b, B:120:0x026f, B:126:0x0292, B:141:0x02ad, B:142:0x02b0, B:138:0x02a7, B:143:0x02b1, B:144:0x02b8), top: B:214:0x0246 }] */
    /* JADX WARN: Code duplicated, block: B:117:0x0265 A[Catch: all -> 0x02be, IOException -> 0x02c0, FileNotFoundException -> 0x02c2, TryCatch #13 {all -> 0x02be, blocks: (B:112:0x0246, B:113:0x024c, B:115:0x0252, B:117:0x0265, B:119:0x026b, B:120:0x026f, B:126:0x0292, B:141:0x02ad, B:142:0x02b0, B:138:0x02a7, B:143:0x02b1, B:144:0x02b8), top: B:214:0x0246 }] */
    /* JADX WARN: Code duplicated, block: B:124:0x028b A[Catch: all -> 0x0296, IOException -> 0x0298, LOOP:1: B:220:0x0285->B:124:0x028b, LOOP_END, TryCatch #18 {IOException -> 0x0298, blocks: (B:122:0x0285, B:124:0x028b, B:125:0x028f), top: B:220:0x0285 }] */
    /* JADX WARN: Code duplicated, block: B:175:0x02ee  */
    /* JADX WARN: Code duplicated, block: B:176:0x02f2  */
    /* JADX WARN: Code duplicated, block: B:179:0x0313  */
    /* JADX WARN: Code duplicated, block: B:181:0x0329  */
    /* JADX WARN: Code duplicated, block: B:202:0x0235 A[EXC_TOP_SPLITTER, PHI: r7
  0x0235: PHI (r7v26 ??) = (r7v38 ??), (r7v39 ??) binds: [B:107:0x022b, B:109:0x0231] A[DONT_GENERATE, DONT_INLINE], SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:204:0x021c A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:211:0x013e A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:213:0x0139 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:216:0x02b9 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:218:0x0154 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:222:0x014f A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:232:0x02e6 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:252:0x02b1 A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:253:0x026f A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:254:0x026b A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:256:0x028f A[EDGE_INSN: B:256:0x028f->B:125:0x028f BREAK  A[LOOP:1: B:220:0x0285->B:124:0x028b], SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:265:0x0146 A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:267:? A[Catch: Exception -> 0x0164, SYNTHETIC, TRY_LEAVE, TryCatch #12 {Exception -> 0x0164, blocks: (B:24:0x00db, B:26:0x00e0, B:38:0x010f, B:36:0x0109, B:37:0x010c, B:71:0x014f, B:73:0x0154, B:75:0x0159, B:76:0x015c, B:61:0x0139, B:63:0x013e, B:65:0x0143, B:79:0x0160, B:84:0x0168, B:86:0x016d), top: B:213:0x0139 }] */
    /* JADX WARN: Code duplicated, block: B:65:0x0143 A[Catch: Exception -> 0x0164, TRY_ENTER, TRY_LEAVE, TryCatch #12 {Exception -> 0x0164, blocks: (B:24:0x00db, B:26:0x00e0, B:38:0x010f, B:36:0x0109, B:37:0x010c, B:71:0x014f, B:73:0x0154, B:75:0x0159, B:76:0x015c, B:61:0x0139, B:63:0x013e, B:65:0x0143, B:79:0x0160, B:84:0x0168, B:86:0x016d), top: B:213:0x0139 }] */
    /* JADX WARN: Code duplicated, block: B:75:0x0159 A[Catch: Exception -> 0x0164, TRY_ENTER, TryCatch #12 {Exception -> 0x0164, blocks: (B:24:0x00db, B:26:0x00e0, B:38:0x010f, B:36:0x0109, B:37:0x010c, B:71:0x014f, B:73:0x0154, B:75:0x0159, B:76:0x015c, B:61:0x0139, B:63:0x013e, B:65:0x0143, B:79:0x0160, B:84:0x0168, B:86:0x016d), top: B:213:0x0139 }] */
    /* JADX WARN: Code duplicated, block: B:92:0x0187  */
    /* JADX WARN: Code duplicated, block: B:95:0x01a8  */
    /* JADX WARN: Code duplicated, block: B:97:0x01c8  */
    /* JADX WARN: Code duplicated, block: B:99:0x01d3  */
    /* JADX WARN: Instruction removed from duplicated block: B:101:0x01f6, please report this as an issue */
    /* JADX WARN: Instruction removed from duplicated block: B:179:0x0313, please report this as an issue */
    /* JADX WARN: Instruction removed from duplicated block: B:181:0x0329, please report this as an issue */
    /* JADX WARN: Instruction removed from duplicated block: B:92:0x0187, please report this as an issue */
    /* JADX WARN: Instruction removed from duplicated block: B:95:0x01a8, please report this as an issue */
    /* JADX WARN: Instruction removed from duplicated block: B:99:0x01d3, please report this as an issue */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r1v13 */
    /* JADX WARN: Type inference failed for: r1v4 */
    /* JADX WARN: Type inference failed for: r1v5 */
    /* JADX WARN: Type inference failed for: r7v26 */
    /* JADX WARN: Type inference failed for: r7v27 */
    /* JADX WARN: Type inference failed for: r7v28 */
    /* JADX WARN: Type inference failed for: r7v29 */
    /* JADX WARN: Type inference failed for: r7v30 */
    /* JADX WARN: Type inference failed for: r7v31 */
    /* JADX WARN: Type inference failed for: r7v32 */
    /* JADX WARN: Type inference failed for: r7v33, types: [java.util.zip.ZipInputStream] */
    /* JADX WARN: Type inference failed for: r7v34 */
    /* JADX WARN: Type inference failed for: r7v35, types: [java.util.zip.ZipInputStream] */
    /* JADX WARN: Type inference failed for: r7v36, types: [java.io.InputStream, java.util.zip.ZipInputStream] */
    /* JADX WARN: Type inference failed for: r7v38 */
    /* JADX WARN: Type inference failed for: r7v39 */
    /* JADX WARN: Type inference failed for: r7v40 */
    /* JADX WARN: Type inference failed for: r7v41 */
    /* JADX WARN: Type inference failed for: r7v42 */
    /* JADX WARN: Type inference failed for: r7v43 */
    /* JADX WARN: Type inference failed for: r7v44 */
    public final boolean a(Resource resource) throws Throwable {
        File file;
        HttpURLConnection httpURLConnection;
        BufferedOutputStream bufferedOutputStream;
        IOException e;
        BufferedInputStream bufferedInputStream;
        File fileA;
        boolean zIsDirectory;
        ?? r7;
        ?? zipInputStream;
        ?? r8;
        byte[] bArr;
        String canonicalPath;
        ZipEntry nextEntry;
        File file2;
        BufferedOutputStream bufferedOutputStream2;
        int i;
        boolean zMkdirs;
        String str;
        String code = resource.getCode();
        File fileA2 = this.b.a(code);
        if (fileA2 != null && fileA2.exists()) {
            PWLog.noise("[InApp]InAppDownloader", "Deleting old files for resource: " + code);
            e.a(fileA2);
        }
        PWLog.noise("[InApp]InAppDownloader", "Downloading ZIP file for resource: " + resource.getCode() + " from: " + resource.getUrl());
        EventBus.sendEvent(new com.pushwoosh.f.b());
        Context context = this.b.f5239a;
        File file3 = null;
        file3 = null;
        file3 = null;
        ?? r1 = 0;
        file3 = null;
        File cacheDir = context == null ? null : context.getCacheDir();
        if (cacheDir == null) {
            PWLog.error("[InApp]InAppDownloader", "Cache directory is not available");
        } else {
            file = new File(cacheDir, resource.getCode() + ".zip");
            String url = resource.getUrl();
            BufferedInputStream bufferedInputStream2 = null;
            BufferedOutputStream bufferedOutputStream3 = null;
            int i2 = 0;
            while (true) {
                int i3 = i2 + 1;
                if (i2 < 3) {
                    try {
                        httpURLConnection = (HttpURLConnection) ((URLConnection) FirebasePerfUrlConnection.instrument(new URL(url).openConnection()));
                        try {
                            httpURLConnection.setConnectTimeout(30000);
                            httpURLConnection.setReadTimeout(60000);
                            httpURLConnection.connect();
                            if (httpURLConnection.getResponseCode() != 200) {
                                PWLog.error("FileUtils", "fail download: " + url + "  responseCode: " + httpURLConnection.getResponseCode());
                                if (bufferedInputStream2 != null) {
                                    try {
                                        bufferedInputStream2.close();
                                    } catch (IOException unused) {
                                    }
                                }
                                if (bufferedOutputStream3 != null) {
                                    try {
                                        bufferedOutputStream3.close();
                                    } catch (IOException unused2) {
                                    }
                                }
                                file = null;
                            } else {
                                bufferedInputStream = new BufferedInputStream(httpURLConnection.getInputStream());
                                try {
                                    BufferedOutputStream bufferedOutputStream4 = new BufferedOutputStream(new FileOutputStream(file));
                                    try {
                                        byte[] bArr2 = new byte[1024];
                                        while (true) {
                                            int i4 = bufferedInputStream.read(bArr2);
                                            if (i4 == -1) {
                                                break;
                                            }
                                            bufferedOutputStream4.write(bArr2, 0, i4);
                                        }
                                        bufferedOutputStream4.flush();
                                        try {
                                            bufferedInputStream.close();
                                        } catch (IOException unused3) {
                                        }
                                        try {
                                            bufferedOutputStream4.close();
                                        } catch (IOException unused4) {
                                        }
                                    } catch (MalformedURLException unused5) {
                                        bufferedOutputStream3 = bufferedOutputStream4;
                                        bufferedInputStream2 = bufferedInputStream;
                                        if (bufferedInputStream2 != null) {
                                            try {
                                                bufferedInputStream2.close();
                                            } catch (IOException unused6) {
                                            }
                                        }
                                        if (bufferedOutputStream3 != null) {
                                            try {
                                                bufferedOutputStream3.close();
                                            } catch (IOException unused7) {
                                            }
                                        }
                                        if (httpURLConnection != null) {
                                            httpURLConnection.disconnect();
                                        }
                                        file = null;
                                    } catch (IOException e2) {
                                        e = e2;
                                        bufferedOutputStream = bufferedOutputStream4;
                                        bufferedInputStream2 = bufferedInputStream;
                                        try {
                                            PWLog.exception(e);
                                            if (bufferedInputStream2 != null) {
                                                try {
                                                    try {
                                                        bufferedInputStream2.close();
                                                    } catch (Exception e3) {
                                                        PWLog.error("FileUtils", "Failed to download " + url, e3);
                                                    }
                                                } catch (IOException unused8) {
                                                }
                                            }
                                            if (bufferedOutputStream != null) {
                                                try {
                                                    bufferedOutputStream.close();
                                                } catch (IOException unused9) {
                                                }
                                            }
                                            if (httpURLConnection != null) {
                                                httpURLConnection.disconnect();
                                            }
                                            i2 = i3;
                                            bufferedOutputStream3 = bufferedOutputStream;
                                        } catch (Throwable th) {
                                            th = th;
                                            bufferedOutputStream3 = bufferedOutputStream;
                                            bufferedInputStream = bufferedInputStream2;
                                            if (bufferedInputStream != null) {
                                                try {
                                                    bufferedInputStream.close();
                                                } catch (IOException unused10) {
                                                }
                                            }
                                            if (bufferedOutputStream3 != null) {
                                                try {
                                                    bufferedOutputStream3.close();
                                                } catch (IOException unused11) {
                                                }
                                            }
                                            if (httpURLConnection != null) {
                                                httpURLConnection.disconnect();
                                                throw th;
                                            }
                                            throw th;
                                        }
                                    } catch (Throwable th2) {
                                        th = th2;
                                        bufferedOutputStream3 = bufferedOutputStream4;
                                        if (bufferedInputStream != null) {
                                            bufferedInputStream.close();
                                        }
                                        if (bufferedOutputStream3 != null) {
                                            bufferedOutputStream3.close();
                                        }
                                        if (httpURLConnection != null) {
                                            httpURLConnection.disconnect();
                                            throw th;
                                        }
                                        throw th;
                                    }
                                } catch (MalformedURLException unused12) {
                                } catch (IOException e4) {
                                    BufferedOutputStream bufferedOutputStream5 = bufferedOutputStream3;
                                    e = e4;
                                    bufferedInputStream2 = bufferedInputStream;
                                    bufferedOutputStream = bufferedOutputStream5;
                                } catch (Throwable th3) {
                                    th = th3;
                                }
                            }
                            httpURLConnection.disconnect();
                        } catch (MalformedURLException unused13) {
                        } catch (IOException e5) {
                            e = e5;
                            IOException iOException = e;
                            bufferedOutputStream = bufferedOutputStream3;
                            e = iOException;
                            PWLog.exception(e);
                            if (bufferedInputStream2 != null) {
                                bufferedInputStream2.close();
                            }
                            if (bufferedOutputStream != null) {
                                bufferedOutputStream.close();
                            }
                            if (httpURLConnection != null) {
                                httpURLConnection.disconnect();
                            }
                            i2 = i3;
                            bufferedOutputStream3 = bufferedOutputStream;
                        } catch (Throwable th4) {
                            th = th4;
                            bufferedInputStream = bufferedInputStream2;
                            if (bufferedInputStream != null) {
                                bufferedInputStream.close();
                            }
                            if (bufferedOutputStream3 != null) {
                                bufferedOutputStream3.close();
                            }
                            if (httpURLConnection != null) {
                                httpURLConnection.disconnect();
                                throw th;
                            }
                            throw th;
                        }
                    } catch (MalformedURLException unused14) {
                        httpURLConnection = null;
                    } catch (IOException e6) {
                        e = e6;
                        httpURLConnection = null;
                    } catch (Throwable th5) {
                        th = th5;
                        httpURLConnection = null;
                    }
                    if (file == null) {
                        PWLog.noise("[InApp]InAppDownloader", "ZIP file downloaded successfully for resource: " + resource.getCode());
                        EventBus.sendEvent(new com.pushwoosh.f.b());
                    }
                    if (file == null) {
                        PWLog.error("[InApp]InAppDownloader", "Failed to download ZIP file for resource: " + resource.getCode() + ", url: " + resource.getUrl());
                        return false;
                    }
                    if (!b.a(new Pair(file, resource))) {
                        file.delete();
                        PWLog.error("[InApp]InAppDownloader", "ZIP file validation failed (hash mismatch) for resource: " + resource.getCode() + ", url: " + resource.getUrl());
                        return false;
                    }
                    file.deleteOnExit();
                    PWLog.noise("[InApp]InAppDownloader", "Extracting ZIP file for resource: " + resource.getCode());
                    fileA = this.b.a(resource.getCode());
                    if (fileA != null) {
                        try {
                            try {
                                new ZipFile(file).close();
                            } catch (IOException unused15) {
                            }
                            e.a(fileA);
                            zIsDirectory = fileA.isDirectory();
                            r7 = zIsDirectory;
                            if (!zIsDirectory || (zMkdirs = fileA.mkdirs())) {
                                try {
                                    try {
                                        r7 = zMkdirs;
                                        zipInputStream = new ZipInputStream(new BufferedInputStream(new FileInputStream(file), 8192));
                                        try {
                                            try {
                                                bArr = new byte[8192];
                                                canonicalPath = fileA.getCanonicalPath();
                                                while (true) {
                                                    nextEntry = zipInputStream.getNextEntry();
                                                    if (nextEntry != null) {
                                                        file2 = new File(canonicalPath, nextEntry.getName());
                                                        if (file2.getCanonicalPath().startsWith(canonicalPath)) {
                                                            if (nextEntry.isDirectory()) {
                                                                file2.mkdir();
                                                            } else {
                                                                new File(file2.getParent()).mkdirs();
                                                                try {
                                                                    bufferedOutputStream2 = new BufferedOutputStream(new FileOutputStream(file2), 8192);
                                                                    while (true) {
                                                                        try {
                                                                            try {
                                                                                i = zipInputStream.read(bArr);
                                                                                if (i == -1) {
                                                                                    break;
                                                                                }
                                                                                bufferedOutputStream2.write(bArr, 0, i);
                                                                            } catch (IOException e7) {
                                                                                e = e7;
                                                                                PWLog.exception(e);
                                                                                file2.delete();
                                                                                if (bufferedOutputStream2 != null) {
                                                                                    bufferedOutputStream2.close();
                                                                                }
                                                                            }
                                                                        } catch (Throwable th6) {
                                                                            th = th6;
                                                                            if (bufferedOutputStream2 != null) {
                                                                                try {
                                                                                    bufferedOutputStream2.close();
                                                                                } catch (IOException unused16) {
                                                                                }
                                                                            }
                                                                            throw th;
                                                                        }
                                                                    }
                                                                    bufferedOutputStream2.flush();
                                                                    try {
                                                                        bufferedOutputStream2.close();
                                                                    } catch (IOException unused17) {
                                                                    }
                                                                } catch (IOException e8) {
                                                                    e = e8;
                                                                    bufferedOutputStream2 = null;
                                                                } catch (Throwable th7) {
                                                                    th = th7;
                                                                    bufferedOutputStream2 = null;
                                                                }
                                                            }
                                                        } else {
                                                            throw new SecurityException("Provided zip file path has Path Traversal Vulnerability");
                                                        }
                                                    } else {
                                                        try {
                                                            zipInputStream.close();
                                                        } catch (IOException unused18) {
                                                        }
                                                        file3 = fileA;
                                                        break;
                                                    }
                                                }
                                            } catch (Throwable th8) {
                                                th = th8;
                                                if (zipInputStream != 0) {
                                                    try {
                                                        zipInputStream.close();
                                                    } catch (IOException unused19) {
                                                    }
                                                }
                                                throw th;
                                            }
                                        } catch (FileNotFoundException e9) {
                                            e = e9;
                                            PWLog.error("FileUtils", e.getMessage(), e);
                                            r8 = zipInputStream;
                                            r7 = zipInputStream;
                                            if (zipInputStream != 0) {
                                                r8.close();
                                                r7 = r8;
                                            }
                                        } catch (IOException e10) {
                                            e = e10;
                                            PWLog.error("FileUtils", e.getMessage(), e);
                                            r7 = zipInputStream;
                                            if (zipInputStream != 0) {
                                                r8 = zipInputStream;
                                                r8.close();
                                                r7 = r8;
                                            }
                                        }
                                    } catch (Throwable th9) {
                                        th = th9;
                                        r1 = r7;
                                        zipInputStream = r1;
                                        if (zipInputStream != 0) {
                                            zipInputStream.close();
                                        }
                                        throw th;
                                    }
                                } catch (FileNotFoundException e11) {
                                    e = e11;
                                    zipInputStream = 0;
                                } catch (IOException e12) {
                                    e = e12;
                                    zipInputStream = 0;
                                } catch (Throwable th10) {
                                    th = th10;
                                    zipInputStream = r1;
                                    if (zipInputStream != 0) {
                                        zipInputStream.close();
                                    }
                                    throw th;
                                }
                            }
                        } catch (IOException unused20) {
                        }
                    }
                    if (file3 != null) {
                        str = "succeeded";
                    } else {
                        str = "failed";
                    }
                    PWLog.noise("[InApp]InAppDownloader", "ZIP extraction " + str + " for resource: " + resource.getCode());
                    if (file3 == null) {
                        PWLog.error("[InApp]InAppDownloader", "Failed to extract ZIP file for resource: " + resource.getCode());
                        return false;
                    }
                    PWLog.info("[InApp]InAppDownloader", "Successfully deployed resource: " + resource.getCode());
                    return true;
                }
                file = null;
                if (file == null) {
                    PWLog.noise("[InApp]InAppDownloader", "ZIP file downloaded successfully for resource: " + resource.getCode());
                    EventBus.sendEvent(new com.pushwoosh.f.b());
                }
                if (file == null) {
                    PWLog.error("[InApp]InAppDownloader", "Failed to download ZIP file for resource: " + resource.getCode() + ", url: " + resource.getUrl());
                    return false;
                }
                if (!b.a(new Pair(file, resource))) {
                    file.delete();
                    PWLog.error("[InApp]InAppDownloader", "ZIP file validation failed (hash mismatch) for resource: " + resource.getCode() + ", url: " + resource.getUrl());
                    return false;
                }
                file.deleteOnExit();
                PWLog.noise("[InApp]InAppDownloader", "Extracting ZIP file for resource: " + resource.getCode());
                fileA = this.b.a(resource.getCode());
                if (fileA != null) {
                    new ZipFile(file).close();
                    e.a(fileA);
                    zIsDirectory = fileA.isDirectory();
                    r7 = zIsDirectory;
                    if (!zIsDirectory) {
                        r7 = zMkdirs;
                        zipInputStream = new ZipInputStream(new BufferedInputStream(new FileInputStream(file), 8192));
                        bArr = new byte[8192];
                        canonicalPath = fileA.getCanonicalPath();
                        while (true) {
                            nextEntry = zipInputStream.getNextEntry();
                            if (nextEntry != null) {
                                file2 = new File(canonicalPath, nextEntry.getName());
                                if (file2.getCanonicalPath().startsWith(canonicalPath)) {
                                    if (nextEntry.isDirectory()) {
                                        file2.mkdir();
                                    } else {
                                        new File(file2.getParent()).mkdirs();
                                        bufferedOutputStream2 = new BufferedOutputStream(new FileOutputStream(file2), 8192);
                                        while (true) {
                                            i = zipInputStream.read(bArr);
                                            if (i == -1) {
                                                break;
                                                break;
                                            }
                                            bufferedOutputStream2.write(bArr, 0, i);
                                        }
                                        bufferedOutputStream2.flush();
                                        bufferedOutputStream2.close();
                                    }
                                } else {
                                    throw new SecurityException("Provided zip file path has Path Traversal Vulnerability");
                                }
                            } else {
                                zipInputStream.close();
                                file3 = fileA;
                                break;
                            }
                        }
                    } else {
                        r7 = zMkdirs;
                        zipInputStream = new ZipInputStream(new BufferedInputStream(new FileInputStream(file), 8192));
                        bArr = new byte[8192];
                        canonicalPath = fileA.getCanonicalPath();
                        while (true) {
                            nextEntry = zipInputStream.getNextEntry();
                            if (nextEntry != null) {
                                file2 = new File(canonicalPath, nextEntry.getName());
                                if (file2.getCanonicalPath().startsWith(canonicalPath)) {
                                    if (nextEntry.isDirectory()) {
                                        file2.mkdir();
                                    } else {
                                        new File(file2.getParent()).mkdirs();
                                        bufferedOutputStream2 = new BufferedOutputStream(new FileOutputStream(file2), 8192);
                                        while (true) {
                                            i = zipInputStream.read(bArr);
                                            if (i == -1) {
                                                break;
                                                break;
                                            }
                                            bufferedOutputStream2.write(bArr, 0, i);
                                        }
                                        bufferedOutputStream2.flush();
                                        bufferedOutputStream2.close();
                                    }
                                } else {
                                    throw new SecurityException("Provided zip file path has Path Traversal Vulnerability");
                                }
                            } else {
                                zipInputStream.close();
                                file3 = fileA;
                                break;
                            }
                        }
                    }
                }
                if (file3 != null) {
                    str = "succeeded";
                } else {
                    str = "failed";
                }
                PWLog.noise("[InApp]InAppDownloader", "ZIP extraction " + str + " for resource: " + resource.getCode());
                if (file3 == null) {
                    PWLog.error("[InApp]InAppDownloader", "Failed to extract ZIP file for resource: " + resource.getCode());
                    return false;
                }
                PWLog.info("[InApp]InAppDownloader", "Successfully deployed resource: " + resource.getCode());
                return true;
                i2 = i3;
                bufferedOutputStream3 = bufferedOutputStream;
            }
        }
        file = null;
        if (file == null) {
            PWLog.error("[InApp]InAppDownloader", "Failed to download ZIP file for resource: " + resource.getCode() + ", url: " + resource.getUrl());
            return false;
        }
        if (!b.a(new Pair(file, resource))) {
            file.delete();
            PWLog.error("[InApp]InAppDownloader", "ZIP file validation failed (hash mismatch) for resource: " + resource.getCode() + ", url: " + resource.getUrl());
            return false;
        }
        file.deleteOnExit();
        PWLog.noise("[InApp]InAppDownloader", "Extracting ZIP file for resource: " + resource.getCode());
        fileA = this.b.a(resource.getCode());
        if (fileA != null) {
            new ZipFile(file).close();
            e.a(fileA);
            zIsDirectory = fileA.isDirectory();
            r7 = zIsDirectory;
            if (!zIsDirectory) {
                r7 = zMkdirs;
                zipInputStream = new ZipInputStream(new BufferedInputStream(new FileInputStream(file), 8192));
                bArr = new byte[8192];
                canonicalPath = fileA.getCanonicalPath();
                while (true) {
                    nextEntry = zipInputStream.getNextEntry();
                    if (nextEntry != null) {
                        file2 = new File(canonicalPath, nextEntry.getName());
                        if (file2.getCanonicalPath().startsWith(canonicalPath)) {
                            if (nextEntry.isDirectory()) {
                                file2.mkdir();
                            } else {
                                new File(file2.getParent()).mkdirs();
                                bufferedOutputStream2 = new BufferedOutputStream(new FileOutputStream(file2), 8192);
                                while (true) {
                                    i = zipInputStream.read(bArr);
                                    if (i == -1) {
                                        break;
                                        break;
                                    }
                                    bufferedOutputStream2.write(bArr, 0, i);
                                }
                                bufferedOutputStream2.flush();
                                bufferedOutputStream2.close();
                            }
                        } else {
                            throw new SecurityException("Provided zip file path has Path Traversal Vulnerability");
                        }
                    } else {
                        zipInputStream.close();
                        file3 = fileA;
                        break;
                    }
                }
            } else {
                r7 = zMkdirs;
                zipInputStream = new ZipInputStream(new BufferedInputStream(new FileInputStream(file), 8192));
                bArr = new byte[8192];
                canonicalPath = fileA.getCanonicalPath();
                while (true) {
                    nextEntry = zipInputStream.getNextEntry();
                    if (nextEntry != null) {
                        file2 = new File(canonicalPath, nextEntry.getName());
                        if (file2.getCanonicalPath().startsWith(canonicalPath)) {
                            if (nextEntry.isDirectory()) {
                                file2.mkdir();
                            } else {
                                new File(file2.getParent()).mkdirs();
                                bufferedOutputStream2 = new BufferedOutputStream(new FileOutputStream(file2), 8192);
                                while (true) {
                                    i = zipInputStream.read(bArr);
                                    if (i == -1) {
                                        break;
                                        break;
                                    }
                                    bufferedOutputStream2.write(bArr, 0, i);
                                }
                                bufferedOutputStream2.flush();
                                bufferedOutputStream2.close();
                            }
                        } else {
                            throw new SecurityException("Provided zip file path has Path Traversal Vulnerability");
                        }
                    } else {
                        zipInputStream.close();
                        file3 = fileA;
                        break;
                    }
                }
            }
        }
        if (file3 != null) {
            str = "succeeded";
        } else {
            str = "failed";
        }
        PWLog.noise("[InApp]InAppDownloader", "ZIP extraction " + str + " for resource: " + resource.getCode());
        if (file3 == null) {
            PWLog.error("[InApp]InAppDownloader", "Failed to extract ZIP file for resource: " + resource.getCode());
            return false;
        }
        PWLog.info("[InApp]InAppDownloader", "Successfully deployed resource: " + resource.getCode());
        return true;
    }
}
