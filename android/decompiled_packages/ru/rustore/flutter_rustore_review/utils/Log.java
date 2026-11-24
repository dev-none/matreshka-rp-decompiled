package ru.rustore.flutter_rustore_review.utils;

import androidx.core.app.NotificationCompat;
import androidx.media3.exoplayer.upstream.CmcdData;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: Log.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000\u001a\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\bÆ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007J\u000e\u0010\b\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007¨\u0006\t"}, d2 = {"Lru/rustore/flutter_rustore_review/utils/Log;", "", "<init>", "()V", CmcdData.OBJECT_TYPE_INIT_SEGMENT, "", NotificationCompat.CATEGORY_MESSAGE, "", "d", "flutter_rustore_review_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class Log {
    public static final Log INSTANCE = new Log();

    private Log() {
    }

    public final void i(String msg) {
        Intrinsics.checkNotNullParameter(msg, "msg");
        android.util.Log.i("FlutterRustoreReview", msg);
    }

    public final void d(String msg) {
        Intrinsics.checkNotNullParameter(msg, "msg");
        android.util.Log.d("FlutterRustoreReview", msg);
    }
}
