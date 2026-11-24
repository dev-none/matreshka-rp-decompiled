package com.unity3d.ads.core.data.datasource;

import android.os.Bundle;
import com.unity3d.ads.core.data.model.AdRevenueData;
import com.unity3d.ads.core.data.model.AdRevenueOrigin;
import com.unity3d.ads.core.domain.events.HandleAdRevenueEvent;
import com.unity3d.ads.core.log.Logger;
import gatewayprotocol.v1.ClientInfoOuterClass;
import io.sentry.SentryEvent;
import java.util.Set;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import kotlin.text.Typography;
import kotlinx.coroutines.BuildersKt__Builders_commonKt;
import kotlinx.coroutines.CoroutineScope;

/* JADX INFO: compiled from: MaxAdRevenueListener.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000B\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0000\u0018\u0000 \u00172\u00020\u0001:\u0001\u0017B\u001f\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007¢\u0006\u0004\b\b\u0010\tJ\u000e\u0010\n\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\rJ\u0012\u0010\u000e\u001a\u0004\u0018\u00010\u000f2\u0006\u0010\u0010\u001a\u00020\rH\u0002J\u0010\u0010\u0011\u001a\u00020\u00122\u0006\u0010\u0010\u001a\u00020\rH\u0002J\u000e\u0010\u0013\u001a\u0004\u0018\u00010\u0012*\u00020\u0012H\u0002J\u0014\u0010\u0014\u001a\u0004\u0018\u00010\u00152\b\u0010\u0016\u001a\u0004\u0018\u00010\u0012H\u0002R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0018"}, d2 = {"Lcom/unity3d/ads/core/data/datasource/MaxAdRevenueListener;", "", "handleAdRevenueEvent", "Lcom/unity3d/ads/core/domain/events/HandleAdRevenueEvent;", "scope", "Lkotlinx/coroutines/CoroutineScope;", SentryEvent.JsonKeys.LOGGER, "Lcom/unity3d/ads/core/log/Logger;", "<init>", "(Lcom/unity3d/ads/core/domain/events/HandleAdRevenueEvent;Lkotlinx/coroutines/CoroutineScope;Lcom/unity3d/ads/core/log/Logger;)V", "onMessageReceived", "", "messageData", "Landroid/os/Bundle;", "parseRevenueBundle", "Lcom/unity3d/ads/core/data/model/AdRevenueData;", "bundle", "bundleToTraceString", "", "validateString", "parseMaxAdFormatString", "Lcom/unity3d/ads/core/data/model/AdRevenueAdFormat;", "formatStr", "Companion", "unity-ads_defaultRelease"}, k = 1, mv = {2, 1, 0}, xi = 48)
public final class MaxAdRevenueListener {
    private static final String KEY_AD_FORMAT = "ad_format";
    private static final String KEY_COUNTRY_CODE = "country_code";
    private static final String KEY_MAX_AD_UNIT_ID = "max_ad_unit_id";
    private static final String KEY_NETWORK_NAME = "network_name";
    private static final String KEY_REVENUE = "revenue";
    private static final String KEY_THIRD_PARTY_AD_PLACEMENT_ID = "third_party_ad_placement_id";
    private static final int MAX_STRING_LENGTH = 500;
    private final HandleAdRevenueEvent handleAdRevenueEvent;
    private final Logger logger;
    private final CoroutineScope scope;

    public MaxAdRevenueListener(HandleAdRevenueEvent handleAdRevenueEvent, CoroutineScope scope, Logger logger) {
        Intrinsics.checkNotNullParameter(handleAdRevenueEvent, "handleAdRevenueEvent");
        Intrinsics.checkNotNullParameter(scope, "scope");
        Intrinsics.checkNotNullParameter(logger, "logger");
        this.handleAdRevenueEvent = handleAdRevenueEvent;
        this.scope = scope;
        this.logger = logger;
    }

    /* JADX INFO: renamed from: com.unity3d.ads.core.data.datasource.MaxAdRevenueListener$onMessageReceived$2, reason: invalid class name */
    /* JADX INFO: compiled from: MaxAdRevenueListener.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
    @DebugMetadata(c = "com.unity3d.ads.core.data.datasource.MaxAdRevenueListener$onMessageReceived$2", f = "MaxAdRevenueListener.kt", i = {0}, l = {45}, m = "invokeSuspend", n = {"adRevenueData"}, s = {"L$0"})
    static final class AnonymousClass2 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ Bundle $messageData;
        Object L$0;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        AnonymousClass2(Bundle bundle, Continuation<? super AnonymousClass2> continuation) {
            super(2, continuation);
            this.$messageData = bundle;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return MaxAdRevenueListener.this.new AnonymousClass2(this.$messageData, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((AnonymousClass2) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            AdRevenueData adRevenueData;
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i = this.label;
            try {
                if (i == 0) {
                    ResultKt.throwOnFailure(obj);
                    AdRevenueData revenueBundle = MaxAdRevenueListener.this.parseRevenueBundle(this.$messageData);
                    if (revenueBundle == null) {
                        Logger.DefaultImpls.trace$default(MaxAdRevenueListener.this.logger, "Failed to parse revenue event", null, 2, null);
                    } else {
                        this.L$0 = revenueBundle;
                        this.label = 1;
                        if (MaxAdRevenueListener.this.handleAdRevenueEvent.invoke(revenueBundle, ClientInfoOuterClass.MediationProvider.MEDIATION_PROVIDER_MAX, AdRevenueOrigin.AUTOMATIC_COLLECTION, this) == coroutine_suspended) {
                            return coroutine_suspended;
                        }
                        adRevenueData = revenueBundle;
                    }
                    return Unit.INSTANCE;
                }
                if (i != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                adRevenueData = (AdRevenueData) this.L$0;
                ResultKt.throwOnFailure(obj);
                Logger.DefaultImpls.trace$default(MaxAdRevenueListener.this.logger, "Ad revenue event sent: revenue=" + adRevenueData.getRevenue() + ", network=" + adRevenueData.getNetworkName(), null, 2, null);
            } catch (Exception e) {
                MaxAdRevenueListener.this.logger.trace("Failed to process ad revenue event", e);
            }
            return Unit.INSTANCE;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final String onMessageReceived$lambda$0(MaxAdRevenueListener maxAdRevenueListener, Bundle bundle) {
        return "Ad revenue subscribed event (raw): " + maxAdRevenueListener.bundleToTraceString(bundle);
    }

    public final void onMessageReceived(final Bundle messageData) {
        Intrinsics.checkNotNullParameter(messageData, "messageData");
        this.logger.trace(new Function0() { // from class: com.unity3d.ads.core.data.datasource.MaxAdRevenueListener$$ExternalSyntheticLambda0
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return MaxAdRevenueListener.onMessageReceived$lambda$0(this.f$0, messageData);
            }
        });
        BuildersKt__Builders_commonKt.launch$default(this.scope, null, null, new AnonymousClass2(messageData, null), 3, null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Code duplicated, block: B:15:0x0051 A[Catch: Exception -> 0x009a, TryCatch #0 {Exception -> 0x009a, blocks: (B:3:0x000a, B:5:0x0011, B:13:0x0049, B:15:0x0051, B:17:0x0058, B:19:0x0060, B:21:0x0067, B:23:0x006f, B:25:0x0076, B:27:0x007f, B:29:0x0086, B:7:0x001a, B:9:0x0024, B:11:0x0031, B:12:0x0037), top: B:34:0x000a }] */
    /* JADX WARN: Code duplicated, block: B:16:0x0057  */
    /* JADX WARN: Code duplicated, block: B:19:0x0060 A[Catch: Exception -> 0x009a, TryCatch #0 {Exception -> 0x009a, blocks: (B:3:0x000a, B:5:0x0011, B:13:0x0049, B:15:0x0051, B:17:0x0058, B:19:0x0060, B:21:0x0067, B:23:0x006f, B:25:0x0076, B:27:0x007f, B:29:0x0086, B:7:0x001a, B:9:0x0024, B:11:0x0031, B:12:0x0037), top: B:34:0x000a }] */
    /* JADX WARN: Code duplicated, block: B:20:0x0066  */
    /* JADX WARN: Code duplicated, block: B:23:0x006f A[Catch: Exception -> 0x009a, TryCatch #0 {Exception -> 0x009a, blocks: (B:3:0x000a, B:5:0x0011, B:13:0x0049, B:15:0x0051, B:17:0x0058, B:19:0x0060, B:21:0x0067, B:23:0x006f, B:25:0x0076, B:27:0x007f, B:29:0x0086, B:7:0x001a, B:9:0x0024, B:11:0x0031, B:12:0x0037), top: B:34:0x000a }] */
    /* JADX WARN: Code duplicated, block: B:24:0x0075  */
    /* JADX WARN: Code duplicated, block: B:27:0x007f A[Catch: Exception -> 0x009a, TryCatch #0 {Exception -> 0x009a, blocks: (B:3:0x000a, B:5:0x0011, B:13:0x0049, B:15:0x0051, B:17:0x0058, B:19:0x0060, B:21:0x0067, B:23:0x006f, B:25:0x0076, B:27:0x007f, B:29:0x0086, B:7:0x001a, B:9:0x0024, B:11:0x0031, B:12:0x0037), top: B:34:0x000a }] */
    /* JADX WARN: Code duplicated, block: B:28:0x0085  */
    public final AdRevenueData parseRevenueBundle(Bundle bundle) {
        Double dValueOf;
        String string;
        String strValidateString;
        String string2;
        String strValidateString2;
        String string3;
        String strValidateString3;
        String string4;
        String strValidateString4;
        try {
            if (bundle.containsKey(KEY_REVENUE)) {
                double d = bundle.getDouble(KEY_REVENUE);
                if (d < 0.0d || Math.abs(d) > Double.MAX_VALUE) {
                    Logger.DefaultImpls.trace$default(this.logger, "Invalid or missing revenue in revenue event: " + d, null, 2, null);
                } else {
                    dValueOf = Double.valueOf(d);
                }
                string = bundle.getString("country_code");
                if (string != null) {
                    strValidateString = validateString(string);
                } else {
                    strValidateString = null;
                }
                string2 = bundle.getString(KEY_NETWORK_NAME);
                if (string2 != null) {
                    strValidateString2 = validateString(string2);
                } else {
                    strValidateString2 = null;
                }
                string3 = bundle.getString(KEY_MAX_AD_UNIT_ID);
                if (string3 != null) {
                    strValidateString3 = validateString(string3);
                } else {
                    strValidateString3 = null;
                }
                string4 = bundle.getString(KEY_THIRD_PARTY_AD_PLACEMENT_ID);
                if (string4 != null) {
                    strValidateString4 = validateString(string4);
                } else {
                    strValidateString4 = null;
                }
                return new AdRevenueData(null, dValueOf, strValidateString, strValidateString2, strValidateString3, strValidateString4, parseMaxAdFormatString(bundle.getString("ad_format")), 1, null);
            }
            Logger.DefaultImpls.trace$default(this.logger, "Missing revenue key in revenue event", null, 2, null);
            dValueOf = null;
            string = bundle.getString("country_code");
            if (string != null) {
                strValidateString = validateString(string);
            } else {
                strValidateString = null;
            }
            string2 = bundle.getString(KEY_NETWORK_NAME);
            if (string2 != null) {
                strValidateString2 = validateString(string2);
            } else {
                strValidateString2 = null;
            }
            string3 = bundle.getString(KEY_MAX_AD_UNIT_ID);
            if (string3 != null) {
                strValidateString3 = validateString(string3);
            } else {
                strValidateString3 = null;
            }
            string4 = bundle.getString(KEY_THIRD_PARTY_AD_PLACEMENT_ID);
            if (string4 != null) {
                strValidateString4 = validateString(string4);
            } else {
                strValidateString4 = null;
            }
            return new AdRevenueData(null, dValueOf, strValidateString, strValidateString2, strValidateString3, strValidateString4, parseMaxAdFormatString(bundle.getString("ad_format")), 1, null);
        } catch (Exception e) {
            this.logger.trace("Failed to parse revenue Bundle", e);
            return null;
        }
    }

    private final String bundleToTraceString(final Bundle bundle) {
        try {
            if (bundle.isEmpty()) {
                return "{}";
            }
            Set<String> setKeySet = bundle.keySet();
            Intrinsics.checkNotNullExpressionValue(setKeySet, "keySet(...)");
            return CollectionsKt.joinToString$default(setKeySet, null, "{", "}", 0, null, new Function1() { // from class: com.unity3d.ads.core.data.datasource.MaxAdRevenueListener$$ExternalSyntheticLambda1
                @Override // kotlin.jvm.functions.Function1
                public final Object invoke(Object obj) {
                    return MaxAdRevenueListener.bundleToTraceString$lambda$1(bundle, (String) obj);
                }
            }, 25, null);
        } catch (Throwable unused) {
            return "<error serializing bundle>";
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final CharSequence bundleToTraceString$lambda$1(Bundle bundle, String str) {
        String string;
        StringBuilder sb;
        try {
            Object obj = bundle.get(str);
            if (obj == null) {
                string = "null";
            } else if (obj instanceof String) {
                if (((String) obj).length() <= 500) {
                    sb = new StringBuilder("\"");
                    sb.append((String) obj);
                    sb.append(Typography.quote);
                } else {
                    sb = new StringBuilder("\"");
                    sb.append(StringsKt.take((String) obj, 500));
                    sb.append("...\"");
                }
                string = sb.toString();
            } else {
                string = obj.toString();
            }
            return str + '=' + string;
        } catch (Throwable unused) {
            return str + "=<error>";
        }
    }

    private final String validateString(String str) {
        if (StringsKt.isBlank(str) || str.length() > 500) {
            return null;
        }
        return str;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code restructure failed: missing block: B:16:0x0033, code lost:
    
        if (r0.equals("REWARDED_INTERSTITIAL") == false) goto L44;
     */
    /* JADX WARN: Code restructure failed: missing block: B:19:0x003c, code lost:
    
        if (r0.equals("REWARDED_INTER") == false) goto L44;
     */
    /* JADX WARN: Code restructure failed: missing block: B:22:0x0045, code lost:
    
        if (r0.equals("REWARDED") == false) goto L44;
     */
    /* JADX WARN: Code restructure failed: missing block: B:25:0x004a, code lost:
    
        return com.unity3d.ads.core.data.model.AdRevenueAdFormat.REWARDED;
     */
    /* JADX WARN: Code restructure failed: missing block: B:27:0x0051, code lost:
    
        if (r0.equals("INTER") == false) goto L44;
     */
    /* JADX WARN: Code restructure failed: missing block: B:35:0x0066, code lost:
    
        if (r0.equals("INTERSTITIAL") == false) goto L44;
     */
    /* JADX WARN: Code restructure failed: missing block: B:38:0x006b, code lost:
    
        return com.unity3d.ads.core.data.model.AdRevenueAdFormat.INTERSTITIAL;
     */
    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private final com.unity3d.ads.core.data.model.AdRevenueAdFormat parseMaxAdFormatString(java.lang.String r3) {
        /*
            r2 = this;
            r0 = r3
            java.lang.CharSequence r0 = (java.lang.CharSequence) r0
            if (r0 == 0) goto L7f
            boolean r0 = kotlin.text.StringsKt.isBlank(r0)
            if (r0 == 0) goto Ld
            goto L7f
        Ld:
            java.util.Locale r0 = java.util.Locale.ROOT
            java.lang.String r0 = r3.toUpperCase(r0)
            java.lang.String r1 = "toUpperCase(...)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            int r1 = r0.hashCode()
            switch(r1) {
                case -1999289321: goto L6c;
                case -1372958932: goto L60;
                case 2374915: goto L54;
                case 69823676: goto L4b;
                case 543046670: goto L3f;
                case 1654540619: goto L36;
                case 1854800829: goto L2d;
                case 1951953708: goto L21;
                default: goto L20;
            }
        L20:
            goto L78
        L21:
            java.lang.String r1 = "BANNER"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L2a
            goto L78
        L2a:
            com.unity3d.ads.core.data.model.AdRevenueAdFormat r3 = com.unity3d.ads.core.data.model.AdRevenueAdFormat.BANNER
            return r3
        L2d:
            java.lang.String r1 = "REWARDED_INTERSTITIAL"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L48
            goto L78
        L36:
            java.lang.String r1 = "REWARDED_INTER"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L48
            goto L78
        L3f:
            java.lang.String r1 = "REWARDED"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L48
            goto L78
        L48:
            com.unity3d.ads.core.data.model.AdRevenueAdFormat r3 = com.unity3d.ads.core.data.model.AdRevenueAdFormat.REWARDED
            return r3
        L4b:
            java.lang.String r1 = "INTER"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L69
            goto L78
        L54:
            java.lang.String r1 = "MREC"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L5d
            goto L78
        L5d:
            com.unity3d.ads.core.data.model.AdRevenueAdFormat r3 = com.unity3d.ads.core.data.model.AdRevenueAdFormat.MREC
            return r3
        L60:
            java.lang.String r1 = "INTERSTITIAL"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L69
            goto L78
        L69:
            com.unity3d.ads.core.data.model.AdRevenueAdFormat r3 = com.unity3d.ads.core.data.model.AdRevenueAdFormat.INTERSTITIAL
            return r3
        L6c:
            java.lang.String r1 = "NATIVE"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L75
            goto L78
        L75:
            com.unity3d.ads.core.data.model.AdRevenueAdFormat r3 = com.unity3d.ads.core.data.model.AdRevenueAdFormat.NATIVE
            return r3
        L78:
            com.unity3d.ads.core.data.model.AdRevenueAdFormat$Companion r0 = com.unity3d.ads.core.data.model.AdRevenueAdFormat.INSTANCE
            com.unity3d.ads.core.data.model.AdRevenueAdFormat r3 = r0.fromString(r3)
            return r3
        L7f:
            r3 = 0
            return r3
        */
        throw new UnsupportedOperationException("Method not decompiled: com.unity3d.ads.core.data.datasource.MaxAdRevenueListener.parseMaxAdFormatString(java.lang.String):com.unity3d.ads.core.data.model.AdRevenueAdFormat");
    }
}
