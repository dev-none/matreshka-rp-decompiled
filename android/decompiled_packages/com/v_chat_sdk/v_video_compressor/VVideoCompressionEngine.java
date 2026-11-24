package com.v_chat_sdk.v_video_compressor;

import android.app.ActivityManager;
import android.content.Context;
import android.graphics.Bitmap;
import android.media.MediaCodecInfo;
import android.media.MediaCodecList;
import android.media.MediaExtractor;
import android.media.MediaFormat;
import android.media.MediaMetadataRetriever;
import android.net.Uri;
import android.os.Build;
import android.os.Environment;
import android.os.Handler;
import android.os.Looper;
import android.os.StatFs;
import android.util.Log;
import android.util.Range;
import androidx.core.app.NotificationCompat;
import androidx.media3.common.C;
import androidx.media3.common.MediaItem;
import androidx.media3.common.MimeTypes;
import androidx.media3.effect.Crop;
import androidx.media3.effect.FrameDropEffect;
import androidx.media3.effect.Presentation;
import androidx.media3.effect.ScaleAndRotateTransformation;
import androidx.media3.transformer.Composition;
import androidx.media3.transformer.DefaultEncoderFactory;
import androidx.media3.transformer.EditedMediaItem;
import androidx.media3.transformer.Effects;
import androidx.media3.transformer.ExportException;
import androidx.media3.transformer.ExportResult;
import androidx.media3.transformer.InAppMp4Muxer;
import androidx.media3.transformer.Transformer;
import androidx.media3.transformer.VideoEncoderSettings;
import com.google.firebase.analytics.FirebaseAnalytics;
import com.my.target.common.menu.MenuActionType;
import io.sentry.ProfilingTraceData;
import io.sentry.protocol.Request;
import io.sentry.rrweb.RRWebVideoEvent;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.UUID;
import java.util.concurrent.CancellationException;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.atomic.AtomicBoolean;
import kotlin.Metadata;
import kotlin.NoWhenBranchMatchedException;
import kotlin.Pair;
import kotlin.Result;
import kotlin.ResultKt;
import kotlin.Triple;
import kotlin.TuplesKt;
import kotlin.Unit;
import kotlin.collections.ArraysKt;
import kotlin.collections.CollectionsKt;
import kotlin.collections.IntIterator;
import kotlin.collections.MapsKt;
import kotlin.comparisons.ComparisonsKt;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.io.CloseableKt;
import kotlin.io.FilesKt;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.StringCompanionObject;
import kotlin.ranges.IntRange;
import kotlin.ranges.RangesKt;
import kotlin.sequences.SequencesKt;
import kotlin.text.Regex;
import kotlin.text.StringsKt;
import kotlinx.coroutines.BuildersKt__Builders_commonKt;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.CoroutineScopeKt;
import kotlinx.coroutines.Dispatchers;
import kotlinx.coroutines.Job;
import kotlinx.coroutines.internal.LockFreeTaskQueueCore;
import org.apache.commons.io.FilenameUtils;

/* JADX INFO: compiled from: VVideoCompressionEngine.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000®\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u000e\n\u0002\u0010\t\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010\u0006\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0010\u0003\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0013\n\u0002\u0018\u0002\n\u0002\b\t\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\t\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010$\n\u0002\b\u000b\b\u0007\u0018\u0000 ¯\u00012\u00020\u0001:\u0006¯\u0001°\u0001±\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\b\u0010\u001b\u001a\u00020\u001aH\u0002J\b\u0010\u001c\u001a\u00020\u001aH\u0002J\b\u0010\u001d\u001a\u00020\u001eH\u0002J\b\u0010\u001f\u001a\u00020 H\u0002J\b\u0010!\u001a\u00020\"H\u0002J\b\u0010#\u001a\u00020\u0015H\u0002J\u0010\u0010$\u001a\u00020%2\u0006\u0010&\u001a\u00020\u0015H\u0002J\u000f\u0010'\u001a\u0004\u0018\u00010\u0016H\u0002¢\u0006\u0002\u0010(J\b\u0010)\u001a\u00020%H\u0002J\u0010\u0010*\u001a\u00020%2\u0006\u0010+\u001a\u00020,H\u0002J\u0018\u0010-\u001a\u00020%2\u0006\u0010+\u001a\u00020,2\u0006\u0010.\u001a\u00020\u0015H\u0002J4\u0010/\u001a\u00020%2\u0006\u00100\u001a\u0002012\u0006\u00102\u001a\u0002012\u0006\u00103\u001a\u0002012\b\b\u0002\u00104\u001a\u0002052\b\b\u0002\u0010.\u001a\u00020\u0015H\u0002J\"\u00106\u001a\u0002012\u0006\u00100\u001a\u0002012\u0006\u00102\u001a\u0002012\b\b\u0002\u0010.\u001a\u00020\u0015H\u0002J=\u00107\u001a\u0002082\u0006\u00109\u001a\u00020:2\u0006\u0010;\u001a\u0002082\u0006\u0010<\u001a\u00020\u00152\n\b\u0002\u0010=\u001a\u0004\u0018\u00010>2\n\b\u0002\u0010?\u001a\u0004\u0018\u000105H\u0002¢\u0006\u0002\u0010@J\b\u0010A\u001a\u000201H\u0002J\b\u0010B\u001a\u00020CH\u0002J\u0018\u0010D\u001a\u0002012\u0006\u0010E\u001a\u00020\u00162\u0006\u0010F\u001a\u00020\u0016H\u0002J \u0010G\u001a\u00020H2\u0006\u0010I\u001a\u0002012\u0006\u0010J\u001a\u0002012\u0006\u0010K\u001a\u00020HH\u0002J\u0010\u0010L\u001a\u00020H2\u0006\u0010M\u001a\u00020HH\u0002J\u0010\u0010N\u001a\u00020%2\u0006\u0010O\u001a\u00020PH\u0002J\u0018\u0010Q\u001a\u00020\u00152\u0006\u0010O\u001a\u00020R2\u0006\u0010S\u001a\u00020TH\u0002J\u0010\u0010U\u001a\u0004\u0018\u00010:2\u0006\u0010V\u001a\u00020\u0015J\u0010\u0010W\u001a\u0002012\u0006\u0010V\u001a\u00020\u0015H\u0002J:\u0010X\u001a\u00020C2\u0006\u0010Y\u001a\u00020Z2\u0006\u00109\u001a\u00020:2\u0006\u0010;\u001a\u0002082\b\u0010=\u001a\u0004\u0018\u00010>2\u0006\u0010<\u001a\u00020\u00152\u0006\u0010[\u001a\u00020\\H\u0002J\u0010\u0010]\u001a\u00020\\2\u0006\u0010V\u001a\u00020\u0015H\u0003J\u0016\u0010^\u001a\u00020_2\u0006\u00109\u001a\u00020:2\u0006\u0010`\u001a\u00020HJ \u0010^\u001a\u00020_2\u0006\u00109\u001a\u00020:2\u0006\u0010`\u001a\u00020H2\b\u0010a\u001a\u0004\u0018\u00010bJ\u0018\u0010c\u001a\u00020%2\u0006\u00109\u001a\u00020:2\u0006\u0010S\u001a\u00020TH\u0002J\u001e\u0010d\u001a\u00020C2\u0006\u00109\u001a\u00020:2\u0006\u0010;\u001a\u0002082\u0006\u0010e\u001a\u00020fJ0\u0010g\u001a\u00020C2\u0006\u00109\u001a\u00020:2\u0006\u0010;\u001a\u0002082\u0006\u0010S\u001a\u00020T2\u0006\u0010e\u001a\u00020f2\u0006\u0010h\u001a\u000201H\u0002J\u0012\u0010i\u001a\u0004\u0018\u00010H2\u0006\u0010M\u001a\u00020HH\u0002J)\u0010j\u001a\u00020\u00152\u0006\u00109\u001a\u00020:2\u0006\u0010;\u001a\u0002082\n\b\u0002\u0010?\u001a\u0004\u0018\u000105H\u0002¢\u0006\u0002\u0010kJ\b\u0010l\u001a\u00020%H\u0002J\b\u0010m\u001a\u00020%H\u0002J\b\u0010n\u001a\u00020%H\u0002J \u0010o\u001a\u00020C2\u0006\u00109\u001a\u00020:2\u0006\u0010p\u001a\u00020T2\u0006\u0010e\u001a\u00020fH\u0002J\u0010\u0010q\u001a\u00020\u00162\u0006\u0010r\u001a\u00020TH\u0002J\b\u0010s\u001a\u00020CH\u0002J\u0006\u0010t\u001a\u00020CJ\u0006\u0010u\u001a\u00020%J\b\u0010v\u001a\u00020\u0015H\u0002J\u0010\u0010w\u001a\u0002012\u0006\u0010x\u001a\u000201H\u0002JI\u0010y\u001a\u000e\u0012\u0004\u0012\u000201\u0012\u0004\u0012\u0002010z2\u0006\u0010{\u001a\u0002012\u0006\u0010|\u001a\u0002012\u0006\u0010`\u001a\u00020H2\n\b\u0002\u0010}\u001a\u0004\u0018\u0001012\n\b\u0002\u0010~\u001a\u0004\u0018\u000101H\u0002¢\u0006\u0002\u0010\u007fJ7\u0010\u0080\u0001\u001a\u000e\u0012\u0004\u0012\u000201\u0012\u0004\u0012\u0002010z2\u0006\u0010{\u001a\u0002012\u0006\u0010|\u001a\u0002012\u0007\u0010\u0081\u0001\u001a\u0002012\u0007\u0010\u0082\u0001\u001a\u000201H\u0002J9\u0010\u0083\u0001\u001a\u0015\u0012\u0004\u0012\u000201\u0012\u0004\u0012\u000201\u0012\u0004\u0012\u0002010\u0084\u00012\u0007\u0010\u0085\u0001\u001a\u00020:2\u0006\u0010`\u001a\u00020H2\n\b\u0002\u0010a\u001a\u0004\u0018\u00010bH\u0002JC\u0010\u0086\u0001\u001a\u00030\u0087\u00012\b\u0010\u0088\u0001\u001a\u00030\u0089\u00012\u0007\u0010\u0085\u0001\u001a\u00020:2\u0006\u0010;\u001a\u0002082\n\b\u0002\u0010=\u001a\u0004\u0018\u00010>2\n\b\u0002\u0010?\u001a\u0004\u0018\u000105H\u0002¢\u0006\u0003\u0010\u008a\u0001J\u0014\u0010\u008b\u0001\u001a\u00020T2\t\u0010\u008c\u0001\u001a\u0004\u0018\u00010\u0015H\u0002J\"\u0010\u008d\u0001\u001a\u00020T2\u0006\u0010S\u001a\u00020T2\u0007\u0010\u0085\u0001\u001a\u00020:2\u0006\u0010`\u001a\u00020HH\u0002J6\u0010\u008e\u0001\u001a\u00030\u008f\u00012\u0007\u0010\u0090\u0001\u001a\u00020:2\u0007\u0010\u0091\u0001\u001a\u00020T2\u0006\u0010`\u001a\u00020H2\u0007\u0010\u0092\u0001\u001a\u00020\u00162\u0007\u0010\u0093\u0001\u001a\u00020%H\u0002J\u001a\u0010\u0094\u0001\u001a\u00020\u00152\u0007\u0010\u0091\u0001\u001a\u00020T2\u0006\u0010`\u001a\u00020HH\u0002J\u0012\u0010\u0095\u0001\u001a\u00020\u00152\u0007\u0010\u0096\u0001\u001a\u00020\u0016H\u0002J#\u0010\u0097\u0001\u001a\u00020C2\u0006\u0010Y\u001a\u00020Z2\b\u0010a\u001a\u0004\u0018\u00010b2\u0006\u00109\u001a\u00020:H\u0002J\u001b\u0010\u0098\u0001\u001a\u0005\u0018\u00010\u0099\u00012\u0006\u00109\u001a\u00020:2\u0007\u0010;\u001a\u00030\u009a\u0001J0\u0010\u009b\u0001\u001a\u00020T2\t\u0010\u008c\u0001\u001a\u0004\u0018\u00010\u00152\u0007\u0010\u009c\u0001\u001a\u00020\u00152\b\u0010\u009d\u0001\u001a\u00030\u009e\u00012\u0007\u0010\u009f\u0001\u001a\u000201H\u0002J0\u0010 \u0001\u001a\u00030¡\u00012\b\u0010¢\u0001\u001a\u00030¡\u00012\t\u0010\u0081\u0001\u001a\u0004\u0018\u0001012\t\u0010\u0082\u0001\u001a\u0004\u0018\u000101H\u0002¢\u0006\u0003\u0010£\u0001J\t\u0010¤\u0001\u001a\u00020CH\u0004J\t\u0010¥\u0001\u001a\u00020CH\u0002J\u0014\u0010¦\u0001\u001a\u000f\u0012\u0004\u0012\u00020\u0015\u0012\u0004\u0012\u00020\u00010§\u0001J5\u0010¨\u0001\u001a\u000f\u0012\u0004\u0012\u00020\u0015\u0012\u0004\u0012\u00020\u00010§\u00012\t\b\u0002\u0010©\u0001\u001a\u00020%2\t\b\u0002\u0010ª\u0001\u001a\u00020%2\t\b\u0002\u0010«\u0001\u001a\u00020%J\t\u0010¬\u0001\u001a\u000201H\u0002J\t\u0010\u00ad\u0001\u001a\u000201H\u0002J\t\u0010®\u0001\u001a\u00020%H\u0002R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\u0006\u001a\u0004\u0018\u00010\u0007X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\b\u001a\u0004\u0018\u00010\tX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u000bX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\u000bX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\r\u001a\u00020\u000eX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u000f\u001a\u00020\u0010X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0011\u001a\u00020\u0012X\u0082\u0004¢\u0006\u0002\n\u0000R\u001a\u0010\u0013\u001a\u000e\u0012\u0004\u0012\u00020\u0015\u0012\u0004\u0012\u00020\u00160\u0014X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0017\u001a\u00020\u0016X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0018\u001a\u00020\u0016X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u0019\u001a\u0004\u0018\u00010\u001aX\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006²\u0001"}, d2 = {"Lcom/v_chat_sdk/v_video_compressor/VVideoCompressionEngine;", "", "context", "Landroid/content/Context;", "<init>", "(Landroid/content/Context;)V", "transformer", "Landroidx/media3/transformer/Transformer;", "progressJob", "Lkotlinx/coroutines/Job;", "isCompressionActive", "Ljava/util/concurrent/atomic/AtomicBoolean;", "isCancelled", "mainHandler", "Landroid/os/Handler;", "activityManager", "Landroid/app/ActivityManager;", "memoryInfo", "Landroid/app/ActivityManager$MemoryInfo;", "fileSizeCache", "Ljava/util/concurrent/ConcurrentHashMap;", "", "", "lastFileSizeCheck", "lastFileSize", "deviceCapabilityCache", "Lcom/v_chat_sdk/v_video_compressor/DeviceCapabilityResult;", "canHandle4KCompression", "performCapabilityAnalysis", "checkApiLevel", "Lcom/v_chat_sdk/v_video_compressor/CapabilityCheckResult;", "analyzeMemoryCapabilities", "Lcom/v_chat_sdk/v_video_compressor/MemoryAnalysisResult;", "analyzeCpuCapabilities", "Lcom/v_chat_sdk/v_video_compressor/CpuAnalysisResult;", "getCpuArchitecture", "isArchitectureSupported", "", ProfilingTraceData.JsonKeys.ARCHITECTURE, "getCpuFrequencyMHz", "()Ljava/lang/Long;", "hasCodecSupport", "isCodecSupporting4K", "codecInfo", "Landroid/media/MediaCodecInfo;", "checkCodecFormat", "mimeType", "validateCompleteCodecConfiguration", "width", "", "height", "bitrate", RRWebVideoEvent.JsonKeys.FRAME_RATE, "", "getMaxSupportedBitrate", "validateAndAdjustConfiguration", "Lcom/v_chat_sdk/v_video_compressor/VVideoCompressionConfig;", "videoInfo", "Lcom/v_chat_sdk/v_video_compressor/VVideoInfo;", "config", "videoMimeType", "cropPlan", "Lcom/v_chat_sdk/v_video_compressor/VVideoCropPlan;", "sourceFrameRate", "(Lcom/v_chat_sdk/v_video_compressor/VVideoInfo;Lcom/v_chat_sdk/v_video_compressor/VVideoCompressionConfig;Ljava/lang/String;Lcom/v_chat_sdk/v_video_compressor/VVideoCropPlan;Ljava/lang/Double;)Lcom/v_chat_sdk/v_video_compressor/VVideoCompressionConfig;", "measurePerformanceScore", "performLightweightBenchmark", "", "calculatePerformanceScore", "startTime", "endTime", "getOptimalQuality", "Lcom/v_chat_sdk/v_video_compressor/VVideoCompressQuality;", "videoWidth", "videoHeight", "requestedQuality", "downgradeQuality", "currentQuality", "isCodecCapacityError", "error", "", "formatExportError", "Landroidx/media3/transformer/ExportException;", "outputDirectory", "Ljava/io/File;", "getVideoInfo", "videoPath", "getVideoRotation", "configureVideoEncoder", "transformerBuilder", "Landroidx/media3/transformer/Transformer$Builder;", "source", "Lcom/v_chat_sdk/v_video_compressor/VVideoCompressionEngine$SourceVideoTrack;", "readSourceVideoTrack", "estimateCompressionSize", "Lcom/v_chat_sdk/v_video_compressor/VVideoCompressionEstimate;", "quality", "advanced", "Lcom/v_chat_sdk/v_video_compressor/VVideoAdvancedConfig;", "hasEnoughResources", "compressVideo", "callback", "Lcom/v_chat_sdk/v_video_compressor/VVideoCompressionEngine$CompressionCallback;", "compressVideoWithRetry", "retryCount", "getNextLowerQuality", "selectOptimalVideoCodec", "(Lcom/v_chat_sdk/v_video_compressor/VVideoInfo;Lcom/v_chat_sdk/v_video_compressor/VVideoCompressionConfig;Ljava/lang/Double;)Ljava/lang/String;", "supportsH264For4K", "supportsH265For4K", "hasH265Support", "startProgressTracking", "outputFile", "getCachedFileSize", "file", "stopProgressTracking", "cancelCompression", "isCompressing", "buildDeviceCapabilityReport", "alignTo16", "dimension", "calculateAspectRatioPreservingDimensions", "Lkotlin/Pair;", "originalWidth", "originalHeight", "customWidth", "customHeight", "(IILcom/v_chat_sdk/v_video_compressor/VVideoCompressQuality;Ljava/lang/Integer;Ljava/lang/Integer;)Lkotlin/Pair;", "calculateDimensionsToFitBounds", "maxWidth", "maxHeight", "getQualitySettings", "Lkotlin/Triple;", "video", "createEditedMediaItemWithQuality", "Landroidx/media3/transformer/EditedMediaItem;", "mediaItem", "Landroidx/media3/common/MediaItem;", "(Landroidx/media3/common/MediaItem;Lcom/v_chat_sdk/v_video_compressor/VVideoInfo;Lcom/v_chat_sdk/v_video_compressor/VVideoCompressionConfig;Lcom/v_chat_sdk/v_video_compressor/VVideoCropPlan;Ljava/lang/Double;)Landroidx/media3/transformer/EditedMediaItem;", "prepareOutputDirectory", "outputPath", "createOutputFile", "createCompressionResult", "Lcom/v_chat_sdk/v_video_compressor/VVideoCompressionResult;", "originalVideo", "compressedFile", "timeTaken", "usedOriginalFile", "getCompressedResolution", "formatFileSize", "bytes", "applyAdvancedCompressionSettings", "getVideoThumbnail", "Lcom/v_chat_sdk/v_video_compressor/VVideoThumbnailResult;", "Lcom/v_chat_sdk/v_video_compressor/VVideoThumbnailConfig;", "createThumbnailOutputFile", "videoName", "format", "Lcom/v_chat_sdk/v_video_compressor/VThumbnailFormat;", "timeMs", "scaleBitmapWithAspectRatio", "Landroid/graphics/Bitmap;", "bitmap", "(Landroid/graphics/Bitmap;Ljava/lang/Integer;Ljava/lang/Integer;)Landroid/graphics/Bitmap;", "finalize", "releaseTransformer", "cleanup", "", "cleanupFiles", "deleteThumbnails", "deleteCompressedVideos", "clearCache", "cleanupThumbnailDirectory", "cleanupCompressedVideosDirectory", "clearTemporaryCache", "Companion", "CompressionCallback", "SourceVideoTrack", "v_video_compressor_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class VVideoCompressionEngine {
    private static final int AUDIO_BITRATE = 128000;
    private static final int AUDIO_BITRATE_LOW = 64000;
    private static final int AUDIO_BITRATE_ULTRA_LOW = 32000;
    private static final int AUDIO_BITRATE_VERY_LOW = 48000;
    private static final long FILE_SIZE_CACHE_DURATION_MS = 500;
    private static final int HEIGHT_1080P = 1080;
    private static final int HEIGHT_240P = 240;
    private static final int HEIGHT_360P = 360;
    private static final int HEIGHT_480P = 480;
    private static final int HEIGHT_4K = 2160;
    private static final int HEIGHT_720P = 720;
    private static final long INITIAL_PROGRESS_DELAY = 1000;
    private static final String LOG_TAG = "VVideoCompressor";
    private static final int MAX_COMPRESSION_RETRIES = 3;
    private static final long MEMORY_CHECK_INTERVAL_MS = 5000;
    private static final int MIN_API_LEVEL_FOR_4K = 21;
    private static final int MIN_AVAILABLE_MEMORY_MB = 1000;
    private static final int MIN_CPU_CORES_FOR_4K = 4;
    private static final int MIN_CPU_FREQUENCY_MHZ = 1500;
    private static final int MIN_MEMORY_FOR_4K_MB = 3000;
    private static final int MIN_MEMORY_THRESHOLD_MB = 100;
    private static final int MIN_PERFORMANCE_SCORE = 50;
    private static final int MIN_STORAGE_THRESHOLD_MB = 200;
    private static final int PERFORMANCE_TEST_ITERATIONS = 1000;
    private static final long PROGRESS_UPDATE_INTERVAL = 100;
    private static final int WIDTH_1080P = 1920;
    private static final int WIDTH_240P = 426;
    private static final int WIDTH_360P = 640;
    private static final int WIDTH_480P = 854;
    private static final int WIDTH_4K = 3840;
    private static final int WIDTH_720P = 1280;
    private final ActivityManager activityManager;
    private final Context context;
    private DeviceCapabilityResult deviceCapabilityCache;
    private final ConcurrentHashMap<String, Long> fileSizeCache;
    private AtomicBoolean isCancelled;
    private AtomicBoolean isCompressionActive;
    private long lastFileSize;
    private long lastFileSizeCheck;
    private final Handler mainHandler;
    private final ActivityManager.MemoryInfo memoryInfo;
    private Job progressJob;
    private Transformer transformer;

    /* JADX INFO: compiled from: VVideoCompressionEngine.kt */
    @Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u0007\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\bf\u0018\u00002\u00020\u0001J\u0010\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u0005H&J\u0010\u0010\u0006\u001a\u00020\u00032\u0006\u0010\u0007\u001a\u00020\bH&J\u0010\u0010\t\u001a\u00020\u00032\u0006\u0010\n\u001a\u00020\u000bH&¨\u0006\fÀ\u0006\u0003"}, d2 = {"Lcom/v_chat_sdk/v_video_compressor/VVideoCompressionEngine$CompressionCallback;", "", "onProgress", "", NotificationCompat.CATEGORY_PROGRESS, "", "onComplete", "compressionResult", "Lcom/v_chat_sdk/v_video_compressor/VVideoCompressionResult;", "onError", "error", "", "v_video_compressor_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
    public interface CompressionCallback {
        void onComplete(VVideoCompressionResult compressionResult);

        void onError(String error);

        void onProgress(float progress);
    }

    /* JADX INFO: compiled from: VVideoCompressionEngine.kt */
    @Metadata(k = 3, mv = {2, 2, 0}, xi = 48)
    public static final /* synthetic */ class WhenMappings {
        public static final /* synthetic */ int[] $EnumSwitchMapping$0;
        public static final /* synthetic */ int[] $EnumSwitchMapping$1;
        public static final /* synthetic */ int[] $EnumSwitchMapping$2;
        public static final /* synthetic */ int[] $EnumSwitchMapping$3;

        static {
            int[] iArr = new int[VVideoCompressQuality.values().length];
            try {
                iArr[VVideoCompressQuality.HIGH.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                iArr[VVideoCompressQuality.MEDIUM.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                iArr[VVideoCompressQuality.LOW.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                iArr[VVideoCompressQuality.VERY_LOW.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            try {
                iArr[VVideoCompressQuality.ULTRA_LOW.ordinal()] = 5;
            } catch (NoSuchFieldError unused5) {
            }
            $EnumSwitchMapping$0 = iArr;
            int[] iArr2 = new int[VAudioCodec.values().length];
            try {
                iArr2[VAudioCodec.MP3.ordinal()] = 1;
            } catch (NoSuchFieldError unused6) {
            }
            $EnumSwitchMapping$1 = iArr2;
            int[] iArr3 = new int[VVideoCodec.values().length];
            try {
                iArr3[VVideoCodec.H264.ordinal()] = 1;
            } catch (NoSuchFieldError unused7) {
            }
            try {
                iArr3[VVideoCodec.H265.ordinal()] = 2;
            } catch (NoSuchFieldError unused8) {
            }
            $EnumSwitchMapping$2 = iArr3;
            int[] iArr4 = new int[VThumbnailFormat.values().length];
            try {
                iArr4[VThumbnailFormat.JPEG.ordinal()] = 1;
            } catch (NoSuchFieldError unused9) {
            }
            try {
                iArr4[VThumbnailFormat.PNG.ordinal()] = 2;
            } catch (NoSuchFieldError unused10) {
            }
            $EnumSwitchMapping$3 = iArr4;
        }
    }

    protected final void finalize() {
    }

    public VVideoCompressionEngine(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        this.context = context;
        this.isCompressionActive = new AtomicBoolean(false);
        this.isCancelled = new AtomicBoolean(false);
        this.mainHandler = new Handler(Looper.getMainLooper());
        Object systemService = context.getSystemService("activity");
        Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.app.ActivityManager");
        this.activityManager = (ActivityManager) systemService;
        this.memoryInfo = new ActivityManager.MemoryInfo();
        this.fileSizeCache = new ConcurrentHashMap<>();
    }

    private final DeviceCapabilityResult canHandle4KCompression() {
        DeviceCapabilityResult deviceCapabilityResult = this.deviceCapabilityCache;
        if (deviceCapabilityResult != null) {
            return deviceCapabilityResult;
        }
        DeviceCapabilityResult deviceCapabilityResultPerformCapabilityAnalysis = performCapabilityAnalysis();
        this.deviceCapabilityCache = deviceCapabilityResultPerformCapabilityAnalysis;
        return deviceCapabilityResultPerformCapabilityAnalysis;
    }

    private final DeviceCapabilityResult performCapabilityAnalysis() {
        CapabilityCheckResult capabilityCheckResultCheckApiLevel = checkApiLevel();
        if (!capabilityCheckResultCheckApiLevel.isSupported()) {
            return new DeviceCapabilityResult(false, capabilityCheckResultCheckApiLevel.getMessage(), null, 4, null);
        }
        MemoryAnalysisResult memoryAnalysisResultAnalyzeMemoryCapabilities = analyzeMemoryCapabilities();
        if (!memoryAnalysisResultAnalyzeMemoryCapabilities.isMemorySufficient()) {
            return new DeviceCapabilityResult(false, memoryAnalysisResultAnalyzeMemoryCapabilities.getReason(), null, 4, null);
        }
        CpuAnalysisResult cpuAnalysisResultAnalyzeCpuCapabilities = analyzeCpuCapabilities();
        if (!cpuAnalysisResultAnalyzeCpuCapabilities.isCpuSufficient()) {
            return new DeviceCapabilityResult(false, cpuAnalysisResultAnalyzeCpuCapabilities.getReason(), null, 4, null);
        }
        boolean zHasCodecSupport = hasCodecSupport();
        if (!zHasCodecSupport) {
            return new DeviceCapabilityResult(false, "Device codecs do not support 4K compression", null, 4, null);
        }
        int iMeasurePerformanceScore = measurePerformanceScore();
        if (iMeasurePerformanceScore < 50) {
            return new DeviceCapabilityResult(false, "Performance insufficient for 4K: score " + iMeasurePerformanceScore + ", minimum 50 required", null, 4, null);
        }
        return new DeviceCapabilityResult(true, "Device capable of 4K compression", new CapabilityDetails(memoryAnalysisResultAnalyzeMemoryCapabilities.getTotalMemoryMB(), memoryAnalysisResultAnalyzeMemoryCapabilities.getAvailableMemoryMB(), cpuAnalysisResultAnalyzeCpuCapabilities.getCores(), cpuAnalysisResultAnalyzeCpuCapabilities.getArchitecture(), cpuAnalysisResultAnalyzeCpuCapabilities.getFrequencyMHz(), Integer.valueOf(iMeasurePerformanceScore), zHasCodecSupport));
    }

    private final CapabilityCheckResult checkApiLevel() {
        return new CapabilityCheckResult(true, "API level " + Build.VERSION.SDK_INT + " supports 4K");
    }

    private final MemoryAnalysisResult analyzeMemoryCapabilities() {
        this.activityManager.getMemoryInfo(this.memoryInfo);
        long j = 1048576;
        long j2 = this.memoryInfo.totalMem / j;
        long j3 = this.memoryInfo.availMem / j;
        if (j2 < C.DEFAULT_MAX_SEEK_TO_PREVIOUS_POSITION_MS) {
            return new MemoryAnalysisResult(false, "Insufficient total memory: " + j2 + "MB total, 3000MB required", j2, j3);
        }
        if (j3 < 1000) {
            return new MemoryAnalysisResult(false, "Insufficient available memory: " + j3 + "MB available, 1000MB required", j2, j3);
        }
        return new MemoryAnalysisResult(true, "Memory sufficient for 4K compression", j2, j3);
    }

    private final CpuAnalysisResult analyzeCpuCapabilities() {
        int iAvailableProcessors = Runtime.getRuntime().availableProcessors();
        String cpuArchitecture = getCpuArchitecture();
        Long cpuFrequencyMHz = getCpuFrequencyMHz();
        if (iAvailableProcessors < 4) {
            return new CpuAnalysisResult(false, "Insufficient CPU cores: " + iAvailableProcessors + " cores, 4 required", iAvailableProcessors, cpuArchitecture, cpuFrequencyMHz);
        }
        if (!isArchitectureSupported(cpuArchitecture)) {
            return new CpuAnalysisResult(false, "CPU architecture not optimal for 4K: " + cpuArchitecture, iAvailableProcessors, cpuArchitecture, cpuFrequencyMHz);
        }
        if (cpuFrequencyMHz != null && cpuFrequencyMHz.longValue() < 1500) {
            return new CpuAnalysisResult(false, "CPU frequency too low: " + cpuFrequencyMHz + "MHz, 1500MHz required", iAvailableProcessors, cpuArchitecture, cpuFrequencyMHz);
        }
        return new CpuAnalysisResult(true, "CPU sufficient for 4K compression", iAvailableProcessors, cpuArchitecture, cpuFrequencyMHz);
    }

    private final String getCpuArchitecture() {
        String[] SUPPORTED_ABIS = Build.SUPPORTED_ABIS;
        Intrinsics.checkNotNullExpressionValue(SUPPORTED_ABIS, "SUPPORTED_ABIS");
        String str = (String) ArraysKt.firstOrNull(SUPPORTED_ABIS);
        return str == null ? "unknown" : str;
    }

    private final boolean isArchitectureSupported(String architecture) {
        String str = architecture;
        return StringsKt.contains$default((CharSequence) str, (CharSequence) "arm64", false, 2, (Object) null) || StringsKt.contains$default((CharSequence) str, (CharSequence) "x86_64", false, 2, (Object) null);
    }

    private final Long getCpuFrequencyMHz() {
        Long longOrNull;
        Iterator it = CollectionsKt.listOf((Object[]) new String[]{"/sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_max_freq", "/sys/devices/system/cpu/cpu0/cpufreq/scaling_max_freq"}).iterator();
        while (it.hasNext()) {
            try {
                File file = new File((String) it.next());
                if (file.exists() && file.canRead() && (longOrNull = StringsKt.toLongOrNull(StringsKt.trim((CharSequence) FilesKt.readText$default(file, null, 1, null)).toString())) != null) {
                    return Long.valueOf(longOrNull.longValue() / ((long) 1000));
                }
            } catch (Exception unused) {
            }
        }
        return null;
    }

    private final boolean hasCodecSupport() {
        try {
            MediaCodecInfo[] codecInfos = new MediaCodecList(0).getCodecInfos();
            Intrinsics.checkNotNullExpressionValue(codecInfos, "getCodecInfos(...)");
            for (MediaCodecInfo mediaCodecInfo : codecInfos) {
                Intrinsics.checkNotNull(mediaCodecInfo);
                if (isCodecSupporting4K(mediaCodecInfo)) {
                    return true;
                }
            }
        } catch (Exception unused) {
        }
        return false;
    }

    private final boolean isCodecSupporting4K(MediaCodecInfo codecInfo) {
        if (!codecInfo.isEncoder()) {
            return false;
        }
        String[] supportedTypes = codecInfo.getSupportedTypes();
        Intrinsics.checkNotNullExpressionValue(supportedTypes, "getSupportedTypes(...)");
        for (String str : supportedTypes) {
            Intrinsics.checkNotNull(str);
            if (StringsKt.startsWith$default(str, "video/", false, 2, (Object) null) && checkCodecFormat(codecInfo, str)) {
                return true;
            }
        }
        return false;
    }

    private final boolean checkCodecFormat(MediaCodecInfo codecInfo, String mimeType) {
        try {
            MediaCodecInfo.VideoCapabilities videoCapabilities = codecInfo.getCapabilitiesForType(mimeType).getVideoCapabilities();
            return videoCapabilities != null && videoCapabilities.isSizeSupported(WIDTH_4K, HEIGHT_4K);
        } catch (Exception unused) {
        }
    }

    static /* synthetic */ boolean validateCompleteCodecConfiguration$default(VVideoCompressionEngine vVideoCompressionEngine, int i, int i2, int i3, double d, String str, int i4, Object obj) {
        if ((i4 & 8) != 0) {
            d = 30.0d;
        }
        double d2 = d;
        if ((i4 & 16) != 0) {
            str = "video/avc";
        }
        return vVideoCompressionEngine.validateCompleteCodecConfiguration(i, i2, i3, d2, str);
    }

    private final boolean validateCompleteCodecConfiguration(int width, int height, int bitrate, double frameRate, String mimeType) {
        MediaCodecInfo mediaCodecInfo;
        MediaCodecInfo.VideoCapabilities videoCapabilities;
        try {
            MediaCodecInfo[] codecInfos = new MediaCodecList(0).getCodecInfos();
            Intrinsics.checkNotNullExpressionValue(codecInfos, "getCodecInfos(...)");
            MediaCodecInfo[] mediaCodecInfoArr = codecInfos;
            int length = mediaCodecInfoArr.length;
            int i = 0;
            while (true) {
                if (i >= length) {
                    mediaCodecInfo = null;
                    break;
                }
                mediaCodecInfo = mediaCodecInfoArr[i];
                MediaCodecInfo mediaCodecInfo2 = mediaCodecInfo;
                if (mediaCodecInfo2.isEncoder()) {
                    String[] supportedTypes = mediaCodecInfo2.getSupportedTypes();
                    Intrinsics.checkNotNullExpressionValue(supportedTypes, "getSupportedTypes(...)");
                    if (ArraysKt.contains(supportedTypes, mimeType)) {
                        break;
                    }
                }
                i++;
            }
            MediaCodecInfo mediaCodecInfo3 = mediaCodecInfo;
            if (mediaCodecInfo3 == null || (videoCapabilities = mediaCodecInfo3.getCapabilitiesForType(mimeType).getVideoCapabilities()) == null || !videoCapabilities.isSizeSupported(width, height)) {
                return false;
            }
            Range<Integer> bitrateRange = videoCapabilities.getBitrateRange();
            if (!bitrateRange.contains(Integer.valueOf(bitrate))) {
                System.out.println((Object) ("4K FIX: Bitrate " + bitrate + " not supported (range: " + bitrateRange.getLower() + "-" + bitrateRange.getUpper() + ")"));
                return false;
            }
            try {
                if (!videoCapabilities.areSizeAndRateSupported(width, height, frameRate)) {
                    System.out.println((Object) ("4K FIX: Framerate " + frameRate + " not supported at " + width + "x" + height));
                    return false;
                }
            } catch (Exception e) {
                System.out.println((Object) ("4K FIX: Framerate check failed (" + e.getMessage() + "), assuming supported"));
            }
            return true;
        } catch (Exception e2) {
            System.out.println((Object) ("4K FIX: Configuration validation error: " + e2.getMessage()));
            return false;
        }
    }

    static /* synthetic */ int getMaxSupportedBitrate$default(VVideoCompressionEngine vVideoCompressionEngine, int i, int i2, String str, int i3, Object obj) {
        if ((i3 & 4) != 0) {
            str = "video/avc";
        }
        return vVideoCompressionEngine.getMaxSupportedBitrate(i, i2, str);
    }

    private final int getMaxSupportedBitrate(int width, int height, String mimeType) {
        MediaCodecInfo mediaCodecInfo;
        MediaCodecInfo.VideoCapabilities videoCapabilities;
        try {
            int i = 0;
            MediaCodecInfo[] codecInfos = new MediaCodecList(0).getCodecInfos();
            Intrinsics.checkNotNullExpressionValue(codecInfos, "getCodecInfos(...)");
            MediaCodecInfo[] mediaCodecInfoArr = codecInfos;
            int length = mediaCodecInfoArr.length;
            while (true) {
                if (i >= length) {
                    mediaCodecInfo = null;
                    break;
                }
                mediaCodecInfo = mediaCodecInfoArr[i];
                MediaCodecInfo mediaCodecInfo2 = mediaCodecInfo;
                if (mediaCodecInfo2.isEncoder()) {
                    String[] supportedTypes = mediaCodecInfo2.getSupportedTypes();
                    Intrinsics.checkNotNullExpressionValue(supportedTypes, "getSupportedTypes(...)");
                    if (ArraysKt.contains(supportedTypes, mimeType)) {
                        break;
                    }
                }
                i++;
            }
            MediaCodecInfo mediaCodecInfo3 = mediaCodecInfo;
            if (mediaCodecInfo3 == null || (videoCapabilities = mediaCodecInfo3.getCapabilitiesForType(mimeType).getVideoCapabilities()) == null || !videoCapabilities.isSizeSupported(width, height)) {
                return VVideoEncodingSettings.BITRATE_1080P_HIGH;
            }
            Integer num = (Integer) videoCapabilities.getBitrateRange().getUpper();
            System.out.println((Object) ("4K FIX: Max bitrate for " + width + "x" + height + " on " + mimeType + ": " + num));
            Intrinsics.checkNotNull(num);
            return num.intValue();
        } catch (Exception e) {
            System.out.println((Object) ("4K FIX: Could not determine max bitrate: " + e.getMessage()));
            return VVideoEncodingSettings.BITRATE_1080P_HIGH;
        }
    }

    static /* synthetic */ VVideoCompressionConfig validateAndAdjustConfiguration$default(VVideoCompressionEngine vVideoCompressionEngine, VVideoInfo vVideoInfo, VVideoCompressionConfig vVideoCompressionConfig, String str, VVideoCropPlan vVideoCropPlan, Double d, int i, Object obj) {
        if ((i & 8) != 0) {
            vVideoCropPlan = null;
        }
        if ((i & 16) != 0) {
            d = null;
        }
        return vVideoCompressionEngine.validateAndAdjustConfiguration(vVideoInfo, vVideoCompressionConfig, str, vVideoCropPlan, d);
    }

    private final VVideoCompressionConfig validateAndAdjustConfiguration(VVideoInfo videoInfo, VVideoCompressionConfig config, String videoMimeType, VVideoCropPlan cropPlan, Double sourceFrameRate) {
        Pair<Integer, Integer> pairCalculateAspectRatioPreservingDimensions;
        VVideoSize outputSize;
        if (cropPlan != null && (outputSize = cropPlan.getOutputSize()) != null) {
            pairCalculateAspectRatioPreservingDimensions = new Pair<>(Integer.valueOf(outputSize.getWidth()), Integer.valueOf(outputSize.getHeight()));
        } else {
            int width = videoInfo.getWidth();
            int height = videoInfo.getHeight();
            VVideoCompressQuality quality = config.getQuality();
            VVideoAdvancedConfig advanced = config.getAdvanced();
            Integer customWidth = advanced != null ? advanced.getCustomWidth() : null;
            VVideoAdvancedConfig advanced2 = config.getAdvanced();
            pairCalculateAspectRatioPreservingDimensions = calculateAspectRatioPreservingDimensions(width, height, quality, customWidth, advanced2 != null ? advanced2.getCustomHeight() : null);
        }
        int iIntValue = pairCalculateAspectRatioPreservingDimensions.component1().intValue();
        int iIntValue2 = pairCalculateAspectRatioPreservingDimensions.component2().intValue();
        int iTargetBitrate = VVideoEncodingSettings.INSTANCE.targetBitrate(iIntValue, iIntValue2, config.getQuality(), config.getAdvanced());
        VVideoEncodingSettings vVideoEncodingSettings = VVideoEncodingSettings.INSTANCE;
        VVideoAdvancedConfig advanced3 = config.getAdvanced();
        double dEffectiveFrameRate = vVideoEncodingSettings.effectiveFrameRate(advanced3 != null ? advanced3.getFrameRate() : null, sourceFrameRate);
        System.out.println((Object) ("4K FIX: Pre-compression validation - " + iIntValue + "x" + iIntValue2 + " @ " + (iTargetBitrate / 1000000) + "Mbps @ " + dEffectiveFrameRate + "fps"));
        if (validateCompleteCodecConfiguration(iIntValue, iIntValue2, iTargetBitrate, dEffectiveFrameRate, videoMimeType)) {
            System.out.println((Object) "4K FIX: Configuration is valid, proceeding with compression");
            return config;
        }
        System.out.println((Object) "4K FIX: Configuration validation failed, attempting to adjust bitrate...");
        int maxSupportedBitrate = getMaxSupportedBitrate(iIntValue, iIntValue2, videoMimeType);
        if (maxSupportedBitrate >= iTargetBitrate) {
            return config;
        }
        System.out.println((Object) ("4K FIX: Adjusting bitrate from " + iTargetBitrate + " to " + maxSupportedBitrate));
        VVideoAdvancedConfig advanced4 = config.getAdvanced();
        return VVideoCompressionConfig.copy$default(config, null, null, false, false, false, VVideoAdvancedConfig.copy$default(advanced4 == null ? new VVideoAdvancedConfig(null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, LockFreeTaskQueueCore.MAX_CAPACITY_MASK, null) : advanced4, Integer.valueOf(maxSupportedBitrate), null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, 1073741822, null), 31, null);
    }

    private final int measurePerformanceScore() {
        try {
            long jNanoTime = System.nanoTime();
            performLightweightBenchmark();
            return calculatePerformanceScore(jNanoTime, System.nanoTime());
        } catch (Exception unused) {
            return 50;
        }
    }

    private final void performLightweightBenchmark() {
        for (int i = 0; i < 1000; i++) {
            double d = i;
            Math.sqrt(d);
            Math.sin(d);
            Math.cos(d);
        }
    }

    private final int calculatePerformanceScore(long startTime, long endTime) {
        long j = (endTime - startTime) / ((long) 1000000);
        if (j > 0) {
            return (int) ((1000.0d / j) * ((double) 100));
        }
        return 100;
    }

    private final VVideoCompressQuality getOptimalQuality(int videoWidth, int videoHeight, VVideoCompressQuality requestedQuality) {
        boolean z = videoWidth >= WIDTH_4K || videoHeight >= HEIGHT_4K;
        boolean z2 = videoWidth >= 2560 || videoHeight >= 1440;
        if (z) {
            DeviceCapabilityResult deviceCapabilityResultCanHandle4KCompression = canHandle4KCompression();
            if (!deviceCapabilityResultCanHandle4KCompression.getCanHandle4K()) {
                System.out.println((Object) ("4K FIX: Device cannot handle 4K compression: " + deviceCapabilityResultCanHandle4KCompression.getReason()));
                if (WhenMappings.$EnumSwitchMapping$0[requestedQuality.ordinal()] == 1) {
                    return VVideoCompressQuality.MEDIUM;
                }
                return (VVideoCompressQuality) ComparisonsKt.minOf(requestedQuality, VVideoCompressQuality.MEDIUM);
            }
            if (WhenMappings.$EnumSwitchMapping$0[requestedQuality.ordinal()] == 1) {
                if (analyzeMemoryCapabilities().getAvailableMemoryMB() < 2000) {
                    return VVideoCompressQuality.MEDIUM;
                }
                return VVideoCompressQuality.HIGH;
            }
        } else if (z2 && analyzeMemoryCapabilities().getAvailableMemoryMB() < 1500 && requestedQuality == VVideoCompressQuality.HIGH) {
            return VVideoCompressQuality.MEDIUM;
        }
        return requestedQuality;
    }

    private final VVideoCompressQuality downgradeQuality(VVideoCompressQuality currentQuality) {
        int i = WhenMappings.$EnumSwitchMapping$0[currentQuality.ordinal()];
        if (i == 1) {
            return VVideoCompressQuality.MEDIUM;
        }
        if (i == 2) {
            return VVideoCompressQuality.LOW;
        }
        if (i == 3) {
            return VVideoCompressQuality.VERY_LOW;
        }
        if (i == 4) {
            return VVideoCompressQuality.ULTRA_LOW;
        }
        if (i != 5) {
            throw new NoWhenBranchMatchedException();
        }
        return VVideoCompressQuality.ULTRA_LOW;
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Code duplicated, block: B:6:0x0016  */
    public final boolean isCodecCapacityError(Throwable error) {
        String lowerCase;
        String strJoinToString$default;
        String message = error.getMessage();
        String str = "";
        if (message != null) {
            lowerCase = message.toLowerCase(Locale.ROOT);
            Intrinsics.checkNotNullExpressionValue(lowerCase, "toLowerCase(...)");
            if (lowerCase == null) {
                lowerCase = "";
            }
        } else {
            lowerCase = "";
        }
        StackTraceElement[] stackTrace = error.getStackTrace();
        if (stackTrace != null && (strJoinToString$default = ArraysKt.joinToString$default(stackTrace, " ", (CharSequence) null, (CharSequence) null, 0, (CharSequence) null, new Function1() { // from class: com.v_chat_sdk.v_video_compressor.VVideoCompressionEngine$$ExternalSyntheticLambda2
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return VVideoCompressionEngine.isCodecCapacityError$lambda$0((StackTraceElement) obj);
            }
        }, 30, (Object) null)) != null) {
            str = strJoinToString$default;
        }
        List<String> listPlus = CollectionsKt.plus((Collection) CollectionsKt.listOf((Object[]) new String[]{"codec capacity", "failed to initialize", "codec reported err", "insufficient resources", "encoder failed", "mediacodec error", "error 0xffffec77", "codec exception", "resource busy", "codec not available", "encoder init failed", "format not supported", "resolution not supported", "bitrate too high", "frame rate not supported"}), (Iterable) CollectionsKt.listOf((Object[]) new String[]{"resolution too high", "size not supported", "dimensions not supported", "3840x2160", "4k not supported", "uhd not supported"}));
        if ((listPlus instanceof Collection) && listPlus.isEmpty()) {
            return false;
        }
        for (String str2 : listPlus) {
            if (StringsKt.contains$default((CharSequence) lowerCase, (CharSequence) str2, false, 2, (Object) null) || StringsKt.contains$default((CharSequence) str, (CharSequence) str2, false, 2, (Object) null)) {
                return true;
            }
        }
        return false;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final CharSequence isCodecCapacityError$lambda$0(StackTraceElement stackTraceElement) {
        String string = stackTraceElement.toString();
        Intrinsics.checkNotNullExpressionValue(string, "toString(...)");
        String lowerCase = string.toLowerCase(Locale.ROOT);
        Intrinsics.checkNotNullExpressionValue(lowerCase, "toLowerCase(...)");
        return lowerCase;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final String formatExportError(ExportException error, File outputDirectory) {
        Object objM9861constructorimpl;
        List<String> list = SequencesKt.toList(SequencesKt.map(SequencesKt.generateSequence(error, (Function1<? super ExportException, ? extends ExportException>) new Function1() { // from class: com.v_chat_sdk.v_video_compressor.VVideoCompressionEngine$$ExternalSyntheticLambda0
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return VVideoCompressionEngine.formatExportError$lambda$0((Throwable) obj);
            }
        }), new Function1() { // from class: com.v_chat_sdk.v_video_compressor.VVideoCompressionEngine$$ExternalSyntheticLambda1
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return VVideoCompressionEngine.formatExportError$lambda$1((Throwable) obj);
            }
        }));
        try {
            Result.Companion companion = Result.INSTANCE;
            VVideoCompressionEngine vVideoCompressionEngine = this;
            objM9861constructorimpl = Result.m9861constructorimpl(Long.valueOf(new StatFs(outputDirectory.getPath()).getAvailableBytes()));
        } catch (Throwable th) {
            Result.Companion companion2 = Result.INSTANCE;
            objM9861constructorimpl = Result.m9861constructorimpl(ResultKt.createFailure(th));
        }
        if (Result.m9867isFailureimpl(objM9861constructorimpl)) {
            objM9861constructorimpl = null;
        }
        Long l = (Long) objM9861constructorimpl;
        String str = Build.MANUFACTURER + " " + Build.MODEL + " (Android " + Build.VERSION.RELEASE + ", API " + Build.VERSION.SDK_INT + ")";
        VVideoExportError vVideoExportError = VVideoExportError.INSTANCE;
        int i = error.errorCode;
        String errorCodeName = error.getErrorCodeName();
        Intrinsics.checkNotNullExpressionValue(errorCodeName, "getErrorCodeName(...)");
        ExportException.CodecInfo codecInfo = error.codecInfo;
        return vVideoExportError.format(i, errorCodeName, list, codecInfo != null ? codecInfo.toString() : null, l, str);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Throwable formatExportError$lambda$0(Throwable it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return it.getCause();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final String formatExportError$lambda$1(Throwable it) {
        Intrinsics.checkNotNullParameter(it, "it");
        String message = it.getMessage();
        return message == null ? it.getClass().getSimpleName() : message;
    }

    /* JADX WARN: Code duplicated, block: B:45:0x00c6  */
    /* JADX WARN: Code duplicated, block: B:50:0x00ce  */
    public final VVideoInfo getVideoInfo(String videoPath) throws Throwable {
        MediaMetadataRetriever mediaMetadataRetriever;
        Pair pair;
        Integer intOrNull;
        Integer intOrNull2;
        Integer intOrNull3;
        Long longOrNull;
        Intrinsics.checkNotNullParameter(videoPath, "videoPath");
        MediaMetadataRetriever mediaMetadataRetriever2 = null;
        try {
            File file = new File(videoPath);
            if (!file.exists()) {
                return null;
            }
            mediaMetadataRetriever = new MediaMetadataRetriever();
            try {
                try {
                    mediaMetadataRetriever.setDataSource(videoPath);
                    String name = file.getName();
                    long length = file.length();
                    String strExtractMetadata = mediaMetadataRetriever.extractMetadata(9);
                    long jLongValue = (strExtractMetadata == null || (longOrNull = StringsKt.toLongOrNull(strExtractMetadata)) == null) ? 0L : longOrNull.longValue();
                    String strExtractMetadata2 = mediaMetadataRetriever.extractMetadata(18);
                    String strExtractMetadata3 = mediaMetadataRetriever.extractMetadata(19);
                    String strExtractMetadata4 = mediaMetadataRetriever.extractMetadata(24);
                    int iIntValue = 0;
                    int iIntValue2 = (strExtractMetadata2 == null || (intOrNull3 = StringsKt.toIntOrNull(strExtractMetadata2)) == null) ? 0 : intOrNull3.intValue();
                    int iIntValue3 = (strExtractMetadata3 == null || (intOrNull2 = StringsKt.toIntOrNull(strExtractMetadata3)) == null) ? 0 : intOrNull2.intValue();
                    if (strExtractMetadata4 != null && (intOrNull = StringsKt.toIntOrNull(strExtractMetadata4)) != null) {
                        iIntValue = intOrNull.intValue();
                    }
                    if (iIntValue == 90 || iIntValue == 270) {
                        pair = new Pair(Integer.valueOf(iIntValue3), Integer.valueOf(iIntValue2));
                    } else {
                        pair = new Pair(Integer.valueOf(iIntValue2), Integer.valueOf(iIntValue3));
                    }
                    int iIntValue4 = ((Number) pair.component1()).intValue();
                    int iIntValue5 = ((Number) pair.component2()).intValue();
                    Intrinsics.checkNotNull(name);
                    VVideoInfo vVideoInfo = new VVideoInfo(videoPath, name, length, jLongValue, iIntValue4, iIntValue5, null, 64, null);
                    mediaMetadataRetriever.release();
                    return vVideoInfo;
                } catch (Exception e) {
                    e = e;
                    e.printStackTrace();
                    if (mediaMetadataRetriever != null) {
                        mediaMetadataRetriever.release();
                    }
                    return null;
                }
            } catch (Throwable th) {
                th = th;
                mediaMetadataRetriever2 = mediaMetadataRetriever;
                if (mediaMetadataRetriever2 != null) {
                    mediaMetadataRetriever2.release();
                }
                throw th;
            }
        } catch (Exception e2) {
            e = e2;
            mediaMetadataRetriever = null;
        } catch (Throwable th2) {
            th = th2;
            if (mediaMetadataRetriever2 != null) {
                mediaMetadataRetriever2.release();
            }
            throw th;
        }
        e.printStackTrace();
        if (mediaMetadataRetriever != null) {
            mediaMetadataRetriever.release();
        }
        return null;
    }

    private final int getVideoRotation(String videoPath) throws Throwable {
        Integer intOrNull;
        int iIntValue = 0;
        MediaMetadataRetriever mediaMetadataRetriever = null;
        try {
            try {
                MediaMetadataRetriever mediaMetadataRetriever2 = new MediaMetadataRetriever();
                try {
                    mediaMetadataRetriever2.setDataSource(videoPath);
                    String strExtractMetadata = mediaMetadataRetriever2.extractMetadata(24);
                    if (strExtractMetadata != null && (intOrNull = StringsKt.toIntOrNull(strExtractMetadata)) != null) {
                        iIntValue = intOrNull.intValue();
                    }
                    mediaMetadataRetriever2.release();
                    return iIntValue;
                } catch (Exception e) {
                    e = e;
                    mediaMetadataRetriever = mediaMetadataRetriever2;
                    e.printStackTrace();
                    if (mediaMetadataRetriever != null) {
                        mediaMetadataRetriever.release();
                    }
                    return 0;
                } catch (Throwable th) {
                    th = th;
                    mediaMetadataRetriever = mediaMetadataRetriever2;
                    if (mediaMetadataRetriever != null) {
                        mediaMetadataRetriever.release();
                    }
                    throw th;
                }
            } catch (Throwable th2) {
                th = th2;
            }
        } catch (Exception e2) {
            e = e2;
        }
    }

    private final void configureVideoEncoder(Transformer.Builder transformerBuilder, VVideoInfo videoInfo, VVideoCompressionConfig config, VVideoCropPlan cropPlan, String videoMimeType, SourceVideoTrack source) {
        VVideoCompressionEngine vVideoCompressionEngine;
        Pair<Integer, Integer> pairCalculateAspectRatioPreservingDimensions;
        Integer videoBitrate;
        VVideoSize outputSize;
        if (cropPlan != null && (outputSize = cropPlan.getOutputSize()) != null) {
            pairCalculateAspectRatioPreservingDimensions = new Pair<>(Integer.valueOf(outputSize.getWidth()), Integer.valueOf(outputSize.getHeight()));
            vVideoCompressionEngine = this;
        } else {
            int width = videoInfo.getWidth();
            int height = videoInfo.getHeight();
            VVideoCompressQuality quality = config.getQuality();
            VVideoAdvancedConfig advanced = config.getAdvanced();
            Integer customWidth = advanced != null ? advanced.getCustomWidth() : null;
            VVideoAdvancedConfig advanced2 = config.getAdvanced();
            vVideoCompressionEngine = this;
            pairCalculateAspectRatioPreservingDimensions = vVideoCompressionEngine.calculateAspectRatioPreservingDimensions(width, height, quality, customWidth, advanced2 != null ? advanced2.getCustomHeight() : null);
        }
        int iIntValue = pairCalculateAspectRatioPreservingDimensions.component1().intValue();
        int iIntValue2 = pairCalculateAspectRatioPreservingDimensions.component2().intValue();
        VideoEncoderSettings.Builder builder = new VideoEncoderSettings.Builder();
        VVideoAdvancedConfig advanced3 = config.getAdvanced();
        if (advanced3 != null && (videoBitrate = advanced3.getVideoBitrate()) != null) {
            int iIntValue3 = videoBitrate.intValue();
            builder.setBitrate(iIntValue3);
            System.out.println((Object) ("VVideoCompressionEngine: Requesting video bitrate " + iIntValue3 + " bps"));
        }
        if (Intrinsics.areEqual(videoMimeType, "video/avc") && !source.isHdr() && videoInfo.getWidth() > 0 && videoInfo.getHeight() > 0) {
            VVideoEncodingSettings vVideoEncodingSettings = VVideoEncodingSettings.INSTANCE;
            VVideoAdvancedConfig advanced4 = config.getAdvanced();
            double dEffectiveFrameRate = vVideoEncodingSettings.effectiveFrameRate(advanced4 != null ? advanced4.getFrameRate() : null, source.getFrameRate());
            Integer numMinimumLevel = VVideoH264Level.INSTANCE.minimumLevel(iIntValue, iIntValue2, dEffectiveFrameRate);
            if (numMinimumLevel != null) {
                int iIntValue4 = numMinimumLevel.intValue();
                System.out.println((Object) ("VVideoCompressionEngine: Requesting H.264 High profile, level 0x" + Integer.toHexString(iIntValue4) + " for " + iIntValue + "x" + iIntValue2 + " @ " + dEffectiveFrameRate + "fps"));
                builder.setEncodingProfileLevel(8, iIntValue4);
            }
        }
        transformerBuilder.setEncoderFactory(new DefaultEncoderFactory.Builder(vVideoCompressionEngine.context).setRequestedVideoEncoderSettings(builder.build()).build());
    }

    /* JADX INFO: compiled from: VVideoCompressionEngine.kt */
    @Metadata(d1 = {"\u0000$\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u0006\n\u0000\n\u0002\u0010\u000b\n\u0002\b\r\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0000\b\u0082\b\u0018\u00002\u00020\u0001B\u0019\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0004\b\u0006\u0010\u0007J\u0010\u0010\f\u001a\u0004\u0018\u00010\u0003HÆ\u0003¢\u0006\u0002\u0010\tJ\t\u0010\r\u001a\u00020\u0005HÆ\u0003J$\u0010\u000e\u001a\u00020\u00002\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u0005HÆ\u0001¢\u0006\u0002\u0010\u000fJ\u0013\u0010\u0010\u001a\u00020\u00052\b\u0010\u0011\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u0012\u001a\u00020\u0013HÖ\u0001J\t\u0010\u0014\u001a\u00020\u0015HÖ\u0001R\u0015\u0010\u0002\u001a\u0004\u0018\u00010\u0003¢\u0006\n\n\u0002\u0010\n\u001a\u0004\b\b\u0010\tR\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0004\u0010\u000b¨\u0006\u0016"}, d2 = {"Lcom/v_chat_sdk/v_video_compressor/VVideoCompressionEngine$SourceVideoTrack;", "", RRWebVideoEvent.JsonKeys.FRAME_RATE, "", "isHdr", "", "<init>", "(Ljava/lang/Double;Z)V", "getFrameRate", "()Ljava/lang/Double;", "Ljava/lang/Double;", "()Z", "component1", "component2", MenuActionType.COPY, "(Ljava/lang/Double;Z)Lcom/v_chat_sdk/v_video_compressor/VVideoCompressionEngine$SourceVideoTrack;", "equals", Request.JsonKeys.OTHER, "hashCode", "", "toString", "", "v_video_compressor_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
    private static final /* data */ class SourceVideoTrack {
        private final Double frameRate;
        private final boolean isHdr;

        public static /* synthetic */ SourceVideoTrack copy$default(SourceVideoTrack sourceVideoTrack, Double d, boolean z, int i, Object obj) {
            if ((i & 1) != 0) {
                d = sourceVideoTrack.frameRate;
            }
            if ((i & 2) != 0) {
                z = sourceVideoTrack.isHdr;
            }
            return sourceVideoTrack.copy(d, z);
        }

        /* JADX INFO: renamed from: component1, reason: from getter */
        public final Double getFrameRate() {
            return this.frameRate;
        }

        /* JADX INFO: renamed from: component2, reason: from getter */
        public final boolean getIsHdr() {
            return this.isHdr;
        }

        public final SourceVideoTrack copy(Double frameRate, boolean isHdr) {
            return new SourceVideoTrack(frameRate, isHdr);
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            if (!(other instanceof SourceVideoTrack)) {
                return false;
            }
            SourceVideoTrack sourceVideoTrack = (SourceVideoTrack) other;
            return Intrinsics.areEqual((Object) this.frameRate, (Object) sourceVideoTrack.frameRate) && this.isHdr == sourceVideoTrack.isHdr;
        }

        public int hashCode() {
            Double d = this.frameRate;
            return ((d == null ? 0 : d.hashCode()) * 31) + Boolean.hashCode(this.isHdr);
        }

        public String toString() {
            return "SourceVideoTrack(frameRate=" + this.frameRate + ", isHdr=" + this.isHdr + ")";
        }

        public SourceVideoTrack(Double d, boolean z) {
            this.frameRate = d;
            this.isHdr = z;
        }

        public final Double getFrameRate() {
            return this.frameRate;
        }

        public final boolean isHdr() {
            return this.isHdr;
        }
    }

    private final SourceVideoTrack readSourceVideoTrack(String videoPath) {
        SourceVideoTrack sourceVideoTrack;
        boolean z;
        Object next;
        double integer;
        Double dValueOf;
        MediaExtractor mediaExtractor = new MediaExtractor();
        try {
            try {
                mediaExtractor.setDataSource(videoPath);
                IntRange intRangeUntil = RangesKt.until(0, mediaExtractor.getTrackCount());
                ArrayList arrayList = new ArrayList(CollectionsKt.collectionSizeOrDefault(intRangeUntil, 10));
                Iterator<Integer> it = intRangeUntil.iterator();
                while (it.hasNext()) {
                    arrayList.add(mediaExtractor.getTrackFormat(((IntIterator) it).nextInt()));
                }
                Iterator it2 = arrayList.iterator();
                while (true) {
                    z = true;
                    if (!it2.hasNext()) {
                        next = null;
                        break;
                    }
                    next = it2.next();
                    String string = ((MediaFormat) next).getString("mime");
                    if (string != null && StringsKt.startsWith$default(string, "video/", false, 2, (Object) null)) {
                        break;
                    }
                }
                MediaFormat mediaFormat = (MediaFormat) next;
                if (mediaFormat == null) {
                    SourceVideoTrack sourceVideoTrack2 = new SourceVideoTrack(null, false);
                    mediaExtractor.release();
                    return sourceVideoTrack2;
                }
                if (mediaFormat.containsKey("frame-rate")) {
                    try {
                        integer = mediaFormat.getInteger("frame-rate");
                    } catch (ClassCastException unused) {
                        integer = mediaFormat.getFloat("frame-rate");
                    }
                    dValueOf = Double.valueOf(integer);
                } else {
                    dValueOf = null;
                }
                Integer numValueOf = mediaFormat.containsKey("color-transfer") ? Integer.valueOf(mediaFormat.getInteger("color-transfer")) : null;
                if (dValueOf == null || dValueOf.doubleValue() <= 0.0d) {
                    dValueOf = null;
                }
                if (numValueOf == null || numValueOf.intValue() != 6) {
                    if (numValueOf == null || numValueOf.intValue() != 7) {
                        z = false;
                    }
                }
                sourceVideoTrack = new SourceVideoTrack(dValueOf, z);
                mediaExtractor.release();
                return sourceVideoTrack;
            } catch (Exception e) {
                System.out.println((Object) ("VVideoCompressionEngine: Could not read source video track: " + e.getMessage()));
                sourceVideoTrack = new SourceVideoTrack(null, false);
            }
        } catch (Throwable th) {
            mediaExtractor.release();
            throw th;
        }
    }

    public final VVideoCompressionEstimate estimateCompressionSize(VVideoInfo videoInfo, VVideoCompressQuality quality) {
        Intrinsics.checkNotNullParameter(videoInfo, "videoInfo");
        Intrinsics.checkNotNullParameter(quality, "quality");
        return estimateCompressionSize(videoInfo, quality, null);
    }

    public final VVideoCompressionEstimate estimateCompressionSize(VVideoInfo videoInfo, VVideoCompressQuality quality, VVideoAdvancedConfig advanced) {
        Intrinsics.checkNotNullParameter(videoInfo, "videoInfo");
        Intrinsics.checkNotNullParameter(quality, "quality");
        double durationMillis = videoInfo.getDurationMillis() / 1000.0d;
        int iTargetBitrate = VVideoEncodingSettings.INSTANCE.targetBitrate(videoInfo.getWidth(), videoInfo.getHeight(), quality, advanced);
        Pair<Integer, Integer> pairCalculateAspectRatioPreservingDimensions = calculateAspectRatioPreservingDimensions(videoInfo.getWidth(), videoInfo.getHeight(), quality, advanced != null ? advanced.getCustomWidth() : null, advanced != null ? advanced.getCustomHeight() : null);
        int iIntValue = pairCalculateAspectRatioPreservingDimensions.component1().intValue();
        int iIntValue2 = pairCalculateAspectRatioPreservingDimensions.component2().intValue();
        int width = videoInfo.getWidth() * videoInfo.getHeight();
        int i = iIntValue * iIntValue2;
        if ((advanced != null ? advanced.getVideoBitrate() : null) == null && i < width) {
            iTargetBitrate = (int) (iTargetBitrate * (i / width) * 0.9f);
        }
        int iIntValue3 = 0;
        if (!(advanced != null ? Intrinsics.areEqual((Object) advanced.getRemoveAudio(), (Object) true) : false)) {
            if ((advanced != null ? advanced.getAudioBitrate() : null) != null) {
                iIntValue3 = advanced.getAudioBitrate().intValue();
            } else if (quality == VVideoCompressQuality.LOW) {
                iIntValue3 = AUDIO_BITRATE_LOW;
            } else if (quality == VVideoCompressQuality.VERY_LOW) {
                iIntValue3 = 48000;
            } else {
                iIntValue3 = quality == VVideoCompressQuality.ULTRA_LOW ? AUDIO_BITRATE_ULTRA_LOW : AUDIO_BITRATE;
            }
        }
        long j = (long) (((long) ((((double) (iIntValue3 + iTargetBitrate)) * durationMillis) / ((double) 8))) * 1.05d);
        return new VVideoCompressionEstimate(j, formatFileSize(j), j / videoInfo.getFileSizeBytes(), iTargetBitrate / 1000000.0f);
    }

    private final boolean hasEnoughResources(VVideoInfo videoInfo, File outputDirectory) {
        this.activityManager.getMemoryInfo(this.memoryInfo);
        long j = 1048576;
        return this.memoryInfo.availMem / j >= 100 && new StatFs(outputDirectory.getPath()).getAvailableBytes() / j >= (videoInfo.getFileSizeBytes() / j) + ((long) 200);
    }

    public final void compressVideo(VVideoInfo videoInfo, VVideoCompressionConfig config, CompressionCallback callback) {
        Intrinsics.checkNotNullParameter(videoInfo, "videoInfo");
        Intrinsics.checkNotNullParameter(config, "config");
        Intrinsics.checkNotNullParameter(callback, "callback");
        File file = new File(videoInfo.getPath());
        if (!file.isFile() || !file.canRead() || file.length() <= 0) {
            callback.onError("The input video is missing, empty, or unreadable");
            return;
        }
        try {
            File filePrepareOutputDirectory = prepareOutputDirectory(config.getOutputPath());
            if (!hasEnoughResources(videoInfo, filePrepareOutputDirectory)) {
                callback.onError("Insufficient memory or storage available for compression");
            } else {
                compressVideoWithRetry(videoInfo, VVideoCompressionConfig.copy$default(config, getOptimalQuality(videoInfo.getWidth(), videoInfo.getHeight(), config.getQuality()), null, false, false, false, null, 62, null), filePrepareOutputDirectory, callback, 0);
            }
        } catch (IOException e) {
            String message = e.getMessage();
            if (message == null) {
                message = "The output directory is unavailable";
            }
            callback.onError(message);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Code duplicated, block: B:17:0x00a1  */
    /* JADX WARN: Code duplicated, block: B:69:0x019a  */
    /* JADX WARN: Code duplicated, block: B:70:0x01a6  */
    /* JADX WARN: Code duplicated, block: B:71:0x01a8 A[ADDED_TO_REGION] */
    /* JADX WARN: Code duplicated, block: B:73:0x01ac  */
    /* JADX WARN: Code duplicated, block: B:76:0x01b1  */
    /* JADX WARN: Code duplicated, block: B:77:0x01b3  */
    /* JADX WARN: Code duplicated, block: B:81:0x01c3  */
    /* JADX WARN: Code duplicated, block: B:82:0x01c8  */
    /* JADX WARN: Code duplicated, block: B:85:0x01d4  */
    /* JADX WARN: Code duplicated, block: B:89:0x020b  */
    /* JADX WARN: Code duplicated, block: B:90:0x0212 A[DONT_INVERT] */
    /* JADX WARN: Code duplicated, block: B:91:0x0214  */
    /* JADX WARN: Code duplicated, block: B:93:0x021e  */
    /* JADX WARN: Code duplicated, block: B:95:0x0237  */
    /* JADX WARN: Code duplicated, block: B:97:0x023d  */
    /* JADX WARN: Instruction removed from duplicated block: B:85:0x01d4, please report this as an issue */
    public final void compressVideoWithRetry(VVideoInfo videoInfo, VVideoCompressionConfig config, File outputDirectory, CompressionCallback callback, int retryCount) {
        int i;
        Exception exc;
        boolean zIsCodecCapacityError;
        boolean z;
        boolean zShouldRetry;
        String message;
        String exportError;
        String message2;
        VVideoCompressQuality nextLowerQuality;
        VVideoCompressQuality vVideoCompressQuality;
        VVideoCropPlan vVideoCropPlanCreatePlan;
        String str;
        VVideoCropRect cropRect;
        VVideoCompressionEngine vVideoCompressionEngine = this;
        VVideoInfo vVideoInfo = videoInfo;
        File fileCreateOutputFile = vVideoCompressionEngine.createOutputFile(outputDirectory, vVideoInfo, config.getQuality());
        long jCurrentTimeMillis = System.currentTimeMillis();
        boolean z2 = false;
        vVideoCompressionEngine.isCancelled.set(false);
        vVideoCompressionEngine.isCompressionActive.set(true);
        vVideoCompressionEngine.fileSizeCache.clear();
        vVideoCompressionEngine.lastFileSizeCheck = 0L;
        vVideoCompressionEngine.lastFileSize = 0L;
        try {
            MediaItem mediaItemBuild = new MediaItem.Builder().setUri(Uri.fromFile(new File(vVideoInfo.getPath()))).build();
            Intrinsics.checkNotNullExpressionValue(mediaItemBuild, "build(...)");
            VVideoAdvancedConfig advanced = config.getAdvanced();
            if (advanced == null || (cropRect = advanced.getCropRect()) == null) {
                vVideoCropPlanCreatePlan = null;
            } else {
                VVideoCropRect vVideoCropRect = !cropRect.isFullFrame() ? cropRect : null;
                if (vVideoCropRect != null) {
                    VVideoCropGeometry vVideoCropGeometry = VVideoCropGeometry.INSTANCE;
                    int width = vVideoInfo.getWidth();
                    int height = vVideoInfo.getHeight();
                    Integer rotation = config.getAdvanced().getRotation();
                    vVideoCropPlanCreatePlan = vVideoCropGeometry.createPlan(width, height, rotation != null ? rotation.intValue() : 0, vVideoCropRect, config.getQuality(), config.getAdvanced().getCustomWidth(), config.getAdvanced().getCustomHeight(), config.getAdvanced().getDimensionHandling());
                } else {
                    vVideoCropPlanCreatePlan = null;
                }
            }
            SourceVideoTrack sourceVideoTrack = vVideoCompressionEngine.readSourceVideoTrack(vVideoInfo.getPath());
            String strSelectOptimalVideoCodec = vVideoCompressionEngine.selectOptimalVideoCodec(vVideoInfo, config, sourceVideoTrack.getFrameRate());
            VVideoCompressionConfig vVideoCompressionConfigValidateAndAdjustConfiguration = vVideoCompressionEngine.validateAndAdjustConfiguration(vVideoInfo, config, strSelectOptimalVideoCodec, vVideoCropPlanCreatePlan, sourceVideoTrack.getFrameRate());
            try {
                vVideoCompressionEngine = this;
                VVideoInfo vVideoInfo2 = videoInfo;
                try {
                    EditedMediaItem editedMediaItemCreateEditedMediaItemWithQuality = vVideoCompressionEngine.createEditedMediaItemWithQuality(mediaItemBuild, vVideoInfo2, vVideoCompressionConfigValidateAndAdjustConfiguration, vVideoCropPlanCreatePlan, sourceVideoTrack.getFrameRate());
                    try {
                        Transformer.Builder videoMimeType = new Transformer.Builder(vVideoCompressionEngine.context).setMuxerFactory(new InAppMp4Muxer.Factory()).setVideoMimeType(strSelectOptimalVideoCodec);
                        Intrinsics.checkNotNullExpressionValue(videoMimeType, "setVideoMimeType(...)");
                        vVideoInfo2 = videoInfo;
                        vVideoCompressionEngine.configureVideoEncoder(videoMimeType, vVideoInfo2, vVideoCompressionConfigValidateAndAdjustConfiguration, vVideoCropPlanCreatePlan, strSelectOptimalVideoCodec, sourceVideoTrack);
                        vVideoInfo = vVideoInfo2;
                        VVideoAdvancedConfig advanced2 = vVideoCompressionConfigValidateAndAdjustConfiguration.getAdvanced();
                        if (!(advanced2 != null ? Intrinsics.areEqual((Object) advanced2.getRemoveAudio(), (Object) true) : false)) {
                            VVideoAdvancedConfig advanced3 = vVideoCompressionConfigValidateAndAdjustConfiguration.getAdvanced();
                            VAudioCodec audioCodec = advanced3 != null ? advanced3.getAudioCodec() : null;
                            if ((audioCodec == null ? -1 : WhenMappings.$EnumSwitchMapping$1[audioCodec.ordinal()]) == 1) {
                                str = MimeTypes.AUDIO_MPEG;
                            } else {
                                str = MimeTypes.AUDIO_AAC;
                            }
                            videoMimeType.setAudioMimeType(str);
                        }
                        videoMimeType.experimentalSetTrimOptimizationEnabled(true);
                        VVideoAdvancedConfig advanced4 = vVideoCompressionConfigValidateAndAdjustConfiguration.getAdvanced();
                        if (advanced4 != null) {
                            Intrinsics.areEqual((Object) advanced4.getHardwareAcceleration(), (Object) false);
                        }
                        vVideoCompressionEngine.applyAdvancedCompressionSettings(videoMimeType, vVideoCompressionConfigValidateAndAdjustConfiguration.getAdvanced(), vVideoInfo);
                        i = retryCount;
                        callback = callback;
                        try {
                            AnonymousClass1 anonymousClass1 = vVideoCompressionEngine.new AnonymousClass1(fileCreateOutputFile, callback, jCurrentTimeMillis, vVideoInfo, config, i, outputDirectory);
                            fileCreateOutputFile = fileCreateOutputFile;
                            vVideoInfo = vVideoInfo;
                            try {
                                vVideoCompressionEngine.transformer = videoMimeType.addListener(anonymousClass1).build();
                                vVideoCompressionEngine.startProgressTracking(vVideoInfo, fileCreateOutputFile, callback);
                                Transformer transformer = vVideoCompressionEngine.transformer;
                                if (transformer != null) {
                                    transformer.start(editedMediaItemCreateEditedMediaItemWithQuality, fileCreateOutputFile.getAbsolutePath());
                                }
                            } catch (Exception e) {
                                e = e;
                                vVideoCompressionEngine.stopProgressTracking();
                                fileCreateOutputFile.delete();
                                exc = e;
                                zIsCodecCapacityError = vVideoCompressionEngine.isCodecCapacityError(exc);
                                z = e instanceof ExportException;
                                if (z) {
                                    zShouldRetry = VVideoExportError.INSTANCE.shouldRetry(((ExportException) e).errorCode, zIsCodecCapacityError, i, 3);
                                } else if (i < 3 || !zIsCodecCapacityError) {
                                    zShouldRetry = false;
                                } else {
                                    zShouldRetry = true;
                                }
                                if (zShouldRetry) {
                                    if (z && VVideoExportError.INSTANCE.isMuxerError(((ExportException) e).errorCode)) {
                                        z2 = true;
                                    }
                                    if (z2) {
                                        nextLowerQuality = config.getQuality();
                                    } else {
                                        nextLowerQuality = vVideoCompressionEngine.getNextLowerQuality(config.getQuality());
                                    }
                                    vVideoCompressQuality = nextLowerQuality;
                                    if (vVideoCompressQuality != null) {
                                        Log.w(LOG_TAG, "Export initialization failed; retrying with " + vVideoCompressQuality.getDisplayName(), exc);
                                        vVideoCompressionEngine.compressVideoWithRetry(vVideoInfo, VVideoCompressionConfig.copy$default(config, vVideoCompressQuality, null, false, false, false, null, 62, null), outputDirectory, callback, i + 1);
                                        return;
                                    }
                                }
                                if (z) {
                                    exportError = vVideoCompressionEngine.formatExportError((ExportException) e, outputDirectory);
                                } else if (zIsCodecCapacityError) {
                                    String strBuildDeviceCapabilityReport = vVideoCompressionEngine.buildDeviceCapabilityReport();
                                    message2 = e.getMessage();
                                    if (message2 == null) {
                                        message2 = "codec error";
                                    }
                                    exportError = "Compression failed - " + message2 + ".\n\n" + strBuildDeviceCapabilityReport;
                                } else {
                                    message = e.getMessage();
                                    if (message == null) {
                                        message = e.getClass().getSimpleName();
                                    }
                                    exportError = "Failed to start compression: " + message;
                                }
                                Log.e(LOG_TAG, exportError, exc);
                                callback.onError(exportError);
                            }
                        } catch (Exception e2) {
                            e = e2;
                            fileCreateOutputFile = fileCreateOutputFile;
                            vVideoInfo = vVideoInfo;
                        }
                    } catch (Exception e3) {
                        e = e3;
                        vVideoInfo = videoInfo;
                        i = retryCount;
                        vVideoCompressionEngine.stopProgressTracking();
                        fileCreateOutputFile.delete();
                        exc = e;
                        zIsCodecCapacityError = vVideoCompressionEngine.isCodecCapacityError(exc);
                        z = e instanceof ExportException;
                        if (z) {
                            zShouldRetry = VVideoExportError.INSTANCE.shouldRetry(((ExportException) e).errorCode, zIsCodecCapacityError, i, 3);
                        } else if (i < 3) {
                            zShouldRetry = false;
                        } else {
                            zShouldRetry = false;
                        }
                        if (zShouldRetry) {
                            if (z) {
                                z2 = true;
                            }
                            if (z2) {
                                nextLowerQuality = config.getQuality();
                            } else {
                                nextLowerQuality = vVideoCompressionEngine.getNextLowerQuality(config.getQuality());
                            }
                            vVideoCompressQuality = nextLowerQuality;
                            if (vVideoCompressQuality != null) {
                                Log.w(LOG_TAG, "Export initialization failed; retrying with " + vVideoCompressQuality.getDisplayName(), exc);
                                vVideoCompressionEngine.compressVideoWithRetry(vVideoInfo, VVideoCompressionConfig.copy$default(config, vVideoCompressQuality, null, false, false, false, null, 62, null), outputDirectory, callback, i + 1);
                                return;
                            }
                        }
                        if (z) {
                            exportError = vVideoCompressionEngine.formatExportError((ExportException) e, outputDirectory);
                        } else if (zIsCodecCapacityError) {
                            String strBuildDeviceCapabilityReport2 = vVideoCompressionEngine.buildDeviceCapabilityReport();
                            message2 = e.getMessage();
                            if (message2 == null) {
                                message2 = "codec error";
                            }
                            exportError = "Compression failed - " + message2 + ".\n\n" + strBuildDeviceCapabilityReport2;
                        } else {
                            message = e.getMessage();
                            if (message == null) {
                                message = e.getClass().getSimpleName();
                            }
                            exportError = "Failed to start compression: " + message;
                        }
                        Log.e(LOG_TAG, exportError, exc);
                        callback.onError(exportError);
                    }
                } catch (Exception e4) {
                    e = e4;
                    vVideoInfo = vVideoInfo2;
                    i = retryCount;
                    vVideoCompressionEngine.stopProgressTracking();
                    fileCreateOutputFile.delete();
                    exc = e;
                    zIsCodecCapacityError = vVideoCompressionEngine.isCodecCapacityError(exc);
                    z = e instanceof ExportException;
                    if (z) {
                        zShouldRetry = VVideoExportError.INSTANCE.shouldRetry(((ExportException) e).errorCode, zIsCodecCapacityError, i, 3);
                    } else if (i < 3) {
                        zShouldRetry = false;
                    } else {
                        zShouldRetry = false;
                    }
                    if (zShouldRetry) {
                        if (z) {
                            z2 = true;
                        }
                        if (z2) {
                            nextLowerQuality = config.getQuality();
                        } else {
                            nextLowerQuality = vVideoCompressionEngine.getNextLowerQuality(config.getQuality());
                        }
                        vVideoCompressQuality = nextLowerQuality;
                        if (vVideoCompressQuality != null) {
                            Log.w(LOG_TAG, "Export initialization failed; retrying with " + vVideoCompressQuality.getDisplayName(), exc);
                            vVideoCompressionEngine.compressVideoWithRetry(vVideoInfo, VVideoCompressionConfig.copy$default(config, vVideoCompressQuality, null, false, false, false, null, 62, null), outputDirectory, callback, i + 1);
                            return;
                        }
                    }
                    if (z) {
                        exportError = vVideoCompressionEngine.formatExportError((ExportException) e, outputDirectory);
                    } else if (zIsCodecCapacityError) {
                        String strBuildDeviceCapabilityReport3 = vVideoCompressionEngine.buildDeviceCapabilityReport();
                        message2 = e.getMessage();
                        if (message2 == null) {
                            message2 = "codec error";
                        }
                        exportError = "Compression failed - " + message2 + ".\n\n" + strBuildDeviceCapabilityReport3;
                    } else {
                        message = e.getMessage();
                        if (message == null) {
                            message = e.getClass().getSimpleName();
                        }
                        exportError = "Failed to start compression: " + message;
                    }
                    Log.e(LOG_TAG, exportError, exc);
                    callback.onError(exportError);
                }
            } catch (Exception e5) {
                e = e5;
                vVideoCompressionEngine = this;
            }
        } catch (Exception e6) {
            e = e6;
        }
    }

    /* JADX INFO: renamed from: com.v_chat_sdk.v_video_compressor.VVideoCompressionEngine$compressVideoWithRetry$1, reason: invalid class name */
    /* JADX INFO: compiled from: VVideoCompressionEngine.kt */
    @Metadata(d1 = {"\u0000+\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0007\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000*\u0001\u0000\b\n\u0018\u00002\u00020\u0001J\u0018\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\tH\u0016J \u0010\n\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\t2\u0006\u0010\u000b\u001a\u00020\fH\u0016R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006\r"}, d2 = {"com/v_chat_sdk/v_video_compressor/VVideoCompressionEngine$compressVideoWithRetry$1", "Landroidx/media3/transformer/Transformer$Listener;", "lastProgress", "", "onCompleted", "", "composition", "Landroidx/media3/transformer/Composition;", "exportResult", "Landroidx/media3/transformer/ExportResult;", "onError", "exportException", "Landroidx/media3/transformer/ExportException;", "v_video_compressor_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
    public static final class AnonymousClass1 implements Transformer.Listener {
        final /* synthetic */ CompressionCallback $callback;
        final /* synthetic */ VVideoCompressionConfig $config;
        final /* synthetic */ File $outputDirectory;
        final /* synthetic */ File $outputFile;
        final /* synthetic */ int $retryCount;
        final /* synthetic */ long $startTime;
        final /* synthetic */ VVideoInfo $videoInfo;
        private float lastProgress;

        AnonymousClass1(File file, CompressionCallback compressionCallback, long j, VVideoInfo vVideoInfo, VVideoCompressionConfig vVideoCompressionConfig, int i, File file2) {
            this.$outputFile = file;
            this.$callback = compressionCallback;
            this.$startTime = j;
            this.$videoInfo = vVideoInfo;
            this.$config = vVideoCompressionConfig;
            this.$retryCount = i;
            this.$outputDirectory = file2;
        }

        @Override // androidx.media3.transformer.Transformer.Listener
        public void onCompleted(Composition composition, ExportResult exportResult) throws Throwable {
            File file;
            Intrinsics.checkNotNullParameter(composition, "composition");
            Intrinsics.checkNotNullParameter(exportResult, "exportResult");
            VVideoCompressionEngine.this.stopProgressTracking();
            if (VVideoCompressionEngine.this.isCancelled.get()) {
                try {
                    this.$outputFile.delete();
                } catch (Exception unused) {
                }
                this.$callback.onError("Compression was cancelled");
                return;
            }
            long jCurrentTimeMillis = System.currentTimeMillis() - this.$startTime;
            Handler handler = VVideoCompressionEngine.this.mainHandler;
            final CompressionCallback compressionCallback = this.$callback;
            handler.post(new Runnable() { // from class: com.v_chat_sdk.v_video_compressor.VVideoCompressionEngine$compressVideoWithRetry$1$$ExternalSyntheticLambda0
                @Override // java.lang.Runnable
                public final void run() {
                    compressionCallback.onProgress(1.0f);
                }
            });
            long length = this.$outputFile.length();
            long fileSizeBytes = this.$videoInfo.getFileSizeBytes();
            boolean z = this.$config.getFallbackToOriginalIfNotSmaller() && !VVideoCropGeometry.INSTANCE.requiresEncodedOutput(this.$videoInfo, this.$config) && ((float) length) / ((float) fileSizeBytes) >= 0.95f;
            if (z) {
                System.out.println((Object) ("Issue #7: Compressed file (" + length + "B) is too close to original (" + fileSizeBytes + "B). Using original."));
                try {
                    this.$outputFile.delete();
                } catch (Exception unused2) {
                }
                file = new File(this.$videoInfo.getPath());
            } else {
                file = this.$outputFile;
            }
            File file2 = file;
            VVideoCompressionResult vVideoCompressionResultCreateCompressionResult = VVideoCompressionEngine.this.createCompressionResult(this.$videoInfo, file2, this.$config.getQuality(), jCurrentTimeMillis, z);
            if (this.$config.getDeleteOriginal() && !Intrinsics.areEqual(file2, new File(this.$videoInfo.getPath()))) {
                try {
                    new File(this.$videoInfo.getPath()).delete();
                } catch (Exception unused3) {
                }
            }
            this.$callback.onComplete(vVideoCompressionResultCreateCompressionResult);
        }

        @Override // androidx.media3.transformer.Transformer.Listener
        public void onError(Composition composition, ExportResult exportResult, ExportException exportException) {
            VVideoCompressQuality nextLowerQuality;
            String str;
            Intrinsics.checkNotNullParameter(composition, "composition");
            Intrinsics.checkNotNullParameter(exportResult, "exportResult");
            Intrinsics.checkNotNullParameter(exportException, "exportException");
            VVideoCompressionEngine.this.stopProgressTracking();
            try {
                this.$outputFile.delete();
            } catch (Exception unused) {
            }
            ExportException exportException2 = exportException;
            if (VVideoExportError.INSTANCE.shouldRetry(exportException.errorCode, VVideoCompressionEngine.this.isCodecCapacityError(exportException2), this.$retryCount, 3)) {
                boolean zIsMuxerError = VVideoExportError.INSTANCE.isMuxerError(exportException.errorCode);
                if (!zIsMuxerError) {
                    nextLowerQuality = VVideoCompressionEngine.this.getNextLowerQuality(this.$config.getQuality());
                } else {
                    nextLowerQuality = this.$config.getQuality();
                }
                VVideoCompressQuality vVideoCompressQuality = nextLowerQuality;
                if (vVideoCompressQuality != null) {
                    if (zIsMuxerError) {
                        str = "MP4 muxer failure";
                    } else {
                        str = "Codec capacity issue";
                    }
                    Log.w(VVideoCompressionEngine.LOG_TAG, str + " detected; retrying with " + vVideoCompressQuality.getDisplayName(), exportException2);
                    Handler handler = VVideoCompressionEngine.this.mainHandler;
                    final CompressionCallback compressionCallback = this.$callback;
                    handler.post(new Runnable() { // from class: com.v_chat_sdk.v_video_compressor.VVideoCompressionEngine$compressVideoWithRetry$1$$ExternalSyntheticLambda1
                        @Override // java.lang.Runnable
                        public final void run() {
                            compressionCallback.onProgress(0.0f);
                        }
                    });
                    VVideoCompressionEngine.this.compressVideoWithRetry(this.$videoInfo, VVideoCompressionConfig.copy$default(this.$config, vVideoCompressQuality, null, false, false, false, null, 62, null), this.$outputDirectory, this.$callback, this.$retryCount + 1);
                    return;
                }
            }
            String exportError = VVideoCompressionEngine.this.formatExportError(exportException, this.$outputDirectory);
            Log.e(VVideoCompressionEngine.LOG_TAG, exportError, exportException2);
            this.$callback.onError(exportError);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final VVideoCompressQuality getNextLowerQuality(VVideoCompressQuality currentQuality) {
        if (currentQuality == VVideoCompressQuality.ULTRA_LOW) {
            return null;
        }
        return downgradeQuality(currentQuality);
    }

    static /* synthetic */ String selectOptimalVideoCodec$default(VVideoCompressionEngine vVideoCompressionEngine, VVideoInfo vVideoInfo, VVideoCompressionConfig vVideoCompressionConfig, Double d, int i, Object obj) {
        if ((i & 4) != 0) {
            d = null;
        }
        return vVideoCompressionEngine.selectOptimalVideoCodec(vVideoInfo, vVideoCompressionConfig, d);
    }

    private final String selectOptimalVideoCodec(VVideoInfo videoInfo, VVideoCompressionConfig config, Double sourceFrameRate) {
        VVideoCodec videoCodec;
        boolean z = videoInfo.getWidth() >= WIDTH_4K || videoInfo.getHeight() >= HEIGHT_4K;
        int width = videoInfo.getWidth();
        int height = videoInfo.getHeight();
        VVideoCompressQuality quality = config.getQuality();
        VVideoAdvancedConfig advanced = config.getAdvanced();
        Integer customWidth = advanced != null ? advanced.getCustomWidth() : null;
        VVideoAdvancedConfig advanced2 = config.getAdvanced();
        Pair<Integer, Integer> pairCalculateAspectRatioPreservingDimensions = calculateAspectRatioPreservingDimensions(width, height, quality, customWidth, advanced2 != null ? advanced2.getCustomHeight() : null);
        int iIntValue = pairCalculateAspectRatioPreservingDimensions.component1().intValue();
        int iIntValue2 = pairCalculateAspectRatioPreservingDimensions.component2().intValue();
        int iTargetBitrate = VVideoEncodingSettings.INSTANCE.targetBitrate(iIntValue, iIntValue2, config.getQuality(), config.getAdvanced());
        VVideoEncodingSettings vVideoEncodingSettings = VVideoEncodingSettings.INSTANCE;
        VVideoAdvancedConfig advanced3 = config.getAdvanced();
        double dEffectiveFrameRate = vVideoEncodingSettings.effectiveFrameRate(advanced3 != null ? advanced3.getFrameRate() : null, sourceFrameRate);
        VVideoAdvancedConfig advanced4 = config.getAdvanced();
        if (advanced4 == null || (videoCodec = advanced4.getVideoCodec()) == null) {
            if (!z) {
                return (config.getQuality() != VVideoCompressQuality.HIGH && validateCompleteCodecConfiguration(iIntValue, iIntValue2, iTargetBitrate, dEffectiveFrameRate, "video/hevc")) ? "video/hevc" : "video/avc";
            }
            if (validateCompleteCodecConfiguration(iIntValue, iIntValue2, iTargetBitrate, dEffectiveFrameRate, "video/avc")) {
                System.out.println((Object) "4K FIX: Using H.264 for 4K (validated)");
                return "video/avc";
            }
            if (validateCompleteCodecConfiguration(iIntValue, iIntValue2, iTargetBitrate, dEffectiveFrameRate, "video/hevc")) {
                System.out.println((Object) "4K FIX: Using H.265 for 4K (H.264 validation failed)");
                return "video/hevc";
            }
            System.out.println((Object) "4K FIX: No validated codec found, using H.264 as fallback");
            return "video/avc";
        }
        int i = WhenMappings.$EnumSwitchMapping$2[videoCodec.ordinal()];
        if (i == 1) {
            return "video/avc";
        }
        if (i != 2) {
            throw new NoWhenBranchMatchedException();
        }
        if (validateCompleteCodecConfiguration(iIntValue, iIntValue2, iTargetBitrate, dEffectiveFrameRate, "video/hevc")) {
            System.out.println((Object) "4K FIX: H.265 validated successfully");
            return "video/hevc";
        }
        System.out.println((Object) "4K FIX: H.265 validation failed, falling back to H.264");
        return "video/avc";
    }

    private final boolean supportsH264For4K() {
        try {
            MediaCodecInfo[] codecInfos = new MediaCodecList(0).getCodecInfos();
            Intrinsics.checkNotNullExpressionValue(codecInfos, "getCodecInfos(...)");
            for (MediaCodecInfo mediaCodecInfo : codecInfos) {
                if (mediaCodecInfo.isEncoder()) {
                    String[] supportedTypes = mediaCodecInfo.getSupportedTypes();
                    Intrinsics.checkNotNullExpressionValue(supportedTypes, "getSupportedTypes(...)");
                    if (ArraysKt.contains(supportedTypes, "video/avc")) {
                        Intrinsics.checkNotNull(mediaCodecInfo);
                        if (checkCodecFormat(mediaCodecInfo, "video/avc")) {
                            return true;
                        }
                    } else {
                        continue;
                    }
                }
            }
        } catch (Exception unused) {
        }
        return false;
    }

    private final boolean supportsH265For4K() {
        try {
            MediaCodecInfo[] codecInfos = new MediaCodecList(0).getCodecInfos();
            Intrinsics.checkNotNullExpressionValue(codecInfos, "getCodecInfos(...)");
            for (MediaCodecInfo mediaCodecInfo : codecInfos) {
                if (mediaCodecInfo.isEncoder()) {
                    String[] supportedTypes = mediaCodecInfo.getSupportedTypes();
                    Intrinsics.checkNotNullExpressionValue(supportedTypes, "getSupportedTypes(...)");
                    if (ArraysKt.contains(supportedTypes, "video/hevc")) {
                        Intrinsics.checkNotNull(mediaCodecInfo);
                        if (checkCodecFormat(mediaCodecInfo, "video/hevc")) {
                            return true;
                        }
                    } else {
                        continue;
                    }
                }
            }
        } catch (Exception unused) {
        }
        return false;
    }

    private final boolean hasH265Support() {
        try {
            MediaCodecInfo[] codecInfos = new MediaCodecList(0).getCodecInfos();
            Intrinsics.checkNotNullExpressionValue(codecInfos, "getCodecInfos(...)");
            for (MediaCodecInfo mediaCodecInfo : codecInfos) {
                if (mediaCodecInfo.isEncoder()) {
                    String[] supportedTypes = mediaCodecInfo.getSupportedTypes();
                    Intrinsics.checkNotNullExpressionValue(supportedTypes, "getSupportedTypes(...)");
                    if (ArraysKt.contains(supportedTypes, "video/hevc")) {
                        return true;
                    }
                }
            }
        } catch (Exception unused) {
        }
        return false;
    }

    /* JADX INFO: renamed from: com.v_chat_sdk.v_video_compressor.VVideoCompressionEngine$startProgressTracking$1, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: VVideoCompressionEngine.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 2, 0}, xi = 48)
    @DebugMetadata(c = "com.v_chat_sdk.v_video_compressor.VVideoCompressionEngine$startProgressTracking$1", f = "VVideoCompressionEngine.kt", i = {0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5}, l = {1444, 1456, 1492, 1500, 1505, 1508}, m = "invokeSuspend", n = {"startTime", "videoDurationMs", "originalFileSize", "lastMemoryCheck", "startTime", "videoDurationMs", "originalFileSize", "lastMemoryCheck", "currentTime", "elapsedTime", "startTime", "videoDurationMs", "originalFileSize", "lastMemoryCheck", "currentTime", "elapsedTime", "timeProgress", "fileSizeProgress", "hybridProgress", "smoothedProgress", "startTime", "videoDurationMs", "originalFileSize", "lastMemoryCheck", "currentTime", "elapsedTime", "timeProgress", "fileSizeProgress", "hybridProgress", "smoothedProgress", "e", "startTime", "videoDurationMs", "originalFileSize", "lastMemoryCheck", "e", "startTime", "videoDurationMs", "originalFileSize", "lastMemoryCheck"}, s = {"J$0", "J$1", "J$2", "J$3", "J$0", "J$1", "J$2", "J$3", "J$4", "J$5", "J$0", "J$1", "J$2", "J$3", "J$4", "J$5", "F$0", "F$1", "F$2", "F$3", "J$0", "J$1", "J$2", "J$3", "J$4", "J$5", "F$0", "F$1", "F$2", "F$3", "L$0", "J$0", "J$1", "J$2", "J$3", "L$0", "J$0", "J$1", "J$2", "J$3"}, v = 1)
    static final class C19311 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ CompressionCallback $callback;
        final /* synthetic */ File $outputFile;
        final /* synthetic */ VVideoInfo $videoInfo;
        float F$0;
        float F$1;
        float F$2;
        float F$3;
        long J$0;
        long J$1;
        long J$2;
        long J$3;
        long J$4;
        long J$5;
        Object L$0;
        int label;
        final /* synthetic */ VVideoCompressionEngine this$0;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        C19311(VVideoInfo vVideoInfo, VVideoCompressionEngine vVideoCompressionEngine, File file, CompressionCallback compressionCallback, Continuation<? super C19311> continuation) {
            super(2, continuation);
            this.$videoInfo = vVideoInfo;
            this.this$0 = vVideoCompressionEngine;
            this.$outputFile = file;
            this.$callback = compressionCallback;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new C19311(this.$videoInfo, this.this$0, this.$outputFile, this.$callback, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((C19311) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        /* JADX WARN: Code duplicated, block: B:69:0x01bd  */
        /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:115:0x02c3 -> B:116:0x02c8). Please report as a decompilation issue!!! */
        /*  JADX ERROR: JadxRuntimeException in pass: RegionMakerVisitor
            jadx.core.utils.exceptions.JadxRuntimeException: Not found exit edge by exit block: B:39:0x0117
            	at jadx.core.dex.visitors.regions.maker.LoopRegionMaker.checkLoopExits(LoopRegionMaker.java:272)
            	at jadx.core.dex.visitors.regions.maker.LoopRegionMaker.makeLoopRegion(LoopRegionMaker.java:237)
            	at jadx.core.dex.visitors.regions.maker.LoopRegionMaker.process(LoopRegionMaker.java:80)
            	at jadx.core.dex.visitors.regions.maker.RegionMaker.traverse(RegionMaker.java:92)
            	at jadx.core.dex.visitors.regions.maker.RegionMaker.makeRegion(RegionMaker.java:69)
            	at jadx.core.dex.visitors.regions.maker.IfRegionMaker.process(IfRegionMaker.java:117)
            	at jadx.core.dex.visitors.regions.maker.RegionMaker.traverse(RegionMaker.java:109)
            	at jadx.core.dex.visitors.regions.maker.RegionMaker.makeRegion(RegionMaker.java:69)
            	at jadx.core.dex.visitors.regions.maker.IfRegionMaker.process(IfRegionMaker.java:117)
            	at jadx.core.dex.visitors.regions.maker.RegionMaker.traverse(RegionMaker.java:109)
            	at jadx.core.dex.visitors.regions.maker.RegionMaker.makeRegion(RegionMaker.java:69)
            	at jadx.core.dex.visitors.regions.maker.IfRegionMaker.process(IfRegionMaker.java:111)
            	at jadx.core.dex.visitors.regions.maker.RegionMaker.traverse(RegionMaker.java:109)
            	at jadx.core.dex.visitors.regions.maker.RegionMaker.makeRegion(RegionMaker.java:69)
            	at jadx.core.dex.visitors.regions.maker.SwitchRegionMaker.addCases(SwitchRegionMaker.java:127)
            	at jadx.core.dex.visitors.regions.maker.SwitchRegionMaker.process(SwitchRegionMaker.java:75)
            	at jadx.core.dex.visitors.regions.maker.RegionMaker.traverse(RegionMaker.java:115)
            	at jadx.core.dex.visitors.regions.maker.RegionMaker.makeRegion(RegionMaker.java:69)
            	at jadx.core.dex.visitors.regions.maker.RegionMaker.makeMthRegion(RegionMaker.java:49)
            	at jadx.core.dex.visitors.regions.RegionMakerVisitor.visit(RegionMakerVisitor.java:25)
            */
        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final java.lang.Object invokeSuspend(java.lang.Object r31) {
            /*
                Method dump skipped, instruction units count: 784
                To view this dump add '--comments-level debug' option
            */
            throw new UnsupportedOperationException("Method not decompiled: com.v_chat_sdk.v_video_compressor.VVideoCompressionEngine.C19311.invokeSuspend(java.lang.Object):java.lang.Object");
        }

        /* JADX INFO: renamed from: com.v_chat_sdk.v_video_compressor.VVideoCompressionEngine$startProgressTracking$1$1, reason: invalid class name and collision with other inner class name */
        /* JADX INFO: compiled from: VVideoCompressionEngine.kt */
        @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 2, 0}, xi = 48)
        @DebugMetadata(c = "com.v_chat_sdk.v_video_compressor.VVideoCompressionEngine$startProgressTracking$1$1", f = "VVideoCompressionEngine.kt", i = {}, l = {}, m = "invokeSuspend", n = {}, s = {}, v = 1)
        static final class C11871 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
            final /* synthetic */ CompressionCallback $callback;
            final /* synthetic */ float $smoothedProgress;
            int label;

            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            C11871(CompressionCallback compressionCallback, float f, Continuation<? super C11871> continuation) {
                super(2, continuation);
                this.$callback = compressionCallback;
                this.$smoothedProgress = f;
            }

            @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
            public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
                return new C11871(this.$callback, this.$smoothedProgress, continuation);
            }

            @Override // kotlin.jvm.functions.Function2
            public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
                return ((C11871) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
            }

            @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
            public final Object invokeSuspend(Object obj) {
                IntrinsicsKt.getCOROUTINE_SUSPENDED();
                if (this.label != 0) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ResultKt.throwOnFailure(obj);
                try {
                    this.$callback.onProgress(this.$smoothedProgress);
                } catch (Exception unused) {
                }
                return Unit.INSTANCE;
            }
        }
    }

    private final void startProgressTracking(VVideoInfo videoInfo, File outputFile, CompressionCallback callback) {
        this.progressJob = BuildersKt__Builders_commonKt.launch$default(CoroutineScopeKt.CoroutineScope(Dispatchers.getIO()), null, null, new C19311(videoInfo, this, outputFile, callback, null), 3, null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final long getCachedFileSize(File file) {
        long jCurrentTimeMillis = System.currentTimeMillis();
        String absolutePath = file.getAbsolutePath();
        if (jCurrentTimeMillis - this.lastFileSizeCheck < 500) {
            long j = this.lastFileSize;
            if (j > 0) {
                return j;
            }
        }
        try {
            long length = file.length();
            this.lastFileSize = length;
            this.lastFileSizeCheck = jCurrentTimeMillis;
            this.fileSizeCache.put(absolutePath, Long.valueOf(length));
            return length;
        } catch (Exception unused) {
            return this.lastFileSize;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void stopProgressTracking() {
        this.isCompressionActive.set(false);
        Job job = this.progressJob;
        if (job != null) {
            Job.DefaultImpls.cancel$default(job, (CancellationException) null, 1, (Object) null);
        }
        this.progressJob = null;
        this.fileSizeCache.clear();
        System.gc();
    }

    public final void cancelCompression() {
        this.isCancelled.set(true);
        stopProgressTracking();
        Transformer transformer = this.transformer;
        if (transformer != null) {
            transformer.cancel();
        }
        releaseTransformer();
    }

    public final boolean isCompressing() {
        return this.isCompressionActive.get() && this.transformer != null;
    }

    private final String buildDeviceCapabilityReport() {
        try {
            DeviceCapabilityResult deviceCapabilityResultCanHandle4KCompression = canHandle4KCompression();
            CapabilityDetails details = deviceCapabilityResultCanHandle4KCompression.getDetails();
            if (details != null) {
                return StringsKt.trimIndent("\n                Device Capabilities:\n                - RAM: " + details.getTotalMemoryMB() + "MB total, " + details.getAvailableMemoryMB() + "MB available\n                - CPU: " + details.getCpuCores() + " cores, " + details.getCpuArchitecture() + "\n                - API Level: " + Build.VERSION.SDK_INT + "\n                - Performance Score: " + details.getPerformanceScore() + "\n                - H.264 4K Support: " + supportsH264For4K() + "\n                - H.265 4K Support: " + supportsH265For4K() + "\n\n                Recommendation: Try using MEDIUM quality or lower for better compatibility.\n                ");
            }
            return deviceCapabilityResultCanHandle4KCompression.getReason();
        } catch (Exception e) {
            return "Unable to analyze device capabilities: " + e.getMessage();
        }
    }

    private final int alignTo16(int dimension) {
        return (dimension / 16) * 16;
    }

    static /* synthetic */ Pair calculateAspectRatioPreservingDimensions$default(VVideoCompressionEngine vVideoCompressionEngine, int i, int i2, VVideoCompressQuality vVideoCompressQuality, Integer num, Integer num2, int i3, Object obj) {
        if ((i3 & 8) != 0) {
            num = null;
        }
        if ((i3 & 16) != 0) {
            num2 = null;
        }
        return vVideoCompressionEngine.calculateAspectRatioPreservingDimensions(i, i2, vVideoCompressQuality, num, num2);
    }

    private final Pair<Integer, Integer> calculateAspectRatioPreservingDimensions(int originalWidth, int originalHeight, VVideoCompressQuality quality, Integer customWidth, Integer customHeight) {
        Pair<Integer, Integer> pair;
        int iIntValue;
        int iIntValue2;
        float f = originalWidth / originalHeight;
        if (customWidth != null && customHeight != null) {
            if (Math.abs((customWidth.intValue() / customHeight.intValue()) - f) < 0.01f) {
                iIntValue = customWidth.intValue();
                iIntValue2 = customHeight.intValue();
            } else {
                iIntValue = customWidth.intValue();
                iIntValue2 = (int) (customWidth.intValue() / f);
            }
            int iAlignTo16 = iIntValue % 16 != 0 ? alignTo16(iIntValue) : iIntValue;
            int iAlignTo17 = iIntValue2 % 16 != 0 ? alignTo16(iIntValue2) : iIntValue2;
            if (iAlignTo16 > 0 && iAlignTo17 > 0) {
                if (iAlignTo16 != iIntValue || iAlignTo17 != iIntValue2) {
                    Log.d(LOG_TAG, "Dimension alignment: " + iIntValue + "x" + iIntValue2 + " → " + iAlignTo16 + "x" + iAlignTo17 + " (16-pixel boundary)");
                }
                return new Pair<>(Integer.valueOf(iAlignTo16), Integer.valueOf(iAlignTo17));
            }
            return new Pair<>(Integer.valueOf(iIntValue), Integer.valueOf(iIntValue2));
        }
        int i = WhenMappings.$EnumSwitchMapping$0[quality.ordinal()];
        if (i == 1) {
            int iMax = Math.max(WIDTH_1080P, HEIGHT_1080P);
            Pair<Integer, Integer> pairCalculateDimensionsToFitBounds = calculateDimensionsToFitBounds(originalWidth, originalHeight, iMax, iMax);
            int iIntValue3 = pairCalculateDimensionsToFitBounds.component1().intValue();
            int iIntValue4 = pairCalculateDimensionsToFitBounds.component2().intValue();
            if (originalWidth < iIntValue3 || originalHeight < iIntValue4) {
                pair = new Pair<>(Integer.valueOf(originalWidth), Integer.valueOf(originalHeight));
            } else {
                pair = new Pair<>(Integer.valueOf(iIntValue3), Integer.valueOf(iIntValue4));
            }
        } else if (i == 2) {
            int iMax2 = Math.max(1280, HEIGHT_720P);
            pair = calculateDimensionsToFitBounds(originalWidth, originalHeight, iMax2, iMax2);
        } else if (i == 3) {
            int iMax3 = Math.max(WIDTH_480P, HEIGHT_480P);
            pair = calculateDimensionsToFitBounds(originalWidth, originalHeight, iMax3, iMax3);
        } else if (i == 4) {
            int iMax4 = Math.max(WIDTH_360P, HEIGHT_360P);
            pair = calculateDimensionsToFitBounds(originalWidth, originalHeight, iMax4, iMax4);
        } else {
            if (i != 5) {
                throw new NoWhenBranchMatchedException();
            }
            int iMax5 = Math.max(WIDTH_240P, 240);
            pair = calculateDimensionsToFitBounds(originalWidth, originalHeight, iMax5, iMax5);
        }
        int iIntValue5 = pair.getFirst().intValue();
        int iIntValue6 = pair.getSecond().intValue();
        int iAlignTo18 = iIntValue5 % 16 != 0 ? alignTo16(iIntValue5) : iIntValue5;
        int iAlignTo19 = iIntValue6 % 16 != 0 ? alignTo16(iIntValue6) : iIntValue6;
        if (iAlignTo18 != iIntValue5 || iAlignTo19 != iIntValue6) {
            Log.d(LOG_TAG, "Dimension alignment: " + iIntValue5 + "x" + iIntValue6 + " → " + iAlignTo18 + "x" + iAlignTo19 + " (16-pixel boundary)");
        }
        return new Pair<>(Integer.valueOf(iAlignTo18), Integer.valueOf(iAlignTo19));
    }

    private final Pair<Integer, Integer> calculateDimensionsToFitBounds(int originalWidth, int originalHeight, int maxWidth, int maxHeight) {
        float f = originalWidth;
        float f2 = originalHeight;
        float f3 = f / f2;
        if (f / maxWidth > f2 / maxHeight) {
            int iMin = Math.min(originalWidth, maxWidth);
            return new Pair<>(Integer.valueOf(iMin), Integer.valueOf((int) (iMin / f3)));
        }
        int iMin2 = Math.min(originalHeight, maxHeight);
        return new Pair<>(Integer.valueOf((int) (iMin2 * f3)), Integer.valueOf(iMin2));
    }

    static /* synthetic */ Triple getQualitySettings$default(VVideoCompressionEngine vVideoCompressionEngine, VVideoInfo vVideoInfo, VVideoCompressQuality vVideoCompressQuality, VVideoAdvancedConfig vVideoAdvancedConfig, int i, Object obj) {
        if ((i & 4) != 0) {
            vVideoAdvancedConfig = null;
        }
        return vVideoCompressionEngine.getQualitySettings(vVideoInfo, vVideoCompressQuality, vVideoAdvancedConfig);
    }

    private final Triple<Integer, Integer, Integer> getQualitySettings(VVideoInfo video, VVideoCompressQuality quality, VVideoAdvancedConfig advanced) {
        Pair pairCalculateAspectRatioPreservingDimensions$default = calculateAspectRatioPreservingDimensions$default(this, video.getWidth(), video.getHeight(), quality, null, null, 24, null);
        int iIntValue = ((Number) pairCalculateAspectRatioPreservingDimensions$default.component1()).intValue();
        int iIntValue2 = ((Number) pairCalculateAspectRatioPreservingDimensions$default.component2()).intValue();
        return new Triple<>(Integer.valueOf(iIntValue), Integer.valueOf(iIntValue2), Integer.valueOf(VVideoEncodingSettings.INSTANCE.targetBitrate(iIntValue, iIntValue2, quality, advanced)));
    }

    static /* synthetic */ EditedMediaItem createEditedMediaItemWithQuality$default(VVideoCompressionEngine vVideoCompressionEngine, MediaItem mediaItem, VVideoInfo vVideoInfo, VVideoCompressionConfig vVideoCompressionConfig, VVideoCropPlan vVideoCropPlan, Double d, int i, Object obj) {
        if ((i & 8) != 0) {
            vVideoCropPlan = null;
        }
        if ((i & 16) != 0) {
            d = null;
        }
        return vVideoCompressionEngine.createEditedMediaItemWithQuality(mediaItem, vVideoInfo, vVideoCompressionConfig, vVideoCropPlan, d);
    }

    /* JADX WARN: Code duplicated, block: B:14:0x0034  */
    /* JADX WARN: Code duplicated, block: B:42:0x00d6  */
    /* JADX WARN: Code duplicated, block: B:43:0x00db  */
    /* JADX WARN: Code duplicated, block: B:45:0x00de A[DONT_INVERT] */
    /* JADX WARN: Code duplicated, block: B:46:0x00e0  */
    /* JADX WARN: Code duplicated, block: B:47:0x00e5  */
    /* JADX WARN: Code duplicated, block: B:50:0x00e9  */
    /* JADX WARN: Code duplicated, block: B:51:0x00ec  */
    /* JADX WARN: Code duplicated, block: B:52:0x00ee  */
    /* JADX WARN: Code duplicated, block: B:55:0x00fa  */
    /* JADX WARN: Code duplicated, block: B:57:0x00fe  */
    /* JADX WARN: Code duplicated, block: B:60:0x010a  */
    /* JADX WARN: Code duplicated, block: B:63:0x0119  */
    /* JADX WARN: Code duplicated, block: B:64:0x011c  */
    /* JADX WARN: Code duplicated, block: B:68:0x0148  */
    /* JADX WARN: Code duplicated, block: B:71:0x0154  */
    /* JADX WARN: Code duplicated, block: B:74:0x0183 A[DONT_INVERT] */
    /* JADX WARN: Code duplicated, block: B:75:0x0185  */
    /* JADX WARN: Code duplicated, block: B:76:0x018c  */
    /* JADX WARN: Code duplicated, block: B:79:0x01c3  */
    /* JADX WARN: Code duplicated, block: B:81:0x01ed  */
    /* JADX WARN: Code duplicated, block: B:82:0x01f2  */
    /* JADX WARN: Code duplicated, block: B:85:0x0219  */
    /* JADX WARN: Code duplicated, block: B:89:0x0229  */
    /* JADX WARN: Instruction removed from duplicated block: B:71:0x0154, please report this as an issue */
    private final EditedMediaItem createEditedMediaItemWithQuality(MediaItem mediaItem, VVideoInfo video, VVideoCompressionConfig config, VVideoCropPlan cropPlan, Double sourceFrameRate) {
        Integer rotation;
        int i;
        VVideoInfo vVideoInfo;
        Pair<Integer, Integer> pair;
        Pair<Integer, Integer> pairCalculateAspectRatioPreservingDimensions;
        Integer trimStartMs;
        long jIntValue;
        long durationMillis;
        MediaItem.LocalConfiguration localConfiguration;
        Uri uri;
        MediaItem mediaItemBuild;
        Integer trimEndMs;
        Integer trimStartMs2;
        ArrayList arrayList;
        Double dFrameDropTarget;
        int presentationLayout;
        EditedMediaItem.Builder effects;
        float fCropRotationDegrees;
        Integer trimEndMs2;
        VVideoSize outputSize;
        Integer rotation2;
        VVideoAdvancedConfig advanced = config.getAdvanced();
        boolean zAreEqual = advanced != null ? Intrinsics.areEqual((Object) advanced.getAutoCorrectOrientation(), (Object) true) : false;
        int videoRotation = zAreEqual ? getVideoRotation(video.getPath()) : 0;
        if (cropPlan == null) {
            if (advanced != null && (rotation = advanced.getRotation()) != null) {
                videoRotation = rotation.intValue();
            } else if (!zAreEqual) {
                i = 0;
            }
            i = videoRotation;
        } else if (advanced == null || (rotation2 = advanced.getRotation()) == null) {
            i = 0;
        } else {
            videoRotation = rotation2.intValue();
            i = videoRotation;
        }
        if (cropPlan != null && (outputSize = cropPlan.getOutputSize()) != null) {
            pairCalculateAspectRatioPreservingDimensions = new Pair<>(Integer.valueOf(outputSize.getWidth()), Integer.valueOf(outputSize.getHeight()));
        } else {
            if (video.getWidth() > 0 && video.getHeight() > 0) {
                pairCalculateAspectRatioPreservingDimensions = calculateAspectRatioPreservingDimensions(video.getWidth(), video.getHeight(), config.getQuality(), advanced != null ? advanced.getCustomWidth() : null, advanced != null ? advanced.getCustomHeight() : null);
            } else {
                vVideoInfo = video;
                Triple<Integer, Integer, Integer> qualitySettings = getQualitySettings(vVideoInfo, config.getQuality(), advanced);
                pair = new Pair<>(Integer.valueOf(qualitySettings.component1().intValue()), Integer.valueOf(qualitySettings.component2().intValue()));
            }
            int iIntValue = pair.component1().intValue();
            int iIntValue2 = pair.component2().intValue();
            if (advanced != null) {
                trimStartMs = advanced.getTrimStartMs();
            } else {
                trimStartMs = null;
            }
            if (trimStartMs != null) {
                if (advanced != null || (trimStartMs2 = advanced.getTrimStartMs()) == null) {
                    jIntValue = 0;
                } else {
                    jIntValue = trimStartMs2.intValue();
                }
                if (advanced != null || (trimEndMs = advanced.getTrimEndMs()) == null) {
                    durationMillis = vVideoInfo.getDurationMillis();
                } else {
                    durationMillis = trimEndMs.intValue();
                }
                MediaItem.Builder builder = new MediaItem.Builder();
                localConfiguration = mediaItem.localConfiguration;
                if (localConfiguration != null) {
                    uri = localConfiguration.uri;
                } else {
                    uri = null;
                }
                mediaItemBuild = builder.setUri(uri).setClippingConfiguration(new MediaItem.ClippingConfiguration.Builder().setStartPositionMs(jIntValue).setEndPositionMs(durationMillis).build()).build();
                Intrinsics.checkNotNull(mediaItemBuild);
            } else {
                if (advanced != null) {
                    trimEndMs2 = advanced.getTrimEndMs();
                } else {
                    trimEndMs2 = null;
                }
                if (trimEndMs2 != null) {
                    if (advanced != null) {
                        jIntValue = 0;
                    } else {
                        jIntValue = 0;
                    }
                    if (advanced != null) {
                        durationMillis = vVideoInfo.getDurationMillis();
                    } else {
                        durationMillis = vVideoInfo.getDurationMillis();
                    }
                    MediaItem.Builder builder2 = new MediaItem.Builder();
                    localConfiguration = mediaItem.localConfiguration;
                    if (localConfiguration != null) {
                        uri = localConfiguration.uri;
                    } else {
                        uri = null;
                    }
                    mediaItemBuild = builder2.setUri(uri).setClippingConfiguration(new MediaItem.ClippingConfiguration.Builder().setStartPositionMs(jIntValue).setEndPositionMs(durationMillis).build()).build();
                    Intrinsics.checkNotNull(mediaItemBuild);
                } else {
                    mediaItemBuild = mediaItem;
                }
            }
            arrayList = new ArrayList();
            dFrameDropTarget = VVideoEncodingSettings.INSTANCE.frameDropTarget(advanced != null ? advanced.getFrameRate() : null, sourceFrameRate);
            if (dFrameDropTarget != null) {
                double dDoubleValue = dFrameDropTarget.doubleValue();
                FrameDropEffect frameDropEffectCreateDefaultFrameDropEffect = FrameDropEffect.createDefaultFrameDropEffect((float) dDoubleValue);
                Intrinsics.checkNotNullExpressionValue(frameDropEffectCreateDefaultFrameDropEffect, "createDefaultFrameDropEffect(...)");
                arrayList.add(frameDropEffectCreateDefaultFrameDropEffect);
                System.out.println((Object) ("VVideoCompressionEngine: Requesting output frame rate " + dDoubleValue + "fps"));
            }
            if (i != 0) {
                if (cropPlan != null) {
                    fCropRotationDegrees = VVideoCropGeometry.INSTANCE.cropRotationDegrees(i);
                } else {
                    fCropRotationDegrees = i;
                }
                ScaleAndRotateTransformation scaleAndRotateTransformationBuild = new ScaleAndRotateTransformation.Builder().setRotationDegrees(fCropRotationDegrees).build();
                Intrinsics.checkNotNullExpressionValue(scaleAndRotateTransformationBuild, "build(...)");
                arrayList.add(scaleAndRotateTransformationBuild);
                System.out.println((Object) ("VVideoCompressionEngine: Applied " + i + "° rotation (auto-correct: " + zAreEqual + ")"));
            }
            if (cropPlan != null) {
                arrayList.add(new Crop(cropPlan.getMedia3Crop().getLeft(), cropPlan.getMedia3Crop().getRight(), cropPlan.getMedia3Crop().getBottom(), cropPlan.getMedia3Crop().getTop()));
            }
            if (cropPlan != null) {
                presentationLayout = cropPlan.getPresentationLayout();
            } else {
                presentationLayout = 0;
            }
            Presentation presentationCreateForWidthAndHeight = Presentation.createForWidthAndHeight(iIntValue, iIntValue2, presentationLayout);
            Intrinsics.checkNotNullExpressionValue(presentationCreateForWidthAndHeight, "createForWidthAndHeight(...)");
            arrayList.add(presentationCreateForWidthAndHeight);
            effects = new EditedMediaItem.Builder(mediaItemBuild).setEffects(new Effects(CollectionsKt.emptyList(), arrayList));
            Intrinsics.checkNotNullExpressionValue(effects, "setEffects(...)");
            if (!(advanced != null ? Intrinsics.areEqual((Object) advanced.getRemoveAudio(), (Object) true) : false) || !config.getIncludeAudio()) {
                effects.setRemoveAudio(true);
            }
            EditedMediaItem editedMediaItemBuild = effects.build();
            Intrinsics.checkNotNullExpressionValue(editedMediaItemBuild, "build(...)");
            return editedMediaItemBuild;
        }
        pair = pairCalculateAspectRatioPreservingDimensions;
        vVideoInfo = video;
        int iIntValue3 = pair.component1().intValue();
        int iIntValue4 = pair.component2().intValue();
        if (advanced != null) {
            trimStartMs = advanced.getTrimStartMs();
        } else {
            trimStartMs = null;
        }
        if (trimStartMs != null) {
            if (advanced != null) {
                jIntValue = 0;
            } else {
                jIntValue = 0;
            }
            if (advanced != null) {
                durationMillis = vVideoInfo.getDurationMillis();
            } else {
                durationMillis = vVideoInfo.getDurationMillis();
            }
            MediaItem.Builder builder3 = new MediaItem.Builder();
            localConfiguration = mediaItem.localConfiguration;
            if (localConfiguration != null) {
                uri = localConfiguration.uri;
            } else {
                uri = null;
            }
            mediaItemBuild = builder3.setUri(uri).setClippingConfiguration(new MediaItem.ClippingConfiguration.Builder().setStartPositionMs(jIntValue).setEndPositionMs(durationMillis).build()).build();
            Intrinsics.checkNotNull(mediaItemBuild);
        } else {
            if (advanced != null) {
                trimEndMs2 = advanced.getTrimEndMs();
            } else {
                trimEndMs2 = null;
            }
            if (trimEndMs2 != null) {
                if (advanced != null) {
                    jIntValue = 0;
                } else {
                    jIntValue = 0;
                }
                if (advanced != null) {
                    durationMillis = vVideoInfo.getDurationMillis();
                } else {
                    durationMillis = vVideoInfo.getDurationMillis();
                }
                MediaItem.Builder builder4 = new MediaItem.Builder();
                localConfiguration = mediaItem.localConfiguration;
                if (localConfiguration != null) {
                    uri = localConfiguration.uri;
                } else {
                    uri = null;
                }
                mediaItemBuild = builder4.setUri(uri).setClippingConfiguration(new MediaItem.ClippingConfiguration.Builder().setStartPositionMs(jIntValue).setEndPositionMs(durationMillis).build()).build();
                Intrinsics.checkNotNull(mediaItemBuild);
            } else {
                mediaItemBuild = mediaItem;
            }
        }
        arrayList = new ArrayList();
        dFrameDropTarget = VVideoEncodingSettings.INSTANCE.frameDropTarget(advanced != null ? advanced.getFrameRate() : null, sourceFrameRate);
        if (dFrameDropTarget != null) {
            double dDoubleValue2 = dFrameDropTarget.doubleValue();
            FrameDropEffect frameDropEffectCreateDefaultFrameDropEffect2 = FrameDropEffect.createDefaultFrameDropEffect((float) dDoubleValue2);
            Intrinsics.checkNotNullExpressionValue(frameDropEffectCreateDefaultFrameDropEffect2, "createDefaultFrameDropEffect(...)");
            arrayList.add(frameDropEffectCreateDefaultFrameDropEffect2);
            System.out.println((Object) ("VVideoCompressionEngine: Requesting output frame rate " + dDoubleValue2 + "fps"));
        }
        if (i != 0) {
            if (cropPlan != null) {
                fCropRotationDegrees = VVideoCropGeometry.INSTANCE.cropRotationDegrees(i);
            } else {
                fCropRotationDegrees = i;
            }
            ScaleAndRotateTransformation scaleAndRotateTransformationBuild2 = new ScaleAndRotateTransformation.Builder().setRotationDegrees(fCropRotationDegrees).build();
            Intrinsics.checkNotNullExpressionValue(scaleAndRotateTransformationBuild2, "build(...)");
            arrayList.add(scaleAndRotateTransformationBuild2);
            System.out.println((Object) ("VVideoCompressionEngine: Applied " + i + "° rotation (auto-correct: " + zAreEqual + ")"));
        }
        if (cropPlan != null) {
            arrayList.add(new Crop(cropPlan.getMedia3Crop().getLeft(), cropPlan.getMedia3Crop().getRight(), cropPlan.getMedia3Crop().getBottom(), cropPlan.getMedia3Crop().getTop()));
        }
        if (cropPlan != null) {
            presentationLayout = cropPlan.getPresentationLayout();
        } else {
            presentationLayout = 0;
        }
        Presentation presentationCreateForWidthAndHeight2 = Presentation.createForWidthAndHeight(iIntValue3, iIntValue4, presentationLayout);
        Intrinsics.checkNotNullExpressionValue(presentationCreateForWidthAndHeight2, "createForWidthAndHeight(...)");
        arrayList.add(presentationCreateForWidthAndHeight2);
        effects = new EditedMediaItem.Builder(mediaItemBuild).setEffects(new Effects(CollectionsKt.emptyList(), arrayList));
        Intrinsics.checkNotNullExpressionValue(effects, "setEffects(...)");
        if (!(advanced != null ? Intrinsics.areEqual((Object) advanced.getRemoveAudio(), (Object) true) : false)) {
            effects.setRemoveAudio(true);
        } else {
            effects.setRemoveAudio(true);
        }
        EditedMediaItem editedMediaItemBuild2 = effects.build();
        Intrinsics.checkNotNullExpressionValue(editedMediaItemBuild2, "build(...)");
        return editedMediaItemBuild2;
    }

    private final File prepareOutputDirectory(String outputPath) throws IOException {
        File file;
        String str = outputPath;
        if (str != null && !StringsKt.isBlank(str)) {
            file = new File(outputPath);
        } else {
            File externalFilesDir = this.context.getExternalFilesDir(Environment.DIRECTORY_MOVIES);
            if (externalFilesDir == null) {
                externalFilesDir = new File(this.context.getFilesDir(), "Movies");
            }
            file = new File(externalFilesDir, "CompressedVideos");
        }
        if (file.exists() && !file.isDirectory()) {
            throw new IOException("The configured output path is not a directory");
        }
        if (!file.exists() && !file.mkdirs()) {
            throw new IOException("Could not create the configured output directory");
        }
        if (!file.canWrite()) {
            throw new IOException("The configured output directory is not writable");
        }
        File canonicalFile = file.getCanonicalFile();
        Intrinsics.checkNotNullExpressionValue(canonicalFile, "getCanonicalFile(...)");
        return canonicalFile;
    }

    private final File createOutputFile(File outputDirectory, VVideoInfo video, VVideoCompressQuality quality) {
        String str;
        int i = WhenMappings.$EnumSwitchMapping$0[quality.ordinal()];
        if (i == 1) {
            str = "1080p";
        } else if (i == 2) {
            str = "720p";
        } else if (i == 3) {
            str = "480p";
        } else if (i == 4) {
            str = "360p";
        } else {
            if (i != 5) {
                throw new NoWhenBranchMatchedException();
            }
            str = "240p";
        }
        String strTake = StringsKt.take(new Regex("[^A-Za-z0-9._-]").replace(StringsKt.substringBeforeLast$default(video.getName(), FilenameUtils.EXTENSION_SEPARATOR, (String) null, 2, (Object) null), "_"), 80);
        if (StringsKt.isBlank(strTake)) {
            strTake = "video";
        }
        return new File(outputDirectory, "compressed_" + strTake + "_" + str + "_" + UUID.randomUUID() + ".mp4");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final VVideoCompressionResult createCompressionResult(VVideoInfo originalVideo, File compressedFile, VVideoCompressQuality quality, long timeTaken, boolean usedOriginalFile) throws Throwable {
        long fileSizeBytes = originalVideo.getFileSizeBytes();
        long length = compressedFile.length();
        String str = originalVideo.getWidth() + "x" + originalVideo.getHeight();
        String compressedResolution = getCompressedResolution(compressedFile, quality);
        String absolutePath = compressedFile.getAbsolutePath();
        Intrinsics.checkNotNullExpressionValue(absolutePath, "getAbsolutePath(...)");
        return new VVideoCompressionResult(originalVideo, absolutePath, null, fileSizeBytes, length, length / fileSizeBytes, timeTaken, quality, str, compressedResolution, fileSizeBytes - length, usedOriginalFile);
    }

    private final String getCompressedResolution(File compressedFile, VVideoCompressQuality quality) throws Throwable {
        String str;
        Integer intOrNull;
        Integer intOrNull2;
        MediaMetadataRetriever mediaMetadataRetriever = null;
        try {
            try {
                MediaMetadataRetriever mediaMetadataRetriever2 = new MediaMetadataRetriever();
                try {
                    mediaMetadataRetriever2.setDataSource(compressedFile.getAbsolutePath());
                    String strExtractMetadata = mediaMetadataRetriever2.extractMetadata(18);
                    int iIntValue = 0;
                    int iIntValue2 = (strExtractMetadata == null || (intOrNull2 = StringsKt.toIntOrNull(strExtractMetadata)) == null) ? 0 : intOrNull2.intValue();
                    String strExtractMetadata2 = mediaMetadataRetriever2.extractMetadata(19);
                    if (strExtractMetadata2 != null && (intOrNull = StringsKt.toIntOrNull(strExtractMetadata2)) != null) {
                        iIntValue = intOrNull.intValue();
                    }
                    String str2 = iIntValue2 + "x" + iIntValue;
                    mediaMetadataRetriever2.release();
                    return str2;
                } catch (Exception unused) {
                    mediaMetadataRetriever = mediaMetadataRetriever2;
                    int i = WhenMappings.$EnumSwitchMapping$0[quality.ordinal()];
                    if (i == 1) {
                        str = "1920x1080";
                    } else if (i == 2) {
                        str = "1280x720";
                    } else if (i == 3) {
                        str = "854x480";
                    } else if (i == 4) {
                        str = "640x360";
                    } else {
                        if (i != 5) {
                            throw new NoWhenBranchMatchedException();
                        }
                        str = "426x240";
                    }
                    if (mediaMetadataRetriever != null) {
                        mediaMetadataRetriever.release();
                    }
                    return str;
                } catch (Throwable th) {
                    th = th;
                    mediaMetadataRetriever = mediaMetadataRetriever2;
                    if (mediaMetadataRetriever != null) {
                        mediaMetadataRetriever.release();
                    }
                    throw th;
                }
            } catch (Throwable th2) {
                th = th2;
            }
        } catch (Exception unused2) {
        }
    }

    private final String formatFileSize(long bytes) {
        double d = bytes / 1024.0d;
        double d2 = d / 1024.0d;
        double d3 = d2 / 1024.0d;
        if (d3 >= 1.0d) {
            StringCompanionObject stringCompanionObject = StringCompanionObject.INSTANCE;
            String str = String.format("%.1f GB", Arrays.copyOf(new Object[]{Double.valueOf(d3)}, 1));
            Intrinsics.checkNotNullExpressionValue(str, "format(...)");
            return str;
        }
        if (d2 >= 1.0d) {
            StringCompanionObject stringCompanionObject2 = StringCompanionObject.INSTANCE;
            String str2 = String.format("%.1f MB", Arrays.copyOf(new Object[]{Double.valueOf(d2)}, 1));
            Intrinsics.checkNotNullExpressionValue(str2, "format(...)");
            return str2;
        }
        StringCompanionObject stringCompanionObject3 = StringCompanionObject.INSTANCE;
        String str3 = String.format("%.1f KB", Arrays.copyOf(new Object[]{Double.valueOf(d)}, 1));
        Intrinsics.checkNotNullExpressionValue(str3, "format(...)");
        return str3;
    }

    private final void applyAdvancedCompressionSettings(Transformer.Builder transformerBuilder, VVideoAdvancedConfig advanced, VVideoInfo videoInfo) {
        if (advanced == null) {
            return;
        }
        if (videoInfo.getWidth() >= WIDTH_4K || videoInfo.getHeight() >= HEIGHT_4K) {
            transformerBuilder.experimentalSetTrimOptimizationEnabled(true);
            if (!Intrinsics.areEqual((Object) advanced.getHardwareAcceleration(), (Object) false)) {
                try {
                    System.out.println((Object) "4K FIX: Enabling hardware acceleration for 4K video");
                } catch (Exception unused) {
                    System.out.println((Object) "4K FIX: Hardware acceleration failed, using software encoding");
                }
            }
            System.out.println((Object) "4K FIX: Applying 4K-optimized compression settings");
        }
        if (Intrinsics.areEqual((Object) advanced.getAggressiveCompression(), (Object) true)) {
            transformerBuilder.experimentalSetTrimOptimizationEnabled(true);
            advanced.getEncodingSpeed();
        }
        Intrinsics.areEqual((Object) advanced.getHardwareAcceleration(), (Object) true);
        Intrinsics.areEqual((Object) advanced.getMonoAudio(), (Object) true);
        Intrinsics.areEqual((Object) advanced.getVariableBitrate(), (Object) true);
    }

    /* JADX WARN: Code duplicated, block: B:115:? A[RETURN, SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:116:? A[RETURN, SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:64:0x0104 A[Catch: Exception -> 0x012a, TryCatch #3 {Exception -> 0x012a, blocks: (B:59:0x00f4, B:62:0x00fc, B:64:0x0104, B:66:0x0109, B:72:0x0114, B:75:0x011c, B:77:0x0124), top: B:96:0x0012 }] */
    /* JADX WARN: Code duplicated, block: B:77:0x0124 A[Catch: Exception -> 0x012a, TRY_LEAVE, TryCatch #3 {Exception -> 0x012a, blocks: (B:59:0x00f4, B:62:0x00fc, B:64:0x0104, B:66:0x0109, B:72:0x0114, B:75:0x011c, B:77:0x0124), top: B:96:0x0012 }] */
    /* JADX WARN: Not initialized variable reg: 7, insn: 0x012c: MOVE (r4 I:??[OBJECT, ARRAY]) = (r7 I:??[OBJECT, ARRAY]), block:B:82:0x012c */
    public final VVideoThumbnailResult getVideoThumbnail(VVideoInfo videoInfo, VVideoThumbnailConfig config) throws Throwable {
        Bitmap bitmap;
        Bitmap frameAtTime;
        MediaMetadataRetriever mediaMetadataRetriever;
        Bitmap bitmapScaleBitmapWithAspectRatio;
        Bitmap.CompressFormat compressFormat;
        Intrinsics.checkNotNullParameter(videoInfo, "videoInfo");
        Intrinsics.checkNotNullParameter(config, "config");
        Bitmap bitmap2 = null;
        try {
            try {
                try {
                    mediaMetadataRetriever = new MediaMetadataRetriever();
                    try {
                        mediaMetadataRetriever.setDataSource(videoInfo.getPath());
                        frameAtTime = mediaMetadataRetriever.getFrameAtTime(((long) config.getTimeMs()) * 1000, 2);
                        if (frameAtTime == null) {
                            try {
                                Intrinsics.areEqual((Object) null, frameAtTime);
                                mediaMetadataRetriever.release();
                            } catch (Exception unused) {
                            }
                            return null;
                        }
                        try {
                            File fileCreateThumbnailOutputFile = createThumbnailOutputFile(config.getOutputPath(), videoInfo.getName(), config.getFormat(), config.getTimeMs());
                            bitmapScaleBitmapWithAspectRatio = (config.getMaxWidth() == null && config.getMaxHeight() == null) ? frameAtTime : scaleBitmapWithAspectRatio(frameAtTime, config.getMaxWidth(), config.getMaxHeight());
                            try {
                                int i = WhenMappings.$EnumSwitchMapping$3[config.getFormat().ordinal()];
                                if (i == 1) {
                                    compressFormat = Bitmap.CompressFormat.JPEG;
                                } else {
                                    if (i != 2) {
                                        throw new NoWhenBranchMatchedException();
                                    }
                                    compressFormat = Bitmap.CompressFormat.PNG;
                                }
                                FileOutputStream fileOutputStream = new FileOutputStream(fileCreateThumbnailOutputFile);
                                try {
                                    bitmapScaleBitmapWithAspectRatio.compress(compressFormat, config.getQuality(), fileOutputStream);
                                    CloseableKt.closeFinally(fileOutputStream, null);
                                    String absolutePath = fileCreateThumbnailOutputFile.getAbsolutePath();
                                    Intrinsics.checkNotNullExpressionValue(absolutePath, "getAbsolutePath(...)");
                                    VVideoThumbnailResult vVideoThumbnailResult = new VVideoThumbnailResult(absolutePath, bitmapScaleBitmapWithAspectRatio.getWidth(), bitmapScaleBitmapWithAspectRatio.getHeight(), fileCreateThumbnailOutputFile.length(), config.getFormat(), config.getTimeMs());
                                    try {
                                        if (!Intrinsics.areEqual(bitmapScaleBitmapWithAspectRatio, frameAtTime) && bitmapScaleBitmapWithAspectRatio != null) {
                                            bitmapScaleBitmapWithAspectRatio.recycle();
                                        }
                                        frameAtTime.recycle();
                                        mediaMetadataRetriever.release();
                                    } catch (Exception unused2) {
                                    }
                                    return vVideoThumbnailResult;
                                } catch (Throwable th) {
                                    try {
                                        throw th;
                                    } catch (Throwable th2) {
                                        CloseableKt.closeFinally(fileOutputStream, th);
                                        throw th2;
                                    }
                                }
                            } catch (Exception e) {
                                e = e;
                                e.printStackTrace();
                                if (!Intrinsics.areEqual(bitmapScaleBitmapWithAspectRatio, frameAtTime) && bitmapScaleBitmapWithAspectRatio != null) {
                                    Bitmap bitmap3 = bitmapScaleBitmapWithAspectRatio;
                                    bitmapScaleBitmapWithAspectRatio.recycle();
                                }
                                if (frameAtTime != null) {
                                    frameAtTime.recycle();
                                }
                                if (mediaMetadataRetriever == null) {
                                    return null;
                                }
                                mediaMetadataRetriever.release();
                                return null;
                            } catch (OutOfMemoryError e2) {
                                e = e2;
                                e.printStackTrace();
                                if (!Intrinsics.areEqual(bitmapScaleBitmapWithAspectRatio, frameAtTime) && bitmapScaleBitmapWithAspectRatio != null) {
                                    Bitmap bitmap4 = bitmapScaleBitmapWithAspectRatio;
                                    bitmapScaleBitmapWithAspectRatio.recycle();
                                }
                                if (frameAtTime != null) {
                                    frameAtTime.recycle();
                                }
                                if (mediaMetadataRetriever == null) {
                                    return null;
                                }
                                mediaMetadataRetriever.release();
                                return null;
                            }
                        } catch (Exception e3) {
                            e = e3;
                            bitmapScaleBitmapWithAspectRatio = null;
                        } catch (OutOfMemoryError e4) {
                            e = e4;
                            bitmapScaleBitmapWithAspectRatio = null;
                        } catch (Throwable th3) {
                            th = th3;
                            try {
                                if (!Intrinsics.areEqual(bitmap2, frameAtTime) && bitmap2 != null) {
                                    bitmap2.recycle();
                                }
                                if (frameAtTime != null) {
                                    frameAtTime.recycle();
                                }
                                if (mediaMetadataRetriever != null) {
                                    mediaMetadataRetriever.release();
                                }
                            } catch (Exception unused3) {
                            }
                            throw th;
                        }
                    } catch (Exception e5) {
                        e = e5;
                        frameAtTime = null;
                        bitmapScaleBitmapWithAspectRatio = frameAtTime;
                        e.printStackTrace();
                        if (!Intrinsics.areEqual(bitmapScaleBitmapWithAspectRatio, frameAtTime)) {
                            Bitmap bitmap5 = bitmapScaleBitmapWithAspectRatio;
                            bitmapScaleBitmapWithAspectRatio.recycle();
                        }
                        if (frameAtTime != null) {
                            frameAtTime.recycle();
                        }
                        if (mediaMetadataRetriever == null) {
                            return null;
                        }
                        mediaMetadataRetriever.release();
                        return null;
                    } catch (OutOfMemoryError e6) {
                        e = e6;
                        frameAtTime = null;
                        bitmapScaleBitmapWithAspectRatio = frameAtTime;
                        e.printStackTrace();
                        if (!Intrinsics.areEqual(bitmapScaleBitmapWithAspectRatio, frameAtTime)) {
                            Bitmap bitmap6 = bitmapScaleBitmapWithAspectRatio;
                            bitmapScaleBitmapWithAspectRatio.recycle();
                        }
                        if (frameAtTime != null) {
                            frameAtTime.recycle();
                        }
                        if (mediaMetadataRetriever == null) {
                            return null;
                        }
                        mediaMetadataRetriever.release();
                        return null;
                    } catch (Throwable th4) {
                        th = th4;
                        frameAtTime = null;
                    }
                } catch (Exception unused4) {
                    return null;
                }
            } catch (Exception e7) {
                e = e7;
                mediaMetadataRetriever = null;
                frameAtTime = null;
            } catch (OutOfMemoryError e8) {
                e = e8;
                mediaMetadataRetriever = null;
                frameAtTime = null;
            } catch (Throwable th5) {
                th = th5;
                mediaMetadataRetriever = null;
                frameAtTime = null;
            }
        } catch (Throwable th6) {
            th = th6;
            bitmap2 = bitmap;
        }
    }

    private final File createThumbnailOutputFile(String outputPath, String videoName, VThumbnailFormat format, int timeMs) {
        File file;
        if (outputPath != null) {
            file = new File(outputPath);
            if (!file.exists()) {
                file.mkdirs();
            }
        } else {
            file = new File(this.context.getExternalFilesDir(Environment.DIRECTORY_PICTURES), "VideoThumbnails");
            if (!file.exists()) {
                file.mkdirs();
            }
        }
        long jCurrentTimeMillis = System.currentTimeMillis();
        return new File(file, "thumb_" + StringsKt.substringBeforeLast$default(videoName, FilenameUtils.EXTENSION_SEPARATOR, (String) null, 2, (Object) null) + "_" + timeMs + "ms_" + jCurrentTimeMillis + format.getExtension());
    }

    private final Bitmap scaleBitmapWithAspectRatio(Bitmap bitmap, Integer maxWidth, Integer maxHeight) {
        Pair pair;
        Pair pair2;
        int width = bitmap.getWidth();
        int height = bitmap.getHeight();
        if (maxWidth != null || maxHeight != null) {
            float f = width;
            float f2 = height;
            float f3 = f / f2;
            if (maxWidth == null || maxHeight == null) {
                if (maxWidth != null) {
                    pair = new Pair(maxWidth, Integer.valueOf((int) (maxWidth.intValue() / f3)));
                } else if (maxHeight != null) {
                    pair2 = new Pair(Integer.valueOf((int) (maxHeight.intValue() * f3)), maxHeight);
                    pair = pair2;
                } else {
                    pair = new Pair(Integer.valueOf(width), Integer.valueOf(height));
                }
            } else if (f / maxWidth.intValue() > f2 / maxHeight.intValue()) {
                pair = new Pair(maxWidth, Integer.valueOf((int) (maxWidth.intValue() / f3)));
            } else {
                pair2 = new Pair(Integer.valueOf((int) (maxHeight.intValue() * f3)), maxHeight);
                pair = pair2;
            }
            int iIntValue = ((Number) pair.component1()).intValue();
            int iIntValue2 = ((Number) pair.component2()).intValue();
            if (iIntValue != width || iIntValue2 != height) {
                Bitmap bitmapCreateScaledBitmap = Bitmap.createScaledBitmap(bitmap, iIntValue, iIntValue2, true);
                Intrinsics.checkNotNull(bitmapCreateScaledBitmap);
                return bitmapCreateScaledBitmap;
            }
        }
        return bitmap;
    }

    private final void releaseTransformer() {
        this.transformer = null;
    }

    public final Map<String, Object> cleanup() {
        try {
            cancelCompression();
            int iCleanupThumbnailDirectory = cleanupThumbnailDirectory();
            boolean zClearTemporaryCache = clearTemporaryCache();
            System.gc();
            return MapsKt.mapOf(TuplesKt.to(FirebaseAnalytics.Param.SUCCESS, true), TuplesKt.to("thumbnailsDeleted", Integer.valueOf(iCleanupThumbnailDirectory)), TuplesKt.to("cacheCleared", Boolean.valueOf(zClearTemporaryCache)), TuplesKt.to("message", "Cleanup completed successfully"));
        } catch (Exception e) {
            e.printStackTrace();
            Pair[] pairArr = new Pair[3];
            pairArr[0] = TuplesKt.to(FirebaseAnalytics.Param.SUCCESS, false);
            String message = e.getMessage();
            if (message == null) {
                message = "Unknown error";
            }
            pairArr[1] = TuplesKt.to("error", message);
            pairArr[2] = TuplesKt.to("message", "Cleanup failed");
            return MapsKt.mapOf(pairArr);
        }
    }

    public static /* synthetic */ Map cleanupFiles$default(VVideoCompressionEngine vVideoCompressionEngine, boolean z, boolean z2, boolean z3, int i, Object obj) {
        if ((i & 1) != 0) {
            z = true;
        }
        if ((i & 2) != 0) {
            z2 = false;
        }
        if ((i & 4) != 0) {
            z3 = true;
        }
        return vVideoCompressionEngine.cleanupFiles(z, z2, z3);
    }

    public final Map<String, Object> cleanupFiles(boolean deleteThumbnails, boolean deleteCompressedVideos, boolean clearCache) {
        int iCleanupThumbnailDirectory;
        if (deleteThumbnails) {
            try {
                iCleanupThumbnailDirectory = cleanupThumbnailDirectory();
            } catch (Exception e) {
                e.printStackTrace();
                Pair[] pairArr = new Pair[3];
                pairArr[0] = TuplesKt.to(FirebaseAnalytics.Param.SUCCESS, false);
                String message = e.getMessage();
                if (message == null) {
                    message = "Unknown error";
                }
                pairArr[1] = TuplesKt.to("error", message);
                pairArr[2] = TuplesKt.to("message", "Selective cleanup failed");
                return MapsKt.mapOf(pairArr);
            }
        } else {
            iCleanupThumbnailDirectory = 0;
        }
        return MapsKt.mapOf(TuplesKt.to(FirebaseAnalytics.Param.SUCCESS, true), TuplesKt.to("thumbnailsDeleted", Integer.valueOf(iCleanupThumbnailDirectory)), TuplesKt.to("videosDeleted", Integer.valueOf(deleteCompressedVideos ? cleanupCompressedVideosDirectory() : 0)), TuplesKt.to("cacheCleared", Boolean.valueOf(clearCache ? clearTemporaryCache() : false)), TuplesKt.to("message", "Selective cleanup completed successfully"));
    }

    private final int cleanupThumbnailDirectory() {
        File[] fileArrListFiles;
        try {
            File file = new File(this.context.getExternalFilesDir(Environment.DIRECTORY_PICTURES), "VideoThumbnails");
            if (!file.exists() || (fileArrListFiles = file.listFiles()) == null) {
                return 0;
            }
            int i = 0;
            for (File file2 : fileArrListFiles) {
                if (file2.isFile() && file2.delete()) {
                    i++;
                }
            }
            return i;
        } catch (Exception e) {
            e.printStackTrace();
            return 0;
        }
    }

    private final int cleanupCompressedVideosDirectory() {
        File[] fileArrListFiles;
        try {
            File file = new File(this.context.getExternalFilesDir(Environment.DIRECTORY_MOVIES), "CompressedVideos");
            if (!file.exists() || (fileArrListFiles = file.listFiles()) == null) {
                return 0;
            }
            int i = 0;
            for (File file2 : fileArrListFiles) {
                if (file2.isFile() && file2.delete()) {
                    i++;
                }
            }
            return i;
        } catch (Exception e) {
            e.printStackTrace();
            return 0;
        }
    }

    private final boolean clearTemporaryCache() {
        try {
            Job job = this.progressJob;
            if (job != null) {
                Job.DefaultImpls.cancel$default(job, (CancellationException) null, 1, (Object) null);
            }
            releaseTransformer();
            this.isCompressionActive.set(false);
            this.isCancelled.set(false);
            System.gc();
            return true;
        } catch (Exception e) {
            e.printStackTrace();
            return false;
        }
    }
}
