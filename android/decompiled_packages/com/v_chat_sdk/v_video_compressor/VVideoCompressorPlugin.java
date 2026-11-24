package com.v_chat_sdk.v_video_compressor;

import android.content.Context;
import android.os.Build;
import android.os.Handler;
import android.os.Looper;
import androidx.core.app.NotificationCompat;
import com.google.firebase.analytics.FirebaseAnalytics;
import com.tekartik.sqflite.Constant;
import io.flutter.embedding.engine.plugins.FlutterPlugin;
import io.flutter.plugin.common.EventChannel;
import io.flutter.plugin.common.MethodCall;
import io.flutter.plugin.common.MethodChannel;
import java.util.List;
import java.util.Map;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.TuplesKt;
import kotlin.Unit;
import kotlin.collections.MapsKt;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.BuildersKt;
import kotlinx.coroutines.BuildersKt__Builders_commonKt;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.CoroutineScopeKt;
import kotlinx.coroutines.Dispatchers;
import kotlinx.coroutines.Job;
import kotlinx.coroutines.SupervisorKt;

/* JADX INFO: compiled from: VVideoCompressorPlugin.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000z\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\r\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010$\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0007\u0018\u00002\u00020\u00012\u00020\u00022\u00020\u0003B\u0007¢\u0006\u0004\b\u0004\u0010\u0005J\u0010\u0010\u0014\u001a\u00020\u00152\u0006\u0010\u0016\u001a\u00020\u0017H\u0016J\u0018\u0010\u0018\u001a\u00020\u00152\u0006\u0010\u0019\u001a\u00020\u001a2\u0006\u0010\u001b\u001a\u00020\u001cH\u0016J\u0018\u0010\u001d\u001a\u00020\u00152\u0006\u0010\u0019\u001a\u00020\u001a2\u0006\u0010\u001b\u001a\u00020\u001cH\u0002J\u0018\u0010\u001e\u001a\u00020\u00152\u0006\u0010\u0019\u001a\u00020\u001a2\u0006\u0010\u001b\u001a\u00020\u001cH\u0002J\u0018\u0010\u001f\u001a\u00020\u00152\u0006\u0010\u0019\u001a\u00020\u001a2\u0006\u0010\u001b\u001a\u00020\u001cH\u0002J\u0018\u0010 \u001a\u00020\u00152\u0006\u0010\u0019\u001a\u00020\u001a2\u0006\u0010\u001b\u001a\u00020\u001cH\u0002J\u0010\u0010!\u001a\u00020\u00152\u0006\u0010\u001b\u001a\u00020\u001cH\u0002J\u0018\u0010\"\u001a\u00020\u00152\u0006\u0010\u0019\u001a\u00020\u001a2\u0006\u0010\u001b\u001a\u00020\u001cH\u0002J\u0018\u0010#\u001a\u00020\u00152\u0006\u0010\u0019\u001a\u00020\u001a2\u0006\u0010\u001b\u001a\u00020\u001cH\u0002J\u0010\u0010$\u001a\u00020\u00152\u0006\u0010\u001b\u001a\u00020\u001cH\u0002J\u0018\u0010%\u001a\u00020\u00152\u0006\u0010\u0019\u001a\u00020\u001a2\u0006\u0010\u001b\u001a\u00020\u001cH\u0002J\u0010\u0010&\u001a\u00020\u00152\u0006\u0010'\u001a\u00020\u0017H\u0016J\u001c\u0010(\u001a\u00020\u00152\b\u0010)\u001a\u0004\u0018\u00010*2\b\u0010+\u001a\u0004\u0018\u00010\u0011H\u0016J\u0012\u0010,\u001a\u00020\u00152\b\u0010)\u001a\u0004\u0018\u00010*H\u0016J\"\u0010-\u001a\u0004\u0018\u00010.2\u0016\u0010/\u001a\u0012\u0012\u0004\u0012\u000201\u0012\u0006\u0012\u0004\u0018\u00010*\u0018\u000100H\u0002J \u00102\u001a\u0002032\u0016\u0010/\u001a\u0012\u0012\u0004\u0012\u000201\u0012\u0006\u0012\u0004\u0018\u00010*\u0018\u000100H\u0002J\"\u00104\u001a\u0012\u0012\u0004\u0012\u000201\u0012\u0006\u0012\u0004\u0018\u00010*\u0018\u0001002\b\u00105\u001a\u0004\u0018\u00010*H\u0002R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\tX\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u000bX\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\rX\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010\u000e\u001a\u00020\u000fX\u0082\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\u0010\u001a\u0004\u0018\u00010\u0011X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0012\u001a\u00020\u0013X\u0082\u0004¢\u0006\u0002\n\u0000¨\u00066"}, d2 = {"Lcom/v_chat_sdk/v_video_compressor/VVideoCompressorPlugin;", "Lio/flutter/embedding/engine/plugins/FlutterPlugin;", "Lio/flutter/plugin/common/MethodChannel$MethodCallHandler;", "Lio/flutter/plugin/common/EventChannel$StreamHandler;", "<init>", "()V", "methodChannel", "Lio/flutter/plugin/common/MethodChannel;", "eventChannel", "Lio/flutter/plugin/common/EventChannel;", "context", "Landroid/content/Context;", "compressionEngine", "Lcom/v_chat_sdk/v_video_compressor/VVideoCompressionEngine;", "pluginScope", "Lkotlinx/coroutines/CoroutineScope;", "eventSink", "Lio/flutter/plugin/common/EventChannel$EventSink;", "mainHandler", "Landroid/os/Handler;", "onAttachedToEngine", "", "flutterPluginBinding", "Lio/flutter/embedding/engine/plugins/FlutterPlugin$FlutterPluginBinding;", "onMethodCall", NotificationCompat.CATEGORY_CALL, "Lio/flutter/plugin/common/MethodCall;", "result", "Lio/flutter/plugin/common/MethodChannel$Result;", "handleGetVideoInfo", "handleGetCompressionEstimate", "handleCompressVideo", "handleCompressVideos", "handleCancelCompression", "handleGetVideoThumbnail", "handleGetVideoThumbnails", "handleCleanup", "handleCleanupFiles", "onDetachedFromEngine", "binding", "onListen", Constant.PARAM_SQL_ARGUMENTS, "", "events", "onCancel", "parseAdvancedConfig", "Lcom/v_chat_sdk/v_video_compressor/VVideoAdvancedConfig;", "map", "", "", "parseThumbnailConfig", "Lcom/v_chat_sdk/v_video_compressor/VVideoThumbnailConfig;", "toStringKeyMap", "value", "v_video_compressor_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class VVideoCompressorPlugin implements FlutterPlugin, MethodChannel.MethodCallHandler, EventChannel.StreamHandler {
    private VVideoCompressionEngine compressionEngine;
    private Context context;
    private EventChannel eventChannel;
    private EventChannel.EventSink eventSink;
    private MethodChannel methodChannel;
    private final CoroutineScope pluginScope = CoroutineScopeKt.CoroutineScope(SupervisorKt.SupervisorJob$default((Job) null, 1, (Object) null).plus(Dispatchers.getMain()));
    private final Handler mainHandler = new Handler(Looper.getMainLooper());

    public static final /* synthetic */ VVideoCompressionEngine access$getCompressionEngine$p(VVideoCompressorPlugin vVideoCompressorPlugin) {
        return vVideoCompressorPlugin.compressionEngine;
    }

    @Override // io.flutter.embedding.engine.plugins.FlutterPlugin
    public void onAttachedToEngine(FlutterPlugin.FlutterPluginBinding flutterPluginBinding) {
        Intrinsics.checkNotNullParameter(flutterPluginBinding, "flutterPluginBinding");
        Context applicationContext = flutterPluginBinding.getApplicationContext();
        Intrinsics.checkNotNullExpressionValue(applicationContext, "getApplicationContext(...)");
        this.context = applicationContext;
        Context context = this.context;
        if (context == null) {
            Intrinsics.throwUninitializedPropertyAccessException("context");
            context = null;
        }
        this.compressionEngine = new VVideoCompressionEngine(context);
        MethodChannel methodChannel = new MethodChannel(flutterPluginBinding.getBinaryMessenger(), "v_video_compressor");
        this.methodChannel = methodChannel;
        methodChannel.setMethodCallHandler(this);
        EventChannel eventChannel = new EventChannel(flutterPluginBinding.getBinaryMessenger(), "v_video_compressor/progress");
        this.eventChannel = eventChannel;
        eventChannel.setStreamHandler(this);
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    @Override // io.flutter.plugin.common.MethodChannel.MethodCallHandler
    public void onMethodCall(MethodCall call, MethodChannel.Result result) {
        Intrinsics.checkNotNullParameter(call, "call");
        Intrinsics.checkNotNullParameter(result, "result");
        String str = call.method;
        if (str != null) {
            switch (str.hashCode()) {
                case -1335238004:
                    if (str.equals("cancelCompression")) {
                        handleCancelCompression(result);
                        return;
                    }
                    break;
                case -935824980:
                    if (str.equals("getVideoThumbnails")) {
                        handleGetVideoThumbnails(call, result);
                        return;
                    }
                    break;
                case -331679181:
                    if (str.equals("cleanupFiles")) {
                        handleCleanupFiles(call, result);
                        return;
                    }
                    break;
                case 21951926:
                    if (str.equals("isCompressing")) {
                        VVideoCompressionEngine vVideoCompressionEngine = this.compressionEngine;
                        if (vVideoCompressionEngine == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("compressionEngine");
                            vVideoCompressionEngine = null;
                        }
                        result.success(Boolean.valueOf(vVideoCompressionEngine.isCompressing()));
                        return;
                    }
                    break;
                case 544209272:
                    if (str.equals("getCompressionEstimate")) {
                        handleGetCompressionEstimate(call, result);
                        return;
                    }
                    break;
                case 856774308:
                    if (str.equals("cleanup")) {
                        handleCleanup(result);
                        return;
                    }
                    break;
                case 1323018515:
                    if (str.equals("getVideoInfo")) {
                        handleGetVideoInfo(call, result);
                        return;
                    }
                    break;
                case 1355285415:
                    if (str.equals("getVideoThumbnail")) {
                        handleGetVideoThumbnail(call, result);
                        return;
                    }
                    break;
                case 1385449135:
                    if (str.equals(Constant.METHOD_GET_PLATFORM_VERSION)) {
                        result.success("Android " + Build.VERSION.RELEASE);
                        return;
                    }
                    break;
                case 1729824313:
                    if (str.equals("compressVideo")) {
                        handleCompressVideo(call, result);
                        return;
                    }
                    break;
                case 2084946266:
                    if (str.equals("compressVideos")) {
                        handleCompressVideos(call, result);
                        return;
                    }
                    break;
            }
        }
        result.notImplemented();
    }

    private final void handleGetVideoInfo(MethodCall call, MethodChannel.Result result) {
        String str = (String) call.argument("videoPath");
        if (str != null) {
            BuildersKt__Builders_commonKt.launch$default(this.pluginScope, null, null, new C19361(result, this, str, null), 3, null);
        } else {
            result.error("INVALID_ARGUMENT", "Video path is required", null);
        }
    }

    /* JADX INFO: renamed from: com.v_chat_sdk.v_video_compressor.VVideoCompressorPlugin$handleGetVideoInfo$1, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: VVideoCompressorPlugin.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 2, 0}, xi = 48)
    @DebugMetadata(c = "com.v_chat_sdk.v_video_compressor.VVideoCompressorPlugin$handleGetVideoInfo$1", f = "VVideoCompressorPlugin.kt", i = {}, l = {116}, m = "invokeSuspend", n = {}, s = {}, v = 1)
    static final class C19361 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ MethodChannel.Result $result;
        final /* synthetic */ String $videoPath;
        int label;
        final /* synthetic */ VVideoCompressorPlugin this$0;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        C19361(MethodChannel.Result result, VVideoCompressorPlugin vVideoCompressorPlugin, String str, Continuation<? super C19361> continuation) {
            super(2, continuation);
            this.$result = result;
            this.this$0 = vVideoCompressorPlugin;
            this.$videoPath = str;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new C19361(this.$result, this.this$0, this.$videoPath, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((C19361) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i = this.label;
            try {
                if (i == 0) {
                    ResultKt.throwOnFailure(obj);
                    this.label = 1;
                    obj = BuildersKt.withContext(Dispatchers.getIO(), new VVideoCompressorPlugin$handleGetVideoInfo$1$videoInfo$1(this.this$0, this.$videoPath, null), this);
                    if (obj == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                } else {
                    if (i != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ResultKt.throwOnFailure(obj);
                }
                VVideoInfo vVideoInfo = (VVideoInfo) obj;
                if (vVideoInfo != null) {
                    this.$result.success(vVideoInfo.toMap());
                } else {
                    this.$result.success(null);
                }
            } catch (Exception e) {
                this.$result.error("ERROR", "Failed to get video info: " + e.getMessage(), null);
            }
            return Unit.INSTANCE;
        }
    }

    private final void handleGetCompressionEstimate(MethodCall call, MethodChannel.Result result) {
        String str = (String) call.argument("videoPath");
        String str2 = (String) call.argument("quality");
        Map map = (Map) call.argument("advanced");
        if (str != null && str2 != null) {
            BuildersKt__Builders_commonKt.launch$default(this.pluginScope, null, null, new C19351(result, str2, map, this, str, null), 3, null);
        } else {
            result.error("INVALID_ARGUMENT", "Video path and quality are required", null);
        }
    }

    /* JADX INFO: renamed from: com.v_chat_sdk.v_video_compressor.VVideoCompressorPlugin$handleGetCompressionEstimate$1, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: VVideoCompressorPlugin.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 2, 0}, xi = 48)
    @DebugMetadata(c = "com.v_chat_sdk.v_video_compressor.VVideoCompressorPlugin$handleGetCompressionEstimate$1", f = "VVideoCompressorPlugin.kt", i = {}, l = {143}, m = "invokeSuspend", n = {}, s = {}, v = 1)
    static final class C19351 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ Map<String, Object> $advancedMap;
        final /* synthetic */ String $qualityStr;
        final /* synthetic */ MethodChannel.Result $result;
        final /* synthetic */ String $videoPath;
        int label;
        final /* synthetic */ VVideoCompressorPlugin this$0;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        C19351(MethodChannel.Result result, String str, Map<String, ? extends Object> map, VVideoCompressorPlugin vVideoCompressorPlugin, String str2, Continuation<? super C19351> continuation) {
            super(2, continuation);
            this.$result = result;
            this.$qualityStr = str;
            this.$advancedMap = map;
            this.this$0 = vVideoCompressorPlugin;
            this.$videoPath = str2;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new C19351(this.$result, this.$qualityStr, this.$advancedMap, this.this$0, this.$videoPath, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((C19351) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i = this.label;
            try {
                if (i == 0) {
                    ResultKt.throwOnFailure(obj);
                    this.label = 1;
                    obj = BuildersKt.withContext(Dispatchers.getIO(), new VVideoCompressorPlugin$handleGetCompressionEstimate$1$videoInfo$1(this.this$0, this.$videoPath, null), this);
                    if (obj == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                } else {
                    if (i != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ResultKt.throwOnFailure(obj);
                }
                VVideoInfo vVideoInfo = (VVideoInfo) obj;
                if (vVideoInfo == null) {
                    this.$result.error("ERROR", "Could not get video info", null);
                    return Unit.INSTANCE;
                }
                VVideoCompressQuality vVideoCompressQualityFromString = VVideoCompressQuality.INSTANCE.fromString(this.$qualityStr);
                VVideoAdvancedConfig vVideoAdvancedConfigFromMap = VVideoAdvancedConfig.INSTANCE.fromMap(this.$advancedMap);
                VVideoCompressionEngine vVideoCompressionEngine = this.this$0.compressionEngine;
                if (vVideoCompressionEngine == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("compressionEngine");
                    vVideoCompressionEngine = null;
                }
                this.$result.success(vVideoCompressionEngine.estimateCompressionSize(vVideoInfo, vVideoCompressQualityFromString, vVideoAdvancedConfigFromMap).toMap());
                return Unit.INSTANCE;
            } catch (IllegalArgumentException e) {
                this.$result.error("INVALID_ARGUMENT", e.getMessage(), null);
            } catch (Exception e2) {
                this.$result.error("ERROR", "Failed to get compression estimate: " + e2.getMessage(), null);
            }
        }
    }

    /* JADX WARN: Code duplicated, block: B:10:0x0033 A[Catch: IllegalArgumentException -> 0x002f, TryCatch #0 {IllegalArgumentException -> 0x002f, blocks: (B:4:0x0026, B:10:0x0033, B:12:0x004d, B:14:0x0053, B:16:0x005e, B:18:0x0064), top: B:30:0x0026 }] */
    /* JADX WARN: Code duplicated, block: B:12:0x004d A[Catch: IllegalArgumentException -> 0x002f, TryCatch #0 {IllegalArgumentException -> 0x002f, blocks: (B:4:0x0026, B:10:0x0033, B:12:0x004d, B:14:0x0053, B:16:0x005e, B:18:0x0064), top: B:30:0x0026 }] */
    /* JADX WARN: Code duplicated, block: B:13:0x0052  */
    /* JADX WARN: Code duplicated, block: B:16:0x005e A[Catch: IllegalArgumentException -> 0x002f, TryCatch #0 {IllegalArgumentException -> 0x002f, blocks: (B:4:0x0026, B:10:0x0033, B:12:0x004d, B:14:0x0053, B:16:0x005e, B:18:0x0064), top: B:30:0x0026 }] */
    /* JADX WARN: Code duplicated, block: B:17:0x0063  */
    /* JADX WARN: Code duplicated, block: B:22:0x0081  */
    private final void handleCompressVideo(MethodCall call, MethodChannel.Result result) {
        VVideoCompressionConfig vVideoCompressionConfigFromMap;
        Boolean bool;
        boolean zBooleanValue;
        Boolean bool2;
        boolean zBooleanValue2;
        String str = (String) call.argument("videoPath");
        Map<String, ? extends Object> map = (Map) call.argument("config");
        String str2 = (String) call.argument("quality");
        if (map != null) {
            try {
                vVideoCompressionConfigFromMap = VVideoCompressionConfig.INSTANCE.fromMap(map);
                if (vVideoCompressionConfigFromMap == null) {
                    if (str2 != null) {
                        VVideoCompressQuality vVideoCompressQualityValueOf = VVideoCompressQuality.valueOf(str2);
                        String str3 = (String) call.argument("outputPath");
                        bool = (Boolean) call.argument("deleteOriginal");
                        if (bool != null) {
                            zBooleanValue = bool.booleanValue();
                        } else {
                            zBooleanValue = false;
                        }
                        boolean z = zBooleanValue;
                        bool2 = (Boolean) call.argument("fallbackToOriginalIfNotSmaller");
                        if (bool2 != null) {
                            zBooleanValue2 = bool2.booleanValue();
                        } else {
                            zBooleanValue2 = true;
                        }
                        vVideoCompressionConfigFromMap = new VVideoCompressionConfig(vVideoCompressQualityValueOf, str3, z, zBooleanValue2, false, parseAdvancedConfig(toStringKeyMap(call.arguments)), 16, null);
                    } else {
                        vVideoCompressionConfigFromMap = null;
                    }
                }
            } catch (IllegalArgumentException e) {
                result.error("INVALID_ARGUMENT", e.getMessage(), null);
                return;
            }
        } else if (str2 != null) {
            VVideoCompressQuality vVideoCompressQualityValueOf2 = VVideoCompressQuality.valueOf(str2);
            String str4 = (String) call.argument("outputPath");
            bool = (Boolean) call.argument("deleteOriginal");
            if (bool != null) {
                zBooleanValue = bool.booleanValue();
            } else {
                zBooleanValue = false;
            }
            boolean z2 = zBooleanValue;
            bool2 = (Boolean) call.argument("fallbackToOriginalIfNotSmaller");
            if (bool2 != null) {
                zBooleanValue2 = bool2.booleanValue();
            } else {
                zBooleanValue2 = true;
            }
            vVideoCompressionConfigFromMap = new VVideoCompressionConfig(vVideoCompressQualityValueOf2, str4, z2, zBooleanValue2, false, parseAdvancedConfig(toStringKeyMap(call.arguments)), 16, null);
        } else {
            vVideoCompressionConfigFromMap = null;
        }
        if (str != null && vVideoCompressionConfigFromMap != null) {
            BuildersKt__Builders_commonKt.launch$default(this.pluginScope, null, null, new C19331(result, this, vVideoCompressionConfigFromMap, str, null), 3, null);
        } else {
            result.error("INVALID_ARGUMENT", "Video path and config are required", null);
        }
    }

    /* JADX INFO: renamed from: com.v_chat_sdk.v_video_compressor.VVideoCompressorPlugin$handleCompressVideo$1, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: VVideoCompressorPlugin.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 2, 0}, xi = 48)
    @DebugMetadata(c = "com.v_chat_sdk.v_video_compressor.VVideoCompressorPlugin$handleCompressVideo$1", f = "VVideoCompressorPlugin.kt", i = {}, l = {195}, m = "invokeSuspend", n = {}, s = {}, v = 1)
    static final class C19331 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ VVideoCompressionConfig $compressionConfig;
        final /* synthetic */ MethodChannel.Result $result;
        final /* synthetic */ String $videoPath;
        int label;
        final /* synthetic */ VVideoCompressorPlugin this$0;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        C19331(MethodChannel.Result result, VVideoCompressorPlugin vVideoCompressorPlugin, VVideoCompressionConfig vVideoCompressionConfig, String str, Continuation<? super C19331> continuation) {
            super(2, continuation);
            this.$result = result;
            this.this$0 = vVideoCompressorPlugin;
            this.$compressionConfig = vVideoCompressionConfig;
            this.$videoPath = str;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new C19331(this.$result, this.this$0, this.$compressionConfig, this.$videoPath, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((C19331) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i = this.label;
            try {
                if (i == 0) {
                    ResultKt.throwOnFailure(obj);
                    this.label = 1;
                    obj = BuildersKt.withContext(Dispatchers.getIO(), new VVideoCompressorPlugin$handleCompressVideo$1$videoInfo$1(this.this$0, this.$videoPath, null), this);
                    if (obj == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                } else {
                    if (i != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ResultKt.throwOnFailure(obj);
                }
                VVideoInfo vVideoInfo = (VVideoInfo) obj;
                if (vVideoInfo != null) {
                    VVideoCompressionEngine vVideoCompressionEngine = this.this$0.compressionEngine;
                    if (vVideoCompressionEngine == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("compressionEngine");
                        vVideoCompressionEngine = null;
                    }
                    vVideoCompressionEngine.compressVideo(vVideoInfo, this.$compressionConfig, new C11881(this.this$0, this.$videoPath, this.$result));
                    return Unit.INSTANCE;
                }
                this.$result.error("VIDEO_NOT_FOUND", "Could not read video file", null);
                return Unit.INSTANCE;
            } catch (Exception e) {
                this.$result.error("ERROR", "Failed to compress video: " + e.getMessage(), null);
            } catch (OutOfMemoryError unused) {
                this.$result.error("OUT_OF_MEMORY", "Out of memory during video compression. Please try with lower quality settings or free up device memory.", null);
            }
        }

        /* JADX INFO: renamed from: com.v_chat_sdk.v_video_compressor.VVideoCompressorPlugin$handleCompressVideo$1$1, reason: invalid class name and collision with other inner class name */
        /* JADX INFO: compiled from: VVideoCompressorPlugin.kt */
        @Metadata(d1 = {"\u0000'\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u0007\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000*\u0001\u0000\b\n\u0018\u00002\u00020\u0001J\u0010\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u0005H\u0016J\u0010\u0010\u0006\u001a\u00020\u00032\u0006\u0010\u0007\u001a\u00020\bH\u0016J\u0010\u0010\t\u001a\u00020\u00032\u0006\u0010\n\u001a\u00020\u000bH\u0016¨\u0006\f"}, d2 = {"com/v_chat_sdk/v_video_compressor/VVideoCompressorPlugin$handleCompressVideo$1$1", "Lcom/v_chat_sdk/v_video_compressor/VVideoCompressionEngine$CompressionCallback;", "onProgress", "", NotificationCompat.CATEGORY_PROGRESS, "", "onComplete", "compressionResult", "Lcom/v_chat_sdk/v_video_compressor/VVideoCompressionResult;", "onError", "error", "", "v_video_compressor_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
        public static final class C11881 implements VVideoCompressionEngine.CompressionCallback {
            final /* synthetic */ MethodChannel.Result $result;
            final /* synthetic */ String $videoPath;
            final /* synthetic */ VVideoCompressorPlugin this$0;

            C11881(VVideoCompressorPlugin vVideoCompressorPlugin, String str, MethodChannel.Result result) {
                this.this$0 = vVideoCompressorPlugin;
                this.$videoPath = str;
                this.$result = result;
            }

            @Override // com.v_chat_sdk.v_video_compressor.VVideoCompressionEngine.CompressionCallback
            public void onProgress(final float progress) {
                Handler handler = this.this$0.mainHandler;
                final VVideoCompressorPlugin vVideoCompressorPlugin = this.this$0;
                final String str = this.$videoPath;
                handler.post(new Runnable() { // from class: com.v_chat_sdk.v_video_compressor.VVideoCompressorPlugin$handleCompressVideo$1$1$$ExternalSyntheticLambda1
                    @Override // java.lang.Runnable
                    public final void run() {
                        VVideoCompressorPlugin.C19331.C11881.onProgress$lambda$0(vVideoCompressorPlugin, progress, str);
                    }
                });
            }

            /* JADX INFO: Access modifiers changed from: private */
            public static final void onProgress$lambda$0(VVideoCompressorPlugin vVideoCompressorPlugin, float f, String str) {
                EventChannel.EventSink eventSink = vVideoCompressorPlugin.eventSink;
                if (eventSink != null) {
                    eventSink.success(MapsKt.mapOf(TuplesKt.to(NotificationCompat.CATEGORY_PROGRESS, Float.valueOf(f)), TuplesKt.to("videoPath", str)));
                }
            }

            @Override // com.v_chat_sdk.v_video_compressor.VVideoCompressionEngine.CompressionCallback
            public void onComplete(final VVideoCompressionResult compressionResult) {
                Intrinsics.checkNotNullParameter(compressionResult, "compressionResult");
                Handler handler = this.this$0.mainHandler;
                final MethodChannel.Result result = this.$result;
                handler.post(new Runnable() { // from class: com.v_chat_sdk.v_video_compressor.VVideoCompressorPlugin$handleCompressVideo$1$1$$ExternalSyntheticLambda2
                    @Override // java.lang.Runnable
                    public final void run() {
                        VVideoCompressorPlugin.C19331.C11881.onComplete$lambda$1(result, compressionResult);
                    }
                });
            }

            /* JADX INFO: Access modifiers changed from: private */
            public static final void onComplete$lambda$1(MethodChannel.Result result, VVideoCompressionResult vVideoCompressionResult) {
                result.success(vVideoCompressionResult.toMap());
            }

            @Override // com.v_chat_sdk.v_video_compressor.VVideoCompressionEngine.CompressionCallback
            public void onError(final String error) {
                Intrinsics.checkNotNullParameter(error, "error");
                Handler handler = this.this$0.mainHandler;
                final MethodChannel.Result result = this.$result;
                handler.post(new Runnable() { // from class: com.v_chat_sdk.v_video_compressor.VVideoCompressorPlugin$handleCompressVideo$1$1$$ExternalSyntheticLambda0
                    @Override // java.lang.Runnable
                    public final void run() {
                        result.error("COMPRESSION_ERROR", error, null);
                    }
                });
            }
        }
    }

    /* JADX WARN: Code duplicated, block: B:10:0x0032 A[Catch: IllegalArgumentException -> 0x002e, TryCatch #0 {IllegalArgumentException -> 0x002e, blocks: (B:4:0x0025, B:10:0x0032, B:12:0x004c, B:14:0x0052, B:16:0x005d, B:18:0x0063), top: B:32:0x0025 }] */
    /* JADX WARN: Code duplicated, block: B:12:0x004c A[Catch: IllegalArgumentException -> 0x002e, TryCatch #0 {IllegalArgumentException -> 0x002e, blocks: (B:4:0x0025, B:10:0x0032, B:12:0x004c, B:14:0x0052, B:16:0x005d, B:18:0x0063), top: B:32:0x0025 }] */
    /* JADX WARN: Code duplicated, block: B:13:0x0051  */
    /* JADX WARN: Code duplicated, block: B:16:0x005d A[Catch: IllegalArgumentException -> 0x002e, TryCatch #0 {IllegalArgumentException -> 0x002e, blocks: (B:4:0x0025, B:10:0x0032, B:12:0x004c, B:14:0x0052, B:16:0x005d, B:18:0x0063), top: B:32:0x0025 }] */
    /* JADX WARN: Code duplicated, block: B:17:0x0062  */
    /* JADX WARN: Code duplicated, block: B:22:0x0080  */
    private final void handleCompressVideos(MethodCall call, MethodChannel.Result result) {
        VVideoCompressionConfig vVideoCompressionConfigFromMap;
        Boolean bool;
        boolean zBooleanValue;
        Boolean bool2;
        boolean zBooleanValue2;
        List list = (List) call.argument("videoPaths");
        Map<String, ? extends Object> map = (Map) call.argument("config");
        String str = (String) call.argument("quality");
        if (map != null) {
            try {
                vVideoCompressionConfigFromMap = VVideoCompressionConfig.INSTANCE.fromMap(map);
                if (vVideoCompressionConfigFromMap == null) {
                    if (str != null) {
                        VVideoCompressQuality vVideoCompressQualityValueOf = VVideoCompressQuality.valueOf(str);
                        String str2 = (String) call.argument("outputPath");
                        bool = (Boolean) call.argument("deleteOriginal");
                        if (bool != null) {
                            zBooleanValue = bool.booleanValue();
                        } else {
                            zBooleanValue = false;
                        }
                        boolean z = zBooleanValue;
                        bool2 = (Boolean) call.argument("fallbackToOriginalIfNotSmaller");
                        if (bool2 != null) {
                            zBooleanValue2 = bool2.booleanValue();
                        } else {
                            zBooleanValue2 = true;
                        }
                        vVideoCompressionConfigFromMap = new VVideoCompressionConfig(vVideoCompressQualityValueOf, str2, z, zBooleanValue2, false, parseAdvancedConfig(toStringKeyMap(call.arguments)), 16, null);
                    } else {
                        vVideoCompressionConfigFromMap = null;
                    }
                }
            } catch (IllegalArgumentException e) {
                result.error("INVALID_ARGUMENT", e.getMessage(), null);
                return;
            }
        } else if (str != null) {
            VVideoCompressQuality vVideoCompressQualityValueOf2 = VVideoCompressQuality.valueOf(str);
            String str3 = (String) call.argument("outputPath");
            bool = (Boolean) call.argument("deleteOriginal");
            if (bool != null) {
                zBooleanValue = bool.booleanValue();
            } else {
                zBooleanValue = false;
            }
            boolean z2 = zBooleanValue;
            bool2 = (Boolean) call.argument("fallbackToOriginalIfNotSmaller");
            if (bool2 != null) {
                zBooleanValue2 = bool2.booleanValue();
            } else {
                zBooleanValue2 = true;
            }
            vVideoCompressionConfigFromMap = new VVideoCompressionConfig(vVideoCompressQualityValueOf2, str3, z2, zBooleanValue2, false, parseAdvancedConfig(toStringKeyMap(call.arguments)), 16, null);
        } else {
            vVideoCompressionConfigFromMap = null;
        }
        if (list != null && vVideoCompressionConfigFromMap != null && !list.isEmpty()) {
            BuildersKt__Builders_commonKt.launch$default(this.pluginScope, null, null, new C19341(list, this, vVideoCompressionConfigFromMap, result, null), 3, null);
        } else {
            result.error("INVALID_ARGUMENT", "Video paths and config are required", null);
        }
    }

    /* JADX INFO: renamed from: com.v_chat_sdk.v_video_compressor.VVideoCompressorPlugin$handleCompressVideos$1, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: VVideoCompressorPlugin.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 2, 0}, xi = 48)
    @DebugMetadata(c = "com.v_chat_sdk.v_video_compressor.VVideoCompressorPlugin$handleCompressVideos$1", f = "VVideoCompressorPlugin.kt", i = {0, 0, 0, 0, 1, 1, 1, 1, 1, 1}, l = {273, 314}, m = "invokeSuspend", n = {"results", "videoPath", "hasError", FirebaseAnalytics.Param.INDEX, "results", "videoPath", "videoInfo", "completion", "hasError", FirebaseAnalytics.Param.INDEX}, s = {"L$0", "L$2", "I$0", "I$2", "L$0", "L$2", "L$3", "L$4", "I$0", "I$2"}, v = 1)
    static final class C19341 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ VVideoCompressionConfig $compressionConfig;
        final /* synthetic */ MethodChannel.Result $result;
        final /* synthetic */ List<String> $videoPaths;
        int I$0;
        int I$1;
        int I$2;
        Object L$0;
        Object L$1;
        Object L$2;
        Object L$3;
        Object L$4;
        int label;
        final /* synthetic */ VVideoCompressorPlugin this$0;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        C19341(List<String> list, VVideoCompressorPlugin vVideoCompressorPlugin, VVideoCompressionConfig vVideoCompressionConfig, MethodChannel.Result result, Continuation<? super C19341> continuation) {
            super(2, continuation);
            this.$videoPaths = list;
            this.this$0 = vVideoCompressorPlugin;
            this.$compressionConfig = vVideoCompressionConfig;
            this.$result = result;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new C19341(this.$videoPaths, this.this$0, this.$compressionConfig, this.$result, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((C19341) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        /* JADX WARN: Code duplicated, block: B:14:0x0062 A[PHI: r0 r6 r8 r10 r11 r12 r13 r14 r15 r16 r17
  0x0062: PHI (r0v27 int) = (r0v3 int), (r0v41 int) binds: [B:13:0x005c, B:26:0x00c9] A[DONT_GENERATE, DONT_INLINE]
  0x0062: PHI (r6v4 java.lang.Object) = (r6v0 java.lang.Object), (r6v17 java.lang.Object) binds: [B:13:0x005c, B:26:0x00c9] A[DONT_GENERATE, DONT_INLINE]
  0x0062: PHI (r8v8 ??) = (r8v0 ??), (r8v13 ??) binds: [B:13:0x005c, B:26:0x00c9] A[DONT_GENERATE, DONT_INLINE]
  0x0062: PHI (r10v3 int) = (r10v0 int), (r10v6 int) binds: [B:13:0x005c, B:26:0x00c9] A[DONT_GENERATE, DONT_INLINE]
  0x0062: PHI (r11v8 int) = (r11v1 int), (r11v10 int) binds: [B:13:0x005c, B:26:0x00c9] A[DONT_GENERATE, DONT_INLINE]
  0x0062: PHI (r12v7 int) = (r12v0 int), (r12v8 int) binds: [B:13:0x005c, B:26:0x00c9] A[DONT_GENERATE, DONT_INLINE]
  0x0062: PHI (r13v9 java.lang.String) = (r13v1 java.lang.String), (r13v14 java.lang.String) binds: [B:13:0x005c, B:26:0x00c9] A[DONT_GENERATE, DONT_INLINE]
  0x0062: PHI (r14v10 java.util.Iterator) = (r14v1 java.util.Iterator), (r14v11 java.util.Iterator) binds: [B:13:0x005c, B:26:0x00c9] A[DONT_GENERATE, DONT_INLINE]
  0x0062: PHI (r15v10 java.util.List) = (r15v1 java.util.List), (r15v11 java.util.List) binds: [B:13:0x005c, B:26:0x00c9] A[DONT_GENERATE, DONT_INLINE]
  0x0062: PHI (r16v3 int) = (r16v0 int), (r16v5 int) binds: [B:13:0x005c, B:26:0x00c9] A[DONT_GENERATE, DONT_INLINE]
  0x0062: PHI (r17v9 boolean) = (r17v2 boolean), (r17v14 boolean) binds: [B:13:0x005c, B:26:0x00c9] A[DONT_GENERATE, DONT_INLINE]] */
        /* JADX WARN: Code duplicated, block: B:21:0x0091  */
        /* JADX WARN: Code duplicated, block: B:27:0x00cb  */
        /* JADX WARN: Code duplicated, block: B:30:0x00d1  */
        /* JADX WARN: Code duplicated, block: B:73:0x009b A[EXC_TOP_SPLITTER, SYNTHETIC] */
        /* JADX WARN: Multi-variable type inference failed */
        /* JADX WARN: Not initialized variable reg: 11, insn: 0x006f: MOVE (r0 I:??[int, float, boolean, short, byte, char, OBJECT, ARRAY]) = (r11 I:??[int, float, boolean, short, byte, char, OBJECT, ARRAY]), block:B:17:0x006d */
        /* JADX WARN: Type inference failed for: r0v30, types: [com.v_chat_sdk.v_video_compressor.VVideoCompressionEngine] */
        /* JADX WARN: Type inference failed for: r0v36 */
        /* JADX WARN: Type inference failed for: r0v49 */
        /* JADX WARN: Type inference failed for: r17v0 */
        /* JADX WARN: Type inference failed for: r17v1 */
        /* JADX WARN: Type inference failed for: r17v16 */
        /* JADX WARN: Type inference failed for: r17v17 */
        /* JADX WARN: Type inference failed for: r17v19 */
        /* JADX WARN: Type inference failed for: r17v5, types: [boolean] */
        /* JADX WARN: Type inference failed for: r17v8, types: [boolean] */
        /* JADX WARN: Type inference failed for: r8v0 */
        /* JADX WARN: Type inference failed for: r8v1 */
        /* JADX WARN: Type inference failed for: r8v11, types: [java.lang.Object, kotlin.coroutines.Continuation] */
        /* JADX WARN: Type inference failed for: r8v12 */
        /* JADX WARN: Type inference failed for: r8v13 */
        /* JADX WARN: Type inference failed for: r8v7 */
        /* JADX WARN: Type inference failed for: r8v8, types: [java.lang.Object, kotlinx.coroutines.Job] */
        /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:32:0x00d4 -> B:19:0x008b). Please report as a decompilation issue!!! */
        /*  JADX ERROR: JadxOverflowException in pass: RegionMakerVisitor
            jadx.core.utils.exceptions.JadxOverflowException: Regions stack size limit reached
            	at jadx.core.utils.ErrorsCounter.addError(ErrorsCounter.java:59)
            	at jadx.core.utils.ErrorsCounter.error(ErrorsCounter.java:31)
            	at jadx.core.dex.attributes.nodes.NotificationAttrNode.addError(NotificationAttrNode.java:19)
            */
        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final java.lang.Object invokeSuspend(java.lang.Object r25) {
            /*
                Method dump skipped, instruction units count: 475
                To view this dump add '--comments-level debug' option
            */
            throw new UnsupportedOperationException("Method not decompiled: com.v_chat_sdk.v_video_compressor.VVideoCompressorPlugin.C19341.invokeSuspend(java.lang.Object):java.lang.Object");
        }
    }

    private final void handleCancelCompression(MethodChannel.Result result) {
        try {
            VVideoCompressionEngine vVideoCompressionEngine = this.compressionEngine;
            if (vVideoCompressionEngine == null) {
                Intrinsics.throwUninitializedPropertyAccessException("compressionEngine");
                vVideoCompressionEngine = null;
            }
            vVideoCompressionEngine.cancelCompression();
            result.success(null);
        } catch (Exception e) {
            result.error("ERROR", "Failed to cancel compression: " + e.getMessage(), null);
        }
    }

    private final void handleGetVideoThumbnail(MethodCall call, MethodChannel.Result result) {
        String str = (String) call.argument("videoPath");
        Map<String, Object> stringKeyMap = toStringKeyMap(call.arguments);
        Map<String, Object> stringKeyMap2 = toStringKeyMap(stringKeyMap != null ? stringKeyMap.get("config") : null);
        Map<String, Object> map = stringKeyMap2 == null ? stringKeyMap : stringKeyMap2;
        if (str != null) {
            BuildersKt__Builders_commonKt.launch$default(this.pluginScope, null, null, new C19371(result, this, map, str, null), 3, null);
        } else {
            result.error("INVALID_ARGUMENT", "Video path is required", null);
        }
    }

    /* JADX INFO: renamed from: com.v_chat_sdk.v_video_compressor.VVideoCompressorPlugin$handleGetVideoThumbnail$1, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: VVideoCompressorPlugin.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 2, 0}, xi = 48)
    @DebugMetadata(c = "com.v_chat_sdk.v_video_compressor.VVideoCompressorPlugin$handleGetVideoThumbnail$1", f = "VVideoCompressorPlugin.kt", i = {1, 1}, l = {359, 370}, m = "invokeSuspend", n = {"videoInfo", "config"}, s = {"L$0", "L$1"}, v = 1)
    static final class C19371 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ MethodChannel.Result $result;
        final /* synthetic */ Map<String, Object> $thumbnailConfig;
        final /* synthetic */ String $videoPath;
        Object L$0;
        Object L$1;
        int label;
        final /* synthetic */ VVideoCompressorPlugin this$0;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        C19371(MethodChannel.Result result, VVideoCompressorPlugin vVideoCompressorPlugin, Map<String, ? extends Object> map, String str, Continuation<? super C19371> continuation) {
            super(2, continuation);
            this.$result = result;
            this.this$0 = vVideoCompressorPlugin;
            this.$thumbnailConfig = map;
            this.$videoPath = str;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new C19371(this.$result, this.this$0, this.$thumbnailConfig, this.$videoPath, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((C19371) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        /* JADX WARN: Code restructure failed: missing block: B:24:0x0086, code lost:
        
            if (r8 == r0) goto L25;
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
                r2 = 2
                r3 = 1
                r4 = 0
                if (r1 == 0) goto L2a
                if (r1 == r3) goto L23
                if (r1 != r2) goto L1b
                java.lang.Object r0 = r7.L$1
                com.v_chat_sdk.v_video_compressor.VVideoThumbnailConfig r0 = (com.v_chat_sdk.v_video_compressor.VVideoThumbnailConfig) r0
                java.lang.Object r0 = r7.L$0
                com.v_chat_sdk.v_video_compressor.VVideoInfo r0 = (com.v_chat_sdk.v_video_compressor.VVideoInfo) r0
                kotlin.ResultKt.throwOnFailure(r8)     // Catch: java.lang.Exception -> L27 java.lang.OutOfMemoryError -> Lbb
                goto L89
            L1b:
                java.lang.IllegalStateException r8 = new java.lang.IllegalStateException
                java.lang.String r0 = "call to 'resume' before 'invoke' with coroutine"
                r8.<init>(r0)
                throw r8
            L23:
                kotlin.ResultKt.throwOnFailure(r8)     // Catch: java.lang.Exception -> L27 java.lang.OutOfMemoryError -> Lbb
                goto L4a
            L27:
                r8 = move-exception
                goto La1
            L2a:
                kotlin.ResultKt.throwOnFailure(r8)
                kotlinx.coroutines.CoroutineDispatcher r8 = kotlinx.coroutines.Dispatchers.getIO()     // Catch: java.lang.Exception -> L27 java.lang.OutOfMemoryError -> Lbb
                kotlin.coroutines.CoroutineContext r8 = (kotlin.coroutines.CoroutineContext) r8     // Catch: java.lang.Exception -> L27 java.lang.OutOfMemoryError -> Lbb
                com.v_chat_sdk.v_video_compressor.VVideoCompressorPlugin$handleGetVideoThumbnail$1$videoInfo$1 r1 = new com.v_chat_sdk.v_video_compressor.VVideoCompressorPlugin$handleGetVideoThumbnail$1$videoInfo$1     // Catch: java.lang.Exception -> L27 java.lang.OutOfMemoryError -> Lbb
                com.v_chat_sdk.v_video_compressor.VVideoCompressorPlugin r5 = r7.this$0     // Catch: java.lang.Exception -> L27 java.lang.OutOfMemoryError -> Lbb
                java.lang.String r6 = r7.$videoPath     // Catch: java.lang.Exception -> L27 java.lang.OutOfMemoryError -> Lbb
                r1.<init>(r5, r6, r4)     // Catch: java.lang.Exception -> L27 java.lang.OutOfMemoryError -> Lbb
                kotlin.jvm.functions.Function2 r1 = (kotlin.jvm.functions.Function2) r1     // Catch: java.lang.Exception -> L27 java.lang.OutOfMemoryError -> Lbb
                r5 = r7
                kotlin.coroutines.Continuation r5 = (kotlin.coroutines.Continuation) r5     // Catch: java.lang.Exception -> L27 java.lang.OutOfMemoryError -> Lbb
                r7.label = r3     // Catch: java.lang.Exception -> L27 java.lang.OutOfMemoryError -> Lbb
                java.lang.Object r8 = kotlinx.coroutines.BuildersKt.withContext(r8, r1, r5)     // Catch: java.lang.Exception -> L27 java.lang.OutOfMemoryError -> Lbb
                if (r8 != r0) goto L4a
                goto L88
            L4a:
                com.v_chat_sdk.v_video_compressor.VVideoInfo r8 = (com.v_chat_sdk.v_video_compressor.VVideoInfo) r8     // Catch: java.lang.Exception -> L27 java.lang.OutOfMemoryError -> Lbb
                if (r8 != 0) goto L5a
                io.flutter.plugin.common.MethodChannel$Result r8 = r7.$result     // Catch: java.lang.Exception -> L27 java.lang.OutOfMemoryError -> Lbb
                java.lang.String r0 = "VIDEO_NOT_FOUND"
                java.lang.String r1 = "Could not read video file"
                r8.error(r0, r1, r4)     // Catch: java.lang.Exception -> L27 java.lang.OutOfMemoryError -> Lbb
                kotlin.Unit r8 = kotlin.Unit.INSTANCE     // Catch: java.lang.Exception -> L27 java.lang.OutOfMemoryError -> Lbb
                return r8
            L5a:
                com.v_chat_sdk.v_video_compressor.VVideoCompressorPlugin r1 = r7.this$0     // Catch: java.lang.Exception -> L27 java.lang.OutOfMemoryError -> Lbb
                java.util.Map<java.lang.String, java.lang.Object> r3 = r7.$thumbnailConfig     // Catch: java.lang.Exception -> L27 java.lang.OutOfMemoryError -> Lbb
                com.v_chat_sdk.v_video_compressor.VVideoThumbnailConfig r1 = com.v_chat_sdk.v_video_compressor.VVideoCompressorPlugin.access$parseThumbnailConfig(r1, r3)     // Catch: java.lang.Exception -> L27 java.lang.OutOfMemoryError -> Lbb
                kotlinx.coroutines.CoroutineDispatcher r3 = kotlinx.coroutines.Dispatchers.getIO()     // Catch: java.lang.Exception -> L27 java.lang.OutOfMemoryError -> Lbb
                kotlin.coroutines.CoroutineContext r3 = (kotlin.coroutines.CoroutineContext) r3     // Catch: java.lang.Exception -> L27 java.lang.OutOfMemoryError -> Lbb
                com.v_chat_sdk.v_video_compressor.VVideoCompressorPlugin$handleGetVideoThumbnail$1$thumbnailResult$1 r5 = new com.v_chat_sdk.v_video_compressor.VVideoCompressorPlugin$handleGetVideoThumbnail$1$thumbnailResult$1     // Catch: java.lang.Exception -> L27 java.lang.OutOfMemoryError -> Lbb
                com.v_chat_sdk.v_video_compressor.VVideoCompressorPlugin r6 = r7.this$0     // Catch: java.lang.Exception -> L27 java.lang.OutOfMemoryError -> Lbb
                r5.<init>(r6, r8, r1, r4)     // Catch: java.lang.Exception -> L27 java.lang.OutOfMemoryError -> Lbb
                kotlin.jvm.functions.Function2 r5 = (kotlin.jvm.functions.Function2) r5     // Catch: java.lang.Exception -> L27 java.lang.OutOfMemoryError -> Lbb
                r6 = r7
                kotlin.coroutines.Continuation r6 = (kotlin.coroutines.Continuation) r6     // Catch: java.lang.Exception -> L27 java.lang.OutOfMemoryError -> Lbb
                java.lang.Object r8 = kotlin.coroutines.jvm.internal.SpillingKt.nullOutSpilledVariable(r8)     // Catch: java.lang.Exception -> L27 java.lang.OutOfMemoryError -> Lbb
                r7.L$0 = r8     // Catch: java.lang.Exception -> L27 java.lang.OutOfMemoryError -> Lbb
                java.lang.Object r8 = kotlin.coroutines.jvm.internal.SpillingKt.nullOutSpilledVariable(r1)     // Catch: java.lang.Exception -> L27 java.lang.OutOfMemoryError -> Lbb
                r7.L$1 = r8     // Catch: java.lang.Exception -> L27 java.lang.OutOfMemoryError -> Lbb
                r7.label = r2     // Catch: java.lang.Exception -> L27 java.lang.OutOfMemoryError -> Lbb
                java.lang.Object r8 = kotlinx.coroutines.BuildersKt.withContext(r3, r5, r6)     // Catch: java.lang.Exception -> L27 java.lang.OutOfMemoryError -> Lbb
                if (r8 != r0) goto L89
            L88:
                return r0
            L89:
                com.v_chat_sdk.v_video_compressor.VVideoThumbnailResult r8 = (com.v_chat_sdk.v_video_compressor.VVideoThumbnailResult) r8     // Catch: java.lang.Exception -> L27 java.lang.OutOfMemoryError -> Lbb
                if (r8 == 0) goto L97
                io.flutter.plugin.common.MethodChannel$Result r0 = r7.$result     // Catch: java.lang.Exception -> L27 java.lang.OutOfMemoryError -> Lbb
                java.util.Map r8 = r8.toMap()     // Catch: java.lang.Exception -> L27 java.lang.OutOfMemoryError -> Lbb
                r0.success(r8)     // Catch: java.lang.Exception -> L27 java.lang.OutOfMemoryError -> Lbb
                goto Lc4
            L97:
                io.flutter.plugin.common.MethodChannel$Result r8 = r7.$result     // Catch: java.lang.Exception -> L27 java.lang.OutOfMemoryError -> Lbb
                java.lang.String r0 = "THUMBNAIL_ERROR"
                java.lang.String r1 = "Failed to generate thumbnail"
                r8.error(r0, r1, r4)     // Catch: java.lang.Exception -> L27 java.lang.OutOfMemoryError -> Lbb
                goto Lc4
            La1:
                io.flutter.plugin.common.MethodChannel$Result r0 = r7.$result
                java.lang.String r8 = r8.getMessage()
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                java.lang.String r2 = "Failed to generate thumbnail: "
                r1.<init>(r2)
                r1.append(r8)
                java.lang.String r8 = r1.toString()
                java.lang.String r1 = "ERROR"
                r0.error(r1, r8, r4)
                goto Lc4
            Lbb:
                io.flutter.plugin.common.MethodChannel$Result r8 = r7.$result
                java.lang.String r0 = "OUT_OF_MEMORY"
                java.lang.String r1 = "Out of memory during thumbnail generation. Try smaller dimensions."
                r8.error(r0, r1, r4)
            Lc4:
                kotlin.Unit r8 = kotlin.Unit.INSTANCE
                return r8
            */
            throw new UnsupportedOperationException("Method not decompiled: com.v_chat_sdk.v_video_compressor.VVideoCompressorPlugin.C19371.invokeSuspend(java.lang.Object):java.lang.Object");
        }
    }

    private final void handleGetVideoThumbnails(MethodCall call, MethodChannel.Result result) {
        String str = (String) call.argument("videoPath");
        List list = (List) call.argument("configs");
        if (str != null && list != null) {
            BuildersKt__Builders_commonKt.launch$default(this.pluginScope, null, null, new C19381(result, this, str, list, null), 3, null);
        } else {
            result.error("INVALID_ARGUMENT", "Video path and configs are required", null);
        }
    }

    /* JADX INFO: renamed from: com.v_chat_sdk.v_video_compressor.VVideoCompressorPlugin$handleGetVideoThumbnails$1, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: VVideoCompressorPlugin.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 2, 0}, xi = 48)
    @DebugMetadata(c = "com.v_chat_sdk.v_video_compressor.VVideoCompressorPlugin$handleGetVideoThumbnails$1", f = "VVideoCompressorPlugin.kt", i = {1}, l = {398, 408}, m = "invokeSuspend", n = {"videoInfo"}, s = {"L$0"}, v = 1)
    static final class C19381 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ List<Map<String, Object>> $configMaps;
        final /* synthetic */ MethodChannel.Result $result;
        final /* synthetic */ String $videoPath;
        Object L$0;
        int label;
        final /* synthetic */ VVideoCompressorPlugin this$0;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        /* JADX WARN: Multi-variable type inference failed */
        C19381(MethodChannel.Result result, VVideoCompressorPlugin vVideoCompressorPlugin, String str, List<? extends Map<String, ? extends Object>> list, Continuation<? super C19381> continuation) {
            super(2, continuation);
            this.$result = result;
            this.this$0 = vVideoCompressorPlugin;
            this.$videoPath = str;
            this.$configMaps = list;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new C19381(this.$result, this.this$0, this.$videoPath, this.$configMaps, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((C19381) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        /* JADX WARN: Code restructure failed: missing block: B:24:0x0075, code lost:
        
            if (r9 == r0) goto L25;
         */
        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        /*
            Code decompiled incorrectly, please refer to instructions dump.
            To view partially-correct add '--show-bad-code' argument
        */
        public final java.lang.Object invokeSuspend(java.lang.Object r9) {
            /*
                r8 = this;
                java.lang.Object r0 = kotlin.coroutines.intrinsics.IntrinsicsKt.getCOROUTINE_SUSPENDED()
                int r1 = r8.label
                java.lang.String r2 = "ERROR"
                r3 = 2
                r4 = 1
                r5 = 0
                if (r1 == 0) goto L27
                if (r1 == r4) goto L21
                if (r1 != r3) goto L19
                java.lang.Object r0 = r8.L$0
                com.v_chat_sdk.v_video_compressor.VVideoInfo r0 = (com.v_chat_sdk.v_video_compressor.VVideoInfo) r0
                kotlin.ResultKt.throwOnFailure(r9)     // Catch: java.lang.Exception -> L25 java.lang.OutOfMemoryError -> L98
                goto L78
            L19:
                java.lang.IllegalStateException r9 = new java.lang.IllegalStateException
                java.lang.String r0 = "call to 'resume' before 'invoke' with coroutine"
                r9.<init>(r0)
                throw r9
            L21:
                kotlin.ResultKt.throwOnFailure(r9)     // Catch: java.lang.Exception -> L25 java.lang.OutOfMemoryError -> L98
                goto L47
            L25:
                r9 = move-exception
                goto L80
            L27:
                kotlin.ResultKt.throwOnFailure(r9)
                kotlinx.coroutines.CoroutineDispatcher r9 = kotlinx.coroutines.Dispatchers.getIO()     // Catch: java.lang.Exception -> L25 java.lang.OutOfMemoryError -> L98
                kotlin.coroutines.CoroutineContext r9 = (kotlin.coroutines.CoroutineContext) r9     // Catch: java.lang.Exception -> L25 java.lang.OutOfMemoryError -> L98
                com.v_chat_sdk.v_video_compressor.VVideoCompressorPlugin$handleGetVideoThumbnails$1$videoInfo$1 r1 = new com.v_chat_sdk.v_video_compressor.VVideoCompressorPlugin$handleGetVideoThumbnails$1$videoInfo$1     // Catch: java.lang.Exception -> L25 java.lang.OutOfMemoryError -> L98
                com.v_chat_sdk.v_video_compressor.VVideoCompressorPlugin r6 = r8.this$0     // Catch: java.lang.Exception -> L25 java.lang.OutOfMemoryError -> L98
                java.lang.String r7 = r8.$videoPath     // Catch: java.lang.Exception -> L25 java.lang.OutOfMemoryError -> L98
                r1.<init>(r6, r7, r5)     // Catch: java.lang.Exception -> L25 java.lang.OutOfMemoryError -> L98
                kotlin.jvm.functions.Function2 r1 = (kotlin.jvm.functions.Function2) r1     // Catch: java.lang.Exception -> L25 java.lang.OutOfMemoryError -> L98
                r6 = r8
                kotlin.coroutines.Continuation r6 = (kotlin.coroutines.Continuation) r6     // Catch: java.lang.Exception -> L25 java.lang.OutOfMemoryError -> L98
                r8.label = r4     // Catch: java.lang.Exception -> L25 java.lang.OutOfMemoryError -> L98
                java.lang.Object r9 = kotlinx.coroutines.BuildersKt.withContext(r9, r1, r6)     // Catch: java.lang.Exception -> L25 java.lang.OutOfMemoryError -> L98
                if (r9 != r0) goto L47
                goto L77
            L47:
                com.v_chat_sdk.v_video_compressor.VVideoInfo r9 = (com.v_chat_sdk.v_video_compressor.VVideoInfo) r9     // Catch: java.lang.Exception -> L25 java.lang.OutOfMemoryError -> L98
                if (r9 != 0) goto L55
                io.flutter.plugin.common.MethodChannel$Result r9 = r8.$result     // Catch: java.lang.Exception -> L25 java.lang.OutOfMemoryError -> L98
                java.lang.String r0 = "Could not get video info"
                r9.error(r2, r0, r5)     // Catch: java.lang.Exception -> L25 java.lang.OutOfMemoryError -> L98
                kotlin.Unit r9 = kotlin.Unit.INSTANCE     // Catch: java.lang.Exception -> L25 java.lang.OutOfMemoryError -> L98
                return r9
            L55:
                kotlinx.coroutines.CoroutineDispatcher r1 = kotlinx.coroutines.Dispatchers.getIO()     // Catch: java.lang.Exception -> L25 java.lang.OutOfMemoryError -> L98
                kotlin.coroutines.CoroutineContext r1 = (kotlin.coroutines.CoroutineContext) r1     // Catch: java.lang.Exception -> L25 java.lang.OutOfMemoryError -> L98
                com.v_chat_sdk.v_video_compressor.VVideoCompressorPlugin$handleGetVideoThumbnails$1$thumbnails$1 r4 = new com.v_chat_sdk.v_video_compressor.VVideoCompressorPlugin$handleGetVideoThumbnails$1$thumbnails$1     // Catch: java.lang.Exception -> L25 java.lang.OutOfMemoryError -> L98
                java.util.List<java.util.Map<java.lang.String, java.lang.Object>> r6 = r8.$configMaps     // Catch: java.lang.Exception -> L25 java.lang.OutOfMemoryError -> L98
                com.v_chat_sdk.v_video_compressor.VVideoCompressorPlugin r7 = r8.this$0     // Catch: java.lang.Exception -> L25 java.lang.OutOfMemoryError -> L98
                r4.<init>(r6, r7, r9, r5)     // Catch: java.lang.Exception -> L25 java.lang.OutOfMemoryError -> L98
                kotlin.jvm.functions.Function2 r4 = (kotlin.jvm.functions.Function2) r4     // Catch: java.lang.Exception -> L25 java.lang.OutOfMemoryError -> L98
                r6 = r8
                kotlin.coroutines.Continuation r6 = (kotlin.coroutines.Continuation) r6     // Catch: java.lang.Exception -> L25 java.lang.OutOfMemoryError -> L98
                java.lang.Object r9 = kotlin.coroutines.jvm.internal.SpillingKt.nullOutSpilledVariable(r9)     // Catch: java.lang.Exception -> L25 java.lang.OutOfMemoryError -> L98
                r8.L$0 = r9     // Catch: java.lang.Exception -> L25 java.lang.OutOfMemoryError -> L98
                r8.label = r3     // Catch: java.lang.Exception -> L25 java.lang.OutOfMemoryError -> L98
                java.lang.Object r9 = kotlinx.coroutines.BuildersKt.withContext(r1, r4, r6)     // Catch: java.lang.Exception -> L25 java.lang.OutOfMemoryError -> L98
                if (r9 != r0) goto L78
            L77:
                return r0
            L78:
                java.util.List r9 = (java.util.List) r9     // Catch: java.lang.Exception -> L25 java.lang.OutOfMemoryError -> L98
                io.flutter.plugin.common.MethodChannel$Result r0 = r8.$result     // Catch: java.lang.Exception -> L25 java.lang.OutOfMemoryError -> L98
                r0.success(r9)     // Catch: java.lang.Exception -> L25 java.lang.OutOfMemoryError -> L98
                goto La1
            L80:
                io.flutter.plugin.common.MethodChannel$Result r0 = r8.$result
                java.lang.String r9 = r9.getMessage()
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                java.lang.String r3 = "Failed to get video thumbnails: "
                r1.<init>(r3)
                r1.append(r9)
                java.lang.String r9 = r1.toString()
                r0.error(r2, r9, r5)
                goto La1
            L98:
                io.flutter.plugin.common.MethodChannel$Result r9 = r8.$result
                java.lang.String r0 = "OUT_OF_MEMORY"
                java.lang.String r1 = "Out of memory during thumbnail generation. Try smaller dimensions or fewer thumbnails."
                r9.error(r0, r1, r5)
            La1:
                kotlin.Unit r9 = kotlin.Unit.INSTANCE
                return r9
            */
            throw new UnsupportedOperationException("Method not decompiled: com.v_chat_sdk.v_video_compressor.VVideoCompressorPlugin.C19381.invokeSuspend(java.lang.Object):java.lang.Object");
        }
    }

    /* JADX INFO: renamed from: com.v_chat_sdk.v_video_compressor.VVideoCompressorPlugin$handleCleanup$1, reason: invalid class name */
    /* JADX INFO: compiled from: VVideoCompressorPlugin.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 2, 0}, xi = 48)
    @DebugMetadata(c = "com.v_chat_sdk.v_video_compressor.VVideoCompressorPlugin$handleCleanup$1", f = "VVideoCompressorPlugin.kt", i = {}, l = {}, m = "invokeSuspend", n = {}, s = {}, v = 1)
    static final class AnonymousClass1 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ MethodChannel.Result $result;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        AnonymousClass1(MethodChannel.Result result, Continuation<? super AnonymousClass1> continuation) {
            super(2, continuation);
            this.$result = result;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return VVideoCompressorPlugin.this.new AnonymousClass1(this.$result, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((AnonymousClass1) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            IntrinsicsKt.getCOROUTINE_SUSPENDED();
            if (this.label == 0) {
                ResultKt.throwOnFailure(obj);
                try {
                    VVideoCompressionEngine vVideoCompressionEngine = VVideoCompressorPlugin.this.compressionEngine;
                    if (vVideoCompressionEngine == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("compressionEngine");
                        vVideoCompressionEngine = null;
                    }
                    vVideoCompressionEngine.cancelCompression();
                    VVideoCompressionEngine vVideoCompressionEngine2 = VVideoCompressorPlugin.this.compressionEngine;
                    if (vVideoCompressionEngine2 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("compressionEngine");
                        vVideoCompressionEngine2 = null;
                    }
                    this.$result.success(vVideoCompressionEngine2.cleanup());
                } catch (Exception e) {
                    this.$result.error("CLEANUP_ERROR", "Failed to cleanup: " + e.getMessage(), null);
                }
                return Unit.INSTANCE;
            }
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
    }

    private final void handleCleanup(MethodChannel.Result result) {
        BuildersKt__Builders_commonKt.launch$default(this.pluginScope, null, null, new AnonymousClass1(result, null), 3, null);
    }

    private final void handleCleanupFiles(MethodCall call, MethodChannel.Result result) {
        Boolean bool = (Boolean) call.argument("deleteThumbnails");
        boolean zBooleanValue = bool != null ? bool.booleanValue() : true;
        Boolean bool2 = (Boolean) call.argument("deleteCompressedVideos");
        boolean zBooleanValue2 = bool2 != null ? bool2.booleanValue() : false;
        Boolean bool3 = (Boolean) call.argument("clearCache");
        BuildersKt__Builders_commonKt.launch$default(this.pluginScope, null, null, new C19321(zBooleanValue, zBooleanValue2, bool3 != null ? bool3.booleanValue() : true, result, null), 3, null);
    }

    /* JADX INFO: renamed from: com.v_chat_sdk.v_video_compressor.VVideoCompressorPlugin$handleCleanupFiles$1, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: VVideoCompressorPlugin.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 2, 0}, xi = 48)
    @DebugMetadata(c = "com.v_chat_sdk.v_video_compressor.VVideoCompressorPlugin$handleCleanupFiles$1", f = "VVideoCompressorPlugin.kt", i = {}, l = {}, m = "invokeSuspend", n = {}, s = {}, v = 1)
    static final class C19321 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ boolean $clearCache;
        final /* synthetic */ boolean $deleteCompressedVideos;
        final /* synthetic */ boolean $deleteThumbnails;
        final /* synthetic */ MethodChannel.Result $result;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        C19321(boolean z, boolean z2, boolean z3, MethodChannel.Result result, Continuation<? super C19321> continuation) {
            super(2, continuation);
            this.$deleteThumbnails = z;
            this.$deleteCompressedVideos = z2;
            this.$clearCache = z3;
            this.$result = result;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return VVideoCompressorPlugin.this.new C19321(this.$deleteThumbnails, this.$deleteCompressedVideos, this.$clearCache, this.$result, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((C19321) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            IntrinsicsKt.getCOROUTINE_SUSPENDED();
            if (this.label == 0) {
                ResultKt.throwOnFailure(obj);
                try {
                    VVideoCompressionEngine vVideoCompressionEngine = VVideoCompressorPlugin.this.compressionEngine;
                    if (vVideoCompressionEngine == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("compressionEngine");
                        vVideoCompressionEngine = null;
                    }
                    this.$result.success(vVideoCompressionEngine.cleanupFiles(this.$deleteThumbnails, this.$deleteCompressedVideos, this.$clearCache));
                } catch (Exception e) {
                    this.$result.error("CLEANUP_ERROR", "Failed to cleanup files: " + e.getMessage(), null);
                }
                return Unit.INSTANCE;
            }
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
    }

    @Override // io.flutter.embedding.engine.plugins.FlutterPlugin
    public void onDetachedFromEngine(FlutterPlugin.FlutterPluginBinding binding) {
        Intrinsics.checkNotNullParameter(binding, "binding");
        MethodChannel methodChannel = this.methodChannel;
        VVideoCompressionEngine vVideoCompressionEngine = null;
        if (methodChannel == null) {
            Intrinsics.throwUninitializedPropertyAccessException("methodChannel");
            methodChannel = null;
        }
        methodChannel.setMethodCallHandler(null);
        EventChannel eventChannel = this.eventChannel;
        if (eventChannel == null) {
            Intrinsics.throwUninitializedPropertyAccessException("eventChannel");
            eventChannel = null;
        }
        eventChannel.setStreamHandler(null);
        VVideoCompressionEngine vVideoCompressionEngine2 = this.compressionEngine;
        if (vVideoCompressionEngine2 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("compressionEngine");
        } else {
            vVideoCompressionEngine = vVideoCompressionEngine2;
        }
        vVideoCompressionEngine.cancelCompression();
    }

    @Override // io.flutter.plugin.common.EventChannel.StreamHandler
    public void onListen(Object arguments, EventChannel.EventSink events) {
        this.eventSink = events;
    }

    @Override // io.flutter.plugin.common.EventChannel.StreamHandler
    public void onCancel(Object arguments) {
        this.eventSink = null;
    }

    private final VVideoAdvancedConfig parseAdvancedConfig(Map<String, ? extends Object> map) {
        return VVideoAdvancedConfig.INSTANCE.fromMap(map);
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Code duplicated, block: B:52:0x008d  */
    public final VVideoThumbnailConfig parseThumbnailConfig(Map<String, ? extends Object> map) {
        VThumbnailFormat vThumbnailFormatValueOf;
        Object obj;
        Object obj2 = map != null ? map.get("timeMs") : null;
        Number number = obj2 instanceof Number ? (Number) obj2 : null;
        int iIntValue = number != null ? number.intValue() : 0;
        Object obj3 = map != null ? map.get("maxWidth") : null;
        Number number2 = obj3 instanceof Number ? (Number) obj3 : null;
        Integer numValueOf = number2 != null ? Integer.valueOf(number2.intValue()) : null;
        Object obj4 = map != null ? map.get("maxHeight") : null;
        Number number3 = obj4 instanceof Number ? (Number) obj4 : null;
        Integer numValueOf2 = number3 != null ? Integer.valueOf(number3.intValue()) : null;
        Object obj5 = map != null ? map.get("quality") : null;
        Number number4 = obj5 instanceof Number ? (Number) obj5 : null;
        int iIntValue2 = number4 != null ? number4.intValue() : 85;
        if (map != null && (obj = map.get("format")) != null) {
            try {
                vThumbnailFormatValueOf = VThumbnailFormat.valueOf((String) obj);
            } catch (Exception unused) {
                vThumbnailFormatValueOf = VThumbnailFormat.JPEG;
            }
            if (vThumbnailFormatValueOf == null) {
                vThumbnailFormatValueOf = VThumbnailFormat.JPEG;
            }
        } else {
            vThumbnailFormatValueOf = VThumbnailFormat.JPEG;
        }
        VThumbnailFormat vThumbnailFormat = vThumbnailFormatValueOf;
        Object obj6 = map != null ? map.get("outputPath") : null;
        return new VVideoThumbnailConfig(iIntValue, numValueOf, numValueOf2, vThumbnailFormat, iIntValue2, obj6 instanceof String ? (String) obj6 : null);
    }

    private final Map<String, Object> toStringKeyMap(Object value) {
        Map map = value instanceof Map ? (Map) value : null;
        if (map == null) {
            return null;
        }
        Map mapCreateMapBuilder = MapsKt.createMapBuilder();
        for (Map.Entry entry : map.entrySet()) {
            Object key = entry.getKey();
            Object value2 = entry.getValue();
            if (key instanceof String) {
                mapCreateMapBuilder.put(key, value2);
            }
        }
        return MapsKt.build(mapCreateMapBuilder);
    }
}
