package com.pushwoosh.k;

import androidx.core.util.Pair;
import com.pushwoosh.inapp.network.model.Resource;
import com.pushwoosh.internal.utils.PWLog;
import java.io.BufferedInputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;

/* JADX INFO: loaded from: classes6.dex */
public final class b {
    /* JADX WARN: Multi-variable type inference failed */
    public static boolean a(Pair pair) throws Throwable {
        String string;
        File file = (File) pair.first;
        Resource resource = (Resource) pair.second;
        if (file == null || resource == null) {
            return false;
        }
        String hash = resource.getHash();
        if (hash == null || hash.isEmpty()) {
            return true;
        }
        BufferedInputStream bufferedInputStream = null;
        try {
            BufferedInputStream bufferedInputStream2 = new BufferedInputStream(new FileInputStream(file));
            try {
                MessageDigest messageDigest = MessageDigest.getInstance("MD5");
                byte[] bArr = new byte[1024];
                while (true) {
                    int i = bufferedInputStream2.read(bArr);
                    if (i == -1) {
                        break;
                    }
                    messageDigest.update(bArr, 0, i);
                }
                StringBuilder sb = new StringBuilder();
                for (byte b : messageDigest.digest()) {
                    sb.append(String.format("%02x", Byte.valueOf(b)));
                }
                string = sb.toString();
                try {
                    bufferedInputStream2.close();
                } catch (IOException e) {
                    PWLog.error("Failed to read file " + file.getName(), e);
                }
            } catch (IOException unused) {
                bufferedInputStream = bufferedInputStream2;
                if (bufferedInputStream != null) {
                    try {
                        bufferedInputStream.close();
                    } catch (IOException e2) {
                        PWLog.error("Failed to read file " + file.getName(), e2);
                    }
                }
                string = "";
            } catch (NoSuchAlgorithmException unused2) {
                bufferedInputStream = bufferedInputStream2;
                if (bufferedInputStream != null) {
                    try {
                        bufferedInputStream.close();
                    } catch (IOException e3) {
                        PWLog.error("Failed to read file " + file.getName(), e3);
                    }
                }
                string = "";
            } catch (Throwable th) {
                th = th;
                bufferedInputStream = bufferedInputStream2;
                if (bufferedInputStream != null) {
                    try {
                        bufferedInputStream.close();
                    } catch (IOException e4) {
                        PWLog.error("Failed to read file " + file.getName(), e4);
                    }
                }
                throw th;
            }
        } catch (IOException unused3) {
        } catch (NoSuchAlgorithmException unused4) {
        } catch (Throwable th2) {
            th = th2;
        }
        return hash.equals(string);
    }
}
