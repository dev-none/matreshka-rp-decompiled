package com.vk.id.analytics.stat;

import android.content.Context;
import com.vk.id.analytics.VKIDAnalytics;
import com.vk.id.common.InternalVKIDApi;
import com.vk.id.logger.InternalVKIDLog;
import com.vk.id.logger.InternalVKIDLogger;
import com.vk.id.network.InternalVKIDApiContract;
import com.vk.id.network.InternalVKIDCall;
import com.vk.id.network.http.HttpResponse;
import io.flutter.plugins.firebase.auth.Constants;
import io.sentry.SentryEvent;
import io.sentry.protocol.Message;
import io.sentry.protocol.Request;
import java.util.ArrayList;
import java.util.Collection;
import java.util.concurrent.LinkedBlockingQueue;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.Result;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.ContinuationImpl;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.functions.Function6;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.BuildersKt__Builders_commonKt;
import kotlinx.coroutines.CoroutineDispatcher;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.CoroutineScopeKt;
import kotlinx.coroutines.Dispatchers;
import kotlinx.coroutines.Job;
import kotlinx.coroutines.SupervisorKt;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: compiled from: StatTracker.kt */
/* JADX INFO: loaded from: classes6.dex */
@InternalVKIDApi
@Metadata(d1 = {"\u0000\u0094\u0001\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\b\u0007\u0018\u0000 42\u00020\u0001:\u00014B5\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\f\u0010\u0005\u001a\b\u0012\u0004\u0012\u00020\u00070\u0006\u0012\u0006\u0010\b\u001a\u00020\t\u0012\u0006\u0010\n\u001a\u00020\u000b¢\u0006\u0004\b\f\u0010\rJ3\u0010\u001a\u001a\u00020\u001b2\b\u0010\u001c\u001a\u0004\u0018\u00010\u00032\u0006\u0010\u001d\u001a\u00020\u00032\u0012\u0010\u001e\u001a\n\u0012\u0006\b\u0001\u0012\u00020 0\u001f\"\u00020 H\u0016¢\u0006\u0002\u0010!J¸\u0001\u0010\"\u001a\u00020\u001b2\u0006\u0010\u001c\u001a\u00020\u00032\f\u0010#\u001a\b\u0012\u0004\u0012\u00020\u00160\u00152\u0091\u0001\u0010$\u001a\u008c\u0001\u0012\u0013\u0012\u00110\u0003¢\u0006\f\b&\u0012\b\b\u001d\u0012\u0004\b\b(\u001c\u0012\u0013\u0012\u00110\u0003¢\u0006\f\b&\u0012\b\b\u001d\u0012\u0004\b\b(\u0002\u0012\u0013\u0012\u00110\u0003¢\u0006\f\b&\u0012\b\b\u001d\u0012\u0004\b\b(\u0004\u0012\u0013\u0012\u00110\u0003¢\u0006\f\b&\u0012\b\b\u001d\u0012\u0004\b\b('\u0012\u0013\u0012\u00110(¢\u0006\f\b&\u0012\b\b\u001d\u0012\u0004\b\b()\u0012\u0013\u0012\u00110\u0003¢\u0006\f\b&\u0012\b\b\u001d\u0012\u0004\b\b(*\u0012\n\u0012\b\u0012\u0004\u0012\u00020,0+0%H\u0082@¢\u0006\u0002\u0010-J\u0013\u0010.\u001a\u00020/2\b\u00100\u001a\u0004\u0018\u000101H\u0096\u0002J\b\u00102\u001a\u000203H\u0016R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\u0005\u001a\b\u0012\u0004\u0012\u00020\u00070\u0006X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u000e\u001a\u00020\u000fX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0010\u001a\u00020\u0011X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0012\u001a\u00020\u0013X\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\u0014\u001a\b\u0012\u0004\u0012\u00020\u00160\u0015X\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\u0017\u001a\b\u0012\u0004\u0012\u00020\u00160\u0015X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0018\u001a\u00020\u0019X\u0082\u0004¢\u0006\u0002\n\u0000¨\u00065"}, d2 = {"Lcom/vk/id/analytics/stat/StatTracker;", "Lcom/vk/id/analytics/VKIDAnalytics$Tracker;", "clientId", "", "clientSecret", "api", "Lkotlin/Lazy;", "Lcom/vk/id/network/InternalVKIDApiContract;", "dispatcher", "Lkotlinx/coroutines/CoroutineDispatcher;", "context", "Landroid/content/Context;", "<init>", "(Ljava/lang/String;Ljava/lang/String;Lkotlin/Lazy;Lkotlinx/coroutines/CoroutineDispatcher;Landroid/content/Context;)V", "storage", "Lcom/vk/id/analytics/stat/AnalyticsStorage;", "trackerScope", "Lkotlinx/coroutines/CoroutineScope;", SentryEvent.JsonKeys.LOGGER, "Lcom/vk/id/logger/InternalVKIDLogger;", "anonymousBatchEvents", "Ljava/util/concurrent/LinkedBlockingQueue;", "Lorg/json/JSONObject;", "personalizedBatchEvents", "eventCounter", "Lcom/vk/id/analytics/stat/EventCounter;", "trackEvent", "", Constants.ACCESS_TOKEN, "name", Message.JsonKeys.PARAMS, "", "Lcom/vk/id/analytics/VKIDAnalytics$EventParam;", "(Ljava/lang/String;Ljava/lang/String;[Lcom/vk/id/analytics/VKIDAnalytics$EventParam;)V", "sendEvents", "batchEvents", "apiMethod", "Lkotlin/Function6;", "Lkotlin/ParameterName;", "versionName", "Lorg/json/JSONArray;", "eventsJson", "externalDeviceId", "Lcom/vk/id/network/InternalVKIDCall;", "Lcom/vk/id/network/http/HttpResponse;", "(Ljava/lang/String;Ljava/util/concurrent/LinkedBlockingQueue;Lkotlin/jvm/functions/Function6;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "equals", "", Request.JsonKeys.OTHER, "", "hashCode", "", "Companion", "analytics_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class StatTracker implements VKIDAnalytics.Tracker {
    public static final String EXTERNAL_PARAM_FLOW_SOURCE = "flow_source";
    public static final String EXTERNAL_PARAM_SESSION_ID = "session_id";
    private final LinkedBlockingQueue<JSONObject> anonymousBatchEvents;
    private final Lazy<InternalVKIDApiContract> api;
    private final String clientId;
    private final String clientSecret;
    private final EventCounter eventCounter;
    private final InternalVKIDLogger logger;
    private final LinkedBlockingQueue<JSONObject> personalizedBatchEvents;
    private final AnalyticsStorage storage;
    private final CoroutineScope trackerScope;

    /* JADX INFO: renamed from: com.vk.id.analytics.stat.StatTracker$sendEvents$1, reason: invalid class name */
    /* JADX INFO: compiled from: StatTracker.kt */
    @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.analytics.stat.StatTracker", f = "StatTracker.kt", i = {0}, l = {108}, m = "sendEvents", n = {"this"}, s = {"L$0"})
    static final class AnonymousClass1 extends ContinuationImpl {
        Object L$0;
        int label;
        /* synthetic */ Object result;

        AnonymousClass1(Continuation<? super AnonymousClass1> continuation) {
            super(continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            this.result = obj;
            this.label |= Integer.MIN_VALUE;
            return StatTracker.this.sendEvents(null, null, null, this);
        }
    }

    @Override // com.vk.id.analytics.VKIDAnalytics.Tracker
    @InternalVKIDApi
    public void trackEvent(String str, VKIDAnalytics.EventParam... eventParamArr) {
        VKIDAnalytics.Tracker.DefaultImpls.trackEvent(this, str, eventParamArr);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public StatTracker(String clientId, String clientSecret, Lazy<? extends InternalVKIDApiContract> api, CoroutineDispatcher dispatcher, Context context) {
        Intrinsics.checkNotNullParameter(clientId, "clientId");
        Intrinsics.checkNotNullParameter(clientSecret, "clientSecret");
        Intrinsics.checkNotNullParameter(api, "api");
        Intrinsics.checkNotNullParameter(dispatcher, "dispatcher");
        Intrinsics.checkNotNullParameter(context, "context");
        this.clientId = clientId;
        this.clientSecret = clientSecret;
        this.api = api;
        this.storage = new AnalyticsStorage(context);
        this.trackerScope = CoroutineScopeKt.CoroutineScope(dispatcher.plus(SupervisorKt.SupervisorJob$default((Job) null, 1, (Object) null)));
        InternalVKIDLog internalVKIDLog = InternalVKIDLog.INSTANCE;
        Intrinsics.checkNotNullExpressionValue("StatTracker", "getSimpleName(...)");
        this.logger = internalVKIDLog.createLoggerForTag("StatTracker");
        this.anonymousBatchEvents = new LinkedBlockingQueue<>();
        this.personalizedBatchEvents = new LinkedBlockingQueue<>();
        this.eventCounter = new EventCounter();
    }

    /* JADX INFO: renamed from: com.vk.id.analytics.stat.StatTracker$trackEvent$1, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: StatTracker.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.analytics.stat.StatTracker$trackEvent$1", f = "StatTracker.kt", i = {}, l = {}, m = "invokeSuspend", n = {}, s = {})
    static final class C19511 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ String $accessToken;
        final /* synthetic */ String $name;
        final /* synthetic */ VKIDAnalytics.EventParam[] $params;
        int label;
        final /* synthetic */ StatTracker this$0;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        C19511(String str, VKIDAnalytics.EventParam[] eventParamArr, StatTracker statTracker, String str2, Continuation<? super C19511> continuation) {
            super(2, continuation);
            this.$name = str;
            this.$params = eventParamArr;
            this.this$0 = statTracker;
            this.$accessToken = str2;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new C19511(this.$name, this.$params, this.this$0, this.$accessToken, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((C19511) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            IntrinsicsKt.getCOROUTINE_SUSPENDED();
            if (this.label != 0) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ResultKt.throwOnFailure(obj);
            StatEventJson statEventJson = new StatEventJson(this.$name, this.$params, this.this$0.eventCounter.getEventId(), this.this$0.eventCounter.getPrevEventId());
            this.this$0.eventCounter.increment();
            (this.$accessToken == null ? this.this$0.anonymousBatchEvents : this.this$0.personalizedBatchEvents).add(statEventJson.getJson());
            BuildersKt__Builders_commonKt.launch$default(this.this$0.trackerScope, null, null, new C11901(this.this$0, this.$accessToken, null), 3, null);
            return Unit.INSTANCE;
        }

        /* JADX INFO: renamed from: com.vk.id.analytics.stat.StatTracker$trackEvent$1$1, reason: invalid class name and collision with other inner class name */
        /* JADX INFO: compiled from: StatTracker.kt */
        @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 0, 0}, xi = 48)
        @DebugMetadata(c = "com.vk.id.analytics.stat.StatTracker$trackEvent$1$1", f = "StatTracker.kt", i = {}, l = {60, 61, 75}, m = "invokeSuspend", n = {}, s = {})
        static final class C11901 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
            final /* synthetic */ String $accessToken;
            int label;
            final /* synthetic */ StatTracker this$0;

            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            C11901(StatTracker statTracker, String str, Continuation<? super C11901> continuation) {
                super(2, continuation);
                this.this$0 = statTracker;
                this.$accessToken = str;
            }

            @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
            public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
                return new C11901(this.this$0, this.$accessToken, continuation);
            }

            @Override // kotlin.jvm.functions.Function2
            public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
                return ((C11901) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
            }

            /* JADX WARN: Code duplicated, block: B:20:0x005b  */
            /* JADX WARN: Code restructure failed: missing block: B:21:0x007b, code lost:
            
                if (r1.sendEvents(r8, r1.personalizedBatchEvents, new com.vk.id.analytics.stat.StatTracker.C19511.C11901.AnonymousClass2(r7.this$0.api.getValue()), r7) == r0) goto L22;
             */
            @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
            /*
                Code decompiled incorrectly, please refer to instructions dump.
                To view partially-correct add '--show-bad-code' argument
            */
            public final java.lang.Object invokeSuspend(java.lang.Object r8) {
                /*
                    r7 = this;
                    java.lang.Object r0 = kotlin.coroutines.intrinsics.IntrinsicsKt.getCOROUTINE_SUSPENDED()
                    int r1 = r7.label
                    r2 = 3
                    r3 = 2
                    r4 = 1
                    if (r1 == 0) goto L25
                    if (r1 == r4) goto L21
                    if (r1 == r3) goto L1d
                    if (r1 != r2) goto L15
                    kotlin.ResultKt.throwOnFailure(r8)
                    goto L7e
                L15:
                    java.lang.IllegalStateException r8 = new java.lang.IllegalStateException
                    java.lang.String r0 = "call to 'resume' before 'invoke' with coroutine"
                    r8.<init>(r0)
                    throw r8
                L1d:
                    kotlin.ResultKt.throwOnFailure(r8)
                    goto L57
                L21:
                    kotlin.ResultKt.throwOnFailure(r8)
                    goto L3c
                L25:
                    kotlin.ResultKt.throwOnFailure(r8)
                    kotlin.time.Duration$Companion r8 = kotlin.time.Duration.INSTANCE
                    kotlin.time.DurationUnit r8 = kotlin.time.DurationUnit.SECONDS
                    long r5 = kotlin.time.DurationKt.toDuration(r4, r8)
                    r8 = r7
                    kotlin.coroutines.Continuation r8 = (kotlin.coroutines.Continuation) r8
                    r7.label = r4
                    java.lang.Object r8 = kotlinx.coroutines.DelayKt.m11356delayVtjQ1oo(r5, r8)
                    if (r8 != r0) goto L3c
                    goto L7d
                L3c:
                    com.vk.id.analytics.stat.StatTracker r8 = r7.this$0
                    java.util.concurrent.LinkedBlockingQueue r1 = com.vk.id.analytics.stat.StatTracker.access$getAnonymousBatchEvents$p(r8)
                    com.vk.id.analytics.stat.StatTracker r4 = r7.this$0
                    com.vk.id.analytics.stat.StatTracker$trackEvent$1$1$$ExternalSyntheticLambda0 r5 = new com.vk.id.analytics.stat.StatTracker$trackEvent$1$1$$ExternalSyntheticLambda0
                    r5.<init>()
                    r4 = r7
                    kotlin.coroutines.Continuation r4 = (kotlin.coroutines.Continuation) r4
                    r7.label = r3
                    java.lang.String r3 = ""
                    java.lang.Object r8 = com.vk.id.analytics.stat.StatTracker.access$sendEvents(r8, r3, r1, r5, r4)
                    if (r8 != r0) goto L57
                    goto L7d
                L57:
                    java.lang.String r8 = r7.$accessToken
                    if (r8 == 0) goto L7e
                    com.vk.id.analytics.stat.StatTracker r1 = r7.this$0
                    java.util.concurrent.LinkedBlockingQueue r3 = com.vk.id.analytics.stat.StatTracker.access$getPersonalizedBatchEvents$p(r1)
                    com.vk.id.analytics.stat.StatTracker$trackEvent$1$1$2 r4 = new com.vk.id.analytics.stat.StatTracker$trackEvent$1$1$2
                    com.vk.id.analytics.stat.StatTracker r5 = r7.this$0
                    kotlin.Lazy r5 = com.vk.id.analytics.stat.StatTracker.access$getApi$p(r5)
                    java.lang.Object r5 = r5.getValue()
                    r4.<init>(r5)
                    kotlin.jvm.functions.Function6 r4 = (kotlin.jvm.functions.Function6) r4
                    r5 = r7
                    kotlin.coroutines.Continuation r5 = (kotlin.coroutines.Continuation) r5
                    r7.label = r2
                    java.lang.Object r8 = com.vk.id.analytics.stat.StatTracker.access$sendEvents(r1, r8, r3, r4, r5)
                    if (r8 != r0) goto L7e
                L7d:
                    return r0
                L7e:
                    kotlin.Unit r8 = kotlin.Unit.INSTANCE
                    return r8
                */
                throw new UnsupportedOperationException("Method not decompiled: com.vk.id.analytics.stat.StatTracker.C19511.C11901.invokeSuspend(java.lang.Object):java.lang.Object");
            }

            /* JADX INFO: Access modifiers changed from: private */
            public static final InternalVKIDCall invokeSuspend$lambda$0(StatTracker statTracker, String str, String str2, String str3, String str4, JSONArray jSONArray, String str5) {
                return ((InternalVKIDApiContract) statTracker.api.getValue()).sendStatEventsAnonymously(str2, str3, str4, jSONArray, str5);
            }

            /* JADX INFO: renamed from: com.vk.id.analytics.stat.StatTracker$trackEvent$1$1$2, reason: invalid class name */
            /* JADX INFO: compiled from: StatTracker.kt */
            @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
            /* synthetic */ class AnonymousClass2 extends FunctionReferenceImpl implements Function6<String, String, String, String, JSONArray, String, InternalVKIDCall<? extends HttpResponse>> {
                AnonymousClass2(Object obj) {
                    super(6, obj, InternalVKIDApiContract.class, "sendStatEvents", "sendStatEvents(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONArray;Ljava/lang/String;)Lcom/vk/id/network/InternalVKIDCall;", 0);
                }

                @Override // kotlin.jvm.functions.Function6
                public final InternalVKIDCall<HttpResponse> invoke(String p0, String p1, String p2, String p3, JSONArray p4, String p5) {
                    Intrinsics.checkNotNullParameter(p0, "p0");
                    Intrinsics.checkNotNullParameter(p1, "p1");
                    Intrinsics.checkNotNullParameter(p2, "p2");
                    Intrinsics.checkNotNullParameter(p3, "p3");
                    Intrinsics.checkNotNullParameter(p4, "p4");
                    Intrinsics.checkNotNullParameter(p5, "p5");
                    return ((InternalVKIDApiContract) this.receiver).sendStatEvents(p0, p1, p2, p3, p4, p5);
                }
            }
        }
    }

    @Override // com.vk.id.analytics.VKIDAnalytics.Tracker
    public void trackEvent(String accessToken, String name, VKIDAnalytics.EventParam... params) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(params, "params");
        BuildersKt__Builders_commonKt.launch$default(CoroutineScopeKt.CoroutineScope(Dispatchers.getIO()), null, null, new C19511(name, params, this, accessToken, null), 3, null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Code duplicated, block: B:7:0x0014  */
    public final Object sendEvents(String str, LinkedBlockingQueue<JSONObject> linkedBlockingQueue, Function6<? super String, ? super String, ? super String, ? super String, ? super JSONArray, ? super String, ? extends InternalVKIDCall<HttpResponse>> function6, Continuation<? super Unit> continuation) {
        AnonymousClass1 anonymousClass1;
        Object objMo9311executeIoAF18A;
        StatTracker statTracker;
        if (continuation instanceof AnonymousClass1) {
            anonymousClass1 = (AnonymousClass1) continuation;
            if ((anonymousClass1.label & Integer.MIN_VALUE) != 0) {
                anonymousClass1.label -= Integer.MIN_VALUE;
            } else {
                anonymousClass1 = new AnonymousClass1(continuation);
            }
        } else {
            anonymousClass1 = new AnonymousClass1(continuation);
        }
        Object obj = anonymousClass1.result;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = anonymousClass1.label;
        if (i == 0) {
            ResultKt.throwOnFailure(obj);
            ArrayList arrayList = new ArrayList();
            linkedBlockingQueue.drainTo(arrayList);
            if (!arrayList.isEmpty()) {
                InternalVKIDCall<HttpResponse> internalVKIDCallInvoke = function6.invoke(str, this.clientId, this.clientSecret, "2.7.0", new JSONArray((Collection) arrayList), this.storage.getExternalDeviceId());
                anonymousClass1.L$0 = this;
                anonymousClass1.label = 1;
                objMo9311executeIoAF18A = internalVKIDCallInvoke.mo9311executeIoAF18A(anonymousClass1);
                if (objMo9311executeIoAF18A == coroutine_suspended) {
                    return coroutine_suspended;
                }
                statTracker = this;
            }
            return Unit.INSTANCE;
        }
        if (i != 1) {
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
        statTracker = (StatTracker) anonymousClass1.L$0;
        ResultKt.throwOnFailure(obj);
        objMo9311executeIoAF18A = ((Result) obj).getValue();
        if (Result.m9867isFailureimpl(objMo9311executeIoAF18A)) {
            objMo9311executeIoAF18A = null;
        }
        HttpResponse httpResponse = (HttpResponse) objMo9311executeIoAF18A;
        String body = httpResponse != null ? httpResponse.getBody() : null;
        if (body != null) {
            try {
                if (new JSONObject(body).has("error")) {
                    statTracker.logger.error(body, null);
                } else {
                    statTracker.logger.debug(body);
                }
            } catch (JSONException unused) {
                statTracker.logger.debug(body);
            }
        }
        return Unit.INSTANCE;
    }

    public boolean equals(Object other) {
        return (other instanceof StatTracker) && Intrinsics.areEqual(this.clientSecret, ((StatTracker) other).clientSecret);
    }

    public int hashCode() {
        return this.clientSecret.hashCode();
    }
}
