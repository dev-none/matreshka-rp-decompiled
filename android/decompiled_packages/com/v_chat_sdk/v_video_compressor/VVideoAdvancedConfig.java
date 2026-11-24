package com.v_chat_sdk.v_video_compressor;

import androidx.media3.common.C;
import com.my.target.common.menu.MenuActionType;
import io.sentry.protocol.Request;
import io.sentry.rrweb.RRWebVideoEvent;
import java.util.Map;
import kotlin.Metadata;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.internal.LockFreeTaskQueueCore;

/* JADX INFO: compiled from: VVideoModels.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000L\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0002\b\u0004\n\u0002\u0010\u0006\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u000f\n\u0002\u0018\u0002\n\u0002\bO\n\u0002\u0010\u000e\n\u0002\b\u0002\b\u0086\b\u0018\u0000 x2\u00020\u0001:\u0001xBï\u0002\u0012\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0007\u001a\u0004\u0018\u00010\b\u0012\n\b\u0002\u0010\t\u001a\u0004\u0018\u00010\n\u0012\n\b\u0002\u0010\u000b\u001a\u0004\u0018\u00010\f\u0012\n\b\u0002\u0010\r\u001a\u0004\u0018\u00010\u000e\u0012\n\b\u0002\u0010\u000f\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0010\u001a\u0004\u0018\u00010\u0011\u0012\n\b\u0002\u0010\u0012\u001a\u0004\u0018\u00010\u0011\u0012\n\b\u0002\u0010\u0013\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0014\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0015\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0016\u001a\u0004\u0018\u00010\u0017\u0012\n\b\u0002\u0010\u0018\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0019\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u001a\u001a\u0004\u0018\u00010\u0011\u0012\n\b\u0002\u0010\u001b\u001a\u0004\u0018\u00010\u0011\u0012\n\b\u0002\u0010\u001c\u001a\u0004\u0018\u00010\b\u0012\n\b\u0002\u0010\u001d\u001a\u0004\u0018\u00010\b\u0012\n\b\u0002\u0010\u001e\u001a\u0004\u0018\u00010\b\u0012\n\b\u0002\u0010\u001f\u001a\u0004\u0018\u00010\u0011\u0012\n\b\u0002\u0010 \u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010!\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\"\u001a\u0004\u0018\u00010\b\u0012\n\b\u0002\u0010#\u001a\u0004\u0018\u00010\u0011\u0012\n\b\u0002\u0010$\u001a\u0004\u0018\u00010\u0011\u0012\n\b\u0002\u0010%\u001a\u0004\u0018\u00010\u0011\u0012\n\b\u0002\u0010&\u001a\u0004\u0018\u00010'¢\u0006\u0004\b(\u0010)J\u0010\u0010S\u001a\u0004\u0018\u00010\u0003HÆ\u0003¢\u0006\u0002\u0010+J\u0010\u0010T\u001a\u0004\u0018\u00010\u0003HÆ\u0003¢\u0006\u0002\u0010+J\u0010\u0010U\u001a\u0004\u0018\u00010\u0003HÆ\u0003¢\u0006\u0002\u0010+J\u0010\u0010V\u001a\u0004\u0018\u00010\u0003HÆ\u0003¢\u0006\u0002\u0010+J\u0010\u0010W\u001a\u0004\u0018\u00010\bHÆ\u0003¢\u0006\u0002\u00101J\u000b\u0010X\u001a\u0004\u0018\u00010\nHÆ\u0003J\u000b\u0010Y\u001a\u0004\u0018\u00010\fHÆ\u0003J\u000b\u0010Z\u001a\u0004\u0018\u00010\u000eHÆ\u0003J\u0010\u0010[\u001a\u0004\u0018\u00010\u0003HÆ\u0003¢\u0006\u0002\u0010+J\u0010\u0010\\\u001a\u0004\u0018\u00010\u0011HÆ\u0003¢\u0006\u0002\u0010;J\u0010\u0010]\u001a\u0004\u0018\u00010\u0011HÆ\u0003¢\u0006\u0002\u0010;J\u0010\u0010^\u001a\u0004\u0018\u00010\u0003HÆ\u0003¢\u0006\u0002\u0010+J\u0010\u0010_\u001a\u0004\u0018\u00010\u0003HÆ\u0003¢\u0006\u0002\u0010+J\u0010\u0010`\u001a\u0004\u0018\u00010\u0003HÆ\u0003¢\u0006\u0002\u0010+J\u000b\u0010a\u001a\u0004\u0018\u00010\u0017HÆ\u0003J\u0010\u0010b\u001a\u0004\u0018\u00010\u0003HÆ\u0003¢\u0006\u0002\u0010+J\u0010\u0010c\u001a\u0004\u0018\u00010\u0003HÆ\u0003¢\u0006\u0002\u0010+J\u0010\u0010d\u001a\u0004\u0018\u00010\u0011HÆ\u0003¢\u0006\u0002\u0010;J\u0010\u0010e\u001a\u0004\u0018\u00010\u0011HÆ\u0003¢\u0006\u0002\u0010;J\u0010\u0010f\u001a\u0004\u0018\u00010\bHÆ\u0003¢\u0006\u0002\u00101J\u0010\u0010g\u001a\u0004\u0018\u00010\bHÆ\u0003¢\u0006\u0002\u00101J\u0010\u0010h\u001a\u0004\u0018\u00010\bHÆ\u0003¢\u0006\u0002\u00101J\u0010\u0010i\u001a\u0004\u0018\u00010\u0011HÆ\u0003¢\u0006\u0002\u0010;J\u0010\u0010j\u001a\u0004\u0018\u00010\u0003HÆ\u0003¢\u0006\u0002\u0010+J\u0010\u0010k\u001a\u0004\u0018\u00010\u0003HÆ\u0003¢\u0006\u0002\u0010+J\u0010\u0010l\u001a\u0004\u0018\u00010\bHÆ\u0003¢\u0006\u0002\u00101J\u0010\u0010m\u001a\u0004\u0018\u00010\u0011HÆ\u0003¢\u0006\u0002\u0010;J\u0010\u0010n\u001a\u0004\u0018\u00010\u0011HÆ\u0003¢\u0006\u0002\u0010;J\u0010\u0010o\u001a\u0004\u0018\u00010\u0011HÆ\u0003¢\u0006\u0002\u0010;J\u000b\u0010p\u001a\u0004\u0018\u00010'HÆ\u0003Jö\u0002\u0010q\u001a\u00020\u00002\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0007\u001a\u0004\u0018\u00010\b2\n\b\u0002\u0010\t\u001a\u0004\u0018\u00010\n2\n\b\u0002\u0010\u000b\u001a\u0004\u0018\u00010\f2\n\b\u0002\u0010\r\u001a\u0004\u0018\u00010\u000e2\n\b\u0002\u0010\u000f\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0010\u001a\u0004\u0018\u00010\u00112\n\b\u0002\u0010\u0012\u001a\u0004\u0018\u00010\u00112\n\b\u0002\u0010\u0013\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0014\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0015\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0016\u001a\u0004\u0018\u00010\u00172\n\b\u0002\u0010\u0018\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0019\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u001a\u001a\u0004\u0018\u00010\u00112\n\b\u0002\u0010\u001b\u001a\u0004\u0018\u00010\u00112\n\b\u0002\u0010\u001c\u001a\u0004\u0018\u00010\b2\n\b\u0002\u0010\u001d\u001a\u0004\u0018\u00010\b2\n\b\u0002\u0010\u001e\u001a\u0004\u0018\u00010\b2\n\b\u0002\u0010\u001f\u001a\u0004\u0018\u00010\u00112\n\b\u0002\u0010 \u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010!\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\"\u001a\u0004\u0018\u00010\b2\n\b\u0002\u0010#\u001a\u0004\u0018\u00010\u00112\n\b\u0002\u0010$\u001a\u0004\u0018\u00010\u00112\n\b\u0002\u0010%\u001a\u0004\u0018\u00010\u00112\n\b\u0002\u0010&\u001a\u0004\u0018\u00010'HÆ\u0001¢\u0006\u0002\u0010rJ\u0013\u0010s\u001a\u00020\u00112\b\u0010t\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010u\u001a\u00020\u0003HÖ\u0001J\t\u0010v\u001a\u00020wHÖ\u0001R\u0015\u0010\u0002\u001a\u0004\u0018\u00010\u0003¢\u0006\n\n\u0002\u0010,\u001a\u0004\b*\u0010+R\u0015\u0010\u0004\u001a\u0004\u0018\u00010\u0003¢\u0006\n\n\u0002\u0010,\u001a\u0004\b-\u0010+R\u0015\u0010\u0005\u001a\u0004\u0018\u00010\u0003¢\u0006\n\n\u0002\u0010,\u001a\u0004\b.\u0010+R\u0015\u0010\u0006\u001a\u0004\u0018\u00010\u0003¢\u0006\n\n\u0002\u0010,\u001a\u0004\b/\u0010+R\u0015\u0010\u0007\u001a\u0004\u0018\u00010\b¢\u0006\n\n\u0002\u00102\u001a\u0004\b0\u00101R\u0013\u0010\t\u001a\u0004\u0018\u00010\n¢\u0006\b\n\u0000\u001a\u0004\b3\u00104R\u0013\u0010\u000b\u001a\u0004\u0018\u00010\f¢\u0006\b\n\u0000\u001a\u0004\b5\u00106R\u0013\u0010\r\u001a\u0004\u0018\u00010\u000e¢\u0006\b\n\u0000\u001a\u0004\b7\u00108R\u0015\u0010\u000f\u001a\u0004\u0018\u00010\u0003¢\u0006\n\n\u0002\u0010,\u001a\u0004\b9\u0010+R\u0015\u0010\u0010\u001a\u0004\u0018\u00010\u0011¢\u0006\n\n\u0002\u0010<\u001a\u0004\b:\u0010;R\u0015\u0010\u0012\u001a\u0004\u0018\u00010\u0011¢\u0006\n\n\u0002\u0010<\u001a\u0004\b=\u0010;R\u0015\u0010\u0013\u001a\u0004\u0018\u00010\u0003¢\u0006\n\n\u0002\u0010,\u001a\u0004\b>\u0010+R\u0015\u0010\u0014\u001a\u0004\u0018\u00010\u0003¢\u0006\n\n\u0002\u0010,\u001a\u0004\b?\u0010+R\u0015\u0010\u0015\u001a\u0004\u0018\u00010\u0003¢\u0006\n\n\u0002\u0010,\u001a\u0004\b@\u0010+R\u0013\u0010\u0016\u001a\u0004\u0018\u00010\u0017¢\u0006\b\n\u0000\u001a\u0004\bA\u0010BR\u0015\u0010\u0018\u001a\u0004\u0018\u00010\u0003¢\u0006\n\n\u0002\u0010,\u001a\u0004\bC\u0010+R\u0015\u0010\u0019\u001a\u0004\u0018\u00010\u0003¢\u0006\n\n\u0002\u0010,\u001a\u0004\bD\u0010+R\u0015\u0010\u001a\u001a\u0004\u0018\u00010\u0011¢\u0006\n\n\u0002\u0010<\u001a\u0004\bE\u0010;R\u0015\u0010\u001b\u001a\u0004\u0018\u00010\u0011¢\u0006\n\n\u0002\u0010<\u001a\u0004\bF\u0010;R\u0015\u0010\u001c\u001a\u0004\u0018\u00010\b¢\u0006\n\n\u0002\u00102\u001a\u0004\bG\u00101R\u0015\u0010\u001d\u001a\u0004\u0018\u00010\b¢\u0006\n\n\u0002\u00102\u001a\u0004\bH\u00101R\u0015\u0010\u001e\u001a\u0004\u0018\u00010\b¢\u0006\n\n\u0002\u00102\u001a\u0004\bI\u00101R\u0015\u0010\u001f\u001a\u0004\u0018\u00010\u0011¢\u0006\n\n\u0002\u0010<\u001a\u0004\bJ\u0010;R\u0015\u0010 \u001a\u0004\u0018\u00010\u0003¢\u0006\n\n\u0002\u0010,\u001a\u0004\bK\u0010+R\u0015\u0010!\u001a\u0004\u0018\u00010\u0003¢\u0006\n\n\u0002\u0010,\u001a\u0004\bL\u0010+R\u0015\u0010\"\u001a\u0004\u0018\u00010\b¢\u0006\n\n\u0002\u00102\u001a\u0004\bM\u00101R\u0015\u0010#\u001a\u0004\u0018\u00010\u0011¢\u0006\n\n\u0002\u0010<\u001a\u0004\bN\u0010;R\u0015\u0010$\u001a\u0004\u0018\u00010\u0011¢\u0006\n\n\u0002\u0010<\u001a\u0004\bO\u0010;R\u0015\u0010%\u001a\u0004\u0018\u00010\u0011¢\u0006\n\n\u0002\u0010<\u001a\u0004\bP\u0010;R\u0013\u0010&\u001a\u0004\u0018\u00010'¢\u0006\b\n\u0000\u001a\u0004\bQ\u0010R¨\u0006y"}, d2 = {"Lcom/v_chat_sdk/v_video_compressor/VVideoAdvancedConfig;", "", "videoBitrate", "", "audioBitrate", "customWidth", "customHeight", RRWebVideoEvent.JsonKeys.FRAME_RATE, "", "videoCodec", "Lcom/v_chat_sdk/v_video_compressor/VVideoCodec;", "audioCodec", "Lcom/v_chat_sdk/v_video_compressor/VAudioCodec;", "encodingSpeed", "Lcom/v_chat_sdk/v_video_compressor/VEncodingSpeed;", "crf", "twoPassEncoding", "", "hardwareAcceleration", "trimStartMs", "trimEndMs", "rotation", "cropRect", "Lcom/v_chat_sdk/v_video_compressor/VVideoCropRect;", "audioSampleRate", "audioChannels", "removeAudio", "autoCorrectOrientation", "brightness", "contrast", "saturation", "variableBitrate", "keyframeInterval", "bFrames", "reducedFrameRate", "aggressiveCompression", "noiseReduction", "monoAudio", "dimensionHandling", "Lcom/v_chat_sdk/v_video_compressor/VDimensionHandling;", "<init>", "(Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Double;Lcom/v_chat_sdk/v_video_compressor/VVideoCodec;Lcom/v_chat_sdk/v_video_compressor/VAudioCodec;Lcom/v_chat_sdk/v_video_compressor/VEncodingSpeed;Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Lcom/v_chat_sdk/v_video_compressor/VVideoCropRect;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Double;Ljava/lang/Double;Ljava/lang/Double;Ljava/lang/Boolean;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Double;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;Lcom/v_chat_sdk/v_video_compressor/VDimensionHandling;)V", "getVideoBitrate", "()Ljava/lang/Integer;", "Ljava/lang/Integer;", "getAudioBitrate", "getCustomWidth", "getCustomHeight", "getFrameRate", "()Ljava/lang/Double;", "Ljava/lang/Double;", "getVideoCodec", "()Lcom/v_chat_sdk/v_video_compressor/VVideoCodec;", "getAudioCodec", "()Lcom/v_chat_sdk/v_video_compressor/VAudioCodec;", "getEncodingSpeed", "()Lcom/v_chat_sdk/v_video_compressor/VEncodingSpeed;", "getCrf", "getTwoPassEncoding", "()Ljava/lang/Boolean;", "Ljava/lang/Boolean;", "getHardwareAcceleration", "getTrimStartMs", "getTrimEndMs", "getRotation", "getCropRect", "()Lcom/v_chat_sdk/v_video_compressor/VVideoCropRect;", "getAudioSampleRate", "getAudioChannels", "getRemoveAudio", "getAutoCorrectOrientation", "getBrightness", "getContrast", "getSaturation", "getVariableBitrate", "getKeyframeInterval", "getBFrames", "getReducedFrameRate", "getAggressiveCompression", "getNoiseReduction", "getMonoAudio", "getDimensionHandling", "()Lcom/v_chat_sdk/v_video_compressor/VDimensionHandling;", "component1", "component2", "component3", "component4", "component5", "component6", "component7", "component8", "component9", "component10", "component11", "component12", "component13", "component14", "component15", "component16", "component17", "component18", "component19", "component20", "component21", "component22", "component23", "component24", "component25", "component26", "component27", "component28", "component29", "component30", MenuActionType.COPY, "(Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Double;Lcom/v_chat_sdk/v_video_compressor/VVideoCodec;Lcom/v_chat_sdk/v_video_compressor/VAudioCodec;Lcom/v_chat_sdk/v_video_compressor/VEncodingSpeed;Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Lcom/v_chat_sdk/v_video_compressor/VVideoCropRect;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Double;Ljava/lang/Double;Ljava/lang/Double;Ljava/lang/Boolean;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Double;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;Lcom/v_chat_sdk/v_video_compressor/VDimensionHandling;)Lcom/v_chat_sdk/v_video_compressor/VVideoAdvancedConfig;", "equals", Request.JsonKeys.OTHER, "hashCode", "toString", "", "Companion", "v_video_compressor_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final /* data */ class VVideoAdvancedConfig {

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    private final Boolean aggressiveCompression;
    private final Integer audioBitrate;
    private final Integer audioChannels;
    private final VAudioCodec audioCodec;
    private final Integer audioSampleRate;
    private final Boolean autoCorrectOrientation;
    private final Integer bFrames;
    private final Double brightness;
    private final Double contrast;
    private final Integer crf;
    private final VVideoCropRect cropRect;
    private final Integer customHeight;
    private final Integer customWidth;
    private final VDimensionHandling dimensionHandling;
    private final VEncodingSpeed encodingSpeed;
    private final Double frameRate;
    private final Boolean hardwareAcceleration;
    private final Integer keyframeInterval;
    private final Boolean monoAudio;
    private final Boolean noiseReduction;
    private final Double reducedFrameRate;
    private final Boolean removeAudio;
    private final Integer rotation;
    private final Double saturation;
    private final Integer trimEndMs;
    private final Integer trimStartMs;
    private final Boolean twoPassEncoding;
    private final Boolean variableBitrate;
    private final Integer videoBitrate;
    private final VVideoCodec videoCodec;

    public VVideoAdvancedConfig() {
        this(null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, LockFreeTaskQueueCore.MAX_CAPACITY_MASK, null);
    }

    public static /* synthetic */ VVideoAdvancedConfig copy$default(VVideoAdvancedConfig vVideoAdvancedConfig, Integer num, Integer num2, Integer num3, Integer num4, Double d, VVideoCodec vVideoCodec, VAudioCodec vAudioCodec, VEncodingSpeed vEncodingSpeed, Integer num5, Boolean bool, Boolean bool2, Integer num6, Integer num7, Integer num8, VVideoCropRect vVideoCropRect, Integer num9, Integer num10, Boolean bool3, Boolean bool4, Double d2, Double d3, Double d4, Boolean bool5, Integer num11, Integer num12, Double d5, Boolean bool6, Boolean bool7, Boolean bool8, VDimensionHandling vDimensionHandling, int i, Object obj) {
        VDimensionHandling vDimensionHandling2;
        Boolean bool9;
        Integer num13 = (i & 1) != 0 ? vVideoAdvancedConfig.videoBitrate : num;
        Integer num14 = (i & 2) != 0 ? vVideoAdvancedConfig.audioBitrate : num2;
        Integer num15 = (i & 4) != 0 ? vVideoAdvancedConfig.customWidth : num3;
        Integer num16 = (i & 8) != 0 ? vVideoAdvancedConfig.customHeight : num4;
        Double d6 = (i & 16) != 0 ? vVideoAdvancedConfig.frameRate : d;
        VVideoCodec vVideoCodec2 = (i & 32) != 0 ? vVideoAdvancedConfig.videoCodec : vVideoCodec;
        VAudioCodec vAudioCodec2 = (i & 64) != 0 ? vVideoAdvancedConfig.audioCodec : vAudioCodec;
        VEncodingSpeed vEncodingSpeed2 = (i & 128) != 0 ? vVideoAdvancedConfig.encodingSpeed : vEncodingSpeed;
        Integer num17 = (i & 256) != 0 ? vVideoAdvancedConfig.crf : num5;
        Boolean bool10 = (i & 512) != 0 ? vVideoAdvancedConfig.twoPassEncoding : bool;
        Boolean bool11 = (i & 1024) != 0 ? vVideoAdvancedConfig.hardwareAcceleration : bool2;
        Integer num18 = (i & 2048) != 0 ? vVideoAdvancedConfig.trimStartMs : num6;
        Integer num19 = (i & 4096) != 0 ? vVideoAdvancedConfig.trimEndMs : num7;
        Integer num20 = (i & 8192) != 0 ? vVideoAdvancedConfig.rotation : num8;
        Integer num21 = num13;
        VVideoCropRect vVideoCropRect2 = (i & 16384) != 0 ? vVideoAdvancedConfig.cropRect : vVideoCropRect;
        Integer num22 = (i & 32768) != 0 ? vVideoAdvancedConfig.audioSampleRate : num9;
        Integer num23 = (i & 65536) != 0 ? vVideoAdvancedConfig.audioChannels : num10;
        Boolean bool12 = (i & 131072) != 0 ? vVideoAdvancedConfig.removeAudio : bool3;
        Boolean bool13 = (i & 262144) != 0 ? vVideoAdvancedConfig.autoCorrectOrientation : bool4;
        Double d7 = (i & 524288) != 0 ? vVideoAdvancedConfig.brightness : d2;
        Double d8 = (i & 1048576) != 0 ? vVideoAdvancedConfig.contrast : d3;
        Double d9 = (i & 2097152) != 0 ? vVideoAdvancedConfig.saturation : d4;
        Boolean bool14 = (i & 4194304) != 0 ? vVideoAdvancedConfig.variableBitrate : bool5;
        Integer num24 = (i & 8388608) != 0 ? vVideoAdvancedConfig.keyframeInterval : num11;
        Integer num25 = (i & 16777216) != 0 ? vVideoAdvancedConfig.bFrames : num12;
        Double d10 = (i & 33554432) != 0 ? vVideoAdvancedConfig.reducedFrameRate : d5;
        Boolean bool15 = (i & 67108864) != 0 ? vVideoAdvancedConfig.aggressiveCompression : bool6;
        Boolean bool16 = (i & C.BUFFER_FLAG_FIRST_SAMPLE) != 0 ? vVideoAdvancedConfig.noiseReduction : bool7;
        Boolean bool17 = (i & 268435456) != 0 ? vVideoAdvancedConfig.monoAudio : bool8;
        if ((i & C.BUFFER_FLAG_LAST_SAMPLE) != 0) {
            bool9 = bool17;
            vDimensionHandling2 = vVideoAdvancedConfig.dimensionHandling;
        } else {
            vDimensionHandling2 = vDimensionHandling;
            bool9 = bool17;
        }
        return vVideoAdvancedConfig.copy(num21, num14, num15, num16, d6, vVideoCodec2, vAudioCodec2, vEncodingSpeed2, num17, bool10, bool11, num18, num19, num20, vVideoCropRect2, num22, num23, bool12, bool13, d7, d8, d9, bool14, num24, num25, d10, bool15, bool16, bool9, vDimensionHandling2);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final Integer getVideoBitrate() {
        return this.videoBitrate;
    }

    /* JADX INFO: renamed from: component10, reason: from getter */
    public final Boolean getTwoPassEncoding() {
        return this.twoPassEncoding;
    }

    /* JADX INFO: renamed from: component11, reason: from getter */
    public final Boolean getHardwareAcceleration() {
        return this.hardwareAcceleration;
    }

    /* JADX INFO: renamed from: component12, reason: from getter */
    public final Integer getTrimStartMs() {
        return this.trimStartMs;
    }

    /* JADX INFO: renamed from: component13, reason: from getter */
    public final Integer getTrimEndMs() {
        return this.trimEndMs;
    }

    /* JADX INFO: renamed from: component14, reason: from getter */
    public final Integer getRotation() {
        return this.rotation;
    }

    /* JADX INFO: renamed from: component15, reason: from getter */
    public final VVideoCropRect getCropRect() {
        return this.cropRect;
    }

    /* JADX INFO: renamed from: component16, reason: from getter */
    public final Integer getAudioSampleRate() {
        return this.audioSampleRate;
    }

    /* JADX INFO: renamed from: component17, reason: from getter */
    public final Integer getAudioChannels() {
        return this.audioChannels;
    }

    /* JADX INFO: renamed from: component18, reason: from getter */
    public final Boolean getRemoveAudio() {
        return this.removeAudio;
    }

    /* JADX INFO: renamed from: component19, reason: from getter */
    public final Boolean getAutoCorrectOrientation() {
        return this.autoCorrectOrientation;
    }

    /* JADX INFO: renamed from: component2, reason: from getter */
    public final Integer getAudioBitrate() {
        return this.audioBitrate;
    }

    /* JADX INFO: renamed from: component20, reason: from getter */
    public final Double getBrightness() {
        return this.brightness;
    }

    /* JADX INFO: renamed from: component21, reason: from getter */
    public final Double getContrast() {
        return this.contrast;
    }

    /* JADX INFO: renamed from: component22, reason: from getter */
    public final Double getSaturation() {
        return this.saturation;
    }

    /* JADX INFO: renamed from: component23, reason: from getter */
    public final Boolean getVariableBitrate() {
        return this.variableBitrate;
    }

    /* JADX INFO: renamed from: component24, reason: from getter */
    public final Integer getKeyframeInterval() {
        return this.keyframeInterval;
    }

    /* JADX INFO: renamed from: component25, reason: from getter */
    public final Integer getBFrames() {
        return this.bFrames;
    }

    /* JADX INFO: renamed from: component26, reason: from getter */
    public final Double getReducedFrameRate() {
        return this.reducedFrameRate;
    }

    /* JADX INFO: renamed from: component27, reason: from getter */
    public final Boolean getAggressiveCompression() {
        return this.aggressiveCompression;
    }

    /* JADX INFO: renamed from: component28, reason: from getter */
    public final Boolean getNoiseReduction() {
        return this.noiseReduction;
    }

    /* JADX INFO: renamed from: component29, reason: from getter */
    public final Boolean getMonoAudio() {
        return this.monoAudio;
    }

    /* JADX INFO: renamed from: component3, reason: from getter */
    public final Integer getCustomWidth() {
        return this.customWidth;
    }

    /* JADX INFO: renamed from: component30, reason: from getter */
    public final VDimensionHandling getDimensionHandling() {
        return this.dimensionHandling;
    }

    /* JADX INFO: renamed from: component4, reason: from getter */
    public final Integer getCustomHeight() {
        return this.customHeight;
    }

    /* JADX INFO: renamed from: component5, reason: from getter */
    public final Double getFrameRate() {
        return this.frameRate;
    }

    /* JADX INFO: renamed from: component6, reason: from getter */
    public final VVideoCodec getVideoCodec() {
        return this.videoCodec;
    }

    /* JADX INFO: renamed from: component7, reason: from getter */
    public final VAudioCodec getAudioCodec() {
        return this.audioCodec;
    }

    /* JADX INFO: renamed from: component8, reason: from getter */
    public final VEncodingSpeed getEncodingSpeed() {
        return this.encodingSpeed;
    }

    /* JADX INFO: renamed from: component9, reason: from getter */
    public final Integer getCrf() {
        return this.crf;
    }

    public final VVideoAdvancedConfig copy(Integer videoBitrate, Integer audioBitrate, Integer customWidth, Integer customHeight, Double frameRate, VVideoCodec videoCodec, VAudioCodec audioCodec, VEncodingSpeed encodingSpeed, Integer crf, Boolean twoPassEncoding, Boolean hardwareAcceleration, Integer trimStartMs, Integer trimEndMs, Integer rotation, VVideoCropRect cropRect, Integer audioSampleRate, Integer audioChannels, Boolean removeAudio, Boolean autoCorrectOrientation, Double brightness, Double contrast, Double saturation, Boolean variableBitrate, Integer keyframeInterval, Integer bFrames, Double reducedFrameRate, Boolean aggressiveCompression, Boolean noiseReduction, Boolean monoAudio, VDimensionHandling dimensionHandling) {
        return new VVideoAdvancedConfig(videoBitrate, audioBitrate, customWidth, customHeight, frameRate, videoCodec, audioCodec, encodingSpeed, crf, twoPassEncoding, hardwareAcceleration, trimStartMs, trimEndMs, rotation, cropRect, audioSampleRate, audioChannels, removeAudio, autoCorrectOrientation, brightness, contrast, saturation, variableBitrate, keyframeInterval, bFrames, reducedFrameRate, aggressiveCompression, noiseReduction, monoAudio, dimensionHandling);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof VVideoAdvancedConfig)) {
            return false;
        }
        VVideoAdvancedConfig vVideoAdvancedConfig = (VVideoAdvancedConfig) other;
        return Intrinsics.areEqual(this.videoBitrate, vVideoAdvancedConfig.videoBitrate) && Intrinsics.areEqual(this.audioBitrate, vVideoAdvancedConfig.audioBitrate) && Intrinsics.areEqual(this.customWidth, vVideoAdvancedConfig.customWidth) && Intrinsics.areEqual(this.customHeight, vVideoAdvancedConfig.customHeight) && Intrinsics.areEqual((Object) this.frameRate, (Object) vVideoAdvancedConfig.frameRate) && this.videoCodec == vVideoAdvancedConfig.videoCodec && this.audioCodec == vVideoAdvancedConfig.audioCodec && this.encodingSpeed == vVideoAdvancedConfig.encodingSpeed && Intrinsics.areEqual(this.crf, vVideoAdvancedConfig.crf) && Intrinsics.areEqual(this.twoPassEncoding, vVideoAdvancedConfig.twoPassEncoding) && Intrinsics.areEqual(this.hardwareAcceleration, vVideoAdvancedConfig.hardwareAcceleration) && Intrinsics.areEqual(this.trimStartMs, vVideoAdvancedConfig.trimStartMs) && Intrinsics.areEqual(this.trimEndMs, vVideoAdvancedConfig.trimEndMs) && Intrinsics.areEqual(this.rotation, vVideoAdvancedConfig.rotation) && Intrinsics.areEqual(this.cropRect, vVideoAdvancedConfig.cropRect) && Intrinsics.areEqual(this.audioSampleRate, vVideoAdvancedConfig.audioSampleRate) && Intrinsics.areEqual(this.audioChannels, vVideoAdvancedConfig.audioChannels) && Intrinsics.areEqual(this.removeAudio, vVideoAdvancedConfig.removeAudio) && Intrinsics.areEqual(this.autoCorrectOrientation, vVideoAdvancedConfig.autoCorrectOrientation) && Intrinsics.areEqual((Object) this.brightness, (Object) vVideoAdvancedConfig.brightness) && Intrinsics.areEqual((Object) this.contrast, (Object) vVideoAdvancedConfig.contrast) && Intrinsics.areEqual((Object) this.saturation, (Object) vVideoAdvancedConfig.saturation) && Intrinsics.areEqual(this.variableBitrate, vVideoAdvancedConfig.variableBitrate) && Intrinsics.areEqual(this.keyframeInterval, vVideoAdvancedConfig.keyframeInterval) && Intrinsics.areEqual(this.bFrames, vVideoAdvancedConfig.bFrames) && Intrinsics.areEqual((Object) this.reducedFrameRate, (Object) vVideoAdvancedConfig.reducedFrameRate) && Intrinsics.areEqual(this.aggressiveCompression, vVideoAdvancedConfig.aggressiveCompression) && Intrinsics.areEqual(this.noiseReduction, vVideoAdvancedConfig.noiseReduction) && Intrinsics.areEqual(this.monoAudio, vVideoAdvancedConfig.monoAudio) && this.dimensionHandling == vVideoAdvancedConfig.dimensionHandling;
    }

    public int hashCode() {
        Integer num = this.videoBitrate;
        int iHashCode = (num == null ? 0 : num.hashCode()) * 31;
        Integer num2 = this.audioBitrate;
        int iHashCode2 = (iHashCode + (num2 == null ? 0 : num2.hashCode())) * 31;
        Integer num3 = this.customWidth;
        int iHashCode3 = (iHashCode2 + (num3 == null ? 0 : num3.hashCode())) * 31;
        Integer num4 = this.customHeight;
        int iHashCode4 = (iHashCode3 + (num4 == null ? 0 : num4.hashCode())) * 31;
        Double d = this.frameRate;
        int iHashCode5 = (iHashCode4 + (d == null ? 0 : d.hashCode())) * 31;
        VVideoCodec vVideoCodec = this.videoCodec;
        int iHashCode6 = (iHashCode5 + (vVideoCodec == null ? 0 : vVideoCodec.hashCode())) * 31;
        VAudioCodec vAudioCodec = this.audioCodec;
        int iHashCode7 = (iHashCode6 + (vAudioCodec == null ? 0 : vAudioCodec.hashCode())) * 31;
        VEncodingSpeed vEncodingSpeed = this.encodingSpeed;
        int iHashCode8 = (iHashCode7 + (vEncodingSpeed == null ? 0 : vEncodingSpeed.hashCode())) * 31;
        Integer num5 = this.crf;
        int iHashCode9 = (iHashCode8 + (num5 == null ? 0 : num5.hashCode())) * 31;
        Boolean bool = this.twoPassEncoding;
        int iHashCode10 = (iHashCode9 + (bool == null ? 0 : bool.hashCode())) * 31;
        Boolean bool2 = this.hardwareAcceleration;
        int iHashCode11 = (iHashCode10 + (bool2 == null ? 0 : bool2.hashCode())) * 31;
        Integer num6 = this.trimStartMs;
        int iHashCode12 = (iHashCode11 + (num6 == null ? 0 : num6.hashCode())) * 31;
        Integer num7 = this.trimEndMs;
        int iHashCode13 = (iHashCode12 + (num7 == null ? 0 : num7.hashCode())) * 31;
        Integer num8 = this.rotation;
        int iHashCode14 = (iHashCode13 + (num8 == null ? 0 : num8.hashCode())) * 31;
        VVideoCropRect vVideoCropRect = this.cropRect;
        int iHashCode15 = (iHashCode14 + (vVideoCropRect == null ? 0 : vVideoCropRect.hashCode())) * 31;
        Integer num9 = this.audioSampleRate;
        int iHashCode16 = (iHashCode15 + (num9 == null ? 0 : num9.hashCode())) * 31;
        Integer num10 = this.audioChannels;
        int iHashCode17 = (iHashCode16 + (num10 == null ? 0 : num10.hashCode())) * 31;
        Boolean bool3 = this.removeAudio;
        int iHashCode18 = (iHashCode17 + (bool3 == null ? 0 : bool3.hashCode())) * 31;
        Boolean bool4 = this.autoCorrectOrientation;
        int iHashCode19 = (iHashCode18 + (bool4 == null ? 0 : bool4.hashCode())) * 31;
        Double d2 = this.brightness;
        int iHashCode20 = (iHashCode19 + (d2 == null ? 0 : d2.hashCode())) * 31;
        Double d3 = this.contrast;
        int iHashCode21 = (iHashCode20 + (d3 == null ? 0 : d3.hashCode())) * 31;
        Double d4 = this.saturation;
        int iHashCode22 = (iHashCode21 + (d4 == null ? 0 : d4.hashCode())) * 31;
        Boolean bool5 = this.variableBitrate;
        int iHashCode23 = (iHashCode22 + (bool5 == null ? 0 : bool5.hashCode())) * 31;
        Integer num11 = this.keyframeInterval;
        int iHashCode24 = (iHashCode23 + (num11 == null ? 0 : num11.hashCode())) * 31;
        Integer num12 = this.bFrames;
        int iHashCode25 = (iHashCode24 + (num12 == null ? 0 : num12.hashCode())) * 31;
        Double d5 = this.reducedFrameRate;
        int iHashCode26 = (iHashCode25 + (d5 == null ? 0 : d5.hashCode())) * 31;
        Boolean bool6 = this.aggressiveCompression;
        int iHashCode27 = (iHashCode26 + (bool6 == null ? 0 : bool6.hashCode())) * 31;
        Boolean bool7 = this.noiseReduction;
        int iHashCode28 = (iHashCode27 + (bool7 == null ? 0 : bool7.hashCode())) * 31;
        Boolean bool8 = this.monoAudio;
        int iHashCode29 = (iHashCode28 + (bool8 == null ? 0 : bool8.hashCode())) * 31;
        VDimensionHandling vDimensionHandling = this.dimensionHandling;
        return iHashCode29 + (vDimensionHandling != null ? vDimensionHandling.hashCode() : 0);
    }

    public String toString() {
        return "VVideoAdvancedConfig(videoBitrate=" + this.videoBitrate + ", audioBitrate=" + this.audioBitrate + ", customWidth=" + this.customWidth + ", customHeight=" + this.customHeight + ", frameRate=" + this.frameRate + ", videoCodec=" + this.videoCodec + ", audioCodec=" + this.audioCodec + ", encodingSpeed=" + this.encodingSpeed + ", crf=" + this.crf + ", twoPassEncoding=" + this.twoPassEncoding + ", hardwareAcceleration=" + this.hardwareAcceleration + ", trimStartMs=" + this.trimStartMs + ", trimEndMs=" + this.trimEndMs + ", rotation=" + this.rotation + ", cropRect=" + this.cropRect + ", audioSampleRate=" + this.audioSampleRate + ", audioChannels=" + this.audioChannels + ", removeAudio=" + this.removeAudio + ", autoCorrectOrientation=" + this.autoCorrectOrientation + ", brightness=" + this.brightness + ", contrast=" + this.contrast + ", saturation=" + this.saturation + ", variableBitrate=" + this.variableBitrate + ", keyframeInterval=" + this.keyframeInterval + ", bFrames=" + this.bFrames + ", reducedFrameRate=" + this.reducedFrameRate + ", aggressiveCompression=" + this.aggressiveCompression + ", noiseReduction=" + this.noiseReduction + ", monoAudio=" + this.monoAudio + ", dimensionHandling=" + this.dimensionHandling + ")";
    }

    public VVideoAdvancedConfig(Integer num, Integer num2, Integer num3, Integer num4, Double d, VVideoCodec vVideoCodec, VAudioCodec vAudioCodec, VEncodingSpeed vEncodingSpeed, Integer num5, Boolean bool, Boolean bool2, Integer num6, Integer num7, Integer num8, VVideoCropRect vVideoCropRect, Integer num9, Integer num10, Boolean bool3, Boolean bool4, Double d2, Double d3, Double d4, Boolean bool5, Integer num11, Integer num12, Double d5, Boolean bool6, Boolean bool7, Boolean bool8, VDimensionHandling vDimensionHandling) {
        this.videoBitrate = num;
        this.audioBitrate = num2;
        this.customWidth = num3;
        this.customHeight = num4;
        this.frameRate = d;
        this.videoCodec = vVideoCodec;
        this.audioCodec = vAudioCodec;
        this.encodingSpeed = vEncodingSpeed;
        this.crf = num5;
        this.twoPassEncoding = bool;
        this.hardwareAcceleration = bool2;
        this.trimStartMs = num6;
        this.trimEndMs = num7;
        this.rotation = num8;
        this.cropRect = vVideoCropRect;
        this.audioSampleRate = num9;
        this.audioChannels = num10;
        this.removeAudio = bool3;
        this.autoCorrectOrientation = bool4;
        this.brightness = d2;
        this.contrast = d3;
        this.saturation = d4;
        this.variableBitrate = bool5;
        this.keyframeInterval = num11;
        this.bFrames = num12;
        this.reducedFrameRate = d5;
        this.aggressiveCompression = bool6;
        this.noiseReduction = bool7;
        this.monoAudio = bool8;
        this.dimensionHandling = vDimensionHandling;
    }

    public /* synthetic */ VVideoAdvancedConfig(Integer num, Integer num2, Integer num3, Integer num4, Double d, VVideoCodec vVideoCodec, VAudioCodec vAudioCodec, VEncodingSpeed vEncodingSpeed, Integer num5, Boolean bool, Boolean bool2, Integer num6, Integer num7, Integer num8, VVideoCropRect vVideoCropRect, Integer num9, Integer num10, Boolean bool3, Boolean bool4, Double d2, Double d3, Double d4, Boolean bool5, Integer num11, Integer num12, Double d5, Boolean bool6, Boolean bool7, Boolean bool8, VDimensionHandling vDimensionHandling, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this((i & 1) != 0 ? null : num, (i & 2) != 0 ? null : num2, (i & 4) != 0 ? null : num3, (i & 8) != 0 ? null : num4, (i & 16) != 0 ? null : d, (i & 32) != 0 ? null : vVideoCodec, (i & 64) != 0 ? null : vAudioCodec, (i & 128) != 0 ? null : vEncodingSpeed, (i & 256) != 0 ? null : num5, (i & 512) != 0 ? null : bool, (i & 1024) != 0 ? null : bool2, (i & 2048) != 0 ? null : num6, (i & 4096) != 0 ? null : num7, (i & 8192) != 0 ? null : num8, (i & 16384) != 0 ? null : vVideoCropRect, (i & 32768) != 0 ? null : num9, (i & 65536) != 0 ? null : num10, (i & 131072) != 0 ? null : bool3, (i & 262144) != 0 ? null : bool4, (i & 524288) != 0 ? null : d2, (i & 1048576) != 0 ? null : d3, (i & 2097152) != 0 ? null : d4, (i & 4194304) != 0 ? null : bool5, (i & 8388608) != 0 ? null : num11, (i & 16777216) != 0 ? null : num12, (i & 33554432) != 0 ? null : d5, (i & 67108864) != 0 ? null : bool6, (i & C.BUFFER_FLAG_FIRST_SAMPLE) != 0 ? null : bool7, (i & 268435456) != 0 ? null : bool8, (i & C.BUFFER_FLAG_LAST_SAMPLE) != 0 ? null : vDimensionHandling);
    }

    public final Integer getVideoBitrate() {
        return this.videoBitrate;
    }

    public final Integer getAudioBitrate() {
        return this.audioBitrate;
    }

    public final Integer getCustomWidth() {
        return this.customWidth;
    }

    public final Integer getCustomHeight() {
        return this.customHeight;
    }

    public final Double getFrameRate() {
        return this.frameRate;
    }

    public final VVideoCodec getVideoCodec() {
        return this.videoCodec;
    }

    public final VAudioCodec getAudioCodec() {
        return this.audioCodec;
    }

    public final VEncodingSpeed getEncodingSpeed() {
        return this.encodingSpeed;
    }

    public final Integer getCrf() {
        return this.crf;
    }

    public final Boolean getTwoPassEncoding() {
        return this.twoPassEncoding;
    }

    public final Boolean getHardwareAcceleration() {
        return this.hardwareAcceleration;
    }

    public final Integer getTrimStartMs() {
        return this.trimStartMs;
    }

    public final Integer getTrimEndMs() {
        return this.trimEndMs;
    }

    public final Integer getRotation() {
        return this.rotation;
    }

    public final VVideoCropRect getCropRect() {
        return this.cropRect;
    }

    public final Integer getAudioSampleRate() {
        return this.audioSampleRate;
    }

    public final Integer getAudioChannels() {
        return this.audioChannels;
    }

    public final Boolean getRemoveAudio() {
        return this.removeAudio;
    }

    public final Boolean getAutoCorrectOrientation() {
        return this.autoCorrectOrientation;
    }

    public final Double getBrightness() {
        return this.brightness;
    }

    public final Double getContrast() {
        return this.contrast;
    }

    public final Double getSaturation() {
        return this.saturation;
    }

    public final Boolean getVariableBitrate() {
        return this.variableBitrate;
    }

    public final Integer getKeyframeInterval() {
        return this.keyframeInterval;
    }

    public final Integer getBFrames() {
        return this.bFrames;
    }

    public final Double getReducedFrameRate() {
        return this.reducedFrameRate;
    }

    public final Boolean getAggressiveCompression() {
        return this.aggressiveCompression;
    }

    public final Boolean getNoiseReduction() {
        return this.noiseReduction;
    }

    public final Boolean getMonoAudio() {
        return this.monoAudio;
    }

    public final VDimensionHandling getDimensionHandling() {
        return this.dimensionHandling;
    }

    /* JADX INFO: compiled from: VVideoModels.kt */
    @Metadata(d1 = {"\u0000\u001c\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010$\n\u0002\u0010\u000e\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J \u0010\u0004\u001a\u0004\u0018\u00010\u00052\u0016\u0010\u0006\u001a\u0012\u0012\u0004\u0012\u00020\b\u0012\u0006\u0012\u0004\u0018\u00010\u0001\u0018\u00010\u0007¨\u0006\t"}, d2 = {"Lcom/v_chat_sdk/v_video_compressor/VVideoAdvancedConfig$Companion;", "", "<init>", "()V", "fromMap", "Lcom/v_chat_sdk/v_video_compressor/VVideoAdvancedConfig;", "map", "", "", "v_video_compressor_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public final VVideoAdvancedConfig fromMap(Map<String, ? extends Object> map) {
            VVideoCropRect vVideoCropRectFromMap;
            if (map == null) {
                return null;
            }
            Object obj = map.get("cropRect");
            if (obj == null) {
                vVideoCropRectFromMap = null;
            } else if (obj instanceof Map) {
                VVideoCropRect.Companion companion = VVideoCropRect.INSTANCE;
                Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type kotlin.collections.Map<kotlin.String, kotlin.Any?>");
                vVideoCropRectFromMap = companion.fromMap((Map) obj);
            } else {
                throw new IllegalArgumentException("cropRect must be a map");
            }
            Object obj2 = map.get("dimensionHandling");
            String str = obj2 instanceof String ? (String) obj2 : null;
            VDimensionHandling vDimensionHandlingFromString = VDimensionHandling.INSTANCE.fromString(str);
            if (str != null && vDimensionHandlingFromString == null) {
                throw new IllegalArgumentException("Unknown dimensionHandling: " + str);
            }
            Object obj3 = map.get("videoBitrate");
            Number number = obj3 instanceof Number ? (Number) obj3 : null;
            Integer numValueOf = number != null ? Integer.valueOf(number.intValue()) : null;
            Object obj4 = map.get("audioBitrate");
            Number number2 = obj4 instanceof Number ? (Number) obj4 : null;
            Integer numValueOf2 = number2 != null ? Integer.valueOf(number2.intValue()) : null;
            Object obj5 = map.get("customWidth");
            Number number3 = obj5 instanceof Number ? (Number) obj5 : null;
            Integer numValueOf3 = number3 != null ? Integer.valueOf(number3.intValue()) : null;
            Object obj6 = map.get("customHeight");
            Number number4 = obj6 instanceof Number ? (Number) obj6 : null;
            Integer numValueOf4 = number4 != null ? Integer.valueOf(number4.intValue()) : null;
            Object obj7 = map.get(RRWebVideoEvent.JsonKeys.FRAME_RATE);
            Number number5 = obj7 instanceof Number ? (Number) obj7 : null;
            Double dValueOf = number5 != null ? Double.valueOf(number5.doubleValue()) : null;
            VVideoCodec.Companion companion2 = VVideoCodec.INSTANCE;
            Object obj8 = map.get("videoCodec");
            VVideoCodec vVideoCodecFromString = companion2.fromString(obj8 instanceof String ? (String) obj8 : null);
            VAudioCodec.Companion companion3 = VAudioCodec.INSTANCE;
            Object obj9 = map.get("audioCodec");
            VAudioCodec vAudioCodecFromString = companion3.fromString(obj9 instanceof String ? (String) obj9 : null);
            VEncodingSpeed.Companion companion4 = VEncodingSpeed.INSTANCE;
            Object obj10 = map.get("encodingSpeed");
            VEncodingSpeed vEncodingSpeedFromString = companion4.fromString(obj10 instanceof String ? (String) obj10 : null);
            Object obj11 = map.get("crf");
            Number number6 = obj11 instanceof Number ? (Number) obj11 : null;
            Integer numValueOf5 = number6 != null ? Integer.valueOf(number6.intValue()) : null;
            Object obj12 = map.get("twoPassEncoding");
            Boolean bool = obj12 instanceof Boolean ? (Boolean) obj12 : null;
            Object obj13 = map.get("hardwareAcceleration");
            Boolean bool2 = obj13 instanceof Boolean ? (Boolean) obj13 : null;
            Object obj14 = map.get("trimStartMs");
            Number number7 = obj14 instanceof Number ? (Number) obj14 : null;
            Integer numValueOf6 = number7 != null ? Integer.valueOf(number7.intValue()) : null;
            Object obj15 = map.get("trimEndMs");
            Number number8 = obj15 instanceof Number ? (Number) obj15 : null;
            Integer numValueOf7 = number8 != null ? Integer.valueOf(number8.intValue()) : null;
            Object obj16 = map.get("rotation");
            Integer num = numValueOf7;
            Number number9 = obj16 instanceof Number ? (Number) obj16 : null;
            Integer numValueOf8 = number9 != null ? Integer.valueOf(number9.intValue()) : null;
            Object obj17 = map.get("audioSampleRate");
            Integer num2 = numValueOf8;
            Number number10 = obj17 instanceof Number ? (Number) obj17 : null;
            Integer numValueOf9 = number10 != null ? Integer.valueOf(number10.intValue()) : null;
            Object obj18 = map.get("audioChannels");
            Integer num3 = numValueOf9;
            Number number11 = obj18 instanceof Number ? (Number) obj18 : null;
            Integer numValueOf10 = number11 != null ? Integer.valueOf(number11.intValue()) : null;
            Object obj19 = map.get("removeAudio");
            Integer num4 = numValueOf10;
            Boolean bool3 = obj19 instanceof Boolean ? (Boolean) obj19 : null;
            Object obj20 = map.get("autoCorrectOrientation");
            Boolean bool4 = bool3;
            Boolean bool5 = obj20 instanceof Boolean ? (Boolean) obj20 : null;
            Object obj21 = map.get("brightness");
            Boolean bool6 = bool5;
            Number number12 = obj21 instanceof Number ? (Number) obj21 : null;
            Double dValueOf2 = number12 != null ? Double.valueOf(number12.doubleValue()) : null;
            Object obj22 = map.get("contrast");
            Double d = dValueOf2;
            Number number13 = obj22 instanceof Number ? (Number) obj22 : null;
            Double dValueOf3 = number13 != null ? Double.valueOf(number13.doubleValue()) : null;
            Object obj23 = map.get("saturation");
            Double d2 = dValueOf3;
            Number number14 = obj23 instanceof Number ? (Number) obj23 : null;
            Double dValueOf4 = number14 != null ? Double.valueOf(number14.doubleValue()) : null;
            Object obj24 = map.get("variableBitrate");
            Double d3 = dValueOf4;
            Boolean bool7 = obj24 instanceof Boolean ? (Boolean) obj24 : null;
            Object obj25 = map.get("keyframeInterval");
            Boolean bool8 = bool7;
            Number number15 = obj25 instanceof Number ? (Number) obj25 : null;
            Integer numValueOf11 = number15 != null ? Integer.valueOf(number15.intValue()) : null;
            Object obj26 = map.get("bFrames");
            Integer num5 = numValueOf11;
            Number number16 = obj26 instanceof Number ? (Number) obj26 : null;
            Integer numValueOf12 = number16 != null ? Integer.valueOf(number16.intValue()) : null;
            Object obj27 = map.get("reducedFrameRate");
            Integer num6 = numValueOf12;
            Number number17 = obj27 instanceof Number ? (Number) obj27 : null;
            Double dValueOf5 = number17 != null ? Double.valueOf(number17.doubleValue()) : null;
            Object obj28 = map.get("aggressiveCompression");
            Double d4 = dValueOf5;
            Boolean bool9 = obj28 instanceof Boolean ? (Boolean) obj28 : null;
            Object obj29 = map.get("noiseReduction");
            Boolean bool10 = bool9;
            Boolean bool11 = obj29 instanceof Boolean ? (Boolean) obj29 : null;
            Object obj30 = map.get("monoAudio");
            VVideoAdvancedConfig vVideoAdvancedConfig = new VVideoAdvancedConfig(numValueOf, numValueOf2, numValueOf3, numValueOf4, dValueOf, vVideoCodecFromString, vAudioCodecFromString, vEncodingSpeedFromString, numValueOf5, bool, bool2, numValueOf6, num, num2, vVideoCropRectFromMap, num3, num4, bool4, bool6, d, d2, d3, bool8, num5, num6, d4, bool10, bool11, obj30 instanceof Boolean ? (Boolean) obj30 : null, vDimensionHandlingFromString);
            if (vVideoAdvancedConfig.getRotation() == null || CollectionsKt.listOf((Object[]) new Integer[]{0, 90, 180, 270}).contains(vVideoAdvancedConfig.getRotation())) {
                return vVideoAdvancedConfig;
            }
            throw new IllegalArgumentException("rotation must be 0, 90, 180, or 270".toString());
        }
    }
}
