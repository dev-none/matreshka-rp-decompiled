package com.pushwoosh.m;

import android.content.Context;
import java.io.File;

/* JADX INFO: loaded from: classes6.dex */
public final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Context f5239a;

    public a(Context context) {
        this.f5239a = context;
    }

    public final File a(String str) {
        Context context = this.f5239a;
        if (context == null || str == null) {
            return null;
        }
        return new File(context.getDir("htmls", 0), str);
    }
}
