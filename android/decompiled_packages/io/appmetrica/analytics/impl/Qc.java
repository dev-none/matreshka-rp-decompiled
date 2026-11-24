package io.appmetrica.analytics.impl;

import android.content.Context;
import android.util.SparseArray;
import io.appmetrica.analytics.AppMetrica;

/* JADX INFO: loaded from: classes7.dex */
public abstract class Qc {
    public abstract void a(int i);

    public final synchronized void a(Context context) {
        int iB = b();
        int libraryApiLevel = AppMetrica.getLibraryApiLevel();
        if (iB != libraryApiLevel) {
            if (iB < libraryApiLevel) {
                SparseArray sparseArrayC = c();
                while (true) {
                    iB++;
                    if (iB > libraryApiLevel) {
                        break;
                    }
                    Pc pc = (Pc) sparseArrayC.get(iB);
                    if (pc != null) {
                        pc.a(context);
                    }
                }
            }
            a(libraryApiLevel);
        }
    }

    public abstract int b();

    public abstract SparseArray c();

    public final int a() {
        return AppMetrica.getLibraryApiLevel();
    }
}
