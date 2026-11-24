package com.my.target.ads;

import android.content.Context;
import android.content.res.TypedArray;
import android.graphics.Point;
import android.util.AttributeSet;
import android.view.View;
import android.widget.FrameLayout;
import androidx.recyclerview.widget.ItemTouchHelper;
import com.my.target.R;
import com.my.target.common.CustomParams;
import com.my.target.common.MyTargetVersion;
import com.my.target.common.models.IAdLoadingError;
import com.my.target.gb;
import com.my.target.h6;
import com.my.target.j;
import com.my.target.kb;
import com.my.target.l;
import com.my.target.m;
import com.my.target.m1;
import com.my.target.mediation.AdNetworkConfig;
import com.my.target.qa;
import com.my.target.ra;
import com.my.target.t;
import com.my.target.ua;
import java.util.concurrent.atomic.AtomicBoolean;

/* JADX INFO: loaded from: classes6.dex */
public final class MyTargetView extends FrameLayout {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final j f4538a;
    public final AtomicBoolean b;
    public MyTargetViewListener c;
    public MyTargetViewRenderCrashListener d;
    public ra e;
    public AdSize f;
    public boolean g;
    public boolean h;

    public interface MyTargetViewListener {
        void onClick(MyTargetView myTargetView);

        void onLoad(MyTargetView myTargetView);

        void onNoAd(IAdLoadingError iAdLoadingError, MyTargetView myTargetView);

        void onShow(MyTargetView myTargetView);
    }

    public interface MyTargetViewRenderCrashListener {
        void onViewRenderCrash(MyTargetView myTargetView);
    }

    public MyTargetView(Context context) {
        this(context, null);
    }

    public void a(ua uaVar, AdSize adSize) {
        final h6.a aVarA = h6.a(this.f4538a.i());
        qa.a(uaVar, this.f4538a, aVarA).a(new l.b() { // from class: com.my.target.ads.MyTargetView$$ExternalSyntheticLambda0
            @Override // com.my.target.l.b
            public final void a(t tVar, m mVar) {
                this.f$0.a(aVarA, (ua) tVar, mVar);
            }
        }).a(aVarA.a(), getContext());
    }

    public void destroy() {
        ra raVar = this.e;
        if (raVar != null) {
            raVar.a();
            this.e = null;
        }
        this.c = null;
        this.d = null;
    }

    public String getAdSource() {
        ra raVar = this.e;
        if (raVar != null) {
            return raVar.b();
        }
        return null;
    }

    public float getAdSourcePriority() {
        ra raVar = this.e;
        if (raVar != null) {
            return raVar.c();
        }
        return 0.0f;
    }

    public CustomParams getCustomParams() {
        return this.f4538a.g();
    }

    public MyTargetViewListener getListener() {
        return this.c;
    }

    public AdSize getSize() {
        return this.f;
    }

    @Deprecated
    public void init(int i) {
        init(i, true);
    }

    public boolean isMediationEnabled() {
        return this.f4538a.k();
    }

    public void load() {
        if (!this.b.compareAndSet(false, true)) {
            gb.a("MyTargetView: Doesn't support multiple load");
            return;
        }
        final h6.a aVarA = h6.a(this.f4538a.i());
        h6 h6VarA = aVarA.a();
        gb.a("MyTargetView: View load");
        a();
        qa.a(this.f4538a, aVarA).a(new l.b() { // from class: com.my.target.ads.MyTargetView$$ExternalSyntheticLambda1
            @Override // com.my.target.l.b
            public final void a(t tVar, m mVar) {
                this.f$0.b(aVarA, (ua) tVar, mVar);
            }
        }).a(h6VarA, getContext());
    }

    public void loadFromBid(String str) {
        this.f4538a.b(str);
        this.f4538a.b(false);
        load();
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onAttachedToWindow() {
        super.onAttachedToWindow();
        this.h = true;
        ra raVar = this.e;
        if (raVar != null) {
            raVar.a(true);
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        this.h = false;
        ra raVar = this.e;
        if (raVar != null) {
            raVar.a(false);
        }
    }

    @Override // android.widget.FrameLayout, android.view.View
    public void onMeasure(int i, int i2) {
        if (!this.g) {
            b();
        }
        super.onMeasure(i, i2);
    }

    @Override // android.view.View
    public void onWindowFocusChanged(boolean z) {
        super.onWindowFocusChanged(z);
        ra raVar = this.e;
        if (raVar != null) {
            raVar.b(z);
        }
    }

    public void setAdNetworkConfig(String str, AdNetworkConfig adNetworkConfig) {
        this.f4538a.a(str, adNetworkConfig);
    }

    public void setAdSize(AdSize adSize) {
        if (adSize == null) {
            gb.a("MyTargetView: AdSize cannot be null");
            return;
        }
        if (this.g && AdSize.a(this.f, adSize)) {
            return;
        }
        this.g = true;
        if (this.b.get()) {
            AdSize adSize2 = this.f;
            AdSize adSize3 = AdSize.ADSIZE_300x250;
            if (AdSize.a(adSize2, adSize3) || AdSize.a(adSize, adSize3)) {
                gb.a("MyTargetView: unable to switch size to/from 300x250");
                return;
            }
        }
        ra raVar = this.e;
        if (raVar != null) {
            raVar.a(adSize);
            View childAt = getChildAt(0);
            if (childAt instanceof m1) {
                childAt.requestLayout();
            }
        }
        this.f = adSize;
        a();
    }

    public void setListener(MyTargetViewListener myTargetViewListener) {
        this.c = myTargetViewListener;
    }

    public void setMediationEnabled(boolean z) {
        this.f4538a.a(z);
    }

    public void setRefreshAd(boolean z) {
        this.f4538a.b(z);
    }

    public void setSlotId(int i) {
        if (this.b.get()) {
            return;
        }
        this.f4538a.c(i);
    }

    public MyTargetView(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public final void b() {
        Context context = getContext();
        Point pointB = kb.b(context);
        int i = pointB.x;
        float f = pointB.y;
        AdSize adSize = this.f;
        if (i != adSize.f4539a || adSize.b > f * 0.15f) {
            AdSize adSizeForCurrentOrientation = AdSize.getAdSizeForCurrentOrientation(context);
            this.f = adSizeForCurrentOrientation;
            ra raVar = this.e;
            if (raVar != null) {
                raVar.a(adSizeForCurrentOrientation);
            }
        }
    }

    @Deprecated
    public void init(int i, boolean z) {
        init(i, 0, z);
    }

    public static final class AdSize {
        public static final int BANNER_300x250 = 1;
        public static final int BANNER_320x50 = 0;
        public static final int BANNER_728x90 = 2;
        public static final int BANNER_ADAPTIVE = 3;

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final int f4539a;
        public final int b;
        public final int c;
        public final int d;
        public final int e;
        public static final AdSize ADSIZE_320x50 = new AdSize(320, 50, 0);
        public static final AdSize ADSIZE_300x250 = new AdSize(300, ItemTouchHelper.Callback.DEFAULT_SWIPE_ANIMATION_DURATION, 1);
        public static final AdSize ADSIZE_728x90 = new AdSize(728, 90, 2);

        public AdSize(int i, int i2, int i3, int i4, int i5) {
            this.f4539a = i;
            this.b = i2;
            this.c = i3;
            this.d = i4;
            this.e = i5;
        }

        public static AdSize a(float f, float f2) {
            float fA = kb.a();
            float fMax = Math.max(Math.min(f > 524.0f ? (f / 728.0f) * 90.0f : (f / 320.0f) * 50.0f, f2), 50.0f * fA);
            return new AdSize((int) (f / fA), (int) (fMax / fA), (int) f, (int) fMax, 3);
        }

        public static AdSize getAdSizeForCurrentOrientation(int i, int i2, Context context) {
            Point pointB = kb.b(context);
            float fA = kb.a();
            return a(i * fA, Math.min(i2 * fA, pointB.y * 0.15f));
        }

        public int getHeight() {
            return this.b;
        }

        public int getHeightPixels() {
            return this.d;
        }

        public int getType() {
            return this.e;
        }

        public int getWidth() {
            return this.f4539a;
        }

        public int getWidthPixels() {
            return this.c;
        }

        public static AdSize getAdSizeForCurrentOrientation(int i, Context context) {
            return a(i * kb.a(), kb.b(context).y * 0.15f);
        }

        public static AdSize a(int i, Context context) {
            if (i == 1) {
                return ADSIZE_300x250;
            }
            if (i == 2) {
                return ADSIZE_728x90;
            }
            if (i != 3) {
                return ADSIZE_320x50;
            }
            return getAdSizeForCurrentOrientation(context);
        }

        public static AdSize getAdSizeForCurrentOrientation(Context context) {
            Point pointB = kb.b(context);
            return a(pointB.x, pointB.y * 0.15f);
        }

        public AdSize(int i, int i2, int i3) {
            this.f4539a = i;
            this.b = i2;
            float fA = kb.a();
            this.c = (int) (i * fA);
            this.d = (int) (i2 * fA);
            this.e = i3;
        }

        public static boolean a(AdSize adSize, AdSize adSize2) {
            return adSize.b == adSize2.b && adSize.f4539a == adSize2.f4539a && adSize.e == adSize2.e;
        }
    }

    public MyTargetView(Context context, AttributeSet attributeSet, int i) {
        TypedArray typedArrayObtainStyledAttributes;
        super(context, attributeSet, i);
        this.b = new AtomicBoolean();
        this.g = false;
        gb.c("MyTargetView created. Version - " + MyTargetVersion.VERSION);
        this.f4538a = j.a(0, "");
        this.f = AdSize.getAdSizeForCurrentOrientation(context);
        if (attributeSet == null) {
            return;
        }
        try {
            typedArrayObtainStyledAttributes = context.obtainStyledAttributes(attributeSet, R.styleable.MyTargetView);
        } catch (Throwable th) {
            gb.a("MyTargetView: Unable to get view attributes - " + th.getMessage());
            typedArrayObtainStyledAttributes = null;
        }
        if (typedArrayObtainStyledAttributes == null) {
            return;
        }
        this.f4538a.c(typedArrayObtainStyledAttributes.getInt(R.styleable.MyTargetView_myTarget_slotId, 0));
        this.f4538a.b(typedArrayObtainStyledAttributes.getBoolean(R.styleable.MyTargetView_myTarget_isRefreshAd, true));
        int i2 = typedArrayObtainStyledAttributes.getInt(R.styleable.MyTargetView_myTarget_adSize, -1);
        if (i2 >= 0) {
            if (i2 != 3) {
                this.g = true;
            }
            this.f = AdSize.a(i2, context);
        }
        typedArrayObtainStyledAttributes.recycle();
    }

    @Deprecated
    public void init(int i, int i2) {
        init(i, i2, true);
    }

    @Deprecated
    public void init(int i, int i2, boolean z) {
        setAdSize(AdSize.a(i2, getContext()));
        this.f4538a.c(i);
        this.f4538a.b(z);
        gb.a("MyTargetView: Initialized");
    }

    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final void b(ua uaVar, IAdLoadingError iAdLoadingError, h6.a aVar) {
        MyTargetViewListener myTargetViewListener = this.c;
        if (myTargetViewListener == null) {
            return;
        }
        if (uaVar == null) {
            if (iAdLoadingError == null) {
                iAdLoadingError = m.i;
            }
            myTargetViewListener.onNoAd(iAdLoadingError, this);
            return;
        }
        ra raVar = this.e;
        if (raVar != null) {
            raVar.a();
        }
        ra raVarA = ra.a(this, this.f4538a, aVar);
        this.e = raVarA;
        raVarA.a(this.h);
        this.e.b(uaVar);
        this.f4538a.b((String) null);
    }

    public MyTargetViewRenderCrashListener getRenderCrashListener() {
        return this.d;
    }

    public void setRenderCrashListener(MyTargetViewRenderCrashListener myTargetViewRenderCrashListener) {
        this.d = myTargetViewRenderCrashListener;
    }

    public final void a() {
        AdSize adSize = this.f;
        if (adSize == AdSize.ADSIZE_320x50) {
            this.f4538a.c("standard_320x50");
            return;
        }
        if (adSize == AdSize.ADSIZE_300x250) {
            this.f4538a.c("standard_300x250");
        } else if (adSize == AdSize.ADSIZE_728x90) {
            this.f4538a.c("standard_728x90");
        } else {
            this.f4538a.c("standard");
        }
    }
}
