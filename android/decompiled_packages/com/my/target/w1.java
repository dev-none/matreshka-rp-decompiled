package com.my.target;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.FilenameFilter;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.io.OutputStreamWriter;
import java.nio.charset.StandardCharsets;
import java.util.Arrays;
import java.util.Comparator;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: classes6.dex */
public final class w1 {
    public static final long b = TimeUnit.DAYS.toMillis(7);
    public static final FilenameFilter c = new FilenameFilter() { // from class: com.my.target.w1$$ExternalSyntheticLambda1
        @Override // java.io.FilenameFilter
        public final boolean accept(File file, String str) {
            return str.startsWith("mytrg_");
        }
    };
    public static final FilenameFilter d = new FilenameFilter() { // from class: com.my.target.w1$$ExternalSyntheticLambda2
        @Override // java.io.FilenameFilter
        public final boolean accept(File file, String str) {
            return str.endsWith(".mp4");
        }
    };
    public static volatile w1 e;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final File f4851a;

    public w1(File file) {
        this.f4851a = file;
    }

    public final void c() {
        File[] fileArrListFiles = this.f4851a.listFiles(d);
        if (fileArrListFiles == null || fileArrListFiles.length < 10) {
            return;
        }
        Arrays.sort(fileArrListFiles, new Comparator() { // from class: com.my.target.w1$$ExternalSyntheticLambda0
            @Override // java.util.Comparator
            public final int compare(Object obj, Object obj2) {
                return Long.compare(((File) obj2).lastModified(), ((File) obj).lastModified());
            }
        });
        for (int length = fileArrListFiles.length - 1; length >= 10; length--) {
            String path = fileArrListFiles[length].getPath();
            gb.a("DiskCache: Remove redundant video - " + path);
            if (!fileArrListFiles[length].delete()) {
                gb.a("DiskCache: Unable to remove file - " + path);
            }
        }
    }

    public synchronized void d() {
        try {
            if (!this.f4851a.exists()) {
                a();
            } else {
                b();
                c();
            }
        } catch (Throwable th) {
            gb.c("DiskCache: exception - " + th);
        }
    }

    public static File a(Context context) throws Exception {
        File cacheDir = context.getCacheDir();
        if (cacheDir == null) {
            throw new Exception("can't get context cache dir");
        }
        File file = new File(cacheDir, "mytargetcache");
        if (!file.exists() && !file.mkdirs()) {
            throw new Exception("can't create mytarget cache dir");
        }
        if (file.isDirectory() && file.canWrite()) {
            return file;
        }
        throw new Exception("can't write to mytarget cache dir");
    }

    public static w1 b(Context context) {
        w1 w1Var;
        w1 w1Var2 = e;
        if (w1Var2 != null) {
            return w1Var2;
        }
        synchronized (w1.class) {
            w1Var = e;
            if (w1Var == null) {
                try {
                    w1Var = new w1(a(context));
                    e = w1Var;
                } catch (Exception e2) {
                    gb.c("DiskCache: unable to create cache dir: " + e2);
                    return null;
                }
            }
        }
        return w1Var;
    }

    public synchronized File a(InputStream inputStream, String str) {
        File fileA;
        d();
        fileA = a(str, ".img");
        gb.a("DiskCache: Save image - " + fileA.getPath());
        return a(inputStream, fileA);
    }

    public synchronized File b(InputStream inputStream, String str) {
        File fileA;
        d();
        fileA = a(str, ".mp4");
        gb.a("DiskCache: Save video - " + fileA.getPath());
        return a(inputStream, fileA);
    }

    public synchronized File a(int i, String str, boolean z) {
        File fileA;
        d();
        fileA = a(Integer.toString(i), ".json");
        gb.a("DiskCache: Save text - " + fileA.getPath());
        long jCurrentTimeMillis = System.currentTimeMillis();
        if (fileA.exists() && z) {
            jCurrentTimeMillis = fileA.lastModified();
        }
        try {
            OutputStreamWriter outputStreamWriter = new OutputStreamWriter(new FileOutputStream(fileA), StandardCharsets.UTF_8.newEncoder());
            try {
                outputStreamWriter.write(str);
                outputStreamWriter.close();
                if (!fileA.setLastModified(jCurrentTimeMillis)) {
                    gb.a("DiskCache: Unable to set last modified to file - " + fileA.getPath());
                }
                outputStreamWriter.close();
            } catch (Throwable th) {
                try {
                    outputStreamWriter.close();
                } catch (Throwable th2) {
                    th.addSuppressed(th2);
                }
                throw th;
            }
        } catch (Throwable th3) {
            gb.c("DiskCache: exception - " + th3);
            return null;
        }
        return fileA;
    }

    public String b(String str) {
        return b(str, ".mp4");
    }

    public final synchronized String b(String str, String str2) {
        d();
        File fileA = a(str, str2);
        if (!fileA.exists()) {
            return null;
        }
        gb.a("DiskCache: Get path - " + fileA.getPath());
        try {
            return fileA.getAbsolutePath();
        } catch (Throwable th) {
            gb.c("DiskCache: exception - " + th);
            return null;
        }
    }

    public final void b() {
        long jCurrentTimeMillis = System.currentTimeMillis();
        if (jCurrentTimeMillis - this.f4851a.lastModified() <= b) {
            return;
        }
        File[] fileArrListFiles = this.f4851a.listFiles(c);
        if (fileArrListFiles != null) {
            for (File file : fileArrListFiles) {
                if (file.isFile() && jCurrentTimeMillis - file.lastModified() > b) {
                    gb.a("DiskCache: Remove expired file - " + file.getPath());
                    if (!file.delete()) {
                        gb.a("DiskCache: Unable to delete file - " + file.getAbsolutePath());
                    }
                }
            }
        }
        if (this.f4851a.setLastModified(jCurrentTimeMillis)) {
            return;
        }
        gb.a("DiskCache: Unable to set last modified to dir - " + this.f4851a.getAbsolutePath());
    }

    public synchronized Bitmap a(String str) {
        try {
            d();
            File fileA = a(str, ".img");
            if (!fileA.exists()) {
                return null;
            }
            gb.a("DiskCache: Get image - " + fileA.getPath());
            try {
                return BitmapFactory.decodeFile(fileA.getAbsolutePath());
            } catch (OutOfMemoryError e2) {
                System.gc();
                gb.c("DiskCache: OutOfMemoryError, trying once again");
                try {
                    BitmapFactory.Options options = new BitmapFactory.Options();
                    options.inSampleSize = 2;
                    return BitmapFactory.decodeFile(fileA.getAbsolutePath(), options);
                } catch (OutOfMemoryError unused) {
                    gb.c("DiskCache: OutOfMemoryError, called twice - " + e2);
                    return null;
                }
            } catch (Throwable th) {
                gb.c("DiskCache: exception - " + th);
                return null;
            }
        } catch (Throwable th2) {
            throw th2;
        }
    }

    public synchronized String a(int i, long j) {
        d();
        File fileA = a(Integer.toString(i), ".json");
        if (!fileA.exists()) {
            return null;
        }
        if (fileA.isFile() && System.currentTimeMillis() - fileA.lastModified() > j) {
            gb.a("DiskCache: Remove expired file - " + fileA.getPath());
            if (!fileA.delete()) {
                gb.a("DiskCache: Unable to delete file - " + fileA.getAbsolutePath());
            }
            return null;
        }
        gb.a("DiskCache: Get text - " + fileA.getPath());
        try {
            FileInputStream fileInputStream = new FileInputStream(fileA);
            try {
                StringBuilder sb = new StringBuilder();
                BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(fileInputStream, StandardCharsets.UTF_8));
                char[] cArr = new char[1024];
                while (true) {
                    int i2 = bufferedReader.read(cArr);
                    if (i2 == -1) {
                        break;
                    }
                    sb.append(new String(cArr, 0, i2));
                }
                if (sb.length() == 0) {
                    gb.a("DiskCache: Error - cache file is empty");
                    fileInputStream.close();
                    return null;
                }
                String string = sb.toString();
                fileInputStream.close();
                return string;
            } catch (Throwable th) {
                try {
                    fileInputStream.close();
                } catch (Throwable th2) {
                    th.addSuppressed(th2);
                }
                throw th;
            }
        } catch (Throwable th3) {
            gb.c("DiskCache: exception - " + th3);
        }
    }

    public final File a(InputStream inputStream, File file) {
        try {
            FileOutputStream fileOutputStream = new FileOutputStream(file);
            try {
                a(inputStream, fileOutputStream);
                fileOutputStream.close();
                return file;
            } catch (Throwable th) {
                try {
                    fileOutputStream.close();
                } catch (Throwable th2) {
                    th.addSuppressed(th2);
                }
                throw th;
            }
        } catch (Throwable th3) {
            gb.c("DiskCache: exception - " + th3);
            return null;
        }
    }

    public final int a(InputStream inputStream, OutputStream outputStream) {
        byte[] bArr = new byte[8192];
        try {
            BufferedInputStream bufferedInputStream = new BufferedInputStream(inputStream, 8192);
            try {
                BufferedOutputStream bufferedOutputStream = new BufferedOutputStream(outputStream, 8192);
                int i = 0;
                while (true) {
                    try {
                        int i2 = bufferedInputStream.read(bArr, 0, 8192);
                        if (i2 != -1) {
                            bufferedOutputStream.write(bArr, 0, i2);
                            i += i2;
                        } else {
                            bufferedOutputStream.flush();
                            bufferedOutputStream.close();
                            bufferedInputStream.close();
                            return i;
                        }
                    } catch (Throwable th) {
                        try {
                            bufferedOutputStream.close();
                        } catch (Throwable th2) {
                            th.addSuppressed(th2);
                        }
                        throw th;
                    }
                    try {
                        bufferedInputStream.close();
                    } catch (Throwable th3) {
                        th.addSuppressed(th3);
                    }
                    throw th;
                }
            } catch (Throwable th4) {
                bufferedInputStream.close();
                throw th4;
            }
        } catch (Throwable th5) {
            gb.a("DiskCache: Error - " + th5.getMessage());
            throw th5;
        }
    }

    public final File a(String str, String str2) {
        return new File(this.f4851a.getAbsolutePath() + File.separator + ("mytrg_" + y1.c(str) + str2));
    }

    public final void a() throws Exception {
        gb.a("DiskCache: cache dir was deleted during runtime, re-creating...");
        if (!this.f4851a.mkdirs()) {
            throw new Exception("can't re-create cache dir in runtime");
        }
    }
}
