package com.my.tracker.obfuscated;

import android.util.SparseArray;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes6.dex */
public class x {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final SparseArray f5007a = new SparseArray(50);

    private u c(int i) {
        w wVar = new w(i);
        this.f5007a.put(i, wVar);
        return wVar;
    }

    public boolean a(int i) {
        return this.f5007a.get(i) != null;
    }

    public void b(int i) {
        u uVarC = (u) this.f5007a.get(i);
        if (uVarC != null) {
            x2.a("TimeSpentCore: CountBasedTimeSpentsManager: found existed count based record with id = " + i);
        } else {
            x2.a("TimeSpentCore: CountBasedTimeSpentsManager: not found existed count based record with id = " + i + ", creating new");
            uVarC = c(i);
        }
        uVarC.f();
        x2.c("TimeSpent: incremented count based TimeSpent, id = " + i + ", count = " + uVarC.d());
    }

    public ArrayList a() {
        x2.a("TimeSpentCore: CountBasedTimeSpentsManager: onTick: start collecting count based TimeSpents");
        int size = this.f5007a.size();
        ArrayList arrayList = new ArrayList(size);
        for (int i = 0; i < size; i++) {
            arrayList.add((v) this.f5007a.valueAt(i));
        }
        this.f5007a.clear();
        x2.a("TimeSpentCore: CountBasedTimeSpentsManager: onTick: collected " + arrayList.size() + " count based TimeSpents");
        return arrayList;
    }
}
