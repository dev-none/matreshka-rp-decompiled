package com.my.target;

import android.content.Context;
import android.util.DisplayMetrics;
import android.util.SparseIntArray;
import androidx.media3.extractor.ts.TsExtractor;

/* JADX INFO: loaded from: classes6.dex */
public class aa {
    public static int c;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final SparseIntArray f4535a = new SparseIntArray();
    public final float b;
    public static final int d = a();
    public static final int e = a();
    public static final int f = a();
    public static final int g = a();
    public static final int h = a();
    public static final int i = a();
    public static final int j = a();
    public static final int k = a();
    public static final int l = a();
    public static final int m = a();
    public static final int n = a();
    public static final int o = a();
    public static final int p = a();
    public static final int q = a();
    public static final int r = a();
    public static final int s = a();
    public static final int t = a();
    public static final int u = a();
    public static final int v = a();
    public static final int w = a();
    public static final int x = a();
    public static final int y = a();
    public static final int z = a();
    public static final int A = a();
    public static final int B = a();
    public static final int C = a();
    public static final int D = a();
    public static final int E = a();
    public static final int F = a();
    public static final int G = a();
    public static final int H = a();
    public static final int I = a();
    public static final int J = a();
    public static final int K = a();
    public static final int L = a();
    public static final int M = a();
    public static final int N = a();
    public static final int O = a();
    public static final int P = a();
    public static final int Q = a();
    public static final int R = a();
    public static final int S = a();
    public static final int T = a();
    public static final int U = a();
    public static final int V = a();
    public static final int W = a();
    public static final int X = a();
    public static final int Y = a();

    public aa(Context context) {
        int i2;
        kb kbVarE = kb.e(context);
        DisplayMetrics displayMetricsA = kb.a(context);
        int i3 = displayMetricsA.heightPixels;
        if (i3 <= 0 || (i2 = displayMetricsA.widthPixels) <= 0) {
            this.b = 1.0f;
            a(kbVarE);
            return;
        }
        float f2 = displayMetricsA.density;
        float fMin = Math.min(i2 / f2, i3 / f2);
        if (fMin >= 720.0f) {
            this.b = 2.0f;
        } else if (fMin >= 600.0f) {
            this.b = 1.2f;
        } else {
            this.b = 1.0f;
        }
        a(kbVarE);
    }

    public static aa a(Context context) {
        return new aa(context);
    }

    public static int a() {
        int i2 = c;
        c = i2 + 1;
        return i2;
    }

    public int a(int i2) {
        return this.f4535a.get(i2);
    }

    public final void a(kb kbVar) {
        a(d, kbVar.b(200));
        a(e, kbVar.b(1));
        a(f, kbVar.b(4));
        a(g, 1);
        a(h, 18);
        a(i, kbVar.b(16));
        a(j, kbVar.b(8));
        a(k, kbVar.b(6));
        a(l, kbVar.b(2));
        a(m, kbVar.b(48));
        a(n, kbVar.b(6));
        a(o, kbVar.b(6));
        a(p, kbVar.b(14));
        a(q, kbVar.b(20));
        a(r, kbVar.b(27));
        a(s, 22);
        a(t, 2);
        a(u, 16);
        a(v, 3);
        a(w, 16);
        a(x, kbVar.b(6));
        a(y, kbVar.b(2));
        a(z, 1);
        a(A, kbVar.b(3));
        a(C, 16);
        a(X, 14);
        a(B, 1);
        a(D, 2);
        a(E, 2);
        a(F, kbVar.b(32));
        a(G, kbVar.b(16));
        a(I, kbVar.b(2));
        a(J, 16);
        a(L, 16);
        a(M, 2);
        a(N, 14);
        a(K, 22);
        a(Q, 16);
        a(R, 16);
        a(O, kbVar.b(4));
        a(P, kbVar.b(8));
        a(S, kbVar.b(100));
        a(T, kbVar.b(32));
        a(U, kbVar.b(TsExtractor.TS_STREAM_TYPE_DTS_HD));
        a(V, kbVar.b(156));
        a(H, kbVar.b(24));
        a(W, kbVar.b(10));
        a(Y, kbVar.b(40));
    }

    public final void a(int i2, int i3) {
        this.f4535a.put(i2, (int) (i3 * this.b));
    }
}
