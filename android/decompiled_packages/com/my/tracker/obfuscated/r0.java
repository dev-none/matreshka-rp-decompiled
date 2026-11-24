package com.my.tracker.obfuscated;

import android.net.TrafficStats;
import com.google.firebase.perf.network.FirebasePerfUrlConnection;
import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.net.HttpURLConnection;
import java.net.URL;
import java.net.URLConnection;
import java.util.zip.GZIPOutputStream;

/* JADX INFO: loaded from: classes6.dex */
public final class r0 extends s0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final s0.a f4992a;
    final boolean b;

    r0(s0.a aVar, boolean z) {
        this.f4992a = aVar;
        this.b = z;
    }

    /* JADX WARN: Code duplicated, block: B:50:0x0112 A[Catch: all -> 0x0116, TRY_ENTER, TryCatch #0 {all -> 0x0116, blocks: (B:5:0x0034, B:16:0x0097, B:21:0x00a7, B:33:0x00f6, B:39:0x0101, B:40:0x0104, B:22:0x00b9, B:50:0x0112, B:51:0x0115), top: B:63:0x0034 }] */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r5v3 */
    /* JADX WARN: Type inference failed for: r5v4 */
    /* JADX WARN: Type inference failed for: r5v9 */
    /* JADX WARN: Type inference failed for: r6v14 */
    /* JADX WARN: Type inference failed for: r6v15 */
    /* JADX WARN: Type inference failed for: r6v4, types: [java.io.FilterOutputStream] */
    /* JADX WARN: Type inference failed for: r6v5 */
    /* JADX WARN: Type inference failed for: r6v6, types: [boolean] */
    /* JADX WARN: Type inference failed for: r6v7 */
    /* JADX WARN: Type inference failed for: r6v9, types: [java.io.FilterOutputStream, java.io.OutputStream] */
    /* JADX WARN: Type inference failed for: r7v5, types: [com.my.tracker.obfuscated.s0$a] */
    /* JADX WARN: Type inference failed for: r7v8 */
    /* JADX WARN: Type inference fix 'apply assigned field type' failed
    java.lang.UnsupportedOperationException: ArgType.getObject(), call class: class jadx.core.dex.instructions.args.ArgType$UnknownArg
    	at jadx.core.dex.instructions.args.ArgType.getObject(ArgType.java:596)
    	at jadx.core.dex.attributes.nodes.ClassTypeVarsAttr.getTypeVarsMapFor(ClassTypeVarsAttr.java:35)
    	at jadx.core.dex.nodes.utils.TypeUtils.replaceClassGenerics(TypeUtils.java:177)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.insertExplicitUseCast(FixTypesVisitor.java:397)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.tryFieldTypeWithNewCasts(FixTypesVisitor.java:359)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.applyFieldType(FixTypesVisitor.java:309)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.visit(FixTypesVisitor.java:94)
     */
    @Override // com.my.tracker.obfuscated.s0
    public s0.b a(String str) {
        Throwable th;
        s0.b bVarD = s0.b.d();
        HttpURLConnection httpURLConnection = null;
        BufferedReader bufferedReader = null;
        ?? r5 = 0;
        try {
            x2.a("HttpPostRequest: send request to " + str);
            TrafficStats.setThreadStatsTag(27498374);
            HttpURLConnection httpURLConnection2 = (HttpURLConnection) ((URLConnection) FirebasePerfUrlConnection.instrument(new URL(str).openConnection()));
            try {
                httpURLConnection2.setConnectTimeout(10000);
                httpURLConnection2.setReadTimeout(10000);
                httpURLConnection2.setInstanceFollowRedirects(true);
                httpURLConnection2.setRequestMethod("POST");
                httpURLConnection2.setRequestProperty("Connection", "close");
                httpURLConnection2.setRequestProperty("Content-Type", this.f4992a.a());
                httpURLConnection2.setUseCaches(false);
                httpURLConnection2.setDoOutput(true);
                try {
                    ?? r6 = this.b;
                    try {
                        if (r6 != 0) {
                            httpURLConnection2.setRequestProperty("Content-Encoding", "gzip");
                            GZIPOutputStream gZIPOutputStream = new GZIPOutputStream(new BufferedOutputStream(httpURLConnection2.getOutputStream()));
                            x2.a("HttpPostRequest: populating post request body using gzip");
                            r6 = gZIPOutputStream;
                        } else {
                            BufferedOutputStream bufferedOutputStream = new BufferedOutputStream(httpURLConnection2.getOutputStream());
                            x2.a("HttpPostRequest: populating post request body without using gzip");
                            r6 = bufferedOutputStream;
                        }
                        try {
                            this.f4992a.a(r6);
                            if (this.b) {
                                ((GZIPOutputStream) r6).finish();
                            }
                            r6.close();
                            int responseCode = httpURLConnection2.getResponseCode();
                            if (responseCode == 200 || responseCode == 204) {
                                x2.a("HttpPostRequest: response successfully received");
                                bVarD.f4994a = true;
                            } else {
                                x2.a("HttpPostRequest error: response code " + responseCode);
                                bVarD.f4994a = false;
                            }
                            if (responseCode == 200) {
                                try {
                                    x2.a("HttpPostRequest: processing server response");
                                    BufferedReader bufferedReader2 = new BufferedReader(new InputStreamReader(httpURLConnection2.getInputStream()));
                                    try {
                                        StringBuilder sb = new StringBuilder();
                                        while (true) {
                                            String line = bufferedReader2.readLine();
                                            if (line == null) {
                                                break;
                                            }
                                            sb.append(line);
                                        }
                                        if (sb.length() > 0) {
                                            bVarD.b = sb.toString();
                                        } else {
                                            x2.a("HttpPostRequest: response data is empty");
                                        }
                                        bufferedReader2.close();
                                    } catch (Throwable th2) {
                                        th = th2;
                                        bufferedReader = bufferedReader2;
                                        if (bufferedReader == null) {
                                            throw th;
                                        }
                                        bufferedReader.close();
                                        throw th;
                                    }
                                } catch (Throwable th3) {
                                    th = th3;
                                }
                            }
                            httpURLConnection2.disconnect();
                            return bVarD;
                        } catch (Throwable th4) {
                            th = th4;
                            r5 = r6;
                            r6 = r5;
                            if (r6 != 0) {
                                r6.close();
                            }
                            throw th;
                        }
                    } catch (Throwable th5) {
                        th = th5;
                        if (r6 != 0) {
                            r6.close();
                        }
                        throw th;
                    }
                } catch (Throwable th6) {
                    th = th6;
                }
            } catch (Throwable th7) {
                th = th7;
                httpURLConnection = httpURLConnection2;
                try {
                    x2.a("HttpPostRequest error: error while sending data", th);
                    bVarD.f4994a = false;
                    bVarD.c = "HttpPostRequest error: error while sending data";
                    return bVarD;
                } finally {
                    if (httpURLConnection != null) {
                        httpURLConnection.disconnect();
                    }
                }
            }
        } catch (Throwable th8) {
            th = th8;
        }
    }
}
