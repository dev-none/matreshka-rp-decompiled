package com.pushwoosh.n;

import android.app.Fragment;
import android.os.Bundle;
import androidx.core.os.BundleCompat;
import com.pushwoosh.function.Result;
import com.pushwoosh.inapp.network.model.Resource;
import java.lang.ref.WeakReference;

/* JADX INFO: loaded from: classes6.dex */
public class c extends Fragment implements a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public b f5262a;
    public WeakReference b = new WeakReference(null);
    public int c = 4;
    public com.pushwoosh.i.a d;
    public com.pushwoosh.g.a e;

    @Override // com.pushwoosh.n.a
    public final void a(Result result) {
        k kVar;
        if (result.isSuccess()) {
            this.c = 2;
            this.d = (com.pushwoosh.i.a) result.getData();
        } else {
            this.c = 3;
            this.e = (com.pushwoosh.g.a) result.getException();
        }
        WeakReference weakReference = this.b;
        if (weakReference == null || (kVar = (k) weakReference.get()) == null) {
            return;
        }
        if (!result.isSuccess()) {
            kVar.e();
            kVar.a((com.pushwoosh.g.a) result.getException());
        } else {
            if (kVar.a((com.pushwoosh.i.a) result.getData())) {
                return;
            }
            kVar.e();
        }
    }

    public final void b() {
        if (getActivity() instanceof k) {
            this.b = new WeakReference((k) getActivity());
        }
        k kVar = (k) this.b.get();
        if (kVar == null) {
            return;
        }
        int iA = com.pushwoosh.f.a.a(this.c);
        if (iA == 0) {
            kVar.b();
            return;
        }
        if (iA == 1) {
            kVar.e();
            kVar.a(this.d);
        } else if (iA == 2) {
            kVar.a(this.e);
            kVar.e();
        } else {
            if (getArguments() == null) {
                return;
            }
            b bVar = new b((Resource) BundleCompat.getSerializable(getArguments(), "keyInapp", Resource.class), this);
            this.f5262a = bVar;
            bVar.a();
        }
    }

    @Override // android.app.Fragment
    public final void onActivityCreated(Bundle bundle) {
        super.onActivityCreated(bundle);
        b();
    }

    @Override // android.app.Fragment
    public final void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setRetainInstance(true);
        if (getArguments() == null) {
            return;
        }
        Resource resource = (Resource) BundleCompat.getSerializable(getArguments(), "keyInapp", Resource.class);
        if (bundle == null) {
            b bVar = new b(resource, this);
            this.f5262a = bVar;
            bVar.a();
            return;
        }
        int i = bundle.getInt("[InApp]InAppFragment.key_STATE");
        int[] iArr = new int[4];
        System.arraycopy(com.pushwoosh.f.a.f5069a, 0, iArr, 0, 4);
        this.c = iArr[i];
        this.d = (com.pushwoosh.i.a) BundleCompat.getSerializable(bundle, "[InApp]InAppFragment.key_HTML_DATA", com.pushwoosh.i.a.class);
        this.e = (com.pushwoosh.g.a) BundleCompat.getSerializable(bundle, "[InApp]InAppFragment.key_ERROR", com.pushwoosh.g.a.class);
        int i2 = this.c;
        if (i2 == 2 || i2 == 3) {
            return;
        }
        b bVar2 = new b(resource, this);
        this.f5262a = bVar2;
        bVar2.a();
    }

    @Override // android.app.Fragment
    public final void onDestroy() {
        super.onDestroy();
        b bVar = this.f5262a;
        if (bVar != null) {
            bVar.e = true;
            this.f5262a = null;
        }
    }

    @Override // android.app.Fragment
    public final void onDetach() {
        super.onDetach();
        this.b = null;
    }

    @Override // android.app.Fragment
    public final void onSaveInstanceState(Bundle bundle) {
        super.onSaveInstanceState(bundle);
        bundle.putSerializable("[InApp]InAppFragment.key_ERROR", this.e);
        bundle.putSerializable("[InApp]InAppFragment.key_HTML_DATA", this.d);
        bundle.putInt("[InApp]InAppFragment.key_STATE", com.pushwoosh.f.a.a(this.c));
    }

    @Override // com.pushwoosh.n.a
    public final void a() {
        this.c = 1;
        k kVar = (k) this.b.get();
        if (kVar != null) {
            kVar.b();
        }
    }
}
