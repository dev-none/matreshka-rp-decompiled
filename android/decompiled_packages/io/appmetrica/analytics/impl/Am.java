package io.appmetrica.analytics.impl;

import androidx.media3.extractor.ts.TsExtractor;
import androidx.recyclerview.widget.ItemTouchHelper;
import io.appmetrica.analytics.protobuf.nano.CodedInputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.CodedOutputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.InternalNano;
import io.appmetrica.analytics.protobuf.nano.InvalidProtocolBufferNanoException;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import io.appmetrica.analytics.protobuf.nano.WireFormatNano;
import java.io.IOException;

/* JADX INFO: loaded from: classes7.dex */
public final class Am extends MessageNano {
    public static final int D = -1;
    public static final int E = 0;
    public static final int F = 1;
    public static volatile Am[] G;
    public C2607ym A;
    public C2557wm[] B;
    public C2507um C;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public String f5600a;
    public long b;
    public String[] c;
    public String d;
    public String e;
    public String[] f;
    public String[] g;
    public C2482tm[] h;
    public C2532vm i;
    public String j;
    public String k;
    public String l;
    public boolean m;
    public String n;
    public String[] o;
    public C2632zm p;
    public boolean q;
    public String r;
    public long s;
    public long t;
    public boolean u;
    public C2582xm v;
    public int w;
    public int x;
    public C2457sm y;
    public C2432rm z;

    public Am() {
        a();
    }

    public static Am[] b() {
        if (G == null) {
            synchronized (InternalNano.LAZY_INIT_LOCK) {
                if (G == null) {
                    G = new Am[0];
                }
            }
        }
        return G;
    }

    public final Am a() {
        this.f5600a = "";
        this.b = 0L;
        String[] strArr = WireFormatNano.EMPTY_STRING_ARRAY;
        this.c = strArr;
        this.d = "";
        this.e = "";
        this.f = strArr;
        this.g = strArr;
        this.h = C2482tm.b();
        this.i = null;
        this.j = "";
        this.k = "";
        this.l = "";
        this.m = false;
        this.n = "";
        this.o = strArr;
        this.p = null;
        this.q = false;
        this.r = "";
        this.s = 0L;
        this.t = 0L;
        this.u = false;
        this.v = null;
        this.w = 600;
        this.x = 1;
        this.y = null;
        this.z = null;
        this.A = null;
        this.B = C2557wm.b();
        this.C = null;
        this.cachedSize = -1;
        return this;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final int computeSerializedSize() {
        int iComputeSerializedSize = super.computeSerializedSize();
        if (!this.f5600a.equals("")) {
            iComputeSerializedSize += CodedOutputByteBufferNano.computeStringSize(1, this.f5600a);
        }
        int iComputeInt64Size = CodedOutputByteBufferNano.computeInt64Size(2, this.b) + iComputeSerializedSize;
        String[] strArr = this.c;
        int i = 0;
        if (strArr != null && strArr.length > 0) {
            int i2 = 0;
            int iComputeStringSizeNoTag = 0;
            int i3 = 0;
            while (true) {
                String[] strArr2 = this.c;
                if (i2 >= strArr2.length) {
                    break;
                }
                String str = strArr2[i2];
                if (str != null) {
                    i3++;
                    iComputeStringSizeNoTag += CodedOutputByteBufferNano.computeStringSizeNoTag(str);
                }
                i2++;
            }
            iComputeInt64Size = iComputeInt64Size + iComputeStringSizeNoTag + i3;
        }
        if (!this.d.equals("")) {
            iComputeInt64Size += CodedOutputByteBufferNano.computeStringSize(4, this.d);
        }
        if (!this.e.equals("")) {
            iComputeInt64Size += CodedOutputByteBufferNano.computeStringSize(5, this.e);
        }
        String[] strArr3 = this.f;
        if (strArr3 != null && strArr3.length > 0) {
            int i4 = 0;
            int iComputeStringSizeNoTag2 = 0;
            int i5 = 0;
            while (true) {
                String[] strArr4 = this.f;
                if (i4 >= strArr4.length) {
                    break;
                }
                String str2 = strArr4[i4];
                if (str2 != null) {
                    i5++;
                    iComputeStringSizeNoTag2 += CodedOutputByteBufferNano.computeStringSizeNoTag(str2);
                }
                i4++;
            }
            iComputeInt64Size = iComputeInt64Size + iComputeStringSizeNoTag2 + i5;
        }
        String[] strArr5 = this.g;
        if (strArr5 != null && strArr5.length > 0) {
            int i6 = 0;
            int iComputeStringSizeNoTag3 = 0;
            int i7 = 0;
            while (true) {
                String[] strArr6 = this.g;
                if (i6 >= strArr6.length) {
                    break;
                }
                String str3 = strArr6[i6];
                if (str3 != null) {
                    i7++;
                    iComputeStringSizeNoTag3 += CodedOutputByteBufferNano.computeStringSizeNoTag(str3);
                }
                i6++;
            }
            iComputeInt64Size = iComputeInt64Size + iComputeStringSizeNoTag3 + i7;
        }
        C2482tm[] c2482tmArr = this.h;
        if (c2482tmArr != null && c2482tmArr.length > 0) {
            int i8 = 0;
            while (true) {
                C2482tm[] c2482tmArr2 = this.h;
                if (i8 >= c2482tmArr2.length) {
                    break;
                }
                C2482tm c2482tm = c2482tmArr2[i8];
                if (c2482tm != null) {
                    iComputeInt64Size += CodedOutputByteBufferNano.computeMessageSize(8, c2482tm);
                }
                i8++;
            }
        }
        C2532vm c2532vm = this.i;
        if (c2532vm != null) {
            iComputeInt64Size += CodedOutputByteBufferNano.computeMessageSize(9, c2532vm);
        }
        if (!this.j.equals("")) {
            iComputeInt64Size += CodedOutputByteBufferNano.computeStringSize(10, this.j);
        }
        if (!this.k.equals("")) {
            iComputeInt64Size += CodedOutputByteBufferNano.computeStringSize(11, this.k);
        }
        if (!this.l.equals("")) {
            iComputeInt64Size += CodedOutputByteBufferNano.computeStringSize(12, this.l);
        }
        int iComputeBoolSize = CodedOutputByteBufferNano.computeBoolSize(13, this.m) + iComputeInt64Size;
        if (!this.n.equals("")) {
            iComputeBoolSize += CodedOutputByteBufferNano.computeStringSize(14, this.n);
        }
        String[] strArr7 = this.o;
        if (strArr7 != null && strArr7.length > 0) {
            int i9 = 0;
            int iComputeStringSizeNoTag4 = 0;
            int i10 = 0;
            while (true) {
                String[] strArr8 = this.o;
                if (i9 >= strArr8.length) {
                    break;
                }
                String str4 = strArr8[i9];
                if (str4 != null) {
                    i10++;
                    iComputeStringSizeNoTag4 += CodedOutputByteBufferNano.computeStringSizeNoTag(str4);
                }
                i9++;
            }
            iComputeBoolSize = iComputeBoolSize + iComputeStringSizeNoTag4 + i10;
        }
        C2632zm c2632zm = this.p;
        if (c2632zm != null) {
            iComputeBoolSize += CodedOutputByteBufferNano.computeMessageSize(16, c2632zm);
        }
        boolean z = this.q;
        if (z) {
            iComputeBoolSize += CodedOutputByteBufferNano.computeBoolSize(17, z);
        }
        if (!this.r.equals("")) {
            iComputeBoolSize += CodedOutputByteBufferNano.computeStringSize(20, this.r);
        }
        int iComputeInt64Size2 = CodedOutputByteBufferNano.computeInt64Size(22, this.t) + CodedOutputByteBufferNano.computeInt64Size(21, this.s) + iComputeBoolSize;
        boolean z2 = this.u;
        if (z2) {
            iComputeInt64Size2 += CodedOutputByteBufferNano.computeBoolSize(23, z2);
        }
        C2582xm c2582xm = this.v;
        if (c2582xm != null) {
            iComputeInt64Size2 += CodedOutputByteBufferNano.computeMessageSize(24, c2582xm);
        }
        int iComputeInt32Size = CodedOutputByteBufferNano.computeInt32Size(26, this.x) + CodedOutputByteBufferNano.computeInt32Size(25, this.w) + iComputeInt64Size2;
        C2457sm c2457sm = this.y;
        if (c2457sm != null) {
            iComputeInt32Size += CodedOutputByteBufferNano.computeMessageSize(27, c2457sm);
        }
        C2432rm c2432rm = this.z;
        if (c2432rm != null) {
            iComputeInt32Size += CodedOutputByteBufferNano.computeMessageSize(29, c2432rm);
        }
        C2607ym c2607ym = this.A;
        if (c2607ym != null) {
            iComputeInt32Size += CodedOutputByteBufferNano.computeMessageSize(30, c2607ym);
        }
        C2557wm[] c2557wmArr = this.B;
        if (c2557wmArr != null && c2557wmArr.length > 0) {
            while (true) {
                C2557wm[] c2557wmArr2 = this.B;
                if (i >= c2557wmArr2.length) {
                    break;
                }
                C2557wm c2557wm = c2557wmArr2[i];
                if (c2557wm != null) {
                    iComputeInt32Size += CodedOutputByteBufferNano.computeMessageSize(31, c2557wm);
                }
                i++;
            }
        }
        C2507um c2507um = this.C;
        return c2507um != null ? CodedOutputByteBufferNano.computeMessageSize(32, c2507um) + iComputeInt32Size : iComputeInt32Size;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final void writeTo(CodedOutputByteBufferNano codedOutputByteBufferNano) throws IOException {
        if (!this.f5600a.equals("")) {
            codedOutputByteBufferNano.writeString(1, this.f5600a);
        }
        codedOutputByteBufferNano.writeInt64(2, this.b);
        String[] strArr = this.c;
        int i = 0;
        if (strArr != null && strArr.length > 0) {
            int i2 = 0;
            while (true) {
                String[] strArr2 = this.c;
                if (i2 >= strArr2.length) {
                    break;
                }
                String str = strArr2[i2];
                if (str != null) {
                    codedOutputByteBufferNano.writeString(3, str);
                }
                i2++;
            }
        }
        if (!this.d.equals("")) {
            codedOutputByteBufferNano.writeString(4, this.d);
        }
        if (!this.e.equals("")) {
            codedOutputByteBufferNano.writeString(5, this.e);
        }
        String[] strArr3 = this.f;
        if (strArr3 != null && strArr3.length > 0) {
            int i3 = 0;
            while (true) {
                String[] strArr4 = this.f;
                if (i3 >= strArr4.length) {
                    break;
                }
                String str2 = strArr4[i3];
                if (str2 != null) {
                    codedOutputByteBufferNano.writeString(6, str2);
                }
                i3++;
            }
        }
        String[] strArr5 = this.g;
        if (strArr5 != null && strArr5.length > 0) {
            int i4 = 0;
            while (true) {
                String[] strArr6 = this.g;
                if (i4 >= strArr6.length) {
                    break;
                }
                String str3 = strArr6[i4];
                if (str3 != null) {
                    codedOutputByteBufferNano.writeString(7, str3);
                }
                i4++;
            }
        }
        C2482tm[] c2482tmArr = this.h;
        if (c2482tmArr != null && c2482tmArr.length > 0) {
            int i5 = 0;
            while (true) {
                C2482tm[] c2482tmArr2 = this.h;
                if (i5 >= c2482tmArr2.length) {
                    break;
                }
                C2482tm c2482tm = c2482tmArr2[i5];
                if (c2482tm != null) {
                    codedOutputByteBufferNano.writeMessage(8, c2482tm);
                }
                i5++;
            }
        }
        C2532vm c2532vm = this.i;
        if (c2532vm != null) {
            codedOutputByteBufferNano.writeMessage(9, c2532vm);
        }
        if (!this.j.equals("")) {
            codedOutputByteBufferNano.writeString(10, this.j);
        }
        if (!this.k.equals("")) {
            codedOutputByteBufferNano.writeString(11, this.k);
        }
        if (!this.l.equals("")) {
            codedOutputByteBufferNano.writeString(12, this.l);
        }
        codedOutputByteBufferNano.writeBool(13, this.m);
        if (!this.n.equals("")) {
            codedOutputByteBufferNano.writeString(14, this.n);
        }
        String[] strArr7 = this.o;
        if (strArr7 != null && strArr7.length > 0) {
            int i6 = 0;
            while (true) {
                String[] strArr8 = this.o;
                if (i6 >= strArr8.length) {
                    break;
                }
                String str4 = strArr8[i6];
                if (str4 != null) {
                    codedOutputByteBufferNano.writeString(15, str4);
                }
                i6++;
            }
        }
        C2632zm c2632zm = this.p;
        if (c2632zm != null) {
            codedOutputByteBufferNano.writeMessage(16, c2632zm);
        }
        boolean z = this.q;
        if (z) {
            codedOutputByteBufferNano.writeBool(17, z);
        }
        if (!this.r.equals("")) {
            codedOutputByteBufferNano.writeString(20, this.r);
        }
        codedOutputByteBufferNano.writeInt64(21, this.s);
        codedOutputByteBufferNano.writeInt64(22, this.t);
        boolean z2 = this.u;
        if (z2) {
            codedOutputByteBufferNano.writeBool(23, z2);
        }
        C2582xm c2582xm = this.v;
        if (c2582xm != null) {
            codedOutputByteBufferNano.writeMessage(24, c2582xm);
        }
        codedOutputByteBufferNano.writeInt32(25, this.w);
        codedOutputByteBufferNano.writeInt32(26, this.x);
        C2457sm c2457sm = this.y;
        if (c2457sm != null) {
            codedOutputByteBufferNano.writeMessage(27, c2457sm);
        }
        C2432rm c2432rm = this.z;
        if (c2432rm != null) {
            codedOutputByteBufferNano.writeMessage(29, c2432rm);
        }
        C2607ym c2607ym = this.A;
        if (c2607ym != null) {
            codedOutputByteBufferNano.writeMessage(30, c2607ym);
        }
        C2557wm[] c2557wmArr = this.B;
        if (c2557wmArr != null && c2557wmArr.length > 0) {
            while (true) {
                C2557wm[] c2557wmArr2 = this.B;
                if (i >= c2557wmArr2.length) {
                    break;
                }
                C2557wm c2557wm = c2557wmArr2[i];
                if (c2557wm != null) {
                    codedOutputByteBufferNano.writeMessage(31, c2557wm);
                }
                i++;
            }
        }
        C2507um c2507um = this.C;
        if (c2507um != null) {
            codedOutputByteBufferNano.writeMessage(32, c2507um);
        }
        super.writeTo(codedOutputByteBufferNano);
    }

    public static Am b(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        return new Am().mergeFrom(codedInputByteBufferNano);
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final Am mergeFrom(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        while (true) {
            int tag = codedInputByteBufferNano.readTag();
            switch (tag) {
                case 0:
                    break;
                case 10:
                    this.f5600a = codedInputByteBufferNano.readString();
                    break;
                case 16:
                    this.b = codedInputByteBufferNano.readInt64();
                    break;
                case 26:
                    int repeatedFieldArrayLength = WireFormatNano.getRepeatedFieldArrayLength(codedInputByteBufferNano, 26);
                    String[] strArr = this.c;
                    int length = strArr == null ? 0 : strArr.length;
                    int i = repeatedFieldArrayLength + length;
                    String[] strArr2 = new String[i];
                    if (length != 0) {
                        System.arraycopy(strArr, 0, strArr2, 0, length);
                    }
                    while (length < i - 1) {
                        strArr2[length] = codedInputByteBufferNano.readString();
                        codedInputByteBufferNano.readTag();
                        length++;
                    }
                    strArr2[length] = codedInputByteBufferNano.readString();
                    this.c = strArr2;
                    break;
                case 34:
                    this.d = codedInputByteBufferNano.readString();
                    break;
                case 42:
                    this.e = codedInputByteBufferNano.readString();
                    break;
                case 50:
                    int repeatedFieldArrayLength2 = WireFormatNano.getRepeatedFieldArrayLength(codedInputByteBufferNano, 50);
                    String[] strArr3 = this.f;
                    int length2 = strArr3 == null ? 0 : strArr3.length;
                    int i2 = repeatedFieldArrayLength2 + length2;
                    String[] strArr4 = new String[i2];
                    if (length2 != 0) {
                        System.arraycopy(strArr3, 0, strArr4, 0, length2);
                    }
                    while (length2 < i2 - 1) {
                        strArr4[length2] = codedInputByteBufferNano.readString();
                        codedInputByteBufferNano.readTag();
                        length2++;
                    }
                    strArr4[length2] = codedInputByteBufferNano.readString();
                    this.f = strArr4;
                    break;
                case 58:
                    int repeatedFieldArrayLength3 = WireFormatNano.getRepeatedFieldArrayLength(codedInputByteBufferNano, 58);
                    String[] strArr5 = this.g;
                    int length3 = strArr5 == null ? 0 : strArr5.length;
                    int i3 = repeatedFieldArrayLength3 + length3;
                    String[] strArr6 = new String[i3];
                    if (length3 != 0) {
                        System.arraycopy(strArr5, 0, strArr6, 0, length3);
                    }
                    while (length3 < i3 - 1) {
                        strArr6[length3] = codedInputByteBufferNano.readString();
                        codedInputByteBufferNano.readTag();
                        length3++;
                    }
                    strArr6[length3] = codedInputByteBufferNano.readString();
                    this.g = strArr6;
                    break;
                case 66:
                    int repeatedFieldArrayLength4 = WireFormatNano.getRepeatedFieldArrayLength(codedInputByteBufferNano, 66);
                    C2482tm[] c2482tmArr = this.h;
                    int length4 = c2482tmArr == null ? 0 : c2482tmArr.length;
                    int i4 = repeatedFieldArrayLength4 + length4;
                    C2482tm[] c2482tmArr2 = new C2482tm[i4];
                    if (length4 != 0) {
                        System.arraycopy(c2482tmArr, 0, c2482tmArr2, 0, length4);
                    }
                    while (length4 < i4 - 1) {
                        C2482tm c2482tm = new C2482tm();
                        c2482tmArr2[length4] = c2482tm;
                        codedInputByteBufferNano.readMessage(c2482tm);
                        codedInputByteBufferNano.readTag();
                        length4++;
                    }
                    C2482tm c2482tm2 = new C2482tm();
                    c2482tmArr2[length4] = c2482tm2;
                    codedInputByteBufferNano.readMessage(c2482tm2);
                    this.h = c2482tmArr2;
                    break;
                case 74:
                    if (this.i == null) {
                        this.i = new C2532vm();
                    }
                    codedInputByteBufferNano.readMessage(this.i);
                    break;
                case 82:
                    this.j = codedInputByteBufferNano.readString();
                    break;
                case 90:
                    this.k = codedInputByteBufferNano.readString();
                    break;
                case 98:
                    this.l = codedInputByteBufferNano.readString();
                    break;
                case 104:
                    this.m = codedInputByteBufferNano.readBool();
                    break;
                case 114:
                    this.n = codedInputByteBufferNano.readString();
                    break;
                case 122:
                    int repeatedFieldArrayLength5 = WireFormatNano.getRepeatedFieldArrayLength(codedInputByteBufferNano, 122);
                    String[] strArr7 = this.o;
                    int length5 = strArr7 == null ? 0 : strArr7.length;
                    int i5 = repeatedFieldArrayLength5 + length5;
                    String[] strArr8 = new String[i5];
                    if (length5 != 0) {
                        System.arraycopy(strArr7, 0, strArr8, 0, length5);
                    }
                    while (length5 < i5 - 1) {
                        strArr8[length5] = codedInputByteBufferNano.readString();
                        codedInputByteBufferNano.readTag();
                        length5++;
                    }
                    strArr8[length5] = codedInputByteBufferNano.readString();
                    this.o = strArr8;
                    break;
                case TsExtractor.TS_STREAM_TYPE_HDMV_DTS /* 130 */:
                    if (this.p == null) {
                        this.p = new C2632zm();
                    }
                    codedInputByteBufferNano.readMessage(this.p);
                    break;
                case TsExtractor.TS_STREAM_TYPE_DTS_HD /* 136 */:
                    this.q = codedInputByteBufferNano.readBool();
                    break;
                case 162:
                    this.r = codedInputByteBufferNano.readString();
                    break;
                case 168:
                    this.s = codedInputByteBufferNano.readInt64();
                    break;
                case 176:
                    this.t = codedInputByteBufferNano.readInt64();
                    break;
                case 184:
                    this.u = codedInputByteBufferNano.readBool();
                    break;
                case 194:
                    if (this.v == null) {
                        this.v = new C2582xm();
                    }
                    codedInputByteBufferNano.readMessage(this.v);
                    break;
                case 200:
                    this.w = codedInputByteBufferNano.readInt32();
                    break;
                case 208:
                    this.x = codedInputByteBufferNano.readInt32();
                    break;
                case 218:
                    if (this.y == null) {
                        this.y = new C2457sm();
                    }
                    codedInputByteBufferNano.readMessage(this.y);
                    break;
                case 234:
                    if (this.z == null) {
                        this.z = new C2432rm();
                    }
                    codedInputByteBufferNano.readMessage(this.z);
                    break;
                case 242:
                    if (this.A == null) {
                        this.A = new C2607ym();
                    }
                    codedInputByteBufferNano.readMessage(this.A);
                    break;
                case ItemTouchHelper.Callback.DEFAULT_SWIPE_ANIMATION_DURATION /* 250 */:
                    int repeatedFieldArrayLength6 = WireFormatNano.getRepeatedFieldArrayLength(codedInputByteBufferNano, ItemTouchHelper.Callback.DEFAULT_SWIPE_ANIMATION_DURATION);
                    C2557wm[] c2557wmArr = this.B;
                    int length6 = c2557wmArr == null ? 0 : c2557wmArr.length;
                    int i6 = repeatedFieldArrayLength6 + length6;
                    C2557wm[] c2557wmArr2 = new C2557wm[i6];
                    if (length6 != 0) {
                        System.arraycopy(c2557wmArr, 0, c2557wmArr2, 0, length6);
                    }
                    while (length6 < i6 - 1) {
                        C2557wm c2557wm = new C2557wm();
                        c2557wmArr2[length6] = c2557wm;
                        codedInputByteBufferNano.readMessage(c2557wm);
                        codedInputByteBufferNano.readTag();
                        length6++;
                    }
                    C2557wm c2557wm2 = new C2557wm();
                    c2557wmArr2[length6] = c2557wm2;
                    codedInputByteBufferNano.readMessage(c2557wm2);
                    this.B = c2557wmArr2;
                    break;
                case 258:
                    if (this.C == null) {
                        this.C = new C2507um();
                    }
                    codedInputByteBufferNano.readMessage(this.C);
                    break;
                default:
                    if (!WireFormatNano.parseUnknownField(codedInputByteBufferNano, tag)) {
                    }
                    break;
            }
        }
        return this;
    }

    public static Am a(byte[] bArr) throws InvalidProtocolBufferNanoException {
        return (Am) MessageNano.mergeFrom(new Am(), bArr);
    }
}
