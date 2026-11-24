package com.pushwoosh.inapp.view;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.view.ViewGroup;
import android.webkit.WebView;
import androidx.core.os.BundleCompat;
import androidx.core.view.WindowCompat;
import com.pushwoosh.PushwooshPlatform;
import com.pushwoosh.inapp.network.model.Resource;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.n.d;
import com.pushwoosh.n.l;
import com.pushwoosh.n.m;
import com.pushwoosh.richmedia.RichMediaStyle;

/* JADX INFO: loaded from: classes6.dex */
public abstract class WebActivity extends Activity implements d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f5181a;
    protected Resource b;
    private l c;

    protected static Intent a(Intent intent, Resource resource, String str, int i) {
        intent.putExtra("extraInApp", resource);
        intent.putExtra("extraSound", str);
        intent.putExtra("extraMode", i);
        intent.putExtra("richMediaCode", !resource.isInApp() ? resource.getCode().substring(2) : "");
        intent.putExtra("inAppCode", resource.isInApp() ? resource.getCode() : "");
        if (resource.isRequired()) {
            intent.addFlags(268435456);
            return intent;
        }
        intent.addFlags(805306368);
        return intent;
    }

    protected abstract void a(Resource resource, String str, int i);

    protected abstract void a(l lVar);

    @Override // com.pushwoosh.n.d
    public final int c() {
        return this.f5181a;
    }

    public void close() {
        l lVar = this.c;
        if (lVar != null) {
            WebView webView = lVar.d;
            if (webView != null) {
                m mVar = lVar.e;
                if (mVar != null) {
                    mVar.h = true;
                }
                webView.stopLoading();
                ViewGroup viewGroup = (ViewGroup) lVar.d.getParent();
                if (viewGroup != null) {
                    viewGroup.removeView(lVar.d);
                }
                lVar.d.destroy();
                lVar.d = null;
                lVar.e = null;
            }
            this.c = null;
        }
        finish();
    }

    public void d() {
        l lVar = this.c;
        if (lVar != null) {
            lVar.a();
        }
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        getWindow().addFlags(Integer.MIN_VALUE);
        getWindow().setStatusBarColor(0);
        getWindow().setNavigationBarColor(0);
        WindowCompat.setDecorFitsSystemWindows(getWindow(), false);
        if (bundle != null) {
            this.b = (Resource) BundleCompat.getSerializable(bundle, "extraInApp", Resource.class);
        }
        a(getIntent());
    }

    @Override // android.app.Activity
    protected void onDestroy() {
        super.onDestroy();
        this.c = null;
    }

    @Override // android.app.Activity
    protected final void onNewIntent(Intent intent) {
        super.onNewIntent(intent);
        try {
            a(intent);
            setIntent(intent);
        } catch (Throwable th) {
            PWLog.warn("WebActivity", "processIntent threw in onNewIntent, finishing activity", th);
            finish();
        }
    }

    @Override // android.app.Activity
    protected void onSaveInstanceState(Bundle bundle) {
        super.onSaveInstanceState(bundle);
        bundle.putSerializable("extraInApp", this.b);
    }

    private void a(Intent intent) {
        l lVar;
        Bundle extras = intent.getExtras();
        Resource resource = extras != null ? (Resource) BundleCompat.getSerializable(extras, "extraInApp", Resource.class) : null;
        Resource resource2 = this.b;
        boolean z = resource2 != null && resource2.equals(resource);
        if (!z || this.c == null) {
            try {
                boolean zIsInMultiWindowMode = isInMultiWindowMode();
                RichMediaStyle richMediaStyle = PushwooshPlatform.getInstance().getRichMediaController().e;
                if (z) {
                    l lVar2 = new l(this, this.b.getLayout(), richMediaStyle, zIsInMultiWindowMode);
                    this.c = lVar2;
                    lVar2.setWebViewClient(new m(this, this.b));
                    if (lVar != null) {
                        return;
                    } else {
                        return;
                    }
                }
                this.b = resource;
                if (resource == null) {
                    this.b = (Resource) intent.getSerializableExtra("extraInApp");
                }
                if (this.b == null) {
                    finish();
                    if (lVar != null) {
                        return;
                    } else {
                        return;
                    }
                }
                intent.getStringExtra("richMediaCode");
                intent.getStringExtra("inAppCode");
                String stringExtra = intent.getStringExtra("extraSound");
                this.f5181a = intent.getIntExtra("extraMode", 0);
                l lVar3 = new l(this, this.b.getLayout(), richMediaStyle, zIsInMultiWindowMode);
                this.c = lVar3;
                lVar3.setWebViewClient(new m(this, this.b));
                a(this.b, stringExtra, this.f5181a);
            } finally {
                lVar = this.c;
                if (lVar != null) {
                    a(lVar);
                }
            }
        }
    }
}
