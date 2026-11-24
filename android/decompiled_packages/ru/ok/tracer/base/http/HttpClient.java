package ru.ok.tracer.base.http;

import com.tekartik.sqflite.Constant;
import io.sentry.SentryBaseEvent;
import java.io.IOException;
import kotlin.Metadata;

/* JADX INFO: compiled from: HttpClient.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\bf\u0018\u00002\u00020\u0001J\u0010\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u0005H&¨\u0006\u0006"}, d2 = {"Lru/ok/tracer/base/http/HttpClient;", "", Constant.METHOD_EXECUTE, "Lru/ok/tracer/base/http/HttpResponse;", SentryBaseEvent.JsonKeys.REQUEST, "Lru/ok/tracer/base/http/HttpRequest;", "tracer-base_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
public interface HttpClient {
    HttpResponse execute(HttpRequest request) throws IOException;
}
