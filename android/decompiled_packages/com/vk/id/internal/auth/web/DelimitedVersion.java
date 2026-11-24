package com.vk.id.internal.auth.web;

import androidx.media3.exoplayer.upstream.CmcdData;
import io.sentry.protocol.Request;
import java.util.List;
import java.util.ListIterator;
import kotlin.Metadata;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.JvmStatic;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.Regex;
import org.apache.commons.io.FilenameUtils;

/* JADX INFO: compiled from: DelimitedVersion.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000,\n\u0002\u0018\u0002\n\u0002\u0010\u000f\n\u0000\n\u0002\u0010\u0016\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\b\u0001\u0018\u0000 \u000f2\b\u0012\u0004\u0012\u00020\u00000\u0001:\u0001\u000fB\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\b\u0010\u0006\u001a\u00020\u0007H\u0016J\u0013\u0010\b\u001a\u00020\t2\b\u0010\n\u001a\u0004\u0018\u00010\u000bH\u0096\u0002J\b\u0010\f\u001a\u00020\rH\u0016J\u0011\u0010\u000e\u001a\u00020\r2\u0006\u0010\n\u001a\u00020\u0000H\u0096\u0002R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0010"}, d2 = {"Lcom/vk/id/internal/auth/web/DelimitedVersion;", "", "mNumericParts", "", "<init>", "([J)V", "toString", "", "equals", "", Request.JsonKeys.OTHER, "", "hashCode", "", "compareTo", "Companion", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class DelimitedVersion implements Comparable<DelimitedVersion> {
    private static final long BIT_MASK_32 = -1;
    private static final int PRIME_HASH_FACTOR = 92821;
    private final long[] mNumericParts;

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    public static final int $stable = 8;

    @JvmStatic
    public static final DelimitedVersion parse(String str) {
        return INSTANCE.parse(str);
    }

    public DelimitedVersion(long[] mNumericParts) {
        Intrinsics.checkNotNullParameter(mNumericParts, "mNumericParts");
        this.mNumericParts = mNumericParts;
    }

    public String toString() {
        if (this.mNumericParts.length == 0) {
            return "0";
        }
        StringBuilder sb = new StringBuilder();
        sb.append(this.mNumericParts[0]);
        for (int i = 1; i < this.mNumericParts.length; i++) {
            sb.append(FilenameUtils.EXTENSION_SEPARATOR);
            sb.append(this.mNumericParts[i]);
        }
        String string = sb.toString();
        Intrinsics.checkNotNullExpressionValue(string, "toString(...)");
        return string;
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        return other != null && (other instanceof DelimitedVersion) && compareTo((DelimitedVersion) other) == 0;
    }

    public int hashCode() {
        int i = 0;
        for (long j : this.mNumericParts) {
            i = (i * PRIME_HASH_FACTOR) + ((int) j);
        }
        return i;
    }

    @Override // java.lang.Comparable
    public int compareTo(DelimitedVersion other) {
        long[] jArr;
        Intrinsics.checkNotNullParameter(other, "other");
        int i = 0;
        while (true) {
            jArr = this.mNumericParts;
            if (i >= jArr.length) {
                break;
            }
            long[] jArr2 = other.mNumericParts;
            if (i >= jArr2.length) {
                break;
            }
            int iCompareLongs = INSTANCE.compareLongs(jArr[i], jArr2[i]);
            if (iCompareLongs != 0) {
                return iCompareLongs;
            }
            i++;
        }
        return INSTANCE.compareLongs(jArr.length, other.mNumericParts.length);
    }

    /* JADX INFO: compiled from: DelimitedVersion.kt */
    @Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\b\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0004\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0012\u0010\b\u001a\u00020\t2\b\u0010\n\u001a\u0004\u0018\u00010\u000bH\u0007J\u0018\u0010\f\u001a\u00020\u00052\u0006\u0010\r\u001a\u00020\u00072\u0006\u0010\u000e\u001a\u00020\u0007H\u0002R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082T¢\u0006\u0002\n\u0000¨\u0006\u000f"}, d2 = {"Lcom/vk/id/internal/auth/web/DelimitedVersion$Companion;", "", "<init>", "()V", "PRIME_HASH_FACTOR", "", "BIT_MASK_32", "", "parse", "Lcom/vk/id/internal/auth/web/DelimitedVersion;", "versionString", "", "compareLongs", CmcdData.OBJECT_TYPE_AUDIO_ONLY, "b", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        /* JADX INFO: Access modifiers changed from: private */
        public final int compareLongs(long a2, long b) {
            if (a2 < b) {
                return -1;
            }
            return a2 > b ? 1 : 0;
        }

        private Companion() {
        }

        @JvmStatic
        public final DelimitedVersion parse(String versionString) {
            List listEmptyList;
            if (versionString == null) {
                return new DelimitedVersion(new long[0]);
            }
            List<String> listSplit = new Regex("[^0-9]+").split(versionString, 0);
            if (!listSplit.isEmpty()) {
                ListIterator<String> listIterator = listSplit.listIterator(listSplit.size());
                while (true) {
                    if (listIterator.hasPrevious()) {
                        if (listIterator.previous().length() != 0) {
                            listEmptyList = CollectionsKt.take(listSplit, listIterator.nextIndex() + 1);
                            break;
                        }
                    } else {
                        listEmptyList = CollectionsKt.emptyList();
                        break;
                    }
                }
            } else {
                listEmptyList = CollectionsKt.emptyList();
                break;
            }
            String[] strArr = (String[]) listEmptyList.toArray(new String[0]);
            long[] jArr = new long[strArr.length];
            int i = 0;
            for (String str : strArr) {
                if (str.length() != 0) {
                    jArr[i] = Long.parseLong(str);
                    i++;
                }
            }
            do {
                i--;
                if (i < 0) {
                    break;
                }
            } while (jArr[i] <= 0);
            int i2 = i + 1;
            long[] jArr2 = new long[i2];
            System.arraycopy(jArr, 0, jArr2, 0, i2);
            return new DelimitedVersion(jArr2);
        }
    }
}
