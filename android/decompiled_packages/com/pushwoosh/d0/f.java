package com.pushwoosh.d0;

import android.text.TextUtils;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes6.dex */
public abstract class f {
    public static final ArrayList c = new ArrayList();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public String f5058a = null;
    public a b;

    public f() {
        ArrayList arrayList = c;
        arrayList.add("9774d56d682e549c");
        arrayList.add("1234567");
        arrayList.add("abcdef");
        arrayList.add("dead00beef");
        arrayList.add("unknown");
    }

    public final void a(i iVar, String str) {
        a aVar;
        if (((TextUtils.isEmpty(str) || TextUtils.isEmpty(str.replace('0', ' ').replace('-', ' ').trim())) ? true : c.contains(str.toLowerCase())) && (aVar = this.b) != null) {
            iVar.a(aVar.a());
        } else {
            this.f5058a = str;
            iVar.a(str);
        }
    }

    public abstract String b();

    public final String a() {
        a aVar;
        synchronized (this) {
            String str = this.f5058a;
            if (str != null) {
                return str;
            }
            String strB = b();
            if (((TextUtils.isEmpty(strB) || TextUtils.isEmpty(strB.replace('0', ' ').replace('-', ' ').trim())) ? true : c.contains(strB.toLowerCase())) && (aVar = this.b) != null) {
                return aVar.a();
            }
            this.f5058a = strB;
            return strB;
        }
    }

    public final void a(final i iVar) {
        synchronized (this) {
            String str = this.f5058a;
            if (str != null) {
                iVar.a(str);
            } else {
                a(new e() { // from class: com.pushwoosh.d0.f$$ExternalSyntheticLambda0
                    @Override // com.pushwoosh.d0.e
                    public final void a(String str2) {
                        this.f$0.a(iVar, str2);
                    }
                });
            }
        }
    }

    public void a(e eVar) {
        eVar.a(b());
    }
}
