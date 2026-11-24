package com.v_chat_sdk.v_video_compressor;

import androidx.media3.transformer.ExportException;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Set;
import kotlin.Metadata;
import kotlin.collections.CollectionsKt;
import kotlin.collections.SetsKt;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;

/* JADX INFO: compiled from: VVideoExportError.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u00006\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\"\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0006\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010 \n\u0002\b\u0002\n\u0002\u0010\t\n\u0002\b\u0003\bÁ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u0007\u001a\u00020\b2\u0006\u0010\t\u001a\u00020\u0006J&\u0010\n\u001a\u00020\b2\u0006\u0010\t\u001a\u00020\u00062\u0006\u0010\u000b\u001a\u00020\b2\u0006\u0010\f\u001a\u00020\u00062\u0006\u0010\r\u001a\u00020\u0006JE\u0010\u000e\u001a\u00020\u000f2\u0006\u0010\t\u001a\u00020\u00062\u0006\u0010\u0010\u001a\u00020\u000f2\f\u0010\u0011\u001a\b\u0012\u0004\u0012\u00020\u000f0\u00122\b\u0010\u0013\u001a\u0004\u0018\u00010\u000f2\b\u0010\u0014\u001a\u0004\u0018\u00010\u00152\u0006\u0010\u0016\u001a\u00020\u000f¢\u0006\u0002\u0010\u0017R\u0014\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0018"}, d2 = {"Lcom/v_chat_sdk/v_video_compressor/VVideoExportError;", "", "<init>", "()V", "muxerErrorCodes", "", "", "isMuxerError", "", "errorCode", "shouldRetry", "isCodecCapacityError", "retryCount", "maxRetries", "format", "", "errorCodeName", "causeMessages", "", "codecInfo", "availableStorageBytes", "", "deviceDescription", "(ILjava/lang/String;Ljava/util/List;Ljava/lang/String;Ljava/lang/Long;Ljava/lang/String;)Ljava/lang/String;", "v_video_compressor_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class VVideoExportError {
    public static final VVideoExportError INSTANCE = new VVideoExportError();
    private static final Set<Integer> muxerErrorCodes = SetsKt.setOf((Object[]) new Integer[]{7001, Integer.valueOf(ExportException.ERROR_CODE_MUXING_TIMEOUT), Integer.valueOf(ExportException.ERROR_CODE_MUXING_APPEND)});

    private VVideoExportError() {
    }

    public final boolean isMuxerError(int errorCode) {
        return muxerErrorCodes.contains(Integer.valueOf(errorCode));
    }

    public final boolean shouldRetry(int errorCode, boolean isCodecCapacityError, int retryCount, int maxRetries) {
        if (retryCount >= maxRetries) {
            return false;
        }
        if (isCodecCapacityError) {
            return true;
        }
        return retryCount == 0 && isMuxerError(errorCode);
    }

    public final String format(int errorCode, String errorCodeName, List<String> causeMessages, String codecInfo, Long availableStorageBytes, String deviceDescription) {
        String str;
        Intrinsics.checkNotNullParameter(errorCodeName, "errorCodeName");
        Intrinsics.checkNotNullParameter(causeMessages, "causeMessages");
        Intrinsics.checkNotNullParameter(deviceDescription, "deviceDescription");
        if (errorCode == 2005) {
            str = "The input video file was not found";
        } else if (errorCode == 2006) {
            str = "The input or output file could not be accessed";
        } else if (errorCode == 4001) {
            str = "Failed to initialize the video encoder";
        } else if (errorCode != 4003) {
            switch (errorCode) {
                case 7001:
                    str = "Failed to write the MP4 output";
                    break;
                case ExportException.ERROR_CODE_MUXING_TIMEOUT /* 7002 */:
                    str = "Timed out while writing MP4 samples";
                    break;
                case ExportException.ERROR_CODE_MUXING_APPEND /* 7003 */:
                    str = "The input tracks could not be appended to the MP4 output";
                    break;
                default:
                    str = "Video compression failed";
                    break;
            }
        } else {
            str = "The requested video format is not supported";
        }
        List listMutableListOf = CollectionsKt.mutableListOf(str + " [" + errorCodeName + "/" + errorCode + "]");
        List<String> list = causeMessages;
        ArrayList arrayList = new ArrayList(CollectionsKt.collectionSizeOrDefault(list, 10));
        Iterator<T> it = list.iterator();
        while (it.hasNext()) {
            arrayList.add(StringsKt.trim((CharSequence) it.next()).toString());
        }
        ArrayList arrayList2 = new ArrayList();
        for (Object obj : arrayList) {
            if (((String) obj).length() > 0) {
                arrayList2.add(obj);
            }
        }
        List listTake = CollectionsKt.take(CollectionsKt.distinct(arrayList2), 4);
        if (listTake.isEmpty()) {
            listTake = null;
        }
        if (listTake != null) {
            listMutableListOf.add(CollectionsKt.joinToString$default(listTake, " -> ", null, null, 0, null, null, 62, null));
        }
        if (codecInfo != null) {
            String str2 = StringsKt.isBlank(codecInfo) ? null : codecInfo;
            if (str2 != null) {
                listMutableListOf.add("Codec: " + str2);
            }
        }
        if (availableStorageBytes != null) {
            listMutableListOf.add("Free output storage: " + (availableStorageBytes.longValue() / ((long) 1048576)) + " MB");
        }
        listMutableListOf.add("Device: " + deviceDescription);
        return CollectionsKt.joinToString$default(listMutableListOf, "; ", null, null, 0, null, null, 62, null);
    }
}
