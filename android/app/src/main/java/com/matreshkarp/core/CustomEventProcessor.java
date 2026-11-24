package com.matreshkarp.core;

import androidx.core.app.NotificationCompat;
import io.sentry.EventProcessor;
import io.sentry.Hint;
import io.sentry.SentryEvent;
import io.sentry.protocol.SentryException;
import io.sentry.protocol.SentryTransaction;
import java.util.List;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;

/* JADX INFO: compiled from: MainSentry.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\u0018\u00002\u00020\u0001B\u0007¢\u0006\u0004\b\u0002\u0010\u0003J\u001a\u0010\u0004\u001a\u0004\u0018\u00010\u00052\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\bH\u0016J\u001a\u0010\u0004\u001a\u0004\u0018\u00010\t2\u0006\u0010\n\u001a\u00020\t2\u0006\u0010\u0007\u001a\u00020\bH\u0016¨\u0006\u000b"}, d2 = {"Lcom/matreshkarp/core/CustomEventProcessor;", "Lio/sentry/EventProcessor;", "<init>", "()V", "process", "Lio/sentry/SentryEvent;", NotificationCompat.CATEGORY_EVENT, "hint", "Lio/sentry/Hint;", "Lio/sentry/protocol/SentryTransaction;", "transaction", "app_matreshkaProdRelease"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class CustomEventProcessor implements EventProcessor {
    @Override // io.sentry.EventProcessor
    public SentryTransaction process(SentryTransaction transaction, Hint hint) {
        Intrinsics.checkNotNullParameter(transaction, "transaction");
        Intrinsics.checkNotNullParameter(hint, "hint");
        return transaction;
    }

    @Override // io.sentry.EventProcessor
    public SentryEvent process(SentryEvent event, Hint hint) {
        String value;
        Intrinsics.checkNotNullParameter(event, "event");
        Intrinsics.checkNotNullParameter(hint, "hint");
        List<SentryException> exceptions = event.getExceptions();
        if (exceptions != null) {
            for (SentryException sentryException : exceptions) {
                Intrinsics.checkNotNullExpressionValue(sentryException, "next(...)");
                SentryException sentryException2 = sentryException;
                if (sentryException2.getValue() != null && (value = sentryException2.getValue()) != null && StringsKt.contains$default((CharSequence) value, (CharSequence) "Cannot execute operation because FlutterJNI is not attached to native.", false, 2, (Object) null)) {
                    return null;
                }
            }
        }
        return event;
    }
}
