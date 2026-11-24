package com.google.android.play.core.assetpacks;

import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import android.os.Parcelable;
import androidx.work.Data;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: compiled from: com.google.android.play:asset-delivery@@2.3.0 */
/* JADX INFO: loaded from: classes5.dex */
final class bz implements by {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String f4254a;
    private final Data b;
    private final Bundle c = new Bundle();

    /* synthetic */ bz(String str, Data data, ca caVar) {
        this.f4254a = str;
        this.b = data;
    }

    @Override // com.google.android.play.core.assetpacks.by
    public final List a(String str) {
        String[] stringArray = this.b.getStringArray(this.f4254a.concat(str));
        if (stringArray == null) {
            return new ArrayList();
        }
        ArrayList<String> arrayList = new ArrayList<>(stringArray.length);
        for (String str2 : stringArray) {
            if (true == str2.isEmpty()) {
                str2 = null;
            }
            arrayList.add(str2);
        }
        this.c.putStringArrayList(str, arrayList);
        return arrayList;
    }

    @Override // com.google.android.play.core.assetpacks.by
    public final void b(String str) {
        this.c.putBoolean("notification_intent_reconstruct_from_data", this.b.getBoolean(this.f4254a.concat("notification_intent_reconstruct_from_data"), false));
    }

    @Override // com.google.android.play.core.assetpacks.by
    public final void c(String str) {
        this.c.putInt(str, this.b.getInt(this.f4254a.concat(str), 0));
    }

    @Override // com.google.android.play.core.assetpacks.by
    public final void d(String str) {
        String[] stringArray = this.b.getStringArray(this.f4254a + str + ":intent_data");
        if (stringArray == null) {
            return;
        }
        ArrayList<? extends Parcelable> arrayList = new ArrayList<>(stringArray.length);
        for (String str2 : stringArray) {
            arrayList.add(str2.isEmpty() ? null : new Intent().setData(Uri.parse(str2)));
        }
        this.c.putParcelableArrayList(str, arrayList);
    }

    @Override // com.google.android.play.core.assetpacks.by
    public final /* synthetic */ void e(String str) {
        bx.a(this, str);
    }

    @Override // com.google.android.play.core.assetpacks.by
    public final void f(String str, long j) {
        this.c.putLong(str, this.b.getLong(this.f4254a.concat(str), j));
    }

    @Override // com.google.android.play.core.assetpacks.by
    public final void g(String str) {
        this.c.putString(str, this.b.getString(this.f4254a.concat(str)));
    }
}
