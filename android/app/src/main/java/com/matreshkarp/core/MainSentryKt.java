package com.matreshkarp.core;

import android.content.Context;
import com.p003native.libLoader;
import io.sentry.Hint;
import io.sentry.IScope;
import io.sentry.ScopeCallback;
import io.sentry.Sentry;
import io.sentry.SentryEvent;
import io.sentry.SentryOptions;
import io.sentry.android.core.SentryAndroid;
import io.sentry.android.core.SentryAndroidOptions;
import io.sentry.protocol.SentryException;
import io.sentry.protocol.SentryStackFrame;
import io.sentry.protocol.SentryStackTrace;
import java.util.Arrays;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.StringCompanionObject;
import kotlin.text.CharsKt;
import kotlin.text.StringsKt;

/* JADX INFO: compiled from: MainSentry.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u0010\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\u001a\u000e\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u0003\u001a\u000e\u0010\u0004\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u0003¨\u0006\u0005"}, d2 = {"MainSentryPreInit", "", "context", "Landroid/content/Context;", "MainSentryInit", "app_matreshkaProdRelease"}, k = 2, mv = {2, 2, 0}, xi = 48)
public final class MainSentryKt {
    public static final void MainSentryPreInit(final Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        SentryAndroid.init(context, (Sentry.OptionsConfiguration<SentryAndroidOptions>) new Sentry.OptionsConfiguration() { // from class: com.matreshkarp.core.MainSentryKt$$ExternalSyntheticLambda1
            @Override // io.sentry.Sentry.OptionsConfiguration
            public final void configure(SentryOptions sentryOptions) {
                MainSentryKt.MainSentryPreInit$lambda$0(context, (SentryAndroidOptions) sentryOptions);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void MainSentryPreInit$lambda$0(Context context, SentryOptions options) {
        Intrinsics.checkNotNullParameter(options, "options");
        options.setDsn(context.getString(com.matreshkarp.game.R.string.sentry_dsn));
        options.setDebug(false);
        options.addEventProcessor(new CustomEventProcessor());
        options.setBeforeSend(new SentryOptions.BeforeSendCallback() { // from class: com.matreshkarp.core.MainSentryKt$$ExternalSyntheticLambda0
            @Override // io.sentry.SentryOptions.BeforeSendCallback
            public final SentryEvent execute(SentryEvent sentryEvent, Hint hint) {
                return MainSentryKt.MainSentryPreInit$lambda$0$0(sentryEvent, hint);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Code duplicated, block: B:60:0x018f A[PHI: r20
  0x018f: PHI (r20v7 long) = (r20v2 long), (r20v8 long) binds: [B:69:0x01bc, B:59:0x018d] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Code duplicated, block: B:61:0x0192 A[PHI: r20
  0x0192: PHI (r20v3 long) = (r20v2 long), (r20v8 long) binds: [B:69:0x01bc, B:59:0x018d] A[DONT_GENERATE, DONT_INLINE]] */
    public static final SentryEvent MainSentryPreInit$lambda$0$0(SentryEvent event, Hint hint) {
        Object obj;
        Map<String, Object> extras;
        Object obj2;
        List<SentryStackFrame> frames;
        long j;
        long jLongValue;
        int i;
        String strDrop;
        List<SentryStackFrame> frames2;
        String strDrop2;
        Intrinsics.checkNotNullParameter(event, "event");
        Intrinsics.checkNotNullParameter(hint, "<unused var>");
        List<SentryException> exceptions = event.getExceptions();
        int i2 = 16;
        int i3 = 2;
        if (exceptions != null) {
            Iterator<SentryException> it = exceptions.iterator();
            while (it.hasNext()) {
                SentryStackTrace stacktrace = it.next().getStacktrace();
                if (stacktrace != null && (frames2 = stacktrace.getFrames()) != null) {
                    for (SentryStackFrame sentryStackFrame : frames2) {
                        String instructionAddr = sentryStackFrame.getInstructionAddr();
                        if (instructionAddr != null) {
                            long j2 = Long.parseLong(StringsKt.drop(instructionAddr, 2), CharsKt.checkRadix(16));
                            String imageAddr = sentryStackFrame.getImageAddr();
                            if (imageAddr != null && (strDrop2 = StringsKt.drop(imageAddr, 2)) != null) {
                                Long.valueOf(Long.parseLong(strDrop2, CharsKt.checkRadix(16)));
                            }
                            if (0 <= j2 && j2 < 256) {
                                sentryStackFrame.setImageAddr(null);
                                sentryStackFrame.setFunction("_" + j2);
                            }
                        }
                    }
                }
            }
        }
        Map<String, Object> extras2 = event.getExtras();
        if (extras2 != null && (obj = extras2.get("libloader.base")) != null && (extras = event.getExtras()) != null && (obj2 = extras.get("libloader.execEnd")) != null) {
            long j3 = Long.parseLong((String) obj, CharsKt.checkRadix(10));
            Intrinsics.checkNotNull(obj2, "null cannot be cast to non-null type kotlin.String");
            long j4 = Long.parseLong((String) obj2, CharsKt.checkRadix(10));
            Map<String, Object> extras3 = event.getExtras();
            Intrinsics.checkNotNull(extras3);
            StringCompanionObject stringCompanionObject = StringCompanionObject.INSTANCE;
            String str = String.format(Locale.US, "0x%X", Arrays.copyOf(new Object[]{Long.valueOf(j3)}, 1));
            Intrinsics.checkNotNullExpressionValue(str, "format(...)");
            extras3.put("libloader.base", str);
            Map<String, Object> extras4 = event.getExtras();
            Intrinsics.checkNotNull(extras4);
            StringCompanionObject stringCompanionObject2 = StringCompanionObject.INSTANCE;
            String str2 = String.format(Locale.US, "0x%X", Arrays.copyOf(new Object[]{Long.valueOf(j4)}, 1));
            Intrinsics.checkNotNullExpressionValue(str2, "format(...)");
            extras4.put("libloader.execEnd", str2);
            List<SentryException> exceptions2 = event.getExceptions();
            if (exceptions2 != null) {
                Iterator<SentryException> it2 = exceptions2.iterator();
                while (it2.hasNext()) {
                    SentryStackTrace stacktrace2 = it2.next().getStacktrace();
                    if (stacktrace2 == null || (frames = stacktrace2.getFrames()) == null) {
                        i2 = i2;
                        i3 = 2;
                    } else {
                        int i4 = 0;
                        for (SentryStackFrame sentryStackFrame2 : frames) {
                            int i5 = i4 + 1;
                            int i6 = i2;
                            String instructionAddr2 = sentryStackFrame2.getInstructionAddr();
                            if (instructionAddr2 != null) {
                                long j5 = Long.parseLong(StringsKt.drop(instructionAddr2, i3), CharsKt.checkRadix(i6));
                                String imageAddr2 = sentryStackFrame2.getImageAddr();
                                Long lValueOf = (imageAddr2 == null || (strDrop = StringsKt.drop(imageAddr2, i3)) == null) ? null : Long.valueOf(Long.parseLong(strDrop, CharsKt.checkRadix(i6)));
                                if (j3 + 1 <= j5 && j5 < j4) {
                                    jLongValue = j5 - j3;
                                    if (i4 < frames.size() - 1) {
                                        i = 4;
                                    } else {
                                        i = 0;
                                    }
                                    j = jLongValue - ((long) i);
                                } else if (lValueOf == null || j5 + lValueOf.longValue() <= j3 || j5 + lValueOf.longValue() >= j4) {
                                    j = 0;
                                } else {
                                    jLongValue = (j5 + lValueOf.longValue()) - j3;
                                    if (i4 < frames.size() - 1) {
                                        i = 4;
                                    } else {
                                        i = 0;
                                    }
                                    j = jLongValue - ((long) i);
                                }
                                if (j != 0) {
                                    StringCompanionObject stringCompanionObject3 = StringCompanionObject.INSTANCE;
                                    String str3 = String.format(Locale.US, "0x%X", Arrays.copyOf(new Object[]{Long.valueOf(j)}, 1));
                                    Intrinsics.checkNotNullExpressionValue(str3, "format(...)");
                                    sentryStackFrame2.setInstructionAddr(str3);
                                    sentryStackFrame2.setImageAddr(null);
                                    sentryStackFrame2.setFunction(libLoader.INSTANCE.getSym(j));
                                }
                            }
                            i2 = i6;
                            i4 = i5;
                            i3 = 2;
                        }
                    }
                }
            }
        }
        return event;
    }

    public static final void MainSentryInit(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        Sentry.configureScope(new ScopeCallback() { // from class: com.matreshkarp.core.MainSentryKt$$ExternalSyntheticLambda2
            @Override // io.sentry.ScopeCallback
            public final void run(IScope iScope) {
                MainSentryKt.MainSentryInit$lambda$0(iScope);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void MainSentryInit$lambda$0(IScope scope) {
        Intrinsics.checkNotNullParameter(scope, "scope");
        scope.setExtra("libloader.base", String.valueOf(libLoader.INSTANCE.base()));
        scope.setExtra("libloader.execEnd", String.valueOf(libLoader.INSTANCE.execEnd()));
    }
}
