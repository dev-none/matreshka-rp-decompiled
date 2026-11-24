package ru.ok.tracer.lite.crash.report.upload;

import android.content.Context;
import android.net.Uri;
import android.util.Log;
import java.io.IOException;
import java.util.Collection;
import java.util.Date;
import java.util.Iterator;
import java.util.List;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.io.CloseableKt;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import org.json.JSONArray;
import ru.ok.tracer.base.apptoken.AppTokenUtils;
import ru.ok.tracer.base.commands.CommandsHandler;
import ru.ok.tracer.base.drop.DropManager;
import ru.ok.tracer.base.drop.DropRecord;
import ru.ok.tracer.base.drop.DropRecordSerializer;
import ru.ok.tracer.base.http.HttpMultipartBodyBuilder;
import ru.ok.tracer.base.http.HttpRequest;
import ru.ok.tracer.base.http.HttpRequestBody;
import ru.ok.tracer.base.http.HttpResponse;
import ru.ok.tracer.base.http.HttpResponseBody;
import ru.ok.tracer.base.io.GZIPUtils;
import ru.ok.tracer.base.stacktrace.ThrowableUtils;
import ru.ok.tracer.lite.TracerLibraryInfo;
import ru.ok.tracer.lite.TracerLite;
import ru.ok.tracer.lite.crash.report.LogEntryLite;
import ru.ok.tracer.lite.crash.report.TracerCrashReportLiteKt;
import ru.ok.tracer.lite.limits.TracerLiteLimits;
import ru.ok.tracer.lite.upload.TracerDropHolder;
import ru.ok.tracer.lite.upload.TracerLiteHttpClientHolder;
import ru.ok.tracer.lite.upload.UploadBeanUtilsLite;

/* JADX INFO: compiled from: CrashUploaderLite.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000L\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0003\n\u0002\b\u0002\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0000\u0018\u00002\u00020\u0001B\u0015\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0002\u0010\u0006J@\u0010\u000f\u001a\u00020\u00102\u0006\u0010\u0011\u001a\u00020\u00122\u0006\u0010\u0013\u001a\u00020\u00142\b\u0010\u0015\u001a\u0004\u0018\u00010\u00122\u000e\b\u0002\u0010\u0016\u001a\b\u0012\u0004\u0012\u00020\u00180\u00172\u000e\b\u0002\u0010\u0019\u001a\b\u0012\u0004\u0012\u00020\u00120\u0017R\u000e\u0010\u0007\u001a\u00020\bX\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\t\u001a\u00020\n8BX\u0082\u0004¢\u0006\u0006\u001a\u0004\b\u000b\u0010\fR\u000e\u0010\r\u001a\u00020\u000eX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u001a"}, d2 = {"Lru/ok/tracer/lite/crash/report/upload/CrashUploaderLite;", "", "tracer", "Lru/ok/tracer/lite/TracerLite;", "limits", "Lru/ok/tracer/lite/limits/TracerLiteLimits;", "(Lru/ok/tracer/lite/TracerLite;Lru/ok/tracer/lite/limits/TracerLiteLimits;)V", "commandHandler", "Lru/ok/tracer/base/commands/CommandsHandler;", "dropManager", "Lru/ok/tracer/base/drop/DropManager;", "getDropManager", "()Lru/ok/tracer/base/drop/DropManager;", "httpClientHolder", "Lru/ok/tracer/lite/upload/TracerLiteHttpClientHolder;", "upload", "", "severity", "", "e", "", "issueKey", "logs", "", "Lru/ok/tracer/lite/crash/report/LogEntryLite;", "tags", "tracer-lite-crash-report_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
public final class CrashUploaderLite {
    private final CommandsHandler commandHandler;
    private final TracerLiteHttpClientHolder httpClientHolder;
    private final TracerLite tracer;

    public CrashUploaderLite(TracerLite tracer, TracerLiteLimits limits) {
        Intrinsics.checkNotNullParameter(tracer, "tracer");
        Intrinsics.checkNotNullParameter(limits, "limits");
        this.tracer = tracer;
        this.httpClientHolder = TracerLiteHttpClientHolder.INSTANCE.get(tracer);
        this.commandHandler = new CommandsHandler.Builder().setFeatureName(TracerCrashReportLiteKt.FEATURE_CRASH_REPORT).setLimitsHandler(limits).build();
    }

    private final DropManager getDropManager() {
        return TracerDropHolder.INSTANCE.get(this.tracer);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static /* synthetic */ void upload$default(CrashUploaderLite crashUploaderLite, String str, Throwable th, String str2, List list, List list2, int i, Object obj) {
        if ((i & 8) != 0) {
            list = CollectionsKt.emptyList();
        }
        List list3 = list;
        if ((i & 16) != 0) {
            list2 = CollectionsKt.emptyList();
        }
        crashUploaderLite.upload(str, th, str2, list3, list2);
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r0v18 */
    /* JADX WARN: Type inference failed for: r0v19, types: [java.lang.String] */
    /* JADX WARN: Type inference failed for: r0v25 */
    /* JADX WARN: Type inference failed for: r10v17, types: [ru.ok.tracer.base.drop.DropRecordSerializer] */
    /* JADX WARN: Type inference failed for: r14v10, types: [java.lang.String] */
    /* JADX WARN: Type inference failed for: r14v13 */
    /* JADX WARN: Type inference failed for: r14v15 */
    /* JADX WARN: Type inference failed for: r14v16 */
    /* JADX WARN: Type inference failed for: r14v17 */
    /* JADX WARN: Type inference failed for: r14v5, types: [java.lang.String] */
    /* JADX WARN: Type inference failed for: r14v6 */
    /* JADX WARN: Type inference failed for: r14v7, types: [java.util.Collection] */
    /* JADX WARN: Type inference failed for: r14v9 */
    /* JADX WARN: Type inference failed for: r17v0 */
    /* JADX WARN: Type inference failed for: r17v1, types: [java.lang.String] */
    /* JADX WARN: Type inference failed for: r17v2 */
    /* JADX WARN: Type inference failed for: r2v10, types: [ru.ok.tracer.base.http.HttpRequestBody$Companion] */
    /* JADX WARN: Type inference failed for: r6v3, types: [ru.ok.tracer.base.commands.CommandsHandler] */
    /* JADX WARN: Type inference failed for: r7v2 */
    /* JADX WARN: Type inference failed for: r7v3, types: [byte[]] */
    /* JADX WARN: Type inference failed for: r7v4 */
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
    public final void upload(String severity, Throwable e, String issueKey, List<LogEntryLite> logs, List<String> tags) {
        Throwable th;
        List<String> list;
        ?? r14;
        byte[] bytes;
        JSONArray jsonArray;
        Intrinsics.checkNotNullParameter(severity, "severity");
        Intrinsics.checkNotNullParameter(e, "e");
        Intrinsics.checkNotNullParameter(logs, "logs");
        Intrinsics.checkNotNullParameter(tags, "tags");
        try {
            String libToken = this.tracer.getLibToken();
            if (libToken == null) {
                throw new IllegalStateException("No lib token".toString());
            }
            String hostAppToken = AppTokenUtils.getHostAppToken(this.tracer.getContext());
            Context context = this.tracer.getContext();
            TracerLibraryInfo libraryInfo = this.tracer.getLibraryInfo();
            String sessionUuid = this.tracer.getSessionUuid();
            Date date = new Date();
            if (tags.isEmpty()) {
                th = null;
                list = null;
            } else {
                list = tags;
                th = null;
            }
            String string = UploadBeanUtilsLite.composeLibUploadBean(context, libraryInfo, sessionUuid, date, issueKey, list).toString();
            Intrinsics.checkNotNullExpressionValue(string, "uploadBean.toString()");
            StringBuilder sb = new StringBuilder();
            ThrowableUtils.appendStackTraceTo(e, sb);
            String string2 = sb.toString();
            Intrinsics.checkNotNullExpressionValue(string2, "StringBuilder().apply(builderAction).toString()");
            byte[] gzippedByteArray = GZIPUtils.toGzippedByteArray(string2);
            if (logs.isEmpty()) {
                r14 = th;
            } else {
                StringBuilder sb2 = new StringBuilder();
                Iterator<LogEntryLite> it = logs.iterator();
                int i = 0;
                while (it.hasNext()) {
                    it.next().appendToApi(sb2, i);
                    i++;
                }
                String string3 = sb2.toString();
                Intrinsics.checkNotNullExpressionValue(string3, "StringBuilder().apply(builderAction).toString()");
                r14 = string3;
            }
            ?? gzippedByteArray2 = r14 != 0 ? GZIPUtils.toGzippedByteArray((String) r14) : th;
            Collection<DropRecord> collectionTake = getDropManager().take();
            ?? r15 = !collectionTake.isEmpty() ? collectionTake : th;
            ?? string4 = (r15 == 0 || (jsonArray = DropRecordSerializer.INSTANCE.toJsonArray(r15)) == null) ? th : jsonArray.toString();
            Uri.Builder builderAppendQueryParameter = Uri.parse(this.tracer.getConfiguration().getApiUrl()).buildUpon().appendEncodedPath("api/crash/upload").appendQueryParameter("crashToken", libToken);
            if (hostAppToken != null) {
                builderAppendQueryParameter.appendQueryParameter("crashHostAppToken", hostAppToken);
            }
            String string5 = builderAppendQueryParameter.toString();
            Intrinsics.checkNotNullExpressionValue(string5, "tracer.configuration.api…}\n            .toString()");
            HttpMultipartBodyBuilder.Companion companion = HttpMultipartBodyBuilder.INSTANCE;
            HttpMultipartBodyBuilder httpMultipartBodyBuilder = new HttpMultipartBodyBuilder();
            httpMultipartBodyBuilder.addString("type", CrashUploaderLiteKt.SEVERITY_NON_FATAL);
            httpMultipartBodyBuilder.addString("format", "JVM_STACKTRACE");
            httpMultipartBodyBuilder.addString("severity", severity);
            httpMultipartBodyBuilder.add("stackTrace", "stack.gzip", HttpRequestBody.INSTANCE.fromBytes("application/octet-stream", gzippedByteArray));
            HttpMultipartBodyBuilder.add$default(httpMultipartBodyBuilder, "uploadBean", null, HttpRequestBody.Companion.fromString$default(HttpRequestBody.INSTANCE, "application/json; charset=utf-8", string, null, 4, null), 2, null);
            if (gzippedByteArray2 != 0) {
                httpMultipartBodyBuilder.add("logs", "logs.gzip", HttpRequestBody.INSTANCE.fromBytes("application/octet-stream", gzippedByteArray2));
            }
            if (string4 != 0) {
                httpMultipartBodyBuilder.add("drops", "drops.json", HttpRequestBody.Companion.fromString$default(HttpRequestBody.INSTANCE, "application/json", string4, null, 4, null));
            }
            try {
                HttpResponse httpResponseExecute = this.httpClientHolder.getHttpClient().execute(new HttpRequest(string5, httpMultipartBodyBuilder.build()));
                try {
                    HttpResponse httpResponse = httpResponseExecute;
                    int statusCode = httpResponse.getStatusCode();
                    String message = httpResponse.getMessage();
                    HttpResponseBody body = httpResponse.getBody();
                    ?? contentType = body != null ? body.getContentType() : th;
                    HttpResponseBody body2 = httpResponse.getBody();
                    this.commandHandler.handleResponse(contentType, (body2 == null || (bytes = body2.getBytes()) == null) ? th : StringsKt.decodeToString(bytes));
                    if (statusCode != 200) {
                        throw new IOException("HTTP " + statusCode + ' ' + message);
                    }
                    Unit unit = Unit.INSTANCE;
                    CloseableKt.closeFinally(httpResponseExecute, th);
                } catch (Throwable th2) {
                    try {
                        throw th2;
                    } catch (Throwable th3) {
                        CloseableKt.closeFinally(httpResponseExecute, th2);
                        throw th3;
                    }
                }
            } catch (IOException e2) {
                Log.e("ru.ok.tracer", "Tracer crash report failed", e2);
                getDropManager().drop(collectionTake);
            }
        } catch (Exception unused) {
            Log.e("Tracer", "No lib token");
        }
    }
}
