package com.kineapps.flutterarchive;

import android.util.Log;
import androidx.core.app.NotificationCompat;
import io.appmetrica.analytics.coreutils.internal.StringUtils;
import io.flutter.embedding.engine.plugins.FlutterPlugin;
import io.flutter.plugin.common.BinaryMessenger;
import io.flutter.plugin.common.MethodCall;
import io.flutter.plugin.common.MethodChannel;
import java.io.BufferedOutputStream;
import java.io.Closeable;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.nio.charset.Charset;
import java.util.List;
import java.util.Map;
import java.util.concurrent.CancellationException;
import java.util.zip.ZipEntry;
import java.util.zip.ZipFile;
import java.util.zip.ZipOutputStream;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.ResultKt;
import kotlin.TuplesKt;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.collections.MapsKt;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.Boxing;
import kotlin.coroutines.jvm.internal.ContinuationImpl;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SpillingKt;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.io.ByteStreamsKt;
import kotlin.io.CloseableKt;
import kotlin.io.FilesKt;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;
import kotlinx.coroutines.BuildersKt;
import kotlinx.coroutines.BuildersKt__Builders_commonKt;
import kotlinx.coroutines.CompletableDeferred;
import kotlinx.coroutines.CompletableDeferredKt;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.CoroutineScopeKt;
import kotlinx.coroutines.Dispatchers;

/* JADX INFO: compiled from: FlutterArchivePlugin.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u0090\u0001\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0010 \n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0006\n\u0002\b\u0004\n\u0002\u0010$\n\u0002\u0010\u0000\n\u0002\b\u0004\u0018\u0000 >2\u00020\u00012\u00020\u0002:\u0002>?B\u0007¢\u0006\u0004\b\u0003\u0010\u0004J\u0010\u0010\t\u001a\u00020\n2\u0006\u0010\u000b\u001a\u00020\u0006H\u0016J\u0010\u0010\f\u001a\u00020\n2\u0006\u0010\u000b\u001a\u00020\u0006H\u0016J\u0010\u0010\r\u001a\u00020\n2\u0006\u0010\u000e\u001a\u00020\u000fH\u0002J\b\u0010\u0010\u001a\u00020\nH\u0002J\u0018\u0010\u0011\u001a\u00020\n2\u0006\u0010\u0012\u001a\u00020\u00132\u0006\u0010\u0014\u001a\u00020\u0015H\u0016J>\u0010\u0016\u001a\u00020\n2\u0006\u0010\u0017\u001a\u00020\u00182\u0006\u0010\u0019\u001a\u00020\u00182\u0006\u0010\u001a\u001a\u00020\u001b2\u0006\u0010\u001c\u001a\u00020\u001b2\u0006\u0010\u001d\u001a\u00020\u001b2\u0006\u0010\u001e\u001a\u00020\u001fH\u0082@¢\u0006\u0002\u0010 JN\u0010!\u001a\u00020\u001f2\u0006\u0010\"\u001a\u00020#2\u0006\u0010$\u001a\u00020%2\u0006\u0010&\u001a\u00020\u00182\u0006\u0010\u001a\u001a\u00020\u001b2\u0006\u0010\u001d\u001a\u00020\u001b2\u0006\u0010\u001e\u001a\u00020\u001f2\u0006\u0010'\u001a\u00020\u001f2\u0006\u0010(\u001a\u00020\u001fH\u0082@¢\u0006\u0002\u0010)J.\u0010*\u001a\u00020\n2\u0006\u0010\u0017\u001a\u00020\u00182\f\u0010+\u001a\b\u0012\u0004\u0012\u00020\u00180,2\u0006\u0010\u0019\u001a\u00020\u00182\u0006\u0010\u001c\u001a\u00020\u001bH\u0002J8\u0010-\u001a\u00020\n2\u0006\u0010\u0019\u001a\u00020\u00182\b\u0010.\u001a\u0004\u0018\u00010/2\u0006\u00100\u001a\u00020\u00182\u0006\u0010\u001d\u001a\u00020\u001b2\u0006\u0010\u001e\u001a\u00020\u001fH\u0082@¢\u0006\u0002\u00101J&\u0010\u001d\u001a\u0002022\u0006\u0010\u001e\u001a\u00020\u001f2\u0006\u00103\u001a\u0002042\u0006\u00105\u001a\u000206H\u0082@¢\u0006\u0002\u00107J\u0018\u00108\u001a\u00020\u001f2\u0006\u00109\u001a\u00020%2\u0006\u0010\u001a\u001a\u00020\u001bH\u0002J\u001c\u0010:\u001a\u000e\u0012\u0004\u0012\u00020\u0018\u0012\u0004\u0012\u00020<0;2\u0006\u0010=\u001a\u000204H\u0002R\u0010\u0010\u0005\u001a\u0004\u0018\u00010\u0006X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u0007\u001a\u0004\u0018\u00010\bX\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006@"}, d2 = {"Lcom/kineapps/flutterarchive/FlutterArchivePlugin;", "Lio/flutter/embedding/engine/plugins/FlutterPlugin;", "Lio/flutter/plugin/common/MethodChannel$MethodCallHandler;", "<init>", "()V", "pluginBinding", "Lio/flutter/embedding/engine/plugins/FlutterPlugin$FlutterPluginBinding;", "methodChannel", "Lio/flutter/plugin/common/MethodChannel;", "onAttachedToEngine", "", "binding", "onDetachedFromEngine", "doOnAttachedToEngine", "messenger", "Lio/flutter/plugin/common/BinaryMessenger;", "doOnDetachedFromEngine", "onMethodCall", NotificationCompat.CATEGORY_CALL, "Lio/flutter/plugin/common/MethodCall;", "result", "Lio/flutter/plugin/common/MethodChannel$Result;", "zip", "sourceDirPath", "", "zipFilePath", "recurseSubDirs", "", "includeBaseDirectory", "reportProgress", "jobId", "", "(Ljava/lang/String;Ljava/lang/String;ZZZILkotlin/coroutines/Continuation;)Ljava/lang/Object;", "addFilesInDirectoryToZip", "zipOutputStream", "Ljava/util/zip/ZipOutputStream;", "rootDirectory", "Ljava/io/File;", "directoryPath", "totalFilesCount", "totalHandledFilesCount", "(Ljava/util/zip/ZipOutputStream;Ljava/io/File;Ljava/lang/String;ZZIIILkotlin/coroutines/Continuation;)Ljava/lang/Object;", "zipFiles", "relativeFilePaths", "", "unzip", "zipFileCharSet", "Ljava/nio/charset/Charset;", "destinationDirPath", "(Ljava/lang/String;Ljava/nio/charset/Charset;Ljava/lang/String;ZILkotlin/coroutines/Continuation;)Ljava/lang/Object;", "Lcom/kineapps/flutterarchive/ZipFileOperation;", "zipEntry", "Ljava/util/zip/ZipEntry;", NotificationCompat.CATEGORY_PROGRESS, "", "(ILjava/util/zip/ZipEntry;DLkotlin/coroutines/Continuation;)Ljava/lang/Object;", "getFilesCount", "dir", "zipEntryToMap", "", "", "ze", "Companion", "ZipFileEx", "flutter_archive_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class FlutterArchivePlugin implements FlutterPlugin, MethodChannel.MethodCallHandler {
    private static final String LOG_TAG = "FlutterArchivePlugin";
    private MethodChannel methodChannel;
    private FlutterPlugin.FlutterPluginBinding pluginBinding;

    /* JADX INFO: renamed from: com.kineapps.flutterarchive.FlutterArchivePlugin$addFilesInDirectoryToZip$1, reason: invalid class name */
    /* JADX INFO: compiled from: FlutterArchivePlugin.kt */
    @Metadata(k = 3, mv = {2, 2, 0}, xi = 48)
    @DebugMetadata(c = "com.kineapps.flutterarchive.FlutterArchivePlugin", f = "FlutterArchivePlugin.kt", i = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3}, l = {254, 264, 269, 282}, m = "addFilesInDirectoryToZip", n = {"zipOutputStream", "rootDirectory", "directoryPath", "directory", "files", "handledFilesCount", "f", "path", "relativePath", "entry", "recurseSubDirs", "reportProgress", "jobId", "totalFilesCount", "totalHandledFilesCount", NotificationCompat.CATEGORY_PROGRESS, "zipOutputStream", "rootDirectory", "directoryPath", "directory", "files", "handledFilesCount", "f", "path", "relativePath", "entry", "recurseSubDirs", "reportProgress", "jobId", "totalFilesCount", "totalHandledFilesCount", "zipOutputStream", "rootDirectory", "directoryPath", "directory", "files", "handledFilesCount", "f", "path", "relativePath", "entry", "recurseSubDirs", "reportProgress", "jobId", "totalFilesCount", "totalHandledFilesCount", "zipOutputStream", "rootDirectory", "directoryPath", "directory", "files", "handledFilesCount", "f", "path", "relativePath", "recurseSubDirs", "reportProgress", "jobId", "totalFilesCount", "totalHandledFilesCount"}, s = {"L$0", "L$1", "L$2", "L$3", "L$4", "L$5", "L$6", "L$7", "L$8", "L$9", "Z$0", "Z$1", "I$0", "I$1", "I$2", "D$0", "L$0", "L$1", "L$2", "L$3", "L$4", "L$5", "L$6", "L$7", "L$8", "L$9", "Z$0", "Z$1", "I$0", "I$1", "I$2", "L$0", "L$1", "L$2", "L$3", "L$4", "L$5", "L$6", "L$7", "L$8", "L$9", "Z$0", "Z$1", "I$0", "I$1", "I$2", "L$0", "L$1", "L$2", "L$3", "L$4", "L$5", "L$6", "L$7", "L$8", "Z$0", "Z$1", "I$0", "I$1", "I$2"}, v = 1)
    static final class AnonymousClass1 extends ContinuationImpl {
        double D$0;
        int I$0;
        int I$1;
        int I$2;
        int I$3;
        int I$4;
        Object L$0;
        Object L$1;
        Object L$10;
        Object L$2;
        Object L$3;
        Object L$4;
        Object L$5;
        Object L$6;
        Object L$7;
        Object L$8;
        Object L$9;
        boolean Z$0;
        boolean Z$1;
        int label;
        /* synthetic */ Object result;

        AnonymousClass1(Continuation<? super AnonymousClass1> continuation) {
            super(continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            this.result = obj;
            this.label |= Integer.MIN_VALUE;
            return FlutterArchivePlugin.this.addFilesInDirectoryToZip(null, null, null, false, false, 0, 0, 0, this);
        }
    }

    /* JADX INFO: renamed from: com.kineapps.flutterarchive.FlutterArchivePlugin$unzip$1, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: FlutterArchivePlugin.kt */
    @Metadata(k = 3, mv = {2, 2, 0}, xi = 48)
    @DebugMetadata(c = "com.kineapps.flutterarchive.FlutterArchivePlugin", f = "FlutterArchivePlugin.kt", i = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}, l = {409, 431}, m = "unzip", n = {"zipFilePath", "zipFileCharSet", "destinationDirPath", "destinationDir", "zipFile", "it", "ze", "filename", "outputFile", "outputFileCanonicalPath", "reportProgress", "jobId", "$i$a$-use-FlutterArchivePlugin$unzip$2", "entriesCount", "currentEntryIndex", NotificationCompat.CATEGORY_PROGRESS, "zipFilePath", "zipFileCharSet", "destinationDirPath", "destinationDir", "zipFile", "it", "ze", "filename", "outputFile", "outputFileCanonicalPath", "parentDir", "reportProgress", "jobId", "$i$a$-use-FlutterArchivePlugin$unzip$2", "entriesCount", "currentEntryIndex"}, s = {"L$0", "L$1", "L$2", "L$3", "L$4", "L$6", "L$7", "L$9", "L$10", "L$11", "Z$0", "I$0", "I$1", "D$0", "D$1", "D$2", "L$0", "L$1", "L$2", "L$3", "L$4", "L$6", "L$7", "L$9", "L$10", "L$11", "L$12", "Z$0", "I$0", "I$1", "D$0", "D$1"}, v = 1)
    static final class C17951 extends ContinuationImpl {
        double D$0;
        double D$1;
        double D$2;
        int I$0;
        int I$1;
        Object L$0;
        Object L$1;
        Object L$10;
        Object L$11;
        Object L$12;
        Object L$2;
        Object L$3;
        Object L$4;
        Object L$5;
        Object L$6;
        Object L$7;
        Object L$8;
        Object L$9;
        boolean Z$0;
        int label;
        /* synthetic */ Object result;

        C17951(Continuation<? super C17951> continuation) {
            super(continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            this.result = obj;
            this.label |= Integer.MIN_VALUE;
            return FlutterArchivePlugin.this.unzip(null, null, null, false, 0, this);
        }
    }

    @Override // io.flutter.embedding.engine.plugins.FlutterPlugin
    public void onAttachedToEngine(FlutterPlugin.FlutterPluginBinding binding) {
        Intrinsics.checkNotNullParameter(binding, "binding");
        Log.d(LOG_TAG, "onAttachedToEngine - IN");
        if (this.pluginBinding != null) {
            Log.w(LOG_TAG, "onAttachedToEngine - already attached");
        }
        this.pluginBinding = binding;
        BinaryMessenger binaryMessenger = binding != null ? binding.getBinaryMessenger() : null;
        Intrinsics.checkNotNull(binaryMessenger);
        doOnAttachedToEngine(binaryMessenger);
        Log.d(LOG_TAG, "onAttachedToEngine - OUT");
    }

    @Override // io.flutter.embedding.engine.plugins.FlutterPlugin
    public void onDetachedFromEngine(FlutterPlugin.FlutterPluginBinding binding) {
        Intrinsics.checkNotNullParameter(binding, "binding");
        Log.d(LOG_TAG, "onDetachedFromEngine");
        doOnDetachedFromEngine();
    }

    private final void doOnAttachedToEngine(BinaryMessenger messenger) {
        Log.d(LOG_TAG, "doOnAttachedToEngine - IN");
        MethodChannel methodChannel = new MethodChannel(messenger, "flutter_archive");
        this.methodChannel = methodChannel;
        methodChannel.setMethodCallHandler(this);
        Log.d(LOG_TAG, "doOnAttachedToEngine - OUT");
    }

    private final void doOnDetachedFromEngine() {
        Log.d(LOG_TAG, "doOnDetachedFromEngine - IN");
        if (this.pluginBinding == null) {
            Log.w(LOG_TAG, "doOnDetachedFromEngine - already detached");
        }
        this.pluginBinding = null;
        MethodChannel methodChannel = this.methodChannel;
        if (methodChannel != null) {
            methodChannel.setMethodCallHandler(null);
        }
        this.methodChannel = null;
        Log.d(LOG_TAG, "doOnDetachedFromEngine - OUT");
    }

    @Override // io.flutter.plugin.common.MethodChannel.MethodCallHandler
    public void onMethodCall(MethodCall call, MethodChannel.Result result) {
        Intrinsics.checkNotNullParameter(call, "call");
        Intrinsics.checkNotNullParameter(result, "result");
        CoroutineScope CoroutineScope = CoroutineScopeKt.CoroutineScope(Dispatchers.getMain());
        String str = call.method;
        if (str != null) {
            int iHashCode = str.hashCode();
            if (iHashCode != -626402228) {
                if (iHashCode != -152551466) {
                    if (iHashCode == 111449576 && str.equals("unzip")) {
                        BuildersKt__Builders_commonKt.launch$default(CoroutineScope, null, null, new C17933(call, result, this, null), 3, null);
                        return;
                    }
                } else if (str.equals("zipFiles")) {
                    BuildersKt__Builders_commonKt.launch$default(CoroutineScope, null, null, new C17922(call, result, this, null), 3, null);
                    return;
                }
            } else if (str.equals("zipDirectory")) {
                BuildersKt__Builders_commonKt.launch$default(CoroutineScope, null, null, new C17911(call, result, this, null), 3, null);
                return;
            }
        }
        result.notImplemented();
        Unit unit = Unit.INSTANCE;
    }

    /* JADX INFO: renamed from: com.kineapps.flutterarchive.FlutterArchivePlugin$onMethodCall$1, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: FlutterArchivePlugin.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 2, 0}, xi = 48)
    @DebugMetadata(c = "com.kineapps.flutterarchive.FlutterArchivePlugin$onMethodCall$1", f = "FlutterArchivePlugin.kt", i = {0, 0, 0, 0, 0, 0}, l = {105}, m = "invokeSuspend", n = {"sourceDir", "zipFile", "reportProgress", "jobId", "recurseSubDirs", "includeBaseDirectory"}, s = {"L$0", "L$1", "L$2", "L$3", "Z$0", "Z$1"}, v = 1)
    static final class C17911 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ MethodCall $call;
        final /* synthetic */ MethodChannel.Result $result;
        Object L$0;
        Object L$1;
        Object L$2;
        Object L$3;
        boolean Z$0;
        boolean Z$1;
        int label;
        final /* synthetic */ FlutterArchivePlugin this$0;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        C17911(MethodCall methodCall, MethodChannel.Result result, FlutterArchivePlugin flutterArchivePlugin, Continuation<? super C17911> continuation) {
            super(2, continuation);
            this.$call = methodCall;
            this.$result = result;
            this.this$0 = flutterArchivePlugin;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new C17911(this.$call, this.$result, this.this$0, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((C17911) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i = this.label;
            try {
                if (i == 0) {
                    ResultKt.throwOnFailure(obj);
                    String str = (String) this.$call.argument("sourceDir");
                    String str2 = (String) this.$call.argument("zipFile");
                    boolean zAreEqual = Intrinsics.areEqual(this.$call.argument("recurseSubDirs"), Boxing.boxBoolean(true));
                    boolean zAreEqual2 = Intrinsics.areEqual(this.$call.argument("includeBaseDirectory"), Boxing.boxBoolean(true));
                    Boolean bool = (Boolean) this.$call.argument("reportProgress");
                    Integer num = (Integer) this.$call.argument("jobId");
                    this.L$0 = SpillingKt.nullOutSpilledVariable(str);
                    this.L$1 = SpillingKt.nullOutSpilledVariable(str2);
                    this.L$2 = SpillingKt.nullOutSpilledVariable(bool);
                    this.L$3 = SpillingKt.nullOutSpilledVariable(num);
                    this.Z$0 = zAreEqual;
                    this.Z$1 = zAreEqual2;
                    this.label = 1;
                    if (BuildersKt.withContext(Dispatchers.getIO(), new C11751(this.this$0, str, str2, zAreEqual, zAreEqual2, bool, num, null), this) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                } else {
                    if (i != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ResultKt.throwOnFailure(obj);
                }
                this.$result.success(Boxing.boxBoolean(true));
            } catch (Exception e) {
                e.printStackTrace();
                this.$result.error("zip_error", e.getLocalizedMessage(), e.toString());
            }
            return Unit.INSTANCE;
        }

        /* JADX INFO: renamed from: com.kineapps.flutterarchive.FlutterArchivePlugin$onMethodCall$1$1, reason: invalid class name and collision with other inner class name */
        /* JADX INFO: compiled from: FlutterArchivePlugin.kt */
        @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 2, 0}, xi = 48)
        @DebugMetadata(c = "com.kineapps.flutterarchive.FlutterArchivePlugin$onMethodCall$1$1", f = "FlutterArchivePlugin.kt", i = {}, l = {106}, m = "invokeSuspend", n = {}, s = {}, v = 1)
        static final class C11751 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
            final /* synthetic */ boolean $includeBaseDirectory;
            final /* synthetic */ Integer $jobId;
            final /* synthetic */ boolean $recurseSubDirs;
            final /* synthetic */ Boolean $reportProgress;
            final /* synthetic */ String $sourceDir;
            final /* synthetic */ String $zipFile;
            int label;
            final /* synthetic */ FlutterArchivePlugin this$0;

            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            C11751(FlutterArchivePlugin flutterArchivePlugin, String str, String str2, boolean z, boolean z2, Boolean bool, Integer num, Continuation<? super C11751> continuation) {
                super(2, continuation);
                this.this$0 = flutterArchivePlugin;
                this.$sourceDir = str;
                this.$zipFile = str2;
                this.$recurseSubDirs = z;
                this.$includeBaseDirectory = z2;
                this.$reportProgress = bool;
                this.$jobId = num;
            }

            @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
            public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
                return new C11751(this.this$0, this.$sourceDir, this.$zipFile, this.$recurseSubDirs, this.$includeBaseDirectory, this.$reportProgress, this.$jobId, continuation);
            }

            @Override // kotlin.jvm.functions.Function2
            public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
                return ((C11751) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
            }

            @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
            public final Object invokeSuspend(Object obj) {
                Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
                int i = this.label;
                if (i == 0) {
                    ResultKt.throwOnFailure(obj);
                    FlutterArchivePlugin flutterArchivePlugin = this.this$0;
                    String str = this.$sourceDir;
                    Intrinsics.checkNotNull(str);
                    String str2 = this.$zipFile;
                    Intrinsics.checkNotNull(str2);
                    boolean z = this.$recurseSubDirs;
                    boolean z2 = this.$includeBaseDirectory;
                    boolean zAreEqual = Intrinsics.areEqual(this.$reportProgress, Boxing.boxBoolean(true));
                    Integer num = this.$jobId;
                    Intrinsics.checkNotNull(num);
                    this.label = 1;
                    if (flutterArchivePlugin.zip(str, str2, z, z2, zAreEqual, num.intValue(), this) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                } else {
                    if (i != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ResultKt.throwOnFailure(obj);
                }
                return Unit.INSTANCE;
            }
        }
    }

    /* JADX INFO: renamed from: com.kineapps.flutterarchive.FlutterArchivePlugin$onMethodCall$2, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: FlutterArchivePlugin.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 2, 0}, xi = 48)
    @DebugMetadata(c = "com.kineapps.flutterarchive.FlutterArchivePlugin$onMethodCall$2", f = "FlutterArchivePlugin.kt", i = {0, 0, 0, 0}, l = {131}, m = "invokeSuspend", n = {"sourceDir", "files", "zipFile", "includeBaseDirectory"}, s = {"L$0", "L$1", "L$2", "Z$0"}, v = 1)
    static final class C17922 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ MethodCall $call;
        final /* synthetic */ MethodChannel.Result $result;
        Object L$0;
        Object L$1;
        Object L$2;
        boolean Z$0;
        int label;
        final /* synthetic */ FlutterArchivePlugin this$0;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        C17922(MethodCall methodCall, MethodChannel.Result result, FlutterArchivePlugin flutterArchivePlugin, Continuation<? super C17922> continuation) {
            super(2, continuation);
            this.$call = methodCall;
            this.$result = result;
            this.this$0 = flutterArchivePlugin;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new C17922(this.$call, this.$result, this.this$0, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((C17922) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i = this.label;
            try {
                if (i == 0) {
                    ResultKt.throwOnFailure(obj);
                    String str = (String) this.$call.argument("sourceDir");
                    List list = (List) this.$call.argument("files");
                    String str2 = (String) this.$call.argument("zipFile");
                    boolean zAreEqual = Intrinsics.areEqual(this.$call.argument("includeBaseDirectory"), Boxing.boxBoolean(true));
                    this.L$0 = SpillingKt.nullOutSpilledVariable(str);
                    this.L$1 = SpillingKt.nullOutSpilledVariable(list);
                    this.L$2 = SpillingKt.nullOutSpilledVariable(str2);
                    this.Z$0 = zAreEqual;
                    this.label = 1;
                    if (BuildersKt.withContext(Dispatchers.getIO(), new AnonymousClass1(this.this$0, str, list, str2, zAreEqual, null), this) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                } else {
                    if (i != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ResultKt.throwOnFailure(obj);
                }
                this.$result.success(Boxing.boxBoolean(true));
            } catch (Exception e) {
                e.printStackTrace();
                this.$result.error("zip_error", e.getLocalizedMessage(), e.toString());
            }
            return Unit.INSTANCE;
        }

        /* JADX INFO: renamed from: com.kineapps.flutterarchive.FlutterArchivePlugin$onMethodCall$2$1, reason: invalid class name */
        /* JADX INFO: compiled from: FlutterArchivePlugin.kt */
        @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 2, 0}, xi = 48)
        @DebugMetadata(c = "com.kineapps.flutterarchive.FlutterArchivePlugin$onMethodCall$2$1", f = "FlutterArchivePlugin.kt", i = {}, l = {}, m = "invokeSuspend", n = {}, s = {}, v = 1)
        static final class AnonymousClass1 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
            final /* synthetic */ List<String> $files;
            final /* synthetic */ boolean $includeBaseDirectory;
            final /* synthetic */ String $sourceDir;
            final /* synthetic */ String $zipFile;
            int label;
            final /* synthetic */ FlutterArchivePlugin this$0;

            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            AnonymousClass1(FlutterArchivePlugin flutterArchivePlugin, String str, List<String> list, String str2, boolean z, Continuation<? super AnonymousClass1> continuation) {
                super(2, continuation);
                this.this$0 = flutterArchivePlugin;
                this.$sourceDir = str;
                this.$files = list;
                this.$zipFile = str2;
                this.$includeBaseDirectory = z;
            }

            @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
            public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
                return new AnonymousClass1(this.this$0, this.$sourceDir, this.$files, this.$zipFile, this.$includeBaseDirectory, continuation);
            }

            @Override // kotlin.jvm.functions.Function2
            public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
                return ((AnonymousClass1) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
            }

            @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
            public final Object invokeSuspend(Object obj) throws IOException {
                IntrinsicsKt.getCOROUTINE_SUSPENDED();
                if (this.label != 0) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ResultKt.throwOnFailure(obj);
                FlutterArchivePlugin flutterArchivePlugin = this.this$0;
                String str = this.$sourceDir;
                Intrinsics.checkNotNull(str);
                List<String> list = this.$files;
                Intrinsics.checkNotNull(list);
                String str2 = this.$zipFile;
                Intrinsics.checkNotNull(str2);
                flutterArchivePlugin.zipFiles(str, list, str2, this.$includeBaseDirectory);
                return Unit.INSTANCE;
            }
        }
    }

    /* JADX INFO: renamed from: com.kineapps.flutterarchive.FlutterArchivePlugin$onMethodCall$3, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: FlutterArchivePlugin.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 2, 0}, xi = 48)
    @DebugMetadata(c = "com.kineapps.flutterarchive.FlutterArchivePlugin$onMethodCall$3", f = "FlutterArchivePlugin.kt", i = {0, 0, 0, 0, 0, 0}, l = {153}, m = "invokeSuspend", n = {"zipFile", "zipFileCharset", "destinationDir", "reportProgress", "jobId", "charset"}, s = {"L$0", "L$1", "L$2", "L$3", "L$4", "L$5"}, v = 1)
    static final class C17933 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ MethodCall $call;
        final /* synthetic */ MethodChannel.Result $result;
        Object L$0;
        Object L$1;
        Object L$2;
        Object L$3;
        Object L$4;
        Object L$5;
        int label;
        final /* synthetic */ FlutterArchivePlugin this$0;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        C17933(MethodCall methodCall, MethodChannel.Result result, FlutterArchivePlugin flutterArchivePlugin, Continuation<? super C17933> continuation) {
            super(2, continuation);
            this.$call = methodCall;
            this.$result = result;
            this.this$0 = flutterArchivePlugin;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new C17933(this.$call, this.$result, this.this$0, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((C17933) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i = this.label;
            try {
                if (i == 0) {
                    ResultKt.throwOnFailure(obj);
                    String str = (String) this.$call.argument("zipFile");
                    String str2 = (String) this.$call.argument("zipFileCharset");
                    String str3 = (String) this.$call.argument("destinationDir");
                    Boolean bool = (Boolean) this.$call.argument("reportProgress");
                    Integer num = (Integer) this.$call.argument("jobId");
                    Charset charsetForName = str2 != null ? Charset.forName(str2) : null;
                    Log.d(FlutterArchivePlugin.LOG_TAG, "onMethodCall / unzip...");
                    this.L$0 = SpillingKt.nullOutSpilledVariable(str);
                    this.L$1 = SpillingKt.nullOutSpilledVariable(str2);
                    this.L$2 = SpillingKt.nullOutSpilledVariable(str3);
                    this.L$3 = SpillingKt.nullOutSpilledVariable(bool);
                    this.L$4 = SpillingKt.nullOutSpilledVariable(num);
                    this.L$5 = SpillingKt.nullOutSpilledVariable(charsetForName);
                    this.label = 1;
                    if (BuildersKt.withContext(Dispatchers.getIO(), new AnonymousClass1(this.this$0, str, charsetForName, str3, bool, num, null), this) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                } else {
                    if (i != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ResultKt.throwOnFailure(obj);
                }
                Log.d(FlutterArchivePlugin.LOG_TAG, "...onMethodCall / unzip");
                this.$result.success(Boxing.boxBoolean(true));
            } catch (Exception e) {
                e.printStackTrace();
                this.$result.error("unzip_error", e.getLocalizedMessage(), e.toString());
            }
            return Unit.INSTANCE;
        }

        /* JADX INFO: renamed from: com.kineapps.flutterarchive.FlutterArchivePlugin$onMethodCall$3$1, reason: invalid class name */
        /* JADX INFO: compiled from: FlutterArchivePlugin.kt */
        @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 2, 0}, xi = 48)
        @DebugMetadata(c = "com.kineapps.flutterarchive.FlutterArchivePlugin$onMethodCall$3$1", f = "FlutterArchivePlugin.kt", i = {}, l = {154}, m = "invokeSuspend", n = {}, s = {}, v = 1)
        static final class AnonymousClass1 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
            final /* synthetic */ Charset $charset;
            final /* synthetic */ String $destinationDir;
            final /* synthetic */ Integer $jobId;
            final /* synthetic */ Boolean $reportProgress;
            final /* synthetic */ String $zipFile;
            int label;
            final /* synthetic */ FlutterArchivePlugin this$0;

            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            AnonymousClass1(FlutterArchivePlugin flutterArchivePlugin, String str, Charset charset, String str2, Boolean bool, Integer num, Continuation<? super AnonymousClass1> continuation) {
                super(2, continuation);
                this.this$0 = flutterArchivePlugin;
                this.$zipFile = str;
                this.$charset = charset;
                this.$destinationDir = str2;
                this.$reportProgress = bool;
                this.$jobId = num;
            }

            @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
            public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
                return new AnonymousClass1(this.this$0, this.$zipFile, this.$charset, this.$destinationDir, this.$reportProgress, this.$jobId, continuation);
            }

            @Override // kotlin.jvm.functions.Function2
            public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
                return ((AnonymousClass1) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
            }

            @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
            public final Object invokeSuspend(Object obj) {
                Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
                int i = this.label;
                if (i == 0) {
                    ResultKt.throwOnFailure(obj);
                    FlutterArchivePlugin flutterArchivePlugin = this.this$0;
                    String str = this.$zipFile;
                    Intrinsics.checkNotNull(str);
                    Charset charset = this.$charset;
                    String str2 = this.$destinationDir;
                    Intrinsics.checkNotNull(str2);
                    boolean zAreEqual = Intrinsics.areEqual(this.$reportProgress, Boxing.boxBoolean(true));
                    Integer num = this.$jobId;
                    Intrinsics.checkNotNull(num);
                    this.label = 1;
                    if (flutterArchivePlugin.unzip(str, charset, str2, zAreEqual, num.intValue(), this) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                } else {
                    if (i != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ResultKt.throwOnFailure(obj);
                }
                return Unit.INSTANCE;
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final Object zip(String str, String str2, boolean z, boolean z2, boolean z3, int i, Continuation<? super Unit> continuation) throws IOException {
        int filesCount;
        Log.i("zip", "sourceDirPath: " + str + ", zipFilePath: " + str2 + ", recurseSubDirs: " + z + ", includeBaseDirectory: " + z2);
        File parentFile = z2 ? new File(str).getParentFile() : new File(str);
        if (z3) {
            Intrinsics.checkNotNull(parentFile);
            filesCount = getFilesCount(parentFile, z);
        } else {
            filesCount = 0;
        }
        Object objWithContext = BuildersKt.withContext(Dispatchers.getIO(), new C17962(str2, this, parentFile, str, z, z3, i, filesCount, null), continuation);
        return objWithContext == IntrinsicsKt.getCOROUTINE_SUSPENDED() ? objWithContext : Unit.INSTANCE;
    }

    /* JADX INFO: renamed from: com.kineapps.flutterarchive.FlutterArchivePlugin$zip$2, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: FlutterArchivePlugin.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\b\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 2, 0}, xi = 48)
    @DebugMetadata(c = "com.kineapps.flutterarchive.FlutterArchivePlugin$zip$2", f = "FlutterArchivePlugin.kt", i = {0, 0}, l = {199}, m = "invokeSuspend", n = {"zipOutputStream", "$i$a$-use-FlutterArchivePlugin$zip$2$1"}, s = {"L$1", "I$0"}, v = 1)
    static final class C17962 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Integer>, Object> {
        final /* synthetic */ int $jobId;
        final /* synthetic */ boolean $recurseSubDirs;
        final /* synthetic */ boolean $reportProgress;
        final /* synthetic */ File $rootDirectory;
        final /* synthetic */ String $sourceDirPath;
        final /* synthetic */ int $totalFileCount;
        final /* synthetic */ String $zipFilePath;
        int I$0;
        Object L$0;
        Object L$1;
        int label;
        final /* synthetic */ FlutterArchivePlugin this$0;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        C17962(String str, FlutterArchivePlugin flutterArchivePlugin, File file, String str2, boolean z, boolean z2, int i, int i2, Continuation<? super C17962> continuation) {
            super(2, continuation);
            this.$zipFilePath = str;
            this.this$0 = flutterArchivePlugin;
            this.$rootDirectory = file;
            this.$sourceDirPath = str2;
            this.$recurseSubDirs = z;
            this.$reportProgress = z2;
            this.$jobId = i;
            this.$totalFileCount = i2;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new C17962(this.$zipFilePath, this.this$0, this.$rootDirectory, this.$sourceDirPath, this.$recurseSubDirs, this.$reportProgress, this.$jobId, this.$totalFileCount, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Integer> continuation) {
            return ((C17962) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        /* JADX WARN: Multi-variable type inference failed */
        /* JADX WARN: Type inference failed for: r1v0, types: [int] */
        /* JADX WARN: Type inference failed for: r1v1, types: [java.io.Closeable] */
        /* JADX WARN: Type inference failed for: r1v10 */
        /* JADX WARN: Type inference failed for: r1v6, types: [java.io.Closeable] */
        /* JADX WARN: Type inference failed for: r1v9 */
        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) throws IOException {
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            ?? r1 = this.label;
            try {
                if (r1 == 0) {
                    ResultKt.throwOnFailure(obj);
                    ZipOutputStream zipOutputStream = new ZipOutputStream(new BufferedOutputStream(new FileOutputStream(this.$zipFilePath)));
                    FlutterArchivePlugin flutterArchivePlugin = this.this$0;
                    File file = this.$rootDirectory;
                    String str = this.$sourceDirPath;
                    boolean z = this.$recurseSubDirs;
                    boolean z2 = this.$reportProgress;
                    int i = this.$jobId;
                    int i2 = this.$totalFileCount;
                    ZipOutputStream zipOutputStream2 = zipOutputStream;
                    Intrinsics.checkNotNull(file);
                    this.L$0 = zipOutputStream;
                    this.L$1 = SpillingKt.nullOutSpilledVariable(zipOutputStream2);
                    this.I$0 = 0;
                    this.label = 1;
                    obj = flutterArchivePlugin.addFilesInDirectoryToZip(zipOutputStream2, file, str, z, z2, i, i2, 0, this);
                    r1 = zipOutputStream;
                    if (obj == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                } else {
                    if (r1 != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    Closeable closeable = (Closeable) this.L$0;
                    ResultKt.throwOnFailure(obj);
                    r1 = closeable;
                }
                Integer numBoxInt = Boxing.boxInt(((Number) obj).intValue());
                CloseableKt.closeFinally(r1, null);
                return numBoxInt;
            } catch (Throwable th) {
                try {
                    throw th;
                } catch (Throwable th2) {
                    CloseableKt.closeFinally(r1, th);
                    throw th2;
                }
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Code duplicated, block: B:26:0x01ea  */
    /* JADX WARN: Code duplicated, block: B:28:0x0220 A[DONT_INVERT] */
    /* JADX WARN: Code duplicated, block: B:29:0x0222  */
    /* JADX WARN: Code duplicated, block: B:52:0x041e  */
    /* JADX WARN: Code duplicated, block: B:53:0x0421  */
    /* JADX WARN: Code duplicated, block: B:55:0x044f  */
    /* JADX WARN: Code duplicated, block: B:58:0x04e2  */
    /* JADX WARN: Code duplicated, block: B:65:? A[RETURN, SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:7:0x0018  */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:29:0x0222 -> B:60:0x04fe). Please report as a decompilation issue!!! */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:38:0x0304 -> B:60:0x04fe). Please report as a decompilation issue!!! */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:58:0x04e2 -> B:59:0x04f0). Please report as a decompilation issue!!! */
    /*  JADX ERROR: JadxOverflowException in pass: RegionMakerVisitor
        jadx.core.utils.exceptions.JadxOverflowException: Regions stack size limit reached
        	at jadx.core.utils.ErrorsCounter.addError(ErrorsCounter.java:59)
        	at jadx.core.utils.ErrorsCounter.error(ErrorsCounter.java:31)
        	at jadx.core.dex.attributes.nodes.NotificationAttrNode.addError(NotificationAttrNode.java:19)
        */
    public final java.lang.Object addFilesInDirectoryToZip(java.util.zip.ZipOutputStream r29, java.io.File r30, java.lang.String r31, boolean r32, boolean r33, int r34, int r35, int r36, kotlin.coroutines.Continuation<? super java.lang.Integer> r37) {
        /*
            Method dump skipped, instruction units count: 1299
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.kineapps.flutterarchive.FlutterArchivePlugin.addFilesInDirectoryToZip(java.util.zip.ZipOutputStream, java.io.File, java.lang.String, boolean, boolean, int, int, int, kotlin.coroutines.Continuation):java.lang.Object");
    }

    /* JADX INFO: renamed from: com.kineapps.flutterarchive.FlutterArchivePlugin$addFilesInDirectoryToZip$2, reason: invalid class name */
    /* JADX INFO: compiled from: FlutterArchivePlugin.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 2, 0}, xi = 48)
    @DebugMetadata(c = "com.kineapps.flutterarchive.FlutterArchivePlugin$addFilesInDirectoryToZip$2", f = "FlutterArchivePlugin.kt", i = {}, l = {}, m = "invokeSuspend", n = {}, s = {}, v = 1)
    static final class AnonymousClass2 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ ZipEntry $entry;
        final /* synthetic */ ZipOutputStream $zipOutputStream;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        AnonymousClass2(ZipOutputStream zipOutputStream, ZipEntry zipEntry, Continuation<? super AnonymousClass2> continuation) {
            super(2, continuation);
            this.$zipOutputStream = zipOutputStream;
            this.$entry = zipEntry;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new AnonymousClass2(this.$zipOutputStream, this.$entry, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((AnonymousClass2) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) throws IOException {
            IntrinsicsKt.getCOROUTINE_SUSPENDED();
            if (this.label != 0) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ResultKt.throwOnFailure(obj);
            this.$zipOutputStream.putNextEntry(this.$entry);
            return Unit.INSTANCE;
        }
    }

    /* JADX INFO: renamed from: com.kineapps.flutterarchive.FlutterArchivePlugin$addFilesInDirectoryToZip$3, reason: invalid class name */
    /* JADX INFO: compiled from: FlutterArchivePlugin.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0000\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 2, 0}, xi = 48)
    @DebugMetadata(c = "com.kineapps.flutterarchive.FlutterArchivePlugin$addFilesInDirectoryToZip$3", f = "FlutterArchivePlugin.kt", i = {0, 0, 0, 0}, l = {294}, m = "invokeSuspend", n = {"fileInputStream", "entry", "$i$a$-use-FlutterArchivePlugin$addFilesInDirectoryToZip$3$1", NotificationCompat.CATEGORY_PROGRESS}, s = {"L$2", "L$3", "I$0", "D$0"}, v = 1)
    static final class AnonymousClass3 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Object>, Object> {
        final /* synthetic */ File $f;
        final /* synthetic */ Ref.IntRef $handledFilesCount;
        final /* synthetic */ int $jobId;
        final /* synthetic */ String $relativePath;
        final /* synthetic */ boolean $reportProgress;
        final /* synthetic */ int $totalFilesCount;
        final /* synthetic */ ZipOutputStream $zipOutputStream;
        double D$0;
        int I$0;
        Object L$0;
        Object L$1;
        Object L$2;
        Object L$3;
        int label;
        final /* synthetic */ FlutterArchivePlugin this$0;

        /* JADX INFO: renamed from: com.kineapps.flutterarchive.FlutterArchivePlugin$addFilesInDirectoryToZip$3$WhenMappings */
        /* JADX INFO: compiled from: FlutterArchivePlugin.kt */
        @Metadata(k = 3, mv = {2, 2, 0}, xi = 48)
        public static final /* synthetic */ class WhenMappings {
            public static final /* synthetic */ int[] $EnumSwitchMapping$0;

            static {
                int[] iArr = new int[ZipFileOperation.values().length];
                try {
                    iArr[ZipFileOperation.INCLUDE_ITEM.ordinal()] = 1;
                } catch (NoSuchFieldError unused) {
                }
                try {
                    iArr[ZipFileOperation.CANCEL.ordinal()] = 2;
                } catch (NoSuchFieldError unused2) {
                }
                $EnumSwitchMapping$0 = iArr;
            }
        }

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        AnonymousClass3(File file, String str, boolean z, Ref.IntRef intRef, int i, FlutterArchivePlugin flutterArchivePlugin, int i2, ZipOutputStream zipOutputStream, Continuation<? super AnonymousClass3> continuation) {
            super(2, continuation);
            this.$f = file;
            this.$relativePath = str;
            this.$reportProgress = z;
            this.$handledFilesCount = intRef;
            this.$totalFilesCount = i;
            this.this$0 = flutterArchivePlugin;
            this.$jobId = i2;
            this.$zipOutputStream = zipOutputStream;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new AnonymousClass3(this.$f, this.$relativePath, this.$reportProgress, this.$handledFilesCount, this.$totalFilesCount, this.this$0, this.$jobId, this.$zipOutputStream, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public /* bridge */ /* synthetic */ Object invoke(CoroutineScope coroutineScope, Continuation<? super Object> continuation) {
            return invoke2(coroutineScope, (Continuation<Object>) continuation);
        }

        /* JADX INFO: renamed from: invoke, reason: avoid collision after fix types in other method */
        public final Object invoke2(CoroutineScope coroutineScope, Continuation<Object> continuation) {
            return ((AnonymousClass3) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        /* JADX WARN: Code duplicated, block: B:21:0x00b0  */
        /* JADX WARN: Code duplicated, block: B:23:0x00b3 A[Catch: all -> 0x0029, TryCatch #1 {all -> 0x0029, blocks: (B:6:0x0021, B:19:0x0094, B:23:0x00b3, B:25:0x00b8, B:26:0x00bf, B:27:0x00c0), top: B:39:0x0021 }] */
        /* JADX WARN: Code duplicated, block: B:25:0x00b8 A[Catch: all -> 0x0029, TryCatch #1 {all -> 0x0029, blocks: (B:6:0x0021, B:19:0x0094, B:23:0x00b3, B:25:0x00b8, B:26:0x00bf, B:27:0x00c0), top: B:39:0x0021 }] */
        /* JADX WARN: Code duplicated, block: B:27:0x00c0 A[Catch: all -> 0x0029, TRY_LEAVE, TryCatch #1 {all -> 0x0029, blocks: (B:6:0x0021, B:19:0x0094, B:23:0x00b3, B:25:0x00b8, B:26:0x00bf, B:27:0x00c0), top: B:39:0x0021 }] */
        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) throws IOException {
            FileInputStream fileInputStream;
            ZipOutputStream zipOutputStream;
            Throwable th;
            Closeable closeable;
            ZipEntry zipEntry;
            Throwable th2;
            Object objBoxLong;
            Object objReportProgress;
            FileInputStream fileInputStream2;
            int i;
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i2 = this.label;
            if (i2 == 0) {
                ResultKt.throwOnFailure(obj);
                fileInputStream = new FileInputStream(this.$f);
                String str = this.$relativePath;
                File file = this.$f;
                boolean z = this.$reportProgress;
                Ref.IntRef intRef = this.$handledFilesCount;
                int i3 = this.$totalFilesCount;
                FlutterArchivePlugin flutterArchivePlugin = this.this$0;
                int i4 = this.$jobId;
                zipOutputStream = this.$zipOutputStream;
                try {
                    FileInputStream fileInputStream3 = fileInputStream;
                    zipEntry = new ZipEntry(str);
                    zipEntry.setTime(file.lastModified());
                    zipEntry.setSize(file.length());
                    if (z) {
                        double d = 100.0d * (((double) intRef.element) / ((double) i3));
                        Log.d(FlutterArchivePlugin.LOG_TAG, "Waiting reportProgress...");
                        this.L$0 = fileInputStream;
                        this.L$1 = zipOutputStream;
                        this.L$2 = fileInputStream3;
                        this.L$3 = zipEntry;
                        this.I$0 = 0;
                        this.D$0 = d;
                        this.label = 1;
                        objReportProgress = flutterArchivePlugin.reportProgress(i4, zipEntry, d, this);
                        if (objReportProgress == coroutine_suspended) {
                            return coroutine_suspended;
                        }
                        fileInputStream2 = fileInputStream3;
                        closeable = fileInputStream;
                        ZipFileOperation zipFileOperation = (ZipFileOperation) objReportProgress;
                        Log.d(FlutterArchivePlugin.LOG_TAG, "...reportProgress: " + zipFileOperation);
                        i = WhenMappings.$EnumSwitchMapping$0[zipFileOperation.ordinal()];
                        if (i != 1) {
                            zipOutputStream.putNextEntry(zipEntry);
                            objBoxLong = Boxing.boxLong(ByteStreamsKt.copyTo$default(fileInputStream2, zipOutputStream, 0, 2, null));
                        } else {
                            if (i != 2) {
                                throw new CancellationException("Operation cancelled");
                            }
                            objBoxLong = Unit.INSTANCE;
                        }
                        fileInputStream = closeable;
                        th2 = null;
                    } else {
                        zipOutputStream.putNextEntry(zipEntry);
                        th2 = null;
                        objBoxLong = Boxing.boxLong(ByteStreamsKt.copyTo$default(fileInputStream3, zipOutputStream, 0, 2, null));
                    }
                } catch (Throwable th3) {
                    th = th3;
                    closeable = fileInputStream;
                    throw th;
                }
            } else {
                if (i2 != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ZipEntry zipEntry2 = (ZipEntry) this.L$3;
                fileInputStream2 = (FileInputStream) this.L$2;
                ZipOutputStream zipOutputStream2 = (ZipOutputStream) this.L$1;
                closeable = (Closeable) this.L$0;
                try {
                    ResultKt.throwOnFailure(obj);
                    zipOutputStream = zipOutputStream2;
                    zipEntry = zipEntry2;
                    objReportProgress = obj;
                    ZipFileOperation zipFileOperation2 = (ZipFileOperation) objReportProgress;
                    Log.d(FlutterArchivePlugin.LOG_TAG, "...reportProgress: " + zipFileOperation2);
                    i = WhenMappings.$EnumSwitchMapping$0[zipFileOperation2.ordinal()];
                    if (i != 1) {
                        zipOutputStream.putNextEntry(zipEntry);
                        objBoxLong = Boxing.boxLong(ByteStreamsKt.copyTo$default(fileInputStream2, zipOutputStream, 0, 2, null));
                    } else {
                        if (i != 2) {
                            throw new CancellationException("Operation cancelled");
                        }
                        objBoxLong = Unit.INSTANCE;
                    }
                    fileInputStream = closeable;
                    th2 = null;
                } catch (Throwable th4) {
                    th = th4;
                    try {
                        throw th;
                    } catch (Throwable th5) {
                        CloseableKt.closeFinally(closeable, th);
                        throw th5;
                    }
                }
            }
            CloseableKt.closeFinally(fileInputStream, th2);
            return objBoxLong;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void zipFiles(String sourceDirPath, List<String> relativeFilePaths, String zipFilePath, boolean includeBaseDirectory) throws IOException {
        Log.i("zip", "sourceDirPath: " + sourceDirPath + ", zipFilePath: " + zipFilePath + ", includeBaseDirectory: " + includeBaseDirectory);
        String strJoinToString$default = CollectionsKt.joinToString$default(relativeFilePaths, StringUtils.COMMA, null, null, 0, null, null, 62, null);
        StringBuilder sb = new StringBuilder("Files: ");
        sb.append(strJoinToString$default);
        Log.i("zip", sb.toString());
        File parentFile = includeBaseDirectory ? new File(sourceDirPath).getParentFile() : new File(sourceDirPath);
        ZipOutputStream zipOutputStream = new ZipOutputStream(new BufferedOutputStream(new FileOutputStream(zipFilePath)));
        try {
            ZipOutputStream zipOutputStream2 = zipOutputStream;
            for (String str : relativeFilePaths) {
                Intrinsics.checkNotNull(parentFile);
                File fileResolve = FilesKt.resolve(parentFile, str);
                String path = FilesKt.relativeTo(fileResolve, parentFile).getPath();
                Log.i("zip", "Adding file: " + path);
                FileInputStream fileInputStream = new FileInputStream(fileResolve);
                try {
                    ZipEntry zipEntry = new ZipEntry(path);
                    zipEntry.setTime(fileResolve.lastModified());
                    zipEntry.setSize(fileResolve.length());
                    zipOutputStream2.putNextEntry(zipEntry);
                    ByteStreamsKt.copyTo$default(fileInputStream, zipOutputStream2, 0, 2, null);
                    CloseableKt.closeFinally(fileInputStream, null);
                } catch (Throwable th) {
                    try {
                        throw th;
                    } catch (Throwable th2) {
                        CloseableKt.closeFinally(fileInputStream, th);
                        throw th2;
                    }
                }
            }
            Unit unit = Unit.INSTANCE;
            CloseableKt.closeFinally(zipOutputStream, null);
        } catch (Throwable th3) {
            try {
                throw th3;
            } catch (Throwable th4) {
                CloseableKt.closeFinally(zipOutputStream, th3);
                throw th4;
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Code duplicated, block: B:33:0x019b A[Catch: all -> 0x0439, TryCatch #1 {all -> 0x0439, blocks: (B:31:0x0195, B:33:0x019b, B:36:0x0210, B:67:0x03f7, B:68:0x042d), top: B:82:0x0195 }] */
    /* JADX WARN: Code duplicated, block: B:35:0x020e A[DONT_INVERT] */
    /* JADX WARN: Code duplicated, block: B:36:0x0210 A[Catch: all -> 0x0439, TRY_LEAVE, TryCatch #1 {all -> 0x0439, blocks: (B:31:0x0195, B:33:0x019b, B:36:0x0210, B:67:0x03f7, B:68:0x042d), top: B:82:0x0195 }] */
    /* JADX WARN: Code duplicated, block: B:39:0x0291  */
    /* JADX WARN: Code duplicated, block: B:40:0x0294  */
    /* JADX WARN: Code duplicated, block: B:43:0x02bc  */
    /* JADX WARN: Code duplicated, block: B:44:0x02ce A[Catch: all -> 0x010e, TRY_LEAVE, TryCatch #3 {all -> 0x010e, blocks: (B:41:0x02a0, B:44:0x02ce, B:20:0x00ee), top: B:86:0x00ee }] */
    /* JADX WARN: Code duplicated, block: B:46:0x02d2  */
    /* JADX WARN: Code duplicated, block: B:47:0x02d6  */
    /* JADX WARN: Code duplicated, block: B:66:0x03f5  */
    /* JADX WARN: Code duplicated, block: B:7:0x001c  */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r31v0, types: [com.kineapps.flutterarchive.FlutterArchivePlugin] */
    /* JADX WARN: Type inference failed for: r8v0 */
    /* JADX WARN: Type inference failed for: r8v1 */
    /* JADX WARN: Type inference failed for: r8v13, types: [java.io.Closeable] */
    /* JADX WARN: Type inference failed for: r8v16 */
    /* JADX WARN: Type inference failed for: r8v18 */
    /* JADX WARN: Type inference failed for: r8v19 */
    /* JADX WARN: Type inference failed for: r8v2, types: [java.io.Closeable] */
    /* JADX WARN: Type inference failed for: r8v28 */
    /* JADX WARN: Type inference failed for: r8v9 */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:43:0x02bc -> B:65:0x03f1). Please report as a decompilation issue!!! */
    /*  JADX ERROR: JadxOverflowException in pass: RegionMakerVisitor
        jadx.core.utils.exceptions.JadxOverflowException: Regions stack size limit reached
        	at jadx.core.utils.ErrorsCounter.addError(ErrorsCounter.java:59)
        	at jadx.core.utils.ErrorsCounter.error(ErrorsCounter.java:31)
        	at jadx.core.dex.attributes.nodes.NotificationAttrNode.addError(NotificationAttrNode.java:19)
        */
    public final java.lang.Object unzip(java.lang.String r32, java.nio.charset.Charset r33, java.lang.String r34, boolean r35, int r36, kotlin.coroutines.Continuation<? super kotlin.Unit> r37) throws java.io.IOException {
        /*
            Method dump skipped, instruction units count: 1090
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.kineapps.flutterarchive.FlutterArchivePlugin.unzip(java.lang.String, java.nio.charset.Charset, java.lang.String, boolean, int, kotlin.coroutines.Continuation):java.lang.Object");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final Object reportProgress(int i, ZipEntry zipEntry, double d, Continuation<? super ZipFileOperation> continuation) {
        Map mutableMap = MapsKt.toMutableMap(zipEntryToMap(zipEntry));
        mutableMap.put("jobId", Boxing.boxInt(i));
        mutableMap.put(NotificationCompat.CATEGORY_PROGRESS, Boxing.boxDouble(d));
        CompletableDeferred completableDeferredCompletableDeferred$default = CompletableDeferredKt.CompletableDeferred$default(null, 1, null);
        BuildersKt__Builders_commonKt.launch$default(CoroutineScopeKt.CoroutineScope(Dispatchers.getMain()), null, null, new C17942(mutableMap, completableDeferredCompletableDeferred$default, null), 3, null);
        return completableDeferredCompletableDeferred$default.await(continuation);
    }

    /* JADX INFO: renamed from: com.kineapps.flutterarchive.FlutterArchivePlugin$reportProgress$2, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: FlutterArchivePlugin.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 2, 0}, xi = 48)
    @DebugMetadata(c = "com.kineapps.flutterarchive.FlutterArchivePlugin$reportProgress$2", f = "FlutterArchivePlugin.kt", i = {}, l = {}, m = "invokeSuspend", n = {}, s = {}, v = 1)
    static final class C17942 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ CompletableDeferred<ZipFileOperation> $deferred;
        final /* synthetic */ Map<String, Object> $map;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        C17942(Map<String, Object> map, CompletableDeferred<ZipFileOperation> completableDeferred, Continuation<? super C17942> continuation) {
            super(2, continuation);
            this.$map = map;
            this.$deferred = completableDeferred;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return FlutterArchivePlugin.this.new C17942(this.$map, this.$deferred, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((C17942) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            IntrinsicsKt.getCOROUTINE_SUSPENDED();
            if (this.label == 0) {
                ResultKt.throwOnFailure(obj);
                MethodChannel methodChannel = FlutterArchivePlugin.this.methodChannel;
                if (methodChannel != null) {
                    Map<String, Object> map = this.$map;
                    final CompletableDeferred<ZipFileOperation> completableDeferred = this.$deferred;
                    methodChannel.invokeMethod(NotificationCompat.CATEGORY_PROGRESS, map, new MethodChannel.Result() { // from class: com.kineapps.flutterarchive.FlutterArchivePlugin.reportProgress.2.1
                        @Override // io.flutter.plugin.common.MethodChannel.Result
                        public void success(Object result) {
                            Log.i(FlutterArchivePlugin.LOG_TAG, "invokeMethod - success: " + result);
                            if (Intrinsics.areEqual(result, "cancel")) {
                                completableDeferred.complete(ZipFileOperation.CANCEL);
                            } else if (Intrinsics.areEqual(result, "skipItem")) {
                                completableDeferred.complete(ZipFileOperation.SKIP_ITEM);
                            } else {
                                completableDeferred.complete(ZipFileOperation.INCLUDE_ITEM);
                            }
                        }

                        @Override // io.flutter.plugin.common.MethodChannel.Result
                        public void error(String code, String msg, Object details) {
                            Intrinsics.checkNotNullParameter(code, "code");
                            Log.e(FlutterArchivePlugin.LOG_TAG, "invokeMethod - error: " + msg);
                            completableDeferred.complete(ZipFileOperation.INCLUDE_ITEM);
                        }

                        @Override // io.flutter.plugin.common.MethodChannel.Result
                        public void notImplemented() {
                            Log.e(FlutterArchivePlugin.LOG_TAG, "invokeMethod - notImplemented");
                            completableDeferred.complete(ZipFileOperation.INCLUDE_ITEM);
                        }
                    });
                }
                return Unit.INSTANCE;
            }
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
    }

    private final int getFilesCount(File dir, boolean recurseSubDirs) {
        File[] fileArrListFiles = dir.listFiles();
        if (fileArrListFiles == null) {
            return 0;
        }
        int filesCount = 0;
        for (File file : fileArrListFiles) {
            if (recurseSubDirs && file.isDirectory()) {
                Intrinsics.checkNotNull(file);
                filesCount += getFilesCount(file, recurseSubDirs);
            } else {
                filesCount++;
            }
        }
        return filesCount;
    }

    private final Map<String, Object> zipEntryToMap(ZipEntry ze) {
        Pair[] pairArr = new Pair[8];
        pairArr[0] = TuplesKt.to("name", ze.getName());
        pairArr[1] = TuplesKt.to("isDirectory", Boolean.valueOf(ze.isDirectory()));
        pairArr[2] = TuplesKt.to("comment", ze.getComment());
        pairArr[3] = TuplesKt.to("modificationDate", Long.valueOf(ze.getTime()));
        pairArr[4] = TuplesKt.to("uncompressedSize", Long.valueOf(ze.getSize()));
        pairArr[5] = TuplesKt.to("compressedSize", Long.valueOf(ze.getCompressedSize()));
        pairArr[6] = TuplesKt.to("crc", Long.valueOf(ze.getCrc()));
        pairArr[7] = TuplesKt.to("compressionMethod", ze.getMethod() == 8 ? "deflated" : "none");
        return MapsKt.mapOf(pairArr);
    }

    /* JADX INFO: compiled from: FlutterArchivePlugin.kt */
    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\u0018\u00002\u00020\u00012\u00020\u0002B\u0011\u0012\b\u0010\u0003\u001a\u0004\u0018\u00010\u0004¢\u0006\u0004\b\u0005\u0010\u0006¨\u0006\u0007"}, d2 = {"Lcom/kineapps/flutterarchive/FlutterArchivePlugin$ZipFileEx;", "Ljava/util/zip/ZipFile;", "Ljava/io/Closeable;", "name", "", "<init>", "(Ljava/lang/String;)V", "flutter_archive_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
    public static final class ZipFileEx extends ZipFile implements Closeable {
        public ZipFileEx(String str) {
            super(str);
        }
    }
}
