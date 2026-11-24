package com.my.target;

import android.content.Context;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import java.util.TreeSet;

/* JADX INFO: loaded from: classes6.dex */
public abstract class w5 {

    public static final class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static final boolean f4855a;
        public static final boolean b;

        static {
            boolean z;
            boolean z2 = true;
            try {
                Class.forName(b2.class.getName());
                z = true;
            } catch (Throwable unused) {
                gb.a("ExoPlayer doesn't exist, add ExoPlayer dependency to play video");
                z = false;
            }
            try {
                Class.forName("androidx.media3.exoplayer.hls.HlsMediaSource$Factory");
            } catch (Throwable unused2) {
                z2 = false;
            }
            f4855a = z;
            b = z2;
        }
    }

    public static boolean a() {
        return a.f4855a;
    }

    public static boolean b() {
        return a.b;
    }

    public static y a(boolean z, Context context) {
        if (z) {
            try {
                if (a()) {
                    return b2.a(context);
                }
            } catch (Throwable th) {
                gb.b("MediaUtils error: exception occurred while creating ExoVideoPlayer: " + th.getMessage());
            }
        }
        return r1.j();
    }

    public static float[] b(v5 v5Var, float[] fArr, float f) {
        Arrays.sort(fArr);
        TreeSet treeSet = new TreeSet();
        int i = 0;
        int i2 = 0;
        for (s5 s5Var : v5Var.d()) {
            if (i2 >= fArr.length) {
                gb.a("MediaUtils: Midroll mediabanner missing - not enough user midPoints");
                s5Var.d(-1.0f);
            } else {
                float f2 = fArr[i2];
                if (f2 > f) {
                    gb.a("MediaUtils: Cannot set midPoint " + f2 + " - out of duration");
                    s5Var.d(-1.0f);
                } else {
                    s5Var.d(f2);
                    treeSet.add(Float.valueOf(f2));
                    if (!"statistics".equals(s5Var.C())) {
                        i2++;
                    }
                }
            }
        }
        ArrayList arrayListG = v5Var.g();
        int size = arrayListG.size();
        int i3 = 0;
        while (i3 < size) {
            Object obj = arrayListG.get(i3);
            i3++;
            u uVar = (u) obj;
            if (i2 >= fArr.length) {
                gb.a("MediaUtils: Midroll service missing - not enough user midPoints");
                uVar.b(-1.0f);
            } else {
                float f3 = fArr[i2];
                if (f3 > f) {
                    gb.a("MediaUtils: Cannot set midPoint " + f3 + " - out of duration");
                    uVar.b(-1.0f);
                } else {
                    uVar.b(f3);
                    treeSet.add(Float.valueOf(f3));
                    i2++;
                }
            }
        }
        float[] fArr2 = new float[treeSet.size()];
        Iterator it = treeSet.iterator();
        while (it.hasNext()) {
            fArr2[i] = ((Float) it.next()).floatValue();
            i++;
        }
        return fArr2;
    }

    public static float[] a(float f, float[] fArr) {
        float[] fArr2 = new float[fArr.length];
        for (int i = 0; i < fArr.length; i++) {
            fArr2[i] = (f / 100.0f) * fArr[i];
        }
        return fArr2;
    }

    public static float[] a(v5 v5Var, float[] fArr, float f) {
        if (fArr != null && fArr.length != 0) {
            return b(v5Var, fArr, f);
        }
        return a(v5Var, f);
    }

    public static float[] a(w3 w3Var, float[] fArr, float f) {
        if (fArr != null && fArr.length != 0) {
            return b(w3Var, fArr, f);
        }
        return a(w3Var, f);
    }

    public static float[] a(v5 v5Var, float f) {
        float f2;
        float fY;
        TreeSet treeSet = new TreeSet();
        Iterator it = v5Var.d().iterator();
        while (true) {
            f2 = 10.0f;
            if (!it.hasNext()) {
                break;
            }
            s5 s5Var = (s5) it.next();
            float fS = s5Var.S();
            float fT = s5Var.T();
            if (fT >= 0.0f && fT <= 100.0f) {
                fS = f * (fT / 100.0f);
            } else if (fS < 0.0f || fS > f) {
                if (fS == -1.0f && fT == -1.0f) {
                    fS = f * 0.5f;
                } else {
                    gb.a("MediaUtils: Midroll banner " + s5Var.r() + " excluded, had point=" + fS + ", pointP=" + fT + ", content duration=" + f);
                }
            }
            float fRound = Math.round(fS * 10.0f) / 10.0f;
            s5Var.d(fRound);
            treeSet.add(Float.valueOf(fRound));
        }
        ArrayList arrayListG = v5Var.g();
        int size = arrayListG.size();
        int i = 0;
        int i2 = 0;
        while (i2 < size) {
            Object obj = arrayListG.get(i2);
            i2++;
            u uVar = (u) obj;
            float fY2 = uVar.y();
            float fZ = uVar.z();
            if (fZ < 0.0f || fZ > 100.0f) {
                if (fY2 >= 0.0f && fY2 <= f) {
                    fY = uVar.y();
                } else {
                    gb.a("MediaUtils: Midroll service " + uVar.s() + " excluded, had point=" + fY2 + ", pointP=" + fZ + ", content duration=" + f);
                }
                f2 = 10.0f;
            } else {
                fY = f * (fZ / 100.0f);
            }
            float fRound2 = Math.round(fY * f2) / f2;
            uVar.b(fRound2);
            treeSet.add(Float.valueOf(fRound2));
            f2 = 10.0f;
        }
        float[] fArr = new float[treeSet.size()];
        Iterator it2 = treeSet.iterator();
        while (it2.hasNext()) {
            fArr[i] = ((Float) it2.next()).floatValue();
            i++;
        }
        return fArr;
    }

    public static float[] b(w3 w3Var, float[] fArr, float f) {
        Arrays.sort(fArr);
        TreeSet treeSet = new TreeSet();
        int i = 0;
        int i2 = 0;
        for (k0 k0Var : w3Var.d()) {
            if (i2 >= fArr.length) {
                gb.a("MediaUtils: Midroll mediabanner missing - not enough user midPoints");
                k0Var.d(-1.0f);
            } else {
                float f2 = fArr[i2];
                if (f2 > f) {
                    gb.a("MediaUtils: Cannot set midPoint " + f2 + " - out of duration");
                    k0Var.d(-1.0f);
                } else {
                    k0Var.d(f2);
                    treeSet.add(Float.valueOf(f2));
                    if (!"statistics".equals(k0Var.C())) {
                        i2++;
                    }
                }
            }
        }
        for (u uVar : w3Var.g()) {
            if (i2 >= fArr.length) {
                gb.a("MediaUtils: Midroll service missing - not enough user midPoints");
                uVar.b(-1.0f);
            } else {
                float f3 = fArr[i2];
                if (f3 > f) {
                    gb.a("MediaUtils: Cannot set midPoint " + f3 + " - out of duration");
                    uVar.b(-1.0f);
                } else {
                    uVar.b(f3);
                    treeSet.add(Float.valueOf(f3));
                    i2++;
                }
            }
        }
        float[] fArr2 = new float[treeSet.size()];
        Iterator it = treeSet.iterator();
        while (it.hasNext()) {
            fArr2[i] = ((Float) it.next()).floatValue();
            i++;
        }
        return fArr2;
    }

    public static float[] a(w3 w3Var, float f) {
        float fY;
        TreeSet treeSet = new TreeSet();
        for (k0 k0Var : w3Var.d()) {
            float fS = k0Var.S();
            float fT = k0Var.T();
            if (fT >= 0.0f && fT <= 100.0f) {
                fS = f * (fT / 100.0f);
            } else if (fS < 0.0f || fS > f) {
                gb.a("MediaUtils: Midroll banner " + k0Var.r() + " excluded, had point=" + fS + ", pointP=" + fT + ", content duration=" + f);
            }
            float fRound = Math.round(fS * 10.0f) / 10.0f;
            k0Var.d(fRound);
            treeSet.add(Float.valueOf(fRound));
        }
        for (u uVar : w3Var.g()) {
            float fY2 = uVar.y();
            float fZ = uVar.z();
            if (fZ >= 0.0f && fZ <= 100.0f) {
                fY = (fZ / 100.0f) * f;
            } else if (fY2 >= 0.0f && fY2 <= f) {
                fY = uVar.y();
            } else {
                gb.a("MediaUtils: Midroll service " + uVar.s() + " excluded, had point=" + fY2 + ", pointP=" + fZ + ", content duration=" + f);
            }
            float fRound2 = Math.round(fY * 10.0f) / 10.0f;
            uVar.b(fRound2);
            treeSet.add(Float.valueOf(fRound2));
        }
        float[] fArr = new float[treeSet.size()];
        Iterator it = treeSet.iterator();
        int i = 0;
        while (it.hasNext()) {
            fArr[i] = ((Float) it.next()).floatValue();
            i++;
        }
        return fArr;
    }
}
