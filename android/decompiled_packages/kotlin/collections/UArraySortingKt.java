package kotlin.collections;

import androidx.media3.extractor.text.ttml.TtmlNode;
import kotlin.Metadata;
import kotlin.UByteArray;
import kotlin.UIntArray;
import kotlin.ULongArray;
import kotlin.UShort;
import kotlin.UShortArray;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: UArraySorting.kt */
/* JADX INFO: loaded from: classes7.dex */
@Metadata(d1 = {"\u00000\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\f\u001a'\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u00012\u0006\u0010\u0005\u001a\u00020\u0001H\u0003¢\u0006\u0004\b\u0006\u0010\u0007\u001a'\u0010\b\u001a\u00020\t2\u0006\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u00012\u0006\u0010\u0005\u001a\u00020\u0001H\u0003¢\u0006\u0004\b\n\u0010\u000b\u001a'\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\f2\u0006\u0010\u0004\u001a\u00020\u00012\u0006\u0010\u0005\u001a\u00020\u0001H\u0003¢\u0006\u0004\b\r\u0010\u000e\u001a'\u0010\b\u001a\u00020\t2\u0006\u0010\u0002\u001a\u00020\f2\u0006\u0010\u0004\u001a\u00020\u00012\u0006\u0010\u0005\u001a\u00020\u0001H\u0003¢\u0006\u0004\b\u000f\u0010\u0010\u001a'\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u00112\u0006\u0010\u0004\u001a\u00020\u00012\u0006\u0010\u0005\u001a\u00020\u0001H\u0003¢\u0006\u0004\b\u0012\u0010\u0013\u001a'\u0010\b\u001a\u00020\t2\u0006\u0010\u0002\u001a\u00020\u00112\u0006\u0010\u0004\u001a\u00020\u00012\u0006\u0010\u0005\u001a\u00020\u0001H\u0003¢\u0006\u0004\b\u0014\u0010\u0015\u001a'\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u00162\u0006\u0010\u0004\u001a\u00020\u00012\u0006\u0010\u0005\u001a\u00020\u0001H\u0003¢\u0006\u0004\b\u0017\u0010\u0018\u001a'\u0010\b\u001a\u00020\t2\u0006\u0010\u0002\u001a\u00020\u00162\u0006\u0010\u0004\u001a\u00020\u00012\u0006\u0010\u0005\u001a\u00020\u0001H\u0003¢\u0006\u0004\b\u0019\u0010\u001a\u001a'\u0010\u001b\u001a\u00020\t2\u0006\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u001c\u001a\u00020\u00012\u0006\u0010\u001d\u001a\u00020\u0001H\u0001¢\u0006\u0004\b\u001e\u0010\u000b\u001a'\u0010\u001b\u001a\u00020\t2\u0006\u0010\u0002\u001a\u00020\f2\u0006\u0010\u001c\u001a\u00020\u00012\u0006\u0010\u001d\u001a\u00020\u0001H\u0001¢\u0006\u0004\b\u001f\u0010\u0010\u001a'\u0010\u001b\u001a\u00020\t2\u0006\u0010\u0002\u001a\u00020\u00112\u0006\u0010\u001c\u001a\u00020\u00012\u0006\u0010\u001d\u001a\u00020\u0001H\u0001¢\u0006\u0004\b \u0010\u0015\u001a'\u0010\u001b\u001a\u00020\t2\u0006\u0010\u0002\u001a\u00020\u00162\u0006\u0010\u001c\u001a\u00020\u00012\u0006\u0010\u001d\u001a\u00020\u0001H\u0001¢\u0006\u0004\b!\u0010\u001a¨\u0006\""}, d2 = {"partition", "", "array", "Lkotlin/UByteArray;", "left", TtmlNode.RIGHT, "partition-4UcCI2c", "([BII)I", "quickSort", "", "quickSort-4UcCI2c", "([BII)V", "Lkotlin/UShortArray;", "partition-Aa5vz7o", "([SII)I", "quickSort-Aa5vz7o", "([SII)V", "Lkotlin/UIntArray;", "partition-oBK06Vg", "([III)I", "quickSort-oBK06Vg", "([III)V", "Lkotlin/ULongArray;", "partition--nroSd4", "([JII)I", "quickSort--nroSd4", "([JII)V", "sortArray", "fromIndex", "toIndex", "sortArray-4UcCI2c", "sortArray-Aa5vz7o", "sortArray-oBK06Vg", "sortArray--nroSd4", "kotlin-stdlib"}, k = 2, mv = {2, 2, 0}, xi = 48)
public final class UArraySortingKt {
    /* JADX INFO: renamed from: partition-4UcCI2c, reason: not valid java name */
    private static final int m10321partition4UcCI2c(byte[] bArr, int i, int i2) {
        int i3;
        byte bM9937getw2LRezQ = UByteArray.m9937getw2LRezQ(bArr, (i + i2) / 2);
        while (i <= i2) {
            while (true) {
                i3 = bM9937getw2LRezQ & 255;
                if (Intrinsics.compare(UByteArray.m9937getw2LRezQ(bArr, i) & 255, i3) >= 0) {
                    break;
                }
                i++;
            }
            while (Intrinsics.compare(UByteArray.m9937getw2LRezQ(bArr, i2) & 255, i3) > 0) {
                i2--;
            }
            if (i <= i2) {
                byte bM9937getw2LRezQ2 = UByteArray.m9937getw2LRezQ(bArr, i);
                UByteArray.m9942setVurrAj0(bArr, i, UByteArray.m9937getw2LRezQ(bArr, i2));
                UByteArray.m9942setVurrAj0(bArr, i2, bM9937getw2LRezQ2);
                i++;
                i2--;
            }
        }
        return i;
    }

    /* JADX INFO: renamed from: quickSort-4UcCI2c, reason: not valid java name */
    private static final void m10325quickSort4UcCI2c(byte[] bArr, int i, int i2) {
        int iM10321partition4UcCI2c = m10321partition4UcCI2c(bArr, i, i2);
        int i3 = iM10321partition4UcCI2c - 1;
        if (i < i3) {
            m10325quickSort4UcCI2c(bArr, i, i3);
        }
        if (iM10321partition4UcCI2c < i2) {
            m10325quickSort4UcCI2c(bArr, iM10321partition4UcCI2c, i2);
        }
    }

    /* JADX INFO: renamed from: partition-Aa5vz7o, reason: not valid java name */
    private static final int m10322partitionAa5vz7o(short[] sArr, int i, int i2) {
        int i3;
        short sM10200getMh2AYeg = UShortArray.m10200getMh2AYeg(sArr, (i + i2) / 2);
        while (i <= i2) {
            while (true) {
                int iM10200getMh2AYeg = UShortArray.m10200getMh2AYeg(sArr, i) & UShort.MAX_VALUE;
                i3 = sM10200getMh2AYeg & UShort.MAX_VALUE;
                if (Intrinsics.compare(iM10200getMh2AYeg, i3) >= 0) {
                    break;
                }
                i++;
            }
            while (Intrinsics.compare(UShortArray.m10200getMh2AYeg(sArr, i2) & UShort.MAX_VALUE, i3) > 0) {
                i2--;
            }
            if (i <= i2) {
                short sM10200getMh2AYeg2 = UShortArray.m10200getMh2AYeg(sArr, i);
                UShortArray.m10205set01HTLdE(sArr, i, UShortArray.m10200getMh2AYeg(sArr, i2));
                UShortArray.m10205set01HTLdE(sArr, i2, sM10200getMh2AYeg2);
                i++;
                i2--;
            }
        }
        return i;
    }

    /* JADX INFO: renamed from: quickSort-Aa5vz7o, reason: not valid java name */
    private static final void m10326quickSortAa5vz7o(short[] sArr, int i, int i2) {
        int iM10322partitionAa5vz7o = m10322partitionAa5vz7o(sArr, i, i2);
        int i3 = iM10322partitionAa5vz7o - 1;
        if (i < i3) {
            m10326quickSortAa5vz7o(sArr, i, i3);
        }
        if (iM10322partitionAa5vz7o < i2) {
            m10326quickSortAa5vz7o(sArr, iM10322partitionAa5vz7o, i2);
        }
    }

    /* JADX INFO: renamed from: partition-oBK06Vg, reason: not valid java name */
    private static final int m10323partitionoBK06Vg(int[] iArr, int i, int i2) {
        int iM10016getpVg5ArA = UIntArray.m10016getpVg5ArA(iArr, (i + i2) / 2);
        while (i <= i2) {
            while (Integer.compareUnsigned(UIntArray.m10016getpVg5ArA(iArr, i), iM10016getpVg5ArA) < 0) {
                i++;
            }
            while (Integer.compareUnsigned(UIntArray.m10016getpVg5ArA(iArr, i2), iM10016getpVg5ArA) > 0) {
                i2--;
            }
            if (i <= i2) {
                int iM10016getpVg5ArA2 = UIntArray.m10016getpVg5ArA(iArr, i);
                UIntArray.m10021setVXSXFK8(iArr, i, UIntArray.m10016getpVg5ArA(iArr, i2));
                UIntArray.m10021setVXSXFK8(iArr, i2, iM10016getpVg5ArA2);
                i++;
                i2--;
            }
        }
        return i;
    }

    /* JADX INFO: renamed from: quickSort-oBK06Vg, reason: not valid java name */
    private static final void m10327quickSortoBK06Vg(int[] iArr, int i, int i2) {
        int iM10323partitionoBK06Vg = m10323partitionoBK06Vg(iArr, i, i2);
        int i3 = iM10323partitionoBK06Vg - 1;
        if (i < i3) {
            m10327quickSortoBK06Vg(iArr, i, i3);
        }
        if (iM10323partitionoBK06Vg < i2) {
            m10327quickSortoBK06Vg(iArr, iM10323partitionoBK06Vg, i2);
        }
    }

    /* JADX INFO: renamed from: partition--nroSd4, reason: not valid java name */
    private static final int m10320partitionnroSd4(long[] jArr, int i, int i2) {
        long jM10095getsVKNKU = ULongArray.m10095getsVKNKU(jArr, (i + i2) / 2);
        while (i <= i2) {
            while (Long.compareUnsigned(ULongArray.m10095getsVKNKU(jArr, i), jM10095getsVKNKU) < 0) {
                i++;
            }
            while (Long.compareUnsigned(ULongArray.m10095getsVKNKU(jArr, i2), jM10095getsVKNKU) > 0) {
                i2--;
            }
            if (i <= i2) {
                long jM10095getsVKNKU2 = ULongArray.m10095getsVKNKU(jArr, i);
                ULongArray.m10100setk8EXiF4(jArr, i, ULongArray.m10095getsVKNKU(jArr, i2));
                ULongArray.m10100setk8EXiF4(jArr, i2, jM10095getsVKNKU2);
                i++;
                i2--;
            }
        }
        return i;
    }

    /* JADX INFO: renamed from: quickSort--nroSd4, reason: not valid java name */
    private static final void m10324quickSortnroSd4(long[] jArr, int i, int i2) {
        int iM10320partitionnroSd4 = m10320partitionnroSd4(jArr, i, i2);
        int i3 = iM10320partitionnroSd4 - 1;
        if (i < i3) {
            m10324quickSortnroSd4(jArr, i, i3);
        }
        if (iM10320partitionnroSd4 < i2) {
            m10324quickSortnroSd4(jArr, iM10320partitionnroSd4, i2);
        }
    }

    /* JADX INFO: renamed from: sortArray-4UcCI2c, reason: not valid java name */
    public static final void m10329sortArray4UcCI2c(byte[] bArr, int i, int i2) {
        Intrinsics.checkNotNullParameter(bArr, "$v$c$kotlin-UByteArray$-array$0");
        m10325quickSort4UcCI2c(bArr, i, i2 - 1);
    }

    /* JADX INFO: renamed from: sortArray-Aa5vz7o, reason: not valid java name */
    public static final void m10330sortArrayAa5vz7o(short[] sArr, int i, int i2) {
        Intrinsics.checkNotNullParameter(sArr, "$v$c$kotlin-UShortArray$-array$0");
        m10326quickSortAa5vz7o(sArr, i, i2 - 1);
    }

    /* JADX INFO: renamed from: sortArray-oBK06Vg, reason: not valid java name */
    public static final void m10331sortArrayoBK06Vg(int[] iArr, int i, int i2) {
        Intrinsics.checkNotNullParameter(iArr, "$v$c$kotlin-UIntArray$-array$0");
        m10327quickSortoBK06Vg(iArr, i, i2 - 1);
    }

    /* JADX INFO: renamed from: sortArray--nroSd4, reason: not valid java name */
    public static final void m10328sortArraynroSd4(long[] jArr, int i, int i2) {
        Intrinsics.checkNotNullParameter(jArr, "$v$c$kotlin-ULongArray$-array$0");
        m10324quickSortnroSd4(jArr, i, i2 - 1);
    }
}
