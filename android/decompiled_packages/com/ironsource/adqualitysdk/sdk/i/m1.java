package com.ironsource.adqualitysdk.sdk.i;

import android.text.TextUtils;
import android.view.View;
import android.view.ViewGroup;
import android.webkit.WebView;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;
import java.util.WeakHashMap;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public final class m1 extends AbstractC0325 implements k1, View.OnLayoutChangeListener {

    /* JADX INFO: renamed from: ﮌ, reason: contains not printable characters */
    public static final String f452 = StringFog.decrypt("Q1P0wCNaLRJxTdvABEwVH3hf6A==\n", "FDqapEwte3s=\n");

    /* JADX INFO: renamed from: ﮐ, reason: contains not printable characters */
    public l1 f453;

    /* JADX INFO: renamed from: ﱟ, reason: contains not printable characters */
    public final WeakHashMap f454;

    /* JADX INFO: renamed from: ﱡ, reason: contains not printable characters */
    public Class f455;

    public m1(JSONObject jSONObject) {
        super(null);
        this.f454 = new WeakHashMap();
        this.f453 = new l1();
        m8383(jSONObject);
    }

    @Override // android.view.View.OnLayoutChangeListener
    public final void onLayoutChange(View view, int i, int i2, int i3, int i4, int i5, int i6, int i7, int i8) {
        try {
            View viewM8377 = m8377(view, this.f455);
            if (viewM8377 != null) {
                if (!this.f454.containsKey(viewM8377)) {
                    this.f454.put(viewM8377, Boolean.TRUE);
                    m8486(new JSONObject(), (Object) viewM8377, Integer.toHexString(viewM8377.hashCode()));
                }
                view.removeOnLayoutChangeListener(this);
            }
        } catch (Throwable th) {
            AbstractC1104.m8887(f452, StringFog.decrypt("YXHfsWY/USoEbMOSdWZXMVBAxb96eF0=\n", "JAOt3hQfOEQ=\n"), th, false);
        }
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0325
    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final void mo8381(Object obj, ArrayList arrayList) {
        View view = (View) obj;
        l1 l1Var = this.f453;
        AbstractC1769o0.m8402(view, WebView.class, l1Var.f435, true, false, null, l1Var.f1306, arrayList);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0325
    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final InterfaceC0510 mo8382() {
        return this;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void m8383(JSONObject jSONObject) {
        l1 l1Var = new l1(jSONObject);
        this.f1196 = l1Var;
        this.f453 = l1Var;
        try {
            this.f455 = Class.forName(l1Var.f436);
            C0697.m8619().m8621(this);
        } catch (ClassNotFoundException e) {
            AbstractC0323.m8471(f452, StringFog.decrypt("fBESoSHoxz5KFwWgOqbMd00MQKslrcUjSkMGvDyliw==\n", "OWNgzlPIq1c=\n") + l1Var.f436 + StringFog.decrypt("o7o=\n", "mZrD4x8xM3c=\n") + e.getLocalizedMessage());
        }
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0325
    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final View mo8379(Object obj) {
        return (View) obj;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0325
    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final M0 mo8380() {
        return new O0();
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.k1
    /* JADX INFO: renamed from: ﾇ */
    public final void mo8364(View view) {
        View viewM8377 = m8377(view, this.f455);
        if (viewM8377 == null || this.f454.remove(viewM8377) == null) {
            return;
        }
        m8483(view);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.k1
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8365(View view) {
        View viewM8378;
        View viewM8377 = m8377(view, this.f455);
        if (viewM8377 != null) {
            if (this.f454.containsKey(viewM8377)) {
                return;
            }
            this.f454.put(viewM8377, Boolean.TRUE);
            m8486(new JSONObject(), (Object) viewM8377, Integer.toHexString(viewM8377.hashCode()));
            return;
        }
        if (TextUtils.isEmpty(this.f453.f434) || (viewM8378 = m8378(view, this.f453.f434)) == null) {
            return;
        }
        viewM8378.addOnLayoutChangeListener(this);
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static View m8377(View view, Class cls) {
        if (!(view instanceof ViewGroup)) {
            return null;
        }
        ViewGroup viewGroup = (ViewGroup) view;
        for (int i = 0; i < viewGroup.getChildCount(); i++) {
            View childAt = viewGroup.getChildAt(i);
            if (cls.isAssignableFrom(childAt.getClass())) {
                return childAt;
            }
            View viewM8377 = m8377(childAt, cls);
            if (viewM8377 != null) {
                return viewM8377;
            }
        }
        return null;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static View m8378(View view, String str) {
        if (!(view instanceof ViewGroup)) {
            return null;
        }
        ViewGroup viewGroup = (ViewGroup) view;
        for (int i = 0; i < viewGroup.getChildCount(); i++) {
            View childAt = viewGroup.getChildAt(i);
            if (childAt.getClass().getName().startsWith(str)) {
                return childAt;
            }
            View viewM8378 = m8378(childAt, str);
            if (viewM8378 != null) {
                return viewM8378;
            }
        }
        return null;
    }
}
