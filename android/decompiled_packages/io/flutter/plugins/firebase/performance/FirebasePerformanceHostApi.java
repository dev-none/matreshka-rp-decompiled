package io.flutter.plugins.firebase.performance;

import io.flutter.plugin.common.BasicMessageChannel;
import io.flutter.plugin.common.BinaryMessenger;
import io.flutter.plugin.common.MessageCodec;
import io.flutter.plugins.firebase.analytics.Constants;
import java.util.List;
import kotlin.Lazy;
import kotlin.LazyKt;
import kotlin.Metadata;
import kotlin.Result;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: GeneratedAndroidFirebasePerformance.g.kt */
/* JADX INFO: loaded from: classes7.dex */
@Metadata(d1 = {"\u0000D\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\u0010\t\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\bf\u0018\u0000 \u00172\u00020\u0001:\u0001\u0017J*\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u00052\u0018\u0010\u0006\u001a\u0014\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00030\b\u0012\u0004\u0012\u00020\u00030\u0007H&J\"\u0010\t\u001a\u00020\u00032\u0018\u0010\u0006\u001a\u0014\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00050\b\u0012\u0004\u0012\u00020\u00030\u0007H&J*\u0010\n\u001a\u00020\u00032\u0006\u0010\u000b\u001a\u00020\f2\u0018\u0010\u0006\u001a\u0014\u0012\n\u0012\b\u0012\u0004\u0012\u00020\r0\b\u0012\u0004\u0012\u00020\u00030\u0007H&J2\u0010\u000e\u001a\u00020\u00032\u0006\u0010\u000f\u001a\u00020\r2\u0006\u0010\u0010\u001a\u00020\u00112\u0018\u0010\u0006\u001a\u0014\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00030\b\u0012\u0004\u0012\u00020\u00030\u0007H&J*\u0010\u0012\u001a\u00020\u00032\u0006\u0010\u0013\u001a\u00020\u00142\u0018\u0010\u0006\u001a\u0014\u0012\n\u0012\b\u0012\u0004\u0012\u00020\r0\b\u0012\u0004\u0012\u00020\u00030\u0007H&J2\u0010\u0015\u001a\u00020\u00032\u0006\u0010\u000f\u001a\u00020\r2\u0006\u0010\u0010\u001a\u00020\u00162\u0018\u0010\u0006\u001a\u0014\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00030\b\u0012\u0004\u0012\u00020\u00030\u0007H&¨\u0006\u0018À\u0006\u0003"}, d2 = {"Lio/flutter/plugins/firebase/performance/FirebasePerformanceHostApi;", "", "setPerformanceCollectionEnabled", "", Constants.ENABLED, "", "callback", "Lkotlin/Function1;", "Lkotlin/Result;", "isPerformanceCollectionEnabled", "startTrace", "name", "", "", "stopTrace", "handle", "attributes", "Lio/flutter/plugins/firebase/performance/TraceAttributes;", "startHttpMetric", "options", "Lio/flutter/plugins/firebase/performance/HttpMetricOptions;", "stopHttpMetric", "Lio/flutter/plugins/firebase/performance/HttpMetricAttributes;", "Companion", "firebase_performance_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public interface FirebasePerformanceHostApi {

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = Companion.$$INSTANCE;

    void isPerformanceCollectionEnabled(Function1<? super Result<Boolean>, Unit> callback);

    void setPerformanceCollectionEnabled(boolean enabled, Function1<? super Result<Unit>, Unit> callback);

    void startHttpMetric(HttpMetricOptions options, Function1<? super Result<Long>, Unit> callback);

    void startTrace(String name, Function1<? super Result<Long>, Unit> callback);

    void stopHttpMetric(long handle, HttpMetricAttributes attributes, Function1<? super Result<Unit>, Unit> callback);

    void stopTrace(long handle, TraceAttributes attributes, Function1<? super Result<Unit>, Unit> callback);

    /* JADX INFO: compiled from: GeneratedAndroidFirebasePerformance.g.kt */
    @Metadata(d1 = {"\u0000,\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J$\u0010\n\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\r2\b\u0010\u000e\u001a\u0004\u0018\u00010\u000f2\b\b\u0002\u0010\u0010\u001a\u00020\u0011H\u0007R#\u0010\u0004\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\u00010\u00058FX\u0086\u0084\u0002¢\u0006\f\n\u0004\b\b\u0010\t\u001a\u0004\b\u0006\u0010\u0007¨\u0006\u0012"}, d2 = {"Lio/flutter/plugins/firebase/performance/FirebasePerformanceHostApi$Companion;", "", "<init>", "()V", "codec", "Lio/flutter/plugin/common/MessageCodec;", "getCodec", "()Lio/flutter/plugin/common/MessageCodec;", "codec$delegate", "Lkotlin/Lazy;", "setUp", "", "binaryMessenger", "Lio/flutter/plugin/common/BinaryMessenger;", "api", "Lio/flutter/plugins/firebase/performance/FirebasePerformanceHostApi;", "messageChannelSuffix", "", "firebase_performance_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
    public static final class Companion {
        static final /* synthetic */ Companion $$INSTANCE = new Companion();

        /* JADX INFO: renamed from: codec$delegate, reason: from kotlin metadata */
        private static final Lazy<GeneratedAndroidFirebasePerformancePigeonCodec> codec = LazyKt.lazy(new Function0() { // from class: io.flutter.plugins.firebase.performance.FirebasePerformanceHostApi$Companion$$ExternalSyntheticLambda3
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return FirebasePerformanceHostApi.Companion.codec_delegate$lambda$0();
            }
        });

        public final void setUp(BinaryMessenger binaryMessenger, FirebasePerformanceHostApi firebasePerformanceHostApi) {
            Intrinsics.checkNotNullParameter(binaryMessenger, "binaryMessenger");
            setUp$default(this, binaryMessenger, firebasePerformanceHostApi, null, 4, null);
        }

        private Companion() {
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final GeneratedAndroidFirebasePerformancePigeonCodec codec_delegate$lambda$0() {
            return new GeneratedAndroidFirebasePerformancePigeonCodec();
        }

        public final MessageCodec<Object> getCodec() {
            return codec.getValue();
        }

        public static /* synthetic */ void setUp$default(Companion companion, BinaryMessenger binaryMessenger, FirebasePerformanceHostApi firebasePerformanceHostApi, String str, int i, Object obj) {
            if ((i & 4) != 0) {
                str = "";
            }
            companion.setUp(binaryMessenger, firebasePerformanceHostApi, str);
        }

        public final void setUp(BinaryMessenger binaryMessenger, final FirebasePerformanceHostApi api, String messageChannelSuffix) {
            String str;
            Intrinsics.checkNotNullParameter(binaryMessenger, "binaryMessenger");
            Intrinsics.checkNotNullParameter(messageChannelSuffix, "messageChannelSuffix");
            if (messageChannelSuffix.length() > 0) {
                str = "." + messageChannelSuffix;
            } else {
                str = "";
            }
            BasicMessageChannel basicMessageChannel = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_performance_platform_interface.FirebasePerformanceHostApi.setPerformanceCollectionEnabled" + str, getCodec());
            if (api != null) {
                basicMessageChannel.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.performance.FirebasePerformanceHostApi$Companion$$ExternalSyntheticLambda4
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        FirebasePerformanceHostApi.Companion.setUp$lambda$0$0(api, obj, reply);
                    }
                });
            } else {
                basicMessageChannel.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel2 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_performance_platform_interface.FirebasePerformanceHostApi.isPerformanceCollectionEnabled" + str, getCodec());
            if (api != null) {
                basicMessageChannel2.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.performance.FirebasePerformanceHostApi$Companion$$ExternalSyntheticLambda5
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        FirebasePerformanceHostApi.Companion.setUp$lambda$1$0(api, obj, reply);
                    }
                });
            } else {
                basicMessageChannel2.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel3 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_performance_platform_interface.FirebasePerformanceHostApi.startTrace" + str, getCodec());
            if (api != null) {
                basicMessageChannel3.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.performance.FirebasePerformanceHostApi$Companion$$ExternalSyntheticLambda6
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        FirebasePerformanceHostApi.Companion.setUp$lambda$2$0(api, obj, reply);
                    }
                });
            } else {
                basicMessageChannel3.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel4 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_performance_platform_interface.FirebasePerformanceHostApi.stopTrace" + str, getCodec());
            if (api != null) {
                basicMessageChannel4.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.performance.FirebasePerformanceHostApi$Companion$$ExternalSyntheticLambda7
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        FirebasePerformanceHostApi.Companion.setUp$lambda$3$0(api, obj, reply);
                    }
                });
            } else {
                basicMessageChannel4.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel5 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_performance_platform_interface.FirebasePerformanceHostApi.startHttpMetric" + str, getCodec());
            if (api != null) {
                basicMessageChannel5.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.performance.FirebasePerformanceHostApi$Companion$$ExternalSyntheticLambda8
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        FirebasePerformanceHostApi.Companion.setUp$lambda$4$0(api, obj, reply);
                    }
                });
            } else {
                basicMessageChannel5.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel6 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_performance_platform_interface.FirebasePerformanceHostApi.stopHttpMetric" + str, getCodec());
            if (api != null) {
                basicMessageChannel6.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.performance.FirebasePerformanceHostApi$Companion$$ExternalSyntheticLambda9
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        FirebasePerformanceHostApi.Companion.setUp$lambda$5$0(api, obj, reply);
                    }
                });
            } else {
                basicMessageChannel6.setMessageHandler(null);
            }
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final void setUp$lambda$0$0(FirebasePerformanceHostApi firebasePerformanceHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            Intrinsics.checkNotNullParameter(reply, "reply");
            Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type kotlin.collections.List<kotlin.Any?>");
            Object obj2 = ((List) obj).get(0);
            Intrinsics.checkNotNull(obj2, "null cannot be cast to non-null type kotlin.Boolean");
            firebasePerformanceHostApi.setPerformanceCollectionEnabled(((Boolean) obj2).booleanValue(), new Function1() { // from class: io.flutter.plugins.firebase.performance.FirebasePerformanceHostApi$Companion$$ExternalSyntheticLambda11
                @Override // kotlin.jvm.functions.Function1
                public final Object invoke(Object obj3) {
                    return FirebasePerformanceHostApi.Companion.setUp$lambda$0$0$0(reply, (Result) obj3);
                }
            });
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final Unit setUp$lambda$0$0$0(BasicMessageChannel.Reply reply, Result result) {
            Throwable thM9864exceptionOrNullimpl = Result.m9864exceptionOrNullimpl(result.getValue());
            if (thM9864exceptionOrNullimpl != null) {
                reply.reply(GeneratedAndroidFirebasePerformancePigeonUtils.INSTANCE.wrapError(thM9864exceptionOrNullimpl));
            } else {
                reply.reply(GeneratedAndroidFirebasePerformancePigeonUtils.INSTANCE.wrapResult(null));
            }
            return Unit.INSTANCE;
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final void setUp$lambda$1$0(FirebasePerformanceHostApi firebasePerformanceHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            Intrinsics.checkNotNullParameter(reply, "reply");
            firebasePerformanceHostApi.isPerformanceCollectionEnabled(new Function1() { // from class: io.flutter.plugins.firebase.performance.FirebasePerformanceHostApi$Companion$$ExternalSyntheticLambda10
                @Override // kotlin.jvm.functions.Function1
                public final Object invoke(Object obj2) {
                    return FirebasePerformanceHostApi.Companion.setUp$lambda$1$0$0(reply, (Result) obj2);
                }
            });
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final Unit setUp$lambda$1$0$0(BasicMessageChannel.Reply reply, Result result) {
            Throwable thM9864exceptionOrNullimpl = Result.m9864exceptionOrNullimpl(result.getValue());
            if (thM9864exceptionOrNullimpl != null) {
                reply.reply(GeneratedAndroidFirebasePerformancePigeonUtils.INSTANCE.wrapError(thM9864exceptionOrNullimpl));
            } else {
                Object value = result.getValue();
                if (Result.m9867isFailureimpl(value)) {
                    value = null;
                }
                reply.reply(GeneratedAndroidFirebasePerformancePigeonUtils.INSTANCE.wrapResult((Boolean) value));
            }
            return Unit.INSTANCE;
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final void setUp$lambda$2$0(FirebasePerformanceHostApi firebasePerformanceHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            Intrinsics.checkNotNullParameter(reply, "reply");
            Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type kotlin.collections.List<kotlin.Any?>");
            Object obj2 = ((List) obj).get(0);
            Intrinsics.checkNotNull(obj2, "null cannot be cast to non-null type kotlin.String");
            firebasePerformanceHostApi.startTrace((String) obj2, new Function1() { // from class: io.flutter.plugins.firebase.performance.FirebasePerformanceHostApi$Companion$$ExternalSyntheticLambda1
                @Override // kotlin.jvm.functions.Function1
                public final Object invoke(Object obj3) {
                    return FirebasePerformanceHostApi.Companion.setUp$lambda$2$0$0(reply, (Result) obj3);
                }
            });
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final Unit setUp$lambda$2$0$0(BasicMessageChannel.Reply reply, Result result) {
            Throwable thM9864exceptionOrNullimpl = Result.m9864exceptionOrNullimpl(result.getValue());
            if (thM9864exceptionOrNullimpl != null) {
                reply.reply(GeneratedAndroidFirebasePerformancePigeonUtils.INSTANCE.wrapError(thM9864exceptionOrNullimpl));
            } else {
                Object value = result.getValue();
                if (Result.m9867isFailureimpl(value)) {
                    value = null;
                }
                reply.reply(GeneratedAndroidFirebasePerformancePigeonUtils.INSTANCE.wrapResult((Long) value));
            }
            return Unit.INSTANCE;
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final void setUp$lambda$3$0(FirebasePerformanceHostApi firebasePerformanceHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            Intrinsics.checkNotNullParameter(reply, "reply");
            Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type kotlin.collections.List<kotlin.Any?>");
            List list = (List) obj;
            Object obj2 = list.get(0);
            Intrinsics.checkNotNull(obj2, "null cannot be cast to non-null type kotlin.Long");
            long jLongValue = ((Long) obj2).longValue();
            Object obj3 = list.get(1);
            Intrinsics.checkNotNull(obj3, "null cannot be cast to non-null type io.flutter.plugins.firebase.performance.TraceAttributes");
            firebasePerformanceHostApi.stopTrace(jLongValue, (TraceAttributes) obj3, new Function1() { // from class: io.flutter.plugins.firebase.performance.FirebasePerformanceHostApi$Companion$$ExternalSyntheticLambda0
                @Override // kotlin.jvm.functions.Function1
                public final Object invoke(Object obj4) {
                    return FirebasePerformanceHostApi.Companion.setUp$lambda$3$0$0(reply, (Result) obj4);
                }
            });
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final Unit setUp$lambda$3$0$0(BasicMessageChannel.Reply reply, Result result) {
            Throwable thM9864exceptionOrNullimpl = Result.m9864exceptionOrNullimpl(result.getValue());
            if (thM9864exceptionOrNullimpl != null) {
                reply.reply(GeneratedAndroidFirebasePerformancePigeonUtils.INSTANCE.wrapError(thM9864exceptionOrNullimpl));
            } else {
                reply.reply(GeneratedAndroidFirebasePerformancePigeonUtils.INSTANCE.wrapResult(null));
            }
            return Unit.INSTANCE;
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final void setUp$lambda$4$0(FirebasePerformanceHostApi firebasePerformanceHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            Intrinsics.checkNotNullParameter(reply, "reply");
            Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type kotlin.collections.List<kotlin.Any?>");
            Object obj2 = ((List) obj).get(0);
            Intrinsics.checkNotNull(obj2, "null cannot be cast to non-null type io.flutter.plugins.firebase.performance.HttpMetricOptions");
            firebasePerformanceHostApi.startHttpMetric((HttpMetricOptions) obj2, new Function1() { // from class: io.flutter.plugins.firebase.performance.FirebasePerformanceHostApi$Companion$$ExternalSyntheticLambda12
                @Override // kotlin.jvm.functions.Function1
                public final Object invoke(Object obj3) {
                    return FirebasePerformanceHostApi.Companion.setUp$lambda$4$0$0(reply, (Result) obj3);
                }
            });
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final Unit setUp$lambda$4$0$0(BasicMessageChannel.Reply reply, Result result) {
            Throwable thM9864exceptionOrNullimpl = Result.m9864exceptionOrNullimpl(result.getValue());
            if (thM9864exceptionOrNullimpl != null) {
                reply.reply(GeneratedAndroidFirebasePerformancePigeonUtils.INSTANCE.wrapError(thM9864exceptionOrNullimpl));
            } else {
                Object value = result.getValue();
                if (Result.m9867isFailureimpl(value)) {
                    value = null;
                }
                reply.reply(GeneratedAndroidFirebasePerformancePigeonUtils.INSTANCE.wrapResult((Long) value));
            }
            return Unit.INSTANCE;
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final void setUp$lambda$5$0(FirebasePerformanceHostApi firebasePerformanceHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            Intrinsics.checkNotNullParameter(reply, "reply");
            Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type kotlin.collections.List<kotlin.Any?>");
            List list = (List) obj;
            Object obj2 = list.get(0);
            Intrinsics.checkNotNull(obj2, "null cannot be cast to non-null type kotlin.Long");
            long jLongValue = ((Long) obj2).longValue();
            Object obj3 = list.get(1);
            Intrinsics.checkNotNull(obj3, "null cannot be cast to non-null type io.flutter.plugins.firebase.performance.HttpMetricAttributes");
            firebasePerformanceHostApi.stopHttpMetric(jLongValue, (HttpMetricAttributes) obj3, new Function1() { // from class: io.flutter.plugins.firebase.performance.FirebasePerformanceHostApi$Companion$$ExternalSyntheticLambda2
                @Override // kotlin.jvm.functions.Function1
                public final Object invoke(Object obj4) {
                    return FirebasePerformanceHostApi.Companion.setUp$lambda$5$0$0(reply, (Result) obj4);
                }
            });
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final Unit setUp$lambda$5$0$0(BasicMessageChannel.Reply reply, Result result) {
            Throwable thM9864exceptionOrNullimpl = Result.m9864exceptionOrNullimpl(result.getValue());
            if (thM9864exceptionOrNullimpl != null) {
                reply.reply(GeneratedAndroidFirebasePerformancePigeonUtils.INSTANCE.wrapError(thM9864exceptionOrNullimpl));
            } else {
                reply.reply(GeneratedAndroidFirebasePerformancePigeonUtils.INSTANCE.wrapResult(null));
            }
            return Unit.INSTANCE;
        }
    }
}
